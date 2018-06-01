// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VAccumMulAddRecF32__Syms_H_
#define _VAccumMulAddRecF32__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VAccumMulAddRecF32.h"

// SYMS CLASS
class VAccumMulAddRecF32__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VAccumMulAddRecF32*            TOPp;
    
    // CREATORS
    VAccumMulAddRecF32__Syms(VAccumMulAddRecF32* topp, const char* namep);
    ~VAccumMulAddRecF32__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
