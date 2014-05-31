#include "NNfunction_sb_sLsL.h"
#include <cmath>

double NNfunction_sb_sLsL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5915)/15.3489;
   input1 = (in1 - 3.68734)/1156.8;
   input2 = (in2 - 668.051)/626.438;
   input3 = (in3 - -55.6646)/824.737;
   input4 = (in4 - 1060.3)/954.479;
   input5 = (in5 - 895.267)/946.27;
   input6 = (in6 - 901.271)/948.684;
   input7 = (in7 - 930.739)/938.611;
   input8 = (in8 - 929.072)/974.419;
   input9 = (in9 - 901.611)/956.559;
   input10 = (in10 - 991.235)/956.442;
   input11 = (in11 - 724.536)/872.741;
   input12 = (in12 - 316.386)/282.856;
   input13 = (in13 - 505.141)/523.394;
   input14 = (in14 - 723.55)/821.441;
   input15 = (in15 - 717.736)/818.241;
   input16 = (in16 - 536.237)/562.697;
   input17 = (in17 - 769.428)/907.805;
   input18 = (in18 - 758.451)/910.192;
   input19 = (in19 - 807.702)/884.361;
   input20 = (in20 - -4.33344)/485.485;
   input21 = (in21 - 1.29821)/1153.52;
   input22 = (in22 - 0.881792)/1202.16;
   input23 = (in23 - -200.624)/605.896;
   switch(index) {
     case 0:
         return neuron0x14164a0();
     default:
         return 0.;
   }
}

double NNfunction_sb_sLsL::Value(int index, double* input) {
   input0 = (input[0] - 23.5915)/15.3489;
   input1 = (input[1] - 3.68734)/1156.8;
   input2 = (input[2] - 668.051)/626.438;
   input3 = (input[3] - -55.6646)/824.737;
   input4 = (input[4] - 1060.3)/954.479;
   input5 = (input[5] - 895.267)/946.27;
   input6 = (input[6] - 901.271)/948.684;
   input7 = (input[7] - 930.739)/938.611;
   input8 = (input[8] - 929.072)/974.419;
   input9 = (input[9] - 901.611)/956.559;
   input10 = (input[10] - 991.235)/956.442;
   input11 = (input[11] - 724.536)/872.741;
   input12 = (input[12] - 316.386)/282.856;
   input13 = (input[13] - 505.141)/523.394;
   input14 = (input[14] - 723.55)/821.441;
   input15 = (input[15] - 717.736)/818.241;
   input16 = (input[16] - 536.237)/562.697;
   input17 = (input[17] - 769.428)/907.805;
   input18 = (input[18] - 758.451)/910.192;
   input19 = (input[19] - 807.702)/884.361;
   input20 = (input[20] - -4.33344)/485.485;
   input21 = (input[21] - 1.29821)/1153.52;
   input22 = (input[22] - 0.881792)/1202.16;
   input23 = (input[23] - -200.624)/605.896;
   switch(index) {
     case 0:
         return neuron0x14164a0();
     default:
         return 0.;
   }
}

double NNfunction_sb_sLsL::neuron0x13e2560() {
   return input0;
}

double NNfunction_sb_sLsL::neuron0x13e28a0() {
   return input1;
}

double NNfunction_sb_sLsL::neuron0x13e2be0() {
   return input2;
}

double NNfunction_sb_sLsL::neuron0x13e2f20() {
   return input3;
}

double NNfunction_sb_sLsL::neuron0x13e3260() {
   return input4;
}

double NNfunction_sb_sLsL::neuron0x13e35a0() {
   return input5;
}

double NNfunction_sb_sLsL::neuron0x13e38e0() {
   return input6;
}

double NNfunction_sb_sLsL::neuron0x13e3c20() {
   return input7;
}

double NNfunction_sb_sLsL::neuron0x13e3f60() {
   return input8;
}

double NNfunction_sb_sLsL::neuron0x13e42a0() {
   return input9;
}

double NNfunction_sb_sLsL::neuron0x13e45e0() {
   return input10;
}

double NNfunction_sb_sLsL::neuron0x13e4920() {
   return input11;
}

double NNfunction_sb_sLsL::neuron0x13e4c60() {
   return input12;
}

double NNfunction_sb_sLsL::neuron0x13e4fa0() {
   return input13;
}

double NNfunction_sb_sLsL::neuron0x13e52e0() {
   return input14;
}

double NNfunction_sb_sLsL::neuron0x13e5620() {
   return input15;
}

double NNfunction_sb_sLsL::neuron0x13e5960() {
   return input16;
}

double NNfunction_sb_sLsL::neuron0x13e5ec0() {
   return input17;
}

double NNfunction_sb_sLsL::neuron0x13e60e0() {
   return input18;
}

double NNfunction_sb_sLsL::neuron0x13e6420() {
   return input19;
}

double NNfunction_sb_sLsL::neuron0x13e6760() {
   return input20;
}

double NNfunction_sb_sLsL::neuron0x13e6aa0() {
   return input21;
}

double NNfunction_sb_sLsL::neuron0x13e6de0() {
   return input22;
}

double NNfunction_sb_sLsL::neuron0x13e7120() {
   return input23;
}

double NNfunction_sb_sLsL::input0x13e75c0() {
   double input = 0.535616;
   input += synapse0x11a23d0();
   input += synapse0x13e2420();
   input += synapse0x13e2460();
   input += synapse0x13e7870();
   input += synapse0x13e78b0();
   input += synapse0x13e78f0();
   input += synapse0x13e7930();
   input += synapse0x13e7970();
   input += synapse0x13e79b0();
   input += synapse0x13e79f0();
   input += synapse0x13e7a30();
   input += synapse0x13e7a70();
   input += synapse0x13e7ab0();
   input += synapse0x13e7af0();
   input += synapse0x13e7b30();
   input += synapse0x13e7b70();
   input += synapse0x13e2390();
   input += synapse0x13e23d0();
   input += synapse0x1193c70();
   input += synapse0x1193cb0();
   input += synapse0x13e7dd0();
   input += synapse0x13e7e10();
   input += synapse0x13e7e50();
   input += synapse0x13e7e90();
   return input;
}

double NNfunction_sb_sLsL::neuron0x13e75c0() {
   double input = input0x13e75c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x13e7ed0() {
   double input = -6.48867;
   input += synapse0x13e8210();
   input += synapse0x13e8250();
   input += synapse0x13e8290();
   input += synapse0x13e82d0();
   input += synapse0x13e8310();
   input += synapse0x13e8350();
   input += synapse0x13e8390();
   input += synapse0x13e83d0();
   input += synapse0x13e8410();
   input += synapse0x13e7cc0();
   input += synapse0x13e7d00();
   input += synapse0x13e7d40();
   input += synapse0x13e7d80();
   input += synapse0x13e8660();
   input += synapse0x13e86a0();
   input += synapse0x13e86e0();
   input += synapse0x13e8060();
   input += synapse0x13e80a0();
   input += synapse0x13e8830();
   input += synapse0x13e8870();
   input += synapse0x13e88b0();
   input += synapse0x13e88f0();
   input += synapse0x13e8930();
   input += synapse0x13e8970();
   return input;
}

double NNfunction_sb_sLsL::neuron0x13e7ed0() {
   double input = input0x13e7ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x13e89b0() {
   double input = -0.15323;
   input += synapse0x13e8cf0();
   input += synapse0x13e8d30();
   input += synapse0x13e8d70();
   input += synapse0x13e8db0();
   input += synapse0x13e8df0();
   input += synapse0x13e8e30();
   input += synapse0x13e8e70();
   input += synapse0x13e8eb0();
   input += synapse0x13e8ef0();
   input += synapse0x13e8f30();
   input += synapse0x13e8f70();
   input += synapse0x13e8fb0();
   input += synapse0x13e8ff0();
   input += synapse0x13e9030();
   input += synapse0x13e9070();
   input += synapse0x13e90b0();
   input += synapse0x13e8b40();
   input += synapse0x13e8b80();
   input += synapse0x11a1ac0();
   input += synapse0x11a1b00();
   input += synapse0x13d15f0();
   input += synapse0x13d1630();
   input += synapse0x13d1670();
   input += synapse0x13e24a0();
   return input;
}

double NNfunction_sb_sLsL::neuron0x13e89b0() {
   double input = input0x13e89b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x11a2240() {
   double input = 2.34805;
   input += synapse0x13e8600();
   input += synapse0x13e24e0();
   input += synapse0x13e2520();
   input += synapse0x13e9200();
   input += synapse0x13e9240();
   input += synapse0x13e9280();
   input += synapse0x13e92c0();
   input += synapse0x13e9300();
   input += synapse0x13e9340();
   input += synapse0x13e9380();
   input += synapse0x13e93c0();
   input += synapse0x13e9400();
   input += synapse0x13e9440();
   input += synapse0x13e9480();
   input += synapse0x13e94c0();
   input += synapse0x13e9500();
   input += synapse0x13e8450();
   input += synapse0x13e8490();
   input += synapse0x13e9650();
   input += synapse0x13e9690();
   input += synapse0x13e96d0();
   input += synapse0x13e9710();
   input += synapse0x13e9750();
   input += synapse0x13e9790();
   return input;
}

double NNfunction_sb_sLsL::neuron0x11a2240() {
   double input = input0x11a2240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x13e97d0() {
   double input = 0.00870407;
   input += synapse0x13e9b10();
   input += synapse0x13e9b50();
   input += synapse0x13e9b90();
   input += synapse0x13e9bd0();
   input += synapse0x13e9c10();
   input += synapse0x13e9c50();
   input += synapse0x13e9c90();
   input += synapse0x13e9cd0();
   input += synapse0x13e9d10();
   input += synapse0x13e9d50();
   input += synapse0x13e9d90();
   input += synapse0x13e9dd0();
   input += synapse0x13e9e10();
   input += synapse0x13e9e50();
   input += synapse0x13e9e90();
   input += synapse0x13e9ed0();
   input += synapse0x13e9960();
   input += synapse0x13e99a0();
   input += synapse0x13ea020();
   input += synapse0x13ea060();
   input += synapse0x13ea0a0();
   input += synapse0x13ea0e0();
   input += synapse0x13ea120();
   input += synapse0x13ea160();
   return input;
}

double NNfunction_sb_sLsL::neuron0x13e97d0() {
   double input = input0x13e97d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x13ea1a0() {
   double input = -0.475011;
   input += synapse0x13ea4e0();
   input += synapse0x13ea520();
   input += synapse0x13ea560();
   input += synapse0x13ea5a0();
   input += synapse0x13ea5e0();
   input += synapse0x13ea620();
   input += synapse0x13ea660();
   input += synapse0x13ea6a0();
   input += synapse0x13ea6e0();
   input += synapse0x11a1e30();
   input += synapse0x11a1e70();
   input += synapse0x11a1eb0();
   input += synapse0x11a1ef0();
   input += synapse0x11a1f30();
   input += synapse0x11a1f70();
   input += synapse0x11a1fb0();
   input += synapse0x13ea330();
   input += synapse0x13ea370();
   input += synapse0x11a2100();
   input += synapse0x11a2140();
   input += synapse0x11a2180();
   input += synapse0x11a21c0();
   input += synapse0x11a2200();
   input += synapse0x13eaf30();
   return input;
}

double NNfunction_sb_sLsL::neuron0x13ea1a0() {
   double input = input0x13ea1a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x13eaf70() {
   double input = -0.6089;
   input += synapse0x13eb2b0();
   input += synapse0x13eb2f0();
   input += synapse0x13eb330();
   input += synapse0x13eb370();
   input += synapse0x13eb3b0();
   input += synapse0x13eb3f0();
   input += synapse0x13eb430();
   input += synapse0x13eb470();
   input += synapse0x13eb4b0();
   input += synapse0x13eb4f0();
   input += synapse0x13eb530();
   input += synapse0x13eb570();
   input += synapse0x13eb5b0();
   input += synapse0x13eb5f0();
   input += synapse0x13eb630();
   input += synapse0x13eb670();
   input += synapse0x13eb100();
   input += synapse0x13eb140();
   input += synapse0x13eb7c0();
   input += synapse0x13eb800();
   input += synapse0x13eb840();
   input += synapse0x13eb880();
   input += synapse0x13eb8c0();
   input += synapse0x13eb900();
   return input;
}

double NNfunction_sb_sLsL::neuron0x13eaf70() {
   double input = input0x13eaf70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x13eb940() {
   double input = 0.721276;
   input += synapse0x13ebc80();
   input += synapse0x13ebcc0();
   input += synapse0x13ebd00();
   input += synapse0x13ebd40();
   input += synapse0x13ebd80();
   input += synapse0x13ebdc0();
   input += synapse0x13ebe00();
   input += synapse0x13ebe40();
   input += synapse0x13ebe80();
   input += synapse0x13ebec0();
   input += synapse0x13ebf00();
   input += synapse0x13ebf40();
   input += synapse0x13ebf80();
   input += synapse0x13ebfc0();
   input += synapse0x13ec000();
   input += synapse0x13ec040();
   input += synapse0x13ebad0();
   input += synapse0x13ebb10();
   input += synapse0x13ec190();
   input += synapse0x13ec1d0();
   input += synapse0x13ec210();
   input += synapse0x13ec250();
   input += synapse0x13ec290();
   input += synapse0x13ec2d0();
   return input;
}

double NNfunction_sb_sLsL::neuron0x13eb940() {
   double input = input0x13eb940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x13ec310() {
   double input = -0.47997;
   input += synapse0x13e5db0();
   input += synapse0x13e5df0();
   input += synapse0x13e5e30();
   input += synapse0x13e5e70();
   input += synapse0x13ec860();
   input += synapse0x13ec8a0();
   input += synapse0x13ec8e0();
   input += synapse0x13ec920();
   input += synapse0x13ec960();
   input += synapse0x13ec9a0();
   input += synapse0x13ec9e0();
   input += synapse0x13eca20();
   input += synapse0x13eca60();
   input += synapse0x13ecaa0();
   input += synapse0x13ecae0();
   input += synapse0x13ecb20();
   input += synapse0x13ec4a0();
   input += synapse0x13ec4e0();
   input += synapse0x13ecc70();
   input += synapse0x13eccb0();
   input += synapse0x13eccf0();
   input += synapse0x13ecd30();
   input += synapse0x13ecd70();
   input += synapse0x13ecdb0();
   return input;
}

double NNfunction_sb_sLsL::neuron0x13ec310() {
   double input = input0x13ec310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x13ecdf0() {
   double input = 0.30247;
   input += synapse0x13ed130();
   input += synapse0x13ed170();
   input += synapse0x13ed1b0();
   input += synapse0x13ed1f0();
   input += synapse0x13ed230();
   input += synapse0x13ed270();
   input += synapse0x13ed2b0();
   input += synapse0x13ed2f0();
   input += synapse0x13ed330();
   input += synapse0x13ed370();
   input += synapse0x13ed3b0();
   input += synapse0x13ed3f0();
   input += synapse0x13ed430();
   input += synapse0x13ed470();
   input += synapse0x13ed4b0();
   input += synapse0x13ed4f0();
   input += synapse0x13ecf80();
   input += synapse0x13ecfc0();
   input += synapse0x13ed640();
   input += synapse0x13ed680();
   input += synapse0x13ed6c0();
   input += synapse0x13ed700();
   input += synapse0x13ed740();
   input += synapse0x13ed780();
   return input;
}

double NNfunction_sb_sLsL::neuron0x13ecdf0() {
   double input = input0x13ecdf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x13ed7c0() {
   double input = 2.92503;
   input += synapse0x13edb00();
   input += synapse0x13edb40();
   input += synapse0x13edb80();
   input += synapse0x13edbc0();
   input += synapse0x13edc00();
   input += synapse0x13edc40();
   input += synapse0x13edc80();
   input += synapse0x13edcc0();
   input += synapse0x13edd00();
   input += synapse0x13edd40();
   input += synapse0x13edd80();
   input += synapse0x13eddc0();
   input += synapse0x13ede00();
   input += synapse0x13ede40();
   input += synapse0x13ede80();
   input += synapse0x13edec0();
   input += synapse0x13ed950();
   input += synapse0x13ed990();
   input += synapse0x13ea720();
   input += synapse0x13ea760();
   input += synapse0x13ea7a0();
   input += synapse0x13ea7e0();
   input += synapse0x13ea820();
   input += synapse0x13ea860();
   return input;
}

double NNfunction_sb_sLsL::neuron0x13ed7c0() {
   double input = input0x13ed7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x13ea8a0() {
   double input = 0.331623;
   input += synapse0x13eabe0();
   input += synapse0x13eac20();
   input += synapse0x13eac60();
   input += synapse0x13eaca0();
   input += synapse0x13eace0();
   input += synapse0x13ead20();
   input += synapse0x13ead60();
   input += synapse0x13eada0();
   input += synapse0x13eade0();
   input += synapse0x13eae20();
   input += synapse0x13eae60();
   input += synapse0x13eaea0();
   input += synapse0x13eaee0();
   input += synapse0x13ef020();
   input += synapse0x13ef060();
   input += synapse0x13ef0a0();
   input += synapse0x13eaa30();
   input += synapse0x13eaa70();
   input += synapse0x13ef1f0();
   input += synapse0x13ef230();
   input += synapse0x13ef270();
   input += synapse0x13ef2b0();
   input += synapse0x13ef2f0();
   input += synapse0x13ef330();
   return input;
}

double NNfunction_sb_sLsL::neuron0x13ea8a0() {
   double input = input0x13ea8a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x13ef370() {
   double input = -0.468878;
   input += synapse0x13ef6b0();
   input += synapse0x13ef6f0();
   input += synapse0x13ef730();
   input += synapse0x13ef770();
   input += synapse0x13ef7b0();
   input += synapse0x13ef7f0();
   input += synapse0x13ef830();
   input += synapse0x13ef870();
   input += synapse0x13ef8b0();
   input += synapse0x13ef8f0();
   input += synapse0x13ef930();
   input += synapse0x13ef970();
   input += synapse0x13ef9b0();
   input += synapse0x13ef9f0();
   input += synapse0x13efa30();
   input += synapse0x13efa70();
   input += synapse0x13ef500();
   input += synapse0x13ef540();
   input += synapse0x13efbc0();
   input += synapse0x13efc00();
   input += synapse0x13efc40();
   input += synapse0x13efc80();
   input += synapse0x13efcc0();
   input += synapse0x13efd00();
   return input;
}

double NNfunction_sb_sLsL::neuron0x13ef370() {
   double input = input0x13ef370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x13efd40() {
   double input = -0.138349;
   input += synapse0x13f0080();
   input += synapse0x13f00c0();
   input += synapse0x13f0100();
   input += synapse0x13f0140();
   input += synapse0x13f0180();
   input += synapse0x13f01c0();
   input += synapse0x13f0200();
   input += synapse0x13f0240();
   input += synapse0x13f0280();
   input += synapse0x13f02c0();
   input += synapse0x13f0300();
   input += synapse0x13f0340();
   input += synapse0x13f0380();
   input += synapse0x13f03c0();
   input += synapse0x13f0400();
   input += synapse0x13f0440();
   input += synapse0x13efed0();
   input += synapse0x13eff10();
   input += synapse0x13f0590();
   input += synapse0x13f05d0();
   input += synapse0x13f0610();
   input += synapse0x13f0650();
   input += synapse0x13f0690();
   input += synapse0x13f06d0();
   return input;
}

double NNfunction_sb_sLsL::neuron0x13efd40() {
   double input = input0x13efd40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x13f0710() {
   double input = -0.195309;
   input += synapse0x13f0a50();
   input += synapse0x13f0a90();
   input += synapse0x13f0ad0();
   input += synapse0x13f0b10();
   input += synapse0x13f0b50();
   input += synapse0x13f0b90();
   input += synapse0x13f0bd0();
   input += synapse0x13f0c10();
   input += synapse0x13f0c50();
   input += synapse0x13f0c90();
   input += synapse0x13f0cd0();
   input += synapse0x13f0d10();
   input += synapse0x13f0d50();
   input += synapse0x13f0d90();
   input += synapse0x13f0dd0();
   input += synapse0x13f0e10();
   input += synapse0x13f08a0();
   input += synapse0x13f08e0();
   input += synapse0x13f0f60();
   input += synapse0x13f0fa0();
   input += synapse0x13f0fe0();
   input += synapse0x13f1020();
   input += synapse0x13f1060();
   input += synapse0x13f10a0();
   return input;
}

double NNfunction_sb_sLsL::neuron0x13f0710() {
   double input = input0x13f0710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x13f10e0() {
   double input = 0.121088;
   input += synapse0x13f1420();
   input += synapse0x13e2780();
   input += synapse0x13e27c0();
   input += synapse0x13e2ac0();
   input += synapse0x13e2b00();
   input += synapse0x13e2e00();
   input += synapse0x13e2e40();
   input += synapse0x13e3140();
   input += synapse0x13e3180();
   input += synapse0x13e3480();
   input += synapse0x13e34c0();
   input += synapse0x13e37c0();
   input += synapse0x13e3800();
   input += synapse0x13e3b00();
   input += synapse0x13e3b40();
   input += synapse0x13e3e40();
   input += synapse0x13e3e80();
   input += synapse0x13e4180();
   input += synapse0x13e41c0();
   input += synapse0x13e44c0();
   input += synapse0x13e4500();
   input += synapse0x13e4800();
   input += synapse0x13e4840();
   input += synapse0x13e4b40();
   return input;
}

double NNfunction_sb_sLsL::neuron0x13f10e0() {
   double input = input0x13f10e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x13f2ef0() {
   double input = 1.78826;
   input += synapse0x13e4b80();
   input += synapse0x13e5840();
   input += synapse0x13e5880();
   input += synapse0x13f1270();
   input += synapse0x13f12b0();
   input += synapse0x13e5b80();
   input += synapse0x13e5bc0();
   input += synapse0x1193b50();
   input += synapse0x1193b90();
   input += synapse0x13e6300();
   input += synapse0x13e6340();
   input += synapse0x13e6640();
   input += synapse0x13e6680();
   input += synapse0x13e6980();
   input += synapse0x13e69c0();
   input += synapse0x13e6cc0();
   input += synapse0x13e6d00();
   input += synapse0x13e7000();
   input += synapse0x13e7040();
   input += synapse0x13e7340();
   input += synapse0x13e7380();
   input += synapse0x13e4e80();
   input += synapse0x13e4ec0();
   input += synapse0x13f3190();
   return input;
}

double NNfunction_sb_sLsL::neuron0x13f2ef0() {
   double input = input0x13f2ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x13f31d0() {
   double input = -0.344101;
   input += synapse0x13f3510();
   input += synapse0x13f3550();
   input += synapse0x13f3590();
   input += synapse0x13f35d0();
   input += synapse0x13f3610();
   input += synapse0x13f3650();
   input += synapse0x13f3690();
   input += synapse0x13f36d0();
   input += synapse0x13f3710();
   input += synapse0x13f3750();
   input += synapse0x13f3790();
   input += synapse0x13f37d0();
   input += synapse0x13f3810();
   input += synapse0x13f3850();
   input += synapse0x13f3890();
   input += synapse0x13f38d0();
   input += synapse0x13f3360();
   input += synapse0x13f33a0();
   input += synapse0x13f3a20();
   input += synapse0x13f3a60();
   input += synapse0x13f3aa0();
   input += synapse0x13f3ae0();
   input += synapse0x13f3b20();
   input += synapse0x13f3b60();
   return input;
}

double NNfunction_sb_sLsL::neuron0x13f31d0() {
   double input = input0x13f31d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x13f3ba0() {
   double input = 0.701024;
   input += synapse0x13f3ee0();
   input += synapse0x13f3f20();
   input += synapse0x13f3f60();
   input += synapse0x13f3fa0();
   input += synapse0x13f3fe0();
   input += synapse0x13f4020();
   input += synapse0x13f4060();
   input += synapse0x13f40a0();
   input += synapse0x13f40e0();
   input += synapse0x13f4120();
   input += synapse0x13f4160();
   input += synapse0x13f41a0();
   input += synapse0x13f41e0();
   input += synapse0x13f4220();
   input += synapse0x13f4260();
   input += synapse0x13f42a0();
   input += synapse0x13f3d30();
   input += synapse0x13f3d70();
   input += synapse0x13f43f0();
   input += synapse0x13f4430();
   input += synapse0x13f4470();
   input += synapse0x13f44b0();
   input += synapse0x13f44f0();
   input += synapse0x13f4530();
   return input;
}

double NNfunction_sb_sLsL::neuron0x13f3ba0() {
   double input = input0x13f3ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x13f4570() {
   double input = 0.206488;
   input += synapse0x13f48b0();
   input += synapse0x13f48f0();
   input += synapse0x13f4930();
   input += synapse0x13f4970();
   input += synapse0x13f49b0();
   input += synapse0x13f49f0();
   input += synapse0x13f4a30();
   input += synapse0x13f4a70();
   input += synapse0x13f4ab0();
   input += synapse0x13f4af0();
   input += synapse0x13f4b30();
   input += synapse0x13f4b70();
   input += synapse0x13f4bb0();
   input += synapse0x13f4bf0();
   input += synapse0x13f4c30();
   input += synapse0x13f4c70();
   input += synapse0x13f4700();
   input += synapse0x13f4740();
   input += synapse0x13f4dc0();
   input += synapse0x13f4e00();
   input += synapse0x13f4e40();
   input += synapse0x13f4e80();
   input += synapse0x13f4ec0();
   input += synapse0x13f4f00();
   return input;
}

double NNfunction_sb_sLsL::neuron0x13f4570() {
   double input = input0x13f4570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x13f4f40() {
   double input = -4.0009;
   input += synapse0x13f5280();
   input += synapse0x13f52c0();
   input += synapse0x13f5300();
   input += synapse0x13f5340();
   input += synapse0x13f5380();
   input += synapse0x13f53c0();
   input += synapse0x13f5400();
   input += synapse0x13f5440();
   input += synapse0x13f5480();
   input += synapse0x13f54c0();
   input += synapse0x13f5500();
   input += synapse0x13f5540();
   input += synapse0x13f5580();
   input += synapse0x13f55c0();
   input += synapse0x13f5600();
   input += synapse0x13f5640();
   input += synapse0x13f50d0();
   input += synapse0x13f5110();
   input += synapse0x13f5790();
   input += synapse0x13f57d0();
   input += synapse0x13f5810();
   input += synapse0x13f5850();
   input += synapse0x13f5890();
   input += synapse0x13f58d0();
   return input;
}

double NNfunction_sb_sLsL::neuron0x13f4f40() {
   double input = input0x13f4f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x13f5910() {
   double input = 0.167774;
   input += synapse0x13f5c50();
   input += synapse0x13f5c90();
   input += synapse0x13f5cd0();
   input += synapse0x13f5d10();
   input += synapse0x13f5d50();
   input += synapse0x13f5d90();
   input += synapse0x13f5dd0();
   input += synapse0x13f5e10();
   input += synapse0x13f5e50();
   input += synapse0x13ee010();
   input += synapse0x13ee050();
   input += synapse0x13ee090();
   input += synapse0x13ee0d0();
   input += synapse0x13ee110();
   input += synapse0x13ee150();
   input += synapse0x13ee190();
   input += synapse0x13f5aa0();
   input += synapse0x13f5ae0();
   input += synapse0x13ee2e0();
   input += synapse0x13ee320();
   input += synapse0x13ee360();
   input += synapse0x13ee3a0();
   input += synapse0x13ee3e0();
   input += synapse0x13ee420();
   return input;
}

double NNfunction_sb_sLsL::neuron0x13f5910() {
   double input = input0x13f5910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x13ee460() {
   double input = 0.287219;
   input += synapse0x13ee7a0();
   input += synapse0x13ee7e0();
   input += synapse0x13ee820();
   input += synapse0x13ee860();
   input += synapse0x13ee8a0();
   input += synapse0x13ee8e0();
   input += synapse0x13ee920();
   input += synapse0x13ee960();
   input += synapse0x13ee9a0();
   input += synapse0x13ee9e0();
   input += synapse0x13eea20();
   input += synapse0x13eea60();
   input += synapse0x13eeaa0();
   input += synapse0x13eeae0();
   input += synapse0x13eeb20();
   input += synapse0x13eeb60();
   input += synapse0x13ee5f0();
   input += synapse0x13ee630();
   input += synapse0x13eecb0();
   input += synapse0x13eecf0();
   input += synapse0x13eed30();
   input += synapse0x13eed70();
   input += synapse0x13eedb0();
   input += synapse0x13eedf0();
   return input;
}

double NNfunction_sb_sLsL::neuron0x13ee460() {
   double input = input0x13ee460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x13eee30() {
   double input = 0.8042;
   input += synapse0x13eefc0();
   input += synapse0x13f8050();
   input += synapse0x13f8090();
   input += synapse0x13f80d0();
   input += synapse0x13f8110();
   input += synapse0x13f8150();
   input += synapse0x13f8190();
   input += synapse0x13f81d0();
   input += synapse0x13f8210();
   input += synapse0x13f8250();
   input += synapse0x13f8290();
   input += synapse0x13f82d0();
   input += synapse0x13f8310();
   input += synapse0x13f8350();
   input += synapse0x13f8390();
   input += synapse0x13f83d0();
   input += synapse0x13f7ea0();
   input += synapse0x13f7ee0();
   input += synapse0x13f8520();
   input += synapse0x13f8560();
   input += synapse0x13f85a0();
   input += synapse0x13f85e0();
   input += synapse0x13f8620();
   input += synapse0x13f8660();
   return input;
}

double NNfunction_sb_sLsL::neuron0x13eee30() {
   double input = input0x13eee30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x13f86a0() {
   double input = -0.418138;
   input += synapse0x13f89e0();
   input += synapse0x13f8a20();
   input += synapse0x13f8a60();
   input += synapse0x13f8aa0();
   input += synapse0x13f8ae0();
   input += synapse0x13f8b20();
   input += synapse0x13f8b60();
   input += synapse0x13f8ba0();
   input += synapse0x13f8be0();
   input += synapse0x13f8c20();
   input += synapse0x13f8c60();
   input += synapse0x13f8ca0();
   input += synapse0x13f8ce0();
   input += synapse0x13f8d20();
   input += synapse0x13f8d60();
   input += synapse0x13f8da0();
   input += synapse0x13f8830();
   input += synapse0x13f8870();
   input += synapse0x13f8ef0();
   input += synapse0x13f8f30();
   input += synapse0x13f8f70();
   input += synapse0x13f8fb0();
   input += synapse0x13f8ff0();
   input += synapse0x13f9030();
   return input;
}

double NNfunction_sb_sLsL::neuron0x13f86a0() {
   double input = input0x13f86a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x13f9070() {
   double input = 0.292039;
   input += synapse0x13f93b0();
   input += synapse0x13f93f0();
   input += synapse0x13f9430();
   input += synapse0x13f9470();
   input += synapse0x13f94b0();
   input += synapse0x13f94f0();
   input += synapse0x13f9530();
   input += synapse0x13f9570();
   input += synapse0x13f95b0();
   input += synapse0x13f95f0();
   input += synapse0x13f9630();
   input += synapse0x13f9670();
   input += synapse0x13f96b0();
   input += synapse0x13f96f0();
   input += synapse0x13f9730();
   input += synapse0x13f9770();
   input += synapse0x13f9200();
   input += synapse0x13f9240();
   input += synapse0x13f98c0();
   input += synapse0x13f9900();
   input += synapse0x13f9940();
   input += synapse0x13f9980();
   input += synapse0x13f99c0();
   input += synapse0x13f9a00();
   return input;
}

double NNfunction_sb_sLsL::neuron0x13f9070() {
   double input = input0x13f9070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x13f9a40() {
   double input = 0.560642;
   input += synapse0x13f9d80();
   input += synapse0x13f9dc0();
   input += synapse0x13f9e00();
   input += synapse0x13f9e40();
   input += synapse0x13f9e80();
   input += synapse0x13f9ec0();
   input += synapse0x13f9f00();
   input += synapse0x13f9f40();
   input += synapse0x13f9f80();
   input += synapse0x13f9fc0();
   input += synapse0x13fa000();
   input += synapse0x13fa040();
   input += synapse0x13fa080();
   input += synapse0x13fa0c0();
   input += synapse0x13fa100();
   input += synapse0x13fa140();
   input += synapse0x13f9bd0();
   input += synapse0x13f9c10();
   input += synapse0x13fa290();
   input += synapse0x13fa2d0();
   input += synapse0x13fa310();
   input += synapse0x13fa350();
   input += synapse0x13fa390();
   input += synapse0x13fa3d0();
   return input;
}

double NNfunction_sb_sLsL::neuron0x13f9a40() {
   double input = input0x13f9a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x13fa410() {
   double input = -0.292572;
   input += synapse0x13fa750();
   input += synapse0x13fa790();
   input += synapse0x13fa7d0();
   input += synapse0x13fa810();
   input += synapse0x13fa850();
   input += synapse0x13fa890();
   input += synapse0x13fa8d0();
   input += synapse0x13fa910();
   input += synapse0x13fa950();
   input += synapse0x13fa990();
   input += synapse0x13fa9d0();
   input += synapse0x13faa10();
   input += synapse0x13faa50();
   input += synapse0x13faa90();
   input += synapse0x13faad0();
   input += synapse0x13fab10();
   input += synapse0x13fa5a0();
   input += synapse0x13fa5e0();
   input += synapse0x13fac60();
   input += synapse0x13faca0();
   input += synapse0x13face0();
   input += synapse0x13fad20();
   input += synapse0x13fad60();
   input += synapse0x13fada0();
   return input;
}

double NNfunction_sb_sLsL::neuron0x13fa410() {
   double input = input0x13fa410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x13fade0() {
   double input = -1.66529;
   input += synapse0x13fb120();
   input += synapse0x13fb160();
   input += synapse0x13fb1a0();
   input += synapse0x13fb1e0();
   input += synapse0x13fb220();
   input += synapse0x13fb260();
   input += synapse0x13fb2a0();
   input += synapse0x13fb2e0();
   input += synapse0x13fb320();
   input += synapse0x13fb360();
   input += synapse0x13fb3a0();
   input += synapse0x13fb3e0();
   input += synapse0x13fb420();
   input += synapse0x13fb460();
   input += synapse0x13fb4a0();
   input += synapse0x13fb4e0();
   input += synapse0x13faf70();
   input += synapse0x13fafb0();
   input += synapse0x13fb630();
   input += synapse0x13fb670();
   input += synapse0x13fb6b0();
   input += synapse0x13fb6f0();
   input += synapse0x13fb730();
   input += synapse0x13fb770();
   return input;
}

double NNfunction_sb_sLsL::neuron0x13fade0() {
   double input = input0x13fade0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x13fb7b0() {
   double input = -0.919371;
   input += synapse0x13fbaf0();
   input += synapse0x13fbb30();
   input += synapse0x13fbb70();
   input += synapse0x13fbbb0();
   input += synapse0x13fbbf0();
   input += synapse0x13fbc30();
   input += synapse0x13fbc70();
   input += synapse0x13fbcb0();
   input += synapse0x13fbcf0();
   input += synapse0x13fbd30();
   input += synapse0x13fbd70();
   input += synapse0x13fbdb0();
   input += synapse0x13fbdf0();
   input += synapse0x13fbe30();
   input += synapse0x13fbe70();
   input += synapse0x13fbeb0();
   input += synapse0x13fb940();
   input += synapse0x13fb980();
   input += synapse0x13fc000();
   input += synapse0x13fc040();
   input += synapse0x13fc080();
   input += synapse0x13fc0c0();
   input += synapse0x13fc100();
   input += synapse0x13fc140();
   return input;
}

double NNfunction_sb_sLsL::neuron0x13fb7b0() {
   double input = input0x13fb7b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x13fc180() {
   double input = 0.589064;
   input += synapse0x13fc4c0();
   input += synapse0x13fc500();
   input += synapse0x13fc540();
   input += synapse0x13fc580();
   input += synapse0x13fc5c0();
   input += synapse0x13fc600();
   input += synapse0x13fc640();
   input += synapse0x13fc680();
   input += synapse0x13fc6c0();
   input += synapse0x13fc700();
   input += synapse0x13fc740();
   input += synapse0x13fc780();
   input += synapse0x13fc7c0();
   input += synapse0x13fc800();
   input += synapse0x13fc840();
   input += synapse0x13fc880();
   input += synapse0x13fc310();
   input += synapse0x13fc350();
   input += synapse0x13fc9d0();
   input += synapse0x13fca10();
   input += synapse0x13fca50();
   input += synapse0x13fca90();
   input += synapse0x13fcad0();
   input += synapse0x13fcb10();
   return input;
}

double NNfunction_sb_sLsL::neuron0x13fc180() {
   double input = input0x13fc180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x13fcb50() {
   double input = -0.968749;
   input += synapse0x13fce90();
   input += synapse0x13f1460();
   input += synapse0x13f14a0();
   input += synapse0x13f14e0();
   input += synapse0x13f1730();
   input += synapse0x13f1770();
   input += synapse0x13f17b0();
   input += synapse0x13f1a00();
   input += synapse0x13f1a40();
   input += synapse0x13f1c90();
   input += synapse0x13f1cd0();
   input += synapse0x13f1d10();
   input += synapse0x13f1f60();
   input += synapse0x13f1fa0();
   input += synapse0x13f21f0();
   input += synapse0x13f2230();
   input += synapse0x13fcce0();
   input += synapse0x13fcd20();
   input += synapse0x13f2380();
   input += synapse0x13f2890();
   input += synapse0x13f28d0();
   input += synapse0x13f2910();
   input += synapse0x13f2b60();
   input += synapse0x13f2ba0();
   return input;
}

double NNfunction_sb_sLsL::neuron0x13fcb50() {
   double input = input0x13fcb50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x13f2be0() {
   double input = 2.40075;
   input += synapse0x13f2450();
   input += synapse0x13f2490();
   input += synapse0x13f24d0();
   input += synapse0x13f2510();
   input += synapse0x13f2e90();
   input += synapse0x13ff1e0();
   input += synapse0x13ff220();
   input += synapse0x13ff260();
   input += synapse0x13ff2a0();
   input += synapse0x13ff2e0();
   input += synapse0x13ff320();
   input += synapse0x13ff360();
   input += synapse0x13ff3a0();
   input += synapse0x13ff3e0();
   input += synapse0x13ff420();
   input += synapse0x13ff460();
   input += synapse0x13f2d70();
   input += synapse0x13f2db0();
   input += synapse0x13ff5b0();
   input += synapse0x13ff5f0();
   input += synapse0x13ff630();
   input += synapse0x13ff670();
   input += synapse0x13ff6b0();
   input += synapse0x13ff6f0();
   return input;
}

double NNfunction_sb_sLsL::neuron0x13f2be0() {
   double input = input0x13f2be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x13ff730() {
   double input = -0.190534;
   input += synapse0x13ffa70();
   input += synapse0x13ffab0();
   input += synapse0x13ffaf0();
   input += synapse0x13ffb30();
   input += synapse0x13ffb70();
   input += synapse0x13ffbb0();
   input += synapse0x13ffbf0();
   input += synapse0x13ffc30();
   input += synapse0x13ffc70();
   input += synapse0x13ffcb0();
   input += synapse0x13ffcf0();
   input += synapse0x13ffd30();
   input += synapse0x13ffd70();
   input += synapse0x13ffdb0();
   input += synapse0x13ffdf0();
   input += synapse0x13ffe30();
   input += synapse0x13ff8c0();
   input += synapse0x13ff900();
   input += synapse0x13fff80();
   input += synapse0x13fffc0();
   input += synapse0x1400000();
   input += synapse0x1400040();
   input += synapse0x1400080();
   input += synapse0x14000c0();
   return input;
}

double NNfunction_sb_sLsL::neuron0x13ff730() {
   double input = input0x13ff730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1400100() {
   double input = -0.419072;
   input += synapse0x1400440();
   input += synapse0x1400480();
   input += synapse0x14004c0();
   input += synapse0x1400500();
   input += synapse0x1400540();
   input += synapse0x1400580();
   input += synapse0x14005c0();
   input += synapse0x1400600();
   input += synapse0x1400640();
   input += synapse0x1400680();
   input += synapse0x14006c0();
   input += synapse0x1400700();
   input += synapse0x1400740();
   input += synapse0x1400780();
   input += synapse0x14007c0();
   input += synapse0x1400800();
   input += synapse0x1400290();
   input += synapse0x14002d0();
   input += synapse0x1400950();
   input += synapse0x1400990();
   input += synapse0x14009d0();
   input += synapse0x1400a10();
   input += synapse0x1400a50();
   input += synapse0x1400a90();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1400100() {
   double input = input0x1400100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1400ad0() {
   double input = 0.126533;
   input += synapse0x1400e10();
   input += synapse0x1400e50();
   input += synapse0x1400e90();
   input += synapse0x1400ed0();
   input += synapse0x1400f10();
   input += synapse0x1400f50();
   input += synapse0x1400f90();
   input += synapse0x1400fd0();
   input += synapse0x1401010();
   input += synapse0x1401050();
   input += synapse0x1401090();
   input += synapse0x14010d0();
   input += synapse0x1401110();
   input += synapse0x1401150();
   input += synapse0x1401190();
   input += synapse0x14011d0();
   input += synapse0x1400c60();
   input += synapse0x1400ca0();
   input += synapse0x1401320();
   input += synapse0x1401360();
   input += synapse0x14013a0();
   input += synapse0x14013e0();
   input += synapse0x1401420();
   input += synapse0x1401460();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1400ad0() {
   double input = input0x1400ad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x14014a0() {
   double input = 0.778988;
   input += synapse0x14017e0();
   input += synapse0x1401820();
   input += synapse0x1401860();
   input += synapse0x14018a0();
   input += synapse0x14018e0();
   input += synapse0x1401920();
   input += synapse0x1401960();
   input += synapse0x14019a0();
   input += synapse0x14019e0();
   input += synapse0x1401a20();
   input += synapse0x1401a60();
   input += synapse0x1401aa0();
   input += synapse0x1401ae0();
   input += synapse0x1401b20();
   input += synapse0x1401b60();
   input += synapse0x1401ba0();
   input += synapse0x1401630();
   input += synapse0x1401670();
   input += synapse0x1401cf0();
   input += synapse0x1401d30();
   input += synapse0x1401d70();
   input += synapse0x1401db0();
   input += synapse0x1401df0();
   input += synapse0x1401e30();
   return input;
}

double NNfunction_sb_sLsL::neuron0x14014a0() {
   double input = input0x14014a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1401e70() {
   double input = 0.328308;
   input += synapse0x14021b0();
   input += synapse0x14021f0();
   input += synapse0x1402230();
   input += synapse0x1402270();
   input += synapse0x14022b0();
   input += synapse0x14022f0();
   input += synapse0x1402330();
   input += synapse0x1402370();
   input += synapse0x14023b0();
   input += synapse0x14023f0();
   input += synapse0x1402430();
   input += synapse0x1402470();
   input += synapse0x14024b0();
   input += synapse0x14024f0();
   input += synapse0x1402530();
   input += synapse0x1402570();
   input += synapse0x1402000();
   input += synapse0x1402040();
   input += synapse0x14026c0();
   input += synapse0x1402700();
   input += synapse0x1402740();
   input += synapse0x1402780();
   input += synapse0x14027c0();
   input += synapse0x1402800();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1401e70() {
   double input = input0x1401e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1402840() {
   double input = -0.781776;
   input += synapse0x1402b80();
   input += synapse0x1402bc0();
   input += synapse0x1402c00();
   input += synapse0x1402c40();
   input += synapse0x1402c80();
   input += synapse0x1402cc0();
   input += synapse0x1402d00();
   input += synapse0x1402d40();
   input += synapse0x1402d80();
   input += synapse0x1402dc0();
   input += synapse0x1402e00();
   input += synapse0x1402e40();
   input += synapse0x1402e80();
   input += synapse0x1402ec0();
   input += synapse0x1402f00();
   input += synapse0x1402f40();
   input += synapse0x14029d0();
   input += synapse0x1402a10();
   input += synapse0x1403090();
   input += synapse0x14030d0();
   input += synapse0x1403110();
   input += synapse0x1403150();
   input += synapse0x1403190();
   input += synapse0x14031d0();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1402840() {
   double input = input0x1402840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1403210() {
   double input = -4.72821;
   input += synapse0x1403550();
   input += synapse0x1403590();
   input += synapse0x14035d0();
   input += synapse0x1403610();
   input += synapse0x1403650();
   input += synapse0x1403690();
   input += synapse0x14036d0();
   input += synapse0x1403710();
   input += synapse0x1403750();
   input += synapse0x1403790();
   input += synapse0x14037d0();
   input += synapse0x1403810();
   input += synapse0x1403850();
   input += synapse0x1403890();
   input += synapse0x14038d0();
   input += synapse0x1403910();
   input += synapse0x14033a0();
   input += synapse0x14033e0();
   input += synapse0x1403a60();
   input += synapse0x1403aa0();
   input += synapse0x1403ae0();
   input += synapse0x1403b20();
   input += synapse0x1403b60();
   input += synapse0x1403ba0();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1403210() {
   double input = input0x1403210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1403be0() {
   double input = 0.467297;
   input += synapse0x13ec650();
   input += synapse0x13ec690();
   input += synapse0x13ec6d0();
   input += synapse0x13ec710();
   input += synapse0x13ec750();
   input += synapse0x13ec790();
   input += synapse0x13ec7d0();
   input += synapse0x13ec810();
   input += synapse0x1404330();
   input += synapse0x1404370();
   input += synapse0x14043b0();
   input += synapse0x14043f0();
   input += synapse0x1404430();
   input += synapse0x1404470();
   input += synapse0x14044b0();
   input += synapse0x14044f0();
   input += synapse0x1403d70();
   input += synapse0x1403db0();
   input += synapse0x1404640();
   input += synapse0x1404680();
   input += synapse0x14046c0();
   input += synapse0x1404700();
   input += synapse0x1404740();
   input += synapse0x1404780();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1403be0() {
   double input = input0x1403be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x14047c0() {
   double input = 0.576195;
   input += synapse0x1404b00();
   input += synapse0x1404b40();
   input += synapse0x1404b80();
   input += synapse0x1404bc0();
   input += synapse0x1404c00();
   input += synapse0x1404c40();
   input += synapse0x1404c80();
   input += synapse0x1404cc0();
   input += synapse0x1404d00();
   input += synapse0x1404d40();
   input += synapse0x1404d80();
   input += synapse0x1404dc0();
   input += synapse0x1404e00();
   input += synapse0x1404e40();
   input += synapse0x1404e80();
   input += synapse0x1404ec0();
   input += synapse0x1404950();
   input += synapse0x1404990();
   input += synapse0x1405010();
   input += synapse0x1405050();
   input += synapse0x1405090();
   input += synapse0x14050d0();
   input += synapse0x1405110();
   input += synapse0x1405150();
   return input;
}

double NNfunction_sb_sLsL::neuron0x14047c0() {
   double input = input0x14047c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1405190() {
   double input = -1.30612;
   input += synapse0x14054d0();
   input += synapse0x1405510();
   input += synapse0x1405550();
   input += synapse0x1405590();
   input += synapse0x14055d0();
   input += synapse0x1405610();
   input += synapse0x1405650();
   input += synapse0x1405690();
   input += synapse0x14056d0();
   input += synapse0x1405710();
   input += synapse0x1405750();
   input += synapse0x1405790();
   input += synapse0x14057d0();
   input += synapse0x1405810();
   input += synapse0x1405850();
   input += synapse0x1405890();
   input += synapse0x1405320();
   input += synapse0x1405360();
   input += synapse0x13f5e90();
   input += synapse0x13f5ed0();
   input += synapse0x13f5f10();
   input += synapse0x13f5f50();
   input += synapse0x13f5f90();
   input += synapse0x13f5fd0();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1405190() {
   double input = input0x1405190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x13f6010() {
   double input = 0.0536023;
   input += synapse0x13f6350();
   input += synapse0x13f6390();
   input += synapse0x13f63d0();
   input += synapse0x13f6410();
   input += synapse0x13f6450();
   input += synapse0x13f6490();
   input += synapse0x13f64d0();
   input += synapse0x13f6510();
   input += synapse0x13f6550();
   input += synapse0x13f6590();
   input += synapse0x13f65d0();
   input += synapse0x13f6610();
   input += synapse0x13f6650();
   input += synapse0x13f6690();
   input += synapse0x13f66d0();
   input += synapse0x13f6710();
   input += synapse0x13f61a0();
   input += synapse0x13f61e0();
   input += synapse0x13f6860();
   input += synapse0x13f68a0();
   input += synapse0x13f68e0();
   input += synapse0x13f6920();
   input += synapse0x13f6960();
   input += synapse0x13f69a0();
   return input;
}

double NNfunction_sb_sLsL::neuron0x13f6010() {
   double input = input0x13f6010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x13f69e0() {
   double input = 1.55303;
   input += synapse0x13f6d20();
   input += synapse0x13f6d60();
   input += synapse0x13f6da0();
   input += synapse0x13f6de0();
   input += synapse0x13f6e20();
   input += synapse0x13f6e60();
   input += synapse0x13f6ea0();
   input += synapse0x13f6ee0();
   input += synapse0x13f6f20();
   input += synapse0x13f6f60();
   input += synapse0x13f6fa0();
   input += synapse0x13f6fe0();
   input += synapse0x13f7020();
   input += synapse0x13f7060();
   input += synapse0x13f70a0();
   input += synapse0x13f70e0();
   input += synapse0x13f6b70();
   input += synapse0x13f6bb0();
   input += synapse0x13f7230();
   input += synapse0x13f7270();
   input += synapse0x13f72b0();
   input += synapse0x13f72f0();
   input += synapse0x13f7330();
   input += synapse0x13f7370();
   return input;
}

double NNfunction_sb_sLsL::neuron0x13f69e0() {
   double input = input0x13f69e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x13f73b0() {
   double input = 1.14226;
   input += synapse0x13f76f0();
   input += synapse0x13f7730();
   input += synapse0x13f7770();
   input += synapse0x13f77b0();
   input += synapse0x13f77f0();
   input += synapse0x13f7830();
   input += synapse0x13f7870();
   input += synapse0x13f78b0();
   input += synapse0x13f78f0();
   input += synapse0x13f7930();
   input += synapse0x13f7970();
   input += synapse0x13f79b0();
   input += synapse0x13f79f0();
   input += synapse0x13f7a30();
   input += synapse0x13f7a70();
   input += synapse0x13f7ab0();
   input += synapse0x13f7540();
   input += synapse0x13f7580();
   input += synapse0x13f7c00();
   input += synapse0x13f7c40();
   input += synapse0x13f7c80();
   input += synapse0x13f7cc0();
   input += synapse0x13f7d00();
   input += synapse0x13f7d40();
   return input;
}

double NNfunction_sb_sLsL::neuron0x13f73b0() {
   double input = input0x13f73b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x14099f0() {
   double input = 0.664439;
   input += synapse0x1409c10();
   input += synapse0x1409c50();
   input += synapse0x1409c90();
   input += synapse0x1409cd0();
   input += synapse0x1409d10();
   input += synapse0x1409d50();
   input += synapse0x1409d90();
   input += synapse0x1409dd0();
   input += synapse0x1409e10();
   input += synapse0x1409e50();
   input += synapse0x1409e90();
   input += synapse0x1409ed0();
   input += synapse0x1409f10();
   input += synapse0x1409f50();
   input += synapse0x1409f90();
   input += synapse0x1409fd0();
   input += synapse0x13f7d80();
   input += synapse0x13f7dc0();
   input += synapse0x140a120();
   input += synapse0x140a160();
   input += synapse0x140a1a0();
   input += synapse0x140a1e0();
   input += synapse0x140a220();
   input += synapse0x140a260();
   return input;
}

double NNfunction_sb_sLsL::neuron0x14099f0() {
   double input = input0x14099f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x140a2a0() {
   double input = 1.01813;
   input += synapse0x140a5e0();
   input += synapse0x140a620();
   input += synapse0x140a660();
   input += synapse0x140a6a0();
   input += synapse0x140a6e0();
   input += synapse0x140a720();
   input += synapse0x140a760();
   input += synapse0x140a7a0();
   input += synapse0x140a7e0();
   input += synapse0x140a820();
   input += synapse0x140a860();
   input += synapse0x140a8a0();
   input += synapse0x140a8e0();
   input += synapse0x140a920();
   input += synapse0x140a960();
   input += synapse0x140a9a0();
   input += synapse0x140a430();
   input += synapse0x140a470();
   input += synapse0x140aaf0();
   input += synapse0x140ab30();
   input += synapse0x140ab70();
   input += synapse0x140abb0();
   input += synapse0x140abf0();
   input += synapse0x140ac30();
   return input;
}

double NNfunction_sb_sLsL::neuron0x140a2a0() {
   double input = input0x140a2a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x140ac70() {
   double input = -1.62383;
   input += synapse0x140afb0();
   input += synapse0x140aff0();
   input += synapse0x140b030();
   input += synapse0x140b070();
   input += synapse0x140b0b0();
   input += synapse0x140b0f0();
   input += synapse0x140b130();
   input += synapse0x140b170();
   input += synapse0x140b1b0();
   input += synapse0x140b1f0();
   input += synapse0x140b230();
   input += synapse0x140b270();
   input += synapse0x140b2b0();
   input += synapse0x140b2f0();
   input += synapse0x140b330();
   input += synapse0x140b370();
   input += synapse0x140ae00();
   input += synapse0x140ae40();
   input += synapse0x140b4c0();
   input += synapse0x140b500();
   input += synapse0x140b540();
   input += synapse0x140b580();
   input += synapse0x140b5c0();
   input += synapse0x140b600();
   return input;
}

double NNfunction_sb_sLsL::neuron0x140ac70() {
   double input = input0x140ac70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x140b640() {
   double input = 0.476989;
   input += synapse0x140b980();
   input += synapse0x140b9c0();
   input += synapse0x140ba00();
   input += synapse0x140ba40();
   input += synapse0x140ba80();
   input += synapse0x140bac0();
   input += synapse0x140bb00();
   input += synapse0x140bb40();
   input += synapse0x140bb80();
   input += synapse0x140bbc0();
   input += synapse0x140bc00();
   input += synapse0x140bc40();
   input += synapse0x140bc80();
   input += synapse0x140bcc0();
   input += synapse0x140bd00();
   input += synapse0x140bd40();
   input += synapse0x140b7d0();
   input += synapse0x140b810();
   input += synapse0x140be90();
   input += synapse0x140bed0();
   input += synapse0x140bf10();
   input += synapse0x140bf50();
   input += synapse0x140bf90();
   input += synapse0x140bfd0();
   return input;
}

double NNfunction_sb_sLsL::neuron0x140b640() {
   double input = input0x140b640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1412840() {
   double input = 0.196623;
   input += synapse0x13e8570();
   input += synapse0x13e85b0();
   input += synapse0x13e9a80();
   input += synapse0x13e9ac0();
   input += synapse0x13ea450();
   input += synapse0x13ea490();
   input += synapse0x13eb220();
   input += synapse0x13eb260();
   input += synapse0x13ebbf0();
   input += synapse0x13ebc30();
   input += synapse0x13ec5c0();
   input += synapse0x13ec600();
   input += synapse0x13ed0a0();
   input += synapse0x13ed0e0();
   input += synapse0x13eda70();
   input += synapse0x13edab0();
   input += synapse0x13eab50();
   input += synapse0x13eab90();
   input += synapse0x13ef620();
   input += synapse0x13ef660();
   input += synapse0x13efff0();
   input += synapse0x13f0030();
   input += synapse0x13f09c0();
   input += synapse0x13f0a00();
   input += synapse0x13f1390();
   input += synapse0x13f13d0();
   input += synapse0x13e5500();
   input += synapse0x13e5540();
   input += synapse0x13f3480();
   input += synapse0x13f34c0();
   input += synapse0x13f3e50();
   input += synapse0x13f3e90();
   input += synapse0x13f4820();
   input += synapse0x13f4860();
   input += synapse0x13f51f0();
   input += synapse0x13f5230();
   input += synapse0x13f5bc0();
   input += synapse0x13f5c00();
   input += synapse0x13ee710();
   input += synapse0x13ee750();
   input += synapse0x13f7fc0();
   input += synapse0x13f8000();
   input += synapse0x13f8950();
   input += synapse0x13f8990();
   input += synapse0x13f9320();
   input += synapse0x13f9360();
   input += synapse0x13f9cf0();
   input += synapse0x13f9d30();
   input += synapse0x13fa6c0();
   input += synapse0x13fa700();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1412840() {
   double input = input0x1412840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1412be0() {
   double input = -0.0163712;
   input += synapse0x13fce00();
   input += synapse0x13fce40();
   input += synapse0x13f23c0();
   input += synapse0x13f2400();
   input += synapse0x13ff9e0();
   input += synapse0x13ffa20();
   input += synapse0x14003b0();
   input += synapse0x14003f0();
   input += synapse0x1400d80();
   input += synapse0x1400dc0();
   input += synapse0x1401750();
   input += synapse0x1401790();
   input += synapse0x1402120();
   input += synapse0x1402160();
   input += synapse0x1402af0();
   input += synapse0x1402b30();
   input += synapse0x14034c0();
   input += synapse0x1403500();
   input += synapse0x1403e90();
   input += synapse0x1403ed0();
   input += synapse0x1404a70();
   input += synapse0x1404ab0();
   input += synapse0x1405440();
   input += synapse0x1405480();
   input += synapse0x13f62c0();
   input += synapse0x13f6300();
   input += synapse0x13f6c90();
   input += synapse0x13f6cd0();
   input += synapse0x13f7660();
   input += synapse0x13f76a0();
   input += synapse0x1409b80();
   input += synapse0x1409bc0();
   input += synapse0x140a550();
   input += synapse0x140a590();
   input += synapse0x140af20();
   input += synapse0x140af60();
   input += synapse0x140b8f0();
   input += synapse0x140b930();
   input += synapse0x13e77e0();
   input += synapse0x13e7820();
   input += synapse0x13fb090();
   input += synapse0x13fb0d0();
   input += synapse0x140c010();
   input += synapse0x140c050();
   input += synapse0x140c090();
   input += synapse0x140c0d0();
   input += synapse0x1412f80();
   input += synapse0x1412fc0();
   input += synapse0x1413000();
   input += synapse0x1413040();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1412be0() {
   double input = input0x1412be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1413080() {
   double input = 0.63191;
   input += synapse0x14133c0();
   input += synapse0x1413400();
   input += synapse0x1413440();
   input += synapse0x1413480();
   input += synapse0x14134c0();
   input += synapse0x1413500();
   input += synapse0x1413540();
   input += synapse0x1413580();
   input += synapse0x14135c0();
   input += synapse0x1413600();
   input += synapse0x1413640();
   input += synapse0x1413680();
   input += synapse0x14136c0();
   input += synapse0x1413700();
   input += synapse0x1413740();
   input += synapse0x1413780();
   input += synapse0x1413210();
   input += synapse0x1413250();
   input += synapse0x14138d0();
   input += synapse0x1413910();
   input += synapse0x1413950();
   input += synapse0x1413990();
   input += synapse0x14139d0();
   input += synapse0x1413a10();
   input += synapse0x1413a50();
   input += synapse0x1413a90();
   input += synapse0x1413ad0();
   input += synapse0x1413b10();
   input += synapse0x1413b50();
   input += synapse0x1413b90();
   input += synapse0x1413bd0();
   input += synapse0x1413c10();
   input += synapse0x14137c0();
   input += synapse0x1413800();
   input += synapse0x1413840();
   input += synapse0x1413880();
   input += synapse0x1413e60();
   input += synapse0x1413ea0();
   input += synapse0x1413ee0();
   input += synapse0x1413f20();
   input += synapse0x1413f60();
   input += synapse0x1413fa0();
   input += synapse0x1413fe0();
   input += synapse0x1414020();
   input += synapse0x1414060();
   input += synapse0x14140a0();
   input += synapse0x14140e0();
   input += synapse0x1414120();
   input += synapse0x1414160();
   input += synapse0x14141a0();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1413080() {
   double input = input0x1413080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x14141e0() {
   double input = -0.314693;
   input += synapse0x1414520();
   input += synapse0x1414560();
   input += synapse0x14145a0();
   input += synapse0x14145e0();
   input += synapse0x1414620();
   input += synapse0x1414660();
   input += synapse0x14146a0();
   input += synapse0x14146e0();
   input += synapse0x1414720();
   input += synapse0x1414760();
   input += synapse0x14147a0();
   input += synapse0x14147e0();
   input += synapse0x1414820();
   input += synapse0x1414860();
   input += synapse0x14148a0();
   input += synapse0x14148e0();
   input += synapse0x1414370();
   input += synapse0x14143b0();
   input += synapse0x1414a30();
   input += synapse0x1414a70();
   input += synapse0x1414ab0();
   input += synapse0x1414af0();
   input += synapse0x1414b30();
   input += synapse0x1414b70();
   input += synapse0x1414bb0();
   input += synapse0x1414bf0();
   input += synapse0x1414c30();
   input += synapse0x1414c70();
   input += synapse0x1414cb0();
   input += synapse0x1414cf0();
   input += synapse0x1414d30();
   input += synapse0x1414d70();
   input += synapse0x1414920();
   input += synapse0x1414960();
   input += synapse0x14149a0();
   input += synapse0x14149e0();
   input += synapse0x1414fc0();
   input += synapse0x1415000();
   input += synapse0x1415040();
   input += synapse0x1415080();
   input += synapse0x14150c0();
   input += synapse0x1415100();
   input += synapse0x1415140();
   input += synapse0x1415180();
   input += synapse0x14151c0();
   input += synapse0x1415200();
   input += synapse0x1415240();
   input += synapse0x1415280();
   input += synapse0x14152c0();
   input += synapse0x1415300();
   return input;
}

double NNfunction_sb_sLsL::neuron0x14141e0() {
   double input = input0x14141e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1415340() {
   double input = 0.752391;
   input += synapse0x1415680();
   input += synapse0x14156c0();
   input += synapse0x1415700();
   input += synapse0x1415740();
   input += synapse0x1415780();
   input += synapse0x14157c0();
   input += synapse0x1415800();
   input += synapse0x1415840();
   input += synapse0x1415880();
   input += synapse0x14158c0();
   input += synapse0x1415900();
   input += synapse0x1415940();
   input += synapse0x1415980();
   input += synapse0x14159c0();
   input += synapse0x1415a00();
   input += synapse0x1415a40();
   input += synapse0x14154d0();
   input += synapse0x1415510();
   input += synapse0x1415b90();
   input += synapse0x1415bd0();
   input += synapse0x1415c10();
   input += synapse0x1415c50();
   input += synapse0x1415c90();
   input += synapse0x1415cd0();
   input += synapse0x1415d10();
   input += synapse0x1415d50();
   input += synapse0x1415d90();
   input += synapse0x1415dd0();
   input += synapse0x1415e10();
   input += synapse0x1415e50();
   input += synapse0x1415e90();
   input += synapse0x1415ed0();
   input += synapse0x1415a80();
   input += synapse0x1415ac0();
   input += synapse0x1415b00();
   input += synapse0x1415b40();
   input += synapse0x1416120();
   input += synapse0x1416160();
   input += synapse0x14161a0();
   input += synapse0x14161e0();
   input += synapse0x1416220();
   input += synapse0x1416260();
   input += synapse0x14162a0();
   input += synapse0x14162e0();
   input += synapse0x1416320();
   input += synapse0x1416360();
   input += synapse0x14163a0();
   input += synapse0x14163e0();
   input += synapse0x1416420();
   input += synapse0x1416460();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1415340() {
   double input = input0x1415340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x14164a0() {
   double input = -0.397067;
   input += synapse0x13e7580();
   input += synapse0x14166c0();
   input += synapse0x1416700();
   input += synapse0x1416740();
   input += synapse0x1416780();
   return input;
}

double NNfunction_sb_sLsL::neuron0x14164a0() {
   double input = input0x14164a0();
   return (input * 1)+0;
}

double NNfunction_sb_sLsL::synapse0x11a23d0() {
   return (neuron0x13e2560()*-0.00317851);
}

double NNfunction_sb_sLsL::synapse0x13e2420() {
   return (neuron0x13e28a0()*-0.0252743);
}

double NNfunction_sb_sLsL::synapse0x13e2460() {
   return (neuron0x13e2be0()*1.45531);
}

double NNfunction_sb_sLsL::synapse0x13e7870() {
   return (neuron0x13e2f20()*-0.367335);
}

double NNfunction_sb_sLsL::synapse0x13e78b0() {
   return (neuron0x13e3260()*-0.010897);
}

double NNfunction_sb_sLsL::synapse0x13e78f0() {
   return (neuron0x13e35a0()*-0.0506317);
}

double NNfunction_sb_sLsL::synapse0x13e7930() {
   return (neuron0x13e38e0()*-0.0112303);
}

double NNfunction_sb_sLsL::synapse0x13e7970() {
   return (neuron0x13e3c20()*-0.0300473);
}

double NNfunction_sb_sLsL::synapse0x13e79b0() {
   return (neuron0x13e3f60()*0.00484722);
}

double NNfunction_sb_sLsL::synapse0x13e79f0() {
   return (neuron0x13e42a0()*-0.00848968);
}

double NNfunction_sb_sLsL::synapse0x13e7a30() {
   return (neuron0x13e45e0()*0.0124831);
}

double NNfunction_sb_sLsL::synapse0x13e7a70() {
   return (neuron0x13e4920()*0.0331741);
}

double NNfunction_sb_sLsL::synapse0x13e7ab0() {
   return (neuron0x13e4c60()*0.0248896);
}

double NNfunction_sb_sLsL::synapse0x13e7af0() {
   return (neuron0x13e4fa0()*-0.00759567);
}

double NNfunction_sb_sLsL::synapse0x13e7b30() {
   return (neuron0x13e52e0()*-0.0104854);
}

double NNfunction_sb_sLsL::synapse0x13e7b70() {
   return (neuron0x13e5620()*0.0180265);
}

double NNfunction_sb_sLsL::synapse0x13e2390() {
   return (neuron0x13e5960()*0.0176903);
}

double NNfunction_sb_sLsL::synapse0x13e23d0() {
   return (neuron0x13e5ec0()*-0.033692);
}

double NNfunction_sb_sLsL::synapse0x1193c70() {
   return (neuron0x13e60e0()*0.0264555);
}

double NNfunction_sb_sLsL::synapse0x1193cb0() {
   return (neuron0x13e6420()*-0.0134667);
}

double NNfunction_sb_sLsL::synapse0x13e7dd0() {
   return (neuron0x13e6760()*-0.00766352);
}

double NNfunction_sb_sLsL::synapse0x13e7e10() {
   return (neuron0x13e6aa0()*-0.0223534);
}

double NNfunction_sb_sLsL::synapse0x13e7e50() {
   return (neuron0x13e6de0()*0.00742428);
}

double NNfunction_sb_sLsL::synapse0x13e7e90() {
   return (neuron0x13e7120()*-0.000868115);
}

double NNfunction_sb_sLsL::synapse0x13e8210() {
   return (neuron0x13e2560()*-0.00363184);
}

double NNfunction_sb_sLsL::synapse0x13e8250() {
   return (neuron0x13e28a0()*-0.000137487);
}

double NNfunction_sb_sLsL::synapse0x13e8290() {
   return (neuron0x13e2be0()*0.0682529);
}

double NNfunction_sb_sLsL::synapse0x13e82d0() {
   return (neuron0x13e2f20()*2.53691);
}

double NNfunction_sb_sLsL::synapse0x13e8310() {
   return (neuron0x13e3260()*0.00104659);
}

double NNfunction_sb_sLsL::synapse0x13e8350() {
   return (neuron0x13e35a0()*-0.0110238);
}

double NNfunction_sb_sLsL::synapse0x13e8390() {
   return (neuron0x13e38e0()*0.00702055);
}

double NNfunction_sb_sLsL::synapse0x13e83d0() {
   return (neuron0x13e3c20()*-0.0179612);
}

double NNfunction_sb_sLsL::synapse0x13e8410() {
   return (neuron0x13e3f60()*0.0203023);
}

double NNfunction_sb_sLsL::synapse0x13e7cc0() {
   return (neuron0x13e42a0()*-0.00591034);
}

double NNfunction_sb_sLsL::synapse0x13e7d00() {
   return (neuron0x13e45e0()*-0.0058814);
}

double NNfunction_sb_sLsL::synapse0x13e7d40() {
   return (neuron0x13e4920()*0.0478539);
}

double NNfunction_sb_sLsL::synapse0x13e7d80() {
   return (neuron0x13e4c60()*-0.57159);
}

double NNfunction_sb_sLsL::synapse0x13e8660() {
   return (neuron0x13e4fa0()*-0.0202346);
}

double NNfunction_sb_sLsL::synapse0x13e86a0() {
   return (neuron0x13e52e0()*0.0445107);
}

double NNfunction_sb_sLsL::synapse0x13e86e0() {
   return (neuron0x13e5620()*0.0406166);
}

double NNfunction_sb_sLsL::synapse0x13e8060() {
   return (neuron0x13e5960()*-0.0526536);
}

double NNfunction_sb_sLsL::synapse0x13e80a0() {
   return (neuron0x13e5ec0()*0.0133601);
}

double NNfunction_sb_sLsL::synapse0x13e8830() {
   return (neuron0x13e60e0()*0.0123592);
}

double NNfunction_sb_sLsL::synapse0x13e8870() {
   return (neuron0x13e6420()*-0.0124497);
}

double NNfunction_sb_sLsL::synapse0x13e88b0() {
   return (neuron0x13e6760()*0.00506536);
}

double NNfunction_sb_sLsL::synapse0x13e88f0() {
   return (neuron0x13e6aa0()*0.0103181);
}

double NNfunction_sb_sLsL::synapse0x13e8930() {
   return (neuron0x13e6de0()*0.0019449);
}

double NNfunction_sb_sLsL::synapse0x13e8970() {
   return (neuron0x13e7120()*-0.0131122);
}

double NNfunction_sb_sLsL::synapse0x13e8cf0() {
   return (neuron0x13e2560()*-0.00471301);
}

double NNfunction_sb_sLsL::synapse0x13e8d30() {
   return (neuron0x13e28a0()*-0.00984699);
}

double NNfunction_sb_sLsL::synapse0x13e8d70() {
   return (neuron0x13e2be0()*-0.082455);
}

double NNfunction_sb_sLsL::synapse0x13e8db0() {
   return (neuron0x13e2f20()*0.00681235);
}

double NNfunction_sb_sLsL::synapse0x13e8df0() {
   return (neuron0x13e3260()*-0.0111831);
}

double NNfunction_sb_sLsL::synapse0x13e8e30() {
   return (neuron0x13e35a0()*0.000179546);
}

double NNfunction_sb_sLsL::synapse0x13e8e70() {
   return (neuron0x13e38e0()*-0.0394449);
}

double NNfunction_sb_sLsL::synapse0x13e8eb0() {
   return (neuron0x13e3c20()*0.0184149);
}

double NNfunction_sb_sLsL::synapse0x13e8ef0() {
   return (neuron0x13e3f60()*-0.00612435);
}

double NNfunction_sb_sLsL::synapse0x13e8f30() {
   return (neuron0x13e42a0()*0.0866451);
}

double NNfunction_sb_sLsL::synapse0x13e8f70() {
   return (neuron0x13e45e0()*0.131948);
}

double NNfunction_sb_sLsL::synapse0x13e8fb0() {
   return (neuron0x13e4920()*-0.149752);
}

double NNfunction_sb_sLsL::synapse0x13e8ff0() {
   return (neuron0x13e4c60()*0.19018);
}

double NNfunction_sb_sLsL::synapse0x13e9030() {
   return (neuron0x13e4fa0()*-0.0879186);
}

double NNfunction_sb_sLsL::synapse0x13e9070() {
   return (neuron0x13e52e0()*-0.048921);
}

double NNfunction_sb_sLsL::synapse0x13e90b0() {
   return (neuron0x13e5620()*-0.0489893);
}

double NNfunction_sb_sLsL::synapse0x13e8b40() {
   return (neuron0x13e5960()*-0.00166667);
}

double NNfunction_sb_sLsL::synapse0x13e8b80() {
   return (neuron0x13e5ec0()*0.017459);
}

double NNfunction_sb_sLsL::synapse0x11a1ac0() {
   return (neuron0x13e60e0()*-0.0688382);
}

double NNfunction_sb_sLsL::synapse0x11a1b00() {
   return (neuron0x13e6420()*-0.257331);
}

double NNfunction_sb_sLsL::synapse0x13d15f0() {
   return (neuron0x13e6760()*0.0550415);
}

double NNfunction_sb_sLsL::synapse0x13d1630() {
   return (neuron0x13e6aa0()*-0.0642293);
}

double NNfunction_sb_sLsL::synapse0x13d1670() {
   return (neuron0x13e6de0()*0.0526362);
}

double NNfunction_sb_sLsL::synapse0x13e24a0() {
   return (neuron0x13e7120()*0.0103027);
}

double NNfunction_sb_sLsL::synapse0x13e8600() {
   return (neuron0x13e2560()*0.00501905);
}

double NNfunction_sb_sLsL::synapse0x13e24e0() {
   return (neuron0x13e28a0()*0.00532405);
}

double NNfunction_sb_sLsL::synapse0x13e2520() {
   return (neuron0x13e2be0()*-0.134217);
}

double NNfunction_sb_sLsL::synapse0x13e9200() {
   return (neuron0x13e2f20()*0.163743);
}

double NNfunction_sb_sLsL::synapse0x13e9240() {
   return (neuron0x13e3260()*-0.0129032);
}

double NNfunction_sb_sLsL::synapse0x13e9280() {
   return (neuron0x13e35a0()*-0.00842241);
}

double NNfunction_sb_sLsL::synapse0x13e92c0() {
   return (neuron0x13e38e0()*-0.0178393);
}

double NNfunction_sb_sLsL::synapse0x13e9300() {
   return (neuron0x13e3c20()*-0.00602582);
}

double NNfunction_sb_sLsL::synapse0x13e9340() {
   return (neuron0x13e3f60()*-0.0289062);
}

double NNfunction_sb_sLsL::synapse0x13e9380() {
   return (neuron0x13e42a0()*-0.014275);
}

double NNfunction_sb_sLsL::synapse0x13e93c0() {
   return (neuron0x13e45e0()*0.0437248);
}

double NNfunction_sb_sLsL::synapse0x13e9400() {
   return (neuron0x13e4920()*-8.88616e-05);
}

double NNfunction_sb_sLsL::synapse0x13e9440() {
   return (neuron0x13e4c60()*-0.930923);
}

double NNfunction_sb_sLsL::synapse0x13e9480() {
   return (neuron0x13e4fa0()*0.0032254);
}

double NNfunction_sb_sLsL::synapse0x13e94c0() {
   return (neuron0x13e52e0()*-0.00336244);
}

double NNfunction_sb_sLsL::synapse0x13e9500() {
   return (neuron0x13e5620()*-0.0379358);
}

double NNfunction_sb_sLsL::synapse0x13e8450() {
   return (neuron0x13e5960()*0.0159992);
}

double NNfunction_sb_sLsL::synapse0x13e8490() {
   return (neuron0x13e5ec0()*0.0145774);
}

double NNfunction_sb_sLsL::synapse0x13e9650() {
   return (neuron0x13e60e0()*0.00159038);
}

double NNfunction_sb_sLsL::synapse0x13e9690() {
   return (neuron0x13e6420()*-0.00827968);
}

double NNfunction_sb_sLsL::synapse0x13e96d0() {
   return (neuron0x13e6760()*0.0103278);
}

double NNfunction_sb_sLsL::synapse0x13e9710() {
   return (neuron0x13e6aa0()*-0.00266494);
}

double NNfunction_sb_sLsL::synapse0x13e9750() {
   return (neuron0x13e6de0()*-0.00286266);
}

double NNfunction_sb_sLsL::synapse0x13e9790() {
   return (neuron0x13e7120()*-0.00105544);
}

double NNfunction_sb_sLsL::synapse0x13e9b10() {
   return (neuron0x13e2560()*0.034665);
}

double NNfunction_sb_sLsL::synapse0x13e9b50() {
   return (neuron0x13e28a0()*0.0173436);
}

double NNfunction_sb_sLsL::synapse0x13e9b90() {
   return (neuron0x13e2be0()*0.151548);
}

double NNfunction_sb_sLsL::synapse0x13e9bd0() {
   return (neuron0x13e2f20()*0.221902);
}

double NNfunction_sb_sLsL::synapse0x13e9c10() {
   return (neuron0x13e3260()*-0.0494706);
}

double NNfunction_sb_sLsL::synapse0x13e9c50() {
   return (neuron0x13e35a0()*0.0275058);
}

double NNfunction_sb_sLsL::synapse0x13e9c90() {
   return (neuron0x13e38e0()*0.00230185);
}

double NNfunction_sb_sLsL::synapse0x13e9cd0() {
   return (neuron0x13e3c20()*0.0334216);
}

double NNfunction_sb_sLsL::synapse0x13e9d10() {
   return (neuron0x13e3f60()*-0.0217397);
}

double NNfunction_sb_sLsL::synapse0x13e9d50() {
   return (neuron0x13e42a0()*-0.01367);
}

double NNfunction_sb_sLsL::synapse0x13e9d90() {
   return (neuron0x13e45e0()*-0.012538);
}

double NNfunction_sb_sLsL::synapse0x13e9dd0() {
   return (neuron0x13e4920()*-0.0347333);
}

double NNfunction_sb_sLsL::synapse0x13e9e10() {
   return (neuron0x13e4c60()*0.520009);
}

double NNfunction_sb_sLsL::synapse0x13e9e50() {
   return (neuron0x13e4fa0()*0.099305);
}

double NNfunction_sb_sLsL::synapse0x13e9e90() {
   return (neuron0x13e52e0()*-0.469672);
}

double NNfunction_sb_sLsL::synapse0x13e9ed0() {
   return (neuron0x13e5620()*-0.0461643);
}

double NNfunction_sb_sLsL::synapse0x13e9960() {
   return (neuron0x13e5960()*0.115707);
}

double NNfunction_sb_sLsL::synapse0x13e99a0() {
   return (neuron0x13e5ec0()*0.000237359);
}

double NNfunction_sb_sLsL::synapse0x13ea020() {
   return (neuron0x13e60e0()*-0.024799);
}

double NNfunction_sb_sLsL::synapse0x13ea060() {
   return (neuron0x13e6420()*-0.0203384);
}

double NNfunction_sb_sLsL::synapse0x13ea0a0() {
   return (neuron0x13e6760()*0.0271609);
}

double NNfunction_sb_sLsL::synapse0x13ea0e0() {
   return (neuron0x13e6aa0()*0.0256504);
}

double NNfunction_sb_sLsL::synapse0x13ea120() {
   return (neuron0x13e6de0()*-0.0249476);
}

double NNfunction_sb_sLsL::synapse0x13ea160() {
   return (neuron0x13e7120()*0.00611517);
}

double NNfunction_sb_sLsL::synapse0x13ea4e0() {
   return (neuron0x13e2560()*-0.025041);
}

double NNfunction_sb_sLsL::synapse0x13ea520() {
   return (neuron0x13e28a0()*-0.00317023);
}

double NNfunction_sb_sLsL::synapse0x13ea560() {
   return (neuron0x13e2be0()*0.0432726);
}

double NNfunction_sb_sLsL::synapse0x13ea5a0() {
   return (neuron0x13e2f20()*-1.3274);
}

double NNfunction_sb_sLsL::synapse0x13ea5e0() {
   return (neuron0x13e3260()*0.0840668);
}

double NNfunction_sb_sLsL::synapse0x13ea620() {
   return (neuron0x13e35a0()*0.0428715);
}

double NNfunction_sb_sLsL::synapse0x13ea660() {
   return (neuron0x13e38e0()*-0.0380438);
}

double NNfunction_sb_sLsL::synapse0x13ea6a0() {
   return (neuron0x13e3c20()*0.0293803);
}

double NNfunction_sb_sLsL::synapse0x13ea6e0() {
   return (neuron0x13e3f60()*-0.0439674);
}

double NNfunction_sb_sLsL::synapse0x11a1e30() {
   return (neuron0x13e42a0()*-0.0713102);
}

double NNfunction_sb_sLsL::synapse0x11a1e70() {
   return (neuron0x13e45e0()*-0.0572402);
}

double NNfunction_sb_sLsL::synapse0x11a1eb0() {
   return (neuron0x13e4920()*-0.1211);
}

double NNfunction_sb_sLsL::synapse0x11a1ef0() {
   return (neuron0x13e4c60()*0.352191);
}

double NNfunction_sb_sLsL::synapse0x11a1f30() {
   return (neuron0x13e4fa0()*-0.311596);
}

double NNfunction_sb_sLsL::synapse0x11a1f70() {
   return (neuron0x13e52e0()*0.0761775);
}

double NNfunction_sb_sLsL::synapse0x11a1fb0() {
   return (neuron0x13e5620()*0.0157851);
}

double NNfunction_sb_sLsL::synapse0x13ea330() {
   return (neuron0x13e5960()*-0.253608);
}

double NNfunction_sb_sLsL::synapse0x13ea370() {
   return (neuron0x13e5ec0()*-0.123156);
}

double NNfunction_sb_sLsL::synapse0x11a2100() {
   return (neuron0x13e60e0()*-0.0838145);
}

double NNfunction_sb_sLsL::synapse0x11a2140() {
   return (neuron0x13e6420()*-0.151214);
}

double NNfunction_sb_sLsL::synapse0x11a2180() {
   return (neuron0x13e6760()*0.00143828);
}

double NNfunction_sb_sLsL::synapse0x11a21c0() {
   return (neuron0x13e6aa0()*0.0118964);
}

double NNfunction_sb_sLsL::synapse0x11a2200() {
   return (neuron0x13e6de0()*-0.0210536);
}

double NNfunction_sb_sLsL::synapse0x13eaf30() {
   return (neuron0x13e7120()*-0.0233649);
}

double NNfunction_sb_sLsL::synapse0x13eb2b0() {
   return (neuron0x13e2560()*-0.140111);
}

double NNfunction_sb_sLsL::synapse0x13eb2f0() {
   return (neuron0x13e28a0()*-0.0434928);
}

double NNfunction_sb_sLsL::synapse0x13eb330() {
   return (neuron0x13e2be0()*0.12431);
}

double NNfunction_sb_sLsL::synapse0x13eb370() {
   return (neuron0x13e2f20()*0.459143);
}

double NNfunction_sb_sLsL::synapse0x13eb3b0() {
   return (neuron0x13e3260()*0.152888);
}

double NNfunction_sb_sLsL::synapse0x13eb3f0() {
   return (neuron0x13e35a0()*0.200318);
}

double NNfunction_sb_sLsL::synapse0x13eb430() {
   return (neuron0x13e38e0()*0.224069);
}

double NNfunction_sb_sLsL::synapse0x13eb470() {
   return (neuron0x13e3c20()*-0.310242);
}

double NNfunction_sb_sLsL::synapse0x13eb4b0() {
   return (neuron0x13e3f60()*0.153843);
}

double NNfunction_sb_sLsL::synapse0x13eb4f0() {
   return (neuron0x13e42a0()*-0.0259589);
}

double NNfunction_sb_sLsL::synapse0x13eb530() {
   return (neuron0x13e45e0()*-0.0376643);
}

double NNfunction_sb_sLsL::synapse0x13eb570() {
   return (neuron0x13e4920()*-0.126592);
}

double NNfunction_sb_sLsL::synapse0x13eb5b0() {
   return (neuron0x13e4c60()*-0.178332);
}

double NNfunction_sb_sLsL::synapse0x13eb5f0() {
   return (neuron0x13e4fa0()*-0.313197);
}

double NNfunction_sb_sLsL::synapse0x13eb630() {
   return (neuron0x13e52e0()*0.234943);
}

double NNfunction_sb_sLsL::synapse0x13eb670() {
   return (neuron0x13e5620()*0.165814);
}

double NNfunction_sb_sLsL::synapse0x13eb100() {
   return (neuron0x13e5960()*-0.16962);
}

double NNfunction_sb_sLsL::synapse0x13eb140() {
   return (neuron0x13e5ec0()*-0.134806);
}

double NNfunction_sb_sLsL::synapse0x13eb7c0() {
   return (neuron0x13e60e0()*0.0923736);
}

double NNfunction_sb_sLsL::synapse0x13eb800() {
   return (neuron0x13e6420()*-0.0428135);
}

double NNfunction_sb_sLsL::synapse0x13eb840() {
   return (neuron0x13e6760()*0.0833377);
}

double NNfunction_sb_sLsL::synapse0x13eb880() {
   return (neuron0x13e6aa0()*0.176774);
}

double NNfunction_sb_sLsL::synapse0x13eb8c0() {
   return (neuron0x13e6de0()*0.0936633);
}

double NNfunction_sb_sLsL::synapse0x13eb900() {
   return (neuron0x13e7120()*0.116147);
}

double NNfunction_sb_sLsL::synapse0x13ebc80() {
   return (neuron0x13e2560()*0.0107949);
}

double NNfunction_sb_sLsL::synapse0x13ebcc0() {
   return (neuron0x13e28a0()*0.0322578);
}

double NNfunction_sb_sLsL::synapse0x13ebd00() {
   return (neuron0x13e2be0()*0.147778);
}

double NNfunction_sb_sLsL::synapse0x13ebd40() {
   return (neuron0x13e2f20()*0.934932);
}

double NNfunction_sb_sLsL::synapse0x13ebd80() {
   return (neuron0x13e3260()*0.0138432);
}

double NNfunction_sb_sLsL::synapse0x13ebdc0() {
   return (neuron0x13e35a0()*-0.0139797);
}

double NNfunction_sb_sLsL::synapse0x13ebe00() {
   return (neuron0x13e38e0()*-0.0155862);
}

double NNfunction_sb_sLsL::synapse0x13ebe40() {
   return (neuron0x13e3c20()*0.0456432);
}

double NNfunction_sb_sLsL::synapse0x13ebe80() {
   return (neuron0x13e3f60()*0.00821355);
}

double NNfunction_sb_sLsL::synapse0x13ebec0() {
   return (neuron0x13e42a0()*-0.00196072);
}

double NNfunction_sb_sLsL::synapse0x13ebf00() {
   return (neuron0x13e45e0()*-0.00627925);
}

double NNfunction_sb_sLsL::synapse0x13ebf40() {
   return (neuron0x13e4920()*-0.00825633);
}

double NNfunction_sb_sLsL::synapse0x13ebf80() {
   return (neuron0x13e4c60()*0.0504737);
}

double NNfunction_sb_sLsL::synapse0x13ebfc0() {
   return (neuron0x13e4fa0()*0.0349726);
}

double NNfunction_sb_sLsL::synapse0x13ec000() {
   return (neuron0x13e52e0()*-0.11125);
}

double NNfunction_sb_sLsL::synapse0x13ec040() {
   return (neuron0x13e5620()*-0.0154132);
}

double NNfunction_sb_sLsL::synapse0x13ebad0() {
   return (neuron0x13e5960()*0.0487849);
}

double NNfunction_sb_sLsL::synapse0x13ebb10() {
   return (neuron0x13e5ec0()*0.00474476);
}

double NNfunction_sb_sLsL::synapse0x13ec190() {
   return (neuron0x13e60e0()*0.0116835);
}

double NNfunction_sb_sLsL::synapse0x13ec1d0() {
   return (neuron0x13e6420()*-0.00741159);
}

double NNfunction_sb_sLsL::synapse0x13ec210() {
   return (neuron0x13e6760()*-0.0110053);
}

double NNfunction_sb_sLsL::synapse0x13ec250() {
   return (neuron0x13e6aa0()*-0.0188068);
}

double NNfunction_sb_sLsL::synapse0x13ec290() {
   return (neuron0x13e6de0()*-0.015395);
}

double NNfunction_sb_sLsL::synapse0x13ec2d0() {
   return (neuron0x13e7120()*-0.00581809);
}

double NNfunction_sb_sLsL::synapse0x13e5db0() {
   return (neuron0x13e2560()*0.297792);
}

double NNfunction_sb_sLsL::synapse0x13e5df0() {
   return (neuron0x13e28a0()*0.40239);
}

double NNfunction_sb_sLsL::synapse0x13e5e30() {
   return (neuron0x13e2be0()*0.292687);
}

double NNfunction_sb_sLsL::synapse0x13e5e70() {
   return (neuron0x13e2f20()*0.465358);
}

double NNfunction_sb_sLsL::synapse0x13ec860() {
   return (neuron0x13e3260()*0.340011);
}

double NNfunction_sb_sLsL::synapse0x13ec8a0() {
   return (neuron0x13e35a0()*-0.302157);
}

double NNfunction_sb_sLsL::synapse0x13ec8e0() {
   return (neuron0x13e38e0()*0.166113);
}

double NNfunction_sb_sLsL::synapse0x13ec920() {
   return (neuron0x13e3c20()*-0.504957);
}

double NNfunction_sb_sLsL::synapse0x13ec960() {
   return (neuron0x13e3f60()*-0.316141);
}

double NNfunction_sb_sLsL::synapse0x13ec9a0() {
   return (neuron0x13e42a0()*0.502608);
}

double NNfunction_sb_sLsL::synapse0x13ec9e0() {
   return (neuron0x13e45e0()*0.343074);
}

double NNfunction_sb_sLsL::synapse0x13eca20() {
   return (neuron0x13e4920()*-0.543706);
}

double NNfunction_sb_sLsL::synapse0x13eca60() {
   return (neuron0x13e4c60()*-0.0993726);
}

double NNfunction_sb_sLsL::synapse0x13ecaa0() {
   return (neuron0x13e4fa0()*0.468789);
}

double NNfunction_sb_sLsL::synapse0x13ecae0() {
   return (neuron0x13e52e0()*0.45963);
}

double NNfunction_sb_sLsL::synapse0x13ecb20() {
   return (neuron0x13e5620()*-0.0668078);
}

double NNfunction_sb_sLsL::synapse0x13ec4a0() {
   return (neuron0x13e5960()*-0.436684);
}

double NNfunction_sb_sLsL::synapse0x13ec4e0() {
   return (neuron0x13e5ec0()*0.0381254);
}

double NNfunction_sb_sLsL::synapse0x13ecc70() {
   return (neuron0x13e60e0()*0.197061);
}

double NNfunction_sb_sLsL::synapse0x13eccb0() {
   return (neuron0x13e6420()*0.0805273);
}

double NNfunction_sb_sLsL::synapse0x13eccf0() {
   return (neuron0x13e6760()*-0.253358);
}

double NNfunction_sb_sLsL::synapse0x13ecd30() {
   return (neuron0x13e6aa0()*-0.285498);
}

double NNfunction_sb_sLsL::synapse0x13ecd70() {
   return (neuron0x13e6de0()*0.173469);
}

double NNfunction_sb_sLsL::synapse0x13ecdb0() {
   return (neuron0x13e7120()*0.174087);
}

double NNfunction_sb_sLsL::synapse0x13ed130() {
   return (neuron0x13e2560()*-0.0148677);
}

double NNfunction_sb_sLsL::synapse0x13ed170() {
   return (neuron0x13e28a0()*-0.00387214);
}

double NNfunction_sb_sLsL::synapse0x13ed1b0() {
   return (neuron0x13e2be0()*0.17025);
}

double NNfunction_sb_sLsL::synapse0x13ed1f0() {
   return (neuron0x13e2f20()*-0.121055);
}

double NNfunction_sb_sLsL::synapse0x13ed230() {
   return (neuron0x13e3260()*-0.0191907);
}

double NNfunction_sb_sLsL::synapse0x13ed270() {
   return (neuron0x13e35a0()*0.0610386);
}

double NNfunction_sb_sLsL::synapse0x13ed2b0() {
   return (neuron0x13e38e0()*-0.0213372);
}

double NNfunction_sb_sLsL::synapse0x13ed2f0() {
   return (neuron0x13e3c20()*-0.0269939);
}

double NNfunction_sb_sLsL::synapse0x13ed330() {
   return (neuron0x13e3f60()*-0.0640459);
}

double NNfunction_sb_sLsL::synapse0x13ed370() {
   return (neuron0x13e42a0()*0.0870732);
}

double NNfunction_sb_sLsL::synapse0x13ed3b0() {
   return (neuron0x13e45e0()*0.11464);
}

double NNfunction_sb_sLsL::synapse0x13ed3f0() {
   return (neuron0x13e4920()*0.0424117);
}

double NNfunction_sb_sLsL::synapse0x13ed430() {
   return (neuron0x13e4c60()*-1.26659);
}

double NNfunction_sb_sLsL::synapse0x13ed470() {
   return (neuron0x13e4fa0()*-0.0157054);
}

double NNfunction_sb_sLsL::synapse0x13ed4b0() {
   return (neuron0x13e52e0()*-0.0161976);
}

double NNfunction_sb_sLsL::synapse0x13ed4f0() {
   return (neuron0x13e5620()*0.00367089);
}

double NNfunction_sb_sLsL::synapse0x13ecf80() {
   return (neuron0x13e5960()*0.0527522);
}

double NNfunction_sb_sLsL::synapse0x13ecfc0() {
   return (neuron0x13e5ec0()*0.149463);
}

double NNfunction_sb_sLsL::synapse0x13ed640() {
   return (neuron0x13e60e0()*-0.0762569);
}

double NNfunction_sb_sLsL::synapse0x13ed680() {
   return (neuron0x13e6420()*0.357475);
}

double NNfunction_sb_sLsL::synapse0x13ed6c0() {
   return (neuron0x13e6760()*0.0186406);
}

double NNfunction_sb_sLsL::synapse0x13ed700() {
   return (neuron0x13e6aa0()*-0.0245426);
}

double NNfunction_sb_sLsL::synapse0x13ed740() {
   return (neuron0x13e6de0()*-0.00488277);
}

double NNfunction_sb_sLsL::synapse0x13ed780() {
   return (neuron0x13e7120()*0.0416578);
}

double NNfunction_sb_sLsL::synapse0x13edb00() {
   return (neuron0x13e2560()*-0.0134891);
}

double NNfunction_sb_sLsL::synapse0x13edb40() {
   return (neuron0x13e28a0()*0.0151462);
}

double NNfunction_sb_sLsL::synapse0x13edb80() {
   return (neuron0x13e2be0()*-0.116634);
}

double NNfunction_sb_sLsL::synapse0x13edbc0() {
   return (neuron0x13e2f20()*1.58063);
}

double NNfunction_sb_sLsL::synapse0x13edc00() {
   return (neuron0x13e3260()*-0.0136628);
}

double NNfunction_sb_sLsL::synapse0x13edc40() {
   return (neuron0x13e35a0()*-0.00775254);
}

double NNfunction_sb_sLsL::synapse0x13edc80() {
   return (neuron0x13e38e0()*-0.0206781);
}

double NNfunction_sb_sLsL::synapse0x13edcc0() {
   return (neuron0x13e3c20()*0.0268178);
}

double NNfunction_sb_sLsL::synapse0x13edd00() {
   return (neuron0x13e3f60()*0.0097823);
}

double NNfunction_sb_sLsL::synapse0x13edd40() {
   return (neuron0x13e42a0()*0.0191751);
}

double NNfunction_sb_sLsL::synapse0x13edd80() {
   return (neuron0x13e45e0()*-0.00528902);
}

double NNfunction_sb_sLsL::synapse0x13eddc0() {
   return (neuron0x13e4920()*-0.0083219);
}

double NNfunction_sb_sLsL::synapse0x13ede00() {
   return (neuron0x13e4c60()*-0.112422);
}

double NNfunction_sb_sLsL::synapse0x13ede40() {
   return (neuron0x13e4fa0()*0.0057548);
}

double NNfunction_sb_sLsL::synapse0x13ede80() {
   return (neuron0x13e52e0()*0.00860905);
}

double NNfunction_sb_sLsL::synapse0x13edec0() {
   return (neuron0x13e5620()*-0.0506484);
}

double NNfunction_sb_sLsL::synapse0x13ed950() {
   return (neuron0x13e5960()*-0.00504265);
}

double NNfunction_sb_sLsL::synapse0x13ed990() {
   return (neuron0x13e5ec0()*0.0141104);
}

double NNfunction_sb_sLsL::synapse0x13ea720() {
   return (neuron0x13e60e0()*0.0111737);
}

double NNfunction_sb_sLsL::synapse0x13ea760() {
   return (neuron0x13e6420()*0.00845991);
}

double NNfunction_sb_sLsL::synapse0x13ea7a0() {
   return (neuron0x13e6760()*9.734e-05);
}

double NNfunction_sb_sLsL::synapse0x13ea7e0() {
   return (neuron0x13e6aa0()*0.000818051);
}

double NNfunction_sb_sLsL::synapse0x13ea820() {
   return (neuron0x13e6de0()*-0.000604278);
}

double NNfunction_sb_sLsL::synapse0x13ea860() {
   return (neuron0x13e7120()*0.00285268);
}

double NNfunction_sb_sLsL::synapse0x13eabe0() {
   return (neuron0x13e2560()*0.282699);
}

double NNfunction_sb_sLsL::synapse0x13eac20() {
   return (neuron0x13e28a0()*-0.0975584);
}

double NNfunction_sb_sLsL::synapse0x13eac60() {
   return (neuron0x13e2be0()*-0.30882);
}

double NNfunction_sb_sLsL::synapse0x13eaca0() {
   return (neuron0x13e2f20()*-0.712965);
}

double NNfunction_sb_sLsL::synapse0x13eace0() {
   return (neuron0x13e3260()*-0.10658);
}

double NNfunction_sb_sLsL::synapse0x13ead20() {
   return (neuron0x13e35a0()*0.143372);
}

double NNfunction_sb_sLsL::synapse0x13ead60() {
   return (neuron0x13e38e0()*-0.14807);
}

double NNfunction_sb_sLsL::synapse0x13eada0() {
   return (neuron0x13e3c20()*-0.116787);
}

double NNfunction_sb_sLsL::synapse0x13eade0() {
   return (neuron0x13e3f60()*0.0756725);
}

double NNfunction_sb_sLsL::synapse0x13eae20() {
   return (neuron0x13e42a0()*-0.0772104);
}

double NNfunction_sb_sLsL::synapse0x13eae60() {
   return (neuron0x13e45e0()*-0.29747);
}

double NNfunction_sb_sLsL::synapse0x13eaea0() {
   return (neuron0x13e4920()*0.147772);
}

double NNfunction_sb_sLsL::synapse0x13eaee0() {
   return (neuron0x13e4c60()*0.41666);
}

double NNfunction_sb_sLsL::synapse0x13ef020() {
   return (neuron0x13e4fa0()*-0.0213093);
}

double NNfunction_sb_sLsL::synapse0x13ef060() {
   return (neuron0x13e52e0()*0.040747);
}

double NNfunction_sb_sLsL::synapse0x13ef0a0() {
   return (neuron0x13e5620()*0.400148);
}

double NNfunction_sb_sLsL::synapse0x13eaa30() {
   return (neuron0x13e5960()*0.111047);
}

double NNfunction_sb_sLsL::synapse0x13eaa70() {
   return (neuron0x13e5ec0()*-0.0438099);
}

double NNfunction_sb_sLsL::synapse0x13ef1f0() {
   return (neuron0x13e60e0()*0.557595);
}

double NNfunction_sb_sLsL::synapse0x13ef230() {
   return (neuron0x13e6420()*0.203895);
}

double NNfunction_sb_sLsL::synapse0x13ef270() {
   return (neuron0x13e6760()*-0.0787957);
}

double NNfunction_sb_sLsL::synapse0x13ef2b0() {
   return (neuron0x13e6aa0()*-0.0828446);
}

double NNfunction_sb_sLsL::synapse0x13ef2f0() {
   return (neuron0x13e6de0()*0.177215);
}

double NNfunction_sb_sLsL::synapse0x13ef330() {
   return (neuron0x13e7120()*0.168682);
}

double NNfunction_sb_sLsL::synapse0x13ef6b0() {
   return (neuron0x13e2560()*0.00106198);
}

double NNfunction_sb_sLsL::synapse0x13ef6f0() {
   return (neuron0x13e28a0()*-0.00735621);
}

double NNfunction_sb_sLsL::synapse0x13ef730() {
   return (neuron0x13e2be0()*0.0477954);
}

double NNfunction_sb_sLsL::synapse0x13ef770() {
   return (neuron0x13e2f20()*3.19978);
}

double NNfunction_sb_sLsL::synapse0x13ef7b0() {
   return (neuron0x13e3260()*-0.00754427);
}

double NNfunction_sb_sLsL::synapse0x13ef7f0() {
   return (neuron0x13e35a0()*0.00375201);
}

double NNfunction_sb_sLsL::synapse0x13ef830() {
   return (neuron0x13e38e0()*-0.0204891);
}

double NNfunction_sb_sLsL::synapse0x13ef870() {
   return (neuron0x13e3c20()*0.0060407);
}

double NNfunction_sb_sLsL::synapse0x13ef8b0() {
   return (neuron0x13e3f60()*-0.00400238);
}

double NNfunction_sb_sLsL::synapse0x13ef8f0() {
   return (neuron0x13e42a0()*0.0114322);
}

double NNfunction_sb_sLsL::synapse0x13ef930() {
   return (neuron0x13e45e0()*0.000788726);
}

double NNfunction_sb_sLsL::synapse0x13ef970() {
   return (neuron0x13e4920()*-0.040456);
}

double NNfunction_sb_sLsL::synapse0x13ef9b0() {
   return (neuron0x13e4c60()*0.55497);
}

double NNfunction_sb_sLsL::synapse0x13ef9f0() {
   return (neuron0x13e4fa0()*0.035751);
}

double NNfunction_sb_sLsL::synapse0x13efa30() {
   return (neuron0x13e52e0()*-0.00126462);
}

double NNfunction_sb_sLsL::synapse0x13efa70() {
   return (neuron0x13e5620()*-0.000466555);
}

double NNfunction_sb_sLsL::synapse0x13ef500() {
   return (neuron0x13e5960()*0.0862454);
}

double NNfunction_sb_sLsL::synapse0x13ef540() {
   return (neuron0x13e5ec0()*-0.0245277);
}

double NNfunction_sb_sLsL::synapse0x13efbc0() {
   return (neuron0x13e60e0()*-0.0152809);
}

double NNfunction_sb_sLsL::synapse0x13efc00() {
   return (neuron0x13e6420()*-0.00397404);
}

double NNfunction_sb_sLsL::synapse0x13efc40() {
   return (neuron0x13e6760()*-0.00186705);
}

double NNfunction_sb_sLsL::synapse0x13efc80() {
   return (neuron0x13e6aa0()*0.0130152);
}

double NNfunction_sb_sLsL::synapse0x13efcc0() {
   return (neuron0x13e6de0()*0.000903882);
}

double NNfunction_sb_sLsL::synapse0x13efd00() {
   return (neuron0x13e7120()*0.0180781);
}

double NNfunction_sb_sLsL::synapse0x13f0080() {
   return (neuron0x13e2560()*-0.00452066);
}

double NNfunction_sb_sLsL::synapse0x13f00c0() {
   return (neuron0x13e28a0()*-0.119162);
}

double NNfunction_sb_sLsL::synapse0x13f0100() {
   return (neuron0x13e2be0()*-0.304077);
}

double NNfunction_sb_sLsL::synapse0x13f0140() {
   return (neuron0x13e2f20()*2.08054);
}

double NNfunction_sb_sLsL::synapse0x13f0180() {
   return (neuron0x13e3260()*0.0417137);
}

double NNfunction_sb_sLsL::synapse0x13f01c0() {
   return (neuron0x13e35a0()*0.0311818);
}

double NNfunction_sb_sLsL::synapse0x13f0200() {
   return (neuron0x13e38e0()*0.0362362);
}

double NNfunction_sb_sLsL::synapse0x13f0240() {
   return (neuron0x13e3c20()*-0.00536398);
}

double NNfunction_sb_sLsL::synapse0x13f0280() {
   return (neuron0x13e3f60()*-0.0198163);
}

double NNfunction_sb_sLsL::synapse0x13f02c0() {
   return (neuron0x13e42a0()*-0.0131246);
}

double NNfunction_sb_sLsL::synapse0x13f0300() {
   return (neuron0x13e45e0()*0.00566357);
}

double NNfunction_sb_sLsL::synapse0x13f0340() {
   return (neuron0x13e4920()*-0.0901495);
}

double NNfunction_sb_sLsL::synapse0x13f0380() {
   return (neuron0x13e4c60()*-0.00387308);
}

double NNfunction_sb_sLsL::synapse0x13f03c0() {
   return (neuron0x13e4fa0()*0.00193603);
}

double NNfunction_sb_sLsL::synapse0x13f0400() {
   return (neuron0x13e52e0()*-0.112899);
}

double NNfunction_sb_sLsL::synapse0x13f0440() {
   return (neuron0x13e5620()*0.0335111);
}

double NNfunction_sb_sLsL::synapse0x13efed0() {
   return (neuron0x13e5960()*-0.180697);
}

double NNfunction_sb_sLsL::synapse0x13eff10() {
   return (neuron0x13e5ec0()*0.110737);
}

double NNfunction_sb_sLsL::synapse0x13f0590() {
   return (neuron0x13e60e0()*-0.0690235);
}

double NNfunction_sb_sLsL::synapse0x13f05d0() {
   return (neuron0x13e6420()*-0.0374642);
}

double NNfunction_sb_sLsL::synapse0x13f0610() {
   return (neuron0x13e6760()*-0.0107211);
}

double NNfunction_sb_sLsL::synapse0x13f0650() {
   return (neuron0x13e6aa0()*-0.158116);
}

double NNfunction_sb_sLsL::synapse0x13f0690() {
   return (neuron0x13e6de0()*0.0164802);
}

double NNfunction_sb_sLsL::synapse0x13f06d0() {
   return (neuron0x13e7120()*-0.057272);
}

double NNfunction_sb_sLsL::synapse0x13f0a50() {
   return (neuron0x13e2560()*-0.00697702);
}

double NNfunction_sb_sLsL::synapse0x13f0a90() {
   return (neuron0x13e28a0()*0.126707);
}

double NNfunction_sb_sLsL::synapse0x13f0ad0() {
   return (neuron0x13e2be0()*-0.0404777);
}

double NNfunction_sb_sLsL::synapse0x13f0b10() {
   return (neuron0x13e2f20()*-1.41136);
}

double NNfunction_sb_sLsL::synapse0x13f0b50() {
   return (neuron0x13e3260()*0.199486);
}

double NNfunction_sb_sLsL::synapse0x13f0b90() {
   return (neuron0x13e35a0()*-0.00063164);
}

double NNfunction_sb_sLsL::synapse0x13f0bd0() {
   return (neuron0x13e38e0()*0.391438);
}

double NNfunction_sb_sLsL::synapse0x13f0c10() {
   return (neuron0x13e3c20()*-0.0168703);
}

double NNfunction_sb_sLsL::synapse0x13f0c50() {
   return (neuron0x13e3f60()*0.0310128);
}

double NNfunction_sb_sLsL::synapse0x13f0c90() {
   return (neuron0x13e42a0()*0.0175491);
}

double NNfunction_sb_sLsL::synapse0x13f0cd0() {
   return (neuron0x13e45e0()*-0.0331561);
}

double NNfunction_sb_sLsL::synapse0x13f0d10() {
   return (neuron0x13e4920()*-0.00881399);
}

double NNfunction_sb_sLsL::synapse0x13f0d50() {
   return (neuron0x13e4c60()*-0.564402);
}

double NNfunction_sb_sLsL::synapse0x13f0d90() {
   return (neuron0x13e4fa0()*-0.00245036);
}

double NNfunction_sb_sLsL::synapse0x13f0dd0() {
   return (neuron0x13e52e0()*-0.154911);
}

double NNfunction_sb_sLsL::synapse0x13f0e10() {
   return (neuron0x13e5620()*-0.0581031);
}

double NNfunction_sb_sLsL::synapse0x13f08a0() {
   return (neuron0x13e5960()*-0.0728932);
}

double NNfunction_sb_sLsL::synapse0x13f08e0() {
   return (neuron0x13e5ec0()*0.0641398);
}

double NNfunction_sb_sLsL::synapse0x13f0f60() {
   return (neuron0x13e60e0()*0.0319058);
}

double NNfunction_sb_sLsL::synapse0x13f0fa0() {
   return (neuron0x13e6420()*0.0191888);
}

double NNfunction_sb_sLsL::synapse0x13f0fe0() {
   return (neuron0x13e6760()*-0.0652599);
}

double NNfunction_sb_sLsL::synapse0x13f1020() {
   return (neuron0x13e6aa0()*-0.0648802);
}

double NNfunction_sb_sLsL::synapse0x13f1060() {
   return (neuron0x13e6de0()*-0.00889295);
}

double NNfunction_sb_sLsL::synapse0x13f10a0() {
   return (neuron0x13e7120()*-0.0206109);
}

double NNfunction_sb_sLsL::synapse0x13f1420() {
   return (neuron0x13e2560()*0.242824);
}

double NNfunction_sb_sLsL::synapse0x13e2780() {
   return (neuron0x13e28a0()*-0.242424);
}

double NNfunction_sb_sLsL::synapse0x13e27c0() {
   return (neuron0x13e2be0()*-0.0237132);
}

double NNfunction_sb_sLsL::synapse0x13e2ac0() {
   return (neuron0x13e2f20()*0.0659166);
}

double NNfunction_sb_sLsL::synapse0x13e2b00() {
   return (neuron0x13e3260()*-0.181572);
}

double NNfunction_sb_sLsL::synapse0x13e2e00() {
   return (neuron0x13e35a0()*0.0669569);
}

double NNfunction_sb_sLsL::synapse0x13e2e40() {
   return (neuron0x13e38e0()*-0.232888);
}

double NNfunction_sb_sLsL::synapse0x13e3140() {
   return (neuron0x13e3c20()*-0.19024);
}

double NNfunction_sb_sLsL::synapse0x13e3180() {
   return (neuron0x13e3f60()*0.125398);
}

double NNfunction_sb_sLsL::synapse0x13e3480() {
   return (neuron0x13e42a0()*0.202371);
}

double NNfunction_sb_sLsL::synapse0x13e34c0() {
   return (neuron0x13e45e0()*-0.339549);
}

double NNfunction_sb_sLsL::synapse0x13e37c0() {
   return (neuron0x13e4920()*-0.250813);
}

double NNfunction_sb_sLsL::synapse0x13e3800() {
   return (neuron0x13e4c60()*0.088775);
}

double NNfunction_sb_sLsL::synapse0x13e3b00() {
   return (neuron0x13e4fa0()*0.296701);
}

double NNfunction_sb_sLsL::synapse0x13e3b40() {
   return (neuron0x13e52e0()*-0.356136);
}

double NNfunction_sb_sLsL::synapse0x13e3e40() {
   return (neuron0x13e5620()*-0.267001);
}

double NNfunction_sb_sLsL::synapse0x13e3e80() {
   return (neuron0x13e5960()*0.492569);
}

double NNfunction_sb_sLsL::synapse0x13e4180() {
   return (neuron0x13e5ec0()*-0.230345);
}

double NNfunction_sb_sLsL::synapse0x13e41c0() {
   return (neuron0x13e60e0()*0.452951);
}

double NNfunction_sb_sLsL::synapse0x13e44c0() {
   return (neuron0x13e6420()*-0.261111);
}

double NNfunction_sb_sLsL::synapse0x13e4500() {
   return (neuron0x13e6760()*0.0488755);
}

double NNfunction_sb_sLsL::synapse0x13e4800() {
   return (neuron0x13e6aa0()*0.392085);
}

double NNfunction_sb_sLsL::synapse0x13e4840() {
   return (neuron0x13e6de0()*0.266536);
}

double NNfunction_sb_sLsL::synapse0x13e4b40() {
   return (neuron0x13e7120()*-0.24431);
}

double NNfunction_sb_sLsL::synapse0x13e4b80() {
   return (neuron0x13e2560()*0.0375722);
}

double NNfunction_sb_sLsL::synapse0x13e5840() {
   return (neuron0x13e28a0()*-0.0117718);
}

double NNfunction_sb_sLsL::synapse0x13e5880() {
   return (neuron0x13e2be0()*0.289443);
}

double NNfunction_sb_sLsL::synapse0x13f1270() {
   return (neuron0x13e2f20()*-1.21305);
}

double NNfunction_sb_sLsL::synapse0x13f12b0() {
   return (neuron0x13e3260()*0.0583411);
}

double NNfunction_sb_sLsL::synapse0x13e5b80() {
   return (neuron0x13e35a0()*0.062679);
}

double NNfunction_sb_sLsL::synapse0x13e5bc0() {
   return (neuron0x13e38e0()*-0.0402069);
}

double NNfunction_sb_sLsL::synapse0x1193b50() {
   return (neuron0x13e3c20()*-0.0165282);
}

double NNfunction_sb_sLsL::synapse0x1193b90() {
   return (neuron0x13e3f60()*0.044733);
}

double NNfunction_sb_sLsL::synapse0x13e6300() {
   return (neuron0x13e42a0()*-0.0156879);
}

double NNfunction_sb_sLsL::synapse0x13e6340() {
   return (neuron0x13e45e0()*-0.0372349);
}

double NNfunction_sb_sLsL::synapse0x13e6640() {
   return (neuron0x13e4920()*0.0319072);
}

double NNfunction_sb_sLsL::synapse0x13e6680() {
   return (neuron0x13e4c60()*1.15186);
}

double NNfunction_sb_sLsL::synapse0x13e6980() {
   return (neuron0x13e4fa0()*-0.0305311);
}

double NNfunction_sb_sLsL::synapse0x13e69c0() {
   return (neuron0x13e52e0()*-0.0393764);
}

double NNfunction_sb_sLsL::synapse0x13e6cc0() {
   return (neuron0x13e5620()*-0.0316376);
}

double NNfunction_sb_sLsL::synapse0x13e6d00() {
   return (neuron0x13e5960()*0.0675584);
}

double NNfunction_sb_sLsL::synapse0x13e7000() {
   return (neuron0x13e5ec0()*-0.0547662);
}

double NNfunction_sb_sLsL::synapse0x13e7040() {
   return (neuron0x13e60e0()*-0.0860678);
}

double NNfunction_sb_sLsL::synapse0x13e7340() {
   return (neuron0x13e6420()*-0.0352354);
}

double NNfunction_sb_sLsL::synapse0x13e7380() {
   return (neuron0x13e6760()*0.0421802);
}

double NNfunction_sb_sLsL::synapse0x13e4e80() {
   return (neuron0x13e6aa0()*-0.0117556);
}

double NNfunction_sb_sLsL::synapse0x13e4ec0() {
   return (neuron0x13e6de0()*0.00333934);
}

double NNfunction_sb_sLsL::synapse0x13f3190() {
   return (neuron0x13e7120()*-0.0111008);
}

double NNfunction_sb_sLsL::synapse0x13f3510() {
   return (neuron0x13e2560()*0.0881685);
}

double NNfunction_sb_sLsL::synapse0x13f3550() {
   return (neuron0x13e28a0()*-0.128917);
}

double NNfunction_sb_sLsL::synapse0x13f3590() {
   return (neuron0x13e2be0()*-0.417841);
}

double NNfunction_sb_sLsL::synapse0x13f35d0() {
   return (neuron0x13e2f20()*-0.205474);
}

double NNfunction_sb_sLsL::synapse0x13f3610() {
   return (neuron0x13e3260()*-0.112834);
}

double NNfunction_sb_sLsL::synapse0x13f3650() {
   return (neuron0x13e35a0()*-0.189014);
}

double NNfunction_sb_sLsL::synapse0x13f3690() {
   return (neuron0x13e38e0()*0.161356);
}

double NNfunction_sb_sLsL::synapse0x13f36d0() {
   return (neuron0x13e3c20()*0.231865);
}

double NNfunction_sb_sLsL::synapse0x13f3710() {
   return (neuron0x13e3f60()*0.141377);
}

double NNfunction_sb_sLsL::synapse0x13f3750() {
   return (neuron0x13e42a0()*-0.177647);
}

double NNfunction_sb_sLsL::synapse0x13f3790() {
   return (neuron0x13e45e0()*0.371035);
}

double NNfunction_sb_sLsL::synapse0x13f37d0() {
   return (neuron0x13e4920()*-0.0134547);
}

double NNfunction_sb_sLsL::synapse0x13f3810() {
   return (neuron0x13e4c60()*0.125305);
}

double NNfunction_sb_sLsL::synapse0x13f3850() {
   return (neuron0x13e4fa0()*0.373199);
}

double NNfunction_sb_sLsL::synapse0x13f3890() {
   return (neuron0x13e52e0()*-0.103804);
}

double NNfunction_sb_sLsL::synapse0x13f38d0() {
   return (neuron0x13e5620()*-0.0829861);
}

double NNfunction_sb_sLsL::synapse0x13f3360() {
   return (neuron0x13e5960()*-0.128552);
}

double NNfunction_sb_sLsL::synapse0x13f33a0() {
   return (neuron0x13e5ec0()*0.215721);
}

double NNfunction_sb_sLsL::synapse0x13f3a20() {
   return (neuron0x13e60e0()*-0.0351769);
}

double NNfunction_sb_sLsL::synapse0x13f3a60() {
   return (neuron0x13e6420()*0.396385);
}

double NNfunction_sb_sLsL::synapse0x13f3aa0() {
   return (neuron0x13e6760()*-0.131818);
}

double NNfunction_sb_sLsL::synapse0x13f3ae0() {
   return (neuron0x13e6aa0()*0.140672);
}

double NNfunction_sb_sLsL::synapse0x13f3b20() {
   return (neuron0x13e6de0()*-0.239725);
}

double NNfunction_sb_sLsL::synapse0x13f3b60() {
   return (neuron0x13e7120()*-0.0653174);
}

double NNfunction_sb_sLsL::synapse0x13f3ee0() {
   return (neuron0x13e2560()*0.0219785);
}

double NNfunction_sb_sLsL::synapse0x13f3f20() {
   return (neuron0x13e28a0()*0.0669781);
}

double NNfunction_sb_sLsL::synapse0x13f3f60() {
   return (neuron0x13e2be0()*0.239326);
}

double NNfunction_sb_sLsL::synapse0x13f3fa0() {
   return (neuron0x13e2f20()*-0.14923);
}

double NNfunction_sb_sLsL::synapse0x13f3fe0() {
   return (neuron0x13e3260()*-0.345636);
}

double NNfunction_sb_sLsL::synapse0x13f4020() {
   return (neuron0x13e35a0()*-0.00801455);
}

double NNfunction_sb_sLsL::synapse0x13f4060() {
   return (neuron0x13e38e0()*0.112882);
}

double NNfunction_sb_sLsL::synapse0x13f40a0() {
   return (neuron0x13e3c20()*-0.120351);
}

double NNfunction_sb_sLsL::synapse0x13f40e0() {
   return (neuron0x13e3f60()*0.0589347);
}

double NNfunction_sb_sLsL::synapse0x13f4120() {
   return (neuron0x13e42a0()*0.0687739);
}

double NNfunction_sb_sLsL::synapse0x13f4160() {
   return (neuron0x13e45e0()*0.0426908);
}

double NNfunction_sb_sLsL::synapse0x13f41a0() {
   return (neuron0x13e4920()*0.0914987);
}

double NNfunction_sb_sLsL::synapse0x13f41e0() {
   return (neuron0x13e4c60()*-0.629209);
}

double NNfunction_sb_sLsL::synapse0x13f4220() {
   return (neuron0x13e4fa0()*0.0182858);
}

double NNfunction_sb_sLsL::synapse0x13f4260() {
   return (neuron0x13e52e0()*0.0690543);
}

double NNfunction_sb_sLsL::synapse0x13f42a0() {
   return (neuron0x13e5620()*-0.0800057);
}

double NNfunction_sb_sLsL::synapse0x13f3d30() {
   return (neuron0x13e5960()*-0.0993567);
}

double NNfunction_sb_sLsL::synapse0x13f3d70() {
   return (neuron0x13e5ec0()*0.0253987);
}

double NNfunction_sb_sLsL::synapse0x13f43f0() {
   return (neuron0x13e60e0()*-0.0235664);
}

double NNfunction_sb_sLsL::synapse0x13f4430() {
   return (neuron0x13e6420()*0.0695638);
}

double NNfunction_sb_sLsL::synapse0x13f4470() {
   return (neuron0x13e6760()*-0.00337255);
}

double NNfunction_sb_sLsL::synapse0x13f44b0() {
   return (neuron0x13e6aa0()*0.0235816);
}

double NNfunction_sb_sLsL::synapse0x13f44f0() {
   return (neuron0x13e6de0()*-0.00793016);
}

double NNfunction_sb_sLsL::synapse0x13f4530() {
   return (neuron0x13e7120()*0.0347067);
}

double NNfunction_sb_sLsL::synapse0x13f48b0() {
   return (neuron0x13e2560()*0.283202);
}

double NNfunction_sb_sLsL::synapse0x13f48f0() {
   return (neuron0x13e28a0()*-0.11003);
}

double NNfunction_sb_sLsL::synapse0x13f4930() {
   return (neuron0x13e2be0()*0.162391);
}

double NNfunction_sb_sLsL::synapse0x13f4970() {
   return (neuron0x13e2f20()*0.0232976);
}

double NNfunction_sb_sLsL::synapse0x13f49b0() {
   return (neuron0x13e3260()*0.0600665);
}

double NNfunction_sb_sLsL::synapse0x13f49f0() {
   return (neuron0x13e35a0()*-0.478446);
}

double NNfunction_sb_sLsL::synapse0x13f4a30() {
   return (neuron0x13e38e0()*-0.513058);
}

double NNfunction_sb_sLsL::synapse0x13f4a70() {
   return (neuron0x13e3c20()*0.165254);
}

double NNfunction_sb_sLsL::synapse0x13f4ab0() {
   return (neuron0x13e3f60()*-0.33848);
}

double NNfunction_sb_sLsL::synapse0x13f4af0() {
   return (neuron0x13e42a0()*-0.3218);
}

double NNfunction_sb_sLsL::synapse0x13f4b30() {
   return (neuron0x13e45e0()*0.0627851);
}

double NNfunction_sb_sLsL::synapse0x13f4b70() {
   return (neuron0x13e4920()*-0.227152);
}

double NNfunction_sb_sLsL::synapse0x13f4bb0() {
   return (neuron0x13e4c60()*0.352427);
}

double NNfunction_sb_sLsL::synapse0x13f4bf0() {
   return (neuron0x13e4fa0()*-0.137864);
}

double NNfunction_sb_sLsL::synapse0x13f4c30() {
   return (neuron0x13e52e0()*0.374119);
}

double NNfunction_sb_sLsL::synapse0x13f4c70() {
   return (neuron0x13e5620()*-0.39986);
}

double NNfunction_sb_sLsL::synapse0x13f4700() {
   return (neuron0x13e5960()*-0.0379299);
}

double NNfunction_sb_sLsL::synapse0x13f4740() {
   return (neuron0x13e5ec0()*0.055093);
}

double NNfunction_sb_sLsL::synapse0x13f4dc0() {
   return (neuron0x13e60e0()*-0.00162067);
}

double NNfunction_sb_sLsL::synapse0x13f4e00() {
   return (neuron0x13e6420()*-0.312341);
}

double NNfunction_sb_sLsL::synapse0x13f4e40() {
   return (neuron0x13e6760()*-0.0220979);
}

double NNfunction_sb_sLsL::synapse0x13f4e80() {
   return (neuron0x13e6aa0()*-0.18135);
}

double NNfunction_sb_sLsL::synapse0x13f4ec0() {
   return (neuron0x13e6de0()*0.418298);
}

double NNfunction_sb_sLsL::synapse0x13f4f00() {
   return (neuron0x13e7120()*-0.108554);
}

double NNfunction_sb_sLsL::synapse0x13f5280() {
   return (neuron0x13e2560()*-0.00224311);
}

double NNfunction_sb_sLsL::synapse0x13f52c0() {
   return (neuron0x13e28a0()*-0.0145937);
}

double NNfunction_sb_sLsL::synapse0x13f5300() {
   return (neuron0x13e2be0()*0.867451);
}

double NNfunction_sb_sLsL::synapse0x13f5340() {
   return (neuron0x13e2f20()*0.134554);
}

double NNfunction_sb_sLsL::synapse0x13f5380() {
   return (neuron0x13e3260()*0.0253657);
}

double NNfunction_sb_sLsL::synapse0x13f53c0() {
   return (neuron0x13e35a0()*0.00506634);
}

double NNfunction_sb_sLsL::synapse0x13f5400() {
   return (neuron0x13e38e0()*-0.00575422);
}

double NNfunction_sb_sLsL::synapse0x13f5440() {
   return (neuron0x13e3c20()*-0.0117912);
}

double NNfunction_sb_sLsL::synapse0x13f5480() {
   return (neuron0x13e3f60()*-0.00839915);
}

double NNfunction_sb_sLsL::synapse0x13f54c0() {
   return (neuron0x13e42a0()*-0.0154523);
}

double NNfunction_sb_sLsL::synapse0x13f5500() {
   return (neuron0x13e45e0()*0.0226362);
}

double NNfunction_sb_sLsL::synapse0x13f5540() {
   return (neuron0x13e4920()*0.00667796);
}

double NNfunction_sb_sLsL::synapse0x13f5580() {
   return (neuron0x13e4c60()*-0.790382);
}

double NNfunction_sb_sLsL::synapse0x13f55c0() {
   return (neuron0x13e4fa0()*0.0125513);
}

double NNfunction_sb_sLsL::synapse0x13f5600() {
   return (neuron0x13e52e0()*0.0247693);
}

double NNfunction_sb_sLsL::synapse0x13f5640() {
   return (neuron0x13e5620()*0.0267559);
}

double NNfunction_sb_sLsL::synapse0x13f50d0() {
   return (neuron0x13e5960()*-0.00686381);
}

double NNfunction_sb_sLsL::synapse0x13f5110() {
   return (neuron0x13e5ec0()*0.0170175);
}

double NNfunction_sb_sLsL::synapse0x13f5790() {
   return (neuron0x13e60e0()*-0.00427354);
}

double NNfunction_sb_sLsL::synapse0x13f57d0() {
   return (neuron0x13e6420()*0.0264414);
}

double NNfunction_sb_sLsL::synapse0x13f5810() {
   return (neuron0x13e6760()*0.00203518);
}

double NNfunction_sb_sLsL::synapse0x13f5850() {
   return (neuron0x13e6aa0()*-0.00960142);
}

double NNfunction_sb_sLsL::synapse0x13f5890() {
   return (neuron0x13e6de0()*-0.00128085);
}

double NNfunction_sb_sLsL::synapse0x13f58d0() {
   return (neuron0x13e7120()*-0.00590448);
}

double NNfunction_sb_sLsL::synapse0x13f5c50() {
   return (neuron0x13e2560()*0.214763);
}

double NNfunction_sb_sLsL::synapse0x13f5c90() {
   return (neuron0x13e28a0()*0.217847);
}

double NNfunction_sb_sLsL::synapse0x13f5cd0() {
   return (neuron0x13e2be0()*-0.475938);
}

double NNfunction_sb_sLsL::synapse0x13f5d10() {
   return (neuron0x13e2f20()*0.465293);
}

double NNfunction_sb_sLsL::synapse0x13f5d50() {
   return (neuron0x13e3260()*0.0922);
}

double NNfunction_sb_sLsL::synapse0x13f5d90() {
   return (neuron0x13e35a0()*0.0299939);
}

double NNfunction_sb_sLsL::synapse0x13f5dd0() {
   return (neuron0x13e38e0()*0.245618);
}

double NNfunction_sb_sLsL::synapse0x13f5e10() {
   return (neuron0x13e3c20()*0.0073321);
}

double NNfunction_sb_sLsL::synapse0x13f5e50() {
   return (neuron0x13e3f60()*-0.0386146);
}

double NNfunction_sb_sLsL::synapse0x13ee010() {
   return (neuron0x13e42a0()*-0.0910665);
}

double NNfunction_sb_sLsL::synapse0x13ee050() {
   return (neuron0x13e45e0()*0.0226759);
}

double NNfunction_sb_sLsL::synapse0x13ee090() {
   return (neuron0x13e4920()*0.289249);
}

double NNfunction_sb_sLsL::synapse0x13ee0d0() {
   return (neuron0x13e4c60()*0.0239957);
}

double NNfunction_sb_sLsL::synapse0x13ee110() {
   return (neuron0x13e4fa0()*-0.365451);
}

double NNfunction_sb_sLsL::synapse0x13ee150() {
   return (neuron0x13e52e0()*0.212876);
}

double NNfunction_sb_sLsL::synapse0x13ee190() {
   return (neuron0x13e5620()*0.056886);
}

double NNfunction_sb_sLsL::synapse0x13f5aa0() {
   return (neuron0x13e5960()*-0.306456);
}

double NNfunction_sb_sLsL::synapse0x13f5ae0() {
   return (neuron0x13e5ec0()*0.0621877);
}

double NNfunction_sb_sLsL::synapse0x13ee2e0() {
   return (neuron0x13e60e0()*0.194921);
}

double NNfunction_sb_sLsL::synapse0x13ee320() {
   return (neuron0x13e6420()*0.0518462);
}

double NNfunction_sb_sLsL::synapse0x13ee360() {
   return (neuron0x13e6760()*0.0283881);
}

double NNfunction_sb_sLsL::synapse0x13ee3a0() {
   return (neuron0x13e6aa0()*0.293905);
}

double NNfunction_sb_sLsL::synapse0x13ee3e0() {
   return (neuron0x13e6de0()*-0.261863);
}

double NNfunction_sb_sLsL::synapse0x13ee420() {
   return (neuron0x13e7120()*0.070683);
}

double NNfunction_sb_sLsL::synapse0x13ee7a0() {
   return (neuron0x13e2560()*0.0158058);
}

double NNfunction_sb_sLsL::synapse0x13ee7e0() {
   return (neuron0x13e28a0()*0.101811);
}

double NNfunction_sb_sLsL::synapse0x13ee820() {
   return (neuron0x13e2be0()*0.214986);
}

double NNfunction_sb_sLsL::synapse0x13ee860() {
   return (neuron0x13e2f20()*-0.385656);
}

double NNfunction_sb_sLsL::synapse0x13ee8a0() {
   return (neuron0x13e3260()*0.202304);
}

double NNfunction_sb_sLsL::synapse0x13ee8e0() {
   return (neuron0x13e35a0()*-0.209157);
}

double NNfunction_sb_sLsL::synapse0x13ee920() {
   return (neuron0x13e38e0()*0.0282093);
}

double NNfunction_sb_sLsL::synapse0x13ee960() {
   return (neuron0x13e3c20()*-0.0948986);
}

double NNfunction_sb_sLsL::synapse0x13ee9a0() {
   return (neuron0x13e3f60()*-0.506691);
}

double NNfunction_sb_sLsL::synapse0x13ee9e0() {
   return (neuron0x13e42a0()*-0.106672);
}

double NNfunction_sb_sLsL::synapse0x13eea20() {
   return (neuron0x13e45e0()*-0.300258);
}

double NNfunction_sb_sLsL::synapse0x13eea60() {
   return (neuron0x13e4920()*-0.232851);
}

double NNfunction_sb_sLsL::synapse0x13eeaa0() {
   return (neuron0x13e4c60()*0.0620587);
}

double NNfunction_sb_sLsL::synapse0x13eeae0() {
   return (neuron0x13e4fa0()*0.253682);
}

double NNfunction_sb_sLsL::synapse0x13eeb20() {
   return (neuron0x13e52e0()*-0.128543);
}

double NNfunction_sb_sLsL::synapse0x13eeb60() {
   return (neuron0x13e5620()*-0.150803);
}

double NNfunction_sb_sLsL::synapse0x13ee5f0() {
   return (neuron0x13e5960()*0.328132);
}

double NNfunction_sb_sLsL::synapse0x13ee630() {
   return (neuron0x13e5ec0()*-0.106022);
}

double NNfunction_sb_sLsL::synapse0x13eecb0() {
   return (neuron0x13e60e0()*-0.0443447);
}

double NNfunction_sb_sLsL::synapse0x13eecf0() {
   return (neuron0x13e6420()*0.0869527);
}

double NNfunction_sb_sLsL::synapse0x13eed30() {
   return (neuron0x13e6760()*-0.0590086);
}

double NNfunction_sb_sLsL::synapse0x13eed70() {
   return (neuron0x13e6aa0()*0.227719);
}

double NNfunction_sb_sLsL::synapse0x13eedb0() {
   return (neuron0x13e6de0()*0.0653508);
}

double NNfunction_sb_sLsL::synapse0x13eedf0() {
   return (neuron0x13e7120()*-0.0617206);
}

double NNfunction_sb_sLsL::synapse0x13eefc0() {
   return (neuron0x13e2560()*0.00605761);
}

double NNfunction_sb_sLsL::synapse0x13f8050() {
   return (neuron0x13e28a0()*-0.0143005);
}

double NNfunction_sb_sLsL::synapse0x13f8090() {
   return (neuron0x13e2be0()*-0.0410959);
}

double NNfunction_sb_sLsL::synapse0x13f80d0() {
   return (neuron0x13e2f20()*0.141028);
}

double NNfunction_sb_sLsL::synapse0x13f8110() {
   return (neuron0x13e3260()*-0.0166182);
}

double NNfunction_sb_sLsL::synapse0x13f8150() {
   return (neuron0x13e35a0()*0.00117453);
}

double NNfunction_sb_sLsL::synapse0x13f8190() {
   return (neuron0x13e38e0()*0.0171763);
}

double NNfunction_sb_sLsL::synapse0x13f81d0() {
   return (neuron0x13e3c20()*0.00399927);
}

double NNfunction_sb_sLsL::synapse0x13f8210() {
   return (neuron0x13e3f60()*-0.090547);
}

double NNfunction_sb_sLsL::synapse0x13f8250() {
   return (neuron0x13e42a0()*0.226021);
}

double NNfunction_sb_sLsL::synapse0x13f8290() {
   return (neuron0x13e45e0()*-0.0549147);
}

double NNfunction_sb_sLsL::synapse0x13f82d0() {
   return (neuron0x13e4920()*0.0122511);
}

double NNfunction_sb_sLsL::synapse0x13f8310() {
   return (neuron0x13e4c60()*-0.470177);
}

double NNfunction_sb_sLsL::synapse0x13f8350() {
   return (neuron0x13e4fa0()*-0.0370568);
}

double NNfunction_sb_sLsL::synapse0x13f8390() {
   return (neuron0x13e52e0()*0.0406844);
}

double NNfunction_sb_sLsL::synapse0x13f83d0() {
   return (neuron0x13e5620()*0.00550926);
}

double NNfunction_sb_sLsL::synapse0x13f7ea0() {
   return (neuron0x13e5960()*-0.0213807);
}

double NNfunction_sb_sLsL::synapse0x13f7ee0() {
   return (neuron0x13e5ec0()*-0.0231837);
}

double NNfunction_sb_sLsL::synapse0x13f8520() {
   return (neuron0x13e60e0()*-0.0102368);
}

double NNfunction_sb_sLsL::synapse0x13f8560() {
   return (neuron0x13e6420()*-0.0255907);
}

double NNfunction_sb_sLsL::synapse0x13f85a0() {
   return (neuron0x13e6760()*-0.0128585);
}

double NNfunction_sb_sLsL::synapse0x13f85e0() {
   return (neuron0x13e6aa0()*0.000960741);
}

double NNfunction_sb_sLsL::synapse0x13f8620() {
   return (neuron0x13e6de0()*0.00482377);
}

double NNfunction_sb_sLsL::synapse0x13f8660() {
   return (neuron0x13e7120()*0.02023);
}

double NNfunction_sb_sLsL::synapse0x13f89e0() {
   return (neuron0x13e2560()*-0.0142336);
}

double NNfunction_sb_sLsL::synapse0x13f8a20() {
   return (neuron0x13e28a0()*0.0372777);
}

double NNfunction_sb_sLsL::synapse0x13f8a60() {
   return (neuron0x13e2be0()*-0.350093);
}

double NNfunction_sb_sLsL::synapse0x13f8aa0() {
   return (neuron0x13e2f20()*0.216219);
}

double NNfunction_sb_sLsL::synapse0x13f8ae0() {
   return (neuron0x13e3260()*-0.0512812);
}

double NNfunction_sb_sLsL::synapse0x13f8b20() {
   return (neuron0x13e35a0()*-0.027091);
}

double NNfunction_sb_sLsL::synapse0x13f8b60() {
   return (neuron0x13e38e0()*-0.0108363);
}

double NNfunction_sb_sLsL::synapse0x13f8ba0() {
   return (neuron0x13e3c20()*0.0548517);
}

double NNfunction_sb_sLsL::synapse0x13f8be0() {
   return (neuron0x13e3f60()*0.0385985);
}

double NNfunction_sb_sLsL::synapse0x13f8c20() {
   return (neuron0x13e42a0()*0.0508873);
}

double NNfunction_sb_sLsL::synapse0x13f8c60() {
   return (neuron0x13e45e0()*-0.177847);
}

double NNfunction_sb_sLsL::synapse0x13f8ca0() {
   return (neuron0x13e4920()*-0.00191532);
}

double NNfunction_sb_sLsL::synapse0x13f8ce0() {
   return (neuron0x13e4c60()*0.105991);
}

double NNfunction_sb_sLsL::synapse0x13f8d20() {
   return (neuron0x13e4fa0()*0.0291972);
}

double NNfunction_sb_sLsL::synapse0x13f8d60() {
   return (neuron0x13e52e0()*-0.0755477);
}

double NNfunction_sb_sLsL::synapse0x13f8da0() {
   return (neuron0x13e5620()*-0.0485457);
}

double NNfunction_sb_sLsL::synapse0x13f8830() {
   return (neuron0x13e5960()*0.0317705);
}

double NNfunction_sb_sLsL::synapse0x13f8870() {
   return (neuron0x13e5ec0()*-0.00082762);
}

double NNfunction_sb_sLsL::synapse0x13f8ef0() {
   return (neuron0x13e60e0()*-0.00186785);
}

double NNfunction_sb_sLsL::synapse0x13f8f30() {
   return (neuron0x13e6420()*-0.00933579);
}

double NNfunction_sb_sLsL::synapse0x13f8f70() {
   return (neuron0x13e6760()*-0.00334143);
}

double NNfunction_sb_sLsL::synapse0x13f8fb0() {
   return (neuron0x13e6aa0()*0.0575675);
}

double NNfunction_sb_sLsL::synapse0x13f8ff0() {
   return (neuron0x13e6de0()*-0.0342117);
}

double NNfunction_sb_sLsL::synapse0x13f9030() {
   return (neuron0x13e7120()*-0.0133764);
}

double NNfunction_sb_sLsL::synapse0x13f93b0() {
   return (neuron0x13e2560()*0.00866295);
}

double NNfunction_sb_sLsL::synapse0x13f93f0() {
   return (neuron0x13e28a0()*-0.00411088);
}

double NNfunction_sb_sLsL::synapse0x13f9430() {
   return (neuron0x13e2be0()*0.0581051);
}

double NNfunction_sb_sLsL::synapse0x13f9470() {
   return (neuron0x13e2f20()*-0.0469495);
}

double NNfunction_sb_sLsL::synapse0x13f94b0() {
   return (neuron0x13e3260()*-0.0019971);
}

double NNfunction_sb_sLsL::synapse0x13f94f0() {
   return (neuron0x13e35a0()*-0.000875193);
}

double NNfunction_sb_sLsL::synapse0x13f9530() {
   return (neuron0x13e38e0()*-0.0145399);
}

double NNfunction_sb_sLsL::synapse0x13f9570() {
   return (neuron0x13e3c20()*-0.00721215);
}

double NNfunction_sb_sLsL::synapse0x13f95b0() {
   return (neuron0x13e3f60()*0.00289741);
}

double NNfunction_sb_sLsL::synapse0x13f95f0() {
   return (neuron0x13e42a0()*-0.0220551);
}

double NNfunction_sb_sLsL::synapse0x13f9630() {
   return (neuron0x13e45e0()*0.0345204);
}

double NNfunction_sb_sLsL::synapse0x13f9670() {
   return (neuron0x13e4920()*-0.0291298);
}

double NNfunction_sb_sLsL::synapse0x13f96b0() {
   return (neuron0x13e4c60()*-1.97286);
}

double NNfunction_sb_sLsL::synapse0x13f96f0() {
   return (neuron0x13e4fa0()*-0.0279873);
}

double NNfunction_sb_sLsL::synapse0x13f9730() {
   return (neuron0x13e52e0()*0.00200932);
}

double NNfunction_sb_sLsL::synapse0x13f9770() {
   return (neuron0x13e5620()*-0.0222941);
}

double NNfunction_sb_sLsL::synapse0x13f9200() {
   return (neuron0x13e5960()*-0.0198613);
}

double NNfunction_sb_sLsL::synapse0x13f9240() {
   return (neuron0x13e5ec0()*-0.0201535);
}

double NNfunction_sb_sLsL::synapse0x13f98c0() {
   return (neuron0x13e60e0()*-0.0211022);
}

double NNfunction_sb_sLsL::synapse0x13f9900() {
   return (neuron0x13e6420()*-0.0335347);
}

double NNfunction_sb_sLsL::synapse0x13f9940() {
   return (neuron0x13e6760()*0.0120073);
}

double NNfunction_sb_sLsL::synapse0x13f9980() {
   return (neuron0x13e6aa0()*0.00332736);
}

double NNfunction_sb_sLsL::synapse0x13f99c0() {
   return (neuron0x13e6de0()*0.00283532);
}

double NNfunction_sb_sLsL::synapse0x13f9a00() {
   return (neuron0x13e7120()*0.0116816);
}

double NNfunction_sb_sLsL::synapse0x13f9d80() {
   return (neuron0x13e2560()*0.0388643);
}

double NNfunction_sb_sLsL::synapse0x13f9dc0() {
   return (neuron0x13e28a0()*-0.0286833);
}

double NNfunction_sb_sLsL::synapse0x13f9e00() {
   return (neuron0x13e2be0()*-0.0343706);
}

double NNfunction_sb_sLsL::synapse0x13f9e40() {
   return (neuron0x13e2f20()*0.283554);
}

double NNfunction_sb_sLsL::synapse0x13f9e80() {
   return (neuron0x13e3260()*0.155747);
}

double NNfunction_sb_sLsL::synapse0x13f9ec0() {
   return (neuron0x13e35a0()*0.172268);
}

double NNfunction_sb_sLsL::synapse0x13f9f00() {
   return (neuron0x13e38e0()*-0.000978425);
}

double NNfunction_sb_sLsL::synapse0x13f9f40() {
   return (neuron0x13e3c20()*-0.0546125);
}

double NNfunction_sb_sLsL::synapse0x13f9f80() {
   return (neuron0x13e3f60()*0.0413026);
}

double NNfunction_sb_sLsL::synapse0x13f9fc0() {
   return (neuron0x13e42a0()*-0.0216226);
}

double NNfunction_sb_sLsL::synapse0x13fa000() {
   return (neuron0x13e45e0()*-0.052682);
}

double NNfunction_sb_sLsL::synapse0x13fa040() {
   return (neuron0x13e4920()*0.379535);
}

double NNfunction_sb_sLsL::synapse0x13fa080() {
   return (neuron0x13e4c60()*-0.421191);
}

double NNfunction_sb_sLsL::synapse0x13fa0c0() {
   return (neuron0x13e4fa0()*-0.252308);
}

double NNfunction_sb_sLsL::synapse0x13fa100() {
   return (neuron0x13e52e0()*0.0452704);
}

double NNfunction_sb_sLsL::synapse0x13fa140() {
   return (neuron0x13e5620()*-0.269914);
}

double NNfunction_sb_sLsL::synapse0x13f9bd0() {
   return (neuron0x13e5960()*-0.28863);
}

double NNfunction_sb_sLsL::synapse0x13f9c10() {
   return (neuron0x13e5ec0()*0.135374);
}

double NNfunction_sb_sLsL::synapse0x13fa290() {
   return (neuron0x13e60e0()*0.110555);
}

double NNfunction_sb_sLsL::synapse0x13fa2d0() {
   return (neuron0x13e6420()*0.0746762);
}

double NNfunction_sb_sLsL::synapse0x13fa310() {
   return (neuron0x13e6760()*0.0464195);
}

double NNfunction_sb_sLsL::synapse0x13fa350() {
   return (neuron0x13e6aa0()*0.0443851);
}

double NNfunction_sb_sLsL::synapse0x13fa390() {
   return (neuron0x13e6de0()*-0.0554978);
}

double NNfunction_sb_sLsL::synapse0x13fa3d0() {
   return (neuron0x13e7120()*0.0114053);
}

double NNfunction_sb_sLsL::synapse0x13fa750() {
   return (neuron0x13e2560()*-0.000695928);
}

double NNfunction_sb_sLsL::synapse0x13fa790() {
   return (neuron0x13e28a0()*-0.0051161);
}

double NNfunction_sb_sLsL::synapse0x13fa7d0() {
   return (neuron0x13e2be0()*-0.0346605);
}

double NNfunction_sb_sLsL::synapse0x13fa810() {
   return (neuron0x13e2f20()*0.735774);
}

double NNfunction_sb_sLsL::synapse0x13fa850() {
   return (neuron0x13e3260()*0.0478854);
}

double NNfunction_sb_sLsL::synapse0x13fa890() {
   return (neuron0x13e35a0()*0.0478999);
}

double NNfunction_sb_sLsL::synapse0x13fa8d0() {
   return (neuron0x13e38e0()*-0.00407666);
}

double NNfunction_sb_sLsL::synapse0x13fa910() {
   return (neuron0x13e3c20()*-0.0039657);
}

double NNfunction_sb_sLsL::synapse0x13fa950() {
   return (neuron0x13e3f60()*0.0155617);
}

double NNfunction_sb_sLsL::synapse0x13fa990() {
   return (neuron0x13e42a0()*0.0224918);
}

double NNfunction_sb_sLsL::synapse0x13fa9d0() {
   return (neuron0x13e45e0()*-0.0226694);
}

double NNfunction_sb_sLsL::synapse0x13faa10() {
   return (neuron0x13e4920()*0.214922);
}

double NNfunction_sb_sLsL::synapse0x13faa50() {
   return (neuron0x13e4c60()*-0.907896);
}

double NNfunction_sb_sLsL::synapse0x13faa90() {
   return (neuron0x13e4fa0()*-0.238457);
}

double NNfunction_sb_sLsL::synapse0x13faad0() {
   return (neuron0x13e52e0()*0.136741);
}

double NNfunction_sb_sLsL::synapse0x13fab10() {
   return (neuron0x13e5620()*0.336038);
}

double NNfunction_sb_sLsL::synapse0x13fa5a0() {
   return (neuron0x13e5960()*-0.28045);
}

double NNfunction_sb_sLsL::synapse0x13fa5e0() {
   return (neuron0x13e5ec0()*0.0851424);
}

double NNfunction_sb_sLsL::synapse0x13fac60() {
   return (neuron0x13e60e0()*0.0747318);
}

double NNfunction_sb_sLsL::synapse0x13faca0() {
   return (neuron0x13e6420()*0.133735);
}

double NNfunction_sb_sLsL::synapse0x13face0() {
   return (neuron0x13e6760()*0.0391755);
}

double NNfunction_sb_sLsL::synapse0x13fad20() {
   return (neuron0x13e6aa0()*-0.0134326);
}

double NNfunction_sb_sLsL::synapse0x13fad60() {
   return (neuron0x13e6de0()*0.0363007);
}

double NNfunction_sb_sLsL::synapse0x13fada0() {
   return (neuron0x13e7120()*0.0279227);
}

double NNfunction_sb_sLsL::synapse0x13fb120() {
   return (neuron0x13e2560()*-0.00149106);
}

double NNfunction_sb_sLsL::synapse0x13fb160() {
   return (neuron0x13e28a0()*-0.00787283);
}

double NNfunction_sb_sLsL::synapse0x13fb1a0() {
   return (neuron0x13e2be0()*0.0930015);
}

double NNfunction_sb_sLsL::synapse0x13fb1e0() {
   return (neuron0x13e2f20()*-2.85981);
}

double NNfunction_sb_sLsL::synapse0x13fb220() {
   return (neuron0x13e3260()*0.00151462);
}

double NNfunction_sb_sLsL::synapse0x13fb260() {
   return (neuron0x13e35a0()*0.00786259);
}

double NNfunction_sb_sLsL::synapse0x13fb2a0() {
   return (neuron0x13e38e0()*0.00993056);
}

double NNfunction_sb_sLsL::synapse0x13fb2e0() {
   return (neuron0x13e3c20()*-0.00434952);
}

double NNfunction_sb_sLsL::synapse0x13fb320() {
   return (neuron0x13e3f60()*-0.012785);
}

double NNfunction_sb_sLsL::synapse0x13fb360() {
   return (neuron0x13e42a0()*-0.00371886);
}

double NNfunction_sb_sLsL::synapse0x13fb3a0() {
   return (neuron0x13e45e0()*0.00092609);
}

double NNfunction_sb_sLsL::synapse0x13fb3e0() {
   return (neuron0x13e4920()*0.0174894);
}

double NNfunction_sb_sLsL::synapse0x13fb420() {
   return (neuron0x13e4c60()*-0.599462);
}

double NNfunction_sb_sLsL::synapse0x13fb460() {
   return (neuron0x13e4fa0()*-0.00508225);
}

double NNfunction_sb_sLsL::synapse0x13fb4a0() {
   return (neuron0x13e52e0()*0.0262556);
}

double NNfunction_sb_sLsL::synapse0x13fb4e0() {
   return (neuron0x13e5620()*0.0245299);
}

double NNfunction_sb_sLsL::synapse0x13faf70() {
   return (neuron0x13e5960()*0.000157935);
}

double NNfunction_sb_sLsL::synapse0x13fafb0() {
   return (neuron0x13e5ec0()*-0.00517429);
}

double NNfunction_sb_sLsL::synapse0x13fb630() {
   return (neuron0x13e60e0()*-0.000305112);
}

double NNfunction_sb_sLsL::synapse0x13fb670() {
   return (neuron0x13e6420()*0.00957454);
}

double NNfunction_sb_sLsL::synapse0x13fb6b0() {
   return (neuron0x13e6760()*-0.00161314);
}

double NNfunction_sb_sLsL::synapse0x13fb6f0() {
   return (neuron0x13e6aa0()*0.00875805);
}

double NNfunction_sb_sLsL::synapse0x13fb730() {
   return (neuron0x13e6de0()*0.0032523);
}

double NNfunction_sb_sLsL::synapse0x13fb770() {
   return (neuron0x13e7120()*0.0139338);
}

double NNfunction_sb_sLsL::synapse0x13fbaf0() {
   return (neuron0x13e2560()*-0.082565);
}

double NNfunction_sb_sLsL::synapse0x13fbb30() {
   return (neuron0x13e28a0()*0.0921123);
}

double NNfunction_sb_sLsL::synapse0x13fbb70() {
   return (neuron0x13e2be0()*-0.0839617);
}

double NNfunction_sb_sLsL::synapse0x13fbbb0() {
   return (neuron0x13e2f20()*-0.632715);
}

double NNfunction_sb_sLsL::synapse0x13fbbf0() {
   return (neuron0x13e3260()*0.127708);
}

double NNfunction_sb_sLsL::synapse0x13fbc30() {
   return (neuron0x13e35a0()*-0.076036);
}

double NNfunction_sb_sLsL::synapse0x13fbc70() {
   return (neuron0x13e38e0()*-0.172016);
}

double NNfunction_sb_sLsL::synapse0x13fbcb0() {
   return (neuron0x13e3c20()*-0.121585);
}

double NNfunction_sb_sLsL::synapse0x13fbcf0() {
   return (neuron0x13e3f60()*-0.00225397);
}

double NNfunction_sb_sLsL::synapse0x13fbd30() {
   return (neuron0x13e42a0()*-0.0112709);
}

double NNfunction_sb_sLsL::synapse0x13fbd70() {
   return (neuron0x13e45e0()*0.0297379);
}

double NNfunction_sb_sLsL::synapse0x13fbdb0() {
   return (neuron0x13e4920()*-0.0228778);
}

double NNfunction_sb_sLsL::synapse0x13fbdf0() {
   return (neuron0x13e4c60()*0.125075);
}

double NNfunction_sb_sLsL::synapse0x13fbe30() {
   return (neuron0x13e4fa0()*-0.0532766);
}

double NNfunction_sb_sLsL::synapse0x13fbe70() {
   return (neuron0x13e52e0()*-0.113135);
}

double NNfunction_sb_sLsL::synapse0x13fbeb0() {
   return (neuron0x13e5620()*-0.185702);
}

double NNfunction_sb_sLsL::synapse0x13fb940() {
   return (neuron0x13e5960()*-0.224137);
}

double NNfunction_sb_sLsL::synapse0x13fb980() {
   return (neuron0x13e5ec0()*0.062927);
}

double NNfunction_sb_sLsL::synapse0x13fc000() {
   return (neuron0x13e60e0()*0.0314985);
}

double NNfunction_sb_sLsL::synapse0x13fc040() {
   return (neuron0x13e6420()*0.140511);
}

double NNfunction_sb_sLsL::synapse0x13fc080() {
   return (neuron0x13e6760()*-0.0174774);
}

double NNfunction_sb_sLsL::synapse0x13fc0c0() {
   return (neuron0x13e6aa0()*-0.0343736);
}

double NNfunction_sb_sLsL::synapse0x13fc100() {
   return (neuron0x13e6de0()*-0.0133532);
}

double NNfunction_sb_sLsL::synapse0x13fc140() {
   return (neuron0x13e7120()*-0.00953459);
}

double NNfunction_sb_sLsL::synapse0x13fc4c0() {
   return (neuron0x13e2560()*-0.0632527);
}

double NNfunction_sb_sLsL::synapse0x13fc500() {
   return (neuron0x13e28a0()*0.0355309);
}

double NNfunction_sb_sLsL::synapse0x13fc540() {
   return (neuron0x13e2be0()*0.309677);
}

double NNfunction_sb_sLsL::synapse0x13fc580() {
   return (neuron0x13e2f20()*1.12177);
}

double NNfunction_sb_sLsL::synapse0x13fc5c0() {
   return (neuron0x13e3260()*0.0828439);
}

double NNfunction_sb_sLsL::synapse0x13fc600() {
   return (neuron0x13e35a0()*0.117548);
}

double NNfunction_sb_sLsL::synapse0x13fc640() {
   return (neuron0x13e38e0()*0.15236);
}

double NNfunction_sb_sLsL::synapse0x13fc680() {
   return (neuron0x13e3c20()*-0.0604326);
}

double NNfunction_sb_sLsL::synapse0x13fc6c0() {
   return (neuron0x13e3f60()*-0.0677543);
}

double NNfunction_sb_sLsL::synapse0x13fc700() {
   return (neuron0x13e42a0()*0.00434322);
}

double NNfunction_sb_sLsL::synapse0x13fc740() {
   return (neuron0x13e45e0()*0.0334629);
}

double NNfunction_sb_sLsL::synapse0x13fc780() {
   return (neuron0x13e4920()*-0.243359);
}

double NNfunction_sb_sLsL::synapse0x13fc7c0() {
   return (neuron0x13e4c60()*0.561579);
}

double NNfunction_sb_sLsL::synapse0x13fc800() {
   return (neuron0x13e4fa0()*0.0323597);
}

double NNfunction_sb_sLsL::synapse0x13fc840() {
   return (neuron0x13e52e0()*-0.0346187);
}

double NNfunction_sb_sLsL::synapse0x13fc880() {
   return (neuron0x13e5620()*-0.0871853);
}

double NNfunction_sb_sLsL::synapse0x13fc310() {
   return (neuron0x13e5960()*0.0807425);
}

double NNfunction_sb_sLsL::synapse0x13fc350() {
   return (neuron0x13e5ec0()*-0.201178);
}

double NNfunction_sb_sLsL::synapse0x13fc9d0() {
   return (neuron0x13e60e0()*-0.181084);
}

double NNfunction_sb_sLsL::synapse0x13fca10() {
   return (neuron0x13e6420()*-0.00456445);
}

double NNfunction_sb_sLsL::synapse0x13fca50() {
   return (neuron0x13e6760()*0.016372);
}

double NNfunction_sb_sLsL::synapse0x13fca90() {
   return (neuron0x13e6aa0()*0.0135926);
}

double NNfunction_sb_sLsL::synapse0x13fcad0() {
   return (neuron0x13e6de0()*-0.0308862);
}

double NNfunction_sb_sLsL::synapse0x13fcb10() {
   return (neuron0x13e7120()*0.0747356);
}

double NNfunction_sb_sLsL::synapse0x13fce90() {
   return (neuron0x13e2560()*-0.0221984);
}

double NNfunction_sb_sLsL::synapse0x13f1460() {
   return (neuron0x13e28a0()*-0.011988);
}

double NNfunction_sb_sLsL::synapse0x13f14a0() {
   return (neuron0x13e2be0()*0.0750786);
}

double NNfunction_sb_sLsL::synapse0x13f14e0() {
   return (neuron0x13e2f20()*1.37825);
}

double NNfunction_sb_sLsL::synapse0x13f1730() {
   return (neuron0x13e3260()*0.00903051);
}

double NNfunction_sb_sLsL::synapse0x13f1770() {
   return (neuron0x13e35a0()*0.00647683);
}

double NNfunction_sb_sLsL::synapse0x13f17b0() {
   return (neuron0x13e38e0()*0.0276728);
}

double NNfunction_sb_sLsL::synapse0x13f1a00() {
   return (neuron0x13e3c20()*0.0345773);
}

double NNfunction_sb_sLsL::synapse0x13f1a40() {
   return (neuron0x13e3f60()*0.00407699);
}

double NNfunction_sb_sLsL::synapse0x13f1c90() {
   return (neuron0x13e42a0()*0.00571599);
}

double NNfunction_sb_sLsL::synapse0x13f1cd0() {
   return (neuron0x13e45e0()*-0.00395509);
}

double NNfunction_sb_sLsL::synapse0x13f1d10() {
   return (neuron0x13e4920()*0.0231221);
}

double NNfunction_sb_sLsL::synapse0x13f1f60() {
   return (neuron0x13e4c60()*-3.9642);
}

double NNfunction_sb_sLsL::synapse0x13f1fa0() {
   return (neuron0x13e4fa0()*-0.0562716);
}

double NNfunction_sb_sLsL::synapse0x13f21f0() {
   return (neuron0x13e52e0()*0.0257464);
}

double NNfunction_sb_sLsL::synapse0x13f2230() {
   return (neuron0x13e5620()*0.0245282);
}

double NNfunction_sb_sLsL::synapse0x13fcce0() {
   return (neuron0x13e5960()*-0.0701092);
}

double NNfunction_sb_sLsL::synapse0x13fcd20() {
   return (neuron0x13e5ec0()*0.00486551);
}

double NNfunction_sb_sLsL::synapse0x13f2380() {
   return (neuron0x13e60e0()*0.0204259);
}

double NNfunction_sb_sLsL::synapse0x13f2890() {
   return (neuron0x13e6420()*0.00359009);
}

double NNfunction_sb_sLsL::synapse0x13f28d0() {
   return (neuron0x13e6760()*-0.0110734);
}

double NNfunction_sb_sLsL::synapse0x13f2910() {
   return (neuron0x13e6aa0()*-0.00635057);
}

double NNfunction_sb_sLsL::synapse0x13f2b60() {
   return (neuron0x13e6de0()*-0.00572091);
}

double NNfunction_sb_sLsL::synapse0x13f2ba0() {
   return (neuron0x13e7120()*0.0188191);
}

double NNfunction_sb_sLsL::synapse0x13f2450() {
   return (neuron0x13e2560()*0.0170893);
}

double NNfunction_sb_sLsL::synapse0x13f2490() {
   return (neuron0x13e28a0()*-0.0371742);
}

double NNfunction_sb_sLsL::synapse0x13f24d0() {
   return (neuron0x13e2be0()*-0.0908767);
}

double NNfunction_sb_sLsL::synapse0x13f2510() {
   return (neuron0x13e2f20()*-0.538568);
}

double NNfunction_sb_sLsL::synapse0x13f2e90() {
   return (neuron0x13e3260()*0.0479499);
}

double NNfunction_sb_sLsL::synapse0x13ff1e0() {
   return (neuron0x13e35a0()*-0.0243346);
}

double NNfunction_sb_sLsL::synapse0x13ff220() {
   return (neuron0x13e38e0()*-0.00255307);
}

double NNfunction_sb_sLsL::synapse0x13ff260() {
   return (neuron0x13e3c20()*-0.0140387);
}

double NNfunction_sb_sLsL::synapse0x13ff2a0() {
   return (neuron0x13e3f60()*0.0232495);
}

double NNfunction_sb_sLsL::synapse0x13ff2e0() {
   return (neuron0x13e42a0()*-0.0174953);
}

double NNfunction_sb_sLsL::synapse0x13ff320() {
   return (neuron0x13e45e0()*-0.00437445);
}

double NNfunction_sb_sLsL::synapse0x13ff360() {
   return (neuron0x13e4920()*0.371014);
}

double NNfunction_sb_sLsL::synapse0x13ff3a0() {
   return (neuron0x13e4c60()*-0.297125);
}

double NNfunction_sb_sLsL::synapse0x13ff3e0() {
   return (neuron0x13e4fa0()*-0.0869273);
}

double NNfunction_sb_sLsL::synapse0x13ff420() {
   return (neuron0x13e52e0()*0.250258);
}

double NNfunction_sb_sLsL::synapse0x13ff460() {
   return (neuron0x13e5620()*0.125891);
}

double NNfunction_sb_sLsL::synapse0x13f2d70() {
   return (neuron0x13e5960()*-0.0828007);
}

double NNfunction_sb_sLsL::synapse0x13f2db0() {
   return (neuron0x13e5ec0()*0.164263);
}

double NNfunction_sb_sLsL::synapse0x13ff5b0() {
   return (neuron0x13e60e0()*0.175223);
}

double NNfunction_sb_sLsL::synapse0x13ff5f0() {
   return (neuron0x13e6420()*0.0406053);
}

double NNfunction_sb_sLsL::synapse0x13ff630() {
   return (neuron0x13e6760()*0.00631539);
}

double NNfunction_sb_sLsL::synapse0x13ff670() {
   return (neuron0x13e6aa0()*-0.0102107);
}

double NNfunction_sb_sLsL::synapse0x13ff6b0() {
   return (neuron0x13e6de0()*0.00147505);
}

double NNfunction_sb_sLsL::synapse0x13ff6f0() {
   return (neuron0x13e7120()*0.00504066);
}

double NNfunction_sb_sLsL::synapse0x13ffa70() {
   return (neuron0x13e2560()*0.00100598);
}

double NNfunction_sb_sLsL::synapse0x13ffab0() {
   return (neuron0x13e28a0()*0.0136581);
}

double NNfunction_sb_sLsL::synapse0x13ffaf0() {
   return (neuron0x13e2be0()*-0.0597585);
}

double NNfunction_sb_sLsL::synapse0x13ffb30() {
   return (neuron0x13e2f20()*-1.25153);
}

double NNfunction_sb_sLsL::synapse0x13ffb70() {
   return (neuron0x13e3260()*0.0312083);
}

double NNfunction_sb_sLsL::synapse0x13ffbb0() {
   return (neuron0x13e35a0()*0.022175);
}

double NNfunction_sb_sLsL::synapse0x13ffbf0() {
   return (neuron0x13e38e0()*0.066526);
}

double NNfunction_sb_sLsL::synapse0x13ffc30() {
   return (neuron0x13e3c20()*0.00654433);
}

double NNfunction_sb_sLsL::synapse0x13ffc70() {
   return (neuron0x13e3f60()*-0.0111605);
}

double NNfunction_sb_sLsL::synapse0x13ffcb0() {
   return (neuron0x13e42a0()*-0.013833);
}

double NNfunction_sb_sLsL::synapse0x13ffcf0() {
   return (neuron0x13e45e0()*0.00203819);
}

double NNfunction_sb_sLsL::synapse0x13ffd30() {
   return (neuron0x13e4920()*0.0922439);
}

double NNfunction_sb_sLsL::synapse0x13ffd70() {
   return (neuron0x13e4c60()*0.0840992);
}

double NNfunction_sb_sLsL::synapse0x13ffdb0() {
   return (neuron0x13e4fa0()*-0.0391441);
}

double NNfunction_sb_sLsL::synapse0x13ffdf0() {
   return (neuron0x13e52e0()*-0.157821);
}

double NNfunction_sb_sLsL::synapse0x13ffe30() {
   return (neuron0x13e5620()*0.347931);
}

double NNfunction_sb_sLsL::synapse0x13ff8c0() {
   return (neuron0x13e5960()*-0.0664145);
}

double NNfunction_sb_sLsL::synapse0x13ff900() {
   return (neuron0x13e5ec0()*0.0254335);
}

double NNfunction_sb_sLsL::synapse0x13fff80() {
   return (neuron0x13e60e0()*0.00811972);
}

double NNfunction_sb_sLsL::synapse0x13fffc0() {
   return (neuron0x13e6420()*-0.0201838);
}

double NNfunction_sb_sLsL::synapse0x1400000() {
   return (neuron0x13e6760()*-0.0106563);
}

double NNfunction_sb_sLsL::synapse0x1400040() {
   return (neuron0x13e6aa0()*-0.00879514);
}

double NNfunction_sb_sLsL::synapse0x1400080() {
   return (neuron0x13e6de0()*-0.0304902);
}

double NNfunction_sb_sLsL::synapse0x14000c0() {
   return (neuron0x13e7120()*-0.00175197);
}

double NNfunction_sb_sLsL::synapse0x1400440() {
   return (neuron0x13e2560()*0.10906);
}

double NNfunction_sb_sLsL::synapse0x1400480() {
   return (neuron0x13e28a0()*-0.278643);
}

double NNfunction_sb_sLsL::synapse0x14004c0() {
   return (neuron0x13e2be0()*0.103931);
}

double NNfunction_sb_sLsL::synapse0x1400500() {
   return (neuron0x13e2f20()*0.112104);
}

double NNfunction_sb_sLsL::synapse0x1400540() {
   return (neuron0x13e3260()*-0.0946199);
}

double NNfunction_sb_sLsL::synapse0x1400580() {
   return (neuron0x13e35a0()*-0.372964);
}

double NNfunction_sb_sLsL::synapse0x14005c0() {
   return (neuron0x13e38e0()*0.221803);
}

double NNfunction_sb_sLsL::synapse0x1400600() {
   return (neuron0x13e3c20()*0.186769);
}

double NNfunction_sb_sLsL::synapse0x1400640() {
   return (neuron0x13e3f60()*-0.39469);
}

double NNfunction_sb_sLsL::synapse0x1400680() {
   return (neuron0x13e42a0()*0.288829);
}

double NNfunction_sb_sLsL::synapse0x14006c0() {
   return (neuron0x13e45e0()*-0.253116);
}

double NNfunction_sb_sLsL::synapse0x1400700() {
   return (neuron0x13e4920()*0.151354);
}

double NNfunction_sb_sLsL::synapse0x1400740() {
   return (neuron0x13e4c60()*-0.301526);
}

double NNfunction_sb_sLsL::synapse0x1400780() {
   return (neuron0x13e4fa0()*0.119265);
}

double NNfunction_sb_sLsL::synapse0x14007c0() {
   return (neuron0x13e52e0()*0.0404051);
}

double NNfunction_sb_sLsL::synapse0x1400800() {
   return (neuron0x13e5620()*0.206658);
}

double NNfunction_sb_sLsL::synapse0x1400290() {
   return (neuron0x13e5960()*0.128308);
}

double NNfunction_sb_sLsL::synapse0x14002d0() {
   return (neuron0x13e5ec0()*-0.0196611);
}

double NNfunction_sb_sLsL::synapse0x1400950() {
   return (neuron0x13e60e0()*-0.0361883);
}

double NNfunction_sb_sLsL::synapse0x1400990() {
   return (neuron0x13e6420()*-0.330018);
}

double NNfunction_sb_sLsL::synapse0x14009d0() {
   return (neuron0x13e6760()*0.0540789);
}

double NNfunction_sb_sLsL::synapse0x1400a10() {
   return (neuron0x13e6aa0()*-0.0275434);
}

double NNfunction_sb_sLsL::synapse0x1400a50() {
   return (neuron0x13e6de0()*-0.21245);
}

double NNfunction_sb_sLsL::synapse0x1400a90() {
   return (neuron0x13e7120()*0.0308619);
}

double NNfunction_sb_sLsL::synapse0x1400e10() {
   return (neuron0x13e2560()*0.0260136);
}

double NNfunction_sb_sLsL::synapse0x1400e50() {
   return (neuron0x13e28a0()*0.000378885);
}

double NNfunction_sb_sLsL::synapse0x1400e90() {
   return (neuron0x13e2be0()*0.017993);
}

double NNfunction_sb_sLsL::synapse0x1400ed0() {
   return (neuron0x13e2f20()*1.07819);
}

double NNfunction_sb_sLsL::synapse0x1400f10() {
   return (neuron0x13e3260()*0.0253214);
}

double NNfunction_sb_sLsL::synapse0x1400f50() {
   return (neuron0x13e35a0()*0.0523286);
}

double NNfunction_sb_sLsL::synapse0x1400f90() {
   return (neuron0x13e38e0()*0.111828);
}

double NNfunction_sb_sLsL::synapse0x1400fd0() {
   return (neuron0x13e3c20()*-0.0192112);
}

double NNfunction_sb_sLsL::synapse0x1401010() {
   return (neuron0x13e3f60()*-0.0889435);
}

double NNfunction_sb_sLsL::synapse0x1401050() {
   return (neuron0x13e42a0()*-0.0211782);
}

double NNfunction_sb_sLsL::synapse0x1401090() {
   return (neuron0x13e45e0()*-0.0546086);
}

double NNfunction_sb_sLsL::synapse0x14010d0() {
   return (neuron0x13e4920()*0.25431);
}

double NNfunction_sb_sLsL::synapse0x1401110() {
   return (neuron0x13e4c60()*0.515014);
}

double NNfunction_sb_sLsL::synapse0x1401150() {
   return (neuron0x13e4fa0()*-0.0459473);
}

double NNfunction_sb_sLsL::synapse0x1401190() {
   return (neuron0x13e52e0()*0.138535);
}

double NNfunction_sb_sLsL::synapse0x14011d0() {
   return (neuron0x13e5620()*0.216059);
}

double NNfunction_sb_sLsL::synapse0x1400c60() {
   return (neuron0x13e5960()*0.0487339);
}

double NNfunction_sb_sLsL::synapse0x1400ca0() {
   return (neuron0x13e5ec0()*0.124454);
}

double NNfunction_sb_sLsL::synapse0x1401320() {
   return (neuron0x13e60e0()*0.175566);
}

double NNfunction_sb_sLsL::synapse0x1401360() {
   return (neuron0x13e6420()*0.0359755);
}

double NNfunction_sb_sLsL::synapse0x14013a0() {
   return (neuron0x13e6760()*-0.0638248);
}

double NNfunction_sb_sLsL::synapse0x14013e0() {
   return (neuron0x13e6aa0()*0.046473);
}

double NNfunction_sb_sLsL::synapse0x1401420() {
   return (neuron0x13e6de0()*0.0559326);
}

double NNfunction_sb_sLsL::synapse0x1401460() {
   return (neuron0x13e7120()*0.024387);
}

double NNfunction_sb_sLsL::synapse0x14017e0() {
   return (neuron0x13e2560()*0.032433);
}

double NNfunction_sb_sLsL::synapse0x1401820() {
   return (neuron0x13e28a0()*-0.115677);
}

double NNfunction_sb_sLsL::synapse0x1401860() {
   return (neuron0x13e2be0()*-0.133449);
}

double NNfunction_sb_sLsL::synapse0x14018a0() {
   return (neuron0x13e2f20()*0.274304);
}

double NNfunction_sb_sLsL::synapse0x14018e0() {
   return (neuron0x13e3260()*0.0925199);
}

double NNfunction_sb_sLsL::synapse0x1401920() {
   return (neuron0x13e35a0()*-0.00598571);
}

double NNfunction_sb_sLsL::synapse0x1401960() {
   return (neuron0x13e38e0()*0.0302359);
}

double NNfunction_sb_sLsL::synapse0x14019a0() {
   return (neuron0x13e3c20()*-0.00573976);
}

double NNfunction_sb_sLsL::synapse0x14019e0() {
   return (neuron0x13e3f60()*0.0301753);
}

double NNfunction_sb_sLsL::synapse0x1401a20() {
   return (neuron0x13e42a0()*-0.0346549);
}

double NNfunction_sb_sLsL::synapse0x1401a60() {
   return (neuron0x13e45e0()*-0.0184149);
}

double NNfunction_sb_sLsL::synapse0x1401aa0() {
   return (neuron0x13e4920()*-0.155734);
}

double NNfunction_sb_sLsL::synapse0x1401ae0() {
   return (neuron0x13e4c60()*0.176549);
}

double NNfunction_sb_sLsL::synapse0x1401b20() {
   return (neuron0x13e4fa0()*-0.0646326);
}

double NNfunction_sb_sLsL::synapse0x1401b60() {
   return (neuron0x13e52e0()*-0.0971468);
}

double NNfunction_sb_sLsL::synapse0x1401ba0() {
   return (neuron0x13e5620()*-0.103969);
}

double NNfunction_sb_sLsL::synapse0x1401630() {
   return (neuron0x13e5960()*-0.043705);
}

double NNfunction_sb_sLsL::synapse0x1401670() {
   return (neuron0x13e5ec0()*-0.102235);
}

double NNfunction_sb_sLsL::synapse0x1401cf0() {
   return (neuron0x13e60e0()*-0.0954781);
}

double NNfunction_sb_sLsL::synapse0x1401d30() {
   return (neuron0x13e6420()*0.0530059);
}

double NNfunction_sb_sLsL::synapse0x1401d70() {
   return (neuron0x13e6760()*-0.0173344);
}

double NNfunction_sb_sLsL::synapse0x1401db0() {
   return (neuron0x13e6aa0()*-0.00954471);
}

double NNfunction_sb_sLsL::synapse0x1401df0() {
   return (neuron0x13e6de0()*0.00840487);
}

double NNfunction_sb_sLsL::synapse0x1401e30() {
   return (neuron0x13e7120()*-0.00607691);
}

double NNfunction_sb_sLsL::synapse0x14021b0() {
   return (neuron0x13e2560()*-0.468717);
}

double NNfunction_sb_sLsL::synapse0x14021f0() {
   return (neuron0x13e28a0()*0.329258);
}

double NNfunction_sb_sLsL::synapse0x1402230() {
   return (neuron0x13e2be0()*-0.338074);
}

double NNfunction_sb_sLsL::synapse0x1402270() {
   return (neuron0x13e2f20()*-0.273987);
}

double NNfunction_sb_sLsL::synapse0x14022b0() {
   return (neuron0x13e3260()*-0.120881);
}

double NNfunction_sb_sLsL::synapse0x14022f0() {
   return (neuron0x13e35a0()*0.00242955);
}

double NNfunction_sb_sLsL::synapse0x1402330() {
   return (neuron0x13e38e0()*-0.246062);
}

double NNfunction_sb_sLsL::synapse0x1402370() {
   return (neuron0x13e3c20()*-0.0434266);
}

double NNfunction_sb_sLsL::synapse0x14023b0() {
   return (neuron0x13e3f60()*-0.139269);
}

double NNfunction_sb_sLsL::synapse0x14023f0() {
   return (neuron0x13e42a0()*-0.387116);
}

double NNfunction_sb_sLsL::synapse0x1402430() {
   return (neuron0x13e45e0()*-0.194918);
}

double NNfunction_sb_sLsL::synapse0x1402470() {
   return (neuron0x13e4920()*-0.101782);
}

double NNfunction_sb_sLsL::synapse0x14024b0() {
   return (neuron0x13e4c60()*-0.115957);
}

double NNfunction_sb_sLsL::synapse0x14024f0() {
   return (neuron0x13e4fa0()*0.396843);
}

double NNfunction_sb_sLsL::synapse0x1402530() {
   return (neuron0x13e52e0()*-0.244709);
}

double NNfunction_sb_sLsL::synapse0x1402570() {
   return (neuron0x13e5620()*0.148749);
}

double NNfunction_sb_sLsL::synapse0x1402000() {
   return (neuron0x13e5960()*-0.193055);
}

double NNfunction_sb_sLsL::synapse0x1402040() {
   return (neuron0x13e5ec0()*-0.380394);
}

double NNfunction_sb_sLsL::synapse0x14026c0() {
   return (neuron0x13e60e0()*-0.171858);
}

double NNfunction_sb_sLsL::synapse0x1402700() {
   return (neuron0x13e6420()*-0.359189);
}

double NNfunction_sb_sLsL::synapse0x1402740() {
   return (neuron0x13e6760()*0.265934);
}

double NNfunction_sb_sLsL::synapse0x1402780() {
   return (neuron0x13e6aa0()*0.166785);
}

double NNfunction_sb_sLsL::synapse0x14027c0() {
   return (neuron0x13e6de0()*-0.026979);
}

double NNfunction_sb_sLsL::synapse0x1402800() {
   return (neuron0x13e7120()*-0.12352);
}

double NNfunction_sb_sLsL::synapse0x1402b80() {
   return (neuron0x13e2560()*0.0137558);
}

double NNfunction_sb_sLsL::synapse0x1402bc0() {
   return (neuron0x13e28a0()*-0.0100084);
}

double NNfunction_sb_sLsL::synapse0x1402c00() {
   return (neuron0x13e2be0()*0.121352);
}

double NNfunction_sb_sLsL::synapse0x1402c40() {
   return (neuron0x13e2f20()*-0.11391);
}

double NNfunction_sb_sLsL::synapse0x1402c80() {
   return (neuron0x13e3260()*-0.0528673);
}

double NNfunction_sb_sLsL::synapse0x1402cc0() {
   return (neuron0x13e35a0()*-0.0412851);
}

double NNfunction_sb_sLsL::synapse0x1402d00() {
   return (neuron0x13e38e0()*-0.0342297);
}

double NNfunction_sb_sLsL::synapse0x1402d40() {
   return (neuron0x13e3c20()*0.0672337);
}

double NNfunction_sb_sLsL::synapse0x1402d80() {
   return (neuron0x13e3f60()*0.0346356);
}

double NNfunction_sb_sLsL::synapse0x1402dc0() {
   return (neuron0x13e42a0()*0.0267763);
}

double NNfunction_sb_sLsL::synapse0x1402e00() {
   return (neuron0x13e45e0()*0.0514118);
}

double NNfunction_sb_sLsL::synapse0x1402e40() {
   return (neuron0x13e4920()*-0.22119);
}

double NNfunction_sb_sLsL::synapse0x1402e80() {
   return (neuron0x13e4c60()*0.0140007);
}

double NNfunction_sb_sLsL::synapse0x1402ec0() {
   return (neuron0x13e4fa0()*0.146526);
}

double NNfunction_sb_sLsL::synapse0x1402f00() {
   return (neuron0x13e52e0()*0.0786724);
}

double NNfunction_sb_sLsL::synapse0x1402f40() {
   return (neuron0x13e5620()*-0.633669);
}

double NNfunction_sb_sLsL::synapse0x14029d0() {
   return (neuron0x13e5960()*0.221044);
}

double NNfunction_sb_sLsL::synapse0x1402a10() {
   return (neuron0x13e5ec0()*-0.0718789);
}

double NNfunction_sb_sLsL::synapse0x1403090() {
   return (neuron0x13e60e0()*-0.0910535);
}

double NNfunction_sb_sLsL::synapse0x14030d0() {
   return (neuron0x13e6420()*-0.0718668);
}

double NNfunction_sb_sLsL::synapse0x1403110() {
   return (neuron0x13e6760()*0.0400545);
}

double NNfunction_sb_sLsL::synapse0x1403150() {
   return (neuron0x13e6aa0()*0.0197502);
}

double NNfunction_sb_sLsL::synapse0x1403190() {
   return (neuron0x13e6de0()*0.00557082);
}

double NNfunction_sb_sLsL::synapse0x14031d0() {
   return (neuron0x13e7120()*0.00802332);
}

double NNfunction_sb_sLsL::synapse0x1403550() {
   return (neuron0x13e2560()*0.0130123);
}

double NNfunction_sb_sLsL::synapse0x1403590() {
   return (neuron0x13e28a0()*-0.0205868);
}

double NNfunction_sb_sLsL::synapse0x14035d0() {
   return (neuron0x13e2be0()*0.0447914);
}

double NNfunction_sb_sLsL::synapse0x1403610() {
   return (neuron0x13e2f20()*-2.96711);
}

double NNfunction_sb_sLsL::synapse0x1403650() {
   return (neuron0x13e3260()*0.0179455);
}

double NNfunction_sb_sLsL::synapse0x1403690() {
   return (neuron0x13e35a0()*0.010688);
}

double NNfunction_sb_sLsL::synapse0x14036d0() {
   return (neuron0x13e38e0()*0.0282464);
}

double NNfunction_sb_sLsL::synapse0x1403710() {
   return (neuron0x13e3c20()*-0.0110036);
}

double NNfunction_sb_sLsL::synapse0x1403750() {
   return (neuron0x13e3f60()*-0.0184893);
}

double NNfunction_sb_sLsL::synapse0x1403790() {
   return (neuron0x13e42a0()*-0.0141902);
}

double NNfunction_sb_sLsL::synapse0x14037d0() {
   return (neuron0x13e45e0()*-0.000895209);
}

double NNfunction_sb_sLsL::synapse0x1403810() {
   return (neuron0x13e4920()*0.0381408);
}

double NNfunction_sb_sLsL::synapse0x1403850() {
   return (neuron0x13e4c60()*-0.793552);
}

double NNfunction_sb_sLsL::synapse0x1403890() {
   return (neuron0x13e4fa0()*-0.013165);
}

double NNfunction_sb_sLsL::synapse0x14038d0() {
   return (neuron0x13e52e0()*0.0470106);
}

double NNfunction_sb_sLsL::synapse0x1403910() {
   return (neuron0x13e5620()*0.0489672);
}

double NNfunction_sb_sLsL::synapse0x14033a0() {
   return (neuron0x13e5960()*-0.0120821);
}

double NNfunction_sb_sLsL::synapse0x14033e0() {
   return (neuron0x13e5ec0()*0.00248175);
}

double NNfunction_sb_sLsL::synapse0x1403a60() {
   return (neuron0x13e60e0()*0.00606713);
}

double NNfunction_sb_sLsL::synapse0x1403aa0() {
   return (neuron0x13e6420()*0.00655807);
}

double NNfunction_sb_sLsL::synapse0x1403ae0() {
   return (neuron0x13e6760()*-0.00516031);
}

double NNfunction_sb_sLsL::synapse0x1403b20() {
   return (neuron0x13e6aa0()*0.00797759);
}

double NNfunction_sb_sLsL::synapse0x1403b60() {
   return (neuron0x13e6de0()*0.0044189);
}

double NNfunction_sb_sLsL::synapse0x1403ba0() {
   return (neuron0x13e7120()*0.0162268);
}

double NNfunction_sb_sLsL::synapse0x13ec650() {
   return (neuron0x13e2560()*-0.0152355);
}

double NNfunction_sb_sLsL::synapse0x13ec690() {
   return (neuron0x13e28a0()*0.0154922);
}

double NNfunction_sb_sLsL::synapse0x13ec6d0() {
   return (neuron0x13e2be0()*-0.811996);
}

double NNfunction_sb_sLsL::synapse0x13ec710() {
   return (neuron0x13e2f20()*1.5501);
}

double NNfunction_sb_sLsL::synapse0x13ec750() {
   return (neuron0x13e3260()*-0.0054263);
}

double NNfunction_sb_sLsL::synapse0x13ec790() {
   return (neuron0x13e35a0()*0.013521);
}

double NNfunction_sb_sLsL::synapse0x13ec7d0() {
   return (neuron0x13e38e0()*0.0102202);
}

double NNfunction_sb_sLsL::synapse0x13ec810() {
   return (neuron0x13e3c20()*0.0342279);
}

double NNfunction_sb_sLsL::synapse0x1404330() {
   return (neuron0x13e3f60()*0.0108436);
}

double NNfunction_sb_sLsL::synapse0x1404370() {
   return (neuron0x13e42a0()*0.0224755);
}

double NNfunction_sb_sLsL::synapse0x14043b0() {
   return (neuron0x13e45e0()*-0.00251419);
}

double NNfunction_sb_sLsL::synapse0x14043f0() {
   return (neuron0x13e4920()*-0.0288709);
}

double NNfunction_sb_sLsL::synapse0x1404430() {
   return (neuron0x13e4c60()*-0.0231495);
}

double NNfunction_sb_sLsL::synapse0x1404470() {
   return (neuron0x13e4fa0()*0.0347598);
}

double NNfunction_sb_sLsL::synapse0x14044b0() {
   return (neuron0x13e52e0()*-0.0215087);
}

double NNfunction_sb_sLsL::synapse0x14044f0() {
   return (neuron0x13e5620()*-0.0316713);
}

double NNfunction_sb_sLsL::synapse0x1403d70() {
   return (neuron0x13e5960()*0.0136424);
}

double NNfunction_sb_sLsL::synapse0x1403db0() {
   return (neuron0x13e5ec0()*0.00546177);
}

double NNfunction_sb_sLsL::synapse0x1404640() {
   return (neuron0x13e60e0()*-0.0116187);
}

double NNfunction_sb_sLsL::synapse0x1404680() {
   return (neuron0x13e6420()*0.00657496);
}

double NNfunction_sb_sLsL::synapse0x14046c0() {
   return (neuron0x13e6760()*0.00100134);
}

double NNfunction_sb_sLsL::synapse0x1404700() {
   return (neuron0x13e6aa0()*-0.000483104);
}

double NNfunction_sb_sLsL::synapse0x1404740() {
   return (neuron0x13e6de0()*0.0021838);
}

double NNfunction_sb_sLsL::synapse0x1404780() {
   return (neuron0x13e7120()*-0.00324142);
}

double NNfunction_sb_sLsL::synapse0x1404b00() {
   return (neuron0x13e2560()*0.107361);
}

double NNfunction_sb_sLsL::synapse0x1404b40() {
   return (neuron0x13e28a0()*0.113362);
}

double NNfunction_sb_sLsL::synapse0x1404b80() {
   return (neuron0x13e2be0()*0.10721);
}

double NNfunction_sb_sLsL::synapse0x1404bc0() {
   return (neuron0x13e2f20()*0.0258254);
}

double NNfunction_sb_sLsL::synapse0x1404c00() {
   return (neuron0x13e3260()*0.176472);
}

double NNfunction_sb_sLsL::synapse0x1404c40() {
   return (neuron0x13e35a0()*0.128412);
}

double NNfunction_sb_sLsL::synapse0x1404c80() {
   return (neuron0x13e38e0()*0.0898468);
}

double NNfunction_sb_sLsL::synapse0x1404cc0() {
   return (neuron0x13e3c20()*0.0544059);
}

double NNfunction_sb_sLsL::synapse0x1404d00() {
   return (neuron0x13e3f60()*-0.199995);
}

double NNfunction_sb_sLsL::synapse0x1404d40() {
   return (neuron0x13e42a0()*-0.252746);
}

double NNfunction_sb_sLsL::synapse0x1404d80() {
   return (neuron0x13e45e0()*-0.593764);
}

double NNfunction_sb_sLsL::synapse0x1404dc0() {
   return (neuron0x13e4920()*-0.118443);
}

double NNfunction_sb_sLsL::synapse0x1404e00() {
   return (neuron0x13e4c60()*-0.302208);
}

double NNfunction_sb_sLsL::synapse0x1404e40() {
   return (neuron0x13e4fa0()*0.271794);
}

double NNfunction_sb_sLsL::synapse0x1404e80() {
   return (neuron0x13e52e0()*0.116754);
}

double NNfunction_sb_sLsL::synapse0x1404ec0() {
   return (neuron0x13e5620()*-0.0610565);
}

double NNfunction_sb_sLsL::synapse0x1404950() {
   return (neuron0x13e5960()*-0.445361);
}

double NNfunction_sb_sLsL::synapse0x1404990() {
   return (neuron0x13e5ec0()*0.273718);
}

double NNfunction_sb_sLsL::synapse0x1405010() {
   return (neuron0x13e60e0()*-0.303457);
}

double NNfunction_sb_sLsL::synapse0x1405050() {
   return (neuron0x13e6420()*-0.0971011);
}

double NNfunction_sb_sLsL::synapse0x1405090() {
   return (neuron0x13e6760()*0.185206);
}

double NNfunction_sb_sLsL::synapse0x14050d0() {
   return (neuron0x13e6aa0()*-0.0132387);
}

double NNfunction_sb_sLsL::synapse0x1405110() {
   return (neuron0x13e6de0()*-0.0280474);
}

double NNfunction_sb_sLsL::synapse0x1405150() {
   return (neuron0x13e7120()*0.187824);
}

double NNfunction_sb_sLsL::synapse0x14054d0() {
   return (neuron0x13e2560()*-0.00707355);
}

double NNfunction_sb_sLsL::synapse0x1405510() {
   return (neuron0x13e28a0()*0.0207644);
}

double NNfunction_sb_sLsL::synapse0x1405550() {
   return (neuron0x13e2be0()*-0.0573295);
}

double NNfunction_sb_sLsL::synapse0x1405590() {
   return (neuron0x13e2f20()*-0.185777);
}

double NNfunction_sb_sLsL::synapse0x14055d0() {
   return (neuron0x13e3260()*-0.0600354);
}

double NNfunction_sb_sLsL::synapse0x1405610() {
   return (neuron0x13e35a0()*-0.0143964);
}

double NNfunction_sb_sLsL::synapse0x1405650() {
   return (neuron0x13e38e0()*-0.0259705);
}

double NNfunction_sb_sLsL::synapse0x1405690() {
   return (neuron0x13e3c20()*-0.0197909);
}

double NNfunction_sb_sLsL::synapse0x14056d0() {
   return (neuron0x13e3f60()*0.0324174);
}

double NNfunction_sb_sLsL::synapse0x1405710() {
   return (neuron0x13e42a0()*0.121749);
}

double NNfunction_sb_sLsL::synapse0x1405750() {
   return (neuron0x13e45e0()*0.167681);
}

double NNfunction_sb_sLsL::synapse0x1405790() {
   return (neuron0x13e4920()*0.010058);
}

double NNfunction_sb_sLsL::synapse0x14057d0() {
   return (neuron0x13e4c60()*0.515892);
}

double NNfunction_sb_sLsL::synapse0x1405810() {
   return (neuron0x13e4fa0()*0.113903);
}

double NNfunction_sb_sLsL::synapse0x1405850() {
   return (neuron0x13e52e0()*-0.0106605);
}

double NNfunction_sb_sLsL::synapse0x1405890() {
   return (neuron0x13e5620()*-0.0596246);
}

double NNfunction_sb_sLsL::synapse0x1405320() {
   return (neuron0x13e5960()*0.0296812);
}

double NNfunction_sb_sLsL::synapse0x1405360() {
   return (neuron0x13e5ec0()*0.021838);
}

double NNfunction_sb_sLsL::synapse0x13f5e90() {
   return (neuron0x13e60e0()*0.000588598);
}

double NNfunction_sb_sLsL::synapse0x13f5ed0() {
   return (neuron0x13e6420()*0.0361954);
}

double NNfunction_sb_sLsL::synapse0x13f5f10() {
   return (neuron0x13e6760()*0.0102314);
}

double NNfunction_sb_sLsL::synapse0x13f5f50() {
   return (neuron0x13e6aa0()*0.00244545);
}

double NNfunction_sb_sLsL::synapse0x13f5f90() {
   return (neuron0x13e6de0()*-0.00940677);
}

double NNfunction_sb_sLsL::synapse0x13f5fd0() {
   return (neuron0x13e7120()*-0.0113042);
}

double NNfunction_sb_sLsL::synapse0x13f6350() {
   return (neuron0x13e2560()*0.012356);
}

double NNfunction_sb_sLsL::synapse0x13f6390() {
   return (neuron0x13e28a0()*0.214009);
}

double NNfunction_sb_sLsL::synapse0x13f63d0() {
   return (neuron0x13e2be0()*0.348342);
}

double NNfunction_sb_sLsL::synapse0x13f6410() {
   return (neuron0x13e2f20()*0.676866);
}

double NNfunction_sb_sLsL::synapse0x13f6450() {
   return (neuron0x13e3260()*-0.0164353);
}

double NNfunction_sb_sLsL::synapse0x13f6490() {
   return (neuron0x13e35a0()*-0.457164);
}

double NNfunction_sb_sLsL::synapse0x13f64d0() {
   return (neuron0x13e38e0()*-0.0221841);
}

double NNfunction_sb_sLsL::synapse0x13f6510() {
   return (neuron0x13e3c20()*0.0907866);
}

double NNfunction_sb_sLsL::synapse0x13f6550() {
   return (neuron0x13e3f60()*0.0715977);
}

double NNfunction_sb_sLsL::synapse0x13f6590() {
   return (neuron0x13e42a0()*0.056514);
}

double NNfunction_sb_sLsL::synapse0x13f65d0() {
   return (neuron0x13e45e0()*0.0216308);
}

double NNfunction_sb_sLsL::synapse0x13f6610() {
   return (neuron0x13e4920()*0.229111);
}

double NNfunction_sb_sLsL::synapse0x13f6650() {
   return (neuron0x13e4c60()*0.533844);
}

double NNfunction_sb_sLsL::synapse0x13f6690() {
   return (neuron0x13e4fa0()*-0.0221511);
}

double NNfunction_sb_sLsL::synapse0x13f66d0() {
   return (neuron0x13e52e0()*-0.0937365);
}

double NNfunction_sb_sLsL::synapse0x13f6710() {
   return (neuron0x13e5620()*-0.0185103);
}

double NNfunction_sb_sLsL::synapse0x13f61a0() {
   return (neuron0x13e5960()*0.00814954);
}

double NNfunction_sb_sLsL::synapse0x13f61e0() {
   return (neuron0x13e5ec0()*0.0324376);
}

double NNfunction_sb_sLsL::synapse0x13f6860() {
   return (neuron0x13e60e0()*-0.0571676);
}

double NNfunction_sb_sLsL::synapse0x13f68a0() {
   return (neuron0x13e6420()*-0.0109685);
}

double NNfunction_sb_sLsL::synapse0x13f68e0() {
   return (neuron0x13e6760()*-0.0492209);
}

double NNfunction_sb_sLsL::synapse0x13f6920() {
   return (neuron0x13e6aa0()*0.0930933);
}

double NNfunction_sb_sLsL::synapse0x13f6960() {
   return (neuron0x13e6de0()*0.00633648);
}

double NNfunction_sb_sLsL::synapse0x13f69a0() {
   return (neuron0x13e7120()*-0.0549539);
}

double NNfunction_sb_sLsL::synapse0x13f6d20() {
   return (neuron0x13e2560()*0.00573054);
}

double NNfunction_sb_sLsL::synapse0x13f6d60() {
   return (neuron0x13e28a0()*-0.0161379);
}

double NNfunction_sb_sLsL::synapse0x13f6da0() {
   return (neuron0x13e2be0()*-0.559829);
}

double NNfunction_sb_sLsL::synapse0x13f6de0() {
   return (neuron0x13e2f20()*-0.189249);
}

double NNfunction_sb_sLsL::synapse0x13f6e20() {
   return (neuron0x13e3260()*0.0197236);
}

double NNfunction_sb_sLsL::synapse0x13f6e60() {
   return (neuron0x13e35a0()*0.000753028);
}

double NNfunction_sb_sLsL::synapse0x13f6ea0() {
   return (neuron0x13e38e0()*0.0051484);
}

double NNfunction_sb_sLsL::synapse0x13f6ee0() {
   return (neuron0x13e3c20()*-0.00597844);
}

double NNfunction_sb_sLsL::synapse0x13f6f20() {
   return (neuron0x13e3f60()*0.000541115);
}

double NNfunction_sb_sLsL::synapse0x13f6f60() {
   return (neuron0x13e42a0()*-0.0175096);
}

double NNfunction_sb_sLsL::synapse0x13f6fa0() {
   return (neuron0x13e45e0()*-0.00505497);
}

double NNfunction_sb_sLsL::synapse0x13f6fe0() {
   return (neuron0x13e4920()*0.000605826);
}

double NNfunction_sb_sLsL::synapse0x13f7020() {
   return (neuron0x13e4c60()*1.15493);
}

double NNfunction_sb_sLsL::synapse0x13f7060() {
   return (neuron0x13e4fa0()*-0.0402962);
}

double NNfunction_sb_sLsL::synapse0x13f70a0() {
   return (neuron0x13e52e0()*0.0176594);
}

double NNfunction_sb_sLsL::synapse0x13f70e0() {
   return (neuron0x13e5620()*-0.000704324);
}

double NNfunction_sb_sLsL::synapse0x13f6b70() {
   return (neuron0x13e5960()*-0.0226725);
}

double NNfunction_sb_sLsL::synapse0x13f6bb0() {
   return (neuron0x13e5ec0()*0.00311818);
}

double NNfunction_sb_sLsL::synapse0x13f7230() {
   return (neuron0x13e60e0()*0.00533066);
}

double NNfunction_sb_sLsL::synapse0x13f7270() {
   return (neuron0x13e6420()*0.00810366);
}

double NNfunction_sb_sLsL::synapse0x13f72b0() {
   return (neuron0x13e6760()*0.00132408);
}

double NNfunction_sb_sLsL::synapse0x13f72f0() {
   return (neuron0x13e6aa0()*0.00174721);
}

double NNfunction_sb_sLsL::synapse0x13f7330() {
   return (neuron0x13e6de0()*0.00731667);
}

double NNfunction_sb_sLsL::synapse0x13f7370() {
   return (neuron0x13e7120()*-0.00294911);
}

double NNfunction_sb_sLsL::synapse0x13f76f0() {
   return (neuron0x13e2560()*0.00895034);
}

double NNfunction_sb_sLsL::synapse0x13f7730() {
   return (neuron0x13e28a0()*-0.0216735);
}

double NNfunction_sb_sLsL::synapse0x13f7770() {
   return (neuron0x13e2be0()*-0.0489236);
}

double NNfunction_sb_sLsL::synapse0x13f77b0() {
   return (neuron0x13e2f20()*0.119709);
}

double NNfunction_sb_sLsL::synapse0x13f77f0() {
   return (neuron0x13e3260()*0.0102583);
}

double NNfunction_sb_sLsL::synapse0x13f7830() {
   return (neuron0x13e35a0()*-0.00771414);
}

double NNfunction_sb_sLsL::synapse0x13f7870() {
   return (neuron0x13e38e0()*-0.00277098);
}

double NNfunction_sb_sLsL::synapse0x13f78b0() {
   return (neuron0x13e3c20()*-0.0119455);
}

double NNfunction_sb_sLsL::synapse0x13f78f0() {
   return (neuron0x13e3f60()*0.195001);
}

double NNfunction_sb_sLsL::synapse0x13f7930() {
   return (neuron0x13e42a0()*0.0141073);
}

double NNfunction_sb_sLsL::synapse0x13f7970() {
   return (neuron0x13e45e0()*0.0141396);
}

double NNfunction_sb_sLsL::synapse0x13f79b0() {
   return (neuron0x13e4920()*0.0180368);
}

double NNfunction_sb_sLsL::synapse0x13f79f0() {
   return (neuron0x13e4c60()*-0.590758);
}

double NNfunction_sb_sLsL::synapse0x13f7a30() {
   return (neuron0x13e4fa0()*-0.0332948);
}

double NNfunction_sb_sLsL::synapse0x13f7a70() {
   return (neuron0x13e52e0()*0.0297895);
}

double NNfunction_sb_sLsL::synapse0x13f7ab0() {
   return (neuron0x13e5620()*-0.0295342);
}

double NNfunction_sb_sLsL::synapse0x13f7540() {
   return (neuron0x13e5960()*-0.0344646);
}

double NNfunction_sb_sLsL::synapse0x13f7580() {
   return (neuron0x13e5ec0()*0.00123686);
}

double NNfunction_sb_sLsL::synapse0x13f7c00() {
   return (neuron0x13e60e0()*0.0075659);
}

double NNfunction_sb_sLsL::synapse0x13f7c40() {
   return (neuron0x13e6420()*-0.000239224);
}

double NNfunction_sb_sLsL::synapse0x13f7c80() {
   return (neuron0x13e6760()*0.00160166);
}

double NNfunction_sb_sLsL::synapse0x13f7cc0() {
   return (neuron0x13e6aa0()*-0.0166216);
}

double NNfunction_sb_sLsL::synapse0x13f7d00() {
   return (neuron0x13e6de0()*-0.00429583);
}

double NNfunction_sb_sLsL::synapse0x13f7d40() {
   return (neuron0x13e7120()*-0.00144487);
}

double NNfunction_sb_sLsL::synapse0x1409c10() {
   return (neuron0x13e2560()*0.138964);
}

double NNfunction_sb_sLsL::synapse0x1409c50() {
   return (neuron0x13e28a0()*0.234834);
}

double NNfunction_sb_sLsL::synapse0x1409c90() {
   return (neuron0x13e2be0()*0.774637);
}

double NNfunction_sb_sLsL::synapse0x1409cd0() {
   return (neuron0x13e2f20()*-0.506636);
}

double NNfunction_sb_sLsL::synapse0x1409d10() {
   return (neuron0x13e3260()*0.188423);
}

double NNfunction_sb_sLsL::synapse0x1409d50() {
   return (neuron0x13e35a0()*0.307786);
}

double NNfunction_sb_sLsL::synapse0x1409d90() {
   return (neuron0x13e38e0()*-0.276788);
}

double NNfunction_sb_sLsL::synapse0x1409dd0() {
   return (neuron0x13e3c20()*0.0764698);
}

double NNfunction_sb_sLsL::synapse0x1409e10() {
   return (neuron0x13e3f60()*-0.0196616);
}

double NNfunction_sb_sLsL::synapse0x1409e50() {
   return (neuron0x13e42a0()*0.03893);
}

double NNfunction_sb_sLsL::synapse0x1409e90() {
   return (neuron0x13e45e0()*0.0424491);
}

double NNfunction_sb_sLsL::synapse0x1409ed0() {
   return (neuron0x13e4920()*0.0439082);
}

double NNfunction_sb_sLsL::synapse0x1409f10() {
   return (neuron0x13e4c60()*-0.805153);
}

double NNfunction_sb_sLsL::synapse0x1409f50() {
   return (neuron0x13e4fa0()*0.0990678);
}

double NNfunction_sb_sLsL::synapse0x1409f90() {
   return (neuron0x13e52e0()*0.033247);
}

double NNfunction_sb_sLsL::synapse0x1409fd0() {
   return (neuron0x13e5620()*0.211297);
}

double NNfunction_sb_sLsL::synapse0x13f7d80() {
   return (neuron0x13e5960()*0.216515);
}

double NNfunction_sb_sLsL::synapse0x13f7dc0() {
   return (neuron0x13e5ec0()*-0.0294451);
}

double NNfunction_sb_sLsL::synapse0x140a120() {
   return (neuron0x13e60e0()*-0.0703275);
}

double NNfunction_sb_sLsL::synapse0x140a160() {
   return (neuron0x13e6420()*-0.219301);
}

double NNfunction_sb_sLsL::synapse0x140a1a0() {
   return (neuron0x13e6760()*0.0260283);
}

double NNfunction_sb_sLsL::synapse0x140a1e0() {
   return (neuron0x13e6aa0()*-0.0608306);
}

double NNfunction_sb_sLsL::synapse0x140a220() {
   return (neuron0x13e6de0()*0.0209316);
}

double NNfunction_sb_sLsL::synapse0x140a260() {
   return (neuron0x13e7120()*0.0777178);
}

double NNfunction_sb_sLsL::synapse0x140a5e0() {
   return (neuron0x13e2560()*0.0198556);
}

double NNfunction_sb_sLsL::synapse0x140a620() {
   return (neuron0x13e28a0()*-0.0323812);
}

double NNfunction_sb_sLsL::synapse0x140a660() {
   return (neuron0x13e2be0()*-0.14156);
}

double NNfunction_sb_sLsL::synapse0x140a6a0() {
   return (neuron0x13e2f20()*0.298725);
}

double NNfunction_sb_sLsL::synapse0x140a6e0() {
   return (neuron0x13e3260()*0.0226862);
}

double NNfunction_sb_sLsL::synapse0x140a720() {
   return (neuron0x13e35a0()*-0.0697168);
}

double NNfunction_sb_sLsL::synapse0x140a760() {
   return (neuron0x13e38e0()*-0.0606265);
}

double NNfunction_sb_sLsL::synapse0x140a7a0() {
   return (neuron0x13e3c20()*-0.238849);
}

double NNfunction_sb_sLsL::synapse0x140a7e0() {
   return (neuron0x13e3f60()*0.0258361);
}

double NNfunction_sb_sLsL::synapse0x140a820() {
   return (neuron0x13e42a0()*-0.0158515);
}

double NNfunction_sb_sLsL::synapse0x140a860() {
   return (neuron0x13e45e0()*0.0301798);
}

double NNfunction_sb_sLsL::synapse0x140a8a0() {
   return (neuron0x13e4920()*-0.0519344);
}

double NNfunction_sb_sLsL::synapse0x140a8e0() {
   return (neuron0x13e4c60()*-0.185089);
}

double NNfunction_sb_sLsL::synapse0x140a920() {
   return (neuron0x13e4fa0()*0.0404101);
}

double NNfunction_sb_sLsL::synapse0x140a960() {
   return (neuron0x13e52e0()*-0.0288492);
}

double NNfunction_sb_sLsL::synapse0x140a9a0() {
   return (neuron0x13e5620()*-0.0392346);
}

double NNfunction_sb_sLsL::synapse0x140a430() {
   return (neuron0x13e5960()*0.174517);
}

double NNfunction_sb_sLsL::synapse0x140a470() {
   return (neuron0x13e5ec0()*-0.0292701);
}

double NNfunction_sb_sLsL::synapse0x140aaf0() {
   return (neuron0x13e60e0()*-0.0234158);
}

double NNfunction_sb_sLsL::synapse0x140ab30() {
   return (neuron0x13e6420()*-0.0386549);
}

double NNfunction_sb_sLsL::synapse0x140ab70() {
   return (neuron0x13e6760()*0.0217702);
}

double NNfunction_sb_sLsL::synapse0x140abb0() {
   return (neuron0x13e6aa0()*-0.0284277);
}

double NNfunction_sb_sLsL::synapse0x140abf0() {
   return (neuron0x13e6de0()*-0.0147884);
}

double NNfunction_sb_sLsL::synapse0x140ac30() {
   return (neuron0x13e7120()*-0.00352747);
}

double NNfunction_sb_sLsL::synapse0x140afb0() {
   return (neuron0x13e2560()*-0.0076601);
}

double NNfunction_sb_sLsL::synapse0x140aff0() {
   return (neuron0x13e28a0()*-0.00142844);
}

double NNfunction_sb_sLsL::synapse0x140b030() {
   return (neuron0x13e2be0()*0.133477);
}

double NNfunction_sb_sLsL::synapse0x140b070() {
   return (neuron0x13e2f20()*0.363568);
}

double NNfunction_sb_sLsL::synapse0x140b0b0() {
   return (neuron0x13e3260()*0.000878591);
}

double NNfunction_sb_sLsL::synapse0x140b0f0() {
   return (neuron0x13e35a0()*0.00142416);
}

double NNfunction_sb_sLsL::synapse0x140b130() {
   return (neuron0x13e38e0()*0.00331501);
}

double NNfunction_sb_sLsL::synapse0x140b170() {
   return (neuron0x13e3c20()*0.0157906);
}

double NNfunction_sb_sLsL::synapse0x140b1b0() {
   return (neuron0x13e3f60()*0.00878005);
}

double NNfunction_sb_sLsL::synapse0x140b1f0() {
   return (neuron0x13e42a0()*0.00565572);
}

double NNfunction_sb_sLsL::synapse0x140b230() {
   return (neuron0x13e45e0()*0.00200201);
}

double NNfunction_sb_sLsL::synapse0x140b270() {
   return (neuron0x13e4920()*0.00253658);
}

double NNfunction_sb_sLsL::synapse0x140b2b0() {
   return (neuron0x13e4c60()*-2.86036);
}

double NNfunction_sb_sLsL::synapse0x140b2f0() {
   return (neuron0x13e4fa0()*-0.0291365);
}

double NNfunction_sb_sLsL::synapse0x140b330() {
   return (neuron0x13e52e0()*0.00652454);
}

double NNfunction_sb_sLsL::synapse0x140b370() {
   return (neuron0x13e5620()*0.00236885);
}

double NNfunction_sb_sLsL::synapse0x140ae00() {
   return (neuron0x13e5960()*-0.0293395);
}

double NNfunction_sb_sLsL::synapse0x140ae40() {
   return (neuron0x13e5ec0()*-0.00423374);
}

double NNfunction_sb_sLsL::synapse0x140b4c0() {
   return (neuron0x13e60e0()*0.00358);
}

double NNfunction_sb_sLsL::synapse0x140b500() {
   return (neuron0x13e6420()*-0.000347574);
}

double NNfunction_sb_sLsL::synapse0x140b540() {
   return (neuron0x13e6760()*-0.00362538);
}

double NNfunction_sb_sLsL::synapse0x140b580() {
   return (neuron0x13e6aa0()*-0.00654108);
}

double NNfunction_sb_sLsL::synapse0x140b5c0() {
   return (neuron0x13e6de0()*-0.00340415);
}

double NNfunction_sb_sLsL::synapse0x140b600() {
   return (neuron0x13e7120()*0.00812185);
}

double NNfunction_sb_sLsL::synapse0x140b980() {
   return (neuron0x13e2560()*0.0266472);
}

double NNfunction_sb_sLsL::synapse0x140b9c0() {
   return (neuron0x13e28a0()*-0.0405585);
}

double NNfunction_sb_sLsL::synapse0x140ba00() {
   return (neuron0x13e2be0()*-0.205622);
}

double NNfunction_sb_sLsL::synapse0x140ba40() {
   return (neuron0x13e2f20()*-0.691522);
}

double NNfunction_sb_sLsL::synapse0x140ba80() {
   return (neuron0x13e3260()*-0.00195566);
}

double NNfunction_sb_sLsL::synapse0x140bac0() {
   return (neuron0x13e35a0()*-0.0586886);
}

double NNfunction_sb_sLsL::synapse0x140bb00() {
   return (neuron0x13e38e0()*-0.00622054);
}

double NNfunction_sb_sLsL::synapse0x140bb40() {
   return (neuron0x13e3c20()*0.0176438);
}

double NNfunction_sb_sLsL::synapse0x140bb80() {
   return (neuron0x13e3f60()*0.0256763);
}

double NNfunction_sb_sLsL::synapse0x140bbc0() {
   return (neuron0x13e42a0()*-0.0137421);
}

double NNfunction_sb_sLsL::synapse0x140bc00() {
   return (neuron0x13e45e0()*0.0439733);
}

double NNfunction_sb_sLsL::synapse0x140bc40() {
   return (neuron0x13e4920()*0.0996115);
}

double NNfunction_sb_sLsL::synapse0x140bc80() {
   return (neuron0x13e4c60()*-0.82081);
}

double NNfunction_sb_sLsL::synapse0x140bcc0() {
   return (neuron0x13e4fa0()*-0.0687266);
}

double NNfunction_sb_sLsL::synapse0x140bd00() {
   return (neuron0x13e52e0()*-0.0137696);
}

double NNfunction_sb_sLsL::synapse0x140bd40() {
   return (neuron0x13e5620()*0.0968679);
}

double NNfunction_sb_sLsL::synapse0x140b7d0() {
   return (neuron0x13e5960()*-0.138771);
}

double NNfunction_sb_sLsL::synapse0x140b810() {
   return (neuron0x13e5ec0()*0.0712693);
}

double NNfunction_sb_sLsL::synapse0x140be90() {
   return (neuron0x13e60e0()*0.0424354);
}

double NNfunction_sb_sLsL::synapse0x140bed0() {
   return (neuron0x13e6420()*0.0272468);
}

double NNfunction_sb_sLsL::synapse0x140bf10() {
   return (neuron0x13e6760()*0.0155914);
}

double NNfunction_sb_sLsL::synapse0x140bf50() {
   return (neuron0x13e6aa0()*0.0111275);
}

double NNfunction_sb_sLsL::synapse0x140bf90() {
   return (neuron0x13e6de0()*0.0207194);
}

double NNfunction_sb_sLsL::synapse0x140bfd0() {
   return (neuron0x13e7120()*-0.00870797);
}

double NNfunction_sb_sLsL::synapse0x13e8570() {
   return (neuron0x13e75c0()*-0.0205319);
}

double NNfunction_sb_sLsL::synapse0x13e85b0() {
   return (neuron0x13e7ed0()*0.0401222);
}

double NNfunction_sb_sLsL::synapse0x13e9a80() {
   return (neuron0x13e89b0()*0.24866);
}

double NNfunction_sb_sLsL::synapse0x13e9ac0() {
   return (neuron0x11a2240()*-1.91591);
}

double NNfunction_sb_sLsL::synapse0x13ea450() {
   return (neuron0x13e97d0()*-0.250477);
}

double NNfunction_sb_sLsL::synapse0x13ea490() {
   return (neuron0x13ea1a0()*-0.0621005);
}

double NNfunction_sb_sLsL::synapse0x13eb220() {
   return (neuron0x13eaf70()*0.0490665);
}

double NNfunction_sb_sLsL::synapse0x13eb260() {
   return (neuron0x13eb940()*1.46406);
}

double NNfunction_sb_sLsL::synapse0x13ebbf0() {
   return (neuron0x13ec310()*0.0138165);
}

double NNfunction_sb_sLsL::synapse0x13ebc30() {
   return (neuron0x13ecdf0()*0.0132158);
}

double NNfunction_sb_sLsL::synapse0x13ec5c0() {
   return (neuron0x13ed7c0()*1.40175);
}

double NNfunction_sb_sLsL::synapse0x13ec600() {
   return (neuron0x13ea8a0()*0.035297);
}

double NNfunction_sb_sLsL::synapse0x13ed0a0() {
   return (neuron0x13ef370()*-1.81927);
}

double NNfunction_sb_sLsL::synapse0x13ed0e0() {
   return (neuron0x13efd40()*0.0884171);
}

double NNfunction_sb_sLsL::synapse0x13eda70() {
   return (neuron0x13f0710()*-0.360905);
}

double NNfunction_sb_sLsL::synapse0x13edab0() {
   return (neuron0x13f10e0()*-0.0493451);
}

double NNfunction_sb_sLsL::synapse0x13eab50() {
   return (neuron0x13f2ef0()*0.24003);
}

double NNfunction_sb_sLsL::synapse0x13eab90() {
   return (neuron0x13f31d0()*-0.0786157);
}

double NNfunction_sb_sLsL::synapse0x13ef620() {
   return (neuron0x13f3ba0()*-0.0884779);
}

double NNfunction_sb_sLsL::synapse0x13ef660() {
   return (neuron0x13f4570()*0.0047997);
}

double NNfunction_sb_sLsL::synapse0x13efff0() {
   return (neuron0x13f4f40()*-0.902122);
}

double NNfunction_sb_sLsL::synapse0x13f0030() {
   return (neuron0x13f5910()*0.0707498);
}

double NNfunction_sb_sLsL::synapse0x13f09c0() {
   return (neuron0x13ee460()*-0.143484);
}

double NNfunction_sb_sLsL::synapse0x13f0a00() {
   return (neuron0x13eee30()*-0.569891);
}

double NNfunction_sb_sLsL::synapse0x13f1390() {
   return (neuron0x13f86a0()*0.775492);
}

double NNfunction_sb_sLsL::synapse0x13f13d0() {
   return (neuron0x13f9070()*-0.461241);
}

double NNfunction_sb_sLsL::synapse0x13e5500() {
   return (neuron0x13f9a40()*-0.0839526);
}

double NNfunction_sb_sLsL::synapse0x13e5540() {
   return (neuron0x13fa410()*-0.229404);
}

double NNfunction_sb_sLsL::synapse0x13f3480() {
   return (neuron0x13fade0()*-0.350302);
}

double NNfunction_sb_sLsL::synapse0x13f34c0() {
   return (neuron0x13fb7b0()*-0.040236);
}

double NNfunction_sb_sLsL::synapse0x13f3e50() {
   return (neuron0x13fc180()*0.585469);
}

double NNfunction_sb_sLsL::synapse0x13f3e90() {
   return (neuron0x13fcb50()*-0.376977);
}

double NNfunction_sb_sLsL::synapse0x13f4820() {
   return (neuron0x13f2be0()*0.526769);
}

double NNfunction_sb_sLsL::synapse0x13f4860() {
   return (neuron0x13ff730()*-0.120123);
}

double NNfunction_sb_sLsL::synapse0x13f51f0() {
   return (neuron0x1400100()*-0.0161024);
}

double NNfunction_sb_sLsL::synapse0x13f5230() {
   return (neuron0x1400ad0()*0.693239);
}

double NNfunction_sb_sLsL::synapse0x13f5bc0() {
   return (neuron0x14014a0()*0.610737);
}

double NNfunction_sb_sLsL::synapse0x13f5c00() {
   return (neuron0x1401e70()*-0.0135116);
}

double NNfunction_sb_sLsL::synapse0x13ee710() {
   return (neuron0x1402840()*0.0393362);
}

double NNfunction_sb_sLsL::synapse0x13ee750() {
   return (neuron0x1403210()*1.09434);
}

double NNfunction_sb_sLsL::synapse0x13f7fc0() {
   return (neuron0x1403be0()*-0.157972);
}

double NNfunction_sb_sLsL::synapse0x13f8000() {
   return (neuron0x14047c0()*0.0195758);
}

double NNfunction_sb_sLsL::synapse0x13f8950() {
   return (neuron0x1405190()*0.94566);
}

double NNfunction_sb_sLsL::synapse0x13f8990() {
   return (neuron0x13f6010()*0.011131);
}

double NNfunction_sb_sLsL::synapse0x13f9320() {
   return (neuron0x13f69e0()*-0.836448);
}

double NNfunction_sb_sLsL::synapse0x13f9360() {
   return (neuron0x13f73b0()*-0.975041);
}

double NNfunction_sb_sLsL::synapse0x13f9cf0() {
   return (neuron0x14099f0()*-0.0515595);
}

double NNfunction_sb_sLsL::synapse0x13f9d30() {
   return (neuron0x140a2a0()*0.0962554);
}

double NNfunction_sb_sLsL::synapse0x13fa6c0() {
   return (neuron0x140ac70()*-0.170713);
}

double NNfunction_sb_sLsL::synapse0x13fa700() {
   return (neuron0x140b640()*0.393153);
}

double NNfunction_sb_sLsL::synapse0x13fce00() {
   return (neuron0x13e75c0()*-0.0262915);
}

double NNfunction_sb_sLsL::synapse0x13fce40() {
   return (neuron0x13e7ed0()*0.151631);
}

double NNfunction_sb_sLsL::synapse0x13f23c0() {
   return (neuron0x13e89b0()*-0.137517);
}

double NNfunction_sb_sLsL::synapse0x13f2400() {
   return (neuron0x11a2240()*0.165376);
}

double NNfunction_sb_sLsL::synapse0x13ff9e0() {
   return (neuron0x13e97d0()*0.376191);
}

double NNfunction_sb_sLsL::synapse0x13ffa20() {
   return (neuron0x13ea1a0()*-0.296374);
}

double NNfunction_sb_sLsL::synapse0x14003b0() {
   return (neuron0x13eaf70()*0.147564);
}

double NNfunction_sb_sLsL::synapse0x14003f0() {
   return (neuron0x13eb940()*0.676532);
}

double NNfunction_sb_sLsL::synapse0x1400d80() {
   return (neuron0x13ec310()*0.249162);
}

double NNfunction_sb_sLsL::synapse0x1400dc0() {
   return (neuron0x13ecdf0()*-0.109799);
}

double NNfunction_sb_sLsL::synapse0x1401750() {
   return (neuron0x13ed7c0()*-0.454114);
}

double NNfunction_sb_sLsL::synapse0x1401790() {
   return (neuron0x13ea8a0()*0.381989);
}

double NNfunction_sb_sLsL::synapse0x1402120() {
   return (neuron0x13ef370()*0.606448);
}

double NNfunction_sb_sLsL::synapse0x1402160() {
   return (neuron0x13efd40()*0.257411);
}

double NNfunction_sb_sLsL::synapse0x1402af0() {
   return (neuron0x13f0710()*0.0842113);
}

double NNfunction_sb_sLsL::synapse0x1402b30() {
   return (neuron0x13f10e0()*0.448267);
}

double NNfunction_sb_sLsL::synapse0x14034c0() {
   return (neuron0x13f2ef0()*0.748541);
}

double NNfunction_sb_sLsL::synapse0x1403500() {
   return (neuron0x13f31d0()*0.638946);
}

double NNfunction_sb_sLsL::synapse0x1403e90() {
   return (neuron0x13f3ba0()*0.00738308);
}

double NNfunction_sb_sLsL::synapse0x1403ed0() {
   return (neuron0x13f4570()*0.309218);
}

double NNfunction_sb_sLsL::synapse0x1404a70() {
   return (neuron0x13f4f40()*0.380918);
}

double NNfunction_sb_sLsL::synapse0x1404ab0() {
   return (neuron0x13f5910()*0.629911);
}

double NNfunction_sb_sLsL::synapse0x1405440() {
   return (neuron0x13ee460()*0.0505039);
}

double NNfunction_sb_sLsL::synapse0x1405480() {
   return (neuron0x13eee30()*0.351805);
}

double NNfunction_sb_sLsL::synapse0x13f62c0() {
   return (neuron0x13f86a0()*0.621101);
}

double NNfunction_sb_sLsL::synapse0x13f6300() {
   return (neuron0x13f9070()*-0.0122142);
}

double NNfunction_sb_sLsL::synapse0x13f6c90() {
   return (neuron0x13f9a40()*-0.0198522);
}

double NNfunction_sb_sLsL::synapse0x13f6cd0() {
   return (neuron0x13fa410()*0.504184);
}

double NNfunction_sb_sLsL::synapse0x13f7660() {
   return (neuron0x13fade0()*-0.0820769);
}

double NNfunction_sb_sLsL::synapse0x13f76a0() {
   return (neuron0x13fb7b0()*0.580769);
}

double NNfunction_sb_sLsL::synapse0x1409b80() {
   return (neuron0x13fc180()*0.44265);
}

double NNfunction_sb_sLsL::synapse0x1409bc0() {
   return (neuron0x13fcb50()*0.522538);
}

double NNfunction_sb_sLsL::synapse0x140a550() {
   return (neuron0x13f2be0()*0.304086);
}

double NNfunction_sb_sLsL::synapse0x140a590() {
   return (neuron0x13ff730()*0.503226);
}

double NNfunction_sb_sLsL::synapse0x140af20() {
   return (neuron0x1400100()*0.156393);
}

double NNfunction_sb_sLsL::synapse0x140af60() {
   return (neuron0x1400ad0()*0.580659);
}

double NNfunction_sb_sLsL::synapse0x140b8f0() {
   return (neuron0x14014a0()*0.569584);
}

double NNfunction_sb_sLsL::synapse0x140b930() {
   return (neuron0x1401e70()*0.617204);
}

double NNfunction_sb_sLsL::synapse0x13e77e0() {
   return (neuron0x1402840()*0.0897128);
}

double NNfunction_sb_sLsL::synapse0x13e7820() {
   return (neuron0x1403210()*-0.0322951);
}

double NNfunction_sb_sLsL::synapse0x13fb090() {
   return (neuron0x1403be0()*0.146994);
}

double NNfunction_sb_sLsL::synapse0x13fb0d0() {
   return (neuron0x14047c0()*0.530091);
}

double NNfunction_sb_sLsL::synapse0x140c010() {
   return (neuron0x1405190()*-0.085974);
}

double NNfunction_sb_sLsL::synapse0x140c050() {
   return (neuron0x13f6010()*0.672863);
}

double NNfunction_sb_sLsL::synapse0x140c090() {
   return (neuron0x13f69e0()*0.218058);
}

double NNfunction_sb_sLsL::synapse0x140c0d0() {
   return (neuron0x13f73b0()*-0.000857233);
}

double NNfunction_sb_sLsL::synapse0x1412f80() {
   return (neuron0x14099f0()*0.111149);
}

double NNfunction_sb_sLsL::synapse0x1412fc0() {
   return (neuron0x140a2a0()*0.296095);
}

double NNfunction_sb_sLsL::synapse0x1413000() {
   return (neuron0x140ac70()*0.417262);
}

double NNfunction_sb_sLsL::synapse0x1413040() {
   return (neuron0x140b640()*0.174892);
}

double NNfunction_sb_sLsL::synapse0x14133c0() {
   return (neuron0x13e75c0()*0.825276);
}

double NNfunction_sb_sLsL::synapse0x1413400() {
   return (neuron0x13e7ed0()*-0.189816);
}

double NNfunction_sb_sLsL::synapse0x1413440() {
   return (neuron0x13e89b0()*0.744719);
}

double NNfunction_sb_sLsL::synapse0x1413480() {
   return (neuron0x11a2240()*-0.0808769);
}

double NNfunction_sb_sLsL::synapse0x14134c0() {
   return (neuron0x13e97d0()*-0.0271924);
}

double NNfunction_sb_sLsL::synapse0x1413500() {
   return (neuron0x13ea1a0()*0.230445);
}

double NNfunction_sb_sLsL::synapse0x1413540() {
   return (neuron0x13eaf70()*0.0555087);
}

double NNfunction_sb_sLsL::synapse0x1413580() {
   return (neuron0x13eb940()*0.428748);
}

double NNfunction_sb_sLsL::synapse0x14135c0() {
   return (neuron0x13ec310()*0.415647);
}

double NNfunction_sb_sLsL::synapse0x1413600() {
   return (neuron0x13ecdf0()*0.353219);
}

double NNfunction_sb_sLsL::synapse0x1413640() {
   return (neuron0x13ed7c0()*-0.236075);
}

double NNfunction_sb_sLsL::synapse0x1413680() {
   return (neuron0x13ea8a0()*0.393055);
}

double NNfunction_sb_sLsL::synapse0x14136c0() {
   return (neuron0x13ef370()*0.709792);
}

double NNfunction_sb_sLsL::synapse0x1413700() {
   return (neuron0x13efd40()*0.0353973);
}

double NNfunction_sb_sLsL::synapse0x1413740() {
   return (neuron0x13f0710()*0.0684552);
}

double NNfunction_sb_sLsL::synapse0x1413780() {
   return (neuron0x13f10e0()*0.716089);
}

double NNfunction_sb_sLsL::synapse0x1413210() {
   return (neuron0x13f2ef0()*0.961844);
}

double NNfunction_sb_sLsL::synapse0x1413250() {
   return (neuron0x13f31d0()*0.980132);
}

double NNfunction_sb_sLsL::synapse0x14138d0() {
   return (neuron0x13f3ba0()*0.181176);
}

double NNfunction_sb_sLsL::synapse0x1413910() {
   return (neuron0x13f4570()*0.264586);
}

double NNfunction_sb_sLsL::synapse0x1413950() {
   return (neuron0x13f4f40()*-0.149973);
}

double NNfunction_sb_sLsL::synapse0x1413990() {
   return (neuron0x13f5910()*0.362807);
}

double NNfunction_sb_sLsL::synapse0x14139d0() {
   return (neuron0x13ee460()*0.0505317);
}

double NNfunction_sb_sLsL::synapse0x1413a10() {
   return (neuron0x13eee30()*0.270856);
}

double NNfunction_sb_sLsL::synapse0x1413a50() {
   return (neuron0x13f86a0()*0.73919);
}

double NNfunction_sb_sLsL::synapse0x1413a90() {
   return (neuron0x13f9070()*-0.0231219);
}

double NNfunction_sb_sLsL::synapse0x1413ad0() {
   return (neuron0x13f9a40()*1.07662);
}

double NNfunction_sb_sLsL::synapse0x1413b10() {
   return (neuron0x13fa410()*0.321859);
}

double NNfunction_sb_sLsL::synapse0x1413b50() {
   return (neuron0x13fade0()*0.86395);
}

double NNfunction_sb_sLsL::synapse0x1413b90() {
   return (neuron0x13fb7b0()*0.159916);
}

double NNfunction_sb_sLsL::synapse0x1413bd0() {
   return (neuron0x13fc180()*0.604635);
}

double NNfunction_sb_sLsL::synapse0x1413c10() {
   return (neuron0x13fcb50()*0.447183);
}

double NNfunction_sb_sLsL::synapse0x14137c0() {
   return (neuron0x13f2be0()*0.897009);
}

double NNfunction_sb_sLsL::synapse0x1413800() {
   return (neuron0x13ff730()*0.292714);
}

double NNfunction_sb_sLsL::synapse0x1413840() {
   return (neuron0x1400100()*0.378943);
}

double NNfunction_sb_sLsL::synapse0x1413880() {
   return (neuron0x1400ad0()*0.678713);
}

double NNfunction_sb_sLsL::synapse0x1413e60() {
   return (neuron0x14014a0()*0.883118);
}

double NNfunction_sb_sLsL::synapse0x1413ea0() {
   return (neuron0x1401e70()*0.379491);
}

double NNfunction_sb_sLsL::synapse0x1413ee0() {
   return (neuron0x1402840()*0.71723);
}

double NNfunction_sb_sLsL::synapse0x1413f20() {
   return (neuron0x1403210()*0.41523);
}

double NNfunction_sb_sLsL::synapse0x1413f60() {
   return (neuron0x1403be0()*0.749047);
}

double NNfunction_sb_sLsL::synapse0x1413fa0() {
   return (neuron0x14047c0()*0.646362);
}

double NNfunction_sb_sLsL::synapse0x1413fe0() {
   return (neuron0x1405190()*0.718998);
}

double NNfunction_sb_sLsL::synapse0x1414020() {
   return (neuron0x13f6010()*1.02841);
}

double NNfunction_sb_sLsL::synapse0x1414060() {
   return (neuron0x13f69e0()*-0.388861);
}

double NNfunction_sb_sLsL::synapse0x14140a0() {
   return (neuron0x13f73b0()*0.354515);
}

double NNfunction_sb_sLsL::synapse0x14140e0() {
   return (neuron0x14099f0()*0.822757);
}

double NNfunction_sb_sLsL::synapse0x1414120() {
   return (neuron0x140a2a0()*0.677784);
}

double NNfunction_sb_sLsL::synapse0x1414160() {
   return (neuron0x140ac70()*0.0322478);
}

double NNfunction_sb_sLsL::synapse0x14141a0() {
   return (neuron0x140b640()*0.437261);
}

double NNfunction_sb_sLsL::synapse0x1414520() {
   return (neuron0x13e75c0()*-0.508599);
}

double NNfunction_sb_sLsL::synapse0x1414560() {
   return (neuron0x13e7ed0()*-2.17095);
}

double NNfunction_sb_sLsL::synapse0x14145a0() {
   return (neuron0x13e89b0()*0.489833);
}

double NNfunction_sb_sLsL::synapse0x14145e0() {
   return (neuron0x11a2240()*0.0483266);
}

double NNfunction_sb_sLsL::synapse0x1414620() {
   return (neuron0x13e97d0()*-0.589669);
}

double NNfunction_sb_sLsL::synapse0x1414660() {
   return (neuron0x13ea1a0()*0.618433);
}

double NNfunction_sb_sLsL::synapse0x14146a0() {
   return (neuron0x13eaf70()*-0.428001);
}

double NNfunction_sb_sLsL::synapse0x14146e0() {
   return (neuron0x13eb940()*-0.810411);
}

double NNfunction_sb_sLsL::synapse0x1414720() {
   return (neuron0x13ec310()*-0.0610434);
}

double NNfunction_sb_sLsL::synapse0x1414760() {
   return (neuron0x13ecdf0()*0.556436);
}

double NNfunction_sb_sLsL::synapse0x14147a0() {
   return (neuron0x13ed7c0()*-1.128);
}

double NNfunction_sb_sLsL::synapse0x14147e0() {
   return (neuron0x13ea8a0()*0.113044);
}

double NNfunction_sb_sLsL::synapse0x1414820() {
   return (neuron0x13ef370()*-1.57436);
}

double NNfunction_sb_sLsL::synapse0x1414860() {
   return (neuron0x13efd40()*-1.79289);
}

double NNfunction_sb_sLsL::synapse0x14148a0() {
   return (neuron0x13f0710()*1.092);
}

double NNfunction_sb_sLsL::synapse0x14148e0() {
   return (neuron0x13f10e0()*0.100673);
}

double NNfunction_sb_sLsL::synapse0x1414370() {
   return (neuron0x13f2ef0()*1.61038);
}

double NNfunction_sb_sLsL::synapse0x14143b0() {
   return (neuron0x13f31d0()*0.24032);
}

double NNfunction_sb_sLsL::synapse0x1414a30() {
   return (neuron0x13f3ba0()*0.489653);
}

double NNfunction_sb_sLsL::synapse0x1414a70() {
   return (neuron0x13f4570()*0.00562357);
}

double NNfunction_sb_sLsL::synapse0x1414ab0() {
   return (neuron0x13f4f40()*-0.521389);
}

double NNfunction_sb_sLsL::synapse0x1414af0() {
   return (neuron0x13f5910()*-0.405747);
}

double NNfunction_sb_sLsL::synapse0x1414b30() {
   return (neuron0x13ee460()*-0.0381448);
}

double NNfunction_sb_sLsL::synapse0x1414b70() {
   return (neuron0x13eee30()*0.43288);
}

double NNfunction_sb_sLsL::synapse0x1414bb0() {
   return (neuron0x13f86a0()*-0.313645);
}

double NNfunction_sb_sLsL::synapse0x1414bf0() {
   return (neuron0x13f9070()*-0.145995);
}

double NNfunction_sb_sLsL::synapse0x1414c30() {
   return (neuron0x13f9a40()*-0.178377);
}

double NNfunction_sb_sLsL::synapse0x1414c70() {
   return (neuron0x13fa410()*-0.894627);
}

double NNfunction_sb_sLsL::synapse0x1414cb0() {
   return (neuron0x13fade0()*2.94231);
}

double NNfunction_sb_sLsL::synapse0x1414cf0() {
   return (neuron0x13fb7b0()*0.86106);
}

double NNfunction_sb_sLsL::synapse0x1414d30() {
   return (neuron0x13fc180()*-0.861587);
}

double NNfunction_sb_sLsL::synapse0x1414d70() {
   return (neuron0x13fcb50()*1.05995);
}

double NNfunction_sb_sLsL::synapse0x1414920() {
   return (neuron0x13f2be0()*0.39009);
}

double NNfunction_sb_sLsL::synapse0x1414960() {
   return (neuron0x13ff730()*1.45167);
}

double NNfunction_sb_sLsL::synapse0x14149a0() {
   return (neuron0x1400100()*0.142861);
}

double NNfunction_sb_sLsL::synapse0x14149e0() {
   return (neuron0x1400ad0()*-0.227836);
}

double NNfunction_sb_sLsL::synapse0x1414fc0() {
   return (neuron0x14014a0()*0.207925);
}

double NNfunction_sb_sLsL::synapse0x1415000() {
   return (neuron0x1401e70()*0.114375);
}

double NNfunction_sb_sLsL::synapse0x1415040() {
   return (neuron0x1402840()*0.492009);
}

double NNfunction_sb_sLsL::synapse0x1415080() {
   return (neuron0x1403210()*2.92472);
}

double NNfunction_sb_sLsL::synapse0x14150c0() {
   return (neuron0x1403be0()*-0.907449);
}

double NNfunction_sb_sLsL::synapse0x1415100() {
   return (neuron0x14047c0()*0.123139);
}

double NNfunction_sb_sLsL::synapse0x1415140() {
   return (neuron0x1405190()*-0.597747);
}

double NNfunction_sb_sLsL::synapse0x1415180() {
   return (neuron0x13f6010()*-0.616846);
}

double NNfunction_sb_sLsL::synapse0x14151c0() {
   return (neuron0x13f69e0()*0.12421);
}

double NNfunction_sb_sLsL::synapse0x1415200() {
   return (neuron0x13f73b0()*0.35942);
}

double NNfunction_sb_sLsL::synapse0x1415240() {
   return (neuron0x14099f0()*0.0501543);
}

double NNfunction_sb_sLsL::synapse0x1415280() {
   return (neuron0x140a2a0()*-0.150968);
}

double NNfunction_sb_sLsL::synapse0x14152c0() {
   return (neuron0x140ac70()*-2.82722);
}

double NNfunction_sb_sLsL::synapse0x1415300() {
   return (neuron0x140b640()*0.752239);
}

double NNfunction_sb_sLsL::synapse0x1415680() {
   return (neuron0x13e75c0()*-0.603248);
}

double NNfunction_sb_sLsL::synapse0x14156c0() {
   return (neuron0x13e7ed0()*4.12905);
}

double NNfunction_sb_sLsL::synapse0x1415700() {
   return (neuron0x13e89b0()*-0.555931);
}

double NNfunction_sb_sLsL::synapse0x1415740() {
   return (neuron0x11a2240()*2.40917);
}

double NNfunction_sb_sLsL::synapse0x1415780() {
   return (neuron0x13e97d0()*0.51155);
}

double NNfunction_sb_sLsL::synapse0x14157c0() {
   return (neuron0x13ea1a0()*-0.171344);
}

double NNfunction_sb_sLsL::synapse0x1415800() {
   return (neuron0x13eaf70()*0.0428995);
}

double NNfunction_sb_sLsL::synapse0x1415840() {
   return (neuron0x13eb940()*-1.18197);
}

double NNfunction_sb_sLsL::synapse0x1415880() {
   return (neuron0x13ec310()*0.0155312);
}

double NNfunction_sb_sLsL::synapse0x14158c0() {
   return (neuron0x13ecdf0()*0.199209);
}

double NNfunction_sb_sLsL::synapse0x1415900() {
   return (neuron0x13ed7c0()*-3.0529);
}

double NNfunction_sb_sLsL::synapse0x1415940() {
   return (neuron0x13ea8a0()*0.0415526);
}

double NNfunction_sb_sLsL::synapse0x1415980() {
   return (neuron0x13ef370()*-2.99027);
}

double NNfunction_sb_sLsL::synapse0x14159c0() {
   return (neuron0x13efd40()*0.0107872);
}

double NNfunction_sb_sLsL::synapse0x1415a00() {
   return (neuron0x13f0710()*-0.30456);
}

double NNfunction_sb_sLsL::synapse0x1415a40() {
   return (neuron0x13f10e0()*-0.00598674);
}

double NNfunction_sb_sLsL::synapse0x14154d0() {
   return (neuron0x13f2ef0()*0.657959);
}

double NNfunction_sb_sLsL::synapse0x1415510() {
   return (neuron0x13f31d0()*-0.0480677);
}

double NNfunction_sb_sLsL::synapse0x1415b90() {
   return (neuron0x13f3ba0()*-0.404516);
}

double NNfunction_sb_sLsL::synapse0x1415bd0() {
   return (neuron0x13f4570()*0.0316103);
}

double NNfunction_sb_sLsL::synapse0x1415c10() {
   return (neuron0x13f4f40()*3.19951);
}

double NNfunction_sb_sLsL::synapse0x1415c50() {
   return (neuron0x13f5910()*0.0235179);
}

double NNfunction_sb_sLsL::synapse0x1415c90() {
   return (neuron0x13ee460()*-0.151729);
}

double NNfunction_sb_sLsL::synapse0x1415cd0() {
   return (neuron0x13eee30()*0.789299);
}

double NNfunction_sb_sLsL::synapse0x1415d10() {
   return (neuron0x13f86a0()*-0.477776);
}

double NNfunction_sb_sLsL::synapse0x1415d50() {
   return (neuron0x13f9070()*0.840454);
}

double NNfunction_sb_sLsL::synapse0x1415d90() {
   return (neuron0x13f9a40()*-0.375167);
}

double NNfunction_sb_sLsL::synapse0x1415dd0() {
   return (neuron0x13fa410()*-0.552061);
}

double NNfunction_sb_sLsL::synapse0x1415e10() {
   return (neuron0x13fade0()*-2.56338);
}

double NNfunction_sb_sLsL::synapse0x1415e50() {
   return (neuron0x13fb7b0()*0.427849);
}

double NNfunction_sb_sLsL::synapse0x1415e90() {
   return (neuron0x13fc180()*0.293104);
}

double NNfunction_sb_sLsL::synapse0x1415ed0() {
   return (neuron0x13fcb50()*-0.693671);
}

double NNfunction_sb_sLsL::synapse0x1415a80() {
   return (neuron0x13f2be0()*-1.12062);
}

double NNfunction_sb_sLsL::synapse0x1415ac0() {
   return (neuron0x13ff730()*0.514779);
}

double NNfunction_sb_sLsL::synapse0x1415b00() {
   return (neuron0x1400100()*0.0606711);
}

double NNfunction_sb_sLsL::synapse0x1415b40() {
   return (neuron0x1400ad0()*0.568846);
}

double NNfunction_sb_sLsL::synapse0x1416120() {
   return (neuron0x14014a0()*-0.683538);
}

double NNfunction_sb_sLsL::synapse0x1416160() {
   return (neuron0x1401e70()*-0.00263918);
}

double NNfunction_sb_sLsL::synapse0x14161a0() {
   return (neuron0x1402840()*0.455829);
}

double NNfunction_sb_sLsL::synapse0x14161e0() {
   return (neuron0x1403210()*-1.49389);
}

double NNfunction_sb_sLsL::synapse0x1416220() {
   return (neuron0x1403be0()*-1.18888);
}

double NNfunction_sb_sLsL::synapse0x1416260() {
   return (neuron0x14047c0()*0.0529041);
}

double NNfunction_sb_sLsL::synapse0x14162a0() {
   return (neuron0x1405190()*-0.493998);
}

double NNfunction_sb_sLsL::synapse0x14162e0() {
   return (neuron0x13f6010()*0.102723);
}

double NNfunction_sb_sLsL::synapse0x1416320() {
   return (neuron0x13f69e0()*2.22067);
}

double NNfunction_sb_sLsL::synapse0x1416360() {
   return (neuron0x13f73b0()*1.47475);
}

double NNfunction_sb_sLsL::synapse0x14163a0() {
   return (neuron0x14099f0()*-0.145958);
}

double NNfunction_sb_sLsL::synapse0x14163e0() {
   return (neuron0x140a2a0()*-0.770923);
}

double NNfunction_sb_sLsL::synapse0x1416420() {
   return (neuron0x140ac70()*2.0859);
}

double NNfunction_sb_sLsL::synapse0x1416460() {
   return (neuron0x140b640()*-0.564707);
}

double NNfunction_sb_sLsL::synapse0x13e7580() {
   return (neuron0x1412840()*-6.2148);
}

double NNfunction_sb_sLsL::synapse0x14166c0() {
   return (neuron0x1412be0()*1.7077);
}

double NNfunction_sb_sLsL::synapse0x1416700() {
   return (neuron0x1413080()*-0.314548);
}

double NNfunction_sb_sLsL::synapse0x1416740() {
   return (neuron0x14141e0()*-2.90042);
}

double NNfunction_sb_sLsL::synapse0x1416780() {
   return (neuron0x1415340()*12.7924);
}

