module Regfile_m1(

    input  wire        clk,
    input  wire        clk_en,
    input  wire        sync_rst,

    input  wire        reserve,
    input  wire [3:0]  reserve_addr,

    input  wire [3:0]  rs1_addr,
    input  wire [3:0]  rs2_addr,
    input  wire [3:0]  opcode,
    input  wire [3:0]  func4,

    output wire [15:0] rs1_data_out,
    output wire [15:0] rs2_data_out,
    output wire        rs1_busy,
    output wire        rs2_busy,

    input  wire        write_en,
    input  wire [3:0]  writeback_addr,
    input  wire [15:0] data_in
    
);

    reg [15:0] regfile    [15:1];
    reg        scoreboard [15:1];

    logic [15:0] special_constant;

    always_comb begin : SpecialConstant_LUT
        case({opcode, func4})
            {4'h0, 4'h4}: special_constant = 16'hffff;
            {4'h0, 4'h6}: special_constant = 16'h0001;
            {4'h0, 4'h7}: special_constant = 16'h0001;
            {4'h0, 4'h8}: special_constant = 16'h0001;
            {4'h0, 4'h9}: special_constant = 16'h0001;
            {4'h0, 4'ha}: special_constant = 16'h0001;

            {4'h1, 4'h1}: special_constant = 16'h0001;
            {4'h1, 4'h2}: special_constant = 16'h0001;
            {4'h1, 4'h3}: special_constant = 16'h0001;
            {4'h1, 4'h4}: special_constant = 16'h0001;
            {4'h1, 4'h6}: special_constant = 16'h000f;
            {4'h1, 4'h7}: special_constant = 16'hffff;
            {4'h1, 4'h9}: special_constant = 16'h0001;
            {4'h1, 4'ha}: special_constant = 16'h0001;
            {4'h1, 4'hb}: special_constant = 16'h0001;
            {4'h1, 4'hc}: special_constant = 16'h0001;
            {4'h1, 4'he}: special_constant = 16'h000f;
            {4'h1, 4'hf}: special_constant = 16'hffff;
            default:      special_constant = 16'h0000;
        endcase
    end

    wire [15:0] regfile_read [15:0];
    wire [15:0] scoreboard_read;

    reg [15:0] rs1_buffer;
    reg [15:0] rs2_buffer;

    reg scoreboard_buffer1;
    reg scoreboard_buffer2;

    genvar i;
    generate
        for(i = 1; i < 16; i++) begin : RegfileGen
            

            assign regfile_read[0] = special_constant;
            assign scoreboard_read[0] = 'b0;
            assign regfile_read[i] = regfile[i];
            assign scoreboard_read[i] = scoreboard[i];

            always_ff @(posedge clk) begin
                if(sync_rst) begin
                    scoreboard[i] <= 'b0;
                end else if(clk_en) begin
                    if(write_en && (writeback_addr == i)) begin
                        scoreboard[i] <= 'b0;
                    end else if(reserve && (reserve_addr == i)) begin
                        scoreboard[i] <= 'b1;
                    end
                end
            end
        end
    endgenerate

    always_ff @(posedge clk) begin
        if(sync_rst) begin
            scoreboard_buffer1 <= 'b0;
            scoreboard_buffer2 <= 'b0;
        end else if(clk_en) begin
            rs1_buffer <= (write_en && (rs1_addr == writeback_addr)) ? data_in : regfile_read[rs1_addr];
            rs2_buffer <= (write_en && (rs2_addr == writeback_addr)) ? data_in : regfile_read[rs2_addr];
            scoreboard_buffer1 <= (reserve && (reserve_addr == rs1_addr) && |reserve_addr) || (!(write_en && (rs1_addr == writeback_addr)) && scoreboard_read[rs1_addr]);
            scoreboard_buffer2 <= (reserve && (reserve_addr == rs2_addr) && |reserve_addr) || (!(write_en && (rs2_addr == writeback_addr)) && scoreboard_read[rs2_addr]);
            if(write_en) begin
                regfile[writeback_addr] <= data_in;
            end
        end
    end

    assign rs1_data_out = rs1_buffer;
    assign rs2_data_out = rs2_buffer;
    assign rs1_busy = scoreboard_buffer1;
    assign rs2_busy = scoreboard_buffer2;

endmodule : Regfile_m1
