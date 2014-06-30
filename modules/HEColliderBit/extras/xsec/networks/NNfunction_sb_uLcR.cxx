#include "NNfunction_sb_uLcR.h"
#include <cmath>

double NNfunction_sb_uLcR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.7762)/15.0192;
   input1 = (in1 - 53.5952)/748.921;
   input2 = (in2 - 376.344)/468.408;
   input3 = (in3 - 275.066)/633.559;
   input4 = (in4 - 748.44)/700.611;
   input5 = (in5 - 641.986)/671.344;
   input6 = (in6 - 649.751)/678.595;
   input7 = (in7 - 643.043)/671.127;
   input8 = (in8 - 632.72)/684.95;
   input9 = (in9 - 624.159)/669.717;
   input10 = (in10 - 639.324)/700.48;
   input11 = (in11 - 554.067)/345.44;
   input12 = (in12 - 682.357)/580.634;
   input13 = (in13 - 531.725)/364.847;
   input14 = (in14 - 680.43)/558.577;
   input15 = (in15 - 560.695)/348.238;
   input16 = (in16 - 480.62)/388.434;
   input17 = (in17 - 691.685)/597.854;
   input18 = (in18 - 686.101)/595.815;
   input19 = (in19 - 690.778)/592.67;
   input20 = (in20 - -215.755)/416.616;
   input21 = (in21 - -278.217)/893.21;
   input22 = (in22 - -0.199453)/894.332;
   input23 = (in23 - -8.31747)/501.162;
   switch(index) {
     case 0:
         return neuron0x2917130();
     default:
         return 0.;
   }
}

double NNfunction_sb_uLcR::Value(int index, double* input) {
   input0 = (input[0] - 22.7762)/15.0192;
   input1 = (input[1] - 53.5952)/748.921;
   input2 = (input[2] - 376.344)/468.408;
   input3 = (input[3] - 275.066)/633.559;
   input4 = (input[4] - 748.44)/700.611;
   input5 = (input[5] - 641.986)/671.344;
   input6 = (input[6] - 649.751)/678.595;
   input7 = (input[7] - 643.043)/671.127;
   input8 = (input[8] - 632.72)/684.95;
   input9 = (input[9] - 624.159)/669.717;
   input10 = (input[10] - 639.324)/700.48;
   input11 = (input[11] - 554.067)/345.44;
   input12 = (input[12] - 682.357)/580.634;
   input13 = (input[13] - 531.725)/364.847;
   input14 = (input[14] - 680.43)/558.577;
   input15 = (input[15] - 560.695)/348.238;
   input16 = (input[16] - 480.62)/388.434;
   input17 = (input[17] - 691.685)/597.854;
   input18 = (input[18] - 686.101)/595.815;
   input19 = (input[19] - 690.778)/592.67;
   input20 = (input[20] - -215.755)/416.616;
   input21 = (input[21] - -278.217)/893.21;
   input22 = (input[22] - -0.199453)/894.332;
   input23 = (input[23] - -8.31747)/501.162;
   switch(index) {
     case 0:
         return neuron0x2917130();
     default:
         return 0.;
   }
}

double NNfunction_sb_uLcR::neuron0x28e2210() {
   return input0;
}

double NNfunction_sb_uLcR::neuron0x28e24c0() {
   return input1;
}

double NNfunction_sb_uLcR::neuron0x28e2800() {
   return input2;
}

double NNfunction_sb_uLcR::neuron0x28e2b40() {
   return input3;
}

double NNfunction_sb_uLcR::neuron0x28e2e80() {
   return input4;
}

double NNfunction_sb_uLcR::neuron0x28e31c0() {
   return input5;
}

double NNfunction_sb_uLcR::neuron0x28e3500() {
   return input6;
}

double NNfunction_sb_uLcR::neuron0x28e3840() {
   return input7;
}

double NNfunction_sb_uLcR::neuron0x28e3b80() {
   return input8;
}

double NNfunction_sb_uLcR::neuron0x28e3ec0() {
   return input9;
}

double NNfunction_sb_uLcR::neuron0x28e4200() {
   return input10;
}

double NNfunction_sb_uLcR::neuron0x28e4540() {
   return input11;
}

double NNfunction_sb_uLcR::neuron0x28e4880() {
   return input12;
}

double NNfunction_sb_uLcR::neuron0x28e4bc0() {
   return input13;
}

double NNfunction_sb_uLcR::neuron0x28e4f00() {
   return input14;
}

double NNfunction_sb_uLcR::neuron0x28e5240() {
   return input15;
}

double NNfunction_sb_uLcR::neuron0x28e5580() {
   return input16;
}

double NNfunction_sb_uLcR::neuron0x28e5ae0() {
   return input17;
}

double NNfunction_sb_uLcR::neuron0x28e5e20() {
   return input18;
}

double NNfunction_sb_uLcR::neuron0x28e6160() {
   return input19;
}

double NNfunction_sb_uLcR::neuron0x28e64a0() {
   return input20;
}

double NNfunction_sb_uLcR::neuron0x28e67e0() {
   return input21;
}

double NNfunction_sb_uLcR::neuron0x28e6b20() {
   return input22;
}

double NNfunction_sb_uLcR::neuron0x28e6e60() {
   return input23;
}

double NNfunction_sb_uLcR::input0x28e72d0() {
   double input = -0.914899;
   input += synapse0x28e7610();
   input += synapse0x28e7650();
   input += synapse0x28e7690();
   input += synapse0x28e76d0();
   input += synapse0x28e7710();
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
   input += synapse0x28e7460();
   input += synapse0x28e74a0();
   input += synapse0x269e380();
   input += synapse0x269e3c0();
   input += synapse0x28e7a10();
   input += synapse0x28e7a50();
   input += synapse0x28e7a90();
   input += synapse0x28e7ad0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x28e72d0() {
   double input = input0x28e72d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x28e7b10() {
   double input = -0.229302;
   input += synapse0x28e7e50();
   input += synapse0x28e7e90();
   input += synapse0x28e7ed0();
   input += synapse0x28e7f10();
   input += synapse0x28e7f50();
   input += synapse0x28e7f90();
   input += synapse0x28e7fd0();
   input += synapse0x28e8010();
   input += synapse0x28e8050();
   input += synapse0x269e1d0();
   input += synapse0x269e210();
   input += synapse0x269e250();
   input += synapse0x269e290();
   input += synapse0x28e82a0();
   input += synapse0x28e82e0();
   input += synapse0x28e8320();
   input += synapse0x28e7ca0();
   input += synapse0x28e7ce0();
   input += synapse0x28e8470();
   input += synapse0x28e84b0();
   input += synapse0x28e84f0();
   input += synapse0x28e8530();
   input += synapse0x28e8570();
   input += synapse0x28e85b0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x28e7b10() {
   double input = input0x28e7b10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x28e85f0() {
   double input = -0.788278;
   input += synapse0x28e8930();
   input += synapse0x28e8970();
   input += synapse0x28e89b0();
   input += synapse0x28e89f0();
   input += synapse0x28e8a30();
   input += synapse0x28e8a70();
   input += synapse0x28e8ab0();
   input += synapse0x28e8af0();
   input += synapse0x28e8b30();
   input += synapse0x28e8b70();
   input += synapse0x28e8bb0();
   input += synapse0x28e8bf0();
   input += synapse0x28e8c30();
   input += synapse0x28e8c70();
   input += synapse0x28e8cb0();
   input += synapse0x28e8cf0();
   input += synapse0x28e8780();
   input += synapse0x28e87c0();
   input += synapse0x26ac280();
   input += synapse0x26ac2c0();
   input += synapse0x28eabe0();
   input += synapse0x28eac20();
   input += synapse0x28e1f10();
   input += synapse0x28e1f50();
   return input;
}

double NNfunction_sb_uLcR::neuron0x28e85f0() {
   double input = input0x28e85f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x26ac9e0() {
   double input = -0.526924;
   input += synapse0x26acb70();
   input += synapse0x28e81b0();
   input += synapse0x28e81f0();
   input += synapse0x28e8230();
   input += synapse0x28e2020();
   input += synapse0x28e8e40();
   input += synapse0x28e8e80();
   input += synapse0x28e8ec0();
   input += synapse0x28e8f00();
   input += synapse0x28e8f40();
   input += synapse0x28e8f80();
   input += synapse0x28e8fc0();
   input += synapse0x28e9000();
   input += synapse0x28e9040();
   input += synapse0x28e9080();
   input += synapse0x28e90c0();
   input += synapse0x28e1f90();
   input += synapse0x28e1fd0();
   input += synapse0x28e9210();
   input += synapse0x28e9250();
   input += synapse0x28e9290();
   input += synapse0x28e92d0();
   input += synapse0x28e9310();
   input += synapse0x28e9350();
   return input;
}

double NNfunction_sb_uLcR::neuron0x26ac9e0() {
   double input = input0x26ac9e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x28e9390() {
   double input = -0.976939;
   input += synapse0x28e96d0();
   input += synapse0x28e9710();
   input += synapse0x28e9750();
   input += synapse0x28e9790();
   input += synapse0x28e97d0();
   input += synapse0x28e9810();
   input += synapse0x28e9850();
   input += synapse0x28e9890();
   input += synapse0x28e98d0();
   input += synapse0x28e9910();
   input += synapse0x28e9950();
   input += synapse0x28e9990();
   input += synapse0x28e99d0();
   input += synapse0x28e9a10();
   input += synapse0x28e9a50();
   input += synapse0x28e9a90();
   input += synapse0x28e9be0();
   input += synapse0x28e9520();
   input += synapse0x28e9560();
   input += synapse0x28eacf0();
   input += synapse0x28ead30();
   input += synapse0x28ead70();
   input += synapse0x28eadb0();
   input += synapse0x28eadf0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x28e9390() {
   double input = input0x28e9390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x28eae30() {
   double input = 1.60276;
   input += synapse0x28eb170();
   input += synapse0x28eb1b0();
   input += synapse0x28eb1f0();
   input += synapse0x28eb230();
   input += synapse0x28eb270();
   input += synapse0x28eb2b0();
   input += synapse0x28eb2f0();
   input += synapse0x28eb330();
   input += synapse0x28eb370();
   input += synapse0x26ac5d0();
   input += synapse0x26ac610();
   input += synapse0x26ac650();
   input += synapse0x26ac690();
   input += synapse0x26ac6d0();
   input += synapse0x26ac710();
   input += synapse0x26ac750();
   input += synapse0x28eafc0();
   input += synapse0x28eb000();
   input += synapse0x26ac8a0();
   input += synapse0x26ac8e0();
   input += synapse0x26ac920();
   input += synapse0x26ac960();
   input += synapse0x26ac9a0();
   input += synapse0x28ebbc0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x28eae30() {
   double input = input0x28eae30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x28ebc00() {
   double input = -0.239643;
   input += synapse0x28ebf40();
   input += synapse0x28ebf80();
   input += synapse0x28ebfc0();
   input += synapse0x28ec000();
   input += synapse0x28ec040();
   input += synapse0x28ec080();
   input += synapse0x28ec0c0();
   input += synapse0x28ec100();
   input += synapse0x28ec140();
   input += synapse0x28ec180();
   input += synapse0x28ec1c0();
   input += synapse0x28ec200();
   input += synapse0x28ec240();
   input += synapse0x28ec280();
   input += synapse0x28ec2c0();
   input += synapse0x28ec300();
   input += synapse0x28ebd90();
   input += synapse0x28ebdd0();
   input += synapse0x28ec450();
   input += synapse0x28ec490();
   input += synapse0x28ec4d0();
   input += synapse0x28ec510();
   input += synapse0x28ec550();
   input += synapse0x28ec590();
   return input;
}

double NNfunction_sb_uLcR::neuron0x28ebc00() {
   double input = input0x28ebc00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x28ec5d0() {
   double input = -1.50947;
   input += synapse0x28ec910();
   input += synapse0x28ec950();
   input += synapse0x28ec990();
   input += synapse0x28ec9d0();
   input += synapse0x28eca10();
   input += synapse0x28eca50();
   input += synapse0x28eca90();
   input += synapse0x28ecad0();
   input += synapse0x28ecb10();
   input += synapse0x28ecb50();
   input += synapse0x28ecb90();
   input += synapse0x28ecbd0();
   input += synapse0x28ecc10();
   input += synapse0x28ecc50();
   input += synapse0x28ecc90();
   input += synapse0x28eccd0();
   input += synapse0x28ec760();
   input += synapse0x28ec7a0();
   input += synapse0x28ece20();
   input += synapse0x28ece60();
   input += synapse0x28ecea0();
   input += synapse0x28ecee0();
   input += synapse0x28ecf20();
   input += synapse0x28ecf60();
   return input;
}

double NNfunction_sb_uLcR::neuron0x28ec5d0() {
   double input = input0x28ec5d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x28ecfa0() {
   double input = 0.938262;
   input += synapse0x28e59d0();
   input += synapse0x28e5a10();
   input += synapse0x28e5a50();
   input += synapse0x28e5a90();
   input += synapse0x28ed4f0();
   input += synapse0x28ed530();
   input += synapse0x28ed570();
   input += synapse0x28ed5b0();
   input += synapse0x28ed5f0();
   input += synapse0x28ed630();
   input += synapse0x28ed670();
   input += synapse0x28ed6b0();
   input += synapse0x28ed6f0();
   input += synapse0x28ed730();
   input += synapse0x28ed770();
   input += synapse0x28ed7b0();
   input += synapse0x28ed130();
   input += synapse0x28ed170();
   input += synapse0x28ed900();
   input += synapse0x28ed940();
   input += synapse0x28ed980();
   input += synapse0x28ed9c0();
   input += synapse0x28eda00();
   input += synapse0x28eda40();
   return input;
}

double NNfunction_sb_uLcR::neuron0x28ecfa0() {
   double input = input0x28ecfa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x28eda80() {
   double input = 0.911892;
   input += synapse0x28eddc0();
   input += synapse0x28ede00();
   input += synapse0x28ede40();
   input += synapse0x28ede80();
   input += synapse0x28edec0();
   input += synapse0x28edf00();
   input += synapse0x28edf40();
   input += synapse0x28edf80();
   input += synapse0x28edfc0();
   input += synapse0x28ee000();
   input += synapse0x28ee040();
   input += synapse0x28ee080();
   input += synapse0x28ee0c0();
   input += synapse0x28ee100();
   input += synapse0x28ee140();
   input += synapse0x28ee180();
   input += synapse0x28edc10();
   input += synapse0x28edc50();
   input += synapse0x28ee2d0();
   input += synapse0x28ee310();
   input += synapse0x28ee350();
   input += synapse0x28ee390();
   input += synapse0x28ee3d0();
   input += synapse0x28ee410();
   return input;
}

double NNfunction_sb_uLcR::neuron0x28eda80() {
   double input = input0x28eda80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x28ee450() {
   double input = -0.669167;
   input += synapse0x28ee790();
   input += synapse0x28ee7d0();
   input += synapse0x28ee810();
   input += synapse0x28ee850();
   input += synapse0x28ee890();
   input += synapse0x28ee8d0();
   input += synapse0x28ee910();
   input += synapse0x28ee950();
   input += synapse0x28ee990();
   input += synapse0x28ee9d0();
   input += synapse0x28eea10();
   input += synapse0x28eea50();
   input += synapse0x28eea90();
   input += synapse0x28eead0();
   input += synapse0x28eeb10();
   input += synapse0x28eeb50();
   input += synapse0x28ee5e0();
   input += synapse0x28ee620();
   input += synapse0x28eb3b0();
   input += synapse0x28eb3f0();
   input += synapse0x28eb430();
   input += synapse0x28eb470();
   input += synapse0x28eb4b0();
   input += synapse0x28eb4f0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x28ee450() {
   double input = input0x28ee450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x28eb530() {
   double input = -0.227833;
   input += synapse0x28eb870();
   input += synapse0x28eb8b0();
   input += synapse0x28eb8f0();
   input += synapse0x28eb930();
   input += synapse0x28eb970();
   input += synapse0x28eb9b0();
   input += synapse0x28eb9f0();
   input += synapse0x28eba30();
   input += synapse0x28eba70();
   input += synapse0x28ebab0();
   input += synapse0x28ebaf0();
   input += synapse0x28ebb30();
   input += synapse0x28ebb70();
   input += synapse0x28efcb0();
   input += synapse0x28efcf0();
   input += synapse0x28efd30();
   input += synapse0x28eb6c0();
   input += synapse0x28eb700();
   input += synapse0x28efe80();
   input += synapse0x28efec0();
   input += synapse0x28eff00();
   input += synapse0x28eff40();
   input += synapse0x28eff80();
   input += synapse0x28effc0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x28eb530() {
   double input = input0x28eb530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x28f0000() {
   double input = 2.2802;
   input += synapse0x28f0340();
   input += synapse0x28f0380();
   input += synapse0x28f03c0();
   input += synapse0x28f0400();
   input += synapse0x28f0440();
   input += synapse0x28f0480();
   input += synapse0x28f04c0();
   input += synapse0x28f0500();
   input += synapse0x28f0540();
   input += synapse0x28f0580();
   input += synapse0x28f05c0();
   input += synapse0x28f0600();
   input += synapse0x28f0640();
   input += synapse0x28f0680();
   input += synapse0x28f06c0();
   input += synapse0x28f0700();
   input += synapse0x28f0190();
   input += synapse0x28f01d0();
   input += synapse0x28f0850();
   input += synapse0x28f0890();
   input += synapse0x28f08d0();
   input += synapse0x28f0910();
   input += synapse0x28f0950();
   input += synapse0x28f0990();
   return input;
}

double NNfunction_sb_uLcR::neuron0x28f0000() {
   double input = input0x28f0000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x28f09d0() {
   double input = 0.15818;
   input += synapse0x28f0d10();
   input += synapse0x28f0d50();
   input += synapse0x28f0d90();
   input += synapse0x28f0dd0();
   input += synapse0x28f0e10();
   input += synapse0x28f0e50();
   input += synapse0x28f0e90();
   input += synapse0x28f0ed0();
   input += synapse0x28f0f10();
   input += synapse0x28f0f50();
   input += synapse0x28f0f90();
   input += synapse0x28f0fd0();
   input += synapse0x28f1010();
   input += synapse0x28f1050();
   input += synapse0x28f1090();
   input += synapse0x28f10d0();
   input += synapse0x28f0b60();
   input += synapse0x28f0ba0();
   input += synapse0x28f1220();
   input += synapse0x28f1260();
   input += synapse0x28f12a0();
   input += synapse0x28f12e0();
   input += synapse0x28f1320();
   input += synapse0x28f1360();
   return input;
}

double NNfunction_sb_uLcR::neuron0x28f09d0() {
   double input = input0x28f09d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x28f13a0() {
   double input = -1.06285;
   input += synapse0x28f16e0();
   input += synapse0x28f1720();
   input += synapse0x28f1760();
   input += synapse0x28f17a0();
   input += synapse0x28f17e0();
   input += synapse0x28f1820();
   input += synapse0x28f1860();
   input += synapse0x28f18a0();
   input += synapse0x28f18e0();
   input += synapse0x28f1920();
   input += synapse0x28f1960();
   input += synapse0x28f19a0();
   input += synapse0x28f19e0();
   input += synapse0x28f1a20();
   input += synapse0x28f1a60();
   input += synapse0x28f1aa0();
   input += synapse0x28f1530();
   input += synapse0x28f1570();
   input += synapse0x28f1bf0();
   input += synapse0x28f1c30();
   input += synapse0x28f1c70();
   input += synapse0x28f1cb0();
   input += synapse0x28f1cf0();
   input += synapse0x28f1d30();
   return input;
}

double NNfunction_sb_uLcR::neuron0x28f13a0() {
   double input = input0x28f13a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x28f1d70() {
   double input = -1.00073;
   input += synapse0x28f20b0();
   input += synapse0x28e23a0();
   input += synapse0x28e23e0();
   input += synapse0x28e26e0();
   input += synapse0x28e2720();
   input += synapse0x28e2a20();
   input += synapse0x28e2a60();
   input += synapse0x28e2d60();
   input += synapse0x28e2da0();
   input += synapse0x28e30a0();
   input += synapse0x28e30e0();
   input += synapse0x28e33e0();
   input += synapse0x28e3420();
   input += synapse0x28e3720();
   input += synapse0x28e3760();
   input += synapse0x28e3a60();
   input += synapse0x28e3aa0();
   input += synapse0x28e3da0();
   input += synapse0x28e3de0();
   input += synapse0x28e40e0();
   input += synapse0x28e4120();
   input += synapse0x28e4420();
   input += synapse0x28e4460();
   input += synapse0x28e4760();
   return input;
}

double NNfunction_sb_uLcR::neuron0x28f1d70() {
   double input = input0x28f1d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x28f3b80() {
   double input = -1.56879;
   input += synapse0x28e47a0();
   input += synapse0x28e5460();
   input += synapse0x28e54a0();
   input += synapse0x28f1f00();
   input += synapse0x28f1f40();
   input += synapse0x28e57a0();
   input += synapse0x28e57e0();
   input += synapse0x28e5d00();
   input += synapse0x28e5d40();
   input += synapse0x28e6040();
   input += synapse0x28e6080();
   input += synapse0x28e6380();
   input += synapse0x28e63c0();
   input += synapse0x28e66c0();
   input += synapse0x28e6700();
   input += synapse0x28e6a00();
   input += synapse0x28e6a40();
   input += synapse0x28e6d40();
   input += synapse0x28e6d80();
   input += synapse0x28e7080();
   input += synapse0x28e70c0();
   input += synapse0x28e4aa0();
   input += synapse0x28e4ae0();
   input += synapse0x28f3e20();
   return input;
}

double NNfunction_sb_uLcR::neuron0x28f3b80() {
   double input = input0x28f3b80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x28f3e60() {
   double input = -0.616095;
   input += synapse0x28f41a0();
   input += synapse0x28f41e0();
   input += synapse0x28f4220();
   input += synapse0x28f4260();
   input += synapse0x28f42a0();
   input += synapse0x28f42e0();
   input += synapse0x28f4320();
   input += synapse0x28f4360();
   input += synapse0x28f43a0();
   input += synapse0x28f43e0();
   input += synapse0x28f4420();
   input += synapse0x28f4460();
   input += synapse0x28f44a0();
   input += synapse0x28f44e0();
   input += synapse0x28f4520();
   input += synapse0x28f4560();
   input += synapse0x28f3ff0();
   input += synapse0x28f4030();
   input += synapse0x28f46b0();
   input += synapse0x28f46f0();
   input += synapse0x28f4730();
   input += synapse0x28f4770();
   input += synapse0x28f47b0();
   input += synapse0x28f47f0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x28f3e60() {
   double input = input0x28f3e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x28f4830() {
   double input = 1.04941;
   input += synapse0x28f4b70();
   input += synapse0x28f4bb0();
   input += synapse0x28f4bf0();
   input += synapse0x28f4c30();
   input += synapse0x28f4c70();
   input += synapse0x28f4cb0();
   input += synapse0x28f4cf0();
   input += synapse0x28f4d30();
   input += synapse0x28f4d70();
   input += synapse0x28f4db0();
   input += synapse0x28f4df0();
   input += synapse0x28f4e30();
   input += synapse0x28f4e70();
   input += synapse0x28f4eb0();
   input += synapse0x28f4ef0();
   input += synapse0x28f4f30();
   input += synapse0x28f49c0();
   input += synapse0x28f4a00();
   input += synapse0x28f5080();
   input += synapse0x28f50c0();
   input += synapse0x28f5100();
   input += synapse0x28f5140();
   input += synapse0x28f5180();
   input += synapse0x28f51c0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x28f4830() {
   double input = input0x28f4830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x28f5200() {
   double input = -0.0214614;
   input += synapse0x28f5540();
   input += synapse0x28f5580();
   input += synapse0x28f55c0();
   input += synapse0x28f5600();
   input += synapse0x28f5640();
   input += synapse0x28f5680();
   input += synapse0x28f56c0();
   input += synapse0x28f5700();
   input += synapse0x28f5740();
   input += synapse0x28f5780();
   input += synapse0x28f57c0();
   input += synapse0x28f5800();
   input += synapse0x28f5840();
   input += synapse0x28f5880();
   input += synapse0x28f58c0();
   input += synapse0x28f5900();
   input += synapse0x28f5390();
   input += synapse0x28f53d0();
   input += synapse0x28f5a50();
   input += synapse0x28f5a90();
   input += synapse0x28f5ad0();
   input += synapse0x28f5b10();
   input += synapse0x28f5b50();
   input += synapse0x28f5b90();
   return input;
}

double NNfunction_sb_uLcR::neuron0x28f5200() {
   double input = input0x28f5200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x28f5bd0() {
   double input = -1.60181;
   input += synapse0x28f5f10();
   input += synapse0x28f5f50();
   input += synapse0x28f5f90();
   input += synapse0x28f5fd0();
   input += synapse0x28f6010();
   input += synapse0x28f6050();
   input += synapse0x28f6090();
   input += synapse0x28f60d0();
   input += synapse0x28f6110();
   input += synapse0x28f6150();
   input += synapse0x28f6190();
   input += synapse0x28f61d0();
   input += synapse0x28f6210();
   input += synapse0x28f6250();
   input += synapse0x28f6290();
   input += synapse0x28f62d0();
   input += synapse0x28f5d60();
   input += synapse0x28f5da0();
   input += synapse0x28f6420();
   input += synapse0x28f6460();
   input += synapse0x28f64a0();
   input += synapse0x28f64e0();
   input += synapse0x28f6520();
   input += synapse0x28f6560();
   return input;
}

double NNfunction_sb_uLcR::neuron0x28f5bd0() {
   double input = input0x28f5bd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x28f65a0() {
   double input = 0.013443;
   input += synapse0x28f68e0();
   input += synapse0x28f6920();
   input += synapse0x28f6960();
   input += synapse0x28f69a0();
   input += synapse0x28f69e0();
   input += synapse0x28f6a20();
   input += synapse0x28f6a60();
   input += synapse0x28f6aa0();
   input += synapse0x28f6ae0();
   input += synapse0x28eeca0();
   input += synapse0x28eece0();
   input += synapse0x28eed20();
   input += synapse0x28eed60();
   input += synapse0x28eeda0();
   input += synapse0x28eede0();
   input += synapse0x28eee20();
   input += synapse0x28f6730();
   input += synapse0x28f6770();
   input += synapse0x28eef70();
   input += synapse0x28eefb0();
   input += synapse0x28eeff0();
   input += synapse0x28ef030();
   input += synapse0x28ef070();
   input += synapse0x28ef0b0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x28f65a0() {
   double input = input0x28f65a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x28ef0f0() {
   double input = -0.521963;
   input += synapse0x28ef430();
   input += synapse0x28ef470();
   input += synapse0x28ef4b0();
   input += synapse0x28ef4f0();
   input += synapse0x28ef530();
   input += synapse0x28ef570();
   input += synapse0x28ef5b0();
   input += synapse0x28ef5f0();
   input += synapse0x28ef630();
   input += synapse0x28ef670();
   input += synapse0x28ef6b0();
   input += synapse0x28ef6f0();
   input += synapse0x28ef730();
   input += synapse0x28ef770();
   input += synapse0x28ef7b0();
   input += synapse0x28ef7f0();
   input += synapse0x28ef280();
   input += synapse0x28ef2c0();
   input += synapse0x28ef940();
   input += synapse0x28ef980();
   input += synapse0x28ef9c0();
   input += synapse0x28efa00();
   input += synapse0x28efa40();
   input += synapse0x28efa80();
   return input;
}

double NNfunction_sb_uLcR::neuron0x28ef0f0() {
   double input = input0x28ef0f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x28efac0() {
   double input = 0.0634109;
   input += synapse0x28efc50();
   input += synapse0x28f8ce0();
   input += synapse0x28f8d20();
   input += synapse0x28f8d60();
   input += synapse0x28f8da0();
   input += synapse0x28f8de0();
   input += synapse0x28f8e20();
   input += synapse0x28f8e60();
   input += synapse0x28f8ea0();
   input += synapse0x28f8ee0();
   input += synapse0x28f8f20();
   input += synapse0x28f8f60();
   input += synapse0x28f8fa0();
   input += synapse0x28f8fe0();
   input += synapse0x28f9020();
   input += synapse0x28f9060();
   input += synapse0x28f8b30();
   input += synapse0x28f8b70();
   input += synapse0x28f91b0();
   input += synapse0x28f91f0();
   input += synapse0x28f9230();
   input += synapse0x28f9270();
   input += synapse0x28f92b0();
   input += synapse0x28f92f0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x28efac0() {
   double input = input0x28efac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x28f9330() {
   double input = -0.799456;
   input += synapse0x28f9670();
   input += synapse0x28f96b0();
   input += synapse0x28f96f0();
   input += synapse0x28f9730();
   input += synapse0x28f9770();
   input += synapse0x28f97b0();
   input += synapse0x28f97f0();
   input += synapse0x28f9830();
   input += synapse0x28f9870();
   input += synapse0x28f98b0();
   input += synapse0x28f98f0();
   input += synapse0x28f9930();
   input += synapse0x28f9970();
   input += synapse0x28f99b0();
   input += synapse0x28f99f0();
   input += synapse0x28f9a30();
   input += synapse0x28f94c0();
   input += synapse0x28f9500();
   input += synapse0x28f9b80();
   input += synapse0x28f9bc0();
   input += synapse0x28f9c00();
   input += synapse0x28f9c40();
   input += synapse0x28f9c80();
   input += synapse0x28f9cc0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x28f9330() {
   double input = input0x28f9330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x28f9d00() {
   double input = 0.0965126;
   input += synapse0x28fa040();
   input += synapse0x28fa080();
   input += synapse0x28fa0c0();
   input += synapse0x28fa100();
   input += synapse0x28fa140();
   input += synapse0x28fa180();
   input += synapse0x28fa1c0();
   input += synapse0x28fa200();
   input += synapse0x28fa240();
   input += synapse0x28fa280();
   input += synapse0x28fa2c0();
   input += synapse0x28fa300();
   input += synapse0x28fa340();
   input += synapse0x28fa380();
   input += synapse0x28fa3c0();
   input += synapse0x28fa400();
   input += synapse0x28f9e90();
   input += synapse0x28f9ed0();
   input += synapse0x28fa550();
   input += synapse0x28fa590();
   input += synapse0x28fa5d0();
   input += synapse0x28fa610();
   input += synapse0x28fa650();
   input += synapse0x28fa690();
   return input;
}

double NNfunction_sb_uLcR::neuron0x28f9d00() {
   double input = input0x28f9d00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x28fa6d0() {
   double input = -0.111997;
   input += synapse0x28faa10();
   input += synapse0x28faa50();
   input += synapse0x28faa90();
   input += synapse0x28faad0();
   input += synapse0x28fab10();
   input += synapse0x28fab50();
   input += synapse0x28fab90();
   input += synapse0x28fabd0();
   input += synapse0x28fac10();
   input += synapse0x28fac50();
   input += synapse0x28fac90();
   input += synapse0x28facd0();
   input += synapse0x28fad10();
   input += synapse0x28fad50();
   input += synapse0x28fad90();
   input += synapse0x28fadd0();
   input += synapse0x28fa860();
   input += synapse0x28fa8a0();
   input += synapse0x28faf20();
   input += synapse0x28faf60();
   input += synapse0x28fafa0();
   input += synapse0x28fafe0();
   input += synapse0x28fb020();
   input += synapse0x28fb060();
   return input;
}

double NNfunction_sb_uLcR::neuron0x28fa6d0() {
   double input = input0x28fa6d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x28fb0a0() {
   double input = 5.11342;
   input += synapse0x28fb3e0();
   input += synapse0x28fb420();
   input += synapse0x28fb460();
   input += synapse0x28fb4a0();
   input += synapse0x28fb4e0();
   input += synapse0x28fb520();
   input += synapse0x28fb560();
   input += synapse0x28fb5a0();
   input += synapse0x28fb5e0();
   input += synapse0x28fb620();
   input += synapse0x28fb660();
   input += synapse0x28fb6a0();
   input += synapse0x28fb6e0();
   input += synapse0x28fb720();
   input += synapse0x28fb760();
   input += synapse0x28fb7a0();
   input += synapse0x28fb230();
   input += synapse0x28fb270();
   input += synapse0x28fb8f0();
   input += synapse0x28fb930();
   input += synapse0x28fb970();
   input += synapse0x28fb9b0();
   input += synapse0x28fb9f0();
   input += synapse0x28fba30();
   return input;
}

double NNfunction_sb_uLcR::neuron0x28fb0a0() {
   double input = input0x28fb0a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x28fba70() {
   double input = -1.85417;
   input += synapse0x28fbdb0();
   input += synapse0x28fbdf0();
   input += synapse0x28fbe30();
   input += synapse0x28fbe70();
   input += synapse0x28fbeb0();
   input += synapse0x28fbef0();
   input += synapse0x28fbf30();
   input += synapse0x28fbf70();
   input += synapse0x28fbfb0();
   input += synapse0x28fbff0();
   input += synapse0x28fc030();
   input += synapse0x28fc070();
   input += synapse0x28fc0b0();
   input += synapse0x28fc0f0();
   input += synapse0x28fc130();
   input += synapse0x28fc170();
   input += synapse0x28fbc00();
   input += synapse0x28fbc40();
   input += synapse0x28fc2c0();
   input += synapse0x28fc300();
   input += synapse0x28fc340();
   input += synapse0x28fc380();
   input += synapse0x28fc3c0();
   input += synapse0x28fc400();
   return input;
}

double NNfunction_sb_uLcR::neuron0x28fba70() {
   double input = input0x28fba70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x28fc440() {
   double input = 0.888506;
   input += synapse0x28fc780();
   input += synapse0x28fc7c0();
   input += synapse0x28fc800();
   input += synapse0x28fc840();
   input += synapse0x28fc880();
   input += synapse0x28fc8c0();
   input += synapse0x28fc900();
   input += synapse0x28fc940();
   input += synapse0x28fc980();
   input += synapse0x28fc9c0();
   input += synapse0x28fca00();
   input += synapse0x28fca40();
   input += synapse0x28fca80();
   input += synapse0x28fcac0();
   input += synapse0x28fcb00();
   input += synapse0x28fcb40();
   input += synapse0x28fc5d0();
   input += synapse0x28fc610();
   input += synapse0x28fcc90();
   input += synapse0x28fccd0();
   input += synapse0x28fcd10();
   input += synapse0x28fcd50();
   input += synapse0x28fcd90();
   input += synapse0x28fcdd0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x28fc440() {
   double input = input0x28fc440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x28fce10() {
   double input = -0.158084;
   input += synapse0x28fd150();
   input += synapse0x28fd190();
   input += synapse0x28fd1d0();
   input += synapse0x28fd210();
   input += synapse0x28fd250();
   input += synapse0x28fd290();
   input += synapse0x28fd2d0();
   input += synapse0x28fd310();
   input += synapse0x28fd350();
   input += synapse0x28fd390();
   input += synapse0x28fd3d0();
   input += synapse0x28fd410();
   input += synapse0x28fd450();
   input += synapse0x28fd490();
   input += synapse0x28fd4d0();
   input += synapse0x28fd510();
   input += synapse0x28fcfa0();
   input += synapse0x28fcfe0();
   input += synapse0x28fd660();
   input += synapse0x28fd6a0();
   input += synapse0x28fd6e0();
   input += synapse0x28fd720();
   input += synapse0x28fd760();
   input += synapse0x28fd7a0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x28fce10() {
   double input = input0x28fce10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x28fd7e0() {
   double input = 1.14116;
   input += synapse0x28fdb20();
   input += synapse0x28f20f0();
   input += synapse0x28f2130();
   input += synapse0x28f2170();
   input += synapse0x28f23c0();
   input += synapse0x28f2400();
   input += synapse0x28f2440();
   input += synapse0x28f2690();
   input += synapse0x28f26d0();
   input += synapse0x28f2920();
   input += synapse0x28f2960();
   input += synapse0x28f29a0();
   input += synapse0x28f2bf0();
   input += synapse0x28f2c30();
   input += synapse0x28f2e80();
   input += synapse0x28f2ec0();
   input += synapse0x28fd970();
   input += synapse0x28fd9b0();
   input += synapse0x28f3010();
   input += synapse0x28f3520();
   input += synapse0x28f3560();
   input += synapse0x28f35a0();
   input += synapse0x28f37f0();
   input += synapse0x28f3830();
   return input;
}

double NNfunction_sb_uLcR::neuron0x28fd7e0() {
   double input = input0x28fd7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x28f3870() {
   double input = -0.92069;
   input += synapse0x28f30e0();
   input += synapse0x28f3120();
   input += synapse0x28f3160();
   input += synapse0x28f31a0();
   input += synapse0x28f3b20();
   input += synapse0x28ffe70();
   input += synapse0x28ffeb0();
   input += synapse0x28ffef0();
   input += synapse0x28fff30();
   input += synapse0x28fff70();
   input += synapse0x28fffb0();
   input += synapse0x28ffff0();
   input += synapse0x2900030();
   input += synapse0x2900070();
   input += synapse0x29000b0();
   input += synapse0x29000f0();
   input += synapse0x28f3a00();
   input += synapse0x28f3a40();
   input += synapse0x2900240();
   input += synapse0x2900280();
   input += synapse0x29002c0();
   input += synapse0x2900300();
   input += synapse0x2900340();
   input += synapse0x2900380();
   return input;
}

double NNfunction_sb_uLcR::neuron0x28f3870() {
   double input = input0x28f3870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x29003c0() {
   double input = 0.508437;
   input += synapse0x2900700();
   input += synapse0x2900740();
   input += synapse0x2900780();
   input += synapse0x29007c0();
   input += synapse0x2900800();
   input += synapse0x2900840();
   input += synapse0x2900880();
   input += synapse0x29008c0();
   input += synapse0x2900900();
   input += synapse0x2900940();
   input += synapse0x2900980();
   input += synapse0x29009c0();
   input += synapse0x2900a00();
   input += synapse0x2900a40();
   input += synapse0x2900a80();
   input += synapse0x2900ac0();
   input += synapse0x2900550();
   input += synapse0x2900590();
   input += synapse0x2900c10();
   input += synapse0x2900c50();
   input += synapse0x2900c90();
   input += synapse0x2900cd0();
   input += synapse0x2900d10();
   input += synapse0x2900d50();
   return input;
}

double NNfunction_sb_uLcR::neuron0x29003c0() {
   double input = input0x29003c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x2900d90() {
   double input = 1.56455;
   input += synapse0x29010d0();
   input += synapse0x2901110();
   input += synapse0x2901150();
   input += synapse0x2901190();
   input += synapse0x29011d0();
   input += synapse0x2901210();
   input += synapse0x2901250();
   input += synapse0x2901290();
   input += synapse0x29012d0();
   input += synapse0x2901310();
   input += synapse0x2901350();
   input += synapse0x2901390();
   input += synapse0x29013d0();
   input += synapse0x2901410();
   input += synapse0x2901450();
   input += synapse0x2901490();
   input += synapse0x2900f20();
   input += synapse0x2900f60();
   input += synapse0x29015e0();
   input += synapse0x2901620();
   input += synapse0x2901660();
   input += synapse0x29016a0();
   input += synapse0x29016e0();
   input += synapse0x2901720();
   return input;
}

double NNfunction_sb_uLcR::neuron0x2900d90() {
   double input = input0x2900d90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x2901760() {
   double input = 2.02223;
   input += synapse0x2901aa0();
   input += synapse0x2901ae0();
   input += synapse0x2901b20();
   input += synapse0x2901b60();
   input += synapse0x2901ba0();
   input += synapse0x2901be0();
   input += synapse0x2901c20();
   input += synapse0x2901c60();
   input += synapse0x2901ca0();
   input += synapse0x2901ce0();
   input += synapse0x2901d20();
   input += synapse0x2901d60();
   input += synapse0x2901da0();
   input += synapse0x2901de0();
   input += synapse0x2901e20();
   input += synapse0x2901e60();
   input += synapse0x29018f0();
   input += synapse0x2901930();
   input += synapse0x2901fb0();
   input += synapse0x2901ff0();
   input += synapse0x2902030();
   input += synapse0x2902070();
   input += synapse0x29020b0();
   input += synapse0x29020f0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x2901760() {
   double input = input0x2901760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x2902130() {
   double input = 0.446027;
   input += synapse0x2902470();
   input += synapse0x29024b0();
   input += synapse0x29024f0();
   input += synapse0x2902530();
   input += synapse0x2902570();
   input += synapse0x29025b0();
   input += synapse0x29025f0();
   input += synapse0x2902630();
   input += synapse0x2902670();
   input += synapse0x29026b0();
   input += synapse0x29026f0();
   input += synapse0x2902730();
   input += synapse0x2902770();
   input += synapse0x29027b0();
   input += synapse0x29027f0();
   input += synapse0x2902830();
   input += synapse0x29022c0();
   input += synapse0x2902300();
   input += synapse0x2902980();
   input += synapse0x29029c0();
   input += synapse0x2902a00();
   input += synapse0x2902a40();
   input += synapse0x2902a80();
   input += synapse0x2902ac0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x2902130() {
   double input = input0x2902130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x2902b00() {
   double input = 0.189476;
   input += synapse0x2902e40();
   input += synapse0x2902e80();
   input += synapse0x2902ec0();
   input += synapse0x2902f00();
   input += synapse0x2902f40();
   input += synapse0x2902f80();
   input += synapse0x2902fc0();
   input += synapse0x2903000();
   input += synapse0x2903040();
   input += synapse0x2903080();
   input += synapse0x29030c0();
   input += synapse0x2903100();
   input += synapse0x2903140();
   input += synapse0x2903180();
   input += synapse0x29031c0();
   input += synapse0x2903200();
   input += synapse0x2902c90();
   input += synapse0x2902cd0();
   input += synapse0x2903350();
   input += synapse0x2903390();
   input += synapse0x29033d0();
   input += synapse0x2903410();
   input += synapse0x2903450();
   input += synapse0x2903490();
   return input;
}

double NNfunction_sb_uLcR::neuron0x2902b00() {
   double input = input0x2902b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x29034d0() {
   double input = 0.206963;
   input += synapse0x2903810();
   input += synapse0x2903850();
   input += synapse0x2903890();
   input += synapse0x29038d0();
   input += synapse0x2903910();
   input += synapse0x2903950();
   input += synapse0x2903990();
   input += synapse0x29039d0();
   input += synapse0x2903a10();
   input += synapse0x2903a50();
   input += synapse0x2903a90();
   input += synapse0x2903ad0();
   input += synapse0x2903b10();
   input += synapse0x2903b50();
   input += synapse0x2903b90();
   input += synapse0x2903bd0();
   input += synapse0x2903660();
   input += synapse0x29036a0();
   input += synapse0x2903d20();
   input += synapse0x2903d60();
   input += synapse0x2903da0();
   input += synapse0x2903de0();
   input += synapse0x2903e20();
   input += synapse0x2903e60();
   return input;
}

double NNfunction_sb_uLcR::neuron0x29034d0() {
   double input = input0x29034d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x2903ea0() {
   double input = -1.12551;
   input += synapse0x29041e0();
   input += synapse0x2904220();
   input += synapse0x2904260();
   input += synapse0x29042a0();
   input += synapse0x29042e0();
   input += synapse0x2904320();
   input += synapse0x2904360();
   input += synapse0x29043a0();
   input += synapse0x29043e0();
   input += synapse0x2904420();
   input += synapse0x2904460();
   input += synapse0x29044a0();
   input += synapse0x29044e0();
   input += synapse0x2904520();
   input += synapse0x2904560();
   input += synapse0x29045a0();
   input += synapse0x2904030();
   input += synapse0x2904070();
   input += synapse0x29046f0();
   input += synapse0x2904730();
   input += synapse0x2904770();
   input += synapse0x29047b0();
   input += synapse0x29047f0();
   input += synapse0x2904830();
   return input;
}

double NNfunction_sb_uLcR::neuron0x2903ea0() {
   double input = input0x2903ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x2904870() {
   double input = 0.675728;
   input += synapse0x28ed2e0();
   input += synapse0x28ed320();
   input += synapse0x28ed360();
   input += synapse0x28ed3a0();
   input += synapse0x28ed3e0();
   input += synapse0x28ed420();
   input += synapse0x28ed460();
   input += synapse0x28ed4a0();
   input += synapse0x2904fc0();
   input += synapse0x2905000();
   input += synapse0x2905040();
   input += synapse0x2905080();
   input += synapse0x29050c0();
   input += synapse0x2905100();
   input += synapse0x2905140();
   input += synapse0x2905180();
   input += synapse0x2904a00();
   input += synapse0x2904a40();
   input += synapse0x29052d0();
   input += synapse0x2905310();
   input += synapse0x2905350();
   input += synapse0x2905390();
   input += synapse0x29053d0();
   input += synapse0x2905410();
   return input;
}

double NNfunction_sb_uLcR::neuron0x2904870() {
   double input = input0x2904870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x2905450() {
   double input = -0.0439029;
   input += synapse0x2905790();
   input += synapse0x29057d0();
   input += synapse0x2905810();
   input += synapse0x2905850();
   input += synapse0x2905890();
   input += synapse0x29058d0();
   input += synapse0x2905910();
   input += synapse0x2905950();
   input += synapse0x2905990();
   input += synapse0x29059d0();
   input += synapse0x2905a10();
   input += synapse0x2905a50();
   input += synapse0x2905a90();
   input += synapse0x2905ad0();
   input += synapse0x2905b10();
   input += synapse0x2905b50();
   input += synapse0x29055e0();
   input += synapse0x2905620();
   input += synapse0x2905ca0();
   input += synapse0x2905ce0();
   input += synapse0x2905d20();
   input += synapse0x2905d60();
   input += synapse0x2905da0();
   input += synapse0x2905de0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x2905450() {
   double input = input0x2905450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x2905e20() {
   double input = -0.530361;
   input += synapse0x2906160();
   input += synapse0x29061a0();
   input += synapse0x29061e0();
   input += synapse0x2906220();
   input += synapse0x2906260();
   input += synapse0x29062a0();
   input += synapse0x29062e0();
   input += synapse0x2906320();
   input += synapse0x2906360();
   input += synapse0x29063a0();
   input += synapse0x29063e0();
   input += synapse0x2906420();
   input += synapse0x2906460();
   input += synapse0x29064a0();
   input += synapse0x29064e0();
   input += synapse0x2906520();
   input += synapse0x2905fb0();
   input += synapse0x2905ff0();
   input += synapse0x28f6b20();
   input += synapse0x28f6b60();
   input += synapse0x28f6ba0();
   input += synapse0x28f6be0();
   input += synapse0x28f6c20();
   input += synapse0x28f6c60();
   return input;
}

double NNfunction_sb_uLcR::neuron0x2905e20() {
   double input = input0x2905e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x28f6ca0() {
   double input = -0.698067;
   input += synapse0x28f6fe0();
   input += synapse0x28f7020();
   input += synapse0x28f7060();
   input += synapse0x28f70a0();
   input += synapse0x28f70e0();
   input += synapse0x28f7120();
   input += synapse0x28f7160();
   input += synapse0x28f71a0();
   input += synapse0x28f71e0();
   input += synapse0x28f7220();
   input += synapse0x28f7260();
   input += synapse0x28f72a0();
   input += synapse0x28f72e0();
   input += synapse0x28f7320();
   input += synapse0x28f7360();
   input += synapse0x28f73a0();
   input += synapse0x28f6e30();
   input += synapse0x28f6e70();
   input += synapse0x28f74f0();
   input += synapse0x28f7530();
   input += synapse0x28f7570();
   input += synapse0x28f75b0();
   input += synapse0x28f75f0();
   input += synapse0x28f7630();
   return input;
}

double NNfunction_sb_uLcR::neuron0x28f6ca0() {
   double input = input0x28f6ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x28f7670() {
   double input = -0.212149;
   input += synapse0x28f79b0();
   input += synapse0x28f79f0();
   input += synapse0x28f7a30();
   input += synapse0x28f7a70();
   input += synapse0x28f7ab0();
   input += synapse0x28f7af0();
   input += synapse0x28f7b30();
   input += synapse0x28f7b70();
   input += synapse0x28f7bb0();
   input += synapse0x28f7bf0();
   input += synapse0x28f7c30();
   input += synapse0x28f7c70();
   input += synapse0x28f7cb0();
   input += synapse0x28f7cf0();
   input += synapse0x28f7d30();
   input += synapse0x28f7d70();
   input += synapse0x28f7800();
   input += synapse0x28f7840();
   input += synapse0x28f7ec0();
   input += synapse0x28f7f00();
   input += synapse0x28f7f40();
   input += synapse0x28f7f80();
   input += synapse0x28f7fc0();
   input += synapse0x28f8000();
   return input;
}

double NNfunction_sb_uLcR::neuron0x28f7670() {
   double input = input0x28f7670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x28f8040() {
   double input = 1.57824;
   input += synapse0x28f8380();
   input += synapse0x28f83c0();
   input += synapse0x28f8400();
   input += synapse0x28f8440();
   input += synapse0x28f8480();
   input += synapse0x28f84c0();
   input += synapse0x28f8500();
   input += synapse0x28f8540();
   input += synapse0x28f8580();
   input += synapse0x28f85c0();
   input += synapse0x28f8600();
   input += synapse0x28f8640();
   input += synapse0x28f8680();
   input += synapse0x28f86c0();
   input += synapse0x28f8700();
   input += synapse0x28f8740();
   input += synapse0x28f81d0();
   input += synapse0x28f8210();
   input += synapse0x28f8890();
   input += synapse0x28f88d0();
   input += synapse0x28f8910();
   input += synapse0x28f8950();
   input += synapse0x28f8990();
   input += synapse0x28f89d0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x28f8040() {
   double input = input0x28f8040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x290a680() {
   double input = -0.911982;
   input += synapse0x290a8a0();
   input += synapse0x290a8e0();
   input += synapse0x290a920();
   input += synapse0x290a960();
   input += synapse0x290a9a0();
   input += synapse0x290a9e0();
   input += synapse0x290aa20();
   input += synapse0x290aa60();
   input += synapse0x290aaa0();
   input += synapse0x290aae0();
   input += synapse0x290ab20();
   input += synapse0x290ab60();
   input += synapse0x290aba0();
   input += synapse0x290abe0();
   input += synapse0x290ac20();
   input += synapse0x290ac60();
   input += synapse0x28f8a10();
   input += synapse0x28f8a50();
   input += synapse0x290adb0();
   input += synapse0x290adf0();
   input += synapse0x290ae30();
   input += synapse0x290ae70();
   input += synapse0x290aeb0();
   input += synapse0x290aef0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x290a680() {
   double input = input0x290a680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x290af30() {
   double input = 0.00496952;
   input += synapse0x290b270();
   input += synapse0x290b2b0();
   input += synapse0x290b2f0();
   input += synapse0x290b330();
   input += synapse0x290b370();
   input += synapse0x290b3b0();
   input += synapse0x290b3f0();
   input += synapse0x290b430();
   input += synapse0x290b470();
   input += synapse0x290b4b0();
   input += synapse0x290b4f0();
   input += synapse0x290b530();
   input += synapse0x290b570();
   input += synapse0x290b5b0();
   input += synapse0x290b5f0();
   input += synapse0x290b630();
   input += synapse0x290b0c0();
   input += synapse0x290b100();
   input += synapse0x290b780();
   input += synapse0x290b7c0();
   input += synapse0x290b800();
   input += synapse0x290b840();
   input += synapse0x290b880();
   input += synapse0x290b8c0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x290af30() {
   double input = input0x290af30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x290b900() {
   double input = 0.265975;
   input += synapse0x290bc40();
   input += synapse0x290bc80();
   input += synapse0x290bcc0();
   input += synapse0x290bd00();
   input += synapse0x290bd40();
   input += synapse0x290bd80();
   input += synapse0x290bdc0();
   input += synapse0x290be00();
   input += synapse0x290be40();
   input += synapse0x290be80();
   input += synapse0x290bec0();
   input += synapse0x290bf00();
   input += synapse0x290bf40();
   input += synapse0x290bf80();
   input += synapse0x290bfc0();
   input += synapse0x290c000();
   input += synapse0x290ba90();
   input += synapse0x290bad0();
   input += synapse0x290c150();
   input += synapse0x290c190();
   input += synapse0x290c1d0();
   input += synapse0x290c210();
   input += synapse0x290c250();
   input += synapse0x290c290();
   return input;
}

double NNfunction_sb_uLcR::neuron0x290b900() {
   double input = input0x290b900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x290c2d0() {
   double input = 0.207819;
   input += synapse0x290c610();
   input += synapse0x290c650();
   input += synapse0x290c690();
   input += synapse0x290c6d0();
   input += synapse0x290c710();
   input += synapse0x290c750();
   input += synapse0x290c790();
   input += synapse0x290c7d0();
   input += synapse0x290c810();
   input += synapse0x290c850();
   input += synapse0x290c890();
   input += synapse0x290c8d0();
   input += synapse0x290c910();
   input += synapse0x290c950();
   input += synapse0x290c990();
   input += synapse0x290c9d0();
   input += synapse0x290c460();
   input += synapse0x290c4a0();
   input += synapse0x290cb20();
   input += synapse0x290cb60();
   input += synapse0x290cba0();
   input += synapse0x290cbe0();
   input += synapse0x290cc20();
   input += synapse0x290cc60();
   return input;
}

double NNfunction_sb_uLcR::neuron0x290c2d0() {
   double input = input0x290c2d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x29134d0() {
   double input = 0.219159;
   input += synapse0x28e8120();
   input += synapse0x28e8160();
   input += synapse0x28e9640();
   input += synapse0x28e9680();
   input += synapse0x28eb0e0();
   input += synapse0x28eb120();
   input += synapse0x28ebeb0();
   input += synapse0x28ebef0();
   input += synapse0x28ec880();
   input += synapse0x28ec8c0();
   input += synapse0x28ed250();
   input += synapse0x28ed290();
   input += synapse0x28edd30();
   input += synapse0x28edd70();
   input += synapse0x28ee700();
   input += synapse0x28ee740();
   input += synapse0x28eb7e0();
   input += synapse0x28eb820();
   input += synapse0x28f02b0();
   input += synapse0x28f02f0();
   input += synapse0x28f0c80();
   input += synapse0x28f0cc0();
   input += synapse0x28f1650();
   input += synapse0x28f1690();
   input += synapse0x28f2020();
   input += synapse0x28f2060();
   input += synapse0x28e5120();
   input += synapse0x28e5160();
   input += synapse0x28f4110();
   input += synapse0x28f4150();
   input += synapse0x28f4ae0();
   input += synapse0x28f4b20();
   input += synapse0x28f54b0();
   input += synapse0x28f54f0();
   input += synapse0x28f5e80();
   input += synapse0x28f5ec0();
   input += synapse0x28f6850();
   input += synapse0x28f6890();
   input += synapse0x28ef3a0();
   input += synapse0x28ef3e0();
   input += synapse0x28f8c50();
   input += synapse0x28f8c90();
   input += synapse0x28f95e0();
   input += synapse0x28f9620();
   input += synapse0x28f9fb0();
   input += synapse0x28f9ff0();
   input += synapse0x28fa980();
   input += synapse0x28fa9c0();
   input += synapse0x28fb350();
   input += synapse0x28fb390();
   return input;
}

double NNfunction_sb_uLcR::neuron0x29134d0() {
   double input = input0x29134d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x2913870() {
   double input = 1.04608;
   input += synapse0x28fda90();
   input += synapse0x28fdad0();
   input += synapse0x28f3050();
   input += synapse0x28f3090();
   input += synapse0x2900670();
   input += synapse0x29006b0();
   input += synapse0x2901040();
   input += synapse0x2901080();
   input += synapse0x2901a10();
   input += synapse0x2901a50();
   input += synapse0x29023e0();
   input += synapse0x2902420();
   input += synapse0x2902db0();
   input += synapse0x2902df0();
   input += synapse0x2903780();
   input += synapse0x29037c0();
   input += synapse0x2904150();
   input += synapse0x2904190();
   input += synapse0x2904b20();
   input += synapse0x2904b60();
   input += synapse0x2905700();
   input += synapse0x2905740();
   input += synapse0x29060d0();
   input += synapse0x2906110();
   input += synapse0x28f6f50();
   input += synapse0x28f6f90();
   input += synapse0x28f7920();
   input += synapse0x28f7960();
   input += synapse0x28f82f0();
   input += synapse0x28f8330();
   input += synapse0x290a810();
   input += synapse0x290a850();
   input += synapse0x290b1e0();
   input += synapse0x290b220();
   input += synapse0x290bbb0();
   input += synapse0x290bbf0();
   input += synapse0x290c580();
   input += synapse0x290c5c0();
   input += synapse0x28e7580();
   input += synapse0x28e75c0();
   input += synapse0x28fbd20();
   input += synapse0x28fbd60();
   input += synapse0x290cca0();
   input += synapse0x290cce0();
   input += synapse0x290cd20();
   input += synapse0x290cd60();
   input += synapse0x2913c10();
   input += synapse0x2913c50();
   input += synapse0x2913c90();
   input += synapse0x2913cd0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x2913870() {
   double input = input0x2913870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x2913d10() {
   double input = 0.15804;
   input += synapse0x2914050();
   input += synapse0x2914090();
   input += synapse0x29140d0();
   input += synapse0x2914110();
   input += synapse0x2914150();
   input += synapse0x2914190();
   input += synapse0x29141d0();
   input += synapse0x2914210();
   input += synapse0x2914250();
   input += synapse0x2914290();
   input += synapse0x29142d0();
   input += synapse0x2914310();
   input += synapse0x2914350();
   input += synapse0x2914390();
   input += synapse0x29143d0();
   input += synapse0x2914410();
   input += synapse0x2913ea0();
   input += synapse0x2913ee0();
   input += synapse0x2914560();
   input += synapse0x29145a0();
   input += synapse0x29145e0();
   input += synapse0x2914620();
   input += synapse0x2914660();
   input += synapse0x29146a0();
   input += synapse0x29146e0();
   input += synapse0x2914720();
   input += synapse0x2914760();
   input += synapse0x29147a0();
   input += synapse0x29147e0();
   input += synapse0x2914820();
   input += synapse0x2914860();
   input += synapse0x29148a0();
   input += synapse0x2914450();
   input += synapse0x2914490();
   input += synapse0x29144d0();
   input += synapse0x2914510();
   input += synapse0x2914af0();
   input += synapse0x2914b30();
   input += synapse0x2914b70();
   input += synapse0x2914bb0();
   input += synapse0x2914bf0();
   input += synapse0x2914c30();
   input += synapse0x2914c70();
   input += synapse0x2914cb0();
   input += synapse0x2914cf0();
   input += synapse0x2914d30();
   input += synapse0x2914d70();
   input += synapse0x2914db0();
   input += synapse0x2914df0();
   input += synapse0x2914e30();
   return input;
}

double NNfunction_sb_uLcR::neuron0x2913d10() {
   double input = input0x2913d10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x2914e70() {
   double input = 0.282367;
   input += synapse0x29151b0();
   input += synapse0x29151f0();
   input += synapse0x2915230();
   input += synapse0x2915270();
   input += synapse0x29152b0();
   input += synapse0x29152f0();
   input += synapse0x2915330();
   input += synapse0x2915370();
   input += synapse0x29153b0();
   input += synapse0x29153f0();
   input += synapse0x2915430();
   input += synapse0x2915470();
   input += synapse0x29154b0();
   input += synapse0x29154f0();
   input += synapse0x2915530();
   input += synapse0x2915570();
   input += synapse0x2915000();
   input += synapse0x2915040();
   input += synapse0x29156c0();
   input += synapse0x2915700();
   input += synapse0x2915740();
   input += synapse0x2915780();
   input += synapse0x29157c0();
   input += synapse0x2915800();
   input += synapse0x2915840();
   input += synapse0x2915880();
   input += synapse0x29158c0();
   input += synapse0x2915900();
   input += synapse0x2915940();
   input += synapse0x2915980();
   input += synapse0x29159c0();
   input += synapse0x2915a00();
   input += synapse0x29155b0();
   input += synapse0x29155f0();
   input += synapse0x2915630();
   input += synapse0x2915670();
   input += synapse0x2915c50();
   input += synapse0x2915c90();
   input += synapse0x2915cd0();
   input += synapse0x2915d10();
   input += synapse0x2915d50();
   input += synapse0x2915d90();
   input += synapse0x2915dd0();
   input += synapse0x2915e10();
   input += synapse0x2915e50();
   input += synapse0x2915e90();
   input += synapse0x2915ed0();
   input += synapse0x2915f10();
   input += synapse0x2915f50();
   input += synapse0x2915f90();
   return input;
}

double NNfunction_sb_uLcR::neuron0x2914e70() {
   double input = input0x2914e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x2915fd0() {
   double input = 0.410134;
   input += synapse0x2916310();
   input += synapse0x2916350();
   input += synapse0x2916390();
   input += synapse0x29163d0();
   input += synapse0x2916410();
   input += synapse0x2916450();
   input += synapse0x2916490();
   input += synapse0x29164d0();
   input += synapse0x2916510();
   input += synapse0x2916550();
   input += synapse0x2916590();
   input += synapse0x29165d0();
   input += synapse0x2916610();
   input += synapse0x2916650();
   input += synapse0x2916690();
   input += synapse0x29166d0();
   input += synapse0x2916160();
   input += synapse0x29161a0();
   input += synapse0x2916820();
   input += synapse0x2916860();
   input += synapse0x29168a0();
   input += synapse0x29168e0();
   input += synapse0x2916920();
   input += synapse0x2916960();
   input += synapse0x29169a0();
   input += synapse0x29169e0();
   input += synapse0x2916a20();
   input += synapse0x2916a60();
   input += synapse0x2916aa0();
   input += synapse0x2916ae0();
   input += synapse0x2916b20();
   input += synapse0x2916b60();
   input += synapse0x2916710();
   input += synapse0x2916750();
   input += synapse0x2916790();
   input += synapse0x29167d0();
   input += synapse0x2916db0();
   input += synapse0x2916df0();
   input += synapse0x2916e30();
   input += synapse0x2916e70();
   input += synapse0x2916eb0();
   input += synapse0x2916ef0();
   input += synapse0x2916f30();
   input += synapse0x2916f70();
   input += synapse0x2916fb0();
   input += synapse0x2916ff0();
   input += synapse0x2917030();
   input += synapse0x2917070();
   input += synapse0x29170b0();
   input += synapse0x29170f0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x2915fd0() {
   double input = input0x2915fd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x2917130() {
   double input = 4.19907;
   input += synapse0x2917350();
   input += synapse0x2917390();
   input += synapse0x29173d0();
   input += synapse0x2917410();
   input += synapse0x2917450();
   return input;
}

double NNfunction_sb_uLcR::neuron0x2917130() {
   double input = input0x2917130();
   return (input * 1)+0;
}

double NNfunction_sb_uLcR::synapse0x28e7610() {
   return (neuron0x28e2210()*0.170272);
}

double NNfunction_sb_uLcR::synapse0x28e7650() {
   return (neuron0x28e24c0()*0.151438);
}

double NNfunction_sb_uLcR::synapse0x28e7690() {
   return (neuron0x28e2800()*-0.0782462);
}

double NNfunction_sb_uLcR::synapse0x28e76d0() {
   return (neuron0x28e2b40()*0.204074);
}

double NNfunction_sb_uLcR::synapse0x28e7710() {
   return (neuron0x28e2e80()*-0.0688147);
}

double NNfunction_sb_uLcR::synapse0x28e7750() {
   return (neuron0x28e31c0()*0.691043);
}

double NNfunction_sb_uLcR::synapse0x28e7790() {
   return (neuron0x28e3500()*-0.165687);
}

double NNfunction_sb_uLcR::synapse0x28e77d0() {
   return (neuron0x28e3840()*0.0556086);
}

double NNfunction_sb_uLcR::synapse0x28e7810() {
   return (neuron0x28e3b80()*-0.000212816);
}

double NNfunction_sb_uLcR::synapse0x28e7850() {
   return (neuron0x28e3ec0()*-0.258201);
}

double NNfunction_sb_uLcR::synapse0x28e7890() {
   return (neuron0x28e4200()*-0.346926);
}

double NNfunction_sb_uLcR::synapse0x28e78d0() {
   return (neuron0x28e4540()*0.499047);
}

double NNfunction_sb_uLcR::synapse0x28e7910() {
   return (neuron0x28e4880()*0.127139);
}

double NNfunction_sb_uLcR::synapse0x28e7950() {
   return (neuron0x28e4bc0()*0.120737);
}

double NNfunction_sb_uLcR::synapse0x28e7990() {
   return (neuron0x28e4f00()*0.0983218);
}

double NNfunction_sb_uLcR::synapse0x28e79d0() {
   return (neuron0x28e5240()*1.19732);
}

double NNfunction_sb_uLcR::synapse0x28e7460() {
   return (neuron0x28e5580()*0.130368);
}

double NNfunction_sb_uLcR::synapse0x28e74a0() {
   return (neuron0x28e5ae0()*0.310962);
}

double NNfunction_sb_uLcR::synapse0x269e380() {
   return (neuron0x28e5e20()*-0.0663114);
}

double NNfunction_sb_uLcR::synapse0x269e3c0() {
   return (neuron0x28e6160()*0.274359);
}

double NNfunction_sb_uLcR::synapse0x28e7a10() {
   return (neuron0x28e64a0()*0.0926674);
}

double NNfunction_sb_uLcR::synapse0x28e7a50() {
   return (neuron0x28e67e0()*-0.147472);
}

double NNfunction_sb_uLcR::synapse0x28e7a90() {
   return (neuron0x28e6b20()*-0.260937);
}

double NNfunction_sb_uLcR::synapse0x28e7ad0() {
   return (neuron0x28e6e60()*-0.134897);
}

double NNfunction_sb_uLcR::synapse0x28e7e50() {
   return (neuron0x28e2210()*-0.045562);
}

double NNfunction_sb_uLcR::synapse0x28e7e90() {
   return (neuron0x28e24c0()*0.230637);
}

double NNfunction_sb_uLcR::synapse0x28e7ed0() {
   return (neuron0x28e2800()*0.202573);
}

double NNfunction_sb_uLcR::synapse0x28e7f10() {
   return (neuron0x28e2b40()*-0.654263);
}

double NNfunction_sb_uLcR::synapse0x28e7f50() {
   return (neuron0x28e2e80()*0.352663);
}

double NNfunction_sb_uLcR::synapse0x28e7f90() {
   return (neuron0x28e31c0()*-0.382535);
}

double NNfunction_sb_uLcR::synapse0x28e7fd0() {
   return (neuron0x28e3500()*0.556377);
}

double NNfunction_sb_uLcR::synapse0x28e8010() {
   return (neuron0x28e3840()*-0.00549984);
}

double NNfunction_sb_uLcR::synapse0x28e8050() {
   return (neuron0x28e3b80()*0.509103);
}

double NNfunction_sb_uLcR::synapse0x269e1d0() {
   return (neuron0x28e3ec0()*0.0532403);
}

double NNfunction_sb_uLcR::synapse0x269e210() {
   return (neuron0x28e4200()*-0.133064);
}

double NNfunction_sb_uLcR::synapse0x269e250() {
   return (neuron0x28e4540()*-0.1547);
}

double NNfunction_sb_uLcR::synapse0x269e290() {
   return (neuron0x28e4880()*0.00439281);
}

double NNfunction_sb_uLcR::synapse0x28e82a0() {
   return (neuron0x28e4bc0()*-0.0775382);
}

double NNfunction_sb_uLcR::synapse0x28e82e0() {
   return (neuron0x28e4f00()*-0.666321);
}

double NNfunction_sb_uLcR::synapse0x28e8320() {
   return (neuron0x28e5240()*-0.552666);
}

double NNfunction_sb_uLcR::synapse0x28e7ca0() {
   return (neuron0x28e5580()*0.638701);
}

double NNfunction_sb_uLcR::synapse0x28e7ce0() {
   return (neuron0x28e5ae0()*-0.409319);
}

double NNfunction_sb_uLcR::synapse0x28e8470() {
   return (neuron0x28e5e20()*0.146059);
}

double NNfunction_sb_uLcR::synapse0x28e84b0() {
   return (neuron0x28e6160()*0.142557);
}

double NNfunction_sb_uLcR::synapse0x28e84f0() {
   return (neuron0x28e64a0()*-0.613817);
}

double NNfunction_sb_uLcR::synapse0x28e8530() {
   return (neuron0x28e67e0()*0.505254);
}

double NNfunction_sb_uLcR::synapse0x28e8570() {
   return (neuron0x28e6b20()*0.654065);
}

double NNfunction_sb_uLcR::synapse0x28e85b0() {
   return (neuron0x28e6e60()*0.088207);
}

double NNfunction_sb_uLcR::synapse0x28e8930() {
   return (neuron0x28e2210()*-0.182417);
}

double NNfunction_sb_uLcR::synapse0x28e8970() {
   return (neuron0x28e24c0()*0.238816);
}

double NNfunction_sb_uLcR::synapse0x28e89b0() {
   return (neuron0x28e2800()*0.37322);
}

double NNfunction_sb_uLcR::synapse0x28e89f0() {
   return (neuron0x28e2b40()*0.145423);
}

double NNfunction_sb_uLcR::synapse0x28e8a30() {
   return (neuron0x28e2e80()*-0.544196);
}

double NNfunction_sb_uLcR::synapse0x28e8a70() {
   return (neuron0x28e31c0()*-0.409003);
}

double NNfunction_sb_uLcR::synapse0x28e8ab0() {
   return (neuron0x28e3500()*-0.363432);
}

double NNfunction_sb_uLcR::synapse0x28e8af0() {
   return (neuron0x28e3840()*-0.416142);
}

double NNfunction_sb_uLcR::synapse0x28e8b30() {
   return (neuron0x28e3b80()*0.0258193);
}

double NNfunction_sb_uLcR::synapse0x28e8b70() {
   return (neuron0x28e3ec0()*-0.0384552);
}

double NNfunction_sb_uLcR::synapse0x28e8bb0() {
   return (neuron0x28e4200()*0.165748);
}

double NNfunction_sb_uLcR::synapse0x28e8bf0() {
   return (neuron0x28e4540()*0.481026);
}

double NNfunction_sb_uLcR::synapse0x28e8c30() {
   return (neuron0x28e4880()*-0.0457376);
}

double NNfunction_sb_uLcR::synapse0x28e8c70() {
   return (neuron0x28e4bc0()*0.175386);
}

double NNfunction_sb_uLcR::synapse0x28e8cb0() {
   return (neuron0x28e4f00()*-0.249191);
}

double NNfunction_sb_uLcR::synapse0x28e8cf0() {
   return (neuron0x28e5240()*0.500094);
}

double NNfunction_sb_uLcR::synapse0x28e8780() {
   return (neuron0x28e5580()*0.13437);
}

double NNfunction_sb_uLcR::synapse0x28e87c0() {
   return (neuron0x28e5ae0()*0.0612397);
}

double NNfunction_sb_uLcR::synapse0x26ac280() {
   return (neuron0x28e5e20()*-0.15321);
}

double NNfunction_sb_uLcR::synapse0x26ac2c0() {
   return (neuron0x28e6160()*0.0461534);
}

double NNfunction_sb_uLcR::synapse0x28eabe0() {
   return (neuron0x28e64a0()*0.00377372);
}

double NNfunction_sb_uLcR::synapse0x28eac20() {
   return (neuron0x28e67e0()*0.091015);
}

double NNfunction_sb_uLcR::synapse0x28e1f10() {
   return (neuron0x28e6b20()*-0.342014);
}

double NNfunction_sb_uLcR::synapse0x28e1f50() {
   return (neuron0x28e6e60()*-0.0803242);
}

double NNfunction_sb_uLcR::synapse0x26acb70() {
   return (neuron0x28e2210()*-0.0372876);
}

double NNfunction_sb_uLcR::synapse0x28e81b0() {
   return (neuron0x28e24c0()*-0.0147197);
}

double NNfunction_sb_uLcR::synapse0x28e81f0() {
   return (neuron0x28e2800()*0.0168522);
}

double NNfunction_sb_uLcR::synapse0x28e8230() {
   return (neuron0x28e2b40()*-1.32267);
}

double NNfunction_sb_uLcR::synapse0x28e2020() {
   return (neuron0x28e2e80()*-0.00508034);
}

double NNfunction_sb_uLcR::synapse0x28e8e40() {
   return (neuron0x28e31c0()*0.0120484);
}

double NNfunction_sb_uLcR::synapse0x28e8e80() {
   return (neuron0x28e3500()*-0.0489372);
}

double NNfunction_sb_uLcR::synapse0x28e8ec0() {
   return (neuron0x28e3840()*-0.0445816);
}

double NNfunction_sb_uLcR::synapse0x28e8f00() {
   return (neuron0x28e3b80()*0.00417289);
}

double NNfunction_sb_uLcR::synapse0x28e8f40() {
   return (neuron0x28e3ec0()*0.0643177);
}

double NNfunction_sb_uLcR::synapse0x28e8f80() {
   return (neuron0x28e4200()*0.0145353);
}

double NNfunction_sb_uLcR::synapse0x28e8fc0() {
   return (neuron0x28e4540()*-0.440858);
}

double NNfunction_sb_uLcR::synapse0x28e9000() {
   return (neuron0x28e4880()*0.0784811);
}

double NNfunction_sb_uLcR::synapse0x28e9040() {
   return (neuron0x28e4bc0()*-0.00577814);
}

double NNfunction_sb_uLcR::synapse0x28e9080() {
   return (neuron0x28e4f00()*0.019911);
}

double NNfunction_sb_uLcR::synapse0x28e90c0() {
   return (neuron0x28e5240()*-0.415825);
}

double NNfunction_sb_uLcR::synapse0x28e1f90() {
   return (neuron0x28e5580()*0.0125384);
}

double NNfunction_sb_uLcR::synapse0x28e1fd0() {
   return (neuron0x28e5ae0()*0.0126992);
}

double NNfunction_sb_uLcR::synapse0x28e9210() {
   return (neuron0x28e5e20()*0.0233851);
}

double NNfunction_sb_uLcR::synapse0x28e9250() {
   return (neuron0x28e6160()*0.00641651);
}

double NNfunction_sb_uLcR::synapse0x28e9290() {
   return (neuron0x28e64a0()*-0.027405);
}

double NNfunction_sb_uLcR::synapse0x28e92d0() {
   return (neuron0x28e67e0()*-0.0404617);
}

double NNfunction_sb_uLcR::synapse0x28e9310() {
   return (neuron0x28e6b20()*0.02678);
}

double NNfunction_sb_uLcR::synapse0x28e9350() {
   return (neuron0x28e6e60()*-0.0171209);
}

double NNfunction_sb_uLcR::synapse0x28e96d0() {
   return (neuron0x28e2210()*0.11413);
}

double NNfunction_sb_uLcR::synapse0x28e9710() {
   return (neuron0x28e24c0()*-0.0511059);
}

double NNfunction_sb_uLcR::synapse0x28e9750() {
   return (neuron0x28e2800()*-0.0958127);
}

double NNfunction_sb_uLcR::synapse0x28e9790() {
   return (neuron0x28e2b40()*0.0313351);
}

double NNfunction_sb_uLcR::synapse0x28e97d0() {
   return (neuron0x28e2e80()*-0.215985);
}

double NNfunction_sb_uLcR::synapse0x28e9810() {
   return (neuron0x28e31c0()*0.109354);
}

double NNfunction_sb_uLcR::synapse0x28e9850() {
   return (neuron0x28e3500()*0.0240331);
}

double NNfunction_sb_uLcR::synapse0x28e9890() {
   return (neuron0x28e3840()*0.206303);
}

double NNfunction_sb_uLcR::synapse0x28e98d0() {
   return (neuron0x28e3b80()*-0.0146785);
}

double NNfunction_sb_uLcR::synapse0x28e9910() {
   return (neuron0x28e3ec0()*0.0514224);
}

double NNfunction_sb_uLcR::synapse0x28e9950() {
   return (neuron0x28e4200()*-0.0088016);
}

double NNfunction_sb_uLcR::synapse0x28e9990() {
   return (neuron0x28e4540()*0.0350235);
}

double NNfunction_sb_uLcR::synapse0x28e99d0() {
   return (neuron0x28e4880()*-0.0223756);
}

double NNfunction_sb_uLcR::synapse0x28e9a10() {
   return (neuron0x28e4bc0()*0.157785);
}

double NNfunction_sb_uLcR::synapse0x28e9a50() {
   return (neuron0x28e4f00()*-0.144052);
}

double NNfunction_sb_uLcR::synapse0x28e9a90() {
   return (neuron0x28e5240()*0.681711);
}

double NNfunction_sb_uLcR::synapse0x28e9be0() {
   return (neuron0x28e5580()*-0.0258034);
}

double NNfunction_sb_uLcR::synapse0x28e9520() {
   return (neuron0x28e5ae0()*-0.0214078);
}

double NNfunction_sb_uLcR::synapse0x28e9560() {
   return (neuron0x28e5e20()*-0.00815646);
}

double NNfunction_sb_uLcR::synapse0x28eacf0() {
   return (neuron0x28e6160()*0.0315497);
}

double NNfunction_sb_uLcR::synapse0x28ead30() {
   return (neuron0x28e64a0()*-0.0139874);
}

double NNfunction_sb_uLcR::synapse0x28ead70() {
   return (neuron0x28e67e0()*0.00689193);
}

double NNfunction_sb_uLcR::synapse0x28eadb0() {
   return (neuron0x28e6b20()*-0.0423399);
}

double NNfunction_sb_uLcR::synapse0x28eadf0() {
   return (neuron0x28e6e60()*-0.0234024);
}

double NNfunction_sb_uLcR::synapse0x28eb170() {
   return (neuron0x28e2210()*0.00442492);
}

double NNfunction_sb_uLcR::synapse0x28eb1b0() {
   return (neuron0x28e24c0()*-0.00488652);
}

double NNfunction_sb_uLcR::synapse0x28eb1f0() {
   return (neuron0x28e2800()*0.0421945);
}

double NNfunction_sb_uLcR::synapse0x28eb230() {
   return (neuron0x28e2b40()*0.117351);
}

double NNfunction_sb_uLcR::synapse0x28eb270() {
   return (neuron0x28e2e80()*-0.0385034);
}

double NNfunction_sb_uLcR::synapse0x28eb2b0() {
   return (neuron0x28e31c0()*-0.00560355);
}

double NNfunction_sb_uLcR::synapse0x28eb2f0() {
   return (neuron0x28e3500()*-0.0271719);
}

double NNfunction_sb_uLcR::synapse0x28eb330() {
   return (neuron0x28e3840()*-0.00612235);
}

double NNfunction_sb_uLcR::synapse0x28eb370() {
   return (neuron0x28e3b80()*0.00709819);
}

double NNfunction_sb_uLcR::synapse0x26ac5d0() {
   return (neuron0x28e3ec0()*0.0139188);
}

double NNfunction_sb_uLcR::synapse0x26ac610() {
   return (neuron0x28e4200()*0.0271579);
}

double NNfunction_sb_uLcR::synapse0x26ac650() {
   return (neuron0x28e4540()*-0.717075);
}

double NNfunction_sb_uLcR::synapse0x26ac690() {
   return (neuron0x28e4880()*0.0595522);
}

double NNfunction_sb_uLcR::synapse0x26ac6d0() {
   return (neuron0x28e4bc0()*-0.00661103);
}

double NNfunction_sb_uLcR::synapse0x26ac710() {
   return (neuron0x28e4f00()*0.0197699);
}

double NNfunction_sb_uLcR::synapse0x26ac750() {
   return (neuron0x28e5240()*-0.464221);
}

double NNfunction_sb_uLcR::synapse0x28eafc0() {
   return (neuron0x28e5580()*-0.0208124);
}

double NNfunction_sb_uLcR::synapse0x28eb000() {
   return (neuron0x28e5ae0()*0.00686784);
}

double NNfunction_sb_uLcR::synapse0x26ac8a0() {
   return (neuron0x28e5e20()*0.0157914);
}

double NNfunction_sb_uLcR::synapse0x26ac8e0() {
   return (neuron0x28e6160()*0.00166101);
}

double NNfunction_sb_uLcR::synapse0x26ac920() {
   return (neuron0x28e64a0()*-0.0130937);
}

double NNfunction_sb_uLcR::synapse0x26ac960() {
   return (neuron0x28e67e0()*0.0179703);
}

double NNfunction_sb_uLcR::synapse0x26ac9a0() {
   return (neuron0x28e6b20()*-0.00664792);
}

double NNfunction_sb_uLcR::synapse0x28ebbc0() {
   return (neuron0x28e6e60()*0.00617695);
}

double NNfunction_sb_uLcR::synapse0x28ebf40() {
   return (neuron0x28e2210()*-0.344602);
}

double NNfunction_sb_uLcR::synapse0x28ebf80() {
   return (neuron0x28e24c0()*0.578653);
}

double NNfunction_sb_uLcR::synapse0x28ebfc0() {
   return (neuron0x28e2800()*0.0577405);
}

double NNfunction_sb_uLcR::synapse0x28ec000() {
   return (neuron0x28e2b40()*-0.616541);
}

double NNfunction_sb_uLcR::synapse0x28ec040() {
   return (neuron0x28e2e80()*-0.366572);
}

double NNfunction_sb_uLcR::synapse0x28ec080() {
   return (neuron0x28e31c0()*-0.00471947);
}

double NNfunction_sb_uLcR::synapse0x28ec0c0() {
   return (neuron0x28e3500()*-0.592196);
}

double NNfunction_sb_uLcR::synapse0x28ec100() {
   return (neuron0x28e3840()*-0.599413);
}

double NNfunction_sb_uLcR::synapse0x28ec140() {
   return (neuron0x28e3b80()*-0.190646);
}

double NNfunction_sb_uLcR::synapse0x28ec180() {
   return (neuron0x28e3ec0()*-0.182305);
}

double NNfunction_sb_uLcR::synapse0x28ec1c0() {
   return (neuron0x28e4200()*-0.276817);
}

double NNfunction_sb_uLcR::synapse0x28ec200() {
   return (neuron0x28e4540()*0.478971);
}

double NNfunction_sb_uLcR::synapse0x28ec240() {
   return (neuron0x28e4880()*-0.179973);
}

double NNfunction_sb_uLcR::synapse0x28ec280() {
   return (neuron0x28e4bc0()*-0.253377);
}

double NNfunction_sb_uLcR::synapse0x28ec2c0() {
   return (neuron0x28e4f00()*-0.0778312);
}

double NNfunction_sb_uLcR::synapse0x28ec300() {
   return (neuron0x28e5240()*0.444008);
}

double NNfunction_sb_uLcR::synapse0x28ebd90() {
   return (neuron0x28e5580()*0.29572);
}

double NNfunction_sb_uLcR::synapse0x28ebdd0() {
   return (neuron0x28e5ae0()*1.02531);
}

double NNfunction_sb_uLcR::synapse0x28ec450() {
   return (neuron0x28e5e20()*-0.107916);
}

double NNfunction_sb_uLcR::synapse0x28ec490() {
   return (neuron0x28e6160()*0.294162);
}

double NNfunction_sb_uLcR::synapse0x28ec4d0() {
   return (neuron0x28e64a0()*0.139971);
}

double NNfunction_sb_uLcR::synapse0x28ec510() {
   return (neuron0x28e67e0()*0.233657);
}

double NNfunction_sb_uLcR::synapse0x28ec550() {
   return (neuron0x28e6b20()*0.116304);
}

double NNfunction_sb_uLcR::synapse0x28ec590() {
   return (neuron0x28e6e60()*0.817936);
}

double NNfunction_sb_uLcR::synapse0x28ec910() {
   return (neuron0x28e2210()*-0.0608861);
}

double NNfunction_sb_uLcR::synapse0x28ec950() {
   return (neuron0x28e24c0()*0.00545594);
}

double NNfunction_sb_uLcR::synapse0x28ec990() {
   return (neuron0x28e2800()*-0.00347362);
}

double NNfunction_sb_uLcR::synapse0x28ec9d0() {
   return (neuron0x28e2b40()*3.25333);
}

double NNfunction_sb_uLcR::synapse0x28eca10() {
   return (neuron0x28e2e80()*-0.00432448);
}

double NNfunction_sb_uLcR::synapse0x28eca50() {
   return (neuron0x28e31c0()*-0.0707574);
}

double NNfunction_sb_uLcR::synapse0x28eca90() {
   return (neuron0x28e3500()*-0.0337021);
}

double NNfunction_sb_uLcR::synapse0x28ecad0() {
   return (neuron0x28e3840()*0.0154543);
}

double NNfunction_sb_uLcR::synapse0x28ecb10() {
   return (neuron0x28e3b80()*0.00541258);
}

double NNfunction_sb_uLcR::synapse0x28ecb50() {
   return (neuron0x28e3ec0()*0.0461324);
}

double NNfunction_sb_uLcR::synapse0x28ecb90() {
   return (neuron0x28e4200()*0.0480061);
}

double NNfunction_sb_uLcR::synapse0x28ecbd0() {
   return (neuron0x28e4540()*0.0496278);
}

double NNfunction_sb_uLcR::synapse0x28ecc10() {
   return (neuron0x28e4880()*0.0130469);
}

double NNfunction_sb_uLcR::synapse0x28ecc50() {
   return (neuron0x28e4bc0()*-0.0508846);
}

double NNfunction_sb_uLcR::synapse0x28ecc90() {
   return (neuron0x28e4f00()*0.0194053);
}

double NNfunction_sb_uLcR::synapse0x28eccd0() {
   return (neuron0x28e5240()*-1.76275);
}

double NNfunction_sb_uLcR::synapse0x28ec760() {
   return (neuron0x28e5580()*-0.0286306);
}

double NNfunction_sb_uLcR::synapse0x28ec7a0() {
   return (neuron0x28e5ae0()*-0.0102223);
}

double NNfunction_sb_uLcR::synapse0x28ece20() {
   return (neuron0x28e5e20()*0.0285272);
}

double NNfunction_sb_uLcR::synapse0x28ece60() {
   return (neuron0x28e6160()*-0.00345134);
}

double NNfunction_sb_uLcR::synapse0x28ecea0() {
   return (neuron0x28e64a0()*-0.00382553);
}

double NNfunction_sb_uLcR::synapse0x28ecee0() {
   return (neuron0x28e67e0()*0.021015);
}

double NNfunction_sb_uLcR::synapse0x28ecf20() {
   return (neuron0x28e6b20()*-0.0176345);
}

double NNfunction_sb_uLcR::synapse0x28ecf60() {
   return (neuron0x28e6e60()*0.0425958);
}

double NNfunction_sb_uLcR::synapse0x28e59d0() {
   return (neuron0x28e2210()*0.00739772);
}

double NNfunction_sb_uLcR::synapse0x28e5a10() {
   return (neuron0x28e24c0()*0.0164581);
}

double NNfunction_sb_uLcR::synapse0x28e5a50() {
   return (neuron0x28e2800()*-0.0111521);
}

double NNfunction_sb_uLcR::synapse0x28e5a90() {
   return (neuron0x28e2b40()*-0.137074);
}

double NNfunction_sb_uLcR::synapse0x28ed4f0() {
   return (neuron0x28e2e80()*-0.0144453);
}

double NNfunction_sb_uLcR::synapse0x28ed530() {
   return (neuron0x28e31c0()*0.0313773);
}

double NNfunction_sb_uLcR::synapse0x28ed570() {
   return (neuron0x28e3500()*-0.00421577);
}

double NNfunction_sb_uLcR::synapse0x28ed5b0() {
   return (neuron0x28e3840()*0.00998772);
}

double NNfunction_sb_uLcR::synapse0x28ed5f0() {
   return (neuron0x28e3b80()*-0.0057584);
}

double NNfunction_sb_uLcR::synapse0x28ed630() {
   return (neuron0x28e3ec0()*-0.00891629);
}

double NNfunction_sb_uLcR::synapse0x28ed670() {
   return (neuron0x28e4200()*-0.0239355);
}

double NNfunction_sb_uLcR::synapse0x28ed6b0() {
   return (neuron0x28e4540()*1.69953);
}

double NNfunction_sb_uLcR::synapse0x28ed6f0() {
   return (neuron0x28e4880()*0.0102478);
}

double NNfunction_sb_uLcR::synapse0x28ed730() {
   return (neuron0x28e4bc0()*-0.00281318);
}

double NNfunction_sb_uLcR::synapse0x28ed770() {
   return (neuron0x28e4f00()*0.0175509);
}

double NNfunction_sb_uLcR::synapse0x28ed7b0() {
   return (neuron0x28e5240()*-0.22178);
}

double NNfunction_sb_uLcR::synapse0x28ed130() {
   return (neuron0x28e5580()*0.011148);
}

double NNfunction_sb_uLcR::synapse0x28ed170() {
   return (neuron0x28e5ae0()*-0.00472608);
}

double NNfunction_sb_uLcR::synapse0x28ed900() {
   return (neuron0x28e5e20()*0.00424334);
}

double NNfunction_sb_uLcR::synapse0x28ed940() {
   return (neuron0x28e6160()*-0.00528506);
}

double NNfunction_sb_uLcR::synapse0x28ed980() {
   return (neuron0x28e64a0()*0.00419651);
}

double NNfunction_sb_uLcR::synapse0x28ed9c0() {
   return (neuron0x28e67e0()*0.00311481);
}

double NNfunction_sb_uLcR::synapse0x28eda00() {
   return (neuron0x28e6b20()*-0.00308202);
}

double NNfunction_sb_uLcR::synapse0x28eda40() {
   return (neuron0x28e6e60()*0.0314901);
}

double NNfunction_sb_uLcR::synapse0x28eddc0() {
   return (neuron0x28e2210()*-0.354378);
}

double NNfunction_sb_uLcR::synapse0x28ede00() {
   return (neuron0x28e24c0()*0.283605);
}

double NNfunction_sb_uLcR::synapse0x28ede40() {
   return (neuron0x28e2800()*-0.327437);
}

double NNfunction_sb_uLcR::synapse0x28ede80() {
   return (neuron0x28e2b40()*0.509904);
}

double NNfunction_sb_uLcR::synapse0x28edec0() {
   return (neuron0x28e2e80()*-0.515568);
}

double NNfunction_sb_uLcR::synapse0x28edf00() {
   return (neuron0x28e31c0()*-0.671118);
}

double NNfunction_sb_uLcR::synapse0x28edf40() {
   return (neuron0x28e3500()*-0.608974);
}

double NNfunction_sb_uLcR::synapse0x28edf80() {
   return (neuron0x28e3840()*-0.170614);
}

double NNfunction_sb_uLcR::synapse0x28edfc0() {
   return (neuron0x28e3b80()*0.210534);
}

double NNfunction_sb_uLcR::synapse0x28ee000() {
   return (neuron0x28e3ec0()*0.396211);
}

double NNfunction_sb_uLcR::synapse0x28ee040() {
   return (neuron0x28e4200()*-0.224615);
}

double NNfunction_sb_uLcR::synapse0x28ee080() {
   return (neuron0x28e4540()*0.650801);
}

double NNfunction_sb_uLcR::synapse0x28ee0c0() {
   return (neuron0x28e4880()*0.0801403);
}

double NNfunction_sb_uLcR::synapse0x28ee100() {
   return (neuron0x28e4bc0()*-0.0101438);
}

double NNfunction_sb_uLcR::synapse0x28ee140() {
   return (neuron0x28e4f00()*-0.368026);
}

double NNfunction_sb_uLcR::synapse0x28ee180() {
   return (neuron0x28e5240()*-0.149705);
}

double NNfunction_sb_uLcR::synapse0x28edc10() {
   return (neuron0x28e5580()*0.0752026);
}

double NNfunction_sb_uLcR::synapse0x28edc50() {
   return (neuron0x28e5ae0()*0.192128);
}

double NNfunction_sb_uLcR::synapse0x28ee2d0() {
   return (neuron0x28e5e20()*0.0373472);
}

double NNfunction_sb_uLcR::synapse0x28ee310() {
   return (neuron0x28e6160()*0.130668);
}

double NNfunction_sb_uLcR::synapse0x28ee350() {
   return (neuron0x28e64a0()*0.0338314);
}

double NNfunction_sb_uLcR::synapse0x28ee390() {
   return (neuron0x28e67e0()*-0.422);
}

double NNfunction_sb_uLcR::synapse0x28ee3d0() {
   return (neuron0x28e6b20()*0.064016);
}

double NNfunction_sb_uLcR::synapse0x28ee410() {
   return (neuron0x28e6e60()*0.00928922);
}

double NNfunction_sb_uLcR::synapse0x28ee790() {
   return (neuron0x28e2210()*-0.252783);
}

double NNfunction_sb_uLcR::synapse0x28ee7d0() {
   return (neuron0x28e24c0()*-0.286658);
}

double NNfunction_sb_uLcR::synapse0x28ee810() {
   return (neuron0x28e2800()*-0.0220709);
}

double NNfunction_sb_uLcR::synapse0x28ee850() {
   return (neuron0x28e2b40()*-0.601496);
}

double NNfunction_sb_uLcR::synapse0x28ee890() {
   return (neuron0x28e2e80()*0.630596);
}

double NNfunction_sb_uLcR::synapse0x28ee8d0() {
   return (neuron0x28e31c0()*0.118417);
}

double NNfunction_sb_uLcR::synapse0x28ee910() {
   return (neuron0x28e3500()*0.355206);
}

double NNfunction_sb_uLcR::synapse0x28ee950() {
   return (neuron0x28e3840()*0.321589);
}

double NNfunction_sb_uLcR::synapse0x28ee990() {
   return (neuron0x28e3b80()*0.316278);
}

double NNfunction_sb_uLcR::synapse0x28ee9d0() {
   return (neuron0x28e3ec0()*0.0912079);
}

double NNfunction_sb_uLcR::synapse0x28eea10() {
   return (neuron0x28e4200()*-0.603325);
}

double NNfunction_sb_uLcR::synapse0x28eea50() {
   return (neuron0x28e4540()*-0.14272);
}

double NNfunction_sb_uLcR::synapse0x28eea90() {
   return (neuron0x28e4880()*-0.178984);
}

double NNfunction_sb_uLcR::synapse0x28eead0() {
   return (neuron0x28e4bc0()*-0.150877);
}

double NNfunction_sb_uLcR::synapse0x28eeb10() {
   return (neuron0x28e4f00()*-0.272976);
}

double NNfunction_sb_uLcR::synapse0x28eeb50() {
   return (neuron0x28e5240()*1.42921);
}

double NNfunction_sb_uLcR::synapse0x28ee5e0() {
   return (neuron0x28e5580()*0.400125);
}

double NNfunction_sb_uLcR::synapse0x28ee620() {
   return (neuron0x28e5ae0()*0.421325);
}

double NNfunction_sb_uLcR::synapse0x28eb3b0() {
   return (neuron0x28e5e20()*0.0534083);
}

double NNfunction_sb_uLcR::synapse0x28eb3f0() {
   return (neuron0x28e6160()*-0.138394);
}

double NNfunction_sb_uLcR::synapse0x28eb430() {
   return (neuron0x28e64a0()*0.0382455);
}

double NNfunction_sb_uLcR::synapse0x28eb470() {
   return (neuron0x28e67e0()*0.052191);
}

double NNfunction_sb_uLcR::synapse0x28eb4b0() {
   return (neuron0x28e6b20()*0.407043);
}

double NNfunction_sb_uLcR::synapse0x28eb4f0() {
   return (neuron0x28e6e60()*0.260187);
}

double NNfunction_sb_uLcR::synapse0x28eb870() {
   return (neuron0x28e2210()*-0.588862);
}

double NNfunction_sb_uLcR::synapse0x28eb8b0() {
   return (neuron0x28e24c0()*-0.0326503);
}

double NNfunction_sb_uLcR::synapse0x28eb8f0() {
   return (neuron0x28e2800()*0.180074);
}

double NNfunction_sb_uLcR::synapse0x28eb930() {
   return (neuron0x28e2b40()*0.584485);
}

double NNfunction_sb_uLcR::synapse0x28eb970() {
   return (neuron0x28e2e80()*-0.000994983);
}

double NNfunction_sb_uLcR::synapse0x28eb9b0() {
   return (neuron0x28e31c0()*0.161954);
}

double NNfunction_sb_uLcR::synapse0x28eb9f0() {
   return (neuron0x28e3500()*0.251446);
}

double NNfunction_sb_uLcR::synapse0x28eba30() {
   return (neuron0x28e3840()*-0.120953);
}

double NNfunction_sb_uLcR::synapse0x28eba70() {
   return (neuron0x28e3b80()*-0.088074);
}

double NNfunction_sb_uLcR::synapse0x28ebab0() {
   return (neuron0x28e3ec0()*-0.318739);
}

double NNfunction_sb_uLcR::synapse0x28ebaf0() {
   return (neuron0x28e4200()*0.24622);
}

double NNfunction_sb_uLcR::synapse0x28ebb30() {
   return (neuron0x28e4540()*0.438042);
}

double NNfunction_sb_uLcR::synapse0x28ebb70() {
   return (neuron0x28e4880()*-0.40999);
}

double NNfunction_sb_uLcR::synapse0x28efcb0() {
   return (neuron0x28e4bc0()*-0.368757);
}

double NNfunction_sb_uLcR::synapse0x28efcf0() {
   return (neuron0x28e4f00()*-0.172646);
}

double NNfunction_sb_uLcR::synapse0x28efd30() {
   return (neuron0x28e5240()*1.04228);
}

double NNfunction_sb_uLcR::synapse0x28eb6c0() {
   return (neuron0x28e5580()*0.304091);
}

double NNfunction_sb_uLcR::synapse0x28eb700() {
   return (neuron0x28e5ae0()*0.0157007);
}

double NNfunction_sb_uLcR::synapse0x28efe80() {
   return (neuron0x28e5e20()*0.175588);
}

double NNfunction_sb_uLcR::synapse0x28efec0() {
   return (neuron0x28e6160()*0.154681);
}

double NNfunction_sb_uLcR::synapse0x28eff00() {
   return (neuron0x28e64a0()*-0.0339648);
}

double NNfunction_sb_uLcR::synapse0x28eff40() {
   return (neuron0x28e67e0()*-0.345673);
}

double NNfunction_sb_uLcR::synapse0x28eff80() {
   return (neuron0x28e6b20()*0.223042);
}

double NNfunction_sb_uLcR::synapse0x28effc0() {
   return (neuron0x28e6e60()*0.22121);
}

double NNfunction_sb_uLcR::synapse0x28f0340() {
   return (neuron0x28e2210()*0.0144467);
}

double NNfunction_sb_uLcR::synapse0x28f0380() {
   return (neuron0x28e24c0()*-0.00396974);
}

double NNfunction_sb_uLcR::synapse0x28f03c0() {
   return (neuron0x28e2800()*-0.00910708);
}

double NNfunction_sb_uLcR::synapse0x28f0400() {
   return (neuron0x28e2b40()*1.1535);
}

double NNfunction_sb_uLcR::synapse0x28f0440() {
   return (neuron0x28e2e80()*0.0388672);
}

double NNfunction_sb_uLcR::synapse0x28f0480() {
   return (neuron0x28e31c0()*0.0169882);
}

double NNfunction_sb_uLcR::synapse0x28f04c0() {
   return (neuron0x28e3500()*0.0177932);
}

double NNfunction_sb_uLcR::synapse0x28f0500() {
   return (neuron0x28e3840()*0.0373638);
}

double NNfunction_sb_uLcR::synapse0x28f0540() {
   return (neuron0x28e3b80()*-0.0323111);
}

double NNfunction_sb_uLcR::synapse0x28f0580() {
   return (neuron0x28e3ec0()*0.00755604);
}

double NNfunction_sb_uLcR::synapse0x28f05c0() {
   return (neuron0x28e4200()*-0.0387587);
}

double NNfunction_sb_uLcR::synapse0x28f0600() {
   return (neuron0x28e4540()*-0.258713);
}

double NNfunction_sb_uLcR::synapse0x28f0640() {
   return (neuron0x28e4880()*-0.00428507);
}

double NNfunction_sb_uLcR::synapse0x28f0680() {
   return (neuron0x28e4bc0()*-0.0128147);
}

double NNfunction_sb_uLcR::synapse0x28f06c0() {
   return (neuron0x28e4f00()*-0.0136858);
}

double NNfunction_sb_uLcR::synapse0x28f0700() {
   return (neuron0x28e5240()*-0.561463);
}

double NNfunction_sb_uLcR::synapse0x28f0190() {
   return (neuron0x28e5580()*-0.0228894);
}

double NNfunction_sb_uLcR::synapse0x28f01d0() {
   return (neuron0x28e5ae0()*-0.030053);
}

double NNfunction_sb_uLcR::synapse0x28f0850() {
   return (neuron0x28e5e20()*0.00481082);
}

double NNfunction_sb_uLcR::synapse0x28f0890() {
   return (neuron0x28e6160()*0.00941097);
}

double NNfunction_sb_uLcR::synapse0x28f08d0() {
   return (neuron0x28e64a0()*-0.00132279);
}

double NNfunction_sb_uLcR::synapse0x28f0910() {
   return (neuron0x28e67e0()*-0.00419157);
}

double NNfunction_sb_uLcR::synapse0x28f0950() {
   return (neuron0x28e6b20()*-0.0102762);
}

double NNfunction_sb_uLcR::synapse0x28f0990() {
   return (neuron0x28e6e60()*0.00483242);
}

double NNfunction_sb_uLcR::synapse0x28f0d10() {
   return (neuron0x28e2210()*0.35621);
}

double NNfunction_sb_uLcR::synapse0x28f0d50() {
   return (neuron0x28e24c0()*1.21152);
}

double NNfunction_sb_uLcR::synapse0x28f0d90() {
   return (neuron0x28e2800()*-0.0761567);
}

double NNfunction_sb_uLcR::synapse0x28f0dd0() {
   return (neuron0x28e2b40()*1.03067);
}

double NNfunction_sb_uLcR::synapse0x28f0e10() {
   return (neuron0x28e2e80()*-0.00654847);
}

double NNfunction_sb_uLcR::synapse0x28f0e50() {
   return (neuron0x28e31c0()*0.740051);
}

double NNfunction_sb_uLcR::synapse0x28f0e90() {
   return (neuron0x28e3500()*0.29257);
}

double NNfunction_sb_uLcR::synapse0x28f0ed0() {
   return (neuron0x28e3840()*-0.440471);
}

double NNfunction_sb_uLcR::synapse0x28f0f10() {
   return (neuron0x28e3b80()*-0.27549);
}

double NNfunction_sb_uLcR::synapse0x28f0f50() {
   return (neuron0x28e3ec0()*-0.0990799);
}

double NNfunction_sb_uLcR::synapse0x28f0f90() {
   return (neuron0x28e4200()*0.465275);
}

double NNfunction_sb_uLcR::synapse0x28f0fd0() {
   return (neuron0x28e4540()*0.260548);
}

double NNfunction_sb_uLcR::synapse0x28f1010() {
   return (neuron0x28e4880()*0.0951993);
}

double NNfunction_sb_uLcR::synapse0x28f1050() {
   return (neuron0x28e4bc0()*-0.438228);
}

double NNfunction_sb_uLcR::synapse0x28f1090() {
   return (neuron0x28e4f00()*-0.506736);
}

double NNfunction_sb_uLcR::synapse0x28f10d0() {
   return (neuron0x28e5240()*-0.359364);
}

double NNfunction_sb_uLcR::synapse0x28f0b60() {
   return (neuron0x28e5580()*0.097395);
}

double NNfunction_sb_uLcR::synapse0x28f0ba0() {
   return (neuron0x28e5ae0()*0.176907);
}

double NNfunction_sb_uLcR::synapse0x28f1220() {
   return (neuron0x28e5e20()*0.356673);
}

double NNfunction_sb_uLcR::synapse0x28f1260() {
   return (neuron0x28e6160()*0.422045);
}

double NNfunction_sb_uLcR::synapse0x28f12a0() {
   return (neuron0x28e64a0()*0.188621);
}

double NNfunction_sb_uLcR::synapse0x28f12e0() {
   return (neuron0x28e67e0()*-0.295813);
}

double NNfunction_sb_uLcR::synapse0x28f1320() {
   return (neuron0x28e6b20()*0.485478);
}

double NNfunction_sb_uLcR::synapse0x28f1360() {
   return (neuron0x28e6e60()*0.572412);
}

double NNfunction_sb_uLcR::synapse0x28f16e0() {
   return (neuron0x28e2210()*-0.0522741);
}

double NNfunction_sb_uLcR::synapse0x28f1720() {
   return (neuron0x28e24c0()*0.229383);
}

double NNfunction_sb_uLcR::synapse0x28f1760() {
   return (neuron0x28e2800()*0.168769);
}

double NNfunction_sb_uLcR::synapse0x28f17a0() {
   return (neuron0x28e2b40()*-0.235626);
}

double NNfunction_sb_uLcR::synapse0x28f17e0() {
   return (neuron0x28e2e80()*-0.261305);
}

double NNfunction_sb_uLcR::synapse0x28f1820() {
   return (neuron0x28e31c0()*-0.568908);
}

double NNfunction_sb_uLcR::synapse0x28f1860() {
   return (neuron0x28e3500()*-0.0829452);
}

double NNfunction_sb_uLcR::synapse0x28f18a0() {
   return (neuron0x28e3840()*-0.130713);
}

double NNfunction_sb_uLcR::synapse0x28f18e0() {
   return (neuron0x28e3b80()*0.406613);
}

double NNfunction_sb_uLcR::synapse0x28f1920() {
   return (neuron0x28e3ec0()*-0.201678);
}

double NNfunction_sb_uLcR::synapse0x28f1960() {
   return (neuron0x28e4200()*0.00846303);
}

double NNfunction_sb_uLcR::synapse0x28f19a0() {
   return (neuron0x28e4540()*-0.437308);
}

double NNfunction_sb_uLcR::synapse0x28f19e0() {
   return (neuron0x28e4880()*0.323646);
}

double NNfunction_sb_uLcR::synapse0x28f1a20() {
   return (neuron0x28e4bc0()*0.15575);
}

double NNfunction_sb_uLcR::synapse0x28f1a60() {
   return (neuron0x28e4f00()*0.0622046);
}

double NNfunction_sb_uLcR::synapse0x28f1aa0() {
   return (neuron0x28e5240()*-0.928217);
}

double NNfunction_sb_uLcR::synapse0x28f1530() {
   return (neuron0x28e5580()*-0.0963412);
}

double NNfunction_sb_uLcR::synapse0x28f1570() {
   return (neuron0x28e5ae0()*0.0345115);
}

double NNfunction_sb_uLcR::synapse0x28f1bf0() {
   return (neuron0x28e5e20()*0.173577);
}

double NNfunction_sb_uLcR::synapse0x28f1c30() {
   return (neuron0x28e6160()*0.00699374);
}

double NNfunction_sb_uLcR::synapse0x28f1c70() {
   return (neuron0x28e64a0()*-0.330023);
}

double NNfunction_sb_uLcR::synapse0x28f1cb0() {
   return (neuron0x28e67e0()*-0.0402422);
}

double NNfunction_sb_uLcR::synapse0x28f1cf0() {
   return (neuron0x28e6b20()*-0.251789);
}

double NNfunction_sb_uLcR::synapse0x28f1d30() {
   return (neuron0x28e6e60()*0.256515);
}

double NNfunction_sb_uLcR::synapse0x28f20b0() {
   return (neuron0x28e2210()*0.0439649);
}

double NNfunction_sb_uLcR::synapse0x28e23a0() {
   return (neuron0x28e24c0()*0.0541297);
}

double NNfunction_sb_uLcR::synapse0x28e23e0() {
   return (neuron0x28e2800()*0.0336769);
}

double NNfunction_sb_uLcR::synapse0x28e26e0() {
   return (neuron0x28e2b40()*0.1159);
}

double NNfunction_sb_uLcR::synapse0x28e2720() {
   return (neuron0x28e2e80()*0.00517779);
}

double NNfunction_sb_uLcR::synapse0x28e2a20() {
   return (neuron0x28e31c0()*0.0189701);
}

double NNfunction_sb_uLcR::synapse0x28e2a60() {
   return (neuron0x28e3500()*-0.0251786);
}

double NNfunction_sb_uLcR::synapse0x28e2d60() {
   return (neuron0x28e3840()*-0.00204504);
}

double NNfunction_sb_uLcR::synapse0x28e2da0() {
   return (neuron0x28e3b80()*0.00551767);
}

double NNfunction_sb_uLcR::synapse0x28e30a0() {
   return (neuron0x28e3ec0()*0.00896474);
}

double NNfunction_sb_uLcR::synapse0x28e30e0() {
   return (neuron0x28e4200()*-0.0134405);
}

double NNfunction_sb_uLcR::synapse0x28e33e0() {
   return (neuron0x28e4540()*-0.0684582);
}

double NNfunction_sb_uLcR::synapse0x28e3420() {
   return (neuron0x28e4880()*-0.591243);
}

double NNfunction_sb_uLcR::synapse0x28e3720() {
   return (neuron0x28e4bc0()*0.103131);
}

double NNfunction_sb_uLcR::synapse0x28e3760() {
   return (neuron0x28e4f00()*-0.226412);
}

double NNfunction_sb_uLcR::synapse0x28e3a60() {
   return (neuron0x28e5240()*0.0521067);
}

double NNfunction_sb_uLcR::synapse0x28e3aa0() {
   return (neuron0x28e5580()*0.0915705);
}

double NNfunction_sb_uLcR::synapse0x28e3da0() {
   return (neuron0x28e5ae0()*-0.328136);
}

double NNfunction_sb_uLcR::synapse0x28e3de0() {
   return (neuron0x28e5e20()*-0.332676);
}

double NNfunction_sb_uLcR::synapse0x28e40e0() {
   return (neuron0x28e6160()*0.0023373);
}

double NNfunction_sb_uLcR::synapse0x28e4120() {
   return (neuron0x28e64a0()*0.00166841);
}

double NNfunction_sb_uLcR::synapse0x28e4420() {
   return (neuron0x28e67e0()*-0.00596667);
}

double NNfunction_sb_uLcR::synapse0x28e4460() {
   return (neuron0x28e6b20()*0.00133945);
}

double NNfunction_sb_uLcR::synapse0x28e4760() {
   return (neuron0x28e6e60()*0.003488);
}

double NNfunction_sb_uLcR::synapse0x28e47a0() {
   return (neuron0x28e2210()*-0.00856159);
}

double NNfunction_sb_uLcR::synapse0x28e5460() {
   return (neuron0x28e24c0()*0.00341249);
}

double NNfunction_sb_uLcR::synapse0x28e54a0() {
   return (neuron0x28e2800()*-0.00718412);
}

double NNfunction_sb_uLcR::synapse0x28f1f00() {
   return (neuron0x28e2b40()*0.040017);
}

double NNfunction_sb_uLcR::synapse0x28f1f40() {
   return (neuron0x28e2e80()*0.0156889);
}

double NNfunction_sb_uLcR::synapse0x28e57a0() {
   return (neuron0x28e31c0()*-0.0282751);
}

double NNfunction_sb_uLcR::synapse0x28e57e0() {
   return (neuron0x28e3500()*0.00415671);
}

double NNfunction_sb_uLcR::synapse0x28e5d00() {
   return (neuron0x28e3840()*-0.0196992);
}

double NNfunction_sb_uLcR::synapse0x28e5d40() {
   return (neuron0x28e3b80()*0.017721);
}

double NNfunction_sb_uLcR::synapse0x28e6040() {
   return (neuron0x28e3ec0()*0.0013045);
}

double NNfunction_sb_uLcR::synapse0x28e6080() {
   return (neuron0x28e4200()*0.00343828);
}

double NNfunction_sb_uLcR::synapse0x28e6380() {
   return (neuron0x28e4540()*-0.785844);
}

double NNfunction_sb_uLcR::synapse0x28e63c0() {
   return (neuron0x28e4880()*-0.00383621);
}

double NNfunction_sb_uLcR::synapse0x28e66c0() {
   return (neuron0x28e4bc0()*0.000705655);
}

double NNfunction_sb_uLcR::synapse0x28e6700() {
   return (neuron0x28e4f00()*0.00191152);
}

double NNfunction_sb_uLcR::synapse0x28e6a00() {
   return (neuron0x28e5240()*0.587385);
}

double NNfunction_sb_uLcR::synapse0x28e6a40() {
   return (neuron0x28e5580()*0.000565413);
}

double NNfunction_sb_uLcR::synapse0x28e6d40() {
   return (neuron0x28e5ae0()*0.0176536);
}

double NNfunction_sb_uLcR::synapse0x28e6d80() {
   return (neuron0x28e5e20()*0.00212574);
}

double NNfunction_sb_uLcR::synapse0x28e7080() {
   return (neuron0x28e6160()*0.0128781);
}

double NNfunction_sb_uLcR::synapse0x28e70c0() {
   return (neuron0x28e64a0()*-0.00512961);
}

double NNfunction_sb_uLcR::synapse0x28e4aa0() {
   return (neuron0x28e67e0()*-0.00513602);
}

double NNfunction_sb_uLcR::synapse0x28e4ae0() {
   return (neuron0x28e6b20()*-0.000672134);
}

double NNfunction_sb_uLcR::synapse0x28f3e20() {
   return (neuron0x28e6e60()*-0.00750551);
}

double NNfunction_sb_uLcR::synapse0x28f41a0() {
   return (neuron0x28e2210()*0.23042);
}

double NNfunction_sb_uLcR::synapse0x28f41e0() {
   return (neuron0x28e24c0()*-0.176417);
}

double NNfunction_sb_uLcR::synapse0x28f4220() {
   return (neuron0x28e2800()*0.276053);
}

double NNfunction_sb_uLcR::synapse0x28f4260() {
   return (neuron0x28e2b40()*0.969123);
}

double NNfunction_sb_uLcR::synapse0x28f42a0() {
   return (neuron0x28e2e80()*-0.127605);
}

double NNfunction_sb_uLcR::synapse0x28f42e0() {
   return (neuron0x28e31c0()*-0.096605);
}

double NNfunction_sb_uLcR::synapse0x28f4320() {
   return (neuron0x28e3500()*0.0692274);
}

double NNfunction_sb_uLcR::synapse0x28f4360() {
   return (neuron0x28e3840()*-0.159313);
}

double NNfunction_sb_uLcR::synapse0x28f43a0() {
   return (neuron0x28e3b80()*0.115842);
}

double NNfunction_sb_uLcR::synapse0x28f43e0() {
   return (neuron0x28e3ec0()*-0.147005);
}

double NNfunction_sb_uLcR::synapse0x28f4420() {
   return (neuron0x28e4200()*0.119546);
}

double NNfunction_sb_uLcR::synapse0x28f4460() {
   return (neuron0x28e4540()*-0.0866074);
}

double NNfunction_sb_uLcR::synapse0x28f44a0() {
   return (neuron0x28e4880()*-0.0467006);
}

double NNfunction_sb_uLcR::synapse0x28f44e0() {
   return (neuron0x28e4bc0()*0.329078);
}

double NNfunction_sb_uLcR::synapse0x28f4520() {
   return (neuron0x28e4f00()*-0.000809081);
}

double NNfunction_sb_uLcR::synapse0x28f4560() {
   return (neuron0x28e5240()*-0.240164);
}

double NNfunction_sb_uLcR::synapse0x28f3ff0() {
   return (neuron0x28e5580()*0.0403521);
}

double NNfunction_sb_uLcR::synapse0x28f4030() {
   return (neuron0x28e5ae0()*-0.0693857);
}

double NNfunction_sb_uLcR::synapse0x28f46b0() {
   return (neuron0x28e5e20()*-0.0251674);
}

double NNfunction_sb_uLcR::synapse0x28f46f0() {
   return (neuron0x28e6160()*-0.402041);
}

double NNfunction_sb_uLcR::synapse0x28f4730() {
   return (neuron0x28e64a0()*0.00950197);
}

double NNfunction_sb_uLcR::synapse0x28f4770() {
   return (neuron0x28e67e0()*-0.0396898);
}

double NNfunction_sb_uLcR::synapse0x28f47b0() {
   return (neuron0x28e6b20()*0.0524698);
}

double NNfunction_sb_uLcR::synapse0x28f47f0() {
   return (neuron0x28e6e60()*0.0629186);
}

double NNfunction_sb_uLcR::synapse0x28f4b70() {
   return (neuron0x28e2210()*-0.0995901);
}

double NNfunction_sb_uLcR::synapse0x28f4bb0() {
   return (neuron0x28e24c0()*0.134631);
}

double NNfunction_sb_uLcR::synapse0x28f4bf0() {
   return (neuron0x28e2800()*-0.715781);
}

double NNfunction_sb_uLcR::synapse0x28f4c30() {
   return (neuron0x28e2b40()*0.475244);
}

double NNfunction_sb_uLcR::synapse0x28f4c70() {
   return (neuron0x28e2e80()*-0.27362);
}

double NNfunction_sb_uLcR::synapse0x28f4cb0() {
   return (neuron0x28e31c0()*-0.00567889);
}

double NNfunction_sb_uLcR::synapse0x28f4cf0() {
   return (neuron0x28e3500()*-0.144943);
}

double NNfunction_sb_uLcR::synapse0x28f4d30() {
   return (neuron0x28e3840()*0.183937);
}

double NNfunction_sb_uLcR::synapse0x28f4d70() {
   return (neuron0x28e3b80()*-0.0858776);
}

double NNfunction_sb_uLcR::synapse0x28f4db0() {
   return (neuron0x28e3ec0()*0.489348);
}

double NNfunction_sb_uLcR::synapse0x28f4df0() {
   return (neuron0x28e4200()*-0.277593);
}

double NNfunction_sb_uLcR::synapse0x28f4e30() {
   return (neuron0x28e4540()*-0.391214);
}

double NNfunction_sb_uLcR::synapse0x28f4e70() {
   return (neuron0x28e4880()*-0.795699);
}

double NNfunction_sb_uLcR::synapse0x28f4eb0() {
   return (neuron0x28e4bc0()*0.788909);
}

double NNfunction_sb_uLcR::synapse0x28f4ef0() {
   return (neuron0x28e4f00()*-0.598945);
}

double NNfunction_sb_uLcR::synapse0x28f4f30() {
   return (neuron0x28e5240()*-0.456471);
}

double NNfunction_sb_uLcR::synapse0x28f49c0() {
   return (neuron0x28e5580()*0.132814);
}

double NNfunction_sb_uLcR::synapse0x28f4a00() {
   return (neuron0x28e5ae0()*0.232442);
}

double NNfunction_sb_uLcR::synapse0x28f5080() {
   return (neuron0x28e5e20()*-0.176321);
}

double NNfunction_sb_uLcR::synapse0x28f50c0() {
   return (neuron0x28e6160()*-0.549638);
}

double NNfunction_sb_uLcR::synapse0x28f5100() {
   return (neuron0x28e64a0()*-0.300818);
}

double NNfunction_sb_uLcR::synapse0x28f5140() {
   return (neuron0x28e67e0()*0.225243);
}

double NNfunction_sb_uLcR::synapse0x28f5180() {
   return (neuron0x28e6b20()*0.25866);
}

double NNfunction_sb_uLcR::synapse0x28f51c0() {
   return (neuron0x28e6e60()*0.206603);
}

double NNfunction_sb_uLcR::synapse0x28f5540() {
   return (neuron0x28e2210()*0.796782);
}

double NNfunction_sb_uLcR::synapse0x28f5580() {
   return (neuron0x28e24c0()*0.336843);
}

double NNfunction_sb_uLcR::synapse0x28f55c0() {
   return (neuron0x28e2800()*0.040408);
}

double NNfunction_sb_uLcR::synapse0x28f5600() {
   return (neuron0x28e2b40()*-0.133977);
}

double NNfunction_sb_uLcR::synapse0x28f5640() {
   return (neuron0x28e2e80()*-0.228813);
}

double NNfunction_sb_uLcR::synapse0x28f5680() {
   return (neuron0x28e31c0()*0.0105316);
}

double NNfunction_sb_uLcR::synapse0x28f56c0() {
   return (neuron0x28e3500()*-0.342482);
}

double NNfunction_sb_uLcR::synapse0x28f5700() {
   return (neuron0x28e3840()*0.280167);
}

double NNfunction_sb_uLcR::synapse0x28f5740() {
   return (neuron0x28e3b80()*-0.66967);
}

double NNfunction_sb_uLcR::synapse0x28f5780() {
   return (neuron0x28e3ec0()*-0.160565);
}

double NNfunction_sb_uLcR::synapse0x28f57c0() {
   return (neuron0x28e4200()*0.376057);
}

double NNfunction_sb_uLcR::synapse0x28f5800() {
   return (neuron0x28e4540()*1.25356);
}

double NNfunction_sb_uLcR::synapse0x28f5840() {
   return (neuron0x28e4880()*-0.0420725);
}

double NNfunction_sb_uLcR::synapse0x28f5880() {
   return (neuron0x28e4bc0()*0.322923);
}

double NNfunction_sb_uLcR::synapse0x28f58c0() {
   return (neuron0x28e4f00()*0.0941885);
}

double NNfunction_sb_uLcR::synapse0x28f5900() {
   return (neuron0x28e5240()*-0.111773);
}

double NNfunction_sb_uLcR::synapse0x28f5390() {
   return (neuron0x28e5580()*-0.420862);
}

double NNfunction_sb_uLcR::synapse0x28f53d0() {
   return (neuron0x28e5ae0()*-0.377666);
}

double NNfunction_sb_uLcR::synapse0x28f5a50() {
   return (neuron0x28e5e20()*-0.20172);
}

double NNfunction_sb_uLcR::synapse0x28f5a90() {
   return (neuron0x28e6160()*0.0111184);
}

double NNfunction_sb_uLcR::synapse0x28f5ad0() {
   return (neuron0x28e64a0()*-0.100904);
}

double NNfunction_sb_uLcR::synapse0x28f5b10() {
   return (neuron0x28e67e0()*-0.267911);
}

double NNfunction_sb_uLcR::synapse0x28f5b50() {
   return (neuron0x28e6b20()*-0.353369);
}

double NNfunction_sb_uLcR::synapse0x28f5b90() {
   return (neuron0x28e6e60()*0.10012);
}

double NNfunction_sb_uLcR::synapse0x28f5f10() {
   return (neuron0x28e2210()*-0.0454331);
}

double NNfunction_sb_uLcR::synapse0x28f5f50() {
   return (neuron0x28e24c0()*0.150592);
}

double NNfunction_sb_uLcR::synapse0x28f5f90() {
   return (neuron0x28e2800()*0.129519);
}

double NNfunction_sb_uLcR::synapse0x28f5fd0() {
   return (neuron0x28e2b40()*1.23294);
}

double NNfunction_sb_uLcR::synapse0x28f6010() {
   return (neuron0x28e2e80()*-0.070738);
}

double NNfunction_sb_uLcR::synapse0x28f6050() {
   return (neuron0x28e31c0()*0.00833579);
}

double NNfunction_sb_uLcR::synapse0x28f6090() {
   return (neuron0x28e3500()*-0.140795);
}

double NNfunction_sb_uLcR::synapse0x28f60d0() {
   return (neuron0x28e3840()*-0.00537959);
}

double NNfunction_sb_uLcR::synapse0x28f6110() {
   return (neuron0x28e3b80()*-0.00719385);
}

double NNfunction_sb_uLcR::synapse0x28f6150() {
   return (neuron0x28e3ec0()*-0.0157608);
}

double NNfunction_sb_uLcR::synapse0x28f6190() {
   return (neuron0x28e4200()*0.0704496);
}

double NNfunction_sb_uLcR::synapse0x28f61d0() {
   return (neuron0x28e4540()*0.215902);
}

double NNfunction_sb_uLcR::synapse0x28f6210() {
   return (neuron0x28e4880()*0.14709);
}

double NNfunction_sb_uLcR::synapse0x28f6250() {
   return (neuron0x28e4bc0()*0.000195911);
}

double NNfunction_sb_uLcR::synapse0x28f6290() {
   return (neuron0x28e4f00()*0.0869951);
}

double NNfunction_sb_uLcR::synapse0x28f62d0() {
   return (neuron0x28e5240()*0.179924);
}

double NNfunction_sb_uLcR::synapse0x28f5d60() {
   return (neuron0x28e5580()*-0.0168896);
}

double NNfunction_sb_uLcR::synapse0x28f5da0() {
   return (neuron0x28e5ae0()*0.231105);
}

double NNfunction_sb_uLcR::synapse0x28f6420() {
   return (neuron0x28e5e20()*-0.221956);
}

double NNfunction_sb_uLcR::synapse0x28f6460() {
   return (neuron0x28e6160()*0.0586839);
}

double NNfunction_sb_uLcR::synapse0x28f64a0() {
   return (neuron0x28e64a0()*-0.0423345);
}

double NNfunction_sb_uLcR::synapse0x28f64e0() {
   return (neuron0x28e67e0()*0.0871479);
}

double NNfunction_sb_uLcR::synapse0x28f6520() {
   return (neuron0x28e6b20()*-0.0029755);
}

double NNfunction_sb_uLcR::synapse0x28f6560() {
   return (neuron0x28e6e60()*0.0320668);
}

double NNfunction_sb_uLcR::synapse0x28f68e0() {
   return (neuron0x28e2210()*0.309922);
}

double NNfunction_sb_uLcR::synapse0x28f6920() {
   return (neuron0x28e24c0()*0.753846);
}

double NNfunction_sb_uLcR::synapse0x28f6960() {
   return (neuron0x28e2800()*0.146478);
}

double NNfunction_sb_uLcR::synapse0x28f69a0() {
   return (neuron0x28e2b40()*-0.471666);
}

double NNfunction_sb_uLcR::synapse0x28f69e0() {
   return (neuron0x28e2e80()*0.215685);
}

double NNfunction_sb_uLcR::synapse0x28f6a20() {
   return (neuron0x28e31c0()*0.637427);
}

double NNfunction_sb_uLcR::synapse0x28f6a60() {
   return (neuron0x28e3500()*0.373134);
}

double NNfunction_sb_uLcR::synapse0x28f6aa0() {
   return (neuron0x28e3840()*0.0899352);
}

double NNfunction_sb_uLcR::synapse0x28f6ae0() {
   return (neuron0x28e3b80()*0.457364);
}

double NNfunction_sb_uLcR::synapse0x28eeca0() {
   return (neuron0x28e3ec0()*0.652376);
}

double NNfunction_sb_uLcR::synapse0x28eece0() {
   return (neuron0x28e4200()*0.411397);
}

double NNfunction_sb_uLcR::synapse0x28eed20() {
   return (neuron0x28e4540()*0.701484);
}

double NNfunction_sb_uLcR::synapse0x28eed60() {
   return (neuron0x28e4880()*-0.104833);
}

double NNfunction_sb_uLcR::synapse0x28eeda0() {
   return (neuron0x28e4bc0()*-0.463954);
}

double NNfunction_sb_uLcR::synapse0x28eede0() {
   return (neuron0x28e4f00()*-0.271615);
}

double NNfunction_sb_uLcR::synapse0x28eee20() {
   return (neuron0x28e5240()*-0.0392926);
}

double NNfunction_sb_uLcR::synapse0x28f6730() {
   return (neuron0x28e5580()*0.621975);
}

double NNfunction_sb_uLcR::synapse0x28f6770() {
   return (neuron0x28e5ae0()*0.732097);
}

double NNfunction_sb_uLcR::synapse0x28eef70() {
   return (neuron0x28e5e20()*0.515266);
}

double NNfunction_sb_uLcR::synapse0x28eefb0() {
   return (neuron0x28e6160()*-0.202411);
}

double NNfunction_sb_uLcR::synapse0x28eeff0() {
   return (neuron0x28e64a0()*0.652193);
}

double NNfunction_sb_uLcR::synapse0x28ef030() {
   return (neuron0x28e67e0()*-0.342956);
}

double NNfunction_sb_uLcR::synapse0x28ef070() {
   return (neuron0x28e6b20()*0.0558387);
}

double NNfunction_sb_uLcR::synapse0x28ef0b0() {
   return (neuron0x28e6e60()*-0.364585);
}

double NNfunction_sb_uLcR::synapse0x28ef430() {
   return (neuron0x28e2210()*-0.233382);
}

double NNfunction_sb_uLcR::synapse0x28ef470() {
   return (neuron0x28e24c0()*0.0780955);
}

double NNfunction_sb_uLcR::synapse0x28ef4b0() {
   return (neuron0x28e2800()*-0.00572717);
}

double NNfunction_sb_uLcR::synapse0x28ef4f0() {
   return (neuron0x28e2b40()*-0.0775715);
}

double NNfunction_sb_uLcR::synapse0x28ef530() {
   return (neuron0x28e2e80()*0.0281868);
}

double NNfunction_sb_uLcR::synapse0x28ef570() {
   return (neuron0x28e31c0()*-0.181433);
}

double NNfunction_sb_uLcR::synapse0x28ef5b0() {
   return (neuron0x28e3500()*-0.180993);
}

double NNfunction_sb_uLcR::synapse0x28ef5f0() {
   return (neuron0x28e3840()*0.534075);
}

double NNfunction_sb_uLcR::synapse0x28ef630() {
   return (neuron0x28e3b80()*0.149485);
}

double NNfunction_sb_uLcR::synapse0x28ef670() {
   return (neuron0x28e3ec0()*0.0187375);
}

double NNfunction_sb_uLcR::synapse0x28ef6b0() {
   return (neuron0x28e4200()*0.319469);
}

double NNfunction_sb_uLcR::synapse0x28ef6f0() {
   return (neuron0x28e4540()*-0.67341);
}

double NNfunction_sb_uLcR::synapse0x28ef730() {
   return (neuron0x28e4880()*0.151693);
}

double NNfunction_sb_uLcR::synapse0x28ef770() {
   return (neuron0x28e4bc0()*-0.0489436);
}

double NNfunction_sb_uLcR::synapse0x28ef7b0() {
   return (neuron0x28e4f00()*-0.0917769);
}

double NNfunction_sb_uLcR::synapse0x28ef7f0() {
   return (neuron0x28e5240()*-0.356808);
}

double NNfunction_sb_uLcR::synapse0x28ef280() {
   return (neuron0x28e5580()*0.104106);
}

double NNfunction_sb_uLcR::synapse0x28ef2c0() {
   return (neuron0x28e5ae0()*-0.0792709);
}

double NNfunction_sb_uLcR::synapse0x28ef940() {
   return (neuron0x28e5e20()*0.175074);
}

double NNfunction_sb_uLcR::synapse0x28ef980() {
   return (neuron0x28e6160()*0.175599);
}

double NNfunction_sb_uLcR::synapse0x28ef9c0() {
   return (neuron0x28e64a0()*0.0668671);
}

double NNfunction_sb_uLcR::synapse0x28efa00() {
   return (neuron0x28e67e0()*-0.128551);
}

double NNfunction_sb_uLcR::synapse0x28efa40() {
   return (neuron0x28e6b20()*0.0816006);
}

double NNfunction_sb_uLcR::synapse0x28efa80() {
   return (neuron0x28e6e60()*0.304105);
}

double NNfunction_sb_uLcR::synapse0x28efc50() {
   return (neuron0x28e2210()*-0.0132862);
}

double NNfunction_sb_uLcR::synapse0x28f8ce0() {
   return (neuron0x28e24c0()*-0.0249834);
}

double NNfunction_sb_uLcR::synapse0x28f8d20() {
   return (neuron0x28e2800()*-0.0109601);
}

double NNfunction_sb_uLcR::synapse0x28f8d60() {
   return (neuron0x28e2b40()*-2.79547);
}

double NNfunction_sb_uLcR::synapse0x28f8da0() {
   return (neuron0x28e2e80()*-0.0113891);
}

double NNfunction_sb_uLcR::synapse0x28f8de0() {
   return (neuron0x28e31c0()*-0.00138456);
}

double NNfunction_sb_uLcR::synapse0x28f8e20() {
   return (neuron0x28e3500()*-0.00940639);
}

double NNfunction_sb_uLcR::synapse0x28f8e60() {
   return (neuron0x28e3840()*-0.0273372);
}

double NNfunction_sb_uLcR::synapse0x28f8ea0() {
   return (neuron0x28e3b80()*-0.011451);
}

double NNfunction_sb_uLcR::synapse0x28f8ee0() {
   return (neuron0x28e3ec0()*0.00490739);
}

double NNfunction_sb_uLcR::synapse0x28f8f20() {
   return (neuron0x28e4200()*-0.01118);
}

double NNfunction_sb_uLcR::synapse0x28f8f60() {
   return (neuron0x28e4540()*-0.104156);
}

double NNfunction_sb_uLcR::synapse0x28f8fa0() {
   return (neuron0x28e4880()*0.0121137);
}

double NNfunction_sb_uLcR::synapse0x28f8fe0() {
   return (neuron0x28e4bc0()*0.0101631);
}

double NNfunction_sb_uLcR::synapse0x28f9020() {
   return (neuron0x28e4f00()*-0.00556852);
}

double NNfunction_sb_uLcR::synapse0x28f9060() {
   return (neuron0x28e5240()*-0.086138);
}

double NNfunction_sb_uLcR::synapse0x28f8b30() {
   return (neuron0x28e5580()*0.00598523);
}

double NNfunction_sb_uLcR::synapse0x28f8b70() {
   return (neuron0x28e5ae0()*0.0175596);
}

double NNfunction_sb_uLcR::synapse0x28f91b0() {
   return (neuron0x28e5e20()*-0.0104082);
}

double NNfunction_sb_uLcR::synapse0x28f91f0() {
   return (neuron0x28e6160()*-0.0216016);
}

double NNfunction_sb_uLcR::synapse0x28f9230() {
   return (neuron0x28e64a0()*-0.0145701);
}

double NNfunction_sb_uLcR::synapse0x28f9270() {
   return (neuron0x28e67e0()*-0.0207128);
}

double NNfunction_sb_uLcR::synapse0x28f92b0() {
   return (neuron0x28e6b20()*0.0106283);
}

double NNfunction_sb_uLcR::synapse0x28f92f0() {
   return (neuron0x28e6e60()*-0.0145395);
}

double NNfunction_sb_uLcR::synapse0x28f9670() {
   return (neuron0x28e2210()*-0.199593);
}

double NNfunction_sb_uLcR::synapse0x28f96b0() {
   return (neuron0x28e24c0()*0.132651);
}

double NNfunction_sb_uLcR::synapse0x28f96f0() {
   return (neuron0x28e2800()*-0.0592938);
}

double NNfunction_sb_uLcR::synapse0x28f9730() {
   return (neuron0x28e2b40()*1.11979);
}

double NNfunction_sb_uLcR::synapse0x28f9770() {
   return (neuron0x28e2e80()*-0.00346083);
}

double NNfunction_sb_uLcR::synapse0x28f97b0() {
   return (neuron0x28e31c0()*-0.124226);
}

double NNfunction_sb_uLcR::synapse0x28f97f0() {
   return (neuron0x28e3500()*0.0369561);
}

double NNfunction_sb_uLcR::synapse0x28f9830() {
   return (neuron0x28e3840()*-0.182826);
}

double NNfunction_sb_uLcR::synapse0x28f9870() {
   return (neuron0x28e3b80()*-0.0995553);
}

double NNfunction_sb_uLcR::synapse0x28f98b0() {
   return (neuron0x28e3ec0()*0.028198);
}

double NNfunction_sb_uLcR::synapse0x28f98f0() {
   return (neuron0x28e4200()*0.0997361);
}

double NNfunction_sb_uLcR::synapse0x28f9930() {
   return (neuron0x28e4540()*-0.0201435);
}

double NNfunction_sb_uLcR::synapse0x28f9970() {
   return (neuron0x28e4880()*-0.165258);
}

double NNfunction_sb_uLcR::synapse0x28f99b0() {
   return (neuron0x28e4bc0()*0.0352479);
}

double NNfunction_sb_uLcR::synapse0x28f99f0() {
   return (neuron0x28e4f00()*-0.0471752);
}

double NNfunction_sb_uLcR::synapse0x28f9a30() {
   return (neuron0x28e5240()*0.327514);
}

double NNfunction_sb_uLcR::synapse0x28f94c0() {
   return (neuron0x28e5580()*0.0258469);
}

double NNfunction_sb_uLcR::synapse0x28f9500() {
   return (neuron0x28e5ae0()*-0.147152);
}

double NNfunction_sb_uLcR::synapse0x28f9b80() {
   return (neuron0x28e5e20()*0.0563283);
}

double NNfunction_sb_uLcR::synapse0x28f9bc0() {
   return (neuron0x28e6160()*-0.0633416);
}

double NNfunction_sb_uLcR::synapse0x28f9c00() {
   return (neuron0x28e64a0()*-0.135032);
}

double NNfunction_sb_uLcR::synapse0x28f9c40() {
   return (neuron0x28e67e0()*-0.0663035);
}

double NNfunction_sb_uLcR::synapse0x28f9c80() {
   return (neuron0x28e6b20()*-0.0789514);
}

double NNfunction_sb_uLcR::synapse0x28f9cc0() {
   return (neuron0x28e6e60()*-0.037814);
}

double NNfunction_sb_uLcR::synapse0x28fa040() {
   return (neuron0x28e2210()*-0.079524);
}

double NNfunction_sb_uLcR::synapse0x28fa080() {
   return (neuron0x28e24c0()*0.0885129);
}

double NNfunction_sb_uLcR::synapse0x28fa0c0() {
   return (neuron0x28e2800()*0.157895);
}

double NNfunction_sb_uLcR::synapse0x28fa100() {
   return (neuron0x28e2b40()*-0.247125);
}

double NNfunction_sb_uLcR::synapse0x28fa140() {
   return (neuron0x28e2e80()*-0.116952);
}

double NNfunction_sb_uLcR::synapse0x28fa180() {
   return (neuron0x28e31c0()*0.245321);
}

double NNfunction_sb_uLcR::synapse0x28fa1c0() {
   return (neuron0x28e3500()*0.410757);
}

double NNfunction_sb_uLcR::synapse0x28fa200() {
   return (neuron0x28e3840()*-0.255451);
}

double NNfunction_sb_uLcR::synapse0x28fa240() {
   return (neuron0x28e3b80()*0.165893);
}

double NNfunction_sb_uLcR::synapse0x28fa280() {
   return (neuron0x28e3ec0()*-0.0200113);
}

double NNfunction_sb_uLcR::synapse0x28fa2c0() {
   return (neuron0x28e4200()*0.180898);
}

double NNfunction_sb_uLcR::synapse0x28fa300() {
   return (neuron0x28e4540()*-0.804639);
}

double NNfunction_sb_uLcR::synapse0x28fa340() {
   return (neuron0x28e4880()*0.0324794);
}

double NNfunction_sb_uLcR::synapse0x28fa380() {
   return (neuron0x28e4bc0()*-0.0348391);
}

double NNfunction_sb_uLcR::synapse0x28fa3c0() {
   return (neuron0x28e4f00()*-0.0314058);
}

double NNfunction_sb_uLcR::synapse0x28fa400() {
   return (neuron0x28e5240()*-0.34973);
}

double NNfunction_sb_uLcR::synapse0x28f9e90() {
   return (neuron0x28e5580()*0.0422246);
}

double NNfunction_sb_uLcR::synapse0x28f9ed0() {
   return (neuron0x28e5ae0()*-0.16456);
}

double NNfunction_sb_uLcR::synapse0x28fa550() {
   return (neuron0x28e5e20()*0.193946);
}

double NNfunction_sb_uLcR::synapse0x28fa590() {
   return (neuron0x28e6160()*-0.15709);
}

double NNfunction_sb_uLcR::synapse0x28fa5d0() {
   return (neuron0x28e64a0()*-0.0314453);
}

double NNfunction_sb_uLcR::synapse0x28fa610() {
   return (neuron0x28e67e0()*-0.197677);
}

double NNfunction_sb_uLcR::synapse0x28fa650() {
   return (neuron0x28e6b20()*-0.0297538);
}

double NNfunction_sb_uLcR::synapse0x28fa690() {
   return (neuron0x28e6e60()*0.0832822);
}

double NNfunction_sb_uLcR::synapse0x28faa10() {
   return (neuron0x28e2210()*0.600247);
}

double NNfunction_sb_uLcR::synapse0x28faa50() {
   return (neuron0x28e24c0()*0.205542);
}

double NNfunction_sb_uLcR::synapse0x28faa90() {
   return (neuron0x28e2800()*1.16695);
}

double NNfunction_sb_uLcR::synapse0x28faad0() {
   return (neuron0x28e2b40()*-0.74457);
}

double NNfunction_sb_uLcR::synapse0x28fab10() {
   return (neuron0x28e2e80()*0.12955);
}

double NNfunction_sb_uLcR::synapse0x28fab50() {
   return (neuron0x28e31c0()*0.10618);
}

double NNfunction_sb_uLcR::synapse0x28fab90() {
   return (neuron0x28e3500()*-0.0667464);
}

double NNfunction_sb_uLcR::synapse0x28fabd0() {
   return (neuron0x28e3840()*-0.159253);
}

double NNfunction_sb_uLcR::synapse0x28fac10() {
   return (neuron0x28e3b80()*-0.146127);
}

double NNfunction_sb_uLcR::synapse0x28fac50() {
   return (neuron0x28e3ec0()*-0.309487);
}

double NNfunction_sb_uLcR::synapse0x28fac90() {
   return (neuron0x28e4200()*0.333729);
}

double NNfunction_sb_uLcR::synapse0x28facd0() {
   return (neuron0x28e4540()*0.22847);
}

double NNfunction_sb_uLcR::synapse0x28fad10() {
   return (neuron0x28e4880()*0.598016);
}

double NNfunction_sb_uLcR::synapse0x28fad50() {
   return (neuron0x28e4bc0()*-0.556399);
}

double NNfunction_sb_uLcR::synapse0x28fad90() {
   return (neuron0x28e4f00()*0.55211);
}

double NNfunction_sb_uLcR::synapse0x28fadd0() {
   return (neuron0x28e5240()*0.118234);
}

double NNfunction_sb_uLcR::synapse0x28fa860() {
   return (neuron0x28e5580()*-0.237572);
}

double NNfunction_sb_uLcR::synapse0x28fa8a0() {
   return (neuron0x28e5ae0()*-0.563027);
}

double NNfunction_sb_uLcR::synapse0x28faf20() {
   return (neuron0x28e5e20()*0.126693);
}

double NNfunction_sb_uLcR::synapse0x28faf60() {
   return (neuron0x28e6160()*0.69618);
}

double NNfunction_sb_uLcR::synapse0x28fafa0() {
   return (neuron0x28e64a0()*0.338179);
}

double NNfunction_sb_uLcR::synapse0x28fafe0() {
   return (neuron0x28e67e0()*-0.31691);
}

double NNfunction_sb_uLcR::synapse0x28fb020() {
   return (neuron0x28e6b20()*-0.433004);
}

double NNfunction_sb_uLcR::synapse0x28fb060() {
   return (neuron0x28e6e60()*0.0260378);
}

double NNfunction_sb_uLcR::synapse0x28fb3e0() {
   return (neuron0x28e2210()*-0.038635);
}

double NNfunction_sb_uLcR::synapse0x28fb420() {
   return (neuron0x28e24c0()*-0.0393574);
}

double NNfunction_sb_uLcR::synapse0x28fb460() {
   return (neuron0x28e2800()*-0.0127737);
}

double NNfunction_sb_uLcR::synapse0x28fb4a0() {
   return (neuron0x28e2b40()*12.7648);
}

double NNfunction_sb_uLcR::synapse0x28fb4e0() {
   return (neuron0x28e2e80()*-0.0052042);
}

double NNfunction_sb_uLcR::synapse0x28fb520() {
   return (neuron0x28e31c0()*-0.0132152);
}

double NNfunction_sb_uLcR::synapse0x28fb560() {
   return (neuron0x28e3500()*0.0664921);
}

double NNfunction_sb_uLcR::synapse0x28fb5a0() {
   return (neuron0x28e3840()*-0.0462787);
}

double NNfunction_sb_uLcR::synapse0x28fb5e0() {
   return (neuron0x28e3b80()*-0.0480622);
}

double NNfunction_sb_uLcR::synapse0x28fb620() {
   return (neuron0x28e3ec0()*0.00122174);
}

double NNfunction_sb_uLcR::synapse0x28fb660() {
   return (neuron0x28e4200()*-0.0216961);
}

double NNfunction_sb_uLcR::synapse0x28fb6a0() {
   return (neuron0x28e4540()*0.147611);
}

double NNfunction_sb_uLcR::synapse0x28fb6e0() {
   return (neuron0x28e4880()*-0.0142741);
}

double NNfunction_sb_uLcR::synapse0x28fb720() {
   return (neuron0x28e4bc0()*0.0273583);
}

double NNfunction_sb_uLcR::synapse0x28fb760() {
   return (neuron0x28e4f00()*0.0210684);
}

double NNfunction_sb_uLcR::synapse0x28fb7a0() {
   return (neuron0x28e5240()*0.0937151);
}

double NNfunction_sb_uLcR::synapse0x28fb230() {
   return (neuron0x28e5580()*-0.00284195);
}

double NNfunction_sb_uLcR::synapse0x28fb270() {
   return (neuron0x28e5ae0()*-0.0159941);
}

double NNfunction_sb_uLcR::synapse0x28fb8f0() {
   return (neuron0x28e5e20()*0.033648);
}

double NNfunction_sb_uLcR::synapse0x28fb930() {
   return (neuron0x28e6160()*-0.040508);
}

double NNfunction_sb_uLcR::synapse0x28fb970() {
   return (neuron0x28e64a0()*-0.00596058);
}

double NNfunction_sb_uLcR::synapse0x28fb9b0() {
   return (neuron0x28e67e0()*-0.0157546);
}

double NNfunction_sb_uLcR::synapse0x28fb9f0() {
   return (neuron0x28e6b20()*0.00488551);
}

double NNfunction_sb_uLcR::synapse0x28fba30() {
   return (neuron0x28e6e60()*0.0646901);
}

double NNfunction_sb_uLcR::synapse0x28fbdb0() {
   return (neuron0x28e2210()*0.0974382);
}

double NNfunction_sb_uLcR::synapse0x28fbdf0() {
   return (neuron0x28e24c0()*-0.287606);
}

double NNfunction_sb_uLcR::synapse0x28fbe30() {
   return (neuron0x28e2800()*-0.198536);
}

double NNfunction_sb_uLcR::synapse0x28fbe70() {
   return (neuron0x28e2b40()*1.14145);
}

double NNfunction_sb_uLcR::synapse0x28fbeb0() {
   return (neuron0x28e2e80()*-0.0281389);
}

double NNfunction_sb_uLcR::synapse0x28fbef0() {
   return (neuron0x28e31c0()*0.00363347);
}

double NNfunction_sb_uLcR::synapse0x28fbf30() {
   return (neuron0x28e3500()*-0.044406);
}

double NNfunction_sb_uLcR::synapse0x28fbf70() {
   return (neuron0x28e3840()*-0.0163248);
}

double NNfunction_sb_uLcR::synapse0x28fbfb0() {
   return (neuron0x28e3b80()*-0.0343225);
}

double NNfunction_sb_uLcR::synapse0x28fbff0() {
   return (neuron0x28e3ec0()*-0.011519);
}

double NNfunction_sb_uLcR::synapse0x28fc030() {
   return (neuron0x28e4200()*-0.127146);
}

double NNfunction_sb_uLcR::synapse0x28fc070() {
   return (neuron0x28e4540()*0.239808);
}

double NNfunction_sb_uLcR::synapse0x28fc0b0() {
   return (neuron0x28e4880()*0.0519487);
}

double NNfunction_sb_uLcR::synapse0x28fc0f0() {
   return (neuron0x28e4bc0()*-0.117354);
}

double NNfunction_sb_uLcR::synapse0x28fc130() {
   return (neuron0x28e4f00()*-0.038557);
}

double NNfunction_sb_uLcR::synapse0x28fc170() {
   return (neuron0x28e5240()*0.164418);
}

double NNfunction_sb_uLcR::synapse0x28fbc00() {
   return (neuron0x28e5580()*-0.00325241);
}

double NNfunction_sb_uLcR::synapse0x28fbc40() {
   return (neuron0x28e5ae0()*-0.0434025);
}

double NNfunction_sb_uLcR::synapse0x28fc2c0() {
   return (neuron0x28e5e20()*0.174066);
}

double NNfunction_sb_uLcR::synapse0x28fc300() {
   return (neuron0x28e6160()*-1.59495e-05);
}

double NNfunction_sb_uLcR::synapse0x28fc340() {
   return (neuron0x28e64a0()*0.0780056);
}

double NNfunction_sb_uLcR::synapse0x28fc380() {
   return (neuron0x28e67e0()*-0.0252817);
}

double NNfunction_sb_uLcR::synapse0x28fc3c0() {
   return (neuron0x28e6b20()*0.111617);
}

double NNfunction_sb_uLcR::synapse0x28fc400() {
   return (neuron0x28e6e60()*-0.0794315);
}

double NNfunction_sb_uLcR::synapse0x28fc780() {
   return (neuron0x28e2210()*-0.0224992);
}

double NNfunction_sb_uLcR::synapse0x28fc7c0() {
   return (neuron0x28e24c0()*0.00585027);
}

double NNfunction_sb_uLcR::synapse0x28fc800() {
   return (neuron0x28e2800()*-0.0196576);
}

double NNfunction_sb_uLcR::synapse0x28fc840() {
   return (neuron0x28e2b40()*-0.0216411);
}

double NNfunction_sb_uLcR::synapse0x28fc880() {
   return (neuron0x28e2e80()*-0.0138844);
}

double NNfunction_sb_uLcR::synapse0x28fc8c0() {
   return (neuron0x28e31c0()*-0.0214493);
}

double NNfunction_sb_uLcR::synapse0x28fc900() {
   return (neuron0x28e3500()*0.00609198);
}

double NNfunction_sb_uLcR::synapse0x28fc940() {
   return (neuron0x28e3840()*-0.0618476);
}

double NNfunction_sb_uLcR::synapse0x28fc980() {
   return (neuron0x28e3b80()*0.00269876);
}

double NNfunction_sb_uLcR::synapse0x28fc9c0() {
   return (neuron0x28e3ec0()*0.00651394);
}

double NNfunction_sb_uLcR::synapse0x28fca00() {
   return (neuron0x28e4200()*0.0194567);
}

double NNfunction_sb_uLcR::synapse0x28fca40() {
   return (neuron0x28e4540()*-0.270483);
}

double NNfunction_sb_uLcR::synapse0x28fca80() {
   return (neuron0x28e4880()*0.0375104);
}

double NNfunction_sb_uLcR::synapse0x28fcac0() {
   return (neuron0x28e4bc0()*0.0222792);
}

double NNfunction_sb_uLcR::synapse0x28fcb00() {
   return (neuron0x28e4f00()*0.00752362);
}

double NNfunction_sb_uLcR::synapse0x28fcb40() {
   return (neuron0x28e5240()*1.91982);
}

double NNfunction_sb_uLcR::synapse0x28fc5d0() {
   return (neuron0x28e5580()*-0.0136815);
}

double NNfunction_sb_uLcR::synapse0x28fc610() {
   return (neuron0x28e5ae0()*0.0374019);
}

double NNfunction_sb_uLcR::synapse0x28fcc90() {
   return (neuron0x28e5e20()*0.00917136);
}

double NNfunction_sb_uLcR::synapse0x28fccd0() {
   return (neuron0x28e6160()*0.0288832);
}

double NNfunction_sb_uLcR::synapse0x28fcd10() {
   return (neuron0x28e64a0()*-0.0244846);
}

double NNfunction_sb_uLcR::synapse0x28fcd50() {
   return (neuron0x28e67e0()*-0.00228003);
}

double NNfunction_sb_uLcR::synapse0x28fcd90() {
   return (neuron0x28e6b20()*0.00682235);
}

double NNfunction_sb_uLcR::synapse0x28fcdd0() {
   return (neuron0x28e6e60()*-0.00446525);
}

double NNfunction_sb_uLcR::synapse0x28fd150() {
   return (neuron0x28e2210()*-0.00779325);
}

double NNfunction_sb_uLcR::synapse0x28fd190() {
   return (neuron0x28e24c0()*0.0112555);
}

double NNfunction_sb_uLcR::synapse0x28fd1d0() {
   return (neuron0x28e2800()*-0.0409633);
}

double NNfunction_sb_uLcR::synapse0x28fd210() {
   return (neuron0x28e2b40()*0.177781);
}

double NNfunction_sb_uLcR::synapse0x28fd250() {
   return (neuron0x28e2e80()*0.0131444);
}

double NNfunction_sb_uLcR::synapse0x28fd290() {
   return (neuron0x28e31c0()*-0.00584057);
}

double NNfunction_sb_uLcR::synapse0x28fd2d0() {
   return (neuron0x28e3500()*0.00171419);
}

double NNfunction_sb_uLcR::synapse0x28fd310() {
   return (neuron0x28e3840()*-0.00177921);
}

double NNfunction_sb_uLcR::synapse0x28fd350() {
   return (neuron0x28e3b80()*-0.00168323);
}

double NNfunction_sb_uLcR::synapse0x28fd390() {
   return (neuron0x28e3ec0()*-0.00532802);
}

double NNfunction_sb_uLcR::synapse0x28fd3d0() {
   return (neuron0x28e4200()*-0.018756);
}

double NNfunction_sb_uLcR::synapse0x28fd410() {
   return (neuron0x28e4540()*0.482509);
}

double NNfunction_sb_uLcR::synapse0x28fd450() {
   return (neuron0x28e4880()*-0.0130682);
}

double NNfunction_sb_uLcR::synapse0x28fd490() {
   return (neuron0x28e4bc0()*0.00914812);
}

double NNfunction_sb_uLcR::synapse0x28fd4d0() {
   return (neuron0x28e4f00()*-0.00364987);
}

double NNfunction_sb_uLcR::synapse0x28fd510() {
   return (neuron0x28e5240()*-0.134633);
}

double NNfunction_sb_uLcR::synapse0x28fcfa0() {
   return (neuron0x28e5580()*0.0171052);
}

double NNfunction_sb_uLcR::synapse0x28fcfe0() {
   return (neuron0x28e5ae0()*-0.00894321);
}

double NNfunction_sb_uLcR::synapse0x28fd660() {
   return (neuron0x28e5e20()*-0.0168623);
}

double NNfunction_sb_uLcR::synapse0x28fd6a0() {
   return (neuron0x28e6160()*0.00387557);
}

double NNfunction_sb_uLcR::synapse0x28fd6e0() {
   return (neuron0x28e64a0()*0.0160635);
}

double NNfunction_sb_uLcR::synapse0x28fd720() {
   return (neuron0x28e67e0()*0.00561974);
}

double NNfunction_sb_uLcR::synapse0x28fd760() {
   return (neuron0x28e6b20()*-0.00740347);
}

double NNfunction_sb_uLcR::synapse0x28fd7a0() {
   return (neuron0x28e6e60()*-0.010954);
}

double NNfunction_sb_uLcR::synapse0x28fdb20() {
   return (neuron0x28e2210()*-0.090112);
}

double NNfunction_sb_uLcR::synapse0x28f20f0() {
   return (neuron0x28e24c0()*-0.00285636);
}

double NNfunction_sb_uLcR::synapse0x28f2130() {
   return (neuron0x28e2800()*-0.0142083);
}

double NNfunction_sb_uLcR::synapse0x28f2170() {
   return (neuron0x28e2b40()*-1.16763);
}

double NNfunction_sb_uLcR::synapse0x28f23c0() {
   return (neuron0x28e2e80()*-0.0433251);
}

double NNfunction_sb_uLcR::synapse0x28f2400() {
   return (neuron0x28e31c0()*-0.0626143);
}

double NNfunction_sb_uLcR::synapse0x28f2440() {
   return (neuron0x28e3500()*-0.0047626);
}

double NNfunction_sb_uLcR::synapse0x28f2690() {
   return (neuron0x28e3840()*-0.118593);
}

double NNfunction_sb_uLcR::synapse0x28f26d0() {
   return (neuron0x28e3b80()*-0.0398268);
}

double NNfunction_sb_uLcR::synapse0x28f2920() {
   return (neuron0x28e3ec0()*-0.0970476);
}

double NNfunction_sb_uLcR::synapse0x28f2960() {
   return (neuron0x28e4200()*0.0324065);
}

double NNfunction_sb_uLcR::synapse0x28f29a0() {
   return (neuron0x28e4540()*-0.0169766);
}

double NNfunction_sb_uLcR::synapse0x28f2bf0() {
   return (neuron0x28e4880()*-0.115499);
}

double NNfunction_sb_uLcR::synapse0x28f2c30() {
   return (neuron0x28e4bc0()*-0.00828886);
}

double NNfunction_sb_uLcR::synapse0x28f2e80() {
   return (neuron0x28e4f00()*-0.0362759);
}

double NNfunction_sb_uLcR::synapse0x28f2ec0() {
   return (neuron0x28e5240()*-0.165409);
}

double NNfunction_sb_uLcR::synapse0x28fd970() {
   return (neuron0x28e5580()*0.07165);
}

double NNfunction_sb_uLcR::synapse0x28fd9b0() {
   return (neuron0x28e5ae0()*-0.0150711);
}

double NNfunction_sb_uLcR::synapse0x28f3010() {
   return (neuron0x28e5e20()*-0.0414417);
}

double NNfunction_sb_uLcR::synapse0x28f3520() {
   return (neuron0x28e6160()*-0.031355);
}

double NNfunction_sb_uLcR::synapse0x28f3560() {
   return (neuron0x28e64a0()*0.0361407);
}

double NNfunction_sb_uLcR::synapse0x28f35a0() {
   return (neuron0x28e67e0()*0.00276663);
}

double NNfunction_sb_uLcR::synapse0x28f37f0() {
   return (neuron0x28e6b20()*0.0236403);
}

double NNfunction_sb_uLcR::synapse0x28f3830() {
   return (neuron0x28e6e60()*-0.0250098);
}

double NNfunction_sb_uLcR::synapse0x28f30e0() {
   return (neuron0x28e2210()*-0.0378372);
}

double NNfunction_sb_uLcR::synapse0x28f3120() {
   return (neuron0x28e24c0()*-0.433271);
}

double NNfunction_sb_uLcR::synapse0x28f3160() {
   return (neuron0x28e2800()*0.77423);
}

double NNfunction_sb_uLcR::synapse0x28f31a0() {
   return (neuron0x28e2b40()*0.0186604);
}

double NNfunction_sb_uLcR::synapse0x28f3b20() {
   return (neuron0x28e2e80()*0.0995598);
}

double NNfunction_sb_uLcR::synapse0x28ffe70() {
   return (neuron0x28e31c0()*-0.305543);
}

double NNfunction_sb_uLcR::synapse0x28ffeb0() {
   return (neuron0x28e3500()*0.256216);
}

double NNfunction_sb_uLcR::synapse0x28ffef0() {
   return (neuron0x28e3840()*-0.39322);
}

double NNfunction_sb_uLcR::synapse0x28fff30() {
   return (neuron0x28e3b80()*-0.176653);
}

double NNfunction_sb_uLcR::synapse0x28fff70() {
   return (neuron0x28e3ec0()*-0.178127);
}

double NNfunction_sb_uLcR::synapse0x28fffb0() {
   return (neuron0x28e4200()*0.428914);
}

double NNfunction_sb_uLcR::synapse0x28ffff0() {
   return (neuron0x28e4540()*-0.831147);
}

double NNfunction_sb_uLcR::synapse0x2900030() {
   return (neuron0x28e4880()*0.623132);
}

double NNfunction_sb_uLcR::synapse0x2900070() {
   return (neuron0x28e4bc0()*-0.349166);
}

double NNfunction_sb_uLcR::synapse0x29000b0() {
   return (neuron0x28e4f00()*-0.206977);
}

double NNfunction_sb_uLcR::synapse0x29000f0() {
   return (neuron0x28e5240()*0.872083);
}

double NNfunction_sb_uLcR::synapse0x28f3a00() {
   return (neuron0x28e5580()*0.164512);
}

double NNfunction_sb_uLcR::synapse0x28f3a40() {
   return (neuron0x28e5ae0()*0.109115);
}

double NNfunction_sb_uLcR::synapse0x2900240() {
   return (neuron0x28e5e20()*0.460236);
}

double NNfunction_sb_uLcR::synapse0x2900280() {
   return (neuron0x28e6160()*0.055033);
}

double NNfunction_sb_uLcR::synapse0x29002c0() {
   return (neuron0x28e64a0()*-0.252648);
}

double NNfunction_sb_uLcR::synapse0x2900300() {
   return (neuron0x28e67e0()*-0.116693);
}

double NNfunction_sb_uLcR::synapse0x2900340() {
   return (neuron0x28e6b20()*0.506536);
}

double NNfunction_sb_uLcR::synapse0x2900380() {
   return (neuron0x28e6e60()*0.201014);
}

double NNfunction_sb_uLcR::synapse0x2900700() {
   return (neuron0x28e2210()*0.202643);
}

double NNfunction_sb_uLcR::synapse0x2900740() {
   return (neuron0x28e24c0()*0.0245288);
}

double NNfunction_sb_uLcR::synapse0x2900780() {
   return (neuron0x28e2800()*-0.123938);
}

double NNfunction_sb_uLcR::synapse0x29007c0() {
   return (neuron0x28e2b40()*0.763264);
}

double NNfunction_sb_uLcR::synapse0x2900800() {
   return (neuron0x28e2e80()*0.411375);
}

double NNfunction_sb_uLcR::synapse0x2900840() {
   return (neuron0x28e31c0()*0.263178);
}

double NNfunction_sb_uLcR::synapse0x2900880() {
   return (neuron0x28e3500()*0.200585);
}

double NNfunction_sb_uLcR::synapse0x29008c0() {
   return (neuron0x28e3840()*0.458388);
}

double NNfunction_sb_uLcR::synapse0x2900900() {
   return (neuron0x28e3b80()*-0.165197);
}

double NNfunction_sb_uLcR::synapse0x2900940() {
   return (neuron0x28e3ec0()*0.129302);
}

double NNfunction_sb_uLcR::synapse0x2900980() {
   return (neuron0x28e4200()*-0.165429);
}

double NNfunction_sb_uLcR::synapse0x29009c0() {
   return (neuron0x28e4540()*0.12376);
}

double NNfunction_sb_uLcR::synapse0x2900a00() {
   return (neuron0x28e4880()*-0.143565);
}

double NNfunction_sb_uLcR::synapse0x2900a40() {
   return (neuron0x28e4bc0()*-0.162948);
}

double NNfunction_sb_uLcR::synapse0x2900a80() {
   return (neuron0x28e4f00()*0.535374);
}

double NNfunction_sb_uLcR::synapse0x2900ac0() {
   return (neuron0x28e5240()*0.503945);
}

double NNfunction_sb_uLcR::synapse0x2900550() {
   return (neuron0x28e5580()*0.219475);
}

double NNfunction_sb_uLcR::synapse0x2900590() {
   return (neuron0x28e5ae0()*0.12128);
}

double NNfunction_sb_uLcR::synapse0x2900c10() {
   return (neuron0x28e5e20()*0.374472);
}

double NNfunction_sb_uLcR::synapse0x2900c50() {
   return (neuron0x28e6160()*-0.228077);
}

double NNfunction_sb_uLcR::synapse0x2900c90() {
   return (neuron0x28e64a0()*-0.329134);
}

double NNfunction_sb_uLcR::synapse0x2900cd0() {
   return (neuron0x28e67e0()*0.119747);
}

double NNfunction_sb_uLcR::synapse0x2900d10() {
   return (neuron0x28e6b20()*0.1561);
}

double NNfunction_sb_uLcR::synapse0x2900d50() {
   return (neuron0x28e6e60()*0.24253);
}

double NNfunction_sb_uLcR::synapse0x29010d0() {
   return (neuron0x28e2210()*0.339323);
}

double NNfunction_sb_uLcR::synapse0x2901110() {
   return (neuron0x28e24c0()*-0.153388);
}

double NNfunction_sb_uLcR::synapse0x2901150() {
   return (neuron0x28e2800()*-0.22772);
}

double NNfunction_sb_uLcR::synapse0x2901190() {
   return (neuron0x28e2b40()*0.194975);
}

double NNfunction_sb_uLcR::synapse0x29011d0() {
   return (neuron0x28e2e80()*0.0584781);
}

double NNfunction_sb_uLcR::synapse0x2901210() {
   return (neuron0x28e31c0()*-0.554767);
}

double NNfunction_sb_uLcR::synapse0x2901250() {
   return (neuron0x28e3500()*-0.397711);
}

double NNfunction_sb_uLcR::synapse0x2901290() {
   return (neuron0x28e3840()*-0.132322);
}

double NNfunction_sb_uLcR::synapse0x29012d0() {
   return (neuron0x28e3b80()*0.0920024);
}

double NNfunction_sb_uLcR::synapse0x2901310() {
   return (neuron0x28e3ec0()*-0.867232);
}

double NNfunction_sb_uLcR::synapse0x2901350() {
   return (neuron0x28e4200()*-0.01312);
}

double NNfunction_sb_uLcR::synapse0x2901390() {
   return (neuron0x28e4540()*-0.415142);
}

double NNfunction_sb_uLcR::synapse0x29013d0() {
   return (neuron0x28e4880()*-0.735242);
}

double NNfunction_sb_uLcR::synapse0x2901410() {
   return (neuron0x28e4bc0()*0.717211);
}

double NNfunction_sb_uLcR::synapse0x2901450() {
   return (neuron0x28e4f00()*-0.831295);
}

double NNfunction_sb_uLcR::synapse0x2901490() {
   return (neuron0x28e5240()*-0.063679);
}

double NNfunction_sb_uLcR::synapse0x2900f20() {
   return (neuron0x28e5580()*0.276887);
}

double NNfunction_sb_uLcR::synapse0x2900f60() {
   return (neuron0x28e5ae0()*-0.262765);
}

double NNfunction_sb_uLcR::synapse0x29015e0() {
   return (neuron0x28e5e20()*-0.124828);
}

double NNfunction_sb_uLcR::synapse0x2901620() {
   return (neuron0x28e6160()*0.263252);
}

double NNfunction_sb_uLcR::synapse0x2901660() {
   return (neuron0x28e64a0()*-0.597362);
}

double NNfunction_sb_uLcR::synapse0x29016a0() {
   return (neuron0x28e67e0()*0.103764);
}

double NNfunction_sb_uLcR::synapse0x29016e0() {
   return (neuron0x28e6b20()*0.47271);
}

double NNfunction_sb_uLcR::synapse0x2901720() {
   return (neuron0x28e6e60()*0.82868);
}

double NNfunction_sb_uLcR::synapse0x2901aa0() {
   return (neuron0x28e2210()*-0.0204364);
}

double NNfunction_sb_uLcR::synapse0x2901ae0() {
   return (neuron0x28e24c0()*0.010778);
}

double NNfunction_sb_uLcR::synapse0x2901b20() {
   return (neuron0x28e2800()*-0.0254178);
}

double NNfunction_sb_uLcR::synapse0x2901b60() {
   return (neuron0x28e2b40()*1.56311);
}

double NNfunction_sb_uLcR::synapse0x2901ba0() {
   return (neuron0x28e2e80()*-0.0217276);
}

double NNfunction_sb_uLcR::synapse0x2901be0() {
   return (neuron0x28e31c0()*-0.0113143);
}

double NNfunction_sb_uLcR::synapse0x2901c20() {
   return (neuron0x28e3500()*-0.0323671);
}

double NNfunction_sb_uLcR::synapse0x2901c60() {
   return (neuron0x28e3840()*-0.0240178);
}

double NNfunction_sb_uLcR::synapse0x2901ca0() {
   return (neuron0x28e3b80()*0.0127741);
}

double NNfunction_sb_uLcR::synapse0x2901ce0() {
   return (neuron0x28e3ec0()*0.000930477);
}

double NNfunction_sb_uLcR::synapse0x2901d20() {
   return (neuron0x28e4200()*0.00103701);
}

double NNfunction_sb_uLcR::synapse0x2901d60() {
   return (neuron0x28e4540()*-0.0437456);
}

double NNfunction_sb_uLcR::synapse0x2901da0() {
   return (neuron0x28e4880()*0.0314784);
}

double NNfunction_sb_uLcR::synapse0x2901de0() {
   return (neuron0x28e4bc0()*-0.00691986);
}

double NNfunction_sb_uLcR::synapse0x2901e20() {
   return (neuron0x28e4f00()*0.0211791);
}

double NNfunction_sb_uLcR::synapse0x2901e60() {
   return (neuron0x28e5240()*-0.0877481);
}

double NNfunction_sb_uLcR::synapse0x29018f0() {
   return (neuron0x28e5580()*0.0111714);
}

double NNfunction_sb_uLcR::synapse0x2901930() {
   return (neuron0x28e5ae0()*0.0139371);
}

double NNfunction_sb_uLcR::synapse0x2901fb0() {
   return (neuron0x28e5e20()*0.0156139);
}

double NNfunction_sb_uLcR::synapse0x2901ff0() {
   return (neuron0x28e6160()*0.0128752);
}

double NNfunction_sb_uLcR::synapse0x2902030() {
   return (neuron0x28e64a0()*-0.0159608);
}

double NNfunction_sb_uLcR::synapse0x2902070() {
   return (neuron0x28e67e0()*-0.00448892);
}

double NNfunction_sb_uLcR::synapse0x29020b0() {
   return (neuron0x28e6b20()*0.00488296);
}

double NNfunction_sb_uLcR::synapse0x29020f0() {
   return (neuron0x28e6e60()*-0.0042945);
}

double NNfunction_sb_uLcR::synapse0x2902470() {
   return (neuron0x28e2210()*0.0121133);
}

double NNfunction_sb_uLcR::synapse0x29024b0() {
   return (neuron0x28e24c0()*0.580378);
}

double NNfunction_sb_uLcR::synapse0x29024f0() {
   return (neuron0x28e2800()*-0.0126489);
}

double NNfunction_sb_uLcR::synapse0x2902530() {
   return (neuron0x28e2b40()*-0.3849);
}

double NNfunction_sb_uLcR::synapse0x2902570() {
   return (neuron0x28e2e80()*0.0122357);
}

double NNfunction_sb_uLcR::synapse0x29025b0() {
   return (neuron0x28e31c0()*-0.0813832);
}

double NNfunction_sb_uLcR::synapse0x29025f0() {
   return (neuron0x28e3500()*0.076491);
}

double NNfunction_sb_uLcR::synapse0x2902630() {
   return (neuron0x28e3840()*-0.148231);
}

double NNfunction_sb_uLcR::synapse0x2902670() {
   return (neuron0x28e3b80()*0.0549662);
}

double NNfunction_sb_uLcR::synapse0x29026b0() {
   return (neuron0x28e3ec0()*-0.10967);
}

double NNfunction_sb_uLcR::synapse0x29026f0() {
   return (neuron0x28e4200()*0.33647);
}

double NNfunction_sb_uLcR::synapse0x2902730() {
   return (neuron0x28e4540()*-0.0673529);
}

double NNfunction_sb_uLcR::synapse0x2902770() {
   return (neuron0x28e4880()*0.309036);
}

double NNfunction_sb_uLcR::synapse0x29027b0() {
   return (neuron0x28e4bc0()*-0.249844);
}

double NNfunction_sb_uLcR::synapse0x29027f0() {
   return (neuron0x28e4f00()*0.119352);
}

double NNfunction_sb_uLcR::synapse0x2902830() {
   return (neuron0x28e5240()*-0.899132);
}

double NNfunction_sb_uLcR::synapse0x29022c0() {
   return (neuron0x28e5580()*-0.0297016);
}

double NNfunction_sb_uLcR::synapse0x2902300() {
   return (neuron0x28e5ae0()*-0.145873);
}

double NNfunction_sb_uLcR::synapse0x2902980() {
   return (neuron0x28e5e20()*0.265656);
}

double NNfunction_sb_uLcR::synapse0x29029c0() {
   return (neuron0x28e6160()*-0.353538);
}

double NNfunction_sb_uLcR::synapse0x2902a00() {
   return (neuron0x28e64a0()*0.0430761);
}

double NNfunction_sb_uLcR::synapse0x2902a40() {
   return (neuron0x28e67e0()*-0.00315521);
}

double NNfunction_sb_uLcR::synapse0x2902a80() {
   return (neuron0x28e6b20()*0.18678);
}

double NNfunction_sb_uLcR::synapse0x2902ac0() {
   return (neuron0x28e6e60()*0.0777306);
}

double NNfunction_sb_uLcR::synapse0x2902e40() {
   return (neuron0x28e2210()*0.349373);
}

double NNfunction_sb_uLcR::synapse0x2902e80() {
   return (neuron0x28e24c0()*0.237206);
}

double NNfunction_sb_uLcR::synapse0x2902ec0() {
   return (neuron0x28e2800()*0.319974);
}

double NNfunction_sb_uLcR::synapse0x2902f00() {
   return (neuron0x28e2b40()*-0.131003);
}

double NNfunction_sb_uLcR::synapse0x2902f40() {
   return (neuron0x28e2e80()*0.398885);
}

double NNfunction_sb_uLcR::synapse0x2902f80() {
   return (neuron0x28e31c0()*0.419569);
}

double NNfunction_sb_uLcR::synapse0x2902fc0() {
   return (neuron0x28e3500()*0.00567219);
}

double NNfunction_sb_uLcR::synapse0x2903000() {
   return (neuron0x28e3840()*-0.194184);
}

double NNfunction_sb_uLcR::synapse0x2903040() {
   return (neuron0x28e3b80()*0.394495);
}

double NNfunction_sb_uLcR::synapse0x2903080() {
   return (neuron0x28e3ec0()*0.233373);
}

double NNfunction_sb_uLcR::synapse0x29030c0() {
   return (neuron0x28e4200()*-0.229789);
}

double NNfunction_sb_uLcR::synapse0x2903100() {
   return (neuron0x28e4540()*-0.645351);
}

double NNfunction_sb_uLcR::synapse0x2903140() {
   return (neuron0x28e4880()*-0.0913713);
}

double NNfunction_sb_uLcR::synapse0x2903180() {
   return (neuron0x28e4bc0()*-0.539875);
}

double NNfunction_sb_uLcR::synapse0x29031c0() {
   return (neuron0x28e4f00()*-0.335305);
}

double NNfunction_sb_uLcR::synapse0x2903200() {
   return (neuron0x28e5240()*0.631751);
}

double NNfunction_sb_uLcR::synapse0x2902c90() {
   return (neuron0x28e5580()*0.351024);
}

double NNfunction_sb_uLcR::synapse0x2902cd0() {
   return (neuron0x28e5ae0()*-0.163958);
}

double NNfunction_sb_uLcR::synapse0x2903350() {
   return (neuron0x28e5e20()*-0.534462);
}

double NNfunction_sb_uLcR::synapse0x2903390() {
   return (neuron0x28e6160()*0.452242);
}

double NNfunction_sb_uLcR::synapse0x29033d0() {
   return (neuron0x28e64a0()*0.121725);
}

double NNfunction_sb_uLcR::synapse0x2903410() {
   return (neuron0x28e67e0()*-0.0677011);
}

double NNfunction_sb_uLcR::synapse0x2903450() {
   return (neuron0x28e6b20()*-0.191029);
}

double NNfunction_sb_uLcR::synapse0x2903490() {
   return (neuron0x28e6e60()*0.0984342);
}

double NNfunction_sb_uLcR::synapse0x2903810() {
   return (neuron0x28e2210()*-1.0294);
}

double NNfunction_sb_uLcR::synapse0x2903850() {
   return (neuron0x28e24c0()*-0.18603);
}

double NNfunction_sb_uLcR::synapse0x2903890() {
   return (neuron0x28e2800()*0.156824);
}

double NNfunction_sb_uLcR::synapse0x29038d0() {
   return (neuron0x28e2b40()*-0.725993);
}

double NNfunction_sb_uLcR::synapse0x2903910() {
   return (neuron0x28e2e80()*0.0517123);
}

double NNfunction_sb_uLcR::synapse0x2903950() {
   return (neuron0x28e31c0()*-0.264249);
}

double NNfunction_sb_uLcR::synapse0x2903990() {
   return (neuron0x28e3500()*-0.644422);
}

double NNfunction_sb_uLcR::synapse0x29039d0() {
   return (neuron0x28e3840()*1.00974);
}

double NNfunction_sb_uLcR::synapse0x2903a10() {
   return (neuron0x28e3b80()*-0.27505);
}

double NNfunction_sb_uLcR::synapse0x2903a50() {
   return (neuron0x28e3ec0()*-0.466125);
}

double NNfunction_sb_uLcR::synapse0x2903a90() {
   return (neuron0x28e4200()*0.653271);
}

double NNfunction_sb_uLcR::synapse0x2903ad0() {
   return (neuron0x28e4540()*-0.0466314);
}

double NNfunction_sb_uLcR::synapse0x2903b10() {
   return (neuron0x28e4880()*-0.697869);
}

double NNfunction_sb_uLcR::synapse0x2903b50() {
   return (neuron0x28e4bc0()*-0.0934934);
}

double NNfunction_sb_uLcR::synapse0x2903b90() {
   return (neuron0x28e4f00()*1.02472);
}

double NNfunction_sb_uLcR::synapse0x2903bd0() {
   return (neuron0x28e5240()*0.140664);
}

double NNfunction_sb_uLcR::synapse0x2903660() {
   return (neuron0x28e5580()*0.46449);
}

double NNfunction_sb_uLcR::synapse0x29036a0() {
   return (neuron0x28e5ae0()*0.196248);
}

double NNfunction_sb_uLcR::synapse0x2903d20() {
   return (neuron0x28e5e20()*0.12463);
}

double NNfunction_sb_uLcR::synapse0x2903d60() {
   return (neuron0x28e6160()*-0.518082);
}

double NNfunction_sb_uLcR::synapse0x2903da0() {
   return (neuron0x28e64a0()*-0.379514);
}

double NNfunction_sb_uLcR::synapse0x2903de0() {
   return (neuron0x28e67e0()*-0.0928063);
}

double NNfunction_sb_uLcR::synapse0x2903e20() {
   return (neuron0x28e6b20()*0.399897);
}

double NNfunction_sb_uLcR::synapse0x2903e60() {
   return (neuron0x28e6e60()*0.177379);
}

double NNfunction_sb_uLcR::synapse0x29041e0() {
   return (neuron0x28e2210()*0.0120607);
}

double NNfunction_sb_uLcR::synapse0x2904220() {
   return (neuron0x28e24c0()*-0.00655983);
}

double NNfunction_sb_uLcR::synapse0x2904260() {
   return (neuron0x28e2800()*0.0152216);
}

double NNfunction_sb_uLcR::synapse0x29042a0() {
   return (neuron0x28e2b40()*3.41258);
}

double NNfunction_sb_uLcR::synapse0x29042e0() {
   return (neuron0x28e2e80()*0.00410253);
}

double NNfunction_sb_uLcR::synapse0x2904320() {
   return (neuron0x28e31c0()*0.00579296);
}

double NNfunction_sb_uLcR::synapse0x2904360() {
   return (neuron0x28e3500()*0.0227671);
}

double NNfunction_sb_uLcR::synapse0x29043a0() {
   return (neuron0x28e3840()*-0.0147069);
}

double NNfunction_sb_uLcR::synapse0x29043e0() {
   return (neuron0x28e3b80()*0.0195415);
}

double NNfunction_sb_uLcR::synapse0x2904420() {
   return (neuron0x28e3ec0()*0.0099394);
}

double NNfunction_sb_uLcR::synapse0x2904460() {
   return (neuron0x28e4200()*0.0210903);
}

double NNfunction_sb_uLcR::synapse0x29044a0() {
   return (neuron0x28e4540()*-1.61305);
}

double NNfunction_sb_uLcR::synapse0x29044e0() {
   return (neuron0x28e4880()*0.00681455);
}

double NNfunction_sb_uLcR::synapse0x2904520() {
   return (neuron0x28e4bc0()*-0.0327456);
}

double NNfunction_sb_uLcR::synapse0x2904560() {
   return (neuron0x28e4f00()*0.0297554);
}

double NNfunction_sb_uLcR::synapse0x29045a0() {
   return (neuron0x28e5240()*-0.0284428);
}

double NNfunction_sb_uLcR::synapse0x2904030() {
   return (neuron0x28e5580()*0.010691);
}

double NNfunction_sb_uLcR::synapse0x2904070() {
   return (neuron0x28e5ae0()*0.0224616);
}

double NNfunction_sb_uLcR::synapse0x29046f0() {
   return (neuron0x28e5e20()*0.0770487);
}

double NNfunction_sb_uLcR::synapse0x2904730() {
   return (neuron0x28e6160()*0.0199579);
}

double NNfunction_sb_uLcR::synapse0x2904770() {
   return (neuron0x28e64a0()*-0.00247162);
}

double NNfunction_sb_uLcR::synapse0x29047b0() {
   return (neuron0x28e67e0()*0.0176877);
}

double NNfunction_sb_uLcR::synapse0x29047f0() {
   return (neuron0x28e6b20()*0.00928271);
}

double NNfunction_sb_uLcR::synapse0x2904830() {
   return (neuron0x28e6e60()*0.00292032);
}

double NNfunction_sb_uLcR::synapse0x28ed2e0() {
   return (neuron0x28e2210()*-0.0216185);
}

double NNfunction_sb_uLcR::synapse0x28ed320() {
   return (neuron0x28e24c0()*-0.0158135);
}

double NNfunction_sb_uLcR::synapse0x28ed360() {
   return (neuron0x28e2800()*-0.0508882);
}

double NNfunction_sb_uLcR::synapse0x28ed3a0() {
   return (neuron0x28e2b40()*0.125278);
}

double NNfunction_sb_uLcR::synapse0x28ed3e0() {
   return (neuron0x28e2e80()*-0.00348695);
}

double NNfunction_sb_uLcR::synapse0x28ed420() {
   return (neuron0x28e31c0()*0.0175271);
}

double NNfunction_sb_uLcR::synapse0x28ed460() {
   return (neuron0x28e3500()*0.0244318);
}

double NNfunction_sb_uLcR::synapse0x28ed4a0() {
   return (neuron0x28e3840()*-0.00358191);
}

double NNfunction_sb_uLcR::synapse0x2904fc0() {
   return (neuron0x28e3b80()*0.0156531);
}

double NNfunction_sb_uLcR::synapse0x2905000() {
   return (neuron0x28e3ec0()*0.000234739);
}

double NNfunction_sb_uLcR::synapse0x2905040() {
   return (neuron0x28e4200()*0.0284712);
}

double NNfunction_sb_uLcR::synapse0x2905080() {
   return (neuron0x28e4540()*0.750805);
}

double NNfunction_sb_uLcR::synapse0x29050c0() {
   return (neuron0x28e4880()*-0.0212656);
}

double NNfunction_sb_uLcR::synapse0x2905100() {
   return (neuron0x28e4bc0()*-0.0051192);
}

double NNfunction_sb_uLcR::synapse0x2905140() {
   return (neuron0x28e4f00()*0.0159763);
}

double NNfunction_sb_uLcR::synapse0x2905180() {
   return (neuron0x28e5240()*0.644507);
}

double NNfunction_sb_uLcR::synapse0x2904a00() {
   return (neuron0x28e5580()*0.0206919);
}

double NNfunction_sb_uLcR::synapse0x2904a40() {
   return (neuron0x28e5ae0()*0.029169);
}

double NNfunction_sb_uLcR::synapse0x29052d0() {
   return (neuron0x28e5e20()*0.0164539);
}

double NNfunction_sb_uLcR::synapse0x2905310() {
   return (neuron0x28e6160()*0.00462576);
}

double NNfunction_sb_uLcR::synapse0x2905350() {
   return (neuron0x28e64a0()*0.00930456);
}

double NNfunction_sb_uLcR::synapse0x2905390() {
   return (neuron0x28e67e0()*-0.0259374);
}

double NNfunction_sb_uLcR::synapse0x29053d0() {
   return (neuron0x28e6b20()*0.00194657);
}

double NNfunction_sb_uLcR::synapse0x2905410() {
   return (neuron0x28e6e60()*-0.0164864);
}

double NNfunction_sb_uLcR::synapse0x2905790() {
   return (neuron0x28e2210()*0.284099);
}

double NNfunction_sb_uLcR::synapse0x29057d0() {
   return (neuron0x28e24c0()*-0.319804);
}

double NNfunction_sb_uLcR::synapse0x2905810() {
   return (neuron0x28e2800()*-0.146075);
}

double NNfunction_sb_uLcR::synapse0x2905850() {
   return (neuron0x28e2b40()*-0.505457);
}

double NNfunction_sb_uLcR::synapse0x2905890() {
   return (neuron0x28e2e80()*0.266604);
}

double NNfunction_sb_uLcR::synapse0x29058d0() {
   return (neuron0x28e31c0()*-0.167115);
}

double NNfunction_sb_uLcR::synapse0x2905910() {
   return (neuron0x28e3500()*-0.385145);
}

double NNfunction_sb_uLcR::synapse0x2905950() {
   return (neuron0x28e3840()*0.33806);
}

double NNfunction_sb_uLcR::synapse0x2905990() {
   return (neuron0x28e3b80()*0.428971);
}

double NNfunction_sb_uLcR::synapse0x29059d0() {
   return (neuron0x28e3ec0()*-0.427992);
}

double NNfunction_sb_uLcR::synapse0x2905a10() {
   return (neuron0x28e4200()*-0.0335152);
}

double NNfunction_sb_uLcR::synapse0x2905a50() {
   return (neuron0x28e4540()*-0.319964);
}

double NNfunction_sb_uLcR::synapse0x2905a90() {
   return (neuron0x28e4880()*-0.391612);
}

double NNfunction_sb_uLcR::synapse0x2905ad0() {
   return (neuron0x28e4bc0()*0.237013);
}

double NNfunction_sb_uLcR::synapse0x2905b10() {
   return (neuron0x28e4f00()*-0.674506);
}

double NNfunction_sb_uLcR::synapse0x2905b50() {
   return (neuron0x28e5240()*-0.047034);
}

double NNfunction_sb_uLcR::synapse0x29055e0() {
   return (neuron0x28e5580()*0.109611);
}

double NNfunction_sb_uLcR::synapse0x2905620() {
   return (neuron0x28e5ae0()*-0.429699);
}

double NNfunction_sb_uLcR::synapse0x2905ca0() {
   return (neuron0x28e5e20()*-0.100939);
}

double NNfunction_sb_uLcR::synapse0x2905ce0() {
   return (neuron0x28e6160()*0.686385);
}

double NNfunction_sb_uLcR::synapse0x2905d20() {
   return (neuron0x28e64a0()*0.00716012);
}

double NNfunction_sb_uLcR::synapse0x2905d60() {
   return (neuron0x28e67e0()*0.056901);
}

double NNfunction_sb_uLcR::synapse0x2905da0() {
   return (neuron0x28e6b20()*0.00520913);
}

double NNfunction_sb_uLcR::synapse0x2905de0() {
   return (neuron0x28e6e60()*0.488505);
}

double NNfunction_sb_uLcR::synapse0x2906160() {
   return (neuron0x28e2210()*-0.441499);
}

double NNfunction_sb_uLcR::synapse0x29061a0() {
   return (neuron0x28e24c0()*-0.832572);
}

double NNfunction_sb_uLcR::synapse0x29061e0() {
   return (neuron0x28e2800()*-0.414384);
}

double NNfunction_sb_uLcR::synapse0x2906220() {
   return (neuron0x28e2b40()*-0.754158);
}

double NNfunction_sb_uLcR::synapse0x2906260() {
   return (neuron0x28e2e80()*0.406609);
}

double NNfunction_sb_uLcR::synapse0x29062a0() {
   return (neuron0x28e31c0()*0.263268);
}

double NNfunction_sb_uLcR::synapse0x29062e0() {
   return (neuron0x28e3500()*-0.0835396);
}

double NNfunction_sb_uLcR::synapse0x2906320() {
   return (neuron0x28e3840()*0.358061);
}

double NNfunction_sb_uLcR::synapse0x2906360() {
   return (neuron0x28e3b80()*-0.111489);
}

double NNfunction_sb_uLcR::synapse0x29063a0() {
   return (neuron0x28e3ec0()*0.0936487);
}

double NNfunction_sb_uLcR::synapse0x29063e0() {
   return (neuron0x28e4200()*-0.0152352);
}

double NNfunction_sb_uLcR::synapse0x2906420() {
   return (neuron0x28e4540()*-0.320787);
}

double NNfunction_sb_uLcR::synapse0x2906460() {
   return (neuron0x28e4880()*0.914017);
}

double NNfunction_sb_uLcR::synapse0x29064a0() {
   return (neuron0x28e4bc0()*0.191404);
}

double NNfunction_sb_uLcR::synapse0x29064e0() {
   return (neuron0x28e4f00()*-0.0268032);
}

double NNfunction_sb_uLcR::synapse0x2906520() {
   return (neuron0x28e5240()*-0.771782);
}

double NNfunction_sb_uLcR::synapse0x2905fb0() {
   return (neuron0x28e5580()*0.123775);
}

double NNfunction_sb_uLcR::synapse0x2905ff0() {
   return (neuron0x28e5ae0()*0.390807);
}

double NNfunction_sb_uLcR::synapse0x28f6b20() {
   return (neuron0x28e5e20()*0.0608219);
}

double NNfunction_sb_uLcR::synapse0x28f6b60() {
   return (neuron0x28e6160()*-0.0195675);
}

double NNfunction_sb_uLcR::synapse0x28f6ba0() {
   return (neuron0x28e64a0()*-0.360438);
}

double NNfunction_sb_uLcR::synapse0x28f6be0() {
   return (neuron0x28e67e0()*0.369271);
}

double NNfunction_sb_uLcR::synapse0x28f6c20() {
   return (neuron0x28e6b20()*-0.0653691);
}

double NNfunction_sb_uLcR::synapse0x28f6c60() {
   return (neuron0x28e6e60()*0.0505975);
}

double NNfunction_sb_uLcR::synapse0x28f6fe0() {
   return (neuron0x28e2210()*0.000864622);
}

double NNfunction_sb_uLcR::synapse0x28f7020() {
   return (neuron0x28e24c0()*-0.067995);
}

double NNfunction_sb_uLcR::synapse0x28f7060() {
   return (neuron0x28e2800()*1.19593);
}

double NNfunction_sb_uLcR::synapse0x28f70a0() {
   return (neuron0x28e2b40()*0.0573415);
}

double NNfunction_sb_uLcR::synapse0x28f70e0() {
   return (neuron0x28e2e80()*0.0307557);
}

double NNfunction_sb_uLcR::synapse0x28f7120() {
   return (neuron0x28e31c0()*-0.0195846);
}

double NNfunction_sb_uLcR::synapse0x28f7160() {
   return (neuron0x28e3500()*0.068728);
}

double NNfunction_sb_uLcR::synapse0x28f71a0() {
   return (neuron0x28e3840()*0.041411);
}

double NNfunction_sb_uLcR::synapse0x28f71e0() {
   return (neuron0x28e3b80()*0.0189392);
}

double NNfunction_sb_uLcR::synapse0x28f7220() {
   return (neuron0x28e3ec0()*0.0191198);
}

double NNfunction_sb_uLcR::synapse0x28f7260() {
   return (neuron0x28e4200()*-0.00508087);
}

double NNfunction_sb_uLcR::synapse0x28f72a0() {
   return (neuron0x28e4540()*-0.468623);
}

double NNfunction_sb_uLcR::synapse0x28f72e0() {
   return (neuron0x28e4880()*0.05388);
}

double NNfunction_sb_uLcR::synapse0x28f7320() {
   return (neuron0x28e4bc0()*0.0404446);
}

double NNfunction_sb_uLcR::synapse0x28f7360() {
   return (neuron0x28e4f00()*-0.0485262);
}

double NNfunction_sb_uLcR::synapse0x28f73a0() {
   return (neuron0x28e5240()*0.159395);
}

double NNfunction_sb_uLcR::synapse0x28f6e30() {
   return (neuron0x28e5580()*0.0494473);
}

double NNfunction_sb_uLcR::synapse0x28f6e70() {
   return (neuron0x28e5ae0()*-0.0154985);
}

double NNfunction_sb_uLcR::synapse0x28f74f0() {
   return (neuron0x28e5e20()*-0.0027614);
}

double NNfunction_sb_uLcR::synapse0x28f7530() {
   return (neuron0x28e6160()*-0.0819742);
}

double NNfunction_sb_uLcR::synapse0x28f7570() {
   return (neuron0x28e64a0()*-0.0263375);
}

double NNfunction_sb_uLcR::synapse0x28f75b0() {
   return (neuron0x28e67e0()*0.0226438);
}

double NNfunction_sb_uLcR::synapse0x28f75f0() {
   return (neuron0x28e6b20()*0.051859);
}

double NNfunction_sb_uLcR::synapse0x28f7630() {
   return (neuron0x28e6e60()*-0.0103183);
}

double NNfunction_sb_uLcR::synapse0x28f79b0() {
   return (neuron0x28e2210()*0.0115404);
}

double NNfunction_sb_uLcR::synapse0x28f79f0() {
   return (neuron0x28e24c0()*0.00987097);
}

double NNfunction_sb_uLcR::synapse0x28f7a30() {
   return (neuron0x28e2800()*0.0622035);
}

double NNfunction_sb_uLcR::synapse0x28f7a70() {
   return (neuron0x28e2b40()*-0.31551);
}

double NNfunction_sb_uLcR::synapse0x28f7ab0() {
   return (neuron0x28e2e80()*0.0616914);
}

double NNfunction_sb_uLcR::synapse0x28f7af0() {
   return (neuron0x28e31c0()*-0.0307031);
}

double NNfunction_sb_uLcR::synapse0x28f7b30() {
   return (neuron0x28e3500()*0.195852);
}

double NNfunction_sb_uLcR::synapse0x28f7b70() {
   return (neuron0x28e3840()*0.0791323);
}

double NNfunction_sb_uLcR::synapse0x28f7bb0() {
   return (neuron0x28e3b80()*0.0540487);
}

double NNfunction_sb_uLcR::synapse0x28f7bf0() {
   return (neuron0x28e3ec0()*-0.0251194);
}

double NNfunction_sb_uLcR::synapse0x28f7c30() {
   return (neuron0x28e4200()*-0.00628793);
}

double NNfunction_sb_uLcR::synapse0x28f7c70() {
   return (neuron0x28e4540()*0.0847121);
}

double NNfunction_sb_uLcR::synapse0x28f7cb0() {
   return (neuron0x28e4880()*0.0189821);
}

double NNfunction_sb_uLcR::synapse0x28f7cf0() {
   return (neuron0x28e4bc0()*0.0384847);
}

double NNfunction_sb_uLcR::synapse0x28f7d30() {
   return (neuron0x28e4f00()*-0.0378255);
}

double NNfunction_sb_uLcR::synapse0x28f7d70() {
   return (neuron0x28e5240()*-0.107479);
}

double NNfunction_sb_uLcR::synapse0x28f7800() {
   return (neuron0x28e5580()*0.0162335);
}

double NNfunction_sb_uLcR::synapse0x28f7840() {
   return (neuron0x28e5ae0()*0.0333637);
}

double NNfunction_sb_uLcR::synapse0x28f7ec0() {
   return (neuron0x28e5e20()*0.0817494);
}

double NNfunction_sb_uLcR::synapse0x28f7f00() {
   return (neuron0x28e6160()*0.030411);
}

double NNfunction_sb_uLcR::synapse0x28f7f40() {
   return (neuron0x28e64a0()*0.0671575);
}

double NNfunction_sb_uLcR::synapse0x28f7f80() {
   return (neuron0x28e67e0()*-0.019949);
}

double NNfunction_sb_uLcR::synapse0x28f7fc0() {
   return (neuron0x28e6b20()*-0.025835);
}

double NNfunction_sb_uLcR::synapse0x28f8000() {
   return (neuron0x28e6e60()*-0.0163077);
}

double NNfunction_sb_uLcR::synapse0x28f8380() {
   return (neuron0x28e2210()*-0.0446403);
}

double NNfunction_sb_uLcR::synapse0x28f83c0() {
   return (neuron0x28e24c0()*-0.42184);
}

double NNfunction_sb_uLcR::synapse0x28f8400() {
   return (neuron0x28e2800()*-0.622733);
}

double NNfunction_sb_uLcR::synapse0x28f8440() {
   return (neuron0x28e2b40()*-0.567119);
}

double NNfunction_sb_uLcR::synapse0x28f8480() {
   return (neuron0x28e2e80()*0.067741);
}

double NNfunction_sb_uLcR::synapse0x28f84c0() {
   return (neuron0x28e31c0()*-0.470671);
}

double NNfunction_sb_uLcR::synapse0x28f8500() {
   return (neuron0x28e3500()*0.246845);
}

double NNfunction_sb_uLcR::synapse0x28f8540() {
   return (neuron0x28e3840()*0.246112);
}

double NNfunction_sb_uLcR::synapse0x28f8580() {
   return (neuron0x28e3b80()*-0.0436631);
}

double NNfunction_sb_uLcR::synapse0x28f85c0() {
   return (neuron0x28e3ec0()*0.164692);
}

double NNfunction_sb_uLcR::synapse0x28f8600() {
   return (neuron0x28e4200()*0.165357);
}

double NNfunction_sb_uLcR::synapse0x28f8640() {
   return (neuron0x28e4540()*-0.687816);
}

double NNfunction_sb_uLcR::synapse0x28f8680() {
   return (neuron0x28e4880()*0.258872);
}

double NNfunction_sb_uLcR::synapse0x28f86c0() {
   return (neuron0x28e4bc0()*-0.165275);
}

double NNfunction_sb_uLcR::synapse0x28f8700() {
   return (neuron0x28e4f00()*-0.0860705);
}

double NNfunction_sb_uLcR::synapse0x28f8740() {
   return (neuron0x28e5240()*0.0877807);
}

double NNfunction_sb_uLcR::synapse0x28f81d0() {
   return (neuron0x28e5580()*-0.200369);
}

double NNfunction_sb_uLcR::synapse0x28f8210() {
   return (neuron0x28e5ae0()*-0.00199639);
}

double NNfunction_sb_uLcR::synapse0x28f8890() {
   return (neuron0x28e5e20()*-0.586936);
}

double NNfunction_sb_uLcR::synapse0x28f88d0() {
   return (neuron0x28e6160()*-0.384206);
}

double NNfunction_sb_uLcR::synapse0x28f8910() {
   return (neuron0x28e64a0()*-0.0721937);
}

double NNfunction_sb_uLcR::synapse0x28f8950() {
   return (neuron0x28e67e0()*0.0844685);
}

double NNfunction_sb_uLcR::synapse0x28f8990() {
   return (neuron0x28e6b20()*0.0844565);
}

double NNfunction_sb_uLcR::synapse0x28f89d0() {
   return (neuron0x28e6e60()*-0.0796984);
}

double NNfunction_sb_uLcR::synapse0x290a8a0() {
   return (neuron0x28e2210()*-0.0110874);
}

double NNfunction_sb_uLcR::synapse0x290a8e0() {
   return (neuron0x28e24c0()*-0.178503);
}

double NNfunction_sb_uLcR::synapse0x290a920() {
   return (neuron0x28e2800()*0.266743);
}

double NNfunction_sb_uLcR::synapse0x290a960() {
   return (neuron0x28e2b40()*-0.715652);
}

double NNfunction_sb_uLcR::synapse0x290a9a0() {
   return (neuron0x28e2e80()*-0.203859);
}

double NNfunction_sb_uLcR::synapse0x290a9e0() {
   return (neuron0x28e31c0()*0.160185);
}

double NNfunction_sb_uLcR::synapse0x290aa20() {
   return (neuron0x28e3500()*-0.179268);
}

double NNfunction_sb_uLcR::synapse0x290aa60() {
   return (neuron0x28e3840()*-0.0459523);
}

double NNfunction_sb_uLcR::synapse0x290aaa0() {
   return (neuron0x28e3b80()*-0.364494);
}

double NNfunction_sb_uLcR::synapse0x290aae0() {
   return (neuron0x28e3ec0()*0.218598);
}

double NNfunction_sb_uLcR::synapse0x290ab20() {
   return (neuron0x28e4200()*0.115528);
}

double NNfunction_sb_uLcR::synapse0x290ab60() {
   return (neuron0x28e4540()*0.566802);
}

double NNfunction_sb_uLcR::synapse0x290aba0() {
   return (neuron0x28e4880()*0.0622808);
}

double NNfunction_sb_uLcR::synapse0x290abe0() {
   return (neuron0x28e4bc0()*0.127427);
}

double NNfunction_sb_uLcR::synapse0x290ac20() {
   return (neuron0x28e4f00()*-0.0558937);
}

double NNfunction_sb_uLcR::synapse0x290ac60() {
   return (neuron0x28e5240()*-0.300383);
}

double NNfunction_sb_uLcR::synapse0x28f8a10() {
   return (neuron0x28e5580()*-0.0711731);
}

double NNfunction_sb_uLcR::synapse0x28f8a50() {
   return (neuron0x28e5ae0()*0.072998);
}

double NNfunction_sb_uLcR::synapse0x290adb0() {
   return (neuron0x28e5e20()*0.027644);
}

double NNfunction_sb_uLcR::synapse0x290adf0() {
   return (neuron0x28e6160()*0.162989);
}

double NNfunction_sb_uLcR::synapse0x290ae30() {
   return (neuron0x28e64a0()*-0.262396);
}

double NNfunction_sb_uLcR::synapse0x290ae70() {
   return (neuron0x28e67e0()*0.257478);
}

double NNfunction_sb_uLcR::synapse0x290aeb0() {
   return (neuron0x28e6b20()*0.000793467);
}

double NNfunction_sb_uLcR::synapse0x290aef0() {
   return (neuron0x28e6e60()*-0.133873);
}

double NNfunction_sb_uLcR::synapse0x290b270() {
   return (neuron0x28e2210()*0.198472);
}

double NNfunction_sb_uLcR::synapse0x290b2b0() {
   return (neuron0x28e24c0()*0.332673);
}

double NNfunction_sb_uLcR::synapse0x290b2f0() {
   return (neuron0x28e2800()*-0.615837);
}

double NNfunction_sb_uLcR::synapse0x290b330() {
   return (neuron0x28e2b40()*0.149045);
}

double NNfunction_sb_uLcR::synapse0x290b370() {
   return (neuron0x28e2e80()*-0.369893);
}

double NNfunction_sb_uLcR::synapse0x290b3b0() {
   return (neuron0x28e31c0()*-0.776705);
}

double NNfunction_sb_uLcR::synapse0x290b3f0() {
   return (neuron0x28e3500()*0.61252);
}

double NNfunction_sb_uLcR::synapse0x290b430() {
   return (neuron0x28e3840()*-0.303467);
}

double NNfunction_sb_uLcR::synapse0x290b470() {
   return (neuron0x28e3b80()*-0.335469);
}

double NNfunction_sb_uLcR::synapse0x290b4b0() {
   return (neuron0x28e3ec0()*-0.466007);
}

double NNfunction_sb_uLcR::synapse0x290b4f0() {
   return (neuron0x28e4200()*-0.658316);
}

double NNfunction_sb_uLcR::synapse0x290b530() {
   return (neuron0x28e4540()*0.410521);
}

double NNfunction_sb_uLcR::synapse0x290b570() {
   return (neuron0x28e4880()*-0.3793);
}

double NNfunction_sb_uLcR::synapse0x290b5b0() {
   return (neuron0x28e4bc0()*-0.327344);
}

double NNfunction_sb_uLcR::synapse0x290b5f0() {
   return (neuron0x28e4f00()*0.0432687);
}

double NNfunction_sb_uLcR::synapse0x290b630() {
   return (neuron0x28e5240()*-0.259166);
}

double NNfunction_sb_uLcR::synapse0x290b0c0() {
   return (neuron0x28e5580()*-0.634377);
}

double NNfunction_sb_uLcR::synapse0x290b100() {
   return (neuron0x28e5ae0()*-0.64069);
}

double NNfunction_sb_uLcR::synapse0x290b780() {
   return (neuron0x28e5e20()*0.0379813);
}

double NNfunction_sb_uLcR::synapse0x290b7c0() {
   return (neuron0x28e6160()*0.183188);
}

double NNfunction_sb_uLcR::synapse0x290b800() {
   return (neuron0x28e64a0()*0.249204);
}

double NNfunction_sb_uLcR::synapse0x290b840() {
   return (neuron0x28e67e0()*-0.556761);
}

double NNfunction_sb_uLcR::synapse0x290b880() {
   return (neuron0x28e6b20()*-0.50748);
}

double NNfunction_sb_uLcR::synapse0x290b8c0() {
   return (neuron0x28e6e60()*0.00548273);
}

double NNfunction_sb_uLcR::synapse0x290bc40() {
   return (neuron0x28e2210()*0.257412);
}

double NNfunction_sb_uLcR::synapse0x290bc80() {
   return (neuron0x28e24c0()*-0.457288);
}

double NNfunction_sb_uLcR::synapse0x290bcc0() {
   return (neuron0x28e2800()*-0.87668);
}

double NNfunction_sb_uLcR::synapse0x290bd00() {
   return (neuron0x28e2b40()*0.380215);
}

double NNfunction_sb_uLcR::synapse0x290bd40() {
   return (neuron0x28e2e80()*0.706658);
}

double NNfunction_sb_uLcR::synapse0x290bd80() {
   return (neuron0x28e31c0()*-0.242678);
}

double NNfunction_sb_uLcR::synapse0x290bdc0() {
   return (neuron0x28e3500()*0.303774);
}

double NNfunction_sb_uLcR::synapse0x290be00() {
   return (neuron0x28e3840()*0.378427);
}

double NNfunction_sb_uLcR::synapse0x290be40() {
   return (neuron0x28e3b80()*0.270432);
}

double NNfunction_sb_uLcR::synapse0x290be80() {
   return (neuron0x28e3ec0()*-0.491467);
}

double NNfunction_sb_uLcR::synapse0x290bec0() {
   return (neuron0x28e4200()*-0.114261);
}

double NNfunction_sb_uLcR::synapse0x290bf00() {
   return (neuron0x28e4540()*-0.0416202);
}

double NNfunction_sb_uLcR::synapse0x290bf40() {
   return (neuron0x28e4880()*0.324622);
}

double NNfunction_sb_uLcR::synapse0x290bf80() {
   return (neuron0x28e4bc0()*-0.330939);
}

double NNfunction_sb_uLcR::synapse0x290bfc0() {
   return (neuron0x28e4f00()*-0.0510218);
}

double NNfunction_sb_uLcR::synapse0x290c000() {
   return (neuron0x28e5240()*-0.542618);
}

double NNfunction_sb_uLcR::synapse0x290ba90() {
   return (neuron0x28e5580()*0.00612104);
}

double NNfunction_sb_uLcR::synapse0x290bad0() {
   return (neuron0x28e5ae0()*0.4165);
}

double NNfunction_sb_uLcR::synapse0x290c150() {
   return (neuron0x28e5e20()*-0.621969);
}

double NNfunction_sb_uLcR::synapse0x290c190() {
   return (neuron0x28e6160()*-0.0824082);
}

double NNfunction_sb_uLcR::synapse0x290c1d0() {
   return (neuron0x28e64a0()*0.715202);
}

double NNfunction_sb_uLcR::synapse0x290c210() {
   return (neuron0x28e67e0()*-0.104549);
}

double NNfunction_sb_uLcR::synapse0x290c250() {
   return (neuron0x28e6b20()*0.503587);
}

double NNfunction_sb_uLcR::synapse0x290c290() {
   return (neuron0x28e6e60()*0.248115);
}

double NNfunction_sb_uLcR::synapse0x290c610() {
   return (neuron0x28e2210()*0.079064);
}

double NNfunction_sb_uLcR::synapse0x290c650() {
   return (neuron0x28e24c0()*0.659668);
}

double NNfunction_sb_uLcR::synapse0x290c690() {
   return (neuron0x28e2800()*0.0492894);
}

double NNfunction_sb_uLcR::synapse0x290c6d0() {
   return (neuron0x28e2b40()*-0.348027);
}

double NNfunction_sb_uLcR::synapse0x290c710() {
   return (neuron0x28e2e80()*0.136209);
}

double NNfunction_sb_uLcR::synapse0x290c750() {
   return (neuron0x28e31c0()*0.232555);
}

double NNfunction_sb_uLcR::synapse0x290c790() {
   return (neuron0x28e3500()*0.00353103);
}

double NNfunction_sb_uLcR::synapse0x290c7d0() {
   return (neuron0x28e3840()*-0.204043);
}

double NNfunction_sb_uLcR::synapse0x290c810() {
   return (neuron0x28e3b80()*-0.406162);
}

double NNfunction_sb_uLcR::synapse0x290c850() {
   return (neuron0x28e3ec0()*-0.277389);
}

double NNfunction_sb_uLcR::synapse0x290c890() {
   return (neuron0x28e4200()*-1.0207);
}

double NNfunction_sb_uLcR::synapse0x290c8d0() {
   return (neuron0x28e4540()*0.0949128);
}

double NNfunction_sb_uLcR::synapse0x290c910() {
   return (neuron0x28e4880()*0.0235176);
}

double NNfunction_sb_uLcR::synapse0x290c950() {
   return (neuron0x28e4bc0()*-0.100382);
}

double NNfunction_sb_uLcR::synapse0x290c990() {
   return (neuron0x28e4f00()*-0.0404313);
}

double NNfunction_sb_uLcR::synapse0x290c9d0() {
   return (neuron0x28e5240()*0.300919);
}

double NNfunction_sb_uLcR::synapse0x290c460() {
   return (neuron0x28e5580()*-0.127835);
}

double NNfunction_sb_uLcR::synapse0x290c4a0() {
   return (neuron0x28e5ae0()*0.297797);
}

double NNfunction_sb_uLcR::synapse0x290cb20() {
   return (neuron0x28e5e20()*-0.0993337);
}

double NNfunction_sb_uLcR::synapse0x290cb60() {
   return (neuron0x28e6160()*-0.107685);
}

double NNfunction_sb_uLcR::synapse0x290cba0() {
   return (neuron0x28e64a0()*-0.0829001);
}

double NNfunction_sb_uLcR::synapse0x290cbe0() {
   return (neuron0x28e67e0()*-0.0338798);
}

double NNfunction_sb_uLcR::synapse0x290cc20() {
   return (neuron0x28e6b20()*-0.190505);
}

double NNfunction_sb_uLcR::synapse0x290cc60() {
   return (neuron0x28e6e60()*-0.230128);
}

double NNfunction_sb_uLcR::synapse0x28e8120() {
   return (neuron0x28e72d0()*0.140406);
}

double NNfunction_sb_uLcR::synapse0x28e8160() {
   return (neuron0x28e7b10()*-0.1184);
}

double NNfunction_sb_uLcR::synapse0x28e9640() {
   return (neuron0x28e85f0()*-0.0349247);
}

double NNfunction_sb_uLcR::synapse0x28e9680() {
   return (neuron0x26ac9e0()*0.0528056);
}

double NNfunction_sb_uLcR::synapse0x28eb0e0() {
   return (neuron0x28e9390()*0.0128785);
}

double NNfunction_sb_uLcR::synapse0x28eb120() {
   return (neuron0x28eae30()*0.957317);
}

double NNfunction_sb_uLcR::synapse0x28ebeb0() {
   return (neuron0x28ebc00()*-0.167752);
}

double NNfunction_sb_uLcR::synapse0x28ebef0() {
   return (neuron0x28ec5d0()*-0.957251);
}

double NNfunction_sb_uLcR::synapse0x28ec880() {
   return (neuron0x28ecfa0()*0.921141);
}

double NNfunction_sb_uLcR::synapse0x28ec8c0() {
   return (neuron0x28eda80()*0.348167);
}

double NNfunction_sb_uLcR::synapse0x28ed250() {
   return (neuron0x28ee450()*-0.14648);
}

double NNfunction_sb_uLcR::synapse0x28ed290() {
   return (neuron0x28eb530()*0.202798);
}

double NNfunction_sb_uLcR::synapse0x28edd30() {
   return (neuron0x28f0000()*0.184667);
}

double NNfunction_sb_uLcR::synapse0x28edd70() {
   return (neuron0x28f09d0()*0.13242);
}

double NNfunction_sb_uLcR::synapse0x28ee700() {
   return (neuron0x28f13a0()*-0.0937774);
}

double NNfunction_sb_uLcR::synapse0x28ee740() {
   return (neuron0x28f1d70()*-0.334375);
}

double NNfunction_sb_uLcR::synapse0x28eb7e0() {
   return (neuron0x28f3b80()*0.932045);
}

double NNfunction_sb_uLcR::synapse0x28eb820() {
   return (neuron0x28f3e60()*-0.0644694);
}

double NNfunction_sb_uLcR::synapse0x28f02b0() {
   return (neuron0x28f4830()*0.0936889);
}

double NNfunction_sb_uLcR::synapse0x28f02f0() {
   return (neuron0x28f5200()*-0.0937296);
}

double NNfunction_sb_uLcR::synapse0x28f0c80() {
   return (neuron0x28f5bd0()*-0.0234451);
}

double NNfunction_sb_uLcR::synapse0x28f0cc0() {
   return (neuron0x28f65a0()*-0.0100638);
}

double NNfunction_sb_uLcR::synapse0x28f1650() {
   return (neuron0x28ef0f0()*-0.216265);
}

double NNfunction_sb_uLcR::synapse0x28f1690() {
   return (neuron0x28efac0()*-3.74074);
}

double NNfunction_sb_uLcR::synapse0x28f2020() {
   return (neuron0x28f9330()*0.602427);
}

double NNfunction_sb_uLcR::synapse0x28f2060() {
   return (neuron0x28f9d00()*-0.099198);
}

double NNfunction_sb_uLcR::synapse0x28e5120() {
   return (neuron0x28fa6d0()*0.0677693);
}

double NNfunction_sb_uLcR::synapse0x28e5160() {
   return (neuron0x28fb0a0()*1.67521);
}

double NNfunction_sb_uLcR::synapse0x28f4110() {
   return (neuron0x28fba70()*0.189807);
}

double NNfunction_sb_uLcR::synapse0x28f4150() {
   return (neuron0x28fc440()*0.762687);
}

double NNfunction_sb_uLcR::synapse0x28f4ae0() {
   return (neuron0x28fce10()*1.37207);
}

double NNfunction_sb_uLcR::synapse0x28f4b20() {
   return (neuron0x28fd7e0()*0.189799);
}

double NNfunction_sb_uLcR::synapse0x28f54b0() {
   return (neuron0x28f3870()*-0.287472);
}

double NNfunction_sb_uLcR::synapse0x28f54f0() {
   return (neuron0x29003c0()*0.351699);
}

double NNfunction_sb_uLcR::synapse0x28f5e80() {
   return (neuron0x2900d90()*0.174195);
}

double NNfunction_sb_uLcR::synapse0x28f5ec0() {
   return (neuron0x2901760()*-0.706431);
}

double NNfunction_sb_uLcR::synapse0x28f6850() {
   return (neuron0x2902130()*0.175077);
}

double NNfunction_sb_uLcR::synapse0x28f6890() {
   return (neuron0x2902b00()*-0.0733436);
}

double NNfunction_sb_uLcR::synapse0x28ef3a0() {
   return (neuron0x29034d0()*-0.159202);
}

double NNfunction_sb_uLcR::synapse0x28ef3e0() {
   return (neuron0x2903ea0()*-1.02687);
}

double NNfunction_sb_uLcR::synapse0x28f8c50() {
   return (neuron0x2904870()*1.07599);
}

double NNfunction_sb_uLcR::synapse0x28f8c90() {
   return (neuron0x2905450()*0.0464569);
}

double NNfunction_sb_uLcR::synapse0x28f95e0() {
   return (neuron0x2905e20()*0.275765);
}

double NNfunction_sb_uLcR::synapse0x28f9620() {
   return (neuron0x28f6ca0()*0.782537);
}

double NNfunction_sb_uLcR::synapse0x28f9fb0() {
   return (neuron0x28f7670()*-0.440238);
}

double NNfunction_sb_uLcR::synapse0x28f9ff0() {
   return (neuron0x28f8040()*0.198001);
}

double NNfunction_sb_uLcR::synapse0x28fa980() {
   return (neuron0x290a680()*-0.152672);
}

double NNfunction_sb_uLcR::synapse0x28fa9c0() {
   return (neuron0x290af30()*0.0193701);
}

double NNfunction_sb_uLcR::synapse0x28fb350() {
   return (neuron0x290b900()*0.114953);
}

double NNfunction_sb_uLcR::synapse0x28fb390() {
   return (neuron0x290c2d0()*-0.152993);
}

double NNfunction_sb_uLcR::synapse0x28fda90() {
   return (neuron0x28e72d0()*-0.00307204);
}

double NNfunction_sb_uLcR::synapse0x28fdad0() {
   return (neuron0x28e7b10()*0.0393449);
}

double NNfunction_sb_uLcR::synapse0x28f3050() {
   return (neuron0x28e85f0()*-0.0612397);
}

double NNfunction_sb_uLcR::synapse0x28f3090() {
   return (neuron0x26ac9e0()*0.771632);
}

double NNfunction_sb_uLcR::synapse0x2900670() {
   return (neuron0x28e9390()*-0.148537);
}

double NNfunction_sb_uLcR::synapse0x29006b0() {
   return (neuron0x28eae30()*1.33153);
}

double NNfunction_sb_uLcR::synapse0x2901040() {
   return (neuron0x28ebc00()*0.0407063);
}

double NNfunction_sb_uLcR::synapse0x2901080() {
   return (neuron0x28ec5d0()*0.00634897);
}

double NNfunction_sb_uLcR::synapse0x2901a10() {
   return (neuron0x28ecfa0()*-0.62294);
}

double NNfunction_sb_uLcR::synapse0x2901a50() {
   return (neuron0x28eda80()*-0.0640695);
}

double NNfunction_sb_uLcR::synapse0x29023e0() {
   return (neuron0x28ee450()*0.0219526);
}

double NNfunction_sb_uLcR::synapse0x2902420() {
   return (neuron0x28eb530()*-0.0626401);
}

double NNfunction_sb_uLcR::synapse0x2902db0() {
   return (neuron0x28f0000()*0.669487);
}

double NNfunction_sb_uLcR::synapse0x2902df0() {
   return (neuron0x28f09d0()*-0.0410266);
}

double NNfunction_sb_uLcR::synapse0x2903780() {
   return (neuron0x28f13a0()*0.100691);
}

double NNfunction_sb_uLcR::synapse0x29037c0() {
   return (neuron0x28f1d70()*0.286318);
}

double NNfunction_sb_uLcR::synapse0x2904150() {
   return (neuron0x28f3b80()*-0.857546);
}

double NNfunction_sb_uLcR::synapse0x2904190() {
   return (neuron0x28f3e60()*0.0226071);
}

double NNfunction_sb_uLcR::synapse0x2904b20() {
   return (neuron0x28f4830()*0.0150654);
}

double NNfunction_sb_uLcR::synapse0x2904b60() {
   return (neuron0x28f5200()*0.0400378);
}

double NNfunction_sb_uLcR::synapse0x2905700() {
   return (neuron0x28f5bd0()*0.0849009);
}

double NNfunction_sb_uLcR::synapse0x2905740() {
   return (neuron0x28f65a0()*0.013274);
}

double NNfunction_sb_uLcR::synapse0x29060d0() {
   return (neuron0x28ef0f0()*0.0559106);
}

double NNfunction_sb_uLcR::synapse0x2906110() {
   return (neuron0x28efac0()*-0.204447);
}

double NNfunction_sb_uLcR::synapse0x28f6f50() {
   return (neuron0x28f9330()*-0.0697896);
}

double NNfunction_sb_uLcR::synapse0x28f6f90() {
   return (neuron0x28f9d00()*0.0469191);
}

double NNfunction_sb_uLcR::synapse0x28f7920() {
   return (neuron0x28fa6d0()*-0.0134425);
}

double NNfunction_sb_uLcR::synapse0x28f7960() {
   return (neuron0x28fb0a0()*-0.766889);
}

double NNfunction_sb_uLcR::synapse0x28f82f0() {
   return (neuron0x28fba70()*0.0922367);
}

double NNfunction_sb_uLcR::synapse0x28f8330() {
   return (neuron0x28fc440()*-0.285567);
}

double NNfunction_sb_uLcR::synapse0x290a810() {
   return (neuron0x28fce10()*-0.815992);
}

double NNfunction_sb_uLcR::synapse0x290a850() {
   return (neuron0x28fd7e0()*0.369848);
}

double NNfunction_sb_uLcR::synapse0x290b1e0() {
   return (neuron0x28f3870()*0.0440921);
}

double NNfunction_sb_uLcR::synapse0x290b220() {
   return (neuron0x29003c0()*-0.071223);
}

double NNfunction_sb_uLcR::synapse0x290bbb0() {
   return (neuron0x2900d90()*-0.0558742);
}

double NNfunction_sb_uLcR::synapse0x290bbf0() {
   return (neuron0x2901760()*-0.679609);
}

double NNfunction_sb_uLcR::synapse0x290c580() {
   return (neuron0x2902130()*-0.0593902);
}

double NNfunction_sb_uLcR::synapse0x290c5c0() {
   return (neuron0x2902b00()*0.0282863);
}

double NNfunction_sb_uLcR::synapse0x28e7580() {
   return (neuron0x29034d0()*0.0435973);
}

double NNfunction_sb_uLcR::synapse0x28e75c0() {
   return (neuron0x2903ea0()*-0.0271464);
}

double NNfunction_sb_uLcR::synapse0x28fbd20() {
   return (neuron0x2904870()*-0.379364);
}

double NNfunction_sb_uLcR::synapse0x28fbd60() {
   return (neuron0x2905450()*0.00650115);
}

double NNfunction_sb_uLcR::synapse0x290cca0() {
   return (neuron0x2905e20()*-0.0694963);
}

double NNfunction_sb_uLcR::synapse0x290cce0() {
   return (neuron0x28f6ca0()*-0.284345);
}

double NNfunction_sb_uLcR::synapse0x290cd20() {
   return (neuron0x28f7670()*0.451088);
}

double NNfunction_sb_uLcR::synapse0x290cd60() {
   return (neuron0x28f8040()*-0.0563704);
}

double NNfunction_sb_uLcR::synapse0x2913c10() {
   return (neuron0x290a680()*0.0716718);
}

double NNfunction_sb_uLcR::synapse0x2913c50() {
   return (neuron0x290af30()*-0.0182187);
}

double NNfunction_sb_uLcR::synapse0x2913c90() {
   return (neuron0x290b900()*-0.0026135);
}

double NNfunction_sb_uLcR::synapse0x2913cd0() {
   return (neuron0x290c2d0()*0.0652522);
}

double NNfunction_sb_uLcR::synapse0x2914050() {
   return (neuron0x28e72d0()*0.631127);
}

double NNfunction_sb_uLcR::synapse0x2914090() {
   return (neuron0x28e7b10()*-0.161487);
}

double NNfunction_sb_uLcR::synapse0x29140d0() {
   return (neuron0x28e85f0()*0.581654);
}

double NNfunction_sb_uLcR::synapse0x2914110() {
   return (neuron0x26ac9e0()*1.56889);
}

double NNfunction_sb_uLcR::synapse0x2914150() {
   return (neuron0x28e9390()*1.1817);
}

double NNfunction_sb_uLcR::synapse0x2914190() {
   return (neuron0x28eae30()*-0.143714);
}

double NNfunction_sb_uLcR::synapse0x29141d0() {
   return (neuron0x28ebc00()*-0.276924);
}

double NNfunction_sb_uLcR::synapse0x2914210() {
   return (neuron0x28ec5d0()*-0.595366);
}

double NNfunction_sb_uLcR::synapse0x2914250() {
   return (neuron0x28ecfa0()*1.76546);
}

double NNfunction_sb_uLcR::synapse0x2914290() {
   return (neuron0x28eda80()*0.365555);
}

double NNfunction_sb_uLcR::synapse0x29142d0() {
   return (neuron0x28ee450()*-0.370157);
}

double NNfunction_sb_uLcR::synapse0x2914310() {
   return (neuron0x28eb530()*0.488146);
}

double NNfunction_sb_uLcR::synapse0x2914350() {
   return (neuron0x28f0000()*3.70752);
}

double NNfunction_sb_uLcR::synapse0x2914390() {
   return (neuron0x28f09d0()*0.353032);
}

double NNfunction_sb_uLcR::synapse0x29143d0() {
   return (neuron0x28f13a0()*-0.331076);
}

double NNfunction_sb_uLcR::synapse0x2914410() {
   return (neuron0x28f1d70()*-0.576149);
}

double NNfunction_sb_uLcR::synapse0x2913ea0() {
   return (neuron0x28f3b80()*1.53647);
}

double NNfunction_sb_uLcR::synapse0x2913ee0() {
   return (neuron0x28f3e60()*-0.79775);
}

double NNfunction_sb_uLcR::synapse0x2914560() {
   return (neuron0x28f4830()*0.122885);
}

double NNfunction_sb_uLcR::synapse0x29145a0() {
   return (neuron0x28f5200()*-0.406196);
}

double NNfunction_sb_uLcR::synapse0x29145e0() {
   return (neuron0x28f5bd0()*-3.39557);
}

double NNfunction_sb_uLcR::synapse0x2914620() {
   return (neuron0x28f65a0()*0.0642388);
}

double NNfunction_sb_uLcR::synapse0x2914660() {
   return (neuron0x28ef0f0()*-1.01574);
}

double NNfunction_sb_uLcR::synapse0x29146a0() {
   return (neuron0x28efac0()*-3.06329);
}

double NNfunction_sb_uLcR::synapse0x29146e0() {
   return (neuron0x28f9330()*-2.34914);
}

double NNfunction_sb_uLcR::synapse0x2914720() {
   return (neuron0x28f9d00()*-1.18509);
}

double NNfunction_sb_uLcR::synapse0x2914760() {
   return (neuron0x28fa6d0()*0.197648);
}

double NNfunction_sb_uLcR::synapse0x29147a0() {
   return (neuron0x28fb0a0()*5.15177);
}

double NNfunction_sb_uLcR::synapse0x29147e0() {
   return (neuron0x28fba70()*-3.44744);
}

double NNfunction_sb_uLcR::synapse0x2914820() {
   return (neuron0x28fc440()*1.28824);
}

double NNfunction_sb_uLcR::synapse0x2914860() {
   return (neuron0x28fce10()*0.93276);
}

double NNfunction_sb_uLcR::synapse0x29148a0() {
   return (neuron0x28fd7e0()*1.88326);
}

double NNfunction_sb_uLcR::synapse0x2914450() {
   return (neuron0x28f3870()*-0.255016);
}

double NNfunction_sb_uLcR::synapse0x2914490() {
   return (neuron0x29003c0()*0.572081);
}

double NNfunction_sb_uLcR::synapse0x29144d0() {
   return (neuron0x2900d90()*0.476524);
}

double NNfunction_sb_uLcR::synapse0x2914510() {
   return (neuron0x2901760()*-1.81351);
}

double NNfunction_sb_uLcR::synapse0x2914af0() {
   return (neuron0x2902130()*0.683726);
}

double NNfunction_sb_uLcR::synapse0x2914b30() {
   return (neuron0x2902b00()*-0.386304);
}

double NNfunction_sb_uLcR::synapse0x2914b70() {
   return (neuron0x29034d0()*-0.184411);
}

double NNfunction_sb_uLcR::synapse0x2914bb0() {
   return (neuron0x2903ea0()*-1.52776);
}

double NNfunction_sb_uLcR::synapse0x2914bf0() {
   return (neuron0x2904870()*1.14896);
}

double NNfunction_sb_uLcR::synapse0x2914c30() {
   return (neuron0x2905450()*-0.0748828);
}

double NNfunction_sb_uLcR::synapse0x2914c70() {
   return (neuron0x2905e20()*0.674635);
}

double NNfunction_sb_uLcR::synapse0x2914cb0() {
   return (neuron0x28f6ca0()*1.21162);
}

double NNfunction_sb_uLcR::synapse0x2914cf0() {
   return (neuron0x28f7670()*-1.555);
}

double NNfunction_sb_uLcR::synapse0x2914d30() {
   return (neuron0x28f8040()*0.515716);
}

double NNfunction_sb_uLcR::synapse0x2914d70() {
   return (neuron0x290a680()*-1.2625);
}

double NNfunction_sb_uLcR::synapse0x2914db0() {
   return (neuron0x290af30()*0.171627);
}

double NNfunction_sb_uLcR::synapse0x2914df0() {
   return (neuron0x290b900()*-0.239683);
}

double NNfunction_sb_uLcR::synapse0x2914e30() {
   return (neuron0x290c2d0()*-0.671076);
}

double NNfunction_sb_uLcR::synapse0x29151b0() {
   return (neuron0x28e72d0()*0.806777);
}

double NNfunction_sb_uLcR::synapse0x29151f0() {
   return (neuron0x28e7b10()*0.652647);
}

double NNfunction_sb_uLcR::synapse0x2915230() {
   return (neuron0x28e85f0()*-0.717512);
}

double NNfunction_sb_uLcR::synapse0x2915270() {
   return (neuron0x26ac9e0()*1.91701);
}

double NNfunction_sb_uLcR::synapse0x29152b0() {
   return (neuron0x28e9390()*-0.407819);
}

double NNfunction_sb_uLcR::synapse0x29152f0() {
   return (neuron0x28eae30()*-0.871124);
}

double NNfunction_sb_uLcR::synapse0x2915330() {
   return (neuron0x28ebc00()*0.790347);
}

double NNfunction_sb_uLcR::synapse0x2915370() {
   return (neuron0x28ec5d0()*-2.83978);
}

double NNfunction_sb_uLcR::synapse0x29153b0() {
   return (neuron0x28ecfa0()*-0.918502);
}

double NNfunction_sb_uLcR::synapse0x29153f0() {
   return (neuron0x28eda80()*-0.626375);
}

double NNfunction_sb_uLcR::synapse0x2915430() {
   return (neuron0x28ee450()*0.900282);
}

double NNfunction_sb_uLcR::synapse0x2915470() {
   return (neuron0x28eb530()*-0.776188);
}

double NNfunction_sb_uLcR::synapse0x29154b0() {
   return (neuron0x28f0000()*-0.326585);
}

double NNfunction_sb_uLcR::synapse0x29154f0() {
   return (neuron0x28f09d0()*-0.640275);
}

double NNfunction_sb_uLcR::synapse0x2915530() {
   return (neuron0x28f13a0()*0.494483);
}

double NNfunction_sb_uLcR::synapse0x2915570() {
   return (neuron0x28f1d70()*-0.210525);
}

double NNfunction_sb_uLcR::synapse0x2915000() {
   return (neuron0x28f3b80()*0.487854);
}

double NNfunction_sb_uLcR::synapse0x2915040() {
   return (neuron0x28f3e60()*-1.06251);
}

double NNfunction_sb_uLcR::synapse0x29156c0() {
   return (neuron0x28f4830()*0.930938);
}

double NNfunction_sb_uLcR::synapse0x2915700() {
   return (neuron0x28f5200()*0.808663);
}

double NNfunction_sb_uLcR::synapse0x2915740() {
   return (neuron0x28f5bd0()*-1.01462);
}

double NNfunction_sb_uLcR::synapse0x2915780() {
   return (neuron0x28f65a0()*0.568714);
}

double NNfunction_sb_uLcR::synapse0x29157c0() {
   return (neuron0x28ef0f0()*-0.65471);
}

double NNfunction_sb_uLcR::synapse0x2915800() {
   return (neuron0x28efac0()*2.13395);
}

double NNfunction_sb_uLcR::synapse0x2915840() {
   return (neuron0x28f9330()*-1.06114);
}

double NNfunction_sb_uLcR::synapse0x2915880() {
   return (neuron0x28f9d00()*0.133205);
}

double NNfunction_sb_uLcR::synapse0x29158c0() {
   return (neuron0x28fa6d0()*0.714393);
}

double NNfunction_sb_uLcR::synapse0x2915900() {
   return (neuron0x28fb0a0()*-3.10347);
}

double NNfunction_sb_uLcR::synapse0x2915940() {
   return (neuron0x28fba70()*-0.957772);
}

double NNfunction_sb_uLcR::synapse0x2915980() {
   return (neuron0x28fc440()*-0.179401);
}

double NNfunction_sb_uLcR::synapse0x29159c0() {
   return (neuron0x28fce10()*0.421749);
}

double NNfunction_sb_uLcR::synapse0x2915a00() {
   return (neuron0x28fd7e0()*1.60988);
}

double NNfunction_sb_uLcR::synapse0x29155b0() {
   return (neuron0x28f3870()*0.764252);
}

double NNfunction_sb_uLcR::synapse0x29155f0() {
   return (neuron0x29003c0()*-1.09553);
}

double NNfunction_sb_uLcR::synapse0x2915630() {
   return (neuron0x2900d90()*-0.702582);
}

double NNfunction_sb_uLcR::synapse0x2915670() {
   return (neuron0x2901760()*-1.86163);
}

double NNfunction_sb_uLcR::synapse0x2915c50() {
   return (neuron0x2902130()*0.675161);
}

double NNfunction_sb_uLcR::synapse0x2915c90() {
   return (neuron0x2902b00()*-0.321829);
}

double NNfunction_sb_uLcR::synapse0x2915cd0() {
   return (neuron0x29034d0()*0.678352);
}

double NNfunction_sb_uLcR::synapse0x2915d10() {
   return (neuron0x2903ea0()*-2.86326);
}

double NNfunction_sb_uLcR::synapse0x2915d50() {
   return (neuron0x2904870()*0.595952);
}

double NNfunction_sb_uLcR::synapse0x2915d90() {
   return (neuron0x2905450()*0.752927);
}

double NNfunction_sb_uLcR::synapse0x2915dd0() {
   return (neuron0x2905e20()*-0.193726);
}

double NNfunction_sb_uLcR::synapse0x2915e10() {
   return (neuron0x28f6ca0()*-0.391542);
}

double NNfunction_sb_uLcR::synapse0x2915e50() {
   return (neuron0x28f7670()*-0.123761);
}

double NNfunction_sb_uLcR::synapse0x2915e90() {
   return (neuron0x28f8040()*0.409329);
}

double NNfunction_sb_uLcR::synapse0x2915ed0() {
   return (neuron0x290a680()*0.124066);
}

double NNfunction_sb_uLcR::synapse0x2915f10() {
   return (neuron0x290af30()*0.554613);
}

double NNfunction_sb_uLcR::synapse0x2915f50() {
   return (neuron0x290b900()*-0.694823);
}

double NNfunction_sb_uLcR::synapse0x2915f90() {
   return (neuron0x290c2d0()*-0.599479);
}

double NNfunction_sb_uLcR::synapse0x2916310() {
   return (neuron0x28e72d0()*0.320837);
}

double NNfunction_sb_uLcR::synapse0x2916350() {
   return (neuron0x28e7b10()*-0.210654);
}

double NNfunction_sb_uLcR::synapse0x2916390() {
   return (neuron0x28e85f0()*0.164912);
}

double NNfunction_sb_uLcR::synapse0x29163d0() {
   return (neuron0x26ac9e0()*-0.178299);
}

double NNfunction_sb_uLcR::synapse0x2916410() {
   return (neuron0x28e9390()*0.00616887);
}

double NNfunction_sb_uLcR::synapse0x2916450() {
   return (neuron0x28eae30()*0.23097);
}

double NNfunction_sb_uLcR::synapse0x2916490() {
   return (neuron0x28ebc00()*-0.279304);
}

double NNfunction_sb_uLcR::synapse0x29164d0() {
   return (neuron0x28ec5d0()*0.347381);
}

double NNfunction_sb_uLcR::synapse0x2916510() {
   return (neuron0x28ecfa0()*0.541078);
}

double NNfunction_sb_uLcR::synapse0x2916550() {
   return (neuron0x28eda80()*0.512914);
}

double NNfunction_sb_uLcR::synapse0x2916590() {
   return (neuron0x28ee450()*-0.27506);
}

double NNfunction_sb_uLcR::synapse0x29165d0() {
   return (neuron0x28eb530()*0.412704);
}

double NNfunction_sb_uLcR::synapse0x2916610() {
   return (neuron0x28f0000()*-0.249369);
}

double NNfunction_sb_uLcR::synapse0x2916650() {
   return (neuron0x28f09d0()*0.249792);
}

double NNfunction_sb_uLcR::synapse0x2916690() {
   return (neuron0x28f13a0()*-0.37138);
}

double NNfunction_sb_uLcR::synapse0x29166d0() {
   return (neuron0x28f1d70()*-0.238128);
}

double NNfunction_sb_uLcR::synapse0x2916160() {
   return (neuron0x28f3b80()*-0.967079);
}

double NNfunction_sb_uLcR::synapse0x29161a0() {
   return (neuron0x28f3e60()*-0.295434);
}

double NNfunction_sb_uLcR::synapse0x2916820() {
   return (neuron0x28f4830()*0.154431);
}

double NNfunction_sb_uLcR::synapse0x2916860() {
   return (neuron0x28f5200()*-0.237499);
}

double NNfunction_sb_uLcR::synapse0x29168a0() {
   return (neuron0x28f5bd0()*-0.400431);
}

double NNfunction_sb_uLcR::synapse0x29168e0() {
   return (neuron0x28f65a0()*-0.00531547);
}

double NNfunction_sb_uLcR::synapse0x2916920() {
   return (neuron0x28ef0f0()*-0.585073);
}

double NNfunction_sb_uLcR::synapse0x2916960() {
   return (neuron0x28efac0()*-0.446649);
}

double NNfunction_sb_uLcR::synapse0x29169a0() {
   return (neuron0x28f9330()*0.178075);
}

double NNfunction_sb_uLcR::synapse0x29169e0() {
   return (neuron0x28f9d00()*-0.415483);
}

double NNfunction_sb_uLcR::synapse0x2916a20() {
   return (neuron0x28fa6d0()*0.130435);
}

double NNfunction_sb_uLcR::synapse0x2916a60() {
   return (neuron0x28fb0a0()*-4.87029);
}

double NNfunction_sb_uLcR::synapse0x2916aa0() {
   return (neuron0x28fba70()*-0.442472);
}

double NNfunction_sb_uLcR::synapse0x2916ae0() {
   return (neuron0x28fc440()*0.47697);
}

double NNfunction_sb_uLcR::synapse0x2916b20() {
   return (neuron0x28fce10()*-0.990832);
}

double NNfunction_sb_uLcR::synapse0x2916b60() {
   return (neuron0x28fd7e0()*-0.0535657);
}

double NNfunction_sb_uLcR::synapse0x2916710() {
   return (neuron0x28f3870()*-0.420477);
}

double NNfunction_sb_uLcR::synapse0x2916750() {
   return (neuron0x29003c0()*0.555917);
}

double NNfunction_sb_uLcR::synapse0x2916790() {
   return (neuron0x2900d90()*0.354845);
}

double NNfunction_sb_uLcR::synapse0x29167d0() {
   return (neuron0x2901760()*1.42746);
}

double NNfunction_sb_uLcR::synapse0x2916db0() {
   return (neuron0x2902130()*0.322004);
}

double NNfunction_sb_uLcR::synapse0x2916df0() {
   return (neuron0x2902b00()*-0.186095);
}

double NNfunction_sb_uLcR::synapse0x2916e30() {
   return (neuron0x29034d0()*-0.237139);
}

double NNfunction_sb_uLcR::synapse0x2916e70() {
   return (neuron0x2903ea0()*0.175099);
}

double NNfunction_sb_uLcR::synapse0x2916eb0() {
   return (neuron0x2904870()*-0.0836154);
}

double NNfunction_sb_uLcR::synapse0x2916ef0() {
   return (neuron0x2905450()*0.034215);
}

double NNfunction_sb_uLcR::synapse0x2916f30() {
   return (neuron0x2905e20()*0.556343);
}

double NNfunction_sb_uLcR::synapse0x2916f70() {
   return (neuron0x28f6ca0()*1.0466);
}

double NNfunction_sb_uLcR::synapse0x2916fb0() {
   return (neuron0x28f7670()*-0.266854);
}

double NNfunction_sb_uLcR::synapse0x2916ff0() {
   return (neuron0x28f8040()*0.401504);
}

double NNfunction_sb_uLcR::synapse0x2917030() {
   return (neuron0x290a680()*-0.564546);
}

double NNfunction_sb_uLcR::synapse0x2917070() {
   return (neuron0x290af30()*0.0951916);
}

double NNfunction_sb_uLcR::synapse0x29170b0() {
   return (neuron0x290b900()*0.0449132);
}

double NNfunction_sb_uLcR::synapse0x29170f0() {
   return (neuron0x290c2d0()*-0.378499);
}

double NNfunction_sb_uLcR::synapse0x2917350() {
   return (neuron0x29134d0()*-4.97096);
}

double NNfunction_sb_uLcR::synapse0x2917390() {
   return (neuron0x2913870()*7.31734);
}

double NNfunction_sb_uLcR::synapse0x29173d0() {
   return (neuron0x2913d10()*-6.16078);
}

double NNfunction_sb_uLcR::synapse0x2917410() {
   return (neuron0x2914e70()*-6.95405);
}

double NNfunction_sb_uLcR::synapse0x2917450() {
   return (neuron0x2915fd0()*4.51206);
}

