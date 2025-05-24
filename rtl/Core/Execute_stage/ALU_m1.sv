module ALU_m1(

    input  wire        call,
    input  wire [3:0]  dest_addr_in,
    input  wire [3:0]  operation,
    input  wire        type_select,
    input  wire [15:0] data_in1,
    input  wire [15:0] data_in2,

    output wire [15:0] data_out,
    output wire [3:0]  dest_addr_out,
    output wire        valid_out
    
);

///
    // * --- Adder/Subtractor ---

    typedef struct packed{
        logic [15:0] sum;
        logic        carry;
        logic        overflow;
        logic        lessthan;
    } add_sub_t;

    add_sub_t add_sub;

    assign {add_sub.carry, add_sub.sum} = {1'b0, data_in1} + ({1'b0, data_in2} ^ {17{operation[0]}}) + {15'b0, operation[0]};
    assign add_sub.overflow = (!operation[0] ^^ (data_in1[15] ^^ data_in2[15])) && (data_in1[15] ^^ add_sub.sum[15]);
    assign add_sub.lessthan = add_sub.overflow ^^ add_sub.sum[15];

    // * --- Bitwise ---

    typedef struct packed{
        logic [15:0] vand;
        logic [15:0] vior;
        logic [15:0] vxor;
    } bitwise_t;

    bitwise_t bitwise;

    assign bitwise.vand = data_in1 & data_in2;
    assign bitwise.vior = data_in1 | data_in2;
    assign bitwise.vxor = data_in1 ^ data_in2;

///
    // * --- Shift ---

    wire [15:0] shr_res = data_in1 >> data_in2[3:0];
    wire [15:0] asr_res = $signed(data_in1) >> data_in2[3:0];
    wire [15:0] shl_res = data_in1 >> data_in2[3:0];

///
    // * --- Bit rotate ---

    wire [31:0] rtr_res = {data_in1, data_in1} >> data_in2[3:0];
    wire [31:0] rtl_res = {data_in1, data_in1} << data_in2[3:0];

///
    // * --- Bit scan ---

    typedef struct packed{
        logic [15:0] res;
        logic [15:0] rev_data;
        logic [15:0] data;
        logic [15:0] ihb;
        logic [15:0] rev_ihb;
    } bscan_t;

    bscan_t bscan;

    assign bscan.data = operation[0] ? data_in1 : bscan.rev_data;
    assign bscan.ihb = bscan.data & -bscan.data;

	 genvar i;
    generate
        wire [15:0] selected_ihb = operation[0] ? bscan.ihb : bscan.rev_ihb;
        wire [4:0] bitscan_vals [15:0];
        for(i = 0; i < 16; i++) begin : BitScan_gen
            assign bscan.rev_data[i] = data_in1[15-i];
            assign bscan.rev_ihb[i] = bscan.ihb[15-i];
            if(i == 0) assign bitscan_vals[i] = {5{selected_ihb[i]}} & 5'h1;
            else assign bitscan_vals[i] = ((i+1) & ({5{selected_ihb[i]}})) | bitscan_vals[i-1];
        end
        assign bscan.res = {11'b0, bitscan_vals[15]};
    endgenerate

///
    // * Bit-set-clear-flip

    typedef struct packed{
        logic [15:0] shifted_pos;
        logic [15:0] set;
        logic [15:0] clr;
        logic [15:0] flp;
    } bit_manip_t;

    bit_manip_t bit_manip;

    always_comb begin
        bit_manip.shifted_pos = 'h0;
        bit_manip.shifted_pos[data_in2[3:0]] = 'b1;
    end

    assign bit_manip.set = data_in1 | bit_manip.shifted_pos;
    assign bit_manip.clr = data_in1 & ~(bit_manip.shifted_pos);
    assign bit_manip.flp = data_in1 ^ bit_manip.shifted_pos;
    
///
    // * --- ALU Multiplexer ---

    logic [15:0] int_selected_result0;
    logic        int_selected_result1;
    assign data_out = type_select ? {15'b0, (int_selected_result1^^operation[3])} : int_selected_result0;

    always_comb begin : ALU_Mux
        case(operation)
            4'h0:    int_selected_result0 = add_sub.sum;             //ADD
            4'h1:    int_selected_result0 = add_sub.sum;             //SUB
            4'h2:    int_selected_result0 = data_in1 & data_in2;     //AND
            4'h3:    int_selected_result0 = data_in1 | data_in2;     //IOR
            4'h4:    int_selected_result0 = data_in1 ^ data_in2;     //XOR
            4'h5:    int_selected_result0 = bit_manip.flp;           //BFL
            4'h6:    int_selected_result0 = shr_res;                 //SHR
            4'h7:    int_selected_result0 = shl_res;                 //SHL
            4'h8:    int_selected_result0 = asr_res;                 //ASR
            4'h9:    int_selected_result0 = rtl_res[31:16];          //RTL
            4'ha:    int_selected_result0 = rtr_res[15:0];           //RTR
            4'hb:    int_selected_result0 = bscan.res;               //BSF
            4'hc:    int_selected_result0 = bscan.res;               //BSB
            4'hd:    int_selected_result0 = bit_manip.set;           //BST
            4'he:    int_selected_result0 = bit_manip.clr;           //BCL
            4'hf:    int_selected_result0 = data_in2;                //MOV
            default: int_selected_result0 = 'h0;
        endcase
        case(operation[2:0])
            3'h0:    int_selected_result1 = ~(|data_in2);            //ZCH / NZC
            3'h1:    int_selected_result1 = add_sub.carry;           //BCH / NBC
            3'h2:    int_selected_result1 = add_sub.carry;           //CCH / NCC
            3'h3:    int_selected_result1 = add_sub.overflow;        //SVC / NSV
            3'h4:    int_selected_result1 = add_sub.overflow;        //AVC / NAV
            3'h5:    int_selected_result1 = add_sub.lessthan;        //LTC / GEC
            3'h6:    int_selected_result1 = data_in1[data_in2[3:0]]; //BXT / BXI
            3'h7:    int_selected_result1 = ~(|add_sub.sum);         //EQC / NEC
            default: int_selected_result1 = 'b0;
        endcase
    end

    assign dest_addr_out = dest_addr_in;
    assign valid_out = call;

///
endmodule : ALU_m1
