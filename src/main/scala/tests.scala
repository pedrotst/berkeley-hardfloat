
/*============================================================================

This Chisel source file is part of a pre-release version of the HardFloat IEEE
Floating-Point Arithmetic Package, by John R. Hauser (with some contributions
from Yunsup Lee and Andrew Waterman, mainly concerning testing).

Copyright 2010, 2011, 2012, 2013, 2014, 2015, 2016, 2017 The Regents of the
University of California.  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

 1. Redistributions of source code must retain the above copyright notice,
    this list of conditions, and the following disclaimer.

 2. Redistributions in binary form must reproduce the above copyright notice,
    this list of conditions, and the following disclaimer in the documentation
    and/or other materials provided with the distribution.

 3. Neither the name of the University nor the names of its contributors may
    be used to endorse or promote products derived from this software without
    specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS "AS IS", AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE, ARE
DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

=============================================================================*/

package hardfloat

import Chisel._

object equivRecFN
{
    def apply(expWidth: Int, sigWidth: Int, a: UInt, b: UInt) =
    {
        val top4A = a(expWidth + sigWidth, expWidth + sigWidth - 3)
        val top4B = b(expWidth + sigWidth, expWidth + sigWidth - 3)
        Mux((top4A(2, 0) === UInt(0)) || (top4A(2, 0) === UInt(7)),
            (top4A === top4B) && (a(sigWidth - 2, 0) === b(sigWidth - 2, 0)),
            Mux((top4A(2, 0) === UInt(6)), (top4A === top4B), (a === b))
        )
    }
}

//*** CHANGE THIS NAME (HOW??):
object FMATest {
    def main(args: Array[String]): Unit =
    {
        val testArgs = args.slice(1, args.length)
        args(0) match {
            case "f16FromRecF16" =>
                chiselMain(testArgs, () => Module(new ValExec_f16FromRecF16))
            case "f32FromRecF32" =>
                chiselMain(testArgs, () => Module(new ValExec_f32FromRecF32))
            case "f64FromRecF64" =>
                chiselMain(testArgs, () => Module(new ValExec_f64FromRecF64))
            case "UI32ToRecF16" =>
                chiselMain(testArgs, () => Module(new ValExec_UI32ToRecF16))
            case "UI32ToRecF32" =>
                chiselMain(testArgs, () => Module(new ValExec_UI32ToRecF32))
            case "UI32ToRecF64" =>
                chiselMain(testArgs, () => Module(new ValExec_UI32ToRecF64))
            case "UI64ToRecF16" =>
                chiselMain(testArgs, () => Module(new ValExec_UI64ToRecF16))
            case "UI64ToRecF32" =>
                chiselMain(testArgs, () => Module(new ValExec_UI64ToRecF32))
            case "UI64ToRecF64" =>
                chiselMain(testArgs, () => Module(new ValExec_UI64ToRecF64))
            case "I32ToRecF16" =>
                chiselMain(testArgs, () => Module(new ValExec_I32ToRecF16))
            case "I32ToRecF32" =>
                chiselMain(testArgs, () => Module(new ValExec_I32ToRecF32))
            case "I32ToRecF64" =>
                chiselMain(testArgs, () => Module(new ValExec_I32ToRecF64))
            case "I64ToRecF16" =>
                chiselMain(testArgs, () => Module(new ValExec_I64ToRecF16))
            case "I64ToRecF32" =>
                chiselMain(testArgs, () => Module(new ValExec_I64ToRecF32))
            case "I64ToRecF64" =>
                chiselMain(testArgs, () => Module(new ValExec_I64ToRecF64))
            case "RecF16ToUI32" =>
                chiselMain(testArgs, () => Module(new ValExec_RecF16ToUI32))
            case "RecF16ToUI64" =>
                chiselMain(testArgs, () => Module(new ValExec_RecF16ToUI64))
            case "RecF32ToUI32" =>
                chiselMain(testArgs, () => Module(new ValExec_RecF32ToUI32))
            case "RecF32ToUI64" =>
                chiselMain(testArgs, () => Module(new ValExec_RecF32ToUI64))
            case "RecF64ToUI32" =>
                chiselMain(testArgs, () => Module(new ValExec_RecF64ToUI32))
            case "RecF64ToUI64" =>
                chiselMain(testArgs, () => Module(new ValExec_RecF64ToUI64))
            case "RecF16ToI32" =>
                chiselMain(testArgs, () => Module(new ValExec_RecF16ToI32))
            case "RecF16ToI64" =>
                chiselMain(testArgs, () => Module(new ValExec_RecF16ToI64))
            case "RecF32ToI32" =>
                chiselMain(testArgs, () => Module(new ValExec_RecF32ToI32))
            case "RecF32ToI64" =>
                chiselMain(testArgs, () => Module(new ValExec_RecF32ToI64))
            case "RecF64ToI32" =>
                chiselMain(testArgs, () => Module(new ValExec_RecF64ToI32))
            case "RecF64ToI64" =>
                chiselMain(testArgs, () => Module(new ValExec_RecF64ToI64))
            case "F16ToF32" =>
                chiselMain(testArgs, () => Module(new ValExec_F16ToF32))
            case "F16ToF64" =>
                chiselMain(testArgs, () => Module(new ValExec_F16ToF64))
            case "F32ToF16" =>
                chiselMain(testArgs, () => Module(new ValExec_F32ToF16))
            case "F32ToF64" =>
                chiselMain(testArgs, () => Module(new ValExec_F32ToF64))
            case "F64ToF16" =>
                chiselMain(testArgs, () => Module(new ValExec_F64ToF16))
            case "F64ToF32" =>
                chiselMain(testArgs, () => Module(new ValExec_F64ToF32))
            case "RecFNFrom16FN" =>
                chiselMain(testArgs, () => Module(new ValExec_recFNFrom16FN))
            case "RecFNFrom32FN" =>
                chiselMain(testArgs, () => Module(new ValExec_recFNFrom32FN))
            case "RecFNFrom64FN" =>
                chiselMain(testArgs, () => Module(new ValExec_recFNFrom64FN))
            case "MulAddRecF16_add" =>
                chiselMain(
                    testArgs, () => Module(new ValExec_MulAddRecF16_add))
            case "MulAddRecF16_mul" =>
                chiselMain(
                    testArgs, () => Module(new ValExec_MulAddRecF16_mul))
            case "ImplMulAddRecF16" =>
                chiselMain(testArgs, () => Module(new MulAddRecF16))
            case "MulAddRecF16" =>
                chiselMain(testArgs, () => Module(new ValExec_MulAddRecF16))
            case "MulAddRecF32_add" =>
                chiselMain(
                    testArgs, () => Module(new ValExec_MulAddRecF32_add))
            case "MulAddRecF32_mul" =>
                chiselMain(
                    testArgs, () => Module(new ValExec_MulAddRecF32_mul))
            case "ImplMulAddRecF32" =>
                chiselMain(testArgs, () => Module(new MulAddRecF32))
            case "MulAddRecF32" =>
                chiselMain(testArgs, () => Module(new ValExec_MulAddRecF32))
            case "MulAddRecF64_add" =>
                chiselMain(
                    testArgs, () => Module(new ValExec_MulAddRecF64_add))
            case "MulAddRecF64_mul" =>
                chiselMain(
                    testArgs, () => Module(new ValExec_MulAddRecF64_mul))
            case "ImplMulAddRecF64" =>
                chiselMain(testArgs, () => Module(new MulAddRecF64))
            case "MulAddRecF64" =>
                chiselMain(testArgs, () => Module(new ValExec_MulAddRecF64))
            case "DivSqrtRecF16_small_div" =>
                chiselMain(
                    testArgs, () => Module(new ValExec_DivSqrtRecF16_small_div)
                )
            case "DivSqrtRecF16_small_sqrt" =>
                chiselMain(
                    testArgs,
                    () => Module(new ValExec_DivSqrtRecF16_small_sqrt)
                )
            case "DivSqrtRecF32_small_div" =>
                chiselMain(
                    testArgs, () => Module(new ValExec_DivSqrtRecF32_small_div)
                )
            case "DivSqrtRecF32_small_sqrt" =>
                chiselMain(
                    testArgs,
                    () => Module(new ValExec_DivSqrtRecF32_small_sqrt)
                )
            case "DivSqrtRecF64_small_div" =>
                chiselMain(
                    testArgs, () => Module(new ValExec_DivSqrtRecF64_small_div)
                )
            case "DivSqrtRecF64_small_sqrt" =>
                chiselMain(
                    testArgs,
                    () => Module(new ValExec_DivSqrtRecF64_small_sqrt)
                )
            case "DivSqrtRecF64_div" =>
                chiselMain(
                    testArgs, () => Module(new ValExec_DivSqrtRecF64_div))
            case "DivSqrtRecF64_sqrt" =>
                chiselMain(
                    testArgs, () => Module(new ValExec_DivSqrtRecF64_sqrt))
            case "CompareRecF16_lt" =>
                chiselMain(
                    testArgs, () => Module(new ValExec_CompareRecF16_lt))
            case "CompareRecF16_le" =>
                chiselMain(
                    testArgs, () => Module(new ValExec_CompareRecF16_le))
            case "CompareRecF16_eq" =>
                chiselMain(
                    testArgs, () => Module(new ValExec_CompareRecF16_eq))
            case "CompareRecF32_lt" =>
                chiselMain(
                    testArgs, () => Module(new ValExec_CompareRecF32_lt))
            case "CompareRecF32_le" =>
                chiselMain(
                    testArgs, () => Module(new ValExec_CompareRecF32_le))
            case "CompareRecF32_eq" =>
                chiselMain(
                    testArgs, () => Module(new ValExec_CompareRecF32_eq))
            case "CompareRecF64_lt" =>
                chiselMain(
                    testArgs, () => Module(new ValExec_CompareRecF64_lt))
            case "CompareRecF64_le" =>
                chiselMain(
                    testArgs, () => Module(new ValExec_CompareRecF64_le))
            case "CompareRecF64_eq" =>
                chiselMain(
                    testArgs, () => Module(new ValExec_CompareRecF64_eq))
            case "AccumMulAddRecF32" =>
                chiselMain(
                    testArgs, () => Module(new AccumMulAddRecF32))
        }
    }
}

