// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VM1T_TB__SYMS_H_
#define VERILATED_VM1T_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VM1T_tb.h"

// INCLUDE MODULE CLASSES
#include "VM1T_tb___024root.h"
#include "VM1T_tb___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VM1T_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VM1T_tb* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VM1T_tb___024root              TOP;

    // CONSTRUCTORS
    VM1T_tb__Syms(VerilatedContext* contextp, const char* namep, VM1T_tb* modelp);
    ~VM1T_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
