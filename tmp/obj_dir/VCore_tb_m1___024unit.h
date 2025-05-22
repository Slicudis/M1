// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCore_tb_m1.h for the primary calling header

#ifndef VERILATED_VCORE_TB_M1___024UNIT_H_
#define VERILATED_VCORE_TB_M1___024UNIT_H_  // guard

#include "verilated.h"


class VCore_tb_m1__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCore_tb_m1___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VCore_tb_m1__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCore_tb_m1___024unit(VCore_tb_m1__Syms* symsp, const char* v__name);
    ~VCore_tb_m1___024unit();
    VL_UNCOPYABLE(VCore_tb_m1___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
