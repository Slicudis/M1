// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VCore_tb_m1__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VCore_tb_m1::VCore_tb_m1(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VCore_tb_m1__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , clk_en{vlSymsp->TOP.clk_en}
    , sync_rst{vlSymsp->TOP.sync_rst}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VCore_tb_m1::VCore_tb_m1(const char* _vcname__)
    : VCore_tb_m1(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VCore_tb_m1::~VCore_tb_m1() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VCore_tb_m1___024root___eval_debug_assertions(VCore_tb_m1___024root* vlSelf);
#endif  // VL_DEBUG
void VCore_tb_m1___024root___eval_static(VCore_tb_m1___024root* vlSelf);
void VCore_tb_m1___024root___eval_initial(VCore_tb_m1___024root* vlSelf);
void VCore_tb_m1___024root___eval_settle(VCore_tb_m1___024root* vlSelf);
void VCore_tb_m1___024root___eval(VCore_tb_m1___024root* vlSelf);

void VCore_tb_m1::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCore_tb_m1::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VCore_tb_m1___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VCore_tb_m1___024root___eval_static(&(vlSymsp->TOP));
        VCore_tb_m1___024root___eval_initial(&(vlSymsp->TOP));
        VCore_tb_m1___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VCore_tb_m1___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VCore_tb_m1::eventsPending() { return false; }

uint64_t VCore_tb_m1::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VCore_tb_m1::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VCore_tb_m1___024root___eval_final(VCore_tb_m1___024root* vlSelf);

VL_ATTR_COLD void VCore_tb_m1::final() {
    VCore_tb_m1___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VCore_tb_m1::hierName() const { return vlSymsp->name(); }
const char* VCore_tb_m1::modelName() const { return "VCore_tb_m1"; }
unsigned VCore_tb_m1::threads() const { return 1; }
void VCore_tb_m1::prepareClone() const { contextp()->prepareClone(); }
void VCore_tb_m1::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VCore_tb_m1::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VCore_tb_m1___024root__trace_decl_types(VerilatedVcd* tracep);

void VCore_tb_m1___024root__trace_init_top(VCore_tb_m1___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VCore_tb_m1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCore_tb_m1___024root*>(voidSelf);
    VCore_tb_m1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VCore_tb_m1___024root__trace_decl_types(tracep);
    VCore_tb_m1___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VCore_tb_m1___024root__trace_register(VCore_tb_m1___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VCore_tb_m1::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VCore_tb_m1::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VCore_tb_m1___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
