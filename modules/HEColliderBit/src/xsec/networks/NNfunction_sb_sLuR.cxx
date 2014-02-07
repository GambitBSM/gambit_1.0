#include "NNfunction_sb_sLuR.h"
#include <cmath>

double NNfunction_sb_sLuR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5017)/15.3098;
   input1 = (in1 - -4.36196)/1157.16;
   input2 = (in2 - 654.03)/621.51;
   input3 = (in3 - -55.2854)/829.755;
   input4 = (in4 - 1072.77)/962.404;
   input5 = (in5 - 902.35)/954.6;
   input6 = (in6 - 908.651)/954.895;
   input7 = (in7 - 929.184)/939.606;
   input8 = (in8 - 909.396)/958.187;
   input9 = (in9 - 888.785)/943.97;
   input10 = (in10 - 983.763)/946.718;
   input11 = (in11 - 712.389)/857.492;
   input12 = (in12 - 437.325)/473.354;
   input13 = (in13 - 501.918)/518.962;
   input14 = (in14 - 469.5)/491.133;
   input15 = (in15 - 725.472)/827.194;
   input16 = (in16 - 530.572)/560.597;
   input17 = (in17 - 751.868)/886.12;
   input18 = (in18 - 743.913)/895.51;
   input19 = (in19 - 791.459)/869.505;
   input20 = (in20 - -4.97906)/484.556;
   input21 = (in21 - 2.85874)/1163.02;
   input22 = (in22 - 2.04843)/1198.82;
   input23 = (in23 - -196.012)/604.689;
   switch(index) {
     case 0:
         return neuron0x30d44a0();
     default:
         return 0.;
   }
}

double NNfunction_sb_sLuR::Value(int index, double* input) {
   input0 = (input[0] - 23.5017)/15.3098;
   input1 = (input[1] - -4.36196)/1157.16;
   input2 = (input[2] - 654.03)/621.51;
   input3 = (input[3] - -55.2854)/829.755;
   input4 = (input[4] - 1072.77)/962.404;
   input5 = (input[5] - 902.35)/954.6;
   input6 = (input[6] - 908.651)/954.895;
   input7 = (input[7] - 929.184)/939.606;
   input8 = (input[8] - 909.396)/958.187;
   input9 = (input[9] - 888.785)/943.97;
   input10 = (input[10] - 983.763)/946.718;
   input11 = (input[11] - 712.389)/857.492;
   input12 = (input[12] - 437.325)/473.354;
   input13 = (input[13] - 501.918)/518.962;
   input14 = (input[14] - 469.5)/491.133;
   input15 = (input[15] - 725.472)/827.194;
   input16 = (input[16] - 530.572)/560.597;
   input17 = (input[17] - 751.868)/886.12;
   input18 = (input[18] - 743.913)/895.51;
   input19 = (input[19] - 791.459)/869.505;
   input20 = (input[20] - -4.97906)/484.556;
   input21 = (input[21] - 2.85874)/1163.02;
   input22 = (input[22] - 2.04843)/1198.82;
   input23 = (input[23] - -196.012)/604.689;
   switch(index) {
     case 0:
         return neuron0x30d44a0();
     default:
         return 0.;
   }
}

double NNfunction_sb_sLuR::neuron0x30a0560() {
   return input0;
}

double NNfunction_sb_sLuR::neuron0x30a08a0() {
   return input1;
}

double NNfunction_sb_sLuR::neuron0x30a0be0() {
   return input2;
}

double NNfunction_sb_sLuR::neuron0x30a0f20() {
   return input3;
}

double NNfunction_sb_sLuR::neuron0x30a1260() {
   return input4;
}

double NNfunction_sb_sLuR::neuron0x30a15a0() {
   return input5;
}

double NNfunction_sb_sLuR::neuron0x30a18e0() {
   return input6;
}

double NNfunction_sb_sLuR::neuron0x30a1c20() {
   return input7;
}

double NNfunction_sb_sLuR::neuron0x30a1f60() {
   return input8;
}

double NNfunction_sb_sLuR::neuron0x30a22a0() {
   return input9;
}

double NNfunction_sb_sLuR::neuron0x30a25e0() {
   return input10;
}

double NNfunction_sb_sLuR::neuron0x30a2920() {
   return input11;
}

double NNfunction_sb_sLuR::neuron0x30a2c60() {
   return input12;
}

double NNfunction_sb_sLuR::neuron0x30a2fa0() {
   return input13;
}

double NNfunction_sb_sLuR::neuron0x30a32e0() {
   return input14;
}

double NNfunction_sb_sLuR::neuron0x30a3620() {
   return input15;
}

double NNfunction_sb_sLuR::neuron0x30a3960() {
   return input16;
}

double NNfunction_sb_sLuR::neuron0x30a3ec0() {
   return input17;
}

double NNfunction_sb_sLuR::neuron0x30a40e0() {
   return input18;
}

double NNfunction_sb_sLuR::neuron0x30a4420() {
   return input19;
}

double NNfunction_sb_sLuR::neuron0x30a4760() {
   return input20;
}

double NNfunction_sb_sLuR::neuron0x30a4aa0() {
   return input21;
}

double NNfunction_sb_sLuR::neuron0x30a4de0() {
   return input22;
}

double NNfunction_sb_sLuR::neuron0x30a5120() {
   return input23;
}

double NNfunction_sb_sLuR::input0x30a55c0() {
   double input = -0.0873599;
   input += synapse0x2e603d0();
   input += synapse0x30a0420();
   input += synapse0x30a0460();
   input += synapse0x30a5870();
   input += synapse0x30a58b0();
   input += synapse0x30a58f0();
   input += synapse0x30a5930();
   input += synapse0x30a5970();
   input += synapse0x30a59b0();
   input += synapse0x30a59f0();
   input += synapse0x30a5a30();
   input += synapse0x30a5a70();
   input += synapse0x30a5ab0();
   input += synapse0x30a5af0();
   input += synapse0x30a5b30();
   input += synapse0x30a5b70();
   input += synapse0x30a0390();
   input += synapse0x30a03d0();
   input += synapse0x2e51c70();
   input += synapse0x2e51cb0();
   input += synapse0x30a5dd0();
   input += synapse0x30a5e10();
   input += synapse0x30a5e50();
   input += synapse0x30a5e90();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30a55c0() {
   double input = input0x30a55c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30a5ed0() {
   double input = 1.92998;
   input += synapse0x30a6210();
   input += synapse0x30a6250();
   input += synapse0x30a6290();
   input += synapse0x30a62d0();
   input += synapse0x30a6310();
   input += synapse0x30a6350();
   input += synapse0x30a6390();
   input += synapse0x30a63d0();
   input += synapse0x30a6410();
   input += synapse0x30a5cc0();
   input += synapse0x30a5d00();
   input += synapse0x30a5d40();
   input += synapse0x30a5d80();
   input += synapse0x30a6660();
   input += synapse0x30a66a0();
   input += synapse0x30a66e0();
   input += synapse0x30a6060();
   input += synapse0x30a60a0();
   input += synapse0x30a6830();
   input += synapse0x30a6870();
   input += synapse0x30a68b0();
   input += synapse0x30a68f0();
   input += synapse0x30a6930();
   input += synapse0x30a6970();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30a5ed0() {
   double input = input0x30a5ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30a69b0() {
   double input = 2.58857;
   input += synapse0x30a6cf0();
   input += synapse0x30a6d30();
   input += synapse0x30a6d70();
   input += synapse0x30a6db0();
   input += synapse0x30a6df0();
   input += synapse0x30a6e30();
   input += synapse0x30a6e70();
   input += synapse0x30a6eb0();
   input += synapse0x30a6ef0();
   input += synapse0x30a6f30();
   input += synapse0x30a6f70();
   input += synapse0x30a6fb0();
   input += synapse0x30a6ff0();
   input += synapse0x30a7030();
   input += synapse0x30a7070();
   input += synapse0x30a70b0();
   input += synapse0x30a6b40();
   input += synapse0x30a6b80();
   input += synapse0x2e5fac0();
   input += synapse0x2e5fb00();
   input += synapse0x308f5f0();
   input += synapse0x308f630();
   input += synapse0x308f670();
   input += synapse0x30a04a0();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30a69b0() {
   double input = input0x30a69b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2e60240() {
   double input = -0.540983;
   input += synapse0x30a6600();
   input += synapse0x30a04e0();
   input += synapse0x30a0520();
   input += synapse0x30a7200();
   input += synapse0x30a7240();
   input += synapse0x30a7280();
   input += synapse0x30a72c0();
   input += synapse0x30a7300();
   input += synapse0x30a7340();
   input += synapse0x30a7380();
   input += synapse0x30a73c0();
   input += synapse0x30a7400();
   input += synapse0x30a7440();
   input += synapse0x30a7480();
   input += synapse0x30a74c0();
   input += synapse0x30a7500();
   input += synapse0x30a6450();
   input += synapse0x30a6490();
   input += synapse0x30a7650();
   input += synapse0x30a7690();
   input += synapse0x30a76d0();
   input += synapse0x30a7710();
   input += synapse0x30a7750();
   input += synapse0x30a7790();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2e60240() {
   double input = input0x2e60240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30a77d0() {
   double input = 0.250584;
   input += synapse0x30a7b10();
   input += synapse0x30a7b50();
   input += synapse0x30a7b90();
   input += synapse0x30a7bd0();
   input += synapse0x30a7c10();
   input += synapse0x30a7c50();
   input += synapse0x30a7c90();
   input += synapse0x30a7cd0();
   input += synapse0x30a7d10();
   input += synapse0x30a7d50();
   input += synapse0x30a7d90();
   input += synapse0x30a7dd0();
   input += synapse0x30a7e10();
   input += synapse0x30a7e50();
   input += synapse0x30a7e90();
   input += synapse0x30a7ed0();
   input += synapse0x30a7960();
   input += synapse0x30a79a0();
   input += synapse0x30a8020();
   input += synapse0x30a8060();
   input += synapse0x30a80a0();
   input += synapse0x30a80e0();
   input += synapse0x30a8120();
   input += synapse0x30a8160();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30a77d0() {
   double input = input0x30a77d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30a81a0() {
   double input = -0.428875;
   input += synapse0x30a84e0();
   input += synapse0x30a8520();
   input += synapse0x30a8560();
   input += synapse0x30a85a0();
   input += synapse0x30a85e0();
   input += synapse0x30a8620();
   input += synapse0x30a8660();
   input += synapse0x30a86a0();
   input += synapse0x30a86e0();
   input += synapse0x2e5fe30();
   input += synapse0x2e5fe70();
   input += synapse0x2e5feb0();
   input += synapse0x2e5fef0();
   input += synapse0x2e5ff30();
   input += synapse0x2e5ff70();
   input += synapse0x2e5ffb0();
   input += synapse0x30a8330();
   input += synapse0x30a8370();
   input += synapse0x2e60100();
   input += synapse0x2e60140();
   input += synapse0x2e60180();
   input += synapse0x2e601c0();
   input += synapse0x2e60200();
   input += synapse0x30a8f30();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30a81a0() {
   double input = input0x30a81a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30a8f70() {
   double input = -0.246036;
   input += synapse0x30a92b0();
   input += synapse0x30a92f0();
   input += synapse0x30a9330();
   input += synapse0x30a9370();
   input += synapse0x30a93b0();
   input += synapse0x30a93f0();
   input += synapse0x30a9430();
   input += synapse0x30a9470();
   input += synapse0x30a94b0();
   input += synapse0x30a94f0();
   input += synapse0x30a9530();
   input += synapse0x30a9570();
   input += synapse0x30a95b0();
   input += synapse0x30a95f0();
   input += synapse0x30a9630();
   input += synapse0x30a9670();
   input += synapse0x30a9100();
   input += synapse0x30a9140();
   input += synapse0x30a97c0();
   input += synapse0x30a9800();
   input += synapse0x30a9840();
   input += synapse0x30a9880();
   input += synapse0x30a98c0();
   input += synapse0x30a9900();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30a8f70() {
   double input = input0x30a8f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30a9940() {
   double input = -0.400503;
   input += synapse0x30a9c80();
   input += synapse0x30a9cc0();
   input += synapse0x30a9d00();
   input += synapse0x30a9d40();
   input += synapse0x30a9d80();
   input += synapse0x30a9dc0();
   input += synapse0x30a9e00();
   input += synapse0x30a9e40();
   input += synapse0x30a9e80();
   input += synapse0x30a9ec0();
   input += synapse0x30a9f00();
   input += synapse0x30a9f40();
   input += synapse0x30a9f80();
   input += synapse0x30a9fc0();
   input += synapse0x30aa000();
   input += synapse0x30aa040();
   input += synapse0x30a9ad0();
   input += synapse0x30a9b10();
   input += synapse0x30aa190();
   input += synapse0x30aa1d0();
   input += synapse0x30aa210();
   input += synapse0x30aa250();
   input += synapse0x30aa290();
   input += synapse0x30aa2d0();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30a9940() {
   double input = input0x30a9940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30aa310() {
   double input = -1.32249;
   input += synapse0x30a3db0();
   input += synapse0x30a3df0();
   input += synapse0x30a3e30();
   input += synapse0x30a3e70();
   input += synapse0x30aa860();
   input += synapse0x30aa8a0();
   input += synapse0x30aa8e0();
   input += synapse0x30aa920();
   input += synapse0x30aa960();
   input += synapse0x30aa9a0();
   input += synapse0x30aa9e0();
   input += synapse0x30aaa20();
   input += synapse0x30aaa60();
   input += synapse0x30aaaa0();
   input += synapse0x30aaae0();
   input += synapse0x30aab20();
   input += synapse0x30aa4a0();
   input += synapse0x30aa4e0();
   input += synapse0x30aac70();
   input += synapse0x30aacb0();
   input += synapse0x30aacf0();
   input += synapse0x30aad30();
   input += synapse0x30aad70();
   input += synapse0x30aadb0();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30aa310() {
   double input = input0x30aa310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30aadf0() {
   double input = -0.781995;
   input += synapse0x30ab130();
   input += synapse0x30ab170();
   input += synapse0x30ab1b0();
   input += synapse0x30ab1f0();
   input += synapse0x30ab230();
   input += synapse0x30ab270();
   input += synapse0x30ab2b0();
   input += synapse0x30ab2f0();
   input += synapse0x30ab330();
   input += synapse0x30ab370();
   input += synapse0x30ab3b0();
   input += synapse0x30ab3f0();
   input += synapse0x30ab430();
   input += synapse0x30ab470();
   input += synapse0x30ab4b0();
   input += synapse0x30ab4f0();
   input += synapse0x30aaf80();
   input += synapse0x30aafc0();
   input += synapse0x30ab640();
   input += synapse0x30ab680();
   input += synapse0x30ab6c0();
   input += synapse0x30ab700();
   input += synapse0x30ab740();
   input += synapse0x30ab780();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30aadf0() {
   double input = input0x30aadf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30ab7c0() {
   double input = 0.888736;
   input += synapse0x30abb00();
   input += synapse0x30abb40();
   input += synapse0x30abb80();
   input += synapse0x30abbc0();
   input += synapse0x30abc00();
   input += synapse0x30abc40();
   input += synapse0x30abc80();
   input += synapse0x30abcc0();
   input += synapse0x30abd00();
   input += synapse0x30abd40();
   input += synapse0x30abd80();
   input += synapse0x30abdc0();
   input += synapse0x30abe00();
   input += synapse0x30abe40();
   input += synapse0x30abe80();
   input += synapse0x30abec0();
   input += synapse0x30ab950();
   input += synapse0x30ab990();
   input += synapse0x30a8720();
   input += synapse0x30a8760();
   input += synapse0x30a87a0();
   input += synapse0x30a87e0();
   input += synapse0x30a8820();
   input += synapse0x30a8860();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30ab7c0() {
   double input = input0x30ab7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30a88a0() {
   double input = -0.711043;
   input += synapse0x30a8be0();
   input += synapse0x30a8c20();
   input += synapse0x30a8c60();
   input += synapse0x30a8ca0();
   input += synapse0x30a8ce0();
   input += synapse0x30a8d20();
   input += synapse0x30a8d60();
   input += synapse0x30a8da0();
   input += synapse0x30a8de0();
   input += synapse0x30a8e20();
   input += synapse0x30a8e60();
   input += synapse0x30a8ea0();
   input += synapse0x30a8ee0();
   input += synapse0x30ad020();
   input += synapse0x30ad060();
   input += synapse0x30ad0a0();
   input += synapse0x30a8a30();
   input += synapse0x30a8a70();
   input += synapse0x30ad1f0();
   input += synapse0x30ad230();
   input += synapse0x30ad270();
   input += synapse0x30ad2b0();
   input += synapse0x30ad2f0();
   input += synapse0x30ad330();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30a88a0() {
   double input = input0x30a88a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30ad370() {
   double input = -1.2017;
   input += synapse0x30ad6b0();
   input += synapse0x30ad6f0();
   input += synapse0x30ad730();
   input += synapse0x30ad770();
   input += synapse0x30ad7b0();
   input += synapse0x30ad7f0();
   input += synapse0x30ad830();
   input += synapse0x30ad870();
   input += synapse0x30ad8b0();
   input += synapse0x30ad8f0();
   input += synapse0x30ad930();
   input += synapse0x30ad970();
   input += synapse0x30ad9b0();
   input += synapse0x30ad9f0();
   input += synapse0x30ada30();
   input += synapse0x30ada70();
   input += synapse0x30ad500();
   input += synapse0x30ad540();
   input += synapse0x30adbc0();
   input += synapse0x30adc00();
   input += synapse0x30adc40();
   input += synapse0x30adc80();
   input += synapse0x30adcc0();
   input += synapse0x30add00();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30ad370() {
   double input = input0x30ad370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30add40() {
   double input = 0.0798352;
   input += synapse0x30ae080();
   input += synapse0x30ae0c0();
   input += synapse0x30ae100();
   input += synapse0x30ae140();
   input += synapse0x30ae180();
   input += synapse0x30ae1c0();
   input += synapse0x30ae200();
   input += synapse0x30ae240();
   input += synapse0x30ae280();
   input += synapse0x30ae2c0();
   input += synapse0x30ae300();
   input += synapse0x30ae340();
   input += synapse0x30ae380();
   input += synapse0x30ae3c0();
   input += synapse0x30ae400();
   input += synapse0x30ae440();
   input += synapse0x30aded0();
   input += synapse0x30adf10();
   input += synapse0x30ae590();
   input += synapse0x30ae5d0();
   input += synapse0x30ae610();
   input += synapse0x30ae650();
   input += synapse0x30ae690();
   input += synapse0x30ae6d0();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30add40() {
   double input = input0x30add40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30ae710() {
   double input = -2.74357;
   input += synapse0x30aea50();
   input += synapse0x30aea90();
   input += synapse0x30aead0();
   input += synapse0x30aeb10();
   input += synapse0x30aeb50();
   input += synapse0x30aeb90();
   input += synapse0x30aebd0();
   input += synapse0x30aec10();
   input += synapse0x30aec50();
   input += synapse0x30aec90();
   input += synapse0x30aecd0();
   input += synapse0x30aed10();
   input += synapse0x30aed50();
   input += synapse0x30aed90();
   input += synapse0x30aedd0();
   input += synapse0x30aee10();
   input += synapse0x30ae8a0();
   input += synapse0x30ae8e0();
   input += synapse0x30aef60();
   input += synapse0x30aefa0();
   input += synapse0x30aefe0();
   input += synapse0x30af020();
   input += synapse0x30af060();
   input += synapse0x30af0a0();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30ae710() {
   double input = input0x30ae710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30af0e0() {
   double input = -3.88562;
   input += synapse0x30af420();
   input += synapse0x30a0780();
   input += synapse0x30a07c0();
   input += synapse0x30a0ac0();
   input += synapse0x30a0b00();
   input += synapse0x30a0e00();
   input += synapse0x30a0e40();
   input += synapse0x30a1140();
   input += synapse0x30a1180();
   input += synapse0x30a1480();
   input += synapse0x30a14c0();
   input += synapse0x30a17c0();
   input += synapse0x30a1800();
   input += synapse0x30a1b00();
   input += synapse0x30a1b40();
   input += synapse0x30a1e40();
   input += synapse0x30a1e80();
   input += synapse0x30a2180();
   input += synapse0x30a21c0();
   input += synapse0x30a24c0();
   input += synapse0x30a2500();
   input += synapse0x30a2800();
   input += synapse0x30a2840();
   input += synapse0x30a2b40();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30af0e0() {
   double input = input0x30af0e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30b0ef0() {
   double input = 0.0647581;
   input += synapse0x30a2b80();
   input += synapse0x30a3840();
   input += synapse0x30a3880();
   input += synapse0x30af270();
   input += synapse0x30af2b0();
   input += synapse0x30a3b80();
   input += synapse0x30a3bc0();
   input += synapse0x2e51b50();
   input += synapse0x2e51b90();
   input += synapse0x30a4300();
   input += synapse0x30a4340();
   input += synapse0x30a4640();
   input += synapse0x30a4680();
   input += synapse0x30a4980();
   input += synapse0x30a49c0();
   input += synapse0x30a4cc0();
   input += synapse0x30a4d00();
   input += synapse0x30a5000();
   input += synapse0x30a5040();
   input += synapse0x30a5340();
   input += synapse0x30a5380();
   input += synapse0x30a2e80();
   input += synapse0x30a2ec0();
   input += synapse0x30b1190();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30b0ef0() {
   double input = input0x30b0ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30b11d0() {
   double input = 0.10685;
   input += synapse0x30b1510();
   input += synapse0x30b1550();
   input += synapse0x30b1590();
   input += synapse0x30b15d0();
   input += synapse0x30b1610();
   input += synapse0x30b1650();
   input += synapse0x30b1690();
   input += synapse0x30b16d0();
   input += synapse0x30b1710();
   input += synapse0x30b1750();
   input += synapse0x30b1790();
   input += synapse0x30b17d0();
   input += synapse0x30b1810();
   input += synapse0x30b1850();
   input += synapse0x30b1890();
   input += synapse0x30b18d0();
   input += synapse0x30b1360();
   input += synapse0x30b13a0();
   input += synapse0x30b1a20();
   input += synapse0x30b1a60();
   input += synapse0x30b1aa0();
   input += synapse0x30b1ae0();
   input += synapse0x30b1b20();
   input += synapse0x30b1b60();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30b11d0() {
   double input = input0x30b11d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30b1ba0() {
   double input = -0.359204;
   input += synapse0x30b1ee0();
   input += synapse0x30b1f20();
   input += synapse0x30b1f60();
   input += synapse0x30b1fa0();
   input += synapse0x30b1fe0();
   input += synapse0x30b2020();
   input += synapse0x30b2060();
   input += synapse0x30b20a0();
   input += synapse0x30b20e0();
   input += synapse0x30b2120();
   input += synapse0x30b2160();
   input += synapse0x30b21a0();
   input += synapse0x30b21e0();
   input += synapse0x30b2220();
   input += synapse0x30b2260();
   input += synapse0x30b22a0();
   input += synapse0x30b1d30();
   input += synapse0x30b1d70();
   input += synapse0x30b23f0();
   input += synapse0x30b2430();
   input += synapse0x30b2470();
   input += synapse0x30b24b0();
   input += synapse0x30b24f0();
   input += synapse0x30b2530();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30b1ba0() {
   double input = input0x30b1ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30b2570() {
   double input = 1.39577;
   input += synapse0x30b28b0();
   input += synapse0x30b28f0();
   input += synapse0x30b2930();
   input += synapse0x30b2970();
   input += synapse0x30b29b0();
   input += synapse0x30b29f0();
   input += synapse0x30b2a30();
   input += synapse0x30b2a70();
   input += synapse0x30b2ab0();
   input += synapse0x30b2af0();
   input += synapse0x30b2b30();
   input += synapse0x30b2b70();
   input += synapse0x30b2bb0();
   input += synapse0x30b2bf0();
   input += synapse0x30b2c30();
   input += synapse0x30b2c70();
   input += synapse0x30b2700();
   input += synapse0x30b2740();
   input += synapse0x30b2dc0();
   input += synapse0x30b2e00();
   input += synapse0x30b2e40();
   input += synapse0x30b2e80();
   input += synapse0x30b2ec0();
   input += synapse0x30b2f00();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30b2570() {
   double input = input0x30b2570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30b2f40() {
   double input = -1.37483;
   input += synapse0x30b3280();
   input += synapse0x30b32c0();
   input += synapse0x30b3300();
   input += synapse0x30b3340();
   input += synapse0x30b3380();
   input += synapse0x30b33c0();
   input += synapse0x30b3400();
   input += synapse0x30b3440();
   input += synapse0x30b3480();
   input += synapse0x30b34c0();
   input += synapse0x30b3500();
   input += synapse0x30b3540();
   input += synapse0x30b3580();
   input += synapse0x30b35c0();
   input += synapse0x30b3600();
   input += synapse0x30b3640();
   input += synapse0x30b30d0();
   input += synapse0x30b3110();
   input += synapse0x30b3790();
   input += synapse0x30b37d0();
   input += synapse0x30b3810();
   input += synapse0x30b3850();
   input += synapse0x30b3890();
   input += synapse0x30b38d0();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30b2f40() {
   double input = input0x30b2f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30b3910() {
   double input = 0.897258;
   input += synapse0x30b3c50();
   input += synapse0x30b3c90();
   input += synapse0x30b3cd0();
   input += synapse0x30b3d10();
   input += synapse0x30b3d50();
   input += synapse0x30b3d90();
   input += synapse0x30b3dd0();
   input += synapse0x30b3e10();
   input += synapse0x30b3e50();
   input += synapse0x30ac010();
   input += synapse0x30ac050();
   input += synapse0x30ac090();
   input += synapse0x30ac0d0();
   input += synapse0x30ac110();
   input += synapse0x30ac150();
   input += synapse0x30ac190();
   input += synapse0x30b3aa0();
   input += synapse0x30b3ae0();
   input += synapse0x30ac2e0();
   input += synapse0x30ac320();
   input += synapse0x30ac360();
   input += synapse0x30ac3a0();
   input += synapse0x30ac3e0();
   input += synapse0x30ac420();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30b3910() {
   double input = input0x30b3910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30ac460() {
   double input = -0.440771;
   input += synapse0x30ac7a0();
   input += synapse0x30ac7e0();
   input += synapse0x30ac820();
   input += synapse0x30ac860();
   input += synapse0x30ac8a0();
   input += synapse0x30ac8e0();
   input += synapse0x30ac920();
   input += synapse0x30ac960();
   input += synapse0x30ac9a0();
   input += synapse0x30ac9e0();
   input += synapse0x30aca20();
   input += synapse0x30aca60();
   input += synapse0x30acaa0();
   input += synapse0x30acae0();
   input += synapse0x30acb20();
   input += synapse0x30acb60();
   input += synapse0x30ac5f0();
   input += synapse0x30ac630();
   input += synapse0x30accb0();
   input += synapse0x30accf0();
   input += synapse0x30acd30();
   input += synapse0x30acd70();
   input += synapse0x30acdb0();
   input += synapse0x30acdf0();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30ac460() {
   double input = input0x30ac460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30ace30() {
   double input = -2.38211;
   input += synapse0x30acfc0();
   input += synapse0x30b6050();
   input += synapse0x30b6090();
   input += synapse0x30b60d0();
   input += synapse0x30b6110();
   input += synapse0x30b6150();
   input += synapse0x30b6190();
   input += synapse0x30b61d0();
   input += synapse0x30b6210();
   input += synapse0x30b6250();
   input += synapse0x30b6290();
   input += synapse0x30b62d0();
   input += synapse0x30b6310();
   input += synapse0x30b6350();
   input += synapse0x30b6390();
   input += synapse0x30b63d0();
   input += synapse0x30b5ea0();
   input += synapse0x30b5ee0();
   input += synapse0x30b6520();
   input += synapse0x30b6560();
   input += synapse0x30b65a0();
   input += synapse0x30b65e0();
   input += synapse0x30b6620();
   input += synapse0x30b6660();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30ace30() {
   double input = input0x30ace30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30b66a0() {
   double input = -0.883927;
   input += synapse0x30b69e0();
   input += synapse0x30b6a20();
   input += synapse0x30b6a60();
   input += synapse0x30b6aa0();
   input += synapse0x30b6ae0();
   input += synapse0x30b6b20();
   input += synapse0x30b6b60();
   input += synapse0x30b6ba0();
   input += synapse0x30b6be0();
   input += synapse0x30b6c20();
   input += synapse0x30b6c60();
   input += synapse0x30b6ca0();
   input += synapse0x30b6ce0();
   input += synapse0x30b6d20();
   input += synapse0x30b6d60();
   input += synapse0x30b6da0();
   input += synapse0x30b6830();
   input += synapse0x30b6870();
   input += synapse0x30b6ef0();
   input += synapse0x30b6f30();
   input += synapse0x30b6f70();
   input += synapse0x30b6fb0();
   input += synapse0x30b6ff0();
   input += synapse0x30b7030();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30b66a0() {
   double input = input0x30b66a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30b7070() {
   double input = 0.370403;
   input += synapse0x30b73b0();
   input += synapse0x30b73f0();
   input += synapse0x30b7430();
   input += synapse0x30b7470();
   input += synapse0x30b74b0();
   input += synapse0x30b74f0();
   input += synapse0x30b7530();
   input += synapse0x30b7570();
   input += synapse0x30b75b0();
   input += synapse0x30b75f0();
   input += synapse0x30b7630();
   input += synapse0x30b7670();
   input += synapse0x30b76b0();
   input += synapse0x30b76f0();
   input += synapse0x30b7730();
   input += synapse0x30b7770();
   input += synapse0x30b7200();
   input += synapse0x30b7240();
   input += synapse0x30b78c0();
   input += synapse0x30b7900();
   input += synapse0x30b7940();
   input += synapse0x30b7980();
   input += synapse0x30b79c0();
   input += synapse0x30b7a00();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30b7070() {
   double input = input0x30b7070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30b7a40() {
   double input = -0.359881;
   input += synapse0x30b7d80();
   input += synapse0x30b7dc0();
   input += synapse0x30b7e00();
   input += synapse0x30b7e40();
   input += synapse0x30b7e80();
   input += synapse0x30b7ec0();
   input += synapse0x30b7f00();
   input += synapse0x30b7f40();
   input += synapse0x30b7f80();
   input += synapse0x30b7fc0();
   input += synapse0x30b8000();
   input += synapse0x30b8040();
   input += synapse0x30b8080();
   input += synapse0x30b80c0();
   input += synapse0x30b8100();
   input += synapse0x30b8140();
   input += synapse0x30b7bd0();
   input += synapse0x30b7c10();
   input += synapse0x30b8290();
   input += synapse0x30b82d0();
   input += synapse0x30b8310();
   input += synapse0x30b8350();
   input += synapse0x30b8390();
   input += synapse0x30b83d0();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30b7a40() {
   double input = input0x30b7a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30b8410() {
   double input = 1.83933;
   input += synapse0x30b8750();
   input += synapse0x30b8790();
   input += synapse0x30b87d0();
   input += synapse0x30b8810();
   input += synapse0x30b8850();
   input += synapse0x30b8890();
   input += synapse0x30b88d0();
   input += synapse0x30b8910();
   input += synapse0x30b8950();
   input += synapse0x30b8990();
   input += synapse0x30b89d0();
   input += synapse0x30b8a10();
   input += synapse0x30b8a50();
   input += synapse0x30b8a90();
   input += synapse0x30b8ad0();
   input += synapse0x30b8b10();
   input += synapse0x30b85a0();
   input += synapse0x30b85e0();
   input += synapse0x30b8c60();
   input += synapse0x30b8ca0();
   input += synapse0x30b8ce0();
   input += synapse0x30b8d20();
   input += synapse0x30b8d60();
   input += synapse0x30b8da0();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30b8410() {
   double input = input0x30b8410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30b8de0() {
   double input = 0.931209;
   input += synapse0x30b9120();
   input += synapse0x30b9160();
   input += synapse0x30b91a0();
   input += synapse0x30b91e0();
   input += synapse0x30b9220();
   input += synapse0x30b9260();
   input += synapse0x30b92a0();
   input += synapse0x30b92e0();
   input += synapse0x30b9320();
   input += synapse0x30b9360();
   input += synapse0x30b93a0();
   input += synapse0x30b93e0();
   input += synapse0x30b9420();
   input += synapse0x30b9460();
   input += synapse0x30b94a0();
   input += synapse0x30b94e0();
   input += synapse0x30b8f70();
   input += synapse0x30b8fb0();
   input += synapse0x30b9630();
   input += synapse0x30b9670();
   input += synapse0x30b96b0();
   input += synapse0x30b96f0();
   input += synapse0x30b9730();
   input += synapse0x30b9770();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30b8de0() {
   double input = input0x30b8de0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30b97b0() {
   double input = -1.64706;
   input += synapse0x30b9af0();
   input += synapse0x30b9b30();
   input += synapse0x30b9b70();
   input += synapse0x30b9bb0();
   input += synapse0x30b9bf0();
   input += synapse0x30b9c30();
   input += synapse0x30b9c70();
   input += synapse0x30b9cb0();
   input += synapse0x30b9cf0();
   input += synapse0x30b9d30();
   input += synapse0x30b9d70();
   input += synapse0x30b9db0();
   input += synapse0x30b9df0();
   input += synapse0x30b9e30();
   input += synapse0x30b9e70();
   input += synapse0x30b9eb0();
   input += synapse0x30b9940();
   input += synapse0x30b9980();
   input += synapse0x30ba000();
   input += synapse0x30ba040();
   input += synapse0x30ba080();
   input += synapse0x30ba0c0();
   input += synapse0x30ba100();
   input += synapse0x30ba140();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30b97b0() {
   double input = input0x30b97b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30ba180() {
   double input = -1.02226;
   input += synapse0x30ba4c0();
   input += synapse0x30ba500();
   input += synapse0x30ba540();
   input += synapse0x30ba580();
   input += synapse0x30ba5c0();
   input += synapse0x30ba600();
   input += synapse0x30ba640();
   input += synapse0x30ba680();
   input += synapse0x30ba6c0();
   input += synapse0x30ba700();
   input += synapse0x30ba740();
   input += synapse0x30ba780();
   input += synapse0x30ba7c0();
   input += synapse0x30ba800();
   input += synapse0x30ba840();
   input += synapse0x30ba880();
   input += synapse0x30ba310();
   input += synapse0x30ba350();
   input += synapse0x30ba9d0();
   input += synapse0x30baa10();
   input += synapse0x30baa50();
   input += synapse0x30baa90();
   input += synapse0x30baad0();
   input += synapse0x30bab10();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30ba180() {
   double input = input0x30ba180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30bab50() {
   double input = 0.766111;
   input += synapse0x30bae90();
   input += synapse0x30af460();
   input += synapse0x30af4a0();
   input += synapse0x30af4e0();
   input += synapse0x30af730();
   input += synapse0x30af770();
   input += synapse0x30af7b0();
   input += synapse0x30afa00();
   input += synapse0x30afa40();
   input += synapse0x30afc90();
   input += synapse0x30afcd0();
   input += synapse0x30afd10();
   input += synapse0x30aff60();
   input += synapse0x30affa0();
   input += synapse0x30b01f0();
   input += synapse0x30b0230();
   input += synapse0x30bace0();
   input += synapse0x30bad20();
   input += synapse0x30b0380();
   input += synapse0x30b0890();
   input += synapse0x30b08d0();
   input += synapse0x30b0910();
   input += synapse0x30b0b60();
   input += synapse0x30b0ba0();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30bab50() {
   double input = input0x30bab50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30b0be0() {
   double input = -0.55849;
   input += synapse0x30b0450();
   input += synapse0x30b0490();
   input += synapse0x30b04d0();
   input += synapse0x30b0510();
   input += synapse0x30b0e90();
   input += synapse0x30bd1e0();
   input += synapse0x30bd220();
   input += synapse0x30bd260();
   input += synapse0x30bd2a0();
   input += synapse0x30bd2e0();
   input += synapse0x30bd320();
   input += synapse0x30bd360();
   input += synapse0x30bd3a0();
   input += synapse0x30bd3e0();
   input += synapse0x30bd420();
   input += synapse0x30bd460();
   input += synapse0x30b0d70();
   input += synapse0x30b0db0();
   input += synapse0x30bd5b0();
   input += synapse0x30bd5f0();
   input += synapse0x30bd630();
   input += synapse0x30bd670();
   input += synapse0x30bd6b0();
   input += synapse0x30bd6f0();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30b0be0() {
   double input = input0x30b0be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30bd730() {
   double input = 1.83556;
   input += synapse0x30bda70();
   input += synapse0x30bdab0();
   input += synapse0x30bdaf0();
   input += synapse0x30bdb30();
   input += synapse0x30bdb70();
   input += synapse0x30bdbb0();
   input += synapse0x30bdbf0();
   input += synapse0x30bdc30();
   input += synapse0x30bdc70();
   input += synapse0x30bdcb0();
   input += synapse0x30bdcf0();
   input += synapse0x30bdd30();
   input += synapse0x30bdd70();
   input += synapse0x30bddb0();
   input += synapse0x30bddf0();
   input += synapse0x30bde30();
   input += synapse0x30bd8c0();
   input += synapse0x30bd900();
   input += synapse0x30bdf80();
   input += synapse0x30bdfc0();
   input += synapse0x30be000();
   input += synapse0x30be040();
   input += synapse0x30be080();
   input += synapse0x30be0c0();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30bd730() {
   double input = input0x30bd730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30be100() {
   double input = 1.92196;
   input += synapse0x30be440();
   input += synapse0x30be480();
   input += synapse0x30be4c0();
   input += synapse0x30be500();
   input += synapse0x30be540();
   input += synapse0x30be580();
   input += synapse0x30be5c0();
   input += synapse0x30be600();
   input += synapse0x30be640();
   input += synapse0x30be680();
   input += synapse0x30be6c0();
   input += synapse0x30be700();
   input += synapse0x30be740();
   input += synapse0x30be780();
   input += synapse0x30be7c0();
   input += synapse0x30be800();
   input += synapse0x30be290();
   input += synapse0x30be2d0();
   input += synapse0x30be950();
   input += synapse0x30be990();
   input += synapse0x30be9d0();
   input += synapse0x30bea10();
   input += synapse0x30bea50();
   input += synapse0x30bea90();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30be100() {
   double input = input0x30be100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30bead0() {
   double input = 0.308463;
   input += synapse0x30bee10();
   input += synapse0x30bee50();
   input += synapse0x30bee90();
   input += synapse0x30beed0();
   input += synapse0x30bef10();
   input += synapse0x30bef50();
   input += synapse0x30bef90();
   input += synapse0x30befd0();
   input += synapse0x30bf010();
   input += synapse0x30bf050();
   input += synapse0x30bf090();
   input += synapse0x30bf0d0();
   input += synapse0x30bf110();
   input += synapse0x30bf150();
   input += synapse0x30bf190();
   input += synapse0x30bf1d0();
   input += synapse0x30bec60();
   input += synapse0x30beca0();
   input += synapse0x30bf320();
   input += synapse0x30bf360();
   input += synapse0x30bf3a0();
   input += synapse0x30bf3e0();
   input += synapse0x30bf420();
   input += synapse0x30bf460();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30bead0() {
   double input = input0x30bead0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30bf4a0() {
   double input = -0.888415;
   input += synapse0x30bf7e0();
   input += synapse0x30bf820();
   input += synapse0x30bf860();
   input += synapse0x30bf8a0();
   input += synapse0x30bf8e0();
   input += synapse0x30bf920();
   input += synapse0x30bf960();
   input += synapse0x30bf9a0();
   input += synapse0x30bf9e0();
   input += synapse0x30bfa20();
   input += synapse0x30bfa60();
   input += synapse0x30bfaa0();
   input += synapse0x30bfae0();
   input += synapse0x30bfb20();
   input += synapse0x30bfb60();
   input += synapse0x30bfba0();
   input += synapse0x30bf630();
   input += synapse0x30bf670();
   input += synapse0x30bfcf0();
   input += synapse0x30bfd30();
   input += synapse0x30bfd70();
   input += synapse0x30bfdb0();
   input += synapse0x30bfdf0();
   input += synapse0x30bfe30();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30bf4a0() {
   double input = input0x30bf4a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30bfe70() {
   double input = -0.722492;
   input += synapse0x30c01b0();
   input += synapse0x30c01f0();
   input += synapse0x30c0230();
   input += synapse0x30c0270();
   input += synapse0x30c02b0();
   input += synapse0x30c02f0();
   input += synapse0x30c0330();
   input += synapse0x30c0370();
   input += synapse0x30c03b0();
   input += synapse0x30c03f0();
   input += synapse0x30c0430();
   input += synapse0x30c0470();
   input += synapse0x30c04b0();
   input += synapse0x30c04f0();
   input += synapse0x30c0530();
   input += synapse0x30c0570();
   input += synapse0x30c0000();
   input += synapse0x30c0040();
   input += synapse0x30c06c0();
   input += synapse0x30c0700();
   input += synapse0x30c0740();
   input += synapse0x30c0780();
   input += synapse0x30c07c0();
   input += synapse0x30c0800();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30bfe70() {
   double input = input0x30bfe70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30c0840() {
   double input = 0.0212784;
   input += synapse0x30c0b80();
   input += synapse0x30c0bc0();
   input += synapse0x30c0c00();
   input += synapse0x30c0c40();
   input += synapse0x30c0c80();
   input += synapse0x30c0cc0();
   input += synapse0x30c0d00();
   input += synapse0x30c0d40();
   input += synapse0x30c0d80();
   input += synapse0x30c0dc0();
   input += synapse0x30c0e00();
   input += synapse0x30c0e40();
   input += synapse0x30c0e80();
   input += synapse0x30c0ec0();
   input += synapse0x30c0f00();
   input += synapse0x30c0f40();
   input += synapse0x30c09d0();
   input += synapse0x30c0a10();
   input += synapse0x30c1090();
   input += synapse0x30c10d0();
   input += synapse0x30c1110();
   input += synapse0x30c1150();
   input += synapse0x30c1190();
   input += synapse0x30c11d0();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30c0840() {
   double input = input0x30c0840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30c1210() {
   double input = -0.79059;
   input += synapse0x30c1550();
   input += synapse0x30c1590();
   input += synapse0x30c15d0();
   input += synapse0x30c1610();
   input += synapse0x30c1650();
   input += synapse0x30c1690();
   input += synapse0x30c16d0();
   input += synapse0x30c1710();
   input += synapse0x30c1750();
   input += synapse0x30c1790();
   input += synapse0x30c17d0();
   input += synapse0x30c1810();
   input += synapse0x30c1850();
   input += synapse0x30c1890();
   input += synapse0x30c18d0();
   input += synapse0x30c1910();
   input += synapse0x30c13a0();
   input += synapse0x30c13e0();
   input += synapse0x30c1a60();
   input += synapse0x30c1aa0();
   input += synapse0x30c1ae0();
   input += synapse0x30c1b20();
   input += synapse0x30c1b60();
   input += synapse0x30c1ba0();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30c1210() {
   double input = input0x30c1210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30c1be0() {
   double input = -0.405019;
   input += synapse0x30aa650();
   input += synapse0x30aa690();
   input += synapse0x30aa6d0();
   input += synapse0x30aa710();
   input += synapse0x30aa750();
   input += synapse0x30aa790();
   input += synapse0x30aa7d0();
   input += synapse0x30aa810();
   input += synapse0x30c2330();
   input += synapse0x30c2370();
   input += synapse0x30c23b0();
   input += synapse0x30c23f0();
   input += synapse0x30c2430();
   input += synapse0x30c2470();
   input += synapse0x30c24b0();
   input += synapse0x30c24f0();
   input += synapse0x30c1d70();
   input += synapse0x30c1db0();
   input += synapse0x30c2640();
   input += synapse0x30c2680();
   input += synapse0x30c26c0();
   input += synapse0x30c2700();
   input += synapse0x30c2740();
   input += synapse0x30c2780();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30c1be0() {
   double input = input0x30c1be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30c27c0() {
   double input = -1.3466;
   input += synapse0x30c2b00();
   input += synapse0x30c2b40();
   input += synapse0x30c2b80();
   input += synapse0x30c2bc0();
   input += synapse0x30c2c00();
   input += synapse0x30c2c40();
   input += synapse0x30c2c80();
   input += synapse0x30c2cc0();
   input += synapse0x30c2d00();
   input += synapse0x30c2d40();
   input += synapse0x30c2d80();
   input += synapse0x30c2dc0();
   input += synapse0x30c2e00();
   input += synapse0x30c2e40();
   input += synapse0x30c2e80();
   input += synapse0x30c2ec0();
   input += synapse0x30c2950();
   input += synapse0x30c2990();
   input += synapse0x30c3010();
   input += synapse0x30c3050();
   input += synapse0x30c3090();
   input += synapse0x30c30d0();
   input += synapse0x30c3110();
   input += synapse0x30c3150();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30c27c0() {
   double input = input0x30c27c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30c3190() {
   double input = -0.759577;
   input += synapse0x30c34d0();
   input += synapse0x30c3510();
   input += synapse0x30c3550();
   input += synapse0x30c3590();
   input += synapse0x30c35d0();
   input += synapse0x30c3610();
   input += synapse0x30c3650();
   input += synapse0x30c3690();
   input += synapse0x30c36d0();
   input += synapse0x30c3710();
   input += synapse0x30c3750();
   input += synapse0x30c3790();
   input += synapse0x30c37d0();
   input += synapse0x30c3810();
   input += synapse0x30c3850();
   input += synapse0x30c3890();
   input += synapse0x30c3320();
   input += synapse0x30c3360();
   input += synapse0x30b3e90();
   input += synapse0x30b3ed0();
   input += synapse0x30b3f10();
   input += synapse0x30b3f50();
   input += synapse0x30b3f90();
   input += synapse0x30b3fd0();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30c3190() {
   double input = input0x30c3190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30b4010() {
   double input = -0.129032;
   input += synapse0x30b4350();
   input += synapse0x30b4390();
   input += synapse0x30b43d0();
   input += synapse0x30b4410();
   input += synapse0x30b4450();
   input += synapse0x30b4490();
   input += synapse0x30b44d0();
   input += synapse0x30b4510();
   input += synapse0x30b4550();
   input += synapse0x30b4590();
   input += synapse0x30b45d0();
   input += synapse0x30b4610();
   input += synapse0x30b4650();
   input += synapse0x30b4690();
   input += synapse0x30b46d0();
   input += synapse0x30b4710();
   input += synapse0x30b41a0();
   input += synapse0x30b41e0();
   input += synapse0x30b4860();
   input += synapse0x30b48a0();
   input += synapse0x30b48e0();
   input += synapse0x30b4920();
   input += synapse0x30b4960();
   input += synapse0x30b49a0();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30b4010() {
   double input = input0x30b4010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30b49e0() {
   double input = 1.0346;
   input += synapse0x30b4d20();
   input += synapse0x30b4d60();
   input += synapse0x30b4da0();
   input += synapse0x30b4de0();
   input += synapse0x30b4e20();
   input += synapse0x30b4e60();
   input += synapse0x30b4ea0();
   input += synapse0x30b4ee0();
   input += synapse0x30b4f20();
   input += synapse0x30b4f60();
   input += synapse0x30b4fa0();
   input += synapse0x30b4fe0();
   input += synapse0x30b5020();
   input += synapse0x30b5060();
   input += synapse0x30b50a0();
   input += synapse0x30b50e0();
   input += synapse0x30b4b70();
   input += synapse0x30b4bb0();
   input += synapse0x30b5230();
   input += synapse0x30b5270();
   input += synapse0x30b52b0();
   input += synapse0x30b52f0();
   input += synapse0x30b5330();
   input += synapse0x30b5370();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30b49e0() {
   double input = input0x30b49e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30b53b0() {
   double input = -0.765082;
   input += synapse0x30b56f0();
   input += synapse0x30b5730();
   input += synapse0x30b5770();
   input += synapse0x30b57b0();
   input += synapse0x30b57f0();
   input += synapse0x30b5830();
   input += synapse0x30b5870();
   input += synapse0x30b58b0();
   input += synapse0x30b58f0();
   input += synapse0x30b5930();
   input += synapse0x30b5970();
   input += synapse0x30b59b0();
   input += synapse0x30b59f0();
   input += synapse0x30b5a30();
   input += synapse0x30b5a70();
   input += synapse0x30b5ab0();
   input += synapse0x30b5540();
   input += synapse0x30b5580();
   input += synapse0x30b5c00();
   input += synapse0x30b5c40();
   input += synapse0x30b5c80();
   input += synapse0x30b5cc0();
   input += synapse0x30b5d00();
   input += synapse0x30b5d40();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30b53b0() {
   double input = input0x30b53b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30c79f0() {
   double input = 0.484995;
   input += synapse0x30c7c10();
   input += synapse0x30c7c50();
   input += synapse0x30c7c90();
   input += synapse0x30c7cd0();
   input += synapse0x30c7d10();
   input += synapse0x30c7d50();
   input += synapse0x30c7d90();
   input += synapse0x30c7dd0();
   input += synapse0x30c7e10();
   input += synapse0x30c7e50();
   input += synapse0x30c7e90();
   input += synapse0x30c7ed0();
   input += synapse0x30c7f10();
   input += synapse0x30c7f50();
   input += synapse0x30c7f90();
   input += synapse0x30c7fd0();
   input += synapse0x30b5d80();
   input += synapse0x30b5dc0();
   input += synapse0x30c8120();
   input += synapse0x30c8160();
   input += synapse0x30c81a0();
   input += synapse0x30c81e0();
   input += synapse0x30c8220();
   input += synapse0x30c8260();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30c79f0() {
   double input = input0x30c79f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30c82a0() {
   double input = 0.215481;
   input += synapse0x30c85e0();
   input += synapse0x30c8620();
   input += synapse0x30c8660();
   input += synapse0x30c86a0();
   input += synapse0x30c86e0();
   input += synapse0x30c8720();
   input += synapse0x30c8760();
   input += synapse0x30c87a0();
   input += synapse0x30c87e0();
   input += synapse0x30c8820();
   input += synapse0x30c8860();
   input += synapse0x30c88a0();
   input += synapse0x30c88e0();
   input += synapse0x30c8920();
   input += synapse0x30c8960();
   input += synapse0x30c89a0();
   input += synapse0x30c8430();
   input += synapse0x30c8470();
   input += synapse0x30c8af0();
   input += synapse0x30c8b30();
   input += synapse0x30c8b70();
   input += synapse0x30c8bb0();
   input += synapse0x30c8bf0();
   input += synapse0x30c8c30();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30c82a0() {
   double input = input0x30c82a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30c8c70() {
   double input = -0.312456;
   input += synapse0x30c8fb0();
   input += synapse0x30c8ff0();
   input += synapse0x30c9030();
   input += synapse0x30c9070();
   input += synapse0x30c90b0();
   input += synapse0x30c90f0();
   input += synapse0x30c9130();
   input += synapse0x30c9170();
   input += synapse0x30c91b0();
   input += synapse0x30c91f0();
   input += synapse0x30c9230();
   input += synapse0x30c9270();
   input += synapse0x30c92b0();
   input += synapse0x30c92f0();
   input += synapse0x30c9330();
   input += synapse0x30c9370();
   input += synapse0x30c8e00();
   input += synapse0x30c8e40();
   input += synapse0x30c94c0();
   input += synapse0x30c9500();
   input += synapse0x30c9540();
   input += synapse0x30c9580();
   input += synapse0x30c95c0();
   input += synapse0x30c9600();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30c8c70() {
   double input = input0x30c8c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30c9640() {
   double input = 0.910919;
   input += synapse0x30c9980();
   input += synapse0x30c99c0();
   input += synapse0x30c9a00();
   input += synapse0x30c9a40();
   input += synapse0x30c9a80();
   input += synapse0x30c9ac0();
   input += synapse0x30c9b00();
   input += synapse0x30c9b40();
   input += synapse0x30c9b80();
   input += synapse0x30c9bc0();
   input += synapse0x30c9c00();
   input += synapse0x30c9c40();
   input += synapse0x30c9c80();
   input += synapse0x30c9cc0();
   input += synapse0x30c9d00();
   input += synapse0x30c9d40();
   input += synapse0x30c97d0();
   input += synapse0x30c9810();
   input += synapse0x30c9e90();
   input += synapse0x30c9ed0();
   input += synapse0x30c9f10();
   input += synapse0x30c9f50();
   input += synapse0x30c9f90();
   input += synapse0x30c9fd0();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30c9640() {
   double input = input0x30c9640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30d0840() {
   double input = -0.496028;
   input += synapse0x30a6570();
   input += synapse0x30a65b0();
   input += synapse0x30a7a80();
   input += synapse0x30a7ac0();
   input += synapse0x30a8450();
   input += synapse0x30a8490();
   input += synapse0x30a9220();
   input += synapse0x30a9260();
   input += synapse0x30a9bf0();
   input += synapse0x30a9c30();
   input += synapse0x30aa5c0();
   input += synapse0x30aa600();
   input += synapse0x30ab0a0();
   input += synapse0x30ab0e0();
   input += synapse0x30aba70();
   input += synapse0x30abab0();
   input += synapse0x30a8b50();
   input += synapse0x30a8b90();
   input += synapse0x30ad620();
   input += synapse0x30ad660();
   input += synapse0x30adff0();
   input += synapse0x30ae030();
   input += synapse0x30ae9c0();
   input += synapse0x30aea00();
   input += synapse0x30af390();
   input += synapse0x30af3d0();
   input += synapse0x30a3500();
   input += synapse0x30a3540();
   input += synapse0x30b1480();
   input += synapse0x30b14c0();
   input += synapse0x30b1e50();
   input += synapse0x30b1e90();
   input += synapse0x30b2820();
   input += synapse0x30b2860();
   input += synapse0x30b31f0();
   input += synapse0x30b3230();
   input += synapse0x30b3bc0();
   input += synapse0x30b3c00();
   input += synapse0x30ac710();
   input += synapse0x30ac750();
   input += synapse0x30b5fc0();
   input += synapse0x30b6000();
   input += synapse0x30b6950();
   input += synapse0x30b6990();
   input += synapse0x30b7320();
   input += synapse0x30b7360();
   input += synapse0x30b7cf0();
   input += synapse0x30b7d30();
   input += synapse0x30b86c0();
   input += synapse0x30b8700();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30d0840() {
   double input = input0x30d0840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30d0be0() {
   double input = 0.212381;
   input += synapse0x30bae00();
   input += synapse0x30bae40();
   input += synapse0x30b03c0();
   input += synapse0x30b0400();
   input += synapse0x30bd9e0();
   input += synapse0x30bda20();
   input += synapse0x30be3b0();
   input += synapse0x30be3f0();
   input += synapse0x30bed80();
   input += synapse0x30bedc0();
   input += synapse0x30bf750();
   input += synapse0x30bf790();
   input += synapse0x30c0120();
   input += synapse0x30c0160();
   input += synapse0x30c0af0();
   input += synapse0x30c0b30();
   input += synapse0x30c14c0();
   input += synapse0x30c1500();
   input += synapse0x30c1e90();
   input += synapse0x30c1ed0();
   input += synapse0x30c2a70();
   input += synapse0x30c2ab0();
   input += synapse0x30c3440();
   input += synapse0x30c3480();
   input += synapse0x30b42c0();
   input += synapse0x30b4300();
   input += synapse0x30b4c90();
   input += synapse0x30b4cd0();
   input += synapse0x30b5660();
   input += synapse0x30b56a0();
   input += synapse0x30c7b80();
   input += synapse0x30c7bc0();
   input += synapse0x30c8550();
   input += synapse0x30c8590();
   input += synapse0x30c8f20();
   input += synapse0x30c8f60();
   input += synapse0x30c98f0();
   input += synapse0x30c9930();
   input += synapse0x30a57e0();
   input += synapse0x30a5820();
   input += synapse0x30b9090();
   input += synapse0x30b90d0();
   input += synapse0x30ca010();
   input += synapse0x30ca050();
   input += synapse0x30ca090();
   input += synapse0x30ca0d0();
   input += synapse0x30d0f80();
   input += synapse0x30d0fc0();
   input += synapse0x30d1000();
   input += synapse0x30d1040();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30d0be0() {
   double input = input0x30d0be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30d1080() {
   double input = -0.431748;
   input += synapse0x30d13c0();
   input += synapse0x30d1400();
   input += synapse0x30d1440();
   input += synapse0x30d1480();
   input += synapse0x30d14c0();
   input += synapse0x30d1500();
   input += synapse0x30d1540();
   input += synapse0x30d1580();
   input += synapse0x30d15c0();
   input += synapse0x30d1600();
   input += synapse0x30d1640();
   input += synapse0x30d1680();
   input += synapse0x30d16c0();
   input += synapse0x30d1700();
   input += synapse0x30d1740();
   input += synapse0x30d1780();
   input += synapse0x30d1210();
   input += synapse0x30d1250();
   input += synapse0x30d18d0();
   input += synapse0x30d1910();
   input += synapse0x30d1950();
   input += synapse0x30d1990();
   input += synapse0x30d19d0();
   input += synapse0x30d1a10();
   input += synapse0x30d1a50();
   input += synapse0x30d1a90();
   input += synapse0x30d1ad0();
   input += synapse0x30d1b10();
   input += synapse0x30d1b50();
   input += synapse0x30d1b90();
   input += synapse0x30d1bd0();
   input += synapse0x30d1c10();
   input += synapse0x30d17c0();
   input += synapse0x30d1800();
   input += synapse0x30d1840();
   input += synapse0x30d1880();
   input += synapse0x30d1e60();
   input += synapse0x30d1ea0();
   input += synapse0x30d1ee0();
   input += synapse0x30d1f20();
   input += synapse0x30d1f60();
   input += synapse0x30d1fa0();
   input += synapse0x30d1fe0();
   input += synapse0x30d2020();
   input += synapse0x30d2060();
   input += synapse0x30d20a0();
   input += synapse0x30d20e0();
   input += synapse0x30d2120();
   input += synapse0x30d2160();
   input += synapse0x30d21a0();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30d1080() {
   double input = input0x30d1080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30d21e0() {
   double input = -1.14125;
   input += synapse0x30d2520();
   input += synapse0x30d2560();
   input += synapse0x30d25a0();
   input += synapse0x30d25e0();
   input += synapse0x30d2620();
   input += synapse0x30d2660();
   input += synapse0x30d26a0();
   input += synapse0x30d26e0();
   input += synapse0x30d2720();
   input += synapse0x30d2760();
   input += synapse0x30d27a0();
   input += synapse0x30d27e0();
   input += synapse0x30d2820();
   input += synapse0x30d2860();
   input += synapse0x30d28a0();
   input += synapse0x30d28e0();
   input += synapse0x30d2370();
   input += synapse0x30d23b0();
   input += synapse0x30d2a30();
   input += synapse0x30d2a70();
   input += synapse0x30d2ab0();
   input += synapse0x30d2af0();
   input += synapse0x30d2b30();
   input += synapse0x30d2b70();
   input += synapse0x30d2bb0();
   input += synapse0x30d2bf0();
   input += synapse0x30d2c30();
   input += synapse0x30d2c70();
   input += synapse0x30d2cb0();
   input += synapse0x30d2cf0();
   input += synapse0x30d2d30();
   input += synapse0x30d2d70();
   input += synapse0x30d2920();
   input += synapse0x30d2960();
   input += synapse0x30d29a0();
   input += synapse0x30d29e0();
   input += synapse0x30d2fc0();
   input += synapse0x30d3000();
   input += synapse0x30d3040();
   input += synapse0x30d3080();
   input += synapse0x30d30c0();
   input += synapse0x30d3100();
   input += synapse0x30d3140();
   input += synapse0x30d3180();
   input += synapse0x30d31c0();
   input += synapse0x30d3200();
   input += synapse0x30d3240();
   input += synapse0x30d3280();
   input += synapse0x30d32c0();
   input += synapse0x30d3300();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30d21e0() {
   double input = input0x30d21e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30d3340() {
   double input = 0.784914;
   input += synapse0x30d3680();
   input += synapse0x30d36c0();
   input += synapse0x30d3700();
   input += synapse0x30d3740();
   input += synapse0x30d3780();
   input += synapse0x30d37c0();
   input += synapse0x30d3800();
   input += synapse0x30d3840();
   input += synapse0x30d3880();
   input += synapse0x30d38c0();
   input += synapse0x30d3900();
   input += synapse0x30d3940();
   input += synapse0x30d3980();
   input += synapse0x30d39c0();
   input += synapse0x30d3a00();
   input += synapse0x30d3a40();
   input += synapse0x30d34d0();
   input += synapse0x30d3510();
   input += synapse0x30d3b90();
   input += synapse0x30d3bd0();
   input += synapse0x30d3c10();
   input += synapse0x30d3c50();
   input += synapse0x30d3c90();
   input += synapse0x30d3cd0();
   input += synapse0x30d3d10();
   input += synapse0x30d3d50();
   input += synapse0x30d3d90();
   input += synapse0x30d3dd0();
   input += synapse0x30d3e10();
   input += synapse0x30d3e50();
   input += synapse0x30d3e90();
   input += synapse0x30d3ed0();
   input += synapse0x30d3a80();
   input += synapse0x30d3ac0();
   input += synapse0x30d3b00();
   input += synapse0x30d3b40();
   input += synapse0x30d4120();
   input += synapse0x30d4160();
   input += synapse0x30d41a0();
   input += synapse0x30d41e0();
   input += synapse0x30d4220();
   input += synapse0x30d4260();
   input += synapse0x30d42a0();
   input += synapse0x30d42e0();
   input += synapse0x30d4320();
   input += synapse0x30d4360();
   input += synapse0x30d43a0();
   input += synapse0x30d43e0();
   input += synapse0x30d4420();
   input += synapse0x30d4460();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30d3340() {
   double input = input0x30d3340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x30d44a0() {
   double input = 5.11855;
   input += synapse0x30a5580();
   input += synapse0x30d46c0();
   input += synapse0x30d4700();
   input += synapse0x30d4740();
   input += synapse0x30d4780();
   return input;
}

double NNfunction_sb_sLuR::neuron0x30d44a0() {
   double input = input0x30d44a0();
   return (input * 1)+0;
}

double NNfunction_sb_sLuR::synapse0x2e603d0() {
   return (neuron0x30a0560()*-0.190934);
}

double NNfunction_sb_sLuR::synapse0x30a0420() {
   return (neuron0x30a08a0()*0.201759);
}

double NNfunction_sb_sLuR::synapse0x30a0460() {
   return (neuron0x30a0be0()*0.0466783);
}

double NNfunction_sb_sLuR::synapse0x30a5870() {
   return (neuron0x30a0f20()*0.305303);
}

double NNfunction_sb_sLuR::synapse0x30a58b0() {
   return (neuron0x30a1260()*-0.0136723);
}

double NNfunction_sb_sLuR::synapse0x30a58f0() {
   return (neuron0x30a15a0()*0.12039);
}

double NNfunction_sb_sLuR::synapse0x30a5930() {
   return (neuron0x30a18e0()*0.474372);
}

double NNfunction_sb_sLuR::synapse0x30a5970() {
   return (neuron0x30a1c20()*-0.517167);
}

double NNfunction_sb_sLuR::synapse0x30a59b0() {
   return (neuron0x30a1f60()*-0.375985);
}

double NNfunction_sb_sLuR::synapse0x30a59f0() {
   return (neuron0x30a22a0()*-0.227851);
}

double NNfunction_sb_sLuR::synapse0x30a5a30() {
   return (neuron0x30a25e0()*0.525984);
}

double NNfunction_sb_sLuR::synapse0x30a5a70() {
   return (neuron0x30a2920()*0.00319753);
}

double NNfunction_sb_sLuR::synapse0x30a5ab0() {
   return (neuron0x30a2c60()*-0.769687);
}

double NNfunction_sb_sLuR::synapse0x30a5af0() {
   return (neuron0x30a2fa0()*-0.0173266);
}

double NNfunction_sb_sLuR::synapse0x30a5b30() {
   return (neuron0x30a32e0()*0.37692);
}

double NNfunction_sb_sLuR::synapse0x30a5b70() {
   return (neuron0x30a3620()*-0.370857);
}

double NNfunction_sb_sLuR::synapse0x30a0390() {
   return (neuron0x30a3960()*-0.674777);
}

double NNfunction_sb_sLuR::synapse0x30a03d0() {
   return (neuron0x30a3ec0()*-0.123617);
}

double NNfunction_sb_sLuR::synapse0x2e51c70() {
   return (neuron0x30a40e0()*-0.709605);
}

double NNfunction_sb_sLuR::synapse0x2e51cb0() {
   return (neuron0x30a4420()*-0.310338);
}

double NNfunction_sb_sLuR::synapse0x30a5dd0() {
   return (neuron0x30a4760()*-0.0162884);
}

double NNfunction_sb_sLuR::synapse0x30a5e10() {
   return (neuron0x30a4aa0()*0.120343);
}

double NNfunction_sb_sLuR::synapse0x30a5e50() {
   return (neuron0x30a4de0()*0.203159);
}

double NNfunction_sb_sLuR::synapse0x30a5e90() {
   return (neuron0x30a5120()*0.577473);
}

double NNfunction_sb_sLuR::synapse0x30a6210() {
   return (neuron0x30a0560()*-0.00640494);
}

double NNfunction_sb_sLuR::synapse0x30a6250() {
   return (neuron0x30a08a0()*-0.0340417);
}

double NNfunction_sb_sLuR::synapse0x30a6290() {
   return (neuron0x30a0be0()*-0.00146311);
}

double NNfunction_sb_sLuR::synapse0x30a62d0() {
   return (neuron0x30a0f20()*-0.0993464);
}

double NNfunction_sb_sLuR::synapse0x30a6310() {
   return (neuron0x30a1260()*-0.00390317);
}

double NNfunction_sb_sLuR::synapse0x30a6350() {
   return (neuron0x30a15a0()*-0.0132623);
}

double NNfunction_sb_sLuR::synapse0x30a6390() {
   return (neuron0x30a18e0()*0.00079386);
}

double NNfunction_sb_sLuR::synapse0x30a63d0() {
   return (neuron0x30a1c20()*0.00864271);
}

double NNfunction_sb_sLuR::synapse0x30a6410() {
   return (neuron0x30a1f60()*-0.0243868);
}

double NNfunction_sb_sLuR::synapse0x30a5cc0() {
   return (neuron0x30a22a0()*-0.00369741);
}

double NNfunction_sb_sLuR::synapse0x30a5d00() {
   return (neuron0x30a25e0()*-0.0154198);
}

double NNfunction_sb_sLuR::synapse0x30a5d40() {
   return (neuron0x30a2920()*0.0851131);
}

double NNfunction_sb_sLuR::synapse0x30a5d80() {
   return (neuron0x30a2c60()*-0.730581);
}

double NNfunction_sb_sLuR::synapse0x30a6660() {
   return (neuron0x30a2fa0()*-0.00491074);
}

double NNfunction_sb_sLuR::synapse0x30a66a0() {
   return (neuron0x30a32e0()*-0.790827);
}

double NNfunction_sb_sLuR::synapse0x30a66e0() {
   return (neuron0x30a3620()*0.0548817);
}

double NNfunction_sb_sLuR::synapse0x30a6060() {
   return (neuron0x30a3960()*0.00246936);
}

double NNfunction_sb_sLuR::synapse0x30a60a0() {
   return (neuron0x30a3ec0()*0.0366289);
}

double NNfunction_sb_sLuR::synapse0x30a6830() {
   return (neuron0x30a40e0()*0.0331591);
}

double NNfunction_sb_sLuR::synapse0x30a6870() {
   return (neuron0x30a4420()*-0.0290539);
}

double NNfunction_sb_sLuR::synapse0x30a68b0() {
   return (neuron0x30a4760()*0.0326668);
}

double NNfunction_sb_sLuR::synapse0x30a68f0() {
   return (neuron0x30a4aa0()*0.00328451);
}

double NNfunction_sb_sLuR::synapse0x30a6930() {
   return (neuron0x30a4de0()*-0.0200033);
}

double NNfunction_sb_sLuR::synapse0x30a6970() {
   return (neuron0x30a5120()*-0.0084069);
}

double NNfunction_sb_sLuR::synapse0x30a6cf0() {
   return (neuron0x30a0560()*0.00557136);
}

double NNfunction_sb_sLuR::synapse0x30a6d30() {
   return (neuron0x30a08a0()*-0.0024848);
}

double NNfunction_sb_sLuR::synapse0x30a6d70() {
   return (neuron0x30a0be0()*0.0140449);
}

double NNfunction_sb_sLuR::synapse0x30a6db0() {
   return (neuron0x30a0f20()*0.081323);
}

double NNfunction_sb_sLuR::synapse0x30a6df0() {
   return (neuron0x30a1260()*0.0050929);
}

double NNfunction_sb_sLuR::synapse0x30a6e30() {
   return (neuron0x30a15a0()*-0.00719899);
}

double NNfunction_sb_sLuR::synapse0x30a6e70() {
   return (neuron0x30a18e0()*0.019142);
}

double NNfunction_sb_sLuR::synapse0x30a6eb0() {
   return (neuron0x30a1c20()*0.00952106);
}

double NNfunction_sb_sLuR::synapse0x30a6ef0() {
   return (neuron0x30a1f60()*-0.0194745);
}

double NNfunction_sb_sLuR::synapse0x30a6f30() {
   return (neuron0x30a22a0()*0.00261449);
}

double NNfunction_sb_sLuR::synapse0x30a6f70() {
   return (neuron0x30a25e0()*-0.0249303);
}

double NNfunction_sb_sLuR::synapse0x30a6fb0() {
   return (neuron0x30a2920()*0.0161163);
}

double NNfunction_sb_sLuR::synapse0x30a6ff0() {
   return (neuron0x30a2c60()*1.46806);
}

double NNfunction_sb_sLuR::synapse0x30a7030() {
   return (neuron0x30a2fa0()*0.00121458);
}

double NNfunction_sb_sLuR::synapse0x30a7070() {
   return (neuron0x30a32e0()*-0.449747);
}

double NNfunction_sb_sLuR::synapse0x30a70b0() {
   return (neuron0x30a3620()*-0.0089189);
}

double NNfunction_sb_sLuR::synapse0x30a6b40() {
   return (neuron0x30a3960()*-0.0382605);
}

double NNfunction_sb_sLuR::synapse0x30a6b80() {
   return (neuron0x30a3ec0()*-0.00284233);
}

double NNfunction_sb_sLuR::synapse0x2e5fac0() {
   return (neuron0x30a40e0()*0.0147885);
}

double NNfunction_sb_sLuR::synapse0x2e5fb00() {
   return (neuron0x30a4420()*-0.00483934);
}

double NNfunction_sb_sLuR::synapse0x308f5f0() {
   return (neuron0x30a4760()*0.00205538);
}

double NNfunction_sb_sLuR::synapse0x308f630() {
   return (neuron0x30a4aa0()*0.000852358);
}

double NNfunction_sb_sLuR::synapse0x308f670() {
   return (neuron0x30a4de0()*0.00333193);
}

double NNfunction_sb_sLuR::synapse0x30a04a0() {
   return (neuron0x30a5120()*0.0129462);
}

double NNfunction_sb_sLuR::synapse0x30a6600() {
   return (neuron0x30a0560()*0.0863716);
}

double NNfunction_sb_sLuR::synapse0x30a04e0() {
   return (neuron0x30a08a0()*-0.482176);
}

double NNfunction_sb_sLuR::synapse0x30a0520() {
   return (neuron0x30a0be0()*0.0651562);
}

double NNfunction_sb_sLuR::synapse0x30a7200() {
   return (neuron0x30a0f20()*-0.468409);
}

double NNfunction_sb_sLuR::synapse0x30a7240() {
   return (neuron0x30a1260()*0.13183);
}

double NNfunction_sb_sLuR::synapse0x30a7280() {
   return (neuron0x30a15a0()*0.0970354);
}

double NNfunction_sb_sLuR::synapse0x30a72c0() {
   return (neuron0x30a18e0()*0.0181734);
}

double NNfunction_sb_sLuR::synapse0x30a7300() {
   return (neuron0x30a1c20()*-0.108096);
}

double NNfunction_sb_sLuR::synapse0x30a7340() {
   return (neuron0x30a1f60()*0.005997);
}

double NNfunction_sb_sLuR::synapse0x30a7380() {
   return (neuron0x30a22a0()*0.269226);
}

double NNfunction_sb_sLuR::synapse0x30a73c0() {
   return (neuron0x30a25e0()*-0.300134);
}

double NNfunction_sb_sLuR::synapse0x30a7400() {
   return (neuron0x30a2920()*0.332271);
}

double NNfunction_sb_sLuR::synapse0x30a7440() {
   return (neuron0x30a2c60()*-0.298451);
}

double NNfunction_sb_sLuR::synapse0x30a7480() {
   return (neuron0x30a2fa0()*-0.222474);
}

double NNfunction_sb_sLuR::synapse0x30a74c0() {
   return (neuron0x30a32e0()*-0.133301);
}

double NNfunction_sb_sLuR::synapse0x30a7500() {
   return (neuron0x30a3620()*0.04306);
}

double NNfunction_sb_sLuR::synapse0x30a6450() {
   return (neuron0x30a3960()*0.257691);
}

double NNfunction_sb_sLuR::synapse0x30a6490() {
   return (neuron0x30a3ec0()*-0.505965);
}

double NNfunction_sb_sLuR::synapse0x30a7650() {
   return (neuron0x30a40e0()*0.227464);
}

double NNfunction_sb_sLuR::synapse0x30a7690() {
   return (neuron0x30a4420()*-0.524453);
}

double NNfunction_sb_sLuR::synapse0x30a76d0() {
   return (neuron0x30a4760()*0.290348);
}

double NNfunction_sb_sLuR::synapse0x30a7710() {
   return (neuron0x30a4aa0()*0.182332);
}

double NNfunction_sb_sLuR::synapse0x30a7750() {
   return (neuron0x30a4de0()*0.299957);
}

double NNfunction_sb_sLuR::synapse0x30a7790() {
   return (neuron0x30a5120()*0.0277392);
}

double NNfunction_sb_sLuR::synapse0x30a7b10() {
   return (neuron0x30a0560()*-0.026955);
}

double NNfunction_sb_sLuR::synapse0x30a7b50() {
   return (neuron0x30a08a0()*0.0138333);
}

double NNfunction_sb_sLuR::synapse0x30a7b90() {
   return (neuron0x30a0be0()*-0.0205581);
}

double NNfunction_sb_sLuR::synapse0x30a7bd0() {
   return (neuron0x30a0f20()*-0.128108);
}

double NNfunction_sb_sLuR::synapse0x30a7c10() {
   return (neuron0x30a1260()*-0.0369788);
}

double NNfunction_sb_sLuR::synapse0x30a7c50() {
   return (neuron0x30a15a0()*-0.0179303);
}

double NNfunction_sb_sLuR::synapse0x30a7c90() {
   return (neuron0x30a18e0()*-0.0237942);
}

double NNfunction_sb_sLuR::synapse0x30a7cd0() {
   return (neuron0x30a1c20()*0.0140273);
}

double NNfunction_sb_sLuR::synapse0x30a7d10() {
   return (neuron0x30a1f60()*0.0397603);
}

double NNfunction_sb_sLuR::synapse0x30a7d50() {
   return (neuron0x30a22a0()*-0.0155504);
}

double NNfunction_sb_sLuR::synapse0x30a7d90() {
   return (neuron0x30a25e0()*0.0329365);
}

double NNfunction_sb_sLuR::synapse0x30a7dd0() {
   return (neuron0x30a2920()*0.0280573);
}

double NNfunction_sb_sLuR::synapse0x30a7e10() {
   return (neuron0x30a2c60()*-0.536107);
}

double NNfunction_sb_sLuR::synapse0x30a7e50() {
   return (neuron0x30a2fa0()*0.0199299);
}

double NNfunction_sb_sLuR::synapse0x30a7e90() {
   return (neuron0x30a32e0()*2.66698);
}

double NNfunction_sb_sLuR::synapse0x30a7ed0() {
   return (neuron0x30a3620()*0.0524128);
}

double NNfunction_sb_sLuR::synapse0x30a7960() {
   return (neuron0x30a3960()*0.0700112);
}

double NNfunction_sb_sLuR::synapse0x30a79a0() {
   return (neuron0x30a3ec0()*-0.0310049);
}

double NNfunction_sb_sLuR::synapse0x30a8020() {
   return (neuron0x30a40e0()*0.044101);
}

double NNfunction_sb_sLuR::synapse0x30a8060() {
   return (neuron0x30a4420()*0.0394375);
}

double NNfunction_sb_sLuR::synapse0x30a80a0() {
   return (neuron0x30a4760()*-0.0179749);
}

double NNfunction_sb_sLuR::synapse0x30a80e0() {
   return (neuron0x30a4aa0()*-0.0113518);
}

double NNfunction_sb_sLuR::synapse0x30a8120() {
   return (neuron0x30a4de0()*0.0379192);
}

double NNfunction_sb_sLuR::synapse0x30a8160() {
   return (neuron0x30a5120()*-0.00648159);
}

double NNfunction_sb_sLuR::synapse0x30a84e0() {
   return (neuron0x30a0560()*0.00632021);
}

double NNfunction_sb_sLuR::synapse0x30a8520() {
   return (neuron0x30a08a0()*0.0134022);
}

double NNfunction_sb_sLuR::synapse0x30a8560() {
   return (neuron0x30a0be0()*-0.112236);
}

double NNfunction_sb_sLuR::synapse0x30a85a0() {
   return (neuron0x30a0f20()*-0.0571059);
}

double NNfunction_sb_sLuR::synapse0x30a85e0() {
   return (neuron0x30a1260()*-0.0394715);
}

double NNfunction_sb_sLuR::synapse0x30a8620() {
   return (neuron0x30a15a0()*-0.0617975);
}

double NNfunction_sb_sLuR::synapse0x30a8660() {
   return (neuron0x30a18e0()*-0.0756767);
}

double NNfunction_sb_sLuR::synapse0x30a86a0() {
   return (neuron0x30a1c20()*-0.0150075);
}

double NNfunction_sb_sLuR::synapse0x30a86e0() {
   return (neuron0x30a1f60()*0.00790391);
}

double NNfunction_sb_sLuR::synapse0x2e5fe30() {
   return (neuron0x30a22a0()*0.00642728);
}

double NNfunction_sb_sLuR::synapse0x2e5fe70() {
   return (neuron0x30a25e0()*-0.0434259);
}

double NNfunction_sb_sLuR::synapse0x2e5feb0() {
   return (neuron0x30a2920()*0.0264026);
}

double NNfunction_sb_sLuR::synapse0x2e5fef0() {
   return (neuron0x30a2c60()*-0.25243);
}

double NNfunction_sb_sLuR::synapse0x2e5ff30() {
   return (neuron0x30a2fa0()*-0.0830804);
}

double NNfunction_sb_sLuR::synapse0x2e5ff70() {
   return (neuron0x30a32e0()*0.614646);
}

double NNfunction_sb_sLuR::synapse0x2e5ffb0() {
   return (neuron0x30a3620()*-0.264195);
}

double NNfunction_sb_sLuR::synapse0x30a8330() {
   return (neuron0x30a3960()*-0.14831);
}

double NNfunction_sb_sLuR::synapse0x30a8370() {
   return (neuron0x30a3ec0()*0.0325434);
}

double NNfunction_sb_sLuR::synapse0x2e60100() {
   return (neuron0x30a40e0()*-0.0339266);
}

double NNfunction_sb_sLuR::synapse0x2e60140() {
   return (neuron0x30a4420()*0.073335);
}

double NNfunction_sb_sLuR::synapse0x2e60180() {
   return (neuron0x30a4760()*0.0459119);
}

double NNfunction_sb_sLuR::synapse0x2e601c0() {
   return (neuron0x30a4aa0()*0.042707);
}

double NNfunction_sb_sLuR::synapse0x2e60200() {
   return (neuron0x30a4de0()*0.0629887);
}

double NNfunction_sb_sLuR::synapse0x30a8f30() {
   return (neuron0x30a5120()*-0.12102);
}

double NNfunction_sb_sLuR::synapse0x30a92b0() {
   return (neuron0x30a0560()*-0.290794);
}

double NNfunction_sb_sLuR::synapse0x30a92f0() {
   return (neuron0x30a08a0()*0.457396);
}

double NNfunction_sb_sLuR::synapse0x30a9330() {
   return (neuron0x30a0be0()*0.0380144);
}

double NNfunction_sb_sLuR::synapse0x30a9370() {
   return (neuron0x30a0f20()*-0.275486);
}

double NNfunction_sb_sLuR::synapse0x30a93b0() {
   return (neuron0x30a1260()*-0.338818);
}

double NNfunction_sb_sLuR::synapse0x30a93f0() {
   return (neuron0x30a15a0()*0.406862);
}

double NNfunction_sb_sLuR::synapse0x30a9430() {
   return (neuron0x30a18e0()*-1.17782);
}

double NNfunction_sb_sLuR::synapse0x30a9470() {
   return (neuron0x30a1c20()*0.26824);
}

double NNfunction_sb_sLuR::synapse0x30a94b0() {
   return (neuron0x30a1f60()*0.219466);
}

double NNfunction_sb_sLuR::synapse0x30a94f0() {
   return (neuron0x30a22a0()*0.304992);
}

double NNfunction_sb_sLuR::synapse0x30a9530() {
   return (neuron0x30a25e0()*0.341936);
}

double NNfunction_sb_sLuR::synapse0x30a9570() {
   return (neuron0x30a2920()*-0.123031);
}

double NNfunction_sb_sLuR::synapse0x30a95b0() {
   return (neuron0x30a2c60()*-0.49062);
}

double NNfunction_sb_sLuR::synapse0x30a95f0() {
   return (neuron0x30a2fa0()*-0.107444);
}

double NNfunction_sb_sLuR::synapse0x30a9630() {
   return (neuron0x30a32e0()*0.087262);
}

double NNfunction_sb_sLuR::synapse0x30a9670() {
   return (neuron0x30a3620()*0.600561);
}

double NNfunction_sb_sLuR::synapse0x30a9100() {
   return (neuron0x30a3960()*0.0570004);
}

double NNfunction_sb_sLuR::synapse0x30a9140() {
   return (neuron0x30a3ec0()*0.172128);
}

double NNfunction_sb_sLuR::synapse0x30a97c0() {
   return (neuron0x30a40e0()*0.00521034);
}

double NNfunction_sb_sLuR::synapse0x30a9800() {
   return (neuron0x30a4420()*0.00176384);
}

double NNfunction_sb_sLuR::synapse0x30a9840() {
   return (neuron0x30a4760()*0.0681919);
}

double NNfunction_sb_sLuR::synapse0x30a9880() {
   return (neuron0x30a4aa0()*-0.0269471);
}

double NNfunction_sb_sLuR::synapse0x30a98c0() {
   return (neuron0x30a4de0()*-0.0524084);
}

double NNfunction_sb_sLuR::synapse0x30a9900() {
   return (neuron0x30a5120()*0.0732657);
}

double NNfunction_sb_sLuR::synapse0x30a9c80() {
   return (neuron0x30a0560()*0.418451);
}

double NNfunction_sb_sLuR::synapse0x30a9cc0() {
   return (neuron0x30a08a0()*0.690121);
}

double NNfunction_sb_sLuR::synapse0x30a9d00() {
   return (neuron0x30a0be0()*0.129454);
}

double NNfunction_sb_sLuR::synapse0x30a9d40() {
   return (neuron0x30a0f20()*0.00733609);
}

double NNfunction_sb_sLuR::synapse0x30a9d80() {
   return (neuron0x30a1260()*-0.748396);
}

double NNfunction_sb_sLuR::synapse0x30a9dc0() {
   return (neuron0x30a15a0()*0.803214);
}

double NNfunction_sb_sLuR::synapse0x30a9e00() {
   return (neuron0x30a18e0()*0.253267);
}

double NNfunction_sb_sLuR::synapse0x30a9e40() {
   return (neuron0x30a1c20()*-0.635283);
}

double NNfunction_sb_sLuR::synapse0x30a9e80() {
   return (neuron0x30a1f60()*0.00337608);
}

double NNfunction_sb_sLuR::synapse0x30a9ec0() {
   return (neuron0x30a22a0()*0.155616);
}

double NNfunction_sb_sLuR::synapse0x30a9f00() {
   return (neuron0x30a25e0()*0.0853726);
}

double NNfunction_sb_sLuR::synapse0x30a9f40() {
   return (neuron0x30a2920()*0.463969);
}

double NNfunction_sb_sLuR::synapse0x30a9f80() {
   return (neuron0x30a2c60()*-0.161418);
}

double NNfunction_sb_sLuR::synapse0x30a9fc0() {
   return (neuron0x30a2fa0()*-0.151508);
}

double NNfunction_sb_sLuR::synapse0x30aa000() {
   return (neuron0x30a32e0()*-0.368058);
}

double NNfunction_sb_sLuR::synapse0x30aa040() {
   return (neuron0x30a3620()*0.525919);
}

double NNfunction_sb_sLuR::synapse0x30a9ad0() {
   return (neuron0x30a3960()*-0.488748);
}

double NNfunction_sb_sLuR::synapse0x30a9b10() {
   return (neuron0x30a3ec0()*0.285156);
}

double NNfunction_sb_sLuR::synapse0x30aa190() {
   return (neuron0x30a40e0()*-0.0227706);
}

double NNfunction_sb_sLuR::synapse0x30aa1d0() {
   return (neuron0x30a4420()*0.0745754);
}

double NNfunction_sb_sLuR::synapse0x30aa210() {
   return (neuron0x30a4760()*-0.204438);
}

double NNfunction_sb_sLuR::synapse0x30aa250() {
   return (neuron0x30a4aa0()*0.145609);
}

double NNfunction_sb_sLuR::synapse0x30aa290() {
   return (neuron0x30a4de0()*-0.263266);
}

double NNfunction_sb_sLuR::synapse0x30aa2d0() {
   return (neuron0x30a5120()*-0.143523);
}

double NNfunction_sb_sLuR::synapse0x30a3db0() {
   return (neuron0x30a0560()*0.0161682);
}

double NNfunction_sb_sLuR::synapse0x30a3df0() {
   return (neuron0x30a08a0()*0.181189);
}

double NNfunction_sb_sLuR::synapse0x30a3e30() {
   return (neuron0x30a0be0()*-0.687176);
}

double NNfunction_sb_sLuR::synapse0x30a3e70() {
   return (neuron0x30a0f20()*-0.226028);
}

double NNfunction_sb_sLuR::synapse0x30aa860() {
   return (neuron0x30a1260()*-0.0649432);
}

double NNfunction_sb_sLuR::synapse0x30aa8a0() {
   return (neuron0x30a15a0()*-0.0237304);
}

double NNfunction_sb_sLuR::synapse0x30aa8e0() {
   return (neuron0x30a18e0()*-0.0615196);
}

double NNfunction_sb_sLuR::synapse0x30aa920() {
   return (neuron0x30a1c20()*-0.00822756);
}

double NNfunction_sb_sLuR::synapse0x30aa960() {
   return (neuron0x30a1f60()*0.0208004);
}

double NNfunction_sb_sLuR::synapse0x30aa9a0() {
   return (neuron0x30a22a0()*0.0576471);
}

double NNfunction_sb_sLuR::synapse0x30aa9e0() {
   return (neuron0x30a25e0()*0.0762664);
}

double NNfunction_sb_sLuR::synapse0x30aaa20() {
   return (neuron0x30a2920()*-0.195634);
}

double NNfunction_sb_sLuR::synapse0x30aaa60() {
   return (neuron0x30a2c60()*0.395792);
}

double NNfunction_sb_sLuR::synapse0x30aaaa0() {
   return (neuron0x30a2fa0()*-0.00142922);
}

double NNfunction_sb_sLuR::synapse0x30aaae0() {
   return (neuron0x30a32e0()*0.107323);
}

double NNfunction_sb_sLuR::synapse0x30aab20() {
   return (neuron0x30a3620()*-0.128167);
}

double NNfunction_sb_sLuR::synapse0x30aa4a0() {
   return (neuron0x30a3960()*-0.021891);
}

double NNfunction_sb_sLuR::synapse0x30aa4e0() {
   return (neuron0x30a3ec0()*-0.138296);
}

double NNfunction_sb_sLuR::synapse0x30aac70() {
   return (neuron0x30a40e0()*-0.0884397);
}

double NNfunction_sb_sLuR::synapse0x30aacb0() {
   return (neuron0x30a4420()*0.116209);
}

double NNfunction_sb_sLuR::synapse0x30aacf0() {
   return (neuron0x30a4760()*-0.0119885);
}

double NNfunction_sb_sLuR::synapse0x30aad30() {
   return (neuron0x30a4aa0()*-0.00343162);
}

double NNfunction_sb_sLuR::synapse0x30aad70() {
   return (neuron0x30a4de0()*0.00959545);
}

double NNfunction_sb_sLuR::synapse0x30aadb0() {
   return (neuron0x30a5120()*-0.0119465);
}

double NNfunction_sb_sLuR::synapse0x30ab130() {
   return (neuron0x30a0560()*-0.0266737);
}

double NNfunction_sb_sLuR::synapse0x30ab170() {
   return (neuron0x30a08a0()*0.139121);
}

double NNfunction_sb_sLuR::synapse0x30ab1b0() {
   return (neuron0x30a0be0()*0.0751989);
}

double NNfunction_sb_sLuR::synapse0x30ab1f0() {
   return (neuron0x30a0f20()*-0.0229476);
}

double NNfunction_sb_sLuR::synapse0x30ab230() {
   return (neuron0x30a1260()*0.508858);
}

double NNfunction_sb_sLuR::synapse0x30ab270() {
   return (neuron0x30a15a0()*0.330636);
}

double NNfunction_sb_sLuR::synapse0x30ab2b0() {
   return (neuron0x30a18e0()*0.177041);
}

double NNfunction_sb_sLuR::synapse0x30ab2f0() {
   return (neuron0x30a1c20()*0.95622);
}

double NNfunction_sb_sLuR::synapse0x30ab330() {
   return (neuron0x30a1f60()*-0.308755);
}

double NNfunction_sb_sLuR::synapse0x30ab370() {
   return (neuron0x30a22a0()*0.037026);
}

double NNfunction_sb_sLuR::synapse0x30ab3b0() {
   return (neuron0x30a25e0()*-0.12232);
}

double NNfunction_sb_sLuR::synapse0x30ab3f0() {
   return (neuron0x30a2920()*0.042426);
}

double NNfunction_sb_sLuR::synapse0x30ab430() {
   return (neuron0x30a2c60()*0.810521);
}

double NNfunction_sb_sLuR::synapse0x30ab470() {
   return (neuron0x30a2fa0()*0.0196067);
}

double NNfunction_sb_sLuR::synapse0x30ab4b0() {
   return (neuron0x30a32e0()*1.07206);
}

double NNfunction_sb_sLuR::synapse0x30ab4f0() {
   return (neuron0x30a3620()*0.0768164);
}

double NNfunction_sb_sLuR::synapse0x30aaf80() {
   return (neuron0x30a3960()*0.132016);
}

double NNfunction_sb_sLuR::synapse0x30aafc0() {
   return (neuron0x30a3ec0()*0.0686166);
}

double NNfunction_sb_sLuR::synapse0x30ab640() {
   return (neuron0x30a40e0()*0.257476);
}

double NNfunction_sb_sLuR::synapse0x30ab680() {
   return (neuron0x30a4420()*-0.21984);
}

double NNfunction_sb_sLuR::synapse0x30ab6c0() {
   return (neuron0x30a4760()*-0.00732028);
}

double NNfunction_sb_sLuR::synapse0x30ab700() {
   return (neuron0x30a4aa0()*0.323469);
}

double NNfunction_sb_sLuR::synapse0x30ab740() {
   return (neuron0x30a4de0()*-0.0966982);
}

double NNfunction_sb_sLuR::synapse0x30ab780() {
   return (neuron0x30a5120()*0.143354);
}

double NNfunction_sb_sLuR::synapse0x30abb00() {
   return (neuron0x30a0560()*0.00557294);
}

double NNfunction_sb_sLuR::synapse0x30abb40() {
   return (neuron0x30a08a0()*0.0325384);
}

double NNfunction_sb_sLuR::synapse0x30abb80() {
   return (neuron0x30a0be0()*-1.1745);
}

double NNfunction_sb_sLuR::synapse0x30abbc0() {
   return (neuron0x30a0f20()*-0.181745);
}

double NNfunction_sb_sLuR::synapse0x30abc00() {
   return (neuron0x30a1260()*0.0104166);
}

double NNfunction_sb_sLuR::synapse0x30abc40() {
   return (neuron0x30a15a0()*0.024156);
}

double NNfunction_sb_sLuR::synapse0x30abc80() {
   return (neuron0x30a18e0()*0.00716531);
}

double NNfunction_sb_sLuR::synapse0x30abcc0() {
   return (neuron0x30a1c20()*0.00313649);
}

double NNfunction_sb_sLuR::synapse0x30abd00() {
   return (neuron0x30a1f60()*0.00796071);
}

double NNfunction_sb_sLuR::synapse0x30abd40() {
   return (neuron0x30a22a0()*0.0335957);
}

double NNfunction_sb_sLuR::synapse0x30abd80() {
   return (neuron0x30a25e0()*-0.0118481);
}

double NNfunction_sb_sLuR::synapse0x30abdc0() {
   return (neuron0x30a2920()*0.00902632);
}

double NNfunction_sb_sLuR::synapse0x30abe00() {
   return (neuron0x30a2c60()*1.37998);
}

double NNfunction_sb_sLuR::synapse0x30abe40() {
   return (neuron0x30a2fa0()*-0.0464289);
}

double NNfunction_sb_sLuR::synapse0x30abe80() {
   return (neuron0x30a32e0()*-0.0733277);
}

double NNfunction_sb_sLuR::synapse0x30abec0() {
   return (neuron0x30a3620()*0.00416503);
}

double NNfunction_sb_sLuR::synapse0x30ab950() {
   return (neuron0x30a3960()*-0.0372286);
}

double NNfunction_sb_sLuR::synapse0x30ab990() {
   return (neuron0x30a3ec0()*-0.00334145);
}

double NNfunction_sb_sLuR::synapse0x30a8720() {
   return (neuron0x30a40e0()*0.00671049);
}

double NNfunction_sb_sLuR::synapse0x30a8760() {
   return (neuron0x30a4420()*-0.0317916);
}

double NNfunction_sb_sLuR::synapse0x30a87a0() {
   return (neuron0x30a4760()*0.033633);
}

double NNfunction_sb_sLuR::synapse0x30a87e0() {
   return (neuron0x30a4aa0()*-0.0153717);
}

double NNfunction_sb_sLuR::synapse0x30a8820() {
   return (neuron0x30a4de0()*0.0412666);
}

double NNfunction_sb_sLuR::synapse0x30a8860() {
   return (neuron0x30a5120()*0.0122876);
}

double NNfunction_sb_sLuR::synapse0x30a8be0() {
   return (neuron0x30a0560()*-0.337914);
}

double NNfunction_sb_sLuR::synapse0x30a8c20() {
   return (neuron0x30a08a0()*0.56386);
}

double NNfunction_sb_sLuR::synapse0x30a8c60() {
   return (neuron0x30a0be0()*0.514848);
}

double NNfunction_sb_sLuR::synapse0x30a8ca0() {
   return (neuron0x30a0f20()*0.423149);
}

double NNfunction_sb_sLuR::synapse0x30a8ce0() {
   return (neuron0x30a1260()*0.0058578);
}

double NNfunction_sb_sLuR::synapse0x30a8d20() {
   return (neuron0x30a15a0()*-0.192013);
}

double NNfunction_sb_sLuR::synapse0x30a8d60() {
   return (neuron0x30a18e0()*0.0644454);
}

double NNfunction_sb_sLuR::synapse0x30a8da0() {
   return (neuron0x30a1c20()*0.679933);
}

double NNfunction_sb_sLuR::synapse0x30a8de0() {
   return (neuron0x30a1f60()*-0.0807113);
}

double NNfunction_sb_sLuR::synapse0x30a8e20() {
   return (neuron0x30a22a0()*0.6951);
}

double NNfunction_sb_sLuR::synapse0x30a8e60() {
   return (neuron0x30a25e0()*0.255638);
}

double NNfunction_sb_sLuR::synapse0x30a8ea0() {
   return (neuron0x30a2920()*0.286779);
}

double NNfunction_sb_sLuR::synapse0x30a8ee0() {
   return (neuron0x30a2c60()*-0.0576381);
}

double NNfunction_sb_sLuR::synapse0x30ad020() {
   return (neuron0x30a2fa0()*-0.459214);
}

double NNfunction_sb_sLuR::synapse0x30ad060() {
   return (neuron0x30a32e0()*0.162986);
}

double NNfunction_sb_sLuR::synapse0x30ad0a0() {
   return (neuron0x30a3620()*0.394348);
}

double NNfunction_sb_sLuR::synapse0x30a8a30() {
   return (neuron0x30a3960()*-0.526861);
}

double NNfunction_sb_sLuR::synapse0x30a8a70() {
   return (neuron0x30a3ec0()*-0.230426);
}

double NNfunction_sb_sLuR::synapse0x30ad1f0() {
   return (neuron0x30a40e0()*-0.258393);
}

double NNfunction_sb_sLuR::synapse0x30ad230() {
   return (neuron0x30a4420()*-0.0463929);
}

double NNfunction_sb_sLuR::synapse0x30ad270() {
   return (neuron0x30a4760()*-0.0160312);
}

double NNfunction_sb_sLuR::synapse0x30ad2b0() {
   return (neuron0x30a4aa0()*0.153119);
}

double NNfunction_sb_sLuR::synapse0x30ad2f0() {
   return (neuron0x30a4de0()*-0.289391);
}

double NNfunction_sb_sLuR::synapse0x30ad330() {
   return (neuron0x30a5120()*0.387592);
}

double NNfunction_sb_sLuR::synapse0x30ad6b0() {
   return (neuron0x30a0560()*0.252055);
}

double NNfunction_sb_sLuR::synapse0x30ad6f0() {
   return (neuron0x30a08a0()*-0.613252);
}

double NNfunction_sb_sLuR::synapse0x30ad730() {
   return (neuron0x30a0be0()*0.299118);
}

double NNfunction_sb_sLuR::synapse0x30ad770() {
   return (neuron0x30a0f20()*-1.59701);
}

double NNfunction_sb_sLuR::synapse0x30ad7b0() {
   return (neuron0x30a1260()*0.0955626);
}

double NNfunction_sb_sLuR::synapse0x30ad7f0() {
   return (neuron0x30a15a0()*-0.263798);
}

double NNfunction_sb_sLuR::synapse0x30ad830() {
   return (neuron0x30a18e0()*0.0580894);
}

double NNfunction_sb_sLuR::synapse0x30ad870() {
   return (neuron0x30a1c20()*-0.0153594);
}

double NNfunction_sb_sLuR::synapse0x30ad8b0() {
   return (neuron0x30a1f60()*-0.0250451);
}

double NNfunction_sb_sLuR::synapse0x30ad8f0() {
   return (neuron0x30a22a0()*0.10365);
}

double NNfunction_sb_sLuR::synapse0x30ad930() {
   return (neuron0x30a25e0()*0.429344);
}

double NNfunction_sb_sLuR::synapse0x30ad970() {
   return (neuron0x30a2920()*0.452743);
}

double NNfunction_sb_sLuR::synapse0x30ad9b0() {
   return (neuron0x30a2c60()*0.560723);
}

double NNfunction_sb_sLuR::synapse0x30ad9f0() {
   return (neuron0x30a2fa0()*-0.277099);
}

double NNfunction_sb_sLuR::synapse0x30ada30() {
   return (neuron0x30a32e0()*0.293747);
}

double NNfunction_sb_sLuR::synapse0x30ada70() {
   return (neuron0x30a3620()*0.0464543);
}

double NNfunction_sb_sLuR::synapse0x30ad500() {
   return (neuron0x30a3960()*0.00946627);
}

double NNfunction_sb_sLuR::synapse0x30ad540() {
   return (neuron0x30a3ec0()*0.149853);
}

double NNfunction_sb_sLuR::synapse0x30adbc0() {
   return (neuron0x30a40e0()*0.237752);
}

double NNfunction_sb_sLuR::synapse0x30adc00() {
   return (neuron0x30a4420()*-0.309833);
}

double NNfunction_sb_sLuR::synapse0x30adc40() {
   return (neuron0x30a4760()*0.0100811);
}

double NNfunction_sb_sLuR::synapse0x30adc80() {
   return (neuron0x30a4aa0()*0.0852091);
}

double NNfunction_sb_sLuR::synapse0x30adcc0() {
   return (neuron0x30a4de0()*-0.0549257);
}

double NNfunction_sb_sLuR::synapse0x30add00() {
   return (neuron0x30a5120()*0.294754);
}

double NNfunction_sb_sLuR::synapse0x30ae080() {
   return (neuron0x30a0560()*-0.572387);
}

double NNfunction_sb_sLuR::synapse0x30ae0c0() {
   return (neuron0x30a08a0()*0.78389);
}

double NNfunction_sb_sLuR::synapse0x30ae100() {
   return (neuron0x30a0be0()*0.110502);
}

double NNfunction_sb_sLuR::synapse0x30ae140() {
   return (neuron0x30a0f20()*-0.00428193);
}

double NNfunction_sb_sLuR::synapse0x30ae180() {
   return (neuron0x30a1260()*0.00391795);
}

double NNfunction_sb_sLuR::synapse0x30ae1c0() {
   return (neuron0x30a15a0()*-0.268921);
}

double NNfunction_sb_sLuR::synapse0x30ae200() {
   return (neuron0x30a18e0()*-0.0466982);
}

double NNfunction_sb_sLuR::synapse0x30ae240() {
   return (neuron0x30a1c20()*0.146647);
}

double NNfunction_sb_sLuR::synapse0x30ae280() {
   return (neuron0x30a1f60()*-0.150945);
}

double NNfunction_sb_sLuR::synapse0x30ae2c0() {
   return (neuron0x30a22a0()*0.398311);
}

double NNfunction_sb_sLuR::synapse0x30ae300() {
   return (neuron0x30a25e0()*0.76668);
}

double NNfunction_sb_sLuR::synapse0x30ae340() {
   return (neuron0x30a2920()*-0.543611);
}

double NNfunction_sb_sLuR::synapse0x30ae380() {
   return (neuron0x30a2c60()*0.794863);
}

double NNfunction_sb_sLuR::synapse0x30ae3c0() {
   return (neuron0x30a2fa0()*-0.332718);
}

double NNfunction_sb_sLuR::synapse0x30ae400() {
   return (neuron0x30a32e0()*0.563188);
}

double NNfunction_sb_sLuR::synapse0x30ae440() {
   return (neuron0x30a3620()*-0.455837);
}

double NNfunction_sb_sLuR::synapse0x30aded0() {
   return (neuron0x30a3960()*0.25622);
}

double NNfunction_sb_sLuR::synapse0x30adf10() {
   return (neuron0x30a3ec0()*-0.278205);
}

double NNfunction_sb_sLuR::synapse0x30ae590() {
   return (neuron0x30a40e0()*0.537091);
}

double NNfunction_sb_sLuR::synapse0x30ae5d0() {
   return (neuron0x30a4420()*-0.196485);
}

double NNfunction_sb_sLuR::synapse0x30ae610() {
   return (neuron0x30a4760()*-0.511094);
}

double NNfunction_sb_sLuR::synapse0x30ae650() {
   return (neuron0x30a4aa0()*0.355744);
}

double NNfunction_sb_sLuR::synapse0x30ae690() {
   return (neuron0x30a4de0()*-0.348015);
}

double NNfunction_sb_sLuR::synapse0x30ae6d0() {
   return (neuron0x30a5120()*0.0942717);
}

double NNfunction_sb_sLuR::synapse0x30aea50() {
   return (neuron0x30a0560()*-0.00162496);
}

double NNfunction_sb_sLuR::synapse0x30aea90() {
   return (neuron0x30a08a0()*0.0202808);
}

double NNfunction_sb_sLuR::synapse0x30aead0() {
   return (neuron0x30a0be0()*-0.0239018);
}

double NNfunction_sb_sLuR::synapse0x30aeb10() {
   return (neuron0x30a0f20()*10.0979);
}

double NNfunction_sb_sLuR::synapse0x30aeb50() {
   return (neuron0x30a1260()*0.0332804);
}

double NNfunction_sb_sLuR::synapse0x30aeb90() {
   return (neuron0x30a15a0()*-0.00534912);
}

double NNfunction_sb_sLuR::synapse0x30aebd0() {
   return (neuron0x30a18e0()*0.0274699);
}

double NNfunction_sb_sLuR::synapse0x30aec10() {
   return (neuron0x30a1c20()*0.0219286);
}

double NNfunction_sb_sLuR::synapse0x30aec50() {
   return (neuron0x30a1f60()*-0.0130993);
}

double NNfunction_sb_sLuR::synapse0x30aec90() {
   return (neuron0x30a22a0()*-0.00919841);
}

double NNfunction_sb_sLuR::synapse0x30aecd0() {
   return (neuron0x30a25e0()*-0.0144169);
}

double NNfunction_sb_sLuR::synapse0x30aed10() {
   return (neuron0x30a2920()*0.0228169);
}

double NNfunction_sb_sLuR::synapse0x30aed50() {
   return (neuron0x30a2c60()*0.0148584);
}

double NNfunction_sb_sLuR::synapse0x30aed90() {
   return (neuron0x30a2fa0()*-0.00568098);
}

double NNfunction_sb_sLuR::synapse0x30aedd0() {
   return (neuron0x30a32e0()*-0.48244);
}

double NNfunction_sb_sLuR::synapse0x30aee10() {
   return (neuron0x30a3620()*-0.0384388);
}

double NNfunction_sb_sLuR::synapse0x30ae8a0() {
   return (neuron0x30a3960()*0.000315625);
}

double NNfunction_sb_sLuR::synapse0x30ae8e0() {
   return (neuron0x30a3ec0()*0.00982497);
}

double NNfunction_sb_sLuR::synapse0x30aef60() {
   return (neuron0x30a40e0()*-0.0289711);
}

double NNfunction_sb_sLuR::synapse0x30aefa0() {
   return (neuron0x30a4420()*0.0180864);
}

double NNfunction_sb_sLuR::synapse0x30aefe0() {
   return (neuron0x30a4760()*0.00985807);
}

double NNfunction_sb_sLuR::synapse0x30af020() {
   return (neuron0x30a4aa0()*0.0132818);
}

double NNfunction_sb_sLuR::synapse0x30af060() {
   return (neuron0x30a4de0()*-0.0028501);
}

double NNfunction_sb_sLuR::synapse0x30af0a0() {
   return (neuron0x30a5120()*0.0162029);
}

double NNfunction_sb_sLuR::synapse0x30af420() {
   return (neuron0x30a0560()*-0.0297203);
}

double NNfunction_sb_sLuR::synapse0x30a0780() {
   return (neuron0x30a08a0()*0.10165);
}

double NNfunction_sb_sLuR::synapse0x30a07c0() {
   return (neuron0x30a0be0()*0.030909);
}

double NNfunction_sb_sLuR::synapse0x30a0ac0() {
   return (neuron0x30a0f20()*-2.37963);
}

double NNfunction_sb_sLuR::synapse0x30a0b00() {
   return (neuron0x30a1260()*-1.60299e-05);
}

double NNfunction_sb_sLuR::synapse0x30a0e00() {
   return (neuron0x30a15a0()*0.0256199);
}

double NNfunction_sb_sLuR::synapse0x30a0e40() {
   return (neuron0x30a18e0()*0.0433013);
}

double NNfunction_sb_sLuR::synapse0x30a1140() {
   return (neuron0x30a1c20()*-0.00490115);
}

double NNfunction_sb_sLuR::synapse0x30a1180() {
   return (neuron0x30a1f60()*-0.0171087);
}

double NNfunction_sb_sLuR::synapse0x30a1480() {
   return (neuron0x30a22a0()*0.00338963);
}

double NNfunction_sb_sLuR::synapse0x30a14c0() {
   return (neuron0x30a25e0()*-0.0630256);
}

double NNfunction_sb_sLuR::synapse0x30a17c0() {
   return (neuron0x30a2920()*-0.066602);
}

double NNfunction_sb_sLuR::synapse0x30a1800() {
   return (neuron0x30a2c60()*0.424566);
}

double NNfunction_sb_sLuR::synapse0x30a1b00() {
   return (neuron0x30a2fa0()*-0.048579);
}

double NNfunction_sb_sLuR::synapse0x30a1b40() {
   return (neuron0x30a32e0()*0.586005);
}

double NNfunction_sb_sLuR::synapse0x30a1e40() {
   return (neuron0x30a3620()*-0.0354505);
}

double NNfunction_sb_sLuR::synapse0x30a1e80() {
   return (neuron0x30a3960()*0.0119408);
}

double NNfunction_sb_sLuR::synapse0x30a2180() {
   return (neuron0x30a3ec0()*0.0344969);
}

double NNfunction_sb_sLuR::synapse0x30a21c0() {
   return (neuron0x30a40e0()*-0.0483211);
}

double NNfunction_sb_sLuR::synapse0x30a24c0() {
   return (neuron0x30a4420()*-0.044052);
}

double NNfunction_sb_sLuR::synapse0x30a2500() {
   return (neuron0x30a4760()*0.0699332);
}

double NNfunction_sb_sLuR::synapse0x30a2800() {
   return (neuron0x30a4aa0()*0.0496461);
}

double NNfunction_sb_sLuR::synapse0x30a2840() {
   return (neuron0x30a4de0()*0.00971786);
}

double NNfunction_sb_sLuR::synapse0x30a2b40() {
   return (neuron0x30a5120()*-0.0279099);
}

double NNfunction_sb_sLuR::synapse0x30a2b80() {
   return (neuron0x30a0560()*-0.0237257);
}

double NNfunction_sb_sLuR::synapse0x30a3840() {
   return (neuron0x30a08a0()*-0.597053);
}

double NNfunction_sb_sLuR::synapse0x30a3880() {
   return (neuron0x30a0be0()*-0.205722);
}

double NNfunction_sb_sLuR::synapse0x30af270() {
   return (neuron0x30a0f20()*-0.298848);
}

double NNfunction_sb_sLuR::synapse0x30af2b0() {
   return (neuron0x30a1260()*-0.0297265);
}

double NNfunction_sb_sLuR::synapse0x30a3b80() {
   return (neuron0x30a15a0()*-0.0336445);
}

double NNfunction_sb_sLuR::synapse0x30a3bc0() {
   return (neuron0x30a18e0()*0.139482);
}

double NNfunction_sb_sLuR::synapse0x2e51b50() {
   return (neuron0x30a1c20()*-0.182743);
}

double NNfunction_sb_sLuR::synapse0x2e51b90() {
   return (neuron0x30a1f60()*0.199952);
}

double NNfunction_sb_sLuR::synapse0x30a4300() {
   return (neuron0x30a22a0()*0.697669);
}

double NNfunction_sb_sLuR::synapse0x30a4340() {
   return (neuron0x30a25e0()*0.16963);
}

double NNfunction_sb_sLuR::synapse0x30a4640() {
   return (neuron0x30a2920()*1.23183);
}

double NNfunction_sb_sLuR::synapse0x30a4680() {
   return (neuron0x30a2c60()*-0.0506547);
}

double NNfunction_sb_sLuR::synapse0x30a4980() {
   return (neuron0x30a2fa0()*-0.195342);
}

double NNfunction_sb_sLuR::synapse0x30a49c0() {
   return (neuron0x30a32e0()*-0.659652);
}

double NNfunction_sb_sLuR::synapse0x30a4cc0() {
   return (neuron0x30a3620()*0.0346503);
}

double NNfunction_sb_sLuR::synapse0x30a4d00() {
   return (neuron0x30a3960()*0.0337129);
}

double NNfunction_sb_sLuR::synapse0x30a5000() {
   return (neuron0x30a3ec0()*-0.20389);
}

double NNfunction_sb_sLuR::synapse0x30a5040() {
   return (neuron0x30a40e0()*0.615908);
}

double NNfunction_sb_sLuR::synapse0x30a5340() {
   return (neuron0x30a4420()*-0.515144);
}

double NNfunction_sb_sLuR::synapse0x30a5380() {
   return (neuron0x30a4760()*-0.358921);
}

double NNfunction_sb_sLuR::synapse0x30a2e80() {
   return (neuron0x30a4aa0()*0.397729);
}

double NNfunction_sb_sLuR::synapse0x30a2ec0() {
   return (neuron0x30a4de0()*0.365032);
}

double NNfunction_sb_sLuR::synapse0x30b1190() {
   return (neuron0x30a5120()*0.478453);
}

double NNfunction_sb_sLuR::synapse0x30b1510() {
   return (neuron0x30a0560()*-0.00213583);
}

double NNfunction_sb_sLuR::synapse0x30b1550() {
   return (neuron0x30a08a0()*0.0285967);
}

double NNfunction_sb_sLuR::synapse0x30b1590() {
   return (neuron0x30a0be0()*-0.115591);
}

double NNfunction_sb_sLuR::synapse0x30b15d0() {
   return (neuron0x30a0f20()*0.122013);
}

double NNfunction_sb_sLuR::synapse0x30b1610() {
   return (neuron0x30a1260()*0.0216207);
}

double NNfunction_sb_sLuR::synapse0x30b1650() {
   return (neuron0x30a15a0()*0.0254493);
}

double NNfunction_sb_sLuR::synapse0x30b1690() {
   return (neuron0x30a18e0()*-0.00455395);
}

double NNfunction_sb_sLuR::synapse0x30b16d0() {
   return (neuron0x30a1c20()*0.00378731);
}

double NNfunction_sb_sLuR::synapse0x30b1710() {
   return (neuron0x30a1f60()*0.00241961);
}

double NNfunction_sb_sLuR::synapse0x30b1750() {
   return (neuron0x30a22a0()*0.0105592);
}

double NNfunction_sb_sLuR::synapse0x30b1790() {
   return (neuron0x30a25e0()*0.0097038);
}

double NNfunction_sb_sLuR::synapse0x30b17d0() {
   return (neuron0x30a2920()*-0.041749);
}

double NNfunction_sb_sLuR::synapse0x30b1810() {
   return (neuron0x30a2c60()*1.6247);
}

double NNfunction_sb_sLuR::synapse0x30b1850() {
   return (neuron0x30a2fa0()*0.00636665);
}

double NNfunction_sb_sLuR::synapse0x30b1890() {
   return (neuron0x30a32e0()*-0.197092);
}

double NNfunction_sb_sLuR::synapse0x30b18d0() {
   return (neuron0x30a3620()*0.0312468);
}

double NNfunction_sb_sLuR::synapse0x30b1360() {
   return (neuron0x30a3960()*0.0239186);
}

double NNfunction_sb_sLuR::synapse0x30b13a0() {
   return (neuron0x30a3ec0()*-0.00739691);
}

double NNfunction_sb_sLuR::synapse0x30b1a20() {
   return (neuron0x30a40e0()*-0.0344853);
}

double NNfunction_sb_sLuR::synapse0x30b1a60() {
   return (neuron0x30a4420()*-0.00424226);
}

double NNfunction_sb_sLuR::synapse0x30b1aa0() {
   return (neuron0x30a4760()*0.0124525);
}

double NNfunction_sb_sLuR::synapse0x30b1ae0() {
   return (neuron0x30a4aa0()*-0.00211161);
}

double NNfunction_sb_sLuR::synapse0x30b1b20() {
   return (neuron0x30a4de0()*-0.00128219);
}

double NNfunction_sb_sLuR::synapse0x30b1b60() {
   return (neuron0x30a5120()*-0.0122525);
}

double NNfunction_sb_sLuR::synapse0x30b1ee0() {
   return (neuron0x30a0560()*-0.529368);
}

double NNfunction_sb_sLuR::synapse0x30b1f20() {
   return (neuron0x30a08a0()*-0.501168);
}

double NNfunction_sb_sLuR::synapse0x30b1f60() {
   return (neuron0x30a0be0()*-0.00185528);
}

double NNfunction_sb_sLuR::synapse0x30b1fa0() {
   return (neuron0x30a0f20()*-0.344211);
}

double NNfunction_sb_sLuR::synapse0x30b1fe0() {
   return (neuron0x30a1260()*-0.00175649);
}

double NNfunction_sb_sLuR::synapse0x30b2020() {
   return (neuron0x30a15a0()*0.962853);
}

double NNfunction_sb_sLuR::synapse0x30b2060() {
   return (neuron0x30a18e0()*-0.199125);
}

double NNfunction_sb_sLuR::synapse0x30b20a0() {
   return (neuron0x30a1c20()*0.0156001);
}

double NNfunction_sb_sLuR::synapse0x30b20e0() {
   return (neuron0x30a1f60()*-0.428664);
}

double NNfunction_sb_sLuR::synapse0x30b2120() {
   return (neuron0x30a22a0()*0.0220416);
}

double NNfunction_sb_sLuR::synapse0x30b2160() {
   return (neuron0x30a25e0()*-0.121581);
}

double NNfunction_sb_sLuR::synapse0x30b21a0() {
   return (neuron0x30a2920()*-0.0186003);
}

double NNfunction_sb_sLuR::synapse0x30b21e0() {
   return (neuron0x30a2c60()*-0.0739996);
}

double NNfunction_sb_sLuR::synapse0x30b2220() {
   return (neuron0x30a2fa0()*0.187876);
}

double NNfunction_sb_sLuR::synapse0x30b2260() {
   return (neuron0x30a32e0()*-0.765528);
}

double NNfunction_sb_sLuR::synapse0x30b22a0() {
   return (neuron0x30a3620()*-0.249848);
}

double NNfunction_sb_sLuR::synapse0x30b1d30() {
   return (neuron0x30a3960()*0.025647);
}

double NNfunction_sb_sLuR::synapse0x30b1d70() {
   return (neuron0x30a3ec0()*-0.115391);
}

double NNfunction_sb_sLuR::synapse0x30b23f0() {
   return (neuron0x30a40e0()*0.14954);
}

double NNfunction_sb_sLuR::synapse0x30b2430() {
   return (neuron0x30a4420()*0.258017);
}

double NNfunction_sb_sLuR::synapse0x30b2470() {
   return (neuron0x30a4760()*0.198085);
}

double NNfunction_sb_sLuR::synapse0x30b24b0() {
   return (neuron0x30a4aa0()*0.205036);
}

double NNfunction_sb_sLuR::synapse0x30b24f0() {
   return (neuron0x30a4de0()*0.310866);
}

double NNfunction_sb_sLuR::synapse0x30b2530() {
   return (neuron0x30a5120()*-0.0917015);
}

double NNfunction_sb_sLuR::synapse0x30b28b0() {
   return (neuron0x30a0560()*0.180752);
}

double NNfunction_sb_sLuR::synapse0x30b28f0() {
   return (neuron0x30a08a0()*-0.49313);
}

double NNfunction_sb_sLuR::synapse0x30b2930() {
   return (neuron0x30a0be0()*-0.052502);
}

double NNfunction_sb_sLuR::synapse0x30b2970() {
   return (neuron0x30a0f20()*-0.927552);
}

double NNfunction_sb_sLuR::synapse0x30b29b0() {
   return (neuron0x30a1260()*-0.0221424);
}

double NNfunction_sb_sLuR::synapse0x30b29f0() {
   return (neuron0x30a15a0()*-0.167461);
}

double NNfunction_sb_sLuR::synapse0x30b2a30() {
   return (neuron0x30a18e0()*0.135846);
}

double NNfunction_sb_sLuR::synapse0x30b2a70() {
   return (neuron0x30a1c20()*-0.237508);
}

double NNfunction_sb_sLuR::synapse0x30b2ab0() {
   return (neuron0x30a1f60()*-0.398833);
}

double NNfunction_sb_sLuR::synapse0x30b2af0() {
   return (neuron0x30a22a0()*0.627159);
}

double NNfunction_sb_sLuR::synapse0x30b2b30() {
   return (neuron0x30a25e0()*0.678604);
}

double NNfunction_sb_sLuR::synapse0x30b2b70() {
   return (neuron0x30a2920()*0.163368);
}

double NNfunction_sb_sLuR::synapse0x30b2bb0() {
   return (neuron0x30a2c60()*0.205948);
}

double NNfunction_sb_sLuR::synapse0x30b2bf0() {
   return (neuron0x30a2fa0()*0.353561);
}

double NNfunction_sb_sLuR::synapse0x30b2c30() {
   return (neuron0x30a32e0()*-0.45846);
}

double NNfunction_sb_sLuR::synapse0x30b2c70() {
   return (neuron0x30a3620()*0.22723);
}

double NNfunction_sb_sLuR::synapse0x30b2700() {
   return (neuron0x30a3960()*0.341806);
}

double NNfunction_sb_sLuR::synapse0x30b2740() {
   return (neuron0x30a3ec0()*0.0975499);
}

double NNfunction_sb_sLuR::synapse0x30b2dc0() {
   return (neuron0x30a40e0()*-0.0505156);
}

double NNfunction_sb_sLuR::synapse0x30b2e00() {
   return (neuron0x30a4420()*-0.0709457);
}

double NNfunction_sb_sLuR::synapse0x30b2e40() {
   return (neuron0x30a4760()*0.111511);
}

double NNfunction_sb_sLuR::synapse0x30b2e80() {
   return (neuron0x30a4aa0()*-0.236453);
}

double NNfunction_sb_sLuR::synapse0x30b2ec0() {
   return (neuron0x30a4de0()*-0.254446);
}

double NNfunction_sb_sLuR::synapse0x30b2f00() {
   return (neuron0x30a5120()*0.0848747);
}

double NNfunction_sb_sLuR::synapse0x30b3280() {
   return (neuron0x30a0560()*0.0266937);
}

double NNfunction_sb_sLuR::synapse0x30b32c0() {
   return (neuron0x30a08a0()*0.0328391);
}

double NNfunction_sb_sLuR::synapse0x30b3300() {
   return (neuron0x30a0be0()*0.244351);
}

double NNfunction_sb_sLuR::synapse0x30b3340() {
   return (neuron0x30a0f20()*0.113725);
}

double NNfunction_sb_sLuR::synapse0x30b3380() {
   return (neuron0x30a1260()*-0.0200926);
}

double NNfunction_sb_sLuR::synapse0x30b33c0() {
   return (neuron0x30a15a0()*0.000710257);
}

double NNfunction_sb_sLuR::synapse0x30b3400() {
   return (neuron0x30a18e0()*-0.0122419);
}

double NNfunction_sb_sLuR::synapse0x30b3440() {
   return (neuron0x30a1c20()*-0.012243);
}

double NNfunction_sb_sLuR::synapse0x30b3480() {
   return (neuron0x30a1f60()*0.0185489);
}

double NNfunction_sb_sLuR::synapse0x30b34c0() {
   return (neuron0x30a22a0()*0.0368095);
}

double NNfunction_sb_sLuR::synapse0x30b3500() {
   return (neuron0x30a25e0()*0.0326841);
}

double NNfunction_sb_sLuR::synapse0x30b3540() {
   return (neuron0x30a2920()*-0.448217);
}

double NNfunction_sb_sLuR::synapse0x30b3580() {
   return (neuron0x30a2c60()*-0.0846272);
}

double NNfunction_sb_sLuR::synapse0x30b35c0() {
   return (neuron0x30a2fa0()*0.0597141);
}

double NNfunction_sb_sLuR::synapse0x30b3600() {
   return (neuron0x30a32e0()*0.198668);
}

double NNfunction_sb_sLuR::synapse0x30b3640() {
   return (neuron0x30a3620()*-0.191661);
}

double NNfunction_sb_sLuR::synapse0x30b30d0() {
   return (neuron0x30a3960()*0.0728302);
}

double NNfunction_sb_sLuR::synapse0x30b3110() {
   return (neuron0x30a3ec0()*-0.244756);
}

double NNfunction_sb_sLuR::synapse0x30b3790() {
   return (neuron0x30a40e0()*-0.237086);
}

double NNfunction_sb_sLuR::synapse0x30b37d0() {
   return (neuron0x30a4420()*0.0324889);
}

double NNfunction_sb_sLuR::synapse0x30b3810() {
   return (neuron0x30a4760()*-0.032919);
}

double NNfunction_sb_sLuR::synapse0x30b3850() {
   return (neuron0x30a4aa0()*-0.00284667);
}

double NNfunction_sb_sLuR::synapse0x30b3890() {
   return (neuron0x30a4de0()*0.00479786);
}

double NNfunction_sb_sLuR::synapse0x30b38d0() {
   return (neuron0x30a5120()*0.00159876);
}

double NNfunction_sb_sLuR::synapse0x30b3c50() {
   return (neuron0x30a0560()*-0.147967);
}

double NNfunction_sb_sLuR::synapse0x30b3c90() {
   return (neuron0x30a08a0()*-0.344527);
}

double NNfunction_sb_sLuR::synapse0x30b3cd0() {
   return (neuron0x30a0be0()*0.903088);
}

double NNfunction_sb_sLuR::synapse0x30b3d10() {
   return (neuron0x30a0f20()*0.0736993);
}

double NNfunction_sb_sLuR::synapse0x30b3d50() {
   return (neuron0x30a1260()*0.099539);
}

double NNfunction_sb_sLuR::synapse0x30b3d90() {
   return (neuron0x30a15a0()*0.0840109);
}

double NNfunction_sb_sLuR::synapse0x30b3dd0() {
   return (neuron0x30a18e0()*0.280879);
}

double NNfunction_sb_sLuR::synapse0x30b3e10() {
   return (neuron0x30a1c20()*0.0867964);
}

double NNfunction_sb_sLuR::synapse0x30b3e50() {
   return (neuron0x30a1f60()*-0.0616887);
}

double NNfunction_sb_sLuR::synapse0x30ac010() {
   return (neuron0x30a22a0()*-0.288196);
}

double NNfunction_sb_sLuR::synapse0x30ac050() {
   return (neuron0x30a25e0()*-0.46903);
}

double NNfunction_sb_sLuR::synapse0x30ac090() {
   return (neuron0x30a2920()*-0.355645);
}

double NNfunction_sb_sLuR::synapse0x30ac0d0() {
   return (neuron0x30a2c60()*0.196172);
}

double NNfunction_sb_sLuR::synapse0x30ac110() {
   return (neuron0x30a2fa0()*0.0431139);
}

double NNfunction_sb_sLuR::synapse0x30ac150() {
   return (neuron0x30a32e0()*0.0905036);
}

double NNfunction_sb_sLuR::synapse0x30ac190() {
   return (neuron0x30a3620()*0.0549271);
}

double NNfunction_sb_sLuR::synapse0x30b3aa0() {
   return (neuron0x30a3960()*-0.18581);
}

double NNfunction_sb_sLuR::synapse0x30b3ae0() {
   return (neuron0x30a3ec0()*-0.472257);
}

double NNfunction_sb_sLuR::synapse0x30ac2e0() {
   return (neuron0x30a40e0()*-0.711855);
}

double NNfunction_sb_sLuR::synapse0x30ac320() {
   return (neuron0x30a4420()*0.490617);
}

double NNfunction_sb_sLuR::synapse0x30ac360() {
   return (neuron0x30a4760()*0.629467);
}

double NNfunction_sb_sLuR::synapse0x30ac3a0() {
   return (neuron0x30a4aa0()*-0.212992);
}

double NNfunction_sb_sLuR::synapse0x30ac3e0() {
   return (neuron0x30a4de0()*-0.397253);
}

double NNfunction_sb_sLuR::synapse0x30ac420() {
   return (neuron0x30a5120()*0.0457905);
}

double NNfunction_sb_sLuR::synapse0x30ac7a0() {
   return (neuron0x30a0560()*0.0074785);
}

double NNfunction_sb_sLuR::synapse0x30ac7e0() {
   return (neuron0x30a08a0()*0.0134356);
}

double NNfunction_sb_sLuR::synapse0x30ac820() {
   return (neuron0x30a0be0()*-0.0270269);
}

double NNfunction_sb_sLuR::synapse0x30ac860() {
   return (neuron0x30a0f20()*1.23693);
}

double NNfunction_sb_sLuR::synapse0x30ac8a0() {
   return (neuron0x30a1260()*-0.00535397);
}

double NNfunction_sb_sLuR::synapse0x30ac8e0() {
   return (neuron0x30a15a0()*-0.00903017);
}

double NNfunction_sb_sLuR::synapse0x30ac920() {
   return (neuron0x30a18e0()*-0.0242389);
}

double NNfunction_sb_sLuR::synapse0x30ac960() {
   return (neuron0x30a1c20()*0.00477097);
}

double NNfunction_sb_sLuR::synapse0x30ac9a0() {
   return (neuron0x30a1f60()*0.0143702);
}

double NNfunction_sb_sLuR::synapse0x30ac9e0() {
   return (neuron0x30a22a0()*-0.00419763);
}

double NNfunction_sb_sLuR::synapse0x30aca20() {
   return (neuron0x30a25e0()*-0.00856691);
}

double NNfunction_sb_sLuR::synapse0x30aca60() {
   return (neuron0x30a2920()*-0.0473188);
}

double NNfunction_sb_sLuR::synapse0x30acaa0() {
   return (neuron0x30a2c60()*1.01671);
}

double NNfunction_sb_sLuR::synapse0x30acae0() {
   return (neuron0x30a2fa0()*0.0238925);
}

double NNfunction_sb_sLuR::synapse0x30acb20() {
   return (neuron0x30a32e0()*-0.397318);
}

double NNfunction_sb_sLuR::synapse0x30acb60() {
   return (neuron0x30a3620()*-0.0263641);
}

double NNfunction_sb_sLuR::synapse0x30ac5f0() {
   return (neuron0x30a3960()*0.0311039);
}

double NNfunction_sb_sLuR::synapse0x30ac630() {
   return (neuron0x30a3ec0()*-0.0195069);
}

double NNfunction_sb_sLuR::synapse0x30accb0() {
   return (neuron0x30a40e0()*0.0124278);
}

double NNfunction_sb_sLuR::synapse0x30accf0() {
   return (neuron0x30a4420()*0.00686383);
}

double NNfunction_sb_sLuR::synapse0x30acd30() {
   return (neuron0x30a4760()*-0.022419);
}

double NNfunction_sb_sLuR::synapse0x30acd70() {
   return (neuron0x30a4aa0()*-0.0302907);
}

double NNfunction_sb_sLuR::synapse0x30acdb0() {
   return (neuron0x30a4de0()*0.00481855);
}

double NNfunction_sb_sLuR::synapse0x30acdf0() {
   return (neuron0x30a5120()*0.0205043);
}

double NNfunction_sb_sLuR::synapse0x30acfc0() {
   return (neuron0x30a0560()*0.00540509);
}

double NNfunction_sb_sLuR::synapse0x30b6050() {
   return (neuron0x30a08a0()*0.00538697);
}

double NNfunction_sb_sLuR::synapse0x30b6090() {
   return (neuron0x30a0be0()*-0.0175247);
}

double NNfunction_sb_sLuR::synapse0x30b60d0() {
   return (neuron0x30a0f20()*8.69224);
}

double NNfunction_sb_sLuR::synapse0x30b6110() {
   return (neuron0x30a1260()*0.0122127);
}

double NNfunction_sb_sLuR::synapse0x30b6150() {
   return (neuron0x30a15a0()*-0.0202316);
}

double NNfunction_sb_sLuR::synapse0x30b6190() {
   return (neuron0x30a18e0()*0.0173216);
}

double NNfunction_sb_sLuR::synapse0x30b61d0() {
   return (neuron0x30a1c20()*0.0281805);
}

double NNfunction_sb_sLuR::synapse0x30b6210() {
   return (neuron0x30a1f60()*0.000697667);
}

double NNfunction_sb_sLuR::synapse0x30b6250() {
   return (neuron0x30a22a0()*-0.00305799);
}

double NNfunction_sb_sLuR::synapse0x30b6290() {
   return (neuron0x30a25e0()*-0.0114181);
}

double NNfunction_sb_sLuR::synapse0x30b62d0() {
   return (neuron0x30a2920()*0.0327064);
}

double NNfunction_sb_sLuR::synapse0x30b6310() {
   return (neuron0x30a2c60()*-0.140788);
}

double NNfunction_sb_sLuR::synapse0x30b6350() {
   return (neuron0x30a2fa0()*-0.0156177);
}

double NNfunction_sb_sLuR::synapse0x30b6390() {
   return (neuron0x30a32e0()*-1.27372);
}

double NNfunction_sb_sLuR::synapse0x30b63d0() {
   return (neuron0x30a3620()*-0.0156881);
}

double NNfunction_sb_sLuR::synapse0x30b5ea0() {
   return (neuron0x30a3960()*-0.00347656);
}

double NNfunction_sb_sLuR::synapse0x30b5ee0() {
   return (neuron0x30a3ec0()*0.0246251);
}

double NNfunction_sb_sLuR::synapse0x30b6520() {
   return (neuron0x30a40e0()*-0.00830269);
}

double NNfunction_sb_sLuR::synapse0x30b6560() {
   return (neuron0x30a4420()*0.0203568);
}

double NNfunction_sb_sLuR::synapse0x30b65a0() {
   return (neuron0x30a4760()*0.00256818);
}

double NNfunction_sb_sLuR::synapse0x30b65e0() {
   return (neuron0x30a4aa0()*0.0112112);
}

double NNfunction_sb_sLuR::synapse0x30b6620() {
   return (neuron0x30a4de0()*0.00417211);
}

double NNfunction_sb_sLuR::synapse0x30b6660() {
   return (neuron0x30a5120()*0.025365);
}

double NNfunction_sb_sLuR::synapse0x30b69e0() {
   return (neuron0x30a0560()*-0.0536265);
}

double NNfunction_sb_sLuR::synapse0x30b6a20() {
   return (neuron0x30a08a0()*-0.0455934);
}

double NNfunction_sb_sLuR::synapse0x30b6a60() {
   return (neuron0x30a0be0()*-0.198719);
}

double NNfunction_sb_sLuR::synapse0x30b6aa0() {
   return (neuron0x30a0f20()*0.0246409);
}

double NNfunction_sb_sLuR::synapse0x30b6ae0() {
   return (neuron0x30a1260()*-0.337913);
}

double NNfunction_sb_sLuR::synapse0x30b6b20() {
   return (neuron0x30a15a0()*-0.825217);
}

double NNfunction_sb_sLuR::synapse0x30b6b60() {
   return (neuron0x30a18e0()*-0.241561);
}

double NNfunction_sb_sLuR::synapse0x30b6ba0() {
   return (neuron0x30a1c20()*0.157085);
}

double NNfunction_sb_sLuR::synapse0x30b6be0() {
   return (neuron0x30a1f60()*-0.158502);
}

double NNfunction_sb_sLuR::synapse0x30b6c20() {
   return (neuron0x30a22a0()*0.211146);
}

double NNfunction_sb_sLuR::synapse0x30b6c60() {
   return (neuron0x30a25e0()*0.0839116);
}

double NNfunction_sb_sLuR::synapse0x30b6ca0() {
   return (neuron0x30a2920()*0.0518461);
}

double NNfunction_sb_sLuR::synapse0x30b6ce0() {
   return (neuron0x30a2c60()*0.550228);
}

double NNfunction_sb_sLuR::synapse0x30b6d20() {
   return (neuron0x30a2fa0()*-0.0234016);
}

double NNfunction_sb_sLuR::synapse0x30b6d60() {
   return (neuron0x30a32e0()*0.677407);
}

double NNfunction_sb_sLuR::synapse0x30b6da0() {
   return (neuron0x30a3620()*0.250877);
}

double NNfunction_sb_sLuR::synapse0x30b6830() {
   return (neuron0x30a3960()*0.0389577);
}

double NNfunction_sb_sLuR::synapse0x30b6870() {
   return (neuron0x30a3ec0()*-0.0579044);
}

double NNfunction_sb_sLuR::synapse0x30b6ef0() {
   return (neuron0x30a40e0()*-0.0241673);
}

double NNfunction_sb_sLuR::synapse0x30b6f30() {
   return (neuron0x30a4420()*0.129792);
}

double NNfunction_sb_sLuR::synapse0x30b6f70() {
   return (neuron0x30a4760()*0.177259);
}

double NNfunction_sb_sLuR::synapse0x30b6fb0() {
   return (neuron0x30a4aa0()*0.02813);
}

double NNfunction_sb_sLuR::synapse0x30b6ff0() {
   return (neuron0x30a4de0()*0.074236);
}

double NNfunction_sb_sLuR::synapse0x30b7030() {
   return (neuron0x30a5120()*-0.0146757);
}

double NNfunction_sb_sLuR::synapse0x30b73b0() {
   return (neuron0x30a0560()*-0.0261723);
}

double NNfunction_sb_sLuR::synapse0x30b73f0() {
   return (neuron0x30a08a0()*-0.0149545);
}

double NNfunction_sb_sLuR::synapse0x30b7430() {
   return (neuron0x30a0be0()*-0.063026);
}

double NNfunction_sb_sLuR::synapse0x30b7470() {
   return (neuron0x30a0f20()*0.0599867);
}

double NNfunction_sb_sLuR::synapse0x30b74b0() {
   return (neuron0x30a1260()*1.03819);
}

double NNfunction_sb_sLuR::synapse0x30b74f0() {
   return (neuron0x30a15a0()*-0.375301);
}

double NNfunction_sb_sLuR::synapse0x30b7530() {
   return (neuron0x30a18e0()*0.0279617);
}

double NNfunction_sb_sLuR::synapse0x30b7570() {
   return (neuron0x30a1c20()*0.0677653);
}

double NNfunction_sb_sLuR::synapse0x30b75b0() {
   return (neuron0x30a1f60()*0.10306);
}

double NNfunction_sb_sLuR::synapse0x30b75f0() {
   return (neuron0x30a22a0()*0.0223116);
}

double NNfunction_sb_sLuR::synapse0x30b7630() {
   return (neuron0x30a25e0()*-0.00697824);
}

double NNfunction_sb_sLuR::synapse0x30b7670() {
   return (neuron0x30a2920()*0.125169);
}

double NNfunction_sb_sLuR::synapse0x30b76b0() {
   return (neuron0x30a2c60()*-0.0664831);
}

double NNfunction_sb_sLuR::synapse0x30b76f0() {
   return (neuron0x30a2fa0()*0.0761143);
}

double NNfunction_sb_sLuR::synapse0x30b7730() {
   return (neuron0x30a32e0()*-0.803563);
}

double NNfunction_sb_sLuR::synapse0x30b7770() {
   return (neuron0x30a3620()*-0.0654568);
}

double NNfunction_sb_sLuR::synapse0x30b7200() {
   return (neuron0x30a3960()*-0.12726);
}

double NNfunction_sb_sLuR::synapse0x30b7240() {
   return (neuron0x30a3ec0()*0.129045);
}

double NNfunction_sb_sLuR::synapse0x30b78c0() {
   return (neuron0x30a40e0()*-0.0121179);
}

double NNfunction_sb_sLuR::synapse0x30b7900() {
   return (neuron0x30a4420()*-0.351353);
}

double NNfunction_sb_sLuR::synapse0x30b7940() {
   return (neuron0x30a4760()*0.238034);
}

double NNfunction_sb_sLuR::synapse0x30b7980() {
   return (neuron0x30a4aa0()*0.00543782);
}

double NNfunction_sb_sLuR::synapse0x30b79c0() {
   return (neuron0x30a4de0()*0.152056);
}

double NNfunction_sb_sLuR::synapse0x30b7a00() {
   return (neuron0x30a5120()*-0.0205312);
}

double NNfunction_sb_sLuR::synapse0x30b7d80() {
   return (neuron0x30a0560()*-0.00189082);
}

double NNfunction_sb_sLuR::synapse0x30b7dc0() {
   return (neuron0x30a08a0()*-0.0211832);
}

double NNfunction_sb_sLuR::synapse0x30b7e00() {
   return (neuron0x30a0be0()*0.0331061);
}

double NNfunction_sb_sLuR::synapse0x30b7e40() {
   return (neuron0x30a0f20()*0.141935);
}

double NNfunction_sb_sLuR::synapse0x30b7e80() {
   return (neuron0x30a1260()*0.031224);
}

double NNfunction_sb_sLuR::synapse0x30b7ec0() {
   return (neuron0x30a15a0()*0.0292106);
}

double NNfunction_sb_sLuR::synapse0x30b7f00() {
   return (neuron0x30a18e0()*0.0172272);
}

double NNfunction_sb_sLuR::synapse0x30b7f40() {
   return (neuron0x30a1c20()*0.0242843);
}

double NNfunction_sb_sLuR::synapse0x30b7f80() {
   return (neuron0x30a1f60()*-0.0685642);
}

double NNfunction_sb_sLuR::synapse0x30b7fc0() {
   return (neuron0x30a22a0()*0.00923977);
}

double NNfunction_sb_sLuR::synapse0x30b8000() {
   return (neuron0x30a25e0()*-0.00421716);
}

double NNfunction_sb_sLuR::synapse0x30b8040() {
   return (neuron0x30a2920()*-0.027224);
}

double NNfunction_sb_sLuR::synapse0x30b8080() {
   return (neuron0x30a2c60()*-1.61098);
}

double NNfunction_sb_sLuR::synapse0x30b80c0() {
   return (neuron0x30a2fa0()*-0.0155358);
}

double NNfunction_sb_sLuR::synapse0x30b8100() {
   return (neuron0x30a32e0()*-1.17738);
}

double NNfunction_sb_sLuR::synapse0x30b8140() {
   return (neuron0x30a3620()*0.0373246);
}

double NNfunction_sb_sLuR::synapse0x30b7bd0() {
   return (neuron0x30a3960()*-0.0139488);
}

double NNfunction_sb_sLuR::synapse0x30b7c10() {
   return (neuron0x30a3ec0()*-0.00769243);
}

double NNfunction_sb_sLuR::synapse0x30b8290() {
   return (neuron0x30a40e0()*-0.0330912);
}

double NNfunction_sb_sLuR::synapse0x30b82d0() {
   return (neuron0x30a4420()*-0.0220321);
}

double NNfunction_sb_sLuR::synapse0x30b8310() {
   return (neuron0x30a4760()*0.0227097);
}

double NNfunction_sb_sLuR::synapse0x30b8350() {
   return (neuron0x30a4aa0()*-0.00353095);
}

double NNfunction_sb_sLuR::synapse0x30b8390() {
   return (neuron0x30a4de0()*0.000232986);
}

double NNfunction_sb_sLuR::synapse0x30b83d0() {
   return (neuron0x30a5120()*-0.0196975);
}

double NNfunction_sb_sLuR::synapse0x30b8750() {
   return (neuron0x30a0560()*-0.029893);
}

double NNfunction_sb_sLuR::synapse0x30b8790() {
   return (neuron0x30a08a0()*0.316611);
}

double NNfunction_sb_sLuR::synapse0x30b87d0() {
   return (neuron0x30a0be0()*-0.0627887);
}

double NNfunction_sb_sLuR::synapse0x30b8810() {
   return (neuron0x30a0f20()*-1.47458);
}

double NNfunction_sb_sLuR::synapse0x30b8850() {
   return (neuron0x30a1260()*-0.00916887);
}

double NNfunction_sb_sLuR::synapse0x30b8890() {
   return (neuron0x30a15a0()*0.267424);
}

double NNfunction_sb_sLuR::synapse0x30b88d0() {
   return (neuron0x30a18e0()*-0.356603);
}

double NNfunction_sb_sLuR::synapse0x30b8910() {
   return (neuron0x30a1c20()*0.0194486);
}

double NNfunction_sb_sLuR::synapse0x30b8950() {
   return (neuron0x30a1f60()*-0.0253305);
}

double NNfunction_sb_sLuR::synapse0x30b8990() {
   return (neuron0x30a22a0()*-0.584793);
}

double NNfunction_sb_sLuR::synapse0x30b89d0() {
   return (neuron0x30a25e0()*-0.0849611);
}

double NNfunction_sb_sLuR::synapse0x30b8a10() {
   return (neuron0x30a2920()*0.0181067);
}

double NNfunction_sb_sLuR::synapse0x30b8a50() {
   return (neuron0x30a2c60()*-1.0541);
}

double NNfunction_sb_sLuR::synapse0x30b8a90() {
   return (neuron0x30a2fa0()*0.361394);
}

double NNfunction_sb_sLuR::synapse0x30b8ad0() {
   return (neuron0x30a32e0()*0.0257986);
}

double NNfunction_sb_sLuR::synapse0x30b8b10() {
   return (neuron0x30a3620()*-0.319962);
}

double NNfunction_sb_sLuR::synapse0x30b85a0() {
   return (neuron0x30a3960()*0.0560979);
}

double NNfunction_sb_sLuR::synapse0x30b85e0() {
   return (neuron0x30a3ec0()*-0.0385233);
}

double NNfunction_sb_sLuR::synapse0x30b8c60() {
   return (neuron0x30a40e0()*-0.0792312);
}

double NNfunction_sb_sLuR::synapse0x30b8ca0() {
   return (neuron0x30a4420()*0.18582);
}

double NNfunction_sb_sLuR::synapse0x30b8ce0() {
   return (neuron0x30a4760()*-0.452539);
}

double NNfunction_sb_sLuR::synapse0x30b8d20() {
   return (neuron0x30a4aa0()*0.357554);
}

double NNfunction_sb_sLuR::synapse0x30b8d60() {
   return (neuron0x30a4de0()*0.074781);
}

double NNfunction_sb_sLuR::synapse0x30b8da0() {
   return (neuron0x30a5120()*-0.115892);
}

double NNfunction_sb_sLuR::synapse0x30b9120() {
   return (neuron0x30a0560()*0.236221);
}

double NNfunction_sb_sLuR::synapse0x30b9160() {
   return (neuron0x30a08a0()*0.00310775);
}

double NNfunction_sb_sLuR::synapse0x30b91a0() {
   return (neuron0x30a0be0()*-0.0524334);
}

double NNfunction_sb_sLuR::synapse0x30b91e0() {
   return (neuron0x30a0f20()*-0.586881);
}

double NNfunction_sb_sLuR::synapse0x30b9220() {
   return (neuron0x30a1260()*0.322592);
}

double NNfunction_sb_sLuR::synapse0x30b9260() {
   return (neuron0x30a15a0()*0.0446518);
}

double NNfunction_sb_sLuR::synapse0x30b92a0() {
   return (neuron0x30a18e0()*-0.0712308);
}

double NNfunction_sb_sLuR::synapse0x30b92e0() {
   return (neuron0x30a1c20()*0.110977);
}

double NNfunction_sb_sLuR::synapse0x30b9320() {
   return (neuron0x30a1f60()*0.790035);
}

double NNfunction_sb_sLuR::synapse0x30b9360() {
   return (neuron0x30a22a0()*-0.0777693);
}

double NNfunction_sb_sLuR::synapse0x30b93a0() {
   return (neuron0x30a25e0()*-0.0413039);
}

double NNfunction_sb_sLuR::synapse0x30b93e0() {
   return (neuron0x30a2920()*-0.129898);
}

double NNfunction_sb_sLuR::synapse0x30b9420() {
   return (neuron0x30a2c60()*0.417295);
}

double NNfunction_sb_sLuR::synapse0x30b9460() {
   return (neuron0x30a2fa0()*0.120973);
}

double NNfunction_sb_sLuR::synapse0x30b94a0() {
   return (neuron0x30a32e0()*-0.0521231);
}

double NNfunction_sb_sLuR::synapse0x30b94e0() {
   return (neuron0x30a3620()*0.516968);
}

double NNfunction_sb_sLuR::synapse0x30b8f70() {
   return (neuron0x30a3960()*0.29696);
}

double NNfunction_sb_sLuR::synapse0x30b8fb0() {
   return (neuron0x30a3ec0()*-0.27684);
}

double NNfunction_sb_sLuR::synapse0x30b9630() {
   return (neuron0x30a40e0()*0.166814);
}

double NNfunction_sb_sLuR::synapse0x30b9670() {
   return (neuron0x30a4420()*-0.426924);
}

double NNfunction_sb_sLuR::synapse0x30b96b0() {
   return (neuron0x30a4760()*0.0153518);
}

double NNfunction_sb_sLuR::synapse0x30b96f0() {
   return (neuron0x30a4aa0()*-0.168207);
}

double NNfunction_sb_sLuR::synapse0x30b9730() {
   return (neuron0x30a4de0()*0.209834);
}

double NNfunction_sb_sLuR::synapse0x30b9770() {
   return (neuron0x30a5120()*0.268087);
}

double NNfunction_sb_sLuR::synapse0x30b9af0() {
   return (neuron0x30a0560()*0.0129392);
}

double NNfunction_sb_sLuR::synapse0x30b9b30() {
   return (neuron0x30a08a0()*-0.0456652);
}

double NNfunction_sb_sLuR::synapse0x30b9b70() {
   return (neuron0x30a0be0()*0.0124133);
}

double NNfunction_sb_sLuR::synapse0x30b9bb0() {
   return (neuron0x30a0f20()*19.3664);
}

double NNfunction_sb_sLuR::synapse0x30b9bf0() {
   return (neuron0x30a1260()*0.00255562);
}

double NNfunction_sb_sLuR::synapse0x30b9c30() {
   return (neuron0x30a15a0()*-0.0510355);
}

double NNfunction_sb_sLuR::synapse0x30b9c70() {
   return (neuron0x30a18e0()*0.0068819);
}

double NNfunction_sb_sLuR::synapse0x30b9cb0() {
   return (neuron0x30a1c20()*0.0347236);
}

double NNfunction_sb_sLuR::synapse0x30b9cf0() {
   return (neuron0x30a1f60()*-0.0201924);
}

double NNfunction_sb_sLuR::synapse0x30b9d30() {
   return (neuron0x30a22a0()*0.00557374);
}

double NNfunction_sb_sLuR::synapse0x30b9d70() {
   return (neuron0x30a25e0()*-0.0288959);
}

double NNfunction_sb_sLuR::synapse0x30b9db0() {
   return (neuron0x30a2920()*0.0757231);
}

double NNfunction_sb_sLuR::synapse0x30b9df0() {
   return (neuron0x30a2c60()*0.031968);
}

double NNfunction_sb_sLuR::synapse0x30b9e30() {
   return (neuron0x30a2fa0()*0.000778199);
}

double NNfunction_sb_sLuR::synapse0x30b9e70() {
   return (neuron0x30a32e0()*-0.0933639);
}

double NNfunction_sb_sLuR::synapse0x30b9eb0() {
   return (neuron0x30a3620()*-0.0167946);
}

double NNfunction_sb_sLuR::synapse0x30b9940() {
   return (neuron0x30a3960()*0.00526978);
}

double NNfunction_sb_sLuR::synapse0x30b9980() {
   return (neuron0x30a3ec0()*0.0099469);
}

double NNfunction_sb_sLuR::synapse0x30ba000() {
   return (neuron0x30a40e0()*0.0019349);
}

double NNfunction_sb_sLuR::synapse0x30ba040() {
   return (neuron0x30a4420()*-0.0136062);
}

double NNfunction_sb_sLuR::synapse0x30ba080() {
   return (neuron0x30a4760()*-0.00445583);
}

double NNfunction_sb_sLuR::synapse0x30ba0c0() {
   return (neuron0x30a4aa0()*0.0159634);
}

double NNfunction_sb_sLuR::synapse0x30ba100() {
   return (neuron0x30a4de0()*0.00292666);
}

double NNfunction_sb_sLuR::synapse0x30ba140() {
   return (neuron0x30a5120()*0.0403416);
}

double NNfunction_sb_sLuR::synapse0x30ba4c0() {
   return (neuron0x30a0560()*-0.0483062);
}

double NNfunction_sb_sLuR::synapse0x30ba500() {
   return (neuron0x30a08a0()*0.0272693);
}

double NNfunction_sb_sLuR::synapse0x30ba540() {
   return (neuron0x30a0be0()*-0.00666494);
}

double NNfunction_sb_sLuR::synapse0x30ba580() {
   return (neuron0x30a0f20()*-0.159132);
}

double NNfunction_sb_sLuR::synapse0x30ba5c0() {
   return (neuron0x30a1260()*0.0716199);
}

double NNfunction_sb_sLuR::synapse0x30ba600() {
   return (neuron0x30a15a0()*0.0807309);
}

double NNfunction_sb_sLuR::synapse0x30ba640() {
   return (neuron0x30a18e0()*0.00465478);
}

double NNfunction_sb_sLuR::synapse0x30ba680() {
   return (neuron0x30a1c20()*-0.0442193);
}

double NNfunction_sb_sLuR::synapse0x30ba6c0() {
   return (neuron0x30a1f60()*0.0595953);
}

double NNfunction_sb_sLuR::synapse0x30ba700() {
   return (neuron0x30a22a0()*0.0448715);
}

double NNfunction_sb_sLuR::synapse0x30ba740() {
   return (neuron0x30a25e0()*0.00991905);
}

double NNfunction_sb_sLuR::synapse0x30ba780() {
   return (neuron0x30a2920()*-0.0128604);
}

double NNfunction_sb_sLuR::synapse0x30ba7c0() {
   return (neuron0x30a2c60()*0.472829);
}

double NNfunction_sb_sLuR::synapse0x30ba800() {
   return (neuron0x30a2fa0()*-0.0347711);
}

double NNfunction_sb_sLuR::synapse0x30ba840() {
   return (neuron0x30a32e0()*1.32438);
}

double NNfunction_sb_sLuR::synapse0x30ba880() {
   return (neuron0x30a3620()*0.0352403);
}

double NNfunction_sb_sLuR::synapse0x30ba310() {
   return (neuron0x30a3960()*0.016628);
}

double NNfunction_sb_sLuR::synapse0x30ba350() {
   return (neuron0x30a3ec0()*0.0460412);
}

double NNfunction_sb_sLuR::synapse0x30ba9d0() {
   return (neuron0x30a40e0()*-0.000236606);
}

double NNfunction_sb_sLuR::synapse0x30baa10() {
   return (neuron0x30a4420()*0.0251413);
}

double NNfunction_sb_sLuR::synapse0x30baa50() {
   return (neuron0x30a4760()*0.0558714);
}

double NNfunction_sb_sLuR::synapse0x30baa90() {
   return (neuron0x30a4aa0()*-0.00114811);
}

double NNfunction_sb_sLuR::synapse0x30baad0() {
   return (neuron0x30a4de0()*-0.016922);
}

double NNfunction_sb_sLuR::synapse0x30bab10() {
   return (neuron0x30a5120()*0.00372891);
}

double NNfunction_sb_sLuR::synapse0x30bae90() {
   return (neuron0x30a0560()*-0.43465);
}

double NNfunction_sb_sLuR::synapse0x30af460() {
   return (neuron0x30a08a0()*0.443329);
}

double NNfunction_sb_sLuR::synapse0x30af4a0() {
   return (neuron0x30a0be0()*-0.463846);
}

double NNfunction_sb_sLuR::synapse0x30af4e0() {
   return (neuron0x30a0f20()*-0.28228);
}

double NNfunction_sb_sLuR::synapse0x30af730() {
   return (neuron0x30a1260()*0.828134);
}

double NNfunction_sb_sLuR::synapse0x30af770() {
   return (neuron0x30a15a0()*0.368798);
}

double NNfunction_sb_sLuR::synapse0x30af7b0() {
   return (neuron0x30a18e0()*0.134784);
}

double NNfunction_sb_sLuR::synapse0x30afa00() {
   return (neuron0x30a1c20()*-0.197981);
}

double NNfunction_sb_sLuR::synapse0x30afa40() {
   return (neuron0x30a1f60()*0.224334);
}

double NNfunction_sb_sLuR::synapse0x30afc90() {
   return (neuron0x30a22a0()*0.0662184);
}

double NNfunction_sb_sLuR::synapse0x30afcd0() {
   return (neuron0x30a25e0()*0.247561);
}

double NNfunction_sb_sLuR::synapse0x30afd10() {
   return (neuron0x30a2920()*-0.0297999);
}

double NNfunction_sb_sLuR::synapse0x30aff60() {
   return (neuron0x30a2c60()*0.730483);
}

double NNfunction_sb_sLuR::synapse0x30affa0() {
   return (neuron0x30a2fa0()*0.0138814);
}

double NNfunction_sb_sLuR::synapse0x30b01f0() {
   return (neuron0x30a32e0()*-0.244884);
}

double NNfunction_sb_sLuR::synapse0x30b0230() {
   return (neuron0x30a3620()*-0.413417);
}

double NNfunction_sb_sLuR::synapse0x30bace0() {
   return (neuron0x30a3960()*-0.301786);
}

double NNfunction_sb_sLuR::synapse0x30bad20() {
   return (neuron0x30a3ec0()*0.732786);
}

double NNfunction_sb_sLuR::synapse0x30b0380() {
   return (neuron0x30a40e0()*-0.702323);
}

double NNfunction_sb_sLuR::synapse0x30b0890() {
   return (neuron0x30a4420()*-0.525939);
}

double NNfunction_sb_sLuR::synapse0x30b08d0() {
   return (neuron0x30a4760()*-0.526199);
}

double NNfunction_sb_sLuR::synapse0x30b0910() {
   return (neuron0x30a4aa0()*0.118187);
}

double NNfunction_sb_sLuR::synapse0x30b0b60() {
   return (neuron0x30a4de0()*-0.22616);
}

double NNfunction_sb_sLuR::synapse0x30b0ba0() {
   return (neuron0x30a5120()*0.0437306);
}

double NNfunction_sb_sLuR::synapse0x30b0450() {
   return (neuron0x30a0560()*-0.0529876);
}

double NNfunction_sb_sLuR::synapse0x30b0490() {
   return (neuron0x30a08a0()*0.00687346);
}

double NNfunction_sb_sLuR::synapse0x30b04d0() {
   return (neuron0x30a0be0()*0.0359148);
}

double NNfunction_sb_sLuR::synapse0x30b0510() {
   return (neuron0x30a0f20()*-1.363);
}

double NNfunction_sb_sLuR::synapse0x30b0e90() {
   return (neuron0x30a1260()*-0.0634681);
}

double NNfunction_sb_sLuR::synapse0x30bd1e0() {
   return (neuron0x30a15a0()*-0.037029);
}

double NNfunction_sb_sLuR::synapse0x30bd220() {
   return (neuron0x30a18e0()*-0.0478069);
}

double NNfunction_sb_sLuR::synapse0x30bd260() {
   return (neuron0x30a1c20()*0.0557943);
}

double NNfunction_sb_sLuR::synapse0x30bd2a0() {
   return (neuron0x30a1f60()*0.0466868);
}

double NNfunction_sb_sLuR::synapse0x30bd2e0() {
   return (neuron0x30a22a0()*-0.0197351);
}

double NNfunction_sb_sLuR::synapse0x30bd320() {
   return (neuron0x30a25e0()*-0.0179104);
}

double NNfunction_sb_sLuR::synapse0x30bd360() {
   return (neuron0x30a2920()*-0.0370403);
}

double NNfunction_sb_sLuR::synapse0x30bd3a0() {
   return (neuron0x30a2c60()*0.0855122);
}

double NNfunction_sb_sLuR::synapse0x30bd3e0() {
   return (neuron0x30a2fa0()*0.00851925);
}

double NNfunction_sb_sLuR::synapse0x30bd420() {
   return (neuron0x30a32e0()*1.4604);
}

double NNfunction_sb_sLuR::synapse0x30bd460() {
   return (neuron0x30a3620()*0.0207601);
}

double NNfunction_sb_sLuR::synapse0x30b0d70() {
   return (neuron0x30a3960()*0.0230805);
}

double NNfunction_sb_sLuR::synapse0x30b0db0() {
   return (neuron0x30a3ec0()*-0.123294);
}

double NNfunction_sb_sLuR::synapse0x30bd5b0() {
   return (neuron0x30a40e0()*0.0443862);
}

double NNfunction_sb_sLuR::synapse0x30bd5f0() {
   return (neuron0x30a4420()*-0.0202158);
}

double NNfunction_sb_sLuR::synapse0x30bd630() {
   return (neuron0x30a4760()*-0.0250283);
}

double NNfunction_sb_sLuR::synapse0x30bd670() {
   return (neuron0x30a4aa0()*-0.0150214);
}

double NNfunction_sb_sLuR::synapse0x30bd6b0() {
   return (neuron0x30a4de0()*0.011958);
}

double NNfunction_sb_sLuR::synapse0x30bd6f0() {
   return (neuron0x30a5120()*0.0153103);
}

double NNfunction_sb_sLuR::synapse0x30bda70() {
   return (neuron0x30a0560()*0.0180918);
}

double NNfunction_sb_sLuR::synapse0x30bdab0() {
   return (neuron0x30a08a0()*-0.00515188);
}

double NNfunction_sb_sLuR::synapse0x30bdaf0() {
   return (neuron0x30a0be0()*-0.0538478);
}

double NNfunction_sb_sLuR::synapse0x30bdb30() {
   return (neuron0x30a0f20()*-0.187466);
}

double NNfunction_sb_sLuR::synapse0x30bdb70() {
   return (neuron0x30a1260()*-0.0100244);
}

double NNfunction_sb_sLuR::synapse0x30bdbb0() {
   return (neuron0x30a15a0()*-0.00924298);
}

double NNfunction_sb_sLuR::synapse0x30bdbf0() {
   return (neuron0x30a18e0()*0.0158682);
}

double NNfunction_sb_sLuR::synapse0x30bdc30() {
   return (neuron0x30a1c20()*0.0156138);
}

double NNfunction_sb_sLuR::synapse0x30bdc70() {
   return (neuron0x30a1f60()*-0.00498287);
}

double NNfunction_sb_sLuR::synapse0x30bdcb0() {
   return (neuron0x30a22a0()*0.0112687);
}

double NNfunction_sb_sLuR::synapse0x30bdcf0() {
   return (neuron0x30a25e0()*-0.0350838);
}

double NNfunction_sb_sLuR::synapse0x30bdd30() {
   return (neuron0x30a2920()*-0.0204602);
}

double NNfunction_sb_sLuR::synapse0x30bdd70() {
   return (neuron0x30a2c60()*2.72973);
}

double NNfunction_sb_sLuR::synapse0x30bddb0() {
   return (neuron0x30a2fa0()*0.0174835);
}

double NNfunction_sb_sLuR::synapse0x30bddf0() {
   return (neuron0x30a32e0()*-0.182167);
}

double NNfunction_sb_sLuR::synapse0x30bde30() {
   return (neuron0x30a3620()*-0.0255254);
}

double NNfunction_sb_sLuR::synapse0x30bd8c0() {
   return (neuron0x30a3960()*-0.0130166);
}

double NNfunction_sb_sLuR::synapse0x30bd900() {
   return (neuron0x30a3ec0()*0.00632207);
}

double NNfunction_sb_sLuR::synapse0x30bdf80() {
   return (neuron0x30a40e0()*0.0360006);
}

double NNfunction_sb_sLuR::synapse0x30bdfc0() {
   return (neuron0x30a4420()*0.00028458);
}

double NNfunction_sb_sLuR::synapse0x30be000() {
   return (neuron0x30a4760()*0.00644787);
}

double NNfunction_sb_sLuR::synapse0x30be040() {
   return (neuron0x30a4aa0()*0.00255001);
}

double NNfunction_sb_sLuR::synapse0x30be080() {
   return (neuron0x30a4de0()*0.0152635);
}

double NNfunction_sb_sLuR::synapse0x30be0c0() {
   return (neuron0x30a5120()*0.0288682);
}

double NNfunction_sb_sLuR::synapse0x30be440() {
   return (neuron0x30a0560()*0.0177833);
}

double NNfunction_sb_sLuR::synapse0x30be480() {
   return (neuron0x30a08a0()*-0.30023);
}

double NNfunction_sb_sLuR::synapse0x30be4c0() {
   return (neuron0x30a0be0()*0.0246478);
}

double NNfunction_sb_sLuR::synapse0x30be500() {
   return (neuron0x30a0f20()*-1.86688);
}

double NNfunction_sb_sLuR::synapse0x30be540() {
   return (neuron0x30a1260()*-0.0454594);
}

double NNfunction_sb_sLuR::synapse0x30be580() {
   return (neuron0x30a15a0()*-0.0254931);
}

double NNfunction_sb_sLuR::synapse0x30be5c0() {
   return (neuron0x30a18e0()*0.19473);
}

double NNfunction_sb_sLuR::synapse0x30be600() {
   return (neuron0x30a1c20()*-0.0426748);
}

double NNfunction_sb_sLuR::synapse0x30be640() {
   return (neuron0x30a1f60()*-0.101272);
}

double NNfunction_sb_sLuR::synapse0x30be680() {
   return (neuron0x30a22a0()*0.0586516);
}

double NNfunction_sb_sLuR::synapse0x30be6c0() {
   return (neuron0x30a25e0()*-0.264563);
}

double NNfunction_sb_sLuR::synapse0x30be700() {
   return (neuron0x30a2920()*-0.0217409);
}

double NNfunction_sb_sLuR::synapse0x30be740() {
   return (neuron0x30a2c60()*-0.941592);
}

double NNfunction_sb_sLuR::synapse0x30be780() {
   return (neuron0x30a2fa0()*-0.0419162);
}

double NNfunction_sb_sLuR::synapse0x30be7c0() {
   return (neuron0x30a32e0()*-1.43288);
}

double NNfunction_sb_sLuR::synapse0x30be800() {
   return (neuron0x30a3620()*0.0772113);
}

double NNfunction_sb_sLuR::synapse0x30be290() {
   return (neuron0x30a3960()*-0.200081);
}

double NNfunction_sb_sLuR::synapse0x30be2d0() {
   return (neuron0x30a3ec0()*0.0425165);
}

double NNfunction_sb_sLuR::synapse0x30be950() {
   return (neuron0x30a40e0()*-0.0014081);
}

double NNfunction_sb_sLuR::synapse0x30be990() {
   return (neuron0x30a4420()*0.12833);
}

double NNfunction_sb_sLuR::synapse0x30be9d0() {
   return (neuron0x30a4760()*0.0405476);
}

double NNfunction_sb_sLuR::synapse0x30bea10() {
   return (neuron0x30a4aa0()*-0.0722246);
}

double NNfunction_sb_sLuR::synapse0x30bea50() {
   return (neuron0x30a4de0()*0.00521642);
}

double NNfunction_sb_sLuR::synapse0x30bea90() {
   return (neuron0x30a5120()*-0.0360585);
}

double NNfunction_sb_sLuR::synapse0x30bee10() {
   return (neuron0x30a0560()*-0.243471);
}

double NNfunction_sb_sLuR::synapse0x30bee50() {
   return (neuron0x30a08a0()*-0.119026);
}

double NNfunction_sb_sLuR::synapse0x30bee90() {
   return (neuron0x30a0be0()*0.405798);
}

double NNfunction_sb_sLuR::synapse0x30beed0() {
   return (neuron0x30a0f20()*0.325237);
}

double NNfunction_sb_sLuR::synapse0x30bef10() {
   return (neuron0x30a1260()*0.0846664);
}

double NNfunction_sb_sLuR::synapse0x30bef50() {
   return (neuron0x30a15a0()*0.192127);
}

double NNfunction_sb_sLuR::synapse0x30bef90() {
   return (neuron0x30a18e0()*0.274964);
}

double NNfunction_sb_sLuR::synapse0x30befd0() {
   return (neuron0x30a1c20()*-0.134016);
}

double NNfunction_sb_sLuR::synapse0x30bf010() {
   return (neuron0x30a1f60()*-0.133663);
}

double NNfunction_sb_sLuR::synapse0x30bf050() {
   return (neuron0x30a22a0()*-0.118084);
}

double NNfunction_sb_sLuR::synapse0x30bf090() {
   return (neuron0x30a25e0()*0.522392);
}

double NNfunction_sb_sLuR::synapse0x30bf0d0() {
   return (neuron0x30a2920()*0.735178);
}

double NNfunction_sb_sLuR::synapse0x30bf110() {
   return (neuron0x30a2c60()*-0.408273);
}

double NNfunction_sb_sLuR::synapse0x30bf150() {
   return (neuron0x30a2fa0()*-0.969886);
}

double NNfunction_sb_sLuR::synapse0x30bf190() {
   return (neuron0x30a32e0()*-0.841849);
}

double NNfunction_sb_sLuR::synapse0x30bf1d0() {
   return (neuron0x30a3620()*0.177498);
}

double NNfunction_sb_sLuR::synapse0x30bec60() {
   return (neuron0x30a3960()*-0.0450461);
}

double NNfunction_sb_sLuR::synapse0x30beca0() {
   return (neuron0x30a3ec0()*0.0794543);
}

double NNfunction_sb_sLuR::synapse0x30bf320() {
   return (neuron0x30a40e0()*-0.465812);
}

double NNfunction_sb_sLuR::synapse0x30bf360() {
   return (neuron0x30a4420()*0.351288);
}

double NNfunction_sb_sLuR::synapse0x30bf3a0() {
   return (neuron0x30a4760()*0.252548);
}

double NNfunction_sb_sLuR::synapse0x30bf3e0() {
   return (neuron0x30a4aa0()*-0.0645506);
}

double NNfunction_sb_sLuR::synapse0x30bf420() {
   return (neuron0x30a4de0()*-0.187192);
}

double NNfunction_sb_sLuR::synapse0x30bf460() {
   return (neuron0x30a5120()*-0.316624);
}

double NNfunction_sb_sLuR::synapse0x30bf7e0() {
   return (neuron0x30a0560()*-0.00838495);
}

double NNfunction_sb_sLuR::synapse0x30bf820() {
   return (neuron0x30a08a0()*-0.00276308);
}

double NNfunction_sb_sLuR::synapse0x30bf860() {
   return (neuron0x30a0be0()*0.00879291);
}

double NNfunction_sb_sLuR::synapse0x30bf8a0() {
   return (neuron0x30a0f20()*-1.77599);
}

double NNfunction_sb_sLuR::synapse0x30bf8e0() {
   return (neuron0x30a1260()*-0.00848918);
}

double NNfunction_sb_sLuR::synapse0x30bf920() {
   return (neuron0x30a15a0()*-0.00504742);
}

double NNfunction_sb_sLuR::synapse0x30bf960() {
   return (neuron0x30a18e0()*-0.00381526);
}

double NNfunction_sb_sLuR::synapse0x30bf9a0() {
   return (neuron0x30a1c20()*0.0161654);
}

double NNfunction_sb_sLuR::synapse0x30bf9e0() {
   return (neuron0x30a1f60()*0.0101008);
}

double NNfunction_sb_sLuR::synapse0x30bfa20() {
   return (neuron0x30a22a0()*-0.00510359);
}

double NNfunction_sb_sLuR::synapse0x30bfa60() {
   return (neuron0x30a25e0()*0.00282667);
}

double NNfunction_sb_sLuR::synapse0x30bfaa0() {
   return (neuron0x30a2920()*-0.00895197);
}

double NNfunction_sb_sLuR::synapse0x30bfae0() {
   return (neuron0x30a2c60()*-0.0519866);
}

double NNfunction_sb_sLuR::synapse0x30bfb20() {
   return (neuron0x30a2fa0()*-0.00494186);
}

double NNfunction_sb_sLuR::synapse0x30bfb60() {
   return (neuron0x30a32e0()*0.0980346);
}

double NNfunction_sb_sLuR::synapse0x30bfba0() {
   return (neuron0x30a3620()*0.00309411);
}

double NNfunction_sb_sLuR::synapse0x30bf630() {
   return (neuron0x30a3960()*0.00304722);
}

double NNfunction_sb_sLuR::synapse0x30bf670() {
   return (neuron0x30a3ec0()*-0.0235373);
}

double NNfunction_sb_sLuR::synapse0x30bfcf0() {
   return (neuron0x30a40e0()*-0.000124806);
}

double NNfunction_sb_sLuR::synapse0x30bfd30() {
   return (neuron0x30a4420()*-0.00481188);
}

double NNfunction_sb_sLuR::synapse0x30bfd70() {
   return (neuron0x30a4760()*0.00899957);
}

double NNfunction_sb_sLuR::synapse0x30bfdb0() {
   return (neuron0x30a4aa0()*0.00604931);
}

double NNfunction_sb_sLuR::synapse0x30bfdf0() {
   return (neuron0x30a4de0()*0.000688666);
}

double NNfunction_sb_sLuR::synapse0x30bfe30() {
   return (neuron0x30a5120()*0.00119936);
}

double NNfunction_sb_sLuR::synapse0x30c01b0() {
   return (neuron0x30a0560()*0.00253025);
}

double NNfunction_sb_sLuR::synapse0x30c01f0() {
   return (neuron0x30a08a0()*0.0155915);
}

double NNfunction_sb_sLuR::synapse0x30c0230() {
   return (neuron0x30a0be0()*-0.0242828);
}

double NNfunction_sb_sLuR::synapse0x30c0270() {
   return (neuron0x30a0f20()*-1.82504);
}

double NNfunction_sb_sLuR::synapse0x30c02b0() {
   return (neuron0x30a1260()*-0.0355147);
}

double NNfunction_sb_sLuR::synapse0x30c02f0() {
   return (neuron0x30a15a0()*-0.0144091);
}

double NNfunction_sb_sLuR::synapse0x30c0330() {
   return (neuron0x30a18e0()*-0.0238175);
}

double NNfunction_sb_sLuR::synapse0x30c0370() {
   return (neuron0x30a1c20()*0.0326754);
}

double NNfunction_sb_sLuR::synapse0x30c03b0() {
   return (neuron0x30a1f60()*0.0134336);
}

double NNfunction_sb_sLuR::synapse0x30c03f0() {
   return (neuron0x30a22a0()*0.00802618);
}

double NNfunction_sb_sLuR::synapse0x30c0430() {
   return (neuron0x30a25e0()*-0.0106493);
}

double NNfunction_sb_sLuR::synapse0x30c0470() {
   return (neuron0x30a2920()*-0.0511625);
}

double NNfunction_sb_sLuR::synapse0x30c04b0() {
   return (neuron0x30a2c60()*1.19322);
}

double NNfunction_sb_sLuR::synapse0x30c04f0() {
   return (neuron0x30a2fa0()*0.0129231);
}

double NNfunction_sb_sLuR::synapse0x30c0530() {
   return (neuron0x30a32e0()*-0.289239);
}

double NNfunction_sb_sLuR::synapse0x30c0570() {
   return (neuron0x30a3620()*-0.0328335);
}

double NNfunction_sb_sLuR::synapse0x30c0000() {
   return (neuron0x30a3960()*0.0307585);
}

double NNfunction_sb_sLuR::synapse0x30c0040() {
   return (neuron0x30a3ec0()*-0.00420939);
}

double NNfunction_sb_sLuR::synapse0x30c06c0() {
   return (neuron0x30a40e0()*-0.000156717);
}

double NNfunction_sb_sLuR::synapse0x30c0700() {
   return (neuron0x30a4420()*-0.00847282);
}

double NNfunction_sb_sLuR::synapse0x30c0740() {
   return (neuron0x30a4760()*0.0303766);
}

double NNfunction_sb_sLuR::synapse0x30c0780() {
   return (neuron0x30a4aa0()*0.0130797);
}

double NNfunction_sb_sLuR::synapse0x30c07c0() {
   return (neuron0x30a4de0()*0.00219763);
}

double NNfunction_sb_sLuR::synapse0x30c0800() {
   return (neuron0x30a5120()*-0.0207233);
}

double NNfunction_sb_sLuR::synapse0x30c0b80() {
   return (neuron0x30a0560()*-0.253967);
}

double NNfunction_sb_sLuR::synapse0x30c0bc0() {
   return (neuron0x30a08a0()*-0.393209);
}

double NNfunction_sb_sLuR::synapse0x30c0c00() {
   return (neuron0x30a0be0()*0.422461);
}

double NNfunction_sb_sLuR::synapse0x30c0c40() {
   return (neuron0x30a0f20()*-0.377367);
}

double NNfunction_sb_sLuR::synapse0x30c0c80() {
   return (neuron0x30a1260()*0.652956);
}

double NNfunction_sb_sLuR::synapse0x30c0cc0() {
   return (neuron0x30a15a0()*0.347206);
}

double NNfunction_sb_sLuR::synapse0x30c0d00() {
   return (neuron0x30a18e0()*0.390563);
}

double NNfunction_sb_sLuR::synapse0x30c0d40() {
   return (neuron0x30a1c20()*-0.332306);
}

double NNfunction_sb_sLuR::synapse0x30c0d80() {
   return (neuron0x30a1f60()*-0.34872);
}

double NNfunction_sb_sLuR::synapse0x30c0dc0() {
   return (neuron0x30a22a0()*-0.547579);
}

double NNfunction_sb_sLuR::synapse0x30c0e00() {
   return (neuron0x30a25e0()*-0.379007);
}

double NNfunction_sb_sLuR::synapse0x30c0e40() {
   return (neuron0x30a2920()*0.0952987);
}

double NNfunction_sb_sLuR::synapse0x30c0e80() {
   return (neuron0x30a2c60()*0.549565);
}

double NNfunction_sb_sLuR::synapse0x30c0ec0() {
   return (neuron0x30a2fa0()*-0.245566);
}

double NNfunction_sb_sLuR::synapse0x30c0f00() {
   return (neuron0x30a32e0()*0.812148);
}

double NNfunction_sb_sLuR::synapse0x30c0f40() {
   return (neuron0x30a3620()*-0.145189);
}

double NNfunction_sb_sLuR::synapse0x30c09d0() {
   return (neuron0x30a3960()*0.077799);
}

double NNfunction_sb_sLuR::synapse0x30c0a10() {
   return (neuron0x30a3ec0()*-0.364446);
}

double NNfunction_sb_sLuR::synapse0x30c1090() {
   return (neuron0x30a40e0()*-0.419993);
}

double NNfunction_sb_sLuR::synapse0x30c10d0() {
   return (neuron0x30a4420()*-0.0670916);
}

double NNfunction_sb_sLuR::synapse0x30c1110() {
   return (neuron0x30a4760()*0.69159);
}

double NNfunction_sb_sLuR::synapse0x30c1150() {
   return (neuron0x30a4aa0()*0.380212);
}

double NNfunction_sb_sLuR::synapse0x30c1190() {
   return (neuron0x30a4de0()*0.426488);
}

double NNfunction_sb_sLuR::synapse0x30c11d0() {
   return (neuron0x30a5120()*-0.12491);
}

double NNfunction_sb_sLuR::synapse0x30c1550() {
   return (neuron0x30a0560()*-0.249338);
}

double NNfunction_sb_sLuR::synapse0x30c1590() {
   return (neuron0x30a08a0()*-0.626545);
}

double NNfunction_sb_sLuR::synapse0x30c15d0() {
   return (neuron0x30a0be0()*0.103033);
}

double NNfunction_sb_sLuR::synapse0x30c1610() {
   return (neuron0x30a0f20()*0.642619);
}

double NNfunction_sb_sLuR::synapse0x30c1650() {
   return (neuron0x30a1260()*0.175984);
}

double NNfunction_sb_sLuR::synapse0x30c1690() {
   return (neuron0x30a15a0()*0.0123102);
}

double NNfunction_sb_sLuR::synapse0x30c16d0() {
   return (neuron0x30a18e0()*0.0515541);
}

double NNfunction_sb_sLuR::synapse0x30c1710() {
   return (neuron0x30a1c20()*0.0431192);
}

double NNfunction_sb_sLuR::synapse0x30c1750() {
   return (neuron0x30a1f60()*-0.122667);
}

double NNfunction_sb_sLuR::synapse0x30c1790() {
   return (neuron0x30a22a0()*-0.409386);
}

double NNfunction_sb_sLuR::synapse0x30c17d0() {
   return (neuron0x30a25e0()*-0.204794);
}

double NNfunction_sb_sLuR::synapse0x30c1810() {
   return (neuron0x30a2920()*-0.466892);
}

double NNfunction_sb_sLuR::synapse0x30c1850() {
   return (neuron0x30a2c60()*0.114349);
}

double NNfunction_sb_sLuR::synapse0x30c1890() {
   return (neuron0x30a2fa0()*-0.187302);
}

double NNfunction_sb_sLuR::synapse0x30c18d0() {
   return (neuron0x30a32e0()*0.525203);
}

double NNfunction_sb_sLuR::synapse0x30c1910() {
   return (neuron0x30a3620()*0.123916);
}

double NNfunction_sb_sLuR::synapse0x30c13a0() {
   return (neuron0x30a3960()*0.0977586);
}

double NNfunction_sb_sLuR::synapse0x30c13e0() {
   return (neuron0x30a3ec0()*0.201121);
}

double NNfunction_sb_sLuR::synapse0x30c1a60() {
   return (neuron0x30a40e0()*0.6503);
}

double NNfunction_sb_sLuR::synapse0x30c1aa0() {
   return (neuron0x30a4420()*-0.457165);
}

double NNfunction_sb_sLuR::synapse0x30c1ae0() {
   return (neuron0x30a4760()*-0.27147);
}

double NNfunction_sb_sLuR::synapse0x30c1b20() {
   return (neuron0x30a4aa0()*0.35108);
}

double NNfunction_sb_sLuR::synapse0x30c1b60() {
   return (neuron0x30a4de0()*0.0166611);
}

double NNfunction_sb_sLuR::synapse0x30c1ba0() {
   return (neuron0x30a5120()*-0.604658);
}

double NNfunction_sb_sLuR::synapse0x30aa650() {
   return (neuron0x30a0560()*-0.371791);
}

double NNfunction_sb_sLuR::synapse0x30aa690() {
   return (neuron0x30a08a0()*-0.192951);
}

double NNfunction_sb_sLuR::synapse0x30aa6d0() {
   return (neuron0x30a0be0()*-0.147077);
}

double NNfunction_sb_sLuR::synapse0x30aa710() {
   return (neuron0x30a0f20()*0.824137);
}

double NNfunction_sb_sLuR::synapse0x30aa750() {
   return (neuron0x30a1260()*0.395402);
}

double NNfunction_sb_sLuR::synapse0x30aa790() {
   return (neuron0x30a15a0()*0.499239);
}

double NNfunction_sb_sLuR::synapse0x30aa7d0() {
   return (neuron0x30a18e0()*-0.137117);
}

double NNfunction_sb_sLuR::synapse0x30aa810() {
   return (neuron0x30a1c20()*0.601606);
}

double NNfunction_sb_sLuR::synapse0x30c2330() {
   return (neuron0x30a1f60()*0.59151);
}

double NNfunction_sb_sLuR::synapse0x30c2370() {
   return (neuron0x30a22a0()*0.591035);
}

double NNfunction_sb_sLuR::synapse0x30c23b0() {
   return (neuron0x30a25e0()*-0.203579);
}

double NNfunction_sb_sLuR::synapse0x30c23f0() {
   return (neuron0x30a2920()*0.386844);
}

double NNfunction_sb_sLuR::synapse0x30c2430() {
   return (neuron0x30a2c60()*0.403602);
}

double NNfunction_sb_sLuR::synapse0x30c2470() {
   return (neuron0x30a2fa0()*-0.16289);
}

double NNfunction_sb_sLuR::synapse0x30c24b0() {
   return (neuron0x30a32e0()*0.225516);
}

double NNfunction_sb_sLuR::synapse0x30c24f0() {
   return (neuron0x30a3620()*-0.220621);
}

double NNfunction_sb_sLuR::synapse0x30c1d70() {
   return (neuron0x30a3960()*-0.513436);
}

double NNfunction_sb_sLuR::synapse0x30c1db0() {
   return (neuron0x30a3ec0()*0.860262);
}

double NNfunction_sb_sLuR::synapse0x30c2640() {
   return (neuron0x30a40e0()*0.205269);
}

double NNfunction_sb_sLuR::synapse0x30c2680() {
   return (neuron0x30a4420()*-0.161679);
}

double NNfunction_sb_sLuR::synapse0x30c26c0() {
   return (neuron0x30a4760()*0.180998);
}

double NNfunction_sb_sLuR::synapse0x30c2700() {
   return (neuron0x30a4aa0()*0.280893);
}

double NNfunction_sb_sLuR::synapse0x30c2740() {
   return (neuron0x30a4de0()*-0.510119);
}

double NNfunction_sb_sLuR::synapse0x30c2780() {
   return (neuron0x30a5120()*-0.200511);
}

double NNfunction_sb_sLuR::synapse0x30c2b00() {
   return (neuron0x30a0560()*-0.0172869);
}

double NNfunction_sb_sLuR::synapse0x30c2b40() {
   return (neuron0x30a08a0()*0.271505);
}

double NNfunction_sb_sLuR::synapse0x30c2b80() {
   return (neuron0x30a0be0()*0.393273);
}

double NNfunction_sb_sLuR::synapse0x30c2bc0() {
   return (neuron0x30a0f20()*-0.33747);
}

double NNfunction_sb_sLuR::synapse0x30c2c00() {
   return (neuron0x30a1260()*-0.0695326);
}

double NNfunction_sb_sLuR::synapse0x30c2c40() {
   return (neuron0x30a15a0()*-0.0188379);
}

double NNfunction_sb_sLuR::synapse0x30c2c80() {
   return (neuron0x30a18e0()*-0.0654851);
}

double NNfunction_sb_sLuR::synapse0x30c2cc0() {
   return (neuron0x30a1c20()*-0.0160607);
}

double NNfunction_sb_sLuR::synapse0x30c2d00() {
   return (neuron0x30a1f60()*0.0876179);
}

double NNfunction_sb_sLuR::synapse0x30c2d40() {
   return (neuron0x30a22a0()*-0.0297374);
}

double NNfunction_sb_sLuR::synapse0x30c2d80() {
   return (neuron0x30a25e0()*0.0696527);
}

double NNfunction_sb_sLuR::synapse0x30c2dc0() {
   return (neuron0x30a2920()*0.271255);
}

double NNfunction_sb_sLuR::synapse0x30c2e00() {
   return (neuron0x30a2c60()*0.0591642);
}

double NNfunction_sb_sLuR::synapse0x30c2e40() {
   return (neuron0x30a2fa0()*-0.0518919);
}

double NNfunction_sb_sLuR::synapse0x30c2e80() {
   return (neuron0x30a32e0()*0.0217848);
}

double NNfunction_sb_sLuR::synapse0x30c2ec0() {
   return (neuron0x30a3620()*0.0614985);
}

double NNfunction_sb_sLuR::synapse0x30c2950() {
   return (neuron0x30a3960()*-0.0522556);
}

double NNfunction_sb_sLuR::synapse0x30c2990() {
   return (neuron0x30a3ec0()*0.204229);
}

double NNfunction_sb_sLuR::synapse0x30c3010() {
   return (neuron0x30a40e0()*0.173506);
}

double NNfunction_sb_sLuR::synapse0x30c3050() {
   return (neuron0x30a4420()*0.13314);
}

double NNfunction_sb_sLuR::synapse0x30c3090() {
   return (neuron0x30a4760()*-0.032481);
}

double NNfunction_sb_sLuR::synapse0x30c30d0() {
   return (neuron0x30a4aa0()*-0.0255412);
}

double NNfunction_sb_sLuR::synapse0x30c3110() {
   return (neuron0x30a4de0()*0.0208104);
}

double NNfunction_sb_sLuR::synapse0x30c3150() {
   return (neuron0x30a5120()*-0.00526417);
}

double NNfunction_sb_sLuR::synapse0x30c34d0() {
   return (neuron0x30a0560()*-0.0264504);
}

double NNfunction_sb_sLuR::synapse0x30c3510() {
   return (neuron0x30a08a0()*-0.707213);
}

double NNfunction_sb_sLuR::synapse0x30c3550() {
   return (neuron0x30a0be0()*0.229838);
}

double NNfunction_sb_sLuR::synapse0x30c3590() {
   return (neuron0x30a0f20()*-0.124361);
}

double NNfunction_sb_sLuR::synapse0x30c35d0() {
   return (neuron0x30a1260()*0.229232);
}

double NNfunction_sb_sLuR::synapse0x30c3610() {
   return (neuron0x30a15a0()*-0.0539281);
}

double NNfunction_sb_sLuR::synapse0x30c3650() {
   return (neuron0x30a18e0()*0.191844);
}

double NNfunction_sb_sLuR::synapse0x30c3690() {
   return (neuron0x30a1c20()*0.038751);
}

double NNfunction_sb_sLuR::synapse0x30c36d0() {
   return (neuron0x30a1f60()*-0.576135);
}

double NNfunction_sb_sLuR::synapse0x30c3710() {
   return (neuron0x30a22a0()*-1.16841);
}

double NNfunction_sb_sLuR::synapse0x30c3750() {
   return (neuron0x30a25e0()*0.633913);
}

double NNfunction_sb_sLuR::synapse0x30c3790() {
   return (neuron0x30a2920()*0.357592);
}

double NNfunction_sb_sLuR::synapse0x30c37d0() {
   return (neuron0x30a2c60()*-0.323206);
}

double NNfunction_sb_sLuR::synapse0x30c3810() {
   return (neuron0x30a2fa0()*-0.104273);
}

double NNfunction_sb_sLuR::synapse0x30c3850() {
   return (neuron0x30a32e0()*0.378569);
}

double NNfunction_sb_sLuR::synapse0x30c3890() {
   return (neuron0x30a3620()*0.134077);
}

double NNfunction_sb_sLuR::synapse0x30c3320() {
   return (neuron0x30a3960()*-0.292661);
}

double NNfunction_sb_sLuR::synapse0x30c3360() {
   return (neuron0x30a3ec0()*-0.462706);
}

double NNfunction_sb_sLuR::synapse0x30b3e90() {
   return (neuron0x30a40e0()*-0.805446);
}

double NNfunction_sb_sLuR::synapse0x30b3ed0() {
   return (neuron0x30a4420()*-0.144191);
}

double NNfunction_sb_sLuR::synapse0x30b3f10() {
   return (neuron0x30a4760()*-0.449213);
}

double NNfunction_sb_sLuR::synapse0x30b3f50() {
   return (neuron0x30a4aa0()*0.0566827);
}

double NNfunction_sb_sLuR::synapse0x30b3f90() {
   return (neuron0x30a4de0()*0.324595);
}

double NNfunction_sb_sLuR::synapse0x30b3fd0() {
   return (neuron0x30a5120()*0.472318);
}

double NNfunction_sb_sLuR::synapse0x30b4350() {
   return (neuron0x30a0560()*0.0810395);
}

double NNfunction_sb_sLuR::synapse0x30b4390() {
   return (neuron0x30a08a0()*-0.618509);
}

double NNfunction_sb_sLuR::synapse0x30b43d0() {
   return (neuron0x30a0be0()*0.70651);
}

double NNfunction_sb_sLuR::synapse0x30b4410() {
   return (neuron0x30a0f20()*0.237516);
}

double NNfunction_sb_sLuR::synapse0x30b4450() {
   return (neuron0x30a1260()*0.11286);
}

double NNfunction_sb_sLuR::synapse0x30b4490() {
   return (neuron0x30a15a0()*0.502642);
}

double NNfunction_sb_sLuR::synapse0x30b44d0() {
   return (neuron0x30a18e0()*0.174126);
}

double NNfunction_sb_sLuR::synapse0x30b4510() {
   return (neuron0x30a1c20()*-0.178424);
}

double NNfunction_sb_sLuR::synapse0x30b4550() {
   return (neuron0x30a1f60()*0.23801);
}

double NNfunction_sb_sLuR::synapse0x30b4590() {
   return (neuron0x30a22a0()*0.240486);
}

double NNfunction_sb_sLuR::synapse0x30b45d0() {
   return (neuron0x30a25e0()*0.241487);
}

double NNfunction_sb_sLuR::synapse0x30b4610() {
   return (neuron0x30a2920()*-0.837817);
}

double NNfunction_sb_sLuR::synapse0x30b4650() {
   return (neuron0x30a2c60()*-0.465485);
}

double NNfunction_sb_sLuR::synapse0x30b4690() {
   return (neuron0x30a2fa0()*0.0538511);
}

double NNfunction_sb_sLuR::synapse0x30b46d0() {
   return (neuron0x30a32e0()*0.0629389);
}

double NNfunction_sb_sLuR::synapse0x30b4710() {
   return (neuron0x30a3620()*-0.519886);
}

double NNfunction_sb_sLuR::synapse0x30b41a0() {
   return (neuron0x30a3960()*0.208871);
}

double NNfunction_sb_sLuR::synapse0x30b41e0() {
   return (neuron0x30a3ec0()*0.114858);
}

double NNfunction_sb_sLuR::synapse0x30b4860() {
   return (neuron0x30a40e0()*-0.11366);
}

double NNfunction_sb_sLuR::synapse0x30b48a0() {
   return (neuron0x30a4420()*-0.444244);
}

double NNfunction_sb_sLuR::synapse0x30b48e0() {
   return (neuron0x30a4760()*0.202805);
}

double NNfunction_sb_sLuR::synapse0x30b4920() {
   return (neuron0x30a4aa0()*0.792932);
}

double NNfunction_sb_sLuR::synapse0x30b4960() {
   return (neuron0x30a4de0()*0.182703);
}

double NNfunction_sb_sLuR::synapse0x30b49a0() {
   return (neuron0x30a5120()*-0.41958);
}

double NNfunction_sb_sLuR::synapse0x30b4d20() {
   return (neuron0x30a0560()*0.0975247);
}

double NNfunction_sb_sLuR::synapse0x30b4d60() {
   return (neuron0x30a08a0()*0.221442);
}

double NNfunction_sb_sLuR::synapse0x30b4da0() {
   return (neuron0x30a0be0()*-0.0532312);
}

double NNfunction_sb_sLuR::synapse0x30b4de0() {
   return (neuron0x30a0f20()*-0.261867);
}

double NNfunction_sb_sLuR::synapse0x30b4e20() {
   return (neuron0x30a1260()*0.461631);
}

double NNfunction_sb_sLuR::synapse0x30b4e60() {
   return (neuron0x30a15a0()*-0.193643);
}

double NNfunction_sb_sLuR::synapse0x30b4ea0() {
   return (neuron0x30a18e0()*-0.511706);
}

double NNfunction_sb_sLuR::synapse0x30b4ee0() {
   return (neuron0x30a1c20()*-0.0199609);
}

double NNfunction_sb_sLuR::synapse0x30b4f20() {
   return (neuron0x30a1f60()*-0.405162);
}

double NNfunction_sb_sLuR::synapse0x30b4f60() {
   return (neuron0x30a22a0()*-0.698044);
}

double NNfunction_sb_sLuR::synapse0x30b4fa0() {
   return (neuron0x30a25e0()*-0.605147);
}

double NNfunction_sb_sLuR::synapse0x30b4fe0() {
   return (neuron0x30a2920()*0.544112);
}

double NNfunction_sb_sLuR::synapse0x30b5020() {
   return (neuron0x30a2c60()*0.161697);
}

double NNfunction_sb_sLuR::synapse0x30b5060() {
   return (neuron0x30a2fa0()*-0.75977);
}

double NNfunction_sb_sLuR::synapse0x30b50a0() {
   return (neuron0x30a32e0()*0.0777919);
}

double NNfunction_sb_sLuR::synapse0x30b50e0() {
   return (neuron0x30a3620()*0.368495);
}

double NNfunction_sb_sLuR::synapse0x30b4b70() {
   return (neuron0x30a3960()*-0.970994);
}

double NNfunction_sb_sLuR::synapse0x30b4bb0() {
   return (neuron0x30a3ec0()*0.484279);
}

double NNfunction_sb_sLuR::synapse0x30b5230() {
   return (neuron0x30a40e0()*0.308368);
}

double NNfunction_sb_sLuR::synapse0x30b5270() {
   return (neuron0x30a4420()*-0.205583);
}

double NNfunction_sb_sLuR::synapse0x30b52b0() {
   return (neuron0x30a4760()*0.135698);
}

double NNfunction_sb_sLuR::synapse0x30b52f0() {
   return (neuron0x30a4aa0()*-0.47961);
}

double NNfunction_sb_sLuR::synapse0x30b5330() {
   return (neuron0x30a4de0()*0.0392273);
}

double NNfunction_sb_sLuR::synapse0x30b5370() {
   return (neuron0x30a5120()*-0.256032);
}

double NNfunction_sb_sLuR::synapse0x30b56f0() {
   return (neuron0x30a0560()*0.00314525);
}

double NNfunction_sb_sLuR::synapse0x30b5730() {
   return (neuron0x30a08a0()*-0.00193562);
}

double NNfunction_sb_sLuR::synapse0x30b5770() {
   return (neuron0x30a0be0()*-0.0119507);
}

double NNfunction_sb_sLuR::synapse0x30b57b0() {
   return (neuron0x30a0f20()*2.08492);
}

double NNfunction_sb_sLuR::synapse0x30b57f0() {
   return (neuron0x30a1260()*0.0152215);
}

double NNfunction_sb_sLuR::synapse0x30b5830() {
   return (neuron0x30a15a0()*0.00675026);
}

double NNfunction_sb_sLuR::synapse0x30b5870() {
   return (neuron0x30a18e0()*0.00179924);
}

double NNfunction_sb_sLuR::synapse0x30b58b0() {
   return (neuron0x30a1c20()*0.000155371);
}

double NNfunction_sb_sLuR::synapse0x30b58f0() {
   return (neuron0x30a1f60()*-0.00776344);
}

double NNfunction_sb_sLuR::synapse0x30b5930() {
   return (neuron0x30a22a0()*-0.00849806);
}

double NNfunction_sb_sLuR::synapse0x30b5970() {
   return (neuron0x30a25e0()*0.00486626);
}

double NNfunction_sb_sLuR::synapse0x30b59b0() {
   return (neuron0x30a2920()*-0.0279999);
}

double NNfunction_sb_sLuR::synapse0x30b59f0() {
   return (neuron0x30a2c60()*0.399768);
}

double NNfunction_sb_sLuR::synapse0x30b5a30() {
   return (neuron0x30a2fa0()*0.00446964);
}

double NNfunction_sb_sLuR::synapse0x30b5a70() {
   return (neuron0x30a32e0()*0.251764);
}

double NNfunction_sb_sLuR::synapse0x30b5ab0() {
   return (neuron0x30a3620()*-0.0132697);
}

double NNfunction_sb_sLuR::synapse0x30b5540() {
   return (neuron0x30a3960()*0.0126504);
}

double NNfunction_sb_sLuR::synapse0x30b5580() {
   return (neuron0x30a3ec0()*-0.0178029);
}

double NNfunction_sb_sLuR::synapse0x30b5c00() {
   return (neuron0x30a40e0()*-0.0184039);
}

double NNfunction_sb_sLuR::synapse0x30b5c40() {
   return (neuron0x30a4420()*-0.00622944);
}

double NNfunction_sb_sLuR::synapse0x30b5c80() {
   return (neuron0x30a4760()*-0.00951563);
}

double NNfunction_sb_sLuR::synapse0x30b5cc0() {
   return (neuron0x30a4aa0()*0.00419141);
}

double NNfunction_sb_sLuR::synapse0x30b5d00() {
   return (neuron0x30a4de0()*0.0035607);
}

double NNfunction_sb_sLuR::synapse0x30b5d40() {
   return (neuron0x30a5120()*-0.000162999);
}

double NNfunction_sb_sLuR::synapse0x30c7c10() {
   return (neuron0x30a0560()*-0.435495);
}

double NNfunction_sb_sLuR::synapse0x30c7c50() {
   return (neuron0x30a08a0()*-0.259451);
}

double NNfunction_sb_sLuR::synapse0x30c7c90() {
   return (neuron0x30a0be0()*-0.500582);
}

double NNfunction_sb_sLuR::synapse0x30c7cd0() {
   return (neuron0x30a0f20()*-0.945585);
}

double NNfunction_sb_sLuR::synapse0x30c7d10() {
   return (neuron0x30a1260()*-1.14418);
}

double NNfunction_sb_sLuR::synapse0x30c7d50() {
   return (neuron0x30a15a0()*0.176314);
}

double NNfunction_sb_sLuR::synapse0x30c7d90() {
   return (neuron0x30a18e0()*0.463455);
}

double NNfunction_sb_sLuR::synapse0x30c7dd0() {
   return (neuron0x30a1c20()*0.269183);
}

double NNfunction_sb_sLuR::synapse0x30c7e10() {
   return (neuron0x30a1f60()*-0.151756);
}

double NNfunction_sb_sLuR::synapse0x30c7e50() {
   return (neuron0x30a22a0()*-0.171462);
}

double NNfunction_sb_sLuR::synapse0x30c7e90() {
   return (neuron0x30a25e0()*-0.0736586);
}

double NNfunction_sb_sLuR::synapse0x30c7ed0() {
   return (neuron0x30a2920()*0.0492587);
}

double NNfunction_sb_sLuR::synapse0x30c7f10() {
   return (neuron0x30a2c60()*0.157412);
}

double NNfunction_sb_sLuR::synapse0x30c7f50() {
   return (neuron0x30a2fa0()*0.0771831);
}

double NNfunction_sb_sLuR::synapse0x30c7f90() {
   return (neuron0x30a32e0()*-0.084183);
}

double NNfunction_sb_sLuR::synapse0x30c7fd0() {
   return (neuron0x30a3620()*0.414944);
}

double NNfunction_sb_sLuR::synapse0x30b5d80() {
   return (neuron0x30a3960()*-0.324115);
}

double NNfunction_sb_sLuR::synapse0x30b5dc0() {
   return (neuron0x30a3ec0()*-0.00779325);
}

double NNfunction_sb_sLuR::synapse0x30c8120() {
   return (neuron0x30a40e0()*-0.360096);
}

double NNfunction_sb_sLuR::synapse0x30c8160() {
   return (neuron0x30a4420()*-0.637542);
}

double NNfunction_sb_sLuR::synapse0x30c81a0() {
   return (neuron0x30a4760()*0.05237);
}

double NNfunction_sb_sLuR::synapse0x30c81e0() {
   return (neuron0x30a4aa0()*0.126344);
}

double NNfunction_sb_sLuR::synapse0x30c8220() {
   return (neuron0x30a4de0()*0.214872);
}

double NNfunction_sb_sLuR::synapse0x30c8260() {
   return (neuron0x30a5120()*0.276087);
}

double NNfunction_sb_sLuR::synapse0x30c85e0() {
   return (neuron0x30a0560()*0.50864);
}

double NNfunction_sb_sLuR::synapse0x30c8620() {
   return (neuron0x30a08a0()*0.314233);
}

double NNfunction_sb_sLuR::synapse0x30c8660() {
   return (neuron0x30a0be0()*-0.877298);
}

double NNfunction_sb_sLuR::synapse0x30c86a0() {
   return (neuron0x30a0f20()*0.0641724);
}

double NNfunction_sb_sLuR::synapse0x30c86e0() {
   return (neuron0x30a1260()*-0.0504802);
}

double NNfunction_sb_sLuR::synapse0x30c8720() {
   return (neuron0x30a15a0()*-0.627147);
}

double NNfunction_sb_sLuR::synapse0x30c8760() {
   return (neuron0x30a18e0()*0.558156);
}

double NNfunction_sb_sLuR::synapse0x30c87a0() {
   return (neuron0x30a1c20()*-0.0295937);
}

double NNfunction_sb_sLuR::synapse0x30c87e0() {
   return (neuron0x30a1f60()*-0.3084);
}

double NNfunction_sb_sLuR::synapse0x30c8820() {
   return (neuron0x30a22a0()*-0.515744);
}

double NNfunction_sb_sLuR::synapse0x30c8860() {
   return (neuron0x30a25e0()*-0.46682);
}

double NNfunction_sb_sLuR::synapse0x30c88a0() {
   return (neuron0x30a2920()*0.776271);
}

double NNfunction_sb_sLuR::synapse0x30c88e0() {
   return (neuron0x30a2c60()*-0.257873);
}

double NNfunction_sb_sLuR::synapse0x30c8920() {
   return (neuron0x30a2fa0()*0.116183);
}

double NNfunction_sb_sLuR::synapse0x30c8960() {
   return (neuron0x30a32e0()*0.0467117);
}

double NNfunction_sb_sLuR::synapse0x30c89a0() {
   return (neuron0x30a3620()*-0.139358);
}

double NNfunction_sb_sLuR::synapse0x30c8430() {
   return (neuron0x30a3960()*0.329989);
}

double NNfunction_sb_sLuR::synapse0x30c8470() {
   return (neuron0x30a3ec0()*-0.48086);
}

double NNfunction_sb_sLuR::synapse0x30c8af0() {
   return (neuron0x30a40e0()*0.154352);
}

double NNfunction_sb_sLuR::synapse0x30c8b30() {
   return (neuron0x30a4420()*0.303674);
}

double NNfunction_sb_sLuR::synapse0x30c8b70() {
   return (neuron0x30a4760()*-0.33324);
}

double NNfunction_sb_sLuR::synapse0x30c8bb0() {
   return (neuron0x30a4aa0()*-0.100319);
}

double NNfunction_sb_sLuR::synapse0x30c8bf0() {
   return (neuron0x30a4de0()*0.345575);
}

double NNfunction_sb_sLuR::synapse0x30c8c30() {
   return (neuron0x30a5120()*-0.341629);
}

double NNfunction_sb_sLuR::synapse0x30c8fb0() {
   return (neuron0x30a0560()*-0.235543);
}

double NNfunction_sb_sLuR::synapse0x30c8ff0() {
   return (neuron0x30a08a0()*0.689855);
}

double NNfunction_sb_sLuR::synapse0x30c9030() {
   return (neuron0x30a0be0()*-0.259314);
}

double NNfunction_sb_sLuR::synapse0x30c9070() {
   return (neuron0x30a0f20()*-0.175112);
}

double NNfunction_sb_sLuR::synapse0x30c90b0() {
   return (neuron0x30a1260()*0.0322466);
}

double NNfunction_sb_sLuR::synapse0x30c90f0() {
   return (neuron0x30a15a0()*-0.0230585);
}

double NNfunction_sb_sLuR::synapse0x30c9130() {
   return (neuron0x30a18e0()*-0.214912);
}

double NNfunction_sb_sLuR::synapse0x30c9170() {
   return (neuron0x30a1c20()*-0.27922);
}

double NNfunction_sb_sLuR::synapse0x30c91b0() {
   return (neuron0x30a1f60()*0.0501456);
}

double NNfunction_sb_sLuR::synapse0x30c91f0() {
   return (neuron0x30a22a0()*-0.229926);
}

double NNfunction_sb_sLuR::synapse0x30c9230() {
   return (neuron0x30a25e0()*0.0958915);
}

double NNfunction_sb_sLuR::synapse0x30c9270() {
   return (neuron0x30a2920()*-0.0118697);
}

double NNfunction_sb_sLuR::synapse0x30c92b0() {
   return (neuron0x30a2c60()*-0.120861);
}

double NNfunction_sb_sLuR::synapse0x30c92f0() {
   return (neuron0x30a2fa0()*0.00891462);
}

double NNfunction_sb_sLuR::synapse0x30c9330() {
   return (neuron0x30a32e0()*0.514716);
}

double NNfunction_sb_sLuR::synapse0x30c9370() {
   return (neuron0x30a3620()*-0.372787);
}

double NNfunction_sb_sLuR::synapse0x30c8e00() {
   return (neuron0x30a3960()*-0.0538848);
}

double NNfunction_sb_sLuR::synapse0x30c8e40() {
   return (neuron0x30a3ec0()*0.395763);
}

double NNfunction_sb_sLuR::synapse0x30c94c0() {
   return (neuron0x30a40e0()*-0.955313);
}

double NNfunction_sb_sLuR::synapse0x30c9500() {
   return (neuron0x30a4420()*-0.504974);
}

double NNfunction_sb_sLuR::synapse0x30c9540() {
   return (neuron0x30a4760()*0.314603);
}

double NNfunction_sb_sLuR::synapse0x30c9580() {
   return (neuron0x30a4aa0()*0.140031);
}

double NNfunction_sb_sLuR::synapse0x30c95c0() {
   return (neuron0x30a4de0()*0.0203351);
}

double NNfunction_sb_sLuR::synapse0x30c9600() {
   return (neuron0x30a5120()*-0.0984019);
}

double NNfunction_sb_sLuR::synapse0x30c9980() {
   return (neuron0x30a0560()*0.0483893);
}

double NNfunction_sb_sLuR::synapse0x30c99c0() {
   return (neuron0x30a08a0()*0.420447);
}

double NNfunction_sb_sLuR::synapse0x30c9a00() {
   return (neuron0x30a0be0()*0.0969858);
}

double NNfunction_sb_sLuR::synapse0x30c9a40() {
   return (neuron0x30a0f20()*0.149235);
}

double NNfunction_sb_sLuR::synapse0x30c9a80() {
   return (neuron0x30a1260()*0.0211892);
}

double NNfunction_sb_sLuR::synapse0x30c9ac0() {
   return (neuron0x30a15a0()*0.0092417);
}

double NNfunction_sb_sLuR::synapse0x30c9b00() {
   return (neuron0x30a18e0()*0.0360438);
}

double NNfunction_sb_sLuR::synapse0x30c9b40() {
   return (neuron0x30a1c20()*0.010934);
}

double NNfunction_sb_sLuR::synapse0x30c9b80() {
   return (neuron0x30a1f60()*-0.252938);
}

double NNfunction_sb_sLuR::synapse0x30c9bc0() {
   return (neuron0x30a22a0()*-0.0257782);
}

double NNfunction_sb_sLuR::synapse0x30c9c00() {
   return (neuron0x30a25e0()*-0.0142313);
}

double NNfunction_sb_sLuR::synapse0x30c9c40() {
   return (neuron0x30a2920()*-0.0154175);
}

double NNfunction_sb_sLuR::synapse0x30c9c80() {
   return (neuron0x30a2c60()*-0.223415);
}

double NNfunction_sb_sLuR::synapse0x30c9cc0() {
   return (neuron0x30a2fa0()*0.113164);
}

double NNfunction_sb_sLuR::synapse0x30c9d00() {
   return (neuron0x30a32e0()*-0.578145);
}

double NNfunction_sb_sLuR::synapse0x30c9d40() {
   return (neuron0x30a3620()*0.13728);
}

double NNfunction_sb_sLuR::synapse0x30c97d0() {
   return (neuron0x30a3960()*0.0980318);
}

double NNfunction_sb_sLuR::synapse0x30c9810() {
   return (neuron0x30a3ec0()*-0.0986456);
}

double NNfunction_sb_sLuR::synapse0x30c9e90() {
   return (neuron0x30a40e0()*0.0823387);
}

double NNfunction_sb_sLuR::synapse0x30c9ed0() {
   return (neuron0x30a4420()*-0.212445);
}

double NNfunction_sb_sLuR::synapse0x30c9f10() {
   return (neuron0x30a4760()*-0.046732);
}

double NNfunction_sb_sLuR::synapse0x30c9f50() {
   return (neuron0x30a4aa0()*-0.0311299);
}

double NNfunction_sb_sLuR::synapse0x30c9f90() {
   return (neuron0x30a4de0()*-0.00511429);
}

double NNfunction_sb_sLuR::synapse0x30c9fd0() {
   return (neuron0x30a5120()*0.0595368);
}

double NNfunction_sb_sLuR::synapse0x30a6570() {
   return (neuron0x30a55c0()*-0.0936293);
}

double NNfunction_sb_sLuR::synapse0x30a65b0() {
   return (neuron0x30a5ed0()*-1.29283);
}

double NNfunction_sb_sLuR::synapse0x30a7a80() {
   return (neuron0x30a69b0()*0.259336);
}

double NNfunction_sb_sLuR::synapse0x30a7ac0() {
   return (neuron0x2e60240()*0.0444973);
}

double NNfunction_sb_sLuR::synapse0x30a8450() {
   return (neuron0x30a77d0()*-0.447184);
}

double NNfunction_sb_sLuR::synapse0x30a8490() {
   return (neuron0x30a81a0()*0.0229835);
}

double NNfunction_sb_sLuR::synapse0x30a9220() {
   return (neuron0x30a8f70()*0.000410202);
}

double NNfunction_sb_sLuR::synapse0x30a9260() {
   return (neuron0x30a9940()*0.0837148);
}

double NNfunction_sb_sLuR::synapse0x30a9bf0() {
   return (neuron0x30aa310()*-0.339828);
}

double NNfunction_sb_sLuR::synapse0x30a9c30() {
   return (neuron0x30aadf0()*0.024594);
}

double NNfunction_sb_sLuR::synapse0x30aa5c0() {
   return (neuron0x30ab7c0()*0.131964);
}

double NNfunction_sb_sLuR::synapse0x30aa600() {
   return (neuron0x30a88a0()*0.0368196);
}

double NNfunction_sb_sLuR::synapse0x30ab0a0() {
   return (neuron0x30ad370()*0.0643958);
}

double NNfunction_sb_sLuR::synapse0x30ab0e0() {
   return (neuron0x30add40()*0.0106933);
}

double NNfunction_sb_sLuR::synapse0x30aba70() {
   return (neuron0x30ae710()*-0.889263);
}

double NNfunction_sb_sLuR::synapse0x30abab0() {
   return (neuron0x30af0e0()*0.881224);
}

double NNfunction_sb_sLuR::synapse0x30a8b50() {
   return (neuron0x30b0ef0()*-0.0514249);
}

double NNfunction_sb_sLuR::synapse0x30a8b90() {
   return (neuron0x30b11d0()*0.33616);
}

double NNfunction_sb_sLuR::synapse0x30ad620() {
   return (neuron0x30b1ba0()*-0.0289371);
}

double NNfunction_sb_sLuR::synapse0x30ad660() {
   return (neuron0x30b2570()*0.0711726);
}

double NNfunction_sb_sLuR::synapse0x30adff0() {
   return (neuron0x30b2f40()*-0.232969);
}

double NNfunction_sb_sLuR::synapse0x30ae030() {
   return (neuron0x30b3910()*-0.00522452);
}

double NNfunction_sb_sLuR::synapse0x30ae9c0() {
   return (neuron0x30ac460()*0.707081);
}

double NNfunction_sb_sLuR::synapse0x30aea00() {
   return (neuron0x30ace30()*-1.60031);
}

double NNfunction_sb_sLuR::synapse0x30af390() {
   return (neuron0x30b66a0()*0.0432636);
}

double NNfunction_sb_sLuR::synapse0x30af3d0() {
   return (neuron0x30b7070()*-0.0211616);
}

double NNfunction_sb_sLuR::synapse0x30a3500() {
   return (neuron0x30b7a40()*-0.219659);
}

double NNfunction_sb_sLuR::synapse0x30a3540() {
   return (neuron0x30b8410()*0.00357554);
}

double NNfunction_sb_sLuR::synapse0x30b1480() {
   return (neuron0x30b8de0()*-0.0763254);
}

double NNfunction_sb_sLuR::synapse0x30b14c0() {
   return (neuron0x30b97b0()*1.55005);
}

double NNfunction_sb_sLuR::synapse0x30b1e50() {
   return (neuron0x30ba180()*0.591358);
}

double NNfunction_sb_sLuR::synapse0x30b1e90() {
   return (neuron0x30bab50()*-0.0411663);
}

double NNfunction_sb_sLuR::synapse0x30b2820() {
   return (neuron0x30b0be0()*0.0847079);
}

double NNfunction_sb_sLuR::synapse0x30b2860() {
   return (neuron0x30bd730()*0.732796);
}

double NNfunction_sb_sLuR::synapse0x30b31f0() {
   return (neuron0x30be100()*-0.266068);
}

double NNfunction_sb_sLuR::synapse0x30b3230() {
   return (neuron0x30bead0()*-0.0732415);
}

double NNfunction_sb_sLuR::synapse0x30b3bc0() {
   return (neuron0x30bf4a0()*-0.581478);
}

double NNfunction_sb_sLuR::synapse0x30b3c00() {
   return (neuron0x30bfe70()*-0.128125);
}

double NNfunction_sb_sLuR::synapse0x30ac710() {
   return (neuron0x30c0840()*0.0496325);
}

double NNfunction_sb_sLuR::synapse0x30ac750() {
   return (neuron0x30c1210()*0.0683667);
}

double NNfunction_sb_sLuR::synapse0x30b5fc0() {
   return (neuron0x30c1be0()*-0.0274575);
}

double NNfunction_sb_sLuR::synapse0x30b6000() {
   return (neuron0x30c27c0()*0.168533);
}

double NNfunction_sb_sLuR::synapse0x30b6950() {
   return (neuron0x30c3190()*0.0502176);
}

double NNfunction_sb_sLuR::synapse0x30b6990() {
   return (neuron0x30b4010()*-0.0627466);
}

double NNfunction_sb_sLuR::synapse0x30b7320() {
   return (neuron0x30b49e0()*-0.0557909);
}

double NNfunction_sb_sLuR::synapse0x30b7360() {
   return (neuron0x30b53b0()*-0.159998);
}

double NNfunction_sb_sLuR::synapse0x30b7cf0() {
   return (neuron0x30c79f0()*0.00758767);
}

double NNfunction_sb_sLuR::synapse0x30b7d30() {
   return (neuron0x30c82a0()*0.0049999);
}

double NNfunction_sb_sLuR::synapse0x30b86c0() {
   return (neuron0x30c8c70()*0.102012);
}

double NNfunction_sb_sLuR::synapse0x30b8700() {
   return (neuron0x30c9640()*-0.325915);
}

double NNfunction_sb_sLuR::synapse0x30bae00() {
   return (neuron0x30a55c0()*-0.246983);
}

double NNfunction_sb_sLuR::synapse0x30bae40() {
   return (neuron0x30a5ed0()*-1.43367);
}

double NNfunction_sb_sLuR::synapse0x30b03c0() {
   return (neuron0x30a69b0()*-1.2172);
}

double NNfunction_sb_sLuR::synapse0x30b0400() {
   return (neuron0x2e60240()*-0.381651);
}

double NNfunction_sb_sLuR::synapse0x30bd9e0() {
   return (neuron0x30a77d0()*2.16984);
}

double NNfunction_sb_sLuR::synapse0x30bda20() {
   return (neuron0x30a81a0()*0.786105);
}

double NNfunction_sb_sLuR::synapse0x30be3b0() {
   return (neuron0x30a8f70()*0.24566);
}

double NNfunction_sb_sLuR::synapse0x30be3f0() {
   return (neuron0x30a9940()*-0.763357);
}

double NNfunction_sb_sLuR::synapse0x30bed80() {
   return (neuron0x30aa310()*-0.509209);
}

double NNfunction_sb_sLuR::synapse0x30bedc0() {
   return (neuron0x30aadf0()*1.96211);
}

double NNfunction_sb_sLuR::synapse0x30bf750() {
   return (neuron0x30ab7c0()*-0.501632);
}

double NNfunction_sb_sLuR::synapse0x30bf790() {
   return (neuron0x30a88a0()*-0.798594);
}

double NNfunction_sb_sLuR::synapse0x30c0120() {
   return (neuron0x30ad370()*-1.97974);
}

double NNfunction_sb_sLuR::synapse0x30c0160() {
   return (neuron0x30add40()*1.57546);
}

double NNfunction_sb_sLuR::synapse0x30c0af0() {
   return (neuron0x30ae710()*1.75853);
}

double NNfunction_sb_sLuR::synapse0x30c0b30() {
   return (neuron0x30af0e0()*-5.05289);
}

double NNfunction_sb_sLuR::synapse0x30c14c0() {
   return (neuron0x30b0ef0()*0.854641);
}

double NNfunction_sb_sLuR::synapse0x30c1500() {
   return (neuron0x30b11d0()*1.20248);
}

double NNfunction_sb_sLuR::synapse0x30c1e90() {
   return (neuron0x30b1ba0()*-1.11262);
}

double NNfunction_sb_sLuR::synapse0x30c1ed0() {
   return (neuron0x30b2570()*2.00693);
}

double NNfunction_sb_sLuR::synapse0x30c2a70() {
   return (neuron0x30b2f40()*-0.678755);
}

double NNfunction_sb_sLuR::synapse0x30c2ab0() {
   return (neuron0x30b3910()*0.626421);
}

double NNfunction_sb_sLuR::synapse0x30c3440() {
   return (neuron0x30ac460()*-1.03462);
}

double NNfunction_sb_sLuR::synapse0x30c3480() {
   return (neuron0x30ace30()*0.68185);
}

double NNfunction_sb_sLuR::synapse0x30b42c0() {
   return (neuron0x30b66a0()*0.560793);
}

double NNfunction_sb_sLuR::synapse0x30b4300() {
   return (neuron0x30b7070()*-1.21575);
}

double NNfunction_sb_sLuR::synapse0x30b4c90() {
   return (neuron0x30b7a40()*-2.30621);
}

double NNfunction_sb_sLuR::synapse0x30b4cd0() {
   return (neuron0x30b8410()*2.9324);
}

double NNfunction_sb_sLuR::synapse0x30b5660() {
   return (neuron0x30b8de0()*1.26694);
}

double NNfunction_sb_sLuR::synapse0x30b56a0() {
   return (neuron0x30b97b0()*-1.91768);
}

double NNfunction_sb_sLuR::synapse0x30c7b80() {
   return (neuron0x30ba180()*1.04399);
}

double NNfunction_sb_sLuR::synapse0x30c7bc0() {
   return (neuron0x30bab50()*1.16757);
}

double NNfunction_sb_sLuR::synapse0x30c8550() {
   return (neuron0x30b0be0()*-1.58012);
}

double NNfunction_sb_sLuR::synapse0x30c8590() {
   return (neuron0x30bd730()*1.48508);
}

double NNfunction_sb_sLuR::synapse0x30c8f20() {
   return (neuron0x30be100()*3.35321);
}

double NNfunction_sb_sLuR::synapse0x30c8f60() {
   return (neuron0x30bead0()*0.63203);
}

double NNfunction_sb_sLuR::synapse0x30c98f0() {
   return (neuron0x30bf4a0()*0.92867);
}

double NNfunction_sb_sLuR::synapse0x30c9930() {
   return (neuron0x30bfe70()*-3.05751);
}

double NNfunction_sb_sLuR::synapse0x30a57e0() {
   return (neuron0x30c0840()*1.4157);
}

double NNfunction_sb_sLuR::synapse0x30a5820() {
   return (neuron0x30c1210()*-1.47703);
}

double NNfunction_sb_sLuR::synapse0x30b9090() {
   return (neuron0x30c1be0()*-1.11761);
}

double NNfunction_sb_sLuR::synapse0x30b90d0() {
   return (neuron0x30c27c0()*-0.508734);
}

double NNfunction_sb_sLuR::synapse0x30ca010() {
   return (neuron0x30c3190()*-1.30104);
}

double NNfunction_sb_sLuR::synapse0x30ca050() {
   return (neuron0x30b4010()*0.894428);
}

double NNfunction_sb_sLuR::synapse0x30ca090() {
   return (neuron0x30b49e0()*1.59131);
}

double NNfunction_sb_sLuR::synapse0x30ca0d0() {
   return (neuron0x30b53b0()*0.66944);
}

double NNfunction_sb_sLuR::synapse0x30d0f80() {
   return (neuron0x30c79f0()*1.25687);
}

double NNfunction_sb_sLuR::synapse0x30d0fc0() {
   return (neuron0x30c82a0()*-0.36654);
}

double NNfunction_sb_sLuR::synapse0x30d1000() {
   return (neuron0x30c8c70()*-0.504484);
}

double NNfunction_sb_sLuR::synapse0x30d1040() {
   return (neuron0x30c9640()*-0.121604);
}

double NNfunction_sb_sLuR::synapse0x30d13c0() {
   return (neuron0x30a55c0()*-0.0751759);
}

double NNfunction_sb_sLuR::synapse0x30d1400() {
   return (neuron0x30a5ed0()*0.505321);
}

double NNfunction_sb_sLuR::synapse0x30d1440() {
   return (neuron0x30a69b0()*2.47396);
}

double NNfunction_sb_sLuR::synapse0x30d1480() {
   return (neuron0x2e60240()*0.0798938);
}

double NNfunction_sb_sLuR::synapse0x30d14c0() {
   return (neuron0x30a77d0()*-0.544011);
}

double NNfunction_sb_sLuR::synapse0x30d1500() {
   return (neuron0x30a81a0()*-0.634318);
}

double NNfunction_sb_sLuR::synapse0x30d1540() {
   return (neuron0x30a8f70()*-0.0207537);
}

double NNfunction_sb_sLuR::synapse0x30d1580() {
   return (neuron0x30a9940()*0.0300689);
}

double NNfunction_sb_sLuR::synapse0x30d15c0() {
   return (neuron0x30aa310()*0.284919);
}

double NNfunction_sb_sLuR::synapse0x30d1600() {
   return (neuron0x30aadf0()*0.00680497);
}

double NNfunction_sb_sLuR::synapse0x30d1640() {
   return (neuron0x30ab7c0()*0.386066);
}

double NNfunction_sb_sLuR::synapse0x30d1680() {
   return (neuron0x30a88a0()*0.0264974);
}

double NNfunction_sb_sLuR::synapse0x30d16c0() {
   return (neuron0x30ad370()*0.0519933);
}

double NNfunction_sb_sLuR::synapse0x30d1700() {
   return (neuron0x30add40()*0.0281441);
}

double NNfunction_sb_sLuR::synapse0x30d1740() {
   return (neuron0x30ae710()*-3.07066);
}

double NNfunction_sb_sLuR::synapse0x30d1780() {
   return (neuron0x30af0e0()*0.854801);
}

double NNfunction_sb_sLuR::synapse0x30d1210() {
   return (neuron0x30b0ef0()*-0.0451624);
}

double NNfunction_sb_sLuR::synapse0x30d1250() {
   return (neuron0x30b11d0()*-0.879109);
}

double NNfunction_sb_sLuR::synapse0x30d18d0() {
   return (neuron0x30b1ba0()*0.0356698);
}

double NNfunction_sb_sLuR::synapse0x30d1910() {
   return (neuron0x30b2570()*0.00794054);
}

double NNfunction_sb_sLuR::synapse0x30d1950() {
   return (neuron0x30b2f40()*0.700144);
}

double NNfunction_sb_sLuR::synapse0x30d1990() {
   return (neuron0x30b3910()*-0.0213693);
}

double NNfunction_sb_sLuR::synapse0x30d19d0() {
   return (neuron0x30ac460()*-0.680942);
}

double NNfunction_sb_sLuR::synapse0x30d1a10() {
   return (neuron0x30ace30()*4.64575);
}

double NNfunction_sb_sLuR::synapse0x30d1a50() {
   return (neuron0x30b66a0()*-0.0552546);
}

double NNfunction_sb_sLuR::synapse0x30d1a90() {
   return (neuron0x30b7070()*0.0683099);
}

double NNfunction_sb_sLuR::synapse0x30d1ad0() {
   return (neuron0x30b7a40()*0.270981);
}

double NNfunction_sb_sLuR::synapse0x30d1b10() {
   return (neuron0x30b8410()*0.0289828);
}

double NNfunction_sb_sLuR::synapse0x30d1b50() {
   return (neuron0x30b8de0()*-0.0446847);
}

double NNfunction_sb_sLuR::synapse0x30d1b90() {
   return (neuron0x30b97b0()*-2.62868);
}

double NNfunction_sb_sLuR::synapse0x30d1bd0() {
   return (neuron0x30ba180()*-0.352838);
}

double NNfunction_sb_sLuR::synapse0x30d1c10() {
   return (neuron0x30bab50()*-0.0270663);
}

double NNfunction_sb_sLuR::synapse0x30d17c0() {
   return (neuron0x30b0be0()*0.591851);
}

double NNfunction_sb_sLuR::synapse0x30d1800() {
   return (neuron0x30bd730()*-0.953924);
}

double NNfunction_sb_sLuR::synapse0x30d1840() {
   return (neuron0x30be100()*-0.143506);
}

double NNfunction_sb_sLuR::synapse0x30d1880() {
   return (neuron0x30bead0()*-0.040758);
}

double NNfunction_sb_sLuR::synapse0x30d1e60() {
   return (neuron0x30bf4a0()*-4.05467);
}

double NNfunction_sb_sLuR::synapse0x30d1ea0() {
   return (neuron0x30bfe70()*1.00801);
}

double NNfunction_sb_sLuR::synapse0x30d1ee0() {
   return (neuron0x30c0840()*0.0290275);
}

double NNfunction_sb_sLuR::synapse0x30d1f20() {
   return (neuron0x30c1210()*0.0267484);
}

double NNfunction_sb_sLuR::synapse0x30d1f60() {
   return (neuron0x30c1be0()*-0.0412621);
}

double NNfunction_sb_sLuR::synapse0x30d1fa0() {
   return (neuron0x30c27c0()*0.489377);
}

double NNfunction_sb_sLuR::synapse0x30d1fe0() {
   return (neuron0x30c3190()*0.0378261);
}

double NNfunction_sb_sLuR::synapse0x30d2020() {
   return (neuron0x30b4010()*-0.0273411);
}

double NNfunction_sb_sLuR::synapse0x30d2060() {
   return (neuron0x30b49e0()*-0.00314729);
}

double NNfunction_sb_sLuR::synapse0x30d20a0() {
   return (neuron0x30b53b0()*-2.6477);
}

double NNfunction_sb_sLuR::synapse0x30d20e0() {
   return (neuron0x30c79f0()*0.00282667);
}

double NNfunction_sb_sLuR::synapse0x30d2120() {
   return (neuron0x30c82a0()*-0.0182814);
}

double NNfunction_sb_sLuR::synapse0x30d2160() {
   return (neuron0x30c8c70()*0.0762324);
}

double NNfunction_sb_sLuR::synapse0x30d21a0() {
   return (neuron0x30c9640()*-0.476217);
}

double NNfunction_sb_sLuR::synapse0x30d2520() {
   return (neuron0x30a55c0()*-0.0122441);
}

double NNfunction_sb_sLuR::synapse0x30d2560() {
   return (neuron0x30a5ed0()*-1.29491);
}

double NNfunction_sb_sLuR::synapse0x30d25a0() {
   return (neuron0x30a69b0()*-1.21176);
}

double NNfunction_sb_sLuR::synapse0x30d25e0() {
   return (neuron0x2e60240()*0.0477643);
}

double NNfunction_sb_sLuR::synapse0x30d2620() {
   return (neuron0x30a77d0()*0.456333);
}

double NNfunction_sb_sLuR::synapse0x30d2660() {
   return (neuron0x30a81a0()*0.0776101);
}

double NNfunction_sb_sLuR::synapse0x30d26a0() {
   return (neuron0x30a8f70()*-0.0402508);
}

double NNfunction_sb_sLuR::synapse0x30d26e0() {
   return (neuron0x30a9940()*0.0236576);
}

double NNfunction_sb_sLuR::synapse0x30d2720() {
   return (neuron0x30aa310()*-0.141701);
}

double NNfunction_sb_sLuR::synapse0x30d2760() {
   return (neuron0x30aadf0()*-0.0616568);
}

double NNfunction_sb_sLuR::synapse0x30d27a0() {
   return (neuron0x30ab7c0()*-0.202136);
}

double NNfunction_sb_sLuR::synapse0x30d27e0() {
   return (neuron0x30a88a0()*0.0696);
}

double NNfunction_sb_sLuR::synapse0x30d2820() {
   return (neuron0x30ad370()*-0.0316734);
}

double NNfunction_sb_sLuR::synapse0x30d2860() {
   return (neuron0x30add40()*-0.0303635);
}

double NNfunction_sb_sLuR::synapse0x30d28a0() {
   return (neuron0x30ae710()*0.485437);
}

double NNfunction_sb_sLuR::synapse0x30d28e0() {
   return (neuron0x30af0e0()*-0.25437);
}

double NNfunction_sb_sLuR::synapse0x30d2370() {
   return (neuron0x30b0ef0()*-0.0720537);
}

double NNfunction_sb_sLuR::synapse0x30d23b0() {
   return (neuron0x30b11d0()*0.233704);
}

double NNfunction_sb_sLuR::synapse0x30d2a30() {
   return (neuron0x30b1ba0()*0.0538491);
}

double NNfunction_sb_sLuR::synapse0x30d2a70() {
   return (neuron0x30b2570()*-0.055242);
}

double NNfunction_sb_sLuR::synapse0x30d2ab0() {
   return (neuron0x30b2f40()*-0.715091);
}

double NNfunction_sb_sLuR::synapse0x30d2af0() {
   return (neuron0x30b3910()*-0.0256086);
}

double NNfunction_sb_sLuR::synapse0x30d2b30() {
   return (neuron0x30ac460()*-1.06189);
}

double NNfunction_sb_sLuR::synapse0x30d2b70() {
   return (neuron0x30ace30()*1.51194);
}

double NNfunction_sb_sLuR::synapse0x30d2bb0() {
   return (neuron0x30b66a0()*-0.0717806);
}

double NNfunction_sb_sLuR::synapse0x30d2bf0() {
   return (neuron0x30b7070()*0.0538501);
}

double NNfunction_sb_sLuR::synapse0x30d2c30() {
   return (neuron0x30b7a40()*-0.993122);
}

double NNfunction_sb_sLuR::synapse0x30d2c70() {
   return (neuron0x30b8410()*-0.0797344);
}

double NNfunction_sb_sLuR::synapse0x30d2cb0() {
   return (neuron0x30b8de0()*-0.0123998);
}

double NNfunction_sb_sLuR::synapse0x30d2cf0() {
   return (neuron0x30b97b0()*1.77293);
}

double NNfunction_sb_sLuR::synapse0x30d2d30() {
   return (neuron0x30ba180()*-0.500541);
}

double NNfunction_sb_sLuR::synapse0x30d2d70() {
   return (neuron0x30bab50()*0.00217975);
}

double NNfunction_sb_sLuR::synapse0x30d2920() {
   return (neuron0x30b0be0()*0.243443);
}

double NNfunction_sb_sLuR::synapse0x30d2960() {
   return (neuron0x30bd730()*-0.273399);
}

double NNfunction_sb_sLuR::synapse0x30d29a0() {
   return (neuron0x30be100()*0.0243379);
}

double NNfunction_sb_sLuR::synapse0x30d29e0() {
   return (neuron0x30bead0()*0.0346441);
}

double NNfunction_sb_sLuR::synapse0x30d2fc0() {
   return (neuron0x30bf4a0()*-1.06286);
}

double NNfunction_sb_sLuR::synapse0x30d3000() {
   return (neuron0x30bfe70()*1.01018);
}

double NNfunction_sb_sLuR::synapse0x30d3040() {
   return (neuron0x30c0840()*-0.0505014);
}

double NNfunction_sb_sLuR::synapse0x30d3080() {
   return (neuron0x30c1210()*-0.009001);
}

double NNfunction_sb_sLuR::synapse0x30d30c0() {
   return (neuron0x30c1be0()*-0.0308545);
}

double NNfunction_sb_sLuR::synapse0x30d3100() {
   return (neuron0x30c27c0()*-0.461283);
}

double NNfunction_sb_sLuR::synapse0x30d3140() {
   return (neuron0x30c3190()*0.0280546);
}

double NNfunction_sb_sLuR::synapse0x30d3180() {
   return (neuron0x30b4010()*-0.0445177);
}

double NNfunction_sb_sLuR::synapse0x30d31c0() {
   return (neuron0x30b49e0()*-0.0310252);
}

double NNfunction_sb_sLuR::synapse0x30d3200() {
   return (neuron0x30b53b0()*0.805457);
}

double NNfunction_sb_sLuR::synapse0x30d3240() {
   return (neuron0x30c79f0()*-0.03476);
}

double NNfunction_sb_sLuR::synapse0x30d3280() {
   return (neuron0x30c82a0()*-0.093454);
}

double NNfunction_sb_sLuR::synapse0x30d32c0() {
   return (neuron0x30c8c70()*-0.0422681);
}

double NNfunction_sb_sLuR::synapse0x30d3300() {
   return (neuron0x30c9640()*0.20655);
}

double NNfunction_sb_sLuR::synapse0x30d3680() {
   return (neuron0x30a55c0()*0.914721);
}

double NNfunction_sb_sLuR::synapse0x30d36c0() {
   return (neuron0x30a5ed0()*-1.02346);
}

double NNfunction_sb_sLuR::synapse0x30d3700() {
   return (neuron0x30a69b0()*-0.000166274);
}

double NNfunction_sb_sLuR::synapse0x30d3740() {
   return (neuron0x2e60240()*-0.990775);
}

double NNfunction_sb_sLuR::synapse0x30d3780() {
   return (neuron0x30a77d0()*-0.211956);
}

double NNfunction_sb_sLuR::synapse0x30d37c0() {
   return (neuron0x30a81a0()*0.0568012);
}

double NNfunction_sb_sLuR::synapse0x30d3800() {
   return (neuron0x30a8f70()*0.709245);
}

double NNfunction_sb_sLuR::synapse0x30d3840() {
   return (neuron0x30a9940()*-0.569844);
}

double NNfunction_sb_sLuR::synapse0x30d3880() {
   return (neuron0x30aa310()*-0.236441);
}

double NNfunction_sb_sLuR::synapse0x30d38c0() {
   return (neuron0x30aadf0()*0.415908);
}

double NNfunction_sb_sLuR::synapse0x30d3900() {
   return (neuron0x30ab7c0()*-0.98262);
}

double NNfunction_sb_sLuR::synapse0x30d3940() {
   return (neuron0x30a88a0()*-0.714696);
}

double NNfunction_sb_sLuR::synapse0x30d3980() {
   return (neuron0x30ad370()*0.0900622);
}

double NNfunction_sb_sLuR::synapse0x30d39c0() {
   return (neuron0x30add40()*-0.084641);
}

double NNfunction_sb_sLuR::synapse0x30d3a00() {
   return (neuron0x30ae710()*-0.743526);
}

double NNfunction_sb_sLuR::synapse0x30d3a40() {
   return (neuron0x30af0e0()*0.968284);
}

double NNfunction_sb_sLuR::synapse0x30d34d0() {
   return (neuron0x30b0ef0()*0.808961);
}

double NNfunction_sb_sLuR::synapse0x30d3510() {
   return (neuron0x30b11d0()*0.309313);
}

double NNfunction_sb_sLuR::synapse0x30d3b90() {
   return (neuron0x30b1ba0()*-0.12437);
}

double NNfunction_sb_sLuR::synapse0x30d3bd0() {
   return (neuron0x30b2570()*0.150526);
}

double NNfunction_sb_sLuR::synapse0x30d3c10() {
   return (neuron0x30b2f40()*-0.299623);
}

double NNfunction_sb_sLuR::synapse0x30d3c50() {
   return (neuron0x30b3910()*0.554846);
}

double NNfunction_sb_sLuR::synapse0x30d3c90() {
   return (neuron0x30ac460()*-0.608334);
}

double NNfunction_sb_sLuR::synapse0x30d3cd0() {
   return (neuron0x30ace30()*0.145375);
}

double NNfunction_sb_sLuR::synapse0x30d3d10() {
   return (neuron0x30b66a0()*0.68656);
}

double NNfunction_sb_sLuR::synapse0x30d3d50() {
   return (neuron0x30b7070()*-0.377074);
}

double NNfunction_sb_sLuR::synapse0x30d3d90() {
   return (neuron0x30b7a40()*0.637625);
}

double NNfunction_sb_sLuR::synapse0x30d3dd0() {
   return (neuron0x30b8410()*0.245709);
}

double NNfunction_sb_sLuR::synapse0x30d3e10() {
   return (neuron0x30b8de0()*0.492998);
}

double NNfunction_sb_sLuR::synapse0x30d3e50() {
   return (neuron0x30b97b0()*-8.51581);
}

double NNfunction_sb_sLuR::synapse0x30d3e90() {
   return (neuron0x30ba180()*0.78648);
}

double NNfunction_sb_sLuR::synapse0x30d3ed0() {
   return (neuron0x30bab50()*0.0722493);
}

double NNfunction_sb_sLuR::synapse0x30d3a80() {
   return (neuron0x30b0be0()*0.542235);
}

double NNfunction_sb_sLuR::synapse0x30d3ac0() {
   return (neuron0x30bd730()*1.72182);
}

double NNfunction_sb_sLuR::synapse0x30d3b00() {
   return (neuron0x30be100()*0.586032);
}

double NNfunction_sb_sLuR::synapse0x30d3b40() {
   return (neuron0x30bead0()*0.312104);
}

double NNfunction_sb_sLuR::synapse0x30d4120() {
   return (neuron0x30bf4a0()*0.712858);
}

double NNfunction_sb_sLuR::synapse0x30d4160() {
   return (neuron0x30bfe70()*0.568176);
}

double NNfunction_sb_sLuR::synapse0x30d41a0() {
   return (neuron0x30c0840()*-0.0248517);
}

double NNfunction_sb_sLuR::synapse0x30d41e0() {
   return (neuron0x30c1210()*-0.219592);
}

double NNfunction_sb_sLuR::synapse0x30d4220() {
   return (neuron0x30c1be0()*0.505761);
}

double NNfunction_sb_sLuR::synapse0x30d4260() {
   return (neuron0x30c27c0()*-1.11797);
}

double NNfunction_sb_sLuR::synapse0x30d42a0() {
   return (neuron0x30c3190()*-0.607307);
}

double NNfunction_sb_sLuR::synapse0x30d42e0() {
   return (neuron0x30b4010()*0.603296);
}

double NNfunction_sb_sLuR::synapse0x30d4320() {
   return (neuron0x30b49e0()*0.450955);
}

double NNfunction_sb_sLuR::synapse0x30d4360() {
   return (neuron0x30b53b0()*1.67915);
}

double NNfunction_sb_sLuR::synapse0x30d43a0() {
   return (neuron0x30c79f0()*0.0577092);
}

double NNfunction_sb_sLuR::synapse0x30d43e0() {
   return (neuron0x30c82a0()*0.9452);
}

double NNfunction_sb_sLuR::synapse0x30d4420() {
   return (neuron0x30c8c70()*-0.312772);
}

double NNfunction_sb_sLuR::synapse0x30d4460() {
   return (neuron0x30c9640()*1.16425);
}

double NNfunction_sb_sLuR::synapse0x30a5580() {
   return (neuron0x30d0840()*-4.34002);
}

double NNfunction_sb_sLuR::synapse0x30d46c0() {
   return (neuron0x30d0be0()*-4.67952);
}

double NNfunction_sb_sLuR::synapse0x30d4700() {
   return (neuron0x30d1080()*9.73318);
}

double NNfunction_sb_sLuR::synapse0x30d4740() {
   return (neuron0x30d21e0()*-4.55495);
}

double NNfunction_sb_sLuR::synapse0x30d4780() {
   return (neuron0x30d3340()*-3.44178);
}

