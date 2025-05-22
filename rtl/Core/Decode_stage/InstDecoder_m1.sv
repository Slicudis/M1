
import Types_m1::*;

module InstDecoder_m1(

    input  wire [3:0] opcode_in,
    input  wire [3:0] func4_in,

    output uop_t      uop_out
    
);
    //There are 2 steps in decoding. In the first step a compressed uOP is generated.
    //Then, the uOP gets decompressed into a more complex uOP.
    logic [7:0] compressed_uop;

    always_comb begin
        case(opcode_in)
            4'h0:    compressed_uop = 8'b0_0_0_0_000_1; //ALU0
            4'h1:    compressed_uop = 8'b0_0_0_0_111_1; //ALU1
            4'h2:    compressed_uop = 8'b0_0_0_1_000_0; //SEQ-ARITH
            4'h3:    compressed_uop = 8'b0_0_0_0_001_1; //ADI
            4'h4:    compressed_uop = 8'b0_0_0_0_100_1; //AUIPC
            4'h5:    compressed_uop = 8'b0_0_0_0_010_1; //LLI
            4'h6:    compressed_uop = 8'b0_0_0_0_011_1; //LUI
            4'h7:    compressed_uop = 8'b0_1_0_0_000_0; //BNZ
            4'h8:    compressed_uop = 8'b0_1_0_0_011_0; //JMP
            4'h9:    compressed_uop = 8'b0_1_0_0_001_0; //JLR
            4'ha:    compressed_uop = 8'b0_0_1_0_000_0; //MEM
            4'hb:    compressed_uop = 8'b1_0_0_0_010_0; //MISC
            default: compressed_uop = 8'b0_0_0_0_000_0;
        endcase
    end

    /*
    [0]   call_alu0
    [3:1] alu_dsel: rs1/rs2, rs1/i-imm, 0x0/i-imm, 0x0/u-imm, pc/u-imm, pc/0x2, - , rs1/rs2 (TYPE1_MODE) ||| brh_opsel: bnz, jlr, pred, jmp
    [4]   call_muldiv
    [5]   call_lsu
    [6]   call_brh
    [7]   misc
    */

    wire       calu    = compressed_uop[0];
    wire [2:0] copsel  = compressed_uop[3:1];
    wire       calu1   = compressed_uop[4];
    wire       cmuldiv = compressed_uop[4];
    wire       clsu    = compressed_uop[5];
    wire       cbrh    = compressed_uop[6];
    wire       cmisc   = compressed_uop[7];

    assign uop_out.call_alu       = calu;
    assign uop_out.alu_type_sel   = calu && (&copsel);
    assign uop_out.alu_force_add  = (|copsel && !(&copsel));
    assign uop_out.alu_dsel       = copsel;
    assign uop_out.call_mul       = cmuldiv && !func4_in[2];
    assign uop_out.call_div       = cmuldiv && func4_in[2];
    assign uop_out.call_lsu       = clsu && !copsel[0];
    assign uop_out.fence_mode     = cmisc && !(|func4_in);
    assign uop_out.call_brh       = cbrh || (cmisc && |func4_in);
    assign uop_out.brh_op         = copsel[1:0];
    assign uop_out.jmp            = cbrh && (copsel[0] && copsel[1]);
    assign uop_out.regfile_write  = calu || calu1 || cmuldiv || (clsu && !func4_in[3]) || (cbrh && copsel[0] && !copsel[1]);
    assign uop_out.rs1_dependency = (calu && !copsel[1] && !copsel[2]) || calu1 || cmuldiv || (clsu && func4_in[3]) || (cbrh && (copsel != 3'b01));
    assign uop_out.rs2_dependency = (calu && !(|copsel)) || (cbrh && (copsel == 3'b10)) || calu1 || cmuldiv || clsu;

endmodule : InstDecoder_m1
