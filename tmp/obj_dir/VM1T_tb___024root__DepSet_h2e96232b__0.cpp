// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VM1T_tb.h for the primary calling header

#include "VM1T_tb__pch.h"
#include "VM1T_tb___024root.h"

void VM1T_tb___024root___act_sequent__TOP__0(VM1T_tb___024root* vlSelf);
void VM1T_tb___024root___act_sequent__TOP__1(VM1T_tb___024root* vlSelf);
void VM1T_tb___024root___act_sequent__TOP__2(VM1T_tb___024root* vlSelf);
void VM1T_tb___024root___act_sequent__TOP__3(VM1T_tb___024root* vlSelf);
void VM1T_tb___024root___act_sequent__TOP__4(VM1T_tb___024root* vlSelf);
void VM1T_tb___024root___act_comb__TOP__0(VM1T_tb___024root* vlSelf);
void VM1T_tb___024root___act_comb__TOP__1(VM1T_tb___024root* vlSelf);

void VM1T_tb___024root___eval_act(VM1T_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VM1T_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((6ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VM1T_tb___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VM1T_tb___024root___act_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VM1T_tb___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VM1T_tb___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VM1T_tb___024root___act_sequent__TOP__4(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((0x1fULL & vlSelfRef.__VactTriggered.word(0U))) {
        VM1T_tb___024root___act_comb__TOP__0(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VM1T_tb___024root___act_comb__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
}

VL_INLINE_OPT void VM1T_tb___024root___act_sequent__TOP__0(VM1T_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VM1T_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root___act_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)((1U & (IData)(
                                                            (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                             >> 0x15U))))) 
                              << 0x3fU) | (((QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                        >> 0x16U))))) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                           >> 0x17U))))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                              >> 0x18U))))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x19U))))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x1aU))))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x1bU))))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x1cU))))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x1dU))))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x1eU))))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x1fU))))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x20U))))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x21U))))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x22U))))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x23U))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x24U))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                ((((1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 1U)))
                                                                                 ? (IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x15U))
                                                                                 : 
                                                                                ((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[1U] 
                                                                                << 0x10U) 
                                                                                | (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[1U] 
                                                                                >> 0x10U))) 
                                                                                << 0x10U) 
                                                                                | (0xffffU 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[1U] 
                                                                                & (- 
                                                                                vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[1U])))))) 
                                                                                << 0x10U) 
                                                                                | (QData)((IData)(
                                                                                ((0x8000U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U] 
                                                                                >> 1U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U] 
                                                                                >> 5U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U] 
                                                                                >> 7U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U] 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U] 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U] 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U] 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U] 
                                                                                >> 0x1dU)) 
                                                                                | (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U] 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))))))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                           >> 0x15U))))) 
                               << 0x3fU) | (((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                         >> 0x16U))))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                            >> 0x17U))))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                               >> 0x18U))))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x19U))))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x1aU))))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x1bU))))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x1cU))))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x1dU))))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x1eU))))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x1fU))))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x20U))))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x21U))))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x22U))))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x23U))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x24U))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                ((((1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 1U)))
                                                                                 ? (IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x15U))
                                                                                 : 
                                                                                ((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[1U] 
                                                                                << 0x10U) 
                                                                                | (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[1U] 
                                                                                >> 0x10U))) 
                                                                                << 0x10U) 
                                                                                | (0xffffU 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[1U] 
                                                                                & (- 
                                                                                vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[1U])))))) 
                                                                                << 0x10U) 
                                                                                | (QData)((IData)(
                                                                                ((0x8000U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U] 
                                                                                >> 1U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U] 
                                                                                >> 5U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U] 
                                                                                >> 7U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U] 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U] 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U] 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U] 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U] 
                                                                                >> 0x1dU)) 
                                                                                | (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U] 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))))))) 
                             >> 0x20U));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U] 
        = __Vtemp_1[0U];
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[1U] 
        = __Vtemp_1[1U];
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[2U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals
        [0xfU];
}

VL_INLINE_OPT void VM1T_tb___024root___act_sequent__TOP__1(VM1T_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VM1T_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root___act_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    __Vtemp_2[0U] = (IData)((((QData)((IData)((1U & 
                                               (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U] 
                                                >> 0x10U)))) 
                              << 0x2fU) | (((QData)((IData)(
                                                            (1U 
                                                             & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U] 
                                                                >> 0x11U)))) 
                                            << 0x2eU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U] 
                                                                   >> 0x12U)))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U] 
                                                                      >> 0x13U)))) 
                                                  << 0x2cU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U] 
                                                                         >> 0x14U)))) 
                                                     << 0x2bU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U] 
                                                                            >> 0x15U)))) 
                                                        << 0x2aU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U] 
                                                                               >> 0x16U)))) 
                                                           << 0x29U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U] 
                                                                                >> 0x17U)))) 
                                                              << 0x28U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U] 
                                                                                >> 0x18U)))) 
                                                                 << 0x27U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U] 
                                                                                >> 0x19U)))) 
                                                                    << 0x26U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U] 
                                                                                >> 0x1aU)))) 
                                                                       << 0x25U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U] 
                                                                                >> 0x1bU)))) 
                                                                          << 0x24U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U] 
                                                                                >> 0x1cU)))) 
                                                                             << 0x23U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U] 
                                                                                >> 0x1dU)))) 
                                                                                << 0x22U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U] 
                                                                                >> 0x1eU)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U] 
                                                                                >> 0x1fU))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((((1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 1U)))
                                                                                 ? 
                                                                                vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[0U]
                                                                                 : (IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x15U))) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x15U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x16U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x17U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x18U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x19U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x1aU)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x1bU)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x1cU)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x1dU)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x1eU)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x1fU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x20U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x21U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x22U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x23U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x24U))))))))))))))))))))))))))))))))))))));
    __Vtemp_2[1U] = (((((((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[0U] 
                           >> 0x1fU) & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                        >> 4U)) << 0x10U) 
                        | (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[0U] 
                           >> 0x10U)) >> (0xfU & (IData)(
                                                         (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                          >> 5U)))) 
                      << 0x10U) | (IData)(((((QData)((IData)(
                                                             (1U 
                                                              & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U] 
                                                                 >> 0x10U)))) 
                                             << 0x2fU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U] 
                                                                    >> 0x11U)))) 
                                                << 0x2eU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U] 
                                                                       >> 0x12U)))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U] 
                                                                          >> 0x13U)))) 
                                                      << 0x2cU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U] 
                                                                             >> 0x14U)))) 
                                                         << 0x2bU) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U] 
                                                                                >> 0x15U)))) 
                                                            << 0x2aU) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U] 
                                                                                >> 0x16U)))) 
                                                               << 0x29U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U] 
                                                                                >> 0x17U)))) 
                                                                  << 0x28U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U] 
                                                                                >> 0x18U)))) 
                                                                     << 0x27U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U] 
                                                                                >> 0x19U)))) 
                                                                        << 0x26U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U] 
                                                                                >> 0x1aU)))) 
                                                                           << 0x25U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U] 
                                                                                >> 0x1bU)))) 
                                                                              << 0x24U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U] 
                                                                                >> 0x1cU)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U] 
                                                                                >> 0x1dU)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U] 
                                                                                >> 0x1eU)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U] 
                                                                                >> 0x1fU))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((((1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 1U)))
                                                                                 ? 
                                                                                vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[0U]
                                                                                 : (IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x15U))) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x15U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x16U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x17U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x18U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x19U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x1aU)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x1bU)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x1cU)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x1dU)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x1eU)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x1fU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x20U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x21U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x22U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x23U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x24U))))))))))))))))))))))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_1[2U] = ((0x1fffeU & (((1U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                  >> 1U)))
                                    ? ((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U] 
                                        << 0x10U) | 
                                       (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U] 
                                        >> 0x10U)) : 
                                   vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U]) 
                                  << 1U)) | (1U & (
                                                   (((((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[0U] 
                                                        >> 0x1fU) 
                                                       & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                          >> 4U)) 
                                                      << 0x10U) 
                                                     | (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[0U] 
                                                        >> 0x10U)) 
                                                    >> 
                                                    (0xfU 
                                                     & (IData)(
                                                               (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                >> 5U)))) 
                                                   >> 0x10U)));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[2U] 
        = __Vtemp_1[2U];
}

VL_INLINE_OPT void VM1T_tb___024root___act_sequent__TOP__2(VM1T_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VM1T_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root___act_sequent__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bit_manip 
        = ((0xffff000000000000ULL & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bit_manip) 
           | (((QData)((IData)(((((IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                           >> 0x15U)) 
                                  | (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bit_manip 
                                             >> 0x30U))) 
                                 << 0x10U) | (0xffffU 
                                              & ((IData)(
                                                         (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                          >> 0x15U)) 
                                                 & (~ (IData)(
                                                              (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bit_manip 
                                                               >> 0x30U)))))))) 
               << 0x10U) | (QData)((IData)((0xffffU 
                                            & ((IData)(
                                                       (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                        >> 0x15U)) 
                                               ^ (IData)(
                                                         (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bit_manip 
                                                          >> 0x30U))))))));
}

VL_INLINE_OPT void VM1T_tb___024root___act_sequent__TOP__3(VM1T_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VM1T_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root___act_sequent__TOP__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0x7fff8U & ((((IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                         >> 0x15U)) 
                                + ((IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                            >> 5U)) 
                                   ^ (0x1ffffU & (- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                        >> 1U)))))))) 
                               + (1U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                >> 1U)))) 
                              << 3U)) | ((4U & ((((0xffffU 
                                                   & (IData)(
                                                             (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                              >> 0x15U))) 
                                                  + 
                                                  ((0xffffU 
                                                    & (IData)(
                                                              (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                               >> 5U))) 
                                                   ^ 
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                          >> 1U))))))) 
                                                 + 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                             >> 1U)))) 
                                                >> 0xeU)) 
                                         | ((2U & (
                                                   ((~ 
                                                     VL_REDXOR_64(
                                                                  (0x1000100002ULL 
                                                                   & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out))) 
                                                    << 1U) 
                                                   & (((IData)(
                                                               (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                >> 0x24U)) 
                                                       << 1U) 
                                                      ^ 
                                                      (0x7ffeU 
                                                       & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub 
                                                          >> 0x11U))))) 
                                            | (1U & 
                                               VL_REDXOR_32(
                                                            (0x40002U 
                                                             & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub))))));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub 
        = __Vtemp_1;
}

VL_INLINE_OPT void VM1T_tb___024root___act_sequent__TOP__4(VM1T_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VM1T_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root___act_sequent__TOP__4\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__selected_ihb 
        = (0xffffU & ((1U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                     >> 1U))) ? ((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U] 
                                                    >> 0x10U))
                       : vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U]));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[0U] 
        = (1U & (- (IData)((1U & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__selected_ihb)))));
}

VL_INLINE_OPT void VM1T_tb___024root___act_comb__TOP__0(VM1T_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VM1T_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root___act_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__int_selected_result0 
        = (0xffffU & ((1U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                     >> 4U))) ? ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                             >> 3U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                              >> 2U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                               >> 1U)))
                                                    ? (IData)(
                                                              (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                               >> 5U))
                                                    : (IData)(
                                                              (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bit_manip 
                                                               >> 0x10U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                               >> 1U)))
                                                    ? (IData)(
                                                              (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bit_manip 
                                                               >> 0x20U))
                                                    : 
                                                   vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[2U]))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                              >> 2U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                               >> 1U)))
                                                    ? 
                                                   vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[2U]
                                                    : 
                                                   ((((IData)(
                                                              (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                               >> 0x15U)) 
                                                      << 0x10U) 
                                                     | (0xffffU 
                                                        & (IData)(
                                                                  (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                   >> 0x15U)))) 
                                                    >> 
                                                    (0xfU 
                                                     & (IData)(
                                                               (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                >> 5U)))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                               >> 1U)))
                                                    ? 
                                                   (((((IData)(
                                                               (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                >> 0x15U)) 
                                                       << 0x10U) 
                                                      | (0xffffU 
                                                         & (IData)(
                                                                   (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                    >> 0x15U)))) 
                                                     << 
                                                     (0xfU 
                                                      & (IData)(
                                                                (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                 >> 5U)))) 
                                                    >> 0x10U)
                                                    : 
                                                   ((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[2U] 
                                                     << 0x1fU) 
                                                    | (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[2U] 
                                                       >> 1U)))))
                       : ((1U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                         >> 3U))) ? 
                          ((1U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                          >> 2U))) ? 
                           ((1U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                           >> 1U)))
                             ? ((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[2U] 
                                 << 0x1fU) | (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[2U] 
                                              >> 1U))
                             : ((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[2U] 
                                 << 0x1fU) | (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[2U] 
                                              >> 1U)))
                            : ((1U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                              >> 1U)))
                                ? (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bit_manip)
                                : ((IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                            >> 0x15U)) 
                                   ^ (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                              >> 5U)))))
                           : ((1U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                             >> 2U)))
                               ? ((1U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                 >> 1U)))
                                   ? ((IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                               >> 0x15U)) 
                                      | (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                 >> 5U)))
                                   : ((IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                               >> 0x15U)) 
                                      & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                 >> 5U))))
                               : ((1U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                 >> 1U)))
                                   ? (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub 
                                      >> 3U) : (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub 
                                                >> 3U))))));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__ALU__data_out 
        = ((1U & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out))
            ? (1U & (((1U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                     >> 3U))) ? ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                             >> 2U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                              >> 1U)))
                                                   ? 
                                                  (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0xffffU 
                                                               & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub 
                                                                  >> 3U)))))
                                                   : (IData)(
                                                             (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                              >> 
                                                              ((IData)(0x15U) 
                                                               + 
                                                               (0xfU 
                                                                & (IData)(
                                                                          (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                           >> 5U)))))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                              >> 1U)))
                                                   ? vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub
                                                   : 
                                                  (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub 
                                                   >> 1U)))
                       : ((1U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                         >> 2U))) ? 
                          ((1U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                          >> 1U))) ? 
                           (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub 
                            >> 1U) : (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub 
                                      >> 2U)) : ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                             >> 1U)))
                                                  ? 
                                                 (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub 
                                                  >> 2U)
                                                  : 
                                                 (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                         >> 5U))))))))) 
                     ^ (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                >> 4U)))) : (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__int_selected_result0));
}

VL_INLINE_OPT void VM1T_tb___024root___act_comb__TOP__1(VM1T_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VM1T_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root___act_comb__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[1U] 
        = ((2U & (- (IData)((1U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__selected_ihb) 
                                   >> 1U))))) | vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals
           [0U]);
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[2U] 
        = ((3U & (- (IData)((1U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__selected_ihb) 
                                   >> 2U))))) | vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals
           [1U]);
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[3U] 
        = ((4U & (- (IData)((1U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__selected_ihb) 
                                   >> 3U))))) | vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals
           [2U]);
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[4U] 
        = ((5U & (- (IData)((1U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__selected_ihb) 
                                   >> 4U))))) | vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals
           [3U]);
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[5U] 
        = ((6U & (- (IData)((1U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__selected_ihb) 
                                   >> 5U))))) | vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals
           [4U]);
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[6U] 
        = ((7U & (- (IData)((1U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__selected_ihb) 
                                   >> 6U))))) | vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals
           [5U]);
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[7U] 
        = ((8U & (- (IData)((1U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__selected_ihb) 
                                   >> 7U))))) | vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals
           [6U]);
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[8U] 
        = ((9U & (- (IData)((1U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__selected_ihb) 
                                   >> 8U))))) | vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals
           [7U]);
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[9U] 
        = ((0xaU & (- (IData)((1U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__selected_ihb) 
                                     >> 9U))))) | vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals
           [8U]);
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[0xaU] 
        = ((0xbU & (- (IData)((1U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__selected_ihb) 
                                     >> 0xaU))))) | 
           vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals
           [9U]);
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[0xbU] 
        = ((0xcU & (- (IData)((1U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__selected_ihb) 
                                     >> 0xbU))))) | 
           vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals
           [0xaU]);
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[0xcU] 
        = ((0xdU & (- (IData)((1U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__selected_ihb) 
                                     >> 0xcU))))) | 
           vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals
           [0xbU]);
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[0xdU] 
        = ((0xeU & (- (IData)((1U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__selected_ihb) 
                                     >> 0xdU))))) | 
           vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals
           [0xcU]);
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[0xeU] 
        = ((0xfU & (- (IData)((1U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__selected_ihb) 
                                     >> 0xeU))))) | 
           vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals
           [0xdU]);
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[0xfU] 
        = ((0x10U & (- (IData)((1U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__selected_ihb) 
                                      >> 0xfU))))) 
           | vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals
           [0xeU]);
}

void VM1T_tb___024root___nba_sequent__TOP__0(VM1T_tb___024root* vlSelf);

void VM1T_tb___024root___eval_nba(VM1T_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VM1T_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VM1T_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((0x26ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VM1T_tb___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
    if ((0x28ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VM1T_tb___024root___act_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
    }
    if ((0x21ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VM1T_tb___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((0x30ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VM1T_tb___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((0x22ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VM1T_tb___024root___act_sequent__TOP__4(vlSelf);
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
    }
    if ((0x3fULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VM1T_tb___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0x26ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VM1T_tb___024root___act_comb__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[9U] = 1U;
    }
}

extern const VlUnpacked<CData/*7:0*/, 16> VM1T_tb__ConstPool__TABLE_hb93a4349_0;
extern const VlUnpacked<SData/*15:0*/, 256> VM1T_tb__ConstPool__TABLE_ha6e5e8aa_0;

VL_INLINE_OPT void VM1T_tb___024root___nba_sequent__TOP__0(VM1T_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VM1T_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root___nba_sequent__TOP__0\n"); );
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
    SData/*14:0*/ __Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__FetchStage__DOT__pc;
    __Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__FetchStage__DOT__pc = 0;
    CData/*1:0*/ __Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__state;
    __Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__state = 0;
    CData/*2:0*/ __Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__i_ctr;
    __Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__i_ctr = 0;
    CData/*3:0*/ __Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_ptr;
    __Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_ptr = 0;
    CData/*3:0*/ __Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_tail_ptr;
    __Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_tail_ptr = 0;
    SData/*15:0*/ __Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__gpo_reg;
    __Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__gpo_reg = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v0;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v0 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v1;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v1 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v2;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v2 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v3;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v3 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v4;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v4 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v5;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v5 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v6;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v6 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v7;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v7 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v8;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v8 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v9;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v9 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v10;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v10 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v11;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v11 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v12;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v12 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v13;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v13 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v14;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v14 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v15;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v15 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v16;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v16 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v17;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v17 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v18;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v18 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v19;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v19 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v20;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v20 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v21;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v21 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v22;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v22 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v23;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v23 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v24;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v24 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v25;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v25 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v26;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v26 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v27;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v27 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v28;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v28 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v29;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v29 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v30;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v30 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v31;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v31 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v32;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v32 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v33;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v33 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v34;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v34 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v35;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v35 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v36;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v36 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v37;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v37 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v38;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v38 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v39;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v39 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v40;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v40 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v41;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v41 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v42;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v42 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v43;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v43 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v44;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v44 = 0;
    SData/*15:0*/ __VdlyVal__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile__v0;
    __VdlyVal__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile__v0 = 0;
    CData/*3:0*/ __VdlyDim0__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile__v0;
    __VdlyDim0__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile__v0 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile__v0;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile__v0 = 0;
    QData/*40:0*/ __VdlyVal__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq__v0;
    __VdlyVal__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq__v0 = 0;
    CData/*2:0*/ __VdlyDim0__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq__v0;
    __VdlyDim0__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq__v0 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq__v0;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq__v0 = 0;
    CData/*7:0*/ __VdlyVal__M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram0__v0;
    __VdlyVal__M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram0__v0 = 0;
    SData/*10:0*/ __VdlyDim0__M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram0__v0;
    __VdlyDim0__M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram0__v0 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram0__v0;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram0__v0 = 0;
    CData/*7:0*/ __VdlyVal__M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram1__v0;
    __VdlyVal__M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram1__v0 = 0;
    SData/*10:0*/ __VdlyDim0__M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram1__v0;
    __VdlyDim0__M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram1__v0 = 0;
    CData/*0:0*/ __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram1__v0;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram1__v0 = 0;
    // Body
    __Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__FetchStage__DOT__pc 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__FetchStage__DOT__pc;
    __Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_ptr 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_ptr;
    __Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__gpo_reg 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__gpo_reg;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram0__v0 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram1__v0 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile__v0 = 0U;
    __Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__i_ctr 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__i_ctr;
    __Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__state 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__state;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v0 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v1 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v2 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v3 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v4 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v5 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v6 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v7 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v8 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v9 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v10 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v11 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v12 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v13 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v14 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v15 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v16 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v17 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v18 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v19 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v20 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v21 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v22 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v23 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v24 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v25 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v26 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v27 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v28 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v29 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v30 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v31 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v32 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v33 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v34 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v35 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v36 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v37 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v38 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v39 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v40 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v41 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v42 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v43 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v44 = 0U;
    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq__v0 = 0U;
    __Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_tail_ptr 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_tail_ptr;
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__reset_buffer 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__sync_rst;
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__rst_buffer1 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__rst_buffer0;
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__brh_flush 
        = ((1U & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__sync_rst))) 
           && (((~ ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__BranchUnit__operation) 
                    >> 1U)) & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__BranchUnit__call)) 
               & (0U != (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs1_data))));
    if ((1U & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__sync_rst)))) {
        if ((((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT____Vcellinp__MemoryController__core_mem_enable) 
              & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer 
                         >> 4U))) & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__wb_conflict)))) {
            vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__dtype_buffer 
                = (3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer 
                                 >> 6U)));
            vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__sel_buffer 
                = (1U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer 
                                 >> 0x15U)));
        }
    }
    if (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__sync_rst) {
        __Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__FetchStage__DOT__pc = 0U;
        __Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_ptr = 0U;
        __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v0 = 1U;
        __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v3 = 1U;
        __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v6 = 1U;
        __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v9 = 1U;
        __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v12 = 1U;
        __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v15 = 1U;
        __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v18 = 1U;
        __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v21 = 1U;
        __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v24 = 1U;
        __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v27 = 1U;
        __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v30 = 1U;
        __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v33 = 1U;
        __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v36 = 1U;
        __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v39 = 1U;
        __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v42 = 1U;
        __Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_tail_ptr = 0U;
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer_valid = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__DecodeStage__hazard_stall)))) {
            if (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__write_en) {
                if (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__write_en) {
                    __Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__FetchStage__DOT__pc 
                        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__data_in;
                }
            } else {
                __Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__FetchStage__DOT__pc 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__FetchStage__DOT__pc)));
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_empty)))) {
            __Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_ptr 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_ptr)));
        }
        if (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__writeback_en) 
             & (1U == (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_dest)))) {
            __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v1 = 1U;
        } else if (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__regfile_reserve) 
                    & (1U == (0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer))))) {
            __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v2 = 1U;
        }
        if (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__writeback_en) 
             & (2U == (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_dest)))) {
            __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v4 = 1U;
        } else if (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__regfile_reserve) 
                    & (2U == (0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer))))) {
            __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v5 = 1U;
        }
        if (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__writeback_en) 
             & (3U == (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_dest)))) {
            __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v7 = 1U;
        } else if (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__regfile_reserve) 
                    & (3U == (0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer))))) {
            __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v8 = 1U;
        }
        if (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__writeback_en) 
             & (4U == (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_dest)))) {
            __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v10 = 1U;
        } else if (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__regfile_reserve) 
                    & (4U == (0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer))))) {
            __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v11 = 1U;
        }
        if (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__writeback_en) 
             & (5U == (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_dest)))) {
            __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v13 = 1U;
        } else if (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__regfile_reserve) 
                    & (5U == (0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer))))) {
            __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v14 = 1U;
        }
        if (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__writeback_en) 
             & (6U == (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_dest)))) {
            __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v16 = 1U;
        } else if (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__regfile_reserve) 
                    & (6U == (0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer))))) {
            __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v17 = 1U;
        }
        if (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__writeback_en) 
             & (7U == (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_dest)))) {
            __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v19 = 1U;
        } else if (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__regfile_reserve) 
                    & (7U == (0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer))))) {
            __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v20 = 1U;
        }
        if (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__writeback_en) 
             & (8U == (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_dest)))) {
            __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v22 = 1U;
        } else if (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__regfile_reserve) 
                    & (8U == (0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer))))) {
            __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v23 = 1U;
        }
        if (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__writeback_en) 
             & (9U == (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_dest)))) {
            __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v25 = 1U;
        } else if (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__regfile_reserve) 
                    & (9U == (0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer))))) {
            __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v26 = 1U;
        }
        if (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__writeback_en) 
             & (0xaU == (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_dest)))) {
            __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v28 = 1U;
        } else if (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__regfile_reserve) 
                    & (0xaU == (0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer))))) {
            __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v29 = 1U;
        }
        if (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__writeback_en) 
             & (0xbU == (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_dest)))) {
            __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v31 = 1U;
        } else if (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__regfile_reserve) 
                    & (0xbU == (0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer))))) {
            __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v32 = 1U;
        }
        if (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__writeback_en) 
             & (0xcU == (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_dest)))) {
            __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v34 = 1U;
        } else if (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__regfile_reserve) 
                    & (0xcU == (0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer))))) {
            __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v35 = 1U;
        }
        if (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__writeback_en) 
             & (0xdU == (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_dest)))) {
            __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v37 = 1U;
        } else if (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__regfile_reserve) 
                    & (0xdU == (0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer))))) {
            __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v38 = 1U;
        }
        if (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__writeback_en) 
             & (0xeU == (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_dest)))) {
            __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v40 = 1U;
        } else if (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__regfile_reserve) 
                    & (0xeU == (0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer))))) {
            __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v41 = 1U;
        }
        if (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__writeback_en) 
             & (0xfU == (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_dest)))) {
            __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v43 = 1U;
        } else if (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__regfile_reserve) 
                    & (0xfU == (0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer))))) {
            __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v44 = 1U;
        }
        if (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__stage1_valid) 
             & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__lsu_full)))) {
            __VdlyVal__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq__v0 
                = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__stage1;
            __VdlyDim0__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq__v0 
                = (7U & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_tail_ptr));
            __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq__v0 = 1U;
            __Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_tail_ptr 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_tail_ptr)));
        }
        if ((1U & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__wb_conflict)))) {
            vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer_valid 
                = (1U & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_empty)));
        }
    }
    if ((1U & (~ ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__sync_rst) 
                  | (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__write_en))))) {
        if ((1U & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__DecodeStage__hazard_stall)))) {
            vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__inc_pc_buffer 
                = (0x7fffU & ((IData)(1U) + (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__FetchStage__DOT__pc)));
            vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__jmp_tgt_buffer 
                = (0x7fffU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__FetchStage__DOT__pc) 
                              + ((0x7f00U & (((0x800U 
                                               & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer))
                                               ? ((0x70U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer) 
                                                                     >> 0xfU)))) 
                                                      << 4U)) 
                                                  | (0xfU 
                                                     & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer) 
                                                        >> 0xcU)))
                                               : (- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer) 
                                                                >> 7U))))) 
                                             << 8U)) 
                                 | (0xffU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__adjusted_instruction_in) 
                                             >> 8U)))));
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__sync_rst)))) {
        if (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__writeback_en) {
            vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT____Vlvbound_h274463d9__0 
                = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_data;
            if ((0xeU >= (0xfU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_dest) 
                                  - (IData)(1U))))) {
                __VdlyVal__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile__v0 
                    = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT____Vlvbound_h274463d9__0;
                __VdlyDim0__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile__v0 
                    = (0xfU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_dest) 
                               - (IData)(1U)));
                __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile__v0 = 1U;
            }
        }
    }
    if (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__sync_rst) {
        __Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__gpo_reg = 0U;
    } else {
        if ((((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT____Vcellinp__MemoryController__core_mem_enable) 
              & (~ (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer 
                            >> 4U)))) & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__wb_conflict)))) {
            vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__gpi_buffer = 0U;
            vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram_buffer0 
                = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram0
                [(0x7ffU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer 
                                    >> 0xaU)))];
            vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram_buffer1 
                = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram1
                [(0x7ffU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer 
                                    >> 0xaU)))];
        }
        if ((((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT____Vcellinp__MemoryController__core_mem_enable) 
              & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer 
                         >> 4U))) & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__wb_conflict)))) {
            if (VL_UNLIKELY((1U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer 
                                           >> 0x14U))))) {
                VL_WRITEF_NX("%5#\n",0,16,vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__gpo_reg);
                if ((1U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer 
                                   >> 9U)))) {
                    __Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__gpo_reg 
                        = ((0xff00U & (IData)(__Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__gpo_reg)) 
                           | (0xffU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer 
                                               >> 0x21U))));
                }
                if ((1U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer 
                                   >> 8U)))) {
                    __Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__gpo_reg 
                        = ((0xffU & (IData)(__Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__gpo_reg)) 
                           | (0xff00U & ((IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer 
                                                  >> 0x19U)) 
                                         << 8U)));
                }
            } else {
                if ((1U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer 
                                   >> 8U)))) {
                    __VdlyVal__M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram0__v0 
                        = (0xffU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer 
                                            >> 0x19U)));
                    __VdlyDim0__M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram0__v0 
                        = (0x7ffU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer 
                                             >> 0xaU)));
                    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram0__v0 = 1U;
                }
                if ((1U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer 
                                   >> 9U)))) {
                    __VdlyVal__M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram1__v0 
                        = (0xffU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer 
                                            >> 0x21U)));
                    __VdlyDim0__M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram1__v0 
                        = (0x7ffU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer 
                                             >> 0xaU)));
                    __VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram1__v0 = 1U;
                }
            }
        }
    }
    if (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__sync_rst) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__alu.__PVT__valid = 0U;
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__lsu.__PVT__valid = 0U;
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__mul.__PVT__valid = 0U;
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__div.__PVT__valid = 0U;
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__stage1_valid = 0U;
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2 
            = (0x1fffffffffeULL & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2);
        __Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__state = 0U;
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__temp_valid_flag = 0U;
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage1 
            = (0x1fffffffffeULL & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage1);
    } else {
        if (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__wb_conflict) {
            if ((1U & (~ ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selector) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selector)))) {
                    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__alu.__PVT__valid = 0U;
                }
                if ((1U & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selector))) {
                    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__mul.__PVT__valid = 0U;
                }
            }
            if ((2U & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selector))) {
                if ((1U & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selector))) {
                    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__lsu.__PVT__valid = 0U;
                }
                if ((1U & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selector)))) {
                    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__div.__PVT__valid = 0U;
                }
            }
        } else {
            vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__alu.__PVT__data 
                = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__ALU__data_out;
            vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__alu.__PVT__dest 
                = (0xfU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                   >> 0x25U)));
            vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__alu.__PVT__valid 
                = ((IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                            >> 0x29U)) & (0U != (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                            >> 0x25U)))));
            vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__lsu.__PVT__data 
                = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__adjusted_data;
            vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__lsu.__PVT__dest 
                = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__wb_dest_buffer;
            vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__lsu.__PVT__valid 
                = ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__mem_read_ack) 
                   & (0U != (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__wb_dest_buffer)));
            vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__mul.__PVT__data 
                = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__Multiplier__data_out;
            vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__mul.__PVT__dest 
                = (0xfU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2 
                                   >> 1U)));
            vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__mul.__PVT__valid 
                = ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2) 
                   & (0U != (0xfU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2 
                                             >> 1U)))));
            vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__div.__PVT__data 
                = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__Divider__data_out;
            vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__div.__PVT__dest 
                = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__dest_addr_buffer;
            vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__div.__PVT__valid 
                = ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__temp_valid_flag) 
                   & (0U != (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__dest_addr_buffer)));
        }
        if ((1U & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__lsu_full)))) {
            vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__stage1_valid 
                = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__LSU__call;
        }
        if (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__Multiplier__clk_en) {
            vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2 
                = ((0x1ffULL & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2) 
                   | ((QData)((IData)(((0xffffU & (IData)(
                                                          (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage1 
                                                           >> 0x19U))) 
                                       * (0xffffU & (IData)(
                                                            (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage1 
                                                             >> 9U)))))) 
                      << 9U));
            vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2 
                = ((0x1fffffffe00ULL & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2) 
                   | (IData)((IData)((0x1ffU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage1)))));
            vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage1 
                = ((0x1ffffffULL & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage1) 
                   | ((QData)((IData)((0xffffU & ((0x20U 
                                                   & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer))
                                                   ? (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs1_data)
                                                   : 
                                                  ((0x8000U 
                                                    & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs1_data))
                                                    ? 
                                                   (- (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs1_data))
                                                    : (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs1_data)))))) 
                      << 0x19U));
            vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage1 
                = ((0x1fffe0001ffULL & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage1) 
                   | ((QData)((IData)((0xffffU & ((3U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                                       >> 4U)))
                                                   ? (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs2_data)
                                                   : 
                                                  ((0x8000U 
                                                    & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs2_data))
                                                    ? 
                                                   (- (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs2_data))
                                                    : (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs2_data)))))) 
                      << 9U));
            vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage1 
                = ((0x1fffffffe1fULL & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage1) 
                   | ((QData)((IData)(((8U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs1_data) 
                                              >> 0xcU)) 
                                       | ((4U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs2_data) 
                                                 >> 0xdU)) 
                                          | (3U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                                   >> 4U)))))) 
                      << 5U));
            vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage1 
                = ((0x1ffffffffe0ULL & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage1) 
                   | (IData)((IData)(((0x1eU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                                << 1U)) 
                                      | (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__Multiplier__call)))));
        }
        if (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__Divider__clk_en) {
            if ((0U == (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__state))) {
                vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__temp_valid_flag = 0U;
                if (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__Divider__call) {
                    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__data_in1_buffer 
                        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs1_data;
                    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__data_in2_buffer 
                        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs2_data;
                    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__preserved_data1_sign 
                        = (1U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs1_data) 
                                 >> 0xfU));
                    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__preserved_data2_sign 
                        = (1U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs2_data) 
                                 >> 0xfU));
                    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__operation_buffer 
                        = (3U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                 >> 4U));
                    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__dest_addr_buffer 
                        = (0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer));
                    __Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__state = 1U;
                }
            } else if ((1U == (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__state))) {
                vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__data_in1_buffer 
                    = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__cond_abs_data1;
                vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__data_in2_buffer 
                    = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__cond_abs_data2;
                vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__a_reg = 0U;
                vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__q_reg 
                    = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__cond_abs_data1;
                __Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__i_ctr = 0U;
                __Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__state = 2U;
            } else if ((2U == (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__state))) {
                __Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__i_ctr 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__i_ctr)));
                vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__a_reg 
                    = ((0x8000U & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration2__DOT__stage2_a)
                        ? vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration2__DOT__stage1_a
                        : vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration2__DOT__stage2_a);
                vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__q_reg 
                    = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__temp_q2;
                if ((7U == (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__i_ctr))) {
                    __Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__state = 0U;
                    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__temp_valid_flag = 1U;
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__sync_rst)))) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__rs2_buffer 
            = (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__writeback_en) 
                & ((0xfU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer) 
                            >> 4U)) == (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_dest)))
                ? (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_data)
                : vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read
               [(0xfU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer) 
                         >> 4U))]);
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__rs1_buffer 
            = (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__writeback_en) 
                & ((0xfU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer) 
                            >> 0xcU)) == (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_dest)))
                ? (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_data)
                : vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read
               [(0xfU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer) 
                         >> 0xcU))]);
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__brh_pc_tgt 
            = (0x7fffU & ((1U & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__BranchUnit__operation))
                           ? VL_SHIFTR_III(16,16,32, 
                                           (0xffffU 
                                            & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs1_data) 
                                               + ((0xff00U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                                                     >> 0xbU)))) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                                        >> 4U))))), 1U)
                           : ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__pc_buffer) 
                              + ((0x7f00U & ((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                                            >> 0xbU)))) 
                                             << 8U)) 
                                 | (0xffU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                             >> 4U))))));
    }
    if ((1U & (~ ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__sync_rst) 
                  | (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__write_en))))) {
        if ((1U & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__DecodeStage__hazard_stall)))) {
            vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__pc_buffer 
                = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__FetchStage__DOT__pc;
        }
    }
    if (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__sync_rst) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__en_buffer = 0U;
    } else if ((((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT____Vcellinp__MemoryController__core_mem_enable) 
                 & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer 
                            >> 4U))) & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__wb_conflict)))) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__en_buffer 
            = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT____Vcellinp__MemoryController__core_mem_enable;
    }
    if ((1U & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__sync_rst)))) {
        if ((((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT____Vcellinp__MemoryController__core_mem_enable) 
              & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer 
                         >> 4U))) & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__wb_conflict)))) {
            vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__mode_buffer 
                = (1U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer 
                                 >> 4U)));
            vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__wb_dest_buffer 
                = (0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer));
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__sync_rst)))) {
        if ((1U & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__lsu_full)))) {
            vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__stage1 
                = ((0x3ffULL & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__stage1) 
                   | ((QData)((IData)(((0x7f800000U 
                                        & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs1_data) 
                                           << 0x17U)) 
                                       | ((0x7f8000U 
                                           & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs1_data) 
                                              << 7U)) 
                                          | (0x7fffU 
                                             & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs2_data) 
                                                >> 1U)))))) 
                      << 0xaU));
            vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__stage1 
                = ((0x1fffffffcffULL & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__stage1) 
                   | ((QData)((IData)(((0U == ((2U 
                                                & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                                   >> 3U)) 
                                               | (1U 
                                                  & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs2_data))))
                                        ? 2U : ((1U 
                                                 == 
                                                 ((2U 
                                                   & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                                      >> 3U)) 
                                                  | (1U 
                                                     & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs2_data))))
                                                 ? 1U
                                                 : 3U)))) 
                      << 8U));
            vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__stage1 
                = ((0x1ffffffff3fULL & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__stage1) 
                   | ((QData)((IData)((3U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__LSU__fence_mode)
                                              ? (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer)
                                              : ((2U 
                                                  & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                                     >> 5U)) 
                                                 | (1U 
                                                    & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                                       >> 4U))))))) 
                      << 6U));
            vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__stage1 
                = ((0x1ffffffffc0ULL & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__stage1) 
                   | (IData)((IData)((((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__LSU__fence_mode) 
                                       << 5U) | ((0x10U 
                                                  & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                                     >> 3U)) 
                                                 | (0xfU 
                                                    & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer)))))));
        }
        if ((1U & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__wb_conflict)))) {
            vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer 
                = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                [(7U & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_ptr))];
        }
    }
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__brh_issue_inval 
        = ((1U & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__sync_rst))) 
           && (((2U == (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__BranchUnit__operation)) 
                & (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs1_data) 
                    != (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs2_data)) 
                   ^ ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                      >> 4U))) & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__BranchUnit__call)));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard_buffer2 
        = ((1U & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__sync_rst))) 
           && (1U & ((((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__regfile_reserve) 
                       & ((0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer)) 
                          == (0xfU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer) 
                                      >> 4U)))) & (0U 
                                                   != 
                                                   (0xfU 
                                                    & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer)))) 
                     | ((~ ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__writeback_en) 
                            & ((0xfU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer) 
                                        >> 4U)) == (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_dest)))) 
                        & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard_read) 
                           >> (0xfU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer) 
                                       >> 4U)))))));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard_buffer1 
        = ((1U & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__sync_rst))) 
           && (1U & ((((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__regfile_reserve) 
                       & ((0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer)) 
                          == (0xfU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer) 
                                      >> 0xcU)))) & 
                      (0U != (0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer)))) 
                     | ((~ ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__writeback_en) 
                            & ((0xfU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer) 
                                        >> 0xcU)) == (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_dest)))) 
                        & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard_read) 
                           >> (0xfU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer) 
                                       >> 0xcU)))))));
    if (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__sync_rst) 
         | (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__write_en))) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer = 0U;
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__DecodeStage__hazard_stall)))) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
            = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__decoded_uop;
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer 
            = (0xfffU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__adjusted_instruction_in) 
                         >> 4U));
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile__v0) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[__VdlyDim0__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile__v0] 
            = __VdlyVal__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile__v0;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v0) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[0U] = 0U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v1) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[0U] = 0U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v2) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[0U] = 1U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v3) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[1U] = 0U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v4) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[1U] = 0U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v5) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[1U] = 1U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v6) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[2U] = 0U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v7) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[2U] = 0U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v8) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[2U] = 1U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v9) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[3U] = 0U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v10) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[3U] = 0U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v11) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[3U] = 1U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v12) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[4U] = 0U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v13) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[4U] = 0U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v14) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[4U] = 1U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v15) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[5U] = 0U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v16) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[5U] = 0U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v17) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[5U] = 1U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v18) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[6U] = 0U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v19) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[6U] = 0U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v20) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[6U] = 1U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v21) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[7U] = 0U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v22) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[7U] = 0U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v23) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[7U] = 1U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v24) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[8U] = 0U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v25) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[8U] = 0U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v26) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[8U] = 1U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v27) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[9U] = 0U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v28) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[9U] = 0U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v29) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[9U] = 1U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v30) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[0xaU] = 0U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v31) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[0xaU] = 0U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v32) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[0xaU] = 1U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v33) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[0xbU] = 0U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v34) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[0xbU] = 0U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v35) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[0xbU] = 1U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v36) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[0xcU] = 0U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v37) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[0xcU] = 0U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v38) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[0xcU] = 1U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v39) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[0xdU] = 0U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v40) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[0xdU] = 0U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v41) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[0xdU] = 1U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v42) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[0xeU] = 0U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v43) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[0xeU] = 0U;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard__v44) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[0xeU] = 1U;
    }
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_tail_ptr 
        = __Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_tail_ptr;
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__gpo_reg 
        = __Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__gpo_reg;
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram0__v0) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram0[__VdlyDim0__M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram0__v0] 
            = __VdlyVal__M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram0__v0;
    }
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram1__v0) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram1[__VdlyDim0__M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram1__v0] 
            = __VdlyVal__M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram1__v0;
    }
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
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__rst_buffer0 
        = ((IData)(vlSelfRef.M1T_tb__DOT__rst_buffer) 
           | (IData)(vlSelfRef.sync_rst));
    M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT____VdfgRegularize_h79c90436_1_0 
        = ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__sel_buffer)
            ? 0U : (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram_buffer1));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__mem_read_ack 
        = ((~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__mode_buffer)) 
           & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__en_buffer));
    if ((1U & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__DecodeStage__hazard_stall)))) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer 
            = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom
            [((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__sync_rst)
               ? 0U : (0x7ffU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__write_en)
                                  ? (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__data_in)
                                  : ((IData)(1U) + (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__FetchStage__DOT__pc)))))];
    }
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__writeback_en 
        = (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__alu
           .__PVT__valid | (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__mul
                            .__PVT__valid | (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__div
                                             .__PVT__valid 
                                             | vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__lsu
                                             .__PVT__valid)));
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
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__FetchStage__DOT__pc 
        = __Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__FetchStage__DOT__pc;
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
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__i_ctr 
        = __Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__i_ctr;
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__state 
        = __Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__state;
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__sync_rst 
        = ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__rst_buffer0) 
           & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__rst_buffer1));
    vlSelfRef.M1T_tb__DOT__rst_buffer = vlSelfRef.sync_rst;
    __Vtableidx1 = (0xfU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer) 
                            >> 8U));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop 
        = VM1T_tb__ConstPool__TABLE_hb93a4349_0[__Vtableidx1];
    __Vtableidx2 = ((0xf0U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer) 
                              << 4U)) | (0xfU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer) 
                                                 >> 8U)));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__special_constant 
        = VM1T_tb__ConstPool__TABLE_ha6e5e8aa_0[__Vtableidx2];
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
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__cond_abs_data1 
        = (0xffffU & (((~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__operation_buffer)) 
                       & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__data_in1_buffer) 
                          >> 0xfU)) ? (- (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__data_in1_buffer))
                       : (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__data_in1_buffer)));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__negate_results 
        = ((~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__operation_buffer)) 
           & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__preserved_data1_sign) 
              ^ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__preserved_data2_sign)));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__cond_abs_data2 
        = (0xffffU & (((~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__operation_buffer)) 
                       & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__data_in2_buffer) 
                          >> 0xfU)) ? (- (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__data_in2_buffer))
                       : (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__data_in2_buffer)));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration1__DOT__stage1_a 
        = ((0x1fffeU & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__a_reg 
                        << 1U)) | (1U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__q_reg) 
                                         >> 0xfU)));
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
    if (__VdlySet__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq__v0) {
        vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq[__VdlyDim0__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq__v0] 
            = __VdlyVal__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq__v0;
    }
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_ptr 
        = __Vdly__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_ptr;
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
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__Multiplier__data_out 
        = (0xffffU & ((0U != (3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2 
                                            >> 5U))))
                       ? (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__adjusted_result 
                          >> 0x10U) : vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__adjusted_result));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration1__DOT__stage2_a 
        = (0x1ffffU & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration1__DOT__stage1_a 
                       - (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__data_in2_buffer)));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT____Vcellinp__MemoryController__core_mem_enable 
        = ((~ (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer 
                       >> 5U))) & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer_valid));
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
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__lsu_full 
        = ((((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_ptr) 
             ^ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_tail_ptr)) 
            >> 3U) & ((7U & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_ptr)) 
                      == (7U & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_tail_ptr))));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_empty 
        = ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_ptr) 
           == (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_tail_ptr));
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
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__adjusted_instruction_in 
        = ((0xff00U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer) 
                       << 8U)) | (0xffU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer) 
                                           >> 8U)));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__sync_rst 
        = ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__reset_buffer) 
           | (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__sync_rst));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration2__DOT__stage2_a 
        = (0x1ffffU & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration2__DOT__stage1_a 
                       - (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__data_in2_buffer)));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__Divider__data_out 
        = (0xffffU & ((0x20U & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer))
                       ? ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__negate_results)
                           ? (- vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__a_reg)
                           : vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__a_reg)
                       : ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__negate_results)
                           ? (- (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__q_reg))
                           : (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__q_reg))));
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
    M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_4 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                         >> 0xbU)))) 
                       << 8U)) | (0xffU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                           >> 4U)));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__inst_fence 
        = ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__LSU__fence_mode) 
           & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
              >> 2U));
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
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__jmp_en 
        = (1U & (((~ (IData)(M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_2)) 
                  & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                     >> 3U)) | (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__ifence_inval)));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__jmp_target_out 
        = ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__ifence_inval)
            ? (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__inc_pc_buffer)
            : (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__jmp_tgt_buffer));
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
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__write_en 
        = ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__jmp_en) 
           | (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__brh_flush));
    vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__data_in 
        = ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__brh_flush)
            ? (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__brh_pc_tgt)
            : (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__jmp_target_out));
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

void VM1T_tb___024root___eval_triggers__act(VM1T_tb___024root* vlSelf);

bool VM1T_tb___024root___eval_phase__act(VM1T_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VM1T_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<6> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VM1T_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VM1T_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VM1T_tb___024root___eval_phase__nba(VM1T_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VM1T_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VM1T_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VM1T_tb___024root___dump_triggers__nba(VM1T_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VM1T_tb___024root___dump_triggers__act(VM1T_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VM1T_tb___024root___eval(VM1T_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VM1T_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VM1T_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../rtl/../rtl/Testbench/M1T_tb.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                VM1T_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../rtl/../rtl/Testbench/M1T_tb.sv", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VM1T_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VM1T_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VM1T_tb___024root___eval_debug_assertions(VM1T_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VM1T_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.clk_en & 0xfeU))) {
        Verilated::overWidthError("clk_en");}
    if (VL_UNLIKELY((vlSelfRef.sync_rst & 0xfeU))) {
        Verilated::overWidthError("sync_rst");}
}
#endif  // VL_DEBUG

std::string VL_TO_STRING(const VM1T_tb_M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__buffer_t__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{data:" + VL_TO_STRING(obj.__PVT__data);
        out += ", dest:" + VL_TO_STRING(obj.__PVT__dest);
        out += ", valid:" + VL_TO_STRING(obj.__PVT__valid);
        out += "}";
    return out;
}
