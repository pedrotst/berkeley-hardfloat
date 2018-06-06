module Equiv_RecF64ToF64(
    input [64:0] io_in,
    output[63:0] io_out,
    output io_isBadNaN,
    output[2:0] io_firstThree,
    output[52:0] io_sig,
    output[52:0] io_compare
);

  wire[52:0] T0;
  wire[2:0] T1;
  wire T2;
  wire T3;
  wire[52:0] T4;
  wire T5;
  wire[2:0] T6;
  wire[63:0] T7;
  wire[62:0] T8;
  wire[51:0] T9;
  wire[51:0] T10;
  wire[51:0] T11;
  wire[53:0] T12;
  wire[53:0] T13;
  wire[52:0] T14;
  wire[51:0] T15;
  wire T16;
  wire T17;
  wire[2:0] T18;
  wire[11:0] T19;
  wire T20;
  wire T21;
  wire T22;
  wire T23;
  wire T24;
  wire[1:0] T25;
  wire[51:0] T26;
  wire[52:0] T27;
  wire[5:0] T28;
  wire[5:0] T29;
  wire[12:0] T30;
  wire[12:0] T31;
  wire[12:0] T32;
  wire[52:0] T33;
  wire T34;
  wire[10:0] T35;
  wire[10:0] T36;
  wire[10:0] T46;
  wire T37;
  wire T38;
  wire T39;
  wire T40;
  wire[10:0] T41;
  wire[10:0] T42;
  wire[10:0] T43;
  wire T44;
  wire T45;


  assign io_compare = 53'h1fffffffffffff;
  assign io_sig = T0;
  assign T0 = io_in[52:0];
  assign io_firstThree = T1;
  assign T1 = io_in[63:61];
  assign io_isBadNaN = T2;
  assign T2 = T5 & T3;
  assign T3 = T4 != 53'h1fffffffffffff;
  assign T4 = io_in[52:0];
  assign T5 = T6 == 3'h7;
  assign T6 = io_in[63:61];
  assign io_out = T7;
  assign T7 = {T44, T8};
  assign T8 = {T35, T9};
  assign T9 = T34 ? T26 : T10;
  assign T10 = T20 ? 52'h0 : T11;
  assign T11 = T12[51:0];
  assign T12 = T13;
  assign T13 = {1'h0, T14};
  assign T14 = {T16, T15};
  assign T15 = io_in[51:0];
  assign T16 = T17 ^ 1'h1;
  assign T17 = T18 == 3'h0;
  assign T18 = T19[11:9];
  assign T19 = io_in[63:52];
  assign T20 = T21;
  assign T21 = T24 & T22;
  assign T22 = T23 ^ 1'h1;
  assign T23 = T19[9];
  assign T24 = T25 == 2'h3;
  assign T25 = T19[11:10];
  assign T26 = T27[51:0];
  assign T27 = T33 >> T28;
  assign T28 = 6'h1 - T29;
  assign T29 = T30[5:0];
  assign T30 = T31;
  assign T31 = T32;
  assign T32 = {1'h0, T19};
  assign T33 = T12 >> 1'h1;
  assign T34 = $signed(T30) < $signed(12'h402);
  assign T35 = T41 | T36;
  assign T36 = 11'h0 - T46;
  assign T46 = {10'h0, T37};
  assign T37 = T38 | T20;
  assign T38 = T39;
  assign T39 = T24 & T40;
  assign T40 = T19[9];
  assign T41 = T34 ? 11'h0 : T42;
  assign T42 = T43 - 11'h401;
  assign T43 = T30[10:0];
  assign T44 = T45;
  assign T45 = io_in[64];
endmodule

