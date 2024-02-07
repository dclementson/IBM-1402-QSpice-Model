// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VCLUTCHCAMASSY_H_
#define VERILATED_VCLUTCHCAMASSY_H_  // guard

#include "verilated.h"

class Vclutchcamassy__Syms;
class Vclutchcamassy_;

// This class is the main interface to the Verilated model
class Vclutchcamassy VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vclutchcamassy__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&clch_latch,0,0);
    VL_IN8(&power,0,0);
    VL_OUT8(&rc1,0,0);
    VL_OUT8(&rc2,0,0);
    VL_OUT8(&rc3,0,0);
    VL_OUT8(&rc4,0,0);
    VL_OUT8(&rc5,0,0);
    VL_OUT8(&rc6,0,0);
    VL_OUT8(&rc7,0,0);
    VL_OUT8(&rc8,0,0);
    VL_OUT8(&rc9,0,0);
    VL_OUT8(&rc12,0,0);
    VL_OUT8(&rl1,0,0);
    VL_OUT8(&rl2,0,0);
    VL_OUT8(&rl3,0,0);
    VL_OUT8(&rl10,0,0);
    VL_OUT8(&sccb,0,0);
    VL_OUT(&cont_angle,31,0);
    VL_OUT(&clch_angle,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vclutchcamassy_* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vclutchcamassy(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vclutchcamassy(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vclutchcamassy();
  private:
    VL_UNCOPYABLE(Vclutchcamassy);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
