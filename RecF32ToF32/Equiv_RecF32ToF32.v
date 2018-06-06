module Equiv_RecF32ToF32(
    input [32:0] io_in,
    output[31:0] io_out,
    output io_isBadNaN,
    output[2:0] io_firstThree,
    output[23:0] io_sig,
    output[23:0] io_compare
);

  wire[23:0] T0;
  wire[2:0] T1;
  wire T2;
  wire T3;
  wire[23:0] T4;
  wire T5;
  wire[2:0] T6;
  wire[31:0] T7;
  wire[30:0] T8;
  wire[22:0] T9;
  wire[22:0] T10;
  wire[22:0] T11;
  wire[24:0] T12;
  wire[24:0] T13;
  wire[23:0] T14;
  wire[22:0] T15;
  wire T16;
  wire T17;
  wire[2:0] T18;
  wire[8:0] T19;
  wire T20;
  wire T21;
  wire T22;
  wire T23;
  wire T24;
  wire[1:0] T25;
  wire[22:0] T26;
  wire[23:0] T27;
  wire[4:0] T28;
  wire[4:0] T29;
  wire[9:0] T30;
  wire[9:0] T31;
  wire[9:0] T32;
  wire[23:0] T33;
  wire T34;
  wire[7:0] T35;
  wire[7:0] T36;
  wire[7:0] T46;
  wire T37;
  wire T38;
  wire T39;
  wire T40;
  wire[7:0] T41;
  wire[7:0] T42;
  wire[7:0] T43;
  wire T44;
  wire T45;


  assign io_compare = 24'hffffff;
  assign io_sig = T0;
  assign T0 = io_in[23:0];
  assign io_firstThree = T1;
  assign T1 = io_in[31:29];
  assign io_isBadNaN = T2;
  assign T2 = T5 & T3;
  assign T3 = T4 != 24'hffffff;
  assign T4 = io_in[23:0];
  assign T5 = T6 == 3'h7;
  assign T6 = io_in[31:29];
  assign io_out = T7;
  assign T7 = {T44, T8};
  assign T8 = {T35, T9};
  assign T9 = T34 ? T26 : T10;
  assign T10 = T20 ? 23'h0 : T11;
  assign T11 = T12[22:0];
  assign T12 = T13;
  assign T13 = {1'h0, T14};
  assign T14 = {T16, T15};
  assign T15 = io_in[22:0];
  assign T16 = T17 ^ 1'h1;
  assign T17 = T18 == 3'h0;
  assign T18 = T19[8:6];
  assign T19 = io_in[31:23];
  assign T20 = T21;
  assign T21 = T24 & T22;
  assign T22 = T23 ^ 1'h1;
  assign T23 = T19[6];
  assign T24 = T25 == 2'h3;
  assign T25 = T19[8:7];
  assign T26 = T27[22:0];
  assign T27 = T33 >> T28;
  assign T28 = 5'h1 - T29;
  assign T29 = T30[4:0];
  assign T30 = T31;
  assign T31 = T32;
  assign T32 = {1'h0, T19};
  assign T33 = T12 >> 1'h1;
  assign T34 = $signed(T30) < $signed(9'h82);
  assign T35 = T41 | T36;
  assign T36 = 8'h0 - T46;
  assign T46 = {7'h0, T37};
  assign T37 = T38 | T20;
  assign T38 = T39;
  assign T39 = T24 & T40;
  assign T40 = T19[6];
  assign T41 = T34 ? 8'h0 : T42;
  assign T42 = T43 - 8'h81;
  assign T43 = T30[7:0];
  assign T44 = T45;
  assign T45 = io_in[32];
endmodule

