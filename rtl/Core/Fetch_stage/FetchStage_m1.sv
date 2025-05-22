module FetchStage_m1(

    input  wire        clk,
    input  wire        clk_en,
    input  wire        sync_rst,

    input  wire        icache_miss,
    input  wire        write_en,
    input  wire [14:0] data_in,

    output wire [14:0] data_out,
    output wire [14:0] address_out
    
);

    reg  [14:0] pc;

    always_ff @(posedge clk) begin : PC_ff
        if(sync_rst) begin
            pc <= 'h0;
        end else if(clk_en) begin
            if(!icache_miss && !write_en) begin
                pc <= pc + 1;
            end else if(write_en) begin
                pc <= data_in;
            end
        end
    end

    assign data_out    = pc;
    assign address_out = sync_rst ? 'h0 : (write_en ? data_in : (pc + 1));

endmodule : FetchStage_m1
