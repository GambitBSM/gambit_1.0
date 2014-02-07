#include "NNfunction_sb_dLdR.h"
#include <cmath>

double NNfunction_sb_dLdR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.545)/15.3448;
   input1 = (in1 - 0.60378)/1146.35;
   input2 = (in2 - 664.902)/625.722;
   input3 = (in3 - -53.8362)/829.277;
   input4 = (in4 - 1048.88)/944.114;
   input5 = (in5 - 882.705)/933.492;
   input6 = (in6 - 899.721)/936.607;
   input7 = (in7 - 918.155)/926.236;
   input8 = (in8 - 931.679)/981.111;
   input9 = (in9 - 900.266)/955.418;
   input10 = (in10 - 992.021)/960.963;
   input11 = (in11 - 444.166)/479.712;
   input12 = (in12 - 736.68)/887.157;
   input13 = (in13 - 504.937)/526.252;
   input14 = (in14 - 708.125)/807.378;
   input15 = (in15 - 710.167)/805.462;
   input16 = (in16 - 532.287)/558.081;
   input17 = (in17 - 454.084)/489.899;
   input18 = (in18 - 756.553)/905.477;
   input19 = (in19 - 806.114)/888.429;
   input20 = (in20 - -5.77602)/491.044;
   input21 = (in21 - 1.36367)/1159.9;
   input22 = (in22 - 0.507269)/1211.65;
   input23 = (in23 - -195.501)/597.672;
   switch(index) {
     case 0:
         return neuron0x1df04b0();
     default:
         return 0.;
   }
}

double NNfunction_sb_dLdR::Value(int index, double* input) {
   input0 = (input[0] - 23.545)/15.3448;
   input1 = (input[1] - 0.60378)/1146.35;
   input2 = (input[2] - 664.902)/625.722;
   input3 = (input[3] - -53.8362)/829.277;
   input4 = (input[4] - 1048.88)/944.114;
   input5 = (input[5] - 882.705)/933.492;
   input6 = (input[6] - 899.721)/936.607;
   input7 = (input[7] - 918.155)/926.236;
   input8 = (input[8] - 931.679)/981.111;
   input9 = (input[9] - 900.266)/955.418;
   input10 = (input[10] - 992.021)/960.963;
   input11 = (input[11] - 444.166)/479.712;
   input12 = (input[12] - 736.68)/887.157;
   input13 = (input[13] - 504.937)/526.252;
   input14 = (input[14] - 708.125)/807.378;
   input15 = (input[15] - 710.167)/805.462;
   input16 = (input[16] - 532.287)/558.081;
   input17 = (input[17] - 454.084)/489.899;
   input18 = (input[18] - 756.553)/905.477;
   input19 = (input[19] - 806.114)/888.429;
   input20 = (input[20] - -5.77602)/491.044;
   input21 = (input[21] - 1.36367)/1159.9;
   input22 = (input[22] - 0.507269)/1211.65;
   input23 = (input[23] - -195.501)/597.672;
   switch(index) {
     case 0:
         return neuron0x1df04b0();
     default:
         return 0.;
   }
}

double NNfunction_sb_dLdR::neuron0x1dbc570() {
   return input0;
}

double NNfunction_sb_dLdR::neuron0x1dbc8b0() {
   return input1;
}

double NNfunction_sb_dLdR::neuron0x1dbcbf0() {
   return input2;
}

double NNfunction_sb_dLdR::neuron0x1dbcf30() {
   return input3;
}

double NNfunction_sb_dLdR::neuron0x1dbd270() {
   return input4;
}

double NNfunction_sb_dLdR::neuron0x1dbd5b0() {
   return input5;
}

double NNfunction_sb_dLdR::neuron0x1dbd8f0() {
   return input6;
}

double NNfunction_sb_dLdR::neuron0x1dbdc30() {
   return input7;
}

double NNfunction_sb_dLdR::neuron0x1dbdf70() {
   return input8;
}

double NNfunction_sb_dLdR::neuron0x1dbe2b0() {
   return input9;
}

double NNfunction_sb_dLdR::neuron0x1dbe5f0() {
   return input10;
}

double NNfunction_sb_dLdR::neuron0x1dbe930() {
   return input11;
}

double NNfunction_sb_dLdR::neuron0x1dbec70() {
   return input12;
}

double NNfunction_sb_dLdR::neuron0x1dbefb0() {
   return input13;
}

double NNfunction_sb_dLdR::neuron0x1dbf2f0() {
   return input14;
}

double NNfunction_sb_dLdR::neuron0x1dbf630() {
   return input15;
}

double NNfunction_sb_dLdR::neuron0x1dbf970() {
   return input16;
}

double NNfunction_sb_dLdR::neuron0x1dbfed0() {
   return input17;
}

double NNfunction_sb_dLdR::neuron0x1dc00f0() {
   return input18;
}

double NNfunction_sb_dLdR::neuron0x1dc0430() {
   return input19;
}

double NNfunction_sb_dLdR::neuron0x1dc0770() {
   return input20;
}

double NNfunction_sb_dLdR::neuron0x1dc0ab0() {
   return input21;
}

double NNfunction_sb_dLdR::neuron0x1dc0df0() {
   return input22;
}

double NNfunction_sb_dLdR::neuron0x1dc1130() {
   return input23;
}

double NNfunction_sb_dLdR::input0x1dc15d0() {
   double input = -0.14067;
   input += synapse0x1b7c3e0();
   input += synapse0x1dbc430();
   input += synapse0x1dbc470();
   input += synapse0x1dc1880();
   input += synapse0x1dc18c0();
   input += synapse0x1dc1900();
   input += synapse0x1dc1940();
   input += synapse0x1dc1980();
   input += synapse0x1dc19c0();
   input += synapse0x1dc1a00();
   input += synapse0x1dc1a40();
   input += synapse0x1dc1a80();
   input += synapse0x1dc1ac0();
   input += synapse0x1dc1b00();
   input += synapse0x1dc1b40();
   input += synapse0x1dc1b80();
   input += synapse0x1dbc3a0();
   input += synapse0x1dbc3e0();
   input += synapse0x1b6dc80();
   input += synapse0x1b6dcc0();
   input += synapse0x1dc1de0();
   input += synapse0x1dc1e20();
   input += synapse0x1dc1e60();
   input += synapse0x1dc1ea0();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dc15d0() {
   double input = input0x1dc15d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1dc1ee0() {
   double input = -5.03201;
   input += synapse0x1dc2220();
   input += synapse0x1dc2260();
   input += synapse0x1dc22a0();
   input += synapse0x1dc22e0();
   input += synapse0x1dc2320();
   input += synapse0x1dc2360();
   input += synapse0x1dc23a0();
   input += synapse0x1dc23e0();
   input += synapse0x1dc2420();
   input += synapse0x1dc1cd0();
   input += synapse0x1dc1d10();
   input += synapse0x1dc1d50();
   input += synapse0x1dc1d90();
   input += synapse0x1dc2670();
   input += synapse0x1dc26b0();
   input += synapse0x1dc26f0();
   input += synapse0x1dc2070();
   input += synapse0x1dc20b0();
   input += synapse0x1dc2840();
   input += synapse0x1dc2880();
   input += synapse0x1dc28c0();
   input += synapse0x1dc2900();
   input += synapse0x1dc2940();
   input += synapse0x1dc2980();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dc1ee0() {
   double input = input0x1dc1ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1dc29c0() {
   double input = 0.450008;
   input += synapse0x1dc2d00();
   input += synapse0x1dc2d40();
   input += synapse0x1dc2d80();
   input += synapse0x1dc2dc0();
   input += synapse0x1dc2e00();
   input += synapse0x1dc2e40();
   input += synapse0x1dc2e80();
   input += synapse0x1dc2ec0();
   input += synapse0x1dc2f00();
   input += synapse0x1dc2f40();
   input += synapse0x1dc2f80();
   input += synapse0x1dc2fc0();
   input += synapse0x1dc3000();
   input += synapse0x1dc3040();
   input += synapse0x1dc3080();
   input += synapse0x1dc30c0();
   input += synapse0x1dc2b50();
   input += synapse0x1dc2b90();
   input += synapse0x1b7bad0();
   input += synapse0x1b7bb10();
   input += synapse0x1dab600();
   input += synapse0x1dab640();
   input += synapse0x1dab680();
   input += synapse0x1dbc4b0();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dc29c0() {
   double input = input0x1dc29c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1b7c250() {
   double input = 0.15172;
   input += synapse0x1dc2610();
   input += synapse0x1dbc4f0();
   input += synapse0x1dbc530();
   input += synapse0x1dc3210();
   input += synapse0x1dc3250();
   input += synapse0x1dc3290();
   input += synapse0x1dc32d0();
   input += synapse0x1dc3310();
   input += synapse0x1dc3350();
   input += synapse0x1dc3390();
   input += synapse0x1dc33d0();
   input += synapse0x1dc3410();
   input += synapse0x1dc3450();
   input += synapse0x1dc3490();
   input += synapse0x1dc34d0();
   input += synapse0x1dc3510();
   input += synapse0x1dc2460();
   input += synapse0x1dc24a0();
   input += synapse0x1dc3660();
   input += synapse0x1dc36a0();
   input += synapse0x1dc36e0();
   input += synapse0x1dc3720();
   input += synapse0x1dc3760();
   input += synapse0x1dc37a0();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1b7c250() {
   double input = input0x1b7c250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1dc37e0() {
   double input = -0.028787;
   input += synapse0x1dc3b20();
   input += synapse0x1dc3b60();
   input += synapse0x1dc3ba0();
   input += synapse0x1dc3be0();
   input += synapse0x1dc3c20();
   input += synapse0x1dc3c60();
   input += synapse0x1dc3ca0();
   input += synapse0x1dc3ce0();
   input += synapse0x1dc3d20();
   input += synapse0x1dc3d60();
   input += synapse0x1dc3da0();
   input += synapse0x1dc3de0();
   input += synapse0x1dc3e20();
   input += synapse0x1dc3e60();
   input += synapse0x1dc3ea0();
   input += synapse0x1dc3ee0();
   input += synapse0x1dc3970();
   input += synapse0x1dc39b0();
   input += synapse0x1dc4030();
   input += synapse0x1dc4070();
   input += synapse0x1dc40b0();
   input += synapse0x1dc40f0();
   input += synapse0x1dc4130();
   input += synapse0x1dc4170();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dc37e0() {
   double input = input0x1dc37e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1dc41b0() {
   double input = -1.33307;
   input += synapse0x1dc44f0();
   input += synapse0x1dc4530();
   input += synapse0x1dc4570();
   input += synapse0x1dc45b0();
   input += synapse0x1dc45f0();
   input += synapse0x1dc4630();
   input += synapse0x1dc4670();
   input += synapse0x1dc46b0();
   input += synapse0x1dc46f0();
   input += synapse0x1b7be40();
   input += synapse0x1b7be80();
   input += synapse0x1b7bec0();
   input += synapse0x1b7bf00();
   input += synapse0x1b7bf40();
   input += synapse0x1b7bf80();
   input += synapse0x1b7bfc0();
   input += synapse0x1dc4340();
   input += synapse0x1dc4380();
   input += synapse0x1b7c110();
   input += synapse0x1b7c150();
   input += synapse0x1b7c190();
   input += synapse0x1b7c1d0();
   input += synapse0x1b7c210();
   input += synapse0x1dc4f40();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dc41b0() {
   double input = input0x1dc41b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1dc4f80() {
   double input = -0.993639;
   input += synapse0x1dc52c0();
   input += synapse0x1dc5300();
   input += synapse0x1dc5340();
   input += synapse0x1dc5380();
   input += synapse0x1dc53c0();
   input += synapse0x1dc5400();
   input += synapse0x1dc5440();
   input += synapse0x1dc5480();
   input += synapse0x1dc54c0();
   input += synapse0x1dc5500();
   input += synapse0x1dc5540();
   input += synapse0x1dc5580();
   input += synapse0x1dc55c0();
   input += synapse0x1dc5600();
   input += synapse0x1dc5640();
   input += synapse0x1dc5680();
   input += synapse0x1dc5110();
   input += synapse0x1dc5150();
   input += synapse0x1dc57d0();
   input += synapse0x1dc5810();
   input += synapse0x1dc5850();
   input += synapse0x1dc5890();
   input += synapse0x1dc58d0();
   input += synapse0x1dc5910();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dc4f80() {
   double input = input0x1dc4f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1dc5950() {
   double input = -0.24573;
   input += synapse0x1dc5c90();
   input += synapse0x1dc5cd0();
   input += synapse0x1dc5d10();
   input += synapse0x1dc5d50();
   input += synapse0x1dc5d90();
   input += synapse0x1dc5dd0();
   input += synapse0x1dc5e10();
   input += synapse0x1dc5e50();
   input += synapse0x1dc5e90();
   input += synapse0x1dc5ed0();
   input += synapse0x1dc5f10();
   input += synapse0x1dc5f50();
   input += synapse0x1dc5f90();
   input += synapse0x1dc5fd0();
   input += synapse0x1dc6010();
   input += synapse0x1dc6050();
   input += synapse0x1dc5ae0();
   input += synapse0x1dc5b20();
   input += synapse0x1dc61a0();
   input += synapse0x1dc61e0();
   input += synapse0x1dc6220();
   input += synapse0x1dc6260();
   input += synapse0x1dc62a0();
   input += synapse0x1dc62e0();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dc5950() {
   double input = input0x1dc5950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1dc6320() {
   double input = 2.67145;
   input += synapse0x1dbfdc0();
   input += synapse0x1dbfe00();
   input += synapse0x1dbfe40();
   input += synapse0x1dbfe80();
   input += synapse0x1dc6870();
   input += synapse0x1dc68b0();
   input += synapse0x1dc68f0();
   input += synapse0x1dc6930();
   input += synapse0x1dc6970();
   input += synapse0x1dc69b0();
   input += synapse0x1dc69f0();
   input += synapse0x1dc6a30();
   input += synapse0x1dc6a70();
   input += synapse0x1dc6ab0();
   input += synapse0x1dc6af0();
   input += synapse0x1dc6b30();
   input += synapse0x1dc64b0();
   input += synapse0x1dc64f0();
   input += synapse0x1dc6c80();
   input += synapse0x1dc6cc0();
   input += synapse0x1dc6d00();
   input += synapse0x1dc6d40();
   input += synapse0x1dc6d80();
   input += synapse0x1dc6dc0();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dc6320() {
   double input = input0x1dc6320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1dc6e00() {
   double input = -1.41793;
   input += synapse0x1dc7140();
   input += synapse0x1dc7180();
   input += synapse0x1dc71c0();
   input += synapse0x1dc7200();
   input += synapse0x1dc7240();
   input += synapse0x1dc7280();
   input += synapse0x1dc72c0();
   input += synapse0x1dc7300();
   input += synapse0x1dc7340();
   input += synapse0x1dc7380();
   input += synapse0x1dc73c0();
   input += synapse0x1dc7400();
   input += synapse0x1dc7440();
   input += synapse0x1dc7480();
   input += synapse0x1dc74c0();
   input += synapse0x1dc7500();
   input += synapse0x1dc6f90();
   input += synapse0x1dc6fd0();
   input += synapse0x1dc7650();
   input += synapse0x1dc7690();
   input += synapse0x1dc76d0();
   input += synapse0x1dc7710();
   input += synapse0x1dc7750();
   input += synapse0x1dc7790();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dc6e00() {
   double input = input0x1dc6e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1dc77d0() {
   double input = -0.0795568;
   input += synapse0x1dc7b10();
   input += synapse0x1dc7b50();
   input += synapse0x1dc7b90();
   input += synapse0x1dc7bd0();
   input += synapse0x1dc7c10();
   input += synapse0x1dc7c50();
   input += synapse0x1dc7c90();
   input += synapse0x1dc7cd0();
   input += synapse0x1dc7d10();
   input += synapse0x1dc7d50();
   input += synapse0x1dc7d90();
   input += synapse0x1dc7dd0();
   input += synapse0x1dc7e10();
   input += synapse0x1dc7e50();
   input += synapse0x1dc7e90();
   input += synapse0x1dc7ed0();
   input += synapse0x1dc7960();
   input += synapse0x1dc79a0();
   input += synapse0x1dc4730();
   input += synapse0x1dc4770();
   input += synapse0x1dc47b0();
   input += synapse0x1dc47f0();
   input += synapse0x1dc4830();
   input += synapse0x1dc4870();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dc77d0() {
   double input = input0x1dc77d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1dc48b0() {
   double input = -0.163339;
   input += synapse0x1dc4bf0();
   input += synapse0x1dc4c30();
   input += synapse0x1dc4c70();
   input += synapse0x1dc4cb0();
   input += synapse0x1dc4cf0();
   input += synapse0x1dc4d30();
   input += synapse0x1dc4d70();
   input += synapse0x1dc4db0();
   input += synapse0x1dc4df0();
   input += synapse0x1dc4e30();
   input += synapse0x1dc4e70();
   input += synapse0x1dc4eb0();
   input += synapse0x1dc4ef0();
   input += synapse0x1dc9030();
   input += synapse0x1dc9070();
   input += synapse0x1dc90b0();
   input += synapse0x1dc4a40();
   input += synapse0x1dc4a80();
   input += synapse0x1dc9200();
   input += synapse0x1dc9240();
   input += synapse0x1dc9280();
   input += synapse0x1dc92c0();
   input += synapse0x1dc9300();
   input += synapse0x1dc9340();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dc48b0() {
   double input = input0x1dc48b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1dc9380() {
   double input = 0.303364;
   input += synapse0x1dc96c0();
   input += synapse0x1dc9700();
   input += synapse0x1dc9740();
   input += synapse0x1dc9780();
   input += synapse0x1dc97c0();
   input += synapse0x1dc9800();
   input += synapse0x1dc9840();
   input += synapse0x1dc9880();
   input += synapse0x1dc98c0();
   input += synapse0x1dc9900();
   input += synapse0x1dc9940();
   input += synapse0x1dc9980();
   input += synapse0x1dc99c0();
   input += synapse0x1dc9a00();
   input += synapse0x1dc9a40();
   input += synapse0x1dc9a80();
   input += synapse0x1dc9510();
   input += synapse0x1dc9550();
   input += synapse0x1dc9bd0();
   input += synapse0x1dc9c10();
   input += synapse0x1dc9c50();
   input += synapse0x1dc9c90();
   input += synapse0x1dc9cd0();
   input += synapse0x1dc9d10();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dc9380() {
   double input = input0x1dc9380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1dc9d50() {
   double input = -1.58691;
   input += synapse0x1dca090();
   input += synapse0x1dca0d0();
   input += synapse0x1dca110();
   input += synapse0x1dca150();
   input += synapse0x1dca190();
   input += synapse0x1dca1d0();
   input += synapse0x1dca210();
   input += synapse0x1dca250();
   input += synapse0x1dca290();
   input += synapse0x1dca2d0();
   input += synapse0x1dca310();
   input += synapse0x1dca350();
   input += synapse0x1dca390();
   input += synapse0x1dca3d0();
   input += synapse0x1dca410();
   input += synapse0x1dca450();
   input += synapse0x1dc9ee0();
   input += synapse0x1dc9f20();
   input += synapse0x1dca5a0();
   input += synapse0x1dca5e0();
   input += synapse0x1dca620();
   input += synapse0x1dca660();
   input += synapse0x1dca6a0();
   input += synapse0x1dca6e0();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dc9d50() {
   double input = input0x1dc9d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1dca720() {
   double input = -0.590564;
   input += synapse0x1dcaa60();
   input += synapse0x1dcaaa0();
   input += synapse0x1dcaae0();
   input += synapse0x1dcab20();
   input += synapse0x1dcab60();
   input += synapse0x1dcaba0();
   input += synapse0x1dcabe0();
   input += synapse0x1dcac20();
   input += synapse0x1dcac60();
   input += synapse0x1dcaca0();
   input += synapse0x1dcace0();
   input += synapse0x1dcad20();
   input += synapse0x1dcad60();
   input += synapse0x1dcada0();
   input += synapse0x1dcade0();
   input += synapse0x1dcae20();
   input += synapse0x1dca8b0();
   input += synapse0x1dca8f0();
   input += synapse0x1dcaf70();
   input += synapse0x1dcafb0();
   input += synapse0x1dcaff0();
   input += synapse0x1dcb030();
   input += synapse0x1dcb070();
   input += synapse0x1dcb0b0();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dca720() {
   double input = input0x1dca720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1dcb0f0() {
   double input = 0.119076;
   input += synapse0x1dcb430();
   input += synapse0x1dbc790();
   input += synapse0x1dbc7d0();
   input += synapse0x1dbcad0();
   input += synapse0x1dbcb10();
   input += synapse0x1dbce10();
   input += synapse0x1dbce50();
   input += synapse0x1dbd150();
   input += synapse0x1dbd190();
   input += synapse0x1dbd490();
   input += synapse0x1dbd4d0();
   input += synapse0x1dbd7d0();
   input += synapse0x1dbd810();
   input += synapse0x1dbdb10();
   input += synapse0x1dbdb50();
   input += synapse0x1dbde50();
   input += synapse0x1dbde90();
   input += synapse0x1dbe190();
   input += synapse0x1dbe1d0();
   input += synapse0x1dbe4d0();
   input += synapse0x1dbe510();
   input += synapse0x1dbe810();
   input += synapse0x1dbe850();
   input += synapse0x1dbeb50();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dcb0f0() {
   double input = input0x1dcb0f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1dccf00() {
   double input = -1.21537;
   input += synapse0x1dbeb90();
   input += synapse0x1dbf850();
   input += synapse0x1dbf890();
   input += synapse0x1dcb280();
   input += synapse0x1dcb2c0();
   input += synapse0x1dbfb90();
   input += synapse0x1dbfbd0();
   input += synapse0x1b6db60();
   input += synapse0x1b6dba0();
   input += synapse0x1dc0310();
   input += synapse0x1dc0350();
   input += synapse0x1dc0650();
   input += synapse0x1dc0690();
   input += synapse0x1dc0990();
   input += synapse0x1dc09d0();
   input += synapse0x1dc0cd0();
   input += synapse0x1dc0d10();
   input += synapse0x1dc1010();
   input += synapse0x1dc1050();
   input += synapse0x1dc1350();
   input += synapse0x1dc1390();
   input += synapse0x1dbee90();
   input += synapse0x1dbeed0();
   input += synapse0x1dcd1a0();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dccf00() {
   double input = input0x1dccf00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1dcd1e0() {
   double input = 2.39717;
   input += synapse0x1dcd520();
   input += synapse0x1dcd560();
   input += synapse0x1dcd5a0();
   input += synapse0x1dcd5e0();
   input += synapse0x1dcd620();
   input += synapse0x1dcd660();
   input += synapse0x1dcd6a0();
   input += synapse0x1dcd6e0();
   input += synapse0x1dcd720();
   input += synapse0x1dcd760();
   input += synapse0x1dcd7a0();
   input += synapse0x1dcd7e0();
   input += synapse0x1dcd820();
   input += synapse0x1dcd860();
   input += synapse0x1dcd8a0();
   input += synapse0x1dcd8e0();
   input += synapse0x1dcd370();
   input += synapse0x1dcd3b0();
   input += synapse0x1dcda30();
   input += synapse0x1dcda70();
   input += synapse0x1dcdab0();
   input += synapse0x1dcdaf0();
   input += synapse0x1dcdb30();
   input += synapse0x1dcdb70();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dcd1e0() {
   double input = input0x1dcd1e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1dcdbb0() {
   double input = 0.62636;
   input += synapse0x1dcdef0();
   input += synapse0x1dcdf30();
   input += synapse0x1dcdf70();
   input += synapse0x1dcdfb0();
   input += synapse0x1dcdff0();
   input += synapse0x1dce030();
   input += synapse0x1dce070();
   input += synapse0x1dce0b0();
   input += synapse0x1dce0f0();
   input += synapse0x1dce130();
   input += synapse0x1dce170();
   input += synapse0x1dce1b0();
   input += synapse0x1dce1f0();
   input += synapse0x1dce230();
   input += synapse0x1dce270();
   input += synapse0x1dce2b0();
   input += synapse0x1dcdd40();
   input += synapse0x1dcdd80();
   input += synapse0x1dce400();
   input += synapse0x1dce440();
   input += synapse0x1dce480();
   input += synapse0x1dce4c0();
   input += synapse0x1dce500();
   input += synapse0x1dce540();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dcdbb0() {
   double input = input0x1dcdbb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1dce580() {
   double input = -0.307213;
   input += synapse0x1dce8c0();
   input += synapse0x1dce900();
   input += synapse0x1dce940();
   input += synapse0x1dce980();
   input += synapse0x1dce9c0();
   input += synapse0x1dcea00();
   input += synapse0x1dcea40();
   input += synapse0x1dcea80();
   input += synapse0x1dceac0();
   input += synapse0x1dceb00();
   input += synapse0x1dceb40();
   input += synapse0x1dceb80();
   input += synapse0x1dcebc0();
   input += synapse0x1dcec00();
   input += synapse0x1dcec40();
   input += synapse0x1dcec80();
   input += synapse0x1dce710();
   input += synapse0x1dce750();
   input += synapse0x1dcedd0();
   input += synapse0x1dcee10();
   input += synapse0x1dcee50();
   input += synapse0x1dcee90();
   input += synapse0x1dceed0();
   input += synapse0x1dcef10();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dce580() {
   double input = input0x1dce580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1dcef50() {
   double input = -0.0747256;
   input += synapse0x1dcf290();
   input += synapse0x1dcf2d0();
   input += synapse0x1dcf310();
   input += synapse0x1dcf350();
   input += synapse0x1dcf390();
   input += synapse0x1dcf3d0();
   input += synapse0x1dcf410();
   input += synapse0x1dcf450();
   input += synapse0x1dcf490();
   input += synapse0x1dcf4d0();
   input += synapse0x1dcf510();
   input += synapse0x1dcf550();
   input += synapse0x1dcf590();
   input += synapse0x1dcf5d0();
   input += synapse0x1dcf610();
   input += synapse0x1dcf650();
   input += synapse0x1dcf0e0();
   input += synapse0x1dcf120();
   input += synapse0x1dcf7a0();
   input += synapse0x1dcf7e0();
   input += synapse0x1dcf820();
   input += synapse0x1dcf860();
   input += synapse0x1dcf8a0();
   input += synapse0x1dcf8e0();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dcef50() {
   double input = input0x1dcef50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1dcf920() {
   double input = -0.424816;
   input += synapse0x1dcfc60();
   input += synapse0x1dcfca0();
   input += synapse0x1dcfce0();
   input += synapse0x1dcfd20();
   input += synapse0x1dcfd60();
   input += synapse0x1dcfda0();
   input += synapse0x1dcfde0();
   input += synapse0x1dcfe20();
   input += synapse0x1dcfe60();
   input += synapse0x1dc8020();
   input += synapse0x1dc8060();
   input += synapse0x1dc80a0();
   input += synapse0x1dc80e0();
   input += synapse0x1dc8120();
   input += synapse0x1dc8160();
   input += synapse0x1dc81a0();
   input += synapse0x1dcfab0();
   input += synapse0x1dcfaf0();
   input += synapse0x1dc82f0();
   input += synapse0x1dc8330();
   input += synapse0x1dc8370();
   input += synapse0x1dc83b0();
   input += synapse0x1dc83f0();
   input += synapse0x1dc8430();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dcf920() {
   double input = input0x1dcf920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1dc8470() {
   double input = 0.17765;
   input += synapse0x1dc87b0();
   input += synapse0x1dc87f0();
   input += synapse0x1dc8830();
   input += synapse0x1dc8870();
   input += synapse0x1dc88b0();
   input += synapse0x1dc88f0();
   input += synapse0x1dc8930();
   input += synapse0x1dc8970();
   input += synapse0x1dc89b0();
   input += synapse0x1dc89f0();
   input += synapse0x1dc8a30();
   input += synapse0x1dc8a70();
   input += synapse0x1dc8ab0();
   input += synapse0x1dc8af0();
   input += synapse0x1dc8b30();
   input += synapse0x1dc8b70();
   input += synapse0x1dc8600();
   input += synapse0x1dc8640();
   input += synapse0x1dc8cc0();
   input += synapse0x1dc8d00();
   input += synapse0x1dc8d40();
   input += synapse0x1dc8d80();
   input += synapse0x1dc8dc0();
   input += synapse0x1dc8e00();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dc8470() {
   double input = input0x1dc8470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1dc8e40() {
   double input = 0.961562;
   input += synapse0x1dc8fd0();
   input += synapse0x1dd2060();
   input += synapse0x1dd20a0();
   input += synapse0x1dd20e0();
   input += synapse0x1dd2120();
   input += synapse0x1dd2160();
   input += synapse0x1dd21a0();
   input += synapse0x1dd21e0();
   input += synapse0x1dd2220();
   input += synapse0x1dd2260();
   input += synapse0x1dd22a0();
   input += synapse0x1dd22e0();
   input += synapse0x1dd2320();
   input += synapse0x1dd2360();
   input += synapse0x1dd23a0();
   input += synapse0x1dd23e0();
   input += synapse0x1dd1eb0();
   input += synapse0x1dd1ef0();
   input += synapse0x1dd2530();
   input += synapse0x1dd2570();
   input += synapse0x1dd25b0();
   input += synapse0x1dd25f0();
   input += synapse0x1dd2630();
   input += synapse0x1dd2670();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dc8e40() {
   double input = input0x1dc8e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1dd26b0() {
   double input = -2.11573;
   input += synapse0x1dd29f0();
   input += synapse0x1dd2a30();
   input += synapse0x1dd2a70();
   input += synapse0x1dd2ab0();
   input += synapse0x1dd2af0();
   input += synapse0x1dd2b30();
   input += synapse0x1dd2b70();
   input += synapse0x1dd2bb0();
   input += synapse0x1dd2bf0();
   input += synapse0x1dd2c30();
   input += synapse0x1dd2c70();
   input += synapse0x1dd2cb0();
   input += synapse0x1dd2cf0();
   input += synapse0x1dd2d30();
   input += synapse0x1dd2d70();
   input += synapse0x1dd2db0();
   input += synapse0x1dd2840();
   input += synapse0x1dd2880();
   input += synapse0x1dd2f00();
   input += synapse0x1dd2f40();
   input += synapse0x1dd2f80();
   input += synapse0x1dd2fc0();
   input += synapse0x1dd3000();
   input += synapse0x1dd3040();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dd26b0() {
   double input = input0x1dd26b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1dd3080() {
   double input = 0.654257;
   input += synapse0x1dd33c0();
   input += synapse0x1dd3400();
   input += synapse0x1dd3440();
   input += synapse0x1dd3480();
   input += synapse0x1dd34c0();
   input += synapse0x1dd3500();
   input += synapse0x1dd3540();
   input += synapse0x1dd3580();
   input += synapse0x1dd35c0();
   input += synapse0x1dd3600();
   input += synapse0x1dd3640();
   input += synapse0x1dd3680();
   input += synapse0x1dd36c0();
   input += synapse0x1dd3700();
   input += synapse0x1dd3740();
   input += synapse0x1dd3780();
   input += synapse0x1dd3210();
   input += synapse0x1dd3250();
   input += synapse0x1dd38d0();
   input += synapse0x1dd3910();
   input += synapse0x1dd3950();
   input += synapse0x1dd3990();
   input += synapse0x1dd39d0();
   input += synapse0x1dd3a10();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dd3080() {
   double input = input0x1dd3080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1dd3a50() {
   double input = 0.503397;
   input += synapse0x1dd3d90();
   input += synapse0x1dd3dd0();
   input += synapse0x1dd3e10();
   input += synapse0x1dd3e50();
   input += synapse0x1dd3e90();
   input += synapse0x1dd3ed0();
   input += synapse0x1dd3f10();
   input += synapse0x1dd3f50();
   input += synapse0x1dd3f90();
   input += synapse0x1dd3fd0();
   input += synapse0x1dd4010();
   input += synapse0x1dd4050();
   input += synapse0x1dd4090();
   input += synapse0x1dd40d0();
   input += synapse0x1dd4110();
   input += synapse0x1dd4150();
   input += synapse0x1dd3be0();
   input += synapse0x1dd3c20();
   input += synapse0x1dd42a0();
   input += synapse0x1dd42e0();
   input += synapse0x1dd4320();
   input += synapse0x1dd4360();
   input += synapse0x1dd43a0();
   input += synapse0x1dd43e0();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dd3a50() {
   double input = input0x1dd3a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1dd4420() {
   double input = -0.962433;
   input += synapse0x1dd4760();
   input += synapse0x1dd47a0();
   input += synapse0x1dd47e0();
   input += synapse0x1dd4820();
   input += synapse0x1dd4860();
   input += synapse0x1dd48a0();
   input += synapse0x1dd48e0();
   input += synapse0x1dd4920();
   input += synapse0x1dd4960();
   input += synapse0x1dd49a0();
   input += synapse0x1dd49e0();
   input += synapse0x1dd4a20();
   input += synapse0x1dd4a60();
   input += synapse0x1dd4aa0();
   input += synapse0x1dd4ae0();
   input += synapse0x1dd4b20();
   input += synapse0x1dd45b0();
   input += synapse0x1dd45f0();
   input += synapse0x1dd4c70();
   input += synapse0x1dd4cb0();
   input += synapse0x1dd4cf0();
   input += synapse0x1dd4d30();
   input += synapse0x1dd4d70();
   input += synapse0x1dd4db0();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dd4420() {
   double input = input0x1dd4420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1dd4df0() {
   double input = 0.420368;
   input += synapse0x1dd5130();
   input += synapse0x1dd5170();
   input += synapse0x1dd51b0();
   input += synapse0x1dd51f0();
   input += synapse0x1dd5230();
   input += synapse0x1dd5270();
   input += synapse0x1dd52b0();
   input += synapse0x1dd52f0();
   input += synapse0x1dd5330();
   input += synapse0x1dd5370();
   input += synapse0x1dd53b0();
   input += synapse0x1dd53f0();
   input += synapse0x1dd5430();
   input += synapse0x1dd5470();
   input += synapse0x1dd54b0();
   input += synapse0x1dd54f0();
   input += synapse0x1dd4f80();
   input += synapse0x1dd4fc0();
   input += synapse0x1dd5640();
   input += synapse0x1dd5680();
   input += synapse0x1dd56c0();
   input += synapse0x1dd5700();
   input += synapse0x1dd5740();
   input += synapse0x1dd5780();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dd4df0() {
   double input = input0x1dd4df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1dd57c0() {
   double input = 0.740993;
   input += synapse0x1dd5b00();
   input += synapse0x1dd5b40();
   input += synapse0x1dd5b80();
   input += synapse0x1dd5bc0();
   input += synapse0x1dd5c00();
   input += synapse0x1dd5c40();
   input += synapse0x1dd5c80();
   input += synapse0x1dd5cc0();
   input += synapse0x1dd5d00();
   input += synapse0x1dd5d40();
   input += synapse0x1dd5d80();
   input += synapse0x1dd5dc0();
   input += synapse0x1dd5e00();
   input += synapse0x1dd5e40();
   input += synapse0x1dd5e80();
   input += synapse0x1dd5ec0();
   input += synapse0x1dd5950();
   input += synapse0x1dd5990();
   input += synapse0x1dd6010();
   input += synapse0x1dd6050();
   input += synapse0x1dd6090();
   input += synapse0x1dd60d0();
   input += synapse0x1dd6110();
   input += synapse0x1dd6150();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dd57c0() {
   double input = input0x1dd57c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1dd6190() {
   double input = 0.814597;
   input += synapse0x1dd64d0();
   input += synapse0x1dd6510();
   input += synapse0x1dd6550();
   input += synapse0x1dd6590();
   input += synapse0x1dd65d0();
   input += synapse0x1dd6610();
   input += synapse0x1dd6650();
   input += synapse0x1dd6690();
   input += synapse0x1dd66d0();
   input += synapse0x1dd6710();
   input += synapse0x1dd6750();
   input += synapse0x1dd6790();
   input += synapse0x1dd67d0();
   input += synapse0x1dd6810();
   input += synapse0x1dd6850();
   input += synapse0x1dd6890();
   input += synapse0x1dd6320();
   input += synapse0x1dd6360();
   input += synapse0x1dd69e0();
   input += synapse0x1dd6a20();
   input += synapse0x1dd6a60();
   input += synapse0x1dd6aa0();
   input += synapse0x1dd6ae0();
   input += synapse0x1dd6b20();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dd6190() {
   double input = input0x1dd6190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1dd6b60() {
   double input = -0.0617439;
   input += synapse0x1dd6ea0();
   input += synapse0x1dcb470();
   input += synapse0x1dcb4b0();
   input += synapse0x1dcb4f0();
   input += synapse0x1dcb740();
   input += synapse0x1dcb780();
   input += synapse0x1dcb7c0();
   input += synapse0x1dcba10();
   input += synapse0x1dcba50();
   input += synapse0x1dcbca0();
   input += synapse0x1dcbce0();
   input += synapse0x1dcbd20();
   input += synapse0x1dcbf70();
   input += synapse0x1dcbfb0();
   input += synapse0x1dcc200();
   input += synapse0x1dcc240();
   input += synapse0x1dd6cf0();
   input += synapse0x1dd6d30();
   input += synapse0x1dcc390();
   input += synapse0x1dcc8a0();
   input += synapse0x1dcc8e0();
   input += synapse0x1dcc920();
   input += synapse0x1dccb70();
   input += synapse0x1dccbb0();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dd6b60() {
   double input = input0x1dd6b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1dccbf0() {
   double input = 0.193124;
   input += synapse0x1dcc460();
   input += synapse0x1dcc4a0();
   input += synapse0x1dcc4e0();
   input += synapse0x1dcc520();
   input += synapse0x1dccea0();
   input += synapse0x1dd91f0();
   input += synapse0x1dd9230();
   input += synapse0x1dd9270();
   input += synapse0x1dd92b0();
   input += synapse0x1dd92f0();
   input += synapse0x1dd9330();
   input += synapse0x1dd9370();
   input += synapse0x1dd93b0();
   input += synapse0x1dd93f0();
   input += synapse0x1dd9430();
   input += synapse0x1dd9470();
   input += synapse0x1dccd80();
   input += synapse0x1dccdc0();
   input += synapse0x1dd95c0();
   input += synapse0x1dd9600();
   input += synapse0x1dd9640();
   input += synapse0x1dd9680();
   input += synapse0x1dd96c0();
   input += synapse0x1dd9700();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dccbf0() {
   double input = input0x1dccbf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1dd9740() {
   double input = 0.646291;
   input += synapse0x1dd9a80();
   input += synapse0x1dd9ac0();
   input += synapse0x1dd9b00();
   input += synapse0x1dd9b40();
   input += synapse0x1dd9b80();
   input += synapse0x1dd9bc0();
   input += synapse0x1dd9c00();
   input += synapse0x1dd9c40();
   input += synapse0x1dd9c80();
   input += synapse0x1dd9cc0();
   input += synapse0x1dd9d00();
   input += synapse0x1dd9d40();
   input += synapse0x1dd9d80();
   input += synapse0x1dd9dc0();
   input += synapse0x1dd9e00();
   input += synapse0x1dd9e40();
   input += synapse0x1dd98d0();
   input += synapse0x1dd9910();
   input += synapse0x1dd9f90();
   input += synapse0x1dd9fd0();
   input += synapse0x1dda010();
   input += synapse0x1dda050();
   input += synapse0x1dda090();
   input += synapse0x1dda0d0();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dd9740() {
   double input = input0x1dd9740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1dda110() {
   double input = -0.194948;
   input += synapse0x1dda450();
   input += synapse0x1dda490();
   input += synapse0x1dda4d0();
   input += synapse0x1dda510();
   input += synapse0x1dda550();
   input += synapse0x1dda590();
   input += synapse0x1dda5d0();
   input += synapse0x1dda610();
   input += synapse0x1dda650();
   input += synapse0x1dda690();
   input += synapse0x1dda6d0();
   input += synapse0x1dda710();
   input += synapse0x1dda750();
   input += synapse0x1dda790();
   input += synapse0x1dda7d0();
   input += synapse0x1dda810();
   input += synapse0x1dda2a0();
   input += synapse0x1dda2e0();
   input += synapse0x1dda960();
   input += synapse0x1dda9a0();
   input += synapse0x1dda9e0();
   input += synapse0x1ddaa20();
   input += synapse0x1ddaa60();
   input += synapse0x1ddaaa0();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dda110() {
   double input = input0x1dda110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1ddaae0() {
   double input = -0.77772;
   input += synapse0x1ddae20();
   input += synapse0x1ddae60();
   input += synapse0x1ddaea0();
   input += synapse0x1ddaee0();
   input += synapse0x1ddaf20();
   input += synapse0x1ddaf60();
   input += synapse0x1ddafa0();
   input += synapse0x1ddafe0();
   input += synapse0x1ddb020();
   input += synapse0x1ddb060();
   input += synapse0x1ddb0a0();
   input += synapse0x1ddb0e0();
   input += synapse0x1ddb120();
   input += synapse0x1ddb160();
   input += synapse0x1ddb1a0();
   input += synapse0x1ddb1e0();
   input += synapse0x1ddac70();
   input += synapse0x1ddacb0();
   input += synapse0x1ddb330();
   input += synapse0x1ddb370();
   input += synapse0x1ddb3b0();
   input += synapse0x1ddb3f0();
   input += synapse0x1ddb430();
   input += synapse0x1ddb470();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1ddaae0() {
   double input = input0x1ddaae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1ddb4b0() {
   double input = 1.4512;
   input += synapse0x1ddb7f0();
   input += synapse0x1ddb830();
   input += synapse0x1ddb870();
   input += synapse0x1ddb8b0();
   input += synapse0x1ddb8f0();
   input += synapse0x1ddb930();
   input += synapse0x1ddb970();
   input += synapse0x1ddb9b0();
   input += synapse0x1ddb9f0();
   input += synapse0x1ddba30();
   input += synapse0x1ddba70();
   input += synapse0x1ddbab0();
   input += synapse0x1ddbaf0();
   input += synapse0x1ddbb30();
   input += synapse0x1ddbb70();
   input += synapse0x1ddbbb0();
   input += synapse0x1ddb640();
   input += synapse0x1ddb680();
   input += synapse0x1ddbd00();
   input += synapse0x1ddbd40();
   input += synapse0x1ddbd80();
   input += synapse0x1ddbdc0();
   input += synapse0x1ddbe00();
   input += synapse0x1ddbe40();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1ddb4b0() {
   double input = input0x1ddb4b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1ddbe80() {
   double input = 0.133216;
   input += synapse0x1ddc1c0();
   input += synapse0x1ddc200();
   input += synapse0x1ddc240();
   input += synapse0x1ddc280();
   input += synapse0x1ddc2c0();
   input += synapse0x1ddc300();
   input += synapse0x1ddc340();
   input += synapse0x1ddc380();
   input += synapse0x1ddc3c0();
   input += synapse0x1ddc400();
   input += synapse0x1ddc440();
   input += synapse0x1ddc480();
   input += synapse0x1ddc4c0();
   input += synapse0x1ddc500();
   input += synapse0x1ddc540();
   input += synapse0x1ddc580();
   input += synapse0x1ddc010();
   input += synapse0x1ddc050();
   input += synapse0x1ddc6d0();
   input += synapse0x1ddc710();
   input += synapse0x1ddc750();
   input += synapse0x1ddc790();
   input += synapse0x1ddc7d0();
   input += synapse0x1ddc810();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1ddbe80() {
   double input = input0x1ddbe80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1ddc850() {
   double input = 1.55124;
   input += synapse0x1ddcb90();
   input += synapse0x1ddcbd0();
   input += synapse0x1ddcc10();
   input += synapse0x1ddcc50();
   input += synapse0x1ddcc90();
   input += synapse0x1ddccd0();
   input += synapse0x1ddcd10();
   input += synapse0x1ddcd50();
   input += synapse0x1ddcd90();
   input += synapse0x1ddcdd0();
   input += synapse0x1ddce10();
   input += synapse0x1ddce50();
   input += synapse0x1ddce90();
   input += synapse0x1ddced0();
   input += synapse0x1ddcf10();
   input += synapse0x1ddcf50();
   input += synapse0x1ddc9e0();
   input += synapse0x1ddca20();
   input += synapse0x1ddd0a0();
   input += synapse0x1ddd0e0();
   input += synapse0x1ddd120();
   input += synapse0x1ddd160();
   input += synapse0x1ddd1a0();
   input += synapse0x1ddd1e0();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1ddc850() {
   double input = input0x1ddc850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1ddd220() {
   double input = 0.0485596;
   input += synapse0x1ddd560();
   input += synapse0x1ddd5a0();
   input += synapse0x1ddd5e0();
   input += synapse0x1ddd620();
   input += synapse0x1ddd660();
   input += synapse0x1ddd6a0();
   input += synapse0x1ddd6e0();
   input += synapse0x1ddd720();
   input += synapse0x1ddd760();
   input += synapse0x1ddd7a0();
   input += synapse0x1ddd7e0();
   input += synapse0x1ddd820();
   input += synapse0x1ddd860();
   input += synapse0x1ddd8a0();
   input += synapse0x1ddd8e0();
   input += synapse0x1ddd920();
   input += synapse0x1ddd3b0();
   input += synapse0x1ddd3f0();
   input += synapse0x1ddda70();
   input += synapse0x1dddab0();
   input += synapse0x1dddaf0();
   input += synapse0x1dddb30();
   input += synapse0x1dddb70();
   input += synapse0x1dddbb0();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1ddd220() {
   double input = input0x1ddd220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1dddbf0() {
   double input = 2.58694;
   input += synapse0x1dc6660();
   input += synapse0x1dc66a0();
   input += synapse0x1dc66e0();
   input += synapse0x1dc6720();
   input += synapse0x1dc6760();
   input += synapse0x1dc67a0();
   input += synapse0x1dc67e0();
   input += synapse0x1dc6820();
   input += synapse0x1dde340();
   input += synapse0x1dde380();
   input += synapse0x1dde3c0();
   input += synapse0x1dde400();
   input += synapse0x1dde440();
   input += synapse0x1dde480();
   input += synapse0x1dde4c0();
   input += synapse0x1dde500();
   input += synapse0x1dddd80();
   input += synapse0x1ddddc0();
   input += synapse0x1dde650();
   input += synapse0x1dde690();
   input += synapse0x1dde6d0();
   input += synapse0x1dde710();
   input += synapse0x1dde750();
   input += synapse0x1dde790();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dddbf0() {
   double input = input0x1dddbf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1dde7d0() {
   double input = 0.236944;
   input += synapse0x1ddeb10();
   input += synapse0x1ddeb50();
   input += synapse0x1ddeb90();
   input += synapse0x1ddebd0();
   input += synapse0x1ddec10();
   input += synapse0x1ddec50();
   input += synapse0x1ddec90();
   input += synapse0x1ddecd0();
   input += synapse0x1dded10();
   input += synapse0x1dded50();
   input += synapse0x1dded90();
   input += synapse0x1ddedd0();
   input += synapse0x1ddee10();
   input += synapse0x1ddee50();
   input += synapse0x1ddee90();
   input += synapse0x1ddeed0();
   input += synapse0x1dde960();
   input += synapse0x1dde9a0();
   input += synapse0x1ddf020();
   input += synapse0x1ddf060();
   input += synapse0x1ddf0a0();
   input += synapse0x1ddf0e0();
   input += synapse0x1ddf120();
   input += synapse0x1ddf160();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dde7d0() {
   double input = input0x1dde7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1ddf1a0() {
   double input = 0.434844;
   input += synapse0x1ddf4e0();
   input += synapse0x1ddf520();
   input += synapse0x1ddf560();
   input += synapse0x1ddf5a0();
   input += synapse0x1ddf5e0();
   input += synapse0x1ddf620();
   input += synapse0x1ddf660();
   input += synapse0x1ddf6a0();
   input += synapse0x1ddf6e0();
   input += synapse0x1ddf720();
   input += synapse0x1ddf760();
   input += synapse0x1ddf7a0();
   input += synapse0x1ddf7e0();
   input += synapse0x1ddf820();
   input += synapse0x1ddf860();
   input += synapse0x1ddf8a0();
   input += synapse0x1ddf330();
   input += synapse0x1ddf370();
   input += synapse0x1dcfea0();
   input += synapse0x1dcfee0();
   input += synapse0x1dcff20();
   input += synapse0x1dcff60();
   input += synapse0x1dcffa0();
   input += synapse0x1dcffe0();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1ddf1a0() {
   double input = input0x1ddf1a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1dd0020() {
   double input = 0.210709;
   input += synapse0x1dd0360();
   input += synapse0x1dd03a0();
   input += synapse0x1dd03e0();
   input += synapse0x1dd0420();
   input += synapse0x1dd0460();
   input += synapse0x1dd04a0();
   input += synapse0x1dd04e0();
   input += synapse0x1dd0520();
   input += synapse0x1dd0560();
   input += synapse0x1dd05a0();
   input += synapse0x1dd05e0();
   input += synapse0x1dd0620();
   input += synapse0x1dd0660();
   input += synapse0x1dd06a0();
   input += synapse0x1dd06e0();
   input += synapse0x1dd0720();
   input += synapse0x1dd01b0();
   input += synapse0x1dd01f0();
   input += synapse0x1dd0870();
   input += synapse0x1dd08b0();
   input += synapse0x1dd08f0();
   input += synapse0x1dd0930();
   input += synapse0x1dd0970();
   input += synapse0x1dd09b0();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dd0020() {
   double input = input0x1dd0020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1dd09f0() {
   double input = -1.43697;
   input += synapse0x1dd0d30();
   input += synapse0x1dd0d70();
   input += synapse0x1dd0db0();
   input += synapse0x1dd0df0();
   input += synapse0x1dd0e30();
   input += synapse0x1dd0e70();
   input += synapse0x1dd0eb0();
   input += synapse0x1dd0ef0();
   input += synapse0x1dd0f30();
   input += synapse0x1dd0f70();
   input += synapse0x1dd0fb0();
   input += synapse0x1dd0ff0();
   input += synapse0x1dd1030();
   input += synapse0x1dd1070();
   input += synapse0x1dd10b0();
   input += synapse0x1dd10f0();
   input += synapse0x1dd0b80();
   input += synapse0x1dd0bc0();
   input += synapse0x1dd1240();
   input += synapse0x1dd1280();
   input += synapse0x1dd12c0();
   input += synapse0x1dd1300();
   input += synapse0x1dd1340();
   input += synapse0x1dd1380();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dd09f0() {
   double input = input0x1dd09f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1dd13c0() {
   double input = -0.503034;
   input += synapse0x1dd1700();
   input += synapse0x1dd1740();
   input += synapse0x1dd1780();
   input += synapse0x1dd17c0();
   input += synapse0x1dd1800();
   input += synapse0x1dd1840();
   input += synapse0x1dd1880();
   input += synapse0x1dd18c0();
   input += synapse0x1dd1900();
   input += synapse0x1dd1940();
   input += synapse0x1dd1980();
   input += synapse0x1dd19c0();
   input += synapse0x1dd1a00();
   input += synapse0x1dd1a40();
   input += synapse0x1dd1a80();
   input += synapse0x1dd1ac0();
   input += synapse0x1dd1550();
   input += synapse0x1dd1590();
   input += synapse0x1dd1c10();
   input += synapse0x1dd1c50();
   input += synapse0x1dd1c90();
   input += synapse0x1dd1cd0();
   input += synapse0x1dd1d10();
   input += synapse0x1dd1d50();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dd13c0() {
   double input = input0x1dd13c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1de3a00() {
   double input = 0.911535;
   input += synapse0x1de3c20();
   input += synapse0x1de3c60();
   input += synapse0x1de3ca0();
   input += synapse0x1de3ce0();
   input += synapse0x1de3d20();
   input += synapse0x1de3d60();
   input += synapse0x1de3da0();
   input += synapse0x1de3de0();
   input += synapse0x1de3e20();
   input += synapse0x1de3e60();
   input += synapse0x1de3ea0();
   input += synapse0x1de3ee0();
   input += synapse0x1de3f20();
   input += synapse0x1de3f60();
   input += synapse0x1de3fa0();
   input += synapse0x1de3fe0();
   input += synapse0x1dd1d90();
   input += synapse0x1dd1dd0();
   input += synapse0x1de4130();
   input += synapse0x1de4170();
   input += synapse0x1de41b0();
   input += synapse0x1de41f0();
   input += synapse0x1de4230();
   input += synapse0x1de4270();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1de3a00() {
   double input = input0x1de3a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1de42b0() {
   double input = 0.471692;
   input += synapse0x1de45f0();
   input += synapse0x1de4630();
   input += synapse0x1de4670();
   input += synapse0x1de46b0();
   input += synapse0x1de46f0();
   input += synapse0x1de4730();
   input += synapse0x1de4770();
   input += synapse0x1de47b0();
   input += synapse0x1de47f0();
   input += synapse0x1de4830();
   input += synapse0x1de4870();
   input += synapse0x1de48b0();
   input += synapse0x1de48f0();
   input += synapse0x1de4930();
   input += synapse0x1de4970();
   input += synapse0x1de49b0();
   input += synapse0x1de4440();
   input += synapse0x1de4480();
   input += synapse0x1de4b00();
   input += synapse0x1de4b40();
   input += synapse0x1de4b80();
   input += synapse0x1de4bc0();
   input += synapse0x1de4c00();
   input += synapse0x1de4c40();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1de42b0() {
   double input = input0x1de42b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1de4c80() {
   double input = -0.600578;
   input += synapse0x1de4fc0();
   input += synapse0x1de5000();
   input += synapse0x1de5040();
   input += synapse0x1de5080();
   input += synapse0x1de50c0();
   input += synapse0x1de5100();
   input += synapse0x1de5140();
   input += synapse0x1de5180();
   input += synapse0x1de51c0();
   input += synapse0x1de5200();
   input += synapse0x1de5240();
   input += synapse0x1de5280();
   input += synapse0x1de52c0();
   input += synapse0x1de5300();
   input += synapse0x1de5340();
   input += synapse0x1de5380();
   input += synapse0x1de4e10();
   input += synapse0x1de4e50();
   input += synapse0x1de54d0();
   input += synapse0x1de5510();
   input += synapse0x1de5550();
   input += synapse0x1de5590();
   input += synapse0x1de55d0();
   input += synapse0x1de5610();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1de4c80() {
   double input = input0x1de4c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1de5650() {
   double input = -0.342406;
   input += synapse0x1de5990();
   input += synapse0x1de59d0();
   input += synapse0x1de5a10();
   input += synapse0x1de5a50();
   input += synapse0x1de5a90();
   input += synapse0x1de5ad0();
   input += synapse0x1de5b10();
   input += synapse0x1de5b50();
   input += synapse0x1de5b90();
   input += synapse0x1de5bd0();
   input += synapse0x1de5c10();
   input += synapse0x1de5c50();
   input += synapse0x1de5c90();
   input += synapse0x1de5cd0();
   input += synapse0x1de5d10();
   input += synapse0x1de5d50();
   input += synapse0x1de57e0();
   input += synapse0x1de5820();
   input += synapse0x1de5ea0();
   input += synapse0x1de5ee0();
   input += synapse0x1de5f20();
   input += synapse0x1de5f60();
   input += synapse0x1de5fa0();
   input += synapse0x1de5fe0();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1de5650() {
   double input = input0x1de5650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1dec850() {
   double input = 0.539132;
   input += synapse0x1dc2580();
   input += synapse0x1dc25c0();
   input += synapse0x1dc3a90();
   input += synapse0x1dc3ad0();
   input += synapse0x1dc4460();
   input += synapse0x1dc44a0();
   input += synapse0x1dc5230();
   input += synapse0x1dc5270();
   input += synapse0x1dc5c00();
   input += synapse0x1dc5c40();
   input += synapse0x1dc65d0();
   input += synapse0x1dc6610();
   input += synapse0x1dc70b0();
   input += synapse0x1dc70f0();
   input += synapse0x1dc7a80();
   input += synapse0x1dc7ac0();
   input += synapse0x1dc4b60();
   input += synapse0x1dc4ba0();
   input += synapse0x1dc9630();
   input += synapse0x1dc9670();
   input += synapse0x1dca000();
   input += synapse0x1dca040();
   input += synapse0x1dca9d0();
   input += synapse0x1dcaa10();
   input += synapse0x1dcb3a0();
   input += synapse0x1dcb3e0();
   input += synapse0x1dbf510();
   input += synapse0x1dbf550();
   input += synapse0x1dcd490();
   input += synapse0x1dcd4d0();
   input += synapse0x1dcde60();
   input += synapse0x1dcdea0();
   input += synapse0x1dce830();
   input += synapse0x1dce870();
   input += synapse0x1dcf200();
   input += synapse0x1dcf240();
   input += synapse0x1dcfbd0();
   input += synapse0x1dcfc10();
   input += synapse0x1dc8720();
   input += synapse0x1dc8760();
   input += synapse0x1dd1fd0();
   input += synapse0x1dd2010();
   input += synapse0x1dd2960();
   input += synapse0x1dd29a0();
   input += synapse0x1dd3330();
   input += synapse0x1dd3370();
   input += synapse0x1dd3d00();
   input += synapse0x1dd3d40();
   input += synapse0x1dd46d0();
   input += synapse0x1dd4710();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dec850() {
   double input = input0x1dec850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1decbf0() {
   double input = 0.655108;
   input += synapse0x1dd6e10();
   input += synapse0x1dd6e50();
   input += synapse0x1dcc3d0();
   input += synapse0x1dcc410();
   input += synapse0x1dd99f0();
   input += synapse0x1dd9a30();
   input += synapse0x1dda3c0();
   input += synapse0x1dda400();
   input += synapse0x1ddad90();
   input += synapse0x1ddadd0();
   input += synapse0x1ddb760();
   input += synapse0x1ddb7a0();
   input += synapse0x1ddc130();
   input += synapse0x1ddc170();
   input += synapse0x1ddcb00();
   input += synapse0x1ddcb40();
   input += synapse0x1ddd4d0();
   input += synapse0x1ddd510();
   input += synapse0x1dddea0();
   input += synapse0x1dddee0();
   input += synapse0x1ddea80();
   input += synapse0x1ddeac0();
   input += synapse0x1ddf450();
   input += synapse0x1ddf490();
   input += synapse0x1dd02d0();
   input += synapse0x1dd0310();
   input += synapse0x1dd0ca0();
   input += synapse0x1dd0ce0();
   input += synapse0x1dd1670();
   input += synapse0x1dd16b0();
   input += synapse0x1de3b90();
   input += synapse0x1de3bd0();
   input += synapse0x1de4560();
   input += synapse0x1de45a0();
   input += synapse0x1de4f30();
   input += synapse0x1de4f70();
   input += synapse0x1de5900();
   input += synapse0x1de5940();
   input += synapse0x1dc17f0();
   input += synapse0x1dc1830();
   input += synapse0x1dd50a0();
   input += synapse0x1dd50e0();
   input += synapse0x1de6020();
   input += synapse0x1de6060();
   input += synapse0x1de60a0();
   input += synapse0x1de60e0();
   input += synapse0x1decf90();
   input += synapse0x1decfd0();
   input += synapse0x1ded010();
   input += synapse0x1ded050();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1decbf0() {
   double input = input0x1decbf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1ded090() {
   double input = -0.857948;
   input += synapse0x1ded3d0();
   input += synapse0x1ded410();
   input += synapse0x1ded450();
   input += synapse0x1ded490();
   input += synapse0x1ded4d0();
   input += synapse0x1ded510();
   input += synapse0x1ded550();
   input += synapse0x1ded590();
   input += synapse0x1ded5d0();
   input += synapse0x1ded610();
   input += synapse0x1ded650();
   input += synapse0x1ded690();
   input += synapse0x1ded6d0();
   input += synapse0x1ded710();
   input += synapse0x1ded750();
   input += synapse0x1ded790();
   input += synapse0x1ded220();
   input += synapse0x1ded260();
   input += synapse0x1ded8e0();
   input += synapse0x1ded920();
   input += synapse0x1ded960();
   input += synapse0x1ded9a0();
   input += synapse0x1ded9e0();
   input += synapse0x1deda20();
   input += synapse0x1deda60();
   input += synapse0x1dedaa0();
   input += synapse0x1dedae0();
   input += synapse0x1dedb20();
   input += synapse0x1dedb60();
   input += synapse0x1dedba0();
   input += synapse0x1dedbe0();
   input += synapse0x1dedc20();
   input += synapse0x1ded7d0();
   input += synapse0x1ded810();
   input += synapse0x1ded850();
   input += synapse0x1ded890();
   input += synapse0x1dede70();
   input += synapse0x1dedeb0();
   input += synapse0x1dedef0();
   input += synapse0x1dedf30();
   input += synapse0x1dedf70();
   input += synapse0x1dedfb0();
   input += synapse0x1dedff0();
   input += synapse0x1dee030();
   input += synapse0x1dee070();
   input += synapse0x1dee0b0();
   input += synapse0x1dee0f0();
   input += synapse0x1dee130();
   input += synapse0x1dee170();
   input += synapse0x1dee1b0();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1ded090() {
   double input = input0x1ded090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1dee1f0() {
   double input = 0.0482626;
   input += synapse0x1dee530();
   input += synapse0x1dee570();
   input += synapse0x1dee5b0();
   input += synapse0x1dee5f0();
   input += synapse0x1dee630();
   input += synapse0x1dee670();
   input += synapse0x1dee6b0();
   input += synapse0x1dee6f0();
   input += synapse0x1dee730();
   input += synapse0x1dee770();
   input += synapse0x1dee7b0();
   input += synapse0x1dee7f0();
   input += synapse0x1dee830();
   input += synapse0x1dee870();
   input += synapse0x1dee8b0();
   input += synapse0x1dee8f0();
   input += synapse0x1dee380();
   input += synapse0x1dee3c0();
   input += synapse0x1deea40();
   input += synapse0x1deea80();
   input += synapse0x1deeac0();
   input += synapse0x1deeb00();
   input += synapse0x1deeb40();
   input += synapse0x1deeb80();
   input += synapse0x1deebc0();
   input += synapse0x1deec00();
   input += synapse0x1deec40();
   input += synapse0x1deec80();
   input += synapse0x1deecc0();
   input += synapse0x1deed00();
   input += synapse0x1deed40();
   input += synapse0x1deed80();
   input += synapse0x1dee930();
   input += synapse0x1dee970();
   input += synapse0x1dee9b0();
   input += synapse0x1dee9f0();
   input += synapse0x1deefd0();
   input += synapse0x1def010();
   input += synapse0x1def050();
   input += synapse0x1def090();
   input += synapse0x1def0d0();
   input += synapse0x1def110();
   input += synapse0x1def150();
   input += synapse0x1def190();
   input += synapse0x1def1d0();
   input += synapse0x1def210();
   input += synapse0x1def250();
   input += synapse0x1def290();
   input += synapse0x1def2d0();
   input += synapse0x1def310();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1dee1f0() {
   double input = input0x1dee1f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1def350() {
   double input = -1.12789;
   input += synapse0x1def690();
   input += synapse0x1def6d0();
   input += synapse0x1def710();
   input += synapse0x1def750();
   input += synapse0x1def790();
   input += synapse0x1def7d0();
   input += synapse0x1def810();
   input += synapse0x1def850();
   input += synapse0x1def890();
   input += synapse0x1def8d0();
   input += synapse0x1def910();
   input += synapse0x1def950();
   input += synapse0x1def990();
   input += synapse0x1def9d0();
   input += synapse0x1defa10();
   input += synapse0x1defa50();
   input += synapse0x1def4e0();
   input += synapse0x1def520();
   input += synapse0x1defba0();
   input += synapse0x1defbe0();
   input += synapse0x1defc20();
   input += synapse0x1defc60();
   input += synapse0x1defca0();
   input += synapse0x1defce0();
   input += synapse0x1defd20();
   input += synapse0x1defd60();
   input += synapse0x1defda0();
   input += synapse0x1defde0();
   input += synapse0x1defe20();
   input += synapse0x1defe60();
   input += synapse0x1defea0();
   input += synapse0x1defee0();
   input += synapse0x1defa90();
   input += synapse0x1defad0();
   input += synapse0x1defb10();
   input += synapse0x1defb50();
   input += synapse0x1df0130();
   input += synapse0x1df0170();
   input += synapse0x1df01b0();
   input += synapse0x1df01f0();
   input += synapse0x1df0230();
   input += synapse0x1df0270();
   input += synapse0x1df02b0();
   input += synapse0x1df02f0();
   input += synapse0x1df0330();
   input += synapse0x1df0370();
   input += synapse0x1df03b0();
   input += synapse0x1df03f0();
   input += synapse0x1df0430();
   input += synapse0x1df0470();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1def350() {
   double input = input0x1def350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdR::input0x1df04b0() {
   double input = 7.65902;
   input += synapse0x1dc1590();
   input += synapse0x1df06d0();
   input += synapse0x1df0710();
   input += synapse0x1df0750();
   input += synapse0x1df0790();
   return input;
}

double NNfunction_sb_dLdR::neuron0x1df04b0() {
   double input = input0x1df04b0();
   return (input * 1)+0;
}

double NNfunction_sb_dLdR::synapse0x1b7c3e0() {
   return (neuron0x1dbc570()*0.146633);
}

double NNfunction_sb_dLdR::synapse0x1dbc430() {
   return (neuron0x1dbc8b0()*-0.15082);
}

double NNfunction_sb_dLdR::synapse0x1dbc470() {
   return (neuron0x1dbcbf0()*-0.094981);
}

double NNfunction_sb_dLdR::synapse0x1dc1880() {
   return (neuron0x1dbcf30()*0.122128);
}

double NNfunction_sb_dLdR::synapse0x1dc18c0() {
   return (neuron0x1dbd270()*-0.019929);
}

double NNfunction_sb_dLdR::synapse0x1dc1900() {
   return (neuron0x1dbd5b0()*0.106172);
}

double NNfunction_sb_dLdR::synapse0x1dc1940() {
   return (neuron0x1dbd8f0()*0.149027);
}

double NNfunction_sb_dLdR::synapse0x1dc1980() {
   return (neuron0x1dbdc30()*0.0188336);
}

double NNfunction_sb_dLdR::synapse0x1dc19c0() {
   return (neuron0x1dbdf70()*-0.237846);
}

double NNfunction_sb_dLdR::synapse0x1dc1a00() {
   return (neuron0x1dbe2b0()*0.00450812);
}

double NNfunction_sb_dLdR::synapse0x1dc1a40() {
   return (neuron0x1dbe5f0()*-0.131871);
}

double NNfunction_sb_dLdR::synapse0x1dc1a80() {
   return (neuron0x1dbe930()*0.11327);
}

double NNfunction_sb_dLdR::synapse0x1dc1ac0() {
   return (neuron0x1dbec70()*0.068552);
}

double NNfunction_sb_dLdR::synapse0x1dc1b00() {
   return (neuron0x1dbefb0()*-0.0497201);
}

double NNfunction_sb_dLdR::synapse0x1dc1b40() {
   return (neuron0x1dbf2f0()*-1.1619);
}

double NNfunction_sb_dLdR::synapse0x1dc1b80() {
   return (neuron0x1dbf630()*0.110264);
}

double NNfunction_sb_dLdR::synapse0x1dbc3a0() {
   return (neuron0x1dbf970()*0.0630995);
}

double NNfunction_sb_dLdR::synapse0x1dbc3e0() {
   return (neuron0x1dbfed0()*0.338223);
}

double NNfunction_sb_dLdR::synapse0x1b6dc80() {
   return (neuron0x1dc00f0()*-0.162867);
}

double NNfunction_sb_dLdR::synapse0x1b6dcc0() {
   return (neuron0x1dc0430()*-0.0249388);
}

double NNfunction_sb_dLdR::synapse0x1dc1de0() {
   return (neuron0x1dc0770()*0.0111903);
}

double NNfunction_sb_dLdR::synapse0x1dc1e20() {
   return (neuron0x1dc0ab0()*-0.102409);
}

double NNfunction_sb_dLdR::synapse0x1dc1e60() {
   return (neuron0x1dc0df0()*0.0387677);
}

double NNfunction_sb_dLdR::synapse0x1dc1ea0() {
   return (neuron0x1dc1130()*-0.242874);
}

double NNfunction_sb_dLdR::synapse0x1dc2220() {
   return (neuron0x1dbc570()*0.00902035);
}

double NNfunction_sb_dLdR::synapse0x1dc2260() {
   return (neuron0x1dbc8b0()*-0.00567731);
}

double NNfunction_sb_dLdR::synapse0x1dc22a0() {
   return (neuron0x1dbcbf0()*0.16564);
}

double NNfunction_sb_dLdR::synapse0x1dc22e0() {
   return (neuron0x1dbcf30()*-2.33769);
}

double NNfunction_sb_dLdR::synapse0x1dc2320() {
   return (neuron0x1dbd270()*0.0955093);
}

double NNfunction_sb_dLdR::synapse0x1dc2360() {
   return (neuron0x1dbd5b0()*0.0261374);
}

double NNfunction_sb_dLdR::synapse0x1dc23a0() {
   return (neuron0x1dbd8f0()*-0.00492224);
}

double NNfunction_sb_dLdR::synapse0x1dc23e0() {
   return (neuron0x1dbdc30()*0.0946039);
}

double NNfunction_sb_dLdR::synapse0x1dc2420() {
   return (neuron0x1dbdf70()*0.0418714);
}

double NNfunction_sb_dLdR::synapse0x1dc1cd0() {
   return (neuron0x1dbe2b0()*-0.0719852);
}

double NNfunction_sb_dLdR::synapse0x1dc1d10() {
   return (neuron0x1dbe5f0()*-0.0133257);
}

double NNfunction_sb_dLdR::synapse0x1dc1d50() {
   return (neuron0x1dbe930()*0.130856);
}

double NNfunction_sb_dLdR::synapse0x1dc1d90() {
   return (neuron0x1dbec70()*-0.0323857);
}

double NNfunction_sb_dLdR::synapse0x1dc2670() {
   return (neuron0x1dbefb0()*0.0449719);
}

double NNfunction_sb_dLdR::synapse0x1dc26b0() {
   return (neuron0x1dbf2f0()*0.0575624);
}

double NNfunction_sb_dLdR::synapse0x1dc26f0() {
   return (neuron0x1dbf630()*0.110445);
}

double NNfunction_sb_dLdR::synapse0x1dc2070() {
   return (neuron0x1dbf970()*-0.0209928);
}

double NNfunction_sb_dLdR::synapse0x1dc20b0() {
   return (neuron0x1dbfed0()*-0.841035);
}

double NNfunction_sb_dLdR::synapse0x1dc2840() {
   return (neuron0x1dc00f0()*-0.0324563);
}

double NNfunction_sb_dLdR::synapse0x1dc2880() {
   return (neuron0x1dc0430()*-0.0427701);
}

double NNfunction_sb_dLdR::synapse0x1dc28c0() {
   return (neuron0x1dc0770()*0.00911537);
}

double NNfunction_sb_dLdR::synapse0x1dc2900() {
   return (neuron0x1dc0ab0()*-0.0393417);
}

double NNfunction_sb_dLdR::synapse0x1dc2940() {
   return (neuron0x1dc0df0()*0.0207563);
}

double NNfunction_sb_dLdR::synapse0x1dc2980() {
   return (neuron0x1dc1130()*0.015252);
}

double NNfunction_sb_dLdR::synapse0x1dc2d00() {
   return (neuron0x1dbc570()*-0.0393229);
}

double NNfunction_sb_dLdR::synapse0x1dc2d40() {
   return (neuron0x1dbc8b0()*0.00902315);
}

double NNfunction_sb_dLdR::synapse0x1dc2d80() {
   return (neuron0x1dbcbf0()*0.00440796);
}

double NNfunction_sb_dLdR::synapse0x1dc2dc0() {
   return (neuron0x1dbcf30()*0.343815);
}

double NNfunction_sb_dLdR::synapse0x1dc2e00() {
   return (neuron0x1dbd270()*-0.0488553);
}

double NNfunction_sb_dLdR::synapse0x1dc2e40() {
   return (neuron0x1dbd5b0()*-0.0107669);
}

double NNfunction_sb_dLdR::synapse0x1dc2e80() {
   return (neuron0x1dbd8f0()*-0.0287297);
}

double NNfunction_sb_dLdR::synapse0x1dc2ec0() {
   return (neuron0x1dbdc30()*-0.0360646);
}

double NNfunction_sb_dLdR::synapse0x1dc2f00() {
   return (neuron0x1dbdf70()*0.0866281);
}

double NNfunction_sb_dLdR::synapse0x1dc2f40() {
   return (neuron0x1dbe2b0()*0.600035);
}

double NNfunction_sb_dLdR::synapse0x1dc2f80() {
   return (neuron0x1dbe5f0()*-0.0172994);
}

double NNfunction_sb_dLdR::synapse0x1dc2fc0() {
   return (neuron0x1dbe930()*-0.0141715);
}

double NNfunction_sb_dLdR::synapse0x1dc3000() {
   return (neuron0x1dbec70()*-0.0575256);
}

double NNfunction_sb_dLdR::synapse0x1dc3040() {
   return (neuron0x1dbefb0()*0.0232924);
}

double NNfunction_sb_dLdR::synapse0x1dc3080() {
   return (neuron0x1dbf2f0()*0.00671467);
}

double NNfunction_sb_dLdR::synapse0x1dc30c0() {
   return (neuron0x1dbf630()*0.0906596);
}

double NNfunction_sb_dLdR::synapse0x1dc2b50() {
   return (neuron0x1dbf970()*-0.0831586);
}

double NNfunction_sb_dLdR::synapse0x1dc2b90() {
   return (neuron0x1dbfed0()*-0.250778);
}

double NNfunction_sb_dLdR::synapse0x1b7bad0() {
   return (neuron0x1dc00f0()*-0.044131);
}

double NNfunction_sb_dLdR::synapse0x1b7bb10() {
   return (neuron0x1dc0430()*-0.0565473);
}

double NNfunction_sb_dLdR::synapse0x1dab600() {
   return (neuron0x1dc0770()*0.0622662);
}

double NNfunction_sb_dLdR::synapse0x1dab640() {
   return (neuron0x1dc0ab0()*0.0265138);
}

double NNfunction_sb_dLdR::synapse0x1dab680() {
   return (neuron0x1dc0df0()*0.0700951);
}

double NNfunction_sb_dLdR::synapse0x1dbc4b0() {
   return (neuron0x1dc1130()*0.0205416);
}

double NNfunction_sb_dLdR::synapse0x1dc2610() {
   return (neuron0x1dbc570()*-0.680862);
}

double NNfunction_sb_dLdR::synapse0x1dbc4f0() {
   return (neuron0x1dbc8b0()*0.117814);
}

double NNfunction_sb_dLdR::synapse0x1dbc530() {
   return (neuron0x1dbcbf0()*0.333054);
}

double NNfunction_sb_dLdR::synapse0x1dc3210() {
   return (neuron0x1dbcf30()*0.125337);
}

double NNfunction_sb_dLdR::synapse0x1dc3250() {
   return (neuron0x1dbd270()*0.206426);
}

double NNfunction_sb_dLdR::synapse0x1dc3290() {
   return (neuron0x1dbd5b0()*-0.555113);
}

double NNfunction_sb_dLdR::synapse0x1dc32d0() {
   return (neuron0x1dbd8f0()*-0.27991);
}

double NNfunction_sb_dLdR::synapse0x1dc3310() {
   return (neuron0x1dbdc30()*-0.339367);
}

double NNfunction_sb_dLdR::synapse0x1dc3350() {
   return (neuron0x1dbdf70()*-0.0511118);
}

double NNfunction_sb_dLdR::synapse0x1dc3390() {
   return (neuron0x1dbe2b0()*-1.19196);
}

double NNfunction_sb_dLdR::synapse0x1dc33d0() {
   return (neuron0x1dbe5f0()*0.0138274);
}

double NNfunction_sb_dLdR::synapse0x1dc3410() {
   return (neuron0x1dbe930()*0.371429);
}

double NNfunction_sb_dLdR::synapse0x1dc3450() {
   return (neuron0x1dbec70()*-0.0471807);
}

double NNfunction_sb_dLdR::synapse0x1dc3490() {
   return (neuron0x1dbefb0()*-0.814174);
}

double NNfunction_sb_dLdR::synapse0x1dc34d0() {
   return (neuron0x1dbf2f0()*-0.554532);
}

double NNfunction_sb_dLdR::synapse0x1dc3510() {
   return (neuron0x1dbf630()*-0.269621);
}

double NNfunction_sb_dLdR::synapse0x1dc2460() {
   return (neuron0x1dbf970()*0.0353285);
}

double NNfunction_sb_dLdR::synapse0x1dc24a0() {
   return (neuron0x1dbfed0()*0.280164);
}

double NNfunction_sb_dLdR::synapse0x1dc3660() {
   return (neuron0x1dc00f0()*1.0374);
}

double NNfunction_sb_dLdR::synapse0x1dc36a0() {
   return (neuron0x1dc0430()*0.49759);
}

double NNfunction_sb_dLdR::synapse0x1dc36e0() {
   return (neuron0x1dc0770()*0.0267602);
}

double NNfunction_sb_dLdR::synapse0x1dc3720() {
   return (neuron0x1dc0ab0()*0.490396);
}

double NNfunction_sb_dLdR::synapse0x1dc3760() {
   return (neuron0x1dc0df0()*-1.15538);
}

double NNfunction_sb_dLdR::synapse0x1dc37a0() {
   return (neuron0x1dc1130()*-0.440089);
}

double NNfunction_sb_dLdR::synapse0x1dc3b20() {
   return (neuron0x1dbc570()*-0.0209407);
}

double NNfunction_sb_dLdR::synapse0x1dc3b60() {
   return (neuron0x1dbc8b0()*-0.405593);
}

double NNfunction_sb_dLdR::synapse0x1dc3ba0() {
   return (neuron0x1dbcbf0()*-0.477255);
}

double NNfunction_sb_dLdR::synapse0x1dc3be0() {
   return (neuron0x1dbcf30()*-0.286265);
}

double NNfunction_sb_dLdR::synapse0x1dc3c20() {
   return (neuron0x1dbd270()*0.134952);
}

double NNfunction_sb_dLdR::synapse0x1dc3c60() {
   return (neuron0x1dbd5b0()*-0.104125);
}

double NNfunction_sb_dLdR::synapse0x1dc3ca0() {
   return (neuron0x1dbd8f0()*-0.0474156);
}

double NNfunction_sb_dLdR::synapse0x1dc3ce0() {
   return (neuron0x1dbdc30()*0.338954);
}

double NNfunction_sb_dLdR::synapse0x1dc3d20() {
   return (neuron0x1dbdf70()*0.317153);
}

double NNfunction_sb_dLdR::synapse0x1dc3d60() {
   return (neuron0x1dbe2b0()*0.0255786);
}

double NNfunction_sb_dLdR::synapse0x1dc3da0() {
   return (neuron0x1dbe5f0()*0.227575);
}

double NNfunction_sb_dLdR::synapse0x1dc3de0() {
   return (neuron0x1dbe930()*-0.46744);
}

double NNfunction_sb_dLdR::synapse0x1dc3e20() {
   return (neuron0x1dbec70()*-0.269561);
}

double NNfunction_sb_dLdR::synapse0x1dc3e60() {
   return (neuron0x1dbefb0()*0.234941);
}

double NNfunction_sb_dLdR::synapse0x1dc3ea0() {
   return (neuron0x1dbf2f0()*-0.387792);
}

double NNfunction_sb_dLdR::synapse0x1dc3ee0() {
   return (neuron0x1dbf630()*0.202336);
}

double NNfunction_sb_dLdR::synapse0x1dc3970() {
   return (neuron0x1dbf970()*0.384324);
}

double NNfunction_sb_dLdR::synapse0x1dc39b0() {
   return (neuron0x1dbfed0()*0.240855);
}

double NNfunction_sb_dLdR::synapse0x1dc4030() {
   return (neuron0x1dc00f0()*-0.441137);
}

double NNfunction_sb_dLdR::synapse0x1dc4070() {
   return (neuron0x1dc0430()*-0.322724);
}

double NNfunction_sb_dLdR::synapse0x1dc40b0() {
   return (neuron0x1dc0770()*0.316908);
}

double NNfunction_sb_dLdR::synapse0x1dc40f0() {
   return (neuron0x1dc0ab0()*-0.0112675);
}

double NNfunction_sb_dLdR::synapse0x1dc4130() {
   return (neuron0x1dc0df0()*-0.371051);
}

double NNfunction_sb_dLdR::synapse0x1dc4170() {
   return (neuron0x1dc1130()*-0.0555638);
}

double NNfunction_sb_dLdR::synapse0x1dc44f0() {
   return (neuron0x1dbc570()*0.0278556);
}

double NNfunction_sb_dLdR::synapse0x1dc4530() {
   return (neuron0x1dbc8b0()*-0.0445232);
}

double NNfunction_sb_dLdR::synapse0x1dc4570() {
   return (neuron0x1dbcbf0()*-0.240803);
}

double NNfunction_sb_dLdR::synapse0x1dc45b0() {
   return (neuron0x1dbcf30()*-1.40643);
}

double NNfunction_sb_dLdR::synapse0x1dc45f0() {
   return (neuron0x1dbd270()*-0.00461761);
}

double NNfunction_sb_dLdR::synapse0x1dc4630() {
   return (neuron0x1dbd5b0()*-0.0419914);
}

double NNfunction_sb_dLdR::synapse0x1dc4670() {
   return (neuron0x1dbd8f0()*-0.0132319);
}

double NNfunction_sb_dLdR::synapse0x1dc46b0() {
   return (neuron0x1dbdc30()*-0.0745137);
}

double NNfunction_sb_dLdR::synapse0x1dc46f0() {
   return (neuron0x1dbdf70()*0.0430472);
}

double NNfunction_sb_dLdR::synapse0x1b7be40() {
   return (neuron0x1dbe2b0()*0.0807183);
}

double NNfunction_sb_dLdR::synapse0x1b7be80() {
   return (neuron0x1dbe5f0()*-0.0444471);
}

double NNfunction_sb_dLdR::synapse0x1b7bec0() {
   return (neuron0x1dbe930()*0.342425);
}

double NNfunction_sb_dLdR::synapse0x1b7bf00() {
   return (neuron0x1dbec70()*-0.0712835);
}

double NNfunction_sb_dLdR::synapse0x1b7bf40() {
   return (neuron0x1dbefb0()*-0.0209808);
}

double NNfunction_sb_dLdR::synapse0x1b7bf80() {
   return (neuron0x1dbf2f0()*-0.0610627);
}

double NNfunction_sb_dLdR::synapse0x1b7bfc0() {
   return (neuron0x1dbf630()*-0.121652);
}

double NNfunction_sb_dLdR::synapse0x1dc4340() {
   return (neuron0x1dbf970()*0.00870389);
}

double NNfunction_sb_dLdR::synapse0x1dc4380() {
   return (neuron0x1dbfed0()*0.311454);
}

double NNfunction_sb_dLdR::synapse0x1b7c110() {
   return (neuron0x1dc00f0()*-0.0763325);
}

double NNfunction_sb_dLdR::synapse0x1b7c150() {
   return (neuron0x1dc0430()*-0.0145479);
}

double NNfunction_sb_dLdR::synapse0x1b7c190() {
   return (neuron0x1dc0770()*0.0558382);
}

double NNfunction_sb_dLdR::synapse0x1b7c1d0() {
   return (neuron0x1dc0ab0()*0.0301841);
}

double NNfunction_sb_dLdR::synapse0x1b7c210() {
   return (neuron0x1dc0df0()*0.0208498);
}

double NNfunction_sb_dLdR::synapse0x1dc4f40() {
   return (neuron0x1dc1130()*-0.0434319);
}

double NNfunction_sb_dLdR::synapse0x1dc52c0() {
   return (neuron0x1dbc570()*-0.00163752);
}

double NNfunction_sb_dLdR::synapse0x1dc5300() {
   return (neuron0x1dbc8b0()*-0.00509984);
}

double NNfunction_sb_dLdR::synapse0x1dc5340() {
   return (neuron0x1dbcbf0()*0.0320195);
}

double NNfunction_sb_dLdR::synapse0x1dc5380() {
   return (neuron0x1dbcf30()*12.7785);
}

double NNfunction_sb_dLdR::synapse0x1dc53c0() {
   return (neuron0x1dbd270()*0.0297436);
}

double NNfunction_sb_dLdR::synapse0x1dc5400() {
   return (neuron0x1dbd5b0()*-0.0454248);
}

double NNfunction_sb_dLdR::synapse0x1dc5440() {
   return (neuron0x1dbd8f0()*-0.0336903);
}

double NNfunction_sb_dLdR::synapse0x1dc5480() {
   return (neuron0x1dbdc30()*0.0216173);
}

double NNfunction_sb_dLdR::synapse0x1dc54c0() {
   return (neuron0x1dbdf70()*-0.0620483);
}

double NNfunction_sb_dLdR::synapse0x1dc5500() {
   return (neuron0x1dbe2b0()*-0.00857553);
}

double NNfunction_sb_dLdR::synapse0x1dc5540() {
   return (neuron0x1dbe5f0()*0.0115202);
}

double NNfunction_sb_dLdR::synapse0x1dc5580() {
   return (neuron0x1dbe930()*0.779877);
}

double NNfunction_sb_dLdR::synapse0x1dc55c0() {
   return (neuron0x1dbec70()*-0.0560618);
}

double NNfunction_sb_dLdR::synapse0x1dc5600() {
   return (neuron0x1dbefb0()*0.0177178);
}

double NNfunction_sb_dLdR::synapse0x1dc5640() {
   return (neuron0x1dbf2f0()*-0.0366);
}

double NNfunction_sb_dLdR::synapse0x1dc5680() {
   return (neuron0x1dbf630()*-0.0168267);
}

double NNfunction_sb_dLdR::synapse0x1dc5110() {
   return (neuron0x1dbf970()*0.0253274);
}

double NNfunction_sb_dLdR::synapse0x1dc5150() {
   return (neuron0x1dbfed0()*0.130257);
}

double NNfunction_sb_dLdR::synapse0x1dc57d0() {
   return (neuron0x1dc00f0()*-0.0429388);
}

double NNfunction_sb_dLdR::synapse0x1dc5810() {
   return (neuron0x1dc0430()*0.00184513);
}

double NNfunction_sb_dLdR::synapse0x1dc5850() {
   return (neuron0x1dc0770()*0.0735643);
}

double NNfunction_sb_dLdR::synapse0x1dc5890() {
   return (neuron0x1dc0ab0()*0.0332233);
}

double NNfunction_sb_dLdR::synapse0x1dc58d0() {
   return (neuron0x1dc0df0()*0.0129755);
}

double NNfunction_sb_dLdR::synapse0x1dc5910() {
   return (neuron0x1dc1130()*0.0703525);
}

double NNfunction_sb_dLdR::synapse0x1dc5c90() {
   return (neuron0x1dbc570()*0.011379);
}

double NNfunction_sb_dLdR::synapse0x1dc5cd0() {
   return (neuron0x1dbc8b0()*-0.00126522);
}

double NNfunction_sb_dLdR::synapse0x1dc5d10() {
   return (neuron0x1dbcbf0()*0.0125075);
}

double NNfunction_sb_dLdR::synapse0x1dc5d50() {
   return (neuron0x1dbcf30()*7.40868);
}

double NNfunction_sb_dLdR::synapse0x1dc5d90() {
   return (neuron0x1dbd270()*0.0212912);
}

double NNfunction_sb_dLdR::synapse0x1dc5dd0() {
   return (neuron0x1dbd5b0()*-0.000261073);
}

double NNfunction_sb_dLdR::synapse0x1dc5e10() {
   return (neuron0x1dbd8f0()*-0.0158839);
}

double NNfunction_sb_dLdR::synapse0x1dc5e50() {
   return (neuron0x1dbdc30()*0.0173721);
}

double NNfunction_sb_dLdR::synapse0x1dc5e90() {
   return (neuron0x1dbdf70()*0.00829246);
}

double NNfunction_sb_dLdR::synapse0x1dc5ed0() {
   return (neuron0x1dbe2b0()*-0.00332722);
}

double NNfunction_sb_dLdR::synapse0x1dc5f10() {
   return (neuron0x1dbe5f0()*0.0026833);
}

double NNfunction_sb_dLdR::synapse0x1dc5f50() {
   return (neuron0x1dbe930()*0.430713);
}

double NNfunction_sb_dLdR::synapse0x1dc5f90() {
   return (neuron0x1dbec70()*-0.0559393);
}

double NNfunction_sb_dLdR::synapse0x1dc5fd0() {
   return (neuron0x1dbefb0()*0.051307);
}

double NNfunction_sb_dLdR::synapse0x1dc6010() {
   return (neuron0x1dbf2f0()*-0.0231607);
}

double NNfunction_sb_dLdR::synapse0x1dc6050() {
   return (neuron0x1dbf630()*-0.0177914);
}

double NNfunction_sb_dLdR::synapse0x1dc5ae0() {
   return (neuron0x1dbf970()*0.0278877);
}

double NNfunction_sb_dLdR::synapse0x1dc5b20() {
   return (neuron0x1dbfed0()*0.776878);
}

double NNfunction_sb_dLdR::synapse0x1dc61a0() {
   return (neuron0x1dc00f0()*-0.0177848);
}

double NNfunction_sb_dLdR::synapse0x1dc61e0() {
   return (neuron0x1dc0430()*-0.0199732);
}

double NNfunction_sb_dLdR::synapse0x1dc6220() {
   return (neuron0x1dc0770()*0.00468291);
}

double NNfunction_sb_dLdR::synapse0x1dc6260() {
   return (neuron0x1dc0ab0()*-0.00587055);
}

double NNfunction_sb_dLdR::synapse0x1dc62a0() {
   return (neuron0x1dc0df0()*0.00534072);
}

double NNfunction_sb_dLdR::synapse0x1dc62e0() {
   return (neuron0x1dc1130()*0.00926047);
}

double NNfunction_sb_dLdR::synapse0x1dbfdc0() {
   return (neuron0x1dbc570()*-0.0100866);
}

double NNfunction_sb_dLdR::synapse0x1dbfe00() {
   return (neuron0x1dbc8b0()*-0.00811539);
}

double NNfunction_sb_dLdR::synapse0x1dbfe40() {
   return (neuron0x1dbcbf0()*0.00175819);
}

double NNfunction_sb_dLdR::synapse0x1dbfe80() {
   return (neuron0x1dbcf30()*-0.0814449);
}

double NNfunction_sb_dLdR::synapse0x1dc6870() {
   return (neuron0x1dbd270()*0.0116833);
}

double NNfunction_sb_dLdR::synapse0x1dc68b0() {
   return (neuron0x1dbd5b0()*-0.0122832);
}

double NNfunction_sb_dLdR::synapse0x1dc68f0() {
   return (neuron0x1dbd8f0()*-0.0354685);
}

double NNfunction_sb_dLdR::synapse0x1dc6930() {
   return (neuron0x1dbdc30()*0.00333913);
}

double NNfunction_sb_dLdR::synapse0x1dc6970() {
   return (neuron0x1dbdf70()*-0.00234354);
}

double NNfunction_sb_dLdR::synapse0x1dc69b0() {
   return (neuron0x1dbe2b0()*-0.00680015);
}

double NNfunction_sb_dLdR::synapse0x1dc69f0() {
   return (neuron0x1dbe5f0()*-0.0326344);
}

double NNfunction_sb_dLdR::synapse0x1dc6a30() {
   return (neuron0x1dbe930()*2.14583);
}

double NNfunction_sb_dLdR::synapse0x1dc6a70() {
   return (neuron0x1dbec70()*-0.0138743);
}

double NNfunction_sb_dLdR::synapse0x1dc6ab0() {
   return (neuron0x1dbefb0()*0.00815705);
}

double NNfunction_sb_dLdR::synapse0x1dc6af0() {
   return (neuron0x1dbf2f0()*0.0111883);
}

double NNfunction_sb_dLdR::synapse0x1dc6b30() {
   return (neuron0x1dbf630()*-0.00308174);
}

double NNfunction_sb_dLdR::synapse0x1dc64b0() {
   return (neuron0x1dbf970()*-0.000841163);
}

double NNfunction_sb_dLdR::synapse0x1dc64f0() {
   return (neuron0x1dbfed0()*-0.493295);
}

double NNfunction_sb_dLdR::synapse0x1dc6c80() {
   return (neuron0x1dc00f0()*0.00139588);
}

double NNfunction_sb_dLdR::synapse0x1dc6cc0() {
   return (neuron0x1dc0430()*-0.00640151);
}

double NNfunction_sb_dLdR::synapse0x1dc6d00() {
   return (neuron0x1dc0770()*0.0457796);
}

double NNfunction_sb_dLdR::synapse0x1dc6d40() {
   return (neuron0x1dc0ab0()*0.0243339);
}

double NNfunction_sb_dLdR::synapse0x1dc6d80() {
   return (neuron0x1dc0df0()*0.00615024);
}

double NNfunction_sb_dLdR::synapse0x1dc6dc0() {
   return (neuron0x1dc1130()*0.00651523);
}

double NNfunction_sb_dLdR::synapse0x1dc7140() {
   return (neuron0x1dbc570()*0.0119361);
}

double NNfunction_sb_dLdR::synapse0x1dc7180() {
   return (neuron0x1dbc8b0()*-0.0920763);
}

double NNfunction_sb_dLdR::synapse0x1dc71c0() {
   return (neuron0x1dbcbf0()*-0.0598145);
}

double NNfunction_sb_dLdR::synapse0x1dc7200() {
   return (neuron0x1dbcf30()*-0.591702);
}

double NNfunction_sb_dLdR::synapse0x1dc7240() {
   return (neuron0x1dbd270()*-0.0665432);
}

double NNfunction_sb_dLdR::synapse0x1dc7280() {
   return (neuron0x1dbd5b0()*0.143867);
}

double NNfunction_sb_dLdR::synapse0x1dc72c0() {
   return (neuron0x1dbd8f0()*0.176766);
}

double NNfunction_sb_dLdR::synapse0x1dc7300() {
   return (neuron0x1dbdc30()*-0.0583563);
}

double NNfunction_sb_dLdR::synapse0x1dc7340() {
   return (neuron0x1dbdf70()*0.0480791);
}

double NNfunction_sb_dLdR::synapse0x1dc7380() {
   return (neuron0x1dbe2b0()*0.0300975);
}

double NNfunction_sb_dLdR::synapse0x1dc73c0() {
   return (neuron0x1dbe5f0()*-0.00999857);
}

double NNfunction_sb_dLdR::synapse0x1dc7400() {
   return (neuron0x1dbe930()*-0.432542);
}

double NNfunction_sb_dLdR::synapse0x1dc7440() {
   return (neuron0x1dbec70()*0.000531191);
}

double NNfunction_sb_dLdR::synapse0x1dc7480() {
   return (neuron0x1dbefb0()*-0.0755115);
}

double NNfunction_sb_dLdR::synapse0x1dc74c0() {
   return (neuron0x1dbf2f0()*0.0350974);
}

double NNfunction_sb_dLdR::synapse0x1dc7500() {
   return (neuron0x1dbf630()*-0.0224957);
}

double NNfunction_sb_dLdR::synapse0x1dc6f90() {
   return (neuron0x1dbf970()*0.0611583);
}

double NNfunction_sb_dLdR::synapse0x1dc6fd0() {
   return (neuron0x1dbfed0()*-0.872152);
}

double NNfunction_sb_dLdR::synapse0x1dc7650() {
   return (neuron0x1dc00f0()*-0.0469312);
}

double NNfunction_sb_dLdR::synapse0x1dc7690() {
   return (neuron0x1dc0430()*0.0148508);
}

double NNfunction_sb_dLdR::synapse0x1dc76d0() {
   return (neuron0x1dc0770()*-0.0332912);
}

double NNfunction_sb_dLdR::synapse0x1dc7710() {
   return (neuron0x1dc0ab0()*-0.0210512);
}

double NNfunction_sb_dLdR::synapse0x1dc7750() {
   return (neuron0x1dc0df0()*0.0169593);
}

double NNfunction_sb_dLdR::synapse0x1dc7790() {
   return (neuron0x1dc1130()*-0.0394765);
}

double NNfunction_sb_dLdR::synapse0x1dc7b10() {
   return (neuron0x1dbc570()*-0.0710535);
}

double NNfunction_sb_dLdR::synapse0x1dc7b50() {
   return (neuron0x1dbc8b0()*-0.0858405);
}

double NNfunction_sb_dLdR::synapse0x1dc7b90() {
   return (neuron0x1dbcbf0()*0.190364);
}

double NNfunction_sb_dLdR::synapse0x1dc7bd0() {
   return (neuron0x1dbcf30()*1.79714);
}

double NNfunction_sb_dLdR::synapse0x1dc7c10() {
   return (neuron0x1dbd270()*-0.0712196);
}

double NNfunction_sb_dLdR::synapse0x1dc7c50() {
   return (neuron0x1dbd5b0()*-0.208698);
}

double NNfunction_sb_dLdR::synapse0x1dc7c90() {
   return (neuron0x1dbd8f0()*0.188736);
}

double NNfunction_sb_dLdR::synapse0x1dc7cd0() {
   return (neuron0x1dbdc30()*0.137462);
}

double NNfunction_sb_dLdR::synapse0x1dc7d10() {
   return (neuron0x1dbdf70()*-0.0549183);
}

double NNfunction_sb_dLdR::synapse0x1dc7d50() {
   return (neuron0x1dbe2b0()*-0.049951);
}

double NNfunction_sb_dLdR::synapse0x1dc7d90() {
   return (neuron0x1dbe5f0()*0.0710953);
}

double NNfunction_sb_dLdR::synapse0x1dc7dd0() {
   return (neuron0x1dbe930()*-1.61519);
}

double NNfunction_sb_dLdR::synapse0x1dc7e10() {
   return (neuron0x1dbec70()*0.0333739);
}

double NNfunction_sb_dLdR::synapse0x1dc7e50() {
   return (neuron0x1dbefb0()*-0.138567);
}

double NNfunction_sb_dLdR::synapse0x1dc7e90() {
   return (neuron0x1dbf2f0()*-0.110425);
}

double NNfunction_sb_dLdR::synapse0x1dc7ed0() {
   return (neuron0x1dbf630()*0.120693);
}

double NNfunction_sb_dLdR::synapse0x1dc7960() {
   return (neuron0x1dbf970()*-0.0919748);
}

double NNfunction_sb_dLdR::synapse0x1dc79a0() {
   return (neuron0x1dbfed0()*-0.871845);
}

double NNfunction_sb_dLdR::synapse0x1dc4730() {
   return (neuron0x1dc00f0()*0.223515);
}

double NNfunction_sb_dLdR::synapse0x1dc4770() {
   return (neuron0x1dc0430()*0.251426);
}

double NNfunction_sb_dLdR::synapse0x1dc47b0() {
   return (neuron0x1dc0770()*0.0724576);
}

double NNfunction_sb_dLdR::synapse0x1dc47f0() {
   return (neuron0x1dc0ab0()*-0.0496322);
}

double NNfunction_sb_dLdR::synapse0x1dc4830() {
   return (neuron0x1dc0df0()*-0.0286159);
}

double NNfunction_sb_dLdR::synapse0x1dc4870() {
   return (neuron0x1dc1130()*0.266054);
}

double NNfunction_sb_dLdR::synapse0x1dc4bf0() {
   return (neuron0x1dbc570()*-0.0226492);
}

double NNfunction_sb_dLdR::synapse0x1dc4c30() {
   return (neuron0x1dbc8b0()*0.121901);
}

double NNfunction_sb_dLdR::synapse0x1dc4c70() {
   return (neuron0x1dbcbf0()*0.158578);
}

double NNfunction_sb_dLdR::synapse0x1dc4cb0() {
   return (neuron0x1dbcf30()*-0.955315);
}

double NNfunction_sb_dLdR::synapse0x1dc4cf0() {
   return (neuron0x1dbd270()*0.450518);
}

double NNfunction_sb_dLdR::synapse0x1dc4d30() {
   return (neuron0x1dbd5b0()*-0.143018);
}

double NNfunction_sb_dLdR::synapse0x1dc4d70() {
   return (neuron0x1dbd8f0()*0.484731);
}

double NNfunction_sb_dLdR::synapse0x1dc4db0() {
   return (neuron0x1dbdc30()*-0.416253);
}

double NNfunction_sb_dLdR::synapse0x1dc4df0() {
   return (neuron0x1dbdf70()*0.586461);
}

double NNfunction_sb_dLdR::synapse0x1dc4e30() {
   return (neuron0x1dbe2b0()*0.11301);
}

double NNfunction_sb_dLdR::synapse0x1dc4e70() {
   return (neuron0x1dbe5f0()*-0.261015);
}

double NNfunction_sb_dLdR::synapse0x1dc4eb0() {
   return (neuron0x1dbe930()*0.18672);
}

double NNfunction_sb_dLdR::synapse0x1dc4ef0() {
   return (neuron0x1dbec70()*-0.895627);
}

double NNfunction_sb_dLdR::synapse0x1dc9030() {
   return (neuron0x1dbefb0()*-0.0999416);
}

double NNfunction_sb_dLdR::synapse0x1dc9070() {
   return (neuron0x1dbf2f0()*0.181286);
}

double NNfunction_sb_dLdR::synapse0x1dc90b0() {
   return (neuron0x1dbf630()*0.0395641);
}

double NNfunction_sb_dLdR::synapse0x1dc4a40() {
   return (neuron0x1dbf970()*0.362813);
}

double NNfunction_sb_dLdR::synapse0x1dc4a80() {
   return (neuron0x1dbfed0()*0.819874);
}

double NNfunction_sb_dLdR::synapse0x1dc9200() {
   return (neuron0x1dc00f0()*-0.0974884);
}

double NNfunction_sb_dLdR::synapse0x1dc9240() {
   return (neuron0x1dc0430()*-0.748799);
}

double NNfunction_sb_dLdR::synapse0x1dc9280() {
   return (neuron0x1dc0770()*0.822865);
}

double NNfunction_sb_dLdR::synapse0x1dc92c0() {
   return (neuron0x1dc0ab0()*-0.132968);
}

double NNfunction_sb_dLdR::synapse0x1dc9300() {
   return (neuron0x1dc0df0()*-0.69759);
}

double NNfunction_sb_dLdR::synapse0x1dc9340() {
   return (neuron0x1dc1130()*0.335507);
}

double NNfunction_sb_dLdR::synapse0x1dc96c0() {
   return (neuron0x1dbc570()*0.261277);
}

double NNfunction_sb_dLdR::synapse0x1dc9700() {
   return (neuron0x1dbc8b0()*-0.166984);
}

double NNfunction_sb_dLdR::synapse0x1dc9740() {
   return (neuron0x1dbcbf0()*0.407389);
}

double NNfunction_sb_dLdR::synapse0x1dc9780() {
   return (neuron0x1dbcf30()*-0.712179);
}

double NNfunction_sb_dLdR::synapse0x1dc97c0() {
   return (neuron0x1dbd270()*-0.395317);
}

double NNfunction_sb_dLdR::synapse0x1dc9800() {
   return (neuron0x1dbd5b0()*0.0961927);
}

double NNfunction_sb_dLdR::synapse0x1dc9840() {
   return (neuron0x1dbd8f0()*-0.274005);
}

double NNfunction_sb_dLdR::synapse0x1dc9880() {
   return (neuron0x1dbdc30()*-0.059178);
}

double NNfunction_sb_dLdR::synapse0x1dc98c0() {
   return (neuron0x1dbdf70()*-0.332361);
}

double NNfunction_sb_dLdR::synapse0x1dc9900() {
   return (neuron0x1dbe2b0()*0.736745);
}

double NNfunction_sb_dLdR::synapse0x1dc9940() {
   return (neuron0x1dbe5f0()*-0.0662173);
}

double NNfunction_sb_dLdR::synapse0x1dc9980() {
   return (neuron0x1dbe930()*0.246215);
}

double NNfunction_sb_dLdR::synapse0x1dc99c0() {
   return (neuron0x1dbec70()*-0.0372758);
}

double NNfunction_sb_dLdR::synapse0x1dc9a00() {
   return (neuron0x1dbefb0()*0.505179);
}

double NNfunction_sb_dLdR::synapse0x1dc9a40() {
   return (neuron0x1dbf2f0()*0.196031);
}

double NNfunction_sb_dLdR::synapse0x1dc9a80() {
   return (neuron0x1dbf630()*0.642737);
}

double NNfunction_sb_dLdR::synapse0x1dc9510() {
   return (neuron0x1dbf970()*0.240671);
}

double NNfunction_sb_dLdR::synapse0x1dc9550() {
   return (neuron0x1dbfed0()*-0.0252483);
}

double NNfunction_sb_dLdR::synapse0x1dc9bd0() {
   return (neuron0x1dc00f0()*-0.290279);
}

double NNfunction_sb_dLdR::synapse0x1dc9c10() {
   return (neuron0x1dc0430()*-0.921861);
}

double NNfunction_sb_dLdR::synapse0x1dc9c50() {
   return (neuron0x1dc0770()*-0.221655);
}

double NNfunction_sb_dLdR::synapse0x1dc9c90() {
   return (neuron0x1dc0ab0()*-0.0683485);
}

double NNfunction_sb_dLdR::synapse0x1dc9cd0() {
   return (neuron0x1dc0df0()*0.00847464);
}

double NNfunction_sb_dLdR::synapse0x1dc9d10() {
   return (neuron0x1dc1130()*0.220267);
}

double NNfunction_sb_dLdR::synapse0x1dca090() {
   return (neuron0x1dbc570()*-0.0195164);
}

double NNfunction_sb_dLdR::synapse0x1dca0d0() {
   return (neuron0x1dbc8b0()*0.0717111);
}

double NNfunction_sb_dLdR::synapse0x1dca110() {
   return (neuron0x1dbcbf0()*0.156556);
}

double NNfunction_sb_dLdR::synapse0x1dca150() {
   return (neuron0x1dbcf30()*0.769003);
}

double NNfunction_sb_dLdR::synapse0x1dca190() {
   return (neuron0x1dbd270()*-0.0953531);
}

double NNfunction_sb_dLdR::synapse0x1dca1d0() {
   return (neuron0x1dbd5b0()*0.0567238);
}

double NNfunction_sb_dLdR::synapse0x1dca210() {
   return (neuron0x1dbd8f0()*0.0653157);
}

double NNfunction_sb_dLdR::synapse0x1dca250() {
   return (neuron0x1dbdc30()*0.0729938);
}

double NNfunction_sb_dLdR::synapse0x1dca290() {
   return (neuron0x1dbdf70()*0.00378007);
}

double NNfunction_sb_dLdR::synapse0x1dca2d0() {
   return (neuron0x1dbe2b0()*-0.0538615);
}

double NNfunction_sb_dLdR::synapse0x1dca310() {
   return (neuron0x1dbe5f0()*0.0428851);
}

double NNfunction_sb_dLdR::synapse0x1dca350() {
   return (neuron0x1dbe930()*-0.469781);
}

double NNfunction_sb_dLdR::synapse0x1dca390() {
   return (neuron0x1dbec70()*0.210413);
}

double NNfunction_sb_dLdR::synapse0x1dca3d0() {
   return (neuron0x1dbefb0()*-0.0774414);
}

double NNfunction_sb_dLdR::synapse0x1dca410() {
   return (neuron0x1dbf2f0()*0.0713349);
}

double NNfunction_sb_dLdR::synapse0x1dca450() {
   return (neuron0x1dbf630()*0.0983921);
}

double NNfunction_sb_dLdR::synapse0x1dc9ee0() {
   return (neuron0x1dbf970()*-0.0402977);
}

double NNfunction_sb_dLdR::synapse0x1dc9f20() {
   return (neuron0x1dbfed0()*0.125325);
}

double NNfunction_sb_dLdR::synapse0x1dca5a0() {
   return (neuron0x1dc00f0()*0.0695476);
}

double NNfunction_sb_dLdR::synapse0x1dca5e0() {
   return (neuron0x1dc0430()*0.0611838);
}

double NNfunction_sb_dLdR::synapse0x1dca620() {
   return (neuron0x1dc0770()*-0.0753211);
}

double NNfunction_sb_dLdR::synapse0x1dca660() {
   return (neuron0x1dc0ab0()*-0.0338735);
}

double NNfunction_sb_dLdR::synapse0x1dca6a0() {
   return (neuron0x1dc0df0()*-0.0166793);
}

double NNfunction_sb_dLdR::synapse0x1dca6e0() {
   return (neuron0x1dc1130()*-0.000234355);
}

double NNfunction_sb_dLdR::synapse0x1dcaa60() {
   return (neuron0x1dbc570()*-0.322344);
}

double NNfunction_sb_dLdR::synapse0x1dcaaa0() {
   return (neuron0x1dbc8b0()*-0.028746);
}

double NNfunction_sb_dLdR::synapse0x1dcaae0() {
   return (neuron0x1dbcbf0()*-0.27758);
}

double NNfunction_sb_dLdR::synapse0x1dcab20() {
   return (neuron0x1dbcf30()*-0.670024);
}

double NNfunction_sb_dLdR::synapse0x1dcab60() {
   return (neuron0x1dbd270()*-0.0751859);
}

double NNfunction_sb_dLdR::synapse0x1dcaba0() {
   return (neuron0x1dbd5b0()*0.283638);
}

double NNfunction_sb_dLdR::synapse0x1dcabe0() {
   return (neuron0x1dbd8f0()*-0.326513);
}

double NNfunction_sb_dLdR::synapse0x1dcac20() {
   return (neuron0x1dbdc30()*0.159639);
}

double NNfunction_sb_dLdR::synapse0x1dcac60() {
   return (neuron0x1dbdf70()*-0.43202);
}

double NNfunction_sb_dLdR::synapse0x1dcaca0() {
   return (neuron0x1dbe2b0()*-0.729989);
}

double NNfunction_sb_dLdR::synapse0x1dcace0() {
   return (neuron0x1dbe5f0()*-0.556698);
}

double NNfunction_sb_dLdR::synapse0x1dcad20() {
   return (neuron0x1dbe930()*-0.451184);
}

double NNfunction_sb_dLdR::synapse0x1dcad60() {
   return (neuron0x1dbec70()*0.12563);
}

double NNfunction_sb_dLdR::synapse0x1dcada0() {
   return (neuron0x1dbefb0()*0.538073);
}

double NNfunction_sb_dLdR::synapse0x1dcade0() {
   return (neuron0x1dbf2f0()*0.415424);
}

double NNfunction_sb_dLdR::synapse0x1dcae20() {
   return (neuron0x1dbf630()*-0.117252);
}

double NNfunction_sb_dLdR::synapse0x1dca8b0() {
   return (neuron0x1dbf970()*-0.242492);
}

double NNfunction_sb_dLdR::synapse0x1dca8f0() {
   return (neuron0x1dbfed0()*-0.615695);
}

double NNfunction_sb_dLdR::synapse0x1dcaf70() {
   return (neuron0x1dc00f0()*-0.565674);
}

double NNfunction_sb_dLdR::synapse0x1dcafb0() {
   return (neuron0x1dc0430()*0.11345);
}

double NNfunction_sb_dLdR::synapse0x1dcaff0() {
   return (neuron0x1dc0770()*0.100305);
}

double NNfunction_sb_dLdR::synapse0x1dcb030() {
   return (neuron0x1dc0ab0()*0.878768);
}

double NNfunction_sb_dLdR::synapse0x1dcb070() {
   return (neuron0x1dc0df0()*-0.190818);
}

double NNfunction_sb_dLdR::synapse0x1dcb0b0() {
   return (neuron0x1dc1130()*0.638502);
}

double NNfunction_sb_dLdR::synapse0x1dcb430() {
   return (neuron0x1dbc570()*1.60439);
}

double NNfunction_sb_dLdR::synapse0x1dbc790() {
   return (neuron0x1dbc8b0()*0.192677);
}

double NNfunction_sb_dLdR::synapse0x1dbc7d0() {
   return (neuron0x1dbcbf0()*0.495229);
}

double NNfunction_sb_dLdR::synapse0x1dbcad0() {
   return (neuron0x1dbcf30()*-0.631512);
}

double NNfunction_sb_dLdR::synapse0x1dbcb10() {
   return (neuron0x1dbd270()*0.0977106);
}

double NNfunction_sb_dLdR::synapse0x1dbce10() {
   return (neuron0x1dbd5b0()*0.144454);
}

double NNfunction_sb_dLdR::synapse0x1dbce50() {
   return (neuron0x1dbd8f0()*-0.312509);
}

double NNfunction_sb_dLdR::synapse0x1dbd150() {
   return (neuron0x1dbdc30()*-0.0640887);
}

double NNfunction_sb_dLdR::synapse0x1dbd190() {
   return (neuron0x1dbdf70()*0.460062);
}

double NNfunction_sb_dLdR::synapse0x1dbd490() {
   return (neuron0x1dbe2b0()*-0.246064);
}

double NNfunction_sb_dLdR::synapse0x1dbd4d0() {
   return (neuron0x1dbe5f0()*0.37164);
}

double NNfunction_sb_dLdR::synapse0x1dbd7d0() {
   return (neuron0x1dbe930()*0.396439);
}

double NNfunction_sb_dLdR::synapse0x1dbd810() {
   return (neuron0x1dbec70()*1.03706);
}

double NNfunction_sb_dLdR::synapse0x1dbdb10() {
   return (neuron0x1dbefb0()*0.102377);
}

double NNfunction_sb_dLdR::synapse0x1dbdb50() {
   return (neuron0x1dbf2f0()*1.33945);
}

double NNfunction_sb_dLdR::synapse0x1dbde50() {
   return (neuron0x1dbf630()*0.691495);
}

double NNfunction_sb_dLdR::synapse0x1dbde90() {
   return (neuron0x1dbf970()*0.28057);
}

double NNfunction_sb_dLdR::synapse0x1dbe190() {
   return (neuron0x1dbfed0()*0.177826);
}

double NNfunction_sb_dLdR::synapse0x1dbe1d0() {
   return (neuron0x1dc00f0()*0.0308349);
}

double NNfunction_sb_dLdR::synapse0x1dbe4d0() {
   return (neuron0x1dc0430()*0.0869805);
}

double NNfunction_sb_dLdR::synapse0x1dbe510() {
   return (neuron0x1dc0770()*0.749424);
}

double NNfunction_sb_dLdR::synapse0x1dbe810() {
   return (neuron0x1dc0ab0()*-0.0606523);
}

double NNfunction_sb_dLdR::synapse0x1dbe850() {
   return (neuron0x1dc0df0()*0.308383);
}

double NNfunction_sb_dLdR::synapse0x1dbeb50() {
   return (neuron0x1dc1130()*0.386221);
}

double NNfunction_sb_dLdR::synapse0x1dbeb90() {
   return (neuron0x1dbc570()*0.23835);
}

double NNfunction_sb_dLdR::synapse0x1dbf850() {
   return (neuron0x1dbc8b0()*-0.400555);
}

double NNfunction_sb_dLdR::synapse0x1dbf890() {
   return (neuron0x1dbcbf0()*0.243266);
}

double NNfunction_sb_dLdR::synapse0x1dcb280() {
   return (neuron0x1dbcf30()*0.133031);
}

double NNfunction_sb_dLdR::synapse0x1dcb2c0() {
   return (neuron0x1dbd270()*-0.302965);
}

double NNfunction_sb_dLdR::synapse0x1dbfb90() {
   return (neuron0x1dbd5b0()*-0.0357114);
}

double NNfunction_sb_dLdR::synapse0x1dbfbd0() {
   return (neuron0x1dbd8f0()*-0.657182);
}

double NNfunction_sb_dLdR::synapse0x1b6db60() {
   return (neuron0x1dbdc30()*-0.129753);
}

double NNfunction_sb_dLdR::synapse0x1b6dba0() {
   return (neuron0x1dbdf70()*-0.289697);
}

double NNfunction_sb_dLdR::synapse0x1dc0310() {
   return (neuron0x1dbe2b0()*0.0299571);
}

double NNfunction_sb_dLdR::synapse0x1dc0350() {
   return (neuron0x1dbe5f0()*-0.0907348);
}

double NNfunction_sb_dLdR::synapse0x1dc0650() {
   return (neuron0x1dbe930()*-1.29434);
}

double NNfunction_sb_dLdR::synapse0x1dc0690() {
   return (neuron0x1dbec70()*0.388203);
}

double NNfunction_sb_dLdR::synapse0x1dc0990() {
   return (neuron0x1dbefb0()*-0.116783);
}

double NNfunction_sb_dLdR::synapse0x1dc09d0() {
   return (neuron0x1dbf2f0()*-0.0215408);
}

double NNfunction_sb_dLdR::synapse0x1dc0cd0() {
   return (neuron0x1dbf630()*-0.147298);
}

double NNfunction_sb_dLdR::synapse0x1dc0d10() {
   return (neuron0x1dbf970()*0.0751482);
}

double NNfunction_sb_dLdR::synapse0x1dc1010() {
   return (neuron0x1dbfed0()*0.627768);
}

double NNfunction_sb_dLdR::synapse0x1dc1050() {
   return (neuron0x1dc00f0()*1.0628);
}

double NNfunction_sb_dLdR::synapse0x1dc1350() {
   return (neuron0x1dc0430()*0.110717);
}

double NNfunction_sb_dLdR::synapse0x1dc1390() {
   return (neuron0x1dc0770()*0.460856);
}

double NNfunction_sb_dLdR::synapse0x1dbee90() {
   return (neuron0x1dc0ab0()*-0.398184);
}

double NNfunction_sb_dLdR::synapse0x1dbeed0() {
   return (neuron0x1dc0df0()*-0.0900565);
}

double NNfunction_sb_dLdR::synapse0x1dcd1a0() {
   return (neuron0x1dc1130()*-0.220356);
}

double NNfunction_sb_dLdR::synapse0x1dcd520() {
   return (neuron0x1dbc570()*-0.00681923);
}

double NNfunction_sb_dLdR::synapse0x1dcd560() {
   return (neuron0x1dbc8b0()*0.010123);
}

double NNfunction_sb_dLdR::synapse0x1dcd5a0() {
   return (neuron0x1dbcbf0()*0.0196149);
}

double NNfunction_sb_dLdR::synapse0x1dcd5e0() {
   return (neuron0x1dbcf30()*-2.79827);
}

double NNfunction_sb_dLdR::synapse0x1dcd620() {
   return (neuron0x1dbd270()*-0.00220963);
}

double NNfunction_sb_dLdR::synapse0x1dcd660() {
   return (neuron0x1dbd5b0()*-0.00847052);
}

double NNfunction_sb_dLdR::synapse0x1dcd6a0() {
   return (neuron0x1dbd8f0()*-0.00517222);
}

double NNfunction_sb_dLdR::synapse0x1dcd6e0() {
   return (neuron0x1dbdc30()*0.0128377);
}

double NNfunction_sb_dLdR::synapse0x1dcd720() {
   return (neuron0x1dbdf70()*-0.0183906);
}

double NNfunction_sb_dLdR::synapse0x1dcd760() {
   return (neuron0x1dbe2b0()*0.00703706);
}

double NNfunction_sb_dLdR::synapse0x1dcd7a0() {
   return (neuron0x1dbe5f0()*0.00395161);
}

double NNfunction_sb_dLdR::synapse0x1dcd7e0() {
   return (neuron0x1dbe930()*-0.0973157);
}

double NNfunction_sb_dLdR::synapse0x1dcd820() {
   return (neuron0x1dbec70()*0.00757047);
}

double NNfunction_sb_dLdR::synapse0x1dcd860() {
   return (neuron0x1dbefb0()*0.00844186);
}

double NNfunction_sb_dLdR::synapse0x1dcd8a0() {
   return (neuron0x1dbf2f0()*-0.000733638);
}

double NNfunction_sb_dLdR::synapse0x1dcd8e0() {
   return (neuron0x1dbf630()*0.0155334);
}

double NNfunction_sb_dLdR::synapse0x1dcd370() {
   return (neuron0x1dbf970()*-0.00077682);
}

double NNfunction_sb_dLdR::synapse0x1dcd3b0() {
   return (neuron0x1dbfed0()*-0.241446);
}

double NNfunction_sb_dLdR::synapse0x1dcda30() {
   return (neuron0x1dc00f0()*0.0221548);
}

double NNfunction_sb_dLdR::synapse0x1dcda70() {
   return (neuron0x1dc0430()*0.00736624);
}

double NNfunction_sb_dLdR::synapse0x1dcdab0() {
   return (neuron0x1dc0770()*-0.0163664);
}

double NNfunction_sb_dLdR::synapse0x1dcdaf0() {
   return (neuron0x1dc0ab0()*-0.0100313);
}

double NNfunction_sb_dLdR::synapse0x1dcdb30() {
   return (neuron0x1dc0df0()*0.00140712);
}

double NNfunction_sb_dLdR::synapse0x1dcdb70() {
   return (neuron0x1dc1130()*0.00527669);
}

double NNfunction_sb_dLdR::synapse0x1dcdef0() {
   return (neuron0x1dbc570()*0.320963);
}

double NNfunction_sb_dLdR::synapse0x1dcdf30() {
   return (neuron0x1dbc8b0()*-0.851669);
}

double NNfunction_sb_dLdR::synapse0x1dcdf70() {
   return (neuron0x1dbcbf0()*0.474368);
}

double NNfunction_sb_dLdR::synapse0x1dcdfb0() {
   return (neuron0x1dbcf30()*0.350439);
}

double NNfunction_sb_dLdR::synapse0x1dcdff0() {
   return (neuron0x1dbd270()*0.563146);
}

double NNfunction_sb_dLdR::synapse0x1dce030() {
   return (neuron0x1dbd5b0()*-0.0766588);
}

double NNfunction_sb_dLdR::synapse0x1dce070() {
   return (neuron0x1dbd8f0()*-0.62343);
}

double NNfunction_sb_dLdR::synapse0x1dce0b0() {
   return (neuron0x1dbdc30()*-0.29703);
}

double NNfunction_sb_dLdR::synapse0x1dce0f0() {
   return (neuron0x1dbdf70()*0.0915903);
}

double NNfunction_sb_dLdR::synapse0x1dce130() {
   return (neuron0x1dbe2b0()*0.352405);
}

double NNfunction_sb_dLdR::synapse0x1dce170() {
   return (neuron0x1dbe5f0()*-0.131863);
}

double NNfunction_sb_dLdR::synapse0x1dce1b0() {
   return (neuron0x1dbe930()*0.232248);
}

double NNfunction_sb_dLdR::synapse0x1dce1f0() {
   return (neuron0x1dbec70()*0.624733);
}

double NNfunction_sb_dLdR::synapse0x1dce230() {
   return (neuron0x1dbefb0()*0.0875601);
}

double NNfunction_sb_dLdR::synapse0x1dce270() {
   return (neuron0x1dbf2f0()*0.0201063);
}

double NNfunction_sb_dLdR::synapse0x1dce2b0() {
   return (neuron0x1dbf630()*-0.970813);
}

double NNfunction_sb_dLdR::synapse0x1dcdd40() {
   return (neuron0x1dbf970()*-0.720081);
}

double NNfunction_sb_dLdR::synapse0x1dcdd80() {
   return (neuron0x1dbfed0()*-0.84499);
}

double NNfunction_sb_dLdR::synapse0x1dce400() {
   return (neuron0x1dc00f0()*-0.0408981);
}

double NNfunction_sb_dLdR::synapse0x1dce440() {
   return (neuron0x1dc0430()*0.320731);
}

double NNfunction_sb_dLdR::synapse0x1dce480() {
   return (neuron0x1dc0770()*0.499715);
}

double NNfunction_sb_dLdR::synapse0x1dce4c0() {
   return (neuron0x1dc0ab0()*0.398271);
}

double NNfunction_sb_dLdR::synapse0x1dce500() {
   return (neuron0x1dc0df0()*0.497097);
}

double NNfunction_sb_dLdR::synapse0x1dce540() {
   return (neuron0x1dc1130()*0.0214088);
}

double NNfunction_sb_dLdR::synapse0x1dce8c0() {
   return (neuron0x1dbc570()*-0.0275167);
}

double NNfunction_sb_dLdR::synapse0x1dce900() {
   return (neuron0x1dbc8b0()*-0.00481049);
}

double NNfunction_sb_dLdR::synapse0x1dce940() {
   return (neuron0x1dbcbf0()*0.0153049);
}

double NNfunction_sb_dLdR::synapse0x1dce980() {
   return (neuron0x1dbcf30()*0.143175);
}

double NNfunction_sb_dLdR::synapse0x1dce9c0() {
   return (neuron0x1dbd270()*-0.0076197);
}

double NNfunction_sb_dLdR::synapse0x1dcea00() {
   return (neuron0x1dbd5b0()*0.0357364);
}

double NNfunction_sb_dLdR::synapse0x1dcea40() {
   return (neuron0x1dbd8f0()*0.00281522);
}

double NNfunction_sb_dLdR::synapse0x1dcea80() {
   return (neuron0x1dbdc30()*-0.0118326);
}

double NNfunction_sb_dLdR::synapse0x1dceac0() {
   return (neuron0x1dbdf70()*0.00914178);
}

double NNfunction_sb_dLdR::synapse0x1dceb00() {
   return (neuron0x1dbe2b0()*-0.0230833);
}

double NNfunction_sb_dLdR::synapse0x1dceb40() {
   return (neuron0x1dbe5f0()*-0.00478521);
}

double NNfunction_sb_dLdR::synapse0x1dceb80() {
   return (neuron0x1dbe930()*-0.574435);
}

double NNfunction_sb_dLdR::synapse0x1dcebc0() {
   return (neuron0x1dbec70()*-0.0348786);
}

double NNfunction_sb_dLdR::synapse0x1dcec00() {
   return (neuron0x1dbefb0()*0.00357644);
}

double NNfunction_sb_dLdR::synapse0x1dcec40() {
   return (neuron0x1dbf2f0()*0.0245488);
}

double NNfunction_sb_dLdR::synapse0x1dcec80() {
   return (neuron0x1dbf630()*0.0323892);
}

double NNfunction_sb_dLdR::synapse0x1dce710() {
   return (neuron0x1dbf970()*0.0405795);
}

double NNfunction_sb_dLdR::synapse0x1dce750() {
   return (neuron0x1dbfed0()*1.81399);
}

double NNfunction_sb_dLdR::synapse0x1dcedd0() {
   return (neuron0x1dc00f0()*0.00794643);
}

double NNfunction_sb_dLdR::synapse0x1dcee10() {
   return (neuron0x1dc0430()*-0.0254561);
}

double NNfunction_sb_dLdR::synapse0x1dcee50() {
   return (neuron0x1dc0770()*-0.0117567);
}

double NNfunction_sb_dLdR::synapse0x1dcee90() {
   return (neuron0x1dc0ab0()*0.000326168);
}

double NNfunction_sb_dLdR::synapse0x1dceed0() {
   return (neuron0x1dc0df0()*-0.00385917);
}

double NNfunction_sb_dLdR::synapse0x1dcef10() {
   return (neuron0x1dc1130()*-0.00919046);
}

double NNfunction_sb_dLdR::synapse0x1dcf290() {
   return (neuron0x1dbc570()*0.209512);
}

double NNfunction_sb_dLdR::synapse0x1dcf2d0() {
   return (neuron0x1dbc8b0()*-0.0779415);
}

double NNfunction_sb_dLdR::synapse0x1dcf310() {
   return (neuron0x1dbcbf0()*-0.846218);
}

double NNfunction_sb_dLdR::synapse0x1dcf350() {
   return (neuron0x1dbcf30()*-0.963585);
}

double NNfunction_sb_dLdR::synapse0x1dcf390() {
   return (neuron0x1dbd270()*-0.378286);
}

double NNfunction_sb_dLdR::synapse0x1dcf3d0() {
   return (neuron0x1dbd5b0()*0.76629);
}

double NNfunction_sb_dLdR::synapse0x1dcf410() {
   return (neuron0x1dbd8f0()*-0.45391);
}

double NNfunction_sb_dLdR::synapse0x1dcf450() {
   return (neuron0x1dbdc30()*1.00375);
}

double NNfunction_sb_dLdR::synapse0x1dcf490() {
   return (neuron0x1dbdf70()*0.563947);
}

double NNfunction_sb_dLdR::synapse0x1dcf4d0() {
   return (neuron0x1dbe2b0()*-0.135396);
}

double NNfunction_sb_dLdR::synapse0x1dcf510() {
   return (neuron0x1dbe5f0()*1.01689);
}

double NNfunction_sb_dLdR::synapse0x1dcf550() {
   return (neuron0x1dbe930()*-0.145533);
}

double NNfunction_sb_dLdR::synapse0x1dcf590() {
   return (neuron0x1dbec70()*-0.568174);
}

double NNfunction_sb_dLdR::synapse0x1dcf5d0() {
   return (neuron0x1dbefb0()*0.292095);
}

double NNfunction_sb_dLdR::synapse0x1dcf610() {
   return (neuron0x1dbf2f0()*-0.165489);
}

double NNfunction_sb_dLdR::synapse0x1dcf650() {
   return (neuron0x1dbf630()*-0.323131);
}

double NNfunction_sb_dLdR::synapse0x1dcf0e0() {
   return (neuron0x1dbf970()*0.334611);
}

double NNfunction_sb_dLdR::synapse0x1dcf120() {
   return (neuron0x1dbfed0()*0.146887);
}

double NNfunction_sb_dLdR::synapse0x1dcf7a0() {
   return (neuron0x1dc00f0()*-0.19599);
}

double NNfunction_sb_dLdR::synapse0x1dcf7e0() {
   return (neuron0x1dc0430()*-0.0480517);
}

double NNfunction_sb_dLdR::synapse0x1dcf820() {
   return (neuron0x1dc0770()*0.222071);
}

double NNfunction_sb_dLdR::synapse0x1dcf860() {
   return (neuron0x1dc0ab0()*-0.11147);
}

double NNfunction_sb_dLdR::synapse0x1dcf8a0() {
   return (neuron0x1dc0df0()*0.028895);
}

double NNfunction_sb_dLdR::synapse0x1dcf8e0() {
   return (neuron0x1dc1130()*-0.553107);
}

double NNfunction_sb_dLdR::synapse0x1dcfc60() {
   return (neuron0x1dbc570()*0.00878186);
}

double NNfunction_sb_dLdR::synapse0x1dcfca0() {
   return (neuron0x1dbc8b0()*-0.0063159);
}

double NNfunction_sb_dLdR::synapse0x1dcfce0() {
   return (neuron0x1dbcbf0()*-0.0215063);
}

double NNfunction_sb_dLdR::synapse0x1dcfd20() {
   return (neuron0x1dbcf30()*-0.0640107);
}

double NNfunction_sb_dLdR::synapse0x1dcfd60() {
   return (neuron0x1dbd270()*-0.0758682);
}

double NNfunction_sb_dLdR::synapse0x1dcfda0() {
   return (neuron0x1dbd5b0()*-0.04984);
}

double NNfunction_sb_dLdR::synapse0x1dcfde0() {
   return (neuron0x1dbd8f0()*-0.00324905);
}

double NNfunction_sb_dLdR::synapse0x1dcfe20() {
   return (neuron0x1dbdc30()*0.0552087);
}

double NNfunction_sb_dLdR::synapse0x1dcfe60() {
   return (neuron0x1dbdf70()*-0.701676);
}

double NNfunction_sb_dLdR::synapse0x1dc8020() {
   return (neuron0x1dbe2b0()*0.0909681);
}

double NNfunction_sb_dLdR::synapse0x1dc8060() {
   return (neuron0x1dbe5f0()*-0.168998);
}

double NNfunction_sb_dLdR::synapse0x1dc80a0() {
   return (neuron0x1dbe930()*0.400531);
}

double NNfunction_sb_dLdR::synapse0x1dc80e0() {
   return (neuron0x1dbec70()*0.0611156);
}

double NNfunction_sb_dLdR::synapse0x1dc8120() {
   return (neuron0x1dbefb0()*-0.0744515);
}

double NNfunction_sb_dLdR::synapse0x1dc8160() {
   return (neuron0x1dbf2f0()*-0.204803);
}

double NNfunction_sb_dLdR::synapse0x1dc81a0() {
   return (neuron0x1dbf630()*-0.0306372);
}

double NNfunction_sb_dLdR::synapse0x1dcfab0() {
   return (neuron0x1dbf970()*0.119115);
}

double NNfunction_sb_dLdR::synapse0x1dcfaf0() {
   return (neuron0x1dbfed0()*0.580711);
}

double NNfunction_sb_dLdR::synapse0x1dc82f0() {
   return (neuron0x1dc00f0()*0.00686112);
}

double NNfunction_sb_dLdR::synapse0x1dc8330() {
   return (neuron0x1dc0430()*0.160817);
}

double NNfunction_sb_dLdR::synapse0x1dc8370() {
   return (neuron0x1dc0770()*-0.0298335);
}

double NNfunction_sb_dLdR::synapse0x1dc83b0() {
   return (neuron0x1dc0ab0()*-0.0695151);
}

double NNfunction_sb_dLdR::synapse0x1dc83f0() {
   return (neuron0x1dc0df0()*0.0639741);
}

double NNfunction_sb_dLdR::synapse0x1dc8430() {
   return (neuron0x1dc1130()*-0.00783);
}

double NNfunction_sb_dLdR::synapse0x1dc87b0() {
   return (neuron0x1dbc570()*-0.352881);
}

double NNfunction_sb_dLdR::synapse0x1dc87f0() {
   return (neuron0x1dbc8b0()*0.139851);
}

double NNfunction_sb_dLdR::synapse0x1dc8830() {
   return (neuron0x1dbcbf0()*-0.196868);
}

double NNfunction_sb_dLdR::synapse0x1dc8870() {
   return (neuron0x1dbcf30()*-0.443227);
}

double NNfunction_sb_dLdR::synapse0x1dc88b0() {
   return (neuron0x1dbd270()*-0.035503);
}

double NNfunction_sb_dLdR::synapse0x1dc88f0() {
   return (neuron0x1dbd5b0()*-0.0907679);
}

double NNfunction_sb_dLdR::synapse0x1dc8930() {
   return (neuron0x1dbd8f0()*-0.223834);
}

double NNfunction_sb_dLdR::synapse0x1dc8970() {
   return (neuron0x1dbdc30()*0.436859);
}

double NNfunction_sb_dLdR::synapse0x1dc89b0() {
   return (neuron0x1dbdf70()*-0.236957);
}

double NNfunction_sb_dLdR::synapse0x1dc89f0() {
   return (neuron0x1dbe2b0()*0.208358);
}

double NNfunction_sb_dLdR::synapse0x1dc8a30() {
   return (neuron0x1dbe5f0()*0.247618);
}

double NNfunction_sb_dLdR::synapse0x1dc8a70() {
   return (neuron0x1dbe930()*0.0334124);
}

double NNfunction_sb_dLdR::synapse0x1dc8ab0() {
   return (neuron0x1dbec70()*-0.312792);
}

double NNfunction_sb_dLdR::synapse0x1dc8af0() {
   return (neuron0x1dbefb0()*0.234956);
}

double NNfunction_sb_dLdR::synapse0x1dc8b30() {
   return (neuron0x1dbf2f0()*-0.0592158);
}

double NNfunction_sb_dLdR::synapse0x1dc8b70() {
   return (neuron0x1dbf630()*-0.105247);
}

double NNfunction_sb_dLdR::synapse0x1dc8600() {
   return (neuron0x1dbf970()*-0.0378212);
}

double NNfunction_sb_dLdR::synapse0x1dc8640() {
   return (neuron0x1dbfed0()*-0.51413);
}

double NNfunction_sb_dLdR::synapse0x1dc8cc0() {
   return (neuron0x1dc00f0()*0.041473);
}

double NNfunction_sb_dLdR::synapse0x1dc8d00() {
   return (neuron0x1dc0430()*-0.43841);
}

double NNfunction_sb_dLdR::synapse0x1dc8d40() {
   return (neuron0x1dc0770()*0.0814476);
}

double NNfunction_sb_dLdR::synapse0x1dc8d80() {
   return (neuron0x1dc0ab0()*0.169756);
}

double NNfunction_sb_dLdR::synapse0x1dc8dc0() {
   return (neuron0x1dc0df0()*-0.0404304);
}

double NNfunction_sb_dLdR::synapse0x1dc8e00() {
   return (neuron0x1dc1130()*-0.0182398);
}

double NNfunction_sb_dLdR::synapse0x1dc8fd0() {
   return (neuron0x1dbc570()*-0.0928917);
}

double NNfunction_sb_dLdR::synapse0x1dd2060() {
   return (neuron0x1dbc8b0()*0.0594261);
}

double NNfunction_sb_dLdR::synapse0x1dd20a0() {
   return (neuron0x1dbcbf0()*-0.0587147);
}

double NNfunction_sb_dLdR::synapse0x1dd20e0() {
   return (neuron0x1dbcf30()*-0.186856);
}

double NNfunction_sb_dLdR::synapse0x1dd2120() {
   return (neuron0x1dbd270()*0.072743);
}

double NNfunction_sb_dLdR::synapse0x1dd2160() {
   return (neuron0x1dbd5b0()*-0.0414309);
}

double NNfunction_sb_dLdR::synapse0x1dd21a0() {
   return (neuron0x1dbd8f0()*-0.0936821);
}

double NNfunction_sb_dLdR::synapse0x1dd21e0() {
   return (neuron0x1dbdc30()*-0.091094);
}

double NNfunction_sb_dLdR::synapse0x1dd2220() {
   return (neuron0x1dbdf70()*-0.0590469);
}

double NNfunction_sb_dLdR::synapse0x1dd2260() {
   return (neuron0x1dbe2b0()*-0.00177143);
}

double NNfunction_sb_dLdR::synapse0x1dd22a0() {
   return (neuron0x1dbe5f0()*0.0125689);
}

double NNfunction_sb_dLdR::synapse0x1dd22e0() {
   return (neuron0x1dbe930()*-0.931452);
}

double NNfunction_sb_dLdR::synapse0x1dd2320() {
   return (neuron0x1dbec70()*-0.224472);
}

double NNfunction_sb_dLdR::synapse0x1dd2360() {
   return (neuron0x1dbefb0()*-0.137729);
}

double NNfunction_sb_dLdR::synapse0x1dd23a0() {
   return (neuron0x1dbf2f0()*-0.0894487);
}

double NNfunction_sb_dLdR::synapse0x1dd23e0() {
   return (neuron0x1dbf630()*0.0338483);
}

double NNfunction_sb_dLdR::synapse0x1dd1eb0() {
   return (neuron0x1dbf970()*-0.0514965);
}

double NNfunction_sb_dLdR::synapse0x1dd1ef0() {
   return (neuron0x1dbfed0()*-1.12888);
}

double NNfunction_sb_dLdR::synapse0x1dd2530() {
   return (neuron0x1dc00f0()*0.022789);
}

double NNfunction_sb_dLdR::synapse0x1dd2570() {
   return (neuron0x1dc0430()*-0.124571);
}

double NNfunction_sb_dLdR::synapse0x1dd25b0() {
   return (neuron0x1dc0770()*-0.0354254);
}

double NNfunction_sb_dLdR::synapse0x1dd25f0() {
   return (neuron0x1dc0ab0()*0.0893119);
}

double NNfunction_sb_dLdR::synapse0x1dd2630() {
   return (neuron0x1dc0df0()*0.0288458);
}

double NNfunction_sb_dLdR::synapse0x1dd2670() {
   return (neuron0x1dc1130()*-0.0480595);
}

double NNfunction_sb_dLdR::synapse0x1dd29f0() {
   return (neuron0x1dbc570()*-0.0162958);
}

double NNfunction_sb_dLdR::synapse0x1dd2a30() {
   return (neuron0x1dbc8b0()*0.00646766);
}

double NNfunction_sb_dLdR::synapse0x1dd2a70() {
   return (neuron0x1dbcbf0()*-0.00288774);
}

double NNfunction_sb_dLdR::synapse0x1dd2ab0() {
   return (neuron0x1dbcf30()*0.038426);
}

double NNfunction_sb_dLdR::synapse0x1dd2af0() {
   return (neuron0x1dbd270()*-0.0114268);
}

double NNfunction_sb_dLdR::synapse0x1dd2b30() {
   return (neuron0x1dbd5b0()*-0.00346016);
}

double NNfunction_sb_dLdR::synapse0x1dd2b70() {
   return (neuron0x1dbd8f0()*-0.0176254);
}

double NNfunction_sb_dLdR::synapse0x1dd2bb0() {
   return (neuron0x1dbdc30()*0.0103179);
}

double NNfunction_sb_dLdR::synapse0x1dd2bf0() {
   return (neuron0x1dbdf70()*0.0102767);
}

double NNfunction_sb_dLdR::synapse0x1dd2c30() {
   return (neuron0x1dbe2b0()*-0.00993125);
}

double NNfunction_sb_dLdR::synapse0x1dd2c70() {
   return (neuron0x1dbe5f0()*0.00153963);
}

double NNfunction_sb_dLdR::synapse0x1dd2cb0() {
   return (neuron0x1dbe930()*0.662245);
}

double NNfunction_sb_dLdR::synapse0x1dd2cf0() {
   return (neuron0x1dbec70()*-0.0420882);
}

double NNfunction_sb_dLdR::synapse0x1dd2d30() {
   return (neuron0x1dbefb0()*0.0106443);
}

double NNfunction_sb_dLdR::synapse0x1dd2d70() {
   return (neuron0x1dbf2f0()*-0.0167966);
}

double NNfunction_sb_dLdR::synapse0x1dd2db0() {
   return (neuron0x1dbf630()*-0.00379244);
}

double NNfunction_sb_dLdR::synapse0x1dd2840() {
   return (neuron0x1dbf970()*0.0128315);
}

double NNfunction_sb_dLdR::synapse0x1dd2880() {
   return (neuron0x1dbfed0()*0.819252);
}

double NNfunction_sb_dLdR::synapse0x1dd2f00() {
   return (neuron0x1dc00f0()*-0.00817243);
}

double NNfunction_sb_dLdR::synapse0x1dd2f40() {
   return (neuron0x1dc0430()*0.00150127);
}

double NNfunction_sb_dLdR::synapse0x1dd2f80() {
   return (neuron0x1dc0770()*0.00289358);
}

double NNfunction_sb_dLdR::synapse0x1dd2fc0() {
   return (neuron0x1dc0ab0()*0.00328953);
}

double NNfunction_sb_dLdR::synapse0x1dd3000() {
   return (neuron0x1dc0df0()*-0.00991613);
}

double NNfunction_sb_dLdR::synapse0x1dd3040() {
   return (neuron0x1dc1130()*-0.00600754);
}

double NNfunction_sb_dLdR::synapse0x1dd33c0() {
   return (neuron0x1dbc570()*0.339383);
}

double NNfunction_sb_dLdR::synapse0x1dd3400() {
   return (neuron0x1dbc8b0()*-0.325889);
}

double NNfunction_sb_dLdR::synapse0x1dd3440() {
   return (neuron0x1dbcbf0()*0.662035);
}

double NNfunction_sb_dLdR::synapse0x1dd3480() {
   return (neuron0x1dbcf30()*0.0536928);
}

double NNfunction_sb_dLdR::synapse0x1dd34c0() {
   return (neuron0x1dbd270()*0.126614);
}

double NNfunction_sb_dLdR::synapse0x1dd3500() {
   return (neuron0x1dbd5b0()*-0.358247);
}

double NNfunction_sb_dLdR::synapse0x1dd3540() {
   return (neuron0x1dbd8f0()*0.0707718);
}

double NNfunction_sb_dLdR::synapse0x1dd3580() {
   return (neuron0x1dbdc30()*0.104529);
}

double NNfunction_sb_dLdR::synapse0x1dd35c0() {
   return (neuron0x1dbdf70()*-0.204894);
}

double NNfunction_sb_dLdR::synapse0x1dd3600() {
   return (neuron0x1dbe2b0()*0.277349);
}

double NNfunction_sb_dLdR::synapse0x1dd3640() {
   return (neuron0x1dbe5f0()*0.525068);
}

double NNfunction_sb_dLdR::synapse0x1dd3680() {
   return (neuron0x1dbe930()*-0.338347);
}

double NNfunction_sb_dLdR::synapse0x1dd36c0() {
   return (neuron0x1dbec70()*-0.126364);
}

double NNfunction_sb_dLdR::synapse0x1dd3700() {
   return (neuron0x1dbefb0()*-0.564894);
}

double NNfunction_sb_dLdR::synapse0x1dd3740() {
   return (neuron0x1dbf2f0()*-0.839009);
}

double NNfunction_sb_dLdR::synapse0x1dd3780() {
   return (neuron0x1dbf630()*-0.259878);
}

double NNfunction_sb_dLdR::synapse0x1dd3210() {
   return (neuron0x1dbf970()*0.506032);
}

double NNfunction_sb_dLdR::synapse0x1dd3250() {
   return (neuron0x1dbfed0()*-0.181171);
}

double NNfunction_sb_dLdR::synapse0x1dd38d0() {
   return (neuron0x1dc00f0()*-0.349277);
}

double NNfunction_sb_dLdR::synapse0x1dd3910() {
   return (neuron0x1dc0430()*-0.666328);
}

double NNfunction_sb_dLdR::synapse0x1dd3950() {
   return (neuron0x1dc0770()*-0.318582);
}

double NNfunction_sb_dLdR::synapse0x1dd3990() {
   return (neuron0x1dc0ab0()*0.508991);
}

double NNfunction_sb_dLdR::synapse0x1dd39d0() {
   return (neuron0x1dc0df0()*-0.412489);
}

double NNfunction_sb_dLdR::synapse0x1dd3a10() {
   return (neuron0x1dc1130()*0.365908);
}

double NNfunction_sb_dLdR::synapse0x1dd3d90() {
   return (neuron0x1dbc570()*-0.0949711);
}

double NNfunction_sb_dLdR::synapse0x1dd3dd0() {
   return (neuron0x1dbc8b0()*-0.340948);
}

double NNfunction_sb_dLdR::synapse0x1dd3e10() {
   return (neuron0x1dbcbf0()*-0.062155);
}

double NNfunction_sb_dLdR::synapse0x1dd3e50() {
   return (neuron0x1dbcf30()*0.0922846);
}

double NNfunction_sb_dLdR::synapse0x1dd3e90() {
   return (neuron0x1dbd270()*-0.251447);
}

double NNfunction_sb_dLdR::synapse0x1dd3ed0() {
   return (neuron0x1dbd5b0()*0.333265);
}

double NNfunction_sb_dLdR::synapse0x1dd3f10() {
   return (neuron0x1dbd8f0()*-0.0211425);
}

double NNfunction_sb_dLdR::synapse0x1dd3f50() {
   return (neuron0x1dbdc30()*-0.154577);
}

double NNfunction_sb_dLdR::synapse0x1dd3f90() {
   return (neuron0x1dbdf70()*0.0866114);
}

double NNfunction_sb_dLdR::synapse0x1dd3fd0() {
   return (neuron0x1dbe2b0()*0.467519);
}

double NNfunction_sb_dLdR::synapse0x1dd4010() {
   return (neuron0x1dbe5f0()*0.0471845);
}

double NNfunction_sb_dLdR::synapse0x1dd4050() {
   return (neuron0x1dbe930()*-0.29697);
}

double NNfunction_sb_dLdR::synapse0x1dd4090() {
   return (neuron0x1dbec70()*0.0715281);
}

double NNfunction_sb_dLdR::synapse0x1dd40d0() {
   return (neuron0x1dbefb0()*-0.0891246);
}

double NNfunction_sb_dLdR::synapse0x1dd4110() {
   return (neuron0x1dbf2f0()*0.136117);
}

double NNfunction_sb_dLdR::synapse0x1dd4150() {
   return (neuron0x1dbf630()*0.665027);
}

double NNfunction_sb_dLdR::synapse0x1dd3be0() {
   return (neuron0x1dbf970()*-0.560794);
}

double NNfunction_sb_dLdR::synapse0x1dd3c20() {
   return (neuron0x1dbfed0()*-0.71929);
}

double NNfunction_sb_dLdR::synapse0x1dd42a0() {
   return (neuron0x1dc00f0()*-0.0834225);
}

double NNfunction_sb_dLdR::synapse0x1dd42e0() {
   return (neuron0x1dc0430()*-0.193015);
}

double NNfunction_sb_dLdR::synapse0x1dd4320() {
   return (neuron0x1dc0770()*0.109404);
}

double NNfunction_sb_dLdR::synapse0x1dd4360() {
   return (neuron0x1dc0ab0()*0.185011);
}

double NNfunction_sb_dLdR::synapse0x1dd43a0() {
   return (neuron0x1dc0df0()*0.210355);
}

double NNfunction_sb_dLdR::synapse0x1dd43e0() {
   return (neuron0x1dc1130()*0.205882);
}

double NNfunction_sb_dLdR::synapse0x1dd4760() {
   return (neuron0x1dbc570()*0.0134255);
}

double NNfunction_sb_dLdR::synapse0x1dd47a0() {
   return (neuron0x1dbc8b0()*-0.15801);
}

double NNfunction_sb_dLdR::synapse0x1dd47e0() {
   return (neuron0x1dbcbf0()*0.303715);
}

double NNfunction_sb_dLdR::synapse0x1dd4820() {
   return (neuron0x1dbcf30()*-1.40598);
}

double NNfunction_sb_dLdR::synapse0x1dd4860() {
   return (neuron0x1dbd270()*-0.118223);
}

double NNfunction_sb_dLdR::synapse0x1dd48a0() {
   return (neuron0x1dbd5b0()*0.137493);
}

double NNfunction_sb_dLdR::synapse0x1dd48e0() {
   return (neuron0x1dbd8f0()*0.147563);
}

double NNfunction_sb_dLdR::synapse0x1dd4920() {
   return (neuron0x1dbdc30()*-0.122761);
}

double NNfunction_sb_dLdR::synapse0x1dd4960() {
   return (neuron0x1dbdf70()*-0.172142);
}

double NNfunction_sb_dLdR::synapse0x1dd49a0() {
   return (neuron0x1dbe2b0()*-0.165391);
}

double NNfunction_sb_dLdR::synapse0x1dd49e0() {
   return (neuron0x1dbe5f0()*0.0538118);
}

double NNfunction_sb_dLdR::synapse0x1dd4a20() {
   return (neuron0x1dbe930()*0.874347);
}

double NNfunction_sb_dLdR::synapse0x1dd4a60() {
   return (neuron0x1dbec70()*0.0157192);
}

double NNfunction_sb_dLdR::synapse0x1dd4aa0() {
   return (neuron0x1dbefb0()*-0.0777377);
}

double NNfunction_sb_dLdR::synapse0x1dd4ae0() {
   return (neuron0x1dbf2f0()*0.11573);
}

double NNfunction_sb_dLdR::synapse0x1dd4b20() {
   return (neuron0x1dbf630()*-0.108682);
}

double NNfunction_sb_dLdR::synapse0x1dd45b0() {
   return (neuron0x1dbf970()*0.113319);
}

double NNfunction_sb_dLdR::synapse0x1dd45f0() {
   return (neuron0x1dbfed0()*0.310306);
}

double NNfunction_sb_dLdR::synapse0x1dd4c70() {
   return (neuron0x1dc00f0()*-0.0280732);
}

double NNfunction_sb_dLdR::synapse0x1dd4cb0() {
   return (neuron0x1dc0430()*0.163383);
}

double NNfunction_sb_dLdR::synapse0x1dd4cf0() {
   return (neuron0x1dc0770()*0.0295815);
}

double NNfunction_sb_dLdR::synapse0x1dd4d30() {
   return (neuron0x1dc0ab0()*-0.0541251);
}

double NNfunction_sb_dLdR::synapse0x1dd4d70() {
   return (neuron0x1dc0df0()*-0.0562448);
}

double NNfunction_sb_dLdR::synapse0x1dd4db0() {
   return (neuron0x1dc1130()*0.119856);
}

double NNfunction_sb_dLdR::synapse0x1dd5130() {
   return (neuron0x1dbc570()*0.0225141);
}

double NNfunction_sb_dLdR::synapse0x1dd5170() {
   return (neuron0x1dbc8b0()*0.00390764);
}

double NNfunction_sb_dLdR::synapse0x1dd51b0() {
   return (neuron0x1dbcbf0()*-0.0468029);
}

double NNfunction_sb_dLdR::synapse0x1dd51f0() {
   return (neuron0x1dbcf30()*-5.15371);
}

double NNfunction_sb_dLdR::synapse0x1dd5230() {
   return (neuron0x1dbd270()*-0.0171711);
}

double NNfunction_sb_dLdR::synapse0x1dd5270() {
   return (neuron0x1dbd5b0()*-0.0112043);
}

double NNfunction_sb_dLdR::synapse0x1dd52b0() {
   return (neuron0x1dbd8f0()*0.0126663);
}

double NNfunction_sb_dLdR::synapse0x1dd52f0() {
   return (neuron0x1dbdc30()*-0.0477094);
}

double NNfunction_sb_dLdR::synapse0x1dd5330() {
   return (neuron0x1dbdf70()*-0.000255462);
}

double NNfunction_sb_dLdR::synapse0x1dd5370() {
   return (neuron0x1dbe2b0()*0.0347038);
}

double NNfunction_sb_dLdR::synapse0x1dd53b0() {
   return (neuron0x1dbe5f0()*0.00535371);
}

double NNfunction_sb_dLdR::synapse0x1dd53f0() {
   return (neuron0x1dbe930()*0.287889);
}

double NNfunction_sb_dLdR::synapse0x1dd5430() {
   return (neuron0x1dbec70()*-0.018835);
}

double NNfunction_sb_dLdR::synapse0x1dd5470() {
   return (neuron0x1dbefb0()*0.00757804);
}

double NNfunction_sb_dLdR::synapse0x1dd54b0() {
   return (neuron0x1dbf2f0()*-0.0137476);
}

double NNfunction_sb_dLdR::synapse0x1dd54f0() {
   return (neuron0x1dbf630()*-0.0500672);
}

double NNfunction_sb_dLdR::synapse0x1dd4f80() {
   return (neuron0x1dbf970()*0.0371393);
}

double NNfunction_sb_dLdR::synapse0x1dd4fc0() {
   return (neuron0x1dbfed0()*0.875867);
}

double NNfunction_sb_dLdR::synapse0x1dd5640() {
   return (neuron0x1dc00f0()*-0.0242806);
}

double NNfunction_sb_dLdR::synapse0x1dd5680() {
   return (neuron0x1dc0430()*-0.0180113);
}

double NNfunction_sb_dLdR::synapse0x1dd56c0() {
   return (neuron0x1dc0770()*-0.00710634);
}

double NNfunction_sb_dLdR::synapse0x1dd5700() {
   return (neuron0x1dc0ab0()*0.0230956);
}

double NNfunction_sb_dLdR::synapse0x1dd5740() {
   return (neuron0x1dc0df0()*0.00702304);
}

double NNfunction_sb_dLdR::synapse0x1dd5780() {
   return (neuron0x1dc1130()*-0.02342);
}

double NNfunction_sb_dLdR::synapse0x1dd5b00() {
   return (neuron0x1dbc570()*-0.0132591);
}

double NNfunction_sb_dLdR::synapse0x1dd5b40() {
   return (neuron0x1dbc8b0()*-0.0226827);
}

double NNfunction_sb_dLdR::synapse0x1dd5b80() {
   return (neuron0x1dbcbf0()*-0.0344227);
}

double NNfunction_sb_dLdR::synapse0x1dd5bc0() {
   return (neuron0x1dbcf30()*-2.4405);
}

double NNfunction_sb_dLdR::synapse0x1dd5c00() {
   return (neuron0x1dbd270()*-0.0526488);
}

double NNfunction_sb_dLdR::synapse0x1dd5c40() {
   return (neuron0x1dbd5b0()*0.0164319);
}

double NNfunction_sb_dLdR::synapse0x1dd5c80() {
   return (neuron0x1dbd8f0()*0.0365971);
}

double NNfunction_sb_dLdR::synapse0x1dd5cc0() {
   return (neuron0x1dbdc30()*0.0575072);
}

double NNfunction_sb_dLdR::synapse0x1dd5d00() {
   return (neuron0x1dbdf70()*-0.0245452);
}

double NNfunction_sb_dLdR::synapse0x1dd5d40() {
   return (neuron0x1dbe2b0()*0.062977);
}

double NNfunction_sb_dLdR::synapse0x1dd5d80() {
   return (neuron0x1dbe5f0()*-0.00542257);
}

double NNfunction_sb_dLdR::synapse0x1dd5dc0() {
   return (neuron0x1dbe930()*-1.8558);
}

double NNfunction_sb_dLdR::synapse0x1dd5e00() {
   return (neuron0x1dbec70()*0.0586317);
}

double NNfunction_sb_dLdR::synapse0x1dd5e40() {
   return (neuron0x1dbefb0()*0.00254738);
}

double NNfunction_sb_dLdR::synapse0x1dd5e80() {
   return (neuron0x1dbf2f0()*0.0600893);
}

double NNfunction_sb_dLdR::synapse0x1dd5ec0() {
   return (neuron0x1dbf630()*-0.0774386);
}

double NNfunction_sb_dLdR::synapse0x1dd5950() {
   return (neuron0x1dbf970()*-0.0384162);
}

double NNfunction_sb_dLdR::synapse0x1dd5990() {
   return (neuron0x1dbfed0()*-0.501327);
}

double NNfunction_sb_dLdR::synapse0x1dd6010() {
   return (neuron0x1dc00f0()*-0.0346362);
}

double NNfunction_sb_dLdR::synapse0x1dd6050() {
   return (neuron0x1dc0430()*0.00742705);
}

double NNfunction_sb_dLdR::synapse0x1dd6090() {
   return (neuron0x1dc0770()*-0.0261634);
}

double NNfunction_sb_dLdR::synapse0x1dd60d0() {
   return (neuron0x1dc0ab0()*-0.0120315);
}

double NNfunction_sb_dLdR::synapse0x1dd6110() {
   return (neuron0x1dc0df0()*0.00760094);
}

double NNfunction_sb_dLdR::synapse0x1dd6150() {
   return (neuron0x1dc1130()*0.106511);
}

double NNfunction_sb_dLdR::synapse0x1dd64d0() {
   return (neuron0x1dbc570()*-0.0352866);
}

double NNfunction_sb_dLdR::synapse0x1dd6510() {
   return (neuron0x1dbc8b0()*0.00559844);
}

double NNfunction_sb_dLdR::synapse0x1dd6550() {
   return (neuron0x1dbcbf0()*-0.0470879);
}

double NNfunction_sb_dLdR::synapse0x1dd6590() {
   return (neuron0x1dbcf30()*0.195671);
}

double NNfunction_sb_dLdR::synapse0x1dd65d0() {
   return (neuron0x1dbd270()*-0.0271716);
}

double NNfunction_sb_dLdR::synapse0x1dd6610() {
   return (neuron0x1dbd5b0()*0.00509646);
}

double NNfunction_sb_dLdR::synapse0x1dd6650() {
   return (neuron0x1dbd8f0()*0.00736203);
}

double NNfunction_sb_dLdR::synapse0x1dd6690() {
   return (neuron0x1dbdc30()*0.00827674);
}

double NNfunction_sb_dLdR::synapse0x1dd66d0() {
   return (neuron0x1dbdf70()*-0.00777407);
}

double NNfunction_sb_dLdR::synapse0x1dd6710() {
   return (neuron0x1dbe2b0()*-0.0115671);
}

double NNfunction_sb_dLdR::synapse0x1dd6750() {
   return (neuron0x1dbe5f0()*0.00795493);
}

double NNfunction_sb_dLdR::synapse0x1dd6790() {
   return (neuron0x1dbe930()*2.30906);
}

double NNfunction_sb_dLdR::synapse0x1dd67d0() {
   return (neuron0x1dbec70()*0.0198291);
}

double NNfunction_sb_dLdR::synapse0x1dd6810() {
   return (neuron0x1dbefb0()*0.00754895);
}

double NNfunction_sb_dLdR::synapse0x1dd6850() {
   return (neuron0x1dbf2f0()*0.000952129);
}

double NNfunction_sb_dLdR::synapse0x1dd6890() {
   return (neuron0x1dbf630()*0.0218997);
}

double NNfunction_sb_dLdR::synapse0x1dd6320() {
   return (neuron0x1dbf970()*-0.000236769);
}

double NNfunction_sb_dLdR::synapse0x1dd6360() {
   return (neuron0x1dbfed0()*0.0807293);
}

double NNfunction_sb_dLdR::synapse0x1dd69e0() {
   return (neuron0x1dc00f0()*0.024506);
}

double NNfunction_sb_dLdR::synapse0x1dd6a20() {
   return (neuron0x1dc0430()*0.00472467);
}

double NNfunction_sb_dLdR::synapse0x1dd6a60() {
   return (neuron0x1dc0770()*-0.00355496);
}

double NNfunction_sb_dLdR::synapse0x1dd6aa0() {
   return (neuron0x1dc0ab0()*-0.00157805);
}

double NNfunction_sb_dLdR::synapse0x1dd6ae0() {
   return (neuron0x1dc0df0()*0.00562294);
}

double NNfunction_sb_dLdR::synapse0x1dd6b20() {
   return (neuron0x1dc1130()*0.0201575);
}

double NNfunction_sb_dLdR::synapse0x1dd6ea0() {
   return (neuron0x1dbc570()*-0.335913);
}

double NNfunction_sb_dLdR::synapse0x1dcb470() {
   return (neuron0x1dbc8b0()*0.140824);
}

double NNfunction_sb_dLdR::synapse0x1dcb4b0() {
   return (neuron0x1dbcbf0()*-0.571441);
}

double NNfunction_sb_dLdR::synapse0x1dcb4f0() {
   return (neuron0x1dbcf30()*-0.500326);
}

double NNfunction_sb_dLdR::synapse0x1dcb740() {
   return (neuron0x1dbd270()*0.209918);
}

double NNfunction_sb_dLdR::synapse0x1dcb780() {
   return (neuron0x1dbd5b0()*-0.0217873);
}

double NNfunction_sb_dLdR::synapse0x1dcb7c0() {
   return (neuron0x1dbd8f0()*-0.590696);
}

double NNfunction_sb_dLdR::synapse0x1dcba10() {
   return (neuron0x1dbdc30()*0.0890769);
}

double NNfunction_sb_dLdR::synapse0x1dcba50() {
   return (neuron0x1dbdf70()*-0.196368);
}

double NNfunction_sb_dLdR::synapse0x1dcbca0() {
   return (neuron0x1dbe2b0()*-0.766761);
}

double NNfunction_sb_dLdR::synapse0x1dcbce0() {
   return (neuron0x1dbe5f0()*0.58348);
}

double NNfunction_sb_dLdR::synapse0x1dcbd20() {
   return (neuron0x1dbe930()*0.0623678);
}

double NNfunction_sb_dLdR::synapse0x1dcbf70() {
   return (neuron0x1dbec70()*0.111265);
}

double NNfunction_sb_dLdR::synapse0x1dcbfb0() {
   return (neuron0x1dbefb0()*0.45952);
}

double NNfunction_sb_dLdR::synapse0x1dcc200() {
   return (neuron0x1dbf2f0()*1.50851);
}

double NNfunction_sb_dLdR::synapse0x1dcc240() {
   return (neuron0x1dbf630()*0.44831);
}

double NNfunction_sb_dLdR::synapse0x1dd6cf0() {
   return (neuron0x1dbf970()*-0.7128);
}

double NNfunction_sb_dLdR::synapse0x1dd6d30() {
   return (neuron0x1dbfed0()*0.0182948);
}

double NNfunction_sb_dLdR::synapse0x1dcc390() {
   return (neuron0x1dc00f0()*0.511316);
}

double NNfunction_sb_dLdR::synapse0x1dcc8a0() {
   return (neuron0x1dc0430()*0.364785);
}

double NNfunction_sb_dLdR::synapse0x1dcc8e0() {
   return (neuron0x1dc0770()*-0.230293);
}

double NNfunction_sb_dLdR::synapse0x1dcc920() {
   return (neuron0x1dc0ab0()*0.123677);
}

double NNfunction_sb_dLdR::synapse0x1dccb70() {
   return (neuron0x1dc0df0()*-0.0647581);
}

double NNfunction_sb_dLdR::synapse0x1dccbb0() {
   return (neuron0x1dc1130()*0.268653);
}

double NNfunction_sb_dLdR::synapse0x1dcc460() {
   return (neuron0x1dbc570()*0.431978);
}

double NNfunction_sb_dLdR::synapse0x1dcc4a0() {
   return (neuron0x1dbc8b0()*0.457674);
}

double NNfunction_sb_dLdR::synapse0x1dcc4e0() {
   return (neuron0x1dbcbf0()*0.479922);
}

double NNfunction_sb_dLdR::synapse0x1dcc520() {
   return (neuron0x1dbcf30()*0.149055);
}

double NNfunction_sb_dLdR::synapse0x1dccea0() {
   return (neuron0x1dbd270()*-0.142137);
}

double NNfunction_sb_dLdR::synapse0x1dd91f0() {
   return (neuron0x1dbd5b0()*-0.00788856);
}

double NNfunction_sb_dLdR::synapse0x1dd9230() {
   return (neuron0x1dbd8f0()*-0.127743);
}

double NNfunction_sb_dLdR::synapse0x1dd9270() {
   return (neuron0x1dbdc30()*0.181032);
}

double NNfunction_sb_dLdR::synapse0x1dd92b0() {
   return (neuron0x1dbdf70()*-0.259465);
}

double NNfunction_sb_dLdR::synapse0x1dd92f0() {
   return (neuron0x1dbe2b0()*-0.248331);
}

double NNfunction_sb_dLdR::synapse0x1dd9330() {
   return (neuron0x1dbe5f0()*0.599359);
}

double NNfunction_sb_dLdR::synapse0x1dd9370() {
   return (neuron0x1dbe930()*-0.564463);
}

double NNfunction_sb_dLdR::synapse0x1dd93b0() {
   return (neuron0x1dbec70()*-0.635902);
}

double NNfunction_sb_dLdR::synapse0x1dd93f0() {
   return (neuron0x1dbefb0()*0.0931058);
}

double NNfunction_sb_dLdR::synapse0x1dd9430() {
   return (neuron0x1dbf2f0()*-0.562106);
}

double NNfunction_sb_dLdR::synapse0x1dd9470() {
   return (neuron0x1dbf630()*-0.231005);
}

double NNfunction_sb_dLdR::synapse0x1dccd80() {
   return (neuron0x1dbf970()*0.935621);
}

double NNfunction_sb_dLdR::synapse0x1dccdc0() {
   return (neuron0x1dbfed0()*-0.407936);
}

double NNfunction_sb_dLdR::synapse0x1dd95c0() {
   return (neuron0x1dc00f0()*-0.321198);
}

double NNfunction_sb_dLdR::synapse0x1dd9600() {
   return (neuron0x1dc0430()*-0.321174);
}

double NNfunction_sb_dLdR::synapse0x1dd9640() {
   return (neuron0x1dc0770()*-0.195118);
}

double NNfunction_sb_dLdR::synapse0x1dd9680() {
   return (neuron0x1dc0ab0()*0.612017);
}

double NNfunction_sb_dLdR::synapse0x1dd96c0() {
   return (neuron0x1dc0df0()*-0.540028);
}

double NNfunction_sb_dLdR::synapse0x1dd9700() {
   return (neuron0x1dc1130()*0.315795);
}

double NNfunction_sb_dLdR::synapse0x1dd9a80() {
   return (neuron0x1dbc570()*0.111972);
}

double NNfunction_sb_dLdR::synapse0x1dd9ac0() {
   return (neuron0x1dbc8b0()*0.481475);
}

double NNfunction_sb_dLdR::synapse0x1dd9b00() {
   return (neuron0x1dbcbf0()*-0.0306577);
}

double NNfunction_sb_dLdR::synapse0x1dd9b40() {
   return (neuron0x1dbcf30()*0.664223);
}

double NNfunction_sb_dLdR::synapse0x1dd9b80() {
   return (neuron0x1dbd270()*-0.146775);
}

double NNfunction_sb_dLdR::synapse0x1dd9bc0() {
   return (neuron0x1dbd5b0()*0.668956);
}

double NNfunction_sb_dLdR::synapse0x1dd9c00() {
   return (neuron0x1dbd8f0()*-0.127434);
}

double NNfunction_sb_dLdR::synapse0x1dd9c40() {
   return (neuron0x1dbdc30()*0.123759);
}

double NNfunction_sb_dLdR::synapse0x1dd9c80() {
   return (neuron0x1dbdf70()*0.113911);
}

double NNfunction_sb_dLdR::synapse0x1dd9cc0() {
   return (neuron0x1dbe2b0()*0.265168);
}

double NNfunction_sb_dLdR::synapse0x1dd9d00() {
   return (neuron0x1dbe5f0()*0.326146);
}

double NNfunction_sb_dLdR::synapse0x1dd9d40() {
   return (neuron0x1dbe930()*0.617312);
}

double NNfunction_sb_dLdR::synapse0x1dd9d80() {
   return (neuron0x1dbec70()*0.0430949);
}

double NNfunction_sb_dLdR::synapse0x1dd9dc0() {
   return (neuron0x1dbefb0()*-0.0588752);
}

double NNfunction_sb_dLdR::synapse0x1dd9e00() {
   return (neuron0x1dbf2f0()*-0.285271);
}

double NNfunction_sb_dLdR::synapse0x1dd9e40() {
   return (neuron0x1dbf630()*0.239783);
}

double NNfunction_sb_dLdR::synapse0x1dd98d0() {
   return (neuron0x1dbf970()*0.407014);
}

double NNfunction_sb_dLdR::synapse0x1dd9910() {
   return (neuron0x1dbfed0()*0.522665);
}

double NNfunction_sb_dLdR::synapse0x1dd9f90() {
   return (neuron0x1dc00f0()*-0.162699);
}

double NNfunction_sb_dLdR::synapse0x1dd9fd0() {
   return (neuron0x1dc0430()*-0.303384);
}

double NNfunction_sb_dLdR::synapse0x1dda010() {
   return (neuron0x1dc0770()*0.558446);
}

double NNfunction_sb_dLdR::synapse0x1dda050() {
   return (neuron0x1dc0ab0()*0.0680571);
}

double NNfunction_sb_dLdR::synapse0x1dda090() {
   return (neuron0x1dc0df0()*-0.203785);
}

double NNfunction_sb_dLdR::synapse0x1dda0d0() {
   return (neuron0x1dc1130()*-0.330896);
}

double NNfunction_sb_dLdR::synapse0x1dda450() {
   return (neuron0x1dbc570()*0.0355126);
}

double NNfunction_sb_dLdR::synapse0x1dda490() {
   return (neuron0x1dbc8b0()*-0.0982486);
}

double NNfunction_sb_dLdR::synapse0x1dda4d0() {
   return (neuron0x1dbcbf0()*-0.298332);
}

double NNfunction_sb_dLdR::synapse0x1dda510() {
   return (neuron0x1dbcf30()*3.54937);
}

double NNfunction_sb_dLdR::synapse0x1dda550() {
   return (neuron0x1dbd270()*-0.169792);
}

double NNfunction_sb_dLdR::synapse0x1dda590() {
   return (neuron0x1dbd5b0()*0.0593854);
}

double NNfunction_sb_dLdR::synapse0x1dda5d0() {
   return (neuron0x1dbd8f0()*-0.0110923);
}

double NNfunction_sb_dLdR::synapse0x1dda610() {
   return (neuron0x1dbdc30()*-0.253137);
}

double NNfunction_sb_dLdR::synapse0x1dda650() {
   return (neuron0x1dbdf70()*0.156514);
}

double NNfunction_sb_dLdR::synapse0x1dda690() {
   return (neuron0x1dbe2b0()*0.0136714);
}

double NNfunction_sb_dLdR::synapse0x1dda6d0() {
   return (neuron0x1dbe5f0()*-0.0438981);
}

double NNfunction_sb_dLdR::synapse0x1dda710() {
   return (neuron0x1dbe930()*-0.984461);
}

double NNfunction_sb_dLdR::synapse0x1dda750() {
   return (neuron0x1dbec70()*0.110068);
}

double NNfunction_sb_dLdR::synapse0x1dda790() {
   return (neuron0x1dbefb0()*0.083701);
}

double NNfunction_sb_dLdR::synapse0x1dda7d0() {
   return (neuron0x1dbf2f0()*0.212848);
}

double NNfunction_sb_dLdR::synapse0x1dda810() {
   return (neuron0x1dbf630()*0.0387789);
}

double NNfunction_sb_dLdR::synapse0x1dda2a0() {
   return (neuron0x1dbf970()*0.196733);
}

double NNfunction_sb_dLdR::synapse0x1dda2e0() {
   return (neuron0x1dbfed0()*0.14407);
}

double NNfunction_sb_dLdR::synapse0x1dda960() {
   return (neuron0x1dc00f0()*-0.0158187);
}

double NNfunction_sb_dLdR::synapse0x1dda9a0() {
   return (neuron0x1dc0430()*-0.0178527);
}

double NNfunction_sb_dLdR::synapse0x1dda9e0() {
   return (neuron0x1dc0770()*0.00533749);
}

double NNfunction_sb_dLdR::synapse0x1ddaa20() {
   return (neuron0x1dc0ab0()*-0.073198);
}

double NNfunction_sb_dLdR::synapse0x1ddaa60() {
   return (neuron0x1dc0df0()*0.0644762);
}

double NNfunction_sb_dLdR::synapse0x1ddaaa0() {
   return (neuron0x1dc1130()*-0.27666);
}

double NNfunction_sb_dLdR::synapse0x1ddae20() {
   return (neuron0x1dbc570()*0.45398);
}

double NNfunction_sb_dLdR::synapse0x1ddae60() {
   return (neuron0x1dbc8b0()*-0.267281);
}

double NNfunction_sb_dLdR::synapse0x1ddaea0() {
   return (neuron0x1dbcbf0()*0.132667);
}

double NNfunction_sb_dLdR::synapse0x1ddaee0() {
   return (neuron0x1dbcf30()*-0.64761);
}

double NNfunction_sb_dLdR::synapse0x1ddaf20() {
   return (neuron0x1dbd270()*-0.0679704);
}

double NNfunction_sb_dLdR::synapse0x1ddaf60() {
   return (neuron0x1dbd5b0()*-0.653047);
}

double NNfunction_sb_dLdR::synapse0x1ddafa0() {
   return (neuron0x1dbd8f0()*0.402979);
}

double NNfunction_sb_dLdR::synapse0x1ddafe0() {
   return (neuron0x1dbdc30()*-1.00042);
}

double NNfunction_sb_dLdR::synapse0x1ddb020() {
   return (neuron0x1dbdf70()*0.690728);
}

double NNfunction_sb_dLdR::synapse0x1ddb060() {
   return (neuron0x1dbe2b0()*0.0855006);
}

double NNfunction_sb_dLdR::synapse0x1ddb0a0() {
   return (neuron0x1dbe5f0()*0.141315);
}

double NNfunction_sb_dLdR::synapse0x1ddb0e0() {
   return (neuron0x1dbe930()*-0.612114);
}

double NNfunction_sb_dLdR::synapse0x1ddb120() {
   return (neuron0x1dbec70()*-0.317664);
}

double NNfunction_sb_dLdR::synapse0x1ddb160() {
   return (neuron0x1dbefb0()*-0.0852101);
}

double NNfunction_sb_dLdR::synapse0x1ddb1a0() {
   return (neuron0x1dbf2f0()*0.365692);
}

double NNfunction_sb_dLdR::synapse0x1ddb1e0() {
   return (neuron0x1dbf630()*0.619518);
}

double NNfunction_sb_dLdR::synapse0x1ddac70() {
   return (neuron0x1dbf970()*-0.357523);
}

double NNfunction_sb_dLdR::synapse0x1ddacb0() {
   return (neuron0x1dbfed0()*0.70318);
}

double NNfunction_sb_dLdR::synapse0x1ddb330() {
   return (neuron0x1dc00f0()*0.202366);
}

double NNfunction_sb_dLdR::synapse0x1ddb370() {
   return (neuron0x1dc0430()*-0.215874);
}

double NNfunction_sb_dLdR::synapse0x1ddb3b0() {
   return (neuron0x1dc0770()*-0.0172014);
}

double NNfunction_sb_dLdR::synapse0x1ddb3f0() {
   return (neuron0x1dc0ab0()*0.359847);
}

double NNfunction_sb_dLdR::synapse0x1ddb430() {
   return (neuron0x1dc0df0()*-0.102169);
}

double NNfunction_sb_dLdR::synapse0x1ddb470() {
   return (neuron0x1dc1130()*-0.416711);
}

double NNfunction_sb_dLdR::synapse0x1ddb7f0() {
   return (neuron0x1dbc570()*0.0145875);
}

double NNfunction_sb_dLdR::synapse0x1ddb830() {
   return (neuron0x1dbc8b0()*-0.0235637);
}

double NNfunction_sb_dLdR::synapse0x1ddb870() {
   return (neuron0x1dbcbf0()*0.184033);
}

double NNfunction_sb_dLdR::synapse0x1ddb8b0() {
   return (neuron0x1dbcf30()*0.124959);
}

double NNfunction_sb_dLdR::synapse0x1ddb8f0() {
   return (neuron0x1dbd270()*0.0421074);
}

double NNfunction_sb_dLdR::synapse0x1ddb930() {
   return (neuron0x1dbd5b0()*-0.0135768);
}

double NNfunction_sb_dLdR::synapse0x1ddb970() {
   return (neuron0x1dbd8f0()*-0.0431961);
}

double NNfunction_sb_dLdR::synapse0x1ddb9b0() {
   return (neuron0x1dbdc30()*-0.0277407);
}

double NNfunction_sb_dLdR::synapse0x1ddb9f0() {
   return (neuron0x1dbdf70()*0.00766103);
}

double NNfunction_sb_dLdR::synapse0x1ddba30() {
   return (neuron0x1dbe2b0()*-0.0231915);
}

double NNfunction_sb_dLdR::synapse0x1ddba70() {
   return (neuron0x1dbe5f0()*-0.0614636);
}

double NNfunction_sb_dLdR::synapse0x1ddbab0() {
   return (neuron0x1dbe930()*-0.791504);
}

double NNfunction_sb_dLdR::synapse0x1ddbaf0() {
   return (neuron0x1dbec70()*-0.0670995);
}

double NNfunction_sb_dLdR::synapse0x1ddbb30() {
   return (neuron0x1dbefb0()*-0.00150611);
}

double NNfunction_sb_dLdR::synapse0x1ddbb70() {
   return (neuron0x1dbf2f0()*0.0354222);
}

double NNfunction_sb_dLdR::synapse0x1ddbbb0() {
   return (neuron0x1dbf630()*-0.0131582);
}

double NNfunction_sb_dLdR::synapse0x1ddb640() {
   return (neuron0x1dbf970()*0.0285041);
}

double NNfunction_sb_dLdR::synapse0x1ddb680() {
   return (neuron0x1dbfed0()*0.0993962);
}

double NNfunction_sb_dLdR::synapse0x1ddbd00() {
   return (neuron0x1dc00f0()*-0.013892);
}

double NNfunction_sb_dLdR::synapse0x1ddbd40() {
   return (neuron0x1dc0430()*-0.0115183);
}

double NNfunction_sb_dLdR::synapse0x1ddbd80() {
   return (neuron0x1dc0770()*0.0637225);
}

double NNfunction_sb_dLdR::synapse0x1ddbdc0() {
   return (neuron0x1dc0ab0()*0.0362852);
}

double NNfunction_sb_dLdR::synapse0x1ddbe00() {
   return (neuron0x1dc0df0()*-0.000958836);
}

double NNfunction_sb_dLdR::synapse0x1ddbe40() {
   return (neuron0x1dc1130()*-0.0214155);
}

double NNfunction_sb_dLdR::synapse0x1ddc1c0() {
   return (neuron0x1dbc570()*0.00599383);
}

double NNfunction_sb_dLdR::synapse0x1ddc200() {
   return (neuron0x1dbc8b0()*0.0116406);
}

double NNfunction_sb_dLdR::synapse0x1ddc240() {
   return (neuron0x1dbcbf0()*1.17809);
}

double NNfunction_sb_dLdR::synapse0x1ddc280() {
   return (neuron0x1dbcf30()*-0.0620309);
}

double NNfunction_sb_dLdR::synapse0x1ddc2c0() {
   return (neuron0x1dbd270()*0.0467846);
}

double NNfunction_sb_dLdR::synapse0x1ddc300() {
   return (neuron0x1dbd5b0()*-0.0053046);
}

double NNfunction_sb_dLdR::synapse0x1ddc340() {
   return (neuron0x1dbd8f0()*0.00311629);
}

double NNfunction_sb_dLdR::synapse0x1ddc380() {
   return (neuron0x1dbdc30()*0.0234552);
}

double NNfunction_sb_dLdR::synapse0x1ddc3c0() {
   return (neuron0x1dbdf70()*0.0331201);
}

double NNfunction_sb_dLdR::synapse0x1ddc400() {
   return (neuron0x1dbe2b0()*-0.000180757);
}

double NNfunction_sb_dLdR::synapse0x1ddc440() {
   return (neuron0x1dbe5f0()*-0.0136024);
}

double NNfunction_sb_dLdR::synapse0x1ddc480() {
   return (neuron0x1dbe930()*-0.478737);
}

double NNfunction_sb_dLdR::synapse0x1ddc4c0() {
   return (neuron0x1dbec70()*-0.0831811);
}

double NNfunction_sb_dLdR::synapse0x1ddc500() {
   return (neuron0x1dbefb0()*0.0585673);
}

double NNfunction_sb_dLdR::synapse0x1ddc540() {
   return (neuron0x1dbf2f0()*-0.0139387);
}

double NNfunction_sb_dLdR::synapse0x1ddc580() {
   return (neuron0x1dbf630()*-0.00313155);
}

double NNfunction_sb_dLdR::synapse0x1ddc010() {
   return (neuron0x1dbf970()*0.024901);
}

double NNfunction_sb_dLdR::synapse0x1ddc050() {
   return (neuron0x1dbfed0()*0.168293);
}

double NNfunction_sb_dLdR::synapse0x1ddc6d0() {
   return (neuron0x1dc00f0()*0.0210881);
}

double NNfunction_sb_dLdR::synapse0x1ddc710() {
   return (neuron0x1dc0430()*0.0131967);
}

double NNfunction_sb_dLdR::synapse0x1ddc750() {
   return (neuron0x1dc0770()*0.0133282);
}

double NNfunction_sb_dLdR::synapse0x1ddc790() {
   return (neuron0x1dc0ab0()*-0.0306817);
}

double NNfunction_sb_dLdR::synapse0x1ddc7d0() {
   return (neuron0x1dc0df0()*-0.00913423);
}

double NNfunction_sb_dLdR::synapse0x1ddc810() {
   return (neuron0x1dc1130()*-0.00565767);
}

double NNfunction_sb_dLdR::synapse0x1ddcb90() {
   return (neuron0x1dbc570()*0.0211739);
}

double NNfunction_sb_dLdR::synapse0x1ddcbd0() {
   return (neuron0x1dbc8b0()*0.0588058);
}

double NNfunction_sb_dLdR::synapse0x1ddcc10() {
   return (neuron0x1dbcbf0()*-0.0896499);
}

double NNfunction_sb_dLdR::synapse0x1ddcc50() {
   return (neuron0x1dbcf30()*-0.937263);
}

double NNfunction_sb_dLdR::synapse0x1ddcc90() {
   return (neuron0x1dbd270()*-0.091258);
}

double NNfunction_sb_dLdR::synapse0x1ddccd0() {
   return (neuron0x1dbd5b0()*-0.0392614);
}

double NNfunction_sb_dLdR::synapse0x1ddcd10() {
   return (neuron0x1dbd8f0()*-0.0110233);
}

double NNfunction_sb_dLdR::synapse0x1ddcd50() {
   return (neuron0x1dbdc30()*0.0704171);
}

double NNfunction_sb_dLdR::synapse0x1ddcd90() {
   return (neuron0x1dbdf70()*-0.0145698);
}

double NNfunction_sb_dLdR::synapse0x1ddcdd0() {
   return (neuron0x1dbe2b0()*0.0276904);
}

double NNfunction_sb_dLdR::synapse0x1ddce10() {
   return (neuron0x1dbe5f0()*0.00570398);
}

double NNfunction_sb_dLdR::synapse0x1ddce50() {
   return (neuron0x1dbe930()*0.768507);
}

double NNfunction_sb_dLdR::synapse0x1ddce90() {
   return (neuron0x1dbec70()*0.167111);
}

double NNfunction_sb_dLdR::synapse0x1ddced0() {
   return (neuron0x1dbefb0()*-0.0472492);
}

double NNfunction_sb_dLdR::synapse0x1ddcf10() {
   return (neuron0x1dbf2f0()*-0.0164799);
}

double NNfunction_sb_dLdR::synapse0x1ddcf50() {
   return (neuron0x1dbf630()*-0.0171093);
}

double NNfunction_sb_dLdR::synapse0x1ddc9e0() {
   return (neuron0x1dbf970()*-0.0825811);
}

double NNfunction_sb_dLdR::synapse0x1ddca20() {
   return (neuron0x1dbfed0()*-0.294772);
}

double NNfunction_sb_dLdR::synapse0x1ddd0a0() {
   return (neuron0x1dc00f0()*0.0394177);
}

double NNfunction_sb_dLdR::synapse0x1ddd0e0() {
   return (neuron0x1dc0430()*0.0818752);
}

double NNfunction_sb_dLdR::synapse0x1ddd120() {
   return (neuron0x1dc0770()*-0.015784);
}

double NNfunction_sb_dLdR::synapse0x1ddd160() {
   return (neuron0x1dc0ab0()*-0.0180798);
}

double NNfunction_sb_dLdR::synapse0x1ddd1a0() {
   return (neuron0x1dc0df0()*0.00779257);
}

double NNfunction_sb_dLdR::synapse0x1ddd1e0() {
   return (neuron0x1dc1130()*0.00880679);
}

double NNfunction_sb_dLdR::synapse0x1ddd560() {
   return (neuron0x1dbc570()*-0.20091);
}

double NNfunction_sb_dLdR::synapse0x1ddd5a0() {
   return (neuron0x1dbc8b0()*0.312145);
}

double NNfunction_sb_dLdR::synapse0x1ddd5e0() {
   return (neuron0x1dbcbf0()*-0.911955);
}

double NNfunction_sb_dLdR::synapse0x1ddd620() {
   return (neuron0x1dbcf30()*0.0868531);
}

double NNfunction_sb_dLdR::synapse0x1ddd660() {
   return (neuron0x1dbd270()*-0.117313);
}

double NNfunction_sb_dLdR::synapse0x1ddd6a0() {
   return (neuron0x1dbd5b0()*-0.289732);
}

double NNfunction_sb_dLdR::synapse0x1ddd6e0() {
   return (neuron0x1dbd8f0()*-0.523312);
}

double NNfunction_sb_dLdR::synapse0x1ddd720() {
   return (neuron0x1dbdc30()*-0.371182);
}

double NNfunction_sb_dLdR::synapse0x1ddd760() {
   return (neuron0x1dbdf70()*-0.218672);
}

double NNfunction_sb_dLdR::synapse0x1ddd7a0() {
   return (neuron0x1dbe2b0()*1.00022);
}

double NNfunction_sb_dLdR::synapse0x1ddd7e0() {
   return (neuron0x1dbe5f0()*0.512571);
}

double NNfunction_sb_dLdR::synapse0x1ddd820() {
   return (neuron0x1dbe930()*0.0568599);
}

double NNfunction_sb_dLdR::synapse0x1ddd860() {
   return (neuron0x1dbec70()*0.377357);
}

double NNfunction_sb_dLdR::synapse0x1ddd8a0() {
   return (neuron0x1dbefb0()*-0.0549744);
}

double NNfunction_sb_dLdR::synapse0x1ddd8e0() {
   return (neuron0x1dbf2f0()*-0.19137);
}

double NNfunction_sb_dLdR::synapse0x1ddd920() {
   return (neuron0x1dbf630()*0.819942);
}

double NNfunction_sb_dLdR::synapse0x1ddd3b0() {
   return (neuron0x1dbf970()*-0.466586);
}

double NNfunction_sb_dLdR::synapse0x1ddd3f0() {
   return (neuron0x1dbfed0()*0.114937);
}

double NNfunction_sb_dLdR::synapse0x1ddda70() {
   return (neuron0x1dc00f0()*0.43576);
}

double NNfunction_sb_dLdR::synapse0x1dddab0() {
   return (neuron0x1dc0430()*0.575944);
}

double NNfunction_sb_dLdR::synapse0x1dddaf0() {
   return (neuron0x1dc0770()*0.0164314);
}

double NNfunction_sb_dLdR::synapse0x1dddb30() {
   return (neuron0x1dc0ab0()*0.138319);
}

double NNfunction_sb_dLdR::synapse0x1dddb70() {
   return (neuron0x1dc0df0()*-0.48222);
}

double NNfunction_sb_dLdR::synapse0x1dddbb0() {
   return (neuron0x1dc1130()*0.634074);
}

double NNfunction_sb_dLdR::synapse0x1dc6660() {
   return (neuron0x1dbc570()*-0.0412984);
}

double NNfunction_sb_dLdR::synapse0x1dc66a0() {
   return (neuron0x1dbc8b0()*-0.0202428);
}

double NNfunction_sb_dLdR::synapse0x1dc66e0() {
   return (neuron0x1dbcbf0()*-0.104358);
}

double NNfunction_sb_dLdR::synapse0x1dc6720() {
   return (neuron0x1dbcf30()*-1.72186);
}

double NNfunction_sb_dLdR::synapse0x1dc6760() {
   return (neuron0x1dbd270()*-0.017138);
}

double NNfunction_sb_dLdR::synapse0x1dc67a0() {
   return (neuron0x1dbd5b0()*0.00241384);
}

double NNfunction_sb_dLdR::synapse0x1dc67e0() {
   return (neuron0x1dbd8f0()*0.0174417);
}

double NNfunction_sb_dLdR::synapse0x1dc6820() {
   return (neuron0x1dbdc30()*-0.0634093);
}

double NNfunction_sb_dLdR::synapse0x1dde340() {
   return (neuron0x1dbdf70()*0.0229816);
}

double NNfunction_sb_dLdR::synapse0x1dde380() {
   return (neuron0x1dbe2b0()*-0.0255516);
}

double NNfunction_sb_dLdR::synapse0x1dde3c0() {
   return (neuron0x1dbe5f0()*-0.00120284);
}

double NNfunction_sb_dLdR::synapse0x1dde400() {
   return (neuron0x1dbe930()*-0.982449);
}

double NNfunction_sb_dLdR::synapse0x1dde440() {
   return (neuron0x1dbec70()*-0.0926362);
}

double NNfunction_sb_dLdR::synapse0x1dde480() {
   return (neuron0x1dbefb0()*-0.00566038);
}

double NNfunction_sb_dLdR::synapse0x1dde4c0() {
   return (neuron0x1dbf2f0()*-0.023546);
}

double NNfunction_sb_dLdR::synapse0x1dde500() {
   return (neuron0x1dbf630()*-0.0293323);
}

double NNfunction_sb_dLdR::synapse0x1dddd80() {
   return (neuron0x1dbf970()*0.075671);
}

double NNfunction_sb_dLdR::synapse0x1ddddc0() {
   return (neuron0x1dbfed0()*-0.295105);
}

double NNfunction_sb_dLdR::synapse0x1dde650() {
   return (neuron0x1dc00f0()*0.00233487);
}

double NNfunction_sb_dLdR::synapse0x1dde690() {
   return (neuron0x1dc0430()*-0.0420894);
}

double NNfunction_sb_dLdR::synapse0x1dde6d0() {
   return (neuron0x1dc0770()*-0.0309567);
}

double NNfunction_sb_dLdR::synapse0x1dde710() {
   return (neuron0x1dc0ab0()*0.0135582);
}

double NNfunction_sb_dLdR::synapse0x1dde750() {
   return (neuron0x1dc0df0()*0.0152243);
}

double NNfunction_sb_dLdR::synapse0x1dde790() {
   return (neuron0x1dc1130()*-0.0595459);
}

double NNfunction_sb_dLdR::synapse0x1ddeb10() {
   return (neuron0x1dbc570()*0.108492);
}

double NNfunction_sb_dLdR::synapse0x1ddeb50() {
   return (neuron0x1dbc8b0()*0.452943);
}

double NNfunction_sb_dLdR::synapse0x1ddeb90() {
   return (neuron0x1dbcbf0()*-0.254368);
}

double NNfunction_sb_dLdR::synapse0x1ddebd0() {
   return (neuron0x1dbcf30()*-0.381214);
}

double NNfunction_sb_dLdR::synapse0x1ddec10() {
   return (neuron0x1dbd270()*-0.356845);
}

double NNfunction_sb_dLdR::synapse0x1ddec50() {
   return (neuron0x1dbd5b0()*0.582382);
}

double NNfunction_sb_dLdR::synapse0x1ddec90() {
   return (neuron0x1dbd8f0()*-0.391833);
}

double NNfunction_sb_dLdR::synapse0x1ddecd0() {
   return (neuron0x1dbdc30()*0.798971);
}

double NNfunction_sb_dLdR::synapse0x1dded10() {
   return (neuron0x1dbdf70()*-0.308051);
}

double NNfunction_sb_dLdR::synapse0x1dded50() {
   return (neuron0x1dbe2b0()*0.606463);
}

double NNfunction_sb_dLdR::synapse0x1dded90() {
   return (neuron0x1dbe5f0()*-0.345342);
}

double NNfunction_sb_dLdR::synapse0x1ddedd0() {
   return (neuron0x1dbe930()*0.409056);
}

double NNfunction_sb_dLdR::synapse0x1ddee10() {
   return (neuron0x1dbec70()*0.374101);
}

double NNfunction_sb_dLdR::synapse0x1ddee50() {
   return (neuron0x1dbefb0()*-0.141659);
}

double NNfunction_sb_dLdR::synapse0x1ddee90() {
   return (neuron0x1dbf2f0()*-0.0547696);
}

double NNfunction_sb_dLdR::synapse0x1ddeed0() {
   return (neuron0x1dbf630()*0.609677);
}

double NNfunction_sb_dLdR::synapse0x1dde960() {
   return (neuron0x1dbf970()*0.0734437);
}

double NNfunction_sb_dLdR::synapse0x1dde9a0() {
   return (neuron0x1dbfed0()*-0.246527);
}

double NNfunction_sb_dLdR::synapse0x1ddf020() {
   return (neuron0x1dc00f0()*0.0858256);
}

double NNfunction_sb_dLdR::synapse0x1ddf060() {
   return (neuron0x1dc0430()*0.503443);
}

double NNfunction_sb_dLdR::synapse0x1ddf0a0() {
   return (neuron0x1dc0770()*-0.165767);
}

double NNfunction_sb_dLdR::synapse0x1ddf0e0() {
   return (neuron0x1dc0ab0()*-0.482658);
}

double NNfunction_sb_dLdR::synapse0x1ddf120() {
   return (neuron0x1dc0df0()*-0.340253);
}

double NNfunction_sb_dLdR::synapse0x1ddf160() {
   return (neuron0x1dc1130()*0.0742492);
}

double NNfunction_sb_dLdR::synapse0x1ddf4e0() {
   return (neuron0x1dbc570()*-0.0615702);
}

double NNfunction_sb_dLdR::synapse0x1ddf520() {
   return (neuron0x1dbc8b0()*0.201544);
}

double NNfunction_sb_dLdR::synapse0x1ddf560() {
   return (neuron0x1dbcbf0()*0.107496);
}

double NNfunction_sb_dLdR::synapse0x1ddf5a0() {
   return (neuron0x1dbcf30()*-0.59226);
}

double NNfunction_sb_dLdR::synapse0x1ddf5e0() {
   return (neuron0x1dbd270()*0.0951313);
}

double NNfunction_sb_dLdR::synapse0x1ddf620() {
   return (neuron0x1dbd5b0()*-0.00670541);
}

double NNfunction_sb_dLdR::synapse0x1ddf660() {
   return (neuron0x1dbd8f0()*-0.110695);
}

double NNfunction_sb_dLdR::synapse0x1ddf6a0() {
   return (neuron0x1dbdc30()*-0.29346);
}

double NNfunction_sb_dLdR::synapse0x1ddf6e0() {
   return (neuron0x1dbdf70()*0.0582163);
}

double NNfunction_sb_dLdR::synapse0x1ddf720() {
   return (neuron0x1dbe2b0()*0.0170835);
}

double NNfunction_sb_dLdR::synapse0x1ddf760() {
   return (neuron0x1dbe5f0()*0.117689);
}

double NNfunction_sb_dLdR::synapse0x1ddf7a0() {
   return (neuron0x1dbe930()*-0.482443);
}

double NNfunction_sb_dLdR::synapse0x1ddf7e0() {
   return (neuron0x1dbec70()*-0.0937708);
}

double NNfunction_sb_dLdR::synapse0x1ddf820() {
   return (neuron0x1dbefb0()*-0.151035);
}

double NNfunction_sb_dLdR::synapse0x1ddf860() {
   return (neuron0x1dbf2f0()*-0.132369);
}

double NNfunction_sb_dLdR::synapse0x1ddf8a0() {
   return (neuron0x1dbf630()*0.344774);
}

double NNfunction_sb_dLdR::synapse0x1ddf330() {
   return (neuron0x1dbf970()*-0.101419);
}

double NNfunction_sb_dLdR::synapse0x1ddf370() {
   return (neuron0x1dbfed0()*-0.404708);
}

double NNfunction_sb_dLdR::synapse0x1dcfea0() {
   return (neuron0x1dc00f0()*0.0734754);
}

double NNfunction_sb_dLdR::synapse0x1dcfee0() {
   return (neuron0x1dc0430()*-0.0202349);
}

double NNfunction_sb_dLdR::synapse0x1dcff20() {
   return (neuron0x1dc0770()*-0.124944);
}

double NNfunction_sb_dLdR::synapse0x1dcff60() {
   return (neuron0x1dc0ab0()*0.0713523);
}

double NNfunction_sb_dLdR::synapse0x1dcffa0() {
   return (neuron0x1dc0df0()*-0.0442977);
}

double NNfunction_sb_dLdR::synapse0x1dcffe0() {
   return (neuron0x1dc1130()*-0.0594721);
}

double NNfunction_sb_dLdR::synapse0x1dd0360() {
   return (neuron0x1dbc570()*0.0429798);
}

double NNfunction_sb_dLdR::synapse0x1dd03a0() {
   return (neuron0x1dbc8b0()*-0.0813776);
}

double NNfunction_sb_dLdR::synapse0x1dd03e0() {
   return (neuron0x1dbcbf0()*-0.20692);
}

double NNfunction_sb_dLdR::synapse0x1dd0420() {
   return (neuron0x1dbcf30()*0.554285);
}

double NNfunction_sb_dLdR::synapse0x1dd0460() {
   return (neuron0x1dbd270()*0.0734907);
}

double NNfunction_sb_dLdR::synapse0x1dd04a0() {
   return (neuron0x1dbd5b0()*0.512168);
}

double NNfunction_sb_dLdR::synapse0x1dd04e0() {
   return (neuron0x1dbd8f0()*-0.503245);
}

double NNfunction_sb_dLdR::synapse0x1dd0520() {
   return (neuron0x1dbdc30()*0.11118);
}

double NNfunction_sb_dLdR::synapse0x1dd0560() {
   return (neuron0x1dbdf70()*0.511578);
}

double NNfunction_sb_dLdR::synapse0x1dd05a0() {
   return (neuron0x1dbe2b0()*-0.233836);
}

double NNfunction_sb_dLdR::synapse0x1dd05e0() {
   return (neuron0x1dbe5f0()*0.277375);
}

double NNfunction_sb_dLdR::synapse0x1dd0620() {
   return (neuron0x1dbe930()*-0.748331);
}

double NNfunction_sb_dLdR::synapse0x1dd0660() {
   return (neuron0x1dbec70()*-0.359044);
}

double NNfunction_sb_dLdR::synapse0x1dd06a0() {
   return (neuron0x1dbefb0()*0.0326471);
}

double NNfunction_sb_dLdR::synapse0x1dd06e0() {
   return (neuron0x1dbf2f0()*0.268823);
}

double NNfunction_sb_dLdR::synapse0x1dd0720() {
   return (neuron0x1dbf630()*-0.514097);
}

double NNfunction_sb_dLdR::synapse0x1dd01b0() {
   return (neuron0x1dbf970()*-0.326251);
}

double NNfunction_sb_dLdR::synapse0x1dd01f0() {
   return (neuron0x1dbfed0()*-0.8517);
}

double NNfunction_sb_dLdR::synapse0x1dd0870() {
   return (neuron0x1dc00f0()*0.268059);
}

double NNfunction_sb_dLdR::synapse0x1dd08b0() {
   return (neuron0x1dc0430()*0.242523);
}

double NNfunction_sb_dLdR::synapse0x1dd08f0() {
   return (neuron0x1dc0770()*-0.17735);
}

double NNfunction_sb_dLdR::synapse0x1dd0930() {
   return (neuron0x1dc0ab0()*0.0631456);
}

double NNfunction_sb_dLdR::synapse0x1dd0970() {
   return (neuron0x1dc0df0()*-0.0395492);
}

double NNfunction_sb_dLdR::synapse0x1dd09b0() {
   return (neuron0x1dc1130()*0.0620478);
}

double NNfunction_sb_dLdR::synapse0x1dd0d30() {
   return (neuron0x1dbc570()*-0.0174815);
}

double NNfunction_sb_dLdR::synapse0x1dd0d70() {
   return (neuron0x1dbc8b0()*0.0586314);
}

double NNfunction_sb_dLdR::synapse0x1dd0db0() {
   return (neuron0x1dbcbf0()*0.0244489);
}

double NNfunction_sb_dLdR::synapse0x1dd0df0() {
   return (neuron0x1dbcf30()*0.00660406);
}

double NNfunction_sb_dLdR::synapse0x1dd0e30() {
   return (neuron0x1dbd270()*-0.0860912);
}

double NNfunction_sb_dLdR::synapse0x1dd0e70() {
   return (neuron0x1dbd5b0()*-0.021677);
}

double NNfunction_sb_dLdR::synapse0x1dd0eb0() {
   return (neuron0x1dbd8f0()*-0.040588);
}

double NNfunction_sb_dLdR::synapse0x1dd0ef0() {
   return (neuron0x1dbdc30()*0.0259907);
}

double NNfunction_sb_dLdR::synapse0x1dd0f30() {
   return (neuron0x1dbdf70()*-0.00569773);
}

double NNfunction_sb_dLdR::synapse0x1dd0f70() {
   return (neuron0x1dbe2b0()*-0.000360505);
}

double NNfunction_sb_dLdR::synapse0x1dd0fb0() {
   return (neuron0x1dbe5f0()*0.000675457);
}

double NNfunction_sb_dLdR::synapse0x1dd0ff0() {
   return (neuron0x1dbe930()*-0.150189);
}

double NNfunction_sb_dLdR::synapse0x1dd1030() {
   return (neuron0x1dbec70()*-0.530485);
}

double NNfunction_sb_dLdR::synapse0x1dd1070() {
   return (neuron0x1dbefb0()*0.0637367);
}

double NNfunction_sb_dLdR::synapse0x1dd10b0() {
   return (neuron0x1dbf2f0()*-0.304586);
}

double NNfunction_sb_dLdR::synapse0x1dd10f0() {
   return (neuron0x1dbf630()*-0.342949);
}

double NNfunction_sb_dLdR::synapse0x1dd0b80() {
   return (neuron0x1dbf970()*0.0563626);
}

double NNfunction_sb_dLdR::synapse0x1dd0bc0() {
   return (neuron0x1dbfed0()*0.0901728);
}

double NNfunction_sb_dLdR::synapse0x1dd1240() {
   return (neuron0x1dc00f0()*-0.263408);
}

double NNfunction_sb_dLdR::synapse0x1dd1280() {
   return (neuron0x1dc0430()*0.0394954);
}

double NNfunction_sb_dLdR::synapse0x1dd12c0() {
   return (neuron0x1dc0770()*-0.0138478);
}

double NNfunction_sb_dLdR::synapse0x1dd1300() {
   return (neuron0x1dc0ab0()*-0.0130794);
}

double NNfunction_sb_dLdR::synapse0x1dd1340() {
   return (neuron0x1dc0df0()*-9.29821e-05);
}

double NNfunction_sb_dLdR::synapse0x1dd1380() {
   return (neuron0x1dc1130()*0.0163522);
}

double NNfunction_sb_dLdR::synapse0x1dd1700() {
   return (neuron0x1dbc570()*-0.150909);
}

double NNfunction_sb_dLdR::synapse0x1dd1740() {
   return (neuron0x1dbc8b0()*-0.838332);
}

double NNfunction_sb_dLdR::synapse0x1dd1780() {
   return (neuron0x1dbcbf0()*0.0652054);
}

double NNfunction_sb_dLdR::synapse0x1dd17c0() {
   return (neuron0x1dbcf30()*0.248485);
}

double NNfunction_sb_dLdR::synapse0x1dd1800() {
   return (neuron0x1dbd270()*-0.266126);
}

double NNfunction_sb_dLdR::synapse0x1dd1840() {
   return (neuron0x1dbd5b0()*-0.833777);
}

double NNfunction_sb_dLdR::synapse0x1dd1880() {
   return (neuron0x1dbd8f0()*0.163565);
}

double NNfunction_sb_dLdR::synapse0x1dd18c0() {
   return (neuron0x1dbdc30()*0.124368);
}

double NNfunction_sb_dLdR::synapse0x1dd1900() {
   return (neuron0x1dbdf70()*-0.13021);
}

double NNfunction_sb_dLdR::synapse0x1dd1940() {
   return (neuron0x1dbe2b0()*0.708889);
}

double NNfunction_sb_dLdR::synapse0x1dd1980() {
   return (neuron0x1dbe5f0()*-0.030027);
}

double NNfunction_sb_dLdR::synapse0x1dd19c0() {
   return (neuron0x1dbe930()*-0.305161);
}

double NNfunction_sb_dLdR::synapse0x1dd1a00() {
   return (neuron0x1dbec70()*0.124756);
}

double NNfunction_sb_dLdR::synapse0x1dd1a40() {
   return (neuron0x1dbefb0()*-0.0967831);
}

double NNfunction_sb_dLdR::synapse0x1dd1a80() {
   return (neuron0x1dbf2f0()*0.555205);
}

double NNfunction_sb_dLdR::synapse0x1dd1ac0() {
   return (neuron0x1dbf630()*0.54536);
}

double NNfunction_sb_dLdR::synapse0x1dd1550() {
   return (neuron0x1dbf970()*-0.679738);
}

double NNfunction_sb_dLdR::synapse0x1dd1590() {
   return (neuron0x1dbfed0()*-0.214363);
}

double NNfunction_sb_dLdR::synapse0x1dd1c10() {
   return (neuron0x1dc00f0()*0.436347);
}

double NNfunction_sb_dLdR::synapse0x1dd1c50() {
   return (neuron0x1dc0430()*-0.510424);
}

double NNfunction_sb_dLdR::synapse0x1dd1c90() {
   return (neuron0x1dc0770()*-1.09095);
}

double NNfunction_sb_dLdR::synapse0x1dd1cd0() {
   return (neuron0x1dc0ab0()*-0.509049);
}

double NNfunction_sb_dLdR::synapse0x1dd1d10() {
   return (neuron0x1dc0df0()*0.568936);
}

double NNfunction_sb_dLdR::synapse0x1dd1d50() {
   return (neuron0x1dc1130()*-0.740148);
}

double NNfunction_sb_dLdR::synapse0x1de3c20() {
   return (neuron0x1dbc570()*-0.313499);
}

double NNfunction_sb_dLdR::synapse0x1de3c60() {
   return (neuron0x1dbc8b0()*-0.0707346);
}

double NNfunction_sb_dLdR::synapse0x1de3ca0() {
   return (neuron0x1dbcbf0()*0.190113);
}

double NNfunction_sb_dLdR::synapse0x1de3ce0() {
   return (neuron0x1dbcf30()*-0.658583);
}

double NNfunction_sb_dLdR::synapse0x1de3d20() {
   return (neuron0x1dbd270()*0.212966);
}

double NNfunction_sb_dLdR::synapse0x1de3d60() {
   return (neuron0x1dbd5b0()*0.245745);
}

double NNfunction_sb_dLdR::synapse0x1de3da0() {
   return (neuron0x1dbd8f0()*-0.166374);
}

double NNfunction_sb_dLdR::synapse0x1de3de0() {
   return (neuron0x1dbdc30()*-1.06165);
}

double NNfunction_sb_dLdR::synapse0x1de3e20() {
   return (neuron0x1dbdf70()*-0.106913);
}

double NNfunction_sb_dLdR::synapse0x1de3e60() {
   return (neuron0x1dbe2b0()*1.16549);
}

double NNfunction_sb_dLdR::synapse0x1de3ea0() {
   return (neuron0x1dbe5f0()*-0.198851);
}

double NNfunction_sb_dLdR::synapse0x1de3ee0() {
   return (neuron0x1dbe930()*0.307005);
}

double NNfunction_sb_dLdR::synapse0x1de3f20() {
   return (neuron0x1dbec70()*-0.183723);
}

double NNfunction_sb_dLdR::synapse0x1de3f60() {
   return (neuron0x1dbefb0()*-0.192175);
}

double NNfunction_sb_dLdR::synapse0x1de3fa0() {
   return (neuron0x1dbf2f0()*0.328578);
}

double NNfunction_sb_dLdR::synapse0x1de3fe0() {
   return (neuron0x1dbf630()*0.0615028);
}

double NNfunction_sb_dLdR::synapse0x1dd1d90() {
   return (neuron0x1dbf970()*0.0378039);
}

double NNfunction_sb_dLdR::synapse0x1dd1dd0() {
   return (neuron0x1dbfed0()*0.0576278);
}

double NNfunction_sb_dLdR::synapse0x1de4130() {
   return (neuron0x1dc00f0()*0.278738);
}

double NNfunction_sb_dLdR::synapse0x1de4170() {
   return (neuron0x1dc0430()*-1.28654);
}

double NNfunction_sb_dLdR::synapse0x1de41b0() {
   return (neuron0x1dc0770()*0.219543);
}

double NNfunction_sb_dLdR::synapse0x1de41f0() {
   return (neuron0x1dc0ab0()*0.366165);
}

double NNfunction_sb_dLdR::synapse0x1de4230() {
   return (neuron0x1dc0df0()*0.353396);
}

double NNfunction_sb_dLdR::synapse0x1de4270() {
   return (neuron0x1dc1130()*0.25262);
}

double NNfunction_sb_dLdR::synapse0x1de45f0() {
   return (neuron0x1dbc570()*0.145733);
}

double NNfunction_sb_dLdR::synapse0x1de4630() {
   return (neuron0x1dbc8b0()*0.672963);
}

double NNfunction_sb_dLdR::synapse0x1de4670() {
   return (neuron0x1dbcbf0()*0.677035);
}

double NNfunction_sb_dLdR::synapse0x1de46b0() {
   return (neuron0x1dbcf30()*-0.111833);
}

double NNfunction_sb_dLdR::synapse0x1de46f0() {
   return (neuron0x1dbd270()*-0.343787);
}

double NNfunction_sb_dLdR::synapse0x1de4730() {
   return (neuron0x1dbd5b0()*0.00719672);
}

double NNfunction_sb_dLdR::synapse0x1de4770() {
   return (neuron0x1dbd8f0()*-0.163654);
}

double NNfunction_sb_dLdR::synapse0x1de47b0() {
   return (neuron0x1dbdc30()*0.551064);
}

double NNfunction_sb_dLdR::synapse0x1de47f0() {
   return (neuron0x1dbdf70()*-0.288612);
}

double NNfunction_sb_dLdR::synapse0x1de4830() {
   return (neuron0x1dbe2b0()*0.330514);
}

double NNfunction_sb_dLdR::synapse0x1de4870() {
   return (neuron0x1dbe5f0()*-0.224626);
}

double NNfunction_sb_dLdR::synapse0x1de48b0() {
   return (neuron0x1dbe930()*-0.133363);
}

double NNfunction_sb_dLdR::synapse0x1de48f0() {
   return (neuron0x1dbec70()*0.0259526);
}

double NNfunction_sb_dLdR::synapse0x1de4930() {
   return (neuron0x1dbefb0()*0.39257);
}

double NNfunction_sb_dLdR::synapse0x1de4970() {
   return (neuron0x1dbf2f0()*0.324962);
}

double NNfunction_sb_dLdR::synapse0x1de49b0() {
   return (neuron0x1dbf630()*0.730649);
}

double NNfunction_sb_dLdR::synapse0x1de4440() {
   return (neuron0x1dbf970()*-0.031205);
}

double NNfunction_sb_dLdR::synapse0x1de4480() {
   return (neuron0x1dbfed0()*0.137256);
}

double NNfunction_sb_dLdR::synapse0x1de4b00() {
   return (neuron0x1dc00f0()*-0.0288891);
}

double NNfunction_sb_dLdR::synapse0x1de4b40() {
   return (neuron0x1dc0430()*-0.426178);
}

double NNfunction_sb_dLdR::synapse0x1de4b80() {
   return (neuron0x1dc0770()*-0.0366521);
}

double NNfunction_sb_dLdR::synapse0x1de4bc0() {
   return (neuron0x1dc0ab0()*-0.187862);
}

double NNfunction_sb_dLdR::synapse0x1de4c00() {
   return (neuron0x1dc0df0()*0.0598131);
}

double NNfunction_sb_dLdR::synapse0x1de4c40() {
   return (neuron0x1dc1130()*0.407726);
}

double NNfunction_sb_dLdR::synapse0x1de4fc0() {
   return (neuron0x1dbc570()*0.348819);
}

double NNfunction_sb_dLdR::synapse0x1de5000() {
   return (neuron0x1dbc8b0()*0.170061);
}

double NNfunction_sb_dLdR::synapse0x1de5040() {
   return (neuron0x1dbcbf0()*0.557781);
}

double NNfunction_sb_dLdR::synapse0x1de5080() {
   return (neuron0x1dbcf30()*0.230213);
}

double NNfunction_sb_dLdR::synapse0x1de50c0() {
   return (neuron0x1dbd270()*-0.612651);
}

double NNfunction_sb_dLdR::synapse0x1de5100() {
   return (neuron0x1dbd5b0()*0.208188);
}

double NNfunction_sb_dLdR::synapse0x1de5140() {
   return (neuron0x1dbd8f0()*0.300071);
}

double NNfunction_sb_dLdR::synapse0x1de5180() {
   return (neuron0x1dbdc30()*0.536859);
}

double NNfunction_sb_dLdR::synapse0x1de51c0() {
   return (neuron0x1dbdf70()*-0.76606);
}

double NNfunction_sb_dLdR::synapse0x1de5200() {
   return (neuron0x1dbe2b0()*-0.0408381);
}

double NNfunction_sb_dLdR::synapse0x1de5240() {
   return (neuron0x1dbe5f0()*0.0606829);
}

double NNfunction_sb_dLdR::synapse0x1de5280() {
   return (neuron0x1dbe930()*-0.97482);
}

double NNfunction_sb_dLdR::synapse0x1de52c0() {
   return (neuron0x1dbec70()*0.431416);
}

double NNfunction_sb_dLdR::synapse0x1de5300() {
   return (neuron0x1dbefb0()*0.127789);
}

double NNfunction_sb_dLdR::synapse0x1de5340() {
   return (neuron0x1dbf2f0()*0.293893);
}

double NNfunction_sb_dLdR::synapse0x1de5380() {
   return (neuron0x1dbf630()*0.745734);
}

double NNfunction_sb_dLdR::synapse0x1de4e10() {
   return (neuron0x1dbf970()*0.0601633);
}

double NNfunction_sb_dLdR::synapse0x1de4e50() {
   return (neuron0x1dbfed0()*-0.310033);
}

double NNfunction_sb_dLdR::synapse0x1de54d0() {
   return (neuron0x1dc00f0()*-0.471813);
}

double NNfunction_sb_dLdR::synapse0x1de5510() {
   return (neuron0x1dc0430()*-0.351759);
}

double NNfunction_sb_dLdR::synapse0x1de5550() {
   return (neuron0x1dc0770()*0.211606);
}

double NNfunction_sb_dLdR::synapse0x1de5590() {
   return (neuron0x1dc0ab0()*0.110106);
}

double NNfunction_sb_dLdR::synapse0x1de55d0() {
   return (neuron0x1dc0df0()*-0.0727117);
}

double NNfunction_sb_dLdR::synapse0x1de5610() {
   return (neuron0x1dc1130()*-0.0733487);
}

double NNfunction_sb_dLdR::synapse0x1de5990() {
   return (neuron0x1dbc570()*-0.0219833);
}

double NNfunction_sb_dLdR::synapse0x1de59d0() {
   return (neuron0x1dbc8b0()*0.169795);
}

double NNfunction_sb_dLdR::synapse0x1de5a10() {
   return (neuron0x1dbcbf0()*-0.765011);
}

double NNfunction_sb_dLdR::synapse0x1de5a50() {
   return (neuron0x1dbcf30()*0.66609);
}

double NNfunction_sb_dLdR::synapse0x1de5a90() {
   return (neuron0x1dbd270()*0.147318);
}

double NNfunction_sb_dLdR::synapse0x1de5ad0() {
   return (neuron0x1dbd5b0()*0.174878);
}

double NNfunction_sb_dLdR::synapse0x1de5b10() {
   return (neuron0x1dbd8f0()*0.06266);
}

double NNfunction_sb_dLdR::synapse0x1de5b50() {
   return (neuron0x1dbdc30()*0.612049);
}

double NNfunction_sb_dLdR::synapse0x1de5b90() {
   return (neuron0x1dbdf70()*-0.470976);
}

double NNfunction_sb_dLdR::synapse0x1de5bd0() {
   return (neuron0x1dbe2b0()*-1.47174);
}

double NNfunction_sb_dLdR::synapse0x1de5c10() {
   return (neuron0x1dbe5f0()*0.276633);
}

double NNfunction_sb_dLdR::synapse0x1de5c50() {
   return (neuron0x1dbe930()*0.276863);
}

double NNfunction_sb_dLdR::synapse0x1de5c90() {
   return (neuron0x1dbec70()*-0.153607);
}

double NNfunction_sb_dLdR::synapse0x1de5cd0() {
   return (neuron0x1dbefb0()*-0.157473);
}

double NNfunction_sb_dLdR::synapse0x1de5d10() {
   return (neuron0x1dbf2f0()*0.237537);
}

double NNfunction_sb_dLdR::synapse0x1de5d50() {
   return (neuron0x1dbf630()*-0.455209);
}

double NNfunction_sb_dLdR::synapse0x1de57e0() {
   return (neuron0x1dbf970()*0.217679);
}

double NNfunction_sb_dLdR::synapse0x1de5820() {
   return (neuron0x1dbfed0()*0.389903);
}

double NNfunction_sb_dLdR::synapse0x1de5ea0() {
   return (neuron0x1dc00f0()*-0.151365);
}

double NNfunction_sb_dLdR::synapse0x1de5ee0() {
   return (neuron0x1dc0430()*-0.54);
}

double NNfunction_sb_dLdR::synapse0x1de5f20() {
   return (neuron0x1dc0770()*0.0289774);
}

double NNfunction_sb_dLdR::synapse0x1de5f60() {
   return (neuron0x1dc0ab0()*0.362444);
}

double NNfunction_sb_dLdR::synapse0x1de5fa0() {
   return (neuron0x1dc0df0()*0.126046);
}

double NNfunction_sb_dLdR::synapse0x1de5fe0() {
   return (neuron0x1dc1130()*0.402271);
}

double NNfunction_sb_dLdR::synapse0x1dc2580() {
   return (neuron0x1dc15d0()*0.742159);
}

double NNfunction_sb_dLdR::synapse0x1dc25c0() {
   return (neuron0x1dc1ee0()*1.47557);
}

double NNfunction_sb_dLdR::synapse0x1dc3a90() {
   return (neuron0x1dc29c0()*-0.148971);
}

double NNfunction_sb_dLdR::synapse0x1dc3ad0() {
   return (neuron0x1b7c250()*-0.625275);
}

double NNfunction_sb_dLdR::synapse0x1dc4460() {
   return (neuron0x1dc37e0()*0.62492);
}

double NNfunction_sb_dLdR::synapse0x1dc44a0() {
   return (neuron0x1dc41b0()*0.949792);
}

double NNfunction_sb_dLdR::synapse0x1dc5230() {
   return (neuron0x1dc4f80()*-1.8372);
}

double NNfunction_sb_dLdR::synapse0x1dc5270() {
   return (neuron0x1dc5950()*-6.65173);
}

double NNfunction_sb_dLdR::synapse0x1dc5c00() {
   return (neuron0x1dc6320()*-2.54882);
}

double NNfunction_sb_dLdR::synapse0x1dc5c40() {
   return (neuron0x1dc6e00()*1.37566);
}

double NNfunction_sb_dLdR::synapse0x1dc65d0() {
   return (neuron0x1dc77d0()*-1.64702);
}

double NNfunction_sb_dLdR::synapse0x1dc6610() {
   return (neuron0x1dc48b0()*-0.526862);
}

double NNfunction_sb_dLdR::synapse0x1dc70b0() {
   return (neuron0x1dc9380()*-0.425423);
}

double NNfunction_sb_dLdR::synapse0x1dc70f0() {
   return (neuron0x1dc9d50()*0.36581);
}

double NNfunction_sb_dLdR::synapse0x1dc7a80() {
   return (neuron0x1dca720()*0.759843);
}

double NNfunction_sb_dLdR::synapse0x1dc7ac0() {
   return (neuron0x1dcb0f0()*0.51572);
}

double NNfunction_sb_dLdR::synapse0x1dc4b60() {
   return (neuron0x1dccf00()*0.825503);
}

double NNfunction_sb_dLdR::synapse0x1dc4ba0() {
   return (neuron0x1dcd1e0()*2.75772);
}

double NNfunction_sb_dLdR::synapse0x1dc9630() {
   return (neuron0x1dcdbb0()*-0.812649);
}

double NNfunction_sb_dLdR::synapse0x1dc9670() {
   return (neuron0x1dce580()*0.25354);
}

double NNfunction_sb_dLdR::synapse0x1dca000() {
   return (neuron0x1dcef50()*1.0345);
}

double NNfunction_sb_dLdR::synapse0x1dca040() {
   return (neuron0x1dcf920()*-0.687423);
}

double NNfunction_sb_dLdR::synapse0x1dca9d0() {
   return (neuron0x1dc8470()*0.611739);
}

double NNfunction_sb_dLdR::synapse0x1dcaa10() {
   return (neuron0x1dc8e40()*-0.260033);
}

double NNfunction_sb_dLdR::synapse0x1dcb3a0() {
   return (neuron0x1dd26b0()*-0.978219);
}

double NNfunction_sb_dLdR::synapse0x1dcb3e0() {
   return (neuron0x1dd3080()*0.714199);
}

double NNfunction_sb_dLdR::synapse0x1dbf510() {
   return (neuron0x1dd3a50()*-0.893311);
}

double NNfunction_sb_dLdR::synapse0x1dbf550() {
   return (neuron0x1dd4420()*1.13676);
}

double NNfunction_sb_dLdR::synapse0x1dcd490() {
   return (neuron0x1dd4df0()*4.2236);
}

double NNfunction_sb_dLdR::synapse0x1dcd4d0() {
   return (neuron0x1dd57c0()*1.89305);
}

double NNfunction_sb_dLdR::synapse0x1dcde60() {
   return (neuron0x1dd6190()*0.415);
}

double NNfunction_sb_dLdR::synapse0x1dcdea0() {
   return (neuron0x1dd6b60()*0.929057);
}

double NNfunction_sb_dLdR::synapse0x1dce830() {
   return (neuron0x1dccbf0()*-0.87013);
}

double NNfunction_sb_dLdR::synapse0x1dce870() {
   return (neuron0x1dd9740()*-1.11125);
}

double NNfunction_sb_dLdR::synapse0x1dcf200() {
   return (neuron0x1dda110()*-3.3722);
}

double NNfunction_sb_dLdR::synapse0x1dcf240() {
   return (neuron0x1ddaae0()*1.08447);
}

double NNfunction_sb_dLdR::synapse0x1dcfbd0() {
   return (neuron0x1ddb4b0()*0.0999009);
}

double NNfunction_sb_dLdR::synapse0x1dcfc10() {
   return (neuron0x1ddbe80()*0.251408);
}

double NNfunction_sb_dLdR::synapse0x1dc8720() {
   return (neuron0x1ddc850()*1.77225);
}

double NNfunction_sb_dLdR::synapse0x1dc8760() {
   return (neuron0x1ddd220()*-1.06284);
}

double NNfunction_sb_dLdR::synapse0x1dd1fd0() {
   return (neuron0x1dddbf0()*0.35414);
}

double NNfunction_sb_dLdR::synapse0x1dd2010() {
   return (neuron0x1dde7d0()*0.823362);
}

double NNfunction_sb_dLdR::synapse0x1dd2960() {
   return (neuron0x1ddf1a0()*1.39253);
}

double NNfunction_sb_dLdR::synapse0x1dd29a0() {
   return (neuron0x1dd0020()*-1.26101);
}

double NNfunction_sb_dLdR::synapse0x1dd3330() {
   return (neuron0x1dd09f0()*-0.00743537);
}

double NNfunction_sb_dLdR::synapse0x1dd3370() {
   return (neuron0x1dd13c0()*-0.712988);
}

double NNfunction_sb_dLdR::synapse0x1dd3d00() {
   return (neuron0x1de3a00()*0.875401);
}

double NNfunction_sb_dLdR::synapse0x1dd3d40() {
   return (neuron0x1de42b0()*0.15312);
}

double NNfunction_sb_dLdR::synapse0x1dd46d0() {
   return (neuron0x1de4c80()*-0.926345);
}

double NNfunction_sb_dLdR::synapse0x1dd4710() {
   return (neuron0x1de5650()*-0.831168);
}

double NNfunction_sb_dLdR::synapse0x1dd6e10() {
   return (neuron0x1dc15d0()*0.0260795);
}

double NNfunction_sb_dLdR::synapse0x1dd6e50() {
   return (neuron0x1dc1ee0()*0.397072);
}

double NNfunction_sb_dLdR::synapse0x1dcc3d0() {
   return (neuron0x1dc29c0()*0.0714555);
}

double NNfunction_sb_dLdR::synapse0x1dcc410() {
   return (neuron0x1b7c250()*-0.016215);
}

double NNfunction_sb_dLdR::synapse0x1dd99f0() {
   return (neuron0x1dc37e0()*-0.0825243);
}

double NNfunction_sb_dLdR::synapse0x1dd9a30() {
   return (neuron0x1dc41b0()*0.48511);
}

double NNfunction_sb_dLdR::synapse0x1dda3c0() {
   return (neuron0x1dc4f80()*-0.0654261);
}

double NNfunction_sb_dLdR::synapse0x1dda400() {
   return (neuron0x1dc5950()*0.349521);
}

double NNfunction_sb_dLdR::synapse0x1ddad90() {
   return (neuron0x1dc6320()*-1.10231);
}

double NNfunction_sb_dLdR::synapse0x1ddadd0() {
   return (neuron0x1dc6e00()*-0.30896);
}

double NNfunction_sb_dLdR::synapse0x1ddb760() {
   return (neuron0x1dc77d0()*-0.146589);
}

double NNfunction_sb_dLdR::synapse0x1ddb7a0() {
   return (neuron0x1dc48b0()*-0.0174422);
}

double NNfunction_sb_dLdR::synapse0x1ddc130() {
   return (neuron0x1dc9380()*-0.0171773);
}

double NNfunction_sb_dLdR::synapse0x1ddc170() {
   return (neuron0x1dc9d50()*-0.299409);
}

double NNfunction_sb_dLdR::synapse0x1ddcb00() {
   return (neuron0x1dca720()*0.0352339);
}

double NNfunction_sb_dLdR::synapse0x1ddcb40() {
   return (neuron0x1dcb0f0()*0.0133045);
}

double NNfunction_sb_dLdR::synapse0x1ddd4d0() {
   return (neuron0x1dccf00()*0.0101378);
}

double NNfunction_sb_dLdR::synapse0x1ddd510() {
   return (neuron0x1dcd1e0()*-0.191148);
}

double NNfunction_sb_dLdR::synapse0x1dddea0() {
   return (neuron0x1dcdbb0()*-0.0241212);
}

double NNfunction_sb_dLdR::synapse0x1dddee0() {
   return (neuron0x1dce580()*0.544506);
}

double NNfunction_sb_dLdR::synapse0x1ddea80() {
   return (neuron0x1dcef50()*1.18916e-05);
}

double NNfunction_sb_dLdR::synapse0x1ddeac0() {
   return (neuron0x1dcf920()*-0.0788301);
}

double NNfunction_sb_dLdR::synapse0x1ddf450() {
   return (neuron0x1dc8470()*-0.0643364);
}

double NNfunction_sb_dLdR::synapse0x1ddf490() {
   return (neuron0x1dc8e40()*0.374361);
}

double NNfunction_sb_dLdR::synapse0x1dd02d0() {
   return (neuron0x1dd26b0()*2.53096);
}

double NNfunction_sb_dLdR::synapse0x1dd0310() {
   return (neuron0x1dd3080()*0.0302637);
}

double NNfunction_sb_dLdR::synapse0x1dd0ca0() {
   return (neuron0x1dd3a50()*-0.0440285);
}

double NNfunction_sb_dLdR::synapse0x1dd0ce0() {
   return (neuron0x1dd4420()*0.178781);
}

double NNfunction_sb_dLdR::synapse0x1dd1670() {
   return (neuron0x1dd4df0()*0.0723364);
}

double NNfunction_sb_dLdR::synapse0x1dd16b0() {
   return (neuron0x1dd57c0()*-0.303528);
}

double NNfunction_sb_dLdR::synapse0x1de3b90() {
   return (neuron0x1dd6190()*0.611882);
}

double NNfunction_sb_dLdR::synapse0x1de3bd0() {
   return (neuron0x1dd6b60()*0.00680496);
}

double NNfunction_sb_dLdR::synapse0x1de4560() {
   return (neuron0x1dccbf0()*-0.00938835);
}

double NNfunction_sb_dLdR::synapse0x1de45a0() {
   return (neuron0x1dd9740()*0.0258897);
}

double NNfunction_sb_dLdR::synapse0x1de4f30() {
   return (neuron0x1dda110()*-0.207514);
}

double NNfunction_sb_dLdR::synapse0x1de4f70() {
   return (neuron0x1ddaae0()*0.0219435);
}

double NNfunction_sb_dLdR::synapse0x1de5900() {
   return (neuron0x1ddb4b0()*-0.780627);
}

double NNfunction_sb_dLdR::synapse0x1de5940() {
   return (neuron0x1ddbe80()*0.178567);
}

double NNfunction_sb_dLdR::synapse0x1dc17f0() {
   return (neuron0x1ddc850()*0.179723);
}

double NNfunction_sb_dLdR::synapse0x1dc1830() {
   return (neuron0x1ddd220()*0.00970865);
}

double NNfunction_sb_dLdR::synapse0x1dd50a0() {
   return (neuron0x1dddbf0()*-0.441246);
}

double NNfunction_sb_dLdR::synapse0x1dd50e0() {
   return (neuron0x1dde7d0()*0.00410729);
}

double NNfunction_sb_dLdR::synapse0x1de6020() {
   return (neuron0x1ddf1a0()*-0.252381);
}

double NNfunction_sb_dLdR::synapse0x1de6060() {
   return (neuron0x1dd0020()*-0.0376754);
}

double NNfunction_sb_dLdR::synapse0x1de60a0() {
   return (neuron0x1dd09f0()*-0.586134);
}

double NNfunction_sb_dLdR::synapse0x1de60e0() {
   return (neuron0x1dd13c0()*-0.00446602);
}

double NNfunction_sb_dLdR::synapse0x1decf90() {
   return (neuron0x1de3a00()*-0.00183297);
}

double NNfunction_sb_dLdR::synapse0x1decfd0() {
   return (neuron0x1de42b0()*-0.00235736);
}

double NNfunction_sb_dLdR::synapse0x1ded010() {
   return (neuron0x1de4c80()*-0.0136854);
}

double NNfunction_sb_dLdR::synapse0x1ded050() {
   return (neuron0x1de5650()*-0.0131907);
}

double NNfunction_sb_dLdR::synapse0x1ded3d0() {
   return (neuron0x1dc15d0()*-0.434136);
}

double NNfunction_sb_dLdR::synapse0x1ded410() {
   return (neuron0x1dc1ee0()*-0.95969);
}

double NNfunction_sb_dLdR::synapse0x1ded450() {
   return (neuron0x1dc29c0()*-1.1212);
}

double NNfunction_sb_dLdR::synapse0x1ded490() {
   return (neuron0x1b7c250()*0.00283141);
}

double NNfunction_sb_dLdR::synapse0x1ded4d0() {
   return (neuron0x1dc37e0()*0.331899);
}

double NNfunction_sb_dLdR::synapse0x1ded510() {
   return (neuron0x1dc41b0()*1.4565);
}

double NNfunction_sb_dLdR::synapse0x1ded550() {
   return (neuron0x1dc4f80()*-1.35965);
}

double NNfunction_sb_dLdR::synapse0x1ded590() {
   return (neuron0x1dc5950()*3.51986);
}

double NNfunction_sb_dLdR::synapse0x1ded5d0() {
   return (neuron0x1dc6320()*-0.77294);
}

double NNfunction_sb_dLdR::synapse0x1ded610() {
   return (neuron0x1dc6e00()*1.07434);
}

double NNfunction_sb_dLdR::synapse0x1ded650() {
   return (neuron0x1dc77d0()*0.230158);
}

double NNfunction_sb_dLdR::synapse0x1ded690() {
   return (neuron0x1dc48b0()*0.019966);
}

double NNfunction_sb_dLdR::synapse0x1ded6d0() {
   return (neuron0x1dc9380()*-0.124451);
}

double NNfunction_sb_dLdR::synapse0x1ded710() {
   return (neuron0x1dc9d50()*-2.71833);
}

double NNfunction_sb_dLdR::synapse0x1ded750() {
   return (neuron0x1dca720()*-0.072582);
}

double NNfunction_sb_dLdR::synapse0x1ded790() {
   return (neuron0x1dcb0f0()*0.0032451);
}

double NNfunction_sb_dLdR::synapse0x1ded220() {
   return (neuron0x1dccf00()*-0.0653279);
}

double NNfunction_sb_dLdR::synapse0x1ded260() {
   return (neuron0x1dcd1e0()*-5.38547);
}

double NNfunction_sb_dLdR::synapse0x1ded8e0() {
   return (neuron0x1dcdbb0()*0.0541241);
}

double NNfunction_sb_dLdR::synapse0x1ded920() {
   return (neuron0x1dce580()*1.58788);
}

double NNfunction_sb_dLdR::synapse0x1ded960() {
   return (neuron0x1dcef50()*0.023268);
}

double NNfunction_sb_dLdR::synapse0x1ded9a0() {
   return (neuron0x1dcf920()*0.761685);
}

double NNfunction_sb_dLdR::synapse0x1ded9e0() {
   return (neuron0x1dc8470()*0.312099);
}

double NNfunction_sb_dLdR::synapse0x1deda20() {
   return (neuron0x1dc8e40()*-2.14134);
}

double NNfunction_sb_dLdR::synapse0x1deda60() {
   return (neuron0x1dd26b0()*2.09078);
}

double NNfunction_sb_dLdR::synapse0x1dedaa0() {
   return (neuron0x1dd3080()*0.0481635);
}

double NNfunction_sb_dLdR::synapse0x1dedae0() {
   return (neuron0x1dd3a50()*0.287232);
}

double NNfunction_sb_dLdR::synapse0x1dedb20() {
   return (neuron0x1dd4420()*-0.61983);
}

double NNfunction_sb_dLdR::synapse0x1dedb60() {
   return (neuron0x1dd4df0()*2.01868);
}

double NNfunction_sb_dLdR::synapse0x1dedba0() {
   return (neuron0x1dd57c0()*0.801259);
}

double NNfunction_sb_dLdR::synapse0x1dedbe0() {
   return (neuron0x1dd6190()*1.53974);
}

double NNfunction_sb_dLdR::synapse0x1dedc20() {
   return (neuron0x1dd6b60()*-0.0515832);
}

double NNfunction_sb_dLdR::synapse0x1ded7d0() {
   return (neuron0x1dccbf0()*-0.0490295);
}

double NNfunction_sb_dLdR::synapse0x1ded810() {
   return (neuron0x1dd9740()*-0.0744926);
}

double NNfunction_sb_dLdR::synapse0x1ded850() {
   return (neuron0x1dda110()*0.340275);
}

double NNfunction_sb_dLdR::synapse0x1ded890() {
   return (neuron0x1ddaae0()*-0.0406113);
}

double NNfunction_sb_dLdR::synapse0x1dede70() {
   return (neuron0x1ddb4b0()*-1.17212);
}

double NNfunction_sb_dLdR::synapse0x1dedeb0() {
   return (neuron0x1ddbe80()*1.04837);
}

double NNfunction_sb_dLdR::synapse0x1dedef0() {
   return (neuron0x1ddc850()*3.1996);
}

double NNfunction_sb_dLdR::synapse0x1dedf30() {
   return (neuron0x1ddd220()*-0.0492261);
}

double NNfunction_sb_dLdR::synapse0x1dedf70() {
   return (neuron0x1dddbf0()*3.47184);
}

double NNfunction_sb_dLdR::synapse0x1dedfb0() {
   return (neuron0x1dde7d0()*0.0493753);
}

double NNfunction_sb_dLdR::synapse0x1dedff0() {
   return (neuron0x1ddf1a0()*1.19852);
}

double NNfunction_sb_dLdR::synapse0x1dee030() {
   return (neuron0x1dd0020()*0.145886);
}

double NNfunction_sb_dLdR::synapse0x1dee070() {
   return (neuron0x1dd09f0()*-0.647499);
}

double NNfunction_sb_dLdR::synapse0x1dee0b0() {
   return (neuron0x1dd13c0()*-0.0290424);
}

double NNfunction_sb_dLdR::synapse0x1dee0f0() {
   return (neuron0x1de3a00()*0.0521818);
}

double NNfunction_sb_dLdR::synapse0x1dee130() {
   return (neuron0x1de42b0()*0.185256);
}

double NNfunction_sb_dLdR::synapse0x1dee170() {
   return (neuron0x1de4c80()*0.0302493);
}

double NNfunction_sb_dLdR::synapse0x1dee1b0() {
   return (neuron0x1de5650()*-0.0421092);
}

double NNfunction_sb_dLdR::synapse0x1dee530() {
   return (neuron0x1dc15d0()*-0.477564);
}

double NNfunction_sb_dLdR::synapse0x1dee570() {
   return (neuron0x1dc1ee0()*-4.64735);
}

double NNfunction_sb_dLdR::synapse0x1dee5b0() {
   return (neuron0x1dc29c0()*0.202592);
}

double NNfunction_sb_dLdR::synapse0x1dee5f0() {
   return (neuron0x1b7c250()*0.24366);
}

double NNfunction_sb_dLdR::synapse0x1dee630() {
   return (neuron0x1dc37e0()*0.334316);
}

double NNfunction_sb_dLdR::synapse0x1dee670() {
   return (neuron0x1dc41b0()*-1.45436);
}

double NNfunction_sb_dLdR::synapse0x1dee6b0() {
   return (neuron0x1dc4f80()*-6.00239);
}

double NNfunction_sb_dLdR::synapse0x1dee6f0() {
   return (neuron0x1dc5950()*-2.05111);
}

double NNfunction_sb_dLdR::synapse0x1dee730() {
   return (neuron0x1dc6320()*1.74492);
}

double NNfunction_sb_dLdR::synapse0x1dee770() {
   return (neuron0x1dc6e00()*-1.52317);
}

double NNfunction_sb_dLdR::synapse0x1dee7b0() {
   return (neuron0x1dc77d0()*0.875493);
}

double NNfunction_sb_dLdR::synapse0x1dee7f0() {
   return (neuron0x1dc48b0()*0.427408);
}

double NNfunction_sb_dLdR::synapse0x1dee830() {
   return (neuron0x1dc9380()*0.897949);
}

double NNfunction_sb_dLdR::synapse0x1dee870() {
   return (neuron0x1dc9d50()*-0.512454);
}

double NNfunction_sb_dLdR::synapse0x1dee8b0() {
   return (neuron0x1dca720()*-0.324862);
}

double NNfunction_sb_dLdR::synapse0x1dee8f0() {
   return (neuron0x1dcb0f0()*-0.113528);
}

double NNfunction_sb_dLdR::synapse0x1dee380() {
   return (neuron0x1dccf00()*-0.395215);
}

double NNfunction_sb_dLdR::synapse0x1dee3c0() {
   return (neuron0x1dcd1e0()*0.52304);
}

double NNfunction_sb_dLdR::synapse0x1deea40() {
   return (neuron0x1dcdbb0()*0.230933);
}

double NNfunction_sb_dLdR::synapse0x1deea80() {
   return (neuron0x1dce580()*-1.01571);
}

double NNfunction_sb_dLdR::synapse0x1deeac0() {
   return (neuron0x1dcef50()*0.0229734);
}

double NNfunction_sb_dLdR::synapse0x1deeb00() {
   return (neuron0x1dcf920()*1.0962);
}

double NNfunction_sb_dLdR::synapse0x1deeb40() {
   return (neuron0x1dc8470()*-1.15903);
}

double NNfunction_sb_dLdR::synapse0x1deeb80() {
   return (neuron0x1dc8e40()*-0.247791);
}

double NNfunction_sb_dLdR::synapse0x1deebc0() {
   return (neuron0x1dd26b0()*1.00741);
}

double NNfunction_sb_dLdR::synapse0x1deec00() {
   return (neuron0x1dd3080()*-0.679624);
}

double NNfunction_sb_dLdR::synapse0x1deec40() {
   return (neuron0x1dd3a50()*0.607398);
}

double NNfunction_sb_dLdR::synapse0x1deec80() {
   return (neuron0x1dd4420()*-1.62633);
}

double NNfunction_sb_dLdR::synapse0x1deecc0() {
   return (neuron0x1dd4df0()*5.36056);
}

double NNfunction_sb_dLdR::synapse0x1deed00() {
   return (neuron0x1dd57c0()*-0.865556);
}

double NNfunction_sb_dLdR::synapse0x1deed40() {
   return (neuron0x1dd6190()*0.50309);
}

double NNfunction_sb_dLdR::synapse0x1deed80() {
   return (neuron0x1dd6b60()*-0.0729441);
}

double NNfunction_sb_dLdR::synapse0x1dee930() {
   return (neuron0x1dccbf0()*0.396107);
}

double NNfunction_sb_dLdR::synapse0x1dee970() {
   return (neuron0x1dd9740()*0.320183);
}

double NNfunction_sb_dLdR::synapse0x1dee9b0() {
   return (neuron0x1dda110()*-0.881012);
}

double NNfunction_sb_dLdR::synapse0x1dee9f0() {
   return (neuron0x1ddaae0()*-0.376967);
}

double NNfunction_sb_dLdR::synapse0x1deefd0() {
   return (neuron0x1ddb4b0()*-1.32229);
}

double NNfunction_sb_dLdR::synapse0x1def010() {
   return (neuron0x1ddbe80()*0.602901);
}

double NNfunction_sb_dLdR::synapse0x1def050() {
   return (neuron0x1ddc850()*1.02728);
}

double NNfunction_sb_dLdR::synapse0x1def090() {
   return (neuron0x1ddd220()*-0.152247);
}

double NNfunction_sb_dLdR::synapse0x1def0d0() {
   return (neuron0x1dddbf0()*0.876253);
}

double NNfunction_sb_dLdR::synapse0x1def110() {
   return (neuron0x1dde7d0()*-0.2998);
}

double NNfunction_sb_dLdR::synapse0x1def150() {
   return (neuron0x1ddf1a0()*-0.0885951);
}

double NNfunction_sb_dLdR::synapse0x1def190() {
   return (neuron0x1dd0020()*0.514614);
}

double NNfunction_sb_dLdR::synapse0x1def1d0() {
   return (neuron0x1dd09f0()*-0.655133);
}

double NNfunction_sb_dLdR::synapse0x1def210() {
   return (neuron0x1dd13c0()*0.0962911);
}

double NNfunction_sb_dLdR::synapse0x1def250() {
   return (neuron0x1de3a00()*-0.274929);
}

double NNfunction_sb_dLdR::synapse0x1def290() {
   return (neuron0x1de42b0()*-0.378261);
}

double NNfunction_sb_dLdR::synapse0x1def2d0() {
   return (neuron0x1de4c80()*-0.0109323);
}

double NNfunction_sb_dLdR::synapse0x1def310() {
   return (neuron0x1de5650()*0.342487);
}

double NNfunction_sb_dLdR::synapse0x1def690() {
   return (neuron0x1dc15d0()*0.416887);
}

double NNfunction_sb_dLdR::synapse0x1def6d0() {
   return (neuron0x1dc1ee0()*-1.07685);
}

double NNfunction_sb_dLdR::synapse0x1def710() {
   return (neuron0x1dc29c0()*-0.885862);
}

double NNfunction_sb_dLdR::synapse0x1def750() {
   return (neuron0x1b7c250()*0.327414);
}

double NNfunction_sb_dLdR::synapse0x1def790() {
   return (neuron0x1dc37e0()*-0.148049);
}

double NNfunction_sb_dLdR::synapse0x1def7d0() {
   return (neuron0x1dc41b0()*0.768367);
}

double NNfunction_sb_dLdR::synapse0x1def810() {
   return (neuron0x1dc4f80()*-1.90403);
}

double NNfunction_sb_dLdR::synapse0x1def850() {
   return (neuron0x1dc5950()*-0.00968365);
}

double NNfunction_sb_dLdR::synapse0x1def890() {
   return (neuron0x1dc6320()*-1.82861);
}

double NNfunction_sb_dLdR::synapse0x1def8d0() {
   return (neuron0x1dc6e00()*-0.720637);
}

double NNfunction_sb_dLdR::synapse0x1def910() {
   return (neuron0x1dc77d0()*-0.950676);
}

double NNfunction_sb_dLdR::synapse0x1def950() {
   return (neuron0x1dc48b0()*0.322111);
}

double NNfunction_sb_dLdR::synapse0x1def990() {
   return (neuron0x1dc9380()*-0.230229);
}

double NNfunction_sb_dLdR::synapse0x1def9d0() {
   return (neuron0x1dc9d50()*-0.685782);
}

double NNfunction_sb_dLdR::synapse0x1defa10() {
   return (neuron0x1dca720()*-0.763026);
}

double NNfunction_sb_dLdR::synapse0x1defa50() {
   return (neuron0x1dcb0f0()*-0.699813);
}

double NNfunction_sb_dLdR::synapse0x1def4e0() {
   return (neuron0x1dccf00()*-0.820366);
}

double NNfunction_sb_dLdR::synapse0x1def520() {
   return (neuron0x1dcd1e0()*-0.096901);
}

double NNfunction_sb_dLdR::synapse0x1defba0() {
   return (neuron0x1dcdbb0()*-0.703943);
}

double NNfunction_sb_dLdR::synapse0x1defbe0() {
   return (neuron0x1dce580()*0.751811);
}

double NNfunction_sb_dLdR::synapse0x1defc20() {
   return (neuron0x1dcef50()*-0.800355);
}

double NNfunction_sb_dLdR::synapse0x1defc60() {
   return (neuron0x1dcf920()*-0.0161683);
}

double NNfunction_sb_dLdR::synapse0x1defca0() {
   return (neuron0x1dc8470()*-0.240517);
}

double NNfunction_sb_dLdR::synapse0x1defce0() {
   return (neuron0x1dc8e40()*-1.4976);
}

double NNfunction_sb_dLdR::synapse0x1defd20() {
   return (neuron0x1dd26b0()*0.337982);
}

double NNfunction_sb_dLdR::synapse0x1defd60() {
   return (neuron0x1dd3080()*-0.737397);
}

double NNfunction_sb_dLdR::synapse0x1defda0() {
   return (neuron0x1dd3a50()*-0.708702);
}

double NNfunction_sb_dLdR::synapse0x1defde0() {
   return (neuron0x1dd4420()*-0.452115);
}

double NNfunction_sb_dLdR::synapse0x1defe20() {
   return (neuron0x1dd4df0()*-1.45911);
}

double NNfunction_sb_dLdR::synapse0x1defe60() {
   return (neuron0x1dd57c0()*-0.760841);
}

double NNfunction_sb_dLdR::synapse0x1defea0() {
   return (neuron0x1dd6190()*0.469054);
}

double NNfunction_sb_dLdR::synapse0x1defee0() {
   return (neuron0x1dd6b60()*-0.29666);
}

double NNfunction_sb_dLdR::synapse0x1defa90() {
   return (neuron0x1dccbf0()*-0.804104);
}

double NNfunction_sb_dLdR::synapse0x1defad0() {
   return (neuron0x1dd9740()*-0.587541);
}

double NNfunction_sb_dLdR::synapse0x1defb10() {
   return (neuron0x1dda110()*-0.169141);
}

double NNfunction_sb_dLdR::synapse0x1defb50() {
   return (neuron0x1ddaae0()*-0.197343);
}

double NNfunction_sb_dLdR::synapse0x1df0130() {
   return (neuron0x1ddb4b0()*-1.11624);
}

double NNfunction_sb_dLdR::synapse0x1df0170() {
   return (neuron0x1ddbe80()*-0.443248);
}

double NNfunction_sb_dLdR::synapse0x1df01b0() {
   return (neuron0x1ddc850()*-0.755357);
}

double NNfunction_sb_dLdR::synapse0x1df01f0() {
   return (neuron0x1ddd220()*-0.520918);
}

double NNfunction_sb_dLdR::synapse0x1df0230() {
   return (neuron0x1dddbf0()*-1.53919);
}

double NNfunction_sb_dLdR::synapse0x1df0270() {
   return (neuron0x1dde7d0()*-0.852274);
}

double NNfunction_sb_dLdR::synapse0x1df02b0() {
   return (neuron0x1ddf1a0()*-0.747366);
}

double NNfunction_sb_dLdR::synapse0x1df02f0() {
   return (neuron0x1dd0020()*-0.123919);
}

double NNfunction_sb_dLdR::synapse0x1df0330() {
   return (neuron0x1dd09f0()*-1.0189);
}

double NNfunction_sb_dLdR::synapse0x1df0370() {
   return (neuron0x1dd13c0()*-0.31106);
}

double NNfunction_sb_dLdR::synapse0x1df03b0() {
   return (neuron0x1de3a00()*0.420114);
}

double NNfunction_sb_dLdR::synapse0x1df03f0() {
   return (neuron0x1de42b0()*0.122406);
}

double NNfunction_sb_dLdR::synapse0x1df0430() {
   return (neuron0x1de4c80()*-1.09868);
}

double NNfunction_sb_dLdR::synapse0x1df0470() {
   return (neuron0x1de5650()*-0.131945);
}

double NNfunction_sb_dLdR::synapse0x1dc1590() {
   return (neuron0x1dec850()*7.58359);
}

double NNfunction_sb_dLdR::synapse0x1df06d0() {
   return (neuron0x1decbf0()*-5.92217);
}

double NNfunction_sb_dLdR::synapse0x1df0710() {
   return (neuron0x1ded090()*-6.88704);
}

double NNfunction_sb_dLdR::synapse0x1df0750() {
   return (neuron0x1dee1f0()*-7.86986);
}

double NNfunction_sb_dLdR::synapse0x1df0790() {
   return (neuron0x1def350()*-9.58289);
}

