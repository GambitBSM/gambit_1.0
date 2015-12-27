#include "NNfunction_ss_uRsR.h"
#include <cmath>

double NNfunction_ss_uRsR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.7617)/15.0293;
   input1 = (in1 - 65.2016)/703.195;
   input2 = (in2 - 365.777)/446.427;
   input3 = (in3 - 342.822)/613.943;
   input4 = (in4 - 758.122)/659.987;
   input5 = (in5 - 658.316)/634.74;
   input6 = (in6 - 665.559)/642.509;
   input7 = (in7 - 652.82)/630.237;
   input8 = (in8 - 645.593)/651.884;
   input9 = (in9 - 639.043)/640.844;
   input10 = (in10 - 637.506)/658.03;
   input11 = (in11 - 729.66)/552.951;
   input12 = (in12 - 733.045)/559.411;
   input13 = (in13 - 577.872)/361.244;
   input14 = (in14 - 621.395)/362.88;
   input15 = (in15 - 728.711)/538.173;
   input16 = (in16 - 511.869)/378.305;
   input17 = (in17 - 735.439)/569.408;
   input18 = (in18 - 609.918)/362.728;
   input19 = (in19 - 729.72)/563.681;
   input20 = (in20 - -262.524)/424.372;
   input21 = (in21 - -338.417)/899.681;
   input22 = (in22 - -4.4595)/881.881;
   input23 = (in23 - 16.922)/515.567;
   switch(index) {
     case 0:
         return neuron0x2a242c0();
     default:
         return 0.;
   }
}

double NNfunction_ss_uRsR::Value(int index, double* input) {
   input0 = (input[0] - 22.7617)/15.0293;
   input1 = (input[1] - 65.2016)/703.195;
   input2 = (input[2] - 365.777)/446.427;
   input3 = (input[3] - 342.822)/613.943;
   input4 = (input[4] - 758.122)/659.987;
   input5 = (input[5] - 658.316)/634.74;
   input6 = (input[6] - 665.559)/642.509;
   input7 = (input[7] - 652.82)/630.237;
   input8 = (input[8] - 645.593)/651.884;
   input9 = (input[9] - 639.043)/640.844;
   input10 = (input[10] - 637.506)/658.03;
   input11 = (input[11] - 729.66)/552.951;
   input12 = (input[12] - 733.045)/559.411;
   input13 = (input[13] - 577.872)/361.244;
   input14 = (input[14] - 621.395)/362.88;
   input15 = (input[15] - 728.711)/538.173;
   input16 = (input[16] - 511.869)/378.305;
   input17 = (input[17] - 735.439)/569.408;
   input18 = (input[18] - 609.918)/362.728;
   input19 = (input[19] - 729.72)/563.681;
   input20 = (input[20] - -262.524)/424.372;
   input21 = (input[21] - -338.417)/899.681;
   input22 = (input[22] - -4.4595)/881.881;
   input23 = (input[23] - 16.922)/515.567;
   switch(index) {
     case 0:
         return neuron0x2a242c0();
     default:
         return 0.;
   }
}

double NNfunction_ss_uRsR::neuron0x29f03b0() {
   return input0;
}

double NNfunction_ss_uRsR::neuron0x29f06f0() {
   return input1;
}

double NNfunction_ss_uRsR::neuron0x29f0a30() {
   return input2;
}

double NNfunction_ss_uRsR::neuron0x29f0d70() {
   return input3;
}

double NNfunction_ss_uRsR::neuron0x29f10b0() {
   return input4;
}

double NNfunction_ss_uRsR::neuron0x29f13f0() {
   return input5;
}

double NNfunction_ss_uRsR::neuron0x29f1730() {
   return input6;
}

double NNfunction_ss_uRsR::neuron0x29f1a70() {
   return input7;
}

double NNfunction_ss_uRsR::neuron0x29f1db0() {
   return input8;
}

double NNfunction_ss_uRsR::neuron0x29f20f0() {
   return input9;
}

double NNfunction_ss_uRsR::neuron0x29f2430() {
   return input10;
}

double NNfunction_ss_uRsR::neuron0x29f2770() {
   return input11;
}

double NNfunction_ss_uRsR::neuron0x29f2ab0() {
   return input12;
}

double NNfunction_ss_uRsR::neuron0x29f2df0() {
   return input13;
}

double NNfunction_ss_uRsR::neuron0x29f3130() {
   return input14;
}

double NNfunction_ss_uRsR::neuron0x29f3470() {
   return input15;
}

double NNfunction_ss_uRsR::neuron0x29f37b0() {
   return input16;
}

double NNfunction_ss_uRsR::neuron0x29f3d10() {
   return input17;
}

double NNfunction_ss_uRsR::neuron0x29f3f30() {
   return input18;
}

double NNfunction_ss_uRsR::neuron0x29f4270() {
   return input19;
}

double NNfunction_ss_uRsR::neuron0x29f45b0() {
   return input20;
}

double NNfunction_ss_uRsR::neuron0x29f48f0() {
   return input21;
}

double NNfunction_ss_uRsR::neuron0x29f4c30() {
   return input22;
}

double NNfunction_ss_uRsR::neuron0x29f4f70() {
   return input23;
}

double NNfunction_ss_uRsR::input0x29f53e0() {
   double input = -2.73304;
   input += synapse0x29f0270();
   input += synapse0x29f02b0();
   input += synapse0x29f5690();
   input += synapse0x29f56d0();
   input += synapse0x29f5710();
   input += synapse0x29f5750();
   input += synapse0x29f5790();
   input += synapse0x29f57d0();
   input += synapse0x29f5810();
   input += synapse0x29f5850();
   input += synapse0x29f5890();
   input += synapse0x29f58d0();
   input += synapse0x29f5910();
   input += synapse0x29f5950();
   input += synapse0x29f5990();
   input += synapse0x29f59d0();
   input += synapse0x29f01e0();
   input += synapse0x29f0220();
   input += synapse0x27ab590();
   input += synapse0x27ab5d0();
   input += synapse0x29f5c30();
   input += synapse0x29f5c70();
   input += synapse0x29f5cb0();
   input += synapse0x29f5cf0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x29f53e0() {
   double input = input0x29f53e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x29f5d30() {
   double input = -0.685472;
   input += synapse0x29f6070();
   input += synapse0x29f60b0();
   input += synapse0x29f60f0();
   input += synapse0x29f6130();
   input += synapse0x29f6170();
   input += synapse0x29f61b0();
   input += synapse0x29f61f0();
   input += synapse0x29f6230();
   input += synapse0x29f6270();
   input += synapse0x29f5b20();
   input += synapse0x29f5b60();
   input += synapse0x29f5ba0();
   input += synapse0x29f5be0();
   input += synapse0x29f64c0();
   input += synapse0x29f6500();
   input += synapse0x29f6540();
   input += synapse0x29f5ec0();
   input += synapse0x29f5f00();
   input += synapse0x29f6690();
   input += synapse0x29f66d0();
   input += synapse0x29f6710();
   input += synapse0x29f6750();
   input += synapse0x29f6790();
   input += synapse0x29f67d0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x29f5d30() {
   double input = input0x29f5d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x29f6810() {
   double input = 0.57466;
   input += synapse0x29f6b50();
   input += synapse0x29f6b90();
   input += synapse0x29f6bd0();
   input += synapse0x29f6c10();
   input += synapse0x29f6c50();
   input += synapse0x29f6c90();
   input += synapse0x29f6cd0();
   input += synapse0x29f6d10();
   input += synapse0x29f6d50();
   input += synapse0x29f6d90();
   input += synapse0x29f6dd0();
   input += synapse0x29f6e10();
   input += synapse0x29f6e50();
   input += synapse0x29f6e90();
   input += synapse0x29f6ed0();
   input += synapse0x29f6f10();
   input += synapse0x29f69a0();
   input += synapse0x29f69e0();
   input += synapse0x27abc40();
   input += synapse0x27b9510();
   input += synapse0x27b9550();
   input += synapse0x29df440();
   input += synapse0x29df480();
   input += synapse0x29df4c0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x29f6810() {
   double input = input0x29f6810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x29f62b0() {
   double input = 0.114098;
   input += synapse0x27b9d90();
   input += synapse0x29f6440();
   input += synapse0x29f6480();
   input += synapse0x29f7060();
   input += synapse0x29f70a0();
   input += synapse0x29f70e0();
   input += synapse0x29f7120();
   input += synapse0x29f7160();
   input += synapse0x29f71a0();
   input += synapse0x29f71e0();
   input += synapse0x29f7220();
   input += synapse0x29f7260();
   input += synapse0x29f72a0();
   input += synapse0x29f72e0();
   input += synapse0x29f7320();
   input += synapse0x29f7360();
   input += synapse0x29f02f0();
   input += synapse0x29f0330();
   input += synapse0x29f0370();
   input += synapse0x29f74b0();
   input += synapse0x29f74f0();
   input += synapse0x29f7530();
   input += synapse0x29f7570();
   input += synapse0x29f75b0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x29f62b0() {
   double input = input0x29f62b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x29f75f0() {
   double input = -0.323631;
   input += synapse0x29f7930();
   input += synapse0x29f7970();
   input += synapse0x29f79b0();
   input += synapse0x29f79f0();
   input += synapse0x29f7a30();
   input += synapse0x29f7a70();
   input += synapse0x29f7ab0();
   input += synapse0x29f7af0();
   input += synapse0x29f7b30();
   input += synapse0x29f7b70();
   input += synapse0x29f7bb0();
   input += synapse0x29f7bf0();
   input += synapse0x29f7c30();
   input += synapse0x29f7c70();
   input += synapse0x29f7cb0();
   input += synapse0x29f7cf0();
   input += synapse0x29f7780();
   input += synapse0x29f77c0();
   input += synapse0x29f7e40();
   input += synapse0x29f7e80();
   input += synapse0x29f7ec0();
   input += synapse0x29f7f00();
   input += synapse0x29f7f40();
   input += synapse0x29f7f80();
   return input;
}

double NNfunction_ss_uRsR::neuron0x29f75f0() {
   double input = input0x29f75f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x29f7fc0() {
   double input = 1.49755;
   input += synapse0x29f8300();
   input += synapse0x29f8340();
   input += synapse0x29f8380();
   input += synapse0x29f83c0();
   input += synapse0x29f8400();
   input += synapse0x29f8440();
   input += synapse0x29f8480();
   input += synapse0x29f84c0();
   input += synapse0x29f8500();
   input += synapse0x27b9860();
   input += synapse0x27b98a0();
   input += synapse0x27b98e0();
   input += synapse0x27b9920();
   input += synapse0x27b9960();
   input += synapse0x27b99a0();
   input += synapse0x27b99e0();
   input += synapse0x29f8150();
   input += synapse0x29f8190();
   input += synapse0x27b9b30();
   input += synapse0x27b9b70();
   input += synapse0x27b9bb0();
   input += synapse0x27b9bf0();
   input += synapse0x27b9c30();
   input += synapse0x29f8d50();
   return input;
}

double NNfunction_ss_uRsR::neuron0x29f7fc0() {
   double input = input0x29f7fc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x29f8d90() {
   double input = -0.0733867;
   input += synapse0x29f90d0();
   input += synapse0x29f9110();
   input += synapse0x29f9150();
   input += synapse0x29f9190();
   input += synapse0x29f91d0();
   input += synapse0x29f9210();
   input += synapse0x29f9250();
   input += synapse0x29f9290();
   input += synapse0x29f92d0();
   input += synapse0x29f9310();
   input += synapse0x29f9350();
   input += synapse0x29f9390();
   input += synapse0x29f93d0();
   input += synapse0x29f9410();
   input += synapse0x29f9450();
   input += synapse0x29f9490();
   input += synapse0x29f8f20();
   input += synapse0x29f8f60();
   input += synapse0x29f95e0();
   input += synapse0x29f9620();
   input += synapse0x29f9660();
   input += synapse0x29f96a0();
   input += synapse0x29f96e0();
   input += synapse0x29f9720();
   return input;
}

double NNfunction_ss_uRsR::neuron0x29f8d90() {
   double input = input0x29f8d90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x29f9760() {
   double input = 1.80488;
   input += synapse0x29f9aa0();
   input += synapse0x29f9ae0();
   input += synapse0x29f9b20();
   input += synapse0x29f9b60();
   input += synapse0x29f9ba0();
   input += synapse0x29f9be0();
   input += synapse0x29f9c20();
   input += synapse0x29f9c60();
   input += synapse0x29f9ca0();
   input += synapse0x29f9ce0();
   input += synapse0x29f9d20();
   input += synapse0x29f9d60();
   input += synapse0x29f9da0();
   input += synapse0x29f9de0();
   input += synapse0x29f9e20();
   input += synapse0x29f9e60();
   input += synapse0x29f98f0();
   input += synapse0x29f9930();
   input += synapse0x29f9fb0();
   input += synapse0x29f9ff0();
   input += synapse0x29fa030();
   input += synapse0x29fa070();
   input += synapse0x29fa0b0();
   input += synapse0x29fa0f0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x29f9760() {
   double input = input0x29f9760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x29fa130() {
   double input = 4.30387;
   input += synapse0x29f3c00();
   input += synapse0x29f3c40();
   input += synapse0x29f3c80();
   input += synapse0x29f3cc0();
   input += synapse0x29fa680();
   input += synapse0x29fa6c0();
   input += synapse0x29fa700();
   input += synapse0x29fa740();
   input += synapse0x29fa780();
   input += synapse0x29fa7c0();
   input += synapse0x29fa800();
   input += synapse0x29fa840();
   input += synapse0x29fa880();
   input += synapse0x29fa8c0();
   input += synapse0x29fa900();
   input += synapse0x29fa940();
   input += synapse0x29fa2c0();
   input += synapse0x29fa300();
   input += synapse0x29faa90();
   input += synapse0x29faad0();
   input += synapse0x29fab10();
   input += synapse0x29fab50();
   input += synapse0x29fab90();
   input += synapse0x29fabd0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x29fa130() {
   double input = input0x29fa130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x29fac10() {
   double input = -0.985983;
   input += synapse0x29faf50();
   input += synapse0x29faf90();
   input += synapse0x29fafd0();
   input += synapse0x29fb010();
   input += synapse0x29fb050();
   input += synapse0x29fb090();
   input += synapse0x29fb0d0();
   input += synapse0x29fb110();
   input += synapse0x29fb150();
   input += synapse0x29fb190();
   input += synapse0x29fb1d0();
   input += synapse0x29fb210();
   input += synapse0x29fb250();
   input += synapse0x29fb290();
   input += synapse0x29fb2d0();
   input += synapse0x29fb310();
   input += synapse0x29fada0();
   input += synapse0x29fade0();
   input += synapse0x29fb460();
   input += synapse0x29fb4a0();
   input += synapse0x29fb4e0();
   input += synapse0x29fb520();
   input += synapse0x29fb560();
   input += synapse0x29fb5a0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x29fac10() {
   double input = input0x29fac10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x29fb5e0() {
   double input = 0.792119;
   input += synapse0x29fb920();
   input += synapse0x29fb960();
   input += synapse0x29fb9a0();
   input += synapse0x29fb9e0();
   input += synapse0x29fba20();
   input += synapse0x29fba60();
   input += synapse0x29fbaa0();
   input += synapse0x29fbae0();
   input += synapse0x29fbb20();
   input += synapse0x29fbb60();
   input += synapse0x29fbba0();
   input += synapse0x29fbbe0();
   input += synapse0x29fbc20();
   input += synapse0x29fbc60();
   input += synapse0x29fbca0();
   input += synapse0x29fbce0();
   input += synapse0x29fb770();
   input += synapse0x29fb7b0();
   input += synapse0x29f8540();
   input += synapse0x29f8580();
   input += synapse0x29f85c0();
   input += synapse0x29f8600();
   input += synapse0x29f8640();
   input += synapse0x29f8680();
   return input;
}

double NNfunction_ss_uRsR::neuron0x29fb5e0() {
   double input = input0x29fb5e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x29f86c0() {
   double input = -0.727112;
   input += synapse0x29f8a00();
   input += synapse0x29f8a40();
   input += synapse0x29f8a80();
   input += synapse0x29f8ac0();
   input += synapse0x29f8b00();
   input += synapse0x29f8b40();
   input += synapse0x29f8b80();
   input += synapse0x29f8bc0();
   input += synapse0x29f8c00();
   input += synapse0x29f8c40();
   input += synapse0x29f8c80();
   input += synapse0x29f8cc0();
   input += synapse0x29f8d00();
   input += synapse0x29fce40();
   input += synapse0x29fce80();
   input += synapse0x29fcec0();
   input += synapse0x29f8850();
   input += synapse0x29f8890();
   input += synapse0x29fd010();
   input += synapse0x29fd050();
   input += synapse0x29fd090();
   input += synapse0x29fd0d0();
   input += synapse0x29fd110();
   input += synapse0x29fd150();
   return input;
}

double NNfunction_ss_uRsR::neuron0x29f86c0() {
   double input = input0x29f86c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x29fd190() {
   double input = 2.1332;
   input += synapse0x29fd4d0();
   input += synapse0x29fd510();
   input += synapse0x29fd550();
   input += synapse0x29fd590();
   input += synapse0x29fd5d0();
   input += synapse0x29fd610();
   input += synapse0x29fd650();
   input += synapse0x29fd690();
   input += synapse0x29fd6d0();
   input += synapse0x29fd710();
   input += synapse0x29fd750();
   input += synapse0x29fd790();
   input += synapse0x29fd7d0();
   input += synapse0x29fd810();
   input += synapse0x29fd850();
   input += synapse0x29fd890();
   input += synapse0x29fd320();
   input += synapse0x29fd360();
   input += synapse0x29fd9e0();
   input += synapse0x29fda20();
   input += synapse0x29fda60();
   input += synapse0x29fdaa0();
   input += synapse0x29fdae0();
   input += synapse0x29fdb20();
   return input;
}

double NNfunction_ss_uRsR::neuron0x29fd190() {
   double input = input0x29fd190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x29fdb60() {
   double input = 1.07446;
   input += synapse0x29fdea0();
   input += synapse0x29fdee0();
   input += synapse0x29fdf20();
   input += synapse0x29fdf60();
   input += synapse0x29fdfa0();
   input += synapse0x29fdfe0();
   input += synapse0x29fe020();
   input += synapse0x29fe060();
   input += synapse0x29fe0a0();
   input += synapse0x29fe0e0();
   input += synapse0x29fe120();
   input += synapse0x29fe160();
   input += synapse0x29fe1a0();
   input += synapse0x29fe1e0();
   input += synapse0x29fe220();
   input += synapse0x29fe260();
   input += synapse0x29fdcf0();
   input += synapse0x29fdd30();
   input += synapse0x29fe3b0();
   input += synapse0x29fe3f0();
   input += synapse0x29fe430();
   input += synapse0x29fe470();
   input += synapse0x29fe4b0();
   input += synapse0x29fe4f0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x29fdb60() {
   double input = input0x29fdb60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x29fe530() {
   double input = 1.33205;
   input += synapse0x29fe870();
   input += synapse0x29fe8b0();
   input += synapse0x29fe8f0();
   input += synapse0x29fe930();
   input += synapse0x29fe970();
   input += synapse0x29fe9b0();
   input += synapse0x29fe9f0();
   input += synapse0x29fea30();
   input += synapse0x29fea70();
   input += synapse0x29feab0();
   input += synapse0x29feaf0();
   input += synapse0x29feb30();
   input += synapse0x29feb70();
   input += synapse0x29febb0();
   input += synapse0x29febf0();
   input += synapse0x29fec30();
   input += synapse0x29fe6c0();
   input += synapse0x29fe700();
   input += synapse0x29fed80();
   input += synapse0x29fedc0();
   input += synapse0x29fee00();
   input += synapse0x29fee40();
   input += synapse0x29fee80();
   input += synapse0x29feec0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x29fe530() {
   double input = input0x29fe530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x29fef00() {
   double input = 0.933533;
   input += synapse0x29ff240();
   input += synapse0x29f05d0();
   input += synapse0x29f0610();
   input += synapse0x29f0910();
   input += synapse0x29f0950();
   input += synapse0x29f0c50();
   input += synapse0x29f0c90();
   input += synapse0x29f0f90();
   input += synapse0x29f0fd0();
   input += synapse0x29f12d0();
   input += synapse0x29f1310();
   input += synapse0x29f1610();
   input += synapse0x29f1650();
   input += synapse0x29f1950();
   input += synapse0x29f1990();
   input += synapse0x29f1c90();
   input += synapse0x29f1cd0();
   input += synapse0x29f1fd0();
   input += synapse0x29f2010();
   input += synapse0x29f2310();
   input += synapse0x29f2350();
   input += synapse0x29f2650();
   input += synapse0x29f2690();
   input += synapse0x29f2990();
   return input;
}

double NNfunction_ss_uRsR::neuron0x29fef00() {
   double input = input0x29fef00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x2a00d10() {
   double input = 0.098652;
   input += synapse0x29f29d0();
   input += synapse0x29f3690();
   input += synapse0x29f36d0();
   input += synapse0x29ff090();
   input += synapse0x29ff0d0();
   input += synapse0x29f39d0();
   input += synapse0x29f3a10();
   input += synapse0x27ab470();
   input += synapse0x27ab4b0();
   input += synapse0x29f4150();
   input += synapse0x29f4190();
   input += synapse0x29f4490();
   input += synapse0x29f44d0();
   input += synapse0x29f47d0();
   input += synapse0x29f4810();
   input += synapse0x29f4b10();
   input += synapse0x29f4b50();
   input += synapse0x29f4e50();
   input += synapse0x29f4e90();
   input += synapse0x29f5190();
   input += synapse0x29f51d0();
   input += synapse0x29f2cd0();
   input += synapse0x29f2d10();
   input += synapse0x2a00fb0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x2a00d10() {
   double input = input0x2a00d10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x2a00ff0() {
   double input = -0.474192;
   input += synapse0x2a01330();
   input += synapse0x2a01370();
   input += synapse0x2a013b0();
   input += synapse0x2a013f0();
   input += synapse0x2a01430();
   input += synapse0x2a01470();
   input += synapse0x2a014b0();
   input += synapse0x2a014f0();
   input += synapse0x2a01530();
   input += synapse0x2a01570();
   input += synapse0x2a015b0();
   input += synapse0x2a015f0();
   input += synapse0x2a01630();
   input += synapse0x2a01670();
   input += synapse0x2a016b0();
   input += synapse0x2a016f0();
   input += synapse0x2a01180();
   input += synapse0x2a011c0();
   input += synapse0x2a01840();
   input += synapse0x2a01880();
   input += synapse0x2a018c0();
   input += synapse0x2a01900();
   input += synapse0x2a01940();
   input += synapse0x2a01980();
   return input;
}

double NNfunction_ss_uRsR::neuron0x2a00ff0() {
   double input = input0x2a00ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x2a019c0() {
   double input = 2.42424;
   input += synapse0x2a01d00();
   input += synapse0x2a01d40();
   input += synapse0x2a01d80();
   input += synapse0x2a01dc0();
   input += synapse0x2a01e00();
   input += synapse0x2a01e40();
   input += synapse0x2a01e80();
   input += synapse0x2a01ec0();
   input += synapse0x2a01f00();
   input += synapse0x2a01f40();
   input += synapse0x2a01f80();
   input += synapse0x2a01fc0();
   input += synapse0x2a02000();
   input += synapse0x2a02040();
   input += synapse0x2a02080();
   input += synapse0x2a020c0();
   input += synapse0x2a01b50();
   input += synapse0x2a01b90();
   input += synapse0x2a02210();
   input += synapse0x2a02250();
   input += synapse0x2a02290();
   input += synapse0x2a022d0();
   input += synapse0x2a02310();
   input += synapse0x2a02350();
   return input;
}

double NNfunction_ss_uRsR::neuron0x2a019c0() {
   double input = input0x2a019c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x2a02390() {
   double input = 0.980634;
   input += synapse0x2a026d0();
   input += synapse0x2a02710();
   input += synapse0x2a02750();
   input += synapse0x2a02790();
   input += synapse0x2a027d0();
   input += synapse0x2a02810();
   input += synapse0x2a02850();
   input += synapse0x2a02890();
   input += synapse0x2a028d0();
   input += synapse0x2a02910();
   input += synapse0x2a02950();
   input += synapse0x2a02990();
   input += synapse0x2a029d0();
   input += synapse0x2a02a10();
   input += synapse0x2a02a50();
   input += synapse0x2a02a90();
   input += synapse0x2a02520();
   input += synapse0x2a02560();
   input += synapse0x2a02be0();
   input += synapse0x2a02c20();
   input += synapse0x2a02c60();
   input += synapse0x2a02ca0();
   input += synapse0x2a02ce0();
   input += synapse0x2a02d20();
   return input;
}

double NNfunction_ss_uRsR::neuron0x2a02390() {
   double input = input0x2a02390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x2a02d60() {
   double input = 1.46262;
   input += synapse0x2a030a0();
   input += synapse0x2a030e0();
   input += synapse0x2a03120();
   input += synapse0x2a03160();
   input += synapse0x2a031a0();
   input += synapse0x2a031e0();
   input += synapse0x2a03220();
   input += synapse0x2a03260();
   input += synapse0x2a032a0();
   input += synapse0x2a032e0();
   input += synapse0x2a03320();
   input += synapse0x2a03360();
   input += synapse0x2a033a0();
   input += synapse0x2a033e0();
   input += synapse0x2a03420();
   input += synapse0x2a03460();
   input += synapse0x2a02ef0();
   input += synapse0x2a02f30();
   input += synapse0x2a035b0();
   input += synapse0x2a035f0();
   input += synapse0x2a03630();
   input += synapse0x2a03670();
   input += synapse0x2a036b0();
   input += synapse0x2a036f0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x2a02d60() {
   double input = input0x2a02d60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x2a03730() {
   double input = 1.11884;
   input += synapse0x2a03a70();
   input += synapse0x2a03ab0();
   input += synapse0x2a03af0();
   input += synapse0x2a03b30();
   input += synapse0x2a03b70();
   input += synapse0x2a03bb0();
   input += synapse0x2a03bf0();
   input += synapse0x2a03c30();
   input += synapse0x2a03c70();
   input += synapse0x29fbe30();
   input += synapse0x29fbe70();
   input += synapse0x29fbeb0();
   input += synapse0x29fbef0();
   input += synapse0x29fbf30();
   input += synapse0x29fbf70();
   input += synapse0x29fbfb0();
   input += synapse0x2a038c0();
   input += synapse0x2a03900();
   input += synapse0x29fc100();
   input += synapse0x29fc140();
   input += synapse0x29fc180();
   input += synapse0x29fc1c0();
   input += synapse0x29fc200();
   input += synapse0x29fc240();
   return input;
}

double NNfunction_ss_uRsR::neuron0x2a03730() {
   double input = input0x2a03730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x29fc280() {
   double input = -0.926228;
   input += synapse0x29fc5c0();
   input += synapse0x29fc600();
   input += synapse0x29fc640();
   input += synapse0x29fc680();
   input += synapse0x29fc6c0();
   input += synapse0x29fc700();
   input += synapse0x29fc740();
   input += synapse0x29fc780();
   input += synapse0x29fc7c0();
   input += synapse0x29fc800();
   input += synapse0x29fc840();
   input += synapse0x29fc880();
   input += synapse0x29fc8c0();
   input += synapse0x29fc900();
   input += synapse0x29fc940();
   input += synapse0x29fc980();
   input += synapse0x29fc410();
   input += synapse0x29fc450();
   input += synapse0x29fcad0();
   input += synapse0x29fcb10();
   input += synapse0x29fcb50();
   input += synapse0x29fcb90();
   input += synapse0x29fcbd0();
   input += synapse0x29fcc10();
   return input;
}

double NNfunction_ss_uRsR::neuron0x29fc280() {
   double input = input0x29fc280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x29fcc50() {
   double input = 1.35705;
   input += synapse0x29fcde0();
   input += synapse0x2a05e70();
   input += synapse0x2a05eb0();
   input += synapse0x2a05ef0();
   input += synapse0x2a05f30();
   input += synapse0x2a05f70();
   input += synapse0x2a05fb0();
   input += synapse0x2a05ff0();
   input += synapse0x2a06030();
   input += synapse0x2a06070();
   input += synapse0x2a060b0();
   input += synapse0x2a060f0();
   input += synapse0x2a06130();
   input += synapse0x2a06170();
   input += synapse0x2a061b0();
   input += synapse0x2a061f0();
   input += synapse0x2a05cc0();
   input += synapse0x2a05d00();
   input += synapse0x2a06340();
   input += synapse0x2a06380();
   input += synapse0x2a063c0();
   input += synapse0x2a06400();
   input += synapse0x2a06440();
   input += synapse0x2a06480();
   return input;
}

double NNfunction_ss_uRsR::neuron0x29fcc50() {
   double input = input0x29fcc50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x2a064c0() {
   double input = -1.99318;
   input += synapse0x2a06800();
   input += synapse0x2a06840();
   input += synapse0x2a06880();
   input += synapse0x2a068c0();
   input += synapse0x2a06900();
   input += synapse0x2a06940();
   input += synapse0x2a06980();
   input += synapse0x2a069c0();
   input += synapse0x2a06a00();
   input += synapse0x2a06a40();
   input += synapse0x2a06a80();
   input += synapse0x2a06ac0();
   input += synapse0x2a06b00();
   input += synapse0x2a06b40();
   input += synapse0x2a06b80();
   input += synapse0x2a06bc0();
   input += synapse0x2a06650();
   input += synapse0x2a06690();
   input += synapse0x2a06d10();
   input += synapse0x2a06d50();
   input += synapse0x2a06d90();
   input += synapse0x2a06dd0();
   input += synapse0x2a06e10();
   input += synapse0x2a06e50();
   return input;
}

double NNfunction_ss_uRsR::neuron0x2a064c0() {
   double input = input0x2a064c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x2a06e90() {
   double input = -0.215064;
   input += synapse0x2a071d0();
   input += synapse0x2a07210();
   input += synapse0x2a07250();
   input += synapse0x2a07290();
   input += synapse0x2a072d0();
   input += synapse0x2a07310();
   input += synapse0x2a07350();
   input += synapse0x2a07390();
   input += synapse0x2a073d0();
   input += synapse0x2a07410();
   input += synapse0x2a07450();
   input += synapse0x2a07490();
   input += synapse0x2a074d0();
   input += synapse0x2a07510();
   input += synapse0x2a07550();
   input += synapse0x2a07590();
   input += synapse0x2a07020();
   input += synapse0x2a07060();
   input += synapse0x2a076e0();
   input += synapse0x2a07720();
   input += synapse0x2a07760();
   input += synapse0x2a077a0();
   input += synapse0x2a077e0();
   input += synapse0x2a07820();
   return input;
}

double NNfunction_ss_uRsR::neuron0x2a06e90() {
   double input = input0x2a06e90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x2a07860() {
   double input = -0.394441;
   input += synapse0x2a07ba0();
   input += synapse0x2a07be0();
   input += synapse0x2a07c20();
   input += synapse0x2a07c60();
   input += synapse0x2a07ca0();
   input += synapse0x2a07ce0();
   input += synapse0x2a07d20();
   input += synapse0x2a07d60();
   input += synapse0x2a07da0();
   input += synapse0x2a07de0();
   input += synapse0x2a07e20();
   input += synapse0x2a07e60();
   input += synapse0x2a07ea0();
   input += synapse0x2a07ee0();
   input += synapse0x2a07f20();
   input += synapse0x2a07f60();
   input += synapse0x2a079f0();
   input += synapse0x2a07a30();
   input += synapse0x2a080b0();
   input += synapse0x2a080f0();
   input += synapse0x2a08130();
   input += synapse0x2a08170();
   input += synapse0x2a081b0();
   input += synapse0x2a081f0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x2a07860() {
   double input = input0x2a07860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x2a08230() {
   double input = -1.83236;
   input += synapse0x2a08570();
   input += synapse0x2a085b0();
   input += synapse0x2a085f0();
   input += synapse0x2a08630();
   input += synapse0x2a08670();
   input += synapse0x2a086b0();
   input += synapse0x2a086f0();
   input += synapse0x2a08730();
   input += synapse0x2a08770();
   input += synapse0x2a087b0();
   input += synapse0x2a087f0();
   input += synapse0x2a08830();
   input += synapse0x2a08870();
   input += synapse0x2a088b0();
   input += synapse0x2a088f0();
   input += synapse0x2a08930();
   input += synapse0x2a083c0();
   input += synapse0x2a08400();
   input += synapse0x2a08a80();
   input += synapse0x2a08ac0();
   input += synapse0x2a08b00();
   input += synapse0x2a08b40();
   input += synapse0x2a08b80();
   input += synapse0x2a08bc0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x2a08230() {
   double input = input0x2a08230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x2a08c00() {
   double input = -0.500123;
   input += synapse0x2a08f40();
   input += synapse0x2a08f80();
   input += synapse0x2a08fc0();
   input += synapse0x2a09000();
   input += synapse0x2a09040();
   input += synapse0x2a09080();
   input += synapse0x2a090c0();
   input += synapse0x2a09100();
   input += synapse0x2a09140();
   input += synapse0x2a09180();
   input += synapse0x2a091c0();
   input += synapse0x2a09200();
   input += synapse0x2a09240();
   input += synapse0x2a09280();
   input += synapse0x2a092c0();
   input += synapse0x2a09300();
   input += synapse0x2a08d90();
   input += synapse0x2a08dd0();
   input += synapse0x2a09450();
   input += synapse0x2a09490();
   input += synapse0x2a094d0();
   input += synapse0x2a09510();
   input += synapse0x2a09550();
   input += synapse0x2a09590();
   return input;
}

double NNfunction_ss_uRsR::neuron0x2a08c00() {
   double input = input0x2a08c00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x2a095d0() {
   double input = -0.42384;
   input += synapse0x2a09910();
   input += synapse0x2a09950();
   input += synapse0x2a09990();
   input += synapse0x2a099d0();
   input += synapse0x2a09a10();
   input += synapse0x2a09a50();
   input += synapse0x2a09a90();
   input += synapse0x2a09ad0();
   input += synapse0x2a09b10();
   input += synapse0x2a09b50();
   input += synapse0x2a09b90();
   input += synapse0x2a09bd0();
   input += synapse0x2a09c10();
   input += synapse0x2a09c50();
   input += synapse0x2a09c90();
   input += synapse0x2a09cd0();
   input += synapse0x2a09760();
   input += synapse0x2a097a0();
   input += synapse0x2a09e20();
   input += synapse0x2a09e60();
   input += synapse0x2a09ea0();
   input += synapse0x2a09ee0();
   input += synapse0x2a09f20();
   input += synapse0x2a09f60();
   return input;
}

double NNfunction_ss_uRsR::neuron0x2a095d0() {
   double input = input0x2a095d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x2a09fa0() {
   double input = -0.0872943;
   input += synapse0x2a0a2e0();
   input += synapse0x2a0a320();
   input += synapse0x2a0a360();
   input += synapse0x2a0a3a0();
   input += synapse0x2a0a3e0();
   input += synapse0x2a0a420();
   input += synapse0x2a0a460();
   input += synapse0x2a0a4a0();
   input += synapse0x2a0a4e0();
   input += synapse0x2a0a520();
   input += synapse0x2a0a560();
   input += synapse0x2a0a5a0();
   input += synapse0x2a0a5e0();
   input += synapse0x2a0a620();
   input += synapse0x2a0a660();
   input += synapse0x2a0a6a0();
   input += synapse0x2a0a130();
   input += synapse0x2a0a170();
   input += synapse0x2a0a7f0();
   input += synapse0x2a0a830();
   input += synapse0x2a0a870();
   input += synapse0x2a0a8b0();
   input += synapse0x2a0a8f0();
   input += synapse0x2a0a930();
   return input;
}

double NNfunction_ss_uRsR::neuron0x2a09fa0() {
   double input = input0x2a09fa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x2a0a970() {
   double input = -2.27868;
   input += synapse0x2a0acb0();
   input += synapse0x29ff280();
   input += synapse0x29ff2c0();
   input += synapse0x29ff300();
   input += synapse0x29ff550();
   input += synapse0x29ff590();
   input += synapse0x29ff5d0();
   input += synapse0x29ff820();
   input += synapse0x29ff860();
   input += synapse0x29ffab0();
   input += synapse0x29ffaf0();
   input += synapse0x29ffb30();
   input += synapse0x29ffd80();
   input += synapse0x29ffdc0();
   input += synapse0x2a00010();
   input += synapse0x2a00050();
   input += synapse0x2a0ab00();
   input += synapse0x2a0ab40();
   input += synapse0x2a001a0();
   input += synapse0x2a006b0();
   input += synapse0x2a006f0();
   input += synapse0x2a00730();
   input += synapse0x2a00980();
   input += synapse0x2a009c0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x2a0a970() {
   double input = input0x2a0a970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x2a00a00() {
   double input = 0.962963;
   input += synapse0x2a00270();
   input += synapse0x2a002b0();
   input += synapse0x2a002f0();
   input += synapse0x2a00330();
   input += synapse0x2a00cb0();
   input += synapse0x2a0d000();
   input += synapse0x2a0d040();
   input += synapse0x2a0d080();
   input += synapse0x2a0d0c0();
   input += synapse0x2a0d100();
   input += synapse0x2a0d140();
   input += synapse0x2a0d180();
   input += synapse0x2a0d1c0();
   input += synapse0x2a0d200();
   input += synapse0x2a0d240();
   input += synapse0x2a0d280();
   input += synapse0x2a00b90();
   input += synapse0x2a00bd0();
   input += synapse0x2a0d3d0();
   input += synapse0x2a0d410();
   input += synapse0x2a0d450();
   input += synapse0x2a0d490();
   input += synapse0x2a0d4d0();
   input += synapse0x2a0d510();
   return input;
}

double NNfunction_ss_uRsR::neuron0x2a00a00() {
   double input = input0x2a00a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x2a0d550() {
   double input = -1.07991;
   input += synapse0x2a0d890();
   input += synapse0x2a0d8d0();
   input += synapse0x2a0d910();
   input += synapse0x2a0d950();
   input += synapse0x2a0d990();
   input += synapse0x2a0d9d0();
   input += synapse0x2a0da10();
   input += synapse0x2a0da50();
   input += synapse0x2a0da90();
   input += synapse0x2a0dad0();
   input += synapse0x2a0db10();
   input += synapse0x2a0db50();
   input += synapse0x2a0db90();
   input += synapse0x2a0dbd0();
   input += synapse0x2a0dc10();
   input += synapse0x2a0dc50();
   input += synapse0x2a0d6e0();
   input += synapse0x2a0d720();
   input += synapse0x2a0dda0();
   input += synapse0x2a0dde0();
   input += synapse0x2a0de20();
   input += synapse0x2a0de60();
   input += synapse0x2a0dea0();
   input += synapse0x2a0dee0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x2a0d550() {
   double input = input0x2a0d550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x2a0df20() {
   double input = 2.16278;
   input += synapse0x2a0e260();
   input += synapse0x2a0e2a0();
   input += synapse0x2a0e2e0();
   input += synapse0x2a0e320();
   input += synapse0x2a0e360();
   input += synapse0x2a0e3a0();
   input += synapse0x2a0e3e0();
   input += synapse0x2a0e420();
   input += synapse0x2a0e460();
   input += synapse0x2a0e4a0();
   input += synapse0x2a0e4e0();
   input += synapse0x2a0e520();
   input += synapse0x2a0e560();
   input += synapse0x2a0e5a0();
   input += synapse0x2a0e5e0();
   input += synapse0x2a0e620();
   input += synapse0x2a0e0b0();
   input += synapse0x2a0e0f0();
   input += synapse0x2a0e770();
   input += synapse0x2a0e7b0();
   input += synapse0x2a0e7f0();
   input += synapse0x2a0e830();
   input += synapse0x2a0e870();
   input += synapse0x2a0e8b0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x2a0df20() {
   double input = input0x2a0df20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x2a0e8f0() {
   double input = -0.0946347;
   input += synapse0x2a0ec30();
   input += synapse0x2a0ec70();
   input += synapse0x2a0ecb0();
   input += synapse0x2a0ecf0();
   input += synapse0x2a0ed30();
   input += synapse0x2a0ed70();
   input += synapse0x2a0edb0();
   input += synapse0x2a0edf0();
   input += synapse0x2a0ee30();
   input += synapse0x2a0ee70();
   input += synapse0x2a0eeb0();
   input += synapse0x2a0eef0();
   input += synapse0x2a0ef30();
   input += synapse0x2a0ef70();
   input += synapse0x2a0efb0();
   input += synapse0x2a0eff0();
   input += synapse0x2a0ea80();
   input += synapse0x2a0eac0();
   input += synapse0x2a0f140();
   input += synapse0x2a0f180();
   input += synapse0x2a0f1c0();
   input += synapse0x2a0f200();
   input += synapse0x2a0f240();
   input += synapse0x2a0f280();
   return input;
}

double NNfunction_ss_uRsR::neuron0x2a0e8f0() {
   double input = input0x2a0e8f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x2a0f2c0() {
   double input = -3.5763;
   input += synapse0x2a0f600();
   input += synapse0x2a0f640();
   input += synapse0x2a0f680();
   input += synapse0x2a0f6c0();
   input += synapse0x2a0f700();
   input += synapse0x2a0f740();
   input += synapse0x2a0f780();
   input += synapse0x2a0f7c0();
   input += synapse0x2a0f800();
   input += synapse0x2a0f840();
   input += synapse0x2a0f880();
   input += synapse0x2a0f8c0();
   input += synapse0x2a0f900();
   input += synapse0x2a0f940();
   input += synapse0x2a0f980();
   input += synapse0x2a0f9c0();
   input += synapse0x2a0f450();
   input += synapse0x2a0f490();
   input += synapse0x2a0fb10();
   input += synapse0x2a0fb50();
   input += synapse0x2a0fb90();
   input += synapse0x2a0fbd0();
   input += synapse0x2a0fc10();
   input += synapse0x2a0fc50();
   return input;
}

double NNfunction_ss_uRsR::neuron0x2a0f2c0() {
   double input = input0x2a0f2c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x2a0fc90() {
   double input = 2.03016;
   input += synapse0x2a0ffd0();
   input += synapse0x2a10010();
   input += synapse0x2a10050();
   input += synapse0x2a10090();
   input += synapse0x2a100d0();
   input += synapse0x2a10110();
   input += synapse0x2a10150();
   input += synapse0x2a10190();
   input += synapse0x2a101d0();
   input += synapse0x2a10210();
   input += synapse0x2a10250();
   input += synapse0x2a10290();
   input += synapse0x2a102d0();
   input += synapse0x2a10310();
   input += synapse0x2a10350();
   input += synapse0x2a10390();
   input += synapse0x2a0fe20();
   input += synapse0x2a0fe60();
   input += synapse0x2a104e0();
   input += synapse0x2a10520();
   input += synapse0x2a10560();
   input += synapse0x2a105a0();
   input += synapse0x2a105e0();
   input += synapse0x2a10620();
   return input;
}

double NNfunction_ss_uRsR::neuron0x2a0fc90() {
   double input = input0x2a0fc90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x2a10660() {
   double input = -0.905697;
   input += synapse0x2a109a0();
   input += synapse0x2a109e0();
   input += synapse0x2a10a20();
   input += synapse0x2a10a60();
   input += synapse0x2a10aa0();
   input += synapse0x2a10ae0();
   input += synapse0x2a10b20();
   input += synapse0x2a10b60();
   input += synapse0x2a10ba0();
   input += synapse0x2a10be0();
   input += synapse0x2a10c20();
   input += synapse0x2a10c60();
   input += synapse0x2a10ca0();
   input += synapse0x2a10ce0();
   input += synapse0x2a10d20();
   input += synapse0x2a10d60();
   input += synapse0x2a107f0();
   input += synapse0x2a10830();
   input += synapse0x2a10eb0();
   input += synapse0x2a10ef0();
   input += synapse0x2a10f30();
   input += synapse0x2a10f70();
   input += synapse0x2a10fb0();
   input += synapse0x2a10ff0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x2a10660() {
   double input = input0x2a10660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x2a11030() {
   double input = 0.666314;
   input += synapse0x2a11370();
   input += synapse0x2a113b0();
   input += synapse0x2a113f0();
   input += synapse0x2a11430();
   input += synapse0x2a11470();
   input += synapse0x2a114b0();
   input += synapse0x2a114f0();
   input += synapse0x2a11530();
   input += synapse0x2a11570();
   input += synapse0x2a115b0();
   input += synapse0x2a115f0();
   input += synapse0x2a11630();
   input += synapse0x2a11670();
   input += synapse0x2a116b0();
   input += synapse0x2a116f0();
   input += synapse0x2a11730();
   input += synapse0x2a111c0();
   input += synapse0x2a11200();
   input += synapse0x2a11880();
   input += synapse0x2a118c0();
   input += synapse0x2a11900();
   input += synapse0x2a11940();
   input += synapse0x2a11980();
   input += synapse0x2a119c0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x2a11030() {
   double input = input0x2a11030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x2a11a00() {
   double input = 0.502858;
   input += synapse0x29fa470();
   input += synapse0x29fa4b0();
   input += synapse0x29fa4f0();
   input += synapse0x29fa530();
   input += synapse0x29fa570();
   input += synapse0x29fa5b0();
   input += synapse0x29fa5f0();
   input += synapse0x29fa630();
   input += synapse0x2a12150();
   input += synapse0x2a12190();
   input += synapse0x2a121d0();
   input += synapse0x2a12210();
   input += synapse0x2a12250();
   input += synapse0x2a12290();
   input += synapse0x2a122d0();
   input += synapse0x2a12310();
   input += synapse0x2a11b90();
   input += synapse0x2a11bd0();
   input += synapse0x2a12460();
   input += synapse0x2a124a0();
   input += synapse0x2a124e0();
   input += synapse0x2a12520();
   input += synapse0x2a12560();
   input += synapse0x2a125a0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x2a11a00() {
   double input = input0x2a11a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x2a125e0() {
   double input = 0.534392;
   input += synapse0x2a12920();
   input += synapse0x2a12960();
   input += synapse0x2a129a0();
   input += synapse0x2a129e0();
   input += synapse0x2a12a20();
   input += synapse0x2a12a60();
   input += synapse0x2a12aa0();
   input += synapse0x2a12ae0();
   input += synapse0x2a12b20();
   input += synapse0x2a12b60();
   input += synapse0x2a12ba0();
   input += synapse0x2a12be0();
   input += synapse0x2a12c20();
   input += synapse0x2a12c60();
   input += synapse0x2a12ca0();
   input += synapse0x2a12ce0();
   input += synapse0x2a12770();
   input += synapse0x2a127b0();
   input += synapse0x2a12e30();
   input += synapse0x2a12e70();
   input += synapse0x2a12eb0();
   input += synapse0x2a12ef0();
   input += synapse0x2a12f30();
   input += synapse0x2a12f70();
   return input;
}

double NNfunction_ss_uRsR::neuron0x2a125e0() {
   double input = input0x2a125e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x2a12fb0() {
   double input = 1.67775;
   input += synapse0x2a132f0();
   input += synapse0x2a13330();
   input += synapse0x2a13370();
   input += synapse0x2a133b0();
   input += synapse0x2a133f0();
   input += synapse0x2a13430();
   input += synapse0x2a13470();
   input += synapse0x2a134b0();
   input += synapse0x2a134f0();
   input += synapse0x2a13530();
   input += synapse0x2a13570();
   input += synapse0x2a135b0();
   input += synapse0x2a135f0();
   input += synapse0x2a13630();
   input += synapse0x2a13670();
   input += synapse0x2a136b0();
   input += synapse0x2a13140();
   input += synapse0x2a13180();
   input += synapse0x2a03cb0();
   input += synapse0x2a03cf0();
   input += synapse0x2a03d30();
   input += synapse0x2a03d70();
   input += synapse0x2a03db0();
   input += synapse0x2a03df0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x2a12fb0() {
   double input = input0x2a12fb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x2a03e30() {
   double input = -1.39369;
   input += synapse0x2a04170();
   input += synapse0x2a041b0();
   input += synapse0x2a041f0();
   input += synapse0x2a04230();
   input += synapse0x2a04270();
   input += synapse0x2a042b0();
   input += synapse0x2a042f0();
   input += synapse0x2a04330();
   input += synapse0x2a04370();
   input += synapse0x2a043b0();
   input += synapse0x2a043f0();
   input += synapse0x2a04430();
   input += synapse0x2a04470();
   input += synapse0x2a044b0();
   input += synapse0x2a044f0();
   input += synapse0x2a04530();
   input += synapse0x2a03fc0();
   input += synapse0x2a04000();
   input += synapse0x2a04680();
   input += synapse0x2a046c0();
   input += synapse0x2a04700();
   input += synapse0x2a04740();
   input += synapse0x2a04780();
   input += synapse0x2a047c0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x2a03e30() {
   double input = input0x2a03e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x2a04800() {
   double input = -1.03673;
   input += synapse0x2a04b40();
   input += synapse0x2a04b80();
   input += synapse0x2a04bc0();
   input += synapse0x2a04c00();
   input += synapse0x2a04c40();
   input += synapse0x2a04c80();
   input += synapse0x2a04cc0();
   input += synapse0x2a04d00();
   input += synapse0x2a04d40();
   input += synapse0x2a04d80();
   input += synapse0x2a04dc0();
   input += synapse0x2a04e00();
   input += synapse0x2a04e40();
   input += synapse0x2a04e80();
   input += synapse0x2a04ec0();
   input += synapse0x2a04f00();
   input += synapse0x2a04990();
   input += synapse0x2a049d0();
   input += synapse0x2a05050();
   input += synapse0x2a05090();
   input += synapse0x2a050d0();
   input += synapse0x2a05110();
   input += synapse0x2a05150();
   input += synapse0x2a05190();
   return input;
}

double NNfunction_ss_uRsR::neuron0x2a04800() {
   double input = input0x2a04800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x2a051d0() {
   double input = 1.24925;
   input += synapse0x2a05510();
   input += synapse0x2a05550();
   input += synapse0x2a05590();
   input += synapse0x2a055d0();
   input += synapse0x2a05610();
   input += synapse0x2a05650();
   input += synapse0x2a05690();
   input += synapse0x2a056d0();
   input += synapse0x2a05710();
   input += synapse0x2a05750();
   input += synapse0x2a05790();
   input += synapse0x2a057d0();
   input += synapse0x2a05810();
   input += synapse0x2a05850();
   input += synapse0x2a05890();
   input += synapse0x2a058d0();
   input += synapse0x2a05360();
   input += synapse0x2a053a0();
   input += synapse0x2a05a20();
   input += synapse0x2a05a60();
   input += synapse0x2a05aa0();
   input += synapse0x2a05ae0();
   input += synapse0x2a05b20();
   input += synapse0x2a05b60();
   return input;
}

double NNfunction_ss_uRsR::neuron0x2a051d0() {
   double input = input0x2a051d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x2a17810() {
   double input = -0.558803;
   input += synapse0x2a17a30();
   input += synapse0x2a17a70();
   input += synapse0x2a17ab0();
   input += synapse0x2a17af0();
   input += synapse0x2a17b30();
   input += synapse0x2a17b70();
   input += synapse0x2a17bb0();
   input += synapse0x2a17bf0();
   input += synapse0x2a17c30();
   input += synapse0x2a17c70();
   input += synapse0x2a17cb0();
   input += synapse0x2a17cf0();
   input += synapse0x2a17d30();
   input += synapse0x2a17d70();
   input += synapse0x2a17db0();
   input += synapse0x2a17df0();
   input += synapse0x2a05ba0();
   input += synapse0x2a05be0();
   input += synapse0x2a17f40();
   input += synapse0x2a17f80();
   input += synapse0x2a17fc0();
   input += synapse0x2a18000();
   input += synapse0x2a18040();
   input += synapse0x2a18080();
   return input;
}

double NNfunction_ss_uRsR::neuron0x2a17810() {
   double input = input0x2a17810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x2a180c0() {
   double input = 0.0969924;
   input += synapse0x2a18400();
   input += synapse0x2a18440();
   input += synapse0x2a18480();
   input += synapse0x2a184c0();
   input += synapse0x2a18500();
   input += synapse0x2a18540();
   input += synapse0x2a18580();
   input += synapse0x2a185c0();
   input += synapse0x2a18600();
   input += synapse0x2a18640();
   input += synapse0x2a18680();
   input += synapse0x2a186c0();
   input += synapse0x2a18700();
   input += synapse0x2a18740();
   input += synapse0x2a18780();
   input += synapse0x2a187c0();
   input += synapse0x2a18250();
   input += synapse0x2a18290();
   input += synapse0x2a18910();
   input += synapse0x2a18950();
   input += synapse0x2a18990();
   input += synapse0x2a189d0();
   input += synapse0x2a18a10();
   input += synapse0x2a18a50();
   return input;
}

double NNfunction_ss_uRsR::neuron0x2a180c0() {
   double input = input0x2a180c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x2a18a90() {
   double input = -2.46607;
   input += synapse0x2a18dd0();
   input += synapse0x2a18e10();
   input += synapse0x2a18e50();
   input += synapse0x2a18e90();
   input += synapse0x2a18ed0();
   input += synapse0x2a18f10();
   input += synapse0x2a18f50();
   input += synapse0x2a18f90();
   input += synapse0x2a18fd0();
   input += synapse0x2a19010();
   input += synapse0x2a19050();
   input += synapse0x2a19090();
   input += synapse0x2a190d0();
   input += synapse0x2a19110();
   input += synapse0x2a19150();
   input += synapse0x2a19190();
   input += synapse0x2a18c20();
   input += synapse0x2a18c60();
   input += synapse0x2a192e0();
   input += synapse0x2a19320();
   input += synapse0x2a19360();
   input += synapse0x2a193a0();
   input += synapse0x2a193e0();
   input += synapse0x2a19420();
   return input;
}

double NNfunction_ss_uRsR::neuron0x2a18a90() {
   double input = input0x2a18a90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x2a19460() {
   double input = 0.432413;
   input += synapse0x2a197a0();
   input += synapse0x2a197e0();
   input += synapse0x2a19820();
   input += synapse0x2a19860();
   input += synapse0x2a198a0();
   input += synapse0x2a198e0();
   input += synapse0x2a19920();
   input += synapse0x2a19960();
   input += synapse0x2a199a0();
   input += synapse0x2a199e0();
   input += synapse0x2a19a20();
   input += synapse0x2a19a60();
   input += synapse0x2a19aa0();
   input += synapse0x2a19ae0();
   input += synapse0x2a19b20();
   input += synapse0x2a19b60();
   input += synapse0x2a195f0();
   input += synapse0x2a19630();
   input += synapse0x2a19cb0();
   input += synapse0x2a19cf0();
   input += synapse0x2a19d30();
   input += synapse0x2a19d70();
   input += synapse0x2a19db0();
   input += synapse0x2a19df0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x2a19460() {
   double input = input0x2a19460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x2a20660() {
   double input = 0.565061;
   input += synapse0x27b9d00();
   input += synapse0x27b9d40();
   input += synapse0x29f78a0();
   input += synapse0x29f78e0();
   input += synapse0x29f8270();
   input += synapse0x29f82b0();
   input += synapse0x29f9040();
   input += synapse0x29f9080();
   input += synapse0x29f9a10();
   input += synapse0x29f9a50();
   input += synapse0x29fa3e0();
   input += synapse0x29fa420();
   input += synapse0x29faec0();
   input += synapse0x29faf00();
   input += synapse0x29fb890();
   input += synapse0x29fb8d0();
   input += synapse0x29f8970();
   input += synapse0x29f89b0();
   input += synapse0x29fd440();
   input += synapse0x29fd480();
   input += synapse0x29fde10();
   input += synapse0x29fde50();
   input += synapse0x29fe7e0();
   input += synapse0x29fe820();
   input += synapse0x29ff1b0();
   input += synapse0x29ff1f0();
   input += synapse0x29f3350();
   input += synapse0x29f3390();
   input += synapse0x2a012a0();
   input += synapse0x2a012e0();
   input += synapse0x2a01c70();
   input += synapse0x2a01cb0();
   input += synapse0x2a02640();
   input += synapse0x2a02680();
   input += synapse0x2a03010();
   input += synapse0x2a03050();
   input += synapse0x2a039e0();
   input += synapse0x2a03a20();
   input += synapse0x29fc530();
   input += synapse0x29fc570();
   input += synapse0x2a05de0();
   input += synapse0x2a05e20();
   input += synapse0x2a06770();
   input += synapse0x2a067b0();
   input += synapse0x2a07140();
   input += synapse0x2a07180();
   input += synapse0x2a07b10();
   input += synapse0x2a07b50();
   input += synapse0x2a084e0();
   input += synapse0x2a08520();
   return input;
}

double NNfunction_ss_uRsR::neuron0x2a20660() {
   double input = input0x2a20660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x2a20a00() {
   double input = 0.52664;
   input += synapse0x2a0ac20();
   input += synapse0x2a0ac60();
   input += synapse0x2a001e0();
   input += synapse0x2a00220();
   input += synapse0x2a0d800();
   input += synapse0x2a0d840();
   input += synapse0x2a0e1d0();
   input += synapse0x2a0e210();
   input += synapse0x2a0eba0();
   input += synapse0x2a0ebe0();
   input += synapse0x2a0f570();
   input += synapse0x2a0f5b0();
   input += synapse0x2a0ff40();
   input += synapse0x2a0ff80();
   input += synapse0x2a10910();
   input += synapse0x2a10950();
   input += synapse0x2a112e0();
   input += synapse0x2a11320();
   input += synapse0x2a11cb0();
   input += synapse0x2a11cf0();
   input += synapse0x2a12890();
   input += synapse0x2a128d0();
   input += synapse0x2a13260();
   input += synapse0x2a132a0();
   input += synapse0x2a040e0();
   input += synapse0x2a04120();
   input += synapse0x2a04ab0();
   input += synapse0x2a04af0();
   input += synapse0x2a05480();
   input += synapse0x2a054c0();
   input += synapse0x2a179a0();
   input += synapse0x2a179e0();
   input += synapse0x2a18370();
   input += synapse0x2a183b0();
   input += synapse0x2a18d40();
   input += synapse0x2a18d80();
   input += synapse0x2a19710();
   input += synapse0x2a19750();
   input += synapse0x29f5600();
   input += synapse0x29f5640();
   input += synapse0x2a08eb0();
   input += synapse0x2a08ef0();
   input += synapse0x2a19e30();
   input += synapse0x2a19e70();
   input += synapse0x2a19eb0();
   input += synapse0x2a19ef0();
   input += synapse0x2a20da0();
   input += synapse0x2a20de0();
   input += synapse0x2a20e20();
   input += synapse0x2a20e60();
   return input;
}

double NNfunction_ss_uRsR::neuron0x2a20a00() {
   double input = input0x2a20a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x2a20ea0() {
   double input = -0.754378;
   input += synapse0x2a211e0();
   input += synapse0x2a21220();
   input += synapse0x2a21260();
   input += synapse0x2a212a0();
   input += synapse0x2a212e0();
   input += synapse0x2a21320();
   input += synapse0x2a21360();
   input += synapse0x2a213a0();
   input += synapse0x2a213e0();
   input += synapse0x2a21420();
   input += synapse0x2a21460();
   input += synapse0x2a214a0();
   input += synapse0x2a214e0();
   input += synapse0x2a21520();
   input += synapse0x2a21560();
   input += synapse0x2a215a0();
   input += synapse0x2a21030();
   input += synapse0x2a21070();
   input += synapse0x2a216f0();
   input += synapse0x2a21730();
   input += synapse0x2a21770();
   input += synapse0x2a217b0();
   input += synapse0x2a217f0();
   input += synapse0x2a21830();
   input += synapse0x2a21870();
   input += synapse0x2a218b0();
   input += synapse0x2a218f0();
   input += synapse0x2a21930();
   input += synapse0x2a21970();
   input += synapse0x2a219b0();
   input += synapse0x2a219f0();
   input += synapse0x2a21a30();
   input += synapse0x2a215e0();
   input += synapse0x2a21620();
   input += synapse0x2a21660();
   input += synapse0x2a216a0();
   input += synapse0x2a21c80();
   input += synapse0x2a21cc0();
   input += synapse0x2a21d00();
   input += synapse0x2a21d40();
   input += synapse0x2a21d80();
   input += synapse0x2a21dc0();
   input += synapse0x2a21e00();
   input += synapse0x2a21e40();
   input += synapse0x2a21e80();
   input += synapse0x2a21ec0();
   input += synapse0x2a21f00();
   input += synapse0x2a21f40();
   input += synapse0x2a21f80();
   input += synapse0x2a21fc0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x2a20ea0() {
   double input = input0x2a20ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x2a22000() {
   double input = -0.541525;
   input += synapse0x2a22340();
   input += synapse0x2a22380();
   input += synapse0x2a223c0();
   input += synapse0x2a22400();
   input += synapse0x2a22440();
   input += synapse0x2a22480();
   input += synapse0x2a224c0();
   input += synapse0x2a22500();
   input += synapse0x2a22540();
   input += synapse0x2a22580();
   input += synapse0x2a225c0();
   input += synapse0x2a22600();
   input += synapse0x2a22640();
   input += synapse0x2a22680();
   input += synapse0x2a226c0();
   input += synapse0x2a22700();
   input += synapse0x2a22190();
   input += synapse0x2a221d0();
   input += synapse0x2a22850();
   input += synapse0x2a22890();
   input += synapse0x2a228d0();
   input += synapse0x2a22910();
   input += synapse0x2a22950();
   input += synapse0x2a22990();
   input += synapse0x2a229d0();
   input += synapse0x2a22a10();
   input += synapse0x2a22a50();
   input += synapse0x2a22a90();
   input += synapse0x2a22ad0();
   input += synapse0x2a22b10();
   input += synapse0x2a22b50();
   input += synapse0x2a22b90();
   input += synapse0x2a22740();
   input += synapse0x2a22780();
   input += synapse0x2a227c0();
   input += synapse0x2a22800();
   input += synapse0x2a22de0();
   input += synapse0x2a22e20();
   input += synapse0x2a22e60();
   input += synapse0x2a22ea0();
   input += synapse0x2a22ee0();
   input += synapse0x2a22f20();
   input += synapse0x2a22f60();
   input += synapse0x2a22fa0();
   input += synapse0x2a22fe0();
   input += synapse0x2a23020();
   input += synapse0x2a23060();
   input += synapse0x2a230a0();
   input += synapse0x2a230e0();
   input += synapse0x2a23120();
   return input;
}

double NNfunction_ss_uRsR::neuron0x2a22000() {
   double input = input0x2a22000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x2a23160() {
   double input = 0.640969;
   input += synapse0x2a234a0();
   input += synapse0x2a234e0();
   input += synapse0x2a23520();
   input += synapse0x2a23560();
   input += synapse0x2a235a0();
   input += synapse0x2a235e0();
   input += synapse0x2a23620();
   input += synapse0x2a23660();
   input += synapse0x2a236a0();
   input += synapse0x2a236e0();
   input += synapse0x2a23720();
   input += synapse0x2a23760();
   input += synapse0x2a237a0();
   input += synapse0x2a237e0();
   input += synapse0x2a23820();
   input += synapse0x2a23860();
   input += synapse0x2a232f0();
   input += synapse0x2a23330();
   input += synapse0x2a239b0();
   input += synapse0x2a239f0();
   input += synapse0x2a23a30();
   input += synapse0x2a23a70();
   input += synapse0x2a23ab0();
   input += synapse0x2a23af0();
   input += synapse0x2a23b30();
   input += synapse0x2a23b70();
   input += synapse0x2a23bb0();
   input += synapse0x2a23bf0();
   input += synapse0x2a23c30();
   input += synapse0x2a23c70();
   input += synapse0x2a23cb0();
   input += synapse0x2a23cf0();
   input += synapse0x2a238a0();
   input += synapse0x2a238e0();
   input += synapse0x2a23920();
   input += synapse0x2a23960();
   input += synapse0x2a23f40();
   input += synapse0x2a23f80();
   input += synapse0x2a23fc0();
   input += synapse0x2a24000();
   input += synapse0x2a24040();
   input += synapse0x2a24080();
   input += synapse0x2a240c0();
   input += synapse0x2a24100();
   input += synapse0x2a24140();
   input += synapse0x2a24180();
   input += synapse0x2a241c0();
   input += synapse0x2a24200();
   input += synapse0x2a24240();
   input += synapse0x2a24280();
   return input;
}

double NNfunction_ss_uRsR::neuron0x2a23160() {
   double input = input0x2a23160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x2a242c0() {
   double input = 3.75966;
   input += synapse0x2a244e0();
   input += synapse0x2a24520();
   input += synapse0x2a24560();
   input += synapse0x2a245a0();
   input += synapse0x2a245e0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x2a242c0() {
   double input = input0x2a242c0();
   return (input * 1)+0;
}

double NNfunction_ss_uRsR::synapse0x29f0270() {
   return (neuron0x29f03b0()*-0.0119553);
}

double NNfunction_ss_uRsR::synapse0x29f02b0() {
   return (neuron0x29f06f0()*0.00165204);
}

double NNfunction_ss_uRsR::synapse0x29f5690() {
   return (neuron0x29f0a30()*0.0315734);
}

double NNfunction_ss_uRsR::synapse0x29f56d0() {
   return (neuron0x29f0d70()*-1.54467);
}

double NNfunction_ss_uRsR::synapse0x29f5710() {
   return (neuron0x29f10b0()*0.0149997);
}

double NNfunction_ss_uRsR::synapse0x29f5750() {
   return (neuron0x29f13f0()*0.0161073);
}

double NNfunction_ss_uRsR::synapse0x29f5790() {
   return (neuron0x29f1730()*0.0242816);
}

double NNfunction_ss_uRsR::synapse0x29f57d0() {
   return (neuron0x29f1a70()*0.0118547);
}

double NNfunction_ss_uRsR::synapse0x29f5810() {
   return (neuron0x29f1db0()*0.0113157);
}

double NNfunction_ss_uRsR::synapse0x29f5850() {
   return (neuron0x29f20f0()*-0.011757);
}

double NNfunction_ss_uRsR::synapse0x29f5890() {
   return (neuron0x29f2430()*-0.00138023);
}

double NNfunction_ss_uRsR::synapse0x29f58d0() {
   return (neuron0x29f2770()*-0.0146606);
}

double NNfunction_ss_uRsR::synapse0x29f5910() {
   return (neuron0x29f2ab0()*-0.0140673);
}

double NNfunction_ss_uRsR::synapse0x29f5950() {
   return (neuron0x29f2df0()*0.0132305);
}

double NNfunction_ss_uRsR::synapse0x29f5990() {
   return (neuron0x29f3130()*0.0443718);
}

double NNfunction_ss_uRsR::synapse0x29f59d0() {
   return (neuron0x29f3470()*-0.00975696);
}

double NNfunction_ss_uRsR::synapse0x29f01e0() {
   return (neuron0x29f37b0()*0.00860201);
}

double NNfunction_ss_uRsR::synapse0x29f0220() {
   return (neuron0x29f3d10()*-0.00606402);
}

double NNfunction_ss_uRsR::synapse0x27ab590() {
   return (neuron0x29f3f30()*-0.176168);
}

double NNfunction_ss_uRsR::synapse0x27ab5d0() {
   return (neuron0x29f4270()*-0.0127808);
}

double NNfunction_ss_uRsR::synapse0x29f5c30() {
   return (neuron0x29f45b0()*0.0248535);
}

double NNfunction_ss_uRsR::synapse0x29f5c70() {
   return (neuron0x29f48f0()*0.00133683);
}

double NNfunction_ss_uRsR::synapse0x29f5cb0() {
   return (neuron0x29f4c30()*-0.002432);
}

double NNfunction_ss_uRsR::synapse0x29f5cf0() {
   return (neuron0x29f4f70()*-0.0163705);
}

double NNfunction_ss_uRsR::synapse0x29f6070() {
   return (neuron0x29f03b0()*0.000191788);
}

double NNfunction_ss_uRsR::synapse0x29f60b0() {
   return (neuron0x29f06f0()*0.374214);
}

double NNfunction_ss_uRsR::synapse0x29f60f0() {
   return (neuron0x29f0a30()*0.533533);
}

double NNfunction_ss_uRsR::synapse0x29f6130() {
   return (neuron0x29f0d70()*0.151268);
}

double NNfunction_ss_uRsR::synapse0x29f6170() {
   return (neuron0x29f10b0()*-0.0825316);
}

double NNfunction_ss_uRsR::synapse0x29f61b0() {
   return (neuron0x29f13f0()*0.150497);
}

double NNfunction_ss_uRsR::synapse0x29f61f0() {
   return (neuron0x29f1730()*-0.3622);
}

double NNfunction_ss_uRsR::synapse0x29f6230() {
   return (neuron0x29f1a70()*-0.412693);
}

double NNfunction_ss_uRsR::synapse0x29f6270() {
   return (neuron0x29f1db0()*-0.444106);
}

double NNfunction_ss_uRsR::synapse0x29f5b20() {
   return (neuron0x29f20f0()*-0.0750749);
}

double NNfunction_ss_uRsR::synapse0x29f5b60() {
   return (neuron0x29f2430()*-0.654767);
}

double NNfunction_ss_uRsR::synapse0x29f5ba0() {
   return (neuron0x29f2770()*0.500774);
}

double NNfunction_ss_uRsR::synapse0x29f5be0() {
   return (neuron0x29f2ab0()*-0.134132);
}

double NNfunction_ss_uRsR::synapse0x29f64c0() {
   return (neuron0x29f2df0()*0.132889);
}

double NNfunction_ss_uRsR::synapse0x29f6500() {
   return (neuron0x29f3130()*-0.214318);
}

double NNfunction_ss_uRsR::synapse0x29f6540() {
   return (neuron0x29f3470()*-0.0952386);
}

double NNfunction_ss_uRsR::synapse0x29f5ec0() {
   return (neuron0x29f37b0()*-0.264027);
}

double NNfunction_ss_uRsR::synapse0x29f5f00() {
   return (neuron0x29f3d10()*0.132907);
}

double NNfunction_ss_uRsR::synapse0x29f6690() {
   return (neuron0x29f3f30()*-0.928492);
}

double NNfunction_ss_uRsR::synapse0x29f66d0() {
   return (neuron0x29f4270()*0.597875);
}

double NNfunction_ss_uRsR::synapse0x29f6710() {
   return (neuron0x29f45b0()*-0.474647);
}

double NNfunction_ss_uRsR::synapse0x29f6750() {
   return (neuron0x29f48f0()*0.631112);
}

double NNfunction_ss_uRsR::synapse0x29f6790() {
   return (neuron0x29f4c30()*0.442824);
}

double NNfunction_ss_uRsR::synapse0x29f67d0() {
   return (neuron0x29f4f70()*-0.130914);
}

double NNfunction_ss_uRsR::synapse0x29f6b50() {
   return (neuron0x29f03b0()*-0.86811);
}

double NNfunction_ss_uRsR::synapse0x29f6b90() {
   return (neuron0x29f06f0()*-0.17758);
}

double NNfunction_ss_uRsR::synapse0x29f6bd0() {
   return (neuron0x29f0a30()*0.203736);
}

double NNfunction_ss_uRsR::synapse0x29f6c10() {
   return (neuron0x29f0d70()*0.0867098);
}

double NNfunction_ss_uRsR::synapse0x29f6c50() {
   return (neuron0x29f10b0()*-0.0834399);
}

double NNfunction_ss_uRsR::synapse0x29f6c90() {
   return (neuron0x29f13f0()*0.284352);
}

double NNfunction_ss_uRsR::synapse0x29f6cd0() {
   return (neuron0x29f1730()*-0.227048);
}

double NNfunction_ss_uRsR::synapse0x29f6d10() {
   return (neuron0x29f1a70()*-0.582472);
}

double NNfunction_ss_uRsR::synapse0x29f6d50() {
   return (neuron0x29f1db0()*-0.124709);
}

double NNfunction_ss_uRsR::synapse0x29f6d90() {
   return (neuron0x29f20f0()*-0.291467);
}

double NNfunction_ss_uRsR::synapse0x29f6dd0() {
   return (neuron0x29f2430()*-0.352025);
}

double NNfunction_ss_uRsR::synapse0x29f6e10() {
   return (neuron0x29f2770()*-0.288411);
}

double NNfunction_ss_uRsR::synapse0x29f6e50() {
   return (neuron0x29f2ab0()*-0.260706);
}

double NNfunction_ss_uRsR::synapse0x29f6e90() {
   return (neuron0x29f2df0()*0.243613);
}

double NNfunction_ss_uRsR::synapse0x29f6ed0() {
   return (neuron0x29f3130()*0.371274);
}

double NNfunction_ss_uRsR::synapse0x29f6f10() {
   return (neuron0x29f3470()*0.148336);
}

double NNfunction_ss_uRsR::synapse0x29f69a0() {
   return (neuron0x29f37b0()*0.489687);
}

double NNfunction_ss_uRsR::synapse0x29f69e0() {
   return (neuron0x29f3d10()*0.377866);
}

double NNfunction_ss_uRsR::synapse0x27abc40() {
   return (neuron0x29f3f30()*0.503476);
}

double NNfunction_ss_uRsR::synapse0x27b9510() {
   return (neuron0x29f4270()*0.0556573);
}

double NNfunction_ss_uRsR::synapse0x27b9550() {
   return (neuron0x29f45b0()*0.336257);
}

double NNfunction_ss_uRsR::synapse0x29df440() {
   return (neuron0x29f48f0()*0.999902);
}

double NNfunction_ss_uRsR::synapse0x29df480() {
   return (neuron0x29f4c30()*0.240822);
}

double NNfunction_ss_uRsR::synapse0x29df4c0() {
   return (neuron0x29f4f70()*-0.360951);
}

double NNfunction_ss_uRsR::synapse0x27b9d90() {
   return (neuron0x29f03b0()*-0.0857497);
}

double NNfunction_ss_uRsR::synapse0x29f6440() {
   return (neuron0x29f06f0()*0.583403);
}

double NNfunction_ss_uRsR::synapse0x29f6480() {
   return (neuron0x29f0a30()*0.55378);
}

double NNfunction_ss_uRsR::synapse0x29f7060() {
   return (neuron0x29f0d70()*0.84078);
}

double NNfunction_ss_uRsR::synapse0x29f70a0() {
   return (neuron0x29f10b0()*0.815093);
}

double NNfunction_ss_uRsR::synapse0x29f70e0() {
   return (neuron0x29f13f0()*0.107621);
}

double NNfunction_ss_uRsR::synapse0x29f7120() {
   return (neuron0x29f1730()*0.097522);
}

double NNfunction_ss_uRsR::synapse0x29f7160() {
   return (neuron0x29f1a70()*0.240028);
}

double NNfunction_ss_uRsR::synapse0x29f71a0() {
   return (neuron0x29f1db0()*0.644437);
}

double NNfunction_ss_uRsR::synapse0x29f71e0() {
   return (neuron0x29f20f0()*-0.971203);
}

double NNfunction_ss_uRsR::synapse0x29f7220() {
   return (neuron0x29f2430()*0.519524);
}

double NNfunction_ss_uRsR::synapse0x29f7260() {
   return (neuron0x29f2770()*0.517389);
}

double NNfunction_ss_uRsR::synapse0x29f72a0() {
   return (neuron0x29f2ab0()*0.0703789);
}

double NNfunction_ss_uRsR::synapse0x29f72e0() {
   return (neuron0x29f2df0()*0.386882);
}

double NNfunction_ss_uRsR::synapse0x29f7320() {
   return (neuron0x29f3130()*-0.463135);
}

double NNfunction_ss_uRsR::synapse0x29f7360() {
   return (neuron0x29f3470()*-0.212866);
}

double NNfunction_ss_uRsR::synapse0x29f02f0() {
   return (neuron0x29f37b0()*0.433132);
}

double NNfunction_ss_uRsR::synapse0x29f0330() {
   return (neuron0x29f3d10()*-0.6305);
}

double NNfunction_ss_uRsR::synapse0x29f0370() {
   return (neuron0x29f3f30()*-0.599453);
}

double NNfunction_ss_uRsR::synapse0x29f74b0() {
   return (neuron0x29f4270()*0.900146);
}

double NNfunction_ss_uRsR::synapse0x29f74f0() {
   return (neuron0x29f45b0()*0.982431);
}

double NNfunction_ss_uRsR::synapse0x29f7530() {
   return (neuron0x29f48f0()*-0.128216);
}

double NNfunction_ss_uRsR::synapse0x29f7570() {
   return (neuron0x29f4c30()*-0.108404);
}

double NNfunction_ss_uRsR::synapse0x29f75b0() {
   return (neuron0x29f4f70()*0.66679);
}

double NNfunction_ss_uRsR::synapse0x29f7930() {
   return (neuron0x29f03b0()*0.129297);
}

double NNfunction_ss_uRsR::synapse0x29f7970() {
   return (neuron0x29f06f0()*0.939735);
}

double NNfunction_ss_uRsR::synapse0x29f79b0() {
   return (neuron0x29f0a30()*-0.162341);
}

double NNfunction_ss_uRsR::synapse0x29f79f0() {
   return (neuron0x29f0d70()*-0.00219502);
}

double NNfunction_ss_uRsR::synapse0x29f7a30() {
   return (neuron0x29f10b0()*0.105191);
}

double NNfunction_ss_uRsR::synapse0x29f7a70() {
   return (neuron0x29f13f0()*0.230674);
}

double NNfunction_ss_uRsR::synapse0x29f7ab0() {
   return (neuron0x29f1730()*-0.146368);
}

double NNfunction_ss_uRsR::synapse0x29f7af0() {
   return (neuron0x29f1a70()*-0.935249);
}

double NNfunction_ss_uRsR::synapse0x29f7b30() {
   return (neuron0x29f1db0()*0.664404);
}

double NNfunction_ss_uRsR::synapse0x29f7b70() {
   return (neuron0x29f20f0()*-0.198951);
}

double NNfunction_ss_uRsR::synapse0x29f7bb0() {
   return (neuron0x29f2430()*-0.883442);
}

double NNfunction_ss_uRsR::synapse0x29f7bf0() {
   return (neuron0x29f2770()*-0.0263114);
}

double NNfunction_ss_uRsR::synapse0x29f7c30() {
   return (neuron0x29f2ab0()*0.0881596);
}

double NNfunction_ss_uRsR::synapse0x29f7c70() {
   return (neuron0x29f2df0()*0.800711);
}

double NNfunction_ss_uRsR::synapse0x29f7cb0() {
   return (neuron0x29f3130()*-0.111973);
}

double NNfunction_ss_uRsR::synapse0x29f7cf0() {
   return (neuron0x29f3470()*0.245834);
}

double NNfunction_ss_uRsR::synapse0x29f7780() {
   return (neuron0x29f37b0()*-0.0237242);
}

double NNfunction_ss_uRsR::synapse0x29f77c0() {
   return (neuron0x29f3d10()*0.484542);
}

double NNfunction_ss_uRsR::synapse0x29f7e40() {
   return (neuron0x29f3f30()*-0.475292);
}

double NNfunction_ss_uRsR::synapse0x29f7e80() {
   return (neuron0x29f4270()*-0.0651755);
}

double NNfunction_ss_uRsR::synapse0x29f7ec0() {
   return (neuron0x29f45b0()*-0.982288);
}

double NNfunction_ss_uRsR::synapse0x29f7f00() {
   return (neuron0x29f48f0()*0.451137);
}

double NNfunction_ss_uRsR::synapse0x29f7f40() {
   return (neuron0x29f4c30()*0.426986);
}

double NNfunction_ss_uRsR::synapse0x29f7f80() {
   return (neuron0x29f4f70()*0.184005);
}

double NNfunction_ss_uRsR::synapse0x29f8300() {
   return (neuron0x29f03b0()*-0.0487068);
}

double NNfunction_ss_uRsR::synapse0x29f8340() {
   return (neuron0x29f06f0()*0.428186);
}

double NNfunction_ss_uRsR::synapse0x29f8380() {
   return (neuron0x29f0a30()*-0.277831);
}

double NNfunction_ss_uRsR::synapse0x29f83c0() {
   return (neuron0x29f0d70()*1.18905);
}

double NNfunction_ss_uRsR::synapse0x29f8400() {
   return (neuron0x29f10b0()*0.24376);
}

double NNfunction_ss_uRsR::synapse0x29f8440() {
   return (neuron0x29f13f0()*0.347012);
}

double NNfunction_ss_uRsR::synapse0x29f8480() {
   return (neuron0x29f1730()*0.241443);
}

double NNfunction_ss_uRsR::synapse0x29f84c0() {
   return (neuron0x29f1a70()*-0.165584);
}

double NNfunction_ss_uRsR::synapse0x29f8500() {
   return (neuron0x29f1db0()*-0.101313);
}

double NNfunction_ss_uRsR::synapse0x27b9860() {
   return (neuron0x29f20f0()*-0.0583941);
}

double NNfunction_ss_uRsR::synapse0x27b98a0() {
   return (neuron0x29f2430()*-0.414818);
}

double NNfunction_ss_uRsR::synapse0x27b98e0() {
   return (neuron0x29f2770()*0.470882);
}

double NNfunction_ss_uRsR::synapse0x27b9920() {
   return (neuron0x29f2ab0()*0.221172);
}

double NNfunction_ss_uRsR::synapse0x27b9960() {
   return (neuron0x29f2df0()*0.374153);
}

double NNfunction_ss_uRsR::synapse0x27b99a0() {
   return (neuron0x29f3130()*-1.05279);
}

double NNfunction_ss_uRsR::synapse0x27b99e0() {
   return (neuron0x29f3470()*0.192373);
}

double NNfunction_ss_uRsR::synapse0x29f8150() {
   return (neuron0x29f37b0()*-0.031672);
}

double NNfunction_ss_uRsR::synapse0x29f8190() {
   return (neuron0x29f3d10()*0.370365);
}

double NNfunction_ss_uRsR::synapse0x27b9b30() {
   return (neuron0x29f3f30()*-0.560606);
}

double NNfunction_ss_uRsR::synapse0x27b9b70() {
   return (neuron0x29f4270()*0.0505514);
}

double NNfunction_ss_uRsR::synapse0x27b9bb0() {
   return (neuron0x29f45b0()*0.173912);
}

double NNfunction_ss_uRsR::synapse0x27b9bf0() {
   return (neuron0x29f48f0()*-0.182312);
}

double NNfunction_ss_uRsR::synapse0x27b9c30() {
   return (neuron0x29f4c30()*0.169298);
}

double NNfunction_ss_uRsR::synapse0x29f8d50() {
   return (neuron0x29f4f70()*-0.379987);
}

double NNfunction_ss_uRsR::synapse0x29f90d0() {
   return (neuron0x29f03b0()*0.06017);
}

double NNfunction_ss_uRsR::synapse0x29f9110() {
   return (neuron0x29f06f0()*-0.0157567);
}

double NNfunction_ss_uRsR::synapse0x29f9150() {
   return (neuron0x29f0a30()*0.073683);
}

double NNfunction_ss_uRsR::synapse0x29f9190() {
   return (neuron0x29f0d70()*-3.63031);
}

double NNfunction_ss_uRsR::synapse0x29f91d0() {
   return (neuron0x29f10b0()*0.0645171);
}

double NNfunction_ss_uRsR::synapse0x29f9210() {
   return (neuron0x29f13f0()*0.0300656);
}

double NNfunction_ss_uRsR::synapse0x29f9250() {
   return (neuron0x29f1730()*0.0097311);
}

double NNfunction_ss_uRsR::synapse0x29f9290() {
   return (neuron0x29f1a70()*-0.00282222);
}

double NNfunction_ss_uRsR::synapse0x29f92d0() {
   return (neuron0x29f1db0()*0.00539125);
}

double NNfunction_ss_uRsR::synapse0x29f9310() {
   return (neuron0x29f20f0()*0.0224423);
}

double NNfunction_ss_uRsR::synapse0x29f9350() {
   return (neuron0x29f2430()*-0.00800919);
}

double NNfunction_ss_uRsR::synapse0x29f9390() {
   return (neuron0x29f2770()*-0.0439737);
}

double NNfunction_ss_uRsR::synapse0x29f93d0() {
   return (neuron0x29f2ab0()*-0.0386687);
}

double NNfunction_ss_uRsR::synapse0x29f9410() {
   return (neuron0x29f2df0()*0.0261388);
}

double NNfunction_ss_uRsR::synapse0x29f9450() {
   return (neuron0x29f3130()*1.76349);
}

double NNfunction_ss_uRsR::synapse0x29f9490() {
   return (neuron0x29f3470()*-0.00308723);
}

double NNfunction_ss_uRsR::synapse0x29f8f20() {
   return (neuron0x29f37b0()*0.0489831);
}

double NNfunction_ss_uRsR::synapse0x29f8f60() {
   return (neuron0x29f3d10()*-0.0442602);
}

double NNfunction_ss_uRsR::synapse0x29f95e0() {
   return (neuron0x29f3f30()*-0.496597);
}

double NNfunction_ss_uRsR::synapse0x29f9620() {
   return (neuron0x29f4270()*-0.0824716);
}

double NNfunction_ss_uRsR::synapse0x29f9660() {
   return (neuron0x29f45b0()*0.0747531);
}

double NNfunction_ss_uRsR::synapse0x29f96a0() {
   return (neuron0x29f48f0()*0.0188379);
}

double NNfunction_ss_uRsR::synapse0x29f96e0() {
   return (neuron0x29f4c30()*-0.016569);
}

double NNfunction_ss_uRsR::synapse0x29f9720() {
   return (neuron0x29f4f70()*-0.0241711);
}

double NNfunction_ss_uRsR::synapse0x29f9aa0() {
   return (neuron0x29f03b0()*-0.0280032);
}

double NNfunction_ss_uRsR::synapse0x29f9ae0() {
   return (neuron0x29f06f0()*0.00673822);
}

double NNfunction_ss_uRsR::synapse0x29f9b20() {
   return (neuron0x29f0a30()*0.0425475);
}

double NNfunction_ss_uRsR::synapse0x29f9b60() {
   return (neuron0x29f0d70()*1.55015);
}

double NNfunction_ss_uRsR::synapse0x29f9ba0() {
   return (neuron0x29f10b0()*0.0132097);
}

double NNfunction_ss_uRsR::synapse0x29f9be0() {
   return (neuron0x29f13f0()*-0.00684995);
}

double NNfunction_ss_uRsR::synapse0x29f9c20() {
   return (neuron0x29f1730()*-0.00639282);
}

double NNfunction_ss_uRsR::synapse0x29f9c60() {
   return (neuron0x29f1a70()*0.0414173);
}

double NNfunction_ss_uRsR::synapse0x29f9ca0() {
   return (neuron0x29f1db0()*-0.041831);
}

double NNfunction_ss_uRsR::synapse0x29f9ce0() {
   return (neuron0x29f20f0()*0.040134);
}

double NNfunction_ss_uRsR::synapse0x29f9d20() {
   return (neuron0x29f2430()*0.024735);
}

double NNfunction_ss_uRsR::synapse0x29f9d60() {
   return (neuron0x29f2770()*-0.0252904);
}

double NNfunction_ss_uRsR::synapse0x29f9da0() {
   return (neuron0x29f2ab0()*-0.0267054);
}

double NNfunction_ss_uRsR::synapse0x29f9de0() {
   return (neuron0x29f2df0()*0.00321295);
}

double NNfunction_ss_uRsR::synapse0x29f9e20() {
   return (neuron0x29f3130()*-0.00320346);
}

double NNfunction_ss_uRsR::synapse0x29f9e60() {
   return (neuron0x29f3470()*-0.0305676);
}

double NNfunction_ss_uRsR::synapse0x29f98f0() {
   return (neuron0x29f37b0()*0.0384509);
}

double NNfunction_ss_uRsR::synapse0x29f9930() {
   return (neuron0x29f3d10()*-0.0407008);
}

double NNfunction_ss_uRsR::synapse0x29f9fb0() {
   return (neuron0x29f3f30()*1.10991);
}

double NNfunction_ss_uRsR::synapse0x29f9ff0() {
   return (neuron0x29f4270()*0.0278482);
}

double NNfunction_ss_uRsR::synapse0x29fa030() {
   return (neuron0x29f45b0()*0.0204603);
}

double NNfunction_ss_uRsR::synapse0x29fa070() {
   return (neuron0x29f48f0()*-0.0161302);
}

double NNfunction_ss_uRsR::synapse0x29fa0b0() {
   return (neuron0x29f4c30()*-0.0470614);
}

double NNfunction_ss_uRsR::synapse0x29fa0f0() {
   return (neuron0x29f4f70()*-0.0185526);
}

double NNfunction_ss_uRsR::synapse0x29f3c00() {
   return (neuron0x29f03b0()*-0.0062411);
}

double NNfunction_ss_uRsR::synapse0x29f3c40() {
   return (neuron0x29f06f0()*0.0942283);
}

double NNfunction_ss_uRsR::synapse0x29f3c80() {
   return (neuron0x29f0a30()*-0.0141025);
}

double NNfunction_ss_uRsR::synapse0x29f3cc0() {
   return (neuron0x29f0d70()*-1.55433);
}

double NNfunction_ss_uRsR::synapse0x29fa680() {
   return (neuron0x29f10b0()*0.0332943);
}

double NNfunction_ss_uRsR::synapse0x29fa6c0() {
   return (neuron0x29f13f0()*-0.0284613);
}

double NNfunction_ss_uRsR::synapse0x29fa700() {
   return (neuron0x29f1730()*0.00341127);
}

double NNfunction_ss_uRsR::synapse0x29fa740() {
   return (neuron0x29f1a70()*-0.00825026);
}

double NNfunction_ss_uRsR::synapse0x29fa780() {
   return (neuron0x29f1db0()*-0.00680306);
}

double NNfunction_ss_uRsR::synapse0x29fa7c0() {
   return (neuron0x29f20f0()*0.00720252);
}

double NNfunction_ss_uRsR::synapse0x29fa800() {
   return (neuron0x29f2430()*-0.022665);
}

double NNfunction_ss_uRsR::synapse0x29fa840() {
   return (neuron0x29f2770()*0.00757941);
}

double NNfunction_ss_uRsR::synapse0x29fa880() {
   return (neuron0x29f2ab0()*-0.0219209);
}

double NNfunction_ss_uRsR::synapse0x29fa8c0() {
   return (neuron0x29f2df0()*0.0858028);
}

double NNfunction_ss_uRsR::synapse0x29fa900() {
   return (neuron0x29f3130()*0.0144819);
}

double NNfunction_ss_uRsR::synapse0x29fa940() {
   return (neuron0x29f3470()*0.0192282);
}

double NNfunction_ss_uRsR::synapse0x29fa2c0() {
   return (neuron0x29f37b0()*0.055832);
}

double NNfunction_ss_uRsR::synapse0x29fa300() {
   return (neuron0x29f3d10()*0.0664968);
}

double NNfunction_ss_uRsR::synapse0x29faa90() {
   return (neuron0x29f3f30()*-0.0620402);
}

double NNfunction_ss_uRsR::synapse0x29faad0() {
   return (neuron0x29f4270()*-0.00460512);
}

double NNfunction_ss_uRsR::synapse0x29fab10() {
   return (neuron0x29f45b0()*0.0162955);
}

double NNfunction_ss_uRsR::synapse0x29fab50() {
   return (neuron0x29f48f0()*0.0310974);
}

double NNfunction_ss_uRsR::synapse0x29fab90() {
   return (neuron0x29f4c30()*-0.0269159);
}

double NNfunction_ss_uRsR::synapse0x29fabd0() {
   return (neuron0x29f4f70()*0.0111817);
}

double NNfunction_ss_uRsR::synapse0x29faf50() {
   return (neuron0x29f03b0()*-0.211473);
}

double NNfunction_ss_uRsR::synapse0x29faf90() {
   return (neuron0x29f06f0()*0.262402);
}

double NNfunction_ss_uRsR::synapse0x29fafd0() {
   return (neuron0x29f0a30()*-0.124066);
}

double NNfunction_ss_uRsR::synapse0x29fb010() {
   return (neuron0x29f0d70()*-0.0418819);
}

double NNfunction_ss_uRsR::synapse0x29fb050() {
   return (neuron0x29f10b0()*0.542719);
}

double NNfunction_ss_uRsR::synapse0x29fb090() {
   return (neuron0x29f13f0()*0.221981);
}

double NNfunction_ss_uRsR::synapse0x29fb0d0() {
   return (neuron0x29f1730()*0.191959);
}

double NNfunction_ss_uRsR::synapse0x29fb110() {
   return (neuron0x29f1a70()*0.236953);
}

double NNfunction_ss_uRsR::synapse0x29fb150() {
   return (neuron0x29f1db0()*-0.0968492);
}

double NNfunction_ss_uRsR::synapse0x29fb190() {
   return (neuron0x29f20f0()*0.330834);
}

double NNfunction_ss_uRsR::synapse0x29fb1d0() {
   return (neuron0x29f2430()*-0.341303);
}

double NNfunction_ss_uRsR::synapse0x29fb210() {
   return (neuron0x29f2770()*-0.547438);
}

double NNfunction_ss_uRsR::synapse0x29fb250() {
   return (neuron0x29f2ab0()*0.598723);
}

double NNfunction_ss_uRsR::synapse0x29fb290() {
   return (neuron0x29f2df0()*1.01346);
}

double NNfunction_ss_uRsR::synapse0x29fb2d0() {
   return (neuron0x29f3130()*-1.24096);
}

double NNfunction_ss_uRsR::synapse0x29fb310() {
   return (neuron0x29f3470()*0.304643);
}

double NNfunction_ss_uRsR::synapse0x29fada0() {
   return (neuron0x29f37b0()*0.129391);
}

double NNfunction_ss_uRsR::synapse0x29fade0() {
   return (neuron0x29f3d10()*0.432997);
}

double NNfunction_ss_uRsR::synapse0x29fb460() {
   return (neuron0x29f3f30()*-0.0606189);
}

double NNfunction_ss_uRsR::synapse0x29fb4a0() {
   return (neuron0x29f4270()*-0.302788);
}

double NNfunction_ss_uRsR::synapse0x29fb4e0() {
   return (neuron0x29f45b0()*0.337181);
}

double NNfunction_ss_uRsR::synapse0x29fb520() {
   return (neuron0x29f48f0()*-0.0508918);
}

double NNfunction_ss_uRsR::synapse0x29fb560() {
   return (neuron0x29f4c30()*0.402464);
}

double NNfunction_ss_uRsR::synapse0x29fb5a0() {
   return (neuron0x29f4f70()*-0.688239);
}

double NNfunction_ss_uRsR::synapse0x29fb920() {
   return (neuron0x29f03b0()*0.680632);
}

double NNfunction_ss_uRsR::synapse0x29fb960() {
   return (neuron0x29f06f0()*-0.582404);
}

double NNfunction_ss_uRsR::synapse0x29fb9a0() {
   return (neuron0x29f0a30()*-0.170563);
}

double NNfunction_ss_uRsR::synapse0x29fb9e0() {
   return (neuron0x29f0d70()*-0.861527);
}

double NNfunction_ss_uRsR::synapse0x29fba20() {
   return (neuron0x29f10b0()*-0.229462);
}

double NNfunction_ss_uRsR::synapse0x29fba60() {
   return (neuron0x29f13f0()*-0.397075);
}

double NNfunction_ss_uRsR::synapse0x29fbaa0() {
   return (neuron0x29f1730()*0.0707603);
}

double NNfunction_ss_uRsR::synapse0x29fbae0() {
   return (neuron0x29f1a70()*-0.399226);
}

double NNfunction_ss_uRsR::synapse0x29fbb20() {
   return (neuron0x29f1db0()*0.0942313);
}

double NNfunction_ss_uRsR::synapse0x29fbb60() {
   return (neuron0x29f20f0()*-0.00255949);
}

double NNfunction_ss_uRsR::synapse0x29fbba0() {
   return (neuron0x29f2430()*-0.248485);
}

double NNfunction_ss_uRsR::synapse0x29fbbe0() {
   return (neuron0x29f2770()*-0.276005);
}

double NNfunction_ss_uRsR::synapse0x29fbc20() {
   return (neuron0x29f2ab0()*-0.327171);
}

double NNfunction_ss_uRsR::synapse0x29fbc60() {
   return (neuron0x29f2df0()*-0.162515);
}

double NNfunction_ss_uRsR::synapse0x29fbca0() {
   return (neuron0x29f3130()*-0.341634);
}

double NNfunction_ss_uRsR::synapse0x29fbce0() {
   return (neuron0x29f3470()*0.209411);
}

double NNfunction_ss_uRsR::synapse0x29fb770() {
   return (neuron0x29f37b0()*-0.0242815);
}

double NNfunction_ss_uRsR::synapse0x29fb7b0() {
   return (neuron0x29f3d10()*0.296268);
}

double NNfunction_ss_uRsR::synapse0x29f8540() {
   return (neuron0x29f3f30()*-0.199639);
}

double NNfunction_ss_uRsR::synapse0x29f8580() {
   return (neuron0x29f4270()*0.0834826);
}

double NNfunction_ss_uRsR::synapse0x29f85c0() {
   return (neuron0x29f45b0()*-0.0303744);
}

double NNfunction_ss_uRsR::synapse0x29f8600() {
   return (neuron0x29f48f0()*-0.377808);
}

double NNfunction_ss_uRsR::synapse0x29f8640() {
   return (neuron0x29f4c30()*0.112621);
}

double NNfunction_ss_uRsR::synapse0x29f8680() {
   return (neuron0x29f4f70()*-0.203421);
}

double NNfunction_ss_uRsR::synapse0x29f8a00() {
   return (neuron0x29f03b0()*0.00712442);
}

double NNfunction_ss_uRsR::synapse0x29f8a40() {
   return (neuron0x29f06f0()*0.0739433);
}

double NNfunction_ss_uRsR::synapse0x29f8a80() {
   return (neuron0x29f0a30()*0.0964521);
}

double NNfunction_ss_uRsR::synapse0x29f8ac0() {
   return (neuron0x29f0d70()*0.495956);
}

double NNfunction_ss_uRsR::synapse0x29f8b00() {
   return (neuron0x29f10b0()*0.0789102);
}

double NNfunction_ss_uRsR::synapse0x29f8b40() {
   return (neuron0x29f13f0()*0.040997);
}

double NNfunction_ss_uRsR::synapse0x29f8b80() {
   return (neuron0x29f1730()*0.0943311);
}

double NNfunction_ss_uRsR::synapse0x29f8bc0() {
   return (neuron0x29f1a70()*0.019608);
}

double NNfunction_ss_uRsR::synapse0x29f8c00() {
   return (neuron0x29f1db0()*-0.0310695);
}

double NNfunction_ss_uRsR::synapse0x29f8c40() {
   return (neuron0x29f20f0()*-0.110256);
}

double NNfunction_ss_uRsR::synapse0x29f8c80() {
   return (neuron0x29f2430()*-0.176229);
}

double NNfunction_ss_uRsR::synapse0x29f8cc0() {
   return (neuron0x29f2770()*-0.0243246);
}

double NNfunction_ss_uRsR::synapse0x29f8d00() {
   return (neuron0x29f2ab0()*-0.27569);
}

double NNfunction_ss_uRsR::synapse0x29fce40() {
   return (neuron0x29f2df0()*0.095659);
}

double NNfunction_ss_uRsR::synapse0x29fce80() {
   return (neuron0x29f3130()*-1.04909);
}

double NNfunction_ss_uRsR::synapse0x29fcec0() {
   return (neuron0x29f3470()*-0.237994);
}

double NNfunction_ss_uRsR::synapse0x29f8850() {
   return (neuron0x29f37b0()*-0.0414573);
}

double NNfunction_ss_uRsR::synapse0x29f8890() {
   return (neuron0x29f3d10()*-0.0417682);
}

double NNfunction_ss_uRsR::synapse0x29fd010() {
   return (neuron0x29f3f30()*0.750169);
}

double NNfunction_ss_uRsR::synapse0x29fd050() {
   return (neuron0x29f4270()*-0.0981661);
}

double NNfunction_ss_uRsR::synapse0x29fd090() {
   return (neuron0x29f45b0()*0.179286);
}

double NNfunction_ss_uRsR::synapse0x29fd0d0() {
   return (neuron0x29f48f0()*-0.150485);
}

double NNfunction_ss_uRsR::synapse0x29fd110() {
   return (neuron0x29f4c30()*0.0487114);
}

double NNfunction_ss_uRsR::synapse0x29fd150() {
   return (neuron0x29f4f70()*-0.161195);
}

double NNfunction_ss_uRsR::synapse0x29fd4d0() {
   return (neuron0x29f03b0()*-0.0272491);
}

double NNfunction_ss_uRsR::synapse0x29fd510() {
   return (neuron0x29f06f0()*0.220672);
}

double NNfunction_ss_uRsR::synapse0x29fd550() {
   return (neuron0x29f0a30()*-0.070393);
}

double NNfunction_ss_uRsR::synapse0x29fd590() {
   return (neuron0x29f0d70()*0.78644);
}

double NNfunction_ss_uRsR::synapse0x29fd5d0() {
   return (neuron0x29f10b0()*-0.0342164);
}

double NNfunction_ss_uRsR::synapse0x29fd610() {
   return (neuron0x29f13f0()*0.155714);
}

double NNfunction_ss_uRsR::synapse0x29fd650() {
   return (neuron0x29f1730()*0.0142301);
}

double NNfunction_ss_uRsR::synapse0x29fd690() {
   return (neuron0x29f1a70()*0.150455);
}

double NNfunction_ss_uRsR::synapse0x29fd6d0() {
   return (neuron0x29f1db0()*-0.112534);
}

double NNfunction_ss_uRsR::synapse0x29fd710() {
   return (neuron0x29f20f0()*0.108767);
}

double NNfunction_ss_uRsR::synapse0x29fd750() {
   return (neuron0x29f2430()*-0.201435);
}

double NNfunction_ss_uRsR::synapse0x29fd790() {
   return (neuron0x29f2770()*-0.296356);
}

double NNfunction_ss_uRsR::synapse0x29fd7d0() {
   return (neuron0x29f2ab0()*0.0893623);
}

double NNfunction_ss_uRsR::synapse0x29fd810() {
   return (neuron0x29f2df0()*0.0346417);
}

double NNfunction_ss_uRsR::synapse0x29fd850() {
   return (neuron0x29f3130()*0.0661341);
}

double NNfunction_ss_uRsR::synapse0x29fd890() {
   return (neuron0x29f3470()*-0.027946);
}

double NNfunction_ss_uRsR::synapse0x29fd320() {
   return (neuron0x29f37b0()*0.146426);
}

double NNfunction_ss_uRsR::synapse0x29fd360() {
   return (neuron0x29f3d10()*-0.161419);
}

double NNfunction_ss_uRsR::synapse0x29fd9e0() {
   return (neuron0x29f3f30()*-0.334504);
}

double NNfunction_ss_uRsR::synapse0x29fda20() {
   return (neuron0x29f4270()*0.00410324);
}

double NNfunction_ss_uRsR::synapse0x29fda60() {
   return (neuron0x29f45b0()*-0.0299553);
}

double NNfunction_ss_uRsR::synapse0x29fdaa0() {
   return (neuron0x29f48f0()*0.04507);
}

double NNfunction_ss_uRsR::synapse0x29fdae0() {
   return (neuron0x29f4c30()*-0.168273);
}

double NNfunction_ss_uRsR::synapse0x29fdb20() {
   return (neuron0x29f4f70()*0.0200194);
}

double NNfunction_ss_uRsR::synapse0x29fdea0() {
   return (neuron0x29f03b0()*0.0641389);
}

double NNfunction_ss_uRsR::synapse0x29fdee0() {
   return (neuron0x29f06f0()*-1.66919);
}

double NNfunction_ss_uRsR::synapse0x29fdf20() {
   return (neuron0x29f0a30()*-0.259827);
}

double NNfunction_ss_uRsR::synapse0x29fdf60() {
   return (neuron0x29f0d70()*-0.201204);
}

double NNfunction_ss_uRsR::synapse0x29fdfa0() {
   return (neuron0x29f10b0()*-0.0321722);
}

double NNfunction_ss_uRsR::synapse0x29fdfe0() {
   return (neuron0x29f13f0()*-0.360525);
}

double NNfunction_ss_uRsR::synapse0x29fe020() {
   return (neuron0x29f1730()*-0.463539);
}

double NNfunction_ss_uRsR::synapse0x29fe060() {
   return (neuron0x29f1a70()*-0.582991);
}

double NNfunction_ss_uRsR::synapse0x29fe0a0() {
   return (neuron0x29f1db0()*-0.135869);
}

double NNfunction_ss_uRsR::synapse0x29fe0e0() {
   return (neuron0x29f20f0()*0.135582);
}

double NNfunction_ss_uRsR::synapse0x29fe120() {
   return (neuron0x29f2430()*-0.603761);
}

double NNfunction_ss_uRsR::synapse0x29fe160() {
   return (neuron0x29f2770()*-0.0843045);
}

double NNfunction_ss_uRsR::synapse0x29fe1a0() {
   return (neuron0x29f2ab0()*1.73786);
}

double NNfunction_ss_uRsR::synapse0x29fe1e0() {
   return (neuron0x29f2df0()*0.116948);
}

double NNfunction_ss_uRsR::synapse0x29fe220() {
   return (neuron0x29f3130()*-0.571252);
}

double NNfunction_ss_uRsR::synapse0x29fe260() {
   return (neuron0x29f3470()*-0.108911);
}

double NNfunction_ss_uRsR::synapse0x29fdcf0() {
   return (neuron0x29f37b0()*-0.485302);
}

double NNfunction_ss_uRsR::synapse0x29fdd30() {
   return (neuron0x29f3d10()*-0.522108);
}

double NNfunction_ss_uRsR::synapse0x29fe3b0() {
   return (neuron0x29f3f30()*0.308179);
}

double NNfunction_ss_uRsR::synapse0x29fe3f0() {
   return (neuron0x29f4270()*1.20972);
}

double NNfunction_ss_uRsR::synapse0x29fe430() {
   return (neuron0x29f45b0()*-0.10122);
}

double NNfunction_ss_uRsR::synapse0x29fe470() {
   return (neuron0x29f48f0()*0.37367);
}

double NNfunction_ss_uRsR::synapse0x29fe4b0() {
   return (neuron0x29f4c30()*-0.276115);
}

double NNfunction_ss_uRsR::synapse0x29fe4f0() {
   return (neuron0x29f4f70()*-0.126013);
}

double NNfunction_ss_uRsR::synapse0x29fe870() {
   return (neuron0x29f03b0()*-0.0251892);
}

double NNfunction_ss_uRsR::synapse0x29fe8b0() {
   return (neuron0x29f06f0()*-0.159206);
}

double NNfunction_ss_uRsR::synapse0x29fe8f0() {
   return (neuron0x29f0a30()*-0.0237175);
}

double NNfunction_ss_uRsR::synapse0x29fe930() {
   return (neuron0x29f0d70()*0.00830541);
}

double NNfunction_ss_uRsR::synapse0x29fe970() {
   return (neuron0x29f10b0()*0.0921455);
}

double NNfunction_ss_uRsR::synapse0x29fe9b0() {
   return (neuron0x29f13f0()*0.0289225);
}

double NNfunction_ss_uRsR::synapse0x29fe9f0() {
   return (neuron0x29f1730()*0.0270157);
}

double NNfunction_ss_uRsR::synapse0x29fea30() {
   return (neuron0x29f1a70()*-0.1098);
}

double NNfunction_ss_uRsR::synapse0x29fea70() {
   return (neuron0x29f1db0()*0.0523853);
}

double NNfunction_ss_uRsR::synapse0x29feab0() {
   return (neuron0x29f20f0()*-0.0913981);
}

double NNfunction_ss_uRsR::synapse0x29feaf0() {
   return (neuron0x29f2430()*-0.135357);
}

double NNfunction_ss_uRsR::synapse0x29feb30() {
   return (neuron0x29f2770()*0.31041);
}

double NNfunction_ss_uRsR::synapse0x29feb70() {
   return (neuron0x29f2ab0()*0.582289);
}

double NNfunction_ss_uRsR::synapse0x29febb0() {
   return (neuron0x29f2df0()*-0.015832);
}

double NNfunction_ss_uRsR::synapse0x29febf0() {
   return (neuron0x29f3130()*-0.250237);
}

double NNfunction_ss_uRsR::synapse0x29fec30() {
   return (neuron0x29f3470()*0.336122);
}

double NNfunction_ss_uRsR::synapse0x29fe6c0() {
   return (neuron0x29f37b0()*-0.154808);
}

double NNfunction_ss_uRsR::synapse0x29fe700() {
   return (neuron0x29f3d10()*0.49338);
}

double NNfunction_ss_uRsR::synapse0x29fed80() {
   return (neuron0x29f3f30()*-0.218397);
}

double NNfunction_ss_uRsR::synapse0x29fedc0() {
   return (neuron0x29f4270()*0.045637);
}

double NNfunction_ss_uRsR::synapse0x29fee00() {
   return (neuron0x29f45b0()*-0.151068);
}

double NNfunction_ss_uRsR::synapse0x29fee40() {
   return (neuron0x29f48f0()*0.010541);
}

double NNfunction_ss_uRsR::synapse0x29fee80() {
   return (neuron0x29f4c30()*0.132878);
}

double NNfunction_ss_uRsR::synapse0x29feec0() {
   return (neuron0x29f4f70()*-0.0488699);
}

double NNfunction_ss_uRsR::synapse0x29ff240() {
   return (neuron0x29f03b0()*-0.109415);
}

double NNfunction_ss_uRsR::synapse0x29f05d0() {
   return (neuron0x29f06f0()*0.4173);
}

double NNfunction_ss_uRsR::synapse0x29f0610() {
   return (neuron0x29f0a30()*-0.389373);
}

double NNfunction_ss_uRsR::synapse0x29f0910() {
   return (neuron0x29f0d70()*0.100342);
}

double NNfunction_ss_uRsR::synapse0x29f0950() {
   return (neuron0x29f10b0()*0.537277);
}

double NNfunction_ss_uRsR::synapse0x29f0c50() {
   return (neuron0x29f13f0()*0.135828);
}

double NNfunction_ss_uRsR::synapse0x29f0c90() {
   return (neuron0x29f1730()*0.929141);
}

double NNfunction_ss_uRsR::synapse0x29f0f90() {
   return (neuron0x29f1a70()*-0.113065);
}

double NNfunction_ss_uRsR::synapse0x29f0fd0() {
   return (neuron0x29f1db0()*-0.238364);
}

double NNfunction_ss_uRsR::synapse0x29f12d0() {
   return (neuron0x29f20f0()*-0.163564);
}

double NNfunction_ss_uRsR::synapse0x29f1310() {
   return (neuron0x29f2430()*-0.0510289);
}

double NNfunction_ss_uRsR::synapse0x29f1610() {
   return (neuron0x29f2770()*0.149441);
}

double NNfunction_ss_uRsR::synapse0x29f1650() {
   return (neuron0x29f2ab0()*-0.114574);
}

double NNfunction_ss_uRsR::synapse0x29f1950() {
   return (neuron0x29f2df0()*-0.490871);
}

double NNfunction_ss_uRsR::synapse0x29f1990() {
   return (neuron0x29f3130()*-0.75368);
}

double NNfunction_ss_uRsR::synapse0x29f1c90() {
   return (neuron0x29f3470()*0.0278246);
}

double NNfunction_ss_uRsR::synapse0x29f1cd0() {
   return (neuron0x29f37b0()*-0.66535);
}

double NNfunction_ss_uRsR::synapse0x29f1fd0() {
   return (neuron0x29f3d10()*0.00747723);
}

double NNfunction_ss_uRsR::synapse0x29f2010() {
   return (neuron0x29f3f30()*0.132828);
}

double NNfunction_ss_uRsR::synapse0x29f2310() {
   return (neuron0x29f4270()*0.565153);
}

double NNfunction_ss_uRsR::synapse0x29f2350() {
   return (neuron0x29f45b0()*0.417033);
}

double NNfunction_ss_uRsR::synapse0x29f2650() {
   return (neuron0x29f48f0()*-0.192711);
}

double NNfunction_ss_uRsR::synapse0x29f2690() {
   return (neuron0x29f4c30()*-0.245846);
}

double NNfunction_ss_uRsR::synapse0x29f2990() {
   return (neuron0x29f4f70()*-0.416177);
}

double NNfunction_ss_uRsR::synapse0x29f29d0() {
   return (neuron0x29f03b0()*-0.0291872);
}

double NNfunction_ss_uRsR::synapse0x29f3690() {
   return (neuron0x29f06f0()*0.314934);
}

double NNfunction_ss_uRsR::synapse0x29f36d0() {
   return (neuron0x29f0a30()*0.297166);
}

double NNfunction_ss_uRsR::synapse0x29ff090() {
   return (neuron0x29f0d70()*0.733547);
}

double NNfunction_ss_uRsR::synapse0x29ff0d0() {
   return (neuron0x29f10b0()*0.269885);
}

double NNfunction_ss_uRsR::synapse0x29f39d0() {
   return (neuron0x29f13f0()*0.0539405);
}

double NNfunction_ss_uRsR::synapse0x29f3a10() {
   return (neuron0x29f1730()*-0.587588);
}

double NNfunction_ss_uRsR::synapse0x27ab470() {
   return (neuron0x29f1a70()*0.257573);
}

double NNfunction_ss_uRsR::synapse0x27ab4b0() {
   return (neuron0x29f1db0()*0.473644);
}

double NNfunction_ss_uRsR::synapse0x29f4150() {
   return (neuron0x29f20f0()*0.238979);
}

double NNfunction_ss_uRsR::synapse0x29f4190() {
   return (neuron0x29f2430()*-0.216981);
}

double NNfunction_ss_uRsR::synapse0x29f4490() {
   return (neuron0x29f2770()*-0.513741);
}

double NNfunction_ss_uRsR::synapse0x29f44d0() {
   return (neuron0x29f2ab0()*0.165269);
}

double NNfunction_ss_uRsR::synapse0x29f47d0() {
   return (neuron0x29f2df0()*0.600563);
}

double NNfunction_ss_uRsR::synapse0x29f4810() {
   return (neuron0x29f3130()*-0.238441);
}

double NNfunction_ss_uRsR::synapse0x29f4b10() {
   return (neuron0x29f3470()*-0.755848);
}

double NNfunction_ss_uRsR::synapse0x29f4b50() {
   return (neuron0x29f37b0()*0.404338);
}

double NNfunction_ss_uRsR::synapse0x29f4e50() {
   return (neuron0x29f3d10()*1.23265);
}

double NNfunction_ss_uRsR::synapse0x29f4e90() {
   return (neuron0x29f3f30()*-0.681986);
}

double NNfunction_ss_uRsR::synapse0x29f5190() {
   return (neuron0x29f4270()*-0.390326);
}

double NNfunction_ss_uRsR::synapse0x29f51d0() {
   return (neuron0x29f45b0()*-0.275559);
}

double NNfunction_ss_uRsR::synapse0x29f2cd0() {
   return (neuron0x29f48f0()*-0.191863);
}

double NNfunction_ss_uRsR::synapse0x29f2d10() {
   return (neuron0x29f4c30()*0.0223603);
}

double NNfunction_ss_uRsR::synapse0x2a00fb0() {
   return (neuron0x29f4f70()*-0.103181);
}

double NNfunction_ss_uRsR::synapse0x2a01330() {
   return (neuron0x29f03b0()*-0.211706);
}

double NNfunction_ss_uRsR::synapse0x2a01370() {
   return (neuron0x29f06f0()*-0.206547);
}

double NNfunction_ss_uRsR::synapse0x2a013b0() {
   return (neuron0x29f0a30()*-0.136595);
}

double NNfunction_ss_uRsR::synapse0x2a013f0() {
   return (neuron0x29f0d70()*-0.63392);
}

double NNfunction_ss_uRsR::synapse0x2a01430() {
   return (neuron0x29f10b0()*-0.339325);
}

double NNfunction_ss_uRsR::synapse0x2a01470() {
   return (neuron0x29f13f0()*0.108076);
}

double NNfunction_ss_uRsR::synapse0x2a014b0() {
   return (neuron0x29f1730()*-0.294239);
}

double NNfunction_ss_uRsR::synapse0x2a014f0() {
   return (neuron0x29f1a70()*-0.360657);
}

double NNfunction_ss_uRsR::synapse0x2a01530() {
   return (neuron0x29f1db0()*0.266484);
}

double NNfunction_ss_uRsR::synapse0x2a01570() {
   return (neuron0x29f20f0()*0.207793);
}

double NNfunction_ss_uRsR::synapse0x2a015b0() {
   return (neuron0x29f2430()*0.0687426);
}

double NNfunction_ss_uRsR::synapse0x2a015f0() {
   return (neuron0x29f2770()*-0.050804);
}

double NNfunction_ss_uRsR::synapse0x2a01630() {
   return (neuron0x29f2ab0()*-0.247464);
}

double NNfunction_ss_uRsR::synapse0x2a01670() {
   return (neuron0x29f2df0()*-0.0832397);
}

double NNfunction_ss_uRsR::synapse0x2a016b0() {
   return (neuron0x29f3130()*-0.151213);
}

double NNfunction_ss_uRsR::synapse0x2a016f0() {
   return (neuron0x29f3470()*-0.413869);
}

double NNfunction_ss_uRsR::synapse0x2a01180() {
   return (neuron0x29f37b0()*0.119121);
}

double NNfunction_ss_uRsR::synapse0x2a011c0() {
   return (neuron0x29f3d10()*-0.575263);
}

double NNfunction_ss_uRsR::synapse0x2a01840() {
   return (neuron0x29f3f30()*-0.588029);
}

double NNfunction_ss_uRsR::synapse0x2a01880() {
   return (neuron0x29f4270()*-0.268255);
}

double NNfunction_ss_uRsR::synapse0x2a018c0() {
   return (neuron0x29f45b0()*0.354034);
}

double NNfunction_ss_uRsR::synapse0x2a01900() {
   return (neuron0x29f48f0()*-0.0475421);
}

double NNfunction_ss_uRsR::synapse0x2a01940() {
   return (neuron0x29f4c30()*-0.16768);
}

double NNfunction_ss_uRsR::synapse0x2a01980() {
   return (neuron0x29f4f70()*0.0747189);
}

double NNfunction_ss_uRsR::synapse0x2a01d00() {
   return (neuron0x29f03b0()*-0.0538573);
}

double NNfunction_ss_uRsR::synapse0x2a01d40() {
   return (neuron0x29f06f0()*-0.0947631);
}

double NNfunction_ss_uRsR::synapse0x2a01d80() {
   return (neuron0x29f0a30()*-0.00554551);
}

double NNfunction_ss_uRsR::synapse0x2a01dc0() {
   return (neuron0x29f0d70()*-1.03791);
}

double NNfunction_ss_uRsR::synapse0x2a01e00() {
   return (neuron0x29f10b0()*-0.0286118);
}

double NNfunction_ss_uRsR::synapse0x2a01e40() {
   return (neuron0x29f13f0()*0.00171363);
}

double NNfunction_ss_uRsR::synapse0x2a01e80() {
   return (neuron0x29f1730()*-0.0431583);
}

double NNfunction_ss_uRsR::synapse0x2a01ec0() {
   return (neuron0x29f1a70()*0.00858079);
}

double NNfunction_ss_uRsR::synapse0x2a01f00() {
   return (neuron0x29f1db0()*-0.0168933);
}

double NNfunction_ss_uRsR::synapse0x2a01f40() {
   return (neuron0x29f20f0()*-0.0099923);
}

double NNfunction_ss_uRsR::synapse0x2a01f80() {
   return (neuron0x29f2430()*-0.000785648);
}

double NNfunction_ss_uRsR::synapse0x2a01fc0() {
   return (neuron0x29f2770()*-0.0292297);
}

double NNfunction_ss_uRsR::synapse0x2a02000() {
   return (neuron0x29f2ab0()*0.0189393);
}

double NNfunction_ss_uRsR::synapse0x2a02040() {
   return (neuron0x29f2df0()*-0.0478652);
}

double NNfunction_ss_uRsR::synapse0x2a02080() {
   return (neuron0x29f3130()*0.00660568);
}

double NNfunction_ss_uRsR::synapse0x2a020c0() {
   return (neuron0x29f3470()*0.0163657);
}

double NNfunction_ss_uRsR::synapse0x2a01b50() {
   return (neuron0x29f37b0()*-0.00969283);
}

double NNfunction_ss_uRsR::synapse0x2a01b90() {
   return (neuron0x29f3d10()*-0.0685982);
}

double NNfunction_ss_uRsR::synapse0x2a02210() {
   return (neuron0x29f3f30()*-0.0590809);
}

double NNfunction_ss_uRsR::synapse0x2a02250() {
   return (neuron0x29f4270()*-0.00258557);
}

double NNfunction_ss_uRsR::synapse0x2a02290() {
   return (neuron0x29f45b0()*-0.0403655);
}

double NNfunction_ss_uRsR::synapse0x2a022d0() {
   return (neuron0x29f48f0()*-0.0287142);
}

double NNfunction_ss_uRsR::synapse0x2a02310() {
   return (neuron0x29f4c30()*-0.00882994);
}

double NNfunction_ss_uRsR::synapse0x2a02350() {
   return (neuron0x29f4f70()*0.0323435);
}

double NNfunction_ss_uRsR::synapse0x2a026d0() {
   return (neuron0x29f03b0()*0.108009);
}

double NNfunction_ss_uRsR::synapse0x2a02710() {
   return (neuron0x29f06f0()*0.552308);
}

double NNfunction_ss_uRsR::synapse0x2a02750() {
   return (neuron0x29f0a30()*0.645383);
}

double NNfunction_ss_uRsR::synapse0x2a02790() {
   return (neuron0x29f0d70()*0.815804);
}

double NNfunction_ss_uRsR::synapse0x2a027d0() {
   return (neuron0x29f10b0()*0.632085);
}

double NNfunction_ss_uRsR::synapse0x2a02810() {
   return (neuron0x29f13f0()*-0.102089);
}

double NNfunction_ss_uRsR::synapse0x2a02850() {
   return (neuron0x29f1730()*-0.34742);
}

double NNfunction_ss_uRsR::synapse0x2a02890() {
   return (neuron0x29f1a70()*-0.241129);
}

double NNfunction_ss_uRsR::synapse0x2a028d0() {
   return (neuron0x29f1db0()*-0.63035);
}

double NNfunction_ss_uRsR::synapse0x2a02910() {
   return (neuron0x29f20f0()*0.501696);
}

double NNfunction_ss_uRsR::synapse0x2a02950() {
   return (neuron0x29f2430()*-0.467415);
}

double NNfunction_ss_uRsR::synapse0x2a02990() {
   return (neuron0x29f2770()*-0.0389387);
}

double NNfunction_ss_uRsR::synapse0x2a029d0() {
   return (neuron0x29f2ab0()*-1.04714);
}

double NNfunction_ss_uRsR::synapse0x2a02a10() {
   return (neuron0x29f2df0()*0.120365);
}

double NNfunction_ss_uRsR::synapse0x2a02a50() {
   return (neuron0x29f3130()*-0.29378);
}

double NNfunction_ss_uRsR::synapse0x2a02a90() {
   return (neuron0x29f3470()*0.803587);
}

double NNfunction_ss_uRsR::synapse0x2a02520() {
   return (neuron0x29f37b0()*-0.479509);
}

double NNfunction_ss_uRsR::synapse0x2a02560() {
   return (neuron0x29f3d10()*0.707948);
}

double NNfunction_ss_uRsR::synapse0x2a02be0() {
   return (neuron0x29f3f30()*-0.176785);
}

double NNfunction_ss_uRsR::synapse0x2a02c20() {
   return (neuron0x29f4270()*-0.687484);
}

double NNfunction_ss_uRsR::synapse0x2a02c60() {
   return (neuron0x29f45b0()*0.225264);
}

double NNfunction_ss_uRsR::synapse0x2a02ca0() {
   return (neuron0x29f48f0()*0.497009);
}

double NNfunction_ss_uRsR::synapse0x2a02ce0() {
   return (neuron0x29f4c30()*-0.233959);
}

double NNfunction_ss_uRsR::synapse0x2a02d20() {
   return (neuron0x29f4f70()*0.0246761);
}

double NNfunction_ss_uRsR::synapse0x2a030a0() {
   return (neuron0x29f03b0()*0.565905);
}

double NNfunction_ss_uRsR::synapse0x2a030e0() {
   return (neuron0x29f06f0()*-0.646286);
}

double NNfunction_ss_uRsR::synapse0x2a03120() {
   return (neuron0x29f0a30()*0.0574401);
}

double NNfunction_ss_uRsR::synapse0x2a03160() {
   return (neuron0x29f0d70()*1.22956);
}

double NNfunction_ss_uRsR::synapse0x2a031a0() {
   return (neuron0x29f10b0()*0.0435959);
}

double NNfunction_ss_uRsR::synapse0x2a031e0() {
   return (neuron0x29f13f0()*-0.153889);
}

double NNfunction_ss_uRsR::synapse0x2a03220() {
   return (neuron0x29f1730()*-0.104209);
}

double NNfunction_ss_uRsR::synapse0x2a03260() {
   return (neuron0x29f1a70()*-0.0574966);
}

double NNfunction_ss_uRsR::synapse0x2a032a0() {
   return (neuron0x29f1db0()*0.102147);
}

double NNfunction_ss_uRsR::synapse0x2a032e0() {
   return (neuron0x29f20f0()*0.023793);
}

double NNfunction_ss_uRsR::synapse0x2a03320() {
   return (neuron0x29f2430()*0.192512);
}

double NNfunction_ss_uRsR::synapse0x2a03360() {
   return (neuron0x29f2770()*0.38053);
}

double NNfunction_ss_uRsR::synapse0x2a033a0() {
   return (neuron0x29f2ab0()*-0.308115);
}

double NNfunction_ss_uRsR::synapse0x2a033e0() {
   return (neuron0x29f2df0()*-0.338511);
}

double NNfunction_ss_uRsR::synapse0x2a03420() {
   return (neuron0x29f3130()*-0.662007);
}

double NNfunction_ss_uRsR::synapse0x2a03460() {
   return (neuron0x29f3470()*0.13073);
}

double NNfunction_ss_uRsR::synapse0x2a02ef0() {
   return (neuron0x29f37b0()*-0.00343957);
}

double NNfunction_ss_uRsR::synapse0x2a02f30() {
   return (neuron0x29f3d10()*0.173739);
}

double NNfunction_ss_uRsR::synapse0x2a035b0() {
   return (neuron0x29f3f30()*-0.796948);
}

double NNfunction_ss_uRsR::synapse0x2a035f0() {
   return (neuron0x29f4270()*0.140093);
}

double NNfunction_ss_uRsR::synapse0x2a03630() {
   return (neuron0x29f45b0()*0.00128747);
}

double NNfunction_ss_uRsR::synapse0x2a03670() {
   return (neuron0x29f48f0()*-0.343333);
}

double NNfunction_ss_uRsR::synapse0x2a036b0() {
   return (neuron0x29f4c30()*-0.19874);
}

double NNfunction_ss_uRsR::synapse0x2a036f0() {
   return (neuron0x29f4f70()*-0.100741);
}

double NNfunction_ss_uRsR::synapse0x2a03a70() {
   return (neuron0x29f03b0()*0.450708);
}

double NNfunction_ss_uRsR::synapse0x2a03ab0() {
   return (neuron0x29f06f0()*0.273907);
}

double NNfunction_ss_uRsR::synapse0x2a03af0() {
   return (neuron0x29f0a30()*0.100564);
}

double NNfunction_ss_uRsR::synapse0x2a03b30() {
   return (neuron0x29f0d70()*0.0353312);
}

double NNfunction_ss_uRsR::synapse0x2a03b70() {
   return (neuron0x29f10b0()*0.413717);
}

double NNfunction_ss_uRsR::synapse0x2a03bb0() {
   return (neuron0x29f13f0()*0.334705);
}

double NNfunction_ss_uRsR::synapse0x2a03bf0() {
   return (neuron0x29f1730()*-0.206539);
}

double NNfunction_ss_uRsR::synapse0x2a03c30() {
   return (neuron0x29f1a70()*0.181363);
}

double NNfunction_ss_uRsR::synapse0x2a03c70() {
   return (neuron0x29f1db0()*-0.0956861);
}

double NNfunction_ss_uRsR::synapse0x29fbe30() {
   return (neuron0x29f20f0()*0.195397);
}

double NNfunction_ss_uRsR::synapse0x29fbe70() {
   return (neuron0x29f2430()*0.309792);
}

double NNfunction_ss_uRsR::synapse0x29fbeb0() {
   return (neuron0x29f2770()*0.0902916);
}

double NNfunction_ss_uRsR::synapse0x29fbef0() {
   return (neuron0x29f2ab0()*-0.121883);
}

double NNfunction_ss_uRsR::synapse0x29fbf30() {
   return (neuron0x29f2df0()*-0.75807);
}

double NNfunction_ss_uRsR::synapse0x29fbf70() {
   return (neuron0x29f3130()*0.770007);
}

double NNfunction_ss_uRsR::synapse0x29fbfb0() {
   return (neuron0x29f3470()*0.339618);
}

double NNfunction_ss_uRsR::synapse0x2a038c0() {
   return (neuron0x29f37b0()*-0.241449);
}

double NNfunction_ss_uRsR::synapse0x2a03900() {
   return (neuron0x29f3d10()*-0.189041);
}

double NNfunction_ss_uRsR::synapse0x29fc100() {
   return (neuron0x29f3f30()*-0.0534989);
}

double NNfunction_ss_uRsR::synapse0x29fc140() {
   return (neuron0x29f4270()*1.14404);
}

double NNfunction_ss_uRsR::synapse0x29fc180() {
   return (neuron0x29f45b0()*0.0275389);
}

double NNfunction_ss_uRsR::synapse0x29fc1c0() {
   return (neuron0x29f48f0()*0.314038);
}

double NNfunction_ss_uRsR::synapse0x29fc200() {
   return (neuron0x29f4c30()*0.0169124);
}

double NNfunction_ss_uRsR::synapse0x29fc240() {
   return (neuron0x29f4f70()*0.117665);
}

double NNfunction_ss_uRsR::synapse0x29fc5c0() {
   return (neuron0x29f03b0()*0.365637);
}

double NNfunction_ss_uRsR::synapse0x29fc600() {
   return (neuron0x29f06f0()*0.238559);
}

double NNfunction_ss_uRsR::synapse0x29fc640() {
   return (neuron0x29f0a30()*0.699148);
}

double NNfunction_ss_uRsR::synapse0x29fc680() {
   return (neuron0x29f0d70()*-0.672563);
}

double NNfunction_ss_uRsR::synapse0x29fc6c0() {
   return (neuron0x29f10b0()*0.851172);
}

double NNfunction_ss_uRsR::synapse0x29fc700() {
   return (neuron0x29f13f0()*0.211075);
}

double NNfunction_ss_uRsR::synapse0x29fc740() {
   return (neuron0x29f1730()*-0.507773);
}

double NNfunction_ss_uRsR::synapse0x29fc780() {
   return (neuron0x29f1a70()*-0.380264);
}

double NNfunction_ss_uRsR::synapse0x29fc7c0() {
   return (neuron0x29f1db0()*-0.112784);
}

double NNfunction_ss_uRsR::synapse0x29fc800() {
   return (neuron0x29f20f0()*0.763714);
}

double NNfunction_ss_uRsR::synapse0x29fc840() {
   return (neuron0x29f2430()*-0.214165);
}

double NNfunction_ss_uRsR::synapse0x29fc880() {
   return (neuron0x29f2770()*-0.0746704);
}

double NNfunction_ss_uRsR::synapse0x29fc8c0() {
   return (neuron0x29f2ab0()*-0.506998);
}

double NNfunction_ss_uRsR::synapse0x29fc900() {
   return (neuron0x29f2df0()*0.00691971);
}

double NNfunction_ss_uRsR::synapse0x29fc940() {
   return (neuron0x29f3130()*0.237823);
}

double NNfunction_ss_uRsR::synapse0x29fc980() {
   return (neuron0x29f3470()*0.0248304);
}

double NNfunction_ss_uRsR::synapse0x29fc410() {
   return (neuron0x29f37b0()*-0.442059);
}

double NNfunction_ss_uRsR::synapse0x29fc450() {
   return (neuron0x29f3d10()*0.812678);
}

double NNfunction_ss_uRsR::synapse0x29fcad0() {
   return (neuron0x29f3f30()*-0.686039);
}

double NNfunction_ss_uRsR::synapse0x29fcb10() {
   return (neuron0x29f4270()*-0.33843);
}

double NNfunction_ss_uRsR::synapse0x29fcb50() {
   return (neuron0x29f45b0()*0.389321);
}

double NNfunction_ss_uRsR::synapse0x29fcb90() {
   return (neuron0x29f48f0()*0.074708);
}

double NNfunction_ss_uRsR::synapse0x29fcbd0() {
   return (neuron0x29f4c30()*-0.230516);
}

double NNfunction_ss_uRsR::synapse0x29fcc10() {
   return (neuron0x29f4f70()*-0.186424);
}

double NNfunction_ss_uRsR::synapse0x29fcde0() {
   return (neuron0x29f03b0()*0.0338593);
}

double NNfunction_ss_uRsR::synapse0x2a05e70() {
   return (neuron0x29f06f0()*-0.00623586);
}

double NNfunction_ss_uRsR::synapse0x2a05eb0() {
   return (neuron0x29f0a30()*0.0191933);
}

double NNfunction_ss_uRsR::synapse0x2a05ef0() {
   return (neuron0x29f0d70()*-0.125425);
}

double NNfunction_ss_uRsR::synapse0x2a05f30() {
   return (neuron0x29f10b0()*0.0213358);
}

double NNfunction_ss_uRsR::synapse0x2a05f70() {
   return (neuron0x29f13f0()*0.0458927);
}

double NNfunction_ss_uRsR::synapse0x2a05fb0() {
   return (neuron0x29f1730()*0.00763459);
}

double NNfunction_ss_uRsR::synapse0x2a05ff0() {
   return (neuron0x29f1a70()*0.0393921);
}

double NNfunction_ss_uRsR::synapse0x2a06030() {
   return (neuron0x29f1db0()*0.0154343);
}

double NNfunction_ss_uRsR::synapse0x2a06070() {
   return (neuron0x29f20f0()*0.0325647);
}

double NNfunction_ss_uRsR::synapse0x2a060b0() {
   return (neuron0x29f2430()*0.0547903);
}

double NNfunction_ss_uRsR::synapse0x2a060f0() {
   return (neuron0x29f2770()*-0.0154381);
}

double NNfunction_ss_uRsR::synapse0x2a06130() {
   return (neuron0x29f2ab0()*0.01737);
}

double NNfunction_ss_uRsR::synapse0x2a06170() {
   return (neuron0x29f2df0()*-0.0195021);
}

double NNfunction_ss_uRsR::synapse0x2a061b0() {
   return (neuron0x29f3130()*0.158491);
}

double NNfunction_ss_uRsR::synapse0x2a061f0() {
   return (neuron0x29f3470()*0.0318096);
}

double NNfunction_ss_uRsR::synapse0x2a05cc0() {
   return (neuron0x29f37b0()*0.0307126);
}

double NNfunction_ss_uRsR::synapse0x2a05d00() {
   return (neuron0x29f3d10()*-0.0224665);
}

double NNfunction_ss_uRsR::synapse0x2a06340() {
   return (neuron0x29f3f30()*-0.6903);
}

double NNfunction_ss_uRsR::synapse0x2a06380() {
   return (neuron0x29f4270()*0.045936);
}

double NNfunction_ss_uRsR::synapse0x2a063c0() {
   return (neuron0x29f45b0()*0.00367318);
}

double NNfunction_ss_uRsR::synapse0x2a06400() {
   return (neuron0x29f48f0()*0.0316825);
}

double NNfunction_ss_uRsR::synapse0x2a06440() {
   return (neuron0x29f4c30()*-0.0387529);
}

double NNfunction_ss_uRsR::synapse0x2a06480() {
   return (neuron0x29f4f70()*-0.013354);
}

double NNfunction_ss_uRsR::synapse0x2a06800() {
   return (neuron0x29f03b0()*0.264771);
}

double NNfunction_ss_uRsR::synapse0x2a06840() {
   return (neuron0x29f06f0()*0.0917388);
}

double NNfunction_ss_uRsR::synapse0x2a06880() {
   return (neuron0x29f0a30()*-0.124404);
}

double NNfunction_ss_uRsR::synapse0x2a068c0() {
   return (neuron0x29f0d70()*-0.250039);
}

double NNfunction_ss_uRsR::synapse0x2a06900() {
   return (neuron0x29f10b0()*-0.212591);
}

double NNfunction_ss_uRsR::synapse0x2a06940() {
   return (neuron0x29f13f0()*-0.117726);
}

double NNfunction_ss_uRsR::synapse0x2a06980() {
   return (neuron0x29f1730()*0.000934791);
}

double NNfunction_ss_uRsR::synapse0x2a069c0() {
   return (neuron0x29f1a70()*-0.18892);
}

double NNfunction_ss_uRsR::synapse0x2a06a00() {
   return (neuron0x29f1db0()*0.190319);
}

double NNfunction_ss_uRsR::synapse0x2a06a40() {
   return (neuron0x29f20f0()*0.101927);
}

double NNfunction_ss_uRsR::synapse0x2a06a80() {
   return (neuron0x29f2430()*0.219924);
}

double NNfunction_ss_uRsR::synapse0x2a06ac0() {
   return (neuron0x29f2770()*-0.399851);
}

double NNfunction_ss_uRsR::synapse0x2a06b00() {
   return (neuron0x29f2ab0()*-0.210372);
}

double NNfunction_ss_uRsR::synapse0x2a06b40() {
   return (neuron0x29f2df0()*0.0234569);
}

double NNfunction_ss_uRsR::synapse0x2a06b80() {
   return (neuron0x29f3130()*2.27347);
}

double NNfunction_ss_uRsR::synapse0x2a06bc0() {
   return (neuron0x29f3470()*-0.407193);
}

double NNfunction_ss_uRsR::synapse0x2a06650() {
   return (neuron0x29f37b0()*-0.127678);
}

double NNfunction_ss_uRsR::synapse0x2a06690() {
   return (neuron0x29f3d10()*-0.274624);
}

double NNfunction_ss_uRsR::synapse0x2a06d10() {
   return (neuron0x29f3f30()*-1.24052);
}

double NNfunction_ss_uRsR::synapse0x2a06d50() {
   return (neuron0x29f4270()*0.119177);
}

double NNfunction_ss_uRsR::synapse0x2a06d90() {
   return (neuron0x29f45b0()*-0.410384);
}

double NNfunction_ss_uRsR::synapse0x2a06dd0() {
   return (neuron0x29f48f0()*-0.272971);
}

double NNfunction_ss_uRsR::synapse0x2a06e10() {
   return (neuron0x29f4c30()*0.456054);
}

double NNfunction_ss_uRsR::synapse0x2a06e50() {
   return (neuron0x29f4f70()*-0.15052);
}

double NNfunction_ss_uRsR::synapse0x2a071d0() {
   return (neuron0x29f03b0()*0.229032);
}

double NNfunction_ss_uRsR::synapse0x2a07210() {
   return (neuron0x29f06f0()*-0.521957);
}

double NNfunction_ss_uRsR::synapse0x2a07250() {
   return (neuron0x29f0a30()*0.552777);
}

double NNfunction_ss_uRsR::synapse0x2a07290() {
   return (neuron0x29f0d70()*-1.14031);
}

double NNfunction_ss_uRsR::synapse0x2a072d0() {
   return (neuron0x29f10b0()*0.0734927);
}

double NNfunction_ss_uRsR::synapse0x2a07310() {
   return (neuron0x29f13f0()*0.256792);
}

double NNfunction_ss_uRsR::synapse0x2a07350() {
   return (neuron0x29f1730()*-0.241392);
}

double NNfunction_ss_uRsR::synapse0x2a07390() {
   return (neuron0x29f1a70()*0.198417);
}

double NNfunction_ss_uRsR::synapse0x2a073d0() {
   return (neuron0x29f1db0()*0.178938);
}

double NNfunction_ss_uRsR::synapse0x2a07410() {
   return (neuron0x29f20f0()*-0.17083);
}

double NNfunction_ss_uRsR::synapse0x2a07450() {
   return (neuron0x29f2430()*-0.0155231);
}

double NNfunction_ss_uRsR::synapse0x2a07490() {
   return (neuron0x29f2770()*0.589568);
}

double NNfunction_ss_uRsR::synapse0x2a074d0() {
   return (neuron0x29f2ab0()*1.36636);
}

double NNfunction_ss_uRsR::synapse0x2a07510() {
   return (neuron0x29f2df0()*0.0561877);
}

double NNfunction_ss_uRsR::synapse0x2a07550() {
   return (neuron0x29f3130()*-0.568427);
}

double NNfunction_ss_uRsR::synapse0x2a07590() {
   return (neuron0x29f3470()*0.20404);
}

double NNfunction_ss_uRsR::synapse0x2a07020() {
   return (neuron0x29f37b0()*-0.279725);
}

double NNfunction_ss_uRsR::synapse0x2a07060() {
   return (neuron0x29f3d10()*0.0544818);
}

double NNfunction_ss_uRsR::synapse0x2a076e0() {
   return (neuron0x29f3f30()*-0.0781939);
}

double NNfunction_ss_uRsR::synapse0x2a07720() {
   return (neuron0x29f4270()*-0.0630836);
}

double NNfunction_ss_uRsR::synapse0x2a07760() {
   return (neuron0x29f45b0()*0.0795173);
}

double NNfunction_ss_uRsR::synapse0x2a077a0() {
   return (neuron0x29f48f0()*0.450961);
}

double NNfunction_ss_uRsR::synapse0x2a077e0() {
   return (neuron0x29f4c30()*-0.0787696);
}

double NNfunction_ss_uRsR::synapse0x2a07820() {
   return (neuron0x29f4f70()*0.164705);
}

double NNfunction_ss_uRsR::synapse0x2a07ba0() {
   return (neuron0x29f03b0()*-0.0300282);
}

double NNfunction_ss_uRsR::synapse0x2a07be0() {
   return (neuron0x29f06f0()*0.0156259);
}

double NNfunction_ss_uRsR::synapse0x2a07c20() {
   return (neuron0x29f0a30()*-0.00331466);
}

double NNfunction_ss_uRsR::synapse0x2a07c60() {
   return (neuron0x29f0d70()*0.156459);
}

double NNfunction_ss_uRsR::synapse0x2a07ca0() {
   return (neuron0x29f10b0()*-0.0325985);
}

double NNfunction_ss_uRsR::synapse0x2a07ce0() {
   return (neuron0x29f13f0()*-0.00491587);
}

double NNfunction_ss_uRsR::synapse0x2a07d20() {
   return (neuron0x29f1730()*-0.0118065);
}

double NNfunction_ss_uRsR::synapse0x2a07d60() {
   return (neuron0x29f1a70()*-0.0732083);
}

double NNfunction_ss_uRsR::synapse0x2a07da0() {
   return (neuron0x29f1db0()*-0.0584278);
}

double NNfunction_ss_uRsR::synapse0x2a07de0() {
   return (neuron0x29f20f0()*0.00678564);
}

double NNfunction_ss_uRsR::synapse0x2a07e20() {
   return (neuron0x29f2430()*-0.00423053);
}

double NNfunction_ss_uRsR::synapse0x2a07e60() {
   return (neuron0x29f2770()*0.00781297);
}

double NNfunction_ss_uRsR::synapse0x2a07ea0() {
   return (neuron0x29f2ab0()*0.00669818);
}

double NNfunction_ss_uRsR::synapse0x2a07ee0() {
   return (neuron0x29f2df0()*0.0255668);
}

double NNfunction_ss_uRsR::synapse0x2a07f20() {
   return (neuron0x29f3130()*0.599317);
}

double NNfunction_ss_uRsR::synapse0x2a07f60() {
   return (neuron0x29f3470()*0.0167964);
}

double NNfunction_ss_uRsR::synapse0x2a079f0() {
   return (neuron0x29f37b0()*0.00974463);
}

double NNfunction_ss_uRsR::synapse0x2a07a30() {
   return (neuron0x29f3d10()*0.0365605);
}

double NNfunction_ss_uRsR::synapse0x2a080b0() {
   return (neuron0x29f3f30()*0.0259761);
}

double NNfunction_ss_uRsR::synapse0x2a080f0() {
   return (neuron0x29f4270()*0.0647751);
}

double NNfunction_ss_uRsR::synapse0x2a08130() {
   return (neuron0x29f45b0()*-0.00546652);
}

double NNfunction_ss_uRsR::synapse0x2a08170() {
   return (neuron0x29f48f0()*0.044459);
}

double NNfunction_ss_uRsR::synapse0x2a081b0() {
   return (neuron0x29f4c30()*0.0382341);
}

double NNfunction_ss_uRsR::synapse0x2a081f0() {
   return (neuron0x29f4f70()*0.036171);
}

double NNfunction_ss_uRsR::synapse0x2a08570() {
   return (neuron0x29f03b0()*0.139474);
}

double NNfunction_ss_uRsR::synapse0x2a085b0() {
   return (neuron0x29f06f0()*-0.067472);
}

double NNfunction_ss_uRsR::synapse0x2a085f0() {
   return (neuron0x29f0a30()*0.592271);
}

double NNfunction_ss_uRsR::synapse0x2a08630() {
   return (neuron0x29f0d70()*-2.42897);
}

double NNfunction_ss_uRsR::synapse0x2a08670() {
   return (neuron0x29f10b0()*0.508384);
}

double NNfunction_ss_uRsR::synapse0x2a086b0() {
   return (neuron0x29f13f0()*-0.11103);
}

double NNfunction_ss_uRsR::synapse0x2a086f0() {
   return (neuron0x29f1730()*0.00893059);
}

double NNfunction_ss_uRsR::synapse0x2a08730() {
   return (neuron0x29f1a70()*-0.0751373);
}

double NNfunction_ss_uRsR::synapse0x2a08770() {
   return (neuron0x29f1db0()*-0.0453809);
}

double NNfunction_ss_uRsR::synapse0x2a087b0() {
   return (neuron0x29f20f0()*-0.155312);
}

double NNfunction_ss_uRsR::synapse0x2a087f0() {
   return (neuron0x29f2430()*-0.370667);
}

double NNfunction_ss_uRsR::synapse0x2a08830() {
   return (neuron0x29f2770()*-0.540347);
}

double NNfunction_ss_uRsR::synapse0x2a08870() {
   return (neuron0x29f2ab0()*-0.394294);
}

double NNfunction_ss_uRsR::synapse0x2a088b0() {
   return (neuron0x29f2df0()*0.355776);
}

double NNfunction_ss_uRsR::synapse0x2a088f0() {
   return (neuron0x29f3130()*-0.0942938);
}

double NNfunction_ss_uRsR::synapse0x2a08930() {
   return (neuron0x29f3470()*-0.343751);
}

double NNfunction_ss_uRsR::synapse0x2a083c0() {
   return (neuron0x29f37b0()*-0.287454);
}

double NNfunction_ss_uRsR::synapse0x2a08400() {
   return (neuron0x29f3d10()*-0.0926484);
}

double NNfunction_ss_uRsR::synapse0x2a08a80() {
   return (neuron0x29f3f30()*2.14157);
}

double NNfunction_ss_uRsR::synapse0x2a08ac0() {
   return (neuron0x29f4270()*-0.270826);
}

double NNfunction_ss_uRsR::synapse0x2a08b00() {
   return (neuron0x29f45b0()*-0.0859692);
}

double NNfunction_ss_uRsR::synapse0x2a08b40() {
   return (neuron0x29f48f0()*-0.020338);
}

double NNfunction_ss_uRsR::synapse0x2a08b80() {
   return (neuron0x29f4c30()*-0.339624);
}

double NNfunction_ss_uRsR::synapse0x2a08bc0() {
   return (neuron0x29f4f70()*-0.0684447);
}

double NNfunction_ss_uRsR::synapse0x2a08f40() {
   return (neuron0x29f03b0()*-0.196588);
}

double NNfunction_ss_uRsR::synapse0x2a08f80() {
   return (neuron0x29f06f0()*-0.212056);
}

double NNfunction_ss_uRsR::synapse0x2a08fc0() {
   return (neuron0x29f0a30()*0.38718);
}

double NNfunction_ss_uRsR::synapse0x2a09000() {
   return (neuron0x29f0d70()*0.150491);
}

double NNfunction_ss_uRsR::synapse0x2a09040() {
   return (neuron0x29f10b0()*-0.201098);
}

double NNfunction_ss_uRsR::synapse0x2a09080() {
   return (neuron0x29f13f0()*0.418714);
}

double NNfunction_ss_uRsR::synapse0x2a090c0() {
   return (neuron0x29f1730()*0.265729);
}

double NNfunction_ss_uRsR::synapse0x2a09100() {
   return (neuron0x29f1a70()*0.707094);
}

double NNfunction_ss_uRsR::synapse0x2a09140() {
   return (neuron0x29f1db0()*-0.638229);
}

double NNfunction_ss_uRsR::synapse0x2a09180() {
   return (neuron0x29f20f0()*-0.397127);
}

double NNfunction_ss_uRsR::synapse0x2a091c0() {
   return (neuron0x29f2430()*-0.277213);
}

double NNfunction_ss_uRsR::synapse0x2a09200() {
   return (neuron0x29f2770()*0.177675);
}

double NNfunction_ss_uRsR::synapse0x2a09240() {
   return (neuron0x29f2ab0()*-0.518763);
}

double NNfunction_ss_uRsR::synapse0x2a09280() {
   return (neuron0x29f2df0()*-0.155832);
}

double NNfunction_ss_uRsR::synapse0x2a092c0() {
   return (neuron0x29f3130()*-1.22442);
}

double NNfunction_ss_uRsR::synapse0x2a09300() {
   return (neuron0x29f3470()*1.18149);
}

double NNfunction_ss_uRsR::synapse0x2a08d90() {
   return (neuron0x29f37b0()*0.378811);
}

double NNfunction_ss_uRsR::synapse0x2a08dd0() {
   return (neuron0x29f3d10()*0.506763);
}

double NNfunction_ss_uRsR::synapse0x2a09450() {
   return (neuron0x29f3f30()*0.146047);
}

double NNfunction_ss_uRsR::synapse0x2a09490() {
   return (neuron0x29f4270()*0.25611);
}

double NNfunction_ss_uRsR::synapse0x2a094d0() {
   return (neuron0x29f45b0()*-0.271041);
}

double NNfunction_ss_uRsR::synapse0x2a09510() {
   return (neuron0x29f48f0()*1.00588);
}

double NNfunction_ss_uRsR::synapse0x2a09550() {
   return (neuron0x29f4c30()*-0.596748);
}

double NNfunction_ss_uRsR::synapse0x2a09590() {
   return (neuron0x29f4f70()*0.0533425);
}

double NNfunction_ss_uRsR::synapse0x2a09910() {
   return (neuron0x29f03b0()*-0.181733);
}

double NNfunction_ss_uRsR::synapse0x2a09950() {
   return (neuron0x29f06f0()*-0.93437);
}

double NNfunction_ss_uRsR::synapse0x2a09990() {
   return (neuron0x29f0a30()*1.63243);
}

double NNfunction_ss_uRsR::synapse0x2a099d0() {
   return (neuron0x29f0d70()*-0.0773477);
}

double NNfunction_ss_uRsR::synapse0x2a09a10() {
   return (neuron0x29f10b0()*-0.450561);
}

double NNfunction_ss_uRsR::synapse0x2a09a50() {
   return (neuron0x29f13f0()*-0.120223);
}

double NNfunction_ss_uRsR::synapse0x2a09a90() {
   return (neuron0x29f1730()*-0.134614);
}

double NNfunction_ss_uRsR::synapse0x2a09ad0() {
   return (neuron0x29f1a70()*0.465742);
}

double NNfunction_ss_uRsR::synapse0x2a09b10() {
   return (neuron0x29f1db0()*0.329255);
}

double NNfunction_ss_uRsR::synapse0x2a09b50() {
   return (neuron0x29f20f0()*0.091879);
}

double NNfunction_ss_uRsR::synapse0x2a09b90() {
   return (neuron0x29f2430()*-0.0276418);
}

double NNfunction_ss_uRsR::synapse0x2a09bd0() {
   return (neuron0x29f2770()*-0.356134);
}

double NNfunction_ss_uRsR::synapse0x2a09c10() {
   return (neuron0x29f2ab0()*-0.63873);
}

double NNfunction_ss_uRsR::synapse0x2a09c50() {
   return (neuron0x29f2df0()*-0.594634);
}

double NNfunction_ss_uRsR::synapse0x2a09c90() {
   return (neuron0x29f3130()*0.015207);
}

double NNfunction_ss_uRsR::synapse0x2a09cd0() {
   return (neuron0x29f3470()*0.260701);
}

double NNfunction_ss_uRsR::synapse0x2a09760() {
   return (neuron0x29f37b0()*0.714852);
}

double NNfunction_ss_uRsR::synapse0x2a097a0() {
   return (neuron0x29f3d10()*0.00537658);
}

double NNfunction_ss_uRsR::synapse0x2a09e20() {
   return (neuron0x29f3f30()*0.00200617);
}

double NNfunction_ss_uRsR::synapse0x2a09e60() {
   return (neuron0x29f4270()*0.561874);
}

double NNfunction_ss_uRsR::synapse0x2a09ea0() {
   return (neuron0x29f45b0()*0.974538);
}

double NNfunction_ss_uRsR::synapse0x2a09ee0() {
   return (neuron0x29f48f0()*-0.339616);
}

double NNfunction_ss_uRsR::synapse0x2a09f20() {
   return (neuron0x29f4c30()*-0.531873);
}

double NNfunction_ss_uRsR::synapse0x2a09f60() {
   return (neuron0x29f4f70()*-0.363226);
}

double NNfunction_ss_uRsR::synapse0x2a0a2e0() {
   return (neuron0x29f03b0()*-0.116021);
}

double NNfunction_ss_uRsR::synapse0x2a0a320() {
   return (neuron0x29f06f0()*0.182147);
}

double NNfunction_ss_uRsR::synapse0x2a0a360() {
   return (neuron0x29f0a30()*0.274334);
}

double NNfunction_ss_uRsR::synapse0x2a0a3a0() {
   return (neuron0x29f0d70()*-0.10166);
}

double NNfunction_ss_uRsR::synapse0x2a0a3e0() {
   return (neuron0x29f10b0()*-0.636902);
}

double NNfunction_ss_uRsR::synapse0x2a0a420() {
   return (neuron0x29f13f0()*0.294247);
}

double NNfunction_ss_uRsR::synapse0x2a0a460() {
   return (neuron0x29f1730()*0.169075);
}

double NNfunction_ss_uRsR::synapse0x2a0a4a0() {
   return (neuron0x29f1a70()*-0.203015);
}

double NNfunction_ss_uRsR::synapse0x2a0a4e0() {
   return (neuron0x29f1db0()*0.193666);
}

double NNfunction_ss_uRsR::synapse0x2a0a520() {
   return (neuron0x29f20f0()*-0.0406792);
}

double NNfunction_ss_uRsR::synapse0x2a0a560() {
   return (neuron0x29f2430()*-0.36812);
}

double NNfunction_ss_uRsR::synapse0x2a0a5a0() {
   return (neuron0x29f2770()*-0.58402);
}

double NNfunction_ss_uRsR::synapse0x2a0a5e0() {
   return (neuron0x29f2ab0()*0.641291);
}

double NNfunction_ss_uRsR::synapse0x2a0a620() {
   return (neuron0x29f2df0()*0.640403);
}

double NNfunction_ss_uRsR::synapse0x2a0a660() {
   return (neuron0x29f3130()*0.507082);
}

double NNfunction_ss_uRsR::synapse0x2a0a6a0() {
   return (neuron0x29f3470()*-0.20416);
}

double NNfunction_ss_uRsR::synapse0x2a0a130() {
   return (neuron0x29f37b0()*0.258937);
}

double NNfunction_ss_uRsR::synapse0x2a0a170() {
   return (neuron0x29f3d10()*-0.0360394);
}

double NNfunction_ss_uRsR::synapse0x2a0a7f0() {
   return (neuron0x29f3f30()*-0.0259455);
}

double NNfunction_ss_uRsR::synapse0x2a0a830() {
   return (neuron0x29f4270()*-0.0757917);
}

double NNfunction_ss_uRsR::synapse0x2a0a870() {
   return (neuron0x29f45b0()*-0.329713);
}

double NNfunction_ss_uRsR::synapse0x2a0a8b0() {
   return (neuron0x29f48f0()*0.870688);
}

double NNfunction_ss_uRsR::synapse0x2a0a8f0() {
   return (neuron0x29f4c30()*-0.877371);
}

double NNfunction_ss_uRsR::synapse0x2a0a930() {
   return (neuron0x29f4f70()*0.290012);
}

double NNfunction_ss_uRsR::synapse0x2a0acb0() {
   return (neuron0x29f03b0()*0.00724891);
}

double NNfunction_ss_uRsR::synapse0x29ff280() {
   return (neuron0x29f06f0()*-0.0217977);
}

double NNfunction_ss_uRsR::synapse0x29ff2c0() {
   return (neuron0x29f0a30()*0.0129901);
}

double NNfunction_ss_uRsR::synapse0x29ff300() {
   return (neuron0x29f0d70()*-6.09743);
}

double NNfunction_ss_uRsR::synapse0x29ff550() {
   return (neuron0x29f10b0()*0.0158583);
}

double NNfunction_ss_uRsR::synapse0x29ff590() {
   return (neuron0x29f13f0()*-0.00881953);
}

double NNfunction_ss_uRsR::synapse0x29ff5d0() {
   return (neuron0x29f1730()*-0.0210504);
}

double NNfunction_ss_uRsR::synapse0x29ff820() {
   return (neuron0x29f1a70()*0.00524763);
}

double NNfunction_ss_uRsR::synapse0x29ff860() {
   return (neuron0x29f1db0()*0.00764341);
}

double NNfunction_ss_uRsR::synapse0x29ffab0() {
   return (neuron0x29f20f0()*0.00355428);
}

double NNfunction_ss_uRsR::synapse0x29ffaf0() {
   return (neuron0x29f2430()*0.00507822);
}

double NNfunction_ss_uRsR::synapse0x29ffb30() {
   return (neuron0x29f2770()*0.031949);
}

double NNfunction_ss_uRsR::synapse0x29ffd80() {
   return (neuron0x29f2ab0()*0.0049454);
}

double NNfunction_ss_uRsR::synapse0x29ffdc0() {
   return (neuron0x29f2df0()*-0.00698292);
}

double NNfunction_ss_uRsR::synapse0x2a00010() {
   return (neuron0x29f3130()*-0.134385);
}

double NNfunction_ss_uRsR::synapse0x2a00050() {
   return (neuron0x29f3470()*-0.00246651);
}

double NNfunction_ss_uRsR::synapse0x2a0ab00() {
   return (neuron0x29f37b0()*0.00599036);
}

double NNfunction_ss_uRsR::synapse0x2a0ab40() {
   return (neuron0x29f3d10()*0.000283442);
}

double NNfunction_ss_uRsR::synapse0x2a001a0() {
   return (neuron0x29f3f30()*-0.270598);
}

double NNfunction_ss_uRsR::synapse0x2a006b0() {
   return (neuron0x29f4270()*-0.0138529);
}

double NNfunction_ss_uRsR::synapse0x2a006f0() {
   return (neuron0x29f45b0()*0.00900344);
}

double NNfunction_ss_uRsR::synapse0x2a00730() {
   return (neuron0x29f48f0()*-0.000732993);
}

double NNfunction_ss_uRsR::synapse0x2a00980() {
   return (neuron0x29f4c30()*0.0222816);
}

double NNfunction_ss_uRsR::synapse0x2a009c0() {
   return (neuron0x29f4f70()*-0.039225);
}

double NNfunction_ss_uRsR::synapse0x2a00270() {
   return (neuron0x29f03b0()*0.0516045);
}

double NNfunction_ss_uRsR::synapse0x2a002b0() {
   return (neuron0x29f06f0()*-0.0133356);
}

double NNfunction_ss_uRsR::synapse0x2a002f0() {
   return (neuron0x29f0a30()*-0.00985797);
}

double NNfunction_ss_uRsR::synapse0x2a00330() {
   return (neuron0x29f0d70()*-0.0117205);
}

double NNfunction_ss_uRsR::synapse0x2a00cb0() {
   return (neuron0x29f10b0()*0.0150358);
}

double NNfunction_ss_uRsR::synapse0x2a0d000() {
   return (neuron0x29f13f0()*0.0154855);
}

double NNfunction_ss_uRsR::synapse0x2a0d040() {
   return (neuron0x29f1730()*0.0117401);
}

double NNfunction_ss_uRsR::synapse0x2a0d080() {
   return (neuron0x29f1a70()*0.00181104);
}

double NNfunction_ss_uRsR::synapse0x2a0d0c0() {
   return (neuron0x29f1db0()*0.0147111);
}

double NNfunction_ss_uRsR::synapse0x2a0d100() {
   return (neuron0x29f20f0()*-0.0655006);
}

double NNfunction_ss_uRsR::synapse0x2a0d140() {
   return (neuron0x29f2430()*-0.00912099);
}

double NNfunction_ss_uRsR::synapse0x2a0d180() {
   return (neuron0x29f2770()*-0.0204129);
}

double NNfunction_ss_uRsR::synapse0x2a0d1c0() {
   return (neuron0x29f2ab0()*-0.0289306);
}

double NNfunction_ss_uRsR::synapse0x2a0d200() {
   return (neuron0x29f2df0()*0.012297);
}

double NNfunction_ss_uRsR::synapse0x2a0d240() {
   return (neuron0x29f3130()*-0.125793);
}

double NNfunction_ss_uRsR::synapse0x2a0d280() {
   return (neuron0x29f3470()*-0.0319627);
}

double NNfunction_ss_uRsR::synapse0x2a00b90() {
   return (neuron0x29f37b0()*0.00453547);
}

double NNfunction_ss_uRsR::synapse0x2a00bd0() {
   return (neuron0x29f3d10()*-0.0176976);
}

double NNfunction_ss_uRsR::synapse0x2a0d3d0() {
   return (neuron0x29f3f30()*1.75221);
}

double NNfunction_ss_uRsR::synapse0x2a0d410() {
   return (neuron0x29f4270()*-0.0433709);
}

double NNfunction_ss_uRsR::synapse0x2a0d450() {
   return (neuron0x29f45b0()*-0.042977);
}

double NNfunction_ss_uRsR::synapse0x2a0d490() {
   return (neuron0x29f48f0()*-0.00372702);
}

double NNfunction_ss_uRsR::synapse0x2a0d4d0() {
   return (neuron0x29f4c30()*0.0220302);
}

double NNfunction_ss_uRsR::synapse0x2a0d510() {
   return (neuron0x29f4f70()*-0.0175567);
}

double NNfunction_ss_uRsR::synapse0x2a0d890() {
   return (neuron0x29f03b0()*0.0269718);
}

double NNfunction_ss_uRsR::synapse0x2a0d8d0() {
   return (neuron0x29f06f0()*-0.0979687);
}

double NNfunction_ss_uRsR::synapse0x2a0d910() {
   return (neuron0x29f0a30()*-0.00951931);
}

double NNfunction_ss_uRsR::synapse0x2a0d950() {
   return (neuron0x29f0d70()*0.206983);
}

double NNfunction_ss_uRsR::synapse0x2a0d990() {
   return (neuron0x29f10b0()*0.093872);
}

double NNfunction_ss_uRsR::synapse0x2a0d9d0() {
   return (neuron0x29f13f0()*0.0618679);
}

double NNfunction_ss_uRsR::synapse0x2a0da10() {
   return (neuron0x29f1730()*0.0782347);
}

double NNfunction_ss_uRsR::synapse0x2a0da50() {
   return (neuron0x29f1a70()*-0.0336081);
}

double NNfunction_ss_uRsR::synapse0x2a0da90() {
   return (neuron0x29f1db0()*0.134223);
}

double NNfunction_ss_uRsR::synapse0x2a0dad0() {
   return (neuron0x29f20f0()*-0.045191);
}

double NNfunction_ss_uRsR::synapse0x2a0db10() {
   return (neuron0x29f2430()*-0.0608788);
}

double NNfunction_ss_uRsR::synapse0x2a0db50() {
   return (neuron0x29f2770()*-0.576849);
}

double NNfunction_ss_uRsR::synapse0x2a0db90() {
   return (neuron0x29f2ab0()*-0.33699);
}

double NNfunction_ss_uRsR::synapse0x2a0dbd0() {
   return (neuron0x29f2df0()*0.00755498);
}

double NNfunction_ss_uRsR::synapse0x2a0dc10() {
   return (neuron0x29f3130()*0.00449367);
}

double NNfunction_ss_uRsR::synapse0x2a0dc50() {
   return (neuron0x29f3470()*-0.099011);
}

double NNfunction_ss_uRsR::synapse0x2a0d6e0() {
   return (neuron0x29f37b0()*-0.00517861);
}

double NNfunction_ss_uRsR::synapse0x2a0d720() {
   return (neuron0x29f3d10()*-0.109684);
}

double NNfunction_ss_uRsR::synapse0x2a0dda0() {
   return (neuron0x29f3f30()*0.109253);
}

double NNfunction_ss_uRsR::synapse0x2a0dde0() {
   return (neuron0x29f4270()*0.00642837);
}

double NNfunction_ss_uRsR::synapse0x2a0de20() {
   return (neuron0x29f45b0()*0.0275185);
}

double NNfunction_ss_uRsR::synapse0x2a0de60() {
   return (neuron0x29f48f0()*-0.00650764);
}

double NNfunction_ss_uRsR::synapse0x2a0dea0() {
   return (neuron0x29f4c30()*0.054979);
}

double NNfunction_ss_uRsR::synapse0x2a0dee0() {
   return (neuron0x29f4f70()*-0.092681);
}

double NNfunction_ss_uRsR::synapse0x2a0e260() {
   return (neuron0x29f03b0()*-0.598949);
}

double NNfunction_ss_uRsR::synapse0x2a0e2a0() {
   return (neuron0x29f06f0()*0.00906682);
}

double NNfunction_ss_uRsR::synapse0x2a0e2e0() {
   return (neuron0x29f0a30()*0.312003);
}

double NNfunction_ss_uRsR::synapse0x2a0e320() {
   return (neuron0x29f0d70()*1.08247);
}

double NNfunction_ss_uRsR::synapse0x2a0e360() {
   return (neuron0x29f10b0()*-0.131305);
}

double NNfunction_ss_uRsR::synapse0x2a0e3a0() {
   return (neuron0x29f13f0()*0.0590381);
}

double NNfunction_ss_uRsR::synapse0x2a0e3e0() {
   return (neuron0x29f1730()*0.209934);
}

double NNfunction_ss_uRsR::synapse0x2a0e420() {
   return (neuron0x29f1a70()*-0.0309891);
}

double NNfunction_ss_uRsR::synapse0x2a0e460() {
   return (neuron0x29f1db0()*0.00831597);
}

double NNfunction_ss_uRsR::synapse0x2a0e4a0() {
   return (neuron0x29f20f0()*0.0787896);
}

double NNfunction_ss_uRsR::synapse0x2a0e4e0() {
   return (neuron0x29f2430()*0.528314);
}

double NNfunction_ss_uRsR::synapse0x2a0e520() {
   return (neuron0x29f2770()*-0.0156868);
}

double NNfunction_ss_uRsR::synapse0x2a0e560() {
   return (neuron0x29f2ab0()*0.0473638);
}

double NNfunction_ss_uRsR::synapse0x2a0e5a0() {
   return (neuron0x29f2df0()*0.554467);
}

double NNfunction_ss_uRsR::synapse0x2a0e5e0() {
   return (neuron0x29f3130()*-0.34983);
}

double NNfunction_ss_uRsR::synapse0x2a0e620() {
   return (neuron0x29f3470()*-0.362987);
}

double NNfunction_ss_uRsR::synapse0x2a0e0b0() {
   return (neuron0x29f37b0()*-0.0330639);
}

double NNfunction_ss_uRsR::synapse0x2a0e0f0() {
   return (neuron0x29f3d10()*-0.362111);
}

double NNfunction_ss_uRsR::synapse0x2a0e770() {
   return (neuron0x29f3f30()*-0.559121);
}

double NNfunction_ss_uRsR::synapse0x2a0e7b0() {
   return (neuron0x29f4270()*-0.0267123);
}

double NNfunction_ss_uRsR::synapse0x2a0e7f0() {
   return (neuron0x29f45b0()*0.398289);
}

double NNfunction_ss_uRsR::synapse0x2a0e830() {
   return (neuron0x29f48f0()*0.144826);
}

double NNfunction_ss_uRsR::synapse0x2a0e870() {
   return (neuron0x29f4c30()*-0.0343198);
}

double NNfunction_ss_uRsR::synapse0x2a0e8b0() {
   return (neuron0x29f4f70()*0.223487);
}

double NNfunction_ss_uRsR::synapse0x2a0ec30() {
   return (neuron0x29f03b0()*-0.0846474);
}

double NNfunction_ss_uRsR::synapse0x2a0ec70() {
   return (neuron0x29f06f0()*0.534146);
}

double NNfunction_ss_uRsR::synapse0x2a0ecb0() {
   return (neuron0x29f0a30()*-0.0496346);
}

double NNfunction_ss_uRsR::synapse0x2a0ecf0() {
   return (neuron0x29f0d70()*-0.114791);
}

double NNfunction_ss_uRsR::synapse0x2a0ed30() {
   return (neuron0x29f10b0()*0.260733);
}

double NNfunction_ss_uRsR::synapse0x2a0ed70() {
   return (neuron0x29f13f0()*0.582896);
}

double NNfunction_ss_uRsR::synapse0x2a0edb0() {
   return (neuron0x29f1730()*-0.0156364);
}

double NNfunction_ss_uRsR::synapse0x2a0edf0() {
   return (neuron0x29f1a70()*0.121456);
}

double NNfunction_ss_uRsR::synapse0x2a0ee30() {
   return (neuron0x29f1db0()*-0.04764);
}

double NNfunction_ss_uRsR::synapse0x2a0ee70() {
   return (neuron0x29f20f0()*-1.16649);
}

double NNfunction_ss_uRsR::synapse0x2a0eeb0() {
   return (neuron0x29f2430()*-0.565217);
}

double NNfunction_ss_uRsR::synapse0x2a0eef0() {
   return (neuron0x29f2770()*0.581203);
}

double NNfunction_ss_uRsR::synapse0x2a0ef30() {
   return (neuron0x29f2ab0()*-0.451303);
}

double NNfunction_ss_uRsR::synapse0x2a0ef70() {
   return (neuron0x29f2df0()*0.342498);
}

double NNfunction_ss_uRsR::synapse0x2a0efb0() {
   return (neuron0x29f3130()*0.772403);
}

double NNfunction_ss_uRsR::synapse0x2a0eff0() {
   return (neuron0x29f3470()*-0.448822);
}

double NNfunction_ss_uRsR::synapse0x2a0ea80() {
   return (neuron0x29f37b0()*0.418555);
}

double NNfunction_ss_uRsR::synapse0x2a0eac0() {
   return (neuron0x29f3d10()*0.300969);
}

double NNfunction_ss_uRsR::synapse0x2a0f140() {
   return (neuron0x29f3f30()*-0.269943);
}

double NNfunction_ss_uRsR::synapse0x2a0f180() {
   return (neuron0x29f4270()*-0.722688);
}

double NNfunction_ss_uRsR::synapse0x2a0f1c0() {
   return (neuron0x29f45b0()*1.04181);
}

double NNfunction_ss_uRsR::synapse0x2a0f200() {
   return (neuron0x29f48f0()*0.122676);
}

double NNfunction_ss_uRsR::synapse0x2a0f240() {
   return (neuron0x29f4c30()*-0.437669);
}

double NNfunction_ss_uRsR::synapse0x2a0f280() {
   return (neuron0x29f4f70()*0.261024);
}

double NNfunction_ss_uRsR::synapse0x2a0f600() {
   return (neuron0x29f03b0()*-0.00226708);
}

double NNfunction_ss_uRsR::synapse0x2a0f640() {
   return (neuron0x29f06f0()*-0.00909386);
}

double NNfunction_ss_uRsR::synapse0x2a0f680() {
   return (neuron0x29f0a30()*-0.0154476);
}

double NNfunction_ss_uRsR::synapse0x2a0f6c0() {
   return (neuron0x29f0d70()*-5.24505);
}

double NNfunction_ss_uRsR::synapse0x2a0f700() {
   return (neuron0x29f10b0()*0.00255625);
}

double NNfunction_ss_uRsR::synapse0x2a0f740() {
   return (neuron0x29f13f0()*-0.00347333);
}

double NNfunction_ss_uRsR::synapse0x2a0f780() {
   return (neuron0x29f1730()*-0.00710046);
}

double NNfunction_ss_uRsR::synapse0x2a0f7c0() {
   return (neuron0x29f1a70()*-0.0189233);
}

double NNfunction_ss_uRsR::synapse0x2a0f800() {
   return (neuron0x29f1db0()*-0.00318943);
}

double NNfunction_ss_uRsR::synapse0x2a0f840() {
   return (neuron0x29f20f0()*-0.00687357);
}

double NNfunction_ss_uRsR::synapse0x2a0f880() {
   return (neuron0x29f2430()*-0.0106996);
}

double NNfunction_ss_uRsR::synapse0x2a0f8c0() {
   return (neuron0x29f2770()*-0.007462);
}

double NNfunction_ss_uRsR::synapse0x2a0f900() {
   return (neuron0x29f2ab0()*-0.017228);
}

double NNfunction_ss_uRsR::synapse0x2a0f940() {
   return (neuron0x29f2df0()*0.00171406);
}

double NNfunction_ss_uRsR::synapse0x2a0f980() {
   return (neuron0x29f3130()*0.445859);
}

double NNfunction_ss_uRsR::synapse0x2a0f9c0() {
   return (neuron0x29f3470()*-0.0143718);
}

double NNfunction_ss_uRsR::synapse0x2a0f450() {
   return (neuron0x29f37b0()*-0.0232388);
}

double NNfunction_ss_uRsR::synapse0x2a0f490() {
   return (neuron0x29f3d10()*0.00514348);
}

double NNfunction_ss_uRsR::synapse0x2a0fb10() {
   return (neuron0x29f3f30()*0.303832);
}

double NNfunction_ss_uRsR::synapse0x2a0fb50() {
   return (neuron0x29f4270()*-0.0175906);
}

double NNfunction_ss_uRsR::synapse0x2a0fb90() {
   return (neuron0x29f45b0()*0.00171276);
}

double NNfunction_ss_uRsR::synapse0x2a0fbd0() {
   return (neuron0x29f48f0()*-0.00797591);
}

double NNfunction_ss_uRsR::synapse0x2a0fc10() {
   return (neuron0x29f4c30()*0.0149077);
}

double NNfunction_ss_uRsR::synapse0x2a0fc50() {
   return (neuron0x29f4f70()*0.00823612);
}

double NNfunction_ss_uRsR::synapse0x2a0ffd0() {
   return (neuron0x29f03b0()*-0.0463922);
}

double NNfunction_ss_uRsR::synapse0x2a10010() {
   return (neuron0x29f06f0()*0.00326504);
}

double NNfunction_ss_uRsR::synapse0x2a10050() {
   return (neuron0x29f0a30()*-0.0390916);
}

double NNfunction_ss_uRsR::synapse0x2a10090() {
   return (neuron0x29f0d70()*-0.442134);
}

double NNfunction_ss_uRsR::synapse0x2a100d0() {
   return (neuron0x29f10b0()*-0.0313301);
}

double NNfunction_ss_uRsR::synapse0x2a10110() {
   return (neuron0x29f13f0()*-0.0825141);
}

double NNfunction_ss_uRsR::synapse0x2a10150() {
   return (neuron0x29f1730()*-0.0709857);
}

double NNfunction_ss_uRsR::synapse0x2a10190() {
   return (neuron0x29f1a70()*-0.0664615);
}

double NNfunction_ss_uRsR::synapse0x2a101d0() {
   return (neuron0x29f1db0()*-0.010906);
}

double NNfunction_ss_uRsR::synapse0x2a10210() {
   return (neuron0x29f20f0()*-0.0176585);
}

double NNfunction_ss_uRsR::synapse0x2a10250() {
   return (neuron0x29f2430()*-0.0774204);
}

double NNfunction_ss_uRsR::synapse0x2a10290() {
   return (neuron0x29f2770()*0.0566833);
}

double NNfunction_ss_uRsR::synapse0x2a102d0() {
   return (neuron0x29f2ab0()*0.0567023);
}

double NNfunction_ss_uRsR::synapse0x2a10310() {
   return (neuron0x29f2df0()*-0.0128933);
}

double NNfunction_ss_uRsR::synapse0x2a10350() {
   return (neuron0x29f3130()*0.0708784);
}

double NNfunction_ss_uRsR::synapse0x2a10390() {
   return (neuron0x29f3470()*-0.0190474);
}

double NNfunction_ss_uRsR::synapse0x2a0fe20() {
   return (neuron0x29f37b0()*-0.0698414);
}

double NNfunction_ss_uRsR::synapse0x2a0fe60() {
   return (neuron0x29f3d10()*0.0515703);
}

double NNfunction_ss_uRsR::synapse0x2a104e0() {
   return (neuron0x29f3f30()*-0.667474);
}

double NNfunction_ss_uRsR::synapse0x2a10520() {
   return (neuron0x29f4270()*-0.0356971);
}

double NNfunction_ss_uRsR::synapse0x2a10560() {
   return (neuron0x29f45b0()*-0.0297682);
}

double NNfunction_ss_uRsR::synapse0x2a105a0() {
   return (neuron0x29f48f0()*-0.033325);
}

double NNfunction_ss_uRsR::synapse0x2a105e0() {
   return (neuron0x29f4c30()*0.0594048);
}

double NNfunction_ss_uRsR::synapse0x2a10620() {
   return (neuron0x29f4f70()*0.0414251);
}

double NNfunction_ss_uRsR::synapse0x2a109a0() {
   return (neuron0x29f03b0()*-0.524004);
}

double NNfunction_ss_uRsR::synapse0x2a109e0() {
   return (neuron0x29f06f0()*0.323116);
}

double NNfunction_ss_uRsR::synapse0x2a10a20() {
   return (neuron0x29f0a30()*0.321885);
}

double NNfunction_ss_uRsR::synapse0x2a10a60() {
   return (neuron0x29f0d70()*0.444558);
}

double NNfunction_ss_uRsR::synapse0x2a10aa0() {
   return (neuron0x29f10b0()*0.82389);
}

double NNfunction_ss_uRsR::synapse0x2a10ae0() {
   return (neuron0x29f13f0()*0.689878);
}

double NNfunction_ss_uRsR::synapse0x2a10b20() {
   return (neuron0x29f1730()*0.070634);
}

double NNfunction_ss_uRsR::synapse0x2a10b60() {
   return (neuron0x29f1a70()*-0.083771);
}

double NNfunction_ss_uRsR::synapse0x2a10ba0() {
   return (neuron0x29f1db0()*-0.485598);
}

double NNfunction_ss_uRsR::synapse0x2a10be0() {
   return (neuron0x29f20f0()*-0.498399);
}

double NNfunction_ss_uRsR::synapse0x2a10c20() {
   return (neuron0x29f2430()*-0.273324);
}

double NNfunction_ss_uRsR::synapse0x2a10c60() {
   return (neuron0x29f2770()*0.0171777);
}

double NNfunction_ss_uRsR::synapse0x2a10ca0() {
   return (neuron0x29f2ab0()*0.81235);
}

double NNfunction_ss_uRsR::synapse0x2a10ce0() {
   return (neuron0x29f2df0()*-0.214876);
}

double NNfunction_ss_uRsR::synapse0x2a10d20() {
   return (neuron0x29f3130()*0.599033);
}

double NNfunction_ss_uRsR::synapse0x2a10d60() {
   return (neuron0x29f3470()*-0.104788);
}

double NNfunction_ss_uRsR::synapse0x2a107f0() {
   return (neuron0x29f37b0()*-0.073667);
}

double NNfunction_ss_uRsR::synapse0x2a10830() {
   return (neuron0x29f3d10()*-0.139577);
}

double NNfunction_ss_uRsR::synapse0x2a10eb0() {
   return (neuron0x29f3f30()*-0.991803);
}

double NNfunction_ss_uRsR::synapse0x2a10ef0() {
   return (neuron0x29f4270()*0.0725853);
}

double NNfunction_ss_uRsR::synapse0x2a10f30() {
   return (neuron0x29f45b0()*-0.207994);
}

double NNfunction_ss_uRsR::synapse0x2a10f70() {
   return (neuron0x29f48f0()*0.269163);
}

double NNfunction_ss_uRsR::synapse0x2a10fb0() {
   return (neuron0x29f4c30()*0.136702);
}

double NNfunction_ss_uRsR::synapse0x2a10ff0() {
   return (neuron0x29f4f70()*0.283421);
}

double NNfunction_ss_uRsR::synapse0x2a11370() {
   return (neuron0x29f03b0()*-0.0684118);
}

double NNfunction_ss_uRsR::synapse0x2a113b0() {
   return (neuron0x29f06f0()*0.0783218);
}

double NNfunction_ss_uRsR::synapse0x2a113f0() {
   return (neuron0x29f0a30()*0.641227);
}

double NNfunction_ss_uRsR::synapse0x2a11430() {
   return (neuron0x29f0d70()*0.502541);
}

double NNfunction_ss_uRsR::synapse0x2a11470() {
   return (neuron0x29f10b0()*-0.587668);
}

double NNfunction_ss_uRsR::synapse0x2a114b0() {
   return (neuron0x29f13f0()*-0.254981);
}

double NNfunction_ss_uRsR::synapse0x2a114f0() {
   return (neuron0x29f1730()*-0.623203);
}

double NNfunction_ss_uRsR::synapse0x2a11530() {
   return (neuron0x29f1a70()*-0.175677);
}

double NNfunction_ss_uRsR::synapse0x2a11570() {
   return (neuron0x29f1db0()*0.668619);
}

double NNfunction_ss_uRsR::synapse0x2a115b0() {
   return (neuron0x29f20f0()*0.361263);
}

double NNfunction_ss_uRsR::synapse0x2a115f0() {
   return (neuron0x29f2430()*0.445092);
}

double NNfunction_ss_uRsR::synapse0x2a11630() {
   return (neuron0x29f2770()*-0.170802);
}

double NNfunction_ss_uRsR::synapse0x2a11670() {
   return (neuron0x29f2ab0()*-0.790911);
}

double NNfunction_ss_uRsR::synapse0x2a116b0() {
   return (neuron0x29f2df0()*0.126547);
}

double NNfunction_ss_uRsR::synapse0x2a116f0() {
   return (neuron0x29f3130()*0.607382);
}

double NNfunction_ss_uRsR::synapse0x2a11730() {
   return (neuron0x29f3470()*0.644494);
}

double NNfunction_ss_uRsR::synapse0x2a111c0() {
   return (neuron0x29f37b0()*-0.0407917);
}

double NNfunction_ss_uRsR::synapse0x2a11200() {
   return (neuron0x29f3d10()*0.120166);
}

double NNfunction_ss_uRsR::synapse0x2a11880() {
   return (neuron0x29f3f30()*-1.09626);
}

double NNfunction_ss_uRsR::synapse0x2a118c0() {
   return (neuron0x29f4270()*0.147567);
}

double NNfunction_ss_uRsR::synapse0x2a11900() {
   return (neuron0x29f45b0()*0.389716);
}

double NNfunction_ss_uRsR::synapse0x2a11940() {
   return (neuron0x29f48f0()*-0.457987);
}

double NNfunction_ss_uRsR::synapse0x2a11980() {
   return (neuron0x29f4c30()*0.256556);
}

double NNfunction_ss_uRsR::synapse0x2a119c0() {
   return (neuron0x29f4f70()*-0.0107968);
}

double NNfunction_ss_uRsR::synapse0x29fa470() {
   return (neuron0x29f03b0()*-0.641575);
}

double NNfunction_ss_uRsR::synapse0x29fa4b0() {
   return (neuron0x29f06f0()*0.797);
}

double NNfunction_ss_uRsR::synapse0x29fa4f0() {
   return (neuron0x29f0a30()*-0.483976);
}

double NNfunction_ss_uRsR::synapse0x29fa530() {
   return (neuron0x29f0d70()*-0.379751);
}

double NNfunction_ss_uRsR::synapse0x29fa570() {
   return (neuron0x29f10b0()*0.490631);
}

double NNfunction_ss_uRsR::synapse0x29fa5b0() {
   return (neuron0x29f13f0()*0.620865);
}

double NNfunction_ss_uRsR::synapse0x29fa5f0() {
   return (neuron0x29f1730()*0.142736);
}

double NNfunction_ss_uRsR::synapse0x29fa630() {
   return (neuron0x29f1a70()*0.8362);
}

double NNfunction_ss_uRsR::synapse0x2a12150() {
   return (neuron0x29f1db0()*0.184058);
}

double NNfunction_ss_uRsR::synapse0x2a12190() {
   return (neuron0x29f20f0()*0.399238);
}

double NNfunction_ss_uRsR::synapse0x2a121d0() {
   return (neuron0x29f2430()*0.459429);
}

double NNfunction_ss_uRsR::synapse0x2a12210() {
   return (neuron0x29f2770()*0.896172);
}

double NNfunction_ss_uRsR::synapse0x2a12250() {
   return (neuron0x29f2ab0()*1.05253);
}

double NNfunction_ss_uRsR::synapse0x2a12290() {
   return (neuron0x29f2df0()*-0.00818958);
}

double NNfunction_ss_uRsR::synapse0x2a122d0() {
   return (neuron0x29f3130()*-0.0622731);
}

double NNfunction_ss_uRsR::synapse0x2a12310() {
   return (neuron0x29f3470()*0.0480107);
}

double NNfunction_ss_uRsR::synapse0x2a11b90() {
   return (neuron0x29f37b0()*0.250358);
}

double NNfunction_ss_uRsR::synapse0x2a11bd0() {
   return (neuron0x29f3d10()*0.011222);
}

double NNfunction_ss_uRsR::synapse0x2a12460() {
   return (neuron0x29f3f30()*-0.191979);
}

double NNfunction_ss_uRsR::synapse0x2a124a0() {
   return (neuron0x29f4270()*0.287021);
}

double NNfunction_ss_uRsR::synapse0x2a124e0() {
   return (neuron0x29f45b0()*-0.273962);
}

double NNfunction_ss_uRsR::synapse0x2a12520() {
   return (neuron0x29f48f0()*0.24458);
}

double NNfunction_ss_uRsR::synapse0x2a12560() {
   return (neuron0x29f4c30()*0.0410248);
}

double NNfunction_ss_uRsR::synapse0x2a125a0() {
   return (neuron0x29f4f70()*-0.20498);
}

double NNfunction_ss_uRsR::synapse0x2a12920() {
   return (neuron0x29f03b0()*0.302409);
}

double NNfunction_ss_uRsR::synapse0x2a12960() {
   return (neuron0x29f06f0()*-0.396278);
}

double NNfunction_ss_uRsR::synapse0x2a129a0() {
   return (neuron0x29f0a30()*0.205382);
}

double NNfunction_ss_uRsR::synapse0x2a129e0() {
   return (neuron0x29f0d70()*1.86343);
}

double NNfunction_ss_uRsR::synapse0x2a12a20() {
   return (neuron0x29f10b0()*0.0851059);
}

double NNfunction_ss_uRsR::synapse0x2a12a60() {
   return (neuron0x29f13f0()*-0.161788);
}

double NNfunction_ss_uRsR::synapse0x2a12aa0() {
   return (neuron0x29f1730()*0.188569);
}

double NNfunction_ss_uRsR::synapse0x2a12ae0() {
   return (neuron0x29f1a70()*-0.283772);
}

double NNfunction_ss_uRsR::synapse0x2a12b20() {
   return (neuron0x29f1db0()*0.194247);
}

double NNfunction_ss_uRsR::synapse0x2a12b60() {
   return (neuron0x29f20f0()*0.12685);
}

double NNfunction_ss_uRsR::synapse0x2a12ba0() {
   return (neuron0x29f2430()*0.0582678);
}

double NNfunction_ss_uRsR::synapse0x2a12be0() {
   return (neuron0x29f2770()*0.212608);
}

double NNfunction_ss_uRsR::synapse0x2a12c20() {
   return (neuron0x29f2ab0()*-0.0719299);
}

double NNfunction_ss_uRsR::synapse0x2a12c60() {
   return (neuron0x29f2df0()*0.219736);
}

double NNfunction_ss_uRsR::synapse0x2a12ca0() {
   return (neuron0x29f3130()*0.96032);
}

double NNfunction_ss_uRsR::synapse0x2a12ce0() {
   return (neuron0x29f3470()*-0.123938);
}

double NNfunction_ss_uRsR::synapse0x2a12770() {
   return (neuron0x29f37b0()*-0.0119003);
}

double NNfunction_ss_uRsR::synapse0x2a127b0() {
   return (neuron0x29f3d10()*0.0815131);
}

double NNfunction_ss_uRsR::synapse0x2a12e30() {
   return (neuron0x29f3f30()*0.957285);
}

double NNfunction_ss_uRsR::synapse0x2a12e70() {
   return (neuron0x29f4270()*-0.323566);
}

double NNfunction_ss_uRsR::synapse0x2a12eb0() {
   return (neuron0x29f45b0()*-0.0238724);
}

double NNfunction_ss_uRsR::synapse0x2a12ef0() {
   return (neuron0x29f48f0()*-0.0499225);
}

double NNfunction_ss_uRsR::synapse0x2a12f30() {
   return (neuron0x29f4c30()*0.0574792);
}

double NNfunction_ss_uRsR::synapse0x2a12f70() {
   return (neuron0x29f4f70()*0.089006);
}

double NNfunction_ss_uRsR::synapse0x2a132f0() {
   return (neuron0x29f03b0()*-0.0155218);
}

double NNfunction_ss_uRsR::synapse0x2a13330() {
   return (neuron0x29f06f0()*-0.0320557);
}

double NNfunction_ss_uRsR::synapse0x2a13370() {
   return (neuron0x29f0a30()*-0.0172943);
}

double NNfunction_ss_uRsR::synapse0x2a133b0() {
   return (neuron0x29f0d70()*-1.16955);
}

double NNfunction_ss_uRsR::synapse0x2a133f0() {
   return (neuron0x29f10b0()*-0.0192034);
}

double NNfunction_ss_uRsR::synapse0x2a13430() {
   return (neuron0x29f13f0()*-0.00897757);
}

double NNfunction_ss_uRsR::synapse0x2a13470() {
   return (neuron0x29f1730()*-0.0328883);
}

double NNfunction_ss_uRsR::synapse0x2a134b0() {
   return (neuron0x29f1a70()*0.00894918);
}

double NNfunction_ss_uRsR::synapse0x2a134f0() {
   return (neuron0x29f1db0()*-0.00786608);
}

double NNfunction_ss_uRsR::synapse0x2a13530() {
   return (neuron0x29f20f0()*0.0134369);
}

double NNfunction_ss_uRsR::synapse0x2a13570() {
   return (neuron0x29f2430()*0.00894068);
}

double NNfunction_ss_uRsR::synapse0x2a135b0() {
   return (neuron0x29f2770()*-0.00176654);
}

double NNfunction_ss_uRsR::synapse0x2a135f0() {
   return (neuron0x29f2ab0()*0.0145452);
}

double NNfunction_ss_uRsR::synapse0x2a13630() {
   return (neuron0x29f2df0()*-0.0165846);
}

double NNfunction_ss_uRsR::synapse0x2a13670() {
   return (neuron0x29f3130()*0.137061);
}

double NNfunction_ss_uRsR::synapse0x2a136b0() {
   return (neuron0x29f3470()*0.0285809);
}

double NNfunction_ss_uRsR::synapse0x2a13140() {
   return (neuron0x29f37b0()*0.0133696);
}

double NNfunction_ss_uRsR::synapse0x2a13180() {
   return (neuron0x29f3d10()*-0.0170289);
}

double NNfunction_ss_uRsR::synapse0x2a03cb0() {
   return (neuron0x29f3f30()*0.150898);
}

double NNfunction_ss_uRsR::synapse0x2a03cf0() {
   return (neuron0x29f4270()*0.00951456);
}

double NNfunction_ss_uRsR::synapse0x2a03d30() {
   return (neuron0x29f45b0()*-0.0320304);
}

double NNfunction_ss_uRsR::synapse0x2a03d70() {
   return (neuron0x29f48f0()*-0.000478222);
}

double NNfunction_ss_uRsR::synapse0x2a03db0() {
   return (neuron0x29f4c30()*-0.0168902);
}

double NNfunction_ss_uRsR::synapse0x2a03df0() {
   return (neuron0x29f4f70()*0.0288698);
}

double NNfunction_ss_uRsR::synapse0x2a04170() {
   return (neuron0x29f03b0()*-0.063167);
}

double NNfunction_ss_uRsR::synapse0x2a041b0() {
   return (neuron0x29f06f0()*-0.334);
}

double NNfunction_ss_uRsR::synapse0x2a041f0() {
   return (neuron0x29f0a30()*0.135883);
}

double NNfunction_ss_uRsR::synapse0x2a04230() {
   return (neuron0x29f0d70()*-0.549237);
}

double NNfunction_ss_uRsR::synapse0x2a04270() {
   return (neuron0x29f10b0()*-0.0224774);
}

double NNfunction_ss_uRsR::synapse0x2a042b0() {
   return (neuron0x29f13f0()*-0.175784);
}

double NNfunction_ss_uRsR::synapse0x2a042f0() {
   return (neuron0x29f1730()*0.142755);
}

double NNfunction_ss_uRsR::synapse0x2a04330() {
   return (neuron0x29f1a70()*-0.291623);
}

double NNfunction_ss_uRsR::synapse0x2a04370() {
   return (neuron0x29f1db0()*-0.526452);
}

double NNfunction_ss_uRsR::synapse0x2a043b0() {
   return (neuron0x29f20f0()*-0.0909351);
}

double NNfunction_ss_uRsR::synapse0x2a043f0() {
   return (neuron0x29f2430()*0.0606137);
}

double NNfunction_ss_uRsR::synapse0x2a04430() {
   return (neuron0x29f2770()*-0.248445);
}

double NNfunction_ss_uRsR::synapse0x2a04470() {
   return (neuron0x29f2ab0()*-0.259282);
}

double NNfunction_ss_uRsR::synapse0x2a044b0() {
   return (neuron0x29f2df0()*0.429481);
}

double NNfunction_ss_uRsR::synapse0x2a044f0() {
   return (neuron0x29f3130()*0.720952);
}

double NNfunction_ss_uRsR::synapse0x2a04530() {
   return (neuron0x29f3470()*0.260599);
}

double NNfunction_ss_uRsR::synapse0x2a03fc0() {
   return (neuron0x29f37b0()*0.134214);
}

double NNfunction_ss_uRsR::synapse0x2a04000() {
   return (neuron0x29f3d10()*0.10443);
}

double NNfunction_ss_uRsR::synapse0x2a04680() {
   return (neuron0x29f3f30()*0.901002);
}

double NNfunction_ss_uRsR::synapse0x2a046c0() {
   return (neuron0x29f4270()*0.447731);
}

double NNfunction_ss_uRsR::synapse0x2a04700() {
   return (neuron0x29f45b0()*-0.611726);
}

double NNfunction_ss_uRsR::synapse0x2a04740() {
   return (neuron0x29f48f0()*0.270424);
}

double NNfunction_ss_uRsR::synapse0x2a04780() {
   return (neuron0x29f4c30()*0.313998);
}

double NNfunction_ss_uRsR::synapse0x2a047c0() {
   return (neuron0x29f4f70()*0.355868);
}

double NNfunction_ss_uRsR::synapse0x2a04b40() {
   return (neuron0x29f03b0()*0.089618);
}

double NNfunction_ss_uRsR::synapse0x2a04b80() {
   return (neuron0x29f06f0()*-1.23543);
}

double NNfunction_ss_uRsR::synapse0x2a04bc0() {
   return (neuron0x29f0a30()*0.375037);
}

double NNfunction_ss_uRsR::synapse0x2a04c00() {
   return (neuron0x29f0d70()*-0.525317);
}

double NNfunction_ss_uRsR::synapse0x2a04c40() {
   return (neuron0x29f10b0()*0.0244004);
}

double NNfunction_ss_uRsR::synapse0x2a04c80() {
   return (neuron0x29f13f0()*0.54254);
}

double NNfunction_ss_uRsR::synapse0x2a04cc0() {
   return (neuron0x29f1730()*0.326498);
}

double NNfunction_ss_uRsR::synapse0x2a04d00() {
   return (neuron0x29f1a70()*0.898836);
}

double NNfunction_ss_uRsR::synapse0x2a04d40() {
   return (neuron0x29f1db0()*-0.819374);
}

double NNfunction_ss_uRsR::synapse0x2a04d80() {
   return (neuron0x29f20f0()*0.644801);
}

double NNfunction_ss_uRsR::synapse0x2a04dc0() {
   return (neuron0x29f2430()*-0.06262);
}

double NNfunction_ss_uRsR::synapse0x2a04e00() {
   return (neuron0x29f2770()*0.659958);
}

double NNfunction_ss_uRsR::synapse0x2a04e40() {
   return (neuron0x29f2ab0()*0.772899);
}

double NNfunction_ss_uRsR::synapse0x2a04e80() {
   return (neuron0x29f2df0()*-0.144211);
}

double NNfunction_ss_uRsR::synapse0x2a04ec0() {
   return (neuron0x29f3130()*-0.167021);
}

double NNfunction_ss_uRsR::synapse0x2a04f00() {
   return (neuron0x29f3470()*1.02903);
}

double NNfunction_ss_uRsR::synapse0x2a04990() {
   return (neuron0x29f37b0()*0.00599631);
}

double NNfunction_ss_uRsR::synapse0x2a049d0() {
   return (neuron0x29f3d10()*-0.328237);
}

double NNfunction_ss_uRsR::synapse0x2a05050() {
   return (neuron0x29f3f30()*-0.657589);
}

double NNfunction_ss_uRsR::synapse0x2a05090() {
   return (neuron0x29f4270()*-1.30883);
}

double NNfunction_ss_uRsR::synapse0x2a050d0() {
   return (neuron0x29f45b0()*0.646973);
}

double NNfunction_ss_uRsR::synapse0x2a05110() {
   return (neuron0x29f48f0()*0.508109);
}

double NNfunction_ss_uRsR::synapse0x2a05150() {
   return (neuron0x29f4c30()*-0.505968);
}

double NNfunction_ss_uRsR::synapse0x2a05190() {
   return (neuron0x29f4f70()*-0.205571);
}

double NNfunction_ss_uRsR::synapse0x2a05510() {
   return (neuron0x29f03b0()*0.047093);
}

double NNfunction_ss_uRsR::synapse0x2a05550() {
   return (neuron0x29f06f0()*0.907232);
}

double NNfunction_ss_uRsR::synapse0x2a05590() {
   return (neuron0x29f0a30()*-0.74891);
}

double NNfunction_ss_uRsR::synapse0x2a055d0() {
   return (neuron0x29f0d70()*0.787178);
}

double NNfunction_ss_uRsR::synapse0x2a05610() {
   return (neuron0x29f10b0()*-0.393026);
}

double NNfunction_ss_uRsR::synapse0x2a05650() {
   return (neuron0x29f13f0()*-0.418519);
}

double NNfunction_ss_uRsR::synapse0x2a05690() {
   return (neuron0x29f1730()*0.181795);
}

double NNfunction_ss_uRsR::synapse0x2a056d0() {
   return (neuron0x29f1a70()*-0.236544);
}

double NNfunction_ss_uRsR::synapse0x2a05710() {
   return (neuron0x29f1db0()*-0.191559);
}

double NNfunction_ss_uRsR::synapse0x2a05750() {
   return (neuron0x29f20f0()*-0.446558);
}

double NNfunction_ss_uRsR::synapse0x2a05790() {
   return (neuron0x29f2430()*-1.13407);
}

double NNfunction_ss_uRsR::synapse0x2a057d0() {
   return (neuron0x29f2770()*0.0835545);
}

double NNfunction_ss_uRsR::synapse0x2a05810() {
   return (neuron0x29f2ab0()*1.14467);
}

double NNfunction_ss_uRsR::synapse0x2a05850() {
   return (neuron0x29f2df0()*1.44738);
}

double NNfunction_ss_uRsR::synapse0x2a05890() {
   return (neuron0x29f3130()*0.362503);
}

double NNfunction_ss_uRsR::synapse0x2a058d0() {
   return (neuron0x29f3470()*-0.0862394);
}

double NNfunction_ss_uRsR::synapse0x2a05360() {
   return (neuron0x29f37b0()*-0.435348);
}

double NNfunction_ss_uRsR::synapse0x2a053a0() {
   return (neuron0x29f3d10()*-0.384306);
}

double NNfunction_ss_uRsR::synapse0x2a05a20() {
   return (neuron0x29f3f30()*-0.268618);
}

double NNfunction_ss_uRsR::synapse0x2a05a60() {
   return (neuron0x29f4270()*-1.10667);
}

double NNfunction_ss_uRsR::synapse0x2a05aa0() {
   return (neuron0x29f45b0()*-1.19144);
}

double NNfunction_ss_uRsR::synapse0x2a05ae0() {
   return (neuron0x29f48f0()*-0.267881);
}

double NNfunction_ss_uRsR::synapse0x2a05b20() {
   return (neuron0x29f4c30()*0.7333);
}

double NNfunction_ss_uRsR::synapse0x2a05b60() {
   return (neuron0x29f4f70()*-0.279374);
}

double NNfunction_ss_uRsR::synapse0x2a17a30() {
   return (neuron0x29f03b0()*0.107616);
}

double NNfunction_ss_uRsR::synapse0x2a17a70() {
   return (neuron0x29f06f0()*0.095449);
}

double NNfunction_ss_uRsR::synapse0x2a17ab0() {
   return (neuron0x29f0a30()*-0.0491364);
}

double NNfunction_ss_uRsR::synapse0x2a17af0() {
   return (neuron0x29f0d70()*-0.492733);
}

double NNfunction_ss_uRsR::synapse0x2a17b30() {
   return (neuron0x29f10b0()*0.0309814);
}

double NNfunction_ss_uRsR::synapse0x2a17b70() {
   return (neuron0x29f13f0()*0.404137);
}

double NNfunction_ss_uRsR::synapse0x2a17bb0() {
   return (neuron0x29f1730()*0.45677);
}

double NNfunction_ss_uRsR::synapse0x2a17bf0() {
   return (neuron0x29f1a70()*0.486785);
}

double NNfunction_ss_uRsR::synapse0x2a17c30() {
   return (neuron0x29f1db0()*0.346342);
}

double NNfunction_ss_uRsR::synapse0x2a17c70() {
   return (neuron0x29f20f0()*0.180864);
}

double NNfunction_ss_uRsR::synapse0x2a17cb0() {
   return (neuron0x29f2430()*0.0818832);
}

double NNfunction_ss_uRsR::synapse0x2a17cf0() {
   return (neuron0x29f2770()*0.163129);
}

double NNfunction_ss_uRsR::synapse0x2a17d30() {
   return (neuron0x29f2ab0()*0.0803225);
}

double NNfunction_ss_uRsR::synapse0x2a17d70() {
   return (neuron0x29f2df0()*0.171157);
}

double NNfunction_ss_uRsR::synapse0x2a17db0() {
   return (neuron0x29f3130()*0.193345);
}

double NNfunction_ss_uRsR::synapse0x2a17df0() {
   return (neuron0x29f3470()*0.206968);
}

double NNfunction_ss_uRsR::synapse0x2a05ba0() {
   return (neuron0x29f37b0()*0.43901);
}

double NNfunction_ss_uRsR::synapse0x2a05be0() {
   return (neuron0x29f3d10()*-0.145232);
}

double NNfunction_ss_uRsR::synapse0x2a17f40() {
   return (neuron0x29f3f30()*0.403877);
}

double NNfunction_ss_uRsR::synapse0x2a17f80() {
   return (neuron0x29f4270()*-0.0982019);
}

double NNfunction_ss_uRsR::synapse0x2a17fc0() {
   return (neuron0x29f45b0()*0.167856);
}

double NNfunction_ss_uRsR::synapse0x2a18000() {
   return (neuron0x29f48f0()*0.29806);
}

double NNfunction_ss_uRsR::synapse0x2a18040() {
   return (neuron0x29f4c30()*-0.219833);
}

double NNfunction_ss_uRsR::synapse0x2a18080() {
   return (neuron0x29f4f70()*-0.456837);
}

double NNfunction_ss_uRsR::synapse0x2a18400() {
   return (neuron0x29f03b0()*0.355299);
}

double NNfunction_ss_uRsR::synapse0x2a18440() {
   return (neuron0x29f06f0()*-0.0651974);
}

double NNfunction_ss_uRsR::synapse0x2a18480() {
   return (neuron0x29f0a30()*-0.101415);
}

double NNfunction_ss_uRsR::synapse0x2a184c0() {
   return (neuron0x29f0d70()*0.225286);
}

double NNfunction_ss_uRsR::synapse0x2a18500() {
   return (neuron0x29f10b0()*0.221332);
}

double NNfunction_ss_uRsR::synapse0x2a18540() {
   return (neuron0x29f13f0()*-0.105287);
}

double NNfunction_ss_uRsR::synapse0x2a18580() {
   return (neuron0x29f1730()*-0.123954);
}

double NNfunction_ss_uRsR::synapse0x2a185c0() {
   return (neuron0x29f1a70()*-0.101093);
}

double NNfunction_ss_uRsR::synapse0x2a18600() {
   return (neuron0x29f1db0()*0.0396027);
}

double NNfunction_ss_uRsR::synapse0x2a18640() {
   return (neuron0x29f20f0()*-0.142988);
}

double NNfunction_ss_uRsR::synapse0x2a18680() {
   return (neuron0x29f2430()*0.0169566);
}

double NNfunction_ss_uRsR::synapse0x2a186c0() {
   return (neuron0x29f2770()*-0.000395123);
}

double NNfunction_ss_uRsR::synapse0x2a18700() {
   return (neuron0x29f2ab0()*0.0392366);
}

double NNfunction_ss_uRsR::synapse0x2a18740() {
   return (neuron0x29f2df0()*-0.0642634);
}

double NNfunction_ss_uRsR::synapse0x2a18780() {
   return (neuron0x29f3130()*0.35857);
}

double NNfunction_ss_uRsR::synapse0x2a187c0() {
   return (neuron0x29f3470()*0.259004);
}

double NNfunction_ss_uRsR::synapse0x2a18250() {
   return (neuron0x29f37b0()*-0.0956543);
}

double NNfunction_ss_uRsR::synapse0x2a18290() {
   return (neuron0x29f3d10()*0.146236);
}

double NNfunction_ss_uRsR::synapse0x2a18910() {
   return (neuron0x29f3f30()*0.317035);
}

double NNfunction_ss_uRsR::synapse0x2a18950() {
   return (neuron0x29f4270()*0.148622);
}

double NNfunction_ss_uRsR::synapse0x2a18990() {
   return (neuron0x29f45b0()*-0.272325);
}

double NNfunction_ss_uRsR::synapse0x2a189d0() {
   return (neuron0x29f48f0()*-0.0560433);
}

double NNfunction_ss_uRsR::synapse0x2a18a10() {
   return (neuron0x29f4c30()*0.103749);
}

double NNfunction_ss_uRsR::synapse0x2a18a50() {
   return (neuron0x29f4f70()*-0.0104625);
}

double NNfunction_ss_uRsR::synapse0x2a18dd0() {
   return (neuron0x29f03b0()*0.100014);
}

double NNfunction_ss_uRsR::synapse0x2a18e10() {
   return (neuron0x29f06f0()*0.0902491);
}

double NNfunction_ss_uRsR::synapse0x2a18e50() {
   return (neuron0x29f0a30()*-0.107597);
}

double NNfunction_ss_uRsR::synapse0x2a18e90() {
   return (neuron0x29f0d70()*1.02027);
}

double NNfunction_ss_uRsR::synapse0x2a18ed0() {
   return (neuron0x29f10b0()*-0.225581);
}

double NNfunction_ss_uRsR::synapse0x2a18f10() {
   return (neuron0x29f13f0()*-0.172158);
}

double NNfunction_ss_uRsR::synapse0x2a18f50() {
   return (neuron0x29f1730()*-0.317506);
}

double NNfunction_ss_uRsR::synapse0x2a18f90() {
   return (neuron0x29f1a70()*-0.0779001);
}

double NNfunction_ss_uRsR::synapse0x2a18fd0() {
   return (neuron0x29f1db0()*-0.341061);
}

double NNfunction_ss_uRsR::synapse0x2a19010() {
   return (neuron0x29f20f0()*0.104667);
}

double NNfunction_ss_uRsR::synapse0x2a19050() {
   return (neuron0x29f2430()*-0.346923);
}

double NNfunction_ss_uRsR::synapse0x2a19090() {
   return (neuron0x29f2770()*-0.0794874);
}

double NNfunction_ss_uRsR::synapse0x2a190d0() {
   return (neuron0x29f2ab0()*-0.123228);
}

double NNfunction_ss_uRsR::synapse0x2a19110() {
   return (neuron0x29f2df0()*-0.643562);
}

double NNfunction_ss_uRsR::synapse0x2a19150() {
   return (neuron0x29f3130()*1.29899);
}

double NNfunction_ss_uRsR::synapse0x2a19190() {
   return (neuron0x29f3470()*-0.105419);
}

double NNfunction_ss_uRsR::synapse0x2a18c20() {
   return (neuron0x29f37b0()*-0.0248211);
}

double NNfunction_ss_uRsR::synapse0x2a18c60() {
   return (neuron0x29f3d10()*0.380895);
}

double NNfunction_ss_uRsR::synapse0x2a192e0() {
   return (neuron0x29f3f30()*-0.174579);
}

double NNfunction_ss_uRsR::synapse0x2a19320() {
   return (neuron0x29f4270()*0.289182);
}

double NNfunction_ss_uRsR::synapse0x2a19360() {
   return (neuron0x29f45b0()*0.429588);
}

double NNfunction_ss_uRsR::synapse0x2a193a0() {
   return (neuron0x29f48f0()*-0.0325667);
}

double NNfunction_ss_uRsR::synapse0x2a193e0() {
   return (neuron0x29f4c30()*-0.164359);
}

double NNfunction_ss_uRsR::synapse0x2a19420() {
   return (neuron0x29f4f70()*0.0775985);
}

double NNfunction_ss_uRsR::synapse0x2a197a0() {
   return (neuron0x29f03b0()*0.0130474);
}

double NNfunction_ss_uRsR::synapse0x2a197e0() {
   return (neuron0x29f06f0()*-0.00609977);
}

double NNfunction_ss_uRsR::synapse0x2a19820() {
   return (neuron0x29f0a30()*0.0186912);
}

double NNfunction_ss_uRsR::synapse0x2a19860() {
   return (neuron0x29f0d70()*-0.361891);
}

double NNfunction_ss_uRsR::synapse0x2a198a0() {
   return (neuron0x29f10b0()*0.0216943);
}

double NNfunction_ss_uRsR::synapse0x2a198e0() {
   return (neuron0x29f13f0()*0.0107453);
}

double NNfunction_ss_uRsR::synapse0x2a19920() {
   return (neuron0x29f1730()*0.0256339);
}

double NNfunction_ss_uRsR::synapse0x2a19960() {
   return (neuron0x29f1a70()*-0.0407816);
}

double NNfunction_ss_uRsR::synapse0x2a199a0() {
   return (neuron0x29f1db0()*-0.0432623);
}

double NNfunction_ss_uRsR::synapse0x2a199e0() {
   return (neuron0x29f20f0()*-0.0250985);
}

double NNfunction_ss_uRsR::synapse0x2a19a20() {
   return (neuron0x29f2430()*0.0132423);
}

double NNfunction_ss_uRsR::synapse0x2a19a60() {
   return (neuron0x29f2770()*0.0250437);
}

double NNfunction_ss_uRsR::synapse0x2a19aa0() {
   return (neuron0x29f2ab0()*0.0238637);
}

double NNfunction_ss_uRsR::synapse0x2a19ae0() {
   return (neuron0x29f2df0()*-0.00296365);
}

double NNfunction_ss_uRsR::synapse0x2a19b20() {
   return (neuron0x29f3130()*-0.436478);
}

double NNfunction_ss_uRsR::synapse0x2a19b60() {
   return (neuron0x29f3470()*0.033166);
}

double NNfunction_ss_uRsR::synapse0x2a195f0() {
   return (neuron0x29f37b0()*-0.0139408);
}

double NNfunction_ss_uRsR::synapse0x2a19630() {
   return (neuron0x29f3d10()*0.0102654);
}

double NNfunction_ss_uRsR::synapse0x2a19cb0() {
   return (neuron0x29f3f30()*-0.0309278);
}

double NNfunction_ss_uRsR::synapse0x2a19cf0() {
   return (neuron0x29f4270()*0.0434684);
}

double NNfunction_ss_uRsR::synapse0x2a19d30() {
   return (neuron0x29f45b0()*0.000877116);
}

double NNfunction_ss_uRsR::synapse0x2a19d70() {
   return (neuron0x29f48f0()*0.0175773);
}

double NNfunction_ss_uRsR::synapse0x2a19db0() {
   return (neuron0x29f4c30()*0.0177088);
}

double NNfunction_ss_uRsR::synapse0x2a19df0() {
   return (neuron0x29f4f70()*-0.00370714);
}

double NNfunction_ss_uRsR::synapse0x27b9d00() {
   return (neuron0x29f53e0()*1.1776);
}

double NNfunction_ss_uRsR::synapse0x27b9d40() {
   return (neuron0x29f5d30()*-1.5074);
}

double NNfunction_ss_uRsR::synapse0x29f78a0() {
   return (neuron0x29f6810()*1.62942);
}

double NNfunction_ss_uRsR::synapse0x29f78e0() {
   return (neuron0x29f62b0()*-0.387311);
}

double NNfunction_ss_uRsR::synapse0x29f8270() {
   return (neuron0x29f75f0()*0.610424);
}

double NNfunction_ss_uRsR::synapse0x29f82b0() {
   return (neuron0x29f7fc0()*1.56871);
}

double NNfunction_ss_uRsR::synapse0x29f9040() {
   return (neuron0x29f8d90()*2.00391);
}

double NNfunction_ss_uRsR::synapse0x29f9080() {
   return (neuron0x29f9760()*1.72278);
}

double NNfunction_ss_uRsR::synapse0x29f9a10() {
   return (neuron0x29fa130()*-0.6912);
}

double NNfunction_ss_uRsR::synapse0x29f9a50() {
   return (neuron0x29fac10()*-1.31992);
}

double NNfunction_ss_uRsR::synapse0x29fa3e0() {
   return (neuron0x29fb5e0()*-1.4639);
}

double NNfunction_ss_uRsR::synapse0x29fa420() {
   return (neuron0x29f86c0()*2.07373);
}

double NNfunction_ss_uRsR::synapse0x29faec0() {
   return (neuron0x29fd190()*3.10979);
}

double NNfunction_ss_uRsR::synapse0x29faf00() {
   return (neuron0x29fdb60()*-0.0281924);
}

double NNfunction_ss_uRsR::synapse0x29fb890() {
   return (neuron0x29fe530()*0.699616);
}

double NNfunction_ss_uRsR::synapse0x29fb8d0() {
   return (neuron0x29fef00()*-1.14711);
}

double NNfunction_ss_uRsR::synapse0x29f8970() {
   return (neuron0x2a00d10()*-0.365048);
}

double NNfunction_ss_uRsR::synapse0x29f89b0() {
   return (neuron0x2a00ff0()*-1.89548);
}

double NNfunction_ss_uRsR::synapse0x29fd440() {
   return (neuron0x2a019c0()*-1.04543);
}

double NNfunction_ss_uRsR::synapse0x29fd480() {
   return (neuron0x2a02390()*0.808033);
}

double NNfunction_ss_uRsR::synapse0x29fde10() {
   return (neuron0x2a02d60()*1.91331);
}

double NNfunction_ss_uRsR::synapse0x29fde50() {
   return (neuron0x2a03730()*1.29809);
}

double NNfunction_ss_uRsR::synapse0x29fe7e0() {
   return (neuron0x29fc280()*-0.691621);
}

double NNfunction_ss_uRsR::synapse0x29fe820() {
   return (neuron0x29fcc50()*-0.528398);
}

double NNfunction_ss_uRsR::synapse0x29ff1b0() {
   return (neuron0x2a064c0()*1.90979);
}

double NNfunction_ss_uRsR::synapse0x29ff1f0() {
   return (neuron0x2a06e90()*0.328641);
}

double NNfunction_ss_uRsR::synapse0x29f3350() {
   return (neuron0x2a07860()*1.47392);
}

double NNfunction_ss_uRsR::synapse0x29f3390() {
   return (neuron0x2a08230()*0.0536542);
}

double NNfunction_ss_uRsR::synapse0x2a012a0() {
   return (neuron0x2a08c00()*-0.807041);
}

double NNfunction_ss_uRsR::synapse0x2a012e0() {
   return (neuron0x2a095d0()*0.937007);
}

double NNfunction_ss_uRsR::synapse0x2a01c70() {
   return (neuron0x2a09fa0()*0.143932);
}

double NNfunction_ss_uRsR::synapse0x2a01cb0() {
   return (neuron0x2a0a970()*-4.13365);
}

double NNfunction_ss_uRsR::synapse0x2a02640() {
   return (neuron0x2a00a00()*1.31723);
}

double NNfunction_ss_uRsR::synapse0x2a02680() {
   return (neuron0x2a0d550()*0.739857);
}

double NNfunction_ss_uRsR::synapse0x2a03010() {
   return (neuron0x2a0df20()*2.0768);
}

double NNfunction_ss_uRsR::synapse0x2a03050() {
   return (neuron0x2a0e8f0()*0.0410618);
}

double NNfunction_ss_uRsR::synapse0x2a039e0() {
   return (neuron0x2a0f2c0()*5.87366);
}

double NNfunction_ss_uRsR::synapse0x2a03a20() {
   return (neuron0x2a0fc90()*-1.38657);
}

double NNfunction_ss_uRsR::synapse0x29fc530() {
   return (neuron0x2a10660()*-1.11041);
}

double NNfunction_ss_uRsR::synapse0x29fc570() {
   return (neuron0x2a11030()*-0.706482);
}

double NNfunction_ss_uRsR::synapse0x2a05de0() {
   return (neuron0x2a11a00()*1.06174);
}

double NNfunction_ss_uRsR::synapse0x2a05e20() {
   return (neuron0x2a125e0()*2.08298);
}

double NNfunction_ss_uRsR::synapse0x2a06770() {
   return (neuron0x2a12fb0()*-0.258791);
}

double NNfunction_ss_uRsR::synapse0x2a067b0() {
   return (neuron0x2a03e30()*-1.1706);
}

double NNfunction_ss_uRsR::synapse0x2a07140() {
   return (neuron0x2a04800()*0.434438);
}

double NNfunction_ss_uRsR::synapse0x2a07180() {
   return (neuron0x2a051d0()*0.742502);
}

double NNfunction_ss_uRsR::synapse0x2a07b10() {
   return (neuron0x2a17810()*-1.63467);
}

double NNfunction_ss_uRsR::synapse0x2a07b50() {
   return (neuron0x2a180c0()*0.612663);
}

double NNfunction_ss_uRsR::synapse0x2a084e0() {
   return (neuron0x2a18a90()*0.421259);
}

double NNfunction_ss_uRsR::synapse0x2a08520() {
   return (neuron0x2a19460()*-1.17631);
}

double NNfunction_ss_uRsR::synapse0x2a0ac20() {
   return (neuron0x29f53e0()*-1.99578);
}

double NNfunction_ss_uRsR::synapse0x2a0ac60() {
   return (neuron0x29f5d30()*-0.021849);
}

double NNfunction_ss_uRsR::synapse0x2a001e0() {
   return (neuron0x29f6810()*0.043472);
}

double NNfunction_ss_uRsR::synapse0x2a00220() {
   return (neuron0x29f62b0()*-0.00346574);
}

double NNfunction_ss_uRsR::synapse0x2a0d800() {
   return (neuron0x29f75f0()*0.0347927);
}

double NNfunction_ss_uRsR::synapse0x2a0d840() {
   return (neuron0x29f7fc0()*0.0256502);
}

double NNfunction_ss_uRsR::synapse0x2a0e1d0() {
   return (neuron0x29f8d90()*-0.202059);
}

double NNfunction_ss_uRsR::synapse0x2a0e210() {
   return (neuron0x29f9760()*-0.43815);
}

double NNfunction_ss_uRsR::synapse0x2a0eba0() {
   return (neuron0x29fa130()*-3.19277);
}

double NNfunction_ss_uRsR::synapse0x2a0ebe0() {
   return (neuron0x29fac10()*-0.0177366);
}

double NNfunction_ss_uRsR::synapse0x2a0f570() {
   return (neuron0x29fb5e0()*-0.0424036);
}

double NNfunction_ss_uRsR::synapse0x2a0f5b0() {
   return (neuron0x29f86c0()*0.213376);
}

double NNfunction_ss_uRsR::synapse0x2a0ff40() {
   return (neuron0x29fd190()*-0.0217425);
}

double NNfunction_ss_uRsR::synapse0x2a0ff80() {
   return (neuron0x29fdb60()*-0.0177776);
}

double NNfunction_ss_uRsR::synapse0x2a10910() {
   return (neuron0x29fe530()*-0.182294);
}

double NNfunction_ss_uRsR::synapse0x2a10950() {
   return (neuron0x29fef00()*-0.0482592);
}

double NNfunction_ss_uRsR::synapse0x2a112e0() {
   return (neuron0x2a00d10()*-0.000461214);
}

double NNfunction_ss_uRsR::synapse0x2a11320() {
   return (neuron0x2a00ff0()*-0.0724601);
}

double NNfunction_ss_uRsR::synapse0x2a11cb0() {
   return (neuron0x2a019c0()*-2.57282);
}

double NNfunction_ss_uRsR::synapse0x2a11cf0() {
   return (neuron0x2a02390()*-0.00474999);
}

double NNfunction_ss_uRsR::synapse0x2a12890() {
   return (neuron0x2a02d60()*0.00243265);
}

double NNfunction_ss_uRsR::synapse0x2a128d0() {
   return (neuron0x2a03730()*-0.0160397);
}

double NNfunction_ss_uRsR::synapse0x2a13260() {
   return (neuron0x29fc280()*0.00480106);
}

double NNfunction_ss_uRsR::synapse0x2a132a0() {
   return (neuron0x29fcc50()*1.34564);
}

double NNfunction_ss_uRsR::synapse0x2a040e0() {
   return (neuron0x2a064c0()*0.0567065);
}

double NNfunction_ss_uRsR::synapse0x2a04120() {
   return (neuron0x2a06e90()*0.00368458);
}

double NNfunction_ss_uRsR::synapse0x2a04ab0() {
   return (neuron0x2a07860()*-1.32865);
}

double NNfunction_ss_uRsR::synapse0x2a04af0() {
   return (neuron0x2a08230()*-0.00240249);
}

double NNfunction_ss_uRsR::synapse0x2a05480() {
   return (neuron0x2a08c00()*-0.00516311);
}

double NNfunction_ss_uRsR::synapse0x2a054c0() {
   return (neuron0x2a095d0()*0.0253028);
}

double NNfunction_ss_uRsR::synapse0x2a179a0() {
   return (neuron0x2a09fa0()*0.0151541);
}

double NNfunction_ss_uRsR::synapse0x2a179e0() {
   return (neuron0x2a0a970()*0.537976);
}

double NNfunction_ss_uRsR::synapse0x2a18370() {
   return (neuron0x2a00a00()*-0.432696);
}

double NNfunction_ss_uRsR::synapse0x2a183b0() {
   return (neuron0x2a0d550()*0.289556);
}

double NNfunction_ss_uRsR::synapse0x2a18d40() {
   return (neuron0x2a0df20()*0.00501521);
}

double NNfunction_ss_uRsR::synapse0x2a18d80() {
   return (neuron0x2a0e8f0()*-0.000809317);
}

double NNfunction_ss_uRsR::synapse0x2a19710() {
   return (neuron0x2a0f2c0()*-0.556246);
}

double NNfunction_ss_uRsR::synapse0x2a19750() {
   return (neuron0x2a0fc90()*1.0839);
}

double NNfunction_ss_uRsR::synapse0x29f5600() {
   return (neuron0x2a10660()*-0.00106423);
}

double NNfunction_ss_uRsR::synapse0x29f5640() {
   return (neuron0x2a11030()*-0.00804682);
}

double NNfunction_ss_uRsR::synapse0x2a08eb0() {
   return (neuron0x2a11a00()*0.0263321);
}

double NNfunction_ss_uRsR::synapse0x2a08ef0() {
   return (neuron0x2a125e0()*0.0680122);
}

double NNfunction_ss_uRsR::synapse0x2a19e30() {
   return (neuron0x2a12fb0()*3.13925);
}

double NNfunction_ss_uRsR::synapse0x2a19e70() {
   return (neuron0x2a03e30()*0.032017);
}

double NNfunction_ss_uRsR::synapse0x2a19eb0() {
   return (neuron0x2a04800()*0.00846566);
}

double NNfunction_ss_uRsR::synapse0x2a19ef0() {
   return (neuron0x2a051d0()*0.00975351);
}

double NNfunction_ss_uRsR::synapse0x2a20da0() {
   return (neuron0x2a17810()*-0.0688789);
}

double NNfunction_ss_uRsR::synapse0x2a20de0() {
   return (neuron0x2a180c0()*-0.200464);
}

double NNfunction_ss_uRsR::synapse0x2a20e20() {
   return (neuron0x2a18a90()*0.153848);
}

double NNfunction_ss_uRsR::synapse0x2a20e60() {
   return (neuron0x2a19460()*1.76518);
}

double NNfunction_ss_uRsR::synapse0x2a211e0() {
   return (neuron0x29f53e0()*-0.289202);
}

double NNfunction_ss_uRsR::synapse0x2a21220() {
   return (neuron0x29f5d30()*-0.526897);
}

double NNfunction_ss_uRsR::synapse0x2a21260() {
   return (neuron0x29f6810()*-0.00136032);
}

double NNfunction_ss_uRsR::synapse0x2a212a0() {
   return (neuron0x29f62b0()*-0.438166);
}

double NNfunction_ss_uRsR::synapse0x2a212e0() {
   return (neuron0x29f75f0()*-0.0788278);
}

double NNfunction_ss_uRsR::synapse0x2a21320() {
   return (neuron0x29f7fc0()*-0.706797);
}

double NNfunction_ss_uRsR::synapse0x2a21360() {
   return (neuron0x29f8d90()*-0.243772);
}

double NNfunction_ss_uRsR::synapse0x2a213a0() {
   return (neuron0x29f9760()*-0.177846);
}

double NNfunction_ss_uRsR::synapse0x2a213e0() {
   return (neuron0x29fa130()*-0.362693);
}

double NNfunction_ss_uRsR::synapse0x2a21420() {
   return (neuron0x29fac10()*0.13977);
}

double NNfunction_ss_uRsR::synapse0x2a21460() {
   return (neuron0x29fb5e0()*-0.00707946);
}

double NNfunction_ss_uRsR::synapse0x2a214a0() {
   return (neuron0x29f86c0()*-0.356903);
}

double NNfunction_ss_uRsR::synapse0x2a214e0() {
   return (neuron0x29fd190()*-0.463452);
}

double NNfunction_ss_uRsR::synapse0x2a21520() {
   return (neuron0x29fdb60()*-0.566362);
}

double NNfunction_ss_uRsR::synapse0x2a21560() {
   return (neuron0x29fe530()*-0.180006);
}

double NNfunction_ss_uRsR::synapse0x2a215a0() {
   return (neuron0x29fef00()*-0.0173251);
}

double NNfunction_ss_uRsR::synapse0x2a21030() {
   return (neuron0x2a00d10()*-0.226587);
}

double NNfunction_ss_uRsR::synapse0x2a21070() {
   return (neuron0x2a00ff0()*0.0353208);
}

double NNfunction_ss_uRsR::synapse0x2a216f0() {
   return (neuron0x2a019c0()*-0.679748);
}

double NNfunction_ss_uRsR::synapse0x2a21730() {
   return (neuron0x2a02390()*-0.233407);
}

double NNfunction_ss_uRsR::synapse0x2a21770() {
   return (neuron0x2a02d60()*-0.456353);
}

double NNfunction_ss_uRsR::synapse0x2a217b0() {
   return (neuron0x2a03730()*-0.635342);
}

double NNfunction_ss_uRsR::synapse0x2a217f0() {
   return (neuron0x29fc280()*-0.408393);
}

double NNfunction_ss_uRsR::synapse0x2a21830() {
   return (neuron0x29fcc50()*-0.323121);
}

double NNfunction_ss_uRsR::synapse0x2a21870() {
   return (neuron0x2a064c0()*-0.39535);
}

double NNfunction_ss_uRsR::synapse0x2a218b0() {
   return (neuron0x2a06e90()*-0.0991109);
}

double NNfunction_ss_uRsR::synapse0x2a218f0() {
   return (neuron0x2a07860()*-0.055001);
}

double NNfunction_ss_uRsR::synapse0x2a21930() {
   return (neuron0x2a08230()*0.229645);
}

double NNfunction_ss_uRsR::synapse0x2a21970() {
   return (neuron0x2a08c00()*0.271154);
}

double NNfunction_ss_uRsR::synapse0x2a219b0() {
   return (neuron0x2a095d0()*0.0893888);
}

double NNfunction_ss_uRsR::synapse0x2a219f0() {
   return (neuron0x2a09fa0()*-0.109166);
}

double NNfunction_ss_uRsR::synapse0x2a21a30() {
   return (neuron0x2a0a970()*0.092431);
}

double NNfunction_ss_uRsR::synapse0x2a215e0() {
   return (neuron0x2a00a00()*0.247034);
}

double NNfunction_ss_uRsR::synapse0x2a21620() {
   return (neuron0x2a0d550()*0.112187);
}

double NNfunction_ss_uRsR::synapse0x2a21660() {
   return (neuron0x2a0df20()*-0.0610103);
}

double NNfunction_ss_uRsR::synapse0x2a216a0() {
   return (neuron0x2a0e8f0()*0.0971504);
}

double NNfunction_ss_uRsR::synapse0x2a21c80() {
   return (neuron0x2a0f2c0()*-0.233815);
}

double NNfunction_ss_uRsR::synapse0x2a21cc0() {
   return (neuron0x2a0fc90()*0.167073);
}

double NNfunction_ss_uRsR::synapse0x2a21d00() {
   return (neuron0x2a10660()*-0.450233);
}

double NNfunction_ss_uRsR::synapse0x2a21d40() {
   return (neuron0x2a11030()*-0.425943);
}

double NNfunction_ss_uRsR::synapse0x2a21d80() {
   return (neuron0x2a11a00()*0.197527);
}

double NNfunction_ss_uRsR::synapse0x2a21dc0() {
   return (neuron0x2a125e0()*0.0404757);
}

double NNfunction_ss_uRsR::synapse0x2a21e00() {
   return (neuron0x2a12fb0()*-0.0759881);
}

double NNfunction_ss_uRsR::synapse0x2a21e40() {
   return (neuron0x2a03e30()*-0.0491386);
}

double NNfunction_ss_uRsR::synapse0x2a21e80() {
   return (neuron0x2a04800()*-0.140275);
}

double NNfunction_ss_uRsR::synapse0x2a21ec0() {
   return (neuron0x2a051d0()*-0.0153822);
}

double NNfunction_ss_uRsR::synapse0x2a21f00() {
   return (neuron0x2a17810()*-0.186147);
}

double NNfunction_ss_uRsR::synapse0x2a21f40() {
   return (neuron0x2a180c0()*-0.394415);
}

double NNfunction_ss_uRsR::synapse0x2a21f80() {
   return (neuron0x2a18a90()*-0.3614);
}

double NNfunction_ss_uRsR::synapse0x2a21fc0() {
   return (neuron0x2a19460()*-0.469456);
}

double NNfunction_ss_uRsR::synapse0x2a22340() {
   return (neuron0x29f53e0()*0.868871);
}

double NNfunction_ss_uRsR::synapse0x2a22380() {
   return (neuron0x29f5d30()*-0.204936);
}

double NNfunction_ss_uRsR::synapse0x2a223c0() {
   return (neuron0x29f6810()*0.386303);
}

double NNfunction_ss_uRsR::synapse0x2a22400() {
   return (neuron0x29f62b0()*-0.202675);
}

double NNfunction_ss_uRsR::synapse0x2a22440() {
   return (neuron0x29f75f0()*0.01032);
}

double NNfunction_ss_uRsR::synapse0x2a22480() {
   return (neuron0x29f7fc0()*-0.205485);
}

double NNfunction_ss_uRsR::synapse0x2a224c0() {
   return (neuron0x29f8d90()*0.22343);
}

double NNfunction_ss_uRsR::synapse0x2a22500() {
   return (neuron0x29f9760()*0.528491);
}

double NNfunction_ss_uRsR::synapse0x2a22540() {
   return (neuron0x29fa130()*-0.527578);
}

double NNfunction_ss_uRsR::synapse0x2a22580() {
   return (neuron0x29fac10()*-0.298548);
}

double NNfunction_ss_uRsR::synapse0x2a225c0() {
   return (neuron0x29fb5e0()*-0.665867);
}

double NNfunction_ss_uRsR::synapse0x2a22600() {
   return (neuron0x29f86c0()*0.841016);
}

double NNfunction_ss_uRsR::synapse0x2a22640() {
   return (neuron0x29fd190()*0.727977);
}

double NNfunction_ss_uRsR::synapse0x2a22680() {
   return (neuron0x29fdb60()*-0.256484);
}

double NNfunction_ss_uRsR::synapse0x2a226c0() {
   return (neuron0x29fe530()*0.182487);
}

double NNfunction_ss_uRsR::synapse0x2a22700() {
   return (neuron0x29fef00()*0.0112501);
}

double NNfunction_ss_uRsR::synapse0x2a22190() {
   return (neuron0x2a00d10()*-0.447181);
}

double NNfunction_ss_uRsR::synapse0x2a221d0() {
   return (neuron0x2a00ff0()*-0.367029);
}

double NNfunction_ss_uRsR::synapse0x2a22850() {
   return (neuron0x2a019c0()*-0.246233);
}

double NNfunction_ss_uRsR::synapse0x2a22890() {
   return (neuron0x2a02390()*-0.298968);
}

double NNfunction_ss_uRsR::synapse0x2a228d0() {
   return (neuron0x2a02d60()*-0.178855);
}

double NNfunction_ss_uRsR::synapse0x2a22910() {
   return (neuron0x2a03730()*-0.249111);
}

double NNfunction_ss_uRsR::synapse0x2a22950() {
   return (neuron0x29fc280()*0.321875);
}

double NNfunction_ss_uRsR::synapse0x2a22990() {
   return (neuron0x29fcc50()*-0.494986);
}

double NNfunction_ss_uRsR::synapse0x2a229d0() {
   return (neuron0x2a064c0()*0.400703);
}

double NNfunction_ss_uRsR::synapse0x2a22a10() {
   return (neuron0x2a06e90()*0.491969);
}

double NNfunction_ss_uRsR::synapse0x2a22a50() {
   return (neuron0x2a07860()*0.518629);
}

double NNfunction_ss_uRsR::synapse0x2a22a90() {
   return (neuron0x2a08230()*0.180708);
}

double NNfunction_ss_uRsR::synapse0x2a22ad0() {
   return (neuron0x2a08c00()*-0.278147);
}

double NNfunction_ss_uRsR::synapse0x2a22b10() {
   return (neuron0x2a095d0()*-0.0062691);
}

double NNfunction_ss_uRsR::synapse0x2a22b50() {
   return (neuron0x2a09fa0()*-0.141675);
}

double NNfunction_ss_uRsR::synapse0x2a22b90() {
   return (neuron0x2a0a970()*-1.05531);
}

double NNfunction_ss_uRsR::synapse0x2a22740() {
   return (neuron0x2a00a00()*0.13533);
}

double NNfunction_ss_uRsR::synapse0x2a22780() {
   return (neuron0x2a0d550()*-0.207516);
}

double NNfunction_ss_uRsR::synapse0x2a227c0() {
   return (neuron0x2a0df20()*-0.250581);
}

double NNfunction_ss_uRsR::synapse0x2a22800() {
   return (neuron0x2a0e8f0()*-0.238342);
}

double NNfunction_ss_uRsR::synapse0x2a22de0() {
   return (neuron0x2a0f2c0()*1.05781);
}

double NNfunction_ss_uRsR::synapse0x2a22e20() {
   return (neuron0x2a0fc90()*-1.10584);
}

double NNfunction_ss_uRsR::synapse0x2a22e60() {
   return (neuron0x2a10660()*-0.0857755);
}

double NNfunction_ss_uRsR::synapse0x2a22ea0() {
   return (neuron0x2a11030()*-0.147774);
}

double NNfunction_ss_uRsR::synapse0x2a22ee0() {
   return (neuron0x2a11a00()*0.0497871);
}

double NNfunction_ss_uRsR::synapse0x2a22f20() {
   return (neuron0x2a125e0()*0.78134);
}

double NNfunction_ss_uRsR::synapse0x2a22f60() {
   return (neuron0x2a12fb0()*-1.25355);
}

double NNfunction_ss_uRsR::synapse0x2a22fa0() {
   return (neuron0x2a03e30()*0.158663);
}

double NNfunction_ss_uRsR::synapse0x2a22fe0() {
   return (neuron0x2a04800()*-0.12662);
}

double NNfunction_ss_uRsR::synapse0x2a23020() {
   return (neuron0x2a051d0()*-0.156139);
}

double NNfunction_ss_uRsR::synapse0x2a23060() {
   return (neuron0x2a17810()*0.277105);
}

double NNfunction_ss_uRsR::synapse0x2a230a0() {
   return (neuron0x2a180c0()*0.563311);
}

double NNfunction_ss_uRsR::synapse0x2a230e0() {
   return (neuron0x2a18a90()*1.43909);
}

double NNfunction_ss_uRsR::synapse0x2a23120() {
   return (neuron0x2a19460()*-0.996686);
}

double NNfunction_ss_uRsR::synapse0x2a234a0() {
   return (neuron0x29f53e0()*1.29581);
}

double NNfunction_ss_uRsR::synapse0x2a234e0() {
   return (neuron0x29f5d30()*0.440301);
}

double NNfunction_ss_uRsR::synapse0x2a23520() {
   return (neuron0x29f6810()*0.0515598);
}

double NNfunction_ss_uRsR::synapse0x2a23560() {
   return (neuron0x29f62b0()*1.71887);
}

double NNfunction_ss_uRsR::synapse0x2a235a0() {
   return (neuron0x29f75f0()*0.578626);
}

double NNfunction_ss_uRsR::synapse0x2a235e0() {
   return (neuron0x29f7fc0()*-0.036977);
}

double NNfunction_ss_uRsR::synapse0x2a23620() {
   return (neuron0x29f8d90()*-1.28409);
}

double NNfunction_ss_uRsR::synapse0x2a23660() {
   return (neuron0x29f9760()*0.243484);
}

double NNfunction_ss_uRsR::synapse0x2a236a0() {
   return (neuron0x29fa130()*0.833558);
}

double NNfunction_ss_uRsR::synapse0x2a236e0() {
   return (neuron0x29fac10()*1.16069);
}

double NNfunction_ss_uRsR::synapse0x2a23720() {
   return (neuron0x29fb5e0()*0.905893);
}

double NNfunction_ss_uRsR::synapse0x2a23760() {
   return (neuron0x29f86c0()*-0.406742);
}

double NNfunction_ss_uRsR::synapse0x2a237a0() {
   return (neuron0x29fd190()*0.126014);
}

double NNfunction_ss_uRsR::synapse0x2a237e0() {
   return (neuron0x29fdb60()*-2.221);
}

double NNfunction_ss_uRsR::synapse0x2a23820() {
   return (neuron0x29fe530()*-0.0248146);
}

double NNfunction_ss_uRsR::synapse0x2a23860() {
   return (neuron0x29fef00()*0.147691);
}

double NNfunction_ss_uRsR::synapse0x2a232f0() {
   return (neuron0x2a00d10()*0.104048);
}

double NNfunction_ss_uRsR::synapse0x2a23330() {
   return (neuron0x2a00ff0()*1.13082);
}

double NNfunction_ss_uRsR::synapse0x2a239b0() {
   return (neuron0x2a019c0()*0.933492);
}

double NNfunction_ss_uRsR::synapse0x2a239f0() {
   return (neuron0x2a02390()*-1.19479);
}

double NNfunction_ss_uRsR::synapse0x2a23a30() {
   return (neuron0x2a02d60()*0.132513);
}

double NNfunction_ss_uRsR::synapse0x2a23a70() {
   return (neuron0x2a03730()*-0.52138);
}

double NNfunction_ss_uRsR::synapse0x2a23ab0() {
   return (neuron0x29fc280()*1.1428);
}

double NNfunction_ss_uRsR::synapse0x2a23af0() {
   return (neuron0x29fcc50()*-1.05416);
}

double NNfunction_ss_uRsR::synapse0x2a23b30() {
   return (neuron0x2a064c0()*2.51144);
}

double NNfunction_ss_uRsR::synapse0x2a23b70() {
   return (neuron0x2a06e90()*1.14832);
}

double NNfunction_ss_uRsR::synapse0x2a23bb0() {
   return (neuron0x2a07860()*0.411753);
}

double NNfunction_ss_uRsR::synapse0x2a23bf0() {
   return (neuron0x2a08230()*2.27961);
}

double NNfunction_ss_uRsR::synapse0x2a23c30() {
   return (neuron0x2a08c00()*1.04927);
}

double NNfunction_ss_uRsR::synapse0x2a23c70() {
   return (neuron0x2a095d0()*1.57708);
}

double NNfunction_ss_uRsR::synapse0x2a23cb0() {
   return (neuron0x2a09fa0()*1.04544);
}

double NNfunction_ss_uRsR::synapse0x2a23cf0() {
   return (neuron0x2a0a970()*1.48785);
}

double NNfunction_ss_uRsR::synapse0x2a238a0() {
   return (neuron0x2a00a00()*0.415107);
}

double NNfunction_ss_uRsR::synapse0x2a238e0() {
   return (neuron0x2a0d550()*-0.643316);
}

double NNfunction_ss_uRsR::synapse0x2a23920() {
   return (neuron0x2a0df20()*0.391404);
}

double NNfunction_ss_uRsR::synapse0x2a23960() {
   return (neuron0x2a0e8f0()*-1.43926);
}

double NNfunction_ss_uRsR::synapse0x2a23f40() {
   return (neuron0x2a0f2c0()*3.82297);
}

double NNfunction_ss_uRsR::synapse0x2a23f80() {
   return (neuron0x2a0fc90()*-0.293392);
}

double NNfunction_ss_uRsR::synapse0x2a23fc0() {
   return (neuron0x2a10660()*0.135489);
}

double NNfunction_ss_uRsR::synapse0x2a24000() {
   return (neuron0x2a11030()*-1.11918);
}

double NNfunction_ss_uRsR::synapse0x2a24040() {
   return (neuron0x2a11a00()*0.209122);
}

double NNfunction_ss_uRsR::synapse0x2a24080() {
   return (neuron0x2a125e0()*0.207562);
}

double NNfunction_ss_uRsR::synapse0x2a240c0() {
   return (neuron0x2a12fb0()*-1.01614);
}

double NNfunction_ss_uRsR::synapse0x2a24100() {
   return (neuron0x2a03e30()*-0.614953);
}

double NNfunction_ss_uRsR::synapse0x2a24140() {
   return (neuron0x2a04800()*1.41916);
}

double NNfunction_ss_uRsR::synapse0x2a24180() {
   return (neuron0x2a051d0()*-1.29081);
}

double NNfunction_ss_uRsR::synapse0x2a241c0() {
   return (neuron0x2a17810()*-0.315001);
}

double NNfunction_ss_uRsR::synapse0x2a24200() {
   return (neuron0x2a180c0()*-0.194626);
}

double NNfunction_ss_uRsR::synapse0x2a24240() {
   return (neuron0x2a18a90()*1.55628);
}

double NNfunction_ss_uRsR::synapse0x2a24280() {
   return (neuron0x2a19460()*0.31961);
}

double NNfunction_ss_uRsR::synapse0x2a244e0() {
   return (neuron0x2a20660()*-6.67366);
}

double NNfunction_ss_uRsR::synapse0x2a24520() {
   return (neuron0x2a20a00()*9.07718);
}

double NNfunction_ss_uRsR::synapse0x2a24560() {
   return (neuron0x2a20ea0()*0.407381);
}

double NNfunction_ss_uRsR::synapse0x2a245a0() {
   return (neuron0x2a22000()*-1.69422);
}

double NNfunction_ss_uRsR::synapse0x2a245e0() {
   return (neuron0x2a23160()*-2.33834);
}

