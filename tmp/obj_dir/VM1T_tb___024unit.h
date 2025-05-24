// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VM1T_tb.h for the primary calling header

#ifndef VERILATED_VM1T_TB___024UNIT_H_
#define VERILATED_VM1T_TB___024UNIT_H_  // guard

#include "verilated.h"


class VM1T_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VM1T_tb___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VM1T_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    VM1T_tb___024unit(VM1T_tb__Syms* symsp, const char* v__name);
    ~VM1T_tb___024unit();
    VL_UNCOPYABLE(VM1T_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
