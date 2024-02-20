// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclutchcamassy.h for the primary calling header

#include "verilated.h"

#include "Vclutchcamassy_.h"

VL_INLINE_OPT void Vclutchcamassy____sequent__TOP__0(Vclutchcamassy_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclutchcamassy__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclutchcamassy____sequent__TOP__0\n"); );
    // Body
    if (((0x13bU == vlSelf->clch_angle) & (((0x4bU 
                                             == vlSelf->cont_angle) 
                                            | (0xc3U 
                                               == vlSelf->cont_angle)) 
                                           | (0x13bU 
                                              == vlSelf->cont_angle)))) {
        vlSelf->clutchcamassy__DOT__latched = vlSelf->clch_latch;
    }
    if (vlSelf->power) {
        vlSelf->cont_angle = VL_MODDIVS_III(32, ((IData)(1U) 
                                                 + vlSelf->cont_angle), (IData)(0x168U));
        if (vlSelf->clutchcamassy__DOT__latched) {
            vlSelf->clch_angle = VL_MODDIVS_III(32, 
                                                ((IData)(1U) 
                                                 + vlSelf->clch_angle), (IData)(0x168U));
        }
    }
    vlSelf->rl1 = ((VL_LTES_III(32, 0x9bU, vlSelf->clch_angle) 
                    & VL_GTS_III(32, 0xb9U, vlSelf->clch_angle)) 
                   | (VL_LTES_III(32, 0xf2U, vlSelf->clch_angle) 
                      & VL_GTS_III(32, 0x133U, vlSelf->clch_angle)));
    vlSelf->rl2 = (VL_LTES_III(32, 0x145U, vlSelf->clch_angle) 
                   | VL_GTS_III(32, 0x9bU, vlSelf->clch_angle));
    vlSelf->rl3 = (VL_LTES_III(32, 0x9bU, vlSelf->clch_angle) 
                   & VL_GTS_III(32, 0x115U, vlSelf->clch_angle));
    vlSelf->rl10 = (VL_LTES_III(32, 0x110U, vlSelf->clch_angle) 
                    & VL_GTS_III(32, 0x156U, vlSelf->clch_angle));
    vlSelf->sccb = ((((((((((((VL_LTES_III(32, 0xcU, vlSelf->clch_angle) 
                               & VL_GTS_III(32, 0xeU, vlSelf->clch_angle)) 
                              | (VL_LTES_III(32, 0x1eU, vlSelf->clch_angle) 
                                 & VL_GTS_III(32, 0x20U, vlSelf->clch_angle))) 
                             | (VL_LTES_III(32, 0x30U, vlSelf->clch_angle) 
                                & VL_GTS_III(32, 0x32U, vlSelf->clch_angle))) 
                            | (VL_LTES_III(32, 0x42U, vlSelf->clch_angle) 
                               & VL_GTS_III(32, 0x44U, vlSelf->clch_angle))) 
                           | (VL_LTES_III(32, 0x54U, vlSelf->clch_angle) 
                              & VL_GTS_III(32, 0x56U, vlSelf->clch_angle))) 
                          | (VL_LTES_III(32, 0x66U, vlSelf->clch_angle) 
                             & VL_GTS_III(32, 0x68U, vlSelf->clch_angle))) 
                         | (VL_LTES_III(32, 0x78U, vlSelf->clch_angle) 
                            & VL_GTS_III(32, 0x7aU, vlSelf->clch_angle))) 
                        | (VL_LTES_III(32, 0x8aU, vlSelf->clch_angle) 
                           & VL_GTS_III(32, 0x8cU, vlSelf->clch_angle))) 
                       | (VL_LTES_III(32, 0x9cU, vlSelf->clch_angle) 
                          & VL_GTS_III(32, 0x9eU, vlSelf->clch_angle))) 
                      | (VL_LTES_III(32, 0xaeU, vlSelf->clch_angle) 
                         & VL_GTS_III(32, 0xb0U, vlSelf->clch_angle))) 
                     | (VL_LTES_III(32, 0xc0U, vlSelf->clch_angle) 
                        & VL_GTS_III(32, 0xc2U, vlSelf->clch_angle))) 
                    | (VL_LTES_III(32, 0xd2U, vlSelf->clch_angle) 
                       & VL_GTS_III(32, 0xd4U, vlSelf->clch_angle)));
    vlSelf->rc1 = (((VL_LTES_III(32, 8U, vlSelf->cont_angle) 
                     & VL_GTS_III(32, 0x5dU, vlSelf->cont_angle)) 
                    | (VL_LTES_III(32, 0x80U, vlSelf->cont_angle) 
                       & VL_GTS_III(32, 0xd5U, vlSelf->cont_angle))) 
                   | (VL_LTES_III(32, 0xf8U, vlSelf->cont_angle) 
                      & VL_GTS_III(32, 0x14dU, vlSelf->cont_angle)));
    vlSelf->rc2 = (((VL_LTES_III(32, 0x154U, vlSelf->cont_angle) 
                     | VL_GTS_III(32, 0x41U, vlSelf->cont_angle)) 
                    | (VL_LTES_III(32, 0x64U, vlSelf->cont_angle) 
                       & VL_GTS_III(32, 0xc3U, vlSelf->cont_angle))) 
                   | (VL_LTES_III(32, 0xdcU, vlSelf->cont_angle) 
                      & VL_GTS_III(32, 0x132U, vlSelf->cont_angle)));
    vlSelf->rc3 = (((VL_LTES_III(32, 0x156U, vlSelf->cont_angle) 
                     | VL_GTS_III(32, 0x1bU, vlSelf->cont_angle)) 
                    | (VL_LTES_III(32, 0x66U, vlSelf->cont_angle) 
                       & VL_GTS_III(32, 0x93U, vlSelf->cont_angle))) 
                   | (VL_LTES_III(32, 0xdeU, vlSelf->cont_angle) 
                      & VL_GTS_III(32, 0x10bU, vlSelf->cont_angle)));
    vlSelf->rc4 = (((VL_LTES_III(32, 0x16U, vlSelf->cont_angle) 
                     & VL_GTS_III(32, 0x6bU, vlSelf->cont_angle)) 
                    | (VL_LTES_III(32, 0x8eU, vlSelf->cont_angle) 
                       & VL_GTS_III(32, 0xe3U, vlSelf->cont_angle))) 
                   | (VL_LTES_III(32, 0x106U, vlSelf->cont_angle) 
                      & VL_GTS_III(32, 0x15bU, vlSelf->cont_angle)));
    vlSelf->rc5 = (VL_LTES_III(32, 0x110U, vlSelf->cont_angle) 
                   & VL_GTS_III(32, 0x156U, vlSelf->cont_angle));
    vlSelf->rc6 = (((VL_LTES_III(32, 0x20U, vlSelf->cont_angle) 
                     & VL_GTS_III(32, 0x66U, vlSelf->cont_angle)) 
                    | (VL_LTES_III(32, 0x98U, vlSelf->cont_angle) 
                       & VL_GTS_III(32, 0xdeU, vlSelf->cont_angle))) 
                   | (VL_LTES_III(32, 0x110U, vlSelf->cont_angle) 
                      & VL_GTS_III(32, 0x156U, vlSelf->cont_angle)));
    vlSelf->rc7 = (((VL_LTES_III(32, 0x15bU, vlSelf->cont_angle) 
                     | VL_GTS_III(32, 0x16U, vlSelf->cont_angle)) 
                    | (VL_LTES_III(32, 0x6bU, vlSelf->cont_angle) 
                       & VL_GTS_III(32, 0x8eU, vlSelf->cont_angle))) 
                   | (VL_LTES_III(32, 0xe3U, vlSelf->cont_angle) 
                      & VL_GTS_III(32, 0x106U, vlSelf->cont_angle)));
    vlSelf->rc8 = (((VL_LTES_III(32, 0x20U, vlSelf->cont_angle) 
                     & VL_GTS_III(32, 0x75U, vlSelf->cont_angle)) 
                    | (VL_LTES_III(32, 0x98U, vlSelf->cont_angle) 
                       & VL_GTS_III(32, 0xedU, vlSelf->cont_angle))) 
                   | (VL_LTES_III(32, 0x110U, vlSelf->cont_angle) 
                      & VL_GTS_III(32, 0x165U, vlSelf->cont_angle)));
    vlSelf->rc9 = (((VL_LTES_III(32, 0x131U, vlSelf->cont_angle) 
                     | VL_GTS_III(32, 0xfU, vlSelf->cont_angle)) 
                    | (VL_LTES_III(32, 0x41U, vlSelf->cont_angle) 
                       & VL_GTS_III(32, 0x87U, vlSelf->cont_angle))) 
                   | (VL_LTES_III(32, 0xb9U, vlSelf->cont_angle) 
                      & VL_GTS_III(32, 0x109U, vlSelf->cont_angle)));
    vlSelf->rc12 = (((VL_LTES_III(32, 0x14bU, vlSelf->cont_angle) 
                      | VL_GTS_III(32, 6U, vlSelf->cont_angle)) 
                     | (VL_LTES_III(32, 0x5bU, vlSelf->cont_angle) 
                        & VL_GTS_III(32, 0x7eU, vlSelf->cont_angle))) 
                    | (VL_LTES_III(32, 0xd3U, vlSelf->cont_angle) 
                       & VL_GTS_III(32, 0xf6U, vlSelf->cont_angle)));
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
