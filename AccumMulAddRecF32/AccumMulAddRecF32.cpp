#include "verilated.h"
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "verilated_vcd_c.h"

#include "VAccumMulAddRecF32.h"
#include "common.h"

#define inSigWidth 24
#define inExpWidth 8
#define outSigWidth 24
#define outExpWidth 8

int main(int argc, char ** argv, char **env) {
  Verilated::commandArgs(argc, argv);
  Verilated::traceEverOn(true);

  VAccumMulAddRecF32* top = new VAccumMulAddRecF32;
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace(tfp,99);
  tfp->open("trace.vcd");

  
  vluint64_t main_time = 0;
  uint32_t io_out_exp = 0x63;

  while (!Verilated::gotFinish() && ((main_time < 10) || (io_out_exp > 0x62))) {
    top->clk = main_time;
    if(main_time < 2)
      top->reset = 1;
    else
      top->reset = 0;

    top->eval();

    uint32_t io_out_sign = (top->io_out >> (outExpWidth + outSigWidth)) & 1;

    io_out_exp = (top->io_out >> (outSigWidth - 1)) & ones(outExpWidth + 1);

    uint32_t io_out_sig = (top->io_out) & ones(outSigWidth-1);

    printf("------------------------------------------------\n");
    printf("\n");
    printBits(1, sizeof(io_out_sign), &io_out_sign, "io_out_sign:\t\t");
    printBits(outExpWidth + 1, sizeof(io_out_exp), &io_out_exp, "io_out_exp:\t\t");
    printf("exp:\t\t\t%x\n", io_out_exp);
    printBits(outSigWidth - 1, sizeof(io_out_sig), &io_out_sig, "io_out_sig:\t\t");
    printBits(outExpWidth + outSigWidth + 1, sizeof(top->io_out), &top->io_out, "io_out:\t\t\t");
    printf("\n");

    tfp->dump(main_time);
    main_time++;
  }

  top->final();
  tfp->close();
  delete top;
  delete tfp;
  return 0;
}
