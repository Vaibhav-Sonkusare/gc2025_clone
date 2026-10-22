// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VmkTbSoc_edited__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VmkTbSoc_edited::VmkTbSoc_edited(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VmkTbSoc_edited__Syms(contextp(), _vcname__, this)}
    , CLK{vlSymsp->TOP.CLK}
    , RST_N{vlSymsp->TOP.RST_N}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VmkTbSoc_edited::VmkTbSoc_edited(const char* _vcname__)
    : VmkTbSoc_edited(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VmkTbSoc_edited::~VmkTbSoc_edited() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VmkTbSoc_edited___024root___eval_debug_assertions(VmkTbSoc_edited___024root* vlSelf);
#endif  // VL_DEBUG
void VmkTbSoc_edited___024root___eval_static(VmkTbSoc_edited___024root* vlSelf);
void VmkTbSoc_edited___024root___eval_initial(VmkTbSoc_edited___024root* vlSelf);
void VmkTbSoc_edited___024root___eval_settle(VmkTbSoc_edited___024root* vlSelf);
void VmkTbSoc_edited___024root___eval(VmkTbSoc_edited___024root* vlSelf);

void VmkTbSoc_edited::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VmkTbSoc_edited::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VmkTbSoc_edited___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VmkTbSoc_edited___024root___eval_static(&(vlSymsp->TOP));
        VmkTbSoc_edited___024root___eval_initial(&(vlSymsp->TOP));
        VmkTbSoc_edited___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VmkTbSoc_edited___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VmkTbSoc_edited::eventsPending() { return false; }

uint64_t VmkTbSoc_edited::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VmkTbSoc_edited::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VmkTbSoc_edited___024root___eval_final(VmkTbSoc_edited___024root* vlSelf);

VL_ATTR_COLD void VmkTbSoc_edited::final() {
    VmkTbSoc_edited___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VmkTbSoc_edited::hierName() const { return vlSymsp->name(); }
const char* VmkTbSoc_edited::modelName() const { return "VmkTbSoc_edited"; }
unsigned VmkTbSoc_edited::threads() const { return 1; }
void VmkTbSoc_edited::prepareClone() const { contextp()->prepareClone(); }
void VmkTbSoc_edited::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VmkTbSoc_edited::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VmkTbSoc_edited___024root__trace_decl_types(VerilatedVcd* tracep);

void VmkTbSoc_edited___024root__trace_init_top(VmkTbSoc_edited___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VmkTbSoc_edited___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VmkTbSoc_edited___024root*>(voidSelf);
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VmkTbSoc_edited___024root__trace_decl_types(tracep);
    VmkTbSoc_edited___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VmkTbSoc_edited___024root__trace_register(VmkTbSoc_edited___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VmkTbSoc_edited::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VmkTbSoc_edited::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VmkTbSoc_edited___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
