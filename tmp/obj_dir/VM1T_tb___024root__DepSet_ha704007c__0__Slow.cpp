// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VM1T_tb.h for the primary calling header

#include "VM1T_tb__pch.h"
#include "VM1T_tb__Syms.h"
#include "VM1T_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VM1T_tb___024root___dump_triggers__stl(VM1T_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VM1T_tb___024root___eval_triggers__stl(VM1T_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VM1T_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
    vlSelfRef.__VstlTriggered.set(1U, (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bit_manip 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bit_manip__0));
    vlSelfRef.__VstlTriggered.set(2U, (0U != (((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U] 
                                                ^ vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan__0[0U]) 
                                               | (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[1U] 
                                                  ^ 
                                                  vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan__0[1U])) 
                                              | (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[2U] 
                                                 ^ 
                                                 vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan__0[2U]))));
    vlSelfRef.__VstlTriggered.set(3U, vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals__0.neq(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals));
    vlSelfRef.__VstlTriggered.set(4U, (0U != (((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[0U] 
                                                ^ vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter__0[0U]) 
                                               | (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U] 
                                                  ^ 
                                                  vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter__0[1U])) 
                                              | (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[2U] 
                                                 ^ 
                                                 vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter__0[2U]))));
    vlSelfRef.__VstlTriggered.set(5U, (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub__0));
    vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bit_manip__0 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bit_manip;
    vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan__0[0U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U];
    vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan__0[1U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[1U];
    vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan__0[2U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[2U];
    vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals__0.assign(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals);
    vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter__0[0U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[0U];
    vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter__0[1U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U];
    vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter__0[2U] 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[2U];
    vlSelfRef.__Vtrigprevexpr___TOP__M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub__0 
        = vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VstlDidInit))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered.set(1U, 1U);
        vlSelfRef.__VstlTriggered.set(2U, 1U);
        vlSelfRef.__VstlTriggered.set(3U, 1U);
        vlSelfRef.__VstlTriggered.set(4U, 1U);
        vlSelfRef.__VstlTriggered.set(5U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VM1T_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
