//GPIO mapped to 0x800
module MemoryController_m1t(

    input  wire        clk,
    input  wire        clk_en,
    input  wire        sync_rst,

    input  wire [14:0] core_mem_address_out,  
    input  wire [1:0]  core_mem_mask_out,     
    input  wire [1:0]  core_mem_read_fnc_type, //Read data type on read, or fence type on fence
    input  wire [15:0] core_mem_data_out,     
    input  wire [1:0]  core_mem_mode,          //0=READ, 1=WRITE, 2/3=FENCE   
    input  wire        core_mem_enable,     
    input  wire [3:0]  core_mem_wb_dest,      

    input  wire        core_mem_input_ready,

    output wire [15:0] core_mem_data_in,
    output wire [3:0]  core_mem_wb_dest_in,
    output wire        core_mem_read_ack,
    output wire        core_mem_available,
    output wire        core_mem_idle,

    output wire [15:0] gpo_bank,
    input  wire [15:0] gpi_bank

);

    reg [7:0] ram0 [2047:0];
    reg [7:0] ram1 [2047:0];
    reg [7:0] ram_buffer0;
    reg [7:0] ram_buffer1;

    reg [15:0] gpo_reg;
    reg [15:0] gpi_buffer;

    assign gpo_bank = gpo_reg;
    
    always_ff @(posedge clk) begin
        if(sync_rst) begin
            gpo_reg <= 'h0;
        end else if(clk_en) begin

            if(core_mem_enable && !core_mem_mode[0] && core_mem_input_ready) begin
                gpi_buffer <= gpi_bank;
                ram_buffer0 <= ram0[core_mem_address_out[10:0]];
                ram_buffer1 <= ram1[core_mem_address_out[10:0]];
            end

            if(core_mem_enable && core_mem_mode[0] && core_mem_input_ready) begin
                if(core_mem_address_out[10]) begin
                    if(core_mem_mask_out[1]) gpo_reg[7:0] <= core_mem_data_out[15:8];
                    if(core_mem_mask_out[0]) gpo_reg[15:8] <= core_mem_data_out[7:0];
                    $display(gpo_reg);
                end else begin
                    if(core_mem_mask_out[0]) ram0[core_mem_address_out[10:0]] <= core_mem_data_out[7:0];
                    if(core_mem_mask_out[1]) ram1[core_mem_address_out[10:0]] <= core_mem_data_out[15:8];
                end
            end
        end
    end

///
    reg [1:0] dtype_buffer;
    reg [3:0] wb_dest_buffer;
    reg       en_buffer;
    reg       mode_buffer;
    reg       sel_buffer;

    always_ff @(posedge clk) begin
        if(sync_rst) begin
            en_buffer <= 'b0;
        end else if(clk_en) begin
            if(core_mem_enable && core_mem_mode[0] && core_mem_input_ready) begin
                dtype_buffer <= core_mem_read_fnc_type;
                wb_dest_buffer <= core_mem_wb_dest;
                en_buffer <= core_mem_enable;
                mode_buffer <= core_mem_mode[0];
                sel_buffer <= core_mem_address_out[11];
            end
        end
    end

    assign core_mem_idle = !en_buffer;
    assign core_mem_available = 'b1;
    assign core_mem_read_ack = en_buffer && !mode_buffer;
    assign core_mem_wb_dest_in = wb_dest_buffer;

    wire [15:0]  selected_data = sel_buffer ? gpi_buffer : {ram_buffer0, ram_buffer1};
    logic [15:0] adjusted_data;

    always_comb begin
        case(dtype_buffer)
            2'b00:   adjusted_data = {{8{selected_data[7]}}, selected_data[7:0]};
            2'b10:   adjusted_data = {8'h0, selected_data[7:0]};
            default: adjusted_data = selected_data;
        endcase
    end

    assign core_mem_data_in = adjusted_data;

endmodule : MemoryController_m1t