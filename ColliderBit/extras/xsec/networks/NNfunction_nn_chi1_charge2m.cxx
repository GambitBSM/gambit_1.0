#include "NNfunction_nn_chi1_charge2m.h"
#include <cmath>

double NNfunction_nn_chi1_charge2m::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 24.2527)/14.8723;
   input1 = (in1 - 26.8458)/892.595;
   input2 = (in2 - 190.28)/150.423;
   input3 = (in3 - 186.217)/685.363;
   input4 = (in4 - 956.647)/823.028;
   input5 = (in5 - 928.522)/878.02;
   input6 = (in6 - 931.742)/876.602;
   input7 = (in7 - 922.473)/854.568;
   input8 = (in8 - 931.103)/897.537;
   input9 = (in9 - 921.967)/890.763;
   input10 = (in10 - 911.566)/864.67;
   input11 = (in11 - 821.711)/815.579;
   input12 = (in12 - 865.532)/822.94;
   input13 = (in13 - 645.043)/556.117;
   input14 = (in14 - 846.492)/783.674;
   input15 = (in15 - 849.078)/785.518;
   input16 = (in16 - 579.176)/504.736;
   input17 = (in17 - 880.314)/839.831;
   input18 = (in18 - 880.979)/840.547;
   input19 = (in19 - 854.412)/788.168;
   input20 = (in20 - -142.175)/420.341;
   input21 = (in21 - -183.055)/913.32;
   input22 = (in22 - 5.20308)/941.995;
   input23 = (in23 - 20.034)/250.741;
   switch(index) {
     case 0:
         return neuron0x35fd0b0();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi1_charge2m::Value(int index, double* input) {
   input0 = (input[0] - 24.2527)/14.8723;
   input1 = (input[1] - 26.8458)/892.595;
   input2 = (input[2] - 190.28)/150.423;
   input3 = (input[3] - 186.217)/685.363;
   input4 = (input[4] - 956.647)/823.028;
   input5 = (input[5] - 928.522)/878.02;
   input6 = (input[6] - 931.742)/876.602;
   input7 = (input[7] - 922.473)/854.568;
   input8 = (input[8] - 931.103)/897.537;
   input9 = (input[9] - 921.967)/890.763;
   input10 = (input[10] - 911.566)/864.67;
   input11 = (input[11] - 821.711)/815.579;
   input12 = (input[12] - 865.532)/822.94;
   input13 = (input[13] - 645.043)/556.117;
   input14 = (input[14] - 846.492)/783.674;
   input15 = (input[15] - 849.078)/785.518;
   input16 = (input[16] - 579.176)/504.736;
   input17 = (input[17] - 880.314)/839.831;
   input18 = (input[18] - 880.979)/840.547;
   input19 = (input[19] - 854.412)/788.168;
   input20 = (input[20] - -142.175)/420.341;
   input21 = (input[21] - -183.055)/913.32;
   input22 = (input[22] - 5.20308)/941.995;
   input23 = (input[23] - 20.034)/250.741;
   switch(index) {
     case 0:
         return neuron0x35fd0b0();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi1_charge2m::neuron0x35c9270() {
   return input0;
}

double NNfunction_nn_chi1_charge2m::neuron0x35c9520() {
   return input1;
}

double NNfunction_nn_chi1_charge2m::neuron0x35c9860() {
   return input2;
}

double NNfunction_nn_chi1_charge2m::neuron0x35c9ba0() {
   return input3;
}

double NNfunction_nn_chi1_charge2m::neuron0x35c9ee0() {
   return input4;
}

double NNfunction_nn_chi1_charge2m::neuron0x35ca220() {
   return input5;
}

double NNfunction_nn_chi1_charge2m::neuron0x35ca560() {
   return input6;
}

double NNfunction_nn_chi1_charge2m::neuron0x35ca8a0() {
   return input7;
}

double NNfunction_nn_chi1_charge2m::neuron0x35cabe0() {
   return input8;
}

double NNfunction_nn_chi1_charge2m::neuron0x35caf20() {
   return input9;
}

double NNfunction_nn_chi1_charge2m::neuron0x35cb260() {
   return input10;
}

double NNfunction_nn_chi1_charge2m::neuron0x35cb5a0() {
   return input11;
}

double NNfunction_nn_chi1_charge2m::neuron0x35cb8e0() {
   return input12;
}

double NNfunction_nn_chi1_charge2m::neuron0x35cbc20() {
   return input13;
}

double NNfunction_nn_chi1_charge2m::neuron0x35cbf60() {
   return input14;
}

double NNfunction_nn_chi1_charge2m::neuron0x35cc2a0() {
   return input15;
}

double NNfunction_nn_chi1_charge2m::neuron0x35cc5e0() {
   return input16;
}

double NNfunction_nn_chi1_charge2m::neuron0x35ccb40() {
   return input17;
}

double NNfunction_nn_chi1_charge2m::neuron0x35ccd60() {
   return input18;
}

double NNfunction_nn_chi1_charge2m::neuron0x35cd0a0() {
   return input19;
}

double NNfunction_nn_chi1_charge2m::neuron0x35cd3e0() {
   return input20;
}

double NNfunction_nn_chi1_charge2m::neuron0x35cd720() {
   return input21;
}

double NNfunction_nn_chi1_charge2m::neuron0x35cda60() {
   return input22;
}

double NNfunction_nn_chi1_charge2m::neuron0x35cdda0() {
   return input23;
}

double NNfunction_nn_chi1_charge2m::input0x35ce210() {
   double input = 2.64022;
   input += synapse0x35c91f0();
   input += synapse0x35c9230();
   input += synapse0x35ce4c0();
   input += synapse0x35ce500();
   input += synapse0x35ce540();
   input += synapse0x35ce580();
   input += synapse0x35ce5c0();
   input += synapse0x35ce600();
   input += synapse0x35ce640();
   input += synapse0x35ce680();
   input += synapse0x35ce6c0();
   input += synapse0x35ce700();
   input += synapse0x35ce740();
   input += synapse0x35ce780();
   input += synapse0x35ce7c0();
   input += synapse0x35ce800();
   input += synapse0x35c9160();
   input += synapse0x35c91a0();
   input += synapse0x3384310();
   input += synapse0x3384350();
   input += synapse0x35cea60();
   input += synapse0x35ceaa0();
   input += synapse0x35ceae0();
   input += synapse0x35ceb20();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35ce210() {
   double input = input0x35ce210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35ceb60() {
   double input = 0.265163;
   input += synapse0x35ceea0();
   input += synapse0x35ceee0();
   input += synapse0x35cef20();
   input += synapse0x35cef60();
   input += synapse0x35cefa0();
   input += synapse0x35cefe0();
   input += synapse0x35cf020();
   input += synapse0x35cf060();
   input += synapse0x35cf0a0();
   input += synapse0x35ce950();
   input += synapse0x35ce990();
   input += synapse0x35ce9d0();
   input += synapse0x35cea10();
   input += synapse0x35cf2f0();
   input += synapse0x35cf330();
   input += synapse0x35cf370();
   input += synapse0x35cecf0();
   input += synapse0x35ced30();
   input += synapse0x35cf4c0();
   input += synapse0x35cf500();
   input += synapse0x35cf540();
   input += synapse0x35cf580();
   input += synapse0x35cf5c0();
   input += synapse0x35cf600();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35ceb60() {
   double input = input0x35ceb60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35cf640() {
   double input = 2.24188;
   input += synapse0x35cf980();
   input += synapse0x35cf9c0();
   input += synapse0x35cfa00();
   input += synapse0x35cfa40();
   input += synapse0x35cfa80();
   input += synapse0x35cfac0();
   input += synapse0x35cfb00();
   input += synapse0x35cfb40();
   input += synapse0x35cfb80();
   input += synapse0x35cfbc0();
   input += synapse0x35cfc00();
   input += synapse0x35cfc40();
   input += synapse0x35cfc80();
   input += synapse0x35cfcc0();
   input += synapse0x35cfd00();
   input += synapse0x35cfd40();
   input += synapse0x35cf7d0();
   input += synapse0x35cf810();
   input += synapse0x35b82e0();
   input += synapse0x3392230();
   input += synapse0x3392270();
   input += synapse0x34ad780();
   input += synapse0x34ad7c0();
   input += synapse0x35c8fd0();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35cf640() {
   double input = input0x35cf640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x3392990() {
   double input = -0.329554;
   input += synapse0x3392b20();
   input += synapse0x35cf200();
   input += synapse0x35cf240();
   input += synapse0x35cf280();
   input += synapse0x35cfe90();
   input += synapse0x35cfed0();
   input += synapse0x35cff10();
   input += synapse0x35cff50();
   input += synapse0x35cff90();
   input += synapse0x35cffd0();
   input += synapse0x35d0010();
   input += synapse0x35d0050();
   input += synapse0x35d0090();
   input += synapse0x35d00d0();
   input += synapse0x35d0110();
   input += synapse0x35d0150();
   input += synapse0x35c9010();
   input += synapse0x35c9050();
   input += synapse0x35c9090();
   input += synapse0x35d02a0();
   input += synapse0x35d02e0();
   input += synapse0x35d0320();
   input += synapse0x35d0360();
   input += synapse0x35d03a0();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x3392990() {
   double input = input0x3392990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35d03e0() {
   double input = -0.60133;
   input += synapse0x35d0720();
   input += synapse0x35d0760();
   input += synapse0x35d07a0();
   input += synapse0x35d07e0();
   input += synapse0x35d0820();
   input += synapse0x35d0860();
   input += synapse0x35d08a0();
   input += synapse0x35d08e0();
   input += synapse0x35d0920();
   input += synapse0x35d0960();
   input += synapse0x35d09a0();
   input += synapse0x35d09e0();
   input += synapse0x35d0a20();
   input += synapse0x35d0a60();
   input += synapse0x35d0aa0();
   input += synapse0x35d0ae0();
   input += synapse0x35d0570();
   input += synapse0x35d05b0();
   input += synapse0x35d0c30();
   input += synapse0x35d0c70();
   input += synapse0x35d0cb0();
   input += synapse0x35d0cf0();
   input += synapse0x35d0d30();
   input += synapse0x35d0d70();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35d03e0() {
   double input = input0x35d03e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35d0db0() {
   double input = -1.8403;
   input += synapse0x35d10f0();
   input += synapse0x35d1130();
   input += synapse0x35d1170();
   input += synapse0x35d11b0();
   input += synapse0x35d11f0();
   input += synapse0x35d1230();
   input += synapse0x35d1270();
   input += synapse0x35d12b0();
   input += synapse0x35d12f0();
   input += synapse0x3392580();
   input += synapse0x33925c0();
   input += synapse0x3392600();
   input += synapse0x3392640();
   input += synapse0x3392680();
   input += synapse0x33926c0();
   input += synapse0x3392700();
   input += synapse0x35d0f40();
   input += synapse0x35d0f80();
   input += synapse0x3392850();
   input += synapse0x3392890();
   input += synapse0x33928d0();
   input += synapse0x3392910();
   input += synapse0x3392950();
   input += synapse0x35d1b40();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35d0db0() {
   double input = input0x35d0db0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35d1b80() {
   double input = -0.939758;
   input += synapse0x35d1ec0();
   input += synapse0x35d1f00();
   input += synapse0x35d1f40();
   input += synapse0x35d1f80();
   input += synapse0x35d1fc0();
   input += synapse0x35d2000();
   input += synapse0x35d2040();
   input += synapse0x35d2080();
   input += synapse0x35d20c0();
   input += synapse0x35d2100();
   input += synapse0x35d2140();
   input += synapse0x35d2180();
   input += synapse0x35d21c0();
   input += synapse0x35d2200();
   input += synapse0x35d2240();
   input += synapse0x35d2280();
   input += synapse0x35d1d10();
   input += synapse0x35d1d50();
   input += synapse0x35d23d0();
   input += synapse0x35d2410();
   input += synapse0x35d2450();
   input += synapse0x35d2490();
   input += synapse0x35d24d0();
   input += synapse0x35d2510();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35d1b80() {
   double input = input0x35d1b80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35d2550() {
   double input = 3.23541;
   input += synapse0x35d2890();
   input += synapse0x35d28d0();
   input += synapse0x35d2910();
   input += synapse0x35d2950();
   input += synapse0x35d2990();
   input += synapse0x35d29d0();
   input += synapse0x35d2a10();
   input += synapse0x35d2a50();
   input += synapse0x35d2a90();
   input += synapse0x35d2ad0();
   input += synapse0x35d2b10();
   input += synapse0x35d2b50();
   input += synapse0x35d2b90();
   input += synapse0x35d2bd0();
   input += synapse0x35d2c10();
   input += synapse0x35d2c50();
   input += synapse0x35d26e0();
   input += synapse0x35d2720();
   input += synapse0x35d2da0();
   input += synapse0x35d2de0();
   input += synapse0x35d2e20();
   input += synapse0x35d2e60();
   input += synapse0x35d2ea0();
   input += synapse0x35d2ee0();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35d2550() {
   double input = input0x35d2550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35d2f20() {
   double input = 1.46122;
   input += synapse0x35cca30();
   input += synapse0x35cca70();
   input += synapse0x35ccab0();
   input += synapse0x35ccaf0();
   input += synapse0x35d3470();
   input += synapse0x35d34b0();
   input += synapse0x35d34f0();
   input += synapse0x35d3530();
   input += synapse0x35d3570();
   input += synapse0x35d35b0();
   input += synapse0x35d35f0();
   input += synapse0x35d3630();
   input += synapse0x35d3670();
   input += synapse0x35d36b0();
   input += synapse0x35d36f0();
   input += synapse0x35d3730();
   input += synapse0x35d30b0();
   input += synapse0x35d30f0();
   input += synapse0x35d3880();
   input += synapse0x35d38c0();
   input += synapse0x35d3900();
   input += synapse0x35d3940();
   input += synapse0x35d3980();
   input += synapse0x35d39c0();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35d2f20() {
   double input = input0x35d2f20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35d3a00() {
   double input = -1.21195;
   input += synapse0x35d3d40();
   input += synapse0x35d3d80();
   input += synapse0x35d3dc0();
   input += synapse0x35d3e00();
   input += synapse0x35d3e40();
   input += synapse0x35d3e80();
   input += synapse0x35d3ec0();
   input += synapse0x35d3f00();
   input += synapse0x35d3f40();
   input += synapse0x35d3f80();
   input += synapse0x35d3fc0();
   input += synapse0x35d4000();
   input += synapse0x35d4040();
   input += synapse0x35d4080();
   input += synapse0x35d40c0();
   input += synapse0x35d4100();
   input += synapse0x35d3b90();
   input += synapse0x35d3bd0();
   input += synapse0x35d4250();
   input += synapse0x35d4290();
   input += synapse0x35d42d0();
   input += synapse0x35d4310();
   input += synapse0x35d4350();
   input += synapse0x35d4390();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35d3a00() {
   double input = input0x35d3a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35d43d0() {
   double input = 0.37021;
   input += synapse0x35d4710();
   input += synapse0x35d4750();
   input += synapse0x35d4790();
   input += synapse0x35d47d0();
   input += synapse0x35d4810();
   input += synapse0x35d4850();
   input += synapse0x35d4890();
   input += synapse0x35d48d0();
   input += synapse0x35d4910();
   input += synapse0x35d4950();
   input += synapse0x35d4990();
   input += synapse0x35d49d0();
   input += synapse0x35d4a10();
   input += synapse0x35d4a50();
   input += synapse0x35d4a90();
   input += synapse0x35d4ad0();
   input += synapse0x35d4560();
   input += synapse0x35d45a0();
   input += synapse0x35d1330();
   input += synapse0x35d1370();
   input += synapse0x35d13b0();
   input += synapse0x35d13f0();
   input += synapse0x35d1430();
   input += synapse0x35d1470();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35d43d0() {
   double input = input0x35d43d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35d14b0() {
   double input = -6.74897;
   input += synapse0x35d17f0();
   input += synapse0x35d1830();
   input += synapse0x35d1870();
   input += synapse0x35d18b0();
   input += synapse0x35d18f0();
   input += synapse0x35d1930();
   input += synapse0x35d1970();
   input += synapse0x35d19b0();
   input += synapse0x35d19f0();
   input += synapse0x35d1a30();
   input += synapse0x35d1a70();
   input += synapse0x35d1ab0();
   input += synapse0x35d1af0();
   input += synapse0x35d5c30();
   input += synapse0x35d5c70();
   input += synapse0x35d5cb0();
   input += synapse0x35d1640();
   input += synapse0x35d1680();
   input += synapse0x35d5e00();
   input += synapse0x35d5e40();
   input += synapse0x35d5e80();
   input += synapse0x35d5ec0();
   input += synapse0x35d5f00();
   input += synapse0x35d5f40();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35d14b0() {
   double input = input0x35d14b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35d5f80() {
   double input = -2.51726;
   input += synapse0x35d62c0();
   input += synapse0x35d6300();
   input += synapse0x35d6340();
   input += synapse0x35d6380();
   input += synapse0x35d63c0();
   input += synapse0x35d6400();
   input += synapse0x35d6440();
   input += synapse0x35d6480();
   input += synapse0x35d64c0();
   input += synapse0x35d6500();
   input += synapse0x35d6540();
   input += synapse0x35d6580();
   input += synapse0x35d65c0();
   input += synapse0x35d6600();
   input += synapse0x35d6640();
   input += synapse0x35d6680();
   input += synapse0x35d6110();
   input += synapse0x35d6150();
   input += synapse0x35d67d0();
   input += synapse0x35d6810();
   input += synapse0x35d6850();
   input += synapse0x35d6890();
   input += synapse0x35d68d0();
   input += synapse0x35d6910();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35d5f80() {
   double input = input0x35d5f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35d6950() {
   double input = 0.576815;
   input += synapse0x35d6c90();
   input += synapse0x35d6cd0();
   input += synapse0x35d6d10();
   input += synapse0x35d6d50();
   input += synapse0x35d6d90();
   input += synapse0x35d6dd0();
   input += synapse0x35d6e10();
   input += synapse0x35d6e50();
   input += synapse0x35d6e90();
   input += synapse0x35d6ed0();
   input += synapse0x35d6f10();
   input += synapse0x35d6f50();
   input += synapse0x35d6f90();
   input += synapse0x35d6fd0();
   input += synapse0x35d7010();
   input += synapse0x35d7050();
   input += synapse0x35d6ae0();
   input += synapse0x35d6b20();
   input += synapse0x35d71a0();
   input += synapse0x35d71e0();
   input += synapse0x35d7220();
   input += synapse0x35d7260();
   input += synapse0x35d72a0();
   input += synapse0x35d72e0();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35d6950() {
   double input = input0x35d6950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35d7320() {
   double input = -2.21691;
   input += synapse0x35d7660();
   input += synapse0x35d76a0();
   input += synapse0x35d76e0();
   input += synapse0x35d7720();
   input += synapse0x35d7760();
   input += synapse0x35d77a0();
   input += synapse0x35d77e0();
   input += synapse0x35d7820();
   input += synapse0x35d7860();
   input += synapse0x35d78a0();
   input += synapse0x35d78e0();
   input += synapse0x35d7920();
   input += synapse0x35d7960();
   input += synapse0x35d79a0();
   input += synapse0x35d79e0();
   input += synapse0x35d7a20();
   input += synapse0x35d74b0();
   input += synapse0x35d74f0();
   input += synapse0x35d7b70();
   input += synapse0x35d7bb0();
   input += synapse0x35d7bf0();
   input += synapse0x35d7c30();
   input += synapse0x35d7c70();
   input += synapse0x35d7cb0();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35d7320() {
   double input = input0x35d7320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35d7cf0() {
   double input = 0.656257;
   input += synapse0x35d8030();
   input += synapse0x35c9400();
   input += synapse0x35c9440();
   input += synapse0x35c9740();
   input += synapse0x35c9780();
   input += synapse0x35c9a80();
   input += synapse0x35c9ac0();
   input += synapse0x35c9dc0();
   input += synapse0x35c9e00();
   input += synapse0x35ca100();
   input += synapse0x35ca140();
   input += synapse0x35ca440();
   input += synapse0x35ca480();
   input += synapse0x35ca780();
   input += synapse0x35ca7c0();
   input += synapse0x35caac0();
   input += synapse0x35cab00();
   input += synapse0x35cae00();
   input += synapse0x35cae40();
   input += synapse0x35cb140();
   input += synapse0x35cb180();
   input += synapse0x35cb480();
   input += synapse0x35cb4c0();
   input += synapse0x35cb7c0();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35d7cf0() {
   double input = input0x35d7cf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35d9b00() {
   double input = -1.12934;
   input += synapse0x35cb800();
   input += synapse0x35cc4c0();
   input += synapse0x35cc500();
   input += synapse0x35d7e80();
   input += synapse0x35d7ec0();
   input += synapse0x35cc800();
   input += synapse0x35cc840();
   input += synapse0x33841f0();
   input += synapse0x3384230();
   input += synapse0x35ccf80();
   input += synapse0x35ccfc0();
   input += synapse0x35cd2c0();
   input += synapse0x35cd300();
   input += synapse0x35cd600();
   input += synapse0x35cd640();
   input += synapse0x35cd940();
   input += synapse0x35cd980();
   input += synapse0x35cdc80();
   input += synapse0x35cdcc0();
   input += synapse0x35cdfc0();
   input += synapse0x35ce000();
   input += synapse0x35cbb00();
   input += synapse0x35cbb40();
   input += synapse0x35d9da0();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35d9b00() {
   double input = input0x35d9b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35d9de0() {
   double input = 0.835;
   input += synapse0x35da120();
   input += synapse0x35da160();
   input += synapse0x35da1a0();
   input += synapse0x35da1e0();
   input += synapse0x35da220();
   input += synapse0x35da260();
   input += synapse0x35da2a0();
   input += synapse0x35da2e0();
   input += synapse0x35da320();
   input += synapse0x35da360();
   input += synapse0x35da3a0();
   input += synapse0x35da3e0();
   input += synapse0x35da420();
   input += synapse0x35da460();
   input += synapse0x35da4a0();
   input += synapse0x35da4e0();
   input += synapse0x35d9f70();
   input += synapse0x35d9fb0();
   input += synapse0x35da630();
   input += synapse0x35da670();
   input += synapse0x35da6b0();
   input += synapse0x35da6f0();
   input += synapse0x35da730();
   input += synapse0x35da770();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35d9de0() {
   double input = input0x35d9de0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35da7b0() {
   double input = 0.289068;
   input += synapse0x35daaf0();
   input += synapse0x35dab30();
   input += synapse0x35dab70();
   input += synapse0x35dabb0();
   input += synapse0x35dabf0();
   input += synapse0x35dac30();
   input += synapse0x35dac70();
   input += synapse0x35dacb0();
   input += synapse0x35dacf0();
   input += synapse0x35dad30();
   input += synapse0x35dad70();
   input += synapse0x35dadb0();
   input += synapse0x35dadf0();
   input += synapse0x35dae30();
   input += synapse0x35dae70();
   input += synapse0x35daeb0();
   input += synapse0x35da940();
   input += synapse0x35da980();
   input += synapse0x35db000();
   input += synapse0x35db040();
   input += synapse0x35db080();
   input += synapse0x35db0c0();
   input += synapse0x35db100();
   input += synapse0x35db140();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35da7b0() {
   double input = input0x35da7b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35db180() {
   double input = -0.961526;
   input += synapse0x35db4c0();
   input += synapse0x35db500();
   input += synapse0x35db540();
   input += synapse0x35db580();
   input += synapse0x35db5c0();
   input += synapse0x35db600();
   input += synapse0x35db640();
   input += synapse0x35db680();
   input += synapse0x35db6c0();
   input += synapse0x35db700();
   input += synapse0x35db740();
   input += synapse0x35db780();
   input += synapse0x35db7c0();
   input += synapse0x35db800();
   input += synapse0x35db840();
   input += synapse0x35db880();
   input += synapse0x35db310();
   input += synapse0x35db350();
   input += synapse0x35db9d0();
   input += synapse0x35dba10();
   input += synapse0x35dba50();
   input += synapse0x35dba90();
   input += synapse0x35dbad0();
   input += synapse0x35dbb10();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35db180() {
   double input = input0x35db180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35dbb50() {
   double input = -0.601443;
   input += synapse0x35dbe90();
   input += synapse0x35dbed0();
   input += synapse0x35dbf10();
   input += synapse0x35dbf50();
   input += synapse0x35dbf90();
   input += synapse0x35dbfd0();
   input += synapse0x35dc010();
   input += synapse0x35dc050();
   input += synapse0x35dc090();
   input += synapse0x35dc0d0();
   input += synapse0x35dc110();
   input += synapse0x35dc150();
   input += synapse0x35dc190();
   input += synapse0x35dc1d0();
   input += synapse0x35dc210();
   input += synapse0x35dc250();
   input += synapse0x35dbce0();
   input += synapse0x35dbd20();
   input += synapse0x35dc3a0();
   input += synapse0x35dc3e0();
   input += synapse0x35dc420();
   input += synapse0x35dc460();
   input += synapse0x35dc4a0();
   input += synapse0x35dc4e0();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35dbb50() {
   double input = input0x35dbb50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35dc520() {
   double input = 1.39029;
   input += synapse0x35dc860();
   input += synapse0x35dc8a0();
   input += synapse0x35dc8e0();
   input += synapse0x35dc920();
   input += synapse0x35dc960();
   input += synapse0x35dc9a0();
   input += synapse0x35dc9e0();
   input += synapse0x35dca20();
   input += synapse0x35dca60();
   input += synapse0x35d4c20();
   input += synapse0x35d4c60();
   input += synapse0x35d4ca0();
   input += synapse0x35d4ce0();
   input += synapse0x35d4d20();
   input += synapse0x35d4d60();
   input += synapse0x35d4da0();
   input += synapse0x35dc6b0();
   input += synapse0x35dc6f0();
   input += synapse0x35d4ef0();
   input += synapse0x35d4f30();
   input += synapse0x35d4f70();
   input += synapse0x35d4fb0();
   input += synapse0x35d4ff0();
   input += synapse0x35d5030();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35dc520() {
   double input = input0x35dc520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35d5070() {
   double input = 1.33317;
   input += synapse0x35d53b0();
   input += synapse0x35d53f0();
   input += synapse0x35d5430();
   input += synapse0x35d5470();
   input += synapse0x35d54b0();
   input += synapse0x35d54f0();
   input += synapse0x35d5530();
   input += synapse0x35d5570();
   input += synapse0x35d55b0();
   input += synapse0x35d55f0();
   input += synapse0x35d5630();
   input += synapse0x35d5670();
   input += synapse0x35d56b0();
   input += synapse0x35d56f0();
   input += synapse0x35d5730();
   input += synapse0x35d5770();
   input += synapse0x35d5200();
   input += synapse0x35d5240();
   input += synapse0x35d58c0();
   input += synapse0x35d5900();
   input += synapse0x35d5940();
   input += synapse0x35d5980();
   input += synapse0x35d59c0();
   input += synapse0x35d5a00();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35d5070() {
   double input = input0x35d5070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35d5a40() {
   double input = 0.100063;
   input += synapse0x35d5bd0();
   input += synapse0x35dec60();
   input += synapse0x35deca0();
   input += synapse0x35dece0();
   input += synapse0x35ded20();
   input += synapse0x35ded60();
   input += synapse0x35deda0();
   input += synapse0x35dede0();
   input += synapse0x35dee20();
   input += synapse0x35dee60();
   input += synapse0x35deea0();
   input += synapse0x35deee0();
   input += synapse0x35def20();
   input += synapse0x35def60();
   input += synapse0x35defa0();
   input += synapse0x35defe0();
   input += synapse0x35deab0();
   input += synapse0x35deaf0();
   input += synapse0x35df130();
   input += synapse0x35df170();
   input += synapse0x35df1b0();
   input += synapse0x35df1f0();
   input += synapse0x35df230();
   input += synapse0x35df270();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35d5a40() {
   double input = input0x35d5a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35df2b0() {
   double input = 4.61104;
   input += synapse0x35df5f0();
   input += synapse0x35df630();
   input += synapse0x35df670();
   input += synapse0x35df6b0();
   input += synapse0x35df6f0();
   input += synapse0x35df730();
   input += synapse0x35df770();
   input += synapse0x35df7b0();
   input += synapse0x35df7f0();
   input += synapse0x35df830();
   input += synapse0x35df870();
   input += synapse0x35df8b0();
   input += synapse0x35df8f0();
   input += synapse0x35df930();
   input += synapse0x35df970();
   input += synapse0x35df9b0();
   input += synapse0x35df440();
   input += synapse0x35df480();
   input += synapse0x35dfb00();
   input += synapse0x35dfb40();
   input += synapse0x35dfb80();
   input += synapse0x35dfbc0();
   input += synapse0x35dfc00();
   input += synapse0x35dfc40();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35df2b0() {
   double input = input0x35df2b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35dfc80() {
   double input = -3.27006;
   input += synapse0x35dffc0();
   input += synapse0x35e0000();
   input += synapse0x35e0040();
   input += synapse0x35e0080();
   input += synapse0x35e00c0();
   input += synapse0x35e0100();
   input += synapse0x35e0140();
   input += synapse0x35e0180();
   input += synapse0x35e01c0();
   input += synapse0x35e0200();
   input += synapse0x35e0240();
   input += synapse0x35e0280();
   input += synapse0x35e02c0();
   input += synapse0x35e0300();
   input += synapse0x35e0340();
   input += synapse0x35e0380();
   input += synapse0x35dfe10();
   input += synapse0x35dfe50();
   input += synapse0x35e04d0();
   input += synapse0x35e0510();
   input += synapse0x35e0550();
   input += synapse0x35e0590();
   input += synapse0x35e05d0();
   input += synapse0x35e0610();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35dfc80() {
   double input = input0x35dfc80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35e0650() {
   double input = -0.743949;
   input += synapse0x35e0990();
   input += synapse0x35e09d0();
   input += synapse0x35e0a10();
   input += synapse0x35e0a50();
   input += synapse0x35e0a90();
   input += synapse0x35e0ad0();
   input += synapse0x35e0b10();
   input += synapse0x35e0b50();
   input += synapse0x35e0b90();
   input += synapse0x35e0bd0();
   input += synapse0x35e0c10();
   input += synapse0x35e0c50();
   input += synapse0x35e0c90();
   input += synapse0x35e0cd0();
   input += synapse0x35e0d10();
   input += synapse0x35e0d50();
   input += synapse0x35e07e0();
   input += synapse0x35e0820();
   input += synapse0x35e0ea0();
   input += synapse0x35e0ee0();
   input += synapse0x35e0f20();
   input += synapse0x35e0f60();
   input += synapse0x35e0fa0();
   input += synapse0x35e0fe0();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35e0650() {
   double input = input0x35e0650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35e1020() {
   double input = -0.860402;
   input += synapse0x35e1360();
   input += synapse0x35e13a0();
   input += synapse0x35e13e0();
   input += synapse0x35e1420();
   input += synapse0x35e1460();
   input += synapse0x35e14a0();
   input += synapse0x35e14e0();
   input += synapse0x35e1520();
   input += synapse0x35e1560();
   input += synapse0x35e15a0();
   input += synapse0x35e15e0();
   input += synapse0x35e1620();
   input += synapse0x35e1660();
   input += synapse0x35e16a0();
   input += synapse0x35e16e0();
   input += synapse0x35e1720();
   input += synapse0x35e11b0();
   input += synapse0x35e11f0();
   input += synapse0x35e1870();
   input += synapse0x35e18b0();
   input += synapse0x35e18f0();
   input += synapse0x35e1930();
   input += synapse0x35e1970();
   input += synapse0x35e19b0();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35e1020() {
   double input = input0x35e1020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35e19f0() {
   double input = -2.34486;
   input += synapse0x35e1d30();
   input += synapse0x35e1d70();
   input += synapse0x35e1db0();
   input += synapse0x35e1df0();
   input += synapse0x35e1e30();
   input += synapse0x35e1e70();
   input += synapse0x35e1eb0();
   input += synapse0x35e1ef0();
   input += synapse0x35e1f30();
   input += synapse0x35e1f70();
   input += synapse0x35e1fb0();
   input += synapse0x35e1ff0();
   input += synapse0x35e2030();
   input += synapse0x35e2070();
   input += synapse0x35e20b0();
   input += synapse0x35e20f0();
   input += synapse0x35e1b80();
   input += synapse0x35e1bc0();
   input += synapse0x35e2240();
   input += synapse0x35e2280();
   input += synapse0x35e22c0();
   input += synapse0x35e2300();
   input += synapse0x35e2340();
   input += synapse0x35e2380();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35e19f0() {
   double input = input0x35e19f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35e23c0() {
   double input = 1.87066;
   input += synapse0x35e2700();
   input += synapse0x35e2740();
   input += synapse0x35e2780();
   input += synapse0x35e27c0();
   input += synapse0x35e2800();
   input += synapse0x35e2840();
   input += synapse0x35e2880();
   input += synapse0x35e28c0();
   input += synapse0x35e2900();
   input += synapse0x35e2940();
   input += synapse0x35e2980();
   input += synapse0x35e29c0();
   input += synapse0x35e2a00();
   input += synapse0x35e2a40();
   input += synapse0x35e2a80();
   input += synapse0x35e2ac0();
   input += synapse0x35e2550();
   input += synapse0x35e2590();
   input += synapse0x35e2c10();
   input += synapse0x35e2c50();
   input += synapse0x35e2c90();
   input += synapse0x35e2cd0();
   input += synapse0x35e2d10();
   input += synapse0x35e2d50();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35e23c0() {
   double input = input0x35e23c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35e2d90() {
   double input = 0.69615;
   input += synapse0x35e30d0();
   input += synapse0x35e3110();
   input += synapse0x35e3150();
   input += synapse0x35e3190();
   input += synapse0x35e31d0();
   input += synapse0x35e3210();
   input += synapse0x35e3250();
   input += synapse0x35e3290();
   input += synapse0x35e32d0();
   input += synapse0x35e3310();
   input += synapse0x35e3350();
   input += synapse0x35e3390();
   input += synapse0x35e33d0();
   input += synapse0x35e3410();
   input += synapse0x35e3450();
   input += synapse0x35e3490();
   input += synapse0x35e2f20();
   input += synapse0x35e2f60();
   input += synapse0x35e35e0();
   input += synapse0x35e3620();
   input += synapse0x35e3660();
   input += synapse0x35e36a0();
   input += synapse0x35e36e0();
   input += synapse0x35e3720();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35e2d90() {
   double input = input0x35e2d90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35e3760() {
   double input = -1.76811;
   input += synapse0x35e3aa0();
   input += synapse0x35d8070();
   input += synapse0x35d80b0();
   input += synapse0x35d80f0();
   input += synapse0x35d8340();
   input += synapse0x35d8380();
   input += synapse0x35d83c0();
   input += synapse0x35d8610();
   input += synapse0x35d8650();
   input += synapse0x35d88a0();
   input += synapse0x35d88e0();
   input += synapse0x35d8920();
   input += synapse0x35d8b70();
   input += synapse0x35d8bb0();
   input += synapse0x35d8e00();
   input += synapse0x35d8e40();
   input += synapse0x35e38f0();
   input += synapse0x35e3930();
   input += synapse0x35d8f90();
   input += synapse0x35d94a0();
   input += synapse0x35d94e0();
   input += synapse0x35d9520();
   input += synapse0x35d9770();
   input += synapse0x35d97b0();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35e3760() {
   double input = input0x35e3760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35d97f0() {
   double input = -1.56433;
   input += synapse0x35d9060();
   input += synapse0x35d90a0();
   input += synapse0x35d90e0();
   input += synapse0x35d9120();
   input += synapse0x35d9aa0();
   input += synapse0x35e5df0();
   input += synapse0x35e5e30();
   input += synapse0x35e5e70();
   input += synapse0x35e5eb0();
   input += synapse0x35e5ef0();
   input += synapse0x35e5f30();
   input += synapse0x35e5f70();
   input += synapse0x35e5fb0();
   input += synapse0x35e5ff0();
   input += synapse0x35e6030();
   input += synapse0x35e6070();
   input += synapse0x35d9980();
   input += synapse0x35d99c0();
   input += synapse0x35e61c0();
   input += synapse0x35e6200();
   input += synapse0x35e6240();
   input += synapse0x35e6280();
   input += synapse0x35e62c0();
   input += synapse0x35e6300();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35d97f0() {
   double input = input0x35d97f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35e6340() {
   double input = 1.8837;
   input += synapse0x35e6680();
   input += synapse0x35e66c0();
   input += synapse0x35e6700();
   input += synapse0x35e6740();
   input += synapse0x35e6780();
   input += synapse0x35e67c0();
   input += synapse0x35e6800();
   input += synapse0x35e6840();
   input += synapse0x35e6880();
   input += synapse0x35e68c0();
   input += synapse0x35e6900();
   input += synapse0x35e6940();
   input += synapse0x35e6980();
   input += synapse0x35e69c0();
   input += synapse0x35e6a00();
   input += synapse0x35e6a40();
   input += synapse0x35e64d0();
   input += synapse0x35e6510();
   input += synapse0x35e6b90();
   input += synapse0x35e6bd0();
   input += synapse0x35e6c10();
   input += synapse0x35e6c50();
   input += synapse0x35e6c90();
   input += synapse0x35e6cd0();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35e6340() {
   double input = input0x35e6340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35e6d10() {
   double input = 0.874898;
   input += synapse0x35e7050();
   input += synapse0x35e7090();
   input += synapse0x35e70d0();
   input += synapse0x35e7110();
   input += synapse0x35e7150();
   input += synapse0x35e7190();
   input += synapse0x35e71d0();
   input += synapse0x35e7210();
   input += synapse0x35e7250();
   input += synapse0x35e7290();
   input += synapse0x35e72d0();
   input += synapse0x35e7310();
   input += synapse0x35e7350();
   input += synapse0x35e7390();
   input += synapse0x35e73d0();
   input += synapse0x35e7410();
   input += synapse0x35e6ea0();
   input += synapse0x35e6ee0();
   input += synapse0x35e7560();
   input += synapse0x35e75a0();
   input += synapse0x35e75e0();
   input += synapse0x35e7620();
   input += synapse0x35e7660();
   input += synapse0x35e76a0();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35e6d10() {
   double input = input0x35e6d10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35e76e0() {
   double input = -0.983876;
   input += synapse0x35e7a20();
   input += synapse0x35e7a60();
   input += synapse0x35e7aa0();
   input += synapse0x35e7ae0();
   input += synapse0x35e7b20();
   input += synapse0x35e7b60();
   input += synapse0x35e7ba0();
   input += synapse0x35e7be0();
   input += synapse0x35e7c20();
   input += synapse0x35e7c60();
   input += synapse0x35e7ca0();
   input += synapse0x35e7ce0();
   input += synapse0x35e7d20();
   input += synapse0x35e7d60();
   input += synapse0x35e7da0();
   input += synapse0x35e7de0();
   input += synapse0x35e7870();
   input += synapse0x35e78b0();
   input += synapse0x35e7f30();
   input += synapse0x35e7f70();
   input += synapse0x35e7fb0();
   input += synapse0x35e7ff0();
   input += synapse0x35e8030();
   input += synapse0x35e8070();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35e76e0() {
   double input = input0x35e76e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35e80b0() {
   double input = -4.62219;
   input += synapse0x35e83f0();
   input += synapse0x35e8430();
   input += synapse0x35e8470();
   input += synapse0x35e84b0();
   input += synapse0x35e84f0();
   input += synapse0x35e8530();
   input += synapse0x35e8570();
   input += synapse0x35e85b0();
   input += synapse0x35e85f0();
   input += synapse0x35e8630();
   input += synapse0x35e8670();
   input += synapse0x35e86b0();
   input += synapse0x35e86f0();
   input += synapse0x35e8730();
   input += synapse0x35e8770();
   input += synapse0x35e87b0();
   input += synapse0x35e8240();
   input += synapse0x35e8280();
   input += synapse0x35e8900();
   input += synapse0x35e8940();
   input += synapse0x35e8980();
   input += synapse0x35e89c0();
   input += synapse0x35e8a00();
   input += synapse0x35e8a40();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35e80b0() {
   double input = input0x35e80b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35e8a80() {
   double input = -3.0887;
   input += synapse0x35e8dc0();
   input += synapse0x35e8e00();
   input += synapse0x35e8e40();
   input += synapse0x35e8e80();
   input += synapse0x35e8ec0();
   input += synapse0x35e8f00();
   input += synapse0x35e8f40();
   input += synapse0x35e8f80();
   input += synapse0x35e8fc0();
   input += synapse0x35e9000();
   input += synapse0x35e9040();
   input += synapse0x35e9080();
   input += synapse0x35e90c0();
   input += synapse0x35e9100();
   input += synapse0x35e9140();
   input += synapse0x35e9180();
   input += synapse0x35e8c10();
   input += synapse0x35e8c50();
   input += synapse0x35e92d0();
   input += synapse0x35e9310();
   input += synapse0x35e9350();
   input += synapse0x35e9390();
   input += synapse0x35e93d0();
   input += synapse0x35e9410();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35e8a80() {
   double input = input0x35e8a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35e9450() {
   double input = 2.28621;
   input += synapse0x35e9790();
   input += synapse0x35e97d0();
   input += synapse0x35e9810();
   input += synapse0x35e9850();
   input += synapse0x35e9890();
   input += synapse0x35e98d0();
   input += synapse0x35e9910();
   input += synapse0x35e9950();
   input += synapse0x35e9990();
   input += synapse0x35e99d0();
   input += synapse0x35e9a10();
   input += synapse0x35e9a50();
   input += synapse0x35e9a90();
   input += synapse0x35e9ad0();
   input += synapse0x35e9b10();
   input += synapse0x35e9b50();
   input += synapse0x35e95e0();
   input += synapse0x35e9620();
   input += synapse0x35e9ca0();
   input += synapse0x35e9ce0();
   input += synapse0x35e9d20();
   input += synapse0x35e9d60();
   input += synapse0x35e9da0();
   input += synapse0x35e9de0();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35e9450() {
   double input = input0x35e9450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35e9e20() {
   double input = -6.11032;
   input += synapse0x35ea160();
   input += synapse0x35ea1a0();
   input += synapse0x35ea1e0();
   input += synapse0x35ea220();
   input += synapse0x35ea260();
   input += synapse0x35ea2a0();
   input += synapse0x35ea2e0();
   input += synapse0x35ea320();
   input += synapse0x35ea360();
   input += synapse0x35ea3a0();
   input += synapse0x35ea3e0();
   input += synapse0x35ea420();
   input += synapse0x35ea460();
   input += synapse0x35ea4a0();
   input += synapse0x35ea4e0();
   input += synapse0x35ea520();
   input += synapse0x35e9fb0();
   input += synapse0x35e9ff0();
   input += synapse0x35ea670();
   input += synapse0x35ea6b0();
   input += synapse0x35ea6f0();
   input += synapse0x35ea730();
   input += synapse0x35ea770();
   input += synapse0x35ea7b0();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35e9e20() {
   double input = input0x35e9e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35ea7f0() {
   double input = 0.601166;
   input += synapse0x35d3260();
   input += synapse0x35d32a0();
   input += synapse0x35d32e0();
   input += synapse0x35d3320();
   input += synapse0x35d3360();
   input += synapse0x35d33a0();
   input += synapse0x35d33e0();
   input += synapse0x35d3420();
   input += synapse0x35eaf40();
   input += synapse0x35eaf80();
   input += synapse0x35eafc0();
   input += synapse0x35eb000();
   input += synapse0x35eb040();
   input += synapse0x35eb080();
   input += synapse0x35eb0c0();
   input += synapse0x35eb100();
   input += synapse0x35ea980();
   input += synapse0x35ea9c0();
   input += synapse0x35eb250();
   input += synapse0x35eb290();
   input += synapse0x35eb2d0();
   input += synapse0x35eb310();
   input += synapse0x35eb350();
   input += synapse0x35eb390();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35ea7f0() {
   double input = input0x35ea7f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35eb3d0() {
   double input = -1.27935;
   input += synapse0x35eb710();
   input += synapse0x35eb750();
   input += synapse0x35eb790();
   input += synapse0x35eb7d0();
   input += synapse0x35eb810();
   input += synapse0x35eb850();
   input += synapse0x35eb890();
   input += synapse0x35eb8d0();
   input += synapse0x35eb910();
   input += synapse0x35eb950();
   input += synapse0x35eb990();
   input += synapse0x35eb9d0();
   input += synapse0x35eba10();
   input += synapse0x35eba50();
   input += synapse0x35eba90();
   input += synapse0x35ebad0();
   input += synapse0x35eb560();
   input += synapse0x35eb5a0();
   input += synapse0x35ebc20();
   input += synapse0x35ebc60();
   input += synapse0x35ebca0();
   input += synapse0x35ebce0();
   input += synapse0x35ebd20();
   input += synapse0x35ebd60();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35eb3d0() {
   double input = input0x35eb3d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35ebda0() {
   double input = 0.50633;
   input += synapse0x35ec0e0();
   input += synapse0x35ec120();
   input += synapse0x35ec160();
   input += synapse0x35ec1a0();
   input += synapse0x35ec1e0();
   input += synapse0x35ec220();
   input += synapse0x35ec260();
   input += synapse0x35ec2a0();
   input += synapse0x35ec2e0();
   input += synapse0x35ec320();
   input += synapse0x35ec360();
   input += synapse0x35ec3a0();
   input += synapse0x35ec3e0();
   input += synapse0x35ec420();
   input += synapse0x35ec460();
   input += synapse0x35ec4a0();
   input += synapse0x35ebf30();
   input += synapse0x35ebf70();
   input += synapse0x35dcaa0();
   input += synapse0x35dcae0();
   input += synapse0x35dcb20();
   input += synapse0x35dcb60();
   input += synapse0x35dcba0();
   input += synapse0x35dcbe0();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35ebda0() {
   double input = input0x35ebda0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35dcc20() {
   double input = 2.10603;
   input += synapse0x35dcf60();
   input += synapse0x35dcfa0();
   input += synapse0x35dcfe0();
   input += synapse0x35dd020();
   input += synapse0x35dd060();
   input += synapse0x35dd0a0();
   input += synapse0x35dd0e0();
   input += synapse0x35dd120();
   input += synapse0x35dd160();
   input += synapse0x35dd1a0();
   input += synapse0x35dd1e0();
   input += synapse0x35dd220();
   input += synapse0x35dd260();
   input += synapse0x35dd2a0();
   input += synapse0x35dd2e0();
   input += synapse0x35dd320();
   input += synapse0x35dcdb0();
   input += synapse0x35dcdf0();
   input += synapse0x35dd470();
   input += synapse0x35dd4b0();
   input += synapse0x35dd4f0();
   input += synapse0x35dd530();
   input += synapse0x35dd570();
   input += synapse0x35dd5b0();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35dcc20() {
   double input = input0x35dcc20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35dd5f0() {
   double input = -0.268201;
   input += synapse0x35dd930();
   input += synapse0x35dd970();
   input += synapse0x35dd9b0();
   input += synapse0x35dd9f0();
   input += synapse0x35dda30();
   input += synapse0x35dda70();
   input += synapse0x35ddab0();
   input += synapse0x35ddaf0();
   input += synapse0x35ddb30();
   input += synapse0x35ddb70();
   input += synapse0x35ddbb0();
   input += synapse0x35ddbf0();
   input += synapse0x35ddc30();
   input += synapse0x35ddc70();
   input += synapse0x35ddcb0();
   input += synapse0x35ddcf0();
   input += synapse0x35dd780();
   input += synapse0x35dd7c0();
   input += synapse0x35dde40();
   input += synapse0x35dde80();
   input += synapse0x35ddec0();
   input += synapse0x35ddf00();
   input += synapse0x35ddf40();
   input += synapse0x35ddf80();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35dd5f0() {
   double input = input0x35dd5f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35ddfc0() {
   double input = 1.02543;
   input += synapse0x35de300();
   input += synapse0x35de340();
   input += synapse0x35de380();
   input += synapse0x35de3c0();
   input += synapse0x35de400();
   input += synapse0x35de440();
   input += synapse0x35de480();
   input += synapse0x35de4c0();
   input += synapse0x35de500();
   input += synapse0x35de540();
   input += synapse0x35de580();
   input += synapse0x35de5c0();
   input += synapse0x35de600();
   input += synapse0x35de640();
   input += synapse0x35de680();
   input += synapse0x35de6c0();
   input += synapse0x35de150();
   input += synapse0x35de190();
   input += synapse0x35de810();
   input += synapse0x35de850();
   input += synapse0x35de890();
   input += synapse0x35de8d0();
   input += synapse0x35de910();
   input += synapse0x35de950();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35ddfc0() {
   double input = input0x35ddfc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35f0600() {
   double input = 1.07916;
   input += synapse0x35f0820();
   input += synapse0x35f0860();
   input += synapse0x35f08a0();
   input += synapse0x35f08e0();
   input += synapse0x35f0920();
   input += synapse0x35f0960();
   input += synapse0x35f09a0();
   input += synapse0x35f09e0();
   input += synapse0x35f0a20();
   input += synapse0x35f0a60();
   input += synapse0x35f0aa0();
   input += synapse0x35f0ae0();
   input += synapse0x35f0b20();
   input += synapse0x35f0b60();
   input += synapse0x35f0ba0();
   input += synapse0x35f0be0();
   input += synapse0x35de990();
   input += synapse0x35de9d0();
   input += synapse0x35f0d30();
   input += synapse0x35f0d70();
   input += synapse0x35f0db0();
   input += synapse0x35f0df0();
   input += synapse0x35f0e30();
   input += synapse0x35f0e70();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35f0600() {
   double input = input0x35f0600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35f0eb0() {
   double input = 2.063;
   input += synapse0x35f11f0();
   input += synapse0x35f1230();
   input += synapse0x35f1270();
   input += synapse0x35f12b0();
   input += synapse0x35f12f0();
   input += synapse0x35f1330();
   input += synapse0x35f1370();
   input += synapse0x35f13b0();
   input += synapse0x35f13f0();
   input += synapse0x35f1430();
   input += synapse0x35f1470();
   input += synapse0x35f14b0();
   input += synapse0x35f14f0();
   input += synapse0x35f1530();
   input += synapse0x35f1570();
   input += synapse0x35f15b0();
   input += synapse0x35f1040();
   input += synapse0x35f1080();
   input += synapse0x35f1700();
   input += synapse0x35f1740();
   input += synapse0x35f1780();
   input += synapse0x35f17c0();
   input += synapse0x35f1800();
   input += synapse0x35f1840();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35f0eb0() {
   double input = input0x35f0eb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35f1880() {
   double input = 5.36091;
   input += synapse0x35f1bc0();
   input += synapse0x35f1c00();
   input += synapse0x35f1c40();
   input += synapse0x35f1c80();
   input += synapse0x35f1cc0();
   input += synapse0x35f1d00();
   input += synapse0x35f1d40();
   input += synapse0x35f1d80();
   input += synapse0x35f1dc0();
   input += synapse0x35f1e00();
   input += synapse0x35f1e40();
   input += synapse0x35f1e80();
   input += synapse0x35f1ec0();
   input += synapse0x35f1f00();
   input += synapse0x35f1f40();
   input += synapse0x35f1f80();
   input += synapse0x35f1a10();
   input += synapse0x35f1a50();
   input += synapse0x35f20d0();
   input += synapse0x35f2110();
   input += synapse0x35f2150();
   input += synapse0x35f2190();
   input += synapse0x35f21d0();
   input += synapse0x35f2210();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35f1880() {
   double input = input0x35f1880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35f2250() {
   double input = -0.0594848;
   input += synapse0x35f2590();
   input += synapse0x35f25d0();
   input += synapse0x35f2610();
   input += synapse0x35f2650();
   input += synapse0x35f2690();
   input += synapse0x35f26d0();
   input += synapse0x35f2710();
   input += synapse0x35f2750();
   input += synapse0x35f2790();
   input += synapse0x35f27d0();
   input += synapse0x35f2810();
   input += synapse0x35f2850();
   input += synapse0x35f2890();
   input += synapse0x35f28d0();
   input += synapse0x35f2910();
   input += synapse0x35f2950();
   input += synapse0x35f23e0();
   input += synapse0x35f2420();
   input += synapse0x35f2aa0();
   input += synapse0x35f2ae0();
   input += synapse0x35f2b20();
   input += synapse0x35f2b60();
   input += synapse0x35f2ba0();
   input += synapse0x35f2be0();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35f2250() {
   double input = input0x35f2250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35f9450() {
   double input = 0.117568;
   input += synapse0x35cf170();
   input += synapse0x35cf1b0();
   input += synapse0x35d0690();
   input += synapse0x35d06d0();
   input += synapse0x35d1060();
   input += synapse0x35d10a0();
   input += synapse0x35d1e30();
   input += synapse0x35d1e70();
   input += synapse0x35d2800();
   input += synapse0x35d2840();
   input += synapse0x35d31d0();
   input += synapse0x35d3210();
   input += synapse0x35d3cb0();
   input += synapse0x35d3cf0();
   input += synapse0x35d4680();
   input += synapse0x35d46c0();
   input += synapse0x35d1760();
   input += synapse0x35d17a0();
   input += synapse0x35d6230();
   input += synapse0x35d6270();
   input += synapse0x35d6c00();
   input += synapse0x35d6c40();
   input += synapse0x35d75d0();
   input += synapse0x35d7610();
   input += synapse0x35d7fa0();
   input += synapse0x35d7fe0();
   input += synapse0x35cc180();
   input += synapse0x35cc1c0();
   input += synapse0x35da090();
   input += synapse0x35da0d0();
   input += synapse0x35daa60();
   input += synapse0x35daaa0();
   input += synapse0x35db430();
   input += synapse0x35db470();
   input += synapse0x35dbe00();
   input += synapse0x35dbe40();
   input += synapse0x35dc7d0();
   input += synapse0x35dc810();
   input += synapse0x35d5320();
   input += synapse0x35d5360();
   input += synapse0x35debd0();
   input += synapse0x35dec10();
   input += synapse0x35df560();
   input += synapse0x35df5a0();
   input += synapse0x35dff30();
   input += synapse0x35dff70();
   input += synapse0x35e0900();
   input += synapse0x35e0940();
   input += synapse0x35e12d0();
   input += synapse0x35e1310();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35f9450() {
   double input = input0x35f9450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35f97f0() {
   double input = 1.41044;
   input += synapse0x35e3a10();
   input += synapse0x35e3a50();
   input += synapse0x35d8fd0();
   input += synapse0x35d9010();
   input += synapse0x35e65f0();
   input += synapse0x35e6630();
   input += synapse0x35e6fc0();
   input += synapse0x35e7000();
   input += synapse0x35e7990();
   input += synapse0x35e79d0();
   input += synapse0x35e8360();
   input += synapse0x35e83a0();
   input += synapse0x35e8d30();
   input += synapse0x35e8d70();
   input += synapse0x35e9700();
   input += synapse0x35e9740();
   input += synapse0x35ea0d0();
   input += synapse0x35ea110();
   input += synapse0x35eaaa0();
   input += synapse0x35eaae0();
   input += synapse0x35eb680();
   input += synapse0x35eb6c0();
   input += synapse0x35ec050();
   input += synapse0x35ec090();
   input += synapse0x35dced0();
   input += synapse0x35dcf10();
   input += synapse0x35dd8a0();
   input += synapse0x35dd8e0();
   input += synapse0x35de270();
   input += synapse0x35de2b0();
   input += synapse0x35f0790();
   input += synapse0x35f07d0();
   input += synapse0x35f1160();
   input += synapse0x35f11a0();
   input += synapse0x35f1b30();
   input += synapse0x35f1b70();
   input += synapse0x35f2500();
   input += synapse0x35f2540();
   input += synapse0x35ce430();
   input += synapse0x35ce470();
   input += synapse0x35e1ca0();
   input += synapse0x35e1ce0();
   input += synapse0x35f2c20();
   input += synapse0x35f2c60();
   input += synapse0x35f2ca0();
   input += synapse0x35f2ce0();
   input += synapse0x35f9b90();
   input += synapse0x35f9bd0();
   input += synapse0x35f9c10();
   input += synapse0x35f9c50();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35f97f0() {
   double input = input0x35f97f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35f9c90() {
   double input = 1.56408;
   input += synapse0x35f9fd0();
   input += synapse0x35fa010();
   input += synapse0x35fa050();
   input += synapse0x35fa090();
   input += synapse0x35fa0d0();
   input += synapse0x35fa110();
   input += synapse0x35fa150();
   input += synapse0x35fa190();
   input += synapse0x35fa1d0();
   input += synapse0x35fa210();
   input += synapse0x35fa250();
   input += synapse0x35fa290();
   input += synapse0x35fa2d0();
   input += synapse0x35fa310();
   input += synapse0x35fa350();
   input += synapse0x35fa390();
   input += synapse0x35f9e20();
   input += synapse0x35f9e60();
   input += synapse0x35fa4e0();
   input += synapse0x35fa520();
   input += synapse0x35fa560();
   input += synapse0x35fa5a0();
   input += synapse0x35fa5e0();
   input += synapse0x35fa620();
   input += synapse0x35fa660();
   input += synapse0x35fa6a0();
   input += synapse0x35fa6e0();
   input += synapse0x35fa720();
   input += synapse0x35fa760();
   input += synapse0x35fa7a0();
   input += synapse0x35fa7e0();
   input += synapse0x35fa820();
   input += synapse0x35fa3d0();
   input += synapse0x35fa410();
   input += synapse0x35fa450();
   input += synapse0x35fa490();
   input += synapse0x35faa70();
   input += synapse0x35faab0();
   input += synapse0x35faaf0();
   input += synapse0x35fab30();
   input += synapse0x35fab70();
   input += synapse0x35fabb0();
   input += synapse0x35fabf0();
   input += synapse0x35fac30();
   input += synapse0x35fac70();
   input += synapse0x35facb0();
   input += synapse0x35facf0();
   input += synapse0x35fad30();
   input += synapse0x35fad70();
   input += synapse0x35fadb0();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35f9c90() {
   double input = input0x35f9c90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35fadf0() {
   double input = 1.98952;
   input += synapse0x35fb130();
   input += synapse0x35fb170();
   input += synapse0x35fb1b0();
   input += synapse0x35fb1f0();
   input += synapse0x35fb230();
   input += synapse0x35fb270();
   input += synapse0x35fb2b0();
   input += synapse0x35fb2f0();
   input += synapse0x35fb330();
   input += synapse0x35fb370();
   input += synapse0x35fb3b0();
   input += synapse0x35fb3f0();
   input += synapse0x35fb430();
   input += synapse0x35fb470();
   input += synapse0x35fb4b0();
   input += synapse0x35fb4f0();
   input += synapse0x35faf80();
   input += synapse0x35fafc0();
   input += synapse0x35fb640();
   input += synapse0x35fb680();
   input += synapse0x35fb6c0();
   input += synapse0x35fb700();
   input += synapse0x35fb740();
   input += synapse0x35fb780();
   input += synapse0x35fb7c0();
   input += synapse0x35fb800();
   input += synapse0x35fb840();
   input += synapse0x35fb880();
   input += synapse0x35fb8c0();
   input += synapse0x35fb900();
   input += synapse0x35fb940();
   input += synapse0x35fb980();
   input += synapse0x35fb530();
   input += synapse0x35fb570();
   input += synapse0x35fb5b0();
   input += synapse0x35fb5f0();
   input += synapse0x35fbbd0();
   input += synapse0x35fbc10();
   input += synapse0x35fbc50();
   input += synapse0x35fbc90();
   input += synapse0x35fbcd0();
   input += synapse0x35fbd10();
   input += synapse0x35fbd50();
   input += synapse0x35fbd90();
   input += synapse0x35fbdd0();
   input += synapse0x35fbe10();
   input += synapse0x35fbe50();
   input += synapse0x35fbe90();
   input += synapse0x35fbed0();
   input += synapse0x35fbf10();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35fadf0() {
   double input = input0x35fadf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35fbf50() {
   double input = 2.46087;
   input += synapse0x35fc290();
   input += synapse0x35fc2d0();
   input += synapse0x35fc310();
   input += synapse0x35fc350();
   input += synapse0x35fc390();
   input += synapse0x35fc3d0();
   input += synapse0x35fc410();
   input += synapse0x35fc450();
   input += synapse0x35fc490();
   input += synapse0x35fc4d0();
   input += synapse0x35fc510();
   input += synapse0x35fc550();
   input += synapse0x35fc590();
   input += synapse0x35fc5d0();
   input += synapse0x35fc610();
   input += synapse0x35fc650();
   input += synapse0x35fc0e0();
   input += synapse0x35fc120();
   input += synapse0x35fc7a0();
   input += synapse0x35fc7e0();
   input += synapse0x35fc820();
   input += synapse0x35fc860();
   input += synapse0x35fc8a0();
   input += synapse0x35fc8e0();
   input += synapse0x35fc920();
   input += synapse0x35fc960();
   input += synapse0x35fc9a0();
   input += synapse0x35fc9e0();
   input += synapse0x35fca20();
   input += synapse0x35fca60();
   input += synapse0x35fcaa0();
   input += synapse0x35fcae0();
   input += synapse0x35fc690();
   input += synapse0x35fc6d0();
   input += synapse0x35fc710();
   input += synapse0x35fc750();
   input += synapse0x35fcd30();
   input += synapse0x35fcd70();
   input += synapse0x35fcdb0();
   input += synapse0x35fcdf0();
   input += synapse0x35fce30();
   input += synapse0x35fce70();
   input += synapse0x35fceb0();
   input += synapse0x35fcef0();
   input += synapse0x35fcf30();
   input += synapse0x35fcf70();
   input += synapse0x35fcfb0();
   input += synapse0x35fcff0();
   input += synapse0x35fd030();
   input += synapse0x35fd070();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35fbf50() {
   double input = input0x35fbf50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge2m::input0x35fd0b0() {
   double input = -2.68413;
   input += synapse0x35fd2d0();
   input += synapse0x35fd310();
   input += synapse0x35fd350();
   input += synapse0x35fd390();
   input += synapse0x35fd3d0();
   return input;
}

double NNfunction_nn_chi1_charge2m::neuron0x35fd0b0() {
   double input = input0x35fd0b0();
   return (input * 1)+0;
}

double NNfunction_nn_chi1_charge2m::synapse0x35c91f0() {
   return (neuron0x35c9270()*-0.716951);
}

double NNfunction_nn_chi1_charge2m::synapse0x35c9230() {
   return (neuron0x35c9520()*-3.37336);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ce4c0() {
   return (neuron0x35c9860()*1.9527);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ce500() {
   return (neuron0x35c9ba0()*-0.832645);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ce540() {
   return (neuron0x35c9ee0()*0.125486);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ce580() {
   return (neuron0x35ca220()*0.0333244);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ce5c0() {
   return (neuron0x35ca560()*0.0653119);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ce600() {
   return (neuron0x35ca8a0()*0.377977);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ce640() {
   return (neuron0x35cabe0()*-0.299889);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ce680() {
   return (neuron0x35caf20()*0.328052);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ce6c0() {
   return (neuron0x35cb260()*0.718015);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ce700() {
   return (neuron0x35cb5a0()*0.488015);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ce740() {
   return (neuron0x35cb8e0()*0.96832);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ce780() {
   return (neuron0x35cbc20()*-0.400956);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ce7c0() {
   return (neuron0x35cbf60()*0.434691);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ce800() {
   return (neuron0x35cc2a0()*0.299104);
}

double NNfunction_nn_chi1_charge2m::synapse0x35c9160() {
   return (neuron0x35cc5e0()*-0.0330436);
}

double NNfunction_nn_chi1_charge2m::synapse0x35c91a0() {
   return (neuron0x35ccb40()*-0.294296);
}

double NNfunction_nn_chi1_charge2m::synapse0x3384310() {
   return (neuron0x35ccd60()*-0.000741473);
}

double NNfunction_nn_chi1_charge2m::synapse0x3384350() {
   return (neuron0x35cd0a0()*0.0888866);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cea60() {
   return (neuron0x35cd3e0()*0.00250414);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ceaa0() {
   return (neuron0x35cd720()*0.100617);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ceae0() {
   return (neuron0x35cda60()*0.105632);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ceb20() {
   return (neuron0x35cdda0()*1.21353);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ceea0() {
   return (neuron0x35c9270()*-0.0213612);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ceee0() {
   return (neuron0x35c9520()*13.8146);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cef20() {
   return (neuron0x35c9860()*0.325085);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cef60() {
   return (neuron0x35c9ba0()*0.0146829);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cefa0() {
   return (neuron0x35c9ee0()*-0.011286);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cefe0() {
   return (neuron0x35ca220()*0.0171012);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cf020() {
   return (neuron0x35ca560()*-0.0292247);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cf060() {
   return (neuron0x35ca8a0()*-0.0316962);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cf0a0() {
   return (neuron0x35cabe0()*0.0114804);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ce950() {
   return (neuron0x35caf20()*-0.0130164);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ce990() {
   return (neuron0x35cb260()*-0.0180771);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ce9d0() {
   return (neuron0x35cb5a0()*-0.420494);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cea10() {
   return (neuron0x35cb8e0()*-0.0238655);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cf2f0() {
   return (neuron0x35cbc20()*0.0103034);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cf330() {
   return (neuron0x35cbf60()*-0.0244238);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cf370() {
   return (neuron0x35cc2a0()*0.00870355);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cecf0() {
   return (neuron0x35cc5e0()*-0.0324934);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ced30() {
   return (neuron0x35ccb40()*0.0150992);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cf4c0() {
   return (neuron0x35ccd60()*-0.02768);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cf500() {
   return (neuron0x35cd0a0()*-0.0184927);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cf540() {
   return (neuron0x35cd3e0()*0.0135159);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cf580() {
   return (neuron0x35cd720()*-0.0269813);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cf5c0() {
   return (neuron0x35cda60()*0.00122417);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cf600() {
   return (neuron0x35cdda0()*-0.021754);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cf980() {
   return (neuron0x35c9270()*0.0402559);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cf9c0() {
   return (neuron0x35c9520()*-2.35944);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cfa00() {
   return (neuron0x35c9860()*0.432975);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cfa40() {
   return (neuron0x35c9ba0()*-0.016567);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cfa80() {
   return (neuron0x35c9ee0()*-0.0254047);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cfac0() {
   return (neuron0x35ca220()*0.14261);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cfb00() {
   return (neuron0x35ca560()*0.237665);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cfb40() {
   return (neuron0x35ca8a0()*0.0152719);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cfb80() {
   return (neuron0x35cabe0()*-0.0323557);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cfbc0() {
   return (neuron0x35caf20()*-0.0752262);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cfc00() {
   return (neuron0x35cb260()*0.416901);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cfc40() {
   return (neuron0x35cb5a0()*2.53235);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cfc80() {
   return (neuron0x35cb8e0()*0.156867);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cfcc0() {
   return (neuron0x35cbc20()*-0.221638);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cfd00() {
   return (neuron0x35cbf60()*-0.0887154);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cfd40() {
   return (neuron0x35cc2a0()*0.125278);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cf7d0() {
   return (neuron0x35cc5e0()*0.32634);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cf810() {
   return (neuron0x35ccb40()*-0.0101746);
}

double NNfunction_nn_chi1_charge2m::synapse0x35b82e0() {
   return (neuron0x35ccd60()*0.354137);
}

double NNfunction_nn_chi1_charge2m::synapse0x3392230() {
   return (neuron0x35cd0a0()*0.00187146);
}

double NNfunction_nn_chi1_charge2m::synapse0x3392270() {
   return (neuron0x35cd3e0()*-0.279039);
}

double NNfunction_nn_chi1_charge2m::synapse0x34ad780() {
   return (neuron0x35cd720()*0.0934643);
}

double NNfunction_nn_chi1_charge2m::synapse0x34ad7c0() {
   return (neuron0x35cda60()*0.402898);
}

double NNfunction_nn_chi1_charge2m::synapse0x35c8fd0() {
   return (neuron0x35cdda0()*-0.290517);
}

double NNfunction_nn_chi1_charge2m::synapse0x3392b20() {
   return (neuron0x35c9270()*0.0228298);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cf200() {
   return (neuron0x35c9520()*0.0193925);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cf240() {
   return (neuron0x35c9860()*0.306311);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cf280() {
   return (neuron0x35c9ba0()*-0.00141466);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cfe90() {
   return (neuron0x35c9ee0()*0.0241709);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cfed0() {
   return (neuron0x35ca220()*-0.0195915);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cff10() {
   return (neuron0x35ca560()*0.00257951);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cff50() {
   return (neuron0x35ca8a0()*-0.0113603);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cff90() {
   return (neuron0x35cabe0()*-0.0120448);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cffd0() {
   return (neuron0x35caf20()*-0.0296186);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d0010() {
   return (neuron0x35cb260()*-0.0167327);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d0050() {
   return (neuron0x35cb5a0()*-0.12559);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d0090() {
   return (neuron0x35cb8e0()*-0.0344293);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d00d0() {
   return (neuron0x35cbc20()*-0.0220647);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d0110() {
   return (neuron0x35cbf60()*-0.0265406);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d0150() {
   return (neuron0x35cc2a0()*-0.0375301);
}

double NNfunction_nn_chi1_charge2m::synapse0x35c9010() {
   return (neuron0x35cc5e0()*-0.0112232);
}

double NNfunction_nn_chi1_charge2m::synapse0x35c9050() {
   return (neuron0x35ccb40()*-0.0181159);
}

double NNfunction_nn_chi1_charge2m::synapse0x35c9090() {
   return (neuron0x35ccd60()*-0.0294195);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d02a0() {
   return (neuron0x35cd0a0()*-0.0326273);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d02e0() {
   return (neuron0x35cd3e0()*0.00933059);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d0320() {
   return (neuron0x35cd720()*-0.00452038);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d0360() {
   return (neuron0x35cda60()*0.00987876);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d03a0() {
   return (neuron0x35cdda0()*1.95674);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d0720() {
   return (neuron0x35c9270()*0.352342);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d0760() {
   return (neuron0x35c9520()*0.0755726);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d07a0() {
   return (neuron0x35c9860()*-2.77673);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d07e0() {
   return (neuron0x35c9ba0()*-0.160763);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d0820() {
   return (neuron0x35c9ee0()*-0.16821);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d0860() {
   return (neuron0x35ca220()*-0.201229);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d08a0() {
   return (neuron0x35ca560()*-0.0805637);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d08e0() {
   return (neuron0x35ca8a0()*-0.354167);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d0920() {
   return (neuron0x35cabe0()*-0.355415);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d0960() {
   return (neuron0x35caf20()*-0.140301);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d09a0() {
   return (neuron0x35cb260()*-0.160274);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d09e0() {
   return (neuron0x35cb5a0()*1.91875);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d0a20() {
   return (neuron0x35cb8e0()*-0.0902861);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d0a60() {
   return (neuron0x35cbc20()*0.0365371);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d0aa0() {
   return (neuron0x35cbf60()*0.307049);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d0ae0() {
   return (neuron0x35cc2a0()*0.201485);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d0570() {
   return (neuron0x35cc5e0()*0.053472);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d05b0() {
   return (neuron0x35ccb40()*0.0109174);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d0c30() {
   return (neuron0x35ccd60()*0.2558);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d0c70() {
   return (neuron0x35cd0a0()*-0.016645);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d0cb0() {
   return (neuron0x35cd3e0()*0.122965);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d0cf0() {
   return (neuron0x35cd720()*0.238861);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d0d30() {
   return (neuron0x35cda60()*0.0796132);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d0d70() {
   return (neuron0x35cdda0()*-1.64391);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d10f0() {
   return (neuron0x35c9270()*0.376492);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d1130() {
   return (neuron0x35c9520()*-0.433741);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d1170() {
   return (neuron0x35c9860()*0.60648);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d11b0() {
   return (neuron0x35c9ba0()*-1.0117);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d11f0() {
   return (neuron0x35c9ee0()*-0.288951);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d1230() {
   return (neuron0x35ca220()*-0.396304);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d1270() {
   return (neuron0x35ca560()*1.07979);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d12b0() {
   return (neuron0x35ca8a0()*0.994396);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d12f0() {
   return (neuron0x35cabe0()*0.472342);
}

double NNfunction_nn_chi1_charge2m::synapse0x3392580() {
   return (neuron0x35caf20()*-0.250837);
}

double NNfunction_nn_chi1_charge2m::synapse0x33925c0() {
   return (neuron0x35cb260()*1.27457);
}

double NNfunction_nn_chi1_charge2m::synapse0x3392600() {
   return (neuron0x35cb5a0()*0.847354);
}

double NNfunction_nn_chi1_charge2m::synapse0x3392640() {
   return (neuron0x35cb8e0()*-1.05609);
}

double NNfunction_nn_chi1_charge2m::synapse0x3392680() {
   return (neuron0x35cbc20()*-1.19019);
}

double NNfunction_nn_chi1_charge2m::synapse0x33926c0() {
   return (neuron0x35cbf60()*1.08486);
}

double NNfunction_nn_chi1_charge2m::synapse0x3392700() {
   return (neuron0x35cc2a0()*-1.0589);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d0f40() {
   return (neuron0x35cc5e0()*0.744889);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d0f80() {
   return (neuron0x35ccb40()*-0.223897);
}

double NNfunction_nn_chi1_charge2m::synapse0x3392850() {
   return (neuron0x35ccd60()*0.0301895);
}

double NNfunction_nn_chi1_charge2m::synapse0x3392890() {
   return (neuron0x35cd0a0()*-0.380304);
}

double NNfunction_nn_chi1_charge2m::synapse0x33928d0() {
   return (neuron0x35cd3e0()*0.875569);
}

double NNfunction_nn_chi1_charge2m::synapse0x3392910() {
   return (neuron0x35cd720()*0.0947766);
}

double NNfunction_nn_chi1_charge2m::synapse0x3392950() {
   return (neuron0x35cda60()*-0.430971);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d1b40() {
   return (neuron0x35cdda0()*-0.778855);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d1ec0() {
   return (neuron0x35c9270()*2.69316);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d1f00() {
   return (neuron0x35c9520()*0.0506252);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d1f40() {
   return (neuron0x35c9860()*1.20195);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d1f80() {
   return (neuron0x35c9ba0()*0.062843);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d1fc0() {
   return (neuron0x35c9ee0()*-0.0108291);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d2000() {
   return (neuron0x35ca220()*-0.190021);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d2040() {
   return (neuron0x35ca560()*-0.259611);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d2080() {
   return (neuron0x35ca8a0()*-0.302015);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d20c0() {
   return (neuron0x35cabe0()*-0.013489);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d2100() {
   return (neuron0x35caf20()*0.266394);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d2140() {
   return (neuron0x35cb260()*-0.466641);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d2180() {
   return (neuron0x35cb5a0()*-0.55677);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d21c0() {
   return (neuron0x35cb8e0()*-0.408137);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d2200() {
   return (neuron0x35cbc20()*0.332484);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d2240() {
   return (neuron0x35cbf60()*-0.154635);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d2280() {
   return (neuron0x35cc2a0()*-0.182982);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d1d10() {
   return (neuron0x35cc5e0()*-0.0545216);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d1d50() {
   return (neuron0x35ccb40()*-0.357611);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d23d0() {
   return (neuron0x35ccd60()*-0.459674);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d2410() {
   return (neuron0x35cd0a0()*0.240495);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d2450() {
   return (neuron0x35cd3e0()*0.163421);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d2490() {
   return (neuron0x35cd720()*0.314252);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d24d0() {
   return (neuron0x35cda60()*0.27783);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d2510() {
   return (neuron0x35cdda0()*-1.67395);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d2890() {
   return (neuron0x35c9270()*0.0254284);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d28d0() {
   return (neuron0x35c9520()*0.0213621);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d2910() {
   return (neuron0x35c9860()*2.21618);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d2950() {
   return (neuron0x35c9ba0()*0.0701259);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d2990() {
   return (neuron0x35c9ee0()*-0.0172186);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d29d0() {
   return (neuron0x35ca220()*0.0376412);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d2a10() {
   return (neuron0x35ca560()*0.0270286);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d2a50() {
   return (neuron0x35ca8a0()*0.0927567);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d2a90() {
   return (neuron0x35cabe0()*-0.0148895);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d2ad0() {
   return (neuron0x35caf20()*0.0394644);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d2b10() {
   return (neuron0x35cb260()*0.0185194);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d2b50() {
   return (neuron0x35cb5a0()*0.0150094);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d2b90() {
   return (neuron0x35cb8e0()*-0.00798682);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d2bd0() {
   return (neuron0x35cbc20()*0.186939);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d2c10() {
   return (neuron0x35cbf60()*0.115301);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d2c50() {
   return (neuron0x35cc2a0()*0.0693077);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d26e0() {
   return (neuron0x35cc5e0()*0.0147126);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d2720() {
   return (neuron0x35ccb40()*0.136031);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d2da0() {
   return (neuron0x35ccd60()*0.152444);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d2de0() {
   return (neuron0x35cd0a0()*0.0549975);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d2e20() {
   return (neuron0x35cd3e0()*-0.121931);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d2e60() {
   return (neuron0x35cd720()*-0.0753476);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d2ea0() {
   return (neuron0x35cda60()*0.0286016);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d2ee0() {
   return (neuron0x35cdda0()*-12.2777);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cca30() {
   return (neuron0x35c9270()*-0.0726387);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cca70() {
   return (neuron0x35c9520()*0.0248412);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ccab0() {
   return (neuron0x35c9860()*-0.679278);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ccaf0() {
   return (neuron0x35c9ba0()*0.0314727);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d3470() {
   return (neuron0x35c9ee0()*-0.0257775);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d34b0() {
   return (neuron0x35ca220()*0.0180484);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d34f0() {
   return (neuron0x35ca560()*0.049752);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d3530() {
   return (neuron0x35ca8a0()*0.0372608);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d3570() {
   return (neuron0x35cabe0()*0.0507136);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d35b0() {
   return (neuron0x35caf20()*0.0274944);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d35f0() {
   return (neuron0x35cb260()*0.0324501);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d3630() {
   return (neuron0x35cb5a0()*-1.37646);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d3670() {
   return (neuron0x35cb8e0()*-0.070627);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d36b0() {
   return (neuron0x35cbc20()*0.0012374);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d36f0() {
   return (neuron0x35cbf60()*-0.0474747);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d3730() {
   return (neuron0x35cc2a0()*-0.0508235);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d30b0() {
   return (neuron0x35cc5e0()*0.0542531);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d30f0() {
   return (neuron0x35ccb40()*0.0431878);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d3880() {
   return (neuron0x35ccd60()*-0.00283897);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d38c0() {
   return (neuron0x35cd0a0()*0.0316819);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d3900() {
   return (neuron0x35cd3e0()*0.0307244);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d3940() {
   return (neuron0x35cd720()*-0.0436496);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d3980() {
   return (neuron0x35cda60()*-0.00370981);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d39c0() {
   return (neuron0x35cdda0()*-1.17546);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d3d40() {
   return (neuron0x35c9270()*0.022517);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d3d80() {
   return (neuron0x35c9520()*0.0158137);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d3dc0() {
   return (neuron0x35c9860()*-0.0800607);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d3e00() {
   return (neuron0x35c9ba0()*-0.893195);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d3e40() {
   return (neuron0x35c9ee0()*0.0289067);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d3e80() {
   return (neuron0x35ca220()*-0.0231482);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d3ec0() {
   return (neuron0x35ca560()*0.003505);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d3f00() {
   return (neuron0x35ca8a0()*-0.0532274);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d3f40() {
   return (neuron0x35cabe0()*-0.0306877);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d3f80() {
   return (neuron0x35caf20()*-0.022388);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d3fc0() {
   return (neuron0x35cb260()*-0.0360627);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d4000() {
   return (neuron0x35cb5a0()*1.00286);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d4040() {
   return (neuron0x35cb8e0()*0.0355499);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d4080() {
   return (neuron0x35cbc20()*0.0273632);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d40c0() {
   return (neuron0x35cbf60()*0.0285366);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d4100() {
   return (neuron0x35cc2a0()*0.0565576);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d3b90() {
   return (neuron0x35cc5e0()*0.0109805);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d3bd0() {
   return (neuron0x35ccb40()*-0.0235357);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d4250() {
   return (neuron0x35ccd60()*-0.00586209);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d4290() {
   return (neuron0x35cd0a0()*-0.054787);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d42d0() {
   return (neuron0x35cd3e0()*-0.00338916);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d4310() {
   return (neuron0x35cd720()*0.0149058);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d4350() {
   return (neuron0x35cda60()*0.00815336);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d4390() {
   return (neuron0x35cdda0()*0.155484);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d4710() {
   return (neuron0x35c9270()*-0.0204384);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d4750() {
   return (neuron0x35c9520()*0.0482273);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d4790() {
   return (neuron0x35c9860()*1.0214);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d47d0() {
   return (neuron0x35c9ba0()*-0.0326345);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d4810() {
   return (neuron0x35c9ee0()*0.0314415);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d4850() {
   return (neuron0x35ca220()*-0.0921501);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d4890() {
   return (neuron0x35ca560()*0.0240511);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d48d0() {
   return (neuron0x35ca8a0()*0.00354974);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d4910() {
   return (neuron0x35cabe0()*-0.0585549);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d4950() {
   return (neuron0x35caf20()*-0.0792976);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d4990() {
   return (neuron0x35cb260()*-0.0626633);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d49d0() {
   return (neuron0x35cb5a0()*-0.87658);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d4a10() {
   return (neuron0x35cb8e0()*-0.0429841);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d4a50() {
   return (neuron0x35cbc20()*-0.00823328);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d4a90() {
   return (neuron0x35cbf60()*-0.0440136);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d4ad0() {
   return (neuron0x35cc2a0()*0.06533);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d4560() {
   return (neuron0x35cc5e0()*0.0229359);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d45a0() {
   return (neuron0x35ccb40()*-0.0303644);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d1330() {
   return (neuron0x35ccd60()*-0.0997008);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d1370() {
   return (neuron0x35cd0a0()*-0.122915);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d13b0() {
   return (neuron0x35cd3e0()*-0.012157);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d13f0() {
   return (neuron0x35cd720()*0.0174022);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d1430() {
   return (neuron0x35cda60()*-0.0413175);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d1470() {
   return (neuron0x35cdda0()*11.3518);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d17f0() {
   return (neuron0x35c9270()*-0.00703559);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d1830() {
   return (neuron0x35c9520()*-0.0224857);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d1870() {
   return (neuron0x35c9860()*0.893314);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d18b0() {
   return (neuron0x35c9ba0()*-0.0259991);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d18f0() {
   return (neuron0x35c9ee0()*0.0305527);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d1930() {
   return (neuron0x35ca220()*0.0304449);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d1970() {
   return (neuron0x35ca560()*0.0423548);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d19b0() {
   return (neuron0x35ca8a0()*0.0573566);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d19f0() {
   return (neuron0x35cabe0()*-0.0277152);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d1a30() {
   return (neuron0x35caf20()*-0.0952465);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d1a70() {
   return (neuron0x35cb260()*-0.024858);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d1ab0() {
   return (neuron0x35cb5a0()*-4.79912);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d1af0() {
   return (neuron0x35cb8e0()*-0.042431);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d5c30() {
   return (neuron0x35cbc20()*-0.142124);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d5c70() {
   return (neuron0x35cbf60()*0.0757324);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d5cb0() {
   return (neuron0x35cc2a0()*0.120214);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d1640() {
   return (neuron0x35cc5e0()*-0.0291882);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d1680() {
   return (neuron0x35ccb40()*-0.0136858);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d5e00() {
   return (neuron0x35ccd60()*0.0018212);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d5e40() {
   return (neuron0x35cd0a0()*0.000717967);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d5e80() {
   return (neuron0x35cd3e0()*0.0708887);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d5ec0() {
   return (neuron0x35cd720()*0.0299537);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d5f00() {
   return (neuron0x35cda60()*-0.0227267);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d5f40() {
   return (neuron0x35cdda0()*3.28536);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d62c0() {
   return (neuron0x35c9270()*0.127552);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d6300() {
   return (neuron0x35c9520()*-0.0256185);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d6340() {
   return (neuron0x35c9860()*-0.280479);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d6380() {
   return (neuron0x35c9ba0()*2.69229);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d63c0() {
   return (neuron0x35c9ee0()*0.117438);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d6400() {
   return (neuron0x35ca220()*-0.0135998);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d6440() {
   return (neuron0x35ca560()*0.12267);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d6480() {
   return (neuron0x35ca8a0()*0.0171282);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d64c0() {
   return (neuron0x35cabe0()*0.00583381);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d6500() {
   return (neuron0x35caf20()*0.0432077);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d6540() {
   return (neuron0x35cb260()*-0.0994422);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d6580() {
   return (neuron0x35cb5a0()*2.43919);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d65c0() {
   return (neuron0x35cb8e0()*0.0279683);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d6600() {
   return (neuron0x35cbc20()*0.106667);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d6640() {
   return (neuron0x35cbf60()*0.0785857);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d6680() {
   return (neuron0x35cc2a0()*0.116752);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d6110() {
   return (neuron0x35cc5e0()*-0.00116014);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d6150() {
   return (neuron0x35ccb40()*-0.0395747);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d67d0() {
   return (neuron0x35ccd60()*0.045694);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d6810() {
   return (neuron0x35cd0a0()*-0.0864801);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d6850() {
   return (neuron0x35cd3e0()*-0.0176354);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d6890() {
   return (neuron0x35cd720()*0.00558623);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d68d0() {
   return (neuron0x35cda60()*0.0681577);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d6910() {
   return (neuron0x35cdda0()*0.600293);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d6c90() {
   return (neuron0x35c9270()*-0.139168);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d6cd0() {
   return (neuron0x35c9520()*0.0449326);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d6d10() {
   return (neuron0x35c9860()*1.70291);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d6d50() {
   return (neuron0x35c9ba0()*1.13131);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d6d90() {
   return (neuron0x35c9ee0()*1.15594);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d6dd0() {
   return (neuron0x35ca220()*0.835219);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d6e10() {
   return (neuron0x35ca560()*-0.0299038);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d6e50() {
   return (neuron0x35ca8a0()*-1.38997);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d6e90() {
   return (neuron0x35cabe0()*0.419646);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d6ed0() {
   return (neuron0x35caf20()*1.50852);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d6f10() {
   return (neuron0x35cb260()*-2.3337);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d6f50() {
   return (neuron0x35cb5a0()*-0.481964);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d6f90() {
   return (neuron0x35cb8e0()*1.04821);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d6fd0() {
   return (neuron0x35cbc20()*0.157245);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d7010() {
   return (neuron0x35cbf60()*-0.575737);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d7050() {
   return (neuron0x35cc2a0()*0.235378);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d6ae0() {
   return (neuron0x35cc5e0()*-0.0855566);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d6b20() {
   return (neuron0x35ccb40()*0.526582);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d71a0() {
   return (neuron0x35ccd60()*0.529254);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d71e0() {
   return (neuron0x35cd0a0()*-0.971977);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d7220() {
   return (neuron0x35cd3e0()*-0.706615);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d7260() {
   return (neuron0x35cd720()*-1.5118);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d72a0() {
   return (neuron0x35cda60()*1.60817);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d72e0() {
   return (neuron0x35cdda0()*-0.907273);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d7660() {
   return (neuron0x35c9270()*-0.176213);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d76a0() {
   return (neuron0x35c9520()*-1.47398);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d76e0() {
   return (neuron0x35c9860()*-0.864899);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d7720() {
   return (neuron0x35c9ba0()*-0.913432);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d7760() {
   return (neuron0x35c9ee0()*0.250526);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d77a0() {
   return (neuron0x35ca220()*0.24474);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d77e0() {
   return (neuron0x35ca560()*0.773265);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d7820() {
   return (neuron0x35ca8a0()*-0.381749);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d7860() {
   return (neuron0x35cabe0()*-0.459719);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d78a0() {
   return (neuron0x35caf20()*0.0764357);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d78e0() {
   return (neuron0x35cb260()*-0.672143);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d7920() {
   return (neuron0x35cb5a0()*-0.85857);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d7960() {
   return (neuron0x35cb8e0()*-0.881293);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d79a0() {
   return (neuron0x35cbc20()*0.12258);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d79e0() {
   return (neuron0x35cbf60()*0.633414);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d7a20() {
   return (neuron0x35cc2a0()*-0.142628);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d74b0() {
   return (neuron0x35cc5e0()*-1.09327);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d74f0() {
   return (neuron0x35ccb40()*0.479842);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d7b70() {
   return (neuron0x35ccd60()*0.755371);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d7bb0() {
   return (neuron0x35cd0a0()*0.776557);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d7bf0() {
   return (neuron0x35cd3e0()*-3.31512);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d7c30() {
   return (neuron0x35cd720()*-1.06622);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d7c70() {
   return (neuron0x35cda60()*-0.501928);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d7cb0() {
   return (neuron0x35cdda0()*-0.413902);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d8030() {
   return (neuron0x35c9270()*0.00171813);
}

double NNfunction_nn_chi1_charge2m::synapse0x35c9400() {
   return (neuron0x35c9520()*0.0209233);
}

double NNfunction_nn_chi1_charge2m::synapse0x35c9440() {
   return (neuron0x35c9860()*-0.437077);
}

double NNfunction_nn_chi1_charge2m::synapse0x35c9740() {
   return (neuron0x35c9ba0()*-0.0265423);
}

double NNfunction_nn_chi1_charge2m::synapse0x35c9780() {
   return (neuron0x35c9ee0()*0.0105043);
}

double NNfunction_nn_chi1_charge2m::synapse0x35c9a80() {
   return (neuron0x35ca220()*-0.0109485);
}

double NNfunction_nn_chi1_charge2m::synapse0x35c9ac0() {
   return (neuron0x35ca560()*-0.000179093);
}

double NNfunction_nn_chi1_charge2m::synapse0x35c9dc0() {
   return (neuron0x35ca8a0()*-0.0044866);
}

double NNfunction_nn_chi1_charge2m::synapse0x35c9e00() {
   return (neuron0x35cabe0()*-0.010623);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ca100() {
   return (neuron0x35caf20()*-0.0136668);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ca140() {
   return (neuron0x35cb260()*-0.0133719);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ca440() {
   return (neuron0x35cb5a0()*0.0201109);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ca480() {
   return (neuron0x35cb8e0()*-0.020523);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ca780() {
   return (neuron0x35cbc20()*-0.0188977);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ca7c0() {
   return (neuron0x35cbf60()*-0.0119484);
}

double NNfunction_nn_chi1_charge2m::synapse0x35caac0() {
   return (neuron0x35cc2a0()*-0.01598);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cab00() {
   return (neuron0x35cc5e0()*-0.0107342);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cae00() {
   return (neuron0x35ccb40()*-0.0184717);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cae40() {
   return (neuron0x35ccd60()*-0.00967165);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cb140() {
   return (neuron0x35cd0a0()*-0.00942575);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cb180() {
   return (neuron0x35cd3e0()*0.0103707);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cb480() {
   return (neuron0x35cd720()*0.00652418);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cb4c0() {
   return (neuron0x35cda60()*-0.00145999);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cb7c0() {
   return (neuron0x35cdda0()*0.918985);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cb800() {
   return (neuron0x35c9270()*0.729606);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cc4c0() {
   return (neuron0x35c9520()*-0.179557);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cc500() {
   return (neuron0x35c9860()*0.237886);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d7e80() {
   return (neuron0x35c9ba0()*-1.60564);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d7ec0() {
   return (neuron0x35c9ee0()*-0.283572);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cc800() {
   return (neuron0x35ca220()*0.273117);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cc840() {
   return (neuron0x35ca560()*1.56391);
}

double NNfunction_nn_chi1_charge2m::synapse0x33841f0() {
   return (neuron0x35ca8a0()*1.43774);
}

double NNfunction_nn_chi1_charge2m::synapse0x3384230() {
   return (neuron0x35cabe0()*0.562174);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ccf80() {
   return (neuron0x35caf20()*-0.916277);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ccfc0() {
   return (neuron0x35cb260()*1.42146);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cd2c0() {
   return (neuron0x35cb5a0()*1.21094);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cd300() {
   return (neuron0x35cb8e0()*-1.18217);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cd600() {
   return (neuron0x35cbc20()*-1.21056);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cd640() {
   return (neuron0x35cbf60()*0.979828);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cd940() {
   return (neuron0x35cc2a0()*-0.505635);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cd980() {
   return (neuron0x35cc5e0()*0.220681);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cdc80() {
   return (neuron0x35ccb40()*-0.820696);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cdcc0() {
   return (neuron0x35ccd60()*-0.276492);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cdfc0() {
   return (neuron0x35cd0a0()*0.393758);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ce000() {
   return (neuron0x35cd3e0()*1.31824);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cbb00() {
   return (neuron0x35cd720()*-0.123565);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cbb40() {
   return (neuron0x35cda60()*-0.708822);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d9da0() {
   return (neuron0x35cdda0()*-0.557304);
}

double NNfunction_nn_chi1_charge2m::synapse0x35da120() {
   return (neuron0x35c9270()*0.822257);
}

double NNfunction_nn_chi1_charge2m::synapse0x35da160() {
   return (neuron0x35c9520()*-0.0784182);
}

double NNfunction_nn_chi1_charge2m::synapse0x35da1a0() {
   return (neuron0x35c9860()*-0.983531);
}

double NNfunction_nn_chi1_charge2m::synapse0x35da1e0() {
   return (neuron0x35c9ba0()*-4.72853e-05);
}

double NNfunction_nn_chi1_charge2m::synapse0x35da220() {
   return (neuron0x35c9ee0()*0.378909);
}

double NNfunction_nn_chi1_charge2m::synapse0x35da260() {
   return (neuron0x35ca220()*-0.308384);
}

double NNfunction_nn_chi1_charge2m::synapse0x35da2a0() {
   return (neuron0x35ca560()*0.13535);
}

double NNfunction_nn_chi1_charge2m::synapse0x35da2e0() {
   return (neuron0x35ca8a0()*0.00228262);
}

double NNfunction_nn_chi1_charge2m::synapse0x35da320() {
   return (neuron0x35cabe0()*0.159147);
}

double NNfunction_nn_chi1_charge2m::synapse0x35da360() {
   return (neuron0x35caf20()*0.89818);
}

double NNfunction_nn_chi1_charge2m::synapse0x35da3a0() {
   return (neuron0x35cb260()*0.433142);
}

double NNfunction_nn_chi1_charge2m::synapse0x35da3e0() {
   return (neuron0x35cb5a0()*0.357062);
}

double NNfunction_nn_chi1_charge2m::synapse0x35da420() {
   return (neuron0x35cb8e0()*0.0203448);
}

double NNfunction_nn_chi1_charge2m::synapse0x35da460() {
   return (neuron0x35cbc20()*0.587834);
}

double NNfunction_nn_chi1_charge2m::synapse0x35da4a0() {
   return (neuron0x35cbf60()*0.543236);
}

double NNfunction_nn_chi1_charge2m::synapse0x35da4e0() {
   return (neuron0x35cc2a0()*-0.309414);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d9f70() {
   return (neuron0x35cc5e0()*0.17598);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d9fb0() {
   return (neuron0x35ccb40()*0.201961);
}

double NNfunction_nn_chi1_charge2m::synapse0x35da630() {
   return (neuron0x35ccd60()*0.674204);
}

double NNfunction_nn_chi1_charge2m::synapse0x35da670() {
   return (neuron0x35cd0a0()*0.0560996);
}

double NNfunction_nn_chi1_charge2m::synapse0x35da6b0() {
   return (neuron0x35cd3e0()*-0.428013);
}

double NNfunction_nn_chi1_charge2m::synapse0x35da6f0() {
   return (neuron0x35cd720()*-0.327409);
}

double NNfunction_nn_chi1_charge2m::synapse0x35da730() {
   return (neuron0x35cda60()*0.588675);
}

double NNfunction_nn_chi1_charge2m::synapse0x35da770() {
   return (neuron0x35cdda0()*0.898009);
}

double NNfunction_nn_chi1_charge2m::synapse0x35daaf0() {
   return (neuron0x35c9270()*-0.406312);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dab30() {
   return (neuron0x35c9520()*2.35207);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dab70() {
   return (neuron0x35c9860()*0.989981);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dabb0() {
   return (neuron0x35c9ba0()*-0.0618013);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dabf0() {
   return (neuron0x35c9ee0()*0.0540949);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dac30() {
   return (neuron0x35ca220()*0.0336365);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dac70() {
   return (neuron0x35ca560()*0.370819);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dacb0() {
   return (neuron0x35ca8a0()*-0.504899);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dacf0() {
   return (neuron0x35cabe0()*-1.46066);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dad30() {
   return (neuron0x35caf20()*0.464773);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dad70() {
   return (neuron0x35cb260()*-1.30538);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dadb0() {
   return (neuron0x35cb5a0()*1.57989);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dadf0() {
   return (neuron0x35cb8e0()*0.970058);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dae30() {
   return (neuron0x35cbc20()*-0.24178);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dae70() {
   return (neuron0x35cbf60()*-0.783873);
}

double NNfunction_nn_chi1_charge2m::synapse0x35daeb0() {
   return (neuron0x35cc2a0()*1.30962);
}

double NNfunction_nn_chi1_charge2m::synapse0x35da940() {
   return (neuron0x35cc5e0()*0.244521);
}

double NNfunction_nn_chi1_charge2m::synapse0x35da980() {
   return (neuron0x35ccb40()*-0.973049);
}

double NNfunction_nn_chi1_charge2m::synapse0x35db000() {
   return (neuron0x35ccd60()*0.79036);
}

double NNfunction_nn_chi1_charge2m::synapse0x35db040() {
   return (neuron0x35cd0a0()*0.173423);
}

double NNfunction_nn_chi1_charge2m::synapse0x35db080() {
   return (neuron0x35cd3e0()*-0.517557);
}

double NNfunction_nn_chi1_charge2m::synapse0x35db0c0() {
   return (neuron0x35cd720()*0.439886);
}

double NNfunction_nn_chi1_charge2m::synapse0x35db100() {
   return (neuron0x35cda60()*-0.956251);
}

double NNfunction_nn_chi1_charge2m::synapse0x35db140() {
   return (neuron0x35cdda0()*4.48061);
}

double NNfunction_nn_chi1_charge2m::synapse0x35db4c0() {
   return (neuron0x35c9270()*-0.00560855);
}

double NNfunction_nn_chi1_charge2m::synapse0x35db500() {
   return (neuron0x35c9520()*0.0289377);
}

double NNfunction_nn_chi1_charge2m::synapse0x35db540() {
   return (neuron0x35c9860()*-0.195891);
}

double NNfunction_nn_chi1_charge2m::synapse0x35db580() {
   return (neuron0x35c9ba0()*0.0553775);
}

double NNfunction_nn_chi1_charge2m::synapse0x35db5c0() {
   return (neuron0x35c9ee0()*0.0105958);
}

double NNfunction_nn_chi1_charge2m::synapse0x35db600() {
   return (neuron0x35ca220()*0.0344508);
}

double NNfunction_nn_chi1_charge2m::synapse0x35db640() {
   return (neuron0x35ca560()*-0.0538501);
}

double NNfunction_nn_chi1_charge2m::synapse0x35db680() {
   return (neuron0x35ca8a0()*-0.0299497);
}

double NNfunction_nn_chi1_charge2m::synapse0x35db6c0() {
   return (neuron0x35cabe0()*-0.0317478);
}

double NNfunction_nn_chi1_charge2m::synapse0x35db700() {
   return (neuron0x35caf20()*-0.0364091);
}

double NNfunction_nn_chi1_charge2m::synapse0x35db740() {
   return (neuron0x35cb260()*-0.0132252);
}

double NNfunction_nn_chi1_charge2m::synapse0x35db780() {
   return (neuron0x35cb5a0()*0.687547);
}

double NNfunction_nn_chi1_charge2m::synapse0x35db7c0() {
   return (neuron0x35cb8e0()*0.00435391);
}

double NNfunction_nn_chi1_charge2m::synapse0x35db800() {
   return (neuron0x35cbc20()*-0.0322663);
}

double NNfunction_nn_chi1_charge2m::synapse0x35db840() {
   return (neuron0x35cbf60()*-0.0248487);
}

double NNfunction_nn_chi1_charge2m::synapse0x35db880() {
   return (neuron0x35cc2a0()*0.0266544);
}

double NNfunction_nn_chi1_charge2m::synapse0x35db310() {
   return (neuron0x35cc5e0()*-0.0367725);
}

double NNfunction_nn_chi1_charge2m::synapse0x35db350() {
   return (neuron0x35ccb40()*-0.0440902);
}

double NNfunction_nn_chi1_charge2m::synapse0x35db9d0() {
   return (neuron0x35ccd60()*-0.0189143);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dba10() {
   return (neuron0x35cd0a0()*-0.0014328);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dba50() {
   return (neuron0x35cd3e0()*0.0117374);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dba90() {
   return (neuron0x35cd720()*0.000427169);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dbad0() {
   return (neuron0x35cda60()*-0.0399906);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dbb10() {
   return (neuron0x35cdda0()*-1.18104);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dbe90() {
   return (neuron0x35c9270()*1.21738);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dbed0() {
   return (neuron0x35c9520()*1.77346);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dbf10() {
   return (neuron0x35c9860()*0.665975);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dbf50() {
   return (neuron0x35c9ba0()*0.420166);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dbf90() {
   return (neuron0x35c9ee0()*1.39253);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dbfd0() {
   return (neuron0x35ca220()*-0.926982);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dc010() {
   return (neuron0x35ca560()*0.581735);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dc050() {
   return (neuron0x35ca8a0()*-1.27515);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dc090() {
   return (neuron0x35cabe0()*-0.500905);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dc0d0() {
   return (neuron0x35caf20()*1.05809);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dc110() {
   return (neuron0x35cb260()*0.465269);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dc150() {
   return (neuron0x35cb5a0()*-0.782361);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dc190() {
   return (neuron0x35cb8e0()*-4.54683);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dc1d0() {
   return (neuron0x35cbc20()*1.06889);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dc210() {
   return (neuron0x35cbf60()*0.378182);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dc250() {
   return (neuron0x35cc2a0()*1.08919);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dbce0() {
   return (neuron0x35cc5e0()*0.872014);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dbd20() {
   return (neuron0x35ccb40()*1.26845);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dc3a0() {
   return (neuron0x35ccd60()*1.09573);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dc3e0() {
   return (neuron0x35cd0a0()*-0.155551);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dc420() {
   return (neuron0x35cd3e0()*-0.107801);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dc460() {
   return (neuron0x35cd720()*-1.44602);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dc4a0() {
   return (neuron0x35cda60()*1.22506);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dc4e0() {
   return (neuron0x35cdda0()*4.10191);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dc860() {
   return (neuron0x35c9270()*-0.194806);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dc8a0() {
   return (neuron0x35c9520()*-0.0439458);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dc8e0() {
   return (neuron0x35c9860()*2.51952);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dc920() {
   return (neuron0x35c9ba0()*-0.127201);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dc960() {
   return (neuron0x35c9ee0()*-0.0502831);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dc9a0() {
   return (neuron0x35ca220()*-0.0967488);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dc9e0() {
   return (neuron0x35ca560()*-0.0237399);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dca20() {
   return (neuron0x35ca8a0()*0.075791);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dca60() {
   return (neuron0x35cabe0()*-0.0155524);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d4c20() {
   return (neuron0x35caf20()*-0.0514051);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d4c60() {
   return (neuron0x35cb260()*0.00814446);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d4ca0() {
   return (neuron0x35cb5a0()*0.0527075);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d4ce0() {
   return (neuron0x35cb8e0()*-0.020847);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d4d20() {
   return (neuron0x35cbc20()*-0.0417018);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d4d60() {
   return (neuron0x35cbf60()*-0.0780659);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d4da0() {
   return (neuron0x35cc2a0()*0.0154757);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dc6b0() {
   return (neuron0x35cc5e0()*-0.00983337);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dc6f0() {
   return (neuron0x35ccb40()*0.0301078);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d4ef0() {
   return (neuron0x35ccd60()*0.0345705);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d4f30() {
   return (neuron0x35cd0a0()*-0.0132489);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d4f70() {
   return (neuron0x35cd3e0()*-0.0602004);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d4fb0() {
   return (neuron0x35cd720()*0.0328976);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d4ff0() {
   return (neuron0x35cda60()*0.024802);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d5030() {
   return (neuron0x35cdda0()*-8.54549);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d53b0() {
   return (neuron0x35c9270()*-0.150131);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d53f0() {
   return (neuron0x35c9520()*0.712875);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d5430() {
   return (neuron0x35c9860()*-1.43511);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d5470() {
   return (neuron0x35c9ba0()*-2.15306);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d54b0() {
   return (neuron0x35c9ee0()*-0.324052);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d54f0() {
   return (neuron0x35ca220()*0.260304);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d5530() {
   return (neuron0x35ca560()*-1.43402);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d5570() {
   return (neuron0x35ca8a0()*-0.150748);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d55b0() {
   return (neuron0x35cabe0()*-0.240533);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d55f0() {
   return (neuron0x35caf20()*0.277691);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d5630() {
   return (neuron0x35cb260()*-0.197217);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d5670() {
   return (neuron0x35cb5a0()*-0.613447);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d56b0() {
   return (neuron0x35cb8e0()*-0.217642);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d56f0() {
   return (neuron0x35cbc20()*-0.180549);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d5730() {
   return (neuron0x35cbf60()*0.960098);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d5770() {
   return (neuron0x35cc2a0()*-1.36295);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d5200() {
   return (neuron0x35cc5e0()*0.0490187);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d5240() {
   return (neuron0x35ccb40()*0.389729);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d58c0() {
   return (neuron0x35ccd60()*0.0669805);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d5900() {
   return (neuron0x35cd0a0()*0.625781);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d5940() {
   return (neuron0x35cd3e0()*0.387975);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d5980() {
   return (neuron0x35cd720()*0.139981);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d59c0() {
   return (neuron0x35cda60()*-0.314487);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d5a00() {
   return (neuron0x35cdda0()*-1.37859);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d5bd0() {
   return (neuron0x35c9270()*-0.98624);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dec60() {
   return (neuron0x35c9520()*-1.66235);
}

double NNfunction_nn_chi1_charge2m::synapse0x35deca0() {
   return (neuron0x35c9860()*-0.295746);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dece0() {
   return (neuron0x35c9ba0()*-0.386374);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ded20() {
   return (neuron0x35c9ee0()*-1.39354);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ded60() {
   return (neuron0x35ca220()*0.808267);
}

double NNfunction_nn_chi1_charge2m::synapse0x35deda0() {
   return (neuron0x35ca560()*-0.715082);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dede0() {
   return (neuron0x35ca8a0()*1.2675);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dee20() {
   return (neuron0x35cabe0()*0.554756);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dee60() {
   return (neuron0x35caf20()*-0.95004);
}

double NNfunction_nn_chi1_charge2m::synapse0x35deea0() {
   return (neuron0x35cb260()*-0.443774);
}

double NNfunction_nn_chi1_charge2m::synapse0x35deee0() {
   return (neuron0x35cb5a0()*0.496754);
}

double NNfunction_nn_chi1_charge2m::synapse0x35def20() {
   return (neuron0x35cb8e0()*3.71953);
}

double NNfunction_nn_chi1_charge2m::synapse0x35def60() {
   return (neuron0x35cbc20()*-1.05927);
}

double NNfunction_nn_chi1_charge2m::synapse0x35defa0() {
   return (neuron0x35cbf60()*-0.455266);
}

double NNfunction_nn_chi1_charge2m::synapse0x35defe0() {
   return (neuron0x35cc2a0()*-0.960911);
}

double NNfunction_nn_chi1_charge2m::synapse0x35deab0() {
   return (neuron0x35cc5e0()*-0.829002);
}

double NNfunction_nn_chi1_charge2m::synapse0x35deaf0() {
   return (neuron0x35ccb40()*-1.19754);
}

double NNfunction_nn_chi1_charge2m::synapse0x35df130() {
   return (neuron0x35ccd60()*-1.06065);
}

double NNfunction_nn_chi1_charge2m::synapse0x35df170() {
   return (neuron0x35cd0a0()*0.00338682);
}

double NNfunction_nn_chi1_charge2m::synapse0x35df1b0() {
   return (neuron0x35cd3e0()*0.0780461);
}

double NNfunction_nn_chi1_charge2m::synapse0x35df1f0() {
   return (neuron0x35cd720()*1.33007);
}

double NNfunction_nn_chi1_charge2m::synapse0x35df230() {
   return (neuron0x35cda60()*-1.13468);
}

double NNfunction_nn_chi1_charge2m::synapse0x35df270() {
   return (neuron0x35cdda0()*-3.50725);
}

double NNfunction_nn_chi1_charge2m::synapse0x35df5f0() {
   return (neuron0x35c9270()*-0.132091);
}

double NNfunction_nn_chi1_charge2m::synapse0x35df630() {
   return (neuron0x35c9520()*0.830399);
}

double NNfunction_nn_chi1_charge2m::synapse0x35df670() {
   return (neuron0x35c9860()*-0.07418);
}

double NNfunction_nn_chi1_charge2m::synapse0x35df6b0() {
   return (neuron0x35c9ba0()*-0.504295);
}

double NNfunction_nn_chi1_charge2m::synapse0x35df6f0() {
   return (neuron0x35c9ee0()*-0.316474);
}

double NNfunction_nn_chi1_charge2m::synapse0x35df730() {
   return (neuron0x35ca220()*-0.34767);
}

double NNfunction_nn_chi1_charge2m::synapse0x35df770() {
   return (neuron0x35ca560()*-0.390866);
}

double NNfunction_nn_chi1_charge2m::synapse0x35df7b0() {
   return (neuron0x35ca8a0()*-0.07347);
}

double NNfunction_nn_chi1_charge2m::synapse0x35df7f0() {
   return (neuron0x35cabe0()*-0.320164);
}

double NNfunction_nn_chi1_charge2m::synapse0x35df830() {
   return (neuron0x35caf20()*-0.210569);
}

double NNfunction_nn_chi1_charge2m::synapse0x35df870() {
   return (neuron0x35cb260()*-0.783423);
}

double NNfunction_nn_chi1_charge2m::synapse0x35df8b0() {
   return (neuron0x35cb5a0()*-1.92899);
}

double NNfunction_nn_chi1_charge2m::synapse0x35df8f0() {
   return (neuron0x35cb8e0()*-0.0893104);
}

double NNfunction_nn_chi1_charge2m::synapse0x35df930() {
   return (neuron0x35cbc20()*0.0473415);
}

double NNfunction_nn_chi1_charge2m::synapse0x35df970() {
   return (neuron0x35cbf60()*-1.28654);
}

double NNfunction_nn_chi1_charge2m::synapse0x35df9b0() {
   return (neuron0x35cc2a0()*0.707917);
}

double NNfunction_nn_chi1_charge2m::synapse0x35df440() {
   return (neuron0x35cc5e0()*0.000618704);
}

double NNfunction_nn_chi1_charge2m::synapse0x35df480() {
   return (neuron0x35ccb40()*-0.955732);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dfb00() {
   return (neuron0x35ccd60()*-0.0625775);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dfb40() {
   return (neuron0x35cd0a0()*1.45411);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dfb80() {
   return (neuron0x35cd3e0()*-0.380116);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dfbc0() {
   return (neuron0x35cd720()*1.04747);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dfc00() {
   return (neuron0x35cda60()*-0.286312);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dfc40() {
   return (neuron0x35cdda0()*0.275355);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dffc0() {
   return (neuron0x35c9270()*0.00952182);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e0000() {
   return (neuron0x35c9520()*2.85);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e0040() {
   return (neuron0x35c9860()*-0.692962);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e0080() {
   return (neuron0x35c9ba0()*-0.0378646);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e00c0() {
   return (neuron0x35c9ee0()*0.0219188);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e0100() {
   return (neuron0x35ca220()*-0.110846);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e0140() {
   return (neuron0x35ca560()*-0.155025);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e0180() {
   return (neuron0x35ca8a0()*0.0511841);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e01c0() {
   return (neuron0x35cabe0()*0.194327);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e0200() {
   return (neuron0x35caf20()*0.123907);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e0240() {
   return (neuron0x35cb260()*-0.401632);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e0280() {
   return (neuron0x35cb5a0()*-2.66355);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e02c0() {
   return (neuron0x35cb8e0()*-0.177989);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e0300() {
   return (neuron0x35cbc20()*0.235523);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e0340() {
   return (neuron0x35cbf60()*0.0450979);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e0380() {
   return (neuron0x35cc2a0()*-0.166158);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dfe10() {
   return (neuron0x35cc5e0()*-0.403828);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dfe50() {
   return (neuron0x35ccb40()*0.0667417);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e04d0() {
   return (neuron0x35ccd60()*-0.42334);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e0510() {
   return (neuron0x35cd0a0()*-0.00841709);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e0550() {
   return (neuron0x35cd3e0()*0.263487);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e0590() {
   return (neuron0x35cd720()*-0.085214);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e05d0() {
   return (neuron0x35cda60()*-0.520786);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e0610() {
   return (neuron0x35cdda0()*0.288289);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e0990() {
   return (neuron0x35c9270()*-0.248168);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e09d0() {
   return (neuron0x35c9520()*-0.00934401);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e0a10() {
   return (neuron0x35c9860()*-1.05571);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e0a50() {
   return (neuron0x35c9ba0()*1.28042);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e0a90() {
   return (neuron0x35c9ee0()*-0.45873);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e0ad0() {
   return (neuron0x35ca220()*0.410879);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e0b10() {
   return (neuron0x35ca560()*-0.524388);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e0b50() {
   return (neuron0x35ca8a0()*0.355149);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e0b90() {
   return (neuron0x35cabe0()*-0.732895);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e0bd0() {
   return (neuron0x35caf20()*-0.0795363);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e0c10() {
   return (neuron0x35cb260()*0.145021);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e0c50() {
   return (neuron0x35cb5a0()*-0.0519087);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e0c90() {
   return (neuron0x35cb8e0()*0.789734);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e0cd0() {
   return (neuron0x35cbc20()*1.74754);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e0d10() {
   return (neuron0x35cbf60()*0.105358);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e0d50() {
   return (neuron0x35cc2a0()*-0.345996);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e07e0() {
   return (neuron0x35cc5e0()*0.592037);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e0820() {
   return (neuron0x35ccb40()*0.310294);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e0ea0() {
   return (neuron0x35ccd60()*0.0192037);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e0ee0() {
   return (neuron0x35cd0a0()*0.462904);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e0f20() {
   return (neuron0x35cd3e0()*-0.581872);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e0f60() {
   return (neuron0x35cd720()*-0.294413);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e0fa0() {
   return (neuron0x35cda60()*0.0454072);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e0fe0() {
   return (neuron0x35cdda0()*0.152613);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e1360() {
   return (neuron0x35c9270()*-0.0047757);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e13a0() {
   return (neuron0x35c9520()*0.0676445);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e13e0() {
   return (neuron0x35c9860()*-3.02193);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e1420() {
   return (neuron0x35c9ba0()*-0.0933689);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e1460() {
   return (neuron0x35c9ee0()*0.107947);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e14a0() {
   return (neuron0x35ca220()*0.0108733);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e14e0() {
   return (neuron0x35ca560()*0.0593317);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e1520() {
   return (neuron0x35ca8a0()*0.0704694);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e1560() {
   return (neuron0x35cabe0()*0.0625568);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e15a0() {
   return (neuron0x35caf20()*0.0344506);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e15e0() {
   return (neuron0x35cb260()*0.0530299);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e1620() {
   return (neuron0x35cb5a0()*0.0268752);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e1660() {
   return (neuron0x35cb8e0()*0.0435206);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e16a0() {
   return (neuron0x35cbc20()*-0.00537363);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e16e0() {
   return (neuron0x35cbf60()*0.0713817);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e1720() {
   return (neuron0x35cc2a0()*0.0282117);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e11b0() {
   return (neuron0x35cc5e0()*0.0129786);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e11f0() {
   return (neuron0x35ccb40()*0.0870631);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e1870() {
   return (neuron0x35ccd60()*0.087505);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e18b0() {
   return (neuron0x35cd0a0()*-0.0809322);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e18f0() {
   return (neuron0x35cd3e0()*0.000280722);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e1930() {
   return (neuron0x35cd720()*-0.0165267);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e1970() {
   return (neuron0x35cda60()*0.127299);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e19b0() {
   return (neuron0x35cdda0()*0.805876);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e1d30() {
   return (neuron0x35c9270()*0.357138);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e1d70() {
   return (neuron0x35c9520()*0.439268);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e1db0() {
   return (neuron0x35c9860()*-0.123463);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e1df0() {
   return (neuron0x35c9ba0()*2.5235);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e1e30() {
   return (neuron0x35c9ee0()*-1.13473);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e1e70() {
   return (neuron0x35ca220()*-0.17364);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e1eb0() {
   return (neuron0x35ca560()*-1.543);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e1ef0() {
   return (neuron0x35ca8a0()*-2.48235);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e1f30() {
   return (neuron0x35cabe0()*-1.10903);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e1f70() {
   return (neuron0x35caf20()*-0.662663);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e1fb0() {
   return (neuron0x35cb260()*0.237873);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e1ff0() {
   return (neuron0x35cb5a0()*2.03535);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e2030() {
   return (neuron0x35cb8e0()*1.37081);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e2070() {
   return (neuron0x35cbc20()*-0.401552);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e20b0() {
   return (neuron0x35cbf60()*0.305814);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e20f0() {
   return (neuron0x35cc2a0()*0.901167);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e1b80() {
   return (neuron0x35cc5e0()*-0.00938824);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e1bc0() {
   return (neuron0x35ccb40()*0.127201);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e2240() {
   return (neuron0x35ccd60()*0.377037);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e2280() {
   return (neuron0x35cd0a0()*-0.120653);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e22c0() {
   return (neuron0x35cd3e0()*-0.289321);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e2300() {
   return (neuron0x35cd720()*-0.0846004);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e2340() {
   return (neuron0x35cda60()*0.510876);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e2380() {
   return (neuron0x35cdda0()*-1.08608);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e2700() {
   return (neuron0x35c9270()*-0.000711037);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e2740() {
   return (neuron0x35c9520()*-0.0254578);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e2780() {
   return (neuron0x35c9860()*0.602719);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e27c0() {
   return (neuron0x35c9ba0()*-0.00832224);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e2800() {
   return (neuron0x35c9ee0()*0.015292);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e2840() {
   return (neuron0x35ca220()*-0.0724474);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e2880() {
   return (neuron0x35ca560()*0.00125762);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e28c0() {
   return (neuron0x35ca8a0()*-0.0239849);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e2900() {
   return (neuron0x35cabe0()*-0.00221491);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e2940() {
   return (neuron0x35caf20()*-0.0085146);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e2980() {
   return (neuron0x35cb260()*-0.0655705);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e29c0() {
   return (neuron0x35cb5a0()*1.61131);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e2a00() {
   return (neuron0x35cb8e0()*0.04409);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e2a40() {
   return (neuron0x35cbc20()*0.024235);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e2a80() {
   return (neuron0x35cbf60()*-0.0477983);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e2ac0() {
   return (neuron0x35cc2a0()*0.058811);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e2550() {
   return (neuron0x35cc5e0()*0.00377123);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e2590() {
   return (neuron0x35ccb40()*0.0171638);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e2c10() {
   return (neuron0x35ccd60()*-0.0441211);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e2c50() {
   return (neuron0x35cd0a0()*-0.078282);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e2c90() {
   return (neuron0x35cd3e0()*-0.0233939);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e2cd0() {
   return (neuron0x35cd720()*0.00940372);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e2d10() {
   return (neuron0x35cda60()*-0.0162498);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e2d50() {
   return (neuron0x35cdda0()*7.1214);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e30d0() {
   return (neuron0x35c9270()*-1.09966);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e3110() {
   return (neuron0x35c9520()*-0.700658);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e3150() {
   return (neuron0x35c9860()*-0.773539);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e3190() {
   return (neuron0x35c9ba0()*-0.247369);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e31d0() {
   return (neuron0x35c9ee0()*-0.0385455);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e3210() {
   return (neuron0x35ca220()*-0.337148);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e3250() {
   return (neuron0x35ca560()*-0.297326);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e3290() {
   return (neuron0x35ca8a0()*0.936631);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e32d0() {
   return (neuron0x35cabe0()*-0.695413);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e3310() {
   return (neuron0x35caf20()*-0.253849);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e3350() {
   return (neuron0x35cb260()*0.00202555);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e3390() {
   return (neuron0x35cb5a0()*-0.897252);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e33d0() {
   return (neuron0x35cb8e0()*-0.6131);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e3410() {
   return (neuron0x35cbc20()*0.113583);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e3450() {
   return (neuron0x35cbf60()*0.653552);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e3490() {
   return (neuron0x35cc2a0()*-1.33065);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e2f20() {
   return (neuron0x35cc5e0()*-0.00755213);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e2f60() {
   return (neuron0x35ccb40()*-1.54232);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e35e0() {
   return (neuron0x35ccd60()*0.0512966);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e3620() {
   return (neuron0x35cd0a0()*0.836569);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e3660() {
   return (neuron0x35cd3e0()*-0.0880657);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e36a0() {
   return (neuron0x35cd720()*0.939175);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e36e0() {
   return (neuron0x35cda60()*-1.22141);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e3720() {
   return (neuron0x35cdda0()*1.9363);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e3aa0() {
   return (neuron0x35c9270()*0.199214);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d8070() {
   return (neuron0x35c9520()*-0.0255802);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d80b0() {
   return (neuron0x35c9860()*-0.265497);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d80f0() {
   return (neuron0x35c9ba0()*-0.0801468);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d8340() {
   return (neuron0x35c9ee0()*-0.135409);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d8380() {
   return (neuron0x35ca220()*0.112117);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d83c0() {
   return (neuron0x35ca560()*-0.0166831);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d8610() {
   return (neuron0x35ca8a0()*0.173246);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d8650() {
   return (neuron0x35cabe0()*0.0219927);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d88a0() {
   return (neuron0x35caf20()*0.05333);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d88e0() {
   return (neuron0x35cb260()*0.100804);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d8920() {
   return (neuron0x35cb5a0()*0.779413);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d8b70() {
   return (neuron0x35cb8e0()*0.145604);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d8bb0() {
   return (neuron0x35cbc20()*0.0558546);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d8e00() {
   return (neuron0x35cbf60()*0.25642);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d8e40() {
   return (neuron0x35cc2a0()*0.300984);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e38f0() {
   return (neuron0x35cc5e0()*0.0318971);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e3930() {
   return (neuron0x35ccb40()*0.134778);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d8f90() {
   return (neuron0x35ccd60()*0.331368);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d94a0() {
   return (neuron0x35cd0a0()*0.108011);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d94e0() {
   return (neuron0x35cd3e0()*-0.0722162);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d9520() {
   return (neuron0x35cd720()*-0.025376);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d9770() {
   return (neuron0x35cda60()*0.0978649);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d97b0() {
   return (neuron0x35cdda0()*3.49883);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d9060() {
   return (neuron0x35c9270()*0.036091);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d90a0() {
   return (neuron0x35c9520()*-0.0290325);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d90e0() {
   return (neuron0x35c9860()*-0.583945);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d9120() {
   return (neuron0x35c9ba0()*-0.000996395);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d9aa0() {
   return (neuron0x35c9ee0()*-0.0129175);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e5df0() {
   return (neuron0x35ca220()*0.0200567);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e5e30() {
   return (neuron0x35ca560()*0.0260456);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e5e70() {
   return (neuron0x35ca8a0()*0.0206501);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e5eb0() {
   return (neuron0x35cabe0()*0.0237516);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e5ef0() {
   return (neuron0x35caf20()*0.0405022);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e5f30() {
   return (neuron0x35cb260()*0.0188503);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e5f70() {
   return (neuron0x35cb5a0()*-0.164484);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e5fb0() {
   return (neuron0x35cb8e0()*0.0146198);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e5ff0() {
   return (neuron0x35cbc20()*0.00646503);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e6030() {
   return (neuron0x35cbf60()*0.0379898);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e6070() {
   return (neuron0x35cc2a0()*0.0476955);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d9980() {
   return (neuron0x35cc5e0()*0.0241657);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d99c0() {
   return (neuron0x35ccb40()*0.0194969);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e61c0() {
   return (neuron0x35ccd60()*0.0251229);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e6200() {
   return (neuron0x35cd0a0()*0.0178249);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e6240() {
   return (neuron0x35cd3e0()*0.0120838);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e6280() {
   return (neuron0x35cd720()*-0.00959576);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e62c0() {
   return (neuron0x35cda60()*-0.00246295);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e6300() {
   return (neuron0x35cdda0()*1.40264);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e6680() {
   return (neuron0x35c9270()*-0.0198037);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e66c0() {
   return (neuron0x35c9520()*0.00835528);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e6700() {
   return (neuron0x35c9860()*0.816706);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e6740() {
   return (neuron0x35c9ba0()*-0.0168496);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e6780() {
   return (neuron0x35c9ee0()*0.024472);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e67c0() {
   return (neuron0x35ca220()*-0.0327512);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e6800() {
   return (neuron0x35ca560()*0.0276454);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e6840() {
   return (neuron0x35ca8a0()*-0.0382144);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e6880() {
   return (neuron0x35cabe0()*-0.0399233);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e68c0() {
   return (neuron0x35caf20()*-0.0356508);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e6900() {
   return (neuron0x35cb260()*-0.0352973);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e6940() {
   return (neuron0x35cb5a0()*2.60912);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e6980() {
   return (neuron0x35cb8e0()*-0.0194402);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e69c0() {
   return (neuron0x35cbc20()*-0.0133841);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e6a00() {
   return (neuron0x35cbf60()*-0.0159854);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e6a40() {
   return (neuron0x35cc2a0()*0.00453641);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e64d0() {
   return (neuron0x35cc5e0()*-0.0232088);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e6510() {
   return (neuron0x35ccb40()*-0.0290683);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e6b90() {
   return (neuron0x35ccd60()*0.00699277);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e6bd0() {
   return (neuron0x35cd0a0()*-0.0535059);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e6c10() {
   return (neuron0x35cd3e0()*0.00862855);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e6c50() {
   return (neuron0x35cd720()*0.00523539);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e6c90() {
   return (neuron0x35cda60()*0.00170249);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e6cd0() {
   return (neuron0x35cdda0()*0.511613);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e7050() {
   return (neuron0x35c9270()*-0.022668);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e7090() {
   return (neuron0x35c9520()*-0.00231531);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e70d0() {
   return (neuron0x35c9860()*-0.0346563);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e7110() {
   return (neuron0x35c9ba0()*2.39538);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e7150() {
   return (neuron0x35c9ee0()*-0.0106848);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e7190() {
   return (neuron0x35ca220()*-0.00382339);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e71d0() {
   return (neuron0x35ca560()*-0.0287394);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e7210() {
   return (neuron0x35ca8a0()*-0.0136397);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e7250() {
   return (neuron0x35cabe0()*-0.0143156);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e7290() {
   return (neuron0x35caf20()*-0.00669295);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e72d0() {
   return (neuron0x35cb260()*0.0246244);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e7310() {
   return (neuron0x35cb5a0()*-0.756883);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e7350() {
   return (neuron0x35cb8e0()*0.0404573);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e7390() {
   return (neuron0x35cbc20()*-0.0370243);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e73d0() {
   return (neuron0x35cbf60()*0.039234);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e7410() {
   return (neuron0x35cc2a0()*0.00522856);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e6ea0() {
   return (neuron0x35cc5e0()*-0.0338916);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e6ee0() {
   return (neuron0x35ccb40()*0.018913);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e7560() {
   return (neuron0x35ccd60()*0.028453);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e75a0() {
   return (neuron0x35cd0a0()*-0.0132127);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e75e0() {
   return (neuron0x35cd3e0()*0.00248511);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e7620() {
   return (neuron0x35cd720()*-0.00751208);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e7660() {
   return (neuron0x35cda60()*-0.00521771);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e76a0() {
   return (neuron0x35cdda0()*0.0276898);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e7a20() {
   return (neuron0x35c9270()*-0.59743);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e7a60() {
   return (neuron0x35c9520()*0.576231);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e7aa0() {
   return (neuron0x35c9860()*2.01049);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e7ae0() {
   return (neuron0x35c9ba0()*0.13537);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e7b20() {
   return (neuron0x35c9ee0()*-0.147746);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e7b60() {
   return (neuron0x35ca220()*-0.186488);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e7ba0() {
   return (neuron0x35ca560()*0.583001);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e7be0() {
   return (neuron0x35ca8a0()*0.85562);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e7c20() {
   return (neuron0x35cabe0()*0.742197);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e7c60() {
   return (neuron0x35caf20()*-1.82372);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e7ca0() {
   return (neuron0x35cb260()*0.619414);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e7ce0() {
   return (neuron0x35cb5a0()*-0.556776);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e7d20() {
   return (neuron0x35cb8e0()*0.18387);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e7d60() {
   return (neuron0x35cbc20()*0.892343);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e7da0() {
   return (neuron0x35cbf60()*0.459024);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e7de0() {
   return (neuron0x35cc2a0()*0.69388);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e7870() {
   return (neuron0x35cc5e0()*0.268065);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e78b0() {
   return (neuron0x35ccb40()*0.609609);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e7f30() {
   return (neuron0x35ccd60()*-2.94209);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e7f70() {
   return (neuron0x35cd0a0()*-0.8641);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e7fb0() {
   return (neuron0x35cd3e0()*-0.3164);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e7ff0() {
   return (neuron0x35cd720()*-1.50114);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e8030() {
   return (neuron0x35cda60()*1.00099);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e8070() {
   return (neuron0x35cdda0()*-3.77098);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e83f0() {
   return (neuron0x35c9270()*0.100136);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e8430() {
   return (neuron0x35c9520()*0.0444486);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e8470() {
   return (neuron0x35c9860()*-2.36623);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e84b0() {
   return (neuron0x35c9ba0()*0.0612648);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e84f0() {
   return (neuron0x35c9ee0()*-0.00896698);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e8530() {
   return (neuron0x35ca220()*0.0860282);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e8570() {
   return (neuron0x35ca560()*0.0507991);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e85b0() {
   return (neuron0x35ca8a0()*0.14157);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e85f0() {
   return (neuron0x35cabe0()*0.0235213);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e8630() {
   return (neuron0x35caf20()*0.0646558);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e8670() {
   return (neuron0x35cb260()*0.0270702);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e86b0() {
   return (neuron0x35cb5a0()*0.0335645);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e86f0() {
   return (neuron0x35cb8e0()*0.18212);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e8730() {
   return (neuron0x35cbc20()*0.0605573);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e8770() {
   return (neuron0x35cbf60()*0.0865822);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e87b0() {
   return (neuron0x35cc2a0()*0.116944);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e8240() {
   return (neuron0x35cc5e0()*0.110763);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e8280() {
   return (neuron0x35ccb40()*0.128302);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e8900() {
   return (neuron0x35ccd60()*0.0479052);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e8940() {
   return (neuron0x35cd0a0()*0.0279076);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e8980() {
   return (neuron0x35cd3e0()*-0.0238346);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e89c0() {
   return (neuron0x35cd720()*-0.0465936);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e8a00() {
   return (neuron0x35cda60()*-0.0707924);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e8a40() {
   return (neuron0x35cdda0()*-0.525915);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e8dc0() {
   return (neuron0x35c9270()*-0.19921);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e8e00() {
   return (neuron0x35c9520()*2.421);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e8e40() {
   return (neuron0x35c9860()*0.138547);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e8e80() {
   return (neuron0x35c9ba0()*0.145564);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e8ec0() {
   return (neuron0x35c9ee0()*0.110833);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e8f00() {
   return (neuron0x35ca220()*0.381249);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e8f40() {
   return (neuron0x35ca560()*0.624363);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e8f80() {
   return (neuron0x35ca8a0()*-0.476381);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e8fc0() {
   return (neuron0x35cabe0()*-0.217541);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e9000() {
   return (neuron0x35caf20()*-0.131693);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e9040() {
   return (neuron0x35cb260()*-0.422046);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e9080() {
   return (neuron0x35cb5a0()*2.62256);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e90c0() {
   return (neuron0x35cb8e0()*-0.346674);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e9100() {
   return (neuron0x35cbc20()*-0.13148);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e9140() {
   return (neuron0x35cbf60()*-0.371909);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e9180() {
   return (neuron0x35cc2a0()*-0.531151);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e8c10() {
   return (neuron0x35cc5e0()*0.140564);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e8c50() {
   return (neuron0x35ccb40()*0.155723);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e92d0() {
   return (neuron0x35ccd60()*0.658241);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e9310() {
   return (neuron0x35cd0a0()*1.1487);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e9350() {
   return (neuron0x35cd3e0()*-0.084084);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e9390() {
   return (neuron0x35cd720()*-0.270726);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e93d0() {
   return (neuron0x35cda60()*0.194773);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e9410() {
   return (neuron0x35cdda0()*3.6873);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e9790() {
   return (neuron0x35c9270()*0.0528872);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e97d0() {
   return (neuron0x35c9520()*-0.00888386);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e9810() {
   return (neuron0x35c9860()*-0.0403555);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e9850() {
   return (neuron0x35c9ba0()*-0.0059544);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e9890() {
   return (neuron0x35c9ee0()*-0.0171948);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e98d0() {
   return (neuron0x35ca220()*0.00113267);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e9910() {
   return (neuron0x35ca560()*-0.00477392);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e9950() {
   return (neuron0x35ca8a0()*-0.0297486);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e9990() {
   return (neuron0x35cabe0()*0.0513956);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e99d0() {
   return (neuron0x35caf20()*0.0387736);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e9a10() {
   return (neuron0x35cb260()*-0.0176808);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e9a50() {
   return (neuron0x35cb5a0()*0.545444);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e9a90() {
   return (neuron0x35cb8e0()*0.0424667);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e9ad0() {
   return (neuron0x35cbc20()*0.047803);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e9b10() {
   return (neuron0x35cbf60()*-0.013637);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e9b50() {
   return (neuron0x35cc2a0()*0.0145348);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e95e0() {
   return (neuron0x35cc5e0()*0.0192688);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e9620() {
   return (neuron0x35ccb40()*0.0346417);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e9ca0() {
   return (neuron0x35ccd60()*0.0268789);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e9ce0() {
   return (neuron0x35cd0a0()*0.00574517);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e9d20() {
   return (neuron0x35cd3e0()*-0.0220798);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e9d60() {
   return (neuron0x35cd720()*0.00378399);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e9da0() {
   return (neuron0x35cda60()*0.00987113);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e9de0() {
   return (neuron0x35cdda0()*3.77984);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ea160() {
   return (neuron0x35c9270()*-0.0487208);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ea1a0() {
   return (neuron0x35c9520()*-0.041022);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ea1e0() {
   return (neuron0x35c9860()*0.822905);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ea220() {
   return (neuron0x35c9ba0()*-0.037467);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ea260() {
   return (neuron0x35c9ee0()*0.053736);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ea2a0() {
   return (neuron0x35ca220()*0.0394695);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ea2e0() {
   return (neuron0x35ca560()*0.0975623);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ea320() {
   return (neuron0x35ca8a0()*0.0343524);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ea360() {
   return (neuron0x35cabe0()*0.036526);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ea3a0() {
   return (neuron0x35caf20()*0.102063);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ea3e0() {
   return (neuron0x35cb260()*-0.010161);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ea420() {
   return (neuron0x35cb5a0()*-8.08794);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ea460() {
   return (neuron0x35cb8e0()*0.0168118);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ea4a0() {
   return (neuron0x35cbc20()*0.0256205);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ea4e0() {
   return (neuron0x35cbf60()*0.07212);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ea520() {
   return (neuron0x35cc2a0()*0.0324099);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e9fb0() {
   return (neuron0x35cc5e0()*0.0551452);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e9ff0() {
   return (neuron0x35ccb40()*0.00475781);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ea670() {
   return (neuron0x35ccd60()*-0.0400586);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ea6b0() {
   return (neuron0x35cd0a0()*0.072304);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ea6f0() {
   return (neuron0x35cd3e0()*0.0341554);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ea730() {
   return (neuron0x35cd720()*-0.0126179);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ea770() {
   return (neuron0x35cda60()*-0.00876759);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ea7b0() {
   return (neuron0x35cdda0()*-0.873093);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d3260() {
   return (neuron0x35c9270()*1.13905);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d32a0() {
   return (neuron0x35c9520()*-0.773407);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d32e0() {
   return (neuron0x35c9860()*-1.09819);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d3320() {
   return (neuron0x35c9ba0()*-0.145129);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d3360() {
   return (neuron0x35c9ee0()*0.748456);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d33a0() {
   return (neuron0x35ca220()*-0.821899);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d33e0() {
   return (neuron0x35ca560()*-0.154832);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d3420() {
   return (neuron0x35ca8a0()*-0.365059);
}

double NNfunction_nn_chi1_charge2m::synapse0x35eaf40() {
   return (neuron0x35cabe0()*0.775192);
}

double NNfunction_nn_chi1_charge2m::synapse0x35eaf80() {
   return (neuron0x35caf20()*1.65102);
}

double NNfunction_nn_chi1_charge2m::synapse0x35eafc0() {
   return (neuron0x35cb260()*-0.175289);
}

double NNfunction_nn_chi1_charge2m::synapse0x35eb000() {
   return (neuron0x35cb5a0()*-0.0155546);
}

double NNfunction_nn_chi1_charge2m::synapse0x35eb040() {
   return (neuron0x35cb8e0()*-0.0718058);
}

double NNfunction_nn_chi1_charge2m::synapse0x35eb080() {
   return (neuron0x35cbc20()*0.783994);
}

double NNfunction_nn_chi1_charge2m::synapse0x35eb0c0() {
   return (neuron0x35cbf60()*1.12165);
}

double NNfunction_nn_chi1_charge2m::synapse0x35eb100() {
   return (neuron0x35cc2a0()*-1.23655);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ea980() {
   return (neuron0x35cc5e0()*-0.773749);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ea9c0() {
   return (neuron0x35ccb40()*0.191023);
}

double NNfunction_nn_chi1_charge2m::synapse0x35eb250() {
   return (neuron0x35ccd60()*1.02122);
}

double NNfunction_nn_chi1_charge2m::synapse0x35eb290() {
   return (neuron0x35cd0a0()*0.320336);
}

double NNfunction_nn_chi1_charge2m::synapse0x35eb2d0() {
   return (neuron0x35cd3e0()*-0.422365);
}

double NNfunction_nn_chi1_charge2m::synapse0x35eb310() {
   return (neuron0x35cd720()*-1.12605);
}

double NNfunction_nn_chi1_charge2m::synapse0x35eb350() {
   return (neuron0x35cda60()*1.26946);
}

double NNfunction_nn_chi1_charge2m::synapse0x35eb390() {
   return (neuron0x35cdda0()*0.0143726);
}

double NNfunction_nn_chi1_charge2m::synapse0x35eb710() {
   return (neuron0x35c9270()*0.610895);
}

double NNfunction_nn_chi1_charge2m::synapse0x35eb750() {
   return (neuron0x35c9520()*-1.07842);
}

double NNfunction_nn_chi1_charge2m::synapse0x35eb790() {
   return (neuron0x35c9860()*-1.61131);
}

double NNfunction_nn_chi1_charge2m::synapse0x35eb7d0() {
   return (neuron0x35c9ba0()*-1.25009);
}

double NNfunction_nn_chi1_charge2m::synapse0x35eb810() {
   return (neuron0x35c9ee0()*-0.309061);
}

double NNfunction_nn_chi1_charge2m::synapse0x35eb850() {
   return (neuron0x35ca220()*-0.620816);
}

double NNfunction_nn_chi1_charge2m::synapse0x35eb890() {
   return (neuron0x35ca560()*-0.35713);
}

double NNfunction_nn_chi1_charge2m::synapse0x35eb8d0() {
   return (neuron0x35ca8a0()*-0.227406);
}

double NNfunction_nn_chi1_charge2m::synapse0x35eb910() {
   return (neuron0x35cabe0()*-0.26177);
}

double NNfunction_nn_chi1_charge2m::synapse0x35eb950() {
   return (neuron0x35caf20()*0.700817);
}

double NNfunction_nn_chi1_charge2m::synapse0x35eb990() {
   return (neuron0x35cb260()*-0.157847);
}

double NNfunction_nn_chi1_charge2m::synapse0x35eb9d0() {
   return (neuron0x35cb5a0()*1.22549);
}

double NNfunction_nn_chi1_charge2m::synapse0x35eba10() {
   return (neuron0x35cb8e0()*-0.106212);
}

double NNfunction_nn_chi1_charge2m::synapse0x35eba50() {
   return (neuron0x35cbc20()*1.27109);
}

double NNfunction_nn_chi1_charge2m::synapse0x35eba90() {
   return (neuron0x35cbf60()*0.341362);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ebad0() {
   return (neuron0x35cc2a0()*0.334536);
}

double NNfunction_nn_chi1_charge2m::synapse0x35eb560() {
   return (neuron0x35cc5e0()*0.612514);
}

double NNfunction_nn_chi1_charge2m::synapse0x35eb5a0() {
   return (neuron0x35ccb40()*0.162622);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ebc20() {
   return (neuron0x35ccd60()*-0.152274);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ebc60() {
   return (neuron0x35cd0a0()*-0.878597);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ebca0() {
   return (neuron0x35cd3e0()*-1.85459);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ebce0() {
   return (neuron0x35cd720()*-0.553579);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ebd20() {
   return (neuron0x35cda60()*-0.0339023);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ebd60() {
   return (neuron0x35cdda0()*1.15356);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ec0e0() {
   return (neuron0x35c9270()*-0.527634);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ec120() {
   return (neuron0x35c9520()*-0.304138);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ec160() {
   return (neuron0x35c9860()*-0.0640425);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ec1a0() {
   return (neuron0x35c9ba0()*-0.771946);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ec1e0() {
   return (neuron0x35c9ee0()*-0.238021);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ec220() {
   return (neuron0x35ca220()*1.43311);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ec260() {
   return (neuron0x35ca560()*-0.696608);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ec2a0() {
   return (neuron0x35ca8a0()*0.0747024);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ec2e0() {
   return (neuron0x35cabe0()*0.000976363);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ec320() {
   return (neuron0x35caf20()*0.889462);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ec360() {
   return (neuron0x35cb260()*-1.9071);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ec3a0() {
   return (neuron0x35cb5a0()*-2.20586);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ec3e0() {
   return (neuron0x35cb8e0()*-0.254558);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ec420() {
   return (neuron0x35cbc20()*0.420197);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ec460() {
   return (neuron0x35cbf60()*0.952737);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ec4a0() {
   return (neuron0x35cc2a0()*0.219014);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ebf30() {
   return (neuron0x35cc5e0()*-0.324659);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ebf70() {
   return (neuron0x35ccb40()*0.505369);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dcaa0() {
   return (neuron0x35ccd60()*0.735264);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dcae0() {
   return (neuron0x35cd0a0()*1.5145);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dcb20() {
   return (neuron0x35cd3e0()*-0.922334);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dcb60() {
   return (neuron0x35cd720()*-0.590205);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dcba0() {
   return (neuron0x35cda60()*-0.946355);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dcbe0() {
   return (neuron0x35cdda0()*-0.289577);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dcf60() {
   return (neuron0x35c9270()*0.074711);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dcfa0() {
   return (neuron0x35c9520()*0.0162878);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dcfe0() {
   return (neuron0x35c9860()*1.48422);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dd020() {
   return (neuron0x35c9ba0()*0.0909606);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dd060() {
   return (neuron0x35c9ee0()*-0.00634154);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dd0a0() {
   return (neuron0x35ca220()*0.0677301);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dd0e0() {
   return (neuron0x35ca560()*0.0351985);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dd120() {
   return (neuron0x35ca8a0()*0.0328773);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dd160() {
   return (neuron0x35cabe0()*0.0170958);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dd1a0() {
   return (neuron0x35caf20()*0.0431802);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dd1e0() {
   return (neuron0x35cb260()*0.037191);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dd220() {
   return (neuron0x35cb5a0()*0.233368);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dd260() {
   return (neuron0x35cb8e0()*0.0336524);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dd2a0() {
   return (neuron0x35cbc20()*0.186882);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dd2e0() {
   return (neuron0x35cbf60()*0.125201);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dd320() {
   return (neuron0x35cc2a0()*0.0579245);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dcdb0() {
   return (neuron0x35cc5e0()*0.025339);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dcdf0() {
   return (neuron0x35ccb40()*0.133693);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dd470() {
   return (neuron0x35ccd60()*0.160924);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dd4b0() {
   return (neuron0x35cd0a0()*0.0961944);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dd4f0() {
   return (neuron0x35cd3e0()*-0.0835356);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dd530() {
   return (neuron0x35cd720()*-0.0741809);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dd570() {
   return (neuron0x35cda60()*0.0357888);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dd5b0() {
   return (neuron0x35cdda0()*-6.37796);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dd930() {
   return (neuron0x35c9270()*-0.0916776);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dd970() {
   return (neuron0x35c9520()*-0.0045599);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dd9b0() {
   return (neuron0x35c9860()*0.11451);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dd9f0() {
   return (neuron0x35c9ba0()*2.57693);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dda30() {
   return (neuron0x35c9ee0()*-0.0184029);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dda70() {
   return (neuron0x35ca220()*-0.00369116);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ddab0() {
   return (neuron0x35ca560()*-0.00172619);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ddaf0() {
   return (neuron0x35ca8a0()*0.0202218);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ddb30() {
   return (neuron0x35cabe0()*-0.0156374);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ddb70() {
   return (neuron0x35caf20()*0.00712024);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ddbb0() {
   return (neuron0x35cb260()*0.0559938);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ddbf0() {
   return (neuron0x35cb5a0()*-0.135367);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ddc30() {
   return (neuron0x35cb8e0()*0.0653065);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ddc70() {
   return (neuron0x35cbc20()*0.0146832);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ddcb0() {
   return (neuron0x35cbf60()*0.0155202);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ddcf0() {
   return (neuron0x35cc2a0()*-0.00865654);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dd780() {
   return (neuron0x35cc5e0()*0.0320595);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dd7c0() {
   return (neuron0x35ccb40()*0.0448969);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dde40() {
   return (neuron0x35ccd60()*0.00365775);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dde80() {
   return (neuron0x35cd0a0()*0.0396374);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ddec0() {
   return (neuron0x35cd3e0()*0.00453217);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ddf00() {
   return (neuron0x35cd720()*-0.0197294);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ddf40() {
   return (neuron0x35cda60()*0.00188482);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ddf80() {
   return (neuron0x35cdda0()*-0.202274);
}

double NNfunction_nn_chi1_charge2m::synapse0x35de300() {
   return (neuron0x35c9270()*0.644206);
}

double NNfunction_nn_chi1_charge2m::synapse0x35de340() {
   return (neuron0x35c9520()*1.6349);
}

double NNfunction_nn_chi1_charge2m::synapse0x35de380() {
   return (neuron0x35c9860()*-2.86596);
}

double NNfunction_nn_chi1_charge2m::synapse0x35de3c0() {
   return (neuron0x35c9ba0()*-1.6992);
}

double NNfunction_nn_chi1_charge2m::synapse0x35de400() {
   return (neuron0x35c9ee0()*0.939226);
}

double NNfunction_nn_chi1_charge2m::synapse0x35de440() {
   return (neuron0x35ca220()*-0.482196);
}

double NNfunction_nn_chi1_charge2m::synapse0x35de480() {
   return (neuron0x35ca560()*1.55726);
}

double NNfunction_nn_chi1_charge2m::synapse0x35de4c0() {
   return (neuron0x35ca8a0()*-0.0475181);
}

double NNfunction_nn_chi1_charge2m::synapse0x35de500() {
   return (neuron0x35cabe0()*0.567672);
}

double NNfunction_nn_chi1_charge2m::synapse0x35de540() {
   return (neuron0x35caf20()*-0.408186);
}

double NNfunction_nn_chi1_charge2m::synapse0x35de580() {
   return (neuron0x35cb260()*-0.455761);
}

double NNfunction_nn_chi1_charge2m::synapse0x35de5c0() {
   return (neuron0x35cb5a0()*1.32432);
}

double NNfunction_nn_chi1_charge2m::synapse0x35de600() {
   return (neuron0x35cb8e0()*0.657447);
}

double NNfunction_nn_chi1_charge2m::synapse0x35de640() {
   return (neuron0x35cbc20()*-0.19401);
}

double NNfunction_nn_chi1_charge2m::synapse0x35de680() {
   return (neuron0x35cbf60()*0.382319);
}

double NNfunction_nn_chi1_charge2m::synapse0x35de6c0() {
   return (neuron0x35cc2a0()*-1.17614);
}

double NNfunction_nn_chi1_charge2m::synapse0x35de150() {
   return (neuron0x35cc5e0()*-0.668872);
}

double NNfunction_nn_chi1_charge2m::synapse0x35de190() {
   return (neuron0x35ccb40()*-0.8895);
}

double NNfunction_nn_chi1_charge2m::synapse0x35de810() {
   return (neuron0x35ccd60()*-0.684554);
}

double NNfunction_nn_chi1_charge2m::synapse0x35de850() {
   return (neuron0x35cd0a0()*-0.218706);
}

double NNfunction_nn_chi1_charge2m::synapse0x35de890() {
   return (neuron0x35cd3e0()*-0.184527);
}

double NNfunction_nn_chi1_charge2m::synapse0x35de8d0() {
   return (neuron0x35cd720()*-0.0127598);
}

double NNfunction_nn_chi1_charge2m::synapse0x35de910() {
   return (neuron0x35cda60()*0.0245118);
}

double NNfunction_nn_chi1_charge2m::synapse0x35de950() {
   return (neuron0x35cdda0()*4.3934);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f0820() {
   return (neuron0x35c9270()*-0.012433);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f0860() {
   return (neuron0x35c9520()*23.9978);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f08a0() {
   return (neuron0x35c9860()*-0.135334);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f08e0() {
   return (neuron0x35c9ba0()*0.0159783);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f0920() {
   return (neuron0x35c9ee0()*-0.013094);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f0960() {
   return (neuron0x35ca220()*0.0285686);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f09a0() {
   return (neuron0x35ca560()*-0.0126214);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f09e0() {
   return (neuron0x35ca8a0()*-0.0289986);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f0a20() {
   return (neuron0x35cabe0()*-0.00432045);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f0a60() {
   return (neuron0x35caf20()*-0.0145852);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f0aa0() {
   return (neuron0x35cb260()*-0.00469576);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f0ae0() {
   return (neuron0x35cb5a0()*0.244751);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f0b20() {
   return (neuron0x35cb8e0()*0.0419358);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f0b60() {
   return (neuron0x35cbc20()*-0.014024);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f0ba0() {
   return (neuron0x35cbf60()*0.00587402);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f0be0() {
   return (neuron0x35cc2a0()*0.0034951);
}

double NNfunction_nn_chi1_charge2m::synapse0x35de990() {
   return (neuron0x35cc5e0()*-0.00163325);
}

double NNfunction_nn_chi1_charge2m::synapse0x35de9d0() {
   return (neuron0x35ccb40()*0.0141357);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f0d30() {
   return (neuron0x35ccd60()*-0.0173636);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f0d70() {
   return (neuron0x35cd0a0()*-0.0576923);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f0db0() {
   return (neuron0x35cd3e0()*0.0142201);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f0df0() {
   return (neuron0x35cd720()*-0.0311947);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f0e30() {
   return (neuron0x35cda60()*0.00942788);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f0e70() {
   return (neuron0x35cdda0()*0.268957);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f11f0() {
   return (neuron0x35c9270()*-1.18971);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f1230() {
   return (neuron0x35c9520()*0.241345);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f1270() {
   return (neuron0x35c9860()*2.25613);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f12b0() {
   return (neuron0x35c9ba0()*0.3346);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f12f0() {
   return (neuron0x35c9ee0()*-0.00398775);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f1330() {
   return (neuron0x35ca220()*0.377823);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f1370() {
   return (neuron0x35ca560()*0.231008);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f13b0() {
   return (neuron0x35ca8a0()*0.0762535);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f13f0() {
   return (neuron0x35cabe0()*-0.193834);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f1430() {
   return (neuron0x35caf20()*-0.288396);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f1470() {
   return (neuron0x35cb260()*0.315167);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f14b0() {
   return (neuron0x35cb5a0()*0.567635);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f14f0() {
   return (neuron0x35cb8e0()*0.174573);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f1530() {
   return (neuron0x35cbc20()*0.457154);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f1570() {
   return (neuron0x35cbf60()*0.384766);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f15b0() {
   return (neuron0x35cc2a0()*-0.0820118);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f1040() {
   return (neuron0x35cc5e0()*-0.0794176);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f1080() {
   return (neuron0x35ccb40()*-0.23851);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f1700() {
   return (neuron0x35ccd60()*0.26754);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f1740() {
   return (neuron0x35cd0a0()*-0.310696);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f1780() {
   return (neuron0x35cd3e0()*-0.267958);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f17c0() {
   return (neuron0x35cd720()*0.00827228);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f1800() {
   return (neuron0x35cda60()*0.135654);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f1840() {
   return (neuron0x35cdda0()*-0.961469);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f1bc0() {
   return (neuron0x35c9270()*0.211579);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f1c00() {
   return (neuron0x35c9520()*0.0503205);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f1c40() {
   return (neuron0x35c9860()*3.06208);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f1c80() {
   return (neuron0x35c9ba0()*0.0793311);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f1cc0() {
   return (neuron0x35c9ee0()*-0.0362957);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f1d00() {
   return (neuron0x35ca220()*0.0221494);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f1d40() {
   return (neuron0x35ca560()*-0.0758206);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f1d80() {
   return (neuron0x35ca8a0()*0.0176399);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f1dc0() {
   return (neuron0x35cabe0()*-0.0318012);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f1e00() {
   return (neuron0x35caf20()*-0.0495172);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f1e40() {
   return (neuron0x35cb260()*0.0178747);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f1e80() {
   return (neuron0x35cb5a0()*0.29121);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f1ec0() {
   return (neuron0x35cb8e0()*-0.0122754);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f1f00() {
   return (neuron0x35cbc20()*-0.0304406);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f1f40() {
   return (neuron0x35cbf60()*-0.0514293);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f1f80() {
   return (neuron0x35cc2a0()*0.0192089);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f1a10() {
   return (neuron0x35cc5e0()*-0.0411895);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f1a50() {
   return (neuron0x35ccb40()*-0.0757584);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f20d0() {
   return (neuron0x35ccd60()*0.0239569);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f2110() {
   return (neuron0x35cd0a0()*-0.0515854);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f2150() {
   return (neuron0x35cd3e0()*-0.0449312);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f2190() {
   return (neuron0x35cd720()*-0.054794);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f21d0() {
   return (neuron0x35cda60()*0.0398515);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f2210() {
   return (neuron0x35cdda0()*4.96719);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f2590() {
   return (neuron0x35c9270()*0.368236);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f25d0() {
   return (neuron0x35c9520()*-1.06329);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f2610() {
   return (neuron0x35c9860()*-1.11808);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f2650() {
   return (neuron0x35c9ba0()*0.588554);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f2690() {
   return (neuron0x35c9ee0()*-0.797489);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f26d0() {
   return (neuron0x35ca220()*0.672207);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f2710() {
   return (neuron0x35ca560()*0.285977);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f2750() {
   return (neuron0x35ca8a0()*-0.617666);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f2790() {
   return (neuron0x35cabe0()*0.255201);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f27d0() {
   return (neuron0x35caf20()*-0.749428);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f2810() {
   return (neuron0x35cb260()*0.195327);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f2850() {
   return (neuron0x35cb5a0()*-1.17499);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f2890() {
   return (neuron0x35cb8e0()*-0.64474);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f28d0() {
   return (neuron0x35cbc20()*-0.0793659);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f2910() {
   return (neuron0x35cbf60()*-0.938591);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f2950() {
   return (neuron0x35cc2a0()*-0.175761);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f23e0() {
   return (neuron0x35cc5e0()*0.436482);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f2420() {
   return (neuron0x35ccb40()*0.893942);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f2aa0() {
   return (neuron0x35ccd60()*0.0251682);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f2ae0() {
   return (neuron0x35cd0a0()*2.01176);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f2b20() {
   return (neuron0x35cd3e0()*-1.03311);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f2b60() {
   return (neuron0x35cd720()*-1.73033);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f2ba0() {
   return (neuron0x35cda60()*0.00869398);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f2be0() {
   return (neuron0x35cdda0()*0.76422);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cf170() {
   return (neuron0x35ce210()*0.216203);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cf1b0() {
   return (neuron0x35ceb60()*-2.29334);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d0690() {
   return (neuron0x35cf640()*0.396155);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d06d0() {
   return (neuron0x3392990()*8.56815);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d1060() {
   return (neuron0x35d03e0()*-0.636656);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d10a0() {
   return (neuron0x35d0db0()*0.0749929);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d1e30() {
   return (neuron0x35d1b80()*0.192831);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d1e70() {
   return (neuron0x35d2550()*-1.53898);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d2800() {
   return (neuron0x35d2f20()*2.89291);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d2840() {
   return (neuron0x35d3a00()*3.11208);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d31d0() {
   return (neuron0x35d43d0()*-3.54681);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d3210() {
   return (neuron0x35d14b0()*6.14019);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d3cb0() {
   return (neuron0x35d5f80()*1.49613);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d3cf0() {
   return (neuron0x35d6950()*-0.420597);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d4680() {
   return (neuron0x35d7320()*-0.435418);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d46c0() {
   return (neuron0x35d7cf0()*-6.98462);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d1760() {
   return (neuron0x35d9b00()*-0.0945033);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d17a0() {
   return (neuron0x35d9de0()*-0.988818);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d6230() {
   return (neuron0x35da7b0()*0.43066);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d6270() {
   return (neuron0x35db180()*-1.64385);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d6c00() {
   return (neuron0x35dbb50()*-1.11112);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d6c40() {
   return (neuron0x35dc520()*0.57777);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d75d0() {
   return (neuron0x35d5070()*0.342823);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d7610() {
   return (neuron0x35d5a40()*-1.20843);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d7fa0() {
   return (neuron0x35df2b0()*0.389618);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d7fe0() {
   return (neuron0x35dfc80()*0.428592);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cc180() {
   return (neuron0x35e0650()*0.0305547);
}

double NNfunction_nn_chi1_charge2m::synapse0x35cc1c0() {
   return (neuron0x35e1020()*1.24209);
}

double NNfunction_nn_chi1_charge2m::synapse0x35da090() {
   return (neuron0x35e19f0()*-0.093986);
}

double NNfunction_nn_chi1_charge2m::synapse0x35da0d0() {
   return (neuron0x35e23c0()*4.76303);
}

double NNfunction_nn_chi1_charge2m::synapse0x35daa60() {
   return (neuron0x35e2d90()*-0.393701);
}

double NNfunction_nn_chi1_charge2m::synapse0x35daaa0() {
   return (neuron0x35e3760()*1.30511);
}

double NNfunction_nn_chi1_charge2m::synapse0x35db430() {
   return (neuron0x35d97f0()*-3.02402);
}

double NNfunction_nn_chi1_charge2m::synapse0x35db470() {
   return (neuron0x35e6340()*-1.72386);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dbe00() {
   return (neuron0x35e6d10()*4.05199);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dbe40() {
   return (neuron0x35e76e0()*-0.372696);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dc7d0() {
   return (neuron0x35e80b0()*-1.53351);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dc810() {
   return (neuron0x35e8a80()*-0.342981);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d5320() {
   return (neuron0x35e9450()*-5.55959);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d5360() {
   return (neuron0x35e9e20()*3.63219);
}

double NNfunction_nn_chi1_charge2m::synapse0x35debd0() {
   return (neuron0x35ea7f0()*0.598309);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dec10() {
   return (neuron0x35eb3d0()*0.483505);
}

double NNfunction_nn_chi1_charge2m::synapse0x35df560() {
   return (neuron0x35ebda0()*0.0491492);
}

double NNfunction_nn_chi1_charge2m::synapse0x35df5a0() {
   return (neuron0x35dcc20()*1.98301);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dff30() {
   return (neuron0x35dd5f0()*-2.99946);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dff70() {
   return (neuron0x35ddfc0()*0.240509);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e0900() {
   return (neuron0x35f0600()*2.35766);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e0940() {
   return (neuron0x35f0eb0()*0.553215);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e12d0() {
   return (neuron0x35f1880()*0.60063);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e1310() {
   return (neuron0x35f2250()*0.397513);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e3a10() {
   return (neuron0x35ce210()*0.205686);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e3a50() {
   return (neuron0x35ceb60()*-1.08608);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d8fd0() {
   return (neuron0x35cf640()*-0.436867);
}

double NNfunction_nn_chi1_charge2m::synapse0x35d9010() {
   return (neuron0x3392990()*1.56588);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e65f0() {
   return (neuron0x35d03e0()*-0.389298);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e6630() {
   return (neuron0x35d0db0()*0.301344);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e6fc0() {
   return (neuron0x35d1b80()*0.350761);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e7000() {
   return (neuron0x35d2550()*-4.09744);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e7990() {
   return (neuron0x35d2f20()*-0.886103);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e79d0() {
   return (neuron0x35d3a00()*-1.09281);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e8360() {
   return (neuron0x35d43d0()*1.91106);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e83a0() {
   return (neuron0x35d14b0()*2.37978);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e8d30() {
   return (neuron0x35d5f80()*-0.218008);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e8d70() {
   return (neuron0x35d6950()*-0.230713);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e9700() {
   return (neuron0x35d7320()*-0.121133);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e9740() {
   return (neuron0x35d7cf0()*-2.81727);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ea0d0() {
   return (neuron0x35d9b00()*-0.41687);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ea110() {
   return (neuron0x35d9de0()*-0.397184);
}

double NNfunction_nn_chi1_charge2m::synapse0x35eaaa0() {
   return (neuron0x35da7b0()*0.271788);
}

double NNfunction_nn_chi1_charge2m::synapse0x35eaae0() {
   return (neuron0x35db180()*1.20174);
}

double NNfunction_nn_chi1_charge2m::synapse0x35eb680() {
   return (neuron0x35dbb50()*-1.05207);
}

double NNfunction_nn_chi1_charge2m::synapse0x35eb6c0() {
   return (neuron0x35dc520()*1.97392);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ec050() {
   return (neuron0x35d5070()*0.355033);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ec090() {
   return (neuron0x35d5a40()*-1.07017);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dced0() {
   return (neuron0x35df2b0()*0.292972);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dcf10() {
   return (neuron0x35dfc80()*-0.343566);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dd8a0() {
   return (neuron0x35e0650()*-0.304449);
}

double NNfunction_nn_chi1_charge2m::synapse0x35dd8e0() {
   return (neuron0x35e1020()*0.505904);
}

double NNfunction_nn_chi1_charge2m::synapse0x35de270() {
   return (neuron0x35e19f0()*-0.292541);
}

double NNfunction_nn_chi1_charge2m::synapse0x35de2b0() {
   return (neuron0x35e23c0()*-1.90441);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f0790() {
   return (neuron0x35e2d90()*-0.215112);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f07d0() {
   return (neuron0x35e3760()*-0.625235);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f1160() {
   return (neuron0x35d97f0()*2.41225);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f11a0() {
   return (neuron0x35e6340()*0.980607);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f1b30() {
   return (neuron0x35e6d10()*-1.45035);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f1b70() {
   return (neuron0x35e76e0()*-0.0061998);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f2500() {
   return (neuron0x35e80b0()*0.212174);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f2540() {
   return (neuron0x35e8a80()*-0.236473);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ce430() {
   return (neuron0x35e9450()*-0.575612);
}

double NNfunction_nn_chi1_charge2m::synapse0x35ce470() {
   return (neuron0x35e9e20()*-0.318213);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e1ca0() {
   return (neuron0x35ea7f0()*0.286159);
}

double NNfunction_nn_chi1_charge2m::synapse0x35e1ce0() {
   return (neuron0x35eb3d0()*0.0940074);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f2c20() {
   return (neuron0x35ebda0()*-0.00829894);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f2c60() {
   return (neuron0x35dcc20()*3.90682);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f2ca0() {
   return (neuron0x35dd5f0()*1.32059);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f2ce0() {
   return (neuron0x35ddfc0()*0.0017315);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f9b90() {
   return (neuron0x35f0600()*1.10521);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f9bd0() {
   return (neuron0x35f0eb0()*0.554314);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f9c10() {
   return (neuron0x35f1880()*0.45725);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f9c50() {
   return (neuron0x35f2250()*0.215187);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f9fd0() {
   return (neuron0x35ce210()*0.241342);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fa010() {
   return (neuron0x35ceb60()*-2.68691);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fa050() {
   return (neuron0x35cf640()*-0.686446);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fa090() {
   return (neuron0x3392990()*0.641489);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fa0d0() {
   return (neuron0x35d03e0()*-0.540097);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fa110() {
   return (neuron0x35d0db0()*0.241978);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fa150() {
   return (neuron0x35d1b80()*0.368919);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fa190() {
   return (neuron0x35d2550()*-3.41894);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fa1d0() {
   return (neuron0x35d2f20()*-0.547229);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fa210() {
   return (neuron0x35d3a00()*-0.600057);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fa250() {
   return (neuron0x35d43d0()*1.29491);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fa290() {
   return (neuron0x35d14b0()*2.832);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fa2d0() {
   return (neuron0x35d5f80()*0.0912549);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fa310() {
   return (neuron0x35d6950()*-0.283659);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fa350() {
   return (neuron0x35d7320()*-0.214777);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fa390() {
   return (neuron0x35d7cf0()*-1.58374);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f9e20() {
   return (neuron0x35d9b00()*-0.365736);
}

double NNfunction_nn_chi1_charge2m::synapse0x35f9e60() {
   return (neuron0x35d9de0()*-0.623443);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fa4e0() {
   return (neuron0x35da7b0()*0.331369);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fa520() {
   return (neuron0x35db180()*-0.293036);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fa560() {
   return (neuron0x35dbb50()*-1.39625);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fa5a0() {
   return (neuron0x35dc520()*0.968436);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fa5e0() {
   return (neuron0x35d5070()*0.425224);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fa620() {
   return (neuron0x35d5a40()*-1.43041);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fa660() {
   return (neuron0x35df2b0()*0.347622);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fa6a0() {
   return (neuron0x35dfc80()*-0.588837);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fa6e0() {
   return (neuron0x35e0650()*-0.337772);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fa720() {
   return (neuron0x35e1020()*0.948061);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fa760() {
   return (neuron0x35e19f0()*-0.277292);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fa7a0() {
   return (neuron0x35e23c0()*-1.19104);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fa7e0() {
   return (neuron0x35e2d90()*-0.277544);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fa820() {
   return (neuron0x35e3760()*-0.339337);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fa3d0() {
   return (neuron0x35d97f0()*-0.117339);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fa410() {
   return (neuron0x35e6340()*1.48744);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fa450() {
   return (neuron0x35e6d10()*-0.66469);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fa490() {
   return (neuron0x35e76e0()*-0.0929998);
}

double NNfunction_nn_chi1_charge2m::synapse0x35faa70() {
   return (neuron0x35e80b0()*0.702953);
}

double NNfunction_nn_chi1_charge2m::synapse0x35faab0() {
   return (neuron0x35e8a80()*-0.342825);
}

double NNfunction_nn_chi1_charge2m::synapse0x35faaf0() {
   return (neuron0x35e9450()*-1.09706);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fab30() {
   return (neuron0x35e9e20()*0.514488);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fab70() {
   return (neuron0x35ea7f0()*0.394687);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fabb0() {
   return (neuron0x35eb3d0()*0.209561);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fabf0() {
   return (neuron0x35ebda0()*-0.0357602);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fac30() {
   return (neuron0x35dcc20()*3.8667);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fac70() {
   return (neuron0x35dd5f0()*0.712898);
}

double NNfunction_nn_chi1_charge2m::synapse0x35facb0() {
   return (neuron0x35ddfc0()*0.0285764);
}

double NNfunction_nn_chi1_charge2m::synapse0x35facf0() {
   return (neuron0x35f0600()*2.7204);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fad30() {
   return (neuron0x35f0eb0()*0.561612);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fad70() {
   return (neuron0x35f1880()*1.01782);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fadb0() {
   return (neuron0x35f2250()*0.320998);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fb130() {
   return (neuron0x35ce210()*0.0695931);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fb170() {
   return (neuron0x35ceb60()*-0.780425);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fb1b0() {
   return (neuron0x35cf640()*-0.173046);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fb1f0() {
   return (neuron0x3392990()*-0.643058);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fb230() {
   return (neuron0x35d03e0()*0.170289);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fb270() {
   return (neuron0x35d0db0()*-0.00413033);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fb2b0() {
   return (neuron0x35d1b80()*-0.0701364);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fb2f0() {
   return (neuron0x35d2550()*0.14115);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fb330() {
   return (neuron0x35d2f20()*-1.08791);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fb370() {
   return (neuron0x35d3a00()*-0.954483);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fb3b0() {
   return (neuron0x35d43d0()*0.357719);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fb3f0() {
   return (neuron0x35d14b0()*-0.232681);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fb430() {
   return (neuron0x35d5f80()*-0.25328);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fb470() {
   return (neuron0x35d6950()*0.0334644);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fb4b0() {
   return (neuron0x35d7320()*-0.0732876);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fb4f0() {
   return (neuron0x35d7cf0()*-1.11692);
}

double NNfunction_nn_chi1_charge2m::synapse0x35faf80() {
   return (neuron0x35d9b00()*0.0653514);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fafc0() {
   return (neuron0x35d9de0()*-0.0847612);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fb640() {
   return (neuron0x35da7b0()*-0.0156248);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fb680() {
   return (neuron0x35db180()*-0.204029);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fb6c0() {
   return (neuron0x35dbb50()*0.198377);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fb700() {
   return (neuron0x35dc520()*-0.3949);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fb740() {
   return (neuron0x35d5070()*-0.0183706);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fb780() {
   return (neuron0x35d5a40()*0.198718);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fb7c0() {
   return (neuron0x35df2b0()*0.0304892);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fb800() {
   return (neuron0x35dfc80()*-0.185647);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fb840() {
   return (neuron0x35e0650()*0.0588659);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fb880() {
   return (neuron0x35e1020()*0.715352);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fb8c0() {
   return (neuron0x35e19f0()*-0.0310196);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fb900() {
   return (neuron0x35e23c0()*-0.251981);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fb940() {
   return (neuron0x35e2d90()*-0.0340842);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fb980() {
   return (neuron0x35e3760()*-0.0068345);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fb530() {
   return (neuron0x35d97f0()*0.157716);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fb570() {
   return (neuron0x35e6340()*1.16274);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fb5b0() {
   return (neuron0x35e6d10()*-0.812899);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fb5f0() {
   return (neuron0x35e76e0()*-0.0377559);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fbbd0() {
   return (neuron0x35e80b0()*-0.506511);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fbc10() {
   return (neuron0x35e8a80()*0.0597814);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fbc50() {
   return (neuron0x35e9450()*0.364244);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fbc90() {
   return (neuron0x35e9e20()*-0.0569814);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fbcd0() {
   return (neuron0x35ea7f0()*0.0279551);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fbd10() {
   return (neuron0x35eb3d0()*0.111075);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fbd50() {
   return (neuron0x35ebda0()*-0.00408373);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fbd90() {
   return (neuron0x35dcc20()*0.185535);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fbdd0() {
   return (neuron0x35dd5f0()*0.550262);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fbe10() {
   return (neuron0x35ddfc0()*0.0650499);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fbe50() {
   return (neuron0x35f0600()*0.839622);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fbe90() {
   return (neuron0x35f0eb0()*-0.153175);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fbed0() {
   return (neuron0x35f1880()*-0.379243);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fbf10() {
   return (neuron0x35f2250()*0.0224819);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fc290() {
   return (neuron0x35ce210()*0.310456);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fc2d0() {
   return (neuron0x35ceb60()*3.06365);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fc310() {
   return (neuron0x35cf640()*-0.43235);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fc350() {
   return (neuron0x3392990()*1.61654);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fc390() {
   return (neuron0x35d03e0()*-0.218773);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fc3d0() {
   return (neuron0x35d0db0()*0.428341);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fc410() {
   return (neuron0x35d1b80()*0.303231);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fc450() {
   return (neuron0x35d2550()*-4.65973);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fc490() {
   return (neuron0x35d2f20()*0.246133);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fc4d0() {
   return (neuron0x35d3a00()*-0.401282);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fc510() {
   return (neuron0x35d43d0()*0.0347071);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fc550() {
   return (neuron0x35d14b0()*2.82922);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fc590() {
   return (neuron0x35d5f80()*0.12943);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fc5d0() {
   return (neuron0x35d6950()*-0.160541);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fc610() {
   return (neuron0x35d7320()*-0.22669);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fc650() {
   return (neuron0x35d7cf0()*-1.01702);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fc0e0() {
   return (neuron0x35d9b00()*-0.256332);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fc120() {
   return (neuron0x35d9de0()*-0.598556);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fc7a0() {
   return (neuron0x35da7b0()*0.294476);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fc7e0() {
   return (neuron0x35db180()*2.26891);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fc820() {
   return (neuron0x35dbb50()*0.397453);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fc860() {
   return (neuron0x35dc520()*2.46016);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fc8a0() {
   return (neuron0x35d5070()*0.191392);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fc8e0() {
   return (neuron0x35d5a40()*0.350489);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fc920() {
   return (neuron0x35df2b0()*0.235327);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fc960() {
   return (neuron0x35dfc80()*-0.385391);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fc9a0() {
   return (neuron0x35e0650()*0.0619772);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fc9e0() {
   return (neuron0x35e1020()*1.74335);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fca20() {
   return (neuron0x35e19f0()*-0.210648);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fca60() {
   return (neuron0x35e23c0()*1.23415);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fcaa0() {
   return (neuron0x35e2d90()*-0.280428);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fcae0() {
   return (neuron0x35e3760()*0.420634);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fc690() {
   return (neuron0x35d97f0()*1.34545);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fc6d0() {
   return (neuron0x35e6340()*-0.237881);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fc710() {
   return (neuron0x35e6d10()*-0.147247);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fc750() {
   return (neuron0x35e76e0()*-0.114688);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fcd30() {
   return (neuron0x35e80b0()*-1.30594);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fcd70() {
   return (neuron0x35e8a80()*0.0772404);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fcdb0() {
   return (neuron0x35e9450()*-1.68852);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fcdf0() {
   return (neuron0x35e9e20()*0.33296);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fce30() {
   return (neuron0x35ea7f0()*0.393773);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fce70() {
   return (neuron0x35eb3d0()*0.355675);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fceb0() {
   return (neuron0x35ebda0()*-0.0465685);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fcef0() {
   return (neuron0x35dcc20()*3.26208);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fcf30() {
   return (neuron0x35dd5f0()*0.165463);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fcf70() {
   return (neuron0x35ddfc0()*0.129031);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fcfb0() {
   return (neuron0x35f0600()*-3.05088);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fcff0() {
   return (neuron0x35f0eb0()*0.532006);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fd030() {
   return (neuron0x35f1880()*-3.17967);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fd070() {
   return (neuron0x35f2250()*0.259592);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fd2d0() {
   return (neuron0x35f9450()*-2.92343);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fd310() {
   return (neuron0x35f97f0()*-9.29081);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fd350() {
   return (neuron0x35f9c90()*8.99233);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fd390() {
   return (neuron0x35fadf0()*-5.63291);
}

double NNfunction_nn_chi1_charge2m::synapse0x35fd3d0() {
   return (neuron0x35fbf50()*6.00382);
}

