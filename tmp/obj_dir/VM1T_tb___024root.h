// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VM1T_tb.h for the primary calling header

#ifndef VERILATED_VM1T_TB___024ROOT_H_
#define VERILATED_VM1T_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "VM1T_tb___024root.h"


class VM1T_tb__Syms;
struct VM1T_tb_M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__buffer_t__struct__0 {
    SData/*15:0*/ __PVT__data;
    CData/*3:0*/ __PVT__dest;
    CData/*0:0*/ __PVT__valid;

    bool operator==(const VM1T_tb_M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__buffer_t__struct__0& rhs) const {
        return __PVT__data == rhs.__PVT__data
            && __PVT__dest == rhs.__PVT__dest
            && __PVT__valid == rhs.__PVT__valid;
    }
    bool operator!=(const VM1T_tb_M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__buffer_t__struct__0& rhs) const {
        return !(*this == rhs);
    }
};

class alignas(VL_CACHE_LINE_BYTES) VM1T_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(clk_en,0,0);
        VL_IN8(sync_rst,0,0);
        CData/*0:0*/ M1T_tb__DOT__rst_buffer;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__rst_buffer0;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__rst_buffer1;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__sync_rst;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__mem_read_ack;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT____Vcellinp__MemoryController__core_mem_enable;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__lsu_full;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__brh_flush;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__brh_issue_inval;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__writeback_en;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__reset_buffer;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__write_en;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__sync_rst;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__DecodeStage__hazard_stall;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__pipeline_stall;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__jmp_en;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__regfile_reserve;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__Multiplier__call;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__Multiplier__clk_en;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__Divider__call;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__Divider__clk_en;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__LSU__fence_mode;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__LSU__call;
        CData/*1:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__BranchUnit__operation;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__BranchUnit__call;
        CData/*7:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard_buffer1;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard_buffer2;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs1_forward_en;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs2_forward_en;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs1_busy;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__inst_fence;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__ifence_inval;
        CData/*1:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__operation_buffer;
        CData/*3:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__dest_addr_buffer;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__preserved_data1_sign;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__preserved_data2_sign;
        CData/*2:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__i_ctr;
        CData/*1:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__state;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__temp_valid_flag;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__negate_results;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__stage1_valid;
        CData/*3:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_ptr;
        CData/*3:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_tail_ptr;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_empty;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer_valid;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__wb_conflict;
        CData/*1:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selector;
        CData/*3:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_dest;
        CData/*7:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram_buffer0;
        CData/*7:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram_buffer1;
        CData/*1:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__dtype_buffer;
        CData/*3:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__wb_dest_buffer;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__en_buffer;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__mode_buffer;
        CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__sel_buffer;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
    };
    struct {
        SData/*15:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer;
        SData/*15:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__adjusted_instruction_in;
        SData/*14:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__brh_pc_tgt;
        SData/*14:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__data_in;
        SData/*14:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__jmp_target_out;
        SData/*15:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__ALU__data_out;
        SData/*15:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__Multiplier__data_out;
        SData/*15:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__Divider__data_out;
        SData/*14:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__FetchStage__DOT__pc;
        SData/*11:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer;
        SData/*14:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__pc_buffer;
        SData/*14:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__jmp_tgt_buffer;
        SData/*14:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__inc_pc_buffer;
        SData/*15:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__special_constant;
        SData/*15:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard_read;
        SData/*15:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__rs1_buffer;
        SData/*15:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__rs2_buffer;
        SData/*15:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT____Vlvbound_h274463d9__0;
        SData/*15:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs1_data;
        SData/*15:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs2_data;
        SData/*15:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__selected_ihb;
        SData/*15:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__int_selected_result0;
        SData/*15:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__data_in1_buffer;
        SData/*15:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__data_in2_buffer;
        SData/*15:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__cond_abs_data1;
        SData/*15:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__cond_abs_data2;
        SData/*15:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__q_reg;
        SData/*15:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__temp_q2;
        SData/*15:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_data;
        SData/*15:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__gpo_reg;
        SData/*15:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__gpi_buffer;
        SData/*15:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__adjusted_data;
        IData/*16:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer;
        IData/*16:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__decoded_uop;
        IData/*16:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__uop;
        IData/*18:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub;
        IData/*31:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__adjusted_result;
        IData/*16:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__a_reg;
        IData/*16:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration1__DOT__stage1_a;
        IData/*16:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration1__DOT__stage2_a;
        IData/*16:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration2__DOT__stage1_a;
        IData/*16:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration2__DOT__stage2_a;
        IData/*18:0*/ __Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub__0;
        IData/*18:0*/ __Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub__1;
        IData/*31:0*/ __VactIterCount;
        QData/*41:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out;
        QData/*37:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_5;
        VlWide<3>/*80:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter;
        VlWide<3>/*79:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan;
        QData/*63:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bit_manip;
        QData/*40:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage1;
        QData/*40:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2;
        QData/*40:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__stage1;
        QData/*40:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer;
        QData/*63:0*/ __Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bit_manip__0;
        VlWide<3>/*79:0*/ __Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan__0;
        VlWide<3>/*80:0*/ __Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter__0;
        QData/*63:0*/ __Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bit_manip__1;
        VlWide<3>/*79:0*/ __Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan__1;
        VlWide<3>/*80:0*/ __Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter__1;
        VlUnpacked<SData/*15:0*/, 2048> M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom;
        VlUnpacked<SData/*15:0*/, 15> M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile;
        VlUnpacked<CData/*0:0*/, 15> M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard;
        VlUnpacked<SData/*15:0*/, 16> M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read;
    };
    struct {
        VlUnpacked<CData/*4:0*/, 16> M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals;
        VlUnpacked<QData/*40:0*/, 8> M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq;
        VlUnpacked<CData/*7:0*/, 2048> M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram0;
        VlUnpacked<CData/*7:0*/, 2048> M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram1;
        VlUnpacked<CData/*4:0*/, 16> __Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals__0;
        VlUnpacked<CData/*4:0*/, 16> __Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals__1;
        VlUnpacked<CData/*0:0*/, 10> __Vm_traceActivity;
    };
    VM1T_tb_M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__buffer_t__struct__0 M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__alu;
    VM1T_tb_M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__buffer_t__struct__0 M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__mul;
    VM1T_tb_M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__buffer_t__struct__0 M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__div;
    VM1T_tb_M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__buffer_t__struct__0 M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__lsu;
    VlTriggerVec<6> __VstlTriggered;
    VlTriggerVec<6> __VactTriggered;
    VlTriggerVec<6> __VnbaTriggered;

    // INTERNAL VARIABLES
    VM1T_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    VM1T_tb___024root(VM1T_tb__Syms* symsp, const char* v__name);
    ~VM1T_tb___024root();
    VL_UNCOPYABLE(VM1T_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const VM1T_tb_M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__buffer_t__struct__0& obj);

#endif  // guard
