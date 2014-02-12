#include "NNfunction_sb_sRsR.h"
#include <cmath>

double NNfunction_sb_sRsR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5678)/15.3327;
   input1 = (in1 - 0.450846)/1147.72;
   input2 = (in2 - 666.768)/632.515;
   input3 = (in3 - -60.5284)/829.938;
   input4 = (in4 - 1066.6)/958.004;
   input5 = (in5 - 891.714)/940.693;
   input6 = (in6 - 912.268)/951.242;
   input7 = (in7 - 920.248)/927.912;
   input8 = (in8 - 923.148)/977.198;
   input9 = (in9 - 904.308)/959.002;
   input10 = (in10 - 990.64)/958.641;
   input11 = (in11 - 725.898)/868.802;
   input12 = (in12 - 735.168)/878.905;
   input13 = (in13 - 507.528)/524.913;
   input14 = (in14 - 721.823)/818.316;
   input15 = (in15 - 721.377)/818.162;
   input16 = (in16 - 541.366)/566.279;
   input17 = (in17 - 765.578)/903.485;
   input18 = (in18 - 317.034)/288.129;
   input19 = (in19 - 811.316)/889.765;
   input20 = (in20 - -8.77869)/491.507;
   input21 = (in21 - 5.30392)/1165.61;
   input22 = (in22 - -0.639575)/1196.98;
   input23 = (in23 - -198.485)/602.744;
   switch(index) {
     case 0:
         return neuron0x171a4a0();
     default:
         return 0.;
   }
}

double NNfunction_sb_sRsR::Value(int index, double* input) {
   input0 = (input[0] - 23.5678)/15.3327;
   input1 = (input[1] - 0.450846)/1147.72;
   input2 = (input[2] - 666.768)/632.515;
   input3 = (input[3] - -60.5284)/829.938;
   input4 = (input[4] - 1066.6)/958.004;
   input5 = (input[5] - 891.714)/940.693;
   input6 = (input[6] - 912.268)/951.242;
   input7 = (input[7] - 920.248)/927.912;
   input8 = (input[8] - 923.148)/977.198;
   input9 = (input[9] - 904.308)/959.002;
   input10 = (input[10] - 990.64)/958.641;
   input11 = (input[11] - 725.898)/868.802;
   input12 = (input[12] - 735.168)/878.905;
   input13 = (input[13] - 507.528)/524.913;
   input14 = (input[14] - 721.823)/818.316;
   input15 = (input[15] - 721.377)/818.162;
   input16 = (input[16] - 541.366)/566.279;
   input17 = (input[17] - 765.578)/903.485;
   input18 = (input[18] - 317.034)/288.129;
   input19 = (input[19] - 811.316)/889.765;
   input20 = (input[20] - -8.77869)/491.507;
   input21 = (input[21] - 5.30392)/1165.61;
   input22 = (input[22] - -0.639575)/1196.98;
   input23 = (input[23] - -198.485)/602.744;
   switch(index) {
     case 0:
         return neuron0x171a4a0();
     default:
         return 0.;
   }
}

double NNfunction_sb_sRsR::neuron0x16e6560() {
   return input0;
}

double NNfunction_sb_sRsR::neuron0x16e68a0() {
   return input1;
}

double NNfunction_sb_sRsR::neuron0x16e6be0() {
   return input2;
}

double NNfunction_sb_sRsR::neuron0x16e6f20() {
   return input3;
}

double NNfunction_sb_sRsR::neuron0x16e7260() {
   return input4;
}

double NNfunction_sb_sRsR::neuron0x16e75a0() {
   return input5;
}

double NNfunction_sb_sRsR::neuron0x16e78e0() {
   return input6;
}

double NNfunction_sb_sRsR::neuron0x16e7c20() {
   return input7;
}

double NNfunction_sb_sRsR::neuron0x16e7f60() {
   return input8;
}

double NNfunction_sb_sRsR::neuron0x16e82a0() {
   return input9;
}

double NNfunction_sb_sRsR::neuron0x16e85e0() {
   return input10;
}

double NNfunction_sb_sRsR::neuron0x16e8920() {
   return input11;
}

double NNfunction_sb_sRsR::neuron0x16e8c60() {
   return input12;
}

double NNfunction_sb_sRsR::neuron0x16e8fa0() {
   return input13;
}

double NNfunction_sb_sRsR::neuron0x16e92e0() {
   return input14;
}

double NNfunction_sb_sRsR::neuron0x16e9620() {
   return input15;
}

double NNfunction_sb_sRsR::neuron0x16e9960() {
   return input16;
}

double NNfunction_sb_sRsR::neuron0x16e9ec0() {
   return input17;
}

double NNfunction_sb_sRsR::neuron0x16ea0e0() {
   return input18;
}

double NNfunction_sb_sRsR::neuron0x16ea420() {
   return input19;
}

double NNfunction_sb_sRsR::neuron0x16ea760() {
   return input20;
}

double NNfunction_sb_sRsR::neuron0x16eaaa0() {
   return input21;
}

double NNfunction_sb_sRsR::neuron0x16eade0() {
   return input22;
}

double NNfunction_sb_sRsR::neuron0x16eb120() {
   return input23;
}

double NNfunction_sb_sRsR::input0x16eb5c0() {
   double input = -1.29384;
   input += synapse0x14a63d0();
   input += synapse0x16e6420();
   input += synapse0x16e6460();
   input += synapse0x16eb870();
   input += synapse0x16eb8b0();
   input += synapse0x16eb8f0();
   input += synapse0x16eb930();
   input += synapse0x16eb970();
   input += synapse0x16eb9b0();
   input += synapse0x16eb9f0();
   input += synapse0x16eba30();
   input += synapse0x16eba70();
   input += synapse0x16ebab0();
   input += synapse0x16ebaf0();
   input += synapse0x16ebb30();
   input += synapse0x16ebb70();
   input += synapse0x16e6390();
   input += synapse0x16e63d0();
   input += synapse0x1497c70();
   input += synapse0x1497cb0();
   input += synapse0x16ebdd0();
   input += synapse0x16ebe10();
   input += synapse0x16ebe50();
   input += synapse0x16ebe90();
   return input;
}

double NNfunction_sb_sRsR::neuron0x16eb5c0() {
   double input = input0x16eb5c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x16ebed0() {
   double input = -0.389096;
   input += synapse0x16ec210();
   input += synapse0x16ec250();
   input += synapse0x16ec290();
   input += synapse0x16ec2d0();
   input += synapse0x16ec310();
   input += synapse0x16ec350();
   input += synapse0x16ec390();
   input += synapse0x16ec3d0();
   input += synapse0x16ec410();
   input += synapse0x16ebcc0();
   input += synapse0x16ebd00();
   input += synapse0x16ebd40();
   input += synapse0x16ebd80();
   input += synapse0x16ec660();
   input += synapse0x16ec6a0();
   input += synapse0x16ec6e0();
   input += synapse0x16ec060();
   input += synapse0x16ec0a0();
   input += synapse0x16ec830();
   input += synapse0x16ec870();
   input += synapse0x16ec8b0();
   input += synapse0x16ec8f0();
   input += synapse0x16ec930();
   input += synapse0x16ec970();
   return input;
}

double NNfunction_sb_sRsR::neuron0x16ebed0() {
   double input = input0x16ebed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x16ec9b0() {
   double input = 0.0554907;
   input += synapse0x16eccf0();
   input += synapse0x16ecd30();
   input += synapse0x16ecd70();
   input += synapse0x16ecdb0();
   input += synapse0x16ecdf0();
   input += synapse0x16ece30();
   input += synapse0x16ece70();
   input += synapse0x16eceb0();
   input += synapse0x16ecef0();
   input += synapse0x16ecf30();
   input += synapse0x16ecf70();
   input += synapse0x16ecfb0();
   input += synapse0x16ecff0();
   input += synapse0x16ed030();
   input += synapse0x16ed070();
   input += synapse0x16ed0b0();
   input += synapse0x16ecb40();
   input += synapse0x16ecb80();
   input += synapse0x14a5ac0();
   input += synapse0x14a5b00();
   input += synapse0x16d55f0();
   input += synapse0x16d5630();
   input += synapse0x16d5670();
   input += synapse0x16e64a0();
   return input;
}

double NNfunction_sb_sRsR::neuron0x16ec9b0() {
   double input = input0x16ec9b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x14a6240() {
   double input = -1.98232;
   input += synapse0x16ec600();
   input += synapse0x16e64e0();
   input += synapse0x16e6520();
   input += synapse0x16ed200();
   input += synapse0x16ed240();
   input += synapse0x16ed280();
   input += synapse0x16ed2c0();
   input += synapse0x16ed300();
   input += synapse0x16ed340();
   input += synapse0x16ed380();
   input += synapse0x16ed3c0();
   input += synapse0x16ed400();
   input += synapse0x16ed440();
   input += synapse0x16ed480();
   input += synapse0x16ed4c0();
   input += synapse0x16ed500();
   input += synapse0x16ec450();
   input += synapse0x16ec490();
   input += synapse0x16ed650();
   input += synapse0x16ed690();
   input += synapse0x16ed6d0();
   input += synapse0x16ed710();
   input += synapse0x16ed750();
   input += synapse0x16ed790();
   return input;
}

double NNfunction_sb_sRsR::neuron0x14a6240() {
   double input = input0x14a6240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x16ed7d0() {
   double input = 0.415239;
   input += synapse0x16edb10();
   input += synapse0x16edb50();
   input += synapse0x16edb90();
   input += synapse0x16edbd0();
   input += synapse0x16edc10();
   input += synapse0x16edc50();
   input += synapse0x16edc90();
   input += synapse0x16edcd0();
   input += synapse0x16edd10();
   input += synapse0x16edd50();
   input += synapse0x16edd90();
   input += synapse0x16eddd0();
   input += synapse0x16ede10();
   input += synapse0x16ede50();
   input += synapse0x16ede90();
   input += synapse0x16eded0();
   input += synapse0x16ed960();
   input += synapse0x16ed9a0();
   input += synapse0x16ee020();
   input += synapse0x16ee060();
   input += synapse0x16ee0a0();
   input += synapse0x16ee0e0();
   input += synapse0x16ee120();
   input += synapse0x16ee160();
   return input;
}

double NNfunction_sb_sRsR::neuron0x16ed7d0() {
   double input = input0x16ed7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x16ee1a0() {
   double input = 2.86194;
   input += synapse0x16ee4e0();
   input += synapse0x16ee520();
   input += synapse0x16ee560();
   input += synapse0x16ee5a0();
   input += synapse0x16ee5e0();
   input += synapse0x16ee620();
   input += synapse0x16ee660();
   input += synapse0x16ee6a0();
   input += synapse0x16ee6e0();
   input += synapse0x14a5e30();
   input += synapse0x14a5e70();
   input += synapse0x14a5eb0();
   input += synapse0x14a5ef0();
   input += synapse0x14a5f30();
   input += synapse0x14a5f70();
   input += synapse0x14a5fb0();
   input += synapse0x16ee330();
   input += synapse0x16ee370();
   input += synapse0x14a6100();
   input += synapse0x14a6140();
   input += synapse0x14a6180();
   input += synapse0x14a61c0();
   input += synapse0x14a6200();
   input += synapse0x16eef30();
   return input;
}

double NNfunction_sb_sRsR::neuron0x16ee1a0() {
   double input = input0x16ee1a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x16eef70() {
   double input = 0.136162;
   input += synapse0x16ef2b0();
   input += synapse0x16ef2f0();
   input += synapse0x16ef330();
   input += synapse0x16ef370();
   input += synapse0x16ef3b0();
   input += synapse0x16ef3f0();
   input += synapse0x16ef430();
   input += synapse0x16ef470();
   input += synapse0x16ef4b0();
   input += synapse0x16ef4f0();
   input += synapse0x16ef530();
   input += synapse0x16ef570();
   input += synapse0x16ef5b0();
   input += synapse0x16ef5f0();
   input += synapse0x16ef630();
   input += synapse0x16ef670();
   input += synapse0x16ef100();
   input += synapse0x16ef140();
   input += synapse0x16ef7c0();
   input += synapse0x16ef800();
   input += synapse0x16ef840();
   input += synapse0x16ef880();
   input += synapse0x16ef8c0();
   input += synapse0x16ef900();
   return input;
}

double NNfunction_sb_sRsR::neuron0x16eef70() {
   double input = input0x16eef70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x16ef940() {
   double input = -0.691849;
   input += synapse0x16efc80();
   input += synapse0x16efcc0();
   input += synapse0x16efd00();
   input += synapse0x16efd40();
   input += synapse0x16efd80();
   input += synapse0x16efdc0();
   input += synapse0x16efe00();
   input += synapse0x16efe40();
   input += synapse0x16efe80();
   input += synapse0x16efec0();
   input += synapse0x16eff00();
   input += synapse0x16eff40();
   input += synapse0x16eff80();
   input += synapse0x16effc0();
   input += synapse0x16f0000();
   input += synapse0x16f0040();
   input += synapse0x16efad0();
   input += synapse0x16efb10();
   input += synapse0x16f0190();
   input += synapse0x16f01d0();
   input += synapse0x16f0210();
   input += synapse0x16f0250();
   input += synapse0x16f0290();
   input += synapse0x16f02d0();
   return input;
}

double NNfunction_sb_sRsR::neuron0x16ef940() {
   double input = input0x16ef940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x16f0310() {
   double input = 1.94643;
   input += synapse0x16e9db0();
   input += synapse0x16e9df0();
   input += synapse0x16e9e30();
   input += synapse0x16e9e70();
   input += synapse0x16f0860();
   input += synapse0x16f08a0();
   input += synapse0x16f08e0();
   input += synapse0x16f0920();
   input += synapse0x16f0960();
   input += synapse0x16f09a0();
   input += synapse0x16f09e0();
   input += synapse0x16f0a20();
   input += synapse0x16f0a60();
   input += synapse0x16f0aa0();
   input += synapse0x16f0ae0();
   input += synapse0x16f0b20();
   input += synapse0x16f04a0();
   input += synapse0x16f04e0();
   input += synapse0x16f0c70();
   input += synapse0x16f0cb0();
   input += synapse0x16f0cf0();
   input += synapse0x16f0d30();
   input += synapse0x16f0d70();
   input += synapse0x16f0db0();
   return input;
}

double NNfunction_sb_sRsR::neuron0x16f0310() {
   double input = input0x16f0310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x16f0df0() {
   double input = -0.370848;
   input += synapse0x16f1130();
   input += synapse0x16f1170();
   input += synapse0x16f11b0();
   input += synapse0x16f11f0();
   input += synapse0x16f1230();
   input += synapse0x16f1270();
   input += synapse0x16f12b0();
   input += synapse0x16f12f0();
   input += synapse0x16f1330();
   input += synapse0x16f1370();
   input += synapse0x16f13b0();
   input += synapse0x16f13f0();
   input += synapse0x16f1430();
   input += synapse0x16f1470();
   input += synapse0x16f14b0();
   input += synapse0x16f14f0();
   input += synapse0x16f0f80();
   input += synapse0x16f0fc0();
   input += synapse0x16f1640();
   input += synapse0x16f1680();
   input += synapse0x16f16c0();
   input += synapse0x16f1700();
   input += synapse0x16f1740();
   input += synapse0x16f1780();
   return input;
}

double NNfunction_sb_sRsR::neuron0x16f0df0() {
   double input = input0x16f0df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x16f17c0() {
   double input = -0.256627;
   input += synapse0x16f1b00();
   input += synapse0x16f1b40();
   input += synapse0x16f1b80();
   input += synapse0x16f1bc0();
   input += synapse0x16f1c00();
   input += synapse0x16f1c40();
   input += synapse0x16f1c80();
   input += synapse0x16f1cc0();
   input += synapse0x16f1d00();
   input += synapse0x16f1d40();
   input += synapse0x16f1d80();
   input += synapse0x16f1dc0();
   input += synapse0x16f1e00();
   input += synapse0x16f1e40();
   input += synapse0x16f1e80();
   input += synapse0x16f1ec0();
   input += synapse0x16f1950();
   input += synapse0x16f1990();
   input += synapse0x16ee720();
   input += synapse0x16ee760();
   input += synapse0x16ee7a0();
   input += synapse0x16ee7e0();
   input += synapse0x16ee820();
   input += synapse0x16ee860();
   return input;
}

double NNfunction_sb_sRsR::neuron0x16f17c0() {
   double input = input0x16f17c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x16ee8a0() {
   double input = -1.73692;
   input += synapse0x16eebe0();
   input += synapse0x16eec20();
   input += synapse0x16eec60();
   input += synapse0x16eeca0();
   input += synapse0x16eece0();
   input += synapse0x16eed20();
   input += synapse0x16eed60();
   input += synapse0x16eeda0();
   input += synapse0x16eede0();
   input += synapse0x16eee20();
   input += synapse0x16eee60();
   input += synapse0x16eeea0();
   input += synapse0x16eeee0();
   input += synapse0x16f3020();
   input += synapse0x16f3060();
   input += synapse0x16f30a0();
   input += synapse0x16eea30();
   input += synapse0x16eea70();
   input += synapse0x16f31f0();
   input += synapse0x16f3230();
   input += synapse0x16f3270();
   input += synapse0x16f32b0();
   input += synapse0x16f32f0();
   input += synapse0x16f3330();
   return input;
}

double NNfunction_sb_sRsR::neuron0x16ee8a0() {
   double input = input0x16ee8a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x16f3370() {
   double input = 0.338983;
   input += synapse0x16f36b0();
   input += synapse0x16f36f0();
   input += synapse0x16f3730();
   input += synapse0x16f3770();
   input += synapse0x16f37b0();
   input += synapse0x16f37f0();
   input += synapse0x16f3830();
   input += synapse0x16f3870();
   input += synapse0x16f38b0();
   input += synapse0x16f38f0();
   input += synapse0x16f3930();
   input += synapse0x16f3970();
   input += synapse0x16f39b0();
   input += synapse0x16f39f0();
   input += synapse0x16f3a30();
   input += synapse0x16f3a70();
   input += synapse0x16f3500();
   input += synapse0x16f3540();
   input += synapse0x16f3bc0();
   input += synapse0x16f3c00();
   input += synapse0x16f3c40();
   input += synapse0x16f3c80();
   input += synapse0x16f3cc0();
   input += synapse0x16f3d00();
   return input;
}

double NNfunction_sb_sRsR::neuron0x16f3370() {
   double input = input0x16f3370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x16f3d40() {
   double input = -0.211655;
   input += synapse0x16f4080();
   input += synapse0x16f40c0();
   input += synapse0x16f4100();
   input += synapse0x16f4140();
   input += synapse0x16f4180();
   input += synapse0x16f41c0();
   input += synapse0x16f4200();
   input += synapse0x16f4240();
   input += synapse0x16f4280();
   input += synapse0x16f42c0();
   input += synapse0x16f4300();
   input += synapse0x16f4340();
   input += synapse0x16f4380();
   input += synapse0x16f43c0();
   input += synapse0x16f4400();
   input += synapse0x16f4440();
   input += synapse0x16f3ed0();
   input += synapse0x16f3f10();
   input += synapse0x16f4590();
   input += synapse0x16f45d0();
   input += synapse0x16f4610();
   input += synapse0x16f4650();
   input += synapse0x16f4690();
   input += synapse0x16f46d0();
   return input;
}

double NNfunction_sb_sRsR::neuron0x16f3d40() {
   double input = input0x16f3d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x16f4710() {
   double input = 1.4787;
   input += synapse0x16f4a50();
   input += synapse0x16f4a90();
   input += synapse0x16f4ad0();
   input += synapse0x16f4b10();
   input += synapse0x16f4b50();
   input += synapse0x16f4b90();
   input += synapse0x16f4bd0();
   input += synapse0x16f4c10();
   input += synapse0x16f4c50();
   input += synapse0x16f4c90();
   input += synapse0x16f4cd0();
   input += synapse0x16f4d10();
   input += synapse0x16f4d50();
   input += synapse0x16f4d90();
   input += synapse0x16f4dd0();
   input += synapse0x16f4e10();
   input += synapse0x16f48a0();
   input += synapse0x16f48e0();
   input += synapse0x16f4f60();
   input += synapse0x16f4fa0();
   input += synapse0x16f4fe0();
   input += synapse0x16f5020();
   input += synapse0x16f5060();
   input += synapse0x16f50a0();
   return input;
}

double NNfunction_sb_sRsR::neuron0x16f4710() {
   double input = input0x16f4710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x16f50e0() {
   double input = -6.24538;
   input += synapse0x16f5420();
   input += synapse0x16e6780();
   input += synapse0x16e67c0();
   input += synapse0x16e6ac0();
   input += synapse0x16e6b00();
   input += synapse0x16e6e00();
   input += synapse0x16e6e40();
   input += synapse0x16e7140();
   input += synapse0x16e7180();
   input += synapse0x16e7480();
   input += synapse0x16e74c0();
   input += synapse0x16e77c0();
   input += synapse0x16e7800();
   input += synapse0x16e7b00();
   input += synapse0x16e7b40();
   input += synapse0x16e7e40();
   input += synapse0x16e7e80();
   input += synapse0x16e8180();
   input += synapse0x16e81c0();
   input += synapse0x16e84c0();
   input += synapse0x16e8500();
   input += synapse0x16e8800();
   input += synapse0x16e8840();
   input += synapse0x16e8b40();
   return input;
}

double NNfunction_sb_sRsR::neuron0x16f50e0() {
   double input = input0x16f50e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x16f6ef0() {
   double input = 0.378996;
   input += synapse0x16e8b80();
   input += synapse0x16e9840();
   input += synapse0x16e9880();
   input += synapse0x16f5270();
   input += synapse0x16f52b0();
   input += synapse0x16e9b80();
   input += synapse0x16e9bc0();
   input += synapse0x1497b50();
   input += synapse0x1497b90();
   input += synapse0x16ea300();
   input += synapse0x16ea340();
   input += synapse0x16ea640();
   input += synapse0x16ea680();
   input += synapse0x16ea980();
   input += synapse0x16ea9c0();
   input += synapse0x16eacc0();
   input += synapse0x16ead00();
   input += synapse0x16eb000();
   input += synapse0x16eb040();
   input += synapse0x16eb340();
   input += synapse0x16eb380();
   input += synapse0x16e8e80();
   input += synapse0x16e8ec0();
   input += synapse0x16f7190();
   return input;
}

double NNfunction_sb_sRsR::neuron0x16f6ef0() {
   double input = input0x16f6ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x16f71d0() {
   double input = 2.32854;
   input += synapse0x16f7510();
   input += synapse0x16f7550();
   input += synapse0x16f7590();
   input += synapse0x16f75d0();
   input += synapse0x16f7610();
   input += synapse0x16f7650();
   input += synapse0x16f7690();
   input += synapse0x16f76d0();
   input += synapse0x16f7710();
   input += synapse0x16f7750();
   input += synapse0x16f7790();
   input += synapse0x16f77d0();
   input += synapse0x16f7810();
   input += synapse0x16f7850();
   input += synapse0x16f7890();
   input += synapse0x16f78d0();
   input += synapse0x16f7360();
   input += synapse0x16f73a0();
   input += synapse0x16f7a20();
   input += synapse0x16f7a60();
   input += synapse0x16f7aa0();
   input += synapse0x16f7ae0();
   input += synapse0x16f7b20();
   input += synapse0x16f7b60();
   return input;
}

double NNfunction_sb_sRsR::neuron0x16f71d0() {
   double input = input0x16f71d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x16f7ba0() {
   double input = -0.0625453;
   input += synapse0x16f7ee0();
   input += synapse0x16f7f20();
   input += synapse0x16f7f60();
   input += synapse0x16f7fa0();
   input += synapse0x16f7fe0();
   input += synapse0x16f8020();
   input += synapse0x16f8060();
   input += synapse0x16f80a0();
   input += synapse0x16f80e0();
   input += synapse0x16f8120();
   input += synapse0x16f8160();
   input += synapse0x16f81a0();
   input += synapse0x16f81e0();
   input += synapse0x16f8220();
   input += synapse0x16f8260();
   input += synapse0x16f82a0();
   input += synapse0x16f7d30();
   input += synapse0x16f7d70();
   input += synapse0x16f83f0();
   input += synapse0x16f8430();
   input += synapse0x16f8470();
   input += synapse0x16f84b0();
   input += synapse0x16f84f0();
   input += synapse0x16f8530();
   return input;
}

double NNfunction_sb_sRsR::neuron0x16f7ba0() {
   double input = input0x16f7ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x16f8570() {
   double input = 0.468194;
   input += synapse0x16f88b0();
   input += synapse0x16f88f0();
   input += synapse0x16f8930();
   input += synapse0x16f8970();
   input += synapse0x16f89b0();
   input += synapse0x16f89f0();
   input += synapse0x16f8a30();
   input += synapse0x16f8a70();
   input += synapse0x16f8ab0();
   input += synapse0x16f8af0();
   input += synapse0x16f8b30();
   input += synapse0x16f8b70();
   input += synapse0x16f8bb0();
   input += synapse0x16f8bf0();
   input += synapse0x16f8c30();
   input += synapse0x16f8c70();
   input += synapse0x16f8700();
   input += synapse0x16f8740();
   input += synapse0x16f8dc0();
   input += synapse0x16f8e00();
   input += synapse0x16f8e40();
   input += synapse0x16f8e80();
   input += synapse0x16f8ec0();
   input += synapse0x16f8f00();
   return input;
}

double NNfunction_sb_sRsR::neuron0x16f8570() {
   double input = input0x16f8570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x16f8f40() {
   double input = -0.142492;
   input += synapse0x16f9280();
   input += synapse0x16f92c0();
   input += synapse0x16f9300();
   input += synapse0x16f9340();
   input += synapse0x16f9380();
   input += synapse0x16f93c0();
   input += synapse0x16f9400();
   input += synapse0x16f9440();
   input += synapse0x16f9480();
   input += synapse0x16f94c0();
   input += synapse0x16f9500();
   input += synapse0x16f9540();
   input += synapse0x16f9580();
   input += synapse0x16f95c0();
   input += synapse0x16f9600();
   input += synapse0x16f9640();
   input += synapse0x16f90d0();
   input += synapse0x16f9110();
   input += synapse0x16f9790();
   input += synapse0x16f97d0();
   input += synapse0x16f9810();
   input += synapse0x16f9850();
   input += synapse0x16f9890();
   input += synapse0x16f98d0();
   return input;
}

double NNfunction_sb_sRsR::neuron0x16f8f40() {
   double input = input0x16f8f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x16f9910() {
   double input = -1.8823;
   input += synapse0x16f9c50();
   input += synapse0x16f9c90();
   input += synapse0x16f9cd0();
   input += synapse0x16f9d10();
   input += synapse0x16f9d50();
   input += synapse0x16f9d90();
   input += synapse0x16f9dd0();
   input += synapse0x16f9e10();
   input += synapse0x16f9e50();
   input += synapse0x16f2010();
   input += synapse0x16f2050();
   input += synapse0x16f2090();
   input += synapse0x16f20d0();
   input += synapse0x16f2110();
   input += synapse0x16f2150();
   input += synapse0x16f2190();
   input += synapse0x16f9aa0();
   input += synapse0x16f9ae0();
   input += synapse0x16f22e0();
   input += synapse0x16f2320();
   input += synapse0x16f2360();
   input += synapse0x16f23a0();
   input += synapse0x16f23e0();
   input += synapse0x16f2420();
   return input;
}

double NNfunction_sb_sRsR::neuron0x16f9910() {
   double input = input0x16f9910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x16f2460() {
   double input = -0.16063;
   input += synapse0x16f27a0();
   input += synapse0x16f27e0();
   input += synapse0x16f2820();
   input += synapse0x16f2860();
   input += synapse0x16f28a0();
   input += synapse0x16f28e0();
   input += synapse0x16f2920();
   input += synapse0x16f2960();
   input += synapse0x16f29a0();
   input += synapse0x16f29e0();
   input += synapse0x16f2a20();
   input += synapse0x16f2a60();
   input += synapse0x16f2aa0();
   input += synapse0x16f2ae0();
   input += synapse0x16f2b20();
   input += synapse0x16f2b60();
   input += synapse0x16f25f0();
   input += synapse0x16f2630();
   input += synapse0x16f2cb0();
   input += synapse0x16f2cf0();
   input += synapse0x16f2d30();
   input += synapse0x16f2d70();
   input += synapse0x16f2db0();
   input += synapse0x16f2df0();
   return input;
}

double NNfunction_sb_sRsR::neuron0x16f2460() {
   double input = input0x16f2460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x16f2e30() {
   double input = 0.530214;
   input += synapse0x16f2fc0();
   input += synapse0x16fc050();
   input += synapse0x16fc090();
   input += synapse0x16fc0d0();
   input += synapse0x16fc110();
   input += synapse0x16fc150();
   input += synapse0x16fc190();
   input += synapse0x16fc1d0();
   input += synapse0x16fc210();
   input += synapse0x16fc250();
   input += synapse0x16fc290();
   input += synapse0x16fc2d0();
   input += synapse0x16fc310();
   input += synapse0x16fc350();
   input += synapse0x16fc390();
   input += synapse0x16fc3d0();
   input += synapse0x16fbea0();
   input += synapse0x16fbee0();
   input += synapse0x16fc520();
   input += synapse0x16fc560();
   input += synapse0x16fc5a0();
   input += synapse0x16fc5e0();
   input += synapse0x16fc620();
   input += synapse0x16fc660();
   return input;
}

double NNfunction_sb_sRsR::neuron0x16f2e30() {
   double input = input0x16f2e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x16fc6a0() {
   double input = -2.43687;
   input += synapse0x16fc9e0();
   input += synapse0x16fca20();
   input += synapse0x16fca60();
   input += synapse0x16fcaa0();
   input += synapse0x16fcae0();
   input += synapse0x16fcb20();
   input += synapse0x16fcb60();
   input += synapse0x16fcba0();
   input += synapse0x16fcbe0();
   input += synapse0x16fcc20();
   input += synapse0x16fcc60();
   input += synapse0x16fcca0();
   input += synapse0x16fcce0();
   input += synapse0x16fcd20();
   input += synapse0x16fcd60();
   input += synapse0x16fcda0();
   input += synapse0x16fc830();
   input += synapse0x16fc870();
   input += synapse0x16fcef0();
   input += synapse0x16fcf30();
   input += synapse0x16fcf70();
   input += synapse0x16fcfb0();
   input += synapse0x16fcff0();
   input += synapse0x16fd030();
   return input;
}

double NNfunction_sb_sRsR::neuron0x16fc6a0() {
   double input = input0x16fc6a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x16fd070() {
   double input = 0.674659;
   input += synapse0x16fd3b0();
   input += synapse0x16fd3f0();
   input += synapse0x16fd430();
   input += synapse0x16fd470();
   input += synapse0x16fd4b0();
   input += synapse0x16fd4f0();
   input += synapse0x16fd530();
   input += synapse0x16fd570();
   input += synapse0x16fd5b0();
   input += synapse0x16fd5f0();
   input += synapse0x16fd630();
   input += synapse0x16fd670();
   input += synapse0x16fd6b0();
   input += synapse0x16fd6f0();
   input += synapse0x16fd730();
   input += synapse0x16fd770();
   input += synapse0x16fd200();
   input += synapse0x16fd240();
   input += synapse0x16fd8c0();
   input += synapse0x16fd900();
   input += synapse0x16fd940();
   input += synapse0x16fd980();
   input += synapse0x16fd9c0();
   input += synapse0x16fda00();
   return input;
}

double NNfunction_sb_sRsR::neuron0x16fd070() {
   double input = input0x16fd070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x16fda40() {
   double input = -0.408081;
   input += synapse0x16fdd80();
   input += synapse0x16fddc0();
   input += synapse0x16fde00();
   input += synapse0x16fde40();
   input += synapse0x16fde80();
   input += synapse0x16fdec0();
   input += synapse0x16fdf00();
   input += synapse0x16fdf40();
   input += synapse0x16fdf80();
   input += synapse0x16fdfc0();
   input += synapse0x16fe000();
   input += synapse0x16fe040();
   input += synapse0x16fe080();
   input += synapse0x16fe0c0();
   input += synapse0x16fe100();
   input += synapse0x16fe140();
   input += synapse0x16fdbd0();
   input += synapse0x16fdc10();
   input += synapse0x16fe290();
   input += synapse0x16fe2d0();
   input += synapse0x16fe310();
   input += synapse0x16fe350();
   input += synapse0x16fe390();
   input += synapse0x16fe3d0();
   return input;
}

double NNfunction_sb_sRsR::neuron0x16fda40() {
   double input = input0x16fda40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x16fe410() {
   double input = -0.137996;
   input += synapse0x16fe750();
   input += synapse0x16fe790();
   input += synapse0x16fe7d0();
   input += synapse0x16fe810();
   input += synapse0x16fe850();
   input += synapse0x16fe890();
   input += synapse0x16fe8d0();
   input += synapse0x16fe910();
   input += synapse0x16fe950();
   input += synapse0x16fe990();
   input += synapse0x16fe9d0();
   input += synapse0x16fea10();
   input += synapse0x16fea50();
   input += synapse0x16fea90();
   input += synapse0x16fead0();
   input += synapse0x16feb10();
   input += synapse0x16fe5a0();
   input += synapse0x16fe5e0();
   input += synapse0x16fec60();
   input += synapse0x16feca0();
   input += synapse0x16fece0();
   input += synapse0x16fed20();
   input += synapse0x16fed60();
   input += synapse0x16feda0();
   return input;
}

double NNfunction_sb_sRsR::neuron0x16fe410() {
   double input = input0x16fe410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x16fede0() {
   double input = 0.759005;
   input += synapse0x16ff120();
   input += synapse0x16ff160();
   input += synapse0x16ff1a0();
   input += synapse0x16ff1e0();
   input += synapse0x16ff220();
   input += synapse0x16ff260();
   input += synapse0x16ff2a0();
   input += synapse0x16ff2e0();
   input += synapse0x16ff320();
   input += synapse0x16ff360();
   input += synapse0x16ff3a0();
   input += synapse0x16ff3e0();
   input += synapse0x16ff420();
   input += synapse0x16ff460();
   input += synapse0x16ff4a0();
   input += synapse0x16ff4e0();
   input += synapse0x16fef70();
   input += synapse0x16fefb0();
   input += synapse0x16ff630();
   input += synapse0x16ff670();
   input += synapse0x16ff6b0();
   input += synapse0x16ff6f0();
   input += synapse0x16ff730();
   input += synapse0x16ff770();
   return input;
}

double NNfunction_sb_sRsR::neuron0x16fede0() {
   double input = input0x16fede0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x16ff7b0() {
   double input = 1.57236;
   input += synapse0x16ffaf0();
   input += synapse0x16ffb30();
   input += synapse0x16ffb70();
   input += synapse0x16ffbb0();
   input += synapse0x16ffbf0();
   input += synapse0x16ffc30();
   input += synapse0x16ffc70();
   input += synapse0x16ffcb0();
   input += synapse0x16ffcf0();
   input += synapse0x16ffd30();
   input += synapse0x16ffd70();
   input += synapse0x16ffdb0();
   input += synapse0x16ffdf0();
   input += synapse0x16ffe30();
   input += synapse0x16ffe70();
   input += synapse0x16ffeb0();
   input += synapse0x16ff940();
   input += synapse0x16ff980();
   input += synapse0x1700000();
   input += synapse0x1700040();
   input += synapse0x1700080();
   input += synapse0x17000c0();
   input += synapse0x1700100();
   input += synapse0x1700140();
   return input;
}

double NNfunction_sb_sRsR::neuron0x16ff7b0() {
   double input = input0x16ff7b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x1700180() {
   double input = -0.0671023;
   input += synapse0x17004c0();
   input += synapse0x1700500();
   input += synapse0x1700540();
   input += synapse0x1700580();
   input += synapse0x17005c0();
   input += synapse0x1700600();
   input += synapse0x1700640();
   input += synapse0x1700680();
   input += synapse0x17006c0();
   input += synapse0x1700700();
   input += synapse0x1700740();
   input += synapse0x1700780();
   input += synapse0x17007c0();
   input += synapse0x1700800();
   input += synapse0x1700840();
   input += synapse0x1700880();
   input += synapse0x1700310();
   input += synapse0x1700350();
   input += synapse0x17009d0();
   input += synapse0x1700a10();
   input += synapse0x1700a50();
   input += synapse0x1700a90();
   input += synapse0x1700ad0();
   input += synapse0x1700b10();
   return input;
}

double NNfunction_sb_sRsR::neuron0x1700180() {
   double input = input0x1700180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x1700b50() {
   double input = 1.27666;
   input += synapse0x1700e90();
   input += synapse0x16f5460();
   input += synapse0x16f54a0();
   input += synapse0x16f54e0();
   input += synapse0x16f5730();
   input += synapse0x16f5770();
   input += synapse0x16f57b0();
   input += synapse0x16f5a00();
   input += synapse0x16f5a40();
   input += synapse0x16f5c90();
   input += synapse0x16f5cd0();
   input += synapse0x16f5d10();
   input += synapse0x16f5f60();
   input += synapse0x16f5fa0();
   input += synapse0x16f61f0();
   input += synapse0x16f6230();
   input += synapse0x1700ce0();
   input += synapse0x1700d20();
   input += synapse0x16f6380();
   input += synapse0x16f6890();
   input += synapse0x16f68d0();
   input += synapse0x16f6910();
   input += synapse0x16f6b60();
   input += synapse0x16f6ba0();
   return input;
}

double NNfunction_sb_sRsR::neuron0x1700b50() {
   double input = input0x1700b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x16f6be0() {
   double input = -0.910476;
   input += synapse0x16f6450();
   input += synapse0x16f6490();
   input += synapse0x16f64d0();
   input += synapse0x16f6510();
   input += synapse0x16f6e90();
   input += synapse0x17031e0();
   input += synapse0x1703220();
   input += synapse0x1703260();
   input += synapse0x17032a0();
   input += synapse0x17032e0();
   input += synapse0x1703320();
   input += synapse0x1703360();
   input += synapse0x17033a0();
   input += synapse0x17033e0();
   input += synapse0x1703420();
   input += synapse0x1703460();
   input += synapse0x16f6d70();
   input += synapse0x16f6db0();
   input += synapse0x17035b0();
   input += synapse0x17035f0();
   input += synapse0x1703630();
   input += synapse0x1703670();
   input += synapse0x17036b0();
   input += synapse0x17036f0();
   return input;
}

double NNfunction_sb_sRsR::neuron0x16f6be0() {
   double input = input0x16f6be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x1703730() {
   double input = 0.868836;
   input += synapse0x1703a70();
   input += synapse0x1703ab0();
   input += synapse0x1703af0();
   input += synapse0x1703b30();
   input += synapse0x1703b70();
   input += synapse0x1703bb0();
   input += synapse0x1703bf0();
   input += synapse0x1703c30();
   input += synapse0x1703c70();
   input += synapse0x1703cb0();
   input += synapse0x1703cf0();
   input += synapse0x1703d30();
   input += synapse0x1703d70();
   input += synapse0x1703db0();
   input += synapse0x1703df0();
   input += synapse0x1703e30();
   input += synapse0x17038c0();
   input += synapse0x1703900();
   input += synapse0x1703f80();
   input += synapse0x1703fc0();
   input += synapse0x1704000();
   input += synapse0x1704040();
   input += synapse0x1704080();
   input += synapse0x17040c0();
   return input;
}

double NNfunction_sb_sRsR::neuron0x1703730() {
   double input = input0x1703730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x1704100() {
   double input = -0.646538;
   input += synapse0x1704440();
   input += synapse0x1704480();
   input += synapse0x17044c0();
   input += synapse0x1704500();
   input += synapse0x1704540();
   input += synapse0x1704580();
   input += synapse0x17045c0();
   input += synapse0x1704600();
   input += synapse0x1704640();
   input += synapse0x1704680();
   input += synapse0x17046c0();
   input += synapse0x1704700();
   input += synapse0x1704740();
   input += synapse0x1704780();
   input += synapse0x17047c0();
   input += synapse0x1704800();
   input += synapse0x1704290();
   input += synapse0x17042d0();
   input += synapse0x1704950();
   input += synapse0x1704990();
   input += synapse0x17049d0();
   input += synapse0x1704a10();
   input += synapse0x1704a50();
   input += synapse0x1704a90();
   return input;
}

double NNfunction_sb_sRsR::neuron0x1704100() {
   double input = input0x1704100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x1704ad0() {
   double input = -0.376242;
   input += synapse0x1704e10();
   input += synapse0x1704e50();
   input += synapse0x1704e90();
   input += synapse0x1704ed0();
   input += synapse0x1704f10();
   input += synapse0x1704f50();
   input += synapse0x1704f90();
   input += synapse0x1704fd0();
   input += synapse0x1705010();
   input += synapse0x1705050();
   input += synapse0x1705090();
   input += synapse0x17050d0();
   input += synapse0x1705110();
   input += synapse0x1705150();
   input += synapse0x1705190();
   input += synapse0x17051d0();
   input += synapse0x1704c60();
   input += synapse0x1704ca0();
   input += synapse0x1705320();
   input += synapse0x1705360();
   input += synapse0x17053a0();
   input += synapse0x17053e0();
   input += synapse0x1705420();
   input += synapse0x1705460();
   return input;
}

double NNfunction_sb_sRsR::neuron0x1704ad0() {
   double input = input0x1704ad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x17054a0() {
   double input = -2.89015;
   input += synapse0x17057e0();
   input += synapse0x1705820();
   input += synapse0x1705860();
   input += synapse0x17058a0();
   input += synapse0x17058e0();
   input += synapse0x1705920();
   input += synapse0x1705960();
   input += synapse0x17059a0();
   input += synapse0x17059e0();
   input += synapse0x1705a20();
   input += synapse0x1705a60();
   input += synapse0x1705aa0();
   input += synapse0x1705ae0();
   input += synapse0x1705b20();
   input += synapse0x1705b60();
   input += synapse0x1705ba0();
   input += synapse0x1705630();
   input += synapse0x1705670();
   input += synapse0x1705cf0();
   input += synapse0x1705d30();
   input += synapse0x1705d70();
   input += synapse0x1705db0();
   input += synapse0x1705df0();
   input += synapse0x1705e30();
   return input;
}

double NNfunction_sb_sRsR::neuron0x17054a0() {
   double input = input0x17054a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x1705e70() {
   double input = -0.432261;
   input += synapse0x17061b0();
   input += synapse0x17061f0();
   input += synapse0x1706230();
   input += synapse0x1706270();
   input += synapse0x17062b0();
   input += synapse0x17062f0();
   input += synapse0x1706330();
   input += synapse0x1706370();
   input += synapse0x17063b0();
   input += synapse0x17063f0();
   input += synapse0x1706430();
   input += synapse0x1706470();
   input += synapse0x17064b0();
   input += synapse0x17064f0();
   input += synapse0x1706530();
   input += synapse0x1706570();
   input += synapse0x1706000();
   input += synapse0x1706040();
   input += synapse0x17066c0();
   input += synapse0x1706700();
   input += synapse0x1706740();
   input += synapse0x1706780();
   input += synapse0x17067c0();
   input += synapse0x1706800();
   return input;
}

double NNfunction_sb_sRsR::neuron0x1705e70() {
   double input = input0x1705e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x1706840() {
   double input = 0.82007;
   input += synapse0x1706b80();
   input += synapse0x1706bc0();
   input += synapse0x1706c00();
   input += synapse0x1706c40();
   input += synapse0x1706c80();
   input += synapse0x1706cc0();
   input += synapse0x1706d00();
   input += synapse0x1706d40();
   input += synapse0x1706d80();
   input += synapse0x1706dc0();
   input += synapse0x1706e00();
   input += synapse0x1706e40();
   input += synapse0x1706e80();
   input += synapse0x1706ec0();
   input += synapse0x1706f00();
   input += synapse0x1706f40();
   input += synapse0x17069d0();
   input += synapse0x1706a10();
   input += synapse0x1707090();
   input += synapse0x17070d0();
   input += synapse0x1707110();
   input += synapse0x1707150();
   input += synapse0x1707190();
   input += synapse0x17071d0();
   return input;
}

double NNfunction_sb_sRsR::neuron0x1706840() {
   double input = input0x1706840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x1707210() {
   double input = 1.13535;
   input += synapse0x1707550();
   input += synapse0x1707590();
   input += synapse0x17075d0();
   input += synapse0x1707610();
   input += synapse0x1707650();
   input += synapse0x1707690();
   input += synapse0x17076d0();
   input += synapse0x1707710();
   input += synapse0x1707750();
   input += synapse0x1707790();
   input += synapse0x17077d0();
   input += synapse0x1707810();
   input += synapse0x1707850();
   input += synapse0x1707890();
   input += synapse0x17078d0();
   input += synapse0x1707910();
   input += synapse0x17073a0();
   input += synapse0x17073e0();
   input += synapse0x1707a60();
   input += synapse0x1707aa0();
   input += synapse0x1707ae0();
   input += synapse0x1707b20();
   input += synapse0x1707b60();
   input += synapse0x1707ba0();
   return input;
}

double NNfunction_sb_sRsR::neuron0x1707210() {
   double input = input0x1707210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x1707be0() {
   double input = -1.05415;
   input += synapse0x16f0650();
   input += synapse0x16f0690();
   input += synapse0x16f06d0();
   input += synapse0x16f0710();
   input += synapse0x16f0750();
   input += synapse0x16f0790();
   input += synapse0x16f07d0();
   input += synapse0x16f0810();
   input += synapse0x1708330();
   input += synapse0x1708370();
   input += synapse0x17083b0();
   input += synapse0x17083f0();
   input += synapse0x1708430();
   input += synapse0x1708470();
   input += synapse0x17084b0();
   input += synapse0x17084f0();
   input += synapse0x1707d70();
   input += synapse0x1707db0();
   input += synapse0x1708640();
   input += synapse0x1708680();
   input += synapse0x17086c0();
   input += synapse0x1708700();
   input += synapse0x1708740();
   input += synapse0x1708780();
   return input;
}

double NNfunction_sb_sRsR::neuron0x1707be0() {
   double input = input0x1707be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x17087c0() {
   double input = -2.34003;
   input += synapse0x1708b00();
   input += synapse0x1708b40();
   input += synapse0x1708b80();
   input += synapse0x1708bc0();
   input += synapse0x1708c00();
   input += synapse0x1708c40();
   input += synapse0x1708c80();
   input += synapse0x1708cc0();
   input += synapse0x1708d00();
   input += synapse0x1708d40();
   input += synapse0x1708d80();
   input += synapse0x1708dc0();
   input += synapse0x1708e00();
   input += synapse0x1708e40();
   input += synapse0x1708e80();
   input += synapse0x1708ec0();
   input += synapse0x1708950();
   input += synapse0x1708990();
   input += synapse0x1709010();
   input += synapse0x1709050();
   input += synapse0x1709090();
   input += synapse0x17090d0();
   input += synapse0x1709110();
   input += synapse0x1709150();
   return input;
}

double NNfunction_sb_sRsR::neuron0x17087c0() {
   double input = input0x17087c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x1709190() {
   double input = 0.0790472;
   input += synapse0x17094d0();
   input += synapse0x1709510();
   input += synapse0x1709550();
   input += synapse0x1709590();
   input += synapse0x17095d0();
   input += synapse0x1709610();
   input += synapse0x1709650();
   input += synapse0x1709690();
   input += synapse0x17096d0();
   input += synapse0x1709710();
   input += synapse0x1709750();
   input += synapse0x1709790();
   input += synapse0x17097d0();
   input += synapse0x1709810();
   input += synapse0x1709850();
   input += synapse0x1709890();
   input += synapse0x1709320();
   input += synapse0x1709360();
   input += synapse0x16f9e90();
   input += synapse0x16f9ed0();
   input += synapse0x16f9f10();
   input += synapse0x16f9f50();
   input += synapse0x16f9f90();
   input += synapse0x16f9fd0();
   return input;
}

double NNfunction_sb_sRsR::neuron0x1709190() {
   double input = input0x1709190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x16fa010() {
   double input = 0.0372638;
   input += synapse0x16fa350();
   input += synapse0x16fa390();
   input += synapse0x16fa3d0();
   input += synapse0x16fa410();
   input += synapse0x16fa450();
   input += synapse0x16fa490();
   input += synapse0x16fa4d0();
   input += synapse0x16fa510();
   input += synapse0x16fa550();
   input += synapse0x16fa590();
   input += synapse0x16fa5d0();
   input += synapse0x16fa610();
   input += synapse0x16fa650();
   input += synapse0x16fa690();
   input += synapse0x16fa6d0();
   input += synapse0x16fa710();
   input += synapse0x16fa1a0();
   input += synapse0x16fa1e0();
   input += synapse0x16fa860();
   input += synapse0x16fa8a0();
   input += synapse0x16fa8e0();
   input += synapse0x16fa920();
   input += synapse0x16fa960();
   input += synapse0x16fa9a0();
   return input;
}

double NNfunction_sb_sRsR::neuron0x16fa010() {
   double input = input0x16fa010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x16fa9e0() {
   double input = 0.489483;
   input += synapse0x16fad20();
   input += synapse0x16fad60();
   input += synapse0x16fada0();
   input += synapse0x16fade0();
   input += synapse0x16fae20();
   input += synapse0x16fae60();
   input += synapse0x16faea0();
   input += synapse0x16faee0();
   input += synapse0x16faf20();
   input += synapse0x16faf60();
   input += synapse0x16fafa0();
   input += synapse0x16fafe0();
   input += synapse0x16fb020();
   input += synapse0x16fb060();
   input += synapse0x16fb0a0();
   input += synapse0x16fb0e0();
   input += synapse0x16fab70();
   input += synapse0x16fabb0();
   input += synapse0x16fb230();
   input += synapse0x16fb270();
   input += synapse0x16fb2b0();
   input += synapse0x16fb2f0();
   input += synapse0x16fb330();
   input += synapse0x16fb370();
   return input;
}

double NNfunction_sb_sRsR::neuron0x16fa9e0() {
   double input = input0x16fa9e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x16fb3b0() {
   double input = -0.137554;
   input += synapse0x16fb6f0();
   input += synapse0x16fb730();
   input += synapse0x16fb770();
   input += synapse0x16fb7b0();
   input += synapse0x16fb7f0();
   input += synapse0x16fb830();
   input += synapse0x16fb870();
   input += synapse0x16fb8b0();
   input += synapse0x16fb8f0();
   input += synapse0x16fb930();
   input += synapse0x16fb970();
   input += synapse0x16fb9b0();
   input += synapse0x16fb9f0();
   input += synapse0x16fba30();
   input += synapse0x16fba70();
   input += synapse0x16fbab0();
   input += synapse0x16fb540();
   input += synapse0x16fb580();
   input += synapse0x16fbc00();
   input += synapse0x16fbc40();
   input += synapse0x16fbc80();
   input += synapse0x16fbcc0();
   input += synapse0x16fbd00();
   input += synapse0x16fbd40();
   return input;
}

double NNfunction_sb_sRsR::neuron0x16fb3b0() {
   double input = input0x16fb3b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x170d9f0() {
   double input = 1.35889;
   input += synapse0x170dc10();
   input += synapse0x170dc50();
   input += synapse0x170dc90();
   input += synapse0x170dcd0();
   input += synapse0x170dd10();
   input += synapse0x170dd50();
   input += synapse0x170dd90();
   input += synapse0x170ddd0();
   input += synapse0x170de10();
   input += synapse0x170de50();
   input += synapse0x170de90();
   input += synapse0x170ded0();
   input += synapse0x170df10();
   input += synapse0x170df50();
   input += synapse0x170df90();
   input += synapse0x170dfd0();
   input += synapse0x16fbd80();
   input += synapse0x16fbdc0();
   input += synapse0x170e120();
   input += synapse0x170e160();
   input += synapse0x170e1a0();
   input += synapse0x170e1e0();
   input += synapse0x170e220();
   input += synapse0x170e260();
   return input;
}

double NNfunction_sb_sRsR::neuron0x170d9f0() {
   double input = input0x170d9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x170e2a0() {
   double input = 0.156725;
   input += synapse0x170e5e0();
   input += synapse0x170e620();
   input += synapse0x170e660();
   input += synapse0x170e6a0();
   input += synapse0x170e6e0();
   input += synapse0x170e720();
   input += synapse0x170e760();
   input += synapse0x170e7a0();
   input += synapse0x170e7e0();
   input += synapse0x170e820();
   input += synapse0x170e860();
   input += synapse0x170e8a0();
   input += synapse0x170e8e0();
   input += synapse0x170e920();
   input += synapse0x170e960();
   input += synapse0x170e9a0();
   input += synapse0x170e430();
   input += synapse0x170e470();
   input += synapse0x170eaf0();
   input += synapse0x170eb30();
   input += synapse0x170eb70();
   input += synapse0x170ebb0();
   input += synapse0x170ebf0();
   input += synapse0x170ec30();
   return input;
}

double NNfunction_sb_sRsR::neuron0x170e2a0() {
   double input = input0x170e2a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x170ec70() {
   double input = 0.772189;
   input += synapse0x170efb0();
   input += synapse0x170eff0();
   input += synapse0x170f030();
   input += synapse0x170f070();
   input += synapse0x170f0b0();
   input += synapse0x170f0f0();
   input += synapse0x170f130();
   input += synapse0x170f170();
   input += synapse0x170f1b0();
   input += synapse0x170f1f0();
   input += synapse0x170f230();
   input += synapse0x170f270();
   input += synapse0x170f2b0();
   input += synapse0x170f2f0();
   input += synapse0x170f330();
   input += synapse0x170f370();
   input += synapse0x170ee00();
   input += synapse0x170ee40();
   input += synapse0x170f4c0();
   input += synapse0x170f500();
   input += synapse0x170f540();
   input += synapse0x170f580();
   input += synapse0x170f5c0();
   input += synapse0x170f600();
   return input;
}

double NNfunction_sb_sRsR::neuron0x170ec70() {
   double input = input0x170ec70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x170f640() {
   double input = -0.571331;
   input += synapse0x170f980();
   input += synapse0x170f9c0();
   input += synapse0x170fa00();
   input += synapse0x170fa40();
   input += synapse0x170fa80();
   input += synapse0x170fac0();
   input += synapse0x170fb00();
   input += synapse0x170fb40();
   input += synapse0x170fb80();
   input += synapse0x170fbc0();
   input += synapse0x170fc00();
   input += synapse0x170fc40();
   input += synapse0x170fc80();
   input += synapse0x170fcc0();
   input += synapse0x170fd00();
   input += synapse0x170fd40();
   input += synapse0x170f7d0();
   input += synapse0x170f810();
   input += synapse0x170fe90();
   input += synapse0x170fed0();
   input += synapse0x170ff10();
   input += synapse0x170ff50();
   input += synapse0x170ff90();
   input += synapse0x170ffd0();
   return input;
}

double NNfunction_sb_sRsR::neuron0x170f640() {
   double input = input0x170f640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x1716840() {
   double input = 0.2558;
   input += synapse0x16ec570();
   input += synapse0x16ec5b0();
   input += synapse0x16eda80();
   input += synapse0x16edac0();
   input += synapse0x16ee450();
   input += synapse0x16ee490();
   input += synapse0x16ef220();
   input += synapse0x16ef260();
   input += synapse0x16efbf0();
   input += synapse0x16efc30();
   input += synapse0x16f05c0();
   input += synapse0x16f0600();
   input += synapse0x16f10a0();
   input += synapse0x16f10e0();
   input += synapse0x16f1a70();
   input += synapse0x16f1ab0();
   input += synapse0x16eeb50();
   input += synapse0x16eeb90();
   input += synapse0x16f3620();
   input += synapse0x16f3660();
   input += synapse0x16f3ff0();
   input += synapse0x16f4030();
   input += synapse0x16f49c0();
   input += synapse0x16f4a00();
   input += synapse0x16f5390();
   input += synapse0x16f53d0();
   input += synapse0x16e9500();
   input += synapse0x16e9540();
   input += synapse0x16f7480();
   input += synapse0x16f74c0();
   input += synapse0x16f7e50();
   input += synapse0x16f7e90();
   input += synapse0x16f8820();
   input += synapse0x16f8860();
   input += synapse0x16f91f0();
   input += synapse0x16f9230();
   input += synapse0x16f9bc0();
   input += synapse0x16f9c00();
   input += synapse0x16f2710();
   input += synapse0x16f2750();
   input += synapse0x16fbfc0();
   input += synapse0x16fc000();
   input += synapse0x16fc950();
   input += synapse0x16fc990();
   input += synapse0x16fd320();
   input += synapse0x16fd360();
   input += synapse0x16fdcf0();
   input += synapse0x16fdd30();
   input += synapse0x16fe6c0();
   input += synapse0x16fe700();
   return input;
}

double NNfunction_sb_sRsR::neuron0x1716840() {
   double input = input0x1716840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x1716be0() {
   double input = 0.286003;
   input += synapse0x1700e00();
   input += synapse0x1700e40();
   input += synapse0x16f63c0();
   input += synapse0x16f6400();
   input += synapse0x17039e0();
   input += synapse0x1703a20();
   input += synapse0x17043b0();
   input += synapse0x17043f0();
   input += synapse0x1704d80();
   input += synapse0x1704dc0();
   input += synapse0x1705750();
   input += synapse0x1705790();
   input += synapse0x1706120();
   input += synapse0x1706160();
   input += synapse0x1706af0();
   input += synapse0x1706b30();
   input += synapse0x17074c0();
   input += synapse0x1707500();
   input += synapse0x1707e90();
   input += synapse0x1707ed0();
   input += synapse0x1708a70();
   input += synapse0x1708ab0();
   input += synapse0x1709440();
   input += synapse0x1709480();
   input += synapse0x16fa2c0();
   input += synapse0x16fa300();
   input += synapse0x16fac90();
   input += synapse0x16facd0();
   input += synapse0x16fb660();
   input += synapse0x16fb6a0();
   input += synapse0x170db80();
   input += synapse0x170dbc0();
   input += synapse0x170e550();
   input += synapse0x170e590();
   input += synapse0x170ef20();
   input += synapse0x170ef60();
   input += synapse0x170f8f0();
   input += synapse0x170f930();
   input += synapse0x16eb7e0();
   input += synapse0x16eb820();
   input += synapse0x16ff090();
   input += synapse0x16ff0d0();
   input += synapse0x1710010();
   input += synapse0x1710050();
   input += synapse0x1710090();
   input += synapse0x17100d0();
   input += synapse0x1716f80();
   input += synapse0x1716fc0();
   input += synapse0x1717000();
   input += synapse0x1717040();
   return input;
}

double NNfunction_sb_sRsR::neuron0x1716be0() {
   double input = input0x1716be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x1717080() {
   double input = -0.676703;
   input += synapse0x17173c0();
   input += synapse0x1717400();
   input += synapse0x1717440();
   input += synapse0x1717480();
   input += synapse0x17174c0();
   input += synapse0x1717500();
   input += synapse0x1717540();
   input += synapse0x1717580();
   input += synapse0x17175c0();
   input += synapse0x1717600();
   input += synapse0x1717640();
   input += synapse0x1717680();
   input += synapse0x17176c0();
   input += synapse0x1717700();
   input += synapse0x1717740();
   input += synapse0x1717780();
   input += synapse0x1717210();
   input += synapse0x1717250();
   input += synapse0x17178d0();
   input += synapse0x1717910();
   input += synapse0x1717950();
   input += synapse0x1717990();
   input += synapse0x17179d0();
   input += synapse0x1717a10();
   input += synapse0x1717a50();
   input += synapse0x1717a90();
   input += synapse0x1717ad0();
   input += synapse0x1717b10();
   input += synapse0x1717b50();
   input += synapse0x1717b90();
   input += synapse0x1717bd0();
   input += synapse0x1717c10();
   input += synapse0x17177c0();
   input += synapse0x1717800();
   input += synapse0x1717840();
   input += synapse0x1717880();
   input += synapse0x1717e60();
   input += synapse0x1717ea0();
   input += synapse0x1717ee0();
   input += synapse0x1717f20();
   input += synapse0x1717f60();
   input += synapse0x1717fa0();
   input += synapse0x1717fe0();
   input += synapse0x1718020();
   input += synapse0x1718060();
   input += synapse0x17180a0();
   input += synapse0x17180e0();
   input += synapse0x1718120();
   input += synapse0x1718160();
   input += synapse0x17181a0();
   return input;
}

double NNfunction_sb_sRsR::neuron0x1717080() {
   double input = input0x1717080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x17181e0() {
   double input = 1.17948;
   input += synapse0x1718520();
   input += synapse0x1718560();
   input += synapse0x17185a0();
   input += synapse0x17185e0();
   input += synapse0x1718620();
   input += synapse0x1718660();
   input += synapse0x17186a0();
   input += synapse0x17186e0();
   input += synapse0x1718720();
   input += synapse0x1718760();
   input += synapse0x17187a0();
   input += synapse0x17187e0();
   input += synapse0x1718820();
   input += synapse0x1718860();
   input += synapse0x17188a0();
   input += synapse0x17188e0();
   input += synapse0x1718370();
   input += synapse0x17183b0();
   input += synapse0x1718a30();
   input += synapse0x1718a70();
   input += synapse0x1718ab0();
   input += synapse0x1718af0();
   input += synapse0x1718b30();
   input += synapse0x1718b70();
   input += synapse0x1718bb0();
   input += synapse0x1718bf0();
   input += synapse0x1718c30();
   input += synapse0x1718c70();
   input += synapse0x1718cb0();
   input += synapse0x1718cf0();
   input += synapse0x1718d30();
   input += synapse0x1718d70();
   input += synapse0x1718920();
   input += synapse0x1718960();
   input += synapse0x17189a0();
   input += synapse0x17189e0();
   input += synapse0x1718fc0();
   input += synapse0x1719000();
   input += synapse0x1719040();
   input += synapse0x1719080();
   input += synapse0x17190c0();
   input += synapse0x1719100();
   input += synapse0x1719140();
   input += synapse0x1719180();
   input += synapse0x17191c0();
   input += synapse0x1719200();
   input += synapse0x1719240();
   input += synapse0x1719280();
   input += synapse0x17192c0();
   input += synapse0x1719300();
   return input;
}

double NNfunction_sb_sRsR::neuron0x17181e0() {
   double input = input0x17181e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x1719340() {
   double input = -0.378937;
   input += synapse0x1719680();
   input += synapse0x17196c0();
   input += synapse0x1719700();
   input += synapse0x1719740();
   input += synapse0x1719780();
   input += synapse0x17197c0();
   input += synapse0x1719800();
   input += synapse0x1719840();
   input += synapse0x1719880();
   input += synapse0x17198c0();
   input += synapse0x1719900();
   input += synapse0x1719940();
   input += synapse0x1719980();
   input += synapse0x17199c0();
   input += synapse0x1719a00();
   input += synapse0x1719a40();
   input += synapse0x17194d0();
   input += synapse0x1719510();
   input += synapse0x1719b90();
   input += synapse0x1719bd0();
   input += synapse0x1719c10();
   input += synapse0x1719c50();
   input += synapse0x1719c90();
   input += synapse0x1719cd0();
   input += synapse0x1719d10();
   input += synapse0x1719d50();
   input += synapse0x1719d90();
   input += synapse0x1719dd0();
   input += synapse0x1719e10();
   input += synapse0x1719e50();
   input += synapse0x1719e90();
   input += synapse0x1719ed0();
   input += synapse0x1719a80();
   input += synapse0x1719ac0();
   input += synapse0x1719b00();
   input += synapse0x1719b40();
   input += synapse0x171a120();
   input += synapse0x171a160();
   input += synapse0x171a1a0();
   input += synapse0x171a1e0();
   input += synapse0x171a220();
   input += synapse0x171a260();
   input += synapse0x171a2a0();
   input += synapse0x171a2e0();
   input += synapse0x171a320();
   input += synapse0x171a360();
   input += synapse0x171a3a0();
   input += synapse0x171a3e0();
   input += synapse0x171a420();
   input += synapse0x171a460();
   return input;
}

double NNfunction_sb_sRsR::neuron0x1719340() {
   double input = input0x1719340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x171a4a0() {
   double input = 6.29995;
   input += synapse0x16eb580();
   input += synapse0x171a6c0();
   input += synapse0x171a700();
   input += synapse0x171a740();
   input += synapse0x171a780();
   return input;
}

double NNfunction_sb_sRsR::neuron0x171a4a0() {
   double input = input0x171a4a0();
   return (input * 1)+0;
}

double NNfunction_sb_sRsR::synapse0x14a63d0() {
   return (neuron0x16e6560()*-0.0658502);
}

double NNfunction_sb_sRsR::synapse0x16e6420() {
   return (neuron0x16e68a0()*-0.0637319);
}

double NNfunction_sb_sRsR::synapse0x16e6460() {
   return (neuron0x16e6be0()*0.0526213);
}

double NNfunction_sb_sRsR::synapse0x16eb870() {
   return (neuron0x16e6f20()*0.878545);
}

double NNfunction_sb_sRsR::synapse0x16eb8b0() {
   return (neuron0x16e7260()*-0.154042);
}

double NNfunction_sb_sRsR::synapse0x16eb8f0() {
   return (neuron0x16e75a0()*-0.00923877);
}

double NNfunction_sb_sRsR::synapse0x16eb930() {
   return (neuron0x16e78e0()*0.0885059);
}

double NNfunction_sb_sRsR::synapse0x16eb970() {
   return (neuron0x16e7c20()*0.0942054);
}

double NNfunction_sb_sRsR::synapse0x16eb9b0() {
   return (neuron0x16e7f60()*0.013089);
}

double NNfunction_sb_sRsR::synapse0x16eb9f0() {
   return (neuron0x16e82a0()*-0.0398354);
}

double NNfunction_sb_sRsR::synapse0x16eba30() {
   return (neuron0x16e85e0()*-0.0110066);
}

double NNfunction_sb_sRsR::synapse0x16eba70() {
   return (neuron0x16e8920()*-0.351343);
}

double NNfunction_sb_sRsR::synapse0x16ebab0() {
   return (neuron0x16e8c60()*-0.348317);
}

double NNfunction_sb_sRsR::synapse0x16ebaf0() {
   return (neuron0x16e8fa0()*0.184247);
}

double NNfunction_sb_sRsR::synapse0x16ebb30() {
   return (neuron0x16e92e0()*0.0130642);
}

double NNfunction_sb_sRsR::synapse0x16ebb70() {
   return (neuron0x16e9620()*-0.0961531);
}

double NNfunction_sb_sRsR::synapse0x16e6390() {
   return (neuron0x16e9960()*0.255775);
}

double NNfunction_sb_sRsR::synapse0x16e63d0() {
   return (neuron0x16e9ec0()*-0.192857);
}

double NNfunction_sb_sRsR::synapse0x1497c70() {
   return (neuron0x16ea0e0()*0.0364886);
}

double NNfunction_sb_sRsR::synapse0x1497cb0() {
   return (neuron0x16ea420()*-0.183856);
}

double NNfunction_sb_sRsR::synapse0x16ebdd0() {
   return (neuron0x16ea760()*-0.00670388);
}

double NNfunction_sb_sRsR::synapse0x16ebe10() {
   return (neuron0x16eaaa0()*-0.0270981);
}

double NNfunction_sb_sRsR::synapse0x16ebe50() {
   return (neuron0x16eade0()*-0.0247506);
}

double NNfunction_sb_sRsR::synapse0x16ebe90() {
   return (neuron0x16eb120()*-0.043266);
}

double NNfunction_sb_sRsR::synapse0x16ec210() {
   return (neuron0x16e6560()*-0.035521);
}

double NNfunction_sb_sRsR::synapse0x16ec250() {
   return (neuron0x16e68a0()*0.0019082);
}

double NNfunction_sb_sRsR::synapse0x16ec290() {
   return (neuron0x16e6be0()*0.081992);
}

double NNfunction_sb_sRsR::synapse0x16ec2d0() {
   return (neuron0x16e6f20()*-0.288983);
}

double NNfunction_sb_sRsR::synapse0x16ec310() {
   return (neuron0x16e7260()*0.0918098);
}

double NNfunction_sb_sRsR::synapse0x16ec350() {
   return (neuron0x16e75a0()*0.0665503);
}

double NNfunction_sb_sRsR::synapse0x16ec390() {
   return (neuron0x16e78e0()*0.0301059);
}

double NNfunction_sb_sRsR::synapse0x16ec3d0() {
   return (neuron0x16e7c20()*-0.792546);
}

double NNfunction_sb_sRsR::synapse0x16ec410() {
   return (neuron0x16e7f60()*-0.110797);
}

double NNfunction_sb_sRsR::synapse0x16ebcc0() {
   return (neuron0x16e82a0()*0.0929925);
}

double NNfunction_sb_sRsR::synapse0x16ebd00() {
   return (neuron0x16e85e0()*0.000425534);
}

double NNfunction_sb_sRsR::synapse0x16ebd40() {
   return (neuron0x16e8920()*-0.0191262);
}

double NNfunction_sb_sRsR::synapse0x16ebd80() {
   return (neuron0x16e8c60()*-0.0589124);
}

double NNfunction_sb_sRsR::synapse0x16ec660() {
   return (neuron0x16e8fa0()*-0.102814);
}

double NNfunction_sb_sRsR::synapse0x16ec6a0() {
   return (neuron0x16e92e0()*0.0516364);
}

double NNfunction_sb_sRsR::synapse0x16ec6e0() {
   return (neuron0x16e9620()*0.213925);
}

double NNfunction_sb_sRsR::synapse0x16ec060() {
   return (neuron0x16e9960()*-0.0595162);
}

double NNfunction_sb_sRsR::synapse0x16ec0a0() {
   return (neuron0x16e9ec0()*-0.0256058);
}

double NNfunction_sb_sRsR::synapse0x16ec830() {
   return (neuron0x16ea0e0()*0.433004);
}

double NNfunction_sb_sRsR::synapse0x16ec870() {
   return (neuron0x16ea420()*-0.0870048);
}

double NNfunction_sb_sRsR::synapse0x16ec8b0() {
   return (neuron0x16ea760()*-0.0290639);
}

double NNfunction_sb_sRsR::synapse0x16ec8f0() {
   return (neuron0x16eaaa0()*-0.0077725);
}

double NNfunction_sb_sRsR::synapse0x16ec930() {
   return (neuron0x16eade0()*0.0101407);
}

double NNfunction_sb_sRsR::synapse0x16ec970() {
   return (neuron0x16eb120()*0.012447);
}

double NNfunction_sb_sRsR::synapse0x16eccf0() {
   return (neuron0x16e6560()*-0.0079082);
}

double NNfunction_sb_sRsR::synapse0x16ecd30() {
   return (neuron0x16e68a0()*0.216748);
}

double NNfunction_sb_sRsR::synapse0x16ecd70() {
   return (neuron0x16e6be0()*0.661396);
}

double NNfunction_sb_sRsR::synapse0x16ecdb0() {
   return (neuron0x16e6f20()*0.635109);
}

double NNfunction_sb_sRsR::synapse0x16ecdf0() {
   return (neuron0x16e7260()*0.0519149);
}

double NNfunction_sb_sRsR::synapse0x16ece30() {
   return (neuron0x16e75a0()*-0.307602);
}

double NNfunction_sb_sRsR::synapse0x16ece70() {
   return (neuron0x16e78e0()*0.132457);
}

double NNfunction_sb_sRsR::synapse0x16eceb0() {
   return (neuron0x16e7c20()*-0.238699);
}

double NNfunction_sb_sRsR::synapse0x16ecef0() {
   return (neuron0x16e7f60()*0.210858);
}

double NNfunction_sb_sRsR::synapse0x16ecf30() {
   return (neuron0x16e82a0()*-0.0326049);
}

double NNfunction_sb_sRsR::synapse0x16ecf70() {
   return (neuron0x16e85e0()*0.122345);
}

double NNfunction_sb_sRsR::synapse0x16ecfb0() {
   return (neuron0x16e8920()*-0.325467);
}

double NNfunction_sb_sRsR::synapse0x16ecff0() {
   return (neuron0x16e8c60()*-0.331176);
}

double NNfunction_sb_sRsR::synapse0x16ed030() {
   return (neuron0x16e8fa0()*0.17806);
}

double NNfunction_sb_sRsR::synapse0x16ed070() {
   return (neuron0x16e92e0()*-0.245976);
}

double NNfunction_sb_sRsR::synapse0x16ed0b0() {
   return (neuron0x16e9620()*-0.295442);
}

double NNfunction_sb_sRsR::synapse0x16ecb40() {
   return (neuron0x16e9960()*-0.0236516);
}

double NNfunction_sb_sRsR::synapse0x16ecb80() {
   return (neuron0x16e9ec0()*-0.25612);
}

double NNfunction_sb_sRsR::synapse0x14a5ac0() {
   return (neuron0x16ea0e0()*0.527584);
}

double NNfunction_sb_sRsR::synapse0x14a5b00() {
   return (neuron0x16ea420()*-0.346476);
}

double NNfunction_sb_sRsR::synapse0x16d55f0() {
   return (neuron0x16ea760()*0.150087);
}

double NNfunction_sb_sRsR::synapse0x16d5630() {
   return (neuron0x16eaaa0()*-0.0461288);
}

double NNfunction_sb_sRsR::synapse0x16d5670() {
   return (neuron0x16eade0()*0.175903);
}

double NNfunction_sb_sRsR::synapse0x16e64a0() {
   return (neuron0x16eb120()*-0.48401);
}

double NNfunction_sb_sRsR::synapse0x16ec600() {
   return (neuron0x16e6560()*0.0262567);
}

double NNfunction_sb_sRsR::synapse0x16e64e0() {
   return (neuron0x16e68a0()*-0.474801);
}

double NNfunction_sb_sRsR::synapse0x16e6520() {
   return (neuron0x16e6be0()*0.0768558);
}

double NNfunction_sb_sRsR::synapse0x16ed200() {
   return (neuron0x16e6f20()*-1.04416);
}

double NNfunction_sb_sRsR::synapse0x16ed240() {
   return (neuron0x16e7260()*0.0845861);
}

double NNfunction_sb_sRsR::synapse0x16ed280() {
   return (neuron0x16e75a0()*0.105829);
}

double NNfunction_sb_sRsR::synapse0x16ed2c0() {
   return (neuron0x16e78e0()*-0.0819791);
}

double NNfunction_sb_sRsR::synapse0x16ed300() {
   return (neuron0x16e7c20()*0.195875);
}

double NNfunction_sb_sRsR::synapse0x16ed340() {
   return (neuron0x16e7f60()*0.194769);
}

double NNfunction_sb_sRsR::synapse0x16ed380() {
   return (neuron0x16e82a0()*0.066629);
}

double NNfunction_sb_sRsR::synapse0x16ed3c0() {
   return (neuron0x16e85e0()*0.085844);
}

double NNfunction_sb_sRsR::synapse0x16ed400() {
   return (neuron0x16e8920()*0.0628626);
}

double NNfunction_sb_sRsR::synapse0x16ed440() {
   return (neuron0x16e8c60()*0.0729974);
}

double NNfunction_sb_sRsR::synapse0x16ed480() {
   return (neuron0x16e8fa0()*0.0468333);
}

double NNfunction_sb_sRsR::synapse0x16ed4c0() {
   return (neuron0x16e92e0()*-0.33781);
}

double NNfunction_sb_sRsR::synapse0x16ed500() {
   return (neuron0x16e9620()*0.269791);
}

double NNfunction_sb_sRsR::synapse0x16ec450() {
   return (neuron0x16e9960()*-0.260687);
}

double NNfunction_sb_sRsR::synapse0x16ec490() {
   return (neuron0x16e9ec0()*0.189337);
}

double NNfunction_sb_sRsR::synapse0x16ed650() {
   return (neuron0x16ea0e0()*0.251672);
}

double NNfunction_sb_sRsR::synapse0x16ed690() {
   return (neuron0x16ea420()*0.142561);
}

double NNfunction_sb_sRsR::synapse0x16ed6d0() {
   return (neuron0x16ea760()*0.11987);
}

double NNfunction_sb_sRsR::synapse0x16ed710() {
   return (neuron0x16eaaa0()*-0.0527768);
}

double NNfunction_sb_sRsR::synapse0x16ed750() {
   return (neuron0x16eade0()*-0.00498877);
}

double NNfunction_sb_sRsR::synapse0x16ed790() {
   return (neuron0x16eb120()*0.00574513);
}

double NNfunction_sb_sRsR::synapse0x16edb10() {
   return (neuron0x16e6560()*-0.0523785);
}

double NNfunction_sb_sRsR::synapse0x16edb50() {
   return (neuron0x16e68a0()*-0.0538562);
}

double NNfunction_sb_sRsR::synapse0x16edb90() {
   return (neuron0x16e6be0()*-0.0209204);
}

double NNfunction_sb_sRsR::synapse0x16edbd0() {
   return (neuron0x16e6f20()*-0.0762586);
}

double NNfunction_sb_sRsR::synapse0x16edc10() {
   return (neuron0x16e7260()*-0.038361);
}

double NNfunction_sb_sRsR::synapse0x16edc50() {
   return (neuron0x16e75a0()*0.0728179);
}

double NNfunction_sb_sRsR::synapse0x16edc90() {
   return (neuron0x16e78e0()*0.0367395);
}

double NNfunction_sb_sRsR::synapse0x16edcd0() {
   return (neuron0x16e7c20()*0.0744437);
}

double NNfunction_sb_sRsR::synapse0x16edd10() {
   return (neuron0x16e7f60()*1.04287);
}

double NNfunction_sb_sRsR::synapse0x16edd50() {
   return (neuron0x16e82a0()*0.217778);
}

double NNfunction_sb_sRsR::synapse0x16edd90() {
   return (neuron0x16e85e0()*0.0449697);
}

double NNfunction_sb_sRsR::synapse0x16eddd0() {
   return (neuron0x16e8920()*0.0235834);
}

double NNfunction_sb_sRsR::synapse0x16ede10() {
   return (neuron0x16e8c60()*0.082776);
}

double NNfunction_sb_sRsR::synapse0x16ede50() {
   return (neuron0x16e8fa0()*-0.035618);
}

double NNfunction_sb_sRsR::synapse0x16ede90() {
   return (neuron0x16e92e0()*0.0417949);
}

double NNfunction_sb_sRsR::synapse0x16eded0() {
   return (neuron0x16e9620()*0.0937492);
}

double NNfunction_sb_sRsR::synapse0x16ed960() {
   return (neuron0x16e9960()*0.0440875);
}

double NNfunction_sb_sRsR::synapse0x16ed9a0() {
   return (neuron0x16e9ec0()*-0.00944792);
}

double NNfunction_sb_sRsR::synapse0x16ee020() {
   return (neuron0x16ea0e0()*-0.424515);
}

double NNfunction_sb_sRsR::synapse0x16ee060() {
   return (neuron0x16ea420()*0.0622784);
}

double NNfunction_sb_sRsR::synapse0x16ee0a0() {
   return (neuron0x16ea760()*0.0039439);
}

double NNfunction_sb_sRsR::synapse0x16ee0e0() {
   return (neuron0x16eaaa0()*-0.0220785);
}

double NNfunction_sb_sRsR::synapse0x16ee120() {
   return (neuron0x16eade0()*0.010617);
}

double NNfunction_sb_sRsR::synapse0x16ee160() {
   return (neuron0x16eb120()*-0.00442171);
}

double NNfunction_sb_sRsR::synapse0x16ee4e0() {
   return (neuron0x16e6560()*-0.00376273);
}

double NNfunction_sb_sRsR::synapse0x16ee520() {
   return (neuron0x16e68a0()*-0.00339727);
}

double NNfunction_sb_sRsR::synapse0x16ee560() {
   return (neuron0x16e6be0()*-0.00903708);
}

double NNfunction_sb_sRsR::synapse0x16ee5a0() {
   return (neuron0x16e6f20()*0.0272875);
}

double NNfunction_sb_sRsR::synapse0x16ee5e0() {
   return (neuron0x16e7260()*-0.00771928);
}

double NNfunction_sb_sRsR::synapse0x16ee620() {
   return (neuron0x16e75a0()*-0.00906711);
}

double NNfunction_sb_sRsR::synapse0x16ee660() {
   return (neuron0x16e78e0()*0.000519695);
}

double NNfunction_sb_sRsR::synapse0x16ee6a0() {
   return (neuron0x16e7c20()*0.00171531);
}

double NNfunction_sb_sRsR::synapse0x16ee6e0() {
   return (neuron0x16e7f60()*0.0187191);
}

double NNfunction_sb_sRsR::synapse0x14a5e30() {
   return (neuron0x16e82a0()*0.00444629);
}

double NNfunction_sb_sRsR::synapse0x14a5e70() {
   return (neuron0x16e85e0()*-0.0064623);
}

double NNfunction_sb_sRsR::synapse0x14a5eb0() {
   return (neuron0x16e8920()*0.0052587);
}

double NNfunction_sb_sRsR::synapse0x14a5ef0() {
   return (neuron0x16e8c60()*0.00919789);
}

double NNfunction_sb_sRsR::synapse0x14a5f30() {
   return (neuron0x16e8fa0()*-0.0230664);
}

double NNfunction_sb_sRsR::synapse0x14a5f70() {
   return (neuron0x16e92e0()*-0.00362559);
}

double NNfunction_sb_sRsR::synapse0x14a5fb0() {
   return (neuron0x16e9620()*-0.00602235);
}

double NNfunction_sb_sRsR::synapse0x16ee330() {
   return (neuron0x16e9960()*-0.0199354);
}

double NNfunction_sb_sRsR::synapse0x16ee370() {
   return (neuron0x16e9ec0()*0.00709832);
}

double NNfunction_sb_sRsR::synapse0x14a6100() {
   return (neuron0x16ea0e0()*-1.20524);
}

double NNfunction_sb_sRsR::synapse0x14a6140() {
   return (neuron0x16ea420()*0.0324585);
}

double NNfunction_sb_sRsR::synapse0x14a6180() {
   return (neuron0x16ea760()*0.00297692);
}

double NNfunction_sb_sRsR::synapse0x14a61c0() {
   return (neuron0x16eaaa0()*0.00522783);
}

double NNfunction_sb_sRsR::synapse0x14a6200() {
   return (neuron0x16eade0()*0.00403203);
}

double NNfunction_sb_sRsR::synapse0x16eef30() {
   return (neuron0x16eb120()*0.0114306);
}

double NNfunction_sb_sRsR::synapse0x16ef2b0() {
   return (neuron0x16e6560()*-0.176559);
}

double NNfunction_sb_sRsR::synapse0x16ef2f0() {
   return (neuron0x16e68a0()*-0.880974);
}

double NNfunction_sb_sRsR::synapse0x16ef330() {
   return (neuron0x16e6be0()*0.273836);
}

double NNfunction_sb_sRsR::synapse0x16ef370() {
   return (neuron0x16e6f20()*0.413019);
}

double NNfunction_sb_sRsR::synapse0x16ef3b0() {
   return (neuron0x16e7260()*0.0686065);
}

double NNfunction_sb_sRsR::synapse0x16ef3f0() {
   return (neuron0x16e75a0()*0.569347);
}

double NNfunction_sb_sRsR::synapse0x16ef430() {
   return (neuron0x16e78e0()*0.238061);
}

double NNfunction_sb_sRsR::synapse0x16ef470() {
   return (neuron0x16e7c20()*-0.561401);
}

double NNfunction_sb_sRsR::synapse0x16ef4b0() {
   return (neuron0x16e7f60()*0.801252);
}

double NNfunction_sb_sRsR::synapse0x16ef4f0() {
   return (neuron0x16e82a0()*0.216302);
}

double NNfunction_sb_sRsR::synapse0x16ef530() {
   return (neuron0x16e85e0()*0.863911);
}

double NNfunction_sb_sRsR::synapse0x16ef570() {
   return (neuron0x16e8920()*-0.0532602);
}

double NNfunction_sb_sRsR::synapse0x16ef5b0() {
   return (neuron0x16e8c60()*0.0726709);
}

double NNfunction_sb_sRsR::synapse0x16ef5f0() {
   return (neuron0x16e8fa0()*0.585866);
}

double NNfunction_sb_sRsR::synapse0x16ef630() {
   return (neuron0x16e92e0()*0.0711575);
}

double NNfunction_sb_sRsR::synapse0x16ef670() {
   return (neuron0x16e9620()*-0.234194);
}

double NNfunction_sb_sRsR::synapse0x16ef100() {
   return (neuron0x16e9960()*-0.555314);
}

double NNfunction_sb_sRsR::synapse0x16ef140() {
   return (neuron0x16e9ec0()*-0.202421);
}

double NNfunction_sb_sRsR::synapse0x16ef7c0() {
   return (neuron0x16ea0e0()*-0.650973);
}

double NNfunction_sb_sRsR::synapse0x16ef800() {
   return (neuron0x16ea420()*-0.269854);
}

double NNfunction_sb_sRsR::synapse0x16ef840() {
   return (neuron0x16ea760()*-0.808432);
}

double NNfunction_sb_sRsR::synapse0x16ef880() {
   return (neuron0x16eaaa0()*0.0542135);
}

double NNfunction_sb_sRsR::synapse0x16ef8c0() {
   return (neuron0x16eade0()*-0.0224764);
}

double NNfunction_sb_sRsR::synapse0x16ef900() {
   return (neuron0x16eb120()*0.39855);
}

double NNfunction_sb_sRsR::synapse0x16efc80() {
   return (neuron0x16e6560()*0.0379828);
}

double NNfunction_sb_sRsR::synapse0x16efcc0() {
   return (neuron0x16e68a0()*0.0726869);
}

double NNfunction_sb_sRsR::synapse0x16efd00() {
   return (neuron0x16e6be0()*0.027568);
}

double NNfunction_sb_sRsR::synapse0x16efd40() {
   return (neuron0x16e6f20()*0.632049);
}

double NNfunction_sb_sRsR::synapse0x16efd80() {
   return (neuron0x16e7260()*-0.130978);
}

double NNfunction_sb_sRsR::synapse0x16efdc0() {
   return (neuron0x16e75a0()*-0.0693934);
}

double NNfunction_sb_sRsR::synapse0x16efe00() {
   return (neuron0x16e78e0()*-0.0221834);
}

double NNfunction_sb_sRsR::synapse0x16efe40() {
   return (neuron0x16e7c20()*-0.136289);
}

double NNfunction_sb_sRsR::synapse0x16efe80() {
   return (neuron0x16e7f60()*-0.032667);
}

double NNfunction_sb_sRsR::synapse0x16efec0() {
   return (neuron0x16e82a0()*0.302639);
}

double NNfunction_sb_sRsR::synapse0x16eff00() {
   return (neuron0x16e85e0()*0.108636);
}

double NNfunction_sb_sRsR::synapse0x16eff40() {
   return (neuron0x16e8920()*-0.567767);
}

double NNfunction_sb_sRsR::synapse0x16eff80() {
   return (neuron0x16e8c60()*-0.514601);
}

double NNfunction_sb_sRsR::synapse0x16effc0() {
   return (neuron0x16e8fa0()*-0.508877);
}

double NNfunction_sb_sRsR::synapse0x16f0000() {
   return (neuron0x16e92e0()*-0.172426);
}

double NNfunction_sb_sRsR::synapse0x16f0040() {
   return (neuron0x16e9620()*-0.0523841);
}

double NNfunction_sb_sRsR::synapse0x16efad0() {
   return (neuron0x16e9960()*-0.265057);
}

double NNfunction_sb_sRsR::synapse0x16efb10() {
   return (neuron0x16e9ec0()*-0.170786);
}

double NNfunction_sb_sRsR::synapse0x16f0190() {
   return (neuron0x16ea0e0()*0.985483);
}

double NNfunction_sb_sRsR::synapse0x16f01d0() {
   return (neuron0x16ea420()*-0.630502);
}

double NNfunction_sb_sRsR::synapse0x16f0210() {
   return (neuron0x16ea760()*-0.115181);
}

double NNfunction_sb_sRsR::synapse0x16f0250() {
   return (neuron0x16eaaa0()*0.0167036);
}

double NNfunction_sb_sRsR::synapse0x16f0290() {
   return (neuron0x16eade0()*-0.0670348);
}

double NNfunction_sb_sRsR::synapse0x16f02d0() {
   return (neuron0x16eb120()*-0.112968);
}

double NNfunction_sb_sRsR::synapse0x16e9db0() {
   return (neuron0x16e6560()*0.020744);
}

double NNfunction_sb_sRsR::synapse0x16e9df0() {
   return (neuron0x16e68a0()*-0.0190523);
}

double NNfunction_sb_sRsR::synapse0x16e9e30() {
   return (neuron0x16e6be0()*0.0512037);
}

double NNfunction_sb_sRsR::synapse0x16e9e70() {
   return (neuron0x16e6f20()*-0.330391);
}

double NNfunction_sb_sRsR::synapse0x16f0860() {
   return (neuron0x16e7260()*-0.128203);
}

double NNfunction_sb_sRsR::synapse0x16f08a0() {
   return (neuron0x16e75a0()*0.386571);
}

double NNfunction_sb_sRsR::synapse0x16f08e0() {
   return (neuron0x16e78e0()*-0.417425);
}

double NNfunction_sb_sRsR::synapse0x16f0920() {
   return (neuron0x16e7c20()*-0.0622056);
}

double NNfunction_sb_sRsR::synapse0x16f0960() {
   return (neuron0x16e7f60()*-0.0123548);
}

double NNfunction_sb_sRsR::synapse0x16f09a0() {
   return (neuron0x16e82a0()*-0.0695095);
}

double NNfunction_sb_sRsR::synapse0x16f09e0() {
   return (neuron0x16e85e0()*0.096137);
}

double NNfunction_sb_sRsR::synapse0x16f0a20() {
   return (neuron0x16e8920()*-0.143266);
}

double NNfunction_sb_sRsR::synapse0x16f0a60() {
   return (neuron0x16e8c60()*-0.0330414);
}

double NNfunction_sb_sRsR::synapse0x16f0aa0() {
   return (neuron0x16e8fa0()*-0.0193806);
}

double NNfunction_sb_sRsR::synapse0x16f0ae0() {
   return (neuron0x16e92e0()*-0.311905);
}

double NNfunction_sb_sRsR::synapse0x16f0b20() {
   return (neuron0x16e9620()*-0.0507363);
}

double NNfunction_sb_sRsR::synapse0x16f04a0() {
   return (neuron0x16e9960()*0.396804);
}

double NNfunction_sb_sRsR::synapse0x16f04e0() {
   return (neuron0x16e9ec0()*-0.0436553);
}

double NNfunction_sb_sRsR::synapse0x16f0c70() {
   return (neuron0x16ea0e0()*-0.0377602);
}

double NNfunction_sb_sRsR::synapse0x16f0cb0() {
   return (neuron0x16ea420()*-0.0242747);
}

double NNfunction_sb_sRsR::synapse0x16f0cf0() {
   return (neuron0x16ea760()*-0.014602);
}

double NNfunction_sb_sRsR::synapse0x16f0d30() {
   return (neuron0x16eaaa0()*-0.0158739);
}

double NNfunction_sb_sRsR::synapse0x16f0d70() {
   return (neuron0x16eade0()*-0.00357703);
}

double NNfunction_sb_sRsR::synapse0x16f0db0() {
   return (neuron0x16eb120()*-0.0143402);
}

double NNfunction_sb_sRsR::synapse0x16f1130() {
   return (neuron0x16e6560()*0.133961);
}

double NNfunction_sb_sRsR::synapse0x16f1170() {
   return (neuron0x16e68a0()*-0.479961);
}

double NNfunction_sb_sRsR::synapse0x16f11b0() {
   return (neuron0x16e6be0()*-0.866551);
}

double NNfunction_sb_sRsR::synapse0x16f11f0() {
   return (neuron0x16e6f20()*0.337169);
}

double NNfunction_sb_sRsR::synapse0x16f1230() {
   return (neuron0x16e7260()*0.191427);
}

double NNfunction_sb_sRsR::synapse0x16f1270() {
   return (neuron0x16e75a0()*0.223375);
}

double NNfunction_sb_sRsR::synapse0x16f12b0() {
   return (neuron0x16e78e0()*0.372349);
}

double NNfunction_sb_sRsR::synapse0x16f12f0() {
   return (neuron0x16e7c20()*0.196543);
}

double NNfunction_sb_sRsR::synapse0x16f1330() {
   return (neuron0x16e7f60()*0.313244);
}

double NNfunction_sb_sRsR::synapse0x16f1370() {
   return (neuron0x16e82a0()*-0.895699);
}

double NNfunction_sb_sRsR::synapse0x16f13b0() {
   return (neuron0x16e85e0()*-0.833963);
}

double NNfunction_sb_sRsR::synapse0x16f13f0() {
   return (neuron0x16e8920()*-0.0561999);
}

double NNfunction_sb_sRsR::synapse0x16f1430() {
   return (neuron0x16e8c60()*-0.280189);
}

double NNfunction_sb_sRsR::synapse0x16f1470() {
   return (neuron0x16e8fa0()*-0.794724);
}

double NNfunction_sb_sRsR::synapse0x16f14b0() {
   return (neuron0x16e92e0()*0.0838568);
}

double NNfunction_sb_sRsR::synapse0x16f14f0() {
   return (neuron0x16e9620()*-0.39937);
}

double NNfunction_sb_sRsR::synapse0x16f0f80() {
   return (neuron0x16e9960()*-0.788708);
}

double NNfunction_sb_sRsR::synapse0x16f0fc0() {
   return (neuron0x16e9ec0()*-0.157484);
}

double NNfunction_sb_sRsR::synapse0x16f1640() {
   return (neuron0x16ea0e0()*0.5033);
}

double NNfunction_sb_sRsR::synapse0x16f1680() {
   return (neuron0x16ea420()*0.763056);
}

double NNfunction_sb_sRsR::synapse0x16f16c0() {
   return (neuron0x16ea760()*0.342544);
}

double NNfunction_sb_sRsR::synapse0x16f1700() {
   return (neuron0x16eaaa0()*0.805013);
}

double NNfunction_sb_sRsR::synapse0x16f1740() {
   return (neuron0x16eade0()*-0.606061);
}

double NNfunction_sb_sRsR::synapse0x16f1780() {
   return (neuron0x16eb120()*-0.318406);
}

double NNfunction_sb_sRsR::synapse0x16f1b00() {
   return (neuron0x16e6560()*-0.58132);
}

double NNfunction_sb_sRsR::synapse0x16f1b40() {
   return (neuron0x16e68a0()*0.497828);
}

double NNfunction_sb_sRsR::synapse0x16f1b80() {
   return (neuron0x16e6be0()*0.259892);
}

double NNfunction_sb_sRsR::synapse0x16f1bc0() {
   return (neuron0x16e6f20()*-0.624697);
}

double NNfunction_sb_sRsR::synapse0x16f1c00() {
   return (neuron0x16e7260()*0.461987);
}

double NNfunction_sb_sRsR::synapse0x16f1c40() {
   return (neuron0x16e75a0()*0.665474);
}

double NNfunction_sb_sRsR::synapse0x16f1c80() {
   return (neuron0x16e78e0()*0.39962);
}

double NNfunction_sb_sRsR::synapse0x16f1cc0() {
   return (neuron0x16e7c20()*0.161704);
}

double NNfunction_sb_sRsR::synapse0x16f1d00() {
   return (neuron0x16e7f60()*0.0924673);
}

double NNfunction_sb_sRsR::synapse0x16f1d40() {
   return (neuron0x16e82a0()*-0.532822);
}

double NNfunction_sb_sRsR::synapse0x16f1d80() {
   return (neuron0x16e85e0()*1.1405);
}

double NNfunction_sb_sRsR::synapse0x16f1dc0() {
   return (neuron0x16e8920()*-0.435856);
}

double NNfunction_sb_sRsR::synapse0x16f1e00() {
   return (neuron0x16e8c60()*-0.0561639);
}

double NNfunction_sb_sRsR::synapse0x16f1e40() {
   return (neuron0x16e8fa0()*-0.406466);
}

double NNfunction_sb_sRsR::synapse0x16f1e80() {
   return (neuron0x16e92e0()*0.0870652);
}

double NNfunction_sb_sRsR::synapse0x16f1ec0() {
   return (neuron0x16e9620()*0.236535);
}

double NNfunction_sb_sRsR::synapse0x16f1950() {
   return (neuron0x16e9960()*0.604484);
}

double NNfunction_sb_sRsR::synapse0x16f1990() {
   return (neuron0x16e9ec0()*-0.390055);
}

double NNfunction_sb_sRsR::synapse0x16ee720() {
   return (neuron0x16ea0e0()*-0.316378);
}

double NNfunction_sb_sRsR::synapse0x16ee760() {
   return (neuron0x16ea420()*-0.508499);
}

double NNfunction_sb_sRsR::synapse0x16ee7a0() {
   return (neuron0x16ea760()*-0.164695);
}

double NNfunction_sb_sRsR::synapse0x16ee7e0() {
   return (neuron0x16eaaa0()*-0.348235);
}

double NNfunction_sb_sRsR::synapse0x16ee820() {
   return (neuron0x16eade0()*-0.385054);
}

double NNfunction_sb_sRsR::synapse0x16ee860() {
   return (neuron0x16eb120()*0.204919);
}

double NNfunction_sb_sRsR::synapse0x16eebe0() {
   return (neuron0x16e6560()*-0.0288064);
}

double NNfunction_sb_sRsR::synapse0x16eec20() {
   return (neuron0x16e68a0()*-0.0537281);
}

double NNfunction_sb_sRsR::synapse0x16eec60() {
   return (neuron0x16e6be0()*0.0267532);
}

double NNfunction_sb_sRsR::synapse0x16eeca0() {
   return (neuron0x16e6f20()*2.47921);
}

double NNfunction_sb_sRsR::synapse0x16eece0() {
   return (neuron0x16e7260()*-0.0308031);
}

double NNfunction_sb_sRsR::synapse0x16eed20() {
   return (neuron0x16e75a0()*-0.0476669);
}

double NNfunction_sb_sRsR::synapse0x16eed60() {
   return (neuron0x16e78e0()*0.0455399);
}

double NNfunction_sb_sRsR::synapse0x16eeda0() {
   return (neuron0x16e7c20()*0.00531552);
}

double NNfunction_sb_sRsR::synapse0x16eede0() {
   return (neuron0x16e7f60()*0.00128619);
}

double NNfunction_sb_sRsR::synapse0x16eee20() {
   return (neuron0x16e82a0()*0.00211296);
}

double NNfunction_sb_sRsR::synapse0x16eee60() {
   return (neuron0x16e85e0()*-0.00634185);
}

double NNfunction_sb_sRsR::synapse0x16eeea0() {
   return (neuron0x16e8920()*-0.0591333);
}

double NNfunction_sb_sRsR::synapse0x16eeee0() {
   return (neuron0x16e8c60()*-0.101211);
}

double NNfunction_sb_sRsR::synapse0x16f3020() {
   return (neuron0x16e8fa0()*0.0564611);
}

double NNfunction_sb_sRsR::synapse0x16f3060() {
   return (neuron0x16e92e0()*-0.0691913);
}

double NNfunction_sb_sRsR::synapse0x16f30a0() {
   return (neuron0x16e9620()*-0.0850192);
}

double NNfunction_sb_sRsR::synapse0x16eea30() {
   return (neuron0x16e9960()*0.0702983);
}

double NNfunction_sb_sRsR::synapse0x16eea70() {
   return (neuron0x16e9ec0()*-0.0594026);
}

double NNfunction_sb_sRsR::synapse0x16f31f0() {
   return (neuron0x16ea0e0()*0.157525);
}

double NNfunction_sb_sRsR::synapse0x16f3230() {
   return (neuron0x16ea420()*-0.0463409);
}

double NNfunction_sb_sRsR::synapse0x16f3270() {
   return (neuron0x16ea760()*-0.00777289);
}

double NNfunction_sb_sRsR::synapse0x16f32b0() {
   return (neuron0x16eaaa0()*-0.00606765);
}

double NNfunction_sb_sRsR::synapse0x16f32f0() {
   return (neuron0x16eade0()*0.00139886);
}

double NNfunction_sb_sRsR::synapse0x16f3330() {
   return (neuron0x16eb120()*-0.01165);
}

double NNfunction_sb_sRsR::synapse0x16f36b0() {
   return (neuron0x16e6560()*0.0624157);
}

double NNfunction_sb_sRsR::synapse0x16f36f0() {
   return (neuron0x16e68a0()*0.136744);
}

double NNfunction_sb_sRsR::synapse0x16f3730() {
   return (neuron0x16e6be0()*0.0910886);
}

double NNfunction_sb_sRsR::synapse0x16f3770() {
   return (neuron0x16e6f20()*0.0569395);
}

double NNfunction_sb_sRsR::synapse0x16f37b0() {
   return (neuron0x16e7260()*0.00269856);
}

double NNfunction_sb_sRsR::synapse0x16f37f0() {
   return (neuron0x16e75a0()*0.502781);
}

double NNfunction_sb_sRsR::synapse0x16f3830() {
   return (neuron0x16e78e0()*0.824527);
}

double NNfunction_sb_sRsR::synapse0x16f3870() {
   return (neuron0x16e7c20()*0.0430705);
}

double NNfunction_sb_sRsR::synapse0x16f38b0() {
   return (neuron0x16e7f60()*0.04686);
}

double NNfunction_sb_sRsR::synapse0x16f38f0() {
   return (neuron0x16e82a0()*-0.0417537);
}

double NNfunction_sb_sRsR::synapse0x16f3930() {
   return (neuron0x16e85e0()*0.0282406);
}

double NNfunction_sb_sRsR::synapse0x16f3970() {
   return (neuron0x16e8920()*-0.0830158);
}

double NNfunction_sb_sRsR::synapse0x16f39b0() {
   return (neuron0x16e8c60()*0.0703162);
}

double NNfunction_sb_sRsR::synapse0x16f39f0() {
   return (neuron0x16e8fa0()*0.021534);
}

double NNfunction_sb_sRsR::synapse0x16f3a30() {
   return (neuron0x16e92e0()*0.00501435);
}

double NNfunction_sb_sRsR::synapse0x16f3a70() {
   return (neuron0x16e9620()*0.0749256);
}

double NNfunction_sb_sRsR::synapse0x16f3500() {
   return (neuron0x16e9960()*0.333631);
}

double NNfunction_sb_sRsR::synapse0x16f3540() {
   return (neuron0x16e9ec0()*0.210435);
}

double NNfunction_sb_sRsR::synapse0x16f3bc0() {
   return (neuron0x16ea0e0()*-0.42841);
}

double NNfunction_sb_sRsR::synapse0x16f3c00() {
   return (neuron0x16ea420()*0.0204376);
}

double NNfunction_sb_sRsR::synapse0x16f3c40() {
   return (neuron0x16ea760()*0.0631113);
}

double NNfunction_sb_sRsR::synapse0x16f3c80() {
   return (neuron0x16eaaa0()*0.00359238);
}

double NNfunction_sb_sRsR::synapse0x16f3cc0() {
   return (neuron0x16eade0()*0.0249822);
}

double NNfunction_sb_sRsR::synapse0x16f3d00() {
   return (neuron0x16eb120()*-0.0303644);
}

double NNfunction_sb_sRsR::synapse0x16f4080() {
   return (neuron0x16e6560()*0.119463);
}

double NNfunction_sb_sRsR::synapse0x16f40c0() {
   return (neuron0x16e68a0()*0.286684);
}

double NNfunction_sb_sRsR::synapse0x16f4100() {
   return (neuron0x16e6be0()*0.0729465);
}

double NNfunction_sb_sRsR::synapse0x16f4140() {
   return (neuron0x16e6f20()*1.98427);
}

double NNfunction_sb_sRsR::synapse0x16f4180() {
   return (neuron0x16e7260()*-0.318829);
}

double NNfunction_sb_sRsR::synapse0x16f41c0() {
   return (neuron0x16e75a0()*-0.157972);
}

double NNfunction_sb_sRsR::synapse0x16f4200() {
   return (neuron0x16e78e0()*-0.115258);
}

double NNfunction_sb_sRsR::synapse0x16f4240() {
   return (neuron0x16e7c20()*0.219782);
}

double NNfunction_sb_sRsR::synapse0x16f4280() {
   return (neuron0x16e7f60()*0.648298);
}

double NNfunction_sb_sRsR::synapse0x16f42c0() {
   return (neuron0x16e82a0()*0.760878);
}

double NNfunction_sb_sRsR::synapse0x16f4300() {
   return (neuron0x16e85e0()*0.39902);
}

double NNfunction_sb_sRsR::synapse0x16f4340() {
   return (neuron0x16e8920()*0.0824954);
}

double NNfunction_sb_sRsR::synapse0x16f4380() {
   return (neuron0x16e8c60()*-0.328559);
}

double NNfunction_sb_sRsR::synapse0x16f43c0() {
   return (neuron0x16e8fa0()*-0.0279868);
}

double NNfunction_sb_sRsR::synapse0x16f4400() {
   return (neuron0x16e92e0()*-0.174516);
}

double NNfunction_sb_sRsR::synapse0x16f4440() {
   return (neuron0x16e9620()*0.0662169);
}

double NNfunction_sb_sRsR::synapse0x16f3ed0() {
   return (neuron0x16e9960()*0.125268);
}

double NNfunction_sb_sRsR::synapse0x16f3f10() {
   return (neuron0x16e9ec0()*-0.0647869);
}

double NNfunction_sb_sRsR::synapse0x16f4590() {
   return (neuron0x16ea0e0()*1.49136);
}

double NNfunction_sb_sRsR::synapse0x16f45d0() {
   return (neuron0x16ea420()*0.40391);
}

double NNfunction_sb_sRsR::synapse0x16f4610() {
   return (neuron0x16ea760()*0.0351486);
}

double NNfunction_sb_sRsR::synapse0x16f4650() {
   return (neuron0x16eaaa0()*-0.1711);
}

double NNfunction_sb_sRsR::synapse0x16f4690() {
   return (neuron0x16eade0()*-0.0342793);
}

double NNfunction_sb_sRsR::synapse0x16f46d0() {
   return (neuron0x16eb120()*0.390073);
}

double NNfunction_sb_sRsR::synapse0x16f4a50() {
   return (neuron0x16e6560()*-0.0115437);
}

double NNfunction_sb_sRsR::synapse0x16f4a90() {
   return (neuron0x16e68a0()*0.00412801);
}

double NNfunction_sb_sRsR::synapse0x16f4ad0() {
   return (neuron0x16e6be0()*0.0291409);
}

double NNfunction_sb_sRsR::synapse0x16f4b10() {
   return (neuron0x16e6f20()*-0.0433368);
}

double NNfunction_sb_sRsR::synapse0x16f4b50() {
   return (neuron0x16e7260()*0.0205442);
}

double NNfunction_sb_sRsR::synapse0x16f4b90() {
   return (neuron0x16e75a0()*-0.0264214);
}

double NNfunction_sb_sRsR::synapse0x16f4bd0() {
   return (neuron0x16e78e0()*0.00635194);
}

double NNfunction_sb_sRsR::synapse0x16f4c10() {
   return (neuron0x16e7c20()*-0.0177458);
}

double NNfunction_sb_sRsR::synapse0x16f4c50() {
   return (neuron0x16e7f60()*0.0121126);
}

double NNfunction_sb_sRsR::synapse0x16f4c90() {
   return (neuron0x16e82a0()*0.0480272);
}

double NNfunction_sb_sRsR::synapse0x16f4cd0() {
   return (neuron0x16e85e0()*0.0440903);
}

double NNfunction_sb_sRsR::synapse0x16f4d10() {
   return (neuron0x16e8920()*0.0925532);
}

double NNfunction_sb_sRsR::synapse0x16f4d50() {
   return (neuron0x16e8c60()*0.0973564);
}

double NNfunction_sb_sRsR::synapse0x16f4d90() {
   return (neuron0x16e8fa0()*-0.0274288);
}

double NNfunction_sb_sRsR::synapse0x16f4dd0() {
   return (neuron0x16e92e0()*0.0284166);
}

double NNfunction_sb_sRsR::synapse0x16f4e10() {
   return (neuron0x16e9620()*0.0347764);
}

double NNfunction_sb_sRsR::synapse0x16f48a0() {
   return (neuron0x16e9960()*-0.00342135);
}

double NNfunction_sb_sRsR::synapse0x16f48e0() {
   return (neuron0x16e9ec0()*0.0735474);
}

double NNfunction_sb_sRsR::synapse0x16f4f60() {
   return (neuron0x16ea0e0()*-0.505961);
}

double NNfunction_sb_sRsR::synapse0x16f4fa0() {
   return (neuron0x16ea420()*-0.257793);
}

double NNfunction_sb_sRsR::synapse0x16f4fe0() {
   return (neuron0x16ea760()*-0.00566859);
}

double NNfunction_sb_sRsR::synapse0x16f5020() {
   return (neuron0x16eaaa0()*-0.00354286);
}

double NNfunction_sb_sRsR::synapse0x16f5060() {
   return (neuron0x16eade0()*0.0149547);
}

double NNfunction_sb_sRsR::synapse0x16f50a0() {
   return (neuron0x16eb120()*0.000854176);
}

double NNfunction_sb_sRsR::synapse0x16f5420() {
   return (neuron0x16e6560()*0.024909);
}

double NNfunction_sb_sRsR::synapse0x16e6780() {
   return (neuron0x16e68a0()*0.107517);
}

double NNfunction_sb_sRsR::synapse0x16e67c0() {
   return (neuron0x16e6be0()*-0.0223049);
}

double NNfunction_sb_sRsR::synapse0x16e6ac0() {
   return (neuron0x16e6f20()*2.98819);
}

double NNfunction_sb_sRsR::synapse0x16e6b00() {
   return (neuron0x16e7260()*-0.0108338);
}

double NNfunction_sb_sRsR::synapse0x16e6e00() {
   return (neuron0x16e75a0()*0.0842505);
}

double NNfunction_sb_sRsR::synapse0x16e6e40() {
   return (neuron0x16e78e0()*-0.055219);
}

double NNfunction_sb_sRsR::synapse0x16e7140() {
   return (neuron0x16e7c20()*-0.0139242);
}

double NNfunction_sb_sRsR::synapse0x16e7180() {
   return (neuron0x16e7f60()*0.00372808);
}

double NNfunction_sb_sRsR::synapse0x16e7480() {
   return (neuron0x16e82a0()*0.0206139);
}

double NNfunction_sb_sRsR::synapse0x16e74c0() {
   return (neuron0x16e85e0()*0.00646163);
}

double NNfunction_sb_sRsR::synapse0x16e77c0() {
   return (neuron0x16e8920()*0.0256566);
}

double NNfunction_sb_sRsR::synapse0x16e7800() {
   return (neuron0x16e8c60()*0.0495457);
}

double NNfunction_sb_sRsR::synapse0x16e7b00() {
   return (neuron0x16e8fa0()*-0.0225606);
}

double NNfunction_sb_sRsR::synapse0x16e7b40() {
   return (neuron0x16e92e0()*0.085442);
}

double NNfunction_sb_sRsR::synapse0x16e7e40() {
   return (neuron0x16e9620()*0.0706089);
}

double NNfunction_sb_sRsR::synapse0x16e7e80() {
   return (neuron0x16e9960()*-0.0665727);
}

double NNfunction_sb_sRsR::synapse0x16e8180() {
   return (neuron0x16e9ec0()*0.0476649);
}

double NNfunction_sb_sRsR::synapse0x16e81c0() {
   return (neuron0x16ea0e0()*-0.136532);
}

double NNfunction_sb_sRsR::synapse0x16e84c0() {
   return (neuron0x16ea420()*0.0198498);
}

double NNfunction_sb_sRsR::synapse0x16e8500() {
   return (neuron0x16ea760()*0.0111735);
}

double NNfunction_sb_sRsR::synapse0x16e8800() {
   return (neuron0x16eaaa0()*-0.00846011);
}

double NNfunction_sb_sRsR::synapse0x16e8840() {
   return (neuron0x16eade0()*-0.00422067);
}

double NNfunction_sb_sRsR::synapse0x16e8b40() {
   return (neuron0x16eb120()*0.00920215);
}

double NNfunction_sb_sRsR::synapse0x16e8b80() {
   return (neuron0x16e6560()*-0.00721817);
}

double NNfunction_sb_sRsR::synapse0x16e9840() {
   return (neuron0x16e68a0()*0.102127);
}

double NNfunction_sb_sRsR::synapse0x16e9880() {
   return (neuron0x16e6be0()*0.0638774);
}

double NNfunction_sb_sRsR::synapse0x16f5270() {
   return (neuron0x16e6f20()*0.420359);
}

double NNfunction_sb_sRsR::synapse0x16f52b0() {
   return (neuron0x16e7260()*0.853214);
}

double NNfunction_sb_sRsR::synapse0x16e9b80() {
   return (neuron0x16e75a0()*0.245462);
}

double NNfunction_sb_sRsR::synapse0x16e9bc0() {
   return (neuron0x16e78e0()*-0.0250774);
}

double NNfunction_sb_sRsR::synapse0x1497b50() {
   return (neuron0x16e7c20()*-0.114949);
}

double NNfunction_sb_sRsR::synapse0x1497b90() {
   return (neuron0x16e7f60()*-0.0305116);
}

double NNfunction_sb_sRsR::synapse0x16ea300() {
   return (neuron0x16e82a0()*-0.00607053);
}

double NNfunction_sb_sRsR::synapse0x16ea340() {
   return (neuron0x16e85e0()*0.0783574);
}

double NNfunction_sb_sRsR::synapse0x16ea640() {
   return (neuron0x16e8920()*-0.12708);
}

double NNfunction_sb_sRsR::synapse0x16ea680() {
   return (neuron0x16e8c60()*0.0273977);
}

double NNfunction_sb_sRsR::synapse0x16ea980() {
   return (neuron0x16e8fa0()*0.114834);
}

double NNfunction_sb_sRsR::synapse0x16ea9c0() {
   return (neuron0x16e92e0()*-0.092895);
}

double NNfunction_sb_sRsR::synapse0x16eacc0() {
   return (neuron0x16e9620()*-0.165041);
}

double NNfunction_sb_sRsR::synapse0x16ead00() {
   return (neuron0x16e9960()*0.0769925);
}

double NNfunction_sb_sRsR::synapse0x16eb000() {
   return (neuron0x16e9ec0()*-0.0138651);
}

double NNfunction_sb_sRsR::synapse0x16eb040() {
   return (neuron0x16ea0e0()*-0.419119);
}

double NNfunction_sb_sRsR::synapse0x16eb340() {
   return (neuron0x16ea420()*0.0608227);
}

double NNfunction_sb_sRsR::synapse0x16eb380() {
   return (neuron0x16ea760()*0.0339797);
}

double NNfunction_sb_sRsR::synapse0x16e8e80() {
   return (neuron0x16eaaa0()*-0.0151888);
}

double NNfunction_sb_sRsR::synapse0x16e8ec0() {
   return (neuron0x16eade0()*-0.0013806);
}

double NNfunction_sb_sRsR::synapse0x16f7190() {
   return (neuron0x16eb120()*-0.0090464);
}

double NNfunction_sb_sRsR::synapse0x16f7510() {
   return (neuron0x16e6560()*-0.0200824);
}

double NNfunction_sb_sRsR::synapse0x16f7550() {
   return (neuron0x16e68a0()*-0.000217667);
}

double NNfunction_sb_sRsR::synapse0x16f7590() {
   return (neuron0x16e6be0()*0.0013206);
}

double NNfunction_sb_sRsR::synapse0x16f75d0() {
   return (neuron0x16e6f20()*0.0624261);
}

double NNfunction_sb_sRsR::synapse0x16f7610() {
   return (neuron0x16e7260()*-0.00526174);
}

double NNfunction_sb_sRsR::synapse0x16f7650() {
   return (neuron0x16e75a0()*-0.00446041);
}

double NNfunction_sb_sRsR::synapse0x16f7690() {
   return (neuron0x16e78e0()*0.00451705);
}

double NNfunction_sb_sRsR::synapse0x16f76d0() {
   return (neuron0x16e7c20()*-0.00541578);
}

double NNfunction_sb_sRsR::synapse0x16f7710() {
   return (neuron0x16e7f60()*-0.00583901);
}

double NNfunction_sb_sRsR::synapse0x16f7750() {
   return (neuron0x16e82a0()*-0.0158884);
}

double NNfunction_sb_sRsR::synapse0x16f7790() {
   return (neuron0x16e85e0()*-0.0136613);
}

double NNfunction_sb_sRsR::synapse0x16f77d0() {
   return (neuron0x16e8920()*0.00347464);
}

double NNfunction_sb_sRsR::synapse0x16f7810() {
   return (neuron0x16e8c60()*-0.0102416);
}

double NNfunction_sb_sRsR::synapse0x16f7850() {
   return (neuron0x16e8fa0()*0.00910431);
}

double NNfunction_sb_sRsR::synapse0x16f7890() {
   return (neuron0x16e92e0()*0.00269866);
}

double NNfunction_sb_sRsR::synapse0x16f78d0() {
   return (neuron0x16e9620()*0.000549407);
}

double NNfunction_sb_sRsR::synapse0x16f7360() {
   return (neuron0x16e9960()*-0.000705636);
}

double NNfunction_sb_sRsR::synapse0x16f73a0() {
   return (neuron0x16e9ec0()*-0.00718005);
}

double NNfunction_sb_sRsR::synapse0x16f7a20() {
   return (neuron0x16ea0e0()*4.49263);
}

double NNfunction_sb_sRsR::synapse0x16f7a60() {
   return (neuron0x16ea420()*-0.000390899);
}

double NNfunction_sb_sRsR::synapse0x16f7aa0() {
   return (neuron0x16ea760()*-0.00199121);
}

double NNfunction_sb_sRsR::synapse0x16f7ae0() {
   return (neuron0x16eaaa0()*0.00471601);
}

double NNfunction_sb_sRsR::synapse0x16f7b20() {
   return (neuron0x16eade0()*-0.0032681);
}

double NNfunction_sb_sRsR::synapse0x16f7b60() {
   return (neuron0x16eb120()*-0.0237078);
}

double NNfunction_sb_sRsR::synapse0x16f7ee0() {
   return (neuron0x16e6560()*0.0811752);
}

double NNfunction_sb_sRsR::synapse0x16f7f20() {
   return (neuron0x16e68a0()*-0.379658);
}

double NNfunction_sb_sRsR::synapse0x16f7f60() {
   return (neuron0x16e6be0()*-0.171192);
}

double NNfunction_sb_sRsR::synapse0x16f7fa0() {
   return (neuron0x16e6f20()*-1.02302);
}

double NNfunction_sb_sRsR::synapse0x16f7fe0() {
   return (neuron0x16e7260()*-0.141664);
}

double NNfunction_sb_sRsR::synapse0x16f8020() {
   return (neuron0x16e75a0()*0.130031);
}

double NNfunction_sb_sRsR::synapse0x16f8060() {
   return (neuron0x16e78e0()*-0.388268);
}

double NNfunction_sb_sRsR::synapse0x16f80a0() {
   return (neuron0x16e7c20()*-0.135271);
}

double NNfunction_sb_sRsR::synapse0x16f80e0() {
   return (neuron0x16e7f60()*-0.0267542);
}

double NNfunction_sb_sRsR::synapse0x16f8120() {
   return (neuron0x16e82a0()*-0.220429);
}

double NNfunction_sb_sRsR::synapse0x16f8160() {
   return (neuron0x16e85e0()*0.259887);
}

double NNfunction_sb_sRsR::synapse0x16f81a0() {
   return (neuron0x16e8920()*0.523545);
}

double NNfunction_sb_sRsR::synapse0x16f81e0() {
   return (neuron0x16e8c60()*-0.26178);
}

double NNfunction_sb_sRsR::synapse0x16f8220() {
   return (neuron0x16e8fa0()*-0.359723);
}

double NNfunction_sb_sRsR::synapse0x16f8260() {
   return (neuron0x16e92e0()*0.205432);
}

double NNfunction_sb_sRsR::synapse0x16f82a0() {
   return (neuron0x16e9620()*-0.537115);
}

double NNfunction_sb_sRsR::synapse0x16f7d30() {
   return (neuron0x16e9960()*0.769016);
}

double NNfunction_sb_sRsR::synapse0x16f7d70() {
   return (neuron0x16e9ec0()*-0.308428);
}

double NNfunction_sb_sRsR::synapse0x16f83f0() {
   return (neuron0x16ea0e0()*0.67069);
}

double NNfunction_sb_sRsR::synapse0x16f8430() {
   return (neuron0x16ea420()*0.448903);
}

double NNfunction_sb_sRsR::synapse0x16f8470() {
   return (neuron0x16ea760()*0.0318371);
}

double NNfunction_sb_sRsR::synapse0x16f84b0() {
   return (neuron0x16eaaa0()*0.189311);
}

double NNfunction_sb_sRsR::synapse0x16f84f0() {
   return (neuron0x16eade0()*0.0382134);
}

double NNfunction_sb_sRsR::synapse0x16f8530() {
   return (neuron0x16eb120()*0.105059);
}

double NNfunction_sb_sRsR::synapse0x16f88b0() {
   return (neuron0x16e6560()*-0.231299);
}

double NNfunction_sb_sRsR::synapse0x16f88f0() {
   return (neuron0x16e68a0()*0.114416);
}

double NNfunction_sb_sRsR::synapse0x16f8930() {
   return (neuron0x16e6be0()*-0.0362379);
}

double NNfunction_sb_sRsR::synapse0x16f8970() {
   return (neuron0x16e6f20()*1.96972);
}

double NNfunction_sb_sRsR::synapse0x16f89b0() {
   return (neuron0x16e7260()*0.166244);
}

double NNfunction_sb_sRsR::synapse0x16f89f0() {
   return (neuron0x16e75a0()*0.03223);
}

double NNfunction_sb_sRsR::synapse0x16f8a30() {
   return (neuron0x16e78e0()*-0.07779);
}

double NNfunction_sb_sRsR::synapse0x16f8a70() {
   return (neuron0x16e7c20()*-0.140399);
}

double NNfunction_sb_sRsR::synapse0x16f8ab0() {
   return (neuron0x16e7f60()*-0.155095);
}

double NNfunction_sb_sRsR::synapse0x16f8af0() {
   return (neuron0x16e82a0()*-0.113277);
}

double NNfunction_sb_sRsR::synapse0x16f8b30() {
   return (neuron0x16e85e0()*-0.339943);
}

double NNfunction_sb_sRsR::synapse0x16f8b70() {
   return (neuron0x16e8920()*0.20816);
}

double NNfunction_sb_sRsR::synapse0x16f8bb0() {
   return (neuron0x16e8c60()*-0.0250921);
}

double NNfunction_sb_sRsR::synapse0x16f8bf0() {
   return (neuron0x16e8fa0()*0.222479);
}

double NNfunction_sb_sRsR::synapse0x16f8c30() {
   return (neuron0x16e92e0()*0.00328802);
}

double NNfunction_sb_sRsR::synapse0x16f8c70() {
   return (neuron0x16e9620()*0.1287);
}

double NNfunction_sb_sRsR::synapse0x16f8700() {
   return (neuron0x16e9960()*0.395109);
}

double NNfunction_sb_sRsR::synapse0x16f8740() {
   return (neuron0x16e9ec0()*0.0857898);
}

double NNfunction_sb_sRsR::synapse0x16f8dc0() {
   return (neuron0x16ea0e0()*1.58583);
}

double NNfunction_sb_sRsR::synapse0x16f8e00() {
   return (neuron0x16ea420()*-0.247348);
}

double NNfunction_sb_sRsR::synapse0x16f8e40() {
   return (neuron0x16ea760()*-0.0809989);
}

double NNfunction_sb_sRsR::synapse0x16f8e80() {
   return (neuron0x16eaaa0()*0.203038);
}

double NNfunction_sb_sRsR::synapse0x16f8ec0() {
   return (neuron0x16eade0()*0.0790329);
}

double NNfunction_sb_sRsR::synapse0x16f8f00() {
   return (neuron0x16eb120()*-0.088194);
}

double NNfunction_sb_sRsR::synapse0x16f9280() {
   return (neuron0x16e6560()*0.317204);
}

double NNfunction_sb_sRsR::synapse0x16f92c0() {
   return (neuron0x16e68a0()*-0.0666899);
}

double NNfunction_sb_sRsR::synapse0x16f9300() {
   return (neuron0x16e6be0()*0.367556);
}

double NNfunction_sb_sRsR::synapse0x16f9340() {
   return (neuron0x16e6f20()*-0.102726);
}

double NNfunction_sb_sRsR::synapse0x16f9380() {
   return (neuron0x16e7260()*0.264204);
}

double NNfunction_sb_sRsR::synapse0x16f93c0() {
   return (neuron0x16e75a0()*0.110571);
}

double NNfunction_sb_sRsR::synapse0x16f9400() {
   return (neuron0x16e78e0()*0.566078);
}

double NNfunction_sb_sRsR::synapse0x16f9440() {
   return (neuron0x16e7c20()*0.342428);
}

double NNfunction_sb_sRsR::synapse0x16f9480() {
   return (neuron0x16e7f60()*0.148554);
}

double NNfunction_sb_sRsR::synapse0x16f94c0() {
   return (neuron0x16e82a0()*-0.364274);
}

double NNfunction_sb_sRsR::synapse0x16f9500() {
   return (neuron0x16e85e0()*0.368754);
}

double NNfunction_sb_sRsR::synapse0x16f9540() {
   return (neuron0x16e8920()*-0.771015);
}

double NNfunction_sb_sRsR::synapse0x16f9580() {
   return (neuron0x16e8c60()*0.158391);
}

double NNfunction_sb_sRsR::synapse0x16f95c0() {
   return (neuron0x16e8fa0()*0.539508);
}

double NNfunction_sb_sRsR::synapse0x16f9600() {
   return (neuron0x16e92e0()*-0.100297);
}

double NNfunction_sb_sRsR::synapse0x16f9640() {
   return (neuron0x16e9620()*0.167157);
}

double NNfunction_sb_sRsR::synapse0x16f90d0() {
   return (neuron0x16e9960()*0.498625);
}

double NNfunction_sb_sRsR::synapse0x16f9110() {
   return (neuron0x16e9ec0()*-0.270276);
}

double NNfunction_sb_sRsR::synapse0x16f9790() {
   return (neuron0x16ea0e0()*0.20213);
}

double NNfunction_sb_sRsR::synapse0x16f97d0() {
   return (neuron0x16ea420()*0.447741);
}

double NNfunction_sb_sRsR::synapse0x16f9810() {
   return (neuron0x16ea760()*0.0818349);
}

double NNfunction_sb_sRsR::synapse0x16f9850() {
   return (neuron0x16eaaa0()*-0.331572);
}

double NNfunction_sb_sRsR::synapse0x16f9890() {
   return (neuron0x16eade0()*0.100382);
}

double NNfunction_sb_sRsR::synapse0x16f98d0() {
   return (neuron0x16eb120()*0.121449);
}

double NNfunction_sb_sRsR::synapse0x16f9c50() {
   return (neuron0x16e6560()*0.00450474);
}

double NNfunction_sb_sRsR::synapse0x16f9c90() {
   return (neuron0x16e68a0()*0.000368538);
}

double NNfunction_sb_sRsR::synapse0x16f9cd0() {
   return (neuron0x16e6be0()*-0.0150792);
}

double NNfunction_sb_sRsR::synapse0x16f9d10() {
   return (neuron0x16e6f20()*0.00798053);
}

double NNfunction_sb_sRsR::synapse0x16f9d50() {
   return (neuron0x16e7260()*-0.00185094);
}

double NNfunction_sb_sRsR::synapse0x16f9d90() {
   return (neuron0x16e75a0()*0.00917021);
}

double NNfunction_sb_sRsR::synapse0x16f9dd0() {
   return (neuron0x16e78e0()*-0.00387131);
}

double NNfunction_sb_sRsR::synapse0x16f9e10() {
   return (neuron0x16e7c20()*0.00226573);
}

double NNfunction_sb_sRsR::synapse0x16f9e50() {
   return (neuron0x16e7f60()*-0.00762235);
}

double NNfunction_sb_sRsR::synapse0x16f2010() {
   return (neuron0x16e82a0()*0.00216471);
}

double NNfunction_sb_sRsR::synapse0x16f2050() {
   return (neuron0x16e85e0()*-0.00145023);
}

double NNfunction_sb_sRsR::synapse0x16f2090() {
   return (neuron0x16e8920()*-0.367578);
}

double NNfunction_sb_sRsR::synapse0x16f20d0() {
   return (neuron0x16e8c60()*-0.417763);
}

double NNfunction_sb_sRsR::synapse0x16f2110() {
   return (neuron0x16e8fa0()*0.0118207);
}

double NNfunction_sb_sRsR::synapse0x16f2150() {
   return (neuron0x16e92e0()*-0.18295);
}

double NNfunction_sb_sRsR::synapse0x16f2190() {
   return (neuron0x16e9620()*-0.203026);
}

double NNfunction_sb_sRsR::synapse0x16f9aa0() {
   return (neuron0x16e9960()*0.00523707);
}

double NNfunction_sb_sRsR::synapse0x16f9ae0() {
   return (neuron0x16e9ec0()*-0.217711);
}

double NNfunction_sb_sRsR::synapse0x16f22e0() {
   return (neuron0x16ea0e0()*0.177825);
}

double NNfunction_sb_sRsR::synapse0x16f2320() {
   return (neuron0x16ea420()*0.0405089);
}

double NNfunction_sb_sRsR::synapse0x16f2360() {
   return (neuron0x16ea760()*0.00281325);
}

double NNfunction_sb_sRsR::synapse0x16f23a0() {
   return (neuron0x16eaaa0()*0.00456323);
}

double NNfunction_sb_sRsR::synapse0x16f23e0() {
   return (neuron0x16eade0()*-0.00145007);
}

double NNfunction_sb_sRsR::synapse0x16f2420() {
   return (neuron0x16eb120()*0.00265421);
}

double NNfunction_sb_sRsR::synapse0x16f27a0() {
   return (neuron0x16e6560()*0.0431042);
}

double NNfunction_sb_sRsR::synapse0x16f27e0() {
   return (neuron0x16e68a0()*0.0795975);
}

double NNfunction_sb_sRsR::synapse0x16f2820() {
   return (neuron0x16e6be0()*0.00786913);
}

double NNfunction_sb_sRsR::synapse0x16f2860() {
   return (neuron0x16e6f20()*0.10973);
}

double NNfunction_sb_sRsR::synapse0x16f28a0() {
   return (neuron0x16e7260()*-0.00264289);
}

double NNfunction_sb_sRsR::synapse0x16f28e0() {
   return (neuron0x16e75a0()*-0.0922289);
}

double NNfunction_sb_sRsR::synapse0x16f2920() {
   return (neuron0x16e78e0()*0.0305631);
}

double NNfunction_sb_sRsR::synapse0x16f2960() {
   return (neuron0x16e7c20()*0.0430096);
}

double NNfunction_sb_sRsR::synapse0x16f29a0() {
   return (neuron0x16e7f60()*0.017663);
}

double NNfunction_sb_sRsR::synapse0x16f29e0() {
   return (neuron0x16e82a0()*0.0105303);
}

double NNfunction_sb_sRsR::synapse0x16f2a20() {
   return (neuron0x16e85e0()*0.018244);
}

double NNfunction_sb_sRsR::synapse0x16f2a60() {
   return (neuron0x16e8920()*-0.121149);
}

double NNfunction_sb_sRsR::synapse0x16f2aa0() {
   return (neuron0x16e8c60()*-0.0189152);
}

double NNfunction_sb_sRsR::synapse0x16f2ae0() {
   return (neuron0x16e8fa0()*-0.0388445);
}

double NNfunction_sb_sRsR::synapse0x16f2b20() {
   return (neuron0x16e92e0()*-0.0542643);
}

double NNfunction_sb_sRsR::synapse0x16f2b60() {
   return (neuron0x16e9620()*1.0661);
}

double NNfunction_sb_sRsR::synapse0x16f25f0() {
   return (neuron0x16e9960()*0.00533702);
}

double NNfunction_sb_sRsR::synapse0x16f2630() {
   return (neuron0x16e9ec0()*0.0892481);
}

double NNfunction_sb_sRsR::synapse0x16f2cb0() {
   return (neuron0x16ea0e0()*-0.33073);
}

double NNfunction_sb_sRsR::synapse0x16f2cf0() {
   return (neuron0x16ea420()*-0.0396715);
}

double NNfunction_sb_sRsR::synapse0x16f2d30() {
   return (neuron0x16ea760()*0.0116071);
}

double NNfunction_sb_sRsR::synapse0x16f2d70() {
   return (neuron0x16eaaa0()*0.0592558);
}

double NNfunction_sb_sRsR::synapse0x16f2db0() {
   return (neuron0x16eade0()*-0.0294207);
}

double NNfunction_sb_sRsR::synapse0x16f2df0() {
   return (neuron0x16eb120()*0.0217072);
}

double NNfunction_sb_sRsR::synapse0x16f2fc0() {
   return (neuron0x16e6560()*-0.288243);
}

double NNfunction_sb_sRsR::synapse0x16fc050() {
   return (neuron0x16e68a0()*-0.4431);
}

double NNfunction_sb_sRsR::synapse0x16fc090() {
   return (neuron0x16e6be0()*0.0527715);
}

double NNfunction_sb_sRsR::synapse0x16fc0d0() {
   return (neuron0x16e6f20()*0.113118);
}

double NNfunction_sb_sRsR::synapse0x16fc110() {
   return (neuron0x16e7260()*0.0932623);
}

double NNfunction_sb_sRsR::synapse0x16fc150() {
   return (neuron0x16e75a0()*0.0343525);
}

double NNfunction_sb_sRsR::synapse0x16fc190() {
   return (neuron0x16e78e0()*0.285125);
}

double NNfunction_sb_sRsR::synapse0x16fc1d0() {
   return (neuron0x16e7c20()*-0.402683);
}

double NNfunction_sb_sRsR::synapse0x16fc210() {
   return (neuron0x16e7f60()*0.421028);
}

double NNfunction_sb_sRsR::synapse0x16fc250() {
   return (neuron0x16e82a0()*-0.248147);
}

double NNfunction_sb_sRsR::synapse0x16fc290() {
   return (neuron0x16e85e0()*0.165021);
}

double NNfunction_sb_sRsR::synapse0x16fc2d0() {
   return (neuron0x16e8920()*-0.244929);
}

double NNfunction_sb_sRsR::synapse0x16fc310() {
   return (neuron0x16e8c60()*-0.0579845);
}

double NNfunction_sb_sRsR::synapse0x16fc350() {
   return (neuron0x16e8fa0()*0.128765);
}

double NNfunction_sb_sRsR::synapse0x16fc390() {
   return (neuron0x16e92e0()*0.225423);
}

double NNfunction_sb_sRsR::synapse0x16fc3d0() {
   return (neuron0x16e9620()*0.273342);
}

double NNfunction_sb_sRsR::synapse0x16fbea0() {
   return (neuron0x16e9960()*1.56086);
}

double NNfunction_sb_sRsR::synapse0x16fbee0() {
   return (neuron0x16e9ec0()*-0.00310282);
}

double NNfunction_sb_sRsR::synapse0x16fc520() {
   return (neuron0x16ea0e0()*0.182765);
}

double NNfunction_sb_sRsR::synapse0x16fc560() {
   return (neuron0x16ea420()*-0.139076);
}

double NNfunction_sb_sRsR::synapse0x16fc5a0() {
   return (neuron0x16ea760()*0.00603978);
}

double NNfunction_sb_sRsR::synapse0x16fc5e0() {
   return (neuron0x16eaaa0()*-0.0375446);
}

double NNfunction_sb_sRsR::synapse0x16fc620() {
   return (neuron0x16eade0()*0.134932);
}

double NNfunction_sb_sRsR::synapse0x16fc660() {
   return (neuron0x16eb120()*0.503261);
}

double NNfunction_sb_sRsR::synapse0x16fc9e0() {
   return (neuron0x16e6560()*-0.110863);
}

double NNfunction_sb_sRsR::synapse0x16fca20() {
   return (neuron0x16e68a0()*0.208599);
}

double NNfunction_sb_sRsR::synapse0x16fca60() {
   return (neuron0x16e6be0()*-0.123124);
}

double NNfunction_sb_sRsR::synapse0x16fcaa0() {
   return (neuron0x16e6f20()*-1.63908);
}

double NNfunction_sb_sRsR::synapse0x16fcae0() {
   return (neuron0x16e7260()*0.283485);
}

double NNfunction_sb_sRsR::synapse0x16fcb20() {
   return (neuron0x16e75a0()*0.287077);
}

double NNfunction_sb_sRsR::synapse0x16fcb60() {
   return (neuron0x16e78e0()*0.354933);
}

double NNfunction_sb_sRsR::synapse0x16fcba0() {
   return (neuron0x16e7c20()*0.0194516);
}

double NNfunction_sb_sRsR::synapse0x16fcbe0() {
   return (neuron0x16e7f60()*0.0176116);
}

double NNfunction_sb_sRsR::synapse0x16fcc20() {
   return (neuron0x16e82a0()*-0.137773);
}

double NNfunction_sb_sRsR::synapse0x16fcc60() {
   return (neuron0x16e85e0()*0.0818068);
}

double NNfunction_sb_sRsR::synapse0x16fcca0() {
   return (neuron0x16e8920()*-0.00352583);
}

double NNfunction_sb_sRsR::synapse0x16fcce0() {
   return (neuron0x16e8c60()*0.221284);
}

double NNfunction_sb_sRsR::synapse0x16fcd20() {
   return (neuron0x16e8fa0()*0.154878);
}

double NNfunction_sb_sRsR::synapse0x16fcd60() {
   return (neuron0x16e92e0()*-0.040732);
}

double NNfunction_sb_sRsR::synapse0x16fcda0() {
   return (neuron0x16e9620()*0.0406709);
}

double NNfunction_sb_sRsR::synapse0x16fc830() {
   return (neuron0x16e9960()*0.195703);
}

double NNfunction_sb_sRsR::synapse0x16fc870() {
   return (neuron0x16e9ec0()*0.0917963);
}

double NNfunction_sb_sRsR::synapse0x16fcef0() {
   return (neuron0x16ea0e0()*0.975628);
}

double NNfunction_sb_sRsR::synapse0x16fcf30() {
   return (neuron0x16ea420()*-0.178909);
}

double NNfunction_sb_sRsR::synapse0x16fcf70() {
   return (neuron0x16ea760()*-0.0604167);
}

double NNfunction_sb_sRsR::synapse0x16fcfb0() {
   return (neuron0x16eaaa0()*0.15445);
}

double NNfunction_sb_sRsR::synapse0x16fcff0() {
   return (neuron0x16eade0()*-0.0995622);
}

double NNfunction_sb_sRsR::synapse0x16fd030() {
   return (neuron0x16eb120()*0.249854);
}

double NNfunction_sb_sRsR::synapse0x16fd3b0() {
   return (neuron0x16e6560()*0.0667035);
}

double NNfunction_sb_sRsR::synapse0x16fd3f0() {
   return (neuron0x16e68a0()*0.145532);
}

double NNfunction_sb_sRsR::synapse0x16fd430() {
   return (neuron0x16e6be0()*-0.119694);
}

double NNfunction_sb_sRsR::synapse0x16fd470() {
   return (neuron0x16e6f20()*-1.72052);
}

double NNfunction_sb_sRsR::synapse0x16fd4b0() {
   return (neuron0x16e7260()*0.22062);
}

double NNfunction_sb_sRsR::synapse0x16fd4f0() {
   return (neuron0x16e75a0()*0.0213015);
}

double NNfunction_sb_sRsR::synapse0x16fd530() {
   return (neuron0x16e78e0()*0.301361);
}

double NNfunction_sb_sRsR::synapse0x16fd570() {
   return (neuron0x16e7c20()*-0.000469491);
}

double NNfunction_sb_sRsR::synapse0x16fd5b0() {
   return (neuron0x16e7f60()*-0.0667354);
}

double NNfunction_sb_sRsR::synapse0x16fd5f0() {
   return (neuron0x16e82a0()*0.132411);
}

double NNfunction_sb_sRsR::synapse0x16fd630() {
   return (neuron0x16e85e0()*0.12457);
}

double NNfunction_sb_sRsR::synapse0x16fd670() {
   return (neuron0x16e8920()*0.342403);
}

double NNfunction_sb_sRsR::synapse0x16fd6b0() {
   return (neuron0x16e8c60()*-0.194574);
}

double NNfunction_sb_sRsR::synapse0x16fd6f0() {
   return (neuron0x16e8fa0()*-0.0801699);
}

double NNfunction_sb_sRsR::synapse0x16fd730() {
   return (neuron0x16e92e0()*0.0307719);
}

double NNfunction_sb_sRsR::synapse0x16fd770() {
   return (neuron0x16e9620()*0.273334);
}

double NNfunction_sb_sRsR::synapse0x16fd200() {
   return (neuron0x16e9960()*-0.0226841);
}

double NNfunction_sb_sRsR::synapse0x16fd240() {
   return (neuron0x16e9ec0()*-0.179718);
}

double NNfunction_sb_sRsR::synapse0x16fd8c0() {
   return (neuron0x16ea0e0()*-0.0788884);
}

double NNfunction_sb_sRsR::synapse0x16fd900() {
   return (neuron0x16ea420()*-0.606252);
}

double NNfunction_sb_sRsR::synapse0x16fd940() {
   return (neuron0x16ea760()*0.0956837);
}

double NNfunction_sb_sRsR::synapse0x16fd980() {
   return (neuron0x16eaaa0()*0.299141);
}

double NNfunction_sb_sRsR::synapse0x16fd9c0() {
   return (neuron0x16eade0()*0.0154556);
}

double NNfunction_sb_sRsR::synapse0x16fda00() {
   return (neuron0x16eb120()*0.185947);
}

double NNfunction_sb_sRsR::synapse0x16fdd80() {
   return (neuron0x16e6560()*0.00970547);
}

double NNfunction_sb_sRsR::synapse0x16fddc0() {
   return (neuron0x16e68a0()*0.00286755);
}

double NNfunction_sb_sRsR::synapse0x16fde00() {
   return (neuron0x16e6be0()*0.0146961);
}

double NNfunction_sb_sRsR::synapse0x16fde40() {
   return (neuron0x16e6f20()*-0.0197308);
}

double NNfunction_sb_sRsR::synapse0x16fde80() {
   return (neuron0x16e7260()*-0.00158258);
}

double NNfunction_sb_sRsR::synapse0x16fdec0() {
   return (neuron0x16e75a0()*0.0175308);
}

double NNfunction_sb_sRsR::synapse0x16fdf00() {
   return (neuron0x16e78e0()*-0.00903763);
}

double NNfunction_sb_sRsR::synapse0x16fdf40() {
   return (neuron0x16e7c20()*-0.00411566);
}

double NNfunction_sb_sRsR::synapse0x16fdf80() {
   return (neuron0x16e7f60()*-0.0279145);
}

double NNfunction_sb_sRsR::synapse0x16fdfc0() {
   return (neuron0x16e82a0()*-0.0285244);
}

double NNfunction_sb_sRsR::synapse0x16fe000() {
   return (neuron0x16e85e0()*-0.0144235);
}

double NNfunction_sb_sRsR::synapse0x16fe040() {
   return (neuron0x16e8920()*0.015318);
}

double NNfunction_sb_sRsR::synapse0x16fe080() {
   return (neuron0x16e8c60()*-0.00679973);
}

double NNfunction_sb_sRsR::synapse0x16fe0c0() {
   return (neuron0x16e8fa0()*0.0353369);
}

double NNfunction_sb_sRsR::synapse0x16fe100() {
   return (neuron0x16e92e0()*0.0169863);
}

double NNfunction_sb_sRsR::synapse0x16fe140() {
   return (neuron0x16e9620()*0.0214495);
}

double NNfunction_sb_sRsR::synapse0x16fdbd0() {
   return (neuron0x16e9960()*0.0333389);
}

double NNfunction_sb_sRsR::synapse0x16fdc10() {
   return (neuron0x16e9ec0()*-0.0152569);
}

double NNfunction_sb_sRsR::synapse0x16fe290() {
   return (neuron0x16ea0e0()*2.31009);
}

double NNfunction_sb_sRsR::synapse0x16fe2d0() {
   return (neuron0x16ea420()*-0.0110053);
}

double NNfunction_sb_sRsR::synapse0x16fe310() {
   return (neuron0x16ea760()*-0.00688083);
}

double NNfunction_sb_sRsR::synapse0x16fe350() {
   return (neuron0x16eaaa0()*-0.00827988);
}

double NNfunction_sb_sRsR::synapse0x16fe390() {
   return (neuron0x16eade0()*-0.0105526);
}

double NNfunction_sb_sRsR::synapse0x16fe3d0() {
   return (neuron0x16eb120()*-0.018841);
}

double NNfunction_sb_sRsR::synapse0x16fe750() {
   return (neuron0x16e6560()*-0.0638019);
}

double NNfunction_sb_sRsR::synapse0x16fe790() {
   return (neuron0x16e68a0()*-0.0511642);
}

double NNfunction_sb_sRsR::synapse0x16fe7d0() {
   return (neuron0x16e6be0()*-0.0402292);
}

double NNfunction_sb_sRsR::synapse0x16fe810() {
   return (neuron0x16e6f20()*-0.0317306);
}

double NNfunction_sb_sRsR::synapse0x16fe850() {
   return (neuron0x16e7260()*0.0110836);
}

double NNfunction_sb_sRsR::synapse0x16fe890() {
   return (neuron0x16e75a0()*-0.167629);
}

double NNfunction_sb_sRsR::synapse0x16fe8d0() {
   return (neuron0x16e78e0()*-0.124041);
}

double NNfunction_sb_sRsR::synapse0x16fe910() {
   return (neuron0x16e7c20()*0.0231105);
}

double NNfunction_sb_sRsR::synapse0x16fe950() {
   return (neuron0x16e7f60()*-0.0462246);
}

double NNfunction_sb_sRsR::synapse0x16fe990() {
   return (neuron0x16e82a0()*0.0271155);
}

double NNfunction_sb_sRsR::synapse0x16fe9d0() {
   return (neuron0x16e85e0()*-0.0450082);
}

double NNfunction_sb_sRsR::synapse0x16fea10() {
   return (neuron0x16e8920()*0.0894037);
}

double NNfunction_sb_sRsR::synapse0x16fea50() {
   return (neuron0x16e8c60()*0.0287975);
}

double NNfunction_sb_sRsR::synapse0x16fea90() {
   return (neuron0x16e8fa0()*-0.137925);
}

double NNfunction_sb_sRsR::synapse0x16fead0() {
   return (neuron0x16e92e0()*-0.0182113);
}

double NNfunction_sb_sRsR::synapse0x16feb10() {
   return (neuron0x16e9620()*-0.0938846);
}

double NNfunction_sb_sRsR::synapse0x16fe5a0() {
   return (neuron0x16e9960()*-0.102099);
}

double NNfunction_sb_sRsR::synapse0x16fe5e0() {
   return (neuron0x16e9ec0()*-0.52569);
}

double NNfunction_sb_sRsR::synapse0x16fec60() {
   return (neuron0x16ea0e0()*0.158395);
}

double NNfunction_sb_sRsR::synapse0x16feca0() {
   return (neuron0x16ea420()*-0.0324591);
}

double NNfunction_sb_sRsR::synapse0x16fece0() {
   return (neuron0x16ea760()*-0.0478118);
}

double NNfunction_sb_sRsR::synapse0x16fed20() {
   return (neuron0x16eaaa0()*-0.0274614);
}

double NNfunction_sb_sRsR::synapse0x16fed60() {
   return (neuron0x16eade0()*-0.00308327);
}

double NNfunction_sb_sRsR::synapse0x16feda0() {
   return (neuron0x16eb120()*-0.00320603);
}

double NNfunction_sb_sRsR::synapse0x16ff120() {
   return (neuron0x16e6560()*-0.522166);
}

double NNfunction_sb_sRsR::synapse0x16ff160() {
   return (neuron0x16e68a0()*-0.0732718);
}

double NNfunction_sb_sRsR::synapse0x16ff1a0() {
   return (neuron0x16e6be0()*-0.266433);
}

double NNfunction_sb_sRsR::synapse0x16ff1e0() {
   return (neuron0x16e6f20()*0.763957);
}

double NNfunction_sb_sRsR::synapse0x16ff220() {
   return (neuron0x16e7260()*-0.403437);
}

double NNfunction_sb_sRsR::synapse0x16ff260() {
   return (neuron0x16e75a0()*-0.095135);
}

double NNfunction_sb_sRsR::synapse0x16ff2a0() {
   return (neuron0x16e78e0()*0.198298);
}

double NNfunction_sb_sRsR::synapse0x16ff2e0() {
   return (neuron0x16e7c20()*-0.139127);
}

double NNfunction_sb_sRsR::synapse0x16ff320() {
   return (neuron0x16e7f60()*0.132682);
}

double NNfunction_sb_sRsR::synapse0x16ff360() {
   return (neuron0x16e82a0()*0.00906619);
}

double NNfunction_sb_sRsR::synapse0x16ff3a0() {
   return (neuron0x16e85e0()*0.0332649);
}

double NNfunction_sb_sRsR::synapse0x16ff3e0() {
   return (neuron0x16e8920()*0.65761);
}

double NNfunction_sb_sRsR::synapse0x16ff420() {
   return (neuron0x16e8c60()*0.759058);
}

double NNfunction_sb_sRsR::synapse0x16ff460() {
   return (neuron0x16e8fa0()*-0.126643);
}

double NNfunction_sb_sRsR::synapse0x16ff4a0() {
   return (neuron0x16e92e0()*-0.0869805);
}

double NNfunction_sb_sRsR::synapse0x16ff4e0() {
   return (neuron0x16e9620()*0.127611);
}

double NNfunction_sb_sRsR::synapse0x16fef70() {
   return (neuron0x16e9960()*-0.706302);
}

double NNfunction_sb_sRsR::synapse0x16fefb0() {
   return (neuron0x16e9ec0()*-0.0497255);
}

double NNfunction_sb_sRsR::synapse0x16ff630() {
   return (neuron0x16ea0e0()*-0.103088);
}

double NNfunction_sb_sRsR::synapse0x16ff670() {
   return (neuron0x16ea420()*0.30313);
}

double NNfunction_sb_sRsR::synapse0x16ff6b0() {
   return (neuron0x16ea760()*0.42496);
}

double NNfunction_sb_sRsR::synapse0x16ff6f0() {
   return (neuron0x16eaaa0()*-0.249125);
}

double NNfunction_sb_sRsR::synapse0x16ff730() {
   return (neuron0x16eade0()*-0.0611845);
}

double NNfunction_sb_sRsR::synapse0x16ff770() {
   return (neuron0x16eb120()*-0.238338);
}

double NNfunction_sb_sRsR::synapse0x16ffaf0() {
   return (neuron0x16e6560()*0.00576512);
}

double NNfunction_sb_sRsR::synapse0x16ffb30() {
   return (neuron0x16e68a0()*-0.299571);
}

double NNfunction_sb_sRsR::synapse0x16ffb70() {
   return (neuron0x16e6be0()*0.00171858);
}

double NNfunction_sb_sRsR::synapse0x16ffbb0() {
   return (neuron0x16e6f20()*0.920643);
}

double NNfunction_sb_sRsR::synapse0x16ffbf0() {
   return (neuron0x16e7260()*-0.0928318);
}

double NNfunction_sb_sRsR::synapse0x16ffc30() {
   return (neuron0x16e75a0()*0.0025052);
}

double NNfunction_sb_sRsR::synapse0x16ffc70() {
   return (neuron0x16e78e0()*0.182906);
}

double NNfunction_sb_sRsR::synapse0x16ffcb0() {
   return (neuron0x16e7c20()*-0.0799256);
}

double NNfunction_sb_sRsR::synapse0x16ffcf0() {
   return (neuron0x16e7f60()*0.0576018);
}

double NNfunction_sb_sRsR::synapse0x16ffd30() {
   return (neuron0x16e82a0()*-0.031825);
}

double NNfunction_sb_sRsR::synapse0x16ffd70() {
   return (neuron0x16e85e0()*0.0101967);
}

double NNfunction_sb_sRsR::synapse0x16ffdb0() {
   return (neuron0x16e8920()*-0.0466269);
}

double NNfunction_sb_sRsR::synapse0x16ffdf0() {
   return (neuron0x16e8c60()*0.0196746);
}

double NNfunction_sb_sRsR::synapse0x16ffe30() {
   return (neuron0x16e8fa0()*0.0493187);
}

double NNfunction_sb_sRsR::synapse0x16ffe70() {
   return (neuron0x16e92e0()*-0.291414);
}

double NNfunction_sb_sRsR::synapse0x16ffeb0() {
   return (neuron0x16e9620()*-0.138256);
}

double NNfunction_sb_sRsR::synapse0x16ff940() {
   return (neuron0x16e9960()*0.0103322);
}

double NNfunction_sb_sRsR::synapse0x16ff980() {
   return (neuron0x16e9ec0()*0.0266381);
}

double NNfunction_sb_sRsR::synapse0x1700000() {
   return (neuron0x16ea0e0()*-0.257256);
}

double NNfunction_sb_sRsR::synapse0x1700040() {
   return (neuron0x16ea420()*0.0674763);
}

double NNfunction_sb_sRsR::synapse0x1700080() {
   return (neuron0x16ea760()*-0.0222067);
}

double NNfunction_sb_sRsR::synapse0x17000c0() {
   return (neuron0x16eaaa0()*0.00683155);
}

double NNfunction_sb_sRsR::synapse0x1700100() {
   return (neuron0x16eade0()*-0.00626371);
}

double NNfunction_sb_sRsR::synapse0x1700140() {
   return (neuron0x16eb120()*0.0346014);
}

double NNfunction_sb_sRsR::synapse0x17004c0() {
   return (neuron0x16e6560()*-0.3054);
}

double NNfunction_sb_sRsR::synapse0x1700500() {
   return (neuron0x16e68a0()*0.181029);
}

double NNfunction_sb_sRsR::synapse0x1700540() {
   return (neuron0x16e6be0()*0.0732071);
}

double NNfunction_sb_sRsR::synapse0x1700580() {
   return (neuron0x16e6f20()*-1.56037);
}

double NNfunction_sb_sRsR::synapse0x17005c0() {
   return (neuron0x16e7260()*0.307128);
}

double NNfunction_sb_sRsR::synapse0x1700600() {
   return (neuron0x16e75a0()*0.218558);
}

double NNfunction_sb_sRsR::synapse0x1700640() {
   return (neuron0x16e78e0()*-0.0161582);
}

double NNfunction_sb_sRsR::synapse0x1700680() {
   return (neuron0x16e7c20()*0.389863);
}

double NNfunction_sb_sRsR::synapse0x17006c0() {
   return (neuron0x16e7f60()*0.419284);
}

double NNfunction_sb_sRsR::synapse0x1700700() {
   return (neuron0x16e82a0()*0.277029);
}

double NNfunction_sb_sRsR::synapse0x1700740() {
   return (neuron0x16e85e0()*-0.231784);
}

double NNfunction_sb_sRsR::synapse0x1700780() {
   return (neuron0x16e8920()*-0.187692);
}

double NNfunction_sb_sRsR::synapse0x17007c0() {
   return (neuron0x16e8c60()*0.30542);
}

double NNfunction_sb_sRsR::synapse0x1700800() {
   return (neuron0x16e8fa0()*0.10324);
}

double NNfunction_sb_sRsR::synapse0x1700840() {
   return (neuron0x16e92e0()*-0.258726);
}

double NNfunction_sb_sRsR::synapse0x1700880() {
   return (neuron0x16e9620()*0.0585964);
}

double NNfunction_sb_sRsR::synapse0x1700310() {
   return (neuron0x16e9960()*-0.127309);
}

double NNfunction_sb_sRsR::synapse0x1700350() {
   return (neuron0x16e9ec0()*-0.163822);
}

double NNfunction_sb_sRsR::synapse0x17009d0() {
   return (neuron0x16ea0e0()*-0.781363);
}

double NNfunction_sb_sRsR::synapse0x1700a10() {
   return (neuron0x16ea420()*0.00132747);
}

double NNfunction_sb_sRsR::synapse0x1700a50() {
   return (neuron0x16ea760()*-0.270186);
}

double NNfunction_sb_sRsR::synapse0x1700a90() {
   return (neuron0x16eaaa0()*0.119627);
}

double NNfunction_sb_sRsR::synapse0x1700ad0() {
   return (neuron0x16eade0()*-0.144184);
}

double NNfunction_sb_sRsR::synapse0x1700b10() {
   return (neuron0x16eb120()*0.176479);
}

double NNfunction_sb_sRsR::synapse0x1700e90() {
   return (neuron0x16e6560()*0.170589);
}

double NNfunction_sb_sRsR::synapse0x16f5460() {
   return (neuron0x16e68a0()*-0.00391856);
}

double NNfunction_sb_sRsR::synapse0x16f54a0() {
   return (neuron0x16e6be0()*-0.153236);
}

double NNfunction_sb_sRsR::synapse0x16f54e0() {
   return (neuron0x16e6f20()*0.779739);
}

double NNfunction_sb_sRsR::synapse0x16f5730() {
   return (neuron0x16e7260()*0.230141);
}

double NNfunction_sb_sRsR::synapse0x16f5770() {
   return (neuron0x16e75a0()*0.169304);
}

double NNfunction_sb_sRsR::synapse0x16f57b0() {
   return (neuron0x16e78e0()*0.144577);
}

double NNfunction_sb_sRsR::synapse0x16f5a00() {
   return (neuron0x16e7c20()*0.286945);
}

double NNfunction_sb_sRsR::synapse0x16f5a40() {
   return (neuron0x16e7f60()*-0.439837);
}

double NNfunction_sb_sRsR::synapse0x16f5c90() {
   return (neuron0x16e82a0()*-0.124371);
}

double NNfunction_sb_sRsR::synapse0x16f5cd0() {
   return (neuron0x16e85e0()*0.0493665);
}

double NNfunction_sb_sRsR::synapse0x16f5d10() {
   return (neuron0x16e8920()*-0.255397);
}

double NNfunction_sb_sRsR::synapse0x16f5f60() {
   return (neuron0x16e8c60()*0.54863);
}

double NNfunction_sb_sRsR::synapse0x16f5fa0() {
   return (neuron0x16e8fa0()*-0.118855);
}

double NNfunction_sb_sRsR::synapse0x16f61f0() {
   return (neuron0x16e92e0()*-0.153751);
}

double NNfunction_sb_sRsR::synapse0x16f6230() {
   return (neuron0x16e9620()*0.0662774);
}

double NNfunction_sb_sRsR::synapse0x1700ce0() {
   return (neuron0x16e9960()*-0.187304);
}

double NNfunction_sb_sRsR::synapse0x1700d20() {
   return (neuron0x16e9ec0()*-0.245189);
}

double NNfunction_sb_sRsR::synapse0x16f6380() {
   return (neuron0x16ea0e0()*1.62019);
}

double NNfunction_sb_sRsR::synapse0x16f6890() {
   return (neuron0x16ea420()*0.302186);
}

double NNfunction_sb_sRsR::synapse0x16f68d0() {
   return (neuron0x16ea760()*0.0435846);
}

double NNfunction_sb_sRsR::synapse0x16f6910() {
   return (neuron0x16eaaa0()*0.021395);
}

double NNfunction_sb_sRsR::synapse0x16f6b60() {
   return (neuron0x16eade0()*-0.0123452);
}

double NNfunction_sb_sRsR::synapse0x16f6ba0() {
   return (neuron0x16eb120()*0.131503);
}

double NNfunction_sb_sRsR::synapse0x16f6450() {
   return (neuron0x16e6560()*-0.0997693);
}

double NNfunction_sb_sRsR::synapse0x16f6490() {
   return (neuron0x16e68a0()*-0.241775);
}

double NNfunction_sb_sRsR::synapse0x16f64d0() {
   return (neuron0x16e6be0()*0.262645);
}

double NNfunction_sb_sRsR::synapse0x16f6510() {
   return (neuron0x16e6f20()*0.025307);
}

double NNfunction_sb_sRsR::synapse0x16f6e90() {
   return (neuron0x16e7260()*0.230941);
}

double NNfunction_sb_sRsR::synapse0x17031e0() {
   return (neuron0x16e75a0()*-1.09069);
}

double NNfunction_sb_sRsR::synapse0x1703220() {
   return (neuron0x16e78e0()*0.113349);
}

double NNfunction_sb_sRsR::synapse0x1703260() {
   return (neuron0x16e7c20()*0.443837);
}

double NNfunction_sb_sRsR::synapse0x17032a0() {
   return (neuron0x16e7f60()*0.246563);
}

double NNfunction_sb_sRsR::synapse0x17032e0() {
   return (neuron0x16e82a0()*0.0632763);
}

double NNfunction_sb_sRsR::synapse0x1703320() {
   return (neuron0x16e85e0()*-0.0803943);
}

double NNfunction_sb_sRsR::synapse0x1703360() {
   return (neuron0x16e8920()*0.378035);
}

double NNfunction_sb_sRsR::synapse0x17033a0() {
   return (neuron0x16e8c60()*0.0874696);
}

double NNfunction_sb_sRsR::synapse0x17033e0() {
   return (neuron0x16e8fa0()*0.144902);
}

double NNfunction_sb_sRsR::synapse0x1703420() {
   return (neuron0x16e92e0()*0.441363);
}

double NNfunction_sb_sRsR::synapse0x1703460() {
   return (neuron0x16e9620()*0.112122);
}

double NNfunction_sb_sRsR::synapse0x16f6d70() {
   return (neuron0x16e9960()*0.0616036);
}

double NNfunction_sb_sRsR::synapse0x16f6db0() {
   return (neuron0x16e9ec0()*-0.0954474);
}

double NNfunction_sb_sRsR::synapse0x17035b0() {
   return (neuron0x16ea0e0()*0.39538);
}

double NNfunction_sb_sRsR::synapse0x17035f0() {
   return (neuron0x16ea420()*-0.355904);
}

double NNfunction_sb_sRsR::synapse0x1703630() {
   return (neuron0x16ea760()*-0.110535);
}

double NNfunction_sb_sRsR::synapse0x1703670() {
   return (neuron0x16eaaa0()*-0.291864);
}

double NNfunction_sb_sRsR::synapse0x17036b0() {
   return (neuron0x16eade0()*-0.17662);
}

double NNfunction_sb_sRsR::synapse0x17036f0() {
   return (neuron0x16eb120()*-0.203446);
}

double NNfunction_sb_sRsR::synapse0x1703a70() {
   return (neuron0x16e6560()*0.0947495);
}

double NNfunction_sb_sRsR::synapse0x1703ab0() {
   return (neuron0x16e68a0()*0.630561);
}

double NNfunction_sb_sRsR::synapse0x1703af0() {
   return (neuron0x16e6be0()*0.284685);
}

double NNfunction_sb_sRsR::synapse0x1703b30() {
   return (neuron0x16e6f20()*0.509244);
}

double NNfunction_sb_sRsR::synapse0x1703b70() {
   return (neuron0x16e7260()*-0.194578);
}

double NNfunction_sb_sRsR::synapse0x1703bb0() {
   return (neuron0x16e75a0()*-0.413574);
}

double NNfunction_sb_sRsR::synapse0x1703bf0() {
   return (neuron0x16e78e0()*0.0976242);
}

double NNfunction_sb_sRsR::synapse0x1703c30() {
   return (neuron0x16e7c20()*0.454412);
}

double NNfunction_sb_sRsR::synapse0x1703c70() {
   return (neuron0x16e7f60()*-0.0742638);
}

double NNfunction_sb_sRsR::synapse0x1703cb0() {
   return (neuron0x16e82a0()*0.719641);
}

double NNfunction_sb_sRsR::synapse0x1703cf0() {
   return (neuron0x16e85e0()*0.445227);
}

double NNfunction_sb_sRsR::synapse0x1703d30() {
   return (neuron0x16e8920()*-0.121487);
}

double NNfunction_sb_sRsR::synapse0x1703d70() {
   return (neuron0x16e8c60()*0.00963899);
}

double NNfunction_sb_sRsR::synapse0x1703db0() {
   return (neuron0x16e8fa0()*-0.154664);
}

double NNfunction_sb_sRsR::synapse0x1703df0() {
   return (neuron0x16e92e0()*-0.130842);
}

double NNfunction_sb_sRsR::synapse0x1703e30() {
   return (neuron0x16e9620()*-0.0272475);
}

double NNfunction_sb_sRsR::synapse0x17038c0() {
   return (neuron0x16e9960()*0.942415);
}

double NNfunction_sb_sRsR::synapse0x1703900() {
   return (neuron0x16e9ec0()*0.0308436);
}

double NNfunction_sb_sRsR::synapse0x1703f80() {
   return (neuron0x16ea0e0()*0.745961);
}

double NNfunction_sb_sRsR::synapse0x1703fc0() {
   return (neuron0x16ea420()*-0.177856);
}

double NNfunction_sb_sRsR::synapse0x1704000() {
   return (neuron0x16ea760()*-0.0325774);
}

double NNfunction_sb_sRsR::synapse0x1704040() {
   return (neuron0x16eaaa0()*-0.0537209);
}

double NNfunction_sb_sRsR::synapse0x1704080() {
   return (neuron0x16eade0()*0.75279);
}

double NNfunction_sb_sRsR::synapse0x17040c0() {
   return (neuron0x16eb120()*0.459276);
}

double NNfunction_sb_sRsR::synapse0x1704440() {
   return (neuron0x16e6560()*-0.145927);
}

double NNfunction_sb_sRsR::synapse0x1704480() {
   return (neuron0x16e68a0()*-0.817318);
}

double NNfunction_sb_sRsR::synapse0x17044c0() {
   return (neuron0x16e6be0()*-0.359681);
}

double NNfunction_sb_sRsR::synapse0x1704500() {
   return (neuron0x16e6f20()*-0.151104);
}

double NNfunction_sb_sRsR::synapse0x1704540() {
   return (neuron0x16e7260()*-0.0284005);
}

double NNfunction_sb_sRsR::synapse0x1704580() {
   return (neuron0x16e75a0()*-0.246659);
}

double NNfunction_sb_sRsR::synapse0x17045c0() {
   return (neuron0x16e78e0()*0.446743);
}

double NNfunction_sb_sRsR::synapse0x1704600() {
   return (neuron0x16e7c20()*-0.455657);
}

double NNfunction_sb_sRsR::synapse0x1704640() {
   return (neuron0x16e7f60()*-0.246333);
}

double NNfunction_sb_sRsR::synapse0x1704680() {
   return (neuron0x16e82a0()*-0.0196542);
}

double NNfunction_sb_sRsR::synapse0x17046c0() {
   return (neuron0x16e85e0()*-0.191969);
}

double NNfunction_sb_sRsR::synapse0x1704700() {
   return (neuron0x16e8920()*0.118444);
}

double NNfunction_sb_sRsR::synapse0x1704740() {
   return (neuron0x16e8c60()*0.176785);
}

double NNfunction_sb_sRsR::synapse0x1704780() {
   return (neuron0x16e8fa0()*-0.238165);
}

double NNfunction_sb_sRsR::synapse0x17047c0() {
   return (neuron0x16e92e0()*0.320236);
}

double NNfunction_sb_sRsR::synapse0x1704800() {
   return (neuron0x16e9620()*0.0167766);
}

double NNfunction_sb_sRsR::synapse0x1704290() {
   return (neuron0x16e9960()*-0.393043);
}

double NNfunction_sb_sRsR::synapse0x17042d0() {
   return (neuron0x16e9ec0()*-0.229652);
}

double NNfunction_sb_sRsR::synapse0x1704950() {
   return (neuron0x16ea0e0()*0.653616);
}

double NNfunction_sb_sRsR::synapse0x1704990() {
   return (neuron0x16ea420()*-0.207738);
}

double NNfunction_sb_sRsR::synapse0x17049d0() {
   return (neuron0x16ea760()*-0.166974);
}

double NNfunction_sb_sRsR::synapse0x1704a10() {
   return (neuron0x16eaaa0()*0.183223);
}

double NNfunction_sb_sRsR::synapse0x1704a50() {
   return (neuron0x16eade0()*0.174251);
}

double NNfunction_sb_sRsR::synapse0x1704a90() {
   return (neuron0x16eb120()*0.0642204);
}

double NNfunction_sb_sRsR::synapse0x1704e10() {
   return (neuron0x16e6560()*-0.0601808);
}

double NNfunction_sb_sRsR::synapse0x1704e50() {
   return (neuron0x16e68a0()*0.167659);
}

double NNfunction_sb_sRsR::synapse0x1704e90() {
   return (neuron0x16e6be0()*-0.0268635);
}

double NNfunction_sb_sRsR::synapse0x1704ed0() {
   return (neuron0x16e6f20()*0.241595);
}

double NNfunction_sb_sRsR::synapse0x1704f10() {
   return (neuron0x16e7260()*0.0440276);
}

double NNfunction_sb_sRsR::synapse0x1704f50() {
   return (neuron0x16e75a0()*-0.0121978);
}

double NNfunction_sb_sRsR::synapse0x1704f90() {
   return (neuron0x16e78e0()*0.108663);
}

double NNfunction_sb_sRsR::synapse0x1704fd0() {
   return (neuron0x16e7c20()*0.088853);
}

double NNfunction_sb_sRsR::synapse0x1705010() {
   return (neuron0x16e7f60()*-0.0604209);
}

double NNfunction_sb_sRsR::synapse0x1705050() {
   return (neuron0x16e82a0()*-0.055376);
}

double NNfunction_sb_sRsR::synapse0x1705090() {
   return (neuron0x16e85e0()*0.0201806);
}

double NNfunction_sb_sRsR::synapse0x17050d0() {
   return (neuron0x16e8920()*0.0516131);
}

double NNfunction_sb_sRsR::synapse0x1705110() {
   return (neuron0x16e8c60()*-0.125368);
}

double NNfunction_sb_sRsR::synapse0x1705150() {
   return (neuron0x16e8fa0()*-0.0240501);
}

double NNfunction_sb_sRsR::synapse0x1705190() {
   return (neuron0x16e92e0()*-0.789638);
}

double NNfunction_sb_sRsR::synapse0x17051d0() {
   return (neuron0x16e9620()*0.0853157);
}

double NNfunction_sb_sRsR::synapse0x1704c60() {
   return (neuron0x16e9960()*-0.0775843);
}

double NNfunction_sb_sRsR::synapse0x1704ca0() {
   return (neuron0x16e9ec0()*-0.114397);
}

double NNfunction_sb_sRsR::synapse0x1705320() {
   return (neuron0x16ea0e0()*0.17854);
}

double NNfunction_sb_sRsR::synapse0x1705360() {
   return (neuron0x16ea420()*-0.0992836);
}

double NNfunction_sb_sRsR::synapse0x17053a0() {
   return (neuron0x16ea760()*-0.0919199);
}

double NNfunction_sb_sRsR::synapse0x17053e0() {
   return (neuron0x16eaaa0()*0.00723545);
}

double NNfunction_sb_sRsR::synapse0x1705420() {
   return (neuron0x16eade0()*0.014173);
}

double NNfunction_sb_sRsR::synapse0x1705460() {
   return (neuron0x16eb120()*0.00158152);
}

double NNfunction_sb_sRsR::synapse0x17057e0() {
   return (neuron0x16e6560()*-0.0221717);
}

double NNfunction_sb_sRsR::synapse0x1705820() {
   return (neuron0x16e68a0()*-0.00970398);
}

double NNfunction_sb_sRsR::synapse0x1705860() {
   return (neuron0x16e6be0()*0.0138492);
}

double NNfunction_sb_sRsR::synapse0x17058a0() {
   return (neuron0x16e6f20()*-4.58624);
}

double NNfunction_sb_sRsR::synapse0x17058e0() {
   return (neuron0x16e7260()*-0.0562063);
}

double NNfunction_sb_sRsR::synapse0x1705920() {
   return (neuron0x16e75a0()*-0.0624052);
}

double NNfunction_sb_sRsR::synapse0x1705960() {
   return (neuron0x16e78e0()*-0.0151197);
}

double NNfunction_sb_sRsR::synapse0x17059a0() {
   return (neuron0x16e7c20()*-0.0263094);
}

double NNfunction_sb_sRsR::synapse0x17059e0() {
   return (neuron0x16e7f60()*0.0117863);
}

double NNfunction_sb_sRsR::synapse0x1705a20() {
   return (neuron0x16e82a0()*0.024934);
}

double NNfunction_sb_sRsR::synapse0x1705a60() {
   return (neuron0x16e85e0()*0.00478183);
}

double NNfunction_sb_sRsR::synapse0x1705aa0() {
   return (neuron0x16e8920()*-0.0466952);
}

double NNfunction_sb_sRsR::synapse0x1705ae0() {
   return (neuron0x16e8c60()*-0.0869914);
}

double NNfunction_sb_sRsR::synapse0x1705b20() {
   return (neuron0x16e8fa0()*0.0356846);
}

double NNfunction_sb_sRsR::synapse0x1705b60() {
   return (neuron0x16e92e0()*-0.0641858);
}

double NNfunction_sb_sRsR::synapse0x1705ba0() {
   return (neuron0x16e9620()*-0.0842821);
}

double NNfunction_sb_sRsR::synapse0x1705630() {
   return (neuron0x16e9960()*0.0273599);
}

double NNfunction_sb_sRsR::synapse0x1705670() {
   return (neuron0x16e9ec0()*-0.020008);
}

double NNfunction_sb_sRsR::synapse0x1705cf0() {
   return (neuron0x16ea0e0()*-0.155637);
}

double NNfunction_sb_sRsR::synapse0x1705d30() {
   return (neuron0x16ea420()*-0.0226761);
}

double NNfunction_sb_sRsR::synapse0x1705d70() {
   return (neuron0x16ea760()*-0.0160591);
}

double NNfunction_sb_sRsR::synapse0x1705db0() {
   return (neuron0x16eaaa0()*-0.0167741);
}

double NNfunction_sb_sRsR::synapse0x1705df0() {
   return (neuron0x16eade0()*-0.00757655);
}

double NNfunction_sb_sRsR::synapse0x1705e30() {
   return (neuron0x16eb120()*-0.0188133);
}

double NNfunction_sb_sRsR::synapse0x17061b0() {
   return (neuron0x16e6560()*-0.00799047);
}

double NNfunction_sb_sRsR::synapse0x17061f0() {
   return (neuron0x16e68a0()*0.0730905);
}

double NNfunction_sb_sRsR::synapse0x1706230() {
   return (neuron0x16e6be0()*-0.259863);
}

double NNfunction_sb_sRsR::synapse0x1706270() {
   return (neuron0x16e6f20()*1.12617);
}

double NNfunction_sb_sRsR::synapse0x17062b0() {
   return (neuron0x16e7260()*0.0312455);
}

double NNfunction_sb_sRsR::synapse0x17062f0() {
   return (neuron0x16e75a0()*-0.256556);
}

double NNfunction_sb_sRsR::synapse0x1706330() {
   return (neuron0x16e78e0()*-0.310314);
}

double NNfunction_sb_sRsR::synapse0x1706370() {
   return (neuron0x16e7c20()*0.04702);
}

double NNfunction_sb_sRsR::synapse0x17063b0() {
   return (neuron0x16e7f60()*0.171978);
}

double NNfunction_sb_sRsR::synapse0x17063f0() {
   return (neuron0x16e82a0()*0.459499);
}

double NNfunction_sb_sRsR::synapse0x1706430() {
   return (neuron0x16e85e0()*0.171861);
}

double NNfunction_sb_sRsR::synapse0x1706470() {
   return (neuron0x16e8920()*0.531364);
}

double NNfunction_sb_sRsR::synapse0x17064b0() {
   return (neuron0x16e8c60()*0.220744);
}

double NNfunction_sb_sRsR::synapse0x17064f0() {
   return (neuron0x16e8fa0()*0.19453);
}

double NNfunction_sb_sRsR::synapse0x1706530() {
   return (neuron0x16e92e0()*0.426456);
}

double NNfunction_sb_sRsR::synapse0x1706570() {
   return (neuron0x16e9620()*-0.282311);
}

double NNfunction_sb_sRsR::synapse0x1706000() {
   return (neuron0x16e9960()*-0.396822);
}

double NNfunction_sb_sRsR::synapse0x1706040() {
   return (neuron0x16e9ec0()*-1.25695);
}

double NNfunction_sb_sRsR::synapse0x17066c0() {
   return (neuron0x16ea0e0()*0.339408);
}

double NNfunction_sb_sRsR::synapse0x1706700() {
   return (neuron0x16ea420()*-0.236778);
}

double NNfunction_sb_sRsR::synapse0x1706740() {
   return (neuron0x16ea760()*-0.239732);
}

double NNfunction_sb_sRsR::synapse0x1706780() {
   return (neuron0x16eaaa0()*0.0428544);
}

double NNfunction_sb_sRsR::synapse0x17067c0() {
   return (neuron0x16eade0()*-0.00113042);
}

double NNfunction_sb_sRsR::synapse0x1706800() {
   return (neuron0x16eb120()*0.0509686);
}

double NNfunction_sb_sRsR::synapse0x1706b80() {
   return (neuron0x16e6560()*0.00723343);
}

double NNfunction_sb_sRsR::synapse0x1706bc0() {
   return (neuron0x16e68a0()*-0.0296387);
}

double NNfunction_sb_sRsR::synapse0x1706c00() {
   return (neuron0x16e6be0()*-0.0632014);
}

double NNfunction_sb_sRsR::synapse0x1706c40() {
   return (neuron0x16e6f20()*8.34788);
}

double NNfunction_sb_sRsR::synapse0x1706c80() {
   return (neuron0x16e7260()*0.0146971);
}

double NNfunction_sb_sRsR::synapse0x1706cc0() {
   return (neuron0x16e75a0()*0.0350865);
}

double NNfunction_sb_sRsR::synapse0x1706d00() {
   return (neuron0x16e78e0()*-0.0101954);
}

double NNfunction_sb_sRsR::synapse0x1706d40() {
   return (neuron0x16e7c20()*-0.00701391);
}

double NNfunction_sb_sRsR::synapse0x1706d80() {
   return (neuron0x16e7f60()*-0.00315177);
}

double NNfunction_sb_sRsR::synapse0x1706dc0() {
   return (neuron0x16e82a0()*0.00223958);
}

double NNfunction_sb_sRsR::synapse0x1706e00() {
   return (neuron0x16e85e0()*-0.01924);
}

double NNfunction_sb_sRsR::synapse0x1706e40() {
   return (neuron0x16e8920()*0.0310844);
}

double NNfunction_sb_sRsR::synapse0x1706e80() {
   return (neuron0x16e8c60()*0.053346);
}

double NNfunction_sb_sRsR::synapse0x1706ec0() {
   return (neuron0x16e8fa0()*-0.0291549);
}

double NNfunction_sb_sRsR::synapse0x1706f00() {
   return (neuron0x16e92e0()*0.0269229);
}

double NNfunction_sb_sRsR::synapse0x1706f40() {
   return (neuron0x16e9620()*0.0571604);
}

double NNfunction_sb_sRsR::synapse0x17069d0() {
   return (neuron0x16e9960()*-0.0592505);
}

double NNfunction_sb_sRsR::synapse0x1706a10() {
   return (neuron0x16e9ec0()*0.0501724);
}

double NNfunction_sb_sRsR::synapse0x1707090() {
   return (neuron0x16ea0e0()*-0.332333);
}

double NNfunction_sb_sRsR::synapse0x17070d0() {
   return (neuron0x16ea420()*0.0740199);
}

double NNfunction_sb_sRsR::synapse0x1707110() {
   return (neuron0x16ea760()*0.0158217);
}

double NNfunction_sb_sRsR::synapse0x1707150() {
   return (neuron0x16eaaa0()*-0.0225999);
}

double NNfunction_sb_sRsR::synapse0x1707190() {
   return (neuron0x16eade0()*-0.0100832);
}

double NNfunction_sb_sRsR::synapse0x17071d0() {
   return (neuron0x16eb120()*-0.00273078);
}

double NNfunction_sb_sRsR::synapse0x1707550() {
   return (neuron0x16e6560()*0.054078);
}

double NNfunction_sb_sRsR::synapse0x1707590() {
   return (neuron0x16e68a0()*0.0161774);
}

double NNfunction_sb_sRsR::synapse0x17075d0() {
   return (neuron0x16e6be0()*0.0157238);
}

double NNfunction_sb_sRsR::synapse0x1707610() {
   return (neuron0x16e6f20()*-0.228398);
}

double NNfunction_sb_sRsR::synapse0x1707650() {
   return (neuron0x16e7260()*-0.000633383);
}

double NNfunction_sb_sRsR::synapse0x1707690() {
   return (neuron0x16e75a0()*0.0477708);
}

double NNfunction_sb_sRsR::synapse0x17076d0() {
   return (neuron0x16e78e0()*-0.0465061);
}

double NNfunction_sb_sRsR::synapse0x1707710() {
   return (neuron0x16e7c20()*0.0247156);
}

double NNfunction_sb_sRsR::synapse0x1707750() {
   return (neuron0x16e7f60()*0.0324187);
}

double NNfunction_sb_sRsR::synapse0x1707790() {
   return (neuron0x16e82a0()*-0.546733);
}

double NNfunction_sb_sRsR::synapse0x17077d0() {
   return (neuron0x16e85e0()*-0.106053);
}

double NNfunction_sb_sRsR::synapse0x1707810() {
   return (neuron0x16e8920()*-0.161534);
}

double NNfunction_sb_sRsR::synapse0x1707850() {
   return (neuron0x16e8c60()*-0.0868999);
}

double NNfunction_sb_sRsR::synapse0x1707890() {
   return (neuron0x16e8fa0()*-0.220017);
}

double NNfunction_sb_sRsR::synapse0x17078d0() {
   return (neuron0x16e92e0()*-0.0673548);
}

double NNfunction_sb_sRsR::synapse0x1707910() {
   return (neuron0x16e9620()*0.0401196);
}

double NNfunction_sb_sRsR::synapse0x17073a0() {
   return (neuron0x16e9960()*0.0144072);
}

double NNfunction_sb_sRsR::synapse0x17073e0() {
   return (neuron0x16e9ec0()*-0.196793);
}

double NNfunction_sb_sRsR::synapse0x1707a60() {
   return (neuron0x16ea0e0()*-1.38393);
}

double NNfunction_sb_sRsR::synapse0x1707aa0() {
   return (neuron0x16ea420()*-0.0829017);
}

double NNfunction_sb_sRsR::synapse0x1707ae0() {
   return (neuron0x16ea760()*0.013854);
}

double NNfunction_sb_sRsR::synapse0x1707b20() {
   return (neuron0x16eaaa0()*-0.00542339);
}

double NNfunction_sb_sRsR::synapse0x1707b60() {
   return (neuron0x16eade0()*0.0193088);
}

double NNfunction_sb_sRsR::synapse0x1707ba0() {
   return (neuron0x16eb120()*0.00502615);
}

double NNfunction_sb_sRsR::synapse0x16f0650() {
   return (neuron0x16e6560()*-0.0452335);
}

double NNfunction_sb_sRsR::synapse0x16f0690() {
   return (neuron0x16e68a0()*0.0222548);
}

double NNfunction_sb_sRsR::synapse0x16f06d0() {
   return (neuron0x16e6be0()*0.0337505);
}

double NNfunction_sb_sRsR::synapse0x16f0710() {
   return (neuron0x16e6f20()*0.155923);
}

double NNfunction_sb_sRsR::synapse0x16f0750() {
   return (neuron0x16e7260()*-0.0125499);
}

double NNfunction_sb_sRsR::synapse0x16f0790() {
   return (neuron0x16e75a0()*-0.0648231);
}

double NNfunction_sb_sRsR::synapse0x16f07d0() {
   return (neuron0x16e78e0()*0.0180671);
}

double NNfunction_sb_sRsR::synapse0x16f0810() {
   return (neuron0x16e7c20()*0.0517638);
}

double NNfunction_sb_sRsR::synapse0x1708330() {
   return (neuron0x16e7f60()*0.412312);
}

double NNfunction_sb_sRsR::synapse0x1708370() {
   return (neuron0x16e82a0()*-0.862591);
}

double NNfunction_sb_sRsR::synapse0x17083b0() {
   return (neuron0x16e85e0()*0.660404);
}

double NNfunction_sb_sRsR::synapse0x17083f0() {
   return (neuron0x16e8920()*0.138309);
}

double NNfunction_sb_sRsR::synapse0x1708430() {
   return (neuron0x16e8c60()*-0.0239864);
}

double NNfunction_sb_sRsR::synapse0x1708470() {
   return (neuron0x16e8fa0()*0.231535);
}

double NNfunction_sb_sRsR::synapse0x17084b0() {
   return (neuron0x16e92e0()*-0.168694);
}

double NNfunction_sb_sRsR::synapse0x17084f0() {
   return (neuron0x16e9620()*-0.118754);
}

double NNfunction_sb_sRsR::synapse0x1707d70() {
   return (neuron0x16e9960()*0.0747234);
}

double NNfunction_sb_sRsR::synapse0x1707db0() {
   return (neuron0x16e9ec0()*0.197611);
}

double NNfunction_sb_sRsR::synapse0x1708640() {
   return (neuron0x16ea0e0()*1.05907);
}

double NNfunction_sb_sRsR::synapse0x1708680() {
   return (neuron0x16ea420()*-0.108356);
}

double NNfunction_sb_sRsR::synapse0x17086c0() {
   return (neuron0x16ea760()*-0.00583623);
}

double NNfunction_sb_sRsR::synapse0x1708700() {
   return (neuron0x16eaaa0()*0.0178383);
}

double NNfunction_sb_sRsR::synapse0x1708740() {
   return (neuron0x16eade0()*0.00385154);
}

double NNfunction_sb_sRsR::synapse0x1708780() {
   return (neuron0x16eb120()*0.109031);
}

double NNfunction_sb_sRsR::synapse0x1708b00() {
   return (neuron0x16e6560()*-0.037891);
}

double NNfunction_sb_sRsR::synapse0x1708b40() {
   return (neuron0x16e68a0()*-0.269801);
}

double NNfunction_sb_sRsR::synapse0x1708b80() {
   return (neuron0x16e6be0()*0.0107665);
}

double NNfunction_sb_sRsR::synapse0x1708bc0() {
   return (neuron0x16e6f20()*0.885932);
}

double NNfunction_sb_sRsR::synapse0x1708c00() {
   return (neuron0x16e7260()*0.235134);
}

double NNfunction_sb_sRsR::synapse0x1708c40() {
   return (neuron0x16e75a0()*-0.193042);
}

double NNfunction_sb_sRsR::synapse0x1708c80() {
   return (neuron0x16e78e0()*0.0426774);
}

double NNfunction_sb_sRsR::synapse0x1708cc0() {
   return (neuron0x16e7c20()*0.13972);
}

double NNfunction_sb_sRsR::synapse0x1708d00() {
   return (neuron0x16e7f60()*-0.0175965);
}

double NNfunction_sb_sRsR::synapse0x1708d40() {
   return (neuron0x16e82a0()*-0.0316689);
}

double NNfunction_sb_sRsR::synapse0x1708d80() {
   return (neuron0x16e85e0()*-0.138203);
}

double NNfunction_sb_sRsR::synapse0x1708dc0() {
   return (neuron0x16e8920()*0.0268444);
}

double NNfunction_sb_sRsR::synapse0x1708e00() {
   return (neuron0x16e8c60()*0.00883371);
}

double NNfunction_sb_sRsR::synapse0x1708e40() {
   return (neuron0x16e8fa0()*-0.0514311);
}

double NNfunction_sb_sRsR::synapse0x1708e80() {
   return (neuron0x16e92e0()*-7.77989e-05);
}

double NNfunction_sb_sRsR::synapse0x1708ec0() {
   return (neuron0x16e9620()*0.0554573);
}

double NNfunction_sb_sRsR::synapse0x1708950() {
   return (neuron0x16e9960()*0.257551);
}

double NNfunction_sb_sRsR::synapse0x1708990() {
   return (neuron0x16e9ec0()*-0.0823914);
}

double NNfunction_sb_sRsR::synapse0x1709010() {
   return (neuron0x16ea0e0()*0.0841047);
}

double NNfunction_sb_sRsR::synapse0x1709050() {
   return (neuron0x16ea420()*-0.074479);
}

double NNfunction_sb_sRsR::synapse0x1709090() {
   return (neuron0x16ea760()*0.0352809);
}

double NNfunction_sb_sRsR::synapse0x17090d0() {
   return (neuron0x16eaaa0()*0.0402867);
}

double NNfunction_sb_sRsR::synapse0x1709110() {
   return (neuron0x16eade0()*0.0311802);
}

double NNfunction_sb_sRsR::synapse0x1709150() {
   return (neuron0x16eb120()*0.00480938);
}

double NNfunction_sb_sRsR::synapse0x17094d0() {
   return (neuron0x16e6560()*-0.0440504);
}

double NNfunction_sb_sRsR::synapse0x1709510() {
   return (neuron0x16e68a0()*-0.0486548);
}

double NNfunction_sb_sRsR::synapse0x1709550() {
   return (neuron0x16e6be0()*0.109898);
}

double NNfunction_sb_sRsR::synapse0x1709590() {
   return (neuron0x16e6f20()*1.17033);
}

double NNfunction_sb_sRsR::synapse0x17095d0() {
   return (neuron0x16e7260()*-0.0241025);
}

double NNfunction_sb_sRsR::synapse0x1709610() {
   return (neuron0x16e75a0()*0.189488);
}

double NNfunction_sb_sRsR::synapse0x1709650() {
   return (neuron0x16e78e0()*0.0472219);
}

double NNfunction_sb_sRsR::synapse0x1709690() {
   return (neuron0x16e7c20()*0.0175669);
}

double NNfunction_sb_sRsR::synapse0x17096d0() {
   return (neuron0x16e7f60()*-0.0899683);
}

double NNfunction_sb_sRsR::synapse0x1709710() {
   return (neuron0x16e82a0()*0.114821);
}

double NNfunction_sb_sRsR::synapse0x1709750() {
   return (neuron0x16e85e0()*-0.0238379);
}

double NNfunction_sb_sRsR::synapse0x1709790() {
   return (neuron0x16e8920()*-0.0478469);
}

double NNfunction_sb_sRsR::synapse0x17097d0() {
   return (neuron0x16e8c60()*-0.0726355);
}

double NNfunction_sb_sRsR::synapse0x1709810() {
   return (neuron0x16e8fa0()*-0.0539583);
}

double NNfunction_sb_sRsR::synapse0x1709850() {
   return (neuron0x16e92e0()*0.0620382);
}

double NNfunction_sb_sRsR::synapse0x1709890() {
   return (neuron0x16e9620()*0.00429073);
}

double NNfunction_sb_sRsR::synapse0x1709320() {
   return (neuron0x16e9960()*-0.137211);
}

double NNfunction_sb_sRsR::synapse0x1709360() {
   return (neuron0x16e9ec0()*-0.000293892);
}

double NNfunction_sb_sRsR::synapse0x16f9e90() {
   return (neuron0x16ea0e0()*1.80267);
}

double NNfunction_sb_sRsR::synapse0x16f9ed0() {
   return (neuron0x16ea420()*-0.172997);
}

double NNfunction_sb_sRsR::synapse0x16f9f10() {
   return (neuron0x16ea760()*-0.0530794);
}

double NNfunction_sb_sRsR::synapse0x16f9f50() {
   return (neuron0x16eaaa0()*0.0897958);
}

double NNfunction_sb_sRsR::synapse0x16f9f90() {
   return (neuron0x16eade0()*0.00288293);
}

double NNfunction_sb_sRsR::synapse0x16f9fd0() {
   return (neuron0x16eb120()*-0.0876615);
}

double NNfunction_sb_sRsR::synapse0x16fa350() {
   return (neuron0x16e6560()*-0.0107641);
}

double NNfunction_sb_sRsR::synapse0x16fa390() {
   return (neuron0x16e68a0()*0.0128473);
}

double NNfunction_sb_sRsR::synapse0x16fa3d0() {
   return (neuron0x16e6be0()*-0.00935173);
}

double NNfunction_sb_sRsR::synapse0x16fa410() {
   return (neuron0x16e6f20()*0.190413);
}

double NNfunction_sb_sRsR::synapse0x16fa450() {
   return (neuron0x16e7260()*-0.0127553);
}

double NNfunction_sb_sRsR::synapse0x16fa490() {
   return (neuron0x16e75a0()*-0.0126036);
}

double NNfunction_sb_sRsR::synapse0x16fa4d0() {
   return (neuron0x16e78e0()*-0.00479117);
}

double NNfunction_sb_sRsR::synapse0x16fa510() {
   return (neuron0x16e7c20()*-0.0265965);
}

double NNfunction_sb_sRsR::synapse0x16fa550() {
   return (neuron0x16e7f60()*0.0447445);
}

double NNfunction_sb_sRsR::synapse0x16fa590() {
   return (neuron0x16e82a0()*0.0491446);
}

double NNfunction_sb_sRsR::synapse0x16fa5d0() {
   return (neuron0x16e85e0()*0.0567098);
}

double NNfunction_sb_sRsR::synapse0x16fa610() {
   return (neuron0x16e8920()*-0.0809278);
}

double NNfunction_sb_sRsR::synapse0x16fa650() {
   return (neuron0x16e8c60()*0.00182644);
}

double NNfunction_sb_sRsR::synapse0x16fa690() {
   return (neuron0x16e8fa0()*-0.00858);
}

double NNfunction_sb_sRsR::synapse0x16fa6d0() {
   return (neuron0x16e92e0()*-0.0418142);
}

double NNfunction_sb_sRsR::synapse0x16fa710() {
   return (neuron0x16e9620()*-0.0412732);
}

double NNfunction_sb_sRsR::synapse0x16fa1a0() {
   return (neuron0x16e9960()*-0.0166378);
}

double NNfunction_sb_sRsR::synapse0x16fa1e0() {
   return (neuron0x16e9ec0()*0.0310967);
}

double NNfunction_sb_sRsR::synapse0x16fa860() {
   return (neuron0x16ea0e0()*-0.230871);
}

double NNfunction_sb_sRsR::synapse0x16fa8a0() {
   return (neuron0x16ea420()*-0.0509661);
}

double NNfunction_sb_sRsR::synapse0x16fa8e0() {
   return (neuron0x16ea760()*0.0133156);
}

double NNfunction_sb_sRsR::synapse0x16fa920() {
   return (neuron0x16eaaa0()*0.00950192);
}

double NNfunction_sb_sRsR::synapse0x16fa960() {
   return (neuron0x16eade0()*0.0190236);
}

double NNfunction_sb_sRsR::synapse0x16fa9a0() {
   return (neuron0x16eb120()*0.00754484);
}

double NNfunction_sb_sRsR::synapse0x16fad20() {
   return (neuron0x16e6560()*-0.257089);
}

double NNfunction_sb_sRsR::synapse0x16fad60() {
   return (neuron0x16e68a0()*-0.564897);
}

double NNfunction_sb_sRsR::synapse0x16fada0() {
   return (neuron0x16e6be0()*-0.215661);
}

double NNfunction_sb_sRsR::synapse0x16fade0() {
   return (neuron0x16e6f20()*0.314817);
}

double NNfunction_sb_sRsR::synapse0x16fae20() {
   return (neuron0x16e7260()*0.349648);
}

double NNfunction_sb_sRsR::synapse0x16fae60() {
   return (neuron0x16e75a0()*-0.204546);
}

double NNfunction_sb_sRsR::synapse0x16faea0() {
   return (neuron0x16e78e0()*0.248094);
}

double NNfunction_sb_sRsR::synapse0x16faee0() {
   return (neuron0x16e7c20()*-0.117394);
}

double NNfunction_sb_sRsR::synapse0x16faf20() {
   return (neuron0x16e7f60()*-0.363804);
}

double NNfunction_sb_sRsR::synapse0x16faf60() {
   return (neuron0x16e82a0()*-0.292855);
}

double NNfunction_sb_sRsR::synapse0x16fafa0() {
   return (neuron0x16e85e0()*-0.637591);
}

double NNfunction_sb_sRsR::synapse0x16fafe0() {
   return (neuron0x16e8920()*-0.117789);
}

double NNfunction_sb_sRsR::synapse0x16fb020() {
   return (neuron0x16e8c60()*-0.0215979);
}

double NNfunction_sb_sRsR::synapse0x16fb060() {
   return (neuron0x16e8fa0()*-0.414851);
}

double NNfunction_sb_sRsR::synapse0x16fb0a0() {
   return (neuron0x16e92e0()*0.141673);
}

double NNfunction_sb_sRsR::synapse0x16fb0e0() {
   return (neuron0x16e9620()*-0.1545);
}

double NNfunction_sb_sRsR::synapse0x16fab70() {
   return (neuron0x16e9960()*-0.0304233);
}

double NNfunction_sb_sRsR::synapse0x16fabb0() {
   return (neuron0x16e9ec0()*0.868982);
}

double NNfunction_sb_sRsR::synapse0x16fb230() {
   return (neuron0x16ea0e0()*-0.114291);
}

double NNfunction_sb_sRsR::synapse0x16fb270() {
   return (neuron0x16ea420()*-0.453533);
}

double NNfunction_sb_sRsR::synapse0x16fb2b0() {
   return (neuron0x16ea760()*0.124122);
}

double NNfunction_sb_sRsR::synapse0x16fb2f0() {
   return (neuron0x16eaaa0()*-0.151212);
}

double NNfunction_sb_sRsR::synapse0x16fb330() {
   return (neuron0x16eade0()*-0.302122);
}

double NNfunction_sb_sRsR::synapse0x16fb370() {
   return (neuron0x16eb120()*0.0686198);
}

double NNfunction_sb_sRsR::synapse0x16fb6f0() {
   return (neuron0x16e6560()*0.353766);
}

double NNfunction_sb_sRsR::synapse0x16fb730() {
   return (neuron0x16e68a0()*-0.7624);
}

double NNfunction_sb_sRsR::synapse0x16fb770() {
   return (neuron0x16e6be0()*-0.174865);
}

double NNfunction_sb_sRsR::synapse0x16fb7b0() {
   return (neuron0x16e6f20()*1.08472);
}

double NNfunction_sb_sRsR::synapse0x16fb7f0() {
   return (neuron0x16e7260()*-0.401529);
}

double NNfunction_sb_sRsR::synapse0x16fb830() {
   return (neuron0x16e75a0()*-0.547172);
}

double NNfunction_sb_sRsR::synapse0x16fb870() {
   return (neuron0x16e78e0()*-0.300811);
}

double NNfunction_sb_sRsR::synapse0x16fb8b0() {
   return (neuron0x16e7c20()*0.224443);
}

double NNfunction_sb_sRsR::synapse0x16fb8f0() {
   return (neuron0x16e7f60()*0.265389);
}

double NNfunction_sb_sRsR::synapse0x16fb930() {
   return (neuron0x16e82a0()*-0.180204);
}

double NNfunction_sb_sRsR::synapse0x16fb970() {
   return (neuron0x16e85e0()*0.209882);
}

double NNfunction_sb_sRsR::synapse0x16fb9b0() {
   return (neuron0x16e8920()*-0.320606);
}

double NNfunction_sb_sRsR::synapse0x16fb9f0() {
   return (neuron0x16e8c60()*-0.0546562);
}

double NNfunction_sb_sRsR::synapse0x16fba30() {
   return (neuron0x16e8fa0()*0.0798607);
}

double NNfunction_sb_sRsR::synapse0x16fba70() {
   return (neuron0x16e92e0()*0.170326);
}

double NNfunction_sb_sRsR::synapse0x16fbab0() {
   return (neuron0x16e9620()*-0.306641);
}

double NNfunction_sb_sRsR::synapse0x16fb540() {
   return (neuron0x16e9960()*0.40038);
}

double NNfunction_sb_sRsR::synapse0x16fb580() {
   return (neuron0x16e9ec0()*-0.186332);
}

double NNfunction_sb_sRsR::synapse0x16fbc00() {
   return (neuron0x16ea0e0()*0.202799);
}

double NNfunction_sb_sRsR::synapse0x16fbc40() {
   return (neuron0x16ea420()*-0.669318);
}

double NNfunction_sb_sRsR::synapse0x16fbc80() {
   return (neuron0x16ea760()*0.400855);
}

double NNfunction_sb_sRsR::synapse0x16fbcc0() {
   return (neuron0x16eaaa0()*0.114558);
}

double NNfunction_sb_sRsR::synapse0x16fbd00() {
   return (neuron0x16eade0()*-0.703815);
}

double NNfunction_sb_sRsR::synapse0x16fbd40() {
   return (neuron0x16eb120()*0.0627077);
}

double NNfunction_sb_sRsR::synapse0x170dc10() {
   return (neuron0x16e6560()*-0.161867);
}

double NNfunction_sb_sRsR::synapse0x170dc50() {
   return (neuron0x16e68a0()*-0.202097);
}

double NNfunction_sb_sRsR::synapse0x170dc90() {
   return (neuron0x16e6be0()*-0.181187);
}

double NNfunction_sb_sRsR::synapse0x170dcd0() {
   return (neuron0x16e6f20()*0.139139);
}

double NNfunction_sb_sRsR::synapse0x170dd10() {
   return (neuron0x16e7260()*-0.0267663);
}

double NNfunction_sb_sRsR::synapse0x170dd50() {
   return (neuron0x16e75a0()*0.80017);
}

double NNfunction_sb_sRsR::synapse0x170dd90() {
   return (neuron0x16e78e0()*-0.178201);
}

double NNfunction_sb_sRsR::synapse0x170ddd0() {
   return (neuron0x16e7c20()*0.349347);
}

double NNfunction_sb_sRsR::synapse0x170de10() {
   return (neuron0x16e7f60()*0.118498);
}

double NNfunction_sb_sRsR::synapse0x170de50() {
   return (neuron0x16e82a0()*0.0670429);
}

double NNfunction_sb_sRsR::synapse0x170de90() {
   return (neuron0x16e85e0()*-0.0567555);
}

double NNfunction_sb_sRsR::synapse0x170ded0() {
   return (neuron0x16e8920()*0.433201);
}

double NNfunction_sb_sRsR::synapse0x170df10() {
   return (neuron0x16e8c60()*0.246373);
}

double NNfunction_sb_sRsR::synapse0x170df50() {
   return (neuron0x16e8fa0()*-0.0805423);
}

double NNfunction_sb_sRsR::synapse0x170df90() {
   return (neuron0x16e92e0()*0.754347);
}

double NNfunction_sb_sRsR::synapse0x170dfd0() {
   return (neuron0x16e9620()*0.475357);
}

double NNfunction_sb_sRsR::synapse0x16fbd80() {
   return (neuron0x16e9960()*-0.344495);
}

double NNfunction_sb_sRsR::synapse0x16fbdc0() {
   return (neuron0x16e9ec0()*-0.0117405);
}

double NNfunction_sb_sRsR::synapse0x170e120() {
   return (neuron0x16ea0e0()*-0.456334);
}

double NNfunction_sb_sRsR::synapse0x170e160() {
   return (neuron0x16ea420()*0.249776);
}

double NNfunction_sb_sRsR::synapse0x170e1a0() {
   return (neuron0x16ea760()*-0.197473);
}

double NNfunction_sb_sRsR::synapse0x170e1e0() {
   return (neuron0x16eaaa0()*-0.0575924);
}

double NNfunction_sb_sRsR::synapse0x170e220() {
   return (neuron0x16eade0()*0.0724462);
}

double NNfunction_sb_sRsR::synapse0x170e260() {
   return (neuron0x16eb120()*0.152723);
}

double NNfunction_sb_sRsR::synapse0x170e5e0() {
   return (neuron0x16e6560()*-0.0447101);
}

double NNfunction_sb_sRsR::synapse0x170e620() {
   return (neuron0x16e68a0()*-0.00940225);
}

double NNfunction_sb_sRsR::synapse0x170e660() {
   return (neuron0x16e6be0()*0.010303);
}

double NNfunction_sb_sRsR::synapse0x170e6a0() {
   return (neuron0x16e6f20()*-0.0551848);
}

double NNfunction_sb_sRsR::synapse0x170e6e0() {
   return (neuron0x16e7260()*0.0049604);
}

double NNfunction_sb_sRsR::synapse0x170e720() {
   return (neuron0x16e75a0()*0.0750298);
}

double NNfunction_sb_sRsR::synapse0x170e760() {
   return (neuron0x16e78e0()*0.0225531);
}

double NNfunction_sb_sRsR::synapse0x170e7a0() {
   return (neuron0x16e7c20()*-0.0240536);
}

double NNfunction_sb_sRsR::synapse0x170e7e0() {
   return (neuron0x16e7f60()*-0.0265066);
}

double NNfunction_sb_sRsR::synapse0x170e820() {
   return (neuron0x16e82a0()*-0.0266738);
}

double NNfunction_sb_sRsR::synapse0x170e860() {
   return (neuron0x16e85e0()*-0.0126705);
}

double NNfunction_sb_sRsR::synapse0x170e8a0() {
   return (neuron0x16e8920()*-0.180038);
}

double NNfunction_sb_sRsR::synapse0x170e8e0() {
   return (neuron0x16e8c60()*0.480975);
}

double NNfunction_sb_sRsR::synapse0x170e920() {
   return (neuron0x16e8fa0()*0.180774);
}

double NNfunction_sb_sRsR::synapse0x170e960() {
   return (neuron0x16e92e0()*0.0533843);
}

double NNfunction_sb_sRsR::synapse0x170e9a0() {
   return (neuron0x16e9620()*0.0967255);
}

double NNfunction_sb_sRsR::synapse0x170e430() {
   return (neuron0x16e9960()*0.180448);
}

double NNfunction_sb_sRsR::synapse0x170e470() {
   return (neuron0x16e9ec0()*0.0175265);
}

double NNfunction_sb_sRsR::synapse0x170eaf0() {
   return (neuron0x16ea0e0()*-0.0646135);
}

double NNfunction_sb_sRsR::synapse0x170eb30() {
   return (neuron0x16ea420()*0.0496337);
}

double NNfunction_sb_sRsR::synapse0x170eb70() {
   return (neuron0x16ea760()*0.0183706);
}

double NNfunction_sb_sRsR::synapse0x170ebb0() {
   return (neuron0x16eaaa0()*0.0026415);
}

double NNfunction_sb_sRsR::synapse0x170ebf0() {
   return (neuron0x16eade0()*0.0268637);
}

double NNfunction_sb_sRsR::synapse0x170ec30() {
   return (neuron0x16eb120()*-0.0655855);
}

double NNfunction_sb_sRsR::synapse0x170efb0() {
   return (neuron0x16e6560()*0.0108161);
}

double NNfunction_sb_sRsR::synapse0x170eff0() {
   return (neuron0x16e68a0()*0.0343342);
}

double NNfunction_sb_sRsR::synapse0x170f030() {
   return (neuron0x16e6be0()*0.00349717);
}

double NNfunction_sb_sRsR::synapse0x170f070() {
   return (neuron0x16e6f20()*-0.194616);
}

double NNfunction_sb_sRsR::synapse0x170f0b0() {
   return (neuron0x16e7260()*0.00478064);
}

double NNfunction_sb_sRsR::synapse0x170f0f0() {
   return (neuron0x16e75a0()*0.12327);
}

double NNfunction_sb_sRsR::synapse0x170f130() {
   return (neuron0x16e78e0()*-0.0746662);
}

double NNfunction_sb_sRsR::synapse0x170f170() {
   return (neuron0x16e7c20()*-0.0382157);
}

double NNfunction_sb_sRsR::synapse0x170f1b0() {
   return (neuron0x16e7f60()*-0.112025);
}

double NNfunction_sb_sRsR::synapse0x170f1f0() {
   return (neuron0x16e82a0()*0.152484);
}

double NNfunction_sb_sRsR::synapse0x170f230() {
   return (neuron0x16e85e0()*0.650384);
}

double NNfunction_sb_sRsR::synapse0x170f270() {
   return (neuron0x16e8920()*-0.0674757);
}

double NNfunction_sb_sRsR::synapse0x170f2b0() {
   return (neuron0x16e8c60()*0.0248052);
}

double NNfunction_sb_sRsR::synapse0x170f2f0() {
   return (neuron0x16e8fa0()*-0.0295143);
}

double NNfunction_sb_sRsR::synapse0x170f330() {
   return (neuron0x16e92e0()*-0.0625022);
}

double NNfunction_sb_sRsR::synapse0x170f370() {
   return (neuron0x16e9620()*0.0288148);
}

double NNfunction_sb_sRsR::synapse0x170ee00() {
   return (neuron0x16e9960()*0.0503437);
}

double NNfunction_sb_sRsR::synapse0x170ee40() {
   return (neuron0x16e9ec0()*-0.0590307);
}

double NNfunction_sb_sRsR::synapse0x170f4c0() {
   return (neuron0x16ea0e0()*-0.510494);
}

double NNfunction_sb_sRsR::synapse0x170f500() {
   return (neuron0x16ea420()*0.11336);
}

double NNfunction_sb_sRsR::synapse0x170f540() {
   return (neuron0x16ea760()*0.0251394);
}

double NNfunction_sb_sRsR::synapse0x170f580() {
   return (neuron0x16eaaa0()*-0.0196793);
}

double NNfunction_sb_sRsR::synapse0x170f5c0() {
   return (neuron0x16eade0()*-0.00429402);
}

double NNfunction_sb_sRsR::synapse0x170f600() {
   return (neuron0x16eb120()*0.0158625);
}

double NNfunction_sb_sRsR::synapse0x170f980() {
   return (neuron0x16e6560()*-0.122865);
}

double NNfunction_sb_sRsR::synapse0x170f9c0() {
   return (neuron0x16e68a0()*-0.123283);
}

double NNfunction_sb_sRsR::synapse0x170fa00() {
   return (neuron0x16e6be0()*0.270617);
}

double NNfunction_sb_sRsR::synapse0x170fa40() {
   return (neuron0x16e6f20()*-0.691453);
}

double NNfunction_sb_sRsR::synapse0x170fa80() {
   return (neuron0x16e7260()*-0.205565);
}

double NNfunction_sb_sRsR::synapse0x170fac0() {
   return (neuron0x16e75a0()*-0.00968168);
}

double NNfunction_sb_sRsR::synapse0x170fb00() {
   return (neuron0x16e78e0()*0.167777);
}

double NNfunction_sb_sRsR::synapse0x170fb40() {
   return (neuron0x16e7c20()*-0.0128714);
}

double NNfunction_sb_sRsR::synapse0x170fb80() {
   return (neuron0x16e7f60()*-0.00369806);
}

double NNfunction_sb_sRsR::synapse0x170fbc0() {
   return (neuron0x16e82a0()*0.94645);
}

double NNfunction_sb_sRsR::synapse0x170fc00() {
   return (neuron0x16e85e0()*-0.450475);
}

double NNfunction_sb_sRsR::synapse0x170fc40() {
   return (neuron0x16e8920()*-0.638873);
}

double NNfunction_sb_sRsR::synapse0x170fc80() {
   return (neuron0x16e8c60()*0.0264102);
}

double NNfunction_sb_sRsR::synapse0x170fcc0() {
   return (neuron0x16e8fa0()*-0.217625);
}

double NNfunction_sb_sRsR::synapse0x170fd00() {
   return (neuron0x16e92e0()*0.237689);
}

double NNfunction_sb_sRsR::synapse0x170fd40() {
   return (neuron0x16e9620()*-0.219637);
}

double NNfunction_sb_sRsR::synapse0x170f7d0() {
   return (neuron0x16e9960()*0.298277);
}

double NNfunction_sb_sRsR::synapse0x170f810() {
   return (neuron0x16e9ec0()*0.483583);
}

double NNfunction_sb_sRsR::synapse0x170fe90() {
   return (neuron0x16ea0e0()*-0.5192);
}

double NNfunction_sb_sRsR::synapse0x170fed0() {
   return (neuron0x16ea420()*0.616384);
}

double NNfunction_sb_sRsR::synapse0x170ff10() {
   return (neuron0x16ea760()*0.342029);
}

double NNfunction_sb_sRsR::synapse0x170ff50() {
   return (neuron0x16eaaa0()*0.00833581);
}

double NNfunction_sb_sRsR::synapse0x170ff90() {
   return (neuron0x16eade0()*0.673465);
}

double NNfunction_sb_sRsR::synapse0x170ffd0() {
   return (neuron0x16eb120()*-0.14681);
}

double NNfunction_sb_sRsR::synapse0x16ec570() {
   return (neuron0x16eb5c0()*0.372729);
}

double NNfunction_sb_sRsR::synapse0x16ec5b0() {
   return (neuron0x16ebed0()*0.244681);
}

double NNfunction_sb_sRsR::synapse0x16eda80() {
   return (neuron0x16ec9b0()*0.0989997);
}

double NNfunction_sb_sRsR::synapse0x16edac0() {
   return (neuron0x14a6240()*0.265788);
}

double NNfunction_sb_sRsR::synapse0x16ee450() {
   return (neuron0x16ed7d0()*-0.0777052);
}

double NNfunction_sb_sRsR::synapse0x16ee490() {
   return (neuron0x16ee1a0()*-0.0631628);
}

double NNfunction_sb_sRsR::synapse0x16ef220() {
   return (neuron0x16eef70()*0.110364);
}

double NNfunction_sb_sRsR::synapse0x16ef260() {
   return (neuron0x16ef940()*0.603032);
}

double NNfunction_sb_sRsR::synapse0x16efbf0() {
   return (neuron0x16f0310()*0.581429);
}

double NNfunction_sb_sRsR::synapse0x16efc30() {
   return (neuron0x16f0df0()*0.541462);
}

double NNfunction_sb_sRsR::synapse0x16f05c0() {
   return (neuron0x16f17c0()*-0.311352);
}

double NNfunction_sb_sRsR::synapse0x16f0600() {
   return (neuron0x16ee8a0()*0.282907);
}

double NNfunction_sb_sRsR::synapse0x16f10a0() {
   return (neuron0x16f3370()*0.334586);
}

double NNfunction_sb_sRsR::synapse0x16f10e0() {
   return (neuron0x16f3d40()*0.0785806);
}

double NNfunction_sb_sRsR::synapse0x16f1a70() {
   return (neuron0x16f4710()*-0.0921154);
}

double NNfunction_sb_sRsR::synapse0x16f1ab0() {
   return (neuron0x16f50e0()*0.322254);
}

double NNfunction_sb_sRsR::synapse0x16eeb50() {
   return (neuron0x16f6ef0()*0.0687881);
}

double NNfunction_sb_sRsR::synapse0x16eeb90() {
   return (neuron0x16f71d0()*1.0135);
}

double NNfunction_sb_sRsR::synapse0x16f3620() {
   return (neuron0x16f7ba0()*0.0223168);
}

double NNfunction_sb_sRsR::synapse0x16f3660() {
   return (neuron0x16f8570()*-0.0181657);
}

double NNfunction_sb_sRsR::synapse0x16f3ff0() {
   return (neuron0x16f8f40()*0.210776);
}

double NNfunction_sb_sRsR::synapse0x16f4030() {
   return (neuron0x16f9910()*0.573191);
}

double NNfunction_sb_sRsR::synapse0x16f49c0() {
   return (neuron0x16f2460()*0.011602);
}

double NNfunction_sb_sRsR::synapse0x16f4a00() {
   return (neuron0x16f2e30()*0.492204);
}

double NNfunction_sb_sRsR::synapse0x16f5390() {
   return (neuron0x16fc6a0()*0.362274);
}

double NNfunction_sb_sRsR::synapse0x16f53d0() {
   return (neuron0x16fd070()*0.351466);
}

double NNfunction_sb_sRsR::synapse0x16e9500() {
   return (neuron0x16fda40()*0.492702);
}

double NNfunction_sb_sRsR::synapse0x16e9540() {
   return (neuron0x16fe410()*-0.212246);
}

double NNfunction_sb_sRsR::synapse0x16f7480() {
   return (neuron0x16fede0()*0.11146);
}

double NNfunction_sb_sRsR::synapse0x16f74c0() {
   return (neuron0x16ff7b0()*-0.374702);
}

double NNfunction_sb_sRsR::synapse0x16f7e50() {
   return (neuron0x1700180()*0.0613636);
}

double NNfunction_sb_sRsR::synapse0x16f7e90() {
   return (neuron0x1700b50()*0.659709);
}

double NNfunction_sb_sRsR::synapse0x16f8820() {
   return (neuron0x16f6be0()*0.461923);
}

double NNfunction_sb_sRsR::synapse0x16f8860() {
   return (neuron0x1703730()*0.260851);
}

double NNfunction_sb_sRsR::synapse0x16f91f0() {
   return (neuron0x1704100()*0.0791882);
}

double NNfunction_sb_sRsR::synapse0x16f9230() {
   return (neuron0x1704ad0()*0.241392);
}

double NNfunction_sb_sRsR::synapse0x16f9bc0() {
   return (neuron0x17054a0()*-0.680351);
}

double NNfunction_sb_sRsR::synapse0x16f9c00() {
   return (neuron0x1705e70()*0.111568);
}

double NNfunction_sb_sRsR::synapse0x16f2710() {
   return (neuron0x1706840()*0.552092);
}

double NNfunction_sb_sRsR::synapse0x16f2750() {
   return (neuron0x1707210()*0.0282064);
}

double NNfunction_sb_sRsR::synapse0x16fbfc0() {
   return (neuron0x1707be0()*0.278753);
}

double NNfunction_sb_sRsR::synapse0x16fc000() {
   return (neuron0x17087c0()*0.278386);
}

double NNfunction_sb_sRsR::synapse0x16fc950() {
   return (neuron0x1709190()*0.434806);
}

double NNfunction_sb_sRsR::synapse0x16fc990() {
   return (neuron0x16fa010()*0.437477);
}

double NNfunction_sb_sRsR::synapse0x16fd320() {
   return (neuron0x16fa9e0()*0.103077);
}

double NNfunction_sb_sRsR::synapse0x16fd360() {
   return (neuron0x16fb3b0()*0.149847);
}

double NNfunction_sb_sRsR::synapse0x16fdcf0() {
   return (neuron0x170d9f0()*0.371159);
}

double NNfunction_sb_sRsR::synapse0x16fdd30() {
   return (neuron0x170e2a0()*0.457829);
}

double NNfunction_sb_sRsR::synapse0x16fe6c0() {
   return (neuron0x170ec70()*0.486357);
}

double NNfunction_sb_sRsR::synapse0x16fe700() {
   return (neuron0x170f640()*0.266506);
}

double NNfunction_sb_sRsR::synapse0x1700e00() {
   return (neuron0x16eb5c0()*-2.10686);
}

double NNfunction_sb_sRsR::synapse0x1700e40() {
   return (neuron0x16ebed0()*-0.977022);
}

double NNfunction_sb_sRsR::synapse0x16f63c0() {
   return (neuron0x16ec9b0()*0.00694804);
}

double NNfunction_sb_sRsR::synapse0x16f6400() {
   return (neuron0x14a6240()*-0.495431);
}

double NNfunction_sb_sRsR::synapse0x17039e0() {
   return (neuron0x16ed7d0()*-0.939879);
}

double NNfunction_sb_sRsR::synapse0x1703a20() {
   return (neuron0x16ee1a0()*-1.4386);
}

double NNfunction_sb_sRsR::synapse0x17043b0() {
   return (neuron0x16eef70()*-0.0819383);
}

double NNfunction_sb_sRsR::synapse0x17043f0() {
   return (neuron0x16ef940()*0.867525);
}

double NNfunction_sb_sRsR::synapse0x1704d80() {
   return (neuron0x16f0310()*1.8553);
}

double NNfunction_sb_sRsR::synapse0x1704dc0() {
   return (neuron0x16f0df0()*0.00945781);
}

double NNfunction_sb_sRsR::synapse0x1705750() {
   return (neuron0x16f17c0()*-0.0247886);
}

double NNfunction_sb_sRsR::synapse0x1705790() {
   return (neuron0x16ee8a0()*6.2737);
}

double NNfunction_sb_sRsR::synapse0x1706120() {
   return (neuron0x16f3370()*0.926626);
}

double NNfunction_sb_sRsR::synapse0x1706160() {
   return (neuron0x16f3d40()*-0.242119);
}

double NNfunction_sb_sRsR::synapse0x1706af0() {
   return (neuron0x16f4710()*-0.104134);
}

double NNfunction_sb_sRsR::synapse0x1706b30() {
   return (neuron0x16f50e0()*-6.04144);
}

double NNfunction_sb_sRsR::synapse0x17074c0() {
   return (neuron0x16f6ef0()*0.908779);
}

double NNfunction_sb_sRsR::synapse0x1707500() {
   return (neuron0x16f71d0()*1.83616);
}

double NNfunction_sb_sRsR::synapse0x1707e90() {
   return (neuron0x16f7ba0()*0.189411);
}

double NNfunction_sb_sRsR::synapse0x1707ed0() {
   return (neuron0x16f8570()*-0.125673);
}

double NNfunction_sb_sRsR::synapse0x1708a70() {
   return (neuron0x16f8f40()*0.0371584);
}

double NNfunction_sb_sRsR::synapse0x1708ab0() {
   return (neuron0x16f9910()*0.231268);
}

double NNfunction_sb_sRsR::synapse0x1709440() {
   return (neuron0x16f2460()*1.3911);
}

double NNfunction_sb_sRsR::synapse0x1709480() {
   return (neuron0x16f2e30()*0.0186672);
}

double NNfunction_sb_sRsR::synapse0x16fa2c0() {
   return (neuron0x16fc6a0()*-0.00029481);
}

double NNfunction_sb_sRsR::synapse0x16fa300() {
   return (neuron0x16fd070()*0.0110451);
}

double NNfunction_sb_sRsR::synapse0x16fac90() {
   return (neuron0x16fda40()*2.27177);
}

double NNfunction_sb_sRsR::synapse0x16facd0() {
   return (neuron0x16fe410()*1.22708);
}

double NNfunction_sb_sRsR::synapse0x16fb660() {
   return (neuron0x16fede0()*0.196256);
}

double NNfunction_sb_sRsR::synapse0x16fb6a0() {
   return (neuron0x16ff7b0()*1.95435);
}

double NNfunction_sb_sRsR::synapse0x170db80() {
   return (neuron0x1700180()*0.182781);
}

double NNfunction_sb_sRsR::synapse0x170dbc0() {
   return (neuron0x1700b50()*-0.379239);
}

double NNfunction_sb_sRsR::synapse0x170e550() {
   return (neuron0x16f6be0()*0.0767355);
}

double NNfunction_sb_sRsR::synapse0x170e590() {
   return (neuron0x1703730()*0.00362112);
}

double NNfunction_sb_sRsR::synapse0x170ef20() {
   return (neuron0x1704100()*0.00484533);
}

double NNfunction_sb_sRsR::synapse0x170ef60() {
   return (neuron0x1704ad0()*-1.6471);
}

double NNfunction_sb_sRsR::synapse0x170f8f0() {
   return (neuron0x17054a0()*2.19914);
}

double NNfunction_sb_sRsR::synapse0x170f930() {
   return (neuron0x1705e70()*0.0585859);
}

double NNfunction_sb_sRsR::synapse0x16eb7e0() {
   return (neuron0x1706840()*-0.91259);
}

double NNfunction_sb_sRsR::synapse0x16eb820() {
   return (neuron0x1707210()*-1.804);
}

double NNfunction_sb_sRsR::synapse0x16ff090() {
   return (neuron0x1707be0()*0.691544);
}

double NNfunction_sb_sRsR::synapse0x16ff0d0() {
   return (neuron0x17087c0()*-2.31837);
}

double NNfunction_sb_sRsR::synapse0x1710010() {
   return (neuron0x1709190()*-1.45267);
}

double NNfunction_sb_sRsR::synapse0x1710050() {
   return (neuron0x16fa010()*1.69265);
}

double NNfunction_sb_sRsR::synapse0x1710090() {
   return (neuron0x16fa9e0()*-0.191578);
}

double NNfunction_sb_sRsR::synapse0x17100d0() {
   return (neuron0x16fb3b0()*-0.0164792);
}

double NNfunction_sb_sRsR::synapse0x1716f80() {
   return (neuron0x170d9f0()*0.366408);
}

double NNfunction_sb_sRsR::synapse0x1716fc0() {
   return (neuron0x170e2a0()*-0.316513);
}

double NNfunction_sb_sRsR::synapse0x1717000() {
   return (neuron0x170ec70()*-1.3949);
}

double NNfunction_sb_sRsR::synapse0x1717040() {
   return (neuron0x170f640()*0.0335441);
}

double NNfunction_sb_sRsR::synapse0x17173c0() {
   return (neuron0x16eb5c0()*0.3896);
}

double NNfunction_sb_sRsR::synapse0x1717400() {
   return (neuron0x16ebed0()*1.15168);
}

double NNfunction_sb_sRsR::synapse0x1717440() {
   return (neuron0x16ec9b0()*-1.53792);
}

double NNfunction_sb_sRsR::synapse0x1717480() {
   return (neuron0x14a6240()*3.41639);
}

double NNfunction_sb_sRsR::synapse0x17174c0() {
   return (neuron0x16ed7d0()*0.728973);
}

double NNfunction_sb_sRsR::synapse0x1717500() {
   return (neuron0x16ee1a0()*-0.672325);
}

double NNfunction_sb_sRsR::synapse0x1717540() {
   return (neuron0x16eef70()*-1.3547);
}

double NNfunction_sb_sRsR::synapse0x1717580() {
   return (neuron0x16ef940()*-1.338);
}

double NNfunction_sb_sRsR::synapse0x17175c0() {
   return (neuron0x16f0310()*0.33004);
}

double NNfunction_sb_sRsR::synapse0x1717600() {
   return (neuron0x16f0df0()*-0.946335);
}

double NNfunction_sb_sRsR::synapse0x1717640() {
   return (neuron0x16f17c0()*1.02291);
}

double NNfunction_sb_sRsR::synapse0x1717680() {
   return (neuron0x16ee8a0()*-5.89615);
}

double NNfunction_sb_sRsR::synapse0x17176c0() {
   return (neuron0x16f3370()*-0.446661);
}

double NNfunction_sb_sRsR::synapse0x1717700() {
   return (neuron0x16f3d40()*-2.89304);
}

double NNfunction_sb_sRsR::synapse0x1717740() {
   return (neuron0x16f4710()*0.521017);
}

double NNfunction_sb_sRsR::synapse0x1717780() {
   return (neuron0x16f50e0()*-0.232671);
}

double NNfunction_sb_sRsR::synapse0x1717210() {
   return (neuron0x16f6ef0()*-2.08532);
}

double NNfunction_sb_sRsR::synapse0x1717250() {
   return (neuron0x16f71d0()*-2.46799);
}

double NNfunction_sb_sRsR::synapse0x17178d0() {
   return (neuron0x16f7ba0()*1.45914);
}

double NNfunction_sb_sRsR::synapse0x1717910() {
   return (neuron0x16f8570()*-2.99462);
}

double NNfunction_sb_sRsR::synapse0x1717950() {
   return (neuron0x16f8f40()*1.33086);
}

double NNfunction_sb_sRsR::synapse0x1717990() {
   return (neuron0x16f9910()*-0.418934);
}

double NNfunction_sb_sRsR::synapse0x17179d0() {
   return (neuron0x16f2460()*-1.6342);
}

double NNfunction_sb_sRsR::synapse0x1717a10() {
   return (neuron0x16f2e30()*-1.69962);
}

double NNfunction_sb_sRsR::synapse0x1717a50() {
   return (neuron0x16fc6a0()*4.05227);
}

double NNfunction_sb_sRsR::synapse0x1717a90() {
   return (neuron0x16fd070()*2.86129);
}

double NNfunction_sb_sRsR::synapse0x1717ad0() {
   return (neuron0x16fda40()*-1.00814);
}

double NNfunction_sb_sRsR::synapse0x1717b10() {
   return (neuron0x16fe410()*0.687545);
}

double NNfunction_sb_sRsR::synapse0x1717b50() {
   return (neuron0x16fede0()*-1.28548);
}

double NNfunction_sb_sRsR::synapse0x1717b90() {
   return (neuron0x16ff7b0()*-3.07842);
}

double NNfunction_sb_sRsR::synapse0x1717bd0() {
   return (neuron0x1700180()*2.495);
}

double NNfunction_sb_sRsR::synapse0x1717c10() {
   return (neuron0x1700b50()*-2.57249);
}

double NNfunction_sb_sRsR::synapse0x17177c0() {
   return (neuron0x16f6be0()*1.34215);
}

double NNfunction_sb_sRsR::synapse0x1717800() {
   return (neuron0x1703730()*-1.53689);
}

double NNfunction_sb_sRsR::synapse0x1717840() {
   return (neuron0x1704100()*2.06553);
}

double NNfunction_sb_sRsR::synapse0x1717880() {
   return (neuron0x1704ad0()*0.105389);
}

double NNfunction_sb_sRsR::synapse0x1717e60() {
   return (neuron0x17054a0()*-7.89496);
}

double NNfunction_sb_sRsR::synapse0x1717ea0() {
   return (neuron0x1705e70()*-1.49677);
}

double NNfunction_sb_sRsR::synapse0x1717ee0() {
   return (neuron0x1706840()*7.00143);
}

double NNfunction_sb_sRsR::synapse0x1717f20() {
   return (neuron0x1707210()*1.72076);
}

double NNfunction_sb_sRsR::synapse0x1717f60() {
   return (neuron0x1707be0()*-1.47591);
}

double NNfunction_sb_sRsR::synapse0x1717fa0() {
   return (neuron0x17087c0()*-1.92084);
}

double NNfunction_sb_sRsR::synapse0x1717fe0() {
   return (neuron0x1709190()*-1.8511);
}

double NNfunction_sb_sRsR::synapse0x1718020() {
   return (neuron0x16fa010()*0.373665);
}

double NNfunction_sb_sRsR::synapse0x1718060() {
   return (neuron0x16fa9e0()*-1.26242);
}

double NNfunction_sb_sRsR::synapse0x17180a0() {
   return (neuron0x16fb3b0()*-0.717677);
}

double NNfunction_sb_sRsR::synapse0x17180e0() {
   return (neuron0x170d9f0()*-1.84927);
}

double NNfunction_sb_sRsR::synapse0x1718120() {
   return (neuron0x170e2a0()*0.469424);
}

double NNfunction_sb_sRsR::synapse0x1718160() {
   return (neuron0x170ec70()*0.90882);
}

double NNfunction_sb_sRsR::synapse0x17181a0() {
   return (neuron0x170f640()*1.09978);
}

double NNfunction_sb_sRsR::synapse0x1718520() {
   return (neuron0x16eb5c0()*0.000365033);
}

double NNfunction_sb_sRsR::synapse0x1718560() {
   return (neuron0x16ebed0()*-0.0389235);
}

double NNfunction_sb_sRsR::synapse0x17185a0() {
   return (neuron0x16ec9b0()*0.0140722);
}

double NNfunction_sb_sRsR::synapse0x17185e0() {
   return (neuron0x14a6240()*-0.0331674);
}

double NNfunction_sb_sRsR::synapse0x1718620() {
   return (neuron0x16ed7d0()*-0.0344035);
}

double NNfunction_sb_sRsR::synapse0x1718660() {
   return (neuron0x16ee1a0()*-2.50766);
}

double NNfunction_sb_sRsR::synapse0x17186a0() {
   return (neuron0x16eef70()*-0.00126998);
}

double NNfunction_sb_sRsR::synapse0x17186e0() {
   return (neuron0x16ef940()*-0.0115675);
}

double NNfunction_sb_sRsR::synapse0x1718720() {
   return (neuron0x16f0310()*0.0518484);
}

double NNfunction_sb_sRsR::synapse0x1718760() {
   return (neuron0x16f0df0()*0.00555155);
}

double NNfunction_sb_sRsR::synapse0x17187a0() {
   return (neuron0x16f17c0()*0.00623546);
}

double NNfunction_sb_sRsR::synapse0x17187e0() {
   return (neuron0x16ee8a0()*0.102944);
}

double NNfunction_sb_sRsR::synapse0x1718820() {
   return (neuron0x16f3370()*0.0493357);
}

double NNfunction_sb_sRsR::synapse0x1718860() {
   return (neuron0x16f3d40()*-0.00215971);
}

double NNfunction_sb_sRsR::synapse0x17188a0() {
   return (neuron0x16f4710()*-0.813558);
}

double NNfunction_sb_sRsR::synapse0x17188e0() {
   return (neuron0x16f50e0()*-0.399178);
}

double NNfunction_sb_sRsR::synapse0x1718370() {
   return (neuron0x16f6ef0()*0.045353);
}

double NNfunction_sb_sRsR::synapse0x17183b0() {
   return (neuron0x16f71d0()*0.351621);
}

double NNfunction_sb_sRsR::synapse0x1718a30() {
   return (neuron0x16f7ba0()*0.00141359);
}

double NNfunction_sb_sRsR::synapse0x1718a70() {
   return (neuron0x16f8570()*-0.00393505);
}

double NNfunction_sb_sRsR::synapse0x1718ab0() {
   return (neuron0x16f8f40()*-0.00542131);
}

double NNfunction_sb_sRsR::synapse0x1718af0() {
   return (neuron0x16f9910()*-1.26883);
}

double NNfunction_sb_sRsR::synapse0x1718b30() {
   return (neuron0x16f2460()*0.059814);
}

double NNfunction_sb_sRsR::synapse0x1718b70() {
   return (neuron0x16f2e30()*0.0127455);
}

double NNfunction_sb_sRsR::synapse0x1718bb0() {
   return (neuron0x16fc6a0()*-0.0185393);
}

double NNfunction_sb_sRsR::synapse0x1718bf0() {
   return (neuron0x16fd070()*0.0112618);
}

double NNfunction_sb_sRsR::synapse0x1718c30() {
   return (neuron0x16fda40()*0.954508);
}

double NNfunction_sb_sRsR::synapse0x1718c70() {
   return (neuron0x16fe410()*0.215741);
}

double NNfunction_sb_sRsR::synapse0x1718cb0() {
   return (neuron0x16fede0()*-0.0143332);
}

double NNfunction_sb_sRsR::synapse0x1718cf0() {
   return (neuron0x16ff7b0()*0.108496);
}

double NNfunction_sb_sRsR::synapse0x1718d30() {
   return (neuron0x1700180()*0.00522843);
}

double NNfunction_sb_sRsR::synapse0x1718d70() {
   return (neuron0x1700b50()*0.0410058);
}

double NNfunction_sb_sRsR::synapse0x1718920() {
   return (neuron0x16f6be0()*-0.00869913);
}

double NNfunction_sb_sRsR::synapse0x1718960() {
   return (neuron0x1703730()*0.00129627);
}

double NNfunction_sb_sRsR::synapse0x17189a0() {
   return (neuron0x1704100()*-0.0107036);
}

double NNfunction_sb_sRsR::synapse0x17189e0() {
   return (neuron0x1704ad0()*-0.044035);
}

double NNfunction_sb_sRsR::synapse0x1718fc0() {
   return (neuron0x17054a0()*0.224648);
}

double NNfunction_sb_sRsR::synapse0x1719000() {
   return (neuron0x1705e70()*-0.00927858);
}

double NNfunction_sb_sRsR::synapse0x1719040() {
   return (neuron0x1706840()*-0.0880468);
}

double NNfunction_sb_sRsR::synapse0x1719080() {
   return (neuron0x1707210()*-0.00281695);
}

double NNfunction_sb_sRsR::synapse0x17190c0() {
   return (neuron0x1707be0()*0.0105768);
}

double NNfunction_sb_sRsR::synapse0x1719100() {
   return (neuron0x17087c0()*-0.0524938);
}

double NNfunction_sb_sRsR::synapse0x1719140() {
   return (neuron0x1709190()*0.0187262);
}

double NNfunction_sb_sRsR::synapse0x1719180() {
   return (neuron0x16fa010()*1.57273);
}

double NNfunction_sb_sRsR::synapse0x17191c0() {
   return (neuron0x16fa9e0()*0.0189312);
}

double NNfunction_sb_sRsR::synapse0x1719200() {
   return (neuron0x16fb3b0()*0.00266334);
}

double NNfunction_sb_sRsR::synapse0x1719240() {
   return (neuron0x170d9f0()*0.0272588);
}

double NNfunction_sb_sRsR::synapse0x1719280() {
   return (neuron0x170e2a0()*-0.221553);
}

double NNfunction_sb_sRsR::synapse0x17192c0() {
   return (neuron0x170ec70()*-0.0990746);
}

double NNfunction_sb_sRsR::synapse0x1719300() {
   return (neuron0x170f640()*0.0055259);
}

double NNfunction_sb_sRsR::synapse0x1719680() {
   return (neuron0x16eb5c0()*-0.461888);
}

double NNfunction_sb_sRsR::synapse0x17196c0() {
   return (neuron0x16ebed0()*-0.140183);
}

double NNfunction_sb_sRsR::synapse0x1719700() {
   return (neuron0x16ec9b0()*-0.642584);
}

double NNfunction_sb_sRsR::synapse0x1719740() {
   return (neuron0x14a6240()*0.127368);
}

double NNfunction_sb_sRsR::synapse0x1719780() {
   return (neuron0x16ed7d0()*-0.214983);
}

double NNfunction_sb_sRsR::synapse0x17197c0() {
   return (neuron0x16ee1a0()*-0.102098);
}

double NNfunction_sb_sRsR::synapse0x1719800() {
   return (neuron0x16eef70()*0.315728);
}

double NNfunction_sb_sRsR::synapse0x1719840() {
   return (neuron0x16ef940()*0.413229);
}

double NNfunction_sb_sRsR::synapse0x1719880() {
   return (neuron0x16f0310()*-0.647355);
}

double NNfunction_sb_sRsR::synapse0x17198c0() {
   return (neuron0x16f0df0()*-0.272003);
}

double NNfunction_sb_sRsR::synapse0x1719900() {
   return (neuron0x16f17c0()*-0.508928);
}

double NNfunction_sb_sRsR::synapse0x1719940() {
   return (neuron0x16ee8a0()*-0.0932855);
}

double NNfunction_sb_sRsR::synapse0x1719980() {
   return (neuron0x16f3370()*0.0238723);
}

double NNfunction_sb_sRsR::synapse0x17199c0() {
   return (neuron0x16f3d40()*0.440425);
}

double NNfunction_sb_sRsR::synapse0x1719a00() {
   return (neuron0x16f4710()*-0.455326);
}

double NNfunction_sb_sRsR::synapse0x1719a40() {
   return (neuron0x16f50e0()*-0.0873819);
}

double NNfunction_sb_sRsR::synapse0x17194d0() {
   return (neuron0x16f6ef0()*-0.521686);
}

double NNfunction_sb_sRsR::synapse0x1719510() {
   return (neuron0x16f71d0()*-0.00980019);
}

double NNfunction_sb_sRsR::synapse0x1719b90() {
   return (neuron0x16f7ba0()*-0.336788);
}

double NNfunction_sb_sRsR::synapse0x1719bd0() {
   return (neuron0x16f8570()*-0.0453062);
}

double NNfunction_sb_sRsR::synapse0x1719c10() {
   return (neuron0x16f8f40()*0.14267);
}

double NNfunction_sb_sRsR::synapse0x1719c50() {
   return (neuron0x16f9910()*-0.577537);
}

double NNfunction_sb_sRsR::synapse0x1719c90() {
   return (neuron0x16f2460()*-0.019511);
}

double NNfunction_sb_sRsR::synapse0x1719cd0() {
   return (neuron0x16f2e30()*-0.235169);
}

double NNfunction_sb_sRsR::synapse0x1719d10() {
   return (neuron0x16fc6a0()*0.256542);
}

double NNfunction_sb_sRsR::synapse0x1719d50() {
   return (neuron0x16fd070()*-0.302811);
}

double NNfunction_sb_sRsR::synapse0x1719d90() {
   return (neuron0x16fda40()*0.164135);
}

double NNfunction_sb_sRsR::synapse0x1719dd0() {
   return (neuron0x16fe410()*-0.152517);
}

double NNfunction_sb_sRsR::synapse0x1719e10() {
   return (neuron0x16fede0()*0.116376);
}

double NNfunction_sb_sRsR::synapse0x1719e50() {
   return (neuron0x16ff7b0()*0.178463);
}

double NNfunction_sb_sRsR::synapse0x1719e90() {
   return (neuron0x1700180()*-0.293477);
}

double NNfunction_sb_sRsR::synapse0x1719ed0() {
   return (neuron0x1700b50()*-0.626348);
}

double NNfunction_sb_sRsR::synapse0x1719a80() {
   return (neuron0x16f6be0()*0.200422);
}

double NNfunction_sb_sRsR::synapse0x1719ac0() {
   return (neuron0x1703730()*0.242328);
}

double NNfunction_sb_sRsR::synapse0x1719b00() {
   return (neuron0x1704100()*-0.477662);
}

double NNfunction_sb_sRsR::synapse0x1719b40() {
   return (neuron0x1704ad0()*-0.206122);
}

double NNfunction_sb_sRsR::synapse0x171a120() {
   return (neuron0x17054a0()*-0.475786);
}

double NNfunction_sb_sRsR::synapse0x171a160() {
   return (neuron0x1705e70()*0.311752);
}

double NNfunction_sb_sRsR::synapse0x171a1a0() {
   return (neuron0x1706840()*-0.455855);
}

double NNfunction_sb_sRsR::synapse0x171a1e0() {
   return (neuron0x1707210()*-0.0872328);
}

double NNfunction_sb_sRsR::synapse0x171a220() {
   return (neuron0x1707be0()*-0.583487);
}

double NNfunction_sb_sRsR::synapse0x171a260() {
   return (neuron0x17087c0()*0.55827);
}

double NNfunction_sb_sRsR::synapse0x171a2a0() {
   return (neuron0x1709190()*-0.225835);
}

double NNfunction_sb_sRsR::synapse0x171a2e0() {
   return (neuron0x16fa010()*0.338063);
}

double NNfunction_sb_sRsR::synapse0x171a320() {
   return (neuron0x16fa9e0()*-0.341653);
}

double NNfunction_sb_sRsR::synapse0x171a360() {
   return (neuron0x16fb3b0()*-0.108495);
}

double NNfunction_sb_sRsR::synapse0x171a3a0() {
   return (neuron0x170d9f0()*0.273725);
}

double NNfunction_sb_sRsR::synapse0x171a3e0() {
   return (neuron0x170e2a0()*-0.371933);
}

double NNfunction_sb_sRsR::synapse0x171a420() {
   return (neuron0x170ec70()*0.137638);
}

double NNfunction_sb_sRsR::synapse0x171a460() {
   return (neuron0x170f640()*-0.184665);
}

double NNfunction_sb_sRsR::synapse0x16eb580() {
   return (neuron0x1716840()*4.65117);
}

double NNfunction_sb_sRsR::synapse0x171a6c0() {
   return (neuron0x1716be0()*-7.93292);
}

double NNfunction_sb_sRsR::synapse0x171a700() {
   return (neuron0x1717080()*11.7162);
}

double NNfunction_sb_sRsR::synapse0x171a740() {
   return (neuron0x17181e0()*-8.44886);
}

double NNfunction_sb_sRsR::synapse0x171a780() {
   return (neuron0x1719340()*-0.520412);
}

