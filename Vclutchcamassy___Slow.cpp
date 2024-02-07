// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclutchcamassy.h for the primary calling header

#include "verilated.h"

#include "Vclutchcamassy_.h"
#include "Vclutchcamassy__Syms.h"

void Vclutchcamassy____ctor_var_reset(Vclutchcamassy_* vlSelf);

Vclutchcamassy_::Vclutchcamassy_(Vclutchcamassy__Syms* symsp, const char* name)
    : VerilatedModule(name)
    , vlSymsp(symsp)
 {
    // Reset structure values
    Vclutchcamassy____ctor_var_reset(this);
}

void Vclutchcamassy_::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vclutchcamassy_::~Vclutchcamassy_() {
}
