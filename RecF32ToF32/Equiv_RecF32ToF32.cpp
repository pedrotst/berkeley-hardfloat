#include "verilated.h"
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "verilated_vcd_c.h"

#include "VEquiv_RecF32ToF32.h"
#include "common.h"

#define inSigWidth 24
#define inExpWidth 8
#define outSigWidth 24
#define outExpWidth 8

int main(int argc, char ** argv, char **env) {
  Verilated::commandArgs(argc, argv);
  Verilated::traceEverOn(true);

  VEquiv_RecF32ToF32* top = new VEquiv_RecF32ToF32;
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace(tfp,99);
  tfp->open("trace.vcd");

  
  vluint64_t main_time = 0;
  uint32_t io_in_exp = 0x6a;
  uint32_t io_in_sig = ones(inSigWidth - 1);

  while (!Verilated::gotFinish() && io_in_exp > 0) {
    top->io_in = (io_in_exp << (inSigWidth - 1)) | io_in_sig;
//    top->clk = main_time;
//    if(main_time < 2)
//      top->reset = 1;
//    else
//      top->reset = 0;

    top->eval();

    uint64_t io_out_sign = (top->io_out >> (outExpWidth + outSigWidth)) & 1;

    uint32_t io_out_exp = (top->io_out >> (outSigWidth - 1)) & ones(outExpWidth + 1);

    uint32_t io_out_sig = (top->io_out) & ones(outSigWidth-1);

    printf("------------------------------------------------\n");
    printf("\n");
    printBits(inExpWidth + 1, sizeof(io_in_exp), &io_in_exp, "io_in_exp:\t\t");
    printf("exp:\t\t\t%x\n", io_in_exp);
    printBits(inSigWidth - 1, sizeof(io_in_sig), &io_in_sig, "io_in_sig:\t\t");
    printBits(inExpWidth + inSigWidth + 1, sizeof(top->io_in), &top->io_in, "io_in:\t\t\t");
    printf("\n");

    printf("\n");
    printBits(1, sizeof(io_out_sign), &io_out_sign, "io_out_sign:\t\t");
    printBits(outExpWidth, sizeof(io_out_exp), &io_out_exp, "io_out_exp:\t\t");
    printf("exp:\t\t\t%x\n", io_out_exp);
    printBits(outSigWidth - 1, sizeof(io_out_sig), &io_out_sig, "io_out_sig:\t\t");
    printBits(outExpWidth + outSigWidth, sizeof(top->io_out), &top->io_out, "io_out:\t\t\t");
    printf("\n");

    tfp->dump(main_time);
    main_time++;
    io_in_exp--;
  }

  top->final();
  tfp->close();
  delete top;
  delete tfp;
  return 0;
}
