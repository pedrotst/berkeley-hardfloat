#!/bin/bash

verilator --top-module AccumMulAddRecF32 -Wno-CMPCONST -Wno-WIDTH -Wno-lint -Wno-fatal --cc AccumMulAddRecF32.v --trace --trace-underscore --exe AccumMulAddRecF32.cpp
make -j -C obj_dir -f VAccumMulAddRecF32.mk
