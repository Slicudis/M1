import Types_m1::*;
module Core_m1(

    input  wire        clk,
    input  wire        clk_en,
    input  wire        sync_rst,
 
    // * --- Instruction fetch interface ---

    input  wire        icache_miss,
    input  wire [15:0] instruction_in,
    output wire        icache_req,
    output wire [14:0] inst_address_out,

    // * --- Memory controller interface ---

    output wire [14:0] mem_address_out,  
    output wire [1:0]  mem_mask_out,     
    output wire [1:0]  mem_read_fnc_type, //Read data type on read, or fence type on fence
    output wire [15:0] mem_data_out,     
    output wire [1:0]  mem_mode,          //0=READ, 1=WRITE, 2/3=FENCE   
    output wire        mem_enable,     
    output wire [3:0]  mem_wb_dest,      

    output wire        mem_input_ready,

    input  wire [15:0] mem_data_in,
    input  wire [3:0]  mem_wb_dest_in,
    input  wire        mem_read_ack,
    input  wire        mem_available,
    input  wire        mem_idle

);

    wire [14:0] fetch_data_out;

    wire [15:0] adjusted_instruction_in = icache_miss ? 16'h0 : {instruction_in[7:0], instruction_in[15:8]};

    typedef struct packed{
        logic [11:0] inst;
        uop_t        uop;
        logic [14:0] pc;
        logic [14:0] jmp_tgt;
        logic [14:0] inc_pc;
        logic [15:0] rs1_data;
        logic [15:0] rs2_data;
        logic        rs1_busy;
        logic        rs2_busy;
    } decode_out_t;

    decode_out_t decode_out;

    typedef struct packed{
        logic        regfile_reserve;
        logic [3:0]  reserve_addr;
        logic        jmp_en;
        logic [14:0] jmp_tgt;
        logic        pipeline_stall;
        alu_if_t     alu;
        seq_if_t     mul;
        seq_if_t     div;
        lsu_if_t     lsu;
        brh_if_t     brh;
    } issue_out_t;

    issue_out_t issue_out;

    typedef struct packed{
        logic [15:0] result;
        logic [3:0]  dest_addr;
        logic        valid;
    } exe_res_t;

    exe_res_t alu_out;

    exe_res_t mul_out;
    wire      mul_empty;

    exe_res_t div_out;
    wire      div_busy;

    exe_res_t lsu_out;
    wire      lsu_empty;
    wire      lsu_full;

    wire        brh_flush;
    wire        brh_issue_inval;
    wire [14:0] brh_pc_tgt;

    wire        wb_empty;    
    wire        wb_conflict; 
    wire [15:0] wb_data_out; 
    wire [3:0]  wb_dest_addr;
    wire        writeback_en;

    reg reset_buffer;

    always_ff @(posedge clk) begin
        if(sync_rst) reset_buffer <= 1'b1;
        else if(clk_en) reset_buffer <= 1'b0;
    end


    FetchStage_m1 FetchStage (
        .clk            (clk),
        .clk_en         (clk_en && icache_req),
        .sync_rst       (sync_rst || reset_buffer),
        .icache_miss    (icache_miss),
        .write_en       (issue_out.jmp_en || brh_flush),
        .data_in        (brh_flush ? brh_pc_tgt : issue_out.jmp_tgt),
        .data_out       (fetch_data_out),
        .address_out    (inst_address_out)
    );

    DecodeStage_m1 DecodeStage (
        .clk                (clk),
        .clk_en             (clk_en),
        .sync_rst           (sync_rst || reset_buffer),
        .hazard_stall       (wb_conflict || issue_out.pipeline_stall),
        .flush              (brh_flush || issue_out.jmp_en),
        .instruction_in     (adjusted_instruction_in),
        .pc_in              (fetch_data_out),
        .instruction_out    (decode_out.inst),
        .uop_out            (decode_out.uop),
        .pc_out             (decode_out.pc),
        .jmp_target         (decode_out.jmp_tgt),
        .inc_pc_out         (decode_out.inc_pc),
        .rs1_data_out       (decode_out.rs1_data),
        .rs2_data_out       (decode_out.rs2_data),
        .rs1_busy           (decode_out.rs1_busy),
        .rs2_busy           (decode_out.rs2_busy),

        .issue_reserve      (issue_out.regfile_reserve),
        .reserve_addr       (issue_out.reserve_addr),

        .regfile_write_en   (writeback_en),
        .writeback_addr     (wb_dest_addr),
        .regfile_data_in    (wb_data_out)
    );

    IssueStage_m1 IssueStage (
        .flush              (brh_flush || brh_issue_inval),
        .wb_conflict_stall  (wb_conflict),
        .wb_en              (writeback_en),
        .wb_addr_in         (wb_dest_addr),
        .wb_data_in         (wb_data_out),

        .uop_in             (decode_out.uop),
        .inst_in            (decode_out.inst),
        .pc_in              (decode_out.pc),
        .jmp_target_in      (decode_out.jmp_tgt),
        .inc_pc_in          (decode_out.inc_pc),
        .rs1_data_in        (decode_out.rs1_data),
        .rs2_data_in        (decode_out.rs2_data),
        .rs1_busy_in        (decode_out.rs1_busy),
        .rs2_busy_in        (decode_out.rs2_busy),

        .regfile_reserve    (issue_out.regfile_reserve),
        .reserve_addr       (issue_out.reserve_addr),

        .jmp_en             (issue_out.jmp_en),
        .jmp_target_out     (issue_out.jmp_tgt),

        .pipeline_stall     (issue_out.pipeline_stall),

        .alu_out            (issue_out.alu),
        .mul_out            (issue_out.mul),
        .div_out            (issue_out.div),
        .brh_out            (issue_out.brh),
        .lsu_out            (issue_out.lsu),

        .mul_empty          (mul_empty),
        .div_busy           (div_busy),
        .lsu_empty          (lsu_empty),
        .lsu_full           (lsu_full),
        .wb_empty           (wb_empty)
    );

    ALU_m1 ALU (
        .call           (issue_out.alu.call),
        .dest_addr_in   (issue_out.alu.dest_addr),
        .operation      (issue_out.alu.operation),
        .type_select    (issue_out.alu.type_sel),
        .data_in1       (issue_out.alu.data1),
        .data_in2       (issue_out.alu.data2),
        .data_out       (alu_out.result),
        .dest_addr_out  (alu_out.dest_addr),
        .valid_out      (alu_out.valid)
    );

    Multiplier_m1 Multiplier (
        .clk            (clk),
        .clk_en         (clk_en && !(wb_conflict && mul_out.valid)),
        .sync_rst       (sync_rst || reset_buffer),
        .call           (issue_out.mul.call),
        .operation_in   (issue_out.mul.op),
        .dest_addr_in   (issue_out.mul.dest_addr),
        .data_in1       (issue_out.mul.data1),
        .data_in2       (issue_out.mul.data2),

        .empty          (mul_empty),
        .data_out       (mul_out.result),
        .dest_addr_out  (mul_out.dest_addr),
        .valid          (mul_out.valid)
    );

    Divider_m1 Divider (
        .clk            (clk),
        .clk_en         (clk_en && !(wb_conflict && div_out.valid)),
        .sync_rst       (sync_rst || reset_buffer),
        .call           (issue_out.div.call),
        .operation_in   (issue_out.div.op),
        .dest_addr_in   (issue_out.div.dest_addr),
        .data_in1       (issue_out.div.data1),
        .data_in2       (issue_out.div.data2),
        .busy           (div_busy),
        .data_out       (div_out.result),
        .dest_addr_out  (div_out.dest_addr),
        .data_out_valid (div_out.valid)
    );

    LSU_m1 LSU (
        .clk                (clk),
        .clk_en             (clk_en),
        .sync_rst           (sync_rst || reset_buffer),

        .wb_conflict_stall  (wb_conflict),

        .call               (issue_out.lsu.call),
        .dest_addr_in       (issue_out.lsu.dest_addr),
        .store_data_in      (issue_out.lsu.store_data),
        .address_in         (issue_out.lsu.address),
        .func4_in           (issue_out.lsu.func4),
        .fence_mode         (issue_out.lsu.fence_mode),
        .fence_type         (issue_out.lsu.fence_type),

        .lsq_full           (lsu_full),
        .lsu_empty          (lsu_empty),

        .wb_data_out        (lsu_out.result),
        .wb_dest_addr_out   (lsu_out.dest_addr),
        .wb_valid           (lsu_out.valid),

        .mem_address_out    (mem_address_out),
        .mem_mask_out       (mem_mask_out),
        .mem_read_fnc_type  (mem_read_fnc_type),
        .mem_data_out       (mem_data_out),
        .mem_mode           (mem_mode),
        .mem_enable         (mem_enable),
        .mem_wb_dest        (mem_wb_dest),

        .mem_input_ready    (mem_input_ready),

        .mem_data_in        (mem_data_in),
        .mem_wb_dest_in     (mem_wb_dest_in),
        .mem_read_ack       (mem_read_ack),
        .mem_available      (mem_available),
        .mem_idle           (mem_idle)
    );

    BranchUnit_m1 BranchUnit (
        .clk            (clk),
        .clk_en         (clk_en),
        .sync_rst       (sync_rst || reset_buffer),
        .call           (issue_out.brh.call),
        .operation      (issue_out.brh.op),
        .func4          (issue_out.brh.func4),
        .data_in1       (issue_out.brh.data1),
        .data_in2       (issue_out.brh.data2),
        .pc_in          (issue_out.brh.pc),
        .imm_in         (issue_out.brh.imm),
        .full_flush     (brh_flush),
        .issue_inval    (brh_issue_inval),
        .pc_target      (brh_pc_tgt)
    );

    WritebackStage_m1 WritebackStage (
        .clk            (clk),
        .clk_en         (clk_en),
        .sync_rst       (sync_rst || reset_buffer),
        .alu_data       (alu_out.result),
        .alu_dest_addr  (alu_out.dest_addr),
        .alu_valid      (alu_out.valid),
        .mul_data       (mul_out.result),
        .mul_dest_addr  (mul_out.dest_addr),
        .mul_valid      (mul_out.valid),
        .div_data       (div_out.result),
        .div_dest_addr  (div_out.dest_addr),
        .div_valid      (div_out.valid),
        .lsu_data       (lsu_out.result),
        .lsu_dest_addr  (lsu_out.dest_addr),
        .lsu_valid      (lsu_out.valid),
        
        .empty          (wb_empty),
        .conflict_stall (wb_conflict),
        .data_out       (wb_data_out),
        .dest_addr_out  (wb_dest_addr),
        .writeback_en   (writeback_en)
    );

    assign icache_req = !(issue_out.pipeline_stall || wb_conflict);

endmodule : Core_m1
