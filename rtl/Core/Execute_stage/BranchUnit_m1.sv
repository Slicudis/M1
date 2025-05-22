module BranchUnit_m1(

    input  wire        clk,
    input  wire        clk_en,
    input  wire        sync_rst,

    input  wire        call,
    input  wire [1:0]  operation,
    input  wire [3:0]  func4,
    input  wire [15:0] data_in1,
    input  wire [15:0] data_in2,
    input  wire [14:0] pc_in,
    input  wire [7:0]  imm_in,

    output reg         full_flush,
    output reg         issue_inval,
    output reg  [14:0] pc_target
    
);

    always_ff @(posedge clk) begin : BRH_ff
        if(sync_rst) begin
            full_flush <= 'b0;
            issue_inval <= 'b0;
        end else if(clk_en) begin
            full_flush <= !operation[1] && call && (|data_in1);
            issue_inval <= (operation == 2'b10) && ((data_in1 != data_in2)^^func4[0]) && call;
            pc_target <= operation[0] ? ((data_in1 + {{8{imm_in[7]}}, imm_in})>>1) : (pc_in + {{7{imm_in[7]}}, imm_in});
        end
    end

endmodule : BranchUnit_m1