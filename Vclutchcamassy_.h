// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclutchcamassy.h for the primary calling header

#ifndef VERILATED_VCLUTCHCAMASSY__H_
#define VERILATED_VCLUTCHCAMASSY__H_  // guard

#include "verilated.h"

class Vclutchcamassy__Syms;
VL_MODULE(Vclutchcamassy_) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(clch_latch,0,0);
    VL_IN8(power,0,0);
    VL_OUT8(rc1,0,0);
    VL_OUT8(rc2,0,0);
    VL_OUT8(rc3,0,0);
    VL_OUT8(rc4,0,0);
    VL_OUT8(rc5,0,0);
    VL_OUT8(rc6,0,0);
    VL_OUT8(rc7,0,0);
    VL_OUT8(rc8,0,0);
    VL_OUT8(rc9,0,0);
    VL_OUT8(rc12,0,0);
    VL_OUT8(rl1,0,0);
    VL_OUT8(rl2,0,0);
    VL_OUT8(rl3,0,0);
    VL_OUT8(rl10,0,0);
    VL_OUT8(sccb,0,0);
    CData/*0:0*/ clutchcamassy__DOT__latched;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_OUT(cont_angle,31,0);
    VL_OUT(clch_angle,31,0);

    // INTERNAL VARIABLES
    Vclutchcamassy__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vclutchcamassy_(Vclutchcamassy__Syms* symsp, const char* name);
    ~Vclutchcamassy_();
    VL_UNCOPYABLE(Vclutchcamassy_);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
