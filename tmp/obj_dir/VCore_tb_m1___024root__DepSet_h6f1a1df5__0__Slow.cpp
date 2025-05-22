// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCore_tb_m1.h for the primary calling header

#include "VCore_tb_m1__pch.h"
#include "VCore_tb_m1___024root.h"

VL_ATTR_COLD void VCore_tb_m1___024root___eval_static(VCore_tb_m1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore_tb_m1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb_m1___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VCore_tb_m1___024root___eval_initial__TOP(VCore_tb_m1___024root* vlSelf);

VL_ATTR_COLD void VCore_tb_m1___024root___eval_initial(VCore_tb_m1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore_tb_m1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb_m1___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VCore_tb_m1___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bit_manip__0 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bit_manip;
    vlSelfRef.__Vtrigprevexpr___TOP__Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bscan__0[0U] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bscan[0U];
    vlSelfRef.__Vtrigprevexpr___TOP__Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bscan__0[1U] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bscan[1U];
    vlSelfRef.__Vtrigprevexpr___TOP__Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bscan__0[2U] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bscan[2U];
    vlSelfRef.__Vtrigprevexpr___TOP__Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bitscan_vals__0 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bitscan_vals;
    vlSelfRef.__Vtrigprevexpr___TOP__Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__shifter__0[0U] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__shifter[0U];
    vlSelfRef.__Vtrigprevexpr___TOP__Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__shifter__0[1U] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__shifter[1U];
    vlSelfRef.__Vtrigprevexpr___TOP__Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__shifter__0[2U] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__shifter[2U];
    vlSelfRef.__Vtrigprevexpr___TOP__Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__add_sub__0 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__add_sub;
    vlSelfRef.__Vtrigprevexpr___TOP__Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bit_manip__1 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bit_manip;
    vlSelfRef.__Vtrigprevexpr___TOP__Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bscan__1[0U] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bscan[0U];
    vlSelfRef.__Vtrigprevexpr___TOP__Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bscan__1[1U] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bscan[1U];
    vlSelfRef.__Vtrigprevexpr___TOP__Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bscan__1[2U] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bscan[2U];
    vlSelfRef.__Vtrigprevexpr___TOP__Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bitscan_vals__1 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bitscan_vals;
    vlSelfRef.__Vtrigprevexpr___TOP__Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__shifter__1[0U] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__shifter[0U];
    vlSelfRef.__Vtrigprevexpr___TOP__Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__shifter__1[1U] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__shifter[1U];
    vlSelfRef.__Vtrigprevexpr___TOP__Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__shifter__1[2U] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__shifter[2U];
    vlSelfRef.__Vtrigprevexpr___TOP__Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__add_sub__1 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__add_sub;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

extern const VlWide<17>/*543:0*/ VCore_tb_m1__ConstPool__CONST_h7351ad64_0;

VL_ATTR_COLD void VCore_tb_m1___024root___eval_initial__TOP(VCore_tb_m1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore_tb_m1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb_m1___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_READMEM_N(true, 16, 256, 0, VL_CVT_PACK_STR_NW(17, VCore_tb_m1__ConstPool__CONST_h7351ad64_0)
                 ,  &(vlSelfRef.Core_tb_m1__DOT__rom)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VCore_tb_m1___024root___eval_final(VCore_tb_m1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore_tb_m1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb_m1___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCore_tb_m1___024root___dump_triggers__stl(VCore_tb_m1___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VCore_tb_m1___024root___eval_phase__stl(VCore_tb_m1___024root* vlSelf);

VL_ATTR_COLD void VCore_tb_m1___024root___eval_settle(VCore_tb_m1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore_tb_m1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb_m1___024root___eval_settle\n"); );
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
            VCore_tb_m1___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../rtl/../rtl/Testbench/Core_tb_m1.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VCore_tb_m1___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCore_tb_m1___024root___dump_triggers__stl(VCore_tb_m1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore_tb_m1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb_m1___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] Core_tb_m1.Core_m1_instance.ALU.bit_manip)\n");
    }
    if ((4ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] Core_tb_m1.Core_m1_instance.ALU.bscan)\n");
    }
    if ((8ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] Core_tb_m1.Core_m1_instance.ALU.bitscan_vals)\n");
    }
    if ((0x10ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 4 is active: @([hybrid] Core_tb_m1.Core_m1_instance.ALU.shifter)\n");
    }
    if ((0x20ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 5 is active: @([hybrid] Core_tb_m1.Core_m1_instance.ALU.add_sub)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCore_tb_m1___024root___stl_sequent__TOP__0(VCore_tb_m1___024root* vlSelf);
VL_ATTR_COLD void VCore_tb_m1___024root____Vm_traceActivitySetAll(VCore_tb_m1___024root* vlSelf);
void VCore_tb_m1___024root___act_sequent__TOP__0(VCore_tb_m1___024root* vlSelf);
void VCore_tb_m1___024root___act_sequent__TOP__1(VCore_tb_m1___024root* vlSelf);
void VCore_tb_m1___024root___act_sequent__TOP__2(VCore_tb_m1___024root* vlSelf);
void VCore_tb_m1___024root___act_sequent__TOP__3(VCore_tb_m1___024root* vlSelf);
void VCore_tb_m1___024root___act_sequent__TOP__4(VCore_tb_m1___024root* vlSelf);
void VCore_tb_m1___024root___act_comb__TOP__0(VCore_tb_m1___024root* vlSelf);
void VCore_tb_m1___024root___act_comb__TOP__1(VCore_tb_m1___024root* vlSelf);

VL_ATTR_COLD void VCore_tb_m1___024root___eval_stl(VCore_tb_m1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore_tb_m1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb_m1___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VCore_tb_m1___024root___stl_sequent__TOP__0(vlSelf);
        VCore_tb_m1___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0xdULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VCore_tb_m1___024root___act_sequent__TOP__0(vlSelf);
        VCore_tb_m1___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x11ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VCore_tb_m1___024root___act_sequent__TOP__1(vlSelf);
        VCore_tb_m1___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VCore_tb_m1___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((0x21ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VCore_tb_m1___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VCore_tb_m1___024root___act_sequent__TOP__4(vlSelf);
        VCore_tb_m1___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x3fULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VCore_tb_m1___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0xdULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VCore_tb_m1___024root___act_comb__TOP__1(vlSelf);
        VCore_tb_m1___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<CData/*7:0*/, 16> VCore_tb_m1__ConstPool__TABLE_hb93a4349_0;
extern const VlUnpacked<SData/*15:0*/, 256> VCore_tb_m1__ConstPool__TABLE_ha6e5e8aa_0;

VL_ATTR_COLD void VCore_tb_m1___024root___stl_sequent__TOP__0(VCore_tb_m1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore_tb_m1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb_m1___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgExtracted_hd0d5424f__0;
    Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgExtracted_hd0d5424f__0 = 0;
    CData/*0:0*/ Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_1;
    Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_1 = 0;
    SData/*15:0*/ Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_3;
    Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_3 = 0;
    CData/*0:0*/ Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_9;
    Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_9 = 0;
    CData/*0:0*/ Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_10;
    Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_10 = 0;
    CData/*0:0*/ Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT____Vlvbound_h486324b3__0;
    Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT____Vlvbound_h486324b3__0 = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__adjusted_instruction_in 
        = ((0xff00U & ((IData)(vlSelfRef.Core_tb_m1__DOT__rom_buffer) 
                       << 8U)) | (0xffU & ((IData)(vlSelfRef.Core_tb_m1__DOT__rom_buffer) 
                                           >> 8U)));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard_read 
        = ((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard
            [0xeU] << 0xfU) | ((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard
                                [0xdU] << 0xeU) | (
                                                   (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard
                                                    [0xcU] 
                                                    << 0xdU) 
                                                   | ((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard
                                                       [0xbU] 
                                                       << 0xcU) 
                                                      | ((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard
                                                          [0xaU] 
                                                          << 0xbU) 
                                                         | ((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard
                                                             [9U] 
                                                             << 0xaU) 
                                                            | ((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard
                                                                [8U] 
                                                                << 9U) 
                                                               | ((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard
                                                                   [7U] 
                                                                   << 8U) 
                                                                  | ((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard
                                                                      [6U] 
                                                                      << 7U) 
                                                                     | ((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard
                                                                         [5U] 
                                                                         << 6U) 
                                                                        | ((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard
                                                                            [4U] 
                                                                            << 5U) 
                                                                           | ((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard
                                                                               [3U] 
                                                                               << 4U) 
                                                                              | ((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard
                                                                                [2U] 
                                                                                << 3U) 
                                                                                | ((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard
                                                                                [1U] 
                                                                                << 2U) 
                                                                                | (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard
                                                                                [0U] 
                                                                                << 1U)))))))))))))));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__FetchStage__sync_rst 
        = ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__reset_buffer) 
           | (IData)(vlSelfRef.sync_rst));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__cond_abs_data1 
        = (0xffffU & (((~ (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__operation_buffer)) 
                       & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__data_in1_buffer) 
                          >> 0xfU)) ? (- (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__data_in1_buffer))
                       : (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__data_in1_buffer)));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__cond_abs_data2 
        = (0xffffU & (((~ (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__operation_buffer)) 
                       & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__data_in2_buffer) 
                          >> 0xfU)) ? (- (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__data_in2_buffer))
                       : (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__data_in2_buffer)));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__adjusted_result 
        = ((1U & (((0U != (3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage2 
                                         >> 5U)))) 
                   & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage2 
                              >> 7U))) ^ (IData)((0xc0ULL 
                                                  == 
                                                  (0xc0ULL 
                                                   & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage2)))))
            ? (- (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage2 
                          >> 9U))) : (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage2 
                                              >> 9U)));
    __Vtableidx1 = (0xfU & ((IData)(vlSelfRef.Core_tb_m1__DOT__rom_buffer) 
                            >> 8U));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop 
        = VCore_tb_m1__ConstPool__TABLE_hb93a4349_0
        [__Vtableidx1];
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__negate_results 
        = ((~ (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__operation_buffer)) 
           & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__preserved_data1_sign) 
              ^ (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__preserved_data2_sign)));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[1U] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile
        [0U];
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[2U] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile
        [1U];
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[3U] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile
        [2U];
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[4U] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile
        [3U];
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[5U] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile
        [4U];
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[6U] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile
        [5U];
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[7U] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile
        [6U];
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[8U] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile
        [7U];
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[9U] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile
        [8U];
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0xaU] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile
        [9U];
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0xbU] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile
        [0xaU];
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0xcU] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile
        [0xbU];
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0xdU] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile
        [0xcU];
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0xeU] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile
        [0xdU];
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0xfU] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile
        [0xeU];
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration1__DOT__stage1_a 
        = ((0x1fffeU & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__a_reg 
                        << 1U)) | (1U & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__q_reg) 
                                         >> 0xfU)));
    Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_3 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer) 
                                         >> 0xbU)))) 
                       << 8U)) | (0xffU & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer) 
                                           >> 4U)));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__lsu_full 
        = ((((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq_head_ptr) 
             ^ (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq_tail_ptr)) 
            >> 3U) & ((7U & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq_head_ptr)) 
                      == (7U & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq_tail_ptr))));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq_empty 
        = ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq_head_ptr) 
           == (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq_tail_ptr));
    __Vtableidx2 = ((0xf0U & ((IData)(vlSelfRef.Core_tb_m1__DOT__rom_buffer) 
                              << 4U)) | (0xfU & ((IData)(vlSelfRef.Core_tb_m1__DOT__rom_buffer) 
                                                 >> 8U)));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__special_constant 
        = VCore_tb_m1__ConstPool__TABLE_ha6e5e8aa_0
        [__Vtableidx2];
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__writeback_en 
        = (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__alu
           .__PVT__valid | (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__mul
                            .__PVT__valid | (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__div
                                             .__PVT__valid 
                                             | vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__lsu
                                             .__PVT__valid)));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__wb_conflict 
        = (1U & (0xfee8U >> (((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__alu
                                      .__PVT__valid) 
                              << 3U) | (((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__mul
                                                 .__PVT__valid) 
                                         << 2U) | (
                                                   ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__div
                                                            .__PVT__valid) 
                                                    << 1U) 
                                                   | vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__lsu
                                                   .__PVT__valid)))));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__selector 
        = (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__alu
           .__PVT__valid ? (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__mul
                            .__PVT__valid ? (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__div
                                             .__PVT__valid
                                              ? (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__lsu
                                                 .__PVT__valid
                                                  ? 3U
                                                  : 2U)
                                              : (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__lsu
                                                 .__PVT__valid
                                                  ? 3U
                                                  : 1U))
                             : (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__div
                                .__PVT__valid ? (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__lsu
                                                 .__PVT__valid
                                                  ? 3U
                                                  : 2U)
                                 : (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__lsu
                                    .__PVT__valid ? 3U
                                     : 0U))) : (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__mul
                                                .__PVT__valid
                                                 ? 
                                                (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__div
                                                 .__PVT__valid
                                                  ? 
                                                 (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__lsu
                                                  .__PVT__valid
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__lsu
                                                  .__PVT__valid
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__div
                                                 .__PVT__valid
                                                  ? 
                                                 (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__lsu
                                                  .__PVT__valid
                                                   ? 3U
                                                   : 2U)
                                                  : 3U)));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__Multiplier__data_out 
        = (0xffffU & ((0U != (3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage2 
                                            >> 5U))))
                       ? (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__adjusted_result 
                          >> 0x10U) : vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__adjusted_result));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__decoded_uop 
        = ((0x10000U & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                        << 0x10U)) | (((IData)((0xfU 
                                                == 
                                                (0xfU 
                                                 & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop)))) 
                                       << 0xfU) | (
                                                   (((~ (IData)(
                                                                (7U 
                                                                 == 
                                                                 (7U 
                                                                  & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                                                     >> 1U))))) 
                                                     & (0U 
                                                        != 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                                            >> 1U)))) 
                                                    << 0xeU) 
                                                   | ((0x3800U 
                                                       & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                                          << 0xaU)) 
                                                      | ((0x400U 
                                                          & (((~ 
                                                               ((IData)(vlSelfRef.Core_tb_m1__DOT__rom_buffer) 
                                                                >> 2U)) 
                                                              << 0xaU) 
                                                             & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                                                << 6U))) 
                                                         | ((0x200U 
                                                             & (((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                                                 << 5U) 
                                                                & ((IData)(vlSelfRef.Core_tb_m1__DOT__rom_buffer) 
                                                                   << 7U))) 
                                                            | (((IData)(
                                                                        (0x20U 
                                                                         == 
                                                                         (0x22U 
                                                                          & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop)))) 
                                                                << 8U) 
                                                               | (((IData)(
                                                                           (((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                                                             >> 7U) 
                                                                            & (~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelfRef.Core_tb_m1__DOT__rom_buffer))))))) 
                                                                   << 7U) 
                                                                  | ((0x40U 
                                                                      & ((0xffffffc0U 
                                                                          & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop)) 
                                                                         | ((((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                                                              >> 7U) 
                                                                             & (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelfRef.Core_tb_m1__DOT__rom_buffer)))) 
                                                                            << 6U))) 
                                                                     | ((0x30U 
                                                                         & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                                                            << 3U)) 
                                                                        | (((IData)(
                                                                                (0x46U 
                                                                                == 
                                                                                (0x46U 
                                                                                & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop)))) 
                                                                            << 3U) 
                                                                           | ((4U 
                                                                               & (((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                                                                << 2U) 
                                                                                | ((0x3ffffffcU 
                                                                                & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                                                                >> 2U)) 
                                                                                | ((0x1ffffffcU 
                                                                                & (((~ 
                                                                                ((IData)(vlSelfRef.Core_tb_m1__DOT__rom_buffer) 
                                                                                >> 3U)) 
                                                                                << 2U) 
                                                                                & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                                                                >> 3U))) 
                                                                                | ((IData)(
                                                                                (0x42U 
                                                                                == 
                                                                                (0x46U 
                                                                                & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop)))) 
                                                                                << 2U))))) 
                                                                              | ((2U 
                                                                                & (((IData)(
                                                                                (1U 
                                                                                == 
                                                                                (0xdU 
                                                                                & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop)))) 
                                                                                << 1U) 
                                                                                | ((0x1ffffffeU 
                                                                                & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                                                                >> 3U)) 
                                                                                | ((0xffffffeU 
                                                                                & (((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                                                                >> 4U) 
                                                                                & ((IData)(vlSelfRef.Core_tb_m1__DOT__rom_buffer) 
                                                                                >> 2U))) 
                                                                                | (0x7fffffeU 
                                                                                & (((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                                                                >> 5U) 
                                                                                & ((1U 
                                                                                != 
                                                                                (7U 
                                                                                & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                                                                >> 1U))) 
                                                                                << 1U))))))) 
                                                                                | (1U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (7U 
                                                                                & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                                                                >> 1U))))) 
                                                                                & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop)) 
                                                                                | ((IData)(
                                                                                (0x44U 
                                                                                == 
                                                                                (0x4eU 
                                                                                & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop)))) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop))))))))))))))))))));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__Divider__data_out 
        = (0xffffU & ((0x20U & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer))
                       ? ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__negate_results)
                           ? (- vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__a_reg)
                           : vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__a_reg)
                       : ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__negate_results)
                           ? (- (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__q_reg))
                           : (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__q_reg))));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration1__DOT__stage2_a 
        = (0x1ffffU & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration1__DOT__stage1_a 
                       - (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__data_in2_buffer)));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0U] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__special_constant;
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0U] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__special_constant;
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0U] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__special_constant;
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0U] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__special_constant;
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0U] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__special_constant;
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0U] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__special_constant;
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0U] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__special_constant;
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0U] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__special_constant;
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0U] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__special_constant;
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0U] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__special_constant;
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0U] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__special_constant;
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0U] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__special_constant;
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0U] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__special_constant;
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0U] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__special_constant;
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0U] 
        = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__special_constant;
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__Multiplier__clk_en 
        = ((~ ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage2) 
               & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__wb_conflict))) 
           & (IData)(vlSelfRef.clk_en));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__Divider__clk_en 
        = ((~ ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__temp_valid_flag) 
               & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__wb_conflict))) 
           & (IData)(vlSelfRef.clk_en));
    Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_1 
        = (((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__brh_flush) 
            | (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__brh_issue_inval)) 
           | (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__wb_conflict));
    if ((2U & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__selector))) {
        if ((1U & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__selector))) {
            vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__selected_data 
                = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__lsu
                .__PVT__data;
            vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__selected_dest 
                = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__lsu
                .__PVT__dest;
        } else {
            vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__selected_data 
                = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__div
                .__PVT__data;
            vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__selected_dest 
                = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__div
                .__PVT__dest;
        }
    } else if ((1U & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__selector))) {
        vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__selected_data 
            = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__mul
            .__PVT__data;
        vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__selected_dest 
            = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__mul
            .__PVT__dest;
    } else {
        vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__selected_data 
            = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__alu
            .__PVT__data;
        vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__selected_dest 
            = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__alu
            .__PVT__dest;
    }
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration2__DOT__stage1_a 
        = ((0x1fffeU & (((0x8000U & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration1__DOT__stage2_a)
                          ? vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration1__DOT__stage1_a
                          : vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration1__DOT__stage2_a) 
                        << 1U)) | (1U & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__q_reg), 1U) 
                                         >> 0xfU)));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__regfile_reserve 
        = (1U & ((~ (IData)(Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_1)) 
                 & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                    >> 2U)));
    if (Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_1) {
        vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__BranchUnit__operation = 0U;
        vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__uop = 0U;
    } else {
        vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__BranchUnit__operation 
            = (3U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                     >> 4U));
        vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__uop 
            = vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer;
    }
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
        = ((0x3ffffffffe0ULL & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out) 
           | (IData)((IData)(((((1U & ((~ (IData)(Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_1)) 
                                       & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                          >> 0xeU)))
                                 ? 0U : (0xfU & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer) 
                                                 >> 4U))) 
                               << 1U) | ((~ (IData)(Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_1)) 
                                         & (0x3800U 
                                            == (0x3800U 
                                                & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer)))))));
    Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_10 
        = (1U & ((~ (IData)(Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_1)) 
                 & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                    >> 9U)));
    Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_9 
        = (1U & ((~ (IData)(Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_1)) 
                 & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                    >> 8U)));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__LSU__fence_mode 
        = (1U & ((~ (IData)(Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_1)) 
                 & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                    >> 7U)));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__rs2_forward_en 
        = ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__writeback_en) 
           & (((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__selected_dest) 
               == (0xfU & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer) 
                           >> 8U))) & (0U != (0xfU 
                                              & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer) 
                                                 >> 8U)))));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__rs1_forward_en 
        = ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__writeback_en) 
           & (((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__selected_dest) 
               == (0xfU & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer))) 
              & (0U != (0xfU & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer)))));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration2__DOT__stage2_a 
        = (0x1ffffU & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration2__DOT__stage1_a 
                       - (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__data_in2_buffer)));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__inst_fence 
        = ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__LSU__fence_mode) 
           & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer) 
              >> 2U));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__rs2_data 
        = ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__rs2_forward_en)
            ? (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__selected_data)
            : (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__rs2_buffer));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__rs1_data 
        = ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__rs1_forward_en)
            ? (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__selected_data)
            : (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__rs1_buffer));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__temp_q2 
        = ((0xfffeU & VL_SHIFTL_III(32,16,32, ((0xfffeU 
                                                & VL_SHIFTL_III(32,16,32, (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__q_reg), 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration1__DOT__stage2_a 
                                                      >> 0x10U)))), 1U)) 
           | (1U & (~ (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration2__DOT__stage2_a 
                       >> 0x10U))));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__ifence_inval 
        = ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__inst_fence) 
           & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__pipeline_stall 
        = (((~ (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__rs1_forward_en)) 
            & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard_buffer1) 
               & (IData)((0U != (6U & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer))))) 
           | (((~ (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__rs2_forward_en)) 
               & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard_buffer2) 
                  & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer)) 
              | (((IData)(Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_10) 
                  & (0U != (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__state))) 
                 | (((IData)(Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_9) 
                     & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__lsu_full)) 
                    | ((~ (((0U == (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__state)) 
                            & ((~ ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage1) 
                                   | (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage2))) 
                               & ((~ (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__writeback_en)) 
                                  & ((~ (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__stage1_valid)) 
                                     & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq_empty) 
                                        & ((~ (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__mem_read_ack)) 
                                           & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__mem_idle))))))) 
                           | (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer))) 
                       & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__inst_fence))))));
    Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgExtracted_hd0d5424f__0 
        = (((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__rs1_data) 
            << 0x10U) | (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__rs2_data));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__jmp_en 
        = (1U & (((~ (IData)(Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_1)) 
                  & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                     >> 3U)) | (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__ifence_inval)));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__jmp_target_out 
        = ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__ifence_inval)
            ? (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__inc_pc_buffer)
            : (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__jmp_tgt_buffer));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__DecodeStage__hazard_stall 
        = ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__pipeline_stall) 
           | (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__wb_conflict));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__Divider__call 
        = ((~ (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__pipeline_stall)) 
           & (IData)(Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_10));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__LSU__call 
        = ((~ (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__pipeline_stall)) 
           & (IData)(Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_9));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__Multiplier__call 
        = (1U & ((~ (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__pipeline_stall)) 
                 & ((~ (IData)(Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_1)) 
                    & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                       >> 0xaU))));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__BranchUnit__call 
        = (1U & ((~ (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__pipeline_stall)) 
                 & ((~ (IData)(Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_1)) 
                    & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                       >> 6U))));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
        = ((0x1fffffffffULL & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out) 
           | ((QData)((IData)((((((~ (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__pipeline_stall)) 
                                  & (~ (IData)(Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_1))) 
                                 & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                    >> 0x10U)) << 4U) 
                               | (0xfU & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer))))) 
              << 0x25U));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_4 
        = (((QData)((IData)((0x3fU & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer)))) 
            << 0x20U) | (QData)((IData)(Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgExtracted_hd0d5424f__0)));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
        = ((0x3e00000001fULL & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out) 
           | ((QData)((IData)(((0x2000U & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__uop)
                                ? ((0x1000U & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__uop)
                                    ? Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgExtracted_hd0d5424f__0
                                    : ((0x800U & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__uop)
                                        ? (2U | ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__pc_buffer) 
                                                 << 0x11U))
                                        : (((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__pc_buffer) 
                                            << 0x11U) 
                                           | (0xff00U 
                                              & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer) 
                                                 << 4U)))))
                                : ((0x1000U & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__uop)
                                    ? ((0x800U & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__uop)
                                        ? (0xff00U 
                                           & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer) 
                                              << 4U))
                                        : (IData)(Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_3))
                                    : ((0x800U & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__uop)
                                        ? (((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__rs1_data) 
                                            << 0x10U) 
                                           | (IData)(Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_3))
                                        : Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgExtracted_hd0d5424f__0))))) 
              << 5U));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__FetchStage__write_en 
        = ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__jmp_en) 
           | (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__brh_flush));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__FetchStage__data_in 
        = ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__brh_flush)
            ? (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__brh_pc_tgt)
            : (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__jmp_target_out));
    vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bit_manip 
        = (0xffffffffffffULL & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bit_manip);
    Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT____Vlvbound_h486324b3__0 = 1U;
    if ((0x3fU >= ((IData)(0x30U) + (0xfU & (IData)(
                                                    (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                     >> 5U)))))) {
        vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bit_manip 
            = (((~ (1ULL << ((IData)(0x30U) + (0xfU 
                                               & (IData)(
                                                         (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                          >> 5U)))))) 
                & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bit_manip) 
               | ((QData)((IData)(Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT____Vlvbound_h486324b3__0)) 
                  << ((IData)(0x30U) + (0xfU & (IData)(
                                                       (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                        >> 5U))))));
    }
}

VL_ATTR_COLD void VCore_tb_m1___024root___eval_triggers__stl(VCore_tb_m1___024root* vlSelf);

VL_ATTR_COLD bool VCore_tb_m1___024root___eval_phase__stl(VCore_tb_m1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore_tb_m1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb_m1___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VCore_tb_m1___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VCore_tb_m1___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCore_tb_m1___024root___dump_triggers__ico(VCore_tb_m1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore_tb_m1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb_m1___024root___dump_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VCore_tb_m1___024root___dump_triggers__act(VCore_tb_m1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore_tb_m1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb_m1___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] Core_tb_m1.Core_m1_instance.ALU.bit_manip)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] Core_tb_m1.Core_m1_instance.ALU.bscan)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] Core_tb_m1.Core_m1_instance.ALU.bitscan_vals)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([hybrid] Core_tb_m1.Core_m1_instance.ALU.shifter)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([hybrid] Core_tb_m1.Core_m1_instance.ALU.add_sub)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VCore_tb_m1___024root___dump_triggers__nba(VCore_tb_m1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore_tb_m1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb_m1___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] Core_tb_m1.Core_m1_instance.ALU.bit_manip)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] Core_tb_m1.Core_m1_instance.ALU.bscan)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] Core_tb_m1.Core_m1_instance.ALU.bitscan_vals)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([hybrid] Core_tb_m1.Core_m1_instance.ALU.shifter)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([hybrid] Core_tb_m1.Core_m1_instance.ALU.add_sub)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCore_tb_m1___024root____Vm_traceActivitySetAll(VCore_tb_m1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore_tb_m1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb_m1___024root____Vm_traceActivitySetAll\n"); );
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

VL_ATTR_COLD void VCore_tb_m1___024root___ctor_var_reset(VCore_tb_m1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore_tb_m1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb_m1___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->clk_en = VL_RAND_RESET_I(1);
    vlSelf->sync_rst = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->Core_tb_m1__DOT__rom[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->Core_tb_m1__DOT__rom_buffer = VL_RAND_RESET_I(16);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__mem_data_in = VL_RAND_RESET_I(16);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__mem_wb_dest_in = VL_RAND_RESET_I(4);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__mem_read_ack = VL_RAND_RESET_I(1);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__mem_available = VL_RAND_RESET_I(1);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__mem_idle = VL_RAND_RESET_I(1);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__adjusted_instruction_in = VL_RAND_RESET_I(16);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__lsu_full = VL_RAND_RESET_I(1);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__brh_flush = VL_RAND_RESET_I(1);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__brh_issue_inval = VL_RAND_RESET_I(1);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__brh_pc_tgt = VL_RAND_RESET_I(15);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__writeback_en = VL_RAND_RESET_I(1);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__reset_buffer = VL_RAND_RESET_I(1);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__FetchStage__data_in = VL_RAND_RESET_I(15);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__FetchStage__write_en = VL_RAND_RESET_I(1);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__FetchStage__sync_rst = VL_RAND_RESET_I(1);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__DecodeStage__hazard_stall = VL_RAND_RESET_I(1);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out = VL_RAND_RESET_Q(42);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__pipeline_stall = VL_RAND_RESET_I(1);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__jmp_target_out = VL_RAND_RESET_I(15);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__jmp_en = VL_RAND_RESET_I(1);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__regfile_reserve = VL_RAND_RESET_I(1);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__ALU__data_out = VL_RAND_RESET_I(16);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__Multiplier__data_out = VL_RAND_RESET_I(16);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__Multiplier__call = VL_RAND_RESET_I(1);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__Multiplier__clk_en = VL_RAND_RESET_I(1);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__Divider__data_out = VL_RAND_RESET_I(16);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__Divider__call = VL_RAND_RESET_I(1);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__Divider__clk_en = VL_RAND_RESET_I(1);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__LSU__fence_mode = VL_RAND_RESET_I(1);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__LSU__call = VL_RAND_RESET_I(1);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__BranchUnit__operation = VL_RAND_RESET_I(2);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__BranchUnit__call = VL_RAND_RESET_I(1);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__FetchStage__DOT__pc = VL_RAND_RESET_I(15);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer = VL_RAND_RESET_I(17);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer = VL_RAND_RESET_I(12);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__pc_buffer = VL_RAND_RESET_I(15);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__jmp_tgt_buffer = VL_RAND_RESET_I(15);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__inc_pc_buffer = VL_RAND_RESET_I(15);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__decoded_uop = VL_RAND_RESET_I(17);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 15; ++__Vi0) {
        vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 15; ++__Vi0) {
        vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__special_constant = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard_read = VL_RAND_RESET_I(16);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__rs1_buffer = VL_RAND_RESET_I(16);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__rs2_buffer = VL_RAND_RESET_I(16);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard_buffer1 = VL_RAND_RESET_I(1);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard_buffer2 = VL_RAND_RESET_I(1);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT____Vlvbound_h274463d9__0 = VL_RAND_RESET_I(16);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__rs1_forward_en = VL_RAND_RESET_I(1);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__rs2_forward_en = VL_RAND_RESET_I(1);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__rs1_data = VL_RAND_RESET_I(16);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__rs2_data = VL_RAND_RESET_I(16);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__uop = VL_RAND_RESET_I(17);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__inst_fence = VL_RAND_RESET_I(1);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__ifence_inval = VL_RAND_RESET_I(1);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_4 = VL_RAND_RESET_Q(38);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__add_sub = VL_RAND_RESET_I(19);
    VL_RAND_RESET_W(81, vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__shifter);
    VL_RAND_RESET_W(80, vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bscan);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__selected_ihb = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bitscan_vals[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bit_manip = VL_RAND_RESET_Q(64);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__int_selected_result0 = VL_RAND_RESET_I(16);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage1 = VL_RAND_RESET_Q(41);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage2 = VL_RAND_RESET_Q(41);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__adjusted_result = VL_RAND_RESET_I(32);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__data_in1_buffer = VL_RAND_RESET_I(16);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__data_in2_buffer = VL_RAND_RESET_I(16);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__operation_buffer = VL_RAND_RESET_I(2);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__dest_addr_buffer = VL_RAND_RESET_I(4);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__preserved_data1_sign = VL_RAND_RESET_I(1);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__preserved_data2_sign = VL_RAND_RESET_I(1);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__cond_abs_data1 = VL_RAND_RESET_I(16);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__cond_abs_data2 = VL_RAND_RESET_I(16);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__a_reg = VL_RAND_RESET_I(17);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__q_reg = VL_RAND_RESET_I(16);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__i_ctr = VL_RAND_RESET_I(3);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__temp_q2 = VL_RAND_RESET_I(16);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__temp_valid_flag = VL_RAND_RESET_I(1);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__negate_results = VL_RAND_RESET_I(1);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration1__DOT__stage1_a = VL_RAND_RESET_I(17);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration1__DOT__stage2_a = VL_RAND_RESET_I(17);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration2__DOT__stage1_a = VL_RAND_RESET_I(17);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration2__DOT__stage2_a = VL_RAND_RESET_I(17);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__stage1 = VL_RAND_RESET_Q(41);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__stage1_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq[__Vi0] = VL_RAND_RESET_Q(41);
    }
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq_head_ptr = VL_RAND_RESET_I(4);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq_tail_ptr = VL_RAND_RESET_I(4);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq_empty = VL_RAND_RESET_I(1);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq_head_buffer = VL_RAND_RESET_Q(41);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq_head_buffer_valid = VL_RAND_RESET_I(1);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__alu.__PVT__data = VL_RAND_RESET_I(16);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__alu.__PVT__dest = VL_RAND_RESET_I(4);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__alu.__PVT__valid = VL_RAND_RESET_I(1);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__mul.__PVT__data = VL_RAND_RESET_I(16);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__mul.__PVT__dest = VL_RAND_RESET_I(4);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__mul.__PVT__valid = VL_RAND_RESET_I(1);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__div.__PVT__data = VL_RAND_RESET_I(16);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__div.__PVT__dest = VL_RAND_RESET_I(4);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__div.__PVT__valid = VL_RAND_RESET_I(1);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__lsu.__PVT__data = VL_RAND_RESET_I(16);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__lsu.__PVT__dest = VL_RAND_RESET_I(4);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__lsu.__PVT__valid = VL_RAND_RESET_I(1);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__wb_conflict = VL_RAND_RESET_I(1);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__selector = VL_RAND_RESET_I(2);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__selected_data = VL_RAND_RESET_I(16);
    vlSelf->Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__selected_dest = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bit_manip__0 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(80, vlSelf->__Vtrigprevexpr___TOP__Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bscan__0);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bitscan_vals__0[__Vi0] = VL_RAND_RESET_I(5);
    }
    VL_RAND_RESET_W(81, vlSelf->__Vtrigprevexpr___TOP__Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__shifter__0);
    vlSelf->__Vtrigprevexpr___TOP__Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__add_sub__0 = VL_RAND_RESET_I(19);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bit_manip__1 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(80, vlSelf->__Vtrigprevexpr___TOP__Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bscan__1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bitscan_vals__1[__Vi0] = VL_RAND_RESET_I(5);
    }
    VL_RAND_RESET_W(81, vlSelf->__Vtrigprevexpr___TOP__Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__shifter__1);
    vlSelf->__Vtrigprevexpr___TOP__Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__add_sub__1 = VL_RAND_RESET_I(19);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
