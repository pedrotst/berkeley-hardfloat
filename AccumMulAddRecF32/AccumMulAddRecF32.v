module MulAddRecFNToRaw_preMul(
    input [1:0] io_op,
    input [32:0] io_a,
    input [32:0] io_b,
    input [32:0] io_c,
    output[23:0] io_mulAddA,
    output[23:0] io_mulAddB,
    output[47:0] io_mulAddC,
    output io_toPostMul_isSigNaNAny,
    output io_toPostMul_isNaNAOrB,
    output io_toPostMul_isInfA,
    output io_toPostMul_isZeroA,
    output io_toPostMul_isInfB,
    output io_toPostMul_isZeroB,
    output io_toPostMul_signProd,
    output io_toPostMul_isNaNC,
    output io_toPostMul_isInfC,
    output io_toPostMul_isZeroC,
    output[9:0] io_toPostMul_sExpSum,
    output io_toPostMul_doSubMags,
    output io_toPostMul_CIsDominant,
    output[4:0] io_toPostMul_CDom_CAlignDist,
    output[25:0] io_toPostMul_highAlignedSigC,
    output io_toPostMul_bit0AlignedSigC
);

  wire T0;
  wire[75:0] alignedSigC;
  wire T1;
  wire T2;
  wire reduced4CExtra;
  wire[6:0] T3;
  wire[6:0] T144;
  wire[5:0] T4;
  wire[1:0] T5;
  wire T6;
  wire[1:0] T7;
  wire[5:0] T8;
  wire[32:0] T9;
  wire[4:0] T10;
  wire[6:0] CAlignDist;
  wire[6:0] T11;
  wire[6:0] T12;
  wire[9:0] posNatCAlignDist;
  wire[11:0] sNatCAlignDist;
  wire[10:0] T145;
  wire[9:0] rawC_sExp;
  wire[9:0] T13;
  wire[9:0] T14;
  wire[8:0] T15;
  wire T146;
  wire[11:0] sExpAlignedProd;
  wire[11:0] T16;
  wire[10:0] T147;
  wire[9:0] rawB_sExp;
  wire[9:0] T17;
  wire[9:0] T18;
  wire[8:0] T19;
  wire T148;
  wire[10:0] T149;
  wire[9:0] rawA_sExp;
  wire[9:0] T20;
  wire[9:0] T21;
  wire[8:0] T22;
  wire T150;
  wire T23;
  wire isMinCAlign;
  wire T24;
  wire T25;
  wire rawB_isZero;
  wire T26;
  wire[2:0] T27;
  wire rawA_isZero;
  wire T28;
  wire[2:0] T29;
  wire T30;
  wire[3:0] T31;
  wire[1:0] T32;
  wire T33;
  wire[1:0] T34;
  wire[3:0] T35;
  wire T36;
  wire[1:0] T37;
  wire T38;
  wire[1:0] T39;
  wire T40;
  wire[6:0] T41;
  wire[6:0] T42;
  wire[3:0] T43;
  wire[1:0] T44;
  wire T45;
  wire T46;
  wire[3:0] T47;
  wire[26:0] T48;
  wire[24:0] rawC_sig;
  wire[24:0] T49;
  wire[23:0] T50;
  wire[22:0] T51;
  wire T52;
  wire T53;
  wire[2:0] T54;
  wire T55;
  wire T56;
  wire[3:0] T57;
  wire[1:0] T58;
  wire T59;
  wire T60;
  wire[3:0] T61;
  wire T62;
  wire T63;
  wire[3:0] T64;
  wire[2:0] T65;
  wire[1:0] T66;
  wire T67;
  wire T68;
  wire[3:0] T69;
  wire T70;
  wire T71;
  wire[3:0] T72;
  wire T73;
  wire T74;
  wire[2:0] T75;
  wire T76;
  wire[2:0] T77;
  wire[77:0] mainAlignedSigC;
  wire[77:0] T78;
  wire[77:0] T79;
  wire[52:0] T80;
  wire[52:0] T151;
  wire[24:0] T81;
  wire[24:0] T82;
  wire T83;
  wire T84;
  wire T85;
  wire[2:0] T86;
  wire doSubMags;
  wire T87;
  wire T88;
  wire rawC_sign;
  wire T89;
  wire signProd;
  wire T90;
  wire T91;
  wire rawB_sign;
  wire T92;
  wire rawA_sign;
  wire T93;
  wire[74:0] T94;
  wire[25:0] T95;
  wire[4:0] T96;
  wire CIsDominant;
  wire T97;
  wire T98;
  wire T99;
  wire rawC_isZero;
  wire[9:0] T152;
  wire[11:0] T100;
  wire[11:0] T101;
  wire[10:0] T153;
  wire T154;
  wire rawC_isInf;
  wire T102;
  wire T103;
  wire T104;
  wire T105;
  wire[1:0] T106;
  wire rawC_isNaN;
  wire T107;
  wire T108;
  wire rawB_isInf;
  wire T109;
  wire T110;
  wire T111;
  wire T112;
  wire[1:0] T113;
  wire rawA_isInf;
  wire T114;
  wire T115;
  wire T116;
  wire T117;
  wire[1:0] T118;
  wire T119;
  wire rawB_isNaN;
  wire T120;
  wire T121;
  wire rawA_isNaN;
  wire T122;
  wire T123;
  wire T124;
  wire T125;
  wire T126;
  wire T127;
  wire T128;
  wire T129;
  wire T130;
  wire T131;
  wire[24:0] rawB_sig;
  wire[24:0] T132;
  wire[23:0] T133;
  wire[22:0] T134;
  wire T135;
  wire T136;
  wire T137;
  wire T138;
  wire[24:0] rawA_sig;
  wire[24:0] T139;
  wire[23:0] T140;
  wire[22:0] T141;
  wire T142;
  wire[47:0] T143;
  wire[23:0] T155;
  wire[23:0] T156;


  assign io_toPostMul_bit0AlignedSigC = T0;
  assign T0 = alignedSigC[0];
  assign alignedSigC = {T94, T1};
  assign T1 = doSubMags ? T83 : T2;
  assign T2 = T76 | reduced4CExtra;
  assign reduced4CExtra = T3 != 7'h0;
  assign T3 = T41 & T144;
  assign T144 = {1'h0, T4};
  assign T4 = {T31, T5};
  assign T5 = {T30, T6};
  assign T6 = T7[1];
  assign T7 = T8[5:4];
  assign T8 = T9[19:14];
  assign T9 = $signed(33'h100000000) >>> T10;
  assign T10 = CAlignDist >> 2'h2;
  assign CAlignDist = isMinCAlign ? 7'h0 : T11;
  assign T11 = T23 ? T12 : 7'h4a;
  assign T12 = posNatCAlignDist[6:0];
  assign posNatCAlignDist = sNatCAlignDist[9:0];
  assign sNatCAlignDist = sExpAlignedProd - T145;
  assign T145 = {T146, rawC_sExp};
  assign rawC_sExp = T13;
  assign T13 = T14;
  assign T14 = {1'h0, T15};
  assign T15 = io_c[31:23];
  assign T146 = rawC_sExp[9];
  assign sExpAlignedProd = T16 + 11'h71b;
  assign T16 = T149 + T147;
  assign T147 = {T148, rawB_sExp};
  assign rawB_sExp = T17;
  assign T17 = T18;
  assign T18 = {1'h0, T19};
  assign T19 = io_b[31:23];
  assign T148 = rawB_sExp[9];
  assign T149 = {T150, rawA_sExp};
  assign rawA_sExp = T20;
  assign T20 = T21;
  assign T21 = {1'h0, T22};
  assign T22 = io_a[31:23];
  assign T150 = rawA_sExp[9];
  assign T23 = posNatCAlignDist < 10'h4a;
  assign isMinCAlign = T25 | T24;
  assign T24 = $signed(sNatCAlignDist) < $signed(1'h0);
  assign T25 = rawA_isZero | rawB_isZero;
  assign rawB_isZero = T26;
  assign T26 = T27 == 3'h0;
  assign T27 = T19[8:6];
  assign rawA_isZero = T28;
  assign T28 = T29 == 3'h0;
  assign T29 = T22[8:6];
  assign T30 = T7[0];
  assign T31 = {T37, T32};
  assign T32 = {T36, T33};
  assign T33 = T34[1];
  assign T34 = T35[3:2];
  assign T35 = T8[3:0];
  assign T36 = T34[0];
  assign T37 = {T40, T38};
  assign T38 = T39[1];
  assign T39 = T35[1:0];
  assign T40 = T39[0];
  assign T41 = T42;
  assign T42 = {T65, T43};
  assign T43 = {T58, T44};
  assign T44 = {T55, T45};
  assign T45 = T46;
  assign T46 = T47 != 4'h0;
  assign T47 = T48[3:0];
  assign T48 = rawC_sig << 2'h2;
  assign rawC_sig = T49;
  assign T49 = {1'h0, T50};
  assign T50 = {T52, T51};
  assign T51 = io_c[22:0];
  assign T52 = T53 ^ 1'h1;
  assign T53 = T54 == 3'h0;
  assign T54 = T15[8:6];
  assign T55 = T56;
  assign T56 = T57 != 4'h0;
  assign T57 = T48[7:4];
  assign T58 = {T62, T59};
  assign T59 = T60;
  assign T60 = T61 != 4'h0;
  assign T61 = T48[11:8];
  assign T62 = T63;
  assign T63 = T64 != 4'h0;
  assign T64 = T48[15:12];
  assign T65 = {T73, T66};
  assign T66 = {T70, T67};
  assign T67 = T68;
  assign T68 = T69 != 4'h0;
  assign T69 = T48[19:16];
  assign T70 = T71;
  assign T71 = T72 != 4'h0;
  assign T72 = T48[23:20];
  assign T73 = T74;
  assign T74 = T75 != 3'h0;
  assign T75 = T48[26:24];
  assign T76 = T77 != 3'h0;
  assign T77 = mainAlignedSigC[2:0];
  assign mainAlignedSigC = $signed(T78) >>> CAlignDist;
  assign T78 = T79;
  assign T79 = {T81, T80};
  assign T80 = 53'h0 - T151;
  assign T151 = {52'h0, doSubMags};
  assign T81 = doSubMags ? T82 : rawC_sig;
  assign T82 = ~ rawC_sig;
  assign T83 = T85 & T84;
  assign T84 = reduced4CExtra ^ 1'h1;
  assign T85 = T86 == 3'h7;
  assign T86 = mainAlignedSigC[2:0];
  assign doSubMags = T88 ^ T87;
  assign T87 = io_op[0];
  assign T88 = signProd ^ rawC_sign;
  assign rawC_sign = T89;
  assign T89 = io_c[32];
  assign signProd = T91 ^ T90;
  assign T90 = io_op[1];
  assign T91 = rawA_sign ^ rawB_sign;
  assign rawB_sign = T92;
  assign T92 = io_b[32];
  assign rawA_sign = T93;
  assign T93 = io_a[32];
  assign T94 = $signed(mainAlignedSigC) >>> 2'h3;
  assign io_toPostMul_highAlignedSigC = T95;
  assign T95 = alignedSigC[74:49];
  assign io_toPostMul_CDom_CAlignDist = T96;
  assign T96 = CAlignDist[4:0];
  assign io_toPostMul_CIsDominant = CIsDominant;
  assign CIsDominant = T99 & T97;
  assign T97 = isMinCAlign | T98;
  assign T98 = posNatCAlignDist <= 10'h18;
  assign T99 = rawC_isZero ^ 1'h1;
  assign rawC_isZero = T53;
  assign io_toPostMul_doSubMags = doSubMags;
  assign io_toPostMul_sExpSum = T152;
  assign T152 = T100[9:0];
  assign T100 = CIsDominant ? T153 : T101;
  assign T101 = sExpAlignedProd - 11'h18;
  assign T153 = {T154, rawC_sExp};
  assign T154 = rawC_sExp[9];
  assign io_toPostMul_isZeroC = rawC_isZero;
  assign io_toPostMul_isInfC = rawC_isInf;
  assign rawC_isInf = T102;
  assign T102 = T105 & T103;
  assign T103 = T104 ^ 1'h1;
  assign T104 = T15[6];
  assign T105 = T106 == 2'h3;
  assign T106 = T15[8:7];
  assign io_toPostMul_isNaNC = rawC_isNaN;
  assign rawC_isNaN = T107;
  assign T107 = T105 & T108;
  assign T108 = T15[6];
  assign io_toPostMul_signProd = signProd;
  assign io_toPostMul_isZeroB = rawB_isZero;
  assign io_toPostMul_isInfB = rawB_isInf;
  assign rawB_isInf = T109;
  assign T109 = T112 & T110;
  assign T110 = T111 ^ 1'h1;
  assign T111 = T19[6];
  assign T112 = T113 == 2'h3;
  assign T113 = T19[8:7];
  assign io_toPostMul_isZeroA = rawA_isZero;
  assign io_toPostMul_isInfA = rawA_isInf;
  assign rawA_isInf = T114;
  assign T114 = T117 & T115;
  assign T115 = T116 ^ 1'h1;
  assign T116 = T22[6];
  assign T117 = T118 == 2'h3;
  assign T118 = T22[8:7];
  assign io_toPostMul_isNaNAOrB = T119;
  assign T119 = rawA_isNaN | rawB_isNaN;
  assign rawB_isNaN = T120;
  assign T120 = T112 & T121;
  assign T121 = T19[6];
  assign rawA_isNaN = T122;
  assign T122 = T117 & T123;
  assign T123 = T22[6];
  assign io_toPostMul_isSigNaNAny = T124;
  assign T124 = T128 | T125;
  assign T125 = rawC_isNaN & T126;
  assign T126 = T127 ^ 1'h1;
  assign T127 = rawC_sig[22];
  assign T128 = T136 | T129;
  assign T129 = rawB_isNaN & T130;
  assign T130 = T131 ^ 1'h1;
  assign T131 = rawB_sig[22];
  assign rawB_sig = T132;
  assign T132 = {1'h0, T133};
  assign T133 = {T135, T134};
  assign T134 = io_b[22:0];
  assign T135 = T26 ^ 1'h1;
  assign T136 = rawA_isNaN & T137;
  assign T137 = T138 ^ 1'h1;
  assign T138 = rawA_sig[22];
  assign rawA_sig = T139;
  assign T139 = {1'h0, T140};
  assign T140 = {T142, T141};
  assign T141 = io_a[22:0];
  assign T142 = T28 ^ 1'h1;
  assign io_mulAddC = T143;
  assign T143 = alignedSigC[48:1];
  assign io_mulAddB = T155;
  assign T155 = rawB_sig[23:0];
  assign io_mulAddA = T156;
  assign T156 = rawA_sig[23:0];
endmodule

module MulAddRecFNToRaw_postMul(
    input  io_fromPreMul_isSigNaNAny,
    input  io_fromPreMul_isNaNAOrB,
    input  io_fromPreMul_isInfA,
    input  io_fromPreMul_isZeroA,
    input  io_fromPreMul_isInfB,
    input  io_fromPreMul_isZeroB,
    input  io_fromPreMul_signProd,
    input  io_fromPreMul_isNaNC,
    input  io_fromPreMul_isInfC,
    input  io_fromPreMul_isZeroC,
    input [9:0] io_fromPreMul_sExpSum,
    input  io_fromPreMul_doSubMags,
    input  io_fromPreMul_CIsDominant,
    input [4:0] io_fromPreMul_CDom_CAlignDist,
    input [25:0] io_fromPreMul_highAlignedSigC,
    input  io_fromPreMul_bit0AlignedSigC,
    input [48:0] io_mulAddResult,
    input [2:0] io_roundingMode,
    output io_invalidExc,
    output io_rawOut_isNaN,
    output io_rawOut_isInf,
    output io_rawOut_isZero,
    output io_rawOut_sign,
    output[9:0] io_rawOut_sExp,
    output[26:0] io_rawOut_sig
);

  wire[26:0] T0;
  wire[26:0] notCDom_sig;
  wire T1;
  wire notCDom_reduced4SigExtra;
  wire[6:0] T2;
  wire[6:0] T326;
  wire[5:0] T3;
  wire[1:0] T4;
  wire T5;
  wire[1:0] T6;
  wire[5:0] T7;
  wire[16:0] T8;
  wire[3:0] T9;
  wire[3:0] T10;
  wire[4:0] T327;
  wire[4:0] T328;
  wire[4:0] T329;
  wire[4:0] T330;
  wire[4:0] T331;
  wire[4:0] T332;
  wire[4:0] T333;
  wire[4:0] T334;
  wire[4:0] T335;
  wire[4:0] T336;
  wire[4:0] T337;
  wire[4:0] T338;
  wire[4:0] T339;
  wire[4:0] T340;
  wire[4:0] T341;
  wire[4:0] T342;
  wire[4:0] T343;
  wire[4:0] T344;
  wire[4:0] T345;
  wire[4:0] T346;
  wire[4:0] T347;
  wire[4:0] T348;
  wire[4:0] T349;
  wire[4:0] T350;
  wire[4:0] T351;
  wire T352;
  wire[25:0] T11;
  wire[9:0] T12;
  wire[1:0] T13;
  wire T14;
  wire[1:0] T15;
  wire[9:0] T16;
  wire[25:0] notCDom_reduced2AbsSigSum;
  wire[25:0] T17;
  wire[12:0] T18;
  wire[6:0] T19;
  wire[3:0] T20;
  wire[1:0] T21;
  wire T22;
  wire T23;
  wire[1:0] T24;
  wire[50:0] notCDom_absSigSum;
  wire[50:0] T25;
  wire[50:0] T353;
  wire[50:0] T26;
  wire[74:0] sigSum;
  wire[48:0] T27;
  wire[47:0] T28;
  wire[25:0] T29;
  wire[25:0] T30;
  wire T31;
  wire[50:0] T32;
  wire[50:0] T33;
  wire notCDom_signSigSum;
  wire T34;
  wire T35;
  wire[1:0] T36;
  wire[1:0] T37;
  wire T38;
  wire T39;
  wire[1:0] T40;
  wire T41;
  wire T42;
  wire[1:0] T43;
  wire[2:0] T44;
  wire[1:0] T45;
  wire T46;
  wire T47;
  wire[1:0] T48;
  wire T49;
  wire T50;
  wire[1:0] T51;
  wire T52;
  wire T53;
  wire[1:0] T54;
  wire[5:0] T55;
  wire[2:0] T56;
  wire[1:0] T57;
  wire T58;
  wire T59;
  wire[1:0] T60;
  wire T61;
  wire T62;
  wire[1:0] T63;
  wire T64;
  wire T65;
  wire[1:0] T66;
  wire[2:0] T67;
  wire[1:0] T68;
  wire T69;
  wire T70;
  wire[1:0] T71;
  wire T72;
  wire T73;
  wire[1:0] T74;
  wire T75;
  wire T76;
  wire[1:0] T77;
  wire[12:0] T78;
  wire[6:0] T79;
  wire[3:0] T80;
  wire[1:0] T81;
  wire T82;
  wire T83;
  wire[1:0] T84;
  wire T85;
  wire T86;
  wire[1:0] T87;
  wire[1:0] T88;
  wire T89;
  wire T90;
  wire[1:0] T91;
  wire T92;
  wire T93;
  wire[1:0] T94;
  wire[2:0] T95;
  wire[1:0] T96;
  wire T97;
  wire T98;
  wire[1:0] T99;
  wire T100;
  wire T101;
  wire[1:0] T102;
  wire T103;
  wire T104;
  wire[1:0] T105;
  wire[5:0] T106;
  wire[2:0] T107;
  wire[1:0] T108;
  wire T109;
  wire T110;
  wire[1:0] T111;
  wire T112;
  wire T113;
  wire[1:0] T114;
  wire T115;
  wire T116;
  wire[1:0] T117;
  wire[2:0] T118;
  wire[1:0] T119;
  wire T120;
  wire T121;
  wire[1:0] T122;
  wire T123;
  wire T124;
  wire[1:0] T125;
  wire T126;
  wire T127;
  wire T128;
  wire T129;
  wire[7:0] T130;
  wire[7:0] T131;
  wire[7:0] T132;
  wire[6:0] T133;
  wire[7:0] T134;
  wire[7:0] T135;
  wire[7:0] T136;
  wire[5:0] T137;
  wire[7:0] T138;
  wire[7:0] T139;
  wire[7:0] T140;
  wire[3:0] T141;
  wire[7:0] T142;
  wire[7:0] T143;
  wire[7:0] T354;
  wire[3:0] T144;
  wire[7:0] T145;
  wire[7:0] T355;
  wire[5:0] T146;
  wire[7:0] T147;
  wire[7:0] T356;
  wire[6:0] T148;
  wire[15:0] T149;
  wire[15:0] T150;
  wire[15:0] T151;
  wire[14:0] T152;
  wire[15:0] T153;
  wire[15:0] T154;
  wire[15:0] T155;
  wire[13:0] T156;
  wire[15:0] T157;
  wire[15:0] T158;
  wire[15:0] T159;
  wire[11:0] T160;
  wire[15:0] T161;
  wire[15:0] T162;
  wire[15:0] T163;
  wire[7:0] T164;
  wire[15:0] T165;
  wire[15:0] T166;
  wire[15:0] T357;
  wire[7:0] T167;
  wire[15:0] T168;
  wire[15:0] T358;
  wire[11:0] T169;
  wire[15:0] T170;
  wire[15:0] T359;
  wire[13:0] T171;
  wire[15:0] T172;
  wire[15:0] T360;
  wire[14:0] T173;
  wire T361;
  wire T362;
  wire T363;
  wire T364;
  wire T365;
  wire T366;
  wire T367;
  wire T368;
  wire T369;
  wire T370;
  wire T371;
  wire T372;
  wire T373;
  wire T374;
  wire T375;
  wire T376;
  wire T377;
  wire T378;
  wire T379;
  wire T380;
  wire T381;
  wire T382;
  wire T383;
  wire T384;
  wire T174;
  wire[3:0] T175;
  wire[1:0] T176;
  wire T177;
  wire[1:0] T178;
  wire[3:0] T179;
  wire T180;
  wire[1:0] T181;
  wire T182;
  wire[1:0] T183;
  wire T184;
  wire[6:0] T185;
  wire[6:0] T186;
  wire[3:0] T187;
  wire[1:0] T188;
  wire T189;
  wire T190;
  wire[1:0] T191;
  wire[12:0] T192;
  wire[12:0] T193;
  wire T194;
  wire T195;
  wire[1:0] T196;
  wire[1:0] T197;
  wire T198;
  wire T199;
  wire[1:0] T200;
  wire T201;
  wire T202;
  wire[1:0] T203;
  wire[2:0] T204;
  wire[1:0] T205;
  wire T206;
  wire T207;
  wire[1:0] T208;
  wire T209;
  wire T210;
  wire[1:0] T211;
  wire T212;
  wire T213;
  wire T214;
  wire T215;
  wire[2:0] T216;
  wire[28:0] notCDom_mainSig;
  wire[113:0] T217;
  wire[5:0] notCDom_nearNormDist;
  wire[25:0] T218;
  wire[26:0] CDom_sig;
  wire T219;
  wire CDom_absSigSumExtra;
  wire T220;
  wire[24:0] T221;
  wire T222;
  wire[23:0] T223;
  wire[23:0] T224;
  wire T225;
  wire CDom_reduced4SigExtra;
  wire[6:0] T226;
  wire[6:0] T385;
  wire[5:0] T227;
  wire[1:0] T228;
  wire T229;
  wire[1:0] T230;
  wire[5:0] T231;
  wire[8:0] T232;
  wire[2:0] T233;
  wire[2:0] T234;
  wire T235;
  wire[3:0] T236;
  wire[1:0] T237;
  wire T238;
  wire[1:0] T239;
  wire[3:0] T240;
  wire T241;
  wire[1:0] T242;
  wire T243;
  wire[1:0] T244;
  wire T245;
  wire[6:0] T246;
  wire[6:0] T247;
  wire[3:0] T248;
  wire[1:0] T249;
  wire T250;
  wire T251;
  wire[3:0] T252;
  wire[26:0] T253;
  wire[23:0] T254;
  wire[49:0] CDom_absSigSum;
  wire[49:0] T255;
  wire[48:0] T256;
  wire[46:0] T257;
  wire[1:0] T258;
  wire[49:0] T259;
  wire[49:0] T260;
  wire T261;
  wire T262;
  wire[3:0] T263;
  wire[1:0] T264;
  wire T265;
  wire T266;
  wire[3:0] T267;
  wire T268;
  wire T269;
  wire[3:0] T270;
  wire[2:0] T271;
  wire[1:0] T272;
  wire T273;
  wire T274;
  wire[3:0] T275;
  wire T276;
  wire T277;
  wire[3:0] T278;
  wire T279;
  wire T280;
  wire[2:0] T281;
  wire T282;
  wire[2:0] T283;
  wire[28:0] CDom_mainSig;
  wire[80:0] T284;
  wire[25:0] T285;
  wire[9:0] T286;
  wire[9:0] notCDom_sExp;
  wire[9:0] T386;
  wire[6:0] T287;
  wire[6:0] T288;
  wire[2:0] T387;
  wire T388;
  wire[9:0] CDom_sExp;
  wire[9:0] T389;
  wire[1:0] T289;
  wire[1:0] T290;
  wire[7:0] T390;
  wire T391;
  wire T291;
  wire T292;
  wire T293;
  wire notCDom_sign;
  wire T294;
  wire roundingMode_min;
  wire notCDom_completeCancellation;
  wire[1:0] T295;
  wire CDom_sign;
  wire T296;
  wire T297;
  wire notNaN_addZeros;
  wire T298;
  wire T299;
  wire notNaN_isInfOut;
  wire notNaN_isInfProd;
  wire T300;
  wire T301;
  wire T302;
  wire T303;
  wire T304;
  wire T305;
  wire T306;
  wire T307;
  wire T308;
  wire T309;
  wire T310;
  wire T311;
  wire T312;
  wire T313;
  wire T314;
  wire T315;
  wire T316;
  wire T317;
  wire T318;
  wire T319;
  wire T320;
  wire T321;
  wire T322;
  wire T323;
  wire T324;
  wire T325;


  assign io_rawOut_sig = T0;
  assign T0 = io_fromPreMul_CIsDominant ? CDom_sig : notCDom_sig;
  assign notCDom_sig = {T218, T1};
  assign T1 = T215 | notCDom_reduced4SigExtra;
  assign notCDom_reduced4SigExtra = T2 != 7'h0;
  assign T2 = T185 & T326;
  assign T326 = {1'h0, T3};
  assign T3 = {T175, T4};
  assign T4 = {T174, T5};
  assign T5 = T6[1];
  assign T6 = T7[5:4];
  assign T7 = T8[6:1];
  assign T8 = $signed(17'h10000) >>> T9;
  assign T9 = ~ T10;
  assign T10 = T327 >> 1'h1;
  assign T327 = T384 ? 1'h0 : T328;
  assign T328 = T383 ? 1'h1 : T329;
  assign T329 = T382 ? 2'h2 : T330;
  assign T330 = T381 ? 2'h3 : T331;
  assign T331 = T380 ? 3'h4 : T332;
  assign T332 = T379 ? 3'h5 : T333;
  assign T333 = T378 ? 3'h6 : T334;
  assign T334 = T377 ? 3'h7 : T335;
  assign T335 = T376 ? 4'h8 : T336;
  assign T336 = T375 ? 4'h9 : T337;
  assign T337 = T374 ? 4'ha : T338;
  assign T338 = T373 ? 4'hb : T339;
  assign T339 = T372 ? 4'hc : T340;
  assign T340 = T371 ? 4'hd : T341;
  assign T341 = T370 ? 4'he : T342;
  assign T342 = T369 ? 4'hf : T343;
  assign T343 = T368 ? 5'h10 : T344;
  assign T344 = T367 ? 5'h11 : T345;
  assign T345 = T366 ? 5'h12 : T346;
  assign T346 = T365 ? 5'h13 : T347;
  assign T347 = T364 ? 5'h14 : T348;
  assign T348 = T363 ? 5'h15 : T349;
  assign T349 = T362 ? 5'h16 : T350;
  assign T350 = T361 ? 5'h17 : T351;
  assign T351 = T352 ? 5'h18 : 5'h19;
  assign T352 = T11[24];
  assign T11 = {T149, T12};
  assign T12 = {T130, T13};
  assign T13 = {T129, T14};
  assign T14 = T15[1];
  assign T15 = T16[9:8];
  assign T16 = notCDom_reduced2AbsSigSum[25:16];
  assign notCDom_reduced2AbsSigSum = T17;
  assign T17 = {T78, T18};
  assign T18 = {T55, T19};
  assign T19 = {T44, T20};
  assign T20 = {T37, T21};
  assign T21 = {T34, T22};
  assign T22 = T23;
  assign T23 = T24 != 2'h0;
  assign T24 = notCDom_absSigSum[1:0];
  assign notCDom_absSigSum = notCDom_signSigSum ? T32 : T25;
  assign T25 = T26 + T353;
  assign T353 = {50'h0, io_fromPreMul_doSubMags};
  assign T26 = sigSum[50:0];
  assign sigSum = {T29, T27};
  assign T27 = {T28, io_fromPreMul_bit0AlignedSigC};
  assign T28 = io_mulAddResult[47:0];
  assign T29 = T31 ? T30 : io_fromPreMul_highAlignedSigC;
  assign T30 = io_fromPreMul_highAlignedSigC + 26'h1;
  assign T31 = io_mulAddResult[48];
  assign T32 = ~ T33;
  assign T33 = sigSum[50:0];
  assign notCDom_signSigSum = sigSum[51];
  assign T34 = T35;
  assign T35 = T36 != 2'h0;
  assign T36 = notCDom_absSigSum[3:2];
  assign T37 = {T41, T38};
  assign T38 = T39;
  assign T39 = T40 != 2'h0;
  assign T40 = notCDom_absSigSum[5:4];
  assign T41 = T42;
  assign T42 = T43 != 2'h0;
  assign T43 = notCDom_absSigSum[7:6];
  assign T44 = {T52, T45};
  assign T45 = {T49, T46};
  assign T46 = T47;
  assign T47 = T48 != 2'h0;
  assign T48 = notCDom_absSigSum[9:8];
  assign T49 = T50;
  assign T50 = T51 != 2'h0;
  assign T51 = notCDom_absSigSum[11:10];
  assign T52 = T53;
  assign T53 = T54 != 2'h0;
  assign T54 = notCDom_absSigSum[13:12];
  assign T55 = {T67, T56};
  assign T56 = {T64, T57};
  assign T57 = {T61, T58};
  assign T58 = T59;
  assign T59 = T60 != 2'h0;
  assign T60 = notCDom_absSigSum[15:14];
  assign T61 = T62;
  assign T62 = T63 != 2'h0;
  assign T63 = notCDom_absSigSum[17:16];
  assign T64 = T65;
  assign T65 = T66 != 2'h0;
  assign T66 = notCDom_absSigSum[19:18];
  assign T67 = {T75, T68};
  assign T68 = {T72, T69};
  assign T69 = T70;
  assign T70 = T71 != 2'h0;
  assign T71 = notCDom_absSigSum[21:20];
  assign T72 = T73;
  assign T73 = T74 != 2'h0;
  assign T74 = notCDom_absSigSum[23:22];
  assign T75 = T76;
  assign T76 = T77 != 2'h0;
  assign T77 = notCDom_absSigSum[25:24];
  assign T78 = {T106, T79};
  assign T79 = {T95, T80};
  assign T80 = {T88, T81};
  assign T81 = {T85, T82};
  assign T82 = T83;
  assign T83 = T84 != 2'h0;
  assign T84 = notCDom_absSigSum[27:26];
  assign T85 = T86;
  assign T86 = T87 != 2'h0;
  assign T87 = notCDom_absSigSum[29:28];
  assign T88 = {T92, T89};
  assign T89 = T90;
  assign T90 = T91 != 2'h0;
  assign T91 = notCDom_absSigSum[31:30];
  assign T92 = T93;
  assign T93 = T94 != 2'h0;
  assign T94 = notCDom_absSigSum[33:32];
  assign T95 = {T103, T96};
  assign T96 = {T100, T97};
  assign T97 = T98;
  assign T98 = T99 != 2'h0;
  assign T99 = notCDom_absSigSum[35:34];
  assign T100 = T101;
  assign T101 = T102 != 2'h0;
  assign T102 = notCDom_absSigSum[37:36];
  assign T103 = T104;
  assign T104 = T105 != 2'h0;
  assign T105 = notCDom_absSigSum[39:38];
  assign T106 = {T118, T107};
  assign T107 = {T115, T108};
  assign T108 = {T112, T109};
  assign T109 = T110;
  assign T110 = T111 != 2'h0;
  assign T111 = notCDom_absSigSum[41:40];
  assign T112 = T113;
  assign T113 = T114 != 2'h0;
  assign T114 = notCDom_absSigSum[43:42];
  assign T115 = T116;
  assign T116 = T117 != 2'h0;
  assign T117 = notCDom_absSigSum[45:44];
  assign T118 = {T126, T119};
  assign T119 = {T123, T120};
  assign T120 = T121;
  assign T121 = T122 != 2'h0;
  assign T122 = notCDom_absSigSum[47:46];
  assign T123 = T124;
  assign T124 = T125 != 2'h0;
  assign T125 = notCDom_absSigSum[49:48];
  assign T126 = T127;
  assign T127 = T128 != 1'h0;
  assign T128 = notCDom_absSigSum[50];
  assign T129 = T15[0];
  assign T130 = T147 | T131;
  assign T131 = T132 & 8'haa;
  assign T132 = T133 << 1'h1;
  assign T133 = T134[6:0];
  assign T134 = T145 | T135;
  assign T135 = T136 & 8'hcc;
  assign T136 = T137 << 2'h2;
  assign T137 = T138[5:0];
  assign T138 = T143 | T139;
  assign T139 = T140 & 8'hf0;
  assign T140 = T141 << 3'h4;
  assign T141 = T142[3:0];
  assign T142 = T16[7:0];
  assign T143 = T354 & 8'hf;
  assign T354 = {4'h0, T144};
  assign T144 = T142 >> 3'h4;
  assign T145 = T355 & 8'h33;
  assign T355 = {2'h0, T146};
  assign T146 = T138 >> 2'h2;
  assign T147 = T356 & 8'h55;
  assign T356 = {1'h0, T148};
  assign T148 = T134 >> 1'h1;
  assign T149 = T172 | T150;
  assign T150 = T151 & 16'haaaa;
  assign T151 = T152 << 1'h1;
  assign T152 = T153[14:0];
  assign T153 = T170 | T154;
  assign T154 = T155 & 16'hcccc;
  assign T155 = T156 << 2'h2;
  assign T156 = T157[13:0];
  assign T157 = T168 | T158;
  assign T158 = T159 & 16'hf0f0;
  assign T159 = T160 << 3'h4;
  assign T160 = T161[11:0];
  assign T161 = T166 | T162;
  assign T162 = T163 & 16'hff00;
  assign T163 = T164 << 4'h8;
  assign T164 = T165[7:0];
  assign T165 = notCDom_reduced2AbsSigSum[15:0];
  assign T166 = T357 & 16'hff;
  assign T357 = {8'h0, T167};
  assign T167 = T165 >> 4'h8;
  assign T168 = T358 & 16'hf0f;
  assign T358 = {4'h0, T169};
  assign T169 = T161 >> 3'h4;
  assign T170 = T359 & 16'h3333;
  assign T359 = {2'h0, T171};
  assign T171 = T157 >> 2'h2;
  assign T172 = T360 & 16'h5555;
  assign T360 = {1'h0, T173};
  assign T173 = T153 >> 1'h1;
  assign T361 = T11[23];
  assign T362 = T11[22];
  assign T363 = T11[21];
  assign T364 = T11[20];
  assign T365 = T11[19];
  assign T366 = T11[18];
  assign T367 = T11[17];
  assign T368 = T11[16];
  assign T369 = T11[15];
  assign T370 = T11[14];
  assign T371 = T11[13];
  assign T372 = T11[12];
  assign T373 = T11[11];
  assign T374 = T11[10];
  assign T375 = T11[9];
  assign T376 = T11[8];
  assign T377 = T11[7];
  assign T378 = T11[6];
  assign T379 = T11[5];
  assign T380 = T11[4];
  assign T381 = T11[3];
  assign T382 = T11[2];
  assign T383 = T11[1];
  assign T384 = T11[0];
  assign T174 = T6[0];
  assign T175 = {T181, T176};
  assign T176 = {T180, T177};
  assign T177 = T178[1];
  assign T178 = T179[3:2];
  assign T179 = T7[3:0];
  assign T180 = T178[0];
  assign T181 = {T184, T182};
  assign T182 = T183[1];
  assign T183 = T179[1:0];
  assign T184 = T183[0];
  assign T185 = T186;
  assign T186 = {T204, T187};
  assign T187 = {T197, T188};
  assign T188 = {T194, T189};
  assign T189 = T190;
  assign T190 = T191 != 2'h0;
  assign T191 = T192[1:0];
  assign T192 = T193 << 1'h0;
  assign T193 = notCDom_reduced2AbsSigSum[12:0];
  assign T194 = T195;
  assign T195 = T196 != 2'h0;
  assign T196 = T192[3:2];
  assign T197 = {T201, T198};
  assign T198 = T199;
  assign T199 = T200 != 2'h0;
  assign T200 = T192[5:4];
  assign T201 = T202;
  assign T202 = T203 != 2'h0;
  assign T203 = T192[7:6];
  assign T204 = {T212, T205};
  assign T205 = {T209, T206};
  assign T206 = T207;
  assign T207 = T208 != 2'h0;
  assign T208 = T192[9:8];
  assign T209 = T210;
  assign T210 = T211 != 2'h0;
  assign T211 = T192[11:10];
  assign T212 = T213;
  assign T213 = T214 != 1'h0;
  assign T214 = T192[12];
  assign T215 = T216 != 3'h0;
  assign T216 = notCDom_mainSig[2:0];
  assign notCDom_mainSig = T217[51:23];
  assign T217 = notCDom_absSigSum << notCDom_nearNormDist;
  assign notCDom_nearNormDist = T327 << 1'h1;
  assign T218 = notCDom_mainSig >> 2'h3;
  assign CDom_sig = {T285, T219};
  assign T219 = T225 | CDom_absSigSumExtra;
  assign CDom_absSigSumExtra = io_fromPreMul_doSubMags ? T222 : T220;
  assign T220 = T221 != 25'h0;
  assign T221 = sigSum[25:1];
  assign T222 = T223 != 24'h0;
  assign T223 = ~ T224;
  assign T224 = sigSum[24:1];
  assign T225 = T282 | CDom_reduced4SigExtra;
  assign CDom_reduced4SigExtra = T226 != 7'h0;
  assign T226 = T246 & T385;
  assign T385 = {1'h0, T227};
  assign T227 = {T236, T228};
  assign T228 = {T235, T229};
  assign T229 = T230[1];
  assign T230 = T231[5:4];
  assign T231 = T232[6:1];
  assign T232 = $signed(9'h100) >>> T233;
  assign T233 = ~ T234;
  assign T234 = io_fromPreMul_CDom_CAlignDist >> 2'h2;
  assign T235 = T230[0];
  assign T236 = {T242, T237};
  assign T237 = {T241, T238};
  assign T238 = T239[1];
  assign T239 = T240[3:2];
  assign T240 = T231[3:0];
  assign T241 = T239[0];
  assign T242 = {T245, T243};
  assign T243 = T244[1];
  assign T244 = T240[1:0];
  assign T245 = T244[0];
  assign T246 = T247;
  assign T247 = {T271, T248};
  assign T248 = {T264, T249};
  assign T249 = {T261, T250};
  assign T250 = T251;
  assign T251 = T252 != 4'h0;
  assign T252 = T253[3:0];
  assign T253 = T254 << 2'h3;
  assign T254 = CDom_absSigSum[23:0];
  assign CDom_absSigSum = io_fromPreMul_doSubMags ? T259 : T255;
  assign T255 = {1'h0, T256};
  assign T256 = {T258, T257};
  assign T257 = sigSum[72:26];
  assign T258 = io_fromPreMul_highAlignedSigC[25:24];
  assign T259 = ~ T260;
  assign T260 = sigSum[74:25];
  assign T261 = T262;
  assign T262 = T263 != 4'h0;
  assign T263 = T253[7:4];
  assign T264 = {T268, T265};
  assign T265 = T266;
  assign T266 = T267 != 4'h0;
  assign T267 = T253[11:8];
  assign T268 = T269;
  assign T269 = T270 != 4'h0;
  assign T270 = T253[15:12];
  assign T271 = {T279, T272};
  assign T272 = {T276, T273};
  assign T273 = T274;
  assign T274 = T275 != 4'h0;
  assign T275 = T253[19:16];
  assign T276 = T277;
  assign T277 = T278 != 4'h0;
  assign T278 = T253[23:20];
  assign T279 = T280;
  assign T280 = T281 != 3'h0;
  assign T281 = T253[26:24];
  assign T282 = T283 != 3'h0;
  assign T283 = CDom_mainSig[2:0];
  assign CDom_mainSig = T284[49:21];
  assign T284 = CDom_absSigSum << io_fromPreMul_CDom_CAlignDist;
  assign T285 = CDom_mainSig >> 2'h3;
  assign io_rawOut_sExp = T286;
  assign T286 = io_fromPreMul_CIsDominant ? CDom_sExp : notCDom_sExp;
  assign notCDom_sExp = io_fromPreMul_sExpSum - T386;
  assign T386 = {T387, T287};
  assign T287 = T288;
  assign T288 = {1'h0, notCDom_nearNormDist};
  assign T387 = T388 ? 3'h7 : 3'h0;
  assign T388 = T287[6];
  assign CDom_sExp = io_fromPreMul_sExpSum - T389;
  assign T389 = {T390, T289};
  assign T289 = T290;
  assign T290 = {1'h0, io_fromPreMul_doSubMags};
  assign T390 = T391 ? 8'hff : 8'h0;
  assign T391 = T289[1];
  assign io_rawOut_sign = T291;
  assign T291 = T300 | T292;
  assign T292 = T296 & T293;
  assign T293 = io_fromPreMul_CIsDominant ? CDom_sign : notCDom_sign;
  assign notCDom_sign = notCDom_completeCancellation ? roundingMode_min : T294;
  assign T294 = io_fromPreMul_signProd ^ notCDom_signSigSum;
  assign roundingMode_min = io_roundingMode == 3'h2;
  assign notCDom_completeCancellation = T295 == 2'h0;
  assign T295 = notCDom_sig[26:25];
  assign CDom_sign = io_fromPreMul_signProd ^ io_fromPreMul_doSubMags;
  assign T296 = T299 & T297;
  assign T297 = notNaN_addZeros ^ 1'h1;
  assign notNaN_addZeros = T298 & io_fromPreMul_isZeroC;
  assign T298 = io_fromPreMul_isZeroA | io_fromPreMul_isZeroB;
  assign T299 = notNaN_isInfOut ^ 1'h1;
  assign notNaN_isInfOut = notNaN_isInfProd | io_fromPreMul_isInfC;
  assign notNaN_isInfProd = io_fromPreMul_isInfA | io_fromPreMul_isInfB;
  assign T300 = T304 | T301;
  assign T301 = T303 & T302;
  assign T302 = io_fromPreMul_signProd | CDom_sign;
  assign T303 = notNaN_addZeros & roundingMode_min;
  assign T304 = T309 | T305;
  assign T305 = T306 & CDom_sign;
  assign T306 = T307 & io_fromPreMul_signProd;
  assign T307 = notNaN_addZeros & T308;
  assign T308 = roundingMode_min ^ 1'h1;
  assign T309 = T311 | T310;
  assign T310 = io_fromPreMul_isInfC & CDom_sign;
  assign T311 = notNaN_isInfProd & io_fromPreMul_signProd;
  assign io_rawOut_isZero = T312;
  assign T312 = notNaN_addZeros | T313;
  assign T313 = T314 & notCDom_completeCancellation;
  assign T314 = io_fromPreMul_CIsDominant ^ 1'h1;
  assign io_rawOut_isInf = notNaN_isInfOut;
  assign io_rawOut_isNaN = T315;
  assign T315 = io_fromPreMul_isNaNAOrB | io_fromPreMul_isNaNC;
  assign io_invalidExc = T316;
  assign T316 = T322 | T317;
  assign T317 = T318 & io_fromPreMul_doSubMags;
  assign T318 = T319 & io_fromPreMul_isInfC;
  assign T319 = T321 & T320;
  assign T320 = io_fromPreMul_isInfA | io_fromPreMul_isInfB;
  assign T321 = io_fromPreMul_isNaNAOrB ^ 1'h1;
  assign T322 = T324 | T323;
  assign T323 = io_fromPreMul_isZeroA & io_fromPreMul_isInfB;
  assign T324 = io_fromPreMul_isSigNaNAny | T325;
  assign T325 = io_fromPreMul_isInfA & io_fromPreMul_isZeroB;
endmodule

module RoundAnyRawFNToRecFN(
    input  io_invalidExc,
    input  io_infiniteExc,
    input  io_in_isNaN,
    input  io_in_isInf,
    input  io_in_isZero,
    input  io_in_sign,
    input [9:0] io_in_sExp,
    input [26:0] io_in_sig,
    input [2:0] io_roundingMode,
    input  io_detectTininess,
    output[32:0] io_out,
    output[4:0] io_exceptionFlags
);

  wire[4:0] T0;
  wire[2:0] T1;
  wire[1:0] T2;
  wire inexact;
  wire T3;
  wire common_inexact;
  wire T4;
  wire T5;
  wire T6;
  wire[26:0] T7;
  wire[26:0] T8;
  wire[25:0] T9;
  wire[26:0] T10;
  wire[24:0] T11;
  wire[24:0] T192;
  wire doShiftSigDown1;
  wire[24:0] T12;
  wire[24:0] T13;
  wire[24:0] T193;
  wire[2:0] T14;
  wire[2:0] T15;
  wire T16;
  wire[2:0] T17;
  wire[64:0] T18;
  wire[5:0] T19;
  wire[6:0] T20;
  wire[7:0] T21;
  wire[8:0] T22;
  wire[8:0] T23;
  wire[1:0] T24;
  wire T25;
  wire[1:0] T26;
  wire T27;
  wire T28;
  wire[24:0] T29;
  wire[21:0] T30;
  wire[21:0] T31;
  wire[21:0] T32;
  wire[21:0] T33;
  wire[5:0] T34;
  wire[1:0] T35;
  wire T36;
  wire[1:0] T37;
  wire[5:0] T38;
  wire[21:0] T39;
  wire[64:0] T40;
  wire[5:0] T41;
  wire T42;
  wire[3:0] T43;
  wire[1:0] T44;
  wire T45;
  wire[1:0] T46;
  wire[3:0] T47;
  wire T48;
  wire[1:0] T49;
  wire T50;
  wire[1:0] T51;
  wire T52;
  wire[15:0] T53;
  wire[15:0] T54;
  wire[15:0] T55;
  wire[14:0] T56;
  wire[15:0] T57;
  wire[15:0] T58;
  wire[15:0] T59;
  wire[13:0] T60;
  wire[15:0] T61;
  wire[15:0] T62;
  wire[15:0] T63;
  wire[11:0] T64;
  wire[15:0] T65;
  wire[15:0] T66;
  wire[15:0] T67;
  wire[7:0] T68;
  wire[15:0] T69;
  wire[15:0] T70;
  wire[15:0] T194;
  wire[7:0] T71;
  wire[15:0] T72;
  wire[15:0] T195;
  wire[11:0] T73;
  wire[15:0] T74;
  wire[15:0] T196;
  wire[13:0] T75;
  wire[15:0] T76;
  wire[15:0] T197;
  wire[14:0] T77;
  wire T78;
  wire T79;
  wire T80;
  wire[26:0] adjustedSig;
  wire T81;
  wire[26:0] T82;
  wire[26:0] T83;
  wire[26:0] T84;
  wire common_totalUnderflow;
  wire T85;
  wire[12:0] T86;
  wire[11:0] T198;
  wire[3:0] T87;
  wire[3:0] T88;
  wire[2:0] T89;
  wire[26:0] T90;
  wire[25:0] T91;
  wire[25:0] T92;
  wire[25:0] T93;
  wire T94;
  wire roundingMode_odd;
  wire[25:0] T199;
  wire[24:0] T95;
  wire[26:0] T96;
  wire[26:0] T97;
  wire[26:0] T98;
  wire[25:0] T99;
  wire[25:0] T100;
  wire[25:0] T101;
  wire T102;
  wire T103;
  wire T104;
  wire roundingMode_near_even;
  wire[26:0] T105;
  wire[25:0] T200;
  wire[24:0] T106;
  wire[26:0] T107;
  wire T108;
  wire T109;
  wire roundMagUp;
  wire T110;
  wire T111;
  wire roundingMode_max;
  wire T112;
  wire roundingMode_min;
  wire T113;
  wire T114;
  wire roundingMode_near_maxMag;
  wire[7:0] T201;
  wire T202;
  wire[10:0] T203;
  wire T204;
  wire commonCase;
  wire T115;
  wire T116;
  wire T117;
  wire notNaN_isSpecialInfOut;
  wire T118;
  wire isNaNOut;
  wire underflow;
  wire common_underflow;
  wire T119;
  wire T120;
  wire T121;
  wire T122;
  wire T123;
  wire T124;
  wire T125;
  wire T126;
  wire[1:0] T127;
  wire T128;
  wire T129;
  wire T130;
  wire T131;
  wire T132;
  wire T133;
  wire T134;
  wire T135;
  wire T136;
  wire T137;
  wire T138;
  wire T139;
  wire T140;
  wire T141;
  wire T142;
  wire T143;
  wire T144;
  wire T145;
  wire T146;
  wire T147;
  wire T148;
  wire T149;
  wire T150;
  wire T151;
  wire[1:0] T152;
  wire overflow;
  wire common_overflow;
  wire T153;
  wire[5:0] T154;
  wire[1:0] T155;
  wire[32:0] T156;
  wire[31:0] T157;
  wire[22:0] fractOut;
  wire[22:0] T158;
  wire[22:0] T205;
  wire pegMaxFiniteMagOut;
  wire T159;
  wire overflow_roundMagUp;
  wire T160;
  wire[22:0] T161;
  wire[22:0] common_fractOut;
  wire[22:0] T162;
  wire[22:0] T163;
  wire[22:0] T164;
  wire[22:0] T165;
  wire T166;
  wire T167;
  wire[8:0] expOut;
  wire[8:0] T168;
  wire[8:0] T169;
  wire[8:0] T170;
  wire notNaN_isInfOut;
  wire T171;
  wire[8:0] T172;
  wire[8:0] T173;
  wire[8:0] T174;
  wire[8:0] T175;
  wire pegMinNonzeroMagOut;
  wire T176;
  wire T177;
  wire[8:0] T178;
  wire[8:0] T179;
  wire[8:0] T180;
  wire[8:0] T181;
  wire[8:0] T182;
  wire[8:0] T183;
  wire[8:0] T184;
  wire[8:0] T185;
  wire[8:0] T186;
  wire[8:0] T187;
  wire[8:0] T188;
  wire[8:0] T189;
  wire T190;
  wire[8:0] common_expOut;
  wire[8:0] T191;
  wire signOut;


  assign io_exceptionFlags = T0;
  assign T0 = {T155, T1};
  assign T1 = {overflow, T2};
  assign T2 = {underflow, inexact};
  assign inexact = overflow | T3;
  assign T3 = commonCase & common_inexact;
  assign common_inexact = T4;
  assign T4 = common_totalUnderflow | T5;
  assign T5 = T81 | T6;
  assign T6 = T7 != 27'h0;
  assign T7 = adjustedSig & T8;
  assign T8 = {1'h0, T9};
  assign T9 = T10 >> 1'h1;
  assign T10 = {T11, 2'h3};
  assign T11 = T12 | T192;
  assign T192 = {24'h0, doShiftSigDown1};
  assign doShiftSigDown1 = adjustedSig[26];
  assign T12 = T80 ? T13 : 25'h0;
  assign T13 = T79 ? T29 : T193;
  assign T193 = {22'h0, T14};
  assign T14 = T28 ? T15 : 3'h0;
  assign T15 = {T24, T16};
  assign T16 = T17[2];
  assign T17 = T18[2:0];
  assign T18 = $signed(65'h10000000000000000) >>> T19;
  assign T19 = T20[5:0];
  assign T20 = T21[6:0];
  assign T21 = T22[7:0];
  assign T22 = ~ T23;
  assign T23 = io_in_sExp[8:0];
  assign T24 = {T27, T25};
  assign T25 = T26[1];
  assign T26 = T17[1:0];
  assign T27 = T26[0];
  assign T28 = T20[6];
  assign T29 = {T30, 3'h7};
  assign T30 = ~ T31;
  assign T31 = T78 ? 22'h0 : T32;
  assign T32 = ~ T33;
  assign T33 = {T53, T34};
  assign T34 = {T43, T35};
  assign T35 = {T42, T36};
  assign T36 = T37[1];
  assign T37 = T38[5:4];
  assign T38 = T39[21:16];
  assign T39 = T40[63:42];
  assign T40 = $signed(65'h10000000000000000) >>> T41;
  assign T41 = T20[5:0];
  assign T42 = T37[0];
  assign T43 = {T49, T44};
  assign T44 = {T48, T45};
  assign T45 = T46[1];
  assign T46 = T47[3:2];
  assign T47 = T38[3:0];
  assign T48 = T46[0];
  assign T49 = {T52, T50};
  assign T50 = T51[1];
  assign T51 = T47[1:0];
  assign T52 = T51[0];
  assign T53 = T76 | T54;
  assign T54 = T55 & 16'haaaa;
  assign T55 = T56 << 1'h1;
  assign T56 = T57[14:0];
  assign T57 = T74 | T58;
  assign T58 = T59 & 16'hcccc;
  assign T59 = T60 << 2'h2;
  assign T60 = T61[13:0];
  assign T61 = T72 | T62;
  assign T62 = T63 & 16'hf0f0;
  assign T63 = T64 << 3'h4;
  assign T64 = T65[11:0];
  assign T65 = T70 | T66;
  assign T66 = T67 & 16'hff00;
  assign T67 = T68 << 4'h8;
  assign T68 = T69[7:0];
  assign T69 = T39[15:0];
  assign T70 = T194 & 16'hff;
  assign T194 = {8'h0, T71};
  assign T71 = T69 >> 4'h8;
  assign T72 = T195 & 16'hf0f;
  assign T195 = {4'h0, T73};
  assign T73 = T65 >> 3'h4;
  assign T74 = T196 & 16'h3333;
  assign T196 = {2'h0, T75};
  assign T75 = T61 >> 2'h2;
  assign T76 = T197 & 16'h5555;
  assign T197 = {1'h0, T77};
  assign T77 = T57 >> 1'h1;
  assign T78 = T20[6];
  assign T79 = T21[7];
  assign T80 = T22[8];
  assign adjustedSig = io_in_sig << 1'h0;
  assign T81 = T82 != 27'h0;
  assign T82 = adjustedSig & T83;
  assign T83 = T84 & T10;
  assign T84 = ~ T8;
  assign common_totalUnderflow = T85;
  assign T85 = $signed(T86) < $signed(8'h6b);
  assign T86 = T203 + T198;
  assign T198 = {T201, T87};
  assign T87 = T88;
  assign T88 = {1'h0, T89};
  assign T89 = T90 >> 5'h18;
  assign T90 = T108 ? T98 : T91;
  assign T91 = T199 | T92;
  assign T92 = T94 ? T93 : 26'h0;
  assign T93 = T83 >> 1'h1;
  assign T94 = roundingMode_odd & T5;
  assign roundingMode_odd = io_roundingMode == 3'h6;
  assign T199 = {1'h0, T95};
  assign T95 = T96 >> 2'h2;
  assign T96 = adjustedSig & T97;
  assign T97 = ~ T10;
  assign T98 = T105 & T99;
  assign T99 = ~ T100;
  assign T100 = T102 ? T101 : 26'h0;
  assign T101 = T10 >> 1'h1;
  assign T102 = T104 & T103;
  assign T103 = T6 ^ 1'h1;
  assign T104 = roundingMode_near_even & T81;
  assign roundingMode_near_even = io_roundingMode == 3'h0;
  assign T105 = T200 + 26'h1;
  assign T200 = {1'h0, T106};
  assign T106 = T107 >> 2'h2;
  assign T107 = adjustedSig | T10;
  assign T108 = T113 | T109;
  assign T109 = roundMagUp & T5;
  assign roundMagUp = T112 | T110;
  assign T110 = roundingMode_max & T111;
  assign T111 = io_in_sign ^ 1'h1;
  assign roundingMode_max = io_roundingMode == 3'h3;
  assign T112 = roundingMode_min & io_in_sign;
  assign roundingMode_min = io_roundingMode == 3'h2;
  assign T113 = T114 & T81;
  assign T114 = roundingMode_near_even | roundingMode_near_maxMag;
  assign roundingMode_near_maxMag = io_roundingMode == 3'h4;
  assign T201 = T202 ? 8'hff : 8'h0;
  assign T202 = T87[2];
  assign T203 = {T204, io_in_sExp};
  assign T204 = io_in_sExp[9];
  assign commonCase = T116 & T115;
  assign T115 = io_in_isZero ^ 1'h1;
  assign T116 = T118 & T117;
  assign T117 = notNaN_isSpecialInfOut ^ 1'h1;
  assign notNaN_isSpecialInfOut = io_infiniteExc | io_in_isInf;
  assign T118 = isNaNOut ^ 1'h1;
  assign isNaNOut = io_invalidExc | io_in_isNaN;
  assign underflow = commonCase & common_underflow;
  assign common_underflow = T119;
  assign T119 = common_totalUnderflow | T120;
  assign T120 = T146 & T121;
  assign T121 = T122 ^ 1'h1;
  assign T122 = T135 & T123;
  assign T123 = T130 | T124;
  assign T124 = roundMagUp & T125;
  assign T125 = T128 | T126;
  assign T126 = T127 != 2'h0;
  assign T127 = adjustedSig[1:0];
  assign T128 = doShiftSigDown1 & T129;
  assign T129 = adjustedSig[2];
  assign T130 = T134 & T131;
  assign T131 = doShiftSigDown1 ? T133 : T132;
  assign T132 = adjustedSig[1];
  assign T133 = adjustedSig[2];
  assign T134 = roundingMode_near_even | roundingMode_near_maxMag;
  assign T135 = T136 & T81;
  assign T136 = T140 & T137;
  assign T137 = doShiftSigDown1 ? T139 : T138;
  assign T138 = T90[24];
  assign T139 = T90[25];
  assign T140 = T145 & T141;
  assign T141 = T142 ^ 1'h1;
  assign T142 = doShiftSigDown1 ? T144 : T143;
  assign T143 = T10[3];
  assign T144 = T10[4];
  assign T145 = io_detectTininess == 1'h1;
  assign T146 = T150 & T147;
  assign T147 = doShiftSigDown1 ? T149 : T148;
  assign T148 = T10[2];
  assign T149 = T10[3];
  assign T150 = T5 & T151;
  assign T151 = $signed(T152) <= $signed(1'h0);
  assign T152 = $signed(io_in_sExp) >>> 4'h8;
  assign overflow = commonCase & common_overflow;
  assign common_overflow = T153;
  assign T153 = $signed(3'h3) <= $signed(T154);
  assign T154 = $signed(T86) >>> 3'h7;
  assign T155 = {io_invalidExc, io_infiniteExc};
  assign io_out = T156;
  assign T156 = {signOut, T157};
  assign T157 = {expOut, fractOut};
  assign fractOut = T161 | T158;
  assign T158 = 23'h0 - T205;
  assign T205 = {22'h0, pegMaxFiniteMagOut};
  assign pegMaxFiniteMagOut = overflow & T159;
  assign T159 = overflow_roundMagUp ^ 1'h1;
  assign overflow_roundMagUp = T160 | roundMagUp;
  assign T160 = roundingMode_near_even | roundingMode_near_maxMag;
  assign T161 = T166 ? T165 : common_fractOut;
  assign common_fractOut = T162;
  assign T162 = doShiftSigDown1 ? T164 : T163;
  assign T163 = T90[22:0];
  assign T164 = T90[23:1];
  assign T165 = isNaNOut ? 23'h400000 : 23'h0;
  assign T166 = T167 | common_totalUnderflow;
  assign T167 = isNaNOut | io_in_isZero;
  assign expOut = T169 | T168;
  assign T168 = isNaNOut ? 9'h1c0 : 9'h0;
  assign T169 = T172 | T170;
  assign T170 = notNaN_isInfOut ? 9'h180 : 9'h0;
  assign notNaN_isInfOut = notNaN_isSpecialInfOut | T171;
  assign T171 = overflow & overflow_roundMagUp;
  assign T172 = T174 | T173;
  assign T173 = pegMaxFiniteMagOut ? 9'h17f : 9'h0;
  assign T174 = T178 | T175;
  assign T175 = pegMinNonzeroMagOut ? 9'h6b : 9'h0;
  assign pegMinNonzeroMagOut = T177 & T176;
  assign T176 = roundMagUp | roundingMode_odd;
  assign T177 = commonCase & common_totalUnderflow;
  assign T178 = T181 & T179;
  assign T179 = ~ T180;
  assign T180 = notNaN_isInfOut ? 9'h40 : 9'h0;
  assign T181 = T184 & T182;
  assign T182 = ~ T183;
  assign T183 = pegMaxFiniteMagOut ? 9'h80 : 9'h0;
  assign T184 = T187 & T185;
  assign T185 = ~ T186;
  assign T186 = pegMinNonzeroMagOut ? 9'h194 : 9'h0;
  assign T187 = common_expOut & T188;
  assign T188 = ~ T189;
  assign T189 = T190 ? 9'h1c0 : 9'h0;
  assign T190 = io_in_isZero | common_totalUnderflow;
  assign common_expOut = T191;
  assign T191 = T86[8:0];
  assign signOut = isNaNOut ? 1'h0 : io_in_sign;
endmodule

module RoundRawFNToRecFN(
    input  io_invalidExc,
    input  io_infiniteExc,
    input  io_in_isNaN,
    input  io_in_isInf,
    input  io_in_isZero,
    input  io_in_sign,
    input [9:0] io_in_sExp,
    input [26:0] io_in_sig,
    input [2:0] io_roundingMode,
    input  io_detectTininess,
    output[32:0] io_out,
    output[4:0] io_exceptionFlags
);

  wire[32:0] roundAnyRawFNToRecFN_io_out;
  wire[4:0] roundAnyRawFNToRecFN_io_exceptionFlags;


  assign io_exceptionFlags = roundAnyRawFNToRecFN_io_exceptionFlags;
  assign io_out = roundAnyRawFNToRecFN_io_out;
  RoundAnyRawFNToRecFN roundAnyRawFNToRecFN(
       .io_invalidExc( io_invalidExc ),
       .io_infiniteExc( io_infiniteExc ),
       .io_in_isNaN( io_in_isNaN ),
       .io_in_isInf( io_in_isInf ),
       .io_in_isZero( io_in_isZero ),
       .io_in_sign( io_in_sign ),
       .io_in_sExp( io_in_sExp ),
       .io_in_sig( io_in_sig ),
       .io_roundingMode( io_roundingMode ),
       .io_detectTininess( io_detectTininess ),
       .io_out( roundAnyRawFNToRecFN_io_out ),
       .io_exceptionFlags( roundAnyRawFNToRecFN_io_exceptionFlags )
  );
endmodule

module MulAddRecFN(
    input [1:0] io_op,
    input [32:0] io_a,
    input [32:0] io_b,
    input [32:0] io_c,
    input [2:0] io_roundingMode,
    input  io_detectTininess,
    output[32:0] io_out,
    output[4:0] io_exceptionFlags
);

  wire[49:0] mulAddResult;
  wire[48:0] T1;
  wire[48:0] T2;
  wire[47:0] T0;
  wire[23:0] mulAddRecFNToRaw_preMul_io_mulAddA;
  wire[23:0] mulAddRecFNToRaw_preMul_io_mulAddB;
  wire[47:0] mulAddRecFNToRaw_preMul_io_mulAddC;
  wire mulAddRecFNToRaw_preMul_io_toPostMul_isSigNaNAny;
  wire mulAddRecFNToRaw_preMul_io_toPostMul_isNaNAOrB;
  wire mulAddRecFNToRaw_preMul_io_toPostMul_isInfA;
  wire mulAddRecFNToRaw_preMul_io_toPostMul_isZeroA;
  wire mulAddRecFNToRaw_preMul_io_toPostMul_isInfB;
  wire mulAddRecFNToRaw_preMul_io_toPostMul_isZeroB;
  wire mulAddRecFNToRaw_preMul_io_toPostMul_signProd;
  wire mulAddRecFNToRaw_preMul_io_toPostMul_isNaNC;
  wire mulAddRecFNToRaw_preMul_io_toPostMul_isInfC;
  wire mulAddRecFNToRaw_preMul_io_toPostMul_isZeroC;
  wire[9:0] mulAddRecFNToRaw_preMul_io_toPostMul_sExpSum;
  wire mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags;
  wire mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant;
  wire[4:0] mulAddRecFNToRaw_preMul_io_toPostMul_CDom_CAlignDist;
  wire[25:0] mulAddRecFNToRaw_preMul_io_toPostMul_highAlignedSigC;
  wire mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC;
  wire mulAddRecFNToRaw_postMul_io_invalidExc;
  wire mulAddRecFNToRaw_postMul_io_rawOut_isNaN;
  wire mulAddRecFNToRaw_postMul_io_rawOut_isInf;
  wire mulAddRecFNToRaw_postMul_io_rawOut_isZero;
  wire mulAddRecFNToRaw_postMul_io_rawOut_sign;
  wire[9:0] mulAddRecFNToRaw_postMul_io_rawOut_sExp;
  wire[26:0] mulAddRecFNToRaw_postMul_io_rawOut_sig;
  wire[32:0] roundRawFNToRecFN_io_out;
  wire[4:0] roundRawFNToRecFN_io_exceptionFlags;


  assign mulAddResult = T2 + T1;
  assign T1 = {1'h0, mulAddRecFNToRaw_preMul_io_mulAddC};
  assign T2 = {1'h0, T0};
  assign T0 = mulAddRecFNToRaw_preMul_io_mulAddA * mulAddRecFNToRaw_preMul_io_mulAddB;
  assign io_exceptionFlags = roundRawFNToRecFN_io_exceptionFlags;
  assign io_out = roundRawFNToRecFN_io_out;
  MulAddRecFNToRaw_preMul mulAddRecFNToRaw_preMul(
       .io_op( io_op ),
       .io_a( io_a ),
       .io_b( io_b ),
       .io_c( io_c ),
       .io_mulAddA( mulAddRecFNToRaw_preMul_io_mulAddA ),
       .io_mulAddB( mulAddRecFNToRaw_preMul_io_mulAddB ),
       .io_mulAddC( mulAddRecFNToRaw_preMul_io_mulAddC ),
       .io_toPostMul_isSigNaNAny( mulAddRecFNToRaw_preMul_io_toPostMul_isSigNaNAny ),
       .io_toPostMul_isNaNAOrB( mulAddRecFNToRaw_preMul_io_toPostMul_isNaNAOrB ),
       .io_toPostMul_isInfA( mulAddRecFNToRaw_preMul_io_toPostMul_isInfA ),
       .io_toPostMul_isZeroA( mulAddRecFNToRaw_preMul_io_toPostMul_isZeroA ),
       .io_toPostMul_isInfB( mulAddRecFNToRaw_preMul_io_toPostMul_isInfB ),
       .io_toPostMul_isZeroB( mulAddRecFNToRaw_preMul_io_toPostMul_isZeroB ),
       .io_toPostMul_signProd( mulAddRecFNToRaw_preMul_io_toPostMul_signProd ),
       .io_toPostMul_isNaNC( mulAddRecFNToRaw_preMul_io_toPostMul_isNaNC ),
       .io_toPostMul_isInfC( mulAddRecFNToRaw_preMul_io_toPostMul_isInfC ),
       .io_toPostMul_isZeroC( mulAddRecFNToRaw_preMul_io_toPostMul_isZeroC ),
       .io_toPostMul_sExpSum( mulAddRecFNToRaw_preMul_io_toPostMul_sExpSum ),
       .io_toPostMul_doSubMags( mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags ),
       .io_toPostMul_CIsDominant( mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant ),
       .io_toPostMul_CDom_CAlignDist( mulAddRecFNToRaw_preMul_io_toPostMul_CDom_CAlignDist ),
       .io_toPostMul_highAlignedSigC( mulAddRecFNToRaw_preMul_io_toPostMul_highAlignedSigC ),
       .io_toPostMul_bit0AlignedSigC( mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC )
  );
  MulAddRecFNToRaw_postMul mulAddRecFNToRaw_postMul(
       .io_fromPreMul_isSigNaNAny( mulAddRecFNToRaw_preMul_io_toPostMul_isSigNaNAny ),
       .io_fromPreMul_isNaNAOrB( mulAddRecFNToRaw_preMul_io_toPostMul_isNaNAOrB ),
       .io_fromPreMul_isInfA( mulAddRecFNToRaw_preMul_io_toPostMul_isInfA ),
       .io_fromPreMul_isZeroA( mulAddRecFNToRaw_preMul_io_toPostMul_isZeroA ),
       .io_fromPreMul_isInfB( mulAddRecFNToRaw_preMul_io_toPostMul_isInfB ),
       .io_fromPreMul_isZeroB( mulAddRecFNToRaw_preMul_io_toPostMul_isZeroB ),
       .io_fromPreMul_signProd( mulAddRecFNToRaw_preMul_io_toPostMul_signProd ),
       .io_fromPreMul_isNaNC( mulAddRecFNToRaw_preMul_io_toPostMul_isNaNC ),
       .io_fromPreMul_isInfC( mulAddRecFNToRaw_preMul_io_toPostMul_isInfC ),
       .io_fromPreMul_isZeroC( mulAddRecFNToRaw_preMul_io_toPostMul_isZeroC ),
       .io_fromPreMul_sExpSum( mulAddRecFNToRaw_preMul_io_toPostMul_sExpSum ),
       .io_fromPreMul_doSubMags( mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags ),
       .io_fromPreMul_CIsDominant( mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant ),
       .io_fromPreMul_CDom_CAlignDist( mulAddRecFNToRaw_preMul_io_toPostMul_CDom_CAlignDist ),
       .io_fromPreMul_highAlignedSigC( mulAddRecFNToRaw_preMul_io_toPostMul_highAlignedSigC ),
       .io_fromPreMul_bit0AlignedSigC( mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC ),
       .io_mulAddResult( mulAddResult ),
       .io_roundingMode( io_roundingMode ),
       .io_invalidExc( mulAddRecFNToRaw_postMul_io_invalidExc ),
       .io_rawOut_isNaN( mulAddRecFNToRaw_postMul_io_rawOut_isNaN ),
       .io_rawOut_isInf( mulAddRecFNToRaw_postMul_io_rawOut_isInf ),
       .io_rawOut_isZero( mulAddRecFNToRaw_postMul_io_rawOut_isZero ),
       .io_rawOut_sign( mulAddRecFNToRaw_postMul_io_rawOut_sign ),
       .io_rawOut_sExp( mulAddRecFNToRaw_postMul_io_rawOut_sExp ),
       .io_rawOut_sig( mulAddRecFNToRaw_postMul_io_rawOut_sig )
  );
  RoundRawFNToRecFN roundRawFNToRecFN(
       .io_invalidExc( mulAddRecFNToRaw_postMul_io_invalidExc ),
       .io_infiniteExc( 1'h0 ),
       .io_in_isNaN( mulAddRecFNToRaw_postMul_io_rawOut_isNaN ),
       .io_in_isInf( mulAddRecFNToRaw_postMul_io_rawOut_isInf ),
       .io_in_isZero( mulAddRecFNToRaw_postMul_io_rawOut_isZero ),
       .io_in_sign( mulAddRecFNToRaw_postMul_io_rawOut_sign ),
       .io_in_sExp( mulAddRecFNToRaw_postMul_io_rawOut_sExp ),
       .io_in_sig( mulAddRecFNToRaw_postMul_io_rawOut_sig ),
       .io_roundingMode( io_roundingMode ),
       .io_detectTininess( io_detectTininess ),
       .io_out( roundRawFNToRecFN_io_out ),
       .io_exceptionFlags( roundRawFNToRecFN_io_exceptionFlags )
  );
endmodule

module AccumMulAddRecF32(input clk, input reset,
    output[32:0] io_out,
    output[31:0] io_out2,
    output[31:0] io_out3,
    output[4:0] io_ignore
);

  reg [32:0] accum;
  wire[32:0] regInit;
  wire[28:0] T0;
  wire[22:0] T1;
  wire[24:0] T2;
  wire[5:0] T3;
  wire[9:0] T4;
  wire[9:0] T5;
  wire[3:0] T6;
  wire[2:0] T7;
  wire[2:0] T91;
  wire T8;
  wire[2:0] T9;
  wire[2:0] T10;
  wire T11;
  wire T12;
  wire[32:0] T92;
  wire[31:0] T13;
  wire[30:0] T14;
  wire[22:0] T15;
  wire[22:0] T16;
  wire[22:0] T17;
  wire[24:0] T18;
  wire[24:0] T19;
  wire[23:0] T20;
  wire[22:0] T21;
  wire T22;
  wire T23;
  wire[2:0] T24;
  wire[8:0] T25;
  wire T26;
  wire T27;
  wire T28;
  wire T29;
  wire T30;
  wire[1:0] T31;
  wire[22:0] T32;
  wire[23:0] T33;
  wire[4:0] T34;
  wire[4:0] T35;
  wire[9:0] T36;
  wire[9:0] T37;
  wire[9:0] T38;
  wire[23:0] T39;
  wire T40;
  wire[7:0] T41;
  wire[7:0] T42;
  wire[7:0] T93;
  wire T43;
  wire T44;
  wire T45;
  wire T46;
  wire[7:0] T47;
  wire[7:0] T48;
  wire[7:0] T49;
  wire T50;
  wire T51;
  wire[31:0] T52;
  wire[30:0] T53;
  wire[22:0] T54;
  wire[22:0] T55;
  wire[22:0] T56;
  wire[24:0] T57;
  wire[24:0] T58;
  wire[23:0] T59;
  wire[22:0] T60;
  wire T61;
  wire T62;
  wire[2:0] T63;
  wire[8:0] T64;
  wire T65;
  wire T66;
  wire T67;
  wire T68;
  wire T69;
  wire[1:0] T70;
  wire[22:0] T71;
  wire[23:0] T72;
  wire[4:0] T73;
  wire[4:0] T74;
  wire[9:0] T75;
  wire[9:0] T76;
  wire[9:0] T77;
  wire[23:0] T78;
  wire T79;
  wire[7:0] T80;
  wire[7:0] T81;
  wire[7:0] T94;
  wire T82;
  wire T83;
  wire T84;
  wire T85;
  wire[7:0] T86;
  wire[7:0] T87;
  wire[7:0] T88;
  wire T89;
  wire T90;
  wire[32:0] mulAdd_io_out;
  wire[4:0] mulAdd_io_exceptionFlags;

`ifndef SYNTHESIS
// synthesis translate_off
  integer initvar;
  initial begin
    #0.002;
    accum = {2{$random}};
  end
// synthesis translate_on
`endif

  assign regInit = {T6, T0};
  assign T0 = {T3, T1};
  assign T1 = T2[22:0];
  assign T2 = 25'he00001;
  assign T3 = T4[5:0];
  assign T4 = T5;
  assign T5 = 10'h82;
  assign T6 = {T12, T7};
  assign T7 = T9 | T91;
  assign T91 = {2'h0, T8};
  assign T8 = 1'h0;
  assign T9 = T11 ? 3'h0 : T10;
  assign T10 = T4[8:6];
  assign T11 = 1'h0;
  assign T12 = 1'h0;
  assign T92 = reset ? regInit : mulAdd_io_out;
  assign io_ignore = mulAdd_io_exceptionFlags;
  assign io_out3 = T13;
  assign T13 = {T50, T14};
  assign T14 = {T41, T15};
  assign T15 = T40 ? T32 : T16;
  assign T16 = T26 ? 23'h0 : T17;
  assign T17 = T18[22:0];
  assign T18 = T19;
  assign T19 = {1'h0, T20};
  assign T20 = {T22, T21};
  assign T21 = mulAdd_io_out[22:0];
  assign T22 = T23 ^ 1'h1;
  assign T23 = T24 == 3'h0;
  assign T24 = T25[8:6];
  assign T25 = mulAdd_io_out[31:23];
  assign T26 = T27;
  assign T27 = T30 & T28;
  assign T28 = T29 ^ 1'h1;
  assign T29 = T25[6];
  assign T30 = T31 == 2'h3;
  assign T31 = T25[8:7];
  assign T32 = T33[22:0];
  assign T33 = T39 >> T34;
  assign T34 = 5'h1 - T35;
  assign T35 = T36[4:0];
  assign T36 = T37;
  assign T37 = T38;
  assign T38 = {1'h0, T25};
  assign T39 = T18 >> 1'h1;
  assign T40 = $signed(T36) < $signed(9'h82);
  assign T41 = T47 | T42;
  assign T42 = 8'h0 - T93;
  assign T93 = {7'h0, T43};
  assign T43 = T44 | T26;
  assign T44 = T45;
  assign T45 = T30 & T46;
  assign T46 = T25[6];
  assign T47 = T40 ? 8'h0 : T48;
  assign T48 = T49 - 8'h81;
  assign T49 = T36[7:0];
  assign T50 = T51;
  assign T51 = mulAdd_io_out[32];
  assign io_out2 = T52;
  assign T52 = {T89, T53};
  assign T53 = {T80, T54};
  assign T54 = T79 ? T71 : T55;
  assign T55 = T65 ? 23'h0 : T56;
  assign T56 = T57[22:0];
  assign T57 = T58;
  assign T58 = {1'h0, T59};
  assign T59 = {T61, T60};
  assign T60 = accum[22:0];
  assign T61 = T62 ^ 1'h1;
  assign T62 = T63 == 3'h0;
  assign T63 = T64[8:6];
  assign T64 = accum[31:23];
  assign T65 = T66;
  assign T66 = T69 & T67;
  assign T67 = T68 ^ 1'h1;
  assign T68 = T64[6];
  assign T69 = T70 == 2'h3;
  assign T70 = T64[8:7];
  assign T71 = T72[22:0];
  assign T72 = T78 >> T73;
  assign T73 = 5'h1 - T74;
  assign T74 = T75[4:0];
  assign T75 = T76;
  assign T76 = T77;
  assign T77 = {1'h0, T64};
  assign T78 = T57 >> 1'h1;
  assign T79 = $signed(T75) < $signed(9'h82);
  assign T80 = T86 | T81;
  assign T81 = 8'h0 - T94;
  assign T94 = {7'h0, T82};
  assign T82 = T83 | T65;
  assign T83 = T84;
  assign T84 = T69 & T85;
  assign T85 = T64[6];
  assign T86 = T79 ? 8'h0 : T87;
  assign T87 = T88 - 8'h81;
  assign T88 = T75[7:0];
  assign T89 = T90;
  assign T90 = accum[32];
  assign io_out = mulAdd_io_out;
  MulAddRecFN mulAdd(
       .io_op( 2'h0 ),
       .io_a( accum ),
       .io_b( 33'h7f800000 ),
       .io_c( 33'h0 ),
       .io_roundingMode( 3'h0 ),
       .io_detectTininess( 1'h0 ),
       .io_out( mulAdd_io_out ),
       .io_exceptionFlags( mulAdd_io_exceptionFlags )
  );

  always @(posedge clk) begin
    if(reset) begin
      accum <= regInit;
    end else begin
      accum <= mulAdd_io_out;
    end
  end
endmodule

