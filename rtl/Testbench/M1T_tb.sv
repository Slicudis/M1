`include "Types_m1.sv"
import Types_m1::*;

module M1T_tb(
    input wire clk,
    input wire clk_en,
    input wire sync_rst
);

    wire [15:0] gpi = 'h0;
    wire [15:0] gpo;

    reg rst_buffer;

    always_ff @(posedge clk) begin
        rst_buffer <= sync_rst;
    end

    Toplevel_m1t #(
        .IS_TESTBENCH(1)
    ) Toplevel_m1t_instance (
        .clk(clk),
        .async_rst(!(rst_buffer || sync_rst)),
        .gpi(gpi),
        .gpo(gpo)
    );

endmodule : M1T_tb