// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclutchcamassy.h for the primary calling header

#include "verilated.h"

#include "Vclutchcamassy_.h"

VL_ATTR_COLD void Vclutchcamassy____initial__TOP__0(Vclutchcamassy_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclutchcamassy__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclutchcamassy____initial__TOP__0\n"); );
    // Body
    vlSelf->clutchcamassy__DOT__latched = 1U;
}

VL_ATTR_COLD void Vclutchcamassy____settle__TOP__0(Vclutchcamassy_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclutchcamassy__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclutchcamassy____settle__TOP__0\n"); );
    // Body
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
}

VL_ATTR_COLD void Vclutchcamassy____eval_initial(Vclutchcamassy_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclutchcamassy__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclutchcamassy____eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vclutchcamassy____initial__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vclutchcamassy____eval_settle(Vclutchcamassy_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclutchcamassy__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclutchcamassy____eval_settle\n"); );
    // Body
    Vclutchcamassy____settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vclutchcamassy____final(Vclutchcamassy_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclutchcamassy__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclutchcamassy____final\n"); );
}

VL_ATTR_COLD void Vclutchcamassy____ctor_var_reset(Vclutchcamassy_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclutchcamassy__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclutchcamassy____ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->clch_latch = VL_RAND_RESET_I(1);
    vlSelf->power = VL_RAND_RESET_I(1);
    vlSelf->cont_angle = VL_RAND_RESET_I(12);
    vlSelf->clch_angle = VL_RAND_RESET_I(9);
    vlSelf->rc1 = VL_RAND_RESET_I(1);
    vlSelf->rc2 = VL_RAND_RESET_I(1);
    vlSelf->rc3 = VL_RAND_RESET_I(1);
    vlSelf->rc4 = VL_RAND_RESET_I(1);
    vlSelf->rc5 = VL_RAND_RESET_I(1);
    vlSelf->rc6 = VL_RAND_RESET_I(1);
    vlSelf->rc7 = VL_RAND_RESET_I(1);
    vlSelf->rc8 = VL_RAND_RESET_I(1);
    vlSelf->rc9 = VL_RAND_RESET_I(1);
    vlSelf->rc12 = VL_RAND_RESET_I(1);
    vlSelf->rl1 = VL_RAND_RESET_I(1);
    vlSelf->rl2 = VL_RAND_RESET_I(1);
    vlSelf->rl3 = VL_RAND_RESET_I(1);
    vlSelf->rl10 = VL_RAND_RESET_I(1);
    vlSelf->sccb = VL_RAND_RESET_I(1);
    vlSelf->clutchcamassy__DOT__latched = VL_RAND_RESET_I(1);
}
