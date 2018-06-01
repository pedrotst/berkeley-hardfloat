// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAccumMulAddRecF32_H_
#define _VAccumMulAddRecF32_H_

#include "verilated.h"

class VAccumMulAddRecF32__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VAccumMulAddRecF32) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_ignore,4,0);
    VL_OUT(io_out3,31,0);
    VL_OUT64(io_out,32,0);
    VL_OUT64(io_out2,32,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T3,6,0);
    VL_SIG8(AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist,6,0);
    VL_SIG8(AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign,0,0);
    VL_SIG8(AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T114,0,0);
    VL_SIG8(AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T122,0,0);
    VL_SIG8(AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T327,4,0);
    VL_SIG8(AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T134,7,0);
    VL_SIG8(AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T138,7,0);
    VL_SIG8(AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T316,0,0);
    VL_SIG8(AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T5,0,0);
    VL_SIG8(AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut,0,0);
    VL_SIG8(AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow,0,0);
    VL_SIG8(AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut,0,0);
    VL_SIG8(AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__signOut,0,0);
    VL_SIG16(AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist,11,0);
    VL_SIG16(AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T16,11,0);
    VL_SIG16(AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T153,15,0);
    VL_SIG16(AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T157,15,0);
    VL_SIG16(AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T161,15,0);
    VL_SIG16(AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp,9,0);
    VL_SIG16(AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T57,15,0);
    VL_SIG16(AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T61,15,0);
    VL_SIG16(AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T65,15,0);
    VL_SIG16(AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T86,12,0);
    VL_SIG(AccumMulAddRecF32__DOT__initvar,31,0);
    VL_SIGW(AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC,75,0,3);
    VL_SIGW(AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC,77,0,3);
    VL_SIG(AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig,26,0);
    VL_SIG(AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11,25,0);
    VL_SIG(AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T17,25,0);
    VL_SIGW(AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum,74,0,3);
    VL_SIGW(AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T217,113,0,4);
    VL_SIG(AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T7,26,0);
    VL_SIG(AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T11,24,0);
    VL_SIG(AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T82,26,0);
    VL_SIG(AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T90,26,0);
    VL_SIG64(AccumMulAddRecF32__DOT__accum,32,0);
    VL_SIG64(AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddResult,49,0);
    VL_SIG64(AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum,50,0);
    VL_SIG64(AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum,49,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VAccumMulAddRecF32__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VAccumMulAddRecF32);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VAccumMulAddRecF32(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VAccumMulAddRecF32();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VAccumMulAddRecF32__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VAccumMulAddRecF32__Syms* symsp, bool first);
  private:
    static QData _change_request(VAccumMulAddRecF32__Syms* __restrict vlSymsp);
    void _ctor_var_reset();
  public:
    static void _eval(VAccumMulAddRecF32__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VAccumMulAddRecF32__Syms* __restrict vlSymsp);
    static void _eval_settle(VAccumMulAddRecF32__Syms* __restrict vlSymsp);
    static void _initial__TOP__1(VAccumMulAddRecF32__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VAccumMulAddRecF32__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VAccumMulAddRecF32__Syms* __restrict vlSymsp);
    static void traceChgThis(VAccumMulAddRecF32__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VAccumMulAddRecF32__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VAccumMulAddRecF32__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VAccumMulAddRecF32__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VAccumMulAddRecF32__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(VAccumMulAddRecF32__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(VAccumMulAddRecF32__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(VAccumMulAddRecF32__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
