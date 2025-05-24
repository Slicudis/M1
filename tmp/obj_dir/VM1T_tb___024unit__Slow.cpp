// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VM1T_tb.h for the primary calling header

#include "VM1T_tb__pch.h"
#include "VM1T_tb__Syms.h"
#include "VM1T_tb___024unit.h"

void VM1T_tb___024unit___ctor_var_reset(VM1T_tb___024unit* vlSelf);

VM1T_tb___024unit::VM1T_tb___024unit(VM1T_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VM1T_tb___024unit___ctor_var_reset(this);
}

void VM1T_tb___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VM1T_tb___024unit::~VM1T_tb___024unit() {
}
