// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VM1T_tb.h for the primary calling header

#include "VM1T_tb__pch.h"
#include "VM1T_tb__Syms.h"
#include "VM1T_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VM1T_tb___024root___dump_triggers__act(VM1T_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VM1T_tb___024root___eval_triggers__act(VM1T_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VM1T_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bit_manip 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bit_manip__1));
    vlSelfRef.__VactTriggered.set(1U, (0U != (((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U] 
                                                ^ vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan__1[0U]) 
                                               | (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[1U] 
                                                  ^ 
                                                  vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan__1[1U])) 
                                              | (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[2U] 
                                                 ^ 
                                                 vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan__1[2U]))));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals__1.neq(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals));
    vlSelfRef.__VactTriggered.set(3U, (0U != (((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[0U] 
                                                ^ vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter__1[0U]) 
                                               | (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U] 
                                                  ^ 
                                                  vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter__1[1U])) 
                                              | (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[2U] 
                                                 ^ 
                                                 vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter__1[2U]))));
    vlSelfRef.__VactTriggered.set(4U, (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub__1));
    vlSelfRef.__VactTriggered.set(5U, ((IData)(vlSelfRef.clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bit_manip__1 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bit_manip;
    vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan__1[0U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U];
    vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan__1[1U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[1U];
    vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan__1[2U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[2U];
    vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals__1.assign(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals);
    vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter__1[0U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[0U];
    vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter__1[1U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U];
    vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter__1[2U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[2U];
    vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub__1 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
        vlSelfRef.__VactTriggered.set(1U, 1U);
        vlSelfRef.__VactTriggered.set(2U, 1U);
        vlSelfRef.__VactTriggered.set(3U, 1U);
        vlSelfRef.__VactTriggered.set(4U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VM1T_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
