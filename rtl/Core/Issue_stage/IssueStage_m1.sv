import Types_m1::*;
module IssueStage_m1(

    input  wire           flush,
 
    input  wire           wb_conflict_stall,
    input  wire           wb_en,
    input  wire [3:0]     wb_addr_in,
    input  wire [15:0]    wb_data_in,

    input  uop_t          uop_in,
    input  wire [11:0]    inst_in,
    input  wire [14:0]    pc_in,
    input  wire [14:0]    jmp_target_in,
    input  wire [14:0]    inc_pc_in,
    input  wire [15:0]    rs1_data_in,
    input  wire [15:0]    rs2_data_in,
    input  wire           rs1_busy_in,
    input  wire           rs2_busy_in,

    output wire           regfile_reserve,
    output wire [3:0]     reserve_addr,

    output wire           jmp_en,
    output wire [14:0]    jmp_target_out,

    output wire           pipeline_stall,

    output alu_if_t       alu_out,
    output seq_if_t       mul_out,
    output seq_if_t       div_out,
    output brh_if_t       brh_out,
    output lsu_if_t       lsu_out,

    input  wire           mul_empty,
    input  wire           div_busy,
    input  wire           lsu_empty,
    input  wire           lsu_full,
    input  wire           wb_empty

);
    inst_t inst;
    assign inst = {inst_in, inst_in, inst_in, inst_in, inst_in};

    wire rs1_forward_en = (wb_en && (wb_addr_in == inst.r.rs1) && |inst.r.rs1);
    wire rs2_forward_en = (wb_en && (wb_addr_in == inst.r.rs2) && |inst.r.rs2);

    wire        rs1_busy = !rs1_forward_en && rs1_busy_in && (uop_in.rs1_dependency || uop_in.regfile_write && |inst.r.rs1);
    wire        rs2_busy = !rs2_forward_en && rs2_busy_in && uop_in.rs2_dependency;
    wire [15:0] rs1_data = rs1_forward_en ? wb_data_in : rs1_data_in;
    wire [15:0] rs2_data = rs2_forward_en ? wb_data_in : rs2_data_in;

    uop_t uop;
	 assign uop = (flush || wb_conflict_stall) ? 'h0 : uop_in;

    assign regfile_reserve = uop.regfile_write;
    assign reserve_addr = inst.r.rs1;

    wire inst_fence = uop.fence_mode && inst.r.rs1[2];
    wire exe_free = (mul_empty && !div_busy && lsu_empty && wb_empty);

    wire data_hazard = rs1_busy || rs2_busy || (rs1_busy && uop.regfile_write);
    assign pipeline_stall = data_hazard || (uop.call_div && div_busy) || (uop.call_lsu && lsu_full) || (inst_fence && !exe_free && !inst.r.rs1[0]);
    wire ifence_inval = uop.fence_mode && inst.r.rs1[2] && inst.r.rs1[0];

    assign jmp_en = uop.jmp || ifence_inval;
    assign jmp_target_out = ifence_inval ? inc_pc_in : jmp_target_in;

    // * --- ALU control ---

    assign alu_out.call = uop.call_alu && !pipeline_stall;
    assign alu_out.dest_addr = inst.r.rs1;
    assign alu_out.operation = uop.alu_force_add ? 'h0 : inst.r.func4;
    assign alu_out.type_sel = &uop.alu_dsel;

    always_comb begin
        case(uop.alu_dsel)
            3'b001:  {alu_out.data1, alu_out.data2} = {rs1_data, {{8{inst.i.imm[7]}}, inst.i.imm}};
            3'b010:  {alu_out.data1, alu_out.data2} = {16'h0, {{8{inst.i.imm[7]}}, inst.i.imm}};
            3'b011:  {alu_out.data1, alu_out.data2} = {16'h0, {inst.u.imm, 8'h0}};
            3'b100:  {alu_out.data1, alu_out.data2} = {pc_in, 1'b0, {inst.u.imm, 8'h0}};
            3'b101:  {alu_out.data1, alu_out.data2} = {pc_in, 1'b0,  16'h2};
            default: {alu_out.data1, alu_out.data2} = {rs1_data, rs2_data};
        endcase
    end

    // * --- MUL control ---

    assign mul_out.call = uop.call_mul && !pipeline_stall;
    assign mul_out.op = inst.r.func4[1:0];
    assign mul_out.dest_addr = inst.r.rs1;
    assign mul_out.data1 = rs1_data;
    assign mul_out.data2 = rs2_data;

    // * --- DIV control ---

    assign div_out.call = uop.call_div && !pipeline_stall;
    assign div_out.op = inst.r.func4[1:0];
    assign div_out.dest_addr = inst.r.rs1;
    assign div_out.data1 = rs1_data;
    assign div_out.data2 = rs2_data;

    // * --- BRH control ---

    assign brh_out.call = uop.call_brh && !pipeline_stall;
    assign brh_out.op = uop.brh_op;
    assign brh_out.func4 = inst.r.func4;
    assign brh_out.data1 = rs1_data;
    assign brh_out.data2 = rs2_data;
    assign brh_out.pc = pc_in;
    assign brh_out.imm = inst.i.imm;

    // * --- LSU control ---

    assign lsu_out.call = uop.call_lsu && !pipeline_stall;
    assign lsu_out.dest_addr = inst.r.rs1;
    assign lsu_out.store_data = rs1_data;
    assign lsu_out.address = rs2_data;
    assign lsu_out.func4 = inst.r.func4;
    assign lsu_out.fence_mode = uop.fence_mode;
    assign lsu_out.fence_type = inst.r.rs1[1:0];

endmodule : IssueStage_m1
