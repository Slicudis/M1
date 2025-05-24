module LSU_m1(

    input  wire        clk,
    input  wire        clk_en,
    input  wire        sync_rst,

    input  wire        wb_conflict_stall,
     
    input  wire        call,
    input  wire [3:0]  dest_addr_in,
    input  wire [15:0] store_data_in,
    input  wire [15:0] address_in,
    input  wire [3:0]  func4_in,
    input  wire        fence_mode,
    input  wire [1:0]  fence_type,

    output wire        lsq_full,
    output wire        lsu_empty,

    output wire [15:0] wb_data_out,
    output wire [3:0]  wb_dest_addr_out,
    output wire        wb_valid,

    // * --- Memory & IO controller pins ---

    output wire [14:0] mem_address_out,  
    output wire [1:0]  mem_mask_out,     
    output wire [1:0]  mem_read_fnc_type, //Read data type on read or fence type on fence
    output wire [15:0] mem_data_out,     
    output wire [1:0]  mem_mode,          //0=READ, 1=WRITE, 2/3=FENCE
    output wire        mem_enable,  
    output wire [3:0]  mem_wb_dest,

    output wire        mem_input_ready,

    input  wire [15:0] mem_data_in,       //big endian
    input  wire [3:0]  mem_wb_dest_in,
    input  wire        mem_read_ack,
    input  wire        mem_available,
    input  wire        mem_idle
    
);

    ///
    // * --- Stage 1 ---

    typedef struct packed{
        reg [15:0] data;
        reg [14:0] address;
        reg [1:0]  mask;
        reg [1:0]  data_fnc_type;
        reg [1:0]  mode;
        reg [3:0]  wb_dest;
    } stage1_t;

    stage1_t stage1;
    reg stage1_valid;

    logic [1:0] generated_mask;

    always_comb begin
        case({func4_in[0], address_in[0]})
            {1'b0, 1'b0}: generated_mask = 2'b10;
            {1'b0, 1'b1}: generated_mask = 2'b01;
            default:      generated_mask = 2'b11;
        endcase
    end

    always_ff @(posedge clk) begin : Stage1_ff
        if(sync_rst) begin
            stage1_valid <= 'b0;
        end else if(clk_en && !lsq_full) begin
            stage1.data <= {store_data_in[7:0], store_data_in[15:8]};
            stage1.address <= address_in[15:1];
            stage1.mask <= generated_mask;
            stage1.data_fnc_type <= fence_mode ? fence_type : {func4_in[2], func4_in[0]};
            stage1.mode <= {fence_mode, func4_in[3]};
            stage1.wb_dest <= dest_addr_in;
            stage1_valid <= call;
        end
    end

///
    // * --- Stage 2 ---

    typedef struct packed{
        reg [15:0] data;
        reg [14:0] address;
        reg [1:0]  mask;
        reg [1:0]  data_fnc_type;
        reg [1:0]  mode;
        reg [3:0]  wb_dest;
    } lsq_entry_t;

    lsq_entry_t lsq [7:0];
    reg [3:0] lsq_head_ptr;
    reg [3:0] lsq_tail_ptr;

    wire lsq_empty = (lsq_head_ptr == lsq_tail_ptr);
    assign lsq_full = (lsq_head_ptr[3]^^lsq_tail_ptr[3]) && (lsq_head_ptr[2:0]==lsq_tail_ptr[2:0]);
    
    always_ff @(posedge clk) begin : LSQ_ff
        if(sync_rst) begin
            lsq_head_ptr <= 'h0;
            lsq_tail_ptr <= 'h0;
        end else if(clk_en) begin
            if(stage1_valid && !lsq_full) begin
                lsq[lsq_tail_ptr[2:0]] <= stage1;
                lsq_tail_ptr <= lsq_tail_ptr + 1;
            end
            if(mem_available && !lsq_empty) begin
                lsq_head_ptr <= lsq_head_ptr + 1;
            end
        end
    end


///
    // * --- Stage 3 ---

    lsq_entry_t lsq_head_buffer;
    reg lsq_head_buffer_valid;
    
    always_ff @(posedge clk) begin : Stage3_ff
        if(sync_rst) begin
            lsq_head_buffer_valid <= 'b0;
        end else if(clk_en && !wb_conflict_stall) begin
            lsq_head_buffer_valid <= mem_available && !lsq_empty;
            lsq_head_buffer <= lsq[lsq_head_ptr[2:0]];
        end
    end

    assign mem_address_out   = lsq_head_buffer.address;
    assign mem_mask_out      = lsq_head_buffer.mask;
    assign mem_read_fnc_type = lsq_head_buffer.data_fnc_type;
    assign mem_data_out      = lsq_head_buffer.data;
    assign mem_mode          = lsq_head_buffer.mode;
    assign mem_enable        = lsq_head_buffer_valid;
    assign mem_wb_dest       = lsq_head_buffer.wb_dest;

    assign mem_input_ready   = !wb_conflict_stall;

    assign wb_data_out      = mem_data_in;
    assign wb_dest_addr_out = mem_wb_dest_in;
    assign wb_valid         = mem_read_ack;

    assign lsu_empty = !stage1_valid && lsq_empty && !mem_read_ack && mem_idle;

endmodule : LSU_m1
