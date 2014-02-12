#include "NNfunction_ss_dRcR.h"
#include <cmath>

double NNfunction_ss_dRcR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.4753)/15.3043;
   input1 = (in1 - -4.93058)/1156.81;
   input2 = (in2 - 650.427)/621.123;
   input3 = (in3 - -59.2984)/827.178;
   input4 = (in4 - 1073.82)/962.567;
   input5 = (in5 - 894.525)/945.482;
   input6 = (in6 - 907.541)/950.639;
   input7 = (in7 - 928.581)/939.13;
   input8 = (in8 - 902.95)/958.298;
   input9 = (in9 - 887.142)/939.983;
   input10 = (in10 - 981.312)/945.825;
   input11 = (in11 - 713.477)/859.496;
   input12 = (in12 - 711.871)/860.296;
   input13 = (in13 - 500.402)/518.132;
   input14 = (in14 - 720.974)/825.061;
   input15 = (in15 - 411.622)/417.942;
   input16 = (in16 - 535.642)/567.292;
   input17 = (in17 - 389.196)/403.953;
   input18 = (in18 - 733.206)/878.738;
   input19 = (in19 - 791.617)/869.055;
   input20 = (in20 - -8.17147)/493.495;
   input21 = (in21 - 1.49266)/1157.13;
   input22 = (in22 - -0.0578775)/1207.8;
   input23 = (in23 - -195.887)/609.3;
   switch(index) {
     case 0:
         return neuron0x221d4b0();
     default:
         return 0.;
   }
}

double NNfunction_ss_dRcR::Value(int index, double* input) {
   input0 = (input[0] - 23.4753)/15.3043;
   input1 = (input[1] - -4.93058)/1156.81;
   input2 = (input[2] - 650.427)/621.123;
   input3 = (input[3] - -59.2984)/827.178;
   input4 = (input[4] - 1073.82)/962.567;
   input5 = (input[5] - 894.525)/945.482;
   input6 = (input[6] - 907.541)/950.639;
   input7 = (input[7] - 928.581)/939.13;
   input8 = (input[8] - 902.95)/958.298;
   input9 = (input[9] - 887.142)/939.983;
   input10 = (input[10] - 981.312)/945.825;
   input11 = (input[11] - 713.477)/859.496;
   input12 = (input[12] - 711.871)/860.296;
   input13 = (input[13] - 500.402)/518.132;
   input14 = (input[14] - 720.974)/825.061;
   input15 = (input[15] - 411.622)/417.942;
   input16 = (input[16] - 535.642)/567.292;
   input17 = (input[17] - 389.196)/403.953;
   input18 = (input[18] - 733.206)/878.738;
   input19 = (input[19] - 791.617)/869.055;
   input20 = (input[20] - -8.17147)/493.495;
   input21 = (input[21] - 1.49266)/1157.13;
   input22 = (input[22] - -0.0578775)/1207.8;
   input23 = (input[23] - -195.887)/609.3;
   switch(index) {
     case 0:
         return neuron0x221d4b0();
     default:
         return 0.;
   }
}

double NNfunction_ss_dRcR::neuron0x21e9570() {
   return input0;
}

double NNfunction_ss_dRcR::neuron0x21e98b0() {
   return input1;
}

double NNfunction_ss_dRcR::neuron0x21e9bf0() {
   return input2;
}

double NNfunction_ss_dRcR::neuron0x21e9f30() {
   return input3;
}

double NNfunction_ss_dRcR::neuron0x21ea270() {
   return input4;
}

double NNfunction_ss_dRcR::neuron0x21ea5b0() {
   return input5;
}

double NNfunction_ss_dRcR::neuron0x21ea8f0() {
   return input6;
}

double NNfunction_ss_dRcR::neuron0x21eac30() {
   return input7;
}

double NNfunction_ss_dRcR::neuron0x21eaf70() {
   return input8;
}

double NNfunction_ss_dRcR::neuron0x21eb2b0() {
   return input9;
}

double NNfunction_ss_dRcR::neuron0x21eb5f0() {
   return input10;
}

double NNfunction_ss_dRcR::neuron0x21eb930() {
   return input11;
}

double NNfunction_ss_dRcR::neuron0x21ebc70() {
   return input12;
}

double NNfunction_ss_dRcR::neuron0x21ebfb0() {
   return input13;
}

double NNfunction_ss_dRcR::neuron0x21ec2f0() {
   return input14;
}

double NNfunction_ss_dRcR::neuron0x21ec630() {
   return input15;
}

double NNfunction_ss_dRcR::neuron0x21ec970() {
   return input16;
}

double NNfunction_ss_dRcR::neuron0x21eced0() {
   return input17;
}

double NNfunction_ss_dRcR::neuron0x21ed0f0() {
   return input18;
}

double NNfunction_ss_dRcR::neuron0x21ed430() {
   return input19;
}

double NNfunction_ss_dRcR::neuron0x21ed770() {
   return input20;
}

double NNfunction_ss_dRcR::neuron0x21edab0() {
   return input21;
}

double NNfunction_ss_dRcR::neuron0x21eddf0() {
   return input22;
}

double NNfunction_ss_dRcR::neuron0x21ee130() {
   return input23;
}

double NNfunction_ss_dRcR::input0x21ee5d0() {
   double input = -1.00489;
   input += synapse0x1fa93e0();
   input += synapse0x21e9430();
   input += synapse0x21e9470();
   input += synapse0x21ee880();
   input += synapse0x21ee8c0();
   input += synapse0x21ee900();
   input += synapse0x21ee940();
   input += synapse0x21ee980();
   input += synapse0x21ee9c0();
   input += synapse0x21eea00();
   input += synapse0x21eea40();
   input += synapse0x21eea80();
   input += synapse0x21eeac0();
   input += synapse0x21eeb00();
   input += synapse0x21eeb40();
   input += synapse0x21eeb80();
   input += synapse0x21e93a0();
   input += synapse0x21e93e0();
   input += synapse0x1f9ac80();
   input += synapse0x1f9acc0();
   input += synapse0x21eede0();
   input += synapse0x21eee20();
   input += synapse0x21eee60();
   input += synapse0x21eeea0();
   return input;
}

double NNfunction_ss_dRcR::neuron0x21ee5d0() {
   double input = input0x21ee5d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x21eeee0() {
   double input = 0.712168;
   input += synapse0x21ef220();
   input += synapse0x21ef260();
   input += synapse0x21ef2a0();
   input += synapse0x21ef2e0();
   input += synapse0x21ef320();
   input += synapse0x21ef360();
   input += synapse0x21ef3a0();
   input += synapse0x21ef3e0();
   input += synapse0x21ef420();
   input += synapse0x21eecd0();
   input += synapse0x21eed10();
   input += synapse0x21eed50();
   input += synapse0x21eed90();
   input += synapse0x21ef670();
   input += synapse0x21ef6b0();
   input += synapse0x21ef6f0();
   input += synapse0x21ef070();
   input += synapse0x21ef0b0();
   input += synapse0x21ef840();
   input += synapse0x21ef880();
   input += synapse0x21ef8c0();
   input += synapse0x21ef900();
   input += synapse0x21ef940();
   input += synapse0x21ef980();
   return input;
}

double NNfunction_ss_dRcR::neuron0x21eeee0() {
   double input = input0x21eeee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x21ef9c0() {
   double input = 0.675653;
   input += synapse0x21efd00();
   input += synapse0x21efd40();
   input += synapse0x21efd80();
   input += synapse0x21efdc0();
   input += synapse0x21efe00();
   input += synapse0x21efe40();
   input += synapse0x21efe80();
   input += synapse0x21efec0();
   input += synapse0x21eff00();
   input += synapse0x21eff40();
   input += synapse0x21eff80();
   input += synapse0x21effc0();
   input += synapse0x21f0000();
   input += synapse0x21f0040();
   input += synapse0x21f0080();
   input += synapse0x21f00c0();
   input += synapse0x21efb50();
   input += synapse0x21efb90();
   input += synapse0x1fa8ad0();
   input += synapse0x1fa8b10();
   input += synapse0x21d8600();
   input += synapse0x21d8640();
   input += synapse0x21d8680();
   input += synapse0x21e94b0();
   return input;
}

double NNfunction_ss_dRcR::neuron0x21ef9c0() {
   double input = input0x21ef9c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x1fa9250() {
   double input = -1.84087;
   input += synapse0x21ef610();
   input += synapse0x21e94f0();
   input += synapse0x21e9530();
   input += synapse0x21f0210();
   input += synapse0x21f0250();
   input += synapse0x21f0290();
   input += synapse0x21f02d0();
   input += synapse0x21f0310();
   input += synapse0x21f0350();
   input += synapse0x21f0390();
   input += synapse0x21f03d0();
   input += synapse0x21f0410();
   input += synapse0x21f0450();
   input += synapse0x21f0490();
   input += synapse0x21f04d0();
   input += synapse0x21f0510();
   input += synapse0x21ef460();
   input += synapse0x21ef4a0();
   input += synapse0x21f0660();
   input += synapse0x21f06a0();
   input += synapse0x21f06e0();
   input += synapse0x21f0720();
   input += synapse0x21f0760();
   input += synapse0x21f07a0();
   return input;
}

double NNfunction_ss_dRcR::neuron0x1fa9250() {
   double input = input0x1fa9250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x21f07e0() {
   double input = 0.677701;
   input += synapse0x21f0b20();
   input += synapse0x21f0b60();
   input += synapse0x21f0ba0();
   input += synapse0x21f0be0();
   input += synapse0x21f0c20();
   input += synapse0x21f0c60();
   input += synapse0x21f0ca0();
   input += synapse0x21f0ce0();
   input += synapse0x21f0d20();
   input += synapse0x21f0d60();
   input += synapse0x21f0da0();
   input += synapse0x21f0de0();
   input += synapse0x21f0e20();
   input += synapse0x21f0e60();
   input += synapse0x21f0ea0();
   input += synapse0x21f0ee0();
   input += synapse0x21f0970();
   input += synapse0x21f09b0();
   input += synapse0x21f1030();
   input += synapse0x21f1070();
   input += synapse0x21f10b0();
   input += synapse0x21f10f0();
   input += synapse0x21f1130();
   input += synapse0x21f1170();
   return input;
}

double NNfunction_ss_dRcR::neuron0x21f07e0() {
   double input = input0x21f07e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x21f11b0() {
   double input = -0.240083;
   input += synapse0x21f14f0();
   input += synapse0x21f1530();
   input += synapse0x21f1570();
   input += synapse0x21f15b0();
   input += synapse0x21f15f0();
   input += synapse0x21f1630();
   input += synapse0x21f1670();
   input += synapse0x21f16b0();
   input += synapse0x21f16f0();
   input += synapse0x1fa8e40();
   input += synapse0x1fa8e80();
   input += synapse0x1fa8ec0();
   input += synapse0x1fa8f00();
   input += synapse0x1fa8f40();
   input += synapse0x1fa8f80();
   input += synapse0x1fa8fc0();
   input += synapse0x21f1340();
   input += synapse0x21f1380();
   input += synapse0x1fa9110();
   input += synapse0x1fa9150();
   input += synapse0x1fa9190();
   input += synapse0x1fa91d0();
   input += synapse0x1fa9210();
   input += synapse0x21f1f40();
   return input;
}

double NNfunction_ss_dRcR::neuron0x21f11b0() {
   double input = input0x21f11b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x21f1f80() {
   double input = 1.56036;
   input += synapse0x21f22c0();
   input += synapse0x21f2300();
   input += synapse0x21f2340();
   input += synapse0x21f2380();
   input += synapse0x21f23c0();
   input += synapse0x21f2400();
   input += synapse0x21f2440();
   input += synapse0x21f2480();
   input += synapse0x21f24c0();
   input += synapse0x21f2500();
   input += synapse0x21f2540();
   input += synapse0x21f2580();
   input += synapse0x21f25c0();
   input += synapse0x21f2600();
   input += synapse0x21f2640();
   input += synapse0x21f2680();
   input += synapse0x21f2110();
   input += synapse0x21f2150();
   input += synapse0x21f27d0();
   input += synapse0x21f2810();
   input += synapse0x21f2850();
   input += synapse0x21f2890();
   input += synapse0x21f28d0();
   input += synapse0x21f2910();
   return input;
}

double NNfunction_ss_dRcR::neuron0x21f1f80() {
   double input = input0x21f1f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x21f2950() {
   double input = 1.14144;
   input += synapse0x21f2c90();
   input += synapse0x21f2cd0();
   input += synapse0x21f2d10();
   input += synapse0x21f2d50();
   input += synapse0x21f2d90();
   input += synapse0x21f2dd0();
   input += synapse0x21f2e10();
   input += synapse0x21f2e50();
   input += synapse0x21f2e90();
   input += synapse0x21f2ed0();
   input += synapse0x21f2f10();
   input += synapse0x21f2f50();
   input += synapse0x21f2f90();
   input += synapse0x21f2fd0();
   input += synapse0x21f3010();
   input += synapse0x21f3050();
   input += synapse0x21f2ae0();
   input += synapse0x21f2b20();
   input += synapse0x21f31a0();
   input += synapse0x21f31e0();
   input += synapse0x21f3220();
   input += synapse0x21f3260();
   input += synapse0x21f32a0();
   input += synapse0x21f32e0();
   return input;
}

double NNfunction_ss_dRcR::neuron0x21f2950() {
   double input = input0x21f2950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x21f3320() {
   double input = -1.29392;
   input += synapse0x21ecdc0();
   input += synapse0x21ece00();
   input += synapse0x21ece40();
   input += synapse0x21ece80();
   input += synapse0x21f3870();
   input += synapse0x21f38b0();
   input += synapse0x21f38f0();
   input += synapse0x21f3930();
   input += synapse0x21f3970();
   input += synapse0x21f39b0();
   input += synapse0x21f39f0();
   input += synapse0x21f3a30();
   input += synapse0x21f3a70();
   input += synapse0x21f3ab0();
   input += synapse0x21f3af0();
   input += synapse0x21f3b30();
   input += synapse0x21f34b0();
   input += synapse0x21f34f0();
   input += synapse0x21f3c80();
   input += synapse0x21f3cc0();
   input += synapse0x21f3d00();
   input += synapse0x21f3d40();
   input += synapse0x21f3d80();
   input += synapse0x21f3dc0();
   return input;
}

double NNfunction_ss_dRcR::neuron0x21f3320() {
   double input = input0x21f3320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x21f3e00() {
   double input = 1.09536;
   input += synapse0x21f4140();
   input += synapse0x21f4180();
   input += synapse0x21f41c0();
   input += synapse0x21f4200();
   input += synapse0x21f4240();
   input += synapse0x21f4280();
   input += synapse0x21f42c0();
   input += synapse0x21f4300();
   input += synapse0x21f4340();
   input += synapse0x21f4380();
   input += synapse0x21f43c0();
   input += synapse0x21f4400();
   input += synapse0x21f4440();
   input += synapse0x21f4480();
   input += synapse0x21f44c0();
   input += synapse0x21f4500();
   input += synapse0x21f3f90();
   input += synapse0x21f3fd0();
   input += synapse0x21f4650();
   input += synapse0x21f4690();
   input += synapse0x21f46d0();
   input += synapse0x21f4710();
   input += synapse0x21f4750();
   input += synapse0x21f4790();
   return input;
}

double NNfunction_ss_dRcR::neuron0x21f3e00() {
   double input = input0x21f3e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x21f47d0() {
   double input = 0.197581;
   input += synapse0x21f4b10();
   input += synapse0x21f4b50();
   input += synapse0x21f4b90();
   input += synapse0x21f4bd0();
   input += synapse0x21f4c10();
   input += synapse0x21f4c50();
   input += synapse0x21f4c90();
   input += synapse0x21f4cd0();
   input += synapse0x21f4d10();
   input += synapse0x21f4d50();
   input += synapse0x21f4d90();
   input += synapse0x21f4dd0();
   input += synapse0x21f4e10();
   input += synapse0x21f4e50();
   input += synapse0x21f4e90();
   input += synapse0x21f4ed0();
   input += synapse0x21f4960();
   input += synapse0x21f49a0();
   input += synapse0x21f1730();
   input += synapse0x21f1770();
   input += synapse0x21f17b0();
   input += synapse0x21f17f0();
   input += synapse0x21f1830();
   input += synapse0x21f1870();
   return input;
}

double NNfunction_ss_dRcR::neuron0x21f47d0() {
   double input = input0x21f47d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x21f18b0() {
   double input = 0.31678;
   input += synapse0x21f1bf0();
   input += synapse0x21f1c30();
   input += synapse0x21f1c70();
   input += synapse0x21f1cb0();
   input += synapse0x21f1cf0();
   input += synapse0x21f1d30();
   input += synapse0x21f1d70();
   input += synapse0x21f1db0();
   input += synapse0x21f1df0();
   input += synapse0x21f1e30();
   input += synapse0x21f1e70();
   input += synapse0x21f1eb0();
   input += synapse0x21f1ef0();
   input += synapse0x21f6030();
   input += synapse0x21f6070();
   input += synapse0x21f60b0();
   input += synapse0x21f1a40();
   input += synapse0x21f1a80();
   input += synapse0x21f6200();
   input += synapse0x21f6240();
   input += synapse0x21f6280();
   input += synapse0x21f62c0();
   input += synapse0x21f6300();
   input += synapse0x21f6340();
   return input;
}

double NNfunction_ss_dRcR::neuron0x21f18b0() {
   double input = input0x21f18b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x21f6380() {
   double input = -0.132332;
   input += synapse0x21f66c0();
   input += synapse0x21f6700();
   input += synapse0x21f6740();
   input += synapse0x21f6780();
   input += synapse0x21f67c0();
   input += synapse0x21f6800();
   input += synapse0x21f6840();
   input += synapse0x21f6880();
   input += synapse0x21f68c0();
   input += synapse0x21f6900();
   input += synapse0x21f6940();
   input += synapse0x21f6980();
   input += synapse0x21f69c0();
   input += synapse0x21f6a00();
   input += synapse0x21f6a40();
   input += synapse0x21f6a80();
   input += synapse0x21f6510();
   input += synapse0x21f6550();
   input += synapse0x21f6bd0();
   input += synapse0x21f6c10();
   input += synapse0x21f6c50();
   input += synapse0x21f6c90();
   input += synapse0x21f6cd0();
   input += synapse0x21f6d10();
   return input;
}

double NNfunction_ss_dRcR::neuron0x21f6380() {
   double input = input0x21f6380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x21f6d50() {
   double input = -1.40491;
   input += synapse0x21f7090();
   input += synapse0x21f70d0();
   input += synapse0x21f7110();
   input += synapse0x21f7150();
   input += synapse0x21f7190();
   input += synapse0x21f71d0();
   input += synapse0x21f7210();
   input += synapse0x21f7250();
   input += synapse0x21f7290();
   input += synapse0x21f72d0();
   input += synapse0x21f7310();
   input += synapse0x21f7350();
   input += synapse0x21f7390();
   input += synapse0x21f73d0();
   input += synapse0x21f7410();
   input += synapse0x21f7450();
   input += synapse0x21f6ee0();
   input += synapse0x21f6f20();
   input += synapse0x21f75a0();
   input += synapse0x21f75e0();
   input += synapse0x21f7620();
   input += synapse0x21f7660();
   input += synapse0x21f76a0();
   input += synapse0x21f76e0();
   return input;
}

double NNfunction_ss_dRcR::neuron0x21f6d50() {
   double input = input0x21f6d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x21f7720() {
   double input = 0.3139;
   input += synapse0x21f7a60();
   input += synapse0x21f7aa0();
   input += synapse0x21f7ae0();
   input += synapse0x21f7b20();
   input += synapse0x21f7b60();
   input += synapse0x21f7ba0();
   input += synapse0x21f7be0();
   input += synapse0x21f7c20();
   input += synapse0x21f7c60();
   input += synapse0x21f7ca0();
   input += synapse0x21f7ce0();
   input += synapse0x21f7d20();
   input += synapse0x21f7d60();
   input += synapse0x21f7da0();
   input += synapse0x21f7de0();
   input += synapse0x21f7e20();
   input += synapse0x21f78b0();
   input += synapse0x21f78f0();
   input += synapse0x21f7f70();
   input += synapse0x21f7fb0();
   input += synapse0x21f7ff0();
   input += synapse0x21f8030();
   input += synapse0x21f8070();
   input += synapse0x21f80b0();
   return input;
}

double NNfunction_ss_dRcR::neuron0x21f7720() {
   double input = input0x21f7720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x21f80f0() {
   double input = 0.398636;
   input += synapse0x21f8430();
   input += synapse0x21e9790();
   input += synapse0x21e97d0();
   input += synapse0x21e9ad0();
   input += synapse0x21e9b10();
   input += synapse0x21e9e10();
   input += synapse0x21e9e50();
   input += synapse0x21ea150();
   input += synapse0x21ea190();
   input += synapse0x21ea490();
   input += synapse0x21ea4d0();
   input += synapse0x21ea7d0();
   input += synapse0x21ea810();
   input += synapse0x21eab10();
   input += synapse0x21eab50();
   input += synapse0x21eae50();
   input += synapse0x21eae90();
   input += synapse0x21eb190();
   input += synapse0x21eb1d0();
   input += synapse0x21eb4d0();
   input += synapse0x21eb510();
   input += synapse0x21eb810();
   input += synapse0x21eb850();
   input += synapse0x21ebb50();
   return input;
}

double NNfunction_ss_dRcR::neuron0x21f80f0() {
   double input = input0x21f80f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x21f9f00() {
   double input = -1.53895;
   input += synapse0x21ebb90();
   input += synapse0x21ec850();
   input += synapse0x21ec890();
   input += synapse0x21f8280();
   input += synapse0x21f82c0();
   input += synapse0x21ecb90();
   input += synapse0x21ecbd0();
   input += synapse0x1f9ab60();
   input += synapse0x1f9aba0();
   input += synapse0x21ed310();
   input += synapse0x21ed350();
   input += synapse0x21ed650();
   input += synapse0x21ed690();
   input += synapse0x21ed990();
   input += synapse0x21ed9d0();
   input += synapse0x21edcd0();
   input += synapse0x21edd10();
   input += synapse0x21ee010();
   input += synapse0x21ee050();
   input += synapse0x21ee350();
   input += synapse0x21ee390();
   input += synapse0x21ebe90();
   input += synapse0x21ebed0();
   input += synapse0x21fa1a0();
   return input;
}

double NNfunction_ss_dRcR::neuron0x21f9f00() {
   double input = input0x21f9f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x21fa1e0() {
   double input = 0.123421;
   input += synapse0x21fa520();
   input += synapse0x21fa560();
   input += synapse0x21fa5a0();
   input += synapse0x21fa5e0();
   input += synapse0x21fa620();
   input += synapse0x21fa660();
   input += synapse0x21fa6a0();
   input += synapse0x21fa6e0();
   input += synapse0x21fa720();
   input += synapse0x21fa760();
   input += synapse0x21fa7a0();
   input += synapse0x21fa7e0();
   input += synapse0x21fa820();
   input += synapse0x21fa860();
   input += synapse0x21fa8a0();
   input += synapse0x21fa8e0();
   input += synapse0x21fa370();
   input += synapse0x21fa3b0();
   input += synapse0x21faa30();
   input += synapse0x21faa70();
   input += synapse0x21faab0();
   input += synapse0x21faaf0();
   input += synapse0x21fab30();
   input += synapse0x21fab70();
   return input;
}

double NNfunction_ss_dRcR::neuron0x21fa1e0() {
   double input = input0x21fa1e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x21fabb0() {
   double input = -0.439203;
   input += synapse0x21faef0();
   input += synapse0x21faf30();
   input += synapse0x21faf70();
   input += synapse0x21fafb0();
   input += synapse0x21faff0();
   input += synapse0x21fb030();
   input += synapse0x21fb070();
   input += synapse0x21fb0b0();
   input += synapse0x21fb0f0();
   input += synapse0x21fb130();
   input += synapse0x21fb170();
   input += synapse0x21fb1b0();
   input += synapse0x21fb1f0();
   input += synapse0x21fb230();
   input += synapse0x21fb270();
   input += synapse0x21fb2b0();
   input += synapse0x21fad40();
   input += synapse0x21fad80();
   input += synapse0x21fb400();
   input += synapse0x21fb440();
   input += synapse0x21fb480();
   input += synapse0x21fb4c0();
   input += synapse0x21fb500();
   input += synapse0x21fb540();
   return input;
}

double NNfunction_ss_dRcR::neuron0x21fabb0() {
   double input = input0x21fabb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x21fb580() {
   double input = -1.04107;
   input += synapse0x21fb8c0();
   input += synapse0x21fb900();
   input += synapse0x21fb940();
   input += synapse0x21fb980();
   input += synapse0x21fb9c0();
   input += synapse0x21fba00();
   input += synapse0x21fba40();
   input += synapse0x21fba80();
   input += synapse0x21fbac0();
   input += synapse0x21fbb00();
   input += synapse0x21fbb40();
   input += synapse0x21fbb80();
   input += synapse0x21fbbc0();
   input += synapse0x21fbc00();
   input += synapse0x21fbc40();
   input += synapse0x21fbc80();
   input += synapse0x21fb710();
   input += synapse0x21fb750();
   input += synapse0x21fbdd0();
   input += synapse0x21fbe10();
   input += synapse0x21fbe50();
   input += synapse0x21fbe90();
   input += synapse0x21fbed0();
   input += synapse0x21fbf10();
   return input;
}

double NNfunction_ss_dRcR::neuron0x21fb580() {
   double input = input0x21fb580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x21fbf50() {
   double input = -2.22644;
   input += synapse0x21fc290();
   input += synapse0x21fc2d0();
   input += synapse0x21fc310();
   input += synapse0x21fc350();
   input += synapse0x21fc390();
   input += synapse0x21fc3d0();
   input += synapse0x21fc410();
   input += synapse0x21fc450();
   input += synapse0x21fc490();
   input += synapse0x21fc4d0();
   input += synapse0x21fc510();
   input += synapse0x21fc550();
   input += synapse0x21fc590();
   input += synapse0x21fc5d0();
   input += synapse0x21fc610();
   input += synapse0x21fc650();
   input += synapse0x21fc0e0();
   input += synapse0x21fc120();
   input += synapse0x21fc7a0();
   input += synapse0x21fc7e0();
   input += synapse0x21fc820();
   input += synapse0x21fc860();
   input += synapse0x21fc8a0();
   input += synapse0x21fc8e0();
   return input;
}

double NNfunction_ss_dRcR::neuron0x21fbf50() {
   double input = input0x21fbf50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x21fc920() {
   double input = 0.109743;
   input += synapse0x21fcc60();
   input += synapse0x21fcca0();
   input += synapse0x21fcce0();
   input += synapse0x21fcd20();
   input += synapse0x21fcd60();
   input += synapse0x21fcda0();
   input += synapse0x21fcde0();
   input += synapse0x21fce20();
   input += synapse0x21fce60();
   input += synapse0x21f5020();
   input += synapse0x21f5060();
   input += synapse0x21f50a0();
   input += synapse0x21f50e0();
   input += synapse0x21f5120();
   input += synapse0x21f5160();
   input += synapse0x21f51a0();
   input += synapse0x21fcab0();
   input += synapse0x21fcaf0();
   input += synapse0x21f52f0();
   input += synapse0x21f5330();
   input += synapse0x21f5370();
   input += synapse0x21f53b0();
   input += synapse0x21f53f0();
   input += synapse0x21f5430();
   return input;
}

double NNfunction_ss_dRcR::neuron0x21fc920() {
   double input = input0x21fc920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x21f5470() {
   double input = -0.0870734;
   input += synapse0x21f57b0();
   input += synapse0x21f57f0();
   input += synapse0x21f5830();
   input += synapse0x21f5870();
   input += synapse0x21f58b0();
   input += synapse0x21f58f0();
   input += synapse0x21f5930();
   input += synapse0x21f5970();
   input += synapse0x21f59b0();
   input += synapse0x21f59f0();
   input += synapse0x21f5a30();
   input += synapse0x21f5a70();
   input += synapse0x21f5ab0();
   input += synapse0x21f5af0();
   input += synapse0x21f5b30();
   input += synapse0x21f5b70();
   input += synapse0x21f5600();
   input += synapse0x21f5640();
   input += synapse0x21f5cc0();
   input += synapse0x21f5d00();
   input += synapse0x21f5d40();
   input += synapse0x21f5d80();
   input += synapse0x21f5dc0();
   input += synapse0x21f5e00();
   return input;
}

double NNfunction_ss_dRcR::neuron0x21f5470() {
   double input = input0x21f5470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x21f5e40() {
   double input = -0.58012;
   input += synapse0x21f5fd0();
   input += synapse0x21ff060();
   input += synapse0x21ff0a0();
   input += synapse0x21ff0e0();
   input += synapse0x21ff120();
   input += synapse0x21ff160();
   input += synapse0x21ff1a0();
   input += synapse0x21ff1e0();
   input += synapse0x21ff220();
   input += synapse0x21ff260();
   input += synapse0x21ff2a0();
   input += synapse0x21ff2e0();
   input += synapse0x21ff320();
   input += synapse0x21ff360();
   input += synapse0x21ff3a0();
   input += synapse0x21ff3e0();
   input += synapse0x21feeb0();
   input += synapse0x21feef0();
   input += synapse0x21ff530();
   input += synapse0x21ff570();
   input += synapse0x21ff5b0();
   input += synapse0x21ff5f0();
   input += synapse0x21ff630();
   input += synapse0x21ff670();
   return input;
}

double NNfunction_ss_dRcR::neuron0x21f5e40() {
   double input = input0x21f5e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x21ff6b0() {
   double input = -1.90065;
   input += synapse0x21ff9f0();
   input += synapse0x21ffa30();
   input += synapse0x21ffa70();
   input += synapse0x21ffab0();
   input += synapse0x21ffaf0();
   input += synapse0x21ffb30();
   input += synapse0x21ffb70();
   input += synapse0x21ffbb0();
   input += synapse0x21ffbf0();
   input += synapse0x21ffc30();
   input += synapse0x21ffc70();
   input += synapse0x21ffcb0();
   input += synapse0x21ffcf0();
   input += synapse0x21ffd30();
   input += synapse0x21ffd70();
   input += synapse0x21ffdb0();
   input += synapse0x21ff840();
   input += synapse0x21ff880();
   input += synapse0x21fff00();
   input += synapse0x21fff40();
   input += synapse0x21fff80();
   input += synapse0x21fffc0();
   input += synapse0x2200000();
   input += synapse0x2200040();
   return input;
}

double NNfunction_ss_dRcR::neuron0x21ff6b0() {
   double input = input0x21ff6b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x2200080() {
   double input = 0.0426773;
   input += synapse0x22003c0();
   input += synapse0x2200400();
   input += synapse0x2200440();
   input += synapse0x2200480();
   input += synapse0x22004c0();
   input += synapse0x2200500();
   input += synapse0x2200540();
   input += synapse0x2200580();
   input += synapse0x22005c0();
   input += synapse0x2200600();
   input += synapse0x2200640();
   input += synapse0x2200680();
   input += synapse0x22006c0();
   input += synapse0x2200700();
   input += synapse0x2200740();
   input += synapse0x2200780();
   input += synapse0x2200210();
   input += synapse0x2200250();
   input += synapse0x22008d0();
   input += synapse0x2200910();
   input += synapse0x2200950();
   input += synapse0x2200990();
   input += synapse0x22009d0();
   input += synapse0x2200a10();
   return input;
}

double NNfunction_ss_dRcR::neuron0x2200080() {
   double input = input0x2200080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x2200a50() {
   double input = -0.196644;
   input += synapse0x2200d90();
   input += synapse0x2200dd0();
   input += synapse0x2200e10();
   input += synapse0x2200e50();
   input += synapse0x2200e90();
   input += synapse0x2200ed0();
   input += synapse0x2200f10();
   input += synapse0x2200f50();
   input += synapse0x2200f90();
   input += synapse0x2200fd0();
   input += synapse0x2201010();
   input += synapse0x2201050();
   input += synapse0x2201090();
   input += synapse0x22010d0();
   input += synapse0x2201110();
   input += synapse0x2201150();
   input += synapse0x2200be0();
   input += synapse0x2200c20();
   input += synapse0x22012a0();
   input += synapse0x22012e0();
   input += synapse0x2201320();
   input += synapse0x2201360();
   input += synapse0x22013a0();
   input += synapse0x22013e0();
   return input;
}

double NNfunction_ss_dRcR::neuron0x2200a50() {
   double input = input0x2200a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x2201420() {
   double input = 0.489215;
   input += synapse0x2201760();
   input += synapse0x22017a0();
   input += synapse0x22017e0();
   input += synapse0x2201820();
   input += synapse0x2201860();
   input += synapse0x22018a0();
   input += synapse0x22018e0();
   input += synapse0x2201920();
   input += synapse0x2201960();
   input += synapse0x22019a0();
   input += synapse0x22019e0();
   input += synapse0x2201a20();
   input += synapse0x2201a60();
   input += synapse0x2201aa0();
   input += synapse0x2201ae0();
   input += synapse0x2201b20();
   input += synapse0x22015b0();
   input += synapse0x22015f0();
   input += synapse0x2201c70();
   input += synapse0x2201cb0();
   input += synapse0x2201cf0();
   input += synapse0x2201d30();
   input += synapse0x2201d70();
   input += synapse0x2201db0();
   return input;
}

double NNfunction_ss_dRcR::neuron0x2201420() {
   double input = input0x2201420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x2201df0() {
   double input = 1.13835;
   input += synapse0x2202130();
   input += synapse0x2202170();
   input += synapse0x22021b0();
   input += synapse0x22021f0();
   input += synapse0x2202230();
   input += synapse0x2202270();
   input += synapse0x22022b0();
   input += synapse0x22022f0();
   input += synapse0x2202330();
   input += synapse0x2202370();
   input += synapse0x22023b0();
   input += synapse0x22023f0();
   input += synapse0x2202430();
   input += synapse0x2202470();
   input += synapse0x22024b0();
   input += synapse0x22024f0();
   input += synapse0x2201f80();
   input += synapse0x2201fc0();
   input += synapse0x2202640();
   input += synapse0x2202680();
   input += synapse0x22026c0();
   input += synapse0x2202700();
   input += synapse0x2202740();
   input += synapse0x2202780();
   return input;
}

double NNfunction_ss_dRcR::neuron0x2201df0() {
   double input = input0x2201df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x22027c0() {
   double input = 3.68372;
   input += synapse0x2202b00();
   input += synapse0x2202b40();
   input += synapse0x2202b80();
   input += synapse0x2202bc0();
   input += synapse0x2202c00();
   input += synapse0x2202c40();
   input += synapse0x2202c80();
   input += synapse0x2202cc0();
   input += synapse0x2202d00();
   input += synapse0x2202d40();
   input += synapse0x2202d80();
   input += synapse0x2202dc0();
   input += synapse0x2202e00();
   input += synapse0x2202e40();
   input += synapse0x2202e80();
   input += synapse0x2202ec0();
   input += synapse0x2202950();
   input += synapse0x2202990();
   input += synapse0x2203010();
   input += synapse0x2203050();
   input += synapse0x2203090();
   input += synapse0x22030d0();
   input += synapse0x2203110();
   input += synapse0x2203150();
   return input;
}

double NNfunction_ss_dRcR::neuron0x22027c0() {
   double input = input0x22027c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x2203190() {
   double input = -0.0238071;
   input += synapse0x22034d0();
   input += synapse0x2203510();
   input += synapse0x2203550();
   input += synapse0x2203590();
   input += synapse0x22035d0();
   input += synapse0x2203610();
   input += synapse0x2203650();
   input += synapse0x2203690();
   input += synapse0x22036d0();
   input += synapse0x2203710();
   input += synapse0x2203750();
   input += synapse0x2203790();
   input += synapse0x22037d0();
   input += synapse0x2203810();
   input += synapse0x2203850();
   input += synapse0x2203890();
   input += synapse0x2203320();
   input += synapse0x2203360();
   input += synapse0x22039e0();
   input += synapse0x2203a20();
   input += synapse0x2203a60();
   input += synapse0x2203aa0();
   input += synapse0x2203ae0();
   input += synapse0x2203b20();
   return input;
}

double NNfunction_ss_dRcR::neuron0x2203190() {
   double input = input0x2203190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x2203b60() {
   double input = 0.748263;
   input += synapse0x2203ea0();
   input += synapse0x21f8470();
   input += synapse0x21f84b0();
   input += synapse0x21f84f0();
   input += synapse0x21f8740();
   input += synapse0x21f8780();
   input += synapse0x21f87c0();
   input += synapse0x21f8a10();
   input += synapse0x21f8a50();
   input += synapse0x21f8ca0();
   input += synapse0x21f8ce0();
   input += synapse0x21f8d20();
   input += synapse0x21f8f70();
   input += synapse0x21f8fb0();
   input += synapse0x21f9200();
   input += synapse0x21f9240();
   input += synapse0x2203cf0();
   input += synapse0x2203d30();
   input += synapse0x21f9390();
   input += synapse0x21f98a0();
   input += synapse0x21f98e0();
   input += synapse0x21f9920();
   input += synapse0x21f9b70();
   input += synapse0x21f9bb0();
   return input;
}

double NNfunction_ss_dRcR::neuron0x2203b60() {
   double input = input0x2203b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x21f9bf0() {
   double input = 0.802746;
   input += synapse0x21f9460();
   input += synapse0x21f94a0();
   input += synapse0x21f94e0();
   input += synapse0x21f9520();
   input += synapse0x21f9ea0();
   input += synapse0x22061f0();
   input += synapse0x2206230();
   input += synapse0x2206270();
   input += synapse0x22062b0();
   input += synapse0x22062f0();
   input += synapse0x2206330();
   input += synapse0x2206370();
   input += synapse0x22063b0();
   input += synapse0x22063f0();
   input += synapse0x2206430();
   input += synapse0x2206470();
   input += synapse0x21f9d80();
   input += synapse0x21f9dc0();
   input += synapse0x22065c0();
   input += synapse0x2206600();
   input += synapse0x2206640();
   input += synapse0x2206680();
   input += synapse0x22066c0();
   input += synapse0x2206700();
   return input;
}

double NNfunction_ss_dRcR::neuron0x21f9bf0() {
   double input = input0x21f9bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x2206740() {
   double input = 0.786527;
   input += synapse0x2206a80();
   input += synapse0x2206ac0();
   input += synapse0x2206b00();
   input += synapse0x2206b40();
   input += synapse0x2206b80();
   input += synapse0x2206bc0();
   input += synapse0x2206c00();
   input += synapse0x2206c40();
   input += synapse0x2206c80();
   input += synapse0x2206cc0();
   input += synapse0x2206d00();
   input += synapse0x2206d40();
   input += synapse0x2206d80();
   input += synapse0x2206dc0();
   input += synapse0x2206e00();
   input += synapse0x2206e40();
   input += synapse0x22068d0();
   input += synapse0x2206910();
   input += synapse0x2206f90();
   input += synapse0x2206fd0();
   input += synapse0x2207010();
   input += synapse0x2207050();
   input += synapse0x2207090();
   input += synapse0x22070d0();
   return input;
}

double NNfunction_ss_dRcR::neuron0x2206740() {
   double input = input0x2206740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x2207110() {
   double input = 0.0531188;
   input += synapse0x2207450();
   input += synapse0x2207490();
   input += synapse0x22074d0();
   input += synapse0x2207510();
   input += synapse0x2207550();
   input += synapse0x2207590();
   input += synapse0x22075d0();
   input += synapse0x2207610();
   input += synapse0x2207650();
   input += synapse0x2207690();
   input += synapse0x22076d0();
   input += synapse0x2207710();
   input += synapse0x2207750();
   input += synapse0x2207790();
   input += synapse0x22077d0();
   input += synapse0x2207810();
   input += synapse0x22072a0();
   input += synapse0x22072e0();
   input += synapse0x2207960();
   input += synapse0x22079a0();
   input += synapse0x22079e0();
   input += synapse0x2207a20();
   input += synapse0x2207a60();
   input += synapse0x2207aa0();
   return input;
}

double NNfunction_ss_dRcR::neuron0x2207110() {
   double input = input0x2207110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x2207ae0() {
   double input = -0.55484;
   input += synapse0x2207e20();
   input += synapse0x2207e60();
   input += synapse0x2207ea0();
   input += synapse0x2207ee0();
   input += synapse0x2207f20();
   input += synapse0x2207f60();
   input += synapse0x2207fa0();
   input += synapse0x2207fe0();
   input += synapse0x2208020();
   input += synapse0x2208060();
   input += synapse0x22080a0();
   input += synapse0x22080e0();
   input += synapse0x2208120();
   input += synapse0x2208160();
   input += synapse0x22081a0();
   input += synapse0x22081e0();
   input += synapse0x2207c70();
   input += synapse0x2207cb0();
   input += synapse0x2208330();
   input += synapse0x2208370();
   input += synapse0x22083b0();
   input += synapse0x22083f0();
   input += synapse0x2208430();
   input += synapse0x2208470();
   return input;
}

double NNfunction_ss_dRcR::neuron0x2207ae0() {
   double input = input0x2207ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x22084b0() {
   double input = 0.383291;
   input += synapse0x22087f0();
   input += synapse0x2208830();
   input += synapse0x2208870();
   input += synapse0x22088b0();
   input += synapse0x22088f0();
   input += synapse0x2208930();
   input += synapse0x2208970();
   input += synapse0x22089b0();
   input += synapse0x22089f0();
   input += synapse0x2208a30();
   input += synapse0x2208a70();
   input += synapse0x2208ab0();
   input += synapse0x2208af0();
   input += synapse0x2208b30();
   input += synapse0x2208b70();
   input += synapse0x2208bb0();
   input += synapse0x2208640();
   input += synapse0x2208680();
   input += synapse0x2208d00();
   input += synapse0x2208d40();
   input += synapse0x2208d80();
   input += synapse0x2208dc0();
   input += synapse0x2208e00();
   input += synapse0x2208e40();
   return input;
}

double NNfunction_ss_dRcR::neuron0x22084b0() {
   double input = input0x22084b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x2208e80() {
   double input = -0.520467;
   input += synapse0x22091c0();
   input += synapse0x2209200();
   input += synapse0x2209240();
   input += synapse0x2209280();
   input += synapse0x22092c0();
   input += synapse0x2209300();
   input += synapse0x2209340();
   input += synapse0x2209380();
   input += synapse0x22093c0();
   input += synapse0x2209400();
   input += synapse0x2209440();
   input += synapse0x2209480();
   input += synapse0x22094c0();
   input += synapse0x2209500();
   input += synapse0x2209540();
   input += synapse0x2209580();
   input += synapse0x2209010();
   input += synapse0x2209050();
   input += synapse0x22096d0();
   input += synapse0x2209710();
   input += synapse0x2209750();
   input += synapse0x2209790();
   input += synapse0x22097d0();
   input += synapse0x2209810();
   return input;
}

double NNfunction_ss_dRcR::neuron0x2208e80() {
   double input = input0x2208e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x2209850() {
   double input = 0.437527;
   input += synapse0x2209b90();
   input += synapse0x2209bd0();
   input += synapse0x2209c10();
   input += synapse0x2209c50();
   input += synapse0x2209c90();
   input += synapse0x2209cd0();
   input += synapse0x2209d10();
   input += synapse0x2209d50();
   input += synapse0x2209d90();
   input += synapse0x2209dd0();
   input += synapse0x2209e10();
   input += synapse0x2209e50();
   input += synapse0x2209e90();
   input += synapse0x2209ed0();
   input += synapse0x2209f10();
   input += synapse0x2209f50();
   input += synapse0x22099e0();
   input += synapse0x2209a20();
   input += synapse0x220a0a0();
   input += synapse0x220a0e0();
   input += synapse0x220a120();
   input += synapse0x220a160();
   input += synapse0x220a1a0();
   input += synapse0x220a1e0();
   return input;
}

double NNfunction_ss_dRcR::neuron0x2209850() {
   double input = input0x2209850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x220a220() {
   double input = 0.422146;
   input += synapse0x220a560();
   input += synapse0x220a5a0();
   input += synapse0x220a5e0();
   input += synapse0x220a620();
   input += synapse0x220a660();
   input += synapse0x220a6a0();
   input += synapse0x220a6e0();
   input += synapse0x220a720();
   input += synapse0x220a760();
   input += synapse0x220a7a0();
   input += synapse0x220a7e0();
   input += synapse0x220a820();
   input += synapse0x220a860();
   input += synapse0x220a8a0();
   input += synapse0x220a8e0();
   input += synapse0x220a920();
   input += synapse0x220a3b0();
   input += synapse0x220a3f0();
   input += synapse0x220aa70();
   input += synapse0x220aab0();
   input += synapse0x220aaf0();
   input += synapse0x220ab30();
   input += synapse0x220ab70();
   input += synapse0x220abb0();
   return input;
}

double NNfunction_ss_dRcR::neuron0x220a220() {
   double input = input0x220a220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x220abf0() {
   double input = 1.13726;
   input += synapse0x21f3660();
   input += synapse0x21f36a0();
   input += synapse0x21f36e0();
   input += synapse0x21f3720();
   input += synapse0x21f3760();
   input += synapse0x21f37a0();
   input += synapse0x21f37e0();
   input += synapse0x21f3820();
   input += synapse0x220b340();
   input += synapse0x220b380();
   input += synapse0x220b3c0();
   input += synapse0x220b400();
   input += synapse0x220b440();
   input += synapse0x220b480();
   input += synapse0x220b4c0();
   input += synapse0x220b500();
   input += synapse0x220ad80();
   input += synapse0x220adc0();
   input += synapse0x220b650();
   input += synapse0x220b690();
   input += synapse0x220b6d0();
   input += synapse0x220b710();
   input += synapse0x220b750();
   input += synapse0x220b790();
   return input;
}

double NNfunction_ss_dRcR::neuron0x220abf0() {
   double input = input0x220abf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x220b7d0() {
   double input = 1.17627;
   input += synapse0x220bb10();
   input += synapse0x220bb50();
   input += synapse0x220bb90();
   input += synapse0x220bbd0();
   input += synapse0x220bc10();
   input += synapse0x220bc50();
   input += synapse0x220bc90();
   input += synapse0x220bcd0();
   input += synapse0x220bd10();
   input += synapse0x220bd50();
   input += synapse0x220bd90();
   input += synapse0x220bdd0();
   input += synapse0x220be10();
   input += synapse0x220be50();
   input += synapse0x220be90();
   input += synapse0x220bed0();
   input += synapse0x220b960();
   input += synapse0x220b9a0();
   input += synapse0x220c020();
   input += synapse0x220c060();
   input += synapse0x220c0a0();
   input += synapse0x220c0e0();
   input += synapse0x220c120();
   input += synapse0x220c160();
   return input;
}

double NNfunction_ss_dRcR::neuron0x220b7d0() {
   double input = input0x220b7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x220c1a0() {
   double input = -0.924444;
   input += synapse0x220c4e0();
   input += synapse0x220c520();
   input += synapse0x220c560();
   input += synapse0x220c5a0();
   input += synapse0x220c5e0();
   input += synapse0x220c620();
   input += synapse0x220c660();
   input += synapse0x220c6a0();
   input += synapse0x220c6e0();
   input += synapse0x220c720();
   input += synapse0x220c760();
   input += synapse0x220c7a0();
   input += synapse0x220c7e0();
   input += synapse0x220c820();
   input += synapse0x220c860();
   input += synapse0x220c8a0();
   input += synapse0x220c330();
   input += synapse0x220c370();
   input += synapse0x21fcea0();
   input += synapse0x21fcee0();
   input += synapse0x21fcf20();
   input += synapse0x21fcf60();
   input += synapse0x21fcfa0();
   input += synapse0x21fcfe0();
   return input;
}

double NNfunction_ss_dRcR::neuron0x220c1a0() {
   double input = input0x220c1a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x21fd020() {
   double input = -0.231743;
   input += synapse0x21fd360();
   input += synapse0x21fd3a0();
   input += synapse0x21fd3e0();
   input += synapse0x21fd420();
   input += synapse0x21fd460();
   input += synapse0x21fd4a0();
   input += synapse0x21fd4e0();
   input += synapse0x21fd520();
   input += synapse0x21fd560();
   input += synapse0x21fd5a0();
   input += synapse0x21fd5e0();
   input += synapse0x21fd620();
   input += synapse0x21fd660();
   input += synapse0x21fd6a0();
   input += synapse0x21fd6e0();
   input += synapse0x21fd720();
   input += synapse0x21fd1b0();
   input += synapse0x21fd1f0();
   input += synapse0x21fd870();
   input += synapse0x21fd8b0();
   input += synapse0x21fd8f0();
   input += synapse0x21fd930();
   input += synapse0x21fd970();
   input += synapse0x21fd9b0();
   return input;
}

double NNfunction_ss_dRcR::neuron0x21fd020() {
   double input = input0x21fd020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x21fd9f0() {
   double input = 0.41447;
   input += synapse0x21fdd30();
   input += synapse0x21fdd70();
   input += synapse0x21fddb0();
   input += synapse0x21fddf0();
   input += synapse0x21fde30();
   input += synapse0x21fde70();
   input += synapse0x21fdeb0();
   input += synapse0x21fdef0();
   input += synapse0x21fdf30();
   input += synapse0x21fdf70();
   input += synapse0x21fdfb0();
   input += synapse0x21fdff0();
   input += synapse0x21fe030();
   input += synapse0x21fe070();
   input += synapse0x21fe0b0();
   input += synapse0x21fe0f0();
   input += synapse0x21fdb80();
   input += synapse0x21fdbc0();
   input += synapse0x21fe240();
   input += synapse0x21fe280();
   input += synapse0x21fe2c0();
   input += synapse0x21fe300();
   input += synapse0x21fe340();
   input += synapse0x21fe380();
   return input;
}

double NNfunction_ss_dRcR::neuron0x21fd9f0() {
   double input = input0x21fd9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x21fe3c0() {
   double input = 0.861111;
   input += synapse0x21fe700();
   input += synapse0x21fe740();
   input += synapse0x21fe780();
   input += synapse0x21fe7c0();
   input += synapse0x21fe800();
   input += synapse0x21fe840();
   input += synapse0x21fe880();
   input += synapse0x21fe8c0();
   input += synapse0x21fe900();
   input += synapse0x21fe940();
   input += synapse0x21fe980();
   input += synapse0x21fe9c0();
   input += synapse0x21fea00();
   input += synapse0x21fea40();
   input += synapse0x21fea80();
   input += synapse0x21feac0();
   input += synapse0x21fe550();
   input += synapse0x21fe590();
   input += synapse0x21fec10();
   input += synapse0x21fec50();
   input += synapse0x21fec90();
   input += synapse0x21fecd0();
   input += synapse0x21fed10();
   input += synapse0x21fed50();
   return input;
}

double NNfunction_ss_dRcR::neuron0x21fe3c0() {
   double input = input0x21fe3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x2210a00() {
   double input = 0.20848;
   input += synapse0x2210c20();
   input += synapse0x2210c60();
   input += synapse0x2210ca0();
   input += synapse0x2210ce0();
   input += synapse0x2210d20();
   input += synapse0x2210d60();
   input += synapse0x2210da0();
   input += synapse0x2210de0();
   input += synapse0x2210e20();
   input += synapse0x2210e60();
   input += synapse0x2210ea0();
   input += synapse0x2210ee0();
   input += synapse0x2210f20();
   input += synapse0x2210f60();
   input += synapse0x2210fa0();
   input += synapse0x2210fe0();
   input += synapse0x21fed90();
   input += synapse0x21fedd0();
   input += synapse0x2211130();
   input += synapse0x2211170();
   input += synapse0x22111b0();
   input += synapse0x22111f0();
   input += synapse0x2211230();
   input += synapse0x2211270();
   return input;
}

double NNfunction_ss_dRcR::neuron0x2210a00() {
   double input = input0x2210a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x22112b0() {
   double input = 0.244697;
   input += synapse0x22115f0();
   input += synapse0x2211630();
   input += synapse0x2211670();
   input += synapse0x22116b0();
   input += synapse0x22116f0();
   input += synapse0x2211730();
   input += synapse0x2211770();
   input += synapse0x22117b0();
   input += synapse0x22117f0();
   input += synapse0x2211830();
   input += synapse0x2211870();
   input += synapse0x22118b0();
   input += synapse0x22118f0();
   input += synapse0x2211930();
   input += synapse0x2211970();
   input += synapse0x22119b0();
   input += synapse0x2211440();
   input += synapse0x2211480();
   input += synapse0x2211b00();
   input += synapse0x2211b40();
   input += synapse0x2211b80();
   input += synapse0x2211bc0();
   input += synapse0x2211c00();
   input += synapse0x2211c40();
   return input;
}

double NNfunction_ss_dRcR::neuron0x22112b0() {
   double input = input0x22112b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x2211c80() {
   double input = 2.96959;
   input += synapse0x2211fc0();
   input += synapse0x2212000();
   input += synapse0x2212040();
   input += synapse0x2212080();
   input += synapse0x22120c0();
   input += synapse0x2212100();
   input += synapse0x2212140();
   input += synapse0x2212180();
   input += synapse0x22121c0();
   input += synapse0x2212200();
   input += synapse0x2212240();
   input += synapse0x2212280();
   input += synapse0x22122c0();
   input += synapse0x2212300();
   input += synapse0x2212340();
   input += synapse0x2212380();
   input += synapse0x2211e10();
   input += synapse0x2211e50();
   input += synapse0x22124d0();
   input += synapse0x2212510();
   input += synapse0x2212550();
   input += synapse0x2212590();
   input += synapse0x22125d0();
   input += synapse0x2212610();
   return input;
}

double NNfunction_ss_dRcR::neuron0x2211c80() {
   double input = input0x2211c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x2212650() {
   double input = -0.713827;
   input += synapse0x2212990();
   input += synapse0x22129d0();
   input += synapse0x2212a10();
   input += synapse0x2212a50();
   input += synapse0x2212a90();
   input += synapse0x2212ad0();
   input += synapse0x2212b10();
   input += synapse0x2212b50();
   input += synapse0x2212b90();
   input += synapse0x2212bd0();
   input += synapse0x2212c10();
   input += synapse0x2212c50();
   input += synapse0x2212c90();
   input += synapse0x2212cd0();
   input += synapse0x2212d10();
   input += synapse0x2212d50();
   input += synapse0x22127e0();
   input += synapse0x2212820();
   input += synapse0x2212ea0();
   input += synapse0x2212ee0();
   input += synapse0x2212f20();
   input += synapse0x2212f60();
   input += synapse0x2212fa0();
   input += synapse0x2212fe0();
   return input;
}

double NNfunction_ss_dRcR::neuron0x2212650() {
   double input = input0x2212650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x2219850() {
   double input = -0.328924;
   input += synapse0x21ef580();
   input += synapse0x21ef5c0();
   input += synapse0x21f0a90();
   input += synapse0x21f0ad0();
   input += synapse0x21f1460();
   input += synapse0x21f14a0();
   input += synapse0x21f2230();
   input += synapse0x21f2270();
   input += synapse0x21f2c00();
   input += synapse0x21f2c40();
   input += synapse0x21f35d0();
   input += synapse0x21f3610();
   input += synapse0x21f40b0();
   input += synapse0x21f40f0();
   input += synapse0x21f4a80();
   input += synapse0x21f4ac0();
   input += synapse0x21f1b60();
   input += synapse0x21f1ba0();
   input += synapse0x21f6630();
   input += synapse0x21f6670();
   input += synapse0x21f7000();
   input += synapse0x21f7040();
   input += synapse0x21f79d0();
   input += synapse0x21f7a10();
   input += synapse0x21f83a0();
   input += synapse0x21f83e0();
   input += synapse0x21ec510();
   input += synapse0x21ec550();
   input += synapse0x21fa490();
   input += synapse0x21fa4d0();
   input += synapse0x21fae60();
   input += synapse0x21faea0();
   input += synapse0x21fb830();
   input += synapse0x21fb870();
   input += synapse0x21fc200();
   input += synapse0x21fc240();
   input += synapse0x21fcbd0();
   input += synapse0x21fcc10();
   input += synapse0x21f5720();
   input += synapse0x21f5760();
   input += synapse0x21fefd0();
   input += synapse0x21ff010();
   input += synapse0x21ff960();
   input += synapse0x21ff9a0();
   input += synapse0x2200330();
   input += synapse0x2200370();
   input += synapse0x2200d00();
   input += synapse0x2200d40();
   input += synapse0x22016d0();
   input += synapse0x2201710();
   return input;
}

double NNfunction_ss_dRcR::neuron0x2219850() {
   double input = input0x2219850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x2219bf0() {
   double input = -0.225079;
   input += synapse0x2203e10();
   input += synapse0x2203e50();
   input += synapse0x21f93d0();
   input += synapse0x21f9410();
   input += synapse0x22069f0();
   input += synapse0x2206a30();
   input += synapse0x22073c0();
   input += synapse0x2207400();
   input += synapse0x2207d90();
   input += synapse0x2207dd0();
   input += synapse0x2208760();
   input += synapse0x22087a0();
   input += synapse0x2209130();
   input += synapse0x2209170();
   input += synapse0x2209b00();
   input += synapse0x2209b40();
   input += synapse0x220a4d0();
   input += synapse0x220a510();
   input += synapse0x220aea0();
   input += synapse0x220aee0();
   input += synapse0x220ba80();
   input += synapse0x220bac0();
   input += synapse0x220c450();
   input += synapse0x220c490();
   input += synapse0x21fd2d0();
   input += synapse0x21fd310();
   input += synapse0x21fdca0();
   input += synapse0x21fdce0();
   input += synapse0x21fe670();
   input += synapse0x21fe6b0();
   input += synapse0x2210b90();
   input += synapse0x2210bd0();
   input += synapse0x2211560();
   input += synapse0x22115a0();
   input += synapse0x2211f30();
   input += synapse0x2211f70();
   input += synapse0x2212900();
   input += synapse0x2212940();
   input += synapse0x21ee7f0();
   input += synapse0x21ee830();
   input += synapse0x22020a0();
   input += synapse0x22020e0();
   input += synapse0x2213020();
   input += synapse0x2213060();
   input += synapse0x22130a0();
   input += synapse0x22130e0();
   input += synapse0x2219f90();
   input += synapse0x2219fd0();
   input += synapse0x221a010();
   input += synapse0x221a050();
   return input;
}

double NNfunction_ss_dRcR::neuron0x2219bf0() {
   double input = input0x2219bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x221a090() {
   double input = 0.559326;
   input += synapse0x221a3d0();
   input += synapse0x221a410();
   input += synapse0x221a450();
   input += synapse0x221a490();
   input += synapse0x221a4d0();
   input += synapse0x221a510();
   input += synapse0x221a550();
   input += synapse0x221a590();
   input += synapse0x221a5d0();
   input += synapse0x221a610();
   input += synapse0x221a650();
   input += synapse0x221a690();
   input += synapse0x221a6d0();
   input += synapse0x221a710();
   input += synapse0x221a750();
   input += synapse0x221a790();
   input += synapse0x221a220();
   input += synapse0x221a260();
   input += synapse0x221a8e0();
   input += synapse0x221a920();
   input += synapse0x221a960();
   input += synapse0x221a9a0();
   input += synapse0x221a9e0();
   input += synapse0x221aa20();
   input += synapse0x221aa60();
   input += synapse0x221aaa0();
   input += synapse0x221aae0();
   input += synapse0x221ab20();
   input += synapse0x221ab60();
   input += synapse0x221aba0();
   input += synapse0x221abe0();
   input += synapse0x221ac20();
   input += synapse0x221a7d0();
   input += synapse0x221a810();
   input += synapse0x221a850();
   input += synapse0x221a890();
   input += synapse0x221ae70();
   input += synapse0x221aeb0();
   input += synapse0x221aef0();
   input += synapse0x221af30();
   input += synapse0x221af70();
   input += synapse0x221afb0();
   input += synapse0x221aff0();
   input += synapse0x221b030();
   input += synapse0x221b070();
   input += synapse0x221b0b0();
   input += synapse0x221b0f0();
   input += synapse0x221b130();
   input += synapse0x221b170();
   input += synapse0x221b1b0();
   return input;
}

double NNfunction_ss_dRcR::neuron0x221a090() {
   double input = input0x221a090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x221b1f0() {
   double input = 0.160585;
   input += synapse0x221b530();
   input += synapse0x221b570();
   input += synapse0x221b5b0();
   input += synapse0x221b5f0();
   input += synapse0x221b630();
   input += synapse0x221b670();
   input += synapse0x221b6b0();
   input += synapse0x221b6f0();
   input += synapse0x221b730();
   input += synapse0x221b770();
   input += synapse0x221b7b0();
   input += synapse0x221b7f0();
   input += synapse0x221b830();
   input += synapse0x221b870();
   input += synapse0x221b8b0();
   input += synapse0x221b8f0();
   input += synapse0x221b380();
   input += synapse0x221b3c0();
   input += synapse0x221ba40();
   input += synapse0x221ba80();
   input += synapse0x221bac0();
   input += synapse0x221bb00();
   input += synapse0x221bb40();
   input += synapse0x221bb80();
   input += synapse0x221bbc0();
   input += synapse0x221bc00();
   input += synapse0x221bc40();
   input += synapse0x221bc80();
   input += synapse0x221bcc0();
   input += synapse0x221bd00();
   input += synapse0x221bd40();
   input += synapse0x221bd80();
   input += synapse0x221b930();
   input += synapse0x221b970();
   input += synapse0x221b9b0();
   input += synapse0x221b9f0();
   input += synapse0x221bfd0();
   input += synapse0x221c010();
   input += synapse0x221c050();
   input += synapse0x221c090();
   input += synapse0x221c0d0();
   input += synapse0x221c110();
   input += synapse0x221c150();
   input += synapse0x221c190();
   input += synapse0x221c1d0();
   input += synapse0x221c210();
   input += synapse0x221c250();
   input += synapse0x221c290();
   input += synapse0x221c2d0();
   input += synapse0x221c310();
   return input;
}

double NNfunction_ss_dRcR::neuron0x221b1f0() {
   double input = input0x221b1f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x221c350() {
   double input = 0.22238;
   input += synapse0x221c690();
   input += synapse0x221c6d0();
   input += synapse0x221c710();
   input += synapse0x221c750();
   input += synapse0x221c790();
   input += synapse0x221c7d0();
   input += synapse0x221c810();
   input += synapse0x221c850();
   input += synapse0x221c890();
   input += synapse0x221c8d0();
   input += synapse0x221c910();
   input += synapse0x221c950();
   input += synapse0x221c990();
   input += synapse0x221c9d0();
   input += synapse0x221ca10();
   input += synapse0x221ca50();
   input += synapse0x221c4e0();
   input += synapse0x221c520();
   input += synapse0x221cba0();
   input += synapse0x221cbe0();
   input += synapse0x221cc20();
   input += synapse0x221cc60();
   input += synapse0x221cca0();
   input += synapse0x221cce0();
   input += synapse0x221cd20();
   input += synapse0x221cd60();
   input += synapse0x221cda0();
   input += synapse0x221cde0();
   input += synapse0x221ce20();
   input += synapse0x221ce60();
   input += synapse0x221cea0();
   input += synapse0x221cee0();
   input += synapse0x221ca90();
   input += synapse0x221cad0();
   input += synapse0x221cb10();
   input += synapse0x221cb50();
   input += synapse0x221d130();
   input += synapse0x221d170();
   input += synapse0x221d1b0();
   input += synapse0x221d1f0();
   input += synapse0x221d230();
   input += synapse0x221d270();
   input += synapse0x221d2b0();
   input += synapse0x221d2f0();
   input += synapse0x221d330();
   input += synapse0x221d370();
   input += synapse0x221d3b0();
   input += synapse0x221d3f0();
   input += synapse0x221d430();
   input += synapse0x221d470();
   return input;
}

double NNfunction_ss_dRcR::neuron0x221c350() {
   double input = input0x221c350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRcR::input0x221d4b0() {
   double input = 7.28069;
   input += synapse0x21ee590();
   input += synapse0x221d6d0();
   input += synapse0x221d710();
   input += synapse0x221d750();
   input += synapse0x221d790();
   return input;
}

double NNfunction_ss_dRcR::neuron0x221d4b0() {
   double input = input0x221d4b0();
   return (input * 1)+0;
}

double NNfunction_ss_dRcR::synapse0x1fa93e0() {
   return (neuron0x21e9570()*-0.142436);
}

double NNfunction_ss_dRcR::synapse0x21e9430() {
   return (neuron0x21e98b0()*0.0120257);
}

double NNfunction_ss_dRcR::synapse0x21e9470() {
   return (neuron0x21e9bf0()*0.0581403);
}

double NNfunction_ss_dRcR::synapse0x21ee880() {
   return (neuron0x21e9f30()*-0.309605);
}

double NNfunction_ss_dRcR::synapse0x21ee8c0() {
   return (neuron0x21ea270()*-0.138521);
}

double NNfunction_ss_dRcR::synapse0x21ee900() {
   return (neuron0x21ea5b0()*0.0421375);
}

double NNfunction_ss_dRcR::synapse0x21ee940() {
   return (neuron0x21ea8f0()*0.107083);
}

double NNfunction_ss_dRcR::synapse0x21ee980() {
   return (neuron0x21eac30()*0.0032377);
}

double NNfunction_ss_dRcR::synapse0x21ee9c0() {
   return (neuron0x21eaf70()*-0.143706);
}

double NNfunction_ss_dRcR::synapse0x21eea00() {
   return (neuron0x21eb2b0()*0.113724);
}

double NNfunction_ss_dRcR::synapse0x21eea40() {
   return (neuron0x21eb5f0()*-0.00873944);
}

double NNfunction_ss_dRcR::synapse0x21eea80() {
   return (neuron0x21eb930()*-0.189873);
}

double NNfunction_ss_dRcR::synapse0x21eeac0() {
   return (neuron0x21ebc70()*-0.713871);
}

double NNfunction_ss_dRcR::synapse0x21eeb00() {
   return (neuron0x21ebfb0()*0.324064);
}

double NNfunction_ss_dRcR::synapse0x21eeb40() {
   return (neuron0x21ec2f0()*-0.157201);
}

double NNfunction_ss_dRcR::synapse0x21eeb80() {
   return (neuron0x21ec630()*-0.0677738);
}

double NNfunction_ss_dRcR::synapse0x21e93a0() {
   return (neuron0x21ec970()*0.354364);
}

double NNfunction_ss_dRcR::synapse0x21e93e0() {
   return (neuron0x21eced0()*0.0919661);
}

double NNfunction_ss_dRcR::synapse0x1f9ac80() {
   return (neuron0x21ed0f0()*-0.0389612);
}

double NNfunction_ss_dRcR::synapse0x1f9acc0() {
   return (neuron0x21ed430()*0.21041);
}

double NNfunction_ss_dRcR::synapse0x21eede0() {
   return (neuron0x21ed770()*0.110464);
}

double NNfunction_ss_dRcR::synapse0x21eee20() {
   return (neuron0x21edab0()*-0.161373);
}

double NNfunction_ss_dRcR::synapse0x21eee60() {
   return (neuron0x21eddf0()*-0.021592);
}

double NNfunction_ss_dRcR::synapse0x21eeea0() {
   return (neuron0x21ee130()*0.0645836);
}

double NNfunction_ss_dRcR::synapse0x21ef220() {
   return (neuron0x21e9570()*-0.00299775);
}

double NNfunction_ss_dRcR::synapse0x21ef260() {
   return (neuron0x21e98b0()*-0.0324811);
}

double NNfunction_ss_dRcR::synapse0x21ef2a0() {
   return (neuron0x21e9bf0()*0.0124559);
}

double NNfunction_ss_dRcR::synapse0x21ef2e0() {
   return (neuron0x21e9f30()*0.599052);
}

double NNfunction_ss_dRcR::synapse0x21ef320() {
   return (neuron0x21ea270()*0.018381);
}

double NNfunction_ss_dRcR::synapse0x21ef360() {
   return (neuron0x21ea5b0()*-0.00888747);
}

double NNfunction_ss_dRcR::synapse0x21ef3a0() {
   return (neuron0x21ea8f0()*0.0254761);
}

double NNfunction_ss_dRcR::synapse0x21ef3e0() {
   return (neuron0x21eac30()*-0.0048339);
}

double NNfunction_ss_dRcR::synapse0x21ef420() {
   return (neuron0x21eaf70()*-0.0268781);
}

double NNfunction_ss_dRcR::synapse0x21eecd0() {
   return (neuron0x21eb2b0()*-0.0352125);
}

double NNfunction_ss_dRcR::synapse0x21eed10() {
   return (neuron0x21eb5f0()*0.0468128);
}

double NNfunction_ss_dRcR::synapse0x21eed50() {
   return (neuron0x21eb930()*-0.0150271);
}

double NNfunction_ss_dRcR::synapse0x21eed90() {
   return (neuron0x21ebc70()*-0.0550497);
}

double NNfunction_ss_dRcR::synapse0x21ef670() {
   return (neuron0x21ebfb0()*-0.0478704);
}

double NNfunction_ss_dRcR::synapse0x21ef6b0() {
   return (neuron0x21ec2f0()*0.0226548);
}

double NNfunction_ss_dRcR::synapse0x21ef6f0() {
   return (neuron0x21ec630()*-0.224362);
}

double NNfunction_ss_dRcR::synapse0x21ef070() {
   return (neuron0x21ec970()*-0.0209847);
}

double NNfunction_ss_dRcR::synapse0x21ef0b0() {
   return (neuron0x21eced0()*0.102737);
}

double NNfunction_ss_dRcR::synapse0x21ef840() {
   return (neuron0x21ed0f0()*-0.00846433);
}

double NNfunction_ss_dRcR::synapse0x21ef880() {
   return (neuron0x21ed430()*0.0399286);
}

double NNfunction_ss_dRcR::synapse0x21ef8c0() {
   return (neuron0x21ed770()*-0.0178918);
}

double NNfunction_ss_dRcR::synapse0x21ef900() {
   return (neuron0x21edab0()*0.00633613);
}

double NNfunction_ss_dRcR::synapse0x21ef940() {
   return (neuron0x21eddf0()*-0.0191312);
}

double NNfunction_ss_dRcR::synapse0x21ef980() {
   return (neuron0x21ee130()*0.041633);
}

double NNfunction_ss_dRcR::synapse0x21efd00() {
   return (neuron0x21e9570()*-0.0159254);
}

double NNfunction_ss_dRcR::synapse0x21efd40() {
   return (neuron0x21e98b0()*0.0134079);
}

double NNfunction_ss_dRcR::synapse0x21efd80() {
   return (neuron0x21e9bf0()*0.0005667);
}

double NNfunction_ss_dRcR::synapse0x21efdc0() {
   return (neuron0x21e9f30()*-3.49256);
}

double NNfunction_ss_dRcR::synapse0x21efe00() {
   return (neuron0x21ea270()*0.0286331);
}

double NNfunction_ss_dRcR::synapse0x21efe40() {
   return (neuron0x21ea5b0()*0.0146519);
}

double NNfunction_ss_dRcR::synapse0x21efe80() {
   return (neuron0x21ea8f0()*0.0491019);
}

double NNfunction_ss_dRcR::synapse0x21efec0() {
   return (neuron0x21eac30()*0.065329);
}

double NNfunction_ss_dRcR::synapse0x21eff00() {
   return (neuron0x21eaf70()*-0.0267064);
}

double NNfunction_ss_dRcR::synapse0x21eff40() {
   return (neuron0x21eb2b0()*-0.00110453);
}

double NNfunction_ss_dRcR::synapse0x21eff80() {
   return (neuron0x21eb5f0()*-0.045859);
}

double NNfunction_ss_dRcR::synapse0x21effc0() {
   return (neuron0x21eb930()*0.0230024);
}

double NNfunction_ss_dRcR::synapse0x21f0000() {
   return (neuron0x21ebc70()*-0.0106623);
}

double NNfunction_ss_dRcR::synapse0x21f0040() {
   return (neuron0x21ebfb0()*0.0345769);
}

double NNfunction_ss_dRcR::synapse0x21f0080() {
   return (neuron0x21ec2f0()*0.0573995);
}

double NNfunction_ss_dRcR::synapse0x21f00c0() {
   return (neuron0x21ec630()*0.34549);
}

double NNfunction_ss_dRcR::synapse0x21efb50() {
   return (neuron0x21ec970()*-0.0453016);
}

double NNfunction_ss_dRcR::synapse0x21efb90() {
   return (neuron0x21eced0()*-1.62801);
}

double NNfunction_ss_dRcR::synapse0x1fa8ad0() {
   return (neuron0x21ed0f0()*-0.0412924);
}

double NNfunction_ss_dRcR::synapse0x1fa8b10() {
   return (neuron0x21ed430()*-0.0113013);
}

double NNfunction_ss_dRcR::synapse0x21d8600() {
   return (neuron0x21ed770()*0.00804268);
}

double NNfunction_ss_dRcR::synapse0x21d8640() {
   return (neuron0x21edab0()*-0.00733264);
}

double NNfunction_ss_dRcR::synapse0x21d8680() {
   return (neuron0x21eddf0()*-0.00928411);
}

double NNfunction_ss_dRcR::synapse0x21e94b0() {
   return (neuron0x21ee130()*-0.0428104);
}

double NNfunction_ss_dRcR::synapse0x21ef610() {
   return (neuron0x21e9570()*0.0848744);
}

double NNfunction_ss_dRcR::synapse0x21e94f0() {
   return (neuron0x21e98b0()*0.413355);
}

double NNfunction_ss_dRcR::synapse0x21e9530() {
   return (neuron0x21e9bf0()*0.0459205);
}

double NNfunction_ss_dRcR::synapse0x21f0210() {
   return (neuron0x21e9f30()*1.62438);
}

double NNfunction_ss_dRcR::synapse0x21f0250() {
   return (neuron0x21ea270()*-0.833842);
}

double NNfunction_ss_dRcR::synapse0x21f0290() {
   return (neuron0x21ea5b0()*0.158415);
}

double NNfunction_ss_dRcR::synapse0x21f02d0() {
   return (neuron0x21ea8f0()*-0.16419);
}

double NNfunction_ss_dRcR::synapse0x21f0310() {
   return (neuron0x21eac30()*0.311407);
}

double NNfunction_ss_dRcR::synapse0x21f0350() {
   return (neuron0x21eaf70()*0.314151);
}

double NNfunction_ss_dRcR::synapse0x21f0390() {
   return (neuron0x21eb2b0()*-0.667295);
}

double NNfunction_ss_dRcR::synapse0x21f03d0() {
   return (neuron0x21eb5f0()*0.41797);
}

double NNfunction_ss_dRcR::synapse0x21f0410() {
   return (neuron0x21eb930()*-0.179293);
}

double NNfunction_ss_dRcR::synapse0x21f0450() {
   return (neuron0x21ebc70()*0.104968);
}

double NNfunction_ss_dRcR::synapse0x21f0490() {
   return (neuron0x21ebfb0()*0.0302442);
}

double NNfunction_ss_dRcR::synapse0x21f04d0() {
   return (neuron0x21ec2f0()*-0.188044);
}

double NNfunction_ss_dRcR::synapse0x21f0510() {
   return (neuron0x21ec630()*0.720693);
}

double NNfunction_ss_dRcR::synapse0x21ef460() {
   return (neuron0x21ec970()*0.0284769);
}

double NNfunction_ss_dRcR::synapse0x21ef4a0() {
   return (neuron0x21eced0()*0.249256);
}

double NNfunction_ss_dRcR::synapse0x21f0660() {
   return (neuron0x21ed0f0()*0.464588);
}

double NNfunction_ss_dRcR::synapse0x21f06a0() {
   return (neuron0x21ed430()*0.21465);
}

double NNfunction_ss_dRcR::synapse0x21f06e0() {
   return (neuron0x21ed770()*-0.223544);
}

double NNfunction_ss_dRcR::synapse0x21f0720() {
   return (neuron0x21edab0()*0.14698);
}

double NNfunction_ss_dRcR::synapse0x21f0760() {
   return (neuron0x21eddf0()*0.0327268);
}

double NNfunction_ss_dRcR::synapse0x21f07a0() {
   return (neuron0x21ee130()*0.0630732);
}

double NNfunction_ss_dRcR::synapse0x21f0b20() {
   return (neuron0x21e9570()*-0.254782);
}

double NNfunction_ss_dRcR::synapse0x21f0b60() {
   return (neuron0x21e98b0()*0.134338);
}

double NNfunction_ss_dRcR::synapse0x21f0ba0() {
   return (neuron0x21e9bf0()*0.663041);
}

double NNfunction_ss_dRcR::synapse0x21f0be0() {
   return (neuron0x21e9f30()*-0.583233);
}

double NNfunction_ss_dRcR::synapse0x21f0c20() {
   return (neuron0x21ea270()*0.606107);
}

double NNfunction_ss_dRcR::synapse0x21f0c60() {
   return (neuron0x21ea5b0()*-0.669234);
}

double NNfunction_ss_dRcR::synapse0x21f0ca0() {
   return (neuron0x21ea8f0()*0.144853);
}

double NNfunction_ss_dRcR::synapse0x21f0ce0() {
   return (neuron0x21eac30()*-0.0604446);
}

double NNfunction_ss_dRcR::synapse0x21f0d20() {
   return (neuron0x21eaf70()*-0.539487);
}

double NNfunction_ss_dRcR::synapse0x21f0d60() {
   return (neuron0x21eb2b0()*-0.0637873);
}

double NNfunction_ss_dRcR::synapse0x21f0da0() {
   return (neuron0x21eb5f0()*-0.371102);
}

double NNfunction_ss_dRcR::synapse0x21f0de0() {
   return (neuron0x21eb930()*-0.533118);
}

double NNfunction_ss_dRcR::synapse0x21f0e20() {
   return (neuron0x21ebc70()*-0.711685);
}

double NNfunction_ss_dRcR::synapse0x21f0e60() {
   return (neuron0x21ebfb0()*-0.172659);
}

double NNfunction_ss_dRcR::synapse0x21f0ea0() {
   return (neuron0x21ec2f0()*-0.224191);
}

double NNfunction_ss_dRcR::synapse0x21f0ee0() {
   return (neuron0x21ec630()*0.329532);
}

double NNfunction_ss_dRcR::synapse0x21f0970() {
   return (neuron0x21ec970()*0.0369221);
}

double NNfunction_ss_dRcR::synapse0x21f09b0() {
   return (neuron0x21eced0()*0.112873);
}

double NNfunction_ss_dRcR::synapse0x21f1030() {
   return (neuron0x21ed0f0()*-0.0717956);
}

double NNfunction_ss_dRcR::synapse0x21f1070() {
   return (neuron0x21ed430()*0.245625);
}

double NNfunction_ss_dRcR::synapse0x21f10b0() {
   return (neuron0x21ed770()*0.300184);
}

double NNfunction_ss_dRcR::synapse0x21f10f0() {
   return (neuron0x21edab0()*-0.106121);
}

double NNfunction_ss_dRcR::synapse0x21f1130() {
   return (neuron0x21eddf0()*0.134637);
}

double NNfunction_ss_dRcR::synapse0x21f1170() {
   return (neuron0x21ee130()*0.0356529);
}

double NNfunction_ss_dRcR::synapse0x21f14f0() {
   return (neuron0x21e9570()*0.0157344);
}

double NNfunction_ss_dRcR::synapse0x21f1530() {
   return (neuron0x21e98b0()*0.0265385);
}

double NNfunction_ss_dRcR::synapse0x21f1570() {
   return (neuron0x21e9bf0()*0.00652737);
}

double NNfunction_ss_dRcR::synapse0x21f15b0() {
   return (neuron0x21e9f30()*-15.8177);
}

double NNfunction_ss_dRcR::synapse0x21f15f0() {
   return (neuron0x21ea270()*0.0109696);
}

double NNfunction_ss_dRcR::synapse0x21f1630() {
   return (neuron0x21ea5b0()*-0.0333673);
}

double NNfunction_ss_dRcR::synapse0x21f1670() {
   return (neuron0x21ea8f0()*-0.00405624);
}

double NNfunction_ss_dRcR::synapse0x21f16b0() {
   return (neuron0x21eac30()*-0.0045685);
}

double NNfunction_ss_dRcR::synapse0x21f16f0() {
   return (neuron0x21eaf70()*0.00623214);
}

double NNfunction_ss_dRcR::synapse0x1fa8e40() {
   return (neuron0x21eb2b0()*-0.0332258);
}

double NNfunction_ss_dRcR::synapse0x1fa8e80() {
   return (neuron0x21eb5f0()*-0.0281273);
}

double NNfunction_ss_dRcR::synapse0x1fa8ec0() {
   return (neuron0x21eb930()*0.00969906);
}

double NNfunction_ss_dRcR::synapse0x1fa8f00() {
   return (neuron0x21ebc70()*0.00341691);
}

double NNfunction_ss_dRcR::synapse0x1fa8f40() {
   return (neuron0x21ebfb0()*-0.00447351);
}

double NNfunction_ss_dRcR::synapse0x1fa8f80() {
   return (neuron0x21ec2f0()*-0.000407937);
}

double NNfunction_ss_dRcR::synapse0x1fa8fc0() {
   return (neuron0x21ec630()*0.142018);
}

double NNfunction_ss_dRcR::synapse0x21f1340() {
   return (neuron0x21ec970()*0.0254544);
}

double NNfunction_ss_dRcR::synapse0x21f1380() {
   return (neuron0x21eced0()*0.0608569);
}

double NNfunction_ss_dRcR::synapse0x1fa9110() {
   return (neuron0x21ed0f0()*-0.0166576);
}

double NNfunction_ss_dRcR::synapse0x1fa9150() {
   return (neuron0x21ed430()*0.00750023);
}

double NNfunction_ss_dRcR::synapse0x1fa9190() {
   return (neuron0x21ed770()*-0.030624);
}

double NNfunction_ss_dRcR::synapse0x1fa91d0() {
   return (neuron0x21edab0()*-0.0328612);
}

double NNfunction_ss_dRcR::synapse0x1fa9210() {
   return (neuron0x21eddf0()*-0.00905853);
}

double NNfunction_ss_dRcR::synapse0x21f1f40() {
   return (neuron0x21ee130()*-0.0543705);
}

double NNfunction_ss_dRcR::synapse0x21f22c0() {
   return (neuron0x21e9570()*0.0668004);
}

double NNfunction_ss_dRcR::synapse0x21f2300() {
   return (neuron0x21e98b0()*0.443313);
}

double NNfunction_ss_dRcR::synapse0x21f2340() {
   return (neuron0x21e9bf0()*-0.0045418);
}

double NNfunction_ss_dRcR::synapse0x21f2380() {
   return (neuron0x21e9f30()*1.1978);
}

double NNfunction_ss_dRcR::synapse0x21f23c0() {
   return (neuron0x21ea270()*-0.0187832);
}

double NNfunction_ss_dRcR::synapse0x21f2400() {
   return (neuron0x21ea5b0()*-0.0238064);
}

double NNfunction_ss_dRcR::synapse0x21f2440() {
   return (neuron0x21ea8f0()*0.00257942);
}

double NNfunction_ss_dRcR::synapse0x21f2480() {
   return (neuron0x21eac30()*-0.0389863);
}

double NNfunction_ss_dRcR::synapse0x21f24c0() {
   return (neuron0x21eaf70()*0.012913);
}

double NNfunction_ss_dRcR::synapse0x21f2500() {
   return (neuron0x21eb2b0()*0.181277);
}

double NNfunction_ss_dRcR::synapse0x21f2540() {
   return (neuron0x21eb5f0()*-0.0381573);
}

double NNfunction_ss_dRcR::synapse0x21f2580() {
   return (neuron0x21eb930()*0.339592);
}

double NNfunction_ss_dRcR::synapse0x21f25c0() {
   return (neuron0x21ebc70()*0.110361);
}

double NNfunction_ss_dRcR::synapse0x21f2600() {
   return (neuron0x21ebfb0()*-0.0351454);
}

double NNfunction_ss_dRcR::synapse0x21f2640() {
   return (neuron0x21ec2f0()*-0.0224485);
}

double NNfunction_ss_dRcR::synapse0x21f2680() {
   return (neuron0x21ec630()*-0.476143);
}

double NNfunction_ss_dRcR::synapse0x21f2110() {
   return (neuron0x21ec970()*-0.0693461);
}

double NNfunction_ss_dRcR::synapse0x21f2150() {
   return (neuron0x21eced0()*0.0824894);
}

double NNfunction_ss_dRcR::synapse0x21f27d0() {
   return (neuron0x21ed0f0()*0.00265);
}

double NNfunction_ss_dRcR::synapse0x21f2810() {
   return (neuron0x21ed430()*-0.098298);
}

double NNfunction_ss_dRcR::synapse0x21f2850() {
   return (neuron0x21ed770()*-0.0685457);
}

double NNfunction_ss_dRcR::synapse0x21f2890() {
   return (neuron0x21edab0()*-0.119325);
}

double NNfunction_ss_dRcR::synapse0x21f28d0() {
   return (neuron0x21eddf0()*0.0845895);
}

double NNfunction_ss_dRcR::synapse0x21f2910() {
   return (neuron0x21ee130()*-0.0322071);
}

double NNfunction_ss_dRcR::synapse0x21f2c90() {
   return (neuron0x21e9570()*0.391291);
}

double NNfunction_ss_dRcR::synapse0x21f2cd0() {
   return (neuron0x21e98b0()*-0.252672);
}

double NNfunction_ss_dRcR::synapse0x21f2d10() {
   return (neuron0x21e9bf0()*-0.88348);
}

double NNfunction_ss_dRcR::synapse0x21f2d50() {
   return (neuron0x21e9f30()*0.0588188);
}

double NNfunction_ss_dRcR::synapse0x21f2d90() {
   return (neuron0x21ea270()*-0.318249);
}

double NNfunction_ss_dRcR::synapse0x21f2dd0() {
   return (neuron0x21ea5b0()*0.108812);
}

double NNfunction_ss_dRcR::synapse0x21f2e10() {
   return (neuron0x21ea8f0()*0.230621);
}

double NNfunction_ss_dRcR::synapse0x21f2e50() {
   return (neuron0x21eac30()*0.0852617);
}

double NNfunction_ss_dRcR::synapse0x21f2e90() {
   return (neuron0x21eaf70()*-0.53237);
}

double NNfunction_ss_dRcR::synapse0x21f2ed0() {
   return (neuron0x21eb2b0()*0.276039);
}

double NNfunction_ss_dRcR::synapse0x21f2f10() {
   return (neuron0x21eb5f0()*0.23405);
}

double NNfunction_ss_dRcR::synapse0x21f2f50() {
   return (neuron0x21eb930()*-0.136488);
}

double NNfunction_ss_dRcR::synapse0x21f2f90() {
   return (neuron0x21ebc70()*0.646989);
}

double NNfunction_ss_dRcR::synapse0x21f2fd0() {
   return (neuron0x21ebfb0()*-0.0344663);
}

double NNfunction_ss_dRcR::synapse0x21f3010() {
   return (neuron0x21ec2f0()*0.612233);
}

double NNfunction_ss_dRcR::synapse0x21f3050() {
   return (neuron0x21ec630()*-0.332883);
}

double NNfunction_ss_dRcR::synapse0x21f2ae0() {
   return (neuron0x21ec970()*0.595278);
}

double NNfunction_ss_dRcR::synapse0x21f2b20() {
   return (neuron0x21eced0()*0.595712);
}

double NNfunction_ss_dRcR::synapse0x21f31a0() {
   return (neuron0x21ed0f0()*1.11308);
}

double NNfunction_ss_dRcR::synapse0x21f31e0() {
   return (neuron0x21ed430()*0.158896);
}

double NNfunction_ss_dRcR::synapse0x21f3220() {
   return (neuron0x21ed770()*0.331501);
}

double NNfunction_ss_dRcR::synapse0x21f3260() {
   return (neuron0x21edab0()*0.729321);
}

double NNfunction_ss_dRcR::synapse0x21f32a0() {
   return (neuron0x21eddf0()*-0.483083);
}

double NNfunction_ss_dRcR::synapse0x21f32e0() {
   return (neuron0x21ee130()*0.0347225);
}

double NNfunction_ss_dRcR::synapse0x21ecdc0() {
   return (neuron0x21e9570()*-0.00310309);
}

double NNfunction_ss_dRcR::synapse0x21ece00() {
   return (neuron0x21e98b0()*-0.00318729);
}

double NNfunction_ss_dRcR::synapse0x21ece40() {
   return (neuron0x21e9bf0()*-0.0045694);
}

double NNfunction_ss_dRcR::synapse0x21ece80() {
   return (neuron0x21e9f30()*-2.4234);
}

double NNfunction_ss_dRcR::synapse0x21f3870() {
   return (neuron0x21ea270()*-0.00386055);
}

double NNfunction_ss_dRcR::synapse0x21f38b0() {
   return (neuron0x21ea5b0()*0.000370198);
}

double NNfunction_ss_dRcR::synapse0x21f38f0() {
   return (neuron0x21ea8f0()*0.00272819);
}

double NNfunction_ss_dRcR::synapse0x21f3930() {
   return (neuron0x21eac30()*0.0131644);
}

double NNfunction_ss_dRcR::synapse0x21f3970() {
   return (neuron0x21eaf70()*-0.0025582);
}

double NNfunction_ss_dRcR::synapse0x21f39b0() {
   return (neuron0x21eb2b0()*0.00331201);
}

double NNfunction_ss_dRcR::synapse0x21f39f0() {
   return (neuron0x21eb5f0()*-0.0142078);
}

double NNfunction_ss_dRcR::synapse0x21f3a30() {
   return (neuron0x21eb930()*-0.000229915);
}

double NNfunction_ss_dRcR::synapse0x21f3a70() {
   return (neuron0x21ebc70()*-0.013092);
}

double NNfunction_ss_dRcR::synapse0x21f3ab0() {
   return (neuron0x21ebfb0()*0.00435191);
}

double NNfunction_ss_dRcR::synapse0x21f3af0() {
   return (neuron0x21ec2f0()*0.0087334);
}

double NNfunction_ss_dRcR::synapse0x21f3b30() {
   return (neuron0x21ec630()*-0.020224);
}

double NNfunction_ss_dRcR::synapse0x21f34b0() {
   return (neuron0x21ec970()*0.000376323);
}

double NNfunction_ss_dRcR::synapse0x21f34f0() {
   return (neuron0x21eced0()*-0.188995);
}

double NNfunction_ss_dRcR::synapse0x21f3c80() {
   return (neuron0x21ed0f0()*-0.0012145);
}

double NNfunction_ss_dRcR::synapse0x21f3cc0() {
   return (neuron0x21ed430()*0.00748568);
}

double NNfunction_ss_dRcR::synapse0x21f3d00() {
   return (neuron0x21ed770()*0.00820313);
}

double NNfunction_ss_dRcR::synapse0x21f3d40() {
   return (neuron0x21edab0()*0.00788307);
}

double NNfunction_ss_dRcR::synapse0x21f3d80() {
   return (neuron0x21eddf0()*-0.00321118);
}

double NNfunction_ss_dRcR::synapse0x21f3dc0() {
   return (neuron0x21ee130()*-0.0157968);
}

double NNfunction_ss_dRcR::synapse0x21f4140() {
   return (neuron0x21e9570()*-0.179058);
}

double NNfunction_ss_dRcR::synapse0x21f4180() {
   return (neuron0x21e98b0()*-0.0278531);
}

double NNfunction_ss_dRcR::synapse0x21f41c0() {
   return (neuron0x21e9bf0()*0.0514444);
}

double NNfunction_ss_dRcR::synapse0x21f4200() {
   return (neuron0x21e9f30()*-0.735188);
}

double NNfunction_ss_dRcR::synapse0x21f4240() {
   return (neuron0x21ea270()*-0.183241);
}

double NNfunction_ss_dRcR::synapse0x21f4280() {
   return (neuron0x21ea5b0()*0.308984);
}

double NNfunction_ss_dRcR::synapse0x21f42c0() {
   return (neuron0x21ea8f0()*0.127404);
}

double NNfunction_ss_dRcR::synapse0x21f4300() {
   return (neuron0x21eac30()*-0.155284);
}

double NNfunction_ss_dRcR::synapse0x21f4340() {
   return (neuron0x21eaf70()*0.0721454);
}

double NNfunction_ss_dRcR::synapse0x21f4380() {
   return (neuron0x21eb2b0()*0.243574);
}

double NNfunction_ss_dRcR::synapse0x21f43c0() {
   return (neuron0x21eb5f0()*0.00528407);
}

double NNfunction_ss_dRcR::synapse0x21f4400() {
   return (neuron0x21eb930()*-0.00103147);
}

double NNfunction_ss_dRcR::synapse0x21f4440() {
   return (neuron0x21ebc70()*-0.154412);
}

double NNfunction_ss_dRcR::synapse0x21f4480() {
   return (neuron0x21ebfb0()*0.304698);
}

double NNfunction_ss_dRcR::synapse0x21f44c0() {
   return (neuron0x21ec2f0()*-0.116238);
}

double NNfunction_ss_dRcR::synapse0x21f4500() {
   return (neuron0x21ec630()*0.591929);
}

double NNfunction_ss_dRcR::synapse0x21f3f90() {
   return (neuron0x21ec970()*0.28046);
}

double NNfunction_ss_dRcR::synapse0x21f3fd0() {
   return (neuron0x21eced0()*0.382896);
}

double NNfunction_ss_dRcR::synapse0x21f4650() {
   return (neuron0x21ed0f0()*0.244738);
}

double NNfunction_ss_dRcR::synapse0x21f4690() {
   return (neuron0x21ed430()*-0.208511);
}

double NNfunction_ss_dRcR::synapse0x21f46d0() {
   return (neuron0x21ed770()*-0.0221542);
}

double NNfunction_ss_dRcR::synapse0x21f4710() {
   return (neuron0x21edab0()*-0.0221732);
}

double NNfunction_ss_dRcR::synapse0x21f4750() {
   return (neuron0x21eddf0()*-0.181375);
}

double NNfunction_ss_dRcR::synapse0x21f4790() {
   return (neuron0x21ee130()*0.0324199);
}

double NNfunction_ss_dRcR::synapse0x21f4b10() {
   return (neuron0x21e9570()*-0.0855243);
}

double NNfunction_ss_dRcR::synapse0x21f4b50() {
   return (neuron0x21e98b0()*-0.581817);
}

double NNfunction_ss_dRcR::synapse0x21f4b90() {
   return (neuron0x21e9bf0()*0.158867);
}

double NNfunction_ss_dRcR::synapse0x21f4bd0() {
   return (neuron0x21e9f30()*-0.124367);
}

double NNfunction_ss_dRcR::synapse0x21f4c10() {
   return (neuron0x21ea270()*0.0096334);
}

double NNfunction_ss_dRcR::synapse0x21f4c50() {
   return (neuron0x21ea5b0()*0.00186401);
}

double NNfunction_ss_dRcR::synapse0x21f4c90() {
   return (neuron0x21ea8f0()*-0.210839);
}

double NNfunction_ss_dRcR::synapse0x21f4cd0() {
   return (neuron0x21eac30()*-0.0797043);
}

double NNfunction_ss_dRcR::synapse0x21f4d10() {
   return (neuron0x21eaf70()*-0.157896);
}

double NNfunction_ss_dRcR::synapse0x21f4d50() {
   return (neuron0x21eb2b0()*-0.133772);
}

double NNfunction_ss_dRcR::synapse0x21f4d90() {
   return (neuron0x21eb5f0()*-0.306429);
}

double NNfunction_ss_dRcR::synapse0x21f4dd0() {
   return (neuron0x21eb930()*0.133271);
}

double NNfunction_ss_dRcR::synapse0x21f4e10() {
   return (neuron0x21ebc70()*-0.185865);
}

double NNfunction_ss_dRcR::synapse0x21f4e50() {
   return (neuron0x21ebfb0()*-0.425126);
}

double NNfunction_ss_dRcR::synapse0x21f4e90() {
   return (neuron0x21ec2f0()*-0.00755966);
}

double NNfunction_ss_dRcR::synapse0x21f4ed0() {
   return (neuron0x21ec630()*-0.217573);
}

double NNfunction_ss_dRcR::synapse0x21f4960() {
   return (neuron0x21ec970()*0.0163606);
}

double NNfunction_ss_dRcR::synapse0x21f49a0() {
   return (neuron0x21eced0()*-0.530418);
}

double NNfunction_ss_dRcR::synapse0x21f1730() {
   return (neuron0x21ed0f0()*-0.340527);
}

double NNfunction_ss_dRcR::synapse0x21f1770() {
   return (neuron0x21ed430()*0.142567);
}

double NNfunction_ss_dRcR::synapse0x21f17b0() {
   return (neuron0x21ed770()*-0.252149);
}

double NNfunction_ss_dRcR::synapse0x21f17f0() {
   return (neuron0x21edab0()*-0.0363647);
}

double NNfunction_ss_dRcR::synapse0x21f1830() {
   return (neuron0x21eddf0()*0.0809302);
}

double NNfunction_ss_dRcR::synapse0x21f1870() {
   return (neuron0x21ee130()*-0.0364205);
}

double NNfunction_ss_dRcR::synapse0x21f1bf0() {
   return (neuron0x21e9570()*-0.0298267);
}

double NNfunction_ss_dRcR::synapse0x21f1c30() {
   return (neuron0x21e98b0()*0.00690168);
}

double NNfunction_ss_dRcR::synapse0x21f1c70() {
   return (neuron0x21e9bf0()*-0.0363356);
}

double NNfunction_ss_dRcR::synapse0x21f1cb0() {
   return (neuron0x21e9f30()*-2.03781);
}

double NNfunction_ss_dRcR::synapse0x21f1cf0() {
   return (neuron0x21ea270()*-0.00345395);
}

double NNfunction_ss_dRcR::synapse0x21f1d30() {
   return (neuron0x21ea5b0()*-0.0524264);
}

double NNfunction_ss_dRcR::synapse0x21f1d70() {
   return (neuron0x21ea8f0()*0.00549576);
}

double NNfunction_ss_dRcR::synapse0x21f1db0() {
   return (neuron0x21eac30()*0.0283527);
}

double NNfunction_ss_dRcR::synapse0x21f1df0() {
   return (neuron0x21eaf70()*0.0079348);
}

double NNfunction_ss_dRcR::synapse0x21f1e30() {
   return (neuron0x21eb2b0()*-0.0430982);
}

double NNfunction_ss_dRcR::synapse0x21f1e70() {
   return (neuron0x21eb5f0()*0.0237732);
}

double NNfunction_ss_dRcR::synapse0x21f1eb0() {
   return (neuron0x21eb930()*0.0195533);
}

double NNfunction_ss_dRcR::synapse0x21f1ef0() {
   return (neuron0x21ebc70()*-0.0443563);
}

double NNfunction_ss_dRcR::synapse0x21f6030() {
   return (neuron0x21ebfb0()*-0.0582145);
}

double NNfunction_ss_dRcR::synapse0x21f6070() {
   return (neuron0x21ec2f0()*0.0439768);
}

double NNfunction_ss_dRcR::synapse0x21f60b0() {
   return (neuron0x21ec630()*-0.188177);
}

double NNfunction_ss_dRcR::synapse0x21f1a40() {
   return (neuron0x21ec970()*-0.0681558);
}

double NNfunction_ss_dRcR::synapse0x21f1a80() {
   return (neuron0x21eced0()*-0.438234);
}

double NNfunction_ss_dRcR::synapse0x21f6200() {
   return (neuron0x21ed0f0()*-0.0166098);
}

double NNfunction_ss_dRcR::synapse0x21f6240() {
   return (neuron0x21ed430()*0.0617832);
}

double NNfunction_ss_dRcR::synapse0x21f6280() {
   return (neuron0x21ed770()*0.0048509);
}

double NNfunction_ss_dRcR::synapse0x21f62c0() {
   return (neuron0x21edab0()*0.0156756);
}

double NNfunction_ss_dRcR::synapse0x21f6300() {
   return (neuron0x21eddf0()*-0.0306036);
}

double NNfunction_ss_dRcR::synapse0x21f6340() {
   return (neuron0x21ee130()*0.0193381);
}

double NNfunction_ss_dRcR::synapse0x21f66c0() {
   return (neuron0x21e9570()*-0.14639);
}

double NNfunction_ss_dRcR::synapse0x21f6700() {
   return (neuron0x21e98b0()*0.701994);
}

double NNfunction_ss_dRcR::synapse0x21f6740() {
   return (neuron0x21e9bf0()*-0.156617);
}

double NNfunction_ss_dRcR::synapse0x21f6780() {
   return (neuron0x21e9f30()*-0.468926);
}

double NNfunction_ss_dRcR::synapse0x21f67c0() {
   return (neuron0x21ea270()*0.668698);
}

double NNfunction_ss_dRcR::synapse0x21f6800() {
   return (neuron0x21ea5b0()*-0.196331);
}

double NNfunction_ss_dRcR::synapse0x21f6840() {
   return (neuron0x21ea8f0()*-0.252878);
}

double NNfunction_ss_dRcR::synapse0x21f6880() {
   return (neuron0x21eac30()*0.138956);
}

double NNfunction_ss_dRcR::synapse0x21f68c0() {
   return (neuron0x21eaf70()*-0.418002);
}

double NNfunction_ss_dRcR::synapse0x21f6900() {
   return (neuron0x21eb2b0()*-0.352451);
}

double NNfunction_ss_dRcR::synapse0x21f6940() {
   return (neuron0x21eb5f0()*-0.46624);
}

double NNfunction_ss_dRcR::synapse0x21f6980() {
   return (neuron0x21eb930()*-0.394164);
}

double NNfunction_ss_dRcR::synapse0x21f69c0() {
   return (neuron0x21ebc70()*-1.07581);
}

double NNfunction_ss_dRcR::synapse0x21f6a00() {
   return (neuron0x21ebfb0()*-0.277467);
}

double NNfunction_ss_dRcR::synapse0x21f6a40() {
   return (neuron0x21ec2f0()*-0.160035);
}

double NNfunction_ss_dRcR::synapse0x21f6a80() {
   return (neuron0x21ec630()*1.02391);
}

double NNfunction_ss_dRcR::synapse0x21f6510() {
   return (neuron0x21ec970()*0.665709);
}

double NNfunction_ss_dRcR::synapse0x21f6550() {
   return (neuron0x21eced0()*0.643616);
}

double NNfunction_ss_dRcR::synapse0x21f6bd0() {
   return (neuron0x21ed0f0()*-0.503828);
}

double NNfunction_ss_dRcR::synapse0x21f6c10() {
   return (neuron0x21ed430()*-0.193869);
}

double NNfunction_ss_dRcR::synapse0x21f6c50() {
   return (neuron0x21ed770()*-0.442503);
}

double NNfunction_ss_dRcR::synapse0x21f6c90() {
   return (neuron0x21edab0()*-0.133011);
}

double NNfunction_ss_dRcR::synapse0x21f6cd0() {
   return (neuron0x21eddf0()*0.0295247);
}

double NNfunction_ss_dRcR::synapse0x21f6d10() {
   return (neuron0x21ee130()*-0.442155);
}

double NNfunction_ss_dRcR::synapse0x21f7090() {
   return (neuron0x21e9570()*-0.0972524);
}

double NNfunction_ss_dRcR::synapse0x21f70d0() {
   return (neuron0x21e98b0()*0.486113);
}

double NNfunction_ss_dRcR::synapse0x21f7110() {
   return (neuron0x21e9bf0()*0.249816);
}

double NNfunction_ss_dRcR::synapse0x21f7150() {
   return (neuron0x21e9f30()*-0.499818);
}

double NNfunction_ss_dRcR::synapse0x21f7190() {
   return (neuron0x21ea270()*0.12904);
}

double NNfunction_ss_dRcR::synapse0x21f71d0() {
   return (neuron0x21ea5b0()*-0.0598746);
}

double NNfunction_ss_dRcR::synapse0x21f7210() {
   return (neuron0x21ea8f0()*0.111802);
}

double NNfunction_ss_dRcR::synapse0x21f7250() {
   return (neuron0x21eac30()*0.0779851);
}

double NNfunction_ss_dRcR::synapse0x21f7290() {
   return (neuron0x21eaf70()*-0.354756);
}

double NNfunction_ss_dRcR::synapse0x21f72d0() {
   return (neuron0x21eb2b0()*0.0474119);
}

double NNfunction_ss_dRcR::synapse0x21f7310() {
   return (neuron0x21eb5f0()*0.00558401);
}

double NNfunction_ss_dRcR::synapse0x21f7350() {
   return (neuron0x21eb930()*-0.0245601);
}

double NNfunction_ss_dRcR::synapse0x21f7390() {
   return (neuron0x21ebc70()*0.508498);
}

double NNfunction_ss_dRcR::synapse0x21f73d0() {
   return (neuron0x21ebfb0()*-0.416397);
}

double NNfunction_ss_dRcR::synapse0x21f7410() {
   return (neuron0x21ec2f0()*0.0220879);
}

double NNfunction_ss_dRcR::synapse0x21f7450() {
   return (neuron0x21ec630()*0.323097);
}

double NNfunction_ss_dRcR::synapse0x21f6ee0() {
   return (neuron0x21ec970()*-0.370465);
}

double NNfunction_ss_dRcR::synapse0x21f6f20() {
   return (neuron0x21eced0()*0.125634);
}

double NNfunction_ss_dRcR::synapse0x21f75a0() {
   return (neuron0x21ed0f0()*0.233155);
}

double NNfunction_ss_dRcR::synapse0x21f75e0() {
   return (neuron0x21ed430()*0.247419);
}

double NNfunction_ss_dRcR::synapse0x21f7620() {
   return (neuron0x21ed770()*-0.0142711);
}

double NNfunction_ss_dRcR::synapse0x21f7660() {
   return (neuron0x21edab0()*-0.266084);
}

double NNfunction_ss_dRcR::synapse0x21f76a0() {
   return (neuron0x21eddf0()*0.111446);
}

double NNfunction_ss_dRcR::synapse0x21f76e0() {
   return (neuron0x21ee130()*0.0734522);
}

double NNfunction_ss_dRcR::synapse0x21f7a60() {
   return (neuron0x21e9570()*-0.320236);
}

double NNfunction_ss_dRcR::synapse0x21f7aa0() {
   return (neuron0x21e98b0()*0.547971);
}

double NNfunction_ss_dRcR::synapse0x21f7ae0() {
   return (neuron0x21e9bf0()*0.0171436);
}

double NNfunction_ss_dRcR::synapse0x21f7b20() {
   return (neuron0x21e9f30()*0.374945);
}

double NNfunction_ss_dRcR::synapse0x21f7b60() {
   return (neuron0x21ea270()*-0.671369);
}

double NNfunction_ss_dRcR::synapse0x21f7ba0() {
   return (neuron0x21ea5b0()*-0.652746);
}

double NNfunction_ss_dRcR::synapse0x21f7be0() {
   return (neuron0x21ea8f0()*0.255515);
}

double NNfunction_ss_dRcR::synapse0x21f7c20() {
   return (neuron0x21eac30()*-0.297144);
}

double NNfunction_ss_dRcR::synapse0x21f7c60() {
   return (neuron0x21eaf70()*0.337213);
}

double NNfunction_ss_dRcR::synapse0x21f7ca0() {
   return (neuron0x21eb2b0()*-0.486786);
}

double NNfunction_ss_dRcR::synapse0x21f7ce0() {
   return (neuron0x21eb5f0()*-0.0565748);
}

double NNfunction_ss_dRcR::synapse0x21f7d20() {
   return (neuron0x21eb930()*-0.343321);
}

double NNfunction_ss_dRcR::synapse0x21f7d60() {
   return (neuron0x21ebc70()*0.117217);
}

double NNfunction_ss_dRcR::synapse0x21f7da0() {
   return (neuron0x21ebfb0()*-0.083645);
}

double NNfunction_ss_dRcR::synapse0x21f7de0() {
   return (neuron0x21ec2f0()*0.0468217);
}

double NNfunction_ss_dRcR::synapse0x21f7e20() {
   return (neuron0x21ec630()*1.07564);
}

double NNfunction_ss_dRcR::synapse0x21f78b0() {
   return (neuron0x21ec970()*0.0863121);
}

double NNfunction_ss_dRcR::synapse0x21f78f0() {
   return (neuron0x21eced0()*0.923167);
}

double NNfunction_ss_dRcR::synapse0x21f7f70() {
   return (neuron0x21ed0f0()*0.238548);
}

double NNfunction_ss_dRcR::synapse0x21f7fb0() {
   return (neuron0x21ed430()*0.138184);
}

double NNfunction_ss_dRcR::synapse0x21f7ff0() {
   return (neuron0x21ed770()*-0.215206);
}

double NNfunction_ss_dRcR::synapse0x21f8030() {
   return (neuron0x21edab0()*0.472794);
}

double NNfunction_ss_dRcR::synapse0x21f8070() {
   return (neuron0x21eddf0()*-0.226888);
}

double NNfunction_ss_dRcR::synapse0x21f80b0() {
   return (neuron0x21ee130()*0.0438881);
}

double NNfunction_ss_dRcR::synapse0x21f8430() {
   return (neuron0x21e9570()*0.897087);
}

double NNfunction_ss_dRcR::synapse0x21e9790() {
   return (neuron0x21e98b0()*-0.368802);
}

double NNfunction_ss_dRcR::synapse0x21e97d0() {
   return (neuron0x21e9bf0()*0.132533);
}

double NNfunction_ss_dRcR::synapse0x21e9ad0() {
   return (neuron0x21e9f30()*-0.520906);
}

double NNfunction_ss_dRcR::synapse0x21e9b10() {
   return (neuron0x21ea270()*-0.0608101);
}

double NNfunction_ss_dRcR::synapse0x21e9e10() {
   return (neuron0x21ea5b0()*0.102413);
}

double NNfunction_ss_dRcR::synapse0x21e9e50() {
   return (neuron0x21ea8f0()*-0.151599);
}

double NNfunction_ss_dRcR::synapse0x21ea150() {
   return (neuron0x21eac30()*-0.206891);
}

double NNfunction_ss_dRcR::synapse0x21ea190() {
   return (neuron0x21eaf70()*0.185024);
}

double NNfunction_ss_dRcR::synapse0x21ea490() {
   return (neuron0x21eb2b0()*-0.0387186);
}

double NNfunction_ss_dRcR::synapse0x21ea4d0() {
   return (neuron0x21eb5f0()*0.878368);
}

double NNfunction_ss_dRcR::synapse0x21ea7d0() {
   return (neuron0x21eb930()*0.115729);
}

double NNfunction_ss_dRcR::synapse0x21ea810() {
   return (neuron0x21ebc70()*0.112683);
}

double NNfunction_ss_dRcR::synapse0x21eab10() {
   return (neuron0x21ebfb0()*0.246673);
}

double NNfunction_ss_dRcR::synapse0x21eab50() {
   return (neuron0x21ec2f0()*-0.24574);
}

double NNfunction_ss_dRcR::synapse0x21eae50() {
   return (neuron0x21ec630()*0.952774);
}

double NNfunction_ss_dRcR::synapse0x21eae90() {
   return (neuron0x21ec970()*0.711784);
}

double NNfunction_ss_dRcR::synapse0x21eb190() {
   return (neuron0x21eced0()*0.754831);
}

double NNfunction_ss_dRcR::synapse0x21eb1d0() {
   return (neuron0x21ed0f0()*-0.287217);
}

double NNfunction_ss_dRcR::synapse0x21eb4d0() {
   return (neuron0x21ed430()*-0.25876);
}

double NNfunction_ss_dRcR::synapse0x21eb510() {
   return (neuron0x21ed770()*-0.196357);
}

double NNfunction_ss_dRcR::synapse0x21eb810() {
   return (neuron0x21edab0()*-0.015182);
}

double NNfunction_ss_dRcR::synapse0x21eb850() {
   return (neuron0x21eddf0()*0.19374);
}

double NNfunction_ss_dRcR::synapse0x21ebb50() {
   return (neuron0x21ee130()*0.212147);
}

double NNfunction_ss_dRcR::synapse0x21ebb90() {
   return (neuron0x21e9570()*0.00878531);
}

double NNfunction_ss_dRcR::synapse0x21ec850() {
   return (neuron0x21e98b0()*0.036355);
}

double NNfunction_ss_dRcR::synapse0x21ec890() {
   return (neuron0x21e9bf0()*0.0458007);
}

double NNfunction_ss_dRcR::synapse0x21f8280() {
   return (neuron0x21e9f30()*-0.173293);
}

double NNfunction_ss_dRcR::synapse0x21f82c0() {
   return (neuron0x21ea270()*0.0652641);
}

double NNfunction_ss_dRcR::synapse0x21ecb90() {
   return (neuron0x21ea5b0()*0.0408003);
}

double NNfunction_ss_dRcR::synapse0x21ecbd0() {
   return (neuron0x21ea8f0()*0.0173039);
}

double NNfunction_ss_dRcR::synapse0x1f9ab60() {
   return (neuron0x21eac30()*-0.0331258);
}

double NNfunction_ss_dRcR::synapse0x1f9aba0() {
   return (neuron0x21eaf70()*-0.00322691);
}

double NNfunction_ss_dRcR::synapse0x21ed310() {
   return (neuron0x21eb2b0()*-0.0175651);
}

double NNfunction_ss_dRcR::synapse0x21ed350() {
   return (neuron0x21eb5f0()*-0.0479273);
}

double NNfunction_ss_dRcR::synapse0x21ed650() {
   return (neuron0x21eb930()*-0.00416987);
}

double NNfunction_ss_dRcR::synapse0x21ed690() {
   return (neuron0x21ebc70()*0.00787612);
}

double NNfunction_ss_dRcR::synapse0x21ed990() {
   return (neuron0x21ebfb0()*0.043436);
}

double NNfunction_ss_dRcR::synapse0x21ed9d0() {
   return (neuron0x21ec2f0()*-0.00657766);
}

double NNfunction_ss_dRcR::synapse0x21edcd0() {
   return (neuron0x21ec630()*-0.165988);
}

double NNfunction_ss_dRcR::synapse0x21edd10() {
   return (neuron0x21ec970()*0.0313828);
}

double NNfunction_ss_dRcR::synapse0x21ee010() {
   return (neuron0x21eced0()*0.759619);
}

double NNfunction_ss_dRcR::synapse0x21ee050() {
   return (neuron0x21ed0f0()*-0.0377963);
}

double NNfunction_ss_dRcR::synapse0x21ee350() {
   return (neuron0x21ed430()*-0.0485644);
}

double NNfunction_ss_dRcR::synapse0x21ee390() {
   return (neuron0x21ed770()*0.00160811);
}

double NNfunction_ss_dRcR::synapse0x21ebe90() {
   return (neuron0x21edab0()*-0.00941816);
}

double NNfunction_ss_dRcR::synapse0x21ebed0() {
   return (neuron0x21eddf0()*0.0248822);
}

double NNfunction_ss_dRcR::synapse0x21fa1a0() {
   return (neuron0x21ee130()*-0.0431829);
}

double NNfunction_ss_dRcR::synapse0x21fa520() {
   return (neuron0x21e9570()*0.00270002);
}

double NNfunction_ss_dRcR::synapse0x21fa560() {
   return (neuron0x21e98b0()*0.0575957);
}

double NNfunction_ss_dRcR::synapse0x21fa5a0() {
   return (neuron0x21e9bf0()*0.0481422);
}

double NNfunction_ss_dRcR::synapse0x21fa5e0() {
   return (neuron0x21e9f30()*0.0595241);
}

double NNfunction_ss_dRcR::synapse0x21fa620() {
   return (neuron0x21ea270()*0.293149);
}

double NNfunction_ss_dRcR::synapse0x21fa660() {
   return (neuron0x21ea5b0()*-0.0514528);
}

double NNfunction_ss_dRcR::synapse0x21fa6a0() {
   return (neuron0x21ea8f0()*0.00488741);
}

double NNfunction_ss_dRcR::synapse0x21fa6e0() {
   return (neuron0x21eac30()*-0.0341581);
}

double NNfunction_ss_dRcR::synapse0x21fa720() {
   return (neuron0x21eaf70()*-0.0467918);
}

double NNfunction_ss_dRcR::synapse0x21fa760() {
   return (neuron0x21eb2b0()*-0.0618509);
}

double NNfunction_ss_dRcR::synapse0x21fa7a0() {
   return (neuron0x21eb5f0()*0.124943);
}

double NNfunction_ss_dRcR::synapse0x21fa7e0() {
   return (neuron0x21eb930()*0.0817142);
}

double NNfunction_ss_dRcR::synapse0x21fa820() {
   return (neuron0x21ebc70()*-0.0221443);
}

double NNfunction_ss_dRcR::synapse0x21fa860() {
   return (neuron0x21ebfb0()*-0.0852915);
}

double NNfunction_ss_dRcR::synapse0x21fa8a0() {
   return (neuron0x21ec2f0()*0.0494779);
}

double NNfunction_ss_dRcR::synapse0x21fa8e0() {
   return (neuron0x21ec630()*-0.247134);
}

double NNfunction_ss_dRcR::synapse0x21fa370() {
   return (neuron0x21ec970()*0.0597736);
}

double NNfunction_ss_dRcR::synapse0x21fa3b0() {
   return (neuron0x21eced0()*-0.517157);
}

double NNfunction_ss_dRcR::synapse0x21faa30() {
   return (neuron0x21ed0f0()*-0.136925);
}

double NNfunction_ss_dRcR::synapse0x21faa70() {
   return (neuron0x21ed430()*-0.261913);
}

double NNfunction_ss_dRcR::synapse0x21faab0() {
   return (neuron0x21ed770()*-0.0444622);
}

double NNfunction_ss_dRcR::synapse0x21faaf0() {
   return (neuron0x21edab0()*-0.0473345);
}

double NNfunction_ss_dRcR::synapse0x21fab30() {
   return (neuron0x21eddf0()*0.0875637);
}

double NNfunction_ss_dRcR::synapse0x21fab70() {
   return (neuron0x21ee130()*-0.0586528);
}

double NNfunction_ss_dRcR::synapse0x21faef0() {
   return (neuron0x21e9570()*0.446095);
}

double NNfunction_ss_dRcR::synapse0x21faf30() {
   return (neuron0x21e98b0()*-0.355195);
}

double NNfunction_ss_dRcR::synapse0x21faf70() {
   return (neuron0x21e9bf0()*0.133963);
}

double NNfunction_ss_dRcR::synapse0x21fafb0() {
   return (neuron0x21e9f30()*0.632194);
}

double NNfunction_ss_dRcR::synapse0x21faff0() {
   return (neuron0x21ea270()*-0.310645);
}

double NNfunction_ss_dRcR::synapse0x21fb030() {
   return (neuron0x21ea5b0()*-0.014661);
}

double NNfunction_ss_dRcR::synapse0x21fb070() {
   return (neuron0x21ea8f0()*-0.269914);
}

double NNfunction_ss_dRcR::synapse0x21fb0b0() {
   return (neuron0x21eac30()*-0.31405);
}

double NNfunction_ss_dRcR::synapse0x21fb0f0() {
   return (neuron0x21eaf70()*0.291974);
}

double NNfunction_ss_dRcR::synapse0x21fb130() {
   return (neuron0x21eb2b0()*-0.298416);
}

double NNfunction_ss_dRcR::synapse0x21fb170() {
   return (neuron0x21eb5f0()*-0.0382385);
}

double NNfunction_ss_dRcR::synapse0x21fb1b0() {
   return (neuron0x21eb930()*0.233308);
}

double NNfunction_ss_dRcR::synapse0x21fb1f0() {
   return (neuron0x21ebc70()*0.391574);
}

double NNfunction_ss_dRcR::synapse0x21fb230() {
   return (neuron0x21ebfb0()*0.473379);
}

double NNfunction_ss_dRcR::synapse0x21fb270() {
   return (neuron0x21ec2f0()*-0.19542);
}

double NNfunction_ss_dRcR::synapse0x21fb2b0() {
   return (neuron0x21ec630()*-0.0657884);
}

double NNfunction_ss_dRcR::synapse0x21fad40() {
   return (neuron0x21ec970()*0.874594);
}

double NNfunction_ss_dRcR::synapse0x21fad80() {
   return (neuron0x21eced0()*0.410167);
}

double NNfunction_ss_dRcR::synapse0x21fb400() {
   return (neuron0x21ed0f0()*0.841752);
}

double NNfunction_ss_dRcR::synapse0x21fb440() {
   return (neuron0x21ed430()*-1.06404);
}

double NNfunction_ss_dRcR::synapse0x21fb480() {
   return (neuron0x21ed770()*0.567209);
}

double NNfunction_ss_dRcR::synapse0x21fb4c0() {
   return (neuron0x21edab0()*-0.401034);
}

double NNfunction_ss_dRcR::synapse0x21fb500() {
   return (neuron0x21eddf0()*0.0049678);
}

double NNfunction_ss_dRcR::synapse0x21fb540() {
   return (neuron0x21ee130()*0.0797982);
}

double NNfunction_ss_dRcR::synapse0x21fb8c0() {
   return (neuron0x21e9570()*0.145937);
}

double NNfunction_ss_dRcR::synapse0x21fb900() {
   return (neuron0x21e98b0()*-0.439679);
}

double NNfunction_ss_dRcR::synapse0x21fb940() {
   return (neuron0x21e9bf0()*-0.060956);
}

double NNfunction_ss_dRcR::synapse0x21fb980() {
   return (neuron0x21e9f30()*-0.315699);
}

double NNfunction_ss_dRcR::synapse0x21fb9c0() {
   return (neuron0x21ea270()*0.336418);
}

double NNfunction_ss_dRcR::synapse0x21fba00() {
   return (neuron0x21ea5b0()*-0.0154594);
}

double NNfunction_ss_dRcR::synapse0x21fba40() {
   return (neuron0x21ea8f0()*0.0637349);
}

double NNfunction_ss_dRcR::synapse0x21fba80() {
   return (neuron0x21eac30()*-0.0734712);
}

double NNfunction_ss_dRcR::synapse0x21fbac0() {
   return (neuron0x21eaf70()*-0.338658);
}

double NNfunction_ss_dRcR::synapse0x21fbb00() {
   return (neuron0x21eb2b0()*0.0788112);
}

double NNfunction_ss_dRcR::synapse0x21fbb40() {
   return (neuron0x21eb5f0()*0.0102109);
}

double NNfunction_ss_dRcR::synapse0x21fbb80() {
   return (neuron0x21eb930()*0.338241);
}

double NNfunction_ss_dRcR::synapse0x21fbbc0() {
   return (neuron0x21ebc70()*-0.174383);
}

double NNfunction_ss_dRcR::synapse0x21fbc00() {
   return (neuron0x21ebfb0()*-0.0838997);
}

double NNfunction_ss_dRcR::synapse0x21fbc40() {
   return (neuron0x21ec2f0()*-0.132686);
}

double NNfunction_ss_dRcR::synapse0x21fbc80() {
   return (neuron0x21ec630()*0.643121);
}

double NNfunction_ss_dRcR::synapse0x21fb710() {
   return (neuron0x21ec970()*-0.200994);
}

double NNfunction_ss_dRcR::synapse0x21fb750() {
   return (neuron0x21eced0()*-0.124835);
}

double NNfunction_ss_dRcR::synapse0x21fbdd0() {
   return (neuron0x21ed0f0()*-0.487648);
}

double NNfunction_ss_dRcR::synapse0x21fbe10() {
   return (neuron0x21ed430()*-0.314942);
}

double NNfunction_ss_dRcR::synapse0x21fbe50() {
   return (neuron0x21ed770()*-0.0816602);
}

double NNfunction_ss_dRcR::synapse0x21fbe90() {
   return (neuron0x21edab0()*-0.0611286);
}

double NNfunction_ss_dRcR::synapse0x21fbed0() {
   return (neuron0x21eddf0()*0.229874);
}

double NNfunction_ss_dRcR::synapse0x21fbf10() {
   return (neuron0x21ee130()*0.00152784);
}

double NNfunction_ss_dRcR::synapse0x21fc290() {
   return (neuron0x21e9570()*0.0021411);
}

double NNfunction_ss_dRcR::synapse0x21fc2d0() {
   return (neuron0x21e98b0()*-0.0250226);
}

double NNfunction_ss_dRcR::synapse0x21fc310() {
   return (neuron0x21e9bf0()*0.00539433);
}

double NNfunction_ss_dRcR::synapse0x21fc350() {
   return (neuron0x21e9f30()*0.165058);
}

double NNfunction_ss_dRcR::synapse0x21fc390() {
   return (neuron0x21ea270()*-0.0681413);
}

double NNfunction_ss_dRcR::synapse0x21fc3d0() {
   return (neuron0x21ea5b0()*0.0463768);
}

double NNfunction_ss_dRcR::synapse0x21fc410() {
   return (neuron0x21ea8f0()*-0.0140186);
}

double NNfunction_ss_dRcR::synapse0x21fc450() {
   return (neuron0x21eac30()*-0.0450451);
}

double NNfunction_ss_dRcR::synapse0x21fc490() {
   return (neuron0x21eaf70()*0.135112);
}

double NNfunction_ss_dRcR::synapse0x21fc4d0() {
   return (neuron0x21eb2b0()*-0.0158446);
}

double NNfunction_ss_dRcR::synapse0x21fc510() {
   return (neuron0x21eb5f0()*0.0111887);
}

double NNfunction_ss_dRcR::synapse0x21fc550() {
   return (neuron0x21eb930()*-0.0730466);
}

double NNfunction_ss_dRcR::synapse0x21fc590() {
   return (neuron0x21ebc70()*0.0323193);
}

double NNfunction_ss_dRcR::synapse0x21fc5d0() {
   return (neuron0x21ebfb0()*0.138325);
}

double NNfunction_ss_dRcR::synapse0x21fc610() {
   return (neuron0x21ec2f0()*-0.000142375);
}

double NNfunction_ss_dRcR::synapse0x21fc650() {
   return (neuron0x21ec630()*0.83785);
}

double NNfunction_ss_dRcR::synapse0x21fc0e0() {
   return (neuron0x21ec970()*0.10181);
}

double NNfunction_ss_dRcR::synapse0x21fc120() {
   return (neuron0x21eced0()*-1.80686);
}

double NNfunction_ss_dRcR::synapse0x21fc7a0() {
   return (neuron0x21ed0f0()*0.000935133);
}

double NNfunction_ss_dRcR::synapse0x21fc7e0() {
   return (neuron0x21ed430()*-0.0167775);
}

double NNfunction_ss_dRcR::synapse0x21fc820() {
   return (neuron0x21ed770()*0.0507231);
}

double NNfunction_ss_dRcR::synapse0x21fc860() {
   return (neuron0x21edab0()*0.0347861);
}

double NNfunction_ss_dRcR::synapse0x21fc8a0() {
   return (neuron0x21eddf0()*-0.011502);
}

double NNfunction_ss_dRcR::synapse0x21fc8e0() {
   return (neuron0x21ee130()*-0.0217049);
}

double NNfunction_ss_dRcR::synapse0x21fcc60() {
   return (neuron0x21e9570()*0.0170843);
}

double NNfunction_ss_dRcR::synapse0x21fcca0() {
   return (neuron0x21e98b0()*-0.0126364);
}

double NNfunction_ss_dRcR::synapse0x21fcce0() {
   return (neuron0x21e9bf0()*-0.0864836);
}

double NNfunction_ss_dRcR::synapse0x21fcd20() {
   return (neuron0x21e9f30()*-0.226378);
}

double NNfunction_ss_dRcR::synapse0x21fcd60() {
   return (neuron0x21ea270()*-0.146342);
}

double NNfunction_ss_dRcR::synapse0x21fcda0() {
   return (neuron0x21ea5b0()*0.138728);
}

double NNfunction_ss_dRcR::synapse0x21fcde0() {
   return (neuron0x21ea8f0()*0.0746087);
}

double NNfunction_ss_dRcR::synapse0x21fce20() {
   return (neuron0x21eac30()*-0.0039342);
}

double NNfunction_ss_dRcR::synapse0x21fce60() {
   return (neuron0x21eaf70()*0.0674199);
}

double NNfunction_ss_dRcR::synapse0x21f5020() {
   return (neuron0x21eb2b0()*0.00868247);
}

double NNfunction_ss_dRcR::synapse0x21f5060() {
   return (neuron0x21eb5f0()*-0.0337512);
}

double NNfunction_ss_dRcR::synapse0x21f50a0() {
   return (neuron0x21eb930()*0.0142389);
}

double NNfunction_ss_dRcR::synapse0x21f50e0() {
   return (neuron0x21ebc70()*-0.0109473);
}

double NNfunction_ss_dRcR::synapse0x21f5120() {
   return (neuron0x21ebfb0()*0.0404805);
}

double NNfunction_ss_dRcR::synapse0x21f5160() {
   return (neuron0x21ec2f0()*0.187971);
}

double NNfunction_ss_dRcR::synapse0x21f51a0() {
   return (neuron0x21ec630()*1.93046);
}

double NNfunction_ss_dRcR::synapse0x21fcab0() {
   return (neuron0x21ec970()*0.162811);
}

double NNfunction_ss_dRcR::synapse0x21fcaf0() {
   return (neuron0x21eced0()*-0.131053);
}

double NNfunction_ss_dRcR::synapse0x21f52f0() {
   return (neuron0x21ed0f0()*-0.0329325);
}

double NNfunction_ss_dRcR::synapse0x21f5330() {
   return (neuron0x21ed430()*0.0118503);
}

double NNfunction_ss_dRcR::synapse0x21f5370() {
   return (neuron0x21ed770()*-0.087712);
}

double NNfunction_ss_dRcR::synapse0x21f53b0() {
   return (neuron0x21edab0()*0.0711482);
}

double NNfunction_ss_dRcR::synapse0x21f53f0() {
   return (neuron0x21eddf0()*-0.0478737);
}

double NNfunction_ss_dRcR::synapse0x21f5430() {
   return (neuron0x21ee130()*-0.0310308);
}

double NNfunction_ss_dRcR::synapse0x21f57b0() {
   return (neuron0x21e9570()*-0.0378742);
}

double NNfunction_ss_dRcR::synapse0x21f57f0() {
   return (neuron0x21e98b0()*0.0124455);
}

double NNfunction_ss_dRcR::synapse0x21f5830() {
   return (neuron0x21e9bf0()*0.0119864);
}

double NNfunction_ss_dRcR::synapse0x21f5870() {
   return (neuron0x21e9f30()*-0.0398053);
}

double NNfunction_ss_dRcR::synapse0x21f58b0() {
   return (neuron0x21ea270()*0.0312384);
}

double NNfunction_ss_dRcR::synapse0x21f58f0() {
   return (neuron0x21ea5b0()*-0.0907603);
}

double NNfunction_ss_dRcR::synapse0x21f5930() {
   return (neuron0x21ea8f0()*-0.0586648);
}

double NNfunction_ss_dRcR::synapse0x21f5970() {
   return (neuron0x21eac30()*-0.0118569);
}

double NNfunction_ss_dRcR::synapse0x21f59b0() {
   return (neuron0x21eaf70()*-0.0273982);
}

double NNfunction_ss_dRcR::synapse0x21f59f0() {
   return (neuron0x21eb2b0()*0.0294629);
}

double NNfunction_ss_dRcR::synapse0x21f5a30() {
   return (neuron0x21eb5f0()*-0.00243216);
}

double NNfunction_ss_dRcR::synapse0x21f5a70() {
   return (neuron0x21eb930()*0.0208336);
}

double NNfunction_ss_dRcR::synapse0x21f5ab0() {
   return (neuron0x21ebc70()*0.0354357);
}

double NNfunction_ss_dRcR::synapse0x21f5af0() {
   return (neuron0x21ebfb0()*-0.0261033);
}

double NNfunction_ss_dRcR::synapse0x21f5b30() {
   return (neuron0x21ec2f0()*-0.0540165);
}

double NNfunction_ss_dRcR::synapse0x21f5b70() {
   return (neuron0x21ec630()*1.17891);
}

double NNfunction_ss_dRcR::synapse0x21f5600() {
   return (neuron0x21ec970()*-0.0470967);
}

double NNfunction_ss_dRcR::synapse0x21f5640() {
   return (neuron0x21eced0()*0.0906089);
}

double NNfunction_ss_dRcR::synapse0x21f5cc0() {
   return (neuron0x21ed0f0()*0.0188515);
}

double NNfunction_ss_dRcR::synapse0x21f5d00() {
   return (neuron0x21ed430()*0.00173469);
}

double NNfunction_ss_dRcR::synapse0x21f5d40() {
   return (neuron0x21ed770()*0.0215019);
}

double NNfunction_ss_dRcR::synapse0x21f5d80() {
   return (neuron0x21edab0()*-0.036612);
}

double NNfunction_ss_dRcR::synapse0x21f5dc0() {
   return (neuron0x21eddf0()*0.033667);
}

double NNfunction_ss_dRcR::synapse0x21f5e00() {
   return (neuron0x21ee130()*-0.0124976);
}

double NNfunction_ss_dRcR::synapse0x21f5fd0() {
   return (neuron0x21e9570()*0.338896);
}

double NNfunction_ss_dRcR::synapse0x21ff060() {
   return (neuron0x21e98b0()*-0.294942);
}

double NNfunction_ss_dRcR::synapse0x21ff0a0() {
   return (neuron0x21e9bf0()*0.0606774);
}

double NNfunction_ss_dRcR::synapse0x21ff0e0() {
   return (neuron0x21e9f30()*0.177535);
}

double NNfunction_ss_dRcR::synapse0x21ff120() {
   return (neuron0x21ea270()*0.36304);
}

double NNfunction_ss_dRcR::synapse0x21ff160() {
   return (neuron0x21ea5b0()*0.230947);
}

double NNfunction_ss_dRcR::synapse0x21ff1a0() {
   return (neuron0x21ea8f0()*0.919839);
}

double NNfunction_ss_dRcR::synapse0x21ff1e0() {
   return (neuron0x21eac30()*-0.195589);
}

double NNfunction_ss_dRcR::synapse0x21ff220() {
   return (neuron0x21eaf70()*0.0546261);
}

double NNfunction_ss_dRcR::synapse0x21ff260() {
   return (neuron0x21eb2b0()*-0.5386);
}

double NNfunction_ss_dRcR::synapse0x21ff2a0() {
   return (neuron0x21eb5f0()*0.158645);
}

double NNfunction_ss_dRcR::synapse0x21ff2e0() {
   return (neuron0x21eb930()*-0.60809);
}

double NNfunction_ss_dRcR::synapse0x21ff320() {
   return (neuron0x21ebc70()*0.264125);
}

double NNfunction_ss_dRcR::synapse0x21ff360() {
   return (neuron0x21ebfb0()*0.119875);
}

double NNfunction_ss_dRcR::synapse0x21ff3a0() {
   return (neuron0x21ec2f0()*0.0613384);
}

double NNfunction_ss_dRcR::synapse0x21ff3e0() {
   return (neuron0x21ec630()*-0.507854);
}

double NNfunction_ss_dRcR::synapse0x21feeb0() {
   return (neuron0x21ec970()*0.535235);
}

double NNfunction_ss_dRcR::synapse0x21feef0() {
   return (neuron0x21eced0()*-0.59408);
}

double NNfunction_ss_dRcR::synapse0x21ff530() {
   return (neuron0x21ed0f0()*-0.933481);
}

double NNfunction_ss_dRcR::synapse0x21ff570() {
   return (neuron0x21ed430()*0.240168);
}

double NNfunction_ss_dRcR::synapse0x21ff5b0() {
   return (neuron0x21ed770()*-0.241177);
}

double NNfunction_ss_dRcR::synapse0x21ff5f0() {
   return (neuron0x21edab0()*-0.510209);
}

double NNfunction_ss_dRcR::synapse0x21ff630() {
   return (neuron0x21eddf0()*-0.781342);
}

double NNfunction_ss_dRcR::synapse0x21ff670() {
   return (neuron0x21ee130()*0.0631294);
}

double NNfunction_ss_dRcR::synapse0x21ff9f0() {
   return (neuron0x21e9570()*-0.0319811);
}

double NNfunction_ss_dRcR::synapse0x21ffa30() {
   return (neuron0x21e98b0()*0.528185);
}

double NNfunction_ss_dRcR::synapse0x21ffa70() {
   return (neuron0x21e9bf0()*0.0341331);
}

double NNfunction_ss_dRcR::synapse0x21ffab0() {
   return (neuron0x21e9f30()*-0.971557);
}

double NNfunction_ss_dRcR::synapse0x21ffaf0() {
   return (neuron0x21ea270()*-0.0536771);
}

double NNfunction_ss_dRcR::synapse0x21ffb30() {
   return (neuron0x21ea5b0()*-0.161199);
}

double NNfunction_ss_dRcR::synapse0x21ffb70() {
   return (neuron0x21ea8f0()*-0.00446409);
}

double NNfunction_ss_dRcR::synapse0x21ffbb0() {
   return (neuron0x21eac30()*-0.108938);
}

double NNfunction_ss_dRcR::synapse0x21ffbf0() {
   return (neuron0x21eaf70()*0.119879);
}

double NNfunction_ss_dRcR::synapse0x21ffc30() {
   return (neuron0x21eb2b0()*0.0527074);
}

double NNfunction_ss_dRcR::synapse0x21ffc70() {
   return (neuron0x21eb5f0()*0.11928);
}

double NNfunction_ss_dRcR::synapse0x21ffcb0() {
   return (neuron0x21eb930()*0.0507144);
}

double NNfunction_ss_dRcR::synapse0x21ffcf0() {
   return (neuron0x21ebc70()*-0.214425);
}

double NNfunction_ss_dRcR::synapse0x21ffd30() {
   return (neuron0x21ebfb0()*0.0470593);
}

double NNfunction_ss_dRcR::synapse0x21ffd70() {
   return (neuron0x21ec2f0()*-0.0344098);
}

double NNfunction_ss_dRcR::synapse0x21ffdb0() {
   return (neuron0x21ec630()*0.034913);
}

double NNfunction_ss_dRcR::synapse0x21ff840() {
   return (neuron0x21ec970()*0.00520548);
}

double NNfunction_ss_dRcR::synapse0x21ff880() {
   return (neuron0x21eced0()*-0.00258645);
}

double NNfunction_ss_dRcR::synapse0x21fff00() {
   return (neuron0x21ed0f0()*-0.0371875);
}

double NNfunction_ss_dRcR::synapse0x21fff40() {
   return (neuron0x21ed430()*-0.233563);
}

double NNfunction_ss_dRcR::synapse0x21fff80() {
   return (neuron0x21ed770()*-0.0576293);
}

double NNfunction_ss_dRcR::synapse0x21fffc0() {
   return (neuron0x21edab0()*0.219651);
}

double NNfunction_ss_dRcR::synapse0x2200000() {
   return (neuron0x21eddf0()*-0.0219503);
}

double NNfunction_ss_dRcR::synapse0x2200040() {
   return (neuron0x21ee130()*0.00289888);
}

double NNfunction_ss_dRcR::synapse0x22003c0() {
   return (neuron0x21e9570()*-0.00206252);
}

double NNfunction_ss_dRcR::synapse0x2200400() {
   return (neuron0x21e98b0()*0.0199823);
}

double NNfunction_ss_dRcR::synapse0x2200440() {
   return (neuron0x21e9bf0()*0.00328353);
}

double NNfunction_ss_dRcR::synapse0x2200480() {
   return (neuron0x21e9f30()*-10.9859);
}

double NNfunction_ss_dRcR::synapse0x22004c0() {
   return (neuron0x21ea270()*0.00574166);
}

double NNfunction_ss_dRcR::synapse0x2200500() {
   return (neuron0x21ea5b0()*-0.0310212);
}

double NNfunction_ss_dRcR::synapse0x2200540() {
   return (neuron0x21ea8f0()*-0.00962993);
}

double NNfunction_ss_dRcR::synapse0x2200580() {
   return (neuron0x21eac30()*-0.00787313);
}

double NNfunction_ss_dRcR::synapse0x22005c0() {
   return (neuron0x21eaf70()*-0.00788828);
}

double NNfunction_ss_dRcR::synapse0x2200600() {
   return (neuron0x21eb2b0()*-0.00440389);
}

double NNfunction_ss_dRcR::synapse0x2200640() {
   return (neuron0x21eb5f0()*0.00223095);
}

double NNfunction_ss_dRcR::synapse0x2200680() {
   return (neuron0x21eb930()*0.0257987);
}

double NNfunction_ss_dRcR::synapse0x22006c0() {
   return (neuron0x21ebc70()*-0.0018205);
}

double NNfunction_ss_dRcR::synapse0x2200700() {
   return (neuron0x21ebfb0()*0.00592398);
}

double NNfunction_ss_dRcR::synapse0x2200740() {
   return (neuron0x21ec2f0()*0.00631971);
}

double NNfunction_ss_dRcR::synapse0x2200780() {
   return (neuron0x21ec630()*0.321075);
}

double NNfunction_ss_dRcR::synapse0x2200210() {
   return (neuron0x21ec970()*0.00507779);
}

double NNfunction_ss_dRcR::synapse0x2200250() {
   return (neuron0x21eced0()*0.219561);
}

double NNfunction_ss_dRcR::synapse0x22008d0() {
   return (neuron0x21ed0f0()*0.00129057);
}

double NNfunction_ss_dRcR::synapse0x2200910() {
   return (neuron0x21ed430()*0.0121366);
}

double NNfunction_ss_dRcR::synapse0x2200950() {
   return (neuron0x21ed770()*-0.0267776);
}

double NNfunction_ss_dRcR::synapse0x2200990() {
   return (neuron0x21edab0()*-0.0227382);
}

double NNfunction_ss_dRcR::synapse0x22009d0() {
   return (neuron0x21eddf0()*0.0058662);
}

double NNfunction_ss_dRcR::synapse0x2200a10() {
   return (neuron0x21ee130()*-0.0522763);
}

double NNfunction_ss_dRcR::synapse0x2200d90() {
   return (neuron0x21e9570()*0.0267167);
}

double NNfunction_ss_dRcR::synapse0x2200dd0() {
   return (neuron0x21e98b0()*-0.0609578);
}

double NNfunction_ss_dRcR::synapse0x2200e10() {
   return (neuron0x21e9bf0()*0.0923125);
}

double NNfunction_ss_dRcR::synapse0x2200e50() {
   return (neuron0x21e9f30()*-0.553227);
}

double NNfunction_ss_dRcR::synapse0x2200e90() {
   return (neuron0x21ea270()*-0.0970897);
}

double NNfunction_ss_dRcR::synapse0x2200ed0() {
   return (neuron0x21ea5b0()*-0.0462879);
}

double NNfunction_ss_dRcR::synapse0x2200f10() {
   return (neuron0x21ea8f0()*0.085998);
}

double NNfunction_ss_dRcR::synapse0x2200f50() {
   return (neuron0x21eac30()*-0.147628);
}

double NNfunction_ss_dRcR::synapse0x2200f90() {
   return (neuron0x21eaf70()*0.164037);
}

double NNfunction_ss_dRcR::synapse0x2200fd0() {
   return (neuron0x21eb2b0()*0.0485669);
}

double NNfunction_ss_dRcR::synapse0x2201010() {
   return (neuron0x21eb5f0()*-0.00583985);
}

double NNfunction_ss_dRcR::synapse0x2201050() {
   return (neuron0x21eb930()*-0.00657426);
}

double NNfunction_ss_dRcR::synapse0x2201090() {
   return (neuron0x21ebc70()*0.10189);
}

double NNfunction_ss_dRcR::synapse0x22010d0() {
   return (neuron0x21ebfb0()*0.00924413);
}

double NNfunction_ss_dRcR::synapse0x2201110() {
   return (neuron0x21ec2f0()*-0.0881874);
}

double NNfunction_ss_dRcR::synapse0x2201150() {
   return (neuron0x21ec630()*0.0467668);
}

double NNfunction_ss_dRcR::synapse0x2200be0() {
   return (neuron0x21ec970()*-0.0322175);
}

double NNfunction_ss_dRcR::synapse0x2200c20() {
   return (neuron0x21eced0()*0.241939);
}

double NNfunction_ss_dRcR::synapse0x22012a0() {
   return (neuron0x21ed0f0()*0.0276668);
}

double NNfunction_ss_dRcR::synapse0x22012e0() {
   return (neuron0x21ed430()*0.21366);
}

double NNfunction_ss_dRcR::synapse0x2201320() {
   return (neuron0x21ed770()*0.00326594);
}

double NNfunction_ss_dRcR::synapse0x2201360() {
   return (neuron0x21edab0()*-0.044713);
}

double NNfunction_ss_dRcR::synapse0x22013a0() {
   return (neuron0x21eddf0()*-0.0200648);
}

double NNfunction_ss_dRcR::synapse0x22013e0() {
   return (neuron0x21ee130()*-0.059987);
}

double NNfunction_ss_dRcR::synapse0x2201760() {
   return (neuron0x21e9570()*0.261662);
}

double NNfunction_ss_dRcR::synapse0x22017a0() {
   return (neuron0x21e98b0()*-0.310078);
}

double NNfunction_ss_dRcR::synapse0x22017e0() {
   return (neuron0x21e9bf0()*0.320595);
}

double NNfunction_ss_dRcR::synapse0x2201820() {
   return (neuron0x21e9f30()*0.471865);
}

double NNfunction_ss_dRcR::synapse0x2201860() {
   return (neuron0x21ea270()*0.164011);
}

double NNfunction_ss_dRcR::synapse0x22018a0() {
   return (neuron0x21ea5b0()*-0.0103793);
}

double NNfunction_ss_dRcR::synapse0x22018e0() {
   return (neuron0x21ea8f0()*0.182386);
}

double NNfunction_ss_dRcR::synapse0x2201920() {
   return (neuron0x21eac30()*-0.104857);
}

double NNfunction_ss_dRcR::synapse0x2201960() {
   return (neuron0x21eaf70()*0.0739837);
}

double NNfunction_ss_dRcR::synapse0x22019a0() {
   return (neuron0x21eb2b0()*0.324282);
}

double NNfunction_ss_dRcR::synapse0x22019e0() {
   return (neuron0x21eb5f0()*0.221772);
}

double NNfunction_ss_dRcR::synapse0x2201a20() {
   return (neuron0x21eb930()*-0.260058);
}

double NNfunction_ss_dRcR::synapse0x2201a60() {
   return (neuron0x21ebc70()*-0.167933);
}

double NNfunction_ss_dRcR::synapse0x2201aa0() {
   return (neuron0x21ebfb0()*0.129314);
}

double NNfunction_ss_dRcR::synapse0x2201ae0() {
   return (neuron0x21ec2f0()*-0.045528);
}

double NNfunction_ss_dRcR::synapse0x2201b20() {
   return (neuron0x21ec630()*-0.578132);
}

double NNfunction_ss_dRcR::synapse0x22015b0() {
   return (neuron0x21ec970()*0.020481);
}

double NNfunction_ss_dRcR::synapse0x22015f0() {
   return (neuron0x21eced0()*0.148746);
}

double NNfunction_ss_dRcR::synapse0x2201c70() {
   return (neuron0x21ed0f0()*0.553635);
}

double NNfunction_ss_dRcR::synapse0x2201cb0() {
   return (neuron0x21ed430()*-0.276319);
}

double NNfunction_ss_dRcR::synapse0x2201cf0() {
   return (neuron0x21ed770()*0.0828794);
}

double NNfunction_ss_dRcR::synapse0x2201d30() {
   return (neuron0x21edab0()*-0.129568);
}

double NNfunction_ss_dRcR::synapse0x2201d70() {
   return (neuron0x21eddf0()*0.161015);
}

double NNfunction_ss_dRcR::synapse0x2201db0() {
   return (neuron0x21ee130()*-0.087306);
}

double NNfunction_ss_dRcR::synapse0x2202130() {
   return (neuron0x21e9570()*0.508596);
}

double NNfunction_ss_dRcR::synapse0x2202170() {
   return (neuron0x21e98b0()*-0.654449);
}

double NNfunction_ss_dRcR::synapse0x22021b0() {
   return (neuron0x21e9bf0()*-0.0546863);
}

double NNfunction_ss_dRcR::synapse0x22021f0() {
   return (neuron0x21e9f30()*-0.73484);
}

double NNfunction_ss_dRcR::synapse0x2202230() {
   return (neuron0x21ea270()*-0.00956214);
}

double NNfunction_ss_dRcR::synapse0x2202270() {
   return (neuron0x21ea5b0()*0.037765);
}

double NNfunction_ss_dRcR::synapse0x22022b0() {
   return (neuron0x21ea8f0()*-0.521707);
}

double NNfunction_ss_dRcR::synapse0x22022f0() {
   return (neuron0x21eac30()*-0.287781);
}

double NNfunction_ss_dRcR::synapse0x2202330() {
   return (neuron0x21eaf70()*-0.197422);
}

double NNfunction_ss_dRcR::synapse0x2202370() {
   return (neuron0x21eb2b0()*-0.0884161);
}

double NNfunction_ss_dRcR::synapse0x22023b0() {
   return (neuron0x21eb5f0()*0.00827017);
}

double NNfunction_ss_dRcR::synapse0x22023f0() {
   return (neuron0x21eb930()*-0.61637);
}

double NNfunction_ss_dRcR::synapse0x2202430() {
   return (neuron0x21ebc70()*0.298474);
}

double NNfunction_ss_dRcR::synapse0x2202470() {
   return (neuron0x21ebfb0()*0.0909526);
}

double NNfunction_ss_dRcR::synapse0x22024b0() {
   return (neuron0x21ec2f0()*-0.374463);
}

double NNfunction_ss_dRcR::synapse0x22024f0() {
   return (neuron0x21ec630()*0.0410279);
}

double NNfunction_ss_dRcR::synapse0x2201f80() {
   return (neuron0x21ec970()*-0.600485);
}

double NNfunction_ss_dRcR::synapse0x2201fc0() {
   return (neuron0x21eced0()*-0.712081);
}

double NNfunction_ss_dRcR::synapse0x2202640() {
   return (neuron0x21ed0f0()*0.0593479);
}

double NNfunction_ss_dRcR::synapse0x2202680() {
   return (neuron0x21ed430()*0.00375887);
}

double NNfunction_ss_dRcR::synapse0x22026c0() {
   return (neuron0x21ed770()*-0.0662694);
}

double NNfunction_ss_dRcR::synapse0x2202700() {
   return (neuron0x21edab0()*-0.615693);
}

double NNfunction_ss_dRcR::synapse0x2202740() {
   return (neuron0x21eddf0()*-0.592323);
}

double NNfunction_ss_dRcR::synapse0x2202780() {
   return (neuron0x21ee130()*-0.110597);
}

double NNfunction_ss_dRcR::synapse0x2202b00() {
   return (neuron0x21e9570()*0.00754768);
}

double NNfunction_ss_dRcR::synapse0x2202b40() {
   return (neuron0x21e98b0()*-0.00350788);
}

double NNfunction_ss_dRcR::synapse0x2202b80() {
   return (neuron0x21e9bf0()*0.00855459);
}

double NNfunction_ss_dRcR::synapse0x2202bc0() {
   return (neuron0x21e9f30()*0.0897993);
}

double NNfunction_ss_dRcR::synapse0x2202c00() {
   return (neuron0x21ea270()*0.00152737);
}

double NNfunction_ss_dRcR::synapse0x2202c40() {
   return (neuron0x21ea5b0()*0.0181759);
}

double NNfunction_ss_dRcR::synapse0x2202c80() {
   return (neuron0x21ea8f0()*0.0242544);
}

double NNfunction_ss_dRcR::synapse0x2202cc0() {
   return (neuron0x21eac30()*0.0168303);
}

double NNfunction_ss_dRcR::synapse0x2202d00() {
   return (neuron0x21eaf70()*-0.00762658);
}

double NNfunction_ss_dRcR::synapse0x2202d40() {
   return (neuron0x21eb2b0()*-0.0229439);
}

double NNfunction_ss_dRcR::synapse0x2202d80() {
   return (neuron0x21eb5f0()*0.00234264);
}

double NNfunction_ss_dRcR::synapse0x2202dc0() {
   return (neuron0x21eb930()*-0.0247428);
}

double NNfunction_ss_dRcR::synapse0x2202e00() {
   return (neuron0x21ebc70()*-0.052593);
}

double NNfunction_ss_dRcR::synapse0x2202e40() {
   return (neuron0x21ebfb0()*-0.0250471);
}

double NNfunction_ss_dRcR::synapse0x2202e80() {
   return (neuron0x21ec2f0()*0.00123298);
}

double NNfunction_ss_dRcR::synapse0x2202ec0() {
   return (neuron0x21ec630()*-1.29409);
}

double NNfunction_ss_dRcR::synapse0x2202950() {
   return (neuron0x21ec970()*-0.0158319);
}

double NNfunction_ss_dRcR::synapse0x2202990() {
   return (neuron0x21eced0()*-0.608706);
}

double NNfunction_ss_dRcR::synapse0x2203010() {
   return (neuron0x21ed0f0()*-0.0213653);
}

double NNfunction_ss_dRcR::synapse0x2203050() {
   return (neuron0x21ed430()*0.00891717);
}

double NNfunction_ss_dRcR::synapse0x2203090() {
   return (neuron0x21ed770()*0.000742371);
}

double NNfunction_ss_dRcR::synapse0x22030d0() {
   return (neuron0x21edab0()*0.00177869);
}

double NNfunction_ss_dRcR::synapse0x2203110() {
   return (neuron0x21eddf0()*-0.00975853);
}

double NNfunction_ss_dRcR::synapse0x2203150() {
   return (neuron0x21ee130()*0.0259743);
}

double NNfunction_ss_dRcR::synapse0x22034d0() {
   return (neuron0x21e9570()*-0.463684);
}

double NNfunction_ss_dRcR::synapse0x2203510() {
   return (neuron0x21e98b0()*0.164959);
}

double NNfunction_ss_dRcR::synapse0x2203550() {
   return (neuron0x21e9bf0()*-0.282305);
}

double NNfunction_ss_dRcR::synapse0x2203590() {
   return (neuron0x21e9f30()*-0.731679);
}

double NNfunction_ss_dRcR::synapse0x22035d0() {
   return (neuron0x21ea270()*-0.046443);
}

double NNfunction_ss_dRcR::synapse0x2203610() {
   return (neuron0x21ea5b0()*-0.0220241);
}

double NNfunction_ss_dRcR::synapse0x2203650() {
   return (neuron0x21ea8f0()*-0.179041);
}

double NNfunction_ss_dRcR::synapse0x2203690() {
   return (neuron0x21eac30()*1.04872);
}

double NNfunction_ss_dRcR::synapse0x22036d0() {
   return (neuron0x21eaf70()*0.466402);
}

double NNfunction_ss_dRcR::synapse0x2203710() {
   return (neuron0x21eb2b0()*0.126535);
}

double NNfunction_ss_dRcR::synapse0x2203750() {
   return (neuron0x21eb5f0()*-0.123156);
}

double NNfunction_ss_dRcR::synapse0x2203790() {
   return (neuron0x21eb930()*-0.448322);
}

double NNfunction_ss_dRcR::synapse0x22037d0() {
   return (neuron0x21ebc70()*0.125294);
}

double NNfunction_ss_dRcR::synapse0x2203810() {
   return (neuron0x21ebfb0()*0.452789);
}

double NNfunction_ss_dRcR::synapse0x2203850() {
   return (neuron0x21ec2f0()*0.125603);
}

double NNfunction_ss_dRcR::synapse0x2203890() {
   return (neuron0x21ec630()*-0.374038);
}

double NNfunction_ss_dRcR::synapse0x2203320() {
   return (neuron0x21ec970()*0.126205);
}

double NNfunction_ss_dRcR::synapse0x2203360() {
   return (neuron0x21eced0()*0.735875);
}

double NNfunction_ss_dRcR::synapse0x22039e0() {
   return (neuron0x21ed0f0()*0.307058);
}

double NNfunction_ss_dRcR::synapse0x2203a20() {
   return (neuron0x21ed430()*-0.217895);
}

double NNfunction_ss_dRcR::synapse0x2203a60() {
   return (neuron0x21ed770()*0.0419845);
}

double NNfunction_ss_dRcR::synapse0x2203aa0() {
   return (neuron0x21edab0()*-0.46073);
}

double NNfunction_ss_dRcR::synapse0x2203ae0() {
   return (neuron0x21eddf0()*-0.392793);
}

double NNfunction_ss_dRcR::synapse0x2203b20() {
   return (neuron0x21ee130()*-0.267856);
}

double NNfunction_ss_dRcR::synapse0x2203ea0() {
   return (neuron0x21e9570()*0.690568);
}

double NNfunction_ss_dRcR::synapse0x21f8470() {
   return (neuron0x21e98b0()*0.963064);
}

double NNfunction_ss_dRcR::synapse0x21f84b0() {
   return (neuron0x21e9bf0()*0.0515687);
}

double NNfunction_ss_dRcR::synapse0x21f84f0() {
   return (neuron0x21e9f30()*0.290584);
}

double NNfunction_ss_dRcR::synapse0x21f8740() {
   return (neuron0x21ea270()*0.754829);
}

double NNfunction_ss_dRcR::synapse0x21f8780() {
   return (neuron0x21ea5b0()*-0.545658);
}

double NNfunction_ss_dRcR::synapse0x21f87c0() {
   return (neuron0x21ea8f0()*-0.319423);
}

double NNfunction_ss_dRcR::synapse0x21f8a10() {
   return (neuron0x21eac30()*-0.0705909);
}

double NNfunction_ss_dRcR::synapse0x21f8a50() {
   return (neuron0x21eaf70()*-0.188905);
}

double NNfunction_ss_dRcR::synapse0x21f8ca0() {
   return (neuron0x21eb2b0()*-0.581696);
}

double NNfunction_ss_dRcR::synapse0x21f8ce0() {
   return (neuron0x21eb5f0()*0.802587);
}

double NNfunction_ss_dRcR::synapse0x21f8d20() {
   return (neuron0x21eb930()*0.588025);
}

double NNfunction_ss_dRcR::synapse0x21f8f70() {
   return (neuron0x21ebc70()*-0.21109);
}

double NNfunction_ss_dRcR::synapse0x21f8fb0() {
   return (neuron0x21ebfb0()*0.219582);
}

double NNfunction_ss_dRcR::synapse0x21f9200() {
   return (neuron0x21ec2f0()*0.369041);
}

double NNfunction_ss_dRcR::synapse0x21f9240() {
   return (neuron0x21ec630()*-0.333013);
}

double NNfunction_ss_dRcR::synapse0x2203cf0() {
   return (neuron0x21ec970()*0.521747);
}

double NNfunction_ss_dRcR::synapse0x2203d30() {
   return (neuron0x21eced0()*-0.289865);
}

double NNfunction_ss_dRcR::synapse0x21f9390() {
   return (neuron0x21ed0f0()*-0.17815);
}

double NNfunction_ss_dRcR::synapse0x21f98a0() {
   return (neuron0x21ed430()*-0.452548);
}

double NNfunction_ss_dRcR::synapse0x21f98e0() {
   return (neuron0x21ed770()*0.0914966);
}

double NNfunction_ss_dRcR::synapse0x21f9920() {
   return (neuron0x21edab0()*-0.643083);
}

double NNfunction_ss_dRcR::synapse0x21f9b70() {
   return (neuron0x21eddf0()*0.0535163);
}

double NNfunction_ss_dRcR::synapse0x21f9bb0() {
   return (neuron0x21ee130()*-0.291628);
}

double NNfunction_ss_dRcR::synapse0x21f9460() {
   return (neuron0x21e9570()*-0.445175);
}

double NNfunction_ss_dRcR::synapse0x21f94a0() {
   return (neuron0x21e98b0()*0.914358);
}

double NNfunction_ss_dRcR::synapse0x21f94e0() {
   return (neuron0x21e9bf0()*0.136781);
}

double NNfunction_ss_dRcR::synapse0x21f9520() {
   return (neuron0x21e9f30()*-0.135958);
}

double NNfunction_ss_dRcR::synapse0x21f9ea0() {
   return (neuron0x21ea270()*-0.259703);
}

double NNfunction_ss_dRcR::synapse0x22061f0() {
   return (neuron0x21ea5b0()*0.700511);
}

double NNfunction_ss_dRcR::synapse0x2206230() {
   return (neuron0x21ea8f0()*-0.602072);
}

double NNfunction_ss_dRcR::synapse0x2206270() {
   return (neuron0x21eac30()*-0.256993);
}

double NNfunction_ss_dRcR::synapse0x22062b0() {
   return (neuron0x21eaf70()*-0.15039);
}

double NNfunction_ss_dRcR::synapse0x22062f0() {
   return (neuron0x21eb2b0()*-0.161967);
}

double NNfunction_ss_dRcR::synapse0x2206330() {
   return (neuron0x21eb5f0()*-0.0801694);
}

double NNfunction_ss_dRcR::synapse0x2206370() {
   return (neuron0x21eb930()*-0.268268);
}

double NNfunction_ss_dRcR::synapse0x22063b0() {
   return (neuron0x21ebc70()*-0.305913);
}

double NNfunction_ss_dRcR::synapse0x22063f0() {
   return (neuron0x21ebfb0()*1.02257);
}

double NNfunction_ss_dRcR::synapse0x2206430() {
   return (neuron0x21ec2f0()*-0.505421);
}

double NNfunction_ss_dRcR::synapse0x2206470() {
   return (neuron0x21ec630()*0.15006);
}

double NNfunction_ss_dRcR::synapse0x21f9d80() {
   return (neuron0x21ec970()*0.342695);
}

double NNfunction_ss_dRcR::synapse0x21f9dc0() {
   return (neuron0x21eced0()*0.416745);
}

double NNfunction_ss_dRcR::synapse0x22065c0() {
   return (neuron0x21ed0f0()*0.337983);
}

double NNfunction_ss_dRcR::synapse0x2206600() {
   return (neuron0x21ed430()*0.400419);
}

double NNfunction_ss_dRcR::synapse0x2206640() {
   return (neuron0x21ed770()*-0.120748);
}

double NNfunction_ss_dRcR::synapse0x2206680() {
   return (neuron0x21edab0()*-0.190132);
}

double NNfunction_ss_dRcR::synapse0x22066c0() {
   return (neuron0x21eddf0()*-0.372038);
}

double NNfunction_ss_dRcR::synapse0x2206700() {
   return (neuron0x21ee130()*0.0118342);
}

double NNfunction_ss_dRcR::synapse0x2206a80() {
   return (neuron0x21e9570()*-0.0410055);
}

double NNfunction_ss_dRcR::synapse0x2206ac0() {
   return (neuron0x21e98b0()*-0.00576884);
}

double NNfunction_ss_dRcR::synapse0x2206b00() {
   return (neuron0x21e9bf0()*0.0253927);
}

double NNfunction_ss_dRcR::synapse0x2206b40() {
   return (neuron0x21e9f30()*-0.226917);
}

double NNfunction_ss_dRcR::synapse0x2206b80() {
   return (neuron0x21ea270()*0.0344135);
}

double NNfunction_ss_dRcR::synapse0x2206bc0() {
   return (neuron0x21ea5b0()*0.0657903);
}

double NNfunction_ss_dRcR::synapse0x2206c00() {
   return (neuron0x21ea8f0()*0.032659);
}

double NNfunction_ss_dRcR::synapse0x2206c40() {
   return (neuron0x21eac30()*0.0256867);
}

double NNfunction_ss_dRcR::synapse0x2206c80() {
   return (neuron0x21eaf70()*0.0658989);
}

double NNfunction_ss_dRcR::synapse0x2206cc0() {
   return (neuron0x21eb2b0()*-0.0312841);
}

double NNfunction_ss_dRcR::synapse0x2206d00() {
   return (neuron0x21eb5f0()*-0.0545625);
}

double NNfunction_ss_dRcR::synapse0x2206d40() {
   return (neuron0x21eb930()*-0.0273905);
}

double NNfunction_ss_dRcR::synapse0x2206d80() {
   return (neuron0x21ebc70()*-0.0208916);
}

double NNfunction_ss_dRcR::synapse0x2206dc0() {
   return (neuron0x21ebfb0()*0.0134944);
}

double NNfunction_ss_dRcR::synapse0x2206e00() {
   return (neuron0x21ec2f0()*0.00948318);
}

double NNfunction_ss_dRcR::synapse0x2206e40() {
   return (neuron0x21ec630()*-0.0553226);
}

double NNfunction_ss_dRcR::synapse0x22068d0() {
   return (neuron0x21ec970()*0.0666376);
}

double NNfunction_ss_dRcR::synapse0x2206910() {
   return (neuron0x21eced0()*2.33667);
}

double NNfunction_ss_dRcR::synapse0x2206f90() {
   return (neuron0x21ed0f0()*-0.0760351);
}

double NNfunction_ss_dRcR::synapse0x2206fd0() {
   return (neuron0x21ed430()*-0.0628251);
}

double NNfunction_ss_dRcR::synapse0x2207010() {
   return (neuron0x21ed770()*0.0113185);
}

double NNfunction_ss_dRcR::synapse0x2207050() {
   return (neuron0x21edab0()*0.0114197);
}

double NNfunction_ss_dRcR::synapse0x2207090() {
   return (neuron0x21eddf0()*0.0269451);
}

double NNfunction_ss_dRcR::synapse0x22070d0() {
   return (neuron0x21ee130()*-0.0895034);
}

double NNfunction_ss_dRcR::synapse0x2207450() {
   return (neuron0x21e9570()*-0.105341);
}

double NNfunction_ss_dRcR::synapse0x2207490() {
   return (neuron0x21e98b0()*0.0297164);
}

double NNfunction_ss_dRcR::synapse0x22074d0() {
   return (neuron0x21e9bf0()*0.283814);
}

double NNfunction_ss_dRcR::synapse0x2207510() {
   return (neuron0x21e9f30()*0.0295963);
}

double NNfunction_ss_dRcR::synapse0x2207550() {
   return (neuron0x21ea270()*0.328158);
}

double NNfunction_ss_dRcR::synapse0x2207590() {
   return (neuron0x21ea5b0()*0.00554776);
}

double NNfunction_ss_dRcR::synapse0x22075d0() {
   return (neuron0x21ea8f0()*0.687304);
}

double NNfunction_ss_dRcR::synapse0x2207610() {
   return (neuron0x21eac30()*0.386927);
}

double NNfunction_ss_dRcR::synapse0x2207650() {
   return (neuron0x21eaf70()*0.340806);
}

double NNfunction_ss_dRcR::synapse0x2207690() {
   return (neuron0x21eb2b0()*-0.785137);
}

double NNfunction_ss_dRcR::synapse0x22076d0() {
   return (neuron0x21eb5f0()*-0.377304);
}

double NNfunction_ss_dRcR::synapse0x2207710() {
   return (neuron0x21eb930()*-0.00981231);
}

double NNfunction_ss_dRcR::synapse0x2207750() {
   return (neuron0x21ebc70()*-0.299091);
}

double NNfunction_ss_dRcR::synapse0x2207790() {
   return (neuron0x21ebfb0()*-0.095016);
}

double NNfunction_ss_dRcR::synapse0x22077d0() {
   return (neuron0x21ec2f0()*-0.165886);
}

double NNfunction_ss_dRcR::synapse0x2207810() {
   return (neuron0x21ec630()*-0.0253068);
}

double NNfunction_ss_dRcR::synapse0x22072a0() {
   return (neuron0x21ec970()*0.189532);
}

double NNfunction_ss_dRcR::synapse0x22072e0() {
   return (neuron0x21eced0()*0.0348129);
}

double NNfunction_ss_dRcR::synapse0x2207960() {
   return (neuron0x21ed0f0()*0.198008);
}

double NNfunction_ss_dRcR::synapse0x22079a0() {
   return (neuron0x21ed430()*0.415848);
}

double NNfunction_ss_dRcR::synapse0x22079e0() {
   return (neuron0x21ed770()*0.187414);
}

double NNfunction_ss_dRcR::synapse0x2207a20() {
   return (neuron0x21edab0()*-0.432211);
}

double NNfunction_ss_dRcR::synapse0x2207a60() {
   return (neuron0x21eddf0()*-0.0586204);
}

double NNfunction_ss_dRcR::synapse0x2207aa0() {
   return (neuron0x21ee130()*0.815898);
}

double NNfunction_ss_dRcR::synapse0x2207e20() {
   return (neuron0x21e9570()*-0.212795);
}

double NNfunction_ss_dRcR::synapse0x2207e60() {
   return (neuron0x21e98b0()*-0.294613);
}

double NNfunction_ss_dRcR::synapse0x2207ea0() {
   return (neuron0x21e9bf0()*0.0971839);
}

double NNfunction_ss_dRcR::synapse0x2207ee0() {
   return (neuron0x21e9f30()*0.0540681);
}

double NNfunction_ss_dRcR::synapse0x2207f20() {
   return (neuron0x21ea270()*-0.163311);
}

double NNfunction_ss_dRcR::synapse0x2207f60() {
   return (neuron0x21ea5b0()*-0.0274351);
}

double NNfunction_ss_dRcR::synapse0x2207fa0() {
   return (neuron0x21ea8f0()*-0.0422552);
}

double NNfunction_ss_dRcR::synapse0x2207fe0() {
   return (neuron0x21eac30()*-0.327188);
}

double NNfunction_ss_dRcR::synapse0x2208020() {
   return (neuron0x21eaf70()*-0.142852);
}

double NNfunction_ss_dRcR::synapse0x2208060() {
   return (neuron0x21eb2b0()*-0.0506105);
}

double NNfunction_ss_dRcR::synapse0x22080a0() {
   return (neuron0x21eb5f0()*-0.0554208);
}

double NNfunction_ss_dRcR::synapse0x22080e0() {
   return (neuron0x21eb930()*0.0775267);
}

double NNfunction_ss_dRcR::synapse0x2208120() {
   return (neuron0x21ebc70()*0.330124);
}

double NNfunction_ss_dRcR::synapse0x2208160() {
   return (neuron0x21ebfb0()*-0.330768);
}

double NNfunction_ss_dRcR::synapse0x22081a0() {
   return (neuron0x21ec2f0()*0.694178);
}

double NNfunction_ss_dRcR::synapse0x22081e0() {
   return (neuron0x21ec630()*-0.227648);
}

double NNfunction_ss_dRcR::synapse0x2207c70() {
   return (neuron0x21ec970()*-0.116262);
}

double NNfunction_ss_dRcR::synapse0x2207cb0() {
   return (neuron0x21eced0()*0.00888483);
}

double NNfunction_ss_dRcR::synapse0x2208330() {
   return (neuron0x21ed0f0()*0.531385);
}

double NNfunction_ss_dRcR::synapse0x2208370() {
   return (neuron0x21ed430()*-0.268971);
}

double NNfunction_ss_dRcR::synapse0x22083b0() {
   return (neuron0x21ed770()*-0.0906906);
}

double NNfunction_ss_dRcR::synapse0x22083f0() {
   return (neuron0x21edab0()*0.0896862);
}

double NNfunction_ss_dRcR::synapse0x2208430() {
   return (neuron0x21eddf0()*-0.0124115);
}

double NNfunction_ss_dRcR::synapse0x2208470() {
   return (neuron0x21ee130()*-0.0805698);
}

double NNfunction_ss_dRcR::synapse0x22087f0() {
   return (neuron0x21e9570()*0.172211);
}

double NNfunction_ss_dRcR::synapse0x2208830() {
   return (neuron0x21e98b0()*-0.0956454);
}

double NNfunction_ss_dRcR::synapse0x2208870() {
   return (neuron0x21e9bf0()*0.0835659);
}

double NNfunction_ss_dRcR::synapse0x22088b0() {
   return (neuron0x21e9f30()*-0.00800954);
}

double NNfunction_ss_dRcR::synapse0x22088f0() {
   return (neuron0x21ea270()*0.184403);
}

double NNfunction_ss_dRcR::synapse0x2208930() {
   return (neuron0x21ea5b0()*0.186974);
}

double NNfunction_ss_dRcR::synapse0x2208970() {
   return (neuron0x21ea8f0()*-1.05648);
}

double NNfunction_ss_dRcR::synapse0x22089b0() {
   return (neuron0x21eac30()*0.19185);
}

double NNfunction_ss_dRcR::synapse0x22089f0() {
   return (neuron0x21eaf70()*-0.01148);
}

double NNfunction_ss_dRcR::synapse0x2208a30() {
   return (neuron0x21eb2b0()*-0.509841);
}

double NNfunction_ss_dRcR::synapse0x2208a70() {
   return (neuron0x21eb5f0()*-0.436744);
}

double NNfunction_ss_dRcR::synapse0x2208ab0() {
   return (neuron0x21eb930()*0.137644);
}

double NNfunction_ss_dRcR::synapse0x2208af0() {
   return (neuron0x21ebc70()*-0.203827);
}

double NNfunction_ss_dRcR::synapse0x2208b30() {
   return (neuron0x21ebfb0()*0.0558074);
}

double NNfunction_ss_dRcR::synapse0x2208b70() {
   return (neuron0x21ec2f0()*-0.652779);
}

double NNfunction_ss_dRcR::synapse0x2208bb0() {
   return (neuron0x21ec630()*0.448713);
}

double NNfunction_ss_dRcR::synapse0x2208640() {
   return (neuron0x21ec970()*0.080831);
}

double NNfunction_ss_dRcR::synapse0x2208680() {
   return (neuron0x21eced0()*0.21442);
}

double NNfunction_ss_dRcR::synapse0x2208d00() {
   return (neuron0x21ed0f0()*-0.432427);
}

double NNfunction_ss_dRcR::synapse0x2208d40() {
   return (neuron0x21ed430()*-0.339374);
}

double NNfunction_ss_dRcR::synapse0x2208d80() {
   return (neuron0x21ed770()*-0.642575);
}

double NNfunction_ss_dRcR::synapse0x2208dc0() {
   return (neuron0x21edab0()*0.0971171);
}

double NNfunction_ss_dRcR::synapse0x2208e00() {
   return (neuron0x21eddf0()*-0.0142779);
}

double NNfunction_ss_dRcR::synapse0x2208e40() {
   return (neuron0x21ee130()*-0.0823701);
}

double NNfunction_ss_dRcR::synapse0x22091c0() {
   return (neuron0x21e9570()*0.19369);
}

double NNfunction_ss_dRcR::synapse0x2209200() {
   return (neuron0x21e98b0()*0.352149);
}

double NNfunction_ss_dRcR::synapse0x2209240() {
   return (neuron0x21e9bf0()*-0.0865511);
}

double NNfunction_ss_dRcR::synapse0x2209280() {
   return (neuron0x21e9f30()*0.00885682);
}

double NNfunction_ss_dRcR::synapse0x22092c0() {
   return (neuron0x21ea270()*-0.00569304);
}

double NNfunction_ss_dRcR::synapse0x2209300() {
   return (neuron0x21ea5b0()*-0.234498);
}

double NNfunction_ss_dRcR::synapse0x2209340() {
   return (neuron0x21ea8f0()*-0.161587);
}

double NNfunction_ss_dRcR::synapse0x2209380() {
   return (neuron0x21eac30()*-0.232313);
}

double NNfunction_ss_dRcR::synapse0x22093c0() {
   return (neuron0x21eaf70()*0.0972893);
}

double NNfunction_ss_dRcR::synapse0x2209400() {
   return (neuron0x21eb2b0()*0.392169);
}

double NNfunction_ss_dRcR::synapse0x2209440() {
   return (neuron0x21eb5f0()*0.45992);
}

double NNfunction_ss_dRcR::synapse0x2209480() {
   return (neuron0x21eb930()*0.0743803);
}

double NNfunction_ss_dRcR::synapse0x22094c0() {
   return (neuron0x21ebc70()*-0.237886);
}

double NNfunction_ss_dRcR::synapse0x2209500() {
   return (neuron0x21ebfb0()*0.186138);
}

double NNfunction_ss_dRcR::synapse0x2209540() {
   return (neuron0x21ec2f0()*-0.426691);
}

double NNfunction_ss_dRcR::synapse0x2209580() {
   return (neuron0x21ec630()*-0.45309);
}

double NNfunction_ss_dRcR::synapse0x2209010() {
   return (neuron0x21ec970()*-0.554956);
}

double NNfunction_ss_dRcR::synapse0x2209050() {
   return (neuron0x21eced0()*-0.421603);
}

double NNfunction_ss_dRcR::synapse0x22096d0() {
   return (neuron0x21ed0f0()*-0.489727);
}

double NNfunction_ss_dRcR::synapse0x2209710() {
   return (neuron0x21ed430()*0.192481);
}

double NNfunction_ss_dRcR::synapse0x2209750() {
   return (neuron0x21ed770()*0.0733211);
}

double NNfunction_ss_dRcR::synapse0x2209790() {
   return (neuron0x21edab0()*0.500935);
}

double NNfunction_ss_dRcR::synapse0x22097d0() {
   return (neuron0x21eddf0()*0.108992);
}

double NNfunction_ss_dRcR::synapse0x2209810() {
   return (neuron0x21ee130()*-0.0312613);
}

double NNfunction_ss_dRcR::synapse0x2209b90() {
   return (neuron0x21e9570()*0.0640018);
}

double NNfunction_ss_dRcR::synapse0x2209bd0() {
   return (neuron0x21e98b0()*0.0241999);
}

double NNfunction_ss_dRcR::synapse0x2209c10() {
   return (neuron0x21e9bf0()*-0.0578561);
}

double NNfunction_ss_dRcR::synapse0x2209c50() {
   return (neuron0x21e9f30()*-0.800221);
}

double NNfunction_ss_dRcR::synapse0x2209c90() {
   return (neuron0x21ea270()*-0.273645);
}

double NNfunction_ss_dRcR::synapse0x2209cd0() {
   return (neuron0x21ea5b0()*-0.302316);
}

double NNfunction_ss_dRcR::synapse0x2209d10() {
   return (neuron0x21ea8f0()*-0.321218);
}

double NNfunction_ss_dRcR::synapse0x2209d50() {
   return (neuron0x21eac30()*0.0457357);
}

double NNfunction_ss_dRcR::synapse0x2209d90() {
   return (neuron0x21eaf70()*0.186842);
}

double NNfunction_ss_dRcR::synapse0x2209dd0() {
   return (neuron0x21eb2b0()*-0.0747258);
}

double NNfunction_ss_dRcR::synapse0x2209e10() {
   return (neuron0x21eb5f0()*0.0085361);
}

double NNfunction_ss_dRcR::synapse0x2209e50() {
   return (neuron0x21eb930()*-0.0401216);
}

double NNfunction_ss_dRcR::synapse0x2209e90() {
   return (neuron0x21ebc70()*-0.0444923);
}

double NNfunction_ss_dRcR::synapse0x2209ed0() {
   return (neuron0x21ebfb0()*0.104684);
}

double NNfunction_ss_dRcR::synapse0x2209f10() {
   return (neuron0x21ec2f0()*0.000511863);
}

double NNfunction_ss_dRcR::synapse0x2209f50() {
   return (neuron0x21ec630()*-0.489629);
}

double NNfunction_ss_dRcR::synapse0x22099e0() {
   return (neuron0x21ec970()*0.0302693);
}

double NNfunction_ss_dRcR::synapse0x2209a20() {
   return (neuron0x21eced0()*-0.388703);
}

double NNfunction_ss_dRcR::synapse0x220a0a0() {
   return (neuron0x21ed0f0()*0.103862);
}

double NNfunction_ss_dRcR::synapse0x220a0e0() {
   return (neuron0x21ed430()*-0.251104);
}

double NNfunction_ss_dRcR::synapse0x220a120() {
   return (neuron0x21ed770()*0.174306);
}

double NNfunction_ss_dRcR::synapse0x220a160() {
   return (neuron0x21edab0()*0.393272);
}

double NNfunction_ss_dRcR::synapse0x220a1a0() {
   return (neuron0x21eddf0()*-0.247912);
}

double NNfunction_ss_dRcR::synapse0x220a1e0() {
   return (neuron0x21ee130()*-0.0292664);
}

double NNfunction_ss_dRcR::synapse0x220a560() {
   return (neuron0x21e9570()*0.179283);
}

double NNfunction_ss_dRcR::synapse0x220a5a0() {
   return (neuron0x21e98b0()*0.581852);
}

double NNfunction_ss_dRcR::synapse0x220a5e0() {
   return (neuron0x21e9bf0()*-0.251645);
}

double NNfunction_ss_dRcR::synapse0x220a620() {
   return (neuron0x21e9f30()*-0.500717);
}

double NNfunction_ss_dRcR::synapse0x220a660() {
   return (neuron0x21ea270()*-0.627571);
}

double NNfunction_ss_dRcR::synapse0x220a6a0() {
   return (neuron0x21ea5b0()*0.0265324);
}

double NNfunction_ss_dRcR::synapse0x220a6e0() {
   return (neuron0x21ea8f0()*-0.130102);
}

double NNfunction_ss_dRcR::synapse0x220a720() {
   return (neuron0x21eac30()*0.291333);
}

double NNfunction_ss_dRcR::synapse0x220a760() {
   return (neuron0x21eaf70()*-0.376689);
}

double NNfunction_ss_dRcR::synapse0x220a7a0() {
   return (neuron0x21eb2b0()*0.431153);
}

double NNfunction_ss_dRcR::synapse0x220a7e0() {
   return (neuron0x21eb5f0()*-0.215665);
}

double NNfunction_ss_dRcR::synapse0x220a820() {
   return (neuron0x21eb930()*-0.3696);
}

double NNfunction_ss_dRcR::synapse0x220a860() {
   return (neuron0x21ebc70()*0.318653);
}

double NNfunction_ss_dRcR::synapse0x220a8a0() {
   return (neuron0x21ebfb0()*0.372812);
}

double NNfunction_ss_dRcR::synapse0x220a8e0() {
   return (neuron0x21ec2f0()*-0.0689594);
}

double NNfunction_ss_dRcR::synapse0x220a920() {
   return (neuron0x21ec630()*0.327288);
}

double NNfunction_ss_dRcR::synapse0x220a3b0() {
   return (neuron0x21ec970()*-0.475569);
}

double NNfunction_ss_dRcR::synapse0x220a3f0() {
   return (neuron0x21eced0()*0.252948);
}

double NNfunction_ss_dRcR::synapse0x220aa70() {
   return (neuron0x21ed0f0()*0.150603);
}

double NNfunction_ss_dRcR::synapse0x220aab0() {
   return (neuron0x21ed430()*0.27671);
}

double NNfunction_ss_dRcR::synapse0x220aaf0() {
   return (neuron0x21ed770()*-0.289295);
}

double NNfunction_ss_dRcR::synapse0x220ab30() {
   return (neuron0x21edab0()*0.343984);
}

double NNfunction_ss_dRcR::synapse0x220ab70() {
   return (neuron0x21eddf0()*-0.00719259);
}

double NNfunction_ss_dRcR::synapse0x220abb0() {
   return (neuron0x21ee130()*0.212203);
}

double NNfunction_ss_dRcR::synapse0x21f3660() {
   return (neuron0x21e9570()*0.011843);
}

double NNfunction_ss_dRcR::synapse0x21f36a0() {
   return (neuron0x21e98b0()*-0.0228926);
}

double NNfunction_ss_dRcR::synapse0x21f36e0() {
   return (neuron0x21e9bf0()*0.02014);
}

double NNfunction_ss_dRcR::synapse0x21f3720() {
   return (neuron0x21e9f30()*5.87269);
}

double NNfunction_ss_dRcR::synapse0x21f3760() {
   return (neuron0x21ea270()*-0.00626285);
}

double NNfunction_ss_dRcR::synapse0x21f37a0() {
   return (neuron0x21ea5b0()*0.00527695);
}

double NNfunction_ss_dRcR::synapse0x21f37e0() {
   return (neuron0x21ea8f0()*0.0713112);
}

double NNfunction_ss_dRcR::synapse0x21f3820() {
   return (neuron0x21eac30()*0.0594762);
}

double NNfunction_ss_dRcR::synapse0x220b340() {
   return (neuron0x21eaf70()*0.00717538);
}

double NNfunction_ss_dRcR::synapse0x220b380() {
   return (neuron0x21eb2b0()*-0.0691744);
}

double NNfunction_ss_dRcR::synapse0x220b3c0() {
   return (neuron0x21eb5f0()*-0.0119178);
}

double NNfunction_ss_dRcR::synapse0x220b400() {
   return (neuron0x21eb930()*-0.0164345);
}

double NNfunction_ss_dRcR::synapse0x220b440() {
   return (neuron0x21ebc70()*-0.0267109);
}

double NNfunction_ss_dRcR::synapse0x220b480() {
   return (neuron0x21ebfb0()*0.0447643);
}

double NNfunction_ss_dRcR::synapse0x220b4c0() {
   return (neuron0x21ec2f0()*0.0221595);
}

double NNfunction_ss_dRcR::synapse0x220b500() {
   return (neuron0x21ec630()*1.98411);
}

double NNfunction_ss_dRcR::synapse0x220ad80() {
   return (neuron0x21ec970()*0.00132023);
}

double NNfunction_ss_dRcR::synapse0x220adc0() {
   return (neuron0x21eced0()*-0.236001);
}

double NNfunction_ss_dRcR::synapse0x220b650() {
   return (neuron0x21ed0f0()*-0.0133839);
}

double NNfunction_ss_dRcR::synapse0x220b690() {
   return (neuron0x21ed430()*-0.011735);
}

double NNfunction_ss_dRcR::synapse0x220b6d0() {
   return (neuron0x21ed770()*0.00786449);
}

double NNfunction_ss_dRcR::synapse0x220b710() {
   return (neuron0x21edab0()*-0.0141351);
}

double NNfunction_ss_dRcR::synapse0x220b750() {
   return (neuron0x21eddf0()*-0.0481604);
}

double NNfunction_ss_dRcR::synapse0x220b790() {
   return (neuron0x21ee130()*0.0291541);
}

double NNfunction_ss_dRcR::synapse0x220bb10() {
   return (neuron0x21e9570()*-0.199791);
}

double NNfunction_ss_dRcR::synapse0x220bb50() {
   return (neuron0x21e98b0()*-0.430207);
}

double NNfunction_ss_dRcR::synapse0x220bb90() {
   return (neuron0x21e9bf0()*-0.0465426);
}

double NNfunction_ss_dRcR::synapse0x220bbd0() {
   return (neuron0x21e9f30()*-0.775375);
}

double NNfunction_ss_dRcR::synapse0x220bc10() {
   return (neuron0x21ea270()*-0.117828);
}

double NNfunction_ss_dRcR::synapse0x220bc50() {
   return (neuron0x21ea5b0()*0.0729688);
}

double NNfunction_ss_dRcR::synapse0x220bc90() {
   return (neuron0x21ea8f0()*0.16919);
}

double NNfunction_ss_dRcR::synapse0x220bcd0() {
   return (neuron0x21eac30()*0.0220144);
}

double NNfunction_ss_dRcR::synapse0x220bd10() {
   return (neuron0x21eaf70()*-0.0383296);
}

double NNfunction_ss_dRcR::synapse0x220bd50() {
   return (neuron0x21eb2b0()*-0.0884914);
}

double NNfunction_ss_dRcR::synapse0x220bd90() {
   return (neuron0x21eb5f0()*-0.053816);
}

double NNfunction_ss_dRcR::synapse0x220bdd0() {
   return (neuron0x21eb930()*1.59117);
}

double NNfunction_ss_dRcR::synapse0x220be10() {
   return (neuron0x21ebc70()*-0.261804);
}

double NNfunction_ss_dRcR::synapse0x220be50() {
   return (neuron0x21ebfb0()*-0.609494);
}

double NNfunction_ss_dRcR::synapse0x220be90() {
   return (neuron0x21ec2f0()*0.434312);
}

double NNfunction_ss_dRcR::synapse0x220bed0() {
   return (neuron0x21ec630()*-0.267506);
}

double NNfunction_ss_dRcR::synapse0x220b960() {
   return (neuron0x21ec970()*-0.4002);
}

double NNfunction_ss_dRcR::synapse0x220b9a0() {
   return (neuron0x21eced0()*0.157052);
}

double NNfunction_ss_dRcR::synapse0x220c020() {
   return (neuron0x21ed0f0()*0.334465);
}

double NNfunction_ss_dRcR::synapse0x220c060() {
   return (neuron0x21ed430()*0.305014);
}

double NNfunction_ss_dRcR::synapse0x220c0a0() {
   return (neuron0x21ed770()*0.218291);
}

double NNfunction_ss_dRcR::synapse0x220c0e0() {
   return (neuron0x21edab0()*0.0976449);
}

double NNfunction_ss_dRcR::synapse0x220c120() {
   return (neuron0x21eddf0()*-0.188292);
}

double NNfunction_ss_dRcR::synapse0x220c160() {
   return (neuron0x21ee130()*0.255864);
}

double NNfunction_ss_dRcR::synapse0x220c4e0() {
   return (neuron0x21e9570()*-0.641307);
}

double NNfunction_ss_dRcR::synapse0x220c520() {
   return (neuron0x21e98b0()*-0.053236);
}

double NNfunction_ss_dRcR::synapse0x220c560() {
   return (neuron0x21e9bf0()*-0.0747014);
}

double NNfunction_ss_dRcR::synapse0x220c5a0() {
   return (neuron0x21e9f30()*0.101924);
}

double NNfunction_ss_dRcR::synapse0x220c5e0() {
   return (neuron0x21ea270()*-0.276345);
}

double NNfunction_ss_dRcR::synapse0x220c620() {
   return (neuron0x21ea5b0()*0.210552);
}

double NNfunction_ss_dRcR::synapse0x220c660() {
   return (neuron0x21ea8f0()*-0.786002);
}

double NNfunction_ss_dRcR::synapse0x220c6a0() {
   return (neuron0x21eac30()*0.489517);
}

double NNfunction_ss_dRcR::synapse0x220c6e0() {
   return (neuron0x21eaf70()*-0.258619);
}

double NNfunction_ss_dRcR::synapse0x220c720() {
   return (neuron0x21eb2b0()*0.287456);
}

double NNfunction_ss_dRcR::synapse0x220c760() {
   return (neuron0x21eb5f0()*-0.0240214);
}

double NNfunction_ss_dRcR::synapse0x220c7a0() {
   return (neuron0x21eb930()*-0.340945);
}

double NNfunction_ss_dRcR::synapse0x220c7e0() {
   return (neuron0x21ebc70()*0.889273);
}

double NNfunction_ss_dRcR::synapse0x220c820() {
   return (neuron0x21ebfb0()*0.189106);
}

double NNfunction_ss_dRcR::synapse0x220c860() {
   return (neuron0x21ec2f0()*0.177945);
}

double NNfunction_ss_dRcR::synapse0x220c8a0() {
   return (neuron0x21ec630()*-0.389943);
}

double NNfunction_ss_dRcR::synapse0x220c330() {
   return (neuron0x21ec970()*-0.853453);
}

double NNfunction_ss_dRcR::synapse0x220c370() {
   return (neuron0x21eced0()*0.00695788);
}

double NNfunction_ss_dRcR::synapse0x21fcea0() {
   return (neuron0x21ed0f0()*0.638634);
}

double NNfunction_ss_dRcR::synapse0x21fcee0() {
   return (neuron0x21ed430()*0.551146);
}

double NNfunction_ss_dRcR::synapse0x21fcf20() {
   return (neuron0x21ed770()*0.940973);
}

double NNfunction_ss_dRcR::synapse0x21fcf60() {
   return (neuron0x21edab0()*-0.389404);
}

double NNfunction_ss_dRcR::synapse0x21fcfa0() {
   return (neuron0x21eddf0()*-0.484061);
}

double NNfunction_ss_dRcR::synapse0x21fcfe0() {
   return (neuron0x21ee130()*0.440804);
}

double NNfunction_ss_dRcR::synapse0x21fd360() {
   return (neuron0x21e9570()*-0.0090057);
}

double NNfunction_ss_dRcR::synapse0x21fd3a0() {
   return (neuron0x21e98b0()*0.016375);
}

double NNfunction_ss_dRcR::synapse0x21fd3e0() {
   return (neuron0x21e9bf0()*0.0096446);
}

double NNfunction_ss_dRcR::synapse0x21fd420() {
   return (neuron0x21e9f30()*-3.35783);
}

double NNfunction_ss_dRcR::synapse0x21fd460() {
   return (neuron0x21ea270()*0.0220054);
}

double NNfunction_ss_dRcR::synapse0x21fd4a0() {
   return (neuron0x21ea5b0()*0.0146436);
}

double NNfunction_ss_dRcR::synapse0x21fd4e0() {
   return (neuron0x21ea8f0()*0.0256338);
}

double NNfunction_ss_dRcR::synapse0x21fd520() {
   return (neuron0x21eac30()*0.037143);
}

double NNfunction_ss_dRcR::synapse0x21fd560() {
   return (neuron0x21eaf70()*-0.0361608);
}

double NNfunction_ss_dRcR::synapse0x21fd5a0() {
   return (neuron0x21eb2b0()*0.0167257);
}

double NNfunction_ss_dRcR::synapse0x21fd5e0() {
   return (neuron0x21eb5f0()*-0.025619);
}

double NNfunction_ss_dRcR::synapse0x21fd620() {
   return (neuron0x21eb930()*0.00770316);
}

double NNfunction_ss_dRcR::synapse0x21fd660() {
   return (neuron0x21ebc70()*-0.013197);
}

double NNfunction_ss_dRcR::synapse0x21fd6a0() {
   return (neuron0x21ebfb0()*0.019584);
}

double NNfunction_ss_dRcR::synapse0x21fd6e0() {
   return (neuron0x21ec2f0()*0.0283089);
}

double NNfunction_ss_dRcR::synapse0x21fd720() {
   return (neuron0x21ec630()*0.151167);
}

double NNfunction_ss_dRcR::synapse0x21fd1b0() {
   return (neuron0x21ec970()*-0.0240225);
}

double NNfunction_ss_dRcR::synapse0x21fd1f0() {
   return (neuron0x21eced0()*-1.10798);
}

double NNfunction_ss_dRcR::synapse0x21fd870() {
   return (neuron0x21ed0f0()*-0.00857211);
}

double NNfunction_ss_dRcR::synapse0x21fd8b0() {
   return (neuron0x21ed430()*-0.00608774);
}

double NNfunction_ss_dRcR::synapse0x21fd8f0() {
   return (neuron0x21ed770()*-0.00622155);
}

double NNfunction_ss_dRcR::synapse0x21fd930() {
   return (neuron0x21edab0()*-0.000975892);
}

double NNfunction_ss_dRcR::synapse0x21fd970() {
   return (neuron0x21eddf0()*0.0087532);
}

double NNfunction_ss_dRcR::synapse0x21fd9b0() {
   return (neuron0x21ee130()*-0.0340186);
}

double NNfunction_ss_dRcR::synapse0x21fdd30() {
   return (neuron0x21e9570()*0.0188585);
}

double NNfunction_ss_dRcR::synapse0x21fdd70() {
   return (neuron0x21e98b0()*0.504002);
}

double NNfunction_ss_dRcR::synapse0x21fddb0() {
   return (neuron0x21e9bf0()*0.13373);
}

double NNfunction_ss_dRcR::synapse0x21fddf0() {
   return (neuron0x21e9f30()*0.238137);
}

double NNfunction_ss_dRcR::synapse0x21fde30() {
   return (neuron0x21ea270()*-0.0855495);
}

double NNfunction_ss_dRcR::synapse0x21fde70() {
   return (neuron0x21ea5b0()*-0.908458);
}

double NNfunction_ss_dRcR::synapse0x21fdeb0() {
   return (neuron0x21ea8f0()*0.53823);
}

double NNfunction_ss_dRcR::synapse0x21fdef0() {
   return (neuron0x21eac30()*-0.0146963);
}

double NNfunction_ss_dRcR::synapse0x21fdf30() {
   return (neuron0x21eaf70()*0.219586);
}

double NNfunction_ss_dRcR::synapse0x21fdf70() {
   return (neuron0x21eb2b0()*-0.154813);
}

double NNfunction_ss_dRcR::synapse0x21fdfb0() {
   return (neuron0x21eb5f0()*-0.0595405);
}

double NNfunction_ss_dRcR::synapse0x21fdff0() {
   return (neuron0x21eb930()*0.124279);
}

double NNfunction_ss_dRcR::synapse0x21fe030() {
   return (neuron0x21ebc70()*-0.168422);
}

double NNfunction_ss_dRcR::synapse0x21fe070() {
   return (neuron0x21ebfb0()*-0.0537876);
}

double NNfunction_ss_dRcR::synapse0x21fe0b0() {
   return (neuron0x21ec2f0()*0.430962);
}

double NNfunction_ss_dRcR::synapse0x21fe0f0() {
   return (neuron0x21ec630()*0.733251);
}

double NNfunction_ss_dRcR::synapse0x21fdb80() {
   return (neuron0x21ec970()*0.355766);
}

double NNfunction_ss_dRcR::synapse0x21fdbc0() {
   return (neuron0x21eced0()*-0.332431);
}

double NNfunction_ss_dRcR::synapse0x21fe240() {
   return (neuron0x21ed0f0()*-0.242665);
}

double NNfunction_ss_dRcR::synapse0x21fe280() {
   return (neuron0x21ed430()*-0.49368);
}

double NNfunction_ss_dRcR::synapse0x21fe2c0() {
   return (neuron0x21ed770()*-0.302618);
}

double NNfunction_ss_dRcR::synapse0x21fe300() {
   return (neuron0x21edab0()*-0.103205);
}

double NNfunction_ss_dRcR::synapse0x21fe340() {
   return (neuron0x21eddf0()*0.202172);
}

double NNfunction_ss_dRcR::synapse0x21fe380() {
   return (neuron0x21ee130()*-0.227498);
}

double NNfunction_ss_dRcR::synapse0x21fe700() {
   return (neuron0x21e9570()*-0.100466);
}

double NNfunction_ss_dRcR::synapse0x21fe740() {
   return (neuron0x21e98b0()*0.194887);
}

double NNfunction_ss_dRcR::synapse0x21fe780() {
   return (neuron0x21e9bf0()*0.153864);
}

double NNfunction_ss_dRcR::synapse0x21fe7c0() {
   return (neuron0x21e9f30()*0.848513);
}

double NNfunction_ss_dRcR::synapse0x21fe800() {
   return (neuron0x21ea270()*-0.0155545);
}

double NNfunction_ss_dRcR::synapse0x21fe840() {
   return (neuron0x21ea5b0()*-0.100527);
}

double NNfunction_ss_dRcR::synapse0x21fe880() {
   return (neuron0x21ea8f0()*0.203321);
}

double NNfunction_ss_dRcR::synapse0x21fe8c0() {
   return (neuron0x21eac30()*-0.235958);
}

double NNfunction_ss_dRcR::synapse0x21fe900() {
   return (neuron0x21eaf70()*0.051555);
}

double NNfunction_ss_dRcR::synapse0x21fe940() {
   return (neuron0x21eb2b0()*0.012166);
}

double NNfunction_ss_dRcR::synapse0x21fe980() {
   return (neuron0x21eb5f0()*0.0468996);
}

double NNfunction_ss_dRcR::synapse0x21fe9c0() {
   return (neuron0x21eb930()*-0.0912172);
}

double NNfunction_ss_dRcR::synapse0x21fea00() {
   return (neuron0x21ebc70()*0.223826);
}

double NNfunction_ss_dRcR::synapse0x21fea40() {
   return (neuron0x21ebfb0()*0.212403);
}

double NNfunction_ss_dRcR::synapse0x21fea80() {
   return (neuron0x21ec2f0()*-0.249716);
}

double NNfunction_ss_dRcR::synapse0x21feac0() {
   return (neuron0x21ec630()*0.429354);
}

double NNfunction_ss_dRcR::synapse0x21fe550() {
   return (neuron0x21ec970()*0.1041);
}

double NNfunction_ss_dRcR::synapse0x21fe590() {
   return (neuron0x21eced0()*-0.579013);
}

double NNfunction_ss_dRcR::synapse0x21fec10() {
   return (neuron0x21ed0f0()*-0.19894);
}

double NNfunction_ss_dRcR::synapse0x21fec50() {
   return (neuron0x21ed430()*-0.432765);
}

double NNfunction_ss_dRcR::synapse0x21fec90() {
   return (neuron0x21ed770()*-0.0187436);
}

double NNfunction_ss_dRcR::synapse0x21fecd0() {
   return (neuron0x21edab0()*0.00285064);
}

double NNfunction_ss_dRcR::synapse0x21fed10() {
   return (neuron0x21eddf0()*-0.0505096);
}

double NNfunction_ss_dRcR::synapse0x21fed50() {
   return (neuron0x21ee130()*0.0287344);
}

double NNfunction_ss_dRcR::synapse0x2210c20() {
   return (neuron0x21e9570()*-0.363348);
}

double NNfunction_ss_dRcR::synapse0x2210c60() {
   return (neuron0x21e98b0()*-0.352326);
}

double NNfunction_ss_dRcR::synapse0x2210ca0() {
   return (neuron0x21e9bf0()*-0.0218832);
}

double NNfunction_ss_dRcR::synapse0x2210ce0() {
   return (neuron0x21e9f30()*-1.28314);
}

double NNfunction_ss_dRcR::synapse0x2210d20() {
   return (neuron0x21ea270()*-0.245451);
}

double NNfunction_ss_dRcR::synapse0x2210d60() {
   return (neuron0x21ea5b0()*0.580109);
}

double NNfunction_ss_dRcR::synapse0x2210da0() {
   return (neuron0x21ea8f0()*0.477555);
}

double NNfunction_ss_dRcR::synapse0x2210de0() {
   return (neuron0x21eac30()*0.319675);
}

double NNfunction_ss_dRcR::synapse0x2210e20() {
   return (neuron0x21eaf70()*0.244071);
}

double NNfunction_ss_dRcR::synapse0x2210e60() {
   return (neuron0x21eb2b0()*1.04);
}

double NNfunction_ss_dRcR::synapse0x2210ea0() {
   return (neuron0x21eb5f0()*0.0559264);
}

double NNfunction_ss_dRcR::synapse0x2210ee0() {
   return (neuron0x21eb930()*0.184971);
}

double NNfunction_ss_dRcR::synapse0x2210f20() {
   return (neuron0x21ebc70()*-0.00902874);
}

double NNfunction_ss_dRcR::synapse0x2210f60() {
   return (neuron0x21ebfb0()*0.315017);
}

double NNfunction_ss_dRcR::synapse0x2210fa0() {
   return (neuron0x21ec2f0()*-0.0967795);
}

double NNfunction_ss_dRcR::synapse0x2210fe0() {
   return (neuron0x21ec630()*0.102128);
}

double NNfunction_ss_dRcR::synapse0x21fed90() {
   return (neuron0x21ec970()*0.180637);
}

double NNfunction_ss_dRcR::synapse0x21fedd0() {
   return (neuron0x21eced0()*0.305551);
}

double NNfunction_ss_dRcR::synapse0x2211130() {
   return (neuron0x21ed0f0()*-0.0406013);
}

double NNfunction_ss_dRcR::synapse0x2211170() {
   return (neuron0x21ed430()*-0.214832);
}

double NNfunction_ss_dRcR::synapse0x22111b0() {
   return (neuron0x21ed770()*0.432286);
}

double NNfunction_ss_dRcR::synapse0x22111f0() {
   return (neuron0x21edab0()*-0.307284);
}

double NNfunction_ss_dRcR::synapse0x2211230() {
   return (neuron0x21eddf0()*-0.336233);
}

double NNfunction_ss_dRcR::synapse0x2211270() {
   return (neuron0x21ee130()*0.309807);
}

double NNfunction_ss_dRcR::synapse0x22115f0() {
   return (neuron0x21e9570()*0.679558);
}

double NNfunction_ss_dRcR::synapse0x2211630() {
   return (neuron0x21e98b0()*0.483513);
}

double NNfunction_ss_dRcR::synapse0x2211670() {
   return (neuron0x21e9bf0()*0.243892);
}

double NNfunction_ss_dRcR::synapse0x22116b0() {
   return (neuron0x21e9f30()*-0.154727);
}

double NNfunction_ss_dRcR::synapse0x22116f0() {
   return (neuron0x21ea270()*0.23068);
}

double NNfunction_ss_dRcR::synapse0x2211730() {
   return (neuron0x21ea5b0()*-0.264599);
}

double NNfunction_ss_dRcR::synapse0x2211770() {
   return (neuron0x21ea8f0()*0.191446);
}

double NNfunction_ss_dRcR::synapse0x22117b0() {
   return (neuron0x21eac30()*0.0147633);
}

double NNfunction_ss_dRcR::synapse0x22117f0() {
   return (neuron0x21eaf70()*-0.0376492);
}

double NNfunction_ss_dRcR::synapse0x2211830() {
   return (neuron0x21eb2b0()*-0.579681);
}

double NNfunction_ss_dRcR::synapse0x2211870() {
   return (neuron0x21eb5f0()*0.00132839);
}

double NNfunction_ss_dRcR::synapse0x22118b0() {
   return (neuron0x21eb930()*0.772449);
}

double NNfunction_ss_dRcR::synapse0x22118f0() {
   return (neuron0x21ebc70()*-0.0123747);
}

double NNfunction_ss_dRcR::synapse0x2211930() {
   return (neuron0x21ebfb0()*-0.126399);
}

double NNfunction_ss_dRcR::synapse0x2211970() {
   return (neuron0x21ec2f0()*0.192529);
}

double NNfunction_ss_dRcR::synapse0x22119b0() {
   return (neuron0x21ec630()*-0.391508);
}

double NNfunction_ss_dRcR::synapse0x2211440() {
   return (neuron0x21ec970()*0.204255);
}

double NNfunction_ss_dRcR::synapse0x2211480() {
   return (neuron0x21eced0()*-0.330706);
}

double NNfunction_ss_dRcR::synapse0x2211b00() {
   return (neuron0x21ed0f0()*-0.38851);
}

double NNfunction_ss_dRcR::synapse0x2211b40() {
   return (neuron0x21ed430()*0.0884945);
}

double NNfunction_ss_dRcR::synapse0x2211b80() {
   return (neuron0x21ed770()*0.0684752);
}

double NNfunction_ss_dRcR::synapse0x2211bc0() {
   return (neuron0x21edab0()*-0.0428822);
}

double NNfunction_ss_dRcR::synapse0x2211c00() {
   return (neuron0x21eddf0()*0.108598);
}

double NNfunction_ss_dRcR::synapse0x2211c40() {
   return (neuron0x21ee130()*-0.186453);
}

double NNfunction_ss_dRcR::synapse0x2211fc0() {
   return (neuron0x21e9570()*-0.179821);
}

double NNfunction_ss_dRcR::synapse0x2212000() {
   return (neuron0x21e98b0()*0.0945018);
}

double NNfunction_ss_dRcR::synapse0x2212040() {
   return (neuron0x21e9bf0()*0.00210434);
}

double NNfunction_ss_dRcR::synapse0x2212080() {
   return (neuron0x21e9f30()*-2.00972);
}

double NNfunction_ss_dRcR::synapse0x22120c0() {
   return (neuron0x21ea270()*0.0271242);
}

double NNfunction_ss_dRcR::synapse0x2212100() {
   return (neuron0x21ea5b0()*0.377937);
}

double NNfunction_ss_dRcR::synapse0x2212140() {
   return (neuron0x21ea8f0()*0.15181);
}

double NNfunction_ss_dRcR::synapse0x2212180() {
   return (neuron0x21eac30()*0.101595);
}

double NNfunction_ss_dRcR::synapse0x22121c0() {
   return (neuron0x21eaf70()*0.0809122);
}

double NNfunction_ss_dRcR::synapse0x2212200() {
   return (neuron0x21eb2b0()*-0.204958);
}

double NNfunction_ss_dRcR::synapse0x2212240() {
   return (neuron0x21eb5f0()*0.178323);
}

double NNfunction_ss_dRcR::synapse0x2212280() {
   return (neuron0x21eb930()*-0.31783);
}

double NNfunction_ss_dRcR::synapse0x22122c0() {
   return (neuron0x21ebc70()*0.23221);
}

double NNfunction_ss_dRcR::synapse0x2212300() {
   return (neuron0x21ebfb0()*-0.215718);
}

double NNfunction_ss_dRcR::synapse0x2212340() {
   return (neuron0x21ec2f0()*0.083083);
}

double NNfunction_ss_dRcR::synapse0x2212380() {
   return (neuron0x21ec630()*0.0747802);
}

double NNfunction_ss_dRcR::synapse0x2211e10() {
   return (neuron0x21ec970()*-0.162566);
}

double NNfunction_ss_dRcR::synapse0x2211e50() {
   return (neuron0x21eced0()*-0.572287);
}

double NNfunction_ss_dRcR::synapse0x22124d0() {
   return (neuron0x21ed0f0()*-0.321711);
}

double NNfunction_ss_dRcR::synapse0x2212510() {
   return (neuron0x21ed430()*-0.282823);
}

double NNfunction_ss_dRcR::synapse0x2212550() {
   return (neuron0x21ed770()*0.0315895);
}

double NNfunction_ss_dRcR::synapse0x2212590() {
   return (neuron0x21edab0()*0.0558991);
}

double NNfunction_ss_dRcR::synapse0x22125d0() {
   return (neuron0x21eddf0()*0.438277);
}

double NNfunction_ss_dRcR::synapse0x2212610() {
   return (neuron0x21ee130()*-0.0292494);
}

double NNfunction_ss_dRcR::synapse0x2212990() {
   return (neuron0x21e9570()*-0.0699019);
}

double NNfunction_ss_dRcR::synapse0x22129d0() {
   return (neuron0x21e98b0()*0.220495);
}

double NNfunction_ss_dRcR::synapse0x2212a10() {
   return (neuron0x21e9bf0()*-0.00993015);
}

double NNfunction_ss_dRcR::synapse0x2212a50() {
   return (neuron0x21e9f30()*0.688495);
}

double NNfunction_ss_dRcR::synapse0x2212a90() {
   return (neuron0x21ea270()*0.111083);
}

double NNfunction_ss_dRcR::synapse0x2212ad0() {
   return (neuron0x21ea5b0()*0.0442624);
}

double NNfunction_ss_dRcR::synapse0x2212b10() {
   return (neuron0x21ea8f0()*-0.0498649);
}

double NNfunction_ss_dRcR::synapse0x2212b50() {
   return (neuron0x21eac30()*0.417166);
}

double NNfunction_ss_dRcR::synapse0x2212b90() {
   return (neuron0x21eaf70()*-0.163467);
}

double NNfunction_ss_dRcR::synapse0x2212bd0() {
   return (neuron0x21eb2b0()*-0.0790437);
}

double NNfunction_ss_dRcR::synapse0x2212c10() {
   return (neuron0x21eb5f0()*-0.629657);
}

double NNfunction_ss_dRcR::synapse0x2212c50() {
   return (neuron0x21eb930()*-0.364458);
}

double NNfunction_ss_dRcR::synapse0x2212c90() {
   return (neuron0x21ebc70()*-0.441594);
}

double NNfunction_ss_dRcR::synapse0x2212cd0() {
   return (neuron0x21ebfb0()*0.0236139);
}

double NNfunction_ss_dRcR::synapse0x2212d10() {
   return (neuron0x21ec2f0()*0.204773);
}

double NNfunction_ss_dRcR::synapse0x2212d50() {
   return (neuron0x21ec630()*0.685226);
}

double NNfunction_ss_dRcR::synapse0x22127e0() {
   return (neuron0x21ec970()*-0.227072);
}

double NNfunction_ss_dRcR::synapse0x2212820() {
   return (neuron0x21eced0()*-0.230173);
}

double NNfunction_ss_dRcR::synapse0x2212ea0() {
   return (neuron0x21ed0f0()*0.245216);
}

double NNfunction_ss_dRcR::synapse0x2212ee0() {
   return (neuron0x21ed430()*-0.400962);
}

double NNfunction_ss_dRcR::synapse0x2212f20() {
   return (neuron0x21ed770()*0.134882);
}

double NNfunction_ss_dRcR::synapse0x2212f60() {
   return (neuron0x21edab0()*0.0795046);
}

double NNfunction_ss_dRcR::synapse0x2212fa0() {
   return (neuron0x21eddf0()*0.0894351);
}

double NNfunction_ss_dRcR::synapse0x2212fe0() {
   return (neuron0x21ee130()*-0.144886);
}

double NNfunction_ss_dRcR::synapse0x21ef580() {
   return (neuron0x21ee5d0()*-0.619844);
}

double NNfunction_ss_dRcR::synapse0x21ef5c0() {
   return (neuron0x21eeee0()*2.15005);
}

double NNfunction_ss_dRcR::synapse0x21f0a90() {
   return (neuron0x21ef9c0()*-0.111588);
}

double NNfunction_ss_dRcR::synapse0x21f0ad0() {
   return (neuron0x1fa9250()*0.182759);
}

double NNfunction_ss_dRcR::synapse0x21f1460() {
   return (neuron0x21f07e0()*0.711342);
}

double NNfunction_ss_dRcR::synapse0x21f14a0() {
   return (neuron0x21f11b0()*-1.15177);
}

double NNfunction_ss_dRcR::synapse0x21f2230() {
   return (neuron0x21f1f80()*1.32726);
}

double NNfunction_ss_dRcR::synapse0x21f2270() {
   return (neuron0x21f2950()*0.386678);
}

double NNfunction_ss_dRcR::synapse0x21f2c00() {
   return (neuron0x21f3320()*4.96494);
}

double NNfunction_ss_dRcR::synapse0x21f2c40() {
   return (neuron0x21f3e00()*-1.80796);
}

double NNfunction_ss_dRcR::synapse0x21f35d0() {
   return (neuron0x21f47d0()*-0.618146);
}

double NNfunction_ss_dRcR::synapse0x21f3610() {
   return (neuron0x21f18b0()*-0.793281);
}

double NNfunction_ss_dRcR::synapse0x21f40b0() {
   return (neuron0x21f6380()*-0.64446);
}

double NNfunction_ss_dRcR::synapse0x21f40f0() {
   return (neuron0x21f6d50()*-1.37481);
}

double NNfunction_ss_dRcR::synapse0x21f4a80() {
   return (neuron0x21f7720()*0.480619);
}

double NNfunction_ss_dRcR::synapse0x21f4ac0() {
   return (neuron0x21f80f0()*-0.295103);
}

double NNfunction_ss_dRcR::synapse0x21f1b60() {
   return (neuron0x21f9f00()*0.1908);
}

double NNfunction_ss_dRcR::synapse0x21f1ba0() {
   return (neuron0x21fa1e0()*-1.13206);
}

double NNfunction_ss_dRcR::synapse0x21f6630() {
   return (neuron0x21fabb0()*-0.493699);
}

double NNfunction_ss_dRcR::synapse0x21f6670() {
   return (neuron0x21fb580()*-1.34842);
}

double NNfunction_ss_dRcR::synapse0x21f7000() {
   return (neuron0x21fbf50()*1.58259);
}

double NNfunction_ss_dRcR::synapse0x21f7040() {
   return (neuron0x21fc920()*0.79174);
}

double NNfunction_ss_dRcR::synapse0x21f79d0() {
   return (neuron0x21f5470()*1.83577);
}

double NNfunction_ss_dRcR::synapse0x21f7a10() {
   return (neuron0x21f5e40()*-0.24401);
}

double NNfunction_ss_dRcR::synapse0x21f83a0() {
   return (neuron0x21ff6b0()*-1.97311);
}

double NNfunction_ss_dRcR::synapse0x21f83e0() {
   return (neuron0x2200080()*5.7164);
}

double NNfunction_ss_dRcR::synapse0x21ec510() {
   return (neuron0x2200a50()*-2.01815);
}

double NNfunction_ss_dRcR::synapse0x21ec550() {
   return (neuron0x2201420()*0.875701);
}

double NNfunction_ss_dRcR::synapse0x21fa490() {
   return (neuron0x2201df0()*0.218177);
}

double NNfunction_ss_dRcR::synapse0x21fa4d0() {
   return (neuron0x22027c0()*-1.3472);
}

double NNfunction_ss_dRcR::synapse0x21fae60() {
   return (neuron0x2203190()*-0.688777);
}

double NNfunction_ss_dRcR::synapse0x21faea0() {
   return (neuron0x2203b60()*0.50827);
}

double NNfunction_ss_dRcR::synapse0x21fb830() {
   return (neuron0x21f9bf0()*0.404269);
}

double NNfunction_ss_dRcR::synapse0x21fb870() {
   return (neuron0x2206740()*1.39837);
}

double NNfunction_ss_dRcR::synapse0x21fc200() {
   return (neuron0x2207110()*-0.63504);
}

double NNfunction_ss_dRcR::synapse0x21fc240() {
   return (neuron0x2207ae0()*-0.805217);
}

double NNfunction_ss_dRcR::synapse0x21fcbd0() {
   return (neuron0x22084b0()*0.850964);
}

double NNfunction_ss_dRcR::synapse0x21fcc10() {
   return (neuron0x2208e80()*-0.571096);
}

double NNfunction_ss_dRcR::synapse0x21f5720() {
   return (neuron0x2209850()*-1.23885);
}

double NNfunction_ss_dRcR::synapse0x21f5760() {
   return (neuron0x220a220()*-0.295801);
}

double NNfunction_ss_dRcR::synapse0x21fefd0() {
   return (neuron0x220abf0()*2.73011);
}

double NNfunction_ss_dRcR::synapse0x21ff010() {
   return (neuron0x220b7d0()*0.565483);
}

double NNfunction_ss_dRcR::synapse0x21ff960() {
   return (neuron0x220c1a0()*-0.161554);
}

double NNfunction_ss_dRcR::synapse0x21ff9a0() {
   return (neuron0x21fd020()*-2.35717);
}

double NNfunction_ss_dRcR::synapse0x2200330() {
   return (neuron0x21fd9f0()*0.482814);
}

double NNfunction_ss_dRcR::synapse0x2200370() {
   return (neuron0x21fe3c0()*1.18081);
}

double NNfunction_ss_dRcR::synapse0x2200d00() {
   return (neuron0x2210a00()*0.769928);
}

double NNfunction_ss_dRcR::synapse0x2200d40() {
   return (neuron0x22112b0()*-0.504805);
}

double NNfunction_ss_dRcR::synapse0x22016d0() {
   return (neuron0x2211c80()*-0.164208);
}

double NNfunction_ss_dRcR::synapse0x2201710() {
   return (neuron0x2212650()*-0.16716);
}

double NNfunction_ss_dRcR::synapse0x2203e10() {
   return (neuron0x21ee5d0()*0.115418);
}

double NNfunction_ss_dRcR::synapse0x2203e50() {
   return (neuron0x21eeee0()*-0.013302);
}

double NNfunction_ss_dRcR::synapse0x21f93d0() {
   return (neuron0x21ef9c0()*0.562743);
}

double NNfunction_ss_dRcR::synapse0x21f9410() {
   return (neuron0x1fa9250()*0.131166);
}

double NNfunction_ss_dRcR::synapse0x22069f0() {
   return (neuron0x21f07e0()*0.0514734);
}

double NNfunction_ss_dRcR::synapse0x2206a30() {
   return (neuron0x21f11b0()*-1.22548);
}

double NNfunction_ss_dRcR::synapse0x22073c0() {
   return (neuron0x21f1f80()*-0.24092);
}

double NNfunction_ss_dRcR::synapse0x2207400() {
   return (neuron0x21f2950()*0.0495254);
}

double NNfunction_ss_dRcR::synapse0x2207d90() {
   return (neuron0x21f3320()*0.067493);
}

double NNfunction_ss_dRcR::synapse0x2207dd0() {
   return (neuron0x21f3e00()*-0.301724);
}

double NNfunction_ss_dRcR::synapse0x2208760() {
   return (neuron0x21f47d0()*-0.139237);
}

double NNfunction_ss_dRcR::synapse0x22087a0() {
   return (neuron0x21f18b0()*1.56061);
}

double NNfunction_ss_dRcR::synapse0x2209130() {
   return (neuron0x21f6380()*-0.206959);
}

double NNfunction_ss_dRcR::synapse0x2209170() {
   return (neuron0x21f6d50()*-0.084437);
}

double NNfunction_ss_dRcR::synapse0x2209b00() {
   return (neuron0x21f7720()*-0.0513439);
}

double NNfunction_ss_dRcR::synapse0x2209b40() {
   return (neuron0x21f80f0()*-0.10692);
}

double NNfunction_ss_dRcR::synapse0x220a4d0() {
   return (neuron0x21f9f00()*1.62671);
}

double NNfunction_ss_dRcR::synapse0x220a510() {
   return (neuron0x21fa1e0()*-0.342648);
}

double NNfunction_ss_dRcR::synapse0x220aea0() {
   return (neuron0x21fabb0()*-0.121078);
}

double NNfunction_ss_dRcR::synapse0x220aee0() {
   return (neuron0x21fb580()*0.0347414);
}

double NNfunction_ss_dRcR::synapse0x220ba80() {
   return (neuron0x21fbf50()*-1.93442);
}

double NNfunction_ss_dRcR::synapse0x220bac0() {
   return (neuron0x21fc920()*0.025946);
}

double NNfunction_ss_dRcR::synapse0x220c450() {
   return (neuron0x21f5470()*-0.655425);
}

double NNfunction_ss_dRcR::synapse0x220c490() {
   return (neuron0x21f5e40()*0.0176229);
}

double NNfunction_ss_dRcR::synapse0x21fd2d0() {
   return (neuron0x21ff6b0()*0.557723);
}

double NNfunction_ss_dRcR::synapse0x21fd310() {
   return (neuron0x2200080()*0.426804);
}

double NNfunction_ss_dRcR::synapse0x21fdca0() {
   return (neuron0x2200a50()*-0.402603);
}

double NNfunction_ss_dRcR::synapse0x21fdce0() {
   return (neuron0x2201420()*0.12884);
}

double NNfunction_ss_dRcR::synapse0x21fe670() {
   return (neuron0x2201df0()*0.00926877);
}

double NNfunction_ss_dRcR::synapse0x21fe6b0() {
   return (neuron0x22027c0()*-1.66964);
}

double NNfunction_ss_dRcR::synapse0x2210b90() {
   return (neuron0x2203190()*-0.0785558);
}

double NNfunction_ss_dRcR::synapse0x2210bd0() {
   return (neuron0x2203b60()*-0.0147179);
}

double NNfunction_ss_dRcR::synapse0x2211560() {
   return (neuron0x21f9bf0()*0.0361233);
}

double NNfunction_ss_dRcR::synapse0x22115a0() {
   return (neuron0x2206740()*0.584485);
}

double NNfunction_ss_dRcR::synapse0x2211f30() {
   return (neuron0x2207110()*-0.0540117);
}

double NNfunction_ss_dRcR::synapse0x2211f70() {
   return (neuron0x2207ae0()*-0.0821645);
}

double NNfunction_ss_dRcR::synapse0x2212900() {
   return (neuron0x22084b0()*0.0474816);
}

double NNfunction_ss_dRcR::synapse0x2212940() {
   return (neuron0x2208e80()*-0.328896);
}

double NNfunction_ss_dRcR::synapse0x21ee7f0() {
   return (neuron0x2209850()*0.159764);
}

double NNfunction_ss_dRcR::synapse0x21ee830() {
   return (neuron0x220a220()*-0.0914245);
}

double NNfunction_ss_dRcR::synapse0x22020a0() {
   return (neuron0x220abf0()*1.3121);
}

double NNfunction_ss_dRcR::synapse0x22020e0() {
   return (neuron0x220b7d0()*0.0482012);
}

double NNfunction_ss_dRcR::synapse0x2213020() {
   return (neuron0x220c1a0()*0.0529666);
}

double NNfunction_ss_dRcR::synapse0x2213060() {
   return (neuron0x21fd020()*-1.12062);
}

double NNfunction_ss_dRcR::synapse0x22130a0() {
   return (neuron0x21fd9f0()*0.188254);
}

double NNfunction_ss_dRcR::synapse0x22130e0() {
   return (neuron0x21fe3c0()*-0.502082);
}

double NNfunction_ss_dRcR::synapse0x2219f90() {
   return (neuron0x2210a00()*0.129762);
}

double NNfunction_ss_dRcR::synapse0x2219fd0() {
   return (neuron0x22112b0()*-0.0717805);
}

double NNfunction_ss_dRcR::synapse0x221a010() {
   return (neuron0x2211c80()*0.147738);
}

double NNfunction_ss_dRcR::synapse0x221a050() {
   return (neuron0x2212650()*-0.315434);
}

double NNfunction_ss_dRcR::synapse0x221a3d0() {
   return (neuron0x21ee5d0()*0.262565);
}

double NNfunction_ss_dRcR::synapse0x221a410() {
   return (neuron0x21eeee0()*0.0724546);
}

double NNfunction_ss_dRcR::synapse0x221a450() {
   return (neuron0x21ef9c0()*0.301126);
}

double NNfunction_ss_dRcR::synapse0x221a490() {
   return (neuron0x1fa9250()*0.129851);
}

double NNfunction_ss_dRcR::synapse0x221a4d0() {
   return (neuron0x21f07e0()*0.686049);
}

double NNfunction_ss_dRcR::synapse0x221a510() {
   return (neuron0x21f11b0()*0.479788);
}

double NNfunction_ss_dRcR::synapse0x221a550() {
   return (neuron0x21f1f80()*0.0743812);
}

double NNfunction_ss_dRcR::synapse0x221a590() {
   return (neuron0x21f2950()*0.935244);
}

double NNfunction_ss_dRcR::synapse0x221a5d0() {
   return (neuron0x21f3320()*0.41194);
}

double NNfunction_ss_dRcR::synapse0x221a610() {
   return (neuron0x21f3e00()*0.391475);
}

double NNfunction_ss_dRcR::synapse0x221a650() {
   return (neuron0x21f47d0()*-0.157232);
}

double NNfunction_ss_dRcR::synapse0x221a690() {
   return (neuron0x21f18b0()*0.611883);
}

double NNfunction_ss_dRcR::synapse0x221a6d0() {
   return (neuron0x21f6380()*0.139775);
}

double NNfunction_ss_dRcR::synapse0x221a710() {
   return (neuron0x21f6d50()*0.16136);
}

double NNfunction_ss_dRcR::synapse0x221a750() {
   return (neuron0x21f7720()*0.787876);
}

double NNfunction_ss_dRcR::synapse0x221a790() {
   return (neuron0x21f80f0()*0.648126);
}

double NNfunction_ss_dRcR::synapse0x221a220() {
   return (neuron0x21f9f00()*0.698534);
}

double NNfunction_ss_dRcR::synapse0x221a260() {
   return (neuron0x21fa1e0()*-0.000317886);
}

double NNfunction_ss_dRcR::synapse0x221a8e0() {
   return (neuron0x21fabb0()*-0.254252);
}

double NNfunction_ss_dRcR::synapse0x221a920() {
   return (neuron0x21fb580()*0.138634);
}

double NNfunction_ss_dRcR::synapse0x221a960() {
   return (neuron0x21fbf50()*0.464631);
}

double NNfunction_ss_dRcR::synapse0x221a9a0() {
   return (neuron0x21fc920()*0.518675);
}

double NNfunction_ss_dRcR::synapse0x221a9e0() {
   return (neuron0x21f5470()*0.304556);
}

double NNfunction_ss_dRcR::synapse0x221aa20() {
   return (neuron0x21f5e40()*0.0690846);
}

double NNfunction_ss_dRcR::synapse0x221aa60() {
   return (neuron0x21ff6b0()*0.103861);
}

double NNfunction_ss_dRcR::synapse0x221aaa0() {
   return (neuron0x2200080()*0.78643);
}

double NNfunction_ss_dRcR::synapse0x221aae0() {
   return (neuron0x2200a50()*0.172876);
}

double NNfunction_ss_dRcR::synapse0x221ab20() {
   return (neuron0x2201420()*0.476318);
}

double NNfunction_ss_dRcR::synapse0x221ab60() {
   return (neuron0x2201df0()*0.101666);
}

double NNfunction_ss_dRcR::synapse0x221aba0() {
   return (neuron0x22027c0()*-0.0308739);
}

double NNfunction_ss_dRcR::synapse0x221abe0() {
   return (neuron0x2203190()*0.205026);
}

double NNfunction_ss_dRcR::synapse0x221ac20() {
   return (neuron0x2203b60()*0.329102);
}

double NNfunction_ss_dRcR::synapse0x221a7d0() {
   return (neuron0x21f9bf0()*0.119837);
}

double NNfunction_ss_dRcR::synapse0x221a810() {
   return (neuron0x2206740()*0.9916);
}

double NNfunction_ss_dRcR::synapse0x221a850() {
   return (neuron0x2207110()*0.188252);
}

double NNfunction_ss_dRcR::synapse0x221a890() {
   return (neuron0x2207ae0()*-0.0440282);
}

double NNfunction_ss_dRcR::synapse0x221ae70() {
   return (neuron0x22084b0()*0.921891);
}

double NNfunction_ss_dRcR::synapse0x221aeb0() {
   return (neuron0x2208e80()*0.204439);
}

double NNfunction_ss_dRcR::synapse0x221aef0() {
   return (neuron0x2209850()*0.201958);
}

double NNfunction_ss_dRcR::synapse0x221af30() {
   return (neuron0x220a220()*0.355458);
}

double NNfunction_ss_dRcR::synapse0x221af70() {
   return (neuron0x220abf0()*0.0988819);
}

double NNfunction_ss_dRcR::synapse0x221afb0() {
   return (neuron0x220b7d0()*0.391536);
}

double NNfunction_ss_dRcR::synapse0x221aff0() {
   return (neuron0x220c1a0()*0.827428);
}

double NNfunction_ss_dRcR::synapse0x221b030() {
   return (neuron0x21fd020()*0.230332);
}

double NNfunction_ss_dRcR::synapse0x221b070() {
   return (neuron0x21fd9f0()*0.998714);
}

double NNfunction_ss_dRcR::synapse0x221b0b0() {
   return (neuron0x21fe3c0()*0.386358);
}

double NNfunction_ss_dRcR::synapse0x221b0f0() {
   return (neuron0x2210a00()*0.106428);
}

double NNfunction_ss_dRcR::synapse0x221b130() {
   return (neuron0x22112b0()*-0.303365);
}

double NNfunction_ss_dRcR::synapse0x221b170() {
   return (neuron0x2211c80()*0.47436);
}

double NNfunction_ss_dRcR::synapse0x221b1b0() {
   return (neuron0x2212650()*0.0831541);
}

double NNfunction_ss_dRcR::synapse0x221b530() {
   return (neuron0x21ee5d0()*-0.0487203);
}

double NNfunction_ss_dRcR::synapse0x221b570() {
   return (neuron0x21eeee0()*-1.0772);
}

double NNfunction_ss_dRcR::synapse0x221b5b0() {
   return (neuron0x21ef9c0()*2.34552);
}

double NNfunction_ss_dRcR::synapse0x221b5f0() {
   return (neuron0x1fa9250()*-2.86604);
}

double NNfunction_ss_dRcR::synapse0x221b630() {
   return (neuron0x21f07e0()*1.66055);
}

double NNfunction_ss_dRcR::synapse0x221b670() {
   return (neuron0x21f11b0()*-5.18282);
}

double NNfunction_ss_dRcR::synapse0x221b6b0() {
   return (neuron0x21f1f80()*-0.300397);
}

double NNfunction_ss_dRcR::synapse0x221b6f0() {
   return (neuron0x21f2950()*1.41424);
}

double NNfunction_ss_dRcR::synapse0x221b730() {
   return (neuron0x21f3320()*-0.345856);
}

double NNfunction_ss_dRcR::synapse0x221b770() {
   return (neuron0x21f3e00()*1.62163);
}

double NNfunction_ss_dRcR::synapse0x221b7b0() {
   return (neuron0x21f47d0()*0.0859062);
}

double NNfunction_ss_dRcR::synapse0x221b7f0() {
   return (neuron0x21f18b0()*2.01326);
}

double NNfunction_ss_dRcR::synapse0x221b830() {
   return (neuron0x21f6380()*-1.54753);
}

double NNfunction_ss_dRcR::synapse0x221b870() {
   return (neuron0x21f6d50()*0.590561);
}

double NNfunction_ss_dRcR::synapse0x221b8b0() {
   return (neuron0x21f7720()*1.38721);
}

double NNfunction_ss_dRcR::synapse0x221b8f0() {
   return (neuron0x21f80f0()*1.66103);
}

double NNfunction_ss_dRcR::synapse0x221b380() {
   return (neuron0x21f9f00()*0.542498);
}

double NNfunction_ss_dRcR::synapse0x221b3c0() {
   return (neuron0x21fa1e0()*-1.19231);
}

double NNfunction_ss_dRcR::synapse0x221ba40() {
   return (neuron0x21fabb0()*-1.23855);
}

double NNfunction_ss_dRcR::synapse0x221ba80() {
   return (neuron0x21fb580()*-0.224801);
}

double NNfunction_ss_dRcR::synapse0x221bac0() {
   return (neuron0x21fbf50()*0.453918);
}

double NNfunction_ss_dRcR::synapse0x221bb00() {
   return (neuron0x21fc920()*0.159552);
}

double NNfunction_ss_dRcR::synapse0x221bb40() {
   return (neuron0x21f5470()*0.509687);
}

double NNfunction_ss_dRcR::synapse0x221bb80() {
   return (neuron0x21f5e40()*-1.47536);
}

double NNfunction_ss_dRcR::synapse0x221bbc0() {
   return (neuron0x21ff6b0()*0.786079);
}

double NNfunction_ss_dRcR::synapse0x221bc00() {
   return (neuron0x2200080()*1.07463);
}

double NNfunction_ss_dRcR::synapse0x221bc40() {
   return (neuron0x2200a50()*1.32619);
}

double NNfunction_ss_dRcR::synapse0x221bc80() {
   return (neuron0x2201420()*-0.43181);
}

double NNfunction_ss_dRcR::synapse0x221bcc0() {
   return (neuron0x2201df0()*1.94733);
}

double NNfunction_ss_dRcR::synapse0x221bd00() {
   return (neuron0x22027c0()*0.0746351);
}

double NNfunction_ss_dRcR::synapse0x221bd40() {
   return (neuron0x2203190()*1.34379);
}

double NNfunction_ss_dRcR::synapse0x221bd80() {
   return (neuron0x2203b60()*0.9452);
}

double NNfunction_ss_dRcR::synapse0x221b930() {
   return (neuron0x21f9bf0()*1.45334);
}

double NNfunction_ss_dRcR::synapse0x221b970() {
   return (neuron0x2206740()*0.948739);
}

double NNfunction_ss_dRcR::synapse0x221b9b0() {
   return (neuron0x2207110()*0.608287);
}

double NNfunction_ss_dRcR::synapse0x221b9f0() {
   return (neuron0x2207ae0()*-0.0808139);
}

double NNfunction_ss_dRcR::synapse0x221bfd0() {
   return (neuron0x22084b0()*0.972806);
}

double NNfunction_ss_dRcR::synapse0x221c010() {
   return (neuron0x2208e80()*-1.19136);
}

double NNfunction_ss_dRcR::synapse0x221c050() {
   return (neuron0x2209850()*1.23348);
}

double NNfunction_ss_dRcR::synapse0x221c090() {
   return (neuron0x220a220()*0.774149);
}

double NNfunction_ss_dRcR::synapse0x221c0d0() {
   return (neuron0x220abf0()*-0.601261);
}

double NNfunction_ss_dRcR::synapse0x221c110() {
   return (neuron0x220b7d0()*1.39686);
}

double NNfunction_ss_dRcR::synapse0x221c150() {
   return (neuron0x220c1a0()*-1.52804);
}

double NNfunction_ss_dRcR::synapse0x221c190() {
   return (neuron0x21fd020()*1.89989);
}

double NNfunction_ss_dRcR::synapse0x221c1d0() {
   return (neuron0x21fd9f0()*0.623573);
}

double NNfunction_ss_dRcR::synapse0x221c210() {
   return (neuron0x21fe3c0()*-1.62329);
}

double NNfunction_ss_dRcR::synapse0x221c250() {
   return (neuron0x2210a00()*0.95115);
}

double NNfunction_ss_dRcR::synapse0x221c290() {
   return (neuron0x22112b0()*0.950822);
}

double NNfunction_ss_dRcR::synapse0x221c2d0() {
   return (neuron0x2211c80()*4.19959);
}

double NNfunction_ss_dRcR::synapse0x221c310() {
   return (neuron0x2212650()*-0.686823);
}

double NNfunction_ss_dRcR::synapse0x221c690() {
   return (neuron0x21ee5d0()*-0.150087);
}

double NNfunction_ss_dRcR::synapse0x221c6d0() {
   return (neuron0x21eeee0()*2.57238);
}

double NNfunction_ss_dRcR::synapse0x221c710() {
   return (neuron0x21ef9c0()*1.07542);
}

double NNfunction_ss_dRcR::synapse0x221c750() {
   return (neuron0x1fa9250()*-0.0248824);
}

double NNfunction_ss_dRcR::synapse0x221c790() {
   return (neuron0x21f07e0()*-0.102885);
}

double NNfunction_ss_dRcR::synapse0x221c7d0() {
   return (neuron0x21f11b0()*-3.39277);
}

double NNfunction_ss_dRcR::synapse0x221c810() {
   return (neuron0x21f1f80()*0.261156);
}

double NNfunction_ss_dRcR::synapse0x221c850() {
   return (neuron0x21f2950()*-0.044427);
}

double NNfunction_ss_dRcR::synapse0x221c890() {
   return (neuron0x21f3320()*3.14426);
}

double NNfunction_ss_dRcR::synapse0x221c8d0() {
   return (neuron0x21f3e00()*0.130248);
}

double NNfunction_ss_dRcR::synapse0x221c910() {
   return (neuron0x21f47d0()*-0.00223759);
}

double NNfunction_ss_dRcR::synapse0x221c950() {
   return (neuron0x21f18b0()*-1.49118);
}

double NNfunction_ss_dRcR::synapse0x221c990() {
   return (neuron0x21f6380()*0.115685);
}

double NNfunction_ss_dRcR::synapse0x221c9d0() {
   return (neuron0x21f6d50()*0.0537118);
}

double NNfunction_ss_dRcR::synapse0x221ca10() {
   return (neuron0x21f7720()*-0.0241662);
}

double NNfunction_ss_dRcR::synapse0x221ca50() {
   return (neuron0x21f80f0()*0.032062);
}

double NNfunction_ss_dRcR::synapse0x221c4e0() {
   return (neuron0x21f9f00()*1.04586);
}

double NNfunction_ss_dRcR::synapse0x221c520() {
   return (neuron0x21fa1e0()*-0.311835);
}

double NNfunction_ss_dRcR::synapse0x221cba0() {
   return (neuron0x21fabb0()*0.067634);
}

double NNfunction_ss_dRcR::synapse0x221cbe0() {
   return (neuron0x21fb580()*0.0251894);
}

double NNfunction_ss_dRcR::synapse0x221cc20() {
   return (neuron0x21fbf50()*0.314173);
}

double NNfunction_ss_dRcR::synapse0x221cc60() {
   return (neuron0x21fc920()*0.279067);
}

double NNfunction_ss_dRcR::synapse0x221cca0() {
   return (neuron0x21f5470()*1.34802);
}

double NNfunction_ss_dRcR::synapse0x221cce0() {
   return (neuron0x21f5e40()*0.0093815);
}

double NNfunction_ss_dRcR::synapse0x221cd20() {
   return (neuron0x21ff6b0()*-0.146031);
}

double NNfunction_ss_dRcR::synapse0x221cd60() {
   return (neuron0x2200080()*4.12849);
}

double NNfunction_ss_dRcR::synapse0x221cda0() {
   return (neuron0x2200a50()*-0.20162);
}

double NNfunction_ss_dRcR::synapse0x221cde0() {
   return (neuron0x2201420()*-0.0213052);
}

double NNfunction_ss_dRcR::synapse0x221ce20() {
   return (neuron0x2201df0()*-0.0279137);
}

double NNfunction_ss_dRcR::synapse0x221ce60() {
   return (neuron0x22027c0()*-3.10868);
}

double NNfunction_ss_dRcR::synapse0x221cea0() {
   return (neuron0x2203190()*0.0533312);
}

double NNfunction_ss_dRcR::synapse0x221cee0() {
   return (neuron0x2203b60()*-0.0403937);
}

double NNfunction_ss_dRcR::synapse0x221ca90() {
   return (neuron0x21f9bf0()*-0.0459634);
}

double NNfunction_ss_dRcR::synapse0x221cad0() {
   return (neuron0x2206740()*0.183138);
}

double NNfunction_ss_dRcR::synapse0x221cb10() {
   return (neuron0x2207110()*0.0605824);
}

double NNfunction_ss_dRcR::synapse0x221cb50() {
   return (neuron0x2207ae0()*0.0277126);
}

double NNfunction_ss_dRcR::synapse0x221d130() {
   return (neuron0x22084b0()*-0.0739473);
}

double NNfunction_ss_dRcR::synapse0x221d170() {
   return (neuron0x2208e80()*0.112625);
}

double NNfunction_ss_dRcR::synapse0x221d1b0() {
   return (neuron0x2209850()*0.0470377);
}

double NNfunction_ss_dRcR::synapse0x221d1f0() {
   return (neuron0x220a220()*0.019938);
}

double NNfunction_ss_dRcR::synapse0x221d230() {
   return (neuron0x220abf0()*0.118053);
}

double NNfunction_ss_dRcR::synapse0x221d270() {
   return (neuron0x220b7d0()*-0.00996691);
}

double NNfunction_ss_dRcR::synapse0x221d2b0() {
   return (neuron0x220c1a0()*0.0174809);
}

double NNfunction_ss_dRcR::synapse0x221d2f0() {
   return (neuron0x21fd020()*-1.88709);
}

double NNfunction_ss_dRcR::synapse0x221d330() {
   return (neuron0x21fd9f0()*-0.0380086);
}

double NNfunction_ss_dRcR::synapse0x221d370() {
   return (neuron0x21fe3c0()*0.101766);
}

double NNfunction_ss_dRcR::synapse0x221d3b0() {
   return (neuron0x2210a00()*-0.079103);
}

double NNfunction_ss_dRcR::synapse0x221d3f0() {
   return (neuron0x22112b0()*0.0440481);
}

double NNfunction_ss_dRcR::synapse0x221d430() {
   return (neuron0x2211c80()*-0.0638233);
}

double NNfunction_ss_dRcR::synapse0x221d470() {
   return (neuron0x2212650()*0.00895885);
}

double NNfunction_ss_dRcR::synapse0x21ee590() {
   return (neuron0x2219850()*-6.52278);
}

double NNfunction_ss_dRcR::synapse0x221d6d0() {
   return (neuron0x2219bf0()*-2.71477);
}

double NNfunction_ss_dRcR::synapse0x221d710() {
   return (neuron0x221a090()*8.12161);
}

double NNfunction_ss_dRcR::synapse0x221d750() {
   return (neuron0x221b1f0()*-5.72662);
}

double NNfunction_ss_dRcR::synapse0x221d790() {
   return (neuron0x221c350()*-7.46653);
}

