module Multiplier_m1(

    input  wire        clk,
    input  wire        clk_en,
    input  wire        sync_rst,

    input  wire        call,
    input  wire [1:0]  operation_in,
    input  wire [3:0]  dest_addr_in,
    input  wire [15:0] data_in1,
    input  wire [15:0] data_in2,

    output wire        empty,

    output wire [15:0] data_out,
    output wire [3:0]  dest_addr_out,
    output wire        valid
    
);

    ///
    // * --- Stage 1: Adjust ---

    typedef struct packed{
        reg [15:0] adj_data1;
        reg [15:0] adj_data2;
        reg        data1_sign;
        reg        data2_sign;
        reg [1:0]  operation;
        reg [3:0]  dest_addr;
        reg        valid;
    } stage1_t;

    stage1_t stage1;

    always_ff @(posedge clk) begin : Stage1_ff
        if(sync_rst) begin
            stage1.valid <= 'b0;
        end else if(clk_en) begin
            stage1.adj_data1 <= (operation_in[1]) ? data_in1 : (data_in1[15] ? -data_in1 : data_in1);
            stage1.adj_data2 <= (&operation_in[1:0]) ? data_in2 : (data_in2[15] ? -data_in2 : data_in2);
            stage1.data1_sign <= data_in1[15];
            stage1.data2_sign <= data_in2[15];
            stage1.operation <= operation_in;
            stage1.dest_addr <= dest_addr_in;
            stage1.valid <= call;
        end
    end

    ///
    // * --- Stage 2: Multiplication ---

    typedef struct packed{
        reg [31:0] partial_res;
        reg        data1_sign;
        reg        data2_sign;
        reg [1:0]  operation;
        reg [3:0]  dest_addr;
        reg        valid;
    } stage2_t;

    stage2_t stage2;

    always_ff @(posedge clk) begin : Stage2_ff
        if(sync_rst) begin
            stage2.valid <= 'b0;
        end else if(clk_en) begin
            stage2.partial_res <= stage1.adj_data1 * stage1.adj_data2;
            stage2.data1_sign <= stage1.data1_sign;
            stage2.data2_sign <= stage1.data2_sign;
            stage2.operation <= stage1.operation;
            stage2.dest_addr <= stage1.dest_addr;
            stage2.valid <= stage1.valid;
        end
    end

    wire neg_res = (|stage2.operation && stage2.data2_sign) ^^ (stage2.operation[1] && stage2.data2_sign);
    wire [31:0] adjusted_result = neg_res ? -stage2.partial_res : stage2.partial_res;

    assign data_out = (|stage2.operation) ? adjusted_result[31:16] : adjusted_result[15:0];
    assign dest_addr_out = stage2.dest_addr;
    assign valid = stage2.valid;

///
    assign empty = !(stage1.valid || stage2.valid);

endmodule : Multiplier_m1