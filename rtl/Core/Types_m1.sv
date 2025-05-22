package Types_m1;

    typedef struct packed{
        logic       call_alu;
        logic       alu_type_sel;
        logic       alu_force_add;
        logic [2:0] alu_dsel;
        logic       call_mul;
        logic       call_div;
        logic       call_lsu;
        logic       fence_mode;
        logic       call_brh;
        logic [1:0] brh_op;
        logic       jmp;
        logic       regfile_write;
        logic       rs1_dependency;
        logic       rs2_dependency;
    } uop_t;

    typedef struct packed{
        logic [3:0] rs2;
        logic [3:0] func4;
        logic [3:0] rs1;
    } rtype_t;

    typedef struct packed{
        logic [7:0] imm;
        logic [3:0] rs1;
    } itype_t;

    typedef struct packed{
        logic [7:0] imm;
        logic [3:0] rs1;
    } utype_t;

    typedef struct packed{
        logic [7:0] imm_low;
        logic [3:0] imm_high;
    } jtype_t;

    typedef struct packed{
        logic [7:0] imm;
        logic [3:0] rs1;
    } btype_t;

    typedef struct packed{
        rtype_t r;
        itype_t i;
        utype_t u;
        jtype_t j;
        btype_t b;
    } inst_t;

    typedef struct packed{
        logic        call;
        logic [3:0]  dest_addr;
        logic [15:0] data1;
        logic [15:0] data2;
        logic [3:0]  operation;
        logic        type_sel;
    } alu_if_t; //ALU interface type

    typedef struct packed{
        logic        call;
        logic [1:0]  op;
        logic [3:0]  dest_addr;
        logic [15:0] data1;
        logic [15:0] data2;
    } seq_if_t;

    typedef struct packed{
        logic        call;
        logic [1:0]  op;
        logic [3:0]  func4;
        logic [15:0] data1;
        logic [15:0] data2;
        logic [14:0] pc;
        logic [7:0]  imm;
    } brh_if_t;

    typedef struct packed{
        logic        call;
        logic [3:0]  dest_addr;
        logic [15:0] store_data;
        logic [15:0] address;
        logic [3:0]  func4;
        logic        fence_mode;
        logic [1:0]  fence_type;
    } lsu_if_t;

endpackage