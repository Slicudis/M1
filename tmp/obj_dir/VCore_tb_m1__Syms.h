// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCORE_TB_M1__SYMS_H_
#define VERILATED_VCORE_TB_M1__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VCore_tb_m1.h"

// INCLUDE MODULE CLASSES
#include "VCore_tb_m1___024root.h"
#include "VCore_tb_m1___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VCore_tb_m1__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VCore_tb_m1* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VCore_tb_m1___024root          TOP;

    // CONSTRUCTORS
    VCore_tb_m1__Syms(VerilatedContext* contextp, const char* namep, VCore_tb_m1* modelp);
    ~VCore_tb_m1__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
