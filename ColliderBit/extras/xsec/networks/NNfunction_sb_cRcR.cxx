#include "NNfunction_sb_cRcR.h"
#include <cmath>

double NNfunction_sb_cRcR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.8338)/15.0447;
   input1 = (in1 - 57.9784)/744.2;
   input2 = (in2 - 371.799)/462.62;
   input3 = (in3 - 292.885)/635.003;
   input4 = (in4 - 767.257)/700.507;
   input5 = (in5 - 663.528)/671.183;
   input6 = (in6 - 670.156)/680.531;
   input7 = (in7 - 660.037)/668.914;
   input8 = (in8 - 643.851)/670.379;
   input9 = (in9 - 639.105)/659.791;
   input10 = (in10 - 648.57)/687.359;
   input11 = (in11 - 704.685)/572.923;
   input12 = (in12 - 703.19)/573.094;
   input13 = (in13 - 553.266)/367.832;
   input14 = (in14 - 711.835)/567.842;
   input15 = (in15 - 544.531)/311.106;
   input16 = (in16 - 497.745)/393.301;
   input17 = (in17 - 711.741)/587.683;
   input18 = (in18 - 705.528)/584.847;
   input19 = (in19 - 709.483)/583.051;
   input20 = (in20 - -228.353)/423.973;
   input21 = (in21 - -296.465)/895.97;
   input22 = (in22 - -2.18194)/892.977;
   input23 = (in23 - 0.360849)/512.658;
   switch(index) {
     case 0:
         return neuron0x27ce210();
     default:
         return 0.;
   }
}

double NNfunction_sb_cRcR::Value(int index, double* input) {
   input0 = (input[0] - 22.8338)/15.0447;
   input1 = (input[1] - 57.9784)/744.2;
   input2 = (input[2] - 371.799)/462.62;
   input3 = (input[3] - 292.885)/635.003;
   input4 = (input[4] - 767.257)/700.507;
   input5 = (input[5] - 663.528)/671.183;
   input6 = (input[6] - 670.156)/680.531;
   input7 = (input[7] - 660.037)/668.914;
   input8 = (input[8] - 643.851)/670.379;
   input9 = (input[9] - 639.105)/659.791;
   input10 = (input[10] - 648.57)/687.359;
   input11 = (input[11] - 704.685)/572.923;
   input12 = (input[12] - 703.19)/573.094;
   input13 = (input[13] - 553.266)/367.832;
   input14 = (input[14] - 711.835)/567.842;
   input15 = (input[15] - 544.531)/311.106;
   input16 = (input[16] - 497.745)/393.301;
   input17 = (input[17] - 711.741)/587.683;
   input18 = (input[18] - 705.528)/584.847;
   input19 = (input[19] - 709.483)/583.051;
   input20 = (input[20] - -228.353)/423.973;
   input21 = (input[21] - -296.465)/895.97;
   input22 = (input[22] - -2.18194)/892.977;
   input23 = (input[23] - 0.360849)/512.658;
   switch(index) {
     case 0:
         return neuron0x27ce210();
     default:
         return 0.;
   }
}

double NNfunction_sb_cRcR::neuron0x279a300() {
   return input0;
}

double NNfunction_sb_cRcR::neuron0x279a640() {
   return input1;
}

double NNfunction_sb_cRcR::neuron0x279a980() {
   return input2;
}

double NNfunction_sb_cRcR::neuron0x279acc0() {
   return input3;
}

double NNfunction_sb_cRcR::neuron0x279b000() {
   return input4;
}

double NNfunction_sb_cRcR::neuron0x279b340() {
   return input5;
}

double NNfunction_sb_cRcR::neuron0x279b680() {
   return input6;
}

double NNfunction_sb_cRcR::neuron0x279b9c0() {
   return input7;
}

double NNfunction_sb_cRcR::neuron0x279bd00() {
   return input8;
}

double NNfunction_sb_cRcR::neuron0x279c040() {
   return input9;
}

double NNfunction_sb_cRcR::neuron0x279c380() {
   return input10;
}

double NNfunction_sb_cRcR::neuron0x279c6c0() {
   return input11;
}

double NNfunction_sb_cRcR::neuron0x279ca00() {
   return input12;
}

double NNfunction_sb_cRcR::neuron0x279cd40() {
   return input13;
}

double NNfunction_sb_cRcR::neuron0x279d080() {
   return input14;
}

double NNfunction_sb_cRcR::neuron0x279d3c0() {
   return input15;
}

double NNfunction_sb_cRcR::neuron0x279d700() {
   return input16;
}

double NNfunction_sb_cRcR::neuron0x279dc60() {
   return input17;
}

double NNfunction_sb_cRcR::neuron0x279de80() {
   return input18;
}

double NNfunction_sb_cRcR::neuron0x279e1c0() {
   return input19;
}

double NNfunction_sb_cRcR::neuron0x279e500() {
   return input20;
}

double NNfunction_sb_cRcR::neuron0x279e840() {
   return input21;
}

double NNfunction_sb_cRcR::neuron0x279eb80() {
   return input22;
}

double NNfunction_sb_cRcR::neuron0x279eec0() {
   return input23;
}

double NNfunction_sb_cRcR::input0x279f330() {
   double input = 0.259955;
   input += synapse0x279a1c0();
   input += synapse0x279a200();
   input += synapse0x279f5e0();
   input += synapse0x279f620();
   input += synapse0x279f660();
   input += synapse0x279f6a0();
   input += synapse0x279f6e0();
   input += synapse0x279f720();
   input += synapse0x279f760();
   input += synapse0x279f7a0();
   input += synapse0x279f7e0();
   input += synapse0x279f820();
   input += synapse0x279f860();
   input += synapse0x279f8a0();
   input += synapse0x279f8e0();
   input += synapse0x279f920();
   input += synapse0x279a130();
   input += synapse0x279a170();
   input += synapse0x25554f0();
   input += synapse0x2555530();
   input += synapse0x279fb80();
   input += synapse0x279fbc0();
   input += synapse0x279fc00();
   input += synapse0x279fc40();
   return input;
}

double NNfunction_sb_cRcR::neuron0x279f330() {
   double input = input0x279f330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x279fc80() {
   double input = 0.592137;
   input += synapse0x279ffc0();
   input += synapse0x27a0000();
   input += synapse0x27a0040();
   input += synapse0x27a0080();
   input += synapse0x27a00c0();
   input += synapse0x27a0100();
   input += synapse0x27a0140();
   input += synapse0x27a0180();
   input += synapse0x27a01c0();
   input += synapse0x279fa70();
   input += synapse0x279fab0();
   input += synapse0x279faf0();
   input += synapse0x279fb30();
   input += synapse0x27a0410();
   input += synapse0x27a0450();
   input += synapse0x27a0490();
   input += synapse0x279fe10();
   input += synapse0x279fe50();
   input += synapse0x27a05e0();
   input += synapse0x27a0620();
   input += synapse0x27a0660();
   input += synapse0x27a06a0();
   input += synapse0x27a06e0();
   input += synapse0x27a0720();
   return input;
}

double NNfunction_sb_cRcR::neuron0x279fc80() {
   double input = input0x279fc80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27a0760() {
   double input = -0.932073;
   input += synapse0x27a0aa0();
   input += synapse0x27a0ae0();
   input += synapse0x27a0b20();
   input += synapse0x27a0b60();
   input += synapse0x27a0ba0();
   input += synapse0x27a0be0();
   input += synapse0x27a0c20();
   input += synapse0x27a0c60();
   input += synapse0x27a0ca0();
   input += synapse0x27a0ce0();
   input += synapse0x27a0d20();
   input += synapse0x27a0d60();
   input += synapse0x27a0da0();
   input += synapse0x27a0de0();
   input += synapse0x27a0e20();
   input += synapse0x27a0e60();
   input += synapse0x27a08f0();
   input += synapse0x27a0930();
   input += synapse0x2555b90();
   input += synapse0x2563460();
   input += synapse0x25634a0();
   input += synapse0x2789390();
   input += synapse0x27893d0();
   input += synapse0x2789410();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27a0760() {
   double input = input0x27a0760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27a0200() {
   double input = 0.833618;
   input += synapse0x2563ce0();
   input += synapse0x27a0390();
   input += synapse0x27a03d0();
   input += synapse0x27a0fb0();
   input += synapse0x27a0ff0();
   input += synapse0x27a1030();
   input += synapse0x27a1070();
   input += synapse0x27a10b0();
   input += synapse0x27a10f0();
   input += synapse0x27a1130();
   input += synapse0x27a1170();
   input += synapse0x27a11b0();
   input += synapse0x27a11f0();
   input += synapse0x27a1230();
   input += synapse0x27a1270();
   input += synapse0x27a12b0();
   input += synapse0x279a240();
   input += synapse0x279a280();
   input += synapse0x279a2c0();
   input += synapse0x27a1400();
   input += synapse0x27a1440();
   input += synapse0x27a1480();
   input += synapse0x27a14c0();
   input += synapse0x27a1500();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27a0200() {
   double input = input0x27a0200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27a1540() {
   double input = -1.12295;
   input += synapse0x27a1880();
   input += synapse0x27a18c0();
   input += synapse0x27a1900();
   input += synapse0x27a1940();
   input += synapse0x27a1980();
   input += synapse0x27a19c0();
   input += synapse0x27a1a00();
   input += synapse0x27a1a40();
   input += synapse0x27a1a80();
   input += synapse0x27a1ac0();
   input += synapse0x27a1b00();
   input += synapse0x27a1b40();
   input += synapse0x27a1b80();
   input += synapse0x27a1bc0();
   input += synapse0x27a1c00();
   input += synapse0x27a1c40();
   input += synapse0x27a16d0();
   input += synapse0x27a1710();
   input += synapse0x27a1d90();
   input += synapse0x27a1dd0();
   input += synapse0x27a1e10();
   input += synapse0x27a1e50();
   input += synapse0x27a1e90();
   input += synapse0x27a1ed0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27a1540() {
   double input = input0x27a1540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27a1f10() {
   double input = -0.216378;
   input += synapse0x27a2250();
   input += synapse0x27a2290();
   input += synapse0x27a22d0();
   input += synapse0x27a2310();
   input += synapse0x27a2350();
   input += synapse0x27a2390();
   input += synapse0x27a23d0();
   input += synapse0x27a2410();
   input += synapse0x27a2450();
   input += synapse0x25637b0();
   input += synapse0x25637f0();
   input += synapse0x2563830();
   input += synapse0x2563870();
   input += synapse0x25638b0();
   input += synapse0x25638f0();
   input += synapse0x2563930();
   input += synapse0x27a20a0();
   input += synapse0x27a20e0();
   input += synapse0x2563a80();
   input += synapse0x2563ac0();
   input += synapse0x2563b00();
   input += synapse0x2563b40();
   input += synapse0x2563b80();
   input += synapse0x27a2ca0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27a1f10() {
   double input = input0x27a1f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27a2ce0() {
   double input = 0.143184;
   input += synapse0x27a3020();
   input += synapse0x27a3060();
   input += synapse0x27a30a0();
   input += synapse0x27a30e0();
   input += synapse0x27a3120();
   input += synapse0x27a3160();
   input += synapse0x27a31a0();
   input += synapse0x27a31e0();
   input += synapse0x27a3220();
   input += synapse0x27a3260();
   input += synapse0x27a32a0();
   input += synapse0x27a32e0();
   input += synapse0x27a3320();
   input += synapse0x27a3360();
   input += synapse0x27a33a0();
   input += synapse0x27a33e0();
   input += synapse0x27a2e70();
   input += synapse0x27a2eb0();
   input += synapse0x27a3530();
   input += synapse0x27a3570();
   input += synapse0x27a35b0();
   input += synapse0x27a35f0();
   input += synapse0x27a3630();
   input += synapse0x27a3670();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27a2ce0() {
   double input = input0x27a2ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27a36b0() {
   double input = 0.381697;
   input += synapse0x27a39f0();
   input += synapse0x27a3a30();
   input += synapse0x27a3a70();
   input += synapse0x27a3ab0();
   input += synapse0x27a3af0();
   input += synapse0x27a3b30();
   input += synapse0x27a3b70();
   input += synapse0x27a3bb0();
   input += synapse0x27a3bf0();
   input += synapse0x27a3c30();
   input += synapse0x27a3c70();
   input += synapse0x27a3cb0();
   input += synapse0x27a3cf0();
   input += synapse0x27a3d30();
   input += synapse0x27a3d70();
   input += synapse0x27a3db0();
   input += synapse0x27a3840();
   input += synapse0x27a3880();
   input += synapse0x27a3f00();
   input += synapse0x27a3f40();
   input += synapse0x27a3f80();
   input += synapse0x27a3fc0();
   input += synapse0x27a4000();
   input += synapse0x27a4040();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27a36b0() {
   double input = input0x27a36b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27a4080() {
   double input = -0.472797;
   input += synapse0x279db50();
   input += synapse0x279db90();
   input += synapse0x279dbd0();
   input += synapse0x279dc10();
   input += synapse0x27a45d0();
   input += synapse0x27a4610();
   input += synapse0x27a4650();
   input += synapse0x27a4690();
   input += synapse0x27a46d0();
   input += synapse0x27a4710();
   input += synapse0x27a4750();
   input += synapse0x27a4790();
   input += synapse0x27a47d0();
   input += synapse0x27a4810();
   input += synapse0x27a4850();
   input += synapse0x27a4890();
   input += synapse0x27a4210();
   input += synapse0x27a4250();
   input += synapse0x27a49e0();
   input += synapse0x27a4a20();
   input += synapse0x27a4a60();
   input += synapse0x27a4aa0();
   input += synapse0x27a4ae0();
   input += synapse0x27a4b20();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27a4080() {
   double input = input0x27a4080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27a4b60() {
   double input = 1.08502;
   input += synapse0x27a4ea0();
   input += synapse0x27a4ee0();
   input += synapse0x27a4f20();
   input += synapse0x27a4f60();
   input += synapse0x27a4fa0();
   input += synapse0x27a4fe0();
   input += synapse0x27a5020();
   input += synapse0x27a5060();
   input += synapse0x27a50a0();
   input += synapse0x27a50e0();
   input += synapse0x27a5120();
   input += synapse0x27a5160();
   input += synapse0x27a51a0();
   input += synapse0x27a51e0();
   input += synapse0x27a5220();
   input += synapse0x27a5260();
   input += synapse0x27a4cf0();
   input += synapse0x27a4d30();
   input += synapse0x27a53b0();
   input += synapse0x27a53f0();
   input += synapse0x27a5430();
   input += synapse0x27a5470();
   input += synapse0x27a54b0();
   input += synapse0x27a54f0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27a4b60() {
   double input = input0x27a4b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27a5530() {
   double input = 1.15767;
   input += synapse0x27a5870();
   input += synapse0x27a58b0();
   input += synapse0x27a58f0();
   input += synapse0x27a5930();
   input += synapse0x27a5970();
   input += synapse0x27a59b0();
   input += synapse0x27a59f0();
   input += synapse0x27a5a30();
   input += synapse0x27a5a70();
   input += synapse0x27a5ab0();
   input += synapse0x27a5af0();
   input += synapse0x27a5b30();
   input += synapse0x27a5b70();
   input += synapse0x27a5bb0();
   input += synapse0x27a5bf0();
   input += synapse0x27a5c30();
   input += synapse0x27a56c0();
   input += synapse0x27a5700();
   input += synapse0x27a2490();
   input += synapse0x27a24d0();
   input += synapse0x27a2510();
   input += synapse0x27a2550();
   input += synapse0x27a2590();
   input += synapse0x27a25d0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27a5530() {
   double input = input0x27a5530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27a2610() {
   double input = 2.28963;
   input += synapse0x27a2950();
   input += synapse0x27a2990();
   input += synapse0x27a29d0();
   input += synapse0x27a2a10();
   input += synapse0x27a2a50();
   input += synapse0x27a2a90();
   input += synapse0x27a2ad0();
   input += synapse0x27a2b10();
   input += synapse0x27a2b50();
   input += synapse0x27a2b90();
   input += synapse0x27a2bd0();
   input += synapse0x27a2c10();
   input += synapse0x27a2c50();
   input += synapse0x27a6d90();
   input += synapse0x27a6dd0();
   input += synapse0x27a6e10();
   input += synapse0x27a27a0();
   input += synapse0x27a27e0();
   input += synapse0x27a6f60();
   input += synapse0x27a6fa0();
   input += synapse0x27a6fe0();
   input += synapse0x27a7020();
   input += synapse0x27a7060();
   input += synapse0x27a70a0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27a2610() {
   double input = input0x27a2610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27a70e0() {
   double input = 0.144932;
   input += synapse0x27a7420();
   input += synapse0x27a7460();
   input += synapse0x27a74a0();
   input += synapse0x27a74e0();
   input += synapse0x27a7520();
   input += synapse0x27a7560();
   input += synapse0x27a75a0();
   input += synapse0x27a75e0();
   input += synapse0x27a7620();
   input += synapse0x27a7660();
   input += synapse0x27a76a0();
   input += synapse0x27a76e0();
   input += synapse0x27a7720();
   input += synapse0x27a7760();
   input += synapse0x27a77a0();
   input += synapse0x27a77e0();
   input += synapse0x27a7270();
   input += synapse0x27a72b0();
   input += synapse0x27a7930();
   input += synapse0x27a7970();
   input += synapse0x27a79b0();
   input += synapse0x27a79f0();
   input += synapse0x27a7a30();
   input += synapse0x27a7a70();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27a70e0() {
   double input = input0x27a70e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27a7ab0() {
   double input = -0.21904;
   input += synapse0x27a7df0();
   input += synapse0x27a7e30();
   input += synapse0x27a7e70();
   input += synapse0x27a7eb0();
   input += synapse0x27a7ef0();
   input += synapse0x27a7f30();
   input += synapse0x27a7f70();
   input += synapse0x27a7fb0();
   input += synapse0x27a7ff0();
   input += synapse0x27a8030();
   input += synapse0x27a8070();
   input += synapse0x27a80b0();
   input += synapse0x27a80f0();
   input += synapse0x27a8130();
   input += synapse0x27a8170();
   input += synapse0x27a81b0();
   input += synapse0x27a7c40();
   input += synapse0x27a7c80();
   input += synapse0x27a8300();
   input += synapse0x27a8340();
   input += synapse0x27a8380();
   input += synapse0x27a83c0();
   input += synapse0x27a8400();
   input += synapse0x27a8440();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27a7ab0() {
   double input = input0x27a7ab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27a8480() {
   double input = -0.455546;
   input += synapse0x27a87c0();
   input += synapse0x27a8800();
   input += synapse0x27a8840();
   input += synapse0x27a8880();
   input += synapse0x27a88c0();
   input += synapse0x27a8900();
   input += synapse0x27a8940();
   input += synapse0x27a8980();
   input += synapse0x27a89c0();
   input += synapse0x27a8a00();
   input += synapse0x27a8a40();
   input += synapse0x27a8a80();
   input += synapse0x27a8ac0();
   input += synapse0x27a8b00();
   input += synapse0x27a8b40();
   input += synapse0x27a8b80();
   input += synapse0x27a8610();
   input += synapse0x27a8650();
   input += synapse0x27a8cd0();
   input += synapse0x27a8d10();
   input += synapse0x27a8d50();
   input += synapse0x27a8d90();
   input += synapse0x27a8dd0();
   input += synapse0x27a8e10();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27a8480() {
   double input = input0x27a8480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27a8e50() {
   double input = 0.570627;
   input += synapse0x27a9190();
   input += synapse0x279a520();
   input += synapse0x279a560();
   input += synapse0x279a860();
   input += synapse0x279a8a0();
   input += synapse0x279aba0();
   input += synapse0x279abe0();
   input += synapse0x279aee0();
   input += synapse0x279af20();
   input += synapse0x279b220();
   input += synapse0x279b260();
   input += synapse0x279b560();
   input += synapse0x279b5a0();
   input += synapse0x279b8a0();
   input += synapse0x279b8e0();
   input += synapse0x279bbe0();
   input += synapse0x279bc20();
   input += synapse0x279bf20();
   input += synapse0x279bf60();
   input += synapse0x279c260();
   input += synapse0x279c2a0();
   input += synapse0x279c5a0();
   input += synapse0x279c5e0();
   input += synapse0x279c8e0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27a8e50() {
   double input = input0x27a8e50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27aac60() {
   double input = -1.0706;
   input += synapse0x279c920();
   input += synapse0x279d5e0();
   input += synapse0x279d620();
   input += synapse0x27a8fe0();
   input += synapse0x27a9020();
   input += synapse0x279d920();
   input += synapse0x279d960();
   input += synapse0x25553d0();
   input += synapse0x2555410();
   input += synapse0x279e0a0();
   input += synapse0x279e0e0();
   input += synapse0x279e3e0();
   input += synapse0x279e420();
   input += synapse0x279e720();
   input += synapse0x279e760();
   input += synapse0x279ea60();
   input += synapse0x279eaa0();
   input += synapse0x279eda0();
   input += synapse0x279ede0();
   input += synapse0x279f0e0();
   input += synapse0x279f120();
   input += synapse0x279cc20();
   input += synapse0x279cc60();
   input += synapse0x27aaf00();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27aac60() {
   double input = input0x27aac60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27aaf40() {
   double input = 0.4574;
   input += synapse0x27ab280();
   input += synapse0x27ab2c0();
   input += synapse0x27ab300();
   input += synapse0x27ab340();
   input += synapse0x27ab380();
   input += synapse0x27ab3c0();
   input += synapse0x27ab400();
   input += synapse0x27ab440();
   input += synapse0x27ab480();
   input += synapse0x27ab4c0();
   input += synapse0x27ab500();
   input += synapse0x27ab540();
   input += synapse0x27ab580();
   input += synapse0x27ab5c0();
   input += synapse0x27ab600();
   input += synapse0x27ab640();
   input += synapse0x27ab0d0();
   input += synapse0x27ab110();
   input += synapse0x27ab790();
   input += synapse0x27ab7d0();
   input += synapse0x27ab810();
   input += synapse0x27ab850();
   input += synapse0x27ab890();
   input += synapse0x27ab8d0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27aaf40() {
   double input = input0x27aaf40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27ab910() {
   double input = 0.0991509;
   input += synapse0x27abc50();
   input += synapse0x27abc90();
   input += synapse0x27abcd0();
   input += synapse0x27abd10();
   input += synapse0x27abd50();
   input += synapse0x27abd90();
   input += synapse0x27abdd0();
   input += synapse0x27abe10();
   input += synapse0x27abe50();
   input += synapse0x27abe90();
   input += synapse0x27abed0();
   input += synapse0x27abf10();
   input += synapse0x27abf50();
   input += synapse0x27abf90();
   input += synapse0x27abfd0();
   input += synapse0x27ac010();
   input += synapse0x27abaa0();
   input += synapse0x27abae0();
   input += synapse0x27ac160();
   input += synapse0x27ac1a0();
   input += synapse0x27ac1e0();
   input += synapse0x27ac220();
   input += synapse0x27ac260();
   input += synapse0x27ac2a0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27ab910() {
   double input = input0x27ab910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27ac2e0() {
   double input = 0.514834;
   input += synapse0x27ac620();
   input += synapse0x27ac660();
   input += synapse0x27ac6a0();
   input += synapse0x27ac6e0();
   input += synapse0x27ac720();
   input += synapse0x27ac760();
   input += synapse0x27ac7a0();
   input += synapse0x27ac7e0();
   input += synapse0x27ac820();
   input += synapse0x27ac860();
   input += synapse0x27ac8a0();
   input += synapse0x27ac8e0();
   input += synapse0x27ac920();
   input += synapse0x27ac960();
   input += synapse0x27ac9a0();
   input += synapse0x27ac9e0();
   input += synapse0x27ac470();
   input += synapse0x27ac4b0();
   input += synapse0x27acb30();
   input += synapse0x27acb70();
   input += synapse0x27acbb0();
   input += synapse0x27acbf0();
   input += synapse0x27acc30();
   input += synapse0x27acc70();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27ac2e0() {
   double input = input0x27ac2e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27accb0() {
   double input = 0.0253785;
   input += synapse0x27acff0();
   input += synapse0x27ad030();
   input += synapse0x27ad070();
   input += synapse0x27ad0b0();
   input += synapse0x27ad0f0();
   input += synapse0x27ad130();
   input += synapse0x27ad170();
   input += synapse0x27ad1b0();
   input += synapse0x27ad1f0();
   input += synapse0x27ad230();
   input += synapse0x27ad270();
   input += synapse0x27ad2b0();
   input += synapse0x27ad2f0();
   input += synapse0x27ad330();
   input += synapse0x27ad370();
   input += synapse0x27ad3b0();
   input += synapse0x27ace40();
   input += synapse0x27ace80();
   input += synapse0x27ad500();
   input += synapse0x27ad540();
   input += synapse0x27ad580();
   input += synapse0x27ad5c0();
   input += synapse0x27ad600();
   input += synapse0x27ad640();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27accb0() {
   double input = input0x27accb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27ad680() {
   double input = 0.124506;
   input += synapse0x27ad9c0();
   input += synapse0x27ada00();
   input += synapse0x27ada40();
   input += synapse0x27ada80();
   input += synapse0x27adac0();
   input += synapse0x27adb00();
   input += synapse0x27adb40();
   input += synapse0x27adb80();
   input += synapse0x27adbc0();
   input += synapse0x27a5d80();
   input += synapse0x27a5dc0();
   input += synapse0x27a5e00();
   input += synapse0x27a5e40();
   input += synapse0x27a5e80();
   input += synapse0x27a5ec0();
   input += synapse0x27a5f00();
   input += synapse0x27ad810();
   input += synapse0x27ad850();
   input += synapse0x27a6050();
   input += synapse0x27a6090();
   input += synapse0x27a60d0();
   input += synapse0x27a6110();
   input += synapse0x27a6150();
   input += synapse0x27a6190();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27ad680() {
   double input = input0x27ad680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27a61d0() {
   double input = 0.82585;
   input += synapse0x27a6510();
   input += synapse0x27a6550();
   input += synapse0x27a6590();
   input += synapse0x27a65d0();
   input += synapse0x27a6610();
   input += synapse0x27a6650();
   input += synapse0x27a6690();
   input += synapse0x27a66d0();
   input += synapse0x27a6710();
   input += synapse0x27a6750();
   input += synapse0x27a6790();
   input += synapse0x27a67d0();
   input += synapse0x27a6810();
   input += synapse0x27a6850();
   input += synapse0x27a6890();
   input += synapse0x27a68d0();
   input += synapse0x27a6360();
   input += synapse0x27a63a0();
   input += synapse0x27a6a20();
   input += synapse0x27a6a60();
   input += synapse0x27a6aa0();
   input += synapse0x27a6ae0();
   input += synapse0x27a6b20();
   input += synapse0x27a6b60();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27a61d0() {
   double input = input0x27a61d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27a6ba0() {
   double input = -1.09209;
   input += synapse0x27a6d30();
   input += synapse0x27afdc0();
   input += synapse0x27afe00();
   input += synapse0x27afe40();
   input += synapse0x27afe80();
   input += synapse0x27afec0();
   input += synapse0x27aff00();
   input += synapse0x27aff40();
   input += synapse0x27aff80();
   input += synapse0x27affc0();
   input += synapse0x27b0000();
   input += synapse0x27b0040();
   input += synapse0x27b0080();
   input += synapse0x27b00c0();
   input += synapse0x27b0100();
   input += synapse0x27b0140();
   input += synapse0x27afc10();
   input += synapse0x27afc50();
   input += synapse0x27b0290();
   input += synapse0x27b02d0();
   input += synapse0x27b0310();
   input += synapse0x27b0350();
   input += synapse0x27b0390();
   input += synapse0x27b03d0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27a6ba0() {
   double input = input0x27a6ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27b0410() {
   double input = 1.76771;
   input += synapse0x27b0750();
   input += synapse0x27b0790();
   input += synapse0x27b07d0();
   input += synapse0x27b0810();
   input += synapse0x27b0850();
   input += synapse0x27b0890();
   input += synapse0x27b08d0();
   input += synapse0x27b0910();
   input += synapse0x27b0950();
   input += synapse0x27b0990();
   input += synapse0x27b09d0();
   input += synapse0x27b0a10();
   input += synapse0x27b0a50();
   input += synapse0x27b0a90();
   input += synapse0x27b0ad0();
   input += synapse0x27b0b10();
   input += synapse0x27b05a0();
   input += synapse0x27b05e0();
   input += synapse0x27b0c60();
   input += synapse0x27b0ca0();
   input += synapse0x27b0ce0();
   input += synapse0x27b0d20();
   input += synapse0x27b0d60();
   input += synapse0x27b0da0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27b0410() {
   double input = input0x27b0410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27b0de0() {
   double input = 0.83925;
   input += synapse0x27b1120();
   input += synapse0x27b1160();
   input += synapse0x27b11a0();
   input += synapse0x27b11e0();
   input += synapse0x27b1220();
   input += synapse0x27b1260();
   input += synapse0x27b12a0();
   input += synapse0x27b12e0();
   input += synapse0x27b1320();
   input += synapse0x27b1360();
   input += synapse0x27b13a0();
   input += synapse0x27b13e0();
   input += synapse0x27b1420();
   input += synapse0x27b1460();
   input += synapse0x27b14a0();
   input += synapse0x27b14e0();
   input += synapse0x27b0f70();
   input += synapse0x27b0fb0();
   input += synapse0x27b1630();
   input += synapse0x27b1670();
   input += synapse0x27b16b0();
   input += synapse0x27b16f0();
   input += synapse0x27b1730();
   input += synapse0x27b1770();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27b0de0() {
   double input = input0x27b0de0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27b17b0() {
   double input = 0.834554;
   input += synapse0x27b1af0();
   input += synapse0x27b1b30();
   input += synapse0x27b1b70();
   input += synapse0x27b1bb0();
   input += synapse0x27b1bf0();
   input += synapse0x27b1c30();
   input += synapse0x27b1c70();
   input += synapse0x27b1cb0();
   input += synapse0x27b1cf0();
   input += synapse0x27b1d30();
   input += synapse0x27b1d70();
   input += synapse0x27b1db0();
   input += synapse0x27b1df0();
   input += synapse0x27b1e30();
   input += synapse0x27b1e70();
   input += synapse0x27b1eb0();
   input += synapse0x27b1940();
   input += synapse0x27b1980();
   input += synapse0x27b2000();
   input += synapse0x27b2040();
   input += synapse0x27b2080();
   input += synapse0x27b20c0();
   input += synapse0x27b2100();
   input += synapse0x27b2140();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27b17b0() {
   double input = input0x27b17b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27b2180() {
   double input = -1.42715;
   input += synapse0x27b24c0();
   input += synapse0x27b2500();
   input += synapse0x27b2540();
   input += synapse0x27b2580();
   input += synapse0x27b25c0();
   input += synapse0x27b2600();
   input += synapse0x27b2640();
   input += synapse0x27b2680();
   input += synapse0x27b26c0();
   input += synapse0x27b2700();
   input += synapse0x27b2740();
   input += synapse0x27b2780();
   input += synapse0x27b27c0();
   input += synapse0x27b2800();
   input += synapse0x27b2840();
   input += synapse0x27b2880();
   input += synapse0x27b2310();
   input += synapse0x27b2350();
   input += synapse0x27b29d0();
   input += synapse0x27b2a10();
   input += synapse0x27b2a50();
   input += synapse0x27b2a90();
   input += synapse0x27b2ad0();
   input += synapse0x27b2b10();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27b2180() {
   double input = input0x27b2180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27b2b50() {
   double input = 1.80571;
   input += synapse0x27b2e90();
   input += synapse0x27b2ed0();
   input += synapse0x27b2f10();
   input += synapse0x27b2f50();
   input += synapse0x27b2f90();
   input += synapse0x27b2fd0();
   input += synapse0x27b3010();
   input += synapse0x27b3050();
   input += synapse0x27b3090();
   input += synapse0x27b30d0();
   input += synapse0x27b3110();
   input += synapse0x27b3150();
   input += synapse0x27b3190();
   input += synapse0x27b31d0();
   input += synapse0x27b3210();
   input += synapse0x27b3250();
   input += synapse0x27b2ce0();
   input += synapse0x27b2d20();
   input += synapse0x27b33a0();
   input += synapse0x27b33e0();
   input += synapse0x27b3420();
   input += synapse0x27b3460();
   input += synapse0x27b34a0();
   input += synapse0x27b34e0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27b2b50() {
   double input = input0x27b2b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27b3520() {
   double input = -0.655497;
   input += synapse0x27b3860();
   input += synapse0x27b38a0();
   input += synapse0x27b38e0();
   input += synapse0x27b3920();
   input += synapse0x27b3960();
   input += synapse0x27b39a0();
   input += synapse0x27b39e0();
   input += synapse0x27b3a20();
   input += synapse0x27b3a60();
   input += synapse0x27b3aa0();
   input += synapse0x27b3ae0();
   input += synapse0x27b3b20();
   input += synapse0x27b3b60();
   input += synapse0x27b3ba0();
   input += synapse0x27b3be0();
   input += synapse0x27b3c20();
   input += synapse0x27b36b0();
   input += synapse0x27b36f0();
   input += synapse0x27b3d70();
   input += synapse0x27b3db0();
   input += synapse0x27b3df0();
   input += synapse0x27b3e30();
   input += synapse0x27b3e70();
   input += synapse0x27b3eb0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27b3520() {
   double input = input0x27b3520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27b3ef0() {
   double input = 3.53833;
   input += synapse0x27b4230();
   input += synapse0x27b4270();
   input += synapse0x27b42b0();
   input += synapse0x27b42f0();
   input += synapse0x27b4330();
   input += synapse0x27b4370();
   input += synapse0x27b43b0();
   input += synapse0x27b43f0();
   input += synapse0x27b4430();
   input += synapse0x27b4470();
   input += synapse0x27b44b0();
   input += synapse0x27b44f0();
   input += synapse0x27b4530();
   input += synapse0x27b4570();
   input += synapse0x27b45b0();
   input += synapse0x27b45f0();
   input += synapse0x27b4080();
   input += synapse0x27b40c0();
   input += synapse0x27b4740();
   input += synapse0x27b4780();
   input += synapse0x27b47c0();
   input += synapse0x27b4800();
   input += synapse0x27b4840();
   input += synapse0x27b4880();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27b3ef0() {
   double input = input0x27b3ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27b48c0() {
   double input = -3.21469;
   input += synapse0x27b4c00();
   input += synapse0x27a91d0();
   input += synapse0x27a9210();
   input += synapse0x27a9250();
   input += synapse0x27a94a0();
   input += synapse0x27a94e0();
   input += synapse0x27a9520();
   input += synapse0x27a9770();
   input += synapse0x27a97b0();
   input += synapse0x27a9a00();
   input += synapse0x27a9a40();
   input += synapse0x27a9a80();
   input += synapse0x27a9cd0();
   input += synapse0x27a9d10();
   input += synapse0x27a9f60();
   input += synapse0x27a9fa0();
   input += synapse0x27b4a50();
   input += synapse0x27b4a90();
   input += synapse0x27aa0f0();
   input += synapse0x27aa600();
   input += synapse0x27aa640();
   input += synapse0x27aa680();
   input += synapse0x27aa8d0();
   input += synapse0x27aa910();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27b48c0() {
   double input = input0x27b48c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27aa950() {
   double input = 1.29599;
   input += synapse0x27aa1c0();
   input += synapse0x27aa200();
   input += synapse0x27aa240();
   input += synapse0x27aa280();
   input += synapse0x27aac00();
   input += synapse0x27b6f50();
   input += synapse0x27b6f90();
   input += synapse0x27b6fd0();
   input += synapse0x27b7010();
   input += synapse0x27b7050();
   input += synapse0x27b7090();
   input += synapse0x27b70d0();
   input += synapse0x27b7110();
   input += synapse0x27b7150();
   input += synapse0x27b7190();
   input += synapse0x27b71d0();
   input += synapse0x27aaae0();
   input += synapse0x27aab20();
   input += synapse0x27b7320();
   input += synapse0x27b7360();
   input += synapse0x27b73a0();
   input += synapse0x27b73e0();
   input += synapse0x27b7420();
   input += synapse0x27b7460();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27aa950() {
   double input = input0x27aa950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27b74a0() {
   double input = 4.28337;
   input += synapse0x27b77e0();
   input += synapse0x27b7820();
   input += synapse0x27b7860();
   input += synapse0x27b78a0();
   input += synapse0x27b78e0();
   input += synapse0x27b7920();
   input += synapse0x27b7960();
   input += synapse0x27b79a0();
   input += synapse0x27b79e0();
   input += synapse0x27b7a20();
   input += synapse0x27b7a60();
   input += synapse0x27b7aa0();
   input += synapse0x27b7ae0();
   input += synapse0x27b7b20();
   input += synapse0x27b7b60();
   input += synapse0x27b7ba0();
   input += synapse0x27b7630();
   input += synapse0x27b7670();
   input += synapse0x27b7cf0();
   input += synapse0x27b7d30();
   input += synapse0x27b7d70();
   input += synapse0x27b7db0();
   input += synapse0x27b7df0();
   input += synapse0x27b7e30();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27b74a0() {
   double input = input0x27b74a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27b7e70() {
   double input = -2.05263;
   input += synapse0x27b81b0();
   input += synapse0x27b81f0();
   input += synapse0x27b8230();
   input += synapse0x27b8270();
   input += synapse0x27b82b0();
   input += synapse0x27b82f0();
   input += synapse0x27b8330();
   input += synapse0x27b8370();
   input += synapse0x27b83b0();
   input += synapse0x27b83f0();
   input += synapse0x27b8430();
   input += synapse0x27b8470();
   input += synapse0x27b84b0();
   input += synapse0x27b84f0();
   input += synapse0x27b8530();
   input += synapse0x27b8570();
   input += synapse0x27b8000();
   input += synapse0x27b8040();
   input += synapse0x27b86c0();
   input += synapse0x27b8700();
   input += synapse0x27b8740();
   input += synapse0x27b8780();
   input += synapse0x27b87c0();
   input += synapse0x27b8800();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27b7e70() {
   double input = input0x27b7e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27b8840() {
   double input = 1.1595;
   input += synapse0x27b8b80();
   input += synapse0x27b8bc0();
   input += synapse0x27b8c00();
   input += synapse0x27b8c40();
   input += synapse0x27b8c80();
   input += synapse0x27b8cc0();
   input += synapse0x27b8d00();
   input += synapse0x27b8d40();
   input += synapse0x27b8d80();
   input += synapse0x27b8dc0();
   input += synapse0x27b8e00();
   input += synapse0x27b8e40();
   input += synapse0x27b8e80();
   input += synapse0x27b8ec0();
   input += synapse0x27b8f00();
   input += synapse0x27b8f40();
   input += synapse0x27b89d0();
   input += synapse0x27b8a10();
   input += synapse0x27b9090();
   input += synapse0x27b90d0();
   input += synapse0x27b9110();
   input += synapse0x27b9150();
   input += synapse0x27b9190();
   input += synapse0x27b91d0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27b8840() {
   double input = input0x27b8840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27b9210() {
   double input = 0.997501;
   input += synapse0x27b9550();
   input += synapse0x27b9590();
   input += synapse0x27b95d0();
   input += synapse0x27b9610();
   input += synapse0x27b9650();
   input += synapse0x27b9690();
   input += synapse0x27b96d0();
   input += synapse0x27b9710();
   input += synapse0x27b9750();
   input += synapse0x27b9790();
   input += synapse0x27b97d0();
   input += synapse0x27b9810();
   input += synapse0x27b9850();
   input += synapse0x27b9890();
   input += synapse0x27b98d0();
   input += synapse0x27b9910();
   input += synapse0x27b93a0();
   input += synapse0x27b93e0();
   input += synapse0x27b9a60();
   input += synapse0x27b9aa0();
   input += synapse0x27b9ae0();
   input += synapse0x27b9b20();
   input += synapse0x27b9b60();
   input += synapse0x27b9ba0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27b9210() {
   double input = input0x27b9210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27b9be0() {
   double input = 0.302586;
   input += synapse0x27b9f20();
   input += synapse0x27b9f60();
   input += synapse0x27b9fa0();
   input += synapse0x27b9fe0();
   input += synapse0x27ba020();
   input += synapse0x27ba060();
   input += synapse0x27ba0a0();
   input += synapse0x27ba0e0();
   input += synapse0x27ba120();
   input += synapse0x27ba160();
   input += synapse0x27ba1a0();
   input += synapse0x27ba1e0();
   input += synapse0x27ba220();
   input += synapse0x27ba260();
   input += synapse0x27ba2a0();
   input += synapse0x27ba2e0();
   input += synapse0x27b9d70();
   input += synapse0x27b9db0();
   input += synapse0x27ba430();
   input += synapse0x27ba470();
   input += synapse0x27ba4b0();
   input += synapse0x27ba4f0();
   input += synapse0x27ba530();
   input += synapse0x27ba570();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27b9be0() {
   double input = input0x27b9be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27ba5b0() {
   double input = -1.60702;
   input += synapse0x27ba8f0();
   input += synapse0x27ba930();
   input += synapse0x27ba970();
   input += synapse0x27ba9b0();
   input += synapse0x27ba9f0();
   input += synapse0x27baa30();
   input += synapse0x27baa70();
   input += synapse0x27baab0();
   input += synapse0x27baaf0();
   input += synapse0x27bab30();
   input += synapse0x27bab70();
   input += synapse0x27babb0();
   input += synapse0x27babf0();
   input += synapse0x27bac30();
   input += synapse0x27bac70();
   input += synapse0x27bacb0();
   input += synapse0x27ba740();
   input += synapse0x27ba780();
   input += synapse0x27bae00();
   input += synapse0x27bae40();
   input += synapse0x27bae80();
   input += synapse0x27baec0();
   input += synapse0x27baf00();
   input += synapse0x27baf40();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27ba5b0() {
   double input = input0x27ba5b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27baf80() {
   double input = 0.00830021;
   input += synapse0x27bb2c0();
   input += synapse0x27bb300();
   input += synapse0x27bb340();
   input += synapse0x27bb380();
   input += synapse0x27bb3c0();
   input += synapse0x27bb400();
   input += synapse0x27bb440();
   input += synapse0x27bb480();
   input += synapse0x27bb4c0();
   input += synapse0x27bb500();
   input += synapse0x27bb540();
   input += synapse0x27bb580();
   input += synapse0x27bb5c0();
   input += synapse0x27bb600();
   input += synapse0x27bb640();
   input += synapse0x27bb680();
   input += synapse0x27bb110();
   input += synapse0x27bb150();
   input += synapse0x27bb7d0();
   input += synapse0x27bb810();
   input += synapse0x27bb850();
   input += synapse0x27bb890();
   input += synapse0x27bb8d0();
   input += synapse0x27bb910();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27baf80() {
   double input = input0x27baf80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27bb950() {
   double input = 0.870187;
   input += synapse0x27a43c0();
   input += synapse0x27a4400();
   input += synapse0x27a4440();
   input += synapse0x27a4480();
   input += synapse0x27a44c0();
   input += synapse0x27a4500();
   input += synapse0x27a4540();
   input += synapse0x27a4580();
   input += synapse0x27bc0a0();
   input += synapse0x27bc0e0();
   input += synapse0x27bc120();
   input += synapse0x27bc160();
   input += synapse0x27bc1a0();
   input += synapse0x27bc1e0();
   input += synapse0x27bc220();
   input += synapse0x27bc260();
   input += synapse0x27bbae0();
   input += synapse0x27bbb20();
   input += synapse0x27bc3b0();
   input += synapse0x27bc3f0();
   input += synapse0x27bc430();
   input += synapse0x27bc470();
   input += synapse0x27bc4b0();
   input += synapse0x27bc4f0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27bb950() {
   double input = input0x27bb950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27bc530() {
   double input = -0.277484;
   input += synapse0x27bc870();
   input += synapse0x27bc8b0();
   input += synapse0x27bc8f0();
   input += synapse0x27bc930();
   input += synapse0x27bc970();
   input += synapse0x27bc9b0();
   input += synapse0x27bc9f0();
   input += synapse0x27bca30();
   input += synapse0x27bca70();
   input += synapse0x27bcab0();
   input += synapse0x27bcaf0();
   input += synapse0x27bcb30();
   input += synapse0x27bcb70();
   input += synapse0x27bcbb0();
   input += synapse0x27bcbf0();
   input += synapse0x27bcc30();
   input += synapse0x27bc6c0();
   input += synapse0x27bc700();
   input += synapse0x27bcd80();
   input += synapse0x27bcdc0();
   input += synapse0x27bce00();
   input += synapse0x27bce40();
   input += synapse0x27bce80();
   input += synapse0x27bcec0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27bc530() {
   double input = input0x27bc530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27bcf00() {
   double input = 0.975943;
   input += synapse0x27bd240();
   input += synapse0x27bd280();
   input += synapse0x27bd2c0();
   input += synapse0x27bd300();
   input += synapse0x27bd340();
   input += synapse0x27bd380();
   input += synapse0x27bd3c0();
   input += synapse0x27bd400();
   input += synapse0x27bd440();
   input += synapse0x27bd480();
   input += synapse0x27bd4c0();
   input += synapse0x27bd500();
   input += synapse0x27bd540();
   input += synapse0x27bd580();
   input += synapse0x27bd5c0();
   input += synapse0x27bd600();
   input += synapse0x27bd090();
   input += synapse0x27bd0d0();
   input += synapse0x27adc00();
   input += synapse0x27adc40();
   input += synapse0x27adc80();
   input += synapse0x27adcc0();
   input += synapse0x27add00();
   input += synapse0x27add40();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27bcf00() {
   double input = input0x27bcf00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27add80() {
   double input = 0.692182;
   input += synapse0x27ae0c0();
   input += synapse0x27ae100();
   input += synapse0x27ae140();
   input += synapse0x27ae180();
   input += synapse0x27ae1c0();
   input += synapse0x27ae200();
   input += synapse0x27ae240();
   input += synapse0x27ae280();
   input += synapse0x27ae2c0();
   input += synapse0x27ae300();
   input += synapse0x27ae340();
   input += synapse0x27ae380();
   input += synapse0x27ae3c0();
   input += synapse0x27ae400();
   input += synapse0x27ae440();
   input += synapse0x27ae480();
   input += synapse0x27adf10();
   input += synapse0x27adf50();
   input += synapse0x27ae5d0();
   input += synapse0x27ae610();
   input += synapse0x27ae650();
   input += synapse0x27ae690();
   input += synapse0x27ae6d0();
   input += synapse0x27ae710();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27add80() {
   double input = input0x27add80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27ae750() {
   double input = 2.10398;
   input += synapse0x27aea90();
   input += synapse0x27aead0();
   input += synapse0x27aeb10();
   input += synapse0x27aeb50();
   input += synapse0x27aeb90();
   input += synapse0x27aebd0();
   input += synapse0x27aec10();
   input += synapse0x27aec50();
   input += synapse0x27aec90();
   input += synapse0x27aecd0();
   input += synapse0x27aed10();
   input += synapse0x27aed50();
   input += synapse0x27aed90();
   input += synapse0x27aedd0();
   input += synapse0x27aee10();
   input += synapse0x27aee50();
   input += synapse0x27ae8e0();
   input += synapse0x27ae920();
   input += synapse0x27aefa0();
   input += synapse0x27aefe0();
   input += synapse0x27af020();
   input += synapse0x27af060();
   input += synapse0x27af0a0();
   input += synapse0x27af0e0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27ae750() {
   double input = input0x27ae750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27af120() {
   double input = 0.584819;
   input += synapse0x27af460();
   input += synapse0x27af4a0();
   input += synapse0x27af4e0();
   input += synapse0x27af520();
   input += synapse0x27af560();
   input += synapse0x27af5a0();
   input += synapse0x27af5e0();
   input += synapse0x27af620();
   input += synapse0x27af660();
   input += synapse0x27af6a0();
   input += synapse0x27af6e0();
   input += synapse0x27af720();
   input += synapse0x27af760();
   input += synapse0x27af7a0();
   input += synapse0x27af7e0();
   input += synapse0x27af820();
   input += synapse0x27af2b0();
   input += synapse0x27af2f0();
   input += synapse0x27af970();
   input += synapse0x27af9b0();
   input += synapse0x27af9f0();
   input += synapse0x27afa30();
   input += synapse0x27afa70();
   input += synapse0x27afab0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27af120() {
   double input = input0x27af120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27c1760() {
   double input = 0.692149;
   input += synapse0x27c1980();
   input += synapse0x27c19c0();
   input += synapse0x27c1a00();
   input += synapse0x27c1a40();
   input += synapse0x27c1a80();
   input += synapse0x27c1ac0();
   input += synapse0x27c1b00();
   input += synapse0x27c1b40();
   input += synapse0x27c1b80();
   input += synapse0x27c1bc0();
   input += synapse0x27c1c00();
   input += synapse0x27c1c40();
   input += synapse0x27c1c80();
   input += synapse0x27c1cc0();
   input += synapse0x27c1d00();
   input += synapse0x27c1d40();
   input += synapse0x27afaf0();
   input += synapse0x27afb30();
   input += synapse0x27c1e90();
   input += synapse0x27c1ed0();
   input += synapse0x27c1f10();
   input += synapse0x27c1f50();
   input += synapse0x27c1f90();
   input += synapse0x27c1fd0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27c1760() {
   double input = input0x27c1760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27c2010() {
   double input = 0.740409;
   input += synapse0x27c2350();
   input += synapse0x27c2390();
   input += synapse0x27c23d0();
   input += synapse0x27c2410();
   input += synapse0x27c2450();
   input += synapse0x27c2490();
   input += synapse0x27c24d0();
   input += synapse0x27c2510();
   input += synapse0x27c2550();
   input += synapse0x27c2590();
   input += synapse0x27c25d0();
   input += synapse0x27c2610();
   input += synapse0x27c2650();
   input += synapse0x27c2690();
   input += synapse0x27c26d0();
   input += synapse0x27c2710();
   input += synapse0x27c21a0();
   input += synapse0x27c21e0();
   input += synapse0x27c2860();
   input += synapse0x27c28a0();
   input += synapse0x27c28e0();
   input += synapse0x27c2920();
   input += synapse0x27c2960();
   input += synapse0x27c29a0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27c2010() {
   double input = input0x27c2010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27c29e0() {
   double input = 0.923547;
   input += synapse0x27c2d20();
   input += synapse0x27c2d60();
   input += synapse0x27c2da0();
   input += synapse0x27c2de0();
   input += synapse0x27c2e20();
   input += synapse0x27c2e60();
   input += synapse0x27c2ea0();
   input += synapse0x27c2ee0();
   input += synapse0x27c2f20();
   input += synapse0x27c2f60();
   input += synapse0x27c2fa0();
   input += synapse0x27c2fe0();
   input += synapse0x27c3020();
   input += synapse0x27c3060();
   input += synapse0x27c30a0();
   input += synapse0x27c30e0();
   input += synapse0x27c2b70();
   input += synapse0x27c2bb0();
   input += synapse0x27c3230();
   input += synapse0x27c3270();
   input += synapse0x27c32b0();
   input += synapse0x27c32f0();
   input += synapse0x27c3330();
   input += synapse0x27c3370();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27c29e0() {
   double input = input0x27c29e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27c33b0() {
   double input = -1.11485;
   input += synapse0x27c36f0();
   input += synapse0x27c3730();
   input += synapse0x27c3770();
   input += synapse0x27c37b0();
   input += synapse0x27c37f0();
   input += synapse0x27c3830();
   input += synapse0x27c3870();
   input += synapse0x27c38b0();
   input += synapse0x27c38f0();
   input += synapse0x27c3930();
   input += synapse0x27c3970();
   input += synapse0x27c39b0();
   input += synapse0x27c39f0();
   input += synapse0x27c3a30();
   input += synapse0x27c3a70();
   input += synapse0x27c3ab0();
   input += synapse0x27c3540();
   input += synapse0x27c3580();
   input += synapse0x27c3c00();
   input += synapse0x27c3c40();
   input += synapse0x27c3c80();
   input += synapse0x27c3cc0();
   input += synapse0x27c3d00();
   input += synapse0x27c3d40();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27c33b0() {
   double input = input0x27c33b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27ca5b0() {
   double input = -0.726476;
   input += synapse0x2563c50();
   input += synapse0x2563c90();
   input += synapse0x27a17f0();
   input += synapse0x27a1830();
   input += synapse0x27a21c0();
   input += synapse0x27a2200();
   input += synapse0x27a2f90();
   input += synapse0x27a2fd0();
   input += synapse0x27a3960();
   input += synapse0x27a39a0();
   input += synapse0x27a4330();
   input += synapse0x27a4370();
   input += synapse0x27a4e10();
   input += synapse0x27a4e50();
   input += synapse0x27a57e0();
   input += synapse0x27a5820();
   input += synapse0x27a28c0();
   input += synapse0x27a2900();
   input += synapse0x27a7390();
   input += synapse0x27a73d0();
   input += synapse0x27a7d60();
   input += synapse0x27a7da0();
   input += synapse0x27a8730();
   input += synapse0x27a8770();
   input += synapse0x27a9100();
   input += synapse0x27a9140();
   input += synapse0x279d2a0();
   input += synapse0x279d2e0();
   input += synapse0x27ab1f0();
   input += synapse0x27ab230();
   input += synapse0x27abbc0();
   input += synapse0x27abc00();
   input += synapse0x27ac590();
   input += synapse0x27ac5d0();
   input += synapse0x27acf60();
   input += synapse0x27acfa0();
   input += synapse0x27ad930();
   input += synapse0x27ad970();
   input += synapse0x27a6480();
   input += synapse0x27a64c0();
   input += synapse0x27afd30();
   input += synapse0x27afd70();
   input += synapse0x27b06c0();
   input += synapse0x27b0700();
   input += synapse0x27b1090();
   input += synapse0x27b10d0();
   input += synapse0x27b1a60();
   input += synapse0x27b1aa0();
   input += synapse0x27b2430();
   input += synapse0x27b2470();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27ca5b0() {
   double input = input0x27ca5b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27ca950() {
   double input = -0.568961;
   input += synapse0x27b4b70();
   input += synapse0x27b4bb0();
   input += synapse0x27aa130();
   input += synapse0x27aa170();
   input += synapse0x27b7750();
   input += synapse0x27b7790();
   input += synapse0x27b8120();
   input += synapse0x27b8160();
   input += synapse0x27b8af0();
   input += synapse0x27b8b30();
   input += synapse0x27b94c0();
   input += synapse0x27b9500();
   input += synapse0x27b9e90();
   input += synapse0x27b9ed0();
   input += synapse0x27ba860();
   input += synapse0x27ba8a0();
   input += synapse0x27bb230();
   input += synapse0x27bb270();
   input += synapse0x27bbc00();
   input += synapse0x27bbc40();
   input += synapse0x27bc7e0();
   input += synapse0x27bc820();
   input += synapse0x27bd1b0();
   input += synapse0x27bd1f0();
   input += synapse0x27ae030();
   input += synapse0x27ae070();
   input += synapse0x27aea00();
   input += synapse0x27aea40();
   input += synapse0x27af3d0();
   input += synapse0x27af410();
   input += synapse0x27c18f0();
   input += synapse0x27c1930();
   input += synapse0x27c22c0();
   input += synapse0x27c2300();
   input += synapse0x27c2c90();
   input += synapse0x27c2cd0();
   input += synapse0x27c3660();
   input += synapse0x27c36a0();
   input += synapse0x279f550();
   input += synapse0x279f590();
   input += synapse0x27b2e00();
   input += synapse0x27b2e40();
   input += synapse0x27c3d80();
   input += synapse0x27c3dc0();
   input += synapse0x27c3e00();
   input += synapse0x27c3e40();
   input += synapse0x27cacf0();
   input += synapse0x27cad30();
   input += synapse0x27cad70();
   input += synapse0x27cadb0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27ca950() {
   double input = input0x27ca950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27cadf0() {
   double input = 0.233074;
   input += synapse0x27cb130();
   input += synapse0x27cb170();
   input += synapse0x27cb1b0();
   input += synapse0x27cb1f0();
   input += synapse0x27cb230();
   input += synapse0x27cb270();
   input += synapse0x27cb2b0();
   input += synapse0x27cb2f0();
   input += synapse0x27cb330();
   input += synapse0x27cb370();
   input += synapse0x27cb3b0();
   input += synapse0x27cb3f0();
   input += synapse0x27cb430();
   input += synapse0x27cb470();
   input += synapse0x27cb4b0();
   input += synapse0x27cb4f0();
   input += synapse0x27caf80();
   input += synapse0x27cafc0();
   input += synapse0x27cb640();
   input += synapse0x27cb680();
   input += synapse0x27cb6c0();
   input += synapse0x27cb700();
   input += synapse0x27cb740();
   input += synapse0x27cb780();
   input += synapse0x27cb7c0();
   input += synapse0x27cb800();
   input += synapse0x27cb840();
   input += synapse0x27cb880();
   input += synapse0x27cb8c0();
   input += synapse0x27cb900();
   input += synapse0x27cb940();
   input += synapse0x27cb980();
   input += synapse0x27cb530();
   input += synapse0x27cb570();
   input += synapse0x27cb5b0();
   input += synapse0x27cb5f0();
   input += synapse0x27cbbd0();
   input += synapse0x27cbc10();
   input += synapse0x27cbc50();
   input += synapse0x27cbc90();
   input += synapse0x27cbcd0();
   input += synapse0x27cbd10();
   input += synapse0x27cbd50();
   input += synapse0x27cbd90();
   input += synapse0x27cbdd0();
   input += synapse0x27cbe10();
   input += synapse0x27cbe50();
   input += synapse0x27cbe90();
   input += synapse0x27cbed0();
   input += synapse0x27cbf10();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27cadf0() {
   double input = input0x27cadf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27cbf50() {
   double input = -0.853609;
   input += synapse0x27cc290();
   input += synapse0x27cc2d0();
   input += synapse0x27cc310();
   input += synapse0x27cc350();
   input += synapse0x27cc390();
   input += synapse0x27cc3d0();
   input += synapse0x27cc410();
   input += synapse0x27cc450();
   input += synapse0x27cc490();
   input += synapse0x27cc4d0();
   input += synapse0x27cc510();
   input += synapse0x27cc550();
   input += synapse0x27cc590();
   input += synapse0x27cc5d0();
   input += synapse0x27cc610();
   input += synapse0x27cc650();
   input += synapse0x27cc0e0();
   input += synapse0x27cc120();
   input += synapse0x27cc7a0();
   input += synapse0x27cc7e0();
   input += synapse0x27cc820();
   input += synapse0x27cc860();
   input += synapse0x27cc8a0();
   input += synapse0x27cc8e0();
   input += synapse0x27cc920();
   input += synapse0x27cc960();
   input += synapse0x27cc9a0();
   input += synapse0x27cc9e0();
   input += synapse0x27cca20();
   input += synapse0x27cca60();
   input += synapse0x27ccaa0();
   input += synapse0x27ccae0();
   input += synapse0x27cc690();
   input += synapse0x27cc6d0();
   input += synapse0x27cc710();
   input += synapse0x27cc750();
   input += synapse0x27ccd30();
   input += synapse0x27ccd70();
   input += synapse0x27ccdb0();
   input += synapse0x27ccdf0();
   input += synapse0x27cce30();
   input += synapse0x27cce70();
   input += synapse0x27cceb0();
   input += synapse0x27ccef0();
   input += synapse0x27ccf30();
   input += synapse0x27ccf70();
   input += synapse0x27ccfb0();
   input += synapse0x27ccff0();
   input += synapse0x27cd030();
   input += synapse0x27cd070();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27cbf50() {
   double input = input0x27cbf50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27cd0b0() {
   double input = -0.311749;
   input += synapse0x27cd3f0();
   input += synapse0x27cd430();
   input += synapse0x27cd470();
   input += synapse0x27cd4b0();
   input += synapse0x27cd4f0();
   input += synapse0x27cd530();
   input += synapse0x27cd570();
   input += synapse0x27cd5b0();
   input += synapse0x27cd5f0();
   input += synapse0x27cd630();
   input += synapse0x27cd670();
   input += synapse0x27cd6b0();
   input += synapse0x27cd6f0();
   input += synapse0x27cd730();
   input += synapse0x27cd770();
   input += synapse0x27cd7b0();
   input += synapse0x27cd240();
   input += synapse0x27cd280();
   input += synapse0x27cd900();
   input += synapse0x27cd940();
   input += synapse0x27cd980();
   input += synapse0x27cd9c0();
   input += synapse0x27cda00();
   input += synapse0x27cda40();
   input += synapse0x27cda80();
   input += synapse0x27cdac0();
   input += synapse0x27cdb00();
   input += synapse0x27cdb40();
   input += synapse0x27cdb80();
   input += synapse0x27cdbc0();
   input += synapse0x27cdc00();
   input += synapse0x27cdc40();
   input += synapse0x27cd7f0();
   input += synapse0x27cd830();
   input += synapse0x27cd870();
   input += synapse0x27cd8b0();
   input += synapse0x27cde90();
   input += synapse0x27cded0();
   input += synapse0x27cdf10();
   input += synapse0x27cdf50();
   input += synapse0x27cdf90();
   input += synapse0x27cdfd0();
   input += synapse0x27ce010();
   input += synapse0x27ce050();
   input += synapse0x27ce090();
   input += synapse0x27ce0d0();
   input += synapse0x27ce110();
   input += synapse0x27ce150();
   input += synapse0x27ce190();
   input += synapse0x27ce1d0();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27cd0b0() {
   double input = input0x27cd0b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cRcR::input0x27ce210() {
   double input = 13.2732;
   input += synapse0x27ce430();
   input += synapse0x27ce470();
   input += synapse0x27ce4b0();
   input += synapse0x27ce4f0();
   input += synapse0x27ce530();
   return input;
}

double NNfunction_sb_cRcR::neuron0x27ce210() {
   double input = input0x27ce210();
   return (input * 1)+0;
}

double NNfunction_sb_cRcR::synapse0x279a1c0() {
   return (neuron0x279a300()*0.0615834);
}

double NNfunction_sb_cRcR::synapse0x279a200() {
   return (neuron0x279a640()*-0.335724);
}

double NNfunction_sb_cRcR::synapse0x279f5e0() {
   return (neuron0x279a980()*-0.666347);
}

double NNfunction_sb_cRcR::synapse0x279f620() {
   return (neuron0x279acc0()*-0.375038);
}

double NNfunction_sb_cRcR::synapse0x279f660() {
   return (neuron0x279b000()*0.150831);
}

double NNfunction_sb_cRcR::synapse0x279f6a0() {
   return (neuron0x279b340()*0.0926305);
}

double NNfunction_sb_cRcR::synapse0x279f6e0() {
   return (neuron0x279b680()*0.0509404);
}

double NNfunction_sb_cRcR::synapse0x279f720() {
   return (neuron0x279b9c0()*0.409445);
}

double NNfunction_sb_cRcR::synapse0x279f760() {
   return (neuron0x279bd00()*-0.0600419);
}

double NNfunction_sb_cRcR::synapse0x279f7a0() {
   return (neuron0x279c040()*-0.0354705);
}

double NNfunction_sb_cRcR::synapse0x279f7e0() {
   return (neuron0x279c380()*-0.0649553);
}

double NNfunction_sb_cRcR::synapse0x279f820() {
   return (neuron0x279c6c0()*0.229218);
}

double NNfunction_sb_cRcR::synapse0x279f860() {
   return (neuron0x279ca00()*-0.126232);
}

double NNfunction_sb_cRcR::synapse0x279f8a0() {
   return (neuron0x279cd40()*0.0331215);
}

double NNfunction_sb_cRcR::synapse0x279f8e0() {
   return (neuron0x279d080()*0.515798);
}

double NNfunction_sb_cRcR::synapse0x279f920() {
   return (neuron0x279d3c0()*0.276301);
}

double NNfunction_sb_cRcR::synapse0x279a130() {
   return (neuron0x279d700()*-1.32314);
}

double NNfunction_sb_cRcR::synapse0x279a170() {
   return (neuron0x279dc60()*-0.0323855);
}

double NNfunction_sb_cRcR::synapse0x25554f0() {
   return (neuron0x279de80()*-0.195508);
}

double NNfunction_sb_cRcR::synapse0x2555530() {
   return (neuron0x279e1c0()*-0.538083);
}

double NNfunction_sb_cRcR::synapse0x279fb80() {
   return (neuron0x279e500()*-0.124933);
}

double NNfunction_sb_cRcR::synapse0x279fbc0() {
   return (neuron0x279e840()*0.156592);
}

double NNfunction_sb_cRcR::synapse0x279fc00() {
   return (neuron0x279eb80()*0.0842732);
}

double NNfunction_sb_cRcR::synapse0x279fc40() {
   return (neuron0x279eec0()*0.125042);
}

double NNfunction_sb_cRcR::synapse0x279ffc0() {
   return (neuron0x279a300()*-0.287149);
}

double NNfunction_sb_cRcR::synapse0x27a0000() {
   return (neuron0x279a640()*-0.876687);
}

double NNfunction_sb_cRcR::synapse0x27a0040() {
   return (neuron0x279a980()*0.335136);
}

double NNfunction_sb_cRcR::synapse0x27a0080() {
   return (neuron0x279acc0()*-0.951923);
}

double NNfunction_sb_cRcR::synapse0x27a00c0() {
   return (neuron0x279b000()*0.414275);
}

double NNfunction_sb_cRcR::synapse0x27a0100() {
   return (neuron0x279b340()*0.401034);
}

double NNfunction_sb_cRcR::synapse0x27a0140() {
   return (neuron0x279b680()*0.035904);
}

double NNfunction_sb_cRcR::synapse0x27a0180() {
   return (neuron0x279b9c0()*-0.045777);
}

double NNfunction_sb_cRcR::synapse0x27a01c0() {
   return (neuron0x279bd00()*-0.279255);
}

double NNfunction_sb_cRcR::synapse0x279fa70() {
   return (neuron0x279c040()*0.549959);
}

double NNfunction_sb_cRcR::synapse0x279fab0() {
   return (neuron0x279c380()*-0.590508);
}

double NNfunction_sb_cRcR::synapse0x279faf0() {
   return (neuron0x279c6c0()*0.758682);
}

double NNfunction_sb_cRcR::synapse0x279fb30() {
   return (neuron0x279ca00()*0.192268);
}

double NNfunction_sb_cRcR::synapse0x27a0410() {
   return (neuron0x279cd40()*-0.30053);
}

double NNfunction_sb_cRcR::synapse0x27a0450() {
   return (neuron0x279d080()*0.159357);
}

double NNfunction_sb_cRcR::synapse0x27a0490() {
   return (neuron0x279d3c0()*1.02048);
}

double NNfunction_sb_cRcR::synapse0x279fe10() {
   return (neuron0x279d700()*0.899629);
}

double NNfunction_sb_cRcR::synapse0x279fe50() {
   return (neuron0x279dc60()*0.0730291);
}

double NNfunction_sb_cRcR::synapse0x27a05e0() {
   return (neuron0x279de80()*-0.407978);
}

double NNfunction_sb_cRcR::synapse0x27a0620() {
   return (neuron0x279e1c0()*1.19426);
}

double NNfunction_sb_cRcR::synapse0x27a0660() {
   return (neuron0x279e500()*-0.167913);
}

double NNfunction_sb_cRcR::synapse0x27a06a0() {
   return (neuron0x279e840()*0.105396);
}

double NNfunction_sb_cRcR::synapse0x27a06e0() {
   return (neuron0x279eb80()*0.190128);
}

double NNfunction_sb_cRcR::synapse0x27a0720() {
   return (neuron0x279eec0()*-0.129242);
}

double NNfunction_sb_cRcR::synapse0x27a0aa0() {
   return (neuron0x279a300()*-0.0149377);
}

double NNfunction_sb_cRcR::synapse0x27a0ae0() {
   return (neuron0x279a640()*-0.010172);
}

double NNfunction_sb_cRcR::synapse0x27a0b20() {
   return (neuron0x279a980()*0.0149959);
}

double NNfunction_sb_cRcR::synapse0x27a0b60() {
   return (neuron0x279acc0()*-0.0744032);
}

double NNfunction_sb_cRcR::synapse0x27a0ba0() {
   return (neuron0x279b000()*-0.0265357);
}

double NNfunction_sb_cRcR::synapse0x27a0be0() {
   return (neuron0x279b340()*-0.00462459);
}

double NNfunction_sb_cRcR::synapse0x27a0c20() {
   return (neuron0x279b680()*-0.0406182);
}

double NNfunction_sb_cRcR::synapse0x27a0c60() {
   return (neuron0x279b9c0()*0.0318288);
}

double NNfunction_sb_cRcR::synapse0x27a0ca0() {
   return (neuron0x279bd00()*0.00666867);
}

double NNfunction_sb_cRcR::synapse0x27a0ce0() {
   return (neuron0x279c040()*-0.00812023);
}

double NNfunction_sb_cRcR::synapse0x27a0d20() {
   return (neuron0x279c380()*0.00467286);
}

double NNfunction_sb_cRcR::synapse0x27a0d60() {
   return (neuron0x279c6c0()*0.0306363);
}

double NNfunction_sb_cRcR::synapse0x27a0da0() {
   return (neuron0x279ca00()*0.00579541);
}

double NNfunction_sb_cRcR::synapse0x27a0de0() {
   return (neuron0x279cd40()*0.00153187);
}

double NNfunction_sb_cRcR::synapse0x27a0e20() {
   return (neuron0x279d080()*0.00909593);
}

double NNfunction_sb_cRcR::synapse0x27a0e60() {
   return (neuron0x279d3c0()*1.16148);
}

double NNfunction_sb_cRcR::synapse0x27a08f0() {
   return (neuron0x279d700()*0.026901);
}

double NNfunction_sb_cRcR::synapse0x27a0930() {
   return (neuron0x279dc60()*0.0319298);
}

double NNfunction_sb_cRcR::synapse0x2555b90() {
   return (neuron0x279de80()*0.00155449);
}

double NNfunction_sb_cRcR::synapse0x2563460() {
   return (neuron0x279e1c0()*0.00601221);
}

double NNfunction_sb_cRcR::synapse0x25634a0() {
   return (neuron0x279e500()*-0.0029371);
}

double NNfunction_sb_cRcR::synapse0x2789390() {
   return (neuron0x279e840()*0.0147497);
}

double NNfunction_sb_cRcR::synapse0x27893d0() {
   return (neuron0x279eb80()*0.0148585);
}

double NNfunction_sb_cRcR::synapse0x2789410() {
   return (neuron0x279eec0()*-0.003679);
}

double NNfunction_sb_cRcR::synapse0x2563ce0() {
   return (neuron0x279a300()*0.0138596);
}

double NNfunction_sb_cRcR::synapse0x27a0390() {
   return (neuron0x279a640()*-0.0139237);
}

double NNfunction_sb_cRcR::synapse0x27a03d0() {
   return (neuron0x279a980()*-0.00396131);
}

double NNfunction_sb_cRcR::synapse0x27a0fb0() {
   return (neuron0x279acc0()*-0.0409086);
}

double NNfunction_sb_cRcR::synapse0x27a0ff0() {
   return (neuron0x279b000()*-0.0649907);
}

double NNfunction_sb_cRcR::synapse0x27a1030() {
   return (neuron0x279b340()*-0.378929);
}

double NNfunction_sb_cRcR::synapse0x27a1070() {
   return (neuron0x279b680()*-0.0856664);
}

double NNfunction_sb_cRcR::synapse0x27a10b0() {
   return (neuron0x279b9c0()*0.100395);
}

double NNfunction_sb_cRcR::synapse0x27a10f0() {
   return (neuron0x279bd00()*0.00727707);
}

double NNfunction_sb_cRcR::synapse0x27a1130() {
   return (neuron0x279c040()*0.0210102);
}

double NNfunction_sb_cRcR::synapse0x27a1170() {
   return (neuron0x279c380()*0.0424535);
}

double NNfunction_sb_cRcR::synapse0x27a11b0() {
   return (neuron0x279c6c0()*0.113048);
}

double NNfunction_sb_cRcR::synapse0x27a11f0() {
   return (neuron0x279ca00()*0.0567572);
}

double NNfunction_sb_cRcR::synapse0x27a1230() {
   return (neuron0x279cd40()*-0.00137911);
}

double NNfunction_sb_cRcR::synapse0x27a1270() {
   return (neuron0x279d080()*0.21624);
}

double NNfunction_sb_cRcR::synapse0x27a12b0() {
   return (neuron0x279d3c0()*-0.67654);
}

double NNfunction_sb_cRcR::synapse0x279a240() {
   return (neuron0x279d700()*-0.0574825);
}

double NNfunction_sb_cRcR::synapse0x279a280() {
   return (neuron0x279dc60()*0.0441593);
}

double NNfunction_sb_cRcR::synapse0x279a2c0() {
   return (neuron0x279de80()*0.058606);
}

double NNfunction_sb_cRcR::synapse0x27a1400() {
   return (neuron0x279e1c0()*0.0263948);
}

double NNfunction_sb_cRcR::synapse0x27a1440() {
   return (neuron0x279e500()*-0.00830288);
}

double NNfunction_sb_cRcR::synapse0x27a1480() {
   return (neuron0x279e840()*0.00427804);
}

double NNfunction_sb_cRcR::synapse0x27a14c0() {
   return (neuron0x279eb80()*0.0149205);
}

double NNfunction_sb_cRcR::synapse0x27a1500() {
   return (neuron0x279eec0()*-0.00292311);
}

double NNfunction_sb_cRcR::synapse0x27a1880() {
   return (neuron0x279a300()*-0.00224979);
}

double NNfunction_sb_cRcR::synapse0x27a18c0() {
   return (neuron0x279a640()*-0.0518955);
}

double NNfunction_sb_cRcR::synapse0x27a1900() {
   return (neuron0x279a980()*0.000611267);
}

double NNfunction_sb_cRcR::synapse0x27a1940() {
   return (neuron0x279acc0()*0.0142883);
}

double NNfunction_sb_cRcR::synapse0x27a1980() {
   return (neuron0x279b000()*-0.0255508);
}

double NNfunction_sb_cRcR::synapse0x27a19c0() {
   return (neuron0x279b340()*0.029578);
}

double NNfunction_sb_cRcR::synapse0x27a1a00() {
   return (neuron0x279b680()*0.0345265);
}

double NNfunction_sb_cRcR::synapse0x27a1a40() {
   return (neuron0x279b9c0()*-0.000300258);
}

double NNfunction_sb_cRcR::synapse0x27a1a80() {
   return (neuron0x279bd00()*0.00625649);
}

double NNfunction_sb_cRcR::synapse0x27a1ac0() {
   return (neuron0x279c040()*0.0592433);
}

double NNfunction_sb_cRcR::synapse0x27a1b00() {
   return (neuron0x279c380()*0.0334007);
}

double NNfunction_sb_cRcR::synapse0x27a1b40() {
   return (neuron0x279c6c0()*-0.44097);
}

double NNfunction_sb_cRcR::synapse0x27a1b80() {
   return (neuron0x279ca00()*-0.481706);
}

double NNfunction_sb_cRcR::synapse0x27a1bc0() {
   return (neuron0x279cd40()*0.0563852);
}

double NNfunction_sb_cRcR::synapse0x27a1c00() {
   return (neuron0x279d080()*-0.111635);
}

double NNfunction_sb_cRcR::synapse0x27a1c40() {
   return (neuron0x279d3c0()*0.249376);
}

double NNfunction_sb_cRcR::synapse0x27a16d0() {
   return (neuron0x279d700()*0.0275548);
}

double NNfunction_sb_cRcR::synapse0x27a1710() {
   return (neuron0x279dc60()*-0.28944);
}

double NNfunction_sb_cRcR::synapse0x27a1d90() {
   return (neuron0x279de80()*-0.291788);
}

double NNfunction_sb_cRcR::synapse0x27a1dd0() {
   return (neuron0x279e1c0()*-0.0261123);
}

double NNfunction_sb_cRcR::synapse0x27a1e10() {
   return (neuron0x279e500()*-0.00453302);
}

double NNfunction_sb_cRcR::synapse0x27a1e50() {
   return (neuron0x279e840()*-0.0254468);
}

double NNfunction_sb_cRcR::synapse0x27a1e90() {
   return (neuron0x279eb80()*-0.0209521);
}

double NNfunction_sb_cRcR::synapse0x27a1ed0() {
   return (neuron0x279eec0()*0.0080816);
}

double NNfunction_sb_cRcR::synapse0x27a2250() {
   return (neuron0x279a300()*0.338644);
}

double NNfunction_sb_cRcR::synapse0x27a2290() {
   return (neuron0x279a640()*0.0143524);
}

double NNfunction_sb_cRcR::synapse0x27a22d0() {
   return (neuron0x279a980()*-0.114021);
}

double NNfunction_sb_cRcR::synapse0x27a2310() {
   return (neuron0x279acc0()*-0.54887);
}

double NNfunction_sb_cRcR::synapse0x27a2350() {
   return (neuron0x279b000()*-0.221669);
}

double NNfunction_sb_cRcR::synapse0x27a2390() {
   return (neuron0x279b340()*-0.178965);
}

double NNfunction_sb_cRcR::synapse0x27a23d0() {
   return (neuron0x279b680()*-0.00566539);
}

double NNfunction_sb_cRcR::synapse0x27a2410() {
   return (neuron0x279b9c0()*0.299656);
}

double NNfunction_sb_cRcR::synapse0x27a2450() {
   return (neuron0x279bd00()*0.239615);
}

double NNfunction_sb_cRcR::synapse0x25637b0() {
   return (neuron0x279c040()*-0.13346);
}

double NNfunction_sb_cRcR::synapse0x25637f0() {
   return (neuron0x279c380()*0.089383);
}

double NNfunction_sb_cRcR::synapse0x2563830() {
   return (neuron0x279c6c0()*0.0505395);
}

double NNfunction_sb_cRcR::synapse0x2563870() {
   return (neuron0x279ca00()*-0.00879064);
}

double NNfunction_sb_cRcR::synapse0x25638b0() {
   return (neuron0x279cd40()*-0.130967);
}

double NNfunction_sb_cRcR::synapse0x25638f0() {
   return (neuron0x279d080()*0.121724);
}

double NNfunction_sb_cRcR::synapse0x2563930() {
   return (neuron0x279d3c0()*0.0780156);
}

double NNfunction_sb_cRcR::synapse0x27a20a0() {
   return (neuron0x279d700()*0.0614019);
}

double NNfunction_sb_cRcR::synapse0x27a20e0() {
   return (neuron0x279dc60()*-0.326739);
}

double NNfunction_sb_cRcR::synapse0x2563a80() {
   return (neuron0x279de80()*-0.436109);
}

double NNfunction_sb_cRcR::synapse0x2563ac0() {
   return (neuron0x279e1c0()*0.0530878);
}

double NNfunction_sb_cRcR::synapse0x2563b00() {
   return (neuron0x279e500()*-0.147412);
}

double NNfunction_sb_cRcR::synapse0x2563b40() {
   return (neuron0x279e840()*-0.105402);
}

double NNfunction_sb_cRcR::synapse0x2563b80() {
   return (neuron0x279eb80()*-0.0841128);
}

double NNfunction_sb_cRcR::synapse0x27a2ca0() {
   return (neuron0x279eec0()*0.130681);
}

double NNfunction_sb_cRcR::synapse0x27a3020() {
   return (neuron0x279a300()*-0.00350584);
}

double NNfunction_sb_cRcR::synapse0x27a3060() {
   return (neuron0x279a640()*0.30835);
}

double NNfunction_sb_cRcR::synapse0x27a30a0() {
   return (neuron0x279a980()*-0.013729);
}

double NNfunction_sb_cRcR::synapse0x27a30e0() {
   return (neuron0x279acc0()*3.30287);
}

double NNfunction_sb_cRcR::synapse0x27a3120() {
   return (neuron0x279b000()*0.0224513);
}

double NNfunction_sb_cRcR::synapse0x27a3160() {
   return (neuron0x279b340()*0.058931);
}

double NNfunction_sb_cRcR::synapse0x27a31a0() {
   return (neuron0x279b680()*0.0375229);
}

double NNfunction_sb_cRcR::synapse0x27a31e0() {
   return (neuron0x279b9c0()*-0.00791543);
}

double NNfunction_sb_cRcR::synapse0x27a3220() {
   return (neuron0x279bd00()*0.0560526);
}

double NNfunction_sb_cRcR::synapse0x27a3260() {
   return (neuron0x279c040()*0.0142319);
}

double NNfunction_sb_cRcR::synapse0x27a32a0() {
   return (neuron0x279c380()*0.0570795);
}

double NNfunction_sb_cRcR::synapse0x27a32e0() {
   return (neuron0x279c6c0()*0.051176);
}

double NNfunction_sb_cRcR::synapse0x27a3320() {
   return (neuron0x279ca00()*0.0161059);
}

double NNfunction_sb_cRcR::synapse0x27a3360() {
   return (neuron0x279cd40()*0.0594848);
}

double NNfunction_sb_cRcR::synapse0x27a33a0() {
   return (neuron0x279d080()*0.00992102);
}

double NNfunction_sb_cRcR::synapse0x27a33e0() {
   return (neuron0x279d3c0()*-0.0290693);
}

double NNfunction_sb_cRcR::synapse0x27a2e70() {
   return (neuron0x279d700()*0.0534715);
}

double NNfunction_sb_cRcR::synapse0x27a2eb0() {
   return (neuron0x279dc60()*0.023252);
}

double NNfunction_sb_cRcR::synapse0x27a3530() {
   return (neuron0x279de80()*0.04202);
}

double NNfunction_sb_cRcR::synapse0x27a3570() {
   return (neuron0x279e1c0()*-0.0171506);
}

double NNfunction_sb_cRcR::synapse0x27a35b0() {
   return (neuron0x279e500()*0.0461771);
}

double NNfunction_sb_cRcR::synapse0x27a35f0() {
   return (neuron0x279e840()*-0.00867949);
}

double NNfunction_sb_cRcR::synapse0x27a3630() {
   return (neuron0x279eb80()*-0.0389817);
}

double NNfunction_sb_cRcR::synapse0x27a3670() {
   return (neuron0x279eec0()*0.0494233);
}

double NNfunction_sb_cRcR::synapse0x27a39f0() {
   return (neuron0x279a300()*-0.0202232);
}

double NNfunction_sb_cRcR::synapse0x27a3a30() {
   return (neuron0x279a640()*-0.0265489);
}

double NNfunction_sb_cRcR::synapse0x27a3a70() {
   return (neuron0x279a980()*0.0247997);
}

double NNfunction_sb_cRcR::synapse0x27a3ab0() {
   return (neuron0x279acc0()*-0.00579106);
}

double NNfunction_sb_cRcR::synapse0x27a3af0() {
   return (neuron0x279b000()*0.15514);
}

double NNfunction_sb_cRcR::synapse0x27a3b30() {
   return (neuron0x279b340()*0.06567);
}

double NNfunction_sb_cRcR::synapse0x27a3b70() {
   return (neuron0x279b680()*-0.0811547);
}

double NNfunction_sb_cRcR::synapse0x27a3bb0() {
   return (neuron0x279b9c0()*0.0268465);
}

double NNfunction_sb_cRcR::synapse0x27a3bf0() {
   return (neuron0x279bd00()*0.0296673);
}

double NNfunction_sb_cRcR::synapse0x27a3c30() {
   return (neuron0x279c040()*-0.013875);
}

double NNfunction_sb_cRcR::synapse0x27a3c70() {
   return (neuron0x279c380()*-0.0274932);
}

double NNfunction_sb_cRcR::synapse0x27a3cb0() {
   return (neuron0x279c6c0()*0.0251846);
}

double NNfunction_sb_cRcR::synapse0x27a3cf0() {
   return (neuron0x279ca00()*0.0523015);
}

double NNfunction_sb_cRcR::synapse0x27a3d30() {
   return (neuron0x279cd40()*-0.0227548);
}

double NNfunction_sb_cRcR::synapse0x27a3d70() {
   return (neuron0x279d080()*0.0857604);
}

double NNfunction_sb_cRcR::synapse0x27a3db0() {
   return (neuron0x279d3c0()*-0.697921);
}

double NNfunction_sb_cRcR::synapse0x27a3840() {
   return (neuron0x279d700()*0.116209);
}

double NNfunction_sb_cRcR::synapse0x27a3880() {
   return (neuron0x279dc60()*0.0260104);
}

double NNfunction_sb_cRcR::synapse0x27a3f00() {
   return (neuron0x279de80()*-0.0192043);
}

double NNfunction_sb_cRcR::synapse0x27a3f40() {
   return (neuron0x279e1c0()*-0.00863628);
}

double NNfunction_sb_cRcR::synapse0x27a3f80() {
   return (neuron0x279e500()*0.0075897);
}

double NNfunction_sb_cRcR::synapse0x27a3fc0() {
   return (neuron0x279e840()*0.0264071);
}

double NNfunction_sb_cRcR::synapse0x27a4000() {
   return (neuron0x279eb80()*0.00354851);
}

double NNfunction_sb_cRcR::synapse0x27a4040() {
   return (neuron0x279eec0()*-0.0228193);
}

double NNfunction_sb_cRcR::synapse0x279db50() {
   return (neuron0x279a300()*-0.622365);
}

double NNfunction_sb_cRcR::synapse0x279db90() {
   return (neuron0x279a640()*0.84486);
}

double NNfunction_sb_cRcR::synapse0x279dbd0() {
   return (neuron0x279a980()*0.178665);
}

double NNfunction_sb_cRcR::synapse0x279dc10() {
   return (neuron0x279acc0()*-1.11985);
}

double NNfunction_sb_cRcR::synapse0x27a45d0() {
   return (neuron0x279b000()*0.339241);
}

double NNfunction_sb_cRcR::synapse0x27a4610() {
   return (neuron0x279b340()*0.478058);
}

double NNfunction_sb_cRcR::synapse0x27a4650() {
   return (neuron0x279b680()*0.797395);
}

double NNfunction_sb_cRcR::synapse0x27a4690() {
   return (neuron0x279b9c0()*-0.0431767);
}

double NNfunction_sb_cRcR::synapse0x27a46d0() {
   return (neuron0x279bd00()*0.605033);
}

double NNfunction_sb_cRcR::synapse0x27a4710() {
   return (neuron0x279c040()*-0.369256);
}

double NNfunction_sb_cRcR::synapse0x27a4750() {
   return (neuron0x279c380()*-0.2861);
}

double NNfunction_sb_cRcR::synapse0x27a4790() {
   return (neuron0x279c6c0()*-0.230349);
}

double NNfunction_sb_cRcR::synapse0x27a47d0() {
   return (neuron0x279ca00()*-0.607002);
}

double NNfunction_sb_cRcR::synapse0x27a4810() {
   return (neuron0x279cd40()*-0.231905);
}

double NNfunction_sb_cRcR::synapse0x27a4850() {
   return (neuron0x279d080()*-0.521846);
}

double NNfunction_sb_cRcR::synapse0x27a4890() {
   return (neuron0x279d3c0()*1.08354);
}

double NNfunction_sb_cRcR::synapse0x27a4210() {
   return (neuron0x279d700()*-0.595467);
}

double NNfunction_sb_cRcR::synapse0x27a4250() {
   return (neuron0x279dc60()*0.198726);
}

double NNfunction_sb_cRcR::synapse0x27a49e0() {
   return (neuron0x279de80()*-0.414187);
}

double NNfunction_sb_cRcR::synapse0x27a4a20() {
   return (neuron0x279e1c0()*-0.134925);
}

double NNfunction_sb_cRcR::synapse0x27a4a60() {
   return (neuron0x279e500()*0.00328472);
}

double NNfunction_sb_cRcR::synapse0x27a4aa0() {
   return (neuron0x279e840()*0.0669823);
}

double NNfunction_sb_cRcR::synapse0x27a4ae0() {
   return (neuron0x279eb80()*0.537614);
}

double NNfunction_sb_cRcR::synapse0x27a4b20() {
   return (neuron0x279eec0()*0.621557);
}

double NNfunction_sb_cRcR::synapse0x27a4ea0() {
   return (neuron0x279a300()*0.642181);
}

double NNfunction_sb_cRcR::synapse0x27a4ee0() {
   return (neuron0x279a640()*-0.00665717);
}

double NNfunction_sb_cRcR::synapse0x27a4f20() {
   return (neuron0x279a980()*-0.189475);
}

double NNfunction_sb_cRcR::synapse0x27a4f60() {
   return (neuron0x279acc0()*0.886249);
}

double NNfunction_sb_cRcR::synapse0x27a4fa0() {
   return (neuron0x279b000()*0.940009);
}

double NNfunction_sb_cRcR::synapse0x27a4fe0() {
   return (neuron0x279b340()*-0.402651);
}

double NNfunction_sb_cRcR::synapse0x27a5020() {
   return (neuron0x279b680()*-0.462693);
}

double NNfunction_sb_cRcR::synapse0x27a5060() {
   return (neuron0x279b9c0()*-0.517029);
}

double NNfunction_sb_cRcR::synapse0x27a50a0() {
   return (neuron0x279bd00()*0.0984023);
}

double NNfunction_sb_cRcR::synapse0x27a50e0() {
   return (neuron0x279c040()*-0.120725);
}

double NNfunction_sb_cRcR::synapse0x27a5120() {
   return (neuron0x279c380()*0.734087);
}

double NNfunction_sb_cRcR::synapse0x27a5160() {
   return (neuron0x279c6c0()*-0.209826);
}

double NNfunction_sb_cRcR::synapse0x27a51a0() {
   return (neuron0x279ca00()*0.133928);
}

double NNfunction_sb_cRcR::synapse0x27a51e0() {
   return (neuron0x279cd40()*0.138505);
}

double NNfunction_sb_cRcR::synapse0x27a5220() {
   return (neuron0x279d080()*-0.529959);
}

double NNfunction_sb_cRcR::synapse0x27a5260() {
   return (neuron0x279d3c0()*-1.12949);
}

double NNfunction_sb_cRcR::synapse0x27a4cf0() {
   return (neuron0x279d700()*-0.210819);
}

double NNfunction_sb_cRcR::synapse0x27a4d30() {
   return (neuron0x279dc60()*0.0896181);
}

double NNfunction_sb_cRcR::synapse0x27a53b0() {
   return (neuron0x279de80()*-0.938692);
}

double NNfunction_sb_cRcR::synapse0x27a53f0() {
   return (neuron0x279e1c0()*0.151748);
}

double NNfunction_sb_cRcR::synapse0x27a5430() {
   return (neuron0x279e500()*-0.371826);
}

double NNfunction_sb_cRcR::synapse0x27a5470() {
   return (neuron0x279e840()*0.153782);
}

double NNfunction_sb_cRcR::synapse0x27a54b0() {
   return (neuron0x279eb80()*0.0205399);
}

double NNfunction_sb_cRcR::synapse0x27a54f0() {
   return (neuron0x279eec0()*-0.249432);
}

double NNfunction_sb_cRcR::synapse0x27a5870() {
   return (neuron0x279a300()*0.0248983);
}

double NNfunction_sb_cRcR::synapse0x27a58b0() {
   return (neuron0x279a640()*-0.264102);
}

double NNfunction_sb_cRcR::synapse0x27a58f0() {
   return (neuron0x279a980()*-0.0292205);
}

double NNfunction_sb_cRcR::synapse0x27a5930() {
   return (neuron0x279acc0()*0.407809);
}

double NNfunction_sb_cRcR::synapse0x27a5970() {
   return (neuron0x279b000()*-0.124791);
}

double NNfunction_sb_cRcR::synapse0x27a59b0() {
   return (neuron0x279b340()*0.0435905);
}

double NNfunction_sb_cRcR::synapse0x27a59f0() {
   return (neuron0x279b680()*-0.0548619);
}

double NNfunction_sb_cRcR::synapse0x27a5a30() {
   return (neuron0x279b9c0()*-0.00202864);
}

double NNfunction_sb_cRcR::synapse0x27a5a70() {
   return (neuron0x279bd00()*-0.0341858);
}

double NNfunction_sb_cRcR::synapse0x27a5ab0() {
   return (neuron0x279c040()*0.316158);
}

double NNfunction_sb_cRcR::synapse0x27a5af0() {
   return (neuron0x279c380()*0.600971);
}

double NNfunction_sb_cRcR::synapse0x27a5b30() {
   return (neuron0x279c6c0()*-0.17096);
}

double NNfunction_sb_cRcR::synapse0x27a5b70() {
   return (neuron0x279ca00()*0.26238);
}

double NNfunction_sb_cRcR::synapse0x27a5bb0() {
   return (neuron0x279cd40()*0.0965034);
}

double NNfunction_sb_cRcR::synapse0x27a5bf0() {
   return (neuron0x279d080()*0.0718991);
}

double NNfunction_sb_cRcR::synapse0x27a5c30() {
   return (neuron0x279d3c0()*-0.420221);
}

double NNfunction_sb_cRcR::synapse0x27a56c0() {
   return (neuron0x279d700()*0.0364102);
}

double NNfunction_sb_cRcR::synapse0x27a5700() {
   return (neuron0x279dc60()*-0.272335);
}

double NNfunction_sb_cRcR::synapse0x27a2490() {
   return (neuron0x279de80()*0.256833);
}

double NNfunction_sb_cRcR::synapse0x27a24d0() {
   return (neuron0x279e1c0()*0.0390016);
}

double NNfunction_sb_cRcR::synapse0x27a2510() {
   return (neuron0x279e500()*-0.0015079);
}

double NNfunction_sb_cRcR::synapse0x27a2550() {
   return (neuron0x279e840()*-0.00329219);
}

double NNfunction_sb_cRcR::synapse0x27a2590() {
   return (neuron0x279eb80()*0.00105677);
}

double NNfunction_sb_cRcR::synapse0x27a25d0() {
   return (neuron0x279eec0()*0.0554013);
}

double NNfunction_sb_cRcR::synapse0x27a2950() {
   return (neuron0x279a300()*-0.0761201);
}

double NNfunction_sb_cRcR::synapse0x27a2990() {
   return (neuron0x279a640()*-0.901647);
}

double NNfunction_sb_cRcR::synapse0x27a29d0() {
   return (neuron0x279a980()*0.0561819);
}

double NNfunction_sb_cRcR::synapse0x27a2a10() {
   return (neuron0x279acc0()*-1.10884);
}

double NNfunction_sb_cRcR::synapse0x27a2a50() {
   return (neuron0x279b000()*0.0128661);
}

double NNfunction_sb_cRcR::synapse0x27a2a90() {
   return (neuron0x279b340()*-0.000455946);
}

double NNfunction_sb_cRcR::synapse0x27a2ad0() {
   return (neuron0x279b680()*-0.123451);
}

double NNfunction_sb_cRcR::synapse0x27a2b10() {
   return (neuron0x279b9c0()*-0.110065);
}

double NNfunction_sb_cRcR::synapse0x27a2b50() {
   return (neuron0x279bd00()*-0.00508988);
}

double NNfunction_sb_cRcR::synapse0x27a2b90() {
   return (neuron0x279c040()*-0.149426);
}

double NNfunction_sb_cRcR::synapse0x27a2bd0() {
   return (neuron0x279c380()*-0.0799328);
}

double NNfunction_sb_cRcR::synapse0x27a2c10() {
   return (neuron0x279c6c0()*-0.279556);
}

double NNfunction_sb_cRcR::synapse0x27a2c50() {
   return (neuron0x279ca00()*0.162953);
}

double NNfunction_sb_cRcR::synapse0x27a6d90() {
   return (neuron0x279cd40()*-0.151783);
}

double NNfunction_sb_cRcR::synapse0x27a6dd0() {
   return (neuron0x279d080()*0.043667);
}

double NNfunction_sb_cRcR::synapse0x27a6e10() {
   return (neuron0x279d3c0()*-0.3994);
}

double NNfunction_sb_cRcR::synapse0x27a27a0() {
   return (neuron0x279d700()*0.0870751);
}

double NNfunction_sb_cRcR::synapse0x27a27e0() {
   return (neuron0x279dc60()*0.0354213);
}

double NNfunction_sb_cRcR::synapse0x27a6f60() {
   return (neuron0x279de80()*-0.0158811);
}

double NNfunction_sb_cRcR::synapse0x27a6fa0() {
   return (neuron0x279e1c0()*-0.00308088);
}

double NNfunction_sb_cRcR::synapse0x27a6fe0() {
   return (neuron0x279e500()*-0.0581411);
}

double NNfunction_sb_cRcR::synapse0x27a7020() {
   return (neuron0x279e840()*-0.00500477);
}

double NNfunction_sb_cRcR::synapse0x27a7060() {
   return (neuron0x279eb80()*-0.0181328);
}

double NNfunction_sb_cRcR::synapse0x27a70a0() {
   return (neuron0x279eec0()*-0.0929304);
}

double NNfunction_sb_cRcR::synapse0x27a7420() {
   return (neuron0x279a300()*0.304336);
}

double NNfunction_sb_cRcR::synapse0x27a7460() {
   return (neuron0x279a640()*0.0102107);
}

double NNfunction_sb_cRcR::synapse0x27a74a0() {
   return (neuron0x279a980()*-0.113096);
}

double NNfunction_sb_cRcR::synapse0x27a74e0() {
   return (neuron0x279acc0()*0.469814);
}

double NNfunction_sb_cRcR::synapse0x27a7520() {
   return (neuron0x279b000()*0.17462);
}

double NNfunction_sb_cRcR::synapse0x27a7560() {
   return (neuron0x279b340()*-0.258059);
}

double NNfunction_sb_cRcR::synapse0x27a75a0() {
   return (neuron0x279b680()*-0.0455624);
}

double NNfunction_sb_cRcR::synapse0x27a75e0() {
   return (neuron0x279b9c0()*0.188554);
}

double NNfunction_sb_cRcR::synapse0x27a7620() {
   return (neuron0x279bd00()*-0.138782);
}

double NNfunction_sb_cRcR::synapse0x27a7660() {
   return (neuron0x279c040()*-0.247214);
}

double NNfunction_sb_cRcR::synapse0x27a76a0() {
   return (neuron0x279c380()*-0.13728);
}

double NNfunction_sb_cRcR::synapse0x27a76e0() {
   return (neuron0x279c6c0()*-0.102974);
}

double NNfunction_sb_cRcR::synapse0x27a7720() {
   return (neuron0x279ca00()*-0.14275);
}

double NNfunction_sb_cRcR::synapse0x27a7760() {
   return (neuron0x279cd40()*-0.047469);
}

double NNfunction_sb_cRcR::synapse0x27a77a0() {
   return (neuron0x279d080()*0.397898);
}

double NNfunction_sb_cRcR::synapse0x27a77e0() {
   return (neuron0x279d3c0()*-0.00495166);
}

double NNfunction_sb_cRcR::synapse0x27a7270() {
   return (neuron0x279d700()*0.221038);
}

double NNfunction_sb_cRcR::synapse0x27a72b0() {
   return (neuron0x279dc60()*-0.142499);
}

double NNfunction_sb_cRcR::synapse0x27a7930() {
   return (neuron0x279de80()*-0.273452);
}

double NNfunction_sb_cRcR::synapse0x27a7970() {
   return (neuron0x279e1c0()*-0.0519451);
}

double NNfunction_sb_cRcR::synapse0x27a79b0() {
   return (neuron0x279e500()*-0.0309155);
}

double NNfunction_sb_cRcR::synapse0x27a79f0() {
   return (neuron0x279e840()*0.0795125);
}

double NNfunction_sb_cRcR::synapse0x27a7a30() {
   return (neuron0x279eb80()*-0.0825332);
}

double NNfunction_sb_cRcR::synapse0x27a7a70() {
   return (neuron0x279eec0()*0.11449);
}

double NNfunction_sb_cRcR::synapse0x27a7df0() {
   return (neuron0x279a300()*0.211079);
}

double NNfunction_sb_cRcR::synapse0x27a7e30() {
   return (neuron0x279a640()*0.443937);
}

double NNfunction_sb_cRcR::synapse0x27a7e70() {
   return (neuron0x279a980()*-0.661658);
}

double NNfunction_sb_cRcR::synapse0x27a7eb0() {
   return (neuron0x279acc0()*-0.158394);
}

double NNfunction_sb_cRcR::synapse0x27a7ef0() {
   return (neuron0x279b000()*-1.69162);
}

double NNfunction_sb_cRcR::synapse0x27a7f30() {
   return (neuron0x279b340()*0.664171);
}

double NNfunction_sb_cRcR::synapse0x27a7f70() {
   return (neuron0x279b680()*-0.617945);
}

double NNfunction_sb_cRcR::synapse0x27a7fb0() {
   return (neuron0x279b9c0()*0.817831);
}

double NNfunction_sb_cRcR::synapse0x27a7ff0() {
   return (neuron0x279bd00()*-0.528795);
}

double NNfunction_sb_cRcR::synapse0x27a8030() {
   return (neuron0x279c040()*0.132597);
}

double NNfunction_sb_cRcR::synapse0x27a8070() {
   return (neuron0x279c380()*-0.0350638);
}

double NNfunction_sb_cRcR::synapse0x27a80b0() {
   return (neuron0x279c6c0()*-0.0285514);
}

double NNfunction_sb_cRcR::synapse0x27a80f0() {
   return (neuron0x279ca00()*-0.114324);
}

double NNfunction_sb_cRcR::synapse0x27a8130() {
   return (neuron0x279cd40()*0.0605436);
}

double NNfunction_sb_cRcR::synapse0x27a8170() {
   return (neuron0x279d080()*0.637741);
}

double NNfunction_sb_cRcR::synapse0x27a81b0() {
   return (neuron0x279d3c0()*1.42608);
}

double NNfunction_sb_cRcR::synapse0x27a7c40() {
   return (neuron0x279d700()*0.213565);
}

double NNfunction_sb_cRcR::synapse0x27a7c80() {
   return (neuron0x279dc60()*0.0336567);
}

double NNfunction_sb_cRcR::synapse0x27a8300() {
   return (neuron0x279de80()*0.140786);
}

double NNfunction_sb_cRcR::synapse0x27a8340() {
   return (neuron0x279e1c0()*-0.397136);
}

double NNfunction_sb_cRcR::synapse0x27a8380() {
   return (neuron0x279e500()*0.450836);
}

double NNfunction_sb_cRcR::synapse0x27a83c0() {
   return (neuron0x279e840()*0.0411738);
}

double NNfunction_sb_cRcR::synapse0x27a8400() {
   return (neuron0x279eb80()*0.269814);
}

double NNfunction_sb_cRcR::synapse0x27a8440() {
   return (neuron0x279eec0()*0.0806918);
}

double NNfunction_sb_cRcR::synapse0x27a87c0() {
   return (neuron0x279a300()*-0.161625);
}

double NNfunction_sb_cRcR::synapse0x27a8800() {
   return (neuron0x279a640()*0.308639);
}

double NNfunction_sb_cRcR::synapse0x27a8840() {
   return (neuron0x279a980()*0.0639575);
}

double NNfunction_sb_cRcR::synapse0x27a8880() {
   return (neuron0x279acc0()*0.37291);
}

double NNfunction_sb_cRcR::synapse0x27a88c0() {
   return (neuron0x279b000()*-0.0585189);
}

double NNfunction_sb_cRcR::synapse0x27a8900() {
   return (neuron0x279b340()*-0.0430632);
}

double NNfunction_sb_cRcR::synapse0x27a8940() {
   return (neuron0x279b680()*0.00858351);
}

double NNfunction_sb_cRcR::synapse0x27a8980() {
   return (neuron0x279b9c0()*-0.0925288);
}

double NNfunction_sb_cRcR::synapse0x27a89c0() {
   return (neuron0x279bd00()*0.223726);
}

double NNfunction_sb_cRcR::synapse0x27a8a00() {
   return (neuron0x279c040()*0.264264);
}

double NNfunction_sb_cRcR::synapse0x27a8a40() {
   return (neuron0x279c380()*0.215979);
}

double NNfunction_sb_cRcR::synapse0x27a8a80() {
   return (neuron0x279c6c0()*0.0617297);
}

double NNfunction_sb_cRcR::synapse0x27a8ac0() {
   return (neuron0x279ca00()*0.174938);
}

double NNfunction_sb_cRcR::synapse0x27a8b00() {
   return (neuron0x279cd40()*-0.0544117);
}

double NNfunction_sb_cRcR::synapse0x27a8b40() {
   return (neuron0x279d080()*-0.0100233);
}

double NNfunction_sb_cRcR::synapse0x27a8b80() {
   return (neuron0x279d3c0()*0.594421);
}

double NNfunction_sb_cRcR::synapse0x27a8610() {
   return (neuron0x279d700()*-0.0103204);
}

double NNfunction_sb_cRcR::synapse0x27a8650() {
   return (neuron0x279dc60()*-0.20908);
}

double NNfunction_sb_cRcR::synapse0x27a8cd0() {
   return (neuron0x279de80()*-0.326389);
}

double NNfunction_sb_cRcR::synapse0x27a8d10() {
   return (neuron0x279e1c0()*0.104332);
}

double NNfunction_sb_cRcR::synapse0x27a8d50() {
   return (neuron0x279e500()*-0.0562945);
}

double NNfunction_sb_cRcR::synapse0x27a8d90() {
   return (neuron0x279e840()*0.0224548);
}

double NNfunction_sb_cRcR::synapse0x27a8dd0() {
   return (neuron0x279eb80()*0.0649338);
}

double NNfunction_sb_cRcR::synapse0x27a8e10() {
   return (neuron0x279eec0()*0.0311285);
}

double NNfunction_sb_cRcR::synapse0x27a9190() {
   return (neuron0x279a300()*0.0234194);
}

double NNfunction_sb_cRcR::synapse0x279a520() {
   return (neuron0x279a640()*0.334958);
}

double NNfunction_sb_cRcR::synapse0x279a560() {
   return (neuron0x279a980()*0.00976708);
}

double NNfunction_sb_cRcR::synapse0x279a860() {
   return (neuron0x279acc0()*-0.398041);
}

double NNfunction_sb_cRcR::synapse0x279a8a0() {
   return (neuron0x279b000()*0.0482048);
}

double NNfunction_sb_cRcR::synapse0x279aba0() {
   return (neuron0x279b340()*0.116961);
}

double NNfunction_sb_cRcR::synapse0x279abe0() {
   return (neuron0x279b680()*-0.0602451);
}

double NNfunction_sb_cRcR::synapse0x279aee0() {
   return (neuron0x279b9c0()*0.0956155);
}

double NNfunction_sb_cRcR::synapse0x279af20() {
   return (neuron0x279bd00()*0.538371);
}

double NNfunction_sb_cRcR::synapse0x279b220() {
   return (neuron0x279c040()*0.370648);
}

double NNfunction_sb_cRcR::synapse0x279b260() {
   return (neuron0x279c380()*-0.0585654);
}

double NNfunction_sb_cRcR::synapse0x279b560() {
   return (neuron0x279c6c0()*0.0520854);
}

double NNfunction_sb_cRcR::synapse0x279b5a0() {
   return (neuron0x279ca00()*-0.368494);
}

double NNfunction_sb_cRcR::synapse0x279b8a0() {
   return (neuron0x279cd40()*0.131547);
}

double NNfunction_sb_cRcR::synapse0x279b8e0() {
   return (neuron0x279d080()*-0.00305615);
}

double NNfunction_sb_cRcR::synapse0x279bbe0() {
   return (neuron0x279d3c0()*-0.441847);
}

double NNfunction_sb_cRcR::synapse0x279bc20() {
   return (neuron0x279d700()*0.113378);
}

double NNfunction_sb_cRcR::synapse0x279bf20() {
   return (neuron0x279dc60()*-0.0901049);
}

double NNfunction_sb_cRcR::synapse0x279bf60() {
   return (neuron0x279de80()*0.482379);
}

double NNfunction_sb_cRcR::synapse0x279c260() {
   return (neuron0x279e1c0()*-0.415744);
}

double NNfunction_sb_cRcR::synapse0x279c2a0() {
   return (neuron0x279e500()*0.0243794);
}

double NNfunction_sb_cRcR::synapse0x279c5a0() {
   return (neuron0x279e840()*-0.0949457);
}

double NNfunction_sb_cRcR::synapse0x279c5e0() {
   return (neuron0x279eb80()*0.114001);
}

double NNfunction_sb_cRcR::synapse0x279c8e0() {
   return (neuron0x279eec0()*-0.184609);
}

double NNfunction_sb_cRcR::synapse0x279c920() {
   return (neuron0x279a300()*0.0175227);
}

double NNfunction_sb_cRcR::synapse0x279d5e0() {
   return (neuron0x279a640()*-0.020078);
}

double NNfunction_sb_cRcR::synapse0x279d620() {
   return (neuron0x279a980()*0.00392071);
}

double NNfunction_sb_cRcR::synapse0x27a8fe0() {
   return (neuron0x279acc0()*0.0948994);
}

double NNfunction_sb_cRcR::synapse0x27a9020() {
   return (neuron0x279b000()*-0.0113601);
}

double NNfunction_sb_cRcR::synapse0x279d920() {
   return (neuron0x279b340()*0.074105);
}

double NNfunction_sb_cRcR::synapse0x279d960() {
   return (neuron0x279b680()*0.0363808);
}

double NNfunction_sb_cRcR::synapse0x25553d0() {
   return (neuron0x279b9c0()*0.0229711);
}

double NNfunction_sb_cRcR::synapse0x2555410() {
   return (neuron0x279bd00()*0.00526199);
}

double NNfunction_sb_cRcR::synapse0x279e0a0() {
   return (neuron0x279c040()*0.00654038);
}

double NNfunction_sb_cRcR::synapse0x279e0e0() {
   return (neuron0x279c380()*-0.00982566);
}

double NNfunction_sb_cRcR::synapse0x279e3e0() {
   return (neuron0x279c6c0()*-0.129594);
}

double NNfunction_sb_cRcR::synapse0x279e420() {
   return (neuron0x279ca00()*-0.0909056);
}

double NNfunction_sb_cRcR::synapse0x279e720() {
   return (neuron0x279cd40()*0.024074);
}

double NNfunction_sb_cRcR::synapse0x279e760() {
   return (neuron0x279d080()*0.25478);
}

double NNfunction_sb_cRcR::synapse0x279ea60() {
   return (neuron0x279d3c0()*0.426341);
}

double NNfunction_sb_cRcR::synapse0x279eaa0() {
   return (neuron0x279d700()*0.0405073);
}

double NNfunction_sb_cRcR::synapse0x279eda0() {
   return (neuron0x279dc60()*-0.106472);
}

double NNfunction_sb_cRcR::synapse0x279ede0() {
   return (neuron0x279de80()*-0.0764007);
}

double NNfunction_sb_cRcR::synapse0x279f0e0() {
   return (neuron0x279e1c0()*-0.0190466);
}

double NNfunction_sb_cRcR::synapse0x279f120() {
   return (neuron0x279e500()*-0.0190311);
}

double NNfunction_sb_cRcR::synapse0x279cc20() {
   return (neuron0x279e840()*-0.00806753);
}

double NNfunction_sb_cRcR::synapse0x279cc60() {
   return (neuron0x279eb80()*-0.0332205);
}

double NNfunction_sb_cRcR::synapse0x27aaf00() {
   return (neuron0x279eec0()*-0.0126402);
}

double NNfunction_sb_cRcR::synapse0x27ab280() {
   return (neuron0x279a300()*-0.174743);
}

double NNfunction_sb_cRcR::synapse0x27ab2c0() {
   return (neuron0x279a640()*0.00338643);
}

double NNfunction_sb_cRcR::synapse0x27ab300() {
   return (neuron0x279a980()*0.0106178);
}

double NNfunction_sb_cRcR::synapse0x27ab340() {
   return (neuron0x279acc0()*0.0338931);
}

double NNfunction_sb_cRcR::synapse0x27ab380() {
   return (neuron0x279b000()*-0.262484);
}

double NNfunction_sb_cRcR::synapse0x27ab3c0() {
   return (neuron0x279b340()*0.0658115);
}

double NNfunction_sb_cRcR::synapse0x27ab400() {
   return (neuron0x279b680()*-0.219822);
}

double NNfunction_sb_cRcR::synapse0x27ab440() {
   return (neuron0x279b9c0()*0.698167);
}

double NNfunction_sb_cRcR::synapse0x27ab480() {
   return (neuron0x279bd00()*0.0995965);
}

double NNfunction_sb_cRcR::synapse0x27ab4c0() {
   return (neuron0x279c040()*0.0367167);
}

double NNfunction_sb_cRcR::synapse0x27ab500() {
   return (neuron0x279c380()*0.0653394);
}

double NNfunction_sb_cRcR::synapse0x27ab540() {
   return (neuron0x279c6c0()*0.0588465);
}

double NNfunction_sb_cRcR::synapse0x27ab580() {
   return (neuron0x279ca00()*-0.0582938);
}

double NNfunction_sb_cRcR::synapse0x27ab5c0() {
   return (neuron0x279cd40()*0.0308563);
}

double NNfunction_sb_cRcR::synapse0x27ab600() {
   return (neuron0x279d080()*-0.105416);
}

double NNfunction_sb_cRcR::synapse0x27ab640() {
   return (neuron0x279d3c0()*2.49567);
}

double NNfunction_sb_cRcR::synapse0x27ab0d0() {
   return (neuron0x279d700()*0.011711);
}

double NNfunction_sb_cRcR::synapse0x27ab110() {
   return (neuron0x279dc60()*0.0169737);
}

double NNfunction_sb_cRcR::synapse0x27ab790() {
   return (neuron0x279de80()*0.0164303);
}

double NNfunction_sb_cRcR::synapse0x27ab7d0() {
   return (neuron0x279e1c0()*-0.001784);
}

double NNfunction_sb_cRcR::synapse0x27ab810() {
   return (neuron0x279e500()*-0.00768468);
}

double NNfunction_sb_cRcR::synapse0x27ab850() {
   return (neuron0x279e840()*-0.0293945);
}

double NNfunction_sb_cRcR::synapse0x27ab890() {
   return (neuron0x279eb80()*-0.0231434);
}

double NNfunction_sb_cRcR::synapse0x27ab8d0() {
   return (neuron0x279eec0()*0.103808);
}

double NNfunction_sb_cRcR::synapse0x27abc50() {
   return (neuron0x279a300()*0.6171);
}

double NNfunction_sb_cRcR::synapse0x27abc90() {
   return (neuron0x279a640()*1.12306);
}

double NNfunction_sb_cRcR::synapse0x27abcd0() {
   return (neuron0x279a980()*-0.580735);
}

double NNfunction_sb_cRcR::synapse0x27abd10() {
   return (neuron0x279acc0()*-0.446431);
}

double NNfunction_sb_cRcR::synapse0x27abd50() {
   return (neuron0x279b000()*0.202565);
}

double NNfunction_sb_cRcR::synapse0x27abd90() {
   return (neuron0x279b340()*0.360269);
}

double NNfunction_sb_cRcR::synapse0x27abdd0() {
   return (neuron0x279b680()*0.585776);
}

double NNfunction_sb_cRcR::synapse0x27abe10() {
   return (neuron0x279b9c0()*0.978472);
}

double NNfunction_sb_cRcR::synapse0x27abe50() {
   return (neuron0x279bd00()*-0.133525);
}

double NNfunction_sb_cRcR::synapse0x27abe90() {
   return (neuron0x279c040()*0.193755);
}

double NNfunction_sb_cRcR::synapse0x27abed0() {
   return (neuron0x279c380()*-0.549522);
}

double NNfunction_sb_cRcR::synapse0x27abf10() {
   return (neuron0x279c6c0()*-0.0255499);
}

double NNfunction_sb_cRcR::synapse0x27abf50() {
   return (neuron0x279ca00()*-0.570188);
}

double NNfunction_sb_cRcR::synapse0x27abf90() {
   return (neuron0x279cd40()*0.511428);
}

double NNfunction_sb_cRcR::synapse0x27abfd0() {
   return (neuron0x279d080()*0.10565);
}

double NNfunction_sb_cRcR::synapse0x27ac010() {
   return (neuron0x279d3c0()*-0.422516);
}

double NNfunction_sb_cRcR::synapse0x27abaa0() {
   return (neuron0x279d700()*0.608897);
}

double NNfunction_sb_cRcR::synapse0x27abae0() {
   return (neuron0x279dc60()*0.0187578);
}

double NNfunction_sb_cRcR::synapse0x27ac160() {
   return (neuron0x279de80()*0.742917);
}

double NNfunction_sb_cRcR::synapse0x27ac1a0() {
   return (neuron0x279e1c0()*0.569293);
}

double NNfunction_sb_cRcR::synapse0x27ac1e0() {
   return (neuron0x279e500()*-0.970174);
}

double NNfunction_sb_cRcR::synapse0x27ac220() {
   return (neuron0x279e840()*-0.814367);
}

double NNfunction_sb_cRcR::synapse0x27ac260() {
   return (neuron0x279eb80()*0.132041);
}

double NNfunction_sb_cRcR::synapse0x27ac2a0() {
   return (neuron0x279eec0()*-0.745927);
}

double NNfunction_sb_cRcR::synapse0x27ac620() {
   return (neuron0x279a300()*0.650341);
}

double NNfunction_sb_cRcR::synapse0x27ac660() {
   return (neuron0x279a640()*0.00323469);
}

double NNfunction_sb_cRcR::synapse0x27ac6a0() {
   return (neuron0x279a980()*-0.266918);
}

double NNfunction_sb_cRcR::synapse0x27ac6e0() {
   return (neuron0x279acc0()*0.983287);
}

double NNfunction_sb_cRcR::synapse0x27ac720() {
   return (neuron0x279b000()*-0.000765349);
}

double NNfunction_sb_cRcR::synapse0x27ac760() {
   return (neuron0x279b340()*0.374378);
}

double NNfunction_sb_cRcR::synapse0x27ac7a0() {
   return (neuron0x279b680()*0.331109);
}

double NNfunction_sb_cRcR::synapse0x27ac7e0() {
   return (neuron0x279b9c0()*-0.201621);
}

double NNfunction_sb_cRcR::synapse0x27ac820() {
   return (neuron0x279bd00()*0.0409056);
}

double NNfunction_sb_cRcR::synapse0x27ac860() {
   return (neuron0x279c040()*0.254522);
}

double NNfunction_sb_cRcR::synapse0x27ac8a0() {
   return (neuron0x279c380()*-0.102473);
}

double NNfunction_sb_cRcR::synapse0x27ac8e0() {
   return (neuron0x279c6c0()*0.423785);
}

double NNfunction_sb_cRcR::synapse0x27ac920() {
   return (neuron0x279ca00()*0.147558);
}

double NNfunction_sb_cRcR::synapse0x27ac960() {
   return (neuron0x279cd40()*-0.0224701);
}

double NNfunction_sb_cRcR::synapse0x27ac9a0() {
   return (neuron0x279d080()*-0.235089);
}

double NNfunction_sb_cRcR::synapse0x27ac9e0() {
   return (neuron0x279d3c0()*-0.445564);
}

double NNfunction_sb_cRcR::synapse0x27ac470() {
   return (neuron0x279d700()*-0.0883593);
}

double NNfunction_sb_cRcR::synapse0x27ac4b0() {
   return (neuron0x279dc60()*0.0924282);
}

double NNfunction_sb_cRcR::synapse0x27acb30() {
   return (neuron0x279de80()*0.0498839);
}

double NNfunction_sb_cRcR::synapse0x27acb70() {
   return (neuron0x279e1c0()*0.496416);
}

double NNfunction_sb_cRcR::synapse0x27acbb0() {
   return (neuron0x279e500()*-0.405966);
}

double NNfunction_sb_cRcR::synapse0x27acbf0() {
   return (neuron0x279e840()*0.370374);
}

double NNfunction_sb_cRcR::synapse0x27acc30() {
   return (neuron0x279eb80()*-0.185742);
}

double NNfunction_sb_cRcR::synapse0x27acc70() {
   return (neuron0x279eec0()*0.214615);
}

double NNfunction_sb_cRcR::synapse0x27acff0() {
   return (neuron0x279a300()*-0.256286);
}

double NNfunction_sb_cRcR::synapse0x27ad030() {
   return (neuron0x279a640()*0.036336);
}

double NNfunction_sb_cRcR::synapse0x27ad070() {
   return (neuron0x279a980()*0.208262);
}

double NNfunction_sb_cRcR::synapse0x27ad0b0() {
   return (neuron0x279acc0()*-0.335567);
}

double NNfunction_sb_cRcR::synapse0x27ad0f0() {
   return (neuron0x279b000()*-0.342922);
}

double NNfunction_sb_cRcR::synapse0x27ad130() {
   return (neuron0x279b340()*-0.445118);
}

double NNfunction_sb_cRcR::synapse0x27ad170() {
   return (neuron0x279b680()*0.27405);
}

double NNfunction_sb_cRcR::synapse0x27ad1b0() {
   return (neuron0x279b9c0()*-0.854118);
}

double NNfunction_sb_cRcR::synapse0x27ad1f0() {
   return (neuron0x279bd00()*-0.104921);
}

double NNfunction_sb_cRcR::synapse0x27ad230() {
   return (neuron0x279c040()*0.031679);
}

double NNfunction_sb_cRcR::synapse0x27ad270() {
   return (neuron0x279c380()*-0.261079);
}

double NNfunction_sb_cRcR::synapse0x27ad2b0() {
   return (neuron0x279c6c0()*-0.204799);
}

double NNfunction_sb_cRcR::synapse0x27ad2f0() {
   return (neuron0x279ca00()*0.620952);
}

double NNfunction_sb_cRcR::synapse0x27ad330() {
   return (neuron0x279cd40()*-0.0698251);
}

double NNfunction_sb_cRcR::synapse0x27ad370() {
   return (neuron0x279d080()*-0.0405687);
}

double NNfunction_sb_cRcR::synapse0x27ad3b0() {
   return (neuron0x279d3c0()*1.357);
}

double NNfunction_sb_cRcR::synapse0x27ace40() {
   return (neuron0x279d700()*-0.298625);
}

double NNfunction_sb_cRcR::synapse0x27ace80() {
   return (neuron0x279dc60()*-0.15528);
}

double NNfunction_sb_cRcR::synapse0x27ad500() {
   return (neuron0x279de80()*0.992662);
}

double NNfunction_sb_cRcR::synapse0x27ad540() {
   return (neuron0x279e1c0()*-0.0195214);
}

double NNfunction_sb_cRcR::synapse0x27ad580() {
   return (neuron0x279e500()*1.11186);
}

double NNfunction_sb_cRcR::synapse0x27ad5c0() {
   return (neuron0x279e840()*0.0462501);
}

double NNfunction_sb_cRcR::synapse0x27ad600() {
   return (neuron0x279eb80()*-0.0113167);
}

double NNfunction_sb_cRcR::synapse0x27ad640() {
   return (neuron0x279eec0()*0.419255);
}

double NNfunction_sb_cRcR::synapse0x27ad9c0() {
   return (neuron0x279a300()*0.123016);
}

double NNfunction_sb_cRcR::synapse0x27ada00() {
   return (neuron0x279a640()*-0.0288109);
}

double NNfunction_sb_cRcR::synapse0x27ada40() {
   return (neuron0x279a980()*0.123787);
}

double NNfunction_sb_cRcR::synapse0x27ada80() {
   return (neuron0x279acc0()*0.12748);
}

double NNfunction_sb_cRcR::synapse0x27adac0() {
   return (neuron0x279b000()*0.229545);
}

double NNfunction_sb_cRcR::synapse0x27adb00() {
   return (neuron0x279b340()*0.262571);
}

double NNfunction_sb_cRcR::synapse0x27adb40() {
   return (neuron0x279b680()*-0.488491);
}

double NNfunction_sb_cRcR::synapse0x27adb80() {
   return (neuron0x279b9c0()*0.152745);
}

double NNfunction_sb_cRcR::synapse0x27adbc0() {
   return (neuron0x279bd00()*-0.00177367);
}

double NNfunction_sb_cRcR::synapse0x27a5d80() {
   return (neuron0x279c040()*-0.0221882);
}

double NNfunction_sb_cRcR::synapse0x27a5dc0() {
   return (neuron0x279c380()*-0.0231011);
}

double NNfunction_sb_cRcR::synapse0x27a5e00() {
   return (neuron0x279c6c0()*0.0517072);
}

double NNfunction_sb_cRcR::synapse0x27a5e40() {
   return (neuron0x279ca00()*0.0419402);
}

double NNfunction_sb_cRcR::synapse0x27a5e80() {
   return (neuron0x279cd40()*-0.0340544);
}

double NNfunction_sb_cRcR::synapse0x27a5ec0() {
   return (neuron0x279d080()*-0.161314);
}

double NNfunction_sb_cRcR::synapse0x27a5f00() {
   return (neuron0x279d3c0()*-1.7997);
}

double NNfunction_sb_cRcR::synapse0x27ad810() {
   return (neuron0x279d700()*-0.288777);
}

double NNfunction_sb_cRcR::synapse0x27ad850() {
   return (neuron0x279dc60()*-0.00517633);
}

double NNfunction_sb_cRcR::synapse0x27a6050() {
   return (neuron0x279de80()*0.0262252);
}

double NNfunction_sb_cRcR::synapse0x27a6090() {
   return (neuron0x279e1c0()*-0.0302564);
}

double NNfunction_sb_cRcR::synapse0x27a60d0() {
   return (neuron0x279e500()*-0.031957);
}

double NNfunction_sb_cRcR::synapse0x27a6110() {
   return (neuron0x279e840()*0.0105204);
}

double NNfunction_sb_cRcR::synapse0x27a6150() {
   return (neuron0x279eb80()*-0.0428179);
}

double NNfunction_sb_cRcR::synapse0x27a6190() {
   return (neuron0x279eec0()*-0.00850918);
}

double NNfunction_sb_cRcR::synapse0x27a6510() {
   return (neuron0x279a300()*-0.231324);
}

double NNfunction_sb_cRcR::synapse0x27a6550() {
   return (neuron0x279a640()*-0.495377);
}

double NNfunction_sb_cRcR::synapse0x27a6590() {
   return (neuron0x279a980()*0.855788);
}

double NNfunction_sb_cRcR::synapse0x27a65d0() {
   return (neuron0x279acc0()*0.154092);
}

double NNfunction_sb_cRcR::synapse0x27a6610() {
   return (neuron0x279b000()*-0.0616636);
}

double NNfunction_sb_cRcR::synapse0x27a6650() {
   return (neuron0x279b340()*1.56948);
}

double NNfunction_sb_cRcR::synapse0x27a6690() {
   return (neuron0x279b680()*-0.904416);
}

double NNfunction_sb_cRcR::synapse0x27a66d0() {
   return (neuron0x279b9c0()*0.105076);
}

double NNfunction_sb_cRcR::synapse0x27a6710() {
   return (neuron0x279bd00()*0.198617);
}

double NNfunction_sb_cRcR::synapse0x27a6750() {
   return (neuron0x279c040()*-0.39249);
}

double NNfunction_sb_cRcR::synapse0x27a6790() {
   return (neuron0x279c380()*0.237484);
}

double NNfunction_sb_cRcR::synapse0x27a67d0() {
   return (neuron0x279c6c0()*-0.0152166);
}

double NNfunction_sb_cRcR::synapse0x27a6810() {
   return (neuron0x279ca00()*0.301821);
}

double NNfunction_sb_cRcR::synapse0x27a6850() {
   return (neuron0x279cd40()*0.265717);
}

double NNfunction_sb_cRcR::synapse0x27a6890() {
   return (neuron0x279d080()*1.30813);
}

double NNfunction_sb_cRcR::synapse0x27a68d0() {
   return (neuron0x279d3c0()*0.270485);
}

double NNfunction_sb_cRcR::synapse0x27a6360() {
   return (neuron0x279d700()*0.400485);
}

double NNfunction_sb_cRcR::synapse0x27a63a0() {
   return (neuron0x279dc60()*-0.370937);
}

double NNfunction_sb_cRcR::synapse0x27a6a20() {
   return (neuron0x279de80()*-0.347847);
}

double NNfunction_sb_cRcR::synapse0x27a6a60() {
   return (neuron0x279e1c0()*0.0580169);
}

double NNfunction_sb_cRcR::synapse0x27a6aa0() {
   return (neuron0x279e500()*-0.0557526);
}

double NNfunction_sb_cRcR::synapse0x27a6ae0() {
   return (neuron0x279e840()*0.841758);
}

double NNfunction_sb_cRcR::synapse0x27a6b20() {
   return (neuron0x279eb80()*0.577698);
}

double NNfunction_sb_cRcR::synapse0x27a6b60() {
   return (neuron0x279eec0()*-0.43469);
}

double NNfunction_sb_cRcR::synapse0x27a6d30() {
   return (neuron0x279a300()*-0.0775263);
}

double NNfunction_sb_cRcR::synapse0x27afdc0() {
   return (neuron0x279a640()*-0.125577);
}

double NNfunction_sb_cRcR::synapse0x27afe00() {
   return (neuron0x279a980()*-0.0627353);
}

double NNfunction_sb_cRcR::synapse0x27afe40() {
   return (neuron0x279acc0()*0.60938);
}

double NNfunction_sb_cRcR::synapse0x27afe80() {
   return (neuron0x279b000()*-0.121871);
}

double NNfunction_sb_cRcR::synapse0x27afec0() {
   return (neuron0x279b340()*-0.0435029);
}

double NNfunction_sb_cRcR::synapse0x27aff00() {
   return (neuron0x279b680()*-0.034329);
}

double NNfunction_sb_cRcR::synapse0x27aff40() {
   return (neuron0x279b9c0()*-0.153731);
}

double NNfunction_sb_cRcR::synapse0x27aff80() {
   return (neuron0x279bd00()*0.0644563);
}

double NNfunction_sb_cRcR::synapse0x27affc0() {
   return (neuron0x279c040()*-0.387772);
}

double NNfunction_sb_cRcR::synapse0x27b0000() {
   return (neuron0x279c380()*-0.465749);
}

double NNfunction_sb_cRcR::synapse0x27b0040() {
   return (neuron0x279c6c0()*0.141981);
}

double NNfunction_sb_cRcR::synapse0x27b0080() {
   return (neuron0x279ca00()*-0.0280564);
}

double NNfunction_sb_cRcR::synapse0x27b00c0() {
   return (neuron0x279cd40()*0.157286);
}

double NNfunction_sb_cRcR::synapse0x27b0100() {
   return (neuron0x279d080()*-0.0131535);
}

double NNfunction_sb_cRcR::synapse0x27b0140() {
   return (neuron0x279d3c0()*0.116482);
}

double NNfunction_sb_cRcR::synapse0x27afc10() {
   return (neuron0x279d700()*-0.292471);
}

double NNfunction_sb_cRcR::synapse0x27afc50() {
   return (neuron0x279dc60()*-0.696562);
}

double NNfunction_sb_cRcR::synapse0x27b0290() {
   return (neuron0x279de80()*0.487658);
}

double NNfunction_sb_cRcR::synapse0x27b02d0() {
   return (neuron0x279e1c0()*-0.234066);
}

double NNfunction_sb_cRcR::synapse0x27b0310() {
   return (neuron0x279e500()*0.0403119);
}

double NNfunction_sb_cRcR::synapse0x27b0350() {
   return (neuron0x279e840()*0.0320092);
}

double NNfunction_sb_cRcR::synapse0x27b0390() {
   return (neuron0x279eb80()*-0.0826173);
}

double NNfunction_sb_cRcR::synapse0x27b03d0() {
   return (neuron0x279eec0()*0.139647);
}

double NNfunction_sb_cRcR::synapse0x27b0750() {
   return (neuron0x279a300()*-0.0462055);
}

double NNfunction_sb_cRcR::synapse0x27b0790() {
   return (neuron0x279a640()*-0.434803);
}

double NNfunction_sb_cRcR::synapse0x27b07d0() {
   return (neuron0x279a980()*0.00512353);
}

double NNfunction_sb_cRcR::synapse0x27b0810() {
   return (neuron0x279acc0()*4.33841);
}

double NNfunction_sb_cRcR::synapse0x27b0850() {
   return (neuron0x279b000()*-0.000572294);
}

double NNfunction_sb_cRcR::synapse0x27b0890() {
   return (neuron0x279b340()*-0.0240025);
}

double NNfunction_sb_cRcR::synapse0x27b08d0() {
   return (neuron0x279b680()*-0.0812228);
}

double NNfunction_sb_cRcR::synapse0x27b0910() {
   return (neuron0x279b9c0()*0.0235237);
}

double NNfunction_sb_cRcR::synapse0x27b0950() {
   return (neuron0x279bd00()*-0.0650302);
}

double NNfunction_sb_cRcR::synapse0x27b0990() {
   return (neuron0x279c040()*0.0919682);
}

double NNfunction_sb_cRcR::synapse0x27b09d0() {
   return (neuron0x279c380()*-0.0737969);
}

double NNfunction_sb_cRcR::synapse0x27b0a10() {
   return (neuron0x279c6c0()*-0.0670499);
}

double NNfunction_sb_cRcR::synapse0x27b0a50() {
   return (neuron0x279ca00()*0.0173624);
}

double NNfunction_sb_cRcR::synapse0x27b0a90() {
   return (neuron0x279cd40()*-0.0754684);
}

double NNfunction_sb_cRcR::synapse0x27b0ad0() {
   return (neuron0x279d080()*-0.0716538);
}

double NNfunction_sb_cRcR::synapse0x27b0b10() {
   return (neuron0x279d3c0()*1.3738);
}

double NNfunction_sb_cRcR::synapse0x27b05a0() {
   return (neuron0x279d700()*0.0203067);
}

double NNfunction_sb_cRcR::synapse0x27b05e0() {
   return (neuron0x279dc60()*-0.0193006);
}

double NNfunction_sb_cRcR::synapse0x27b0c60() {
   return (neuron0x279de80()*-0.00860397);
}

double NNfunction_sb_cRcR::synapse0x27b0ca0() {
   return (neuron0x279e1c0()*0.131957);
}

double NNfunction_sb_cRcR::synapse0x27b0ce0() {
   return (neuron0x279e500()*-0.0553918);
}

double NNfunction_sb_cRcR::synapse0x27b0d20() {
   return (neuron0x279e840()*-0.0462989);
}

double NNfunction_sb_cRcR::synapse0x27b0d60() {
   return (neuron0x279eb80()*0.0049279);
}

double NNfunction_sb_cRcR::synapse0x27b0da0() {
   return (neuron0x279eec0()*-0.0807373);
}

double NNfunction_sb_cRcR::synapse0x27b1120() {
   return (neuron0x279a300()*0.173976);
}

double NNfunction_sb_cRcR::synapse0x27b1160() {
   return (neuron0x279a640()*0.407701);
}

double NNfunction_sb_cRcR::synapse0x27b11a0() {
   return (neuron0x279a980()*0.210136);
}

double NNfunction_sb_cRcR::synapse0x27b11e0() {
   return (neuron0x279acc0()*-0.914489);
}

double NNfunction_sb_cRcR::synapse0x27b1220() {
   return (neuron0x279b000()*-0.112852);
}

double NNfunction_sb_cRcR::synapse0x27b1260() {
   return (neuron0x279b340()*-0.105496);
}

double NNfunction_sb_cRcR::synapse0x27b12a0() {
   return (neuron0x279b680()*0.0161405);
}

double NNfunction_sb_cRcR::synapse0x27b12e0() {
   return (neuron0x279b9c0()*-0.446601);
}

double NNfunction_sb_cRcR::synapse0x27b1320() {
   return (neuron0x279bd00()*0.0249305);
}

double NNfunction_sb_cRcR::synapse0x27b1360() {
   return (neuron0x279c040()*-0.33101);
}

double NNfunction_sb_cRcR::synapse0x27b13a0() {
   return (neuron0x279c380()*-0.0363037);
}

double NNfunction_sb_cRcR::synapse0x27b13e0() {
   return (neuron0x279c6c0()*-0.377221);
}

double NNfunction_sb_cRcR::synapse0x27b1420() {
   return (neuron0x279ca00()*-0.219238);
}

double NNfunction_sb_cRcR::synapse0x27b1460() {
   return (neuron0x279cd40()*0.183165);
}

double NNfunction_sb_cRcR::synapse0x27b14a0() {
   return (neuron0x279d080()*-0.0742137);
}

double NNfunction_sb_cRcR::synapse0x27b14e0() {
   return (neuron0x279d3c0()*-0.508026);
}

double NNfunction_sb_cRcR::synapse0x27b0f70() {
   return (neuron0x279d700()*0.279574);
}

double NNfunction_sb_cRcR::synapse0x27b0fb0() {
   return (neuron0x279dc60()*-0.127787);
}

double NNfunction_sb_cRcR::synapse0x27b1630() {
   return (neuron0x279de80()*-0.230154);
}

double NNfunction_sb_cRcR::synapse0x27b1670() {
   return (neuron0x279e1c0()*0.173071);
}

double NNfunction_sb_cRcR::synapse0x27b16b0() {
   return (neuron0x279e500()*0.14893);
}

double NNfunction_sb_cRcR::synapse0x27b16f0() {
   return (neuron0x279e840()*-0.0344168);
}

double NNfunction_sb_cRcR::synapse0x27b1730() {
   return (neuron0x279eb80()*0.090808);
}

double NNfunction_sb_cRcR::synapse0x27b1770() {
   return (neuron0x279eec0()*-0.00404052);
}

double NNfunction_sb_cRcR::synapse0x27b1af0() {
   return (neuron0x279a300()*0.0933978);
}

double NNfunction_sb_cRcR::synapse0x27b1b30() {
   return (neuron0x279a640()*-0.376132);
}

double NNfunction_sb_cRcR::synapse0x27b1b70() {
   return (neuron0x279a980()*0.142853);
}

double NNfunction_sb_cRcR::synapse0x27b1bb0() {
   return (neuron0x279acc0()*-0.35429);
}

double NNfunction_sb_cRcR::synapse0x27b1bf0() {
   return (neuron0x279b000()*-0.0285019);
}

double NNfunction_sb_cRcR::synapse0x27b1c30() {
   return (neuron0x279b340()*0.0458156);
}

double NNfunction_sb_cRcR::synapse0x27b1c70() {
   return (neuron0x279b680()*-0.169435);
}

double NNfunction_sb_cRcR::synapse0x27b1cb0() {
   return (neuron0x279b9c0()*-0.0174791);
}

double NNfunction_sb_cRcR::synapse0x27b1cf0() {
   return (neuron0x279bd00()*-0.13963);
}

double NNfunction_sb_cRcR::synapse0x27b1d30() {
   return (neuron0x279c040()*0.724937);
}

double NNfunction_sb_cRcR::synapse0x27b1d70() {
   return (neuron0x279c380()*-0.329936);
}

double NNfunction_sb_cRcR::synapse0x27b1db0() {
   return (neuron0x279c6c0()*0.711937);
}

double NNfunction_sb_cRcR::synapse0x27b1df0() {
   return (neuron0x279ca00()*0.310738);
}

double NNfunction_sb_cRcR::synapse0x27b1e30() {
   return (neuron0x279cd40()*-0.150481);
}

double NNfunction_sb_cRcR::synapse0x27b1e70() {
   return (neuron0x279d080()*-0.0521605);
}

double NNfunction_sb_cRcR::synapse0x27b1eb0() {
   return (neuron0x279d3c0()*-0.68143);
}

double NNfunction_sb_cRcR::synapse0x27b1940() {
   return (neuron0x279d700()*-0.105748);
}

double NNfunction_sb_cRcR::synapse0x27b1980() {
   return (neuron0x279dc60()*-0.138299);
}

double NNfunction_sb_cRcR::synapse0x27b2000() {
   return (neuron0x279de80()*-0.291412);
}

double NNfunction_sb_cRcR::synapse0x27b2040() {
   return (neuron0x279e1c0()*-0.200535);
}

double NNfunction_sb_cRcR::synapse0x27b2080() {
   return (neuron0x279e500()*-0.00392463);
}

double NNfunction_sb_cRcR::synapse0x27b20c0() {
   return (neuron0x279e840()*-0.0539303);
}

double NNfunction_sb_cRcR::synapse0x27b2100() {
   return (neuron0x279eb80()*0.0242943);
}

double NNfunction_sb_cRcR::synapse0x27b2140() {
   return (neuron0x279eec0()*0.135468);
}

double NNfunction_sb_cRcR::synapse0x27b24c0() {
   return (neuron0x279a300()*-0.00386419);
}

double NNfunction_sb_cRcR::synapse0x27b2500() {
   return (neuron0x279a640()*0.300366);
}

double NNfunction_sb_cRcR::synapse0x27b2540() {
   return (neuron0x279a980()*0.294537);
}

double NNfunction_sb_cRcR::synapse0x27b2580() {
   return (neuron0x279acc0()*0.461429);
}

double NNfunction_sb_cRcR::synapse0x27b25c0() {
   return (neuron0x279b000()*-0.0540044);
}

double NNfunction_sb_cRcR::synapse0x27b2600() {
   return (neuron0x279b340()*0.140644);
}

double NNfunction_sb_cRcR::synapse0x27b2640() {
   return (neuron0x279b680()*-0.0378824);
}

double NNfunction_sb_cRcR::synapse0x27b2680() {
   return (neuron0x279b9c0()*-0.219933);
}

double NNfunction_sb_cRcR::synapse0x27b26c0() {
   return (neuron0x279bd00()*-0.42481);
}

double NNfunction_sb_cRcR::synapse0x27b2700() {
   return (neuron0x279c040()*0.185938);
}

double NNfunction_sb_cRcR::synapse0x27b2740() {
   return (neuron0x279c380()*-0.109894);
}

double NNfunction_sb_cRcR::synapse0x27b2780() {
   return (neuron0x279c6c0()*-0.675275);
}

double NNfunction_sb_cRcR::synapse0x27b27c0() {
   return (neuron0x279ca00()*0.347062);
}

double NNfunction_sb_cRcR::synapse0x27b2800() {
   return (neuron0x279cd40()*0.139292);
}

double NNfunction_sb_cRcR::synapse0x27b2840() {
   return (neuron0x279d080()*-0.170451);
}

double NNfunction_sb_cRcR::synapse0x27b2880() {
   return (neuron0x279d3c0()*-0.0910656);
}

double NNfunction_sb_cRcR::synapse0x27b2310() {
   return (neuron0x279d700()*0.0567805);
}

double NNfunction_sb_cRcR::synapse0x27b2350() {
   return (neuron0x279dc60()*0.203435);
}

double NNfunction_sb_cRcR::synapse0x27b29d0() {
   return (neuron0x279de80()*0.148191);
}

double NNfunction_sb_cRcR::synapse0x27b2a10() {
   return (neuron0x279e1c0()*-0.236707);
}

double NNfunction_sb_cRcR::synapse0x27b2a50() {
   return (neuron0x279e500()*0.0729535);
}

double NNfunction_sb_cRcR::synapse0x27b2a90() {
   return (neuron0x279e840()*-0.193362);
}

double NNfunction_sb_cRcR::synapse0x27b2ad0() {
   return (neuron0x279eb80()*-0.0257399);
}

double NNfunction_sb_cRcR::synapse0x27b2b10() {
   return (neuron0x279eec0()*-0.166679);
}

double NNfunction_sb_cRcR::synapse0x27b2e90() {
   return (neuron0x279a300()*0.10595);
}

double NNfunction_sb_cRcR::synapse0x27b2ed0() {
   return (neuron0x279a640()*-0.0988332);
}

double NNfunction_sb_cRcR::synapse0x27b2f10() {
   return (neuron0x279a980()*0.10195);
}

double NNfunction_sb_cRcR::synapse0x27b2f50() {
   return (neuron0x279acc0()*-0.533707);
}

double NNfunction_sb_cRcR::synapse0x27b2f90() {
   return (neuron0x279b000()*-0.678847);
}

double NNfunction_sb_cRcR::synapse0x27b2fd0() {
   return (neuron0x279b340()*-0.134489);
}

double NNfunction_sb_cRcR::synapse0x27b3010() {
   return (neuron0x279b680()*-0.0530627);
}

double NNfunction_sb_cRcR::synapse0x27b3050() {
   return (neuron0x279b9c0()*-0.186141);
}

double NNfunction_sb_cRcR::synapse0x27b3090() {
   return (neuron0x279bd00()*-0.0200138);
}

double NNfunction_sb_cRcR::synapse0x27b30d0() {
   return (neuron0x279c040()*0.0518469);
}

double NNfunction_sb_cRcR::synapse0x27b3110() {
   return (neuron0x279c380()*-0.0341337);
}

double NNfunction_sb_cRcR::synapse0x27b3150() {
   return (neuron0x279c6c0()*-0.151153);
}

double NNfunction_sb_cRcR::synapse0x27b3190() {
   return (neuron0x279ca00()*0.0579018);
}

double NNfunction_sb_cRcR::synapse0x27b31d0() {
   return (neuron0x279cd40()*-0.137192);
}

double NNfunction_sb_cRcR::synapse0x27b3210() {
   return (neuron0x279d080()*-0.499623);
}

double NNfunction_sb_cRcR::synapse0x27b3250() {
   return (neuron0x279d3c0()*2.88494);
}

double NNfunction_sb_cRcR::synapse0x27b2ce0() {
   return (neuron0x279d700()*-0.0353766);
}

double NNfunction_sb_cRcR::synapse0x27b2d20() {
   return (neuron0x279dc60()*-0.198166);
}

double NNfunction_sb_cRcR::synapse0x27b33a0() {
   return (neuron0x279de80()*-0.236175);
}

double NNfunction_sb_cRcR::synapse0x27b33e0() {
   return (neuron0x279e1c0()*0.163392);
}

double NNfunction_sb_cRcR::synapse0x27b3420() {
   return (neuron0x279e500()*-0.121257);
}

double NNfunction_sb_cRcR::synapse0x27b3460() {
   return (neuron0x279e840()*0.150949);
}

double NNfunction_sb_cRcR::synapse0x27b34a0() {
   return (neuron0x279eb80()*-0.0758794);
}

double NNfunction_sb_cRcR::synapse0x27b34e0() {
   return (neuron0x279eec0()*0.00579798);
}

double NNfunction_sb_cRcR::synapse0x27b3860() {
   return (neuron0x279a300()*0.119302);
}

double NNfunction_sb_cRcR::synapse0x27b38a0() {
   return (neuron0x279a640()*0.256785);
}

double NNfunction_sb_cRcR::synapse0x27b38e0() {
   return (neuron0x279a980()*-0.0625944);
}

double NNfunction_sb_cRcR::synapse0x27b3920() {
   return (neuron0x279acc0()*-0.834024);
}

double NNfunction_sb_cRcR::synapse0x27b3960() {
   return (neuron0x279b000()*0.174983);
}

double NNfunction_sb_cRcR::synapse0x27b39a0() {
   return (neuron0x279b340()*0.0272998);
}

double NNfunction_sb_cRcR::synapse0x27b39e0() {
   return (neuron0x279b680()*-0.0885409);
}

double NNfunction_sb_cRcR::synapse0x27b3a20() {
   return (neuron0x279b9c0()*0.0480768);
}

double NNfunction_sb_cRcR::synapse0x27b3a60() {
   return (neuron0x279bd00()*-0.273514);
}

double NNfunction_sb_cRcR::synapse0x27b3aa0() {
   return (neuron0x279c040()*-0.0214723);
}

double NNfunction_sb_cRcR::synapse0x27b3ae0() {
   return (neuron0x279c380()*0.147764);
}

double NNfunction_sb_cRcR::synapse0x27b3b20() {
   return (neuron0x279c6c0()*0.174071);
}

double NNfunction_sb_cRcR::synapse0x27b3b60() {
   return (neuron0x279ca00()*-0.000620543);
}

double NNfunction_sb_cRcR::synapse0x27b3ba0() {
   return (neuron0x279cd40()*0.152486);
}

double NNfunction_sb_cRcR::synapse0x27b3be0() {
   return (neuron0x279d080()*-0.0168313);
}

double NNfunction_sb_cRcR::synapse0x27b3c20() {
   return (neuron0x279d3c0()*0.333942);
}

double NNfunction_sb_cRcR::synapse0x27b36b0() {
   return (neuron0x279d700()*-0.00417207);
}

double NNfunction_sb_cRcR::synapse0x27b36f0() {
   return (neuron0x279dc60()*-0.132241);
}

double NNfunction_sb_cRcR::synapse0x27b3d70() {
   return (neuron0x279de80()*-0.339613);
}

double NNfunction_sb_cRcR::synapse0x27b3db0() {
   return (neuron0x279e1c0()*0.357144);
}

double NNfunction_sb_cRcR::synapse0x27b3df0() {
   return (neuron0x279e500()*0.241062);
}

double NNfunction_sb_cRcR::synapse0x27b3e30() {
   return (neuron0x279e840()*0.338982);
}

double NNfunction_sb_cRcR::synapse0x27b3e70() {
   return (neuron0x279eb80()*0.22708);
}

double NNfunction_sb_cRcR::synapse0x27b3eb0() {
   return (neuron0x279eec0()*-0.199289);
}

double NNfunction_sb_cRcR::synapse0x27b4230() {
   return (neuron0x279a300()*-0.0544409);
}

double NNfunction_sb_cRcR::synapse0x27b4270() {
   return (neuron0x279a640()*0.110018);
}

double NNfunction_sb_cRcR::synapse0x27b42b0() {
   return (neuron0x279a980()*-0.0307756);
}

double NNfunction_sb_cRcR::synapse0x27b42f0() {
   return (neuron0x279acc0()*1.47686);
}

double NNfunction_sb_cRcR::synapse0x27b4330() {
   return (neuron0x279b000()*0.0344144);
}

double NNfunction_sb_cRcR::synapse0x27b4370() {
   return (neuron0x279b340()*0.0144194);
}

double NNfunction_sb_cRcR::synapse0x27b43b0() {
   return (neuron0x279b680()*0.0159144);
}

double NNfunction_sb_cRcR::synapse0x27b43f0() {
   return (neuron0x279b9c0()*0.00331758);
}

double NNfunction_sb_cRcR::synapse0x27b4430() {
   return (neuron0x279bd00()*-0.102276);
}

double NNfunction_sb_cRcR::synapse0x27b4470() {
   return (neuron0x279c040()*0.119213);
}

double NNfunction_sb_cRcR::synapse0x27b44b0() {
   return (neuron0x279c380()*-0.116137);
}

double NNfunction_sb_cRcR::synapse0x27b44f0() {
   return (neuron0x279c6c0()*-0.0487878);
}

double NNfunction_sb_cRcR::synapse0x27b4530() {
   return (neuron0x279ca00()*-0.104465);
}

double NNfunction_sb_cRcR::synapse0x27b4570() {
   return (neuron0x279cd40()*-0.0594043);
}

double NNfunction_sb_cRcR::synapse0x27b45b0() {
   return (neuron0x279d080()*0.0604285);
}

double NNfunction_sb_cRcR::synapse0x27b45f0() {
   return (neuron0x279d3c0()*-0.556989);
}

double NNfunction_sb_cRcR::synapse0x27b4080() {
   return (neuron0x279d700()*-0.00591691);
}

double NNfunction_sb_cRcR::synapse0x27b40c0() {
   return (neuron0x279dc60()*0.0295004);
}

double NNfunction_sb_cRcR::synapse0x27b4740() {
   return (neuron0x279de80()*0.0462661);
}

double NNfunction_sb_cRcR::synapse0x27b4780() {
   return (neuron0x279e1c0()*0.0782145);
}

double NNfunction_sb_cRcR::synapse0x27b47c0() {
   return (neuron0x279e500()*0.00207988);
}

double NNfunction_sb_cRcR::synapse0x27b4800() {
   return (neuron0x279e840()*-0.0130642);
}

double NNfunction_sb_cRcR::synapse0x27b4840() {
   return (neuron0x279eb80()*-0.0299373);
}

double NNfunction_sb_cRcR::synapse0x27b4880() {
   return (neuron0x279eec0()*0.0055684);
}

double NNfunction_sb_cRcR::synapse0x27b4c00() {
   return (neuron0x279a300()*-0.00739035);
}

double NNfunction_sb_cRcR::synapse0x27a91d0() {
   return (neuron0x279a640()*0.0524935);
}

double NNfunction_sb_cRcR::synapse0x27a9210() {
   return (neuron0x279a980()*-0.00924381);
}

double NNfunction_sb_cRcR::synapse0x27a9250() {
   return (neuron0x279acc0()*-2.92536);
}

double NNfunction_sb_cRcR::synapse0x27a94a0() {
   return (neuron0x279b000()*0.0121378);
}

double NNfunction_sb_cRcR::synapse0x27a94e0() {
   return (neuron0x279b340()*0.0185953);
}

double NNfunction_sb_cRcR::synapse0x27a9520() {
   return (neuron0x279b680()*0.0243713);
}

double NNfunction_sb_cRcR::synapse0x27a9770() {
   return (neuron0x279b9c0()*0.0116335);
}

double NNfunction_sb_cRcR::synapse0x27a97b0() {
   return (neuron0x279bd00()*-0.0278791);
}

double NNfunction_sb_cRcR::synapse0x27a9a00() {
   return (neuron0x279c040()*0.0369174);
}

double NNfunction_sb_cRcR::synapse0x27a9a40() {
   return (neuron0x279c380()*-0.032484);
}

double NNfunction_sb_cRcR::synapse0x27a9a80() {
   return (neuron0x279c6c0()*-0.0381071);
}

double NNfunction_sb_cRcR::synapse0x27a9cd0() {
   return (neuron0x279ca00()*-0.0156263);
}

double NNfunction_sb_cRcR::synapse0x27a9d10() {
   return (neuron0x279cd40()*0.00199604);
}

double NNfunction_sb_cRcR::synapse0x27a9f60() {
   return (neuron0x279d080()*-0.00540108);
}

double NNfunction_sb_cRcR::synapse0x27a9fa0() {
   return (neuron0x279d3c0()*0.449587);
}

double NNfunction_sb_cRcR::synapse0x27b4a50() {
   return (neuron0x279d700()*0.0223695);
}

double NNfunction_sb_cRcR::synapse0x27b4a90() {
   return (neuron0x279dc60()*0.00783124);
}

double NNfunction_sb_cRcR::synapse0x27aa0f0() {
   return (neuron0x279de80()*0.0373068);
}

double NNfunction_sb_cRcR::synapse0x27aa600() {
   return (neuron0x279e1c0()*0.0455033);
}

double NNfunction_sb_cRcR::synapse0x27aa640() {
   return (neuron0x279e500()*-0.0231916);
}

double NNfunction_sb_cRcR::synapse0x27aa680() {
   return (neuron0x279e840()*-0.0187605);
}

double NNfunction_sb_cRcR::synapse0x27aa8d0() {
   return (neuron0x279eb80()*-0.0200842);
}

double NNfunction_sb_cRcR::synapse0x27aa910() {
   return (neuron0x279eec0()*-0.0178939);
}

double NNfunction_sb_cRcR::synapse0x27aa1c0() {
   return (neuron0x279a300()*-0.192289);
}

double NNfunction_sb_cRcR::synapse0x27aa200() {
   return (neuron0x279a640()*-0.507456);
}

double NNfunction_sb_cRcR::synapse0x27aa240() {
   return (neuron0x279a980()*0.034992);
}

double NNfunction_sb_cRcR::synapse0x27aa280() {
   return (neuron0x279acc0()*-1.05801);
}

double NNfunction_sb_cRcR::synapse0x27aac00() {
   return (neuron0x279b000()*0.197899);
}

double NNfunction_sb_cRcR::synapse0x27b6f50() {
   return (neuron0x279b340()*-0.0949247);
}

double NNfunction_sb_cRcR::synapse0x27b6f90() {
   return (neuron0x279b680()*0.411464);
}

double NNfunction_sb_cRcR::synapse0x27b6fd0() {
   return (neuron0x279b9c0()*-0.279884);
}

double NNfunction_sb_cRcR::synapse0x27b7010() {
   return (neuron0x279bd00()*-0.182608);
}

double NNfunction_sb_cRcR::synapse0x27b7050() {
   return (neuron0x279c040()*0.235892);
}

double NNfunction_sb_cRcR::synapse0x27b7090() {
   return (neuron0x279c380()*0.340697);
}

double NNfunction_sb_cRcR::synapse0x27b70d0() {
   return (neuron0x279c6c0()*-0.624679);
}

double NNfunction_sb_cRcR::synapse0x27b7110() {
   return (neuron0x279ca00()*-0.409461);
}

double NNfunction_sb_cRcR::synapse0x27b7150() {
   return (neuron0x279cd40()*0.636094);
}

double NNfunction_sb_cRcR::synapse0x27b7190() {
   return (neuron0x279d080()*-0.134954);
}

double NNfunction_sb_cRcR::synapse0x27b71d0() {
   return (neuron0x279d3c0()*0.311745);
}

double NNfunction_sb_cRcR::synapse0x27aaae0() {
   return (neuron0x279d700()*0.247753);
}

double NNfunction_sb_cRcR::synapse0x27aab20() {
   return (neuron0x279dc60()*0.253945);
}

double NNfunction_sb_cRcR::synapse0x27b7320() {
   return (neuron0x279de80()*-0.487185);
}

double NNfunction_sb_cRcR::synapse0x27b7360() {
   return (neuron0x279e1c0()*-0.50947);
}

double NNfunction_sb_cRcR::synapse0x27b73a0() {
   return (neuron0x279e500()*0.148591);
}

double NNfunction_sb_cRcR::synapse0x27b73e0() {
   return (neuron0x279e840()*0.449273);
}

double NNfunction_sb_cRcR::synapse0x27b7420() {
   return (neuron0x279eb80()*-0.216596);
}

double NNfunction_sb_cRcR::synapse0x27b7460() {
   return (neuron0x279eec0()*-0.0497386);
}

double NNfunction_sb_cRcR::synapse0x27b77e0() {
   return (neuron0x279a300()*0.0199102);
}

double NNfunction_sb_cRcR::synapse0x27b7820() {
   return (neuron0x279a640()*-0.00914723);
}

double NNfunction_sb_cRcR::synapse0x27b7860() {
   return (neuron0x279a980()*0.0147956);
}

double NNfunction_sb_cRcR::synapse0x27b78a0() {
   return (neuron0x279acc0()*-0.0589333);
}

double NNfunction_sb_cRcR::synapse0x27b78e0() {
   return (neuron0x279b000()*0.0888634);
}

double NNfunction_sb_cRcR::synapse0x27b7920() {
   return (neuron0x279b340()*0.00375809);
}

double NNfunction_sb_cRcR::synapse0x27b7960() {
   return (neuron0x279b680()*-0.0935958);
}

double NNfunction_sb_cRcR::synapse0x27b79a0() {
   return (neuron0x279b9c0()*-0.158052);
}

double NNfunction_sb_cRcR::synapse0x27b79e0() {
   return (neuron0x279bd00()*-0.0253242);
}

double NNfunction_sb_cRcR::synapse0x27b7a20() {
   return (neuron0x279c040()*-0.0223488);
}

double NNfunction_sb_cRcR::synapse0x27b7a60() {
   return (neuron0x279c380()*-0.00937128);
}

double NNfunction_sb_cRcR::synapse0x27b7aa0() {
   return (neuron0x279c6c0()*-0.0116135);
}

double NNfunction_sb_cRcR::synapse0x27b7ae0() {
   return (neuron0x279ca00()*-0.0034863);
}

double NNfunction_sb_cRcR::synapse0x27b7b20() {
   return (neuron0x279cd40()*0.0076122);
}

double NNfunction_sb_cRcR::synapse0x27b7b60() {
   return (neuron0x279d080()*0.0816782);
}

double NNfunction_sb_cRcR::synapse0x27b7ba0() {
   return (neuron0x279d3c0()*4.22675);
}

double NNfunction_sb_cRcR::synapse0x27b7630() {
   return (neuron0x279d700()*-0.00287726);
}

double NNfunction_sb_cRcR::synapse0x27b7670() {
   return (neuron0x279dc60()*0.02331);
}

double NNfunction_sb_cRcR::synapse0x27b7cf0() {
   return (neuron0x279de80()*0.00724808);
}

double NNfunction_sb_cRcR::synapse0x27b7d30() {
   return (neuron0x279e1c0()*0.0141083);
}

double NNfunction_sb_cRcR::synapse0x27b7d70() {
   return (neuron0x279e500()*-0.00840411);
}

double NNfunction_sb_cRcR::synapse0x27b7db0() {
   return (neuron0x279e840()*0.00422424);
}

double NNfunction_sb_cRcR::synapse0x27b7df0() {
   return (neuron0x279eb80()*0.00370443);
}

double NNfunction_sb_cRcR::synapse0x27b7e30() {
   return (neuron0x279eec0()*0.00466579);
}

double NNfunction_sb_cRcR::synapse0x27b81b0() {
   return (neuron0x279a300()*0.108879);
}

double NNfunction_sb_cRcR::synapse0x27b81f0() {
   return (neuron0x279a640()*-0.574947);
}

double NNfunction_sb_cRcR::synapse0x27b8230() {
   return (neuron0x279a980()*0.0332843);
}

double NNfunction_sb_cRcR::synapse0x27b8270() {
   return (neuron0x279acc0()*1.28348);
}

double NNfunction_sb_cRcR::synapse0x27b82b0() {
   return (neuron0x279b000()*0.0135231);
}

double NNfunction_sb_cRcR::synapse0x27b82f0() {
   return (neuron0x279b340()*-0.0359666);
}

double NNfunction_sb_cRcR::synapse0x27b8330() {
   return (neuron0x279b680()*0.0508453);
}

double NNfunction_sb_cRcR::synapse0x27b8370() {
   return (neuron0x279b9c0()*-0.0109653);
}

double NNfunction_sb_cRcR::synapse0x27b83b0() {
   return (neuron0x279bd00()*0.0561943);
}

double NNfunction_sb_cRcR::synapse0x27b83f0() {
   return (neuron0x279c040()*-0.0493964);
}

double NNfunction_sb_cRcR::synapse0x27b8430() {
   return (neuron0x279c380()*0.021743);
}

double NNfunction_sb_cRcR::synapse0x27b8470() {
   return (neuron0x279c6c0()*-0.00723824);
}

double NNfunction_sb_cRcR::synapse0x27b84b0() {
   return (neuron0x279ca00()*-0.185365);
}

double NNfunction_sb_cRcR::synapse0x27b84f0() {
   return (neuron0x279cd40()*0.0719706);
}

double NNfunction_sb_cRcR::synapse0x27b8530() {
   return (neuron0x279d080()*0.0335164);
}

double NNfunction_sb_cRcR::synapse0x27b8570() {
   return (neuron0x279d3c0()*0.204761);
}

double NNfunction_sb_cRcR::synapse0x27b8000() {
   return (neuron0x279d700()*0.112922);
}

double NNfunction_sb_cRcR::synapse0x27b8040() {
   return (neuron0x279dc60()*-0.001068);
}

double NNfunction_sb_cRcR::synapse0x27b86c0() {
   return (neuron0x279de80()*-0.0320267);
}

double NNfunction_sb_cRcR::synapse0x27b8700() {
   return (neuron0x279e1c0()*-0.0738014);
}

double NNfunction_sb_cRcR::synapse0x27b8740() {
   return (neuron0x279e500()*0.0504863);
}

double NNfunction_sb_cRcR::synapse0x27b8780() {
   return (neuron0x279e840()*0.00518888);
}

double NNfunction_sb_cRcR::synapse0x27b87c0() {
   return (neuron0x279eb80()*0.0614876);
}

double NNfunction_sb_cRcR::synapse0x27b8800() {
   return (neuron0x279eec0()*-0.0922893);
}

double NNfunction_sb_cRcR::synapse0x27b8b80() {
   return (neuron0x279a300()*-0.00470407);
}

double NNfunction_sb_cRcR::synapse0x27b8bc0() {
   return (neuron0x279a640()*0.0404517);
}

double NNfunction_sb_cRcR::synapse0x27b8c00() {
   return (neuron0x279a980()*-0.00239639);
}

double NNfunction_sb_cRcR::synapse0x27b8c40() {
   return (neuron0x279acc0()*5.25394);
}

double NNfunction_sb_cRcR::synapse0x27b8c80() {
   return (neuron0x279b000()*-0.0371128);
}

double NNfunction_sb_cRcR::synapse0x27b8cc0() {
   return (neuron0x279b340()*-0.0184227);
}

double NNfunction_sb_cRcR::synapse0x27b8d00() {
   return (neuron0x279b680()*0.0344684);
}

double NNfunction_sb_cRcR::synapse0x27b8d40() {
   return (neuron0x279b9c0()*0.0110253);
}

double NNfunction_sb_cRcR::synapse0x27b8d80() {
   return (neuron0x279bd00()*-0.0681792);
}

double NNfunction_sb_cRcR::synapse0x27b8dc0() {
   return (neuron0x279c040()*-0.055287);
}

double NNfunction_sb_cRcR::synapse0x27b8e00() {
   return (neuron0x279c380()*0.00816805);
}

double NNfunction_sb_cRcR::synapse0x27b8e40() {
   return (neuron0x279c6c0()*0.0601207);
}

double NNfunction_sb_cRcR::synapse0x27b8e80() {
   return (neuron0x279ca00()*-0.0407957);
}

double NNfunction_sb_cRcR::synapse0x27b8ec0() {
   return (neuron0x279cd40()*-0.0128558);
}

double NNfunction_sb_cRcR::synapse0x27b8f00() {
   return (neuron0x279d080()*0.0553725);
}

double NNfunction_sb_cRcR::synapse0x27b8f40() {
   return (neuron0x279d3c0()*-1.99826);
}

double NNfunction_sb_cRcR::synapse0x27b89d0() {
   return (neuron0x279d700()*-0.00564157);
}

double NNfunction_sb_cRcR::synapse0x27b8a10() {
   return (neuron0x279dc60()*-0.0950975);
}

double NNfunction_sb_cRcR::synapse0x27b9090() {
   return (neuron0x279de80()*-0.00649954);
}

double NNfunction_sb_cRcR::synapse0x27b90d0() {
   return (neuron0x279e1c0()*-0.03127);
}

double NNfunction_sb_cRcR::synapse0x27b9110() {
   return (neuron0x279e500()*0.0133295);
}

double NNfunction_sb_cRcR::synapse0x27b9150() {
   return (neuron0x279e840()*-0.0183486);
}

double NNfunction_sb_cRcR::synapse0x27b9190() {
   return (neuron0x279eb80()*0.0183431);
}

double NNfunction_sb_cRcR::synapse0x27b91d0() {
   return (neuron0x279eec0()*-0.000797635);
}

double NNfunction_sb_cRcR::synapse0x27b9550() {
   return (neuron0x279a300()*0.138589);
}

double NNfunction_sb_cRcR::synapse0x27b9590() {
   return (neuron0x279a640()*-0.0257134);
}

double NNfunction_sb_cRcR::synapse0x27b95d0() {
   return (neuron0x279a980()*-0.0120331);
}

double NNfunction_sb_cRcR::synapse0x27b9610() {
   return (neuron0x279acc0()*0.825315);
}

double NNfunction_sb_cRcR::synapse0x27b9650() {
   return (neuron0x279b000()*-0.0819783);
}

double NNfunction_sb_cRcR::synapse0x27b9690() {
   return (neuron0x279b340()*-0.313695);
}

double NNfunction_sb_cRcR::synapse0x27b96d0() {
   return (neuron0x279b680()*-0.0580733);
}

double NNfunction_sb_cRcR::synapse0x27b9710() {
   return (neuron0x279b9c0()*0.140059);
}

double NNfunction_sb_cRcR::synapse0x27b9750() {
   return (neuron0x279bd00()*0.107973);
}

double NNfunction_sb_cRcR::synapse0x27b9790() {
   return (neuron0x279c040()*0.26988);
}

double NNfunction_sb_cRcR::synapse0x27b97d0() {
   return (neuron0x279c380()*0.00604732);
}

double NNfunction_sb_cRcR::synapse0x27b9810() {
   return (neuron0x279c6c0()*0.727318);
}

double NNfunction_sb_cRcR::synapse0x27b9850() {
   return (neuron0x279ca00()*0.11685);
}

double NNfunction_sb_cRcR::synapse0x27b9890() {
   return (neuron0x279cd40()*0.0413639);
}

double NNfunction_sb_cRcR::synapse0x27b98d0() {
   return (neuron0x279d080()*0.0296092);
}

double NNfunction_sb_cRcR::synapse0x27b9910() {
   return (neuron0x279d3c0()*-0.824725);
}

double NNfunction_sb_cRcR::synapse0x27b93a0() {
   return (neuron0x279d700()*-0.0844772);
}

double NNfunction_sb_cRcR::synapse0x27b93e0() {
   return (neuron0x279dc60()*0.00217968);
}

double NNfunction_sb_cRcR::synapse0x27b9a60() {
   return (neuron0x279de80()*0.313978);
}

double NNfunction_sb_cRcR::synapse0x27b9aa0() {
   return (neuron0x279e1c0()*0.154567);
}

double NNfunction_sb_cRcR::synapse0x27b9ae0() {
   return (neuron0x279e500()*0.112703);
}

double NNfunction_sb_cRcR::synapse0x27b9b20() {
   return (neuron0x279e840()*0.109337);
}

double NNfunction_sb_cRcR::synapse0x27b9b60() {
   return (neuron0x279eb80()*-0.0091673);
}

double NNfunction_sb_cRcR::synapse0x27b9ba0() {
   return (neuron0x279eec0()*-0.116904);
}

double NNfunction_sb_cRcR::synapse0x27b9f20() {
   return (neuron0x279a300()*0.000954825);
}

double NNfunction_sb_cRcR::synapse0x27b9f60() {
   return (neuron0x279a640()*-0.021524);
}

double NNfunction_sb_cRcR::synapse0x27b9fa0() {
   return (neuron0x279a980()*0.0160224);
}

double NNfunction_sb_cRcR::synapse0x27b9fe0() {
   return (neuron0x279acc0()*-0.0493214);
}

double NNfunction_sb_cRcR::synapse0x27ba020() {
   return (neuron0x279b000()*-0.235144);
}

double NNfunction_sb_cRcR::synapse0x27ba060() {
   return (neuron0x279b340()*0.237791);
}

double NNfunction_sb_cRcR::synapse0x27ba0a0() {
   return (neuron0x279b680()*0.0130868);
}

double NNfunction_sb_cRcR::synapse0x27ba0e0() {
   return (neuron0x279b9c0()*-0.0438455);
}

double NNfunction_sb_cRcR::synapse0x27ba120() {
   return (neuron0x279bd00()*0.0257775);
}

double NNfunction_sb_cRcR::synapse0x27ba160() {
   return (neuron0x279c040()*0.00987746);
}

double NNfunction_sb_cRcR::synapse0x27ba1a0() {
   return (neuron0x279c380()*0.0264116);
}

double NNfunction_sb_cRcR::synapse0x27ba1e0() {
   return (neuron0x279c6c0()*0.0444807);
}

double NNfunction_sb_cRcR::synapse0x27ba220() {
   return (neuron0x279ca00()*0.0374511);
}

double NNfunction_sb_cRcR::synapse0x27ba260() {
   return (neuron0x279cd40()*0.0249424);
}

double NNfunction_sb_cRcR::synapse0x27ba2a0() {
   return (neuron0x279d080()*0.12852);
}

double NNfunction_sb_cRcR::synapse0x27ba2e0() {
   return (neuron0x279d3c0()*-0.58028);
}

double NNfunction_sb_cRcR::synapse0x27b9d70() {
   return (neuron0x279d700()*-0.0365889);
}

double NNfunction_sb_cRcR::synapse0x27b9db0() {
   return (neuron0x279dc60()*0.0400559);
}

double NNfunction_sb_cRcR::synapse0x27ba430() {
   return (neuron0x279de80()*0.0394454);
}

double NNfunction_sb_cRcR::synapse0x27ba470() {
   return (neuron0x279e1c0()*0.0154031);
}

double NNfunction_sb_cRcR::synapse0x27ba4b0() {
   return (neuron0x279e500()*-0.011586);
}

double NNfunction_sb_cRcR::synapse0x27ba4f0() {
   return (neuron0x279e840()*-0.00828867);
}

double NNfunction_sb_cRcR::synapse0x27ba530() {
   return (neuron0x279eb80()*-0.000927839);
}

double NNfunction_sb_cRcR::synapse0x27ba570() {
   return (neuron0x279eec0()*0.0107507);
}

double NNfunction_sb_cRcR::synapse0x27ba8f0() {
   return (neuron0x279a300()*0.0123437);
}

double NNfunction_sb_cRcR::synapse0x27ba930() {
   return (neuron0x279a640()*0.102816);
}

double NNfunction_sb_cRcR::synapse0x27ba970() {
   return (neuron0x279a980()*-0.0509339);
}

double NNfunction_sb_cRcR::synapse0x27ba9b0() {
   return (neuron0x279acc0()*-0.611836);
}

double NNfunction_sb_cRcR::synapse0x27ba9f0() {
   return (neuron0x279b000()*-0.08364);
}

double NNfunction_sb_cRcR::synapse0x27baa30() {
   return (neuron0x279b340()*-0.0801837);
}

double NNfunction_sb_cRcR::synapse0x27baa70() {
   return (neuron0x279b680()*0.0456625);
}

double NNfunction_sb_cRcR::synapse0x27baab0() {
   return (neuron0x279b9c0()*-0.016788);
}

double NNfunction_sb_cRcR::synapse0x27baaf0() {
   return (neuron0x279bd00()*-0.474445);
}

double NNfunction_sb_cRcR::synapse0x27bab30() {
   return (neuron0x279c040()*0.130565);
}

double NNfunction_sb_cRcR::synapse0x27bab70() {
   return (neuron0x279c380()*0.121823);
}

double NNfunction_sb_cRcR::synapse0x27babb0() {
   return (neuron0x279c6c0()*0.128513);
}

double NNfunction_sb_cRcR::synapse0x27babf0() {
   return (neuron0x279ca00()*-0.276679);
}

double NNfunction_sb_cRcR::synapse0x27bac30() {
   return (neuron0x279cd40()*0.00251038);
}

double NNfunction_sb_cRcR::synapse0x27bac70() {
   return (neuron0x279d080()*-0.0332868);
}

double NNfunction_sb_cRcR::synapse0x27bacb0() {
   return (neuron0x279d3c0()*0.305172);
}

double NNfunction_sb_cRcR::synapse0x27ba740() {
   return (neuron0x279d700()*-0.0250525);
}

double NNfunction_sb_cRcR::synapse0x27ba780() {
   return (neuron0x279dc60()*-0.0535716);
}

double NNfunction_sb_cRcR::synapse0x27bae00() {
   return (neuron0x279de80()*0.200642);
}

double NNfunction_sb_cRcR::synapse0x27bae40() {
   return (neuron0x279e1c0()*0.1063);
}

double NNfunction_sb_cRcR::synapse0x27bae80() {
   return (neuron0x279e500()*-0.00172754);
}

double NNfunction_sb_cRcR::synapse0x27baec0() {
   return (neuron0x279e840()*-0.000205949);
}

double NNfunction_sb_cRcR::synapse0x27baf00() {
   return (neuron0x279eb80()*-0.019383);
}

double NNfunction_sb_cRcR::synapse0x27baf40() {
   return (neuron0x279eec0()*-0.0316729);
}

double NNfunction_sb_cRcR::synapse0x27bb2c0() {
   return (neuron0x279a300()*0.677922);
}

double NNfunction_sb_cRcR::synapse0x27bb300() {
   return (neuron0x279a640()*0.118363);
}

double NNfunction_sb_cRcR::synapse0x27bb340() {
   return (neuron0x279a980()*0.443732);
}

double NNfunction_sb_cRcR::synapse0x27bb380() {
   return (neuron0x279acc0()*-0.347692);
}

double NNfunction_sb_cRcR::synapse0x27bb3c0() {
   return (neuron0x279b000()*0.411706);
}

double NNfunction_sb_cRcR::synapse0x27bb400() {
   return (neuron0x279b340()*1.67817);
}

double NNfunction_sb_cRcR::synapse0x27bb440() {
   return (neuron0x279b680()*0.99992);
}

double NNfunction_sb_cRcR::synapse0x27bb480() {
   return (neuron0x279b9c0()*0.675737);
}

double NNfunction_sb_cRcR::synapse0x27bb4c0() {
   return (neuron0x279bd00()*-0.211908);
}

double NNfunction_sb_cRcR::synapse0x27bb500() {
   return (neuron0x279c040()*-0.228828);
}

double NNfunction_sb_cRcR::synapse0x27bb540() {
   return (neuron0x279c380()*-0.53911);
}

double NNfunction_sb_cRcR::synapse0x27bb580() {
   return (neuron0x279c6c0()*-0.568614);
}

double NNfunction_sb_cRcR::synapse0x27bb5c0() {
   return (neuron0x279ca00()*-0.360575);
}

double NNfunction_sb_cRcR::synapse0x27bb600() {
   return (neuron0x279cd40()*-0.0157215);
}

double NNfunction_sb_cRcR::synapse0x27bb640() {
   return (neuron0x279d080()*-0.752441);
}

double NNfunction_sb_cRcR::synapse0x27bb680() {
   return (neuron0x279d3c0()*0.883467);
}

double NNfunction_sb_cRcR::synapse0x27bb110() {
   return (neuron0x279d700()*-0.387597);
}

double NNfunction_sb_cRcR::synapse0x27bb150() {
   return (neuron0x279dc60()*-0.180236);
}

double NNfunction_sb_cRcR::synapse0x27bb7d0() {
   return (neuron0x279de80()*-0.773611);
}

double NNfunction_sb_cRcR::synapse0x27bb810() {
   return (neuron0x279e1c0()*-0.132765);
}

double NNfunction_sb_cRcR::synapse0x27bb850() {
   return (neuron0x279e500()*-0.5777);
}

double NNfunction_sb_cRcR::synapse0x27bb890() {
   return (neuron0x279e840()*0.495124);
}

double NNfunction_sb_cRcR::synapse0x27bb8d0() {
   return (neuron0x279eb80()*-0.0748332);
}

double NNfunction_sb_cRcR::synapse0x27bb910() {
   return (neuron0x279eec0()*0.194144);
}

double NNfunction_sb_cRcR::synapse0x27a43c0() {
   return (neuron0x279a300()*0.436526);
}

double NNfunction_sb_cRcR::synapse0x27a4400() {
   return (neuron0x279a640()*-0.114458);
}

double NNfunction_sb_cRcR::synapse0x27a4440() {
   return (neuron0x279a980()*0.0346526);
}

double NNfunction_sb_cRcR::synapse0x27a4480() {
   return (neuron0x279acc0()*-0.284272);
}

double NNfunction_sb_cRcR::synapse0x27a44c0() {
   return (neuron0x279b000()*0.0936732);
}

double NNfunction_sb_cRcR::synapse0x27a4500() {
   return (neuron0x279b340()*-0.327624);
}

double NNfunction_sb_cRcR::synapse0x27a4540() {
   return (neuron0x279b680()*-1.37814);
}

double NNfunction_sb_cRcR::synapse0x27a4580() {
   return (neuron0x279b9c0()*-0.641463);
}

double NNfunction_sb_cRcR::synapse0x27bc0a0() {
   return (neuron0x279bd00()*-0.114279);
}

double NNfunction_sb_cRcR::synapse0x27bc0e0() {
   return (neuron0x279c040()*-0.020299);
}

double NNfunction_sb_cRcR::synapse0x27bc120() {
   return (neuron0x279c380()*-0.315455);
}

double NNfunction_sb_cRcR::synapse0x27bc160() {
   return (neuron0x279c6c0()*-0.13397);
}

double NNfunction_sb_cRcR::synapse0x27bc1a0() {
   return (neuron0x279ca00()*-0.0387971);
}

double NNfunction_sb_cRcR::synapse0x27bc1e0() {
   return (neuron0x279cd40()*-0.0661205);
}

double NNfunction_sb_cRcR::synapse0x27bc220() {
   return (neuron0x279d080()*-0.00195691);
}

double NNfunction_sb_cRcR::synapse0x27bc260() {
   return (neuron0x279d3c0()*0.614554);
}

double NNfunction_sb_cRcR::synapse0x27bbae0() {
   return (neuron0x279d700()*-0.239188);
}

double NNfunction_sb_cRcR::synapse0x27bbb20() {
   return (neuron0x279dc60()*-0.00652819);
}

double NNfunction_sb_cRcR::synapse0x27bc3b0() {
   return (neuron0x279de80()*0.0062762);
}

double NNfunction_sb_cRcR::synapse0x27bc3f0() {
   return (neuron0x279e1c0()*0.246956);
}

double NNfunction_sb_cRcR::synapse0x27bc430() {
   return (neuron0x279e500()*0.0215233);
}

double NNfunction_sb_cRcR::synapse0x27bc470() {
   return (neuron0x279e840()*0.133687);
}

double NNfunction_sb_cRcR::synapse0x27bc4b0() {
   return (neuron0x279eb80()*0.159467);
}

double NNfunction_sb_cRcR::synapse0x27bc4f0() {
   return (neuron0x279eec0()*-0.207001);
}

double NNfunction_sb_cRcR::synapse0x27bc870() {
   return (neuron0x279a300()*0.132761);
}

double NNfunction_sb_cRcR::synapse0x27bc8b0() {
   return (neuron0x279a640()*-0.490248);
}

double NNfunction_sb_cRcR::synapse0x27bc8f0() {
   return (neuron0x279a980()*0.724111);
}

double NNfunction_sb_cRcR::synapse0x27bc930() {
   return (neuron0x279acc0()*0.317093);
}

double NNfunction_sb_cRcR::synapse0x27bc970() {
   return (neuron0x279b000()*0.127909);
}

double NNfunction_sb_cRcR::synapse0x27bc9b0() {
   return (neuron0x279b340()*0.385501);
}

double NNfunction_sb_cRcR::synapse0x27bc9f0() {
   return (neuron0x279b680()*-0.127759);
}

double NNfunction_sb_cRcR::synapse0x27bca30() {
   return (neuron0x279b9c0()*-0.107353);
}

double NNfunction_sb_cRcR::synapse0x27bca70() {
   return (neuron0x279bd00()*0.438942);
}

double NNfunction_sb_cRcR::synapse0x27bcab0() {
   return (neuron0x279c040()*-0.374399);
}

double NNfunction_sb_cRcR::synapse0x27bcaf0() {
   return (neuron0x279c380()*0.182836);
}

double NNfunction_sb_cRcR::synapse0x27bcb30() {
   return (neuron0x279c6c0()*0.269233);
}

double NNfunction_sb_cRcR::synapse0x27bcb70() {
   return (neuron0x279ca00()*-0.313014);
}

double NNfunction_sb_cRcR::synapse0x27bcbb0() {
   return (neuron0x279cd40()*0.0621933);
}

double NNfunction_sb_cRcR::synapse0x27bcbf0() {
   return (neuron0x279d080()*-0.298571);
}

double NNfunction_sb_cRcR::synapse0x27bcc30() {
   return (neuron0x279d3c0()*-0.822188);
}

double NNfunction_sb_cRcR::synapse0x27bc6c0() {
   return (neuron0x279d700()*-0.03492);
}

double NNfunction_sb_cRcR::synapse0x27bc700() {
   return (neuron0x279dc60()*-0.21304);
}

double NNfunction_sb_cRcR::synapse0x27bcd80() {
   return (neuron0x279de80()*-0.410455);
}

double NNfunction_sb_cRcR::synapse0x27bcdc0() {
   return (neuron0x279e1c0()*1.07333);
}

double NNfunction_sb_cRcR::synapse0x27bce00() {
   return (neuron0x279e500()*0.0948469);
}

double NNfunction_sb_cRcR::synapse0x27bce40() {
   return (neuron0x279e840()*-0.070243);
}

double NNfunction_sb_cRcR::synapse0x27bce80() {
   return (neuron0x279eb80()*-0.309451);
}

double NNfunction_sb_cRcR::synapse0x27bcec0() {
   return (neuron0x279eec0()*-0.0985897);
}

double NNfunction_sb_cRcR::synapse0x27bd240() {
   return (neuron0x279a300()*-0.0327926);
}

double NNfunction_sb_cRcR::synapse0x27bd280() {
   return (neuron0x279a640()*-0.0797183);
}

double NNfunction_sb_cRcR::synapse0x27bd2c0() {
   return (neuron0x279a980()*0.0226287);
}

double NNfunction_sb_cRcR::synapse0x27bd300() {
   return (neuron0x279acc0()*0.533464);
}

double NNfunction_sb_cRcR::synapse0x27bd340() {
   return (neuron0x279b000()*0.0104477);
}

double NNfunction_sb_cRcR::synapse0x27bd380() {
   return (neuron0x279b340()*-0.000803959);
}

double NNfunction_sb_cRcR::synapse0x27bd3c0() {
   return (neuron0x279b680()*-0.0581046);
}

double NNfunction_sb_cRcR::synapse0x27bd400() {
   return (neuron0x279b9c0()*0.0897605);
}

double NNfunction_sb_cRcR::synapse0x27bd440() {
   return (neuron0x279bd00()*-0.14182);
}

double NNfunction_sb_cRcR::synapse0x27bd480() {
   return (neuron0x279c040()*-0.288469);
}

double NNfunction_sb_cRcR::synapse0x27bd4c0() {
   return (neuron0x279c380()*0.472679);
}

double NNfunction_sb_cRcR::synapse0x27bd500() {
   return (neuron0x279c6c0()*0.452701);
}

double NNfunction_sb_cRcR::synapse0x27bd540() {
   return (neuron0x279ca00()*-0.17828);
}

double NNfunction_sb_cRcR::synapse0x27bd580() {
   return (neuron0x279cd40()*0.0449973);
}

double NNfunction_sb_cRcR::synapse0x27bd5c0() {
   return (neuron0x279d080()*0.0114933);
}

double NNfunction_sb_cRcR::synapse0x27bd600() {
   return (neuron0x279d3c0()*-0.785088);
}

double NNfunction_sb_cRcR::synapse0x27bd090() {
   return (neuron0x279d700()*-0.142524);
}

double NNfunction_sb_cRcR::synapse0x27bd0d0() {
   return (neuron0x279dc60()*0.448948);
}

double NNfunction_sb_cRcR::synapse0x27adc00() {
   return (neuron0x279de80()*0.0449646);
}

double NNfunction_sb_cRcR::synapse0x27adc40() {
   return (neuron0x279e1c0()*-0.239449);
}

double NNfunction_sb_cRcR::synapse0x27adc80() {
   return (neuron0x279e500()*0.0323096);
}

double NNfunction_sb_cRcR::synapse0x27adcc0() {
   return (neuron0x279e840()*-0.0908624);
}

double NNfunction_sb_cRcR::synapse0x27add00() {
   return (neuron0x279eb80()*0.0859521);
}

double NNfunction_sb_cRcR::synapse0x27add40() {
   return (neuron0x279eec0()*0.061118);
}

double NNfunction_sb_cRcR::synapse0x27ae0c0() {
   return (neuron0x279a300()*-0.290959);
}

double NNfunction_sb_cRcR::synapse0x27ae100() {
   return (neuron0x279a640()*-0.258373);
}

double NNfunction_sb_cRcR::synapse0x27ae140() {
   return (neuron0x279a980()*-0.105425);
}

double NNfunction_sb_cRcR::synapse0x27ae180() {
   return (neuron0x279acc0()*1.21225);
}

double NNfunction_sb_cRcR::synapse0x27ae1c0() {
   return (neuron0x279b000()*-0.407456);
}

double NNfunction_sb_cRcR::synapse0x27ae200() {
   return (neuron0x279b340()*-0.224522);
}

double NNfunction_sb_cRcR::synapse0x27ae240() {
   return (neuron0x279b680()*0.0934449);
}

double NNfunction_sb_cRcR::synapse0x27ae280() {
   return (neuron0x279b9c0()*0.0450331);
}

double NNfunction_sb_cRcR::synapse0x27ae2c0() {
   return (neuron0x279bd00()*0.147509);
}

double NNfunction_sb_cRcR::synapse0x27ae300() {
   return (neuron0x279c040()*-0.204312);
}

double NNfunction_sb_cRcR::synapse0x27ae340() {
   return (neuron0x279c380()*-0.558164);
}

double NNfunction_sb_cRcR::synapse0x27ae380() {
   return (neuron0x279c6c0()*-0.725871);
}

double NNfunction_sb_cRcR::synapse0x27ae3c0() {
   return (neuron0x279ca00()*-0.33164);
}

double NNfunction_sb_cRcR::synapse0x27ae400() {
   return (neuron0x279cd40()*0.1115);
}

double NNfunction_sb_cRcR::synapse0x27ae440() {
   return (neuron0x279d080()*-0.0601246);
}

double NNfunction_sb_cRcR::synapse0x27ae480() {
   return (neuron0x279d3c0()*0.0763624);
}

double NNfunction_sb_cRcR::synapse0x27adf10() {
   return (neuron0x279d700()*0.299455);
}

double NNfunction_sb_cRcR::synapse0x27adf50() {
   return (neuron0x279dc60()*0.132114);
}

double NNfunction_sb_cRcR::synapse0x27ae5d0() {
   return (neuron0x279de80()*-0.604049);
}

double NNfunction_sb_cRcR::synapse0x27ae610() {
   return (neuron0x279e1c0()*0.492309);
}

double NNfunction_sb_cRcR::synapse0x27ae650() {
   return (neuron0x279e500()*0.601607);
}

double NNfunction_sb_cRcR::synapse0x27ae690() {
   return (neuron0x279e840()*-0.29366);
}

double NNfunction_sb_cRcR::synapse0x27ae6d0() {
   return (neuron0x279eb80()*0.313957);
}

double NNfunction_sb_cRcR::synapse0x27ae710() {
   return (neuron0x279eec0()*-0.254362);
}

double NNfunction_sb_cRcR::synapse0x27aea90() {
   return (neuron0x279a300()*0.0864624);
}

double NNfunction_sb_cRcR::synapse0x27aead0() {
   return (neuron0x279a640()*0.230463);
}

double NNfunction_sb_cRcR::synapse0x27aeb10() {
   return (neuron0x279a980()*0.0351558);
}

double NNfunction_sb_cRcR::synapse0x27aeb50() {
   return (neuron0x279acc0()*0.596798);
}

double NNfunction_sb_cRcR::synapse0x27aeb90() {
   return (neuron0x279b000()*0.17762);
}

double NNfunction_sb_cRcR::synapse0x27aebd0() {
   return (neuron0x279b340()*-0.00784802);
}

double NNfunction_sb_cRcR::synapse0x27aec10() {
   return (neuron0x279b680()*-0.0437942);
}

double NNfunction_sb_cRcR::synapse0x27aec50() {
   return (neuron0x279b9c0()*-0.00719503);
}

double NNfunction_sb_cRcR::synapse0x27aec90() {
   return (neuron0x279bd00()*-0.404184);
}

double NNfunction_sb_cRcR::synapse0x27aecd0() {
   return (neuron0x279c040()*-0.324901);
}

double NNfunction_sb_cRcR::synapse0x27aed10() {
   return (neuron0x279c380()*-0.0115348);
}

double NNfunction_sb_cRcR::synapse0x27aed50() {
   return (neuron0x279c6c0()*-0.030001);
}

double NNfunction_sb_cRcR::synapse0x27aed90() {
   return (neuron0x279ca00()*0.17434);
}

double NNfunction_sb_cRcR::synapse0x27aedd0() {
   return (neuron0x279cd40()*0.0026813);
}

double NNfunction_sb_cRcR::synapse0x27aee10() {
   return (neuron0x279d080()*0.00827036);
}

double NNfunction_sb_cRcR::synapse0x27aee50() {
   return (neuron0x279d3c0()*-0.827147);
}

double NNfunction_sb_cRcR::synapse0x27ae8e0() {
   return (neuron0x279d700()*0.0369809);
}

double NNfunction_sb_cRcR::synapse0x27ae920() {
   return (neuron0x279dc60()*-0.450041);
}

double NNfunction_sb_cRcR::synapse0x27aefa0() {
   return (neuron0x279de80()*-0.1659);
}

double NNfunction_sb_cRcR::synapse0x27aefe0() {
   return (neuron0x279e1c0()*-0.282251);
}

double NNfunction_sb_cRcR::synapse0x27af020() {
   return (neuron0x279e500()*-0.0789972);
}

double NNfunction_sb_cRcR::synapse0x27af060() {
   return (neuron0x279e840()*0.0102247);
}

double NNfunction_sb_cRcR::synapse0x27af0a0() {
   return (neuron0x279eb80()*-0.0474939);
}

double NNfunction_sb_cRcR::synapse0x27af0e0() {
   return (neuron0x279eec0()*-0.0147772);
}

double NNfunction_sb_cRcR::synapse0x27af460() {
   return (neuron0x279a300()*-0.263342);
}

double NNfunction_sb_cRcR::synapse0x27af4a0() {
   return (neuron0x279a640()*-0.0217034);
}

double NNfunction_sb_cRcR::synapse0x27af4e0() {
   return (neuron0x279a980()*-0.157773);
}

double NNfunction_sb_cRcR::synapse0x27af520() {
   return (neuron0x279acc0()*-0.0742373);
}

double NNfunction_sb_cRcR::synapse0x27af560() {
   return (neuron0x279b000()*-0.154098);
}

double NNfunction_sb_cRcR::synapse0x27af5a0() {
   return (neuron0x279b340()*0.00503371);
}

double NNfunction_sb_cRcR::synapse0x27af5e0() {
   return (neuron0x279b680()*-0.541572);
}

double NNfunction_sb_cRcR::synapse0x27af620() {
   return (neuron0x279b9c0()*-0.402372);
}

double NNfunction_sb_cRcR::synapse0x27af660() {
   return (neuron0x279bd00()*0.0660024);
}

double NNfunction_sb_cRcR::synapse0x27af6a0() {
   return (neuron0x279c040()*0.143245);
}

double NNfunction_sb_cRcR::synapse0x27af6e0() {
   return (neuron0x279c380()*0.104373);
}

double NNfunction_sb_cRcR::synapse0x27af720() {
   return (neuron0x279c6c0()*0.154419);
}

double NNfunction_sb_cRcR::synapse0x27af760() {
   return (neuron0x279ca00()*0.0689241);
}

double NNfunction_sb_cRcR::synapse0x27af7a0() {
   return (neuron0x279cd40()*0.0162432);
}

double NNfunction_sb_cRcR::synapse0x27af7e0() {
   return (neuron0x279d080()*0.140978);
}

double NNfunction_sb_cRcR::synapse0x27af820() {
   return (neuron0x279d3c0()*-1.63334);
}

double NNfunction_sb_cRcR::synapse0x27af2b0() {
   return (neuron0x279d700()*0.248261);
}

double NNfunction_sb_cRcR::synapse0x27af2f0() {
   return (neuron0x279dc60()*-0.081575);
}

double NNfunction_sb_cRcR::synapse0x27af970() {
   return (neuron0x279de80()*0.0199528);
}

double NNfunction_sb_cRcR::synapse0x27af9b0() {
   return (neuron0x279e1c0()*0.0211047);
}

double NNfunction_sb_cRcR::synapse0x27af9f0() {
   return (neuron0x279e500()*-0.10747);
}

double NNfunction_sb_cRcR::synapse0x27afa30() {
   return (neuron0x279e840()*-0.116634);
}

double NNfunction_sb_cRcR::synapse0x27afa70() {
   return (neuron0x279eb80()*-0.0912343);
}

double NNfunction_sb_cRcR::synapse0x27afab0() {
   return (neuron0x279eec0()*0.367453);
}

double NNfunction_sb_cRcR::synapse0x27c1980() {
   return (neuron0x279a300()*-0.194018);
}

double NNfunction_sb_cRcR::synapse0x27c19c0() {
   return (neuron0x279a640()*-0.387401);
}

double NNfunction_sb_cRcR::synapse0x27c1a00() {
   return (neuron0x279a980()*0.0400294);
}

double NNfunction_sb_cRcR::synapse0x27c1a40() {
   return (neuron0x279acc0()*-0.0350255);
}

double NNfunction_sb_cRcR::synapse0x27c1a80() {
   return (neuron0x279b000()*-0.355633);
}

double NNfunction_sb_cRcR::synapse0x27c1ac0() {
   return (neuron0x279b340()*-1.65784);
}

double NNfunction_sb_cRcR::synapse0x27c1b00() {
   return (neuron0x279b680()*1.39745);
}

double NNfunction_sb_cRcR::synapse0x27c1b40() {
   return (neuron0x279b9c0()*-0.0921569);
}

double NNfunction_sb_cRcR::synapse0x27c1b80() {
   return (neuron0x279bd00()*0.355076);
}

double NNfunction_sb_cRcR::synapse0x27c1bc0() {
   return (neuron0x279c040()*-0.560373);
}

double NNfunction_sb_cRcR::synapse0x27c1c00() {
   return (neuron0x279c380()*-0.571486);
}

double NNfunction_sb_cRcR::synapse0x27c1c40() {
   return (neuron0x279c6c0()*0.0209725);
}

double NNfunction_sb_cRcR::synapse0x27c1c80() {
   return (neuron0x279ca00()*0.450513);
}

double NNfunction_sb_cRcR::synapse0x27c1cc0() {
   return (neuron0x279cd40()*-0.143519);
}

double NNfunction_sb_cRcR::synapse0x27c1d00() {
   return (neuron0x279d080()*-0.0750266);
}

double NNfunction_sb_cRcR::synapse0x27c1d40() {
   return (neuron0x279d3c0()*0.347913);
}

double NNfunction_sb_cRcR::synapse0x27afaf0() {
   return (neuron0x279d700()*-0.0282664);
}

double NNfunction_sb_cRcR::synapse0x27afb30() {
   return (neuron0x279dc60()*-0.0733875);
}

double NNfunction_sb_cRcR::synapse0x27c1e90() {
   return (neuron0x279de80()*-0.638074);
}

double NNfunction_sb_cRcR::synapse0x27c1ed0() {
   return (neuron0x279e1c0()*0.28204);
}

double NNfunction_sb_cRcR::synapse0x27c1f10() {
   return (neuron0x279e500()*-1.41818);
}

double NNfunction_sb_cRcR::synapse0x27c1f50() {
   return (neuron0x279e840()*0.739517);
}

double NNfunction_sb_cRcR::synapse0x27c1f90() {
   return (neuron0x279eb80()*0.763925);
}

double NNfunction_sb_cRcR::synapse0x27c1fd0() {
   return (neuron0x279eec0()*-0.0321738);
}

double NNfunction_sb_cRcR::synapse0x27c2350() {
   return (neuron0x279a300()*-0.0771855);
}

double NNfunction_sb_cRcR::synapse0x27c2390() {
   return (neuron0x279a640()*0.0920135);
}

double NNfunction_sb_cRcR::synapse0x27c23d0() {
   return (neuron0x279a980()*-0.0949703);
}

double NNfunction_sb_cRcR::synapse0x27c2410() {
   return (neuron0x279acc0()*0.38424);
}

double NNfunction_sb_cRcR::synapse0x27c2450() {
   return (neuron0x279b000()*-0.32342);
}

double NNfunction_sb_cRcR::synapse0x27c2490() {
   return (neuron0x279b340()*0.158066);
}

double NNfunction_sb_cRcR::synapse0x27c24d0() {
   return (neuron0x279b680()*-0.0365033);
}

double NNfunction_sb_cRcR::synapse0x27c2510() {
   return (neuron0x279b9c0()*-0.0762021);
}

double NNfunction_sb_cRcR::synapse0x27c2550() {
   return (neuron0x279bd00()*-0.238925);
}

double NNfunction_sb_cRcR::synapse0x27c2590() {
   return (neuron0x279c040()*-0.0760886);
}

double NNfunction_sb_cRcR::synapse0x27c25d0() {
   return (neuron0x279c380()*-0.171398);
}

double NNfunction_sb_cRcR::synapse0x27c2610() {
   return (neuron0x279c6c0()*-0.408788);
}

double NNfunction_sb_cRcR::synapse0x27c2650() {
   return (neuron0x279ca00()*-0.0262053);
}

double NNfunction_sb_cRcR::synapse0x27c2690() {
   return (neuron0x279cd40()*0.0799785);
}

double NNfunction_sb_cRcR::synapse0x27c26d0() {
   return (neuron0x279d080()*-0.249811);
}

double NNfunction_sb_cRcR::synapse0x27c2710() {
   return (neuron0x279d3c0()*0.0262924);
}

double NNfunction_sb_cRcR::synapse0x27c21a0() {
   return (neuron0x279d700()*0.0377162);
}

double NNfunction_sb_cRcR::synapse0x27c21e0() {
   return (neuron0x279dc60()*-0.330653);
}

double NNfunction_sb_cRcR::synapse0x27c2860() {
   return (neuron0x279de80()*-0.157426);
}

double NNfunction_sb_cRcR::synapse0x27c28a0() {
   return (neuron0x279e1c0()*0.360119);
}

double NNfunction_sb_cRcR::synapse0x27c28e0() {
   return (neuron0x279e500()*-0.0804942);
}

double NNfunction_sb_cRcR::synapse0x27c2920() {
   return (neuron0x279e840()*-0.120794);
}

double NNfunction_sb_cRcR::synapse0x27c2960() {
   return (neuron0x279eb80()*0.130909);
}

double NNfunction_sb_cRcR::synapse0x27c29a0() {
   return (neuron0x279eec0()*-0.12308);
}

double NNfunction_sb_cRcR::synapse0x27c2d20() {
   return (neuron0x279a300()*0.343677);
}

double NNfunction_sb_cRcR::synapse0x27c2d60() {
   return (neuron0x279a640()*0.00801103);
}

double NNfunction_sb_cRcR::synapse0x27c2da0() {
   return (neuron0x279a980()*-0.222317);
}

double NNfunction_sb_cRcR::synapse0x27c2de0() {
   return (neuron0x279acc0()*-0.257674);
}

double NNfunction_sb_cRcR::synapse0x27c2e20() {
   return (neuron0x279b000()*0.610321);
}

double NNfunction_sb_cRcR::synapse0x27c2e60() {
   return (neuron0x279b340()*0.312287);
}

double NNfunction_sb_cRcR::synapse0x27c2ea0() {
   return (neuron0x279b680()*0.179777);
}

double NNfunction_sb_cRcR::synapse0x27c2ee0() {
   return (neuron0x279b9c0()*0.502321);
}

double NNfunction_sb_cRcR::synapse0x27c2f20() {
   return (neuron0x279bd00()*-0.0355197);
}

double NNfunction_sb_cRcR::synapse0x27c2f60() {
   return (neuron0x279c040()*0.0184782);
}

double NNfunction_sb_cRcR::synapse0x27c2fa0() {
   return (neuron0x279c380()*0.222217);
}

double NNfunction_sb_cRcR::synapse0x27c2fe0() {
   return (neuron0x279c6c0()*0.160196);
}

double NNfunction_sb_cRcR::synapse0x27c3020() {
   return (neuron0x279ca00()*0.142169);
}

double NNfunction_sb_cRcR::synapse0x27c3060() {
   return (neuron0x279cd40()*0.0552423);
}

double NNfunction_sb_cRcR::synapse0x27c30a0() {
   return (neuron0x279d080()*0.00114068);
}

double NNfunction_sb_cRcR::synapse0x27c30e0() {
   return (neuron0x279d3c0()*0.308791);
}

double NNfunction_sb_cRcR::synapse0x27c2b70() {
   return (neuron0x279d700()*0.496564);
}

double NNfunction_sb_cRcR::synapse0x27c2bb0() {
   return (neuron0x279dc60()*0.111511);
}

double NNfunction_sb_cRcR::synapse0x27c3230() {
   return (neuron0x279de80()*0.0255053);
}

double NNfunction_sb_cRcR::synapse0x27c3270() {
   return (neuron0x279e1c0()*-0.0254547);
}

double NNfunction_sb_cRcR::synapse0x27c32b0() {
   return (neuron0x279e500()*-0.272712);
}

double NNfunction_sb_cRcR::synapse0x27c32f0() {
   return (neuron0x279e840()*0.0221966);
}

double NNfunction_sb_cRcR::synapse0x27c3330() {
   return (neuron0x279eb80()*-0.0421752);
}

double NNfunction_sb_cRcR::synapse0x27c3370() {
   return (neuron0x279eec0()*0.0423925);
}

double NNfunction_sb_cRcR::synapse0x27c36f0() {
   return (neuron0x279a300()*0.533466);
}

double NNfunction_sb_cRcR::synapse0x27c3730() {
   return (neuron0x279a640()*-0.396986);
}

double NNfunction_sb_cRcR::synapse0x27c3770() {
   return (neuron0x279a980()*0.103148);
}

double NNfunction_sb_cRcR::synapse0x27c37b0() {
   return (neuron0x279acc0()*0.338133);
}

double NNfunction_sb_cRcR::synapse0x27c37f0() {
   return (neuron0x279b000()*-0.0382803);
}

double NNfunction_sb_cRcR::synapse0x27c3830() {
   return (neuron0x279b340()*-0.087111);
}

double NNfunction_sb_cRcR::synapse0x27c3870() {
   return (neuron0x279b680()*-0.494534);
}

double NNfunction_sb_cRcR::synapse0x27c38b0() {
   return (neuron0x279b9c0()*-0.0468927);
}

double NNfunction_sb_cRcR::synapse0x27c38f0() {
   return (neuron0x279bd00()*-0.400881);
}

double NNfunction_sb_cRcR::synapse0x27c3930() {
   return (neuron0x279c040()*0.340311);
}

double NNfunction_sb_cRcR::synapse0x27c3970() {
   return (neuron0x279c380()*-1.12714);
}

double NNfunction_sb_cRcR::synapse0x27c39b0() {
   return (neuron0x279c6c0()*-0.305753);
}

double NNfunction_sb_cRcR::synapse0x27c39f0() {
   return (neuron0x279ca00()*-0.268047);
}

double NNfunction_sb_cRcR::synapse0x27c3a30() {
   return (neuron0x279cd40()*-0.195684);
}

double NNfunction_sb_cRcR::synapse0x27c3a70() {
   return (neuron0x279d080()*-0.260112);
}

double NNfunction_sb_cRcR::synapse0x27c3ab0() {
   return (neuron0x279d3c0()*0.0588308);
}

double NNfunction_sb_cRcR::synapse0x27c3540() {
   return (neuron0x279d700()*-0.484281);
}

double NNfunction_sb_cRcR::synapse0x27c3580() {
   return (neuron0x279dc60()*0.404465);
}

double NNfunction_sb_cRcR::synapse0x27c3c00() {
   return (neuron0x279de80()*0.123769);
}

double NNfunction_sb_cRcR::synapse0x27c3c40() {
   return (neuron0x279e1c0()*0.426016);
}

double NNfunction_sb_cRcR::synapse0x27c3c80() {
   return (neuron0x279e500()*0.173872);
}

double NNfunction_sb_cRcR::synapse0x27c3cc0() {
   return (neuron0x279e840()*0.478023);
}

double NNfunction_sb_cRcR::synapse0x27c3d00() {
   return (neuron0x279eb80()*0.344412);
}

double NNfunction_sb_cRcR::synapse0x27c3d40() {
   return (neuron0x279eec0()*-0.0714378);
}

double NNfunction_sb_cRcR::synapse0x2563c50() {
   return (neuron0x279f330()*0.127627);
}

double NNfunction_sb_cRcR::synapse0x2563c90() {
   return (neuron0x279fc80()*0.11942);
}

double NNfunction_sb_cRcR::synapse0x27a17f0() {
   return (neuron0x27a0760()*0.102497);
}

double NNfunction_sb_cRcR::synapse0x27a1830() {
   return (neuron0x27a0200()*-1.26631);
}

double NNfunction_sb_cRcR::synapse0x27a21c0() {
   return (neuron0x27a1540()*-1.26307);
}

double NNfunction_sb_cRcR::synapse0x27a2200() {
   return (neuron0x27a1f10()*0.480692);
}

double NNfunction_sb_cRcR::synapse0x27a2f90() {
   return (neuron0x27a2ce0()*3.3238);
}

double NNfunction_sb_cRcR::synapse0x27a2fd0() {
   return (neuron0x27a36b0()*-1.71107);
}

double NNfunction_sb_cRcR::synapse0x27a3960() {
   return (neuron0x27a4080()*0.160521);
}

double NNfunction_sb_cRcR::synapse0x27a39a0() {
   return (neuron0x27a4b60()*-0.211523);
}

double NNfunction_sb_cRcR::synapse0x27a4330() {
   return (neuron0x27a5530()*0.558565);
}

double NNfunction_sb_cRcR::synapse0x27a4370() {
   return (neuron0x27a2610()*2.55774);
}

double NNfunction_sb_cRcR::synapse0x27a4e10() {
   return (neuron0x27a70e0()*-0.0578424);
}

double NNfunction_sb_cRcR::synapse0x27a4e50() {
   return (neuron0x27a7ab0()*-0.0994175);
}

double NNfunction_sb_cRcR::synapse0x27a57e0() {
   return (neuron0x27a8480()*-1.53377);
}

double NNfunction_sb_cRcR::synapse0x27a5820() {
   return (neuron0x27a8e50()*1.26944);
}

double NNfunction_sb_cRcR::synapse0x27a28c0() {
   return (neuron0x27aac60()*0.238141);
}

double NNfunction_sb_cRcR::synapse0x27a2900() {
   return (neuron0x27aaf40()*1.14817);
}

double NNfunction_sb_cRcR::synapse0x27a7390() {
   return (neuron0x27ab910()*-0.121582);
}

double NNfunction_sb_cRcR::synapse0x27a73d0() {
   return (neuron0x27ac2e0()*0.0461416);
}

double NNfunction_sb_cRcR::synapse0x27a7d60() {
   return (neuron0x27accb0()*-0.359355);
}

double NNfunction_sb_cRcR::synapse0x27a7da0() {
   return (neuron0x27ad680()*-1.35451);
}

double NNfunction_sb_cRcR::synapse0x27a8730() {
   return (neuron0x27a61d0()*-0.0624708);
}

double NNfunction_sb_cRcR::synapse0x27a8770() {
   return (neuron0x27a6ba0()*-0.448908);
}

double NNfunction_sb_cRcR::synapse0x27a9100() {
   return (neuron0x27b0410()*2.4395);
}

double NNfunction_sb_cRcR::synapse0x27a9140() {
   return (neuron0x27b0de0()*1.30369);
}

double NNfunction_sb_cRcR::synapse0x279d2a0() {
   return (neuron0x27b17b0()*0.979709);
}

double NNfunction_sb_cRcR::synapse0x279d2e0() {
   return (neuron0x27b2180()*-0.791343);
}

double NNfunction_sb_cRcR::synapse0x27ab1f0() {
   return (neuron0x27b2b50()*0.224658);
}

double NNfunction_sb_cRcR::synapse0x27ab230() {
   return (neuron0x27b3520()*1.04302);
}

double NNfunction_sb_cRcR::synapse0x27abbc0() {
   return (neuron0x27b3ef0()*2.01317);
}

double NNfunction_sb_cRcR::synapse0x27abc00() {
   return (neuron0x27b48c0()*-0.0954055);
}

double NNfunction_sb_cRcR::synapse0x27ac590() {
   return (neuron0x27aa950()*0.370878);
}

double NNfunction_sb_cRcR::synapse0x27ac5d0() {
   return (neuron0x27b74a0()*1.29884);
}

double NNfunction_sb_cRcR::synapse0x27acf60() {
   return (neuron0x27b7e70()*-3.98603);
}

double NNfunction_sb_cRcR::synapse0x27acfa0() {
   return (neuron0x27b8840()*-1.35521);
}

double NNfunction_sb_cRcR::synapse0x27ad930() {
   return (neuron0x27b9210()*-0.872265);
}

double NNfunction_sb_cRcR::synapse0x27ad970() {
   return (neuron0x27b9be0()*-0.737895);
}

double NNfunction_sb_cRcR::synapse0x27a6480() {
   return (neuron0x27ba5b0()*-0.452688);
}

double NNfunction_sb_cRcR::synapse0x27a64c0() {
   return (neuron0x27baf80()*-0.270958);
}

double NNfunction_sb_cRcR::synapse0x27afd30() {
   return (neuron0x27bb950()*0.0446398);
}

double NNfunction_sb_cRcR::synapse0x27afd70() {
   return (neuron0x27bc530()*0.0188223);
}

double NNfunction_sb_cRcR::synapse0x27b06c0() {
   return (neuron0x27bcf00()*0.419324);
}

double NNfunction_sb_cRcR::synapse0x27b0700() {
   return (neuron0x27add80()*-0.275959);
}

double NNfunction_sb_cRcR::synapse0x27b1090() {
   return (neuron0x27ae750()*0.915265);
}

double NNfunction_sb_cRcR::synapse0x27b10d0() {
   return (neuron0x27af120()*-0.712005);
}

double NNfunction_sb_cRcR::synapse0x27b1a60() {
   return (neuron0x27c1760()*-0.122863);
}

double NNfunction_sb_cRcR::synapse0x27b1aa0() {
   return (neuron0x27c2010()*-0.340859);
}

double NNfunction_sb_cRcR::synapse0x27b2430() {
   return (neuron0x27c29e0()*-0.536763);
}

double NNfunction_sb_cRcR::synapse0x27b2470() {
   return (neuron0x27c33b0()*-0.128264);
}

double NNfunction_sb_cRcR::synapse0x27b4b70() {
   return (neuron0x279f330()*-0.034397);
}

double NNfunction_sb_cRcR::synapse0x27b4bb0() {
   return (neuron0x279fc80()*-0.00993851);
}

double NNfunction_sb_cRcR::synapse0x27aa130() {
   return (neuron0x27a0760()*-1.74065);
}

double NNfunction_sb_cRcR::synapse0x27aa170() {
   return (neuron0x27a0200()*0.451813);
}

double NNfunction_sb_cRcR::synapse0x27b7750() {
   return (neuron0x27a1540()*0.383497);
}

double NNfunction_sb_cRcR::synapse0x27b7790() {
   return (neuron0x27a1f10()*-0.00471912);
}

double NNfunction_sb_cRcR::synapse0x27b8120() {
   return (neuron0x27a2ce0()*-0.245353);
}

double NNfunction_sb_cRcR::synapse0x27b8160() {
   return (neuron0x27a36b0()*0.66371);
}

double NNfunction_sb_cRcR::synapse0x27b8af0() {
   return (neuron0x27a4080()*0.0142086);
}

double NNfunction_sb_cRcR::synapse0x27b8b30() {
   return (neuron0x27a4b60()*-0.0127729);
}

double NNfunction_sb_cRcR::synapse0x27b94c0() {
   return (neuron0x27a5530()*-0.10319);
}

double NNfunction_sb_cRcR::synapse0x27b9500() {
   return (neuron0x27a2610()*0.0635604);
}

double NNfunction_sb_cRcR::synapse0x27b9e90() {
   return (neuron0x27a70e0()*0.0635366);
}

double NNfunction_sb_cRcR::synapse0x27b9ed0() {
   return (neuron0x27a7ab0()*-0.0159198);
}

double NNfunction_sb_cRcR::synapse0x27ba860() {
   return (neuron0x27a8480()*0.0565131);
}

double NNfunction_sb_cRcR::synapse0x27ba8a0() {
   return (neuron0x27a8e50()*-0.00174542);
}

double NNfunction_sb_cRcR::synapse0x27bb230() {
   return (neuron0x27aac60()*-0.834771);
}

double NNfunction_sb_cRcR::synapse0x27bb270() {
   return (neuron0x27aaf40()*-0.183894);
}

double NNfunction_sb_cRcR::synapse0x27bbc00() {
   return (neuron0x27ab910()*-0.00417222);
}

double NNfunction_sb_cRcR::synapse0x27bbc40() {
   return (neuron0x27ac2e0()*0.0123743);
}

double NNfunction_sb_cRcR::synapse0x27bc7e0() {
   return (neuron0x27accb0()*-0.0320468);
}

double NNfunction_sb_cRcR::synapse0x27bc820() {
   return (neuron0x27ad680()*0.190074);
}

double NNfunction_sb_cRcR::synapse0x27bd1b0() {
   return (neuron0x27a61d0()*-0.00943146);
}

double NNfunction_sb_cRcR::synapse0x27bd1f0() {
   return (neuron0x27a6ba0()*0.0477339);
}

double NNfunction_sb_cRcR::synapse0x27ae030() {
   return (neuron0x27b0410()*-0.108932);
}

double NNfunction_sb_cRcR::synapse0x27ae070() {
   return (neuron0x27b0de0()*0.0692083);
}

double NNfunction_sb_cRcR::synapse0x27aea00() {
   return (neuron0x27b17b0()*-0.0195143);
}

double NNfunction_sb_cRcR::synapse0x27aea40() {
   return (neuron0x27b2180()*0.00555636);
}

double NNfunction_sb_cRcR::synapse0x27af3d0() {
   return (neuron0x27b2b50()*-0.0590342);
}

double NNfunction_sb_cRcR::synapse0x27af410() {
   return (neuron0x27b3520()*0.0611377);
}

double NNfunction_sb_cRcR::synapse0x27c18f0() {
   return (neuron0x27b3ef0()*-0.340319);
}

double NNfunction_sb_cRcR::synapse0x27c1930() {
   return (neuron0x27b48c0()*-0.640443);
}

double NNfunction_sb_cRcR::synapse0x27c22c0() {
   return (neuron0x27aa950()*0.0125995);
}

double NNfunction_sb_cRcR::synapse0x27c2300() {
   return (neuron0x27b74a0()*-0.175295);
}

double NNfunction_sb_cRcR::synapse0x27c2c90() {
   return (neuron0x27b7e70()*-0.032121);
}

double NNfunction_sb_cRcR::synapse0x27c2cd0() {
   return (neuron0x27b8840()*0.113219);
}

double NNfunction_sb_cRcR::synapse0x27c3660() {
   return (neuron0x27b9210()*-0.116144);
}

double NNfunction_sb_cRcR::synapse0x27c36a0() {
   return (neuron0x27b9be0()*0.581683);
}

double NNfunction_sb_cRcR::synapse0x279f550() {
   return (neuron0x27ba5b0()*0.219308);
}

double NNfunction_sb_cRcR::synapse0x279f590() {
   return (neuron0x27baf80()*-0.0328515);
}

double NNfunction_sb_cRcR::synapse0x27b2e00() {
   return (neuron0x27bb950()*-0.0441505);
}

double NNfunction_sb_cRcR::synapse0x27b2e40() {
   return (neuron0x27bc530()*-0.0303745);
}

double NNfunction_sb_cRcR::synapse0x27c3d80() {
   return (neuron0x27bcf00()*-0.101197);
}

double NNfunction_sb_cRcR::synapse0x27c3dc0() {
   return (neuron0x27add80()*-0.0266135);
}

double NNfunction_sb_cRcR::synapse0x27c3e00() {
   return (neuron0x27ae750()*-0.100385);
}

double NNfunction_sb_cRcR::synapse0x27c3e40() {
   return (neuron0x27af120()*0.00565263);
}

double NNfunction_sb_cRcR::synapse0x27cacf0() {
   return (neuron0x27c1760()*-0.0161581);
}

double NNfunction_sb_cRcR::synapse0x27cad30() {
   return (neuron0x27c2010()*-0.0129804);
}

double NNfunction_sb_cRcR::synapse0x27cad70() {
   return (neuron0x27c29e0()*0.00884291);
}

double NNfunction_sb_cRcR::synapse0x27cadb0() {
   return (neuron0x27c33b0()*0.0179483);
}

double NNfunction_sb_cRcR::synapse0x27cb130() {
   return (neuron0x279f330()*-0.0869866);
}

double NNfunction_sb_cRcR::synapse0x27cb170() {
   return (neuron0x279fc80()*-0.17202);
}

double NNfunction_sb_cRcR::synapse0x27cb1b0() {
   return (neuron0x27a0760()*0.228767);
}

double NNfunction_sb_cRcR::synapse0x27cb1f0() {
   return (neuron0x27a0200()*-1.98084);
}

double NNfunction_sb_cRcR::synapse0x27cb230() {
   return (neuron0x27a1540()*-1.21133);
}

double NNfunction_sb_cRcR::synapse0x27cb270() {
   return (neuron0x27a1f10()*-2.18392);
}

double NNfunction_sb_cRcR::synapse0x27cb2b0() {
   return (neuron0x27a2ce0()*0.696181);
}

double NNfunction_sb_cRcR::synapse0x27cb2f0() {
   return (neuron0x27a36b0()*-0.521437);
}

double NNfunction_sb_cRcR::synapse0x27cb330() {
   return (neuron0x27a4080()*0.73563);
}

double NNfunction_sb_cRcR::synapse0x27cb370() {
   return (neuron0x27a4b60()*0.357998);
}

double NNfunction_sb_cRcR::synapse0x27cb3b0() {
   return (neuron0x27a5530()*2.19429);
}

double NNfunction_sb_cRcR::synapse0x27cb3f0() {
   return (neuron0x27a2610()*-1.30648);
}

double NNfunction_sb_cRcR::synapse0x27cb430() {
   return (neuron0x27a70e0()*2.81624);
}

double NNfunction_sb_cRcR::synapse0x27cb470() {
   return (neuron0x27a7ab0()*0.0620643);
}

double NNfunction_sb_cRcR::synapse0x27cb4b0() {
   return (neuron0x27a8480()*-0.431096);
}

double NNfunction_sb_cRcR::synapse0x27cb4f0() {
   return (neuron0x27a8e50()*0.713476);
}

double NNfunction_sb_cRcR::synapse0x27caf80() {
   return (neuron0x27aac60()*1.34558);
}

double NNfunction_sb_cRcR::synapse0x27cafc0() {
   return (neuron0x27aaf40()*1.19166);
}

double NNfunction_sb_cRcR::synapse0x27cb640() {
   return (neuron0x27ab910()*-0.0729166);
}

double NNfunction_sb_cRcR::synapse0x27cb680() {
   return (neuron0x27ac2e0()*0.621713);
}

double NNfunction_sb_cRcR::synapse0x27cb6c0() {
   return (neuron0x27accb0()*-0.483791);
}

double NNfunction_sb_cRcR::synapse0x27cb700() {
   return (neuron0x27ad680()*-1.59304);
}

double NNfunction_sb_cRcR::synapse0x27cb740() {
   return (neuron0x27a61d0()*-0.0191109);
}

double NNfunction_sb_cRcR::synapse0x27cb780() {
   return (neuron0x27a6ba0()*-0.368481);
}

double NNfunction_sb_cRcR::synapse0x27cb7c0() {
   return (neuron0x27b0410()*-0.30421);
}

double NNfunction_sb_cRcR::synapse0x27cb800() {
   return (neuron0x27b0de0()*-0.556753);
}

double NNfunction_sb_cRcR::synapse0x27cb840() {
   return (neuron0x27b17b0()*0.593404);
}

double NNfunction_sb_cRcR::synapse0x27cb880() {
   return (neuron0x27b2180()*-0.179034);
}

double NNfunction_sb_cRcR::synapse0x27cb8c0() {
   return (neuron0x27b2b50()*1.73803);
}

double NNfunction_sb_cRcR::synapse0x27cb900() {
   return (neuron0x27b3520()*-1.04777);
}

double NNfunction_sb_cRcR::synapse0x27cb940() {
   return (neuron0x27b3ef0()*5.11619);
}

double NNfunction_sb_cRcR::synapse0x27cb980() {
   return (neuron0x27b48c0()*4.01729);
}

double NNfunction_sb_cRcR::synapse0x27cb530() {
   return (neuron0x27aa950()*-0.0785395);
}

double NNfunction_sb_cRcR::synapse0x27cb570() {
   return (neuron0x27b74a0()*3.58749);
}

double NNfunction_sb_cRcR::synapse0x27cb5b0() {
   return (neuron0x27b7e70()*1.11852);
}

double NNfunction_sb_cRcR::synapse0x27cb5f0() {
   return (neuron0x27b8840()*-3.74759);
}

double NNfunction_sb_cRcR::synapse0x27cbbd0() {
   return (neuron0x27b9210()*1.64737);
}

double NNfunction_sb_cRcR::synapse0x27cbc10() {
   return (neuron0x27b9be0()*-1.81163);
}

double NNfunction_sb_cRcR::synapse0x27cbc50() {
   return (neuron0x27ba5b0()*-3.54406);
}

double NNfunction_sb_cRcR::synapse0x27cbc90() {
   return (neuron0x27baf80()*-0.342197);
}

double NNfunction_sb_cRcR::synapse0x27cbcd0() {
   return (neuron0x27bb950()*-0.486588);
}

double NNfunction_sb_cRcR::synapse0x27cbd10() {
   return (neuron0x27bc530()*0.405611);
}

double NNfunction_sb_cRcR::synapse0x27cbd50() {
   return (neuron0x27bcf00()*2.00461);
}

double NNfunction_sb_cRcR::synapse0x27cbd90() {
   return (neuron0x27add80()*-0.093655);
}

double NNfunction_sb_cRcR::synapse0x27cbdd0() {
   return (neuron0x27ae750()*1.4041);
}

double NNfunction_sb_cRcR::synapse0x27cbe10() {
   return (neuron0x27af120()*-1.6691);
}

double NNfunction_sb_cRcR::synapse0x27cbe50() {
   return (neuron0x27c1760()*-0.249936);
}

double NNfunction_sb_cRcR::synapse0x27cbe90() {
   return (neuron0x27c2010()*2.14765);
}

double NNfunction_sb_cRcR::synapse0x27cbed0() {
   return (neuron0x27c29e0()*-1.12087);
}

double NNfunction_sb_cRcR::synapse0x27cbf10() {
   return (neuron0x27c33b0()*0.116594);
}

double NNfunction_sb_cRcR::synapse0x27cc290() {
   return (neuron0x279f330()*1.66923);
}

double NNfunction_sb_cRcR::synapse0x27cc2d0() {
   return (neuron0x279fc80()*1.44653);
}

double NNfunction_sb_cRcR::synapse0x27cc310() {
   return (neuron0x27a0760()*1.05013);
}

double NNfunction_sb_cRcR::synapse0x27cc350() {
   return (neuron0x27a0200()*-2.17333);
}

double NNfunction_sb_cRcR::synapse0x27cc390() {
   return (neuron0x27a1540()*-2.21277);
}

double NNfunction_sb_cRcR::synapse0x27cc3d0() {
   return (neuron0x27a1f10()*-1.24006);
}

double NNfunction_sb_cRcR::synapse0x27cc410() {
   return (neuron0x27a2ce0()*6.70869);
}

double NNfunction_sb_cRcR::synapse0x27cc450() {
   return (neuron0x27a36b0()*-2.13105);
}

double NNfunction_sb_cRcR::synapse0x27cc490() {
   return (neuron0x27a4080()*-0.420679);
}

double NNfunction_sb_cRcR::synapse0x27cc4d0() {
   return (neuron0x27a4b60()*-1.79135);
}

double NNfunction_sb_cRcR::synapse0x27cc510() {
   return (neuron0x27a5530()*1.42233);
}

double NNfunction_sb_cRcR::synapse0x27cc550() {
   return (neuron0x27a2610()*4.17768);
}

double NNfunction_sb_cRcR::synapse0x27cc590() {
   return (neuron0x27a70e0()*1.14922);
}

double NNfunction_sb_cRcR::synapse0x27cc5d0() {
   return (neuron0x27a7ab0()*1.73654);
}

double NNfunction_sb_cRcR::synapse0x27cc610() {
   return (neuron0x27a8480()*-1.76805);
}

double NNfunction_sb_cRcR::synapse0x27cc650() {
   return (neuron0x27a8e50()*2.41359);
}

double NNfunction_sb_cRcR::synapse0x27cc0e0() {
   return (neuron0x27aac60()*0.877149);
}

double NNfunction_sb_cRcR::synapse0x27cc120() {
   return (neuron0x27aaf40()*1.82812);
}

double NNfunction_sb_cRcR::synapse0x27cc7a0() {
   return (neuron0x27ab910()*1.54198);
}

double NNfunction_sb_cRcR::synapse0x27cc7e0() {
   return (neuron0x27ac2e0()*-2.77643);
}

double NNfunction_sb_cRcR::synapse0x27cc820() {
   return (neuron0x27accb0()*1.76911);
}

double NNfunction_sb_cRcR::synapse0x27cc860() {
   return (neuron0x27ad680()*-1.45851);
}

double NNfunction_sb_cRcR::synapse0x27cc8a0() {
   return (neuron0x27a61d0()*-1.58293);
}

double NNfunction_sb_cRcR::synapse0x27cc8e0() {
   return (neuron0x27a6ba0()*-2.69377);
}

double NNfunction_sb_cRcR::synapse0x27cc920() {
   return (neuron0x27b0410()*6.35006);
}

double NNfunction_sb_cRcR::synapse0x27cc960() {
   return (neuron0x27b0de0()*2.61425);
}

double NNfunction_sb_cRcR::synapse0x27cc9a0() {
   return (neuron0x27b17b0()*2.00664);
}

double NNfunction_sb_cRcR::synapse0x27cc9e0() {
   return (neuron0x27b2180()*-2.81586);
}

double NNfunction_sb_cRcR::synapse0x27cca20() {
   return (neuron0x27b2b50()*2.20262);
}

double NNfunction_sb_cRcR::synapse0x27cca60() {
   return (neuron0x27b3520()*1.51746);
}

double NNfunction_sb_cRcR::synapse0x27ccaa0() {
   return (neuron0x27b3ef0()*0.367127);
}

double NNfunction_sb_cRcR::synapse0x27ccae0() {
   return (neuron0x27b48c0()*0.965931);
}

double NNfunction_sb_cRcR::synapse0x27cc690() {
   return (neuron0x27aa950()*1.68342);
}

double NNfunction_sb_cRcR::synapse0x27cc6d0() {
   return (neuron0x27b74a0()*3.38314);
}

double NNfunction_sb_cRcR::synapse0x27cc710() {
   return (neuron0x27b7e70()*-3.45691);
}

double NNfunction_sb_cRcR::synapse0x27cc750() {
   return (neuron0x27b8840()*-3.37474);
}

double NNfunction_sb_cRcR::synapse0x27ccd30() {
   return (neuron0x27b9210()*-2.43198);
}

double NNfunction_sb_cRcR::synapse0x27ccd70() {
   return (neuron0x27b9be0()*-1.88136);
}

double NNfunction_sb_cRcR::synapse0x27ccdb0() {
   return (neuron0x27ba5b0()*-1.1436);
}

double NNfunction_sb_cRcR::synapse0x27ccdf0() {
   return (neuron0x27baf80()*1.83203);
}

double NNfunction_sb_cRcR::synapse0x27cce30() {
   return (neuron0x27bb950()*2.69622);
}

double NNfunction_sb_cRcR::synapse0x27cce70() {
   return (neuron0x27bc530()*1.46571);
}

double NNfunction_sb_cRcR::synapse0x27cceb0() {
   return (neuron0x27bcf00()*0.734483);
}

double NNfunction_sb_cRcR::synapse0x27ccef0() {
   return (neuron0x27add80()*-1.91809);
}

double NNfunction_sb_cRcR::synapse0x27ccf30() {
   return (neuron0x27ae750()*1.01913);
}

double NNfunction_sb_cRcR::synapse0x27ccf70() {
   return (neuron0x27af120()*-1.70554);
}

double NNfunction_sb_cRcR::synapse0x27ccfb0() {
   return (neuron0x27c1760()*1.38489);
}

double NNfunction_sb_cRcR::synapse0x27ccff0() {
   return (neuron0x27c2010()*0.892547);
}

double NNfunction_sb_cRcR::synapse0x27cd030() {
   return (neuron0x27c29e0()*-0.963495);
}

double NNfunction_sb_cRcR::synapse0x27cd070() {
   return (neuron0x27c33b0()*-2.33746);
}

double NNfunction_sb_cRcR::synapse0x27cd3f0() {
   return (neuron0x279f330()*-0.0501169);
}

double NNfunction_sb_cRcR::synapse0x27cd430() {
   return (neuron0x279fc80()*-0.0109165);
}

double NNfunction_sb_cRcR::synapse0x27cd470() {
   return (neuron0x27a0760()*2.08258);
}

double NNfunction_sb_cRcR::synapse0x27cd4b0() {
   return (neuron0x27a0200()*-0.719115);
}

double NNfunction_sb_cRcR::synapse0x27cd4f0() {
   return (neuron0x27a1540()*-1.00065);
}

double NNfunction_sb_cRcR::synapse0x27cd530() {
   return (neuron0x27a1f10()*-0.0258095);
}

double NNfunction_sb_cRcR::synapse0x27cd570() {
   return (neuron0x27a2ce0()*-0.0565291);
}

double NNfunction_sb_cRcR::synapse0x27cd5b0() {
   return (neuron0x27a36b0()*-1.62788);
}

double NNfunction_sb_cRcR::synapse0x27cd5f0() {
   return (neuron0x27a4080()*0.00831063);
}

double NNfunction_sb_cRcR::synapse0x27cd630() {
   return (neuron0x27a4b60()*-0.0062831);
}

double NNfunction_sb_cRcR::synapse0x27cd670() {
   return (neuron0x27a5530()*-0.0382302);
}

double NNfunction_sb_cRcR::synapse0x27cd6b0() {
   return (neuron0x27a2610()*0.0764011);
}

double NNfunction_sb_cRcR::synapse0x27cd6f0() {
   return (neuron0x27a70e0()*0.121325);
}

double NNfunction_sb_cRcR::synapse0x27cd730() {
   return (neuron0x27a7ab0()*-0.0129828);
}

double NNfunction_sb_cRcR::synapse0x27cd770() {
   return (neuron0x27a8480()*0.131464);
}

double NNfunction_sb_cRcR::synapse0x27cd7b0() {
   return (neuron0x27a8e50()*-0.0389511);
}

double NNfunction_sb_cRcR::synapse0x27cd240() {
   return (neuron0x27aac60()*1.25601);
}

double NNfunction_sb_cRcR::synapse0x27cd280() {
   return (neuron0x27aaf40()*-0.830819);
}

double NNfunction_sb_cRcR::synapse0x27cd900() {
   return (neuron0x27ab910()*0.000988354);
}

double NNfunction_sb_cRcR::synapse0x27cd940() {
   return (neuron0x27ac2e0()*-0.0125285);
}

double NNfunction_sb_cRcR::synapse0x27cd980() {
   return (neuron0x27accb0()*-0.0405398);
}

double NNfunction_sb_cRcR::synapse0x27cd9c0() {
   return (neuron0x27ad680()*0.594092);
}

double NNfunction_sb_cRcR::synapse0x27cda00() {
   return (neuron0x27a61d0()*0.0101303);
}

double NNfunction_sb_cRcR::synapse0x27cda40() {
   return (neuron0x27a6ba0()*0.0502285);
}

double NNfunction_sb_cRcR::synapse0x27cda80() {
   return (neuron0x27b0410()*-0.207366);
}

double NNfunction_sb_cRcR::synapse0x27cdac0() {
   return (neuron0x27b0de0()*0.0250817);
}

double NNfunction_sb_cRcR::synapse0x27cdb00() {
   return (neuron0x27b17b0()*0.0355966);
}

double NNfunction_sb_cRcR::synapse0x27cdb40() {
   return (neuron0x27b2180()*-0.027463);
}

double NNfunction_sb_cRcR::synapse0x27cdb80() {
   return (neuron0x27b2b50()*-0.0914066);
}

double NNfunction_sb_cRcR::synapse0x27cdbc0() {
   return (neuron0x27b3520()*0.0795057);
}

double NNfunction_sb_cRcR::synapse0x27cdc00() {
   return (neuron0x27b3ef0()*-0.539179);
}

double NNfunction_sb_cRcR::synapse0x27cdc40() {
   return (neuron0x27b48c0()*-0.444177);
}

double NNfunction_sb_cRcR::synapse0x27cd7f0() {
   return (neuron0x27aa950()*0.000485);
}

double NNfunction_sb_cRcR::synapse0x27cd830() {
   return (neuron0x27b74a0()*1.28908);
}

double NNfunction_sb_cRcR::synapse0x27cd870() {
   return (neuron0x27b7e70()*0.111363);
}

double NNfunction_sb_cRcR::synapse0x27cd8b0() {
   return (neuron0x27b8840()*0.191661);
}

double NNfunction_sb_cRcR::synapse0x27cde90() {
   return (neuron0x27b9210()*-0.101646);
}

double NNfunction_sb_cRcR::synapse0x27cded0() {
   return (neuron0x27b9be0()*-0.975955);
}

double NNfunction_sb_cRcR::synapse0x27cdf10() {
   return (neuron0x27ba5b0()*0.154709);
}

double NNfunction_sb_cRcR::synapse0x27cdf50() {
   return (neuron0x27baf80()*-0.0698696);
}

double NNfunction_sb_cRcR::synapse0x27cdf90() {
   return (neuron0x27bb950()*0.00477771);
}

double NNfunction_sb_cRcR::synapse0x27cdfd0() {
   return (neuron0x27bc530()*-0.0517964);
}

double NNfunction_sb_cRcR::synapse0x27ce010() {
   return (neuron0x27bcf00()*-0.108695);
}

double NNfunction_sb_cRcR::synapse0x27ce050() {
   return (neuron0x27add80()*0.00725786);
}

double NNfunction_sb_cRcR::synapse0x27ce090() {
   return (neuron0x27ae750()*-0.272687);
}

double NNfunction_sb_cRcR::synapse0x27ce0d0() {
   return (neuron0x27af120()*0.128675);
}

double NNfunction_sb_cRcR::synapse0x27ce110() {
   return (neuron0x27c1760()*-0.0370617);
}

double NNfunction_sb_cRcR::synapse0x27ce150() {
   return (neuron0x27c2010()*-0.0762926);
}

double NNfunction_sb_cRcR::synapse0x27ce190() {
   return (neuron0x27c29e0()*-0.0348479);
}

double NNfunction_sb_cRcR::synapse0x27ce1d0() {
   return (neuron0x27c33b0()*0.00144029);
}

double NNfunction_sb_cRcR::synapse0x27ce430() {
   return (neuron0x27ca5b0()*-2.66584);
}

double NNfunction_sb_cRcR::synapse0x27ce470() {
   return (neuron0x27ca950()*8.0438);
}

double NNfunction_sb_cRcR::synapse0x27ce4b0() {
   return (neuron0x27cadf0()*-6.29493);
}

double NNfunction_sb_cRcR::synapse0x27ce4f0() {
   return (neuron0x27cbf50()*-7.32816);
}

double NNfunction_sb_cRcR::synapse0x27ce530() {
   return (neuron0x27cd0b0()*-3.12639);
}

