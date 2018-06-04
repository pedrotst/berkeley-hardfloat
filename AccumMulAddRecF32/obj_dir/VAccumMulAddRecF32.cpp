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

void VAccumMulAddRecF32::_settle__TOP__1(VAccumMulAddRecF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAccumMulAddRecF32::_settle__TOP__1\n"); );
    VAccumMulAddRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T3 = 0U;
}

void VAccumMulAddRecF32::_initial__TOP__2(VAccumMulAddRecF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAccumMulAddRecF32::_initial__TOP__2\n"); );
    VAccumMulAddRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at AccumMulAddRecF32.v:2042
    vlTOPp->AccumMulAddRecF32__DOT__accum = (VL_ULL(0x1ffffffff) 
					     & (((QData)((IData)(
								 VL_RANDOM_I(32))) 
						 << 0x20U) 
						| (QData)((IData)(
								  VL_RANDOM_I(32)))));
}

VL_INLINE_OPT void VAccumMulAddRecF32::_sequent__TOP__3(VAccumMulAddRecF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAccumMulAddRecF32::_sequent__TOP__3\n"); );
    VAccumMulAddRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp2,95,0,3);
    VL_SIGW(__Vtemp3,95,0,3);
    VL_SIGW(__Vtemp7,95,0,3);
    VL_SIGW(__Vtemp14,127,0,4);
    VL_SIGW(__Vtemp15,127,0,4);
    VL_SIGW(__Vtemp18,95,0,3);
    VL_SIGW(__Vtemp19,95,0,3);
    VL_SIGW(__Vtemp22,95,0,3);
    VL_SIGW(__Vtemp23,95,0,3);
    VL_SIGW(__Vtemp26,95,0,3);
    VL_SIGW(__Vtemp27,95,0,3);
    VL_SIGW(__Vtemp30,95,0,3);
    VL_SIGW(__Vtemp31,95,0,3);
    VL_SIGW(__Vtemp34,95,0,3);
    VL_SIGW(__Vtemp35,95,0,3);
    VL_SIGW(__Vtemp38,95,0,3);
    VL_SIGW(__Vtemp39,95,0,3);
    VL_SIGW(__Vtemp42,95,0,3);
    VL_SIGW(__Vtemp43,95,0,3);
    VL_SIGW(__Vtemp46,95,0,3);
    VL_SIGW(__Vtemp47,95,0,3);
    VL_SIGW(__Vtemp50,95,0,3);
    VL_SIGW(__Vtemp51,95,0,3);
    VL_SIGW(__Vtemp54,95,0,3);
    VL_SIGW(__Vtemp55,95,0,3);
    VL_SIGW(__Vtemp58,95,0,3);
    VL_SIGW(__Vtemp59,95,0,3);
    // Body
    // ALWAYS at AccumMulAddRecF32.v:2160
    vlTOPp->AccumMulAddRecF32__DOT__accum = ((IData)(vlTOPp->reset)
					      ? VL_ULL(0x41400001)
					      : vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T156);
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
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T140 
	= (((0U != (7U & (IData)((vlTOPp->AccumMulAddRecF32__DOT__accum 
				  >> 0x1dU)))) << 0x17U) 
	   | (0x7fffffU & (IData)(vlTOPp->AccumMulAddRecF32__DOT__accum)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T16 
	= (0xfffU & ((IData)(0xffU) + (0x1ffU & (IData)(
							(vlTOPp->AccumMulAddRecF32__DOT__accum 
							 >> 0x17U)))));
    vlTOPp->io_out2 = ((0x80000000U & ((IData)((vlTOPp->AccumMulAddRecF32__DOT__accum 
						>> 0x20U)) 
				       << 0x1fU)) | 
		       ((0x7f800000U & (((VL_GTS_III(1,10,10, 0x82U, 
						     (0x1ffU 
						      & (IData)(
								(vlTOPp->AccumMulAddRecF32__DOT__accum 
								 >> 0x17U))))
					   ? 0U : (
						   (0x1ffU 
						    & (IData)(
							      (vlTOPp->AccumMulAddRecF32__DOT__accum 
							       >> 0x17U))) 
						   - (IData)(0x81U))) 
					 | VL_NEGATE_I(
						       (((3U 
							  == 
							  (3U 
							   & (IData)(
								     (vlTOPp->AccumMulAddRecF32__DOT__accum 
								      >> 0x1eU)))) 
							 & (IData)(
								   (vlTOPp->AccumMulAddRecF32__DOT__accum 
								    >> 0x1dU))) 
							| (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T114)))) 
					<< 0x17U)) 
			| (0x7fffffU & (VL_GTS_III(1,10,10, 0x82U, 
						   (0x1ffU 
						    & (IData)(
							      (vlTOPp->AccumMulAddRecF32__DOT__accum 
							       >> 0x17U))))
					 ? (0xffffffU 
					    & ((0xffffffU 
						& (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T140 
						   >> 1U)) 
					       >> (0x1fU 
						   & ((IData)(1U) 
						      - 
						      (0x1ffU 
						       & (IData)(
								 (vlTOPp->AccumMulAddRecF32__DOT__accum 
								  >> 0x17U)))))))
					 : ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T114)
					     ? 0U : vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T140)))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T316 
	= ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T122) 
	   & (~ (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T140 
		 >> 0x16U)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist 
	= (0xfffU & ((IData)(0x71bU) + (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T16)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
	= ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T316) 
	   | (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T122));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign 
	= ((0U == (7U & (IData)((vlTOPp->AccumMulAddRecF32__DOT__accum 
				 >> 0x1dU)))) | VL_GTS_III(1,12,12, 0U, (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist 
	= (0x7fU & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign)
		     ? 0U : ((0x4aU > (0x3ffU & (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist)))
			      ? (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist)
			      : 0x4aU)));
    __Vtemp2[0U] = (IData)((VL_ULL(0x1fffffffffffff) 
			    & VL_NEGATE_Q((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlTOPp->AccumMulAddRecF32__DOT__accum 
								      >> 0x20U))))))));
    __Vtemp2[1U] = ((0xffe00000U & (((1U & (IData)(
						   (vlTOPp->AccumMulAddRecF32__DOT__accum 
						    >> 0x20U)))
				      ? 0x1ffffffU : 0U) 
				    << 0x15U)) | (IData)(
							 ((VL_ULL(0x1fffffffffffff) 
							   & VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (IData)(
										(vlTOPp->AccumMulAddRecF32__DOT__accum 
										>> 0x20U))))))) 
							  >> 0x20U)));
    __Vtemp2[2U] = (0x1fffffU & (((1U & (IData)((vlTOPp->AccumMulAddRecF32__DOT__accum 
						 >> 0x20U)))
				   ? 0x1ffffffU : 0U) 
				 >> 0xbU));
    VL_SHIFTRS_WWI(78,78,7, __Vtemp3, __Vtemp2, (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U] 
	= __Vtemp3[0U];
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
	= __Vtemp3[1U];
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
	= (0x3fffU & __Vtemp3[2U]);
    VL_SHIFTRS_WWI(78,78,2, __Vtemp7, vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC, 3U);
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U] 
	= ((0xfffffffeU & (__Vtemp7[0U] << 1U)) | (
						   (1U 
						    & (IData)(
							      (vlTOPp->AccumMulAddRecF32__DOT__accum 
							       >> 0x20U)))
						    ? 
						   ((7U 
						     == 
						     (7U 
						      & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
						    & (0U 
						       == (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T3)))
						    : 
						   ((0U 
						     != 
						     (7U 
						      & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
						    | (0U 
						       != (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T3)))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U] 
	= ((1U & (__Vtemp7[0U] >> 0x1fU)) | (0xfffffffeU 
					     & (__Vtemp7[1U] 
						<< 1U)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U] 
	= ((1U & (__Vtemp7[1U] >> 0x1fU)) | (0xffeU 
					     & (__Vtemp7[2U] 
						<< 1U)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddResult 
	= (VL_ULL(0x3ffffffffffff) & ((VL_ULL(0xffffffffffff) 
				       & ((QData)((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T140)) 
					  << 0x17U)) 
				      + (VL_ULL(0xffffffffffff) 
					 & (((QData)((IData)(
							     vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U])) 
					     << 0x3fU) 
					    | (((QData)((IData)(
								vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U])) 
						<< 0x1fU) 
					       | ((QData)((IData)(
								  vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U])) 
						  >> 1U))))));
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
    VL_EXTEND_WQ(114,51, __Vtemp14, vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum);
    VL_SHIFTL_WWI(114,114,6, __Vtemp15, __Vtemp14, 
		  (0x3fU & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T327) 
			    << 1U)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T217[0U] 
	= __Vtemp15[0U];
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T217[1U] 
	= __Vtemp15[1U];
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T217[2U] 
	= __Vtemp15[2U];
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T217[3U] 
	= (0x3ffffU & __Vtemp15[3U]);
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
    __Vtemp18[0U] = 0U;
    __Vtemp18[1U] = 0U;
    __Vtemp18[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp19, __Vtemp18, (0x3fU 
						   & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp22[0U] = 0U;
    __Vtemp22[1U] = 0U;
    __Vtemp22[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp23, __Vtemp22, (0x3fU 
						   & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T65 
	= ((0xffU & ((0x4000U & (__Vtemp19[2U] << 0xeU)) 
		     | (__Vtemp19[1U] >> 0x12U))) | 
	   (0xff00U & ((0x40000000U & (__Vtemp23[2U] 
				       << 0x1eU)) | 
		       (0x3fffff00U & (__Vtemp23[1U] 
				       >> 2U)))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T312 
	= ((0U == (7U & (IData)((vlTOPp->AccumMulAddRecF32__DOT__accum 
				 >> 0x1dU)))) | (0U 
						 == 
						 (3U 
						  & (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
						     >> 0x19U))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T61 
	= ((0xf0fU & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T65) 
		      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T65) 
					    << 4U)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
	= (1U & (((~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
		  & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T114))) 
		 & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T312))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T57 
	= ((0x3333U & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T61) 
		       >> 2U)) | (0xccccU & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T61) 
					     << 2U)));
    __Vtemp26[0U] = 0U;
    __Vtemp26[1U] = 0U;
    __Vtemp26[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp27, __Vtemp26, (0x3fU 
						   & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp30[0U] = 0U;
    __Vtemp30[1U] = 0U;
    __Vtemp30[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp31, __Vtemp30, (0x3fU 
						   & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp34[0U] = 0U;
    __Vtemp34[1U] = 0U;
    __Vtemp34[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp35, __Vtemp34, (0x3fU 
						   & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp38[0U] = 0U;
    __Vtemp38[1U] = 0U;
    __Vtemp38[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp39, __Vtemp38, (0x3fU 
						   & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp42[0U] = 0U;
    __Vtemp42[1U] = 0U;
    __Vtemp42[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp43, __Vtemp42, (0x3fU 
						   & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp46[0U] = 0U;
    __Vtemp46[1U] = 0U;
    __Vtemp46[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp47, __Vtemp46, (0x3fU 
						   & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp50[0U] = 0U;
    __Vtemp50[1U] = 0U;
    __Vtemp50[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp51, __Vtemp50, (0x3fU 
						   & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp54[0U] = 0U;
    __Vtemp54[1U] = 0U;
    __Vtemp54[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp55, __Vtemp54, (0x3fU 
						   & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp58[0U] = 0U;
    __Vtemp58[1U] = 0U;
    __Vtemp58[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp59, __Vtemp58, (0x3fU 
						   & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T11 
	= (((0x100U & (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))
	     ? 0U : ((0x80U & (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))
		      ? ((0x40U & (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))
			  ? 0U : ((4U & (__Vtemp27[0U] 
					 << 2U)) | 
				  ((2U & __Vtemp31[0U]) 
				   | (1U & (__Vtemp35[0U] 
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
							& (__Vtemp39[1U] 
							   >> 0x15U)) 
						       | (0x10U 
							  & (__Vtemp43[1U] 
							     >> 0x17U))) 
						      | (((8U 
							   & (__Vtemp47[1U] 
							      >> 0x19U)) 
							  | (4U 
							     & (__Vtemp51[1U] 
								>> 0x1bU))) 
							 | ((2U 
							     & (__Vtemp55[1U] 
								>> 0x1dU)) 
							    | (1U 
							       & (__Vtemp59[1U] 
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
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow 
	= ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
	   & VL_LTES_III(1,6,6, 3U, (0x3fU & VL_SHIFTRS_III(13,13,3, (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T86), 7U))));
    vlTOPp->io_ignore = (((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T316) 
			  << 4U) | (((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
				     << 2U) | ((((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
						 & (VL_GTS_III(1,13,13, 0x6bU, (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T86)) 
						    | (((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T5) 
							& VL_GTES_III(1,2,2, 0U, 
								      (3U 
								       & VL_SHIFTRS_III(10,10,4, (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp), 8U)))) 
						       & ((0x4000000U 
							   & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
							   ? 
							  (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T11 
							   >> 1U)
							   : vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T11)))) 
						<< 1U) 
					       | ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
						  | ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
						     & (VL_GTS_III(1,13,13, 0x6bU, (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T86)) 
							| (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T5)))))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
	= ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T114) 
	   | (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T156 
	= (((QData)((IData)(((~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
			     & (((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T114) 
				 & (IData)((vlTOPp->AccumMulAddRecF32__DOT__accum 
					    >> 0x20U))) 
				| (((~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T114)) 
				    & (0U != (7U & (IData)(
							   (vlTOPp->AccumMulAddRecF32__DOT__accum 
							    >> 0x1dU))))) 
				   & ((0U != (3U & 
					      (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
					       >> 0x19U))) 
				      & ((IData)((vlTOPp->AccumMulAddRecF32__DOT__accum 
						  >> 0x20U)) 
					 ^ (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
					    >> 0x13U)))))))) 
	    << 0x20U) | (QData)((IData)(((0xff800000U 
					  & ((((((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T86) 
						 & (~ 
						    (((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T312) 
						      | VL_GTS_III(1,13,13, 0x6bU, (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T86)))
						      ? 0x1c0U
						      : 0U))) 
						& (~ 
						   ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
						     ? 0x40U
						     : 0U))) 
					       | ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
						   ? 0x180U
						   : 0U)) 
					      | ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
						  ? 0x1c0U
						  : 0U)) 
					     << 0x17U)) 
					 | (0x7fffffU 
					    & ((((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
						 | (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T312)) 
						| VL_GTS_III(1,13,13, 0x6bU, (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T86)))
					        ? ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
						    ? 0x400000U
						    : 0U)
					        : (
						   (0x4000000U 
						    & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
						    ? 
						   (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T90 
						    >> 1U)
						    : vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T90)))))));
    vlTOPp->io_out = vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T156;
    vlTOPp->AccumMulAddRecF32__DOT__T20 = (((0U != 
					     (7U & (IData)(
							   (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T156 
							    >> 0x1dU)))) 
					    << 0x17U) 
					   | (0x7fffffU 
					      & (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T156)));
    vlTOPp->AccumMulAddRecF32__DOT__T27 = ((3U == (3U 
						   & (IData)(
							     (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T156 
							      >> 0x1eU)))) 
					   & (~ (IData)(
							(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T156 
							 >> 0x1dU))));
    vlTOPp->io_out3 = ((0x80000000U & ((IData)((vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T156 
						>> 0x20U)) 
				       << 0x1fU)) | 
		       ((0x7f800000U & (((VL_GTS_III(1,10,10, 0x82U, 
						     (0x1ffU 
						      & (IData)(
								(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T156 
								 >> 0x17U))))
					   ? 0U : (
						   (0x1ffU 
						    & (IData)(
							      (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T156 
							       >> 0x17U))) 
						   - (IData)(0x81U))) 
					 | VL_NEGATE_I(
						       (((3U 
							  == 
							  (3U 
							   & (IData)(
								     (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T156 
								      >> 0x1eU)))) 
							 & (IData)(
								   (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T156 
								    >> 0x1dU))) 
							| (IData)(vlTOPp->AccumMulAddRecF32__DOT__T27)))) 
					<< 0x17U)) 
			| (0x7fffffU & (VL_GTS_III(1,10,10, 0x82U, 
						   (0x1ffU 
						    & (IData)(
							      (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T156 
							       >> 0x17U))))
					 ? (0xffffffU 
					    & ((0xffffffU 
						& (vlTOPp->AccumMulAddRecF32__DOT__T20 
						   >> 1U)) 
					       >> (0x1fU 
						   & ((IData)(1U) 
						      - 
						      (0x1ffU 
						       & (IData)(
								 (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T156 
								  >> 0x17U)))))))
					 : ((IData)(vlTOPp->AccumMulAddRecF32__DOT__T27)
					     ? 0U : vlTOPp->AccumMulAddRecF32__DOT__T20)))));
}

void VAccumMulAddRecF32::_settle__TOP__4(VAccumMulAddRecF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAccumMulAddRecF32::_settle__TOP__4\n"); );
    VAccumMulAddRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp62,95,0,3);
    VL_SIGW(__Vtemp63,95,0,3);
    VL_SIGW(__Vtemp67,95,0,3);
    VL_SIGW(__Vtemp74,127,0,4);
    VL_SIGW(__Vtemp75,127,0,4);
    VL_SIGW(__Vtemp78,95,0,3);
    VL_SIGW(__Vtemp79,95,0,3);
    VL_SIGW(__Vtemp82,95,0,3);
    VL_SIGW(__Vtemp83,95,0,3);
    VL_SIGW(__Vtemp86,95,0,3);
    VL_SIGW(__Vtemp87,95,0,3);
    VL_SIGW(__Vtemp90,95,0,3);
    VL_SIGW(__Vtemp91,95,0,3);
    VL_SIGW(__Vtemp94,95,0,3);
    VL_SIGW(__Vtemp95,95,0,3);
    VL_SIGW(__Vtemp98,95,0,3);
    VL_SIGW(__Vtemp99,95,0,3);
    VL_SIGW(__Vtemp102,95,0,3);
    VL_SIGW(__Vtemp103,95,0,3);
    VL_SIGW(__Vtemp106,95,0,3);
    VL_SIGW(__Vtemp107,95,0,3);
    VL_SIGW(__Vtemp110,95,0,3);
    VL_SIGW(__Vtemp111,95,0,3);
    VL_SIGW(__Vtemp114,95,0,3);
    VL_SIGW(__Vtemp115,95,0,3);
    VL_SIGW(__Vtemp118,95,0,3);
    VL_SIGW(__Vtemp119,95,0,3);
    // Body
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
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T140 
	= (((0U != (7U & (IData)((vlTOPp->AccumMulAddRecF32__DOT__accum 
				  >> 0x1dU)))) << 0x17U) 
	   | (0x7fffffU & (IData)(vlTOPp->AccumMulAddRecF32__DOT__accum)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T16 
	= (0xfffU & ((IData)(0xffU) + (0x1ffU & (IData)(
							(vlTOPp->AccumMulAddRecF32__DOT__accum 
							 >> 0x17U)))));
    vlTOPp->io_out2 = ((0x80000000U & ((IData)((vlTOPp->AccumMulAddRecF32__DOT__accum 
						>> 0x20U)) 
				       << 0x1fU)) | 
		       ((0x7f800000U & (((VL_GTS_III(1,10,10, 0x82U, 
						     (0x1ffU 
						      & (IData)(
								(vlTOPp->AccumMulAddRecF32__DOT__accum 
								 >> 0x17U))))
					   ? 0U : (
						   (0x1ffU 
						    & (IData)(
							      (vlTOPp->AccumMulAddRecF32__DOT__accum 
							       >> 0x17U))) 
						   - (IData)(0x81U))) 
					 | VL_NEGATE_I(
						       (((3U 
							  == 
							  (3U 
							   & (IData)(
								     (vlTOPp->AccumMulAddRecF32__DOT__accum 
								      >> 0x1eU)))) 
							 & (IData)(
								   (vlTOPp->AccumMulAddRecF32__DOT__accum 
								    >> 0x1dU))) 
							| (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T114)))) 
					<< 0x17U)) 
			| (0x7fffffU & (VL_GTS_III(1,10,10, 0x82U, 
						   (0x1ffU 
						    & (IData)(
							      (vlTOPp->AccumMulAddRecF32__DOT__accum 
							       >> 0x17U))))
					 ? (0xffffffU 
					    & ((0xffffffU 
						& (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T140 
						   >> 1U)) 
					       >> (0x1fU 
						   & ((IData)(1U) 
						      - 
						      (0x1ffU 
						       & (IData)(
								 (vlTOPp->AccumMulAddRecF32__DOT__accum 
								  >> 0x17U)))))))
					 : ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T114)
					     ? 0U : vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T140)))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T316 
	= ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T122) 
	   & (~ (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T140 
		 >> 0x16U)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist 
	= (0xfffU & ((IData)(0x71bU) + (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T16)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
	= ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T316) 
	   | (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T122));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign 
	= ((0U == (7U & (IData)((vlTOPp->AccumMulAddRecF32__DOT__accum 
				 >> 0x1dU)))) | VL_GTS_III(1,12,12, 0U, (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist 
	= (0x7fU & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign)
		     ? 0U : ((0x4aU > (0x3ffU & (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist)))
			      ? (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist)
			      : 0x4aU)));
    __Vtemp62[0U] = (IData)((VL_ULL(0x1fffffffffffff) 
			     & VL_NEGATE_Q((QData)((IData)(
							   (1U 
							    & (IData)(
								      (vlTOPp->AccumMulAddRecF32__DOT__accum 
								       >> 0x20U))))))));
    __Vtemp62[1U] = ((0xffe00000U & (((1U & (IData)(
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
    __Vtemp62[2U] = (0x1fffffU & (((1U & (IData)((vlTOPp->AccumMulAddRecF32__DOT__accum 
						  >> 0x20U)))
				    ? 0x1ffffffU : 0U) 
				  >> 0xbU));
    VL_SHIFTRS_WWI(78,78,7, __Vtemp63, __Vtemp62, (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U] 
	= __Vtemp63[0U];
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
	= __Vtemp63[1U];
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
	= (0x3fffU & __Vtemp63[2U]);
    VL_SHIFTRS_WWI(78,78,2, __Vtemp67, vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC, 3U);
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U] 
	= ((0xfffffffeU & (__Vtemp67[0U] << 1U)) | 
	   ((1U & (IData)((vlTOPp->AccumMulAddRecF32__DOT__accum 
			   >> 0x20U))) ? (7U == (7U 
						 & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U]))
	     : (0U != (7U & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U]))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U] 
	= ((1U & (__Vtemp67[0U] >> 0x1fU)) | (0xfffffffeU 
					      & (__Vtemp67[1U] 
						 << 1U)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U] 
	= ((1U & (__Vtemp67[1U] >> 0x1fU)) | (0xffeU 
					      & (__Vtemp67[2U] 
						 << 1U)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddResult 
	= (VL_ULL(0x3ffffffffffff) & ((VL_ULL(0xffffffffffff) 
				       & ((QData)((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T140)) 
					  << 0x17U)) 
				      + (VL_ULL(0xffffffffffff) 
					 & (((QData)((IData)(
							     vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U])) 
					     << 0x3fU) 
					    | (((QData)((IData)(
								vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U])) 
						<< 0x1fU) 
					       | ((QData)((IData)(
								  vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U])) 
						  >> 1U))))));
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
    VL_EXTEND_WQ(114,51, __Vtemp74, vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum);
    VL_SHIFTL_WWI(114,114,6, __Vtemp75, __Vtemp74, 
		  (0x3fU & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T327) 
			    << 1U)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T217[0U] 
	= __Vtemp75[0U];
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T217[1U] 
	= __Vtemp75[1U];
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T217[2U] 
	= __Vtemp75[2U];
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T217[3U] 
	= (0x3ffffU & __Vtemp75[3U]);
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
    __Vtemp78[0U] = 0U;
    __Vtemp78[1U] = 0U;
    __Vtemp78[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp79, __Vtemp78, (0x3fU 
						   & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp82[0U] = 0U;
    __Vtemp82[1U] = 0U;
    __Vtemp82[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp83, __Vtemp82, (0x3fU 
						   & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T65 
	= ((0xffU & ((0x4000U & (__Vtemp79[2U] << 0xeU)) 
		     | (__Vtemp79[1U] >> 0x12U))) | 
	   (0xff00U & ((0x40000000U & (__Vtemp83[2U] 
				       << 0x1eU)) | 
		       (0x3fffff00U & (__Vtemp83[1U] 
				       >> 2U)))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T312 
	= ((0U == (7U & (IData)((vlTOPp->AccumMulAddRecF32__DOT__accum 
				 >> 0x1dU)))) | (0U 
						 == 
						 (3U 
						  & (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
						     >> 0x19U))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T61 
	= ((0xf0fU & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T65) 
		      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T65) 
					    << 4U)));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
	= (1U & (((~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
		  & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T114))) 
		 & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T312))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T57 
	= ((0x3333U & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T61) 
		       >> 2U)) | (0xccccU & ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T61) 
					     << 2U)));
    __Vtemp86[0U] = 0U;
    __Vtemp86[1U] = 0U;
    __Vtemp86[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp87, __Vtemp86, (0x3fU 
						   & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp90[0U] = 0U;
    __Vtemp90[1U] = 0U;
    __Vtemp90[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp91, __Vtemp90, (0x3fU 
						   & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp94[0U] = 0U;
    __Vtemp94[1U] = 0U;
    __Vtemp94[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp95, __Vtemp94, (0x3fU 
						   & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp98[0U] = 0U;
    __Vtemp98[1U] = 0U;
    __Vtemp98[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp99, __Vtemp98, (0x3fU 
						   & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp102[0U] = 0U;
    __Vtemp102[1U] = 0U;
    __Vtemp102[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp103, __Vtemp102, 
		   (0x3fU & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp106[0U] = 0U;
    __Vtemp106[1U] = 0U;
    __Vtemp106[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp107, __Vtemp106, 
		   (0x3fU & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp110[0U] = 0U;
    __Vtemp110[1U] = 0U;
    __Vtemp110[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp111, __Vtemp110, 
		   (0x3fU & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp114[0U] = 0U;
    __Vtemp114[1U] = 0U;
    __Vtemp114[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp115, __Vtemp114, 
		   (0x3fU & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    __Vtemp118[0U] = 0U;
    __Vtemp118[1U] = 0U;
    __Vtemp118[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp119, __Vtemp118, 
		   (0x3fU & (~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T11 
	= (((0x100U & (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))
	     ? 0U : ((0x80U & (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))
		      ? ((0x40U & (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp))
			  ? 0U : ((4U & (__Vtemp87[0U] 
					 << 2U)) | 
				  ((2U & __Vtemp91[0U]) 
				   | (1U & (__Vtemp95[0U] 
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
							& (__Vtemp99[1U] 
							   >> 0x15U)) 
						       | (0x10U 
							  & (__Vtemp103[1U] 
							     >> 0x17U))) 
						      | (((8U 
							   & (__Vtemp107[1U] 
							      >> 0x19U)) 
							  | (4U 
							     & (__Vtemp111[1U] 
								>> 0x1bU))) 
							 | ((2U 
							     & (__Vtemp115[1U] 
								>> 0x1dU)) 
							    | (1U 
							       & (__Vtemp119[1U] 
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
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow 
	= ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
	   & VL_LTES_III(1,6,6, 3U, (0x3fU & VL_SHIFTRS_III(13,13,3, (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T86), 7U))));
    vlTOPp->io_ignore = (((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T316) 
			  << 4U) | (((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
				     << 2U) | ((((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
						 & (VL_GTS_III(1,13,13, 0x6bU, (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T86)) 
						    | (((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T5) 
							& VL_GTES_III(1,2,2, 0U, 
								      (3U 
								       & VL_SHIFTRS_III(10,10,4, (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sExp), 8U)))) 
						       & ((0x4000000U 
							   & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
							   ? 
							  (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T11 
							   >> 1U)
							   : vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T11)))) 
						<< 1U) 
					       | ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
						  | ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
						     & (VL_GTS_III(1,13,13, 0x6bU, (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T86)) 
							| (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T5)))))));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
	= ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T114) 
	   | (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow));
    vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T156 
	= (((QData)((IData)(((~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
			     & (((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T114) 
				 & (IData)((vlTOPp->AccumMulAddRecF32__DOT__accum 
					    >> 0x20U))) 
				| (((~ (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T114)) 
				    & (0U != (7U & (IData)(
							   (vlTOPp->AccumMulAddRecF32__DOT__accum 
							    >> 0x1dU))))) 
				   & ((0U != (3U & 
					      (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
					       >> 0x19U))) 
				      & ((IData)((vlTOPp->AccumMulAddRecF32__DOT__accum 
						  >> 0x20U)) 
					 ^ (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
					    >> 0x13U)))))))) 
	    << 0x20U) | (QData)((IData)(((0xff800000U 
					  & ((((((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T86) 
						 & (~ 
						    (((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T312) 
						      | VL_GTS_III(1,13,13, 0x6bU, (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T86)))
						      ? 0x1c0U
						      : 0U))) 
						& (~ 
						   ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
						     ? 0x40U
						     : 0U))) 
					       | ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
						   ? 0x180U
						   : 0U)) 
					      | ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
						  ? 0x1c0U
						  : 0U)) 
					     << 0x17U)) 
					 | (0x7fffffU 
					    & ((((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
						 | (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T312)) 
						| VL_GTS_III(1,13,13, 0x6bU, (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T86)))
					        ? ((IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
						    ? 0x400000U
						    : 0U)
					        : (
						   (0x4000000U 
						    & vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig)
						    ? 
						   (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T90 
						    >> 1U)
						    : vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T90)))))));
    vlTOPp->io_out = vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T156;
    vlTOPp->AccumMulAddRecF32__DOT__T20 = (((0U != 
					     (7U & (IData)(
							   (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T156 
							    >> 0x1dU)))) 
					    << 0x17U) 
					   | (0x7fffffU 
					      & (IData)(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T156)));
    vlTOPp->AccumMulAddRecF32__DOT__T27 = ((3U == (3U 
						   & (IData)(
							     (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T156 
							      >> 0x1eU)))) 
					   & (~ (IData)(
							(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T156 
							 >> 0x1dU))));
    vlTOPp->io_out3 = ((0x80000000U & ((IData)((vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T156 
						>> 0x20U)) 
				       << 0x1fU)) | 
		       ((0x7f800000U & (((VL_GTS_III(1,10,10, 0x82U, 
						     (0x1ffU 
						      & (IData)(
								(vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T156 
								 >> 0x17U))))
					   ? 0U : (
						   (0x1ffU 
						    & (IData)(
							      (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T156 
							       >> 0x17U))) 
						   - (IData)(0x81U))) 
					 | VL_NEGATE_I(
						       (((3U 
							  == 
							  (3U 
							   & (IData)(
								     (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T156 
								      >> 0x1eU)))) 
							 & (IData)(
								   (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T156 
								    >> 0x1dU))) 
							| (IData)(vlTOPp->AccumMulAddRecF32__DOT__T27)))) 
					<< 0x17U)) 
			| (0x7fffffU & (VL_GTS_III(1,10,10, 0x82U, 
						   (0x1ffU 
						    & (IData)(
							      (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T156 
							       >> 0x17U))))
					 ? (0xffffffU 
					    & ((0xffffffU 
						& (vlTOPp->AccumMulAddRecF32__DOT__T20 
						   >> 1U)) 
					       >> (0x1fU 
						   & ((IData)(1U) 
						      - 
						      (0x1ffU 
						       & (IData)(
								 (vlTOPp->AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T156 
								  >> 0x17U)))))))
					 : ((IData)(vlTOPp->AccumMulAddRecF32__DOT__T27)
					     ? 0U : vlTOPp->AccumMulAddRecF32__DOT__T20)))));
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
    vlTOPp->_initial__TOP__2(vlSymsp);
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
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__4(vlSymsp);
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
    io_out2 = VL_RAND_RESET_I(32);
    io_out3 = VL_RAND_RESET_I(32);
    io_ignore = VL_RAND_RESET_I(5);
    AccumMulAddRecF32__DOT__accum = VL_RAND_RESET_Q(33);
    AccumMulAddRecF32__DOT__T20 = VL_RAND_RESET_I(24);
    AccumMulAddRecF32__DOT__T27 = VL_RAND_RESET_I(1);
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
    AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_preMul__DOT__T140 = VL_RAND_RESET_I(24);
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
    AccumMulAddRecF32__DOT__mulAdd__DOT__mulAddRecFNToRaw_postMul__DOT__T312 = VL_RAND_RESET_I(1);
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
    AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase = VL_RAND_RESET_I(1);
    AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut = VL_RAND_RESET_I(1);
    AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow = VL_RAND_RESET_I(1);
    AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__T156 = VL_RAND_RESET_Q(33);
    AccumMulAddRecF32__DOT__mulAdd__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
