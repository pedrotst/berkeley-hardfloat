module Equiv_RecF32ToF32(
    input [32:0] io_in,
    output[31:0] io_out,
    output io_isZeroGood,
    output io_isBadExp,
    output io_isSubnormalGood,
    output io_isGoodNaN
);

  wire T0;
  wire T1;
  wire[22:0] sig;
  wire T2;
  wire[2:0] exp3;
  wire[8:0] exp;
  wire T3;
  wire T4;
  wire[8:0] T144;
  wire[4:0] T145;
  wire[4:0] T146;
  wire[4:0] T147;
  wire[4:0] T148;
  wire[4:0] T149;
  wire[4:0] T150;
  wire[4:0] T151;
  wire[4:0] T152;
  wire[4:0] T153;
  wire[4:0] T154;
  wire[4:0] T155;
  wire[4:0] T156;
  wire[4:0] T157;
  wire[4:0] T158;
  wire[4:0] T159;
  wire[4:0] T160;
  wire[4:0] T161;
  wire[4:0] T162;
  wire[4:0] T163;
  wire[4:0] T164;
  wire[4:0] T165;
  wire[4:0] T166;
  wire T167;
  wire[22:0] T6;
  wire[6:0] T7;
  wire[2:0] T8;
  wire T9;
  wire[2:0] T10;
  wire[6:0] T11;
  wire[22:0] T12;
  wire[6:0] T13;
  wire[2:0] T14;
  wire T15;
  wire[2:0] T16;
  wire[6:0] T17;
  wire[1:0] T18;
  wire T19;
  wire[1:0] T20;
  wire T21;
  wire[3:0] T22;
  wire[1:0] T23;
  wire T24;
  wire[1:0] T25;
  wire[3:0] T26;
  wire T27;
  wire[1:0] T28;
  wire T29;
  wire[1:0] T30;
  wire T31;
  wire[15:0] T32;
  wire[15:0] T33;
  wire[15:0] T34;
  wire[14:0] T35;
  wire[15:0] T36;
  wire[15:0] T37;
  wire[15:0] T38;
  wire[13:0] T39;
  wire[15:0] T40;
  wire[15:0] T41;
  wire[15:0] T42;
  wire[11:0] T43;
  wire[15:0] T44;
  wire[15:0] T45;
  wire[15:0] T46;
  wire[7:0] T47;
  wire[15:0] T48;
  wire[15:0] T49;
  wire[15:0] T168;
  wire[7:0] T50;
  wire[15:0] T51;
  wire[15:0] T169;
  wire[11:0] T52;
  wire[15:0] T53;
  wire[15:0] T170;
  wire[13:0] T54;
  wire[15:0] T55;
  wire[15:0] T171;
  wire[14:0] T56;
  wire[1:0] T57;
  wire T58;
  wire[1:0] T59;
  wire T60;
  wire[3:0] T61;
  wire[1:0] T62;
  wire T63;
  wire[1:0] T64;
  wire[3:0] T65;
  wire T66;
  wire[1:0] T67;
  wire T68;
  wire[1:0] T69;
  wire T70;
  wire[15:0] T71;
  wire[15:0] T72;
  wire[15:0] T73;
  wire[14:0] T74;
  wire[15:0] T75;
  wire[15:0] T76;
  wire[15:0] T77;
  wire[13:0] T78;
  wire[15:0] T79;
  wire[15:0] T80;
  wire[15:0] T81;
  wire[11:0] T82;
  wire[15:0] T83;
  wire[15:0] T84;
  wire[15:0] T85;
  wire[7:0] T86;
  wire[15:0] T87;
  wire[15:0] T88;
  wire[15:0] T172;
  wire[7:0] T89;
  wire[15:0] T90;
  wire[15:0] T173;
  wire[11:0] T91;
  wire[15:0] T92;
  wire[15:0] T174;
  wire[13:0] T93;
  wire[15:0] T94;
  wire[15:0] T175;
  wire[14:0] T95;
  wire T176;
  wire T177;
  wire T178;
  wire T179;
  wire T180;
  wire T181;
  wire T182;
  wire T183;
  wire T184;
  wire T185;
  wire T186;
  wire T187;
  wire T188;
  wire T189;
  wire T190;
  wire T191;
  wire T192;
  wire T193;
  wire T194;
  wire T195;
  wire T196;
  wire[8:0] numZeros;
  wire T96;
  wire isSubnormal;
  wire T97;
  wire T98;
  wire T99;
  wire T100;
  wire T101;
  wire T102;
  wire T103;
  wire T104;
  wire[31:0] T105;
  wire[30:0] T106;
  wire[22:0] T107;
  wire[22:0] T108;
  wire[22:0] T109;
  wire[24:0] T110;
  wire[24:0] T111;
  wire[23:0] T112;
  wire[22:0] T113;
  wire T114;
  wire T115;
  wire[2:0] T116;
  wire[8:0] T117;
  wire T118;
  wire T119;
  wire T120;
  wire T121;
  wire T122;
  wire[1:0] T123;
  wire[22:0] T124;
  wire[23:0] T125;
  wire[4:0] T126;
  wire[4:0] T127;
  wire[9:0] T128;
  wire[9:0] T129;
  wire[9:0] T130;
  wire[23:0] T131;
  wire T132;
  wire[7:0] T133;
  wire[7:0] T134;
  wire[7:0] T197;
  wire T135;
  wire T136;
  wire T137;
  wire T138;
  wire[7:0] T139;
  wire[7:0] T140;
  wire[7:0] T141;
  wire T142;
  wire T143;


  assign io_isGoodNaN = T0;
  assign T0 = T2 | T1;
  assign T1 = sig != 23'h0;
  assign sig = io_in[22:0];
  assign T2 = exp3 != 3'h7;
  assign exp3 = exp[8:6];
  assign exp = io_in[31:23];
  assign io_isSubnormalGood = T3;
  assign T3 = T96 | T4;
  assign T4 = numZeros <= T144;
  assign T144 = {4'h0, T145};
  assign T145 = T196 ? 1'h0 : T146;
  assign T146 = T195 ? 1'h1 : T147;
  assign T147 = T194 ? 2'h2 : T148;
  assign T148 = T193 ? 2'h3 : T149;
  assign T149 = T192 ? 3'h4 : T150;
  assign T150 = T191 ? 3'h5 : T151;
  assign T151 = T190 ? 3'h6 : T152;
  assign T152 = T189 ? 3'h7 : T153;
  assign T153 = T188 ? 4'h8 : T154;
  assign T154 = T187 ? 4'h9 : T155;
  assign T155 = T186 ? 4'ha : T156;
  assign T156 = T185 ? 4'hb : T157;
  assign T157 = T184 ? 4'hc : T158;
  assign T158 = T183 ? 4'hd : T159;
  assign T159 = T182 ? 4'he : T160;
  assign T160 = T181 ? 4'hf : T161;
  assign T161 = T180 ? 5'h10 : T162;
  assign T162 = T179 ? 5'h11 : T163;
  assign T163 = T178 ? 5'h12 : T164;
  assign T164 = T177 ? 5'h13 : T165;
  assign T165 = T176 ? 5'h14 : T166;
  assign T166 = T167 ? 5'h15 : 5'h16;
  assign T167 = T6[21];
  assign T6 = {T71, T7};
  assign T7 = {T61, T8};
  assign T8 = {T57, T9};
  assign T9 = T10[2];
  assign T10 = T11[6:4];
  assign T11 = T12[22:16];
  assign T12 = {T32, T13};
  assign T13 = {T22, T14};
  assign T14 = {T18, T15};
  assign T15 = T16[2];
  assign T16 = T17[6:4];
  assign T17 = sig[22:16];
  assign T18 = {T21, T19};
  assign T19 = T20[1];
  assign T20 = T16[1:0];
  assign T21 = T20[0];
  assign T22 = {T28, T23};
  assign T23 = {T27, T24};
  assign T24 = T25[1];
  assign T25 = T26[3:2];
  assign T26 = T17[3:0];
  assign T27 = T25[0];
  assign T28 = {T31, T29};
  assign T29 = T30[1];
  assign T30 = T26[1:0];
  assign T31 = T30[0];
  assign T32 = T55 | T33;
  assign T33 = T34 & 16'haaaa;
  assign T34 = T35 << 1'h1;
  assign T35 = T36[14:0];
  assign T36 = T53 | T37;
  assign T37 = T38 & 16'hcccc;
  assign T38 = T39 << 2'h2;
  assign T39 = T40[13:0];
  assign T40 = T51 | T41;
  assign T41 = T42 & 16'hf0f0;
  assign T42 = T43 << 3'h4;
  assign T43 = T44[11:0];
  assign T44 = T49 | T45;
  assign T45 = T46 & 16'hff00;
  assign T46 = T47 << 4'h8;
  assign T47 = T48[7:0];
  assign T48 = sig[15:0];
  assign T49 = T168 & 16'hff;
  assign T168 = {8'h0, T50};
  assign T50 = T48 >> 4'h8;
  assign T51 = T169 & 16'hf0f;
  assign T169 = {4'h0, T52};
  assign T52 = T44 >> 3'h4;
  assign T53 = T170 & 16'h3333;
  assign T170 = {2'h0, T54};
  assign T54 = T40 >> 2'h2;
  assign T55 = T171 & 16'h5555;
  assign T171 = {1'h0, T56};
  assign T56 = T36 >> 1'h1;
  assign T57 = {T60, T58};
  assign T58 = T59[1];
  assign T59 = T10[1:0];
  assign T60 = T59[0];
  assign T61 = {T67, T62};
  assign T62 = {T66, T63};
  assign T63 = T64[1];
  assign T64 = T65[3:2];
  assign T65 = T11[3:0];
  assign T66 = T64[0];
  assign T67 = {T70, T68};
  assign T68 = T69[1];
  assign T69 = T65[1:0];
  assign T70 = T69[0];
  assign T71 = T94 | T72;
  assign T72 = T73 & 16'haaaa;
  assign T73 = T74 << 1'h1;
  assign T74 = T75[14:0];
  assign T75 = T92 | T76;
  assign T76 = T77 & 16'hcccc;
  assign T77 = T78 << 2'h2;
  assign T78 = T79[13:0];
  assign T79 = T90 | T80;
  assign T80 = T81 & 16'hf0f0;
  assign T81 = T82 << 3'h4;
  assign T82 = T83[11:0];
  assign T83 = T88 | T84;
  assign T84 = T85 & 16'hff00;
  assign T85 = T86 << 4'h8;
  assign T86 = T87[7:0];
  assign T87 = T12[15:0];
  assign T88 = T172 & 16'hff;
  assign T172 = {8'h0, T89};
  assign T89 = T87 >> 4'h8;
  assign T90 = T173 & 16'hf0f;
  assign T173 = {4'h0, T91};
  assign T91 = T83 >> 3'h4;
  assign T92 = T174 & 16'h3333;
  assign T174 = {2'h0, T93};
  assign T93 = T79 >> 2'h2;
  assign T94 = T175 & 16'h5555;
  assign T175 = {1'h0, T95};
  assign T95 = T75 >> 1'h1;
  assign T176 = T6[20];
  assign T177 = T6[19];
  assign T178 = T6[18];
  assign T179 = T6[17];
  assign T180 = T6[16];
  assign T181 = T6[15];
  assign T182 = T6[14];
  assign T183 = T6[13];
  assign T184 = T6[12];
  assign T185 = T6[11];
  assign T186 = T6[10];
  assign T187 = T6[9];
  assign T188 = T6[8];
  assign T189 = T6[7];
  assign T190 = T6[6];
  assign T191 = T6[5];
  assign T192 = T6[4];
  assign T193 = T6[3];
  assign T194 = T6[2];
  assign T195 = T6[1];
  assign T196 = T6[0];
  assign numZeros = exp - 9'h82;
  assign T96 = isSubnormal ^ 1'h1;
  assign isSubnormal = T98 & T97;
  assign T97 = 9'h6b <= exp;
  assign T98 = exp < 9'h82;
  assign io_isBadExp = T99;
  assign T99 = T101 & T100;
  assign T100 = exp < 9'h6b;
  assign T101 = exp3 != 3'h0;
  assign io_isZeroGood = T102;
  assign T102 = T104 | T103;
  assign T103 = sig == 23'h0;
  assign T104 = exp3 != 3'h0;
  assign io_out = T105;
  assign T105 = {T142, T106};
  assign T106 = {T133, T107};
  assign T107 = T132 ? T124 : T108;
  assign T108 = T118 ? 23'h0 : T109;
  assign T109 = T110[22:0];
  assign T110 = T111;
  assign T111 = {1'h0, T112};
  assign T112 = {T114, T113};
  assign T113 = io_in[22:0];
  assign T114 = T115 ^ 1'h1;
  assign T115 = T116 == 3'h0;
  assign T116 = T117[8:6];
  assign T117 = io_in[31:23];
  assign T118 = T119;
  assign T119 = T122 & T120;
  assign T120 = T121 ^ 1'h1;
  assign T121 = T117[6];
  assign T122 = T123 == 2'h3;
  assign T123 = T117[8:7];
  assign T124 = T125[22:0];
  assign T125 = T131 >> T126;
  assign T126 = 5'h1 - T127;
  assign T127 = T128[4:0];
  assign T128 = T129;
  assign T129 = T130;
  assign T130 = {1'h0, T117};
  assign T131 = T110 >> 1'h1;
  assign T132 = $signed(T128) < $signed(9'h82);
  assign T133 = T139 | T134;
  assign T134 = 8'h0 - T197;
  assign T197 = {7'h0, T135};
  assign T135 = T136 | T118;
  assign T136 = T137;
  assign T137 = T122 & T138;
  assign T138 = T117[6];
  assign T139 = T132 ? 8'h0 : T140;
  assign T140 = T141 - 8'h81;
  assign T141 = T128[7:0];
  assign T142 = T143;
  assign T143 = io_in[32];
endmodule
