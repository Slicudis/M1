// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VCore_tb_m1__pch.h"
#include "VCore_tb_m1.h"
#include "VCore_tb_m1___024root.h"
#include "VCore_tb_m1___024unit.h"

// FUNCTIONS
VCore_tb_m1__Syms::~VCore_tb_m1__Syms()
{
}

VCore_tb_m1__Syms::VCore_tb_m1__Syms(VerilatedContext* contextp, const char* namep, VCore_tb_m1* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(443);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
