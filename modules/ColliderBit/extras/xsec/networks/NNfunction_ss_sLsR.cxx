#include "NNfunction_ss_sLsR.h"
#include <cmath>

double NNfunction_ss_sLsR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.9958)/15.0543;
   input1 = (in1 - 35.7121)/826.611;
   input2 = (in2 - 413.115)/529.96;
   input3 = (in3 - 152.515)/641.969;
   input4 = (in4 - 731.6)/766.391;
   input5 = (in5 - 627.823)/731.258;
   input6 = (in6 - 632.49)/735.551;
   input7 = (in7 - 637.128)/733.118;
   input8 = (in8 - 642.08)/775.75;
   input9 = (in9 - 628.435)/758.363;
   input10 = (in10 - 660.123)/785.16;
   input11 = (in11 - 612.978)/644.722;
   input12 = (in12 - 400.579)/252.801;
   input13 = (in13 - 457.512)/380.462;
   input14 = (in14 - 603.03)/599.867;
   input15 = (in15 - 597.397)/595.369;
   input16 = (in16 - 430.563)/412.651;
   input17 = (in17 - 635.357)/678.999;
   input18 = (in18 - 392.258)/251.058;
   input19 = (in19 - 642.646)/671.041;
   input20 = (in20 - -132.842)/395.29;
   input21 = (in21 - -160.936)/900.72;
   input22 = (in22 - 6.88692)/916.372;
   input23 = (in23 - -64.166)/493.98;
   switch(index) {
     case 0:
         return neuron0x35fd110();
     default:
         return 0.;
   }
}

double NNfunction_ss_sLsR::Value(int index, double* input) {
   input0 = (input[0] - 22.9958)/15.0543;
   input1 = (input[1] - 35.7121)/826.611;
   input2 = (input[2] - 413.115)/529.96;
   input3 = (input[3] - 152.515)/641.969;
   input4 = (input[4] - 731.6)/766.391;
   input5 = (input[5] - 627.823)/731.258;
   input6 = (input[6] - 632.49)/735.551;
   input7 = (input[7] - 637.128)/733.118;
   input8 = (input[8] - 642.08)/775.75;
   input9 = (input[9] - 628.435)/758.363;
   input10 = (input[10] - 660.123)/785.16;
   input11 = (input[11] - 612.978)/644.722;
   input12 = (input[12] - 400.579)/252.801;
   input13 = (input[13] - 457.512)/380.462;
   input14 = (input[14] - 603.03)/599.867;
   input15 = (input[15] - 597.397)/595.369;
   input16 = (input[16] - 430.563)/412.651;
   input17 = (input[17] - 635.357)/678.999;
   input18 = (input[18] - 392.258)/251.058;
   input19 = (input[19] - 642.646)/671.041;
   input20 = (input[20] - -132.842)/395.29;
   input21 = (input[21] - -160.936)/900.72;
   input22 = (input[22] - 6.88692)/916.372;
   input23 = (input[23] - -64.166)/493.98;
   switch(index) {
     case 0:
         return neuron0x35fd110();
     default:
         return 0.;
   }
}

double NNfunction_ss_sLsR::neuron0x35c9200() {
   return input0;
}

double NNfunction_ss_sLsR::neuron0x35c9540() {
   return input1;
}

double NNfunction_ss_sLsR::neuron0x35c9880() {
   return input2;
}

double NNfunction_ss_sLsR::neuron0x35c9bc0() {
   return input3;
}

double NNfunction_ss_sLsR::neuron0x35c9f00() {
   return input4;
}

double NNfunction_ss_sLsR::neuron0x35ca240() {
   return input5;
}

double NNfunction_ss_sLsR::neuron0x35ca580() {
   return input6;
}

double NNfunction_ss_sLsR::neuron0x35ca8c0() {
   return input7;
}

double NNfunction_ss_sLsR::neuron0x35cac00() {
   return input8;
}

double NNfunction_ss_sLsR::neuron0x35caf40() {
   return input9;
}

double NNfunction_ss_sLsR::neuron0x35cb280() {
   return input10;
}

double NNfunction_ss_sLsR::neuron0x35cb5c0() {
   return input11;
}

double NNfunction_ss_sLsR::neuron0x35cb900() {
   return input12;
}

double NNfunction_ss_sLsR::neuron0x35cbc40() {
   return input13;
}

double NNfunction_ss_sLsR::neuron0x35cbf80() {
   return input14;
}

double NNfunction_ss_sLsR::neuron0x35cc2c0() {
   return input15;
}

double NNfunction_ss_sLsR::neuron0x35cc600() {
   return input16;
}

double NNfunction_ss_sLsR::neuron0x35ccb60() {
   return input17;
}

double NNfunction_ss_sLsR::neuron0x35ccd80() {
   return input18;
}

double NNfunction_ss_sLsR::neuron0x35cd0c0() {
   return input19;
}

double NNfunction_ss_sLsR::neuron0x35cd400() {
   return input20;
}

double NNfunction_ss_sLsR::neuron0x35cd740() {
   return input21;
}

double NNfunction_ss_sLsR::neuron0x35cda80() {
   return input22;
}

double NNfunction_ss_sLsR::neuron0x35cddc0() {
   return input23;
}

double NNfunction_ss_sLsR::input0x35ce230() {
   double input = 0.164108;
   input += synapse0x35c90c0();
   input += synapse0x35c9100();
   input += synapse0x35ce4e0();
   input += synapse0x35ce520();
   input += synapse0x35ce560();
   input += synapse0x35ce5a0();
   input += synapse0x35ce5e0();
   input += synapse0x35ce620();
   input += synapse0x35ce660();
   input += synapse0x35ce6a0();
   input += synapse0x35ce6e0();
   input += synapse0x35ce720();
   input += synapse0x35ce760();
   input += synapse0x35ce7a0();
   input += synapse0x35ce7e0();
   input += synapse0x35ce820();
   input += synapse0x35c9030();
   input += synapse0x35c9070();
   input += synapse0x33843f0();
   input += synapse0x3384430();
   input += synapse0x35cea80();
   input += synapse0x35ceac0();
   input += synapse0x35ceb00();
   input += synapse0x35ceb40();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35ce230() {
   double input = input0x35ce230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35ceb80() {
   double input = -0.24599;
   input += synapse0x35ceec0();
   input += synapse0x35cef00();
   input += synapse0x35cef40();
   input += synapse0x35cef80();
   input += synapse0x35cefc0();
   input += synapse0x35cf000();
   input += synapse0x35cf040();
   input += synapse0x35cf080();
   input += synapse0x35cf0c0();
   input += synapse0x35ce970();
   input += synapse0x35ce9b0();
   input += synapse0x35ce9f0();
   input += synapse0x35cea30();
   input += synapse0x35cf310();
   input += synapse0x35cf350();
   input += synapse0x35cf390();
   input += synapse0x35ced10();
   input += synapse0x35ced50();
   input += synapse0x35cf4e0();
   input += synapse0x35cf520();
   input += synapse0x35cf560();
   input += synapse0x35cf5a0();
   input += synapse0x35cf5e0();
   input += synapse0x35cf620();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35ceb80() {
   double input = input0x35ceb80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35cf660() {
   double input = -3.16245;
   input += synapse0x35cf9a0();
   input += synapse0x35cf9e0();
   input += synapse0x35cfa20();
   input += synapse0x35cfa60();
   input += synapse0x35cfaa0();
   input += synapse0x35cfae0();
   input += synapse0x35cfb20();
   input += synapse0x35cfb60();
   input += synapse0x35cfba0();
   input += synapse0x35cfbe0();
   input += synapse0x35cfc20();
   input += synapse0x35cfc60();
   input += synapse0x35cfca0();
   input += synapse0x35cfce0();
   input += synapse0x35cfd20();
   input += synapse0x35cfd60();
   input += synapse0x35cf7f0();
   input += synapse0x35cf830();
   input += synapse0x3384a90();
   input += synapse0x3392360();
   input += synapse0x33923a0();
   input += synapse0x35b8290();
   input += synapse0x35b82d0();
   input += synapse0x35b8310();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35cf660() {
   double input = input0x35cf660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35cf100() {
   double input = 0.117836;
   input += synapse0x3392be0();
   input += synapse0x35cf290();
   input += synapse0x35cf2d0();
   input += synapse0x35cfeb0();
   input += synapse0x35cfef0();
   input += synapse0x35cff30();
   input += synapse0x35cff70();
   input += synapse0x35cffb0();
   input += synapse0x35cfff0();
   input += synapse0x35d0030();
   input += synapse0x35d0070();
   input += synapse0x35d00b0();
   input += synapse0x35d00f0();
   input += synapse0x35d0130();
   input += synapse0x35d0170();
   input += synapse0x35d01b0();
   input += synapse0x35c9140();
   input += synapse0x35c9180();
   input += synapse0x35c91c0();
   input += synapse0x35d0300();
   input += synapse0x35d0340();
   input += synapse0x35d0380();
   input += synapse0x35d03c0();
   input += synapse0x35d0400();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35cf100() {
   double input = input0x35cf100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35d0440() {
   double input = -0.154628;
   input += synapse0x35d0780();
   input += synapse0x35d07c0();
   input += synapse0x35d0800();
   input += synapse0x35d0840();
   input += synapse0x35d0880();
   input += synapse0x35d08c0();
   input += synapse0x35d0900();
   input += synapse0x35d0940();
   input += synapse0x35d0980();
   input += synapse0x35d09c0();
   input += synapse0x35d0a00();
   input += synapse0x35d0a40();
   input += synapse0x35d0a80();
   input += synapse0x35d0ac0();
   input += synapse0x35d0b00();
   input += synapse0x35d0b40();
   input += synapse0x35d05d0();
   input += synapse0x35d0610();
   input += synapse0x35d0c90();
   input += synapse0x35d0cd0();
   input += synapse0x35d0d10();
   input += synapse0x35d0d50();
   input += synapse0x35d0d90();
   input += synapse0x35d0dd0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35d0440() {
   double input = input0x35d0440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35d0e10() {
   double input = 2.94117;
   input += synapse0x35d1150();
   input += synapse0x35d1190();
   input += synapse0x35d11d0();
   input += synapse0x35d1210();
   input += synapse0x35d1250();
   input += synapse0x35d1290();
   input += synapse0x35d12d0();
   input += synapse0x35d1310();
   input += synapse0x35d1350();
   input += synapse0x33926b0();
   input += synapse0x33926f0();
   input += synapse0x3392730();
   input += synapse0x3392770();
   input += synapse0x33927b0();
   input += synapse0x33927f0();
   input += synapse0x3392830();
   input += synapse0x35d0fa0();
   input += synapse0x35d0fe0();
   input += synapse0x3392980();
   input += synapse0x33929c0();
   input += synapse0x3392a00();
   input += synapse0x3392a40();
   input += synapse0x3392a80();
   input += synapse0x35d1ba0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35d0e10() {
   double input = input0x35d0e10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35d1be0() {
   double input = 0.918782;
   input += synapse0x35d1f20();
   input += synapse0x35d1f60();
   input += synapse0x35d1fa0();
   input += synapse0x35d1fe0();
   input += synapse0x35d2020();
   input += synapse0x35d2060();
   input += synapse0x35d20a0();
   input += synapse0x35d20e0();
   input += synapse0x35d2120();
   input += synapse0x35d2160();
   input += synapse0x35d21a0();
   input += synapse0x35d21e0();
   input += synapse0x35d2220();
   input += synapse0x35d2260();
   input += synapse0x35d22a0();
   input += synapse0x35d22e0();
   input += synapse0x35d1d70();
   input += synapse0x35d1db0();
   input += synapse0x35d2430();
   input += synapse0x35d2470();
   input += synapse0x35d24b0();
   input += synapse0x35d24f0();
   input += synapse0x35d2530();
   input += synapse0x35d2570();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35d1be0() {
   double input = input0x35d1be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35d25b0() {
   double input = -0.596;
   input += synapse0x35d28f0();
   input += synapse0x35d2930();
   input += synapse0x35d2970();
   input += synapse0x35d29b0();
   input += synapse0x35d29f0();
   input += synapse0x35d2a30();
   input += synapse0x35d2a70();
   input += synapse0x35d2ab0();
   input += synapse0x35d2af0();
   input += synapse0x35d2b30();
   input += synapse0x35d2b70();
   input += synapse0x35d2bb0();
   input += synapse0x35d2bf0();
   input += synapse0x35d2c30();
   input += synapse0x35d2c70();
   input += synapse0x35d2cb0();
   input += synapse0x35d2740();
   input += synapse0x35d2780();
   input += synapse0x35d2e00();
   input += synapse0x35d2e40();
   input += synapse0x35d2e80();
   input += synapse0x35d2ec0();
   input += synapse0x35d2f00();
   input += synapse0x35d2f40();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35d25b0() {
   double input = input0x35d25b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35d2f80() {
   double input = 1.9961;
   input += synapse0x35cca50();
   input += synapse0x35cca90();
   input += synapse0x35ccad0();
   input += synapse0x35ccb10();
   input += synapse0x35d34d0();
   input += synapse0x35d3510();
   input += synapse0x35d3550();
   input += synapse0x35d3590();
   input += synapse0x35d35d0();
   input += synapse0x35d3610();
   input += synapse0x35d3650();
   input += synapse0x35d3690();
   input += synapse0x35d36d0();
   input += synapse0x35d3710();
   input += synapse0x35d3750();
   input += synapse0x35d3790();
   input += synapse0x35d3110();
   input += synapse0x35d3150();
   input += synapse0x35d38e0();
   input += synapse0x35d3920();
   input += synapse0x35d3960();
   input += synapse0x35d39a0();
   input += synapse0x35d39e0();
   input += synapse0x35d3a20();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35d2f80() {
   double input = input0x35d2f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35d3a60() {
   double input = -0.394634;
   input += synapse0x35d3da0();
   input += synapse0x35d3de0();
   input += synapse0x35d3e20();
   input += synapse0x35d3e60();
   input += synapse0x35d3ea0();
   input += synapse0x35d3ee0();
   input += synapse0x35d3f20();
   input += synapse0x35d3f60();
   input += synapse0x35d3fa0();
   input += synapse0x35d3fe0();
   input += synapse0x35d4020();
   input += synapse0x35d4060();
   input += synapse0x35d40a0();
   input += synapse0x35d40e0();
   input += synapse0x35d4120();
   input += synapse0x35d4160();
   input += synapse0x35d3bf0();
   input += synapse0x35d3c30();
   input += synapse0x35d42b0();
   input += synapse0x35d42f0();
   input += synapse0x35d4330();
   input += synapse0x35d4370();
   input += synapse0x35d43b0();
   input += synapse0x35d43f0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35d3a60() {
   double input = input0x35d3a60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35d4430() {
   double input = -0.305924;
   input += synapse0x35d4770();
   input += synapse0x35d47b0();
   input += synapse0x35d47f0();
   input += synapse0x35d4830();
   input += synapse0x35d4870();
   input += synapse0x35d48b0();
   input += synapse0x35d48f0();
   input += synapse0x35d4930();
   input += synapse0x35d4970();
   input += synapse0x35d49b0();
   input += synapse0x35d49f0();
   input += synapse0x35d4a30();
   input += synapse0x35d4a70();
   input += synapse0x35d4ab0();
   input += synapse0x35d4af0();
   input += synapse0x35d4b30();
   input += synapse0x35d45c0();
   input += synapse0x35d4600();
   input += synapse0x35d1390();
   input += synapse0x35d13d0();
   input += synapse0x35d1410();
   input += synapse0x35d1450();
   input += synapse0x35d1490();
   input += synapse0x35d14d0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35d4430() {
   double input = input0x35d4430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35d1510() {
   double input = 0.159841;
   input += synapse0x35d1850();
   input += synapse0x35d1890();
   input += synapse0x35d18d0();
   input += synapse0x35d1910();
   input += synapse0x35d1950();
   input += synapse0x35d1990();
   input += synapse0x35d19d0();
   input += synapse0x35d1a10();
   input += synapse0x35d1a50();
   input += synapse0x35d1a90();
   input += synapse0x35d1ad0();
   input += synapse0x35d1b10();
   input += synapse0x35d1b50();
   input += synapse0x35d5c90();
   input += synapse0x35d5cd0();
   input += synapse0x35d5d10();
   input += synapse0x35d16a0();
   input += synapse0x35d16e0();
   input += synapse0x35d5e60();
   input += synapse0x35d5ea0();
   input += synapse0x35d5ee0();
   input += synapse0x35d5f20();
   input += synapse0x35d5f60();
   input += synapse0x35d5fa0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35d1510() {
   double input = input0x35d1510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35d5fe0() {
   double input = -1.57547;
   input += synapse0x35d6320();
   input += synapse0x35d6360();
   input += synapse0x35d63a0();
   input += synapse0x35d63e0();
   input += synapse0x35d6420();
   input += synapse0x35d6460();
   input += synapse0x35d64a0();
   input += synapse0x35d64e0();
   input += synapse0x35d6520();
   input += synapse0x35d6560();
   input += synapse0x35d65a0();
   input += synapse0x35d65e0();
   input += synapse0x35d6620();
   input += synapse0x35d6660();
   input += synapse0x35d66a0();
   input += synapse0x35d66e0();
   input += synapse0x35d6170();
   input += synapse0x35d61b0();
   input += synapse0x35d6830();
   input += synapse0x35d6870();
   input += synapse0x35d68b0();
   input += synapse0x35d68f0();
   input += synapse0x35d6930();
   input += synapse0x35d6970();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35d5fe0() {
   double input = input0x35d5fe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35d69b0() {
   double input = -0.700762;
   input += synapse0x35d6cf0();
   input += synapse0x35d6d30();
   input += synapse0x35d6d70();
   input += synapse0x35d6db0();
   input += synapse0x35d6df0();
   input += synapse0x35d6e30();
   input += synapse0x35d6e70();
   input += synapse0x35d6eb0();
   input += synapse0x35d6ef0();
   input += synapse0x35d6f30();
   input += synapse0x35d6f70();
   input += synapse0x35d6fb0();
   input += synapse0x35d6ff0();
   input += synapse0x35d7030();
   input += synapse0x35d7070();
   input += synapse0x35d70b0();
   input += synapse0x35d6b40();
   input += synapse0x35d6b80();
   input += synapse0x35d7200();
   input += synapse0x35d7240();
   input += synapse0x35d7280();
   input += synapse0x35d72c0();
   input += synapse0x35d7300();
   input += synapse0x35d7340();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35d69b0() {
   double input = input0x35d69b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35d7380() {
   double input = -1.41759;
   input += synapse0x35d76c0();
   input += synapse0x35d7700();
   input += synapse0x35d7740();
   input += synapse0x35d7780();
   input += synapse0x35d77c0();
   input += synapse0x35d7800();
   input += synapse0x35d7840();
   input += synapse0x35d7880();
   input += synapse0x35d78c0();
   input += synapse0x35d7900();
   input += synapse0x35d7940();
   input += synapse0x35d7980();
   input += synapse0x35d79c0();
   input += synapse0x35d7a00();
   input += synapse0x35d7a40();
   input += synapse0x35d7a80();
   input += synapse0x35d7510();
   input += synapse0x35d7550();
   input += synapse0x35d7bd0();
   input += synapse0x35d7c10();
   input += synapse0x35d7c50();
   input += synapse0x35d7c90();
   input += synapse0x35d7cd0();
   input += synapse0x35d7d10();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35d7380() {
   double input = input0x35d7380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35d7d50() {
   double input = -1.68491;
   input += synapse0x35d8090();
   input += synapse0x35c9420();
   input += synapse0x35c9460();
   input += synapse0x35c9760();
   input += synapse0x35c97a0();
   input += synapse0x35c9aa0();
   input += synapse0x35c9ae0();
   input += synapse0x35c9de0();
   input += synapse0x35c9e20();
   input += synapse0x35ca120();
   input += synapse0x35ca160();
   input += synapse0x35ca460();
   input += synapse0x35ca4a0();
   input += synapse0x35ca7a0();
   input += synapse0x35ca7e0();
   input += synapse0x35caae0();
   input += synapse0x35cab20();
   input += synapse0x35cae20();
   input += synapse0x35cae60();
   input += synapse0x35cb160();
   input += synapse0x35cb1a0();
   input += synapse0x35cb4a0();
   input += synapse0x35cb4e0();
   input += synapse0x35cb7e0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35d7d50() {
   double input = input0x35d7d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35d9b60() {
   double input = -1.3255;
   input += synapse0x35cb820();
   input += synapse0x35cc4e0();
   input += synapse0x35cc520();
   input += synapse0x35d7ee0();
   input += synapse0x35d7f20();
   input += synapse0x35cc820();
   input += synapse0x35cc860();
   input += synapse0x33842d0();
   input += synapse0x3384310();
   input += synapse0x35ccfa0();
   input += synapse0x35ccfe0();
   input += synapse0x35cd2e0();
   input += synapse0x35cd320();
   input += synapse0x35cd620();
   input += synapse0x35cd660();
   input += synapse0x35cd960();
   input += synapse0x35cd9a0();
   input += synapse0x35cdca0();
   input += synapse0x35cdce0();
   input += synapse0x35cdfe0();
   input += synapse0x35ce020();
   input += synapse0x35cbb20();
   input += synapse0x35cbb60();
   input += synapse0x35d9e00();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35d9b60() {
   double input = input0x35d9b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35d9e40() {
   double input = 0.00240192;
   input += synapse0x35da180();
   input += synapse0x35da1c0();
   input += synapse0x35da200();
   input += synapse0x35da240();
   input += synapse0x35da280();
   input += synapse0x35da2c0();
   input += synapse0x35da300();
   input += synapse0x35da340();
   input += synapse0x35da380();
   input += synapse0x35da3c0();
   input += synapse0x35da400();
   input += synapse0x35da440();
   input += synapse0x35da480();
   input += synapse0x35da4c0();
   input += synapse0x35da500();
   input += synapse0x35da540();
   input += synapse0x35d9fd0();
   input += synapse0x35da010();
   input += synapse0x35da690();
   input += synapse0x35da6d0();
   input += synapse0x35da710();
   input += synapse0x35da750();
   input += synapse0x35da790();
   input += synapse0x35da7d0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35d9e40() {
   double input = input0x35d9e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35da810() {
   double input = 2.10454;
   input += synapse0x35dab50();
   input += synapse0x35dab90();
   input += synapse0x35dabd0();
   input += synapse0x35dac10();
   input += synapse0x35dac50();
   input += synapse0x35dac90();
   input += synapse0x35dacd0();
   input += synapse0x35dad10();
   input += synapse0x35dad50();
   input += synapse0x35dad90();
   input += synapse0x35dadd0();
   input += synapse0x35dae10();
   input += synapse0x35dae50();
   input += synapse0x35dae90();
   input += synapse0x35daed0();
   input += synapse0x35daf10();
   input += synapse0x35da9a0();
   input += synapse0x35da9e0();
   input += synapse0x35db060();
   input += synapse0x35db0a0();
   input += synapse0x35db0e0();
   input += synapse0x35db120();
   input += synapse0x35db160();
   input += synapse0x35db1a0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35da810() {
   double input = input0x35da810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35db1e0() {
   double input = -0.89026;
   input += synapse0x35db520();
   input += synapse0x35db560();
   input += synapse0x35db5a0();
   input += synapse0x35db5e0();
   input += synapse0x35db620();
   input += synapse0x35db660();
   input += synapse0x35db6a0();
   input += synapse0x35db6e0();
   input += synapse0x35db720();
   input += synapse0x35db760();
   input += synapse0x35db7a0();
   input += synapse0x35db7e0();
   input += synapse0x35db820();
   input += synapse0x35db860();
   input += synapse0x35db8a0();
   input += synapse0x35db8e0();
   input += synapse0x35db370();
   input += synapse0x35db3b0();
   input += synapse0x35dba30();
   input += synapse0x35dba70();
   input += synapse0x35dbab0();
   input += synapse0x35dbaf0();
   input += synapse0x35dbb30();
   input += synapse0x35dbb70();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35db1e0() {
   double input = input0x35db1e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35dbbb0() {
   double input = 1.25106;
   input += synapse0x35dbef0();
   input += synapse0x35dbf30();
   input += synapse0x35dbf70();
   input += synapse0x35dbfb0();
   input += synapse0x35dbff0();
   input += synapse0x35dc030();
   input += synapse0x35dc070();
   input += synapse0x35dc0b0();
   input += synapse0x35dc0f0();
   input += synapse0x35dc130();
   input += synapse0x35dc170();
   input += synapse0x35dc1b0();
   input += synapse0x35dc1f0();
   input += synapse0x35dc230();
   input += synapse0x35dc270();
   input += synapse0x35dc2b0();
   input += synapse0x35dbd40();
   input += synapse0x35dbd80();
   input += synapse0x35dc400();
   input += synapse0x35dc440();
   input += synapse0x35dc480();
   input += synapse0x35dc4c0();
   input += synapse0x35dc500();
   input += synapse0x35dc540();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35dbbb0() {
   double input = input0x35dbbb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35dc580() {
   double input = -0.604038;
   input += synapse0x35dc8c0();
   input += synapse0x35dc900();
   input += synapse0x35dc940();
   input += synapse0x35dc980();
   input += synapse0x35dc9c0();
   input += synapse0x35dca00();
   input += synapse0x35dca40();
   input += synapse0x35dca80();
   input += synapse0x35dcac0();
   input += synapse0x35d4c80();
   input += synapse0x35d4cc0();
   input += synapse0x35d4d00();
   input += synapse0x35d4d40();
   input += synapse0x35d4d80();
   input += synapse0x35d4dc0();
   input += synapse0x35d4e00();
   input += synapse0x35dc710();
   input += synapse0x35dc750();
   input += synapse0x35d4f50();
   input += synapse0x35d4f90();
   input += synapse0x35d4fd0();
   input += synapse0x35d5010();
   input += synapse0x35d5050();
   input += synapse0x35d5090();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35dc580() {
   double input = input0x35dc580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35d50d0() {
   double input = 1.04815;
   input += synapse0x35d5410();
   input += synapse0x35d5450();
   input += synapse0x35d5490();
   input += synapse0x35d54d0();
   input += synapse0x35d5510();
   input += synapse0x35d5550();
   input += synapse0x35d5590();
   input += synapse0x35d55d0();
   input += synapse0x35d5610();
   input += synapse0x35d5650();
   input += synapse0x35d5690();
   input += synapse0x35d56d0();
   input += synapse0x35d5710();
   input += synapse0x35d5750();
   input += synapse0x35d5790();
   input += synapse0x35d57d0();
   input += synapse0x35d5260();
   input += synapse0x35d52a0();
   input += synapse0x35d5920();
   input += synapse0x35d5960();
   input += synapse0x35d59a0();
   input += synapse0x35d59e0();
   input += synapse0x35d5a20();
   input += synapse0x35d5a60();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35d50d0() {
   double input = input0x35d50d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35d5aa0() {
   double input = -0.549311;
   input += synapse0x35d5c30();
   input += synapse0x35decc0();
   input += synapse0x35ded00();
   input += synapse0x35ded40();
   input += synapse0x35ded80();
   input += synapse0x35dedc0();
   input += synapse0x35dee00();
   input += synapse0x35dee40();
   input += synapse0x35dee80();
   input += synapse0x35deec0();
   input += synapse0x35def00();
   input += synapse0x35def40();
   input += synapse0x35def80();
   input += synapse0x35defc0();
   input += synapse0x35df000();
   input += synapse0x35df040();
   input += synapse0x35deb10();
   input += synapse0x35deb50();
   input += synapse0x35df190();
   input += synapse0x35df1d0();
   input += synapse0x35df210();
   input += synapse0x35df250();
   input += synapse0x35df290();
   input += synapse0x35df2d0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35d5aa0() {
   double input = input0x35d5aa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35df310() {
   double input = 0.403552;
   input += synapse0x35df650();
   input += synapse0x35df690();
   input += synapse0x35df6d0();
   input += synapse0x35df710();
   input += synapse0x35df750();
   input += synapse0x35df790();
   input += synapse0x35df7d0();
   input += synapse0x35df810();
   input += synapse0x35df850();
   input += synapse0x35df890();
   input += synapse0x35df8d0();
   input += synapse0x35df910();
   input += synapse0x35df950();
   input += synapse0x35df990();
   input += synapse0x35df9d0();
   input += synapse0x35dfa10();
   input += synapse0x35df4a0();
   input += synapse0x35df4e0();
   input += synapse0x35dfb60();
   input += synapse0x35dfba0();
   input += synapse0x35dfbe0();
   input += synapse0x35dfc20();
   input += synapse0x35dfc60();
   input += synapse0x35dfca0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35df310() {
   double input = input0x35df310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35dfce0() {
   double input = 0.92418;
   input += synapse0x35e0020();
   input += synapse0x35e0060();
   input += synapse0x35e00a0();
   input += synapse0x35e00e0();
   input += synapse0x35e0120();
   input += synapse0x35e0160();
   input += synapse0x35e01a0();
   input += synapse0x35e01e0();
   input += synapse0x35e0220();
   input += synapse0x35e0260();
   input += synapse0x35e02a0();
   input += synapse0x35e02e0();
   input += synapse0x35e0320();
   input += synapse0x35e0360();
   input += synapse0x35e03a0();
   input += synapse0x35e03e0();
   input += synapse0x35dfe70();
   input += synapse0x35dfeb0();
   input += synapse0x35e0530();
   input += synapse0x35e0570();
   input += synapse0x35e05b0();
   input += synapse0x35e05f0();
   input += synapse0x35e0630();
   input += synapse0x35e0670();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35dfce0() {
   double input = input0x35dfce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35e06b0() {
   double input = 0.734327;
   input += synapse0x35e09f0();
   input += synapse0x35e0a30();
   input += synapse0x35e0a70();
   input += synapse0x35e0ab0();
   input += synapse0x35e0af0();
   input += synapse0x35e0b30();
   input += synapse0x35e0b70();
   input += synapse0x35e0bb0();
   input += synapse0x35e0bf0();
   input += synapse0x35e0c30();
   input += synapse0x35e0c70();
   input += synapse0x35e0cb0();
   input += synapse0x35e0cf0();
   input += synapse0x35e0d30();
   input += synapse0x35e0d70();
   input += synapse0x35e0db0();
   input += synapse0x35e0840();
   input += synapse0x35e0880();
   input += synapse0x35e0f00();
   input += synapse0x35e0f40();
   input += synapse0x35e0f80();
   input += synapse0x35e0fc0();
   input += synapse0x35e1000();
   input += synapse0x35e1040();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35e06b0() {
   double input = input0x35e06b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35e1080() {
   double input = 0.395471;
   input += synapse0x35e13c0();
   input += synapse0x35e1400();
   input += synapse0x35e1440();
   input += synapse0x35e1480();
   input += synapse0x35e14c0();
   input += synapse0x35e1500();
   input += synapse0x35e1540();
   input += synapse0x35e1580();
   input += synapse0x35e15c0();
   input += synapse0x35e1600();
   input += synapse0x35e1640();
   input += synapse0x35e1680();
   input += synapse0x35e16c0();
   input += synapse0x35e1700();
   input += synapse0x35e1740();
   input += synapse0x35e1780();
   input += synapse0x35e1210();
   input += synapse0x35e1250();
   input += synapse0x35e18d0();
   input += synapse0x35e1910();
   input += synapse0x35e1950();
   input += synapse0x35e1990();
   input += synapse0x35e19d0();
   input += synapse0x35e1a10();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35e1080() {
   double input = input0x35e1080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35e1a50() {
   double input = 0.143656;
   input += synapse0x35e1d90();
   input += synapse0x35e1dd0();
   input += synapse0x35e1e10();
   input += synapse0x35e1e50();
   input += synapse0x35e1e90();
   input += synapse0x35e1ed0();
   input += synapse0x35e1f10();
   input += synapse0x35e1f50();
   input += synapse0x35e1f90();
   input += synapse0x35e1fd0();
   input += synapse0x35e2010();
   input += synapse0x35e2050();
   input += synapse0x35e2090();
   input += synapse0x35e20d0();
   input += synapse0x35e2110();
   input += synapse0x35e2150();
   input += synapse0x35e1be0();
   input += synapse0x35e1c20();
   input += synapse0x35e22a0();
   input += synapse0x35e22e0();
   input += synapse0x35e2320();
   input += synapse0x35e2360();
   input += synapse0x35e23a0();
   input += synapse0x35e23e0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35e1a50() {
   double input = input0x35e1a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35e2420() {
   double input = 1.82299;
   input += synapse0x35e2760();
   input += synapse0x35e27a0();
   input += synapse0x35e27e0();
   input += synapse0x35e2820();
   input += synapse0x35e2860();
   input += synapse0x35e28a0();
   input += synapse0x35e28e0();
   input += synapse0x35e2920();
   input += synapse0x35e2960();
   input += synapse0x35e29a0();
   input += synapse0x35e29e0();
   input += synapse0x35e2a20();
   input += synapse0x35e2a60();
   input += synapse0x35e2aa0();
   input += synapse0x35e2ae0();
   input += synapse0x35e2b20();
   input += synapse0x35e25b0();
   input += synapse0x35e25f0();
   input += synapse0x35e2c70();
   input += synapse0x35e2cb0();
   input += synapse0x35e2cf0();
   input += synapse0x35e2d30();
   input += synapse0x35e2d70();
   input += synapse0x35e2db0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35e2420() {
   double input = input0x35e2420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35e2df0() {
   double input = -0.173961;
   input += synapse0x35e3130();
   input += synapse0x35e3170();
   input += synapse0x35e31b0();
   input += synapse0x35e31f0();
   input += synapse0x35e3230();
   input += synapse0x35e3270();
   input += synapse0x35e32b0();
   input += synapse0x35e32f0();
   input += synapse0x35e3330();
   input += synapse0x35e3370();
   input += synapse0x35e33b0();
   input += synapse0x35e33f0();
   input += synapse0x35e3430();
   input += synapse0x35e3470();
   input += synapse0x35e34b0();
   input += synapse0x35e34f0();
   input += synapse0x35e2f80();
   input += synapse0x35e2fc0();
   input += synapse0x35e3640();
   input += synapse0x35e3680();
   input += synapse0x35e36c0();
   input += synapse0x35e3700();
   input += synapse0x35e3740();
   input += synapse0x35e3780();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35e2df0() {
   double input = input0x35e2df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35e37c0() {
   double input = 1.57718;
   input += synapse0x35e3b00();
   input += synapse0x35d80d0();
   input += synapse0x35d8110();
   input += synapse0x35d8150();
   input += synapse0x35d83a0();
   input += synapse0x35d83e0();
   input += synapse0x35d8420();
   input += synapse0x35d8670();
   input += synapse0x35d86b0();
   input += synapse0x35d8900();
   input += synapse0x35d8940();
   input += synapse0x35d8980();
   input += synapse0x35d8bd0();
   input += synapse0x35d8c10();
   input += synapse0x35d8e60();
   input += synapse0x35d8ea0();
   input += synapse0x35e3950();
   input += synapse0x35e3990();
   input += synapse0x35d8ff0();
   input += synapse0x35d9500();
   input += synapse0x35d9540();
   input += synapse0x35d9580();
   input += synapse0x35d97d0();
   input += synapse0x35d9810();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35e37c0() {
   double input = input0x35e37c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35d9850() {
   double input = 0.848326;
   input += synapse0x35d90c0();
   input += synapse0x35d9100();
   input += synapse0x35d9140();
   input += synapse0x35d9180();
   input += synapse0x35d9b00();
   input += synapse0x35e5e50();
   input += synapse0x35e5e90();
   input += synapse0x35e5ed0();
   input += synapse0x35e5f10();
   input += synapse0x35e5f50();
   input += synapse0x35e5f90();
   input += synapse0x35e5fd0();
   input += synapse0x35e6010();
   input += synapse0x35e6050();
   input += synapse0x35e6090();
   input += synapse0x35e60d0();
   input += synapse0x35d99e0();
   input += synapse0x35d9a20();
   input += synapse0x35e6220();
   input += synapse0x35e6260();
   input += synapse0x35e62a0();
   input += synapse0x35e62e0();
   input += synapse0x35e6320();
   input += synapse0x35e6360();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35d9850() {
   double input = input0x35d9850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35e63a0() {
   double input = 0.355058;
   input += synapse0x35e66e0();
   input += synapse0x35e6720();
   input += synapse0x35e6760();
   input += synapse0x35e67a0();
   input += synapse0x35e67e0();
   input += synapse0x35e6820();
   input += synapse0x35e6860();
   input += synapse0x35e68a0();
   input += synapse0x35e68e0();
   input += synapse0x35e6920();
   input += synapse0x35e6960();
   input += synapse0x35e69a0();
   input += synapse0x35e69e0();
   input += synapse0x35e6a20();
   input += synapse0x35e6a60();
   input += synapse0x35e6aa0();
   input += synapse0x35e6530();
   input += synapse0x35e6570();
   input += synapse0x35e6bf0();
   input += synapse0x35e6c30();
   input += synapse0x35e6c70();
   input += synapse0x35e6cb0();
   input += synapse0x35e6cf0();
   input += synapse0x35e6d30();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35e63a0() {
   double input = input0x35e63a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35e6d70() {
   double input = 0.0983492;
   input += synapse0x35e70b0();
   input += synapse0x35e70f0();
   input += synapse0x35e7130();
   input += synapse0x35e7170();
   input += synapse0x35e71b0();
   input += synapse0x35e71f0();
   input += synapse0x35e7230();
   input += synapse0x35e7270();
   input += synapse0x35e72b0();
   input += synapse0x35e72f0();
   input += synapse0x35e7330();
   input += synapse0x35e7370();
   input += synapse0x35e73b0();
   input += synapse0x35e73f0();
   input += synapse0x35e7430();
   input += synapse0x35e7470();
   input += synapse0x35e6f00();
   input += synapse0x35e6f40();
   input += synapse0x35e75c0();
   input += synapse0x35e7600();
   input += synapse0x35e7640();
   input += synapse0x35e7680();
   input += synapse0x35e76c0();
   input += synapse0x35e7700();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35e6d70() {
   double input = input0x35e6d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35e7740() {
   double input = -0.710972;
   input += synapse0x35e7a80();
   input += synapse0x35e7ac0();
   input += synapse0x35e7b00();
   input += synapse0x35e7b40();
   input += synapse0x35e7b80();
   input += synapse0x35e7bc0();
   input += synapse0x35e7c00();
   input += synapse0x35e7c40();
   input += synapse0x35e7c80();
   input += synapse0x35e7cc0();
   input += synapse0x35e7d00();
   input += synapse0x35e7d40();
   input += synapse0x35e7d80();
   input += synapse0x35e7dc0();
   input += synapse0x35e7e00();
   input += synapse0x35e7e40();
   input += synapse0x35e78d0();
   input += synapse0x35e7910();
   input += synapse0x35e7f90();
   input += synapse0x35e7fd0();
   input += synapse0x35e8010();
   input += synapse0x35e8050();
   input += synapse0x35e8090();
   input += synapse0x35e80d0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35e7740() {
   double input = input0x35e7740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35e8110() {
   double input = -1.74396;
   input += synapse0x35e8450();
   input += synapse0x35e8490();
   input += synapse0x35e84d0();
   input += synapse0x35e8510();
   input += synapse0x35e8550();
   input += synapse0x35e8590();
   input += synapse0x35e85d0();
   input += synapse0x35e8610();
   input += synapse0x35e8650();
   input += synapse0x35e8690();
   input += synapse0x35e86d0();
   input += synapse0x35e8710();
   input += synapse0x35e8750();
   input += synapse0x35e8790();
   input += synapse0x35e87d0();
   input += synapse0x35e8810();
   input += synapse0x35e82a0();
   input += synapse0x35e82e0();
   input += synapse0x35e8960();
   input += synapse0x35e89a0();
   input += synapse0x35e89e0();
   input += synapse0x35e8a20();
   input += synapse0x35e8a60();
   input += synapse0x35e8aa0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35e8110() {
   double input = input0x35e8110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35e8ae0() {
   double input = 0.587184;
   input += synapse0x35e8e20();
   input += synapse0x35e8e60();
   input += synapse0x35e8ea0();
   input += synapse0x35e8ee0();
   input += synapse0x35e8f20();
   input += synapse0x35e8f60();
   input += synapse0x35e8fa0();
   input += synapse0x35e8fe0();
   input += synapse0x35e9020();
   input += synapse0x35e9060();
   input += synapse0x35e90a0();
   input += synapse0x35e90e0();
   input += synapse0x35e9120();
   input += synapse0x35e9160();
   input += synapse0x35e91a0();
   input += synapse0x35e91e0();
   input += synapse0x35e8c70();
   input += synapse0x35e8cb0();
   input += synapse0x35e9330();
   input += synapse0x35e9370();
   input += synapse0x35e93b0();
   input += synapse0x35e93f0();
   input += synapse0x35e9430();
   input += synapse0x35e9470();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35e8ae0() {
   double input = input0x35e8ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35e94b0() {
   double input = 2.0193;
   input += synapse0x35e97f0();
   input += synapse0x35e9830();
   input += synapse0x35e9870();
   input += synapse0x35e98b0();
   input += synapse0x35e98f0();
   input += synapse0x35e9930();
   input += synapse0x35e9970();
   input += synapse0x35e99b0();
   input += synapse0x35e99f0();
   input += synapse0x35e9a30();
   input += synapse0x35e9a70();
   input += synapse0x35e9ab0();
   input += synapse0x35e9af0();
   input += synapse0x35e9b30();
   input += synapse0x35e9b70();
   input += synapse0x35e9bb0();
   input += synapse0x35e9640();
   input += synapse0x35e9680();
   input += synapse0x35e9d00();
   input += synapse0x35e9d40();
   input += synapse0x35e9d80();
   input += synapse0x35e9dc0();
   input += synapse0x35e9e00();
   input += synapse0x35e9e40();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35e94b0() {
   double input = input0x35e94b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35e9e80() {
   double input = 0.177864;
   input += synapse0x35ea1c0();
   input += synapse0x35ea200();
   input += synapse0x35ea240();
   input += synapse0x35ea280();
   input += synapse0x35ea2c0();
   input += synapse0x35ea300();
   input += synapse0x35ea340();
   input += synapse0x35ea380();
   input += synapse0x35ea3c0();
   input += synapse0x35ea400();
   input += synapse0x35ea440();
   input += synapse0x35ea480();
   input += synapse0x35ea4c0();
   input += synapse0x35ea500();
   input += synapse0x35ea540();
   input += synapse0x35ea580();
   input += synapse0x35ea010();
   input += synapse0x35ea050();
   input += synapse0x35ea6d0();
   input += synapse0x35ea710();
   input += synapse0x35ea750();
   input += synapse0x35ea790();
   input += synapse0x35ea7d0();
   input += synapse0x35ea810();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35e9e80() {
   double input = input0x35e9e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35ea850() {
   double input = 0.807183;
   input += synapse0x35d32c0();
   input += synapse0x35d3300();
   input += synapse0x35d3340();
   input += synapse0x35d3380();
   input += synapse0x35d33c0();
   input += synapse0x35d3400();
   input += synapse0x35d3440();
   input += synapse0x35d3480();
   input += synapse0x35eafa0();
   input += synapse0x35eafe0();
   input += synapse0x35eb020();
   input += synapse0x35eb060();
   input += synapse0x35eb0a0();
   input += synapse0x35eb0e0();
   input += synapse0x35eb120();
   input += synapse0x35eb160();
   input += synapse0x35ea9e0();
   input += synapse0x35eaa20();
   input += synapse0x35eb2b0();
   input += synapse0x35eb2f0();
   input += synapse0x35eb330();
   input += synapse0x35eb370();
   input += synapse0x35eb3b0();
   input += synapse0x35eb3f0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35ea850() {
   double input = input0x35ea850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35eb430() {
   double input = 0.557525;
   input += synapse0x35eb770();
   input += synapse0x35eb7b0();
   input += synapse0x35eb7f0();
   input += synapse0x35eb830();
   input += synapse0x35eb870();
   input += synapse0x35eb8b0();
   input += synapse0x35eb8f0();
   input += synapse0x35eb930();
   input += synapse0x35eb970();
   input += synapse0x35eb9b0();
   input += synapse0x35eb9f0();
   input += synapse0x35eba30();
   input += synapse0x35eba70();
   input += synapse0x35ebab0();
   input += synapse0x35ebaf0();
   input += synapse0x35ebb30();
   input += synapse0x35eb5c0();
   input += synapse0x35eb600();
   input += synapse0x35ebc80();
   input += synapse0x35ebcc0();
   input += synapse0x35ebd00();
   input += synapse0x35ebd40();
   input += synapse0x35ebd80();
   input += synapse0x35ebdc0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35eb430() {
   double input = input0x35eb430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35ebe00() {
   double input = -0.277859;
   input += synapse0x35ec140();
   input += synapse0x35ec180();
   input += synapse0x35ec1c0();
   input += synapse0x35ec200();
   input += synapse0x35ec240();
   input += synapse0x35ec280();
   input += synapse0x35ec2c0();
   input += synapse0x35ec300();
   input += synapse0x35ec340();
   input += synapse0x35ec380();
   input += synapse0x35ec3c0();
   input += synapse0x35ec400();
   input += synapse0x35ec440();
   input += synapse0x35ec480();
   input += synapse0x35ec4c0();
   input += synapse0x35ec500();
   input += synapse0x35ebf90();
   input += synapse0x35ebfd0();
   input += synapse0x35dcb00();
   input += synapse0x35dcb40();
   input += synapse0x35dcb80();
   input += synapse0x35dcbc0();
   input += synapse0x35dcc00();
   input += synapse0x35dcc40();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35ebe00() {
   double input = input0x35ebe00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35dcc80() {
   double input = 0.0854695;
   input += synapse0x35dcfc0();
   input += synapse0x35dd000();
   input += synapse0x35dd040();
   input += synapse0x35dd080();
   input += synapse0x35dd0c0();
   input += synapse0x35dd100();
   input += synapse0x35dd140();
   input += synapse0x35dd180();
   input += synapse0x35dd1c0();
   input += synapse0x35dd200();
   input += synapse0x35dd240();
   input += synapse0x35dd280();
   input += synapse0x35dd2c0();
   input += synapse0x35dd300();
   input += synapse0x35dd340();
   input += synapse0x35dd380();
   input += synapse0x35dce10();
   input += synapse0x35dce50();
   input += synapse0x35dd4d0();
   input += synapse0x35dd510();
   input += synapse0x35dd550();
   input += synapse0x35dd590();
   input += synapse0x35dd5d0();
   input += synapse0x35dd610();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35dcc80() {
   double input = input0x35dcc80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35dd650() {
   double input = 1.34591;
   input += synapse0x35dd990();
   input += synapse0x35dd9d0();
   input += synapse0x35dda10();
   input += synapse0x35dda50();
   input += synapse0x35dda90();
   input += synapse0x35ddad0();
   input += synapse0x35ddb10();
   input += synapse0x35ddb50();
   input += synapse0x35ddb90();
   input += synapse0x35ddbd0();
   input += synapse0x35ddc10();
   input += synapse0x35ddc50();
   input += synapse0x35ddc90();
   input += synapse0x35ddcd0();
   input += synapse0x35ddd10();
   input += synapse0x35ddd50();
   input += synapse0x35dd7e0();
   input += synapse0x35dd820();
   input += synapse0x35ddea0();
   input += synapse0x35ddee0();
   input += synapse0x35ddf20();
   input += synapse0x35ddf60();
   input += synapse0x35ddfa0();
   input += synapse0x35ddfe0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35dd650() {
   double input = input0x35dd650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35de020() {
   double input = 0.293054;
   input += synapse0x35de360();
   input += synapse0x35de3a0();
   input += synapse0x35de3e0();
   input += synapse0x35de420();
   input += synapse0x35de460();
   input += synapse0x35de4a0();
   input += synapse0x35de4e0();
   input += synapse0x35de520();
   input += synapse0x35de560();
   input += synapse0x35de5a0();
   input += synapse0x35de5e0();
   input += synapse0x35de620();
   input += synapse0x35de660();
   input += synapse0x35de6a0();
   input += synapse0x35de6e0();
   input += synapse0x35de720();
   input += synapse0x35de1b0();
   input += synapse0x35de1f0();
   input += synapse0x35de870();
   input += synapse0x35de8b0();
   input += synapse0x35de8f0();
   input += synapse0x35de930();
   input += synapse0x35de970();
   input += synapse0x35de9b0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35de020() {
   double input = input0x35de020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35f0660() {
   double input = 1.93846;
   input += synapse0x35f0880();
   input += synapse0x35f08c0();
   input += synapse0x35f0900();
   input += synapse0x35f0940();
   input += synapse0x35f0980();
   input += synapse0x35f09c0();
   input += synapse0x35f0a00();
   input += synapse0x35f0a40();
   input += synapse0x35f0a80();
   input += synapse0x35f0ac0();
   input += synapse0x35f0b00();
   input += synapse0x35f0b40();
   input += synapse0x35f0b80();
   input += synapse0x35f0bc0();
   input += synapse0x35f0c00();
   input += synapse0x35f0c40();
   input += synapse0x35de9f0();
   input += synapse0x35dea30();
   input += synapse0x35f0d90();
   input += synapse0x35f0dd0();
   input += synapse0x35f0e10();
   input += synapse0x35f0e50();
   input += synapse0x35f0e90();
   input += synapse0x35f0ed0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35f0660() {
   double input = input0x35f0660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35f0f10() {
   double input = 0.97075;
   input += synapse0x35f1250();
   input += synapse0x35f1290();
   input += synapse0x35f12d0();
   input += synapse0x35f1310();
   input += synapse0x35f1350();
   input += synapse0x35f1390();
   input += synapse0x35f13d0();
   input += synapse0x35f1410();
   input += synapse0x35f1450();
   input += synapse0x35f1490();
   input += synapse0x35f14d0();
   input += synapse0x35f1510();
   input += synapse0x35f1550();
   input += synapse0x35f1590();
   input += synapse0x35f15d0();
   input += synapse0x35f1610();
   input += synapse0x35f10a0();
   input += synapse0x35f10e0();
   input += synapse0x35f1760();
   input += synapse0x35f17a0();
   input += synapse0x35f17e0();
   input += synapse0x35f1820();
   input += synapse0x35f1860();
   input += synapse0x35f18a0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35f0f10() {
   double input = input0x35f0f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35f18e0() {
   double input = -1.43509;
   input += synapse0x35f1c20();
   input += synapse0x35f1c60();
   input += synapse0x35f1ca0();
   input += synapse0x35f1ce0();
   input += synapse0x35f1d20();
   input += synapse0x35f1d60();
   input += synapse0x35f1da0();
   input += synapse0x35f1de0();
   input += synapse0x35f1e20();
   input += synapse0x35f1e60();
   input += synapse0x35f1ea0();
   input += synapse0x35f1ee0();
   input += synapse0x35f1f20();
   input += synapse0x35f1f60();
   input += synapse0x35f1fa0();
   input += synapse0x35f1fe0();
   input += synapse0x35f1a70();
   input += synapse0x35f1ab0();
   input += synapse0x35f2130();
   input += synapse0x35f2170();
   input += synapse0x35f21b0();
   input += synapse0x35f21f0();
   input += synapse0x35f2230();
   input += synapse0x35f2270();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35f18e0() {
   double input = input0x35f18e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35f22b0() {
   double input = 0.924132;
   input += synapse0x35f25f0();
   input += synapse0x35f2630();
   input += synapse0x35f2670();
   input += synapse0x35f26b0();
   input += synapse0x35f26f0();
   input += synapse0x35f2730();
   input += synapse0x35f2770();
   input += synapse0x35f27b0();
   input += synapse0x35f27f0();
   input += synapse0x35f2830();
   input += synapse0x35f2870();
   input += synapse0x35f28b0();
   input += synapse0x35f28f0();
   input += synapse0x35f2930();
   input += synapse0x35f2970();
   input += synapse0x35f29b0();
   input += synapse0x35f2440();
   input += synapse0x35f2480();
   input += synapse0x35f2b00();
   input += synapse0x35f2b40();
   input += synapse0x35f2b80();
   input += synapse0x35f2bc0();
   input += synapse0x35f2c00();
   input += synapse0x35f2c40();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35f22b0() {
   double input = input0x35f22b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35f94b0() {
   double input = 0.191173;
   input += synapse0x3392b50();
   input += synapse0x3392b90();
   input += synapse0x35d06f0();
   input += synapse0x35d0730();
   input += synapse0x35d10c0();
   input += synapse0x35d1100();
   input += synapse0x35d1e90();
   input += synapse0x35d1ed0();
   input += synapse0x35d2860();
   input += synapse0x35d28a0();
   input += synapse0x35d3230();
   input += synapse0x35d3270();
   input += synapse0x35d3d10();
   input += synapse0x35d3d50();
   input += synapse0x35d46e0();
   input += synapse0x35d4720();
   input += synapse0x35d17c0();
   input += synapse0x35d1800();
   input += synapse0x35d6290();
   input += synapse0x35d62d0();
   input += synapse0x35d6c60();
   input += synapse0x35d6ca0();
   input += synapse0x35d7630();
   input += synapse0x35d7670();
   input += synapse0x35d8000();
   input += synapse0x35d8040();
   input += synapse0x35cc1a0();
   input += synapse0x35cc1e0();
   input += synapse0x35da0f0();
   input += synapse0x35da130();
   input += synapse0x35daac0();
   input += synapse0x35dab00();
   input += synapse0x35db490();
   input += synapse0x35db4d0();
   input += synapse0x35dbe60();
   input += synapse0x35dbea0();
   input += synapse0x35dc830();
   input += synapse0x35dc870();
   input += synapse0x35d5380();
   input += synapse0x35d53c0();
   input += synapse0x35dec30();
   input += synapse0x35dec70();
   input += synapse0x35df5c0();
   input += synapse0x35df600();
   input += synapse0x35dff90();
   input += synapse0x35dffd0();
   input += synapse0x35e0960();
   input += synapse0x35e09a0();
   input += synapse0x35e1330();
   input += synapse0x35e1370();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35f94b0() {
   double input = input0x35f94b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35f9850() {
   double input = 0.632281;
   input += synapse0x35e3a70();
   input += synapse0x35e3ab0();
   input += synapse0x35d9030();
   input += synapse0x35d9070();
   input += synapse0x35e6650();
   input += synapse0x35e6690();
   input += synapse0x35e7020();
   input += synapse0x35e7060();
   input += synapse0x35e79f0();
   input += synapse0x35e7a30();
   input += synapse0x35e83c0();
   input += synapse0x35e8400();
   input += synapse0x35e8d90();
   input += synapse0x35e8dd0();
   input += synapse0x35e9760();
   input += synapse0x35e97a0();
   input += synapse0x35ea130();
   input += synapse0x35ea170();
   input += synapse0x35eab00();
   input += synapse0x35eab40();
   input += synapse0x35eb6e0();
   input += synapse0x35eb720();
   input += synapse0x35ec0b0();
   input += synapse0x35ec0f0();
   input += synapse0x35dcf30();
   input += synapse0x35dcf70();
   input += synapse0x35dd900();
   input += synapse0x35dd940();
   input += synapse0x35de2d0();
   input += synapse0x35de310();
   input += synapse0x35f07f0();
   input += synapse0x35f0830();
   input += synapse0x35f11c0();
   input += synapse0x35f1200();
   input += synapse0x35f1b90();
   input += synapse0x35f1bd0();
   input += synapse0x35f2560();
   input += synapse0x35f25a0();
   input += synapse0x35ce450();
   input += synapse0x35ce490();
   input += synapse0x35e1d00();
   input += synapse0x35e1d40();
   input += synapse0x35f2c80();
   input += synapse0x35f2cc0();
   input += synapse0x35f2d00();
   input += synapse0x35f2d40();
   input += synapse0x35f9bf0();
   input += synapse0x35f9c30();
   input += synapse0x35f9c70();
   input += synapse0x35f9cb0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35f9850() {
   double input = input0x35f9850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35f9cf0() {
   double input = 0.45615;
   input += synapse0x35fa030();
   input += synapse0x35fa070();
   input += synapse0x35fa0b0();
   input += synapse0x35fa0f0();
   input += synapse0x35fa130();
   input += synapse0x35fa170();
   input += synapse0x35fa1b0();
   input += synapse0x35fa1f0();
   input += synapse0x35fa230();
   input += synapse0x35fa270();
   input += synapse0x35fa2b0();
   input += synapse0x35fa2f0();
   input += synapse0x35fa330();
   input += synapse0x35fa370();
   input += synapse0x35fa3b0();
   input += synapse0x35fa3f0();
   input += synapse0x35f9e80();
   input += synapse0x35f9ec0();
   input += synapse0x35fa540();
   input += synapse0x35fa580();
   input += synapse0x35fa5c0();
   input += synapse0x35fa600();
   input += synapse0x35fa640();
   input += synapse0x35fa680();
   input += synapse0x35fa6c0();
   input += synapse0x35fa700();
   input += synapse0x35fa740();
   input += synapse0x35fa780();
   input += synapse0x35fa7c0();
   input += synapse0x35fa800();
   input += synapse0x35fa840();
   input += synapse0x35fa880();
   input += synapse0x35fa430();
   input += synapse0x35fa470();
   input += synapse0x35fa4b0();
   input += synapse0x35fa4f0();
   input += synapse0x35faad0();
   input += synapse0x35fab10();
   input += synapse0x35fab50();
   input += synapse0x35fab90();
   input += synapse0x35fabd0();
   input += synapse0x35fac10();
   input += synapse0x35fac50();
   input += synapse0x35fac90();
   input += synapse0x35facd0();
   input += synapse0x35fad10();
   input += synapse0x35fad50();
   input += synapse0x35fad90();
   input += synapse0x35fadd0();
   input += synapse0x35fae10();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35f9cf0() {
   double input = input0x35f9cf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35fae50() {
   double input = -1.02924;
   input += synapse0x35fb190();
   input += synapse0x35fb1d0();
   input += synapse0x35fb210();
   input += synapse0x35fb250();
   input += synapse0x35fb290();
   input += synapse0x35fb2d0();
   input += synapse0x35fb310();
   input += synapse0x35fb350();
   input += synapse0x35fb390();
   input += synapse0x35fb3d0();
   input += synapse0x35fb410();
   input += synapse0x35fb450();
   input += synapse0x35fb490();
   input += synapse0x35fb4d0();
   input += synapse0x35fb510();
   input += synapse0x35fb550();
   input += synapse0x35fafe0();
   input += synapse0x35fb020();
   input += synapse0x35fb6a0();
   input += synapse0x35fb6e0();
   input += synapse0x35fb720();
   input += synapse0x35fb760();
   input += synapse0x35fb7a0();
   input += synapse0x35fb7e0();
   input += synapse0x35fb820();
   input += synapse0x35fb860();
   input += synapse0x35fb8a0();
   input += synapse0x35fb8e0();
   input += synapse0x35fb920();
   input += synapse0x35fb960();
   input += synapse0x35fb9a0();
   input += synapse0x35fb9e0();
   input += synapse0x35fb590();
   input += synapse0x35fb5d0();
   input += synapse0x35fb610();
   input += synapse0x35fb650();
   input += synapse0x35fbc30();
   input += synapse0x35fbc70();
   input += synapse0x35fbcb0();
   input += synapse0x35fbcf0();
   input += synapse0x35fbd30();
   input += synapse0x35fbd70();
   input += synapse0x35fbdb0();
   input += synapse0x35fbdf0();
   input += synapse0x35fbe30();
   input += synapse0x35fbe70();
   input += synapse0x35fbeb0();
   input += synapse0x35fbef0();
   input += synapse0x35fbf30();
   input += synapse0x35fbf70();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35fae50() {
   double input = input0x35fae50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35fbfb0() {
   double input = -0.418742;
   input += synapse0x35fc2f0();
   input += synapse0x35fc330();
   input += synapse0x35fc370();
   input += synapse0x35fc3b0();
   input += synapse0x35fc3f0();
   input += synapse0x35fc430();
   input += synapse0x35fc470();
   input += synapse0x35fc4b0();
   input += synapse0x35fc4f0();
   input += synapse0x35fc530();
   input += synapse0x35fc570();
   input += synapse0x35fc5b0();
   input += synapse0x35fc5f0();
   input += synapse0x35fc630();
   input += synapse0x35fc670();
   input += synapse0x35fc6b0();
   input += synapse0x35fc140();
   input += synapse0x35fc180();
   input += synapse0x35fc800();
   input += synapse0x35fc840();
   input += synapse0x35fc880();
   input += synapse0x35fc8c0();
   input += synapse0x35fc900();
   input += synapse0x35fc940();
   input += synapse0x35fc980();
   input += synapse0x35fc9c0();
   input += synapse0x35fca00();
   input += synapse0x35fca40();
   input += synapse0x35fca80();
   input += synapse0x35fcac0();
   input += synapse0x35fcb00();
   input += synapse0x35fcb40();
   input += synapse0x35fc6f0();
   input += synapse0x35fc730();
   input += synapse0x35fc770();
   input += synapse0x35fc7b0();
   input += synapse0x35fcd90();
   input += synapse0x35fcdd0();
   input += synapse0x35fce10();
   input += synapse0x35fce50();
   input += synapse0x35fce90();
   input += synapse0x35fced0();
   input += synapse0x35fcf10();
   input += synapse0x35fcf50();
   input += synapse0x35fcf90();
   input += synapse0x35fcfd0();
   input += synapse0x35fd010();
   input += synapse0x35fd050();
   input += synapse0x35fd090();
   input += synapse0x35fd0d0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35fbfb0() {
   double input = input0x35fbfb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x35fd110() {
   double input = 5.52056;
   input += synapse0x35fd330();
   input += synapse0x35fd370();
   input += synapse0x35fd3b0();
   input += synapse0x35fd3f0();
   input += synapse0x35fd430();
   return input;
}

double NNfunction_ss_sLsR::neuron0x35fd110() {
   double input = input0x35fd110();
   return (input * 1)+0;
}

double NNfunction_ss_sLsR::synapse0x35c90c0() {
   return (neuron0x35c9200()*0.291561);
}

double NNfunction_ss_sLsR::synapse0x35c9100() {
   return (neuron0x35c9540()*-0.0394507);
}

double NNfunction_ss_sLsR::synapse0x35ce4e0() {
   return (neuron0x35c9880()*0.293565);
}

double NNfunction_ss_sLsR::synapse0x35ce520() {
   return (neuron0x35c9bc0()*0.419948);
}

double NNfunction_ss_sLsR::synapse0x35ce560() {
   return (neuron0x35c9f00()*-0.355738);
}

double NNfunction_ss_sLsR::synapse0x35ce5a0() {
   return (neuron0x35ca240()*0.550637);
}

double NNfunction_ss_sLsR::synapse0x35ce5e0() {
   return (neuron0x35ca580()*0.0911261);
}

double NNfunction_ss_sLsR::synapse0x35ce620() {
   return (neuron0x35ca8c0()*-0.255056);
}

double NNfunction_ss_sLsR::synapse0x35ce660() {
   return (neuron0x35cac00()*-0.954935);
}

double NNfunction_ss_sLsR::synapse0x35ce6a0() {
   return (neuron0x35caf40()*-0.7835);
}

double NNfunction_ss_sLsR::synapse0x35ce6e0() {
   return (neuron0x35cb280()*0.401942);
}

double NNfunction_ss_sLsR::synapse0x35ce720() {
   return (neuron0x35cb5c0()*0.0686779);
}

double NNfunction_ss_sLsR::synapse0x35ce760() {
   return (neuron0x35cb900()*0.167045);
}

double NNfunction_ss_sLsR::synapse0x35ce7a0() {
   return (neuron0x35cbc40()*-0.524986);
}

double NNfunction_ss_sLsR::synapse0x35ce7e0() {
   return (neuron0x35cbf80()*-0.172115);
}

double NNfunction_ss_sLsR::synapse0x35ce820() {
   return (neuron0x35cc2c0()*0.213295);
}

double NNfunction_ss_sLsR::synapse0x35c9030() {
   return (neuron0x35cc600()*-0.493874);
}

double NNfunction_ss_sLsR::synapse0x35c9070() {
   return (neuron0x35ccb60()*0.402719);
}

double NNfunction_ss_sLsR::synapse0x33843f0() {
   return (neuron0x35ccd80()*0.192043);
}

double NNfunction_ss_sLsR::synapse0x3384430() {
   return (neuron0x35cd0c0()*0.318032);
}

double NNfunction_ss_sLsR::synapse0x35cea80() {
   return (neuron0x35cd400()*-0.518099);
}

double NNfunction_ss_sLsR::synapse0x35ceac0() {
   return (neuron0x35cd740()*0.316918);
}

double NNfunction_ss_sLsR::synapse0x35ceb00() {
   return (neuron0x35cda80()*-0.523415);
}

double NNfunction_ss_sLsR::synapse0x35ceb40() {
   return (neuron0x35cddc0()*-0.237304);
}

double NNfunction_ss_sLsR::synapse0x35ceec0() {
   return (neuron0x35c9200()*-0.983844);
}

double NNfunction_ss_sLsR::synapse0x35cef00() {
   return (neuron0x35c9540()*0.00356635);
}

double NNfunction_ss_sLsR::synapse0x35cef40() {
   return (neuron0x35c9880()*-0.327091);
}

double NNfunction_ss_sLsR::synapse0x35cef80() {
   return (neuron0x35c9bc0()*-0.537034);
}

double NNfunction_ss_sLsR::synapse0x35cefc0() {
   return (neuron0x35c9f00()*-0.0466639);
}

double NNfunction_ss_sLsR::synapse0x35cf000() {
   return (neuron0x35ca240()*-0.734697);
}

double NNfunction_ss_sLsR::synapse0x35cf040() {
   return (neuron0x35ca580()*-0.807556);
}

double NNfunction_ss_sLsR::synapse0x35cf080() {
   return (neuron0x35ca8c0()*0.343578);
}

double NNfunction_ss_sLsR::synapse0x35cf0c0() {
   return (neuron0x35cac00()*0.454786);
}

double NNfunction_ss_sLsR::synapse0x35ce970() {
   return (neuron0x35caf40()*-1.10108);
}

double NNfunction_ss_sLsR::synapse0x35ce9b0() {
   return (neuron0x35cb280()*-0.812373);
}

double NNfunction_ss_sLsR::synapse0x35ce9f0() {
   return (neuron0x35cb5c0()*0.412459);
}

double NNfunction_ss_sLsR::synapse0x35cea30() {
   return (neuron0x35cb900()*0.0729615);
}

double NNfunction_ss_sLsR::synapse0x35cf310() {
   return (neuron0x35cbc40()*0.566339);
}

double NNfunction_ss_sLsR::synapse0x35cf350() {
   return (neuron0x35cbf80()*0.172642);
}

double NNfunction_ss_sLsR::synapse0x35cf390() {
   return (neuron0x35cc2c0()*0.388365);
}

double NNfunction_ss_sLsR::synapse0x35ced10() {
   return (neuron0x35cc600()*-1.09429);
}

double NNfunction_ss_sLsR::synapse0x35ced50() {
   return (neuron0x35ccb60()*0.512155);
}

double NNfunction_ss_sLsR::synapse0x35cf4e0() {
   return (neuron0x35ccd80()*0.558786);
}

double NNfunction_ss_sLsR::synapse0x35cf520() {
   return (neuron0x35cd0c0()*-0.280829);
}

double NNfunction_ss_sLsR::synapse0x35cf560() {
   return (neuron0x35cd400()*0.112053);
}

double NNfunction_ss_sLsR::synapse0x35cf5a0() {
   return (neuron0x35cd740()*1.01256);
}

double NNfunction_ss_sLsR::synapse0x35cf5e0() {
   return (neuron0x35cda80()*-0.302697);
}

double NNfunction_ss_sLsR::synapse0x35cf620() {
   return (neuron0x35cddc0()*0.112643);
}

double NNfunction_ss_sLsR::synapse0x35cf9a0() {
   return (neuron0x35c9200()*0.017717);
}

double NNfunction_ss_sLsR::synapse0x35cf9e0() {
   return (neuron0x35c9540()*-0.019678);
}

double NNfunction_ss_sLsR::synapse0x35cfa20() {
   return (neuron0x35c9880()*-0.0220708);
}

double NNfunction_ss_sLsR::synapse0x35cfa60() {
   return (neuron0x35c9bc0()*-4.30448);
}

double NNfunction_ss_sLsR::synapse0x35cfaa0() {
   return (neuron0x35c9f00()*0.0107818);
}

double NNfunction_ss_sLsR::synapse0x35cfae0() {
   return (neuron0x35ca240()*0.0125747);
}

double NNfunction_ss_sLsR::synapse0x35cfb20() {
   return (neuron0x35ca580()*-0.0380042);
}

double NNfunction_ss_sLsR::synapse0x35cfb60() {
   return (neuron0x35ca8c0()*-0.0141028);
}

double NNfunction_ss_sLsR::synapse0x35cfba0() {
   return (neuron0x35cac00()*0.0335472);
}

double NNfunction_ss_sLsR::synapse0x35cfbe0() {
   return (neuron0x35caf40()*-0.0165451);
}

double NNfunction_ss_sLsR::synapse0x35cfc20() {
   return (neuron0x35cb280()*-0.0043383);
}

double NNfunction_ss_sLsR::synapse0x35cfc60() {
   return (neuron0x35cb5c0()*0.0179647);
}

double NNfunction_ss_sLsR::synapse0x35cfca0() {
   return (neuron0x35cb900()*0.119621);
}

double NNfunction_ss_sLsR::synapse0x35cfce0() {
   return (neuron0x35cbc40()*-0.00830162);
}

double NNfunction_ss_sLsR::synapse0x35cfd20() {
   return (neuron0x35cbf80()*-0.0167501);
}

double NNfunction_ss_sLsR::synapse0x35cfd60() {
   return (neuron0x35cc2c0()*-0.00207971);
}

double NNfunction_ss_sLsR::synapse0x35cf7f0() {
   return (neuron0x35cc600()*0.0325757);
}

double NNfunction_ss_sLsR::synapse0x35cf830() {
   return (neuron0x35ccb60()*0.0133489);
}

double NNfunction_ss_sLsR::synapse0x3384a90() {
   return (neuron0x35ccd80()*0.0627753);
}

double NNfunction_ss_sLsR::synapse0x3392360() {
   return (neuron0x35cd0c0()*-0.0261497);
}

double NNfunction_ss_sLsR::synapse0x33923a0() {
   return (neuron0x35cd400()*0.0138839);
}

double NNfunction_ss_sLsR::synapse0x35b8290() {
   return (neuron0x35cd740()*0.0195671);
}

double NNfunction_ss_sLsR::synapse0x35b82d0() {
   return (neuron0x35cda80()*0.00554974);
}

double NNfunction_ss_sLsR::synapse0x35b8310() {
   return (neuron0x35cddc0()*-0.0317769);
}

double NNfunction_ss_sLsR::synapse0x3392be0() {
   return (neuron0x35c9200()*0.0250448);
}

double NNfunction_ss_sLsR::synapse0x35cf290() {
   return (neuron0x35c9540()*0.0375241);
}

double NNfunction_ss_sLsR::synapse0x35cf2d0() {
   return (neuron0x35c9880()*0.17537);
}

double NNfunction_ss_sLsR::synapse0x35cfeb0() {
   return (neuron0x35c9bc0()*8.14626);
}

double NNfunction_ss_sLsR::synapse0x35cfef0() {
   return (neuron0x35c9f00()*0.0679362);
}

double NNfunction_ss_sLsR::synapse0x35cff30() {
   return (neuron0x35ca240()*0.0748077);
}

double NNfunction_ss_sLsR::synapse0x35cff70() {
   return (neuron0x35ca580()*0.0184312);
}

double NNfunction_ss_sLsR::synapse0x35cffb0() {
   return (neuron0x35ca8c0()*0.0239241);
}

double NNfunction_ss_sLsR::synapse0x35cfff0() {
   return (neuron0x35cac00()*-0.0324836);
}

double NNfunction_ss_sLsR::synapse0x35d0030() {
   return (neuron0x35caf40()*-0.0718277);
}

double NNfunction_ss_sLsR::synapse0x35d0070() {
   return (neuron0x35cb280()*-0.0768863);
}

double NNfunction_ss_sLsR::synapse0x35d00b0() {
   return (neuron0x35cb5c0()*0.0175206);
}

double NNfunction_ss_sLsR::synapse0x35d00f0() {
   return (neuron0x35cb900()*-0.295045);
}

double NNfunction_ss_sLsR::synapse0x35d0130() {
   return (neuron0x35cbc40()*-0.0527693);
}

double NNfunction_ss_sLsR::synapse0x35d0170() {
   return (neuron0x35cbf80()*0.0643608);
}

double NNfunction_ss_sLsR::synapse0x35d01b0() {
   return (neuron0x35cc2c0()*0.102518);
}

double NNfunction_ss_sLsR::synapse0x35c9140() {
   return (neuron0x35cc600()*-0.0110523);
}

double NNfunction_ss_sLsR::synapse0x35c9180() {
   return (neuron0x35ccb60()*-0.0969656);
}

double NNfunction_ss_sLsR::synapse0x35c91c0() {
   return (neuron0x35ccd80()*-0.677515);
}

double NNfunction_ss_sLsR::synapse0x35d0300() {
   return (neuron0x35cd0c0()*-0.00825729);
}

double NNfunction_ss_sLsR::synapse0x35d0340() {
   return (neuron0x35cd400()*0.048858);
}

double NNfunction_ss_sLsR::synapse0x35d0380() {
   return (neuron0x35cd740()*-0.000541454);
}

double NNfunction_ss_sLsR::synapse0x35d03c0() {
   return (neuron0x35cda80()*0.013989);
}

double NNfunction_ss_sLsR::synapse0x35d0400() {
   return (neuron0x35cddc0()*0.0881143);
}

double NNfunction_ss_sLsR::synapse0x35d0780() {
   return (neuron0x35c9200()*0.391329);
}

double NNfunction_ss_sLsR::synapse0x35d07c0() {
   return (neuron0x35c9540()*-0.0144326);
}

double NNfunction_ss_sLsR::synapse0x35d0800() {
   return (neuron0x35c9880()*-0.561714);
}

double NNfunction_ss_sLsR::synapse0x35d0840() {
   return (neuron0x35c9bc0()*-0.465808);
}

double NNfunction_ss_sLsR::synapse0x35d0880() {
   return (neuron0x35c9f00()*0.173697);
}

double NNfunction_ss_sLsR::synapse0x35d08c0() {
   return (neuron0x35ca240()*-0.530857);
}

double NNfunction_ss_sLsR::synapse0x35d0900() {
   return (neuron0x35ca580()*0.120334);
}

double NNfunction_ss_sLsR::synapse0x35d0940() {
   return (neuron0x35ca8c0()*-0.0505188);
}

double NNfunction_ss_sLsR::synapse0x35d0980() {
   return (neuron0x35cac00()*-0.17333);
}

double NNfunction_ss_sLsR::synapse0x35d09c0() {
   return (neuron0x35caf40()*0.109242);
}

double NNfunction_ss_sLsR::synapse0x35d0a00() {
   return (neuron0x35cb280()*0.00427319);
}

double NNfunction_ss_sLsR::synapse0x35d0a40() {
   return (neuron0x35cb5c0()*0.0180091);
}

double NNfunction_ss_sLsR::synapse0x35d0a80() {
   return (neuron0x35cb900()*-0.7183);
}

double NNfunction_ss_sLsR::synapse0x35d0ac0() {
   return (neuron0x35cbc40()*0.133453);
}

double NNfunction_ss_sLsR::synapse0x35d0b00() {
   return (neuron0x35cbf80()*-0.836599);
}

double NNfunction_ss_sLsR::synapse0x35d0b40() {
   return (neuron0x35cc2c0()*0.261365);
}

double NNfunction_ss_sLsR::synapse0x35d05d0() {
   return (neuron0x35cc600()*0.325116);
}

double NNfunction_ss_sLsR::synapse0x35d0610() {
   return (neuron0x35ccb60()*0.559944);
}

double NNfunction_ss_sLsR::synapse0x35d0c90() {
   return (neuron0x35ccd80()*-0.958419);
}

double NNfunction_ss_sLsR::synapse0x35d0cd0() {
   return (neuron0x35cd0c0()*0.650403);
}

double NNfunction_ss_sLsR::synapse0x35d0d10() {
   return (neuron0x35cd400()*-0.129908);
}

double NNfunction_ss_sLsR::synapse0x35d0d50() {
   return (neuron0x35cd740()*0.125102);
}

double NNfunction_ss_sLsR::synapse0x35d0d90() {
   return (neuron0x35cda80()*0.0845796);
}

double NNfunction_ss_sLsR::synapse0x35d0dd0() {
   return (neuron0x35cddc0()*-0.414026);
}

double NNfunction_ss_sLsR::synapse0x35d1150() {
   return (neuron0x35c9200()*-0.190931);
}

double NNfunction_ss_sLsR::synapse0x35d1190() {
   return (neuron0x35c9540()*-0.0508698);
}

double NNfunction_ss_sLsR::synapse0x35d11d0() {
   return (neuron0x35c9880()*-0.0794731);
}

double NNfunction_ss_sLsR::synapse0x35d1210() {
   return (neuron0x35c9bc0()*-1.68263);
}

double NNfunction_ss_sLsR::synapse0x35d1250() {
   return (neuron0x35c9f00()*-0.0160924);
}

double NNfunction_ss_sLsR::synapse0x35d1290() {
   return (neuron0x35ca240()*0.189239);
}

double NNfunction_ss_sLsR::synapse0x35d12d0() {
   return (neuron0x35ca580()*0.0318068);
}

double NNfunction_ss_sLsR::synapse0x35d1310() {
   return (neuron0x35ca8c0()*-0.0440058);
}

double NNfunction_ss_sLsR::synapse0x35d1350() {
   return (neuron0x35cac00()*-0.00952682);
}

double NNfunction_ss_sLsR::synapse0x33926b0() {
   return (neuron0x35caf40()*-0.0265263);
}

double NNfunction_ss_sLsR::synapse0x33926f0() {
   return (neuron0x35cb280()*-0.0233673);
}

double NNfunction_ss_sLsR::synapse0x3392730() {
   return (neuron0x35cb5c0()*-0.0548878);
}

double NNfunction_ss_sLsR::synapse0x3392770() {
   return (neuron0x35cb900()*-0.326238);
}

double NNfunction_ss_sLsR::synapse0x33927b0() {
   return (neuron0x35cbc40()*0.065972);
}

double NNfunction_ss_sLsR::synapse0x33927f0() {
   return (neuron0x35cbf80()*-0.218606);
}

double NNfunction_ss_sLsR::synapse0x3392830() {
   return (neuron0x35cc2c0()*-0.130517);
}

double NNfunction_ss_sLsR::synapse0x35d0fa0() {
   return (neuron0x35cc600()*0.125967);
}

double NNfunction_ss_sLsR::synapse0x35d0fe0() {
   return (neuron0x35ccb60()*-0.0393385);
}

double NNfunction_ss_sLsR::synapse0x3392980() {
   return (neuron0x35ccd80()*0.0772184);
}

double NNfunction_ss_sLsR::synapse0x33929c0() {
   return (neuron0x35cd0c0()*-0.0592542);
}

double NNfunction_ss_sLsR::synapse0x3392a00() {
   return (neuron0x35cd400()*0.0439733);
}

double NNfunction_ss_sLsR::synapse0x3392a40() {
   return (neuron0x35cd740()*-0.157822);
}

double NNfunction_ss_sLsR::synapse0x3392a80() {
   return (neuron0x35cda80()*0.0595816);
}

double NNfunction_ss_sLsR::synapse0x35d1ba0() {
   return (neuron0x35cddc0()*0.0602928);
}

double NNfunction_ss_sLsR::synapse0x35d1f20() {
   return (neuron0x35c9200()*-0.48042);
}

double NNfunction_ss_sLsR::synapse0x35d1f60() {
   return (neuron0x35c9540()*-0.666842);
}

double NNfunction_ss_sLsR::synapse0x35d1fa0() {
   return (neuron0x35c9880()*0.280293);
}

double NNfunction_ss_sLsR::synapse0x35d1fe0() {
   return (neuron0x35c9bc0()*-0.207471);
}

double NNfunction_ss_sLsR::synapse0x35d2020() {
   return (neuron0x35c9f00()*0.468286);
}

double NNfunction_ss_sLsR::synapse0x35d2060() {
   return (neuron0x35ca240()*-0.167972);
}

double NNfunction_ss_sLsR::synapse0x35d20a0() {
   return (neuron0x35ca580()*0.0274452);
}

double NNfunction_ss_sLsR::synapse0x35d20e0() {
   return (neuron0x35ca8c0()*0.238377);
}

double NNfunction_ss_sLsR::synapse0x35d2120() {
   return (neuron0x35cac00()*0.858139);
}

double NNfunction_ss_sLsR::synapse0x35d2160() {
   return (neuron0x35caf40()*-0.517103);
}

double NNfunction_ss_sLsR::synapse0x35d21a0() {
   return (neuron0x35cb280()*0.866404);
}

double NNfunction_ss_sLsR::synapse0x35d21e0() {
   return (neuron0x35cb5c0()*0.387458);
}

double NNfunction_ss_sLsR::synapse0x35d2220() {
   return (neuron0x35cb900()*-0.026768);
}

double NNfunction_ss_sLsR::synapse0x35d2260() {
   return (neuron0x35cbc40()*-0.335051);
}

double NNfunction_ss_sLsR::synapse0x35d22a0() {
   return (neuron0x35cbf80()*0.592009);
}

double NNfunction_ss_sLsR::synapse0x35d22e0() {
   return (neuron0x35cc2c0()*0.203829);
}

double NNfunction_ss_sLsR::synapse0x35d1d70() {
   return (neuron0x35cc600()*-0.307706);
}

double NNfunction_ss_sLsR::synapse0x35d1db0() {
   return (neuron0x35ccb60()*-0.387544);
}

double NNfunction_ss_sLsR::synapse0x35d2430() {
   return (neuron0x35ccd80()*-0.00526013);
}

double NNfunction_ss_sLsR::synapse0x35d2470() {
   return (neuron0x35cd0c0()*-0.171318);
}

double NNfunction_ss_sLsR::synapse0x35d24b0() {
   return (neuron0x35cd400()*-0.51523);
}

double NNfunction_ss_sLsR::synapse0x35d24f0() {
   return (neuron0x35cd740()*-0.187859);
}

double NNfunction_ss_sLsR::synapse0x35d2530() {
   return (neuron0x35cda80()*0.0525475);
}

double NNfunction_ss_sLsR::synapse0x35d2570() {
   return (neuron0x35cddc0()*0.205557);
}

double NNfunction_ss_sLsR::synapse0x35d28f0() {
   return (neuron0x35c9200()*-0.165718);
}

double NNfunction_ss_sLsR::synapse0x35d2930() {
   return (neuron0x35c9540()*-0.334849);
}

double NNfunction_ss_sLsR::synapse0x35d2970() {
   return (neuron0x35c9880()*-1.04046);
}

double NNfunction_ss_sLsR::synapse0x35d29b0() {
   return (neuron0x35c9bc0()*0.592504);
}

double NNfunction_ss_sLsR::synapse0x35d29f0() {
   return (neuron0x35c9f00()*-0.0151264);
}

double NNfunction_ss_sLsR::synapse0x35d2a30() {
   return (neuron0x35ca240()*-0.152009);
}

double NNfunction_ss_sLsR::synapse0x35d2a70() {
   return (neuron0x35ca580()*-0.534181);
}

double NNfunction_ss_sLsR::synapse0x35d2ab0() {
   return (neuron0x35ca8c0()*0.51254);
}

double NNfunction_ss_sLsR::synapse0x35d2af0() {
   return (neuron0x35cac00()*-0.304421);
}

double NNfunction_ss_sLsR::synapse0x35d2b30() {
   return (neuron0x35caf40()*1.50528);
}

double NNfunction_ss_sLsR::synapse0x35d2b70() {
   return (neuron0x35cb280()*-0.141155);
}

double NNfunction_ss_sLsR::synapse0x35d2bb0() {
   return (neuron0x35cb5c0()*-0.0424536);
}

double NNfunction_ss_sLsR::synapse0x35d2bf0() {
   return (neuron0x35cb900()*-0.169589);
}

double NNfunction_ss_sLsR::synapse0x35d2c30() {
   return (neuron0x35cbc40()*0.205044);
}

double NNfunction_ss_sLsR::synapse0x35d2c70() {
   return (neuron0x35cbf80()*-0.565078);
}

double NNfunction_ss_sLsR::synapse0x35d2cb0() {
   return (neuron0x35cc2c0()*-0.522057);
}

double NNfunction_ss_sLsR::synapse0x35d2740() {
   return (neuron0x35cc600()*-0.711853);
}

double NNfunction_ss_sLsR::synapse0x35d2780() {
   return (neuron0x35ccb60()*-0.0482974);
}

double NNfunction_ss_sLsR::synapse0x35d2e00() {
   return (neuron0x35ccd80()*1.45959);
}

double NNfunction_ss_sLsR::synapse0x35d2e40() {
   return (neuron0x35cd0c0()*-0.767536);
}

double NNfunction_ss_sLsR::synapse0x35d2e80() {
   return (neuron0x35cd400()*-0.0799272);
}

double NNfunction_ss_sLsR::synapse0x35d2ec0() {
   return (neuron0x35cd740()*-0.743582);
}

double NNfunction_ss_sLsR::synapse0x35d2f00() {
   return (neuron0x35cda80()*-0.332977);
}

double NNfunction_ss_sLsR::synapse0x35d2f40() {
   return (neuron0x35cddc0()*-0.0197438);
}

double NNfunction_ss_sLsR::synapse0x35cca50() {
   return (neuron0x35c9200()*0.0674611);
}

double NNfunction_ss_sLsR::synapse0x35cca90() {
   return (neuron0x35c9540()*-1.15474);
}

double NNfunction_ss_sLsR::synapse0x35ccad0() {
   return (neuron0x35c9880()*-1.1514);
}

double NNfunction_ss_sLsR::synapse0x35ccb10() {
   return (neuron0x35c9bc0()*-0.616095);
}

double NNfunction_ss_sLsR::synapse0x35d34d0() {
   return (neuron0x35c9f00()*-0.418213);
}

double NNfunction_ss_sLsR::synapse0x35d3510() {
   return (neuron0x35ca240()*1.82997);
}

double NNfunction_ss_sLsR::synapse0x35d3550() {
   return (neuron0x35ca580()*2.30519);
}

double NNfunction_ss_sLsR::synapse0x35d3590() {
   return (neuron0x35ca8c0()*1.51232);
}

double NNfunction_ss_sLsR::synapse0x35d35d0() {
   return (neuron0x35cac00()*1.51901);
}

double NNfunction_ss_sLsR::synapse0x35d3610() {
   return (neuron0x35caf40()*1.02493);
}

double NNfunction_ss_sLsR::synapse0x35d3650() {
   return (neuron0x35cb280()*1.741);
}

double NNfunction_ss_sLsR::synapse0x35d3690() {
   return (neuron0x35cb5c0()*-0.303988);
}

double NNfunction_ss_sLsR::synapse0x35d36d0() {
   return (neuron0x35cb900()*0.948106);
}

double NNfunction_ss_sLsR::synapse0x35d3710() {
   return (neuron0x35cbc40()*0.292176);
}

double NNfunction_ss_sLsR::synapse0x35d3750() {
   return (neuron0x35cbf80()*-0.241361);
}

double NNfunction_ss_sLsR::synapse0x35d3790() {
   return (neuron0x35cc2c0()*-0.0051794);
}

double NNfunction_ss_sLsR::synapse0x35d3110() {
   return (neuron0x35cc600()*-1.19522);
}

double NNfunction_ss_sLsR::synapse0x35d3150() {
   return (neuron0x35ccb60()*-1.17399);
}

double NNfunction_ss_sLsR::synapse0x35d38e0() {
   return (neuron0x35ccd80()*-2.69546);
}

double NNfunction_ss_sLsR::synapse0x35d3920() {
   return (neuron0x35cd0c0()*-0.865504);
}

double NNfunction_ss_sLsR::synapse0x35d3960() {
   return (neuron0x35cd400()*0.951826);
}

double NNfunction_ss_sLsR::synapse0x35d39a0() {
   return (neuron0x35cd740()*-0.837868);
}

double NNfunction_ss_sLsR::synapse0x35d39e0() {
   return (neuron0x35cda80()*-0.196239);
}

double NNfunction_ss_sLsR::synapse0x35d3a20() {
   return (neuron0x35cddc0()*-0.188392);
}

double NNfunction_ss_sLsR::synapse0x35d3da0() {
   return (neuron0x35c9200()*0.232409);
}

double NNfunction_ss_sLsR::synapse0x35d3de0() {
   return (neuron0x35c9540()*-0.594149);
}

double NNfunction_ss_sLsR::synapse0x35d3e20() {
   return (neuron0x35c9880()*0.702278);
}

double NNfunction_ss_sLsR::synapse0x35d3e60() {
   return (neuron0x35c9bc0()*-0.517034);
}

double NNfunction_ss_sLsR::synapse0x35d3ea0() {
   return (neuron0x35c9f00()*0.000233577);
}

double NNfunction_ss_sLsR::synapse0x35d3ee0() {
   return (neuron0x35ca240()*1.89291);
}

double NNfunction_ss_sLsR::synapse0x35d3f20() {
   return (neuron0x35ca580()*-0.536125);
}

double NNfunction_ss_sLsR::synapse0x35d3f60() {
   return (neuron0x35ca8c0()*0.633872);
}

double NNfunction_ss_sLsR::synapse0x35d3fa0() {
   return (neuron0x35cac00()*0.802622);
}

double NNfunction_ss_sLsR::synapse0x35d3fe0() {
   return (neuron0x35caf40()*0.48927);
}

double NNfunction_ss_sLsR::synapse0x35d4020() {
   return (neuron0x35cb280()*0.963293);
}

double NNfunction_ss_sLsR::synapse0x35d4060() {
   return (neuron0x35cb5c0()*-0.0145718);
}

double NNfunction_ss_sLsR::synapse0x35d40a0() {
   return (neuron0x35cb900()*-1.2033);
}

double NNfunction_ss_sLsR::synapse0x35d40e0() {
   return (neuron0x35cbc40()*0.418845);
}

double NNfunction_ss_sLsR::synapse0x35d4120() {
   return (neuron0x35cbf80()*-0.773439);
}

double NNfunction_ss_sLsR::synapse0x35d4160() {
   return (neuron0x35cc2c0()*0.327164);
}

double NNfunction_ss_sLsR::synapse0x35d3bf0() {
   return (neuron0x35cc600()*-0.26691);
}

double NNfunction_ss_sLsR::synapse0x35d3c30() {
   return (neuron0x35ccb60()*0.936229);
}

double NNfunction_ss_sLsR::synapse0x35d42b0() {
   return (neuron0x35ccd80()*-0.469244);
}

double NNfunction_ss_sLsR::synapse0x35d42f0() {
   return (neuron0x35cd0c0()*-0.166746);
}

double NNfunction_ss_sLsR::synapse0x35d4330() {
   return (neuron0x35cd400()*1.43801);
}

double NNfunction_ss_sLsR::synapse0x35d4370() {
   return (neuron0x35cd740()*0.0117657);
}

double NNfunction_ss_sLsR::synapse0x35d43b0() {
   return (neuron0x35cda80()*-0.732395);
}

double NNfunction_ss_sLsR::synapse0x35d43f0() {
   return (neuron0x35cddc0()*0.125582);
}

double NNfunction_ss_sLsR::synapse0x35d4770() {
   return (neuron0x35c9200()*-0.173881);
}

double NNfunction_ss_sLsR::synapse0x35d47b0() {
   return (neuron0x35c9540()*-0.190591);
}

double NNfunction_ss_sLsR::synapse0x35d47f0() {
   return (neuron0x35c9880()*-0.329279);
}

double NNfunction_ss_sLsR::synapse0x35d4830() {
   return (neuron0x35c9bc0()*0.26216);
}

double NNfunction_ss_sLsR::synapse0x35d4870() {
   return (neuron0x35c9f00()*0.22794);
}

double NNfunction_ss_sLsR::synapse0x35d48b0() {
   return (neuron0x35ca240()*0.241494);
}

double NNfunction_ss_sLsR::synapse0x35d48f0() {
   return (neuron0x35ca580()*0.270249);
}

double NNfunction_ss_sLsR::synapse0x35d4930() {
   return (neuron0x35ca8c0()*0.215491);
}

double NNfunction_ss_sLsR::synapse0x35d4970() {
   return (neuron0x35cac00()*-0.00318827);
}

double NNfunction_ss_sLsR::synapse0x35d49b0() {
   return (neuron0x35caf40()*-0.180562);
}

double NNfunction_ss_sLsR::synapse0x35d49f0() {
   return (neuron0x35cb280()*-0.365887);
}

double NNfunction_ss_sLsR::synapse0x35d4a30() {
   return (neuron0x35cb5c0()*0.0375078);
}

double NNfunction_ss_sLsR::synapse0x35d4a70() {
   return (neuron0x35cb900()*0.230618);
}

double NNfunction_ss_sLsR::synapse0x35d4ab0() {
   return (neuron0x35cbc40()*-0.0449995);
}

double NNfunction_ss_sLsR::synapse0x35d4af0() {
   return (neuron0x35cbf80()*-0.0637677);
}

double NNfunction_ss_sLsR::synapse0x35d4b30() {
   return (neuron0x35cc2c0()*0.0365414);
}

double NNfunction_ss_sLsR::synapse0x35d45c0() {
   return (neuron0x35cc600()*0.0456396);
}

double NNfunction_ss_sLsR::synapse0x35d4600() {
   return (neuron0x35ccb60()*0.202515);
}

double NNfunction_ss_sLsR::synapse0x35d1390() {
   return (neuron0x35ccd80()*0.152895);
}

double NNfunction_ss_sLsR::synapse0x35d13d0() {
   return (neuron0x35cd0c0()*-0.140729);
}

double NNfunction_ss_sLsR::synapse0x35d1410() {
   return (neuron0x35cd400()*-0.107972);
}

double NNfunction_ss_sLsR::synapse0x35d1450() {
   return (neuron0x35cd740()*-0.208939);
}

double NNfunction_ss_sLsR::synapse0x35d1490() {
   return (neuron0x35cda80()*-0.413167);
}

double NNfunction_ss_sLsR::synapse0x35d14d0() {
   return (neuron0x35cddc0()*-0.141032);
}

double NNfunction_ss_sLsR::synapse0x35d1850() {
   return (neuron0x35c9200()*0.10002);
}

double NNfunction_ss_sLsR::synapse0x35d1890() {
   return (neuron0x35c9540()*-0.913084);
}

double NNfunction_ss_sLsR::synapse0x35d18d0() {
   return (neuron0x35c9880()*-0.516857);
}

double NNfunction_ss_sLsR::synapse0x35d1910() {
   return (neuron0x35c9bc0()*-0.725528);
}

double NNfunction_ss_sLsR::synapse0x35d1950() {
   return (neuron0x35c9f00()*0.430984);
}

double NNfunction_ss_sLsR::synapse0x35d1990() {
   return (neuron0x35ca240()*0.987728);
}

double NNfunction_ss_sLsR::synapse0x35d19d0() {
   return (neuron0x35ca580()*1.39302);
}

double NNfunction_ss_sLsR::synapse0x35d1a10() {
   return (neuron0x35ca8c0()*0.824263);
}

double NNfunction_ss_sLsR::synapse0x35d1a50() {
   return (neuron0x35cac00()*0.959725);
}

double NNfunction_ss_sLsR::synapse0x35d1a90() {
   return (neuron0x35caf40()*0.779955);
}

double NNfunction_ss_sLsR::synapse0x35d1ad0() {
   return (neuron0x35cb280()*0.6886);
}

double NNfunction_ss_sLsR::synapse0x35d1b10() {
   return (neuron0x35cb5c0()*-0.240303);
}

double NNfunction_ss_sLsR::synapse0x35d1b50() {
   return (neuron0x35cb900()*-0.239891);
}

double NNfunction_ss_sLsR::synapse0x35d5c90() {
   return (neuron0x35cbc40()*0.00676074);
}

double NNfunction_ss_sLsR::synapse0x35d5cd0() {
   return (neuron0x35cbf80()*0.162931);
}

double NNfunction_ss_sLsR::synapse0x35d5d10() {
   return (neuron0x35cc2c0()*0.0419898);
}

double NNfunction_ss_sLsR::synapse0x35d16a0() {
   return (neuron0x35cc600()*-0.585119);
}

double NNfunction_ss_sLsR::synapse0x35d16e0() {
   return (neuron0x35ccb60()*-0.383062);
}

double NNfunction_ss_sLsR::synapse0x35d5e60() {
   return (neuron0x35ccd80()*-2.04791);
}

double NNfunction_ss_sLsR::synapse0x35d5ea0() {
   return (neuron0x35cd0c0()*-0.0243224);
}

double NNfunction_ss_sLsR::synapse0x35d5ee0() {
   return (neuron0x35cd400()*0.192249);
}

double NNfunction_ss_sLsR::synapse0x35d5f20() {
   return (neuron0x35cd740()*-0.285368);
}

double NNfunction_ss_sLsR::synapse0x35d5f60() {
   return (neuron0x35cda80()*0.0606753);
}

double NNfunction_ss_sLsR::synapse0x35d5fa0() {
   return (neuron0x35cddc0()*-0.212405);
}

double NNfunction_ss_sLsR::synapse0x35d6320() {
   return (neuron0x35c9200()*0.0215213);
}

double NNfunction_ss_sLsR::synapse0x35d6360() {
   return (neuron0x35c9540()*0.00837539);
}

double NNfunction_ss_sLsR::synapse0x35d63a0() {
   return (neuron0x35c9880()*0.0312806);
}

double NNfunction_ss_sLsR::synapse0x35d63e0() {
   return (neuron0x35c9bc0()*0.0341519);
}

double NNfunction_ss_sLsR::synapse0x35d6420() {
   return (neuron0x35c9f00()*-0.0205454);
}

double NNfunction_ss_sLsR::synapse0x35d6460() {
   return (neuron0x35ca240()*-0.0176838);
}

double NNfunction_ss_sLsR::synapse0x35d64a0() {
   return (neuron0x35ca580()*-0.00977708);
}

double NNfunction_ss_sLsR::synapse0x35d64e0() {
   return (neuron0x35ca8c0()*0.00356102);
}

double NNfunction_ss_sLsR::synapse0x35d6520() {
   return (neuron0x35cac00()*-0.0157854);
}

double NNfunction_ss_sLsR::synapse0x35d6560() {
   return (neuron0x35caf40()*-0.000658055);
}

double NNfunction_ss_sLsR::synapse0x35d65a0() {
   return (neuron0x35cb280()*-0.0116117);
}

double NNfunction_ss_sLsR::synapse0x35d65e0() {
   return (neuron0x35cb5c0()*-0.0493102);
}

double NNfunction_ss_sLsR::synapse0x35d6620() {
   return (neuron0x35cb900()*0.796221);
}

double NNfunction_ss_sLsR::synapse0x35d6660() {
   return (neuron0x35cbc40()*0.0282996);
}

double NNfunction_ss_sLsR::synapse0x35d66a0() {
   return (neuron0x35cbf80()*-0.031623);
}

double NNfunction_ss_sLsR::synapse0x35d66e0() {
   return (neuron0x35cc2c0()*-0.0425159);
}

double NNfunction_ss_sLsR::synapse0x35d6170() {
   return (neuron0x35cc600()*0.016194);
}

double NNfunction_ss_sLsR::synapse0x35d61b0() {
   return (neuron0x35ccb60()*-0.0258017);
}

double NNfunction_ss_sLsR::synapse0x35d6830() {
   return (neuron0x35ccd80()*0.665527);
}

double NNfunction_ss_sLsR::synapse0x35d6870() {
   return (neuron0x35cd0c0()*0.00529765);
}

double NNfunction_ss_sLsR::synapse0x35d68b0() {
   return (neuron0x35cd400()*0.00467166);
}

double NNfunction_ss_sLsR::synapse0x35d68f0() {
   return (neuron0x35cd740()*0.0053644);
}

double NNfunction_ss_sLsR::synapse0x35d6930() {
   return (neuron0x35cda80()*-0.0158905);
}

double NNfunction_ss_sLsR::synapse0x35d6970() {
   return (neuron0x35cddc0()*-0.0111059);
}

double NNfunction_ss_sLsR::synapse0x35d6cf0() {
   return (neuron0x35c9200()*-0.0102445);
}

double NNfunction_ss_sLsR::synapse0x35d6d30() {
   return (neuron0x35c9540()*-0.000808575);
}

double NNfunction_ss_sLsR::synapse0x35d6d70() {
   return (neuron0x35c9880()*-0.538308);
}

double NNfunction_ss_sLsR::synapse0x35d6db0() {
   return (neuron0x35c9bc0()*-0.0630931);
}

double NNfunction_ss_sLsR::synapse0x35d6df0() {
   return (neuron0x35c9f00()*0.0284038);
}

double NNfunction_ss_sLsR::synapse0x35d6e30() {
   return (neuron0x35ca240()*-0.0201375);
}

double NNfunction_ss_sLsR::synapse0x35d6e70() {
   return (neuron0x35ca580()*0.00899275);
}

double NNfunction_ss_sLsR::synapse0x35d6eb0() {
   return (neuron0x35ca8c0()*-0.0145246);
}

double NNfunction_ss_sLsR::synapse0x35d6ef0() {
   return (neuron0x35cac00()*-0.0231157);
}

double NNfunction_ss_sLsR::synapse0x35d6f30() {
   return (neuron0x35caf40()*-0.021953);
}

double NNfunction_ss_sLsR::synapse0x35d6f70() {
   return (neuron0x35cb280()*0.00780535);
}

double NNfunction_ss_sLsR::synapse0x35d6fb0() {
   return (neuron0x35cb5c0()*-0.436129);
}

double NNfunction_ss_sLsR::synapse0x35d6ff0() {
   return (neuron0x35cb900()*0.231691);
}

double NNfunction_ss_sLsR::synapse0x35d7030() {
   return (neuron0x35cbc40()*0.145926);
}

double NNfunction_ss_sLsR::synapse0x35d7070() {
   return (neuron0x35cbf80()*-0.230427);
}

double NNfunction_ss_sLsR::synapse0x35d70b0() {
   return (neuron0x35cc2c0()*-0.316184);
}

double NNfunction_ss_sLsR::synapse0x35d6b40() {
   return (neuron0x35cc600()*0.109974);
}

double NNfunction_ss_sLsR::synapse0x35d6b80() {
   return (neuron0x35ccb60()*-0.207654);
}

double NNfunction_ss_sLsR::synapse0x35d7200() {
   return (neuron0x35ccd80()*0.120643);
}

double NNfunction_ss_sLsR::synapse0x35d7240() {
   return (neuron0x35cd0c0()*0.0223412);
}

double NNfunction_ss_sLsR::synapse0x35d7280() {
   return (neuron0x35cd400()*0.0300235);
}

double NNfunction_ss_sLsR::synapse0x35d72c0() {
   return (neuron0x35cd740()*0.0619535);
}

double NNfunction_ss_sLsR::synapse0x35d7300() {
   return (neuron0x35cda80()*0.0111349);
}

double NNfunction_ss_sLsR::synapse0x35d7340() {
   return (neuron0x35cddc0()*0.0186364);
}

double NNfunction_ss_sLsR::synapse0x35d76c0() {
   return (neuron0x35c9200()*0.0319676);
}

double NNfunction_ss_sLsR::synapse0x35d7700() {
   return (neuron0x35c9540()*0.285354);
}

double NNfunction_ss_sLsR::synapse0x35d7740() {
   return (neuron0x35c9880()*-0.459178);
}

double NNfunction_ss_sLsR::synapse0x35d7780() {
   return (neuron0x35c9bc0()*-0.665244);
}

double NNfunction_ss_sLsR::synapse0x35d77c0() {
   return (neuron0x35c9f00()*-0.286976);
}

double NNfunction_ss_sLsR::synapse0x35d7800() {
   return (neuron0x35ca240()*0.17826);
}

double NNfunction_ss_sLsR::synapse0x35d7840() {
   return (neuron0x35ca580()*0.339596);
}

double NNfunction_ss_sLsR::synapse0x35d7880() {
   return (neuron0x35ca8c0()*0.0494787);
}

double NNfunction_ss_sLsR::synapse0x35d78c0() {
   return (neuron0x35cac00()*-0.436846);
}

double NNfunction_ss_sLsR::synapse0x35d7900() {
   return (neuron0x35caf40()*0.0219015);
}

double NNfunction_ss_sLsR::synapse0x35d7940() {
   return (neuron0x35cb280()*-0.454578);
}

double NNfunction_ss_sLsR::synapse0x35d7980() {
   return (neuron0x35cb5c0()*0.207552);
}

double NNfunction_ss_sLsR::synapse0x35d79c0() {
   return (neuron0x35cb900()*-0.0762744);
}

double NNfunction_ss_sLsR::synapse0x35d7a00() {
   return (neuron0x35cbc40()*0.100614);
}

double NNfunction_ss_sLsR::synapse0x35d7a40() {
   return (neuron0x35cbf80()*-0.010328);
}

double NNfunction_ss_sLsR::synapse0x35d7a80() {
   return (neuron0x35cc2c0()*0.00583098);
}

double NNfunction_ss_sLsR::synapse0x35d7510() {
   return (neuron0x35cc600()*-0.199553);
}

double NNfunction_ss_sLsR::synapse0x35d7550() {
   return (neuron0x35ccb60()*0.0702567);
}

double NNfunction_ss_sLsR::synapse0x35d7bd0() {
   return (neuron0x35ccd80()*-0.0467586);
}

double NNfunction_ss_sLsR::synapse0x35d7c10() {
   return (neuron0x35cd0c0()*-0.068357);
}

double NNfunction_ss_sLsR::synapse0x35d7c50() {
   return (neuron0x35cd400()*-0.0181103);
}

double NNfunction_ss_sLsR::synapse0x35d7c90() {
   return (neuron0x35cd740()*-0.0507657);
}

double NNfunction_ss_sLsR::synapse0x35d7cd0() {
   return (neuron0x35cda80()*-0.293283);
}

double NNfunction_ss_sLsR::synapse0x35d7d10() {
   return (neuron0x35cddc0()*-0.0413528);
}

double NNfunction_ss_sLsR::synapse0x35d8090() {
   return (neuron0x35c9200()*-0.0942231);
}

double NNfunction_ss_sLsR::synapse0x35c9420() {
   return (neuron0x35c9540()*0.0056427);
}

double NNfunction_ss_sLsR::synapse0x35c9460() {
   return (neuron0x35c9880()*0.029334);
}

double NNfunction_ss_sLsR::synapse0x35c9760() {
   return (neuron0x35c9bc0()*0.00403589);
}

double NNfunction_ss_sLsR::synapse0x35c97a0() {
   return (neuron0x35c9f00()*0.07933);
}

double NNfunction_ss_sLsR::synapse0x35c9aa0() {
   return (neuron0x35ca240()*0.0086421);
}

double NNfunction_ss_sLsR::synapse0x35c9ae0() {
   return (neuron0x35ca580()*-0.00228176);
}

double NNfunction_ss_sLsR::synapse0x35c9de0() {
   return (neuron0x35ca8c0()*-0.0772172);
}

double NNfunction_ss_sLsR::synapse0x35c9e20() {
   return (neuron0x35cac00()*0.0518397);
}

double NNfunction_ss_sLsR::synapse0x35ca120() {
   return (neuron0x35caf40()*-0.0501351);
}

double NNfunction_ss_sLsR::synapse0x35ca160() {
   return (neuron0x35cb280()*0.0417414);
}

double NNfunction_ss_sLsR::synapse0x35ca460() {
   return (neuron0x35cb5c0()*0.106556);
}

double NNfunction_ss_sLsR::synapse0x35ca4a0() {
   return (neuron0x35cb900()*-1.32744);
}

double NNfunction_ss_sLsR::synapse0x35ca7a0() {
   return (neuron0x35cbc40()*0.0175772);
}

double NNfunction_ss_sLsR::synapse0x35ca7e0() {
   return (neuron0x35cbf80()*0.0378396);
}

double NNfunction_ss_sLsR::synapse0x35caae0() {
   return (neuron0x35cc2c0()*0.055159);
}

double NNfunction_ss_sLsR::synapse0x35cab20() {
   return (neuron0x35cc600()*0.0423468);
}

double NNfunction_ss_sLsR::synapse0x35cae20() {
   return (neuron0x35ccb60()*0.0243396);
}

double NNfunction_ss_sLsR::synapse0x35cae60() {
   return (neuron0x35ccd80()*-0.99835);
}

double NNfunction_ss_sLsR::synapse0x35cb160() {
   return (neuron0x35cd0c0()*0.00589727);
}

double NNfunction_ss_sLsR::synapse0x35cb1a0() {
   return (neuron0x35cd400()*0.0445712);
}

double NNfunction_ss_sLsR::synapse0x35cb4a0() {
   return (neuron0x35cd740()*0.0207984);
}

double NNfunction_ss_sLsR::synapse0x35cb4e0() {
   return (neuron0x35cda80()*0.0313781);
}

double NNfunction_ss_sLsR::synapse0x35cb7e0() {
   return (neuron0x35cddc0()*0.0296221);
}

double NNfunction_ss_sLsR::synapse0x35cb820() {
   return (neuron0x35c9200()*0.411641);
}

double NNfunction_ss_sLsR::synapse0x35cc4e0() {
   return (neuron0x35c9540()*0.709173);
}

double NNfunction_ss_sLsR::synapse0x35cc520() {
   return (neuron0x35c9880()*0.525721);
}

double NNfunction_ss_sLsR::synapse0x35d7ee0() {
   return (neuron0x35c9bc0()*-0.374419);
}

double NNfunction_ss_sLsR::synapse0x35d7f20() {
   return (neuron0x35c9f00()*-0.431527);
}

double NNfunction_ss_sLsR::synapse0x35cc820() {
   return (neuron0x35ca240()*0.0518201);
}

double NNfunction_ss_sLsR::synapse0x35cc860() {
   return (neuron0x35ca580()*-0.0704632);
}

double NNfunction_ss_sLsR::synapse0x33842d0() {
   return (neuron0x35ca8c0()*-0.430134);
}

double NNfunction_ss_sLsR::synapse0x3384310() {
   return (neuron0x35cac00()*-0.995083);
}

double NNfunction_ss_sLsR::synapse0x35ccfa0() {
   return (neuron0x35caf40()*-0.680049);
}

double NNfunction_ss_sLsR::synapse0x35ccfe0() {
   return (neuron0x35cb280()*1.09801);
}

double NNfunction_ss_sLsR::synapse0x35cd2e0() {
   return (neuron0x35cb5c0()*0.675731);
}

double NNfunction_ss_sLsR::synapse0x35cd320() {
   return (neuron0x35cb900()*0.0510636);
}

double NNfunction_ss_sLsR::synapse0x35cd620() {
   return (neuron0x35cbc40()*1.09269);
}

double NNfunction_ss_sLsR::synapse0x35cd660() {
   return (neuron0x35cbf80()*-0.337479);
}

double NNfunction_ss_sLsR::synapse0x35cd960() {
   return (neuron0x35cc2c0()*0.357537);
}

double NNfunction_ss_sLsR::synapse0x35cd9a0() {
   return (neuron0x35cc600()*-0.258674);
}

double NNfunction_ss_sLsR::synapse0x35cdca0() {
   return (neuron0x35ccb60()*-0.0599007);
}

double NNfunction_ss_sLsR::synapse0x35cdce0() {
   return (neuron0x35ccd80()*1.00347);
}

double NNfunction_ss_sLsR::synapse0x35cdfe0() {
   return (neuron0x35cd0c0()*-0.593921);
}

double NNfunction_ss_sLsR::synapse0x35ce020() {
   return (neuron0x35cd400()*0.0105991);
}

double NNfunction_ss_sLsR::synapse0x35cbb20() {
   return (neuron0x35cd740()*-0.344586);
}

double NNfunction_ss_sLsR::synapse0x35cbb60() {
   return (neuron0x35cda80()*-0.372521);
}

double NNfunction_ss_sLsR::synapse0x35d9e00() {
   return (neuron0x35cddc0()*-0.317029);
}

double NNfunction_ss_sLsR::synapse0x35da180() {
   return (neuron0x35c9200()*-0.0360753);
}

double NNfunction_ss_sLsR::synapse0x35da1c0() {
   return (neuron0x35c9540()*-0.0558143);
}

double NNfunction_ss_sLsR::synapse0x35da200() {
   return (neuron0x35c9880()*-0.766797);
}

double NNfunction_ss_sLsR::synapse0x35da240() {
   return (neuron0x35c9bc0()*-0.31114);
}

double NNfunction_ss_sLsR::synapse0x35da280() {
   return (neuron0x35c9f00()*-0.0211785);
}

double NNfunction_ss_sLsR::synapse0x35da2c0() {
   return (neuron0x35ca240()*-0.0413979);
}

double NNfunction_ss_sLsR::synapse0x35da300() {
   return (neuron0x35ca580()*-0.536978);
}

double NNfunction_ss_sLsR::synapse0x35da340() {
   return (neuron0x35ca8c0()*0.175155);
}

double NNfunction_ss_sLsR::synapse0x35da380() {
   return (neuron0x35cac00()*0.00184823);
}

double NNfunction_ss_sLsR::synapse0x35da3c0() {
   return (neuron0x35caf40()*-0.313385);
}

double NNfunction_ss_sLsR::synapse0x35da400() {
   return (neuron0x35cb280()*-0.59594);
}

double NNfunction_ss_sLsR::synapse0x35da440() {
   return (neuron0x35cb5c0()*1.0147);
}

double NNfunction_ss_sLsR::synapse0x35da480() {
   return (neuron0x35cb900()*-0.0427711);
}

double NNfunction_ss_sLsR::synapse0x35da4c0() {
   return (neuron0x35cbc40()*-0.579349);
}

double NNfunction_ss_sLsR::synapse0x35da500() {
   return (neuron0x35cbf80()*0.169591);
}

double NNfunction_ss_sLsR::synapse0x35da540() {
   return (neuron0x35cc2c0()*0.473775);
}

double NNfunction_ss_sLsR::synapse0x35d9fd0() {
   return (neuron0x35cc600()*-0.111282);
}

double NNfunction_ss_sLsR::synapse0x35da010() {
   return (neuron0x35ccb60()*0.170653);
}

double NNfunction_ss_sLsR::synapse0x35da690() {
   return (neuron0x35ccd80()*-0.079915);
}

double NNfunction_ss_sLsR::synapse0x35da6d0() {
   return (neuron0x35cd0c0()*0.339412);
}

double NNfunction_ss_sLsR::synapse0x35da710() {
   return (neuron0x35cd400()*-0.247177);
}

double NNfunction_ss_sLsR::synapse0x35da750() {
   return (neuron0x35cd740()*-0.109855);
}

double NNfunction_ss_sLsR::synapse0x35da790() {
   return (neuron0x35cda80()*-0.110636);
}

double NNfunction_ss_sLsR::synapse0x35da7d0() {
   return (neuron0x35cddc0()*0.133617);
}

double NNfunction_ss_sLsR::synapse0x35dab50() {
   return (neuron0x35c9200()*0.0261252);
}

double NNfunction_ss_sLsR::synapse0x35dab90() {
   return (neuron0x35c9540()*-0.0387305);
}

double NNfunction_ss_sLsR::synapse0x35dabd0() {
   return (neuron0x35c9880()*0.0639887);
}

double NNfunction_ss_sLsR::synapse0x35dac10() {
   return (neuron0x35c9bc0()*0.017975);
}

double NNfunction_ss_sLsR::synapse0x35dac50() {
   return (neuron0x35c9f00()*0.00958943);
}

double NNfunction_ss_sLsR::synapse0x35dac90() {
   return (neuron0x35ca240()*0.0869163);
}

double NNfunction_ss_sLsR::synapse0x35dacd0() {
   return (neuron0x35ca580()*0.0692946);
}

double NNfunction_ss_sLsR::synapse0x35dad10() {
   return (neuron0x35ca8c0()*0.0269889);
}

double NNfunction_ss_sLsR::synapse0x35dad50() {
   return (neuron0x35cac00()*0.026837);
}

double NNfunction_ss_sLsR::synapse0x35dad90() {
   return (neuron0x35caf40()*0.0427386);
}

double NNfunction_ss_sLsR::synapse0x35dadd0() {
   return (neuron0x35cb280()*0.0640773);
}

double NNfunction_ss_sLsR::synapse0x35dae10() {
   return (neuron0x35cb5c0()*-0.00218737);
}

double NNfunction_ss_sLsR::synapse0x35dae50() {
   return (neuron0x35cb900()*0.750723);
}

double NNfunction_ss_sLsR::synapse0x35dae90() {
   return (neuron0x35cbc40()*0.0103901);
}

double NNfunction_ss_sLsR::synapse0x35daed0() {
   return (neuron0x35cbf80()*-0.0205051);
}

double NNfunction_ss_sLsR::synapse0x35daf10() {
   return (neuron0x35cc2c0()*-0.0292941);
}

double NNfunction_ss_sLsR::synapse0x35da9a0() {
   return (neuron0x35cc600()*0.00364671);
}

double NNfunction_ss_sLsR::synapse0x35da9e0() {
   return (neuron0x35ccb60()*0.0385061);
}

double NNfunction_ss_sLsR::synapse0x35db060() {
   return (neuron0x35ccd80()*-1.06074);
}

double NNfunction_ss_sLsR::synapse0x35db0a0() {
   return (neuron0x35cd0c0()*0.00692694);
}

double NNfunction_ss_sLsR::synapse0x35db0e0() {
   return (neuron0x35cd400()*0.0279077);
}

double NNfunction_ss_sLsR::synapse0x35db120() {
   return (neuron0x35cd740()*0.0207911);
}

double NNfunction_ss_sLsR::synapse0x35db160() {
   return (neuron0x35cda80()*-0.0167299);
}

double NNfunction_ss_sLsR::synapse0x35db1a0() {
   return (neuron0x35cddc0()*-0.00823412);
}

double NNfunction_ss_sLsR::synapse0x35db520() {
   return (neuron0x35c9200()*-0.0281036);
}

double NNfunction_ss_sLsR::synapse0x35db560() {
   return (neuron0x35c9540()*-0.0138387);
}

double NNfunction_ss_sLsR::synapse0x35db5a0() {
   return (neuron0x35c9880()*0.138112);
}

double NNfunction_ss_sLsR::synapse0x35db5e0() {
   return (neuron0x35c9bc0()*-0.722379);
}

double NNfunction_ss_sLsR::synapse0x35db620() {
   return (neuron0x35c9f00()*0.0594111);
}

double NNfunction_ss_sLsR::synapse0x35db660() {
   return (neuron0x35ca240()*0.0404179);
}

double NNfunction_ss_sLsR::synapse0x35db6a0() {
   return (neuron0x35ca580()*0.0312345);
}

double NNfunction_ss_sLsR::synapse0x35db6e0() {
   return (neuron0x35ca8c0()*-0.00759811);
}

double NNfunction_ss_sLsR::synapse0x35db720() {
   return (neuron0x35cac00()*0.0214087);
}

double NNfunction_ss_sLsR::synapse0x35db760() {
   return (neuron0x35caf40()*0.0459372);
}

double NNfunction_ss_sLsR::synapse0x35db7a0() {
   return (neuron0x35cb280()*0.046669);
}

double NNfunction_ss_sLsR::synapse0x35db7e0() {
   return (neuron0x35cb5c0()*-0.0504662);
}

double NNfunction_ss_sLsR::synapse0x35db820() {
   return (neuron0x35cb900()*0.0333033);
}

double NNfunction_ss_sLsR::synapse0x35db860() {
   return (neuron0x35cbc40()*0.0336114);
}

double NNfunction_ss_sLsR::synapse0x35db8a0() {
   return (neuron0x35cbf80()*-0.0866161);
}

double NNfunction_ss_sLsR::synapse0x35db8e0() {
   return (neuron0x35cc2c0()*-0.0634641);
}

double NNfunction_ss_sLsR::synapse0x35db370() {
   return (neuron0x35cc600()*0.0543731);
}

double NNfunction_ss_sLsR::synapse0x35db3b0() {
   return (neuron0x35ccb60()*0.00859989);
}

double NNfunction_ss_sLsR::synapse0x35dba30() {
   return (neuron0x35ccd80()*0.03962);
}

double NNfunction_ss_sLsR::synapse0x35dba70() {
   return (neuron0x35cd0c0()*0.0206497);
}

double NNfunction_ss_sLsR::synapse0x35dbab0() {
   return (neuron0x35cd400()*-7.47021e-05);
}

double NNfunction_ss_sLsR::synapse0x35dbaf0() {
   return (neuron0x35cd740()*0.0178169);
}

double NNfunction_ss_sLsR::synapse0x35dbb30() {
   return (neuron0x35cda80()*0.0220835);
}

double NNfunction_ss_sLsR::synapse0x35dbb70() {
   return (neuron0x35cddc0()*0.0171676);
}

double NNfunction_ss_sLsR::synapse0x35dbef0() {
   return (neuron0x35c9200()*0.497491);
}

double NNfunction_ss_sLsR::synapse0x35dbf30() {
   return (neuron0x35c9540()*0.0406963);
}

double NNfunction_ss_sLsR::synapse0x35dbf70() {
   return (neuron0x35c9880()*0.141995);
}

double NNfunction_ss_sLsR::synapse0x35dbfb0() {
   return (neuron0x35c9bc0()*0.452171);
}

double NNfunction_ss_sLsR::synapse0x35dbff0() {
   return (neuron0x35c9f00()*-0.205708);
}

double NNfunction_ss_sLsR::synapse0x35dc030() {
   return (neuron0x35ca240()*0.376981);
}

double NNfunction_ss_sLsR::synapse0x35dc070() {
   return (neuron0x35ca580()*0.416376);
}

double NNfunction_ss_sLsR::synapse0x35dc0b0() {
   return (neuron0x35ca8c0()*-0.173632);
}

double NNfunction_ss_sLsR::synapse0x35dc0f0() {
   return (neuron0x35cac00()*0.0121133);
}

double NNfunction_ss_sLsR::synapse0x35dc130() {
   return (neuron0x35caf40()*0.256842);
}

double NNfunction_ss_sLsR::synapse0x35dc170() {
   return (neuron0x35cb280()*0.0454134);
}

double NNfunction_ss_sLsR::synapse0x35dc1b0() {
   return (neuron0x35cb5c0()*0.117727);
}

double NNfunction_ss_sLsR::synapse0x35dc1f0() {
   return (neuron0x35cb900()*0.279763);
}

double NNfunction_ss_sLsR::synapse0x35dc230() {
   return (neuron0x35cbc40()*-0.442104);
}

double NNfunction_ss_sLsR::synapse0x35dc270() {
   return (neuron0x35cbf80()*-0.0732542);
}

double NNfunction_ss_sLsR::synapse0x35dc2b0() {
   return (neuron0x35cc2c0()*-0.610536);
}

double NNfunction_ss_sLsR::synapse0x35dbd40() {
   return (neuron0x35cc600()*0.0793227);
}

double NNfunction_ss_sLsR::synapse0x35dbd80() {
   return (neuron0x35ccb60()*-0.336105);
}

double NNfunction_ss_sLsR::synapse0x35dc400() {
   return (neuron0x35ccd80()*0.164162);
}

double NNfunction_ss_sLsR::synapse0x35dc440() {
   return (neuron0x35cd0c0()*0.137041);
}

double NNfunction_ss_sLsR::synapse0x35dc480() {
   return (neuron0x35cd400()*0.241585);
}

double NNfunction_ss_sLsR::synapse0x35dc4c0() {
   return (neuron0x35cd740()*-0.712836);
}

double NNfunction_ss_sLsR::synapse0x35dc500() {
   return (neuron0x35cda80()*0.193679);
}

double NNfunction_ss_sLsR::synapse0x35dc540() {
   return (neuron0x35cddc0()*0.514252);
}

double NNfunction_ss_sLsR::synapse0x35dc8c0() {
   return (neuron0x35c9200()*-0.248064);
}

double NNfunction_ss_sLsR::synapse0x35dc900() {
   return (neuron0x35c9540()*-0.0100158);
}

double NNfunction_ss_sLsR::synapse0x35dc940() {
   return (neuron0x35c9880()*-0.995779);
}

double NNfunction_ss_sLsR::synapse0x35dc980() {
   return (neuron0x35c9bc0()*0.611286);
}

double NNfunction_ss_sLsR::synapse0x35dc9c0() {
   return (neuron0x35c9f00()*-0.0283737);
}

double NNfunction_ss_sLsR::synapse0x35dca00() {
   return (neuron0x35ca240()*0.547411);
}

double NNfunction_ss_sLsR::synapse0x35dca40() {
   return (neuron0x35ca580()*0.0751672);
}

double NNfunction_ss_sLsR::synapse0x35dca80() {
   return (neuron0x35ca8c0()*0.0379394);
}

double NNfunction_ss_sLsR::synapse0x35dcac0() {
   return (neuron0x35cac00()*0.249222);
}

double NNfunction_ss_sLsR::synapse0x35d4c80() {
   return (neuron0x35caf40()*0.629281);
}

double NNfunction_ss_sLsR::synapse0x35d4cc0() {
   return (neuron0x35cb280()*0.281965);
}

double NNfunction_ss_sLsR::synapse0x35d4d00() {
   return (neuron0x35cb5c0()*0.350923);
}

double NNfunction_ss_sLsR::synapse0x35d4d40() {
   return (neuron0x35cb900()*0.31912);
}

double NNfunction_ss_sLsR::synapse0x35d4d80() {
   return (neuron0x35cbc40()*-0.640454);
}

double NNfunction_ss_sLsR::synapse0x35d4dc0() {
   return (neuron0x35cbf80()*0.024602);
}

double NNfunction_ss_sLsR::synapse0x35d4e00() {
   return (neuron0x35cc2c0()*-0.528667);
}

double NNfunction_ss_sLsR::synapse0x35dc710() {
   return (neuron0x35cc600()*-0.223979);
}

double NNfunction_ss_sLsR::synapse0x35dc750() {
   return (neuron0x35ccb60()*-1.45263);
}

double NNfunction_ss_sLsR::synapse0x35d4f50() {
   return (neuron0x35ccd80()*0.122775);
}

double NNfunction_ss_sLsR::synapse0x35d4f90() {
   return (neuron0x35cd0c0()*0.256627);
}

double NNfunction_ss_sLsR::synapse0x35d4fd0() {
   return (neuron0x35cd400()*0.308594);
}

double NNfunction_ss_sLsR::synapse0x35d5010() {
   return (neuron0x35cd740()*0.25012);
}

double NNfunction_ss_sLsR::synapse0x35d5050() {
   return (neuron0x35cda80()*-0.603315);
}

double NNfunction_ss_sLsR::synapse0x35d5090() {
   return (neuron0x35cddc0()*0.29342);
}

double NNfunction_ss_sLsR::synapse0x35d5410() {
   return (neuron0x35c9200()*0.323828);
}

double NNfunction_ss_sLsR::synapse0x35d5450() {
   return (neuron0x35c9540()*0.0391688);
}

double NNfunction_ss_sLsR::synapse0x35d5490() {
   return (neuron0x35c9880()*-0.803173);
}

double NNfunction_ss_sLsR::synapse0x35d54d0() {
   return (neuron0x35c9bc0()*0.512075);
}

double NNfunction_ss_sLsR::synapse0x35d5510() {
   return (neuron0x35c9f00()*0.397092);
}

double NNfunction_ss_sLsR::synapse0x35d5550() {
   return (neuron0x35ca240()*0.211938);
}

double NNfunction_ss_sLsR::synapse0x35d5590() {
   return (neuron0x35ca580()*-0.0673283);
}

double NNfunction_ss_sLsR::synapse0x35d55d0() {
   return (neuron0x35ca8c0()*0.348478);
}

double NNfunction_ss_sLsR::synapse0x35d5610() {
   return (neuron0x35cac00()*-0.0923981);
}

double NNfunction_ss_sLsR::synapse0x35d5650() {
   return (neuron0x35caf40()*-0.737469);
}

double NNfunction_ss_sLsR::synapse0x35d5690() {
   return (neuron0x35cb280()*-0.169128);
}

double NNfunction_ss_sLsR::synapse0x35d56d0() {
   return (neuron0x35cb5c0()*-0.0223125);
}

double NNfunction_ss_sLsR::synapse0x35d5710() {
   return (neuron0x35cb900()*-0.490977);
}

double NNfunction_ss_sLsR::synapse0x35d5750() {
   return (neuron0x35cbc40()*0.361153);
}

double NNfunction_ss_sLsR::synapse0x35d5790() {
   return (neuron0x35cbf80()*0.0617451);
}

double NNfunction_ss_sLsR::synapse0x35d57d0() {
   return (neuron0x35cc2c0()*0.904125);
}

double NNfunction_ss_sLsR::synapse0x35d5260() {
   return (neuron0x35cc600()*0.0776359);
}

double NNfunction_ss_sLsR::synapse0x35d52a0() {
   return (neuron0x35ccb60()*-0.0171124);
}

double NNfunction_ss_sLsR::synapse0x35d5920() {
   return (neuron0x35ccd80()*-0.000195279);
}

double NNfunction_ss_sLsR::synapse0x35d5960() {
   return (neuron0x35cd0c0()*-0.299357);
}

double NNfunction_ss_sLsR::synapse0x35d59a0() {
   return (neuron0x35cd400()*0.0434275);
}

double NNfunction_ss_sLsR::synapse0x35d59e0() {
   return (neuron0x35cd740()*-0.0920906);
}

double NNfunction_ss_sLsR::synapse0x35d5a20() {
   return (neuron0x35cda80()*-0.0993545);
}

double NNfunction_ss_sLsR::synapse0x35d5a60() {
   return (neuron0x35cddc0()*-0.00772107);
}

double NNfunction_ss_sLsR::synapse0x35d5c30() {
   return (neuron0x35c9200()*0.649474);
}

double NNfunction_ss_sLsR::synapse0x35decc0() {
   return (neuron0x35c9540()*-0.313845);
}

double NNfunction_ss_sLsR::synapse0x35ded00() {
   return (neuron0x35c9880()*0.440441);
}

double NNfunction_ss_sLsR::synapse0x35ded40() {
   return (neuron0x35c9bc0()*0.419245);
}

double NNfunction_ss_sLsR::synapse0x35ded80() {
   return (neuron0x35c9f00()*-0.0965173);
}

double NNfunction_ss_sLsR::synapse0x35dedc0() {
   return (neuron0x35ca240()*-0.183287);
}

double NNfunction_ss_sLsR::synapse0x35dee00() {
   return (neuron0x35ca580()*0.118755);
}

double NNfunction_ss_sLsR::synapse0x35dee40() {
   return (neuron0x35ca8c0()*0.130582);
}

double NNfunction_ss_sLsR::synapse0x35dee80() {
   return (neuron0x35cac00()*0.0524806);
}

double NNfunction_ss_sLsR::synapse0x35deec0() {
   return (neuron0x35caf40()*-0.0703274);
}

double NNfunction_ss_sLsR::synapse0x35def00() {
   return (neuron0x35cb280()*-0.258426);
}

double NNfunction_ss_sLsR::synapse0x35def40() {
   return (neuron0x35cb5c0()*-0.628443);
}

double NNfunction_ss_sLsR::synapse0x35def80() {
   return (neuron0x35cb900()*-0.697265);
}

double NNfunction_ss_sLsR::synapse0x35defc0() {
   return (neuron0x35cbc40()*0.136803);
}

double NNfunction_ss_sLsR::synapse0x35df000() {
   return (neuron0x35cbf80()*-0.0207356);
}

double NNfunction_ss_sLsR::synapse0x35df040() {
   return (neuron0x35cc2c0()*-0.0956226);
}

double NNfunction_ss_sLsR::synapse0x35deb10() {
   return (neuron0x35cc600()*-0.400769);
}

double NNfunction_ss_sLsR::synapse0x35deb50() {
   return (neuron0x35ccb60()*-0.4416);
}

double NNfunction_ss_sLsR::synapse0x35df190() {
   return (neuron0x35ccd80()*0.60134);
}

double NNfunction_ss_sLsR::synapse0x35df1d0() {
   return (neuron0x35cd0c0()*-0.196528);
}

double NNfunction_ss_sLsR::synapse0x35df210() {
   return (neuron0x35cd400()*-0.175548);
}

double NNfunction_ss_sLsR::synapse0x35df250() {
   return (neuron0x35cd740()*0.0771761);
}

double NNfunction_ss_sLsR::synapse0x35df290() {
   return (neuron0x35cda80()*0.0255947);
}

double NNfunction_ss_sLsR::synapse0x35df2d0() {
   return (neuron0x35cddc0()*-0.064828);
}

double NNfunction_ss_sLsR::synapse0x35df650() {
   return (neuron0x35c9200()*0.0326655);
}

double NNfunction_ss_sLsR::synapse0x35df690() {
   return (neuron0x35c9540()*0.023939);
}

double NNfunction_ss_sLsR::synapse0x35df6d0() {
   return (neuron0x35c9880()*0.00163356);
}

double NNfunction_ss_sLsR::synapse0x35df710() {
   return (neuron0x35c9bc0()*-0.0248341);
}

double NNfunction_ss_sLsR::synapse0x35df750() {
   return (neuron0x35c9f00()*-0.0480648);
}

double NNfunction_ss_sLsR::synapse0x35df790() {
   return (neuron0x35ca240()*-0.0238773);
}

double NNfunction_ss_sLsR::synapse0x35df7d0() {
   return (neuron0x35ca580()*-0.0643319);
}

double NNfunction_ss_sLsR::synapse0x35df810() {
   return (neuron0x35ca8c0()*0.00881174);
}

double NNfunction_ss_sLsR::synapse0x35df850() {
   return (neuron0x35cac00()*-0.0503807);
}

double NNfunction_ss_sLsR::synapse0x35df890() {
   return (neuron0x35caf40()*-0.0372436);
}

double NNfunction_ss_sLsR::synapse0x35df8d0() {
   return (neuron0x35cb280()*-0.0504127);
}

double NNfunction_ss_sLsR::synapse0x35df910() {
   return (neuron0x35cb5c0()*-0.0506233);
}

double NNfunction_ss_sLsR::synapse0x35df950() {
   return (neuron0x35cb900()*-0.906063);
}

double NNfunction_ss_sLsR::synapse0x35df990() {
   return (neuron0x35cbc40()*-0.0617686);
}

double NNfunction_ss_sLsR::synapse0x35df9d0() {
   return (neuron0x35cbf80()*0.0206659);
}

double NNfunction_ss_sLsR::synapse0x35dfa10() {
   return (neuron0x35cc2c0()*-0.0200861);
}

double NNfunction_ss_sLsR::synapse0x35df4a0() {
   return (neuron0x35cc600()*0.0102593);
}

double NNfunction_ss_sLsR::synapse0x35df4e0() {
   return (neuron0x35ccb60()*-0.0287724);
}

double NNfunction_ss_sLsR::synapse0x35dfb60() {
   return (neuron0x35ccd80()*2.28359);
}

double NNfunction_ss_sLsR::synapse0x35dfba0() {
   return (neuron0x35cd0c0()*0.00603565);
}

double NNfunction_ss_sLsR::synapse0x35dfbe0() {
   return (neuron0x35cd400()*0.0763254);
}

double NNfunction_ss_sLsR::synapse0x35dfc20() {
   return (neuron0x35cd740()*0.0359452);
}

double NNfunction_ss_sLsR::synapse0x35dfc60() {
   return (neuron0x35cda80()*-0.0180367);
}

double NNfunction_ss_sLsR::synapse0x35dfca0() {
   return (neuron0x35cddc0()*0.000558437);
}

double NNfunction_ss_sLsR::synapse0x35e0020() {
   return (neuron0x35c9200()*-0.332753);
}

double NNfunction_ss_sLsR::synapse0x35e0060() {
   return (neuron0x35c9540()*-0.488301);
}

double NNfunction_ss_sLsR::synapse0x35e00a0() {
   return (neuron0x35c9880()*-0.408017);
}

double NNfunction_ss_sLsR::synapse0x35e00e0() {
   return (neuron0x35c9bc0()*-0.364625);
}

double NNfunction_ss_sLsR::synapse0x35e0120() {
   return (neuron0x35c9f00()*0.715877);
}

double NNfunction_ss_sLsR::synapse0x35e0160() {
   return (neuron0x35ca240()*0.230001);
}

double NNfunction_ss_sLsR::synapse0x35e01a0() {
   return (neuron0x35ca580()*-0.521087);
}

double NNfunction_ss_sLsR::synapse0x35e01e0() {
   return (neuron0x35ca8c0()*-0.138952);
}

double NNfunction_ss_sLsR::synapse0x35e0220() {
   return (neuron0x35cac00()*-0.755668);
}

double NNfunction_ss_sLsR::synapse0x35e0260() {
   return (neuron0x35caf40()*-0.193042);
}

double NNfunction_ss_sLsR::synapse0x35e02a0() {
   return (neuron0x35cb280()*-0.291425);
}

double NNfunction_ss_sLsR::synapse0x35e02e0() {
   return (neuron0x35cb5c0()*0.674798);
}

double NNfunction_ss_sLsR::synapse0x35e0320() {
   return (neuron0x35cb900()*0.915975);
}

double NNfunction_ss_sLsR::synapse0x35e0360() {
   return (neuron0x35cbc40()*-0.434685);
}

double NNfunction_ss_sLsR::synapse0x35e03a0() {
   return (neuron0x35cbf80()*-0.332838);
}

double NNfunction_ss_sLsR::synapse0x35e03e0() {
   return (neuron0x35cc2c0()*-0.012623);
}

double NNfunction_ss_sLsR::synapse0x35dfe70() {
   return (neuron0x35cc600()*0.210854);
}

double NNfunction_ss_sLsR::synapse0x35dfeb0() {
   return (neuron0x35ccb60()*0.35545);
}

double NNfunction_ss_sLsR::synapse0x35e0530() {
   return (neuron0x35ccd80()*-0.171122);
}

double NNfunction_ss_sLsR::synapse0x35e0570() {
   return (neuron0x35cd0c0()*0.175594);
}

double NNfunction_ss_sLsR::synapse0x35e05b0() {
   return (neuron0x35cd400()*-0.762442);
}

double NNfunction_ss_sLsR::synapse0x35e05f0() {
   return (neuron0x35cd740()*-0.140526);
}

double NNfunction_ss_sLsR::synapse0x35e0630() {
   return (neuron0x35cda80()*-0.809337);
}

double NNfunction_ss_sLsR::synapse0x35e0670() {
   return (neuron0x35cddc0()*0.364285);
}

double NNfunction_ss_sLsR::synapse0x35e09f0() {
   return (neuron0x35c9200()*0.400736);
}

double NNfunction_ss_sLsR::synapse0x35e0a30() {
   return (neuron0x35c9540()*-0.872398);
}

double NNfunction_ss_sLsR::synapse0x35e0a70() {
   return (neuron0x35c9880()*0.118302);
}

double NNfunction_ss_sLsR::synapse0x35e0ab0() {
   return (neuron0x35c9bc0()*-1.3386);
}

double NNfunction_ss_sLsR::synapse0x35e0af0() {
   return (neuron0x35c9f00()*0.811254);
}

double NNfunction_ss_sLsR::synapse0x35e0b30() {
   return (neuron0x35ca240()*1.13884);
}

double NNfunction_ss_sLsR::synapse0x35e0b70() {
   return (neuron0x35ca580()*-0.23679);
}

double NNfunction_ss_sLsR::synapse0x35e0bb0() {
   return (neuron0x35ca8c0()*0.167681);
}

double NNfunction_ss_sLsR::synapse0x35e0bf0() {
   return (neuron0x35cac00()*-0.00685023);
}

double NNfunction_ss_sLsR::synapse0x35e0c30() {
   return (neuron0x35caf40()*0.468461);
}

double NNfunction_ss_sLsR::synapse0x35e0c70() {
   return (neuron0x35cb280()*0.428873);
}

double NNfunction_ss_sLsR::synapse0x35e0cb0() {
   return (neuron0x35cb5c0()*0.103262);
}

double NNfunction_ss_sLsR::synapse0x35e0cf0() {
   return (neuron0x35cb900()*-0.905618);
}

double NNfunction_ss_sLsR::synapse0x35e0d30() {
   return (neuron0x35cbc40()*0.612728);
}

double NNfunction_ss_sLsR::synapse0x35e0d70() {
   return (neuron0x35cbf80()*-0.175606);
}

double NNfunction_ss_sLsR::synapse0x35e0db0() {
   return (neuron0x35cc2c0()*0.36616);
}

double NNfunction_ss_sLsR::synapse0x35e0840() {
   return (neuron0x35cc600()*-0.429117);
}

double NNfunction_ss_sLsR::synapse0x35e0880() {
   return (neuron0x35ccb60()*0.599875);
}

double NNfunction_ss_sLsR::synapse0x35e0f00() {
   return (neuron0x35ccd80()*0.138708);
}

double NNfunction_ss_sLsR::synapse0x35e0f40() {
   return (neuron0x35cd0c0()*-0.208209);
}

double NNfunction_ss_sLsR::synapse0x35e0f80() {
   return (neuron0x35cd400()*-0.54811);
}

double NNfunction_ss_sLsR::synapse0x35e0fc0() {
   return (neuron0x35cd740()*0.765357);
}

double NNfunction_ss_sLsR::synapse0x35e1000() {
   return (neuron0x35cda80()*0.308852);
}

double NNfunction_ss_sLsR::synapse0x35e1040() {
   return (neuron0x35cddc0()*-0.0907991);
}

double NNfunction_ss_sLsR::synapse0x35e13c0() {
   return (neuron0x35c9200()*0.057148);
}

double NNfunction_ss_sLsR::synapse0x35e1400() {
   return (neuron0x35c9540()*-0.0861777);
}

double NNfunction_ss_sLsR::synapse0x35e1440() {
   return (neuron0x35c9880()*-1.18217);
}

double NNfunction_ss_sLsR::synapse0x35e1480() {
   return (neuron0x35c9bc0()*0.919152);
}

double NNfunction_ss_sLsR::synapse0x35e14c0() {
   return (neuron0x35c9f00()*0.782856);
}

double NNfunction_ss_sLsR::synapse0x35e1500() {
   return (neuron0x35ca240()*-0.692255);
}

double NNfunction_ss_sLsR::synapse0x35e1540() {
   return (neuron0x35ca580()*-0.300916);
}

double NNfunction_ss_sLsR::synapse0x35e1580() {
   return (neuron0x35ca8c0()*0.48231);
}

double NNfunction_ss_sLsR::synapse0x35e15c0() {
   return (neuron0x35cac00()*0.559901);
}

double NNfunction_ss_sLsR::synapse0x35e1600() {
   return (neuron0x35caf40()*0.7432);
}

double NNfunction_ss_sLsR::synapse0x35e1640() {
   return (neuron0x35cb280()*0.00691979);
}

double NNfunction_ss_sLsR::synapse0x35e1680() {
   return (neuron0x35cb5c0()*-0.0436452);
}

double NNfunction_ss_sLsR::synapse0x35e16c0() {
   return (neuron0x35cb900()*-1.80978);
}

double NNfunction_ss_sLsR::synapse0x35e1700() {
   return (neuron0x35cbc40()*-0.880044);
}

double NNfunction_ss_sLsR::synapse0x35e1740() {
   return (neuron0x35cbf80()*-0.0877254);
}

double NNfunction_ss_sLsR::synapse0x35e1780() {
   return (neuron0x35cc2c0()*-0.502947);
}

double NNfunction_ss_sLsR::synapse0x35e1210() {
   return (neuron0x35cc600()*0.459511);
}

double NNfunction_ss_sLsR::synapse0x35e1250() {
   return (neuron0x35ccb60()*-0.312069);
}

double NNfunction_ss_sLsR::synapse0x35e18d0() {
   return (neuron0x35ccd80()*-0.0637757);
}

double NNfunction_ss_sLsR::synapse0x35e1910() {
   return (neuron0x35cd0c0()*-0.513339);
}

double NNfunction_ss_sLsR::synapse0x35e1950() {
   return (neuron0x35cd400()*0.263476);
}

double NNfunction_ss_sLsR::synapse0x35e1990() {
   return (neuron0x35cd740()*0.557049);
}

double NNfunction_ss_sLsR::synapse0x35e19d0() {
   return (neuron0x35cda80()*-0.153323);
}

double NNfunction_ss_sLsR::synapse0x35e1a10() {
   return (neuron0x35cddc0()*-0.0535289);
}

double NNfunction_ss_sLsR::synapse0x35e1d90() {
   return (neuron0x35c9200()*0.0808533);
}

double NNfunction_ss_sLsR::synapse0x35e1dd0() {
   return (neuron0x35c9540()*-0.161466);
}

double NNfunction_ss_sLsR::synapse0x35e1e10() {
   return (neuron0x35c9880()*0.220312);
}

double NNfunction_ss_sLsR::synapse0x35e1e50() {
   return (neuron0x35c9bc0()*-1.69788);
}

double NNfunction_ss_sLsR::synapse0x35e1e90() {
   return (neuron0x35c9f00()*0.63279);
}

double NNfunction_ss_sLsR::synapse0x35e1ed0() {
   return (neuron0x35ca240()*1.18629);
}

double NNfunction_ss_sLsR::synapse0x35e1f10() {
   return (neuron0x35ca580()*0.219455);
}

double NNfunction_ss_sLsR::synapse0x35e1f50() {
   return (neuron0x35ca8c0()*1.82201);
}

double NNfunction_ss_sLsR::synapse0x35e1f90() {
   return (neuron0x35cac00()*-0.0340422);
}

double NNfunction_ss_sLsR::synapse0x35e1fd0() {
   return (neuron0x35caf40()*0.257836);
}

double NNfunction_ss_sLsR::synapse0x35e2010() {
   return (neuron0x35cb280()*0.231349);
}

double NNfunction_ss_sLsR::synapse0x35e2050() {
   return (neuron0x35cb5c0()*0.420105);
}

double NNfunction_ss_sLsR::synapse0x35e2090() {
   return (neuron0x35cb900()*-1.15544);
}

double NNfunction_ss_sLsR::synapse0x35e20d0() {
   return (neuron0x35cbc40()*0.43783);
}

double NNfunction_ss_sLsR::synapse0x35e2110() {
   return (neuron0x35cbf80()*0.258671);
}

double NNfunction_ss_sLsR::synapse0x35e2150() {
   return (neuron0x35cc2c0()*0.506447);
}

double NNfunction_ss_sLsR::synapse0x35e1be0() {
   return (neuron0x35cc600()*0.102013);
}

double NNfunction_ss_sLsR::synapse0x35e1c20() {
   return (neuron0x35ccb60()*0.318772);
}

double NNfunction_ss_sLsR::synapse0x35e22a0() {
   return (neuron0x35ccd80()*0.191094);
}

double NNfunction_ss_sLsR::synapse0x35e22e0() {
   return (neuron0x35cd0c0()*-0.264416);
}

double NNfunction_ss_sLsR::synapse0x35e2320() {
   return (neuron0x35cd400()*-0.306822);
}

double NNfunction_ss_sLsR::synapse0x35e2360() {
   return (neuron0x35cd740()*0.486552);
}

double NNfunction_ss_sLsR::synapse0x35e23a0() {
   return (neuron0x35cda80()*0.109282);
}

double NNfunction_ss_sLsR::synapse0x35e23e0() {
   return (neuron0x35cddc0()*-0.00202384);
}

double NNfunction_ss_sLsR::synapse0x35e2760() {
   return (neuron0x35c9200()*-0.00950655);
}

double NNfunction_ss_sLsR::synapse0x35e27a0() {
   return (neuron0x35c9540()*-0.00815965);
}

double NNfunction_ss_sLsR::synapse0x35e27e0() {
   return (neuron0x35c9880()*-0.452034);
}

double NNfunction_ss_sLsR::synapse0x35e2820() {
   return (neuron0x35c9bc0()*0.0299775);
}

double NNfunction_ss_sLsR::synapse0x35e2860() {
   return (neuron0x35c9f00()*0.0247546);
}

double NNfunction_ss_sLsR::synapse0x35e28a0() {
   return (neuron0x35ca240()*0.0188968);
}

double NNfunction_ss_sLsR::synapse0x35e28e0() {
   return (neuron0x35ca580()*0.0284034);
}

double NNfunction_ss_sLsR::synapse0x35e2920() {
   return (neuron0x35ca8c0()*-0.00998736);
}

double NNfunction_ss_sLsR::synapse0x35e2960() {
   return (neuron0x35cac00()*0.0201092);
}

double NNfunction_ss_sLsR::synapse0x35e29a0() {
   return (neuron0x35caf40()*0.00555605);
}

double NNfunction_ss_sLsR::synapse0x35e29e0() {
   return (neuron0x35cb280()*-0.00881185);
}

double NNfunction_ss_sLsR::synapse0x35e2a20() {
   return (neuron0x35cb5c0()*0.152198);
}

double NNfunction_ss_sLsR::synapse0x35e2a60() {
   return (neuron0x35cb900()*-0.270302);
}

double NNfunction_ss_sLsR::synapse0x35e2aa0() {
   return (neuron0x35cbc40()*-0.0646108);
}

double NNfunction_ss_sLsR::synapse0x35e2ae0() {
   return (neuron0x35cbf80()*0.159617);
}

double NNfunction_ss_sLsR::synapse0x35e2b20() {
   return (neuron0x35cc2c0()*0.140902);
}

double NNfunction_ss_sLsR::synapse0x35e25b0() {
   return (neuron0x35cc600()*-0.0588393);
}

double NNfunction_ss_sLsR::synapse0x35e25f0() {
   return (neuron0x35ccb60()*0.0947414);
}

double NNfunction_ss_sLsR::synapse0x35e2c70() {
   return (neuron0x35ccd80()*-0.216804);
}

double NNfunction_ss_sLsR::synapse0x35e2cb0() {
   return (neuron0x35cd0c0()*0.00955982);
}

double NNfunction_ss_sLsR::synapse0x35e2cf0() {
   return (neuron0x35cd400()*0.0210885);
}

double NNfunction_ss_sLsR::synapse0x35e2d30() {
   return (neuron0x35cd740()*-0.011547);
}

double NNfunction_ss_sLsR::synapse0x35e2d70() {
   return (neuron0x35cda80()*0.0160383);
}

double NNfunction_ss_sLsR::synapse0x35e2db0() {
   return (neuron0x35cddc0()*0.0162588);
}

double NNfunction_ss_sLsR::synapse0x35e3130() {
   return (neuron0x35c9200()*-0.122139);
}

double NNfunction_ss_sLsR::synapse0x35e3170() {
   return (neuron0x35c9540()*-0.285738);
}

double NNfunction_ss_sLsR::synapse0x35e31b0() {
   return (neuron0x35c9880()*-1.08364);
}

double NNfunction_ss_sLsR::synapse0x35e31f0() {
   return (neuron0x35c9bc0()*0.241822);
}

double NNfunction_ss_sLsR::synapse0x35e3230() {
   return (neuron0x35c9f00()*0.323248);
}

double NNfunction_ss_sLsR::synapse0x35e3270() {
   return (neuron0x35ca240()*-0.162598);
}

double NNfunction_ss_sLsR::synapse0x35e32b0() {
   return (neuron0x35ca580()*-1.10403);
}

double NNfunction_ss_sLsR::synapse0x35e32f0() {
   return (neuron0x35ca8c0()*0.330902);
}

double NNfunction_ss_sLsR::synapse0x35e3330() {
   return (neuron0x35cac00()*-0.397823);
}

double NNfunction_ss_sLsR::synapse0x35e3370() {
   return (neuron0x35caf40()*0.740916);
}

double NNfunction_ss_sLsR::synapse0x35e33b0() {
   return (neuron0x35cb280()*0.142487);
}

double NNfunction_ss_sLsR::synapse0x35e33f0() {
   return (neuron0x35cb5c0()*0.618818);
}

double NNfunction_ss_sLsR::synapse0x35e3430() {
   return (neuron0x35cb900()*-0.00349709);
}

double NNfunction_ss_sLsR::synapse0x35e3470() {
   return (neuron0x35cbc40()*-0.385174);
}

double NNfunction_ss_sLsR::synapse0x35e34b0() {
   return (neuron0x35cbf80()*-0.629181);
}

double NNfunction_ss_sLsR::synapse0x35e34f0() {
   return (neuron0x35cc2c0()*-0.518034);
}

double NNfunction_ss_sLsR::synapse0x35e2f80() {
   return (neuron0x35cc600()*-0.903088);
}

double NNfunction_ss_sLsR::synapse0x35e2fc0() {
   return (neuron0x35ccb60()*0.00470543);
}

double NNfunction_ss_sLsR::synapse0x35e3640() {
   return (neuron0x35ccd80()*0.373479);
}

double NNfunction_ss_sLsR::synapse0x35e3680() {
   return (neuron0x35cd0c0()*-0.340593);
}

double NNfunction_ss_sLsR::synapse0x35e36c0() {
   return (neuron0x35cd400()*-0.0640642);
}

double NNfunction_ss_sLsR::synapse0x35e3700() {
   return (neuron0x35cd740()*-0.205553);
}

double NNfunction_ss_sLsR::synapse0x35e3740() {
   return (neuron0x35cda80()*-0.335569);
}

double NNfunction_ss_sLsR::synapse0x35e3780() {
   return (neuron0x35cddc0()*0.0790887);
}

double NNfunction_ss_sLsR::synapse0x35e3b00() {
   return (neuron0x35c9200()*-0.0460248);
}

double NNfunction_ss_sLsR::synapse0x35d80d0() {
   return (neuron0x35c9540()*-0.132089);
}

double NNfunction_ss_sLsR::synapse0x35d8110() {
   return (neuron0x35c9880()*-0.190966);
}

double NNfunction_ss_sLsR::synapse0x35d8150() {
   return (neuron0x35c9bc0()*0.540317);
}

double NNfunction_ss_sLsR::synapse0x35d83a0() {
   return (neuron0x35c9f00()*-0.681806);
}

double NNfunction_ss_sLsR::synapse0x35d83e0() {
   return (neuron0x35ca240()*-0.454007);
}

double NNfunction_ss_sLsR::synapse0x35d8420() {
   return (neuron0x35ca580()*0.343487);
}

double NNfunction_ss_sLsR::synapse0x35d8670() {
   return (neuron0x35ca8c0()*0.31371);
}

double NNfunction_ss_sLsR::synapse0x35d86b0() {
   return (neuron0x35cac00()*0.291805);
}

double NNfunction_ss_sLsR::synapse0x35d8900() {
   return (neuron0x35caf40()*-0.885026);
}

double NNfunction_ss_sLsR::synapse0x35d8940() {
   return (neuron0x35cb280()*-0.368093);
}

double NNfunction_ss_sLsR::synapse0x35d8980() {
   return (neuron0x35cb5c0()*0.319151);
}

double NNfunction_ss_sLsR::synapse0x35d8bd0() {
   return (neuron0x35cb900()*0.986971);
}

double NNfunction_ss_sLsR::synapse0x35d8c10() {
   return (neuron0x35cbc40()*0.525412);
}

double NNfunction_ss_sLsR::synapse0x35d8e60() {
   return (neuron0x35cbf80()*-0.188781);
}

double NNfunction_ss_sLsR::synapse0x35d8ea0() {
   return (neuron0x35cc2c0()*0.197189);
}

double NNfunction_ss_sLsR::synapse0x35e3950() {
   return (neuron0x35cc600()*0.521017);
}

double NNfunction_ss_sLsR::synapse0x35e3990() {
   return (neuron0x35ccb60()*1.18914);
}

double NNfunction_ss_sLsR::synapse0x35d8ff0() {
   return (neuron0x35ccd80()*0.169444);
}

double NNfunction_ss_sLsR::synapse0x35d9500() {
   return (neuron0x35cd0c0()*0.757351);
}

double NNfunction_ss_sLsR::synapse0x35d9540() {
   return (neuron0x35cd400()*0.0327062);
}

double NNfunction_ss_sLsR::synapse0x35d9580() {
   return (neuron0x35cd740()*-0.539604);
}

double NNfunction_ss_sLsR::synapse0x35d97d0() {
   return (neuron0x35cda80()*0.625395);
}

double NNfunction_ss_sLsR::synapse0x35d9810() {
   return (neuron0x35cddc0()*-0.0181991);
}

double NNfunction_ss_sLsR::synapse0x35d90c0() {
   return (neuron0x35c9200()*-0.271831);
}

double NNfunction_ss_sLsR::synapse0x35d9100() {
   return (neuron0x35c9540()*0.568277);
}

double NNfunction_ss_sLsR::synapse0x35d9140() {
   return (neuron0x35c9880()*0.378681);
}

double NNfunction_ss_sLsR::synapse0x35d9180() {
   return (neuron0x35c9bc0()*-0.447241);
}

double NNfunction_ss_sLsR::synapse0x35d9b00() {
   return (neuron0x35c9f00()*-0.004588);
}

double NNfunction_ss_sLsR::synapse0x35e5e50() {
   return (neuron0x35ca240()*-0.294872);
}

double NNfunction_ss_sLsR::synapse0x35e5e90() {
   return (neuron0x35ca580()*-0.0923897);
}

double NNfunction_ss_sLsR::synapse0x35e5ed0() {
   return (neuron0x35ca8c0()*-0.270937);
}

double NNfunction_ss_sLsR::synapse0x35e5f10() {
   return (neuron0x35cac00()*-0.231624);
}

double NNfunction_ss_sLsR::synapse0x35e5f50() {
   return (neuron0x35caf40()*0.0155066);
}

double NNfunction_ss_sLsR::synapse0x35e5f90() {
   return (neuron0x35cb280()*0.224054);
}

double NNfunction_ss_sLsR::synapse0x35e5fd0() {
   return (neuron0x35cb5c0()*-0.154646);
}

double NNfunction_ss_sLsR::synapse0x35e6010() {
   return (neuron0x35cb900()*0.274879);
}

double NNfunction_ss_sLsR::synapse0x35e6050() {
   return (neuron0x35cbc40()*-0.505865);
}

double NNfunction_ss_sLsR::synapse0x35e6090() {
   return (neuron0x35cbf80()*0.224793);
}

double NNfunction_ss_sLsR::synapse0x35e60d0() {
   return (neuron0x35cc2c0()*-0.309416);
}

double NNfunction_ss_sLsR::synapse0x35d99e0() {
   return (neuron0x35cc600()*-0.348059);
}

double NNfunction_ss_sLsR::synapse0x35d9a20() {
   return (neuron0x35ccb60()*-0.462301);
}

double NNfunction_ss_sLsR::synapse0x35e6220() {
   return (neuron0x35ccd80()*0.430997);
}

double NNfunction_ss_sLsR::synapse0x35e6260() {
   return (neuron0x35cd0c0()*0.288976);
}

double NNfunction_ss_sLsR::synapse0x35e62a0() {
   return (neuron0x35cd400()*0.280394);
}

double NNfunction_ss_sLsR::synapse0x35e62e0() {
   return (neuron0x35cd740()*0.451261);
}

double NNfunction_ss_sLsR::synapse0x35e6320() {
   return (neuron0x35cda80()*-0.0614441);
}

double NNfunction_ss_sLsR::synapse0x35e6360() {
   return (neuron0x35cddc0()*-0.0105492);
}

double NNfunction_ss_sLsR::synapse0x35e66e0() {
   return (neuron0x35c9200()*0.00908784);
}

double NNfunction_ss_sLsR::synapse0x35e6720() {
   return (neuron0x35c9540()*-0.0127492);
}

double NNfunction_ss_sLsR::synapse0x35e6760() {
   return (neuron0x35c9880()*-0.0628341);
}

double NNfunction_ss_sLsR::synapse0x35e67a0() {
   return (neuron0x35c9bc0()*-0.000866872);
}

double NNfunction_ss_sLsR::synapse0x35e67e0() {
   return (neuron0x35c9f00()*-0.0506484);
}

double NNfunction_ss_sLsR::synapse0x35e6820() {
   return (neuron0x35ca240()*-0.0378549);
}

double NNfunction_ss_sLsR::synapse0x35e6860() {
   return (neuron0x35ca580()*-0.0108675);
}

double NNfunction_ss_sLsR::synapse0x35e68a0() {
   return (neuron0x35ca8c0()*-0.050997);
}

double NNfunction_ss_sLsR::synapse0x35e68e0() {
   return (neuron0x35cac00()*0.0145041);
}

double NNfunction_ss_sLsR::synapse0x35e6920() {
   return (neuron0x35caf40()*-0.0596631);
}

double NNfunction_ss_sLsR::synapse0x35e6960() {
   return (neuron0x35cb280()*-0.0211194);
}

double NNfunction_ss_sLsR::synapse0x35e69a0() {
   return (neuron0x35cb5c0()*-0.0116608);
}

double NNfunction_ss_sLsR::synapse0x35e69e0() {
   return (neuron0x35cb900()*1.52431);
}

double NNfunction_ss_sLsR::synapse0x35e6a20() {
   return (neuron0x35cbc40()*0.112984);
}

double NNfunction_ss_sLsR::synapse0x35e6a60() {
   return (neuron0x35cbf80()*-0.00411861);
}

double NNfunction_ss_sLsR::synapse0x35e6aa0() {
   return (neuron0x35cc2c0()*-0.00261017);
}

double NNfunction_ss_sLsR::synapse0x35e6530() {
   return (neuron0x35cc600()*0.0121877);
}

double NNfunction_ss_sLsR::synapse0x35e6570() {
   return (neuron0x35ccb60()*-0.04114);
}

double NNfunction_ss_sLsR::synapse0x35e6bf0() {
   return (neuron0x35ccd80()*-0.532081);
}

double NNfunction_ss_sLsR::synapse0x35e6c30() {
   return (neuron0x35cd0c0()*-0.0308214);
}

double NNfunction_ss_sLsR::synapse0x35e6c70() {
   return (neuron0x35cd400()*-0.0251138);
}

double NNfunction_ss_sLsR::synapse0x35e6cb0() {
   return (neuron0x35cd740()*-0.0318659);
}

double NNfunction_ss_sLsR::synapse0x35e6cf0() {
   return (neuron0x35cda80()*0.00871112);
}

double NNfunction_ss_sLsR::synapse0x35e6d30() {
   return (neuron0x35cddc0()*-0.0205019);
}

double NNfunction_ss_sLsR::synapse0x35e70b0() {
   return (neuron0x35c9200()*-0.043158);
}

double NNfunction_ss_sLsR::synapse0x35e70f0() {
   return (neuron0x35c9540()*0.111823);
}

double NNfunction_ss_sLsR::synapse0x35e7130() {
   return (neuron0x35c9880()*-0.48153);
}

double NNfunction_ss_sLsR::synapse0x35e7170() {
   return (neuron0x35c9bc0()*0.24609);
}

double NNfunction_ss_sLsR::synapse0x35e71b0() {
   return (neuron0x35c9f00()*-0.553199);
}

double NNfunction_ss_sLsR::synapse0x35e71f0() {
   return (neuron0x35ca240()*-0.40496);
}

double NNfunction_ss_sLsR::synapse0x35e7230() {
   return (neuron0x35ca580()*0.706404);
}

double NNfunction_ss_sLsR::synapse0x35e7270() {
   return (neuron0x35ca8c0()*-0.247245);
}

double NNfunction_ss_sLsR::synapse0x35e72b0() {
   return (neuron0x35cac00()*-0.387836);
}

double NNfunction_ss_sLsR::synapse0x35e72f0() {
   return (neuron0x35caf40()*0.243867);
}

double NNfunction_ss_sLsR::synapse0x35e7330() {
   return (neuron0x35cb280()*-1.04881);
}

double NNfunction_ss_sLsR::synapse0x35e7370() {
   return (neuron0x35cb5c0()*0.0970751);
}

double NNfunction_ss_sLsR::synapse0x35e73b0() {
   return (neuron0x35cb900()*-0.40769);
}

double NNfunction_ss_sLsR::synapse0x35e73f0() {
   return (neuron0x35cbc40()*-0.711254);
}

double NNfunction_ss_sLsR::synapse0x35e7430() {
   return (neuron0x35cbf80()*0.656738);
}

double NNfunction_ss_sLsR::synapse0x35e7470() {
   return (neuron0x35cc2c0()*0.850304);
}

double NNfunction_ss_sLsR::synapse0x35e6f00() {
   return (neuron0x35cc600()*0.181598);
}

double NNfunction_ss_sLsR::synapse0x35e6f40() {
   return (neuron0x35ccb60()*-0.674592);
}

double NNfunction_ss_sLsR::synapse0x35e75c0() {
   return (neuron0x35ccd80()*0.060812);
}

double NNfunction_ss_sLsR::synapse0x35e7600() {
   return (neuron0x35cd0c0()*-0.165303);
}

double NNfunction_ss_sLsR::synapse0x35e7640() {
   return (neuron0x35cd400()*-1.03216);
}

double NNfunction_ss_sLsR::synapse0x35e7680() {
   return (neuron0x35cd740()*0.262298);
}

double NNfunction_ss_sLsR::synapse0x35e76c0() {
   return (neuron0x35cda80()*0.787837);
}

double NNfunction_ss_sLsR::synapse0x35e7700() {
   return (neuron0x35cddc0()*0.00948761);
}

double NNfunction_ss_sLsR::synapse0x35e7a80() {
   return (neuron0x35c9200()*-0.0673543);
}

double NNfunction_ss_sLsR::synapse0x35e7ac0() {
   return (neuron0x35c9540()*-0.371145);
}

double NNfunction_ss_sLsR::synapse0x35e7b00() {
   return (neuron0x35c9880()*-0.321077);
}

double NNfunction_ss_sLsR::synapse0x35e7b40() {
   return (neuron0x35c9bc0()*-0.73566);
}

double NNfunction_ss_sLsR::synapse0x35e7b80() {
   return (neuron0x35c9f00()*0.650369);
}

double NNfunction_ss_sLsR::synapse0x35e7bc0() {
   return (neuron0x35ca240()*0.646212);
}

double NNfunction_ss_sLsR::synapse0x35e7c00() {
   return (neuron0x35ca580()*-0.0451269);
}

double NNfunction_ss_sLsR::synapse0x35e7c40() {
   return (neuron0x35ca8c0()*-0.208847);
}

double NNfunction_ss_sLsR::synapse0x35e7c80() {
   return (neuron0x35cac00()*-0.407857);
}

double NNfunction_ss_sLsR::synapse0x35e7cc0() {
   return (neuron0x35caf40()*-0.271409);
}

double NNfunction_ss_sLsR::synapse0x35e7d00() {
   return (neuron0x35cb280()*-0.0376867);
}

double NNfunction_ss_sLsR::synapse0x35e7d40() {
   return (neuron0x35cb5c0()*0.0618943);
}

double NNfunction_ss_sLsR::synapse0x35e7d80() {
   return (neuron0x35cb900()*0.115658);
}

double NNfunction_ss_sLsR::synapse0x35e7dc0() {
   return (neuron0x35cbc40()*-0.397552);
}

double NNfunction_ss_sLsR::synapse0x35e7e00() {
   return (neuron0x35cbf80()*-0.417676);
}

double NNfunction_ss_sLsR::synapse0x35e7e40() {
   return (neuron0x35cc2c0()*0.387839);
}

double NNfunction_ss_sLsR::synapse0x35e78d0() {
   return (neuron0x35cc600()*0.387287);
}

double NNfunction_ss_sLsR::synapse0x35e7910() {
   return (neuron0x35ccb60()*0.239464);
}

double NNfunction_ss_sLsR::synapse0x35e7f90() {
   return (neuron0x35ccd80()*-0.266218);
}

double NNfunction_ss_sLsR::synapse0x35e7fd0() {
   return (neuron0x35cd0c0()*-0.0823455);
}

double NNfunction_ss_sLsR::synapse0x35e8010() {
   return (neuron0x35cd400()*-0.0445363);
}

double NNfunction_ss_sLsR::synapse0x35e8050() {
   return (neuron0x35cd740()*0.130621);
}

double NNfunction_ss_sLsR::synapse0x35e8090() {
   return (neuron0x35cda80()*-0.803745);
}

double NNfunction_ss_sLsR::synapse0x35e80d0() {
   return (neuron0x35cddc0()*-0.112852);
}

double NNfunction_ss_sLsR::synapse0x35e8450() {
   return (neuron0x35c9200()*0.000966066);
}

double NNfunction_ss_sLsR::synapse0x35e8490() {
   return (neuron0x35c9540()*-0.0169984);
}

double NNfunction_ss_sLsR::synapse0x35e84d0() {
   return (neuron0x35c9880()*0.0329912);
}

double NNfunction_ss_sLsR::synapse0x35e8510() {
   return (neuron0x35c9bc0()*2.67773);
}

double NNfunction_ss_sLsR::synapse0x35e8550() {
   return (neuron0x35c9f00()*0.030228);
}

double NNfunction_ss_sLsR::synapse0x35e8590() {
   return (neuron0x35ca240()*0.00960518);
}

double NNfunction_ss_sLsR::synapse0x35e85d0() {
   return (neuron0x35ca580()*-0.00610868);
}

double NNfunction_ss_sLsR::synapse0x35e8610() {
   return (neuron0x35ca8c0()*-0.000330966);
}

double NNfunction_ss_sLsR::synapse0x35e8650() {
   return (neuron0x35cac00()*0.026);
}

double NNfunction_ss_sLsR::synapse0x35e8690() {
   return (neuron0x35caf40()*0.00684034);
}

double NNfunction_ss_sLsR::synapse0x35e86d0() {
   return (neuron0x35cb280()*0.0192861);
}

double NNfunction_ss_sLsR::synapse0x35e8710() {
   return (neuron0x35cb5c0()*-0.00183649);
}

double NNfunction_ss_sLsR::synapse0x35e8750() {
   return (neuron0x35cb900()*-0.00506004);
}

double NNfunction_ss_sLsR::synapse0x35e8790() {
   return (neuron0x35cbc40()*0.00281354);
}

double NNfunction_ss_sLsR::synapse0x35e87d0() {
   return (neuron0x35cbf80()*-0.0189719);
}

double NNfunction_ss_sLsR::synapse0x35e8810() {
   return (neuron0x35cc2c0()*0.000540814);
}

double NNfunction_ss_sLsR::synapse0x35e82a0() {
   return (neuron0x35cc600()*0.0169831);
}

double NNfunction_ss_sLsR::synapse0x35e82e0() {
   return (neuron0x35ccb60()*0.0081032);
}

double NNfunction_ss_sLsR::synapse0x35e8960() {
   return (neuron0x35ccd80()*-0.019383);
}

double NNfunction_ss_sLsR::synapse0x35e89a0() {
   return (neuron0x35cd0c0()*0.00310525);
}

double NNfunction_ss_sLsR::synapse0x35e89e0() {
   return (neuron0x35cd400()*0.00719554);
}

double NNfunction_ss_sLsR::synapse0x35e8a20() {
   return (neuron0x35cd740()*0.00700558);
}

double NNfunction_ss_sLsR::synapse0x35e8a60() {
   return (neuron0x35cda80()*0.00659687);
}

double NNfunction_ss_sLsR::synapse0x35e8aa0() {
   return (neuron0x35cddc0()*-0.00723467);
}

double NNfunction_ss_sLsR::synapse0x35e8e20() {
   return (neuron0x35c9200()*-0.0187827);
}

double NNfunction_ss_sLsR::synapse0x35e8e60() {
   return (neuron0x35c9540()*0.116234);
}

double NNfunction_ss_sLsR::synapse0x35e8ea0() {
   return (neuron0x35c9880()*-0.556014);
}

double NNfunction_ss_sLsR::synapse0x35e8ee0() {
   return (neuron0x35c9bc0()*-0.458613);
}

double NNfunction_ss_sLsR::synapse0x35e8f20() {
   return (neuron0x35c9f00()*-0.382026);
}

double NNfunction_ss_sLsR::synapse0x35e8f60() {
   return (neuron0x35ca240()*-0.31388);
}

double NNfunction_ss_sLsR::synapse0x35e8fa0() {
   return (neuron0x35ca580()*0.370643);
}

double NNfunction_ss_sLsR::synapse0x35e8fe0() {
   return (neuron0x35ca8c0()*0.0932922);
}

double NNfunction_ss_sLsR::synapse0x35e9020() {
   return (neuron0x35cac00()*0.137786);
}

double NNfunction_ss_sLsR::synapse0x35e9060() {
   return (neuron0x35caf40()*0.130458);
}

double NNfunction_ss_sLsR::synapse0x35e90a0() {
   return (neuron0x35cb280()*0.354518);
}

double NNfunction_ss_sLsR::synapse0x35e90e0() {
   return (neuron0x35cb5c0()*0.393617);
}

double NNfunction_ss_sLsR::synapse0x35e9120() {
   return (neuron0x35cb900()*-0.489693);
}

double NNfunction_ss_sLsR::synapse0x35e9160() {
   return (neuron0x35cbc40()*-0.113836);
}

double NNfunction_ss_sLsR::synapse0x35e91a0() {
   return (neuron0x35cbf80()*-0.245645);
}

double NNfunction_ss_sLsR::synapse0x35e91e0() {
   return (neuron0x35cc2c0()*-0.653445);
}

double NNfunction_ss_sLsR::synapse0x35e8c70() {
   return (neuron0x35cc600()*-0.249246);
}

double NNfunction_ss_sLsR::synapse0x35e8cb0() {
   return (neuron0x35ccb60()*0.333692);
}

double NNfunction_ss_sLsR::synapse0x35e9330() {
   return (neuron0x35ccd80()*-0.422609);
}

double NNfunction_ss_sLsR::synapse0x35e9370() {
   return (neuron0x35cd0c0()*-0.113131);
}

double NNfunction_ss_sLsR::synapse0x35e93b0() {
   return (neuron0x35cd400()*0.25287);
}

double NNfunction_ss_sLsR::synapse0x35e93f0() {
   return (neuron0x35cd740()*0.048032);
}

double NNfunction_ss_sLsR::synapse0x35e9430() {
   return (neuron0x35cda80()*-0.531429);
}

double NNfunction_ss_sLsR::synapse0x35e9470() {
   return (neuron0x35cddc0()*-0.256431);
}

double NNfunction_ss_sLsR::synapse0x35e97f0() {
   return (neuron0x35c9200()*0.153013);
}

double NNfunction_ss_sLsR::synapse0x35e9830() {
   return (neuron0x35c9540()*-0.156855);
}

double NNfunction_ss_sLsR::synapse0x35e9870() {
   return (neuron0x35c9880()*0.196617);
}

double NNfunction_ss_sLsR::synapse0x35e98b0() {
   return (neuron0x35c9bc0()*-0.350643);
}

double NNfunction_ss_sLsR::synapse0x35e98f0() {
   return (neuron0x35c9f00()*0.119435);
}

double NNfunction_ss_sLsR::synapse0x35e9930() {
   return (neuron0x35ca240()*0.607763);
}

double NNfunction_ss_sLsR::synapse0x35e9970() {
   return (neuron0x35ca580()*0.0446877);
}

double NNfunction_ss_sLsR::synapse0x35e99b0() {
   return (neuron0x35ca8c0()*0.289051);
}

double NNfunction_ss_sLsR::synapse0x35e99f0() {
   return (neuron0x35cac00()*0.593317);
}

double NNfunction_ss_sLsR::synapse0x35e9a30() {
   return (neuron0x35caf40()*0.052748);
}

double NNfunction_ss_sLsR::synapse0x35e9a70() {
   return (neuron0x35cb280()*0.68273);
}

double NNfunction_ss_sLsR::synapse0x35e9ab0() {
   return (neuron0x35cb5c0()*0.143568);
}

double NNfunction_ss_sLsR::synapse0x35e9af0() {
   return (neuron0x35cb900()*-1.14323);
}

double NNfunction_ss_sLsR::synapse0x35e9b30() {
   return (neuron0x35cbc40()*0.113189);
}

double NNfunction_ss_sLsR::synapse0x35e9b70() {
   return (neuron0x35cbf80()*0.14232);
}

double NNfunction_ss_sLsR::synapse0x35e9bb0() {
   return (neuron0x35cc2c0()*0.162355);
}

double NNfunction_ss_sLsR::synapse0x35e9640() {
   return (neuron0x35cc600()*-0.0634826);
}

double NNfunction_ss_sLsR::synapse0x35e9680() {
   return (neuron0x35ccb60()*0.349123);
}

double NNfunction_ss_sLsR::synapse0x35e9d00() {
   return (neuron0x35ccd80()*1.68607);
}

double NNfunction_ss_sLsR::synapse0x35e9d40() {
   return (neuron0x35cd0c0()*-0.128305);
}

double NNfunction_ss_sLsR::synapse0x35e9d80() {
   return (neuron0x35cd400()*0.412732);
}

double NNfunction_ss_sLsR::synapse0x35e9dc0() {
   return (neuron0x35cd740()*0.100351);
}

double NNfunction_ss_sLsR::synapse0x35e9e00() {
   return (neuron0x35cda80()*-0.216282);
}

double NNfunction_ss_sLsR::synapse0x35e9e40() {
   return (neuron0x35cddc0()*0.0666699);
}

double NNfunction_ss_sLsR::synapse0x35ea1c0() {
   return (neuron0x35c9200()*-0.39053);
}

double NNfunction_ss_sLsR::synapse0x35ea200() {
   return (neuron0x35c9540()*-0.505544);
}

double NNfunction_ss_sLsR::synapse0x35ea240() {
   return (neuron0x35c9880()*0.107424);
}

double NNfunction_ss_sLsR::synapse0x35ea280() {
   return (neuron0x35c9bc0()*-0.067788);
}

double NNfunction_ss_sLsR::synapse0x35ea2c0() {
   return (neuron0x35c9f00()*-0.487106);
}

double NNfunction_ss_sLsR::synapse0x35ea300() {
   return (neuron0x35ca240()*-0.765113);
}

double NNfunction_ss_sLsR::synapse0x35ea340() {
   return (neuron0x35ca580()*-0.205143);
}

double NNfunction_ss_sLsR::synapse0x35ea380() {
   return (neuron0x35ca8c0()*-0.201341);
}

double NNfunction_ss_sLsR::synapse0x35ea3c0() {
   return (neuron0x35cac00()*-0.0122646);
}

double NNfunction_ss_sLsR::synapse0x35ea400() {
   return (neuron0x35caf40()*-0.0130036);
}

double NNfunction_ss_sLsR::synapse0x35ea440() {
   return (neuron0x35cb280()*0.108686);
}

double NNfunction_ss_sLsR::synapse0x35ea480() {
   return (neuron0x35cb5c0()*-0.222506);
}

double NNfunction_ss_sLsR::synapse0x35ea4c0() {
   return (neuron0x35cb900()*-0.51635);
}

double NNfunction_ss_sLsR::synapse0x35ea500() {
   return (neuron0x35cbc40()*0.217168);
}

double NNfunction_ss_sLsR::synapse0x35ea540() {
   return (neuron0x35cbf80()*0.266413);
}

double NNfunction_ss_sLsR::synapse0x35ea580() {
   return (neuron0x35cc2c0()*1.06743);
}

double NNfunction_ss_sLsR::synapse0x35ea010() {
   return (neuron0x35cc600()*-0.41788);
}

double NNfunction_ss_sLsR::synapse0x35ea050() {
   return (neuron0x35ccb60()*-0.0572503);
}

double NNfunction_ss_sLsR::synapse0x35ea6d0() {
   return (neuron0x35ccd80()*-0.769891);
}

double NNfunction_ss_sLsR::synapse0x35ea710() {
   return (neuron0x35cd0c0()*-0.151698);
}

double NNfunction_ss_sLsR::synapse0x35ea750() {
   return (neuron0x35cd400()*0.293366);
}

double NNfunction_ss_sLsR::synapse0x35ea790() {
   return (neuron0x35cd740()*-0.00918135);
}

double NNfunction_ss_sLsR::synapse0x35ea7d0() {
   return (neuron0x35cda80()*-0.423841);
}

double NNfunction_ss_sLsR::synapse0x35ea810() {
   return (neuron0x35cddc0()*0.353347);
}

double NNfunction_ss_sLsR::synapse0x35d32c0() {
   return (neuron0x35c9200()*-0.569235);
}

double NNfunction_ss_sLsR::synapse0x35d3300() {
   return (neuron0x35c9540()*0.47822);
}

double NNfunction_ss_sLsR::synapse0x35d3340() {
   return (neuron0x35c9880()*-0.340508);
}

double NNfunction_ss_sLsR::synapse0x35d3380() {
   return (neuron0x35c9bc0()*-0.158928);
}

double NNfunction_ss_sLsR::synapse0x35d33c0() {
   return (neuron0x35c9f00()*-0.0149371);
}

double NNfunction_ss_sLsR::synapse0x35d3400() {
   return (neuron0x35ca240()*0.137355);
}

double NNfunction_ss_sLsR::synapse0x35d3440() {
   return (neuron0x35ca580()*-1.3398);
}

double NNfunction_ss_sLsR::synapse0x35d3480() {
   return (neuron0x35ca8c0()*-0.00592496);
}

double NNfunction_ss_sLsR::synapse0x35eafa0() {
   return (neuron0x35cac00()*0.92077);
}

double NNfunction_ss_sLsR::synapse0x35eafe0() {
   return (neuron0x35caf40()*-0.479359);
}

double NNfunction_ss_sLsR::synapse0x35eb020() {
   return (neuron0x35cb280()*0.818048);
}

double NNfunction_ss_sLsR::synapse0x35eb060() {
   return (neuron0x35cb5c0()*1.11923);
}

double NNfunction_ss_sLsR::synapse0x35eb0a0() {
   return (neuron0x35cb900()*-0.505917);
}

double NNfunction_ss_sLsR::synapse0x35eb0e0() {
   return (neuron0x35cbc40()*-0.855958);
}

double NNfunction_ss_sLsR::synapse0x35eb120() {
   return (neuron0x35cbf80()*0.288914);
}

double NNfunction_ss_sLsR::synapse0x35eb160() {
   return (neuron0x35cc2c0()*0.494544);
}

double NNfunction_ss_sLsR::synapse0x35ea9e0() {
   return (neuron0x35cc600()*0.0951116);
}

double NNfunction_ss_sLsR::synapse0x35eaa20() {
   return (neuron0x35ccb60()*-0.104416);
}

double NNfunction_ss_sLsR::synapse0x35eb2b0() {
   return (neuron0x35ccd80()*-0.468854);
}

double NNfunction_ss_sLsR::synapse0x35eb2f0() {
   return (neuron0x35cd0c0()*-0.354447);
}

double NNfunction_ss_sLsR::synapse0x35eb330() {
   return (neuron0x35cd400()*0.426853);
}

double NNfunction_ss_sLsR::synapse0x35eb370() {
   return (neuron0x35cd740()*0.147386);
}

double NNfunction_ss_sLsR::synapse0x35eb3b0() {
   return (neuron0x35cda80()*-1.37708);
}

double NNfunction_ss_sLsR::synapse0x35eb3f0() {
   return (neuron0x35cddc0()*0.109782);
}

double NNfunction_ss_sLsR::synapse0x35eb770() {
   return (neuron0x35c9200()*-0.0451715);
}

double NNfunction_ss_sLsR::synapse0x35eb7b0() {
   return (neuron0x35c9540()*-0.332737);
}

double NNfunction_ss_sLsR::synapse0x35eb7f0() {
   return (neuron0x35c9880()*0.522728);
}

double NNfunction_ss_sLsR::synapse0x35eb830() {
   return (neuron0x35c9bc0()*0.368413);
}

double NNfunction_ss_sLsR::synapse0x35eb870() {
   return (neuron0x35c9f00()*-0.707025);
}

double NNfunction_ss_sLsR::synapse0x35eb8b0() {
   return (neuron0x35ca240()*-0.896463);
}

double NNfunction_ss_sLsR::synapse0x35eb8f0() {
   return (neuron0x35ca580()*1.01749);
}

double NNfunction_ss_sLsR::synapse0x35eb930() {
   return (neuron0x35ca8c0()*-0.499757);
}

double NNfunction_ss_sLsR::synapse0x35eb970() {
   return (neuron0x35cac00()*0.563856);
}

double NNfunction_ss_sLsR::synapse0x35eb9b0() {
   return (neuron0x35caf40()*-0.659147);
}

double NNfunction_ss_sLsR::synapse0x35eb9f0() {
   return (neuron0x35cb280()*0.717516);
}

double NNfunction_ss_sLsR::synapse0x35eba30() {
   return (neuron0x35cb5c0()*-0.02169);
}

double NNfunction_ss_sLsR::synapse0x35eba70() {
   return (neuron0x35cb900()*0.894059);
}

double NNfunction_ss_sLsR::synapse0x35ebab0() {
   return (neuron0x35cbc40()*0.896328);
}

double NNfunction_ss_sLsR::synapse0x35ebaf0() {
   return (neuron0x35cbf80()*-0.607656);
}

double NNfunction_ss_sLsR::synapse0x35ebb30() {
   return (neuron0x35cc2c0()*0.016193);
}

double NNfunction_ss_sLsR::synapse0x35eb5c0() {
   return (neuron0x35cc600()*-0.388662);
}

double NNfunction_ss_sLsR::synapse0x35eb600() {
   return (neuron0x35ccb60()*0.130183);
}

double NNfunction_ss_sLsR::synapse0x35ebc80() {
   return (neuron0x35ccd80()*-0.292862);
}

double NNfunction_ss_sLsR::synapse0x35ebcc0() {
   return (neuron0x35cd0c0()*-0.11512);
}

double NNfunction_ss_sLsR::synapse0x35ebd00() {
   return (neuron0x35cd400()*-0.519577);
}

double NNfunction_ss_sLsR::synapse0x35ebd40() {
   return (neuron0x35cd740()*0.37712);
}

double NNfunction_ss_sLsR::synapse0x35ebd80() {
   return (neuron0x35cda80()*0.371535);
}

double NNfunction_ss_sLsR::synapse0x35ebdc0() {
   return (neuron0x35cddc0()*-0.327371);
}

double NNfunction_ss_sLsR::synapse0x35ec140() {
   return (neuron0x35c9200()*-0.640092);
}

double NNfunction_ss_sLsR::synapse0x35ec180() {
   return (neuron0x35c9540()*-0.310181);
}

double NNfunction_ss_sLsR::synapse0x35ec1c0() {
   return (neuron0x35c9880()*0.182983);
}

double NNfunction_ss_sLsR::synapse0x35ec200() {
   return (neuron0x35c9bc0()*0.538156);
}

double NNfunction_ss_sLsR::synapse0x35ec240() {
   return (neuron0x35c9f00()*-0.336366);
}

double NNfunction_ss_sLsR::synapse0x35ec280() {
   return (neuron0x35ca240()*0.590957);
}

double NNfunction_ss_sLsR::synapse0x35ec2c0() {
   return (neuron0x35ca580()*0.365194);
}

double NNfunction_ss_sLsR::synapse0x35ec300() {
   return (neuron0x35ca8c0()*-0.330673);
}

double NNfunction_ss_sLsR::synapse0x35ec340() {
   return (neuron0x35cac00()*-0.197117);
}

double NNfunction_ss_sLsR::synapse0x35ec380() {
   return (neuron0x35caf40()*0.669774);
}

double NNfunction_ss_sLsR::synapse0x35ec3c0() {
   return (neuron0x35cb280()*0.262977);
}

double NNfunction_ss_sLsR::synapse0x35ec400() {
   return (neuron0x35cb5c0()*0.431422);
}

double NNfunction_ss_sLsR::synapse0x35ec440() {
   return (neuron0x35cb900()*0.945422);
}

double NNfunction_ss_sLsR::synapse0x35ec480() {
   return (neuron0x35cbc40()*0.0953574);
}

double NNfunction_ss_sLsR::synapse0x35ec4c0() {
   return (neuron0x35cbf80()*-0.0658301);
}

double NNfunction_ss_sLsR::synapse0x35ec500() {
   return (neuron0x35cc2c0()*0.403434);
}

double NNfunction_ss_sLsR::synapse0x35ebf90() {
   return (neuron0x35cc600()*0.733535);
}

double NNfunction_ss_sLsR::synapse0x35ebfd0() {
   return (neuron0x35ccb60()*0.0303401);
}

double NNfunction_ss_sLsR::synapse0x35dcb00() {
   return (neuron0x35ccd80()*-0.406043);
}

double NNfunction_ss_sLsR::synapse0x35dcb40() {
   return (neuron0x35cd0c0()*-0.238535);
}

double NNfunction_ss_sLsR::synapse0x35dcb80() {
   return (neuron0x35cd400()*-0.101408);
}

double NNfunction_ss_sLsR::synapse0x35dcbc0() {
   return (neuron0x35cd740()*-0.125268);
}

double NNfunction_ss_sLsR::synapse0x35dcc00() {
   return (neuron0x35cda80()*0.369039);
}

double NNfunction_ss_sLsR::synapse0x35dcc40() {
   return (neuron0x35cddc0()*0.206852);
}

double NNfunction_ss_sLsR::synapse0x35dcfc0() {
   return (neuron0x35c9200()*-0.249841);
}

double NNfunction_ss_sLsR::synapse0x35dd000() {
   return (neuron0x35c9540()*-0.287633);
}

double NNfunction_ss_sLsR::synapse0x35dd040() {
   return (neuron0x35c9880()*0.128595);
}

double NNfunction_ss_sLsR::synapse0x35dd080() {
   return (neuron0x35c9bc0()*0.134666);
}

double NNfunction_ss_sLsR::synapse0x35dd0c0() {
   return (neuron0x35c9f00()*-0.175035);
}

double NNfunction_ss_sLsR::synapse0x35dd100() {
   return (neuron0x35ca240()*0.161932);
}

double NNfunction_ss_sLsR::synapse0x35dd140() {
   return (neuron0x35ca580()*-0.0206477);
}

double NNfunction_ss_sLsR::synapse0x35dd180() {
   return (neuron0x35ca8c0()*0.15608);
}

double NNfunction_ss_sLsR::synapse0x35dd1c0() {
   return (neuron0x35cac00()*0.54455);
}

double NNfunction_ss_sLsR::synapse0x35dd200() {
   return (neuron0x35caf40()*-0.303652);
}

double NNfunction_ss_sLsR::synapse0x35dd240() {
   return (neuron0x35cb280()*-0.0952906);
}

double NNfunction_ss_sLsR::synapse0x35dd280() {
   return (neuron0x35cb5c0()*0.147483);
}

double NNfunction_ss_sLsR::synapse0x35dd2c0() {
   return (neuron0x35cb900()*1.2422);
}

double NNfunction_ss_sLsR::synapse0x35dd300() {
   return (neuron0x35cbc40()*0.102459);
}

double NNfunction_ss_sLsR::synapse0x35dd340() {
   return (neuron0x35cbf80()*0.146219);
}

double NNfunction_ss_sLsR::synapse0x35dd380() {
   return (neuron0x35cc2c0()*-0.0893456);
}

double NNfunction_ss_sLsR::synapse0x35dce10() {
   return (neuron0x35cc600()*0.154038);
}

double NNfunction_ss_sLsR::synapse0x35dce50() {
   return (neuron0x35ccb60()*0.066704);
}

double NNfunction_ss_sLsR::synapse0x35dd4d0() {
   return (neuron0x35ccd80()*1.51542);
}

double NNfunction_ss_sLsR::synapse0x35dd510() {
   return (neuron0x35cd0c0()*-0.0282753);
}

double NNfunction_ss_sLsR::synapse0x35dd550() {
   return (neuron0x35cd400()*-0.0780188);
}

double NNfunction_ss_sLsR::synapse0x35dd590() {
   return (neuron0x35cd740()*-0.338477);
}

double NNfunction_ss_sLsR::synapse0x35dd5d0() {
   return (neuron0x35cda80()*0.184224);
}

double NNfunction_ss_sLsR::synapse0x35dd610() {
   return (neuron0x35cddc0()*0.158096);
}

double NNfunction_ss_sLsR::synapse0x35dd990() {
   return (neuron0x35c9200()*0.00123705);
}

double NNfunction_ss_sLsR::synapse0x35dd9d0() {
   return (neuron0x35c9540()*0.113204);
}

double NNfunction_ss_sLsR::synapse0x35dda10() {
   return (neuron0x35c9880()*0.0217242);
}

double NNfunction_ss_sLsR::synapse0x35dda50() {
   return (neuron0x35c9bc0()*-0.666221);
}

double NNfunction_ss_sLsR::synapse0x35dda90() {
   return (neuron0x35c9f00()*0.0441965);
}

double NNfunction_ss_sLsR::synapse0x35ddad0() {
   return (neuron0x35ca240()*0.325412);
}

double NNfunction_ss_sLsR::synapse0x35ddb10() {
   return (neuron0x35ca580()*0.383404);
}

double NNfunction_ss_sLsR::synapse0x35ddb50() {
   return (neuron0x35ca8c0()*0.0122433);
}

double NNfunction_ss_sLsR::synapse0x35ddb90() {
   return (neuron0x35cac00()*-0.25608);
}

double NNfunction_ss_sLsR::synapse0x35ddbd0() {
   return (neuron0x35caf40()*0.0196335);
}

double NNfunction_ss_sLsR::synapse0x35ddc10() {
   return (neuron0x35cb280()*-0.225578);
}

double NNfunction_ss_sLsR::synapse0x35ddc50() {
   return (neuron0x35cb5c0()*0.0683227);
}

double NNfunction_ss_sLsR::synapse0x35ddc90() {
   return (neuron0x35cb900()*-0.985463);
}

double NNfunction_ss_sLsR::synapse0x35ddcd0() {
   return (neuron0x35cbc40()*0.0724492);
}

double NNfunction_ss_sLsR::synapse0x35ddd10() {
   return (neuron0x35cbf80()*0.202482);
}

double NNfunction_ss_sLsR::synapse0x35ddd50() {
   return (neuron0x35cc2c0()*0.181784);
}

double NNfunction_ss_sLsR::synapse0x35dd7e0() {
   return (neuron0x35cc600()*-0.0372797);
}

double NNfunction_ss_sLsR::synapse0x35dd820() {
   return (neuron0x35ccb60()*0.112817);
}

double NNfunction_ss_sLsR::synapse0x35ddea0() {
   return (neuron0x35ccd80()*-0.75006);
}

double NNfunction_ss_sLsR::synapse0x35ddee0() {
   return (neuron0x35cd0c0()*0.148273);
}

double NNfunction_ss_sLsR::synapse0x35ddf20() {
   return (neuron0x35cd400()*0.10784);
}

double NNfunction_ss_sLsR::synapse0x35ddf60() {
   return (neuron0x35cd740()*-0.180671);
}

double NNfunction_ss_sLsR::synapse0x35ddfa0() {
   return (neuron0x35cda80()*0.103938);
}

double NNfunction_ss_sLsR::synapse0x35ddfe0() {
   return (neuron0x35cddc0()*0.0123651);
}

double NNfunction_ss_sLsR::synapse0x35de360() {
   return (neuron0x35c9200()*0.286534);
}

double NNfunction_ss_sLsR::synapse0x35de3a0() {
   return (neuron0x35c9540()*-0.211221);
}

double NNfunction_ss_sLsR::synapse0x35de3e0() {
   return (neuron0x35c9880()*-0.917036);
}

double NNfunction_ss_sLsR::synapse0x35de420() {
   return (neuron0x35c9bc0()*0.405674);
}

double NNfunction_ss_sLsR::synapse0x35de460() {
   return (neuron0x35c9f00()*0.591419);
}

double NNfunction_ss_sLsR::synapse0x35de4a0() {
   return (neuron0x35ca240()*0.415011);
}

double NNfunction_ss_sLsR::synapse0x35de4e0() {
   return (neuron0x35ca580()*-0.0541941);
}

double NNfunction_ss_sLsR::synapse0x35de520() {
   return (neuron0x35ca8c0()*-0.223352);
}

double NNfunction_ss_sLsR::synapse0x35de560() {
   return (neuron0x35cac00()*-0.428893);
}

double NNfunction_ss_sLsR::synapse0x35de5a0() {
   return (neuron0x35caf40()*-0.583452);
}

double NNfunction_ss_sLsR::synapse0x35de5e0() {
   return (neuron0x35cb280()*-0.643166);
}

double NNfunction_ss_sLsR::synapse0x35de620() {
   return (neuron0x35cb5c0()*-0.203715);
}

double NNfunction_ss_sLsR::synapse0x35de660() {
   return (neuron0x35cb900()*0.756925);
}

double NNfunction_ss_sLsR::synapse0x35de6a0() {
   return (neuron0x35cbc40()*0.333361);
}

double NNfunction_ss_sLsR::synapse0x35de6e0() {
   return (neuron0x35cbf80()*-0.00812751);
}

double NNfunction_ss_sLsR::synapse0x35de720() {
   return (neuron0x35cc2c0()*-0.427925);
}

double NNfunction_ss_sLsR::synapse0x35de1b0() {
   return (neuron0x35cc600()*0.239217);
}

double NNfunction_ss_sLsR::synapse0x35de1f0() {
   return (neuron0x35ccb60()*0.0121974);
}

double NNfunction_ss_sLsR::synapse0x35de870() {
   return (neuron0x35ccd80()*0.609177);
}

double NNfunction_ss_sLsR::synapse0x35de8b0() {
   return (neuron0x35cd0c0()*0.0942543);
}

double NNfunction_ss_sLsR::synapse0x35de8f0() {
   return (neuron0x35cd400()*-0.470078);
}

double NNfunction_ss_sLsR::synapse0x35de930() {
   return (neuron0x35cd740()*0.635123);
}

double NNfunction_ss_sLsR::synapse0x35de970() {
   return (neuron0x35cda80()*-0.334334);
}

double NNfunction_ss_sLsR::synapse0x35de9b0() {
   return (neuron0x35cddc0()*-0.154161);
}

double NNfunction_ss_sLsR::synapse0x35f0880() {
   return (neuron0x35c9200()*0.171816);
}

double NNfunction_ss_sLsR::synapse0x35f08c0() {
   return (neuron0x35c9540()*0.0793227);
}

double NNfunction_ss_sLsR::synapse0x35f0900() {
   return (neuron0x35c9880()*-0.613653);
}

double NNfunction_ss_sLsR::synapse0x35f0940() {
   return (neuron0x35c9bc0()*1.19549);
}

double NNfunction_ss_sLsR::synapse0x35f0980() {
   return (neuron0x35c9f00()*0.160644);
}

double NNfunction_ss_sLsR::synapse0x35f09c0() {
   return (neuron0x35ca240()*-0.0579254);
}

double NNfunction_ss_sLsR::synapse0x35f0a00() {
   return (neuron0x35ca580()*0.18701);
}

double NNfunction_ss_sLsR::synapse0x35f0a40() {
   return (neuron0x35ca8c0()*-0.668133);
}

double NNfunction_ss_sLsR::synapse0x35f0a80() {
   return (neuron0x35cac00()*-0.500981);
}

double NNfunction_ss_sLsR::synapse0x35f0ac0() {
   return (neuron0x35caf40()*0.0150059);
}

double NNfunction_ss_sLsR::synapse0x35f0b00() {
   return (neuron0x35cb280()*-0.293977);
}

double NNfunction_ss_sLsR::synapse0x35f0b40() {
   return (neuron0x35cb5c0()*-0.0211128);
}

double NNfunction_ss_sLsR::synapse0x35f0b80() {
   return (neuron0x35cb900()*-1.23979);
}

double NNfunction_ss_sLsR::synapse0x35f0bc0() {
   return (neuron0x35cbc40()*-0.188815);
}

double NNfunction_ss_sLsR::synapse0x35f0c00() {
   return (neuron0x35cbf80()*-0.117451);
}

double NNfunction_ss_sLsR::synapse0x35f0c40() {
   return (neuron0x35cc2c0()*0.0615612);
}

double NNfunction_ss_sLsR::synapse0x35de9f0() {
   return (neuron0x35cc600()*0.205008);
}

double NNfunction_ss_sLsR::synapse0x35dea30() {
   return (neuron0x35ccb60()*0.0565743);
}

double NNfunction_ss_sLsR::synapse0x35f0d90() {
   return (neuron0x35ccd80()*-0.520459);
}

double NNfunction_ss_sLsR::synapse0x35f0dd0() {
   return (neuron0x35cd0c0()*-0.224921);
}

double NNfunction_ss_sLsR::synapse0x35f0e10() {
   return (neuron0x35cd400()*0.0193383);
}

double NNfunction_ss_sLsR::synapse0x35f0e50() {
   return (neuron0x35cd740()*0.437519);
}

double NNfunction_ss_sLsR::synapse0x35f0e90() {
   return (neuron0x35cda80()*-0.133985);
}

double NNfunction_ss_sLsR::synapse0x35f0ed0() {
   return (neuron0x35cddc0()*-0.0626364);
}

double NNfunction_ss_sLsR::synapse0x35f1250() {
   return (neuron0x35c9200()*0.0221598);
}

double NNfunction_ss_sLsR::synapse0x35f1290() {
   return (neuron0x35c9540()*0.0305625);
}

double NNfunction_ss_sLsR::synapse0x35f12d0() {
   return (neuron0x35c9880()*0.139507);
}

double NNfunction_ss_sLsR::synapse0x35f1310() {
   return (neuron0x35c9bc0()*5.91679);
}

double NNfunction_ss_sLsR::synapse0x35f1350() {
   return (neuron0x35c9f00()*0.091044);
}

double NNfunction_ss_sLsR::synapse0x35f1390() {
   return (neuron0x35ca240()*0.0573429);
}

double NNfunction_ss_sLsR::synapse0x35f13d0() {
   return (neuron0x35ca580()*-0.00844431);
}

double NNfunction_ss_sLsR::synapse0x35f1410() {
   return (neuron0x35ca8c0()*0.00306543);
}

double NNfunction_ss_sLsR::synapse0x35f1450() {
   return (neuron0x35cac00()*-0.0220337);
}

double NNfunction_ss_sLsR::synapse0x35f1490() {
   return (neuron0x35caf40()*-0.0291548);
}

double NNfunction_ss_sLsR::synapse0x35f14d0() {
   return (neuron0x35cb280()*-0.0248785);
}

double NNfunction_ss_sLsR::synapse0x35f1510() {
   return (neuron0x35cb5c0()*0.000466302);
}

double NNfunction_ss_sLsR::synapse0x35f1550() {
   return (neuron0x35cb900()*0.0518788);
}

double NNfunction_ss_sLsR::synapse0x35f1590() {
   return (neuron0x35cbc40()*0.0241546);
}

double NNfunction_ss_sLsR::synapse0x35f15d0() {
   return (neuron0x35cbf80()*0.0213089);
}

double NNfunction_ss_sLsR::synapse0x35f1610() {
   return (neuron0x35cc2c0()*0.0765703);
}

double NNfunction_ss_sLsR::synapse0x35f10a0() {
   return (neuron0x35cc600()*0.0380876);
}

double NNfunction_ss_sLsR::synapse0x35f10e0() {
   return (neuron0x35ccb60()*-0.0580477);
}

double NNfunction_ss_sLsR::synapse0x35f1760() {
   return (neuron0x35ccd80()*0.207298);
}

double NNfunction_ss_sLsR::synapse0x35f17a0() {
   return (neuron0x35cd0c0()*0.000776411);
}

double NNfunction_ss_sLsR::synapse0x35f17e0() {
   return (neuron0x35cd400()*0.0305328);
}

double NNfunction_ss_sLsR::synapse0x35f1820() {
   return (neuron0x35cd740()*0.00774377);
}

double NNfunction_ss_sLsR::synapse0x35f1860() {
   return (neuron0x35cda80()*0.0458244);
}

double NNfunction_ss_sLsR::synapse0x35f18a0() {
   return (neuron0x35cddc0()*0.0656355);
}

double NNfunction_ss_sLsR::synapse0x35f1c20() {
   return (neuron0x35c9200()*0.168006);
}

double NNfunction_ss_sLsR::synapse0x35f1c60() {
   return (neuron0x35c9540()*0.0956805);
}

double NNfunction_ss_sLsR::synapse0x35f1ca0() {
   return (neuron0x35c9880()*-0.0527395);
}

double NNfunction_ss_sLsR::synapse0x35f1ce0() {
   return (neuron0x35c9bc0()*-1.3092);
}

double NNfunction_ss_sLsR::synapse0x35f1d20() {
   return (neuron0x35c9f00()*-0.122591);
}

double NNfunction_ss_sLsR::synapse0x35f1d60() {
   return (neuron0x35ca240()*-0.132732);
}

double NNfunction_ss_sLsR::synapse0x35f1da0() {
   return (neuron0x35ca580()*-0.0516464);
}

double NNfunction_ss_sLsR::synapse0x35f1de0() {
   return (neuron0x35ca8c0()*0.00522168);
}

double NNfunction_ss_sLsR::synapse0x35f1e20() {
   return (neuron0x35cac00()*0.0296273);
}

double NNfunction_ss_sLsR::synapse0x35f1e60() {
   return (neuron0x35caf40()*0.0655105);
}

double NNfunction_ss_sLsR::synapse0x35f1ea0() {
   return (neuron0x35cb280()*-0.0561017);
}

double NNfunction_ss_sLsR::synapse0x35f1ee0() {
   return (neuron0x35cb5c0()*-0.154346);
}

double NNfunction_ss_sLsR::synapse0x35f1f20() {
   return (neuron0x35cb900()*0.795233);
}

double NNfunction_ss_sLsR::synapse0x35f1f60() {
   return (neuron0x35cbc40()*-0.096589);
}

double NNfunction_ss_sLsR::synapse0x35f1fa0() {
   return (neuron0x35cbf80()*0.0847075);
}

double NNfunction_ss_sLsR::synapse0x35f1fe0() {
   return (neuron0x35cc2c0()*0.0834815);
}

double NNfunction_ss_sLsR::synapse0x35f1a70() {
   return (neuron0x35cc600()*-0.0375058);
}

double NNfunction_ss_sLsR::synapse0x35f1ab0() {
   return (neuron0x35ccb60()*0.00787083);
}

double NNfunction_ss_sLsR::synapse0x35f2130() {
   return (neuron0x35ccd80()*-0.31078);
}

double NNfunction_ss_sLsR::synapse0x35f2170() {
   return (neuron0x35cd0c0()*0.0211321);
}

double NNfunction_ss_sLsR::synapse0x35f21b0() {
   return (neuron0x35cd400()*0.00560956);
}

double NNfunction_ss_sLsR::synapse0x35f21f0() {
   return (neuron0x35cd740()*0.000707141);
}

double NNfunction_ss_sLsR::synapse0x35f2230() {
   return (neuron0x35cda80()*-0.0137904);
}

double NNfunction_ss_sLsR::synapse0x35f2270() {
   return (neuron0x35cddc0()*-0.0209252);
}

double NNfunction_ss_sLsR::synapse0x35f25f0() {
   return (neuron0x35c9200()*0.12272);
}

double NNfunction_ss_sLsR::synapse0x35f2630() {
   return (neuron0x35c9540()*0.174072);
}

double NNfunction_ss_sLsR::synapse0x35f2670() {
   return (neuron0x35c9880()*-0.00874571);
}

double NNfunction_ss_sLsR::synapse0x35f26b0() {
   return (neuron0x35c9bc0()*1.21259);
}

double NNfunction_ss_sLsR::synapse0x35f26f0() {
   return (neuron0x35c9f00()*-0.0137792);
}

double NNfunction_ss_sLsR::synapse0x35f2730() {
   return (neuron0x35ca240()*0.0382397);
}

double NNfunction_ss_sLsR::synapse0x35f2770() {
   return (neuron0x35ca580()*-0.0868441);
}

double NNfunction_ss_sLsR::synapse0x35f27b0() {
   return (neuron0x35ca8c0()*-0.13427);
}

double NNfunction_ss_sLsR::synapse0x35f27f0() {
   return (neuron0x35cac00()*-0.0458028);
}

double NNfunction_ss_sLsR::synapse0x35f2830() {
   return (neuron0x35caf40()*0.230532);
}

double NNfunction_ss_sLsR::synapse0x35f2870() {
   return (neuron0x35cb280()*0.146123);
}

double NNfunction_ss_sLsR::synapse0x35f28b0() {
   return (neuron0x35cb5c0()*-0.196954);
}

double NNfunction_ss_sLsR::synapse0x35f28f0() {
   return (neuron0x35cb900()*-0.669039);
}

double NNfunction_ss_sLsR::synapse0x35f2930() {
   return (neuron0x35cbc40()*0.0425645);
}

double NNfunction_ss_sLsR::synapse0x35f2970() {
   return (neuron0x35cbf80()*-0.103076);
}

double NNfunction_ss_sLsR::synapse0x35f29b0() {
   return (neuron0x35cc2c0()*-0.0394401);
}

double NNfunction_ss_sLsR::synapse0x35f2440() {
   return (neuron0x35cc600()*-0.122725);
}

double NNfunction_ss_sLsR::synapse0x35f2480() {
   return (neuron0x35ccb60()*0.00524365);
}

double NNfunction_ss_sLsR::synapse0x35f2b00() {
   return (neuron0x35ccd80()*-0.737335);
}

double NNfunction_ss_sLsR::synapse0x35f2b40() {
   return (neuron0x35cd0c0()*0.118689);
}

double NNfunction_ss_sLsR::synapse0x35f2b80() {
   return (neuron0x35cd400()*-0.0250855);
}

double NNfunction_ss_sLsR::synapse0x35f2bc0() {
   return (neuron0x35cd740()*-0.0611277);
}

double NNfunction_ss_sLsR::synapse0x35f2c00() {
   return (neuron0x35cda80()*0.0741889);
}

double NNfunction_ss_sLsR::synapse0x35f2c40() {
   return (neuron0x35cddc0()*-0.0615185);
}

double NNfunction_ss_sLsR::synapse0x3392b50() {
   return (neuron0x35ce230()*-1.533);
}

double NNfunction_ss_sLsR::synapse0x3392b90() {
   return (neuron0x35ceb80()*-0.948983);
}

double NNfunction_ss_sLsR::synapse0x35d06f0() {
   return (neuron0x35cf660()*1.91533);
}

double NNfunction_ss_sLsR::synapse0x35d0730() {
   return (neuron0x35cf100()*1.8026);
}

double NNfunction_ss_sLsR::synapse0x35d10c0() {
   return (neuron0x35d0440()*0.57718);
}

double NNfunction_ss_sLsR::synapse0x35d1100() {
   return (neuron0x35d0e10()*3.63275);
}

double NNfunction_ss_sLsR::synapse0x35d1e90() {
   return (neuron0x35d1be0()*0.64649);
}

double NNfunction_ss_sLsR::synapse0x35d1ed0() {
   return (neuron0x35d25b0()*-1.20939);
}

double NNfunction_ss_sLsR::synapse0x35d2860() {
   return (neuron0x35d2f80()*-1.50004);
}

double NNfunction_ss_sLsR::synapse0x35d28a0() {
   return (neuron0x35d3a60()*1.23097);
}

double NNfunction_ss_sLsR::synapse0x35d3230() {
   return (neuron0x35d4430()*-1.04986);
}

double NNfunction_ss_sLsR::synapse0x35d3270() {
   return (neuron0x35d1510()*1.35307);
}

double NNfunction_ss_sLsR::synapse0x35d3d10() {
   return (neuron0x35d5fe0()*1.45226);
}

double NNfunction_ss_sLsR::synapse0x35d3d50() {
   return (neuron0x35d69b0()*0.191015);
}

double NNfunction_ss_sLsR::synapse0x35d46e0() {
   return (neuron0x35d7380()*0.876026);
}

double NNfunction_ss_sLsR::synapse0x35d4720() {
   return (neuron0x35d7d50()*-2.63671);
}

double NNfunction_ss_sLsR::synapse0x35d17c0() {
   return (neuron0x35d9b60()*0.934573);
}

double NNfunction_ss_sLsR::synapse0x35d1800() {
   return (neuron0x35d9e40()*0.711258);
}

double NNfunction_ss_sLsR::synapse0x35d6290() {
   return (neuron0x35da810()*-0.221977);
}

double NNfunction_ss_sLsR::synapse0x35d62d0() {
   return (neuron0x35db1e0()*1.47607);
}

double NNfunction_ss_sLsR::synapse0x35d6c60() {
   return (neuron0x35dbbb0()*0.00886412);
}

double NNfunction_ss_sLsR::synapse0x35d6ca0() {
   return (neuron0x35dc580()*-1.38957);
}

double NNfunction_ss_sLsR::synapse0x35d7630() {
   return (neuron0x35d50d0()*-1.04677);
}

double NNfunction_ss_sLsR::synapse0x35d7670() {
   return (neuron0x35d5aa0()*-0.808651);
}

double NNfunction_ss_sLsR::synapse0x35d8000() {
   return (neuron0x35df310()*-0.72307);
}

double NNfunction_ss_sLsR::synapse0x35d8040() {
   return (neuron0x35dfce0()*-0.408661);
}

double NNfunction_ss_sLsR::synapse0x35cc1a0() {
   return (neuron0x35e06b0()*-0.370215);
}

double NNfunction_ss_sLsR::synapse0x35cc1e0() {
   return (neuron0x35e1080()*-0.244308);
}

double NNfunction_ss_sLsR::synapse0x35da0f0() {
   return (neuron0x35e1a50()*1.77386);
}

double NNfunction_ss_sLsR::synapse0x35da130() {
   return (neuron0x35e2420()*1.2711);
}

double NNfunction_ss_sLsR::synapse0x35daac0() {
   return (neuron0x35e2df0()*-0.087465);
}

double NNfunction_ss_sLsR::synapse0x35dab00() {
   return (neuron0x35e37c0()*-1.18923);
}

double NNfunction_ss_sLsR::synapse0x35db490() {
   return (neuron0x35d9850()*0.953286);
}

double NNfunction_ss_sLsR::synapse0x35db4d0() {
   return (neuron0x35e63a0()*-0.303576);
}

double NNfunction_ss_sLsR::synapse0x35dbe60() {
   return (neuron0x35e6d70()*0.838346);
}

double NNfunction_ss_sLsR::synapse0x35dbea0() {
   return (neuron0x35e7740()*2.22706);
}

double NNfunction_ss_sLsR::synapse0x35dc830() {
   return (neuron0x35e8110()*3.73841);
}

double NNfunction_ss_sLsR::synapse0x35dc870() {
   return (neuron0x35e8ae0()*1.49926);
}

double NNfunction_ss_sLsR::synapse0x35d5380() {
   return (neuron0x35e94b0()*-1.45729);
}

double NNfunction_ss_sLsR::synapse0x35d53c0() {
   return (neuron0x35e9e80()*1.28046);
}

double NNfunction_ss_sLsR::synapse0x35dec30() {
   return (neuron0x35ea850()*-0.70043);
}

double NNfunction_ss_sLsR::synapse0x35dec70() {
   return (neuron0x35eb430()*-0.20767);
}

double NNfunction_ss_sLsR::synapse0x35df5c0() {
   return (neuron0x35ebe00()*-1.50482);
}

double NNfunction_ss_sLsR::synapse0x35df600() {
   return (neuron0x35dcc80()*1.9268);
}

double NNfunction_ss_sLsR::synapse0x35dff90() {
   return (neuron0x35dd650()*-1.77694);
}

double NNfunction_ss_sLsR::synapse0x35dffd0() {
   return (neuron0x35de020()*0.300577);
}

double NNfunction_ss_sLsR::synapse0x35e0960() {
   return (neuron0x35f0660()*-1.13985);
}

double NNfunction_ss_sLsR::synapse0x35e09a0() {
   return (neuron0x35f0f10()*0.536425);
}

double NNfunction_ss_sLsR::synapse0x35e1330() {
   return (neuron0x35f18e0()*-1.30903);
}

double NNfunction_ss_sLsR::synapse0x35e1370() {
   return (neuron0x35f22b0()*0.634814);
}

double NNfunction_ss_sLsR::synapse0x35e3a70() {
   return (neuron0x35ce230()*0.0135738);
}

double NNfunction_ss_sLsR::synapse0x35e3ab0() {
   return (neuron0x35ceb80()*0.108745);
}

double NNfunction_ss_sLsR::synapse0x35d9030() {
   return (neuron0x35cf660()*-0.227726);
}

double NNfunction_ss_sLsR::synapse0x35d9070() {
   return (neuron0x35cf100()*1.60162);
}

double NNfunction_ss_sLsR::synapse0x35e6650() {
   return (neuron0x35d0440()*-0.00123839);
}

double NNfunction_ss_sLsR::synapse0x35e6690() {
   return (neuron0x35d0e10()*0.321604);
}

double NNfunction_ss_sLsR::synapse0x35e7020() {
   return (neuron0x35d1be0()*-0.213057);
}

double NNfunction_ss_sLsR::synapse0x35e7060() {
   return (neuron0x35d25b0()*-0.144757);
}

double NNfunction_ss_sLsR::synapse0x35e79f0() {
   return (neuron0x35d2f80()*-0.194345);
}

double NNfunction_ss_sLsR::synapse0x35e7a30() {
   return (neuron0x35d3a60()*0.0381657);
}

double NNfunction_ss_sLsR::synapse0x35e83c0() {
   return (neuron0x35d4430()*0.723114);
}

double NNfunction_ss_sLsR::synapse0x35e8400() {
   return (neuron0x35d1510()*0.24865);
}

double NNfunction_ss_sLsR::synapse0x35e8d90() {
   return (neuron0x35d5fe0()*-1.58758);
}

double NNfunction_ss_sLsR::synapse0x35e8dd0() {
   return (neuron0x35d69b0()*-0.354761);
}

double NNfunction_ss_sLsR::synapse0x35e9760() {
   return (neuron0x35d7380()*-0.647303);
}

double NNfunction_ss_sLsR::synapse0x35e97a0() {
   return (neuron0x35d7d50()*0.226772);
}

double NNfunction_ss_sLsR::synapse0x35ea130() {
   return (neuron0x35d9b60()*0.139159);
}

double NNfunction_ss_sLsR::synapse0x35ea170() {
   return (neuron0x35d9e40()*-0.126105);
}

double NNfunction_ss_sLsR::synapse0x35eab00() {
   return (neuron0x35da810()*0.441053);
}

double NNfunction_ss_sLsR::synapse0x35eab40() {
   return (neuron0x35db1e0()*-0.758214);
}

double NNfunction_ss_sLsR::synapse0x35eb6e0() {
   return (neuron0x35dbbb0()*0.227302);
}

double NNfunction_ss_sLsR::synapse0x35eb720() {
   return (neuron0x35dc580()*0.142816);
}

double NNfunction_ss_sLsR::synapse0x35ec0b0() {
   return (neuron0x35d50d0()*-0.0701018);
}

double NNfunction_ss_sLsR::synapse0x35ec0f0() {
   return (neuron0x35d5aa0()*0.0949807);
}

double NNfunction_ss_sLsR::synapse0x35dcf30() {
   return (neuron0x35df310()*-0.726177);
}

double NNfunction_ss_sLsR::synapse0x35dcf70() {
   return (neuron0x35dfce0()*-0.137998);
}

double NNfunction_ss_sLsR::synapse0x35dd900() {
   return (neuron0x35e06b0()*0.205348);
}

double NNfunction_ss_sLsR::synapse0x35dd940() {
   return (neuron0x35e1080()*-0.0903499);
}

double NNfunction_ss_sLsR::synapse0x35de2d0() {
   return (neuron0x35e1a50()*0.00607118);
}

double NNfunction_ss_sLsR::synapse0x35de310() {
   return (neuron0x35e2420()*0.107514);
}

double NNfunction_ss_sLsR::synapse0x35f07f0() {
   return (neuron0x35e2df0()*-0.0108542);
}

double NNfunction_ss_sLsR::synapse0x35f0830() {
   return (neuron0x35e37c0()*0.0880305);
}

double NNfunction_ss_sLsR::synapse0x35f11c0() {
   return (neuron0x35d9850()*0.0941947);
}

double NNfunction_ss_sLsR::synapse0x35f1200() {
   return (neuron0x35e63a0()*-0.456358);
}

double NNfunction_ss_sLsR::synapse0x35f1b90() {
   return (neuron0x35e6d70()*0.0719594);
}

double NNfunction_ss_sLsR::synapse0x35f1bd0() {
   return (neuron0x35e7740()*-0.113882);
}

double NNfunction_ss_sLsR::synapse0x35f2560() {
   return (neuron0x35e8110()*-1.00346);
}

double NNfunction_ss_sLsR::synapse0x35f25a0() {
   return (neuron0x35e8ae0()*-0.122531);
}

double NNfunction_ss_sLsR::synapse0x35ce450() {
   return (neuron0x35e94b0()*-0.631879);
}

double NNfunction_ss_sLsR::synapse0x35ce490() {
   return (neuron0x35e9e80()*0.0142501);
}

double NNfunction_ss_sLsR::synapse0x35e1d00() {
   return (neuron0x35ea850()*0.00570435);
}

double NNfunction_ss_sLsR::synapse0x35e1d40() {
   return (neuron0x35eb430()*-0.096698);
}

double NNfunction_ss_sLsR::synapse0x35f2c80() {
   return (neuron0x35ebe00()*0.0823431);
}

double NNfunction_ss_sLsR::synapse0x35f2cc0() {
   return (neuron0x35dcc80()*-0.392148);
}

double NNfunction_ss_sLsR::synapse0x35f2d00() {
   return (neuron0x35dd650()*-0.394772);
}

double NNfunction_ss_sLsR::synapse0x35f2d40() {
   return (neuron0x35de020()*0.0196289);
}

double NNfunction_ss_sLsR::synapse0x35f9bf0() {
   return (neuron0x35f0660()*0.0321684);
}

double NNfunction_ss_sLsR::synapse0x35f9c30() {
   return (neuron0x35f0f10()*-2.30577);
}

double NNfunction_ss_sLsR::synapse0x35f9c70() {
   return (neuron0x35f18e0()*-1.0887);
}

double NNfunction_ss_sLsR::synapse0x35f9cb0() {
   return (neuron0x35f22b0()*0.281903);
}

double NNfunction_ss_sLsR::synapse0x35fa030() {
   return (neuron0x35ce230()*-0.0140708);
}

double NNfunction_ss_sLsR::synapse0x35fa070() {
   return (neuron0x35ceb80()*-0.0402062);
}

double NNfunction_ss_sLsR::synapse0x35fa0b0() {
   return (neuron0x35cf660()*0.0932251);
}

double NNfunction_ss_sLsR::synapse0x35fa0f0() {
   return (neuron0x35cf100()*-0.610887);
}

double NNfunction_ss_sLsR::synapse0x35fa130() {
   return (neuron0x35d0440()*0.0666813);
}

double NNfunction_ss_sLsR::synapse0x35fa170() {
   return (neuron0x35d0e10()*-0.153673);
}

double NNfunction_ss_sLsR::synapse0x35fa1b0() {
   return (neuron0x35d1be0()*0.0538649);
}

double NNfunction_ss_sLsR::synapse0x35fa1f0() {
   return (neuron0x35d25b0()*0.0800515);
}

double NNfunction_ss_sLsR::synapse0x35fa230() {
   return (neuron0x35d2f80()*0.0612144);
}

double NNfunction_ss_sLsR::synapse0x35fa270() {
   return (neuron0x35d3a60()*-0.0349881);
}

double NNfunction_ss_sLsR::synapse0x35fa2b0() {
   return (neuron0x35d4430()*-0.227684);
}

double NNfunction_ss_sLsR::synapse0x35fa2f0() {
   return (neuron0x35d1510()*-0.0873339);
}

double NNfunction_ss_sLsR::synapse0x35fa330() {
   return (neuron0x35d5fe0()*-2.70276);
}

double NNfunction_ss_sLsR::synapse0x35fa370() {
   return (neuron0x35d69b0()*0.654531);
}

double NNfunction_ss_sLsR::synapse0x35fa3b0() {
   return (neuron0x35d7380()*0.201142);
}

double NNfunction_ss_sLsR::synapse0x35fa3f0() {
   return (neuron0x35d7d50()*0.0777439);
}

double NNfunction_ss_sLsR::synapse0x35f9e80() {
   return (neuron0x35d9b60()*-0.0573101);
}

double NNfunction_ss_sLsR::synapse0x35f9ec0() {
   return (neuron0x35d9e40()*0.0236052);
}

double NNfunction_ss_sLsR::synapse0x35fa540() {
   return (neuron0x35da810()*0.677043);
}

double NNfunction_ss_sLsR::synapse0x35fa580() {
   return (neuron0x35db1e0()*-1.41799);
}

double NNfunction_ss_sLsR::synapse0x35fa5c0() {
   return (neuron0x35dbbb0()*-0.072529);
}

double NNfunction_ss_sLsR::synapse0x35fa600() {
   return (neuron0x35dc580()*-0.0643388);
}

double NNfunction_ss_sLsR::synapse0x35fa640() {
   return (neuron0x35d50d0()*0.0226585);
}

double NNfunction_ss_sLsR::synapse0x35fa680() {
   return (neuron0x35d5aa0()*-0.0384455);
}

double NNfunction_ss_sLsR::synapse0x35fa6c0() {
   return (neuron0x35df310()*-0.0577197);
}

double NNfunction_ss_sLsR::synapse0x35fa700() {
   return (neuron0x35dfce0()*0.0759436);
}

double NNfunction_ss_sLsR::synapse0x35fa740() {
   return (neuron0x35e06b0()*-0.120195);
}

double NNfunction_ss_sLsR::synapse0x35fa780() {
   return (neuron0x35e1080()*0.0713396);
}

double NNfunction_ss_sLsR::synapse0x35fa7c0() {
   return (neuron0x35e1a50()*0.0409527);
}

double NNfunction_ss_sLsR::synapse0x35fa800() {
   return (neuron0x35e2420()*-1.53831);
}

double NNfunction_ss_sLsR::synapse0x35fa840() {
   return (neuron0x35e2df0()*-0.0231814);
}

double NNfunction_ss_sLsR::synapse0x35fa880() {
   return (neuron0x35e37c0()*-0.0348815);
}

double NNfunction_ss_sLsR::synapse0x35fa430() {
   return (neuron0x35d9850()*-0.0315138);
}

double NNfunction_ss_sLsR::synapse0x35fa470() {
   return (neuron0x35e63a0()*-0.39574);
}

double NNfunction_ss_sLsR::synapse0x35fa4b0() {
   return (neuron0x35e6d70()*-0.0217652);
}

double NNfunction_ss_sLsR::synapse0x35fa4f0() {
   return (neuron0x35e7740()*0.0193514);
}

double NNfunction_ss_sLsR::synapse0x35faad0() {
   return (neuron0x35e8110()*-0.747138);
}

double NNfunction_ss_sLsR::synapse0x35fab10() {
   return (neuron0x35e8ae0()*0.0482863);
}

double NNfunction_ss_sLsR::synapse0x35fab50() {
   return (neuron0x35e94b0()*0.432885);
}

double NNfunction_ss_sLsR::synapse0x35fab90() {
   return (neuron0x35e9e80()*0.0292257);
}

double NNfunction_ss_sLsR::synapse0x35fabd0() {
   return (neuron0x35ea850()*0.0047288);
}

double NNfunction_ss_sLsR::synapse0x35fac10() {
   return (neuron0x35eb430()*0.0195765);
}

double NNfunction_ss_sLsR::synapse0x35fac50() {
   return (neuron0x35ebe00()*-0.0358026);
}

double NNfunction_ss_sLsR::synapse0x35fac90() {
   return (neuron0x35dcc80()*0.235268);
}

double NNfunction_ss_sLsR::synapse0x35facd0() {
   return (neuron0x35dd650()*0.117707);
}

double NNfunction_ss_sLsR::synapse0x35fad10() {
   return (neuron0x35de020()*-0.01336);
}

double NNfunction_ss_sLsR::synapse0x35fad50() {
   return (neuron0x35f0660()*0.01718);
}

double NNfunction_ss_sLsR::synapse0x35fad90() {
   return (neuron0x35f0f10()*0.91656);
}

double NNfunction_ss_sLsR::synapse0x35fadd0() {
   return (neuron0x35f18e0()*0.284398);
}

double NNfunction_ss_sLsR::synapse0x35fae10() {
   return (neuron0x35f22b0()*0.0930343);
}

double NNfunction_ss_sLsR::synapse0x35fb190() {
   return (neuron0x35ce230()*0.426838);
}

double NNfunction_ss_sLsR::synapse0x35fb1d0() {
   return (neuron0x35ceb80()*0.686688);
}

double NNfunction_ss_sLsR::synapse0x35fb210() {
   return (neuron0x35cf660()*6.73369);
}

double NNfunction_ss_sLsR::synapse0x35fb250() {
   return (neuron0x35cf100()*-3.05578);
}

double NNfunction_ss_sLsR::synapse0x35fb290() {
   return (neuron0x35d0440()*0.602926);
}

double NNfunction_ss_sLsR::synapse0x35fb2d0() {
   return (neuron0x35d0e10()*0.863051);
}

double NNfunction_ss_sLsR::synapse0x35fb310() {
   return (neuron0x35d1be0()*-0.548449);
}

double NNfunction_ss_sLsR::synapse0x35fb350() {
   return (neuron0x35d25b0()*0.437899);
}

double NNfunction_ss_sLsR::synapse0x35fb390() {
   return (neuron0x35d2f80()*0.184144);
}

double NNfunction_ss_sLsR::synapse0x35fb3d0() {
   return (neuron0x35d3a60()*-0.363068);
}

double NNfunction_ss_sLsR::synapse0x35fb410() {
   return (neuron0x35d4430()*1.61493);
}

double NNfunction_ss_sLsR::synapse0x35fb450() {
   return (neuron0x35d1510()*0.0891465);
}

double NNfunction_ss_sLsR::synapse0x35fb490() {
   return (neuron0x35d5fe0()*0.954064);
}

double NNfunction_ss_sLsR::synapse0x35fb4d0() {
   return (neuron0x35d69b0()*-0.878387);
}

double NNfunction_ss_sLsR::synapse0x35fb510() {
   return (neuron0x35d7380()*-1.63798);
}

double NNfunction_ss_sLsR::synapse0x35fb550() {
   return (neuron0x35d7d50()*-1.9807);
}

double NNfunction_ss_sLsR::synapse0x35fafe0() {
   return (neuron0x35d9b60()*0.252291);
}

double NNfunction_ss_sLsR::synapse0x35fb020() {
   return (neuron0x35d9e40()*-0.849158);
}

double NNfunction_ss_sLsR::synapse0x35fb6a0() {
   return (neuron0x35da810()*0.433561);
}

double NNfunction_ss_sLsR::synapse0x35fb6e0() {
   return (neuron0x35db1e0()*-3.05544);
}

double NNfunction_ss_sLsR::synapse0x35fb720() {
   return (neuron0x35dbbb0()*0.460621);
}

double NNfunction_ss_sLsR::synapse0x35fb760() {
   return (neuron0x35dc580()*0.667364);
}

double NNfunction_ss_sLsR::synapse0x35fb7a0() {
   return (neuron0x35d50d0()*0.378914);
}

double NNfunction_ss_sLsR::synapse0x35fb7e0() {
   return (neuron0x35d5aa0()*0.630047);
}

double NNfunction_ss_sLsR::synapse0x35fb820() {
   return (neuron0x35df310()*0.0193696);
}

double NNfunction_ss_sLsR::synapse0x35fb860() {
   return (neuron0x35dfce0()*0.559172);
}

double NNfunction_ss_sLsR::synapse0x35fb8a0() {
   return (neuron0x35e06b0()*0.496507);
}

double NNfunction_ss_sLsR::synapse0x35fb8e0() {
   return (neuron0x35e1080()*0.425279);
}

double NNfunction_ss_sLsR::synapse0x35fb920() {
   return (neuron0x35e1a50()*-0.100513);
}

double NNfunction_ss_sLsR::synapse0x35fb960() {
   return (neuron0x35e2420()*0.121227);
}

double NNfunction_ss_sLsR::synapse0x35fb9a0() {
   return (neuron0x35e2df0()*-0.725321);
}

double NNfunction_ss_sLsR::synapse0x35fb9e0() {
   return (neuron0x35e37c0()*0.60636);
}

double NNfunction_ss_sLsR::synapse0x35fb590() {
   return (neuron0x35d9850()*0.519587);
}

double NNfunction_ss_sLsR::synapse0x35fb5d0() {
   return (neuron0x35e63a0()*0.7702);
}

double NNfunction_ss_sLsR::synapse0x35fb610() {
   return (neuron0x35e6d70()*-0.122522);
}

double NNfunction_ss_sLsR::synapse0x35fb650() {
   return (neuron0x35e7740()*-1.15949);
}

double NNfunction_ss_sLsR::synapse0x35fbc30() {
   return (neuron0x35e8110()*0.0266014);
}

double NNfunction_ss_sLsR::synapse0x35fbc70() {
   return (neuron0x35e8ae0()*0.0298287);
}

double NNfunction_ss_sLsR::synapse0x35fbcb0() {
   return (neuron0x35e94b0()*-0.0640612);
}

double NNfunction_ss_sLsR::synapse0x35fbcf0() {
   return (neuron0x35e9e80()*-0.00269616);
}

double NNfunction_ss_sLsR::synapse0x35fbd30() {
   return (neuron0x35ea850()*0.447464);
}

double NNfunction_ss_sLsR::synapse0x35fbd70() {
   return (neuron0x35eb430()*-0.542451);
}

double NNfunction_ss_sLsR::synapse0x35fbdb0() {
   return (neuron0x35ebe00()*0.691202);
}

double NNfunction_ss_sLsR::synapse0x35fbdf0() {
   return (neuron0x35dcc80()*0.370075);
}

double NNfunction_ss_sLsR::synapse0x35fbe30() {
   return (neuron0x35dd650()*-2.13358);
}

double NNfunction_ss_sLsR::synapse0x35fbe70() {
   return (neuron0x35de020()*-0.289154);
}

double NNfunction_ss_sLsR::synapse0x35fbeb0() {
   return (neuron0x35f0660()*0.762555);
}

double NNfunction_ss_sLsR::synapse0x35fbef0() {
   return (neuron0x35f0f10()*5.0046);
}

double NNfunction_ss_sLsR::synapse0x35fbf30() {
   return (neuron0x35f18e0()*-2.06997);
}

double NNfunction_ss_sLsR::synapse0x35fbf70() {
   return (neuron0x35f22b0()*1.93057);
}

double NNfunction_ss_sLsR::synapse0x35fc2f0() {
   return (neuron0x35ce230()*0.364704);
}

double NNfunction_ss_sLsR::synapse0x35fc330() {
   return (neuron0x35ceb80()*-0.415904);
}

double NNfunction_ss_sLsR::synapse0x35fc370() {
   return (neuron0x35cf660()*-4.30806);
}

double NNfunction_ss_sLsR::synapse0x35fc3b0() {
   return (neuron0x35cf100()*-2.66081);
}

double NNfunction_ss_sLsR::synapse0x35fc3f0() {
   return (neuron0x35d0440()*-1.09702);
}

double NNfunction_ss_sLsR::synapse0x35fc430() {
   return (neuron0x35d0e10()*0.273647);
}

double NNfunction_ss_sLsR::synapse0x35fc470() {
   return (neuron0x35d1be0()*-0.734557);
}

double NNfunction_ss_sLsR::synapse0x35fc4b0() {
   return (neuron0x35d25b0()*0.551763);
}

double NNfunction_ss_sLsR::synapse0x35fc4f0() {
   return (neuron0x35d2f80()*-0.867579);
}

double NNfunction_ss_sLsR::synapse0x35fc530() {
   return (neuron0x35d3a60()*0.578214);
}

double NNfunction_ss_sLsR::synapse0x35fc570() {
   return (neuron0x35d4430()*0.141879);
}

double NNfunction_ss_sLsR::synapse0x35fc5b0() {
   return (neuron0x35d1510()*0.601615);
}

double NNfunction_ss_sLsR::synapse0x35fc5f0() {
   return (neuron0x35d5fe0()*-0.788409);
}

double NNfunction_ss_sLsR::synapse0x35fc630() {
   return (neuron0x35d69b0()*-0.453507);
}

double NNfunction_ss_sLsR::synapse0x35fc670() {
   return (neuron0x35d7380()*-0.57664);
}

double NNfunction_ss_sLsR::synapse0x35fc6b0() {
   return (neuron0x35d7d50()*-0.639182);
}

double NNfunction_ss_sLsR::synapse0x35fc140() {
   return (neuron0x35d9b60()*-0.228994);
}

double NNfunction_ss_sLsR::synapse0x35fc180() {
   return (neuron0x35d9e40()*0.618348);
}

double NNfunction_ss_sLsR::synapse0x35fc800() {
   return (neuron0x35da810()*1.43573);
}

double NNfunction_ss_sLsR::synapse0x35fc840() {
   return (neuron0x35db1e0()*-0.191869);
}

double NNfunction_ss_sLsR::synapse0x35fc880() {
   return (neuron0x35dbbb0()*0.653016);
}

double NNfunction_ss_sLsR::synapse0x35fc8c0() {
   return (neuron0x35dc580()*-0.498611);
}

double NNfunction_ss_sLsR::synapse0x35fc900() {
   return (neuron0x35d50d0()*0.485988);
}

double NNfunction_ss_sLsR::synapse0x35fc940() {
   return (neuron0x35d5aa0()*-1.69017);
}

double NNfunction_ss_sLsR::synapse0x35fc980() {
   return (neuron0x35df310()*0.228343);
}

double NNfunction_ss_sLsR::synapse0x35fc9c0() {
   return (neuron0x35dfce0()*-0.322545);
}

double NNfunction_ss_sLsR::synapse0x35fca00() {
   return (neuron0x35e06b0()*-1.30988);
}

double NNfunction_ss_sLsR::synapse0x35fca40() {
   return (neuron0x35e1080()*0.347456);
}

double NNfunction_ss_sLsR::synapse0x35fca80() {
   return (neuron0x35e1a50()*0.299944);
}

double NNfunction_ss_sLsR::synapse0x35fcac0() {
   return (neuron0x35e2420()*-0.106963);
}

double NNfunction_ss_sLsR::synapse0x35fcb00() {
   return (neuron0x35e2df0()*0.00051112);
}

double NNfunction_ss_sLsR::synapse0x35fcb40() {
   return (neuron0x35e37c0()*-0.574293);
}

double NNfunction_ss_sLsR::synapse0x35fc6f0() {
   return (neuron0x35d9850()*0.051713);
}

double NNfunction_ss_sLsR::synapse0x35fc730() {
   return (neuron0x35e63a0()*0.379773);
}

double NNfunction_ss_sLsR::synapse0x35fc770() {
   return (neuron0x35e6d70()*0.777806);
}

double NNfunction_ss_sLsR::synapse0x35fc7b0() {
   return (neuron0x35e7740()*-0.149913);
}

double NNfunction_ss_sLsR::synapse0x35fcd90() {
   return (neuron0x35e8110()*-2.82748);
}

double NNfunction_ss_sLsR::synapse0x35fcdd0() {
   return (neuron0x35e8ae0()*-0.251866);
}

double NNfunction_ss_sLsR::synapse0x35fce10() {
   return (neuron0x35e94b0()*0.581302);
}

double NNfunction_ss_sLsR::synapse0x35fce50() {
   return (neuron0x35e9e80()*0.777803);
}

double NNfunction_ss_sLsR::synapse0x35fce90() {
   return (neuron0x35ea850()*-0.562009);
}

double NNfunction_ss_sLsR::synapse0x35fced0() {
   return (neuron0x35eb430()*1.17105);
}

double NNfunction_ss_sLsR::synapse0x35fcf10() {
   return (neuron0x35ebe00()*-0.556686);
}

double NNfunction_ss_sLsR::synapse0x35fcf50() {
   return (neuron0x35dcc80()*-0.515031);
}

double NNfunction_ss_sLsR::synapse0x35fcf90() {
   return (neuron0x35dd650()*-0.448609);
}

double NNfunction_ss_sLsR::synapse0x35fcfd0() {
   return (neuron0x35de020()*1.21036);
}

double NNfunction_ss_sLsR::synapse0x35fd010() {
   return (neuron0x35f0660()*-1.09733);
}

double NNfunction_ss_sLsR::synapse0x35fd050() {
   return (neuron0x35f0f10()*0.0252583);
}

double NNfunction_ss_sLsR::synapse0x35fd090() {
   return (neuron0x35f18e0()*-2.17112);
}

double NNfunction_ss_sLsR::synapse0x35fd0d0() {
   return (neuron0x35f22b0()*0.962724);
}

double NNfunction_ss_sLsR::synapse0x35fd330() {
   return (neuron0x35f94b0()*-4.12208);
}

double NNfunction_ss_sLsR::synapse0x35fd370() {
   return (neuron0x35f9850()*4.0449);
}

double NNfunction_ss_sLsR::synapse0x35fd3b0() {
   return (neuron0x35f9cf0()*6.06787);
}

double NNfunction_ss_sLsR::synapse0x35fd3f0() {
   return (neuron0x35fae50()*-6.46155);
}

double NNfunction_ss_sLsR::synapse0x35fd430() {
   return (neuron0x35fbfb0()*-4.86396);
}

