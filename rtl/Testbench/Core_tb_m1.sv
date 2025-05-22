`include "Types_m1.sv"
import Types_m1::*;

module Core_tb_m1(
    input wire clk,
    input wire clk_en,
    input wire sync_rst
);

    wire icache_req;
    wire [14:0] inst_addr;

    Core_m1 Core_m1_instance (
        .clk                (clk),
        .clk_en             (clk_en),
        .sync_rst           (sync_rst),
        .icache_miss        (0),
        .instruction_in     ({rom_buffer[7:0], rom_buffer[15:8]}),
        .icache_req         (icache_req),
        .inst_address_out   (inst_addr),
        .mem_address_out    (),
        .mem_mask_out       (),
        .mem_read_fnc_type  (),
        .mem_data_out       (),
        .mem_mode           (),
        .mem_enable         (),
        .mem_wb_dest        (),
        .mem_input_ready    (),
        .mem_data_in        (),
        .mem_wb_dest_in     (),
        .mem_read_ack       (),
        .mem_available      (),
        .mem_idle           ()
    );


    reg [15:0] rom [255:0];
    reg [15:0] rom_buffer;
    initial begin
        $readmemh("/mnt/e/programacion/systemverilog/MINT/M1/rtl/test_programs/test.txt", rom);
    end

    always_ff @(posedge clk) begin
        if(sync_rst) begin
            rom_buffer <= 'h0;
        end else if(clk_en) begin
            if(icache_req) rom_buffer <= rom[inst_addr[7:0]];
        end
    end


endmodule : Core_tb_m1