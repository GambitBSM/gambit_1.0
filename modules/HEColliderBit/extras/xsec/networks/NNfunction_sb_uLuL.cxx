#include "NNfunction_sb_uLuL.h"
#include <cmath>

double NNfunction_sb_uLuL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.971)/15.0443;
   input1 = (in1 - 61.0585)/718.853;
   input2 = (in2 - 371.999)/457.688;
   input3 = (in3 - 316.658)/624.172;
   input4 = (in4 - 776.265)/670.198;
   input5 = (in5 - 686.12)/650.224;
   input6 = (in6 - 691.902)/654.165;
   input7 = (in7 - 682.941)/647.396;
   input8 = (in8 - 684.837)/679.797;
   input9 = (in9 - 673.897)/663.429;
   input10 = (in10 - 673.808)/682.786;
   input11 = (in11 - 602.487)/353.214;
   input12 = (in12 - 749.592)/583.991;
   input13 = (in13 - 583.882)/374.508;
   input14 = (in14 - 737.665)/548.518;
   input15 = (in15 - 739.623)/549.864;
   input16 = (in16 - 514.231)/381.897;
   input17 = (in17 - 756.443)/601.069;
   input18 = (in18 - 750.875)/597.789;
   input19 = (in19 - 747.093)/586.871;
   input20 = (in20 - -243.677)/427.769;
   input21 = (in21 - -315.615)/904.738;
   input22 = (in22 - -0.578618)/898.371;
   input23 = (in23 - 9.61243)/511.912;
   switch(index) {
     case 0:
         return neuron0x20102e0();
     default:
         return 0.;
   }
}

double NNfunction_sb_uLuL::Value(int index, double* input) {
   input0 = (input[0] - 22.971)/15.0443;
   input1 = (input[1] - 61.0585)/718.853;
   input2 = (input[2] - 371.999)/457.688;
   input3 = (input[3] - 316.658)/624.172;
   input4 = (input[4] - 776.265)/670.198;
   input5 = (input[5] - 686.12)/650.224;
   input6 = (input[6] - 691.902)/654.165;
   input7 = (input[7] - 682.941)/647.396;
   input8 = (input[8] - 684.837)/679.797;
   input9 = (input[9] - 673.897)/663.429;
   input10 = (input[10] - 673.808)/682.786;
   input11 = (input[11] - 602.487)/353.214;
   input12 = (input[12] - 749.592)/583.991;
   input13 = (input[13] - 583.882)/374.508;
   input14 = (input[14] - 737.665)/548.518;
   input15 = (input[15] - 739.623)/549.864;
   input16 = (input[16] - 514.231)/381.897;
   input17 = (input[17] - 756.443)/601.069;
   input18 = (input[18] - 750.875)/597.789;
   input19 = (input[19] - 747.093)/586.871;
   input20 = (input[20] - -243.677)/427.769;
   input21 = (input[21] - -315.615)/904.738;
   input22 = (input[22] - -0.578618)/898.371;
   input23 = (input[23] - 9.61243)/511.912;
   switch(index) {
     case 0:
         return neuron0x20102e0();
     default:
         return 0.;
   }
}

double NNfunction_sb_uLuL::neuron0x1fdc3d0() {
   return input0;
}

double NNfunction_sb_uLuL::neuron0x1fdc710() {
   return input1;
}

double NNfunction_sb_uLuL::neuron0x1fdca50() {
   return input2;
}

double NNfunction_sb_uLuL::neuron0x1fdcd90() {
   return input3;
}

double NNfunction_sb_uLuL::neuron0x1fdd0d0() {
   return input4;
}

double NNfunction_sb_uLuL::neuron0x1fdd410() {
   return input5;
}

double NNfunction_sb_uLuL::neuron0x1fdd750() {
   return input6;
}

double NNfunction_sb_uLuL::neuron0x1fdda90() {
   return input7;
}

double NNfunction_sb_uLuL::neuron0x1fdddd0() {
   return input8;
}

double NNfunction_sb_uLuL::neuron0x1fde110() {
   return input9;
}

double NNfunction_sb_uLuL::neuron0x1fde450() {
   return input10;
}

double NNfunction_sb_uLuL::neuron0x1fde790() {
   return input11;
}

double NNfunction_sb_uLuL::neuron0x1fdead0() {
   return input12;
}

double NNfunction_sb_uLuL::neuron0x1fdee10() {
   return input13;
}

double NNfunction_sb_uLuL::neuron0x1fdf150() {
   return input14;
}

double NNfunction_sb_uLuL::neuron0x1fdf490() {
   return input15;
}

double NNfunction_sb_uLuL::neuron0x1fdf7d0() {
   return input16;
}

double NNfunction_sb_uLuL::neuron0x1fdfd30() {
   return input17;
}

double NNfunction_sb_uLuL::neuron0x1fdff50() {
   return input18;
}

double NNfunction_sb_uLuL::neuron0x1fe0290() {
   return input19;
}

double NNfunction_sb_uLuL::neuron0x1fe05d0() {
   return input20;
}

double NNfunction_sb_uLuL::neuron0x1fe0910() {
   return input21;
}

double NNfunction_sb_uLuL::neuron0x1fe0c50() {
   return input22;
}

double NNfunction_sb_uLuL::neuron0x1fe0f90() {
   return input23;
}

double NNfunction_sb_uLuL::input0x1fe1400() {
   double input = -0.941561;
   input += synapse0x1fdc290();
   input += synapse0x1fdc2d0();
   input += synapse0x1fe16b0();
   input += synapse0x1fe16f0();
   input += synapse0x1fe1730();
   input += synapse0x1fe1770();
   input += synapse0x1fe17b0();
   input += synapse0x1fe17f0();
   input += synapse0x1fe1830();
   input += synapse0x1fe1870();
   input += synapse0x1fe18b0();
   input += synapse0x1fe18f0();
   input += synapse0x1fe1930();
   input += synapse0x1fe1970();
   input += synapse0x1fe19b0();
   input += synapse0x1fe19f0();
   input += synapse0x1fdc200();
   input += synapse0x1fdc240();
   input += synapse0x1d975c0();
   input += synapse0x1d97600();
   input += synapse0x1fe1c50();
   input += synapse0x1fe1c90();
   input += synapse0x1fe1cd0();
   input += synapse0x1fe1d10();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1fe1400() {
   double input = input0x1fe1400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1fe1d50() {
   double input = -3.63531;
   input += synapse0x1fe2090();
   input += synapse0x1fe20d0();
   input += synapse0x1fe2110();
   input += synapse0x1fe2150();
   input += synapse0x1fe2190();
   input += synapse0x1fe21d0();
   input += synapse0x1fe2210();
   input += synapse0x1fe2250();
   input += synapse0x1fe2290();
   input += synapse0x1fe1b40();
   input += synapse0x1fe1b80();
   input += synapse0x1fe1bc0();
   input += synapse0x1fe1c00();
   input += synapse0x1fe24e0();
   input += synapse0x1fe2520();
   input += synapse0x1fe2560();
   input += synapse0x1fe1ee0();
   input += synapse0x1fe1f20();
   input += synapse0x1fe26b0();
   input += synapse0x1fe26f0();
   input += synapse0x1fe2730();
   input += synapse0x1fe2770();
   input += synapse0x1fe27b0();
   input += synapse0x1fe27f0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1fe1d50() {
   double input = input0x1fe1d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1fe2830() {
   double input = -0.891088;
   input += synapse0x1fe2b70();
   input += synapse0x1fe2bb0();
   input += synapse0x1fe2bf0();
   input += synapse0x1fe2c30();
   input += synapse0x1fe2c70();
   input += synapse0x1fe2cb0();
   input += synapse0x1fe2cf0();
   input += synapse0x1fe2d30();
   input += synapse0x1fe2d70();
   input += synapse0x1fe2db0();
   input += synapse0x1fe2df0();
   input += synapse0x1fe2e30();
   input += synapse0x1fe2e70();
   input += synapse0x1fe2eb0();
   input += synapse0x1fe2ef0();
   input += synapse0x1fe2f30();
   input += synapse0x1fe29c0();
   input += synapse0x1fe2a00();
   input += synapse0x1d97c60();
   input += synapse0x1da5530();
   input += synapse0x1da5570();
   input += synapse0x1fcb460();
   input += synapse0x1fcb4a0();
   input += synapse0x1fcb4e0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1fe2830() {
   double input = input0x1fe2830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1fe22d0() {
   double input = 0.51117;
   input += synapse0x1da5db0();
   input += synapse0x1fe2460();
   input += synapse0x1fe24a0();
   input += synapse0x1fe3080();
   input += synapse0x1fe30c0();
   input += synapse0x1fe3100();
   input += synapse0x1fe3140();
   input += synapse0x1fe3180();
   input += synapse0x1fe31c0();
   input += synapse0x1fe3200();
   input += synapse0x1fe3240();
   input += synapse0x1fe3280();
   input += synapse0x1fe32c0();
   input += synapse0x1fe3300();
   input += synapse0x1fe3340();
   input += synapse0x1fe3380();
   input += synapse0x1fdc310();
   input += synapse0x1fdc350();
   input += synapse0x1fdc390();
   input += synapse0x1fe34d0();
   input += synapse0x1fe3510();
   input += synapse0x1fe3550();
   input += synapse0x1fe3590();
   input += synapse0x1fe35d0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1fe22d0() {
   double input = input0x1fe22d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1fe3610() {
   double input = 0.822491;
   input += synapse0x1fe3950();
   input += synapse0x1fe3990();
   input += synapse0x1fe39d0();
   input += synapse0x1fe3a10();
   input += synapse0x1fe3a50();
   input += synapse0x1fe3a90();
   input += synapse0x1fe3ad0();
   input += synapse0x1fe3b10();
   input += synapse0x1fe3b50();
   input += synapse0x1fe3b90();
   input += synapse0x1fe3bd0();
   input += synapse0x1fe3c10();
   input += synapse0x1fe3c50();
   input += synapse0x1fe3c90();
   input += synapse0x1fe3cd0();
   input += synapse0x1fe3d10();
   input += synapse0x1fe37a0();
   input += synapse0x1fe37e0();
   input += synapse0x1fe3e60();
   input += synapse0x1fe3ea0();
   input += synapse0x1fe3ee0();
   input += synapse0x1fe3f20();
   input += synapse0x1fe3f60();
   input += synapse0x1fe3fa0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1fe3610() {
   double input = input0x1fe3610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1fe3fe0() {
   double input = 0.316087;
   input += synapse0x1fe4320();
   input += synapse0x1fe4360();
   input += synapse0x1fe43a0();
   input += synapse0x1fe43e0();
   input += synapse0x1fe4420();
   input += synapse0x1fe4460();
   input += synapse0x1fe44a0();
   input += synapse0x1fe44e0();
   input += synapse0x1fe4520();
   input += synapse0x1da5880();
   input += synapse0x1da58c0();
   input += synapse0x1da5900();
   input += synapse0x1da5940();
   input += synapse0x1da5980();
   input += synapse0x1da59c0();
   input += synapse0x1da5a00();
   input += synapse0x1fe4170();
   input += synapse0x1fe41b0();
   input += synapse0x1da5b50();
   input += synapse0x1da5b90();
   input += synapse0x1da5bd0();
   input += synapse0x1da5c10();
   input += synapse0x1da5c50();
   input += synapse0x1fe4d70();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1fe3fe0() {
   double input = input0x1fe3fe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1fe4db0() {
   double input = -1.17262;
   input += synapse0x1fe50f0();
   input += synapse0x1fe5130();
   input += synapse0x1fe5170();
   input += synapse0x1fe51b0();
   input += synapse0x1fe51f0();
   input += synapse0x1fe5230();
   input += synapse0x1fe5270();
   input += synapse0x1fe52b0();
   input += synapse0x1fe52f0();
   input += synapse0x1fe5330();
   input += synapse0x1fe5370();
   input += synapse0x1fe53b0();
   input += synapse0x1fe53f0();
   input += synapse0x1fe5430();
   input += synapse0x1fe5470();
   input += synapse0x1fe54b0();
   input += synapse0x1fe4f40();
   input += synapse0x1fe4f80();
   input += synapse0x1fe5600();
   input += synapse0x1fe5640();
   input += synapse0x1fe5680();
   input += synapse0x1fe56c0();
   input += synapse0x1fe5700();
   input += synapse0x1fe5740();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1fe4db0() {
   double input = input0x1fe4db0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1fe5780() {
   double input = 0.253343;
   input += synapse0x1fe5ac0();
   input += synapse0x1fe5b00();
   input += synapse0x1fe5b40();
   input += synapse0x1fe5b80();
   input += synapse0x1fe5bc0();
   input += synapse0x1fe5c00();
   input += synapse0x1fe5c40();
   input += synapse0x1fe5c80();
   input += synapse0x1fe5cc0();
   input += synapse0x1fe5d00();
   input += synapse0x1fe5d40();
   input += synapse0x1fe5d80();
   input += synapse0x1fe5dc0();
   input += synapse0x1fe5e00();
   input += synapse0x1fe5e40();
   input += synapse0x1fe5e80();
   input += synapse0x1fe5910();
   input += synapse0x1fe5950();
   input += synapse0x1fe5fd0();
   input += synapse0x1fe6010();
   input += synapse0x1fe6050();
   input += synapse0x1fe6090();
   input += synapse0x1fe60d0();
   input += synapse0x1fe6110();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1fe5780() {
   double input = input0x1fe5780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1fe6150() {
   double input = -1.66577;
   input += synapse0x1fdfc20();
   input += synapse0x1fdfc60();
   input += synapse0x1fdfca0();
   input += synapse0x1fdfce0();
   input += synapse0x1fe66a0();
   input += synapse0x1fe66e0();
   input += synapse0x1fe6720();
   input += synapse0x1fe6760();
   input += synapse0x1fe67a0();
   input += synapse0x1fe67e0();
   input += synapse0x1fe6820();
   input += synapse0x1fe6860();
   input += synapse0x1fe68a0();
   input += synapse0x1fe68e0();
   input += synapse0x1fe6920();
   input += synapse0x1fe6960();
   input += synapse0x1fe62e0();
   input += synapse0x1fe6320();
   input += synapse0x1fe6ab0();
   input += synapse0x1fe6af0();
   input += synapse0x1fe6b30();
   input += synapse0x1fe6b70();
   input += synapse0x1fe6bb0();
   input += synapse0x1fe6bf0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1fe6150() {
   double input = input0x1fe6150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1fe6c30() {
   double input = -0.579329;
   input += synapse0x1fe6f70();
   input += synapse0x1fe6fb0();
   input += synapse0x1fe6ff0();
   input += synapse0x1fe7030();
   input += synapse0x1fe7070();
   input += synapse0x1fe70b0();
   input += synapse0x1fe70f0();
   input += synapse0x1fe7130();
   input += synapse0x1fe7170();
   input += synapse0x1fe71b0();
   input += synapse0x1fe71f0();
   input += synapse0x1fe7230();
   input += synapse0x1fe7270();
   input += synapse0x1fe72b0();
   input += synapse0x1fe72f0();
   input += synapse0x1fe7330();
   input += synapse0x1fe6dc0();
   input += synapse0x1fe6e00();
   input += synapse0x1fe7480();
   input += synapse0x1fe74c0();
   input += synapse0x1fe7500();
   input += synapse0x1fe7540();
   input += synapse0x1fe7580();
   input += synapse0x1fe75c0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1fe6c30() {
   double input = input0x1fe6c30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1fe7600() {
   double input = -1.30061;
   input += synapse0x1fe7940();
   input += synapse0x1fe7980();
   input += synapse0x1fe79c0();
   input += synapse0x1fe7a00();
   input += synapse0x1fe7a40();
   input += synapse0x1fe7a80();
   input += synapse0x1fe7ac0();
   input += synapse0x1fe7b00();
   input += synapse0x1fe7b40();
   input += synapse0x1fe7b80();
   input += synapse0x1fe7bc0();
   input += synapse0x1fe7c00();
   input += synapse0x1fe7c40();
   input += synapse0x1fe7c80();
   input += synapse0x1fe7cc0();
   input += synapse0x1fe7d00();
   input += synapse0x1fe7790();
   input += synapse0x1fe77d0();
   input += synapse0x1fe4560();
   input += synapse0x1fe45a0();
   input += synapse0x1fe45e0();
   input += synapse0x1fe4620();
   input += synapse0x1fe4660();
   input += synapse0x1fe46a0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1fe7600() {
   double input = input0x1fe7600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1fe46e0() {
   double input = -0.110292;
   input += synapse0x1fe4a20();
   input += synapse0x1fe4a60();
   input += synapse0x1fe4aa0();
   input += synapse0x1fe4ae0();
   input += synapse0x1fe4b20();
   input += synapse0x1fe4b60();
   input += synapse0x1fe4ba0();
   input += synapse0x1fe4be0();
   input += synapse0x1fe4c20();
   input += synapse0x1fe4c60();
   input += synapse0x1fe4ca0();
   input += synapse0x1fe4ce0();
   input += synapse0x1fe4d20();
   input += synapse0x1fe8e60();
   input += synapse0x1fe8ea0();
   input += synapse0x1fe8ee0();
   input += synapse0x1fe4870();
   input += synapse0x1fe48b0();
   input += synapse0x1fe9030();
   input += synapse0x1fe9070();
   input += synapse0x1fe90b0();
   input += synapse0x1fe90f0();
   input += synapse0x1fe9130();
   input += synapse0x1fe9170();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1fe46e0() {
   double input = input0x1fe46e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1fe91b0() {
   double input = 1.70068;
   input += synapse0x1fe94f0();
   input += synapse0x1fe9530();
   input += synapse0x1fe9570();
   input += synapse0x1fe95b0();
   input += synapse0x1fe95f0();
   input += synapse0x1fe9630();
   input += synapse0x1fe9670();
   input += synapse0x1fe96b0();
   input += synapse0x1fe96f0();
   input += synapse0x1fe9730();
   input += synapse0x1fe9770();
   input += synapse0x1fe97b0();
   input += synapse0x1fe97f0();
   input += synapse0x1fe9830();
   input += synapse0x1fe9870();
   input += synapse0x1fe98b0();
   input += synapse0x1fe9340();
   input += synapse0x1fe9380();
   input += synapse0x1fe9a00();
   input += synapse0x1fe9a40();
   input += synapse0x1fe9a80();
   input += synapse0x1fe9ac0();
   input += synapse0x1fe9b00();
   input += synapse0x1fe9b40();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1fe91b0() {
   double input = input0x1fe91b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1fe9b80() {
   double input = 0.37258;
   input += synapse0x1fe9ec0();
   input += synapse0x1fe9f00();
   input += synapse0x1fe9f40();
   input += synapse0x1fe9f80();
   input += synapse0x1fe9fc0();
   input += synapse0x1fea000();
   input += synapse0x1fea040();
   input += synapse0x1fea080();
   input += synapse0x1fea0c0();
   input += synapse0x1fea100();
   input += synapse0x1fea140();
   input += synapse0x1fea180();
   input += synapse0x1fea1c0();
   input += synapse0x1fea200();
   input += synapse0x1fea240();
   input += synapse0x1fea280();
   input += synapse0x1fe9d10();
   input += synapse0x1fe9d50();
   input += synapse0x1fea3d0();
   input += synapse0x1fea410();
   input += synapse0x1fea450();
   input += synapse0x1fea490();
   input += synapse0x1fea4d0();
   input += synapse0x1fea510();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1fe9b80() {
   double input = input0x1fe9b80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1fea550() {
   double input = -0.0166202;
   input += synapse0x1fea890();
   input += synapse0x1fea8d0();
   input += synapse0x1fea910();
   input += synapse0x1fea950();
   input += synapse0x1fea990();
   input += synapse0x1fea9d0();
   input += synapse0x1feaa10();
   input += synapse0x1feaa50();
   input += synapse0x1feaa90();
   input += synapse0x1feaad0();
   input += synapse0x1feab10();
   input += synapse0x1feab50();
   input += synapse0x1feab90();
   input += synapse0x1feabd0();
   input += synapse0x1feac10();
   input += synapse0x1feac50();
   input += synapse0x1fea6e0();
   input += synapse0x1fea720();
   input += synapse0x1feada0();
   input += synapse0x1feade0();
   input += synapse0x1feae20();
   input += synapse0x1feae60();
   input += synapse0x1feaea0();
   input += synapse0x1feaee0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1fea550() {
   double input = input0x1fea550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1feaf20() {
   double input = -5.25758;
   input += synapse0x1feb260();
   input += synapse0x1fdc5f0();
   input += synapse0x1fdc630();
   input += synapse0x1fdc930();
   input += synapse0x1fdc970();
   input += synapse0x1fdcc70();
   input += synapse0x1fdccb0();
   input += synapse0x1fdcfb0();
   input += synapse0x1fdcff0();
   input += synapse0x1fdd2f0();
   input += synapse0x1fdd330();
   input += synapse0x1fdd630();
   input += synapse0x1fdd670();
   input += synapse0x1fdd970();
   input += synapse0x1fdd9b0();
   input += synapse0x1fddcb0();
   input += synapse0x1fddcf0();
   input += synapse0x1fddff0();
   input += synapse0x1fde030();
   input += synapse0x1fde330();
   input += synapse0x1fde370();
   input += synapse0x1fde670();
   input += synapse0x1fde6b0();
   input += synapse0x1fde9b0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1feaf20() {
   double input = input0x1feaf20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1fecd30() {
   double input = -0.460015;
   input += synapse0x1fde9f0();
   input += synapse0x1fdf6b0();
   input += synapse0x1fdf6f0();
   input += synapse0x1feb0b0();
   input += synapse0x1feb0f0();
   input += synapse0x1fdf9f0();
   input += synapse0x1fdfa30();
   input += synapse0x1d974a0();
   input += synapse0x1d974e0();
   input += synapse0x1fe0170();
   input += synapse0x1fe01b0();
   input += synapse0x1fe04b0();
   input += synapse0x1fe04f0();
   input += synapse0x1fe07f0();
   input += synapse0x1fe0830();
   input += synapse0x1fe0b30();
   input += synapse0x1fe0b70();
   input += synapse0x1fe0e70();
   input += synapse0x1fe0eb0();
   input += synapse0x1fe11b0();
   input += synapse0x1fe11f0();
   input += synapse0x1fdecf0();
   input += synapse0x1fded30();
   input += synapse0x1fecfd0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1fecd30() {
   double input = input0x1fecd30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1fed010() {
   double input = -0.19681;
   input += synapse0x1fed350();
   input += synapse0x1fed390();
   input += synapse0x1fed3d0();
   input += synapse0x1fed410();
   input += synapse0x1fed450();
   input += synapse0x1fed490();
   input += synapse0x1fed4d0();
   input += synapse0x1fed510();
   input += synapse0x1fed550();
   input += synapse0x1fed590();
   input += synapse0x1fed5d0();
   input += synapse0x1fed610();
   input += synapse0x1fed650();
   input += synapse0x1fed690();
   input += synapse0x1fed6d0();
   input += synapse0x1fed710();
   input += synapse0x1fed1a0();
   input += synapse0x1fed1e0();
   input += synapse0x1fed860();
   input += synapse0x1fed8a0();
   input += synapse0x1fed8e0();
   input += synapse0x1fed920();
   input += synapse0x1fed960();
   input += synapse0x1fed9a0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1fed010() {
   double input = input0x1fed010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1fed9e0() {
   double input = 1.99421;
   input += synapse0x1fedd20();
   input += synapse0x1fedd60();
   input += synapse0x1fedda0();
   input += synapse0x1fedde0();
   input += synapse0x1fede20();
   input += synapse0x1fede60();
   input += synapse0x1fedea0();
   input += synapse0x1fedee0();
   input += synapse0x1fedf20();
   input += synapse0x1fedf60();
   input += synapse0x1fedfa0();
   input += synapse0x1fedfe0();
   input += synapse0x1fee020();
   input += synapse0x1fee060();
   input += synapse0x1fee0a0();
   input += synapse0x1fee0e0();
   input += synapse0x1fedb70();
   input += synapse0x1fedbb0();
   input += synapse0x1fee230();
   input += synapse0x1fee270();
   input += synapse0x1fee2b0();
   input += synapse0x1fee2f0();
   input += synapse0x1fee330();
   input += synapse0x1fee370();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1fed9e0() {
   double input = input0x1fed9e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1fee3b0() {
   double input = 0.971344;
   input += synapse0x1fee6f0();
   input += synapse0x1fee730();
   input += synapse0x1fee770();
   input += synapse0x1fee7b0();
   input += synapse0x1fee7f0();
   input += synapse0x1fee830();
   input += synapse0x1fee870();
   input += synapse0x1fee8b0();
   input += synapse0x1fee8f0();
   input += synapse0x1fee930();
   input += synapse0x1fee970();
   input += synapse0x1fee9b0();
   input += synapse0x1fee9f0();
   input += synapse0x1feea30();
   input += synapse0x1feea70();
   input += synapse0x1feeab0();
   input += synapse0x1fee540();
   input += synapse0x1fee580();
   input += synapse0x1feec00();
   input += synapse0x1feec40();
   input += synapse0x1feec80();
   input += synapse0x1feecc0();
   input += synapse0x1feed00();
   input += synapse0x1feed40();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1fee3b0() {
   double input = input0x1fee3b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1feed80() {
   double input = 0.126951;
   input += synapse0x1fef0c0();
   input += synapse0x1fef100();
   input += synapse0x1fef140();
   input += synapse0x1fef180();
   input += synapse0x1fef1c0();
   input += synapse0x1fef200();
   input += synapse0x1fef240();
   input += synapse0x1fef280();
   input += synapse0x1fef2c0();
   input += synapse0x1fef300();
   input += synapse0x1fef340();
   input += synapse0x1fef380();
   input += synapse0x1fef3c0();
   input += synapse0x1fef400();
   input += synapse0x1fef440();
   input += synapse0x1fef480();
   input += synapse0x1feef10();
   input += synapse0x1feef50();
   input += synapse0x1fef5d0();
   input += synapse0x1fef610();
   input += synapse0x1fef650();
   input += synapse0x1fef690();
   input += synapse0x1fef6d0();
   input += synapse0x1fef710();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1feed80() {
   double input = input0x1feed80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1fef750() {
   double input = 0.818558;
   input += synapse0x1fefa90();
   input += synapse0x1fefad0();
   input += synapse0x1fefb10();
   input += synapse0x1fefb50();
   input += synapse0x1fefb90();
   input += synapse0x1fefbd0();
   input += synapse0x1fefc10();
   input += synapse0x1fefc50();
   input += synapse0x1fefc90();
   input += synapse0x1fe7e50();
   input += synapse0x1fe7e90();
   input += synapse0x1fe7ed0();
   input += synapse0x1fe7f10();
   input += synapse0x1fe7f50();
   input += synapse0x1fe7f90();
   input += synapse0x1fe7fd0();
   input += synapse0x1fef8e0();
   input += synapse0x1fef920();
   input += synapse0x1fe8120();
   input += synapse0x1fe8160();
   input += synapse0x1fe81a0();
   input += synapse0x1fe81e0();
   input += synapse0x1fe8220();
   input += synapse0x1fe8260();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1fef750() {
   double input = input0x1fef750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1fe82a0() {
   double input = -1.14136;
   input += synapse0x1fe85e0();
   input += synapse0x1fe8620();
   input += synapse0x1fe8660();
   input += synapse0x1fe86a0();
   input += synapse0x1fe86e0();
   input += synapse0x1fe8720();
   input += synapse0x1fe8760();
   input += synapse0x1fe87a0();
   input += synapse0x1fe87e0();
   input += synapse0x1fe8820();
   input += synapse0x1fe8860();
   input += synapse0x1fe88a0();
   input += synapse0x1fe88e0();
   input += synapse0x1fe8920();
   input += synapse0x1fe8960();
   input += synapse0x1fe89a0();
   input += synapse0x1fe8430();
   input += synapse0x1fe8470();
   input += synapse0x1fe8af0();
   input += synapse0x1fe8b30();
   input += synapse0x1fe8b70();
   input += synapse0x1fe8bb0();
   input += synapse0x1fe8bf0();
   input += synapse0x1fe8c30();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1fe82a0() {
   double input = input0x1fe82a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1fe8c70() {
   double input = 0.00645812;
   input += synapse0x1fe8e00();
   input += synapse0x1ff1e90();
   input += synapse0x1ff1ed0();
   input += synapse0x1ff1f10();
   input += synapse0x1ff1f50();
   input += synapse0x1ff1f90();
   input += synapse0x1ff1fd0();
   input += synapse0x1ff2010();
   input += synapse0x1ff2050();
   input += synapse0x1ff2090();
   input += synapse0x1ff20d0();
   input += synapse0x1ff2110();
   input += synapse0x1ff2150();
   input += synapse0x1ff2190();
   input += synapse0x1ff21d0();
   input += synapse0x1ff2210();
   input += synapse0x1ff1ce0();
   input += synapse0x1ff1d20();
   input += synapse0x1ff2360();
   input += synapse0x1ff23a0();
   input += synapse0x1ff23e0();
   input += synapse0x1ff2420();
   input += synapse0x1ff2460();
   input += synapse0x1ff24a0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1fe8c70() {
   double input = input0x1fe8c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1ff24e0() {
   double input = -1.00818;
   input += synapse0x1ff2820();
   input += synapse0x1ff2860();
   input += synapse0x1ff28a0();
   input += synapse0x1ff28e0();
   input += synapse0x1ff2920();
   input += synapse0x1ff2960();
   input += synapse0x1ff29a0();
   input += synapse0x1ff29e0();
   input += synapse0x1ff2a20();
   input += synapse0x1ff2a60();
   input += synapse0x1ff2aa0();
   input += synapse0x1ff2ae0();
   input += synapse0x1ff2b20();
   input += synapse0x1ff2b60();
   input += synapse0x1ff2ba0();
   input += synapse0x1ff2be0();
   input += synapse0x1ff2670();
   input += synapse0x1ff26b0();
   input += synapse0x1ff2d30();
   input += synapse0x1ff2d70();
   input += synapse0x1ff2db0();
   input += synapse0x1ff2df0();
   input += synapse0x1ff2e30();
   input += synapse0x1ff2e70();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1ff24e0() {
   double input = input0x1ff24e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1ff2eb0() {
   double input = -2.61126;
   input += synapse0x1ff31f0();
   input += synapse0x1ff3230();
   input += synapse0x1ff3270();
   input += synapse0x1ff32b0();
   input += synapse0x1ff32f0();
   input += synapse0x1ff3330();
   input += synapse0x1ff3370();
   input += synapse0x1ff33b0();
   input += synapse0x1ff33f0();
   input += synapse0x1ff3430();
   input += synapse0x1ff3470();
   input += synapse0x1ff34b0();
   input += synapse0x1ff34f0();
   input += synapse0x1ff3530();
   input += synapse0x1ff3570();
   input += synapse0x1ff35b0();
   input += synapse0x1ff3040();
   input += synapse0x1ff3080();
   input += synapse0x1ff3700();
   input += synapse0x1ff3740();
   input += synapse0x1ff3780();
   input += synapse0x1ff37c0();
   input += synapse0x1ff3800();
   input += synapse0x1ff3840();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1ff2eb0() {
   double input = input0x1ff2eb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1ff3880() {
   double input = -1.20331;
   input += synapse0x1ff3bc0();
   input += synapse0x1ff3c00();
   input += synapse0x1ff3c40();
   input += synapse0x1ff3c80();
   input += synapse0x1ff3cc0();
   input += synapse0x1ff3d00();
   input += synapse0x1ff3d40();
   input += synapse0x1ff3d80();
   input += synapse0x1ff3dc0();
   input += synapse0x1ff3e00();
   input += synapse0x1ff3e40();
   input += synapse0x1ff3e80();
   input += synapse0x1ff3ec0();
   input += synapse0x1ff3f00();
   input += synapse0x1ff3f40();
   input += synapse0x1ff3f80();
   input += synapse0x1ff3a10();
   input += synapse0x1ff3a50();
   input += synapse0x1ff40d0();
   input += synapse0x1ff4110();
   input += synapse0x1ff4150();
   input += synapse0x1ff4190();
   input += synapse0x1ff41d0();
   input += synapse0x1ff4210();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1ff3880() {
   double input = input0x1ff3880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1ff4250() {
   double input = 3.66581;
   input += synapse0x1ff4590();
   input += synapse0x1ff45d0();
   input += synapse0x1ff4610();
   input += synapse0x1ff4650();
   input += synapse0x1ff4690();
   input += synapse0x1ff46d0();
   input += synapse0x1ff4710();
   input += synapse0x1ff4750();
   input += synapse0x1ff4790();
   input += synapse0x1ff47d0();
   input += synapse0x1ff4810();
   input += synapse0x1ff4850();
   input += synapse0x1ff4890();
   input += synapse0x1ff48d0();
   input += synapse0x1ff4910();
   input += synapse0x1ff4950();
   input += synapse0x1ff43e0();
   input += synapse0x1ff4420();
   input += synapse0x1ff4aa0();
   input += synapse0x1ff4ae0();
   input += synapse0x1ff4b20();
   input += synapse0x1ff4b60();
   input += synapse0x1ff4ba0();
   input += synapse0x1ff4be0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1ff4250() {
   double input = input0x1ff4250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1ff4c20() {
   double input = -1.43275;
   input += synapse0x1ff4f60();
   input += synapse0x1ff4fa0();
   input += synapse0x1ff4fe0();
   input += synapse0x1ff5020();
   input += synapse0x1ff5060();
   input += synapse0x1ff50a0();
   input += synapse0x1ff50e0();
   input += synapse0x1ff5120();
   input += synapse0x1ff5160();
   input += synapse0x1ff51a0();
   input += synapse0x1ff51e0();
   input += synapse0x1ff5220();
   input += synapse0x1ff5260();
   input += synapse0x1ff52a0();
   input += synapse0x1ff52e0();
   input += synapse0x1ff5320();
   input += synapse0x1ff4db0();
   input += synapse0x1ff4df0();
   input += synapse0x1ff5470();
   input += synapse0x1ff54b0();
   input += synapse0x1ff54f0();
   input += synapse0x1ff5530();
   input += synapse0x1ff5570();
   input += synapse0x1ff55b0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1ff4c20() {
   double input = input0x1ff4c20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1ff55f0() {
   double input = -0.0157362;
   input += synapse0x1ff5930();
   input += synapse0x1ff5970();
   input += synapse0x1ff59b0();
   input += synapse0x1ff59f0();
   input += synapse0x1ff5a30();
   input += synapse0x1ff5a70();
   input += synapse0x1ff5ab0();
   input += synapse0x1ff5af0();
   input += synapse0x1ff5b30();
   input += synapse0x1ff5b70();
   input += synapse0x1ff5bb0();
   input += synapse0x1ff5bf0();
   input += synapse0x1ff5c30();
   input += synapse0x1ff5c70();
   input += synapse0x1ff5cb0();
   input += synapse0x1ff5cf0();
   input += synapse0x1ff5780();
   input += synapse0x1ff57c0();
   input += synapse0x1ff5e40();
   input += synapse0x1ff5e80();
   input += synapse0x1ff5ec0();
   input += synapse0x1ff5f00();
   input += synapse0x1ff5f40();
   input += synapse0x1ff5f80();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1ff55f0() {
   double input = input0x1ff55f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1ff5fc0() {
   double input = 1.17863;
   input += synapse0x1ff6300();
   input += synapse0x1ff6340();
   input += synapse0x1ff6380();
   input += synapse0x1ff63c0();
   input += synapse0x1ff6400();
   input += synapse0x1ff6440();
   input += synapse0x1ff6480();
   input += synapse0x1ff64c0();
   input += synapse0x1ff6500();
   input += synapse0x1ff6540();
   input += synapse0x1ff6580();
   input += synapse0x1ff65c0();
   input += synapse0x1ff6600();
   input += synapse0x1ff6640();
   input += synapse0x1ff6680();
   input += synapse0x1ff66c0();
   input += synapse0x1ff6150();
   input += synapse0x1ff6190();
   input += synapse0x1ff6810();
   input += synapse0x1ff6850();
   input += synapse0x1ff6890();
   input += synapse0x1ff68d0();
   input += synapse0x1ff6910();
   input += synapse0x1ff6950();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1ff5fc0() {
   double input = input0x1ff5fc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1ff6990() {
   double input = 0.233846;
   input += synapse0x1ff6cd0();
   input += synapse0x1feb2a0();
   input += synapse0x1feb2e0();
   input += synapse0x1feb320();
   input += synapse0x1feb570();
   input += synapse0x1feb5b0();
   input += synapse0x1feb5f0();
   input += synapse0x1feb840();
   input += synapse0x1feb880();
   input += synapse0x1febad0();
   input += synapse0x1febb10();
   input += synapse0x1febb50();
   input += synapse0x1febda0();
   input += synapse0x1febde0();
   input += synapse0x1fec030();
   input += synapse0x1fec070();
   input += synapse0x1ff6b20();
   input += synapse0x1ff6b60();
   input += synapse0x1fec1c0();
   input += synapse0x1fec6d0();
   input += synapse0x1fec710();
   input += synapse0x1fec750();
   input += synapse0x1fec9a0();
   input += synapse0x1fec9e0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1ff6990() {
   double input = input0x1ff6990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1feca20() {
   double input = -2.72218;
   input += synapse0x1fec290();
   input += synapse0x1fec2d0();
   input += synapse0x1fec310();
   input += synapse0x1fec350();
   input += synapse0x1feccd0();
   input += synapse0x1ff9020();
   input += synapse0x1ff9060();
   input += synapse0x1ff90a0();
   input += synapse0x1ff90e0();
   input += synapse0x1ff9120();
   input += synapse0x1ff9160();
   input += synapse0x1ff91a0();
   input += synapse0x1ff91e0();
   input += synapse0x1ff9220();
   input += synapse0x1ff9260();
   input += synapse0x1ff92a0();
   input += synapse0x1fecbb0();
   input += synapse0x1fecbf0();
   input += synapse0x1ff93f0();
   input += synapse0x1ff9430();
   input += synapse0x1ff9470();
   input += synapse0x1ff94b0();
   input += synapse0x1ff94f0();
   input += synapse0x1ff9530();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1feca20() {
   double input = input0x1feca20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1ff9570() {
   double input = 0.524894;
   input += synapse0x1ff98b0();
   input += synapse0x1ff98f0();
   input += synapse0x1ff9930();
   input += synapse0x1ff9970();
   input += synapse0x1ff99b0();
   input += synapse0x1ff99f0();
   input += synapse0x1ff9a30();
   input += synapse0x1ff9a70();
   input += synapse0x1ff9ab0();
   input += synapse0x1ff9af0();
   input += synapse0x1ff9b30();
   input += synapse0x1ff9b70();
   input += synapse0x1ff9bb0();
   input += synapse0x1ff9bf0();
   input += synapse0x1ff9c30();
   input += synapse0x1ff9c70();
   input += synapse0x1ff9700();
   input += synapse0x1ff9740();
   input += synapse0x1ff9dc0();
   input += synapse0x1ff9e00();
   input += synapse0x1ff9e40();
   input += synapse0x1ff9e80();
   input += synapse0x1ff9ec0();
   input += synapse0x1ff9f00();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1ff9570() {
   double input = input0x1ff9570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1ff9f40() {
   double input = 0.289621;
   input += synapse0x1ffa280();
   input += synapse0x1ffa2c0();
   input += synapse0x1ffa300();
   input += synapse0x1ffa340();
   input += synapse0x1ffa380();
   input += synapse0x1ffa3c0();
   input += synapse0x1ffa400();
   input += synapse0x1ffa440();
   input += synapse0x1ffa480();
   input += synapse0x1ffa4c0();
   input += synapse0x1ffa500();
   input += synapse0x1ffa540();
   input += synapse0x1ffa580();
   input += synapse0x1ffa5c0();
   input += synapse0x1ffa600();
   input += synapse0x1ffa640();
   input += synapse0x1ffa0d0();
   input += synapse0x1ffa110();
   input += synapse0x1ffa790();
   input += synapse0x1ffa7d0();
   input += synapse0x1ffa810();
   input += synapse0x1ffa850();
   input += synapse0x1ffa890();
   input += synapse0x1ffa8d0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1ff9f40() {
   double input = input0x1ff9f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1ffa910() {
   double input = 0.23375;
   input += synapse0x1ffac50();
   input += synapse0x1ffac90();
   input += synapse0x1ffacd0();
   input += synapse0x1ffad10();
   input += synapse0x1ffad50();
   input += synapse0x1ffad90();
   input += synapse0x1ffadd0();
   input += synapse0x1ffae10();
   input += synapse0x1ffae50();
   input += synapse0x1ffae90();
   input += synapse0x1ffaed0();
   input += synapse0x1ffaf10();
   input += synapse0x1ffaf50();
   input += synapse0x1ffaf90();
   input += synapse0x1ffafd0();
   input += synapse0x1ffb010();
   input += synapse0x1ffaaa0();
   input += synapse0x1ffaae0();
   input += synapse0x1ffb160();
   input += synapse0x1ffb1a0();
   input += synapse0x1ffb1e0();
   input += synapse0x1ffb220();
   input += synapse0x1ffb260();
   input += synapse0x1ffb2a0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1ffa910() {
   double input = input0x1ffa910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1ffb2e0() {
   double input = -0.687575;
   input += synapse0x1ffb620();
   input += synapse0x1ffb660();
   input += synapse0x1ffb6a0();
   input += synapse0x1ffb6e0();
   input += synapse0x1ffb720();
   input += synapse0x1ffb760();
   input += synapse0x1ffb7a0();
   input += synapse0x1ffb7e0();
   input += synapse0x1ffb820();
   input += synapse0x1ffb860();
   input += synapse0x1ffb8a0();
   input += synapse0x1ffb8e0();
   input += synapse0x1ffb920();
   input += synapse0x1ffb960();
   input += synapse0x1ffb9a0();
   input += synapse0x1ffb9e0();
   input += synapse0x1ffb470();
   input += synapse0x1ffb4b0();
   input += synapse0x1ffbb30();
   input += synapse0x1ffbb70();
   input += synapse0x1ffbbb0();
   input += synapse0x1ffbbf0();
   input += synapse0x1ffbc30();
   input += synapse0x1ffbc70();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1ffb2e0() {
   double input = input0x1ffb2e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1ffbcb0() {
   double input = -1.91721;
   input += synapse0x1ffbff0();
   input += synapse0x1ffc030();
   input += synapse0x1ffc070();
   input += synapse0x1ffc0b0();
   input += synapse0x1ffc0f0();
   input += synapse0x1ffc130();
   input += synapse0x1ffc170();
   input += synapse0x1ffc1b0();
   input += synapse0x1ffc1f0();
   input += synapse0x1ffc230();
   input += synapse0x1ffc270();
   input += synapse0x1ffc2b0();
   input += synapse0x1ffc2f0();
   input += synapse0x1ffc330();
   input += synapse0x1ffc370();
   input += synapse0x1ffc3b0();
   input += synapse0x1ffbe40();
   input += synapse0x1ffbe80();
   input += synapse0x1ffc500();
   input += synapse0x1ffc540();
   input += synapse0x1ffc580();
   input += synapse0x1ffc5c0();
   input += synapse0x1ffc600();
   input += synapse0x1ffc640();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1ffbcb0() {
   double input = input0x1ffbcb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1ffc680() {
   double input = 1.39178;
   input += synapse0x1ffc9c0();
   input += synapse0x1ffca00();
   input += synapse0x1ffca40();
   input += synapse0x1ffca80();
   input += synapse0x1ffcac0();
   input += synapse0x1ffcb00();
   input += synapse0x1ffcb40();
   input += synapse0x1ffcb80();
   input += synapse0x1ffcbc0();
   input += synapse0x1ffcc00();
   input += synapse0x1ffcc40();
   input += synapse0x1ffcc80();
   input += synapse0x1ffccc0();
   input += synapse0x1ffcd00();
   input += synapse0x1ffcd40();
   input += synapse0x1ffcd80();
   input += synapse0x1ffc810();
   input += synapse0x1ffc850();
   input += synapse0x1ffced0();
   input += synapse0x1ffcf10();
   input += synapse0x1ffcf50();
   input += synapse0x1ffcf90();
   input += synapse0x1ffcfd0();
   input += synapse0x1ffd010();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1ffc680() {
   double input = input0x1ffc680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1ffd050() {
   double input = -0.231887;
   input += synapse0x1ffd390();
   input += synapse0x1ffd3d0();
   input += synapse0x1ffd410();
   input += synapse0x1ffd450();
   input += synapse0x1ffd490();
   input += synapse0x1ffd4d0();
   input += synapse0x1ffd510();
   input += synapse0x1ffd550();
   input += synapse0x1ffd590();
   input += synapse0x1ffd5d0();
   input += synapse0x1ffd610();
   input += synapse0x1ffd650();
   input += synapse0x1ffd690();
   input += synapse0x1ffd6d0();
   input += synapse0x1ffd710();
   input += synapse0x1ffd750();
   input += synapse0x1ffd1e0();
   input += synapse0x1ffd220();
   input += synapse0x1ffd8a0();
   input += synapse0x1ffd8e0();
   input += synapse0x1ffd920();
   input += synapse0x1ffd960();
   input += synapse0x1ffd9a0();
   input += synapse0x1ffd9e0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1ffd050() {
   double input = input0x1ffd050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1ffda20() {
   double input = 0.812625;
   input += synapse0x1fe6490();
   input += synapse0x1fe64d0();
   input += synapse0x1fe6510();
   input += synapse0x1fe6550();
   input += synapse0x1fe6590();
   input += synapse0x1fe65d0();
   input += synapse0x1fe6610();
   input += synapse0x1fe6650();
   input += synapse0x1ffe170();
   input += synapse0x1ffe1b0();
   input += synapse0x1ffe1f0();
   input += synapse0x1ffe230();
   input += synapse0x1ffe270();
   input += synapse0x1ffe2b0();
   input += synapse0x1ffe2f0();
   input += synapse0x1ffe330();
   input += synapse0x1ffdbb0();
   input += synapse0x1ffdbf0();
   input += synapse0x1ffe480();
   input += synapse0x1ffe4c0();
   input += synapse0x1ffe500();
   input += synapse0x1ffe540();
   input += synapse0x1ffe580();
   input += synapse0x1ffe5c0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1ffda20() {
   double input = input0x1ffda20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1ffe600() {
   double input = 0.501572;
   input += synapse0x1ffe940();
   input += synapse0x1ffe980();
   input += synapse0x1ffe9c0();
   input += synapse0x1ffea00();
   input += synapse0x1ffea40();
   input += synapse0x1ffea80();
   input += synapse0x1ffeac0();
   input += synapse0x1ffeb00();
   input += synapse0x1ffeb40();
   input += synapse0x1ffeb80();
   input += synapse0x1ffebc0();
   input += synapse0x1ffec00();
   input += synapse0x1ffec40();
   input += synapse0x1ffec80();
   input += synapse0x1ffecc0();
   input += synapse0x1ffed00();
   input += synapse0x1ffe790();
   input += synapse0x1ffe7d0();
   input += synapse0x1ffee50();
   input += synapse0x1ffee90();
   input += synapse0x1ffeed0();
   input += synapse0x1ffef10();
   input += synapse0x1ffef50();
   input += synapse0x1ffef90();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1ffe600() {
   double input = input0x1ffe600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1ffefd0() {
   double input = -0.432228;
   input += synapse0x1fff310();
   input += synapse0x1fff350();
   input += synapse0x1fff390();
   input += synapse0x1fff3d0();
   input += synapse0x1fff410();
   input += synapse0x1fff450();
   input += synapse0x1fff490();
   input += synapse0x1fff4d0();
   input += synapse0x1fff510();
   input += synapse0x1fff550();
   input += synapse0x1fff590();
   input += synapse0x1fff5d0();
   input += synapse0x1fff610();
   input += synapse0x1fff650();
   input += synapse0x1fff690();
   input += synapse0x1fff6d0();
   input += synapse0x1fff160();
   input += synapse0x1fff1a0();
   input += synapse0x1fefcd0();
   input += synapse0x1fefd10();
   input += synapse0x1fefd50();
   input += synapse0x1fefd90();
   input += synapse0x1fefdd0();
   input += synapse0x1fefe10();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1ffefd0() {
   double input = input0x1ffefd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1fefe50() {
   double input = 0.997476;
   input += synapse0x1ff0190();
   input += synapse0x1ff01d0();
   input += synapse0x1ff0210();
   input += synapse0x1ff0250();
   input += synapse0x1ff0290();
   input += synapse0x1ff02d0();
   input += synapse0x1ff0310();
   input += synapse0x1ff0350();
   input += synapse0x1ff0390();
   input += synapse0x1ff03d0();
   input += synapse0x1ff0410();
   input += synapse0x1ff0450();
   input += synapse0x1ff0490();
   input += synapse0x1ff04d0();
   input += synapse0x1ff0510();
   input += synapse0x1ff0550();
   input += synapse0x1feffe0();
   input += synapse0x1ff0020();
   input += synapse0x1ff06a0();
   input += synapse0x1ff06e0();
   input += synapse0x1ff0720();
   input += synapse0x1ff0760();
   input += synapse0x1ff07a0();
   input += synapse0x1ff07e0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1fefe50() {
   double input = input0x1fefe50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1ff0820() {
   double input = -0.791826;
   input += synapse0x1ff0b60();
   input += synapse0x1ff0ba0();
   input += synapse0x1ff0be0();
   input += synapse0x1ff0c20();
   input += synapse0x1ff0c60();
   input += synapse0x1ff0ca0();
   input += synapse0x1ff0ce0();
   input += synapse0x1ff0d20();
   input += synapse0x1ff0d60();
   input += synapse0x1ff0da0();
   input += synapse0x1ff0de0();
   input += synapse0x1ff0e20();
   input += synapse0x1ff0e60();
   input += synapse0x1ff0ea0();
   input += synapse0x1ff0ee0();
   input += synapse0x1ff0f20();
   input += synapse0x1ff09b0();
   input += synapse0x1ff09f0();
   input += synapse0x1ff1070();
   input += synapse0x1ff10b0();
   input += synapse0x1ff10f0();
   input += synapse0x1ff1130();
   input += synapse0x1ff1170();
   input += synapse0x1ff11b0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1ff0820() {
   double input = input0x1ff0820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x1ff11f0() {
   double input = 0.889537;
   input += synapse0x1ff1530();
   input += synapse0x1ff1570();
   input += synapse0x1ff15b0();
   input += synapse0x1ff15f0();
   input += synapse0x1ff1630();
   input += synapse0x1ff1670();
   input += synapse0x1ff16b0();
   input += synapse0x1ff16f0();
   input += synapse0x1ff1730();
   input += synapse0x1ff1770();
   input += synapse0x1ff17b0();
   input += synapse0x1ff17f0();
   input += synapse0x1ff1830();
   input += synapse0x1ff1870();
   input += synapse0x1ff18b0();
   input += synapse0x1ff18f0();
   input += synapse0x1ff1380();
   input += synapse0x1ff13c0();
   input += synapse0x1ff1a40();
   input += synapse0x1ff1a80();
   input += synapse0x1ff1ac0();
   input += synapse0x1ff1b00();
   input += synapse0x1ff1b40();
   input += synapse0x1ff1b80();
   return input;
}

double NNfunction_sb_uLuL::neuron0x1ff11f0() {
   double input = input0x1ff11f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2003830() {
   double input = -0.93104;
   input += synapse0x2003a50();
   input += synapse0x2003a90();
   input += synapse0x2003ad0();
   input += synapse0x2003b10();
   input += synapse0x2003b50();
   input += synapse0x2003b90();
   input += synapse0x2003bd0();
   input += synapse0x2003c10();
   input += synapse0x2003c50();
   input += synapse0x2003c90();
   input += synapse0x2003cd0();
   input += synapse0x2003d10();
   input += synapse0x2003d50();
   input += synapse0x2003d90();
   input += synapse0x2003dd0();
   input += synapse0x2003e10();
   input += synapse0x1ff1bc0();
   input += synapse0x1ff1c00();
   input += synapse0x2003f60();
   input += synapse0x2003fa0();
   input += synapse0x2003fe0();
   input += synapse0x2004020();
   input += synapse0x2004060();
   input += synapse0x20040a0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2003830() {
   double input = input0x2003830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x20040e0() {
   double input = -0.143666;
   input += synapse0x2004420();
   input += synapse0x2004460();
   input += synapse0x20044a0();
   input += synapse0x20044e0();
   input += synapse0x2004520();
   input += synapse0x2004560();
   input += synapse0x20045a0();
   input += synapse0x20045e0();
   input += synapse0x2004620();
   input += synapse0x2004660();
   input += synapse0x20046a0();
   input += synapse0x20046e0();
   input += synapse0x2004720();
   input += synapse0x2004760();
   input += synapse0x20047a0();
   input += synapse0x20047e0();
   input += synapse0x2004270();
   input += synapse0x20042b0();
   input += synapse0x2004930();
   input += synapse0x2004970();
   input += synapse0x20049b0();
   input += synapse0x20049f0();
   input += synapse0x2004a30();
   input += synapse0x2004a70();
   return input;
}

double NNfunction_sb_uLuL::neuron0x20040e0() {
   double input = input0x20040e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2004ab0() {
   double input = 1.44789;
   input += synapse0x2004df0();
   input += synapse0x2004e30();
   input += synapse0x2004e70();
   input += synapse0x2004eb0();
   input += synapse0x2004ef0();
   input += synapse0x2004f30();
   input += synapse0x2004f70();
   input += synapse0x2004fb0();
   input += synapse0x2004ff0();
   input += synapse0x2005030();
   input += synapse0x2005070();
   input += synapse0x20050b0();
   input += synapse0x20050f0();
   input += synapse0x2005130();
   input += synapse0x2005170();
   input += synapse0x20051b0();
   input += synapse0x2004c40();
   input += synapse0x2004c80();
   input += synapse0x2005300();
   input += synapse0x2005340();
   input += synapse0x2005380();
   input += synapse0x20053c0();
   input += synapse0x2005400();
   input += synapse0x2005440();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2004ab0() {
   double input = input0x2004ab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x2005480() {
   double input = 0.674349;
   input += synapse0x20057c0();
   input += synapse0x2005800();
   input += synapse0x2005840();
   input += synapse0x2005880();
   input += synapse0x20058c0();
   input += synapse0x2005900();
   input += synapse0x2005940();
   input += synapse0x2005980();
   input += synapse0x20059c0();
   input += synapse0x2005a00();
   input += synapse0x2005a40();
   input += synapse0x2005a80();
   input += synapse0x2005ac0();
   input += synapse0x2005b00();
   input += synapse0x2005b40();
   input += synapse0x2005b80();
   input += synapse0x2005610();
   input += synapse0x2005650();
   input += synapse0x2005cd0();
   input += synapse0x2005d10();
   input += synapse0x2005d50();
   input += synapse0x2005d90();
   input += synapse0x2005dd0();
   input += synapse0x2005e10();
   return input;
}

double NNfunction_sb_uLuL::neuron0x2005480() {
   double input = input0x2005480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x200c680() {
   double input = 0.27606;
   input += synapse0x1da5d20();
   input += synapse0x1da5d60();
   input += synapse0x1fe38c0();
   input += synapse0x1fe3900();
   input += synapse0x1fe4290();
   input += synapse0x1fe42d0();
   input += synapse0x1fe5060();
   input += synapse0x1fe50a0();
   input += synapse0x1fe5a30();
   input += synapse0x1fe5a70();
   input += synapse0x1fe6400();
   input += synapse0x1fe6440();
   input += synapse0x1fe6ee0();
   input += synapse0x1fe6f20();
   input += synapse0x1fe78b0();
   input += synapse0x1fe78f0();
   input += synapse0x1fe4990();
   input += synapse0x1fe49d0();
   input += synapse0x1fe9460();
   input += synapse0x1fe94a0();
   input += synapse0x1fe9e30();
   input += synapse0x1fe9e70();
   input += synapse0x1fea800();
   input += synapse0x1fea840();
   input += synapse0x1feb1d0();
   input += synapse0x1feb210();
   input += synapse0x1fdf370();
   input += synapse0x1fdf3b0();
   input += synapse0x1fed2c0();
   input += synapse0x1fed300();
   input += synapse0x1fedc90();
   input += synapse0x1fedcd0();
   input += synapse0x1fee660();
   input += synapse0x1fee6a0();
   input += synapse0x1fef030();
   input += synapse0x1fef070();
   input += synapse0x1fefa00();
   input += synapse0x1fefa40();
   input += synapse0x1fe8550();
   input += synapse0x1fe8590();
   input += synapse0x1ff1e00();
   input += synapse0x1ff1e40();
   input += synapse0x1ff2790();
   input += synapse0x1ff27d0();
   input += synapse0x1ff3160();
   input += synapse0x1ff31a0();
   input += synapse0x1ff3b30();
   input += synapse0x1ff3b70();
   input += synapse0x1ff4500();
   input += synapse0x1ff4540();
   return input;
}

double NNfunction_sb_uLuL::neuron0x200c680() {
   double input = input0x200c680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x200ca20() {
   double input = -0.331746;
   input += synapse0x1ff6c40();
   input += synapse0x1ff6c80();
   input += synapse0x1fec200();
   input += synapse0x1fec240();
   input += synapse0x1ff9820();
   input += synapse0x1ff9860();
   input += synapse0x1ffa1f0();
   input += synapse0x1ffa230();
   input += synapse0x1ffabc0();
   input += synapse0x1ffac00();
   input += synapse0x1ffb590();
   input += synapse0x1ffb5d0();
   input += synapse0x1ffbf60();
   input += synapse0x1ffbfa0();
   input += synapse0x1ffc930();
   input += synapse0x1ffc970();
   input += synapse0x1ffd300();
   input += synapse0x1ffd340();
   input += synapse0x1ffdcd0();
   input += synapse0x1ffdd10();
   input += synapse0x1ffe8b0();
   input += synapse0x1ffe8f0();
   input += synapse0x1fff280();
   input += synapse0x1fff2c0();
   input += synapse0x1ff0100();
   input += synapse0x1ff0140();
   input += synapse0x1ff0ad0();
   input += synapse0x1ff0b10();
   input += synapse0x1ff14a0();
   input += synapse0x1ff14e0();
   input += synapse0x20039c0();
   input += synapse0x2003a00();
   input += synapse0x2004390();
   input += synapse0x20043d0();
   input += synapse0x2004d60();
   input += synapse0x2004da0();
   input += synapse0x2005730();
   input += synapse0x2005770();
   input += synapse0x1fe1620();
   input += synapse0x1fe1660();
   input += synapse0x1ff4ed0();
   input += synapse0x1ff4f10();
   input += synapse0x2005e50();
   input += synapse0x2005e90();
   input += synapse0x2005ed0();
   input += synapse0x2005f10();
   input += synapse0x200cdc0();
   input += synapse0x200ce00();
   input += synapse0x200ce40();
   input += synapse0x200ce80();
   return input;
}

double NNfunction_sb_uLuL::neuron0x200ca20() {
   double input = input0x200ca20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x200cec0() {
   double input = -0.707243;
   input += synapse0x200d200();
   input += synapse0x200d240();
   input += synapse0x200d280();
   input += synapse0x200d2c0();
   input += synapse0x200d300();
   input += synapse0x200d340();
   input += synapse0x200d380();
   input += synapse0x200d3c0();
   input += synapse0x200d400();
   input += synapse0x200d440();
   input += synapse0x200d480();
   input += synapse0x200d4c0();
   input += synapse0x200d500();
   input += synapse0x200d540();
   input += synapse0x200d580();
   input += synapse0x200d5c0();
   input += synapse0x200d050();
   input += synapse0x200d090();
   input += synapse0x200d710();
   input += synapse0x200d750();
   input += synapse0x200d790();
   input += synapse0x200d7d0();
   input += synapse0x200d810();
   input += synapse0x200d850();
   input += synapse0x200d890();
   input += synapse0x200d8d0();
   input += synapse0x200d910();
   input += synapse0x200d950();
   input += synapse0x200d990();
   input += synapse0x200d9d0();
   input += synapse0x200da10();
   input += synapse0x200da50();
   input += synapse0x200d600();
   input += synapse0x200d640();
   input += synapse0x200d680();
   input += synapse0x200d6c0();
   input += synapse0x200dca0();
   input += synapse0x200dce0();
   input += synapse0x200dd20();
   input += synapse0x200dd60();
   input += synapse0x200dda0();
   input += synapse0x200dde0();
   input += synapse0x200de20();
   input += synapse0x200de60();
   input += synapse0x200dea0();
   input += synapse0x200dee0();
   input += synapse0x200df20();
   input += synapse0x200df60();
   input += synapse0x200dfa0();
   input += synapse0x200dfe0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x200cec0() {
   double input = input0x200cec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x200e020() {
   double input = -0.195474;
   input += synapse0x200e360();
   input += synapse0x200e3a0();
   input += synapse0x200e3e0();
   input += synapse0x200e420();
   input += synapse0x200e460();
   input += synapse0x200e4a0();
   input += synapse0x200e4e0();
   input += synapse0x200e520();
   input += synapse0x200e560();
   input += synapse0x200e5a0();
   input += synapse0x200e5e0();
   input += synapse0x200e620();
   input += synapse0x200e660();
   input += synapse0x200e6a0();
   input += synapse0x200e6e0();
   input += synapse0x200e720();
   input += synapse0x200e1b0();
   input += synapse0x200e1f0();
   input += synapse0x200e870();
   input += synapse0x200e8b0();
   input += synapse0x200e8f0();
   input += synapse0x200e930();
   input += synapse0x200e970();
   input += synapse0x200e9b0();
   input += synapse0x200e9f0();
   input += synapse0x200ea30();
   input += synapse0x200ea70();
   input += synapse0x200eab0();
   input += synapse0x200eaf0();
   input += synapse0x200eb30();
   input += synapse0x200eb70();
   input += synapse0x200ebb0();
   input += synapse0x200e760();
   input += synapse0x200e7a0();
   input += synapse0x200e7e0();
   input += synapse0x200e820();
   input += synapse0x200ee00();
   input += synapse0x200ee40();
   input += synapse0x200ee80();
   input += synapse0x200eec0();
   input += synapse0x200ef00();
   input += synapse0x200ef40();
   input += synapse0x200ef80();
   input += synapse0x200efc0();
   input += synapse0x200f000();
   input += synapse0x200f040();
   input += synapse0x200f080();
   input += synapse0x200f0c0();
   input += synapse0x200f100();
   input += synapse0x200f140();
   return input;
}

double NNfunction_sb_uLuL::neuron0x200e020() {
   double input = input0x200e020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x200f180() {
   double input = 0.684903;
   input += synapse0x200f4c0();
   input += synapse0x200f500();
   input += synapse0x200f540();
   input += synapse0x200f580();
   input += synapse0x200f5c0();
   input += synapse0x200f600();
   input += synapse0x200f640();
   input += synapse0x200f680();
   input += synapse0x200f6c0();
   input += synapse0x200f700();
   input += synapse0x200f740();
   input += synapse0x200f780();
   input += synapse0x200f7c0();
   input += synapse0x200f800();
   input += synapse0x200f840();
   input += synapse0x200f880();
   input += synapse0x200f310();
   input += synapse0x200f350();
   input += synapse0x200f9d0();
   input += synapse0x200fa10();
   input += synapse0x200fa50();
   input += synapse0x200fa90();
   input += synapse0x200fad0();
   input += synapse0x200fb10();
   input += synapse0x200fb50();
   input += synapse0x200fb90();
   input += synapse0x200fbd0();
   input += synapse0x200fc10();
   input += synapse0x200fc50();
   input += synapse0x200fc90();
   input += synapse0x200fcd0();
   input += synapse0x200fd10();
   input += synapse0x200f8c0();
   input += synapse0x200f900();
   input += synapse0x200f940();
   input += synapse0x200f980();
   input += synapse0x200ff60();
   input += synapse0x200ffa0();
   input += synapse0x200ffe0();
   input += synapse0x2010020();
   input += synapse0x2010060();
   input += synapse0x20100a0();
   input += synapse0x20100e0();
   input += synapse0x2010120();
   input += synapse0x2010160();
   input += synapse0x20101a0();
   input += synapse0x20101e0();
   input += synapse0x2010220();
   input += synapse0x2010260();
   input += synapse0x20102a0();
   return input;
}

double NNfunction_sb_uLuL::neuron0x200f180() {
   double input = input0x200f180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuL::input0x20102e0() {
   double input = 5.19673;
   input += synapse0x2010500();
   input += synapse0x2010540();
   input += synapse0x2010580();
   input += synapse0x20105c0();
   input += synapse0x2010600();
   return input;
}

double NNfunction_sb_uLuL::neuron0x20102e0() {
   double input = input0x20102e0();
   return (input * 1)+0;
}

double NNfunction_sb_uLuL::synapse0x1fdc290() {
   return (neuron0x1fdc3d0()*0.107319);
}

double NNfunction_sb_uLuL::synapse0x1fdc2d0() {
   return (neuron0x1fdc710()*0.0130126);
}

double NNfunction_sb_uLuL::synapse0x1fe16b0() {
   return (neuron0x1fdca50()*-0.0245894);
}

double NNfunction_sb_uLuL::synapse0x1fe16f0() {
   return (neuron0x1fdcd90()*0.275551);
}

double NNfunction_sb_uLuL::synapse0x1fe1730() {
   return (neuron0x1fdd0d0()*0.0297334);
}

double NNfunction_sb_uLuL::synapse0x1fe1770() {
   return (neuron0x1fdd410()*0.00332137);
}

double NNfunction_sb_uLuL::synapse0x1fe17b0() {
   return (neuron0x1fdd750()*0.0393103);
}

double NNfunction_sb_uLuL::synapse0x1fe17f0() {
   return (neuron0x1fdda90()*-0.0262521);
}

double NNfunction_sb_uLuL::synapse0x1fe1830() {
   return (neuron0x1fdddd0()*0.0806462);
}

double NNfunction_sb_uLuL::synapse0x1fe1870() {
   return (neuron0x1fde110()*0.0560411);
}

double NNfunction_sb_uLuL::synapse0x1fe18b0() {
   return (neuron0x1fde450()*0.039004);
}

double NNfunction_sb_uLuL::synapse0x1fe18f0() {
   return (neuron0x1fde790()*0.530494);
}

double NNfunction_sb_uLuL::synapse0x1fe1930() {
   return (neuron0x1fdead0()*-0.0479405);
}

double NNfunction_sb_uLuL::synapse0x1fe1970() {
   return (neuron0x1fdee10()*0.00819466);
}

double NNfunction_sb_uLuL::synapse0x1fe19b0() {
   return (neuron0x1fdf150()*-0.0384537);
}

double NNfunction_sb_uLuL::synapse0x1fe19f0() {
   return (neuron0x1fdf490()*0.00702321);
}

double NNfunction_sb_uLuL::synapse0x1fdc200() {
   return (neuron0x1fdf7d0()*0.0308847);
}

double NNfunction_sb_uLuL::synapse0x1fdc240() {
   return (neuron0x1fdfd30()*-0.0824647);
}

double NNfunction_sb_uLuL::synapse0x1d975c0() {
   return (neuron0x1fdff50()*-0.00746342);
}

double NNfunction_sb_uLuL::synapse0x1d97600() {
   return (neuron0x1fe0290()*-0.0265654);
}

double NNfunction_sb_uLuL::synapse0x1fe1c50() {
   return (neuron0x1fe05d0()*-0.0534118);
}

double NNfunction_sb_uLuL::synapse0x1fe1c90() {
   return (neuron0x1fe0910()*0.0268778);
}

double NNfunction_sb_uLuL::synapse0x1fe1cd0() {
   return (neuron0x1fe0c50()*-0.0155752);
}

double NNfunction_sb_uLuL::synapse0x1fe1d10() {
   return (neuron0x1fe0f90()*0.00870665);
}

double NNfunction_sb_uLuL::synapse0x1fe2090() {
   return (neuron0x1fdc3d0()*0.0177266);
}

double NNfunction_sb_uLuL::synapse0x1fe20d0() {
   return (neuron0x1fdc710()*0.00192781);
}

double NNfunction_sb_uLuL::synapse0x1fe2110() {
   return (neuron0x1fdca50()*0.0435434);
}

double NNfunction_sb_uLuL::synapse0x1fe2150() {
   return (neuron0x1fdcd90()*-2.03127);
}

double NNfunction_sb_uLuL::synapse0x1fe2190() {
   return (neuron0x1fdd0d0()*0.0605613);
}

double NNfunction_sb_uLuL::synapse0x1fe21d0() {
   return (neuron0x1fdd410()*-0.00817727);
}

double NNfunction_sb_uLuL::synapse0x1fe2210() {
   return (neuron0x1fdd750()*0.0487307);
}

double NNfunction_sb_uLuL::synapse0x1fe2250() {
   return (neuron0x1fdda90()*-0.015226);
}

double NNfunction_sb_uLuL::synapse0x1fe2290() {
   return (neuron0x1fdddd0()*-0.00604195);
}

double NNfunction_sb_uLuL::synapse0x1fe1b40() {
   return (neuron0x1fde110()*-0.0413255);
}

double NNfunction_sb_uLuL::synapse0x1fe1b80() {
   return (neuron0x1fde450()*-0.00963168);
}

double NNfunction_sb_uLuL::synapse0x1fe1bc0() {
   return (neuron0x1fde790()*1.58658);
}

double NNfunction_sb_uLuL::synapse0x1fe1c00() {
   return (neuron0x1fdead0()*-0.0174017);
}

double NNfunction_sb_uLuL::synapse0x1fe24e0() {
   return (neuron0x1fdee10()*-0.0184794);
}

double NNfunction_sb_uLuL::synapse0x1fe2520() {
   return (neuron0x1fdf150()*-0.00885156);
}

double NNfunction_sb_uLuL::synapse0x1fe2560() {
   return (neuron0x1fdf490()*0.0648688);
}

double NNfunction_sb_uLuL::synapse0x1fe1ee0() {
   return (neuron0x1fdf7d0()*0.00261807);
}

double NNfunction_sb_uLuL::synapse0x1fe1f20() {
   return (neuron0x1fdfd30()*-0.00892039);
}

double NNfunction_sb_uLuL::synapse0x1fe26b0() {
   return (neuron0x1fdff50()*-0.0352179);
}

double NNfunction_sb_uLuL::synapse0x1fe26f0() {
   return (neuron0x1fe0290()*-0.0305992);
}

double NNfunction_sb_uLuL::synapse0x1fe2730() {
   return (neuron0x1fe05d0()*-0.0486418);
}

double NNfunction_sb_uLuL::synapse0x1fe2770() {
   return (neuron0x1fe0910()*-0.0394562);
}

double NNfunction_sb_uLuL::synapse0x1fe27b0() {
   return (neuron0x1fe0c50()*0.0229265);
}

double NNfunction_sb_uLuL::synapse0x1fe27f0() {
   return (neuron0x1fe0f90()*0.0255538);
}

double NNfunction_sb_uLuL::synapse0x1fe2b70() {
   return (neuron0x1fdc3d0()*-0.151201);
}

double NNfunction_sb_uLuL::synapse0x1fe2bb0() {
   return (neuron0x1fdc710()*0.189701);
}

double NNfunction_sb_uLuL::synapse0x1fe2bf0() {
   return (neuron0x1fdca50()*-0.934081);
}

double NNfunction_sb_uLuL::synapse0x1fe2c30() {
   return (neuron0x1fdcd90()*1.59084);
}

double NNfunction_sb_uLuL::synapse0x1fe2c70() {
   return (neuron0x1fdd0d0()*0.0259824);
}

double NNfunction_sb_uLuL::synapse0x1fe2cb0() {
   return (neuron0x1fdd410()*-0.0738546);
}

double NNfunction_sb_uLuL::synapse0x1fe2cf0() {
   return (neuron0x1fdd750()*0.0629951);
}

double NNfunction_sb_uLuL::synapse0x1fe2d30() {
   return (neuron0x1fdda90()*0.0497937);
}

double NNfunction_sb_uLuL::synapse0x1fe2d70() {
   return (neuron0x1fdddd0()*-0.133912);
}

double NNfunction_sb_uLuL::synapse0x1fe2db0() {
   return (neuron0x1fde110()*-0.0341479);
}

double NNfunction_sb_uLuL::synapse0x1fe2df0() {
   return (neuron0x1fde450()*-0.112017);
}

double NNfunction_sb_uLuL::synapse0x1fe2e30() {
   return (neuron0x1fde790()*0.529942);
}

double NNfunction_sb_uLuL::synapse0x1fe2e70() {
   return (neuron0x1fdead0()*-0.295482);
}

double NNfunction_sb_uLuL::synapse0x1fe2eb0() {
   return (neuron0x1fdee10()*-0.108735);
}

double NNfunction_sb_uLuL::synapse0x1fe2ef0() {
   return (neuron0x1fdf150()*0.0375344);
}

double NNfunction_sb_uLuL::synapse0x1fe2f30() {
   return (neuron0x1fdf490()*0.249768);
}

double NNfunction_sb_uLuL::synapse0x1fe29c0() {
   return (neuron0x1fdf7d0()*0.137714);
}

double NNfunction_sb_uLuL::synapse0x1fe2a00() {
   return (neuron0x1fdfd30()*-0.0516713);
}

double NNfunction_sb_uLuL::synapse0x1d97c60() {
   return (neuron0x1fdff50()*-0.0452857);
}

double NNfunction_sb_uLuL::synapse0x1da5530() {
   return (neuron0x1fe0290()*-0.0609218);
}

double NNfunction_sb_uLuL::synapse0x1da5570() {
   return (neuron0x1fe05d0()*-0.000752582);
}

double NNfunction_sb_uLuL::synapse0x1fcb460() {
   return (neuron0x1fe0910()*0.106827);
}

double NNfunction_sb_uLuL::synapse0x1fcb4a0() {
   return (neuron0x1fe0c50()*-0.0712331);
}

double NNfunction_sb_uLuL::synapse0x1fcb4e0() {
   return (neuron0x1fe0f90()*-0.0106336);
}

double NNfunction_sb_uLuL::synapse0x1da5db0() {
   return (neuron0x1fdc3d0()*0.39329);
}

double NNfunction_sb_uLuL::synapse0x1fe2460() {
   return (neuron0x1fdc710()*0.230074);
}

double NNfunction_sb_uLuL::synapse0x1fe24a0() {
   return (neuron0x1fdca50()*-0.0233025);
}

double NNfunction_sb_uLuL::synapse0x1fe3080() {
   return (neuron0x1fdcd90()*-0.136706);
}

double NNfunction_sb_uLuL::synapse0x1fe30c0() {
   return (neuron0x1fdd0d0()*0.20973);
}

double NNfunction_sb_uLuL::synapse0x1fe3100() {
   return (neuron0x1fdd410()*0.269413);
}

double NNfunction_sb_uLuL::synapse0x1fe3140() {
   return (neuron0x1fdd750()*0.0364054);
}

double NNfunction_sb_uLuL::synapse0x1fe3180() {
   return (neuron0x1fdda90()*0.120832);
}

double NNfunction_sb_uLuL::synapse0x1fe31c0() {
   return (neuron0x1fdddd0()*-0.260922);
}

double NNfunction_sb_uLuL::synapse0x1fe3200() {
   return (neuron0x1fde110()*0.132674);
}

double NNfunction_sb_uLuL::synapse0x1fe3240() {
   return (neuron0x1fde450()*0.126727);
}

double NNfunction_sb_uLuL::synapse0x1fe3280() {
   return (neuron0x1fde790()*0.14602);
}

double NNfunction_sb_uLuL::synapse0x1fe32c0() {
   return (neuron0x1fdead0()*0.016468);
}

double NNfunction_sb_uLuL::synapse0x1fe3300() {
   return (neuron0x1fdee10()*0.454976);
}

double NNfunction_sb_uLuL::synapse0x1fe3340() {
   return (neuron0x1fdf150()*-1.2211);
}

double NNfunction_sb_uLuL::synapse0x1fe3380() {
   return (neuron0x1fdf490()*-0.598561);
}

double NNfunction_sb_uLuL::synapse0x1fdc310() {
   return (neuron0x1fdf7d0()*0.0321771);
}

double NNfunction_sb_uLuL::synapse0x1fdc350() {
   return (neuron0x1fdfd30()*0.248954);
}

double NNfunction_sb_uLuL::synapse0x1fdc390() {
   return (neuron0x1fdff50()*0.274986);
}

double NNfunction_sb_uLuL::synapse0x1fe34d0() {
   return (neuron0x1fe0290()*0.313392);
}

double NNfunction_sb_uLuL::synapse0x1fe3510() {
   return (neuron0x1fe05d0()*-0.174578);
}

double NNfunction_sb_uLuL::synapse0x1fe3550() {
   return (neuron0x1fe0910()*-0.267978);
}

double NNfunction_sb_uLuL::synapse0x1fe3590() {
   return (neuron0x1fe0c50()*-0.277168);
}

double NNfunction_sb_uLuL::synapse0x1fe35d0() {
   return (neuron0x1fe0f90()*0.0500607);
}

double NNfunction_sb_uLuL::synapse0x1fe3950() {
   return (neuron0x1fdc3d0()*-0.00401598);
}

double NNfunction_sb_uLuL::synapse0x1fe3990() {
   return (neuron0x1fdc710()*-0.0118284);
}

double NNfunction_sb_uLuL::synapse0x1fe39d0() {
   return (neuron0x1fdca50()*-0.00383402);
}

double NNfunction_sb_uLuL::synapse0x1fe3a10() {
   return (neuron0x1fdcd90()*1.37976);
}

double NNfunction_sb_uLuL::synapse0x1fe3a50() {
   return (neuron0x1fdd0d0()*-0.0141366);
}

double NNfunction_sb_uLuL::synapse0x1fe3a90() {
   return (neuron0x1fdd410()*-0.00413277);
}

double NNfunction_sb_uLuL::synapse0x1fe3ad0() {
   return (neuron0x1fdd750()*-0.0240272);
}

double NNfunction_sb_uLuL::synapse0x1fe3b10() {
   return (neuron0x1fdda90()*-0.00514595);
}

double NNfunction_sb_uLuL::synapse0x1fe3b50() {
   return (neuron0x1fdddd0()*-0.0165179);
}

double NNfunction_sb_uLuL::synapse0x1fe3b90() {
   return (neuron0x1fde110()*-0.0193607);
}

double NNfunction_sb_uLuL::synapse0x1fe3bd0() {
   return (neuron0x1fde450()*0.00320844);
}

double NNfunction_sb_uLuL::synapse0x1fe3c10() {
   return (neuron0x1fde790()*0.924686);
}

double NNfunction_sb_uLuL::synapse0x1fe3c50() {
   return (neuron0x1fdead0()*-0.00309799);
}

double NNfunction_sb_uLuL::synapse0x1fe3c90() {
   return (neuron0x1fdee10()*-0.00619271);
}

double NNfunction_sb_uLuL::synapse0x1fe3cd0() {
   return (neuron0x1fdf150()*0.00117365);
}

double NNfunction_sb_uLuL::synapse0x1fe3d10() {
   return (neuron0x1fdf490()*-0.00527728);
}

double NNfunction_sb_uLuL::synapse0x1fe37a0() {
   return (neuron0x1fdf7d0()*0.00477978);
}

double NNfunction_sb_uLuL::synapse0x1fe37e0() {
   return (neuron0x1fdfd30()*0.00635574);
}

double NNfunction_sb_uLuL::synapse0x1fe3e60() {
   return (neuron0x1fdff50()*0.00583023);
}

double NNfunction_sb_uLuL::synapse0x1fe3ea0() {
   return (neuron0x1fe0290()*-0.00561198);
}

double NNfunction_sb_uLuL::synapse0x1fe3ee0() {
   return (neuron0x1fe05d0()*-0.0185793);
}

double NNfunction_sb_uLuL::synapse0x1fe3f20() {
   return (neuron0x1fe0910()*-0.00312612);
}

double NNfunction_sb_uLuL::synapse0x1fe3f60() {
   return (neuron0x1fe0c50()*-0.00519769);
}

double NNfunction_sb_uLuL::synapse0x1fe3fa0() {
   return (neuron0x1fe0f90()*0.00642495);
}

double NNfunction_sb_uLuL::synapse0x1fe4320() {
   return (neuron0x1fdc3d0()*0.0760204);
}

double NNfunction_sb_uLuL::synapse0x1fe4360() {
   return (neuron0x1fdc710()*0.127758);
}

double NNfunction_sb_uLuL::synapse0x1fe43a0() {
   return (neuron0x1fdca50()*0.426985);
}

double NNfunction_sb_uLuL::synapse0x1fe43e0() {
   return (neuron0x1fdcd90()*-1.06202);
}

double NNfunction_sb_uLuL::synapse0x1fe4420() {
   return (neuron0x1fdd0d0()*0.119233);
}

double NNfunction_sb_uLuL::synapse0x1fe4460() {
   return (neuron0x1fdd410()*-0.113719);
}

double NNfunction_sb_uLuL::synapse0x1fe44a0() {
   return (neuron0x1fdd750()*0.19161);
}

double NNfunction_sb_uLuL::synapse0x1fe44e0() {
   return (neuron0x1fdda90()*0.189142);
}

double NNfunction_sb_uLuL::synapse0x1fe4520() {
   return (neuron0x1fdddd0()*0.497674);
}

double NNfunction_sb_uLuL::synapse0x1da5880() {
   return (neuron0x1fde110()*-0.370362);
}

double NNfunction_sb_uLuL::synapse0x1da58c0() {
   return (neuron0x1fde450()*-0.014859);
}

double NNfunction_sb_uLuL::synapse0x1da5900() {
   return (neuron0x1fde790()*-0.808278);
}

double NNfunction_sb_uLuL::synapse0x1da5940() {
   return (neuron0x1fdead0()*-0.161848);
}

double NNfunction_sb_uLuL::synapse0x1da5980() {
   return (neuron0x1fdee10()*-0.0123217);
}

double NNfunction_sb_uLuL::synapse0x1da59c0() {
   return (neuron0x1fdf150()*-0.0704583);
}

double NNfunction_sb_uLuL::synapse0x1da5a00() {
   return (neuron0x1fdf490()*-0.153419);
}

double NNfunction_sb_uLuL::synapse0x1fe4170() {
   return (neuron0x1fdf7d0()*0.370802);
}

double NNfunction_sb_uLuL::synapse0x1fe41b0() {
   return (neuron0x1fdfd30()*0.584205);
}

double NNfunction_sb_uLuL::synapse0x1da5b50() {
   return (neuron0x1fdff50()*-0.309685);
}

double NNfunction_sb_uLuL::synapse0x1da5b90() {
   return (neuron0x1fe0290()*0.326739);
}

double NNfunction_sb_uLuL::synapse0x1da5bd0() {
   return (neuron0x1fe05d0()*0.0343045);
}

double NNfunction_sb_uLuL::synapse0x1da5c10() {
   return (neuron0x1fe0910()*-0.14499);
}

double NNfunction_sb_uLuL::synapse0x1da5c50() {
   return (neuron0x1fe0c50()*-0.416839);
}

double NNfunction_sb_uLuL::synapse0x1fe4d70() {
   return (neuron0x1fe0f90()*0.159149);
}

double NNfunction_sb_uLuL::synapse0x1fe50f0() {
   return (neuron0x1fdc3d0()*-0.00247223);
}

double NNfunction_sb_uLuL::synapse0x1fe5130() {
   return (neuron0x1fdc710()*-0.0122298);
}

double NNfunction_sb_uLuL::synapse0x1fe5170() {
   return (neuron0x1fdca50()*0.173994);
}

double NNfunction_sb_uLuL::synapse0x1fe51b0() {
   return (neuron0x1fdcd90()*-3.0169);
}

double NNfunction_sb_uLuL::synapse0x1fe51f0() {
   return (neuron0x1fdd0d0()*-0.0177625);
}

double NNfunction_sb_uLuL::synapse0x1fe5230() {
   return (neuron0x1fdd410()*0.0188573);
}

double NNfunction_sb_uLuL::synapse0x1fe5270() {
   return (neuron0x1fdd750()*-0.00822329);
}

double NNfunction_sb_uLuL::synapse0x1fe52b0() {
   return (neuron0x1fdda90()*0.0114425);
}

double NNfunction_sb_uLuL::synapse0x1fe52f0() {
   return (neuron0x1fdddd0()*-0.0130339);
}

double NNfunction_sb_uLuL::synapse0x1fe5330() {
   return (neuron0x1fde110()*0.0121103);
}

double NNfunction_sb_uLuL::synapse0x1fe5370() {
   return (neuron0x1fde450()*-0.000271991);
}

double NNfunction_sb_uLuL::synapse0x1fe53b0() {
   return (neuron0x1fde790()*1.07231);
}

double NNfunction_sb_uLuL::synapse0x1fe53f0() {
   return (neuron0x1fdead0()*-0.0167002);
}

double NNfunction_sb_uLuL::synapse0x1fe5430() {
   return (neuron0x1fdee10()*0.0419783);
}

double NNfunction_sb_uLuL::synapse0x1fe5470() {
   return (neuron0x1fdf150()*0.0248606);
}

double NNfunction_sb_uLuL::synapse0x1fe54b0() {
   return (neuron0x1fdf490()*-0.00574977);
}

double NNfunction_sb_uLuL::synapse0x1fe4f40() {
   return (neuron0x1fdf7d0()*0.0330778);
}

double NNfunction_sb_uLuL::synapse0x1fe4f80() {
   return (neuron0x1fdfd30()*-0.0317941);
}

double NNfunction_sb_uLuL::synapse0x1fe5600() {
   return (neuron0x1fdff50()*0.00513961);
}

double NNfunction_sb_uLuL::synapse0x1fe5640() {
   return (neuron0x1fe0290()*-0.0109844);
}

double NNfunction_sb_uLuL::synapse0x1fe5680() {
   return (neuron0x1fe05d0()*0.0098061);
}

double NNfunction_sb_uLuL::synapse0x1fe56c0() {
   return (neuron0x1fe0910()*0.021719);
}

double NNfunction_sb_uLuL::synapse0x1fe5700() {
   return (neuron0x1fe0c50()*-0.0196586);
}

double NNfunction_sb_uLuL::synapse0x1fe5740() {
   return (neuron0x1fe0f90()*-0.00522841);
}

double NNfunction_sb_uLuL::synapse0x1fe5ac0() {
   return (neuron0x1fdc3d0()*0.219455);
}

double NNfunction_sb_uLuL::synapse0x1fe5b00() {
   return (neuron0x1fdc710()*-0.070557);
}

double NNfunction_sb_uLuL::synapse0x1fe5b40() {
   return (neuron0x1fdca50()*0.0593403);
}

double NNfunction_sb_uLuL::synapse0x1fe5b80() {
   return (neuron0x1fdcd90()*-0.145776);
}

double NNfunction_sb_uLuL::synapse0x1fe5bc0() {
   return (neuron0x1fdd0d0()*0.124296);
}

double NNfunction_sb_uLuL::synapse0x1fe5c00() {
   return (neuron0x1fdd410()*0.0202149);
}

double NNfunction_sb_uLuL::synapse0x1fe5c40() {
   return (neuron0x1fdd750()*0.054949);
}

double NNfunction_sb_uLuL::synapse0x1fe5c80() {
   return (neuron0x1fdda90()*0.0275468);
}

double NNfunction_sb_uLuL::synapse0x1fe5cc0() {
   return (neuron0x1fdddd0()*-0.21468);
}

double NNfunction_sb_uLuL::synapse0x1fe5d00() {
   return (neuron0x1fde110()*-0.169429);
}

double NNfunction_sb_uLuL::synapse0x1fe5d40() {
   return (neuron0x1fde450()*-0.231168);
}

double NNfunction_sb_uLuL::synapse0x1fe5d80() {
   return (neuron0x1fde790()*-0.484902);
}

double NNfunction_sb_uLuL::synapse0x1fe5dc0() {
   return (neuron0x1fdead0()*0.121256);
}

double NNfunction_sb_uLuL::synapse0x1fe5e00() {
   return (neuron0x1fdee10()*0.188824);
}

double NNfunction_sb_uLuL::synapse0x1fe5e40() {
   return (neuron0x1fdf150()*-0.132645);
}

double NNfunction_sb_uLuL::synapse0x1fe5e80() {
   return (neuron0x1fdf490()*0.0409151);
}

double NNfunction_sb_uLuL::synapse0x1fe5910() {
   return (neuron0x1fdf7d0()*0.229678);
}

double NNfunction_sb_uLuL::synapse0x1fe5950() {
   return (neuron0x1fdfd30()*-0.160828);
}

double NNfunction_sb_uLuL::synapse0x1fe5fd0() {
   return (neuron0x1fdff50()*0.138091);
}

double NNfunction_sb_uLuL::synapse0x1fe6010() {
   return (neuron0x1fe0290()*0.255039);
}

double NNfunction_sb_uLuL::synapse0x1fe6050() {
   return (neuron0x1fe05d0()*-0.0938377);
}

double NNfunction_sb_uLuL::synapse0x1fe6090() {
   return (neuron0x1fe0910()*0.158585);
}

double NNfunction_sb_uLuL::synapse0x1fe60d0() {
   return (neuron0x1fe0c50()*0.0213107);
}

double NNfunction_sb_uLuL::synapse0x1fe6110() {
   return (neuron0x1fe0f90()*-0.0276135);
}

double NNfunction_sb_uLuL::synapse0x1fdfc20() {
   return (neuron0x1fdc3d0()*-0.0201431);
}

double NNfunction_sb_uLuL::synapse0x1fdfc60() {
   return (neuron0x1fdc710()*0.00346871);
}

double NNfunction_sb_uLuL::synapse0x1fdfca0() {
   return (neuron0x1fdca50()*0.00607088);
}

double NNfunction_sb_uLuL::synapse0x1fdfce0() {
   return (neuron0x1fdcd90()*0.107325);
}

double NNfunction_sb_uLuL::synapse0x1fe66a0() {
   return (neuron0x1fdd0d0()*0.00244786);
}

double NNfunction_sb_uLuL::synapse0x1fe66e0() {
   return (neuron0x1fdd410()*0.0096556);
}

double NNfunction_sb_uLuL::synapse0x1fe6720() {
   return (neuron0x1fdd750()*-0.00134155);
}

double NNfunction_sb_uLuL::synapse0x1fe6760() {
   return (neuron0x1fdda90()*0.0135195);
}

double NNfunction_sb_uLuL::synapse0x1fe67a0() {
   return (neuron0x1fdddd0()*-0.0214796);
}

double NNfunction_sb_uLuL::synapse0x1fe67e0() {
   return (neuron0x1fde110()*-0.0198727);
}

double NNfunction_sb_uLuL::synapse0x1fe6820() {
   return (neuron0x1fde450()*-0.0162964);
}

double NNfunction_sb_uLuL::synapse0x1fe6860() {
   return (neuron0x1fde790()*1.10134);
}

double NNfunction_sb_uLuL::synapse0x1fe68a0() {
   return (neuron0x1fdead0()*0.0245449);
}

double NNfunction_sb_uLuL::synapse0x1fe68e0() {
   return (neuron0x1fdee10()*0.0209492);
}

double NNfunction_sb_uLuL::synapse0x1fe6920() {
   return (neuron0x1fdf150()*0.0156225);
}

double NNfunction_sb_uLuL::synapse0x1fe6960() {
   return (neuron0x1fdf490()*0.00579202);
}

double NNfunction_sb_uLuL::synapse0x1fe62e0() {
   return (neuron0x1fdf7d0()*0.00962982);
}

double NNfunction_sb_uLuL::synapse0x1fe6320() {
   return (neuron0x1fdfd30()*0.0142259);
}

double NNfunction_sb_uLuL::synapse0x1fe6ab0() {
   return (neuron0x1fdff50()*0.0125182);
}

double NNfunction_sb_uLuL::synapse0x1fe6af0() {
   return (neuron0x1fe0290()*0.00872921);
}

double NNfunction_sb_uLuL::synapse0x1fe6b30() {
   return (neuron0x1fe05d0()*0.00374888);
}

double NNfunction_sb_uLuL::synapse0x1fe6b70() {
   return (neuron0x1fe0910()*-0.00861895);
}

double NNfunction_sb_uLuL::synapse0x1fe6bb0() {
   return (neuron0x1fe0c50()*0.000304282);
}

double NNfunction_sb_uLuL::synapse0x1fe6bf0() {
   return (neuron0x1fe0f90()*-0.0116388);
}

double NNfunction_sb_uLuL::synapse0x1fe6f70() {
   return (neuron0x1fdc3d0()*0.0115573);
}

double NNfunction_sb_uLuL::synapse0x1fe6fb0() {
   return (neuron0x1fdc710()*-0.00385462);
}

double NNfunction_sb_uLuL::synapse0x1fe6ff0() {
   return (neuron0x1fdca50()*-0.0347479);
}

double NNfunction_sb_uLuL::synapse0x1fe7030() {
   return (neuron0x1fdcd90()*3.31468);
}

double NNfunction_sb_uLuL::synapse0x1fe7070() {
   return (neuron0x1fdd0d0()*-0.0111204);
}

double NNfunction_sb_uLuL::synapse0x1fe70b0() {
   return (neuron0x1fdd410()*0.0011387);
}

double NNfunction_sb_uLuL::synapse0x1fe70f0() {
   return (neuron0x1fdd750()*-0.00489466);
}

double NNfunction_sb_uLuL::synapse0x1fe7130() {
   return (neuron0x1fdda90()*-0.0162313);
}

double NNfunction_sb_uLuL::synapse0x1fe7170() {
   return (neuron0x1fdddd0()*0.0201205);
}

double NNfunction_sb_uLuL::synapse0x1fe71b0() {
   return (neuron0x1fde110()*0.0107183);
}

double NNfunction_sb_uLuL::synapse0x1fe71f0() {
   return (neuron0x1fde450()*0.000163557);
}

double NNfunction_sb_uLuL::synapse0x1fe7230() {
   return (neuron0x1fde790()*0.55002);
}

double NNfunction_sb_uLuL::synapse0x1fe7270() {
   return (neuron0x1fdead0()*-0.0336399);
}

double NNfunction_sb_uLuL::synapse0x1fe72b0() {
   return (neuron0x1fdee10()*0.0273929);
}

double NNfunction_sb_uLuL::synapse0x1fe72f0() {
   return (neuron0x1fdf150()*-0.01925);
}

double NNfunction_sb_uLuL::synapse0x1fe7330() {
   return (neuron0x1fdf490()*-0.023992);
}

double NNfunction_sb_uLuL::synapse0x1fe6dc0() {
   return (neuron0x1fdf7d0()*0.0302468);
}

double NNfunction_sb_uLuL::synapse0x1fe6e00() {
   return (neuron0x1fdfd30()*-0.0366432);
}

double NNfunction_sb_uLuL::synapse0x1fe7480() {
   return (neuron0x1fdff50()*-0.0103656);
}

double NNfunction_sb_uLuL::synapse0x1fe74c0() {
   return (neuron0x1fe0290()*-0.00536937);
}

double NNfunction_sb_uLuL::synapse0x1fe7500() {
   return (neuron0x1fe05d0()*-0.00445346);
}

double NNfunction_sb_uLuL::synapse0x1fe7540() {
   return (neuron0x1fe0910()*-0.0063497);
}

double NNfunction_sb_uLuL::synapse0x1fe7580() {
   return (neuron0x1fe0c50()*-0.0123094);
}

double NNfunction_sb_uLuL::synapse0x1fe75c0() {
   return (neuron0x1fe0f90()*-0.00632647);
}

double NNfunction_sb_uLuL::synapse0x1fe7940() {
   return (neuron0x1fdc3d0()*0.0326263);
}

double NNfunction_sb_uLuL::synapse0x1fe7980() {
   return (neuron0x1fdc710()*0.0117846);
}

double NNfunction_sb_uLuL::synapse0x1fe79c0() {
   return (neuron0x1fdca50()*0.0657256);
}

double NNfunction_sb_uLuL::synapse0x1fe7a00() {
   return (neuron0x1fdcd90()*0.476261);
}

double NNfunction_sb_uLuL::synapse0x1fe7a40() {
   return (neuron0x1fdd0d0()*0.0233569);
}

double NNfunction_sb_uLuL::synapse0x1fe7a80() {
   return (neuron0x1fdd410()*0.0222088);
}

double NNfunction_sb_uLuL::synapse0x1fe7ac0() {
   return (neuron0x1fdd750()*0.0421462);
}

double NNfunction_sb_uLuL::synapse0x1fe7b00() {
   return (neuron0x1fdda90()*0.0442765);
}

double NNfunction_sb_uLuL::synapse0x1fe7b40() {
   return (neuron0x1fdddd0()*0.00781395);
}

double NNfunction_sb_uLuL::synapse0x1fe7b80() {
   return (neuron0x1fde110()*0.00436365);
}

double NNfunction_sb_uLuL::synapse0x1fe7bc0() {
   return (neuron0x1fde450()*0.00302253);
}

double NNfunction_sb_uLuL::synapse0x1fe7c00() {
   return (neuron0x1fde790()*-9.10918e-05);
}

double NNfunction_sb_uLuL::synapse0x1fe7c40() {
   return (neuron0x1fdead0()*0.126898);
}

double NNfunction_sb_uLuL::synapse0x1fe7c80() {
   return (neuron0x1fdee10()*0.00946333);
}

double NNfunction_sb_uLuL::synapse0x1fe7cc0() {
   return (neuron0x1fdf150()*0.0888293);
}

double NNfunction_sb_uLuL::synapse0x1fe7d00() {
   return (neuron0x1fdf490()*0.0954142);
}

double NNfunction_sb_uLuL::synapse0x1fe7790() {
   return (neuron0x1fdf7d0()*0.0288043);
}

double NNfunction_sb_uLuL::synapse0x1fe77d0() {
   return (neuron0x1fdfd30()*0.0493108);
}

double NNfunction_sb_uLuL::synapse0x1fe4560() {
   return (neuron0x1fdff50()*0.0595476);
}

double NNfunction_sb_uLuL::synapse0x1fe45a0() {
   return (neuron0x1fe0290()*-0.0203513);
}

double NNfunction_sb_uLuL::synapse0x1fe45e0() {
   return (neuron0x1fe05d0()*0.0132147);
}

double NNfunction_sb_uLuL::synapse0x1fe4620() {
   return (neuron0x1fe0910()*-0.00354257);
}

double NNfunction_sb_uLuL::synapse0x1fe4660() {
   return (neuron0x1fe0c50()*0.00472063);
}

double NNfunction_sb_uLuL::synapse0x1fe46a0() {
   return (neuron0x1fe0f90()*-0.0254703);
}

double NNfunction_sb_uLuL::synapse0x1fe4a20() {
   return (neuron0x1fdc3d0()*-0.703093);
}

double NNfunction_sb_uLuL::synapse0x1fe4a60() {
   return (neuron0x1fdc710()*-0.194614);
}

double NNfunction_sb_uLuL::synapse0x1fe4aa0() {
   return (neuron0x1fdca50()*-0.185379);
}

double NNfunction_sb_uLuL::synapse0x1fe4ae0() {
   return (neuron0x1fdcd90()*1.28888);
}

double NNfunction_sb_uLuL::synapse0x1fe4b20() {
   return (neuron0x1fdd0d0()*0.000189974);
}

double NNfunction_sb_uLuL::synapse0x1fe4b60() {
   return (neuron0x1fdd410()*-0.091008);
}

double NNfunction_sb_uLuL::synapse0x1fe4ba0() {
   return (neuron0x1fdd750()*-0.318493);
}

double NNfunction_sb_uLuL::synapse0x1fe4be0() {
   return (neuron0x1fdda90()*-0.235395);
}

double NNfunction_sb_uLuL::synapse0x1fe4c20() {
   return (neuron0x1fdddd0()*-0.177168);
}

double NNfunction_sb_uLuL::synapse0x1fe4c60() {
   return (neuron0x1fde110()*0.329007);
}

double NNfunction_sb_uLuL::synapse0x1fe4ca0() {
   return (neuron0x1fde450()*0.01518);
}

double NNfunction_sb_uLuL::synapse0x1fe4ce0() {
   return (neuron0x1fde790()*0.677861);
}

double NNfunction_sb_uLuL::synapse0x1fe4d20() {
   return (neuron0x1fdead0()*0.155696);
}

double NNfunction_sb_uLuL::synapse0x1fe8e60() {
   return (neuron0x1fdee10()*0.328276);
}

double NNfunction_sb_uLuL::synapse0x1fe8ea0() {
   return (neuron0x1fdf150()*-0.549604);
}

double NNfunction_sb_uLuL::synapse0x1fe8ee0() {
   return (neuron0x1fdf490()*0.415627);
}

double NNfunction_sb_uLuL::synapse0x1fe4870() {
   return (neuron0x1fdf7d0()*-0.470645);
}

double NNfunction_sb_uLuL::synapse0x1fe48b0() {
   return (neuron0x1fdfd30()*-0.176802);
}

double NNfunction_sb_uLuL::synapse0x1fe9030() {
   return (neuron0x1fdff50()*0.191991);
}

double NNfunction_sb_uLuL::synapse0x1fe9070() {
   return (neuron0x1fe0290()*-0.511693);
}

double NNfunction_sb_uLuL::synapse0x1fe90b0() {
   return (neuron0x1fe05d0()*-0.2241);
}

double NNfunction_sb_uLuL::synapse0x1fe90f0() {
   return (neuron0x1fe0910()*-0.415945);
}

double NNfunction_sb_uLuL::synapse0x1fe9130() {
   return (neuron0x1fe0c50()*0.830607);
}

double NNfunction_sb_uLuL::synapse0x1fe9170() {
   return (neuron0x1fe0f90()*-0.254298);
}

double NNfunction_sb_uLuL::synapse0x1fe94f0() {
   return (neuron0x1fdc3d0()*-0.026373);
}

double NNfunction_sb_uLuL::synapse0x1fe9530() {
   return (neuron0x1fdc710()*0.109817);
}

double NNfunction_sb_uLuL::synapse0x1fe9570() {
   return (neuron0x1fdca50()*-0.528921);
}

double NNfunction_sb_uLuL::synapse0x1fe95b0() {
   return (neuron0x1fdcd90()*-1.29689);
}

double NNfunction_sb_uLuL::synapse0x1fe95f0() {
   return (neuron0x1fdd0d0()*0.0880182);
}

double NNfunction_sb_uLuL::synapse0x1fe9630() {
   return (neuron0x1fdd410()*0.0926195);
}

double NNfunction_sb_uLuL::synapse0x1fe9670() {
   return (neuron0x1fdd750()*0.0209092);
}

double NNfunction_sb_uLuL::synapse0x1fe96b0() {
   return (neuron0x1fdda90()*0.276959);
}

double NNfunction_sb_uLuL::synapse0x1fe96f0() {
   return (neuron0x1fdddd0()*-0.119363);
}

double NNfunction_sb_uLuL::synapse0x1fe9730() {
   return (neuron0x1fde110()*0.0260744);
}

double NNfunction_sb_uLuL::synapse0x1fe9770() {
   return (neuron0x1fde450()*-0.0230151);
}

double NNfunction_sb_uLuL::synapse0x1fe97b0() {
   return (neuron0x1fde790()*-0.395163);
}

double NNfunction_sb_uLuL::synapse0x1fe97f0() {
   return (neuron0x1fdead0()*0.0581685);
}

double NNfunction_sb_uLuL::synapse0x1fe9830() {
   return (neuron0x1fdee10()*-0.0485906);
}

double NNfunction_sb_uLuL::synapse0x1fe9870() {
   return (neuron0x1fdf150()*0.00847573);
}

double NNfunction_sb_uLuL::synapse0x1fe98b0() {
   return (neuron0x1fdf490()*0.0234607);
}

double NNfunction_sb_uLuL::synapse0x1fe9340() {
   return (neuron0x1fdf7d0()*-0.221478);
}

double NNfunction_sb_uLuL::synapse0x1fe9380() {
   return (neuron0x1fdfd30()*0.147885);
}

double NNfunction_sb_uLuL::synapse0x1fe9a00() {
   return (neuron0x1fdff50()*0.0139046);
}

double NNfunction_sb_uLuL::synapse0x1fe9a40() {
   return (neuron0x1fe0290()*0.0400383);
}

double NNfunction_sb_uLuL::synapse0x1fe9a80() {
   return (neuron0x1fe05d0()*-0.0390051);
}

double NNfunction_sb_uLuL::synapse0x1fe9ac0() {
   return (neuron0x1fe0910()*-0.00977065);
}

double NNfunction_sb_uLuL::synapse0x1fe9b00() {
   return (neuron0x1fe0c50()*-0.137144);
}

double NNfunction_sb_uLuL::synapse0x1fe9b40() {
   return (neuron0x1fe0f90()*-0.0570254);
}

double NNfunction_sb_uLuL::synapse0x1fe9ec0() {
   return (neuron0x1fdc3d0()*0.100372);
}

double NNfunction_sb_uLuL::synapse0x1fe9f00() {
   return (neuron0x1fdc710()*0.240365);
}

double NNfunction_sb_uLuL::synapse0x1fe9f40() {
   return (neuron0x1fdca50()*0.0350563);
}

double NNfunction_sb_uLuL::synapse0x1fe9f80() {
   return (neuron0x1fdcd90()*0.835885);
}

double NNfunction_sb_uLuL::synapse0x1fe9fc0() {
   return (neuron0x1fdd0d0()*0.199098);
}

double NNfunction_sb_uLuL::synapse0x1fea000() {
   return (neuron0x1fdd410()*0.095006);
}

double NNfunction_sb_uLuL::synapse0x1fea040() {
   return (neuron0x1fdd750()*0.345767);
}

double NNfunction_sb_uLuL::synapse0x1fea080() {
   return (neuron0x1fdda90()*0.149327);
}

double NNfunction_sb_uLuL::synapse0x1fea0c0() {
   return (neuron0x1fdddd0()*-0.373213);
}

double NNfunction_sb_uLuL::synapse0x1fea100() {
   return (neuron0x1fde110()*-0.573573);
}

double NNfunction_sb_uLuL::synapse0x1fea140() {
   return (neuron0x1fde450()*-0.27896);
}

double NNfunction_sb_uLuL::synapse0x1fea180() {
   return (neuron0x1fde790()*-0.239879);
}

double NNfunction_sb_uLuL::synapse0x1fea1c0() {
   return (neuron0x1fdead0()*0.0569237);
}

double NNfunction_sb_uLuL::synapse0x1fea200() {
   return (neuron0x1fdee10()*0.025842);
}

double NNfunction_sb_uLuL::synapse0x1fea240() {
   return (neuron0x1fdf150()*-0.102077);
}

double NNfunction_sb_uLuL::synapse0x1fea280() {
   return (neuron0x1fdf490()*0.284955);
}

double NNfunction_sb_uLuL::synapse0x1fe9d10() {
   return (neuron0x1fdf7d0()*0.184688);
}

double NNfunction_sb_uLuL::synapse0x1fe9d50() {
   return (neuron0x1fdfd30()*0.249434);
}

double NNfunction_sb_uLuL::synapse0x1fea3d0() {
   return (neuron0x1fdff50()*0.415548);
}

double NNfunction_sb_uLuL::synapse0x1fea410() {
   return (neuron0x1fe0290()*-0.204892);
}

double NNfunction_sb_uLuL::synapse0x1fea450() {
   return (neuron0x1fe05d0()*-0.38463);
}

double NNfunction_sb_uLuL::synapse0x1fea490() {
   return (neuron0x1fe0910()*-0.251643);
}

double NNfunction_sb_uLuL::synapse0x1fea4d0() {
   return (neuron0x1fe0c50()*-0.141933);
}

double NNfunction_sb_uLuL::synapse0x1fea510() {
   return (neuron0x1fe0f90()*0.83013);
}

double NNfunction_sb_uLuL::synapse0x1fea890() {
   return (neuron0x1fdc3d0()*0.0266657);
}

double NNfunction_sb_uLuL::synapse0x1fea8d0() {
   return (neuron0x1fdc710()*0.16485);
}

double NNfunction_sb_uLuL::synapse0x1fea910() {
   return (neuron0x1fdca50()*-0.615642);
}

double NNfunction_sb_uLuL::synapse0x1fea950() {
   return (neuron0x1fdcd90()*-1.31235);
}

double NNfunction_sb_uLuL::synapse0x1fea990() {
   return (neuron0x1fdd0d0()*0.111092);
}

double NNfunction_sb_uLuL::synapse0x1fea9d0() {
   return (neuron0x1fdd410()*-0.107711);
}

double NNfunction_sb_uLuL::synapse0x1feaa10() {
   return (neuron0x1fdd750()*-0.000302105);
}

double NNfunction_sb_uLuL::synapse0x1feaa50() {
   return (neuron0x1fdda90()*-0.209793);
}

double NNfunction_sb_uLuL::synapse0x1feaa90() {
   return (neuron0x1fdddd0()*0.0905571);
}

double NNfunction_sb_uLuL::synapse0x1feaad0() {
   return (neuron0x1fde110()*-0.0872548);
}

double NNfunction_sb_uLuL::synapse0x1feab10() {
   return (neuron0x1fde450()*-0.0116805);
}

double NNfunction_sb_uLuL::synapse0x1feab50() {
   return (neuron0x1fde790()*-0.530122);
}

double NNfunction_sb_uLuL::synapse0x1feab90() {
   return (neuron0x1fdead0()*-0.31875);
}

double NNfunction_sb_uLuL::synapse0x1feabd0() {
   return (neuron0x1fdee10()*0.199729);
}

double NNfunction_sb_uLuL::synapse0x1feac10() {
   return (neuron0x1fdf150()*-0.133991);
}

double NNfunction_sb_uLuL::synapse0x1feac50() {
   return (neuron0x1fdf490()*-0.116715);
}

double NNfunction_sb_uLuL::synapse0x1fea6e0() {
   return (neuron0x1fdf7d0()*0.263521);
}

double NNfunction_sb_uLuL::synapse0x1fea720() {
   return (neuron0x1fdfd30()*-0.209828);
}

double NNfunction_sb_uLuL::synapse0x1feada0() {
   return (neuron0x1fdff50()*-0.141382);
}

double NNfunction_sb_uLuL::synapse0x1feade0() {
   return (neuron0x1fe0290()*-0.0755887);
}

double NNfunction_sb_uLuL::synapse0x1feae20() {
   return (neuron0x1fe05d0()*0.0346856);
}

double NNfunction_sb_uLuL::synapse0x1feae60() {
   return (neuron0x1fe0910()*0.111844);
}

double NNfunction_sb_uLuL::synapse0x1feaea0() {
   return (neuron0x1fe0c50()*-0.0214932);
}

double NNfunction_sb_uLuL::synapse0x1feaee0() {
   return (neuron0x1fe0f90()*0.0675198);
}

double NNfunction_sb_uLuL::synapse0x1feb260() {
   return (neuron0x1fdc3d0()*0.00353159);
}

double NNfunction_sb_uLuL::synapse0x1fdc5f0() {
   return (neuron0x1fdc710()*-0.00218567);
}

double NNfunction_sb_uLuL::synapse0x1fdc630() {
   return (neuron0x1fdca50()*0.0400698);
}

double NNfunction_sb_uLuL::synapse0x1fdc930() {
   return (neuron0x1fdcd90()*0.145785);
}

double NNfunction_sb_uLuL::synapse0x1fdc970() {
   return (neuron0x1fdd0d0()*-0.014287);
}

double NNfunction_sb_uLuL::synapse0x1fdcc70() {
   return (neuron0x1fdd410()*-0.00641138);
}

double NNfunction_sb_uLuL::synapse0x1fdccb0() {
   return (neuron0x1fdd750()*-0.0141955);
}

double NNfunction_sb_uLuL::synapse0x1fdcfb0() {
   return (neuron0x1fdda90()*-0.00320523);
}

double NNfunction_sb_uLuL::synapse0x1fdcff0() {
   return (neuron0x1fdddd0()*-0.00809409);
}

double NNfunction_sb_uLuL::synapse0x1fdd2f0() {
   return (neuron0x1fde110()*-0.00347191);
}

double NNfunction_sb_uLuL::synapse0x1fdd330() {
   return (neuron0x1fde450()*-0.00250344);
}

double NNfunction_sb_uLuL::synapse0x1fdd630() {
   return (neuron0x1fde790()*-4.64834);
}

double NNfunction_sb_uLuL::synapse0x1fdd670() {
   return (neuron0x1fdead0()*-0.0202578);
}

double NNfunction_sb_uLuL::synapse0x1fdd970() {
   return (neuron0x1fdee10()*-0.0344774);
}

double NNfunction_sb_uLuL::synapse0x1fdd9b0() {
   return (neuron0x1fdf150()*-0.011101);
}

double NNfunction_sb_uLuL::synapse0x1fddcb0() {
   return (neuron0x1fdf490()*-0.00466532);
}

double NNfunction_sb_uLuL::synapse0x1fddcf0() {
   return (neuron0x1fdf7d0()*-0.0295359);
}

double NNfunction_sb_uLuL::synapse0x1fddff0() {
   return (neuron0x1fdfd30()*-0.01769);
}

double NNfunction_sb_uLuL::synapse0x1fde030() {
   return (neuron0x1fdff50()*-0.0127742);
}

double NNfunction_sb_uLuL::synapse0x1fde330() {
   return (neuron0x1fe0290()*-0.00795572);
}

double NNfunction_sb_uLuL::synapse0x1fde370() {
   return (neuron0x1fe05d0()*0.00307839);
}

double NNfunction_sb_uLuL::synapse0x1fde670() {
   return (neuron0x1fe0910()*0.00376416);
}

double NNfunction_sb_uLuL::synapse0x1fde6b0() {
   return (neuron0x1fe0c50()*-0.0174743);
}

double NNfunction_sb_uLuL::synapse0x1fde9b0() {
   return (neuron0x1fe0f90()*0.0173776);
}

double NNfunction_sb_uLuL::synapse0x1fde9f0() {
   return (neuron0x1fdc3d0()*0.302053);
}

double NNfunction_sb_uLuL::synapse0x1fdf6b0() {
   return (neuron0x1fdc710()*-0.0253671);
}

double NNfunction_sb_uLuL::synapse0x1fdf6f0() {
   return (neuron0x1fdca50()*-0.249249);
}

double NNfunction_sb_uLuL::synapse0x1feb0b0() {
   return (neuron0x1fdcd90()*0.198162);
}

double NNfunction_sb_uLuL::synapse0x1feb0f0() {
   return (neuron0x1fdd0d0()*-0.252796);
}

double NNfunction_sb_uLuL::synapse0x1fdf9f0() {
   return (neuron0x1fdd410()*-0.179873);
}

double NNfunction_sb_uLuL::synapse0x1fdfa30() {
   return (neuron0x1fdd750()*-0.278371);
}

double NNfunction_sb_uLuL::synapse0x1d974a0() {
   return (neuron0x1fdda90()*-0.135604);
}

double NNfunction_sb_uLuL::synapse0x1d974e0() {
   return (neuron0x1fdddd0()*0.785504);
}

double NNfunction_sb_uLuL::synapse0x1fe0170() {
   return (neuron0x1fde110()*-0.154351);
}

double NNfunction_sb_uLuL::synapse0x1fe01b0() {
   return (neuron0x1fde450()*-0.158115);
}

double NNfunction_sb_uLuL::synapse0x1fe04b0() {
   return (neuron0x1fde790()*0.763934);
}

double NNfunction_sb_uLuL::synapse0x1fe04f0() {
   return (neuron0x1fdead0()*-0.383858);
}

double NNfunction_sb_uLuL::synapse0x1fe07f0() {
   return (neuron0x1fdee10()*-0.149663);
}

double NNfunction_sb_uLuL::synapse0x1fe0830() {
   return (neuron0x1fdf150()*-0.0166401);
}

double NNfunction_sb_uLuL::synapse0x1fe0b30() {
   return (neuron0x1fdf490()*-0.19239);
}

double NNfunction_sb_uLuL::synapse0x1fe0b70() {
   return (neuron0x1fdf7d0()*-0.0160643);
}

double NNfunction_sb_uLuL::synapse0x1fe0e70() {
   return (neuron0x1fdfd30()*-0.402371);
}

double NNfunction_sb_uLuL::synapse0x1fe0eb0() {
   return (neuron0x1fdff50()*0.141544);
}

double NNfunction_sb_uLuL::synapse0x1fe11b0() {
   return (neuron0x1fe0290()*-0.0202929);
}

double NNfunction_sb_uLuL::synapse0x1fe11f0() {
   return (neuron0x1fe05d0()*-0.132852);
}

double NNfunction_sb_uLuL::synapse0x1fdecf0() {
   return (neuron0x1fe0910()*-0.0464793);
}

double NNfunction_sb_uLuL::synapse0x1fded30() {
   return (neuron0x1fe0c50()*0.255978);
}

double NNfunction_sb_uLuL::synapse0x1fecfd0() {
   return (neuron0x1fe0f90()*0.230355);
}

double NNfunction_sb_uLuL::synapse0x1fed350() {
   return (neuron0x1fdc3d0()*-0.0792877);
}

double NNfunction_sb_uLuL::synapse0x1fed390() {
   return (neuron0x1fdc710()*0.105938);
}

double NNfunction_sb_uLuL::synapse0x1fed3d0() {
   return (neuron0x1fdca50()*0.933743);
}

double NNfunction_sb_uLuL::synapse0x1fed410() {
   return (neuron0x1fdcd90()*-0.476683);
}

double NNfunction_sb_uLuL::synapse0x1fed450() {
   return (neuron0x1fdd0d0()*0.122005);
}

double NNfunction_sb_uLuL::synapse0x1fed490() {
   return (neuron0x1fdd410()*0.0480657);
}

double NNfunction_sb_uLuL::synapse0x1fed4d0() {
   return (neuron0x1fdd750()*0.192271);
}

double NNfunction_sb_uLuL::synapse0x1fed510() {
   return (neuron0x1fdda90()*0.169007);
}

double NNfunction_sb_uLuL::synapse0x1fed550() {
   return (neuron0x1fdddd0()*0.0222875);
}

double NNfunction_sb_uLuL::synapse0x1fed590() {
   return (neuron0x1fde110()*0.0570519);
}

double NNfunction_sb_uLuL::synapse0x1fed5d0() {
   return (neuron0x1fde450()*-0.11894);
}

double NNfunction_sb_uLuL::synapse0x1fed610() {
   return (neuron0x1fde790()*-0.489291);
}

double NNfunction_sb_uLuL::synapse0x1fed650() {
   return (neuron0x1fdead0()*-0.172334);
}

double NNfunction_sb_uLuL::synapse0x1fed690() {
   return (neuron0x1fdee10()*0.458291);
}

double NNfunction_sb_uLuL::synapse0x1fed6d0() {
   return (neuron0x1fdf150()*-0.102627);
}

double NNfunction_sb_uLuL::synapse0x1fed710() {
   return (neuron0x1fdf490()*-0.262459);
}

double NNfunction_sb_uLuL::synapse0x1fed1a0() {
   return (neuron0x1fdf7d0()*0.878176);
}

double NNfunction_sb_uLuL::synapse0x1fed1e0() {
   return (neuron0x1fdfd30()*-0.119649);
}

double NNfunction_sb_uLuL::synapse0x1fed860() {
   return (neuron0x1fdff50()*-0.0655872);
}

double NNfunction_sb_uLuL::synapse0x1fed8a0() {
   return (neuron0x1fe0290()*-0.0345171);
}

double NNfunction_sb_uLuL::synapse0x1fed8e0() {
   return (neuron0x1fe05d0()*0.0119437);
}

double NNfunction_sb_uLuL::synapse0x1fed920() {
   return (neuron0x1fe0910()*-0.006777);
}

double NNfunction_sb_uLuL::synapse0x1fed960() {
   return (neuron0x1fe0c50()*-0.149739);
}

double NNfunction_sb_uLuL::synapse0x1fed9a0() {
   return (neuron0x1fe0f90()*-0.0976203);
}

double NNfunction_sb_uLuL::synapse0x1fedd20() {
   return (neuron0x1fdc3d0()*0.0663307);
}

double NNfunction_sb_uLuL::synapse0x1fedd60() {
   return (neuron0x1fdc710()*0.0090417);
}

double NNfunction_sb_uLuL::synapse0x1fedda0() {
   return (neuron0x1fdca50()*-1.00429);
}

double NNfunction_sb_uLuL::synapse0x1fedde0() {
   return (neuron0x1fdcd90()*0.045678);
}

double NNfunction_sb_uLuL::synapse0x1fede20() {
   return (neuron0x1fdd0d0()*-0.0486629);
}

double NNfunction_sb_uLuL::synapse0x1fede60() {
   return (neuron0x1fdd410()*0.0596615);
}

double NNfunction_sb_uLuL::synapse0x1fedea0() {
   return (neuron0x1fdd750()*0.124794);
}

double NNfunction_sb_uLuL::synapse0x1fedee0() {
   return (neuron0x1fdda90()*-0.119385);
}

double NNfunction_sb_uLuL::synapse0x1fedf20() {
   return (neuron0x1fdddd0()*0.0203198);
}

double NNfunction_sb_uLuL::synapse0x1fedf60() {
   return (neuron0x1fde110()*0.168099);
}

double NNfunction_sb_uLuL::synapse0x1fedfa0() {
   return (neuron0x1fde450()*-0.019088);
}

double NNfunction_sb_uLuL::synapse0x1fedfe0() {
   return (neuron0x1fde790()*-1.17509);
}

double NNfunction_sb_uLuL::synapse0x1fee020() {
   return (neuron0x1fdead0()*0.0125234);
}

double NNfunction_sb_uLuL::synapse0x1fee060() {
   return (neuron0x1fdee10()*0.0511421);
}

double NNfunction_sb_uLuL::synapse0x1fee0a0() {
   return (neuron0x1fdf150()*-0.121287);
}

double NNfunction_sb_uLuL::synapse0x1fee0e0() {
   return (neuron0x1fdf490()*0.060096);
}

double NNfunction_sb_uLuL::synapse0x1fedb70() {
   return (neuron0x1fdf7d0()*-0.0164248);
}

double NNfunction_sb_uLuL::synapse0x1fedbb0() {
   return (neuron0x1fdfd30()*-0.0213034);
}

double NNfunction_sb_uLuL::synapse0x1fee230() {
   return (neuron0x1fdff50()*0.0602197);
}

double NNfunction_sb_uLuL::synapse0x1fee270() {
   return (neuron0x1fe0290()*0.0198652);
}

double NNfunction_sb_uLuL::synapse0x1fee2b0() {
   return (neuron0x1fe05d0()*0.0425566);
}

double NNfunction_sb_uLuL::synapse0x1fee2f0() {
   return (neuron0x1fe0910()*0.045295);
}

double NNfunction_sb_uLuL::synapse0x1fee330() {
   return (neuron0x1fe0c50()*0.000277453);
}

double NNfunction_sb_uLuL::synapse0x1fee370() {
   return (neuron0x1fe0f90()*0.0132666);
}

double NNfunction_sb_uLuL::synapse0x1fee6f0() {
   return (neuron0x1fdc3d0()*-0.168136);
}

double NNfunction_sb_uLuL::synapse0x1fee730() {
   return (neuron0x1fdc710()*0.549746);
}

double NNfunction_sb_uLuL::synapse0x1fee770() {
   return (neuron0x1fdca50()*-0.673774);
}

double NNfunction_sb_uLuL::synapse0x1fee7b0() {
   return (neuron0x1fdcd90()*-0.015762);
}

double NNfunction_sb_uLuL::synapse0x1fee7f0() {
   return (neuron0x1fdd0d0()*-0.0948302);
}

double NNfunction_sb_uLuL::synapse0x1fee830() {
   return (neuron0x1fdd410()*0.801362);
}

double NNfunction_sb_uLuL::synapse0x1fee870() {
   return (neuron0x1fdd750()*0.0920799);
}

double NNfunction_sb_uLuL::synapse0x1fee8b0() {
   return (neuron0x1fdda90()*-0.533656);
}

double NNfunction_sb_uLuL::synapse0x1fee8f0() {
   return (neuron0x1fdddd0()*-0.152972);
}

double NNfunction_sb_uLuL::synapse0x1fee930() {
   return (neuron0x1fde110()*-0.0148264);
}

double NNfunction_sb_uLuL::synapse0x1fee970() {
   return (neuron0x1fde450()*0.639011);
}

double NNfunction_sb_uLuL::synapse0x1fee9b0() {
   return (neuron0x1fde790()*-0.447769);
}

double NNfunction_sb_uLuL::synapse0x1fee9f0() {
   return (neuron0x1fdead0()*0.0892814);
}

double NNfunction_sb_uLuL::synapse0x1feea30() {
   return (neuron0x1fdee10()*0.549745);
}

double NNfunction_sb_uLuL::synapse0x1feea70() {
   return (neuron0x1fdf150()*-0.0892651);
}

double NNfunction_sb_uLuL::synapse0x1feeab0() {
   return (neuron0x1fdf490()*-0.393359);
}

double NNfunction_sb_uLuL::synapse0x1fee540() {
   return (neuron0x1fdf7d0()*-0.0362593);
}

double NNfunction_sb_uLuL::synapse0x1fee580() {
   return (neuron0x1fdfd30()*-0.326212);
}

double NNfunction_sb_uLuL::synapse0x1feec00() {
   return (neuron0x1fdff50()*0.322066);
}

double NNfunction_sb_uLuL::synapse0x1feec40() {
   return (neuron0x1fe0290()*-0.260264);
}

double NNfunction_sb_uLuL::synapse0x1feec80() {
   return (neuron0x1fe05d0()*-0.253043);
}

double NNfunction_sb_uLuL::synapse0x1feecc0() {
   return (neuron0x1fe0910()*0.276344);
}

double NNfunction_sb_uLuL::synapse0x1feed00() {
   return (neuron0x1fe0c50()*-0.166335);
}

double NNfunction_sb_uLuL::synapse0x1feed40() {
   return (neuron0x1fe0f90()*-0.124237);
}

double NNfunction_sb_uLuL::synapse0x1fef0c0() {
   return (neuron0x1fdc3d0()*-0.224564);
}

double NNfunction_sb_uLuL::synapse0x1fef100() {
   return (neuron0x1fdc710()*-0.15535);
}

double NNfunction_sb_uLuL::synapse0x1fef140() {
   return (neuron0x1fdca50()*-0.228571);
}

double NNfunction_sb_uLuL::synapse0x1fef180() {
   return (neuron0x1fdcd90()*0.760928);
}

double NNfunction_sb_uLuL::synapse0x1fef1c0() {
   return (neuron0x1fdd0d0()*-0.148997);
}

double NNfunction_sb_uLuL::synapse0x1fef200() {
   return (neuron0x1fdd410()*0.10155);
}

double NNfunction_sb_uLuL::synapse0x1fef240() {
   return (neuron0x1fdd750()*-0.36607);
}

double NNfunction_sb_uLuL::synapse0x1fef280() {
   return (neuron0x1fdda90()*0.343464);
}

double NNfunction_sb_uLuL::synapse0x1fef2c0() {
   return (neuron0x1fdddd0()*0.0303481);
}

double NNfunction_sb_uLuL::synapse0x1fef300() {
   return (neuron0x1fde110()*-0.257263);
}

double NNfunction_sb_uLuL::synapse0x1fef340() {
   return (neuron0x1fde450()*0.366052);
}

double NNfunction_sb_uLuL::synapse0x1fef380() {
   return (neuron0x1fde790()*0.271575);
}

double NNfunction_sb_uLuL::synapse0x1fef3c0() {
   return (neuron0x1fdead0()*0.0478982);
}

double NNfunction_sb_uLuL::synapse0x1fef400() {
   return (neuron0x1fdee10()*-0.479499);
}

double NNfunction_sb_uLuL::synapse0x1fef440() {
   return (neuron0x1fdf150()*-0.136703);
}

double NNfunction_sb_uLuL::synapse0x1fef480() {
   return (neuron0x1fdf490()*0.00991186);
}

double NNfunction_sb_uLuL::synapse0x1feef10() {
   return (neuron0x1fdf7d0()*0.0903336);
}

double NNfunction_sb_uLuL::synapse0x1feef50() {
   return (neuron0x1fdfd30()*-0.00560662);
}

double NNfunction_sb_uLuL::synapse0x1fef5d0() {
   return (neuron0x1fdff50()*0.107041);
}

double NNfunction_sb_uLuL::synapse0x1fef610() {
   return (neuron0x1fe0290()*0.22674);
}

double NNfunction_sb_uLuL::synapse0x1fef650() {
   return (neuron0x1fe05d0()*0.125679);
}

double NNfunction_sb_uLuL::synapse0x1fef690() {
   return (neuron0x1fe0910()*0.00437323);
}

double NNfunction_sb_uLuL::synapse0x1fef6d0() {
   return (neuron0x1fe0c50()*-0.100569);
}

double NNfunction_sb_uLuL::synapse0x1fef710() {
   return (neuron0x1fe0f90()*-0.228277);
}

double NNfunction_sb_uLuL::synapse0x1fefa90() {
   return (neuron0x1fdc3d0()*-0.0321412);
}

double NNfunction_sb_uLuL::synapse0x1fefad0() {
   return (neuron0x1fdc710()*-0.00324625);
}

double NNfunction_sb_uLuL::synapse0x1fefb10() {
   return (neuron0x1fdca50()*-0.264912);
}

double NNfunction_sb_uLuL::synapse0x1fefb50() {
   return (neuron0x1fdcd90()*0.107288);
}

double NNfunction_sb_uLuL::synapse0x1fefb90() {
   return (neuron0x1fdd0d0()*-0.423228);
}

double NNfunction_sb_uLuL::synapse0x1fefbd0() {
   return (neuron0x1fdd410()*-0.222142);
}

double NNfunction_sb_uLuL::synapse0x1fefc10() {
   return (neuron0x1fdd750()*-0.0154491);
}

double NNfunction_sb_uLuL::synapse0x1fefc50() {
   return (neuron0x1fdda90()*1.22843);
}

double NNfunction_sb_uLuL::synapse0x1fefc90() {
   return (neuron0x1fdddd0()*0.222993);
}

double NNfunction_sb_uLuL::synapse0x1fe7e50() {
   return (neuron0x1fde110()*-0.108763);
}

double NNfunction_sb_uLuL::synapse0x1fe7e90() {
   return (neuron0x1fde450()*0.244568);
}

double NNfunction_sb_uLuL::synapse0x1fe7ed0() {
   return (neuron0x1fde790()*0.0685508);
}

double NNfunction_sb_uLuL::synapse0x1fe7f10() {
   return (neuron0x1fdead0()*-0.375103);
}

double NNfunction_sb_uLuL::synapse0x1fe7f50() {
   return (neuron0x1fdee10()*0.197769);
}

double NNfunction_sb_uLuL::synapse0x1fe7f90() {
   return (neuron0x1fdf150()*-0.802002);
}

double NNfunction_sb_uLuL::synapse0x1fe7fd0() {
   return (neuron0x1fdf490()*-0.239892);
}

double NNfunction_sb_uLuL::synapse0x1fef8e0() {
   return (neuron0x1fdf7d0()*-0.0766446);
}

double NNfunction_sb_uLuL::synapse0x1fef920() {
   return (neuron0x1fdfd30()*-0.368507);
}

double NNfunction_sb_uLuL::synapse0x1fe8120() {
   return (neuron0x1fdff50()*-0.0676923);
}

double NNfunction_sb_uLuL::synapse0x1fe8160() {
   return (neuron0x1fe0290()*-0.255791);
}

double NNfunction_sb_uLuL::synapse0x1fe81a0() {
   return (neuron0x1fe05d0()*0.72877);
}

double NNfunction_sb_uLuL::synapse0x1fe81e0() {
   return (neuron0x1fe0910()*-0.247945);
}

double NNfunction_sb_uLuL::synapse0x1fe8220() {
   return (neuron0x1fe0c50()*-0.163522);
}

double NNfunction_sb_uLuL::synapse0x1fe8260() {
   return (neuron0x1fe0f90()*0.227964);
}

double NNfunction_sb_uLuL::synapse0x1fe85e0() {
   return (neuron0x1fdc3d0()*0.012021);
}

double NNfunction_sb_uLuL::synapse0x1fe8620() {
   return (neuron0x1fdc710()*-0.0087416);
}

double NNfunction_sb_uLuL::synapse0x1fe8660() {
   return (neuron0x1fdca50()*0.0331938);
}

double NNfunction_sb_uLuL::synapse0x1fe86a0() {
   return (neuron0x1fdcd90()*-0.0456188);
}

double NNfunction_sb_uLuL::synapse0x1fe86e0() {
   return (neuron0x1fdd0d0()*-0.0120575);
}

double NNfunction_sb_uLuL::synapse0x1fe8720() {
   return (neuron0x1fdd410()*-0.00976718);
}

double NNfunction_sb_uLuL::synapse0x1fe8760() {
   return (neuron0x1fdd750()*-0.0121884);
}

double NNfunction_sb_uLuL::synapse0x1fe87a0() {
   return (neuron0x1fdda90()*-0.019552);
}

double NNfunction_sb_uLuL::synapse0x1fe87e0() {
   return (neuron0x1fdddd0()*0.00647582);
}

double NNfunction_sb_uLuL::synapse0x1fe8820() {
   return (neuron0x1fde110()*-0.00570412);
}

double NNfunction_sb_uLuL::synapse0x1fe8860() {
   return (neuron0x1fde450()*0.0222874);
}

double NNfunction_sb_uLuL::synapse0x1fe88a0() {
   return (neuron0x1fde790()*-2.27662);
}

double NNfunction_sb_uLuL::synapse0x1fe88e0() {
   return (neuron0x1fdead0()*-0.0194572);
}

double NNfunction_sb_uLuL::synapse0x1fe8920() {
   return (neuron0x1fdee10()*-0.0178607);
}

double NNfunction_sb_uLuL::synapse0x1fe8960() {
   return (neuron0x1fdf150()*-0.00627387);
}

double NNfunction_sb_uLuL::synapse0x1fe89a0() {
   return (neuron0x1fdf490()*-0.0135183);
}

double NNfunction_sb_uLuL::synapse0x1fe8430() {
   return (neuron0x1fdf7d0()*-0.0189168);
}

double NNfunction_sb_uLuL::synapse0x1fe8470() {
   return (neuron0x1fdfd30()*-0.00244062);
}

double NNfunction_sb_uLuL::synapse0x1fe8af0() {
   return (neuron0x1fdff50()*-0.00962547);
}

double NNfunction_sb_uLuL::synapse0x1fe8b30() {
   return (neuron0x1fe0290()*-0.000889625);
}

double NNfunction_sb_uLuL::synapse0x1fe8b70() {
   return (neuron0x1fe05d0()*-0.00373154);
}

double NNfunction_sb_uLuL::synapse0x1fe8bb0() {
   return (neuron0x1fe0910()*0.00785392);
}

double NNfunction_sb_uLuL::synapse0x1fe8bf0() {
   return (neuron0x1fe0c50()*0.00371186);
}

double NNfunction_sb_uLuL::synapse0x1fe8c30() {
   return (neuron0x1fe0f90()*0.0151258);
}

double NNfunction_sb_uLuL::synapse0x1fe8e00() {
   return (neuron0x1fdc3d0()*0.664768);
}

double NNfunction_sb_uLuL::synapse0x1ff1e90() {
   return (neuron0x1fdc710()*-0.0618314);
}

double NNfunction_sb_uLuL::synapse0x1ff1ed0() {
   return (neuron0x1fdca50()*-0.0960519);
}

double NNfunction_sb_uLuL::synapse0x1ff1f10() {
   return (neuron0x1fdcd90()*0.416433);
}

double NNfunction_sb_uLuL::synapse0x1ff1f50() {
   return (neuron0x1fdd0d0()*0.178482);
}

double NNfunction_sb_uLuL::synapse0x1ff1f90() {
   return (neuron0x1fdd410()*-0.24156);
}

double NNfunction_sb_uLuL::synapse0x1ff1fd0() {
   return (neuron0x1fdd750()*-0.0927252);
}

double NNfunction_sb_uLuL::synapse0x1ff2010() {
   return (neuron0x1fdda90()*-0.0258712);
}

double NNfunction_sb_uLuL::synapse0x1ff2050() {
   return (neuron0x1fdddd0()*-0.378382);
}

double NNfunction_sb_uLuL::synapse0x1ff2090() {
   return (neuron0x1fde110()*0.442054);
}

double NNfunction_sb_uLuL::synapse0x1ff20d0() {
   return (neuron0x1fde450()*0.25666);
}

double NNfunction_sb_uLuL::synapse0x1ff2110() {
   return (neuron0x1fde790()*1.1057);
}

double NNfunction_sb_uLuL::synapse0x1ff2150() {
   return (neuron0x1fdead0()*0.110039);
}

double NNfunction_sb_uLuL::synapse0x1ff2190() {
   return (neuron0x1fdee10()*-0.0591104);
}

double NNfunction_sb_uLuL::synapse0x1ff21d0() {
   return (neuron0x1fdf150()*-0.0678385);
}

double NNfunction_sb_uLuL::synapse0x1ff2210() {
   return (neuron0x1fdf490()*0.00529549);
}

double NNfunction_sb_uLuL::synapse0x1ff1ce0() {
   return (neuron0x1fdf7d0()*-0.04841);
}

double NNfunction_sb_uLuL::synapse0x1ff1d20() {
   return (neuron0x1fdfd30()*0.115899);
}

double NNfunction_sb_uLuL::synapse0x1ff2360() {
   return (neuron0x1fdff50()*-0.466853);
}

double NNfunction_sb_uLuL::synapse0x1ff23a0() {
   return (neuron0x1fe0290()*0.258521);
}

double NNfunction_sb_uLuL::synapse0x1ff23e0() {
   return (neuron0x1fe05d0()*-0.119408);
}

double NNfunction_sb_uLuL::synapse0x1ff2420() {
   return (neuron0x1fe0910()*-0.0211653);
}

double NNfunction_sb_uLuL::synapse0x1ff2460() {
   return (neuron0x1fe0c50()*0.0764592);
}

double NNfunction_sb_uLuL::synapse0x1ff24a0() {
   return (neuron0x1fe0f90()*0.18606);
}

double NNfunction_sb_uLuL::synapse0x1ff2820() {
   return (neuron0x1fdc3d0()*-0.0197082);
}

double NNfunction_sb_uLuL::synapse0x1ff2860() {
   return (neuron0x1fdc710()*-0.280855);
}

double NNfunction_sb_uLuL::synapse0x1ff28a0() {
   return (neuron0x1fdca50()*0.349274);
}

double NNfunction_sb_uLuL::synapse0x1ff28e0() {
   return (neuron0x1fdcd90()*1.56125);
}

double NNfunction_sb_uLuL::synapse0x1ff2920() {
   return (neuron0x1fdd0d0()*-0.150158);
}

double NNfunction_sb_uLuL::synapse0x1ff2960() {
   return (neuron0x1fdd410()*0.0354139);
}

double NNfunction_sb_uLuL::synapse0x1ff29a0() {
   return (neuron0x1fdd750()*-0.152058);
}

double NNfunction_sb_uLuL::synapse0x1ff29e0() {
   return (neuron0x1fdda90()*0.100143);
}

double NNfunction_sb_uLuL::synapse0x1ff2a20() {
   return (neuron0x1fdddd0()*0.037567);
}

double NNfunction_sb_uLuL::synapse0x1ff2a60() {
   return (neuron0x1fde110()*0.13194);
}

double NNfunction_sb_uLuL::synapse0x1ff2aa0() {
   return (neuron0x1fde450()*0.0215448);
}

double NNfunction_sb_uLuL::synapse0x1ff2ae0() {
   return (neuron0x1fde790()*1.47683);
}

double NNfunction_sb_uLuL::synapse0x1ff2b20() {
   return (neuron0x1fdead0()*0.241364);
}

double NNfunction_sb_uLuL::synapse0x1ff2b60() {
   return (neuron0x1fdee10()*0.046447);
}

double NNfunction_sb_uLuL::synapse0x1ff2ba0() {
   return (neuron0x1fdf150()*0.0232262);
}

double NNfunction_sb_uLuL::synapse0x1ff2be0() {
   return (neuron0x1fdf490()*-0.136307);
}

double NNfunction_sb_uLuL::synapse0x1ff2670() {
   return (neuron0x1fdf7d0()*-0.160316);
}

double NNfunction_sb_uLuL::synapse0x1ff26b0() {
   return (neuron0x1fdfd30()*0.274474);
}

double NNfunction_sb_uLuL::synapse0x1ff2d30() {
   return (neuron0x1fdff50()*0.107983);
}

double NNfunction_sb_uLuL::synapse0x1ff2d70() {
   return (neuron0x1fe0290()*0.115043);
}

double NNfunction_sb_uLuL::synapse0x1ff2db0() {
   return (neuron0x1fe05d0()*-0.00343435);
}

double NNfunction_sb_uLuL::synapse0x1ff2df0() {
   return (neuron0x1fe0910()*0.00357161);
}

double NNfunction_sb_uLuL::synapse0x1ff2e30() {
   return (neuron0x1fe0c50()*-0.0547273);
}

double NNfunction_sb_uLuL::synapse0x1ff2e70() {
   return (neuron0x1fe0f90()*0.0144241);
}

double NNfunction_sb_uLuL::synapse0x1ff31f0() {
   return (neuron0x1fdc3d0()*-0.023178);
}

double NNfunction_sb_uLuL::synapse0x1ff3230() {
   return (neuron0x1fdc710()*0.0603065);
}

double NNfunction_sb_uLuL::synapse0x1ff3270() {
   return (neuron0x1fdca50()*-0.158317);
}

double NNfunction_sb_uLuL::synapse0x1ff32b0() {
   return (neuron0x1fdcd90()*-0.959348);
}

double NNfunction_sb_uLuL::synapse0x1ff32f0() {
   return (neuron0x1fdd0d0()*-0.05328);
}

double NNfunction_sb_uLuL::synapse0x1ff3330() {
   return (neuron0x1fdd410()*0.0369121);
}

double NNfunction_sb_uLuL::synapse0x1ff3370() {
   return (neuron0x1fdd750()*0.0552444);
}

double NNfunction_sb_uLuL::synapse0x1ff33b0() {
   return (neuron0x1fdda90()*0.0954397);
}

double NNfunction_sb_uLuL::synapse0x1ff33f0() {
   return (neuron0x1fdddd0()*0.092377);
}

double NNfunction_sb_uLuL::synapse0x1ff3430() {
   return (neuron0x1fde110()*0.190782);
}

double NNfunction_sb_uLuL::synapse0x1ff3470() {
   return (neuron0x1fde450()*-0.176892);
}

double NNfunction_sb_uLuL::synapse0x1ff34b0() {
   return (neuron0x1fde790()*-2.57414);
}

double NNfunction_sb_uLuL::synapse0x1ff34f0() {
   return (neuron0x1fdead0()*-0.148618);
}

double NNfunction_sb_uLuL::synapse0x1ff3530() {
   return (neuron0x1fdee10()*-0.182612);
}

double NNfunction_sb_uLuL::synapse0x1ff3570() {
   return (neuron0x1fdf150()*0.0371549);
}

double NNfunction_sb_uLuL::synapse0x1ff35b0() {
   return (neuron0x1fdf490()*-0.022043);
}

double NNfunction_sb_uLuL::synapse0x1ff3040() {
   return (neuron0x1fdf7d0()*-0.114725);
}

double NNfunction_sb_uLuL::synapse0x1ff3080() {
   return (neuron0x1fdfd30()*-0.145269);
}

double NNfunction_sb_uLuL::synapse0x1ff3700() {
   return (neuron0x1fdff50()*-0.150506);
}

double NNfunction_sb_uLuL::synapse0x1ff3740() {
   return (neuron0x1fe0290()*-0.0368604);
}

double NNfunction_sb_uLuL::synapse0x1ff3780() {
   return (neuron0x1fe05d0()*-0.0578944);
}

double NNfunction_sb_uLuL::synapse0x1ff37c0() {
   return (neuron0x1fe0910()*0.0462589);
}

double NNfunction_sb_uLuL::synapse0x1ff3800() {
   return (neuron0x1fe0c50()*-0.0896355);
}

double NNfunction_sb_uLuL::synapse0x1ff3840() {
   return (neuron0x1fe0f90()*0.0150942);
}

double NNfunction_sb_uLuL::synapse0x1ff3bc0() {
   return (neuron0x1fdc3d0()*0.0796968);
}

double NNfunction_sb_uLuL::synapse0x1ff3c00() {
   return (neuron0x1fdc710()*0.0166508);
}

double NNfunction_sb_uLuL::synapse0x1ff3c40() {
   return (neuron0x1fdca50()*1.24665);
}

double NNfunction_sb_uLuL::synapse0x1ff3c80() {
   return (neuron0x1fdcd90()*0.05465);
}

double NNfunction_sb_uLuL::synapse0x1ff3cc0() {
   return (neuron0x1fdd0d0()*0.0317207);
}

double NNfunction_sb_uLuL::synapse0x1ff3d00() {
   return (neuron0x1fdd410()*0.0136886);
}

double NNfunction_sb_uLuL::synapse0x1ff3d40() {
   return (neuron0x1fdd750()*0.0257757);
}

double NNfunction_sb_uLuL::synapse0x1ff3d80() {
   return (neuron0x1fdda90()*-0.0115757);
}

double NNfunction_sb_uLuL::synapse0x1ff3dc0() {
   return (neuron0x1fdddd0()*-0.0217598);
}

double NNfunction_sb_uLuL::synapse0x1ff3e00() {
   return (neuron0x1fde110()*0.00296421);
}

double NNfunction_sb_uLuL::synapse0x1ff3e40() {
   return (neuron0x1fde450()*0.0261488);
}

double NNfunction_sb_uLuL::synapse0x1ff3e80() {
   return (neuron0x1fde790()*-0.45397);
}

double NNfunction_sb_uLuL::synapse0x1ff3ec0() {
   return (neuron0x1fdead0()*-0.014018);
}

double NNfunction_sb_uLuL::synapse0x1ff3f00() {
   return (neuron0x1fdee10()*0.0409405);
}

double NNfunction_sb_uLuL::synapse0x1ff3f40() {
   return (neuron0x1fdf150()*-0.0137251);
}

double NNfunction_sb_uLuL::synapse0x1ff3f80() {
   return (neuron0x1fdf490()*0.00132128);
}

double NNfunction_sb_uLuL::synapse0x1ff3a10() {
   return (neuron0x1fdf7d0()*0.0297997);
}

double NNfunction_sb_uLuL::synapse0x1ff3a50() {
   return (neuron0x1fdfd30()*0.0138779);
}

double NNfunction_sb_uLuL::synapse0x1ff40d0() {
   return (neuron0x1fdff50()*0.00669277);
}

double NNfunction_sb_uLuL::synapse0x1ff4110() {
   return (neuron0x1fe0290()*-0.0232076);
}

double NNfunction_sb_uLuL::synapse0x1ff4150() {
   return (neuron0x1fe05d0()*0.026413);
}

double NNfunction_sb_uLuL::synapse0x1ff4190() {
   return (neuron0x1fe0910()*0.00235362);
}

double NNfunction_sb_uLuL::synapse0x1ff41d0() {
   return (neuron0x1fe0c50()*0.00235916);
}

double NNfunction_sb_uLuL::synapse0x1ff4210() {
   return (neuron0x1fe0f90()*0.00872962);
}

double NNfunction_sb_uLuL::synapse0x1ff4590() {
   return (neuron0x1fdc3d0()*0.00233827);
}

double NNfunction_sb_uLuL::synapse0x1ff45d0() {
   return (neuron0x1fdc710()*-0.0129861);
}

double NNfunction_sb_uLuL::synapse0x1ff4610() {
   return (neuron0x1fdca50()*0.0357609);
}

double NNfunction_sb_uLuL::synapse0x1ff4650() {
   return (neuron0x1fdcd90()*6.85516);
}

double NNfunction_sb_uLuL::synapse0x1ff4690() {
   return (neuron0x1fdd0d0()*-0.0341138);
}

double NNfunction_sb_uLuL::synapse0x1ff46d0() {
   return (neuron0x1fdd410()*-0.000509886);
}

double NNfunction_sb_uLuL::synapse0x1ff4710() {
   return (neuron0x1fdd750()*-0.0329539);
}

double NNfunction_sb_uLuL::synapse0x1ff4750() {
   return (neuron0x1fdda90()*-0.0046921);
}

double NNfunction_sb_uLuL::synapse0x1ff4790() {
   return (neuron0x1fdddd0()*0.0223404);
}

double NNfunction_sb_uLuL::synapse0x1ff47d0() {
   return (neuron0x1fde110()*0.033564);
}

double NNfunction_sb_uLuL::synapse0x1ff4810() {
   return (neuron0x1fde450()*0.00786003);
}

double NNfunction_sb_uLuL::synapse0x1ff4850() {
   return (neuron0x1fde790()*1.2554);
}

double NNfunction_sb_uLuL::synapse0x1ff4890() {
   return (neuron0x1fdead0()*-0.0677527);
}

double NNfunction_sb_uLuL::synapse0x1ff48d0() {
   return (neuron0x1fdee10()*0.0795282);
}

double NNfunction_sb_uLuL::synapse0x1ff4910() {
   return (neuron0x1fdf150()*0.000860838);
}

double NNfunction_sb_uLuL::synapse0x1ff4950() {
   return (neuron0x1fdf490()*-0.0277533);
}

double NNfunction_sb_uLuL::synapse0x1ff43e0() {
   return (neuron0x1fdf7d0()*0.0645014);
}

double NNfunction_sb_uLuL::synapse0x1ff4420() {
   return (neuron0x1fdfd30()*-0.0514046);
}

double NNfunction_sb_uLuL::synapse0x1ff4aa0() {
   return (neuron0x1fdff50()*-0.0215535);
}

double NNfunction_sb_uLuL::synapse0x1ff4ae0() {
   return (neuron0x1fe0290()*0.00648591);
}

double NNfunction_sb_uLuL::synapse0x1ff4b20() {
   return (neuron0x1fe05d0()*9.26467e-05);
}

double NNfunction_sb_uLuL::synapse0x1ff4b60() {
   return (neuron0x1fe0910()*-0.00974848);
}

double NNfunction_sb_uLuL::synapse0x1ff4ba0() {
   return (neuron0x1fe0c50()*-0.0268956);
}

double NNfunction_sb_uLuL::synapse0x1ff4be0() {
   return (neuron0x1fe0f90()*-0.00795923);
}

double NNfunction_sb_uLuL::synapse0x1ff4f60() {
   return (neuron0x1fdc3d0()*-0.135921);
}

double NNfunction_sb_uLuL::synapse0x1ff4fa0() {
   return (neuron0x1fdc710()*0.267336);
}

double NNfunction_sb_uLuL::synapse0x1ff4fe0() {
   return (neuron0x1fdca50()*0.789987);
}

double NNfunction_sb_uLuL::synapse0x1ff5020() {
   return (neuron0x1fdcd90()*0.47995);
}

double NNfunction_sb_uLuL::synapse0x1ff5060() {
   return (neuron0x1fdd0d0()*0.253955);
}

double NNfunction_sb_uLuL::synapse0x1ff50a0() {
   return (neuron0x1fdd410()*0.0741326);
}

double NNfunction_sb_uLuL::synapse0x1ff50e0() {
   return (neuron0x1fdd750()*0.0805003);
}

double NNfunction_sb_uLuL::synapse0x1ff5120() {
   return (neuron0x1fdda90()*-0.223717);
}

double NNfunction_sb_uLuL::synapse0x1ff5160() {
   return (neuron0x1fdddd0()*0.124711);
}

double NNfunction_sb_uLuL::synapse0x1ff51a0() {
   return (neuron0x1fde110()*0.0584096);
}

double NNfunction_sb_uLuL::synapse0x1ff51e0() {
   return (neuron0x1fde450()*0.0219574);
}

double NNfunction_sb_uLuL::synapse0x1ff5220() {
   return (neuron0x1fde790()*0.583717);
}

double NNfunction_sb_uLuL::synapse0x1ff5260() {
   return (neuron0x1fdead0()*0.075338);
}

double NNfunction_sb_uLuL::synapse0x1ff52a0() {
   return (neuron0x1fdee10()*0.248024);
}

double NNfunction_sb_uLuL::synapse0x1ff52e0() {
   return (neuron0x1fdf150()*-0.0376434);
}

double NNfunction_sb_uLuL::synapse0x1ff5320() {
   return (neuron0x1fdf490()*-0.0979758);
}

double NNfunction_sb_uLuL::synapse0x1ff4db0() {
   return (neuron0x1fdf7d0()*-0.146851);
}

double NNfunction_sb_uLuL::synapse0x1ff4df0() {
   return (neuron0x1fdfd30()*0.135664);
}

double NNfunction_sb_uLuL::synapse0x1ff5470() {
   return (neuron0x1fdff50()*0.127605);
}

double NNfunction_sb_uLuL::synapse0x1ff54b0() {
   return (neuron0x1fe0290()*0.12209);
}

double NNfunction_sb_uLuL::synapse0x1ff54f0() {
   return (neuron0x1fe05d0()*0.157894);
}

double NNfunction_sb_uLuL::synapse0x1ff5530() {
   return (neuron0x1fe0910()*0.0218134);
}

double NNfunction_sb_uLuL::synapse0x1ff5570() {
   return (neuron0x1fe0c50()*-0.028066);
}

double NNfunction_sb_uLuL::synapse0x1ff55b0() {
   return (neuron0x1fe0f90()*-0.0433739);
}

double NNfunction_sb_uLuL::synapse0x1ff5930() {
   return (neuron0x1fdc3d0()*-0.240877);
}

double NNfunction_sb_uLuL::synapse0x1ff5970() {
   return (neuron0x1fdc710()*0.143292);
}

double NNfunction_sb_uLuL::synapse0x1ff59b0() {
   return (neuron0x1fdca50()*0.0629188);
}

double NNfunction_sb_uLuL::synapse0x1ff59f0() {
   return (neuron0x1fdcd90()*0.707758);
}

double NNfunction_sb_uLuL::synapse0x1ff5a30() {
   return (neuron0x1fdd0d0()*-0.261512);
}

double NNfunction_sb_uLuL::synapse0x1ff5a70() {
   return (neuron0x1fdd410()*0.341959);
}

double NNfunction_sb_uLuL::synapse0x1ff5ab0() {
   return (neuron0x1fdd750()*-0.765985);
}

double NNfunction_sb_uLuL::synapse0x1ff5af0() {
   return (neuron0x1fdda90()*-0.254587);
}

double NNfunction_sb_uLuL::synapse0x1ff5b30() {
   return (neuron0x1fdddd0()*0.223378);
}

double NNfunction_sb_uLuL::synapse0x1ff5b70() {
   return (neuron0x1fde110()*0.206821);
}

double NNfunction_sb_uLuL::synapse0x1ff5bb0() {
   return (neuron0x1fde450()*-0.0271566);
}

double NNfunction_sb_uLuL::synapse0x1ff5bf0() {
   return (neuron0x1fde790()*0.338451);
}

double NNfunction_sb_uLuL::synapse0x1ff5c30() {
   return (neuron0x1fdead0()*0.494948);
}

double NNfunction_sb_uLuL::synapse0x1ff5c70() {
   return (neuron0x1fdee10()*0.0758562);
}

double NNfunction_sb_uLuL::synapse0x1ff5cb0() {
   return (neuron0x1fdf150()*0.185566);
}

double NNfunction_sb_uLuL::synapse0x1ff5cf0() {
   return (neuron0x1fdf490()*0.113274);
}

double NNfunction_sb_uLuL::synapse0x1ff5780() {
   return (neuron0x1fdf7d0()*0.20343);
}

double NNfunction_sb_uLuL::synapse0x1ff57c0() {
   return (neuron0x1fdfd30()*-0.300407);
}

double NNfunction_sb_uLuL::synapse0x1ff5e40() {
   return (neuron0x1fdff50()*0.295885);
}

double NNfunction_sb_uLuL::synapse0x1ff5e80() {
   return (neuron0x1fe0290()*-0.341005);
}

double NNfunction_sb_uLuL::synapse0x1ff5ec0() {
   return (neuron0x1fe05d0()*0.162304);
}

double NNfunction_sb_uLuL::synapse0x1ff5f00() {
   return (neuron0x1fe0910()*-0.315355);
}

double NNfunction_sb_uLuL::synapse0x1ff5f40() {
   return (neuron0x1fe0c50()*0.057737);
}

double NNfunction_sb_uLuL::synapse0x1ff5f80() {
   return (neuron0x1fe0f90()*-0.112821);
}

double NNfunction_sb_uLuL::synapse0x1ff6300() {
   return (neuron0x1fdc3d0()*0.0946527);
}

double NNfunction_sb_uLuL::synapse0x1ff6340() {
   return (neuron0x1fdc710()*-0.00495103);
}

double NNfunction_sb_uLuL::synapse0x1ff6380() {
   return (neuron0x1fdca50()*-0.102472);
}

double NNfunction_sb_uLuL::synapse0x1ff63c0() {
   return (neuron0x1fdcd90()*-0.734925);
}

double NNfunction_sb_uLuL::synapse0x1ff6400() {
   return (neuron0x1fdd0d0()*0.0332248);
}

double NNfunction_sb_uLuL::synapse0x1ff6440() {
   return (neuron0x1fdd410()*0.0168652);
}

double NNfunction_sb_uLuL::synapse0x1ff6480() {
   return (neuron0x1fdd750()*-0.0339582);
}

double NNfunction_sb_uLuL::synapse0x1ff64c0() {
   return (neuron0x1fdda90()*0.0857655);
}

double NNfunction_sb_uLuL::synapse0x1ff6500() {
   return (neuron0x1fdddd0()*-0.26249);
}

double NNfunction_sb_uLuL::synapse0x1ff6540() {
   return (neuron0x1fde110()*-0.363743);
}

double NNfunction_sb_uLuL::synapse0x1ff6580() {
   return (neuron0x1fde450()*-0.086138);
}

double NNfunction_sb_uLuL::synapse0x1ff65c0() {
   return (neuron0x1fde790()*2.17355);
}

double NNfunction_sb_uLuL::synapse0x1ff6600() {
   return (neuron0x1fdead0()*-0.150133);
}

double NNfunction_sb_uLuL::synapse0x1ff6640() {
   return (neuron0x1fdee10()*-0.276397);
}

double NNfunction_sb_uLuL::synapse0x1ff6680() {
   return (neuron0x1fdf150()*0.0752326);
}

double NNfunction_sb_uLuL::synapse0x1ff66c0() {
   return (neuron0x1fdf490()*-0.108561);
}

double NNfunction_sb_uLuL::synapse0x1ff6150() {
   return (neuron0x1fdf7d0()*-0.183642);
}

double NNfunction_sb_uLuL::synapse0x1ff6190() {
   return (neuron0x1fdfd30()*-0.139886);
}

double NNfunction_sb_uLuL::synapse0x1ff6810() {
   return (neuron0x1fdff50()*-0.167572);
}

double NNfunction_sb_uLuL::synapse0x1ff6850() {
   return (neuron0x1fe0290()*-0.216906);
}

double NNfunction_sb_uLuL::synapse0x1ff6890() {
   return (neuron0x1fe05d0()*-0.0158365);
}

double NNfunction_sb_uLuL::synapse0x1ff68d0() {
   return (neuron0x1fe0910()*-0.0191615);
}

double NNfunction_sb_uLuL::synapse0x1ff6910() {
   return (neuron0x1fe0c50()*0.0793276);
}

double NNfunction_sb_uLuL::synapse0x1ff6950() {
   return (neuron0x1fe0f90()*0.118756);
}

double NNfunction_sb_uLuL::synapse0x1ff6cd0() {
   return (neuron0x1fdc3d0()*-0.0352292);
}

double NNfunction_sb_uLuL::synapse0x1feb2a0() {
   return (neuron0x1fdc710()*0.224739);
}

double NNfunction_sb_uLuL::synapse0x1feb2e0() {
   return (neuron0x1fdca50()*-0.399908);
}

double NNfunction_sb_uLuL::synapse0x1feb320() {
   return (neuron0x1fdcd90()*-1.24845);
}

double NNfunction_sb_uLuL::synapse0x1feb570() {
   return (neuron0x1fdd0d0()*-0.08385);
}

double NNfunction_sb_uLuL::synapse0x1feb5b0() {
   return (neuron0x1fdd410()*-0.194175);
}

double NNfunction_sb_uLuL::synapse0x1feb5f0() {
   return (neuron0x1fdd750()*-0.283263);
}

double NNfunction_sb_uLuL::synapse0x1feb840() {
   return (neuron0x1fdda90()*-0.104527);
}

double NNfunction_sb_uLuL::synapse0x1feb880() {
   return (neuron0x1fdddd0()*0.360015);
}

double NNfunction_sb_uLuL::synapse0x1febad0() {
   return (neuron0x1fde110()*0.021626);
}

double NNfunction_sb_uLuL::synapse0x1febb10() {
   return (neuron0x1fde450()*0.253254);
}

double NNfunction_sb_uLuL::synapse0x1febb50() {
   return (neuron0x1fde790()*0.880273);
}

double NNfunction_sb_uLuL::synapse0x1febda0() {
   return (neuron0x1fdead0()*0.13601);
}

double NNfunction_sb_uLuL::synapse0x1febde0() {
   return (neuron0x1fdee10()*0.357067);
}

double NNfunction_sb_uLuL::synapse0x1fec030() {
   return (neuron0x1fdf150()*-0.320263);
}

double NNfunction_sb_uLuL::synapse0x1fec070() {
   return (neuron0x1fdf490()*-0.209935);
}

double NNfunction_sb_uLuL::synapse0x1ff6b20() {
   return (neuron0x1fdf7d0()*0.149221);
}

double NNfunction_sb_uLuL::synapse0x1ff6b60() {
   return (neuron0x1fdfd30()*0.267376);
}

double NNfunction_sb_uLuL::synapse0x1fec1c0() {
   return (neuron0x1fdff50()*0.106266);
}

double NNfunction_sb_uLuL::synapse0x1fec6d0() {
   return (neuron0x1fe0290()*0.18198);
}

double NNfunction_sb_uLuL::synapse0x1fec710() {
   return (neuron0x1fe05d0()*-0.247068);
}

double NNfunction_sb_uLuL::synapse0x1fec750() {
   return (neuron0x1fe0910()*-0.352325);
}

double NNfunction_sb_uLuL::synapse0x1fec9a0() {
   return (neuron0x1fe0c50()*0.266141);
}

double NNfunction_sb_uLuL::synapse0x1fec9e0() {
   return (neuron0x1fe0f90()*-0.281025);
}

double NNfunction_sb_uLuL::synapse0x1fec290() {
   return (neuron0x1fdc3d0()*-0.0222364);
}

double NNfunction_sb_uLuL::synapse0x1fec2d0() {
   return (neuron0x1fdc710()*0.0516365);
}

double NNfunction_sb_uLuL::synapse0x1fec310() {
   return (neuron0x1fdca50()*0.410491);
}

double NNfunction_sb_uLuL::synapse0x1fec350() {
   return (neuron0x1fdcd90()*-0.810114);
}

double NNfunction_sb_uLuL::synapse0x1feccd0() {
   return (neuron0x1fdd0d0()*0.0637731);
}

double NNfunction_sb_uLuL::synapse0x1ff9020() {
   return (neuron0x1fdd410()*-0.0238377);
}

double NNfunction_sb_uLuL::synapse0x1ff9060() {
   return (neuron0x1fdd750()*0.0727237);
}

double NNfunction_sb_uLuL::synapse0x1ff90a0() {
   return (neuron0x1fdda90()*-0.00156318);
}

double NNfunction_sb_uLuL::synapse0x1ff90e0() {
   return (neuron0x1fdddd0()*0.0072126);
}

double NNfunction_sb_uLuL::synapse0x1ff9120() {
   return (neuron0x1fde110()*0.044827);
}

double NNfunction_sb_uLuL::synapse0x1ff9160() {
   return (neuron0x1fde450()*-0.0389183);
}

double NNfunction_sb_uLuL::synapse0x1ff91a0() {
   return (neuron0x1fde790()*-0.143717);
}

double NNfunction_sb_uLuL::synapse0x1ff91e0() {
   return (neuron0x1fdead0()*0.0422834);
}

double NNfunction_sb_uLuL::synapse0x1ff9220() {
   return (neuron0x1fdee10()*-0.0151531);
}

double NNfunction_sb_uLuL::synapse0x1ff9260() {
   return (neuron0x1fdf150()*-0.0126715);
}

double NNfunction_sb_uLuL::synapse0x1ff92a0() {
   return (neuron0x1fdf490()*0.131766);
}

double NNfunction_sb_uLuL::synapse0x1fecbb0() {
   return (neuron0x1fdf7d0()*-0.0446894);
}

double NNfunction_sb_uLuL::synapse0x1fecbf0() {
   return (neuron0x1fdfd30()*-0.0277082);
}

double NNfunction_sb_uLuL::synapse0x1ff93f0() {
   return (neuron0x1fdff50()*-0.017049);
}

double NNfunction_sb_uLuL::synapse0x1ff9430() {
   return (neuron0x1fe0290()*-0.0254649);
}

double NNfunction_sb_uLuL::synapse0x1ff9470() {
   return (neuron0x1fe05d0()*0.0240619);
}

double NNfunction_sb_uLuL::synapse0x1ff94b0() {
   return (neuron0x1fe0910()*-0.00459248);
}

double NNfunction_sb_uLuL::synapse0x1ff94f0() {
   return (neuron0x1fe0c50()*-0.0497684);
}

double NNfunction_sb_uLuL::synapse0x1ff9530() {
   return (neuron0x1fe0f90()*-0.0131662);
}

double NNfunction_sb_uLuL::synapse0x1ff98b0() {
   return (neuron0x1fdc3d0()*0.238138);
}

double NNfunction_sb_uLuL::synapse0x1ff98f0() {
   return (neuron0x1fdc710()*0.697098);
}

double NNfunction_sb_uLuL::synapse0x1ff9930() {
   return (neuron0x1fdca50()*0.0286393);
}

double NNfunction_sb_uLuL::synapse0x1ff9970() {
   return (neuron0x1fdcd90()*0.0535332);
}

double NNfunction_sb_uLuL::synapse0x1ff99b0() {
   return (neuron0x1fdd0d0()*0.455253);
}

double NNfunction_sb_uLuL::synapse0x1ff99f0() {
   return (neuron0x1fdd410()*0.190857);
}

double NNfunction_sb_uLuL::synapse0x1ff9a30() {
   return (neuron0x1fdd750()*-0.0772855);
}

double NNfunction_sb_uLuL::synapse0x1ff9a70() {
   return (neuron0x1fdda90()*0.416958);
}

double NNfunction_sb_uLuL::synapse0x1ff9ab0() {
   return (neuron0x1fdddd0()*-0.762455);
}

double NNfunction_sb_uLuL::synapse0x1ff9af0() {
   return (neuron0x1fde110()*0.533149);
}

double NNfunction_sb_uLuL::synapse0x1ff9b30() {
   return (neuron0x1fde450()*0.605117);
}

double NNfunction_sb_uLuL::synapse0x1ff9b70() {
   return (neuron0x1fde790()*1.0687);
}

double NNfunction_sb_uLuL::synapse0x1ff9bb0() {
   return (neuron0x1fdead0()*0.0315573);
}

double NNfunction_sb_uLuL::synapse0x1ff9bf0() {
   return (neuron0x1fdee10()*-0.0246754);
}

double NNfunction_sb_uLuL::synapse0x1ff9c30() {
   return (neuron0x1fdf150()*0.370767);
}

double NNfunction_sb_uLuL::synapse0x1ff9c70() {
   return (neuron0x1fdf490()*-0.116997);
}

double NNfunction_sb_uLuL::synapse0x1ff9700() {
   return (neuron0x1fdf7d0()*0.308099);
}

double NNfunction_sb_uLuL::synapse0x1ff9740() {
   return (neuron0x1fdfd30()*0.480506);
}

double NNfunction_sb_uLuL::synapse0x1ff9dc0() {
   return (neuron0x1fdff50()*0.138202);
}

double NNfunction_sb_uLuL::synapse0x1ff9e00() {
   return (neuron0x1fe0290()*-0.199376);
}

double NNfunction_sb_uLuL::synapse0x1ff9e40() {
   return (neuron0x1fe05d0()*-0.319682);
}

double NNfunction_sb_uLuL::synapse0x1ff9e80() {
   return (neuron0x1fe0910()*-0.226181);
}

double NNfunction_sb_uLuL::synapse0x1ff9ec0() {
   return (neuron0x1fe0c50()*-0.189738);
}

double NNfunction_sb_uLuL::synapse0x1ff9f00() {
   return (neuron0x1fe0f90()*-0.0280603);
}

double NNfunction_sb_uLuL::synapse0x1ffa280() {
   return (neuron0x1fdc3d0()*-0.0196676);
}

double NNfunction_sb_uLuL::synapse0x1ffa2c0() {
   return (neuron0x1fdc710()*-0.128398);
}

double NNfunction_sb_uLuL::synapse0x1ffa300() {
   return (neuron0x1fdca50()*0.108449);
}

double NNfunction_sb_uLuL::synapse0x1ffa340() {
   return (neuron0x1fdcd90()*0.176031);
}

double NNfunction_sb_uLuL::synapse0x1ffa380() {
   return (neuron0x1fdd0d0()*0.0384345);
}

double NNfunction_sb_uLuL::synapse0x1ffa3c0() {
   return (neuron0x1fdd410()*-0.0103312);
}

double NNfunction_sb_uLuL::synapse0x1ffa400() {
   return (neuron0x1fdd750()*0.0393324);
}

double NNfunction_sb_uLuL::synapse0x1ffa440() {
   return (neuron0x1fdda90()*-0.170277);
}

double NNfunction_sb_uLuL::synapse0x1ffa480() {
   return (neuron0x1fdddd0()*0.0673297);
}

double NNfunction_sb_uLuL::synapse0x1ffa4c0() {
   return (neuron0x1fde110()*0.0218793);
}

double NNfunction_sb_uLuL::synapse0x1ffa500() {
   return (neuron0x1fde450()*-0.479873);
}

double NNfunction_sb_uLuL::synapse0x1ffa540() {
   return (neuron0x1fde790()*0.0186825);
}

double NNfunction_sb_uLuL::synapse0x1ffa580() {
   return (neuron0x1fdead0()*-0.0926682);
}

double NNfunction_sb_uLuL::synapse0x1ffa5c0() {
   return (neuron0x1fdee10()*0.228011);
}

double NNfunction_sb_uLuL::synapse0x1ffa600() {
   return (neuron0x1fdf150()*0.347432);
}

double NNfunction_sb_uLuL::synapse0x1ffa640() {
   return (neuron0x1fdf490()*-0.205961);
}

double NNfunction_sb_uLuL::synapse0x1ffa0d0() {
   return (neuron0x1fdf7d0()*-0.195406);
}

double NNfunction_sb_uLuL::synapse0x1ffa110() {
   return (neuron0x1fdfd30()*-0.0222772);
}

double NNfunction_sb_uLuL::synapse0x1ffa790() {
   return (neuron0x1fdff50()*0.108268);
}

double NNfunction_sb_uLuL::synapse0x1ffa7d0() {
   return (neuron0x1fe0290()*-0.230632);
}

double NNfunction_sb_uLuL::synapse0x1ffa810() {
   return (neuron0x1fe05d0()*-0.522049);
}

double NNfunction_sb_uLuL::synapse0x1ffa850() {
   return (neuron0x1fe0910()*-0.178468);
}

double NNfunction_sb_uLuL::synapse0x1ffa890() {
   return (neuron0x1fe0c50()*-0.212258);
}

double NNfunction_sb_uLuL::synapse0x1ffa8d0() {
   return (neuron0x1fe0f90()*-0.0463159);
}

double NNfunction_sb_uLuL::synapse0x1ffac50() {
   return (neuron0x1fdc3d0()*-0.113174);
}

double NNfunction_sb_uLuL::synapse0x1ffac90() {
   return (neuron0x1fdc710()*-0.226608);
}

double NNfunction_sb_uLuL::synapse0x1ffacd0() {
   return (neuron0x1fdca50()*0.652485);
}

double NNfunction_sb_uLuL::synapse0x1ffad10() {
   return (neuron0x1fdcd90()*1.13595);
}

double NNfunction_sb_uLuL::synapse0x1ffad50() {
   return (neuron0x1fdd0d0()*-0.203406);
}

double NNfunction_sb_uLuL::synapse0x1ffad90() {
   return (neuron0x1fdd410()*-0.157216);
}

double NNfunction_sb_uLuL::synapse0x1ffadd0() {
   return (neuron0x1fdd750()*-0.248931);
}

double NNfunction_sb_uLuL::synapse0x1ffae10() {
   return (neuron0x1fdda90()*-0.261546);
}

double NNfunction_sb_uLuL::synapse0x1ffae50() {
   return (neuron0x1fdddd0()*0.120359);
}

double NNfunction_sb_uLuL::synapse0x1ffae90() {
   return (neuron0x1fde110()*-0.0816302);
}

double NNfunction_sb_uLuL::synapse0x1ffaed0() {
   return (neuron0x1fde450()*-0.142042);
}

double NNfunction_sb_uLuL::synapse0x1ffaf10() {
   return (neuron0x1fde790()*0.0731995);
}

double NNfunction_sb_uLuL::synapse0x1ffaf50() {
   return (neuron0x1fdead0()*-0.333907);
}

double NNfunction_sb_uLuL::synapse0x1ffaf90() {
   return (neuron0x1fdee10()*0.208932);
}

double NNfunction_sb_uLuL::synapse0x1ffafd0() {
   return (neuron0x1fdf150()*-0.0210958);
}

double NNfunction_sb_uLuL::synapse0x1ffb010() {
   return (neuron0x1fdf490()*-0.318422);
}

double NNfunction_sb_uLuL::synapse0x1ffaaa0() {
   return (neuron0x1fdf7d0()*0.162637);
}

double NNfunction_sb_uLuL::synapse0x1ffaae0() {
   return (neuron0x1fdfd30()*-0.332135);
}

double NNfunction_sb_uLuL::synapse0x1ffb160() {
   return (neuron0x1fdff50()*0.0590902);
}

double NNfunction_sb_uLuL::synapse0x1ffb1a0() {
   return (neuron0x1fe0290()*-0.292275);
}

double NNfunction_sb_uLuL::synapse0x1ffb1e0() {
   return (neuron0x1fe05d0()*-0.105001);
}

double NNfunction_sb_uLuL::synapse0x1ffb220() {
   return (neuron0x1fe0910()*0.0542313);
}

double NNfunction_sb_uLuL::synapse0x1ffb260() {
   return (neuron0x1fe0c50()*0.171561);
}

double NNfunction_sb_uLuL::synapse0x1ffb2a0() {
   return (neuron0x1fe0f90()*0.00183751);
}

double NNfunction_sb_uLuL::synapse0x1ffb620() {
   return (neuron0x1fdc3d0()*0.0565105);
}

double NNfunction_sb_uLuL::synapse0x1ffb660() {
   return (neuron0x1fdc710()*-0.0155382);
}

double NNfunction_sb_uLuL::synapse0x1ffb6a0() {
   return (neuron0x1fdca50()*-0.481591);
}

double NNfunction_sb_uLuL::synapse0x1ffb6e0() {
   return (neuron0x1fdcd90()*-1.00978);
}

double NNfunction_sb_uLuL::synapse0x1ffb720() {
   return (neuron0x1fdd0d0()*-0.0769044);
}

double NNfunction_sb_uLuL::synapse0x1ffb760() {
   return (neuron0x1fdd410()*0.132564);
}

double NNfunction_sb_uLuL::synapse0x1ffb7a0() {
   return (neuron0x1fdd750()*0.0195225);
}

double NNfunction_sb_uLuL::synapse0x1ffb7e0() {
   return (neuron0x1fdda90()*0.134521);
}

double NNfunction_sb_uLuL::synapse0x1ffb820() {
   return (neuron0x1fdddd0()*-0.179934);
}

double NNfunction_sb_uLuL::synapse0x1ffb860() {
   return (neuron0x1fde110()*-0.191267);
}

double NNfunction_sb_uLuL::synapse0x1ffb8a0() {
   return (neuron0x1fde450()*0.0821856);
}

double NNfunction_sb_uLuL::synapse0x1ffb8e0() {
   return (neuron0x1fde790()*1.40287);
}

double NNfunction_sb_uLuL::synapse0x1ffb920() {
   return (neuron0x1fdead0()*0.0968495);
}

double NNfunction_sb_uLuL::synapse0x1ffb960() {
   return (neuron0x1fdee10()*-0.149248);
}

double NNfunction_sb_uLuL::synapse0x1ffb9a0() {
   return (neuron0x1fdf150()*0.189044);
}

double NNfunction_sb_uLuL::synapse0x1ffb9e0() {
   return (neuron0x1fdf490()*-0.44687);
}

double NNfunction_sb_uLuL::synapse0x1ffb470() {
   return (neuron0x1fdf7d0()*0.0790622);
}

double NNfunction_sb_uLuL::synapse0x1ffb4b0() {
   return (neuron0x1fdfd30()*0.00128818);
}

double NNfunction_sb_uLuL::synapse0x1ffbb30() {
   return (neuron0x1fdff50()*-0.0674691);
}

double NNfunction_sb_uLuL::synapse0x1ffbb70() {
   return (neuron0x1fe0290()*-0.131753);
}

double NNfunction_sb_uLuL::synapse0x1ffbbb0() {
   return (neuron0x1fe05d0()*0.0584306);
}

double NNfunction_sb_uLuL::synapse0x1ffbbf0() {
   return (neuron0x1fe0910()*0.0588212);
}

double NNfunction_sb_uLuL::synapse0x1ffbc30() {
   return (neuron0x1fe0c50()*0.119302);
}

double NNfunction_sb_uLuL::synapse0x1ffbc70() {
   return (neuron0x1fe0f90()*0.000358821);
}

double NNfunction_sb_uLuL::synapse0x1ffbff0() {
   return (neuron0x1fdc3d0()*0.0215237);
}

double NNfunction_sb_uLuL::synapse0x1ffc030() {
   return (neuron0x1fdc710()*-0.00229841);
}

double NNfunction_sb_uLuL::synapse0x1ffc070() {
   return (neuron0x1fdca50()*0.075593);
}

double NNfunction_sb_uLuL::synapse0x1ffc0b0() {
   return (neuron0x1fdcd90()*0.249972);
}

double NNfunction_sb_uLuL::synapse0x1ffc0f0() {
   return (neuron0x1fdd0d0()*0.00889697);
}

double NNfunction_sb_uLuL::synapse0x1ffc130() {
   return (neuron0x1fdd410()*0.011084);
}

double NNfunction_sb_uLuL::synapse0x1ffc170() {
   return (neuron0x1fdd750()*0.00919887);
}

double NNfunction_sb_uLuL::synapse0x1ffc1b0() {
   return (neuron0x1fdda90()*0.00762595);
}

double NNfunction_sb_uLuL::synapse0x1ffc1f0() {
   return (neuron0x1fdddd0()*0.00722491);
}

double NNfunction_sb_uLuL::synapse0x1ffc230() {
   return (neuron0x1fde110()*0.00976851);
}

double NNfunction_sb_uLuL::synapse0x1ffc270() {
   return (neuron0x1fde450()*-0.0057933);
}

double NNfunction_sb_uLuL::synapse0x1ffc2b0() {
   return (neuron0x1fde790()*-0.209308);
}

double NNfunction_sb_uLuL::synapse0x1ffc2f0() {
   return (neuron0x1fdead0()*-0.317372);
}

double NNfunction_sb_uLuL::synapse0x1ffc330() {
   return (neuron0x1fdee10()*0.045856);
}

double NNfunction_sb_uLuL::synapse0x1ffc370() {
   return (neuron0x1fdf150()*-0.159005);
}

double NNfunction_sb_uLuL::synapse0x1ffc3b0() {
   return (neuron0x1fdf490()*-0.159633);
}

double NNfunction_sb_uLuL::synapse0x1ffbe40() {
   return (neuron0x1fdf7d0()*0.0414652);
}

double NNfunction_sb_uLuL::synapse0x1ffbe80() {
   return (neuron0x1fdfd30()*-0.163477);
}

double NNfunction_sb_uLuL::synapse0x1ffc500() {
   return (neuron0x1fdff50()*-0.162603);
}

double NNfunction_sb_uLuL::synapse0x1ffc540() {
   return (neuron0x1fe0290()*-0.00528498);
}

double NNfunction_sb_uLuL::synapse0x1ffc580() {
   return (neuron0x1fe05d0()*-0.0180949);
}

double NNfunction_sb_uLuL::synapse0x1ffc5c0() {
   return (neuron0x1fe0910()*-0.00182477);
}

double NNfunction_sb_uLuL::synapse0x1ffc600() {
   return (neuron0x1fe0c50()*0.00331479);
}

double NNfunction_sb_uLuL::synapse0x1ffc640() {
   return (neuron0x1fe0f90()*-0.00524205);
}

double NNfunction_sb_uLuL::synapse0x1ffc9c0() {
   return (neuron0x1fdc3d0()*-0.733016);
}

double NNfunction_sb_uLuL::synapse0x1ffca00() {
   return (neuron0x1fdc710()*0.00235229);
}

double NNfunction_sb_uLuL::synapse0x1ffca40() {
   return (neuron0x1fdca50()*-0.465584);
}

double NNfunction_sb_uLuL::synapse0x1ffca80() {
   return (neuron0x1fdcd90()*-0.548301);
}

double NNfunction_sb_uLuL::synapse0x1ffcac0() {
   return (neuron0x1fdd0d0()*-0.297153);
}

double NNfunction_sb_uLuL::synapse0x1ffcb00() {
   return (neuron0x1fdd410()*0.230682);
}

double NNfunction_sb_uLuL::synapse0x1ffcb40() {
   return (neuron0x1fdd750()*0.372227);
}

double NNfunction_sb_uLuL::synapse0x1ffcb80() {
   return (neuron0x1fdda90()*-0.0725276);
}

double NNfunction_sb_uLuL::synapse0x1ffcbc0() {
   return (neuron0x1fdddd0()*0.486309);
}

double NNfunction_sb_uLuL::synapse0x1ffcc00() {
   return (neuron0x1fde110()*-0.250435);
}

double NNfunction_sb_uLuL::synapse0x1ffcc40() {
   return (neuron0x1fde450()*-0.566205);
}

double NNfunction_sb_uLuL::synapse0x1ffcc80() {
   return (neuron0x1fde790()*-0.299815);
}

double NNfunction_sb_uLuL::synapse0x1ffccc0() {
   return (neuron0x1fdead0()*-0.145002);
}

double NNfunction_sb_uLuL::synapse0x1ffcd00() {
   return (neuron0x1fdee10()*-0.152468);
}

double NNfunction_sb_uLuL::synapse0x1ffcd40() {
   return (neuron0x1fdf150()*0.553883);
}

double NNfunction_sb_uLuL::synapse0x1ffcd80() {
   return (neuron0x1fdf490()*-0.014845);
}

double NNfunction_sb_uLuL::synapse0x1ffc810() {
   return (neuron0x1fdf7d0()*-0.252707);
}

double NNfunction_sb_uLuL::synapse0x1ffc850() {
   return (neuron0x1fdfd30()*-0.108811);
}

double NNfunction_sb_uLuL::synapse0x1ffced0() {
   return (neuron0x1fdff50()*0.453669);
}

double NNfunction_sb_uLuL::synapse0x1ffcf10() {
   return (neuron0x1fe0290()*-0.254179);
}

double NNfunction_sb_uLuL::synapse0x1ffcf50() {
   return (neuron0x1fe05d0()*0.0579292);
}

double NNfunction_sb_uLuL::synapse0x1ffcf90() {
   return (neuron0x1fe0910()*-0.01891);
}

double NNfunction_sb_uLuL::synapse0x1ffcfd0() {
   return (neuron0x1fe0c50()*-0.235668);
}

double NNfunction_sb_uLuL::synapse0x1ffd010() {
   return (neuron0x1fe0f90()*-0.0139978);
}

double NNfunction_sb_uLuL::synapse0x1ffd390() {
   return (neuron0x1fdc3d0()*-0.00307274);
}

double NNfunction_sb_uLuL::synapse0x1ffd3d0() {
   return (neuron0x1fdc710()*0.178719);
}

double NNfunction_sb_uLuL::synapse0x1ffd410() {
   return (neuron0x1fdca50()*-0.129981);
}

double NNfunction_sb_uLuL::synapse0x1ffd450() {
   return (neuron0x1fdcd90()*-0.40454);
}

double NNfunction_sb_uLuL::synapse0x1ffd490() {
   return (neuron0x1fdd0d0()*-0.0697362);
}

double NNfunction_sb_uLuL::synapse0x1ffd4d0() {
   return (neuron0x1fdd410()*0.160111);
}

double NNfunction_sb_uLuL::synapse0x1ffd510() {
   return (neuron0x1fdd750()*0.0689949);
}

double NNfunction_sb_uLuL::synapse0x1ffd550() {
   return (neuron0x1fdda90()*-0.0145993);
}

double NNfunction_sb_uLuL::synapse0x1ffd590() {
   return (neuron0x1fdddd0()*-0.0979348);
}

double NNfunction_sb_uLuL::synapse0x1ffd5d0() {
   return (neuron0x1fde110()*-0.169613);
}

double NNfunction_sb_uLuL::synapse0x1ffd610() {
   return (neuron0x1fde450()*0.685797);
}

double NNfunction_sb_uLuL::synapse0x1ffd650() {
   return (neuron0x1fde790()*-0.510942);
}

double NNfunction_sb_uLuL::synapse0x1ffd690() {
   return (neuron0x1fdead0()*-0.0378123);
}

double NNfunction_sb_uLuL::synapse0x1ffd6d0() {
   return (neuron0x1fdee10()*0.158698);
}

double NNfunction_sb_uLuL::synapse0x1ffd710() {
   return (neuron0x1fdf150()*-0.206935);
}

double NNfunction_sb_uLuL::synapse0x1ffd750() {
   return (neuron0x1fdf490()*-0.246517);
}

double NNfunction_sb_uLuL::synapse0x1ffd1e0() {
   return (neuron0x1fdf7d0()*0.0518161);
}

double NNfunction_sb_uLuL::synapse0x1ffd220() {
   return (neuron0x1fdfd30()*-0.246173);
}

double NNfunction_sb_uLuL::synapse0x1ffd8a0() {
   return (neuron0x1fdff50()*0.0647657);
}

double NNfunction_sb_uLuL::synapse0x1ffd8e0() {
   return (neuron0x1fe0290()*-0.0286613);
}

double NNfunction_sb_uLuL::synapse0x1ffd920() {
   return (neuron0x1fe05d0()*0.0728815);
}

double NNfunction_sb_uLuL::synapse0x1ffd960() {
   return (neuron0x1fe0910()*0.0242325);
}

double NNfunction_sb_uLuL::synapse0x1ffd9a0() {
   return (neuron0x1fe0c50()*0.0450512);
}

double NNfunction_sb_uLuL::synapse0x1ffd9e0() {
   return (neuron0x1fe0f90()*-0.0335713);
}

double NNfunction_sb_uLuL::synapse0x1fe6490() {
   return (neuron0x1fdc3d0()*-0.0777077);
}

double NNfunction_sb_uLuL::synapse0x1fe64d0() {
   return (neuron0x1fdc710()*-0.254277);
}

double NNfunction_sb_uLuL::synapse0x1fe6510() {
   return (neuron0x1fdca50()*-0.347369);
}

double NNfunction_sb_uLuL::synapse0x1fe6550() {
   return (neuron0x1fdcd90()*-0.121433);
}

double NNfunction_sb_uLuL::synapse0x1fe6590() {
   return (neuron0x1fdd0d0()*0.478549);
}

double NNfunction_sb_uLuL::synapse0x1fe65d0() {
   return (neuron0x1fdd410()*-0.0366838);
}

double NNfunction_sb_uLuL::synapse0x1fe6610() {
   return (neuron0x1fdd750()*-0.0141957);
}

double NNfunction_sb_uLuL::synapse0x1fe6650() {
   return (neuron0x1fdda90()*-0.138931);
}

double NNfunction_sb_uLuL::synapse0x1ffe170() {
   return (neuron0x1fdddd0()*-0.0898725);
}

double NNfunction_sb_uLuL::synapse0x1ffe1b0() {
   return (neuron0x1fde110()*-0.033072);
}

double NNfunction_sb_uLuL::synapse0x1ffe1f0() {
   return (neuron0x1fde450()*-0.120923);
}

double NNfunction_sb_uLuL::synapse0x1ffe230() {
   return (neuron0x1fde790()*0.191199);
}

double NNfunction_sb_uLuL::synapse0x1ffe270() {
   return (neuron0x1fdead0()*0.841449);
}

double NNfunction_sb_uLuL::synapse0x1ffe2b0() {
   return (neuron0x1fdee10()*-0.74634);
}

double NNfunction_sb_uLuL::synapse0x1ffe2f0() {
   return (neuron0x1fdf150()*-0.209219);
}

double NNfunction_sb_uLuL::synapse0x1ffe330() {
   return (neuron0x1fdf490()*-0.0322595);
}

double NNfunction_sb_uLuL::synapse0x1ffdbb0() {
   return (neuron0x1fdf7d0()*-0.470939);
}

double NNfunction_sb_uLuL::synapse0x1ffdbf0() {
   return (neuron0x1fdfd30()*-0.0851936);
}

double NNfunction_sb_uLuL::synapse0x1ffe480() {
   return (neuron0x1fdff50()*-0.112789);
}

double NNfunction_sb_uLuL::synapse0x1ffe4c0() {
   return (neuron0x1fe0290()*0.0229063);
}

double NNfunction_sb_uLuL::synapse0x1ffe500() {
   return (neuron0x1fe05d0()*-0.239755);
}

double NNfunction_sb_uLuL::synapse0x1ffe540() {
   return (neuron0x1fe0910()*0.0459031);
}

double NNfunction_sb_uLuL::synapse0x1ffe580() {
   return (neuron0x1fe0c50()*0.0407051);
}

double NNfunction_sb_uLuL::synapse0x1ffe5c0() {
   return (neuron0x1fe0f90()*0.116353);
}

double NNfunction_sb_uLuL::synapse0x1ffe940() {
   return (neuron0x1fdc3d0()*-0.652839);
}

double NNfunction_sb_uLuL::synapse0x1ffe980() {
   return (neuron0x1fdc710()*0.501601);
}

double NNfunction_sb_uLuL::synapse0x1ffe9c0() {
   return (neuron0x1fdca50()*0.0925561);
}

double NNfunction_sb_uLuL::synapse0x1ffea00() {
   return (neuron0x1fdcd90()*-0.104733);
}

double NNfunction_sb_uLuL::synapse0x1ffea40() {
   return (neuron0x1fdd0d0()*-0.0797632);
}

double NNfunction_sb_uLuL::synapse0x1ffea80() {
   return (neuron0x1fdd410()*-0.0321121);
}

double NNfunction_sb_uLuL::synapse0x1ffeac0() {
   return (neuron0x1fdd750()*-0.492052);
}

double NNfunction_sb_uLuL::synapse0x1ffeb00() {
   return (neuron0x1fdda90()*-0.186171);
}

double NNfunction_sb_uLuL::synapse0x1ffeb40() {
   return (neuron0x1fdddd0()*0.311943);
}

double NNfunction_sb_uLuL::synapse0x1ffeb80() {
   return (neuron0x1fde110()*-0.246431);
}

double NNfunction_sb_uLuL::synapse0x1ffebc0() {
   return (neuron0x1fde450()*-0.130882);
}

double NNfunction_sb_uLuL::synapse0x1ffec00() {
   return (neuron0x1fde790()*0.25511);
}

double NNfunction_sb_uLuL::synapse0x1ffec40() {
   return (neuron0x1fdead0()*0.308041);
}

double NNfunction_sb_uLuL::synapse0x1ffec80() {
   return (neuron0x1fdee10()*0.909307);
}

double NNfunction_sb_uLuL::synapse0x1ffecc0() {
   return (neuron0x1fdf150()*0.412446);
}

double NNfunction_sb_uLuL::synapse0x1ffed00() {
   return (neuron0x1fdf490()*0.0411421);
}

double NNfunction_sb_uLuL::synapse0x1ffe790() {
   return (neuron0x1fdf7d0()*-0.177741);
}

double NNfunction_sb_uLuL::synapse0x1ffe7d0() {
   return (neuron0x1fdfd30()*-0.157568);
}

double NNfunction_sb_uLuL::synapse0x1ffee50() {
   return (neuron0x1fdff50()*0.316014);
}

double NNfunction_sb_uLuL::synapse0x1ffee90() {
   return (neuron0x1fe0290()*0.405039);
}

double NNfunction_sb_uLuL::synapse0x1ffeed0() {
   return (neuron0x1fe05d0()*-0.995698);
}

double NNfunction_sb_uLuL::synapse0x1ffef10() {
   return (neuron0x1fe0910()*-0.16661);
}

double NNfunction_sb_uLuL::synapse0x1ffef50() {
   return (neuron0x1fe0c50()*0.602082);
}

double NNfunction_sb_uLuL::synapse0x1ffef90() {
   return (neuron0x1fe0f90()*-0.176764);
}

double NNfunction_sb_uLuL::synapse0x1fff310() {
   return (neuron0x1fdc3d0()*-0.0829679);
}

double NNfunction_sb_uLuL::synapse0x1fff350() {
   return (neuron0x1fdc710()*-0.0403401);
}

double NNfunction_sb_uLuL::synapse0x1fff390() {
   return (neuron0x1fdca50()*-0.877889);
}

double NNfunction_sb_uLuL::synapse0x1fff3d0() {
   return (neuron0x1fdcd90()*0.181079);
}

double NNfunction_sb_uLuL::synapse0x1fff410() {
   return (neuron0x1fdd0d0()*0.774612);
}

double NNfunction_sb_uLuL::synapse0x1fff450() {
   return (neuron0x1fdd410()*-0.0189867);
}

double NNfunction_sb_uLuL::synapse0x1fff490() {
   return (neuron0x1fdd750()*-0.128318);
}

double NNfunction_sb_uLuL::synapse0x1fff4d0() {
   return (neuron0x1fdda90()*0.603347);
}

double NNfunction_sb_uLuL::synapse0x1fff510() {
   return (neuron0x1fdddd0()*-0.098461);
}

double NNfunction_sb_uLuL::synapse0x1fff550() {
   return (neuron0x1fde110()*0.350963);
}

double NNfunction_sb_uLuL::synapse0x1fff590() {
   return (neuron0x1fde450()*-0.388861);
}

double NNfunction_sb_uLuL::synapse0x1fff5d0() {
   return (neuron0x1fde790()*0.89462);
}

double NNfunction_sb_uLuL::synapse0x1fff610() {
   return (neuron0x1fdead0()*0.153503);
}

double NNfunction_sb_uLuL::synapse0x1fff650() {
   return (neuron0x1fdee10()*0.00369825);
}

double NNfunction_sb_uLuL::synapse0x1fff690() {
   return (neuron0x1fdf150()*0.475921);
}

double NNfunction_sb_uLuL::synapse0x1fff6d0() {
   return (neuron0x1fdf490()*0.651456);
}

double NNfunction_sb_uLuL::synapse0x1fff160() {
   return (neuron0x1fdf7d0()*-0.0101968);
}

double NNfunction_sb_uLuL::synapse0x1fff1a0() {
   return (neuron0x1fdfd30()*0.004182);
}

double NNfunction_sb_uLuL::synapse0x1fefcd0() {
   return (neuron0x1fdff50()*0.160738);
}

double NNfunction_sb_uLuL::synapse0x1fefd10() {
   return (neuron0x1fe0290()*0.20651);
}

double NNfunction_sb_uLuL::synapse0x1fefd50() {
   return (neuron0x1fe05d0()*-0.267371);
}

double NNfunction_sb_uLuL::synapse0x1fefd90() {
   return (neuron0x1fe0910()*-0.239978);
}

double NNfunction_sb_uLuL::synapse0x1fefdd0() {
   return (neuron0x1fe0c50()*-0.196903);
}

double NNfunction_sb_uLuL::synapse0x1fefe10() {
   return (neuron0x1fe0f90()*-0.178518);
}

double NNfunction_sb_uLuL::synapse0x1ff0190() {
   return (neuron0x1fdc3d0()*-0.467385);
}

double NNfunction_sb_uLuL::synapse0x1ff01d0() {
   return (neuron0x1fdc710()*-0.544084);
}

double NNfunction_sb_uLuL::synapse0x1ff0210() {
   return (neuron0x1fdca50()*0.630166);
}

double NNfunction_sb_uLuL::synapse0x1ff0250() {
   return (neuron0x1fdcd90()*-0.85803);
}

double NNfunction_sb_uLuL::synapse0x1ff0290() {
   return (neuron0x1fdd0d0()*-0.146151);
}

double NNfunction_sb_uLuL::synapse0x1ff02d0() {
   return (neuron0x1fdd410()*0.221689);
}

double NNfunction_sb_uLuL::synapse0x1ff0310() {
   return (neuron0x1fdd750()*-0.152567);
}

double NNfunction_sb_uLuL::synapse0x1ff0350() {
   return (neuron0x1fdda90()*0.0212571);
}

double NNfunction_sb_uLuL::synapse0x1ff0390() {
   return (neuron0x1fdddd0()*0.194039);
}

double NNfunction_sb_uLuL::synapse0x1ff03d0() {
   return (neuron0x1fde110()*-0.157988);
}

double NNfunction_sb_uLuL::synapse0x1ff0410() {
   return (neuron0x1fde450()*0.160889);
}

double NNfunction_sb_uLuL::synapse0x1ff0450() {
   return (neuron0x1fde790()*-0.709447);
}

double NNfunction_sb_uLuL::synapse0x1ff0490() {
   return (neuron0x1fdead0()*-0.0700036);
}

double NNfunction_sb_uLuL::synapse0x1ff04d0() {
   return (neuron0x1fdee10()*-0.00221891);
}

double NNfunction_sb_uLuL::synapse0x1ff0510() {
   return (neuron0x1fdf150()*-1.05706);
}

double NNfunction_sb_uLuL::synapse0x1ff0550() {
   return (neuron0x1fdf490()*0.819991);
}

double NNfunction_sb_uLuL::synapse0x1feffe0() {
   return (neuron0x1fdf7d0()*0.178313);
}

double NNfunction_sb_uLuL::synapse0x1ff0020() {
   return (neuron0x1fdfd30()*-0.157833);
}

double NNfunction_sb_uLuL::synapse0x1ff06a0() {
   return (neuron0x1fdff50()*0.426939);
}

double NNfunction_sb_uLuL::synapse0x1ff06e0() {
   return (neuron0x1fe0290()*0.173746);
}

double NNfunction_sb_uLuL::synapse0x1ff0720() {
   return (neuron0x1fe05d0()*-0.0280086);
}

double NNfunction_sb_uLuL::synapse0x1ff0760() {
   return (neuron0x1fe0910()*0.137327);
}

double NNfunction_sb_uLuL::synapse0x1ff07a0() {
   return (neuron0x1fe0c50()*0.04244);
}

double NNfunction_sb_uLuL::synapse0x1ff07e0() {
   return (neuron0x1fe0f90()*-0.0206971);
}

double NNfunction_sb_uLuL::synapse0x1ff0b60() {
   return (neuron0x1fdc3d0()*-0.0329049);
}

double NNfunction_sb_uLuL::synapse0x1ff0ba0() {
   return (neuron0x1fdc710()*-0.0306092);
}

double NNfunction_sb_uLuL::synapse0x1ff0be0() {
   return (neuron0x1fdca50()*0.0678143);
}

double NNfunction_sb_uLuL::synapse0x1ff0c20() {
   return (neuron0x1fdcd90()*0.474044);
}

double NNfunction_sb_uLuL::synapse0x1ff0c60() {
   return (neuron0x1fdd0d0()*0.00299477);
}

double NNfunction_sb_uLuL::synapse0x1ff0ca0() {
   return (neuron0x1fdd410()*-0.0435205);
}

double NNfunction_sb_uLuL::synapse0x1ff0ce0() {
   return (neuron0x1fdd750()*0.0419278);
}

double NNfunction_sb_uLuL::synapse0x1ff0d20() {
   return (neuron0x1fdda90()*-0.0275847);
}

double NNfunction_sb_uLuL::synapse0x1ff0d60() {
   return (neuron0x1fdddd0()*0.0574739);
}

double NNfunction_sb_uLuL::synapse0x1ff0da0() {
   return (neuron0x1fde110()*0.102197);
}

double NNfunction_sb_uLuL::synapse0x1ff0de0() {
   return (neuron0x1fde450()*-0.0183809);
}

double NNfunction_sb_uLuL::synapse0x1ff0e20() {
   return (neuron0x1fde790()*-1.80233);
}

double NNfunction_sb_uLuL::synapse0x1ff0e60() {
   return (neuron0x1fdead0()*-0.0732895);
}

double NNfunction_sb_uLuL::synapse0x1ff0ea0() {
   return (neuron0x1fdee10()*-0.0987346);
}

double NNfunction_sb_uLuL::synapse0x1ff0ee0() {
   return (neuron0x1fdf150()*-0.101993);
}

double NNfunction_sb_uLuL::synapse0x1ff0f20() {
   return (neuron0x1fdf490()*0.0358854);
}

double NNfunction_sb_uLuL::synapse0x1ff09b0() {
   return (neuron0x1fdf7d0()*-0.0393428);
}

double NNfunction_sb_uLuL::synapse0x1ff09f0() {
   return (neuron0x1fdfd30()*-0.0846195);
}

double NNfunction_sb_uLuL::synapse0x1ff1070() {
   return (neuron0x1fdff50()*-0.0197311);
}

double NNfunction_sb_uLuL::synapse0x1ff10b0() {
   return (neuron0x1fe0290()*0.0417562);
}

double NNfunction_sb_uLuL::synapse0x1ff10f0() {
   return (neuron0x1fe05d0()*0.0261097);
}

double NNfunction_sb_uLuL::synapse0x1ff1130() {
   return (neuron0x1fe0910()*-0.0387319);
}

double NNfunction_sb_uLuL::synapse0x1ff1170() {
   return (neuron0x1fe0c50()*0.0213454);
}

double NNfunction_sb_uLuL::synapse0x1ff11b0() {
   return (neuron0x1fe0f90()*-0.00442168);
}

double NNfunction_sb_uLuL::synapse0x1ff1530() {
   return (neuron0x1fdc3d0()*-0.150996);
}

double NNfunction_sb_uLuL::synapse0x1ff1570() {
   return (neuron0x1fdc710()*0.0483363);
}

double NNfunction_sb_uLuL::synapse0x1ff15b0() {
   return (neuron0x1fdca50()*0.394613);
}

double NNfunction_sb_uLuL::synapse0x1ff15f0() {
   return (neuron0x1fdcd90()*-0.748645);
}

double NNfunction_sb_uLuL::synapse0x1ff1630() {
   return (neuron0x1fdd0d0()*-0.533591);
}

double NNfunction_sb_uLuL::synapse0x1ff1670() {
   return (neuron0x1fdd410()*-0.223003);
}

double NNfunction_sb_uLuL::synapse0x1ff16b0() {
   return (neuron0x1fdd750()*-0.0400555);
}

double NNfunction_sb_uLuL::synapse0x1ff16f0() {
   return (neuron0x1fdda90()*-0.16425);
}

double NNfunction_sb_uLuL::synapse0x1ff1730() {
   return (neuron0x1fdddd0()*0.0203455);
}

double NNfunction_sb_uLuL::synapse0x1ff1770() {
   return (neuron0x1fde110()*0.154546);
}

double NNfunction_sb_uLuL::synapse0x1ff17b0() {
   return (neuron0x1fde450()*-7.79624e-05);
}

double NNfunction_sb_uLuL::synapse0x1ff17f0() {
   return (neuron0x1fde790()*-1.10607);
}

double NNfunction_sb_uLuL::synapse0x1ff1830() {
   return (neuron0x1fdead0()*0.104138);
}

double NNfunction_sb_uLuL::synapse0x1ff1870() {
   return (neuron0x1fdee10()*0.0821219);
}

double NNfunction_sb_uLuL::synapse0x1ff18b0() {
   return (neuron0x1fdf150()*1.00365);
}

double NNfunction_sb_uLuL::synapse0x1ff18f0() {
   return (neuron0x1fdf490()*0.443472);
}

double NNfunction_sb_uLuL::synapse0x1ff1380() {
   return (neuron0x1fdf7d0()*-0.119547);
}

double NNfunction_sb_uLuL::synapse0x1ff13c0() {
   return (neuron0x1fdfd30()*0.336628);
}

double NNfunction_sb_uLuL::synapse0x1ff1a40() {
   return (neuron0x1fdff50()*-0.116307);
}

double NNfunction_sb_uLuL::synapse0x1ff1a80() {
   return (neuron0x1fe0290()*-0.02253);
}

double NNfunction_sb_uLuL::synapse0x1ff1ac0() {
   return (neuron0x1fe05d0()*-0.166353);
}

double NNfunction_sb_uLuL::synapse0x1ff1b00() {
   return (neuron0x1fe0910()*0.14331);
}

double NNfunction_sb_uLuL::synapse0x1ff1b40() {
   return (neuron0x1fe0c50()*0.072926);
}

double NNfunction_sb_uLuL::synapse0x1ff1b80() {
   return (neuron0x1fe0f90()*0.0706525);
}

double NNfunction_sb_uLuL::synapse0x2003a50() {
   return (neuron0x1fdc3d0()*0.257592);
}

double NNfunction_sb_uLuL::synapse0x2003a90() {
   return (neuron0x1fdc710()*-0.150143);
}

double NNfunction_sb_uLuL::synapse0x2003ad0() {
   return (neuron0x1fdca50()*0.326014);
}

double NNfunction_sb_uLuL::synapse0x2003b10() {
   return (neuron0x1fdcd90()*-0.771076);
}

double NNfunction_sb_uLuL::synapse0x2003b50() {
   return (neuron0x1fdd0d0()*0.0487561);
}

double NNfunction_sb_uLuL::synapse0x2003b90() {
   return (neuron0x1fdd410()*0.24806);
}

double NNfunction_sb_uLuL::synapse0x2003bd0() {
   return (neuron0x1fdd750()*0.192496);
}

double NNfunction_sb_uLuL::synapse0x2003c10() {
   return (neuron0x1fdda90()*-0.106997);
}

double NNfunction_sb_uLuL::synapse0x2003c50() {
   return (neuron0x1fdddd0()*0.0340794);
}

double NNfunction_sb_uLuL::synapse0x2003c90() {
   return (neuron0x1fde110()*-0.0058847);
}

double NNfunction_sb_uLuL::synapse0x2003cd0() {
   return (neuron0x1fde450()*0.0974537);
}

double NNfunction_sb_uLuL::synapse0x2003d10() {
   return (neuron0x1fde790()*-0.400879);
}

double NNfunction_sb_uLuL::synapse0x2003d50() {
   return (neuron0x1fdead0()*0.141487);
}

double NNfunction_sb_uLuL::synapse0x2003d90() {
   return (neuron0x1fdee10()*0.208991);
}

double NNfunction_sb_uLuL::synapse0x2003dd0() {
   return (neuron0x1fdf150()*0.246786);
}

double NNfunction_sb_uLuL::synapse0x2003e10() {
   return (neuron0x1fdf490()*-0.222154);
}

double NNfunction_sb_uLuL::synapse0x1ff1bc0() {
   return (neuron0x1fdf7d0()*0.17598);
}

double NNfunction_sb_uLuL::synapse0x1ff1c00() {
   return (neuron0x1fdfd30()*-0.11437);
}

double NNfunction_sb_uLuL::synapse0x2003f60() {
   return (neuron0x1fdff50()*0.0844737);
}

double NNfunction_sb_uLuL::synapse0x2003fa0() {
   return (neuron0x1fe0290()*-0.0192873);
}

double NNfunction_sb_uLuL::synapse0x2003fe0() {
   return (neuron0x1fe05d0()*-0.411834);
}

double NNfunction_sb_uLuL::synapse0x2004020() {
   return (neuron0x1fe0910()*0.0414389);
}

double NNfunction_sb_uLuL::synapse0x2004060() {
   return (neuron0x1fe0c50()*-0.151862);
}

double NNfunction_sb_uLuL::synapse0x20040a0() {
   return (neuron0x1fe0f90()*-0.0813588);
}

double NNfunction_sb_uLuL::synapse0x2004420() {
   return (neuron0x1fdc3d0()*-0.0806945);
}

double NNfunction_sb_uLuL::synapse0x2004460() {
   return (neuron0x1fdc710()*-0.255035);
}

double NNfunction_sb_uLuL::synapse0x20044a0() {
   return (neuron0x1fdca50()*-0.374846);
}

double NNfunction_sb_uLuL::synapse0x20044e0() {
   return (neuron0x1fdcd90()*-0.772905);
}

double NNfunction_sb_uLuL::synapse0x2004520() {
   return (neuron0x1fdd0d0()*0.366399);
}

double NNfunction_sb_uLuL::synapse0x2004560() {
   return (neuron0x1fdd410()*0.221968);
}

double NNfunction_sb_uLuL::synapse0x20045a0() {
   return (neuron0x1fdd750()*-0.111378);
}

double NNfunction_sb_uLuL::synapse0x20045e0() {
   return (neuron0x1fdda90()*0.374935);
}

double NNfunction_sb_uLuL::synapse0x2004620() {
   return (neuron0x1fdddd0()*-0.425644);
}

double NNfunction_sb_uLuL::synapse0x2004660() {
   return (neuron0x1fde110()*-0.0246689);
}

double NNfunction_sb_uLuL::synapse0x20046a0() {
   return (neuron0x1fde450()*-0.437022);
}

double NNfunction_sb_uLuL::synapse0x20046e0() {
   return (neuron0x1fde790()*-0.280068);
}

double NNfunction_sb_uLuL::synapse0x2004720() {
   return (neuron0x1fdead0()*-0.815498);
}

double NNfunction_sb_uLuL::synapse0x2004760() {
   return (neuron0x1fdee10()*0.0582316);
}

double NNfunction_sb_uLuL::synapse0x20047a0() {
   return (neuron0x1fdf150()*-0.418458);
}

double NNfunction_sb_uLuL::synapse0x20047e0() {
   return (neuron0x1fdf490()*-0.263013);
}

double NNfunction_sb_uLuL::synapse0x2004270() {
   return (neuron0x1fdf7d0()*0.0308365);
}

double NNfunction_sb_uLuL::synapse0x20042b0() {
   return (neuron0x1fdfd30()*-0.545968);
}

double NNfunction_sb_uLuL::synapse0x2004930() {
   return (neuron0x1fdff50()*0.374218);
}

double NNfunction_sb_uLuL::synapse0x2004970() {
   return (neuron0x1fe0290()*-0.173683);
}

double NNfunction_sb_uLuL::synapse0x20049b0() {
   return (neuron0x1fe05d0()*0.49401);
}

double NNfunction_sb_uLuL::synapse0x20049f0() {
   return (neuron0x1fe0910()*-0.648349);
}

double NNfunction_sb_uLuL::synapse0x2004a30() {
   return (neuron0x1fe0c50()*-0.193009);
}

double NNfunction_sb_uLuL::synapse0x2004a70() {
   return (neuron0x1fe0f90()*-0.272224);
}

double NNfunction_sb_uLuL::synapse0x2004df0() {
   return (neuron0x1fdc3d0()*0.0457819);
}

double NNfunction_sb_uLuL::synapse0x2004e30() {
   return (neuron0x1fdc710()*-0.0717775);
}

double NNfunction_sb_uLuL::synapse0x2004e70() {
   return (neuron0x1fdca50()*-0.381988);
}

double NNfunction_sb_uLuL::synapse0x2004eb0() {
   return (neuron0x1fdcd90()*0.88175);
}

double NNfunction_sb_uLuL::synapse0x2004ef0() {
   return (neuron0x1fdd0d0()*0.137957);
}

double NNfunction_sb_uLuL::synapse0x2004f30() {
   return (neuron0x1fdd410()*-0.0387096);
}

double NNfunction_sb_uLuL::synapse0x2004f70() {
   return (neuron0x1fdd750()*0.303747);
}

double NNfunction_sb_uLuL::synapse0x2004fb0() {
   return (neuron0x1fdda90()*-0.198042);
}

double NNfunction_sb_uLuL::synapse0x2004ff0() {
   return (neuron0x1fdddd0()*0.0372132);
}

double NNfunction_sb_uLuL::synapse0x2005030() {
   return (neuron0x1fde110()*0.149331);
}

double NNfunction_sb_uLuL::synapse0x2005070() {
   return (neuron0x1fde450()*0.0261617);
}

double NNfunction_sb_uLuL::synapse0x20050b0() {
   return (neuron0x1fde790()*-0.486858);
}

double NNfunction_sb_uLuL::synapse0x20050f0() {
   return (neuron0x1fdead0()*0.170197);
}

double NNfunction_sb_uLuL::synapse0x2005130() {
   return (neuron0x1fdee10()*0.00199108);
}

double NNfunction_sb_uLuL::synapse0x2005170() {
   return (neuron0x1fdf150()*-0.150635);
}

double NNfunction_sb_uLuL::synapse0x20051b0() {
   return (neuron0x1fdf490()*0.174255);
}

double NNfunction_sb_uLuL::synapse0x2004c40() {
   return (neuron0x1fdf7d0()*0.151075);
}

double NNfunction_sb_uLuL::synapse0x2004c80() {
   return (neuron0x1fdfd30()*-0.0909758);
}

double NNfunction_sb_uLuL::synapse0x2005300() {
   return (neuron0x1fdff50()*-0.0617001);
}

double NNfunction_sb_uLuL::synapse0x2005340() {
   return (neuron0x1fe0290()*-0.00488544);
}

double NNfunction_sb_uLuL::synapse0x2005380() {
   return (neuron0x1fe05d0()*0.131056);
}

double NNfunction_sb_uLuL::synapse0x20053c0() {
   return (neuron0x1fe0910()*-0.00541705);
}

double NNfunction_sb_uLuL::synapse0x2005400() {
   return (neuron0x1fe0c50()*0.0319764);
}

double NNfunction_sb_uLuL::synapse0x2005440() {
   return (neuron0x1fe0f90()*-0.0606453);
}

double NNfunction_sb_uLuL::synapse0x20057c0() {
   return (neuron0x1fdc3d0()*-0.53066);
}

double NNfunction_sb_uLuL::synapse0x2005800() {
   return (neuron0x1fdc710()*-0.110949);
}

double NNfunction_sb_uLuL::synapse0x2005840() {
   return (neuron0x1fdca50()*0.089537);
}

double NNfunction_sb_uLuL::synapse0x2005880() {
   return (neuron0x1fdcd90()*-0.206065);
}

double NNfunction_sb_uLuL::synapse0x20058c0() {
   return (neuron0x1fdd0d0()*0.199446);
}

double NNfunction_sb_uLuL::synapse0x2005900() {
   return (neuron0x1fdd410()*-0.518657);
}

double NNfunction_sb_uLuL::synapse0x2005940() {
   return (neuron0x1fdd750()*-0.127139);
}

double NNfunction_sb_uLuL::synapse0x2005980() {
   return (neuron0x1fdda90()*-0.482078);
}

double NNfunction_sb_uLuL::synapse0x20059c0() {
   return (neuron0x1fdddd0()*-0.296859);
}

double NNfunction_sb_uLuL::synapse0x2005a00() {
   return (neuron0x1fde110()*-0.427417);
}

double NNfunction_sb_uLuL::synapse0x2005a40() {
   return (neuron0x1fde450()*-0.128174);
}

double NNfunction_sb_uLuL::synapse0x2005a80() {
   return (neuron0x1fde790()*-0.146334);
}

double NNfunction_sb_uLuL::synapse0x2005ac0() {
   return (neuron0x1fdead0()*-0.0632269);
}

double NNfunction_sb_uLuL::synapse0x2005b00() {
   return (neuron0x1fdee10()*0.471987);
}

double NNfunction_sb_uLuL::synapse0x2005b40() {
   return (neuron0x1fdf150()*0.493487);
}

double NNfunction_sb_uLuL::synapse0x2005b80() {
   return (neuron0x1fdf490()*0.0760862);
}

double NNfunction_sb_uLuL::synapse0x2005610() {
   return (neuron0x1fdf7d0()*-0.0152929);
}

double NNfunction_sb_uLuL::synapse0x2005650() {
   return (neuron0x1fdfd30()*-0.136);
}

double NNfunction_sb_uLuL::synapse0x2005cd0() {
   return (neuron0x1fdff50()*0.0295729);
}

double NNfunction_sb_uLuL::synapse0x2005d10() {
   return (neuron0x1fe0290()*-0.437973);
}

double NNfunction_sb_uLuL::synapse0x2005d50() {
   return (neuron0x1fe05d0()*-0.356164);
}

double NNfunction_sb_uLuL::synapse0x2005d90() {
   return (neuron0x1fe0910()*0.230144);
}

double NNfunction_sb_uLuL::synapse0x2005dd0() {
   return (neuron0x1fe0c50()*0.237296);
}

double NNfunction_sb_uLuL::synapse0x2005e10() {
   return (neuron0x1fe0f90()*0.0914844);
}

double NNfunction_sb_uLuL::synapse0x1da5d20() {
   return (neuron0x1fe1400()*0.636948);
}

double NNfunction_sb_uLuL::synapse0x1da5d60() {
   return (neuron0x1fe1d50()*0.759498);
}

double NNfunction_sb_uLuL::synapse0x1fe38c0() {
   return (neuron0x1fe2830()*0.0181296);
}

double NNfunction_sb_uLuL::synapse0x1fe3900() {
   return (neuron0x1fe22d0()*-0.0203942);
}

double NNfunction_sb_uLuL::synapse0x1fe4290() {
   return (neuron0x1fe3610()*-0.333622);
}

double NNfunction_sb_uLuL::synapse0x1fe42d0() {
   return (neuron0x1fe3fe0()*0.041104);
}

double NNfunction_sb_uLuL::synapse0x1fe5060() {
   return (neuron0x1fe4db0()*-1.04189);
}

double NNfunction_sb_uLuL::synapse0x1fe50a0() {
   return (neuron0x1fe5780()*0.0117735);
}

double NNfunction_sb_uLuL::synapse0x1fe5a30() {
   return (neuron0x1fe6150()*1.83225);
}

double NNfunction_sb_uLuL::synapse0x1fe5a70() {
   return (neuron0x1fe6c30()*0.768628);
}

double NNfunction_sb_uLuL::synapse0x1fe6400() {
   return (neuron0x1fe7600()*-0.895247);
}

double NNfunction_sb_uLuL::synapse0x1fe6440() {
   return (neuron0x1fe46e0()*0.0174876);
}

double NNfunction_sb_uLuL::synapse0x1fe6ee0() {
   return (neuron0x1fe91b0()*0.0462062);
}

double NNfunction_sb_uLuL::synapse0x1fe6f20() {
   return (neuron0x1fe9b80()*0.0109451);
}

double NNfunction_sb_uLuL::synapse0x1fe78b0() {
   return (neuron0x1fea550()*-0.238801);
}

double NNfunction_sb_uLuL::synapse0x1fe78f0() {
   return (neuron0x1feaf20()*-0.679491);
}

double NNfunction_sb_uLuL::synapse0x1fe4990() {
   return (neuron0x1fecd30()*-0.0250749);
}

double NNfunction_sb_uLuL::synapse0x1fe49d0() {
   return (neuron0x1fed010()*-0.0148873);
}

double NNfunction_sb_uLuL::synapse0x1fe9460() {
   return (neuron0x1fed9e0()*0.0284946);
}

double NNfunction_sb_uLuL::synapse0x1fe94a0() {
   return (neuron0x1fee3b0()*-0.0261878);
}

double NNfunction_sb_uLuL::synapse0x1fe9e30() {
   return (neuron0x1feed80()*0.0294635);
}

double NNfunction_sb_uLuL::synapse0x1fe9e70() {
   return (neuron0x1fef750()*0.000344226);
}

double NNfunction_sb_uLuL::synapse0x1fea800() {
   return (neuron0x1fe82a0()*-0.663435);
}

double NNfunction_sb_uLuL::synapse0x1fea840() {
   return (neuron0x1fe8c70()*-0.0181736);
}

double NNfunction_sb_uLuL::synapse0x1feb1d0() {
   return (neuron0x1ff24e0()*-0.0724943);
}

double NNfunction_sb_uLuL::synapse0x1feb210() {
   return (neuron0x1ff2eb0()*0.136618);
}

double NNfunction_sb_uLuL::synapse0x1fdf370() {
   return (neuron0x1ff3880()*0.258398);
}

double NNfunction_sb_uLuL::synapse0x1fdf3b0() {
   return (neuron0x1ff4250()*0.929683);
}

double NNfunction_sb_uLuL::synapse0x1fed2c0() {
   return (neuron0x1ff4c20()*0.0357948);
}

double NNfunction_sb_uLuL::synapse0x1fed300() {
   return (neuron0x1ff55f0()*0.00783884);
}

double NNfunction_sb_uLuL::synapse0x1fedc90() {
   return (neuron0x1ff5fc0()*-0.0115506);
}

double NNfunction_sb_uLuL::synapse0x1fedcd0() {
   return (neuron0x1ff6990()*-0.0651981);
}

double NNfunction_sb_uLuL::synapse0x1fee660() {
   return (neuron0x1feca20()*-0.548425);
}

double NNfunction_sb_uLuL::synapse0x1fee6a0() {
   return (neuron0x1ff9570()*-0.000477495);
}

double NNfunction_sb_uLuL::synapse0x1fef030() {
   return (neuron0x1ff9f40()*0.0174046);
}

double NNfunction_sb_uLuL::synapse0x1fef070() {
   return (neuron0x1ffa910()*0.137148);
}

double NNfunction_sb_uLuL::synapse0x1fefa00() {
   return (neuron0x1ffb2e0()*-0.0252443);
}

double NNfunction_sb_uLuL::synapse0x1fefa40() {
   return (neuron0x1ffbcb0()*-0.834888);
}

double NNfunction_sb_uLuL::synapse0x1fe8550() {
   return (neuron0x1ffc680()*-0.0323548);
}

double NNfunction_sb_uLuL::synapse0x1fe8590() {
   return (neuron0x1ffd050()*0.0405796);
}

double NNfunction_sb_uLuL::synapse0x1ff1e00() {
   return (neuron0x1ffda20()*-0.0274481);
}

double NNfunction_sb_uLuL::synapse0x1ff1e40() {
   return (neuron0x1ffe600()*-0.0144846);
}

double NNfunction_sb_uLuL::synapse0x1ff2790() {
   return (neuron0x1ffefd0()*0.0219243);
}

double NNfunction_sb_uLuL::synapse0x1ff27d0() {
   return (neuron0x1fefe50()*-0.0173068);
}

double NNfunction_sb_uLuL::synapse0x1ff3160() {
   return (neuron0x1ff0820()*-0.375649);
}

double NNfunction_sb_uLuL::synapse0x1ff31a0() {
   return (neuron0x1ff11f0()*-0.0161743);
}

double NNfunction_sb_uLuL::synapse0x1ff3b30() {
   return (neuron0x2003830()*-0.0825563);
}

double NNfunction_sb_uLuL::synapse0x1ff3b70() {
   return (neuron0x20040e0()*-0.0305836);
}

double NNfunction_sb_uLuL::synapse0x1ff4500() {
   return (neuron0x2004ab0()*0.156009);
}

double NNfunction_sb_uLuL::synapse0x1ff4540() {
   return (neuron0x2005480()*-0.00814578);
}

double NNfunction_sb_uLuL::synapse0x1ff6c40() {
   return (neuron0x1fe1400()*-0.0281756);
}

double NNfunction_sb_uLuL::synapse0x1ff6c80() {
   return (neuron0x1fe1d50()*4.54598);
}

double NNfunction_sb_uLuL::synapse0x1fec200() {
   return (neuron0x1fe2830()*-0.156308);
}

double NNfunction_sb_uLuL::synapse0x1fec240() {
   return (neuron0x1fe22d0()*0.521169);
}

double NNfunction_sb_uLuL::synapse0x1ff9820() {
   return (neuron0x1fe3610()*-0.375348);
}

double NNfunction_sb_uLuL::synapse0x1ff9860() {
   return (neuron0x1fe3fe0()*0.468295);
}

double NNfunction_sb_uLuL::synapse0x1ffa1f0() {
   return (neuron0x1fe4db0()*-6.37858);
}

double NNfunction_sb_uLuL::synapse0x1ffa230() {
   return (neuron0x1fe5780()*0.395346);
}

double NNfunction_sb_uLuL::synapse0x1ffabc0() {
   return (neuron0x1fe6150()*-0.748063);
}

double NNfunction_sb_uLuL::synapse0x1ffac00() {
   return (neuron0x1fe6c30()*-2.08601);
}

double NNfunction_sb_uLuL::synapse0x1ffb590() {
   return (neuron0x1fe7600()*0.483126);
}

double NNfunction_sb_uLuL::synapse0x1ffb5d0() {
   return (neuron0x1fe46e0()*-0.05027);
}

double NNfunction_sb_uLuL::synapse0x1ffbf60() {
   return (neuron0x1fe91b0()*-0.752937);
}

double NNfunction_sb_uLuL::synapse0x1ffbfa0() {
   return (neuron0x1fe9b80()*-0.229419);
}

double NNfunction_sb_uLuL::synapse0x1ffc930() {
   return (neuron0x1fea550()*-0.608718);
}

double NNfunction_sb_uLuL::synapse0x1ffc970() {
   return (neuron0x1feaf20()*2.58201);
}

double NNfunction_sb_uLuL::synapse0x1ffd300() {
   return (neuron0x1fecd30()*-0.0246851);
}

double NNfunction_sb_uLuL::synapse0x1ffd340() {
   return (neuron0x1fed010()*-0.586804);
}

double NNfunction_sb_uLuL::synapse0x1ffdcd0() {
   return (neuron0x1fed9e0()*-1.22351);
}

double NNfunction_sb_uLuL::synapse0x1ffdd10() {
   return (neuron0x1fee3b0()*-0.473975);
}

double NNfunction_sb_uLuL::synapse0x1ffe8b0() {
   return (neuron0x1feed80()*-0.691308);
}

double NNfunction_sb_uLuL::synapse0x1ffe8f0() {
   return (neuron0x1fef750()*-0.314206);
}

double NNfunction_sb_uLuL::synapse0x1fff280() {
   return (neuron0x1fe82a0()*1.48196);
}

double NNfunction_sb_uLuL::synapse0x1fff2c0() {
   return (neuron0x1fe8c70()*-0.330563);
}

double NNfunction_sb_uLuL::synapse0x1ff0100() {
   return (neuron0x1ff24e0()*0.267519);
}

double NNfunction_sb_uLuL::synapse0x1ff0140() {
   return (neuron0x1ff2eb0()*0.803966);
}

double NNfunction_sb_uLuL::synapse0x1ff0ad0() {
   return (neuron0x1ff3880()*-2.51397);
}

double NNfunction_sb_uLuL::synapse0x1ff0b10() {
   return (neuron0x1ff4250()*-2.23222);
}

double NNfunction_sb_uLuL::synapse0x1ff14a0() {
   return (neuron0x1ff4c20()*0.142904);
}

double NNfunction_sb_uLuL::synapse0x1ff14e0() {
   return (neuron0x1ff55f0()*0.54652);
}

double NNfunction_sb_uLuL::synapse0x20039c0() {
   return (neuron0x1ff5fc0()*-1.90392);
}

double NNfunction_sb_uLuL::synapse0x2003a00() {
   return (neuron0x1ff6990()*-0.103299);
}

double NNfunction_sb_uLuL::synapse0x2004390() {
   return (neuron0x1feca20()*2.93818);
}

double NNfunction_sb_uLuL::synapse0x20043d0() {
   return (neuron0x1ff9570()*-0.280975);
}

double NNfunction_sb_uLuL::synapse0x2004d60() {
   return (neuron0x1ff9f40()*-0.703287);
}

double NNfunction_sb_uLuL::synapse0x2004da0() {
   return (neuron0x1ffa910()*0.0902684);
}

double NNfunction_sb_uLuL::synapse0x2005730() {
   return (neuron0x1ffb2e0()*1.74753);
}

double NNfunction_sb_uLuL::synapse0x2005770() {
   return (neuron0x1ffbcb0()*0.699666);
}

double NNfunction_sb_uLuL::synapse0x1fe1620() {
   return (neuron0x1ffc680()*-0.182026);
}

double NNfunction_sb_uLuL::synapse0x1fe1660() {
   return (neuron0x1ffd050()*0.476737);
}

double NNfunction_sb_uLuL::synapse0x1ff4ed0() {
   return (neuron0x1ffda20()*-0.357468);
}

double NNfunction_sb_uLuL::synapse0x1ff4f10() {
   return (neuron0x1ffe600()*-0.337571);
}

double NNfunction_sb_uLuL::synapse0x2005e50() {
   return (neuron0x1ffefd0()*0.146764);
}

double NNfunction_sb_uLuL::synapse0x2005e90() {
   return (neuron0x1fefe50()*-0.118864);
}

double NNfunction_sb_uLuL::synapse0x2005ed0() {
   return (neuron0x1ff0820()*0.932039);
}

double NNfunction_sb_uLuL::synapse0x2005f10() {
   return (neuron0x1ff11f0()*-0.0453151);
}

double NNfunction_sb_uLuL::synapse0x200cdc0() {
   return (neuron0x2003830()*0.695775);
}

double NNfunction_sb_uLuL::synapse0x200ce00() {
   return (neuron0x20040e0()*0.212736);
}

double NNfunction_sb_uLuL::synapse0x200ce40() {
   return (neuron0x2004ab0()*-1.87239);
}

double NNfunction_sb_uLuL::synapse0x200ce80() {
   return (neuron0x2005480()*0.528471);
}

double NNfunction_sb_uLuL::synapse0x200d200() {
   return (neuron0x1fe1400()*0.884014);
}

double NNfunction_sb_uLuL::synapse0x200d240() {
   return (neuron0x1fe1d50()*-0.205855);
}

double NNfunction_sb_uLuL::synapse0x200d280() {
   return (neuron0x1fe2830()*0.127194);
}

double NNfunction_sb_uLuL::synapse0x200d2c0() {
   return (neuron0x1fe22d0()*-0.0454944);
}

double NNfunction_sb_uLuL::synapse0x200d300() {
   return (neuron0x1fe3610()*0.0509544);
}

double NNfunction_sb_uLuL::synapse0x200d340() {
   return (neuron0x1fe3fe0()*-0.0528637);
}

double NNfunction_sb_uLuL::synapse0x200d380() {
   return (neuron0x1fe4db0()*-0.924318);
}

double NNfunction_sb_uLuL::synapse0x200d3c0() {
   return (neuron0x1fe5780()*-0.0860488);
}

double NNfunction_sb_uLuL::synapse0x200d400() {
   return (neuron0x1fe6150()*1.5095);
}

double NNfunction_sb_uLuL::synapse0x200d440() {
   return (neuron0x1fe6c30()*0.119235);
}

double NNfunction_sb_uLuL::synapse0x200d480() {
   return (neuron0x1fe7600()*-0.112637);
}

double NNfunction_sb_uLuL::synapse0x200d4c0() {
   return (neuron0x1fe46e0()*0.00684688);
}

double NNfunction_sb_uLuL::synapse0x200d500() {
   return (neuron0x1fe91b0()*-0.440836);
}

double NNfunction_sb_uLuL::synapse0x200d540() {
   return (neuron0x1fe9b80()*0.00789991);
}

double NNfunction_sb_uLuL::synapse0x200d580() {
   return (neuron0x1fea550()*-0.245874);
}

double NNfunction_sb_uLuL::synapse0x200d5c0() {
   return (neuron0x1feaf20()*-0.956949);
}

double NNfunction_sb_uLuL::synapse0x200d050() {
   return (neuron0x1fecd30()*-0.0669583);
}

double NNfunction_sb_uLuL::synapse0x200d090() {
   return (neuron0x1fed010()*-0.00950249);
}

double NNfunction_sb_uLuL::synapse0x200d710() {
   return (neuron0x1fed9e0()*-0.451802);
}

double NNfunction_sb_uLuL::synapse0x200d750() {
   return (neuron0x1fee3b0()*0.0561476);
}

double NNfunction_sb_uLuL::synapse0x200d790() {
   return (neuron0x1feed80()*-0.0834637);
}

double NNfunction_sb_uLuL::synapse0x200d7d0() {
   return (neuron0x1fef750()*-0.0120749);
}

double NNfunction_sb_uLuL::synapse0x200d810() {
   return (neuron0x1fe82a0()*-1.30714);
}

double NNfunction_sb_uLuL::synapse0x200d850() {
   return (neuron0x1fe8c70()*-0.0729132);
}

double NNfunction_sb_uLuL::synapse0x200d890() {
   return (neuron0x1ff24e0()*0.17237);
}

double NNfunction_sb_uLuL::synapse0x200d8d0() {
   return (neuron0x1ff2eb0()*-1.03691);
}

double NNfunction_sb_uLuL::synapse0x200d910() {
   return (neuron0x1ff3880()*-0.273552);
}

double NNfunction_sb_uLuL::synapse0x200d950() {
   return (neuron0x1ff4250()*0.0931598);
}

double NNfunction_sb_uLuL::synapse0x200d990() {
   return (neuron0x1ff4c20()*0.0323328);
}

double NNfunction_sb_uLuL::synapse0x200d9d0() {
   return (neuron0x1ff55f0()*-0.0791173);
}

double NNfunction_sb_uLuL::synapse0x200da10() {
   return (neuron0x1ff5fc0()*-0.0844717);
}

double NNfunction_sb_uLuL::synapse0x200da50() {
   return (neuron0x1ff6990()*-0.033138);
}

double NNfunction_sb_uLuL::synapse0x200d600() {
   return (neuron0x1feca20()*-0.463753);
}

double NNfunction_sb_uLuL::synapse0x200d640() {
   return (neuron0x1ff9570()*0.00576049);
}

double NNfunction_sb_uLuL::synapse0x200d680() {
   return (neuron0x1ff9f40()*-0.050258);
}

double NNfunction_sb_uLuL::synapse0x200d6c0() {
   return (neuron0x1ffa910()*-0.0587149);
}

double NNfunction_sb_uLuL::synapse0x200dca0() {
   return (neuron0x1ffb2e0()*-0.0217854);
}

double NNfunction_sb_uLuL::synapse0x200dce0() {
   return (neuron0x1ffbcb0()*-0.442029);
}

double NNfunction_sb_uLuL::synapse0x200dd20() {
   return (neuron0x1ffc680()*-0.0221759);
}

double NNfunction_sb_uLuL::synapse0x200dd60() {
   return (neuron0x1ffd050()*-0.0823676);
}

double NNfunction_sb_uLuL::synapse0x200dda0() {
   return (neuron0x1ffda20()*-0.0572441);
}

double NNfunction_sb_uLuL::synapse0x200dde0() {
   return (neuron0x1ffe600()*0.0182627);
}

double NNfunction_sb_uLuL::synapse0x200de20() {
   return (neuron0x1ffefd0()*0.052714);
}

double NNfunction_sb_uLuL::synapse0x200de60() {
   return (neuron0x1fefe50()*-0.0700078);
}

double NNfunction_sb_uLuL::synapse0x200dea0() {
   return (neuron0x1ff0820()*-0.554583);
}

double NNfunction_sb_uLuL::synapse0x200dee0() {
   return (neuron0x1ff11f0()*-0.118647);
}

double NNfunction_sb_uLuL::synapse0x200df20() {
   return (neuron0x2003830()*-0.15966);
}

double NNfunction_sb_uLuL::synapse0x200df60() {
   return (neuron0x20040e0()*-0.0168001);
}

double NNfunction_sb_uLuL::synapse0x200dfa0() {
   return (neuron0x2004ab0()*0.0913164);
}

double NNfunction_sb_uLuL::synapse0x200dfe0() {
   return (neuron0x2005480()*-0.103036);
}

double NNfunction_sb_uLuL::synapse0x200e360() {
   return (neuron0x1fe1400()*-1.23795);
}

double NNfunction_sb_uLuL::synapse0x200e3a0() {
   return (neuron0x1fe1d50()*-1.12187);
}

double NNfunction_sb_uLuL::synapse0x200e3e0() {
   return (neuron0x1fe2830()*-2.77192);
}

double NNfunction_sb_uLuL::synapse0x200e420() {
   return (neuron0x1fe22d0()*0.59637);
}

double NNfunction_sb_uLuL::synapse0x200e460() {
   return (neuron0x1fe3610()*-0.52093);
}

double NNfunction_sb_uLuL::synapse0x200e4a0() {
   return (neuron0x1fe3fe0()*-1.06832);
}

double NNfunction_sb_uLuL::synapse0x200e4e0() {
   return (neuron0x1fe4db0()*4.10592);
}

double NNfunction_sb_uLuL::synapse0x200e520() {
   return (neuron0x1fe5780()*-1.88795);
}

double NNfunction_sb_uLuL::synapse0x200e560() {
   return (neuron0x1fe6150()*0.963993);
}

double NNfunction_sb_uLuL::synapse0x200e5a0() {
   return (neuron0x1fe6c30()*5.07422);
}

double NNfunction_sb_uLuL::synapse0x200e5e0() {
   return (neuron0x1fe7600()*-2.29771);
}

double NNfunction_sb_uLuL::synapse0x200e620() {
   return (neuron0x1fe46e0()*-1.16798);
}

double NNfunction_sb_uLuL::synapse0x200e660() {
   return (neuron0x1fe91b0()*2.76371);
}

double NNfunction_sb_uLuL::synapse0x200e6a0() {
   return (neuron0x1fe9b80()*-1.03834);
}

double NNfunction_sb_uLuL::synapse0x200e6e0() {
   return (neuron0x1fea550()*1.88018);
}

double NNfunction_sb_uLuL::synapse0x200e720() {
   return (neuron0x1feaf20()*-2.90094);
}

double NNfunction_sb_uLuL::synapse0x200e1b0() {
   return (neuron0x1fecd30()*1.24783);
}

double NNfunction_sb_uLuL::synapse0x200e1f0() {
   return (neuron0x1fed010()*1.60522);
}

double NNfunction_sb_uLuL::synapse0x200e870() {
   return (neuron0x1fed9e0()*1.77778);
}

double NNfunction_sb_uLuL::synapse0x200e8b0() {
   return (neuron0x1fee3b0()*0.640103);
}

double NNfunction_sb_uLuL::synapse0x200e8f0() {
   return (neuron0x1feed80()*-0.299059);
}

double NNfunction_sb_uLuL::synapse0x200e930() {
   return (neuron0x1fef750()*0.365456);
}

double NNfunction_sb_uLuL::synapse0x200e970() {
   return (neuron0x1fe82a0()*-0.89221);
}

double NNfunction_sb_uLuL::synapse0x200e9b0() {
   return (neuron0x1fe8c70()*1.18427);
}

double NNfunction_sb_uLuL::synapse0x200e9f0() {
   return (neuron0x1ff24e0()*-2.54581);
}

double NNfunction_sb_uLuL::synapse0x200ea30() {
   return (neuron0x1ff2eb0()*-2.80064);
}

double NNfunction_sb_uLuL::synapse0x200ea70() {
   return (neuron0x1ff3880()*2.58277);
}

double NNfunction_sb_uLuL::synapse0x200eab0() {
   return (neuron0x1ff4250()*4.77017);
}

double NNfunction_sb_uLuL::synapse0x200eaf0() {
   return (neuron0x1ff4c20()*-2.24105);
}

double NNfunction_sb_uLuL::synapse0x200eb30() {
   return (neuron0x1ff55f0()*-0.35435);
}

double NNfunction_sb_uLuL::synapse0x200eb70() {
   return (neuron0x1ff5fc0()*1.30177);
}

double NNfunction_sb_uLuL::synapse0x200ebb0() {
   return (neuron0x1ff6990()*1.38059);
}

double NNfunction_sb_uLuL::synapse0x200e760() {
   return (neuron0x1feca20()*-2.72965);
}

double NNfunction_sb_uLuL::synapse0x200e7a0() {
   return (neuron0x1ff9570()*0.29239);
}

double NNfunction_sb_uLuL::synapse0x200e7e0() {
   return (neuron0x1ff9f40()*-1.1181);
}

double NNfunction_sb_uLuL::synapse0x200e820() {
   return (neuron0x1ffa910()*-1.54732);
}

double NNfunction_sb_uLuL::synapse0x200ee00() {
   return (neuron0x1ffb2e0()*-0.328934);
}

double NNfunction_sb_uLuL::synapse0x200ee40() {
   return (neuron0x1ffbcb0()*-1.45638);
}

double NNfunction_sb_uLuL::synapse0x200ee80() {
   return (neuron0x1ffc680()*1.36944);
}

double NNfunction_sb_uLuL::synapse0x200eec0() {
   return (neuron0x1ffd050()*-2.29899);
}

double NNfunction_sb_uLuL::synapse0x200ef00() {
   return (neuron0x1ffda20()*0.884256);
}

double NNfunction_sb_uLuL::synapse0x200ef40() {
   return (neuron0x1ffe600()*0.415575);
}

double NNfunction_sb_uLuL::synapse0x200ef80() {
   return (neuron0x1ffefd0()*-0.81653);
}

double NNfunction_sb_uLuL::synapse0x200efc0() {
   return (neuron0x1fefe50()*1.2918);
}

double NNfunction_sb_uLuL::synapse0x200f000() {
   return (neuron0x1ff0820()*-1.97163);
}

double NNfunction_sb_uLuL::synapse0x200f040() {
   return (neuron0x1ff11f0()*1.27781);
}

double NNfunction_sb_uLuL::synapse0x200f080() {
   return (neuron0x2003830()*0.294669);
}

double NNfunction_sb_uLuL::synapse0x200f0c0() {
   return (neuron0x20040e0()*1.14973);
}

double NNfunction_sb_uLuL::synapse0x200f100() {
   return (neuron0x2004ab0()*0.819008);
}

double NNfunction_sb_uLuL::synapse0x200f140() {
   return (neuron0x2005480()*0.88236);
}

double NNfunction_sb_uLuL::synapse0x200f4c0() {
   return (neuron0x1fe1400()*-0.0427839);
}

double NNfunction_sb_uLuL::synapse0x200f500() {
   return (neuron0x1fe1d50()*0.550418);
}

double NNfunction_sb_uLuL::synapse0x200f540() {
   return (neuron0x1fe2830()*0.0441339);
}

double NNfunction_sb_uLuL::synapse0x200f580() {
   return (neuron0x1fe22d0()*-0.021381);
}

double NNfunction_sb_uLuL::synapse0x200f5c0() {
   return (neuron0x1fe3610()*0.643521);
}

double NNfunction_sb_uLuL::synapse0x200f600() {
   return (neuron0x1fe3fe0()*0.0246894);
}

double NNfunction_sb_uLuL::synapse0x200f640() {
   return (neuron0x1fe4db0()*-1.05219);
}

double NNfunction_sb_uLuL::synapse0x200f680() {
   return (neuron0x1fe5780()*0.0822153);
}

double NNfunction_sb_uLuL::synapse0x200f6c0() {
   return (neuron0x1fe6150()*-1.26691);
}

double NNfunction_sb_uLuL::synapse0x200f700() {
   return (neuron0x1fe6c30()*0.172051);
}

double NNfunction_sb_uLuL::synapse0x200f740() {
   return (neuron0x1fe7600()*0.498627);
}

double NNfunction_sb_uLuL::synapse0x200f780() {
   return (neuron0x1fe46e0()*0.00548755);
}

double NNfunction_sb_uLuL::synapse0x200f7c0() {
   return (neuron0x1fe91b0()*-0.0296153);
}

double NNfunction_sb_uLuL::synapse0x200f800() {
   return (neuron0x1fe9b80()*0.0115274);
}

double NNfunction_sb_uLuL::synapse0x200f840() {
   return (neuron0x1fea550()*-0.227871);
}

double NNfunction_sb_uLuL::synapse0x200f880() {
   return (neuron0x1feaf20()*0.497653);
}

double NNfunction_sb_uLuL::synapse0x200f310() {
   return (neuron0x1fecd30()*-0.0417542);
}

double NNfunction_sb_uLuL::synapse0x200f350() {
   return (neuron0x1fed010()*-0.0122376);
}

double NNfunction_sb_uLuL::synapse0x200f9d0() {
   return (neuron0x1fed9e0()*-0.116229);
}

double NNfunction_sb_uLuL::synapse0x200fa10() {
   return (neuron0x1fee3b0()*0.00255691);
}

double NNfunction_sb_uLuL::synapse0x200fa50() {
   return (neuron0x1feed80()*0.00774136);
}

double NNfunction_sb_uLuL::synapse0x200fa90() {
   return (neuron0x1fef750()*0.00424001);
}

double NNfunction_sb_uLuL::synapse0x200fad0() {
   return (neuron0x1fe82a0()*0.801358);
}

double NNfunction_sb_uLuL::synapse0x200fb10() {
   return (neuron0x1fe8c70()*-0.0478359);
}

double NNfunction_sb_uLuL::synapse0x200fb50() {
   return (neuron0x1ff24e0()*-0.0145209);
}

double NNfunction_sb_uLuL::synapse0x200fb90() {
   return (neuron0x1ff2eb0()*0.0979019);
}

double NNfunction_sb_uLuL::synapse0x200fbd0() {
   return (neuron0x1ff3880()*-0.0863163);
}

double NNfunction_sb_uLuL::synapse0x200fc10() {
   return (neuron0x1ff4250()*0.742929);
}

double NNfunction_sb_uLuL::synapse0x200fc50() {
   return (neuron0x1ff4c20()*0.0917751);
}

double NNfunction_sb_uLuL::synapse0x200fc90() {
   return (neuron0x1ff55f0()*0.00644409);
}

double NNfunction_sb_uLuL::synapse0x200fcd0() {
   return (neuron0x1ff5fc0()*-0.042704);
}

double NNfunction_sb_uLuL::synapse0x200fd10() {
   return (neuron0x1ff6990()*-0.0468311);
}

double NNfunction_sb_uLuL::synapse0x200f8c0() {
   return (neuron0x1feca20()*-0.339026);
}

double NNfunction_sb_uLuL::synapse0x200f900() {
   return (neuron0x1ff9570()*0.00413675);
}

double NNfunction_sb_uLuL::synapse0x200f940() {
   return (neuron0x1ff9f40()*0.0267534);
}

double NNfunction_sb_uLuL::synapse0x200f980() {
   return (neuron0x1ffa910()*0.090263);
}

double NNfunction_sb_uLuL::synapse0x200ff60() {
   return (neuron0x1ffb2e0()*-0.0183257);
}

double NNfunction_sb_uLuL::synapse0x200ffa0() {
   return (neuron0x1ffbcb0()*0.554777);
}

double NNfunction_sb_uLuL::synapse0x200ffe0() {
   return (neuron0x1ffc680()*-0.0377276);
}

double NNfunction_sb_uLuL::synapse0x2010020() {
   return (neuron0x1ffd050()*0.0109748);
}

double NNfunction_sb_uLuL::synapse0x2010060() {
   return (neuron0x1ffda20()*-0.038696);
}

double NNfunction_sb_uLuL::synapse0x20100a0() {
   return (neuron0x1ffe600()*0.0121207);
}

double NNfunction_sb_uLuL::synapse0x20100e0() {
   return (neuron0x1ffefd0()*0.0192137);
}

double NNfunction_sb_uLuL::synapse0x2010120() {
   return (neuron0x1fefe50()*-0.032991);
}

double NNfunction_sb_uLuL::synapse0x2010160() {
   return (neuron0x1ff0820()*-0.28647);
}

double NNfunction_sb_uLuL::synapse0x20101a0() {
   return (neuron0x1ff11f0()*-0.0401897);
}

double NNfunction_sb_uLuL::synapse0x20101e0() {
   return (neuron0x2003830()*-0.08538);
}

double NNfunction_sb_uLuL::synapse0x2010220() {
   return (neuron0x20040e0()*-0.0168756);
}

double NNfunction_sb_uLuL::synapse0x2010260() {
   return (neuron0x2004ab0()*0.179341);
}

double NNfunction_sb_uLuL::synapse0x20102a0() {
   return (neuron0x2005480()*-0.0304407);
}

double NNfunction_sb_uLuL::synapse0x2010500() {
   return (neuron0x200c680()*-5.58038);
}

double NNfunction_sb_uLuL::synapse0x2010540() {
   return (neuron0x200ca20()*8.73301);
}

double NNfunction_sb_uLuL::synapse0x2010580() {
   return (neuron0x200cec0()*-3.38881);
}

double NNfunction_sb_uLuL::synapse0x20105c0() {
   return (neuron0x200e020()*-7.73385);
}

double NNfunction_sb_uLuL::synapse0x2010600() {
   return (neuron0x200f180()*6.55542);
}

