// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCLUTCHCAMASSY__SYMS_H_
#define VERILATED_VCLUTCHCAMASSY__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vclutchcamassy.h"

// INCLUDE MODULE CLASSES
#include "Vclutchcamassy_.h"

// SYMS CLASS (contains all model state)
class Vclutchcamassy__Syms /* final */ : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vclutchcamassy* const __Vm_modelp;
    bool __Vm_didInit;// = false;

    // MODULE INSTANCE STATE
    Vclutchcamassy_                TOP;

    // CONSTRUCTORS
    Vclutchcamassy__Syms(VerilatedContext* contextp, const char* namep, Vclutchcamassy* modelp);
    ~Vclutchcamassy__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
