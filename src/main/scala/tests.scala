
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
                chiselMain(testArgs, () => Module(new Equiv_f16FromRecF16))
            case "f32FromRecF32" =>
                chiselMain(testArgs, () => Module(new Equiv_f32FromRecF32))
            case "f64FromRecF64" =>
                chiselMain(testArgs, () => Module(new Equiv_f64FromRecF64))
            case "RecFNFrom16FN" =>
                chiselMain(testArgs, () => Module(new Equiv_recFNFrom16FN))
            case "RecFNFrom32FN" =>
                chiselMain(testArgs, () => Module(new Equiv_recFNFrom32FN))
            case "RecFNFrom64FN" =>
                chiselMain(testArgs, () => Module(new Equiv_recFNFrom64FN))
            case "F32ToF64" =>
                chiselMain(testArgs, () => Module(new Equiv_F32ToF64))
            case "F64ToF32" =>
                chiselMain(testArgs, () => Module(new Equiv_F64ToF32))
            case "recF32ToRecF64" =>
                chiselMain(testArgs, () => Module(new Equiv_recF32ToRecF64))
            case "recF64ToRecF32" =>
                chiselMain(testArgs, () => Module(new Equiv_recF64ToRecF32))
            case "MulAddRecF16" =>
                chiselMain(testArgs, () => Module(new Equiv_MulAddRecF16))
            case "MulAddRecF32" =>
                chiselMain(testArgs, () => Module(new Equiv_MulAddRecF32))
            case "MulAddRecF64" =>
                chiselMain(testArgs, () => Module(new Equiv_MulAddRecF64))
            case "MulAddF16" =>
                chiselMain(testArgs, () => Module(new Equiv_MulAddF16))
            case "MulAddF32" =>
                chiselMain(testArgs, () => Module(new Equiv_MulAddF32))
            case "MulAddF64" =>
                chiselMain(testArgs, () => Module(new Equiv_MulAddF64))
            case "AccumMulAddRecF32" =>
                chiselMain(
                    testArgs, () => Module(new AccumMulAddRecF32))
        }
    }
}

