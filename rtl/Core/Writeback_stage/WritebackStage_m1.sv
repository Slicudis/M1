module WritebackStage_m1(

    input  wire        clk,
    input  wire        clk_en,
    input  wire        sync_rst,
 
    input  wire [15:0] alu_data,
    input  wire [3:0]  alu_dest_addr,
    input  wire        alu_valid,
 
    input  wire [15:0] mul_data,
    input  wire [3:0]  mul_dest_addr,
    input  wire        mul_valid,
 
    input  wire [15:0] div_data,
    input  wire [3:0]  div_dest_addr,
    input  wire        div_valid,
 
    input  wire [15:0] lsu_data,
    input  wire [3:0]  lsu_dest_addr,
    input  wire        lsu_valid,

    output wire        empty,
    output wire        conflict_stall,

    output wire [15:0] data_out,
    output wire [3:0]  dest_addr_out,
    output wire        writeback_en
    
);

    typedef struct{
        reg [15:0] data;
        reg [3:0]  dest;
        reg        valid;
    } buffer_t;

    buffer_t alu;
    buffer_t mul;
    buffer_t div;
    buffer_t lsu;

    always_ff @(posedge clk) begin
        if(sync_rst) begin
            alu.valid <= 'b0;
            mul.valid <= 'b0;
            div.valid <= 'b0;
            lsu.valid <= 'b0;
        end else if(clk_en) begin
            if(!conflict_stall) begin
                alu.data <= alu_data;
                alu.dest <= alu_dest_addr;
                alu.valid <= alu_valid && (|alu_dest_addr);

                mul.data <= mul_data;
                mul.dest <= mul_dest_addr;
                mul.valid <= mul_valid && (|mul_dest_addr);

                div.data <= div_data;
                div.dest <= div_dest_addr;
                div.valid <= div_valid && (|div_dest_addr);

                lsu.data <= lsu_data;
                lsu.dest <= lsu_dest_addr;
                lsu.valid <= lsu_valid && (|lsu_dest_addr);
            end else begin
                case(selector)
                    2'b00: alu.valid <= 'b0;
                    2'b01: mul.valid <= 'b0;
                    2'b10: div.valid <= 'b0;
                    2'b11: lsu.valid <= 'b0;
                    default: /**/;
                endcase
            end
        end
    end
    
    logic wb_conflict;

    always_comb begin : DetectConflict
        logic [15:0] truth_table = 16'b1111111011101000;
        wb_conflict = truth_table[{alu.valid, mul.valid, div.valid, lsu.valid}];
    end

    assign conflict_stall = wb_conflict;
    
    logic [1:0] selector;

    always_comb begin
        logic [15:0] truth_table0 = 16'b00000000_1111_00_1_1;
        logic [15:0] truth_table1 = 16'b00000000_0000_11_1_1;
        selector = {truth_table1[{alu.valid, mul.valid, div.valid, lsu.valid}], truth_table0[{alu.valid, mul.valid, div.valid, lsu.valid}]};
    end

    logic [15:0] selected_data;
    logic [3:0]  selected_dest;

    always_comb begin : WritebackMux
        case(selector)
            2'b00:   {selected_data, selected_dest} = {alu.data, alu.dest};
            2'b01:   {selected_data, selected_dest} = {mul.data, mul.dest};
            2'b10:   {selected_data, selected_dest} = {div.data, div.dest};
            2'b11:   {selected_data, selected_dest} = {lsu.data, lsu.dest};
            default: {selected_data, selected_dest} = {lsu.data, lsu.dest};
        endcase
    end
    
    assign data_out = selected_data;
    assign dest_addr_out = selected_dest;
    assign writeback_en = |({{alu.valid, mul.valid, div.valid, lsu.valid}});
    assign empty = !writeback_en;

endmodule : WritebackStage_m1