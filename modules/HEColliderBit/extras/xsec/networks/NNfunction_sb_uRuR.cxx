#include "NNfunction_sb_uRuR.h"
#include <cmath>

double NNfunction_sb_uRuR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.4653)/15.3066;
   input1 = (in1 - -10.0231)/1171.23;
   input2 = (in2 - 651.708)/625.556;
   input3 = (in3 - -55.2259)/826.192;
   input4 = (in4 - 1091.19)/974.233;
   input5 = (in5 - 914.928)/966.65;
   input6 = (in6 - 926.802)/969.801;
   input7 = (in7 - 937.257)/948.187;
   input8 = (in8 - 912.053)/956.747;
   input9 = (in9 - 893.38)/940.018;
   input10 = (in10 - 983.498)/939.186;
   input11 = (in11 - 710.347)/852.28;
   input12 = (in12 - 713.018)/857.806;
   input13 = (in13 - 506.781)/520.966;
   input14 = (in14 - 367.567)/332.932;
   input15 = (in15 - 745.544)/846.167;
   input16 = (in16 - 545.291)/579.217;
   input17 = (in17 - 741.783)/873.934;
   input18 = (in18 - 740.848)/885.434;
   input19 = (in19 - 789.58)/865.658;
   input20 = (in20 - -7.64513)/489.116;
   input21 = (in21 - 2.85793)/1161.02;
   input22 = (in22 - 4.07579)/1202.25;
   input23 = (in23 - -191.715)/608.29;
   switch(index) {
     case 0:
         return neuron0x29034a0();
     default:
         return 0.;
   }
}

double NNfunction_sb_uRuR::Value(int index, double* input) {
   input0 = (input[0] - 23.4653)/15.3066;
   input1 = (input[1] - -10.0231)/1171.23;
   input2 = (input[2] - 651.708)/625.556;
   input3 = (input[3] - -55.2259)/826.192;
   input4 = (input[4] - 1091.19)/974.233;
   input5 = (input[5] - 914.928)/966.65;
   input6 = (input[6] - 926.802)/969.801;
   input7 = (input[7] - 937.257)/948.187;
   input8 = (input[8] - 912.053)/956.747;
   input9 = (input[9] - 893.38)/940.018;
   input10 = (input[10] - 983.498)/939.186;
   input11 = (input[11] - 710.347)/852.28;
   input12 = (input[12] - 713.018)/857.806;
   input13 = (input[13] - 506.781)/520.966;
   input14 = (input[14] - 367.567)/332.932;
   input15 = (input[15] - 745.544)/846.167;
   input16 = (input[16] - 545.291)/579.217;
   input17 = (input[17] - 741.783)/873.934;
   input18 = (input[18] - 740.848)/885.434;
   input19 = (input[19] - 789.58)/865.658;
   input20 = (input[20] - -7.64513)/489.116;
   input21 = (input[21] - 2.85793)/1161.02;
   input22 = (input[22] - 4.07579)/1202.25;
   input23 = (input[23] - -191.715)/608.29;
   switch(index) {
     case 0:
         return neuron0x29034a0();
     default:
         return 0.;
   }
}

double NNfunction_sb_uRuR::neuron0x28cf560() {
   return input0;
}

double NNfunction_sb_uRuR::neuron0x28cf8a0() {
   return input1;
}

double NNfunction_sb_uRuR::neuron0x28cfbe0() {
   return input2;
}

double NNfunction_sb_uRuR::neuron0x28cff20() {
   return input3;
}

double NNfunction_sb_uRuR::neuron0x28d0260() {
   return input4;
}

double NNfunction_sb_uRuR::neuron0x28d05a0() {
   return input5;
}

double NNfunction_sb_uRuR::neuron0x28d08e0() {
   return input6;
}

double NNfunction_sb_uRuR::neuron0x28d0c20() {
   return input7;
}

double NNfunction_sb_uRuR::neuron0x28d0f60() {
   return input8;
}

double NNfunction_sb_uRuR::neuron0x28d12a0() {
   return input9;
}

double NNfunction_sb_uRuR::neuron0x28d15e0() {
   return input10;
}

double NNfunction_sb_uRuR::neuron0x28d1920() {
   return input11;
}

double NNfunction_sb_uRuR::neuron0x28d1c60() {
   return input12;
}

double NNfunction_sb_uRuR::neuron0x28d1fa0() {
   return input13;
}

double NNfunction_sb_uRuR::neuron0x28d22e0() {
   return input14;
}

double NNfunction_sb_uRuR::neuron0x28d2620() {
   return input15;
}

double NNfunction_sb_uRuR::neuron0x28d2960() {
   return input16;
}

double NNfunction_sb_uRuR::neuron0x28d2ec0() {
   return input17;
}

double NNfunction_sb_uRuR::neuron0x28d30e0() {
   return input18;
}

double NNfunction_sb_uRuR::neuron0x28d3420() {
   return input19;
}

double NNfunction_sb_uRuR::neuron0x28d3760() {
   return input20;
}

double NNfunction_sb_uRuR::neuron0x28d3aa0() {
   return input21;
}

double NNfunction_sb_uRuR::neuron0x28d3de0() {
   return input22;
}

double NNfunction_sb_uRuR::neuron0x28d4120() {
   return input23;
}

double NNfunction_sb_uRuR::input0x28d45c0() {
   double input = 1.20942;
   input += synapse0x268f3d0();
   input += synapse0x28cf420();
   input += synapse0x28cf460();
   input += synapse0x28d4870();
   input += synapse0x28d48b0();
   input += synapse0x28d48f0();
   input += synapse0x28d4930();
   input += synapse0x28d4970();
   input += synapse0x28d49b0();
   input += synapse0x28d49f0();
   input += synapse0x28d4a30();
   input += synapse0x28d4a70();
   input += synapse0x28d4ab0();
   input += synapse0x28d4af0();
   input += synapse0x28d4b30();
   input += synapse0x28d4b70();
   input += synapse0x28cf390();
   input += synapse0x28cf3d0();
   input += synapse0x2680c70();
   input += synapse0x2680cb0();
   input += synapse0x28d4dd0();
   input += synapse0x28d4e10();
   input += synapse0x28d4e50();
   input += synapse0x28d4e90();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28d45c0() {
   double input = input0x28d45c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28d4ed0() {
   double input = 2.75936;
   input += synapse0x28d5210();
   input += synapse0x28d5250();
   input += synapse0x28d5290();
   input += synapse0x28d52d0();
   input += synapse0x28d5310();
   input += synapse0x28d5350();
   input += synapse0x28d5390();
   input += synapse0x28d53d0();
   input += synapse0x28d5410();
   input += synapse0x28d4cc0();
   input += synapse0x28d4d00();
   input += synapse0x28d4d40();
   input += synapse0x28d4d80();
   input += synapse0x28d5660();
   input += synapse0x28d56a0();
   input += synapse0x28d56e0();
   input += synapse0x28d5060();
   input += synapse0x28d50a0();
   input += synapse0x28d5830();
   input += synapse0x28d5870();
   input += synapse0x28d58b0();
   input += synapse0x28d58f0();
   input += synapse0x28d5930();
   input += synapse0x28d5970();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28d4ed0() {
   double input = input0x28d4ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28d59b0() {
   double input = 0.454446;
   input += synapse0x28d5cf0();
   input += synapse0x28d5d30();
   input += synapse0x28d5d70();
   input += synapse0x28d5db0();
   input += synapse0x28d5df0();
   input += synapse0x28d5e30();
   input += synapse0x28d5e70();
   input += synapse0x28d5eb0();
   input += synapse0x28d5ef0();
   input += synapse0x28d5f30();
   input += synapse0x28d5f70();
   input += synapse0x28d5fb0();
   input += synapse0x28d5ff0();
   input += synapse0x28d6030();
   input += synapse0x28d6070();
   input += synapse0x28d60b0();
   input += synapse0x28d5b40();
   input += synapse0x28d5b80();
   input += synapse0x268eac0();
   input += synapse0x268eb00();
   input += synapse0x28be5f0();
   input += synapse0x28be630();
   input += synapse0x28be670();
   input += synapse0x28cf4a0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28d59b0() {
   double input = input0x28d59b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x268f240() {
   double input = -1.07015;
   input += synapse0x28d5600();
   input += synapse0x28cf4e0();
   input += synapse0x28cf520();
   input += synapse0x28d6200();
   input += synapse0x28d6240();
   input += synapse0x28d6280();
   input += synapse0x28d62c0();
   input += synapse0x28d6300();
   input += synapse0x28d6340();
   input += synapse0x28d6380();
   input += synapse0x28d63c0();
   input += synapse0x28d6400();
   input += synapse0x28d6440();
   input += synapse0x28d6480();
   input += synapse0x28d64c0();
   input += synapse0x28d6500();
   input += synapse0x28d5450();
   input += synapse0x28d5490();
   input += synapse0x28d6650();
   input += synapse0x28d6690();
   input += synapse0x28d66d0();
   input += synapse0x28d6710();
   input += synapse0x28d6750();
   input += synapse0x28d6790();
   return input;
}

double NNfunction_sb_uRuR::neuron0x268f240() {
   double input = input0x268f240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28d67d0() {
   double input = -0.142677;
   input += synapse0x28d6b10();
   input += synapse0x28d6b50();
   input += synapse0x28d6b90();
   input += synapse0x28d6bd0();
   input += synapse0x28d6c10();
   input += synapse0x28d6c50();
   input += synapse0x28d6c90();
   input += synapse0x28d6cd0();
   input += synapse0x28d6d10();
   input += synapse0x28d6d50();
   input += synapse0x28d6d90();
   input += synapse0x28d6dd0();
   input += synapse0x28d6e10();
   input += synapse0x28d6e50();
   input += synapse0x28d6e90();
   input += synapse0x28d6ed0();
   input += synapse0x28d6960();
   input += synapse0x28d69a0();
   input += synapse0x28d7020();
   input += synapse0x28d7060();
   input += synapse0x28d70a0();
   input += synapse0x28d70e0();
   input += synapse0x28d7120();
   input += synapse0x28d7160();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28d67d0() {
   double input = input0x28d67d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28d71a0() {
   double input = 0.208521;
   input += synapse0x28d74e0();
   input += synapse0x28d7520();
   input += synapse0x28d7560();
   input += synapse0x28d75a0();
   input += synapse0x28d75e0();
   input += synapse0x28d7620();
   input += synapse0x28d7660();
   input += synapse0x28d76a0();
   input += synapse0x28d76e0();
   input += synapse0x268ee30();
   input += synapse0x268ee70();
   input += synapse0x268eeb0();
   input += synapse0x268eef0();
   input += synapse0x268ef30();
   input += synapse0x268ef70();
   input += synapse0x268efb0();
   input += synapse0x28d7330();
   input += synapse0x28d7370();
   input += synapse0x268f100();
   input += synapse0x268f140();
   input += synapse0x268f180();
   input += synapse0x268f1c0();
   input += synapse0x268f200();
   input += synapse0x28d7f30();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28d71a0() {
   double input = input0x28d71a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28d7f70() {
   double input = -0.0118754;
   input += synapse0x28d82b0();
   input += synapse0x28d82f0();
   input += synapse0x28d8330();
   input += synapse0x28d8370();
   input += synapse0x28d83b0();
   input += synapse0x28d83f0();
   input += synapse0x28d8430();
   input += synapse0x28d8470();
   input += synapse0x28d84b0();
   input += synapse0x28d84f0();
   input += synapse0x28d8530();
   input += synapse0x28d8570();
   input += synapse0x28d85b0();
   input += synapse0x28d85f0();
   input += synapse0x28d8630();
   input += synapse0x28d8670();
   input += synapse0x28d8100();
   input += synapse0x28d8140();
   input += synapse0x28d87c0();
   input += synapse0x28d8800();
   input += synapse0x28d8840();
   input += synapse0x28d8880();
   input += synapse0x28d88c0();
   input += synapse0x28d8900();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28d7f70() {
   double input = input0x28d7f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28d8940() {
   double input = -0.602482;
   input += synapse0x28d8c80();
   input += synapse0x28d8cc0();
   input += synapse0x28d8d00();
   input += synapse0x28d8d40();
   input += synapse0x28d8d80();
   input += synapse0x28d8dc0();
   input += synapse0x28d8e00();
   input += synapse0x28d8e40();
   input += synapse0x28d8e80();
   input += synapse0x28d8ec0();
   input += synapse0x28d8f00();
   input += synapse0x28d8f40();
   input += synapse0x28d8f80();
   input += synapse0x28d8fc0();
   input += synapse0x28d9000();
   input += synapse0x28d9040();
   input += synapse0x28d8ad0();
   input += synapse0x28d8b10();
   input += synapse0x28d9190();
   input += synapse0x28d91d0();
   input += synapse0x28d9210();
   input += synapse0x28d9250();
   input += synapse0x28d9290();
   input += synapse0x28d92d0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28d8940() {
   double input = input0x28d8940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28d9310() {
   double input = 0.343871;
   input += synapse0x28d2db0();
   input += synapse0x28d2df0();
   input += synapse0x28d2e30();
   input += synapse0x28d2e70();
   input += synapse0x28d9860();
   input += synapse0x28d98a0();
   input += synapse0x28d98e0();
   input += synapse0x28d9920();
   input += synapse0x28d9960();
   input += synapse0x28d99a0();
   input += synapse0x28d99e0();
   input += synapse0x28d9a20();
   input += synapse0x28d9a60();
   input += synapse0x28d9aa0();
   input += synapse0x28d9ae0();
   input += synapse0x28d9b20();
   input += synapse0x28d94a0();
   input += synapse0x28d94e0();
   input += synapse0x28d9c70();
   input += synapse0x28d9cb0();
   input += synapse0x28d9cf0();
   input += synapse0x28d9d30();
   input += synapse0x28d9d70();
   input += synapse0x28d9db0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28d9310() {
   double input = input0x28d9310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28d9df0() {
   double input = -0.157826;
   input += synapse0x28da130();
   input += synapse0x28da170();
   input += synapse0x28da1b0();
   input += synapse0x28da1f0();
   input += synapse0x28da230();
   input += synapse0x28da270();
   input += synapse0x28da2b0();
   input += synapse0x28da2f0();
   input += synapse0x28da330();
   input += synapse0x28da370();
   input += synapse0x28da3b0();
   input += synapse0x28da3f0();
   input += synapse0x28da430();
   input += synapse0x28da470();
   input += synapse0x28da4b0();
   input += synapse0x28da4f0();
   input += synapse0x28d9f80();
   input += synapse0x28d9fc0();
   input += synapse0x28da640();
   input += synapse0x28da680();
   input += synapse0x28da6c0();
   input += synapse0x28da700();
   input += synapse0x28da740();
   input += synapse0x28da780();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28d9df0() {
   double input = input0x28d9df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28da7c0() {
   double input = -0.54345;
   input += synapse0x28dab00();
   input += synapse0x28dab40();
   input += synapse0x28dab80();
   input += synapse0x28dabc0();
   input += synapse0x28dac00();
   input += synapse0x28dac40();
   input += synapse0x28dac80();
   input += synapse0x28dacc0();
   input += synapse0x28dad00();
   input += synapse0x28dad40();
   input += synapse0x28dad80();
   input += synapse0x28dadc0();
   input += synapse0x28dae00();
   input += synapse0x28dae40();
   input += synapse0x28dae80();
   input += synapse0x28daec0();
   input += synapse0x28da950();
   input += synapse0x28da990();
   input += synapse0x28d7720();
   input += synapse0x28d7760();
   input += synapse0x28d77a0();
   input += synapse0x28d77e0();
   input += synapse0x28d7820();
   input += synapse0x28d7860();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28da7c0() {
   double input = input0x28da7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28d78a0() {
   double input = -0.692316;
   input += synapse0x28d7be0();
   input += synapse0x28d7c20();
   input += synapse0x28d7c60();
   input += synapse0x28d7ca0();
   input += synapse0x28d7ce0();
   input += synapse0x28d7d20();
   input += synapse0x28d7d60();
   input += synapse0x28d7da0();
   input += synapse0x28d7de0();
   input += synapse0x28d7e20();
   input += synapse0x28d7e60();
   input += synapse0x28d7ea0();
   input += synapse0x28d7ee0();
   input += synapse0x28dc020();
   input += synapse0x28dc060();
   input += synapse0x28dc0a0();
   input += synapse0x28d7a30();
   input += synapse0x28d7a70();
   input += synapse0x28dc1f0();
   input += synapse0x28dc230();
   input += synapse0x28dc270();
   input += synapse0x28dc2b0();
   input += synapse0x28dc2f0();
   input += synapse0x28dc330();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28d78a0() {
   double input = input0x28d78a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28dc370() {
   double input = -0.304124;
   input += synapse0x28dc6b0();
   input += synapse0x28dc6f0();
   input += synapse0x28dc730();
   input += synapse0x28dc770();
   input += synapse0x28dc7b0();
   input += synapse0x28dc7f0();
   input += synapse0x28dc830();
   input += synapse0x28dc870();
   input += synapse0x28dc8b0();
   input += synapse0x28dc8f0();
   input += synapse0x28dc930();
   input += synapse0x28dc970();
   input += synapse0x28dc9b0();
   input += synapse0x28dc9f0();
   input += synapse0x28dca30();
   input += synapse0x28dca70();
   input += synapse0x28dc500();
   input += synapse0x28dc540();
   input += synapse0x28dcbc0();
   input += synapse0x28dcc00();
   input += synapse0x28dcc40();
   input += synapse0x28dcc80();
   input += synapse0x28dccc0();
   input += synapse0x28dcd00();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28dc370() {
   double input = input0x28dc370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28dcd40() {
   double input = 1.87899;
   input += synapse0x28dd080();
   input += synapse0x28dd0c0();
   input += synapse0x28dd100();
   input += synapse0x28dd140();
   input += synapse0x28dd180();
   input += synapse0x28dd1c0();
   input += synapse0x28dd200();
   input += synapse0x28dd240();
   input += synapse0x28dd280();
   input += synapse0x28dd2c0();
   input += synapse0x28dd300();
   input += synapse0x28dd340();
   input += synapse0x28dd380();
   input += synapse0x28dd3c0();
   input += synapse0x28dd400();
   input += synapse0x28dd440();
   input += synapse0x28dced0();
   input += synapse0x28dcf10();
   input += synapse0x28dd590();
   input += synapse0x28dd5d0();
   input += synapse0x28dd610();
   input += synapse0x28dd650();
   input += synapse0x28dd690();
   input += synapse0x28dd6d0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28dcd40() {
   double input = input0x28dcd40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28dd710() {
   double input = 1.88638;
   input += synapse0x28dda50();
   input += synapse0x28dda90();
   input += synapse0x28ddad0();
   input += synapse0x28ddb10();
   input += synapse0x28ddb50();
   input += synapse0x28ddb90();
   input += synapse0x28ddbd0();
   input += synapse0x28ddc10();
   input += synapse0x28ddc50();
   input += synapse0x28ddc90();
   input += synapse0x28ddcd0();
   input += synapse0x28ddd10();
   input += synapse0x28ddd50();
   input += synapse0x28ddd90();
   input += synapse0x28dddd0();
   input += synapse0x28dde10();
   input += synapse0x28dd8a0();
   input += synapse0x28dd8e0();
   input += synapse0x28ddf60();
   input += synapse0x28ddfa0();
   input += synapse0x28ddfe0();
   input += synapse0x28de020();
   input += synapse0x28de060();
   input += synapse0x28de0a0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28dd710() {
   double input = input0x28dd710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28de0e0() {
   double input = 0.490412;
   input += synapse0x28de420();
   input += synapse0x28cf780();
   input += synapse0x28cf7c0();
   input += synapse0x28cfac0();
   input += synapse0x28cfb00();
   input += synapse0x28cfe00();
   input += synapse0x28cfe40();
   input += synapse0x28d0140();
   input += synapse0x28d0180();
   input += synapse0x28d0480();
   input += synapse0x28d04c0();
   input += synapse0x28d07c0();
   input += synapse0x28d0800();
   input += synapse0x28d0b00();
   input += synapse0x28d0b40();
   input += synapse0x28d0e40();
   input += synapse0x28d0e80();
   input += synapse0x28d1180();
   input += synapse0x28d11c0();
   input += synapse0x28d14c0();
   input += synapse0x28d1500();
   input += synapse0x28d1800();
   input += synapse0x28d1840();
   input += synapse0x28d1b40();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28de0e0() {
   double input = input0x28de0e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28dfef0() {
   double input = 2.03726;
   input += synapse0x28d1b80();
   input += synapse0x28d2840();
   input += synapse0x28d2880();
   input += synapse0x28de270();
   input += synapse0x28de2b0();
   input += synapse0x28d2b80();
   input += synapse0x28d2bc0();
   input += synapse0x2680b50();
   input += synapse0x2680b90();
   input += synapse0x28d3300();
   input += synapse0x28d3340();
   input += synapse0x28d3640();
   input += synapse0x28d3680();
   input += synapse0x28d3980();
   input += synapse0x28d39c0();
   input += synapse0x28d3cc0();
   input += synapse0x28d3d00();
   input += synapse0x28d4000();
   input += synapse0x28d4040();
   input += synapse0x28d4340();
   input += synapse0x28d4380();
   input += synapse0x28d1e80();
   input += synapse0x28d1ec0();
   input += synapse0x28e0190();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28dfef0() {
   double input = input0x28dfef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28e01d0() {
   double input = 2.12564;
   input += synapse0x28e0510();
   input += synapse0x28e0550();
   input += synapse0x28e0590();
   input += synapse0x28e05d0();
   input += synapse0x28e0610();
   input += synapse0x28e0650();
   input += synapse0x28e0690();
   input += synapse0x28e06d0();
   input += synapse0x28e0710();
   input += synapse0x28e0750();
   input += synapse0x28e0790();
   input += synapse0x28e07d0();
   input += synapse0x28e0810();
   input += synapse0x28e0850();
   input += synapse0x28e0890();
   input += synapse0x28e08d0();
   input += synapse0x28e0360();
   input += synapse0x28e03a0();
   input += synapse0x28e0a20();
   input += synapse0x28e0a60();
   input += synapse0x28e0aa0();
   input += synapse0x28e0ae0();
   input += synapse0x28e0b20();
   input += synapse0x28e0b60();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28e01d0() {
   double input = input0x28e01d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28e0ba0() {
   double input = 0.780156;
   input += synapse0x28e0ee0();
   input += synapse0x28e0f20();
   input += synapse0x28e0f60();
   input += synapse0x28e0fa0();
   input += synapse0x28e0fe0();
   input += synapse0x28e1020();
   input += synapse0x28e1060();
   input += synapse0x28e10a0();
   input += synapse0x28e10e0();
   input += synapse0x28e1120();
   input += synapse0x28e1160();
   input += synapse0x28e11a0();
   input += synapse0x28e11e0();
   input += synapse0x28e1220();
   input += synapse0x28e1260();
   input += synapse0x28e12a0();
   input += synapse0x28e0d30();
   input += synapse0x28e0d70();
   input += synapse0x28e13f0();
   input += synapse0x28e1430();
   input += synapse0x28e1470();
   input += synapse0x28e14b0();
   input += synapse0x28e14f0();
   input += synapse0x28e1530();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28e0ba0() {
   double input = input0x28e0ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28e1570() {
   double input = 0.249792;
   input += synapse0x28e18b0();
   input += synapse0x28e18f0();
   input += synapse0x28e1930();
   input += synapse0x28e1970();
   input += synapse0x28e19b0();
   input += synapse0x28e19f0();
   input += synapse0x28e1a30();
   input += synapse0x28e1a70();
   input += synapse0x28e1ab0();
   input += synapse0x28e1af0();
   input += synapse0x28e1b30();
   input += synapse0x28e1b70();
   input += synapse0x28e1bb0();
   input += synapse0x28e1bf0();
   input += synapse0x28e1c30();
   input += synapse0x28e1c70();
   input += synapse0x28e1700();
   input += synapse0x28e1740();
   input += synapse0x28e1dc0();
   input += synapse0x28e1e00();
   input += synapse0x28e1e40();
   input += synapse0x28e1e80();
   input += synapse0x28e1ec0();
   input += synapse0x28e1f00();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28e1570() {
   double input = input0x28e1570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28e1f40() {
   double input = -0.290018;
   input += synapse0x28e2280();
   input += synapse0x28e22c0();
   input += synapse0x28e2300();
   input += synapse0x28e2340();
   input += synapse0x28e2380();
   input += synapse0x28e23c0();
   input += synapse0x28e2400();
   input += synapse0x28e2440();
   input += synapse0x28e2480();
   input += synapse0x28e24c0();
   input += synapse0x28e2500();
   input += synapse0x28e2540();
   input += synapse0x28e2580();
   input += synapse0x28e25c0();
   input += synapse0x28e2600();
   input += synapse0x28e2640();
   input += synapse0x28e20d0();
   input += synapse0x28e2110();
   input += synapse0x28e2790();
   input += synapse0x28e27d0();
   input += synapse0x28e2810();
   input += synapse0x28e2850();
   input += synapse0x28e2890();
   input += synapse0x28e28d0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28e1f40() {
   double input = input0x28e1f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28e2910() {
   double input = 0.668213;
   input += synapse0x28e2c50();
   input += synapse0x28e2c90();
   input += synapse0x28e2cd0();
   input += synapse0x28e2d10();
   input += synapse0x28e2d50();
   input += synapse0x28e2d90();
   input += synapse0x28e2dd0();
   input += synapse0x28e2e10();
   input += synapse0x28e2e50();
   input += synapse0x28db010();
   input += synapse0x28db050();
   input += synapse0x28db090();
   input += synapse0x28db0d0();
   input += synapse0x28db110();
   input += synapse0x28db150();
   input += synapse0x28db190();
   input += synapse0x28e2aa0();
   input += synapse0x28e2ae0();
   input += synapse0x28db2e0();
   input += synapse0x28db320();
   input += synapse0x28db360();
   input += synapse0x28db3a0();
   input += synapse0x28db3e0();
   input += synapse0x28db420();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28e2910() {
   double input = input0x28e2910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28db460() {
   double input = 1.12283;
   input += synapse0x28db7a0();
   input += synapse0x28db7e0();
   input += synapse0x28db820();
   input += synapse0x28db860();
   input += synapse0x28db8a0();
   input += synapse0x28db8e0();
   input += synapse0x28db920();
   input += synapse0x28db960();
   input += synapse0x28db9a0();
   input += synapse0x28db9e0();
   input += synapse0x28dba20();
   input += synapse0x28dba60();
   input += synapse0x28dbaa0();
   input += synapse0x28dbae0();
   input += synapse0x28dbb20();
   input += synapse0x28dbb60();
   input += synapse0x28db5f0();
   input += synapse0x28db630();
   input += synapse0x28dbcb0();
   input += synapse0x28dbcf0();
   input += synapse0x28dbd30();
   input += synapse0x28dbd70();
   input += synapse0x28dbdb0();
   input += synapse0x28dbdf0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28db460() {
   double input = input0x28db460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28dbe30() {
   double input = -0.164416;
   input += synapse0x28dbfc0();
   input += synapse0x28e5050();
   input += synapse0x28e5090();
   input += synapse0x28e50d0();
   input += synapse0x28e5110();
   input += synapse0x28e5150();
   input += synapse0x28e5190();
   input += synapse0x28e51d0();
   input += synapse0x28e5210();
   input += synapse0x28e5250();
   input += synapse0x28e5290();
   input += synapse0x28e52d0();
   input += synapse0x28e5310();
   input += synapse0x28e5350();
   input += synapse0x28e5390();
   input += synapse0x28e53d0();
   input += synapse0x28e4ea0();
   input += synapse0x28e4ee0();
   input += synapse0x28e5520();
   input += synapse0x28e5560();
   input += synapse0x28e55a0();
   input += synapse0x28e55e0();
   input += synapse0x28e5620();
   input += synapse0x28e5660();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28dbe30() {
   double input = input0x28dbe30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28e56a0() {
   double input = 0.107406;
   input += synapse0x28e59e0();
   input += synapse0x28e5a20();
   input += synapse0x28e5a60();
   input += synapse0x28e5aa0();
   input += synapse0x28e5ae0();
   input += synapse0x28e5b20();
   input += synapse0x28e5b60();
   input += synapse0x28e5ba0();
   input += synapse0x28e5be0();
   input += synapse0x28e5c20();
   input += synapse0x28e5c60();
   input += synapse0x28e5ca0();
   input += synapse0x28e5ce0();
   input += synapse0x28e5d20();
   input += synapse0x28e5d60();
   input += synapse0x28e5da0();
   input += synapse0x28e5830();
   input += synapse0x28e5870();
   input += synapse0x28e5ef0();
   input += synapse0x28e5f30();
   input += synapse0x28e5f70();
   input += synapse0x28e5fb0();
   input += synapse0x28e5ff0();
   input += synapse0x28e6030();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28e56a0() {
   double input = input0x28e56a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28e6070() {
   double input = -1.77076;
   input += synapse0x28e63b0();
   input += synapse0x28e63f0();
   input += synapse0x28e6430();
   input += synapse0x28e6470();
   input += synapse0x28e64b0();
   input += synapse0x28e64f0();
   input += synapse0x28e6530();
   input += synapse0x28e6570();
   input += synapse0x28e65b0();
   input += synapse0x28e65f0();
   input += synapse0x28e6630();
   input += synapse0x28e6670();
   input += synapse0x28e66b0();
   input += synapse0x28e66f0();
   input += synapse0x28e6730();
   input += synapse0x28e6770();
   input += synapse0x28e6200();
   input += synapse0x28e6240();
   input += synapse0x28e68c0();
   input += synapse0x28e6900();
   input += synapse0x28e6940();
   input += synapse0x28e6980();
   input += synapse0x28e69c0();
   input += synapse0x28e6a00();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28e6070() {
   double input = input0x28e6070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28e6a40() {
   double input = -0.51674;
   input += synapse0x28e6d80();
   input += synapse0x28e6dc0();
   input += synapse0x28e6e00();
   input += synapse0x28e6e40();
   input += synapse0x28e6e80();
   input += synapse0x28e6ec0();
   input += synapse0x28e6f00();
   input += synapse0x28e6f40();
   input += synapse0x28e6f80();
   input += synapse0x28e6fc0();
   input += synapse0x28e7000();
   input += synapse0x28e7040();
   input += synapse0x28e7080();
   input += synapse0x28e70c0();
   input += synapse0x28e7100();
   input += synapse0x28e7140();
   input += synapse0x28e6bd0();
   input += synapse0x28e6c10();
   input += synapse0x28e7290();
   input += synapse0x28e72d0();
   input += synapse0x28e7310();
   input += synapse0x28e7350();
   input += synapse0x28e7390();
   input += synapse0x28e73d0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28e6a40() {
   double input = input0x28e6a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28e7410() {
   double input = 1.64399;
   input += synapse0x28e7750();
   input += synapse0x28e7790();
   input += synapse0x28e77d0();
   input += synapse0x28e7810();
   input += synapse0x28e7850();
   input += synapse0x28e7890();
   input += synapse0x28e78d0();
   input += synapse0x28e7910();
   input += synapse0x28e7950();
   input += synapse0x28e7990();
   input += synapse0x28e79d0();
   input += synapse0x28e7a10();
   input += synapse0x28e7a50();
   input += synapse0x28e7a90();
   input += synapse0x28e7ad0();
   input += synapse0x28e7b10();
   input += synapse0x28e75a0();
   input += synapse0x28e75e0();
   input += synapse0x28e7c60();
   input += synapse0x28e7ca0();
   input += synapse0x28e7ce0();
   input += synapse0x28e7d20();
   input += synapse0x28e7d60();
   input += synapse0x28e7da0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28e7410() {
   double input = input0x28e7410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28e7de0() {
   double input = -1.11579;
   input += synapse0x28e8120();
   input += synapse0x28e8160();
   input += synapse0x28e81a0();
   input += synapse0x28e81e0();
   input += synapse0x28e8220();
   input += synapse0x28e8260();
   input += synapse0x28e82a0();
   input += synapse0x28e82e0();
   input += synapse0x28e8320();
   input += synapse0x28e8360();
   input += synapse0x28e83a0();
   input += synapse0x28e83e0();
   input += synapse0x28e8420();
   input += synapse0x28e8460();
   input += synapse0x28e84a0();
   input += synapse0x28e84e0();
   input += synapse0x28e7f70();
   input += synapse0x28e7fb0();
   input += synapse0x28e8630();
   input += synapse0x28e8670();
   input += synapse0x28e86b0();
   input += synapse0x28e86f0();
   input += synapse0x28e8730();
   input += synapse0x28e8770();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28e7de0() {
   double input = input0x28e7de0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28e87b0() {
   double input = 1.71449;
   input += synapse0x28e8af0();
   input += synapse0x28e8b30();
   input += synapse0x28e8b70();
   input += synapse0x28e8bb0();
   input += synapse0x28e8bf0();
   input += synapse0x28e8c30();
   input += synapse0x28e8c70();
   input += synapse0x28e8cb0();
   input += synapse0x28e8cf0();
   input += synapse0x28e8d30();
   input += synapse0x28e8d70();
   input += synapse0x28e8db0();
   input += synapse0x28e8df0();
   input += synapse0x28e8e30();
   input += synapse0x28e8e70();
   input += synapse0x28e8eb0();
   input += synapse0x28e8940();
   input += synapse0x28e8980();
   input += synapse0x28e9000();
   input += synapse0x28e9040();
   input += synapse0x28e9080();
   input += synapse0x28e90c0();
   input += synapse0x28e9100();
   input += synapse0x28e9140();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28e87b0() {
   double input = input0x28e87b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28e9180() {
   double input = -0.925079;
   input += synapse0x28e94c0();
   input += synapse0x28e9500();
   input += synapse0x28e9540();
   input += synapse0x28e9580();
   input += synapse0x28e95c0();
   input += synapse0x28e9600();
   input += synapse0x28e9640();
   input += synapse0x28e9680();
   input += synapse0x28e96c0();
   input += synapse0x28e9700();
   input += synapse0x28e9740();
   input += synapse0x28e9780();
   input += synapse0x28e97c0();
   input += synapse0x28e9800();
   input += synapse0x28e9840();
   input += synapse0x28e9880();
   input += synapse0x28e9310();
   input += synapse0x28e9350();
   input += synapse0x28e99d0();
   input += synapse0x28e9a10();
   input += synapse0x28e9a50();
   input += synapse0x28e9a90();
   input += synapse0x28e9ad0();
   input += synapse0x28e9b10();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28e9180() {
   double input = input0x28e9180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28e9b50() {
   double input = 0.0450663;
   input += synapse0x28e9e90();
   input += synapse0x28de460();
   input += synapse0x28de4a0();
   input += synapse0x28de4e0();
   input += synapse0x28de730();
   input += synapse0x28de770();
   input += synapse0x28de7b0();
   input += synapse0x28dea00();
   input += synapse0x28dea40();
   input += synapse0x28dec90();
   input += synapse0x28decd0();
   input += synapse0x28ded10();
   input += synapse0x28def60();
   input += synapse0x28defa0();
   input += synapse0x28df1f0();
   input += synapse0x28df230();
   input += synapse0x28e9ce0();
   input += synapse0x28e9d20();
   input += synapse0x28df380();
   input += synapse0x28df890();
   input += synapse0x28df8d0();
   input += synapse0x28df910();
   input += synapse0x28dfb60();
   input += synapse0x28dfba0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28e9b50() {
   double input = input0x28e9b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28dfbe0() {
   double input = -6.42107;
   input += synapse0x28df450();
   input += synapse0x28df490();
   input += synapse0x28df4d0();
   input += synapse0x28df510();
   input += synapse0x28dfe90();
   input += synapse0x28ec1e0();
   input += synapse0x28ec220();
   input += synapse0x28ec260();
   input += synapse0x28ec2a0();
   input += synapse0x28ec2e0();
   input += synapse0x28ec320();
   input += synapse0x28ec360();
   input += synapse0x28ec3a0();
   input += synapse0x28ec3e0();
   input += synapse0x28ec420();
   input += synapse0x28ec460();
   input += synapse0x28dfd70();
   input += synapse0x28dfdb0();
   input += synapse0x28ec5b0();
   input += synapse0x28ec5f0();
   input += synapse0x28ec630();
   input += synapse0x28ec670();
   input += synapse0x28ec6b0();
   input += synapse0x28ec6f0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28dfbe0() {
   double input = input0x28dfbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28ec730() {
   double input = 0.688889;
   input += synapse0x28eca70();
   input += synapse0x28ecab0();
   input += synapse0x28ecaf0();
   input += synapse0x28ecb30();
   input += synapse0x28ecb70();
   input += synapse0x28ecbb0();
   input += synapse0x28ecbf0();
   input += synapse0x28ecc30();
   input += synapse0x28ecc70();
   input += synapse0x28eccb0();
   input += synapse0x28eccf0();
   input += synapse0x28ecd30();
   input += synapse0x28ecd70();
   input += synapse0x28ecdb0();
   input += synapse0x28ecdf0();
   input += synapse0x28ece30();
   input += synapse0x28ec8c0();
   input += synapse0x28ec900();
   input += synapse0x28ecf80();
   input += synapse0x28ecfc0();
   input += synapse0x28ed000();
   input += synapse0x28ed040();
   input += synapse0x28ed080();
   input += synapse0x28ed0c0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28ec730() {
   double input = input0x28ec730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28ed100() {
   double input = 2.30893;
   input += synapse0x28ed440();
   input += synapse0x28ed480();
   input += synapse0x28ed4c0();
   input += synapse0x28ed500();
   input += synapse0x28ed540();
   input += synapse0x28ed580();
   input += synapse0x28ed5c0();
   input += synapse0x28ed600();
   input += synapse0x28ed640();
   input += synapse0x28ed680();
   input += synapse0x28ed6c0();
   input += synapse0x28ed700();
   input += synapse0x28ed740();
   input += synapse0x28ed780();
   input += synapse0x28ed7c0();
   input += synapse0x28ed800();
   input += synapse0x28ed290();
   input += synapse0x28ed2d0();
   input += synapse0x28ed950();
   input += synapse0x28ed990();
   input += synapse0x28ed9d0();
   input += synapse0x28eda10();
   input += synapse0x28eda50();
   input += synapse0x28eda90();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28ed100() {
   double input = input0x28ed100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28edad0() {
   double input = 3.35123;
   input += synapse0x28ede10();
   input += synapse0x28ede50();
   input += synapse0x28ede90();
   input += synapse0x28eded0();
   input += synapse0x28edf10();
   input += synapse0x28edf50();
   input += synapse0x28edf90();
   input += synapse0x28edfd0();
   input += synapse0x28ee010();
   input += synapse0x28ee050();
   input += synapse0x28ee090();
   input += synapse0x28ee0d0();
   input += synapse0x28ee110();
   input += synapse0x28ee150();
   input += synapse0x28ee190();
   input += synapse0x28ee1d0();
   input += synapse0x28edc60();
   input += synapse0x28edca0();
   input += synapse0x28ee320();
   input += synapse0x28ee360();
   input += synapse0x28ee3a0();
   input += synapse0x28ee3e0();
   input += synapse0x28ee420();
   input += synapse0x28ee460();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28edad0() {
   double input = input0x28edad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28ee4a0() {
   double input = -0.178774;
   input += synapse0x28ee7e0();
   input += synapse0x28ee820();
   input += synapse0x28ee860();
   input += synapse0x28ee8a0();
   input += synapse0x28ee8e0();
   input += synapse0x28ee920();
   input += synapse0x28ee960();
   input += synapse0x28ee9a0();
   input += synapse0x28ee9e0();
   input += synapse0x28eea20();
   input += synapse0x28eea60();
   input += synapse0x28eeaa0();
   input += synapse0x28eeae0();
   input += synapse0x28eeb20();
   input += synapse0x28eeb60();
   input += synapse0x28eeba0();
   input += synapse0x28ee630();
   input += synapse0x28ee670();
   input += synapse0x28eecf0();
   input += synapse0x28eed30();
   input += synapse0x28eed70();
   input += synapse0x28eedb0();
   input += synapse0x28eedf0();
   input += synapse0x28eee30();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28ee4a0() {
   double input = input0x28ee4a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28eee70() {
   double input = -1.73778;
   input += synapse0x28ef1b0();
   input += synapse0x28ef1f0();
   input += synapse0x28ef230();
   input += synapse0x28ef270();
   input += synapse0x28ef2b0();
   input += synapse0x28ef2f0();
   input += synapse0x28ef330();
   input += synapse0x28ef370();
   input += synapse0x28ef3b0();
   input += synapse0x28ef3f0();
   input += synapse0x28ef430();
   input += synapse0x28ef470();
   input += synapse0x28ef4b0();
   input += synapse0x28ef4f0();
   input += synapse0x28ef530();
   input += synapse0x28ef570();
   input += synapse0x28ef000();
   input += synapse0x28ef040();
   input += synapse0x28ef6c0();
   input += synapse0x28ef700();
   input += synapse0x28ef740();
   input += synapse0x28ef780();
   input += synapse0x28ef7c0();
   input += synapse0x28ef800();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28eee70() {
   double input = input0x28eee70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28ef840() {
   double input = -0.638225;
   input += synapse0x28efb80();
   input += synapse0x28efbc0();
   input += synapse0x28efc00();
   input += synapse0x28efc40();
   input += synapse0x28efc80();
   input += synapse0x28efcc0();
   input += synapse0x28efd00();
   input += synapse0x28efd40();
   input += synapse0x28efd80();
   input += synapse0x28efdc0();
   input += synapse0x28efe00();
   input += synapse0x28efe40();
   input += synapse0x28efe80();
   input += synapse0x28efec0();
   input += synapse0x28eff00();
   input += synapse0x28eff40();
   input += synapse0x28ef9d0();
   input += synapse0x28efa10();
   input += synapse0x28f0090();
   input += synapse0x28f00d0();
   input += synapse0x28f0110();
   input += synapse0x28f0150();
   input += synapse0x28f0190();
   input += synapse0x28f01d0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28ef840() {
   double input = input0x28ef840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28f0210() {
   double input = 1.53479;
   input += synapse0x28f0550();
   input += synapse0x28f0590();
   input += synapse0x28f05d0();
   input += synapse0x28f0610();
   input += synapse0x28f0650();
   input += synapse0x28f0690();
   input += synapse0x28f06d0();
   input += synapse0x28f0710();
   input += synapse0x28f0750();
   input += synapse0x28f0790();
   input += synapse0x28f07d0();
   input += synapse0x28f0810();
   input += synapse0x28f0850();
   input += synapse0x28f0890();
   input += synapse0x28f08d0();
   input += synapse0x28f0910();
   input += synapse0x28f03a0();
   input += synapse0x28f03e0();
   input += synapse0x28f0a60();
   input += synapse0x28f0aa0();
   input += synapse0x28f0ae0();
   input += synapse0x28f0b20();
   input += synapse0x28f0b60();
   input += synapse0x28f0ba0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28f0210() {
   double input = input0x28f0210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28f0be0() {
   double input = -0.46478;
   input += synapse0x28d9650();
   input += synapse0x28d9690();
   input += synapse0x28d96d0();
   input += synapse0x28d9710();
   input += synapse0x28d9750();
   input += synapse0x28d9790();
   input += synapse0x28d97d0();
   input += synapse0x28d9810();
   input += synapse0x28f1330();
   input += synapse0x28f1370();
   input += synapse0x28f13b0();
   input += synapse0x28f13f0();
   input += synapse0x28f1430();
   input += synapse0x28f1470();
   input += synapse0x28f14b0();
   input += synapse0x28f14f0();
   input += synapse0x28f0d70();
   input += synapse0x28f0db0();
   input += synapse0x28f1640();
   input += synapse0x28f1680();
   input += synapse0x28f16c0();
   input += synapse0x28f1700();
   input += synapse0x28f1740();
   input += synapse0x28f1780();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28f0be0() {
   double input = input0x28f0be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28f17c0() {
   double input = 0.68953;
   input += synapse0x28f1b00();
   input += synapse0x28f1b40();
   input += synapse0x28f1b80();
   input += synapse0x28f1bc0();
   input += synapse0x28f1c00();
   input += synapse0x28f1c40();
   input += synapse0x28f1c80();
   input += synapse0x28f1cc0();
   input += synapse0x28f1d00();
   input += synapse0x28f1d40();
   input += synapse0x28f1d80();
   input += synapse0x28f1dc0();
   input += synapse0x28f1e00();
   input += synapse0x28f1e40();
   input += synapse0x28f1e80();
   input += synapse0x28f1ec0();
   input += synapse0x28f1950();
   input += synapse0x28f1990();
   input += synapse0x28f2010();
   input += synapse0x28f2050();
   input += synapse0x28f2090();
   input += synapse0x28f20d0();
   input += synapse0x28f2110();
   input += synapse0x28f2150();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28f17c0() {
   double input = input0x28f17c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28f2190() {
   double input = -4.05622;
   input += synapse0x28f24d0();
   input += synapse0x28f2510();
   input += synapse0x28f2550();
   input += synapse0x28f2590();
   input += synapse0x28f25d0();
   input += synapse0x28f2610();
   input += synapse0x28f2650();
   input += synapse0x28f2690();
   input += synapse0x28f26d0();
   input += synapse0x28f2710();
   input += synapse0x28f2750();
   input += synapse0x28f2790();
   input += synapse0x28f27d0();
   input += synapse0x28f2810();
   input += synapse0x28f2850();
   input += synapse0x28f2890();
   input += synapse0x28f2320();
   input += synapse0x28f2360();
   input += synapse0x28e2e90();
   input += synapse0x28e2ed0();
   input += synapse0x28e2f10();
   input += synapse0x28e2f50();
   input += synapse0x28e2f90();
   input += synapse0x28e2fd0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28f2190() {
   double input = input0x28f2190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28e3010() {
   double input = -2.26927;
   input += synapse0x28e3350();
   input += synapse0x28e3390();
   input += synapse0x28e33d0();
   input += synapse0x28e3410();
   input += synapse0x28e3450();
   input += synapse0x28e3490();
   input += synapse0x28e34d0();
   input += synapse0x28e3510();
   input += synapse0x28e3550();
   input += synapse0x28e3590();
   input += synapse0x28e35d0();
   input += synapse0x28e3610();
   input += synapse0x28e3650();
   input += synapse0x28e3690();
   input += synapse0x28e36d0();
   input += synapse0x28e3710();
   input += synapse0x28e31a0();
   input += synapse0x28e31e0();
   input += synapse0x28e3860();
   input += synapse0x28e38a0();
   input += synapse0x28e38e0();
   input += synapse0x28e3920();
   input += synapse0x28e3960();
   input += synapse0x28e39a0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28e3010() {
   double input = input0x28e3010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28e39e0() {
   double input = -0.593534;
   input += synapse0x28e3d20();
   input += synapse0x28e3d60();
   input += synapse0x28e3da0();
   input += synapse0x28e3de0();
   input += synapse0x28e3e20();
   input += synapse0x28e3e60();
   input += synapse0x28e3ea0();
   input += synapse0x28e3ee0();
   input += synapse0x28e3f20();
   input += synapse0x28e3f60();
   input += synapse0x28e3fa0();
   input += synapse0x28e3fe0();
   input += synapse0x28e4020();
   input += synapse0x28e4060();
   input += synapse0x28e40a0();
   input += synapse0x28e40e0();
   input += synapse0x28e3b70();
   input += synapse0x28e3bb0();
   input += synapse0x28e4230();
   input += synapse0x28e4270();
   input += synapse0x28e42b0();
   input += synapse0x28e42f0();
   input += synapse0x28e4330();
   input += synapse0x28e4370();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28e39e0() {
   double input = input0x28e39e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28e43b0() {
   double input = -2.14223;
   input += synapse0x28e46f0();
   input += synapse0x28e4730();
   input += synapse0x28e4770();
   input += synapse0x28e47b0();
   input += synapse0x28e47f0();
   input += synapse0x28e4830();
   input += synapse0x28e4870();
   input += synapse0x28e48b0();
   input += synapse0x28e48f0();
   input += synapse0x28e4930();
   input += synapse0x28e4970();
   input += synapse0x28e49b0();
   input += synapse0x28e49f0();
   input += synapse0x28e4a30();
   input += synapse0x28e4a70();
   input += synapse0x28e4ab0();
   input += synapse0x28e4540();
   input += synapse0x28e4580();
   input += synapse0x28e4c00();
   input += synapse0x28e4c40();
   input += synapse0x28e4c80();
   input += synapse0x28e4cc0();
   input += synapse0x28e4d00();
   input += synapse0x28e4d40();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28e43b0() {
   double input = input0x28e43b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28f69f0() {
   double input = -0.915524;
   input += synapse0x28f6c10();
   input += synapse0x28f6c50();
   input += synapse0x28f6c90();
   input += synapse0x28f6cd0();
   input += synapse0x28f6d10();
   input += synapse0x28f6d50();
   input += synapse0x28f6d90();
   input += synapse0x28f6dd0();
   input += synapse0x28f6e10();
   input += synapse0x28f6e50();
   input += synapse0x28f6e90();
   input += synapse0x28f6ed0();
   input += synapse0x28f6f10();
   input += synapse0x28f6f50();
   input += synapse0x28f6f90();
   input += synapse0x28f6fd0();
   input += synapse0x28e4d80();
   input += synapse0x28e4dc0();
   input += synapse0x28f7120();
   input += synapse0x28f7160();
   input += synapse0x28f71a0();
   input += synapse0x28f71e0();
   input += synapse0x28f7220();
   input += synapse0x28f7260();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28f69f0() {
   double input = input0x28f69f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28f72a0() {
   double input = 1.11443;
   input += synapse0x28f75e0();
   input += synapse0x28f7620();
   input += synapse0x28f7660();
   input += synapse0x28f76a0();
   input += synapse0x28f76e0();
   input += synapse0x28f7720();
   input += synapse0x28f7760();
   input += synapse0x28f77a0();
   input += synapse0x28f77e0();
   input += synapse0x28f7820();
   input += synapse0x28f7860();
   input += synapse0x28f78a0();
   input += synapse0x28f78e0();
   input += synapse0x28f7920();
   input += synapse0x28f7960();
   input += synapse0x28f79a0();
   input += synapse0x28f7430();
   input += synapse0x28f7470();
   input += synapse0x28f7af0();
   input += synapse0x28f7b30();
   input += synapse0x28f7b70();
   input += synapse0x28f7bb0();
   input += synapse0x28f7bf0();
   input += synapse0x28f7c30();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28f72a0() {
   double input = input0x28f72a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28f7c70() {
   double input = 1.55198;
   input += synapse0x28f7fb0();
   input += synapse0x28f7ff0();
   input += synapse0x28f8030();
   input += synapse0x28f8070();
   input += synapse0x28f80b0();
   input += synapse0x28f80f0();
   input += synapse0x28f8130();
   input += synapse0x28f8170();
   input += synapse0x28f81b0();
   input += synapse0x28f81f0();
   input += synapse0x28f8230();
   input += synapse0x28f8270();
   input += synapse0x28f82b0();
   input += synapse0x28f82f0();
   input += synapse0x28f8330();
   input += synapse0x28f8370();
   input += synapse0x28f7e00();
   input += synapse0x28f7e40();
   input += synapse0x28f84c0();
   input += synapse0x28f8500();
   input += synapse0x28f8540();
   input += synapse0x28f8580();
   input += synapse0x28f85c0();
   input += synapse0x28f8600();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28f7c70() {
   double input = input0x28f7c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28f8640() {
   double input = -1.00212;
   input += synapse0x28f8980();
   input += synapse0x28f89c0();
   input += synapse0x28f8a00();
   input += synapse0x28f8a40();
   input += synapse0x28f8a80();
   input += synapse0x28f8ac0();
   input += synapse0x28f8b00();
   input += synapse0x28f8b40();
   input += synapse0x28f8b80();
   input += synapse0x28f8bc0();
   input += synapse0x28f8c00();
   input += synapse0x28f8c40();
   input += synapse0x28f8c80();
   input += synapse0x28f8cc0();
   input += synapse0x28f8d00();
   input += synapse0x28f8d40();
   input += synapse0x28f87d0();
   input += synapse0x28f8810();
   input += synapse0x28f8e90();
   input += synapse0x28f8ed0();
   input += synapse0x28f8f10();
   input += synapse0x28f8f50();
   input += synapse0x28f8f90();
   input += synapse0x28f8fd0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28f8640() {
   double input = input0x28f8640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28ff840() {
   double input = 0.0234183;
   input += synapse0x28d5570();
   input += synapse0x28d55b0();
   input += synapse0x28d6a80();
   input += synapse0x28d6ac0();
   input += synapse0x28d7450();
   input += synapse0x28d7490();
   input += synapse0x28d8220();
   input += synapse0x28d8260();
   input += synapse0x28d8bf0();
   input += synapse0x28d8c30();
   input += synapse0x28d95c0();
   input += synapse0x28d9600();
   input += synapse0x28da0a0();
   input += synapse0x28da0e0();
   input += synapse0x28daa70();
   input += synapse0x28daab0();
   input += synapse0x28d7b50();
   input += synapse0x28d7b90();
   input += synapse0x28dc620();
   input += synapse0x28dc660();
   input += synapse0x28dcff0();
   input += synapse0x28dd030();
   input += synapse0x28dd9c0();
   input += synapse0x28dda00();
   input += synapse0x28de390();
   input += synapse0x28de3d0();
   input += synapse0x28d2500();
   input += synapse0x28d2540();
   input += synapse0x28e0480();
   input += synapse0x28e04c0();
   input += synapse0x28e0e50();
   input += synapse0x28e0e90();
   input += synapse0x28e1820();
   input += synapse0x28e1860();
   input += synapse0x28e21f0();
   input += synapse0x28e2230();
   input += synapse0x28e2bc0();
   input += synapse0x28e2c00();
   input += synapse0x28db710();
   input += synapse0x28db750();
   input += synapse0x28e4fc0();
   input += synapse0x28e5000();
   input += synapse0x28e5950();
   input += synapse0x28e5990();
   input += synapse0x28e6320();
   input += synapse0x28e6360();
   input += synapse0x28e6cf0();
   input += synapse0x28e6d30();
   input += synapse0x28e76c0();
   input += synapse0x28e7700();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28ff840() {
   double input = input0x28ff840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x28ffbe0() {
   double input = -0.422408;
   input += synapse0x28e9e00();
   input += synapse0x28e9e40();
   input += synapse0x28df3c0();
   input += synapse0x28df400();
   input += synapse0x28ec9e0();
   input += synapse0x28eca20();
   input += synapse0x28ed3b0();
   input += synapse0x28ed3f0();
   input += synapse0x28edd80();
   input += synapse0x28eddc0();
   input += synapse0x28ee750();
   input += synapse0x28ee790();
   input += synapse0x28ef120();
   input += synapse0x28ef160();
   input += synapse0x28efaf0();
   input += synapse0x28efb30();
   input += synapse0x28f04c0();
   input += synapse0x28f0500();
   input += synapse0x28f0e90();
   input += synapse0x28f0ed0();
   input += synapse0x28f1a70();
   input += synapse0x28f1ab0();
   input += synapse0x28f2440();
   input += synapse0x28f2480();
   input += synapse0x28e32c0();
   input += synapse0x28e3300();
   input += synapse0x28e3c90();
   input += synapse0x28e3cd0();
   input += synapse0x28e4660();
   input += synapse0x28e46a0();
   input += synapse0x28f6b80();
   input += synapse0x28f6bc0();
   input += synapse0x28f7550();
   input += synapse0x28f7590();
   input += synapse0x28f7f20();
   input += synapse0x28f7f60();
   input += synapse0x28f88f0();
   input += synapse0x28f8930();
   input += synapse0x28d47e0();
   input += synapse0x28d4820();
   input += synapse0x28e8090();
   input += synapse0x28e80d0();
   input += synapse0x28f9010();
   input += synapse0x28f9050();
   input += synapse0x28f9090();
   input += synapse0x28f90d0();
   input += synapse0x28fff80();
   input += synapse0x28fffc0();
   input += synapse0x2900000();
   input += synapse0x2900040();
   return input;
}

double NNfunction_sb_uRuR::neuron0x28ffbe0() {
   double input = input0x28ffbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x2900080() {
   double input = 1.42527;
   input += synapse0x29003c0();
   input += synapse0x2900400();
   input += synapse0x2900440();
   input += synapse0x2900480();
   input += synapse0x29004c0();
   input += synapse0x2900500();
   input += synapse0x2900540();
   input += synapse0x2900580();
   input += synapse0x29005c0();
   input += synapse0x2900600();
   input += synapse0x2900640();
   input += synapse0x2900680();
   input += synapse0x29006c0();
   input += synapse0x2900700();
   input += synapse0x2900740();
   input += synapse0x2900780();
   input += synapse0x2900210();
   input += synapse0x2900250();
   input += synapse0x29008d0();
   input += synapse0x2900910();
   input += synapse0x2900950();
   input += synapse0x2900990();
   input += synapse0x29009d0();
   input += synapse0x2900a10();
   input += synapse0x2900a50();
   input += synapse0x2900a90();
   input += synapse0x2900ad0();
   input += synapse0x2900b10();
   input += synapse0x2900b50();
   input += synapse0x2900b90();
   input += synapse0x2900bd0();
   input += synapse0x2900c10();
   input += synapse0x29007c0();
   input += synapse0x2900800();
   input += synapse0x2900840();
   input += synapse0x2900880();
   input += synapse0x2900e60();
   input += synapse0x2900ea0();
   input += synapse0x2900ee0();
   input += synapse0x2900f20();
   input += synapse0x2900f60();
   input += synapse0x2900fa0();
   input += synapse0x2900fe0();
   input += synapse0x2901020();
   input += synapse0x2901060();
   input += synapse0x29010a0();
   input += synapse0x29010e0();
   input += synapse0x2901120();
   input += synapse0x2901160();
   input += synapse0x29011a0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x2900080() {
   double input = input0x2900080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x29011e0() {
   double input = 1.35952;
   input += synapse0x2901520();
   input += synapse0x2901560();
   input += synapse0x29015a0();
   input += synapse0x29015e0();
   input += synapse0x2901620();
   input += synapse0x2901660();
   input += synapse0x29016a0();
   input += synapse0x29016e0();
   input += synapse0x2901720();
   input += synapse0x2901760();
   input += synapse0x29017a0();
   input += synapse0x29017e0();
   input += synapse0x2901820();
   input += synapse0x2901860();
   input += synapse0x29018a0();
   input += synapse0x29018e0();
   input += synapse0x2901370();
   input += synapse0x29013b0();
   input += synapse0x2901a30();
   input += synapse0x2901a70();
   input += synapse0x2901ab0();
   input += synapse0x2901af0();
   input += synapse0x2901b30();
   input += synapse0x2901b70();
   input += synapse0x2901bb0();
   input += synapse0x2901bf0();
   input += synapse0x2901c30();
   input += synapse0x2901c70();
   input += synapse0x2901cb0();
   input += synapse0x2901cf0();
   input += synapse0x2901d30();
   input += synapse0x2901d70();
   input += synapse0x2901920();
   input += synapse0x2901960();
   input += synapse0x29019a0();
   input += synapse0x29019e0();
   input += synapse0x2901fc0();
   input += synapse0x2902000();
   input += synapse0x2902040();
   input += synapse0x2902080();
   input += synapse0x29020c0();
   input += synapse0x2902100();
   input += synapse0x2902140();
   input += synapse0x2902180();
   input += synapse0x29021c0();
   input += synapse0x2902200();
   input += synapse0x2902240();
   input += synapse0x2902280();
   input += synapse0x29022c0();
   input += synapse0x2902300();
   return input;
}

double NNfunction_sb_uRuR::neuron0x29011e0() {
   double input = input0x29011e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x2902340() {
   double input = 0.459261;
   input += synapse0x2902680();
   input += synapse0x29026c0();
   input += synapse0x2902700();
   input += synapse0x2902740();
   input += synapse0x2902780();
   input += synapse0x29027c0();
   input += synapse0x2902800();
   input += synapse0x2902840();
   input += synapse0x2902880();
   input += synapse0x29028c0();
   input += synapse0x2902900();
   input += synapse0x2902940();
   input += synapse0x2902980();
   input += synapse0x29029c0();
   input += synapse0x2902a00();
   input += synapse0x2902a40();
   input += synapse0x29024d0();
   input += synapse0x2902510();
   input += synapse0x2902b90();
   input += synapse0x2902bd0();
   input += synapse0x2902c10();
   input += synapse0x2902c50();
   input += synapse0x2902c90();
   input += synapse0x2902cd0();
   input += synapse0x2902d10();
   input += synapse0x2902d50();
   input += synapse0x2902d90();
   input += synapse0x2902dd0();
   input += synapse0x2902e10();
   input += synapse0x2902e50();
   input += synapse0x2902e90();
   input += synapse0x2902ed0();
   input += synapse0x2902a80();
   input += synapse0x2902ac0();
   input += synapse0x2902b00();
   input += synapse0x2902b40();
   input += synapse0x2903120();
   input += synapse0x2903160();
   input += synapse0x29031a0();
   input += synapse0x29031e0();
   input += synapse0x2903220();
   input += synapse0x2903260();
   input += synapse0x29032a0();
   input += synapse0x29032e0();
   input += synapse0x2903320();
   input += synapse0x2903360();
   input += synapse0x29033a0();
   input += synapse0x29033e0();
   input += synapse0x2903420();
   input += synapse0x2903460();
   return input;
}

double NNfunction_sb_uRuR::neuron0x2902340() {
   double input = input0x2902340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x29034a0() {
   double input = 5.69865;
   input += synapse0x28d4580();
   input += synapse0x29036c0();
   input += synapse0x2903700();
   input += synapse0x2903740();
   input += synapse0x2903780();
   return input;
}

double NNfunction_sb_uRuR::neuron0x29034a0() {
   double input = input0x29034a0();
   return (input * 1)+0;
}

double NNfunction_sb_uRuR::synapse0x268f3d0() {
   return (neuron0x28cf560()*-0.304574);
}

double NNfunction_sb_uRuR::synapse0x28cf420() {
   return (neuron0x28cf8a0()*0.102872);
}

double NNfunction_sb_uRuR::synapse0x28cf460() {
   return (neuron0x28cfbe0()*-0.230326);
}

double NNfunction_sb_uRuR::synapse0x28d4870() {
   return (neuron0x28cff20()*0.390561);
}

double NNfunction_sb_uRuR::synapse0x28d48b0() {
   return (neuron0x28d0260()*0.516373);
}

double NNfunction_sb_uRuR::synapse0x28d48f0() {
   return (neuron0x28d05a0()*0.348744);
}

double NNfunction_sb_uRuR::synapse0x28d4930() {
   return (neuron0x28d08e0()*0.159745);
}

double NNfunction_sb_uRuR::synapse0x28d4970() {
   return (neuron0x28d0c20()*-0.501643);
}

double NNfunction_sb_uRuR::synapse0x28d49b0() {
   return (neuron0x28d0f60()*-0.0312564);
}

double NNfunction_sb_uRuR::synapse0x28d49f0() {
   return (neuron0x28d12a0()*-0.155191);
}

double NNfunction_sb_uRuR::synapse0x28d4a30() {
   return (neuron0x28d15e0()*0.262479);
}

double NNfunction_sb_uRuR::synapse0x28d4a70() {
   return (neuron0x28d1920()*-0.146258);
}

double NNfunction_sb_uRuR::synapse0x28d4ab0() {
   return (neuron0x28d1c60()*-0.136111);
}

double NNfunction_sb_uRuR::synapse0x28d4af0() {
   return (neuron0x28d1fa0()*-0.0651379);
}

double NNfunction_sb_uRuR::synapse0x28d4b30() {
   return (neuron0x28d22e0()*-2.22192);
}

double NNfunction_sb_uRuR::synapse0x28d4b70() {
   return (neuron0x28d2620()*-0.651462);
}

double NNfunction_sb_uRuR::synapse0x28cf390() {
   return (neuron0x28d2960()*-0.0921604);
}

double NNfunction_sb_uRuR::synapse0x28cf3d0() {
   return (neuron0x28d2ec0()*-0.0283183);
}

double NNfunction_sb_uRuR::synapse0x2680c70() {
   return (neuron0x28d30e0()*-0.0514906);
}

double NNfunction_sb_uRuR::synapse0x2680cb0() {
   return (neuron0x28d3420()*-0.0322127);
}

double NNfunction_sb_uRuR::synapse0x28d4dd0() {
   return (neuron0x28d3760()*-0.0163344);
}

double NNfunction_sb_uRuR::synapse0x28d4e10() {
   return (neuron0x28d3aa0()*-0.164793);
}

double NNfunction_sb_uRuR::synapse0x28d4e50() {
   return (neuron0x28d3de0()*0.0287468);
}

double NNfunction_sb_uRuR::synapse0x28d4e90() {
   return (neuron0x28d4120()*-0.00422965);
}

double NNfunction_sb_uRuR::synapse0x28d5210() {
   return (neuron0x28cf560()*-0.107786);
}

double NNfunction_sb_uRuR::synapse0x28d5250() {
   return (neuron0x28cf8a0()*1.05606);
}

double NNfunction_sb_uRuR::synapse0x28d5290() {
   return (neuron0x28cfbe0()*0.0154405);
}

double NNfunction_sb_uRuR::synapse0x28d52d0() {
   return (neuron0x28cff20()*1.19939);
}

double NNfunction_sb_uRuR::synapse0x28d5310() {
   return (neuron0x28d0260()*0.0760216);
}

double NNfunction_sb_uRuR::synapse0x28d5350() {
   return (neuron0x28d05a0()*0.0619136);
}

double NNfunction_sb_uRuR::synapse0x28d5390() {
   return (neuron0x28d08e0()*0.0872057);
}

double NNfunction_sb_uRuR::synapse0x28d53d0() {
   return (neuron0x28d0c20()*-0.0151565);
}

double NNfunction_sb_uRuR::synapse0x28d5410() {
   return (neuron0x28d0f60()*0.285331);
}

double NNfunction_sb_uRuR::synapse0x28d4cc0() {
   return (neuron0x28d12a0()*0.0900675);
}

double NNfunction_sb_uRuR::synapse0x28d4d00() {
   return (neuron0x28d15e0()*-0.0994098);
}

double NNfunction_sb_uRuR::synapse0x28d4d40() {
   return (neuron0x28d1920()*0.168682);
}

double NNfunction_sb_uRuR::synapse0x28d4d80() {
   return (neuron0x28d1c60()*0.326787);
}

double NNfunction_sb_uRuR::synapse0x28d5660() {
   return (neuron0x28d1fa0()*0.0309729);
}

double NNfunction_sb_uRuR::synapse0x28d56a0() {
   return (neuron0x28d22e0()*-0.000880402);
}

double NNfunction_sb_uRuR::synapse0x28d56e0() {
   return (neuron0x28d2620()*0.0470608);
}

double NNfunction_sb_uRuR::synapse0x28d5060() {
   return (neuron0x28d2960()*0.0080595);
}

double NNfunction_sb_uRuR::synapse0x28d50a0() {
   return (neuron0x28d2ec0()*-0.118962);
}

double NNfunction_sb_uRuR::synapse0x28d5830() {
   return (neuron0x28d30e0()*-0.149739);
}

double NNfunction_sb_uRuR::synapse0x28d5870() {
   return (neuron0x28d3420()*0.103056);
}

double NNfunction_sb_uRuR::synapse0x28d58b0() {
   return (neuron0x28d3760()*0.0367787);
}

double NNfunction_sb_uRuR::synapse0x28d58f0() {
   return (neuron0x28d3aa0()*-0.150778);
}

double NNfunction_sb_uRuR::synapse0x28d5930() {
   return (neuron0x28d3de0()*-0.0239043);
}

double NNfunction_sb_uRuR::synapse0x28d5970() {
   return (neuron0x28d4120()*0.0102362);
}

double NNfunction_sb_uRuR::synapse0x28d5cf0() {
   return (neuron0x28cf560()*-0.0350104);
}

double NNfunction_sb_uRuR::synapse0x28d5d30() {
   return (neuron0x28cf8a0()*-0.0053153);
}

double NNfunction_sb_uRuR::synapse0x28d5d70() {
   return (neuron0x28cfbe0()*-0.0173832);
}

double NNfunction_sb_uRuR::synapse0x28d5db0() {
   return (neuron0x28cff20()*-0.0477047);
}

double NNfunction_sb_uRuR::synapse0x28d5df0() {
   return (neuron0x28d0260()*-0.0394147);
}

double NNfunction_sb_uRuR::synapse0x28d5e30() {
   return (neuron0x28d05a0()*-0.0870826);
}

double NNfunction_sb_uRuR::synapse0x28d5e70() {
   return (neuron0x28d08e0()*-0.0327264);
}

double NNfunction_sb_uRuR::synapse0x28d5eb0() {
   return (neuron0x28d0c20()*-0.041893);
}

double NNfunction_sb_uRuR::synapse0x28d5ef0() {
   return (neuron0x28d0f60()*-0.00912794);
}

double NNfunction_sb_uRuR::synapse0x28d5f30() {
   return (neuron0x28d12a0()*0.0380763);
}

double NNfunction_sb_uRuR::synapse0x28d5f70() {
   return (neuron0x28d15e0()*0.0243893);
}

double NNfunction_sb_uRuR::synapse0x28d5fb0() {
   return (neuron0x28d1920()*0.118547);
}

double NNfunction_sb_uRuR::synapse0x28d5ff0() {
   return (neuron0x28d1c60()*0.0992242);
}

double NNfunction_sb_uRuR::synapse0x28d6030() {
   return (neuron0x28d1fa0()*-0.00845505);
}

double NNfunction_sb_uRuR::synapse0x28d6070() {
   return (neuron0x28d22e0()*-0.159451);
}

double NNfunction_sb_uRuR::synapse0x28d60b0() {
   return (neuron0x28d2620()*-0.124119);
}

double NNfunction_sb_uRuR::synapse0x28d5b40() {
   return (neuron0x28d2960()*0.0731759);
}

double NNfunction_sb_uRuR::synapse0x28d5b80() {
   return (neuron0x28d2ec0()*0.0734479);
}

double NNfunction_sb_uRuR::synapse0x268eac0() {
   return (neuron0x28d30e0()*0.101324);
}

double NNfunction_sb_uRuR::synapse0x268eb00() {
   return (neuron0x28d3420()*0.0144643);
}

double NNfunction_sb_uRuR::synapse0x28be5f0() {
   return (neuron0x28d3760()*-0.00733839);
}

double NNfunction_sb_uRuR::synapse0x28be630() {
   return (neuron0x28d3aa0()*-0.00574993);
}

double NNfunction_sb_uRuR::synapse0x28be670() {
   return (neuron0x28d3de0()*0.00702468);
}

double NNfunction_sb_uRuR::synapse0x28cf4a0() {
   return (neuron0x28d4120()*0.0405504);
}

double NNfunction_sb_uRuR::synapse0x28d5600() {
   return (neuron0x28cf560()*0.00262573);
}

double NNfunction_sb_uRuR::synapse0x28cf4e0() {
   return (neuron0x28cf8a0()*-0.0200078);
}

double NNfunction_sb_uRuR::synapse0x28cf520() {
   return (neuron0x28cfbe0()*0.00195894);
}

double NNfunction_sb_uRuR::synapse0x28d6200() {
   return (neuron0x28cff20()*-3.62959);
}

double NNfunction_sb_uRuR::synapse0x28d6240() {
   return (neuron0x28d0260()*-0.0233551);
}

double NNfunction_sb_uRuR::synapse0x28d6280() {
   return (neuron0x28d05a0()*0.0120925);
}

double NNfunction_sb_uRuR::synapse0x28d62c0() {
   return (neuron0x28d08e0()*-0.00106094);
}

double NNfunction_sb_uRuR::synapse0x28d6300() {
   return (neuron0x28d0c20()*-0.00555304);
}

double NNfunction_sb_uRuR::synapse0x28d6340() {
   return (neuron0x28d0f60()*0.00455329);
}

double NNfunction_sb_uRuR::synapse0x28d6380() {
   return (neuron0x28d12a0()*0.0229702);
}

double NNfunction_sb_uRuR::synapse0x28d63c0() {
   return (neuron0x28d15e0()*0.0341099);
}

double NNfunction_sb_uRuR::synapse0x28d6400() {
   return (neuron0x28d1920()*-0.0425424);
}

double NNfunction_sb_uRuR::synapse0x28d6440() {
   return (neuron0x28d1c60()*-0.00866689);
}

double NNfunction_sb_uRuR::synapse0x28d6480() {
   return (neuron0x28d1fa0()*0.00941015);
}

double NNfunction_sb_uRuR::synapse0x28d64c0() {
   return (neuron0x28d22e0()*-0.118277);
}

double NNfunction_sb_uRuR::synapse0x28d6500() {
   return (neuron0x28d2620()*-0.014486);
}

double NNfunction_sb_uRuR::synapse0x28d5450() {
   return (neuron0x28d2960()*0.0130311);
}

double NNfunction_sb_uRuR::synapse0x28d5490() {
   return (neuron0x28d2ec0()*-0.00537834);
}

double NNfunction_sb_uRuR::synapse0x28d6650() {
   return (neuron0x28d30e0()*-0.0134212);
}

double NNfunction_sb_uRuR::synapse0x28d6690() {
   return (neuron0x28d3420()*0.024536);
}

double NNfunction_sb_uRuR::synapse0x28d66d0() {
   return (neuron0x28d3760()*0.0141572);
}

double NNfunction_sb_uRuR::synapse0x28d6710() {
   return (neuron0x28d3aa0()*0.0109204);
}

double NNfunction_sb_uRuR::synapse0x28d6750() {
   return (neuron0x28d3de0()*-0.00686863);
}

double NNfunction_sb_uRuR::synapse0x28d6790() {
   return (neuron0x28d4120()*-0.0039889);
}

double NNfunction_sb_uRuR::synapse0x28d6b10() {
   return (neuron0x28cf560()*0.0351678);
}

double NNfunction_sb_uRuR::synapse0x28d6b50() {
   return (neuron0x28cf8a0()*-0.461636);
}

double NNfunction_sb_uRuR::synapse0x28d6b90() {
   return (neuron0x28cfbe0()*-0.244866);
}

double NNfunction_sb_uRuR::synapse0x28d6bd0() {
   return (neuron0x28cff20()*0.311145);
}

double NNfunction_sb_uRuR::synapse0x28d6c10() {
   return (neuron0x28d0260()*-0.646729);
}

double NNfunction_sb_uRuR::synapse0x28d6c50() {
   return (neuron0x28d05a0()*0.269662);
}

double NNfunction_sb_uRuR::synapse0x28d6c90() {
   return (neuron0x28d08e0()*-0.161084);
}

double NNfunction_sb_uRuR::synapse0x28d6cd0() {
   return (neuron0x28d0c20()*-0.287942);
}

double NNfunction_sb_uRuR::synapse0x28d6d10() {
   return (neuron0x28d0f60()*0.910855);
}

double NNfunction_sb_uRuR::synapse0x28d6d50() {
   return (neuron0x28d12a0()*0.178901);
}

double NNfunction_sb_uRuR::synapse0x28d6d90() {
   return (neuron0x28d15e0()*-0.383157);
}

double NNfunction_sb_uRuR::synapse0x28d6dd0() {
   return (neuron0x28d1920()*0.432344);
}

double NNfunction_sb_uRuR::synapse0x28d6e10() {
   return (neuron0x28d1c60()*-0.386226);
}

double NNfunction_sb_uRuR::synapse0x28d6e50() {
   return (neuron0x28d1fa0()*-0.228705);
}

double NNfunction_sb_uRuR::synapse0x28d6e90() {
   return (neuron0x28d22e0()*-0.287125);
}

double NNfunction_sb_uRuR::synapse0x28d6ed0() {
   return (neuron0x28d2620()*0.82447);
}

double NNfunction_sb_uRuR::synapse0x28d6960() {
   return (neuron0x28d2960()*0.195873);
}

double NNfunction_sb_uRuR::synapse0x28d69a0() {
   return (neuron0x28d2ec0()*0.0278927);
}

double NNfunction_sb_uRuR::synapse0x28d7020() {
   return (neuron0x28d30e0()*1.22098);
}

double NNfunction_sb_uRuR::synapse0x28d7060() {
   return (neuron0x28d3420()*0.0997688);
}

double NNfunction_sb_uRuR::synapse0x28d70a0() {
   return (neuron0x28d3760()*0.0353305);
}

double NNfunction_sb_uRuR::synapse0x28d70e0() {
   return (neuron0x28d3aa0()*0.589748);
}

double NNfunction_sb_uRuR::synapse0x28d7120() {
   return (neuron0x28d3de0()*-0.489789);
}

double NNfunction_sb_uRuR::synapse0x28d7160() {
   return (neuron0x28d4120()*-0.769414);
}

double NNfunction_sb_uRuR::synapse0x28d74e0() {
   return (neuron0x28cf560()*0.0426301);
}

double NNfunction_sb_uRuR::synapse0x28d7520() {
   return (neuron0x28cf8a0()*-0.011143);
}

double NNfunction_sb_uRuR::synapse0x28d7560() {
   return (neuron0x28cfbe0()*0.0175053);
}

double NNfunction_sb_uRuR::synapse0x28d75a0() {
   return (neuron0x28cff20()*0.0450694);
}

double NNfunction_sb_uRuR::synapse0x28d75e0() {
   return (neuron0x28d0260()*0.0263929);
}

double NNfunction_sb_uRuR::synapse0x28d7620() {
   return (neuron0x28d05a0()*0.0275525);
}

double NNfunction_sb_uRuR::synapse0x28d7660() {
   return (neuron0x28d08e0()*0.0626212);
}

double NNfunction_sb_uRuR::synapse0x28d76a0() {
   return (neuron0x28d0c20()*0.0365397);
}

double NNfunction_sb_uRuR::synapse0x28d76e0() {
   return (neuron0x28d0f60()*0.0268787);
}

double NNfunction_sb_uRuR::synapse0x268ee30() {
   return (neuron0x28d12a0()*-0.0434518);
}

double NNfunction_sb_uRuR::synapse0x268ee70() {
   return (neuron0x28d15e0()*-0.0239937);
}

double NNfunction_sb_uRuR::synapse0x268eeb0() {
   return (neuron0x28d1920()*-0.0471341);
}

double NNfunction_sb_uRuR::synapse0x268eef0() {
   return (neuron0x28d1c60()*0.00463199);
}

double NNfunction_sb_uRuR::synapse0x268ef30() {
   return (neuron0x28d1fa0()*0.0134634);
}

double NNfunction_sb_uRuR::synapse0x268ef70() {
   return (neuron0x28d22e0()*-2.63493);
}

double NNfunction_sb_uRuR::synapse0x268efb0() {
   return (neuron0x28d2620()*0.130455);
}

double NNfunction_sb_uRuR::synapse0x28d7330() {
   return (neuron0x28d2960()*-0.0450319);
}

double NNfunction_sb_uRuR::synapse0x28d7370() {
   return (neuron0x28d2ec0()*-0.0398572);
}

double NNfunction_sb_uRuR::synapse0x268f100() {
   return (neuron0x28d30e0()*-0.0352857);
}

double NNfunction_sb_uRuR::synapse0x268f140() {
   return (neuron0x28d3420()*-0.0128651);
}

double NNfunction_sb_uRuR::synapse0x268f180() {
   return (neuron0x28d3760()*0.00447266);
}

double NNfunction_sb_uRuR::synapse0x268f1c0() {
   return (neuron0x28d3aa0()*0.0114178);
}

double NNfunction_sb_uRuR::synapse0x268f200() {
   return (neuron0x28d3de0()*-0.00599541);
}

double NNfunction_sb_uRuR::synapse0x28d7f30() {
   return (neuron0x28d4120()*-0.0294942);
}

double NNfunction_sb_uRuR::synapse0x28d82b0() {
   return (neuron0x28cf560()*-0.246572);
}

double NNfunction_sb_uRuR::synapse0x28d82f0() {
   return (neuron0x28cf8a0()*0.0404274);
}

double NNfunction_sb_uRuR::synapse0x28d8330() {
   return (neuron0x28cfbe0()*-0.123427);
}

double NNfunction_sb_uRuR::synapse0x28d8370() {
   return (neuron0x28cff20()*-0.112165);
}

double NNfunction_sb_uRuR::synapse0x28d83b0() {
   return (neuron0x28d0260()*0.205718);
}

double NNfunction_sb_uRuR::synapse0x28d83f0() {
   return (neuron0x28d05a0()*0.269718);
}

double NNfunction_sb_uRuR::synapse0x28d8430() {
   return (neuron0x28d08e0()*0.0805544);
}

double NNfunction_sb_uRuR::synapse0x28d8470() {
   return (neuron0x28d0c20()*-0.517898);
}

double NNfunction_sb_uRuR::synapse0x28d84b0() {
   return (neuron0x28d0f60()*0.239288);
}

double NNfunction_sb_uRuR::synapse0x28d84f0() {
   return (neuron0x28d12a0()*-0.169584);
}

double NNfunction_sb_uRuR::synapse0x28d8530() {
   return (neuron0x28d15e0()*-0.31038);
}

double NNfunction_sb_uRuR::synapse0x28d8570() {
   return (neuron0x28d1920()*-0.180435);
}

double NNfunction_sb_uRuR::synapse0x28d85b0() {
   return (neuron0x28d1c60()*0.26224);
}

double NNfunction_sb_uRuR::synapse0x28d85f0() {
   return (neuron0x28d1fa0()*-0.218558);
}

double NNfunction_sb_uRuR::synapse0x28d8630() {
   return (neuron0x28d22e0()*-0.0817956);
}

double NNfunction_sb_uRuR::synapse0x28d8670() {
   return (neuron0x28d2620()*-0.249589);
}

double NNfunction_sb_uRuR::synapse0x28d8100() {
   return (neuron0x28d2960()*-0.0207117);
}

double NNfunction_sb_uRuR::synapse0x28d8140() {
   return (neuron0x28d2ec0()*-0.214261);
}

double NNfunction_sb_uRuR::synapse0x28d87c0() {
   return (neuron0x28d30e0()*0.083463);
}

double NNfunction_sb_uRuR::synapse0x28d8800() {
   return (neuron0x28d3420()*1.26007);
}

double NNfunction_sb_uRuR::synapse0x28d8840() {
   return (neuron0x28d3760()*0.0308289);
}

double NNfunction_sb_uRuR::synapse0x28d8880() {
   return (neuron0x28d3aa0()*0.0785436);
}

double NNfunction_sb_uRuR::synapse0x28d88c0() {
   return (neuron0x28d3de0()*-0.113775);
}

double NNfunction_sb_uRuR::synapse0x28d8900() {
   return (neuron0x28d4120()*0.147522);
}

double NNfunction_sb_uRuR::synapse0x28d8c80() {
   return (neuron0x28cf560()*-0.0630897);
}

double NNfunction_sb_uRuR::synapse0x28d8cc0() {
   return (neuron0x28cf8a0()*-0.0512733);
}

double NNfunction_sb_uRuR::synapse0x28d8d00() {
   return (neuron0x28cfbe0()*0.00758485);
}

double NNfunction_sb_uRuR::synapse0x28d8d40() {
   return (neuron0x28cff20()*0.238242);
}

double NNfunction_sb_uRuR::synapse0x28d8d80() {
   return (neuron0x28d0260()*-0.0994623);
}

double NNfunction_sb_uRuR::synapse0x28d8dc0() {
   return (neuron0x28d05a0()*0.0270708);
}

double NNfunction_sb_uRuR::synapse0x28d8e00() {
   return (neuron0x28d08e0()*0.15209);
}

double NNfunction_sb_uRuR::synapse0x28d8e40() {
   return (neuron0x28d0c20()*-0.0660338);
}

double NNfunction_sb_uRuR::synapse0x28d8e80() {
   return (neuron0x28d0f60()*-0.131128);
}

double NNfunction_sb_uRuR::synapse0x28d8ec0() {
   return (neuron0x28d12a0()*-0.0241049);
}

double NNfunction_sb_uRuR::synapse0x28d8f00() {
   return (neuron0x28d15e0()*-0.00591138);
}

double NNfunction_sb_uRuR::synapse0x28d8f40() {
   return (neuron0x28d1920()*1.37);
}

double NNfunction_sb_uRuR::synapse0x28d8f80() {
   return (neuron0x28d1c60()*0.0645468);
}

double NNfunction_sb_uRuR::synapse0x28d8fc0() {
   return (neuron0x28d1fa0()*-0.286544);
}

double NNfunction_sb_uRuR::synapse0x28d9000() {
   return (neuron0x28d22e0()*-0.463938);
}

double NNfunction_sb_uRuR::synapse0x28d9040() {
   return (neuron0x28d2620()*-0.00260504);
}

double NNfunction_sb_uRuR::synapse0x28d8ad0() {
   return (neuron0x28d2960()*-0.484741);
}

double NNfunction_sb_uRuR::synapse0x28d8b10() {
   return (neuron0x28d2ec0()*-0.170693);
}

double NNfunction_sb_uRuR::synapse0x28d9190() {
   return (neuron0x28d30e0()*-0.193291);
}

double NNfunction_sb_uRuR::synapse0x28d91d0() {
   return (neuron0x28d3420()*-0.163732);
}

double NNfunction_sb_uRuR::synapse0x28d9210() {
   return (neuron0x28d3760()*0.198384);
}

double NNfunction_sb_uRuR::synapse0x28d9250() {
   return (neuron0x28d3aa0()*0.0568905);
}

double NNfunction_sb_uRuR::synapse0x28d9290() {
   return (neuron0x28d3de0()*0.0047703);
}

double NNfunction_sb_uRuR::synapse0x28d92d0() {
   return (neuron0x28d4120()*-0.129473);
}

double NNfunction_sb_uRuR::synapse0x28d2db0() {
   return (neuron0x28cf560()*-0.00872178);
}

double NNfunction_sb_uRuR::synapse0x28d2df0() {
   return (neuron0x28cf8a0()*0.0095184);
}

double NNfunction_sb_uRuR::synapse0x28d2e30() {
   return (neuron0x28cfbe0()*0.0838465);
}

double NNfunction_sb_uRuR::synapse0x28d2e70() {
   return (neuron0x28cff20()*0.205579);
}

double NNfunction_sb_uRuR::synapse0x28d9860() {
   return (neuron0x28d0260()*-0.169787);
}

double NNfunction_sb_uRuR::synapse0x28d98a0() {
   return (neuron0x28d05a0()*1.25456);
}

double NNfunction_sb_uRuR::synapse0x28d98e0() {
   return (neuron0x28d08e0()*-0.108685);
}

double NNfunction_sb_uRuR::synapse0x28d9920() {
   return (neuron0x28d0c20()*-0.192438);
}

double NNfunction_sb_uRuR::synapse0x28d9960() {
   return (neuron0x28d0f60()*0.0795183);
}

double NNfunction_sb_uRuR::synapse0x28d99a0() {
   return (neuron0x28d12a0()*0.00786842);
}

double NNfunction_sb_uRuR::synapse0x28d99e0() {
   return (neuron0x28d15e0()*0.0701979);
}

double NNfunction_sb_uRuR::synapse0x28d9a20() {
   return (neuron0x28d1920()*0.120575);
}

double NNfunction_sb_uRuR::synapse0x28d9a60() {
   return (neuron0x28d1c60()*0.0179033);
}

double NNfunction_sb_uRuR::synapse0x28d9aa0() {
   return (neuron0x28d1fa0()*0.153035);
}

double NNfunction_sb_uRuR::synapse0x28d9ae0() {
   return (neuron0x28d22e0()*-0.60358);
}

double NNfunction_sb_uRuR::synapse0x28d9b20() {
   return (neuron0x28d2620()*0.544427);
}

double NNfunction_sb_uRuR::synapse0x28d94a0() {
   return (neuron0x28d2960()*0.569962);
}

double NNfunction_sb_uRuR::synapse0x28d94e0() {
   return (neuron0x28d2ec0()*0.195328);
}

double NNfunction_sb_uRuR::synapse0x28d9c70() {
   return (neuron0x28d30e0()*0.162686);
}

double NNfunction_sb_uRuR::synapse0x28d9cb0() {
   return (neuron0x28d3420()*0.106422);
}

double NNfunction_sb_uRuR::synapse0x28d9cf0() {
   return (neuron0x28d3760()*-0.0566764);
}

double NNfunction_sb_uRuR::synapse0x28d9d30() {
   return (neuron0x28d3aa0()*0.000526734);
}

double NNfunction_sb_uRuR::synapse0x28d9d70() {
   return (neuron0x28d3de0()*0.000525825);
}

double NNfunction_sb_uRuR::synapse0x28d9db0() {
   return (neuron0x28d4120()*-0.104198);
}

double NNfunction_sb_uRuR::synapse0x28da130() {
   return (neuron0x28cf560()*0.37559);
}

double NNfunction_sb_uRuR::synapse0x28da170() {
   return (neuron0x28cf8a0()*0.747938);
}

double NNfunction_sb_uRuR::synapse0x28da1b0() {
   return (neuron0x28cfbe0()*1.25729);
}

double NNfunction_sb_uRuR::synapse0x28da1f0() {
   return (neuron0x28cff20()*0.490014);
}

double NNfunction_sb_uRuR::synapse0x28da230() {
   return (neuron0x28d0260()*0.94338);
}

double NNfunction_sb_uRuR::synapse0x28da270() {
   return (neuron0x28d05a0()*0.241134);
}

double NNfunction_sb_uRuR::synapse0x28da2b0() {
   return (neuron0x28d08e0()*0.0964475);
}

double NNfunction_sb_uRuR::synapse0x28da2f0() {
   return (neuron0x28d0c20()*-0.119846);
}

double NNfunction_sb_uRuR::synapse0x28da330() {
   return (neuron0x28d0f60()*0.37521);
}

double NNfunction_sb_uRuR::synapse0x28da370() {
   return (neuron0x28d12a0()*0.0142687);
}

double NNfunction_sb_uRuR::synapse0x28da3b0() {
   return (neuron0x28d15e0()*-0.333208);
}

double NNfunction_sb_uRuR::synapse0x28da3f0() {
   return (neuron0x28d1920()*0.281394);
}

double NNfunction_sb_uRuR::synapse0x28da430() {
   return (neuron0x28d1c60()*-0.825162);
}

double NNfunction_sb_uRuR::synapse0x28da470() {
   return (neuron0x28d1fa0()*-0.0406386);
}

double NNfunction_sb_uRuR::synapse0x28da4b0() {
   return (neuron0x28d22e0()*-0.274364);
}

double NNfunction_sb_uRuR::synapse0x28da4f0() {
   return (neuron0x28d2620()*-0.286749);
}

double NNfunction_sb_uRuR::synapse0x28d9f80() {
   return (neuron0x28d2960()*0.25616);
}

double NNfunction_sb_uRuR::synapse0x28d9fc0() {
   return (neuron0x28d2ec0()*1.09242);
}

double NNfunction_sb_uRuR::synapse0x28da640() {
   return (neuron0x28d30e0()*0.21918);
}

double NNfunction_sb_uRuR::synapse0x28da680() {
   return (neuron0x28d3420()*0.177249);
}

double NNfunction_sb_uRuR::synapse0x28da6c0() {
   return (neuron0x28d3760()*0.135392);
}

double NNfunction_sb_uRuR::synapse0x28da700() {
   return (neuron0x28d3aa0()*-0.516548);
}

double NNfunction_sb_uRuR::synapse0x28da740() {
   return (neuron0x28d3de0()*-0.423855);
}

double NNfunction_sb_uRuR::synapse0x28da780() {
   return (neuron0x28d4120()*0.191827);
}

double NNfunction_sb_uRuR::synapse0x28dab00() {
   return (neuron0x28cf560()*0.473908);
}

double NNfunction_sb_uRuR::synapse0x28dab40() {
   return (neuron0x28cf8a0()*0.649074);
}

double NNfunction_sb_uRuR::synapse0x28dab80() {
   return (neuron0x28cfbe0()*0.488192);
}

double NNfunction_sb_uRuR::synapse0x28dabc0() {
   return (neuron0x28cff20()*0.168964);
}

double NNfunction_sb_uRuR::synapse0x28dac00() {
   return (neuron0x28d0260()*-0.206002);
}

double NNfunction_sb_uRuR::synapse0x28dac40() {
   return (neuron0x28d05a0()*0.770493);
}

double NNfunction_sb_uRuR::synapse0x28dac80() {
   return (neuron0x28d08e0()*-0.32401);
}

double NNfunction_sb_uRuR::synapse0x28dacc0() {
   return (neuron0x28d0c20()*-0.0240288);
}

double NNfunction_sb_uRuR::synapse0x28dad00() {
   return (neuron0x28d0f60()*0.086904);
}

double NNfunction_sb_uRuR::synapse0x28dad40() {
   return (neuron0x28d12a0()*0.135409);
}

double NNfunction_sb_uRuR::synapse0x28dad80() {
   return (neuron0x28d15e0()*0.177178);
}

double NNfunction_sb_uRuR::synapse0x28dadc0() {
   return (neuron0x28d1920()*-0.901895);
}

double NNfunction_sb_uRuR::synapse0x28dae00() {
   return (neuron0x28d1c60()*-0.284979);
}

double NNfunction_sb_uRuR::synapse0x28dae40() {
   return (neuron0x28d1fa0()*-0.179685);
}

double NNfunction_sb_uRuR::synapse0x28dae80() {
   return (neuron0x28d22e0()*-0.357045);
}

double NNfunction_sb_uRuR::synapse0x28daec0() {
   return (neuron0x28d2620()*0.507002);
}

double NNfunction_sb_uRuR::synapse0x28da950() {
   return (neuron0x28d2960()*0.0370482);
}

double NNfunction_sb_uRuR::synapse0x28da990() {
   return (neuron0x28d2ec0()*0.670054);
}

double NNfunction_sb_uRuR::synapse0x28d7720() {
   return (neuron0x28d30e0()*-0.682023);
}

double NNfunction_sb_uRuR::synapse0x28d7760() {
   return (neuron0x28d3420()*0.239909);
}

double NNfunction_sb_uRuR::synapse0x28d77a0() {
   return (neuron0x28d3760()*0.490287);
}

double NNfunction_sb_uRuR::synapse0x28d77e0() {
   return (neuron0x28d3aa0()*-0.458385);
}

double NNfunction_sb_uRuR::synapse0x28d7820() {
   return (neuron0x28d3de0()*-0.47986);
}

double NNfunction_sb_uRuR::synapse0x28d7860() {
   return (neuron0x28d4120()*1.50291);
}

double NNfunction_sb_uRuR::synapse0x28d7be0() {
   return (neuron0x28cf560()*-0.113816);
}

double NNfunction_sb_uRuR::synapse0x28d7c20() {
   return (neuron0x28cf8a0()*0.290561);
}

double NNfunction_sb_uRuR::synapse0x28d7c60() {
   return (neuron0x28cfbe0()*0.0427582);
}

double NNfunction_sb_uRuR::synapse0x28d7ca0() {
   return (neuron0x28cff20()*0.19178);
}

double NNfunction_sb_uRuR::synapse0x28d7ce0() {
   return (neuron0x28d0260()*-1.0355);
}

double NNfunction_sb_uRuR::synapse0x28d7d20() {
   return (neuron0x28d05a0()*0.518081);
}

double NNfunction_sb_uRuR::synapse0x28d7d60() {
   return (neuron0x28d08e0()*0.150954);
}

double NNfunction_sb_uRuR::synapse0x28d7da0() {
   return (neuron0x28d0c20()*-0.189358);
}

double NNfunction_sb_uRuR::synapse0x28d7de0() {
   return (neuron0x28d0f60()*-0.0491888);
}

double NNfunction_sb_uRuR::synapse0x28d7e20() {
   return (neuron0x28d12a0()*-0.223838);
}

double NNfunction_sb_uRuR::synapse0x28d7e60() {
   return (neuron0x28d15e0()*-0.110347);
}

double NNfunction_sb_uRuR::synapse0x28d7ea0() {
   return (neuron0x28d1920()*-0.356563);
}

double NNfunction_sb_uRuR::synapse0x28d7ee0() {
   return (neuron0x28d1c60()*0.114728);
}

double NNfunction_sb_uRuR::synapse0x28dc020() {
   return (neuron0x28d1fa0()*-0.59527);
}

double NNfunction_sb_uRuR::synapse0x28dc060() {
   return (neuron0x28d22e0()*0.554994);
}

double NNfunction_sb_uRuR::synapse0x28dc0a0() {
   return (neuron0x28d2620()*-0.663644);
}

double NNfunction_sb_uRuR::synapse0x28d7a30() {
   return (neuron0x28d2960()*-1.0863);
}

double NNfunction_sb_uRuR::synapse0x28d7a70() {
   return (neuron0x28d2ec0()*-0.546912);
}

double NNfunction_sb_uRuR::synapse0x28dc1f0() {
   return (neuron0x28d30e0()*-0.48128);
}

double NNfunction_sb_uRuR::synapse0x28dc230() {
   return (neuron0x28d3420()*-0.288535);
}

double NNfunction_sb_uRuR::synapse0x28dc270() {
   return (neuron0x28d3760()*0.337218);
}

double NNfunction_sb_uRuR::synapse0x28dc2b0() {
   return (neuron0x28d3aa0()*-0.0992721);
}

double NNfunction_sb_uRuR::synapse0x28dc2f0() {
   return (neuron0x28d3de0()*0.629179);
}

double NNfunction_sb_uRuR::synapse0x28dc330() {
   return (neuron0x28d4120()*-0.201783);
}

double NNfunction_sb_uRuR::synapse0x28dc6b0() {
   return (neuron0x28cf560()*-0.385727);
}

double NNfunction_sb_uRuR::synapse0x28dc6f0() {
   return (neuron0x28cf8a0()*-0.50575);
}

double NNfunction_sb_uRuR::synapse0x28dc730() {
   return (neuron0x28cfbe0()*-0.130231);
}

double NNfunction_sb_uRuR::synapse0x28dc770() {
   return (neuron0x28cff20()*0.601646);
}

double NNfunction_sb_uRuR::synapse0x28dc7b0() {
   return (neuron0x28d0260()*0.227596);
}

double NNfunction_sb_uRuR::synapse0x28dc7f0() {
   return (neuron0x28d05a0()*0.304003);
}

double NNfunction_sb_uRuR::synapse0x28dc830() {
   return (neuron0x28d08e0()*-0.196852);
}

double NNfunction_sb_uRuR::synapse0x28dc870() {
   return (neuron0x28d0c20()*0.987032);
}

double NNfunction_sb_uRuR::synapse0x28dc8b0() {
   return (neuron0x28d0f60()*-0.386728);
}

double NNfunction_sb_uRuR::synapse0x28dc8f0() {
   return (neuron0x28d12a0()*0.272331);
}

double NNfunction_sb_uRuR::synapse0x28dc930() {
   return (neuron0x28d15e0()*-0.391196);
}

double NNfunction_sb_uRuR::synapse0x28dc970() {
   return (neuron0x28d1920()*-0.76072);
}

double NNfunction_sb_uRuR::synapse0x28dc9b0() {
   return (neuron0x28d1c60()*0.502283);
}

double NNfunction_sb_uRuR::synapse0x28dc9f0() {
   return (neuron0x28d1fa0()*0.260356);
}

double NNfunction_sb_uRuR::synapse0x28dca30() {
   return (neuron0x28d22e0()*0.49181);
}

double NNfunction_sb_uRuR::synapse0x28dca70() {
   return (neuron0x28d2620()*0.0917577);
}

double NNfunction_sb_uRuR::synapse0x28dc500() {
   return (neuron0x28d2960()*-0.793222);
}

double NNfunction_sb_uRuR::synapse0x28dc540() {
   return (neuron0x28d2ec0()*-0.0404936);
}

double NNfunction_sb_uRuR::synapse0x28dcbc0() {
   return (neuron0x28d30e0()*0.43676);
}

double NNfunction_sb_uRuR::synapse0x28dcc00() {
   return (neuron0x28d3420()*-0.341417);
}

double NNfunction_sb_uRuR::synapse0x28dcc40() {
   return (neuron0x28d3760()*-0.168344);
}

double NNfunction_sb_uRuR::synapse0x28dcc80() {
   return (neuron0x28d3aa0()*0.301908);
}

double NNfunction_sb_uRuR::synapse0x28dccc0() {
   return (neuron0x28d3de0()*0.364079);
}

double NNfunction_sb_uRuR::synapse0x28dcd00() {
   return (neuron0x28d4120()*-0.33329);
}

double NNfunction_sb_uRuR::synapse0x28dd080() {
   return (neuron0x28cf560()*0.13798);
}

double NNfunction_sb_uRuR::synapse0x28dd0c0() {
   return (neuron0x28cf8a0()*0.769263);
}

double NNfunction_sb_uRuR::synapse0x28dd100() {
   return (neuron0x28cfbe0()*0.0794804);
}

double NNfunction_sb_uRuR::synapse0x28dd140() {
   return (neuron0x28cff20()*-0.600912);
}

double NNfunction_sb_uRuR::synapse0x28dd180() {
   return (neuron0x28d0260()*-0.00948333);
}

double NNfunction_sb_uRuR::synapse0x28dd1c0() {
   return (neuron0x28d05a0()*-0.120884);
}

double NNfunction_sb_uRuR::synapse0x28dd200() {
   return (neuron0x28d08e0()*-0.0139158);
}

double NNfunction_sb_uRuR::synapse0x28dd240() {
   return (neuron0x28d0c20()*0.0223387);
}

double NNfunction_sb_uRuR::synapse0x28dd280() {
   return (neuron0x28d0f60()*0.170051);
}

double NNfunction_sb_uRuR::synapse0x28dd2c0() {
   return (neuron0x28d12a0()*-0.209816);
}

double NNfunction_sb_uRuR::synapse0x28dd300() {
   return (neuron0x28d15e0()*0.266648);
}

double NNfunction_sb_uRuR::synapse0x28dd340() {
   return (neuron0x28d1920()*-0.454592);
}

double NNfunction_sb_uRuR::synapse0x28dd380() {
   return (neuron0x28d1c60()*0.541155);
}

double NNfunction_sb_uRuR::synapse0x28dd3c0() {
   return (neuron0x28d1fa0()*-0.0855277);
}

double NNfunction_sb_uRuR::synapse0x28dd400() {
   return (neuron0x28d22e0()*-0.400977);
}

double NNfunction_sb_uRuR::synapse0x28dd440() {
   return (neuron0x28d2620()*0.265502);
}

double NNfunction_sb_uRuR::synapse0x28dced0() {
   return (neuron0x28d2960()*-0.0908935);
}

double NNfunction_sb_uRuR::synapse0x28dcf10() {
   return (neuron0x28d2ec0()*-0.203511);
}

double NNfunction_sb_uRuR::synapse0x28dd590() {
   return (neuron0x28d30e0()*0.0619851);
}

double NNfunction_sb_uRuR::synapse0x28dd5d0() {
   return (neuron0x28d3420()*-0.173088);
}

double NNfunction_sb_uRuR::synapse0x28dd610() {
   return (neuron0x28d3760()*0.0260142);
}

double NNfunction_sb_uRuR::synapse0x28dd650() {
   return (neuron0x28d3aa0()*0.0886174);
}

double NNfunction_sb_uRuR::synapse0x28dd690() {
   return (neuron0x28d3de0()*-0.0195321);
}

double NNfunction_sb_uRuR::synapse0x28dd6d0() {
   return (neuron0x28d4120()*-0.0873852);
}

double NNfunction_sb_uRuR::synapse0x28dda50() {
   return (neuron0x28cf560()*0.119183);
}

double NNfunction_sb_uRuR::synapse0x28dda90() {
   return (neuron0x28cf8a0()*-0.047817);
}

double NNfunction_sb_uRuR::synapse0x28ddad0() {
   return (neuron0x28cfbe0()*0.0716215);
}

double NNfunction_sb_uRuR::synapse0x28ddb10() {
   return (neuron0x28cff20()*-0.0707169);
}

double NNfunction_sb_uRuR::synapse0x28ddb50() {
   return (neuron0x28d0260()*0.0656922);
}

double NNfunction_sb_uRuR::synapse0x28ddb90() {
   return (neuron0x28d05a0()*-0.174933);
}

double NNfunction_sb_uRuR::synapse0x28ddbd0() {
   return (neuron0x28d08e0()*-0.439719);
}

double NNfunction_sb_uRuR::synapse0x28ddc10() {
   return (neuron0x28d0c20()*-0.638715);
}

double NNfunction_sb_uRuR::synapse0x28ddc50() {
   return (neuron0x28d0f60()*-0.0488932);
}

double NNfunction_sb_uRuR::synapse0x28ddc90() {
   return (neuron0x28d12a0()*0.0428566);
}

double NNfunction_sb_uRuR::synapse0x28ddcd0() {
   return (neuron0x28d15e0()*-0.0620885);
}

double NNfunction_sb_uRuR::synapse0x28ddd10() {
   return (neuron0x28d1920()*0.0219498);
}

double NNfunction_sb_uRuR::synapse0x28ddd50() {
   return (neuron0x28d1c60()*0.016255);
}

double NNfunction_sb_uRuR::synapse0x28ddd90() {
   return (neuron0x28d1fa0()*0.00219517);
}

double NNfunction_sb_uRuR::synapse0x28dddd0() {
   return (neuron0x28d22e0()*-0.451615);
}

double NNfunction_sb_uRuR::synapse0x28dde10() {
   return (neuron0x28d2620()*0.523174);
}

double NNfunction_sb_uRuR::synapse0x28dd8a0() {
   return (neuron0x28d2960()*-0.3403);
}

double NNfunction_sb_uRuR::synapse0x28dd8e0() {
   return (neuron0x28d2ec0()*0.053347);
}

double NNfunction_sb_uRuR::synapse0x28ddf60() {
   return (neuron0x28d30e0()*0.0573133);
}

double NNfunction_sb_uRuR::synapse0x28ddfa0() {
   return (neuron0x28d3420()*0.0526392);
}

double NNfunction_sb_uRuR::synapse0x28ddfe0() {
   return (neuron0x28d3760()*0.00628401);
}

double NNfunction_sb_uRuR::synapse0x28de020() {
   return (neuron0x28d3aa0()*0.0114884);
}

double NNfunction_sb_uRuR::synapse0x28de060() {
   return (neuron0x28d3de0()*0.0426418);
}

double NNfunction_sb_uRuR::synapse0x28de0a0() {
   return (neuron0x28d4120()*-0.0649555);
}

double NNfunction_sb_uRuR::synapse0x28de420() {
   return (neuron0x28cf560()*-0.0442449);
}

double NNfunction_sb_uRuR::synapse0x28cf780() {
   return (neuron0x28cf8a0()*1.76507);
}

double NNfunction_sb_uRuR::synapse0x28cf7c0() {
   return (neuron0x28cfbe0()*0.180457);
}

double NNfunction_sb_uRuR::synapse0x28cfac0() {
   return (neuron0x28cff20()*0.890134);
}

double NNfunction_sb_uRuR::synapse0x28cfb00() {
   return (neuron0x28d0260()*-0.187326);
}

double NNfunction_sb_uRuR::synapse0x28cfe00() {
   return (neuron0x28d05a0()*-0.106335);
}

double NNfunction_sb_uRuR::synapse0x28cfe40() {
   return (neuron0x28d08e0()*-0.217678);
}

double NNfunction_sb_uRuR::synapse0x28d0140() {
   return (neuron0x28d0c20()*0.0175647);
}

double NNfunction_sb_uRuR::synapse0x28d0180() {
   return (neuron0x28d0f60()*-0.0709438);
}

double NNfunction_sb_uRuR::synapse0x28d0480() {
   return (neuron0x28d12a0()*0.20678);
}

double NNfunction_sb_uRuR::synapse0x28d04c0() {
   return (neuron0x28d15e0()*0.137609);
}

double NNfunction_sb_uRuR::synapse0x28d07c0() {
   return (neuron0x28d1920()*-0.128898);
}

double NNfunction_sb_uRuR::synapse0x28d0800() {
   return (neuron0x28d1c60()*-0.551415);
}

double NNfunction_sb_uRuR::synapse0x28d0b00() {
   return (neuron0x28d1fa0()*-0.0720566);
}

double NNfunction_sb_uRuR::synapse0x28d0b40() {
   return (neuron0x28d22e0()*-0.16008);
}

double NNfunction_sb_uRuR::synapse0x28d0e40() {
   return (neuron0x28d2620()*-0.304649);
}

double NNfunction_sb_uRuR::synapse0x28d0e80() {
   return (neuron0x28d2960()*0.333659);
}

double NNfunction_sb_uRuR::synapse0x28d1180() {
   return (neuron0x28d2ec0()*0.188123);
}

double NNfunction_sb_uRuR::synapse0x28d11c0() {
   return (neuron0x28d30e0()*0.00160166);
}

double NNfunction_sb_uRuR::synapse0x28d14c0() {
   return (neuron0x28d3420()*-0.0132285);
}

double NNfunction_sb_uRuR::synapse0x28d1500() {
   return (neuron0x28d3760()*-0.0657679);
}

double NNfunction_sb_uRuR::synapse0x28d1800() {
   return (neuron0x28d3aa0()*0.159726);
}

double NNfunction_sb_uRuR::synapse0x28d1840() {
   return (neuron0x28d3de0()*-0.174129);
}

double NNfunction_sb_uRuR::synapse0x28d1b40() {
   return (neuron0x28d4120()*0.0466804);
}

double NNfunction_sb_uRuR::synapse0x28d1b80() {
   return (neuron0x28cf560()*0.0267677);
}

double NNfunction_sb_uRuR::synapse0x28d2840() {
   return (neuron0x28cf8a0()*-0.746702);
}

double NNfunction_sb_uRuR::synapse0x28d2880() {
   return (neuron0x28cfbe0()*0.105591);
}

double NNfunction_sb_uRuR::synapse0x28de270() {
   return (neuron0x28cff20()*0.723113);
}

double NNfunction_sb_uRuR::synapse0x28de2b0() {
   return (neuron0x28d0260()*-0.086464);
}

double NNfunction_sb_uRuR::synapse0x28d2b80() {
   return (neuron0x28d05a0()*0.00772761);
}

double NNfunction_sb_uRuR::synapse0x28d2bc0() {
   return (neuron0x28d08e0()*-0.132845);
}

double NNfunction_sb_uRuR::synapse0x2680b50() {
   return (neuron0x28d0c20()*-0.121429);
}

double NNfunction_sb_uRuR::synapse0x2680b90() {
   return (neuron0x28d0f60()*0.162182);
}

double NNfunction_sb_uRuR::synapse0x28d3300() {
   return (neuron0x28d12a0()*-0.0995406);
}

double NNfunction_sb_uRuR::synapse0x28d3340() {
   return (neuron0x28d15e0()*-0.0442344);
}

double NNfunction_sb_uRuR::synapse0x28d3640() {
   return (neuron0x28d1920()*-0.411894);
}

double NNfunction_sb_uRuR::synapse0x28d3680() {
   return (neuron0x28d1c60()*-0.0648692);
}

double NNfunction_sb_uRuR::synapse0x28d3980() {
   return (neuron0x28d1fa0()*0.207876);
}

double NNfunction_sb_uRuR::synapse0x28d39c0() {
   return (neuron0x28d22e0()*0.478358);
}

double NNfunction_sb_uRuR::synapse0x28d3cc0() {
   return (neuron0x28d2620()*-0.133583);
}

double NNfunction_sb_uRuR::synapse0x28d3d00() {
   return (neuron0x28d2960()*0.169545);
}

double NNfunction_sb_uRuR::synapse0x28d4000() {
   return (neuron0x28d2ec0()*0.0970556);
}

double NNfunction_sb_uRuR::synapse0x28d4040() {
   return (neuron0x28d30e0()*0.0210922);
}

double NNfunction_sb_uRuR::synapse0x28d4340() {
   return (neuron0x28d3420()*0.408215);
}

double NNfunction_sb_uRuR::synapse0x28d4380() {
   return (neuron0x28d3760()*-0.148177);
}

double NNfunction_sb_uRuR::synapse0x28d1e80() {
   return (neuron0x28d3aa0()*0.0652192);
}

double NNfunction_sb_uRuR::synapse0x28d1ec0() {
   return (neuron0x28d3de0()*-0.0384078);
}

double NNfunction_sb_uRuR::synapse0x28e0190() {
   return (neuron0x28d4120()*-0.0118673);
}

double NNfunction_sb_uRuR::synapse0x28e0510() {
   return (neuron0x28cf560()*0.0133564);
}

double NNfunction_sb_uRuR::synapse0x28e0550() {
   return (neuron0x28cf8a0()*0.00371551);
}

double NNfunction_sb_uRuR::synapse0x28e0590() {
   return (neuron0x28cfbe0()*0.0135388);
}

double NNfunction_sb_uRuR::synapse0x28e05d0() {
   return (neuron0x28cff20()*0.0386656);
}

double NNfunction_sb_uRuR::synapse0x28e0610() {
   return (neuron0x28d0260()*0.000238391);
}

double NNfunction_sb_uRuR::synapse0x28e0650() {
   return (neuron0x28d05a0()*0.035056);
}

double NNfunction_sb_uRuR::synapse0x28e0690() {
   return (neuron0x28d08e0()*0.0221493);
}

double NNfunction_sb_uRuR::synapse0x28e06d0() {
   return (neuron0x28d0c20()*0.0147118);
}

double NNfunction_sb_uRuR::synapse0x28e0710() {
   return (neuron0x28d0f60()*0.00414454);
}

double NNfunction_sb_uRuR::synapse0x28e0750() {
   return (neuron0x28d12a0()*-0.0145438);
}

double NNfunction_sb_uRuR::synapse0x28e0790() {
   return (neuron0x28d15e0()*0.00705849);
}

double NNfunction_sb_uRuR::synapse0x28e07d0() {
   return (neuron0x28d1920()*0.00826551);
}

double NNfunction_sb_uRuR::synapse0x28e0810() {
   return (neuron0x28d1c60()*0.0441317);
}

double NNfunction_sb_uRuR::synapse0x28e0850() {
   return (neuron0x28d1fa0()*-0.0056903);
}

double NNfunction_sb_uRuR::synapse0x28e0890() {
   return (neuron0x28d22e0()*-0.950668);
}

double NNfunction_sb_uRuR::synapse0x28e08d0() {
   return (neuron0x28d2620()*0.0959025);
}

double NNfunction_sb_uRuR::synapse0x28e0360() {
   return (neuron0x28d2960()*-0.0611902);
}

double NNfunction_sb_uRuR::synapse0x28e03a0() {
   return (neuron0x28d2ec0()*-0.000771153);
}

double NNfunction_sb_uRuR::synapse0x28e0a20() {
   return (neuron0x28d30e0()*-0.00352893);
}

double NNfunction_sb_uRuR::synapse0x28e0a60() {
   return (neuron0x28d3420()*0.00166111);
}

double NNfunction_sb_uRuR::synapse0x28e0aa0() {
   return (neuron0x28d3760()*0.00248247);
}

double NNfunction_sb_uRuR::synapse0x28e0ae0() {
   return (neuron0x28d3aa0()*0.00882265);
}

double NNfunction_sb_uRuR::synapse0x28e0b20() {
   return (neuron0x28d3de0()*-0.00548322);
}

double NNfunction_sb_uRuR::synapse0x28e0b60() {
   return (neuron0x28d4120()*-0.0227774);
}

double NNfunction_sb_uRuR::synapse0x28e0ee0() {
   return (neuron0x28cf560()*0.0356569);
}

double NNfunction_sb_uRuR::synapse0x28e0f20() {
   return (neuron0x28cf8a0()*0.0224871);
}

double NNfunction_sb_uRuR::synapse0x28e0f60() {
   return (neuron0x28cfbe0()*0.084589);
}

double NNfunction_sb_uRuR::synapse0x28e0fa0() {
   return (neuron0x28cff20()*-0.0536374);
}

double NNfunction_sb_uRuR::synapse0x28e0fe0() {
   return (neuron0x28d0260()*1.15725);
}

double NNfunction_sb_uRuR::synapse0x28e1020() {
   return (neuron0x28d05a0()*-0.0590238);
}

double NNfunction_sb_uRuR::synapse0x28e1060() {
   return (neuron0x28d08e0()*-0.0410486);
}

double NNfunction_sb_uRuR::synapse0x28e10a0() {
   return (neuron0x28d0c20()*0.365642);
}

double NNfunction_sb_uRuR::synapse0x28e10e0() {
   return (neuron0x28d0f60()*-0.0336738);
}

double NNfunction_sb_uRuR::synapse0x28e1120() {
   return (neuron0x28d12a0()*-0.00145103);
}

double NNfunction_sb_uRuR::synapse0x28e1160() {
   return (neuron0x28d15e0()*-0.022926);
}

double NNfunction_sb_uRuR::synapse0x28e11a0() {
   return (neuron0x28d1920()*0.0338052);
}

double NNfunction_sb_uRuR::synapse0x28e11e0() {
   return (neuron0x28d1c60()*0.0930892);
}

double NNfunction_sb_uRuR::synapse0x28e1220() {
   return (neuron0x28d1fa0()*-0.023008);
}

double NNfunction_sb_uRuR::synapse0x28e1260() {
   return (neuron0x28d22e0()*-0.317582);
}

double NNfunction_sb_uRuR::synapse0x28e12a0() {
   return (neuron0x28d2620()*0.209001);
}

double NNfunction_sb_uRuR::synapse0x28e0d30() {
   return (neuron0x28d2960()*0.0671881);
}

double NNfunction_sb_uRuR::synapse0x28e0d70() {
   return (neuron0x28d2ec0()*0.0832165);
}

double NNfunction_sb_uRuR::synapse0x28e13f0() {
   return (neuron0x28d30e0()*0.147641);
}

double NNfunction_sb_uRuR::synapse0x28e1430() {
   return (neuron0x28d3420()*-0.175997);
}

double NNfunction_sb_uRuR::synapse0x28e1470() {
   return (neuron0x28d3760()*0.0815126);
}

double NNfunction_sb_uRuR::synapse0x28e14b0() {
   return (neuron0x28d3aa0()*-0.0325887);
}

double NNfunction_sb_uRuR::synapse0x28e14f0() {
   return (neuron0x28d3de0()*-0.00908776);
}

double NNfunction_sb_uRuR::synapse0x28e1530() {
   return (neuron0x28d4120()*-0.0953587);
}

double NNfunction_sb_uRuR::synapse0x28e18b0() {
   return (neuron0x28cf560()*-0.0757656);
}

double NNfunction_sb_uRuR::synapse0x28e18f0() {
   return (neuron0x28cf8a0()*-0.0811656);
}

double NNfunction_sb_uRuR::synapse0x28e1930() {
   return (neuron0x28cfbe0()*0.127343);
}

double NNfunction_sb_uRuR::synapse0x28e1970() {
   return (neuron0x28cff20()*-0.291809);
}

double NNfunction_sb_uRuR::synapse0x28e19b0() {
   return (neuron0x28d0260()*-0.230548);
}

double NNfunction_sb_uRuR::synapse0x28e19f0() {
   return (neuron0x28d05a0()*-0.247904);
}

double NNfunction_sb_uRuR::synapse0x28e1a30() {
   return (neuron0x28d08e0()*0.434594);
}

double NNfunction_sb_uRuR::synapse0x28e1a70() {
   return (neuron0x28d0c20()*-0.134632);
}

double NNfunction_sb_uRuR::synapse0x28e1ab0() {
   return (neuron0x28d0f60()*0.308961);
}

double NNfunction_sb_uRuR::synapse0x28e1af0() {
   return (neuron0x28d12a0()*0.101601);
}

double NNfunction_sb_uRuR::synapse0x28e1b30() {
   return (neuron0x28d15e0()*0.0870872);
}

double NNfunction_sb_uRuR::synapse0x28e1b70() {
   return (neuron0x28d1920()*0.174854);
}

double NNfunction_sb_uRuR::synapse0x28e1bb0() {
   return (neuron0x28d1c60()*0.209582);
}

double NNfunction_sb_uRuR::synapse0x28e1bf0() {
   return (neuron0x28d1fa0()*-0.026044);
}

double NNfunction_sb_uRuR::synapse0x28e1c30() {
   return (neuron0x28d22e0()*0.0400765);
}

double NNfunction_sb_uRuR::synapse0x28e1c70() {
   return (neuron0x28d2620()*-0.355331);
}

double NNfunction_sb_uRuR::synapse0x28e1700() {
   return (neuron0x28d2960()*-0.110613);
}

double NNfunction_sb_uRuR::synapse0x28e1740() {
   return (neuron0x28d2ec0()*-0.212331);
}

double NNfunction_sb_uRuR::synapse0x28e1dc0() {
   return (neuron0x28d30e0()*0.150988);
}

double NNfunction_sb_uRuR::synapse0x28e1e00() {
   return (neuron0x28d3420()*-0.153987);
}

double NNfunction_sb_uRuR::synapse0x28e1e40() {
   return (neuron0x28d3760()*-0.0645777);
}

double NNfunction_sb_uRuR::synapse0x28e1e80() {
   return (neuron0x28d3aa0()*-0.00560057);
}

double NNfunction_sb_uRuR::synapse0x28e1ec0() {
   return (neuron0x28d3de0()*-0.15164);
}

double NNfunction_sb_uRuR::synapse0x28e1f00() {
   return (neuron0x28d4120()*-0.0308162);
}

double NNfunction_sb_uRuR::synapse0x28e2280() {
   return (neuron0x28cf560()*0.0424413);
}

double NNfunction_sb_uRuR::synapse0x28e22c0() {
   return (neuron0x28cf8a0()*0.969456);
}

double NNfunction_sb_uRuR::synapse0x28e2300() {
   return (neuron0x28cfbe0()*-0.923636);
}

double NNfunction_sb_uRuR::synapse0x28e2340() {
   return (neuron0x28cff20()*0.0332876);
}

double NNfunction_sb_uRuR::synapse0x28e2380() {
   return (neuron0x28d0260()*-0.0790372);
}

double NNfunction_sb_uRuR::synapse0x28e23c0() {
   return (neuron0x28d05a0()*-0.379214);
}

double NNfunction_sb_uRuR::synapse0x28e2400() {
   return (neuron0x28d08e0()*-0.257394);
}

double NNfunction_sb_uRuR::synapse0x28e2440() {
   return (neuron0x28d0c20()*-0.423362);
}

double NNfunction_sb_uRuR::synapse0x28e2480() {
   return (neuron0x28d0f60()*0.160898);
}

double NNfunction_sb_uRuR::synapse0x28e24c0() {
   return (neuron0x28d12a0()*-0.623233);
}

double NNfunction_sb_uRuR::synapse0x28e2500() {
   return (neuron0x28d15e0()*0.168182);
}

double NNfunction_sb_uRuR::synapse0x28e2540() {
   return (neuron0x28d1920()*0.499362);
}

double NNfunction_sb_uRuR::synapse0x28e2580() {
   return (neuron0x28d1c60()*0.0878654);
}

double NNfunction_sb_uRuR::synapse0x28e25c0() {
   return (neuron0x28d1fa0()*-1.27229);
}

double NNfunction_sb_uRuR::synapse0x28e2600() {
   return (neuron0x28d22e0()*-0.970968);
}

double NNfunction_sb_uRuR::synapse0x28e2640() {
   return (neuron0x28d2620()*-0.903469);
}

double NNfunction_sb_uRuR::synapse0x28e20d0() {
   return (neuron0x28d2960()*0.748421);
}

double NNfunction_sb_uRuR::synapse0x28e2110() {
   return (neuron0x28d2ec0()*0.00376712);
}

double NNfunction_sb_uRuR::synapse0x28e2790() {
   return (neuron0x28d30e0()*0.0382392);
}

double NNfunction_sb_uRuR::synapse0x28e27d0() {
   return (neuron0x28d3420()*0.569386);
}

double NNfunction_sb_uRuR::synapse0x28e2810() {
   return (neuron0x28d3760()*-1.1183);
}

double NNfunction_sb_uRuR::synapse0x28e2850() {
   return (neuron0x28d3aa0()*0.0513608);
}

double NNfunction_sb_uRuR::synapse0x28e2890() {
   return (neuron0x28d3de0()*-0.0762333);
}

double NNfunction_sb_uRuR::synapse0x28e28d0() {
   return (neuron0x28d4120()*-1.15285);
}

double NNfunction_sb_uRuR::synapse0x28e2c50() {
   return (neuron0x28cf560()*-0.0917475);
}

double NNfunction_sb_uRuR::synapse0x28e2c90() {
   return (neuron0x28cf8a0()*0.376968);
}

double NNfunction_sb_uRuR::synapse0x28e2cd0() {
   return (neuron0x28cfbe0()*-0.0297924);
}

double NNfunction_sb_uRuR::synapse0x28e2d10() {
   return (neuron0x28cff20()*0.270903);
}

double NNfunction_sb_uRuR::synapse0x28e2d50() {
   return (neuron0x28d0260()*0.0603361);
}

double NNfunction_sb_uRuR::synapse0x28e2d90() {
   return (neuron0x28d05a0()*0.0796295);
}

double NNfunction_sb_uRuR::synapse0x28e2dd0() {
   return (neuron0x28d08e0()*0.0716342);
}

double NNfunction_sb_uRuR::synapse0x28e2e10() {
   return (neuron0x28d0c20()*0.0358419);
}

double NNfunction_sb_uRuR::synapse0x28e2e50() {
   return (neuron0x28d0f60()*-0.0739123);
}

double NNfunction_sb_uRuR::synapse0x28db010() {
   return (neuron0x28d12a0()*0.603337);
}

double NNfunction_sb_uRuR::synapse0x28db050() {
   return (neuron0x28d15e0()*-0.249513);
}

double NNfunction_sb_uRuR::synapse0x28db090() {
   return (neuron0x28d1920()*-0.294174);
}

double NNfunction_sb_uRuR::synapse0x28db0d0() {
   return (neuron0x28d1c60()*-0.0785152);
}

double NNfunction_sb_uRuR::synapse0x28db110() {
   return (neuron0x28d1fa0()*-0.0223446);
}

double NNfunction_sb_uRuR::synapse0x28db150() {
   return (neuron0x28d22e0()*-0.174315);
}

double NNfunction_sb_uRuR::synapse0x28db190() {
   return (neuron0x28d2620()*0.0563517);
}

double NNfunction_sb_uRuR::synapse0x28e2aa0() {
   return (neuron0x28d2960()*0.130026);
}

double NNfunction_sb_uRuR::synapse0x28e2ae0() {
   return (neuron0x28d2ec0()*0.126261);
}

double NNfunction_sb_uRuR::synapse0x28db2e0() {
   return (neuron0x28d30e0()*1.07735);
}

double NNfunction_sb_uRuR::synapse0x28db320() {
   return (neuron0x28d3420()*-0.14975);
}

double NNfunction_sb_uRuR::synapse0x28db360() {
   return (neuron0x28d3760()*-0.072477);
}

double NNfunction_sb_uRuR::synapse0x28db3a0() {
   return (neuron0x28d3aa0()*-0.0744568);
}

double NNfunction_sb_uRuR::synapse0x28db3e0() {
   return (neuron0x28d3de0()*-0.0384815);
}

double NNfunction_sb_uRuR::synapse0x28db420() {
   return (neuron0x28d4120()*0.00386853);
}

double NNfunction_sb_uRuR::synapse0x28db7a0() {
   return (neuron0x28cf560()*-0.0938576);
}

double NNfunction_sb_uRuR::synapse0x28db7e0() {
   return (neuron0x28cf8a0()*0.236713);
}

double NNfunction_sb_uRuR::synapse0x28db820() {
   return (neuron0x28cfbe0()*-0.219648);
}

double NNfunction_sb_uRuR::synapse0x28db860() {
   return (neuron0x28cff20()*-0.272788);
}

double NNfunction_sb_uRuR::synapse0x28db8a0() {
   return (neuron0x28d0260()*0.221476);
}

double NNfunction_sb_uRuR::synapse0x28db8e0() {
   return (neuron0x28d05a0()*0.231031);
}

double NNfunction_sb_uRuR::synapse0x28db920() {
   return (neuron0x28d08e0()*-0.222465);
}

double NNfunction_sb_uRuR::synapse0x28db960() {
   return (neuron0x28d0c20()*0.158168);
}

double NNfunction_sb_uRuR::synapse0x28db9a0() {
   return (neuron0x28d0f60()*-0.268102);
}

double NNfunction_sb_uRuR::synapse0x28db9e0() {
   return (neuron0x28d12a0()*0.830453);
}

double NNfunction_sb_uRuR::synapse0x28dba20() {
   return (neuron0x28d15e0()*0.984136);
}

double NNfunction_sb_uRuR::synapse0x28dba60() {
   return (neuron0x28d1920()*-0.181783);
}

double NNfunction_sb_uRuR::synapse0x28dbaa0() {
   return (neuron0x28d1c60()*-0.40511);
}

double NNfunction_sb_uRuR::synapse0x28dbae0() {
   return (neuron0x28d1fa0()*0.782932);
}

double NNfunction_sb_uRuR::synapse0x28dbb20() {
   return (neuron0x28d22e0()*-0.4041);
}

double NNfunction_sb_uRuR::synapse0x28dbb60() {
   return (neuron0x28d2620()*-0.089226);
}

double NNfunction_sb_uRuR::synapse0x28db5f0() {
   return (neuron0x28d2960()*0.311673);
}

double NNfunction_sb_uRuR::synapse0x28db630() {
   return (neuron0x28d2ec0()*0.764938);
}

double NNfunction_sb_uRuR::synapse0x28dbcb0() {
   return (neuron0x28d30e0()*-0.399517);
}

double NNfunction_sb_uRuR::synapse0x28dbcf0() {
   return (neuron0x28d3420()*-0.408939);
}

double NNfunction_sb_uRuR::synapse0x28dbd30() {
   return (neuron0x28d3760()*0.0659161);
}

double NNfunction_sb_uRuR::synapse0x28dbd70() {
   return (neuron0x28d3aa0()*0.1277);
}

double NNfunction_sb_uRuR::synapse0x28dbdb0() {
   return (neuron0x28d3de0()*-0.154997);
}

double NNfunction_sb_uRuR::synapse0x28dbdf0() {
   return (neuron0x28d4120()*0.247387);
}

double NNfunction_sb_uRuR::synapse0x28dbfc0() {
   return (neuron0x28cf560()*-0.0758698);
}

double NNfunction_sb_uRuR::synapse0x28e5050() {
   return (neuron0x28cf8a0()*0.131564);
}

double NNfunction_sb_uRuR::synapse0x28e5090() {
   return (neuron0x28cfbe0()*-0.334549);
}

double NNfunction_sb_uRuR::synapse0x28e50d0() {
   return (neuron0x28cff20()*-0.674958);
}

double NNfunction_sb_uRuR::synapse0x28e5110() {
   return (neuron0x28d0260()*-0.6838);
}

double NNfunction_sb_uRuR::synapse0x28e5150() {
   return (neuron0x28d05a0()*-0.301205);
}

double NNfunction_sb_uRuR::synapse0x28e5190() {
   return (neuron0x28d08e0()*-0.0159704);
}

double NNfunction_sb_uRuR::synapse0x28e51d0() {
   return (neuron0x28d0c20()*-0.30996);
}

double NNfunction_sb_uRuR::synapse0x28e5210() {
   return (neuron0x28d0f60()*0.354561);
}

double NNfunction_sb_uRuR::synapse0x28e5250() {
   return (neuron0x28d12a0()*0.293692);
}

double NNfunction_sb_uRuR::synapse0x28e5290() {
   return (neuron0x28d15e0()*-0.548516);
}

double NNfunction_sb_uRuR::synapse0x28e52d0() {
   return (neuron0x28d1920()*-1.29105);
}

double NNfunction_sb_uRuR::synapse0x28e5310() {
   return (neuron0x28d1c60()*0.104413);
}

double NNfunction_sb_uRuR::synapse0x28e5350() {
   return (neuron0x28d1fa0()*0.0637621);
}

double NNfunction_sb_uRuR::synapse0x28e5390() {
   return (neuron0x28d22e0()*0.510253);
}

double NNfunction_sb_uRuR::synapse0x28e53d0() {
   return (neuron0x28d2620()*-0.426689);
}

double NNfunction_sb_uRuR::synapse0x28e4ea0() {
   return (neuron0x28d2960()*-0.104231);
}

double NNfunction_sb_uRuR::synapse0x28e4ee0() {
   return (neuron0x28d2ec0()*-0.243855);
}

double NNfunction_sb_uRuR::synapse0x28e5520() {
   return (neuron0x28d30e0()*-0.586476);
}

double NNfunction_sb_uRuR::synapse0x28e5560() {
   return (neuron0x28d3420()*0.268182);
}

double NNfunction_sb_uRuR::synapse0x28e55a0() {
   return (neuron0x28d3760()*0.593434);
}

double NNfunction_sb_uRuR::synapse0x28e55e0() {
   return (neuron0x28d3aa0()*0.00560595);
}

double NNfunction_sb_uRuR::synapse0x28e5620() {
   return (neuron0x28d3de0()*0.576516);
}

double NNfunction_sb_uRuR::synapse0x28e5660() {
   return (neuron0x28d4120()*-0.0328984);
}

double NNfunction_sb_uRuR::synapse0x28e59e0() {
   return (neuron0x28cf560()*-0.494356);
}

double NNfunction_sb_uRuR::synapse0x28e5a20() {
   return (neuron0x28cf8a0()*0.236801);
}

double NNfunction_sb_uRuR::synapse0x28e5a60() {
   return (neuron0x28cfbe0()*-0.160396);
}

double NNfunction_sb_uRuR::synapse0x28e5aa0() {
   return (neuron0x28cff20()*-0.395989);
}

double NNfunction_sb_uRuR::synapse0x28e5ae0() {
   return (neuron0x28d0260()*1.09519);
}

double NNfunction_sb_uRuR::synapse0x28e5b20() {
   return (neuron0x28d05a0()*-1.1336);
}

double NNfunction_sb_uRuR::synapse0x28e5b60() {
   return (neuron0x28d08e0()*-0.162523);
}

double NNfunction_sb_uRuR::synapse0x28e5ba0() {
   return (neuron0x28d0c20()*1.36044);
}

double NNfunction_sb_uRuR::synapse0x28e5be0() {
   return (neuron0x28d0f60()*-0.229779);
}

double NNfunction_sb_uRuR::synapse0x28e5c20() {
   return (neuron0x28d12a0()*-0.196227);
}

double NNfunction_sb_uRuR::synapse0x28e5c60() {
   return (neuron0x28d15e0()*0.485081);
}

double NNfunction_sb_uRuR::synapse0x28e5ca0() {
   return (neuron0x28d1920()*-0.750246);
}

double NNfunction_sb_uRuR::synapse0x28e5ce0() {
   return (neuron0x28d1c60()*-0.46131);
}

double NNfunction_sb_uRuR::synapse0x28e5d20() {
   return (neuron0x28d1fa0()*1.04447);
}

double NNfunction_sb_uRuR::synapse0x28e5d60() {
   return (neuron0x28d22e0()*0.860286);
}

double NNfunction_sb_uRuR::synapse0x28e5da0() {
   return (neuron0x28d2620()*-0.823446);
}

double NNfunction_sb_uRuR::synapse0x28e5830() {
   return (neuron0x28d2960()*0.539016);
}

double NNfunction_sb_uRuR::synapse0x28e5870() {
   return (neuron0x28d2ec0()*0.433093);
}

double NNfunction_sb_uRuR::synapse0x28e5ef0() {
   return (neuron0x28d30e0()*-0.59196);
}

double NNfunction_sb_uRuR::synapse0x28e5f30() {
   return (neuron0x28d3420()*-0.17595);
}

double NNfunction_sb_uRuR::synapse0x28e5f70() {
   return (neuron0x28d3760()*0.165368);
}

double NNfunction_sb_uRuR::synapse0x28e5fb0() {
   return (neuron0x28d3aa0()*-0.399695);
}

double NNfunction_sb_uRuR::synapse0x28e5ff0() {
   return (neuron0x28d3de0()*0.33865);
}

double NNfunction_sb_uRuR::synapse0x28e6030() {
   return (neuron0x28d4120()*0.0891937);
}

double NNfunction_sb_uRuR::synapse0x28e63b0() {
   return (neuron0x28cf560()*0.00674135);
}

double NNfunction_sb_uRuR::synapse0x28e63f0() {
   return (neuron0x28cf8a0()*0.0251247);
}

double NNfunction_sb_uRuR::synapse0x28e6430() {
   return (neuron0x28cfbe0()*-0.00076312);
}

double NNfunction_sb_uRuR::synapse0x28e6470() {
   return (neuron0x28cff20()*4.16685);
}

double NNfunction_sb_uRuR::synapse0x28e64b0() {
   return (neuron0x28d0260()*0.00519744);
}

double NNfunction_sb_uRuR::synapse0x28e64f0() {
   return (neuron0x28d05a0()*0.0180555);
}

double NNfunction_sb_uRuR::synapse0x28e6530() {
   return (neuron0x28d08e0()*0.00279187);
}

double NNfunction_sb_uRuR::synapse0x28e6570() {
   return (neuron0x28d0c20()*0.0105274);
}

double NNfunction_sb_uRuR::synapse0x28e65b0() {
   return (neuron0x28d0f60()*0.0292259);
}

double NNfunction_sb_uRuR::synapse0x28e65f0() {
   return (neuron0x28d12a0()*-0.00682639);
}

double NNfunction_sb_uRuR::synapse0x28e6630() {
   return (neuron0x28d15e0()*0.0165914);
}

double NNfunction_sb_uRuR::synapse0x28e6670() {
   return (neuron0x28d1920()*-0.0350352);
}

double NNfunction_sb_uRuR::synapse0x28e66b0() {
   return (neuron0x28d1c60()*0.0229056);
}

double NNfunction_sb_uRuR::synapse0x28e66f0() {
   return (neuron0x28d1fa0()*0.0375258);
}

double NNfunction_sb_uRuR::synapse0x28e6730() {
   return (neuron0x28d22e0()*0.0711515);
}

double NNfunction_sb_uRuR::synapse0x28e6770() {
   return (neuron0x28d2620()*-0.0126111);
}

double NNfunction_sb_uRuR::synapse0x28e6200() {
   return (neuron0x28d2960()*0.0154208);
}

double NNfunction_sb_uRuR::synapse0x28e6240() {
   return (neuron0x28d2ec0()*-0.0189991);
}

double NNfunction_sb_uRuR::synapse0x28e68c0() {
   return (neuron0x28d30e0()*-0.0284889);
}

double NNfunction_sb_uRuR::synapse0x28e6900() {
   return (neuron0x28d3420()*0.0322037);
}

double NNfunction_sb_uRuR::synapse0x28e6940() {
   return (neuron0x28d3760()*-0.00342473);
}

double NNfunction_sb_uRuR::synapse0x28e6980() {
   return (neuron0x28d3aa0()*-0.00107619);
}

double NNfunction_sb_uRuR::synapse0x28e69c0() {
   return (neuron0x28d3de0()*-0.00889869);
}

double NNfunction_sb_uRuR::synapse0x28e6a00() {
   return (neuron0x28d4120()*-0.0120611);
}

double NNfunction_sb_uRuR::synapse0x28e6d80() {
   return (neuron0x28cf560()*0.119889);
}

double NNfunction_sb_uRuR::synapse0x28e6dc0() {
   return (neuron0x28cf8a0()*0.453407);
}

double NNfunction_sb_uRuR::synapse0x28e6e00() {
   return (neuron0x28cfbe0()*-0.0171764);
}

double NNfunction_sb_uRuR::synapse0x28e6e40() {
   return (neuron0x28cff20()*-0.805335);
}

double NNfunction_sb_uRuR::synapse0x28e6e80() {
   return (neuron0x28d0260()*0.528754);
}

double NNfunction_sb_uRuR::synapse0x28e6ec0() {
   return (neuron0x28d05a0()*0.536067);
}

double NNfunction_sb_uRuR::synapse0x28e6f00() {
   return (neuron0x28d08e0()*-0.373895);
}

double NNfunction_sb_uRuR::synapse0x28e6f40() {
   return (neuron0x28d0c20()*0.165668);
}

double NNfunction_sb_uRuR::synapse0x28e6f80() {
   return (neuron0x28d0f60()*-0.296406);
}

double NNfunction_sb_uRuR::synapse0x28e6fc0() {
   return (neuron0x28d12a0()*-0.142496);
}

double NNfunction_sb_uRuR::synapse0x28e7000() {
   return (neuron0x28d15e0()*-0.105515);
}

double NNfunction_sb_uRuR::synapse0x28e7040() {
   return (neuron0x28d1920()*-0.0697393);
}

double NNfunction_sb_uRuR::synapse0x28e7080() {
   return (neuron0x28d1c60()*-0.326959);
}

double NNfunction_sb_uRuR::synapse0x28e70c0() {
   return (neuron0x28d1fa0()*0.340657);
}

double NNfunction_sb_uRuR::synapse0x28e7100() {
   return (neuron0x28d22e0()*1.01863);
}

double NNfunction_sb_uRuR::synapse0x28e7140() {
   return (neuron0x28d2620()*0.310936);
}

double NNfunction_sb_uRuR::synapse0x28e6bd0() {
   return (neuron0x28d2960()*0.120385);
}

double NNfunction_sb_uRuR::synapse0x28e6c10() {
   return (neuron0x28d2ec0()*0.136945);
}

double NNfunction_sb_uRuR::synapse0x28e7290() {
   return (neuron0x28d30e0()*-0.23646);
}

double NNfunction_sb_uRuR::synapse0x28e72d0() {
   return (neuron0x28d3420()*-0.100374);
}

double NNfunction_sb_uRuR::synapse0x28e7310() {
   return (neuron0x28d3760()*-0.105483);
}

double NNfunction_sb_uRuR::synapse0x28e7350() {
   return (neuron0x28d3aa0()*-0.122544);
}

double NNfunction_sb_uRuR::synapse0x28e7390() {
   return (neuron0x28d3de0()*0.112464);
}

double NNfunction_sb_uRuR::synapse0x28e73d0() {
   return (neuron0x28d4120()*0.284645);
}

double NNfunction_sb_uRuR::synapse0x28e7750() {
   return (neuron0x28cf560()*0.0127743);
}

double NNfunction_sb_uRuR::synapse0x28e7790() {
   return (neuron0x28cf8a0()*0.206283);
}

double NNfunction_sb_uRuR::synapse0x28e77d0() {
   return (neuron0x28cfbe0()*0.00322649);
}

double NNfunction_sb_uRuR::synapse0x28e7810() {
   return (neuron0x28cff20()*0.187473);
}

double NNfunction_sb_uRuR::synapse0x28e7850() {
   return (neuron0x28d0260()*0.177371);
}

double NNfunction_sb_uRuR::synapse0x28e7890() {
   return (neuron0x28d05a0()*0.150912);
}

double NNfunction_sb_uRuR::synapse0x28e78d0() {
   return (neuron0x28d08e0()*0.0125146);
}

double NNfunction_sb_uRuR::synapse0x28e7910() {
   return (neuron0x28d0c20()*0.117611);
}

double NNfunction_sb_uRuR::synapse0x28e7950() {
   return (neuron0x28d0f60()*-0.101188);
}

double NNfunction_sb_uRuR::synapse0x28e7990() {
   return (neuron0x28d12a0()*-0.716681);
}

double NNfunction_sb_uRuR::synapse0x28e79d0() {
   return (neuron0x28d15e0()*-0.251925);
}

double NNfunction_sb_uRuR::synapse0x28e7a10() {
   return (neuron0x28d1920()*-0.368386);
}

double NNfunction_sb_uRuR::synapse0x28e7a50() {
   return (neuron0x28d1c60()*-0.355299);
}

double NNfunction_sb_uRuR::synapse0x28e7a90() {
   return (neuron0x28d1fa0()*0.198802);
}

double NNfunction_sb_uRuR::synapse0x28e7ad0() {
   return (neuron0x28d22e0()*-0.766922);
}

double NNfunction_sb_uRuR::synapse0x28e7b10() {
   return (neuron0x28d2620()*0.0512073);
}

double NNfunction_sb_uRuR::synapse0x28e75a0() {
   return (neuron0x28d2960()*0.00889852);
}

double NNfunction_sb_uRuR::synapse0x28e75e0() {
   return (neuron0x28d2ec0()*-0.27513);
}

double NNfunction_sb_uRuR::synapse0x28e7c60() {
   return (neuron0x28d30e0()*0.0584813);
}

double NNfunction_sb_uRuR::synapse0x28e7ca0() {
   return (neuron0x28d3420()*-0.0632267);
}

double NNfunction_sb_uRuR::synapse0x28e7ce0() {
   return (neuron0x28d3760()*-0.070891);
}

double NNfunction_sb_uRuR::synapse0x28e7d20() {
   return (neuron0x28d3aa0()*-0.104955);
}

double NNfunction_sb_uRuR::synapse0x28e7d60() {
   return (neuron0x28d3de0()*0.0544535);
}

double NNfunction_sb_uRuR::synapse0x28e7da0() {
   return (neuron0x28d4120()*-0.0221156);
}

double NNfunction_sb_uRuR::synapse0x28e8120() {
   return (neuron0x28cf560()*0.0920626);
}

double NNfunction_sb_uRuR::synapse0x28e8160() {
   return (neuron0x28cf8a0()*-0.535899);
}

double NNfunction_sb_uRuR::synapse0x28e81a0() {
   return (neuron0x28cfbe0()*0.164064);
}

double NNfunction_sb_uRuR::synapse0x28e81e0() {
   return (neuron0x28cff20()*-0.39003);
}

double NNfunction_sb_uRuR::synapse0x28e8220() {
   return (neuron0x28d0260()*0.349798);
}

double NNfunction_sb_uRuR::synapse0x28e8260() {
   return (neuron0x28d05a0()*0.0877833);
}

double NNfunction_sb_uRuR::synapse0x28e82a0() {
   return (neuron0x28d08e0()*-0.157413);
}

double NNfunction_sb_uRuR::synapse0x28e82e0() {
   return (neuron0x28d0c20()*0.596836);
}

double NNfunction_sb_uRuR::synapse0x28e8320() {
   return (neuron0x28d0f60()*-0.0616766);
}

double NNfunction_sb_uRuR::synapse0x28e8360() {
   return (neuron0x28d12a0()*0.597001);
}

double NNfunction_sb_uRuR::synapse0x28e83a0() {
   return (neuron0x28d15e0()*0.196519);
}

double NNfunction_sb_uRuR::synapse0x28e83e0() {
   return (neuron0x28d1920()*0.130916);
}

double NNfunction_sb_uRuR::synapse0x28e8420() {
   return (neuron0x28d1c60()*-0.167831);
}

double NNfunction_sb_uRuR::synapse0x28e8460() {
   return (neuron0x28d1fa0()*-0.107799);
}

double NNfunction_sb_uRuR::synapse0x28e84a0() {
   return (neuron0x28d22e0()*-0.201912);
}

double NNfunction_sb_uRuR::synapse0x28e84e0() {
   return (neuron0x28d2620()*0.603219);
}

double NNfunction_sb_uRuR::synapse0x28e7f70() {
   return (neuron0x28d2960()*0.242998);
}

double NNfunction_sb_uRuR::synapse0x28e7fb0() {
   return (neuron0x28d2ec0()*-0.444133);
}

double NNfunction_sb_uRuR::synapse0x28e8630() {
   return (neuron0x28d30e0()*-0.399343);
}

double NNfunction_sb_uRuR::synapse0x28e8670() {
   return (neuron0x28d3420()*0.322767);
}

double NNfunction_sb_uRuR::synapse0x28e86b0() {
   return (neuron0x28d3760()*0.128277);
}

double NNfunction_sb_uRuR::synapse0x28e86f0() {
   return (neuron0x28d3aa0()*0.161278);
}

double NNfunction_sb_uRuR::synapse0x28e8730() {
   return (neuron0x28d3de0()*-0.0962963);
}

double NNfunction_sb_uRuR::synapse0x28e8770() {
   return (neuron0x28d4120()*-0.161182);
}

double NNfunction_sb_uRuR::synapse0x28e8af0() {
   return (neuron0x28cf560()*0.0837441);
}

double NNfunction_sb_uRuR::synapse0x28e8b30() {
   return (neuron0x28cf8a0()*-0.1543);
}

double NNfunction_sb_uRuR::synapse0x28e8b70() {
   return (neuron0x28cfbe0()*0.0466097);
}

double NNfunction_sb_uRuR::synapse0x28e8bb0() {
   return (neuron0x28cff20()*-0.0983513);
}

double NNfunction_sb_uRuR::synapse0x28e8bf0() {
   return (neuron0x28d0260()*-0.0385382);
}

double NNfunction_sb_uRuR::synapse0x28e8c30() {
   return (neuron0x28d05a0()*0.466998);
}

double NNfunction_sb_uRuR::synapse0x28e8c70() {
   return (neuron0x28d08e0()*-0.0118202);
}

double NNfunction_sb_uRuR::synapse0x28e8cb0() {
   return (neuron0x28d0c20()*0.485516);
}

double NNfunction_sb_uRuR::synapse0x28e8cf0() {
   return (neuron0x28d0f60()*0.00311413);
}

double NNfunction_sb_uRuR::synapse0x28e8d30() {
   return (neuron0x28d12a0()*0.0822183);
}

double NNfunction_sb_uRuR::synapse0x28e8d70() {
   return (neuron0x28d15e0()*-0.0976754);
}

double NNfunction_sb_uRuR::synapse0x28e8db0() {
   return (neuron0x28d1920()*-0.0865352);
}

double NNfunction_sb_uRuR::synapse0x28e8df0() {
   return (neuron0x28d1c60()*-0.0294973);
}

double NNfunction_sb_uRuR::synapse0x28e8e30() {
   return (neuron0x28d1fa0()*-0.0439847);
}

double NNfunction_sb_uRuR::synapse0x28e8e70() {
   return (neuron0x28d22e0()*-0.800195);
}

double NNfunction_sb_uRuR::synapse0x28e8eb0() {
   return (neuron0x28d2620()*-0.444849);
}

double NNfunction_sb_uRuR::synapse0x28e8940() {
   return (neuron0x28d2960()*-0.482598);
}

double NNfunction_sb_uRuR::synapse0x28e8980() {
   return (neuron0x28d2ec0()*0.0383019);
}

double NNfunction_sb_uRuR::synapse0x28e9000() {
   return (neuron0x28d30e0()*0.0117129);
}

double NNfunction_sb_uRuR::synapse0x28e9040() {
   return (neuron0x28d3420()*-2.87073e-05);
}

double NNfunction_sb_uRuR::synapse0x28e9080() {
   return (neuron0x28d3760()*0.0117268);
}

double NNfunction_sb_uRuR::synapse0x28e90c0() {
   return (neuron0x28d3aa0()*0.00792929);
}

double NNfunction_sb_uRuR::synapse0x28e9100() {
   return (neuron0x28d3de0()*0.0133997);
}

double NNfunction_sb_uRuR::synapse0x28e9140() {
   return (neuron0x28d4120()*-0.00171202);
}

double NNfunction_sb_uRuR::synapse0x28e94c0() {
   return (neuron0x28cf560()*-0.0913395);
}

double NNfunction_sb_uRuR::synapse0x28e9500() {
   return (neuron0x28cf8a0()*-0.281991);
}

double NNfunction_sb_uRuR::synapse0x28e9540() {
   return (neuron0x28cfbe0()*0.461077);
}

double NNfunction_sb_uRuR::synapse0x28e9580() {
   return (neuron0x28cff20()*0.265636);
}

double NNfunction_sb_uRuR::synapse0x28e95c0() {
   return (neuron0x28d0260()*-1.10128);
}

double NNfunction_sb_uRuR::synapse0x28e9600() {
   return (neuron0x28d05a0()*-0.206647);
}

double NNfunction_sb_uRuR::synapse0x28e9640() {
   return (neuron0x28d08e0()*0.525148);
}

double NNfunction_sb_uRuR::synapse0x28e9680() {
   return (neuron0x28d0c20()*0.798701);
}

double NNfunction_sb_uRuR::synapse0x28e96c0() {
   return (neuron0x28d0f60()*0.0351025);
}

double NNfunction_sb_uRuR::synapse0x28e9700() {
   return (neuron0x28d12a0()*0.1969);
}

double NNfunction_sb_uRuR::synapse0x28e9740() {
   return (neuron0x28d15e0()*0.211188);
}

double NNfunction_sb_uRuR::synapse0x28e9780() {
   return (neuron0x28d1920()*0.117616);
}

double NNfunction_sb_uRuR::synapse0x28e97c0() {
   return (neuron0x28d1c60()*0.225184);
}

double NNfunction_sb_uRuR::synapse0x28e9800() {
   return (neuron0x28d1fa0()*0.422811);
}

double NNfunction_sb_uRuR::synapse0x28e9840() {
   return (neuron0x28d22e0()*-0.509905);
}

double NNfunction_sb_uRuR::synapse0x28e9880() {
   return (neuron0x28d2620()*0.024316);
}

double NNfunction_sb_uRuR::synapse0x28e9310() {
   return (neuron0x28d2960()*-0.797202);
}

double NNfunction_sb_uRuR::synapse0x28e9350() {
   return (neuron0x28d2ec0()*-0.467203);
}

double NNfunction_sb_uRuR::synapse0x28e99d0() {
   return (neuron0x28d30e0()*0.382652);
}

double NNfunction_sb_uRuR::synapse0x28e9a10() {
   return (neuron0x28d3420()*0.513839);
}

double NNfunction_sb_uRuR::synapse0x28e9a50() {
   return (neuron0x28d3760()*0.934603);
}

double NNfunction_sb_uRuR::synapse0x28e9a90() {
   return (neuron0x28d3aa0()*-0.28484);
}

double NNfunction_sb_uRuR::synapse0x28e9ad0() {
   return (neuron0x28d3de0()*-0.29269);
}

double NNfunction_sb_uRuR::synapse0x28e9b10() {
   return (neuron0x28d4120()*0.529353);
}

double NNfunction_sb_uRuR::synapse0x28e9e90() {
   return (neuron0x28cf560()*-0.0166593);
}

double NNfunction_sb_uRuR::synapse0x28de460() {
   return (neuron0x28cf8a0()*-0.165848);
}

double NNfunction_sb_uRuR::synapse0x28de4a0() {
   return (neuron0x28cfbe0()*0.00390597);
}

double NNfunction_sb_uRuR::synapse0x28de4e0() {
   return (neuron0x28cff20()*-0.192252);
}

double NNfunction_sb_uRuR::synapse0x28de730() {
   return (neuron0x28d0260()*0.254565);
}

double NNfunction_sb_uRuR::synapse0x28de770() {
   return (neuron0x28d05a0()*0.190718);
}

double NNfunction_sb_uRuR::synapse0x28de7b0() {
   return (neuron0x28d08e0()*0.0159895);
}

double NNfunction_sb_uRuR::synapse0x28dea00() {
   return (neuron0x28d0c20()*0.098811);
}

double NNfunction_sb_uRuR::synapse0x28dea40() {
   return (neuron0x28d0f60()*-0.0680718);
}

double NNfunction_sb_uRuR::synapse0x28dec90() {
   return (neuron0x28d12a0()*-0.20488);
}

double NNfunction_sb_uRuR::synapse0x28decd0() {
   return (neuron0x28d15e0()*-0.103971);
}

double NNfunction_sb_uRuR::synapse0x28ded10() {
   return (neuron0x28d1920()*-0.16739);
}

double NNfunction_sb_uRuR::synapse0x28def60() {
   return (neuron0x28d1c60()*-0.0406812);
}

double NNfunction_sb_uRuR::synapse0x28defa0() {
   return (neuron0x28d1fa0()*-0.139337);
}

double NNfunction_sb_uRuR::synapse0x28df1f0() {
   return (neuron0x28d22e0()*-0.380111);
}

double NNfunction_sb_uRuR::synapse0x28df230() {
   return (neuron0x28d2620()*0.0956178);
}

double NNfunction_sb_uRuR::synapse0x28e9ce0() {
   return (neuron0x28d2960()*0.00475332);
}

double NNfunction_sb_uRuR::synapse0x28e9d20() {
   return (neuron0x28d2ec0()*1.29495);
}

double NNfunction_sb_uRuR::synapse0x28df380() {
   return (neuron0x28d30e0()*-0.0384003);
}

double NNfunction_sb_uRuR::synapse0x28df890() {
   return (neuron0x28d3420()*0.0146741);
}

double NNfunction_sb_uRuR::synapse0x28df8d0() {
   return (neuron0x28d3760()*-0.00595763);
}

double NNfunction_sb_uRuR::synapse0x28df910() {
   return (neuron0x28d3aa0()*-0.0232604);
}

double NNfunction_sb_uRuR::synapse0x28dfb60() {
   return (neuron0x28d3de0()*0.111549);
}

double NNfunction_sb_uRuR::synapse0x28dfba0() {
   return (neuron0x28d4120()*0.0165787);
}

double NNfunction_sb_uRuR::synapse0x28df450() {
   return (neuron0x28cf560()*-0.0255181);
}

double NNfunction_sb_uRuR::synapse0x28df490() {
   return (neuron0x28cf8a0()*-0.00549525);
}

double NNfunction_sb_uRuR::synapse0x28df4d0() {
   return (neuron0x28cfbe0()*-0.0138746);
}

double NNfunction_sb_uRuR::synapse0x28df510() {
   return (neuron0x28cff20()*3.54705);
}

double NNfunction_sb_uRuR::synapse0x28dfe90() {
   return (neuron0x28d0260()*0.0153096);
}

double NNfunction_sb_uRuR::synapse0x28ec1e0() {
   return (neuron0x28d05a0()*-0.0349275);
}

double NNfunction_sb_uRuR::synapse0x28ec220() {
   return (neuron0x28d08e0()*0.0254327);
}

double NNfunction_sb_uRuR::synapse0x28ec260() {
   return (neuron0x28d0c20()*-0.00165982);
}

double NNfunction_sb_uRuR::synapse0x28ec2a0() {
   return (neuron0x28d0f60()*-0.07314);
}

double NNfunction_sb_uRuR::synapse0x28ec2e0() {
   return (neuron0x28d12a0()*0.0338831);
}

double NNfunction_sb_uRuR::synapse0x28ec320() {
   return (neuron0x28d15e0()*-0.0595249);
}

double NNfunction_sb_uRuR::synapse0x28ec360() {
   return (neuron0x28d1920()*-0.0433758);
}

double NNfunction_sb_uRuR::synapse0x28ec3a0() {
   return (neuron0x28d1c60()*-0.0386817);
}

double NNfunction_sb_uRuR::synapse0x28ec3e0() {
   return (neuron0x28d1fa0()*-0.0417047);
}

double NNfunction_sb_uRuR::synapse0x28ec420() {
   return (neuron0x28d22e0()*1.04199);
}

double NNfunction_sb_uRuR::synapse0x28ec460() {
   return (neuron0x28d2620()*-0.0760261);
}

double NNfunction_sb_uRuR::synapse0x28dfd70() {
   return (neuron0x28d2960()*0.0138998);
}

double NNfunction_sb_uRuR::synapse0x28dfdb0() {
   return (neuron0x28d2ec0()*0.0184183);
}

double NNfunction_sb_uRuR::synapse0x28ec5b0() {
   return (neuron0x28d30e0()*-0.0484221);
}

double NNfunction_sb_uRuR::synapse0x28ec5f0() {
   return (neuron0x28d3420()*-0.107145);
}

double NNfunction_sb_uRuR::synapse0x28ec630() {
   return (neuron0x28d3760()*0.0314086);
}

double NNfunction_sb_uRuR::synapse0x28ec670() {
   return (neuron0x28d3aa0()*0.0215068);
}

double NNfunction_sb_uRuR::synapse0x28ec6b0() {
   return (neuron0x28d3de0()*0.0136185);
}

double NNfunction_sb_uRuR::synapse0x28ec6f0() {
   return (neuron0x28d4120()*-0.0101238);
}

double NNfunction_sb_uRuR::synapse0x28eca70() {
   return (neuron0x28cf560()*-0.0381139);
}

double NNfunction_sb_uRuR::synapse0x28ecab0() {
   return (neuron0x28cf8a0()*0.175582);
}

double NNfunction_sb_uRuR::synapse0x28ecaf0() {
   return (neuron0x28cfbe0()*-0.168806);
}

double NNfunction_sb_uRuR::synapse0x28ecb30() {
   return (neuron0x28cff20()*-0.361184);
}

double NNfunction_sb_uRuR::synapse0x28ecb70() {
   return (neuron0x28d0260()*-0.177578);
}

double NNfunction_sb_uRuR::synapse0x28ecbb0() {
   return (neuron0x28d05a0()*-0.00282006);
}

double NNfunction_sb_uRuR::synapse0x28ecbf0() {
   return (neuron0x28d08e0()*-0.0501466);
}

double NNfunction_sb_uRuR::synapse0x28ecc30() {
   return (neuron0x28d0c20()*-0.108859);
}

double NNfunction_sb_uRuR::synapse0x28ecc70() {
   return (neuron0x28d0f60()*-0.317174);
}

double NNfunction_sb_uRuR::synapse0x28eccb0() {
   return (neuron0x28d12a0()*-0.474081);
}

double NNfunction_sb_uRuR::synapse0x28eccf0() {
   return (neuron0x28d15e0()*-0.287167);
}

double NNfunction_sb_uRuR::synapse0x28ecd30() {
   return (neuron0x28d1920()*0.706038);
}

double NNfunction_sb_uRuR::synapse0x28ecd70() {
   return (neuron0x28d1c60()*-0.491543);
}

double NNfunction_sb_uRuR::synapse0x28ecdb0() {
   return (neuron0x28d1fa0()*-0.351773);
}

double NNfunction_sb_uRuR::synapse0x28ecdf0() {
   return (neuron0x28d22e0()*-0.70531);
}

double NNfunction_sb_uRuR::synapse0x28ece30() {
   return (neuron0x28d2620()*0.159302);
}

double NNfunction_sb_uRuR::synapse0x28ec8c0() {
   return (neuron0x28d2960()*0.0333345);
}

double NNfunction_sb_uRuR::synapse0x28ec900() {
   return (neuron0x28d2ec0()*-0.0129059);
}

double NNfunction_sb_uRuR::synapse0x28ecf80() {
   return (neuron0x28d30e0()*-0.235341);
}

double NNfunction_sb_uRuR::synapse0x28ecfc0() {
   return (neuron0x28d3420()*-0.214823);
}

double NNfunction_sb_uRuR::synapse0x28ed000() {
   return (neuron0x28d3760()*0.208107);
}

double NNfunction_sb_uRuR::synapse0x28ed040() {
   return (neuron0x28d3aa0()*-0.101433);
}

double NNfunction_sb_uRuR::synapse0x28ed080() {
   return (neuron0x28d3de0()*0.0942469);
}

double NNfunction_sb_uRuR::synapse0x28ed0c0() {
   return (neuron0x28d4120()*-0.264317);
}

double NNfunction_sb_uRuR::synapse0x28ed440() {
   return (neuron0x28cf560()*0.00584101);
}

double NNfunction_sb_uRuR::synapse0x28ed480() {
   return (neuron0x28cf8a0()*-0.557008);
}

double NNfunction_sb_uRuR::synapse0x28ed4c0() {
   return (neuron0x28cfbe0()*-0.0313923);
}

double NNfunction_sb_uRuR::synapse0x28ed500() {
   return (neuron0x28cff20()*-0.277558);
}

double NNfunction_sb_uRuR::synapse0x28ed540() {
   return (neuron0x28d0260()*0.188021);
}

double NNfunction_sb_uRuR::synapse0x28ed580() {
   return (neuron0x28d05a0()*-0.0395922);
}

double NNfunction_sb_uRuR::synapse0x28ed5c0() {
   return (neuron0x28d08e0()*0.0629725);
}

double NNfunction_sb_uRuR::synapse0x28ed600() {
   return (neuron0x28d0c20()*0.101304);
}

double NNfunction_sb_uRuR::synapse0x28ed640() {
   return (neuron0x28d0f60()*0.164061);
}

double NNfunction_sb_uRuR::synapse0x28ed680() {
   return (neuron0x28d12a0()*0.110896);
}

double NNfunction_sb_uRuR::synapse0x28ed6c0() {
   return (neuron0x28d15e0()*-0.681782);
}

double NNfunction_sb_uRuR::synapse0x28ed700() {
   return (neuron0x28d1920()*-0.0759672);
}

double NNfunction_sb_uRuR::synapse0x28ed740() {
   return (neuron0x28d1c60()*0.421837);
}

double NNfunction_sb_uRuR::synapse0x28ed780() {
   return (neuron0x28d1fa0()*-0.0222199);
}

double NNfunction_sb_uRuR::synapse0x28ed7c0() {
   return (neuron0x28d22e0()*-0.385928);
}

double NNfunction_sb_uRuR::synapse0x28ed800() {
   return (neuron0x28d2620()*-0.00147016);
}

double NNfunction_sb_uRuR::synapse0x28ed290() {
   return (neuron0x28d2960()*-0.108818);
}

double NNfunction_sb_uRuR::synapse0x28ed2d0() {
   return (neuron0x28d2ec0()*-0.0685145);
}

double NNfunction_sb_uRuR::synapse0x28ed950() {
   return (neuron0x28d30e0()*-0.206083);
}

double NNfunction_sb_uRuR::synapse0x28ed990() {
   return (neuron0x28d3420()*-0.635195);
}

double NNfunction_sb_uRuR::synapse0x28ed9d0() {
   return (neuron0x28d3760()*0.0444518);
}

double NNfunction_sb_uRuR::synapse0x28eda10() {
   return (neuron0x28d3aa0()*0.0049356);
}

double NNfunction_sb_uRuR::synapse0x28eda50() {
   return (neuron0x28d3de0()*-0.0943624);
}

double NNfunction_sb_uRuR::synapse0x28eda90() {
   return (neuron0x28d4120()*0.047999);
}

double NNfunction_sb_uRuR::synapse0x28ede10() {
   return (neuron0x28cf560()*-0.0226001);
}

double NNfunction_sb_uRuR::synapse0x28ede50() {
   return (neuron0x28cf8a0()*0.0138303);
}

double NNfunction_sb_uRuR::synapse0x28ede90() {
   return (neuron0x28cfbe0()*-0.0109581);
}

double NNfunction_sb_uRuR::synapse0x28eded0() {
   return (neuron0x28cff20()*-0.000966411);
}

double NNfunction_sb_uRuR::synapse0x28edf10() {
   return (neuron0x28d0260()*0.0244256);
}

double NNfunction_sb_uRuR::synapse0x28edf50() {
   return (neuron0x28d05a0()*0.0328946);
}

double NNfunction_sb_uRuR::synapse0x28edf90() {
   return (neuron0x28d08e0()*0.0080138);
}

double NNfunction_sb_uRuR::synapse0x28edfd0() {
   return (neuron0x28d0c20()*-0.0119747);
}

double NNfunction_sb_uRuR::synapse0x28ee010() {
   return (neuron0x28d0f60()*-0.0452936);
}

double NNfunction_sb_uRuR::synapse0x28ee050() {
   return (neuron0x28d12a0()*-0.00934286);
}

double NNfunction_sb_uRuR::synapse0x28ee090() {
   return (neuron0x28d15e0()*-0.000878357);
}

double NNfunction_sb_uRuR::synapse0x28ee0d0() {
   return (neuron0x28d1920()*0.0126995);
}

double NNfunction_sb_uRuR::synapse0x28ee110() {
   return (neuron0x28d1c60()*-0.0320878);
}

double NNfunction_sb_uRuR::synapse0x28ee150() {
   return (neuron0x28d1fa0()*-0.000241381);
}

double NNfunction_sb_uRuR::synapse0x28ee190() {
   return (neuron0x28d22e0()*5.54693);
}

double NNfunction_sb_uRuR::synapse0x28ee1d0() {
   return (neuron0x28d2620()*-0.0137624);
}

double NNfunction_sb_uRuR::synapse0x28edc60() {
   return (neuron0x28d2960()*0.00892062);
}

double NNfunction_sb_uRuR::synapse0x28edca0() {
   return (neuron0x28d2ec0()*0.00625038);
}

double NNfunction_sb_uRuR::synapse0x28ee320() {
   return (neuron0x28d30e0()*-0.00645989);
}

double NNfunction_sb_uRuR::synapse0x28ee360() {
   return (neuron0x28d3420()*-0.00578475);
}

double NNfunction_sb_uRuR::synapse0x28ee3a0() {
   return (neuron0x28d3760()*-0.00788669);
}

double NNfunction_sb_uRuR::synapse0x28ee3e0() {
   return (neuron0x28d3aa0()*-0.00458003);
}

double NNfunction_sb_uRuR::synapse0x28ee420() {
   return (neuron0x28d3de0()*0.014566);
}

double NNfunction_sb_uRuR::synapse0x28ee460() {
   return (neuron0x28d4120()*0.00651493);
}

double NNfunction_sb_uRuR::synapse0x28ee7e0() {
   return (neuron0x28cf560()*-0.17292);
}

double NNfunction_sb_uRuR::synapse0x28ee820() {
   return (neuron0x28cf8a0()*-0.200302);
}

double NNfunction_sb_uRuR::synapse0x28ee860() {
   return (neuron0x28cfbe0()*0.452209);
}

double NNfunction_sb_uRuR::synapse0x28ee8a0() {
   return (neuron0x28cff20()*-0.430231);
}

double NNfunction_sb_uRuR::synapse0x28ee8e0() {
   return (neuron0x28d0260()*-0.778824);
}

double NNfunction_sb_uRuR::synapse0x28ee920() {
   return (neuron0x28d05a0()*-0.154931);
}

double NNfunction_sb_uRuR::synapse0x28ee960() {
   return (neuron0x28d08e0()*0.592103);
}

double NNfunction_sb_uRuR::synapse0x28ee9a0() {
   return (neuron0x28d0c20()*0.688689);
}

double NNfunction_sb_uRuR::synapse0x28ee9e0() {
   return (neuron0x28d0f60()*-0.0398002);
}

double NNfunction_sb_uRuR::synapse0x28eea20() {
   return (neuron0x28d12a0()*0.586476);
}

double NNfunction_sb_uRuR::synapse0x28eea60() {
   return (neuron0x28d15e0()*-0.33449);
}

double NNfunction_sb_uRuR::synapse0x28eeaa0() {
   return (neuron0x28d1920()*0.0821198);
}

double NNfunction_sb_uRuR::synapse0x28eeae0() {
   return (neuron0x28d1c60()*2.93803);
}

double NNfunction_sb_uRuR::synapse0x28eeb20() {
   return (neuron0x28d1fa0()*0.107187);
}

double NNfunction_sb_uRuR::synapse0x28eeb60() {
   return (neuron0x28d22e0()*0.0367002);
}

double NNfunction_sb_uRuR::synapse0x28eeba0() {
   return (neuron0x28d2620()*-0.285817);
}

double NNfunction_sb_uRuR::synapse0x28ee630() {
   return (neuron0x28d2960()*0.0978354);
}

double NNfunction_sb_uRuR::synapse0x28ee670() {
   return (neuron0x28d2ec0()*-0.226916);
}

double NNfunction_sb_uRuR::synapse0x28eecf0() {
   return (neuron0x28d30e0()*-0.0312539);
}

double NNfunction_sb_uRuR::synapse0x28eed30() {
   return (neuron0x28d3420()*-0.131082);
}

double NNfunction_sb_uRuR::synapse0x28eed70() {
   return (neuron0x28d3760()*-0.670944);
}

double NNfunction_sb_uRuR::synapse0x28eedb0() {
   return (neuron0x28d3aa0()*-0.128627);
}

double NNfunction_sb_uRuR::synapse0x28eedf0() {
   return (neuron0x28d3de0()*-0.0946962);
}

double NNfunction_sb_uRuR::synapse0x28eee30() {
   return (neuron0x28d4120()*-0.111734);
}

double NNfunction_sb_uRuR::synapse0x28ef1b0() {
   return (neuron0x28cf560()*0.0985593);
}

double NNfunction_sb_uRuR::synapse0x28ef1f0() {
   return (neuron0x28cf8a0()*0.820504);
}

double NNfunction_sb_uRuR::synapse0x28ef230() {
   return (neuron0x28cfbe0()*0.0043691);
}

double NNfunction_sb_uRuR::synapse0x28ef270() {
   return (neuron0x28cff20()*-0.140972);
}

double NNfunction_sb_uRuR::synapse0x28ef2b0() {
   return (neuron0x28d0260()*-0.141635);
}

double NNfunction_sb_uRuR::synapse0x28ef2f0() {
   return (neuron0x28d05a0()*-0.080108);
}

double NNfunction_sb_uRuR::synapse0x28ef330() {
   return (neuron0x28d08e0()*-0.109516);
}

double NNfunction_sb_uRuR::synapse0x28ef370() {
   return (neuron0x28d0c20()*-0.0271317);
}

double NNfunction_sb_uRuR::synapse0x28ef3b0() {
   return (neuron0x28d0f60()*0.448434);
}

double NNfunction_sb_uRuR::synapse0x28ef3f0() {
   return (neuron0x28d12a0()*0.035355);
}

double NNfunction_sb_uRuR::synapse0x28ef430() {
   return (neuron0x28d15e0()*-0.511255);
}

double NNfunction_sb_uRuR::synapse0x28ef470() {
   return (neuron0x28d1920()*-0.0192702);
}

double NNfunction_sb_uRuR::synapse0x28ef4b0() {
   return (neuron0x28d1c60()*-0.423189);
}

double NNfunction_sb_uRuR::synapse0x28ef4f0() {
   return (neuron0x28d1fa0()*0.17091);
}

double NNfunction_sb_uRuR::synapse0x28ef530() {
   return (neuron0x28d22e0()*0.625254);
}

double NNfunction_sb_uRuR::synapse0x28ef570() {
   return (neuron0x28d2620()*-0.114318);
}

double NNfunction_sb_uRuR::synapse0x28ef000() {
   return (neuron0x28d2960()*0.20357);
}

double NNfunction_sb_uRuR::synapse0x28ef040() {
   return (neuron0x28d2ec0()*0.185821);
}

double NNfunction_sb_uRuR::synapse0x28ef6c0() {
   return (neuron0x28d30e0()*-0.256829);
}

double NNfunction_sb_uRuR::synapse0x28ef700() {
   return (neuron0x28d3420()*-0.0057958);
}

double NNfunction_sb_uRuR::synapse0x28ef740() {
   return (neuron0x28d3760()*-0.041648);
}

double NNfunction_sb_uRuR::synapse0x28ef780() {
   return (neuron0x28d3aa0()*0.117022);
}

double NNfunction_sb_uRuR::synapse0x28ef7c0() {
   return (neuron0x28d3de0()*-0.00801829);
}

double NNfunction_sb_uRuR::synapse0x28ef800() {
   return (neuron0x28d4120()*0.0173891);
}

double NNfunction_sb_uRuR::synapse0x28efb80() {
   return (neuron0x28cf560()*0.0600262);
}

double NNfunction_sb_uRuR::synapse0x28efbc0() {
   return (neuron0x28cf8a0()*0.399394);
}

double NNfunction_sb_uRuR::synapse0x28efc00() {
   return (neuron0x28cfbe0()*-0.0142134);
}

double NNfunction_sb_uRuR::synapse0x28efc40() {
   return (neuron0x28cff20()*-0.118111);
}

double NNfunction_sb_uRuR::synapse0x28efc80() {
   return (neuron0x28d0260()*0.054264);
}

double NNfunction_sb_uRuR::synapse0x28efcc0() {
   return (neuron0x28d05a0()*0.0230653);
}

double NNfunction_sb_uRuR::synapse0x28efd00() {
   return (neuron0x28d08e0()*-0.180492);
}

double NNfunction_sb_uRuR::synapse0x28efd40() {
   return (neuron0x28d0c20()*-0.0470338);
}

double NNfunction_sb_uRuR::synapse0x28efd80() {
   return (neuron0x28d0f60()*-0.852578);
}

double NNfunction_sb_uRuR::synapse0x28efdc0() {
   return (neuron0x28d12a0()*-0.107196);
}

double NNfunction_sb_uRuR::synapse0x28efe00() {
   return (neuron0x28d15e0()*-0.382291);
}

double NNfunction_sb_uRuR::synapse0x28efe40() {
   return (neuron0x28d1920()*-0.0361831);
}

double NNfunction_sb_uRuR::synapse0x28efe80() {
   return (neuron0x28d1c60()*0.183748);
}

double NNfunction_sb_uRuR::synapse0x28efec0() {
   return (neuron0x28d1fa0()*-0.049768);
}

double NNfunction_sb_uRuR::synapse0x28eff00() {
   return (neuron0x28d22e0()*0.692213);
}

double NNfunction_sb_uRuR::synapse0x28eff40() {
   return (neuron0x28d2620()*0.00460347);
}

double NNfunction_sb_uRuR::synapse0x28ef9d0() {
   return (neuron0x28d2960()*-0.119121);
}

double NNfunction_sb_uRuR::synapse0x28efa10() {
   return (neuron0x28d2ec0()*0.213213);
}

double NNfunction_sb_uRuR::synapse0x28f0090() {
   return (neuron0x28d30e0()*-0.0312143);
}

double NNfunction_sb_uRuR::synapse0x28f00d0() {
   return (neuron0x28d3420()*0.173983);
}

double NNfunction_sb_uRuR::synapse0x28f0110() {
   return (neuron0x28d3760()*-0.0451288);
}

double NNfunction_sb_uRuR::synapse0x28f0150() {
   return (neuron0x28d3aa0()*0.0475173);
}

double NNfunction_sb_uRuR::synapse0x28f0190() {
   return (neuron0x28d3de0()*-0.0371726);
}

double NNfunction_sb_uRuR::synapse0x28f01d0() {
   return (neuron0x28d4120()*0.030648);
}

double NNfunction_sb_uRuR::synapse0x28f0550() {
   return (neuron0x28cf560()*0.000507137);
}

double NNfunction_sb_uRuR::synapse0x28f0590() {
   return (neuron0x28cf8a0()*0.0156893);
}

double NNfunction_sb_uRuR::synapse0x28f05d0() {
   return (neuron0x28cfbe0()*0.00332189);
}

double NNfunction_sb_uRuR::synapse0x28f0610() {
   return (neuron0x28cff20()*0.0211083);
}

double NNfunction_sb_uRuR::synapse0x28f0650() {
   return (neuron0x28d0260()*0.0035735);
}

double NNfunction_sb_uRuR::synapse0x28f0690() {
   return (neuron0x28d05a0()*-0.0310374);
}

double NNfunction_sb_uRuR::synapse0x28f06d0() {
   return (neuron0x28d08e0()*0.000844188);
}

double NNfunction_sb_uRuR::synapse0x28f0710() {
   return (neuron0x28d0c20()*-0.0122959);
}

double NNfunction_sb_uRuR::synapse0x28f0750() {
   return (neuron0x28d0f60()*-0.00309149);
}

double NNfunction_sb_uRuR::synapse0x28f0790() {
   return (neuron0x28d12a0()*-0.0167097);
}

double NNfunction_sb_uRuR::synapse0x28f07d0() {
   return (neuron0x28d15e0()*0.0215037);
}

double NNfunction_sb_uRuR::synapse0x28f0810() {
   return (neuron0x28d1920()*0.437211);
}

double NNfunction_sb_uRuR::synapse0x28f0850() {
   return (neuron0x28d1c60()*0.431251);
}

double NNfunction_sb_uRuR::synapse0x28f0890() {
   return (neuron0x28d1fa0()*-0.0223103);
}

double NNfunction_sb_uRuR::synapse0x28f08d0() {
   return (neuron0x28d22e0()*-0.104834);
}

double NNfunction_sb_uRuR::synapse0x28f0910() {
   return (neuron0x28d2620()*0.20558);
}

double NNfunction_sb_uRuR::synapse0x28f03a0() {
   return (neuron0x28d2960()*-0.0121802);
}

double NNfunction_sb_uRuR::synapse0x28f03e0() {
   return (neuron0x28d2ec0()*0.199447);
}

double NNfunction_sb_uRuR::synapse0x28f0a60() {
   return (neuron0x28d30e0()*0.234494);
}

double NNfunction_sb_uRuR::synapse0x28f0aa0() {
   return (neuron0x28d3420()*0.011084);
}

double NNfunction_sb_uRuR::synapse0x28f0ae0() {
   return (neuron0x28d3760()*-0.00943349);
}

double NNfunction_sb_uRuR::synapse0x28f0b20() {
   return (neuron0x28d3aa0()*0.00543293);
}

double NNfunction_sb_uRuR::synapse0x28f0b60() {
   return (neuron0x28d3de0()*0.0081769);
}

double NNfunction_sb_uRuR::synapse0x28f0ba0() {
   return (neuron0x28d4120()*0.00300219);
}

double NNfunction_sb_uRuR::synapse0x28d9650() {
   return (neuron0x28cf560()*-0.617457);
}

double NNfunction_sb_uRuR::synapse0x28d9690() {
   return (neuron0x28cf8a0()*0.277677);
}

double NNfunction_sb_uRuR::synapse0x28d96d0() {
   return (neuron0x28cfbe0()*0.247264);
}

double NNfunction_sb_uRuR::synapse0x28d9710() {
   return (neuron0x28cff20()*0.326899);
}

double NNfunction_sb_uRuR::synapse0x28d9750() {
   return (neuron0x28d0260()*-0.0900063);
}

double NNfunction_sb_uRuR::synapse0x28d9790() {
   return (neuron0x28d05a0()*-0.206769);
}

double NNfunction_sb_uRuR::synapse0x28d97d0() {
   return (neuron0x28d08e0()*-0.116274);
}

double NNfunction_sb_uRuR::synapse0x28d9810() {
   return (neuron0x28d0c20()*-0.713089);
}

double NNfunction_sb_uRuR::synapse0x28f1330() {
   return (neuron0x28d0f60()*0.536679);
}

double NNfunction_sb_uRuR::synapse0x28f1370() {
   return (neuron0x28d12a0()*-0.914921);
}

double NNfunction_sb_uRuR::synapse0x28f13b0() {
   return (neuron0x28d15e0()*0.249193);
}

double NNfunction_sb_uRuR::synapse0x28f13f0() {
   return (neuron0x28d1920()*-0.966361);
}

double NNfunction_sb_uRuR::synapse0x28f1430() {
   return (neuron0x28d1c60()*0.285829);
}

double NNfunction_sb_uRuR::synapse0x28f1470() {
   return (neuron0x28d1fa0()*-0.618943);
}

double NNfunction_sb_uRuR::synapse0x28f14b0() {
   return (neuron0x28d22e0()*-0.230144);
}

double NNfunction_sb_uRuR::synapse0x28f14f0() {
   return (neuron0x28d2620()*-0.598556);
}

double NNfunction_sb_uRuR::synapse0x28f0d70() {
   return (neuron0x28d2960()*-0.332189);
}

double NNfunction_sb_uRuR::synapse0x28f0db0() {
   return (neuron0x28d2ec0()*-0.9782);
}

double NNfunction_sb_uRuR::synapse0x28f1640() {
   return (neuron0x28d30e0()*-0.203688);
}

double NNfunction_sb_uRuR::synapse0x28f1680() {
   return (neuron0x28d3420()*-0.918446);
}

double NNfunction_sb_uRuR::synapse0x28f16c0() {
   return (neuron0x28d3760()*0.109147);
}

double NNfunction_sb_uRuR::synapse0x28f1700() {
   return (neuron0x28d3aa0()*-0.449578);
}

double NNfunction_sb_uRuR::synapse0x28f1740() {
   return (neuron0x28d3de0()*0.00980355);
}

double NNfunction_sb_uRuR::synapse0x28f1780() {
   return (neuron0x28d4120()*0.466812);
}

double NNfunction_sb_uRuR::synapse0x28f1b00() {
   return (neuron0x28cf560()*-0.032213);
}

double NNfunction_sb_uRuR::synapse0x28f1b40() {
   return (neuron0x28cf8a0()*0.159143);
}

double NNfunction_sb_uRuR::synapse0x28f1b80() {
   return (neuron0x28cfbe0()*0.015348);
}

double NNfunction_sb_uRuR::synapse0x28f1bc0() {
   return (neuron0x28cff20()*-0.0884739);
}

double NNfunction_sb_uRuR::synapse0x28f1c00() {
   return (neuron0x28d0260()*0.0319679);
}

double NNfunction_sb_uRuR::synapse0x28f1c40() {
   return (neuron0x28d05a0()*-0.0425495);
}

double NNfunction_sb_uRuR::synapse0x28f1c80() {
   return (neuron0x28d08e0()*1.33254);
}

double NNfunction_sb_uRuR::synapse0x28f1cc0() {
   return (neuron0x28d0c20()*0.0369744);
}

double NNfunction_sb_uRuR::synapse0x28f1d00() {
   return (neuron0x28d0f60()*-0.0167086);
}

double NNfunction_sb_uRuR::synapse0x28f1d40() {
   return (neuron0x28d12a0()*0.0457679);
}

double NNfunction_sb_uRuR::synapse0x28f1d80() {
   return (neuron0x28d15e0()*0.0889532);
}

double NNfunction_sb_uRuR::synapse0x28f1dc0() {
   return (neuron0x28d1920()*0.0427296);
}

double NNfunction_sb_uRuR::synapse0x28f1e00() {
   return (neuron0x28d1c60()*0.154993);
}

double NNfunction_sb_uRuR::synapse0x28f1e40() {
   return (neuron0x28d1fa0()*0.010944);
}

double NNfunction_sb_uRuR::synapse0x28f1e80() {
   return (neuron0x28d22e0()*-0.000245827);
}

double NNfunction_sb_uRuR::synapse0x28f1ec0() {
   return (neuron0x28d2620()*0.77293);
}

double NNfunction_sb_uRuR::synapse0x28f1950() {
   return (neuron0x28d2960()*-0.0260275);
}

double NNfunction_sb_uRuR::synapse0x28f1990() {
   return (neuron0x28d2ec0()*-0.0827681);
}

double NNfunction_sb_uRuR::synapse0x28f2010() {
   return (neuron0x28d30e0()*0.116076);
}

double NNfunction_sb_uRuR::synapse0x28f2050() {
   return (neuron0x28d3420()*-0.104372);
}

double NNfunction_sb_uRuR::synapse0x28f2090() {
   return (neuron0x28d3760()*-0.0471117);
}

double NNfunction_sb_uRuR::synapse0x28f20d0() {
   return (neuron0x28d3aa0()*-0.0857001);
}

double NNfunction_sb_uRuR::synapse0x28f2110() {
   return (neuron0x28d3de0()*-0.000372269);
}

double NNfunction_sb_uRuR::synapse0x28f2150() {
   return (neuron0x28d4120()*-0.010781);
}

double NNfunction_sb_uRuR::synapse0x28f24d0() {
   return (neuron0x28cf560()*-0.0557033);
}

double NNfunction_sb_uRuR::synapse0x28f2510() {
   return (neuron0x28cf8a0()*0.0342678);
}

double NNfunction_sb_uRuR::synapse0x28f2550() {
   return (neuron0x28cfbe0()*0.118045);
}

double NNfunction_sb_uRuR::synapse0x28f2590() {
   return (neuron0x28cff20()*-2.59344);
}

double NNfunction_sb_uRuR::synapse0x28f25d0() {
   return (neuron0x28d0260()*-0.0727185);
}

double NNfunction_sb_uRuR::synapse0x28f2610() {
   return (neuron0x28d05a0()*-0.0388572);
}

double NNfunction_sb_uRuR::synapse0x28f2650() {
   return (neuron0x28d08e0()*-0.0443383);
}

double NNfunction_sb_uRuR::synapse0x28f2690() {
   return (neuron0x28d0c20()*-0.0387054);
}

double NNfunction_sb_uRuR::synapse0x28f26d0() {
   return (neuron0x28d0f60()*0.181315);
}

double NNfunction_sb_uRuR::synapse0x28f2710() {
   return (neuron0x28d12a0()*-0.0388189);
}

double NNfunction_sb_uRuR::synapse0x28f2750() {
   return (neuron0x28d15e0()*-0.0424617);
}

double NNfunction_sb_uRuR::synapse0x28f2790() {
   return (neuron0x28d1920()*0.0651859);
}

double NNfunction_sb_uRuR::synapse0x28f27d0() {
   return (neuron0x28d1c60()*-0.0727173);
}

double NNfunction_sb_uRuR::synapse0x28f2810() {
   return (neuron0x28d1fa0()*0.0503257);
}

double NNfunction_sb_uRuR::synapse0x28f2850() {
   return (neuron0x28d22e0()*1.08072);
}

double NNfunction_sb_uRuR::synapse0x28f2890() {
   return (neuron0x28d2620()*-0.0259079);
}

double NNfunction_sb_uRuR::synapse0x28f2320() {
   return (neuron0x28d2960()*0.0275095);
}

double NNfunction_sb_uRuR::synapse0x28f2360() {
   return (neuron0x28d2ec0()*-0.00228543);
}

double NNfunction_sb_uRuR::synapse0x28e2e90() {
   return (neuron0x28d30e0()*0.107981);
}

double NNfunction_sb_uRuR::synapse0x28e2ed0() {
   return (neuron0x28d3420()*0.200639);
}

double NNfunction_sb_uRuR::synapse0x28e2f10() {
   return (neuron0x28d3760()*-0.0340536);
}

double NNfunction_sb_uRuR::synapse0x28e2f50() {
   return (neuron0x28d3aa0()*-0.0645641);
}

double NNfunction_sb_uRuR::synapse0x28e2f90() {
   return (neuron0x28d3de0()*-0.0189924);
}

double NNfunction_sb_uRuR::synapse0x28e2fd0() {
   return (neuron0x28d4120()*0.0891744);
}

double NNfunction_sb_uRuR::synapse0x28e3350() {
   return (neuron0x28cf560()*-0.0497241);
}

double NNfunction_sb_uRuR::synapse0x28e3390() {
   return (neuron0x28cf8a0()*1.54449);
}

double NNfunction_sb_uRuR::synapse0x28e33d0() {
   return (neuron0x28cfbe0()*0.0983652);
}

double NNfunction_sb_uRuR::synapse0x28e3410() {
   return (neuron0x28cff20()*-1.83769);
}

double NNfunction_sb_uRuR::synapse0x28e3450() {
   return (neuron0x28d0260()*-0.121899);
}

double NNfunction_sb_uRuR::synapse0x28e3490() {
   return (neuron0x28d05a0()*-0.00414407);
}

double NNfunction_sb_uRuR::synapse0x28e34d0() {
   return (neuron0x28d08e0()*0.0536154);
}

double NNfunction_sb_uRuR::synapse0x28e3510() {
   return (neuron0x28d0c20()*-0.112023);
}

double NNfunction_sb_uRuR::synapse0x28e3550() {
   return (neuron0x28d0f60()*0.239345);
}

double NNfunction_sb_uRuR::synapse0x28e3590() {
   return (neuron0x28d12a0()*-0.0931213);
}

double NNfunction_sb_uRuR::synapse0x28e35d0() {
   return (neuron0x28d15e0()*-0.154542);
}

double NNfunction_sb_uRuR::synapse0x28e3610() {
   return (neuron0x28d1920()*-0.0857339);
}

double NNfunction_sb_uRuR::synapse0x28e3650() {
   return (neuron0x28d1c60()*0.0717339);
}

double NNfunction_sb_uRuR::synapse0x28e3690() {
   return (neuron0x28d1fa0()*0.0139513);
}

double NNfunction_sb_uRuR::synapse0x28e36d0() {
   return (neuron0x28d22e0()*0.168779);
}

double NNfunction_sb_uRuR::synapse0x28e3710() {
   return (neuron0x28d2620()*-0.104419);
}

double NNfunction_sb_uRuR::synapse0x28e31a0() {
   return (neuron0x28d2960()*0.0131158);
}

double NNfunction_sb_uRuR::synapse0x28e31e0() {
   return (neuron0x28d2ec0()*-0.166978);
}

double NNfunction_sb_uRuR::synapse0x28e3860() {
   return (neuron0x28d30e0()*-0.196256);
}

double NNfunction_sb_uRuR::synapse0x28e38a0() {
   return (neuron0x28d3420()*-0.00888301);
}

double NNfunction_sb_uRuR::synapse0x28e38e0() {
   return (neuron0x28d3760()*-0.119393);
}

double NNfunction_sb_uRuR::synapse0x28e3920() {
   return (neuron0x28d3aa0()*-0.0233916);
}

double NNfunction_sb_uRuR::synapse0x28e3960() {
   return (neuron0x28d3de0()*-0.0819581);
}

double NNfunction_sb_uRuR::synapse0x28e39a0() {
   return (neuron0x28d4120()*-0.162172);
}

double NNfunction_sb_uRuR::synapse0x28e3d20() {
   return (neuron0x28cf560()*-0.125234);
}

double NNfunction_sb_uRuR::synapse0x28e3d60() {
   return (neuron0x28cf8a0()*0.14635);
}

double NNfunction_sb_uRuR::synapse0x28e3da0() {
   return (neuron0x28cfbe0()*0.143584);
}

double NNfunction_sb_uRuR::synapse0x28e3de0() {
   return (neuron0x28cff20()*1.02381);
}

double NNfunction_sb_uRuR::synapse0x28e3e20() {
   return (neuron0x28d0260()*-0.251878);
}

double NNfunction_sb_uRuR::synapse0x28e3e60() {
   return (neuron0x28d05a0()*0.238439);
}

double NNfunction_sb_uRuR::synapse0x28e3ea0() {
   return (neuron0x28d08e0()*0.112184);
}

double NNfunction_sb_uRuR::synapse0x28e3ee0() {
   return (neuron0x28d0c20()*-0.189276);
}

double NNfunction_sb_uRuR::synapse0x28e3f20() {
   return (neuron0x28d0f60()*0.315222);
}

double NNfunction_sb_uRuR::synapse0x28e3f60() {
   return (neuron0x28d12a0()*-0.156879);
}

double NNfunction_sb_uRuR::synapse0x28e3fa0() {
   return (neuron0x28d15e0()*0.256753);
}

double NNfunction_sb_uRuR::synapse0x28e3fe0() {
   return (neuron0x28d1920()*-0.696295);
}

double NNfunction_sb_uRuR::synapse0x28e4020() {
   return (neuron0x28d1c60()*0.235411);
}

double NNfunction_sb_uRuR::synapse0x28e4060() {
   return (neuron0x28d1fa0()*-0.154754);
}

double NNfunction_sb_uRuR::synapse0x28e40a0() {
   return (neuron0x28d22e0()*0.106581);
}

double NNfunction_sb_uRuR::synapse0x28e40e0() {
   return (neuron0x28d2620()*-0.0921253);
}

double NNfunction_sb_uRuR::synapse0x28e3b70() {
   return (neuron0x28d2960()*-0.14385);
}

double NNfunction_sb_uRuR::synapse0x28e3bb0() {
   return (neuron0x28d2ec0()*0.225871);
}

double NNfunction_sb_uRuR::synapse0x28e4230() {
   return (neuron0x28d30e0()*-1.11309);
}

double NNfunction_sb_uRuR::synapse0x28e4270() {
   return (neuron0x28d3420()*0.241712);
}

double NNfunction_sb_uRuR::synapse0x28e42b0() {
   return (neuron0x28d3760()*-0.061412);
}

double NNfunction_sb_uRuR::synapse0x28e42f0() {
   return (neuron0x28d3aa0()*-0.175573);
}

double NNfunction_sb_uRuR::synapse0x28e4330() {
   return (neuron0x28d3de0()*-0.0353179);
}

double NNfunction_sb_uRuR::synapse0x28e4370() {
   return (neuron0x28d4120()*-0.104144);
}

double NNfunction_sb_uRuR::synapse0x28e46f0() {
   return (neuron0x28cf560()*0.201625);
}

double NNfunction_sb_uRuR::synapse0x28e4730() {
   return (neuron0x28cf8a0()*-0.461092);
}

double NNfunction_sb_uRuR::synapse0x28e4770() {
   return (neuron0x28cfbe0()*0.0443583);
}

double NNfunction_sb_uRuR::synapse0x28e47b0() {
   return (neuron0x28cff20()*0.0941604);
}

double NNfunction_sb_uRuR::synapse0x28e47f0() {
   return (neuron0x28d0260()*-0.117491);
}

double NNfunction_sb_uRuR::synapse0x28e4830() {
   return (neuron0x28d05a0()*0.0889047);
}

double NNfunction_sb_uRuR::synapse0x28e4870() {
   return (neuron0x28d08e0()*-0.17147);
}

double NNfunction_sb_uRuR::synapse0x28e48b0() {
   return (neuron0x28d0c20()*-0.119018);
}

double NNfunction_sb_uRuR::synapse0x28e48f0() {
   return (neuron0x28d0f60()*0.500323);
}

double NNfunction_sb_uRuR::synapse0x28e4930() {
   return (neuron0x28d12a0()*0.285211);
}

double NNfunction_sb_uRuR::synapse0x28e4970() {
   return (neuron0x28d15e0()*-0.587977);
}

double NNfunction_sb_uRuR::synapse0x28e49b0() {
   return (neuron0x28d1920()*0.213333);
}

double NNfunction_sb_uRuR::synapse0x28e49f0() {
   return (neuron0x28d1c60()*0.249885);
}

double NNfunction_sb_uRuR::synapse0x28e4a30() {
   return (neuron0x28d1fa0()*0.0279385);
}

double NNfunction_sb_uRuR::synapse0x28e4a70() {
   return (neuron0x28d22e0()*-0.907017);
}

double NNfunction_sb_uRuR::synapse0x28e4ab0() {
   return (neuron0x28d2620()*-0.0374567);
}

double NNfunction_sb_uRuR::synapse0x28e4540() {
   return (neuron0x28d2960()*-0.334614);
}

double NNfunction_sb_uRuR::synapse0x28e4580() {
   return (neuron0x28d2ec0()*0.324161);
}

double NNfunction_sb_uRuR::synapse0x28e4c00() {
   return (neuron0x28d30e0()*0.333213);
}

double NNfunction_sb_uRuR::synapse0x28e4c40() {
   return (neuron0x28d3420()*0.412457);
}

double NNfunction_sb_uRuR::synapse0x28e4c80() {
   return (neuron0x28d3760()*0.00722184);
}

double NNfunction_sb_uRuR::synapse0x28e4cc0() {
   return (neuron0x28d3aa0()*0.0500615);
}

double NNfunction_sb_uRuR::synapse0x28e4d00() {
   return (neuron0x28d3de0()*0.121319);
}

double NNfunction_sb_uRuR::synapse0x28e4d40() {
   return (neuron0x28d4120()*-0.00281616);
}

double NNfunction_sb_uRuR::synapse0x28f6c10() {
   return (neuron0x28cf560()*0.258702);
}

double NNfunction_sb_uRuR::synapse0x28f6c50() {
   return (neuron0x28cf8a0()*-0.0751975);
}

double NNfunction_sb_uRuR::synapse0x28f6c90() {
   return (neuron0x28cfbe0()*0.171112);
}

double NNfunction_sb_uRuR::synapse0x28f6cd0() {
   return (neuron0x28cff20()*0.0771199);
}

double NNfunction_sb_uRuR::synapse0x28f6d10() {
   return (neuron0x28d0260()*0.350463);
}

double NNfunction_sb_uRuR::synapse0x28f6d50() {
   return (neuron0x28d05a0()*0.169825);
}

double NNfunction_sb_uRuR::synapse0x28f6d90() {
   return (neuron0x28d08e0()*0.488006);
}

double NNfunction_sb_uRuR::synapse0x28f6dd0() {
   return (neuron0x28d0c20()*-0.666929);
}

double NNfunction_sb_uRuR::synapse0x28f6e10() {
   return (neuron0x28d0f60()*-0.0349042);
}

double NNfunction_sb_uRuR::synapse0x28f6e50() {
   return (neuron0x28d12a0()*-0.00330716);
}

double NNfunction_sb_uRuR::synapse0x28f6e90() {
   return (neuron0x28d15e0()*-0.143039);
}

double NNfunction_sb_uRuR::synapse0x28f6ed0() {
   return (neuron0x28d1920()*-0.0614127);
}

double NNfunction_sb_uRuR::synapse0x28f6f10() {
   return (neuron0x28d1c60()*-0.0933722);
}

double NNfunction_sb_uRuR::synapse0x28f6f50() {
   return (neuron0x28d1fa0()*-0.0228061);
}

double NNfunction_sb_uRuR::synapse0x28f6f90() {
   return (neuron0x28d22e0()*0.821355);
}

double NNfunction_sb_uRuR::synapse0x28f6fd0() {
   return (neuron0x28d2620()*-0.732025);
}

double NNfunction_sb_uRuR::synapse0x28e4d80() {
   return (neuron0x28d2960()*-0.0559846);
}

double NNfunction_sb_uRuR::synapse0x28e4dc0() {
   return (neuron0x28d2ec0()*0.0541497);
}

double NNfunction_sb_uRuR::synapse0x28f7120() {
   return (neuron0x28d30e0()*-0.0990755);
}

double NNfunction_sb_uRuR::synapse0x28f7160() {
   return (neuron0x28d3420()*0.119136);
}

double NNfunction_sb_uRuR::synapse0x28f71a0() {
   return (neuron0x28d3760()*-0.0140427);
}

double NNfunction_sb_uRuR::synapse0x28f71e0() {
   return (neuron0x28d3aa0()*0.0765862);
}

double NNfunction_sb_uRuR::synapse0x28f7220() {
   return (neuron0x28d3de0()*-0.0283924);
}

double NNfunction_sb_uRuR::synapse0x28f7260() {
   return (neuron0x28d4120()*0.0307374);
}

double NNfunction_sb_uRuR::synapse0x28f75e0() {
   return (neuron0x28cf560()*0.0784853);
}

double NNfunction_sb_uRuR::synapse0x28f7620() {
   return (neuron0x28cf8a0()*-0.0338116);
}

double NNfunction_sb_uRuR::synapse0x28f7660() {
   return (neuron0x28cfbe0()*0.0549942);
}

double NNfunction_sb_uRuR::synapse0x28f76a0() {
   return (neuron0x28cff20()*-0.424996);
}

double NNfunction_sb_uRuR::synapse0x28f76e0() {
   return (neuron0x28d0260()*0.0318171);
}

double NNfunction_sb_uRuR::synapse0x28f7720() {
   return (neuron0x28d05a0()*-0.0313174);
}

double NNfunction_sb_uRuR::synapse0x28f7760() {
   return (neuron0x28d08e0()*0.0470002);
}

double NNfunction_sb_uRuR::synapse0x28f77a0() {
   return (neuron0x28d0c20()*0.0300415);
}

double NNfunction_sb_uRuR::synapse0x28f77e0() {
   return (neuron0x28d0f60()*-0.455667);
}

double NNfunction_sb_uRuR::synapse0x28f7820() {
   return (neuron0x28d12a0()*0.758668);
}

double NNfunction_sb_uRuR::synapse0x28f7860() {
   return (neuron0x28d15e0()*-0.312303);
}

double NNfunction_sb_uRuR::synapse0x28f78a0() {
   return (neuron0x28d1920()*-0.167818);
}

double NNfunction_sb_uRuR::synapse0x28f78e0() {
   return (neuron0x28d1c60()*-0.386812);
}

double NNfunction_sb_uRuR::synapse0x28f7920() {
   return (neuron0x28d1fa0()*0.0404908);
}

double NNfunction_sb_uRuR::synapse0x28f7960() {
   return (neuron0x28d22e0()*-0.244527);
}

double NNfunction_sb_uRuR::synapse0x28f79a0() {
   return (neuron0x28d2620()*0.129618);
}

double NNfunction_sb_uRuR::synapse0x28f7430() {
   return (neuron0x28d2960()*-0.0235176);
}

double NNfunction_sb_uRuR::synapse0x28f7470() {
   return (neuron0x28d2ec0()*-0.364694);
}

double NNfunction_sb_uRuR::synapse0x28f7af0() {
   return (neuron0x28d30e0()*-0.45055);
}

double NNfunction_sb_uRuR::synapse0x28f7b30() {
   return (neuron0x28d3420()*0.219316);
}

double NNfunction_sb_uRuR::synapse0x28f7b70() {
   return (neuron0x28d3760()*-0.0395371);
}

double NNfunction_sb_uRuR::synapse0x28f7bb0() {
   return (neuron0x28d3aa0()*0.00843087);
}

double NNfunction_sb_uRuR::synapse0x28f7bf0() {
   return (neuron0x28d3de0()*0.015957);
}

double NNfunction_sb_uRuR::synapse0x28f7c30() {
   return (neuron0x28d4120()*-0.078971);
}

double NNfunction_sb_uRuR::synapse0x28f7fb0() {
   return (neuron0x28cf560()*-0.524969);
}

double NNfunction_sb_uRuR::synapse0x28f7ff0() {
   return (neuron0x28cf8a0()*-1.42937);
}

double NNfunction_sb_uRuR::synapse0x28f8030() {
   return (neuron0x28cfbe0()*-0.712657);
}

double NNfunction_sb_uRuR::synapse0x28f8070() {
   return (neuron0x28cff20()*0.960211);
}

double NNfunction_sb_uRuR::synapse0x28f80b0() {
   return (neuron0x28d0260()*0.45989);
}

double NNfunction_sb_uRuR::synapse0x28f80f0() {
   return (neuron0x28d05a0()*0.717637);
}

double NNfunction_sb_uRuR::synapse0x28f8130() {
   return (neuron0x28d08e0()*0.351053);
}

double NNfunction_sb_uRuR::synapse0x28f8170() {
   return (neuron0x28d0c20()*-0.408301);
}

double NNfunction_sb_uRuR::synapse0x28f81b0() {
   return (neuron0x28d0f60()*-0.404536);
}

double NNfunction_sb_uRuR::synapse0x28f81f0() {
   return (neuron0x28d12a0()*0.939231);
}

double NNfunction_sb_uRuR::synapse0x28f8230() {
   return (neuron0x28d15e0()*-0.394955);
}

double NNfunction_sb_uRuR::synapse0x28f8270() {
   return (neuron0x28d1920()*0.386733);
}

double NNfunction_sb_uRuR::synapse0x28f82b0() {
   return (neuron0x28d1c60()*-0.530113);
}

double NNfunction_sb_uRuR::synapse0x28f82f0() {
   return (neuron0x28d1fa0()*0.188503);
}

double NNfunction_sb_uRuR::synapse0x28f8330() {
   return (neuron0x28d22e0()*-0.674093);
}

double NNfunction_sb_uRuR::synapse0x28f8370() {
   return (neuron0x28d2620()*-0.738019);
}

double NNfunction_sb_uRuR::synapse0x28f7e00() {
   return (neuron0x28d2960()*0.161766);
}

double NNfunction_sb_uRuR::synapse0x28f7e40() {
   return (neuron0x28d2ec0()*0.925366);
}

double NNfunction_sb_uRuR::synapse0x28f84c0() {
   return (neuron0x28d30e0()*0.203869);
}

double NNfunction_sb_uRuR::synapse0x28f8500() {
   return (neuron0x28d3420()*0.363981);
}

double NNfunction_sb_uRuR::synapse0x28f8540() {
   return (neuron0x28d3760()*0.00928622);
}

double NNfunction_sb_uRuR::synapse0x28f8580() {
   return (neuron0x28d3aa0()*0.0184702);
}

double NNfunction_sb_uRuR::synapse0x28f85c0() {
   return (neuron0x28d3de0()*0.13295);
}

double NNfunction_sb_uRuR::synapse0x28f8600() {
   return (neuron0x28d4120()*0.214032);
}

double NNfunction_sb_uRuR::synapse0x28f8980() {
   return (neuron0x28cf560()*0.285298);
}

double NNfunction_sb_uRuR::synapse0x28f89c0() {
   return (neuron0x28cf8a0()*0.0542691);
}

double NNfunction_sb_uRuR::synapse0x28f8a00() {
   return (neuron0x28cfbe0()*-0.332511);
}

double NNfunction_sb_uRuR::synapse0x28f8a40() {
   return (neuron0x28cff20()*0.174992);
}

double NNfunction_sb_uRuR::synapse0x28f8a80() {
   return (neuron0x28d0260()*0.026063);
}

double NNfunction_sb_uRuR::synapse0x28f8ac0() {
   return (neuron0x28d05a0()*-0.328814);
}

double NNfunction_sb_uRuR::synapse0x28f8b00() {
   return (neuron0x28d08e0()*-0.323774);
}

double NNfunction_sb_uRuR::synapse0x28f8b40() {
   return (neuron0x28d0c20()*-0.609285);
}

double NNfunction_sb_uRuR::synapse0x28f8b80() {
   return (neuron0x28d0f60()*-0.199266);
}

double NNfunction_sb_uRuR::synapse0x28f8bc0() {
   return (neuron0x28d12a0()*-0.268096);
}

double NNfunction_sb_uRuR::synapse0x28f8c00() {
   return (neuron0x28d15e0()*0.381576);
}

double NNfunction_sb_uRuR::synapse0x28f8c40() {
   return (neuron0x28d1920()*0.350052);
}

double NNfunction_sb_uRuR::synapse0x28f8c80() {
   return (neuron0x28d1c60()*0.0173086);
}

double NNfunction_sb_uRuR::synapse0x28f8cc0() {
   return (neuron0x28d1fa0()*-0.0671789);
}

double NNfunction_sb_uRuR::synapse0x28f8d00() {
   return (neuron0x28d22e0()*-1.51731);
}

double NNfunction_sb_uRuR::synapse0x28f8d40() {
   return (neuron0x28d2620()*-0.247603);
}

double NNfunction_sb_uRuR::synapse0x28f87d0() {
   return (neuron0x28d2960()*0.592748);
}

double NNfunction_sb_uRuR::synapse0x28f8810() {
   return (neuron0x28d2ec0()*0.300875);
}

double NNfunction_sb_uRuR::synapse0x28f8e90() {
   return (neuron0x28d30e0()*-0.163294);
}

double NNfunction_sb_uRuR::synapse0x28f8ed0() {
   return (neuron0x28d3420()*-0.35241);
}

double NNfunction_sb_uRuR::synapse0x28f8f10() {
   return (neuron0x28d3760()*-0.251357);
}

double NNfunction_sb_uRuR::synapse0x28f8f50() {
   return (neuron0x28d3aa0()*0.182232);
}

double NNfunction_sb_uRuR::synapse0x28f8f90() {
   return (neuron0x28d3de0()*-0.31051);
}

double NNfunction_sb_uRuR::synapse0x28f8fd0() {
   return (neuron0x28d4120()*0.162297);
}

double NNfunction_sb_uRuR::synapse0x28d5570() {
   return (neuron0x28d45c0()*0.135443);
}

double NNfunction_sb_uRuR::synapse0x28d55b0() {
   return (neuron0x28d4ed0()*-0.175617);
}

double NNfunction_sb_uRuR::synapse0x28d6a80() {
   return (neuron0x28d59b0()*-1.21803);
}

double NNfunction_sb_uRuR::synapse0x28d6ac0() {
   return (neuron0x268f240()*-0.372625);
}

double NNfunction_sb_uRuR::synapse0x28d7450() {
   return (neuron0x28d67d0()*-0.0219959);
}

double NNfunction_sb_uRuR::synapse0x28d7490() {
   return (neuron0x28d71a0()*-0.935293);
}

double NNfunction_sb_uRuR::synapse0x28d8220() {
   return (neuron0x28d7f70()*-0.0860745);
}

double NNfunction_sb_uRuR::synapse0x28d8260() {
   return (neuron0x28d8940()*-0.0956191);
}

double NNfunction_sb_uRuR::synapse0x28d8bf0() {
   return (neuron0x28d9310()*0.194341);
}

double NNfunction_sb_uRuR::synapse0x28d8c30() {
   return (neuron0x28d9df0()*0.0103662);
}

double NNfunction_sb_uRuR::synapse0x28d95c0() {
   return (neuron0x28da7c0()*-0.0450283);
}

double NNfunction_sb_uRuR::synapse0x28d9600() {
   return (neuron0x28d78a0()*-0.0475771);
}

double NNfunction_sb_uRuR::synapse0x28da0a0() {
   return (neuron0x28dc370()*0.051813);
}

double NNfunction_sb_uRuR::synapse0x28da0e0() {
   return (neuron0x28dcd40()*-0.111939);
}

double NNfunction_sb_uRuR::synapse0x28daa70() {
   return (neuron0x28dd710()*0.255799);
}

double NNfunction_sb_uRuR::synapse0x28daab0() {
   return (neuron0x28de0e0()*-0.0125981);
}

double NNfunction_sb_uRuR::synapse0x28d7b50() {
   return (neuron0x28dfef0()*-0.175439);
}

double NNfunction_sb_uRuR::synapse0x28d7b90() {
   return (neuron0x28e01d0()*-2.44302);
}

double NNfunction_sb_uRuR::synapse0x28dc620() {
   return (neuron0x28e0ba0()*0.150101);
}

double NNfunction_sb_uRuR::synapse0x28dc660() {
   return (neuron0x28e1570()*0.208348);
}

double NNfunction_sb_uRuR::synapse0x28dcff0() {
   return (neuron0x28e1f40()*0.0170191);
}

double NNfunction_sb_uRuR::synapse0x28dd030() {
   return (neuron0x28e2910()*-0.210333);
}

double NNfunction_sb_uRuR::synapse0x28dd9c0() {
   return (neuron0x28db460()*-0.0749883);
}

double NNfunction_sb_uRuR::synapse0x28dda00() {
   return (neuron0x28dbe30()*0.0551892);
}

double NNfunction_sb_uRuR::synapse0x28de390() {
   return (neuron0x28e56a0()*-0.0372423);
}

double NNfunction_sb_uRuR::synapse0x28de3d0() {
   return (neuron0x28e6070()*-0.303999);
}

double NNfunction_sb_uRuR::synapse0x28d2500() {
   return (neuron0x28e6a40()*0.0127595);
}

double NNfunction_sb_uRuR::synapse0x28d2540() {
   return (neuron0x28e7410()*-0.514861);
}

double NNfunction_sb_uRuR::synapse0x28e0480() {
   return (neuron0x28e7de0()*-0.0758734);
}

double NNfunction_sb_uRuR::synapse0x28e04c0() {
   return (neuron0x28e87b0()*0.270444);
}

double NNfunction_sb_uRuR::synapse0x28e0e50() {
   return (neuron0x28e9180()*0.0283181);
}

double NNfunction_sb_uRuR::synapse0x28e0e90() {
   return (neuron0x28e9b50()*-0.0876143);
}

double NNfunction_sb_uRuR::synapse0x28e1820() {
   return (neuron0x28dfbe0()*0.750183);
}

double NNfunction_sb_uRuR::synapse0x28e1860() {
   return (neuron0x28ec730()*-0.0847235);
}

double NNfunction_sb_uRuR::synapse0x28e21f0() {
   return (neuron0x28ed100()*-0.241753);
}

double NNfunction_sb_uRuR::synapse0x28e2230() {
   return (neuron0x28edad0()*2.31783);
}

double NNfunction_sb_uRuR::synapse0x28e2bc0() {
   return (neuron0x28ee4a0()*-0.0525616);
}

double NNfunction_sb_uRuR::synapse0x28e2c00() {
   return (neuron0x28eee70()*0.0984394);
}

double NNfunction_sb_uRuR::synapse0x28db710() {
   return (neuron0x28ef840()*0.397854);
}

double NNfunction_sb_uRuR::synapse0x28db750() {
   return (neuron0x28f0210()*0.390816);
}

double NNfunction_sb_uRuR::synapse0x28e4fc0() {
   return (neuron0x28f0be0()*-0.00190863);
}

double NNfunction_sb_uRuR::synapse0x28e5000() {
   return (neuron0x28f17c0()*0.186171);
}

double NNfunction_sb_uRuR::synapse0x28e5950() {
   return (neuron0x28f2190()*0.587258);
}

double NNfunction_sb_uRuR::synapse0x28e5990() {
   return (neuron0x28e3010()*0.00746);
}

double NNfunction_sb_uRuR::synapse0x28e6320() {
   return (neuron0x28e39e0()*0.025182);
}

double NNfunction_sb_uRuR::synapse0x28e6360() {
   return (neuron0x28e43b0()*0.101748);
}

double NNfunction_sb_uRuR::synapse0x28e6cf0() {
   return (neuron0x28f69f0()*-0.256684);
}

double NNfunction_sb_uRuR::synapse0x28e6d30() {
   return (neuron0x28f72a0()*-0.229149);
}

double NNfunction_sb_uRuR::synapse0x28e76c0() {
   return (neuron0x28f7c70()*-0.00695176);
}

double NNfunction_sb_uRuR::synapse0x28e7700() {
   return (neuron0x28f8640()*-0.0345393);
}

double NNfunction_sb_uRuR::synapse0x28e9e00() {
   return (neuron0x28d45c0()*2.084);
}

double NNfunction_sb_uRuR::synapse0x28e9e40() {
   return (neuron0x28d4ed0()*-4.96343);
}

double NNfunction_sb_uRuR::synapse0x28df3c0() {
   return (neuron0x28d59b0()*1.79465);
}

double NNfunction_sb_uRuR::synapse0x28df400() {
   return (neuron0x268f240()*-5.81865);
}

double NNfunction_sb_uRuR::synapse0x28ec9e0() {
   return (neuron0x28d67d0()*-0.334192);
}

double NNfunction_sb_uRuR::synapse0x28eca20() {
   return (neuron0x28d71a0()*2.32514);
}

double NNfunction_sb_uRuR::synapse0x28ed3b0() {
   return (neuron0x28d7f70()*-0.778347);
}

double NNfunction_sb_uRuR::synapse0x28ed3f0() {
   return (neuron0x28d8940()*-1.70765);
}

double NNfunction_sb_uRuR::synapse0x28edd80() {
   return (neuron0x28d9310()*1.92073);
}

double NNfunction_sb_uRuR::synapse0x28eddc0() {
   return (neuron0x28d9df0()*-0.260838);
}

double NNfunction_sb_uRuR::synapse0x28ee750() {
   return (neuron0x28da7c0()*0.0774898);
}

double NNfunction_sb_uRuR::synapse0x28ee790() {
   return (neuron0x28d78a0()*0.0239562);
}

double NNfunction_sb_uRuR::synapse0x28ef120() {
   return (neuron0x28dc370()*-0.132677);
}

double NNfunction_sb_uRuR::synapse0x28ef160() {
   return (neuron0x28dcd40()*-2.1241);
}

double NNfunction_sb_uRuR::synapse0x28efaf0() {
   return (neuron0x28dd710()*2.32314);
}

double NNfunction_sb_uRuR::synapse0x28efb30() {
   return (neuron0x28de0e0()*-1.53023);
}

double NNfunction_sb_uRuR::synapse0x28f04c0() {
   return (neuron0x28dfef0()*-3.72848);
}

double NNfunction_sb_uRuR::synapse0x28f0500() {
   return (neuron0x28e01d0()*0.785163);
}

double NNfunction_sb_uRuR::synapse0x28f0e90() {
   return (neuron0x28e0ba0()*2.11971);
}

double NNfunction_sb_uRuR::synapse0x28f0ed0() {
   return (neuron0x28e1570()*2.8048);
}

double NNfunction_sb_uRuR::synapse0x28f1a70() {
   return (neuron0x28e1f40()*0.299955);
}

double NNfunction_sb_uRuR::synapse0x28f1ab0() {
   return (neuron0x28e2910()*-1.36479);
}

double NNfunction_sb_uRuR::synapse0x28f2440() {
   return (neuron0x28db460()*-0.689805);
}

double NNfunction_sb_uRuR::synapse0x28f2480() {
   return (neuron0x28dbe30()*0.75478);
}

double NNfunction_sb_uRuR::synapse0x28e32c0() {
   return (neuron0x28e56a0()*0.456853);
}

double NNfunction_sb_uRuR::synapse0x28e3300() {
   return (neuron0x28e6070()*-1.61855);
}

double NNfunction_sb_uRuR::synapse0x28e3c90() {
   return (neuron0x28e6a40()*-0.281183);
}

double NNfunction_sb_uRuR::synapse0x28e3cd0() {
   return (neuron0x28e7410()*-1.61628);
}

double NNfunction_sb_uRuR::synapse0x28e4660() {
   return (neuron0x28e7de0()*1.37077);
}

double NNfunction_sb_uRuR::synapse0x28e46a0() {
   return (neuron0x28e87b0()*1.53453);
}

double NNfunction_sb_uRuR::synapse0x28f6b80() {
   return (neuron0x28e9180()*0.404856);
}

double NNfunction_sb_uRuR::synapse0x28f6bc0() {
   return (neuron0x28e9b50()*-0.769903);
}

double NNfunction_sb_uRuR::synapse0x28f7550() {
   return (neuron0x28dfbe0()*1.21515);
}

double NNfunction_sb_uRuR::synapse0x28f7590() {
   return (neuron0x28ec730()*-0.737551);
}

double NNfunction_sb_uRuR::synapse0x28f7f20() {
   return (neuron0x28ed100()*-2.57761);
}

double NNfunction_sb_uRuR::synapse0x28f7f60() {
   return (neuron0x28edad0()*-2.64369);
}

double NNfunction_sb_uRuR::synapse0x28f88f0() {
   return (neuron0x28ee4a0()*-0.138702);
}

double NNfunction_sb_uRuR::synapse0x28f8930() {
   return (neuron0x28eee70()*2.91803);
}

double NNfunction_sb_uRuR::synapse0x28d47e0() {
   return (neuron0x28ef840()*2.81154);
}

double NNfunction_sb_uRuR::synapse0x28d4820() {
   return (neuron0x28f0210()*-0.67424);
}

double NNfunction_sb_uRuR::synapse0x28e8090() {
   return (neuron0x28f0be0()*0.029297);
}

double NNfunction_sb_uRuR::synapse0x28e80d0() {
   return (neuron0x28f17c0()*0.778363);
}

double NNfunction_sb_uRuR::synapse0x28f9010() {
   return (neuron0x28f2190()*4.22048);
}

double NNfunction_sb_uRuR::synapse0x28f9050() {
   return (neuron0x28e3010()*2.93374);
}

double NNfunction_sb_uRuR::synapse0x28f9090() {
   return (neuron0x28e39e0()*0.305098);
}

double NNfunction_sb_uRuR::synapse0x28f90d0() {
   return (neuron0x28e43b0()*1.02772);
}

double NNfunction_sb_uRuR::synapse0x28fff80() {
   return (neuron0x28f69f0()*-1.51341);
}

double NNfunction_sb_uRuR::synapse0x28fffc0() {
   return (neuron0x28f72a0()*-1.68864);
}

double NNfunction_sb_uRuR::synapse0x2900000() {
   return (neuron0x28f7c70()*0.623568);
}

double NNfunction_sb_uRuR::synapse0x2900040() {
   return (neuron0x28f8640()*0.618071);
}

double NNfunction_sb_uRuR::synapse0x29003c0() {
   return (neuron0x28d45c0()*-0.102445);
}

double NNfunction_sb_uRuR::synapse0x2900400() {
   return (neuron0x28d4ed0()*0.265211);
}

double NNfunction_sb_uRuR::synapse0x2900440() {
   return (neuron0x28d59b0()*-2.13445);
}

double NNfunction_sb_uRuR::synapse0x2900480() {
   return (neuron0x268f240()*1.34206);
}

double NNfunction_sb_uRuR::synapse0x29004c0() {
   return (neuron0x28d67d0()*0.0323317);
}

double NNfunction_sb_uRuR::synapse0x2900500() {
   return (neuron0x28d71a0()*-0.73267);
}

double NNfunction_sb_uRuR::synapse0x2900540() {
   return (neuron0x28d7f70()*0.0962054);
}

double NNfunction_sb_uRuR::synapse0x2900580() {
   return (neuron0x28d8940()*0.100728);
}

double NNfunction_sb_uRuR::synapse0x29005c0() {
   return (neuron0x28d9310()*-0.235178);
}

double NNfunction_sb_uRuR::synapse0x2900600() {
   return (neuron0x28d9df0()*-0.0419653);
}

double NNfunction_sb_uRuR::synapse0x2900640() {
   return (neuron0x28da7c0()*0.0579374);
}

double NNfunction_sb_uRuR::synapse0x2900680() {
   return (neuron0x28d78a0()*0.0606969);
}

double NNfunction_sb_uRuR::synapse0x29006c0() {
   return (neuron0x28dc370()*-0.0485985);
}

double NNfunction_sb_uRuR::synapse0x2900700() {
   return (neuron0x28dcd40()*0.125812);
}

double NNfunction_sb_uRuR::synapse0x2900740() {
   return (neuron0x28dd710()*-0.289839);
}

double NNfunction_sb_uRuR::synapse0x2900780() {
   return (neuron0x28de0e0()*0.0326757);
}

double NNfunction_sb_uRuR::synapse0x2900210() {
   return (neuron0x28dfef0()*0.230377);
}

double NNfunction_sb_uRuR::synapse0x2900250() {
   return (neuron0x28e01d0()*-2.76435);
}

double NNfunction_sb_uRuR::synapse0x29008d0() {
   return (neuron0x28e0ba0()*-0.210485);
}

double NNfunction_sb_uRuR::synapse0x2900910() {
   return (neuron0x28e1570()*-0.141929);
}

double NNfunction_sb_uRuR::synapse0x2900950() {
   return (neuron0x28e1f40()*-0.0375742);
}

double NNfunction_sb_uRuR::synapse0x2900990() {
   return (neuron0x28e2910()*0.242042);
}

double NNfunction_sb_uRuR::synapse0x29009d0() {
   return (neuron0x28db460()*0.0788927);
}

double NNfunction_sb_uRuR::synapse0x2900a10() {
   return (neuron0x28dbe30()*-0.066834);
}

double NNfunction_sb_uRuR::synapse0x2900a50() {
   return (neuron0x28e56a0()*0.0513664);
}

double NNfunction_sb_uRuR::synapse0x2900a90() {
   return (neuron0x28e6070()*1.15125);
}

double NNfunction_sb_uRuR::synapse0x2900ad0() {
   return (neuron0x28e6a40()*-0.062917);
}

double NNfunction_sb_uRuR::synapse0x2900b10() {
   return (neuron0x28e7410()*0.416887);
}

double NNfunction_sb_uRuR::synapse0x2900b50() {
   return (neuron0x28e7de0()*0.00838845);
}

double NNfunction_sb_uRuR::synapse0x2900b90() {
   return (neuron0x28e87b0()*-0.321983);
}

double NNfunction_sb_uRuR::synapse0x2900bd0() {
   return (neuron0x28e9180()*-0.0355318);
}

double NNfunction_sb_uRuR::synapse0x2900c10() {
   return (neuron0x28e9b50()*0.141509);
}

double NNfunction_sb_uRuR::synapse0x29007c0() {
   return (neuron0x28dfbe0()*-0.36733);
}

double NNfunction_sb_uRuR::synapse0x2900800() {
   return (neuron0x28ec730()*0.0702675);
}

double NNfunction_sb_uRuR::synapse0x2900840() {
   return (neuron0x28ed100()*0.20941);
}

double NNfunction_sb_uRuR::synapse0x2900880() {
   return (neuron0x28edad0()*0.286057);
}

double NNfunction_sb_uRuR::synapse0x2900e60() {
   return (neuron0x28ee4a0()*0.0810077);
}

double NNfunction_sb_uRuR::synapse0x2900ea0() {
   return (neuron0x28eee70()*-0.181029);
}

double NNfunction_sb_uRuR::synapse0x2900ee0() {
   return (neuron0x28ef840()*-0.362388);
}

double NNfunction_sb_uRuR::synapse0x2900f20() {
   return (neuron0x28f0210()*1.77427);
}

double NNfunction_sb_uRuR::synapse0x2900f60() {
   return (neuron0x28f0be0()*-0.0187192);
}

double NNfunction_sb_uRuR::synapse0x2900fa0() {
   return (neuron0x28f17c0()*-0.250582);
}

double NNfunction_sb_uRuR::synapse0x2900fe0() {
   return (neuron0x28f2190()*-0.503776);
}

double NNfunction_sb_uRuR::synapse0x2901020() {
   return (neuron0x28e3010()*-0.0292707);
}

double NNfunction_sb_uRuR::synapse0x2901060() {
   return (neuron0x28e39e0()*-0.086879);
}

double NNfunction_sb_uRuR::synapse0x29010a0() {
   return (neuron0x28e43b0()*-0.165612);
}

double NNfunction_sb_uRuR::synapse0x29010e0() {
   return (neuron0x28f69f0()*0.279987);
}

double NNfunction_sb_uRuR::synapse0x2901120() {
   return (neuron0x28f72a0()*0.193);
}

double NNfunction_sb_uRuR::synapse0x2901160() {
   return (neuron0x28f7c70()*-0.00828198);
}

double NNfunction_sb_uRuR::synapse0x29011a0() {
   return (neuron0x28f8640()*0.000149571);
}

double NNfunction_sb_uRuR::synapse0x2901520() {
   return (neuron0x28d45c0()*-0.65652);
}

double NNfunction_sb_uRuR::synapse0x2901560() {
   return (neuron0x28d4ed0()*-0.919095);
}

double NNfunction_sb_uRuR::synapse0x29015a0() {
   return (neuron0x28d59b0()*-0.861647);
}

double NNfunction_sb_uRuR::synapse0x29015e0() {
   return (neuron0x268f240()*2.07958);
}

double NNfunction_sb_uRuR::synapse0x2901620() {
   return (neuron0x28d67d0()*-0.270323);
}

double NNfunction_sb_uRuR::synapse0x2901660() {
   return (neuron0x28d71a0()*-0.948658);
}

double NNfunction_sb_uRuR::synapse0x29016a0() {
   return (neuron0x28d7f70()*0.0764177);
}

double NNfunction_sb_uRuR::synapse0x29016e0() {
   return (neuron0x28d8940()*0.407099);
}

double NNfunction_sb_uRuR::synapse0x2901720() {
   return (neuron0x28d9310()*-0.298258);
}

double NNfunction_sb_uRuR::synapse0x2901760() {
   return (neuron0x28d9df0()*0.549434);
}

double NNfunction_sb_uRuR::synapse0x29017a0() {
   return (neuron0x28da7c0()*-0.42857);
}

double NNfunction_sb_uRuR::synapse0x29017e0() {
   return (neuron0x28d78a0()*-0.189241);
}

double NNfunction_sb_uRuR::synapse0x2901820() {
   return (neuron0x28dc370()*0.618291);
}

double NNfunction_sb_uRuR::synapse0x2901860() {
   return (neuron0x28dcd40()*0.552606);
}

double NNfunction_sb_uRuR::synapse0x29018a0() {
   return (neuron0x28dd710()*-1.34559);
}

double NNfunction_sb_uRuR::synapse0x29018e0() {
   return (neuron0x28de0e0()*-0.748727);
}

double NNfunction_sb_uRuR::synapse0x2901370() {
   return (neuron0x28dfef0()*-0.521109);
}

double NNfunction_sb_uRuR::synapse0x29013b0() {
   return (neuron0x28e01d0()*0.308622);
}

double NNfunction_sb_uRuR::synapse0x2901a30() {
   return (neuron0x28e0ba0()*-0.980527);
}

double NNfunction_sb_uRuR::synapse0x2901a70() {
   return (neuron0x28e1570()*0.185596);
}

double NNfunction_sb_uRuR::synapse0x2901ab0() {
   return (neuron0x28e1f40()*0.415828);
}

double NNfunction_sb_uRuR::synapse0x2901af0() {
   return (neuron0x28e2910()*0.55866);
}

double NNfunction_sb_uRuR::synapse0x2901b30() {
   return (neuron0x28db460()*0.130386);
}

double NNfunction_sb_uRuR::synapse0x2901b70() {
   return (neuron0x28dbe30()*0.429906);
}

double NNfunction_sb_uRuR::synapse0x2901bb0() {
   return (neuron0x28e56a0()*-0.329565);
}

double NNfunction_sb_uRuR::synapse0x2901bf0() {
   return (neuron0x28e6070()*3.29098);
}

double NNfunction_sb_uRuR::synapse0x2901c30() {
   return (neuron0x28e6a40()*1.03286);
}

double NNfunction_sb_uRuR::synapse0x2901c70() {
   return (neuron0x28e7410()*0.332245);
}

double NNfunction_sb_uRuR::synapse0x2901cb0() {
   return (neuron0x28e7de0()*0.5336);
}

double NNfunction_sb_uRuR::synapse0x2901cf0() {
   return (neuron0x28e87b0()*-1.54931);
}

double NNfunction_sb_uRuR::synapse0x2901d30() {
   return (neuron0x28e9180()*0.519902);
}

double NNfunction_sb_uRuR::synapse0x2901d70() {
   return (neuron0x28e9b50()*0.712669);
}

double NNfunction_sb_uRuR::synapse0x2901920() {
   return (neuron0x28dfbe0()*-3.59046);
}

double NNfunction_sb_uRuR::synapse0x2901960() {
   return (neuron0x28ec730()*-0.243959);
}

double NNfunction_sb_uRuR::synapse0x29019a0() {
   return (neuron0x28ed100()*0.7769);
}

double NNfunction_sb_uRuR::synapse0x29019e0() {
   return (neuron0x28edad0()*1.90061);
}

double NNfunction_sb_uRuR::synapse0x2901fc0() {
   return (neuron0x28ee4a0()*-0.31819);
}

double NNfunction_sb_uRuR::synapse0x2902000() {
   return (neuron0x28eee70()*-0.364273);
}

double NNfunction_sb_uRuR::synapse0x2902040() {
   return (neuron0x28ef840()*-0.415521);
}

double NNfunction_sb_uRuR::synapse0x2902080() {
   return (neuron0x28f0210()*1.42638);
}

double NNfunction_sb_uRuR::synapse0x29020c0() {
   return (neuron0x28f0be0()*0.327237);
}

double NNfunction_sb_uRuR::synapse0x2902100() {
   return (neuron0x28f17c0()*-0.371);
}

double NNfunction_sb_uRuR::synapse0x2902140() {
   return (neuron0x28f2190()*-0.339704);
}

double NNfunction_sb_uRuR::synapse0x2902180() {
   return (neuron0x28e3010()*1.30914);
}

double NNfunction_sb_uRuR::synapse0x29021c0() {
   return (neuron0x28e39e0()*0.0179061);
}

double NNfunction_sb_uRuR::synapse0x2902200() {
   return (neuron0x28e43b0()*-0.193457);
}

double NNfunction_sb_uRuR::synapse0x2902240() {
   return (neuron0x28f69f0()*0.489455);
}

double NNfunction_sb_uRuR::synapse0x2902280() {
   return (neuron0x28f72a0()*0.382074);
}

double NNfunction_sb_uRuR::synapse0x29022c0() {
   return (neuron0x28f7c70()*0.0605052);
}

double NNfunction_sb_uRuR::synapse0x2902300() {
   return (neuron0x28f8640()*0.372935);
}

double NNfunction_sb_uRuR::synapse0x2902680() {
   return (neuron0x28d45c0()*2.43293);
}

double NNfunction_sb_uRuR::synapse0x29026c0() {
   return (neuron0x28d4ed0()*-2.36119);
}

double NNfunction_sb_uRuR::synapse0x2902700() {
   return (neuron0x28d59b0()*1.99905);
}

double NNfunction_sb_uRuR::synapse0x2902740() {
   return (neuron0x268f240()*-7.74982);
}

double NNfunction_sb_uRuR::synapse0x2902780() {
   return (neuron0x28d67d0()*-1.50861);
}

double NNfunction_sb_uRuR::synapse0x29027c0() {
   return (neuron0x28d71a0()*1.39886);
}

double NNfunction_sb_uRuR::synapse0x2902800() {
   return (neuron0x28d7f70()*-2.02186);
}

double NNfunction_sb_uRuR::synapse0x2902840() {
   return (neuron0x28d8940()*-0.765138);
}

double NNfunction_sb_uRuR::synapse0x2902880() {
   return (neuron0x28d9310()*2.23208);
}

double NNfunction_sb_uRuR::synapse0x29028c0() {
   return (neuron0x28d9df0()*1.53302);
}

double NNfunction_sb_uRuR::synapse0x2902900() {
   return (neuron0x28da7c0()*-1.35912);
}

double NNfunction_sb_uRuR::synapse0x2902940() {
   return (neuron0x28d78a0()*-1.60341);
}

double NNfunction_sb_uRuR::synapse0x2902980() {
   return (neuron0x28dc370()*2.37541);
}

double NNfunction_sb_uRuR::synapse0x29029c0() {
   return (neuron0x28dcd40()*-3.52385);
}

double NNfunction_sb_uRuR::synapse0x2902a00() {
   return (neuron0x28dd710()*2.31765);
}

double NNfunction_sb_uRuR::synapse0x2902a40() {
   return (neuron0x28de0e0()*1.56932);
}

double NNfunction_sb_uRuR::synapse0x29024d0() {
   return (neuron0x28dfef0()*-1.35345);
}

double NNfunction_sb_uRuR::synapse0x2902510() {
   return (neuron0x28e01d0()*1.55871);
}

double NNfunction_sb_uRuR::synapse0x2902b90() {
   return (neuron0x28e0ba0()*1.71521);
}

double NNfunction_sb_uRuR::synapse0x2902bd0() {
   return (neuron0x28e1570()*-1.75982);
}

double NNfunction_sb_uRuR::synapse0x2902c10() {
   return (neuron0x28e1f40()*1.42032);
}

double NNfunction_sb_uRuR::synapse0x2902c50() {
   return (neuron0x28e2910()*-1.68616);
}

double NNfunction_sb_uRuR::synapse0x2902c90() {
   return (neuron0x28db460()*-1.51538);
}

double NNfunction_sb_uRuR::synapse0x2902cd0() {
   return (neuron0x28dbe30()*1.84043);
}

double NNfunction_sb_uRuR::synapse0x2902d10() {
   return (neuron0x28e56a0()*-1.46102);
}

double NNfunction_sb_uRuR::synapse0x2902d50() {
   return (neuron0x28e6070()*-11.1754);
}

double NNfunction_sb_uRuR::synapse0x2902d90() {
   return (neuron0x28e6a40()*-1.57539);
}

double NNfunction_sb_uRuR::synapse0x2902dd0() {
   return (neuron0x28e7410()*-3.22916);
}

double NNfunction_sb_uRuR::synapse0x2902e10() {
   return (neuron0x28e7de0()*1.18572);
}

double NNfunction_sb_uRuR::synapse0x2902e50() {
   return (neuron0x28e87b0()*3.30488);
}

double NNfunction_sb_uRuR::synapse0x2902e90() {
   return (neuron0x28e9180()*2.33157);
}

double NNfunction_sb_uRuR::synapse0x2902ed0() {
   return (neuron0x28e9b50()*-2.88125);
}

double NNfunction_sb_uRuR::synapse0x2902a80() {
   return (neuron0x28dfbe0()*7.20015);
}

double NNfunction_sb_uRuR::synapse0x2902ac0() {
   return (neuron0x28ec730()*-2.46172);
}

double NNfunction_sb_uRuR::synapse0x2902b00() {
   return (neuron0x28ed100()*-2.1747);
}

double NNfunction_sb_uRuR::synapse0x2902b40() {
   return (neuron0x28edad0()*-4.52782);
}

double NNfunction_sb_uRuR::synapse0x2903120() {
   return (neuron0x28ee4a0()*-1.34338);
}

double NNfunction_sb_uRuR::synapse0x2903160() {
   return (neuron0x28eee70()*3.29837);
}

double NNfunction_sb_uRuR::synapse0x29031a0() {
   return (neuron0x28ef840()*2.60485);
}

double NNfunction_sb_uRuR::synapse0x29031e0() {
   return (neuron0x28f0210()*-0.609801);
}

double NNfunction_sb_uRuR::synapse0x2903220() {
   return (neuron0x28f0be0()*1.29036);
}

double NNfunction_sb_uRuR::synapse0x2903260() {
   return (neuron0x28f17c0()*2.66008);
}

double NNfunction_sb_uRuR::synapse0x29032a0() {
   return (neuron0x28f2190()*1.04886);
}

double NNfunction_sb_uRuR::synapse0x29032e0() {
   return (neuron0x28e3010()*-0.707276);
}

double NNfunction_sb_uRuR::synapse0x2903320() {
   return (neuron0x28e39e0()*2.36303);
}

double NNfunction_sb_uRuR::synapse0x2903360() {
   return (neuron0x28e43b0()*2.39581);
}

double NNfunction_sb_uRuR::synapse0x29033a0() {
   return (neuron0x28f69f0()*-1.92124);
}

double NNfunction_sb_uRuR::synapse0x29033e0() {
   return (neuron0x28f72a0()*-2.70057);
}

double NNfunction_sb_uRuR::synapse0x2903420() {
   return (neuron0x28f7c70()*1.44273);
}

double NNfunction_sb_uRuR::synapse0x2903460() {
   return (neuron0x28f8640()*2.62539);
}

double NNfunction_sb_uRuR::synapse0x28d4580() {
   return (neuron0x28ff840()*-3.92706);
}

double NNfunction_sb_uRuR::synapse0x29036c0() {
   return (neuron0x28ffbe0()*9.95654);
}

double NNfunction_sb_uRuR::synapse0x2903700() {
   return (neuron0x2900080()*-4.59754);
}

double NNfunction_sb_uRuR::synapse0x2903740() {
   return (neuron0x29011e0()*-3.01905);
}

double NNfunction_sb_uRuR::synapse0x2903780() {
   return (neuron0x2902340()*13.0155);
}

