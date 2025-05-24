// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VM1T_tb__pch.h"
#include "VM1T_tb.h"
#include "VM1T_tb___024root.h"
#include "VM1T_tb___024unit.h"

// FUNCTIONS
VM1T_tb__Syms::~VM1T_tb__Syms()
{
}

VM1T_tb__Syms::VM1T_tb__Syms(VerilatedContext* contextp, const char* namep, VM1T_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(460);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
