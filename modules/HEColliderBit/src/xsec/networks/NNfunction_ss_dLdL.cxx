#include "NNfunction_ss_dLdL.h"
#include <cmath>

double NNfunction_ss_dLdL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5353)/15.3304;
   input1 = (in1 - -3.26729)/1149.72;
   input2 = (in2 - 663.195)/624.111;
   input3 = (in3 - -56.8908)/829.853;
   input4 = (in4 - 1063.47)/955.196;
   input5 = (in5 - 893.178)/946.301;
   input6 = (in6 - 909.259)/950.678;
   input7 = (in7 - 923.626)/932.212;
   input8 = (in8 - 930.907)/977.51;
   input9 = (in9 - 901.392)/953.211;
   input10 = (in10 - 991.169)/957.507;
   input11 = (in11 - 353.288)/329.547;
   input12 = (in12 - 730.621)/878.347;
   input13 = (in13 - 507.724)/527.189;
   input14 = (in14 - 716.131)/814.787;
   input15 = (in15 - 721.623)/818.506;
   input16 = (in16 - 536.983)/563.923;
   input17 = (in17 - 768.44)/906.529;
   input18 = (in18 - 752.598)/900.596;
   input19 = (in19 - 808.99)/886.758;
   input20 = (in20 - -4.09867)/494.381;
   input21 = (in21 - 2.2657)/1163.78;
   input22 = (in22 - 9.87613)/1204.32;
   input23 = (in23 - -191.447)/596.269;
   switch(index) {
     case 0:
         return neuron0x19de4a0();
     default:
         return 0.;
   }
}

double NNfunction_ss_dLdL::Value(int index, double* input) {
   input0 = (input[0] - 23.5353)/15.3304;
   input1 = (input[1] - -3.26729)/1149.72;
   input2 = (input[2] - 663.195)/624.111;
   input3 = (input[3] - -56.8908)/829.853;
   input4 = (input[4] - 1063.47)/955.196;
   input5 = (input[5] - 893.178)/946.301;
   input6 = (input[6] - 909.259)/950.678;
   input7 = (input[7] - 923.626)/932.212;
   input8 = (input[8] - 930.907)/977.51;
   input9 = (input[9] - 901.392)/953.211;
   input10 = (input[10] - 991.169)/957.507;
   input11 = (input[11] - 353.288)/329.547;
   input12 = (input[12] - 730.621)/878.347;
   input13 = (input[13] - 507.724)/527.189;
   input14 = (input[14] - 716.131)/814.787;
   input15 = (input[15] - 721.623)/818.506;
   input16 = (input[16] - 536.983)/563.923;
   input17 = (input[17] - 768.44)/906.529;
   input18 = (input[18] - 752.598)/900.596;
   input19 = (input[19] - 808.99)/886.758;
   input20 = (input[20] - -4.09867)/494.381;
   input21 = (input[21] - 2.2657)/1163.78;
   input22 = (input[22] - 9.87613)/1204.32;
   input23 = (input[23] - -191.447)/596.269;
   switch(index) {
     case 0:
         return neuron0x19de4a0();
     default:
         return 0.;
   }
}

double NNfunction_ss_dLdL::neuron0x19aa560() {
   return input0;
}

double NNfunction_ss_dLdL::neuron0x19aa8a0() {
   return input1;
}

double NNfunction_ss_dLdL::neuron0x19aabe0() {
   return input2;
}

double NNfunction_ss_dLdL::neuron0x19aaf20() {
   return input3;
}

double NNfunction_ss_dLdL::neuron0x19ab260() {
   return input4;
}

double NNfunction_ss_dLdL::neuron0x19ab5a0() {
   return input5;
}

double NNfunction_ss_dLdL::neuron0x19ab8e0() {
   return input6;
}

double NNfunction_ss_dLdL::neuron0x19abc20() {
   return input7;
}

double NNfunction_ss_dLdL::neuron0x19abf60() {
   return input8;
}

double NNfunction_ss_dLdL::neuron0x19ac2a0() {
   return input9;
}

double NNfunction_ss_dLdL::neuron0x19ac5e0() {
   return input10;
}

double NNfunction_ss_dLdL::neuron0x19ac920() {
   return input11;
}

double NNfunction_ss_dLdL::neuron0x19acc60() {
   return input12;
}

double NNfunction_ss_dLdL::neuron0x19acfa0() {
   return input13;
}

double NNfunction_ss_dLdL::neuron0x19ad2e0() {
   return input14;
}

double NNfunction_ss_dLdL::neuron0x19ad620() {
   return input15;
}

double NNfunction_ss_dLdL::neuron0x19ad960() {
   return input16;
}

double NNfunction_ss_dLdL::neuron0x19adec0() {
   return input17;
}

double NNfunction_ss_dLdL::neuron0x19ae0e0() {
   return input18;
}

double NNfunction_ss_dLdL::neuron0x19ae420() {
   return input19;
}

double NNfunction_ss_dLdL::neuron0x19ae760() {
   return input20;
}

double NNfunction_ss_dLdL::neuron0x19aeaa0() {
   return input21;
}

double NNfunction_ss_dLdL::neuron0x19aede0() {
   return input22;
}

double NNfunction_ss_dLdL::neuron0x19af120() {
   return input23;
}

double NNfunction_ss_dLdL::input0x19af5c0() {
   double input = -0.652762;
   input += synapse0x176a3d0();
   input += synapse0x19aa420();
   input += synapse0x19aa460();
   input += synapse0x19af870();
   input += synapse0x19af8b0();
   input += synapse0x19af8f0();
   input += synapse0x19af930();
   input += synapse0x19af970();
   input += synapse0x19af9b0();
   input += synapse0x19af9f0();
   input += synapse0x19afa30();
   input += synapse0x19afa70();
   input += synapse0x19afab0();
   input += synapse0x19afaf0();
   input += synapse0x19afb30();
   input += synapse0x19afb70();
   input += synapse0x19aa390();
   input += synapse0x19aa3d0();
   input += synapse0x175bc70();
   input += synapse0x175bcb0();
   input += synapse0x19afdd0();
   input += synapse0x19afe10();
   input += synapse0x19afe50();
   input += synapse0x19afe90();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19af5c0() {
   double input = input0x19af5c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19afed0() {
   double input = -0.421107;
   input += synapse0x19b0210();
   input += synapse0x19b0250();
   input += synapse0x19b0290();
   input += synapse0x19b02d0();
   input += synapse0x19b0310();
   input += synapse0x19b0350();
   input += synapse0x19b0390();
   input += synapse0x19b03d0();
   input += synapse0x19b0410();
   input += synapse0x19afcc0();
   input += synapse0x19afd00();
   input += synapse0x19afd40();
   input += synapse0x19afd80();
   input += synapse0x19b0660();
   input += synapse0x19b06a0();
   input += synapse0x19b06e0();
   input += synapse0x19b0060();
   input += synapse0x19b00a0();
   input += synapse0x19b0830();
   input += synapse0x19b0870();
   input += synapse0x19b08b0();
   input += synapse0x19b08f0();
   input += synapse0x19b0930();
   input += synapse0x19b0970();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19afed0() {
   double input = input0x19afed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19b09b0() {
   double input = 0.146601;
   input += synapse0x19b0cf0();
   input += synapse0x19b0d30();
   input += synapse0x19b0d70();
   input += synapse0x19b0db0();
   input += synapse0x19b0df0();
   input += synapse0x19b0e30();
   input += synapse0x19b0e70();
   input += synapse0x19b0eb0();
   input += synapse0x19b0ef0();
   input += synapse0x19b0f30();
   input += synapse0x19b0f70();
   input += synapse0x19b0fb0();
   input += synapse0x19b0ff0();
   input += synapse0x19b1030();
   input += synapse0x19b1070();
   input += synapse0x19b10b0();
   input += synapse0x19b0b40();
   input += synapse0x19b0b80();
   input += synapse0x1769ac0();
   input += synapse0x1769b00();
   input += synapse0x19995f0();
   input += synapse0x1999630();
   input += synapse0x1999670();
   input += synapse0x19aa4a0();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19b09b0() {
   double input = input0x19b09b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x176a240() {
   double input = -0.559438;
   input += synapse0x19b0600();
   input += synapse0x19aa4e0();
   input += synapse0x19aa520();
   input += synapse0x19b1200();
   input += synapse0x19b1240();
   input += synapse0x19b1280();
   input += synapse0x19b12c0();
   input += synapse0x19b1300();
   input += synapse0x19b1340();
   input += synapse0x19b1380();
   input += synapse0x19b13c0();
   input += synapse0x19b1400();
   input += synapse0x19b1440();
   input += synapse0x19b1480();
   input += synapse0x19b14c0();
   input += synapse0x19b1500();
   input += synapse0x19b0450();
   input += synapse0x19b0490();
   input += synapse0x19b1650();
   input += synapse0x19b1690();
   input += synapse0x19b16d0();
   input += synapse0x19b1710();
   input += synapse0x19b1750();
   input += synapse0x19b1790();
   return input;
}

double NNfunction_ss_dLdL::neuron0x176a240() {
   double input = input0x176a240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19b17d0() {
   double input = -0.228465;
   input += synapse0x19b1b10();
   input += synapse0x19b1b50();
   input += synapse0x19b1b90();
   input += synapse0x19b1bd0();
   input += synapse0x19b1c10();
   input += synapse0x19b1c50();
   input += synapse0x19b1c90();
   input += synapse0x19b1cd0();
   input += synapse0x19b1d10();
   input += synapse0x19b1d50();
   input += synapse0x19b1d90();
   input += synapse0x19b1dd0();
   input += synapse0x19b1e10();
   input += synapse0x19b1e50();
   input += synapse0x19b1e90();
   input += synapse0x19b1ed0();
   input += synapse0x19b1960();
   input += synapse0x19b19a0();
   input += synapse0x19b2020();
   input += synapse0x19b2060();
   input += synapse0x19b20a0();
   input += synapse0x19b20e0();
   input += synapse0x19b2120();
   input += synapse0x19b2160();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19b17d0() {
   double input = input0x19b17d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19b21a0() {
   double input = -0.0627885;
   input += synapse0x19b24e0();
   input += synapse0x19b2520();
   input += synapse0x19b2560();
   input += synapse0x19b25a0();
   input += synapse0x19b25e0();
   input += synapse0x19b2620();
   input += synapse0x19b2660();
   input += synapse0x19b26a0();
   input += synapse0x19b26e0();
   input += synapse0x1769e30();
   input += synapse0x1769e70();
   input += synapse0x1769eb0();
   input += synapse0x1769ef0();
   input += synapse0x1769f30();
   input += synapse0x1769f70();
   input += synapse0x1769fb0();
   input += synapse0x19b2330();
   input += synapse0x19b2370();
   input += synapse0x176a100();
   input += synapse0x176a140();
   input += synapse0x176a180();
   input += synapse0x176a1c0();
   input += synapse0x176a200();
   input += synapse0x19b2f30();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19b21a0() {
   double input = input0x19b21a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19b2f70() {
   double input = -0.166159;
   input += synapse0x19b32b0();
   input += synapse0x19b32f0();
   input += synapse0x19b3330();
   input += synapse0x19b3370();
   input += synapse0x19b33b0();
   input += synapse0x19b33f0();
   input += synapse0x19b3430();
   input += synapse0x19b3470();
   input += synapse0x19b34b0();
   input += synapse0x19b34f0();
   input += synapse0x19b3530();
   input += synapse0x19b3570();
   input += synapse0x19b35b0();
   input += synapse0x19b35f0();
   input += synapse0x19b3630();
   input += synapse0x19b3670();
   input += synapse0x19b3100();
   input += synapse0x19b3140();
   input += synapse0x19b37c0();
   input += synapse0x19b3800();
   input += synapse0x19b3840();
   input += synapse0x19b3880();
   input += synapse0x19b38c0();
   input += synapse0x19b3900();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19b2f70() {
   double input = input0x19b2f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19b3940() {
   double input = 0.421497;
   input += synapse0x19b3c80();
   input += synapse0x19b3cc0();
   input += synapse0x19b3d00();
   input += synapse0x19b3d40();
   input += synapse0x19b3d80();
   input += synapse0x19b3dc0();
   input += synapse0x19b3e00();
   input += synapse0x19b3e40();
   input += synapse0x19b3e80();
   input += synapse0x19b3ec0();
   input += synapse0x19b3f00();
   input += synapse0x19b3f40();
   input += synapse0x19b3f80();
   input += synapse0x19b3fc0();
   input += synapse0x19b4000();
   input += synapse0x19b4040();
   input += synapse0x19b3ad0();
   input += synapse0x19b3b10();
   input += synapse0x19b4190();
   input += synapse0x19b41d0();
   input += synapse0x19b4210();
   input += synapse0x19b4250();
   input += synapse0x19b4290();
   input += synapse0x19b42d0();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19b3940() {
   double input = input0x19b3940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19b4310() {
   double input = 0.604653;
   input += synapse0x19addb0();
   input += synapse0x19addf0();
   input += synapse0x19ade30();
   input += synapse0x19ade70();
   input += synapse0x19b4860();
   input += synapse0x19b48a0();
   input += synapse0x19b48e0();
   input += synapse0x19b4920();
   input += synapse0x19b4960();
   input += synapse0x19b49a0();
   input += synapse0x19b49e0();
   input += synapse0x19b4a20();
   input += synapse0x19b4a60();
   input += synapse0x19b4aa0();
   input += synapse0x19b4ae0();
   input += synapse0x19b4b20();
   input += synapse0x19b44a0();
   input += synapse0x19b44e0();
   input += synapse0x19b4c70();
   input += synapse0x19b4cb0();
   input += synapse0x19b4cf0();
   input += synapse0x19b4d30();
   input += synapse0x19b4d70();
   input += synapse0x19b4db0();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19b4310() {
   double input = input0x19b4310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19b4df0() {
   double input = 0.283317;
   input += synapse0x19b5130();
   input += synapse0x19b5170();
   input += synapse0x19b51b0();
   input += synapse0x19b51f0();
   input += synapse0x19b5230();
   input += synapse0x19b5270();
   input += synapse0x19b52b0();
   input += synapse0x19b52f0();
   input += synapse0x19b5330();
   input += synapse0x19b5370();
   input += synapse0x19b53b0();
   input += synapse0x19b53f0();
   input += synapse0x19b5430();
   input += synapse0x19b5470();
   input += synapse0x19b54b0();
   input += synapse0x19b54f0();
   input += synapse0x19b4f80();
   input += synapse0x19b4fc0();
   input += synapse0x19b5640();
   input += synapse0x19b5680();
   input += synapse0x19b56c0();
   input += synapse0x19b5700();
   input += synapse0x19b5740();
   input += synapse0x19b5780();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19b4df0() {
   double input = input0x19b4df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19b57c0() {
   double input = 0.293977;
   input += synapse0x19b5b00();
   input += synapse0x19b5b40();
   input += synapse0x19b5b80();
   input += synapse0x19b5bc0();
   input += synapse0x19b5c00();
   input += synapse0x19b5c40();
   input += synapse0x19b5c80();
   input += synapse0x19b5cc0();
   input += synapse0x19b5d00();
   input += synapse0x19b5d40();
   input += synapse0x19b5d80();
   input += synapse0x19b5dc0();
   input += synapse0x19b5e00();
   input += synapse0x19b5e40();
   input += synapse0x19b5e80();
   input += synapse0x19b5ec0();
   input += synapse0x19b5950();
   input += synapse0x19b5990();
   input += synapse0x19b2720();
   input += synapse0x19b2760();
   input += synapse0x19b27a0();
   input += synapse0x19b27e0();
   input += synapse0x19b2820();
   input += synapse0x19b2860();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19b57c0() {
   double input = input0x19b57c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19b28a0() {
   double input = -0.254079;
   input += synapse0x19b2be0();
   input += synapse0x19b2c20();
   input += synapse0x19b2c60();
   input += synapse0x19b2ca0();
   input += synapse0x19b2ce0();
   input += synapse0x19b2d20();
   input += synapse0x19b2d60();
   input += synapse0x19b2da0();
   input += synapse0x19b2de0();
   input += synapse0x19b2e20();
   input += synapse0x19b2e60();
   input += synapse0x19b2ea0();
   input += synapse0x19b2ee0();
   input += synapse0x19b7020();
   input += synapse0x19b7060();
   input += synapse0x19b70a0();
   input += synapse0x19b2a30();
   input += synapse0x19b2a70();
   input += synapse0x19b71f0();
   input += synapse0x19b7230();
   input += synapse0x19b7270();
   input += synapse0x19b72b0();
   input += synapse0x19b72f0();
   input += synapse0x19b7330();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19b28a0() {
   double input = input0x19b28a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19b7370() {
   double input = 0.407744;
   input += synapse0x19b76b0();
   input += synapse0x19b76f0();
   input += synapse0x19b7730();
   input += synapse0x19b7770();
   input += synapse0x19b77b0();
   input += synapse0x19b77f0();
   input += synapse0x19b7830();
   input += synapse0x19b7870();
   input += synapse0x19b78b0();
   input += synapse0x19b78f0();
   input += synapse0x19b7930();
   input += synapse0x19b7970();
   input += synapse0x19b79b0();
   input += synapse0x19b79f0();
   input += synapse0x19b7a30();
   input += synapse0x19b7a70();
   input += synapse0x19b7500();
   input += synapse0x19b7540();
   input += synapse0x19b7bc0();
   input += synapse0x19b7c00();
   input += synapse0x19b7c40();
   input += synapse0x19b7c80();
   input += synapse0x19b7cc0();
   input += synapse0x19b7d00();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19b7370() {
   double input = input0x19b7370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19b7d40() {
   double input = 2.17839;
   input += synapse0x19b8080();
   input += synapse0x19b80c0();
   input += synapse0x19b8100();
   input += synapse0x19b8140();
   input += synapse0x19b8180();
   input += synapse0x19b81c0();
   input += synapse0x19b8200();
   input += synapse0x19b8240();
   input += synapse0x19b8280();
   input += synapse0x19b82c0();
   input += synapse0x19b8300();
   input += synapse0x19b8340();
   input += synapse0x19b8380();
   input += synapse0x19b83c0();
   input += synapse0x19b8400();
   input += synapse0x19b8440();
   input += synapse0x19b7ed0();
   input += synapse0x19b7f10();
   input += synapse0x19b8590();
   input += synapse0x19b85d0();
   input += synapse0x19b8610();
   input += synapse0x19b8650();
   input += synapse0x19b8690();
   input += synapse0x19b86d0();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19b7d40() {
   double input = input0x19b7d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19b8710() {
   double input = -0.406475;
   input += synapse0x19b8a50();
   input += synapse0x19b8a90();
   input += synapse0x19b8ad0();
   input += synapse0x19b8b10();
   input += synapse0x19b8b50();
   input += synapse0x19b8b90();
   input += synapse0x19b8bd0();
   input += synapse0x19b8c10();
   input += synapse0x19b8c50();
   input += synapse0x19b8c90();
   input += synapse0x19b8cd0();
   input += synapse0x19b8d10();
   input += synapse0x19b8d50();
   input += synapse0x19b8d90();
   input += synapse0x19b8dd0();
   input += synapse0x19b8e10();
   input += synapse0x19b88a0();
   input += synapse0x19b88e0();
   input += synapse0x19b8f60();
   input += synapse0x19b8fa0();
   input += synapse0x19b8fe0();
   input += synapse0x19b9020();
   input += synapse0x19b9060();
   input += synapse0x19b90a0();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19b8710() {
   double input = input0x19b8710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19b90e0() {
   double input = -1.76582;
   input += synapse0x19b9420();
   input += synapse0x19aa780();
   input += synapse0x19aa7c0();
   input += synapse0x19aaac0();
   input += synapse0x19aab00();
   input += synapse0x19aae00();
   input += synapse0x19aae40();
   input += synapse0x19ab140();
   input += synapse0x19ab180();
   input += synapse0x19ab480();
   input += synapse0x19ab4c0();
   input += synapse0x19ab7c0();
   input += synapse0x19ab800();
   input += synapse0x19abb00();
   input += synapse0x19abb40();
   input += synapse0x19abe40();
   input += synapse0x19abe80();
   input += synapse0x19ac180();
   input += synapse0x19ac1c0();
   input += synapse0x19ac4c0();
   input += synapse0x19ac500();
   input += synapse0x19ac800();
   input += synapse0x19ac840();
   input += synapse0x19acb40();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19b90e0() {
   double input = input0x19b90e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19baef0() {
   double input = 1.62734;
   input += synapse0x19acb80();
   input += synapse0x19ad840();
   input += synapse0x19ad880();
   input += synapse0x19b9270();
   input += synapse0x19b92b0();
   input += synapse0x19adb80();
   input += synapse0x19adbc0();
   input += synapse0x175bb50();
   input += synapse0x175bb90();
   input += synapse0x19ae300();
   input += synapse0x19ae340();
   input += synapse0x19ae640();
   input += synapse0x19ae680();
   input += synapse0x19ae980();
   input += synapse0x19ae9c0();
   input += synapse0x19aecc0();
   input += synapse0x19aed00();
   input += synapse0x19af000();
   input += synapse0x19af040();
   input += synapse0x19af340();
   input += synapse0x19af380();
   input += synapse0x19ace80();
   input += synapse0x19acec0();
   input += synapse0x19bb190();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19baef0() {
   double input = input0x19baef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19bb1d0() {
   double input = 0.662284;
   input += synapse0x19bb510();
   input += synapse0x19bb550();
   input += synapse0x19bb590();
   input += synapse0x19bb5d0();
   input += synapse0x19bb610();
   input += synapse0x19bb650();
   input += synapse0x19bb690();
   input += synapse0x19bb6d0();
   input += synapse0x19bb710();
   input += synapse0x19bb750();
   input += synapse0x19bb790();
   input += synapse0x19bb7d0();
   input += synapse0x19bb810();
   input += synapse0x19bb850();
   input += synapse0x19bb890();
   input += synapse0x19bb8d0();
   input += synapse0x19bb360();
   input += synapse0x19bb3a0();
   input += synapse0x19bba20();
   input += synapse0x19bba60();
   input += synapse0x19bbaa0();
   input += synapse0x19bbae0();
   input += synapse0x19bbb20();
   input += synapse0x19bbb60();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19bb1d0() {
   double input = input0x19bb1d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19bbba0() {
   double input = -0.442251;
   input += synapse0x19bbee0();
   input += synapse0x19bbf20();
   input += synapse0x19bbf60();
   input += synapse0x19bbfa0();
   input += synapse0x19bbfe0();
   input += synapse0x19bc020();
   input += synapse0x19bc060();
   input += synapse0x19bc0a0();
   input += synapse0x19bc0e0();
   input += synapse0x19bc120();
   input += synapse0x19bc160();
   input += synapse0x19bc1a0();
   input += synapse0x19bc1e0();
   input += synapse0x19bc220();
   input += synapse0x19bc260();
   input += synapse0x19bc2a0();
   input += synapse0x19bbd30();
   input += synapse0x19bbd70();
   input += synapse0x19bc3f0();
   input += synapse0x19bc430();
   input += synapse0x19bc470();
   input += synapse0x19bc4b0();
   input += synapse0x19bc4f0();
   input += synapse0x19bc530();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19bbba0() {
   double input = input0x19bbba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19bc570() {
   double input = 0.518125;
   input += synapse0x19bc8b0();
   input += synapse0x19bc8f0();
   input += synapse0x19bc930();
   input += synapse0x19bc970();
   input += synapse0x19bc9b0();
   input += synapse0x19bc9f0();
   input += synapse0x19bca30();
   input += synapse0x19bca70();
   input += synapse0x19bcab0();
   input += synapse0x19bcaf0();
   input += synapse0x19bcb30();
   input += synapse0x19bcb70();
   input += synapse0x19bcbb0();
   input += synapse0x19bcbf0();
   input += synapse0x19bcc30();
   input += synapse0x19bcc70();
   input += synapse0x19bc700();
   input += synapse0x19bc740();
   input += synapse0x19bcdc0();
   input += synapse0x19bce00();
   input += synapse0x19bce40();
   input += synapse0x19bce80();
   input += synapse0x19bcec0();
   input += synapse0x19bcf00();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19bc570() {
   double input = input0x19bc570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19bcf40() {
   double input = 0.71139;
   input += synapse0x19bd280();
   input += synapse0x19bd2c0();
   input += synapse0x19bd300();
   input += synapse0x19bd340();
   input += synapse0x19bd380();
   input += synapse0x19bd3c0();
   input += synapse0x19bd400();
   input += synapse0x19bd440();
   input += synapse0x19bd480();
   input += synapse0x19bd4c0();
   input += synapse0x19bd500();
   input += synapse0x19bd540();
   input += synapse0x19bd580();
   input += synapse0x19bd5c0();
   input += synapse0x19bd600();
   input += synapse0x19bd640();
   input += synapse0x19bd0d0();
   input += synapse0x19bd110();
   input += synapse0x19bd790();
   input += synapse0x19bd7d0();
   input += synapse0x19bd810();
   input += synapse0x19bd850();
   input += synapse0x19bd890();
   input += synapse0x19bd8d0();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19bcf40() {
   double input = input0x19bcf40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19bd910() {
   double input = 0.713168;
   input += synapse0x19bdc50();
   input += synapse0x19bdc90();
   input += synapse0x19bdcd0();
   input += synapse0x19bdd10();
   input += synapse0x19bdd50();
   input += synapse0x19bdd90();
   input += synapse0x19bddd0();
   input += synapse0x19bde10();
   input += synapse0x19bde50();
   input += synapse0x19b6010();
   input += synapse0x19b6050();
   input += synapse0x19b6090();
   input += synapse0x19b60d0();
   input += synapse0x19b6110();
   input += synapse0x19b6150();
   input += synapse0x19b6190();
   input += synapse0x19bdaa0();
   input += synapse0x19bdae0();
   input += synapse0x19b62e0();
   input += synapse0x19b6320();
   input += synapse0x19b6360();
   input += synapse0x19b63a0();
   input += synapse0x19b63e0();
   input += synapse0x19b6420();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19bd910() {
   double input = input0x19bd910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19b6460() {
   double input = 0.363674;
   input += synapse0x19b67a0();
   input += synapse0x19b67e0();
   input += synapse0x19b6820();
   input += synapse0x19b6860();
   input += synapse0x19b68a0();
   input += synapse0x19b68e0();
   input += synapse0x19b6920();
   input += synapse0x19b6960();
   input += synapse0x19b69a0();
   input += synapse0x19b69e0();
   input += synapse0x19b6a20();
   input += synapse0x19b6a60();
   input += synapse0x19b6aa0();
   input += synapse0x19b6ae0();
   input += synapse0x19b6b20();
   input += synapse0x19b6b60();
   input += synapse0x19b65f0();
   input += synapse0x19b6630();
   input += synapse0x19b6cb0();
   input += synapse0x19b6cf0();
   input += synapse0x19b6d30();
   input += synapse0x19b6d70();
   input += synapse0x19b6db0();
   input += synapse0x19b6df0();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19b6460() {
   double input = input0x19b6460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19b6e30() {
   double input = 1.67366;
   input += synapse0x19b6fc0();
   input += synapse0x19c0050();
   input += synapse0x19c0090();
   input += synapse0x19c00d0();
   input += synapse0x19c0110();
   input += synapse0x19c0150();
   input += synapse0x19c0190();
   input += synapse0x19c01d0();
   input += synapse0x19c0210();
   input += synapse0x19c0250();
   input += synapse0x19c0290();
   input += synapse0x19c02d0();
   input += synapse0x19c0310();
   input += synapse0x19c0350();
   input += synapse0x19c0390();
   input += synapse0x19c03d0();
   input += synapse0x19bfea0();
   input += synapse0x19bfee0();
   input += synapse0x19c0520();
   input += synapse0x19c0560();
   input += synapse0x19c05a0();
   input += synapse0x19c05e0();
   input += synapse0x19c0620();
   input += synapse0x19c0660();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19b6e30() {
   double input = input0x19b6e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19c06a0() {
   double input = 0.622936;
   input += synapse0x19c09e0();
   input += synapse0x19c0a20();
   input += synapse0x19c0a60();
   input += synapse0x19c0aa0();
   input += synapse0x19c0ae0();
   input += synapse0x19c0b20();
   input += synapse0x19c0b60();
   input += synapse0x19c0ba0();
   input += synapse0x19c0be0();
   input += synapse0x19c0c20();
   input += synapse0x19c0c60();
   input += synapse0x19c0ca0();
   input += synapse0x19c0ce0();
   input += synapse0x19c0d20();
   input += synapse0x19c0d60();
   input += synapse0x19c0da0();
   input += synapse0x19c0830();
   input += synapse0x19c0870();
   input += synapse0x19c0ef0();
   input += synapse0x19c0f30();
   input += synapse0x19c0f70();
   input += synapse0x19c0fb0();
   input += synapse0x19c0ff0();
   input += synapse0x19c1030();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19c06a0() {
   double input = input0x19c06a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19c1070() {
   double input = 0.673613;
   input += synapse0x19c13b0();
   input += synapse0x19c13f0();
   input += synapse0x19c1430();
   input += synapse0x19c1470();
   input += synapse0x19c14b0();
   input += synapse0x19c14f0();
   input += synapse0x19c1530();
   input += synapse0x19c1570();
   input += synapse0x19c15b0();
   input += synapse0x19c15f0();
   input += synapse0x19c1630();
   input += synapse0x19c1670();
   input += synapse0x19c16b0();
   input += synapse0x19c16f0();
   input += synapse0x19c1730();
   input += synapse0x19c1770();
   input += synapse0x19c1200();
   input += synapse0x19c1240();
   input += synapse0x19c18c0();
   input += synapse0x19c1900();
   input += synapse0x19c1940();
   input += synapse0x19c1980();
   input += synapse0x19c19c0();
   input += synapse0x19c1a00();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19c1070() {
   double input = input0x19c1070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19c1a40() {
   double input = -0.0265106;
   input += synapse0x19c1d80();
   input += synapse0x19c1dc0();
   input += synapse0x19c1e00();
   input += synapse0x19c1e40();
   input += synapse0x19c1e80();
   input += synapse0x19c1ec0();
   input += synapse0x19c1f00();
   input += synapse0x19c1f40();
   input += synapse0x19c1f80();
   input += synapse0x19c1fc0();
   input += synapse0x19c2000();
   input += synapse0x19c2040();
   input += synapse0x19c2080();
   input += synapse0x19c20c0();
   input += synapse0x19c2100();
   input += synapse0x19c2140();
   input += synapse0x19c1bd0();
   input += synapse0x19c1c10();
   input += synapse0x19c2290();
   input += synapse0x19c22d0();
   input += synapse0x19c2310();
   input += synapse0x19c2350();
   input += synapse0x19c2390();
   input += synapse0x19c23d0();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19c1a40() {
   double input = input0x19c1a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19c2410() {
   double input = 1.33248;
   input += synapse0x19c2750();
   input += synapse0x19c2790();
   input += synapse0x19c27d0();
   input += synapse0x19c2810();
   input += synapse0x19c2850();
   input += synapse0x19c2890();
   input += synapse0x19c28d0();
   input += synapse0x19c2910();
   input += synapse0x19c2950();
   input += synapse0x19c2990();
   input += synapse0x19c29d0();
   input += synapse0x19c2a10();
   input += synapse0x19c2a50();
   input += synapse0x19c2a90();
   input += synapse0x19c2ad0();
   input += synapse0x19c2b10();
   input += synapse0x19c25a0();
   input += synapse0x19c25e0();
   input += synapse0x19c2c60();
   input += synapse0x19c2ca0();
   input += synapse0x19c2ce0();
   input += synapse0x19c2d20();
   input += synapse0x19c2d60();
   input += synapse0x19c2da0();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19c2410() {
   double input = input0x19c2410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19c2de0() {
   double input = -0.450052;
   input += synapse0x19c3120();
   input += synapse0x19c3160();
   input += synapse0x19c31a0();
   input += synapse0x19c31e0();
   input += synapse0x19c3220();
   input += synapse0x19c3260();
   input += synapse0x19c32a0();
   input += synapse0x19c32e0();
   input += synapse0x19c3320();
   input += synapse0x19c3360();
   input += synapse0x19c33a0();
   input += synapse0x19c33e0();
   input += synapse0x19c3420();
   input += synapse0x19c3460();
   input += synapse0x19c34a0();
   input += synapse0x19c34e0();
   input += synapse0x19c2f70();
   input += synapse0x19c2fb0();
   input += synapse0x19c3630();
   input += synapse0x19c3670();
   input += synapse0x19c36b0();
   input += synapse0x19c36f0();
   input += synapse0x19c3730();
   input += synapse0x19c3770();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19c2de0() {
   double input = input0x19c2de0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19c37b0() {
   double input = 2.50608;
   input += synapse0x19c3af0();
   input += synapse0x19c3b30();
   input += synapse0x19c3b70();
   input += synapse0x19c3bb0();
   input += synapse0x19c3bf0();
   input += synapse0x19c3c30();
   input += synapse0x19c3c70();
   input += synapse0x19c3cb0();
   input += synapse0x19c3cf0();
   input += synapse0x19c3d30();
   input += synapse0x19c3d70();
   input += synapse0x19c3db0();
   input += synapse0x19c3df0();
   input += synapse0x19c3e30();
   input += synapse0x19c3e70();
   input += synapse0x19c3eb0();
   input += synapse0x19c3940();
   input += synapse0x19c3980();
   input += synapse0x19c4000();
   input += synapse0x19c4040();
   input += synapse0x19c4080();
   input += synapse0x19c40c0();
   input += synapse0x19c4100();
   input += synapse0x19c4140();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19c37b0() {
   double input = input0x19c37b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19c4180() {
   double input = -0.311942;
   input += synapse0x19c44c0();
   input += synapse0x19c4500();
   input += synapse0x19c4540();
   input += synapse0x19c4580();
   input += synapse0x19c45c0();
   input += synapse0x19c4600();
   input += synapse0x19c4640();
   input += synapse0x19c4680();
   input += synapse0x19c46c0();
   input += synapse0x19c4700();
   input += synapse0x19c4740();
   input += synapse0x19c4780();
   input += synapse0x19c47c0();
   input += synapse0x19c4800();
   input += synapse0x19c4840();
   input += synapse0x19c4880();
   input += synapse0x19c4310();
   input += synapse0x19c4350();
   input += synapse0x19c49d0();
   input += synapse0x19c4a10();
   input += synapse0x19c4a50();
   input += synapse0x19c4a90();
   input += synapse0x19c4ad0();
   input += synapse0x19c4b10();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19c4180() {
   double input = input0x19c4180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19c4b50() {
   double input = 0.545136;
   input += synapse0x19c4e90();
   input += synapse0x19b9460();
   input += synapse0x19b94a0();
   input += synapse0x19b94e0();
   input += synapse0x19b9730();
   input += synapse0x19b9770();
   input += synapse0x19b97b0();
   input += synapse0x19b9a00();
   input += synapse0x19b9a40();
   input += synapse0x19b9c90();
   input += synapse0x19b9cd0();
   input += synapse0x19b9d10();
   input += synapse0x19b9f60();
   input += synapse0x19b9fa0();
   input += synapse0x19ba1f0();
   input += synapse0x19ba230();
   input += synapse0x19c4ce0();
   input += synapse0x19c4d20();
   input += synapse0x19ba380();
   input += synapse0x19ba890();
   input += synapse0x19ba8d0();
   input += synapse0x19ba910();
   input += synapse0x19bab60();
   input += synapse0x19baba0();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19c4b50() {
   double input = input0x19c4b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19babe0() {
   double input = 1.55093;
   input += synapse0x19ba450();
   input += synapse0x19ba490();
   input += synapse0x19ba4d0();
   input += synapse0x19ba510();
   input += synapse0x19bae90();
   input += synapse0x19c71e0();
   input += synapse0x19c7220();
   input += synapse0x19c7260();
   input += synapse0x19c72a0();
   input += synapse0x19c72e0();
   input += synapse0x19c7320();
   input += synapse0x19c7360();
   input += synapse0x19c73a0();
   input += synapse0x19c73e0();
   input += synapse0x19c7420();
   input += synapse0x19c7460();
   input += synapse0x19bad70();
   input += synapse0x19badb0();
   input += synapse0x19c75b0();
   input += synapse0x19c75f0();
   input += synapse0x19c7630();
   input += synapse0x19c7670();
   input += synapse0x19c76b0();
   input += synapse0x19c76f0();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19babe0() {
   double input = input0x19babe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19c7730() {
   double input = 0.391488;
   input += synapse0x19c7a70();
   input += synapse0x19c7ab0();
   input += synapse0x19c7af0();
   input += synapse0x19c7b30();
   input += synapse0x19c7b70();
   input += synapse0x19c7bb0();
   input += synapse0x19c7bf0();
   input += synapse0x19c7c30();
   input += synapse0x19c7c70();
   input += synapse0x19c7cb0();
   input += synapse0x19c7cf0();
   input += synapse0x19c7d30();
   input += synapse0x19c7d70();
   input += synapse0x19c7db0();
   input += synapse0x19c7df0();
   input += synapse0x19c7e30();
   input += synapse0x19c78c0();
   input += synapse0x19c7900();
   input += synapse0x19c7f80();
   input += synapse0x19c7fc0();
   input += synapse0x19c8000();
   input += synapse0x19c8040();
   input += synapse0x19c8080();
   input += synapse0x19c80c0();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19c7730() {
   double input = input0x19c7730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19c8100() {
   double input = -3.67772;
   input += synapse0x19c8440();
   input += synapse0x19c8480();
   input += synapse0x19c84c0();
   input += synapse0x19c8500();
   input += synapse0x19c8540();
   input += synapse0x19c8580();
   input += synapse0x19c85c0();
   input += synapse0x19c8600();
   input += synapse0x19c8640();
   input += synapse0x19c8680();
   input += synapse0x19c86c0();
   input += synapse0x19c8700();
   input += synapse0x19c8740();
   input += synapse0x19c8780();
   input += synapse0x19c87c0();
   input += synapse0x19c8800();
   input += synapse0x19c8290();
   input += synapse0x19c82d0();
   input += synapse0x19c8950();
   input += synapse0x19c8990();
   input += synapse0x19c89d0();
   input += synapse0x19c8a10();
   input += synapse0x19c8a50();
   input += synapse0x19c8a90();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19c8100() {
   double input = input0x19c8100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19c8ad0() {
   double input = -0.231594;
   input += synapse0x19c8e10();
   input += synapse0x19c8e50();
   input += synapse0x19c8e90();
   input += synapse0x19c8ed0();
   input += synapse0x19c8f10();
   input += synapse0x19c8f50();
   input += synapse0x19c8f90();
   input += synapse0x19c8fd0();
   input += synapse0x19c9010();
   input += synapse0x19c9050();
   input += synapse0x19c9090();
   input += synapse0x19c90d0();
   input += synapse0x19c9110();
   input += synapse0x19c9150();
   input += synapse0x19c9190();
   input += synapse0x19c91d0();
   input += synapse0x19c8c60();
   input += synapse0x19c8ca0();
   input += synapse0x19c9320();
   input += synapse0x19c9360();
   input += synapse0x19c93a0();
   input += synapse0x19c93e0();
   input += synapse0x19c9420();
   input += synapse0x19c9460();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19c8ad0() {
   double input = input0x19c8ad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19c94a0() {
   double input = -0.0910692;
   input += synapse0x19c97e0();
   input += synapse0x19c9820();
   input += synapse0x19c9860();
   input += synapse0x19c98a0();
   input += synapse0x19c98e0();
   input += synapse0x19c9920();
   input += synapse0x19c9960();
   input += synapse0x19c99a0();
   input += synapse0x19c99e0();
   input += synapse0x19c9a20();
   input += synapse0x19c9a60();
   input += synapse0x19c9aa0();
   input += synapse0x19c9ae0();
   input += synapse0x19c9b20();
   input += synapse0x19c9b60();
   input += synapse0x19c9ba0();
   input += synapse0x19c9630();
   input += synapse0x19c9670();
   input += synapse0x19c9cf0();
   input += synapse0x19c9d30();
   input += synapse0x19c9d70();
   input += synapse0x19c9db0();
   input += synapse0x19c9df0();
   input += synapse0x19c9e30();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19c94a0() {
   double input = input0x19c94a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19c9e70() {
   double input = 0.475086;
   input += synapse0x19ca1b0();
   input += synapse0x19ca1f0();
   input += synapse0x19ca230();
   input += synapse0x19ca270();
   input += synapse0x19ca2b0();
   input += synapse0x19ca2f0();
   input += synapse0x19ca330();
   input += synapse0x19ca370();
   input += synapse0x19ca3b0();
   input += synapse0x19ca3f0();
   input += synapse0x19ca430();
   input += synapse0x19ca470();
   input += synapse0x19ca4b0();
   input += synapse0x19ca4f0();
   input += synapse0x19ca530();
   input += synapse0x19ca570();
   input += synapse0x19ca000();
   input += synapse0x19ca040();
   input += synapse0x19ca6c0();
   input += synapse0x19ca700();
   input += synapse0x19ca740();
   input += synapse0x19ca780();
   input += synapse0x19ca7c0();
   input += synapse0x19ca800();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19c9e70() {
   double input = input0x19c9e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19ca840() {
   double input = 0.526445;
   input += synapse0x19cab80();
   input += synapse0x19cabc0();
   input += synapse0x19cac00();
   input += synapse0x19cac40();
   input += synapse0x19cac80();
   input += synapse0x19cacc0();
   input += synapse0x19cad00();
   input += synapse0x19cad40();
   input += synapse0x19cad80();
   input += synapse0x19cadc0();
   input += synapse0x19cae00();
   input += synapse0x19cae40();
   input += synapse0x19cae80();
   input += synapse0x19caec0();
   input += synapse0x19caf00();
   input += synapse0x19caf40();
   input += synapse0x19ca9d0();
   input += synapse0x19caa10();
   input += synapse0x19cb090();
   input += synapse0x19cb0d0();
   input += synapse0x19cb110();
   input += synapse0x19cb150();
   input += synapse0x19cb190();
   input += synapse0x19cb1d0();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19ca840() {
   double input = input0x19ca840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19cb210() {
   double input = -2.513;
   input += synapse0x19cb550();
   input += synapse0x19cb590();
   input += synapse0x19cb5d0();
   input += synapse0x19cb610();
   input += synapse0x19cb650();
   input += synapse0x19cb690();
   input += synapse0x19cb6d0();
   input += synapse0x19cb710();
   input += synapse0x19cb750();
   input += synapse0x19cb790();
   input += synapse0x19cb7d0();
   input += synapse0x19cb810();
   input += synapse0x19cb850();
   input += synapse0x19cb890();
   input += synapse0x19cb8d0();
   input += synapse0x19cb910();
   input += synapse0x19cb3a0();
   input += synapse0x19cb3e0();
   input += synapse0x19cba60();
   input += synapse0x19cbaa0();
   input += synapse0x19cbae0();
   input += synapse0x19cbb20();
   input += synapse0x19cbb60();
   input += synapse0x19cbba0();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19cb210() {
   double input = input0x19cb210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19cbbe0() {
   double input = 0.998961;
   input += synapse0x19b4650();
   input += synapse0x19b4690();
   input += synapse0x19b46d0();
   input += synapse0x19b4710();
   input += synapse0x19b4750();
   input += synapse0x19b4790();
   input += synapse0x19b47d0();
   input += synapse0x19b4810();
   input += synapse0x19cc330();
   input += synapse0x19cc370();
   input += synapse0x19cc3b0();
   input += synapse0x19cc3f0();
   input += synapse0x19cc430();
   input += synapse0x19cc470();
   input += synapse0x19cc4b0();
   input += synapse0x19cc4f0();
   input += synapse0x19cbd70();
   input += synapse0x19cbdb0();
   input += synapse0x19cc640();
   input += synapse0x19cc680();
   input += synapse0x19cc6c0();
   input += synapse0x19cc700();
   input += synapse0x19cc740();
   input += synapse0x19cc780();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19cbbe0() {
   double input = input0x19cbbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19cc7c0() {
   double input = 0.312179;
   input += synapse0x19ccb00();
   input += synapse0x19ccb40();
   input += synapse0x19ccb80();
   input += synapse0x19ccbc0();
   input += synapse0x19ccc00();
   input += synapse0x19ccc40();
   input += synapse0x19ccc80();
   input += synapse0x19cccc0();
   input += synapse0x19ccd00();
   input += synapse0x19ccd40();
   input += synapse0x19ccd80();
   input += synapse0x19ccdc0();
   input += synapse0x19cce00();
   input += synapse0x19cce40();
   input += synapse0x19cce80();
   input += synapse0x19ccec0();
   input += synapse0x19cc950();
   input += synapse0x19cc990();
   input += synapse0x19cd010();
   input += synapse0x19cd050();
   input += synapse0x19cd090();
   input += synapse0x19cd0d0();
   input += synapse0x19cd110();
   input += synapse0x19cd150();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19cc7c0() {
   double input = input0x19cc7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19cd190() {
   double input = 0.424822;
   input += synapse0x19cd4d0();
   input += synapse0x19cd510();
   input += synapse0x19cd550();
   input += synapse0x19cd590();
   input += synapse0x19cd5d0();
   input += synapse0x19cd610();
   input += synapse0x19cd650();
   input += synapse0x19cd690();
   input += synapse0x19cd6d0();
   input += synapse0x19cd710();
   input += synapse0x19cd750();
   input += synapse0x19cd790();
   input += synapse0x19cd7d0();
   input += synapse0x19cd810();
   input += synapse0x19cd850();
   input += synapse0x19cd890();
   input += synapse0x19cd320();
   input += synapse0x19cd360();
   input += synapse0x19bde90();
   input += synapse0x19bded0();
   input += synapse0x19bdf10();
   input += synapse0x19bdf50();
   input += synapse0x19bdf90();
   input += synapse0x19bdfd0();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19cd190() {
   double input = input0x19cd190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19be010() {
   double input = 0.280025;
   input += synapse0x19be350();
   input += synapse0x19be390();
   input += synapse0x19be3d0();
   input += synapse0x19be410();
   input += synapse0x19be450();
   input += synapse0x19be490();
   input += synapse0x19be4d0();
   input += synapse0x19be510();
   input += synapse0x19be550();
   input += synapse0x19be590();
   input += synapse0x19be5d0();
   input += synapse0x19be610();
   input += synapse0x19be650();
   input += synapse0x19be690();
   input += synapse0x19be6d0();
   input += synapse0x19be710();
   input += synapse0x19be1a0();
   input += synapse0x19be1e0();
   input += synapse0x19be860();
   input += synapse0x19be8a0();
   input += synapse0x19be8e0();
   input += synapse0x19be920();
   input += synapse0x19be960();
   input += synapse0x19be9a0();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19be010() {
   double input = input0x19be010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19be9e0() {
   double input = -0.796855;
   input += synapse0x19bed20();
   input += synapse0x19bed60();
   input += synapse0x19beda0();
   input += synapse0x19bede0();
   input += synapse0x19bee20();
   input += synapse0x19bee60();
   input += synapse0x19beea0();
   input += synapse0x19beee0();
   input += synapse0x19bef20();
   input += synapse0x19bef60();
   input += synapse0x19befa0();
   input += synapse0x19befe0();
   input += synapse0x19bf020();
   input += synapse0x19bf060();
   input += synapse0x19bf0a0();
   input += synapse0x19bf0e0();
   input += synapse0x19beb70();
   input += synapse0x19bebb0();
   input += synapse0x19bf230();
   input += synapse0x19bf270();
   input += synapse0x19bf2b0();
   input += synapse0x19bf2f0();
   input += synapse0x19bf330();
   input += synapse0x19bf370();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19be9e0() {
   double input = input0x19be9e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19bf3b0() {
   double input = 0.372211;
   input += synapse0x19bf6f0();
   input += synapse0x19bf730();
   input += synapse0x19bf770();
   input += synapse0x19bf7b0();
   input += synapse0x19bf7f0();
   input += synapse0x19bf830();
   input += synapse0x19bf870();
   input += synapse0x19bf8b0();
   input += synapse0x19bf8f0();
   input += synapse0x19bf930();
   input += synapse0x19bf970();
   input += synapse0x19bf9b0();
   input += synapse0x19bf9f0();
   input += synapse0x19bfa30();
   input += synapse0x19bfa70();
   input += synapse0x19bfab0();
   input += synapse0x19bf540();
   input += synapse0x19bf580();
   input += synapse0x19bfc00();
   input += synapse0x19bfc40();
   input += synapse0x19bfc80();
   input += synapse0x19bfcc0();
   input += synapse0x19bfd00();
   input += synapse0x19bfd40();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19bf3b0() {
   double input = input0x19bf3b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19d19f0() {
   double input = -0.501792;
   input += synapse0x19d1c10();
   input += synapse0x19d1c50();
   input += synapse0x19d1c90();
   input += synapse0x19d1cd0();
   input += synapse0x19d1d10();
   input += synapse0x19d1d50();
   input += synapse0x19d1d90();
   input += synapse0x19d1dd0();
   input += synapse0x19d1e10();
   input += synapse0x19d1e50();
   input += synapse0x19d1e90();
   input += synapse0x19d1ed0();
   input += synapse0x19d1f10();
   input += synapse0x19d1f50();
   input += synapse0x19d1f90();
   input += synapse0x19d1fd0();
   input += synapse0x19bfd80();
   input += synapse0x19bfdc0();
   input += synapse0x19d2120();
   input += synapse0x19d2160();
   input += synapse0x19d21a0();
   input += synapse0x19d21e0();
   input += synapse0x19d2220();
   input += synapse0x19d2260();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19d19f0() {
   double input = input0x19d19f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19d22a0() {
   double input = -0.643678;
   input += synapse0x19d25e0();
   input += synapse0x19d2620();
   input += synapse0x19d2660();
   input += synapse0x19d26a0();
   input += synapse0x19d26e0();
   input += synapse0x19d2720();
   input += synapse0x19d2760();
   input += synapse0x19d27a0();
   input += synapse0x19d27e0();
   input += synapse0x19d2820();
   input += synapse0x19d2860();
   input += synapse0x19d28a0();
   input += synapse0x19d28e0();
   input += synapse0x19d2920();
   input += synapse0x19d2960();
   input += synapse0x19d29a0();
   input += synapse0x19d2430();
   input += synapse0x19d2470();
   input += synapse0x19d2af0();
   input += synapse0x19d2b30();
   input += synapse0x19d2b70();
   input += synapse0x19d2bb0();
   input += synapse0x19d2bf0();
   input += synapse0x19d2c30();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19d22a0() {
   double input = input0x19d22a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19d2c70() {
   double input = 2.88695;
   input += synapse0x19d2fb0();
   input += synapse0x19d2ff0();
   input += synapse0x19d3030();
   input += synapse0x19d3070();
   input += synapse0x19d30b0();
   input += synapse0x19d30f0();
   input += synapse0x19d3130();
   input += synapse0x19d3170();
   input += synapse0x19d31b0();
   input += synapse0x19d31f0();
   input += synapse0x19d3230();
   input += synapse0x19d3270();
   input += synapse0x19d32b0();
   input += synapse0x19d32f0();
   input += synapse0x19d3330();
   input += synapse0x19d3370();
   input += synapse0x19d2e00();
   input += synapse0x19d2e40();
   input += synapse0x19d34c0();
   input += synapse0x19d3500();
   input += synapse0x19d3540();
   input += synapse0x19d3580();
   input += synapse0x19d35c0();
   input += synapse0x19d3600();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19d2c70() {
   double input = input0x19d2c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19d3640() {
   double input = 0.0649708;
   input += synapse0x19d3980();
   input += synapse0x19d39c0();
   input += synapse0x19d3a00();
   input += synapse0x19d3a40();
   input += synapse0x19d3a80();
   input += synapse0x19d3ac0();
   input += synapse0x19d3b00();
   input += synapse0x19d3b40();
   input += synapse0x19d3b80();
   input += synapse0x19d3bc0();
   input += synapse0x19d3c00();
   input += synapse0x19d3c40();
   input += synapse0x19d3c80();
   input += synapse0x19d3cc0();
   input += synapse0x19d3d00();
   input += synapse0x19d3d40();
   input += synapse0x19d37d0();
   input += synapse0x19d3810();
   input += synapse0x19d3e90();
   input += synapse0x19d3ed0();
   input += synapse0x19d3f10();
   input += synapse0x19d3f50();
   input += synapse0x19d3f90();
   input += synapse0x19d3fd0();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19d3640() {
   double input = input0x19d3640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19da840() {
   double input = -0.0492905;
   input += synapse0x19b0570();
   input += synapse0x19b05b0();
   input += synapse0x19b1a80();
   input += synapse0x19b1ac0();
   input += synapse0x19b2450();
   input += synapse0x19b2490();
   input += synapse0x19b3220();
   input += synapse0x19b3260();
   input += synapse0x19b3bf0();
   input += synapse0x19b3c30();
   input += synapse0x19b45c0();
   input += synapse0x19b4600();
   input += synapse0x19b50a0();
   input += synapse0x19b50e0();
   input += synapse0x19b5a70();
   input += synapse0x19b5ab0();
   input += synapse0x19b2b50();
   input += synapse0x19b2b90();
   input += synapse0x19b7620();
   input += synapse0x19b7660();
   input += synapse0x19b7ff0();
   input += synapse0x19b8030();
   input += synapse0x19b89c0();
   input += synapse0x19b8a00();
   input += synapse0x19b9390();
   input += synapse0x19b93d0();
   input += synapse0x19ad500();
   input += synapse0x19ad540();
   input += synapse0x19bb480();
   input += synapse0x19bb4c0();
   input += synapse0x19bbe50();
   input += synapse0x19bbe90();
   input += synapse0x19bc820();
   input += synapse0x19bc860();
   input += synapse0x19bd1f0();
   input += synapse0x19bd230();
   input += synapse0x19bdbc0();
   input += synapse0x19bdc00();
   input += synapse0x19b6710();
   input += synapse0x19b6750();
   input += synapse0x19bffc0();
   input += synapse0x19c0000();
   input += synapse0x19c0950();
   input += synapse0x19c0990();
   input += synapse0x19c1320();
   input += synapse0x19c1360();
   input += synapse0x19c1cf0();
   input += synapse0x19c1d30();
   input += synapse0x19c26c0();
   input += synapse0x19c2700();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19da840() {
   double input = input0x19da840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19dabe0() {
   double input = 0.610388;
   input += synapse0x19c4e00();
   input += synapse0x19c4e40();
   input += synapse0x19ba3c0();
   input += synapse0x19ba400();
   input += synapse0x19c79e0();
   input += synapse0x19c7a20();
   input += synapse0x19c83b0();
   input += synapse0x19c83f0();
   input += synapse0x19c8d80();
   input += synapse0x19c8dc0();
   input += synapse0x19c9750();
   input += synapse0x19c9790();
   input += synapse0x19ca120();
   input += synapse0x19ca160();
   input += synapse0x19caaf0();
   input += synapse0x19cab30();
   input += synapse0x19cb4c0();
   input += synapse0x19cb500();
   input += synapse0x19cbe90();
   input += synapse0x19cbed0();
   input += synapse0x19cca70();
   input += synapse0x19ccab0();
   input += synapse0x19cd440();
   input += synapse0x19cd480();
   input += synapse0x19be2c0();
   input += synapse0x19be300();
   input += synapse0x19bec90();
   input += synapse0x19becd0();
   input += synapse0x19bf660();
   input += synapse0x19bf6a0();
   input += synapse0x19d1b80();
   input += synapse0x19d1bc0();
   input += synapse0x19d2550();
   input += synapse0x19d2590();
   input += synapse0x19d2f20();
   input += synapse0x19d2f60();
   input += synapse0x19d38f0();
   input += synapse0x19d3930();
   input += synapse0x19af7e0();
   input += synapse0x19af820();
   input += synapse0x19c3090();
   input += synapse0x19c30d0();
   input += synapse0x19d4010();
   input += synapse0x19d4050();
   input += synapse0x19d4090();
   input += synapse0x19d40d0();
   input += synapse0x19daf80();
   input += synapse0x19dafc0();
   input += synapse0x19db000();
   input += synapse0x19db040();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19dabe0() {
   double input = input0x19dabe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19db080() {
   double input = 0.417616;
   input += synapse0x19db3c0();
   input += synapse0x19db400();
   input += synapse0x19db440();
   input += synapse0x19db480();
   input += synapse0x19db4c0();
   input += synapse0x19db500();
   input += synapse0x19db540();
   input += synapse0x19db580();
   input += synapse0x19db5c0();
   input += synapse0x19db600();
   input += synapse0x19db640();
   input += synapse0x19db680();
   input += synapse0x19db6c0();
   input += synapse0x19db700();
   input += synapse0x19db740();
   input += synapse0x19db780();
   input += synapse0x19db210();
   input += synapse0x19db250();
   input += synapse0x19db8d0();
   input += synapse0x19db910();
   input += synapse0x19db950();
   input += synapse0x19db990();
   input += synapse0x19db9d0();
   input += synapse0x19dba10();
   input += synapse0x19dba50();
   input += synapse0x19dba90();
   input += synapse0x19dbad0();
   input += synapse0x19dbb10();
   input += synapse0x19dbb50();
   input += synapse0x19dbb90();
   input += synapse0x19dbbd0();
   input += synapse0x19dbc10();
   input += synapse0x19db7c0();
   input += synapse0x19db800();
   input += synapse0x19db840();
   input += synapse0x19db880();
   input += synapse0x19dbe60();
   input += synapse0x19dbea0();
   input += synapse0x19dbee0();
   input += synapse0x19dbf20();
   input += synapse0x19dbf60();
   input += synapse0x19dbfa0();
   input += synapse0x19dbfe0();
   input += synapse0x19dc020();
   input += synapse0x19dc060();
   input += synapse0x19dc0a0();
   input += synapse0x19dc0e0();
   input += synapse0x19dc120();
   input += synapse0x19dc160();
   input += synapse0x19dc1a0();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19db080() {
   double input = input0x19db080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19dc1e0() {
   double input = -0.318894;
   input += synapse0x19dc520();
   input += synapse0x19dc560();
   input += synapse0x19dc5a0();
   input += synapse0x19dc5e0();
   input += synapse0x19dc620();
   input += synapse0x19dc660();
   input += synapse0x19dc6a0();
   input += synapse0x19dc6e0();
   input += synapse0x19dc720();
   input += synapse0x19dc760();
   input += synapse0x19dc7a0();
   input += synapse0x19dc7e0();
   input += synapse0x19dc820();
   input += synapse0x19dc860();
   input += synapse0x19dc8a0();
   input += synapse0x19dc8e0();
   input += synapse0x19dc370();
   input += synapse0x19dc3b0();
   input += synapse0x19dca30();
   input += synapse0x19dca70();
   input += synapse0x19dcab0();
   input += synapse0x19dcaf0();
   input += synapse0x19dcb30();
   input += synapse0x19dcb70();
   input += synapse0x19dcbb0();
   input += synapse0x19dcbf0();
   input += synapse0x19dcc30();
   input += synapse0x19dcc70();
   input += synapse0x19dccb0();
   input += synapse0x19dccf0();
   input += synapse0x19dcd30();
   input += synapse0x19dcd70();
   input += synapse0x19dc920();
   input += synapse0x19dc960();
   input += synapse0x19dc9a0();
   input += synapse0x19dc9e0();
   input += synapse0x19dcfc0();
   input += synapse0x19dd000();
   input += synapse0x19dd040();
   input += synapse0x19dd080();
   input += synapse0x19dd0c0();
   input += synapse0x19dd100();
   input += synapse0x19dd140();
   input += synapse0x19dd180();
   input += synapse0x19dd1c0();
   input += synapse0x19dd200();
   input += synapse0x19dd240();
   input += synapse0x19dd280();
   input += synapse0x19dd2c0();
   input += synapse0x19dd300();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19dc1e0() {
   double input = input0x19dc1e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19dd340() {
   double input = -0.384534;
   input += synapse0x19dd680();
   input += synapse0x19dd6c0();
   input += synapse0x19dd700();
   input += synapse0x19dd740();
   input += synapse0x19dd780();
   input += synapse0x19dd7c0();
   input += synapse0x19dd800();
   input += synapse0x19dd840();
   input += synapse0x19dd880();
   input += synapse0x19dd8c0();
   input += synapse0x19dd900();
   input += synapse0x19dd940();
   input += synapse0x19dd980();
   input += synapse0x19dd9c0();
   input += synapse0x19dda00();
   input += synapse0x19dda40();
   input += synapse0x19dd4d0();
   input += synapse0x19dd510();
   input += synapse0x19ddb90();
   input += synapse0x19ddbd0();
   input += synapse0x19ddc10();
   input += synapse0x19ddc50();
   input += synapse0x19ddc90();
   input += synapse0x19ddcd0();
   input += synapse0x19ddd10();
   input += synapse0x19ddd50();
   input += synapse0x19ddd90();
   input += synapse0x19dddd0();
   input += synapse0x19dde10();
   input += synapse0x19dde50();
   input += synapse0x19dde90();
   input += synapse0x19dded0();
   input += synapse0x19dda80();
   input += synapse0x19ddac0();
   input += synapse0x19ddb00();
   input += synapse0x19ddb40();
   input += synapse0x19de120();
   input += synapse0x19de160();
   input += synapse0x19de1a0();
   input += synapse0x19de1e0();
   input += synapse0x19de220();
   input += synapse0x19de260();
   input += synapse0x19de2a0();
   input += synapse0x19de2e0();
   input += synapse0x19de320();
   input += synapse0x19de360();
   input += synapse0x19de3a0();
   input += synapse0x19de3e0();
   input += synapse0x19de420();
   input += synapse0x19de460();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19dd340() {
   double input = input0x19dd340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdL::input0x19de4a0() {
   double input = 2.88426;
   input += synapse0x19af580();
   input += synapse0x19de6c0();
   input += synapse0x19de700();
   input += synapse0x19de740();
   input += synapse0x19de780();
   return input;
}

double NNfunction_ss_dLdL::neuron0x19de4a0() {
   double input = input0x19de4a0();
   return (input * 1)+0;
}

double NNfunction_ss_dLdL::synapse0x176a3d0() {
   return (neuron0x19aa560()*-0.00552775);
}

double NNfunction_ss_dLdL::synapse0x19aa420() {
   return (neuron0x19aa8a0()*0.0126439);
}

double NNfunction_ss_dLdL::synapse0x19aa460() {
   return (neuron0x19aabe0()*0.0044905);
}

double NNfunction_ss_dLdL::synapse0x19af870() {
   return (neuron0x19aaf20()*7.63372);
}

double NNfunction_ss_dLdL::synapse0x19af8b0() {
   return (neuron0x19ab260()*0.0251589);
}

double NNfunction_ss_dLdL::synapse0x19af8f0() {
   return (neuron0x19ab5a0()*0.00401907);
}

double NNfunction_ss_dLdL::synapse0x19af930() {
   return (neuron0x19ab8e0()*0.0179555);
}

double NNfunction_ss_dLdL::synapse0x19af970() {
   return (neuron0x19abc20()*-0.0283135);
}

double NNfunction_ss_dLdL::synapse0x19af9b0() {
   return (neuron0x19abf60()*0.0168247);
}

double NNfunction_ss_dLdL::synapse0x19af9f0() {
   return (neuron0x19ac2a0()*-0.00310626);
}

double NNfunction_ss_dLdL::synapse0x19afa30() {
   return (neuron0x19ac5e0()*0.0171885);
}

double NNfunction_ss_dLdL::synapse0x19afa70() {
   return (neuron0x19ac920()*0.886521);
}

double NNfunction_ss_dLdL::synapse0x19afab0() {
   return (neuron0x19acc60()*0.0132149);
}

double NNfunction_ss_dLdL::synapse0x19afaf0() {
   return (neuron0x19acfa0()*0.043402);
}

double NNfunction_ss_dLdL::synapse0x19afb30() {
   return (neuron0x19ad2e0()*0.0137225);
}

double NNfunction_ss_dLdL::synapse0x19afb70() {
   return (neuron0x19ad620()*0.0189977);
}

double NNfunction_ss_dLdL::synapse0x19aa390() {
   return (neuron0x19ad960()*0.00519704);
}

double NNfunction_ss_dLdL::synapse0x19aa3d0() {
   return (neuron0x19adec0()*0.02403);
}

double NNfunction_ss_dLdL::synapse0x175bc70() {
   return (neuron0x19ae0e0()*0.0352796);
}

double NNfunction_ss_dLdL::synapse0x175bcb0() {
   return (neuron0x19ae420()*-0.0165094);
}

double NNfunction_ss_dLdL::synapse0x19afdd0() {
   return (neuron0x19ae760()*-0.0260003);
}

double NNfunction_ss_dLdL::synapse0x19afe10() {
   return (neuron0x19aeaa0()*-0.0164182);
}

double NNfunction_ss_dLdL::synapse0x19afe50() {
   return (neuron0x19aede0()*-0.00330168);
}

double NNfunction_ss_dLdL::synapse0x19afe90() {
   return (neuron0x19af120()*0.00694651);
}

double NNfunction_ss_dLdL::synapse0x19b0210() {
   return (neuron0x19aa560()*-0.362461);
}

double NNfunction_ss_dLdL::synapse0x19b0250() {
   return (neuron0x19aa8a0()*0.454248);
}

double NNfunction_ss_dLdL::synapse0x19b0290() {
   return (neuron0x19aabe0()*0.167504);
}

double NNfunction_ss_dLdL::synapse0x19b02d0() {
   return (neuron0x19aaf20()*-1.20876);
}

double NNfunction_ss_dLdL::synapse0x19b0310() {
   return (neuron0x19ab260()*-0.416337);
}

double NNfunction_ss_dLdL::synapse0x19b0350() {
   return (neuron0x19ab5a0()*-0.346223);
}

double NNfunction_ss_dLdL::synapse0x19b0390() {
   return (neuron0x19ab8e0()*-0.388381);
}

double NNfunction_ss_dLdL::synapse0x19b03d0() {
   return (neuron0x19abc20()*-0.397434);
}

double NNfunction_ss_dLdL::synapse0x19b0410() {
   return (neuron0x19abf60()*0.451508);
}

double NNfunction_ss_dLdL::synapse0x19afcc0() {
   return (neuron0x19ac2a0()*0.20514);
}

double NNfunction_ss_dLdL::synapse0x19afd00() {
   return (neuron0x19ac5e0()*0.334479);
}

double NNfunction_ss_dLdL::synapse0x19afd40() {
   return (neuron0x19ac920()*0.0671331);
}

double NNfunction_ss_dLdL::synapse0x19afd80() {
   return (neuron0x19acc60()*-0.252451);
}

double NNfunction_ss_dLdL::synapse0x19b0660() {
   return (neuron0x19acfa0()*0.00277033);
}

double NNfunction_ss_dLdL::synapse0x19b06a0() {
   return (neuron0x19ad2e0()*0.107701);
}

double NNfunction_ss_dLdL::synapse0x19b06e0() {
   return (neuron0x19ad620()*-0.179616);
}

double NNfunction_ss_dLdL::synapse0x19b0060() {
   return (neuron0x19ad960()*0.378777);
}

double NNfunction_ss_dLdL::synapse0x19b00a0() {
   return (neuron0x19adec0()*0.0759908);
}

double NNfunction_ss_dLdL::synapse0x19b0830() {
   return (neuron0x19ae0e0()*-0.668562);
}

double NNfunction_ss_dLdL::synapse0x19b0870() {
   return (neuron0x19ae420()*0.129234);
}

double NNfunction_ss_dLdL::synapse0x19b08b0() {
   return (neuron0x19ae760()*-0.0480642);
}

double NNfunction_ss_dLdL::synapse0x19b08f0() {
   return (neuron0x19aeaa0()*-0.328533);
}

double NNfunction_ss_dLdL::synapse0x19b0930() {
   return (neuron0x19aede0()*0.159515);
}

double NNfunction_ss_dLdL::synapse0x19b0970() {
   return (neuron0x19af120()*0.113019);
}

double NNfunction_ss_dLdL::synapse0x19b0cf0() {
   return (neuron0x19aa560()*-0.089923);
}

double NNfunction_ss_dLdL::synapse0x19b0d30() {
   return (neuron0x19aa8a0()*0.364215);
}

double NNfunction_ss_dLdL::synapse0x19b0d70() {
   return (neuron0x19aabe0()*0.002832);
}

double NNfunction_ss_dLdL::synapse0x19b0db0() {
   return (neuron0x19aaf20()*-0.155834);
}

double NNfunction_ss_dLdL::synapse0x19b0df0() {
   return (neuron0x19ab260()*0.167968);
}

double NNfunction_ss_dLdL::synapse0x19b0e30() {
   return (neuron0x19ab5a0()*0.494388);
}

double NNfunction_ss_dLdL::synapse0x19b0e70() {
   return (neuron0x19ab8e0()*0.0489248);
}

double NNfunction_ss_dLdL::synapse0x19b0eb0() {
   return (neuron0x19abc20()*0.492513);
}

double NNfunction_ss_dLdL::synapse0x19b0ef0() {
   return (neuron0x19abf60()*-1.04809);
}

double NNfunction_ss_dLdL::synapse0x19b0f30() {
   return (neuron0x19ac2a0()*0.203024);
}

double NNfunction_ss_dLdL::synapse0x19b0f70() {
   return (neuron0x19ac5e0()*-0.0908295);
}

double NNfunction_ss_dLdL::synapse0x19b0fb0() {
   return (neuron0x19ac920()*0.492159);
}

double NNfunction_ss_dLdL::synapse0x19b0ff0() {
   return (neuron0x19acc60()*0.333409);
}

double NNfunction_ss_dLdL::synapse0x19b1030() {
   return (neuron0x19acfa0()*0.458844);
}

double NNfunction_ss_dLdL::synapse0x19b1070() {
   return (neuron0x19ad2e0()*-0.155025);
}

double NNfunction_ss_dLdL::synapse0x19b10b0() {
   return (neuron0x19ad620()*-0.276156);
}

double NNfunction_ss_dLdL::synapse0x19b0b40() {
   return (neuron0x19ad960()*0.244954);
}

double NNfunction_ss_dLdL::synapse0x19b0b80() {
   return (neuron0x19adec0()*-0.159409);
}

double NNfunction_ss_dLdL::synapse0x1769ac0() {
   return (neuron0x19ae0e0()*-0.258475);
}

double NNfunction_ss_dLdL::synapse0x1769b00() {
   return (neuron0x19ae420()*-0.0690401);
}

double NNfunction_ss_dLdL::synapse0x19995f0() {
   return (neuron0x19ae760()*0.141093);
}

double NNfunction_ss_dLdL::synapse0x1999630() {
   return (neuron0x19aeaa0()*-0.113572);
}

double NNfunction_ss_dLdL::synapse0x1999670() {
   return (neuron0x19aede0()*0.0893538);
}

double NNfunction_ss_dLdL::synapse0x19aa4a0() {
   return (neuron0x19af120()*0.127547);
}

double NNfunction_ss_dLdL::synapse0x19b0600() {
   return (neuron0x19aa560()*0.109774);
}

double NNfunction_ss_dLdL::synapse0x19aa4e0() {
   return (neuron0x19aa8a0()*0.435481);
}

double NNfunction_ss_dLdL::synapse0x19aa520() {
   return (neuron0x19aabe0()*-0.366816);
}

double NNfunction_ss_dLdL::synapse0x19b1200() {
   return (neuron0x19aaf20()*-0.370349);
}

double NNfunction_ss_dLdL::synapse0x19b1240() {
   return (neuron0x19ab260()*-0.584966);
}

double NNfunction_ss_dLdL::synapse0x19b1280() {
   return (neuron0x19ab5a0()*-0.462411);
}

double NNfunction_ss_dLdL::synapse0x19b12c0() {
   return (neuron0x19ab8e0()*0.373615);
}

double NNfunction_ss_dLdL::synapse0x19b1300() {
   return (neuron0x19abc20()*0.0116597);
}

double NNfunction_ss_dLdL::synapse0x19b1340() {
   return (neuron0x19abf60()*0.266651);
}

double NNfunction_ss_dLdL::synapse0x19b1380() {
   return (neuron0x19ac2a0()*-0.13841);
}

double NNfunction_ss_dLdL::synapse0x19b13c0() {
   return (neuron0x19ac5e0()*0.357053);
}

double NNfunction_ss_dLdL::synapse0x19b1400() {
   return (neuron0x19ac920()*-0.426908);
}

double NNfunction_ss_dLdL::synapse0x19b1440() {
   return (neuron0x19acc60()*-0.616301);
}

double NNfunction_ss_dLdL::synapse0x19b1480() {
   return (neuron0x19acfa0()*0.0183297);
}

double NNfunction_ss_dLdL::synapse0x19b14c0() {
   return (neuron0x19ad2e0()*0.326212);
}

double NNfunction_ss_dLdL::synapse0x19b1500() {
   return (neuron0x19ad620()*-0.286881);
}

double NNfunction_ss_dLdL::synapse0x19b0450() {
   return (neuron0x19ad960()*0.254511);
}

double NNfunction_ss_dLdL::synapse0x19b0490() {
   return (neuron0x19adec0()*-0.338181);
}

double NNfunction_ss_dLdL::synapse0x19b1650() {
   return (neuron0x19ae0e0()*0.442603);
}

double NNfunction_ss_dLdL::synapse0x19b1690() {
   return (neuron0x19ae420()*0.0337346);
}

double NNfunction_ss_dLdL::synapse0x19b16d0() {
   return (neuron0x19ae760()*-0.422572);
}

double NNfunction_ss_dLdL::synapse0x19b1710() {
   return (neuron0x19aeaa0()*-0.0795685);
}

double NNfunction_ss_dLdL::synapse0x19b1750() {
   return (neuron0x19aede0()*0.284367);
}

double NNfunction_ss_dLdL::synapse0x19b1790() {
   return (neuron0x19af120()*-0.24256);
}

double NNfunction_ss_dLdL::synapse0x19b1b10() {
   return (neuron0x19aa560()*0.176018);
}

double NNfunction_ss_dLdL::synapse0x19b1b50() {
   return (neuron0x19aa8a0()*-0.241077);
}

double NNfunction_ss_dLdL::synapse0x19b1b90() {
   return (neuron0x19aabe0()*-0.123677);
}

double NNfunction_ss_dLdL::synapse0x19b1bd0() {
   return (neuron0x19aaf20()*0.310785);
}

double NNfunction_ss_dLdL::synapse0x19b1c10() {
   return (neuron0x19ab260()*-0.0128541);
}

double NNfunction_ss_dLdL::synapse0x19b1c50() {
   return (neuron0x19ab5a0()*-0.264702);
}

double NNfunction_ss_dLdL::synapse0x19b1c90() {
   return (neuron0x19ab8e0()*0.0678605);
}

double NNfunction_ss_dLdL::synapse0x19b1cd0() {
   return (neuron0x19abc20()*0.122394);
}

double NNfunction_ss_dLdL::synapse0x19b1d10() {
   return (neuron0x19abf60()*0.487962);
}

double NNfunction_ss_dLdL::synapse0x19b1d50() {
   return (neuron0x19ac2a0()*0.169923);
}

double NNfunction_ss_dLdL::synapse0x19b1d90() {
   return (neuron0x19ac5e0()*0.480646);
}

double NNfunction_ss_dLdL::synapse0x19b1dd0() {
   return (neuron0x19ac920()*1.06682);
}

double NNfunction_ss_dLdL::synapse0x19b1e10() {
   return (neuron0x19acc60()*0.224919);
}

double NNfunction_ss_dLdL::synapse0x19b1e50() {
   return (neuron0x19acfa0()*0.130331);
}

double NNfunction_ss_dLdL::synapse0x19b1e90() {
   return (neuron0x19ad2e0()*0.053967);
}

double NNfunction_ss_dLdL::synapse0x19b1ed0() {
   return (neuron0x19ad620()*-0.14632);
}

double NNfunction_ss_dLdL::synapse0x19b1960() {
   return (neuron0x19ad960()*0.276263);
}

double NNfunction_ss_dLdL::synapse0x19b19a0() {
   return (neuron0x19adec0()*0.101958);
}

double NNfunction_ss_dLdL::synapse0x19b2020() {
   return (neuron0x19ae0e0()*0.0150267);
}

double NNfunction_ss_dLdL::synapse0x19b2060() {
   return (neuron0x19ae420()*0.0721237);
}

double NNfunction_ss_dLdL::synapse0x19b20a0() {
   return (neuron0x19ae760()*0.100704);
}

double NNfunction_ss_dLdL::synapse0x19b20e0() {
   return (neuron0x19aeaa0()*-0.137494);
}

double NNfunction_ss_dLdL::synapse0x19b2120() {
   return (neuron0x19aede0()*-0.0618516);
}

double NNfunction_ss_dLdL::synapse0x19b2160() {
   return (neuron0x19af120()*-0.13859);
}

double NNfunction_ss_dLdL::synapse0x19b24e0() {
   return (neuron0x19aa560()*-0.203318);
}

double NNfunction_ss_dLdL::synapse0x19b2520() {
   return (neuron0x19aa8a0()*0.402442);
}

double NNfunction_ss_dLdL::synapse0x19b2560() {
   return (neuron0x19aabe0()*0.660894);
}

double NNfunction_ss_dLdL::synapse0x19b25a0() {
   return (neuron0x19aaf20()*-0.43726);
}

double NNfunction_ss_dLdL::synapse0x19b25e0() {
   return (neuron0x19ab260()*0.331618);
}

double NNfunction_ss_dLdL::synapse0x19b2620() {
   return (neuron0x19ab5a0()*-0.241205);
}

double NNfunction_ss_dLdL::synapse0x19b2660() {
   return (neuron0x19ab8e0()*0.240441);
}

double NNfunction_ss_dLdL::synapse0x19b26a0() {
   return (neuron0x19abc20()*-0.12055);
}

double NNfunction_ss_dLdL::synapse0x19b26e0() {
   return (neuron0x19abf60()*-0.546598);
}

double NNfunction_ss_dLdL::synapse0x1769e30() {
   return (neuron0x19ac2a0()*0.48476);
}

double NNfunction_ss_dLdL::synapse0x1769e70() {
   return (neuron0x19ac5e0()*0.0363132);
}

double NNfunction_ss_dLdL::synapse0x1769eb0() {
   return (neuron0x19ac920()*-0.453658);
}

double NNfunction_ss_dLdL::synapse0x1769ef0() {
   return (neuron0x19acc60()*0.119345);
}

double NNfunction_ss_dLdL::synapse0x1769f30() {
   return (neuron0x19acfa0()*-0.259421);
}

double NNfunction_ss_dLdL::synapse0x1769f70() {
   return (neuron0x19ad2e0()*0.185389);
}

double NNfunction_ss_dLdL::synapse0x1769fb0() {
   return (neuron0x19ad620()*0.100958);
}

double NNfunction_ss_dLdL::synapse0x19b2330() {
   return (neuron0x19ad960()*-0.352025);
}

double NNfunction_ss_dLdL::synapse0x19b2370() {
   return (neuron0x19adec0()*0.363585);
}

double NNfunction_ss_dLdL::synapse0x176a100() {
   return (neuron0x19ae0e0()*0.132643);
}

double NNfunction_ss_dLdL::synapse0x176a140() {
   return (neuron0x19ae420()*0.185243);
}

double NNfunction_ss_dLdL::synapse0x176a180() {
   return (neuron0x19ae760()*0.204655);
}

double NNfunction_ss_dLdL::synapse0x176a1c0() {
   return (neuron0x19aeaa0()*-0.0850412);
}

double NNfunction_ss_dLdL::synapse0x176a200() {
   return (neuron0x19aede0()*0.458375);
}

double NNfunction_ss_dLdL::synapse0x19b2f30() {
   return (neuron0x19af120()*0.0168378);
}

double NNfunction_ss_dLdL::synapse0x19b32b0() {
   return (neuron0x19aa560()*0.00860346);
}

double NNfunction_ss_dLdL::synapse0x19b32f0() {
   return (neuron0x19aa8a0()*0.0294632);
}

double NNfunction_ss_dLdL::synapse0x19b3330() {
   return (neuron0x19aabe0()*-0.167027);
}

double NNfunction_ss_dLdL::synapse0x19b3370() {
   return (neuron0x19aaf20()*-0.381071);
}

double NNfunction_ss_dLdL::synapse0x19b33b0() {
   return (neuron0x19ab260()*0.04756);
}

double NNfunction_ss_dLdL::synapse0x19b33f0() {
   return (neuron0x19ab5a0()*-0.0191205);
}

double NNfunction_ss_dLdL::synapse0x19b3430() {
   return (neuron0x19ab8e0()*0.00739992);
}

double NNfunction_ss_dLdL::synapse0x19b3470() {
   return (neuron0x19abc20()*-0.00778469);
}

double NNfunction_ss_dLdL::synapse0x19b34b0() {
   return (neuron0x19abf60()*0.0122624);
}

double NNfunction_ss_dLdL::synapse0x19b34f0() {
   return (neuron0x19ac2a0()*-0.0232609);
}

double NNfunction_ss_dLdL::synapse0x19b3530() {
   return (neuron0x19ac5e0()*-0.024802);
}

double NNfunction_ss_dLdL::synapse0x19b3570() {
   return (neuron0x19ac920()*0.63439);
}

double NNfunction_ss_dLdL::synapse0x19b35b0() {
   return (neuron0x19acc60()*0.0263675);
}

double NNfunction_ss_dLdL::synapse0x19b35f0() {
   return (neuron0x19acfa0()*-0.0584639);
}

double NNfunction_ss_dLdL::synapse0x19b3630() {
   return (neuron0x19ad2e0()*0.0308888);
}

double NNfunction_ss_dLdL::synapse0x19b3670() {
   return (neuron0x19ad620()*0.0420713);
}

double NNfunction_ss_dLdL::synapse0x19b3100() {
   return (neuron0x19ad960()*-0.076185);
}

double NNfunction_ss_dLdL::synapse0x19b3140() {
   return (neuron0x19adec0()*0.0497525);
}

double NNfunction_ss_dLdL::synapse0x19b37c0() {
   return (neuron0x19ae0e0()*-0.0114888);
}

double NNfunction_ss_dLdL::synapse0x19b3800() {
   return (neuron0x19ae420()*-0.011737);
}

double NNfunction_ss_dLdL::synapse0x19b3840() {
   return (neuron0x19ae760()*0.0196882);
}

double NNfunction_ss_dLdL::synapse0x19b3880() {
   return (neuron0x19aeaa0()*0.0226394);
}

double NNfunction_ss_dLdL::synapse0x19b38c0() {
   return (neuron0x19aede0()*0.00533829);
}

double NNfunction_ss_dLdL::synapse0x19b3900() {
   return (neuron0x19af120()*0.0384196);
}

double NNfunction_ss_dLdL::synapse0x19b3c80() {
   return (neuron0x19aa560()*0.158715);
}

double NNfunction_ss_dLdL::synapse0x19b3cc0() {
   return (neuron0x19aa8a0()*-0.296866);
}

double NNfunction_ss_dLdL::synapse0x19b3d00() {
   return (neuron0x19aabe0()*-1.34737);
}

double NNfunction_ss_dLdL::synapse0x19b3d40() {
   return (neuron0x19aaf20()*-0.830363);
}

double NNfunction_ss_dLdL::synapse0x19b3d80() {
   return (neuron0x19ab260()*-0.25861);
}

double NNfunction_ss_dLdL::synapse0x19b3dc0() {
   return (neuron0x19ab5a0()*-0.0138255);
}

double NNfunction_ss_dLdL::synapse0x19b3e00() {
   return (neuron0x19ab8e0()*-0.353542);
}

double NNfunction_ss_dLdL::synapse0x19b3e40() {
   return (neuron0x19abc20()*0.0863251);
}

double NNfunction_ss_dLdL::synapse0x19b3e80() {
   return (neuron0x19abf60()*0.710088);
}

double NNfunction_ss_dLdL::synapse0x19b3ec0() {
   return (neuron0x19ac2a0()*-0.22188);
}

double NNfunction_ss_dLdL::synapse0x19b3f00() {
   return (neuron0x19ac5e0()*0.00698428);
}

double NNfunction_ss_dLdL::synapse0x19b3f40() {
   return (neuron0x19ac920()*0.845013);
}

double NNfunction_ss_dLdL::synapse0x19b3f80() {
   return (neuron0x19acc60()*-0.0178325);
}

double NNfunction_ss_dLdL::synapse0x19b3fc0() {
   return (neuron0x19acfa0()*0.181382);
}

double NNfunction_ss_dLdL::synapse0x19b4000() {
   return (neuron0x19ad2e0()*0.00954179);
}

double NNfunction_ss_dLdL::synapse0x19b4040() {
   return (neuron0x19ad620()*-0.630121);
}

double NNfunction_ss_dLdL::synapse0x19b3ad0() {
   return (neuron0x19ad960()*0.283883);
}

double NNfunction_ss_dLdL::synapse0x19b3b10() {
   return (neuron0x19adec0()*-0.074951);
}

double NNfunction_ss_dLdL::synapse0x19b4190() {
   return (neuron0x19ae0e0()*-0.128382);
}

double NNfunction_ss_dLdL::synapse0x19b41d0() {
   return (neuron0x19ae420()*-0.289324);
}

double NNfunction_ss_dLdL::synapse0x19b4210() {
   return (neuron0x19ae760()*0.112638);
}

double NNfunction_ss_dLdL::synapse0x19b4250() {
   return (neuron0x19aeaa0()*0.036514);
}

double NNfunction_ss_dLdL::synapse0x19b4290() {
   return (neuron0x19aede0()*-0.127089);
}

double NNfunction_ss_dLdL::synapse0x19b42d0() {
   return (neuron0x19af120()*0.0339336);
}

double NNfunction_ss_dLdL::synapse0x19addb0() {
   return (neuron0x19aa560()*-0.0671047);
}

double NNfunction_ss_dLdL::synapse0x19addf0() {
   return (neuron0x19aa8a0()*-0.0260028);
}

double NNfunction_ss_dLdL::synapse0x19ade30() {
   return (neuron0x19aabe0()*-1.25577);
}

double NNfunction_ss_dLdL::synapse0x19ade70() {
   return (neuron0x19aaf20()*-4.00073);
}

double NNfunction_ss_dLdL::synapse0x19b4860() {
   return (neuron0x19ab260()*0.169596);
}

double NNfunction_ss_dLdL::synapse0x19b48a0() {
   return (neuron0x19ab5a0()*-0.062869);
}

double NNfunction_ss_dLdL::synapse0x19b48e0() {
   return (neuron0x19ab8e0()*-0.173482);
}

double NNfunction_ss_dLdL::synapse0x19b4920() {
   return (neuron0x19abc20()*0.0807448);
}

double NNfunction_ss_dLdL::synapse0x19b4960() {
   return (neuron0x19abf60()*-0.145978);
}

double NNfunction_ss_dLdL::synapse0x19b49a0() {
   return (neuron0x19ac2a0()*0.186498);
}

double NNfunction_ss_dLdL::synapse0x19b49e0() {
   return (neuron0x19ac5e0()*-0.245713);
}

double NNfunction_ss_dLdL::synapse0x19b4a20() {
   return (neuron0x19ac920()*0.223062);
}

double NNfunction_ss_dLdL::synapse0x19b4a60() {
   return (neuron0x19acc60()*-0.149318);
}

double NNfunction_ss_dLdL::synapse0x19b4aa0() {
   return (neuron0x19acfa0()*-0.0302828);
}

double NNfunction_ss_dLdL::synapse0x19b4ae0() {
   return (neuron0x19ad2e0()*-0.0413415);
}

double NNfunction_ss_dLdL::synapse0x19b4b20() {
   return (neuron0x19ad620()*0.162171);
}

double NNfunction_ss_dLdL::synapse0x19b44a0() {
   return (neuron0x19ad960()*0.0226965);
}

double NNfunction_ss_dLdL::synapse0x19b44e0() {
   return (neuron0x19adec0()*-0.330371);
}

double NNfunction_ss_dLdL::synapse0x19b4c70() {
   return (neuron0x19ae0e0()*-0.0709335);
}

double NNfunction_ss_dLdL::synapse0x19b4cb0() {
   return (neuron0x19ae420()*-0.147183);
}

double NNfunction_ss_dLdL::synapse0x19b4cf0() {
   return (neuron0x19ae760()*-0.0527794);
}

double NNfunction_ss_dLdL::synapse0x19b4d30() {
   return (neuron0x19aeaa0()*-0.0525399);
}

double NNfunction_ss_dLdL::synapse0x19b4d70() {
   return (neuron0x19aede0()*0.0640865);
}

double NNfunction_ss_dLdL::synapse0x19b4db0() {
   return (neuron0x19af120()*-0.0931676);
}

double NNfunction_ss_dLdL::synapse0x19b5130() {
   return (neuron0x19aa560()*0.0666988);
}

double NNfunction_ss_dLdL::synapse0x19b5170() {
   return (neuron0x19aa8a0()*-0.0792068);
}

double NNfunction_ss_dLdL::synapse0x19b51b0() {
   return (neuron0x19aabe0()*-0.157422);
}

double NNfunction_ss_dLdL::synapse0x19b51f0() {
   return (neuron0x19aaf20()*0.932849);
}

double NNfunction_ss_dLdL::synapse0x19b5230() {
   return (neuron0x19ab260()*-0.0182507);
}

double NNfunction_ss_dLdL::synapse0x19b5270() {
   return (neuron0x19ab5a0()*-0.0330981);
}

double NNfunction_ss_dLdL::synapse0x19b52b0() {
   return (neuron0x19ab8e0()*0.107901);
}

double NNfunction_ss_dLdL::synapse0x19b52f0() {
   return (neuron0x19abc20()*-0.248289);
}

double NNfunction_ss_dLdL::synapse0x19b5330() {
   return (neuron0x19abf60()*-0.512657);
}

double NNfunction_ss_dLdL::synapse0x19b5370() {
   return (neuron0x19ac2a0()*0.326519);
}

double NNfunction_ss_dLdL::synapse0x19b53b0() {
   return (neuron0x19ac5e0()*0.167678);
}

double NNfunction_ss_dLdL::synapse0x19b53f0() {
   return (neuron0x19ac920()*-0.640883);
}

double NNfunction_ss_dLdL::synapse0x19b5430() {
   return (neuron0x19acc60()*0.138615);
}

double NNfunction_ss_dLdL::synapse0x19b5470() {
   return (neuron0x19acfa0()*-0.354572);
}

double NNfunction_ss_dLdL::synapse0x19b54b0() {
   return (neuron0x19ad2e0()*0.121985);
}

double NNfunction_ss_dLdL::synapse0x19b54f0() {
   return (neuron0x19ad620()*-0.449081);
}

double NNfunction_ss_dLdL::synapse0x19b4f80() {
   return (neuron0x19ad960()*0.115139);
}

double NNfunction_ss_dLdL::synapse0x19b4fc0() {
   return (neuron0x19adec0()*-0.459023);
}

double NNfunction_ss_dLdL::synapse0x19b5640() {
   return (neuron0x19ae0e0()*-0.482924);
}

double NNfunction_ss_dLdL::synapse0x19b5680() {
   return (neuron0x19ae420()*-0.199526);
}

double NNfunction_ss_dLdL::synapse0x19b56c0() {
   return (neuron0x19ae760()*-0.00472934);
}

double NNfunction_ss_dLdL::synapse0x19b5700() {
   return (neuron0x19aeaa0()*-0.175544);
}

double NNfunction_ss_dLdL::synapse0x19b5740() {
   return (neuron0x19aede0()*0.11226);
}

double NNfunction_ss_dLdL::synapse0x19b5780() {
   return (neuron0x19af120()*0.360311);
}

double NNfunction_ss_dLdL::synapse0x19b5b00() {
   return (neuron0x19aa560()*0.391802);
}

double NNfunction_ss_dLdL::synapse0x19b5b40() {
   return (neuron0x19aa8a0()*0.651798);
}

double NNfunction_ss_dLdL::synapse0x19b5b80() {
   return (neuron0x19aabe0()*-0.3194);
}

double NNfunction_ss_dLdL::synapse0x19b5bc0() {
   return (neuron0x19aaf20()*0.459856);
}

double NNfunction_ss_dLdL::synapse0x19b5c00() {
   return (neuron0x19ab260()*-0.306509);
}

double NNfunction_ss_dLdL::synapse0x19b5c40() {
   return (neuron0x19ab5a0()*-0.0392547);
}

double NNfunction_ss_dLdL::synapse0x19b5c80() {
   return (neuron0x19ab8e0()*0.025003);
}

double NNfunction_ss_dLdL::synapse0x19b5cc0() {
   return (neuron0x19abc20()*-0.120178);
}

double NNfunction_ss_dLdL::synapse0x19b5d00() {
   return (neuron0x19abf60()*0.669217);
}

double NNfunction_ss_dLdL::synapse0x19b5d40() {
   return (neuron0x19ac2a0()*0.113398);
}

double NNfunction_ss_dLdL::synapse0x19b5d80() {
   return (neuron0x19ac5e0()*-0.573846);
}

double NNfunction_ss_dLdL::synapse0x19b5dc0() {
   return (neuron0x19ac920()*1.05276);
}

double NNfunction_ss_dLdL::synapse0x19b5e00() {
   return (neuron0x19acc60()*-0.302058);
}

double NNfunction_ss_dLdL::synapse0x19b5e40() {
   return (neuron0x19acfa0()*0.290202);
}

double NNfunction_ss_dLdL::synapse0x19b5e80() {
   return (neuron0x19ad2e0()*0.138575);
}

double NNfunction_ss_dLdL::synapse0x19b5ec0() {
   return (neuron0x19ad620()*-0.000683056);
}

double NNfunction_ss_dLdL::synapse0x19b5950() {
   return (neuron0x19ad960()*0.060366);
}

double NNfunction_ss_dLdL::synapse0x19b5990() {
   return (neuron0x19adec0()*-0.282021);
}

double NNfunction_ss_dLdL::synapse0x19b2720() {
   return (neuron0x19ae0e0()*-0.501718);
}

double NNfunction_ss_dLdL::synapse0x19b2760() {
   return (neuron0x19ae420()*0.40563);
}

double NNfunction_ss_dLdL::synapse0x19b27a0() {
   return (neuron0x19ae760()*0.157645);
}

double NNfunction_ss_dLdL::synapse0x19b27e0() {
   return (neuron0x19aeaa0()*0.100542);
}

double NNfunction_ss_dLdL::synapse0x19b2820() {
   return (neuron0x19aede0()*0.119605);
}

double NNfunction_ss_dLdL::synapse0x19b2860() {
   return (neuron0x19af120()*0.209245);
}

double NNfunction_ss_dLdL::synapse0x19b2be0() {
   return (neuron0x19aa560()*-0.266366);
}

double NNfunction_ss_dLdL::synapse0x19b2c20() {
   return (neuron0x19aa8a0()*0.207066);
}

double NNfunction_ss_dLdL::synapse0x19b2c60() {
   return (neuron0x19aabe0()*0.195874);
}

double NNfunction_ss_dLdL::synapse0x19b2ca0() {
   return (neuron0x19aaf20()*3.29064);
}

double NNfunction_ss_dLdL::synapse0x19b2ce0() {
   return (neuron0x19ab260()*0.13636);
}

double NNfunction_ss_dLdL::synapse0x19b2d20() {
   return (neuron0x19ab5a0()*-0.161289);
}

double NNfunction_ss_dLdL::synapse0x19b2d60() {
   return (neuron0x19ab8e0()*-0.022764);
}

double NNfunction_ss_dLdL::synapse0x19b2da0() {
   return (neuron0x19abc20()*0.442998);
}

double NNfunction_ss_dLdL::synapse0x19b2de0() {
   return (neuron0x19abf60()*0.0414326);
}

double NNfunction_ss_dLdL::synapse0x19b2e20() {
   return (neuron0x19ac2a0()*0.180442);
}

double NNfunction_ss_dLdL::synapse0x19b2e60() {
   return (neuron0x19ac5e0()*-0.162294);
}

double NNfunction_ss_dLdL::synapse0x19b2ea0() {
   return (neuron0x19ac920()*-0.161816);
}

double NNfunction_ss_dLdL::synapse0x19b2ee0() {
   return (neuron0x19acc60()*-0.390903);
}

double NNfunction_ss_dLdL::synapse0x19b7020() {
   return (neuron0x19acfa0()*0.0725902);
}

double NNfunction_ss_dLdL::synapse0x19b7060() {
   return (neuron0x19ad2e0()*0.120302);
}

double NNfunction_ss_dLdL::synapse0x19b70a0() {
   return (neuron0x19ad620()*-0.187912);
}

double NNfunction_ss_dLdL::synapse0x19b2a30() {
   return (neuron0x19ad960()*0.0268466);
}

double NNfunction_ss_dLdL::synapse0x19b2a70() {
   return (neuron0x19adec0()*-0.149285);
}

double NNfunction_ss_dLdL::synapse0x19b71f0() {
   return (neuron0x19ae0e0()*-0.199746);
}

double NNfunction_ss_dLdL::synapse0x19b7230() {
   return (neuron0x19ae420()*0.213981);
}

double NNfunction_ss_dLdL::synapse0x19b7270() {
   return (neuron0x19ae760()*0.208344);
}

double NNfunction_ss_dLdL::synapse0x19b72b0() {
   return (neuron0x19aeaa0()*-0.211605);
}

double NNfunction_ss_dLdL::synapse0x19b72f0() {
   return (neuron0x19aede0()*0.134598);
}

double NNfunction_ss_dLdL::synapse0x19b7330() {
   return (neuron0x19af120()*0.0447545);
}

double NNfunction_ss_dLdL::synapse0x19b76b0() {
   return (neuron0x19aa560()*-0.219333);
}

double NNfunction_ss_dLdL::synapse0x19b76f0() {
   return (neuron0x19aa8a0()*-0.282022);
}

double NNfunction_ss_dLdL::synapse0x19b7730() {
   return (neuron0x19aabe0()*-0.320665);
}

double NNfunction_ss_dLdL::synapse0x19b7770() {
   return (neuron0x19aaf20()*0.0522349);
}

double NNfunction_ss_dLdL::synapse0x19b77b0() {
   return (neuron0x19ab260()*-0.345659);
}

double NNfunction_ss_dLdL::synapse0x19b77f0() {
   return (neuron0x19ab5a0()*0.297256);
}

double NNfunction_ss_dLdL::synapse0x19b7830() {
   return (neuron0x19ab8e0()*-0.140297);
}

double NNfunction_ss_dLdL::synapse0x19b7870() {
   return (neuron0x19abc20()*0.184984);
}

double NNfunction_ss_dLdL::synapse0x19b78b0() {
   return (neuron0x19abf60()*0.0909867);
}

double NNfunction_ss_dLdL::synapse0x19b78f0() {
   return (neuron0x19ac2a0()*-0.42121);
}

double NNfunction_ss_dLdL::synapse0x19b7930() {
   return (neuron0x19ac5e0()*-0.281268);
}

double NNfunction_ss_dLdL::synapse0x19b7970() {
   return (neuron0x19ac920()*0.482533);
}

double NNfunction_ss_dLdL::synapse0x19b79b0() {
   return (neuron0x19acc60()*0.269452);
}

double NNfunction_ss_dLdL::synapse0x19b79f0() {
   return (neuron0x19acfa0()*0.129077);
}

double NNfunction_ss_dLdL::synapse0x19b7a30() {
   return (neuron0x19ad2e0()*0.00417017);
}

double NNfunction_ss_dLdL::synapse0x19b7a70() {
   return (neuron0x19ad620()*-0.928178);
}

double NNfunction_ss_dLdL::synapse0x19b7500() {
   return (neuron0x19ad960()*0.253526);
}

double NNfunction_ss_dLdL::synapse0x19b7540() {
   return (neuron0x19adec0()*-0.353051);
}

double NNfunction_ss_dLdL::synapse0x19b7bc0() {
   return (neuron0x19ae0e0()*0.0946101);
}

double NNfunction_ss_dLdL::synapse0x19b7c00() {
   return (neuron0x19ae420()*0.389081);
}

double NNfunction_ss_dLdL::synapse0x19b7c40() {
   return (neuron0x19ae760()*0.146051);
}

double NNfunction_ss_dLdL::synapse0x19b7c80() {
   return (neuron0x19aeaa0()*-0.110502);
}

double NNfunction_ss_dLdL::synapse0x19b7cc0() {
   return (neuron0x19aede0()*0.179366);
}

double NNfunction_ss_dLdL::synapse0x19b7d00() {
   return (neuron0x19af120()*-0.261689);
}

double NNfunction_ss_dLdL::synapse0x19b8080() {
   return (neuron0x19aa560()*-0.00705642);
}

double NNfunction_ss_dLdL::synapse0x19b80c0() {
   return (neuron0x19aa8a0()*-0.00466636);
}

double NNfunction_ss_dLdL::synapse0x19b8100() {
   return (neuron0x19aabe0()*-0.0196652);
}

double NNfunction_ss_dLdL::synapse0x19b8140() {
   return (neuron0x19aaf20()*-1.66762);
}

double NNfunction_ss_dLdL::synapse0x19b8180() {
   return (neuron0x19ab260()*-0.0129722);
}

double NNfunction_ss_dLdL::synapse0x19b81c0() {
   return (neuron0x19ab5a0()*-0.00994833);
}

double NNfunction_ss_dLdL::synapse0x19b8200() {
   return (neuron0x19ab8e0()*-0.00114651);
}

double NNfunction_ss_dLdL::synapse0x19b8240() {
   return (neuron0x19abc20()*-0.00232545);
}

double NNfunction_ss_dLdL::synapse0x19b8280() {
   return (neuron0x19abf60()*-0.0109239);
}

double NNfunction_ss_dLdL::synapse0x19b82c0() {
   return (neuron0x19ac2a0()*0.0130366);
}

double NNfunction_ss_dLdL::synapse0x19b8300() {
   return (neuron0x19ac5e0()*0.00188004);
}

double NNfunction_ss_dLdL::synapse0x19b8340() {
   return (neuron0x19ac920()*0.289524);
}

double NNfunction_ss_dLdL::synapse0x19b8380() {
   return (neuron0x19acc60()*-0.00277887);
}

double NNfunction_ss_dLdL::synapse0x19b83c0() {
   return (neuron0x19acfa0()*0.0212701);
}

double NNfunction_ss_dLdL::synapse0x19b8400() {
   return (neuron0x19ad2e0()*-0.00053492);
}

double NNfunction_ss_dLdL::synapse0x19b8440() {
   return (neuron0x19ad620()*0.0110235);
}

double NNfunction_ss_dLdL::synapse0x19b7ed0() {
   return (neuron0x19ad960()*0.0103652);
}

double NNfunction_ss_dLdL::synapse0x19b7f10() {
   return (neuron0x19adec0()*0.0227159);
}

double NNfunction_ss_dLdL::synapse0x19b8590() {
   return (neuron0x19ae0e0()*0.0164248);
}

double NNfunction_ss_dLdL::synapse0x19b85d0() {
   return (neuron0x19ae420()*-0.00213101);
}

double NNfunction_ss_dLdL::synapse0x19b8610() {
   return (neuron0x19ae760()*-0.0170453);
}

double NNfunction_ss_dLdL::synapse0x19b8650() {
   return (neuron0x19aeaa0()*-0.0173504);
}

double NNfunction_ss_dLdL::synapse0x19b8690() {
   return (neuron0x19aede0()*-0.00679469);
}

double NNfunction_ss_dLdL::synapse0x19b86d0() {
   return (neuron0x19af120()*-0.00154108);
}

double NNfunction_ss_dLdL::synapse0x19b8a50() {
   return (neuron0x19aa560()*0.0136208);
}

double NNfunction_ss_dLdL::synapse0x19b8a90() {
   return (neuron0x19aa8a0()*0.0139027);
}

double NNfunction_ss_dLdL::synapse0x19b8ad0() {
   return (neuron0x19aabe0()*0.0194083);
}

double NNfunction_ss_dLdL::synapse0x19b8b10() {
   return (neuron0x19aaf20()*-0.0407808);
}

double NNfunction_ss_dLdL::synapse0x19b8b50() {
   return (neuron0x19ab260()*0.030178);
}

double NNfunction_ss_dLdL::synapse0x19b8b90() {
   return (neuron0x19ab5a0()*0.013735);
}

double NNfunction_ss_dLdL::synapse0x19b8bd0() {
   return (neuron0x19ab8e0()*0.0309655);
}

double NNfunction_ss_dLdL::synapse0x19b8c10() {
   return (neuron0x19abc20()*0.00544657);
}

double NNfunction_ss_dLdL::synapse0x19b8c50() {
   return (neuron0x19abf60()*0.016362);
}

double NNfunction_ss_dLdL::synapse0x19b8c90() {
   return (neuron0x19ac2a0()*-0.0301209);
}

double NNfunction_ss_dLdL::synapse0x19b8cd0() {
   return (neuron0x19ac5e0()*-0.0352409);
}

double NNfunction_ss_dLdL::synapse0x19b8d10() {
   return (neuron0x19ac920()*1.48665);
}

double NNfunction_ss_dLdL::synapse0x19b8d50() {
   return (neuron0x19acc60()*0.0172464);
}

double NNfunction_ss_dLdL::synapse0x19b8d90() {
   return (neuron0x19acfa0()*-0.00786293);
}

double NNfunction_ss_dLdL::synapse0x19b8dd0() {
   return (neuron0x19ad2e0()*0.0299262);
}

double NNfunction_ss_dLdL::synapse0x19b8e10() {
   return (neuron0x19ad620()*0.0210495);
}

double NNfunction_ss_dLdL::synapse0x19b88a0() {
   return (neuron0x19ad960()*-0.0334333);
}

double NNfunction_ss_dLdL::synapse0x19b88e0() {
   return (neuron0x19adec0()*0.0215287);
}

double NNfunction_ss_dLdL::synapse0x19b8f60() {
   return (neuron0x19ae0e0()*-0.0113255);
}

double NNfunction_ss_dLdL::synapse0x19b8fa0() {
   return (neuron0x19ae420()*-0.0115953);
}

double NNfunction_ss_dLdL::synapse0x19b8fe0() {
   return (neuron0x19ae760()*0.00973956);
}

double NNfunction_ss_dLdL::synapse0x19b9020() {
   return (neuron0x19aeaa0()*0.0151477);
}

double NNfunction_ss_dLdL::synapse0x19b9060() {
   return (neuron0x19aede0()*0.00608583);
}

double NNfunction_ss_dLdL::synapse0x19b90a0() {
   return (neuron0x19af120()*0.0299231);
}

double NNfunction_ss_dLdL::synapse0x19b9420() {
   return (neuron0x19aa560()*-0.0162702);
}

double NNfunction_ss_dLdL::synapse0x19aa780() {
   return (neuron0x19aa8a0()*-0.00164057);
}

double NNfunction_ss_dLdL::synapse0x19aa7c0() {
   return (neuron0x19aabe0()*0.104344);
}

double NNfunction_ss_dLdL::synapse0x19aaac0() {
   return (neuron0x19aaf20()*0.220642);
}

double NNfunction_ss_dLdL::synapse0x19aab00() {
   return (neuron0x19ab260()*0.00927425);
}

double NNfunction_ss_dLdL::synapse0x19aae00() {
   return (neuron0x19ab5a0()*0.0377286);
}

double NNfunction_ss_dLdL::synapse0x19aae40() {
   return (neuron0x19ab8e0()*0.00725186);
}

double NNfunction_ss_dLdL::synapse0x19ab140() {
   return (neuron0x19abc20()*-0.00556838);
}

double NNfunction_ss_dLdL::synapse0x19ab180() {
   return (neuron0x19abf60()*0.0227837);
}

double NNfunction_ss_dLdL::synapse0x19ab480() {
   return (neuron0x19ac2a0()*0.0354564);
}

double NNfunction_ss_dLdL::synapse0x19ab4c0() {
   return (neuron0x19ac5e0()*-0.0160014);
}

double NNfunction_ss_dLdL::synapse0x19ab7c0() {
   return (neuron0x19ac920()*-2.8942);
}

double NNfunction_ss_dLdL::synapse0x19ab800() {
   return (neuron0x19acc60()*0.00778036);
}

double NNfunction_ss_dLdL::synapse0x19abb00() {
   return (neuron0x19acfa0()*-0.0307613);
}

double NNfunction_ss_dLdL::synapse0x19abb40() {
   return (neuron0x19ad2e0()*-0.0110712);
}

double NNfunction_ss_dLdL::synapse0x19abe40() {
   return (neuron0x19ad620()*-0.058249);
}

double NNfunction_ss_dLdL::synapse0x19abe80() {
   return (neuron0x19ad960()*-0.0125248);
}

double NNfunction_ss_dLdL::synapse0x19ac180() {
   return (neuron0x19adec0()*-0.0356477);
}

double NNfunction_ss_dLdL::synapse0x19ac1c0() {
   return (neuron0x19ae0e0()*0.00570247);
}

double NNfunction_ss_dLdL::synapse0x19ac4c0() {
   return (neuron0x19ae420()*0.0104573);
}

double NNfunction_ss_dLdL::synapse0x19ac500() {
   return (neuron0x19ae760()*0.021838);
}

double NNfunction_ss_dLdL::synapse0x19ac800() {
   return (neuron0x19aeaa0()*-0.0149113);
}

double NNfunction_ss_dLdL::synapse0x19ac840() {
   return (neuron0x19aede0()*0.0146136);
}

double NNfunction_ss_dLdL::synapse0x19acb40() {
   return (neuron0x19af120()*-0.025165);
}

double NNfunction_ss_dLdL::synapse0x19acb80() {
   return (neuron0x19aa560()*-0.0108735);
}

double NNfunction_ss_dLdL::synapse0x19ad840() {
   return (neuron0x19aa8a0()*-0.000566608);
}

double NNfunction_ss_dLdL::synapse0x19ad880() {
   return (neuron0x19aabe0()*-0.0149033);
}

double NNfunction_ss_dLdL::synapse0x19b9270() {
   return (neuron0x19aaf20()*2.20678);
}

double NNfunction_ss_dLdL::synapse0x19b92b0() {
   return (neuron0x19ab260()*-0.0154548);
}

double NNfunction_ss_dLdL::synapse0x19adb80() {
   return (neuron0x19ab5a0()*-0.0057804);
}

double NNfunction_ss_dLdL::synapse0x19adbc0() {
   return (neuron0x19ab8e0()*0.0124274);
}

double NNfunction_ss_dLdL::synapse0x175bb50() {
   return (neuron0x19abc20()*0.0269676);
}

double NNfunction_ss_dLdL::synapse0x175bb90() {
   return (neuron0x19abf60()*-0.0150119);
}

double NNfunction_ss_dLdL::synapse0x19ae300() {
   return (neuron0x19ac2a0()*0.0208356);
}

double NNfunction_ss_dLdL::synapse0x19ae340() {
   return (neuron0x19ac5e0()*-8.83322e-05);
}

double NNfunction_ss_dLdL::synapse0x19ae640() {
   return (neuron0x19ac920()*0.236789);
}

double NNfunction_ss_dLdL::synapse0x19ae680() {
   return (neuron0x19acc60()*0.020368);
}

double NNfunction_ss_dLdL::synapse0x19ae980() {
   return (neuron0x19acfa0()*0.0469085);
}

double NNfunction_ss_dLdL::synapse0x19ae9c0() {
   return (neuron0x19ad2e0()*-0.00387297);
}

double NNfunction_ss_dLdL::synapse0x19aecc0() {
   return (neuron0x19ad620()*0.0294813);
}

double NNfunction_ss_dLdL::synapse0x19aed00() {
   return (neuron0x19ad960()*0.0181524);
}

double NNfunction_ss_dLdL::synapse0x19af000() {
   return (neuron0x19adec0()*0.0293501);
}

double NNfunction_ss_dLdL::synapse0x19af040() {
   return (neuron0x19ae0e0()*0.0273982);
}

double NNfunction_ss_dLdL::synapse0x19af340() {
   return (neuron0x19ae420()*-0.00392115);
}

double NNfunction_ss_dLdL::synapse0x19af380() {
   return (neuron0x19ae760()*-0.00117463);
}

double NNfunction_ss_dLdL::synapse0x19ace80() {
   return (neuron0x19aeaa0()*-0.0112093);
}

double NNfunction_ss_dLdL::synapse0x19acec0() {
   return (neuron0x19aede0()*-0.0254303);
}

double NNfunction_ss_dLdL::synapse0x19bb190() {
   return (neuron0x19af120()*-0.00839369);
}

double NNfunction_ss_dLdL::synapse0x19bb510() {
   return (neuron0x19aa560()*0.355582);
}

double NNfunction_ss_dLdL::synapse0x19bb550() {
   return (neuron0x19aa8a0()*-0.16872);
}

double NNfunction_ss_dLdL::synapse0x19bb590() {
   return (neuron0x19aabe0()*0.136489);
}

double NNfunction_ss_dLdL::synapse0x19bb5d0() {
   return (neuron0x19aaf20()*1.38845);
}

double NNfunction_ss_dLdL::synapse0x19bb610() {
   return (neuron0x19ab260()*0.277159);
}

double NNfunction_ss_dLdL::synapse0x19bb650() {
   return (neuron0x19ab5a0()*0.0879531);
}

double NNfunction_ss_dLdL::synapse0x19bb690() {
   return (neuron0x19ab8e0()*0.000970506);
}

double NNfunction_ss_dLdL::synapse0x19bb6d0() {
   return (neuron0x19abc20()*0.528314);
}

double NNfunction_ss_dLdL::synapse0x19bb710() {
   return (neuron0x19abf60()*-0.399733);
}

double NNfunction_ss_dLdL::synapse0x19bb750() {
   return (neuron0x19ac2a0()*-0.303383);
}

double NNfunction_ss_dLdL::synapse0x19bb790() {
   return (neuron0x19ac5e0()*0.206212);
}

double NNfunction_ss_dLdL::synapse0x19bb7d0() {
   return (neuron0x19ac920()*-0.066413);
}

double NNfunction_ss_dLdL::synapse0x19bb810() {
   return (neuron0x19acc60()*0.0864825);
}

double NNfunction_ss_dLdL::synapse0x19bb850() {
   return (neuron0x19acfa0()*-0.205367);
}

double NNfunction_ss_dLdL::synapse0x19bb890() {
   return (neuron0x19ad2e0()*0.0350386);
}

double NNfunction_ss_dLdL::synapse0x19bb8d0() {
   return (neuron0x19ad620()*0.158319);
}

double NNfunction_ss_dLdL::synapse0x19bb360() {
   return (neuron0x19ad960()*0.67806);
}

double NNfunction_ss_dLdL::synapse0x19bb3a0() {
   return (neuron0x19adec0()*-0.260383);
}

double NNfunction_ss_dLdL::synapse0x19bba20() {
   return (neuron0x19ae0e0()*-0.571872);
}

double NNfunction_ss_dLdL::synapse0x19bba60() {
   return (neuron0x19ae420()*-0.153914);
}

double NNfunction_ss_dLdL::synapse0x19bbaa0() {
   return (neuron0x19ae760()*0.0206649);
}

double NNfunction_ss_dLdL::synapse0x19bbae0() {
   return (neuron0x19aeaa0()*0.422772);
}

double NNfunction_ss_dLdL::synapse0x19bbb20() {
   return (neuron0x19aede0()*-0.523428);
}

double NNfunction_ss_dLdL::synapse0x19bbb60() {
   return (neuron0x19af120()*-0.0678557);
}

double NNfunction_ss_dLdL::synapse0x19bbee0() {
   return (neuron0x19aa560()*-0.0758206);
}

double NNfunction_ss_dLdL::synapse0x19bbf20() {
   return (neuron0x19aa8a0()*-0.103753);
}

double NNfunction_ss_dLdL::synapse0x19bbf60() {
   return (neuron0x19aabe0()*0.119212);
}

double NNfunction_ss_dLdL::synapse0x19bbfa0() {
   return (neuron0x19aaf20()*-0.140286);
}

double NNfunction_ss_dLdL::synapse0x19bbfe0() {
   return (neuron0x19ab260()*0.131355);
}

double NNfunction_ss_dLdL::synapse0x19bc020() {
   return (neuron0x19ab5a0()*0.793558);
}

double NNfunction_ss_dLdL::synapse0x19bc060() {
   return (neuron0x19ab8e0()*-0.0251155);
}

double NNfunction_ss_dLdL::synapse0x19bc0a0() {
   return (neuron0x19abc20()*0.676947);
}

double NNfunction_ss_dLdL::synapse0x19bc0e0() {
   return (neuron0x19abf60()*0.643345);
}

double NNfunction_ss_dLdL::synapse0x19bc120() {
   return (neuron0x19ac2a0()*0.624175);
}

double NNfunction_ss_dLdL::synapse0x19bc160() {
   return (neuron0x19ac5e0()*-0.00382324);
}

double NNfunction_ss_dLdL::synapse0x19bc1a0() {
   return (neuron0x19ac920()*0.0343264);
}

double NNfunction_ss_dLdL::synapse0x19bc1e0() {
   return (neuron0x19acc60()*0.501548);
}

double NNfunction_ss_dLdL::synapse0x19bc220() {
   return (neuron0x19acfa0()*-0.162969);
}

double NNfunction_ss_dLdL::synapse0x19bc260() {
   return (neuron0x19ad2e0()*-0.0578723);
}

double NNfunction_ss_dLdL::synapse0x19bc2a0() {
   return (neuron0x19ad620()*-0.103181);
}

double NNfunction_ss_dLdL::synapse0x19bbd30() {
   return (neuron0x19ad960()*-0.114694);
}

double NNfunction_ss_dLdL::synapse0x19bbd70() {
   return (neuron0x19adec0()*-0.557974);
}

double NNfunction_ss_dLdL::synapse0x19bc3f0() {
   return (neuron0x19ae0e0()*0.670468);
}

double NNfunction_ss_dLdL::synapse0x19bc430() {
   return (neuron0x19ae420()*-0.353627);
}

double NNfunction_ss_dLdL::synapse0x19bc470() {
   return (neuron0x19ae760()*0.321304);
}

double NNfunction_ss_dLdL::synapse0x19bc4b0() {
   return (neuron0x19aeaa0()*-0.483577);
}

double NNfunction_ss_dLdL::synapse0x19bc4f0() {
   return (neuron0x19aede0()*-0.246204);
}

double NNfunction_ss_dLdL::synapse0x19bc530() {
   return (neuron0x19af120()*0.245469);
}

double NNfunction_ss_dLdL::synapse0x19bc8b0() {
   return (neuron0x19aa560()*-0.326595);
}

double NNfunction_ss_dLdL::synapse0x19bc8f0() {
   return (neuron0x19aa8a0()*-0.520799);
}

double NNfunction_ss_dLdL::synapse0x19bc930() {
   return (neuron0x19aabe0()*-0.143398);
}

double NNfunction_ss_dLdL::synapse0x19bc970() {
   return (neuron0x19aaf20()*0.0490504);
}

double NNfunction_ss_dLdL::synapse0x19bc9b0() {
   return (neuron0x19ab260()*0.266712);
}

double NNfunction_ss_dLdL::synapse0x19bc9f0() {
   return (neuron0x19ab5a0()*0.0913562);
}

double NNfunction_ss_dLdL::synapse0x19bca30() {
   return (neuron0x19ab8e0()*-0.582892);
}

double NNfunction_ss_dLdL::synapse0x19bca70() {
   return (neuron0x19abc20()*0.145546);
}

double NNfunction_ss_dLdL::synapse0x19bcab0() {
   return (neuron0x19abf60()*0.305207);
}

double NNfunction_ss_dLdL::synapse0x19bcaf0() {
   return (neuron0x19ac2a0()*-0.023151);
}

double NNfunction_ss_dLdL::synapse0x19bcb30() {
   return (neuron0x19ac5e0()*-0.638474);
}

double NNfunction_ss_dLdL::synapse0x19bcb70() {
   return (neuron0x19ac920()*-0.216966);
}

double NNfunction_ss_dLdL::synapse0x19bcbb0() {
   return (neuron0x19acc60()*0.0757065);
}

double NNfunction_ss_dLdL::synapse0x19bcbf0() {
   return (neuron0x19acfa0()*0.242471);
}

double NNfunction_ss_dLdL::synapse0x19bcc30() {
   return (neuron0x19ad2e0()*-0.104737);
}

double NNfunction_ss_dLdL::synapse0x19bcc70() {
   return (neuron0x19ad620()*0.116546);
}

double NNfunction_ss_dLdL::synapse0x19bc700() {
   return (neuron0x19ad960()*-0.200519);
}

double NNfunction_ss_dLdL::synapse0x19bc740() {
   return (neuron0x19adec0()*-0.270177);
}

double NNfunction_ss_dLdL::synapse0x19bcdc0() {
   return (neuron0x19ae0e0()*-0.222674);
}

double NNfunction_ss_dLdL::synapse0x19bce00() {
   return (neuron0x19ae420()*0.445909);
}

double NNfunction_ss_dLdL::synapse0x19bce40() {
   return (neuron0x19ae760()*0.282268);
}

double NNfunction_ss_dLdL::synapse0x19bce80() {
   return (neuron0x19aeaa0()*-0.0962466);
}

double NNfunction_ss_dLdL::synapse0x19bcec0() {
   return (neuron0x19aede0()*0.372309);
}

double NNfunction_ss_dLdL::synapse0x19bcf00() {
   return (neuron0x19af120()*0.0231061);
}

double NNfunction_ss_dLdL::synapse0x19bd280() {
   return (neuron0x19aa560()*0.081872);
}

double NNfunction_ss_dLdL::synapse0x19bd2c0() {
   return (neuron0x19aa8a0()*0.0626774);
}

double NNfunction_ss_dLdL::synapse0x19bd300() {
   return (neuron0x19aabe0()*-0.719848);
}

double NNfunction_ss_dLdL::synapse0x19bd340() {
   return (neuron0x19aaf20()*1.12305);
}

double NNfunction_ss_dLdL::synapse0x19bd380() {
   return (neuron0x19ab260()*0.318429);
}

double NNfunction_ss_dLdL::synapse0x19bd3c0() {
   return (neuron0x19ab5a0()*0.0110287);
}

double NNfunction_ss_dLdL::synapse0x19bd400() {
   return (neuron0x19ab8e0()*0.358262);
}

double NNfunction_ss_dLdL::synapse0x19bd440() {
   return (neuron0x19abc20()*-0.103942);
}

double NNfunction_ss_dLdL::synapse0x19bd480() {
   return (neuron0x19abf60()*-0.0366828);
}

double NNfunction_ss_dLdL::synapse0x19bd4c0() {
   return (neuron0x19ac2a0()*0.113292);
}

double NNfunction_ss_dLdL::synapse0x19bd500() {
   return (neuron0x19ac5e0()*0.0600485);
}

double NNfunction_ss_dLdL::synapse0x19bd540() {
   return (neuron0x19ac920()*-0.703257);
}

double NNfunction_ss_dLdL::synapse0x19bd580() {
   return (neuron0x19acc60()*-0.0984728);
}

double NNfunction_ss_dLdL::synapse0x19bd5c0() {
   return (neuron0x19acfa0()*-0.389112);
}

double NNfunction_ss_dLdL::synapse0x19bd600() {
   return (neuron0x19ad2e0()*0.366346);
}

double NNfunction_ss_dLdL::synapse0x19bd640() {
   return (neuron0x19ad620()*0.91861);
}

double NNfunction_ss_dLdL::synapse0x19bd0d0() {
   return (neuron0x19ad960()*-0.0551814);
}

double NNfunction_ss_dLdL::synapse0x19bd110() {
   return (neuron0x19adec0()*0.0263511);
}

double NNfunction_ss_dLdL::synapse0x19bd790() {
   return (neuron0x19ae0e0()*-0.0706872);
}

double NNfunction_ss_dLdL::synapse0x19bd7d0() {
   return (neuron0x19ae420()*0.175281);
}

double NNfunction_ss_dLdL::synapse0x19bd810() {
   return (neuron0x19ae760()*0.16906);
}

double NNfunction_ss_dLdL::synapse0x19bd850() {
   return (neuron0x19aeaa0()*0.297379);
}

double NNfunction_ss_dLdL::synapse0x19bd890() {
   return (neuron0x19aede0()*-0.040367);
}

double NNfunction_ss_dLdL::synapse0x19bd8d0() {
   return (neuron0x19af120()*0.273431);
}

double NNfunction_ss_dLdL::synapse0x19bdc50() {
   return (neuron0x19aa560()*-0.491331);
}

double NNfunction_ss_dLdL::synapse0x19bdc90() {
   return (neuron0x19aa8a0()*0.0374274);
}

double NNfunction_ss_dLdL::synapse0x19bdcd0() {
   return (neuron0x19aabe0()*-0.769615);
}

double NNfunction_ss_dLdL::synapse0x19bdd10() {
   return (neuron0x19aaf20()*0.627158);
}

double NNfunction_ss_dLdL::synapse0x19bdd50() {
   return (neuron0x19ab260()*-0.135347);
}

double NNfunction_ss_dLdL::synapse0x19bdd90() {
   return (neuron0x19ab5a0()*-0.19857);
}

double NNfunction_ss_dLdL::synapse0x19bddd0() {
   return (neuron0x19ab8e0()*-0.0954212);
}

double NNfunction_ss_dLdL::synapse0x19bde10() {
   return (neuron0x19abc20()*-0.229542);
}

double NNfunction_ss_dLdL::synapse0x19bde50() {
   return (neuron0x19abf60()*0.301508);
}

double NNfunction_ss_dLdL::synapse0x19b6010() {
   return (neuron0x19ac2a0()*-0.00413653);
}

double NNfunction_ss_dLdL::synapse0x19b6050() {
   return (neuron0x19ac5e0()*-0.185726);
}

double NNfunction_ss_dLdL::synapse0x19b6090() {
   return (neuron0x19ac920()*-0.0334768);
}

double NNfunction_ss_dLdL::synapse0x19b60d0() {
   return (neuron0x19acc60()*-0.264239);
}

double NNfunction_ss_dLdL::synapse0x19b6110() {
   return (neuron0x19acfa0()*0.00633917);
}

double NNfunction_ss_dLdL::synapse0x19b6150() {
   return (neuron0x19ad2e0()*-0.0921346);
}

double NNfunction_ss_dLdL::synapse0x19b6190() {
   return (neuron0x19ad620()*-0.417305);
}

double NNfunction_ss_dLdL::synapse0x19bdaa0() {
   return (neuron0x19ad960()*-0.384499);
}

double NNfunction_ss_dLdL::synapse0x19bdae0() {
   return (neuron0x19adec0()*-0.960244);
}

double NNfunction_ss_dLdL::synapse0x19b62e0() {
   return (neuron0x19ae0e0()*0.316798);
}

double NNfunction_ss_dLdL::synapse0x19b6320() {
   return (neuron0x19ae420()*0.777581);
}

double NNfunction_ss_dLdL::synapse0x19b6360() {
   return (neuron0x19ae760()*-0.347437);
}

double NNfunction_ss_dLdL::synapse0x19b63a0() {
   return (neuron0x19aeaa0()*-0.294733);
}

double NNfunction_ss_dLdL::synapse0x19b63e0() {
   return (neuron0x19aede0()*-0.161677);
}

double NNfunction_ss_dLdL::synapse0x19b6420() {
   return (neuron0x19af120()*-0.211491);
}

double NNfunction_ss_dLdL::synapse0x19b67a0() {
   return (neuron0x19aa560()*0.0291396);
}

double NNfunction_ss_dLdL::synapse0x19b67e0() {
   return (neuron0x19aa8a0()*-0.0101257);
}

double NNfunction_ss_dLdL::synapse0x19b6820() {
   return (neuron0x19aabe0()*-0.0426376);
}

double NNfunction_ss_dLdL::synapse0x19b6860() {
   return (neuron0x19aaf20()*-7.55132);
}

double NNfunction_ss_dLdL::synapse0x19b68a0() {
   return (neuron0x19ab260()*0.0206139);
}

double NNfunction_ss_dLdL::synapse0x19b68e0() {
   return (neuron0x19ab5a0()*0.0195095);
}

double NNfunction_ss_dLdL::synapse0x19b6920() {
   return (neuron0x19ab8e0()*-0.0556136);
}

double NNfunction_ss_dLdL::synapse0x19b6960() {
   return (neuron0x19abc20()*0.0134689);
}

double NNfunction_ss_dLdL::synapse0x19b69a0() {
   return (neuron0x19abf60()*0.0165201);
}

double NNfunction_ss_dLdL::synapse0x19b69e0() {
   return (neuron0x19ac2a0()*-0.0261388);
}

double NNfunction_ss_dLdL::synapse0x19b6a20() {
   return (neuron0x19ac5e0()*-0.0219765);
}

double NNfunction_ss_dLdL::synapse0x19b6a60() {
   return (neuron0x19ac920()*0.701182);
}

double NNfunction_ss_dLdL::synapse0x19b6aa0() {
   return (neuron0x19acc60()*-0.025858);
}

double NNfunction_ss_dLdL::synapse0x19b6ae0() {
   return (neuron0x19acfa0()*-0.0408643);
}

double NNfunction_ss_dLdL::synapse0x19b6b20() {
   return (neuron0x19ad2e0()*0.0151664);
}

double NNfunction_ss_dLdL::synapse0x19b6b60() {
   return (neuron0x19ad620()*0.0405396);
}

double NNfunction_ss_dLdL::synapse0x19b65f0() {
   return (neuron0x19ad960()*0.0565943);
}

double NNfunction_ss_dLdL::synapse0x19b6630() {
   return (neuron0x19adec0()*-0.0174618);
}

double NNfunction_ss_dLdL::synapse0x19b6cb0() {
   return (neuron0x19ae0e0()*-0.0104974);
}

double NNfunction_ss_dLdL::synapse0x19b6cf0() {
   return (neuron0x19ae420()*0.042237);
}

double NNfunction_ss_dLdL::synapse0x19b6d30() {
   return (neuron0x19ae760()*0.0465928);
}

double NNfunction_ss_dLdL::synapse0x19b6d70() {
   return (neuron0x19aeaa0()*0.0151195);
}

double NNfunction_ss_dLdL::synapse0x19b6db0() {
   return (neuron0x19aede0()*-0.00350818);
}

double NNfunction_ss_dLdL::synapse0x19b6df0() {
   return (neuron0x19af120()*0.00200534);
}

double NNfunction_ss_dLdL::synapse0x19b6fc0() {
   return (neuron0x19aa560()*-0.463818);
}

double NNfunction_ss_dLdL::synapse0x19c0050() {
   return (neuron0x19aa8a0()*0.000548667);
}

double NNfunction_ss_dLdL::synapse0x19c0090() {
   return (neuron0x19aabe0()*-0.0387778);
}

double NNfunction_ss_dLdL::synapse0x19c00d0() {
   return (neuron0x19aaf20()*0.710601);
}

double NNfunction_ss_dLdL::synapse0x19c0110() {
   return (neuron0x19ab260()*0.20167);
}

double NNfunction_ss_dLdL::synapse0x19c0150() {
   return (neuron0x19ab5a0()*0.16597);
}

double NNfunction_ss_dLdL::synapse0x19c0190() {
   return (neuron0x19ab8e0()*-0.763911);
}

double NNfunction_ss_dLdL::synapse0x19c01d0() {
   return (neuron0x19abc20()*0.318073);
}

double NNfunction_ss_dLdL::synapse0x19c0210() {
   return (neuron0x19abf60()*-0.447421);
}

double NNfunction_ss_dLdL::synapse0x19c0250() {
   return (neuron0x19ac2a0()*0.171685);
}

double NNfunction_ss_dLdL::synapse0x19c0290() {
   return (neuron0x19ac5e0()*0.0769995);
}

double NNfunction_ss_dLdL::synapse0x19c02d0() {
   return (neuron0x19ac920()*0.863835);
}

double NNfunction_ss_dLdL::synapse0x19c0310() {
   return (neuron0x19acc60()*-0.0367063);
}

double NNfunction_ss_dLdL::synapse0x19c0350() {
   return (neuron0x19acfa0()*-0.220472);
}

double NNfunction_ss_dLdL::synapse0x19c0390() {
   return (neuron0x19ad2e0()*-0.0918792);
}

double NNfunction_ss_dLdL::synapse0x19c03d0() {
   return (neuron0x19ad620()*0.771771);
}

double NNfunction_ss_dLdL::synapse0x19bfea0() {
   return (neuron0x19ad960()*-0.194006);
}

double NNfunction_ss_dLdL::synapse0x19bfee0() {
   return (neuron0x19adec0()*0.0674175);
}

double NNfunction_ss_dLdL::synapse0x19c0520() {
   return (neuron0x19ae0e0()*0.351884);
}

double NNfunction_ss_dLdL::synapse0x19c0560() {
   return (neuron0x19ae420()*-0.186109);
}

double NNfunction_ss_dLdL::synapse0x19c05a0() {
   return (neuron0x19ae760()*-0.0220198);
}

double NNfunction_ss_dLdL::synapse0x19c05e0() {
   return (neuron0x19aeaa0()*-0.340276);
}

double NNfunction_ss_dLdL::synapse0x19c0620() {
   return (neuron0x19aede0()*-0.180604);
}

double NNfunction_ss_dLdL::synapse0x19c0660() {
   return (neuron0x19af120()*0.0656124);
}

double NNfunction_ss_dLdL::synapse0x19c09e0() {
   return (neuron0x19aa560()*0.889649);
}

double NNfunction_ss_dLdL::synapse0x19c0a20() {
   return (neuron0x19aa8a0()*0.20665);
}

double NNfunction_ss_dLdL::synapse0x19c0a60() {
   return (neuron0x19aabe0()*-0.556076);
}

double NNfunction_ss_dLdL::synapse0x19c0aa0() {
   return (neuron0x19aaf20()*0.394096);
}

double NNfunction_ss_dLdL::synapse0x19c0ae0() {
   return (neuron0x19ab260()*0.293419);
}

double NNfunction_ss_dLdL::synapse0x19c0b20() {
   return (neuron0x19ab5a0()*-0.223104);
}

double NNfunction_ss_dLdL::synapse0x19c0b60() {
   return (neuron0x19ab8e0()*-0.243542);
}

double NNfunction_ss_dLdL::synapse0x19c0ba0() {
   return (neuron0x19abc20()*-0.4421);
}

double NNfunction_ss_dLdL::synapse0x19c0be0() {
   return (neuron0x19abf60()*-0.73169);
}

double NNfunction_ss_dLdL::synapse0x19c0c20() {
   return (neuron0x19ac2a0()*0.111325);
}

double NNfunction_ss_dLdL::synapse0x19c0c60() {
   return (neuron0x19ac5e0()*0.628872);
}

double NNfunction_ss_dLdL::synapse0x19c0ca0() {
   return (neuron0x19ac920()*0.299221);
}

double NNfunction_ss_dLdL::synapse0x19c0ce0() {
   return (neuron0x19acc60()*-0.228818);
}

double NNfunction_ss_dLdL::synapse0x19c0d20() {
   return (neuron0x19acfa0()*0.148559);
}

double NNfunction_ss_dLdL::synapse0x19c0d60() {
   return (neuron0x19ad2e0()*-0.483934);
}

double NNfunction_ss_dLdL::synapse0x19c0da0() {
   return (neuron0x19ad620()*-0.109246);
}

double NNfunction_ss_dLdL::synapse0x19c0830() {
   return (neuron0x19ad960()*-0.623793);
}

double NNfunction_ss_dLdL::synapse0x19c0870() {
   return (neuron0x19adec0()*0.212901);
}

double NNfunction_ss_dLdL::synapse0x19c0ef0() {
   return (neuron0x19ae0e0()*0.168185);
}

double NNfunction_ss_dLdL::synapse0x19c0f30() {
   return (neuron0x19ae420()*-0.0330017);
}

double NNfunction_ss_dLdL::synapse0x19c0f70() {
   return (neuron0x19ae760()*0.215873);
}

double NNfunction_ss_dLdL::synapse0x19c0fb0() {
   return (neuron0x19aeaa0()*-0.504636);
}

double NNfunction_ss_dLdL::synapse0x19c0ff0() {
   return (neuron0x19aede0()*0.51792);
}

double NNfunction_ss_dLdL::synapse0x19c1030() {
   return (neuron0x19af120()*-0.0817081);
}

double NNfunction_ss_dLdL::synapse0x19c13b0() {
   return (neuron0x19aa560()*-0.17456);
}

double NNfunction_ss_dLdL::synapse0x19c13f0() {
   return (neuron0x19aa8a0()*-0.553969);
}

double NNfunction_ss_dLdL::synapse0x19c1430() {
   return (neuron0x19aabe0()*-0.243081);
}

double NNfunction_ss_dLdL::synapse0x19c1470() {
   return (neuron0x19aaf20()*-1.69367);
}

double NNfunction_ss_dLdL::synapse0x19c14b0() {
   return (neuron0x19ab260()*0.0353815);
}

double NNfunction_ss_dLdL::synapse0x19c14f0() {
   return (neuron0x19ab5a0()*0.278419);
}

double NNfunction_ss_dLdL::synapse0x19c1530() {
   return (neuron0x19ab8e0()*-0.128336);
}

double NNfunction_ss_dLdL::synapse0x19c1570() {
   return (neuron0x19abc20()*0.118446);
}

double NNfunction_ss_dLdL::synapse0x19c15b0() {
   return (neuron0x19abf60()*0.139955);
}

double NNfunction_ss_dLdL::synapse0x19c15f0() {
   return (neuron0x19ac2a0()*0.114722);
}

double NNfunction_ss_dLdL::synapse0x19c1630() {
   return (neuron0x19ac5e0()*0.0788837);
}

double NNfunction_ss_dLdL::synapse0x19c1670() {
   return (neuron0x19ac920()*-0.0961283);
}

double NNfunction_ss_dLdL::synapse0x19c16b0() {
   return (neuron0x19acc60()*-0.879856);
}

double NNfunction_ss_dLdL::synapse0x19c16f0() {
   return (neuron0x19acfa0()*-0.310815);
}

double NNfunction_ss_dLdL::synapse0x19c1730() {
   return (neuron0x19ad2e0()*0.495212);
}

double NNfunction_ss_dLdL::synapse0x19c1770() {
   return (neuron0x19ad620()*-0.191069);
}

double NNfunction_ss_dLdL::synapse0x19c1200() {
   return (neuron0x19ad960()*-0.327605);
}

double NNfunction_ss_dLdL::synapse0x19c1240() {
   return (neuron0x19adec0()*0.0756915);
}

double NNfunction_ss_dLdL::synapse0x19c18c0() {
   return (neuron0x19ae0e0()*0.476089);
}

double NNfunction_ss_dLdL::synapse0x19c1900() {
   return (neuron0x19ae420()*0.431151);
}

double NNfunction_ss_dLdL::synapse0x19c1940() {
   return (neuron0x19ae760()*-0.0149064);
}

double NNfunction_ss_dLdL::synapse0x19c1980() {
   return (neuron0x19aeaa0()*-0.408172);
}

double NNfunction_ss_dLdL::synapse0x19c19c0() {
   return (neuron0x19aede0()*-0.433169);
}

double NNfunction_ss_dLdL::synapse0x19c1a00() {
   return (neuron0x19af120()*0.569076);
}

double NNfunction_ss_dLdL::synapse0x19c1d80() {
   return (neuron0x19aa560()*0.0212306);
}

double NNfunction_ss_dLdL::synapse0x19c1dc0() {
   return (neuron0x19aa8a0()*-0.264645);
}

double NNfunction_ss_dLdL::synapse0x19c1e00() {
   return (neuron0x19aabe0()*0.163425);
}

double NNfunction_ss_dLdL::synapse0x19c1e40() {
   return (neuron0x19aaf20()*0.133164);
}

double NNfunction_ss_dLdL::synapse0x19c1e80() {
   return (neuron0x19ab260()*-0.0797061);
}

double NNfunction_ss_dLdL::synapse0x19c1ec0() {
   return (neuron0x19ab5a0()*-0.0823276);
}

double NNfunction_ss_dLdL::synapse0x19c1f00() {
   return (neuron0x19ab8e0()*0.475672);
}

double NNfunction_ss_dLdL::synapse0x19c1f40() {
   return (neuron0x19abc20()*0.096019);
}

double NNfunction_ss_dLdL::synapse0x19c1f80() {
   return (neuron0x19abf60()*-0.0397732);
}

double NNfunction_ss_dLdL::synapse0x19c1fc0() {
   return (neuron0x19ac2a0()*1.01561);
}

double NNfunction_ss_dLdL::synapse0x19c2000() {
   return (neuron0x19ac5e0()*-0.17412);
}

double NNfunction_ss_dLdL::synapse0x19c2040() {
   return (neuron0x19ac920()*0.331343);
}

double NNfunction_ss_dLdL::synapse0x19c2080() {
   return (neuron0x19acc60()*0.0849125);
}

double NNfunction_ss_dLdL::synapse0x19c20c0() {
   return (neuron0x19acfa0()*0.00332169);
}

double NNfunction_ss_dLdL::synapse0x19c2100() {
   return (neuron0x19ad2e0()*-0.524899);
}

double NNfunction_ss_dLdL::synapse0x19c2140() {
   return (neuron0x19ad620()*0.0212867);
}

double NNfunction_ss_dLdL::synapse0x19c1bd0() {
   return (neuron0x19ad960()*-0.484299);
}

double NNfunction_ss_dLdL::synapse0x19c1c10() {
   return (neuron0x19adec0()*0.738228);
}

double NNfunction_ss_dLdL::synapse0x19c2290() {
   return (neuron0x19ae0e0()*0.314508);
}

double NNfunction_ss_dLdL::synapse0x19c22d0() {
   return (neuron0x19ae420()*0.0301498);
}

double NNfunction_ss_dLdL::synapse0x19c2310() {
   return (neuron0x19ae760()*-0.379126);
}

double NNfunction_ss_dLdL::synapse0x19c2350() {
   return (neuron0x19aeaa0()*-0.609019);
}

double NNfunction_ss_dLdL::synapse0x19c2390() {
   return (neuron0x19aede0()*0.608411);
}

double NNfunction_ss_dLdL::synapse0x19c23d0() {
   return (neuron0x19af120()*-0.161559);
}

double NNfunction_ss_dLdL::synapse0x19c2750() {
   return (neuron0x19aa560()*0.020181);
}

double NNfunction_ss_dLdL::synapse0x19c2790() {
   return (neuron0x19aa8a0()*-0.0192776);
}

double NNfunction_ss_dLdL::synapse0x19c27d0() {
   return (neuron0x19aabe0()*0.424535);
}

double NNfunction_ss_dLdL::synapse0x19c2810() {
   return (neuron0x19aaf20()*0.0018216);
}

double NNfunction_ss_dLdL::synapse0x19c2850() {
   return (neuron0x19ab260()*0.0228679);
}

double NNfunction_ss_dLdL::synapse0x19c2890() {
   return (neuron0x19ab5a0()*0.0134747);
}

double NNfunction_ss_dLdL::synapse0x19c28d0() {
   return (neuron0x19ab8e0()*0.0399923);
}

double NNfunction_ss_dLdL::synapse0x19c2910() {
   return (neuron0x19abc20()*-0.00236218);
}

double NNfunction_ss_dLdL::synapse0x19c2950() {
   return (neuron0x19abf60()*-0.0537188);
}

double NNfunction_ss_dLdL::synapse0x19c2990() {
   return (neuron0x19ac2a0()*-0.0462583);
}

double NNfunction_ss_dLdL::synapse0x19c29d0() {
   return (neuron0x19ac5e0()*-0.0488756);
}

double NNfunction_ss_dLdL::synapse0x19c2a10() {
   return (neuron0x19ac920()*-0.527044);
}

double NNfunction_ss_dLdL::synapse0x19c2a50() {
   return (neuron0x19acc60()*-0.0403311);
}

double NNfunction_ss_dLdL::synapse0x19c2a90() {
   return (neuron0x19acfa0()*-0.00310508);
}

double NNfunction_ss_dLdL::synapse0x19c2ad0() {
   return (neuron0x19ad2e0()*-0.0186857);
}

double NNfunction_ss_dLdL::synapse0x19c2b10() {
   return (neuron0x19ad620()*-0.043993);
}

double NNfunction_ss_dLdL::synapse0x19c25a0() {
   return (neuron0x19ad960()*0.00747875);
}

double NNfunction_ss_dLdL::synapse0x19c25e0() {
   return (neuron0x19adec0()*-0.0476944);
}

double NNfunction_ss_dLdL::synapse0x19c2c60() {
   return (neuron0x19ae0e0()*-0.00973344);
}

double NNfunction_ss_dLdL::synapse0x19c2ca0() {
   return (neuron0x19ae420()*-0.0329544);
}

double NNfunction_ss_dLdL::synapse0x19c2ce0() {
   return (neuron0x19ae760()*-0.00351665);
}

double NNfunction_ss_dLdL::synapse0x19c2d20() {
   return (neuron0x19aeaa0()*-0.0108075);
}

double NNfunction_ss_dLdL::synapse0x19c2d60() {
   return (neuron0x19aede0()*0.0207015);
}

double NNfunction_ss_dLdL::synapse0x19c2da0() {
   return (neuron0x19af120()*0.00118513);
}

double NNfunction_ss_dLdL::synapse0x19c3120() {
   return (neuron0x19aa560()*-0.0625571);
}

double NNfunction_ss_dLdL::synapse0x19c3160() {
   return (neuron0x19aa8a0()*0.0500334);
}

double NNfunction_ss_dLdL::synapse0x19c31a0() {
   return (neuron0x19aabe0()*-0.332065);
}

double NNfunction_ss_dLdL::synapse0x19c31e0() {
   return (neuron0x19aaf20()*0.832439);
}

double NNfunction_ss_dLdL::synapse0x19c3220() {
   return (neuron0x19ab260()*0.480149);
}

double NNfunction_ss_dLdL::synapse0x19c3260() {
   return (neuron0x19ab5a0()*0.0183666);
}

double NNfunction_ss_dLdL::synapse0x19c32a0() {
   return (neuron0x19ab8e0()*-0.0295539);
}

double NNfunction_ss_dLdL::synapse0x19c32e0() {
   return (neuron0x19abc20()*-0.00624962);
}

double NNfunction_ss_dLdL::synapse0x19c3320() {
   return (neuron0x19abf60()*-0.625217);
}

double NNfunction_ss_dLdL::synapse0x19c3360() {
   return (neuron0x19ac2a0()*-0.455713);
}

double NNfunction_ss_dLdL::synapse0x19c33a0() {
   return (neuron0x19ac5e0()*0.0161487);
}

double NNfunction_ss_dLdL::synapse0x19c33e0() {
   return (neuron0x19ac920()*-0.829696);
}

double NNfunction_ss_dLdL::synapse0x19c3420() {
   return (neuron0x19acc60()*-0.249572);
}

double NNfunction_ss_dLdL::synapse0x19c3460() {
   return (neuron0x19acfa0()*0.120928);
}

double NNfunction_ss_dLdL::synapse0x19c34a0() {
   return (neuron0x19ad2e0()*0.78096);
}

double NNfunction_ss_dLdL::synapse0x19c34e0() {
   return (neuron0x19ad620()*-0.188925);
}

double NNfunction_ss_dLdL::synapse0x19c2f70() {
   return (neuron0x19ad960()*-0.65469);
}

double NNfunction_ss_dLdL::synapse0x19c2fb0() {
   return (neuron0x19adec0()*0.0680043);
}

double NNfunction_ss_dLdL::synapse0x19c3630() {
   return (neuron0x19ae0e0()*0.614212);
}

double NNfunction_ss_dLdL::synapse0x19c3670() {
   return (neuron0x19ae420()*0.345668);
}

double NNfunction_ss_dLdL::synapse0x19c36b0() {
   return (neuron0x19ae760()*-0.404277);
}

double NNfunction_ss_dLdL::synapse0x19c36f0() {
   return (neuron0x19aeaa0()*0.150291);
}

double NNfunction_ss_dLdL::synapse0x19c3730() {
   return (neuron0x19aede0()*0.40337);
}

double NNfunction_ss_dLdL::synapse0x19c3770() {
   return (neuron0x19af120()*0.0974562);
}

double NNfunction_ss_dLdL::synapse0x19c3af0() {
   return (neuron0x19aa560()*-0.0127003);
}

double NNfunction_ss_dLdL::synapse0x19c3b30() {
   return (neuron0x19aa8a0()*0.00763803);
}

double NNfunction_ss_dLdL::synapse0x19c3b70() {
   return (neuron0x19aabe0()*0.0310128);
}

double NNfunction_ss_dLdL::synapse0x19c3bb0() {
   return (neuron0x19aaf20()*-0.116122);
}

double NNfunction_ss_dLdL::synapse0x19c3bf0() {
   return (neuron0x19ab260()*-0.00662465);
}

double NNfunction_ss_dLdL::synapse0x19c3c30() {
   return (neuron0x19ab5a0()*0.00203381);
}

double NNfunction_ss_dLdL::synapse0x19c3c70() {
   return (neuron0x19ab8e0()*-0.00752836);
}

double NNfunction_ss_dLdL::synapse0x19c3cb0() {
   return (neuron0x19abc20()*-0.00394903);
}

double NNfunction_ss_dLdL::synapse0x19c3cf0() {
   return (neuron0x19abf60()*0.0971362);
}

double NNfunction_ss_dLdL::synapse0x19c3d30() {
   return (neuron0x19ac2a0()*0.0681726);
}

double NNfunction_ss_dLdL::synapse0x19c3d70() {
   return (neuron0x19ac5e0()*0.00716599);
}

double NNfunction_ss_dLdL::synapse0x19c3db0() {
   return (neuron0x19ac920()*-0.742278);
}

double NNfunction_ss_dLdL::synapse0x19c3df0() {
   return (neuron0x19acc60()*-0.0174358);
}

double NNfunction_ss_dLdL::synapse0x19c3e30() {
   return (neuron0x19acfa0()*-0.00372431);
}

double NNfunction_ss_dLdL::synapse0x19c3e70() {
   return (neuron0x19ad2e0()*0.0045072);
}

double NNfunction_ss_dLdL::synapse0x19c3eb0() {
   return (neuron0x19ad620()*-0.0161288);
}

double NNfunction_ss_dLdL::synapse0x19c3940() {
   return (neuron0x19ad960()*-0.0118766);
}

double NNfunction_ss_dLdL::synapse0x19c3980() {
   return (neuron0x19adec0()*0.0041147);
}

double NNfunction_ss_dLdL::synapse0x19c4000() {
   return (neuron0x19ae0e0()*-0.00417908);
}

double NNfunction_ss_dLdL::synapse0x19c4040() {
   return (neuron0x19ae420()*0.0116177);
}

double NNfunction_ss_dLdL::synapse0x19c4080() {
   return (neuron0x19ae760()*0.0250625);
}

double NNfunction_ss_dLdL::synapse0x19c40c0() {
   return (neuron0x19aeaa0()*-0.00288171);
}

double NNfunction_ss_dLdL::synapse0x19c4100() {
   return (neuron0x19aede0()*-0.000352067);
}

double NNfunction_ss_dLdL::synapse0x19c4140() {
   return (neuron0x19af120()*-0.00583194);
}

double NNfunction_ss_dLdL::synapse0x19c44c0() {
   return (neuron0x19aa560()*0.22533);
}

double NNfunction_ss_dLdL::synapse0x19c4500() {
   return (neuron0x19aa8a0()*-0.202036);
}

double NNfunction_ss_dLdL::synapse0x19c4540() {
   return (neuron0x19aabe0()*0.523603);
}

double NNfunction_ss_dLdL::synapse0x19c4580() {
   return (neuron0x19aaf20()*-0.634745);
}

double NNfunction_ss_dLdL::synapse0x19c45c0() {
   return (neuron0x19ab260()*-0.422508);
}

double NNfunction_ss_dLdL::synapse0x19c4600() {
   return (neuron0x19ab5a0()*-0.613806);
}

double NNfunction_ss_dLdL::synapse0x19c4640() {
   return (neuron0x19ab8e0()*0.211505);
}

double NNfunction_ss_dLdL::synapse0x19c4680() {
   return (neuron0x19abc20()*-0.200807);
}

double NNfunction_ss_dLdL::synapse0x19c46c0() {
   return (neuron0x19abf60()*0.154071);
}

double NNfunction_ss_dLdL::synapse0x19c4700() {
   return (neuron0x19ac2a0()*0.0525268);
}

double NNfunction_ss_dLdL::synapse0x19c4740() {
   return (neuron0x19ac5e0()*0.135054);
}

double NNfunction_ss_dLdL::synapse0x19c4780() {
   return (neuron0x19ac920()*1.00142);
}

double NNfunction_ss_dLdL::synapse0x19c47c0() {
   return (neuron0x19acc60()*0.536507);
}

double NNfunction_ss_dLdL::synapse0x19c4800() {
   return (neuron0x19acfa0()*0.0347778);
}

double NNfunction_ss_dLdL::synapse0x19c4840() {
   return (neuron0x19ad2e0()*0.0433323);
}

double NNfunction_ss_dLdL::synapse0x19c4880() {
   return (neuron0x19ad620()*0.518728);
}

double NNfunction_ss_dLdL::synapse0x19c4310() {
   return (neuron0x19ad960()*0.572228);
}

double NNfunction_ss_dLdL::synapse0x19c4350() {
   return (neuron0x19adec0()*0.209173);
}

double NNfunction_ss_dLdL::synapse0x19c49d0() {
   return (neuron0x19ae0e0()*-0.391551);
}

double NNfunction_ss_dLdL::synapse0x19c4a10() {
   return (neuron0x19ae420()*0.0258163);
}

double NNfunction_ss_dLdL::synapse0x19c4a50() {
   return (neuron0x19ae760()*0.52077);
}

double NNfunction_ss_dLdL::synapse0x19c4a90() {
   return (neuron0x19aeaa0()*0.221782);
}

double NNfunction_ss_dLdL::synapse0x19c4ad0() {
   return (neuron0x19aede0()*-0.518621);
}

double NNfunction_ss_dLdL::synapse0x19c4b10() {
   return (neuron0x19af120()*-0.325496);
}

double NNfunction_ss_dLdL::synapse0x19c4e90() {
   return (neuron0x19aa560()*0.315207);
}

double NNfunction_ss_dLdL::synapse0x19b9460() {
   return (neuron0x19aa8a0()*-0.145788);
}

double NNfunction_ss_dLdL::synapse0x19b94a0() {
   return (neuron0x19aabe0()*0.00320082);
}

double NNfunction_ss_dLdL::synapse0x19b94e0() {
   return (neuron0x19aaf20()*0.950019);
}

double NNfunction_ss_dLdL::synapse0x19b9730() {
   return (neuron0x19ab260()*-0.412458);
}

double NNfunction_ss_dLdL::synapse0x19b9770() {
   return (neuron0x19ab5a0()*0.13932);
}

double NNfunction_ss_dLdL::synapse0x19b97b0() {
   return (neuron0x19ab8e0()*0.26279);
}

double NNfunction_ss_dLdL::synapse0x19b9a00() {
   return (neuron0x19abc20()*0.02074);
}

double NNfunction_ss_dLdL::synapse0x19b9a40() {
   return (neuron0x19abf60()*-0.0451835);
}

double NNfunction_ss_dLdL::synapse0x19b9c90() {
   return (neuron0x19ac2a0()*-0.962434);
}

double NNfunction_ss_dLdL::synapse0x19b9cd0() {
   return (neuron0x19ac5e0()*-0.514741);
}

double NNfunction_ss_dLdL::synapse0x19b9d10() {
   return (neuron0x19ac920()*0.626702);
}

double NNfunction_ss_dLdL::synapse0x19b9f60() {
   return (neuron0x19acc60()*0.235078);
}

double NNfunction_ss_dLdL::synapse0x19b9fa0() {
   return (neuron0x19acfa0()*-0.402633);
}

double NNfunction_ss_dLdL::synapse0x19ba1f0() {
   return (neuron0x19ad2e0()*0.232079);
}

double NNfunction_ss_dLdL::synapse0x19ba230() {
   return (neuron0x19ad620()*0.351199);
}

double NNfunction_ss_dLdL::synapse0x19c4ce0() {
   return (neuron0x19ad960()*0.286803);
}

double NNfunction_ss_dLdL::synapse0x19c4d20() {
   return (neuron0x19adec0()*0.279874);
}

double NNfunction_ss_dLdL::synapse0x19ba380() {
   return (neuron0x19ae0e0()*-0.0946648);
}

double NNfunction_ss_dLdL::synapse0x19ba890() {
   return (neuron0x19ae420()*-0.129912);
}

double NNfunction_ss_dLdL::synapse0x19ba8d0() {
   return (neuron0x19ae760()*0.439682);
}

double NNfunction_ss_dLdL::synapse0x19ba910() {
   return (neuron0x19aeaa0()*0.0731576);
}

double NNfunction_ss_dLdL::synapse0x19bab60() {
   return (neuron0x19aede0()*0.449946);
}

double NNfunction_ss_dLdL::synapse0x19baba0() {
   return (neuron0x19af120()*0.454274);
}

double NNfunction_ss_dLdL::synapse0x19ba450() {
   return (neuron0x19aa560()*-0.0653475);
}

double NNfunction_ss_dLdL::synapse0x19ba490() {
   return (neuron0x19aa8a0()*0.0509516);
}

double NNfunction_ss_dLdL::synapse0x19ba4d0() {
   return (neuron0x19aabe0()*-0.0229957);
}

double NNfunction_ss_dLdL::synapse0x19ba510() {
   return (neuron0x19aaf20()*-0.258437);
}

double NNfunction_ss_dLdL::synapse0x19bae90() {
   return (neuron0x19ab260()*0.0522025);
}

double NNfunction_ss_dLdL::synapse0x19c71e0() {
   return (neuron0x19ab5a0()*0.0552571);
}

double NNfunction_ss_dLdL::synapse0x19c7220() {
   return (neuron0x19ab8e0()*-0.0425702);
}

double NNfunction_ss_dLdL::synapse0x19c7260() {
   return (neuron0x19abc20()*0.0284913);
}

double NNfunction_ss_dLdL::synapse0x19c72a0() {
   return (neuron0x19abf60()*-0.00987154);
}

double NNfunction_ss_dLdL::synapse0x19c72e0() {
   return (neuron0x19ac2a0()*0.125377);
}

double NNfunction_ss_dLdL::synapse0x19c7320() {
   return (neuron0x19ac5e0()*0.0644683);
}

double NNfunction_ss_dLdL::synapse0x19c7360() {
   return (neuron0x19ac920()*-0.770425);
}

double NNfunction_ss_dLdL::synapse0x19c73a0() {
   return (neuron0x19acc60()*0.806176);
}

double NNfunction_ss_dLdL::synapse0x19c73e0() {
   return (neuron0x19acfa0()*-0.443109);
}

double NNfunction_ss_dLdL::synapse0x19c7420() {
   return (neuron0x19ad2e0()*0.538729);
}

double NNfunction_ss_dLdL::synapse0x19c7460() {
   return (neuron0x19ad620()*0.529552);
}

double NNfunction_ss_dLdL::synapse0x19bad70() {
   return (neuron0x19ad960()*-0.37248);
}

double NNfunction_ss_dLdL::synapse0x19badb0() {
   return (neuron0x19adec0()*0.351063);
}

double NNfunction_ss_dLdL::synapse0x19c75b0() {
   return (neuron0x19ae0e0()*0.419574);
}

double NNfunction_ss_dLdL::synapse0x19c75f0() {
   return (neuron0x19ae420()*0.0281705);
}

double NNfunction_ss_dLdL::synapse0x19c7630() {
   return (neuron0x19ae760()*-0.0143671);
}

double NNfunction_ss_dLdL::synapse0x19c7670() {
   return (neuron0x19aeaa0()*0.102651);
}

double NNfunction_ss_dLdL::synapse0x19c76b0() {
   return (neuron0x19aede0()*0.0721538);
}

double NNfunction_ss_dLdL::synapse0x19c76f0() {
   return (neuron0x19af120()*-0.0179579);
}

double NNfunction_ss_dLdL::synapse0x19c7a70() {
   return (neuron0x19aa560()*-0.305252);
}

double NNfunction_ss_dLdL::synapse0x19c7ab0() {
   return (neuron0x19aa8a0()*0.0945789);
}

double NNfunction_ss_dLdL::synapse0x19c7af0() {
   return (neuron0x19aabe0()*-0.456773);
}

double NNfunction_ss_dLdL::synapse0x19c7b30() {
   return (neuron0x19aaf20()*1.47497);
}

double NNfunction_ss_dLdL::synapse0x19c7b70() {
   return (neuron0x19ab260()*0.199782);
}

double NNfunction_ss_dLdL::synapse0x19c7bb0() {
   return (neuron0x19ab5a0()*-0.246382);
}

double NNfunction_ss_dLdL::synapse0x19c7bf0() {
   return (neuron0x19ab8e0()*-0.0246706);
}

double NNfunction_ss_dLdL::synapse0x19c7c30() {
   return (neuron0x19abc20()*-0.0338857);
}

double NNfunction_ss_dLdL::synapse0x19c7c70() {
   return (neuron0x19abf60()*-0.0521649);
}

double NNfunction_ss_dLdL::synapse0x19c7cb0() {
   return (neuron0x19ac2a0()*0.115917);
}

double NNfunction_ss_dLdL::synapse0x19c7cf0() {
   return (neuron0x19ac5e0()*-0.0506524);
}

double NNfunction_ss_dLdL::synapse0x19c7d30() {
   return (neuron0x19ac920()*0.225454);
}

double NNfunction_ss_dLdL::synapse0x19c7d70() {
   return (neuron0x19acc60()*-0.395819);
}

double NNfunction_ss_dLdL::synapse0x19c7db0() {
   return (neuron0x19acfa0()*-0.0790738);
}

double NNfunction_ss_dLdL::synapse0x19c7df0() {
   return (neuron0x19ad2e0()*-0.649951);
}

double NNfunction_ss_dLdL::synapse0x19c7e30() {
   return (neuron0x19ad620()*-0.314857);
}

double NNfunction_ss_dLdL::synapse0x19c78c0() {
   return (neuron0x19ad960()*0.24572);
}

double NNfunction_ss_dLdL::synapse0x19c7900() {
   return (neuron0x19adec0()*-0.0173115);
}

double NNfunction_ss_dLdL::synapse0x19c7f80() {
   return (neuron0x19ae0e0()*-0.0824331);
}

double NNfunction_ss_dLdL::synapse0x19c7fc0() {
   return (neuron0x19ae420()*-0.0168568);
}

double NNfunction_ss_dLdL::synapse0x19c8000() {
   return (neuron0x19ae760()*-0.0785653);
}

double NNfunction_ss_dLdL::synapse0x19c8040() {
   return (neuron0x19aeaa0()*0.151415);
}

double NNfunction_ss_dLdL::synapse0x19c8080() {
   return (neuron0x19aede0()*-0.00987913);
}

double NNfunction_ss_dLdL::synapse0x19c80c0() {
   return (neuron0x19af120()*-0.0174364);
}

double NNfunction_ss_dLdL::synapse0x19c8440() {
   return (neuron0x19aa560()*0.00454048);
}

double NNfunction_ss_dLdL::synapse0x19c8480() {
   return (neuron0x19aa8a0()*0.00466939);
}

double NNfunction_ss_dLdL::synapse0x19c84c0() {
   return (neuron0x19aabe0()*0.112792);
}

double NNfunction_ss_dLdL::synapse0x19c8500() {
   return (neuron0x19aaf20()*0.291583);
}

double NNfunction_ss_dLdL::synapse0x19c8540() {
   return (neuron0x19ab260()*0.00789199);
}

double NNfunction_ss_dLdL::synapse0x19c8580() {
   return (neuron0x19ab5a0()*0.00234777);
}

double NNfunction_ss_dLdL::synapse0x19c85c0() {
   return (neuron0x19ab8e0()*0.0113713);
}

double NNfunction_ss_dLdL::synapse0x19c8600() {
   return (neuron0x19abc20()*0.00211855);
}

double NNfunction_ss_dLdL::synapse0x19c8640() {
   return (neuron0x19abf60()*0.0573736);
}

double NNfunction_ss_dLdL::synapse0x19c8680() {
   return (neuron0x19ac2a0()*0.0193418);
}

double NNfunction_ss_dLdL::synapse0x19c86c0() {
   return (neuron0x19ac5e0()*-0.0115903);
}

double NNfunction_ss_dLdL::synapse0x19c8700() {
   return (neuron0x19ac920()*1.13481);
}

double NNfunction_ss_dLdL::synapse0x19c8740() {
   return (neuron0x19acc60()*-0.00671202);
}

double NNfunction_ss_dLdL::synapse0x19c8780() {
   return (neuron0x19acfa0()*-0.0076632);
}

double NNfunction_ss_dLdL::synapse0x19c87c0() {
   return (neuron0x19ad2e0()*0.0173416);
}

double NNfunction_ss_dLdL::synapse0x19c8800() {
   return (neuron0x19ad620()*0.00112931);
}

double NNfunction_ss_dLdL::synapse0x19c8290() {
   return (neuron0x19ad960()*-0.020838);
}

double NNfunction_ss_dLdL::synapse0x19c82d0() {
   return (neuron0x19adec0()*0.00222502);
}

double NNfunction_ss_dLdL::synapse0x19c8950() {
   return (neuron0x19ae0e0()*-0.00797425);
}

double NNfunction_ss_dLdL::synapse0x19c8990() {
   return (neuron0x19ae420()*-0.00283145);
}

double NNfunction_ss_dLdL::synapse0x19c89d0() {
   return (neuron0x19ae760()*0.020563);
}

double NNfunction_ss_dLdL::synapse0x19c8a10() {
   return (neuron0x19aeaa0()*0.0042218);
}

double NNfunction_ss_dLdL::synapse0x19c8a50() {
   return (neuron0x19aede0()*0.00193254);
}

double NNfunction_ss_dLdL::synapse0x19c8a90() {
   return (neuron0x19af120()*0.00901083);
}

double NNfunction_ss_dLdL::synapse0x19c8e10() {
   return (neuron0x19aa560()*0.0702206);
}

double NNfunction_ss_dLdL::synapse0x19c8e50() {
   return (neuron0x19aa8a0()*-0.482813);
}

double NNfunction_ss_dLdL::synapse0x19c8e90() {
   return (neuron0x19aabe0()*-0.371265);
}

double NNfunction_ss_dLdL::synapse0x19c8ed0() {
   return (neuron0x19aaf20()*1.20353);
}

double NNfunction_ss_dLdL::synapse0x19c8f10() {
   return (neuron0x19ab260()*-0.0657255);
}

double NNfunction_ss_dLdL::synapse0x19c8f50() {
   return (neuron0x19ab5a0()*0.550718);
}

double NNfunction_ss_dLdL::synapse0x19c8f90() {
   return (neuron0x19ab8e0()*-0.246512);
}

double NNfunction_ss_dLdL::synapse0x19c8fd0() {
   return (neuron0x19abc20()*0.410201);
}

double NNfunction_ss_dLdL::synapse0x19c9010() {
   return (neuron0x19abf60()*-0.0237609);
}

double NNfunction_ss_dLdL::synapse0x19c9050() {
   return (neuron0x19ac2a0()*0.227876);
}

double NNfunction_ss_dLdL::synapse0x19c9090() {
   return (neuron0x19ac5e0()*0.354825);
}

double NNfunction_ss_dLdL::synapse0x19c90d0() {
   return (neuron0x19ac920()*0.225615);
}

double NNfunction_ss_dLdL::synapse0x19c9110() {
   return (neuron0x19acc60()*-0.0684107);
}

double NNfunction_ss_dLdL::synapse0x19c9150() {
   return (neuron0x19acfa0()*0.157277);
}

double NNfunction_ss_dLdL::synapse0x19c9190() {
   return (neuron0x19ad2e0()*0.373027);
}

double NNfunction_ss_dLdL::synapse0x19c91d0() {
   return (neuron0x19ad620()*0.012472);
}

double NNfunction_ss_dLdL::synapse0x19c8c60() {
   return (neuron0x19ad960()*-0.242382);
}

double NNfunction_ss_dLdL::synapse0x19c8ca0() {
   return (neuron0x19adec0()*0.012485);
}

double NNfunction_ss_dLdL::synapse0x19c9320() {
   return (neuron0x19ae0e0()*0.0847895);
}

double NNfunction_ss_dLdL::synapse0x19c9360() {
   return (neuron0x19ae420()*-0.221688);
}

double NNfunction_ss_dLdL::synapse0x19c93a0() {
   return (neuron0x19ae760()*0.253001);
}

double NNfunction_ss_dLdL::synapse0x19c93e0() {
   return (neuron0x19aeaa0()*-0.0408671);
}

double NNfunction_ss_dLdL::synapse0x19c9420() {
   return (neuron0x19aede0()*0.122566);
}

double NNfunction_ss_dLdL::synapse0x19c9460() {
   return (neuron0x19af120()*-0.311099);
}

double NNfunction_ss_dLdL::synapse0x19c97e0() {
   return (neuron0x19aa560()*-0.0261611);
}

double NNfunction_ss_dLdL::synapse0x19c9820() {
   return (neuron0x19aa8a0()*0.0854746);
}

double NNfunction_ss_dLdL::synapse0x19c9860() {
   return (neuron0x19aabe0()*1.27167);
}

double NNfunction_ss_dLdL::synapse0x19c98a0() {
   return (neuron0x19aaf20()*-3.86867);
}

double NNfunction_ss_dLdL::synapse0x19c98e0() {
   return (neuron0x19ab260()*-0.0984948);
}

double NNfunction_ss_dLdL::synapse0x19c9920() {
   return (neuron0x19ab5a0()*-0.0174019);
}

double NNfunction_ss_dLdL::synapse0x19c9960() {
   return (neuron0x19ab8e0()*-0.0754052);
}

double NNfunction_ss_dLdL::synapse0x19c99a0() {
   return (neuron0x19abc20()*0.00669772);
}

double NNfunction_ss_dLdL::synapse0x19c99e0() {
   return (neuron0x19abf60()*-0.0171434);
}

double NNfunction_ss_dLdL::synapse0x19c9a20() {
   return (neuron0x19ac2a0()*-0.0435342);
}

double NNfunction_ss_dLdL::synapse0x19c9a60() {
   return (neuron0x19ac5e0()*0.000809524);
}

double NNfunction_ss_dLdL::synapse0x19c9aa0() {
   return (neuron0x19ac920()*0.0094135);
}

double NNfunction_ss_dLdL::synapse0x19c9ae0() {
   return (neuron0x19acc60()*0.00154756);
}

double NNfunction_ss_dLdL::synapse0x19c9b20() {
   return (neuron0x19acfa0()*0.0982674);
}

double NNfunction_ss_dLdL::synapse0x19c9b60() {
   return (neuron0x19ad2e0()*0.0172333);
}

double NNfunction_ss_dLdL::synapse0x19c9ba0() {
   return (neuron0x19ad620()*-0.061965);
}

double NNfunction_ss_dLdL::synapse0x19c9630() {
   return (neuron0x19ad960()*0.124656);
}

double NNfunction_ss_dLdL::synapse0x19c9670() {
   return (neuron0x19adec0()*-0.0953422);
}

double NNfunction_ss_dLdL::synapse0x19c9cf0() {
   return (neuron0x19ae0e0()*0.00916656);
}

double NNfunction_ss_dLdL::synapse0x19c9d30() {
   return (neuron0x19ae420()*-0.166385);
}

double NNfunction_ss_dLdL::synapse0x19c9d70() {
   return (neuron0x19ae760()*0.127678);
}

double NNfunction_ss_dLdL::synapse0x19c9db0() {
   return (neuron0x19aeaa0()*0.133685);
}

double NNfunction_ss_dLdL::synapse0x19c9df0() {
   return (neuron0x19aede0()*0.0837355);
}

double NNfunction_ss_dLdL::synapse0x19c9e30() {
   return (neuron0x19af120()*-0.0225024);
}

double NNfunction_ss_dLdL::synapse0x19ca1b0() {
   return (neuron0x19aa560()*-0.00903859);
}

double NNfunction_ss_dLdL::synapse0x19ca1f0() {
   return (neuron0x19aa8a0()*-0.0197049);
}

double NNfunction_ss_dLdL::synapse0x19ca230() {
   return (neuron0x19aabe0()*-0.867254);
}

double NNfunction_ss_dLdL::synapse0x19ca270() {
   return (neuron0x19aaf20()*-1.62126);
}

double NNfunction_ss_dLdL::synapse0x19ca2b0() {
   return (neuron0x19ab260()*-0.09028);
}

double NNfunction_ss_dLdL::synapse0x19ca2f0() {
   return (neuron0x19ab5a0()*-0.0603516);
}

double NNfunction_ss_dLdL::synapse0x19ca330() {
   return (neuron0x19ab8e0()*0.0239036);
}

double NNfunction_ss_dLdL::synapse0x19ca370() {
   return (neuron0x19abc20()*-0.00499951);
}

double NNfunction_ss_dLdL::synapse0x19ca3b0() {
   return (neuron0x19abf60()*0.0712193);
}

double NNfunction_ss_dLdL::synapse0x19ca3f0() {
   return (neuron0x19ac2a0()*0.223605);
}

double NNfunction_ss_dLdL::synapse0x19ca430() {
   return (neuron0x19ac5e0()*0.0669601);
}

double NNfunction_ss_dLdL::synapse0x19ca470() {
   return (neuron0x19ac920()*-0.890928);
}

double NNfunction_ss_dLdL::synapse0x19ca4b0() {
   return (neuron0x19acc60()*-0.324871);
}

double NNfunction_ss_dLdL::synapse0x19ca4f0() {
   return (neuron0x19acfa0()*0.123052);
}

double NNfunction_ss_dLdL::synapse0x19ca530() {
   return (neuron0x19ad2e0()*-0.434761);
}

double NNfunction_ss_dLdL::synapse0x19ca570() {
   return (neuron0x19ad620()*-0.504961);
}

double NNfunction_ss_dLdL::synapse0x19ca000() {
   return (neuron0x19ad960()*-0.143405);
}

double NNfunction_ss_dLdL::synapse0x19ca040() {
   return (neuron0x19adec0()*0.369292);
}

double NNfunction_ss_dLdL::synapse0x19ca6c0() {
   return (neuron0x19ae0e0()*-0.103056);
}

double NNfunction_ss_dLdL::synapse0x19ca700() {
   return (neuron0x19ae420()*-0.0269622);
}

double NNfunction_ss_dLdL::synapse0x19ca740() {
   return (neuron0x19ae760()*0.186271);
}

double NNfunction_ss_dLdL::synapse0x19ca780() {
   return (neuron0x19aeaa0()*-0.144733);
}

double NNfunction_ss_dLdL::synapse0x19ca7c0() {
   return (neuron0x19aede0()*0.116454);
}

double NNfunction_ss_dLdL::synapse0x19ca800() {
   return (neuron0x19af120()*-0.173962);
}

double NNfunction_ss_dLdL::synapse0x19cab80() {
   return (neuron0x19aa560()*-0.0237864);
}

double NNfunction_ss_dLdL::synapse0x19cabc0() {
   return (neuron0x19aa8a0()*0.00178864);
}

double NNfunction_ss_dLdL::synapse0x19cac00() {
   return (neuron0x19aabe0()*-0.50912);
}

double NNfunction_ss_dLdL::synapse0x19cac40() {
   return (neuron0x19aaf20()*0.687329);
}

double NNfunction_ss_dLdL::synapse0x19cac80() {
   return (neuron0x19ab260()*-0.0225572);
}

double NNfunction_ss_dLdL::synapse0x19cacc0() {
   return (neuron0x19ab5a0()*-0.011169);
}

double NNfunction_ss_dLdL::synapse0x19cad00() {
   return (neuron0x19ab8e0()*-0.0145155);
}

double NNfunction_ss_dLdL::synapse0x19cad40() {
   return (neuron0x19abc20()*0.00269903);
}

double NNfunction_ss_dLdL::synapse0x19cad80() {
   return (neuron0x19abf60()*0.0170276);
}

double NNfunction_ss_dLdL::synapse0x19cadc0() {
   return (neuron0x19ac2a0()*0.0208581);
}

double NNfunction_ss_dLdL::synapse0x19cae00() {
   return (neuron0x19ac5e0()*0.0109244);
}

double NNfunction_ss_dLdL::synapse0x19cae40() {
   return (neuron0x19ac920()*-0.112241);
}

double NNfunction_ss_dLdL::synapse0x19cae80() {
   return (neuron0x19acc60()*0.054197);
}

double NNfunction_ss_dLdL::synapse0x19caec0() {
   return (neuron0x19acfa0()*0.0112881);
}

double NNfunction_ss_dLdL::synapse0x19caf00() {
   return (neuron0x19ad2e0()*-0.0089023);
}

double NNfunction_ss_dLdL::synapse0x19caf40() {
   return (neuron0x19ad620()*-0.0136535);
}

double NNfunction_ss_dLdL::synapse0x19ca9d0() {
   return (neuron0x19ad960()*-0.017323);
}

double NNfunction_ss_dLdL::synapse0x19caa10() {
   return (neuron0x19adec0()*0.0395724);
}

double NNfunction_ss_dLdL::synapse0x19cb090() {
   return (neuron0x19ae0e0()*0.0303254);
}

double NNfunction_ss_dLdL::synapse0x19cb0d0() {
   return (neuron0x19ae420()*0.00139332);
}

double NNfunction_ss_dLdL::synapse0x19cb110() {
   return (neuron0x19ae760()*0.0130584);
}

double NNfunction_ss_dLdL::synapse0x19cb150() {
   return (neuron0x19aeaa0()*-0.00940083);
}

double NNfunction_ss_dLdL::synapse0x19cb190() {
   return (neuron0x19aede0()*-0.000142865);
}

double NNfunction_ss_dLdL::synapse0x19cb1d0() {
   return (neuron0x19af120()*-0.0133006);
}

double NNfunction_ss_dLdL::synapse0x19cb550() {
   return (neuron0x19aa560()*0.0711743);
}

double NNfunction_ss_dLdL::synapse0x19cb590() {
   return (neuron0x19aa8a0()*0.0236061);
}

double NNfunction_ss_dLdL::synapse0x19cb5d0() {
   return (neuron0x19aabe0()*-1.84997);
}

double NNfunction_ss_dLdL::synapse0x19cb610() {
   return (neuron0x19aaf20()*-1.26426);
}

double NNfunction_ss_dLdL::synapse0x19cb650() {
   return (neuron0x19ab260()*-0.134536);
}

double NNfunction_ss_dLdL::synapse0x19cb690() {
   return (neuron0x19ab5a0()*-0.141495);
}

double NNfunction_ss_dLdL::synapse0x19cb6d0() {
   return (neuron0x19ab8e0()*0.0705694);
}

double NNfunction_ss_dLdL::synapse0x19cb710() {
   return (neuron0x19abc20()*0.0249081);
}

double NNfunction_ss_dLdL::synapse0x19cb750() {
   return (neuron0x19abf60()*0.229897);
}

double NNfunction_ss_dLdL::synapse0x19cb790() {
   return (neuron0x19ac2a0()*-0.0251277);
}

double NNfunction_ss_dLdL::synapse0x19cb7d0() {
   return (neuron0x19ac5e0()*-0.142453);
}

double NNfunction_ss_dLdL::synapse0x19cb810() {
   return (neuron0x19ac920()*0.241562);
}

double NNfunction_ss_dLdL::synapse0x19cb850() {
   return (neuron0x19acc60()*-0.0602394);
}

double NNfunction_ss_dLdL::synapse0x19cb890() {
   return (neuron0x19acfa0()*-0.0046738);
}

double NNfunction_ss_dLdL::synapse0x19cb8d0() {
   return (neuron0x19ad2e0()*0.00371428);
}

double NNfunction_ss_dLdL::synapse0x19cb910() {
   return (neuron0x19ad620()*0.198806);
}

double NNfunction_ss_dLdL::synapse0x19cb3a0() {
   return (neuron0x19ad960()*0.185403);
}

double NNfunction_ss_dLdL::synapse0x19cb3e0() {
   return (neuron0x19adec0()*-0.137935);
}

double NNfunction_ss_dLdL::synapse0x19cba60() {
   return (neuron0x19ae0e0()*-0.0306254);
}

double NNfunction_ss_dLdL::synapse0x19cbaa0() {
   return (neuron0x19ae420()*0.260833);
}

double NNfunction_ss_dLdL::synapse0x19cbae0() {
   return (neuron0x19ae760()*-0.0427833);
}

double NNfunction_ss_dLdL::synapse0x19cbb20() {
   return (neuron0x19aeaa0()*-0.0257516);
}

double NNfunction_ss_dLdL::synapse0x19cbb60() {
   return (neuron0x19aede0()*-0.278638);
}

double NNfunction_ss_dLdL::synapse0x19cbba0() {
   return (neuron0x19af120()*-0.0260568);
}

double NNfunction_ss_dLdL::synapse0x19b4650() {
   return (neuron0x19aa560()*0.0086488);
}

double NNfunction_ss_dLdL::synapse0x19b4690() {
   return (neuron0x19aa8a0()*-0.154468);
}

double NNfunction_ss_dLdL::synapse0x19b46d0() {
   return (neuron0x19aabe0()*0.00639219);
}

double NNfunction_ss_dLdL::synapse0x19b4710() {
   return (neuron0x19aaf20()*0.643598);
}

double NNfunction_ss_dLdL::synapse0x19b4750() {
   return (neuron0x19ab260()*0.0857172);
}

double NNfunction_ss_dLdL::synapse0x19b4790() {
   return (neuron0x19ab5a0()*0.14602);
}

double NNfunction_ss_dLdL::synapse0x19b47d0() {
   return (neuron0x19ab8e0()*-0.159735);
}

double NNfunction_ss_dLdL::synapse0x19b4810() {
   return (neuron0x19abc20()*-0.764483);
}

double NNfunction_ss_dLdL::synapse0x19cc330() {
   return (neuron0x19abf60()*0.343224);
}

double NNfunction_ss_dLdL::synapse0x19cc370() {
   return (neuron0x19ac2a0()*0.116754);
}

double NNfunction_ss_dLdL::synapse0x19cc3b0() {
   return (neuron0x19ac5e0()*0.378664);
}

double NNfunction_ss_dLdL::synapse0x19cc3f0() {
   return (neuron0x19ac920()*0.871216);
}

double NNfunction_ss_dLdL::synapse0x19cc430() {
   return (neuron0x19acc60()*0.266745);
}

double NNfunction_ss_dLdL::synapse0x19cc470() {
   return (neuron0x19acfa0()*0.437253);
}

double NNfunction_ss_dLdL::synapse0x19cc4b0() {
   return (neuron0x19ad2e0()*0.0889087);
}

double NNfunction_ss_dLdL::synapse0x19cc4f0() {
   return (neuron0x19ad620()*-0.292289);
}

double NNfunction_ss_dLdL::synapse0x19cbd70() {
   return (neuron0x19ad960()*-0.350647);
}

double NNfunction_ss_dLdL::synapse0x19cbdb0() {
   return (neuron0x19adec0()*0.141034);
}

double NNfunction_ss_dLdL::synapse0x19cc640() {
   return (neuron0x19ae0e0()*-0.180266);
}

double NNfunction_ss_dLdL::synapse0x19cc680() {
   return (neuron0x19ae420()*-0.120208);
}

double NNfunction_ss_dLdL::synapse0x19cc6c0() {
   return (neuron0x19ae760()*-0.14905);
}

double NNfunction_ss_dLdL::synapse0x19cc700() {
   return (neuron0x19aeaa0()*0.404387);
}

double NNfunction_ss_dLdL::synapse0x19cc740() {
   return (neuron0x19aede0()*-0.0153468);
}

double NNfunction_ss_dLdL::synapse0x19cc780() {
   return (neuron0x19af120()*-0.0553982);
}

double NNfunction_ss_dLdL::synapse0x19ccb00() {
   return (neuron0x19aa560()*-0.307822);
}

double NNfunction_ss_dLdL::synapse0x19ccb40() {
   return (neuron0x19aa8a0()*0.502076);
}

double NNfunction_ss_dLdL::synapse0x19ccb80() {
   return (neuron0x19aabe0()*-0.377387);
}

double NNfunction_ss_dLdL::synapse0x19ccbc0() {
   return (neuron0x19aaf20()*0.292208);
}

double NNfunction_ss_dLdL::synapse0x19ccc00() {
   return (neuron0x19ab260()*-1.32651);
}

double NNfunction_ss_dLdL::synapse0x19ccc40() {
   return (neuron0x19ab5a0()*0.21305);
}

double NNfunction_ss_dLdL::synapse0x19ccc80() {
   return (neuron0x19ab8e0()*-0.0977811);
}

double NNfunction_ss_dLdL::synapse0x19cccc0() {
   return (neuron0x19abc20()*0.544558);
}

double NNfunction_ss_dLdL::synapse0x19ccd00() {
   return (neuron0x19abf60()*0.189998);
}

double NNfunction_ss_dLdL::synapse0x19ccd40() {
   return (neuron0x19ac2a0()*0.181067);
}

double NNfunction_ss_dLdL::synapse0x19ccd80() {
   return (neuron0x19ac5e0()*-0.128687);
}

double NNfunction_ss_dLdL::synapse0x19ccdc0() {
   return (neuron0x19ac920()*-0.000774645);
}

double NNfunction_ss_dLdL::synapse0x19cce00() {
   return (neuron0x19acc60()*-0.127339);
}

double NNfunction_ss_dLdL::synapse0x19cce40() {
   return (neuron0x19acfa0()*-0.215517);
}

double NNfunction_ss_dLdL::synapse0x19cce80() {
   return (neuron0x19ad2e0()*-0.423636);
}

double NNfunction_ss_dLdL::synapse0x19ccec0() {
   return (neuron0x19ad620()*0.597441);
}

double NNfunction_ss_dLdL::synapse0x19cc950() {
   return (neuron0x19ad960()*0.702421);
}

double NNfunction_ss_dLdL::synapse0x19cc990() {
   return (neuron0x19adec0()*0.163138);
}

double NNfunction_ss_dLdL::synapse0x19cd010() {
   return (neuron0x19ae0e0()*0.519759);
}

double NNfunction_ss_dLdL::synapse0x19cd050() {
   return (neuron0x19ae420()*0.255867);
}

double NNfunction_ss_dLdL::synapse0x19cd090() {
   return (neuron0x19ae760()*0.0742268);
}

double NNfunction_ss_dLdL::synapse0x19cd0d0() {
   return (neuron0x19aeaa0()*-0.635369);
}

double NNfunction_ss_dLdL::synapse0x19cd110() {
   return (neuron0x19aede0()*0.364967);
}

double NNfunction_ss_dLdL::synapse0x19cd150() {
   return (neuron0x19af120()*-0.103934);
}

double NNfunction_ss_dLdL::synapse0x19cd4d0() {
   return (neuron0x19aa560()*-0.136834);
}

double NNfunction_ss_dLdL::synapse0x19cd510() {
   return (neuron0x19aa8a0()*0.0455818);
}

double NNfunction_ss_dLdL::synapse0x19cd550() {
   return (neuron0x19aabe0()*-0.414546);
}

double NNfunction_ss_dLdL::synapse0x19cd590() {
   return (neuron0x19aaf20()*1.02207);
}

double NNfunction_ss_dLdL::synapse0x19cd5d0() {
   return (neuron0x19ab260()*-0.424509);
}

double NNfunction_ss_dLdL::synapse0x19cd610() {
   return (neuron0x19ab5a0()*0.227841);
}

double NNfunction_ss_dLdL::synapse0x19cd650() {
   return (neuron0x19ab8e0()*-0.190648);
}

double NNfunction_ss_dLdL::synapse0x19cd690() {
   return (neuron0x19abc20()*-0.292503);
}

double NNfunction_ss_dLdL::synapse0x19cd6d0() {
   return (neuron0x19abf60()*0.615411);
}

double NNfunction_ss_dLdL::synapse0x19cd710() {
   return (neuron0x19ac2a0()*0.156952);
}

double NNfunction_ss_dLdL::synapse0x19cd750() {
   return (neuron0x19ac5e0()*0.360874);
}

double NNfunction_ss_dLdL::synapse0x19cd790() {
   return (neuron0x19ac920()*0.475526);
}

double NNfunction_ss_dLdL::synapse0x19cd7d0() {
   return (neuron0x19acc60()*0.070102);
}

double NNfunction_ss_dLdL::synapse0x19cd810() {
   return (neuron0x19acfa0()*0.115992);
}

double NNfunction_ss_dLdL::synapse0x19cd850() {
   return (neuron0x19ad2e0()*0.0424041);
}

double NNfunction_ss_dLdL::synapse0x19cd890() {
   return (neuron0x19ad620()*0.121716);
}

double NNfunction_ss_dLdL::synapse0x19cd320() {
   return (neuron0x19ad960()*0.0431504);
}

double NNfunction_ss_dLdL::synapse0x19cd360() {
   return (neuron0x19adec0()*0.583356);
}

double NNfunction_ss_dLdL::synapse0x19bde90() {
   return (neuron0x19ae0e0()*0.0534114);
}

double NNfunction_ss_dLdL::synapse0x19bded0() {
   return (neuron0x19ae420()*-0.278929);
}

double NNfunction_ss_dLdL::synapse0x19bdf10() {
   return (neuron0x19ae760()*-0.170487);
}

double NNfunction_ss_dLdL::synapse0x19bdf50() {
   return (neuron0x19aeaa0()*-0.16297);
}

double NNfunction_ss_dLdL::synapse0x19bdf90() {
   return (neuron0x19aede0()*-0.463585);
}

double NNfunction_ss_dLdL::synapse0x19bdfd0() {
   return (neuron0x19af120()*0.194208);
}

double NNfunction_ss_dLdL::synapse0x19be350() {
   return (neuron0x19aa560()*0.0342689);
}

double NNfunction_ss_dLdL::synapse0x19be390() {
   return (neuron0x19aa8a0()*-0.0133353);
}

double NNfunction_ss_dLdL::synapse0x19be3d0() {
   return (neuron0x19aabe0()*0.932844);
}

double NNfunction_ss_dLdL::synapse0x19be410() {
   return (neuron0x19aaf20()*-0.20485);
}

double NNfunction_ss_dLdL::synapse0x19be450() {
   return (neuron0x19ab260()*0.0159234);
}

double NNfunction_ss_dLdL::synapse0x19be490() {
   return (neuron0x19ab5a0()*-0.00383748);
}

double NNfunction_ss_dLdL::synapse0x19be4d0() {
   return (neuron0x19ab8e0()*0.0589507);
}

double NNfunction_ss_dLdL::synapse0x19be510() {
   return (neuron0x19abc20()*0.00631397);
}

double NNfunction_ss_dLdL::synapse0x19be550() {
   return (neuron0x19abf60()*-0.0213157);
}

double NNfunction_ss_dLdL::synapse0x19be590() {
   return (neuron0x19ac2a0()*-0.0215721);
}

double NNfunction_ss_dLdL::synapse0x19be5d0() {
   return (neuron0x19ac5e0()*-0.0760851);
}

double NNfunction_ss_dLdL::synapse0x19be610() {
   return (neuron0x19ac920()*-0.214134);
}

double NNfunction_ss_dLdL::synapse0x19be650() {
   return (neuron0x19acc60()*-0.0700694);
}

double NNfunction_ss_dLdL::synapse0x19be690() {
   return (neuron0x19acfa0()*0.0112383);
}

double NNfunction_ss_dLdL::synapse0x19be6d0() {
   return (neuron0x19ad2e0()*-0.00741251);
}

double NNfunction_ss_dLdL::synapse0x19be710() {
   return (neuron0x19ad620()*-0.0143056);
}

double NNfunction_ss_dLdL::synapse0x19be1a0() {
   return (neuron0x19ad960()*0.0437878);
}

double NNfunction_ss_dLdL::synapse0x19be1e0() {
   return (neuron0x19adec0()*-0.0150237);
}

double NNfunction_ss_dLdL::synapse0x19be860() {
   return (neuron0x19ae0e0()*-0.0152822);
}

double NNfunction_ss_dLdL::synapse0x19be8a0() {
   return (neuron0x19ae420()*-0.00523303);
}

double NNfunction_ss_dLdL::synapse0x19be8e0() {
   return (neuron0x19ae760()*-0.00382397);
}

double NNfunction_ss_dLdL::synapse0x19be920() {
   return (neuron0x19aeaa0()*-0.0259381);
}

double NNfunction_ss_dLdL::synapse0x19be960() {
   return (neuron0x19aede0()*-0.0258528);
}

double NNfunction_ss_dLdL::synapse0x19be9a0() {
   return (neuron0x19af120()*-0.00598324);
}

double NNfunction_ss_dLdL::synapse0x19bed20() {
   return (neuron0x19aa560()*-0.131462);
}

double NNfunction_ss_dLdL::synapse0x19bed60() {
   return (neuron0x19aa8a0()*-0.345095);
}

double NNfunction_ss_dLdL::synapse0x19beda0() {
   return (neuron0x19aabe0()*-0.069332);
}

double NNfunction_ss_dLdL::synapse0x19bede0() {
   return (neuron0x19aaf20()*0.311427);
}

double NNfunction_ss_dLdL::synapse0x19bee20() {
   return (neuron0x19ab260()*-0.108664);
}

double NNfunction_ss_dLdL::synapse0x19bee60() {
   return (neuron0x19ab5a0()*0.496618);
}

double NNfunction_ss_dLdL::synapse0x19beea0() {
   return (neuron0x19ab8e0()*-0.217954);
}

double NNfunction_ss_dLdL::synapse0x19beee0() {
   return (neuron0x19abc20()*0.126656);
}

double NNfunction_ss_dLdL::synapse0x19bef20() {
   return (neuron0x19abf60()*-0.232018);
}

double NNfunction_ss_dLdL::synapse0x19bef60() {
   return (neuron0x19ac2a0()*-0.148273);
}

double NNfunction_ss_dLdL::synapse0x19befa0() {
   return (neuron0x19ac5e0()*-0.0208611);
}

double NNfunction_ss_dLdL::synapse0x19befe0() {
   return (neuron0x19ac920()*-0.423111);
}

double NNfunction_ss_dLdL::synapse0x19bf020() {
   return (neuron0x19acc60()*-0.402018);
}

double NNfunction_ss_dLdL::synapse0x19bf060() {
   return (neuron0x19acfa0()*0.122336);
}

double NNfunction_ss_dLdL::synapse0x19bf0a0() {
   return (neuron0x19ad2e0()*-0.816403);
}

double NNfunction_ss_dLdL::synapse0x19bf0e0() {
   return (neuron0x19ad620()*0.24139);
}

double NNfunction_ss_dLdL::synapse0x19beb70() {
   return (neuron0x19ad960()*0.363862);
}

double NNfunction_ss_dLdL::synapse0x19bebb0() {
   return (neuron0x19adec0()*-0.187072);
}

double NNfunction_ss_dLdL::synapse0x19bf230() {
   return (neuron0x19ae0e0()*0.201921);
}

double NNfunction_ss_dLdL::synapse0x19bf270() {
   return (neuron0x19ae420()*0.378037);
}

double NNfunction_ss_dLdL::synapse0x19bf2b0() {
   return (neuron0x19ae760()*-0.448967);
}

double NNfunction_ss_dLdL::synapse0x19bf2f0() {
   return (neuron0x19aeaa0()*0.0531746);
}

double NNfunction_ss_dLdL::synapse0x19bf330() {
   return (neuron0x19aede0()*0.389155);
}

double NNfunction_ss_dLdL::synapse0x19bf370() {
   return (neuron0x19af120()*-0.215323);
}

double NNfunction_ss_dLdL::synapse0x19bf6f0() {
   return (neuron0x19aa560()*-0.00816772);
}

double NNfunction_ss_dLdL::synapse0x19bf730() {
   return (neuron0x19aa8a0()*0.00583851);
}

double NNfunction_ss_dLdL::synapse0x19bf770() {
   return (neuron0x19aabe0()*-0.116348);
}

double NNfunction_ss_dLdL::synapse0x19bf7b0() {
   return (neuron0x19aaf20()*-3.37944);
}

double NNfunction_ss_dLdL::synapse0x19bf7f0() {
   return (neuron0x19ab260()*0.00072023);
}

double NNfunction_ss_dLdL::synapse0x19bf830() {
   return (neuron0x19ab5a0()*-0.0262501);
}

double NNfunction_ss_dLdL::synapse0x19bf870() {
   return (neuron0x19ab8e0()*0.0332813);
}

double NNfunction_ss_dLdL::synapse0x19bf8b0() {
   return (neuron0x19abc20()*0.0136984);
}

double NNfunction_ss_dLdL::synapse0x19bf8f0() {
   return (neuron0x19abf60()*-0.00997939);
}

double NNfunction_ss_dLdL::synapse0x19bf930() {
   return (neuron0x19ac2a0()*0.0204968);
}

double NNfunction_ss_dLdL::synapse0x19bf970() {
   return (neuron0x19ac5e0()*0.010314);
}

double NNfunction_ss_dLdL::synapse0x19bf9b0() {
   return (neuron0x19ac920()*0.928586);
}

double NNfunction_ss_dLdL::synapse0x19bf9f0() {
   return (neuron0x19acc60()*0.00043651);
}

double NNfunction_ss_dLdL::synapse0x19bfa30() {
   return (neuron0x19acfa0()*0.0192081);
}

double NNfunction_ss_dLdL::synapse0x19bfa70() {
   return (neuron0x19ad2e0()*-0.0253807);
}

double NNfunction_ss_dLdL::synapse0x19bfab0() {
   return (neuron0x19ad620()*-0.0224604);
}

double NNfunction_ss_dLdL::synapse0x19bf540() {
   return (neuron0x19ad960()*-0.0361518);
}

double NNfunction_ss_dLdL::synapse0x19bf580() {
   return (neuron0x19adec0()*0.0254267);
}

double NNfunction_ss_dLdL::synapse0x19bfc00() {
   return (neuron0x19ae0e0()*-0.011583);
}

double NNfunction_ss_dLdL::synapse0x19bfc40() {
   return (neuron0x19ae420()*-0.0254757);
}

double NNfunction_ss_dLdL::synapse0x19bfc80() {
   return (neuron0x19ae760()*-0.0375879);
}

double NNfunction_ss_dLdL::synapse0x19bfcc0() {
   return (neuron0x19aeaa0()*-0.0129636);
}

double NNfunction_ss_dLdL::synapse0x19bfd00() {
   return (neuron0x19aede0()*-0.00824766);
}

double NNfunction_ss_dLdL::synapse0x19bfd40() {
   return (neuron0x19af120()*3.44724e-05);
}

double NNfunction_ss_dLdL::synapse0x19d1c10() {
   return (neuron0x19aa560()*0.0188778);
}

double NNfunction_ss_dLdL::synapse0x19d1c50() {
   return (neuron0x19aa8a0()*0.00904281);
}

double NNfunction_ss_dLdL::synapse0x19d1c90() {
   return (neuron0x19aabe0()*0.514398);
}

double NNfunction_ss_dLdL::synapse0x19d1cd0() {
   return (neuron0x19aaf20()*3.67124);
}

double NNfunction_ss_dLdL::synapse0x19d1d10() {
   return (neuron0x19ab260()*-0.253596);
}

double NNfunction_ss_dLdL::synapse0x19d1d50() {
   return (neuron0x19ab5a0()*-0.0958979);
}

double NNfunction_ss_dLdL::synapse0x19d1d90() {
   return (neuron0x19ab8e0()*-0.173091);
}

double NNfunction_ss_dLdL::synapse0x19d1dd0() {
   return (neuron0x19abc20()*-0.213359);
}

double NNfunction_ss_dLdL::synapse0x19d1e10() {
   return (neuron0x19abf60()*0.044349);
}

double NNfunction_ss_dLdL::synapse0x19d1e50() {
   return (neuron0x19ac2a0()*0.0960244);
}

double NNfunction_ss_dLdL::synapse0x19d1e90() {
   return (neuron0x19ac5e0()*-0.0206604);
}

double NNfunction_ss_dLdL::synapse0x19d1ed0() {
   return (neuron0x19ac920()*-0.0498594);
}

double NNfunction_ss_dLdL::synapse0x19d1f10() {
   return (neuron0x19acc60()*0.207522);
}

double NNfunction_ss_dLdL::synapse0x19d1f50() {
   return (neuron0x19acfa0()*-0.199948);
}

double NNfunction_ss_dLdL::synapse0x19d1f90() {
   return (neuron0x19ad2e0()*0.0473678);
}

double NNfunction_ss_dLdL::synapse0x19d1fd0() {
   return (neuron0x19ad620()*-0.0811529);
}

double NNfunction_ss_dLdL::synapse0x19bfd80() {
   return (neuron0x19ad960()*-0.0970767);
}

double NNfunction_ss_dLdL::synapse0x19bfdc0() {
   return (neuron0x19adec0()*0.0143031);
}

double NNfunction_ss_dLdL::synapse0x19d2120() {
   return (neuron0x19ae0e0()*0.102371);
}

double NNfunction_ss_dLdL::synapse0x19d2160() {
   return (neuron0x19ae420()*-0.0651077);
}

double NNfunction_ss_dLdL::synapse0x19d21a0() {
   return (neuron0x19ae760()*0.0165576);
}

double NNfunction_ss_dLdL::synapse0x19d21e0() {
   return (neuron0x19aeaa0()*-0.0296593);
}

double NNfunction_ss_dLdL::synapse0x19d2220() {
   return (neuron0x19aede0()*0.140441);
}

double NNfunction_ss_dLdL::synapse0x19d2260() {
   return (neuron0x19af120()*0.0429861);
}

double NNfunction_ss_dLdL::synapse0x19d25e0() {
   return (neuron0x19aa560()*0.0967303);
}

double NNfunction_ss_dLdL::synapse0x19d2620() {
   return (neuron0x19aa8a0()*0.00849953);
}

double NNfunction_ss_dLdL::synapse0x19d2660() {
   return (neuron0x19aabe0()*-0.280176);
}

double NNfunction_ss_dLdL::synapse0x19d26a0() {
   return (neuron0x19aaf20()*-0.907618);
}

double NNfunction_ss_dLdL::synapse0x19d26e0() {
   return (neuron0x19ab260()*-0.415122);
}

double NNfunction_ss_dLdL::synapse0x19d2720() {
   return (neuron0x19ab5a0()*0.248755);
}

double NNfunction_ss_dLdL::synapse0x19d2760() {
   return (neuron0x19ab8e0()*0.165251);
}

double NNfunction_ss_dLdL::synapse0x19d27a0() {
   return (neuron0x19abc20()*0.106959);
}

double NNfunction_ss_dLdL::synapse0x19d27e0() {
   return (neuron0x19abf60()*-0.103352);
}

double NNfunction_ss_dLdL::synapse0x19d2820() {
   return (neuron0x19ac2a0()*-0.198548);
}

double NNfunction_ss_dLdL::synapse0x19d2860() {
   return (neuron0x19ac5e0()*0.162064);
}

double NNfunction_ss_dLdL::synapse0x19d28a0() {
   return (neuron0x19ac920()*0.782469);
}

double NNfunction_ss_dLdL::synapse0x19d28e0() {
   return (neuron0x19acc60()*0.0162138);
}

double NNfunction_ss_dLdL::synapse0x19d2920() {
   return (neuron0x19acfa0()*0.00799044);
}

double NNfunction_ss_dLdL::synapse0x19d2960() {
   return (neuron0x19ad2e0()*0.289212);
}

double NNfunction_ss_dLdL::synapse0x19d29a0() {
   return (neuron0x19ad620()*0.257532);
}

double NNfunction_ss_dLdL::synapse0x19d2430() {
   return (neuron0x19ad960()*-0.17634);
}

double NNfunction_ss_dLdL::synapse0x19d2470() {
   return (neuron0x19adec0()*-0.154147);
}

double NNfunction_ss_dLdL::synapse0x19d2af0() {
   return (neuron0x19ae0e0()*0.0981581);
}

double NNfunction_ss_dLdL::synapse0x19d2b30() {
   return (neuron0x19ae420()*0.223661);
}

double NNfunction_ss_dLdL::synapse0x19d2b70() {
   return (neuron0x19ae760()*-0.0551593);
}

double NNfunction_ss_dLdL::synapse0x19d2bb0() {
   return (neuron0x19aeaa0()*0.00212925);
}

double NNfunction_ss_dLdL::synapse0x19d2bf0() {
   return (neuron0x19aede0()*-0.31768);
}

double NNfunction_ss_dLdL::synapse0x19d2c30() {
   return (neuron0x19af120()*-0.204664);
}

double NNfunction_ss_dLdL::synapse0x19d2fb0() {
   return (neuron0x19aa560()*-0.0101208);
}

double NNfunction_ss_dLdL::synapse0x19d2ff0() {
   return (neuron0x19aa8a0()*-0.00197086);
}

double NNfunction_ss_dLdL::synapse0x19d3030() {
   return (neuron0x19aabe0()*-0.0557463);
}

double NNfunction_ss_dLdL::synapse0x19d3070() {
   return (neuron0x19aaf20()*-1.33196);
}

double NNfunction_ss_dLdL::synapse0x19d30b0() {
   return (neuron0x19ab260()*-0.00470873);
}

double NNfunction_ss_dLdL::synapse0x19d30f0() {
   return (neuron0x19ab5a0()*-0.00548764);
}

double NNfunction_ss_dLdL::synapse0x19d3130() {
   return (neuron0x19ab8e0()*-0.00795592);
}

double NNfunction_ss_dLdL::synapse0x19d3170() {
   return (neuron0x19abc20()*-0.00843431);
}

double NNfunction_ss_dLdL::synapse0x19d31b0() {
   return (neuron0x19abf60()*-0.00313948);
}

double NNfunction_ss_dLdL::synapse0x19d31f0() {
   return (neuron0x19ac2a0()*0.0106755);
}

double NNfunction_ss_dLdL::synapse0x19d3230() {
   return (neuron0x19ac5e0()*0.00411039);
}

double NNfunction_ss_dLdL::synapse0x19d3270() {
   return (neuron0x19ac920()*-0.0914269);
}

double NNfunction_ss_dLdL::synapse0x19d32b0() {
   return (neuron0x19acc60()*-0.00227004);
}

double NNfunction_ss_dLdL::synapse0x19d32f0() {
   return (neuron0x19acfa0()*0.00984227);
}

double NNfunction_ss_dLdL::synapse0x19d3330() {
   return (neuron0x19ad2e0()*-0.00238015);
}

double NNfunction_ss_dLdL::synapse0x19d3370() {
   return (neuron0x19ad620()*0.00195839);
}

double NNfunction_ss_dLdL::synapse0x19d2e00() {
   return (neuron0x19ad960()*0.00598534);
}

double NNfunction_ss_dLdL::synapse0x19d2e40() {
   return (neuron0x19adec0()*0.0138816);
}

double NNfunction_ss_dLdL::synapse0x19d34c0() {
   return (neuron0x19ae0e0()*0.0153957);
}

double NNfunction_ss_dLdL::synapse0x19d3500() {
   return (neuron0x19ae420()*-0.0033112);
}

double NNfunction_ss_dLdL::synapse0x19d3540() {
   return (neuron0x19ae760()*-0.0128457);
}

double NNfunction_ss_dLdL::synapse0x19d3580() {
   return (neuron0x19aeaa0()*-0.0111926);
}

double NNfunction_ss_dLdL::synapse0x19d35c0() {
   return (neuron0x19aede0()*0.00502102);
}

double NNfunction_ss_dLdL::synapse0x19d3600() {
   return (neuron0x19af120()*-0.000435661);
}

double NNfunction_ss_dLdL::synapse0x19d3980() {
   return (neuron0x19aa560()*-0.106669);
}

double NNfunction_ss_dLdL::synapse0x19d39c0() {
   return (neuron0x19aa8a0()*0.10822);
}

double NNfunction_ss_dLdL::synapse0x19d3a00() {
   return (neuron0x19aabe0()*-0.256559);
}

double NNfunction_ss_dLdL::synapse0x19d3a40() {
   return (neuron0x19aaf20()*0.707874);
}

double NNfunction_ss_dLdL::synapse0x19d3a80() {
   return (neuron0x19ab260()*-0.404879);
}

double NNfunction_ss_dLdL::synapse0x19d3ac0() {
   return (neuron0x19ab5a0()*-0.326229);
}

double NNfunction_ss_dLdL::synapse0x19d3b00() {
   return (neuron0x19ab8e0()*0.152406);
}

double NNfunction_ss_dLdL::synapse0x19d3b40() {
   return (neuron0x19abc20()*-0.0660984);
}

double NNfunction_ss_dLdL::synapse0x19d3b80() {
   return (neuron0x19abf60()*-0.0193519);
}

double NNfunction_ss_dLdL::synapse0x19d3bc0() {
   return (neuron0x19ac2a0()*-0.0286391);
}

double NNfunction_ss_dLdL::synapse0x19d3c00() {
   return (neuron0x19ac5e0()*-0.43079);
}

double NNfunction_ss_dLdL::synapse0x19d3c40() {
   return (neuron0x19ac920()*0.70531);
}

double NNfunction_ss_dLdL::synapse0x19d3c80() {
   return (neuron0x19acc60()*-0.192165);
}

double NNfunction_ss_dLdL::synapse0x19d3cc0() {
   return (neuron0x19acfa0()*0.218473);
}

double NNfunction_ss_dLdL::synapse0x19d3d00() {
   return (neuron0x19ad2e0()*0.290066);
}

double NNfunction_ss_dLdL::synapse0x19d3d40() {
   return (neuron0x19ad620()*0.202026);
}

double NNfunction_ss_dLdL::synapse0x19d37d0() {
   return (neuron0x19ad960()*0.304426);
}

double NNfunction_ss_dLdL::synapse0x19d3810() {
   return (neuron0x19adec0()*0.225205);
}

double NNfunction_ss_dLdL::synapse0x19d3e90() {
   return (neuron0x19ae0e0()*-0.125541);
}

double NNfunction_ss_dLdL::synapse0x19d3ed0() {
   return (neuron0x19ae420()*0.313967);
}

double NNfunction_ss_dLdL::synapse0x19d3f10() {
   return (neuron0x19ae760()*-0.0469708);
}

double NNfunction_ss_dLdL::synapse0x19d3f50() {
   return (neuron0x19aeaa0()*-0.121597);
}

double NNfunction_ss_dLdL::synapse0x19d3f90() {
   return (neuron0x19aede0()*-0.112524);
}

double NNfunction_ss_dLdL::synapse0x19d3fd0() {
   return (neuron0x19af120()*-0.375475);
}

double NNfunction_ss_dLdL::synapse0x19b0570() {
   return (neuron0x19af5c0()*0.264021);
}

double NNfunction_ss_dLdL::synapse0x19b05b0() {
   return (neuron0x19afed0()*1.56013);
}

double NNfunction_ss_dLdL::synapse0x19b1a80() {
   return (neuron0x19b09b0()*0.0308967);
}

double NNfunction_ss_dLdL::synapse0x19b1ac0() {
   return (neuron0x176a240()*-0.0177516);
}

double NNfunction_ss_dLdL::synapse0x19b2450() {
   return (neuron0x19b17d0()*-1.57621);
}

double NNfunction_ss_dLdL::synapse0x19b2490() {
   return (neuron0x19b21a0()*1.22039);
}

double NNfunction_ss_dLdL::synapse0x19b3220() {
   return (neuron0x19b2f70()*0.830934);
}

double NNfunction_ss_dLdL::synapse0x19b3260() {
   return (neuron0x19b3940()*0.368135);
}

double NNfunction_ss_dLdL::synapse0x19b3bf0() {
   return (neuron0x19b4310()*-1.84249);
}

double NNfunction_ss_dLdL::synapse0x19b3c30() {
   return (neuron0x19b4df0()*-1.09252);
}

double NNfunction_ss_dLdL::synapse0x19b45c0() {
   return (neuron0x19b57c0()*-1.70319);
}

double NNfunction_ss_dLdL::synapse0x19b4600() {
   return (neuron0x19b28a0()*0.699242);
}

double NNfunction_ss_dLdL::synapse0x19b50a0() {
   return (neuron0x19b7370()*-1.07242);
}

double NNfunction_ss_dLdL::synapse0x19b50e0() {
   return (neuron0x19b7d40()*0.117133);
}

double NNfunction_ss_dLdL::synapse0x19b5a70() {
   return (neuron0x19b8710()*-0.547083);
}

double NNfunction_ss_dLdL::synapse0x19b5ab0() {
   return (neuron0x19b90e0()*2.24159);
}

double NNfunction_ss_dLdL::synapse0x19b2b50() {
   return (neuron0x19baef0()*-1.50651);
}

double NNfunction_ss_dLdL::synapse0x19b2b90() {
   return (neuron0x19bb1d0()*-1.28);
}

double NNfunction_ss_dLdL::synapse0x19b7620() {
   return (neuron0x19bbba0()*0.944749);
}

double NNfunction_ss_dLdL::synapse0x19b7660() {
   return (neuron0x19bc570()*0.846035);
}

double NNfunction_ss_dLdL::synapse0x19b7ff0() {
   return (neuron0x19bcf40()*-1.32114);
}

double NNfunction_ss_dLdL::synapse0x19b8030() {
   return (neuron0x19bd910()*-1.85695);
}

double NNfunction_ss_dLdL::synapse0x19b89c0() {
   return (neuron0x19b6460()*-0.430003);
}

double NNfunction_ss_dLdL::synapse0x19b8a00() {
   return (neuron0x19b6e30()*-1.9763);
}

double NNfunction_ss_dLdL::synapse0x19b9390() {
   return (neuron0x19c06a0()*-0.22015);
}

double NNfunction_ss_dLdL::synapse0x19b93d0() {
   return (neuron0x19c1070()*-0.028945);
}

double NNfunction_ss_dLdL::synapse0x19ad500() {
   return (neuron0x19c1a40()*-0.672103);
}

double NNfunction_ss_dLdL::synapse0x19ad540() {
   return (neuron0x19c2410()*0.702721);
}

double NNfunction_ss_dLdL::synapse0x19bb480() {
   return (neuron0x19c2de0()*0.166094);
}

double NNfunction_ss_dLdL::synapse0x19bb4c0() {
   return (neuron0x19c37b0()*0.35375);
}

double NNfunction_ss_dLdL::synapse0x19bbe50() {
   return (neuron0x19c4180()*0.697153);
}

double NNfunction_ss_dLdL::synapse0x19bbe90() {
   return (neuron0x19c4b50()*-1.33802);
}

double NNfunction_ss_dLdL::synapse0x19bc820() {
   return (neuron0x19babe0()*-0.507587);
}

double NNfunction_ss_dLdL::synapse0x19bc860() {
   return (neuron0x19c7730()*-1.28175);
}

double NNfunction_ss_dLdL::synapse0x19bd1f0() {
   return (neuron0x19c8100()*-0.00244489);
}

double NNfunction_ss_dLdL::synapse0x19bd230() {
   return (neuron0x19c8ad0()*-0.390451);
}

double NNfunction_ss_dLdL::synapse0x19bdbc0() {
   return (neuron0x19c94a0()*1.02561);
}

double NNfunction_ss_dLdL::synapse0x19bdc00() {
   return (neuron0x19c9e70()*-1.17664);
}

double NNfunction_ss_dLdL::synapse0x19b6710() {
   return (neuron0x19ca840()*-1.99781);
}

double NNfunction_ss_dLdL::synapse0x19b6750() {
   return (neuron0x19cb210()*3.23468);
}

double NNfunction_ss_dLdL::synapse0x19bffc0() {
   return (neuron0x19cbbe0()*-1.2645);
}

double NNfunction_ss_dLdL::synapse0x19c0000() {
   return (neuron0x19cc7c0()*-0.467272);
}

double NNfunction_ss_dLdL::synapse0x19c0950() {
   return (neuron0x19cd190()*-0.713926);
}

double NNfunction_ss_dLdL::synapse0x19c0990() {
   return (neuron0x19be010()*0.0453186);
}

double NNfunction_ss_dLdL::synapse0x19c1320() {
   return (neuron0x19be9e0()*1.03241);
}

double NNfunction_ss_dLdL::synapse0x19c1360() {
   return (neuron0x19bf3b0()*-1.76601);
}

double NNfunction_ss_dLdL::synapse0x19c1cf0() {
   return (neuron0x19d19f0()*2.38721);
}

double NNfunction_ss_dLdL::synapse0x19c1d30() {
   return (neuron0x19d22a0()*0.813631);
}

double NNfunction_ss_dLdL::synapse0x19c26c0() {
   return (neuron0x19d2c70()*0.523607);
}

double NNfunction_ss_dLdL::synapse0x19c2700() {
   return (neuron0x19d3640()*-1.00391);
}

double NNfunction_ss_dLdL::synapse0x19c4e00() {
   return (neuron0x19af5c0()*-0.0729673);
}

double NNfunction_ss_dLdL::synapse0x19c4e40() {
   return (neuron0x19afed0()*-0.532739);
}

double NNfunction_ss_dLdL::synapse0x19ba3c0() {
   return (neuron0x19b09b0()*-0.0162297);
}

double NNfunction_ss_dLdL::synapse0x19ba400() {
   return (neuron0x176a240()*0.0921613);
}

double NNfunction_ss_dLdL::synapse0x19c79e0() {
   return (neuron0x19b17d0()*0.491327);
}

double NNfunction_ss_dLdL::synapse0x19c7a20() {
   return (neuron0x19b21a0()*0.076197);
}

double NNfunction_ss_dLdL::synapse0x19c83b0() {
   return (neuron0x19b2f70()*1.43381);
}

double NNfunction_ss_dLdL::synapse0x19c83f0() {
   return (neuron0x19b3940()*0.0373893);
}

double NNfunction_ss_dLdL::synapse0x19c8d80() {
   return (neuron0x19b4310()*0.0570252);
}

double NNfunction_ss_dLdL::synapse0x19c8dc0() {
   return (neuron0x19b4df0()*0.596225);
}

double NNfunction_ss_dLdL::synapse0x19c9750() {
   return (neuron0x19b57c0()*0.403887);
}

double NNfunction_ss_dLdL::synapse0x19c9790() {
   return (neuron0x19b28a0()*0.537191);
}

double NNfunction_ss_dLdL::synapse0x19ca120() {
   return (neuron0x19b7370()*0.26096);
}

double NNfunction_ss_dLdL::synapse0x19ca160() {
   return (neuron0x19b7d40()*0.971255);
}

double NNfunction_ss_dLdL::synapse0x19caaf0() {
   return (neuron0x19b8710()*0.919904);
}

double NNfunction_ss_dLdL::synapse0x19cab30() {
   return (neuron0x19b90e0()*-1.9423);
}

double NNfunction_ss_dLdL::synapse0x19cb4c0() {
   return (neuron0x19baef0()*0.690956);
}

double NNfunction_ss_dLdL::synapse0x19cb500() {
   return (neuron0x19bb1d0()*0.384982);
}

double NNfunction_ss_dLdL::synapse0x19cbe90() {
   return (neuron0x19bbba0()*-0.0639661);
}

double NNfunction_ss_dLdL::synapse0x19cbed0() {
   return (neuron0x19bc570()*-0.0512944);
}

double NNfunction_ss_dLdL::synapse0x19cca70() {
   return (neuron0x19bcf40()*0.0271468);
}

double NNfunction_ss_dLdL::synapse0x19ccab0() {
   return (neuron0x19bd910()*0.429082);
}

double NNfunction_ss_dLdL::synapse0x19cd440() {
   return (neuron0x19b6460()*-0.334658);
}

double NNfunction_ss_dLdL::synapse0x19cd480() {
   return (neuron0x19b6e30()*0.462966);
}

double NNfunction_ss_dLdL::synapse0x19be2c0() {
   return (neuron0x19c06a0()*0.164019);
}

double NNfunction_ss_dLdL::synapse0x19be300() {
   return (neuron0x19c1070()*-0.120441);
}

double NNfunction_ss_dLdL::synapse0x19bec90() {
   return (neuron0x19c1a40()*0.200929);
}

double NNfunction_ss_dLdL::synapse0x19becd0() {
   return (neuron0x19c2410()*0.206838);
}

double NNfunction_ss_dLdL::synapse0x19bf660() {
   return (neuron0x19c2de0()*0.0717458);
}

double NNfunction_ss_dLdL::synapse0x19bf6a0() {
   return (neuron0x19c37b0()*0.0495092);
}

double NNfunction_ss_dLdL::synapse0x19d1b80() {
   return (neuron0x19c4180()*0.0232876);
}

double NNfunction_ss_dLdL::synapse0x19d1bc0() {
   return (neuron0x19c4b50()*0.261999);
}

double NNfunction_ss_dLdL::synapse0x19d2550() {
   return (neuron0x19babe0()*-0.492739);
}

double NNfunction_ss_dLdL::synapse0x19d2590() {
   return (neuron0x19c7730()*0.856006);
}

double NNfunction_ss_dLdL::synapse0x19d2f20() {
   return (neuron0x19c8100()*0.341282);
}

double NNfunction_ss_dLdL::synapse0x19d2f60() {
   return (neuron0x19c8ad0()*0.299676);
}

double NNfunction_ss_dLdL::synapse0x19d38f0() {
   return (neuron0x19c94a0()*-0.147605);
}

double NNfunction_ss_dLdL::synapse0x19d3930() {
   return (neuron0x19c9e70()*-0.16946);
}

double NNfunction_ss_dLdL::synapse0x19af7e0() {
   return (neuron0x19ca840()*-0.28884);
}

double NNfunction_ss_dLdL::synapse0x19af820() {
   return (neuron0x19cb210()*-0.423415);
}

double NNfunction_ss_dLdL::synapse0x19c3090() {
   return (neuron0x19cbbe0()*0.413454);
}

double NNfunction_ss_dLdL::synapse0x19c30d0() {
   return (neuron0x19cc7c0()*0.134635);
}

double NNfunction_ss_dLdL::synapse0x19d4010() {
   return (neuron0x19cd190()*0.506172);
}

double NNfunction_ss_dLdL::synapse0x19d4050() {
   return (neuron0x19be010()*0.329211);
}

double NNfunction_ss_dLdL::synapse0x19d4090() {
   return (neuron0x19be9e0()*0.0254785);
}

double NNfunction_ss_dLdL::synapse0x19d40d0() {
   return (neuron0x19bf3b0()*-0.451228);
}

double NNfunction_ss_dLdL::synapse0x19daf80() {
   return (neuron0x19d19f0()*0.781447);
}

double NNfunction_ss_dLdL::synapse0x19dafc0() {
   return (neuron0x19d22a0()*0.107346);
}

double NNfunction_ss_dLdL::synapse0x19db000() {
   return (neuron0x19d2c70()*0.0285892);
}

double NNfunction_ss_dLdL::synapse0x19db040() {
   return (neuron0x19d3640()*0.546982);
}

double NNfunction_ss_dLdL::synapse0x19db3c0() {
   return (neuron0x19af5c0()*0.766137);
}

double NNfunction_ss_dLdL::synapse0x19db400() {
   return (neuron0x19afed0()*-0.0110405);
}

double NNfunction_ss_dLdL::synapse0x19db440() {
   return (neuron0x19b09b0()*0.00120834);
}

double NNfunction_ss_dLdL::synapse0x19db480() {
   return (neuron0x176a240()*-0.00329422);
}

double NNfunction_ss_dLdL::synapse0x19db4c0() {
   return (neuron0x19b17d0()*0.0080163);
}

double NNfunction_ss_dLdL::synapse0x19db500() {
   return (neuron0x19b21a0()*-0.00165193);
}

double NNfunction_ss_dLdL::synapse0x19db540() {
   return (neuron0x19b2f70()*-0.921162);
}

double NNfunction_ss_dLdL::synapse0x19db580() {
   return (neuron0x19b3940()*-0.00387521);
}

double NNfunction_ss_dLdL::synapse0x19db5c0() {
   return (neuron0x19b4310()*-0.00766928);
}

double NNfunction_ss_dLdL::synapse0x19db600() {
   return (neuron0x19b4df0()*0.0216464);
}

double NNfunction_ss_dLdL::synapse0x19db640() {
   return (neuron0x19b57c0()*0.0014856);
}

double NNfunction_ss_dLdL::synapse0x19db680() {
   return (neuron0x19b28a0()*0.0138302);
}

double NNfunction_ss_dLdL::synapse0x19db6c0() {
   return (neuron0x19b7370()*-0.0200044);
}

double NNfunction_ss_dLdL::synapse0x19db700() {
   return (neuron0x19b7d40()*-2.54187);
}

double NNfunction_ss_dLdL::synapse0x19db740() {
   return (neuron0x19b8710()*0.881391);
}

double NNfunction_ss_dLdL::synapse0x19db780() {
   return (neuron0x19b90e0()*-0.458647);
}

double NNfunction_ss_dLdL::synapse0x19db210() {
   return (neuron0x19baef0()*-0.734898);
}

double NNfunction_ss_dLdL::synapse0x19db250() {
   return (neuron0x19bb1d0()*-0.000381802);
}

double NNfunction_ss_dLdL::synapse0x19db8d0() {
   return (neuron0x19bbba0()*0.00494577);
}

double NNfunction_ss_dLdL::synapse0x19db910() {
   return (neuron0x19bc570()*0.0134761);
}

double NNfunction_ss_dLdL::synapse0x19db950() {
   return (neuron0x19bcf40()*0.0141155);
}

double NNfunction_ss_dLdL::synapse0x19db990() {
   return (neuron0x19bd910()*0.00686368);
}

double NNfunction_ss_dLdL::synapse0x19db9d0() {
   return (neuron0x19b6460()*0.590929);
}

double NNfunction_ss_dLdL::synapse0x19dba10() {
   return (neuron0x19b6e30()*0.00456873);
}

double NNfunction_ss_dLdL::synapse0x19dba50() {
   return (neuron0x19c06a0()*0.00813321);
}

double NNfunction_ss_dLdL::synapse0x19dba90() {
   return (neuron0x19c1070()*0.000873052);
}

double NNfunction_ss_dLdL::synapse0x19dbad0() {
   return (neuron0x19c1a40()*-0.00657972);
}

double NNfunction_ss_dLdL::synapse0x19dbb10() {
   return (neuron0x19c2410()*-0.984076);
}

double NNfunction_ss_dLdL::synapse0x19dbb50() {
   return (neuron0x19c2de0()*0.00646626);
}

double NNfunction_ss_dLdL::synapse0x19dbb90() {
   return (neuron0x19c37b0()*-2.13029);
}

double NNfunction_ss_dLdL::synapse0x19dbbd0() {
   return (neuron0x19c4180()*0.00281032);
}

double NNfunction_ss_dLdL::synapse0x19dbc10() {
   return (neuron0x19c4b50()*-0.00368595);
}

double NNfunction_ss_dLdL::synapse0x19db7c0() {
   return (neuron0x19babe0()*0.0832676);
}

double NNfunction_ss_dLdL::synapse0x19db800() {
   return (neuron0x19c7730()*0.0297893);
}

double NNfunction_ss_dLdL::synapse0x19db840() {
   return (neuron0x19c8100()*2.77287);
}

double NNfunction_ss_dLdL::synapse0x19db880() {
   return (neuron0x19c8ad0()*0.00549194);
}

double NNfunction_ss_dLdL::synapse0x19dbe60() {
   return (neuron0x19c94a0()*0.0765282);
}

double NNfunction_ss_dLdL::synapse0x19dbea0() {
   return (neuron0x19c9e70()*0.0148412);
}

double NNfunction_ss_dLdL::synapse0x19dbee0() {
   return (neuron0x19ca840()*0.847275);
}

double NNfunction_ss_dLdL::synapse0x19dbf20() {
   return (neuron0x19cb210()*-0.0269663);
}

double NNfunction_ss_dLdL::synapse0x19dbf60() {
   return (neuron0x19cbbe0()*0.0068481);
}

double NNfunction_ss_dLdL::synapse0x19dbfa0() {
   return (neuron0x19cc7c0()*0.00935341);
}

double NNfunction_ss_dLdL::synapse0x19dbfe0() {
   return (neuron0x19cd190()*0.0058348);
}

double NNfunction_ss_dLdL::synapse0x19dc020() {
   return (neuron0x19be010()*0.66732);
}

double NNfunction_ss_dLdL::synapse0x19dc060() {
   return (neuron0x19be9e0()*-0.0117177);
}

double NNfunction_ss_dLdL::synapse0x19dc0a0() {
   return (neuron0x19bf3b0()*0.392734);
}

double NNfunction_ss_dLdL::synapse0x19dc0e0() {
   return (neuron0x19d19f0()*0.0707355);
}

double NNfunction_ss_dLdL::synapse0x19dc120() {
   return (neuron0x19d22a0()*-0.00818482);
}

double NNfunction_ss_dLdL::synapse0x19dc160() {
   return (neuron0x19d2c70()*4.08893);
}

double NNfunction_ss_dLdL::synapse0x19dc1a0() {
   return (neuron0x19d3640()*0.00206345);
}

double NNfunction_ss_dLdL::synapse0x19dc520() {
   return (neuron0x19af5c0()*2.24825);
}

double NNfunction_ss_dLdL::synapse0x19dc560() {
   return (neuron0x19afed0()*-0.245953);
}

double NNfunction_ss_dLdL::synapse0x19dc5a0() {
   return (neuron0x19b09b0()*0.346305);
}

double NNfunction_ss_dLdL::synapse0x19dc5e0() {
   return (neuron0x176a240()*0.579157);
}

double NNfunction_ss_dLdL::synapse0x19dc620() {
   return (neuron0x19b17d0()*0.732624);
}

double NNfunction_ss_dLdL::synapse0x19dc660() {
   return (neuron0x19b21a0()*-1.37768);
}

double NNfunction_ss_dLdL::synapse0x19dc6a0() {
   return (neuron0x19b2f70()*-0.0199554);
}

double NNfunction_ss_dLdL::synapse0x19dc6e0() {
   return (neuron0x19b3940()*-1.07987);
}

double NNfunction_ss_dLdL::synapse0x19dc720() {
   return (neuron0x19b4310()*-2.68525);
}

double NNfunction_ss_dLdL::synapse0x19dc760() {
   return (neuron0x19b4df0()*0.00819555);
}

double NNfunction_ss_dLdL::synapse0x19dc7a0() {
   return (neuron0x19b57c0()*0.371321);
}

double NNfunction_ss_dLdL::synapse0x19dc7e0() {
   return (neuron0x19b28a0()*1.93327);
}

double NNfunction_ss_dLdL::synapse0x19dc820() {
   return (neuron0x19b7370()*0.60656);
}

double NNfunction_ss_dLdL::synapse0x19dc860() {
   return (neuron0x19b7d40()*-1.62224);
}

double NNfunction_ss_dLdL::synapse0x19dc8a0() {
   return (neuron0x19b8710()*0.485623);
}

double NNfunction_ss_dLdL::synapse0x19dc8e0() {
   return (neuron0x19b90e0()*-1.09239);
}

double NNfunction_ss_dLdL::synapse0x19dc370() {
   return (neuron0x19baef0()*2.30589);
}

double NNfunction_ss_dLdL::synapse0x19dc3b0() {
   return (neuron0x19bb1d0()*1.39902);
}

double NNfunction_ss_dLdL::synapse0x19dca30() {
   return (neuron0x19bbba0()*0.799682);
}

double NNfunction_ss_dLdL::synapse0x19dca70() {
   return (neuron0x19bc570()*0.3379);
}

double NNfunction_ss_dLdL::synapse0x19dcab0() {
   return (neuron0x19bcf40()*1.58367);
}

double NNfunction_ss_dLdL::synapse0x19dcaf0() {
   return (neuron0x19bd910()*0.09999);
}

double NNfunction_ss_dLdL::synapse0x19dcb30() {
   return (neuron0x19b6460()*-6.82141);
}

double NNfunction_ss_dLdL::synapse0x19dcb70() {
   return (neuron0x19b6e30()*1.19277);
}

double NNfunction_ss_dLdL::synapse0x19dcbb0() {
   return (neuron0x19c06a0()*0.652779);
}

double NNfunction_ss_dLdL::synapse0x19dcbf0() {
   return (neuron0x19c1070()*-0.399719);
}

double NNfunction_ss_dLdL::synapse0x19dcc30() {
   return (neuron0x19c1a40()*0.424077);
}

double NNfunction_ss_dLdL::synapse0x19dcc70() {
   return (neuron0x19c2410()*-0.275613);
}

double NNfunction_ss_dLdL::synapse0x19dccb0() {
   return (neuron0x19c2de0()*-0.312278);
}

double NNfunction_ss_dLdL::synapse0x19dccf0() {
   return (neuron0x19c37b0()*-0.641216);
}

double NNfunction_ss_dLdL::synapse0x19dcd30() {
   return (neuron0x19c4180()*-0.969484);
}

double NNfunction_ss_dLdL::synapse0x19dcd70() {
   return (neuron0x19c4b50()*0.87492);
}

double NNfunction_ss_dLdL::synapse0x19dc920() {
   return (neuron0x19babe0()*-0.403352);
}

double NNfunction_ss_dLdL::synapse0x19dc960() {
   return (neuron0x19c7730()*2.18678);
}

double NNfunction_ss_dLdL::synapse0x19dc9a0() {
   return (neuron0x19c8100()*0.493951);
}

double NNfunction_ss_dLdL::synapse0x19dc9e0() {
   return (neuron0x19c8ad0()*0.352347);
}

double NNfunction_ss_dLdL::synapse0x19dcfc0() {
   return (neuron0x19c94a0()*-2.13454);
}

double NNfunction_ss_dLdL::synapse0x19dd000() {
   return (neuron0x19c9e70()*-1.41937);
}

double NNfunction_ss_dLdL::synapse0x19dd040() {
   return (neuron0x19ca840()*1.27212);
}

double NNfunction_ss_dLdL::synapse0x19dd080() {
   return (neuron0x19cb210()*-0.525712);
}

double NNfunction_ss_dLdL::synapse0x19dd0c0() {
   return (neuron0x19cbbe0()*1.31194);
}

double NNfunction_ss_dLdL::synapse0x19dd100() {
   return (neuron0x19cc7c0()*-0.673355);
}

double NNfunction_ss_dLdL::synapse0x19dd140() {
   return (neuron0x19cd190()*0.279657);
}

double NNfunction_ss_dLdL::synapse0x19dd180() {
   return (neuron0x19be010()*-1.09422);
}

double NNfunction_ss_dLdL::synapse0x19dd1c0() {
   return (neuron0x19be9e0()*-0.204417);
}

double NNfunction_ss_dLdL::synapse0x19dd200() {
   return (neuron0x19bf3b0()*-3.3626);
}

double NNfunction_ss_dLdL::synapse0x19dd240() {
   return (neuron0x19d19f0()*3.41011);
}

double NNfunction_ss_dLdL::synapse0x19dd280() {
   return (neuron0x19d22a0()*0.194276);
}

double NNfunction_ss_dLdL::synapse0x19dd2c0() {
   return (neuron0x19d2c70()*-1.09463);
}

double NNfunction_ss_dLdL::synapse0x19dd300() {
   return (neuron0x19d3640()*1.87127);
}

double NNfunction_ss_dLdL::synapse0x19dd680() {
   return (neuron0x19af5c0()*7.60606);
}

double NNfunction_ss_dLdL::synapse0x19dd6c0() {
   return (neuron0x19afed0()*-1.64942);
}

double NNfunction_ss_dLdL::synapse0x19dd700() {
   return (neuron0x19b09b0()*-0.828631);
}

double NNfunction_ss_dLdL::synapse0x19dd740() {
   return (neuron0x176a240()*-0.957828);
}

double NNfunction_ss_dLdL::synapse0x19dd780() {
   return (neuron0x19b17d0()*-0.374367);
}

double NNfunction_ss_dLdL::synapse0x19dd7c0() {
   return (neuron0x19b21a0()*0.30757);
}

double NNfunction_ss_dLdL::synapse0x19dd800() {
   return (neuron0x19b2f70()*0.333437);
}

double NNfunction_ss_dLdL::synapse0x19dd840() {
   return (neuron0x19b3940()*0.455245);
}

double NNfunction_ss_dLdL::synapse0x19dd880() {
   return (neuron0x19b4310()*-2.76811);
}

double NNfunction_ss_dLdL::synapse0x19dd8c0() {
   return (neuron0x19b4df0()*1.54797);
}

double NNfunction_ss_dLdL::synapse0x19dd900() {
   return (neuron0x19b57c0()*0.575627);
}

double NNfunction_ss_dLdL::synapse0x19dd940() {
   return (neuron0x19b28a0()*2.81955);
}

double NNfunction_ss_dLdL::synapse0x19dd980() {
   return (neuron0x19b7370()*-0.628111);
}

double NNfunction_ss_dLdL::synapse0x19dd9c0() {
   return (neuron0x19b7d40()*-3.69956);
}

double NNfunction_ss_dLdL::synapse0x19dda00() {
   return (neuron0x19b8710()*0.126578);
}

double NNfunction_ss_dLdL::synapse0x19dda40() {
   return (neuron0x19b90e0()*1.09918);
}

double NNfunction_ss_dLdL::synapse0x19dd4d0() {
   return (neuron0x19baef0()*1.26963);
}

double NNfunction_ss_dLdL::synapse0x19dd510() {
   return (neuron0x19bb1d0()*0.404381);
}

double NNfunction_ss_dLdL::synapse0x19ddb90() {
   return (neuron0x19bbba0()*-0.578955);
}

double NNfunction_ss_dLdL::synapse0x19ddbd0() {
   return (neuron0x19bc570()*-0.623031);
}

double NNfunction_ss_dLdL::synapse0x19ddc10() {
   return (neuron0x19bcf40()*0.196051);
}

double NNfunction_ss_dLdL::synapse0x19ddc50() {
   return (neuron0x19bd910()*1.35311);
}

double NNfunction_ss_dLdL::synapse0x19ddc90() {
   return (neuron0x19b6460()*-1.20118);
}

double NNfunction_ss_dLdL::synapse0x19ddcd0() {
   return (neuron0x19b6e30()*-0.0588353);
}

double NNfunction_ss_dLdL::synapse0x19ddd10() {
   return (neuron0x19c06a0()*-0.215139);
}

double NNfunction_ss_dLdL::synapse0x19ddd50() {
   return (neuron0x19c1070()*-1.50922);
}

double NNfunction_ss_dLdL::synapse0x19ddd90() {
   return (neuron0x19c1a40()*-0.703464);
}

double NNfunction_ss_dLdL::synapse0x19dddd0() {
   return (neuron0x19c2410()*0.955248);
}

double NNfunction_ss_dLdL::synapse0x19dde10() {
   return (neuron0x19c2de0()*1.03535);
}

double NNfunction_ss_dLdL::synapse0x19dde50() {
   return (neuron0x19c37b0()*0.226431);
}

double NNfunction_ss_dLdL::synapse0x19dde90() {
   return (neuron0x19c4180()*0.541394);
}

double NNfunction_ss_dLdL::synapse0x19dded0() {
   return (neuron0x19c4b50()*-0.150516);
}

double NNfunction_ss_dLdL::synapse0x19dda80() {
   return (neuron0x19babe0()*-0.964707);
}

double NNfunction_ss_dLdL::synapse0x19ddac0() {
   return (neuron0x19c7730()*0.0693594);
}

double NNfunction_ss_dLdL::synapse0x19ddb00() {
   return (neuron0x19c8100()*0.156233);
}

double NNfunction_ss_dLdL::synapse0x19ddb40() {
   return (neuron0x19c8ad0()*1.61934);
}

double NNfunction_ss_dLdL::synapse0x19de120() {
   return (neuron0x19c94a0()*-3.62771);
}

double NNfunction_ss_dLdL::synapse0x19de160() {
   return (neuron0x19c9e70()*-0.822933);
}

double NNfunction_ss_dLdL::synapse0x19de1a0() {
   return (neuron0x19ca840()*0.809826);
}

double NNfunction_ss_dLdL::synapse0x19de1e0() {
   return (neuron0x19cb210()*0.843546);
}

double NNfunction_ss_dLdL::synapse0x19de220() {
   return (neuron0x19cbbe0()*-0.632876);
}

double NNfunction_ss_dLdL::synapse0x19de260() {
   return (neuron0x19cc7c0()*0.576295);
}

double NNfunction_ss_dLdL::synapse0x19de2a0() {
   return (neuron0x19cd190()*1.69925);
}

double NNfunction_ss_dLdL::synapse0x19de2e0() {
   return (neuron0x19be010()*0.717482);
}

double NNfunction_ss_dLdL::synapse0x19de320() {
   return (neuron0x19be9e0()*0.837157);
}

double NNfunction_ss_dLdL::synapse0x19de360() {
   return (neuron0x19bf3b0()*-2.50821);
}

double NNfunction_ss_dLdL::synapse0x19de3a0() {
   return (neuron0x19d19f0()*2.60709);
}

double NNfunction_ss_dLdL::synapse0x19de3e0() {
   return (neuron0x19d22a0()*-1.66107);
}

double NNfunction_ss_dLdL::synapse0x19de420() {
   return (neuron0x19d2c70()*-0.787496);
}

double NNfunction_ss_dLdL::synapse0x19de460() {
   return (neuron0x19d3640()*-0.166513);
}

double NNfunction_ss_dLdL::synapse0x19af580() {
   return (neuron0x19da840()*5.58363);
}

double NNfunction_ss_dLdL::synapse0x19de6c0() {
   return (neuron0x19dabe0()*4.01391);
}

double NNfunction_ss_dLdL::synapse0x19de700() {
   return (neuron0x19db080()*-11.6193);
}

double NNfunction_ss_dLdL::synapse0x19de740() {
   return (neuron0x19dc1e0()*-7.1798);
}

double NNfunction_ss_dLdL::synapse0x19de780() {
   return (neuron0x19dd340()*7.31126);
}

