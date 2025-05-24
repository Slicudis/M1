import Types_m1::*;
module DecodeStage_m1 (

    input wire         clk,
    input wire         clk_en,
    input wire         sync_rst,

    input  wire        hazard_stall,
    input  wire        flush,

    input  wire [15:0] instruction_in,
    input  wire [14:0] pc_in,

    output wire [11:0] instruction_out,
    output uop_t       uop_out,
    output wire [14:0] pc_out,
    output wire [14:0] jmp_target,
    output wire [14:0] inc_pc_out,

    output wire [15:0] rs1_data_out,
    output wire [15:0] rs2_data_out,
    output wire        rs1_busy,
    output wire        rs2_busy,

    input  wire        issue_reserve,
    input  wire [3:0]  reserve_addr,

    input  wire        regfile_write_en,
    input  wire [3:0]  writeback_addr,
    input  wire [15:0] regfile_data_in
    
);

    uop_t      uop_buffer;
    reg [11:0] instruction_buffer;
    reg [14:0] pc_buffer;
    reg [14:0] jmp_tgt_buffer;
    reg [14:0] inc_pc_buffer;

    wire [6:0] selected_high_brh_offset = (instruction_in[3] ? {{3{instruction_in[7]}}, instruction_in[7:4]} : {7{instruction_in[15]}});

    always_ff @(posedge clk) begin
        if(sync_rst || (flush && clk_en)) begin
            uop_buffer <= 'h0;
            instruction_buffer <= 'h0;
        end else if(clk_en) begin
            if(!hazard_stall) begin
                uop_buffer <= decoded_uop;
                instruction_buffer <= instruction_in[15:4];
                pc_buffer <= pc_in;
                jmp_tgt_buffer <= pc_in + {selected_high_brh_offset, instruction_in[15:8]};
                inc_pc_buffer <= pc_in + 1;
            end
        end
    end

    uop_t decoded_uop;

    InstDecoder_m1 InstructionDecoder (
        .opcode_in  (instruction_in[3:0]),
        .func4_in   (instruction_in[11:8]),
        .uop_out    (decoded_uop)
    );

    Regfile_m1 RegisterFile (
        .clk            (clk),
        .clk_en         (clk_en),
        .sync_rst       (sync_rst),
        .reserve        (issue_reserve),
        .reserve_addr   (reserve_addr),
        .rs1_addr       (instruction_in[7:4]),
        .rs2_addr       (instruction_in[15:12]),
        .opcode         (instruction_in[3:0]),
        .func4          (instruction_in[11:8]),
        .rs1_data_out   (rs1_data_out),
        .rs2_data_out   (rs2_data_out),
        .rs1_busy       (rs1_busy),
        .rs2_busy       (rs2_busy),
        .write_en       (regfile_write_en),
        .writeback_addr (writeback_addr),
        .data_in        (regfile_data_in)
    );

    assign instruction_out = instruction_buffer;
    assign uop_out         = uop_buffer;
    assign pc_out          = pc_buffer;
    assign jmp_target      = jmp_tgt_buffer;
    assign inc_pc_out      = inc_pc_buffer;

endmodule : DecodeStage_m1
