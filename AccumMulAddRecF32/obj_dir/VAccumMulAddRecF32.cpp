// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAccumMulAddRecF32.h for the primary calling header

#include "VAccumMulAddRecF32.h" // For This
#include "VAccumMulAddRecF32__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VAccumMulAddRecF32) {
    VAccumMulAddRecF32__Syms* __restrict vlSymsp = __VlSymsp = new VAccumMulAddRecF32__Syms(this, name());
    VAccumMulAddRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VAccumMulAddRecF32::__Vconfigure(VAccumMulAddRecF32__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VAccumMulAddRecF32::~VAccumMulAddRecF32() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VAccumMulAddRecF32::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAccumMulAddRecF32::eval\n"); );
    VAccumMulAddRecF32__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VAccumMulAddRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

void VAccumMulAddRecF32::_eval_initial_loop(VAccumMulAddRecF32__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void VAccumMulAddRecF32::_initial__TOP__1(VAccumMulAddRecF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAccumMulAddRecF32::_initial__TOP__1\n"); );
    VAccumMulAddRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at AccumMulAddRecF32.v:2011
    vlTOPp->io_out3 = 0x6aU;
    // INITIAL at AccumMulAddRecF32.v:1975
    vlTOPp->AccumMulAddRecF32__DOT__accum = (VL_ULL(0x1ffffffff) 
					     & (((QData)((IData)(
								 VL_RANDOM_I(32))) 
						 << 0x20U) 
						| (QData)((IData)(
								  VL_RANDOM_I(32)))));
}

void VAccumMulAddRecF32::_settle__TOP__2(VAccumMulAddRecF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAccumMulAddRecF32::_settle__TOP__2\n"); );
    VAccumMulAddRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp4,95,0,3);
    VL_SIGW(__Vtemp11,127,0,4);
    VL_SIGW(__Vtemp12,127,0,4);
    VL_SIGW(__Vtemp15,95,0,3);
    VL_SIGW(__Vtemp16,95,0,3);
    VL_SIGW(__Vtemp19,95,0,3);
    VL_SIGW(__Vtemp20,95,0,3);
    VL_SIGW(__Vtemp23,95,0,3);
    VL_SIGW(__Vtemp24,95,0,3);
    VL_SIGW(__Vtemp27,95,0,3);
    VL_SIGW(__Vtemp28,95,0,3);
    VL_SIGW(__Vtemp31,95,0,3);
    VL_SIGW(__Vtemp32,95,0,3);
    VL_SIGW(__Vtemp35,95,0,3);
    VL_SIGW(__Vtemp36,95,0,3);
    VL_SIGW(__Vtemp39,95,0,3);
    VL_SIGW(__Vtemp40,95,0,3);
    VL_SIGW(__Vtemp43,95,0,3);
    VL_SIGW(__Vtemp44,95,0,3);
    VL_SIGW(__Vtemp47,95,0,3);
    VL_SIGW(__Vtemp48,95,0,3);
    VL_SIGW(__Vtemp51,95,0,3);
    VL_SIGW(__Vtemp52,95,0,3);
    VL_SIGW(__Vtemp55,95,0,3);
    VL_SIGW(__Vtemp56,95,0,3);
    // Body
    vlTOPp->io_out2 = VL_ULL(0x38d40000);
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow = 0U;
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T3 = 0U;
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign = 1U;
    vlTOPp->io_out = vlTOPp->AccumMulAddRecF32__DOT__accum;
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T114 
	= ((3U == (3U & (IData)((vlTOPp->AccumMulAddRecF32__DOT__accum 
				 >> 0x1eU)))) & (~ (IData)(
							   (vlTOPp->AccumMulAddRecF32__DOT__accum 
							    >> 0x1dU))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T122 
	= ((3U == (3U & (IData)((vlTOPp->AccumMulAddRecF32__DOT__accum 
				 >> 0x1eU)))) & (IData)(
							(vlTOPp->AccumMulAddRecF32__DOT__accum 
							 >> 0x1dU)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T16 
	= (0xfffU & ((IData)(1U) + (0x1ffU & (IData)(
						     (vlTOPp->AccumMulAddRecF32__DOT__accum 
						      >> 0x17U)))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
	= vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T114;
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T316 
	= (((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T122) 
	    & (~ ((0x3feU & ((0U != (7U & (IData)((vlTOPp->AccumMulAddRecF32__DOT__accum 
						   >> 0x1dU)))) 
			     << 1U)) | (1U & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__accum) 
					      >> 0x16U))))) 
	   | (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T114));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist 
	= (0xfffU & ((IData)(0x71bU) + (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T16)));
    vlTOPp->io_ignore = ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T316) 
			 << 4U);
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
	= ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T316) 
	   | (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T122));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist = 0U;
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__signOut 
	= ((~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
	   & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T114) 
	      & (IData)((vlTOPp->AccumMulAddRecF32__DOT__accum 
			 >> 0x20U))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U] 
	= (IData)((VL_ULL(0x1fffffffffffff) & VL_NEGATE_Q((QData)((IData)(
									  (1U 
									   & (IData)(
										(vlTOPp->AccumMulAddRecF32__DOT__accum 
										>> 0x20U))))))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
	= ((0xffe00000U & (((1U & (IData)((vlTOPp->AccumMulAddRecF32__DOT__accum 
					   >> 0x20U)))
			     ? 0x1ffffffU : 0U) << 0x15U)) 
	   | (IData)(((VL_ULL(0x1fffffffffffff) & VL_NEGATE_Q((QData)((IData)(
									      (1U 
									       & (IData)(
										(vlTOPp->AccumMulAddRecF32__DOT__accum 
										>> 0x20U))))))) 
		      >> 0x20U)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
	= (0x1fffffU & (((1U & (IData)((vlTOPp->AccumMulAddRecF32__DOT__accum 
					>> 0x20U)))
			  ? 0x1ffffffU : 0U) >> 0xbU));
    VL_SHIFTRS_WWI(78,78,2, __Vtemp4, vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC, 3U);
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U] 
	= ((0xfffffffeU & (__Vtemp4[0U] << 1U)) | (
						   (1U 
						    & (IData)(
							      (vlTOPp->AccumMulAddRecF32__DOT__accum 
							       >> 0x20U)))
						    ? 
						   (7U 
						    == 
						    (7U 
						     & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U]))
						    : 
						   (0U 
						    != 
						    (7U 
						     & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U]))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U] 
	= ((1U & (__Vtemp4[0U] >> 0x1fU)) | (0xfffffffeU 
					     & (__Vtemp4[1U] 
						<< 1U)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U] 
	= ((1U & (__Vtemp4[1U] >> 0x1fU)) | (0xffeU 
					     & (__Vtemp4[2U] 
						<< 1U)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddResult 
	= (VL_ULL(0xffffffffffff) & (((QData)((IData)(
						      vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U])) 
				      << 0x3fU) | (
						   ((QData)((IData)(
								    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U])) 
						    << 0x1fU) 
						   | ((QData)((IData)(
								      vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U])) 
						      >> 1U))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U] 
	= (IData)(((VL_ULL(0x1fffffffffffe) & (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddResult 
					       << 1U)) 
		   | (QData)((IData)((1U & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U])))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
	= ((0xfffe0000U & (((1U & (IData)((vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddResult 
					   >> 0x30U)))
			     ? ((IData)(1U) + ((vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U] 
						<< 0xfU) 
					       | (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U] 
						  >> 0x11U)))
			     : ((vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U] 
				 << 0xfU) | (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U] 
					     >> 0x11U))) 
			   << 0x11U)) | (IData)((((VL_ULL(0x1fffffffffffe) 
						   & (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddResult 
						      << 1U)) 
						  | (QData)((IData)(
								    (1U 
								     & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U])))) 
						 >> 0x20U)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U] 
	= (0x7ffU & (((1U & (IData)((vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddResult 
				     >> 0x30U))) ? 
		      ((IData)(1U) + ((vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U] 
				       << 0xfU) | (
						   vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U] 
						   >> 0x11U)))
		       : ((vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U] 
			   << 0xfU) | (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U] 
				       >> 0x11U))) 
		     >> 0xfU));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
	= (VL_ULL(0x3ffffffffffff) & ((1U & (IData)(
						    (vlTOPp->AccumMulAddRecF32__DOT__accum 
						     >> 0x20U)))
				       ? (~ (((QData)((IData)(
							      vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U])) 
					      << 0x27U) 
					     | (((QData)((IData)(
								 vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])) 
						 << 7U) 
						| ((QData)((IData)(
								   vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U])) 
						   >> 0x19U))))
				       : (((QData)((IData)(
							   (3U 
							    & (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U] 
							       >> 9U)))) 
					   << 0x2fU) 
					  | (VL_ULL(0x7fffffffffff) 
					     & (((QData)((IData)(
								 vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U])) 
						 << 0x26U) 
						| (((QData)((IData)(
								    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])) 
						    << 6U) 
						   | ((QData)((IData)(
								      vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U])) 
						      >> 0x1aU)))))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
	= (VL_ULL(0x7ffffffffffff) & ((0x80000U & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])
				       ? (~ (((QData)((IData)(
							      vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])) 
					      << 0x20U) 
					     | (QData)((IData)(
							       vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U]))))
				       : ((((QData)((IData)(
							    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])) 
					    << 0x20U) 
					   | (QData)((IData)(
							     vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U]))) 
					  + (QData)((IData)(
							    (1U 
							     & (IData)(
								       (vlTOPp->AccumMulAddRecF32__DOT__accum 
									>> 0x20U))))))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T17 
	= (((0x2000000U & ((IData)((vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
				    >> 0x32U)) << 0x19U)) 
	    | ((((0U != (3U & (IData)((vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
				       >> 0x30U)))) 
		 << 0x18U) | ((0U != (3U & (IData)(
						   (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
						    >> 0x2eU)))) 
			      << 0x17U)) | (((0U != 
					      (3U & (IData)(
							    (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
							     >> 0x2cU)))) 
					     << 0x16U) 
					    | (((0U 
						 != 
						 (3U 
						  & (IData)(
							    (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
							     >> 0x2aU)))) 
						<< 0x15U) 
					       | ((0U 
						   != 
						   (3U 
						    & (IData)(
							      (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
							       >> 0x28U)))) 
						  << 0x14U))))) 
	   | ((((0U != (3U & (IData)((vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
				      >> 0x26U)))) 
		<< 0x13U) | ((((0U != (3U & (IData)(
						    (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
						     >> 0x24U)))) 
			       << 0x12U) | ((0U != 
					     (3U & (IData)(
							   (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
							    >> 0x22U)))) 
					    << 0x11U)) 
			     | (((0U != (3U & (IData)(
						      (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
						       >> 0x20U)))) 
				 << 0x10U) | (((0U 
						!= 
						(3U 
						 & (IData)(
							   (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
							    >> 0x1eU)))) 
					       << 0xfU) 
					      | (((0U 
						   != 
						   (3U 
						    & (IData)(
							      (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
							       >> 0x1cU)))) 
						  << 0xeU) 
						 | ((0U 
						     != 
						     (3U 
						      & (IData)(
								(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
								 >> 0x1aU)))) 
						    << 0xdU)))))) 
	      | ((((0U != (3U & (IData)((vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
					 >> 0x18U)))) 
		   << 0xcU) | (((0U != (3U & (IData)(
						     (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
						      >> 0x16U)))) 
				<< 0xbU) | ((0U != 
					     (3U & (IData)(
							   (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
							    >> 0x14U)))) 
					    << 0xaU))) 
		 | ((((0U != (3U & (IData)((vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
					    >> 0x12U)))) 
		      << 9U) | (((0U != (3U & (IData)(
						      (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
						       >> 0x10U)))) 
				 << 8U) | ((0U != (3U 
						   & (IData)(
							     (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
							      >> 0xeU)))) 
					   << 7U))) 
		    | (((0U != (3U & (IData)((vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
					      >> 0xcU)))) 
			<< 6U) | ((((0U != (3U & (IData)(
							 (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
							  >> 0xaU)))) 
				    << 5U) | ((0U != 
					       (3U 
						& (IData)(
							  (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
							   >> 8U)))) 
					      << 4U)) 
				  | (((0U != (3U & (IData)(
							   (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
							    >> 6U)))) 
				      << 3U) | (((0U 
						  != 
						  (3U 
						   & (IData)(
							     (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
							      >> 4U)))) 
						 << 2U) 
						| (((0U 
						     != 
						     (3U 
						      & (IData)(
								(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
								 >> 2U)))) 
						    << 1U) 
						   | (0U 
						      != 
						      (3U 
						       & (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum))))))))))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T138 
	= ((0xfU & (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T17 
		    >> 0x14U)) | (0xf0U & (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T17 
					   >> 0xcU)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T161 
	= ((0xffU & (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T17 
		     >> 8U)) | (0xff00U & (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T17 
					   << 8U)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T134 
	= ((0x33U & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T138) 
		     >> 2U)) | (0xccU & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T138) 
					 << 2U)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T157 
	= ((0xf0fU & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T161) 
		      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T161) 
					    << 4U)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T153 
	= ((0x3333U & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T157) 
		       >> 2U)) | (0xccccU & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T157) 
					     << 2U)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11 
	= (((0x1555400U & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T153) 
			   << 9U)) | (0x2aaa800U & 
				      ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T153) 
				       << 0xbU))) | 
	   (((0x154U & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T134) 
			<< 1U)) | (0x2a8U & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T134) 
					     << 3U))) 
	    | ((2U & (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T17 
		      >> 0x17U)) | (1U & (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T17 
					  >> 0x19U)))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T327 
	= ((1U & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
	    ? 0U : ((2U & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
		     ? 1U : ((4U & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
			      ? 2U : ((8U & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
				       ? 3U : ((0x10U 
						& vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
					        ? 4U
					        : (
						   (0x20U 
						    & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
						    ? 5U
						    : 
						   ((0x40U 
						     & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
						     ? 6U
						     : 
						    ((0x80U 
						      & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
						      ? 7U
						      : 
						     ((0x100U 
						       & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
						       ? 8U
						       : 
						      ((0x200U 
							& vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
						        ? 9U
						        : 
						       ((0x400U 
							 & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
							 ? 0xaU
							 : 
							((0x800U 
							  & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
							  ? 0xbU
							  : 
							 ((0x1000U 
							   & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
							   ? 0xcU
							   : 
							  ((0x2000U 
							    & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
							    ? 0xdU
							    : 
							   ((0x4000U 
							     & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
							     ? 0xeU
							     : 
							    ((0x8000U 
							      & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
							      ? 0xfU
							      : 
							     ((0x10000U 
							       & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
							       ? 0x10U
							       : 
							      ((0x20000U 
								& vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
							        ? 0x11U
							        : 
							       ((0x40000U 
								 & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
								 ? 0x12U
								 : 
								((0x80000U 
								  & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
								  ? 0x13U
								  : 
								 ((0x100000U 
								   & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
								   ? 0x14U
								   : 
								  ((0x200000U 
								    & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
								    ? 0x15U
								    : 
								   ((0x400000U 
								     & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
								     ? 0x16U
								     : 
								    ((0x800000U 
								      & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
								      ? 0x17U
								      : 
								     ((0x1000000U 
								       & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
								       ? 0x18U
								       : 0x19U)))))))))))))))))))))))));
    VL_EXTEND_WQ(114,51, __Vtemp11, vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum);
    VL_SHIFTL_WWI(114,114,6, __Vtemp12, __Vtemp11, 
		  (0x3fU & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T327) 
			    << 1U)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T217[0U] 
	= __Vtemp12[0U];
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T217[1U] 
	= __Vtemp12[1U];
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T217[2U] 
	= __Vtemp12[2U];
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T217[3U] 
	= (0x3ffffU & __Vtemp12[3U]);
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp 
	= (0x3ffU & (((IData)(0x303U) + (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T16)) 
		     - (0x3fU & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T327) 
				 << 1U))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
	= ((0x7fffffeU & ((0x3fffff80U & (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T217[1U] 
					  << 7U)) | 
			  (0x7eU & (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T217[0U] 
				    >> 0x19U)))) | 
	   ((0U != (7U & ((vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T217[1U] 
			   << 9U) | (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T217[0U] 
				     >> 0x17U)))) | 
	    (0U != (((0x40U & (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T17 
			       >> 6U)) | ((((0U != 
					     (3U & 
					      (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T17 
					       >> 0xaU))) 
					    << 5U) 
					   | ((0U != 
					       (3U 
						& (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T17 
						   >> 8U))) 
					      << 4U)) 
					  | (((0U != 
					       (3U 
						& (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T17 
						   >> 6U))) 
					      << 3U) 
					     | (((0U 
						  != 
						  (3U 
						   & (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T17 
						      >> 4U))) 
						 << 2U) 
						| (((0U 
						     != 
						     (3U 
						      & (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T17 
							 >> 2U))) 
						    << 1U) 
						   | (0U 
						      != 
						      (3U 
						       & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T17))))))) 
		    & (((0x20U & (VL_SHIFTRS_III(32,17,4, 0x10000U, 
						 (0xfU 
						  & (~ 
						     (0x1fU 
						      & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T327) 
							 >> 1U))))) 
				  << 4U)) | (0x10U 
					     & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
							       (0xfU 
								& (~ 
								   (0x1fU 
								    & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T327) 
								       >> 1U))))) 
						<< 2U))) 
		       | (((8U & VL_SHIFTRS_III(32,17,4, 0x10000U, 
						(0xfU 
						 & (~ 
						    (0x1fU 
						     & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T327) 
							>> 1U)))))) 
			   | (4U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
						   (0xfU 
						    & (~ 
						       (0x1fU 
							& ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T327) 
							   >> 1U))))) 
				    >> 2U))) | ((2U 
						 & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
								   (0xfU 
								    & (~ 
								       (0x1fU 
									& ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T327) 
									   >> 1U))))) 
						    >> 4U)) 
						| (1U 
						   & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
								     (0xfU 
								      & (~ 
									 (0x1fU 
									  & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T327) 
									     >> 1U))))) 
						      >> 6U)))))))));
    __Vtemp15[0U] = 0U;
    __Vtemp15[1U] = 0U;
    __Vtemp15[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp16, __Vtemp15, (0x3fU 
						   & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp19[0U] = 0U;
    __Vtemp19[1U] = 0U;
    __Vtemp19[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp20, __Vtemp19, (0x3fU 
						   & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T65 
	= ((0xffU & ((0x4000U & (__Vtemp16[2U] << 0xeU)) 
		     | (__Vtemp16[1U] >> 0x12U))) | 
	   (0xff00U & ((0x40000000U & (__Vtemp20[2U] 
				       << 0x1eU)) | 
		       (0x3fffff00U & (__Vtemp20[1U] 
				       >> 2U)))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T61 
	= ((0xf0fU & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T65) 
		      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T65) 
					    << 4U)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T57 
	= ((0x3333U & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T61) 
		       >> 2U)) | (0xccccU & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T61) 
					     << 2U)));
    __Vtemp23[0U] = 0U;
    __Vtemp23[1U] = 0U;
    __Vtemp23[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp24, __Vtemp23, (0x3fU 
						   & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp27[0U] = 0U;
    __Vtemp27[1U] = 0U;
    __Vtemp27[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp28, __Vtemp27, (0x3fU 
						   & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp31[0U] = 0U;
    __Vtemp31[1U] = 0U;
    __Vtemp31[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp32, __Vtemp31, (0x3fU 
						   & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp35[0U] = 0U;
    __Vtemp35[1U] = 0U;
    __Vtemp35[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp36, __Vtemp35, (0x3fU 
						   & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp39[0U] = 0U;
    __Vtemp39[1U] = 0U;
    __Vtemp39[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp40, __Vtemp39, (0x3fU 
						   & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp43[0U] = 0U;
    __Vtemp43[1U] = 0U;
    __Vtemp43[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp44, __Vtemp43, (0x3fU 
						   & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp47[0U] = 0U;
    __Vtemp47[1U] = 0U;
    __Vtemp47[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp48, __Vtemp47, (0x3fU 
						   & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp51[0U] = 0U;
    __Vtemp51[1U] = 0U;
    __Vtemp51[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp52, __Vtemp51, (0x3fU 
						   & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp55[0U] = 0U;
    __Vtemp55[1U] = 0U;
    __Vtemp55[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp56, __Vtemp55, (0x3fU 
						   & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T11 
	= (((0x100U & (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))
	     ? 0U : ((0x80U & (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))
		      ? ((0x40U & (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))
			  ? 0U : ((4U & (__Vtemp24[0U] 
					 << 2U)) | 
				  ((2U & __Vtemp28[0U]) 
				   | (1U & (__Vtemp32[0U] 
					    >> 2U)))))
		      : (7U | (0x1fffff8U & ((~ ((0x40U 
						  & (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))
						  ? 
						 (~ 
						  (((0x155540U 
						     & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T57) 
							<< 5U)) 
						    | (0x2aaa80U 
						       & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T57) 
							  << 7U))) 
						   | (((0x20U 
							& (__Vtemp36[1U] 
							   >> 0x15U)) 
						       | (0x10U 
							  & (__Vtemp40[1U] 
							     >> 0x17U))) 
						      | (((8U 
							   & (__Vtemp44[1U] 
							      >> 0x19U)) 
							  | (4U 
							     & (__Vtemp48[1U] 
								>> 0x1bU))) 
							 | ((2U 
							     & (__Vtemp52[1U] 
								>> 0x1dU)) 
							    | (1U 
							       & (__Vtemp56[1U] 
								  >> 0x1fU)))))))
						  : 0U)) 
					     << 3U))))) 
	   | (1U & (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
		    >> 0x1aU)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T7 
	= (0x3ffffffU & (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
			 & (1U | (0x7ffffffeU & (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T11 
						 << 1U)))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T82 
	= (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
	   & ((~ (0x3ffffffU & (1U | (0x7ffffffeU & 
				      (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T11 
				       << 1U))))) & 
	      (3U | (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T11 
		     << 2U))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T5 
	= ((0U != vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T82) 
	   | (0U != vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T7));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T90 
	= ((0U != vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T82)
	    ? (0x3ffffffU & (((IData)(1U) + (0x1ffffffU 
					     & ((vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
						 >> 2U) 
						| (0x3fffffffU 
						   & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T11)))) 
			     & (~ (((0U != vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T82) 
				    & (0U == vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T7))
				    ? (0x7ffffffU & 
				       (1U | (0x7ffffffeU 
					      & (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T11 
						 << 1U))))
				    : 0U)))) : (0x1ffffffU 
						& ((vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
						    & (~ 
						       (3U 
							| (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T11 
							   << 2U)))) 
						   >> 2U)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T86 
	= (0x1fffU & (((0x400U & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp) 
				  << 1U)) | (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp)) 
		      + ((((0x4000000U & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T90)
			    ? 0xffU : 0U) << 4U) | 
			 (7U & (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T90 
				>> 0x18U)))));
}

VL_INLINE_OPT void VAccumMulAddRecF32::_sequent__TOP__3(VAccumMulAddRecF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAccumMulAddRecF32::_sequent__TOP__3\n"); );
    VAccumMulAddRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp59,95,0,3);
    VL_SIGW(__Vtemp60,95,0,3);
    VL_SIGW(__Vtemp64,95,0,3);
    VL_SIGW(__Vtemp71,127,0,4);
    VL_SIGW(__Vtemp72,127,0,4);
    VL_SIGW(__Vtemp75,95,0,3);
    VL_SIGW(__Vtemp76,95,0,3);
    VL_SIGW(__Vtemp79,95,0,3);
    VL_SIGW(__Vtemp80,95,0,3);
    VL_SIGW(__Vtemp83,95,0,3);
    VL_SIGW(__Vtemp84,95,0,3);
    VL_SIGW(__Vtemp87,95,0,3);
    VL_SIGW(__Vtemp88,95,0,3);
    VL_SIGW(__Vtemp91,95,0,3);
    VL_SIGW(__Vtemp92,95,0,3);
    VL_SIGW(__Vtemp95,95,0,3);
    VL_SIGW(__Vtemp96,95,0,3);
    VL_SIGW(__Vtemp99,95,0,3);
    VL_SIGW(__Vtemp100,95,0,3);
    VL_SIGW(__Vtemp103,95,0,3);
    VL_SIGW(__Vtemp104,95,0,3);
    VL_SIGW(__Vtemp107,95,0,3);
    VL_SIGW(__Vtemp108,95,0,3);
    VL_SIGW(__Vtemp111,95,0,3);
    VL_SIGW(__Vtemp112,95,0,3);
    VL_SIGW(__Vtemp115,95,0,3);
    VL_SIGW(__Vtemp116,95,0,3);
    // Body
    // ALWAYS at AccumMulAddRecF32.v:2025
    vlTOPp->AccumMulAddRecF32__DOT__accum = ((IData)(vlTOPp->reset)
					      ? VL_ULL(0x38d40000)
					      : (((QData)((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__signOut)) 
						  << 0x20U) 
						 | (QData)((IData)(
								   ((((0x1f800000U 
								       & (((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T86) 
									   & (~ 
									      ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
									        ? 0x40U
									        : 0U))) 
									  << 0x17U)) 
								      | (((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
									   ? 0x180U
									   : 0U) 
									 << 0x17U)) 
								     | (((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
									  ? 0x1c0U
									  : 0U) 
									<< 0x17U)) 
								    | ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
								        ? 0x400000U
								        : 0U))))));
    vlTOPp->io_out = vlTOPp->AccumMulAddRecF32__DOT__accum;
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T114 
	= ((3U == (3U & (IData)((vlTOPp->AccumMulAddRecF32__DOT__accum 
				 >> 0x1eU)))) & (~ (IData)(
							   (vlTOPp->AccumMulAddRecF32__DOT__accum 
							    >> 0x1dU))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T122 
	= ((3U == (3U & (IData)((vlTOPp->AccumMulAddRecF32__DOT__accum 
				 >> 0x1eU)))) & (IData)(
							(vlTOPp->AccumMulAddRecF32__DOT__accum 
							 >> 0x1dU)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T16 
	= (0xfffU & ((IData)(1U) + (0x1ffU & (IData)(
						     (vlTOPp->AccumMulAddRecF32__DOT__accum 
						      >> 0x17U)))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
	= ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T114) 
	   | (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T316 
	= (((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T122) 
	    & (~ ((0x3feU & ((0U != (7U & (IData)((vlTOPp->AccumMulAddRecF32__DOT__accum 
						   >> 0x1dU)))) 
			     << 1U)) | (1U & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__accum) 
					      >> 0x16U))))) 
	   | (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T114));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist 
	= (0xfffU & ((IData)(0x71bU) + (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T16)));
    vlTOPp->io_ignore = (((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T316) 
			  << 4U) | (((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
				     << 2U) | (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
	= ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T316) 
	   | (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T122));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist 
	= (0x7fU & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign)
		     ? 0U : ((0x4aU > (0x3ffU & (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist)))
			      ? (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist)
			      : 0x4aU)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__signOut 
	= ((~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
	   & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T114) 
	      & (IData)((vlTOPp->AccumMulAddRecF32__DOT__accum 
			 >> 0x20U))));
    __Vtemp59[0U] = (IData)((VL_ULL(0x1fffffffffffff) 
			     & VL_NEGATE_Q((QData)((IData)(
							   (1U 
							    & (IData)(
								      (vlTOPp->AccumMulAddRecF32__DOT__accum 
								       >> 0x20U))))))));
    __Vtemp59[1U] = ((0xffe00000U & (((1U & (IData)(
						    (vlTOPp->AccumMulAddRecF32__DOT__accum 
						     >> 0x20U)))
				       ? 0x1ffffffU
				       : 0U) << 0x15U)) 
		     | (IData)(((VL_ULL(0x1fffffffffffff) 
				 & VL_NEGATE_Q((QData)((IData)(
							       (1U 
								& (IData)(
									  (vlTOPp->AccumMulAddRecF32__DOT__accum 
									   >> 0x20U))))))) 
				>> 0x20U)));
    __Vtemp59[2U] = (0x1fffffU & (((1U & (IData)((vlTOPp->AccumMulAddRecF32__DOT__accum 
						  >> 0x20U)))
				    ? 0x1ffffffU : 0U) 
				  >> 0xbU));
    VL_SHIFTRS_WWI(78,78,7, __Vtemp60, __Vtemp59, (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U] 
	= __Vtemp60[0U];
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
	= __Vtemp60[1U];
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
	= (0x3fffU & __Vtemp60[2U]);
    VL_SHIFTRS_WWI(78,78,2, __Vtemp64, vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC, 3U);
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U] 
	= ((0xfffffffeU & (__Vtemp64[0U] << 1U)) | 
	   ((1U & (IData)((vlTOPp->AccumMulAddRecF32__DOT__accum 
			   >> 0x20U))) ? ((7U == (7U 
						  & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
					  & (0U == (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T3)))
	     : ((0U != (7U & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
		| (0U != (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T3)))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U] 
	= ((1U & (__Vtemp64[0U] >> 0x1fU)) | (0xfffffffeU 
					      & (__Vtemp64[1U] 
						 << 1U)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U] 
	= ((1U & (__Vtemp64[1U] >> 0x1fU)) | (0xffeU 
					      & (__Vtemp64[2U] 
						 << 1U)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddResult 
	= (VL_ULL(0xffffffffffff) & (((QData)((IData)(
						      vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U])) 
				      << 0x3fU) | (
						   ((QData)((IData)(
								    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U])) 
						    << 0x1fU) 
						   | ((QData)((IData)(
								      vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U])) 
						      >> 1U))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U] 
	= (IData)(((VL_ULL(0x1fffffffffffe) & (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddResult 
					       << 1U)) 
		   | (QData)((IData)((1U & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U])))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
	= ((0xfffe0000U & (((1U & (IData)((vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddResult 
					   >> 0x30U)))
			     ? ((IData)(1U) + ((vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U] 
						<< 0xfU) 
					       | (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U] 
						  >> 0x11U)))
			     : ((vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U] 
				 << 0xfU) | (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U] 
					     >> 0x11U))) 
			   << 0x11U)) | (IData)((((VL_ULL(0x1fffffffffffe) 
						   & (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddResult 
						      << 1U)) 
						  | (QData)((IData)(
								    (1U 
								     & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U])))) 
						 >> 0x20U)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U] 
	= (0x7ffU & (((1U & (IData)((vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddResult 
				     >> 0x30U))) ? 
		      ((IData)(1U) + ((vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U] 
				       << 0xfU) | (
						   vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U] 
						   >> 0x11U)))
		       : ((vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U] 
			   << 0xfU) | (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U] 
				       >> 0x11U))) 
		     >> 0xfU));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
	= (VL_ULL(0x3ffffffffffff) & ((1U & (IData)(
						    (vlTOPp->AccumMulAddRecF32__DOT__accum 
						     >> 0x20U)))
				       ? (~ (((QData)((IData)(
							      vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U])) 
					      << 0x27U) 
					     | (((QData)((IData)(
								 vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])) 
						 << 7U) 
						| ((QData)((IData)(
								   vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U])) 
						   >> 0x19U))))
				       : (((QData)((IData)(
							   (3U 
							    & (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U] 
							       >> 9U)))) 
					   << 0x2fU) 
					  | (VL_ULL(0x7fffffffffff) 
					     & (((QData)((IData)(
								 vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U])) 
						 << 0x26U) 
						| (((QData)((IData)(
								    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])) 
						    << 6U) 
						   | ((QData)((IData)(
								      vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U])) 
						      >> 0x1aU)))))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
	= (VL_ULL(0x7ffffffffffff) & ((0x80000U & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])
				       ? (~ (((QData)((IData)(
							      vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])) 
					      << 0x20U) 
					     | (QData)((IData)(
							       vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U]))))
				       : ((((QData)((IData)(
							    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])) 
					    << 0x20U) 
					   | (QData)((IData)(
							     vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U]))) 
					  + (QData)((IData)(
							    (1U 
							     & (IData)(
								       (vlTOPp->AccumMulAddRecF32__DOT__accum 
									>> 0x20U))))))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T17 
	= (((0x2000000U & ((IData)((vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
				    >> 0x32U)) << 0x19U)) 
	    | ((((0U != (3U & (IData)((vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
				       >> 0x30U)))) 
		 << 0x18U) | ((0U != (3U & (IData)(
						   (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
						    >> 0x2eU)))) 
			      << 0x17U)) | (((0U != 
					      (3U & (IData)(
							    (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
							     >> 0x2cU)))) 
					     << 0x16U) 
					    | (((0U 
						 != 
						 (3U 
						  & (IData)(
							    (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
							     >> 0x2aU)))) 
						<< 0x15U) 
					       | ((0U 
						   != 
						   (3U 
						    & (IData)(
							      (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
							       >> 0x28U)))) 
						  << 0x14U))))) 
	   | ((((0U != (3U & (IData)((vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
				      >> 0x26U)))) 
		<< 0x13U) | ((((0U != (3U & (IData)(
						    (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
						     >> 0x24U)))) 
			       << 0x12U) | ((0U != 
					     (3U & (IData)(
							   (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
							    >> 0x22U)))) 
					    << 0x11U)) 
			     | (((0U != (3U & (IData)(
						      (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
						       >> 0x20U)))) 
				 << 0x10U) | (((0U 
						!= 
						(3U 
						 & (IData)(
							   (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
							    >> 0x1eU)))) 
					       << 0xfU) 
					      | (((0U 
						   != 
						   (3U 
						    & (IData)(
							      (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
							       >> 0x1cU)))) 
						  << 0xeU) 
						 | ((0U 
						     != 
						     (3U 
						      & (IData)(
								(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
								 >> 0x1aU)))) 
						    << 0xdU)))))) 
	      | ((((0U != (3U & (IData)((vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
					 >> 0x18U)))) 
		   << 0xcU) | (((0U != (3U & (IData)(
						     (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
						      >> 0x16U)))) 
				<< 0xbU) | ((0U != 
					     (3U & (IData)(
							   (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
							    >> 0x14U)))) 
					    << 0xaU))) 
		 | ((((0U != (3U & (IData)((vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
					    >> 0x12U)))) 
		      << 9U) | (((0U != (3U & (IData)(
						      (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
						       >> 0x10U)))) 
				 << 8U) | ((0U != (3U 
						   & (IData)(
							     (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
							      >> 0xeU)))) 
					   << 7U))) 
		    | (((0U != (3U & (IData)((vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
					      >> 0xcU)))) 
			<< 6U) | ((((0U != (3U & (IData)(
							 (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
							  >> 0xaU)))) 
				    << 5U) | ((0U != 
					       (3U 
						& (IData)(
							  (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
							   >> 8U)))) 
					      << 4U)) 
				  | (((0U != (3U & (IData)(
							   (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
							    >> 6U)))) 
				      << 3U) | (((0U 
						  != 
						  (3U 
						   & (IData)(
							     (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
							      >> 4U)))) 
						 << 2U) 
						| (((0U 
						     != 
						     (3U 
						      & (IData)(
								(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
								 >> 2U)))) 
						    << 1U) 
						   | (0U 
						      != 
						      (3U 
						       & (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum))))))))))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T138 
	= ((0xfU & (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T17 
		    >> 0x14U)) | (0xf0U & (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T17 
					   >> 0xcU)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T161 
	= ((0xffU & (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T17 
		     >> 8U)) | (0xff00U & (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T17 
					   << 8U)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T134 
	= ((0x33U & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T138) 
		     >> 2U)) | (0xccU & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T138) 
					 << 2U)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T157 
	= ((0xf0fU & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T161) 
		      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T161) 
					    << 4U)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T153 
	= ((0x3333U & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T157) 
		       >> 2U)) | (0xccccU & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T157) 
					     << 2U)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11 
	= (((0x1555400U & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T153) 
			   << 9U)) | (0x2aaa800U & 
				      ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T153) 
				       << 0xbU))) | 
	   (((0x154U & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T134) 
			<< 1U)) | (0x2a8U & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T134) 
					     << 3U))) 
	    | ((2U & (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T17 
		      >> 0x17U)) | (1U & (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T17 
					  >> 0x19U)))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T327 
	= ((1U & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
	    ? 0U : ((2U & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
		     ? 1U : ((4U & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
			      ? 2U : ((8U & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
				       ? 3U : ((0x10U 
						& vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
					        ? 4U
					        : (
						   (0x20U 
						    & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
						    ? 5U
						    : 
						   ((0x40U 
						     & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
						     ? 6U
						     : 
						    ((0x80U 
						      & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
						      ? 7U
						      : 
						     ((0x100U 
						       & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
						       ? 8U
						       : 
						      ((0x200U 
							& vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
						        ? 9U
						        : 
						       ((0x400U 
							 & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
							 ? 0xaU
							 : 
							((0x800U 
							  & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
							  ? 0xbU
							  : 
							 ((0x1000U 
							   & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
							   ? 0xcU
							   : 
							  ((0x2000U 
							    & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
							    ? 0xdU
							    : 
							   ((0x4000U 
							     & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
							     ? 0xeU
							     : 
							    ((0x8000U 
							      & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
							      ? 0xfU
							      : 
							     ((0x10000U 
							       & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
							       ? 0x10U
							       : 
							      ((0x20000U 
								& vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
							        ? 0x11U
							        : 
							       ((0x40000U 
								 & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
								 ? 0x12U
								 : 
								((0x80000U 
								  & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
								  ? 0x13U
								  : 
								 ((0x100000U 
								   & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
								   ? 0x14U
								   : 
								  ((0x200000U 
								    & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
								    ? 0x15U
								    : 
								   ((0x400000U 
								     & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
								     ? 0x16U
								     : 
								    ((0x800000U 
								      & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
								      ? 0x17U
								      : 
								     ((0x1000000U 
								       & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11)
								       ? 0x18U
								       : 0x19U)))))))))))))))))))))))));
    VL_EXTEND_WQ(114,51, __Vtemp71, vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum);
    VL_SHIFTL_WWI(114,114,6, __Vtemp72, __Vtemp71, 
		  (0x3fU & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T327) 
			    << 1U)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T217[0U] 
	= __Vtemp72[0U];
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T217[1U] 
	= __Vtemp72[1U];
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T217[2U] 
	= __Vtemp72[2U];
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T217[3U] 
	= (0x3ffffU & __Vtemp72[3U]);
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp 
	= (0x3ffU & (((IData)(0x303U) + (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T16)) 
		     - (0x3fU & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T327) 
				 << 1U))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
	= ((0x7fffffeU & ((0x3fffff80U & (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T217[1U] 
					  << 7U)) | 
			  (0x7eU & (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T217[0U] 
				    >> 0x19U)))) | 
	   ((0U != (7U & ((vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T217[1U] 
			   << 9U) | (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T217[0U] 
				     >> 0x17U)))) | 
	    (0U != (((0x40U & (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T17 
			       >> 6U)) | ((((0U != 
					     (3U & 
					      (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T17 
					       >> 0xaU))) 
					    << 5U) 
					   | ((0U != 
					       (3U 
						& (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T17 
						   >> 8U))) 
					      << 4U)) 
					  | (((0U != 
					       (3U 
						& (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T17 
						   >> 6U))) 
					      << 3U) 
					     | (((0U 
						  != 
						  (3U 
						   & (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T17 
						      >> 4U))) 
						 << 2U) 
						| (((0U 
						     != 
						     (3U 
						      & (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T17 
							 >> 2U))) 
						    << 1U) 
						   | (0U 
						      != 
						      (3U 
						       & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T17))))))) 
		    & (((0x20U & (VL_SHIFTRS_III(32,17,4, 0x10000U, 
						 (0xfU 
						  & (~ 
						     (0x1fU 
						      & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T327) 
							 >> 1U))))) 
				  << 4U)) | (0x10U 
					     & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
							       (0xfU 
								& (~ 
								   (0x1fU 
								    & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T327) 
								       >> 1U))))) 
						<< 2U))) 
		       | (((8U & VL_SHIFTRS_III(32,17,4, 0x10000U, 
						(0xfU 
						 & (~ 
						    (0x1fU 
						     & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T327) 
							>> 1U)))))) 
			   | (4U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
						   (0xfU 
						    & (~ 
						       (0x1fU 
							& ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T327) 
							   >> 1U))))) 
				    >> 2U))) | ((2U 
						 & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
								   (0xfU 
								    & (~ 
								       (0x1fU 
									& ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T327) 
									   >> 1U))))) 
						    >> 4U)) 
						| (1U 
						   & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
								     (0xfU 
								      & (~ 
									 (0x1fU 
									  & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T327) 
									     >> 1U))))) 
						      >> 6U)))))))));
    __Vtemp75[0U] = 0U;
    __Vtemp75[1U] = 0U;
    __Vtemp75[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp76, __Vtemp75, (0x3fU 
						   & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp79[0U] = 0U;
    __Vtemp79[1U] = 0U;
    __Vtemp79[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp80, __Vtemp79, (0x3fU 
						   & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T65 
	= ((0xffU & ((0x4000U & (__Vtemp76[2U] << 0xeU)) 
		     | (__Vtemp76[1U] >> 0x12U))) | 
	   (0xff00U & ((0x40000000U & (__Vtemp80[2U] 
				       << 0x1eU)) | 
		       (0x3fffff00U & (__Vtemp80[1U] 
				       >> 2U)))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T61 
	= ((0xf0fU & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T65) 
		      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T65) 
					    << 4U)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T57 
	= ((0x3333U & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T61) 
		       >> 2U)) | (0xccccU & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T61) 
					     << 2U)));
    __Vtemp83[0U] = 0U;
    __Vtemp83[1U] = 0U;
    __Vtemp83[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp84, __Vtemp83, (0x3fU 
						   & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp87[0U] = 0U;
    __Vtemp87[1U] = 0U;
    __Vtemp87[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp88, __Vtemp87, (0x3fU 
						   & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp91[0U] = 0U;
    __Vtemp91[1U] = 0U;
    __Vtemp91[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp92, __Vtemp91, (0x3fU 
						   & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp95[0U] = 0U;
    __Vtemp95[1U] = 0U;
    __Vtemp95[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp96, __Vtemp95, (0x3fU 
						   & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp99[0U] = 0U;
    __Vtemp99[1U] = 0U;
    __Vtemp99[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp100, __Vtemp99, 
		   (0x3fU & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp103[0U] = 0U;
    __Vtemp103[1U] = 0U;
    __Vtemp103[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp104, __Vtemp103, 
		   (0x3fU & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp107[0U] = 0U;
    __Vtemp107[1U] = 0U;
    __Vtemp107[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp108, __Vtemp107, 
		   (0x3fU & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp111[0U] = 0U;
    __Vtemp111[1U] = 0U;
    __Vtemp111[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp112, __Vtemp111, 
		   (0x3fU & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp115[0U] = 0U;
    __Vtemp115[1U] = 0U;
    __Vtemp115[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp116, __Vtemp115, 
		   (0x3fU & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T11 
	= (((0x100U & (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))
	     ? 0U : ((0x80U & (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))
		      ? ((0x40U & (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))
			  ? 0U : ((4U & (__Vtemp84[0U] 
					 << 2U)) | 
				  ((2U & __Vtemp88[0U]) 
				   | (1U & (__Vtemp92[0U] 
					    >> 2U)))))
		      : (7U | (0x1fffff8U & ((~ ((0x40U 
						  & (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))
						  ? 
						 (~ 
						  (((0x155540U 
						     & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T57) 
							<< 5U)) 
						    | (0x2aaa80U 
						       & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T57) 
							  << 7U))) 
						   | (((0x20U 
							& (__Vtemp96[1U] 
							   >> 0x15U)) 
						       | (0x10U 
							  & (__Vtemp100[1U] 
							     >> 0x17U))) 
						      | (((8U 
							   & (__Vtemp104[1U] 
							      >> 0x19U)) 
							  | (4U 
							     & (__Vtemp108[1U] 
								>> 0x1bU))) 
							 | ((2U 
							     & (__Vtemp112[1U] 
								>> 0x1dU)) 
							    | (1U 
							       & (__Vtemp116[1U] 
								  >> 0x1fU)))))))
						  : 0U)) 
					     << 3U))))) 
	   | (1U & (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
		    >> 0x1aU)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T7 
	= (0x3ffffffU & (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
			 & (1U | (0x7ffffffeU & (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T11 
						 << 1U)))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T82 
	= (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
	   & ((~ (0x3ffffffU & (1U | (0x7ffffffeU & 
				      (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T11 
				       << 1U))))) & 
	      (3U | (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T11 
		     << 2U))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T5 
	= ((0U != vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T82) 
	   | (0U != vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T7));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T90 
	= ((0U != vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T82)
	    ? (0x3ffffffU & (((IData)(1U) + (0x1ffffffU 
					     & ((vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
						 >> 2U) 
						| (0x3fffffffU 
						   & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T11)))) 
			     & (~ (((0U != vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T82) 
				    & (0U == vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T7))
				    ? (0x7ffffffU & 
				       (1U | (0x7ffffffeU 
					      & (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T11 
						 << 1U))))
				    : 0U)))) : (0x1ffffffU 
						& ((vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
						    & (~ 
						       (3U 
							| (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T11 
							   << 2U)))) 
						   >> 2U)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T86 
	= (0x1fffU & (((0x400U & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp) 
				  << 1U)) | (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp)) 
		      + ((((0x4000000U & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T90)
			    ? 0xffU : 0U) << 4U) | 
			 (7U & (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T90 
				>> 0x18U)))));
}

void VAccumMulAddRecF32::_eval(VAccumMulAddRecF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAccumMulAddRecF32::_eval\n"); );
    VAccumMulAddRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__3(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VAccumMulAddRecF32::_eval_initial(VAccumMulAddRecF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAccumMulAddRecF32::_eval_initial\n"); );
    VAccumMulAddRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VAccumMulAddRecF32::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAccumMulAddRecF32::final\n"); );
    // Variables
    VAccumMulAddRecF32__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAccumMulAddRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAccumMulAddRecF32::_eval_settle(VAccumMulAddRecF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAccumMulAddRecF32::_eval_settle\n"); );
    VAccumMulAddRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData VAccumMulAddRecF32::_change_request(VAccumMulAddRecF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAccumMulAddRecF32::_change_request\n"); );
    VAccumMulAddRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VAccumMulAddRecF32::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAccumMulAddRecF32::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
	Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VAccumMulAddRecF32::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAccumMulAddRecF32::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_out = VL_RAND_RESET_Q(33);
    io_out2 = VL_RAND_RESET_Q(33);
    io_out3 = VL_RAND_RESET_I(32);
    io_ignore = VL_RAND_RESET_I(5);
    AccumMulAddRecF32__DOT__accum = VL_RAND_RESET_Q(33);
    AccumMulAddRecF32__DOT__initvar = VL_RAND_RESET_I(32);
    AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddResult = VL_RAND_RESET_Q(50);
    VL_RAND_RESET_W(76,AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC);
    AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T3 = VL_RAND_RESET_I(7);
    AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist = VL_RAND_RESET_I(7);
    AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist = VL_RAND_RESET_I(12);
    AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T16 = VL_RAND_RESET_I(12);
    AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(78,AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC);
    AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T114 = VL_RAND_RESET_I(1);
    AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T122 = VL_RAND_RESET_I(1);
    AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig = VL_RAND_RESET_I(27);
    AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T327 = VL_RAND_RESET_I(5);
    AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T11 = VL_RAND_RESET_I(26);
    AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T17 = VL_RAND_RESET_I(26);
    AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum = VL_RAND_RESET_Q(51);
    VL_RAND_RESET_W(75,AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum);
    AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T134 = VL_RAND_RESET_I(8);
    AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T138 = VL_RAND_RESET_I(8);
    AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T153 = VL_RAND_RESET_I(16);
    AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T157 = VL_RAND_RESET_I(16);
    AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T161 = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(114,AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T217);
    AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum = VL_RAND_RESET_Q(50);
    AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp = VL_RAND_RESET_I(10);
    AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T316 = VL_RAND_RESET_I(1);
    AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T5 = VL_RAND_RESET_I(1);
    AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T7 = VL_RAND_RESET_I(27);
    AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T11 = VL_RAND_RESET_I(25);
    AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T57 = VL_RAND_RESET_I(16);
    AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T61 = VL_RAND_RESET_I(16);
    AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T65 = VL_RAND_RESET_I(16);
    AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T82 = VL_RAND_RESET_I(27);
    AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T86 = VL_RAND_RESET_I(13);
    AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T90 = VL_RAND_RESET_I(27);
    AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut = VL_RAND_RESET_I(1);
    AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow = VL_RAND_RESET_I(1);
    AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__signOut = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
