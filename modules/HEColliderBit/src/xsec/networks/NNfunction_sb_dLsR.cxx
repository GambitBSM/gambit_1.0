#include "NNfunction_sb_dLsR.h"
#include <cmath>

double NNfunction_sb_dLsR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5519)/15.3207;
   input1 = (in1 - 0.179979)/1135.36;
   input2 = (in2 - 665.925)/626.567;
   input3 = (in3 - -53.5318)/826.488;
   input4 = (in4 - 1051.52)/946.074;
   input5 = (in5 - 878.365)/933.063;
   input6 = (in6 - 903.688)/940.659;
   input7 = (in7 - 907.426)/918.634;
   input8 = (in8 - 927.351)/978.968;
   input9 = (in9 - 901.199)/958.137;
   input10 = (in10 - 991.278)/964.158;
   input11 = (in11 - 401.047)/417.935;
   input12 = (in12 - 729.924)/878.069;
   input13 = (in13 - 501.662)/518.514;
   input14 = (in14 - 702.906)/801.601;
   input15 = (in15 - 704.787)/801.704;
   input16 = (in16 - 528.632)/551.672;
   input17 = (in17 - 766.785)/907.821;
   input18 = (in18 - 399.928)/421.972;
   input19 = (in19 - 805.578)/886.965;
   input20 = (in20 - -4.97652)/488.581;
   input21 = (in21 - 2.58465)/1164.45;
   input22 = (in22 - 8.33585)/1205.04;
   input23 = (in23 - -194.549)/589.445;
   switch(index) {
     case 0:
         return neuron0x2c414a0();
     default:
         return 0.;
   }
}

double NNfunction_sb_dLsR::Value(int index, double* input) {
   input0 = (input[0] - 23.5519)/15.3207;
   input1 = (input[1] - 0.179979)/1135.36;
   input2 = (input[2] - 665.925)/626.567;
   input3 = (input[3] - -53.5318)/826.488;
   input4 = (input[4] - 1051.52)/946.074;
   input5 = (input[5] - 878.365)/933.063;
   input6 = (input[6] - 903.688)/940.659;
   input7 = (input[7] - 907.426)/918.634;
   input8 = (input[8] - 927.351)/978.968;
   input9 = (input[9] - 901.199)/958.137;
   input10 = (input[10] - 991.278)/964.158;
   input11 = (input[11] - 401.047)/417.935;
   input12 = (input[12] - 729.924)/878.069;
   input13 = (input[13] - 501.662)/518.514;
   input14 = (input[14] - 702.906)/801.601;
   input15 = (input[15] - 704.787)/801.704;
   input16 = (input[16] - 528.632)/551.672;
   input17 = (input[17] - 766.785)/907.821;
   input18 = (input[18] - 399.928)/421.972;
   input19 = (input[19] - 805.578)/886.965;
   input20 = (input[20] - -4.97652)/488.581;
   input21 = (input[21] - 2.58465)/1164.45;
   input22 = (input[22] - 8.33585)/1205.04;
   input23 = (input[23] - -194.549)/589.445;
   switch(index) {
     case 0:
         return neuron0x2c414a0();
     default:
         return 0.;
   }
}

double NNfunction_sb_dLsR::neuron0x2c0d560() {
   return input0;
}

double NNfunction_sb_dLsR::neuron0x2c0d8a0() {
   return input1;
}

double NNfunction_sb_dLsR::neuron0x2c0dbe0() {
   return input2;
}

double NNfunction_sb_dLsR::neuron0x2c0df20() {
   return input3;
}

double NNfunction_sb_dLsR::neuron0x2c0e260() {
   return input4;
}

double NNfunction_sb_dLsR::neuron0x2c0e5a0() {
   return input5;
}

double NNfunction_sb_dLsR::neuron0x2c0e8e0() {
   return input6;
}

double NNfunction_sb_dLsR::neuron0x2c0ec20() {
   return input7;
}

double NNfunction_sb_dLsR::neuron0x2c0ef60() {
   return input8;
}

double NNfunction_sb_dLsR::neuron0x2c0f2a0() {
   return input9;
}

double NNfunction_sb_dLsR::neuron0x2c0f5e0() {
   return input10;
}

double NNfunction_sb_dLsR::neuron0x2c0f920() {
   return input11;
}

double NNfunction_sb_dLsR::neuron0x2c0fc60() {
   return input12;
}

double NNfunction_sb_dLsR::neuron0x2c0ffa0() {
   return input13;
}

double NNfunction_sb_dLsR::neuron0x2c102e0() {
   return input14;
}

double NNfunction_sb_dLsR::neuron0x2c10620() {
   return input15;
}

double NNfunction_sb_dLsR::neuron0x2c10960() {
   return input16;
}

double NNfunction_sb_dLsR::neuron0x2c10ec0() {
   return input17;
}

double NNfunction_sb_dLsR::neuron0x2c110e0() {
   return input18;
}

double NNfunction_sb_dLsR::neuron0x2c11420() {
   return input19;
}

double NNfunction_sb_dLsR::neuron0x2c11760() {
   return input20;
}

double NNfunction_sb_dLsR::neuron0x2c11aa0() {
   return input21;
}

double NNfunction_sb_dLsR::neuron0x2c11de0() {
   return input22;
}

double NNfunction_sb_dLsR::neuron0x2c12120() {
   return input23;
}

double NNfunction_sb_dLsR::input0x2c125c0() {
   double input = -0.599986;
   input += synapse0x29cd3d0();
   input += synapse0x2c0d420();
   input += synapse0x2c0d460();
   input += synapse0x2c12870();
   input += synapse0x2c128b0();
   input += synapse0x2c128f0();
   input += synapse0x2c12930();
   input += synapse0x2c12970();
   input += synapse0x2c129b0();
   input += synapse0x2c129f0();
   input += synapse0x2c12a30();
   input += synapse0x2c12a70();
   input += synapse0x2c12ab0();
   input += synapse0x2c12af0();
   input += synapse0x2c12b30();
   input += synapse0x2c12b70();
   input += synapse0x2c0d390();
   input += synapse0x2c0d3d0();
   input += synapse0x29bec70();
   input += synapse0x29becb0();
   input += synapse0x2c12dd0();
   input += synapse0x2c12e10();
   input += synapse0x2c12e50();
   input += synapse0x2c12e90();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c125c0() {
   double input = input0x2c125c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c12ed0() {
   double input = -0.499823;
   input += synapse0x2c13210();
   input += synapse0x2c13250();
   input += synapse0x2c13290();
   input += synapse0x2c132d0();
   input += synapse0x2c13310();
   input += synapse0x2c13350();
   input += synapse0x2c13390();
   input += synapse0x2c133d0();
   input += synapse0x2c13410();
   input += synapse0x2c12cc0();
   input += synapse0x2c12d00();
   input += synapse0x2c12d40();
   input += synapse0x2c12d80();
   input += synapse0x2c13660();
   input += synapse0x2c136a0();
   input += synapse0x2c136e0();
   input += synapse0x2c13060();
   input += synapse0x2c130a0();
   input += synapse0x2c13830();
   input += synapse0x2c13870();
   input += synapse0x2c138b0();
   input += synapse0x2c138f0();
   input += synapse0x2c13930();
   input += synapse0x2c13970();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c12ed0() {
   double input = input0x2c12ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c139b0() {
   double input = -0.685829;
   input += synapse0x2c13cf0();
   input += synapse0x2c13d30();
   input += synapse0x2c13d70();
   input += synapse0x2c13db0();
   input += synapse0x2c13df0();
   input += synapse0x2c13e30();
   input += synapse0x2c13e70();
   input += synapse0x2c13eb0();
   input += synapse0x2c13ef0();
   input += synapse0x2c13f30();
   input += synapse0x2c13f70();
   input += synapse0x2c13fb0();
   input += synapse0x2c13ff0();
   input += synapse0x2c14030();
   input += synapse0x2c14070();
   input += synapse0x2c140b0();
   input += synapse0x2c13b40();
   input += synapse0x2c13b80();
   input += synapse0x29ccac0();
   input += synapse0x29ccb00();
   input += synapse0x2bfc5f0();
   input += synapse0x2bfc630();
   input += synapse0x2bfc670();
   input += synapse0x2c0d4a0();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c139b0() {
   double input = input0x2c139b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x29cd240() {
   double input = -0.16744;
   input += synapse0x2c13600();
   input += synapse0x2c0d4e0();
   input += synapse0x2c0d520();
   input += synapse0x2c14200();
   input += synapse0x2c14240();
   input += synapse0x2c14280();
   input += synapse0x2c142c0();
   input += synapse0x2c14300();
   input += synapse0x2c14340();
   input += synapse0x2c14380();
   input += synapse0x2c143c0();
   input += synapse0x2c14400();
   input += synapse0x2c14440();
   input += synapse0x2c14480();
   input += synapse0x2c144c0();
   input += synapse0x2c14500();
   input += synapse0x2c13450();
   input += synapse0x2c13490();
   input += synapse0x2c14650();
   input += synapse0x2c14690();
   input += synapse0x2c146d0();
   input += synapse0x2c14710();
   input += synapse0x2c14750();
   input += synapse0x2c14790();
   return input;
}

double NNfunction_sb_dLsR::neuron0x29cd240() {
   double input = input0x29cd240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c147d0() {
   double input = -0.00135393;
   input += synapse0x2c14b10();
   input += synapse0x2c14b50();
   input += synapse0x2c14b90();
   input += synapse0x2c14bd0();
   input += synapse0x2c14c10();
   input += synapse0x2c14c50();
   input += synapse0x2c14c90();
   input += synapse0x2c14cd0();
   input += synapse0x2c14d10();
   input += synapse0x2c14d50();
   input += synapse0x2c14d90();
   input += synapse0x2c14dd0();
   input += synapse0x2c14e10();
   input += synapse0x2c14e50();
   input += synapse0x2c14e90();
   input += synapse0x2c14ed0();
   input += synapse0x2c14960();
   input += synapse0x2c149a0();
   input += synapse0x2c15020();
   input += synapse0x2c15060();
   input += synapse0x2c150a0();
   input += synapse0x2c150e0();
   input += synapse0x2c15120();
   input += synapse0x2c15160();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c147d0() {
   double input = input0x2c147d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c151a0() {
   double input = -0.451192;
   input += synapse0x2c154e0();
   input += synapse0x2c15520();
   input += synapse0x2c15560();
   input += synapse0x2c155a0();
   input += synapse0x2c155e0();
   input += synapse0x2c15620();
   input += synapse0x2c15660();
   input += synapse0x2c156a0();
   input += synapse0x2c156e0();
   input += synapse0x29cce30();
   input += synapse0x29cce70();
   input += synapse0x29cceb0();
   input += synapse0x29ccef0();
   input += synapse0x29ccf30();
   input += synapse0x29ccf70();
   input += synapse0x29ccfb0();
   input += synapse0x2c15330();
   input += synapse0x2c15370();
   input += synapse0x29cd100();
   input += synapse0x29cd140();
   input += synapse0x29cd180();
   input += synapse0x29cd1c0();
   input += synapse0x29cd200();
   input += synapse0x2c15f30();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c151a0() {
   double input = input0x2c151a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c15f70() {
   double input = -2.55274;
   input += synapse0x2c162b0();
   input += synapse0x2c162f0();
   input += synapse0x2c16330();
   input += synapse0x2c16370();
   input += synapse0x2c163b0();
   input += synapse0x2c163f0();
   input += synapse0x2c16430();
   input += synapse0x2c16470();
   input += synapse0x2c164b0();
   input += synapse0x2c164f0();
   input += synapse0x2c16530();
   input += synapse0x2c16570();
   input += synapse0x2c165b0();
   input += synapse0x2c165f0();
   input += synapse0x2c16630();
   input += synapse0x2c16670();
   input += synapse0x2c16100();
   input += synapse0x2c16140();
   input += synapse0x2c167c0();
   input += synapse0x2c16800();
   input += synapse0x2c16840();
   input += synapse0x2c16880();
   input += synapse0x2c168c0();
   input += synapse0x2c16900();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c15f70() {
   double input = input0x2c15f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c16940() {
   double input = 0.966229;
   input += synapse0x2c16c80();
   input += synapse0x2c16cc0();
   input += synapse0x2c16d00();
   input += synapse0x2c16d40();
   input += synapse0x2c16d80();
   input += synapse0x2c16dc0();
   input += synapse0x2c16e00();
   input += synapse0x2c16e40();
   input += synapse0x2c16e80();
   input += synapse0x2c16ec0();
   input += synapse0x2c16f00();
   input += synapse0x2c16f40();
   input += synapse0x2c16f80();
   input += synapse0x2c16fc0();
   input += synapse0x2c17000();
   input += synapse0x2c17040();
   input += synapse0x2c16ad0();
   input += synapse0x2c16b10();
   input += synapse0x2c17190();
   input += synapse0x2c171d0();
   input += synapse0x2c17210();
   input += synapse0x2c17250();
   input += synapse0x2c17290();
   input += synapse0x2c172d0();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c16940() {
   double input = input0x2c16940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c17310() {
   double input = -0.674758;
   input += synapse0x2c10db0();
   input += synapse0x2c10df0();
   input += synapse0x2c10e30();
   input += synapse0x2c10e70();
   input += synapse0x2c17860();
   input += synapse0x2c178a0();
   input += synapse0x2c178e0();
   input += synapse0x2c17920();
   input += synapse0x2c17960();
   input += synapse0x2c179a0();
   input += synapse0x2c179e0();
   input += synapse0x2c17a20();
   input += synapse0x2c17a60();
   input += synapse0x2c17aa0();
   input += synapse0x2c17ae0();
   input += synapse0x2c17b20();
   input += synapse0x2c174a0();
   input += synapse0x2c174e0();
   input += synapse0x2c17c70();
   input += synapse0x2c17cb0();
   input += synapse0x2c17cf0();
   input += synapse0x2c17d30();
   input += synapse0x2c17d70();
   input += synapse0x2c17db0();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c17310() {
   double input = input0x2c17310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c17df0() {
   double input = 0.171917;
   input += synapse0x2c18130();
   input += synapse0x2c18170();
   input += synapse0x2c181b0();
   input += synapse0x2c181f0();
   input += synapse0x2c18230();
   input += synapse0x2c18270();
   input += synapse0x2c182b0();
   input += synapse0x2c182f0();
   input += synapse0x2c18330();
   input += synapse0x2c18370();
   input += synapse0x2c183b0();
   input += synapse0x2c183f0();
   input += synapse0x2c18430();
   input += synapse0x2c18470();
   input += synapse0x2c184b0();
   input += synapse0x2c184f0();
   input += synapse0x2c17f80();
   input += synapse0x2c17fc0();
   input += synapse0x2c18640();
   input += synapse0x2c18680();
   input += synapse0x2c186c0();
   input += synapse0x2c18700();
   input += synapse0x2c18740();
   input += synapse0x2c18780();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c17df0() {
   double input = input0x2c17df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c187c0() {
   double input = 0.14469;
   input += synapse0x2c18b00();
   input += synapse0x2c18b40();
   input += synapse0x2c18b80();
   input += synapse0x2c18bc0();
   input += synapse0x2c18c00();
   input += synapse0x2c18c40();
   input += synapse0x2c18c80();
   input += synapse0x2c18cc0();
   input += synapse0x2c18d00();
   input += synapse0x2c18d40();
   input += synapse0x2c18d80();
   input += synapse0x2c18dc0();
   input += synapse0x2c18e00();
   input += synapse0x2c18e40();
   input += synapse0x2c18e80();
   input += synapse0x2c18ec0();
   input += synapse0x2c18950();
   input += synapse0x2c18990();
   input += synapse0x2c15720();
   input += synapse0x2c15760();
   input += synapse0x2c157a0();
   input += synapse0x2c157e0();
   input += synapse0x2c15820();
   input += synapse0x2c15860();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c187c0() {
   double input = input0x2c187c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c158a0() {
   double input = -0.495665;
   input += synapse0x2c15be0();
   input += synapse0x2c15c20();
   input += synapse0x2c15c60();
   input += synapse0x2c15ca0();
   input += synapse0x2c15ce0();
   input += synapse0x2c15d20();
   input += synapse0x2c15d60();
   input += synapse0x2c15da0();
   input += synapse0x2c15de0();
   input += synapse0x2c15e20();
   input += synapse0x2c15e60();
   input += synapse0x2c15ea0();
   input += synapse0x2c15ee0();
   input += synapse0x2c1a020();
   input += synapse0x2c1a060();
   input += synapse0x2c1a0a0();
   input += synapse0x2c15a30();
   input += synapse0x2c15a70();
   input += synapse0x2c1a1f0();
   input += synapse0x2c1a230();
   input += synapse0x2c1a270();
   input += synapse0x2c1a2b0();
   input += synapse0x2c1a2f0();
   input += synapse0x2c1a330();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c158a0() {
   double input = input0x2c158a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c1a370() {
   double input = 1.2276;
   input += synapse0x2c1a6b0();
   input += synapse0x2c1a6f0();
   input += synapse0x2c1a730();
   input += synapse0x2c1a770();
   input += synapse0x2c1a7b0();
   input += synapse0x2c1a7f0();
   input += synapse0x2c1a830();
   input += synapse0x2c1a870();
   input += synapse0x2c1a8b0();
   input += synapse0x2c1a8f0();
   input += synapse0x2c1a930();
   input += synapse0x2c1a970();
   input += synapse0x2c1a9b0();
   input += synapse0x2c1a9f0();
   input += synapse0x2c1aa30();
   input += synapse0x2c1aa70();
   input += synapse0x2c1a500();
   input += synapse0x2c1a540();
   input += synapse0x2c1abc0();
   input += synapse0x2c1ac00();
   input += synapse0x2c1ac40();
   input += synapse0x2c1ac80();
   input += synapse0x2c1acc0();
   input += synapse0x2c1ad00();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c1a370() {
   double input = input0x2c1a370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c1ad40() {
   double input = -0.189807;
   input += synapse0x2c1b080();
   input += synapse0x2c1b0c0();
   input += synapse0x2c1b100();
   input += synapse0x2c1b140();
   input += synapse0x2c1b180();
   input += synapse0x2c1b1c0();
   input += synapse0x2c1b200();
   input += synapse0x2c1b240();
   input += synapse0x2c1b280();
   input += synapse0x2c1b2c0();
   input += synapse0x2c1b300();
   input += synapse0x2c1b340();
   input += synapse0x2c1b380();
   input += synapse0x2c1b3c0();
   input += synapse0x2c1b400();
   input += synapse0x2c1b440();
   input += synapse0x2c1aed0();
   input += synapse0x2c1af10();
   input += synapse0x2c1b590();
   input += synapse0x2c1b5d0();
   input += synapse0x2c1b610();
   input += synapse0x2c1b650();
   input += synapse0x2c1b690();
   input += synapse0x2c1b6d0();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c1ad40() {
   double input = input0x2c1ad40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c1b710() {
   double input = 0.836539;
   input += synapse0x2c1ba50();
   input += synapse0x2c1ba90();
   input += synapse0x2c1bad0();
   input += synapse0x2c1bb10();
   input += synapse0x2c1bb50();
   input += synapse0x2c1bb90();
   input += synapse0x2c1bbd0();
   input += synapse0x2c1bc10();
   input += synapse0x2c1bc50();
   input += synapse0x2c1bc90();
   input += synapse0x2c1bcd0();
   input += synapse0x2c1bd10();
   input += synapse0x2c1bd50();
   input += synapse0x2c1bd90();
   input += synapse0x2c1bdd0();
   input += synapse0x2c1be10();
   input += synapse0x2c1b8a0();
   input += synapse0x2c1b8e0();
   input += synapse0x2c1bf60();
   input += synapse0x2c1bfa0();
   input += synapse0x2c1bfe0();
   input += synapse0x2c1c020();
   input += synapse0x2c1c060();
   input += synapse0x2c1c0a0();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c1b710() {
   double input = input0x2c1b710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c1c0e0() {
   double input = 0.328683;
   input += synapse0x2c1c420();
   input += synapse0x2c0d780();
   input += synapse0x2c0d7c0();
   input += synapse0x2c0dac0();
   input += synapse0x2c0db00();
   input += synapse0x2c0de00();
   input += synapse0x2c0de40();
   input += synapse0x2c0e140();
   input += synapse0x2c0e180();
   input += synapse0x2c0e480();
   input += synapse0x2c0e4c0();
   input += synapse0x2c0e7c0();
   input += synapse0x2c0e800();
   input += synapse0x2c0eb00();
   input += synapse0x2c0eb40();
   input += synapse0x2c0ee40();
   input += synapse0x2c0ee80();
   input += synapse0x2c0f180();
   input += synapse0x2c0f1c0();
   input += synapse0x2c0f4c0();
   input += synapse0x2c0f500();
   input += synapse0x2c0f800();
   input += synapse0x2c0f840();
   input += synapse0x2c0fb40();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c1c0e0() {
   double input = input0x2c1c0e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c1def0() {
   double input = -0.843266;
   input += synapse0x2c0fb80();
   input += synapse0x2c10840();
   input += synapse0x2c10880();
   input += synapse0x2c1c270();
   input += synapse0x2c1c2b0();
   input += synapse0x2c10b80();
   input += synapse0x2c10bc0();
   input += synapse0x29beb50();
   input += synapse0x29beb90();
   input += synapse0x2c11300();
   input += synapse0x2c11340();
   input += synapse0x2c11640();
   input += synapse0x2c11680();
   input += synapse0x2c11980();
   input += synapse0x2c119c0();
   input += synapse0x2c11cc0();
   input += synapse0x2c11d00();
   input += synapse0x2c12000();
   input += synapse0x2c12040();
   input += synapse0x2c12340();
   input += synapse0x2c12380();
   input += synapse0x2c0fe80();
   input += synapse0x2c0fec0();
   input += synapse0x2c1e190();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c1def0() {
   double input = input0x2c1def0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c1e1d0() {
   double input = 0.766432;
   input += synapse0x2c1e510();
   input += synapse0x2c1e550();
   input += synapse0x2c1e590();
   input += synapse0x2c1e5d0();
   input += synapse0x2c1e610();
   input += synapse0x2c1e650();
   input += synapse0x2c1e690();
   input += synapse0x2c1e6d0();
   input += synapse0x2c1e710();
   input += synapse0x2c1e750();
   input += synapse0x2c1e790();
   input += synapse0x2c1e7d0();
   input += synapse0x2c1e810();
   input += synapse0x2c1e850();
   input += synapse0x2c1e890();
   input += synapse0x2c1e8d0();
   input += synapse0x2c1e360();
   input += synapse0x2c1e3a0();
   input += synapse0x2c1ea20();
   input += synapse0x2c1ea60();
   input += synapse0x2c1eaa0();
   input += synapse0x2c1eae0();
   input += synapse0x2c1eb20();
   input += synapse0x2c1eb60();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c1e1d0() {
   double input = input0x2c1e1d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c1eba0() {
   double input = 0.144819;
   input += synapse0x2c1eee0();
   input += synapse0x2c1ef20();
   input += synapse0x2c1ef60();
   input += synapse0x2c1efa0();
   input += synapse0x2c1efe0();
   input += synapse0x2c1f020();
   input += synapse0x2c1f060();
   input += synapse0x2c1f0a0();
   input += synapse0x2c1f0e0();
   input += synapse0x2c1f120();
   input += synapse0x2c1f160();
   input += synapse0x2c1f1a0();
   input += synapse0x2c1f1e0();
   input += synapse0x2c1f220();
   input += synapse0x2c1f260();
   input += synapse0x2c1f2a0();
   input += synapse0x2c1ed30();
   input += synapse0x2c1ed70();
   input += synapse0x2c1f3f0();
   input += synapse0x2c1f430();
   input += synapse0x2c1f470();
   input += synapse0x2c1f4b0();
   input += synapse0x2c1f4f0();
   input += synapse0x2c1f530();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c1eba0() {
   double input = input0x2c1eba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c1f570() {
   double input = -0.291722;
   input += synapse0x2c1f8b0();
   input += synapse0x2c1f8f0();
   input += synapse0x2c1f930();
   input += synapse0x2c1f970();
   input += synapse0x2c1f9b0();
   input += synapse0x2c1f9f0();
   input += synapse0x2c1fa30();
   input += synapse0x2c1fa70();
   input += synapse0x2c1fab0();
   input += synapse0x2c1faf0();
   input += synapse0x2c1fb30();
   input += synapse0x2c1fb70();
   input += synapse0x2c1fbb0();
   input += synapse0x2c1fbf0();
   input += synapse0x2c1fc30();
   input += synapse0x2c1fc70();
   input += synapse0x2c1f700();
   input += synapse0x2c1f740();
   input += synapse0x2c1fdc0();
   input += synapse0x2c1fe00();
   input += synapse0x2c1fe40();
   input += synapse0x2c1fe80();
   input += synapse0x2c1fec0();
   input += synapse0x2c1ff00();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c1f570() {
   double input = input0x2c1f570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c1ff40() {
   double input = 2.88853;
   input += synapse0x2c20280();
   input += synapse0x2c202c0();
   input += synapse0x2c20300();
   input += synapse0x2c20340();
   input += synapse0x2c20380();
   input += synapse0x2c203c0();
   input += synapse0x2c20400();
   input += synapse0x2c20440();
   input += synapse0x2c20480();
   input += synapse0x2c204c0();
   input += synapse0x2c20500();
   input += synapse0x2c20540();
   input += synapse0x2c20580();
   input += synapse0x2c205c0();
   input += synapse0x2c20600();
   input += synapse0x2c20640();
   input += synapse0x2c200d0();
   input += synapse0x2c20110();
   input += synapse0x2c20790();
   input += synapse0x2c207d0();
   input += synapse0x2c20810();
   input += synapse0x2c20850();
   input += synapse0x2c20890();
   input += synapse0x2c208d0();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c1ff40() {
   double input = input0x2c1ff40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c20910() {
   double input = -0.440659;
   input += synapse0x2c20c50();
   input += synapse0x2c20c90();
   input += synapse0x2c20cd0();
   input += synapse0x2c20d10();
   input += synapse0x2c20d50();
   input += synapse0x2c20d90();
   input += synapse0x2c20dd0();
   input += synapse0x2c20e10();
   input += synapse0x2c20e50();
   input += synapse0x2c19010();
   input += synapse0x2c19050();
   input += synapse0x2c19090();
   input += synapse0x2c190d0();
   input += synapse0x2c19110();
   input += synapse0x2c19150();
   input += synapse0x2c19190();
   input += synapse0x2c20aa0();
   input += synapse0x2c20ae0();
   input += synapse0x2c192e0();
   input += synapse0x2c19320();
   input += synapse0x2c19360();
   input += synapse0x2c193a0();
   input += synapse0x2c193e0();
   input += synapse0x2c19420();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c20910() {
   double input = input0x2c20910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c19460() {
   double input = -0.136534;
   input += synapse0x2c197a0();
   input += synapse0x2c197e0();
   input += synapse0x2c19820();
   input += synapse0x2c19860();
   input += synapse0x2c198a0();
   input += synapse0x2c198e0();
   input += synapse0x2c19920();
   input += synapse0x2c19960();
   input += synapse0x2c199a0();
   input += synapse0x2c199e0();
   input += synapse0x2c19a20();
   input += synapse0x2c19a60();
   input += synapse0x2c19aa0();
   input += synapse0x2c19ae0();
   input += synapse0x2c19b20();
   input += synapse0x2c19b60();
   input += synapse0x2c195f0();
   input += synapse0x2c19630();
   input += synapse0x2c19cb0();
   input += synapse0x2c19cf0();
   input += synapse0x2c19d30();
   input += synapse0x2c19d70();
   input += synapse0x2c19db0();
   input += synapse0x2c19df0();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c19460() {
   double input = input0x2c19460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c19e30() {
   double input = -2.06054;
   input += synapse0x2c19fc0();
   input += synapse0x2c23050();
   input += synapse0x2c23090();
   input += synapse0x2c230d0();
   input += synapse0x2c23110();
   input += synapse0x2c23150();
   input += synapse0x2c23190();
   input += synapse0x2c231d0();
   input += synapse0x2c23210();
   input += synapse0x2c23250();
   input += synapse0x2c23290();
   input += synapse0x2c232d0();
   input += synapse0x2c23310();
   input += synapse0x2c23350();
   input += synapse0x2c23390();
   input += synapse0x2c233d0();
   input += synapse0x2c22ea0();
   input += synapse0x2c22ee0();
   input += synapse0x2c23520();
   input += synapse0x2c23560();
   input += synapse0x2c235a0();
   input += synapse0x2c235e0();
   input += synapse0x2c23620();
   input += synapse0x2c23660();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c19e30() {
   double input = input0x2c19e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c236a0() {
   double input = 0.350818;
   input += synapse0x2c239e0();
   input += synapse0x2c23a20();
   input += synapse0x2c23a60();
   input += synapse0x2c23aa0();
   input += synapse0x2c23ae0();
   input += synapse0x2c23b20();
   input += synapse0x2c23b60();
   input += synapse0x2c23ba0();
   input += synapse0x2c23be0();
   input += synapse0x2c23c20();
   input += synapse0x2c23c60();
   input += synapse0x2c23ca0();
   input += synapse0x2c23ce0();
   input += synapse0x2c23d20();
   input += synapse0x2c23d60();
   input += synapse0x2c23da0();
   input += synapse0x2c23830();
   input += synapse0x2c23870();
   input += synapse0x2c23ef0();
   input += synapse0x2c23f30();
   input += synapse0x2c23f70();
   input += synapse0x2c23fb0();
   input += synapse0x2c23ff0();
   input += synapse0x2c24030();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c236a0() {
   double input = input0x2c236a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c24070() {
   double input = 0.178571;
   input += synapse0x2c243b0();
   input += synapse0x2c243f0();
   input += synapse0x2c24430();
   input += synapse0x2c24470();
   input += synapse0x2c244b0();
   input += synapse0x2c244f0();
   input += synapse0x2c24530();
   input += synapse0x2c24570();
   input += synapse0x2c245b0();
   input += synapse0x2c245f0();
   input += synapse0x2c24630();
   input += synapse0x2c24670();
   input += synapse0x2c246b0();
   input += synapse0x2c246f0();
   input += synapse0x2c24730();
   input += synapse0x2c24770();
   input += synapse0x2c24200();
   input += synapse0x2c24240();
   input += synapse0x2c248c0();
   input += synapse0x2c24900();
   input += synapse0x2c24940();
   input += synapse0x2c24980();
   input += synapse0x2c249c0();
   input += synapse0x2c24a00();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c24070() {
   double input = input0x2c24070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c24a40() {
   double input = -0.277113;
   input += synapse0x2c24d80();
   input += synapse0x2c24dc0();
   input += synapse0x2c24e00();
   input += synapse0x2c24e40();
   input += synapse0x2c24e80();
   input += synapse0x2c24ec0();
   input += synapse0x2c24f00();
   input += synapse0x2c24f40();
   input += synapse0x2c24f80();
   input += synapse0x2c24fc0();
   input += synapse0x2c25000();
   input += synapse0x2c25040();
   input += synapse0x2c25080();
   input += synapse0x2c250c0();
   input += synapse0x2c25100();
   input += synapse0x2c25140();
   input += synapse0x2c24bd0();
   input += synapse0x2c24c10();
   input += synapse0x2c25290();
   input += synapse0x2c252d0();
   input += synapse0x2c25310();
   input += synapse0x2c25350();
   input += synapse0x2c25390();
   input += synapse0x2c253d0();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c24a40() {
   double input = input0x2c24a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c25410() {
   double input = -4.01295;
   input += synapse0x2c25750();
   input += synapse0x2c25790();
   input += synapse0x2c257d0();
   input += synapse0x2c25810();
   input += synapse0x2c25850();
   input += synapse0x2c25890();
   input += synapse0x2c258d0();
   input += synapse0x2c25910();
   input += synapse0x2c25950();
   input += synapse0x2c25990();
   input += synapse0x2c259d0();
   input += synapse0x2c25a10();
   input += synapse0x2c25a50();
   input += synapse0x2c25a90();
   input += synapse0x2c25ad0();
   input += synapse0x2c25b10();
   input += synapse0x2c255a0();
   input += synapse0x2c255e0();
   input += synapse0x2c25c60();
   input += synapse0x2c25ca0();
   input += synapse0x2c25ce0();
   input += synapse0x2c25d20();
   input += synapse0x2c25d60();
   input += synapse0x2c25da0();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c25410() {
   double input = input0x2c25410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c25de0() {
   double input = 0.477416;
   input += synapse0x2c26120();
   input += synapse0x2c26160();
   input += synapse0x2c261a0();
   input += synapse0x2c261e0();
   input += synapse0x2c26220();
   input += synapse0x2c26260();
   input += synapse0x2c262a0();
   input += synapse0x2c262e0();
   input += synapse0x2c26320();
   input += synapse0x2c26360();
   input += synapse0x2c263a0();
   input += synapse0x2c263e0();
   input += synapse0x2c26420();
   input += synapse0x2c26460();
   input += synapse0x2c264a0();
   input += synapse0x2c264e0();
   input += synapse0x2c25f70();
   input += synapse0x2c25fb0();
   input += synapse0x2c26630();
   input += synapse0x2c26670();
   input += synapse0x2c266b0();
   input += synapse0x2c266f0();
   input += synapse0x2c26730();
   input += synapse0x2c26770();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c25de0() {
   double input = input0x2c25de0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c267b0() {
   double input = 0.440731;
   input += synapse0x2c26af0();
   input += synapse0x2c26b30();
   input += synapse0x2c26b70();
   input += synapse0x2c26bb0();
   input += synapse0x2c26bf0();
   input += synapse0x2c26c30();
   input += synapse0x2c26c70();
   input += synapse0x2c26cb0();
   input += synapse0x2c26cf0();
   input += synapse0x2c26d30();
   input += synapse0x2c26d70();
   input += synapse0x2c26db0();
   input += synapse0x2c26df0();
   input += synapse0x2c26e30();
   input += synapse0x2c26e70();
   input += synapse0x2c26eb0();
   input += synapse0x2c26940();
   input += synapse0x2c26980();
   input += synapse0x2c27000();
   input += synapse0x2c27040();
   input += synapse0x2c27080();
   input += synapse0x2c270c0();
   input += synapse0x2c27100();
   input += synapse0x2c27140();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c267b0() {
   double input = input0x2c267b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c27180() {
   double input = 3.96834;
   input += synapse0x2c274c0();
   input += synapse0x2c27500();
   input += synapse0x2c27540();
   input += synapse0x2c27580();
   input += synapse0x2c275c0();
   input += synapse0x2c27600();
   input += synapse0x2c27640();
   input += synapse0x2c27680();
   input += synapse0x2c276c0();
   input += synapse0x2c27700();
   input += synapse0x2c27740();
   input += synapse0x2c27780();
   input += synapse0x2c277c0();
   input += synapse0x2c27800();
   input += synapse0x2c27840();
   input += synapse0x2c27880();
   input += synapse0x2c27310();
   input += synapse0x2c27350();
   input += synapse0x2c279d0();
   input += synapse0x2c27a10();
   input += synapse0x2c27a50();
   input += synapse0x2c27a90();
   input += synapse0x2c27ad0();
   input += synapse0x2c27b10();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c27180() {
   double input = input0x2c27180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c27b50() {
   double input = 1.48937;
   input += synapse0x2c27e90();
   input += synapse0x2c1c460();
   input += synapse0x2c1c4a0();
   input += synapse0x2c1c4e0();
   input += synapse0x2c1c730();
   input += synapse0x2c1c770();
   input += synapse0x2c1c7b0();
   input += synapse0x2c1ca00();
   input += synapse0x2c1ca40();
   input += synapse0x2c1cc90();
   input += synapse0x2c1ccd0();
   input += synapse0x2c1cd10();
   input += synapse0x2c1cf60();
   input += synapse0x2c1cfa0();
   input += synapse0x2c1d1f0();
   input += synapse0x2c1d230();
   input += synapse0x2c27ce0();
   input += synapse0x2c27d20();
   input += synapse0x2c1d380();
   input += synapse0x2c1d890();
   input += synapse0x2c1d8d0();
   input += synapse0x2c1d910();
   input += synapse0x2c1db60();
   input += synapse0x2c1dba0();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c27b50() {
   double input = input0x2c27b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c1dbe0() {
   double input = -0.668887;
   input += synapse0x2c1d450();
   input += synapse0x2c1d490();
   input += synapse0x2c1d4d0();
   input += synapse0x2c1d510();
   input += synapse0x2c1de90();
   input += synapse0x2c2a1e0();
   input += synapse0x2c2a220();
   input += synapse0x2c2a260();
   input += synapse0x2c2a2a0();
   input += synapse0x2c2a2e0();
   input += synapse0x2c2a320();
   input += synapse0x2c2a360();
   input += synapse0x2c2a3a0();
   input += synapse0x2c2a3e0();
   input += synapse0x2c2a420();
   input += synapse0x2c2a460();
   input += synapse0x2c1dd70();
   input += synapse0x2c1ddb0();
   input += synapse0x2c2a5b0();
   input += synapse0x2c2a5f0();
   input += synapse0x2c2a630();
   input += synapse0x2c2a670();
   input += synapse0x2c2a6b0();
   input += synapse0x2c2a6f0();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c1dbe0() {
   double input = input0x2c1dbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c2a730() {
   double input = -1.41458;
   input += synapse0x2c2aa70();
   input += synapse0x2c2aab0();
   input += synapse0x2c2aaf0();
   input += synapse0x2c2ab30();
   input += synapse0x2c2ab70();
   input += synapse0x2c2abb0();
   input += synapse0x2c2abf0();
   input += synapse0x2c2ac30();
   input += synapse0x2c2ac70();
   input += synapse0x2c2acb0();
   input += synapse0x2c2acf0();
   input += synapse0x2c2ad30();
   input += synapse0x2c2ad70();
   input += synapse0x2c2adb0();
   input += synapse0x2c2adf0();
   input += synapse0x2c2ae30();
   input += synapse0x2c2a8c0();
   input += synapse0x2c2a900();
   input += synapse0x2c2af80();
   input += synapse0x2c2afc0();
   input += synapse0x2c2b000();
   input += synapse0x2c2b040();
   input += synapse0x2c2b080();
   input += synapse0x2c2b0c0();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c2a730() {
   double input = input0x2c2a730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c2b100() {
   double input = 0.457219;
   input += synapse0x2c2b440();
   input += synapse0x2c2b480();
   input += synapse0x2c2b4c0();
   input += synapse0x2c2b500();
   input += synapse0x2c2b540();
   input += synapse0x2c2b580();
   input += synapse0x2c2b5c0();
   input += synapse0x2c2b600();
   input += synapse0x2c2b640();
   input += synapse0x2c2b680();
   input += synapse0x2c2b6c0();
   input += synapse0x2c2b700();
   input += synapse0x2c2b740();
   input += synapse0x2c2b780();
   input += synapse0x2c2b7c0();
   input += synapse0x2c2b800();
   input += synapse0x2c2b290();
   input += synapse0x2c2b2d0();
   input += synapse0x2c2b950();
   input += synapse0x2c2b990();
   input += synapse0x2c2b9d0();
   input += synapse0x2c2ba10();
   input += synapse0x2c2ba50();
   input += synapse0x2c2ba90();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c2b100() {
   double input = input0x2c2b100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c2bad0() {
   double input = 1.05296;
   input += synapse0x2c2be10();
   input += synapse0x2c2be50();
   input += synapse0x2c2be90();
   input += synapse0x2c2bed0();
   input += synapse0x2c2bf10();
   input += synapse0x2c2bf50();
   input += synapse0x2c2bf90();
   input += synapse0x2c2bfd0();
   input += synapse0x2c2c010();
   input += synapse0x2c2c050();
   input += synapse0x2c2c090();
   input += synapse0x2c2c0d0();
   input += synapse0x2c2c110();
   input += synapse0x2c2c150();
   input += synapse0x2c2c190();
   input += synapse0x2c2c1d0();
   input += synapse0x2c2bc60();
   input += synapse0x2c2bca0();
   input += synapse0x2c2c320();
   input += synapse0x2c2c360();
   input += synapse0x2c2c3a0();
   input += synapse0x2c2c3e0();
   input += synapse0x2c2c420();
   input += synapse0x2c2c460();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c2bad0() {
   double input = input0x2c2bad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c2c4a0() {
   double input = 0.316091;
   input += synapse0x2c2c7e0();
   input += synapse0x2c2c820();
   input += synapse0x2c2c860();
   input += synapse0x2c2c8a0();
   input += synapse0x2c2c8e0();
   input += synapse0x2c2c920();
   input += synapse0x2c2c960();
   input += synapse0x2c2c9a0();
   input += synapse0x2c2c9e0();
   input += synapse0x2c2ca20();
   input += synapse0x2c2ca60();
   input += synapse0x2c2caa0();
   input += synapse0x2c2cae0();
   input += synapse0x2c2cb20();
   input += synapse0x2c2cb60();
   input += synapse0x2c2cba0();
   input += synapse0x2c2c630();
   input += synapse0x2c2c670();
   input += synapse0x2c2ccf0();
   input += synapse0x2c2cd30();
   input += synapse0x2c2cd70();
   input += synapse0x2c2cdb0();
   input += synapse0x2c2cdf0();
   input += synapse0x2c2ce30();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c2c4a0() {
   double input = input0x2c2c4a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c2ce70() {
   double input = 6.65289;
   input += synapse0x2c2d1b0();
   input += synapse0x2c2d1f0();
   input += synapse0x2c2d230();
   input += synapse0x2c2d270();
   input += synapse0x2c2d2b0();
   input += synapse0x2c2d2f0();
   input += synapse0x2c2d330();
   input += synapse0x2c2d370();
   input += synapse0x2c2d3b0();
   input += synapse0x2c2d3f0();
   input += synapse0x2c2d430();
   input += synapse0x2c2d470();
   input += synapse0x2c2d4b0();
   input += synapse0x2c2d4f0();
   input += synapse0x2c2d530();
   input += synapse0x2c2d570();
   input += synapse0x2c2d000();
   input += synapse0x2c2d040();
   input += synapse0x2c2d6c0();
   input += synapse0x2c2d700();
   input += synapse0x2c2d740();
   input += synapse0x2c2d780();
   input += synapse0x2c2d7c0();
   input += synapse0x2c2d800();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c2ce70() {
   double input = input0x2c2ce70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c2d840() {
   double input = 0.540327;
   input += synapse0x2c2db80();
   input += synapse0x2c2dbc0();
   input += synapse0x2c2dc00();
   input += synapse0x2c2dc40();
   input += synapse0x2c2dc80();
   input += synapse0x2c2dcc0();
   input += synapse0x2c2dd00();
   input += synapse0x2c2dd40();
   input += synapse0x2c2dd80();
   input += synapse0x2c2ddc0();
   input += synapse0x2c2de00();
   input += synapse0x2c2de40();
   input += synapse0x2c2de80();
   input += synapse0x2c2dec0();
   input += synapse0x2c2df00();
   input += synapse0x2c2df40();
   input += synapse0x2c2d9d0();
   input += synapse0x2c2da10();
   input += synapse0x2c2e090();
   input += synapse0x2c2e0d0();
   input += synapse0x2c2e110();
   input += synapse0x2c2e150();
   input += synapse0x2c2e190();
   input += synapse0x2c2e1d0();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c2d840() {
   double input = input0x2c2d840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c2e210() {
   double input = -0.384477;
   input += synapse0x2c2e550();
   input += synapse0x2c2e590();
   input += synapse0x2c2e5d0();
   input += synapse0x2c2e610();
   input += synapse0x2c2e650();
   input += synapse0x2c2e690();
   input += synapse0x2c2e6d0();
   input += synapse0x2c2e710();
   input += synapse0x2c2e750();
   input += synapse0x2c2e790();
   input += synapse0x2c2e7d0();
   input += synapse0x2c2e810();
   input += synapse0x2c2e850();
   input += synapse0x2c2e890();
   input += synapse0x2c2e8d0();
   input += synapse0x2c2e910();
   input += synapse0x2c2e3a0();
   input += synapse0x2c2e3e0();
   input += synapse0x2c2ea60();
   input += synapse0x2c2eaa0();
   input += synapse0x2c2eae0();
   input += synapse0x2c2eb20();
   input += synapse0x2c2eb60();
   input += synapse0x2c2eba0();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c2e210() {
   double input = input0x2c2e210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c2ebe0() {
   double input = 1.19152;
   input += synapse0x2c17650();
   input += synapse0x2c17690();
   input += synapse0x2c176d0();
   input += synapse0x2c17710();
   input += synapse0x2c17750();
   input += synapse0x2c17790();
   input += synapse0x2c177d0();
   input += synapse0x2c17810();
   input += synapse0x2c2f330();
   input += synapse0x2c2f370();
   input += synapse0x2c2f3b0();
   input += synapse0x2c2f3f0();
   input += synapse0x2c2f430();
   input += synapse0x2c2f470();
   input += synapse0x2c2f4b0();
   input += synapse0x2c2f4f0();
   input += synapse0x2c2ed70();
   input += synapse0x2c2edb0();
   input += synapse0x2c2f640();
   input += synapse0x2c2f680();
   input += synapse0x2c2f6c0();
   input += synapse0x2c2f700();
   input += synapse0x2c2f740();
   input += synapse0x2c2f780();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c2ebe0() {
   double input = input0x2c2ebe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c2f7c0() {
   double input = 0.760144;
   input += synapse0x2c2fb00();
   input += synapse0x2c2fb40();
   input += synapse0x2c2fb80();
   input += synapse0x2c2fbc0();
   input += synapse0x2c2fc00();
   input += synapse0x2c2fc40();
   input += synapse0x2c2fc80();
   input += synapse0x2c2fcc0();
   input += synapse0x2c2fd00();
   input += synapse0x2c2fd40();
   input += synapse0x2c2fd80();
   input += synapse0x2c2fdc0();
   input += synapse0x2c2fe00();
   input += synapse0x2c2fe40();
   input += synapse0x2c2fe80();
   input += synapse0x2c2fec0();
   input += synapse0x2c2f950();
   input += synapse0x2c2f990();
   input += synapse0x2c30010();
   input += synapse0x2c30050();
   input += synapse0x2c30090();
   input += synapse0x2c300d0();
   input += synapse0x2c30110();
   input += synapse0x2c30150();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c2f7c0() {
   double input = input0x2c2f7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c30190() {
   double input = -0.176894;
   input += synapse0x2c304d0();
   input += synapse0x2c30510();
   input += synapse0x2c30550();
   input += synapse0x2c30590();
   input += synapse0x2c305d0();
   input += synapse0x2c30610();
   input += synapse0x2c30650();
   input += synapse0x2c30690();
   input += synapse0x2c306d0();
   input += synapse0x2c30710();
   input += synapse0x2c30750();
   input += synapse0x2c30790();
   input += synapse0x2c307d0();
   input += synapse0x2c30810();
   input += synapse0x2c30850();
   input += synapse0x2c30890();
   input += synapse0x2c30320();
   input += synapse0x2c30360();
   input += synapse0x2c20e90();
   input += synapse0x2c20ed0();
   input += synapse0x2c20f10();
   input += synapse0x2c20f50();
   input += synapse0x2c20f90();
   input += synapse0x2c20fd0();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c30190() {
   double input = input0x2c30190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c21010() {
   double input = 0.134361;
   input += synapse0x2c21350();
   input += synapse0x2c21390();
   input += synapse0x2c213d0();
   input += synapse0x2c21410();
   input += synapse0x2c21450();
   input += synapse0x2c21490();
   input += synapse0x2c214d0();
   input += synapse0x2c21510();
   input += synapse0x2c21550();
   input += synapse0x2c21590();
   input += synapse0x2c215d0();
   input += synapse0x2c21610();
   input += synapse0x2c21650();
   input += synapse0x2c21690();
   input += synapse0x2c216d0();
   input += synapse0x2c21710();
   input += synapse0x2c211a0();
   input += synapse0x2c211e0();
   input += synapse0x2c21860();
   input += synapse0x2c218a0();
   input += synapse0x2c218e0();
   input += synapse0x2c21920();
   input += synapse0x2c21960();
   input += synapse0x2c219a0();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c21010() {
   double input = input0x2c21010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c219e0() {
   double input = 0.0543976;
   input += synapse0x2c21d20();
   input += synapse0x2c21d60();
   input += synapse0x2c21da0();
   input += synapse0x2c21de0();
   input += synapse0x2c21e20();
   input += synapse0x2c21e60();
   input += synapse0x2c21ea0();
   input += synapse0x2c21ee0();
   input += synapse0x2c21f20();
   input += synapse0x2c21f60();
   input += synapse0x2c21fa0();
   input += synapse0x2c21fe0();
   input += synapse0x2c22020();
   input += synapse0x2c22060();
   input += synapse0x2c220a0();
   input += synapse0x2c220e0();
   input += synapse0x2c21b70();
   input += synapse0x2c21bb0();
   input += synapse0x2c22230();
   input += synapse0x2c22270();
   input += synapse0x2c222b0();
   input += synapse0x2c222f0();
   input += synapse0x2c22330();
   input += synapse0x2c22370();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c219e0() {
   double input = input0x2c219e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c223b0() {
   double input = 0.379458;
   input += synapse0x2c226f0();
   input += synapse0x2c22730();
   input += synapse0x2c22770();
   input += synapse0x2c227b0();
   input += synapse0x2c227f0();
   input += synapse0x2c22830();
   input += synapse0x2c22870();
   input += synapse0x2c228b0();
   input += synapse0x2c228f0();
   input += synapse0x2c22930();
   input += synapse0x2c22970();
   input += synapse0x2c229b0();
   input += synapse0x2c229f0();
   input += synapse0x2c22a30();
   input += synapse0x2c22a70();
   input += synapse0x2c22ab0();
   input += synapse0x2c22540();
   input += synapse0x2c22580();
   input += synapse0x2c22c00();
   input += synapse0x2c22c40();
   input += synapse0x2c22c80();
   input += synapse0x2c22cc0();
   input += synapse0x2c22d00();
   input += synapse0x2c22d40();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c223b0() {
   double input = input0x2c223b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c349f0() {
   double input = 0.240321;
   input += synapse0x2c34c10();
   input += synapse0x2c34c50();
   input += synapse0x2c34c90();
   input += synapse0x2c34cd0();
   input += synapse0x2c34d10();
   input += synapse0x2c34d50();
   input += synapse0x2c34d90();
   input += synapse0x2c34dd0();
   input += synapse0x2c34e10();
   input += synapse0x2c34e50();
   input += synapse0x2c34e90();
   input += synapse0x2c34ed0();
   input += synapse0x2c34f10();
   input += synapse0x2c34f50();
   input += synapse0x2c34f90();
   input += synapse0x2c34fd0();
   input += synapse0x2c22d80();
   input += synapse0x2c22dc0();
   input += synapse0x2c35120();
   input += synapse0x2c35160();
   input += synapse0x2c351a0();
   input += synapse0x2c351e0();
   input += synapse0x2c35220();
   input += synapse0x2c35260();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c349f0() {
   double input = input0x2c349f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c352a0() {
   double input = -0.119344;
   input += synapse0x2c355e0();
   input += synapse0x2c35620();
   input += synapse0x2c35660();
   input += synapse0x2c356a0();
   input += synapse0x2c356e0();
   input += synapse0x2c35720();
   input += synapse0x2c35760();
   input += synapse0x2c357a0();
   input += synapse0x2c357e0();
   input += synapse0x2c35820();
   input += synapse0x2c35860();
   input += synapse0x2c358a0();
   input += synapse0x2c358e0();
   input += synapse0x2c35920();
   input += synapse0x2c35960();
   input += synapse0x2c359a0();
   input += synapse0x2c35430();
   input += synapse0x2c35470();
   input += synapse0x2c35af0();
   input += synapse0x2c35b30();
   input += synapse0x2c35b70();
   input += synapse0x2c35bb0();
   input += synapse0x2c35bf0();
   input += synapse0x2c35c30();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c352a0() {
   double input = input0x2c352a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c35c70() {
   double input = -1.21561;
   input += synapse0x2c35fb0();
   input += synapse0x2c35ff0();
   input += synapse0x2c36030();
   input += synapse0x2c36070();
   input += synapse0x2c360b0();
   input += synapse0x2c360f0();
   input += synapse0x2c36130();
   input += synapse0x2c36170();
   input += synapse0x2c361b0();
   input += synapse0x2c361f0();
   input += synapse0x2c36230();
   input += synapse0x2c36270();
   input += synapse0x2c362b0();
   input += synapse0x2c362f0();
   input += synapse0x2c36330();
   input += synapse0x2c36370();
   input += synapse0x2c35e00();
   input += synapse0x2c35e40();
   input += synapse0x2c364c0();
   input += synapse0x2c36500();
   input += synapse0x2c36540();
   input += synapse0x2c36580();
   input += synapse0x2c365c0();
   input += synapse0x2c36600();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c35c70() {
   double input = input0x2c35c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c36640() {
   double input = -0.120447;
   input += synapse0x2c36980();
   input += synapse0x2c369c0();
   input += synapse0x2c36a00();
   input += synapse0x2c36a40();
   input += synapse0x2c36a80();
   input += synapse0x2c36ac0();
   input += synapse0x2c36b00();
   input += synapse0x2c36b40();
   input += synapse0x2c36b80();
   input += synapse0x2c36bc0();
   input += synapse0x2c36c00();
   input += synapse0x2c36c40();
   input += synapse0x2c36c80();
   input += synapse0x2c36cc0();
   input += synapse0x2c36d00();
   input += synapse0x2c36d40();
   input += synapse0x2c367d0();
   input += synapse0x2c36810();
   input += synapse0x2c36e90();
   input += synapse0x2c36ed0();
   input += synapse0x2c36f10();
   input += synapse0x2c36f50();
   input += synapse0x2c36f90();
   input += synapse0x2c36fd0();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c36640() {
   double input = input0x2c36640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c3d840() {
   double input = -0.524575;
   input += synapse0x2c13570();
   input += synapse0x2c135b0();
   input += synapse0x2c14a80();
   input += synapse0x2c14ac0();
   input += synapse0x2c15450();
   input += synapse0x2c15490();
   input += synapse0x2c16220();
   input += synapse0x2c16260();
   input += synapse0x2c16bf0();
   input += synapse0x2c16c30();
   input += synapse0x2c175c0();
   input += synapse0x2c17600();
   input += synapse0x2c180a0();
   input += synapse0x2c180e0();
   input += synapse0x2c18a70();
   input += synapse0x2c18ab0();
   input += synapse0x2c15b50();
   input += synapse0x2c15b90();
   input += synapse0x2c1a620();
   input += synapse0x2c1a660();
   input += synapse0x2c1aff0();
   input += synapse0x2c1b030();
   input += synapse0x2c1b9c0();
   input += synapse0x2c1ba00();
   input += synapse0x2c1c390();
   input += synapse0x2c1c3d0();
   input += synapse0x2c10500();
   input += synapse0x2c10540();
   input += synapse0x2c1e480();
   input += synapse0x2c1e4c0();
   input += synapse0x2c1ee50();
   input += synapse0x2c1ee90();
   input += synapse0x2c1f820();
   input += synapse0x2c1f860();
   input += synapse0x2c201f0();
   input += synapse0x2c20230();
   input += synapse0x2c20bc0();
   input += synapse0x2c20c00();
   input += synapse0x2c19710();
   input += synapse0x2c19750();
   input += synapse0x2c22fc0();
   input += synapse0x2c23000();
   input += synapse0x2c23950();
   input += synapse0x2c23990();
   input += synapse0x2c24320();
   input += synapse0x2c24360();
   input += synapse0x2c24cf0();
   input += synapse0x2c24d30();
   input += synapse0x2c256c0();
   input += synapse0x2c25700();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c3d840() {
   double input = input0x2c3d840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c3dbe0() {
   double input = 0.596644;
   input += synapse0x2c27e00();
   input += synapse0x2c27e40();
   input += synapse0x2c1d3c0();
   input += synapse0x2c1d400();
   input += synapse0x2c2a9e0();
   input += synapse0x2c2aa20();
   input += synapse0x2c2b3b0();
   input += synapse0x2c2b3f0();
   input += synapse0x2c2bd80();
   input += synapse0x2c2bdc0();
   input += synapse0x2c2c750();
   input += synapse0x2c2c790();
   input += synapse0x2c2d120();
   input += synapse0x2c2d160();
   input += synapse0x2c2daf0();
   input += synapse0x2c2db30();
   input += synapse0x2c2e4c0();
   input += synapse0x2c2e500();
   input += synapse0x2c2ee90();
   input += synapse0x2c2eed0();
   input += synapse0x2c2fa70();
   input += synapse0x2c2fab0();
   input += synapse0x2c30440();
   input += synapse0x2c30480();
   input += synapse0x2c212c0();
   input += synapse0x2c21300();
   input += synapse0x2c21c90();
   input += synapse0x2c21cd0();
   input += synapse0x2c22660();
   input += synapse0x2c226a0();
   input += synapse0x2c34b80();
   input += synapse0x2c34bc0();
   input += synapse0x2c35550();
   input += synapse0x2c35590();
   input += synapse0x2c35f20();
   input += synapse0x2c35f60();
   input += synapse0x2c368f0();
   input += synapse0x2c36930();
   input += synapse0x2c127e0();
   input += synapse0x2c12820();
   input += synapse0x2c26090();
   input += synapse0x2c260d0();
   input += synapse0x2c37010();
   input += synapse0x2c37050();
   input += synapse0x2c37090();
   input += synapse0x2c370d0();
   input += synapse0x2c3df80();
   input += synapse0x2c3dfc0();
   input += synapse0x2c3e000();
   input += synapse0x2c3e040();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c3dbe0() {
   double input = input0x2c3dbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c3e080() {
   double input = 0.868083;
   input += synapse0x2c3e3c0();
   input += synapse0x2c3e400();
   input += synapse0x2c3e440();
   input += synapse0x2c3e480();
   input += synapse0x2c3e4c0();
   input += synapse0x2c3e500();
   input += synapse0x2c3e540();
   input += synapse0x2c3e580();
   input += synapse0x2c3e5c0();
   input += synapse0x2c3e600();
   input += synapse0x2c3e640();
   input += synapse0x2c3e680();
   input += synapse0x2c3e6c0();
   input += synapse0x2c3e700();
   input += synapse0x2c3e740();
   input += synapse0x2c3e780();
   input += synapse0x2c3e210();
   input += synapse0x2c3e250();
   input += synapse0x2c3e8d0();
   input += synapse0x2c3e910();
   input += synapse0x2c3e950();
   input += synapse0x2c3e990();
   input += synapse0x2c3e9d0();
   input += synapse0x2c3ea10();
   input += synapse0x2c3ea50();
   input += synapse0x2c3ea90();
   input += synapse0x2c3ead0();
   input += synapse0x2c3eb10();
   input += synapse0x2c3eb50();
   input += synapse0x2c3eb90();
   input += synapse0x2c3ebd0();
   input += synapse0x2c3ec10();
   input += synapse0x2c3e7c0();
   input += synapse0x2c3e800();
   input += synapse0x2c3e840();
   input += synapse0x2c3e880();
   input += synapse0x2c3ee60();
   input += synapse0x2c3eea0();
   input += synapse0x2c3eee0();
   input += synapse0x2c3ef20();
   input += synapse0x2c3ef60();
   input += synapse0x2c3efa0();
   input += synapse0x2c3efe0();
   input += synapse0x2c3f020();
   input += synapse0x2c3f060();
   input += synapse0x2c3f0a0();
   input += synapse0x2c3f0e0();
   input += synapse0x2c3f120();
   input += synapse0x2c3f160();
   input += synapse0x2c3f1a0();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c3e080() {
   double input = input0x2c3e080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c3f1e0() {
   double input = 0.183337;
   input += synapse0x2c3f520();
   input += synapse0x2c3f560();
   input += synapse0x2c3f5a0();
   input += synapse0x2c3f5e0();
   input += synapse0x2c3f620();
   input += synapse0x2c3f660();
   input += synapse0x2c3f6a0();
   input += synapse0x2c3f6e0();
   input += synapse0x2c3f720();
   input += synapse0x2c3f760();
   input += synapse0x2c3f7a0();
   input += synapse0x2c3f7e0();
   input += synapse0x2c3f820();
   input += synapse0x2c3f860();
   input += synapse0x2c3f8a0();
   input += synapse0x2c3f8e0();
   input += synapse0x2c3f370();
   input += synapse0x2c3f3b0();
   input += synapse0x2c3fa30();
   input += synapse0x2c3fa70();
   input += synapse0x2c3fab0();
   input += synapse0x2c3faf0();
   input += synapse0x2c3fb30();
   input += synapse0x2c3fb70();
   input += synapse0x2c3fbb0();
   input += synapse0x2c3fbf0();
   input += synapse0x2c3fc30();
   input += synapse0x2c3fc70();
   input += synapse0x2c3fcb0();
   input += synapse0x2c3fcf0();
   input += synapse0x2c3fd30();
   input += synapse0x2c3fd70();
   input += synapse0x2c3f920();
   input += synapse0x2c3f960();
   input += synapse0x2c3f9a0();
   input += synapse0x2c3f9e0();
   input += synapse0x2c3ffc0();
   input += synapse0x2c40000();
   input += synapse0x2c40040();
   input += synapse0x2c40080();
   input += synapse0x2c400c0();
   input += synapse0x2c40100();
   input += synapse0x2c40140();
   input += synapse0x2c40180();
   input += synapse0x2c401c0();
   input += synapse0x2c40200();
   input += synapse0x2c40240();
   input += synapse0x2c40280();
   input += synapse0x2c402c0();
   input += synapse0x2c40300();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c3f1e0() {
   double input = input0x2c3f1e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c40340() {
   double input = 0.234461;
   input += synapse0x2c40680();
   input += synapse0x2c406c0();
   input += synapse0x2c40700();
   input += synapse0x2c40740();
   input += synapse0x2c40780();
   input += synapse0x2c407c0();
   input += synapse0x2c40800();
   input += synapse0x2c40840();
   input += synapse0x2c40880();
   input += synapse0x2c408c0();
   input += synapse0x2c40900();
   input += synapse0x2c40940();
   input += synapse0x2c40980();
   input += synapse0x2c409c0();
   input += synapse0x2c40a00();
   input += synapse0x2c40a40();
   input += synapse0x2c404d0();
   input += synapse0x2c40510();
   input += synapse0x2c40b90();
   input += synapse0x2c40bd0();
   input += synapse0x2c40c10();
   input += synapse0x2c40c50();
   input += synapse0x2c40c90();
   input += synapse0x2c40cd0();
   input += synapse0x2c40d10();
   input += synapse0x2c40d50();
   input += synapse0x2c40d90();
   input += synapse0x2c40dd0();
   input += synapse0x2c40e10();
   input += synapse0x2c40e50();
   input += synapse0x2c40e90();
   input += synapse0x2c40ed0();
   input += synapse0x2c40a80();
   input += synapse0x2c40ac0();
   input += synapse0x2c40b00();
   input += synapse0x2c40b40();
   input += synapse0x2c41120();
   input += synapse0x2c41160();
   input += synapse0x2c411a0();
   input += synapse0x2c411e0();
   input += synapse0x2c41220();
   input += synapse0x2c41260();
   input += synapse0x2c412a0();
   input += synapse0x2c412e0();
   input += synapse0x2c41320();
   input += synapse0x2c41360();
   input += synapse0x2c413a0();
   input += synapse0x2c413e0();
   input += synapse0x2c41420();
   input += synapse0x2c41460();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c40340() {
   double input = input0x2c40340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2c414a0() {
   double input = 3.17723;
   input += synapse0x2c12580();
   input += synapse0x2c416c0();
   input += synapse0x2c41700();
   input += synapse0x2c41740();
   input += synapse0x2c41780();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2c414a0() {
   double input = input0x2c414a0();
   return (input * 1)+0;
}

double NNfunction_sb_dLsR::synapse0x29cd3d0() {
   return (neuron0x2c0d560()*0.0931734);
}

double NNfunction_sb_dLsR::synapse0x2c0d420() {
   return (neuron0x2c0d8a0()*0.204669);
}

double NNfunction_sb_dLsR::synapse0x2c0d460() {
   return (neuron0x2c0dbe0()*-0.0722607);
}

double NNfunction_sb_dLsR::synapse0x2c12870() {
   return (neuron0x2c0df20()*-3.63593);
}

double NNfunction_sb_dLsR::synapse0x2c128b0() {
   return (neuron0x2c0e260()*0.0472617);
}

double NNfunction_sb_dLsR::synapse0x2c128f0() {
   return (neuron0x2c0e5a0()*0.15201);
}

double NNfunction_sb_dLsR::synapse0x2c12930() {
   return (neuron0x2c0e8e0()*-0.259188);
}

double NNfunction_sb_dLsR::synapse0x2c12970() {
   return (neuron0x2c0ec20()*0.033522);
}

double NNfunction_sb_dLsR::synapse0x2c129b0() {
   return (neuron0x2c0ef60()*-0.105034);
}

double NNfunction_sb_dLsR::synapse0x2c129f0() {
   return (neuron0x2c0f2a0()*0.0858398);
}

double NNfunction_sb_dLsR::synapse0x2c12a30() {
   return (neuron0x2c0f5e0()*0.179012);
}

double NNfunction_sb_dLsR::synapse0x2c12a70() {
   return (neuron0x2c0f920()*-0.235635);
}

double NNfunction_sb_dLsR::synapse0x2c12ab0() {
   return (neuron0x2c0fc60()*0.151095);
}

double NNfunction_sb_dLsR::synapse0x2c12af0() {
   return (neuron0x2c0ffa0()*-0.369993);
}

double NNfunction_sb_dLsR::synapse0x2c12b30() {
   return (neuron0x2c102e0()*-0.250841);
}

double NNfunction_sb_dLsR::synapse0x2c12b70() {
   return (neuron0x2c10620()*0.178028);
}

double NNfunction_sb_dLsR::synapse0x2c0d390() {
   return (neuron0x2c10960()*0.0911783);
}

double NNfunction_sb_dLsR::synapse0x2c0d3d0() {
   return (neuron0x2c10ec0()*-0.294963);
}

double NNfunction_sb_dLsR::synapse0x29bec70() {
   return (neuron0x2c110e0()*-0.417163);
}

double NNfunction_sb_dLsR::synapse0x29becb0() {
   return (neuron0x2c11420()*-0.222077);
}

double NNfunction_sb_dLsR::synapse0x2c12dd0() {
   return (neuron0x2c11760()*-0.0290173);
}

double NNfunction_sb_dLsR::synapse0x2c12e10() {
   return (neuron0x2c11aa0()*0.0316212);
}

double NNfunction_sb_dLsR::synapse0x2c12e50() {
   return (neuron0x2c11de0()*0.207192);
}

double NNfunction_sb_dLsR::synapse0x2c12e90() {
   return (neuron0x2c12120()*-0.117622);
}

double NNfunction_sb_dLsR::synapse0x2c13210() {
   return (neuron0x2c0d560()*0.443141);
}

double NNfunction_sb_dLsR::synapse0x2c13250() {
   return (neuron0x2c0d8a0()*-0.230711);
}

double NNfunction_sb_dLsR::synapse0x2c13290() {
   return (neuron0x2c0dbe0()*0.281992);
}

double NNfunction_sb_dLsR::synapse0x2c132d0() {
   return (neuron0x2c0df20()*-2.14066);
}

double NNfunction_sb_dLsR::synapse0x2c13310() {
   return (neuron0x2c0e260()*-0.101046);
}

double NNfunction_sb_dLsR::synapse0x2c13350() {
   return (neuron0x2c0e5a0()*0.0131019);
}

double NNfunction_sb_dLsR::synapse0x2c13390() {
   return (neuron0x2c0e8e0()*0.172497);
}

double NNfunction_sb_dLsR::synapse0x2c133d0() {
   return (neuron0x2c0ec20()*0.0189462);
}

double NNfunction_sb_dLsR::synapse0x2c13410() {
   return (neuron0x2c0ef60()*-0.00647657);
}

double NNfunction_sb_dLsR::synapse0x2c12cc0() {
   return (neuron0x2c0f2a0()*-0.0469406);
}

double NNfunction_sb_dLsR::synapse0x2c12d00() {
   return (neuron0x2c0f5e0()*-0.0335284);
}

double NNfunction_sb_dLsR::synapse0x2c12d40() {
   return (neuron0x2c0f920()*0.540479);
}

double NNfunction_sb_dLsR::synapse0x2c12d80() {
   return (neuron0x2c0fc60()*-0.194663);
}

double NNfunction_sb_dLsR::synapse0x2c13660() {
   return (neuron0x2c0ffa0()*-0.297776);
}

double NNfunction_sb_dLsR::synapse0x2c136a0() {
   return (neuron0x2c102e0()*-0.39361);
}

double NNfunction_sb_dLsR::synapse0x2c136e0() {
   return (neuron0x2c10620()*0.0691365);
}

double NNfunction_sb_dLsR::synapse0x2c13060() {
   return (neuron0x2c10960()*0.482264);
}

double NNfunction_sb_dLsR::synapse0x2c130a0() {
   return (neuron0x2c10ec0()*-0.0738371);
}

double NNfunction_sb_dLsR::synapse0x2c13830() {
   return (neuron0x2c110e0()*0.492599);
}

double NNfunction_sb_dLsR::synapse0x2c13870() {
   return (neuron0x2c11420()*0.0468975);
}

double NNfunction_sb_dLsR::synapse0x2c138b0() {
   return (neuron0x2c11760()*0.276549);
}

double NNfunction_sb_dLsR::synapse0x2c138f0() {
   return (neuron0x2c11aa0()*0.141528);
}

double NNfunction_sb_dLsR::synapse0x2c13930() {
   return (neuron0x2c11de0()*0.0153242);
}

double NNfunction_sb_dLsR::synapse0x2c13970() {
   return (neuron0x2c12120()*0.0405768);
}

double NNfunction_sb_dLsR::synapse0x2c13cf0() {
   return (neuron0x2c0d560()*-0.503857);
}

double NNfunction_sb_dLsR::synapse0x2c13d30() {
   return (neuron0x2c0d8a0()*-0.0830421);
}

double NNfunction_sb_dLsR::synapse0x2c13d70() {
   return (neuron0x2c0dbe0()*0.160045);
}

double NNfunction_sb_dLsR::synapse0x2c13db0() {
   return (neuron0x2c0df20()*1.14675);
}

double NNfunction_sb_dLsR::synapse0x2c13df0() {
   return (neuron0x2c0e260()*-0.39422);
}

double NNfunction_sb_dLsR::synapse0x2c13e30() {
   return (neuron0x2c0e5a0()*0.0209963);
}

double NNfunction_sb_dLsR::synapse0x2c13e70() {
   return (neuron0x2c0e8e0()*0.0516739);
}

double NNfunction_sb_dLsR::synapse0x2c13eb0() {
   return (neuron0x2c0ec20()*0.051017);
}

double NNfunction_sb_dLsR::synapse0x2c13ef0() {
   return (neuron0x2c0ef60()*0.0902882);
}

double NNfunction_sb_dLsR::synapse0x2c13f30() {
   return (neuron0x2c0f2a0()*0.0713018);
}

double NNfunction_sb_dLsR::synapse0x2c13f70() {
   return (neuron0x2c0f5e0()*0.0124884);
}

double NNfunction_sb_dLsR::synapse0x2c13fb0() {
   return (neuron0x2c0f920()*-0.217487);
}

double NNfunction_sb_dLsR::synapse0x2c13ff0() {
   return (neuron0x2c0fc60()*0.189463);
}

double NNfunction_sb_dLsR::synapse0x2c14030() {
   return (neuron0x2c0ffa0()*-0.384089);
}

double NNfunction_sb_dLsR::synapse0x2c14070() {
   return (neuron0x2c102e0()*0.550036);
}

double NNfunction_sb_dLsR::synapse0x2c140b0() {
   return (neuron0x2c10620()*0.0714137);
}

double NNfunction_sb_dLsR::synapse0x2c13b40() {
   return (neuron0x2c10960()*-0.0122935);
}

double NNfunction_sb_dLsR::synapse0x2c13b80() {
   return (neuron0x2c10ec0()*-0.724631);
}

double NNfunction_sb_dLsR::synapse0x29ccac0() {
   return (neuron0x2c110e0()*0.426736);
}

double NNfunction_sb_dLsR::synapse0x29ccb00() {
   return (neuron0x2c11420()*-0.226802);
}

double NNfunction_sb_dLsR::synapse0x2bfc5f0() {
   return (neuron0x2c11760()*-0.297533);
}

double NNfunction_sb_dLsR::synapse0x2bfc630() {
   return (neuron0x2c11aa0()*-0.165761);
}

double NNfunction_sb_dLsR::synapse0x2bfc670() {
   return (neuron0x2c11de0()*-0.53127);
}

double NNfunction_sb_dLsR::synapse0x2c0d4a0() {
   return (neuron0x2c12120()*-0.0417594);
}

double NNfunction_sb_dLsR::synapse0x2c13600() {
   return (neuron0x2c0d560()*-0.450123);
}

double NNfunction_sb_dLsR::synapse0x2c0d4e0() {
   return (neuron0x2c0d8a0()*-0.511495);
}

double NNfunction_sb_dLsR::synapse0x2c0d520() {
   return (neuron0x2c0dbe0()*0.278061);
}

double NNfunction_sb_dLsR::synapse0x2c14200() {
   return (neuron0x2c0df20()*-0.163766);
}

double NNfunction_sb_dLsR::synapse0x2c14240() {
   return (neuron0x2c0e260()*0.278812);
}

double NNfunction_sb_dLsR::synapse0x2c14280() {
   return (neuron0x2c0e5a0()*-0.598166);
}

double NNfunction_sb_dLsR::synapse0x2c142c0() {
   return (neuron0x2c0e8e0()*0.340832);
}

double NNfunction_sb_dLsR::synapse0x2c14300() {
   return (neuron0x2c0ec20()*0.0997959);
}

double NNfunction_sb_dLsR::synapse0x2c14340() {
   return (neuron0x2c0ef60()*0.0312679);
}

double NNfunction_sb_dLsR::synapse0x2c14380() {
   return (neuron0x2c0f2a0()*-0.017273);
}

double NNfunction_sb_dLsR::synapse0x2c143c0() {
   return (neuron0x2c0f5e0()*-0.244935);
}

double NNfunction_sb_dLsR::synapse0x2c14400() {
   return (neuron0x2c0f920()*0.415836);
}

double NNfunction_sb_dLsR::synapse0x2c14440() {
   return (neuron0x2c0fc60()*0.0326211);
}

double NNfunction_sb_dLsR::synapse0x2c14480() {
   return (neuron0x2c0ffa0()*0.301101);
}

double NNfunction_sb_dLsR::synapse0x2c144c0() {
   return (neuron0x2c102e0()*-0.647844);
}

double NNfunction_sb_dLsR::synapse0x2c14500() {
   return (neuron0x2c10620()*0.387753);
}

double NNfunction_sb_dLsR::synapse0x2c13450() {
   return (neuron0x2c10960()*-0.119097);
}

double NNfunction_sb_dLsR::synapse0x2c13490() {
   return (neuron0x2c10ec0()*0.372352);
}

double NNfunction_sb_dLsR::synapse0x2c14650() {
   return (neuron0x2c110e0()*0.163627);
}

double NNfunction_sb_dLsR::synapse0x2c14690() {
   return (neuron0x2c11420()*-0.122465);
}

double NNfunction_sb_dLsR::synapse0x2c146d0() {
   return (neuron0x2c11760()*0.0830407);
}

double NNfunction_sb_dLsR::synapse0x2c14710() {
   return (neuron0x2c11aa0()*0.347925);
}

double NNfunction_sb_dLsR::synapse0x2c14750() {
   return (neuron0x2c11de0()*-0.170221);
}

double NNfunction_sb_dLsR::synapse0x2c14790() {
   return (neuron0x2c12120()*-0.336072);
}

double NNfunction_sb_dLsR::synapse0x2c14b10() {
   return (neuron0x2c0d560()*-0.00949193);
}

double NNfunction_sb_dLsR::synapse0x2c14b50() {
   return (neuron0x2c0d8a0()*0.166785);
}

double NNfunction_sb_dLsR::synapse0x2c14b90() {
   return (neuron0x2c0dbe0()*-0.436105);
}

double NNfunction_sb_dLsR::synapse0x2c14bd0() {
   return (neuron0x2c0df20()*0.0623829);
}

double NNfunction_sb_dLsR::synapse0x2c14c10() {
   return (neuron0x2c0e260()*-0.0417669);
}

double NNfunction_sb_dLsR::synapse0x2c14c50() {
   return (neuron0x2c0e5a0()*-0.3468);
}

double NNfunction_sb_dLsR::synapse0x2c14c90() {
   return (neuron0x2c0e8e0()*0.107417);
}

double NNfunction_sb_dLsR::synapse0x2c14cd0() {
   return (neuron0x2c0ec20()*0.815713);
}

double NNfunction_sb_dLsR::synapse0x2c14d10() {
   return (neuron0x2c0ef60()*0.123562);
}

double NNfunction_sb_dLsR::synapse0x2c14d50() {
   return (neuron0x2c0f2a0()*0.557073);
}

double NNfunction_sb_dLsR::synapse0x2c14d90() {
   return (neuron0x2c0f5e0()*0.171052);
}

double NNfunction_sb_dLsR::synapse0x2c14dd0() {
   return (neuron0x2c0f920()*0.231049);
}

double NNfunction_sb_dLsR::synapse0x2c14e10() {
   return (neuron0x2c0fc60()*0.114627);
}

double NNfunction_sb_dLsR::synapse0x2c14e50() {
   return (neuron0x2c0ffa0()*0.314732);
}

double NNfunction_sb_dLsR::synapse0x2c14e90() {
   return (neuron0x2c102e0()*0.652408);
}

double NNfunction_sb_dLsR::synapse0x2c14ed0() {
   return (neuron0x2c10620()*-0.305293);
}

double NNfunction_sb_dLsR::synapse0x2c14960() {
   return (neuron0x2c10960()*0.235777);
}

double NNfunction_sb_dLsR::synapse0x2c149a0() {
   return (neuron0x2c10ec0()*0.989695);
}

double NNfunction_sb_dLsR::synapse0x2c15020() {
   return (neuron0x2c110e0()*0.287399);
}

double NNfunction_sb_dLsR::synapse0x2c15060() {
   return (neuron0x2c11420()*0.25803);
}

double NNfunction_sb_dLsR::synapse0x2c150a0() {
   return (neuron0x2c11760()*0.0620099);
}

double NNfunction_sb_dLsR::synapse0x2c150e0() {
   return (neuron0x2c11aa0()*-0.316137);
}

double NNfunction_sb_dLsR::synapse0x2c15120() {
   return (neuron0x2c11de0()*-0.174936);
}

double NNfunction_sb_dLsR::synapse0x2c15160() {
   return (neuron0x2c12120()*-0.324392);
}

double NNfunction_sb_dLsR::synapse0x2c154e0() {
   return (neuron0x2c0d560()*-0.000492599);
}

double NNfunction_sb_dLsR::synapse0x2c15520() {
   return (neuron0x2c0d8a0()*-0.00393511);
}

double NNfunction_sb_dLsR::synapse0x2c15560() {
   return (neuron0x2c0dbe0()*-0.0427967);
}

double NNfunction_sb_dLsR::synapse0x2c155a0() {
   return (neuron0x2c0df20()*-0.199591);
}

double NNfunction_sb_dLsR::synapse0x2c155e0() {
   return (neuron0x2c0e260()*-0.0080419);
}

double NNfunction_sb_dLsR::synapse0x2c15620() {
   return (neuron0x2c0e5a0()*-0.019977);
}

double NNfunction_sb_dLsR::synapse0x2c15660() {
   return (neuron0x2c0e8e0()*-0.00642807);
}

double NNfunction_sb_dLsR::synapse0x2c156a0() {
   return (neuron0x2c0ec20()*0.0241761);
}

double NNfunction_sb_dLsR::synapse0x2c156e0() {
   return (neuron0x2c0ef60()*-0.161675);
}

double NNfunction_sb_dLsR::synapse0x29cce30() {
   return (neuron0x2c0f2a0()*0.0425166);
}

double NNfunction_sb_dLsR::synapse0x29cce70() {
   return (neuron0x2c0f5e0()*0.0195054);
}

double NNfunction_sb_dLsR::synapse0x29cceb0() {
   return (neuron0x2c0f920()*0.313877);
}

double NNfunction_sb_dLsR::synapse0x29ccef0() {
   return (neuron0x2c0fc60()*0.00975631);
}

double NNfunction_sb_dLsR::synapse0x29ccf30() {
   return (neuron0x2c0ffa0()*0.0433709);
}

double NNfunction_sb_dLsR::synapse0x29ccf70() {
   return (neuron0x2c102e0()*-0.00810955);
}

double NNfunction_sb_dLsR::synapse0x29ccfb0() {
   return (neuron0x2c10620()*-0.021247);
}

double NNfunction_sb_dLsR::synapse0x2c15330() {
   return (neuron0x2c10960()*-1.37978e-05);
}

double NNfunction_sb_dLsR::synapse0x2c15370() {
   return (neuron0x2c10ec0()*0.0386009);
}

double NNfunction_sb_dLsR::synapse0x29cd100() {
   return (neuron0x2c110e0()*0.28644);
}

double NNfunction_sb_dLsR::synapse0x29cd140() {
   return (neuron0x2c11420()*0.019195);
}

double NNfunction_sb_dLsR::synapse0x29cd180() {
   return (neuron0x2c11760()*0.00578955);
}

double NNfunction_sb_dLsR::synapse0x29cd1c0() {
   return (neuron0x2c11aa0()*0.0173493);
}

double NNfunction_sb_dLsR::synapse0x29cd200() {
   return (neuron0x2c11de0()*0.0122677);
}

double NNfunction_sb_dLsR::synapse0x2c15f30() {
   return (neuron0x2c12120()*-0.00695421);
}

double NNfunction_sb_dLsR::synapse0x2c162b0() {
   return (neuron0x2c0d560()*-0.000216428);
}

double NNfunction_sb_dLsR::synapse0x2c162f0() {
   return (neuron0x2c0d8a0()*0.00255963);
}

double NNfunction_sb_dLsR::synapse0x2c16330() {
   return (neuron0x2c0dbe0()*-0.00372891);
}

double NNfunction_sb_dLsR::synapse0x2c16370() {
   return (neuron0x2c0df20()*2.73026);
}

double NNfunction_sb_dLsR::synapse0x2c163b0() {
   return (neuron0x2c0e260()*-0.00236298);
}

double NNfunction_sb_dLsR::synapse0x2c163f0() {
   return (neuron0x2c0e5a0()*0.00519998);
}

double NNfunction_sb_dLsR::synapse0x2c16430() {
   return (neuron0x2c0e8e0()*0.0214339);
}

double NNfunction_sb_dLsR::synapse0x2c16470() {
   return (neuron0x2c0ec20()*-0.00448683);
}

double NNfunction_sb_dLsR::synapse0x2c164b0() {
   return (neuron0x2c0ef60()*0.00875875);
}

double NNfunction_sb_dLsR::synapse0x2c164f0() {
   return (neuron0x2c0f2a0()*-0.00342464);
}

double NNfunction_sb_dLsR::synapse0x2c16530() {
   return (neuron0x2c0f5e0()*0.00215901);
}

double NNfunction_sb_dLsR::synapse0x2c16570() {
   return (neuron0x2c0f920()*0.0414787);
}

double NNfunction_sb_dLsR::synapse0x2c165b0() {
   return (neuron0x2c0fc60()*-0.00152524);
}

double NNfunction_sb_dLsR::synapse0x2c165f0() {
   return (neuron0x2c0ffa0()*-0.00916306);
}

double NNfunction_sb_dLsR::synapse0x2c16630() {
   return (neuron0x2c102e0()*-0.0002492);
}

double NNfunction_sb_dLsR::synapse0x2c16670() {
   return (neuron0x2c10620()*0.0061541);
}

double NNfunction_sb_dLsR::synapse0x2c16100() {
   return (neuron0x2c10960()*-0.00553974);
}

double NNfunction_sb_dLsR::synapse0x2c16140() {
   return (neuron0x2c10ec0()*-0.0186245);
}

double NNfunction_sb_dLsR::synapse0x2c167c0() {
   return (neuron0x2c110e0()*0.0705799);
}

double NNfunction_sb_dLsR::synapse0x2c16800() {
   return (neuron0x2c11420()*0.000187457);
}

double NNfunction_sb_dLsR::synapse0x2c16840() {
   return (neuron0x2c11760()*0.00825539);
}

double NNfunction_sb_dLsR::synapse0x2c16880() {
   return (neuron0x2c11aa0()*-0.00665996);
}

double NNfunction_sb_dLsR::synapse0x2c168c0() {
   return (neuron0x2c11de0()*0.000971322);
}

double NNfunction_sb_dLsR::synapse0x2c16900() {
   return (neuron0x2c12120()*-0.003544);
}

double NNfunction_sb_dLsR::synapse0x2c16c80() {
   return (neuron0x2c0d560()*0.00506692);
}

double NNfunction_sb_dLsR::synapse0x2c16cc0() {
   return (neuron0x2c0d8a0()*0.101254);
}

double NNfunction_sb_dLsR::synapse0x2c16d00() {
   return (neuron0x2c0dbe0()*0.0331402);
}

double NNfunction_sb_dLsR::synapse0x2c16d40() {
   return (neuron0x2c0df20()*0.227197);
}

double NNfunction_sb_dLsR::synapse0x2c16d80() {
   return (neuron0x2c0e260()*0.370368);
}

double NNfunction_sb_dLsR::synapse0x2c16dc0() {
   return (neuron0x2c0e5a0()*0.0737511);
}

double NNfunction_sb_dLsR::synapse0x2c16e00() {
   return (neuron0x2c0e8e0()*0.271833);
}

double NNfunction_sb_dLsR::synapse0x2c16e40() {
   return (neuron0x2c0ec20()*0.260201);
}

double NNfunction_sb_dLsR::synapse0x2c16e80() {
   return (neuron0x2c0ef60()*0.102437);
}

double NNfunction_sb_dLsR::synapse0x2c16ec0() {
   return (neuron0x2c0f2a0()*-0.100038);
}

double NNfunction_sb_dLsR::synapse0x2c16f00() {
   return (neuron0x2c0f5e0()*0.0338482);
}

double NNfunction_sb_dLsR::synapse0x2c16f40() {
   return (neuron0x2c0f920()*0.154804);
}

double NNfunction_sb_dLsR::synapse0x2c16f80() {
   return (neuron0x2c0fc60()*-0.227001);
}

double NNfunction_sb_dLsR::synapse0x2c16fc0() {
   return (neuron0x2c0ffa0()*0.028538);
}

double NNfunction_sb_dLsR::synapse0x2c17000() {
   return (neuron0x2c102e0()*0.248594);
}

double NNfunction_sb_dLsR::synapse0x2c17040() {
   return (neuron0x2c10620()*0.467659);
}

double NNfunction_sb_dLsR::synapse0x2c16ad0() {
   return (neuron0x2c10960()*0.354507);
}

double NNfunction_sb_dLsR::synapse0x2c16b10() {
   return (neuron0x2c10ec0()*-0.115562);
}

double NNfunction_sb_dLsR::synapse0x2c17190() {
   return (neuron0x2c110e0()*-0.265992);
}

double NNfunction_sb_dLsR::synapse0x2c171d0() {
   return (neuron0x2c11420()*-0.180645);
}

double NNfunction_sb_dLsR::synapse0x2c17210() {
   return (neuron0x2c11760()*0.0630351);
}

double NNfunction_sb_dLsR::synapse0x2c17250() {
   return (neuron0x2c11aa0()*-0.118499);
}

double NNfunction_sb_dLsR::synapse0x2c17290() {
   return (neuron0x2c11de0()*0.0475734);
}

double NNfunction_sb_dLsR::synapse0x2c172d0() {
   return (neuron0x2c12120()*-0.0775005);
}

double NNfunction_sb_dLsR::synapse0x2c10db0() {
   return (neuron0x2c0d560()*-0.0245735);
}

double NNfunction_sb_dLsR::synapse0x2c10df0() {
   return (neuron0x2c0d8a0()*0.0119271);
}

double NNfunction_sb_dLsR::synapse0x2c10e30() {
   return (neuron0x2c0dbe0()*0.0565258);
}

double NNfunction_sb_dLsR::synapse0x2c10e70() {
   return (neuron0x2c0df20()*-5.92191);
}

double NNfunction_sb_dLsR::synapse0x2c17860() {
   return (neuron0x2c0e260()*0.0342229);
}

double NNfunction_sb_dLsR::synapse0x2c178a0() {
   return (neuron0x2c0e5a0()*0.00341983);
}

double NNfunction_sb_dLsR::synapse0x2c178e0() {
   return (neuron0x2c0e8e0()*-0.0385429);
}

double NNfunction_sb_dLsR::synapse0x2c17920() {
   return (neuron0x2c0ec20()*-0.00433427);
}

double NNfunction_sb_dLsR::synapse0x2c17960() {
   return (neuron0x2c0ef60()*0.0344476);
}

double NNfunction_sb_dLsR::synapse0x2c179a0() {
   return (neuron0x2c0f2a0()*-0.015966);
}

double NNfunction_sb_dLsR::synapse0x2c179e0() {
   return (neuron0x2c0f5e0()*-0.0341027);
}

double NNfunction_sb_dLsR::synapse0x2c17a20() {
   return (neuron0x2c0f920()*0.0429698);
}

double NNfunction_sb_dLsR::synapse0x2c17a60() {
   return (neuron0x2c0fc60()*-0.0441877);
}

double NNfunction_sb_dLsR::synapse0x2c17aa0() {
   return (neuron0x2c0ffa0()*0.0312789);
}

double NNfunction_sb_dLsR::synapse0x2c17ae0() {
   return (neuron0x2c102e0()*0.0216707);
}

double NNfunction_sb_dLsR::synapse0x2c17b20() {
   return (neuron0x2c10620()*0.0323931);
}

double NNfunction_sb_dLsR::synapse0x2c174a0() {
   return (neuron0x2c10960()*0.000722641);
}

double NNfunction_sb_dLsR::synapse0x2c174e0() {
   return (neuron0x2c10ec0()*-0.00619033);
}

double NNfunction_sb_dLsR::synapse0x2c17c70() {
   return (neuron0x2c110e0()*-0.0794607);
}

double NNfunction_sb_dLsR::synapse0x2c17cb0() {
   return (neuron0x2c11420()*-0.00938072);
}

double NNfunction_sb_dLsR::synapse0x2c17cf0() {
   return (neuron0x2c11760()*-0.00367323);
}

double NNfunction_sb_dLsR::synapse0x2c17d30() {
   return (neuron0x2c11aa0()*0.0099235);
}

double NNfunction_sb_dLsR::synapse0x2c17d70() {
   return (neuron0x2c11de0()*-0.023079);
}

double NNfunction_sb_dLsR::synapse0x2c17db0() {
   return (neuron0x2c12120()*-0.00635938);
}

double NNfunction_sb_dLsR::synapse0x2c18130() {
   return (neuron0x2c0d560()*-0.702656);
}

double NNfunction_sb_dLsR::synapse0x2c18170() {
   return (neuron0x2c0d8a0()*0.130385);
}

double NNfunction_sb_dLsR::synapse0x2c181b0() {
   return (neuron0x2c0dbe0()*-0.228289);
}

double NNfunction_sb_dLsR::synapse0x2c181f0() {
   return (neuron0x2c0df20()*-0.0195705);
}

double NNfunction_sb_dLsR::synapse0x2c18230() {
   return (neuron0x2c0e260()*-0.434786);
}

double NNfunction_sb_dLsR::synapse0x2c18270() {
   return (neuron0x2c0e5a0()*0.316767);
}

double NNfunction_sb_dLsR::synapse0x2c182b0() {
   return (neuron0x2c0e8e0()*0.318736);
}

double NNfunction_sb_dLsR::synapse0x2c182f0() {
   return (neuron0x2c0ec20()*-0.599291);
}

double NNfunction_sb_dLsR::synapse0x2c18330() {
   return (neuron0x2c0ef60()*-0.320327);
}

double NNfunction_sb_dLsR::synapse0x2c18370() {
   return (neuron0x2c0f2a0()*-0.578661);
}

double NNfunction_sb_dLsR::synapse0x2c183b0() {
   return (neuron0x2c0f5e0()*0.0154739);
}

double NNfunction_sb_dLsR::synapse0x2c183f0() {
   return (neuron0x2c0f920()*-0.0677928);
}

double NNfunction_sb_dLsR::synapse0x2c18430() {
   return (neuron0x2c0fc60()*-0.209734);
}

double NNfunction_sb_dLsR::synapse0x2c18470() {
   return (neuron0x2c0ffa0()*-0.718753);
}

double NNfunction_sb_dLsR::synapse0x2c184b0() {
   return (neuron0x2c102e0()*0.102221);
}

double NNfunction_sb_dLsR::synapse0x2c184f0() {
   return (neuron0x2c10620()*-0.204109);
}

double NNfunction_sb_dLsR::synapse0x2c17f80() {
   return (neuron0x2c10960()*0.451828);
}

double NNfunction_sb_dLsR::synapse0x2c17fc0() {
   return (neuron0x2c10ec0()*0.403123);
}

double NNfunction_sb_dLsR::synapse0x2c18640() {
   return (neuron0x2c110e0()*0.194171);
}

double NNfunction_sb_dLsR::synapse0x2c18680() {
   return (neuron0x2c11420()*0.295006);
}

double NNfunction_sb_dLsR::synapse0x2c186c0() {
   return (neuron0x2c11760()*0.401488);
}

double NNfunction_sb_dLsR::synapse0x2c18700() {
   return (neuron0x2c11aa0()*0.553994);
}

double NNfunction_sb_dLsR::synapse0x2c18740() {
   return (neuron0x2c11de0()*0.339148);
}

double NNfunction_sb_dLsR::synapse0x2c18780() {
   return (neuron0x2c12120()*-0.219933);
}

double NNfunction_sb_dLsR::synapse0x2c18b00() {
   return (neuron0x2c0d560()*0.590546);
}

double NNfunction_sb_dLsR::synapse0x2c18b40() {
   return (neuron0x2c0d8a0()*0.53505);
}

double NNfunction_sb_dLsR::synapse0x2c18b80() {
   return (neuron0x2c0dbe0()*0.325446);
}

double NNfunction_sb_dLsR::synapse0x2c18bc0() {
   return (neuron0x2c0df20()*1.37162);
}

double NNfunction_sb_dLsR::synapse0x2c18c00() {
   return (neuron0x2c0e260()*-0.00441773);
}

double NNfunction_sb_dLsR::synapse0x2c18c40() {
   return (neuron0x2c0e5a0()*0.28597);
}

double NNfunction_sb_dLsR::synapse0x2c18c80() {
   return (neuron0x2c0e8e0()*-0.361892);
}

double NNfunction_sb_dLsR::synapse0x2c18cc0() {
   return (neuron0x2c0ec20()*-0.300425);
}

double NNfunction_sb_dLsR::synapse0x2c18d00() {
   return (neuron0x2c0ef60()*-0.115184);
}

double NNfunction_sb_dLsR::synapse0x2c18d40() {
   return (neuron0x2c0f2a0()*0.132577);
}

double NNfunction_sb_dLsR::synapse0x2c18d80() {
   return (neuron0x2c0f5e0()*0.364539);
}

double NNfunction_sb_dLsR::synapse0x2c18dc0() {
   return (neuron0x2c0f920()*-0.0317704);
}

double NNfunction_sb_dLsR::synapse0x2c18e00() {
   return (neuron0x2c0fc60()*-0.471754);
}

double NNfunction_sb_dLsR::synapse0x2c18e40() {
   return (neuron0x2c0ffa0()*0.768664);
}

double NNfunction_sb_dLsR::synapse0x2c18e80() {
   return (neuron0x2c102e0()*0.73234);
}

double NNfunction_sb_dLsR::synapse0x2c18ec0() {
   return (neuron0x2c10620()*-0.220893);
}

double NNfunction_sb_dLsR::synapse0x2c18950() {
   return (neuron0x2c10960()*-0.315064);
}

double NNfunction_sb_dLsR::synapse0x2c18990() {
   return (neuron0x2c10ec0()*-0.0323894);
}

double NNfunction_sb_dLsR::synapse0x2c15720() {
   return (neuron0x2c110e0()*0.394087);
}

double NNfunction_sb_dLsR::synapse0x2c15760() {
   return (neuron0x2c11420()*-0.359833);
}

double NNfunction_sb_dLsR::synapse0x2c157a0() {
   return (neuron0x2c11760()*0.00438548);
}

double NNfunction_sb_dLsR::synapse0x2c157e0() {
   return (neuron0x2c11aa0()*-0.018973);
}

double NNfunction_sb_dLsR::synapse0x2c15820() {
   return (neuron0x2c11de0()*-0.0449357);
}

double NNfunction_sb_dLsR::synapse0x2c15860() {
   return (neuron0x2c12120()*-0.214023);
}

double NNfunction_sb_dLsR::synapse0x2c15be0() {
   return (neuron0x2c0d560()*-0.246917);
}

double NNfunction_sb_dLsR::synapse0x2c15c20() {
   return (neuron0x2c0d8a0()*-0.311583);
}

double NNfunction_sb_dLsR::synapse0x2c15c60() {
   return (neuron0x2c0dbe0()*0.0121704);
}

double NNfunction_sb_dLsR::synapse0x2c15ca0() {
   return (neuron0x2c0df20()*-0.0293823);
}

double NNfunction_sb_dLsR::synapse0x2c15ce0() {
   return (neuron0x2c0e260()*-0.114051);
}

double NNfunction_sb_dLsR::synapse0x2c15d20() {
   return (neuron0x2c0e5a0()*-0.529934);
}

double NNfunction_sb_dLsR::synapse0x2c15d60() {
   return (neuron0x2c0e8e0()*0.0302414);
}

double NNfunction_sb_dLsR::synapse0x2c15da0() {
   return (neuron0x2c0ec20()*0.109033);
}

double NNfunction_sb_dLsR::synapse0x2c15de0() {
   return (neuron0x2c0ef60()*0.174755);
}

double NNfunction_sb_dLsR::synapse0x2c15e20() {
   return (neuron0x2c0f2a0()*0.392517);
}

double NNfunction_sb_dLsR::synapse0x2c15e60() {
   return (neuron0x2c0f5e0()*-0.576216);
}

double NNfunction_sb_dLsR::synapse0x2c15ea0() {
   return (neuron0x2c0f920()*-0.0185262);
}

double NNfunction_sb_dLsR::synapse0x2c15ee0() {
   return (neuron0x2c0fc60()*-0.425488);
}

double NNfunction_sb_dLsR::synapse0x2c1a020() {
   return (neuron0x2c0ffa0()*0.264685);
}

double NNfunction_sb_dLsR::synapse0x2c1a060() {
   return (neuron0x2c102e0()*0.020605);
}

double NNfunction_sb_dLsR::synapse0x2c1a0a0() {
   return (neuron0x2c10620()*-0.349568);
}

double NNfunction_sb_dLsR::synapse0x2c15a30() {
   return (neuron0x2c10960()*0.466695);
}

double NNfunction_sb_dLsR::synapse0x2c15a70() {
   return (neuron0x2c10ec0()*0.187205);
}

double NNfunction_sb_dLsR::synapse0x2c1a1f0() {
   return (neuron0x2c110e0()*-0.00801158);
}

double NNfunction_sb_dLsR::synapse0x2c1a230() {
   return (neuron0x2c11420()*-0.143997);
}

double NNfunction_sb_dLsR::synapse0x2c1a270() {
   return (neuron0x2c11760()*0.798815);
}

double NNfunction_sb_dLsR::synapse0x2c1a2b0() {
   return (neuron0x2c11aa0()*0.520935);
}

double NNfunction_sb_dLsR::synapse0x2c1a2f0() {
   return (neuron0x2c11de0()*0.389599);
}

double NNfunction_sb_dLsR::synapse0x2c1a330() {
   return (neuron0x2c12120()*-0.53663);
}

double NNfunction_sb_dLsR::synapse0x2c1a6b0() {
   return (neuron0x2c0d560()*-0.0191144);
}

double NNfunction_sb_dLsR::synapse0x2c1a6f0() {
   return (neuron0x2c0d8a0()*0.0317483);
}

double NNfunction_sb_dLsR::synapse0x2c1a730() {
   return (neuron0x2c0dbe0()*-0.0999779);
}

double NNfunction_sb_dLsR::synapse0x2c1a770() {
   return (neuron0x2c0df20()*-0.023677);
}

double NNfunction_sb_dLsR::synapse0x2c1a7b0() {
   return (neuron0x2c0e260()*-0.0173925);
}

double NNfunction_sb_dLsR::synapse0x2c1a7f0() {
   return (neuron0x2c0e5a0()*0.0104094);
}

double NNfunction_sb_dLsR::synapse0x2c1a830() {
   return (neuron0x2c0e8e0()*-0.0504901);
}

double NNfunction_sb_dLsR::synapse0x2c1a870() {
   return (neuron0x2c0ec20()*-0.0309925);
}

double NNfunction_sb_dLsR::synapse0x2c1a8b0() {
   return (neuron0x2c0ef60()*-0.0126023);
}

double NNfunction_sb_dLsR::synapse0x2c1a8f0() {
   return (neuron0x2c0f2a0()*-0.0537958);
}

double NNfunction_sb_dLsR::synapse0x2c1a930() {
   return (neuron0x2c0f5e0()*-0.00601304);
}

double NNfunction_sb_dLsR::synapse0x2c1a970() {
   return (neuron0x2c0f920()*1.90362);
}

double NNfunction_sb_dLsR::synapse0x2c1a9b0() {
   return (neuron0x2c0fc60()*-0.0706285);
}

double NNfunction_sb_dLsR::synapse0x2c1a9f0() {
   return (neuron0x2c0ffa0()*0.0152954);
}

double NNfunction_sb_dLsR::synapse0x2c1aa30() {
   return (neuron0x2c102e0()*0.0316227);
}

double NNfunction_sb_dLsR::synapse0x2c1aa70() {
   return (neuron0x2c10620()*0.10195);
}

double NNfunction_sb_dLsR::synapse0x2c1a500() {
   return (neuron0x2c10960()*-0.00420721);
}

double NNfunction_sb_dLsR::synapse0x2c1a540() {
   return (neuron0x2c10ec0()*-0.0384244);
}

double NNfunction_sb_dLsR::synapse0x2c1abc0() {
   return (neuron0x2c110e0()*-0.400109);
}

double NNfunction_sb_dLsR::synapse0x2c1ac00() {
   return (neuron0x2c11420()*0.00760346);
}

double NNfunction_sb_dLsR::synapse0x2c1ac40() {
   return (neuron0x2c11760()*0.00542873);
}

double NNfunction_sb_dLsR::synapse0x2c1ac80() {
   return (neuron0x2c11aa0()*-0.00172205);
}

double NNfunction_sb_dLsR::synapse0x2c1acc0() {
   return (neuron0x2c11de0()*-0.0187895);
}

double NNfunction_sb_dLsR::synapse0x2c1ad00() {
   return (neuron0x2c12120()*-0.000252575);
}

double NNfunction_sb_dLsR::synapse0x2c1b080() {
   return (neuron0x2c0d560()*0.192619);
}

double NNfunction_sb_dLsR::synapse0x2c1b0c0() {
   return (neuron0x2c0d8a0()*0.380734);
}

double NNfunction_sb_dLsR::synapse0x2c1b100() {
   return (neuron0x2c0dbe0()*0.879493);
}

double NNfunction_sb_dLsR::synapse0x2c1b140() {
   return (neuron0x2c0df20()*-0.291024);
}

double NNfunction_sb_dLsR::synapse0x2c1b180() {
   return (neuron0x2c0e260()*0.129681);
}

double NNfunction_sb_dLsR::synapse0x2c1b1c0() {
   return (neuron0x2c0e5a0()*0.373829);
}

double NNfunction_sb_dLsR::synapse0x2c1b200() {
   return (neuron0x2c0e8e0()*0.483096);
}

double NNfunction_sb_dLsR::synapse0x2c1b240() {
   return (neuron0x2c0ec20()*0.416114);
}

double NNfunction_sb_dLsR::synapse0x2c1b280() {
   return (neuron0x2c0ef60()*-0.188007);
}

double NNfunction_sb_dLsR::synapse0x2c1b2c0() {
   return (neuron0x2c0f2a0()*-0.198397);
}

double NNfunction_sb_dLsR::synapse0x2c1b300() {
   return (neuron0x2c0f5e0()*-0.0547297);
}

double NNfunction_sb_dLsR::synapse0x2c1b340() {
   return (neuron0x2c0f920()*0.105096);
}

double NNfunction_sb_dLsR::synapse0x2c1b380() {
   return (neuron0x2c0fc60()*-0.221238);
}

double NNfunction_sb_dLsR::synapse0x2c1b3c0() {
   return (neuron0x2c0ffa0()*0.161998);
}

double NNfunction_sb_dLsR::synapse0x2c1b400() {
   return (neuron0x2c102e0()*0.134593);
}

double NNfunction_sb_dLsR::synapse0x2c1b440() {
   return (neuron0x2c10620()*0.191498);
}

double NNfunction_sb_dLsR::synapse0x2c1aed0() {
   return (neuron0x2c10960()*-0.704311);
}

double NNfunction_sb_dLsR::synapse0x2c1af10() {
   return (neuron0x2c10ec0()*0.0751826);
}

double NNfunction_sb_dLsR::synapse0x2c1b590() {
   return (neuron0x2c110e0()*0.450645);
}

double NNfunction_sb_dLsR::synapse0x2c1b5d0() {
   return (neuron0x2c11420()*0.0670276);
}

double NNfunction_sb_dLsR::synapse0x2c1b610() {
   return (neuron0x2c11760()*-0.0959839);
}

double NNfunction_sb_dLsR::synapse0x2c1b650() {
   return (neuron0x2c11aa0()*0.00363723);
}

double NNfunction_sb_dLsR::synapse0x2c1b690() {
   return (neuron0x2c11de0()*-0.0221);
}

double NNfunction_sb_dLsR::synapse0x2c1b6d0() {
   return (neuron0x2c12120()*0.102257);
}

double NNfunction_sb_dLsR::synapse0x2c1ba50() {
   return (neuron0x2c0d560()*0.00616621);
}

double NNfunction_sb_dLsR::synapse0x2c1ba90() {
   return (neuron0x2c0d8a0()*-0.0084366);
}

double NNfunction_sb_dLsR::synapse0x2c1bad0() {
   return (neuron0x2c0dbe0()*0.0103784);
}

double NNfunction_sb_dLsR::synapse0x2c1bb10() {
   return (neuron0x2c0df20()*0.0179659);
}

double NNfunction_sb_dLsR::synapse0x2c1bb50() {
   return (neuron0x2c0e260()*0.000611779);
}

double NNfunction_sb_dLsR::synapse0x2c1bb90() {
   return (neuron0x2c0e5a0()*0.00475898);
}

double NNfunction_sb_dLsR::synapse0x2c1bbd0() {
   return (neuron0x2c0e8e0()*0.0376815);
}

double NNfunction_sb_dLsR::synapse0x2c1bc10() {
   return (neuron0x2c0ec20()*-0.0233619);
}

double NNfunction_sb_dLsR::synapse0x2c1bc50() {
   return (neuron0x2c0ef60()*-0.143421);
}

double NNfunction_sb_dLsR::synapse0x2c1bc90() {
   return (neuron0x2c0f2a0()*-0.0685868);
}

double NNfunction_sb_dLsR::synapse0x2c1bcd0() {
   return (neuron0x2c0f5e0()*-0.15032);
}

double NNfunction_sb_dLsR::synapse0x2c1bd10() {
   return (neuron0x2c0f920()*-0.196939);
}

double NNfunction_sb_dLsR::synapse0x2c1bd50() {
   return (neuron0x2c0fc60()*-0.0161344);
}

double NNfunction_sb_dLsR::synapse0x2c1bd90() {
   return (neuron0x2c0ffa0()*0.00859907);
}

double NNfunction_sb_dLsR::synapse0x2c1bdd0() {
   return (neuron0x2c102e0()*0.00168982);
}

double NNfunction_sb_dLsR::synapse0x2c1be10() {
   return (neuron0x2c10620()*-0.0170645);
}

double NNfunction_sb_dLsR::synapse0x2c1b8a0() {
   return (neuron0x2c10960()*-0.0359411);
}

double NNfunction_sb_dLsR::synapse0x2c1b8e0() {
   return (neuron0x2c10ec0()*0.018477);
}

double NNfunction_sb_dLsR::synapse0x2c1bf60() {
   return (neuron0x2c110e0()*-0.392657);
}

double NNfunction_sb_dLsR::synapse0x2c1bfa0() {
   return (neuron0x2c11420()*-0.0117355);
}

double NNfunction_sb_dLsR::synapse0x2c1bfe0() {
   return (neuron0x2c11760()*-0.0177669);
}

double NNfunction_sb_dLsR::synapse0x2c1c020() {
   return (neuron0x2c11aa0()*0.0334714);
}

double NNfunction_sb_dLsR::synapse0x2c1c060() {
   return (neuron0x2c11de0()*-0.00330108);
}

double NNfunction_sb_dLsR::synapse0x2c1c0a0() {
   return (neuron0x2c12120()*0.0133076);
}

double NNfunction_sb_dLsR::synapse0x2c1c420() {
   return (neuron0x2c0d560()*-0.249332);
}

double NNfunction_sb_dLsR::synapse0x2c0d780() {
   return (neuron0x2c0d8a0()*0.191237);
}

double NNfunction_sb_dLsR::synapse0x2c0d7c0() {
   return (neuron0x2c0dbe0()*0.227754);
}

double NNfunction_sb_dLsR::synapse0x2c0dac0() {
   return (neuron0x2c0df20()*-4.56949);
}

double NNfunction_sb_dLsR::synapse0x2c0db00() {
   return (neuron0x2c0e260()*0.289836);
}

double NNfunction_sb_dLsR::synapse0x2c0de00() {
   return (neuron0x2c0e5a0()*0.193586);
}

double NNfunction_sb_dLsR::synapse0x2c0de40() {
   return (neuron0x2c0e8e0()*-0.255018);
}

double NNfunction_sb_dLsR::synapse0x2c0e140() {
   return (neuron0x2c0ec20()*0.298606);
}

double NNfunction_sb_dLsR::synapse0x2c0e180() {
   return (neuron0x2c0ef60()*-0.00844462);
}

double NNfunction_sb_dLsR::synapse0x2c0e480() {
   return (neuron0x2c0f2a0()*0.171787);
}

double NNfunction_sb_dLsR::synapse0x2c0e4c0() {
   return (neuron0x2c0f5e0()*-0.160413);
}

double NNfunction_sb_dLsR::synapse0x2c0e7c0() {
   return (neuron0x2c0f920()*0.485234);
}

double NNfunction_sb_dLsR::synapse0x2c0e800() {
   return (neuron0x2c0fc60()*0.0954085);
}

double NNfunction_sb_dLsR::synapse0x2c0eb00() {
   return (neuron0x2c0ffa0()*-0.0227425);
}

double NNfunction_sb_dLsR::synapse0x2c0eb40() {
   return (neuron0x2c102e0()*-0.0307014);
}

double NNfunction_sb_dLsR::synapse0x2c0ee40() {
   return (neuron0x2c10620()*-0.0824871);
}

double NNfunction_sb_dLsR::synapse0x2c0ee80() {
   return (neuron0x2c10960()*-0.0319591);
}

double NNfunction_sb_dLsR::synapse0x2c0f180() {
   return (neuron0x2c10ec0()*0.0589016);
}

double NNfunction_sb_dLsR::synapse0x2c0f1c0() {
   return (neuron0x2c110e0()*0.334407);
}

double NNfunction_sb_dLsR::synapse0x2c0f4c0() {
   return (neuron0x2c11420()*-0.048278);
}

double NNfunction_sb_dLsR::synapse0x2c0f500() {
   return (neuron0x2c11760()*0.154173);
}

double NNfunction_sb_dLsR::synapse0x2c0f800() {
   return (neuron0x2c11aa0()*-0.154153);
}

double NNfunction_sb_dLsR::synapse0x2c0f840() {
   return (neuron0x2c11de0()*-0.0739186);
}

double NNfunction_sb_dLsR::synapse0x2c0fb40() {
   return (neuron0x2c12120()*0.246964);
}

double NNfunction_sb_dLsR::synapse0x2c0fb80() {
   return (neuron0x2c0d560()*-0.0771748);
}

double NNfunction_sb_dLsR::synapse0x2c10840() {
   return (neuron0x2c0d8a0()*0.0332975);
}

double NNfunction_sb_dLsR::synapse0x2c10880() {
   return (neuron0x2c0dbe0()*0.157569);
}

double NNfunction_sb_dLsR::synapse0x2c1c270() {
   return (neuron0x2c0df20()*-0.794192);
}

double NNfunction_sb_dLsR::synapse0x2c1c2b0() {
   return (neuron0x2c0e260()*-0.162553);
}

double NNfunction_sb_dLsR::synapse0x2c10b80() {
   return (neuron0x2c0e5a0()*-0.0535597);
}

double NNfunction_sb_dLsR::synapse0x2c10bc0() {
   return (neuron0x2c0e8e0()*-0.421108);
}

double NNfunction_sb_dLsR::synapse0x29beb50() {
   return (neuron0x2c0ec20()*0.0947357);
}

double NNfunction_sb_dLsR::synapse0x29beb90() {
   return (neuron0x2c0ef60()*0.0877293);
}

double NNfunction_sb_dLsR::synapse0x2c11300() {
   return (neuron0x2c0f2a0()*0.050285);
}

double NNfunction_sb_dLsR::synapse0x2c11340() {
   return (neuron0x2c0f5e0()*-0.02346);
}

double NNfunction_sb_dLsR::synapse0x2c11640() {
   return (neuron0x2c0f920()*-0.264159);
}

double NNfunction_sb_dLsR::synapse0x2c11680() {
   return (neuron0x2c0fc60()*-0.0236063);
}

double NNfunction_sb_dLsR::synapse0x2c11980() {
   return (neuron0x2c0ffa0()*0.0596114);
}

double NNfunction_sb_dLsR::synapse0x2c119c0() {
   return (neuron0x2c102e0()*0.163899);
}

double NNfunction_sb_dLsR::synapse0x2c11cc0() {
   return (neuron0x2c10620()*0.10531);
}

double NNfunction_sb_dLsR::synapse0x2c11d00() {
   return (neuron0x2c10960()*0.113686);
}

double NNfunction_sb_dLsR::synapse0x2c12000() {
   return (neuron0x2c10ec0()*0.0513386);
}

double NNfunction_sb_dLsR::synapse0x2c12040() {
   return (neuron0x2c110e0()*0.35042);
}

double NNfunction_sb_dLsR::synapse0x2c12340() {
   return (neuron0x2c11420()*0.0440421);
}

double NNfunction_sb_dLsR::synapse0x2c12380() {
   return (neuron0x2c11760()*-0.0455993);
}

double NNfunction_sb_dLsR::synapse0x2c0fe80() {
   return (neuron0x2c11aa0()*0.0409138);
}

double NNfunction_sb_dLsR::synapse0x2c0fec0() {
   return (neuron0x2c11de0()*-0.0211322);
}

double NNfunction_sb_dLsR::synapse0x2c1e190() {
   return (neuron0x2c12120()*-0.00291271);
}

double NNfunction_sb_dLsR::synapse0x2c1e510() {
   return (neuron0x2c0d560()*0.00211325);
}

double NNfunction_sb_dLsR::synapse0x2c1e550() {
   return (neuron0x2c0d8a0()*-0.00598903);
}

double NNfunction_sb_dLsR::synapse0x2c1e590() {
   return (neuron0x2c0dbe0()*-0.0224641);
}

double NNfunction_sb_dLsR::synapse0x2c1e5d0() {
   return (neuron0x2c0df20()*-5.98031);
}

double NNfunction_sb_dLsR::synapse0x2c1e610() {
   return (neuron0x2c0e260()*-0.0125998);
}

double NNfunction_sb_dLsR::synapse0x2c1e650() {
   return (neuron0x2c0e5a0()*-0.0102625);
}

double NNfunction_sb_dLsR::synapse0x2c1e690() {
   return (neuron0x2c0e8e0()*-0.0218719);
}

double NNfunction_sb_dLsR::synapse0x2c1e6d0() {
   return (neuron0x2c0ec20()*0.0324855);
}

double NNfunction_sb_dLsR::synapse0x2c1e710() {
   return (neuron0x2c0ef60()*-0.026694);
}

double NNfunction_sb_dLsR::synapse0x2c1e750() {
   return (neuron0x2c0f2a0()*0.0118479);
}

double NNfunction_sb_dLsR::synapse0x2c1e790() {
   return (neuron0x2c0f5e0()*0.00358105);
}

double NNfunction_sb_dLsR::synapse0x2c1e7d0() {
   return (neuron0x2c0f920()*-0.185235);
}

double NNfunction_sb_dLsR::synapse0x2c1e810() {
   return (neuron0x2c0fc60()*0.0662286);
}

double NNfunction_sb_dLsR::synapse0x2c1e850() {
   return (neuron0x2c0ffa0()*-0.0501261);
}

double NNfunction_sb_dLsR::synapse0x2c1e890() {
   return (neuron0x2c102e0()*-0.000646688);
}

double NNfunction_sb_dLsR::synapse0x2c1e8d0() {
   return (neuron0x2c10620()*-0.0102082);
}

double NNfunction_sb_dLsR::synapse0x2c1e360() {
   return (neuron0x2c10960()*-0.00264619);
}

double NNfunction_sb_dLsR::synapse0x2c1e3a0() {
   return (neuron0x2c10ec0()*0.0517887);
}

double NNfunction_sb_dLsR::synapse0x2c1ea20() {
   return (neuron0x2c110e0()*-0.412373);
}

double NNfunction_sb_dLsR::synapse0x2c1ea60() {
   return (neuron0x2c11420()*0.0351376);
}

double NNfunction_sb_dLsR::synapse0x2c1eaa0() {
   return (neuron0x2c11760()*0.00541151);
}

double NNfunction_sb_dLsR::synapse0x2c1eae0() {
   return (neuron0x2c11aa0()*0.00616364);
}

double NNfunction_sb_dLsR::synapse0x2c1eb20() {
   return (neuron0x2c11de0()*0.0191167);
}

double NNfunction_sb_dLsR::synapse0x2c1eb60() {
   return (neuron0x2c12120()*0.00816905);
}

double NNfunction_sb_dLsR::synapse0x2c1eee0() {
   return (neuron0x2c0d560()*0.0207763);
}

double NNfunction_sb_dLsR::synapse0x2c1ef20() {
   return (neuron0x2c0d8a0()*-0.4941);
}

double NNfunction_sb_dLsR::synapse0x2c1ef60() {
   return (neuron0x2c0dbe0()*0.0435506);
}

double NNfunction_sb_dLsR::synapse0x2c1efa0() {
   return (neuron0x2c0df20()*1.01339);
}

double NNfunction_sb_dLsR::synapse0x2c1efe0() {
   return (neuron0x2c0e260()*0.338508);
}

double NNfunction_sb_dLsR::synapse0x2c1f020() {
   return (neuron0x2c0e5a0()*0.322148);
}

double NNfunction_sb_dLsR::synapse0x2c1f060() {
   return (neuron0x2c0e8e0()*0.462125);
}

double NNfunction_sb_dLsR::synapse0x2c1f0a0() {
   return (neuron0x2c0ec20()*-0.0249398);
}

double NNfunction_sb_dLsR::synapse0x2c1f0e0() {
   return (neuron0x2c0ef60()*0.0667575);
}

double NNfunction_sb_dLsR::synapse0x2c1f120() {
   return (neuron0x2c0f2a0()*0.355849);
}

double NNfunction_sb_dLsR::synapse0x2c1f160() {
   return (neuron0x2c0f5e0()*0.127668);
}

double NNfunction_sb_dLsR::synapse0x2c1f1a0() {
   return (neuron0x2c0f920()*0.0464329);
}

double NNfunction_sb_dLsR::synapse0x2c1f1e0() {
   return (neuron0x2c0fc60()*0.154496);
}

double NNfunction_sb_dLsR::synapse0x2c1f220() {
   return (neuron0x2c0ffa0()*-0.392978);
}

double NNfunction_sb_dLsR::synapse0x2c1f260() {
   return (neuron0x2c102e0()*-0.220945);
}

double NNfunction_sb_dLsR::synapse0x2c1f2a0() {
   return (neuron0x2c10620()*-0.678019);
}

double NNfunction_sb_dLsR::synapse0x2c1ed30() {
   return (neuron0x2c10960()*0.0413974);
}

double NNfunction_sb_dLsR::synapse0x2c1ed70() {
   return (neuron0x2c10ec0()*0.0992417);
}

double NNfunction_sb_dLsR::synapse0x2c1f3f0() {
   return (neuron0x2c110e0()*0.42623);
}

double NNfunction_sb_dLsR::synapse0x2c1f430() {
   return (neuron0x2c11420()*-0.379635);
}

double NNfunction_sb_dLsR::synapse0x2c1f470() {
   return (neuron0x2c11760()*0.257683);
}

double NNfunction_sb_dLsR::synapse0x2c1f4b0() {
   return (neuron0x2c11aa0()*-0.816309);
}

double NNfunction_sb_dLsR::synapse0x2c1f4f0() {
   return (neuron0x2c11de0()*0.350621);
}

double NNfunction_sb_dLsR::synapse0x2c1f530() {
   return (neuron0x2c12120()*0.184358);
}

double NNfunction_sb_dLsR::synapse0x2c1f8b0() {
   return (neuron0x2c0d560()*-0.294987);
}

double NNfunction_sb_dLsR::synapse0x2c1f8f0() {
   return (neuron0x2c0d8a0()*-0.176591);
}

double NNfunction_sb_dLsR::synapse0x2c1f930() {
   return (neuron0x2c0dbe0()*-0.669368);
}

double NNfunction_sb_dLsR::synapse0x2c1f970() {
   return (neuron0x2c0df20()*-0.107728);
}

double NNfunction_sb_dLsR::synapse0x2c1f9b0() {
   return (neuron0x2c0e260()*-0.233201);
}

double NNfunction_sb_dLsR::synapse0x2c1f9f0() {
   return (neuron0x2c0e5a0()*0.14983);
}

double NNfunction_sb_dLsR::synapse0x2c1fa30() {
   return (neuron0x2c0e8e0()*-0.904156);
}

double NNfunction_sb_dLsR::synapse0x2c1fa70() {
   return (neuron0x2c0ec20()*0.496535);
}

double NNfunction_sb_dLsR::synapse0x2c1fab0() {
   return (neuron0x2c0ef60()*0.000674154);
}

double NNfunction_sb_dLsR::synapse0x2c1faf0() {
   return (neuron0x2c0f2a0()*0.0231459);
}

double NNfunction_sb_dLsR::synapse0x2c1fb30() {
   return (neuron0x2c0f5e0()*0.764219);
}

double NNfunction_sb_dLsR::synapse0x2c1fb70() {
   return (neuron0x2c0f920()*0.0517477);
}

double NNfunction_sb_dLsR::synapse0x2c1fbb0() {
   return (neuron0x2c0fc60()*0.49274);
}

double NNfunction_sb_dLsR::synapse0x2c1fbf0() {
   return (neuron0x2c0ffa0()*-0.823569);
}

double NNfunction_sb_dLsR::synapse0x2c1fc30() {
   return (neuron0x2c102e0()*0.337735);
}

double NNfunction_sb_dLsR::synapse0x2c1fc70() {
   return (neuron0x2c10620()*-0.238543);
}

double NNfunction_sb_dLsR::synapse0x2c1f700() {
   return (neuron0x2c10960()*0.486408);
}

double NNfunction_sb_dLsR::synapse0x2c1f740() {
   return (neuron0x2c10ec0()*-0.0748062);
}

double NNfunction_sb_dLsR::synapse0x2c1fdc0() {
   return (neuron0x2c110e0()*0.340087);
}

double NNfunction_sb_dLsR::synapse0x2c1fe00() {
   return (neuron0x2c11420()*0.0206389);
}

double NNfunction_sb_dLsR::synapse0x2c1fe40() {
   return (neuron0x2c11760()*0.0982533);
}

double NNfunction_sb_dLsR::synapse0x2c1fe80() {
   return (neuron0x2c11aa0()*0.212997);
}

double NNfunction_sb_dLsR::synapse0x2c1fec0() {
   return (neuron0x2c11de0()*-0.176111);
}

double NNfunction_sb_dLsR::synapse0x2c1ff00() {
   return (neuron0x2c12120()*-0.499916);
}

double NNfunction_sb_dLsR::synapse0x2c20280() {
   return (neuron0x2c0d560()*-0.0549286);
}

double NNfunction_sb_dLsR::synapse0x2c202c0() {
   return (neuron0x2c0d8a0()*0.0226958);
}

double NNfunction_sb_dLsR::synapse0x2c20300() {
   return (neuron0x2c0dbe0()*-0.297993);
}

double NNfunction_sb_dLsR::synapse0x2c20340() {
   return (neuron0x2c0df20()*-1.51065);
}

double NNfunction_sb_dLsR::synapse0x2c20380() {
   return (neuron0x2c0e260()*-0.0621337);
}

double NNfunction_sb_dLsR::synapse0x2c203c0() {
   return (neuron0x2c0e5a0()*0.00444723);
}

double NNfunction_sb_dLsR::synapse0x2c20400() {
   return (neuron0x2c0e8e0()*0.113728);
}

double NNfunction_sb_dLsR::synapse0x2c20440() {
   return (neuron0x2c0ec20()*-0.0933779);
}

double NNfunction_sb_dLsR::synapse0x2c20480() {
   return (neuron0x2c0ef60()*-0.118054);
}

double NNfunction_sb_dLsR::synapse0x2c204c0() {
   return (neuron0x2c0f2a0()*-0.0256946);
}

double NNfunction_sb_dLsR::synapse0x2c20500() {
   return (neuron0x2c0f5e0()*-0.0237997);
}

double NNfunction_sb_dLsR::synapse0x2c20540() {
   return (neuron0x2c0f920()*-0.493877);
}

double NNfunction_sb_dLsR::synapse0x2c20580() {
   return (neuron0x2c0fc60()*-0.179129);
}

double NNfunction_sb_dLsR::synapse0x2c205c0() {
   return (neuron0x2c0ffa0()*0.0354083);
}

double NNfunction_sb_dLsR::synapse0x2c20600() {
   return (neuron0x2c102e0()*-0.0422051);
}

double NNfunction_sb_dLsR::synapse0x2c20640() {
   return (neuron0x2c10620()*-0.0479656);
}

double NNfunction_sb_dLsR::synapse0x2c200d0() {
   return (neuron0x2c10960()*0.00744208);
}

double NNfunction_sb_dLsR::synapse0x2c20110() {
   return (neuron0x2c10ec0()*-0.0469006);
}

double NNfunction_sb_dLsR::synapse0x2c20790() {
   return (neuron0x2c110e0()*0.186271);
}

double NNfunction_sb_dLsR::synapse0x2c207d0() {
   return (neuron0x2c11420()*-0.00405474);
}

double NNfunction_sb_dLsR::synapse0x2c20810() {
   return (neuron0x2c11760()*-0.0508854);
}

double NNfunction_sb_dLsR::synapse0x2c20850() {
   return (neuron0x2c11aa0()*0.00223881);
}

double NNfunction_sb_dLsR::synapse0x2c20890() {
   return (neuron0x2c11de0()*-0.00999838);
}

double NNfunction_sb_dLsR::synapse0x2c208d0() {
   return (neuron0x2c12120()*0.000606604);
}

double NNfunction_sb_dLsR::synapse0x2c20c50() {
   return (neuron0x2c0d560()*0.135859);
}

double NNfunction_sb_dLsR::synapse0x2c20c90() {
   return (neuron0x2c0d8a0()*0.749867);
}

double NNfunction_sb_dLsR::synapse0x2c20cd0() {
   return (neuron0x2c0dbe0()*-0.468486);
}

double NNfunction_sb_dLsR::synapse0x2c20d10() {
   return (neuron0x2c0df20()*1.67308);
}

double NNfunction_sb_dLsR::synapse0x2c20d50() {
   return (neuron0x2c0e260()*0.117053);
}

double NNfunction_sb_dLsR::synapse0x2c20d90() {
   return (neuron0x2c0e5a0()*0.279157);
}

double NNfunction_sb_dLsR::synapse0x2c20dd0() {
   return (neuron0x2c0e8e0()*0.0798731);
}

double NNfunction_sb_dLsR::synapse0x2c20e10() {
   return (neuron0x2c0ec20()*-0.500607);
}

double NNfunction_sb_dLsR::synapse0x2c20e50() {
   return (neuron0x2c0ef60()*-0.396238);
}

double NNfunction_sb_dLsR::synapse0x2c19010() {
   return (neuron0x2c0f2a0()*-0.524939);
}

double NNfunction_sb_dLsR::synapse0x2c19050() {
   return (neuron0x2c0f5e0()*-0.0569984);
}

double NNfunction_sb_dLsR::synapse0x2c19090() {
   return (neuron0x2c0f920()*0.621729);
}

double NNfunction_sb_dLsR::synapse0x2c190d0() {
   return (neuron0x2c0fc60()*-0.123023);
}

double NNfunction_sb_dLsR::synapse0x2c19110() {
   return (neuron0x2c0ffa0()*0.452019);
}

double NNfunction_sb_dLsR::synapse0x2c19150() {
   return (neuron0x2c102e0()*-0.332709);
}

double NNfunction_sb_dLsR::synapse0x2c19190() {
   return (neuron0x2c10620()*0.808789);
}

double NNfunction_sb_dLsR::synapse0x2c20aa0() {
   return (neuron0x2c10960()*0.495371);
}

double NNfunction_sb_dLsR::synapse0x2c20ae0() {
   return (neuron0x2c10ec0()*0.163344);
}

double NNfunction_sb_dLsR::synapse0x2c192e0() {
   return (neuron0x2c110e0()*-0.0935049);
}

double NNfunction_sb_dLsR::synapse0x2c19320() {
   return (neuron0x2c11420()*-0.108292);
}

double NNfunction_sb_dLsR::synapse0x2c19360() {
   return (neuron0x2c11760()*0.446562);
}

double NNfunction_sb_dLsR::synapse0x2c193a0() {
   return (neuron0x2c11aa0()*0.524386);
}

double NNfunction_sb_dLsR::synapse0x2c193e0() {
   return (neuron0x2c11de0()*-0.118864);
}

double NNfunction_sb_dLsR::synapse0x2c19420() {
   return (neuron0x2c12120()*0.183241);
}

double NNfunction_sb_dLsR::synapse0x2c197a0() {
   return (neuron0x2c0d560()*-0.0557542);
}

double NNfunction_sb_dLsR::synapse0x2c197e0() {
   return (neuron0x2c0d8a0()*0.00997398);
}

double NNfunction_sb_dLsR::synapse0x2c19820() {
   return (neuron0x2c0dbe0()*-0.0595163);
}

double NNfunction_sb_dLsR::synapse0x2c19860() {
   return (neuron0x2c0df20()*-0.166129);
}

double NNfunction_sb_dLsR::synapse0x2c198a0() {
   return (neuron0x2c0e260()*0.312446);
}

double NNfunction_sb_dLsR::synapse0x2c198e0() {
   return (neuron0x2c0e5a0()*-0.286776);
}

double NNfunction_sb_dLsR::synapse0x2c19920() {
   return (neuron0x2c0e8e0()*-0.0652479);
}

double NNfunction_sb_dLsR::synapse0x2c19960() {
   return (neuron0x2c0ec20()*0.0847165);
}

double NNfunction_sb_dLsR::synapse0x2c199a0() {
   return (neuron0x2c0ef60()*-0.481726);
}

double NNfunction_sb_dLsR::synapse0x2c199e0() {
   return (neuron0x2c0f2a0()*0.00776468);
}

double NNfunction_sb_dLsR::synapse0x2c19a20() {
   return (neuron0x2c0f5e0()*-0.330189);
}

double NNfunction_sb_dLsR::synapse0x2c19a60() {
   return (neuron0x2c0f920()*-0.126399);
}

double NNfunction_sb_dLsR::synapse0x2c19aa0() {
   return (neuron0x2c0fc60()*0.501466);
}

double NNfunction_sb_dLsR::synapse0x2c19ae0() {
   return (neuron0x2c0ffa0()*-0.542053);
}

double NNfunction_sb_dLsR::synapse0x2c19b20() {
   return (neuron0x2c102e0()*-0.289773);
}

double NNfunction_sb_dLsR::synapse0x2c19b60() {
   return (neuron0x2c10620()*-0.109537);
}

double NNfunction_sb_dLsR::synapse0x2c195f0() {
   return (neuron0x2c10960()*0.240478);
}

double NNfunction_sb_dLsR::synapse0x2c19630() {
   return (neuron0x2c10ec0()*-0.226601);
}

double NNfunction_sb_dLsR::synapse0x2c19cb0() {
   return (neuron0x2c110e0()*-0.664804);
}

double NNfunction_sb_dLsR::synapse0x2c19cf0() {
   return (neuron0x2c11420()*0.127359);
}

double NNfunction_sb_dLsR::synapse0x2c19d30() {
   return (neuron0x2c11760()*0.478436);
}

double NNfunction_sb_dLsR::synapse0x2c19d70() {
   return (neuron0x2c11aa0()*0.194669);
}

double NNfunction_sb_dLsR::synapse0x2c19db0() {
   return (neuron0x2c11de0()*0.135492);
}

double NNfunction_sb_dLsR::synapse0x2c19df0() {
   return (neuron0x2c12120()*0.797874);
}

double NNfunction_sb_dLsR::synapse0x2c19fc0() {
   return (neuron0x2c0d560()*-0.055044);
}

double NNfunction_sb_dLsR::synapse0x2c23050() {
   return (neuron0x2c0d8a0()*-0.0799828);
}

double NNfunction_sb_dLsR::synapse0x2c23090() {
   return (neuron0x2c0dbe0()*-0.0419993);
}

double NNfunction_sb_dLsR::synapse0x2c230d0() {
   return (neuron0x2c0df20()*0.9881);
}

double NNfunction_sb_dLsR::synapse0x2c23110() {
   return (neuron0x2c0e260()*0.0309707);
}

double NNfunction_sb_dLsR::synapse0x2c23150() {
   return (neuron0x2c0e5a0()*0.0808002);
}

double NNfunction_sb_dLsR::synapse0x2c23190() {
   return (neuron0x2c0e8e0()*-0.0127553);
}

double NNfunction_sb_dLsR::synapse0x2c231d0() {
   return (neuron0x2c0ec20()*0.0813112);
}

double NNfunction_sb_dLsR::synapse0x2c23210() {
   return (neuron0x2c0ef60()*0.0550909);
}

double NNfunction_sb_dLsR::synapse0x2c23250() {
   return (neuron0x2c0f2a0()*-0.0413187);
}

double NNfunction_sb_dLsR::synapse0x2c23290() {
   return (neuron0x2c0f5e0()*0.0287958);
}

double NNfunction_sb_dLsR::synapse0x2c232d0() {
   return (neuron0x2c0f920()*-0.36575);
}

double NNfunction_sb_dLsR::synapse0x2c23310() {
   return (neuron0x2c0fc60()*-0.0965745);
}

double NNfunction_sb_dLsR::synapse0x2c23350() {
   return (neuron0x2c0ffa0()*0.0202399);
}

double NNfunction_sb_dLsR::synapse0x2c23390() {
   return (neuron0x2c102e0()*0.0523196);
}

double NNfunction_sb_dLsR::synapse0x2c233d0() {
   return (neuron0x2c10620()*-0.0645589);
}

double NNfunction_sb_dLsR::synapse0x2c22ea0() {
   return (neuron0x2c10960()*-0.00907309);
}

double NNfunction_sb_dLsR::synapse0x2c22ee0() {
   return (neuron0x2c10ec0()*-0.0440009);
}

double NNfunction_sb_dLsR::synapse0x2c23520() {
   return (neuron0x2c110e0()*0.666853);
}

double NNfunction_sb_dLsR::synapse0x2c23560() {
   return (neuron0x2c11420()*0.000360167);
}

double NNfunction_sb_dLsR::synapse0x2c235a0() {
   return (neuron0x2c11760()*0.0251097);
}

double NNfunction_sb_dLsR::synapse0x2c235e0() {
   return (neuron0x2c11aa0()*0.00099948);
}

double NNfunction_sb_dLsR::synapse0x2c23620() {
   return (neuron0x2c11de0()*0.0165713);
}

double NNfunction_sb_dLsR::synapse0x2c23660() {
   return (neuron0x2c12120()*-0.00712954);
}

double NNfunction_sb_dLsR::synapse0x2c239e0() {
   return (neuron0x2c0d560()*-0.946984);
}

double NNfunction_sb_dLsR::synapse0x2c23a20() {
   return (neuron0x2c0d8a0()*-0.475783);
}

double NNfunction_sb_dLsR::synapse0x2c23a60() {
   return (neuron0x2c0dbe0()*-0.0980714);
}

double NNfunction_sb_dLsR::synapse0x2c23aa0() {
   return (neuron0x2c0df20()*1.38785);
}

double NNfunction_sb_dLsR::synapse0x2c23ae0() {
   return (neuron0x2c0e260()*-0.440587);
}

double NNfunction_sb_dLsR::synapse0x2c23b20() {
   return (neuron0x2c0e5a0()*0.547534);
}

double NNfunction_sb_dLsR::synapse0x2c23b60() {
   return (neuron0x2c0e8e0()*0.371891);
}

double NNfunction_sb_dLsR::synapse0x2c23ba0() {
   return (neuron0x2c0ec20()*-0.363558);
}

double NNfunction_sb_dLsR::synapse0x2c23be0() {
   return (neuron0x2c0ef60()*-0.216108);
}

double NNfunction_sb_dLsR::synapse0x2c23c20() {
   return (neuron0x2c0f2a0()*0.0973462);
}

double NNfunction_sb_dLsR::synapse0x2c23c60() {
   return (neuron0x2c0f5e0()*0.398504);
}

double NNfunction_sb_dLsR::synapse0x2c23ca0() {
   return (neuron0x2c0f920()*-0.127725);
}

double NNfunction_sb_dLsR::synapse0x2c23ce0() {
   return (neuron0x2c0fc60()*-0.150322);
}

double NNfunction_sb_dLsR::synapse0x2c23d20() {
   return (neuron0x2c0ffa0()*-0.0854954);
}

double NNfunction_sb_dLsR::synapse0x2c23d60() {
   return (neuron0x2c102e0()*-0.177504);
}

double NNfunction_sb_dLsR::synapse0x2c23da0() {
   return (neuron0x2c10620()*-0.256146);
}

double NNfunction_sb_dLsR::synapse0x2c23830() {
   return (neuron0x2c10960()*-0.11964);
}

double NNfunction_sb_dLsR::synapse0x2c23870() {
   return (neuron0x2c10ec0()*0.221396);
}

double NNfunction_sb_dLsR::synapse0x2c23ef0() {
   return (neuron0x2c110e0()*0.13396);
}

double NNfunction_sb_dLsR::synapse0x2c23f30() {
   return (neuron0x2c11420()*0.474859);
}

double NNfunction_sb_dLsR::synapse0x2c23f70() {
   return (neuron0x2c11760()*0.137467);
}

double NNfunction_sb_dLsR::synapse0x2c23fb0() {
   return (neuron0x2c11aa0()*0.339687);
}

double NNfunction_sb_dLsR::synapse0x2c23ff0() {
   return (neuron0x2c11de0()*0.18228);
}

double NNfunction_sb_dLsR::synapse0x2c24030() {
   return (neuron0x2c12120()*-0.119204);
}

double NNfunction_sb_dLsR::synapse0x2c243b0() {
   return (neuron0x2c0d560()*0.0685643);
}

double NNfunction_sb_dLsR::synapse0x2c243f0() {
   return (neuron0x2c0d8a0()*-0.264692);
}

double NNfunction_sb_dLsR::synapse0x2c24430() {
   return (neuron0x2c0dbe0()*0.32068);
}

double NNfunction_sb_dLsR::synapse0x2c24470() {
   return (neuron0x2c0df20()*3.03306);
}

double NNfunction_sb_dLsR::synapse0x2c244b0() {
   return (neuron0x2c0e260()*-0.0264674);
}

double NNfunction_sb_dLsR::synapse0x2c244f0() {
   return (neuron0x2c0e5a0()*-0.121232);
}

double NNfunction_sb_dLsR::synapse0x2c24530() {
   return (neuron0x2c0e8e0()*-0.297257);
}

double NNfunction_sb_dLsR::synapse0x2c24570() {
   return (neuron0x2c0ec20()*0.488052);
}

double NNfunction_sb_dLsR::synapse0x2c245b0() {
   return (neuron0x2c0ef60()*0.123597);
}

double NNfunction_sb_dLsR::synapse0x2c245f0() {
   return (neuron0x2c0f2a0()*0.0890864);
}

double NNfunction_sb_dLsR::synapse0x2c24630() {
   return (neuron0x2c0f5e0()*-0.410179);
}

double NNfunction_sb_dLsR::synapse0x2c24670() {
   return (neuron0x2c0f920()*0.188673);
}

double NNfunction_sb_dLsR::synapse0x2c246b0() {
   return (neuron0x2c0fc60()*-0.268237);
}

double NNfunction_sb_dLsR::synapse0x2c246f0() {
   return (neuron0x2c0ffa0()*-0.450197);
}

double NNfunction_sb_dLsR::synapse0x2c24730() {
   return (neuron0x2c102e0()*0.0194153);
}

double NNfunction_sb_dLsR::synapse0x2c24770() {
   return (neuron0x2c10620()*-0.115948);
}

double NNfunction_sb_dLsR::synapse0x2c24200() {
   return (neuron0x2c10960()*0.124462);
}

double NNfunction_sb_dLsR::synapse0x2c24240() {
   return (neuron0x2c10ec0()*-0.0882548);
}

double NNfunction_sb_dLsR::synapse0x2c248c0() {
   return (neuron0x2c110e0()*0.171862);
}

double NNfunction_sb_dLsR::synapse0x2c24900() {
   return (neuron0x2c11420()*-0.0297734);
}

double NNfunction_sb_dLsR::synapse0x2c24940() {
   return (neuron0x2c11760()*0.214454);
}

double NNfunction_sb_dLsR::synapse0x2c24980() {
   return (neuron0x2c11aa0()*-0.339063);
}

double NNfunction_sb_dLsR::synapse0x2c249c0() {
   return (neuron0x2c11de0()*0.124889);
}

double NNfunction_sb_dLsR::synapse0x2c24a00() {
   return (neuron0x2c12120()*-0.19052);
}

double NNfunction_sb_dLsR::synapse0x2c24d80() {
   return (neuron0x2c0d560()*0.429403);
}

double NNfunction_sb_dLsR::synapse0x2c24dc0() {
   return (neuron0x2c0d8a0()*-0.569148);
}

double NNfunction_sb_dLsR::synapse0x2c24e00() {
   return (neuron0x2c0dbe0()*0.326505);
}

double NNfunction_sb_dLsR::synapse0x2c24e40() {
   return (neuron0x2c0df20()*-0.841151);
}

double NNfunction_sb_dLsR::synapse0x2c24e80() {
   return (neuron0x2c0e260()*-0.00952396);
}

double NNfunction_sb_dLsR::synapse0x2c24ec0() {
   return (neuron0x2c0e5a0()*0.537816);
}

double NNfunction_sb_dLsR::synapse0x2c24f00() {
   return (neuron0x2c0e8e0()*0.284815);
}

double NNfunction_sb_dLsR::synapse0x2c24f40() {
   return (neuron0x2c0ec20()*-0.845241);
}

double NNfunction_sb_dLsR::synapse0x2c24f80() {
   return (neuron0x2c0ef60()*0.562898);
}

double NNfunction_sb_dLsR::synapse0x2c24fc0() {
   return (neuron0x2c0f2a0()*0.326744);
}

double NNfunction_sb_dLsR::synapse0x2c25000() {
   return (neuron0x2c0f5e0()*-0.0747673);
}

double NNfunction_sb_dLsR::synapse0x2c25040() {
   return (neuron0x2c0f920()*0.255542);
}

double NNfunction_sb_dLsR::synapse0x2c25080() {
   return (neuron0x2c0fc60()*-0.397834);
}

double NNfunction_sb_dLsR::synapse0x2c250c0() {
   return (neuron0x2c0ffa0()*0.615989);
}

double NNfunction_sb_dLsR::synapse0x2c25100() {
   return (neuron0x2c102e0()*0.215019);
}

double NNfunction_sb_dLsR::synapse0x2c25140() {
   return (neuron0x2c10620()*0.396215);
}

double NNfunction_sb_dLsR::synapse0x2c24bd0() {
   return (neuron0x2c10960()*-0.928677);
}

double NNfunction_sb_dLsR::synapse0x2c24c10() {
   return (neuron0x2c10ec0()*0.349788);
}

double NNfunction_sb_dLsR::synapse0x2c25290() {
   return (neuron0x2c110e0()*0.945138);
}

double NNfunction_sb_dLsR::synapse0x2c252d0() {
   return (neuron0x2c11420()*-0.228978);
}

double NNfunction_sb_dLsR::synapse0x2c25310() {
   return (neuron0x2c11760()*0.70277);
}

double NNfunction_sb_dLsR::synapse0x2c25350() {
   return (neuron0x2c11aa0()*-0.324174);
}

double NNfunction_sb_dLsR::synapse0x2c25390() {
   return (neuron0x2c11de0()*0.067916);
}

double NNfunction_sb_dLsR::synapse0x2c253d0() {
   return (neuron0x2c12120()*0.176355);
}

double NNfunction_sb_dLsR::synapse0x2c25750() {
   return (neuron0x2c0d560()*0.0171055);
}

double NNfunction_sb_dLsR::synapse0x2c25790() {
   return (neuron0x2c0d8a0()*0.00404608);
}

double NNfunction_sb_dLsR::synapse0x2c257d0() {
   return (neuron0x2c0dbe0()*-0.0111217);
}

double NNfunction_sb_dLsR::synapse0x2c25810() {
   return (neuron0x2c0df20()*-0.0753332);
}

double NNfunction_sb_dLsR::synapse0x2c25850() {
   return (neuron0x2c0e260()*0.022366);
}

double NNfunction_sb_dLsR::synapse0x2c25890() {
   return (neuron0x2c0e5a0()*0.0145442);
}

double NNfunction_sb_dLsR::synapse0x2c258d0() {
   return (neuron0x2c0e8e0()*-0.0319602);
}

double NNfunction_sb_dLsR::synapse0x2c25910() {
   return (neuron0x2c0ec20()*0.00286871);
}

double NNfunction_sb_dLsR::synapse0x2c25950() {
   return (neuron0x2c0ef60()*0.0437935);
}

double NNfunction_sb_dLsR::synapse0x2c25990() {
   return (neuron0x2c0f2a0()*-0.0138283);
}

double NNfunction_sb_dLsR::synapse0x2c259d0() {
   return (neuron0x2c0f5e0()*0.0128146);
}

double NNfunction_sb_dLsR::synapse0x2c25a10() {
   return (neuron0x2c0f920()*-0.0556165);
}

double NNfunction_sb_dLsR::synapse0x2c25a50() {
   return (neuron0x2c0fc60()*0.0040091);
}

double NNfunction_sb_dLsR::synapse0x2c25a90() {
   return (neuron0x2c0ffa0()*-0.00929926);
}

double NNfunction_sb_dLsR::synapse0x2c25ad0() {
   return (neuron0x2c102e0()*-0.020024);
}

double NNfunction_sb_dLsR::synapse0x2c25b10() {
   return (neuron0x2c10620()*0.00463554);
}

double NNfunction_sb_dLsR::synapse0x2c255a0() {
   return (neuron0x2c10960()*-0.0260078);
}

double NNfunction_sb_dLsR::synapse0x2c255e0() {
   return (neuron0x2c10ec0()*-0.0142137);
}

double NNfunction_sb_dLsR::synapse0x2c25c60() {
   return (neuron0x2c110e0()*-3.19151);
}

double NNfunction_sb_dLsR::synapse0x2c25ca0() {
   return (neuron0x2c11420()*-0.0134698);
}

double NNfunction_sb_dLsR::synapse0x2c25ce0() {
   return (neuron0x2c11760()*0.00819636);
}

double NNfunction_sb_dLsR::synapse0x2c25d20() {
   return (neuron0x2c11aa0()*0.00529943);
}

double NNfunction_sb_dLsR::synapse0x2c25d60() {
   return (neuron0x2c11de0()*0.0113886);
}

double NNfunction_sb_dLsR::synapse0x2c25da0() {
   return (neuron0x2c12120()*-0.00340081);
}

double NNfunction_sb_dLsR::synapse0x2c26120() {
   return (neuron0x2c0d560()*0.104478);
}

double NNfunction_sb_dLsR::synapse0x2c26160() {
   return (neuron0x2c0d8a0()*-0.00627258);
}

double NNfunction_sb_dLsR::synapse0x2c261a0() {
   return (neuron0x2c0dbe0()*-0.0891543);
}

double NNfunction_sb_dLsR::synapse0x2c261e0() {
   return (neuron0x2c0df20()*0.0263242);
}

double NNfunction_sb_dLsR::synapse0x2c26220() {
   return (neuron0x2c0e260()*0.255477);
}

double NNfunction_sb_dLsR::synapse0x2c26260() {
   return (neuron0x2c0e5a0()*0.10247);
}

double NNfunction_sb_dLsR::synapse0x2c262a0() {
   return (neuron0x2c0e8e0()*0.102088);
}

double NNfunction_sb_dLsR::synapse0x2c262e0() {
   return (neuron0x2c0ec20()*-0.0445197);
}

double NNfunction_sb_dLsR::synapse0x2c26320() {
   return (neuron0x2c0ef60()*-0.131003);
}

double NNfunction_sb_dLsR::synapse0x2c26360() {
   return (neuron0x2c0f2a0()*-0.364917);
}

double NNfunction_sb_dLsR::synapse0x2c263a0() {
   return (neuron0x2c0f5e0()*0.210587);
}

double NNfunction_sb_dLsR::synapse0x2c263e0() {
   return (neuron0x2c0f920()*0.0172641);
}

double NNfunction_sb_dLsR::synapse0x2c26420() {
   return (neuron0x2c0fc60()*-0.14506);
}

double NNfunction_sb_dLsR::synapse0x2c26460() {
   return (neuron0x2c0ffa0()*-0.0558654);
}

double NNfunction_sb_dLsR::synapse0x2c264a0() {
   return (neuron0x2c102e0()*-0.00993449);
}

double NNfunction_sb_dLsR::synapse0x2c264e0() {
   return (neuron0x2c10620()*0.0374899);
}

double NNfunction_sb_dLsR::synapse0x2c25f70() {
   return (neuron0x2c10960()*-0.0897772);
}

double NNfunction_sb_dLsR::synapse0x2c25fb0() {
   return (neuron0x2c10ec0()*-0.0918382);
}

double NNfunction_sb_dLsR::synapse0x2c26630() {
   return (neuron0x2c110e0()*-0.358193);
}

double NNfunction_sb_dLsR::synapse0x2c26670() {
   return (neuron0x2c11420()*-0.146362);
}

double NNfunction_sb_dLsR::synapse0x2c266b0() {
   return (neuron0x2c11760()*0.0897111);
}

double NNfunction_sb_dLsR::synapse0x2c266f0() {
   return (neuron0x2c11aa0()*-0.0540827);
}

double NNfunction_sb_dLsR::synapse0x2c26730() {
   return (neuron0x2c11de0()*0.0899137);
}

double NNfunction_sb_dLsR::synapse0x2c26770() {
   return (neuron0x2c12120()*0.0319065);
}

double NNfunction_sb_dLsR::synapse0x2c26af0() {
   return (neuron0x2c0d560()*-0.158062);
}

double NNfunction_sb_dLsR::synapse0x2c26b30() {
   return (neuron0x2c0d8a0()*-0.00728639);
}

double NNfunction_sb_dLsR::synapse0x2c26b70() {
   return (neuron0x2c0dbe0()*-0.379351);
}

double NNfunction_sb_dLsR::synapse0x2c26bb0() {
   return (neuron0x2c0df20()*-3.05211);
}

double NNfunction_sb_dLsR::synapse0x2c26bf0() {
   return (neuron0x2c0e260()*-0.199875);
}

double NNfunction_sb_dLsR::synapse0x2c26c30() {
   return (neuron0x2c0e5a0()*-0.263907);
}

double NNfunction_sb_dLsR::synapse0x2c26c70() {
   return (neuron0x2c0e8e0()*0.164773);
}

double NNfunction_sb_dLsR::synapse0x2c26cb0() {
   return (neuron0x2c0ec20()*0.0247608);
}

double NNfunction_sb_dLsR::synapse0x2c26cf0() {
   return (neuron0x2c0ef60()*0.0609493);
}

double NNfunction_sb_dLsR::synapse0x2c26d30() {
   return (neuron0x2c0f2a0()*-0.093102);
}

double NNfunction_sb_dLsR::synapse0x2c26d70() {
   return (neuron0x2c0f5e0()*-0.131652);
}

double NNfunction_sb_dLsR::synapse0x2c26db0() {
   return (neuron0x2c0f920()*0.264259);
}

double NNfunction_sb_dLsR::synapse0x2c26df0() {
   return (neuron0x2c0fc60()*-0.00854807);
}

double NNfunction_sb_dLsR::synapse0x2c26e30() {
   return (neuron0x2c0ffa0()*0.426966);
}

double NNfunction_sb_dLsR::synapse0x2c26e70() {
   return (neuron0x2c102e0()*0.166606);
}

double NNfunction_sb_dLsR::synapse0x2c26eb0() {
   return (neuron0x2c10620()*-0.249788);
}

double NNfunction_sb_dLsR::synapse0x2c26940() {
   return (neuron0x2c10960()*0.127738);
}

double NNfunction_sb_dLsR::synapse0x2c26980() {
   return (neuron0x2c10ec0()*-0.0624078);
}

double NNfunction_sb_dLsR::synapse0x2c27000() {
   return (neuron0x2c110e0()*0.691292);
}

double NNfunction_sb_dLsR::synapse0x2c27040() {
   return (neuron0x2c11420()*-0.172187);
}

double NNfunction_sb_dLsR::synapse0x2c27080() {
   return (neuron0x2c11760()*0.00649162);
}

double NNfunction_sb_dLsR::synapse0x2c270c0() {
   return (neuron0x2c11aa0()*-0.136051);
}

double NNfunction_sb_dLsR::synapse0x2c27100() {
   return (neuron0x2c11de0()*-0.0893406);
}

double NNfunction_sb_dLsR::synapse0x2c27140() {
   return (neuron0x2c12120()*-0.223667);
}

double NNfunction_sb_dLsR::synapse0x2c274c0() {
   return (neuron0x2c0d560()*-0.00672608);
}

double NNfunction_sb_dLsR::synapse0x2c27500() {
   return (neuron0x2c0d8a0()*-0.00802042);
}

double NNfunction_sb_dLsR::synapse0x2c27540() {
   return (neuron0x2c0dbe0()*-0.0230436);
}

double NNfunction_sb_dLsR::synapse0x2c27580() {
   return (neuron0x2c0df20()*-0.0155312);
}

double NNfunction_sb_dLsR::synapse0x2c275c0() {
   return (neuron0x2c0e260()*-0.0193129);
}

double NNfunction_sb_dLsR::synapse0x2c27600() {
   return (neuron0x2c0e5a0()*-0.0250341);
}

double NNfunction_sb_dLsR::synapse0x2c27640() {
   return (neuron0x2c0e8e0()*0.0141974);
}

double NNfunction_sb_dLsR::synapse0x2c27680() {
   return (neuron0x2c0ec20()*0.022222);
}

double NNfunction_sb_dLsR::synapse0x2c276c0() {
   return (neuron0x2c0ef60()*-0.0198662);
}

double NNfunction_sb_dLsR::synapse0x2c27700() {
   return (neuron0x2c0f2a0()*-0.00160878);
}

double NNfunction_sb_dLsR::synapse0x2c27740() {
   return (neuron0x2c0f5e0()*0.0168178);
}

double NNfunction_sb_dLsR::synapse0x2c27780() {
   return (neuron0x2c0f920()*2.88866);
}

double NNfunction_sb_dLsR::synapse0x2c277c0() {
   return (neuron0x2c0fc60()*0.0327544);
}

double NNfunction_sb_dLsR::synapse0x2c27800() {
   return (neuron0x2c0ffa0()*0.0236327);
}

double NNfunction_sb_dLsR::synapse0x2c27840() {
   return (neuron0x2c102e0()*0.0263966);
}

double NNfunction_sb_dLsR::synapse0x2c27880() {
   return (neuron0x2c10620()*0.0111627);
}

double NNfunction_sb_dLsR::synapse0x2c27310() {
   return (neuron0x2c10960()*0.0242648);
}

double NNfunction_sb_dLsR::synapse0x2c27350() {
   return (neuron0x2c10ec0()*0.0444971);
}

double NNfunction_sb_dLsR::synapse0x2c279d0() {
   return (neuron0x2c110e0()*0.0142408);
}

double NNfunction_sb_dLsR::synapse0x2c27a10() {
   return (neuron0x2c11420()*0.0140533);
}

double NNfunction_sb_dLsR::synapse0x2c27a50() {
   return (neuron0x2c11760()*-0.00065441);
}

double NNfunction_sb_dLsR::synapse0x2c27a90() {
   return (neuron0x2c11aa0()*-0.011155);
}

double NNfunction_sb_dLsR::synapse0x2c27ad0() {
   return (neuron0x2c11de0()*-0.00872943);
}

double NNfunction_sb_dLsR::synapse0x2c27b10() {
   return (neuron0x2c12120()*-0.00665392);
}

double NNfunction_sb_dLsR::synapse0x2c27e90() {
   return (neuron0x2c0d560()*0.0341872);
}

double NNfunction_sb_dLsR::synapse0x2c1c460() {
   return (neuron0x2c0d8a0()*-0.0517954);
}

double NNfunction_sb_dLsR::synapse0x2c1c4a0() {
   return (neuron0x2c0dbe0()*-0.102986);
}

double NNfunction_sb_dLsR::synapse0x2c1c4e0() {
   return (neuron0x2c0df20()*-0.818198);
}

double NNfunction_sb_dLsR::synapse0x2c1c730() {
   return (neuron0x2c0e260()*-0.141173);
}

double NNfunction_sb_dLsR::synapse0x2c1c770() {
   return (neuron0x2c0e5a0()*-0.108706);
}

double NNfunction_sb_dLsR::synapse0x2c1c7b0() {
   return (neuron0x2c0e8e0()*-0.0101518);
}

double NNfunction_sb_dLsR::synapse0x2c1ca00() {
   return (neuron0x2c0ec20()*0.351622);
}

double NNfunction_sb_dLsR::synapse0x2c1ca40() {
   return (neuron0x2c0ef60()*-0.00971143);
}

double NNfunction_sb_dLsR::synapse0x2c1cc90() {
   return (neuron0x2c0f2a0()*0.0474131);
}

double NNfunction_sb_dLsR::synapse0x2c1ccd0() {
   return (neuron0x2c0f5e0()*-0.000967832);
}

double NNfunction_sb_dLsR::synapse0x2c1cd10() {
   return (neuron0x2c0f920()*0.773402);
}

double NNfunction_sb_dLsR::synapse0x2c1cf60() {
   return (neuron0x2c0fc60()*0.24696);
}

double NNfunction_sb_dLsR::synapse0x2c1cfa0() {
   return (neuron0x2c0ffa0()*-0.0167891);
}

double NNfunction_sb_dLsR::synapse0x2c1d1f0() {
   return (neuron0x2c102e0()*0.0463002);
}

double NNfunction_sb_dLsR::synapse0x2c1d230() {
   return (neuron0x2c10620()*-0.0930767);
}

double NNfunction_sb_dLsR::synapse0x2c27ce0() {
   return (neuron0x2c10960()*-0.0743909);
}

double NNfunction_sb_dLsR::synapse0x2c27d20() {
   return (neuron0x2c10ec0()*0.197453);
}

double NNfunction_sb_dLsR::synapse0x2c1d380() {
   return (neuron0x2c110e0()*-0.16825);
}

double NNfunction_sb_dLsR::synapse0x2c1d890() {
   return (neuron0x2c11420()*0.0785234);
}

double NNfunction_sb_dLsR::synapse0x2c1d8d0() {
   return (neuron0x2c11760()*-0.0435093);
}

double NNfunction_sb_dLsR::synapse0x2c1d910() {
   return (neuron0x2c11aa0()*0.000385511);
}

double NNfunction_sb_dLsR::synapse0x2c1db60() {
   return (neuron0x2c11de0()*0.0234954);
}

double NNfunction_sb_dLsR::synapse0x2c1dba0() {
   return (neuron0x2c12120()*-0.0676262);
}

double NNfunction_sb_dLsR::synapse0x2c1d450() {
   return (neuron0x2c0d560()*0.118195);
}

double NNfunction_sb_dLsR::synapse0x2c1d490() {
   return (neuron0x2c0d8a0()*0.347476);
}

double NNfunction_sb_dLsR::synapse0x2c1d4d0() {
   return (neuron0x2c0dbe0()*0.868172);
}

double NNfunction_sb_dLsR::synapse0x2c1d510() {
   return (neuron0x2c0df20()*0.401061);
}

double NNfunction_sb_dLsR::synapse0x2c1de90() {
   return (neuron0x2c0e260()*-0.552375);
}

double NNfunction_sb_dLsR::synapse0x2c2a1e0() {
   return (neuron0x2c0e5a0()*0.00227172);
}

double NNfunction_sb_dLsR::synapse0x2c2a220() {
   return (neuron0x2c0e8e0()*0.409629);
}

double NNfunction_sb_dLsR::synapse0x2c2a260() {
   return (neuron0x2c0ec20()*0.0745088);
}

double NNfunction_sb_dLsR::synapse0x2c2a2a0() {
   return (neuron0x2c0ef60()*0.469763);
}

double NNfunction_sb_dLsR::synapse0x2c2a2e0() {
   return (neuron0x2c0f2a0()*0.0203723);
}

double NNfunction_sb_dLsR::synapse0x2c2a320() {
   return (neuron0x2c0f5e0()*0.644507);
}

double NNfunction_sb_dLsR::synapse0x2c2a360() {
   return (neuron0x2c0f920()*0.205039);
}

double NNfunction_sb_dLsR::synapse0x2c2a3a0() {
   return (neuron0x2c0fc60()*-0.0204723);
}

double NNfunction_sb_dLsR::synapse0x2c2a3e0() {
   return (neuron0x2c0ffa0()*-0.124762);
}

double NNfunction_sb_dLsR::synapse0x2c2a420() {
   return (neuron0x2c102e0()*0.184505);
}

double NNfunction_sb_dLsR::synapse0x2c2a460() {
   return (neuron0x2c10620()*-0.347263);
}

double NNfunction_sb_dLsR::synapse0x2c1dd70() {
   return (neuron0x2c10960()*0.0140129);
}

double NNfunction_sb_dLsR::synapse0x2c1ddb0() {
   return (neuron0x2c10ec0()*0.643425);
}

double NNfunction_sb_dLsR::synapse0x2c2a5b0() {
   return (neuron0x2c110e0()*-0.0442035);
}

double NNfunction_sb_dLsR::synapse0x2c2a5f0() {
   return (neuron0x2c11420()*-0.383532);
}

double NNfunction_sb_dLsR::synapse0x2c2a630() {
   return (neuron0x2c11760()*-0.772175);
}

double NNfunction_sb_dLsR::synapse0x2c2a670() {
   return (neuron0x2c11aa0()*-0.0951815);
}

double NNfunction_sb_dLsR::synapse0x2c2a6b0() {
   return (neuron0x2c11de0()*-0.794194);
}

double NNfunction_sb_dLsR::synapse0x2c2a6f0() {
   return (neuron0x2c12120()*-0.164362);
}

double NNfunction_sb_dLsR::synapse0x2c2aa70() {
   return (neuron0x2c0d560()*0.0357646);
}

double NNfunction_sb_dLsR::synapse0x2c2aab0() {
   return (neuron0x2c0d8a0()*0.046436);
}

double NNfunction_sb_dLsR::synapse0x2c2aaf0() {
   return (neuron0x2c0dbe0()*-0.0128775);
}

double NNfunction_sb_dLsR::synapse0x2c2ab30() {
   return (neuron0x2c0df20()*0.0321838);
}

double NNfunction_sb_dLsR::synapse0x2c2ab70() {
   return (neuron0x2c0e260()*-0.011585);
}

double NNfunction_sb_dLsR::synapse0x2c2abb0() {
   return (neuron0x2c0e5a0()*-0.024147);
}

double NNfunction_sb_dLsR::synapse0x2c2abf0() {
   return (neuron0x2c0e8e0()*-0.000896365);
}

double NNfunction_sb_dLsR::synapse0x2c2ac30() {
   return (neuron0x2c0ec20()*0.0184962);
}

double NNfunction_sb_dLsR::synapse0x2c2ac70() {
   return (neuron0x2c0ef60()*-0.00156004);
}

double NNfunction_sb_dLsR::synapse0x2c2acb0() {
   return (neuron0x2c0f2a0()*0.0188511);
}

double NNfunction_sb_dLsR::synapse0x2c2acf0() {
   return (neuron0x2c0f5e0()*-0.0188999);
}

double NNfunction_sb_dLsR::synapse0x2c2ad30() {
   return (neuron0x2c0f920()*-0.210361);
}

double NNfunction_sb_dLsR::synapse0x2c2ad70() {
   return (neuron0x2c0fc60()*-0.455775);
}

double NNfunction_sb_dLsR::synapse0x2c2adb0() {
   return (neuron0x2c0ffa0()*0.0565735);
}

double NNfunction_sb_dLsR::synapse0x2c2adf0() {
   return (neuron0x2c102e0()*-0.273418);
}

double NNfunction_sb_dLsR::synapse0x2c2ae30() {
   return (neuron0x2c10620()*-0.272383);
}

double NNfunction_sb_dLsR::synapse0x2c2a8c0() {
   return (neuron0x2c10960()*0.080496);
}

double NNfunction_sb_dLsR::synapse0x2c2a900() {
   return (neuron0x2c10ec0()*-0.230448);
}

double NNfunction_sb_dLsR::synapse0x2c2af80() {
   return (neuron0x2c110e0()*-0.0454468);
}

double NNfunction_sb_dLsR::synapse0x2c2afc0() {
   return (neuron0x2c11420()*0.0155479);
}

double NNfunction_sb_dLsR::synapse0x2c2b000() {
   return (neuron0x2c11760()*-0.00320047);
}

double NNfunction_sb_dLsR::synapse0x2c2b040() {
   return (neuron0x2c11aa0()*-0.0450701);
}

double NNfunction_sb_dLsR::synapse0x2c2b080() {
   return (neuron0x2c11de0()*0.00500667);
}

double NNfunction_sb_dLsR::synapse0x2c2b0c0() {
   return (neuron0x2c12120()*-0.0100159);
}

double NNfunction_sb_dLsR::synapse0x2c2b440() {
   return (neuron0x2c0d560()*0.0252913);
}

double NNfunction_sb_dLsR::synapse0x2c2b480() {
   return (neuron0x2c0d8a0()*-0.0208144);
}

double NNfunction_sb_dLsR::synapse0x2c2b4c0() {
   return (neuron0x2c0dbe0()*0.298064);
}

double NNfunction_sb_dLsR::synapse0x2c2b500() {
   return (neuron0x2c0df20()*1.0924);
}

double NNfunction_sb_dLsR::synapse0x2c2b540() {
   return (neuron0x2c0e260()*0.129626);
}

double NNfunction_sb_dLsR::synapse0x2c2b580() {
   return (neuron0x2c0e5a0()*0.037872);
}

double NNfunction_sb_dLsR::synapse0x2c2b5c0() {
   return (neuron0x2c0e8e0()*-0.0639814);
}

double NNfunction_sb_dLsR::synapse0x2c2b600() {
   return (neuron0x2c0ec20()*0.0676496);
}

double NNfunction_sb_dLsR::synapse0x2c2b640() {
   return (neuron0x2c0ef60()*0.081518);
}

double NNfunction_sb_dLsR::synapse0x2c2b680() {
   return (neuron0x2c0f2a0()*-0.0192426);
}

double NNfunction_sb_dLsR::synapse0x2c2b6c0() {
   return (neuron0x2c0f5e0()*0.0139217);
}

double NNfunction_sb_dLsR::synapse0x2c2b700() {
   return (neuron0x2c0f920()*0.272703);
}

double NNfunction_sb_dLsR::synapse0x2c2b740() {
   return (neuron0x2c0fc60()*0.110103);
}

double NNfunction_sb_dLsR::synapse0x2c2b780() {
   return (neuron0x2c0ffa0()*-0.00862828);
}

double NNfunction_sb_dLsR::synapse0x2c2b7c0() {
   return (neuron0x2c102e0()*0.0686246);
}

double NNfunction_sb_dLsR::synapse0x2c2b800() {
   return (neuron0x2c10620()*0.0962608);
}

double NNfunction_sb_dLsR::synapse0x2c2b290() {
   return (neuron0x2c10960()*0.0120965);
}

double NNfunction_sb_dLsR::synapse0x2c2b2d0() {
   return (neuron0x2c10ec0()*0.0247971);
}

double NNfunction_sb_dLsR::synapse0x2c2b950() {
   return (neuron0x2c110e0()*-0.0235734);
}

double NNfunction_sb_dLsR::synapse0x2c2b990() {
   return (neuron0x2c11420()*-0.00546951);
}

double NNfunction_sb_dLsR::synapse0x2c2b9d0() {
   return (neuron0x2c11760()*0.0468238);
}

double NNfunction_sb_dLsR::synapse0x2c2ba10() {
   return (neuron0x2c11aa0()*0.011481);
}

double NNfunction_sb_dLsR::synapse0x2c2ba50() {
   return (neuron0x2c11de0()*0.0304387);
}

double NNfunction_sb_dLsR::synapse0x2c2ba90() {
   return (neuron0x2c12120()*-0.0245074);
}

double NNfunction_sb_dLsR::synapse0x2c2be10() {
   return (neuron0x2c0d560()*0.0240104);
}

double NNfunction_sb_dLsR::synapse0x2c2be50() {
   return (neuron0x2c0d8a0()*0.0316418);
}

double NNfunction_sb_dLsR::synapse0x2c2be90() {
   return (neuron0x2c0dbe0()*-0.0215879);
}

double NNfunction_sb_dLsR::synapse0x2c2bed0() {
   return (neuron0x2c0df20()*0.16467);
}

double NNfunction_sb_dLsR::synapse0x2c2bf10() {
   return (neuron0x2c0e260()*-0.0337223);
}

double NNfunction_sb_dLsR::synapse0x2c2bf50() {
   return (neuron0x2c0e5a0()*-0.028816);
}

double NNfunction_sb_dLsR::synapse0x2c2bf90() {
   return (neuron0x2c0e8e0()*0.0570311);
}

double NNfunction_sb_dLsR::synapse0x2c2bfd0() {
   return (neuron0x2c0ec20()*-0.0564031);
}

double NNfunction_sb_dLsR::synapse0x2c2c010() {
   return (neuron0x2c0ef60()*-0.0343556);
}

double NNfunction_sb_dLsR::synapse0x2c2c050() {
   return (neuron0x2c0f2a0()*0.187432);
}

double NNfunction_sb_dLsR::synapse0x2c2c090() {
   return (neuron0x2c0f5e0()*0.0260245);
}

double NNfunction_sb_dLsR::synapse0x2c2c0d0() {
   return (neuron0x2c0f920()*-0.342894);
}

double NNfunction_sb_dLsR::synapse0x2c2c110() {
   return (neuron0x2c0fc60()*-0.0416326);
}

double NNfunction_sb_dLsR::synapse0x2c2c150() {
   return (neuron0x2c0ffa0()*-0.0499775);
}

double NNfunction_sb_dLsR::synapse0x2c2c190() {
   return (neuron0x2c102e0()*-0.0216913);
}

double NNfunction_sb_dLsR::synapse0x2c2c1d0() {
   return (neuron0x2c10620()*-0.00571157);
}

double NNfunction_sb_dLsR::synapse0x2c2bc60() {
   return (neuron0x2c10960()*-0.000977009);
}

double NNfunction_sb_dLsR::synapse0x2c2bca0() {
   return (neuron0x2c10ec0()*-0.0422304);
}

double NNfunction_sb_dLsR::synapse0x2c2c320() {
   return (neuron0x2c110e0()*-0.504993);
}

double NNfunction_sb_dLsR::synapse0x2c2c360() {
   return (neuron0x2c11420()*0.0461833);
}

double NNfunction_sb_dLsR::synapse0x2c2c3a0() {
   return (neuron0x2c11760()*-0.0310216);
}

double NNfunction_sb_dLsR::synapse0x2c2c3e0() {
   return (neuron0x2c11aa0()*-0.0349117);
}

double NNfunction_sb_dLsR::synapse0x2c2c420() {
   return (neuron0x2c11de0()*-0.0146613);
}

double NNfunction_sb_dLsR::synapse0x2c2c460() {
   return (neuron0x2c12120()*-0.0213844);
}

double NNfunction_sb_dLsR::synapse0x2c2c7e0() {
   return (neuron0x2c0d560()*-0.292336);
}

double NNfunction_sb_dLsR::synapse0x2c2c820() {
   return (neuron0x2c0d8a0()*0.397667);
}

double NNfunction_sb_dLsR::synapse0x2c2c860() {
   return (neuron0x2c0dbe0()*-0.58259);
}

double NNfunction_sb_dLsR::synapse0x2c2c8a0() {
   return (neuron0x2c0df20()*0.506683);
}

double NNfunction_sb_dLsR::synapse0x2c2c8e0() {
   return (neuron0x2c0e260()*-0.380982);
}

double NNfunction_sb_dLsR::synapse0x2c2c920() {
   return (neuron0x2c0e5a0()*-0.157397);
}

double NNfunction_sb_dLsR::synapse0x2c2c960() {
   return (neuron0x2c0e8e0()*-0.587165);
}

double NNfunction_sb_dLsR::synapse0x2c2c9a0() {
   return (neuron0x2c0ec20()*-0.0840199);
}

double NNfunction_sb_dLsR::synapse0x2c2c9e0() {
   return (neuron0x2c0ef60()*-0.174075);
}

double NNfunction_sb_dLsR::synapse0x2c2ca20() {
   return (neuron0x2c0f2a0()*-0.136423);
}

double NNfunction_sb_dLsR::synapse0x2c2ca60() {
   return (neuron0x2c0f5e0()*0.250202);
}

double NNfunction_sb_dLsR::synapse0x2c2caa0() {
   return (neuron0x2c0f920()*-0.150741);
}

double NNfunction_sb_dLsR::synapse0x2c2cae0() {
   return (neuron0x2c0fc60()*0.43323);
}

double NNfunction_sb_dLsR::synapse0x2c2cb20() {
   return (neuron0x2c0ffa0()*0.230196);
}

double NNfunction_sb_dLsR::synapse0x2c2cb60() {
   return (neuron0x2c102e0()*0.219811);
}

double NNfunction_sb_dLsR::synapse0x2c2cba0() {
   return (neuron0x2c10620()*-0.264103);
}

double NNfunction_sb_dLsR::synapse0x2c2c630() {
   return (neuron0x2c10960()*-0.672343);
}

double NNfunction_sb_dLsR::synapse0x2c2c670() {
   return (neuron0x2c10ec0()*-0.322897);
}

double NNfunction_sb_dLsR::synapse0x2c2ccf0() {
   return (neuron0x2c110e0()*-0.552395);
}

double NNfunction_sb_dLsR::synapse0x2c2cd30() {
   return (neuron0x2c11420()*-0.0289049);
}

double NNfunction_sb_dLsR::synapse0x2c2cd70() {
   return (neuron0x2c11760()*0.431274);
}

double NNfunction_sb_dLsR::synapse0x2c2cdb0() {
   return (neuron0x2c11aa0()*0.183559);
}

double NNfunction_sb_dLsR::synapse0x2c2cdf0() {
   return (neuron0x2c11de0()*-0.11535);
}

double NNfunction_sb_dLsR::synapse0x2c2ce30() {
   return (neuron0x2c12120()*-0.387887);
}

double NNfunction_sb_dLsR::synapse0x2c2d1b0() {
   return (neuron0x2c0d560()*0.0112651);
}

double NNfunction_sb_dLsR::synapse0x2c2d1f0() {
   return (neuron0x2c0d8a0()*0.0190728);
}

double NNfunction_sb_dLsR::synapse0x2c2d230() {
   return (neuron0x2c0dbe0()*-0.121016);
}

double NNfunction_sb_dLsR::synapse0x2c2d270() {
   return (neuron0x2c0df20()*3.36477);
}

double NNfunction_sb_dLsR::synapse0x2c2d2b0() {
   return (neuron0x2c0e260()*-0.0220091);
}

double NNfunction_sb_dLsR::synapse0x2c2d2f0() {
   return (neuron0x2c0e5a0()*-0.00395426);
}

double NNfunction_sb_dLsR::synapse0x2c2d330() {
   return (neuron0x2c0e8e0()*-0.0396541);
}

double NNfunction_sb_dLsR::synapse0x2c2d370() {
   return (neuron0x2c0ec20()*-0.0267226);
}

double NNfunction_sb_dLsR::synapse0x2c2d3b0() {
   return (neuron0x2c0ef60()*-0.026194);
}

double NNfunction_sb_dLsR::synapse0x2c2d3f0() {
   return (neuron0x2c0f2a0()*-0.00164736);
}

double NNfunction_sb_dLsR::synapse0x2c2d430() {
   return (neuron0x2c0f5e0()*0.00731067);
}

double NNfunction_sb_dLsR::synapse0x2c2d470() {
   return (neuron0x2c0f920()*-0.158087);
}

double NNfunction_sb_dLsR::synapse0x2c2d4b0() {
   return (neuron0x2c0fc60()*-0.00413604);
}

double NNfunction_sb_dLsR::synapse0x2c2d4f0() {
   return (neuron0x2c0ffa0()*-0.0227525);
}

double NNfunction_sb_dLsR::synapse0x2c2d530() {
   return (neuron0x2c102e0()*-0.0155989);
}

double NNfunction_sb_dLsR::synapse0x2c2d570() {
   return (neuron0x2c10620()*-0.0149655);
}

double NNfunction_sb_dLsR::synapse0x2c2d000() {
   return (neuron0x2c10960()*-0.0545047);
}

double NNfunction_sb_dLsR::synapse0x2c2d040() {
   return (neuron0x2c10ec0()*-0.00100502);
}

double NNfunction_sb_dLsR::synapse0x2c2d6c0() {
   return (neuron0x2c110e0()*-0.175504);
}

double NNfunction_sb_dLsR::synapse0x2c2d700() {
   return (neuron0x2c11420()*0.0226249);
}

double NNfunction_sb_dLsR::synapse0x2c2d740() {
   return (neuron0x2c11760()*-0.0371004);
}

double NNfunction_sb_dLsR::synapse0x2c2d780() {
   return (neuron0x2c11aa0()*0.00126544);
}

double NNfunction_sb_dLsR::synapse0x2c2d7c0() {
   return (neuron0x2c11de0()*-0.00556509);
}

double NNfunction_sb_dLsR::synapse0x2c2d800() {
   return (neuron0x2c12120()*-0.00533758);
}

double NNfunction_sb_dLsR::synapse0x2c2db80() {
   return (neuron0x2c0d560()*0.129915);
}

double NNfunction_sb_dLsR::synapse0x2c2dbc0() {
   return (neuron0x2c0d8a0()*0.10726);
}

double NNfunction_sb_dLsR::synapse0x2c2dc00() {
   return (neuron0x2c0dbe0()*0.0279447);
}

double NNfunction_sb_dLsR::synapse0x2c2dc40() {
   return (neuron0x2c0df20()*-0.821932);
}

double NNfunction_sb_dLsR::synapse0x2c2dc80() {
   return (neuron0x2c0e260()*0.442372);
}

double NNfunction_sb_dLsR::synapse0x2c2dcc0() {
   return (neuron0x2c0e5a0()*0.216547);
}

double NNfunction_sb_dLsR::synapse0x2c2dd00() {
   return (neuron0x2c0e8e0()*-0.316974);
}

double NNfunction_sb_dLsR::synapse0x2c2dd40() {
   return (neuron0x2c0ec20()*0.174993);
}

double NNfunction_sb_dLsR::synapse0x2c2dd80() {
   return (neuron0x2c0ef60()*-0.153441);
}

double NNfunction_sb_dLsR::synapse0x2c2ddc0() {
   return (neuron0x2c0f2a0()*-0.0823654);
}

double NNfunction_sb_dLsR::synapse0x2c2de00() {
   return (neuron0x2c0f5e0()*0.235187);
}

double NNfunction_sb_dLsR::synapse0x2c2de40() {
   return (neuron0x2c0f920()*-0.817381);
}

double NNfunction_sb_dLsR::synapse0x2c2de80() {
   return (neuron0x2c0fc60()*0.186373);
}

double NNfunction_sb_dLsR::synapse0x2c2dec0() {
   return (neuron0x2c0ffa0()*-0.295835);
}

double NNfunction_sb_dLsR::synapse0x2c2df00() {
   return (neuron0x2c102e0()*-0.397501);
}

double NNfunction_sb_dLsR::synapse0x2c2df40() {
   return (neuron0x2c10620()*0.878458);
}

double NNfunction_sb_dLsR::synapse0x2c2d9d0() {
   return (neuron0x2c10960()*-0.464864);
}

double NNfunction_sb_dLsR::synapse0x2c2da10() {
   return (neuron0x2c10ec0()*0.141195);
}

double NNfunction_sb_dLsR::synapse0x2c2e090() {
   return (neuron0x2c110e0()*-0.72274);
}

double NNfunction_sb_dLsR::synapse0x2c2e0d0() {
   return (neuron0x2c11420()*0.0471434);
}

double NNfunction_sb_dLsR::synapse0x2c2e110() {
   return (neuron0x2c11760()*0.170845);
}

double NNfunction_sb_dLsR::synapse0x2c2e150() {
   return (neuron0x2c11aa0()*-0.0806518);
}

double NNfunction_sb_dLsR::synapse0x2c2e190() {
   return (neuron0x2c11de0()*0.18094);
}

double NNfunction_sb_dLsR::synapse0x2c2e1d0() {
   return (neuron0x2c12120()*0.170902);
}

double NNfunction_sb_dLsR::synapse0x2c2e550() {
   return (neuron0x2c0d560()*0.0108413);
}

double NNfunction_sb_dLsR::synapse0x2c2e590() {
   return (neuron0x2c0d8a0()*0.0162345);
}

double NNfunction_sb_dLsR::synapse0x2c2e5d0() {
   return (neuron0x2c0dbe0()*-0.042405);
}

double NNfunction_sb_dLsR::synapse0x2c2e610() {
   return (neuron0x2c0df20()*-0.0409367);
}

double NNfunction_sb_dLsR::synapse0x2c2e650() {
   return (neuron0x2c0e260()*-0.0226964);
}

double NNfunction_sb_dLsR::synapse0x2c2e690() {
   return (neuron0x2c0e5a0()*-0.00513901);
}

double NNfunction_sb_dLsR::synapse0x2c2e6d0() {
   return (neuron0x2c0e8e0()*0.0306715);
}

double NNfunction_sb_dLsR::synapse0x2c2e710() {
   return (neuron0x2c0ec20()*-0.0535511);
}

double NNfunction_sb_dLsR::synapse0x2c2e750() {
   return (neuron0x2c0ef60()*0.0592526);
}

double NNfunction_sb_dLsR::synapse0x2c2e790() {
   return (neuron0x2c0f2a0()*0.00318782);
}

double NNfunction_sb_dLsR::synapse0x2c2e7d0() {
   return (neuron0x2c0f5e0()*-0.106815);
}

double NNfunction_sb_dLsR::synapse0x2c2e810() {
   return (neuron0x2c0f920()*0.323883);
}

double NNfunction_sb_dLsR::synapse0x2c2e850() {
   return (neuron0x2c0fc60()*-0.0686406);
}

double NNfunction_sb_dLsR::synapse0x2c2e890() {
   return (neuron0x2c0ffa0()*-0.0395681);
}

double NNfunction_sb_dLsR::synapse0x2c2e8d0() {
   return (neuron0x2c102e0()*-0.0325465);
}

double NNfunction_sb_dLsR::synapse0x2c2e910() {
   return (neuron0x2c10620()*-0.0203408);
}

double NNfunction_sb_dLsR::synapse0x2c2e3a0() {
   return (neuron0x2c10960()*0.0101941);
}

double NNfunction_sb_dLsR::synapse0x2c2e3e0() {
   return (neuron0x2c10ec0()*-0.0482046);
}

double NNfunction_sb_dLsR::synapse0x2c2ea60() {
   return (neuron0x2c110e0()*0.228993);
}

double NNfunction_sb_dLsR::synapse0x2c2eaa0() {
   return (neuron0x2c11420()*-0.000438106);
}

double NNfunction_sb_dLsR::synapse0x2c2eae0() {
   return (neuron0x2c11760()*-0.0265901);
}

double NNfunction_sb_dLsR::synapse0x2c2eb20() {
   return (neuron0x2c11aa0()*-0.0241269);
}

double NNfunction_sb_dLsR::synapse0x2c2eb60() {
   return (neuron0x2c11de0()*-0.022541);
}

double NNfunction_sb_dLsR::synapse0x2c2eba0() {
   return (neuron0x2c12120()*0.0163523);
}

double NNfunction_sb_dLsR::synapse0x2c17650() {
   return (neuron0x2c0d560()*0.00578975);
}

double NNfunction_sb_dLsR::synapse0x2c17690() {
   return (neuron0x2c0d8a0()*-0.0102325);
}

double NNfunction_sb_dLsR::synapse0x2c176d0() {
   return (neuron0x2c0dbe0()*0.00130903);
}

double NNfunction_sb_dLsR::synapse0x2c17710() {
   return (neuron0x2c0df20()*-0.170072);
}

double NNfunction_sb_dLsR::synapse0x2c17750() {
   return (neuron0x2c0e260()*0.0389612);
}

double NNfunction_sb_dLsR::synapse0x2c17790() {
   return (neuron0x2c0e5a0()*-0.00357775);
}

double NNfunction_sb_dLsR::synapse0x2c177d0() {
   return (neuron0x2c0e8e0()*-0.0335194);
}

double NNfunction_sb_dLsR::synapse0x2c17810() {
   return (neuron0x2c0ec20()*0.0206047);
}

double NNfunction_sb_dLsR::synapse0x2c2f330() {
   return (neuron0x2c0ef60()*0.0362592);
}

double NNfunction_sb_dLsR::synapse0x2c2f370() {
   return (neuron0x2c0f2a0()*-0.0378932);
}

double NNfunction_sb_dLsR::synapse0x2c2f3b0() {
   return (neuron0x2c0f5e0()*0.0161709);
}

double NNfunction_sb_dLsR::synapse0x2c2f3f0() {
   return (neuron0x2c0f920()*-0.0110403);
}

double NNfunction_sb_dLsR::synapse0x2c2f430() {
   return (neuron0x2c0fc60()*0.0503516);
}

double NNfunction_sb_dLsR::synapse0x2c2f470() {
   return (neuron0x2c0ffa0()*0.018721);
}

double NNfunction_sb_dLsR::synapse0x2c2f4b0() {
   return (neuron0x2c102e0()*0.00345965);
}

double NNfunction_sb_dLsR::synapse0x2c2f4f0() {
   return (neuron0x2c10620()*0.0380604);
}

double NNfunction_sb_dLsR::synapse0x2c2ed70() {
   return (neuron0x2c10960()*-0.00418327);
}

double NNfunction_sb_dLsR::synapse0x2c2edb0() {
   return (neuron0x2c10ec0()*0.0172519);
}

double NNfunction_sb_dLsR::synapse0x2c2f640() {
   return (neuron0x2c110e0()*2.00254);
}

double NNfunction_sb_dLsR::synapse0x2c2f680() {
   return (neuron0x2c11420()*0.000911645);
}

double NNfunction_sb_dLsR::synapse0x2c2f6c0() {
   return (neuron0x2c11760()*0.0169257);
}

double NNfunction_sb_dLsR::synapse0x2c2f700() {
   return (neuron0x2c11aa0()*0.0163767);
}

double NNfunction_sb_dLsR::synapse0x2c2f740() {
   return (neuron0x2c11de0()*0.0122901);
}

double NNfunction_sb_dLsR::synapse0x2c2f780() {
   return (neuron0x2c12120()*0.00946653);
}

double NNfunction_sb_dLsR::synapse0x2c2fb00() {
   return (neuron0x2c0d560()*0.113705);
}

double NNfunction_sb_dLsR::synapse0x2c2fb40() {
   return (neuron0x2c0d8a0()*0.205946);
}

double NNfunction_sb_dLsR::synapse0x2c2fb80() {
   return (neuron0x2c0dbe0()*-0.39719);
}

double NNfunction_sb_dLsR::synapse0x2c2fbc0() {
   return (neuron0x2c0df20()*1.61247);
}

double NNfunction_sb_dLsR::synapse0x2c2fc00() {
   return (neuron0x2c0e260()*-0.138862);
}

double NNfunction_sb_dLsR::synapse0x2c2fc40() {
   return (neuron0x2c0e5a0()*0.146768);
}

double NNfunction_sb_dLsR::synapse0x2c2fc80() {
   return (neuron0x2c0e8e0()*-0.494161);
}

double NNfunction_sb_dLsR::synapse0x2c2fcc0() {
   return (neuron0x2c0ec20()*0.154941);
}

double NNfunction_sb_dLsR::synapse0x2c2fd00() {
   return (neuron0x2c0ef60()*0.0373478);
}

double NNfunction_sb_dLsR::synapse0x2c2fd40() {
   return (neuron0x2c0f2a0()*-0.119704);
}

double NNfunction_sb_dLsR::synapse0x2c2fd80() {
   return (neuron0x2c0f5e0()*-0.0668286);
}

double NNfunction_sb_dLsR::synapse0x2c2fdc0() {
   return (neuron0x2c0f920()*0.0318452);
}

double NNfunction_sb_dLsR::synapse0x2c2fe00() {
   return (neuron0x2c0fc60()*0.0427772);
}

double NNfunction_sb_dLsR::synapse0x2c2fe40() {
   return (neuron0x2c0ffa0()*0.333288);
}

double NNfunction_sb_dLsR::synapse0x2c2fe80() {
   return (neuron0x2c102e0()*-0.566891);
}

double NNfunction_sb_dLsR::synapse0x2c2fec0() {
   return (neuron0x2c10620()*-0.110748);
}

double NNfunction_sb_dLsR::synapse0x2c2f950() {
   return (neuron0x2c10960()*-0.157346);
}

double NNfunction_sb_dLsR::synapse0x2c2f990() {
   return (neuron0x2c10ec0()*0.499804);
}

double NNfunction_sb_dLsR::synapse0x2c30010() {
   return (neuron0x2c110e0()*0.442095);
}

double NNfunction_sb_dLsR::synapse0x2c30050() {
   return (neuron0x2c11420()*0.0450464);
}

double NNfunction_sb_dLsR::synapse0x2c30090() {
   return (neuron0x2c11760()*-0.0344378);
}

double NNfunction_sb_dLsR::synapse0x2c300d0() {
   return (neuron0x2c11aa0()*0.0288938);
}

double NNfunction_sb_dLsR::synapse0x2c30110() {
   return (neuron0x2c11de0()*-0.0507628);
}

double NNfunction_sb_dLsR::synapse0x2c30150() {
   return (neuron0x2c12120()*0.333677);
}

double NNfunction_sb_dLsR::synapse0x2c304d0() {
   return (neuron0x2c0d560()*0.253249);
}

double NNfunction_sb_dLsR::synapse0x2c30510() {
   return (neuron0x2c0d8a0()*-0.114991);
}

double NNfunction_sb_dLsR::synapse0x2c30550() {
   return (neuron0x2c0dbe0()*-0.223299);
}

double NNfunction_sb_dLsR::synapse0x2c30590() {
   return (neuron0x2c0df20()*-0.243336);
}

double NNfunction_sb_dLsR::synapse0x2c305d0() {
   return (neuron0x2c0e260()*0.104342);
}

double NNfunction_sb_dLsR::synapse0x2c30610() {
   return (neuron0x2c0e5a0()*-0.0596607);
}

double NNfunction_sb_dLsR::synapse0x2c30650() {
   return (neuron0x2c0e8e0()*0.0509701);
}

double NNfunction_sb_dLsR::synapse0x2c30690() {
   return (neuron0x2c0ec20()*-0.102299);
}

double NNfunction_sb_dLsR::synapse0x2c306d0() {
   return (neuron0x2c0ef60()*-0.432841);
}

double NNfunction_sb_dLsR::synapse0x2c30710() {
   return (neuron0x2c0f2a0()*0.017109);
}

double NNfunction_sb_dLsR::synapse0x2c30750() {
   return (neuron0x2c0f5e0()*-0.00820308);
}

double NNfunction_sb_dLsR::synapse0x2c30790() {
   return (neuron0x2c0f920()*-0.567165);
}

double NNfunction_sb_dLsR::synapse0x2c307d0() {
   return (neuron0x2c0fc60()*0.321649);
}

double NNfunction_sb_dLsR::synapse0x2c30810() {
   return (neuron0x2c0ffa0()*-0.484276);
}

double NNfunction_sb_dLsR::synapse0x2c30850() {
   return (neuron0x2c102e0()*1.3639);
}

double NNfunction_sb_dLsR::synapse0x2c30890() {
   return (neuron0x2c10620()*0.125158);
}

double NNfunction_sb_dLsR::synapse0x2c30320() {
   return (neuron0x2c10960()*-0.393232);
}

double NNfunction_sb_dLsR::synapse0x2c30360() {
   return (neuron0x2c10ec0()*0.0833574);
}

double NNfunction_sb_dLsR::synapse0x2c20e90() {
   return (neuron0x2c110e0()*-0.896676);
}

double NNfunction_sb_dLsR::synapse0x2c20ed0() {
   return (neuron0x2c11420()*0.0204791);
}

double NNfunction_sb_dLsR::synapse0x2c20f10() {
   return (neuron0x2c11760()*0.0709437);
}

double NNfunction_sb_dLsR::synapse0x2c20f50() {
   return (neuron0x2c11aa0()*-0.154442);
}

double NNfunction_sb_dLsR::synapse0x2c20f90() {
   return (neuron0x2c11de0()*0.0178085);
}

double NNfunction_sb_dLsR::synapse0x2c20fd0() {
   return (neuron0x2c12120()*0.00456935);
}

double NNfunction_sb_dLsR::synapse0x2c21350() {
   return (neuron0x2c0d560()*-0.0427149);
}

double NNfunction_sb_dLsR::synapse0x2c21390() {
   return (neuron0x2c0d8a0()*-0.0249286);
}

double NNfunction_sb_dLsR::synapse0x2c213d0() {
   return (neuron0x2c0dbe0()*0.0364506);
}

double NNfunction_sb_dLsR::synapse0x2c21410() {
   return (neuron0x2c0df20()*2.62813);
}

double NNfunction_sb_dLsR::synapse0x2c21450() {
   return (neuron0x2c0e260()*0.0142057);
}

double NNfunction_sb_dLsR::synapse0x2c21490() {
   return (neuron0x2c0e5a0()*0.0134635);
}

double NNfunction_sb_dLsR::synapse0x2c214d0() {
   return (neuron0x2c0e8e0()*0.0252763);
}

double NNfunction_sb_dLsR::synapse0x2c21510() {
   return (neuron0x2c0ec20()*0.0552968);
}

double NNfunction_sb_dLsR::synapse0x2c21550() {
   return (neuron0x2c0ef60()*-0.0328998);
}

double NNfunction_sb_dLsR::synapse0x2c21590() {
   return (neuron0x2c0f2a0()*0.0255524);
}

double NNfunction_sb_dLsR::synapse0x2c215d0() {
   return (neuron0x2c0f5e0()*-0.012721);
}

double NNfunction_sb_dLsR::synapse0x2c21610() {
   return (neuron0x2c0f920()*-0.4338);
}

double NNfunction_sb_dLsR::synapse0x2c21650() {
   return (neuron0x2c0fc60()*0.0665747);
}

double NNfunction_sb_dLsR::synapse0x2c21690() {
   return (neuron0x2c0ffa0()*0.00882385);
}

double NNfunction_sb_dLsR::synapse0x2c216d0() {
   return (neuron0x2c102e0()*0.00356012);
}

double NNfunction_sb_dLsR::synapse0x2c21710() {
   return (neuron0x2c10620()*-0.0514353);
}

double NNfunction_sb_dLsR::synapse0x2c211a0() {
   return (neuron0x2c10960()*0.0437224);
}

double NNfunction_sb_dLsR::synapse0x2c211e0() {
   return (neuron0x2c10ec0()*0.0411243);
}

double NNfunction_sb_dLsR::synapse0x2c21860() {
   return (neuron0x2c110e0()*-0.518287);
}

double NNfunction_sb_dLsR::synapse0x2c218a0() {
   return (neuron0x2c11420()*-0.00426639);
}

double NNfunction_sb_dLsR::synapse0x2c218e0() {
   return (neuron0x2c11760()*0.0456679);
}

double NNfunction_sb_dLsR::synapse0x2c21920() {
   return (neuron0x2c11aa0()*-0.0446873);
}

double NNfunction_sb_dLsR::synapse0x2c21960() {
   return (neuron0x2c11de0()*-0.00698715);
}

double NNfunction_sb_dLsR::synapse0x2c219a0() {
   return (neuron0x2c12120()*0.0510922);
}

double NNfunction_sb_dLsR::synapse0x2c21d20() {
   return (neuron0x2c0d560()*-0.205824);
}

double NNfunction_sb_dLsR::synapse0x2c21d60() {
   return (neuron0x2c0d8a0()*-0.42845);
}

double NNfunction_sb_dLsR::synapse0x2c21da0() {
   return (neuron0x2c0dbe0()*-0.482206);
}

double NNfunction_sb_dLsR::synapse0x2c21de0() {
   return (neuron0x2c0df20()*-0.124469);
}

double NNfunction_sb_dLsR::synapse0x2c21e20() {
   return (neuron0x2c0e260()*-0.215256);
}

double NNfunction_sb_dLsR::synapse0x2c21e60() {
   return (neuron0x2c0e5a0()*0.289095);
}

double NNfunction_sb_dLsR::synapse0x2c21ea0() {
   return (neuron0x2c0e8e0()*0.364876);
}

double NNfunction_sb_dLsR::synapse0x2c21ee0() {
   return (neuron0x2c0ec20()*-0.10923);
}

double NNfunction_sb_dLsR::synapse0x2c21f20() {
   return (neuron0x2c0ef60()*-0.0070912);
}

double NNfunction_sb_dLsR::synapse0x2c21f60() {
   return (neuron0x2c0f2a0()*-0.144757);
}

double NNfunction_sb_dLsR::synapse0x2c21fa0() {
   return (neuron0x2c0f5e0()*-0.071292);
}

double NNfunction_sb_dLsR::synapse0x2c21fe0() {
   return (neuron0x2c0f920()*-0.418123);
}

double NNfunction_sb_dLsR::synapse0x2c22020() {
   return (neuron0x2c0fc60()*-0.115742);
}

double NNfunction_sb_dLsR::synapse0x2c22060() {
   return (neuron0x2c0ffa0()*-0.353431);
}

double NNfunction_sb_dLsR::synapse0x2c220a0() {
   return (neuron0x2c102e0()*-0.236285);
}

double NNfunction_sb_dLsR::synapse0x2c220e0() {
   return (neuron0x2c10620()*-0.0501987);
}

double NNfunction_sb_dLsR::synapse0x2c21b70() {
   return (neuron0x2c10960()*0.136436);
}

double NNfunction_sb_dLsR::synapse0x2c21bb0() {
   return (neuron0x2c10ec0()*-0.303698);
}

double NNfunction_sb_dLsR::synapse0x2c22230() {
   return (neuron0x2c110e0()*-0.0102455);
}

double NNfunction_sb_dLsR::synapse0x2c22270() {
   return (neuron0x2c11420()*0.019039);
}

double NNfunction_sb_dLsR::synapse0x2c222b0() {
   return (neuron0x2c11760()*-0.691855);
}

double NNfunction_sb_dLsR::synapse0x2c222f0() {
   return (neuron0x2c11aa0()*-0.142202);
}

double NNfunction_sb_dLsR::synapse0x2c22330() {
   return (neuron0x2c11de0()*0.383873);
}

double NNfunction_sb_dLsR::synapse0x2c22370() {
   return (neuron0x2c12120()*-0.200894);
}

double NNfunction_sb_dLsR::synapse0x2c226f0() {
   return (neuron0x2c0d560()*-0.180106);
}

double NNfunction_sb_dLsR::synapse0x2c22730() {
   return (neuron0x2c0d8a0()*-0.136932);
}

double NNfunction_sb_dLsR::synapse0x2c22770() {
   return (neuron0x2c0dbe0()*0.093042);
}

double NNfunction_sb_dLsR::synapse0x2c227b0() {
   return (neuron0x2c0df20()*-0.285725);
}

double NNfunction_sb_dLsR::synapse0x2c227f0() {
   return (neuron0x2c0e260()*-0.503129);
}

double NNfunction_sb_dLsR::synapse0x2c22830() {
   return (neuron0x2c0e5a0()*0.0131351);
}

double NNfunction_sb_dLsR::synapse0x2c22870() {
   return (neuron0x2c0e8e0()*0.110355);
}

double NNfunction_sb_dLsR::synapse0x2c228b0() {
   return (neuron0x2c0ec20()*0.389181);
}

double NNfunction_sb_dLsR::synapse0x2c228f0() {
   return (neuron0x2c0ef60()*0.0960167);
}

double NNfunction_sb_dLsR::synapse0x2c22930() {
   return (neuron0x2c0f2a0()*-0.233534);
}

double NNfunction_sb_dLsR::synapse0x2c22970() {
   return (neuron0x2c0f5e0()*-0.308068);
}

double NNfunction_sb_dLsR::synapse0x2c229b0() {
   return (neuron0x2c0f920()*0.572959);
}

double NNfunction_sb_dLsR::synapse0x2c229f0() {
   return (neuron0x2c0fc60()*-0.112033);
}

double NNfunction_sb_dLsR::synapse0x2c22a30() {
   return (neuron0x2c0ffa0()*0.238911);
}

double NNfunction_sb_dLsR::synapse0x2c22a70() {
   return (neuron0x2c102e0()*0.346193);
}

double NNfunction_sb_dLsR::synapse0x2c22ab0() {
   return (neuron0x2c10620()*0.12414);
}

double NNfunction_sb_dLsR::synapse0x2c22540() {
   return (neuron0x2c10960()*0.276195);
}

double NNfunction_sb_dLsR::synapse0x2c22580() {
   return (neuron0x2c10ec0()*0.419659);
}

double NNfunction_sb_dLsR::synapse0x2c22c00() {
   return (neuron0x2c110e0()*0.831804);
}

double NNfunction_sb_dLsR::synapse0x2c22c40() {
   return (neuron0x2c11420()*-0.561062);
}

double NNfunction_sb_dLsR::synapse0x2c22c80() {
   return (neuron0x2c11760()*-0.441195);
}

double NNfunction_sb_dLsR::synapse0x2c22cc0() {
   return (neuron0x2c11aa0()*-1.05778);
}

double NNfunction_sb_dLsR::synapse0x2c22d00() {
   return (neuron0x2c11de0()*0.210488);
}

double NNfunction_sb_dLsR::synapse0x2c22d40() {
   return (neuron0x2c12120()*-0.849215);
}

double NNfunction_sb_dLsR::synapse0x2c34c10() {
   return (neuron0x2c0d560()*-0.495808);
}

double NNfunction_sb_dLsR::synapse0x2c34c50() {
   return (neuron0x2c0d8a0()*0.0221431);
}

double NNfunction_sb_dLsR::synapse0x2c34c90() {
   return (neuron0x2c0dbe0()*-0.463293);
}

double NNfunction_sb_dLsR::synapse0x2c34cd0() {
   return (neuron0x2c0df20()*0.258199);
}

double NNfunction_sb_dLsR::synapse0x2c34d10() {
   return (neuron0x2c0e260()*0.556362);
}

double NNfunction_sb_dLsR::synapse0x2c34d50() {
   return (neuron0x2c0e5a0()*-0.778486);
}

double NNfunction_sb_dLsR::synapse0x2c34d90() {
   return (neuron0x2c0e8e0()*0.251624);
}

double NNfunction_sb_dLsR::synapse0x2c34dd0() {
   return (neuron0x2c0ec20()*-0.0584996);
}

double NNfunction_sb_dLsR::synapse0x2c34e10() {
   return (neuron0x2c0ef60()*-0.306345);
}

double NNfunction_sb_dLsR::synapse0x2c34e50() {
   return (neuron0x2c0f2a0()*0.405645);
}

double NNfunction_sb_dLsR::synapse0x2c34e90() {
   return (neuron0x2c0f5e0()*-0.862602);
}

double NNfunction_sb_dLsR::synapse0x2c34ed0() {
   return (neuron0x2c0f920()*-0.174431);
}

double NNfunction_sb_dLsR::synapse0x2c34f10() {
   return (neuron0x2c0fc60()*-0.376107);
}

double NNfunction_sb_dLsR::synapse0x2c34f50() {
   return (neuron0x2c0ffa0()*0.243413);
}

double NNfunction_sb_dLsR::synapse0x2c34f90() {
   return (neuron0x2c102e0()*0.429728);
}

double NNfunction_sb_dLsR::synapse0x2c34fd0() {
   return (neuron0x2c10620()*-0.449771);
}

double NNfunction_sb_dLsR::synapse0x2c22d80() {
   return (neuron0x2c10960()*0.0906704);
}

double NNfunction_sb_dLsR::synapse0x2c22dc0() {
   return (neuron0x2c10ec0()*0.142642);
}

double NNfunction_sb_dLsR::synapse0x2c35120() {
   return (neuron0x2c110e0()*-0.612016);
}

double NNfunction_sb_dLsR::synapse0x2c35160() {
   return (neuron0x2c11420()*0.406433);
}

double NNfunction_sb_dLsR::synapse0x2c351a0() {
   return (neuron0x2c11760()*1.03929);
}

double NNfunction_sb_dLsR::synapse0x2c351e0() {
   return (neuron0x2c11aa0()*-0.00914688);
}

double NNfunction_sb_dLsR::synapse0x2c35220() {
   return (neuron0x2c11de0()*0.210824);
}

double NNfunction_sb_dLsR::synapse0x2c35260() {
   return (neuron0x2c12120()*-0.183126);
}

double NNfunction_sb_dLsR::synapse0x2c355e0() {
   return (neuron0x2c0d560()*0.243015);
}

double NNfunction_sb_dLsR::synapse0x2c35620() {
   return (neuron0x2c0d8a0()*-0.647296);
}

double NNfunction_sb_dLsR::synapse0x2c35660() {
   return (neuron0x2c0dbe0()*-0.297844);
}

double NNfunction_sb_dLsR::synapse0x2c356a0() {
   return (neuron0x2c0df20()*0.0357195);
}

double NNfunction_sb_dLsR::synapse0x2c356e0() {
   return (neuron0x2c0e260()*-0.0807121);
}

double NNfunction_sb_dLsR::synapse0x2c35720() {
   return (neuron0x2c0e5a0()*-0.290731);
}

double NNfunction_sb_dLsR::synapse0x2c35760() {
   return (neuron0x2c0e8e0()*-0.143261);
}

double NNfunction_sb_dLsR::synapse0x2c357a0() {
   return (neuron0x2c0ec20()*0.58573);
}

double NNfunction_sb_dLsR::synapse0x2c357e0() {
   return (neuron0x2c0ef60()*0.260529);
}

double NNfunction_sb_dLsR::synapse0x2c35820() {
   return (neuron0x2c0f2a0()*0.182825);
}

double NNfunction_sb_dLsR::synapse0x2c35860() {
   return (neuron0x2c0f5e0()*0.349614);
}

double NNfunction_sb_dLsR::synapse0x2c358a0() {
   return (neuron0x2c0f920()*-0.304847);
}

double NNfunction_sb_dLsR::synapse0x2c358e0() {
   return (neuron0x2c0fc60()*0.0863795);
}

double NNfunction_sb_dLsR::synapse0x2c35920() {
   return (neuron0x2c0ffa0()*0.593712);
}

double NNfunction_sb_dLsR::synapse0x2c35960() {
   return (neuron0x2c102e0()*-0.186244);
}

double NNfunction_sb_dLsR::synapse0x2c359a0() {
   return (neuron0x2c10620()*0.093299);
}

double NNfunction_sb_dLsR::synapse0x2c35430() {
   return (neuron0x2c10960()*0.0818254);
}

double NNfunction_sb_dLsR::synapse0x2c35470() {
   return (neuron0x2c10ec0()*0.343597);
}

double NNfunction_sb_dLsR::synapse0x2c35af0() {
   return (neuron0x2c110e0()*-0.116365);
}

double NNfunction_sb_dLsR::synapse0x2c35b30() {
   return (neuron0x2c11420()*-0.28914);
}

double NNfunction_sb_dLsR::synapse0x2c35b70() {
   return (neuron0x2c11760()*0.109651);
}

double NNfunction_sb_dLsR::synapse0x2c35bb0() {
   return (neuron0x2c11aa0()*-0.695669);
}

double NNfunction_sb_dLsR::synapse0x2c35bf0() {
   return (neuron0x2c11de0()*-0.0254114);
}

double NNfunction_sb_dLsR::synapse0x2c35c30() {
   return (neuron0x2c12120()*0.134329);
}

double NNfunction_sb_dLsR::synapse0x2c35fb0() {
   return (neuron0x2c0d560()*-0.019113);
}

double NNfunction_sb_dLsR::synapse0x2c35ff0() {
   return (neuron0x2c0d8a0()*0.116002);
}

double NNfunction_sb_dLsR::synapse0x2c36030() {
   return (neuron0x2c0dbe0()*-0.0281501);
}

double NNfunction_sb_dLsR::synapse0x2c36070() {
   return (neuron0x2c0df20()*0.650892);
}

double NNfunction_sb_dLsR::synapse0x2c360b0() {
   return (neuron0x2c0e260()*-0.237719);
}

double NNfunction_sb_dLsR::synapse0x2c360f0() {
   return (neuron0x2c0e5a0()*-0.0994684);
}

double NNfunction_sb_dLsR::synapse0x2c36130() {
   return (neuron0x2c0e8e0()*0.142768);
}

double NNfunction_sb_dLsR::synapse0x2c36170() {
   return (neuron0x2c0ec20()*-0.0105194);
}

double NNfunction_sb_dLsR::synapse0x2c361b0() {
   return (neuron0x2c0ef60()*-0.0136579);
}

double NNfunction_sb_dLsR::synapse0x2c361f0() {
   return (neuron0x2c0f2a0()*0.123272);
}

double NNfunction_sb_dLsR::synapse0x2c36230() {
   return (neuron0x2c0f5e0()*-0.0562972);
}

double NNfunction_sb_dLsR::synapse0x2c36270() {
   return (neuron0x2c0f920()*-0.379898);
}

double NNfunction_sb_dLsR::synapse0x2c362b0() {
   return (neuron0x2c0fc60()*0.0621076);
}

double NNfunction_sb_dLsR::synapse0x2c362f0() {
   return (neuron0x2c0ffa0()*-0.0764001);
}

double NNfunction_sb_dLsR::synapse0x2c36330() {
   return (neuron0x2c102e0()*0.0276699);
}

double NNfunction_sb_dLsR::synapse0x2c36370() {
   return (neuron0x2c10620()*0.195217);
}

double NNfunction_sb_dLsR::synapse0x2c35e00() {
   return (neuron0x2c10960()*0.00147873);
}

double NNfunction_sb_dLsR::synapse0x2c35e40() {
   return (neuron0x2c10ec0()*0.00241832);
}

double NNfunction_sb_dLsR::synapse0x2c364c0() {
   return (neuron0x2c110e0()*0.199754);
}

double NNfunction_sb_dLsR::synapse0x2c36500() {
   return (neuron0x2c11420()*0.0621254);
}

double NNfunction_sb_dLsR::synapse0x2c36540() {
   return (neuron0x2c11760()*-0.0518373);
}

double NNfunction_sb_dLsR::synapse0x2c36580() {
   return (neuron0x2c11aa0()*-0.0694991);
}

double NNfunction_sb_dLsR::synapse0x2c365c0() {
   return (neuron0x2c11de0()*-0.0453346);
}

double NNfunction_sb_dLsR::synapse0x2c36600() {
   return (neuron0x2c12120()*-0.000115693);
}

double NNfunction_sb_dLsR::synapse0x2c36980() {
   return (neuron0x2c0d560()*-0.00629106);
}

double NNfunction_sb_dLsR::synapse0x2c369c0() {
   return (neuron0x2c0d8a0()*0.00627539);
}

double NNfunction_sb_dLsR::synapse0x2c36a00() {
   return (neuron0x2c0dbe0()*-0.999899);
}

double NNfunction_sb_dLsR::synapse0x2c36a40() {
   return (neuron0x2c0df20()*0.047512);
}

double NNfunction_sb_dLsR::synapse0x2c36a80() {
   return (neuron0x2c0e260()*-0.00623266);
}

double NNfunction_sb_dLsR::synapse0x2c36ac0() {
   return (neuron0x2c0e5a0()*-0.0137123);
}

double NNfunction_sb_dLsR::synapse0x2c36b00() {
   return (neuron0x2c0e8e0()*-0.0682824);
}

double NNfunction_sb_dLsR::synapse0x2c36b40() {
   return (neuron0x2c0ec20()*-0.0162337);
}

double NNfunction_sb_dLsR::synapse0x2c36b80() {
   return (neuron0x2c0ef60()*-0.0114354);
}

double NNfunction_sb_dLsR::synapse0x2c36bc0() {
   return (neuron0x2c0f2a0()*0.00657765);
}

double NNfunction_sb_dLsR::synapse0x2c36c00() {
   return (neuron0x2c0f5e0()*0.00397464);
}

double NNfunction_sb_dLsR::synapse0x2c36c40() {
   return (neuron0x2c0f920()*0.309455);
}

double NNfunction_sb_dLsR::synapse0x2c36c80() {
   return (neuron0x2c0fc60()*0.0362641);
}

double NNfunction_sb_dLsR::synapse0x2c36cc0() {
   return (neuron0x2c0ffa0()*-0.030027);
}

double NNfunction_sb_dLsR::synapse0x2c36d00() {
   return (neuron0x2c102e0()*-0.0107919);
}

double NNfunction_sb_dLsR::synapse0x2c36d40() {
   return (neuron0x2c10620()*0.0398069);
}

double NNfunction_sb_dLsR::synapse0x2c367d0() {
   return (neuron0x2c10960()*-0.0431033);
}

double NNfunction_sb_dLsR::synapse0x2c36810() {
   return (neuron0x2c10ec0()*0.0181968);
}

double NNfunction_sb_dLsR::synapse0x2c36e90() {
   return (neuron0x2c110e0()*-0.171655);
}

double NNfunction_sb_dLsR::synapse0x2c36ed0() {
   return (neuron0x2c11420()*0.0107512);
}

double NNfunction_sb_dLsR::synapse0x2c36f10() {
   return (neuron0x2c11760()*-0.0064449);
}

double NNfunction_sb_dLsR::synapse0x2c36f50() {
   return (neuron0x2c11aa0()*0.0148767);
}

double NNfunction_sb_dLsR::synapse0x2c36f90() {
   return (neuron0x2c11de0()*-0.00603196);
}

double NNfunction_sb_dLsR::synapse0x2c36fd0() {
   return (neuron0x2c12120()*0.0174608);
}

double NNfunction_sb_dLsR::synapse0x2c13570() {
   return (neuron0x2c125c0()*2.87751);
}

double NNfunction_sb_dLsR::synapse0x2c135b0() {
   return (neuron0x2c12ed0()*0.659572);
}

double NNfunction_sb_dLsR::synapse0x2c14a80() {
   return (neuron0x2c139b0()*0.0447234);
}

double NNfunction_sb_dLsR::synapse0x2c14ac0() {
   return (neuron0x29cd240()*-0.63684);
}

double NNfunction_sb_dLsR::synapse0x2c15450() {
   return (neuron0x2c147d0()*0.533597);
}

double NNfunction_sb_dLsR::synapse0x2c15490() {
   return (neuron0x2c151a0()*0.335354);
}

double NNfunction_sb_dLsR::synapse0x2c16220() {
   return (neuron0x2c15f70()*-4.47742);
}

double NNfunction_sb_dLsR::synapse0x2c16260() {
   return (neuron0x2c16940()*-0.90365);
}

double NNfunction_sb_dLsR::synapse0x2c16bf0() {
   return (neuron0x2c17310()*3.45595);
}

double NNfunction_sb_dLsR::synapse0x2c16c30() {
   return (neuron0x2c17df0()*-0.020894);
}

double NNfunction_sb_dLsR::synapse0x2c175c0() {
   return (neuron0x2c187c0()*-1.51788);
}

double NNfunction_sb_dLsR::synapse0x2c17600() {
   return (neuron0x2c158a0()*0.6566);
}

double NNfunction_sb_dLsR::synapse0x2c180a0() {
   return (neuron0x2c1a370()*0.396024);
}

double NNfunction_sb_dLsR::synapse0x2c180e0() {
   return (neuron0x2c1ad40()*0.500597);
}

double NNfunction_sb_dLsR::synapse0x2c18a70() {
   return (neuron0x2c1b710()*0.0551303);
}

double NNfunction_sb_dLsR::synapse0x2c18ab0() {
   return (neuron0x2c1c0e0()*1.02695);
}

double NNfunction_sb_dLsR::synapse0x2c15b50() {
   return (neuron0x2c1def0()*1.22);
}

double NNfunction_sb_dLsR::synapse0x2c15b90() {
   return (neuron0x2c1e1d0()*6.06399);
}

double NNfunction_sb_dLsR::synapse0x2c1a620() {
   return (neuron0x2c1eba0()*0.0636194);
}

double NNfunction_sb_dLsR::synapse0x2c1a660() {
   return (neuron0x2c1f570()*-0.379449);
}

double NNfunction_sb_dLsR::synapse0x2c1aff0() {
   return (neuron0x2c1ff40()*0.878892);
}

double NNfunction_sb_dLsR::synapse0x2c1b030() {
   return (neuron0x2c20910()*-0.659108);
}

double NNfunction_sb_dLsR::synapse0x2c1b9c0() {
   return (neuron0x2c19460()*-1.10956);
}

double NNfunction_sb_dLsR::synapse0x2c1ba00() {
   return (neuron0x2c19e30()*-1.86353);
}

double NNfunction_sb_dLsR::synapse0x2c1c390() {
   return (neuron0x2c236a0()*0.00901271);
}

double NNfunction_sb_dLsR::synapse0x2c1c3d0() {
   return (neuron0x2c24070()*-1.21301);
}

double NNfunction_sb_dLsR::synapse0x2c10500() {
   return (neuron0x2c24a40()*0.273664);
}

double NNfunction_sb_dLsR::synapse0x2c10540() {
   return (neuron0x2c25410()*-2.17665);
}

double NNfunction_sb_dLsR::synapse0x2c1e480() {
   return (neuron0x2c25de0()*0.573072);
}

double NNfunction_sb_dLsR::synapse0x2c1e4c0() {
   return (neuron0x2c267b0()*3.10996);
}

double NNfunction_sb_dLsR::synapse0x2c1ee50() {
   return (neuron0x2c27180()*0.944249);
}

double NNfunction_sb_dLsR::synapse0x2c1ee90() {
   return (neuron0x2c27b50()*0.124378);
}

double NNfunction_sb_dLsR::synapse0x2c1f820() {
   return (neuron0x2c1dbe0()*-0.447822);
}

double NNfunction_sb_dLsR::synapse0x2c1f860() {
   return (neuron0x2c2a730()*0.352568);
}

double NNfunction_sb_dLsR::synapse0x2c201f0() {
   return (neuron0x2c2b100()*-2.92937);
}

double NNfunction_sb_dLsR::synapse0x2c20230() {
   return (neuron0x2c2bad0()*-1.08314);
}

double NNfunction_sb_dLsR::synapse0x2c20bc0() {
   return (neuron0x2c2c4a0()*-1.09168);
}

double NNfunction_sb_dLsR::synapse0x2c20c00() {
   return (neuron0x2c2ce70()*-0.358026);
}

double NNfunction_sb_dLsR::synapse0x2c19710() {
   return (neuron0x2c2d840()*0.917244);
}

double NNfunction_sb_dLsR::synapse0x2c19750() {
   return (neuron0x2c2e210()*0.144555);
}

double NNfunction_sb_dLsR::synapse0x2c22fc0() {
   return (neuron0x2c2ebe0()*-0.00257032);
}

double NNfunction_sb_dLsR::synapse0x2c23000() {
   return (neuron0x2c2f7c0()*-0.195202);
}

double NNfunction_sb_dLsR::synapse0x2c23950() {
   return (neuron0x2c30190()*0.596684);
}

double NNfunction_sb_dLsR::synapse0x2c23990() {
   return (neuron0x2c21010()*-2.82793);
}

double NNfunction_sb_dLsR::synapse0x2c24320() {
   return (neuron0x2c219e0()*-0.914763);
}

double NNfunction_sb_dLsR::synapse0x2c24360() {
   return (neuron0x2c223b0()*-0.435751);
}

double NNfunction_sb_dLsR::synapse0x2c24cf0() {
   return (neuron0x2c349f0()*-0.532616);
}

double NNfunction_sb_dLsR::synapse0x2c24d30() {
   return (neuron0x2c352a0()*-0.419984);
}

double NNfunction_sb_dLsR::synapse0x2c256c0() {
   return (neuron0x2c35c70()*-1.66088);
}

double NNfunction_sb_dLsR::synapse0x2c25700() {
   return (neuron0x2c36640()*-1.08559);
}

double NNfunction_sb_dLsR::synapse0x2c27e00() {
   return (neuron0x2c125c0()*-0.195051);
}

double NNfunction_sb_dLsR::synapse0x2c27e40() {
   return (neuron0x2c12ed0()*0.140454);
}

double NNfunction_sb_dLsR::synapse0x2c1d3c0() {
   return (neuron0x2c139b0()*0.0520101);
}

double NNfunction_sb_dLsR::synapse0x2c1d400() {
   return (neuron0x29cd240()*0.187317);
}

double NNfunction_sb_dLsR::synapse0x2c2a9e0() {
   return (neuron0x2c147d0()*0.0512677);
}

double NNfunction_sb_dLsR::synapse0x2c2aa20() {
   return (neuron0x2c151a0()*-1.62922);
}

double NNfunction_sb_dLsR::synapse0x2c2b3b0() {
   return (neuron0x2c15f70()*-4.2019);
}

double NNfunction_sb_dLsR::synapse0x2c2b3f0() {
   return (neuron0x2c16940()*-0.639677);
}

double NNfunction_sb_dLsR::synapse0x2c2bd80() {
   return (neuron0x2c17310()*-2.15084);
}

double NNfunction_sb_dLsR::synapse0x2c2bdc0() {
   return (neuron0x2c17df0()*-0.149014);
}

double NNfunction_sb_dLsR::synapse0x2c2c750() {
   return (neuron0x2c187c0()*0.0598638);
}

double NNfunction_sb_dLsR::synapse0x2c2c790() {
   return (neuron0x2c158a0()*0.0445178);
}

double NNfunction_sb_dLsR::synapse0x2c2d120() {
   return (neuron0x2c1a370()*-2.44442);
}

double NNfunction_sb_dLsR::synapse0x2c2d160() {
   return (neuron0x2c1ad40()*0.235457);
}

double NNfunction_sb_dLsR::synapse0x2c2daf0() {
   return (neuron0x2c1b710()*2.17294);
}

double NNfunction_sb_dLsR::synapse0x2c2db30() {
   return (neuron0x2c1c0e0()*0.269512);
}

double NNfunction_sb_dLsR::synapse0x2c2e4c0() {
   return (neuron0x2c1def0()*1.28086);
}

double NNfunction_sb_dLsR::synapse0x2c2e500() {
   return (neuron0x2c1e1d0()*2.35481);
}

double NNfunction_sb_dLsR::synapse0x2c2ee90() {
   return (neuron0x2c1eba0()*0.0458224);
}

double NNfunction_sb_dLsR::synapse0x2c2eed0() {
   return (neuron0x2c1f570()*-0.0936118);
}

double NNfunction_sb_dLsR::synapse0x2c2fa70() {
   return (neuron0x2c1ff40()*-3.1635);
}

double NNfunction_sb_dLsR::synapse0x2c2fab0() {
   return (neuron0x2c20910()*0.0129848);
}

double NNfunction_sb_dLsR::synapse0x2c30440() {
   return (neuron0x2c19460()*0.0020923);
}

double NNfunction_sb_dLsR::synapse0x2c30480() {
   return (neuron0x2c19e30()*2.19744);
}

double NNfunction_sb_dLsR::synapse0x2c212c0() {
   return (neuron0x2c236a0()*0.142562);
}

double NNfunction_sb_dLsR::synapse0x2c21300() {
   return (neuron0x2c24070()*0.0534344);
}

double NNfunction_sb_dLsR::synapse0x2c21c90() {
   return (neuron0x2c24a40()*-0.0633051);
}

double NNfunction_sb_dLsR::synapse0x2c21cd0() {
   return (neuron0x2c25410()*-0.227004);
}

double NNfunction_sb_dLsR::synapse0x2c22660() {
   return (neuron0x2c25de0()*1.64574);
}

double NNfunction_sb_dLsR::synapse0x2c226a0() {
   return (neuron0x2c267b0()*0.165744);
}

double NNfunction_sb_dLsR::synapse0x2c34b80() {
   return (neuron0x2c27180()*1.82769);
}

double NNfunction_sb_dLsR::synapse0x2c34bc0() {
   return (neuron0x2c27b50()*-0.991127);
}

double NNfunction_sb_dLsR::synapse0x2c35550() {
   return (neuron0x2c1dbe0()*-0.0652665);
}

double NNfunction_sb_dLsR::synapse0x2c35590() {
   return (neuron0x2c2a730()*0.294655);
}

double NNfunction_sb_dLsR::synapse0x2c35f20() {
   return (neuron0x2c2b100()*3.06532);
}

double NNfunction_sb_dLsR::synapse0x2c35f60() {
   return (neuron0x2c2bad0()*2.40289);
}

double NNfunction_sb_dLsR::synapse0x2c368f0() {
   return (neuron0x2c2c4a0()*-0.014393);
}

double NNfunction_sb_dLsR::synapse0x2c36930() {
   return (neuron0x2c2ce70()*-4.5428);
}

double NNfunction_sb_dLsR::synapse0x2c127e0() {
   return (neuron0x2c2d840()*-0.340479);
}

double NNfunction_sb_dLsR::synapse0x2c12820() {
   return (neuron0x2c2e210()*-0.928534);
}

double NNfunction_sb_dLsR::synapse0x2c26090() {
   return (neuron0x2c2ebe0()*-2.22142);
}

double NNfunction_sb_dLsR::synapse0x2c260d0() {
   return (neuron0x2c2f7c0()*-0.00250588);
}

double NNfunction_sb_dLsR::synapse0x2c37010() {
   return (neuron0x2c30190()*-0.232025);
}

double NNfunction_sb_dLsR::synapse0x2c37050() {
   return (neuron0x2c21010()*-0.618009);
}

double NNfunction_sb_dLsR::synapse0x2c37090() {
   return (neuron0x2c219e0()*-0.0270057);
}

double NNfunction_sb_dLsR::synapse0x2c370d0() {
   return (neuron0x2c223b0()*0.045156);
}

double NNfunction_sb_dLsR::synapse0x2c3df80() {
   return (neuron0x2c349f0()*-0.0902132);
}

double NNfunction_sb_dLsR::synapse0x2c3dfc0() {
   return (neuron0x2c352a0()*-0.175145);
}

double NNfunction_sb_dLsR::synapse0x2c3e000() {
   return (neuron0x2c35c70()*1.78824);
}

double NNfunction_sb_dLsR::synapse0x2c3e040() {
   return (neuron0x2c36640()*1.87799);
}

double NNfunction_sb_dLsR::synapse0x2c3e3c0() {
   return (neuron0x2c125c0()*-0.027612);
}

double NNfunction_sb_dLsR::synapse0x2c3e400() {
   return (neuron0x2c12ed0()*0.0393384);
}

double NNfunction_sb_dLsR::synapse0x2c3e440() {
   return (neuron0x2c139b0()*0.00669312);
}

double NNfunction_sb_dLsR::synapse0x2c3e480() {
   return (neuron0x29cd240()*0.032791);
}

double NNfunction_sb_dLsR::synapse0x2c3e4c0() {
   return (neuron0x2c147d0()*0.000845801);
}

double NNfunction_sb_dLsR::synapse0x2c3e500() {
   return (neuron0x2c151a0()*1.88724);
}

double NNfunction_sb_dLsR::synapse0x2c3e540() {
   return (neuron0x2c15f70()*0.523732);
}

double NNfunction_sb_dLsR::synapse0x2c3e580() {
   return (neuron0x2c16940()*-0.0413156);
}

double NNfunction_sb_dLsR::synapse0x2c3e5c0() {
   return (neuron0x2c17310()*-0.879609);
}

double NNfunction_sb_dLsR::synapse0x2c3e600() {
   return (neuron0x2c17df0()*-0.025808);
}

double NNfunction_sb_dLsR::synapse0x2c3e640() {
   return (neuron0x2c187c0()*0.0234656);
}

double NNfunction_sb_dLsR::synapse0x2c3e680() {
   return (neuron0x2c158a0()*0.00376824);
}

double NNfunction_sb_dLsR::synapse0x2c3e6c0() {
   return (neuron0x2c1a370()*-0.0722141);
}

double NNfunction_sb_dLsR::synapse0x2c3e700() {
   return (neuron0x2c1ad40()*0.0482264);
}

double NNfunction_sb_dLsR::synapse0x2c3e740() {
   return (neuron0x2c1b710()*-1.09264);
}

double NNfunction_sb_dLsR::synapse0x2c3e780() {
   return (neuron0x2c1c0e0()*0.136811);
}

double NNfunction_sb_dLsR::synapse0x2c3e210() {
   return (neuron0x2c1def0()*0.0783964);
}

double NNfunction_sb_dLsR::synapse0x2c3e250() {
   return (neuron0x2c1e1d0()*0.114912);
}

double NNfunction_sb_dLsR::synapse0x2c3e8d0() {
   return (neuron0x2c1eba0()*0.00712059);
}

double NNfunction_sb_dLsR::synapse0x2c3e910() {
   return (neuron0x2c1f570()*-0.00943068);
}

double NNfunction_sb_dLsR::synapse0x2c3e950() {
   return (neuron0x2c1ff40()*-0.221849);
}

double NNfunction_sb_dLsR::synapse0x2c3e990() {
   return (neuron0x2c20910()*-0.000389593);
}

double NNfunction_sb_dLsR::synapse0x2c3e9d0() {
   return (neuron0x2c19460()*0.00978605);
}

double NNfunction_sb_dLsR::synapse0x2c3ea10() {
   return (neuron0x2c19e30()*0.10757);
}

double NNfunction_sb_dLsR::synapse0x2c3ea50() {
   return (neuron0x2c236a0()*0.0422293);
}

double NNfunction_sb_dLsR::synapse0x2c3ea90() {
   return (neuron0x2c24070()*0.0352967);
}

double NNfunction_sb_dLsR::synapse0x2c3ead0() {
   return (neuron0x2c24a40()*-0.0131864);
}

double NNfunction_sb_dLsR::synapse0x2c3eb10() {
   return (neuron0x2c25410()*1.23874);
}

double NNfunction_sb_dLsR::synapse0x2c3eb50() {
   return (neuron0x2c25de0()*0.223322);
}

double NNfunction_sb_dLsR::synapse0x2c3eb90() {
   return (neuron0x2c267b0()*0.0424345);
}

double NNfunction_sb_dLsR::synapse0x2c3ebd0() {
   return (neuron0x2c27180()*-1.05373);
}

double NNfunction_sb_dLsR::synapse0x2c3ec10() {
   return (neuron0x2c27b50()*0.00669786);
}

double NNfunction_sb_dLsR::synapse0x2c3e7c0() {
   return (neuron0x2c1dbe0()*-0.00771347);
}

double NNfunction_sb_dLsR::synapse0x2c3e800() {
   return (neuron0x2c2a730()*-0.754748);
}

double NNfunction_sb_dLsR::synapse0x2c3e840() {
   return (neuron0x2c2b100()*0.332673);
}

double NNfunction_sb_dLsR::synapse0x2c3e880() {
   return (neuron0x2c2bad0()*-0.419567);
}

double NNfunction_sb_dLsR::synapse0x2c3ee60() {
   return (neuron0x2c2c4a0()*0.00544636);
}

double NNfunction_sb_dLsR::synapse0x2c3eea0() {
   return (neuron0x2c2ce70()*-0.225075);
}

double NNfunction_sb_dLsR::synapse0x2c3eee0() {
   return (neuron0x2c2d840()*-0.0610719);
}

double NNfunction_sb_dLsR::synapse0x2c3ef20() {
   return (neuron0x2c2e210()*2.05326);
}

double NNfunction_sb_dLsR::synapse0x2c3ef60() {
   return (neuron0x2c2ebe0()*0.126536);
}

double NNfunction_sb_dLsR::synapse0x2c3efa0() {
   return (neuron0x2c2f7c0()*0.00766245);
}

double NNfunction_sb_dLsR::synapse0x2c3efe0() {
   return (neuron0x2c30190()*-0.0222406);
}

double NNfunction_sb_dLsR::synapse0x2c3f020() {
   return (neuron0x2c21010()*-0.784242);
}

double NNfunction_sb_dLsR::synapse0x2c3f060() {
   return (neuron0x2c219e0()*-0.00766737);
}

double NNfunction_sb_dLsR::synapse0x2c3f0a0() {
   return (neuron0x2c223b0()*0.0159092);
}

double NNfunction_sb_dLsR::synapse0x2c3f0e0() {
   return (neuron0x2c349f0()*-0.0188286);
}

double NNfunction_sb_dLsR::synapse0x2c3f120() {
   return (neuron0x2c352a0()*-0.0348472);
}

double NNfunction_sb_dLsR::synapse0x2c3f160() {
   return (neuron0x2c35c70()*0.0214664);
}

double NNfunction_sb_dLsR::synapse0x2c3f1a0() {
   return (neuron0x2c36640()*-0.0207928);
}

double NNfunction_sb_dLsR::synapse0x2c3f520() {
   return (neuron0x2c125c0()*-1.75074);
}

double NNfunction_sb_dLsR::synapse0x2c3f560() {
   return (neuron0x2c12ed0()*-2.58436);
}

double NNfunction_sb_dLsR::synapse0x2c3f5a0() {
   return (neuron0x2c139b0()*1.58533);
}

double NNfunction_sb_dLsR::synapse0x2c3f5e0() {
   return (neuron0x29cd240()*-0.0640417);
}

double NNfunction_sb_dLsR::synapse0x2c3f620() {
   return (neuron0x2c147d0()*0.777738);
}

double NNfunction_sb_dLsR::synapse0x2c3f660() {
   return (neuron0x2c151a0()*0.342363);
}

double NNfunction_sb_dLsR::synapse0x2c3f6a0() {
   return (neuron0x2c15f70()*-1.57458);
}

double NNfunction_sb_dLsR::synapse0x2c3f6e0() {
   return (neuron0x2c16940()*0.589774);
}

double NNfunction_sb_dLsR::synapse0x2c3f720() {
   return (neuron0x2c17310()*-4.16249);
}

double NNfunction_sb_dLsR::synapse0x2c3f760() {
   return (neuron0x2c17df0()*-1.09073);
}

double NNfunction_sb_dLsR::synapse0x2c3f7a0() {
   return (neuron0x2c187c0()*0.27087);
}

double NNfunction_sb_dLsR::synapse0x2c3f7e0() {
   return (neuron0x2c158a0()*0.35127);
}

double NNfunction_sb_dLsR::synapse0x2c3f820() {
   return (neuron0x2c1a370()*0.444662);
}

double NNfunction_sb_dLsR::synapse0x2c3f860() {
   return (neuron0x2c1ad40()*-1.19221);
}

double NNfunction_sb_dLsR::synapse0x2c3f8a0() {
   return (neuron0x2c1b710()*-0.00546332);
}

double NNfunction_sb_dLsR::synapse0x2c3f8e0() {
   return (neuron0x2c1c0e0()*-4.14455);
}

double NNfunction_sb_dLsR::synapse0x2c3f370() {
   return (neuron0x2c1def0()*-1.57985);
}

double NNfunction_sb_dLsR::synapse0x2c3f3b0() {
   return (neuron0x2c1e1d0()*-4.55761);
}

double NNfunction_sb_dLsR::synapse0x2c3fa30() {
   return (neuron0x2c1eba0()*1.49722);
}

double NNfunction_sb_dLsR::synapse0x2c3fa70() {
   return (neuron0x2c1f570()*-0.749925);
}

double NNfunction_sb_dLsR::synapse0x2c3fab0() {
   return (neuron0x2c1ff40()*0.0403536);
}

double NNfunction_sb_dLsR::synapse0x2c3faf0() {
   return (neuron0x2c20910()*1.74258);
}

double NNfunction_sb_dLsR::synapse0x2c3fb30() {
   return (neuron0x2c19460()*-0.315032);
}

double NNfunction_sb_dLsR::synapse0x2c3fb70() {
   return (neuron0x2c19e30()*0.516241);
}

double NNfunction_sb_dLsR::synapse0x2c3fbb0() {
   return (neuron0x2c236a0()*1.35363);
}

double NNfunction_sb_dLsR::synapse0x2c3fbf0() {
   return (neuron0x2c24070()*2.9623);
}

double NNfunction_sb_dLsR::synapse0x2c3fc30() {
   return (neuron0x2c24a40()*-1.25547);
}

double NNfunction_sb_dLsR::synapse0x2c3fc70() {
   return (neuron0x2c25410()*-2.343);
}

double NNfunction_sb_dLsR::synapse0x2c3fcb0() {
   return (neuron0x2c25de0()*0.488972);
}

double NNfunction_sb_dLsR::synapse0x2c3fcf0() {
   return (neuron0x2c267b0()*-1.26704);
}

double NNfunction_sb_dLsR::synapse0x2c3fd30() {
   return (neuron0x2c27180()*0.635955);
}

double NNfunction_sb_dLsR::synapse0x2c3fd70() {
   return (neuron0x2c27b50()*-0.491897);
}

double NNfunction_sb_dLsR::synapse0x2c3f920() {
   return (neuron0x2c1dbe0()*-0.55818);
}

double NNfunction_sb_dLsR::synapse0x2c3f960() {
   return (neuron0x2c2a730()*0.698575);
}

double NNfunction_sb_dLsR::synapse0x2c3f9a0() {
   return (neuron0x2c2b100()*4.34947);
}

double NNfunction_sb_dLsR::synapse0x2c3f9e0() {
   return (neuron0x2c2bad0()*-1.36387);
}

double NNfunction_sb_dLsR::synapse0x2c3ffc0() {
   return (neuron0x2c2c4a0()*-0.292911);
}

double NNfunction_sb_dLsR::synapse0x2c40000() {
   return (neuron0x2c2ce70()*2.34099);
}

double NNfunction_sb_dLsR::synapse0x2c40040() {
   return (neuron0x2c2d840()*-0.0985489);
}

double NNfunction_sb_dLsR::synapse0x2c40080() {
   return (neuron0x2c2e210()*0.636584);
}

double NNfunction_sb_dLsR::synapse0x2c400c0() {
   return (neuron0x2c2ebe0()*-0.481341);
}

double NNfunction_sb_dLsR::synapse0x2c40100() {
   return (neuron0x2c2f7c0()*2.1186);
}

double NNfunction_sb_dLsR::synapse0x2c40140() {
   return (neuron0x2c30190()*0.292152);
}

double NNfunction_sb_dLsR::synapse0x2c40180() {
   return (neuron0x2c21010()*1.55001);
}

double NNfunction_sb_dLsR::synapse0x2c401c0() {
   return (neuron0x2c219e0()*-1.14957);
}

double NNfunction_sb_dLsR::synapse0x2c40200() {
   return (neuron0x2c223b0()*-0.712322);
}

double NNfunction_sb_dLsR::synapse0x2c40240() {
   return (neuron0x2c349f0()*-0.72475);
}

double NNfunction_sb_dLsR::synapse0x2c40280() {
   return (neuron0x2c352a0()*-0.947864);
}

double NNfunction_sb_dLsR::synapse0x2c402c0() {
   return (neuron0x2c35c70()*1.0204);
}

double NNfunction_sb_dLsR::synapse0x2c40300() {
   return (neuron0x2c36640()*-0.542842);
}

double NNfunction_sb_dLsR::synapse0x2c40680() {
   return (neuron0x2c125c0()*1.0417);
}

double NNfunction_sb_dLsR::synapse0x2c406c0() {
   return (neuron0x2c12ed0()*0.106531);
}

double NNfunction_sb_dLsR::synapse0x2c40700() {
   return (neuron0x2c139b0()*0.523275);
}

double NNfunction_sb_dLsR::synapse0x2c40740() {
   return (neuron0x29cd240()*0.702919);
}

double NNfunction_sb_dLsR::synapse0x2c40780() {
   return (neuron0x2c147d0()*-0.259438);
}

double NNfunction_sb_dLsR::synapse0x2c407c0() {
   return (neuron0x2c151a0()*1.11148);
}

double NNfunction_sb_dLsR::synapse0x2c40800() {
   return (neuron0x2c15f70()*-0.796685);
}

double NNfunction_sb_dLsR::synapse0x2c40840() {
   return (neuron0x2c16940()*0.569984);
}

double NNfunction_sb_dLsR::synapse0x2c40880() {
   return (neuron0x2c17310()*-0.188878);
}

double NNfunction_sb_dLsR::synapse0x2c408c0() {
   return (neuron0x2c17df0()*0.471081);
}

double NNfunction_sb_dLsR::synapse0x2c40900() {
   return (neuron0x2c187c0()*0.652004);
}

double NNfunction_sb_dLsR::synapse0x2c40940() {
   return (neuron0x2c158a0()*0.647138);
}

double NNfunction_sb_dLsR::synapse0x2c40980() {
   return (neuron0x2c1a370()*0.588507);
}

double NNfunction_sb_dLsR::synapse0x2c409c0() {
   return (neuron0x2c1ad40()*0.360519);
}

double NNfunction_sb_dLsR::synapse0x2c40a00() {
   return (neuron0x2c1b710()*-0.240709);
}

double NNfunction_sb_dLsR::synapse0x2c40a40() {
   return (neuron0x2c1c0e0()*0.0128128);
}

double NNfunction_sb_dLsR::synapse0x2c404d0() {
   return (neuron0x2c1def0()*-0.156577);
}

double NNfunction_sb_dLsR::synapse0x2c40510() {
   return (neuron0x2c1e1d0()*0.319055);
}

double NNfunction_sb_dLsR::synapse0x2c40b90() {
   return (neuron0x2c1eba0()*0.523856);
}

double NNfunction_sb_dLsR::synapse0x2c40bd0() {
   return (neuron0x2c1f570()*0.902608);
}

double NNfunction_sb_dLsR::synapse0x2c40c10() {
   return (neuron0x2c1ff40()*0.515803);
}

double NNfunction_sb_dLsR::synapse0x2c40c50() {
   return (neuron0x2c20910()*0.107884);
}

double NNfunction_sb_dLsR::synapse0x2c40c90() {
   return (neuron0x2c19460()*0.354267);
}

double NNfunction_sb_dLsR::synapse0x2c40cd0() {
   return (neuron0x2c19e30()*0.0481839);
}

double NNfunction_sb_dLsR::synapse0x2c40d10() {
   return (neuron0x2c236a0()*0.658604);
}

double NNfunction_sb_dLsR::synapse0x2c40d50() {
   return (neuron0x2c24070()*0.00271142);
}

double NNfunction_sb_dLsR::synapse0x2c40d90() {
   return (neuron0x2c24a40()*0.591645);
}

double NNfunction_sb_dLsR::synapse0x2c40dd0() {
   return (neuron0x2c25410()*0.254557);
}

double NNfunction_sb_dLsR::synapse0x2c40e10() {
   return (neuron0x2c25de0()*-0.0636899);
}

double NNfunction_sb_dLsR::synapse0x2c40e50() {
   return (neuron0x2c267b0()*0.0185773);
}

double NNfunction_sb_dLsR::synapse0x2c40e90() {
   return (neuron0x2c27180()*0.421197);
}

double NNfunction_sb_dLsR::synapse0x2c40ed0() {
   return (neuron0x2c27b50()*0.73556);
}

double NNfunction_sb_dLsR::synapse0x2c40a80() {
   return (neuron0x2c1dbe0()*-0.160907);
}

double NNfunction_sb_dLsR::synapse0x2c40ac0() {
   return (neuron0x2c2a730()*0.78754);
}

double NNfunction_sb_dLsR::synapse0x2c40b00() {
   return (neuron0x2c2b100()*0.605013);
}

double NNfunction_sb_dLsR::synapse0x2c40b40() {
   return (neuron0x2c2bad0()*-0.144682);
}

double NNfunction_sb_dLsR::synapse0x2c41120() {
   return (neuron0x2c2c4a0()*0.0427177);
}

double NNfunction_sb_dLsR::synapse0x2c41160() {
   return (neuron0x2c2ce70()*0.782381);
}

double NNfunction_sb_dLsR::synapse0x2c411a0() {
   return (neuron0x2c2d840()*0.348241);
}

double NNfunction_sb_dLsR::synapse0x2c411e0() {
   return (neuron0x2c2e210()*0.872808);
}

double NNfunction_sb_dLsR::synapse0x2c41220() {
   return (neuron0x2c2ebe0()*0.146586);
}

double NNfunction_sb_dLsR::synapse0x2c41260() {
   return (neuron0x2c2f7c0()*0.367154);
}

double NNfunction_sb_dLsR::synapse0x2c412a0() {
   return (neuron0x2c30190()*0.0140594);
}

double NNfunction_sb_dLsR::synapse0x2c412e0() {
   return (neuron0x2c21010()*0.194851);
}

double NNfunction_sb_dLsR::synapse0x2c41320() {
   return (neuron0x2c219e0()*-0.171996);
}

double NNfunction_sb_dLsR::synapse0x2c41360() {
   return (neuron0x2c223b0()*0.577258);
}

double NNfunction_sb_dLsR::synapse0x2c413a0() {
   return (neuron0x2c349f0()*0.579691);
}

double NNfunction_sb_dLsR::synapse0x2c413e0() {
   return (neuron0x2c352a0()*0.250851);
}

double NNfunction_sb_dLsR::synapse0x2c41420() {
   return (neuron0x2c35c70()*-0.429225);
}

double NNfunction_sb_dLsR::synapse0x2c41460() {
   return (neuron0x2c36640()*0.014861);
}

double NNfunction_sb_dLsR::synapse0x2c12580() {
   return (neuron0x2c3d840()*-6.74706);
}

double NNfunction_sb_dLsR::synapse0x2c416c0() {
   return (neuron0x2c3dbe0()*9.14854);
}

double NNfunction_sb_dLsR::synapse0x2c41700() {
   return (neuron0x2c3e080()*-7.0092);
}

double NNfunction_sb_dLsR::synapse0x2c41740() {
   return (neuron0x2c3f1e0()*-6.35355);
}

double NNfunction_sb_dLsR::synapse0x2c41780() {
   return (neuron0x2c40340()*4.41066);
}

