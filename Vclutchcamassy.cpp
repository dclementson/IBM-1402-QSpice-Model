// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vclutchcamassy.h"
#include "Vclutchcamassy__Syms.h"

//============================================================
// Constructors

Vclutchcamassy::Vclutchcamassy(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp(new Vclutchcamassy__Syms(_vcontextp__, _vcname__, this))
    , clk(vlSymsp->TOP.clk)
    , clch_latch(vlSymsp->TOP.clch_latch)
    , power(vlSymsp->TOP.power)
    , rc1(vlSymsp->TOP.rc1)
    , rc2(vlSymsp->TOP.rc2)
    , rc3(vlSymsp->TOP.rc3)
    , rc4(vlSymsp->TOP.rc4)
    , rc5(vlSymsp->TOP.rc5)
    , rc6(vlSymsp->TOP.rc6)
    , rc7(vlSymsp->TOP.rc7)
    , rc8(vlSymsp->TOP.rc8)
    , rc9(vlSymsp->TOP.rc9)
    , rc12(vlSymsp->TOP.rc12)
    , rl1(vlSymsp->TOP.rl1)
    , rl2(vlSymsp->TOP.rl2)
    , rl3(vlSymsp->TOP.rl3)
    , rl10(vlSymsp->TOP.rl10)
    , sccb(vlSymsp->TOP.sccb)
    , cont_angle(vlSymsp->TOP.cont_angle)
    , clch_angle(vlSymsp->TOP.clch_angle)
    , rootp(&(vlSymsp->TOP))
{
}

//Vclutchcamassy::Vclutchcamassy(const char* _vcname__)
//    : Vclutchcamassy(nullptr, _vcname__)
//{
//}

Vclutchcamassy::Vclutchcamassy(const char* _vcname__)
   : vlSymsp(new Vclutchcamassy__Syms(nullptr, _vcname__, this))
   , clk(vlSymsp->TOP.clk)
   , clch_latch(vlSymsp->TOP.clch_latch)
   , power(vlSymsp->TOP.power)
   , rc1(vlSymsp->TOP.rc1)
   , rc2(vlSymsp->TOP.rc2)
   , rc3(vlSymsp->TOP.rc3)
   , rc4(vlSymsp->TOP.rc4)
   , rc5(vlSymsp->TOP.rc5)
   , rc6(vlSymsp->TOP.rc6)
   , rc7(vlSymsp->TOP.rc7)
   , rc8(vlSymsp->TOP.rc8)
   , rc9(vlSymsp->TOP.rc9)
   , rc12(vlSymsp->TOP.rc12)
   , rl1(vlSymsp->TOP.rl1)
   , rl2(vlSymsp->TOP.rl2)
   , rl3(vlSymsp->TOP.rl3)
   , rl10(vlSymsp->TOP.rl10)
   , sccb(vlSymsp->TOP.sccb)
   , cont_angle(vlSymsp->TOP.cont_angle)
   , clch_angle(vlSymsp->TOP.clch_angle)
   , rootp(&(vlSymsp->TOP))
{
}

//============================================================
// Destructor

Vclutchcamassy::~Vclutchcamassy() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vclutchcamassy____eval_initial(Vclutchcamassy_* vlSelf);
void Vclutchcamassy____eval_settle(Vclutchcamassy_* vlSelf);
void Vclutchcamassy____eval(Vclutchcamassy_* vlSelf);
#ifdef VL_DEBUG
void Vclutchcamassy____eval_debug_assertions(Vclutchcamassy_* vlSelf);
#endif  // VL_DEBUG
void Vclutchcamassy____final(Vclutchcamassy_* vlSelf);

static void _eval_initial_loop(Vclutchcamassy__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vclutchcamassy____eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vclutchcamassy____eval_settle(&(vlSymsp->TOP));
        Vclutchcamassy____eval(&(vlSymsp->TOP));
    } while (0);
}

void Vclutchcamassy::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vclutchcamassy::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vclutchcamassy____eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vclutchcamassy____eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vclutchcamassy::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vclutchcamassy::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vclutchcamassy::final() {
    Vclutchcamassy____final(&(vlSymsp->TOP));
}
