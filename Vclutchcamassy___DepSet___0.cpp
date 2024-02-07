// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclutchcamassy.h for the primary calling header

#include "verilated.h"

#include "Vclutchcamassy_.h"

VL_INLINE_OPT void Vclutchcamassy____sequent__TOP__0(Vclutchcamassy_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclutchcamassy__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclutchcamassy____sequent__TOP__0\n"); );
    // Init
    SData/*8:0*/ __Vdly__clch_angle;
    CData/*0:0*/ __Vdly__clutchcamassy__DOT__latched;
    SData/*11:0*/ __Vdly__cont_angle;
    // Body
    __Vdly__clutchcamassy__DOT__latched = vlSelf->clutchcamassy__DOT__latched;
    __Vdly__clch_angle = vlSelf->clch_angle;
    __Vdly__cont_angle = vlSelf->cont_angle;
    if ((0x13bU == (IData)(vlSelf->cont_angle))) {
        __Vdly__clch_angle = 0x13bU;
        __Vdly__clutchcamassy__DOT__latched = vlSelf->clch_latch;
    }
    if (vlSelf->power) {
        __Vdly__cont_angle = (0xfffU & ((IData)(1U) 
                                        + (IData)(vlSelf->cont_angle)));
    }
    if ((0x168U == (IData)(vlSelf->cont_angle))) {
        __Vdly__cont_angle = 0U;
    }
    if (vlSelf->clutchcamassy__DOT__latched) {
        if (vlSelf->power) {
            __Vdly__clch_angle = (0x1ffU & ((IData)(1U) 
                                            + (IData)(vlSelf->clch_angle)));
        }
        if ((0x168U == (IData)(vlSelf->clch_angle))) {
            __Vdly__clch_angle = 0U;
        }
    }
    vlSelf->clutchcamassy__DOT__latched = __Vdly__clutchcamassy__DOT__latched;
    vlSelf->clch_angle = __Vdly__clch_angle;
    vlSelf->cont_angle = __Vdly__cont_angle;
    vlSelf->rl1 = (((0x9bU <= (IData)(vlSelf->clch_angle)) 
                    & (0xb9U > (IData)(vlSelf->clch_angle))) 
                   | ((0xf2U <= (IData)(vlSelf->clch_angle)) 
                      & (0x133U > (IData)(vlSelf->clch_angle))));
    vlSelf->rl2 = ((0x145U <= (IData)(vlSelf->clch_angle)) 
                   | (0x9bU > (IData)(vlSelf->clch_angle)));
    vlSelf->rl3 = ((0x9bU <= (IData)(vlSelf->clch_angle)) 
                   & (0x115U > (IData)(vlSelf->clch_angle)));
    vlSelf->rl10 = ((0x110U <= (IData)(vlSelf->clch_angle)) 
                    & (0x156U > (IData)(vlSelf->clch_angle)));
    vlSelf->sccb = (((((((((((((0xcU <= (IData)(vlSelf->clch_angle)) 
                               & (0xeU > (IData)(vlSelf->clch_angle))) 
                              | ((0x1eU <= (IData)(vlSelf->clch_angle)) 
                                 & (0x20U > (IData)(vlSelf->clch_angle)))) 
                             | ((0x30U <= (IData)(vlSelf->clch_angle)) 
                                & (0x32U > (IData)(vlSelf->clch_angle)))) 
                            | ((0x42U <= (IData)(vlSelf->clch_angle)) 
                               & (0x44U > (IData)(vlSelf->clch_angle)))) 
                           | ((0x54U <= (IData)(vlSelf->clch_angle)) 
                              & (0x56U > (IData)(vlSelf->clch_angle)))) 
                          | ((0x66U <= (IData)(vlSelf->clch_angle)) 
                             & (0x68U > (IData)(vlSelf->clch_angle)))) 
                         | ((0x78U <= (IData)(vlSelf->clch_angle)) 
                            & (0x7aU > (IData)(vlSelf->clch_angle)))) 
                        | ((0x8aU <= (IData)(vlSelf->clch_angle)) 
                           & (0x8cU > (IData)(vlSelf->clch_angle)))) 
                       | ((0x9cU <= (IData)(vlSelf->clch_angle)) 
                          & (0x9eU > (IData)(vlSelf->clch_angle)))) 
                      | ((0xaeU <= (IData)(vlSelf->clch_angle)) 
                         & (0xb0U > (IData)(vlSelf->clch_angle)))) 
                     | ((0xc0U <= (IData)(vlSelf->clch_angle)) 
                        & (0xc2U > (IData)(vlSelf->clch_angle)))) 
                    | ((0xd2U <= (IData)(vlSelf->clch_angle)) 
                       & (0xd4U > (IData)(vlSelf->clch_angle))));
    vlSelf->rc1 = ((((8U <= (IData)(vlSelf->cont_angle)) 
                     & (0x5dU > (IData)(vlSelf->cont_angle))) 
                    | ((0x80U <= (IData)(vlSelf->cont_angle)) 
                       & (0xd5U > (IData)(vlSelf->cont_angle)))) 
                   | ((0xf8U <= (IData)(vlSelf->cont_angle)) 
                      & (0x14dU > (IData)(vlSelf->cont_angle))));
    vlSelf->rc2 = ((((0x154U <= (IData)(vlSelf->cont_angle)) 
                     | (0x41U > (IData)(vlSelf->cont_angle))) 
                    | ((0x64U <= (IData)(vlSelf->cont_angle)) 
                       & (0xc3U > (IData)(vlSelf->cont_angle)))) 
                   | ((0xdcU <= (IData)(vlSelf->cont_angle)) 
                      & (0x132U > (IData)(vlSelf->cont_angle))));
    vlSelf->rc3 = ((((0x156U <= (IData)(vlSelf->cont_angle)) 
                     | (0x1bU > (IData)(vlSelf->cont_angle))) 
                    | ((0x66U <= (IData)(vlSelf->cont_angle)) 
                       & (0x93U > (IData)(vlSelf->cont_angle)))) 
                   | ((0xdeU <= (IData)(vlSelf->cont_angle)) 
                      & (0x10bU > (IData)(vlSelf->cont_angle))));
    vlSelf->rc4 = ((((0x16U <= (IData)(vlSelf->cont_angle)) 
                     & (0x6bU > (IData)(vlSelf->cont_angle))) 
                    | ((0x8eU <= (IData)(vlSelf->cont_angle)) 
                       & (0xe3U > (IData)(vlSelf->cont_angle)))) 
                   | ((0x106U <= (IData)(vlSelf->cont_angle)) 
                      & (0x15bU > (IData)(vlSelf->cont_angle))));
    vlSelf->rc5 = ((0x110U <= (IData)(vlSelf->cont_angle)) 
                   & (0x156U > (IData)(vlSelf->cont_angle)));
    vlSelf->rc6 = ((((0x20U <= (IData)(vlSelf->cont_angle)) 
                     & (0x66U > (IData)(vlSelf->cont_angle))) 
                    | ((0x98U <= (IData)(vlSelf->cont_angle)) 
                       & (0xdeU > (IData)(vlSelf->cont_angle)))) 
                   | ((0x110U <= (IData)(vlSelf->cont_angle)) 
                      & (0x156U > (IData)(vlSelf->cont_angle))));
    vlSelf->rc7 = ((((0x15bU <= (IData)(vlSelf->cont_angle)) 
                     | (0x16U > (IData)(vlSelf->cont_angle))) 
                    | ((0x6bU <= (IData)(vlSelf->cont_angle)) 
                       & (0x8eU > (IData)(vlSelf->cont_angle)))) 
                   | ((0xe3U <= (IData)(vlSelf->cont_angle)) 
                      & (0x106U > (IData)(vlSelf->cont_angle))));
    vlSelf->rc8 = ((((0x20U <= (IData)(vlSelf->cont_angle)) 
                     & (0x75U > (IData)(vlSelf->cont_angle))) 
                    | ((0x98U <= (IData)(vlSelf->cont_angle)) 
                       & (0xedU > (IData)(vlSelf->cont_angle)))) 
                   | ((0x110U <= (IData)(vlSelf->cont_angle)) 
                      & (0x165U > (IData)(vlSelf->cont_angle))));
    vlSelf->rc9 = ((((0x131U <= (IData)(vlSelf->cont_angle)) 
                     | (0xfU > (IData)(vlSelf->cont_angle))) 
                    | ((0x41U <= (IData)(vlSelf->cont_angle)) 
                       & (0x87U > (IData)(vlSelf->cont_angle)))) 
                   | ((0xb9U <= (IData)(vlSelf->cont_angle)) 
                      & (0x109U > (IData)(vlSelf->cont_angle))));
    vlSelf->rc12 = ((((0x14bU <= (IData)(vlSelf->cont_angle)) 
                      | (6U > (IData)(vlSelf->cont_angle))) 
                     | ((0x5bU <= (IData)(vlSelf->cont_angle)) 
                        & (0x7eU > (IData)(vlSelf->cont_angle)))) 
                    | ((0xd3U <= (IData)(vlSelf->cont_angle)) 
                       & (0xf6U > (IData)(vlSelf->cont_angle))));
}

void Vclutchcamassy____eval(Vclutchcamassy_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclutchcamassy__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclutchcamassy____eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vclutchcamassy____sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vclutchcamassy____eval_debug_assertions(Vclutchcamassy_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclutchcamassy__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclutchcamassy____eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->clch_latch & 0xfeU))) {
        Verilated::overWidthError("clch_latch");}
    if (VL_UNLIKELY((vlSelf->power & 0xfeU))) {
        Verilated::overWidthError("power");}
}
#endif  // VL_DEBUG
