module Divider_m1(

    input  wire        clk,
    input  wire        clk_en,
    input  wire        sync_rst,
 
    input  wire        call,
    input  wire [1:0]  operation_in,
    input  wire [3:0]  dest_addr_in,
    input  wire [15:0] data_in1,
    input  wire [15:0] data_in2,
    
    output wire        busy,

    output wire [15:0] data_out,
    output wire [3:0]  dest_addr_out,
    output wire        data_out_valid
    
);
    reg [15:0] data_in1_buffer;
    reg [15:0] data_in2_buffer;
    reg [1:0]  operation_buffer;
    reg [3:0]  dest_addr_buffer;

    reg preserved_data1_sign;
    reg preserved_data2_sign;

    wire [15:0] cond_abs_data1 = (data_in1_buffer[15] && !operation_buffer[0]) ? -data_in1_buffer : data_in1_buffer;
    wire [15:0] cond_abs_data2 = (data_in2_buffer[15] && !operation_buffer[0]) ? -data_in2_buffer : data_in2_buffer;

    // Restoring division algorithm (2 iterations per cycle)

    reg [16:0] a_reg; //Holds remainder at the end
    reg [15:0] q_reg; //Holds quotient at the end
    reg [2:0]  i_ctr; //Iterations counter 

    wire [16:0] temp_a1;
    wire [15:0] temp_q1;

    wire [16:0] temp_a2;
    wire [15:0] temp_q2;

    RDivIteration_m1 iteration1(
        .a_in  (a_reg),
        .m_in  (data_in2_buffer),
        .q_in  (q_reg),
        .a_out (temp_a1),
        .q_out (temp_q1)
    );

    RDivIteration_m1 iteration2(
        .a_in  (temp_a1),
        .m_in  (data_in2_buffer),
        .q_in  (temp_q1),
        .a_out (temp_a2),
        .q_out (temp_q2)
    );

    reg [1:0] state;
    typedef enum bit[1:0] {IDLE, SIGN_ADJ, EXECUTE} states;

    reg temp_valid_flag;

    always_ff @(posedge clk) begin : Div_ff
        if(sync_rst) begin
            state <= IDLE;
            temp_valid_flag <= 'b0;
        end else if(clk_en) begin
            case(state)
                IDLE: begin
                    temp_valid_flag <= 'b0;
                    if(call) begin
                        data_in1_buffer <= data_in1;
                        data_in2_buffer <= data_in2;
                        preserved_data1_sign <= data_in1[15];
                        preserved_data2_sign <= data_in2[15];
                        operation_buffer <= operation_in;
                        dest_addr_buffer <= dest_addr_in;
                        state <= SIGN_ADJ;
                    end
                end
                SIGN_ADJ: begin
                    data_in1_buffer <= cond_abs_data1;
                    data_in2_buffer <= cond_abs_data2;
                    a_reg <= 'h0;
                    q_reg <= cond_abs_data1;
                    i_ctr <= 'h0;
                    state <= EXECUTE;
                end
                EXECUTE: begin
                    a_reg <= temp_a2;
                    q_reg <= temp_q2;
                    i_ctr <= i_ctr + 1;
                    if(i_ctr == 'h7) begin
                        state <= IDLE;
                        temp_valid_flag <= 'b1;
                    end
                end
            default: /**/;
            endcase
        end
    end

    assign busy = (state != IDLE);

    wire negate_results = (!operation_buffer[0] && (preserved_data1_sign ^^ preserved_data2_sign));
    wire [15:0] quotient = negate_results ? -q_reg : q_reg;
    wire [15:0] remainder = negate_results ? -a_reg[15:0] : a_reg[15:0];

    assign data_out = operation_in[1] ? remainder : quotient;
    assign dest_addr_out = dest_addr_buffer;
    assign data_out_valid = temp_valid_flag;

endmodule : Divider_m1

module RDivIteration_m1(                                                                                                          // @suppress "File contains multiple design units"
    input  wire [16:0] a_in,
    input  wire [15:0] q_in,
    input  wire [15:0] m_in,
    output wire [16:0] a_out,
    output wire [15:0] q_out
);

    //Shift AQ
    wire [16:0] stage1_a = {a_in[15:0], q_in[15]};
    wire [15:0] stage1_q = {q_in[14:0], 1'b0};

    //A = A - M
    wire [16:0] stage2_a = stage1_a - m_in;

    wire [16:0] stage3_a = stage2_a[15] ? stage1_a : stage2_a; //If(A < 0) restore A
    wire [15:0] stage3_q = {stage1_q[15:1], ~stage2_a[16]}; // (A < 0) ? (Q[0] = 0) : (Q[0] = 1)

    assign a_out = stage3_a;
    assign q_out = stage3_q;

endmodule : RDivIteration_m1
