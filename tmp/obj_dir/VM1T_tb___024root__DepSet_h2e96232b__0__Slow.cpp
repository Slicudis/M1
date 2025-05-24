// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VM1T_tb.h for the primary calling header

#include "VM1T_tb__pch.h"
#include "VM1T_tb___024root.h"

VL_ATTR_COLD void VM1T_tb___024root___eval_static__TOP(VM1T_tb___024root* vlSelf);
VL_ATTR_COLD void VM1T_tb___024root____Vm_traceActivitySetAll(VM1T_tb___024root* vlSelf);

VL_ATTR_COLD void VM1T_tb___024root___eval_static(VM1T_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VM1T_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VM1T_tb___024root___eval_static__TOP(vlSelf);
    VM1T_tb___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void VM1T_tb___024root___eval_static__TOP(VM1T_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VM1T_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root___eval_static__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__rst_buffer0 = 1U;
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__rst_buffer1 = 1U;
}

VL_ATTR_COLD void VM1T_tb___024root___eval_initial__TOP(VM1T_tb___024root* vlSelf);

VL_ATTR_COLD void VM1T_tb___024root___eval_initial(VM1T_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VM1T_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VM1T_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bit_manip__0 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bit_manip;
    vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan__0[0U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U];
    vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan__0[1U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[1U];
    vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan__0[2U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[2U];
    vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals__0 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals;
    vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter__0[0U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[0U];
    vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter__0[1U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U];
    vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter__0[2U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[2U];
    vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub__0 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub;
    vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bit_manip__1 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bit_manip;
    vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan__1[0U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U];
    vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan__1[1U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[1U];
    vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan__1[2U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[2U];
    vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals__1 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals;
    vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter__1[0U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[0U];
    vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter__1[1U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U];
    vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter__1[2U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[2U];
    vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub__1 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

extern const VlWide<17>/*543:0*/ VM1T_tb__ConstPool__CONST_h7351ad64_0;

VL_ATTR_COLD void VM1T_tb___024root___eval_initial__TOP(VM1T_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VM1T_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_READMEM_N(true, 16, 2048, 0, VL_CVT_PACK_STR_NW(17, VM1T_tb__ConstPool__CONST_h7351ad64_0)
                 ,  &(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VM1T_tb___024root___eval_final(VM1T_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VM1T_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VM1T_tb___024root___dump_triggers__stl(VM1T_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VM1T_tb___024root___eval_phase__stl(VM1T_tb___024root* vlSelf);

VL_ATTR_COLD void VM1T_tb___024root___eval_settle(VM1T_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VM1T_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VM1T_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../rtl/../rtl/Testbench/M1T_tb.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VM1T_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VM1T_tb___024root___dump_triggers__stl(VM1T_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VM1T_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] M1T_tb.Toplevel_m1t_instance.Core.ALU.bit_manip)\n");
    }
    if ((4ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] M1T_tb.Toplevel_m1t_instance.Core.ALU.bscan)\n");
    }
    if ((8ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] M1T_tb.Toplevel_m1t_instance.Core.ALU.bitscan_vals)\n");
    }
    if ((0x10ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 4 is active: @([hybrid] M1T_tb.Toplevel_m1t_instance.Core.ALU.shifter)\n");
    }
    if ((0x20ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 5 is active: @([hybrid] M1T_tb.Toplevel_m1t_instance.Core.ALU.add_sub)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VM1T_tb___024root___stl_sequent__TOP__0(VM1T_tb___024root* vlSelf);
void VM1T_tb___024root___act_sequent__TOP__0(VM1T_tb___024root* vlSelf);
void VM1T_tb___024root___act_sequent__TOP__1(VM1T_tb___024root* vlSelf);
void VM1T_tb___024root___act_sequent__TOP__2(VM1T_tb___024root* vlSelf);
void VM1T_tb___024root___act_sequent__TOP__3(VM1T_tb___024root* vlSelf);
void VM1T_tb___024root___act_sequent__TOP__4(VM1T_tb___024root* vlSelf);
void VM1T_tb___024root___act_comb__TOP__0(VM1T_tb___024root* vlSelf);
void VM1T_tb___024root___act_comb__TOP__1(VM1T_tb___024root* vlSelf);

VL_ATTR_COLD void VM1T_tb___024root___eval_stl(VM1T_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VM1T_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VM1T_tb___024root___stl_sequent__TOP__0(vlSelf);
        VM1T_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0xdULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VM1T_tb___024root___act_sequent__TOP__0(vlSelf);
        VM1T_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x11ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VM1T_tb___024root___act_sequent__TOP__1(vlSelf);
        VM1T_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VM1T_tb___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((0x21ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VM1T_tb___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VM1T_tb___024root___act_sequent__TOP__4(vlSelf);
        VM1T_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x3fULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VM1T_tb___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0xdULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VM1T_tb___024root___act_comb__TOP__1(vlSelf);
        VM1T_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<CData/*7:0*/, 16> VM1T_tb__ConstPool__TABLE_hb93a4349_0;
extern const VlUnpacked<SData/*15:0*/, 256> VM1T_tb__ConstPool__TABLE_ha6e5e8aa_0;

VL_ATTR_COLD void VM1T_tb___024root___stl_sequent__TOP__0(VM1T_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VM1T_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgExtracted_hd0d5424f__0;
    M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgExtracted_hd0d5424f__0 = 0;
    CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_2;
    M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_2 = 0;
    SData/*15:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_4;
    M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_4 = 0;
    CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_10;
    M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_10 = 0;
    CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_11;
    M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_11 = 0;
    CData/*0:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT____Vlvbound_h486324b3__0;
    M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT____Vlvbound_h486324b3__0 = 0;
    CData/*7:0*/ M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT____VdfgRegularize_h79c90436_1_0;
    M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT____VdfgRegularize_h79c90436_1_0 = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__adjusted_instruction_in 
        = ((0xff00U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer) 
                       << 8U)) | (0xffU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer) 
                                           >> 8U)));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard_read 
        = ((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard
            [0xeU] << 0xfU) | ((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard
                                [0xdU] << 0xeU) | (
                                                   (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard
                                                    [0xcU] 
                                                    << 0xdU) 
                                                   | ((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard
                                                       [0xbU] 
                                                       << 0xcU) 
                                                      | ((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard
                                                          [0xaU] 
                                                          << 0xbU) 
                                                         | ((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard
                                                             [9U] 
                                                             << 0xaU) 
                                                            | ((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard
                                                                [8U] 
                                                                << 9U) 
                                                               | ((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard
                                                                   [7U] 
                                                                   << 8U) 
                                                                  | ((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard
                                                                      [6U] 
                                                                      << 7U) 
                                                                     | ((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard
                                                                         [5U] 
                                                                         << 6U) 
                                                                        | ((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard
                                                                            [4U] 
                                                                            << 5U) 
                                                                           | ((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard
                                                                               [3U] 
                                                                               << 4U) 
                                                                              | ((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard
                                                                                [2U] 
                                                                                << 3U) 
                                                                                | ((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard
                                                                                [1U] 
                                                                                << 2U) 
                                                                                | (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard
                                                                                [0U] 
                                                                                << 1U)))))))))))))));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__cond_abs_data1 
        = (0xffffU & (((~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__operation_buffer)) 
                       & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__data_in1_buffer) 
                          >> 0xfU)) ? (- (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__data_in1_buffer))
                       : (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__data_in1_buffer)));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__cond_abs_data2 
        = (0xffffU & (((~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__operation_buffer)) 
                       & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__data_in2_buffer) 
                          >> 0xfU)) ? (- (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__data_in2_buffer))
                       : (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__data_in2_buffer)));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT____Vcellinp__MemoryController__core_mem_enable 
        = ((~ (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer 
                       >> 5U))) & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer_valid));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__adjusted_result 
        = ((1U & (((0U != (3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2 
                                         >> 5U)))) 
                   & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2 
                              >> 7U))) ^ (IData)((0xc0ULL 
                                                  == 
                                                  (0xc0ULL 
                                                   & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2)))))
            ? (- (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2 
                          >> 9U))) : (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2 
                                              >> 9U)));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__sync_rst 
        = ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__rst_buffer0) 
           & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__rst_buffer1));
    __Vtableidx1 = (0xfU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer) 
                            >> 8U));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop 
        = VM1T_tb__ConstPool__TABLE_hb93a4349_0[__Vtableidx1];
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__negate_results 
        = ((~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__operation_buffer)) 
           & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__preserved_data1_sign) 
              ^ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__preserved_data2_sign)));
    M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT____VdfgRegularize_h79c90436_1_0 
        = ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__sel_buffer)
            ? 0U : (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram_buffer1));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[1U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile
        [0U];
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[2U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile
        [1U];
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[3U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile
        [2U];
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[4U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile
        [3U];
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[5U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile
        [4U];
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[6U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile
        [5U];
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[7U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile
        [6U];
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[8U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile
        [7U];
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[9U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile
        [8U];
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0xaU] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile
        [9U];
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0xbU] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile
        [0xaU];
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0xcU] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile
        [0xbU];
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0xdU] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile
        [0xcU];
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0xeU] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile
        [0xdU];
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0xfU] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile
        [0xeU];
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration1__DOT__stage1_a 
        = ((0x1fffeU & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__a_reg 
                        << 1U)) | (1U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__q_reg) 
                                         >> 0xfU)));
    M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_4 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                         >> 0xbU)))) 
                       << 8U)) | (0xffU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                           >> 4U)));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__mem_read_ack 
        = ((~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__mode_buffer)) 
           & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__en_buffer));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__lsu_full 
        = ((((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_ptr) 
             ^ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_tail_ptr)) 
            >> 3U) & ((7U & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_ptr)) 
                      == (7U & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_tail_ptr))));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_empty 
        = ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_ptr) 
           == (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_tail_ptr));
    __Vtableidx2 = ((0xf0U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer) 
                              << 4U)) | (0xfU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer) 
                                                 >> 8U)));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__special_constant 
        = VM1T_tb__ConstPool__TABLE_ha6e5e8aa_0[__Vtableidx2];
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__writeback_en 
        = (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__alu
           .__PVT__valid | (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__mul
                            .__PVT__valid | (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__div
                                             .__PVT__valid 
                                             | vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__lsu
                                             .__PVT__valid)));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__wb_conflict 
        = (1U & (0xfee8U >> (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__alu
                                      .__PVT__valid) 
                              << 3U) | (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__mul
                                                 .__PVT__valid) 
                                         << 2U) | (
                                                   ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__div
                                                            .__PVT__valid) 
                                                    << 1U) 
                                                   | vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__lsu
                                                   .__PVT__valid)))));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selector 
        = ((2U & ((IData)((0xfU >> (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__alu
                                             .__PVT__valid) 
                                     << 3U) | (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__mul
                                                        .__PVT__valid) 
                                                << 2U) 
                                               | (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__div
                                                           .__PVT__valid) 
                                                   << 1U) 
                                                  | vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__lsu
                                                  .__PVT__valid))))) 
                  << 1U)) | (1U & (0xf3U >> (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__alu
                                                      .__PVT__valid) 
                                              << 3U) 
                                             | (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__mul
                                                         .__PVT__valid) 
                                                 << 2U) 
                                                | (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__div
                                                            .__PVT__valid) 
                                                    << 1U) 
                                                   | vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__lsu
                                                   .__PVT__valid))))));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__Multiplier__data_out 
        = (0xffffU & ((0U != (3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2 
                                            >> 5U))))
                       ? (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__adjusted_result 
                          >> 0x10U) : vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__adjusted_result));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__sync_rst 
        = ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__reset_buffer) 
           | (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__sync_rst));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__decoded_uop 
        = ((0x10000U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                        << 0x10U)) | (((IData)((0xfU 
                                                == 
                                                (0xfU 
                                                 & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop)))) 
                                       << 0xfU) | (
                                                   (((~ (IData)(
                                                                (7U 
                                                                 == 
                                                                 (7U 
                                                                  & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                                                     >> 1U))))) 
                                                     & (0U 
                                                        != 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                                            >> 1U)))) 
                                                    << 0xeU) 
                                                   | ((0x3800U 
                                                       & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                                          << 0xaU)) 
                                                      | ((0x400U 
                                                          & (((~ 
                                                               ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer) 
                                                                >> 2U)) 
                                                              << 0xaU) 
                                                             & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                                                << 6U))) 
                                                         | ((0x200U 
                                                             & (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                                                 << 5U) 
                                                                & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer) 
                                                                   << 7U))) 
                                                            | (((IData)(
                                                                        (0x20U 
                                                                         == 
                                                                         (0x22U 
                                                                          & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop)))) 
                                                                << 8U) 
                                                               | (((IData)(
                                                                           (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                                                             >> 7U) 
                                                                            & (~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer))))))) 
                                                                   << 7U) 
                                                                  | ((0x40U 
                                                                      & ((0xffffffc0U 
                                                                          & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop)) 
                                                                         | ((((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                                                              >> 7U) 
                                                                             & (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer)))) 
                                                                            << 6U))) 
                                                                     | ((0x30U 
                                                                         & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                                                            << 3U)) 
                                                                        | (((IData)(
                                                                                (0x46U 
                                                                                == 
                                                                                (0x46U 
                                                                                & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop)))) 
                                                                            << 3U) 
                                                                           | ((4U 
                                                                               & (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                                                                << 2U) 
                                                                                | ((0x3ffffffcU 
                                                                                & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                                                                >> 2U)) 
                                                                                | ((0x1ffffffcU 
                                                                                & (((~ 
                                                                                ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer) 
                                                                                >> 3U)) 
                                                                                << 2U) 
                                                                                & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                                                                >> 3U))) 
                                                                                | ((IData)(
                                                                                (0x42U 
                                                                                == 
                                                                                (0x46U 
                                                                                & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop)))) 
                                                                                << 2U))))) 
                                                                              | ((2U 
                                                                                & (((IData)(
                                                                                (1U 
                                                                                == 
                                                                                (0xdU 
                                                                                & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop)))) 
                                                                                << 1U) 
                                                                                | ((0x1ffffffeU 
                                                                                & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                                                                >> 3U)) 
                                                                                | ((0xffffffeU 
                                                                                & (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                                                                >> 4U) 
                                                                                & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer) 
                                                                                >> 2U))) 
                                                                                | (0x7fffffeU 
                                                                                & (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                                                                >> 5U) 
                                                                                & ((1U 
                                                                                != 
                                                                                (7U 
                                                                                & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                                                                >> 1U))) 
                                                                                << 1U))))))) 
                                                                                | (1U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (7U 
                                                                                & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                                                                >> 1U))))) 
                                                                                & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop)) 
                                                                                | ((IData)(
                                                                                (0x44U 
                                                                                == 
                                                                                (0x4eU 
                                                                                & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop)))) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop))))))))))))))))))));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__Divider__data_out 
        = (0xffffU & ((0x20U & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer))
                       ? ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__negate_results)
                           ? (- vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__a_reg)
                           : vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__a_reg)
                       : ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__negate_results)
                           ? (- (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__q_reg))
                           : (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__q_reg))));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__adjusted_data 
        = ((0U == (3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer 
                                 >> 6U)))) ? ((0xff00U 
                                               & ((- (IData)(
                                                             ((~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__sel_buffer)) 
                                                              & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram_buffer1) 
                                                                 >> 7U)))) 
                                                  << 8U)) 
                                              | (IData)(M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT____VdfgRegularize_h79c90436_1_0))
            : ((2U == (3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer 
                                     >> 6U)))) ? (IData)(M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT____VdfgRegularize_h79c90436_1_0)
                : ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__sel_buffer)
                    ? 0U : (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram_buffer0) 
                             << 8U) | (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram_buffer1)))));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration1__DOT__stage2_a 
        = (0x1ffffU & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration1__DOT__stage1_a 
                       - (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__data_in2_buffer)));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__special_constant;
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__special_constant;
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__special_constant;
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__special_constant;
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__special_constant;
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__special_constant;
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__special_constant;
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__special_constant;
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__special_constant;
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__special_constant;
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__special_constant;
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__special_constant;
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__special_constant;
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__special_constant;
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__special_constant;
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__Multiplier__clk_en 
        = (1U & (~ ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2) 
                    & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__wb_conflict))));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__Divider__clk_en 
        = (1U & (~ ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__temp_valid_flag) 
                    & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__wb_conflict))));
    M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_2 
        = (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__brh_flush) 
            | (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__brh_issue_inval)) 
           | (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__wb_conflict));
    if ((2U & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selector))) {
        if ((1U & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selector))) {
            vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_data 
                = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__lsu
                .__PVT__data;
            vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_dest 
                = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__lsu
                .__PVT__dest;
        } else {
            vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_data 
                = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__div
                .__PVT__data;
            vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_dest 
                = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__div
                .__PVT__dest;
        }
    } else if ((1U & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selector))) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_data 
            = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__mul
            .__PVT__data;
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_dest 
            = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__mul
            .__PVT__dest;
    } else {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_data 
            = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__alu
            .__PVT__data;
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_dest 
            = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__alu
            .__PVT__dest;
    }
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration2__DOT__stage1_a 
        = ((0x1fffeU & (((0x8000U & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration1__DOT__stage2_a)
                          ? vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration1__DOT__stage1_a
                          : vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration1__DOT__stage2_a) 
                        << 1U)) | (1U & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__q_reg), 1U) 
                                         >> 0xfU)));
    if (M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_2) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__BranchUnit__operation = 0U;
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__uop = 0U;
    } else {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__BranchUnit__operation 
            = (3U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                     >> 4U));
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__uop 
            = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer;
    }
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
        = ((0x3ffffffffe0ULL & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out) 
           | (IData)((IData)(((((1U & ((~ (IData)(M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_2)) 
                                       & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                          >> 0xeU)))
                                 ? 0U : (0xfU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                                 >> 4U))) 
                               << 1U) | ((~ (IData)(M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_2)) 
                                         & (0x3800U 
                                            == (0x3800U 
                                                & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer)))))));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__regfile_reserve 
        = (1U & ((~ (IData)(M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_2)) 
                 & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                    >> 2U)));
    M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_11 
        = (1U & ((~ (IData)(M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_2)) 
                 & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                    >> 9U)));
    M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_10 
        = (1U & ((~ (IData)(M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_2)) 
                 & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                    >> 8U)));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__LSU__fence_mode 
        = (1U & ((~ (IData)(M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_2)) 
                 & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                    >> 7U)));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs2_forward_en 
        = ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__writeback_en) 
           & (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_dest) 
               == (0xfU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                           >> 8U))) & (0U != (0xfU 
                                              & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                                 >> 8U)))));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs1_forward_en 
        = ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__writeback_en) 
           & (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_dest) 
               == (0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer))) 
              & (0U != (0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer)))));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration2__DOT__stage2_a 
        = (0x1ffffU & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration2__DOT__stage1_a 
                       - (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__data_in2_buffer)));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__inst_fence 
        = ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__LSU__fence_mode) 
           & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
              >> 2U));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs2_data 
        = ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs2_forward_en)
            ? (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_data)
            : (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__rs2_buffer));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs1_busy 
        = ((~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs1_forward_en)) 
           & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard_buffer1) 
              & ((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                  >> 1U) | ((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                             >> 2U) & (0U != (0xfU 
                                              & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer)))))));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs1_data 
        = ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs1_forward_en)
            ? (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_data)
            : (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__rs1_buffer));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__temp_q2 
        = ((0xfffeU & VL_SHIFTL_III(32,16,32, ((0xfffeU 
                                                & VL_SHIFTL_III(32,16,32, (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__q_reg), 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration1__DOT__stage2_a 
                                                      >> 0x10U)))), 1U)) 
           | (1U & (~ (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration2__DOT__stage2_a 
                       >> 0x10U))));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__ifence_inval 
        = ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__inst_fence) 
           & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__pipeline_stall 
        = (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs1_busy) 
            | (((~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs2_forward_en)) 
                & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard_buffer2) 
                   & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer)) 
               | ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs1_busy) 
                  & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__regfile_reserve)))) 
           | (((IData)(M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_11) 
               & (0U != (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__state))) 
              | (((IData)(M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_10) 
                  & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__lsu_full)) 
                 | ((~ (((0U == (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__state)) 
                         & ((~ ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage1) 
                                | (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2))) 
                            & ((~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__writeback_en)) 
                               & ((~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__stage1_valid)) 
                                  & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_empty) 
                                     & ((~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__mem_read_ack)) 
                                        & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__en_buffer)))))))) 
                        | (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer))) 
                    & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__inst_fence)))));
    M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgExtracted_hd0d5424f__0 
        = (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs1_data) 
            << 0x10U) | (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs2_data));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__jmp_en 
        = (1U & (((~ (IData)(M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_2)) 
                  & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                     >> 3U)) | (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__ifence_inval)));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__jmp_target_out 
        = ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__ifence_inval)
            ? (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__inc_pc_buffer)
            : (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__jmp_tgt_buffer));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__DecodeStage__hazard_stall 
        = ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__pipeline_stall) 
           | (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__wb_conflict));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__Divider__call 
        = ((~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__pipeline_stall)) 
           & (IData)(M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_11));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__LSU__call 
        = ((~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__pipeline_stall)) 
           & (IData)(M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_10));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__Multiplier__call 
        = (1U & ((~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__pipeline_stall)) 
                 & ((~ (IData)(M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_2)) 
                    & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                       >> 0xaU))));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__BranchUnit__call 
        = (1U & ((~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__pipeline_stall)) 
                 & ((~ (IData)(M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_2)) 
                    & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                       >> 6U))));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
        = ((0x1fffffffffULL & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out) 
           | ((QData)((IData)((((((~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__pipeline_stall)) 
                                  & (~ (IData)(M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_2))) 
                                 & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                    >> 0x10U)) << 4U) 
                               | (0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer))))) 
              << 0x25U));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_5 
        = (((QData)((IData)((0x3fU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer)))) 
            << 0x20U) | (QData)((IData)(M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgExtracted_hd0d5424f__0)));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
        = ((0x3e00000001fULL & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out) 
           | ((QData)((IData)(((0x2000U & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__uop)
                                ? ((0x1000U & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__uop)
                                    ? M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgExtracted_hd0d5424f__0
                                    : ((0x800U & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__uop)
                                        ? (2U | ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__pc_buffer) 
                                                 << 0x11U))
                                        : (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__pc_buffer) 
                                            << 0x11U) 
                                           | (0xff00U 
                                              & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                                 << 4U)))))
                                : ((0x1000U & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__uop)
                                    ? ((0x800U & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__uop)
                                        ? (0xff00U 
                                           & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                              << 4U))
                                        : (IData)(M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_4))
                                    : ((0x800U & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__uop)
                                        ? (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs1_data) 
                                            << 0x10U) 
                                           | (IData)(M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_4))
                                        : M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgExtracted_hd0d5424f__0))))) 
              << 5U));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__write_en 
        = ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__jmp_en) 
           | (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__brh_flush));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__data_in 
        = ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__brh_flush)
            ? (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__brh_pc_tgt)
            : (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__jmp_target_out));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bit_manip 
        = (0xffffffffffffULL & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bit_manip);
    M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT____Vlvbound_h486324b3__0 = 1U;
    if ((0x3fU >= ((IData)(0x30U) + (0xfU & (IData)(
                                                    (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                     >> 5U)))))) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bit_manip 
            = (((~ (1ULL << ((IData)(0x30U) + (0xfU 
                                               & (IData)(
                                                         (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                          >> 5U)))))) 
                & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bit_manip) 
               | ((QData)((IData)(M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT____Vlvbound_h486324b3__0)) 
                  << ((IData)(0x30U) + (0xfU & (IData)(
                                                       (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                        >> 5U))))));
    }
}

VL_ATTR_COLD void VM1T_tb___024root___eval_triggers__stl(VM1T_tb___024root* vlSelf);

VL_ATTR_COLD bool VM1T_tb___024root___eval_phase__stl(VM1T_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VM1T_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VM1T_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VM1T_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VM1T_tb___024root___dump_triggers__act(VM1T_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VM1T_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] M1T_tb.Toplevel_m1t_instance.Core.ALU.bit_manip)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] M1T_tb.Toplevel_m1t_instance.Core.ALU.bscan)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] M1T_tb.Toplevel_m1t_instance.Core.ALU.bitscan_vals)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([hybrid] M1T_tb.Toplevel_m1t_instance.Core.ALU.shifter)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([hybrid] M1T_tb.Toplevel_m1t_instance.Core.ALU.add_sub)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VM1T_tb___024root___dump_triggers__nba(VM1T_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VM1T_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] M1T_tb.Toplevel_m1t_instance.Core.ALU.bit_manip)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] M1T_tb.Toplevel_m1t_instance.Core.ALU.bscan)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] M1T_tb.Toplevel_m1t_instance.Core.ALU.bitscan_vals)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([hybrid] M1T_tb.Toplevel_m1t_instance.Core.ALU.shifter)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([hybrid] M1T_tb.Toplevel_m1t_instance.Core.ALU.add_sub)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VM1T_tb___024root____Vm_traceActivitySetAll(VM1T_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VM1T_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root____Vm_traceActivitySetAll\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
    vlSelfRef.__Vm_traceActivity[8U] = 1U;
    vlSelfRef.__Vm_traceActivity[9U] = 1U;
}

VL_ATTR_COLD void VM1T_tb___024root___ctor_var_reset(VM1T_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VM1T_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->clk_en = VL_RAND_RESET_I(1);
    vlSelf->sync_rst = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__rst_buffer = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer = VL_RAND_RESET_I(16);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__rst_buffer0 = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__rst_buffer1 = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__sync_rst = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__mem_read_ack = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT____Vcellinp__MemoryController__core_mem_enable = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__adjusted_instruction_in = VL_RAND_RESET_I(16);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__lsu_full = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__brh_flush = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__brh_issue_inval = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__brh_pc_tgt = VL_RAND_RESET_I(15);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__writeback_en = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__reset_buffer = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__data_in = VL_RAND_RESET_I(15);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__write_en = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__sync_rst = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__DecodeStage__hazard_stall = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out = VL_RAND_RESET_Q(42);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__pipeline_stall = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__jmp_target_out = VL_RAND_RESET_I(15);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__jmp_en = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__regfile_reserve = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__ALU__data_out = VL_RAND_RESET_I(16);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__Multiplier__data_out = VL_RAND_RESET_I(16);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__Multiplier__call = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__Multiplier__clk_en = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__Divider__data_out = VL_RAND_RESET_I(16);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__Divider__call = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__Divider__clk_en = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__LSU__fence_mode = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__LSU__call = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__BranchUnit__operation = VL_RAND_RESET_I(2);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__BranchUnit__call = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__FetchStage__DOT__pc = VL_RAND_RESET_I(15);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer = VL_RAND_RESET_I(17);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer = VL_RAND_RESET_I(12);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__pc_buffer = VL_RAND_RESET_I(15);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__jmp_tgt_buffer = VL_RAND_RESET_I(15);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__inc_pc_buffer = VL_RAND_RESET_I(15);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__decoded_uop = VL_RAND_RESET_I(17);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 15; ++__Vi0) {
        vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 15; ++__Vi0) {
        vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__special_constant = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard_read = VL_RAND_RESET_I(16);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__rs1_buffer = VL_RAND_RESET_I(16);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__rs2_buffer = VL_RAND_RESET_I(16);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard_buffer1 = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard_buffer2 = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT____Vlvbound_h274463d9__0 = VL_RAND_RESET_I(16);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs1_forward_en = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs2_forward_en = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs1_busy = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs1_data = VL_RAND_RESET_I(16);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs2_data = VL_RAND_RESET_I(16);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__uop = VL_RAND_RESET_I(17);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__inst_fence = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__ifence_inval = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_5 = VL_RAND_RESET_Q(38);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub = VL_RAND_RESET_I(19);
    VL_RAND_RESET_W(81, vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter);
    VL_RAND_RESET_W(80, vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__selected_ihb = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bit_manip = VL_RAND_RESET_Q(64);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__int_selected_result0 = VL_RAND_RESET_I(16);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage1 = VL_RAND_RESET_Q(41);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2 = VL_RAND_RESET_Q(41);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__adjusted_result = VL_RAND_RESET_I(32);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__data_in1_buffer = VL_RAND_RESET_I(16);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__data_in2_buffer = VL_RAND_RESET_I(16);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__operation_buffer = VL_RAND_RESET_I(2);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__dest_addr_buffer = VL_RAND_RESET_I(4);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__preserved_data1_sign = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__preserved_data2_sign = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__cond_abs_data1 = VL_RAND_RESET_I(16);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__cond_abs_data2 = VL_RAND_RESET_I(16);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__a_reg = VL_RAND_RESET_I(17);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__q_reg = VL_RAND_RESET_I(16);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__i_ctr = VL_RAND_RESET_I(3);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__temp_q2 = VL_RAND_RESET_I(16);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__temp_valid_flag = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__negate_results = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration1__DOT__stage1_a = VL_RAND_RESET_I(17);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration1__DOT__stage2_a = VL_RAND_RESET_I(17);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration2__DOT__stage1_a = VL_RAND_RESET_I(17);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration2__DOT__stage2_a = VL_RAND_RESET_I(17);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__stage1 = VL_RAND_RESET_Q(41);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__stage1_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq[__Vi0] = VL_RAND_RESET_Q(41);
    }
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_ptr = VL_RAND_RESET_I(4);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_tail_ptr = VL_RAND_RESET_I(4);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_empty = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer = VL_RAND_RESET_Q(41);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer_valid = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__alu.__PVT__data = VL_RAND_RESET_I(16);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__alu.__PVT__dest = VL_RAND_RESET_I(4);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__alu.__PVT__valid = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__mul.__PVT__data = VL_RAND_RESET_I(16);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__mul.__PVT__dest = VL_RAND_RESET_I(4);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__mul.__PVT__valid = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__div.__PVT__data = VL_RAND_RESET_I(16);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__div.__PVT__dest = VL_RAND_RESET_I(4);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__div.__PVT__valid = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__lsu.__PVT__data = VL_RAND_RESET_I(16);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__lsu.__PVT__dest = VL_RAND_RESET_I(4);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__lsu.__PVT__valid = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__wb_conflict = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selector = VL_RAND_RESET_I(2);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_data = VL_RAND_RESET_I(16);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_dest = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram0[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram1[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram_buffer0 = VL_RAND_RESET_I(8);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram_buffer1 = VL_RAND_RESET_I(8);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__gpo_reg = VL_RAND_RESET_I(16);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__gpi_buffer = VL_RAND_RESET_I(16);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__dtype_buffer = VL_RAND_RESET_I(2);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__wb_dest_buffer = VL_RAND_RESET_I(4);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__en_buffer = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__mode_buffer = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__sel_buffer = VL_RAND_RESET_I(1);
    vlSelf->M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__adjusted_data = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bit_manip__0 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(80, vlSelf->__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan__0);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals__0[__Vi0] = VL_RAND_RESET_I(5);
    }
    VL_RAND_RESET_W(81, vlSelf->__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter__0);
    vlSelf->__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub__0 = VL_RAND_RESET_I(19);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bit_manip__1 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(80, vlSelf->__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan__1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals__1[__Vi0] = VL_RAND_RESET_I(5);
    }
    VL_RAND_RESET_W(81, vlSelf->__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter__1);
    vlSelf->__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub__1 = VL_RAND_RESET_I(19);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
