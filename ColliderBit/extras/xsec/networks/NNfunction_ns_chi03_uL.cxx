#include "NNfunction_ns_chi03_uL.h"
#include <cmath>

double NNfunction_ns_chi03_uL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.7954)/15.1692;
   input1 = (in1 - 12.7152)/1090.57;
   input2 = (in2 - 490.185)/543.086;
   input3 = (in3 - 56.7544)/757.359;
   input4 = (in4 - 908.181)/880.132;
   input5 = (in5 - 793.53)/879.195;
   input6 = (in6 - 792.985)/874.675;
   input7 = (in7 - 795.158)/857.895;
   input8 = (in8 - 815.757)/907.69;
   input9 = (in9 - 804.334)/894.18;
   input10 = (in10 - 837.556)/897.233;
   input11 = (in11 - 345.522)/293.462;
   input12 = (in12 - 683.513)/787.871;
   input13 = (in13 - 474.392)/458.608;
   input14 = (in14 - 672.15)/730.775;
   input15 = (in15 - 677.488)/736.022;
   input16 = (in16 - 491.823)/506.997;
   input17 = (in17 - 710.445)/818.976;
   input18 = (in18 - 711.723)/822.557;
   input19 = (in19 - 718.385)/787.122;
   input20 = (in20 - -50.1366)/452.516;
   input21 = (in21 - -69.7786)/1047.52;
   input22 = (in22 - 3.84569)/1079.31;
   input23 = (in23 - -51.4321)/267.253;
   switch(index) {
     case 0:
         return neuron0x31d8bf0();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi03_uL::Value(int index, double* input) {
   input0 = (input[0] - 23.7954)/15.1692;
   input1 = (input[1] - 12.7152)/1090.57;
   input2 = (input[2] - 490.185)/543.086;
   input3 = (input[3] - 56.7544)/757.359;
   input4 = (input[4] - 908.181)/880.132;
   input5 = (input[5] - 793.53)/879.195;
   input6 = (input[6] - 792.985)/874.675;
   input7 = (input[7] - 795.158)/857.895;
   input8 = (input[8] - 815.757)/907.69;
   input9 = (input[9] - 804.334)/894.18;
   input10 = (input[10] - 837.556)/897.233;
   input11 = (input[11] - 345.522)/293.462;
   input12 = (input[12] - 683.513)/787.871;
   input13 = (input[13] - 474.392)/458.608;
   input14 = (input[14] - 672.15)/730.775;
   input15 = (input[15] - 677.488)/736.022;
   input16 = (input[16] - 491.823)/506.997;
   input17 = (input[17] - 710.445)/818.976;
   input18 = (input[18] - 711.723)/822.557;
   input19 = (input[19] - 718.385)/787.122;
   input20 = (input[20] - -50.1366)/452.516;
   input21 = (input[21] - -69.7786)/1047.52;
   input22 = (input[22] - 3.84569)/1079.31;
   input23 = (input[23] - -51.4321)/267.253;
   switch(index) {
     case 0:
         return neuron0x31d8bf0();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi03_uL::neuron0x31a3c60() {
   return input0;
}

double NNfunction_ns_chi03_uL::neuron0x31a3f10() {
   return input1;
}

double NNfunction_ns_chi03_uL::neuron0x31a4250() {
   return input2;
}

double NNfunction_ns_chi03_uL::neuron0x31a4590() {
   return input3;
}

double NNfunction_ns_chi03_uL::neuron0x31a48d0() {
   return input4;
}

double NNfunction_ns_chi03_uL::neuron0x31a4c10() {
   return input5;
}

double NNfunction_ns_chi03_uL::neuron0x31a4f50() {
   return input6;
}

double NNfunction_ns_chi03_uL::neuron0x31a5290() {
   return input7;
}

double NNfunction_ns_chi03_uL::neuron0x31a55d0() {
   return input8;
}

double NNfunction_ns_chi03_uL::neuron0x31a5910() {
   return input9;
}

double NNfunction_ns_chi03_uL::neuron0x31a5c50() {
   return input10;
}

double NNfunction_ns_chi03_uL::neuron0x31a5f90() {
   return input11;
}

double NNfunction_ns_chi03_uL::neuron0x31a62d0() {
   return input12;
}

double NNfunction_ns_chi03_uL::neuron0x31a6610() {
   return input13;
}

double NNfunction_ns_chi03_uL::neuron0x31a6950() {
   return input14;
}

double NNfunction_ns_chi03_uL::neuron0x31a6c90() {
   return input15;
}

double NNfunction_ns_chi03_uL::neuron0x31a6fd0() {
   return input16;
}

double NNfunction_ns_chi03_uL::neuron0x31a7530() {
   return input17;
}

double NNfunction_ns_chi03_uL::neuron0x31a7870() {
   return input18;
}

double NNfunction_ns_chi03_uL::neuron0x31a7bb0() {
   return input19;
}

double NNfunction_ns_chi03_uL::neuron0x31a7ef0() {
   return input20;
}

double NNfunction_ns_chi03_uL::neuron0x31a8230() {
   return input21;
}

double NNfunction_ns_chi03_uL::neuron0x31a8570() {
   return input22;
}

double NNfunction_ns_chi03_uL::neuron0x31a88b0() {
   return input23;
}

double NNfunction_ns_chi03_uL::input0x31a8d20() {
   double input = 1.77439;
   input += synapse0x31a9060();
   input += synapse0x31a90a0();
   input += synapse0x31a90e0();
   input += synapse0x31a9120();
   input += synapse0x31a9160();
   input += synapse0x31a91a0();
   input += synapse0x31a91e0();
   input += synapse0x31a9220();
   input += synapse0x31a9260();
   input += synapse0x31a92a0();
   input += synapse0x31a92e0();
   input += synapse0x31a9320();
   input += synapse0x31a9360();
   input += synapse0x31a93a0();
   input += synapse0x31a93e0();
   input += synapse0x31a9420();
   input += synapse0x31a8eb0();
   input += synapse0x31a8ef0();
   input += synapse0x2f5fde0();
   input += synapse0x2f5fe20();
   input += synapse0x31a9460();
   input += synapse0x31a94a0();
   input += synapse0x31a94e0();
   input += synapse0x31a9520();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31a8d20() {
   double input = input0x31a8d20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31a9560() {
   double input = 0.39838;
   input += synapse0x31a98a0();
   input += synapse0x31a98e0();
   input += synapse0x31a9920();
   input += synapse0x31a9960();
   input += synapse0x31a99a0();
   input += synapse0x31a99e0();
   input += synapse0x31a9a20();
   input += synapse0x31a9a60();
   input += synapse0x31a9aa0();
   input += synapse0x2f5fc30();
   input += synapse0x2f5fc70();
   input += synapse0x2f5fcb0();
   input += synapse0x2f5fcf0();
   input += synapse0x31a9cf0();
   input += synapse0x31a9d30();
   input += synapse0x31a9d70();
   input += synapse0x31a96f0();
   input += synapse0x31a9730();
   input += synapse0x31a9ec0();
   input += synapse0x31a9f00();
   input += synapse0x31a9f40();
   input += synapse0x31a9f80();
   input += synapse0x31a9fc0();
   input += synapse0x31aa000();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31a9560() {
   double input = input0x31a9560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31aa040() {
   double input = 12.4548;
   input += synapse0x31aa380();
   input += synapse0x31aa3c0();
   input += synapse0x31aa400();
   input += synapse0x31aa440();
   input += synapse0x31aa480();
   input += synapse0x31aa4c0();
   input += synapse0x31aa500();
   input += synapse0x31aa540();
   input += synapse0x31aa580();
   input += synapse0x31aa5c0();
   input += synapse0x31aa600();
   input += synapse0x31aa640();
   input += synapse0x31aa680();
   input += synapse0x31aa6c0();
   input += synapse0x31aa700();
   input += synapse0x31aa740();
   input += synapse0x31aa1d0();
   input += synapse0x31aa210();
   input += synapse0x2f604d0();
   input += synapse0x2f6dda0();
   input += synapse0x2f6dde0();
   input += synapse0x31ac670();
   input += synapse0x31ac6b0();
   input += synapse0x31a39a0();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31aa040() {
   double input = input0x31aa040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31a9ae0() {
   double input = -4.21285;
   input += synapse0x31a3a70();
   input += synapse0x2f6e620();
   input += synapse0x31a9c70();
   input += synapse0x31a9cb0();
   input += synapse0x31aa890();
   input += synapse0x31aa8d0();
   input += synapse0x31aa910();
   input += synapse0x31aa950();
   input += synapse0x31aa990();
   input += synapse0x31aa9d0();
   input += synapse0x31aaa10();
   input += synapse0x31aaa50();
   input += synapse0x31aaa90();
   input += synapse0x31aaad0();
   input += synapse0x31aab10();
   input += synapse0x31aab50();
   input += synapse0x31a39e0();
   input += synapse0x31a3a20();
   input += synapse0x31aaca0();
   input += synapse0x31aace0();
   input += synapse0x31aad20();
   input += synapse0x31aad60();
   input += synapse0x31aada0();
   input += synapse0x31aade0();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31a9ae0() {
   double input = input0x31a9ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31aae20() {
   double input = 1.71041;
   input += synapse0x31ab160();
   input += synapse0x31ab1a0();
   input += synapse0x31ab1e0();
   input += synapse0x31ab220();
   input += synapse0x31ab260();
   input += synapse0x31ab2a0();
   input += synapse0x31ab2e0();
   input += synapse0x31ab320();
   input += synapse0x31ab360();
   input += synapse0x31ab3a0();
   input += synapse0x31ab3e0();
   input += synapse0x31ab420();
   input += synapse0x31ab460();
   input += synapse0x31ab4a0();
   input += synapse0x31ab4e0();
   input += synapse0x31ab520();
   input += synapse0x31ab670();
   input += synapse0x31aafb0();
   input += synapse0x31aaff0();
   input += synapse0x31ac7b0();
   input += synapse0x31ac7f0();
   input += synapse0x31ac830();
   input += synapse0x31ac870();
   input += synapse0x31ac8b0();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31aae20() {
   double input = input0x31aae20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31ac8f0() {
   double input = 1.40619;
   input += synapse0x31acc30();
   input += synapse0x31acc70();
   input += synapse0x31accb0();
   input += synapse0x31accf0();
   input += synapse0x31acd30();
   input += synapse0x31acd70();
   input += synapse0x31acdb0();
   input += synapse0x31acdf0();
   input += synapse0x31ace30();
   input += synapse0x2f6e0f0();
   input += synapse0x2f6e130();
   input += synapse0x2f6e170();
   input += synapse0x2f6e1b0();
   input += synapse0x2f6e1f0();
   input += synapse0x2f6e230();
   input += synapse0x2f6e270();
   input += synapse0x31aca80();
   input += synapse0x31acac0();
   input += synapse0x2f6e3c0();
   input += synapse0x2f6e400();
   input += synapse0x2f6e440();
   input += synapse0x2f6e480();
   input += synapse0x2f6e4c0();
   input += synapse0x31ad680();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31ac8f0() {
   double input = input0x31ac8f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31ad6c0() {
   double input = 0.256943;
   input += synapse0x31ada00();
   input += synapse0x31ada40();
   input += synapse0x31ada80();
   input += synapse0x31adac0();
   input += synapse0x31adb00();
   input += synapse0x31adb40();
   input += synapse0x31adb80();
   input += synapse0x31adbc0();
   input += synapse0x31adc00();
   input += synapse0x31adc40();
   input += synapse0x31adc80();
   input += synapse0x31adcc0();
   input += synapse0x31add00();
   input += synapse0x31add40();
   input += synapse0x31add80();
   input += synapse0x31addc0();
   input += synapse0x31ad850();
   input += synapse0x31ad890();
   input += synapse0x31adf10();
   input += synapse0x31adf50();
   input += synapse0x31adf90();
   input += synapse0x31adfd0();
   input += synapse0x31ae010();
   input += synapse0x31ae050();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31ad6c0() {
   double input = input0x31ad6c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31ae090() {
   double input = -0.230305;
   input += synapse0x31ae3d0();
   input += synapse0x31ae410();
   input += synapse0x31ae450();
   input += synapse0x31ae490();
   input += synapse0x31ae4d0();
   input += synapse0x31ae510();
   input += synapse0x31ae550();
   input += synapse0x31ae590();
   input += synapse0x31ae5d0();
   input += synapse0x31ae610();
   input += synapse0x31ae650();
   input += synapse0x31ae690();
   input += synapse0x31ae6d0();
   input += synapse0x31ae710();
   input += synapse0x31ae750();
   input += synapse0x31ae790();
   input += synapse0x31ae220();
   input += synapse0x31ae260();
   input += synapse0x31ae8e0();
   input += synapse0x31ae920();
   input += synapse0x31ae960();
   input += synapse0x31ae9a0();
   input += synapse0x31ae9e0();
   input += synapse0x31aea20();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31ae090() {
   double input = input0x31ae090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31aea60() {
   double input = -1.96075;
   input += synapse0x31a7420();
   input += synapse0x31a7460();
   input += synapse0x31a74a0();
   input += synapse0x31a74e0();
   input += synapse0x31aefb0();
   input += synapse0x31aeff0();
   input += synapse0x31af030();
   input += synapse0x31af070();
   input += synapse0x31af0b0();
   input += synapse0x31af0f0();
   input += synapse0x31af130();
   input += synapse0x31af170();
   input += synapse0x31af1b0();
   input += synapse0x31af1f0();
   input += synapse0x31af230();
   input += synapse0x31af270();
   input += synapse0x31aebf0();
   input += synapse0x31aec30();
   input += synapse0x31af3c0();
   input += synapse0x31af400();
   input += synapse0x31af440();
   input += synapse0x31af480();
   input += synapse0x31af4c0();
   input += synapse0x31af500();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31aea60() {
   double input = input0x31aea60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31af540() {
   double input = -0.114632;
   input += synapse0x31af880();
   input += synapse0x31af8c0();
   input += synapse0x31af900();
   input += synapse0x31af940();
   input += synapse0x31af980();
   input += synapse0x31af9c0();
   input += synapse0x31afa00();
   input += synapse0x31afa40();
   input += synapse0x31afa80();
   input += synapse0x31afac0();
   input += synapse0x31afb00();
   input += synapse0x31afb40();
   input += synapse0x31afb80();
   input += synapse0x31afbc0();
   input += synapse0x31afc00();
   input += synapse0x31afc40();
   input += synapse0x31af6d0();
   input += synapse0x31af710();
   input += synapse0x31afd90();
   input += synapse0x31afdd0();
   input += synapse0x31afe10();
   input += synapse0x31afe50();
   input += synapse0x31afe90();
   input += synapse0x31afed0();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31af540() {
   double input = input0x31af540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31aff10() {
   double input = -0.286268;
   input += synapse0x31b0250();
   input += synapse0x31b0290();
   input += synapse0x31b02d0();
   input += synapse0x31b0310();
   input += synapse0x31b0350();
   input += synapse0x31b0390();
   input += synapse0x31b03d0();
   input += synapse0x31b0410();
   input += synapse0x31b0450();
   input += synapse0x31b0490();
   input += synapse0x31b04d0();
   input += synapse0x31b0510();
   input += synapse0x31b0550();
   input += synapse0x31b0590();
   input += synapse0x31b05d0();
   input += synapse0x31b0610();
   input += synapse0x31b00a0();
   input += synapse0x31b00e0();
   input += synapse0x31ace70();
   input += synapse0x31aceb0();
   input += synapse0x31acef0();
   input += synapse0x31acf30();
   input += synapse0x31acf70();
   input += synapse0x31acfb0();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31aff10() {
   double input = input0x31aff10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31acff0() {
   double input = 1.14863;
   input += synapse0x31ad330();
   input += synapse0x31ad370();
   input += synapse0x31ad3b0();
   input += synapse0x31ad3f0();
   input += synapse0x31ad430();
   input += synapse0x31ad470();
   input += synapse0x31ad4b0();
   input += synapse0x31ad4f0();
   input += synapse0x31ad530();
   input += synapse0x31ad570();
   input += synapse0x31ad5b0();
   input += synapse0x31ad5f0();
   input += synapse0x31ad630();
   input += synapse0x31b1770();
   input += synapse0x31b17b0();
   input += synapse0x31b17f0();
   input += synapse0x31ad180();
   input += synapse0x31ad1c0();
   input += synapse0x31b1940();
   input += synapse0x31b1980();
   input += synapse0x31b19c0();
   input += synapse0x31b1a00();
   input += synapse0x31b1a40();
   input += synapse0x31b1a80();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31acff0() {
   double input = input0x31acff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31b1ac0() {
   double input = -2.16017;
   input += synapse0x31b1e00();
   input += synapse0x31b1e40();
   input += synapse0x31b1e80();
   input += synapse0x31b1ec0();
   input += synapse0x31b1f00();
   input += synapse0x31b1f40();
   input += synapse0x31b1f80();
   input += synapse0x31b1fc0();
   input += synapse0x31b2000();
   input += synapse0x31b2040();
   input += synapse0x31b2080();
   input += synapse0x31b20c0();
   input += synapse0x31b2100();
   input += synapse0x31b2140();
   input += synapse0x31b2180();
   input += synapse0x31b21c0();
   input += synapse0x31b1c50();
   input += synapse0x31b1c90();
   input += synapse0x31b2310();
   input += synapse0x31b2350();
   input += synapse0x31b2390();
   input += synapse0x31b23d0();
   input += synapse0x31b2410();
   input += synapse0x31b2450();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31b1ac0() {
   double input = input0x31b1ac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31b2490() {
   double input = 1.31185;
   input += synapse0x31b27d0();
   input += synapse0x31b2810();
   input += synapse0x31b2850();
   input += synapse0x31b2890();
   input += synapse0x31b28d0();
   input += synapse0x31b2910();
   input += synapse0x31b2950();
   input += synapse0x31b2990();
   input += synapse0x31b29d0();
   input += synapse0x31b2a10();
   input += synapse0x31b2a50();
   input += synapse0x31b2a90();
   input += synapse0x31b2ad0();
   input += synapse0x31b2b10();
   input += synapse0x31b2b50();
   input += synapse0x31b2b90();
   input += synapse0x31b2620();
   input += synapse0x31b2660();
   input += synapse0x31b2ce0();
   input += synapse0x31b2d20();
   input += synapse0x31b2d60();
   input += synapse0x31b2da0();
   input += synapse0x31b2de0();
   input += synapse0x31b2e20();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31b2490() {
   double input = input0x31b2490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31b2e60() {
   double input = -1.33294;
   input += synapse0x31b31a0();
   input += synapse0x31b31e0();
   input += synapse0x31b3220();
   input += synapse0x31b3260();
   input += synapse0x31b32a0();
   input += synapse0x31b32e0();
   input += synapse0x31b3320();
   input += synapse0x31b3360();
   input += synapse0x31b33a0();
   input += synapse0x31b33e0();
   input += synapse0x31b3420();
   input += synapse0x31b3460();
   input += synapse0x31b34a0();
   input += synapse0x31b34e0();
   input += synapse0x31b3520();
   input += synapse0x31b3560();
   input += synapse0x31b2ff0();
   input += synapse0x31b3030();
   input += synapse0x31b36b0();
   input += synapse0x31b36f0();
   input += synapse0x31b3730();
   input += synapse0x31b3770();
   input += synapse0x31b37b0();
   input += synapse0x31b37f0();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31b2e60() {
   double input = input0x31b2e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31b3830() {
   double input = -0.339922;
   input += synapse0x31b3b70();
   input += synapse0x31a3df0();
   input += synapse0x31a3e30();
   input += synapse0x31a4130();
   input += synapse0x31a4170();
   input += synapse0x31a4470();
   input += synapse0x31a44b0();
   input += synapse0x31a47b0();
   input += synapse0x31a47f0();
   input += synapse0x31a4af0();
   input += synapse0x31a4b30();
   input += synapse0x31a4e30();
   input += synapse0x31a4e70();
   input += synapse0x31a5170();
   input += synapse0x31a51b0();
   input += synapse0x31a54b0();
   input += synapse0x31a54f0();
   input += synapse0x31a57f0();
   input += synapse0x31a5830();
   input += synapse0x31a5b30();
   input += synapse0x31a5b70();
   input += synapse0x31a5e70();
   input += synapse0x31a5eb0();
   input += synapse0x31a61b0();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31b3830() {
   double input = input0x31b3830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31b5640() {
   double input = 1.939;
   input += synapse0x31a61f0();
   input += synapse0x31a6eb0();
   input += synapse0x31a6ef0();
   input += synapse0x31b39c0();
   input += synapse0x31b3a00();
   input += synapse0x31a71f0();
   input += synapse0x31a7230();
   input += synapse0x31a7750();
   input += synapse0x31a7790();
   input += synapse0x31a7a90();
   input += synapse0x31a7ad0();
   input += synapse0x31a7dd0();
   input += synapse0x31a7e10();
   input += synapse0x31a8110();
   input += synapse0x31a8150();
   input += synapse0x31a8450();
   input += synapse0x31a8490();
   input += synapse0x31a8790();
   input += synapse0x31a87d0();
   input += synapse0x31a8ad0();
   input += synapse0x31a8b10();
   input += synapse0x31a64f0();
   input += synapse0x31a6530();
   input += synapse0x31b58e0();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31b5640() {
   double input = input0x31b5640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31b5920() {
   double input = -0.0588969;
   input += synapse0x31b5c60();
   input += synapse0x31b5ca0();
   input += synapse0x31b5ce0();
   input += synapse0x31b5d20();
   input += synapse0x31b5d60();
   input += synapse0x31b5da0();
   input += synapse0x31b5de0();
   input += synapse0x31b5e20();
   input += synapse0x31b5e60();
   input += synapse0x31b5ea0();
   input += synapse0x31b5ee0();
   input += synapse0x31b5f20();
   input += synapse0x31b5f60();
   input += synapse0x31b5fa0();
   input += synapse0x31b5fe0();
   input += synapse0x31b6020();
   input += synapse0x31b5ab0();
   input += synapse0x31b5af0();
   input += synapse0x31b6170();
   input += synapse0x31b61b0();
   input += synapse0x31b61f0();
   input += synapse0x31b6230();
   input += synapse0x31b6270();
   input += synapse0x31b62b0();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31b5920() {
   double input = input0x31b5920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31b62f0() {
   double input = -1.27528;
   input += synapse0x31b6630();
   input += synapse0x31b6670();
   input += synapse0x31b66b0();
   input += synapse0x31b66f0();
   input += synapse0x31b6730();
   input += synapse0x31b6770();
   input += synapse0x31b67b0();
   input += synapse0x31b67f0();
   input += synapse0x31b6830();
   input += synapse0x31b6870();
   input += synapse0x31b68b0();
   input += synapse0x31b68f0();
   input += synapse0x31b6930();
   input += synapse0x31b6970();
   input += synapse0x31b69b0();
   input += synapse0x31b69f0();
   input += synapse0x31b6480();
   input += synapse0x31b64c0();
   input += synapse0x31b6b40();
   input += synapse0x31b6b80();
   input += synapse0x31b6bc0();
   input += synapse0x31b6c00();
   input += synapse0x31b6c40();
   input += synapse0x31b6c80();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31b62f0() {
   double input = input0x31b62f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31b6cc0() {
   double input = 1.16431;
   input += synapse0x31b7000();
   input += synapse0x31b7040();
   input += synapse0x31b7080();
   input += synapse0x31b70c0();
   input += synapse0x31b7100();
   input += synapse0x31b7140();
   input += synapse0x31b7180();
   input += synapse0x31b71c0();
   input += synapse0x31b7200();
   input += synapse0x31b7240();
   input += synapse0x31b7280();
   input += synapse0x31b72c0();
   input += synapse0x31b7300();
   input += synapse0x31b7340();
   input += synapse0x31b7380();
   input += synapse0x31b73c0();
   input += synapse0x31b6e50();
   input += synapse0x31b6e90();
   input += synapse0x31b7510();
   input += synapse0x31b7550();
   input += synapse0x31b7590();
   input += synapse0x31b75d0();
   input += synapse0x31b7610();
   input += synapse0x31b7650();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31b6cc0() {
   double input = input0x31b6cc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31b7690() {
   double input = -2.26967;
   input += synapse0x31b79d0();
   input += synapse0x31b7a10();
   input += synapse0x31b7a50();
   input += synapse0x31b7a90();
   input += synapse0x31b7ad0();
   input += synapse0x31b7b10();
   input += synapse0x31b7b50();
   input += synapse0x31b7b90();
   input += synapse0x31b7bd0();
   input += synapse0x31b7c10();
   input += synapse0x31b7c50();
   input += synapse0x31b7c90();
   input += synapse0x31b7cd0();
   input += synapse0x31b7d10();
   input += synapse0x31b7d50();
   input += synapse0x31b7d90();
   input += synapse0x31b7820();
   input += synapse0x31b7860();
   input += synapse0x31b7ee0();
   input += synapse0x31b7f20();
   input += synapse0x31b7f60();
   input += synapse0x31b7fa0();
   input += synapse0x31b7fe0();
   input += synapse0x31b8020();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31b7690() {
   double input = input0x31b7690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31b8060() {
   double input = 1.36186;
   input += synapse0x31b83a0();
   input += synapse0x31b83e0();
   input += synapse0x31b8420();
   input += synapse0x31b8460();
   input += synapse0x31b84a0();
   input += synapse0x31b84e0();
   input += synapse0x31b8520();
   input += synapse0x31b8560();
   input += synapse0x31b85a0();
   input += synapse0x31b0760();
   input += synapse0x31b07a0();
   input += synapse0x31b07e0();
   input += synapse0x31b0820();
   input += synapse0x31b0860();
   input += synapse0x31b08a0();
   input += synapse0x31b08e0();
   input += synapse0x31b81f0();
   input += synapse0x31b8230();
   input += synapse0x31b0a30();
   input += synapse0x31b0a70();
   input += synapse0x31b0ab0();
   input += synapse0x31b0af0();
   input += synapse0x31b0b30();
   input += synapse0x31b0b70();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31b8060() {
   double input = input0x31b8060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31b0bb0() {
   double input = 1.5718;
   input += synapse0x31b0ef0();
   input += synapse0x31b0f30();
   input += synapse0x31b0f70();
   input += synapse0x31b0fb0();
   input += synapse0x31b0ff0();
   input += synapse0x31b1030();
   input += synapse0x31b1070();
   input += synapse0x31b10b0();
   input += synapse0x31b10f0();
   input += synapse0x31b1130();
   input += synapse0x31b1170();
   input += synapse0x31b11b0();
   input += synapse0x31b11f0();
   input += synapse0x31b1230();
   input += synapse0x31b1270();
   input += synapse0x31b12b0();
   input += synapse0x31b0d40();
   input += synapse0x31b0d80();
   input += synapse0x31b1400();
   input += synapse0x31b1440();
   input += synapse0x31b1480();
   input += synapse0x31b14c0();
   input += synapse0x31b1500();
   input += synapse0x31b1540();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31b0bb0() {
   double input = input0x31b0bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31b1580() {
   double input = -0.613886;
   input += synapse0x31b1710();
   input += synapse0x31ba7a0();
   input += synapse0x31ba7e0();
   input += synapse0x31ba820();
   input += synapse0x31ba860();
   input += synapse0x31ba8a0();
   input += synapse0x31ba8e0();
   input += synapse0x31ba920();
   input += synapse0x31ba960();
   input += synapse0x31ba9a0();
   input += synapse0x31ba9e0();
   input += synapse0x31baa20();
   input += synapse0x31baa60();
   input += synapse0x31baaa0();
   input += synapse0x31baae0();
   input += synapse0x31bab20();
   input += synapse0x31ba5f0();
   input += synapse0x31ba630();
   input += synapse0x31bac70();
   input += synapse0x31bacb0();
   input += synapse0x31bacf0();
   input += synapse0x31bad30();
   input += synapse0x31bad70();
   input += synapse0x31badb0();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31b1580() {
   double input = input0x31b1580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31badf0() {
   double input = -2.3636;
   input += synapse0x31bb130();
   input += synapse0x31bb170();
   input += synapse0x31bb1b0();
   input += synapse0x31bb1f0();
   input += synapse0x31bb230();
   input += synapse0x31bb270();
   input += synapse0x31bb2b0();
   input += synapse0x31bb2f0();
   input += synapse0x31bb330();
   input += synapse0x31bb370();
   input += synapse0x31bb3b0();
   input += synapse0x31bb3f0();
   input += synapse0x31bb430();
   input += synapse0x31bb470();
   input += synapse0x31bb4b0();
   input += synapse0x31bb4f0();
   input += synapse0x31baf80();
   input += synapse0x31bafc0();
   input += synapse0x31bb640();
   input += synapse0x31bb680();
   input += synapse0x31bb6c0();
   input += synapse0x31bb700();
   input += synapse0x31bb740();
   input += synapse0x31bb780();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31badf0() {
   double input = input0x31badf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31bb7c0() {
   double input = -0.94682;
   input += synapse0x31bbb00();
   input += synapse0x31bbb40();
   input += synapse0x31bbb80();
   input += synapse0x31bbbc0();
   input += synapse0x31bbc00();
   input += synapse0x31bbc40();
   input += synapse0x31bbc80();
   input += synapse0x31bbcc0();
   input += synapse0x31bbd00();
   input += synapse0x31bbd40();
   input += synapse0x31bbd80();
   input += synapse0x31bbdc0();
   input += synapse0x31bbe00();
   input += synapse0x31bbe40();
   input += synapse0x31bbe80();
   input += synapse0x31bbec0();
   input += synapse0x31bb950();
   input += synapse0x31bb990();
   input += synapse0x31bc010();
   input += synapse0x31bc050();
   input += synapse0x31bc090();
   input += synapse0x31bc0d0();
   input += synapse0x31bc110();
   input += synapse0x31bc150();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31bb7c0() {
   double input = input0x31bb7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31bc190() {
   double input = -0.547378;
   input += synapse0x31bc4d0();
   input += synapse0x31bc510();
   input += synapse0x31bc550();
   input += synapse0x31bc590();
   input += synapse0x31bc5d0();
   input += synapse0x31bc610();
   input += synapse0x31bc650();
   input += synapse0x31bc690();
   input += synapse0x31bc6d0();
   input += synapse0x31bc710();
   input += synapse0x31bc750();
   input += synapse0x31bc790();
   input += synapse0x31bc7d0();
   input += synapse0x31bc810();
   input += synapse0x31bc850();
   input += synapse0x31bc890();
   input += synapse0x31bc320();
   input += synapse0x31bc360();
   input += synapse0x31bc9e0();
   input += synapse0x31bca20();
   input += synapse0x31bca60();
   input += synapse0x31bcaa0();
   input += synapse0x31bcae0();
   input += synapse0x31bcb20();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31bc190() {
   double input = input0x31bc190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31bcb60() {
   double input = -0.146975;
   input += synapse0x31bcea0();
   input += synapse0x31bcee0();
   input += synapse0x31bcf20();
   input += synapse0x31bcf60();
   input += synapse0x31bcfa0();
   input += synapse0x31bcfe0();
   input += synapse0x31bd020();
   input += synapse0x31bd060();
   input += synapse0x31bd0a0();
   input += synapse0x31bd0e0();
   input += synapse0x31bd120();
   input += synapse0x31bd160();
   input += synapse0x31bd1a0();
   input += synapse0x31bd1e0();
   input += synapse0x31bd220();
   input += synapse0x31bd260();
   input += synapse0x31bccf0();
   input += synapse0x31bcd30();
   input += synapse0x31bd3b0();
   input += synapse0x31bd3f0();
   input += synapse0x31bd430();
   input += synapse0x31bd470();
   input += synapse0x31bd4b0();
   input += synapse0x31bd4f0();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31bcb60() {
   double input = input0x31bcb60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31bd530() {
   double input = 1.53505;
   input += synapse0x31bd870();
   input += synapse0x31bd8b0();
   input += synapse0x31bd8f0();
   input += synapse0x31bd930();
   input += synapse0x31bd970();
   input += synapse0x31bd9b0();
   input += synapse0x31bd9f0();
   input += synapse0x31bda30();
   input += synapse0x31bda70();
   input += synapse0x31bdab0();
   input += synapse0x31bdaf0();
   input += synapse0x31bdb30();
   input += synapse0x31bdb70();
   input += synapse0x31bdbb0();
   input += synapse0x31bdbf0();
   input += synapse0x31bdc30();
   input += synapse0x31bd6c0();
   input += synapse0x31bd700();
   input += synapse0x31bdd80();
   input += synapse0x31bddc0();
   input += synapse0x31bde00();
   input += synapse0x31bde40();
   input += synapse0x31bde80();
   input += synapse0x31bdec0();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31bd530() {
   double input = input0x31bd530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31bdf00() {
   double input = 1.41755;
   input += synapse0x31be240();
   input += synapse0x31be280();
   input += synapse0x31be2c0();
   input += synapse0x31be300();
   input += synapse0x31be340();
   input += synapse0x31be380();
   input += synapse0x31be3c0();
   input += synapse0x31be400();
   input += synapse0x31be440();
   input += synapse0x31be480();
   input += synapse0x31be4c0();
   input += synapse0x31be500();
   input += synapse0x31be540();
   input += synapse0x31be580();
   input += synapse0x31be5c0();
   input += synapse0x31be600();
   input += synapse0x31be090();
   input += synapse0x31be0d0();
   input += synapse0x31be750();
   input += synapse0x31be790();
   input += synapse0x31be7d0();
   input += synapse0x31be810();
   input += synapse0x31be850();
   input += synapse0x31be890();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31bdf00() {
   double input = input0x31bdf00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31be8d0() {
   double input = 0.410823;
   input += synapse0x31bec10();
   input += synapse0x31bec50();
   input += synapse0x31bec90();
   input += synapse0x31becd0();
   input += synapse0x31bed10();
   input += synapse0x31bed50();
   input += synapse0x31bed90();
   input += synapse0x31bedd0();
   input += synapse0x31bee10();
   input += synapse0x31bee50();
   input += synapse0x31bee90();
   input += synapse0x31beed0();
   input += synapse0x31bef10();
   input += synapse0x31bef50();
   input += synapse0x31bef90();
   input += synapse0x31befd0();
   input += synapse0x31bea60();
   input += synapse0x31beaa0();
   input += synapse0x31bf120();
   input += synapse0x31bf160();
   input += synapse0x31bf1a0();
   input += synapse0x31bf1e0();
   input += synapse0x31bf220();
   input += synapse0x31bf260();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31be8d0() {
   double input = input0x31be8d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31bf2a0() {
   double input = 2.44736;
   input += synapse0x31bf5e0();
   input += synapse0x31b3bb0();
   input += synapse0x31b3bf0();
   input += synapse0x31b3c30();
   input += synapse0x31b3e80();
   input += synapse0x31b3ec0();
   input += synapse0x31b3f00();
   input += synapse0x31b4150();
   input += synapse0x31b4190();
   input += synapse0x31b43e0();
   input += synapse0x31b4420();
   input += synapse0x31b4460();
   input += synapse0x31b46b0();
   input += synapse0x31b46f0();
   input += synapse0x31b4940();
   input += synapse0x31b4980();
   input += synapse0x31bf430();
   input += synapse0x31bf470();
   input += synapse0x31b4ad0();
   input += synapse0x31b4fe0();
   input += synapse0x31b5020();
   input += synapse0x31b5060();
   input += synapse0x31b52b0();
   input += synapse0x31b52f0();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31bf2a0() {
   double input = input0x31bf2a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31b5330() {
   double input = -0.596474;
   input += synapse0x31b4ba0();
   input += synapse0x31b4be0();
   input += synapse0x31b4c20();
   input += synapse0x31b4c60();
   input += synapse0x31b55e0();
   input += synapse0x31c1930();
   input += synapse0x31c1970();
   input += synapse0x31c19b0();
   input += synapse0x31c19f0();
   input += synapse0x31c1a30();
   input += synapse0x31c1a70();
   input += synapse0x31c1ab0();
   input += synapse0x31c1af0();
   input += synapse0x31c1b30();
   input += synapse0x31c1b70();
   input += synapse0x31c1bb0();
   input += synapse0x31b54c0();
   input += synapse0x31b5500();
   input += synapse0x31c1d00();
   input += synapse0x31c1d40();
   input += synapse0x31c1d80();
   input += synapse0x31c1dc0();
   input += synapse0x31c1e00();
   input += synapse0x31c1e40();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31b5330() {
   double input = input0x31b5330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31c1e80() {
   double input = 0.595016;
   input += synapse0x31c21c0();
   input += synapse0x31c2200();
   input += synapse0x31c2240();
   input += synapse0x31c2280();
   input += synapse0x31c22c0();
   input += synapse0x31c2300();
   input += synapse0x31c2340();
   input += synapse0x31c2380();
   input += synapse0x31c23c0();
   input += synapse0x31c2400();
   input += synapse0x31c2440();
   input += synapse0x31c2480();
   input += synapse0x31c24c0();
   input += synapse0x31c2500();
   input += synapse0x31c2540();
   input += synapse0x31c2580();
   input += synapse0x31c2010();
   input += synapse0x31c2050();
   input += synapse0x31c26d0();
   input += synapse0x31c2710();
   input += synapse0x31c2750();
   input += synapse0x31c2790();
   input += synapse0x31c27d0();
   input += synapse0x31c2810();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31c1e80() {
   double input = input0x31c1e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31c2850() {
   double input = 2.34503;
   input += synapse0x31c2b90();
   input += synapse0x31c2bd0();
   input += synapse0x31c2c10();
   input += synapse0x31c2c50();
   input += synapse0x31c2c90();
   input += synapse0x31c2cd0();
   input += synapse0x31c2d10();
   input += synapse0x31c2d50();
   input += synapse0x31c2d90();
   input += synapse0x31c2dd0();
   input += synapse0x31c2e10();
   input += synapse0x31c2e50();
   input += synapse0x31c2e90();
   input += synapse0x31c2ed0();
   input += synapse0x31c2f10();
   input += synapse0x31c2f50();
   input += synapse0x31c29e0();
   input += synapse0x31c2a20();
   input += synapse0x31c30a0();
   input += synapse0x31c30e0();
   input += synapse0x31c3120();
   input += synapse0x31c3160();
   input += synapse0x31c31a0();
   input += synapse0x31c31e0();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31c2850() {
   double input = input0x31c2850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31c3220() {
   double input = -1.91102;
   input += synapse0x31c3560();
   input += synapse0x31c35a0();
   input += synapse0x31c35e0();
   input += synapse0x31c3620();
   input += synapse0x31c3660();
   input += synapse0x31c36a0();
   input += synapse0x31c36e0();
   input += synapse0x31c3720();
   input += synapse0x31c3760();
   input += synapse0x31c37a0();
   input += synapse0x31c37e0();
   input += synapse0x31c3820();
   input += synapse0x31c3860();
   input += synapse0x31c38a0();
   input += synapse0x31c38e0();
   input += synapse0x31c3920();
   input += synapse0x31c33b0();
   input += synapse0x31c33f0();
   input += synapse0x31c3a70();
   input += synapse0x31c3ab0();
   input += synapse0x31c3af0();
   input += synapse0x31c3b30();
   input += synapse0x31c3b70();
   input += synapse0x31c3bb0();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31c3220() {
   double input = input0x31c3220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31c3bf0() {
   double input = -0.288282;
   input += synapse0x31c3f30();
   input += synapse0x31c3f70();
   input += synapse0x31c3fb0();
   input += synapse0x31c3ff0();
   input += synapse0x31c4030();
   input += synapse0x31c4070();
   input += synapse0x31c40b0();
   input += synapse0x31c40f0();
   input += synapse0x31c4130();
   input += synapse0x31c4170();
   input += synapse0x31c41b0();
   input += synapse0x31c41f0();
   input += synapse0x31c4230();
   input += synapse0x31c4270();
   input += synapse0x31c42b0();
   input += synapse0x31c42f0();
   input += synapse0x31c3d80();
   input += synapse0x31c3dc0();
   input += synapse0x31c4440();
   input += synapse0x31c4480();
   input += synapse0x31c44c0();
   input += synapse0x31c4500();
   input += synapse0x31c4540();
   input += synapse0x31c4580();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31c3bf0() {
   double input = input0x31c3bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31c45c0() {
   double input = 0.293573;
   input += synapse0x31c4900();
   input += synapse0x31c4940();
   input += synapse0x31c4980();
   input += synapse0x31c49c0();
   input += synapse0x31c4a00();
   input += synapse0x31c4a40();
   input += synapse0x31c4a80();
   input += synapse0x31c4ac0();
   input += synapse0x31c4b00();
   input += synapse0x31c4b40();
   input += synapse0x31c4b80();
   input += synapse0x31c4bc0();
   input += synapse0x31c4c00();
   input += synapse0x31c4c40();
   input += synapse0x31c4c80();
   input += synapse0x31c4cc0();
   input += synapse0x31c4750();
   input += synapse0x31c4790();
   input += synapse0x31c4e10();
   input += synapse0x31c4e50();
   input += synapse0x31c4e90();
   input += synapse0x31c4ed0();
   input += synapse0x31c4f10();
   input += synapse0x31c4f50();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31c45c0() {
   double input = input0x31c45c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31c4f90() {
   double input = -0.856482;
   input += synapse0x31c52d0();
   input += synapse0x31c5310();
   input += synapse0x31c5350();
   input += synapse0x31c5390();
   input += synapse0x31c53d0();
   input += synapse0x31c5410();
   input += synapse0x31c5450();
   input += synapse0x31c5490();
   input += synapse0x31c54d0();
   input += synapse0x31c5510();
   input += synapse0x31c5550();
   input += synapse0x31c5590();
   input += synapse0x31c55d0();
   input += synapse0x31c5610();
   input += synapse0x31c5650();
   input += synapse0x31c5690();
   input += synapse0x31c5120();
   input += synapse0x31c5160();
   input += synapse0x31c57e0();
   input += synapse0x31c5820();
   input += synapse0x31c5860();
   input += synapse0x31c58a0();
   input += synapse0x31c58e0();
   input += synapse0x31c5920();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31c4f90() {
   double input = input0x31c4f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31c5960() {
   double input = 1.06064;
   input += synapse0x31c5ca0();
   input += synapse0x31c5ce0();
   input += synapse0x31c5d20();
   input += synapse0x31c5d60();
   input += synapse0x31c5da0();
   input += synapse0x31c5de0();
   input += synapse0x31c5e20();
   input += synapse0x31c5e60();
   input += synapse0x31c5ea0();
   input += synapse0x31c5ee0();
   input += synapse0x31c5f20();
   input += synapse0x31c5f60();
   input += synapse0x31c5fa0();
   input += synapse0x31c5fe0();
   input += synapse0x31c6020();
   input += synapse0x31c6060();
   input += synapse0x31c5af0();
   input += synapse0x31c5b30();
   input += synapse0x31c61b0();
   input += synapse0x31c61f0();
   input += synapse0x31c6230();
   input += synapse0x31c6270();
   input += synapse0x31c62b0();
   input += synapse0x31c62f0();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31c5960() {
   double input = input0x31c5960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31c6330() {
   double input = -4.70123;
   input += synapse0x31aeda0();
   input += synapse0x31aede0();
   input += synapse0x31aee20();
   input += synapse0x31aee60();
   input += synapse0x31aeea0();
   input += synapse0x31aeee0();
   input += synapse0x31aef20();
   input += synapse0x31aef60();
   input += synapse0x31c6a80();
   input += synapse0x31c6ac0();
   input += synapse0x31c6b00();
   input += synapse0x31c6b40();
   input += synapse0x31c6b80();
   input += synapse0x31c6bc0();
   input += synapse0x31c6c00();
   input += synapse0x31c6c40();
   input += synapse0x31c64c0();
   input += synapse0x31c6500();
   input += synapse0x31c6d90();
   input += synapse0x31c6dd0();
   input += synapse0x31c6e10();
   input += synapse0x31c6e50();
   input += synapse0x31c6e90();
   input += synapse0x31c6ed0();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31c6330() {
   double input = input0x31c6330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31c6f10() {
   double input = -1.52668;
   input += synapse0x31c7250();
   input += synapse0x31c7290();
   input += synapse0x31c72d0();
   input += synapse0x31c7310();
   input += synapse0x31c7350();
   input += synapse0x31c7390();
   input += synapse0x31c73d0();
   input += synapse0x31c7410();
   input += synapse0x31c7450();
   input += synapse0x31c7490();
   input += synapse0x31c74d0();
   input += synapse0x31c7510();
   input += synapse0x31c7550();
   input += synapse0x31c7590();
   input += synapse0x31c75d0();
   input += synapse0x31c7610();
   input += synapse0x31c70a0();
   input += synapse0x31c70e0();
   input += synapse0x31c7760();
   input += synapse0x31c77a0();
   input += synapse0x31c77e0();
   input += synapse0x31c7820();
   input += synapse0x31c7860();
   input += synapse0x31c78a0();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31c6f10() {
   double input = input0x31c6f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31c78e0() {
   double input = 0.666519;
   input += synapse0x31c7c20();
   input += synapse0x31c7c60();
   input += synapse0x31c7ca0();
   input += synapse0x31c7ce0();
   input += synapse0x31c7d20();
   input += synapse0x31c7d60();
   input += synapse0x31c7da0();
   input += synapse0x31c7de0();
   input += synapse0x31c7e20();
   input += synapse0x31c7e60();
   input += synapse0x31c7ea0();
   input += synapse0x31c7ee0();
   input += synapse0x31c7f20();
   input += synapse0x31c7f60();
   input += synapse0x31c7fa0();
   input += synapse0x31c7fe0();
   input += synapse0x31c7a70();
   input += synapse0x31c7ab0();
   input += synapse0x31b85e0();
   input += synapse0x31b8620();
   input += synapse0x31b8660();
   input += synapse0x31b86a0();
   input += synapse0x31b86e0();
   input += synapse0x31b8720();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31c78e0() {
   double input = input0x31c78e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31b8760() {
   double input = 0.0691544;
   input += synapse0x31b8aa0();
   input += synapse0x31b8ae0();
   input += synapse0x31b8b20();
   input += synapse0x31b8b60();
   input += synapse0x31b8ba0();
   input += synapse0x31b8be0();
   input += synapse0x31b8c20();
   input += synapse0x31b8c60();
   input += synapse0x31b8ca0();
   input += synapse0x31b8ce0();
   input += synapse0x31b8d20();
   input += synapse0x31b8d60();
   input += synapse0x31b8da0();
   input += synapse0x31b8de0();
   input += synapse0x31b8e20();
   input += synapse0x31b8e60();
   input += synapse0x31b88f0();
   input += synapse0x31b8930();
   input += synapse0x31b8fb0();
   input += synapse0x31b8ff0();
   input += synapse0x31b9030();
   input += synapse0x31b9070();
   input += synapse0x31b90b0();
   input += synapse0x31b90f0();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31b8760() {
   double input = input0x31b8760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31b9130() {
   double input = 2.2415;
   input += synapse0x31b9470();
   input += synapse0x31b94b0();
   input += synapse0x31b94f0();
   input += synapse0x31b9530();
   input += synapse0x31b9570();
   input += synapse0x31b95b0();
   input += synapse0x31b95f0();
   input += synapse0x31b9630();
   input += synapse0x31b9670();
   input += synapse0x31b96b0();
   input += synapse0x31b96f0();
   input += synapse0x31b9730();
   input += synapse0x31b9770();
   input += synapse0x31b97b0();
   input += synapse0x31b97f0();
   input += synapse0x31b9830();
   input += synapse0x31b92c0();
   input += synapse0x31b9300();
   input += synapse0x31b9980();
   input += synapse0x31b99c0();
   input += synapse0x31b9a00();
   input += synapse0x31b9a40();
   input += synapse0x31b9a80();
   input += synapse0x31b9ac0();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31b9130() {
   double input = input0x31b9130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31b9b00() {
   double input = -1.48377;
   input += synapse0x31b9e40();
   input += synapse0x31b9e80();
   input += synapse0x31b9ec0();
   input += synapse0x31b9f00();
   input += synapse0x31b9f40();
   input += synapse0x31b9f80();
   input += synapse0x31b9fc0();
   input += synapse0x31ba000();
   input += synapse0x31ba040();
   input += synapse0x31ba080();
   input += synapse0x31ba0c0();
   input += synapse0x31ba100();
   input += synapse0x31ba140();
   input += synapse0x31ba180();
   input += synapse0x31ba1c0();
   input += synapse0x31ba200();
   input += synapse0x31b9c90();
   input += synapse0x31b9cd0();
   input += synapse0x31ba350();
   input += synapse0x31ba390();
   input += synapse0x31ba3d0();
   input += synapse0x31ba410();
   input += synapse0x31ba450();
   input += synapse0x31ba490();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31b9b00() {
   double input = input0x31b9b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31cc140() {
   double input = -6.36531;
   input += synapse0x31cc360();
   input += synapse0x31cc3a0();
   input += synapse0x31cc3e0();
   input += synapse0x31cc420();
   input += synapse0x31cc460();
   input += synapse0x31cc4a0();
   input += synapse0x31cc4e0();
   input += synapse0x31cc520();
   input += synapse0x31cc560();
   input += synapse0x31cc5a0();
   input += synapse0x31cc5e0();
   input += synapse0x31cc620();
   input += synapse0x31cc660();
   input += synapse0x31cc6a0();
   input += synapse0x31cc6e0();
   input += synapse0x31cc720();
   input += synapse0x31ba4d0();
   input += synapse0x31ba510();
   input += synapse0x31cc870();
   input += synapse0x31cc8b0();
   input += synapse0x31cc8f0();
   input += synapse0x31cc930();
   input += synapse0x31cc970();
   input += synapse0x31cc9b0();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31cc140() {
   double input = input0x31cc140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31cc9f0() {
   double input = 0.10438;
   input += synapse0x31ccd30();
   input += synapse0x31ccd70();
   input += synapse0x31ccdb0();
   input += synapse0x31ccdf0();
   input += synapse0x31cce30();
   input += synapse0x31cce70();
   input += synapse0x31cceb0();
   input += synapse0x31ccef0();
   input += synapse0x31ccf30();
   input += synapse0x31ccf70();
   input += synapse0x31ccfb0();
   input += synapse0x31ccff0();
   input += synapse0x31cd030();
   input += synapse0x31cd070();
   input += synapse0x31cd0b0();
   input += synapse0x31cd0f0();
   input += synapse0x31ccb80();
   input += synapse0x31ccbc0();
   input += synapse0x31cd240();
   input += synapse0x31cd280();
   input += synapse0x31cd2c0();
   input += synapse0x31cd300();
   input += synapse0x31cd340();
   input += synapse0x31cd380();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31cc9f0() {
   double input = input0x31cc9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31cd3c0() {
   double input = -0.392814;
   input += synapse0x31cd700();
   input += synapse0x31cd740();
   input += synapse0x31cd780();
   input += synapse0x31cd7c0();
   input += synapse0x31cd800();
   input += synapse0x31cd840();
   input += synapse0x31cd880();
   input += synapse0x31cd8c0();
   input += synapse0x31cd900();
   input += synapse0x31cd940();
   input += synapse0x31cd980();
   input += synapse0x31cd9c0();
   input += synapse0x31cda00();
   input += synapse0x31cda40();
   input += synapse0x31cda80();
   input += synapse0x31cdac0();
   input += synapse0x31cd550();
   input += synapse0x31cd590();
   input += synapse0x31cdc10();
   input += synapse0x31cdc50();
   input += synapse0x31cdc90();
   input += synapse0x31cdcd0();
   input += synapse0x31cdd10();
   input += synapse0x31cdd50();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31cd3c0() {
   double input = input0x31cd3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31cdd90() {
   double input = -1.00854;
   input += synapse0x31ce0d0();
   input += synapse0x31ce110();
   input += synapse0x31ce150();
   input += synapse0x31ce190();
   input += synapse0x31ce1d0();
   input += synapse0x31ce210();
   input += synapse0x31ce250();
   input += synapse0x31ce290();
   input += synapse0x31ce2d0();
   input += synapse0x31ce310();
   input += synapse0x31ce350();
   input += synapse0x31ce390();
   input += synapse0x31ce3d0();
   input += synapse0x31ce410();
   input += synapse0x31ce450();
   input += synapse0x31ce490();
   input += synapse0x31cdf20();
   input += synapse0x31cdf60();
   input += synapse0x31ce5e0();
   input += synapse0x31ce620();
   input += synapse0x31ce660();
   input += synapse0x31ce6a0();
   input += synapse0x31ce6e0();
   input += synapse0x31ce720();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31cdd90() {
   double input = input0x31cdd90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31d4f90() {
   double input = -0.751133;
   input += synapse0x2f6e590();
   input += synapse0x2f6e5d0();
   input += synapse0x31ab0d0();
   input += synapse0x31ab110();
   input += synapse0x31acba0();
   input += synapse0x31acbe0();
   input += synapse0x31ad970();
   input += synapse0x31ad9b0();
   input += synapse0x31ae340();
   input += synapse0x31ae380();
   input += synapse0x31aed10();
   input += synapse0x31aed50();
   input += synapse0x31af7f0();
   input += synapse0x31af830();
   input += synapse0x31b01c0();
   input += synapse0x31b0200();
   input += synapse0x31ad2a0();
   input += synapse0x31ad2e0();
   input += synapse0x31b1d70();
   input += synapse0x31b1db0();
   input += synapse0x31b2740();
   input += synapse0x31b2780();
   input += synapse0x31b3110();
   input += synapse0x31b3150();
   input += synapse0x31b3ae0();
   input += synapse0x31b3b20();
   input += synapse0x31a6b70();
   input += synapse0x31a6bb0();
   input += synapse0x31b5bd0();
   input += synapse0x31b5c10();
   input += synapse0x31b65a0();
   input += synapse0x31b65e0();
   input += synapse0x31b6f70();
   input += synapse0x31b6fb0();
   input += synapse0x31b7940();
   input += synapse0x31b7980();
   input += synapse0x31b8310();
   input += synapse0x31b8350();
   input += synapse0x31b0e60();
   input += synapse0x31b0ea0();
   input += synapse0x31ba710();
   input += synapse0x31ba750();
   input += synapse0x31bb0a0();
   input += synapse0x31bb0e0();
   input += synapse0x31bba70();
   input += synapse0x31bbab0();
   input += synapse0x31bc440();
   input += synapse0x31bc480();
   input += synapse0x31bce10();
   input += synapse0x31bce50();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31d4f90() {
   double input = input0x31d4f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31d5330() {
   double input = -0.510746;
   input += synapse0x31bf550();
   input += synapse0x31bf590();
   input += synapse0x31b4b10();
   input += synapse0x31b4b50();
   input += synapse0x31c2130();
   input += synapse0x31c2170();
   input += synapse0x31c2b00();
   input += synapse0x31c2b40();
   input += synapse0x31c34d0();
   input += synapse0x31c3510();
   input += synapse0x31c3ea0();
   input += synapse0x31c3ee0();
   input += synapse0x31c4870();
   input += synapse0x31c48b0();
   input += synapse0x31c5240();
   input += synapse0x31c5280();
   input += synapse0x31c5c10();
   input += synapse0x31c5c50();
   input += synapse0x31c65e0();
   input += synapse0x31c6620();
   input += synapse0x31c71c0();
   input += synapse0x31c7200();
   input += synapse0x31c7b90();
   input += synapse0x31c7bd0();
   input += synapse0x31b8a10();
   input += synapse0x31b8a50();
   input += synapse0x31b93e0();
   input += synapse0x31b9420();
   input += synapse0x31b9db0();
   input += synapse0x31b9df0();
   input += synapse0x31cc2d0();
   input += synapse0x31cc310();
   input += synapse0x31ccca0();
   input += synapse0x31ccce0();
   input += synapse0x31cd670();
   input += synapse0x31cd6b0();
   input += synapse0x31ce040();
   input += synapse0x31ce080();
   input += synapse0x31a8fd0();
   input += synapse0x31a9010();
   input += synapse0x31bd7e0();
   input += synapse0x31bd820();
   input += synapse0x31ce760();
   input += synapse0x31ce7a0();
   input += synapse0x31ce7e0();
   input += synapse0x31ce820();
   input += synapse0x31d56d0();
   input += synapse0x31d5710();
   input += synapse0x31d5750();
   input += synapse0x31d5790();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31d5330() {
   double input = input0x31d5330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31d57d0() {
   double input = 1.27844;
   input += synapse0x31d5b10();
   input += synapse0x31d5b50();
   input += synapse0x31d5b90();
   input += synapse0x31d5bd0();
   input += synapse0x31d5c10();
   input += synapse0x31d5c50();
   input += synapse0x31d5c90();
   input += synapse0x31d5cd0();
   input += synapse0x31d5d10();
   input += synapse0x31d5d50();
   input += synapse0x31d5d90();
   input += synapse0x31d5dd0();
   input += synapse0x31d5e10();
   input += synapse0x31d5e50();
   input += synapse0x31d5e90();
   input += synapse0x31d5ed0();
   input += synapse0x31d5960();
   input += synapse0x31d59a0();
   input += synapse0x31d6020();
   input += synapse0x31d6060();
   input += synapse0x31d60a0();
   input += synapse0x31d60e0();
   input += synapse0x31d6120();
   input += synapse0x31d6160();
   input += synapse0x31d61a0();
   input += synapse0x31d61e0();
   input += synapse0x31d6220();
   input += synapse0x31d6260();
   input += synapse0x31d62a0();
   input += synapse0x31d62e0();
   input += synapse0x31d6320();
   input += synapse0x31d6360();
   input += synapse0x31d5f10();
   input += synapse0x31d5f50();
   input += synapse0x31d5f90();
   input += synapse0x31d5fd0();
   input += synapse0x31d65b0();
   input += synapse0x31d65f0();
   input += synapse0x31d6630();
   input += synapse0x31d6670();
   input += synapse0x31d66b0();
   input += synapse0x31d66f0();
   input += synapse0x31d6730();
   input += synapse0x31d6770();
   input += synapse0x31d67b0();
   input += synapse0x31d67f0();
   input += synapse0x31d6830();
   input += synapse0x31d6870();
   input += synapse0x31d68b0();
   input += synapse0x31d68f0();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31d57d0() {
   double input = input0x31d57d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31d6930() {
   double input = -2.76401;
   input += synapse0x31d6c70();
   input += synapse0x31d6cb0();
   input += synapse0x31d6cf0();
   input += synapse0x31d6d30();
   input += synapse0x31d6d70();
   input += synapse0x31d6db0();
   input += synapse0x31d6df0();
   input += synapse0x31d6e30();
   input += synapse0x31d6e70();
   input += synapse0x31d6eb0();
   input += synapse0x31d6ef0();
   input += synapse0x31d6f30();
   input += synapse0x31d6f70();
   input += synapse0x31d6fb0();
   input += synapse0x31d6ff0();
   input += synapse0x31d7030();
   input += synapse0x31d6ac0();
   input += synapse0x31d6b00();
   input += synapse0x31d7180();
   input += synapse0x31d71c0();
   input += synapse0x31d7200();
   input += synapse0x31d7240();
   input += synapse0x31d7280();
   input += synapse0x31d72c0();
   input += synapse0x31d7300();
   input += synapse0x31d7340();
   input += synapse0x31d7380();
   input += synapse0x31d73c0();
   input += synapse0x31d7400();
   input += synapse0x31d7440();
   input += synapse0x31d7480();
   input += synapse0x31d74c0();
   input += synapse0x31d7070();
   input += synapse0x31d70b0();
   input += synapse0x31d70f0();
   input += synapse0x31d7130();
   input += synapse0x31d7710();
   input += synapse0x31d7750();
   input += synapse0x31d7790();
   input += synapse0x31d77d0();
   input += synapse0x31d7810();
   input += synapse0x31d7850();
   input += synapse0x31d7890();
   input += synapse0x31d78d0();
   input += synapse0x31d7910();
   input += synapse0x31d7950();
   input += synapse0x31d7990();
   input += synapse0x31d79d0();
   input += synapse0x31d7a10();
   input += synapse0x31d7a50();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31d6930() {
   double input = input0x31d6930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31d7a90() {
   double input = -0.0328306;
   input += synapse0x31d7dd0();
   input += synapse0x31d7e10();
   input += synapse0x31d7e50();
   input += synapse0x31d7e90();
   input += synapse0x31d7ed0();
   input += synapse0x31d7f10();
   input += synapse0x31d7f50();
   input += synapse0x31d7f90();
   input += synapse0x31d7fd0();
   input += synapse0x31d8010();
   input += synapse0x31d8050();
   input += synapse0x31d8090();
   input += synapse0x31d80d0();
   input += synapse0x31d8110();
   input += synapse0x31d8150();
   input += synapse0x31d8190();
   input += synapse0x31d7c20();
   input += synapse0x31d7c60();
   input += synapse0x31d82e0();
   input += synapse0x31d8320();
   input += synapse0x31d8360();
   input += synapse0x31d83a0();
   input += synapse0x31d83e0();
   input += synapse0x31d8420();
   input += synapse0x31d8460();
   input += synapse0x31d84a0();
   input += synapse0x31d84e0();
   input += synapse0x31d8520();
   input += synapse0x31d8560();
   input += synapse0x31d85a0();
   input += synapse0x31d85e0();
   input += synapse0x31d8620();
   input += synapse0x31d81d0();
   input += synapse0x31d8210();
   input += synapse0x31d8250();
   input += synapse0x31d8290();
   input += synapse0x31d8870();
   input += synapse0x31d88b0();
   input += synapse0x31d88f0();
   input += synapse0x31d8930();
   input += synapse0x31d8970();
   input += synapse0x31d89b0();
   input += synapse0x31d89f0();
   input += synapse0x31d8a30();
   input += synapse0x31d8a70();
   input += synapse0x31d8ab0();
   input += synapse0x31d8af0();
   input += synapse0x31d8b30();
   input += synapse0x31d8b70();
   input += synapse0x31d8bb0();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31d7a90() {
   double input = input0x31d7a90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uL::input0x31d8bf0() {
   double input = 6.86967;
   input += synapse0x31d8e10();
   input += synapse0x31d8e50();
   input += synapse0x31d8e90();
   input += synapse0x31d8ed0();
   input += synapse0x31d8f10();
   return input;
}

double NNfunction_ns_chi03_uL::neuron0x31d8bf0() {
   double input = input0x31d8bf0();
   return (input * 1)+0;
}

double NNfunction_ns_chi03_uL::synapse0x31a9060() {
   return (neuron0x31a3c60()*-0.115328);
}

double NNfunction_ns_chi03_uL::synapse0x31a90a0() {
   return (neuron0x31a3f10()*0.119377);
}

double NNfunction_ns_chi03_uL::synapse0x31a90e0() {
   return (neuron0x31a4250()*-0.461443);
}

double NNfunction_ns_chi03_uL::synapse0x31a9120() {
   return (neuron0x31a4590()*0.0921349);
}

double NNfunction_ns_chi03_uL::synapse0x31a9160() {
   return (neuron0x31a48d0()*-0.0193662);
}

double NNfunction_ns_chi03_uL::synapse0x31a91a0() {
   return (neuron0x31a4c10()*-0.0522631);
}

double NNfunction_ns_chi03_uL::synapse0x31a91e0() {
   return (neuron0x31a4f50()*-0.0118907);
}

double NNfunction_ns_chi03_uL::synapse0x31a9220() {
   return (neuron0x31a5290()*-0.000625997);
}

double NNfunction_ns_chi03_uL::synapse0x31a9260() {
   return (neuron0x31a55d0()*0.0826397);
}

double NNfunction_ns_chi03_uL::synapse0x31a92a0() {
   return (neuron0x31a5910()*-0.00159571);
}

double NNfunction_ns_chi03_uL::synapse0x31a92e0() {
   return (neuron0x31a5c50()*0.0423966);
}

double NNfunction_ns_chi03_uL::synapse0x31a9320() {
   return (neuron0x31a5f90()*0.87346);
}

double NNfunction_ns_chi03_uL::synapse0x31a9360() {
   return (neuron0x31a62d0()*-0.0393126);
}

double NNfunction_ns_chi03_uL::synapse0x31a93a0() {
   return (neuron0x31a6610()*0.118087);
}

double NNfunction_ns_chi03_uL::synapse0x31a93e0() {
   return (neuron0x31a6950()*-0.0584076);
}

double NNfunction_ns_chi03_uL::synapse0x31a9420() {
   return (neuron0x31a6c90()*-0.123039);
}

double NNfunction_ns_chi03_uL::synapse0x31a8eb0() {
   return (neuron0x31a6fd0()*0.123779);
}

double NNfunction_ns_chi03_uL::synapse0x31a8ef0() {
   return (neuron0x31a7530()*0.048887);
}

double NNfunction_ns_chi03_uL::synapse0x2f5fde0() {
   return (neuron0x31a7870()*-0.02739);
}

double NNfunction_ns_chi03_uL::synapse0x2f5fe20() {
   return (neuron0x31a7bb0()*-0.0851437);
}

double NNfunction_ns_chi03_uL::synapse0x31a9460() {
   return (neuron0x31a7ef0()*-0.0501277);
}

double NNfunction_ns_chi03_uL::synapse0x31a94a0() {
   return (neuron0x31a8230()*-0.00620817);
}

double NNfunction_ns_chi03_uL::synapse0x31a94e0() {
   return (neuron0x31a8570()*-0.000384732);
}

double NNfunction_ns_chi03_uL::synapse0x31a9520() {
   return (neuron0x31a88b0()*-4.93776);
}

double NNfunction_ns_chi03_uL::synapse0x31a98a0() {
   return (neuron0x31a3c60()*-0.84446);
}

double NNfunction_ns_chi03_uL::synapse0x31a98e0() {
   return (neuron0x31a3f10()*0.0254555);
}

double NNfunction_ns_chi03_uL::synapse0x31a9920() {
   return (neuron0x31a4250()*0.125856);
}

double NNfunction_ns_chi03_uL::synapse0x31a9960() {
   return (neuron0x31a4590()*-0.107008);
}

double NNfunction_ns_chi03_uL::synapse0x31a99a0() {
   return (neuron0x31a48d0()*-1.11238);
}

double NNfunction_ns_chi03_uL::synapse0x31a99e0() {
   return (neuron0x31a4c10()*0.247462);
}

double NNfunction_ns_chi03_uL::synapse0x31a9a20() {
   return (neuron0x31a4f50()*-0.917935);
}

double NNfunction_ns_chi03_uL::synapse0x31a9a60() {
   return (neuron0x31a5290()*-0.0200944);
}

double NNfunction_ns_chi03_uL::synapse0x31a9aa0() {
   return (neuron0x31a55d0()*-0.476645);
}

double NNfunction_ns_chi03_uL::synapse0x2f5fc30() {
   return (neuron0x31a5910()*-0.414285);
}

double NNfunction_ns_chi03_uL::synapse0x2f5fc70() {
   return (neuron0x31a5c50()*0.772723);
}

double NNfunction_ns_chi03_uL::synapse0x2f5fcb0() {
   return (neuron0x31a5f90()*-1.16475);
}

double NNfunction_ns_chi03_uL::synapse0x2f5fcf0() {
   return (neuron0x31a62d0()*-0.127926);
}

double NNfunction_ns_chi03_uL::synapse0x31a9cf0() {
   return (neuron0x31a6610()*0.0495422);
}

double NNfunction_ns_chi03_uL::synapse0x31a9d30() {
   return (neuron0x31a6950()*-0.622995);
}

double NNfunction_ns_chi03_uL::synapse0x31a9d70() {
   return (neuron0x31a6c90()*0.617364);
}

double NNfunction_ns_chi03_uL::synapse0x31a96f0() {
   return (neuron0x31a6fd0()*-0.0647308);
}

double NNfunction_ns_chi03_uL::synapse0x31a9730() {
   return (neuron0x31a7530()*0.150728);
}

double NNfunction_ns_chi03_uL::synapse0x31a9ec0() {
   return (neuron0x31a7870()*-0.39946);
}

double NNfunction_ns_chi03_uL::synapse0x31a9f00() {
   return (neuron0x31a7bb0()*-0.849415);
}

double NNfunction_ns_chi03_uL::synapse0x31a9f40() {
   return (neuron0x31a7ef0()*0.657726);
}

double NNfunction_ns_chi03_uL::synapse0x31a9f80() {
   return (neuron0x31a8230()*0.757921);
}

double NNfunction_ns_chi03_uL::synapse0x31a9fc0() {
   return (neuron0x31a8570()*0.613306);
}

double NNfunction_ns_chi03_uL::synapse0x31aa000() {
   return (neuron0x31a88b0()*-0.155067);
}

double NNfunction_ns_chi03_uL::synapse0x31aa380() {
   return (neuron0x31a3c60()*0.0599232);
}

double NNfunction_ns_chi03_uL::synapse0x31aa3c0() {
   return (neuron0x31a3f10()*26.1739);
}

double NNfunction_ns_chi03_uL::synapse0x31aa400() {
   return (neuron0x31a4250()*12.461);
}

double NNfunction_ns_chi03_uL::synapse0x31aa440() {
   return (neuron0x31a4590()*0.0162713);
}

double NNfunction_ns_chi03_uL::synapse0x31aa480() {
   return (neuron0x31a48d0()*-0.00980303);
}

double NNfunction_ns_chi03_uL::synapse0x31aa4c0() {
   return (neuron0x31a4c10()*-0.0168841);
}

double NNfunction_ns_chi03_uL::synapse0x31aa500() {
   return (neuron0x31a4f50()*0.0321525);
}

double NNfunction_ns_chi03_uL::synapse0x31aa540() {
   return (neuron0x31a5290()*-0.0267831);
}

double NNfunction_ns_chi03_uL::synapse0x31aa580() {
   return (neuron0x31a55d0()*-0.0550853);
}

double NNfunction_ns_chi03_uL::synapse0x31aa5c0() {
   return (neuron0x31a5910()*-0.0361321);
}

double NNfunction_ns_chi03_uL::synapse0x31aa600() {
   return (neuron0x31a5c50()*-0.00249494);
}

double NNfunction_ns_chi03_uL::synapse0x31aa640() {
   return (neuron0x31a5f90()*-0.296138);
}

double NNfunction_ns_chi03_uL::synapse0x31aa680() {
   return (neuron0x31a62d0()*0.0193746);
}

double NNfunction_ns_chi03_uL::synapse0x31aa6c0() {
   return (neuron0x31a6610()*0.0642079);
}

double NNfunction_ns_chi03_uL::synapse0x31aa700() {
   return (neuron0x31a6950()*0.0138119);
}

double NNfunction_ns_chi03_uL::synapse0x31aa740() {
   return (neuron0x31a6c90()*-0.0911309);
}

double NNfunction_ns_chi03_uL::synapse0x31aa1d0() {
   return (neuron0x31a6fd0()*-0.0112787);
}

double NNfunction_ns_chi03_uL::synapse0x31aa210() {
   return (neuron0x31a7530()*-0.0511924);
}

double NNfunction_ns_chi03_uL::synapse0x2f604d0() {
   return (neuron0x31a7870()*-0.0206867);
}

double NNfunction_ns_chi03_uL::synapse0x2f6dda0() {
   return (neuron0x31a7bb0()*-0.024932);
}

double NNfunction_ns_chi03_uL::synapse0x2f6dde0() {
   return (neuron0x31a7ef0()*0.003658);
}

double NNfunction_ns_chi03_uL::synapse0x31ac670() {
   return (neuron0x31a8230()*-0.0250078);
}

double NNfunction_ns_chi03_uL::synapse0x31ac6b0() {
   return (neuron0x31a8570()*0.0189086);
}

double NNfunction_ns_chi03_uL::synapse0x31a39a0() {
   return (neuron0x31a88b0()*0.140374);
}

double NNfunction_ns_chi03_uL::synapse0x31a3a70() {
   return (neuron0x31a3c60()*-0.110797);
}

double NNfunction_ns_chi03_uL::synapse0x2f6e620() {
   return (neuron0x31a3f10()*-0.0276672);
}

double NNfunction_ns_chi03_uL::synapse0x31a9c70() {
   return (neuron0x31a4250()*-4.41733);
}

double NNfunction_ns_chi03_uL::synapse0x31a9cb0() {
   return (neuron0x31a4590()*-0.019329);
}

double NNfunction_ns_chi03_uL::synapse0x31aa890() {
   return (neuron0x31a48d0()*-0.0483847);
}

double NNfunction_ns_chi03_uL::synapse0x31aa8d0() {
   return (neuron0x31a4c10()*0.0112959);
}

double NNfunction_ns_chi03_uL::synapse0x31aa910() {
   return (neuron0x31a4f50()*-0.0101288);
}

double NNfunction_ns_chi03_uL::synapse0x31aa950() {
   return (neuron0x31a5290()*-0.00928446);
}

double NNfunction_ns_chi03_uL::synapse0x31aa990() {
   return (neuron0x31a55d0()*-0.0027342);
}

double NNfunction_ns_chi03_uL::synapse0x31aa9d0() {
   return (neuron0x31a5910()*0.02009);
}

double NNfunction_ns_chi03_uL::synapse0x31aaa10() {
   return (neuron0x31a5c50()*-0.0330611);
}

double NNfunction_ns_chi03_uL::synapse0x31aaa50() {
   return (neuron0x31a5f90()*0.164263);
}

double NNfunction_ns_chi03_uL::synapse0x31aaa90() {
   return (neuron0x31a62d0()*-0.00656334);
}

double NNfunction_ns_chi03_uL::synapse0x31aaad0() {
   return (neuron0x31a6610()*0.0540453);
}

double NNfunction_ns_chi03_uL::synapse0x31aab10() {
   return (neuron0x31a6950()*-0.0703772);
}

double NNfunction_ns_chi03_uL::synapse0x31aab50() {
   return (neuron0x31a6c90()*0.0211881);
}

double NNfunction_ns_chi03_uL::synapse0x31a39e0() {
   return (neuron0x31a6fd0()*-0.0134313);
}

double NNfunction_ns_chi03_uL::synapse0x31a3a20() {
   return (neuron0x31a7530()*0.00273402);
}

double NNfunction_ns_chi03_uL::synapse0x31aaca0() {
   return (neuron0x31a7870()*-0.00714386);
}

double NNfunction_ns_chi03_uL::synapse0x31aace0() {
   return (neuron0x31a7bb0()*0.0480948);
}

double NNfunction_ns_chi03_uL::synapse0x31aad20() {
   return (neuron0x31a7ef0()*-0.050221);
}

double NNfunction_ns_chi03_uL::synapse0x31aad60() {
   return (neuron0x31a8230()*-0.012038);
}

double NNfunction_ns_chi03_uL::synapse0x31aada0() {
   return (neuron0x31a8570()*-0.00544813);
}

double NNfunction_ns_chi03_uL::synapse0x31aade0() {
   return (neuron0x31a88b0()*-1.41161);
}

double NNfunction_ns_chi03_uL::synapse0x31ab160() {
   return (neuron0x31a3c60()*-0.00137953);
}

double NNfunction_ns_chi03_uL::synapse0x31ab1a0() {
   return (neuron0x31a3f10()*-0.0542596);
}

double NNfunction_ns_chi03_uL::synapse0x31ab1e0() {
   return (neuron0x31a4250()*0.704603);
}

double NNfunction_ns_chi03_uL::synapse0x31ab220() {
   return (neuron0x31a4590()*-0.0025998);
}

double NNfunction_ns_chi03_uL::synapse0x31ab260() {
   return (neuron0x31a48d0()*0.185185);
}

double NNfunction_ns_chi03_uL::synapse0x31ab2a0() {
   return (neuron0x31a4c10()*0.0760307);
}

double NNfunction_ns_chi03_uL::synapse0x31ab2e0() {
   return (neuron0x31a4f50()*0.721613);
}

double NNfunction_ns_chi03_uL::synapse0x31ab320() {
   return (neuron0x31a5290()*-0.384352);
}

double NNfunction_ns_chi03_uL::synapse0x31ab360() {
   return (neuron0x31a55d0()*-0.335293);
}

double NNfunction_ns_chi03_uL::synapse0x31ab3a0() {
   return (neuron0x31a5910()*-0.0330582);
}

double NNfunction_ns_chi03_uL::synapse0x31ab3e0() {
   return (neuron0x31a5c50()*0.200367);
}

double NNfunction_ns_chi03_uL::synapse0x31ab420() {
   return (neuron0x31a5f90()*0.272282);
}

double NNfunction_ns_chi03_uL::synapse0x31ab460() {
   return (neuron0x31a62d0()*-0.331066);
}

double NNfunction_ns_chi03_uL::synapse0x31ab4a0() {
   return (neuron0x31a6610()*-0.344554);
}

double NNfunction_ns_chi03_uL::synapse0x31ab4e0() {
   return (neuron0x31a6950()*0.451402);
}

double NNfunction_ns_chi03_uL::synapse0x31ab520() {
   return (neuron0x31a6c90()*-0.0607013);
}

double NNfunction_ns_chi03_uL::synapse0x31ab670() {
   return (neuron0x31a6fd0()*-0.929593);
}

double NNfunction_ns_chi03_uL::synapse0x31aafb0() {
   return (neuron0x31a7530()*0.216476);
}

double NNfunction_ns_chi03_uL::synapse0x31aaff0() {
   return (neuron0x31a7870()*-0.848395);
}

double NNfunction_ns_chi03_uL::synapse0x31ac7b0() {
   return (neuron0x31a7bb0()*-0.120477);
}

double NNfunction_ns_chi03_uL::synapse0x31ac7f0() {
   return (neuron0x31a7ef0()*-1.01245);
}

double NNfunction_ns_chi03_uL::synapse0x31ac830() {
   return (neuron0x31a8230()*0.292659);
}

double NNfunction_ns_chi03_uL::synapse0x31ac870() {
   return (neuron0x31a8570()*-0.614883);
}

double NNfunction_ns_chi03_uL::synapse0x31ac8b0() {
   return (neuron0x31a88b0()*0.803787);
}

double NNfunction_ns_chi03_uL::synapse0x31acc30() {
   return (neuron0x31a3c60()*1.42502);
}

double NNfunction_ns_chi03_uL::synapse0x31acc70() {
   return (neuron0x31a3f10()*0.0965813);
}

double NNfunction_ns_chi03_uL::synapse0x31accb0() {
   return (neuron0x31a4250()*0.848309);
}

double NNfunction_ns_chi03_uL::synapse0x31accf0() {
   return (neuron0x31a4590()*-0.00415596);
}

double NNfunction_ns_chi03_uL::synapse0x31acd30() {
   return (neuron0x31a48d0()*0.169348);
}

double NNfunction_ns_chi03_uL::synapse0x31acd70() {
   return (neuron0x31a4c10()*-0.131041);
}

double NNfunction_ns_chi03_uL::synapse0x31acdb0() {
   return (neuron0x31a4f50()*-0.0521895);
}

double NNfunction_ns_chi03_uL::synapse0x31acdf0() {
   return (neuron0x31a5290()*0.325894);
}

double NNfunction_ns_chi03_uL::synapse0x31ace30() {
   return (neuron0x31a55d0()*0.0679023);
}

double NNfunction_ns_chi03_uL::synapse0x2f6e0f0() {
   return (neuron0x31a5910()*0.229102);
}

double NNfunction_ns_chi03_uL::synapse0x2f6e130() {
   return (neuron0x31a5c50()*-0.209136);
}

double NNfunction_ns_chi03_uL::synapse0x2f6e170() {
   return (neuron0x31a5f90()*-1.29868);
}

double NNfunction_ns_chi03_uL::synapse0x2f6e1b0() {
   return (neuron0x31a62d0()*0.18166);
}

double NNfunction_ns_chi03_uL::synapse0x2f6e1f0() {
   return (neuron0x31a6610()*-0.231021);
}

double NNfunction_ns_chi03_uL::synapse0x2f6e230() {
   return (neuron0x31a6950()*-0.101094);
}

double NNfunction_ns_chi03_uL::synapse0x2f6e270() {
   return (neuron0x31a6c90()*-0.148816);
}

double NNfunction_ns_chi03_uL::synapse0x31aca80() {
   return (neuron0x31a6fd0()*0.213661);
}

double NNfunction_ns_chi03_uL::synapse0x31acac0() {
   return (neuron0x31a7530()*0.0236044);
}

double NNfunction_ns_chi03_uL::synapse0x2f6e3c0() {
   return (neuron0x31a7870()*-0.314891);
}

double NNfunction_ns_chi03_uL::synapse0x2f6e400() {
   return (neuron0x31a7bb0()*-0.368731);
}

double NNfunction_ns_chi03_uL::synapse0x2f6e440() {
   return (neuron0x31a7ef0()*-0.189692);
}

double NNfunction_ns_chi03_uL::synapse0x2f6e480() {
   return (neuron0x31a8230()*-0.0627385);
}

double NNfunction_ns_chi03_uL::synapse0x2f6e4c0() {
   return (neuron0x31a8570()*0.0429151);
}

double NNfunction_ns_chi03_uL::synapse0x31ad680() {
   return (neuron0x31a88b0()*0.134222);
}

double NNfunction_ns_chi03_uL::synapse0x31ada00() {
   return (neuron0x31a3c60()*-0.563305);
}

double NNfunction_ns_chi03_uL::synapse0x31ada40() {
   return (neuron0x31a3f10()*-0.24746);
}

double NNfunction_ns_chi03_uL::synapse0x31ada80() {
   return (neuron0x31a4250()*-1.77547);
}

double NNfunction_ns_chi03_uL::synapse0x31adac0() {
   return (neuron0x31a4590()*-0.585054);
}

double NNfunction_ns_chi03_uL::synapse0x31adb00() {
   return (neuron0x31a48d0()*0.207382);
}

double NNfunction_ns_chi03_uL::synapse0x31adb40() {
   return (neuron0x31a4c10()*-0.199382);
}

double NNfunction_ns_chi03_uL::synapse0x31adb80() {
   return (neuron0x31a4f50()*0.00653733);
}

double NNfunction_ns_chi03_uL::synapse0x31adbc0() {
   return (neuron0x31a5290()*0.39395);
}

double NNfunction_ns_chi03_uL::synapse0x31adc00() {
   return (neuron0x31a55d0()*-0.286432);
}

double NNfunction_ns_chi03_uL::synapse0x31adc40() {
   return (neuron0x31a5910()*0.228716);
}

double NNfunction_ns_chi03_uL::synapse0x31adc80() {
   return (neuron0x31a5c50()*0.0978513);
}

double NNfunction_ns_chi03_uL::synapse0x31adcc0() {
   return (neuron0x31a5f90()*0.466683);
}

double NNfunction_ns_chi03_uL::synapse0x31add00() {
   return (neuron0x31a62d0()*0.0226906);
}

double NNfunction_ns_chi03_uL::synapse0x31add40() {
   return (neuron0x31a6610()*-0.572744);
}

double NNfunction_ns_chi03_uL::synapse0x31add80() {
   return (neuron0x31a6950()*-0.0134565);
}

double NNfunction_ns_chi03_uL::synapse0x31addc0() {
   return (neuron0x31a6c90()*0.169931);
}

double NNfunction_ns_chi03_uL::synapse0x31ad850() {
   return (neuron0x31a6fd0()*0.410065);
}

double NNfunction_ns_chi03_uL::synapse0x31ad890() {
   return (neuron0x31a7530()*-0.0848614);
}

double NNfunction_ns_chi03_uL::synapse0x31adf10() {
   return (neuron0x31a7870()*0.17182);
}

double NNfunction_ns_chi03_uL::synapse0x31adf50() {
   return (neuron0x31a7bb0()*0.267874);
}

double NNfunction_ns_chi03_uL::synapse0x31adf90() {
   return (neuron0x31a7ef0()*0.0741647);
}

double NNfunction_ns_chi03_uL::synapse0x31adfd0() {
   return (neuron0x31a8230()*-0.0375284);
}

double NNfunction_ns_chi03_uL::synapse0x31ae010() {
   return (neuron0x31a8570()*0.0400045);
}

double NNfunction_ns_chi03_uL::synapse0x31ae050() {
   return (neuron0x31a88b0()*1.22208);
}

double NNfunction_ns_chi03_uL::synapse0x31ae3d0() {
   return (neuron0x31a3c60()*-0.657577);
}

double NNfunction_ns_chi03_uL::synapse0x31ae410() {
   return (neuron0x31a3f10()*0.10297);
}

double NNfunction_ns_chi03_uL::synapse0x31ae450() {
   return (neuron0x31a4250()*0.972135);
}

double NNfunction_ns_chi03_uL::synapse0x31ae490() {
   return (neuron0x31a4590()*0.0743692);
}

double NNfunction_ns_chi03_uL::synapse0x31ae4d0() {
   return (neuron0x31a48d0()*0.229434);
}

double NNfunction_ns_chi03_uL::synapse0x31ae510() {
   return (neuron0x31a4c10()*-0.0359789);
}

double NNfunction_ns_chi03_uL::synapse0x31ae550() {
   return (neuron0x31a4f50()*-0.408616);
}

double NNfunction_ns_chi03_uL::synapse0x31ae590() {
   return (neuron0x31a5290()*0.35381);
}

double NNfunction_ns_chi03_uL::synapse0x31ae5d0() {
   return (neuron0x31a55d0()*0.260913);
}

double NNfunction_ns_chi03_uL::synapse0x31ae610() {
   return (neuron0x31a5910()*0.161613);
}

double NNfunction_ns_chi03_uL::synapse0x31ae650() {
   return (neuron0x31a5c50()*-0.292584);
}

double NNfunction_ns_chi03_uL::synapse0x31ae690() {
   return (neuron0x31a5f90()*0.40733);
}

double NNfunction_ns_chi03_uL::synapse0x31ae6d0() {
   return (neuron0x31a62d0()*0.405591);
}

double NNfunction_ns_chi03_uL::synapse0x31ae710() {
   return (neuron0x31a6610()*-0.0267055);
}

double NNfunction_ns_chi03_uL::synapse0x31ae750() {
   return (neuron0x31a6950()*0.220348);
}

double NNfunction_ns_chi03_uL::synapse0x31ae790() {
   return (neuron0x31a6c90()*-0.105619);
}

double NNfunction_ns_chi03_uL::synapse0x31ae220() {
   return (neuron0x31a6fd0()*-0.59908);
}

double NNfunction_ns_chi03_uL::synapse0x31ae260() {
   return (neuron0x31a7530()*0.358264);
}

double NNfunction_ns_chi03_uL::synapse0x31ae8e0() {
   return (neuron0x31a7870()*0.426267);
}

double NNfunction_ns_chi03_uL::synapse0x31ae920() {
   return (neuron0x31a7bb0()*0.238294);
}

double NNfunction_ns_chi03_uL::synapse0x31ae960() {
   return (neuron0x31a7ef0()*0.884865);
}

double NNfunction_ns_chi03_uL::synapse0x31ae9a0() {
   return (neuron0x31a8230()*-0.162115);
}

double NNfunction_ns_chi03_uL::synapse0x31ae9e0() {
   return (neuron0x31a8570()*-0.101796);
}

double NNfunction_ns_chi03_uL::synapse0x31aea20() {
   return (neuron0x31a88b0()*0.672178);
}

double NNfunction_ns_chi03_uL::synapse0x31a7420() {
   return (neuron0x31a3c60()*0.0118242);
}

double NNfunction_ns_chi03_uL::synapse0x31a7460() {
   return (neuron0x31a3f10()*0.014145);
}

double NNfunction_ns_chi03_uL::synapse0x31a74a0() {
   return (neuron0x31a4250()*0.206503);
}

double NNfunction_ns_chi03_uL::synapse0x31a74e0() {
   return (neuron0x31a4590()*0.0372675);
}

double NNfunction_ns_chi03_uL::synapse0x31aefb0() {
   return (neuron0x31a48d0()*-0.0139948);
}

double NNfunction_ns_chi03_uL::synapse0x31aeff0() {
   return (neuron0x31a4c10()*0.013107);
}

double NNfunction_ns_chi03_uL::synapse0x31af030() {
   return (neuron0x31a4f50()*0.0114637);
}

double NNfunction_ns_chi03_uL::synapse0x31af070() {
   return (neuron0x31a5290()*0.0186345);
}

double NNfunction_ns_chi03_uL::synapse0x31af0b0() {
   return (neuron0x31a55d0()*-0.00291567);
}

double NNfunction_ns_chi03_uL::synapse0x31af0f0() {
   return (neuron0x31a5910()*-0.0395161);
}

double NNfunction_ns_chi03_uL::synapse0x31af130() {
   return (neuron0x31a5c50()*-0.00955545);
}

double NNfunction_ns_chi03_uL::synapse0x31af170() {
   return (neuron0x31a5f90()*1.01091);
}

double NNfunction_ns_chi03_uL::synapse0x31af1b0() {
   return (neuron0x31a62d0()*0.0214647);
}

double NNfunction_ns_chi03_uL::synapse0x31af1f0() {
   return (neuron0x31a6610()*0.0292643);
}

double NNfunction_ns_chi03_uL::synapse0x31af230() {
   return (neuron0x31a6950()*-0.00610349);
}

double NNfunction_ns_chi03_uL::synapse0x31af270() {
   return (neuron0x31a6c90()*-0.00448715);
}

double NNfunction_ns_chi03_uL::synapse0x31aebf0() {
   return (neuron0x31a6fd0()*0.0112503);
}

double NNfunction_ns_chi03_uL::synapse0x31aec30() {
   return (neuron0x31a7530()*0.0206398);
}

double NNfunction_ns_chi03_uL::synapse0x31af3c0() {
   return (neuron0x31a7870()*0.0058616);
}

double NNfunction_ns_chi03_uL::synapse0x31af400() {
   return (neuron0x31a7bb0()*-0.0104276);
}

double NNfunction_ns_chi03_uL::synapse0x31af440() {
   return (neuron0x31a7ef0()*-0.0142893);
}

double NNfunction_ns_chi03_uL::synapse0x31af480() {
   return (neuron0x31a8230()*-0.0157362);
}

double NNfunction_ns_chi03_uL::synapse0x31af4c0() {
   return (neuron0x31a8570()*0.00276536);
}

double NNfunction_ns_chi03_uL::synapse0x31af500() {
   return (neuron0x31a88b0()*0.268271);
}

double NNfunction_ns_chi03_uL::synapse0x31af880() {
   return (neuron0x31a3c60()*-1.46047);
}

double NNfunction_ns_chi03_uL::synapse0x31af8c0() {
   return (neuron0x31a3f10()*-0.130685);
}

double NNfunction_ns_chi03_uL::synapse0x31af900() {
   return (neuron0x31a4250()*-2.01795);
}

double NNfunction_ns_chi03_uL::synapse0x31af940() {
   return (neuron0x31a4590()*-0.857348);
}

double NNfunction_ns_chi03_uL::synapse0x31af980() {
   return (neuron0x31a48d0()*0.479242);
}

double NNfunction_ns_chi03_uL::synapse0x31af9c0() {
   return (neuron0x31a4c10()*-0.205768);
}

double NNfunction_ns_chi03_uL::synapse0x31afa00() {
   return (neuron0x31a4f50()*0.163371);
}

double NNfunction_ns_chi03_uL::synapse0x31afa40() {
   return (neuron0x31a5290()*-0.0302658);
}

double NNfunction_ns_chi03_uL::synapse0x31afa80() {
   return (neuron0x31a55d0()*-0.497211);
}

double NNfunction_ns_chi03_uL::synapse0x31afac0() {
   return (neuron0x31a5910()*0.206489);
}

double NNfunction_ns_chi03_uL::synapse0x31afb00() {
   return (neuron0x31a5c50()*0.783959);
}

double NNfunction_ns_chi03_uL::synapse0x31afb40() {
   return (neuron0x31a5f90()*0.85641);
}

double NNfunction_ns_chi03_uL::synapse0x31afb80() {
   return (neuron0x31a62d0()*-0.0170685);
}

double NNfunction_ns_chi03_uL::synapse0x31afbc0() {
   return (neuron0x31a6610()*-1.01421);
}

double NNfunction_ns_chi03_uL::synapse0x31afc00() {
   return (neuron0x31a6950()*-0.247021);
}

double NNfunction_ns_chi03_uL::synapse0x31afc40() {
   return (neuron0x31a6c90()*0.0625134);
}

double NNfunction_ns_chi03_uL::synapse0x31af6d0() {
   return (neuron0x31a6fd0()*0.20141);
}

double NNfunction_ns_chi03_uL::synapse0x31af710() {
   return (neuron0x31a7530()*-0.356012);
}

double NNfunction_ns_chi03_uL::synapse0x31afd90() {
   return (neuron0x31a7870()*0.550507);
}

double NNfunction_ns_chi03_uL::synapse0x31afdd0() {
   return (neuron0x31a7bb0()*-0.00686502);
}

double NNfunction_ns_chi03_uL::synapse0x31afe10() {
   return (neuron0x31a7ef0()*0.330623);
}

double NNfunction_ns_chi03_uL::synapse0x31afe50() {
   return (neuron0x31a8230()*0.00796229);
}

double NNfunction_ns_chi03_uL::synapse0x31afe90() {
   return (neuron0x31a8570()*-0.0840583);
}

double NNfunction_ns_chi03_uL::synapse0x31afed0() {
   return (neuron0x31a88b0()*1.28947);
}

double NNfunction_ns_chi03_uL::synapse0x31b0250() {
   return (neuron0x31a3c60()*-0.00605257);
}

double NNfunction_ns_chi03_uL::synapse0x31b0290() {
   return (neuron0x31a3f10()*0.0360771);
}

double NNfunction_ns_chi03_uL::synapse0x31b02d0() {
   return (neuron0x31a4250()*0.849499);
}

double NNfunction_ns_chi03_uL::synapse0x31b0310() {
   return (neuron0x31a4590()*0.00610064);
}

double NNfunction_ns_chi03_uL::synapse0x31b0350() {
   return (neuron0x31a48d0()*0.00605345);
}

double NNfunction_ns_chi03_uL::synapse0x31b0390() {
   return (neuron0x31a4c10()*-0.00238332);
}

double NNfunction_ns_chi03_uL::synapse0x31b03d0() {
   return (neuron0x31a4f50()*0.00109113);
}

double NNfunction_ns_chi03_uL::synapse0x31b0410() {
   return (neuron0x31a5290()*0.00840244);
}

double NNfunction_ns_chi03_uL::synapse0x31b0450() {
   return (neuron0x31a55d0()*0.0109519);
}

double NNfunction_ns_chi03_uL::synapse0x31b0490() {
   return (neuron0x31a5910()*0.00387698);
}

double NNfunction_ns_chi03_uL::synapse0x31b04d0() {
   return (neuron0x31a5c50()*-0.00316689);
}

double NNfunction_ns_chi03_uL::synapse0x31b0510() {
   return (neuron0x31a5f90()*-0.187142);
}

double NNfunction_ns_chi03_uL::synapse0x31b0550() {
   return (neuron0x31a62d0()*-0.00410707);
}

double NNfunction_ns_chi03_uL::synapse0x31b0590() {
   return (neuron0x31a6610()*-0.00257202);
}

double NNfunction_ns_chi03_uL::synapse0x31b05d0() {
   return (neuron0x31a6950()*-0.0157984);
}

double NNfunction_ns_chi03_uL::synapse0x31b0610() {
   return (neuron0x31a6c90()*-0.00819614);
}

double NNfunction_ns_chi03_uL::synapse0x31b00a0() {
   return (neuron0x31a6fd0()*0.0191997);
}

double NNfunction_ns_chi03_uL::synapse0x31b00e0() {
   return (neuron0x31a7530()*-0.00964843);
}

double NNfunction_ns_chi03_uL::synapse0x31ace70() {
   return (neuron0x31a7870()*-0.00821343);
}

double NNfunction_ns_chi03_uL::synapse0x31aceb0() {
   return (neuron0x31a7bb0()*0.00503353);
}

double NNfunction_ns_chi03_uL::synapse0x31acef0() {
   return (neuron0x31a7ef0()*0.0115221);
}

double NNfunction_ns_chi03_uL::synapse0x31acf30() {
   return (neuron0x31a8230()*0.00115664);
}

double NNfunction_ns_chi03_uL::synapse0x31acf70() {
   return (neuron0x31a8570()*0.00492064);
}

double NNfunction_ns_chi03_uL::synapse0x31acfb0() {
   return (neuron0x31a88b0()*0.299791);
}

double NNfunction_ns_chi03_uL::synapse0x31ad330() {
   return (neuron0x31a3c60()*-0.0277381);
}

double NNfunction_ns_chi03_uL::synapse0x31ad370() {
   return (neuron0x31a3f10()*0.141539);
}

double NNfunction_ns_chi03_uL::synapse0x31ad3b0() {
   return (neuron0x31a4250()*3.1346);
}

double NNfunction_ns_chi03_uL::synapse0x31ad3f0() {
   return (neuron0x31a4590()*0.0398836);
}

double NNfunction_ns_chi03_uL::synapse0x31ad430() {
   return (neuron0x31a48d0()*-0.0635854);
}

double NNfunction_ns_chi03_uL::synapse0x31ad470() {
   return (neuron0x31a4c10()*-0.0233539);
}

double NNfunction_ns_chi03_uL::synapse0x31ad4b0() {
   return (neuron0x31a4f50()*-0.0241881);
}

double NNfunction_ns_chi03_uL::synapse0x31ad4f0() {
   return (neuron0x31a5290()*-0.0102345);
}

double NNfunction_ns_chi03_uL::synapse0x31ad530() {
   return (neuron0x31a55d0()*-0.000946821);
}

double NNfunction_ns_chi03_uL::synapse0x31ad570() {
   return (neuron0x31a5910()*-0.00897338);
}

double NNfunction_ns_chi03_uL::synapse0x31ad5b0() {
   return (neuron0x31a5c50()*0.0587039);
}

double NNfunction_ns_chi03_uL::synapse0x31ad5f0() {
   return (neuron0x31a5f90()*0.301586);
}

double NNfunction_ns_chi03_uL::synapse0x31ad630() {
   return (neuron0x31a62d0()*-0.00362608);
}

double NNfunction_ns_chi03_uL::synapse0x31b1770() {
   return (neuron0x31a6610()*0.0226812);
}

double NNfunction_ns_chi03_uL::synapse0x31b17b0() {
   return (neuron0x31a6950()*-0.0506155);
}

double NNfunction_ns_chi03_uL::synapse0x31b17f0() {
   return (neuron0x31a6c90()*-0.0262065);
}

double NNfunction_ns_chi03_uL::synapse0x31ad180() {
   return (neuron0x31a6fd0()*-0.0638973);
}

double NNfunction_ns_chi03_uL::synapse0x31ad1c0() {
   return (neuron0x31a7530()*0.00620086);
}

double NNfunction_ns_chi03_uL::synapse0x31b1940() {
   return (neuron0x31a7870()*0.0489237);
}

double NNfunction_ns_chi03_uL::synapse0x31b1980() {
   return (neuron0x31a7bb0()*-0.00940705);
}

double NNfunction_ns_chi03_uL::synapse0x31b19c0() {
   return (neuron0x31a7ef0()*-0.0137827);
}

double NNfunction_ns_chi03_uL::synapse0x31b1a00() {
   return (neuron0x31a8230()*0.0122628);
}

double NNfunction_ns_chi03_uL::synapse0x31b1a40() {
   return (neuron0x31a8570()*0.00428697);
}

double NNfunction_ns_chi03_uL::synapse0x31b1a80() {
   return (neuron0x31a88b0()*1.84207);
}

double NNfunction_ns_chi03_uL::synapse0x31b1e00() {
   return (neuron0x31a3c60()*0.0159113);
}

double NNfunction_ns_chi03_uL::synapse0x31b1e40() {
   return (neuron0x31a3f10()*0.268816);
}

double NNfunction_ns_chi03_uL::synapse0x31b1e80() {
   return (neuron0x31a4250()*2.31098);
}

double NNfunction_ns_chi03_uL::synapse0x31b1ec0() {
   return (neuron0x31a4590()*0.0442973);
}

double NNfunction_ns_chi03_uL::synapse0x31b1f00() {
   return (neuron0x31a48d0()*-0.0247346);
}

double NNfunction_ns_chi03_uL::synapse0x31b1f40() {
   return (neuron0x31a4c10()*-0.00316013);
}

double NNfunction_ns_chi03_uL::synapse0x31b1f80() {
   return (neuron0x31a4f50()*0.0297902);
}

double NNfunction_ns_chi03_uL::synapse0x31b1fc0() {
   return (neuron0x31a5290()*-0.0152598);
}

double NNfunction_ns_chi03_uL::synapse0x31b2000() {
   return (neuron0x31a55d0()*-0.0167263);
}

double NNfunction_ns_chi03_uL::synapse0x31b2040() {
   return (neuron0x31a5910()*0.0410505);
}

double NNfunction_ns_chi03_uL::synapse0x31b2080() {
   return (neuron0x31a5c50()*0.0413001);
}

double NNfunction_ns_chi03_uL::synapse0x31b20c0() {
   return (neuron0x31a5f90()*0.804329);
}

double NNfunction_ns_chi03_uL::synapse0x31b2100() {
   return (neuron0x31a62d0()*-0.0496701);
}

double NNfunction_ns_chi03_uL::synapse0x31b2140() {
   return (neuron0x31a6610()*-0.0757611);
}

double NNfunction_ns_chi03_uL::synapse0x31b2180() {
   return (neuron0x31a6950()*0.0355821);
}

double NNfunction_ns_chi03_uL::synapse0x31b21c0() {
   return (neuron0x31a6c90()*-0.0118525);
}

double NNfunction_ns_chi03_uL::synapse0x31b1c50() {
   return (neuron0x31a6fd0()*-0.0633435);
}

double NNfunction_ns_chi03_uL::synapse0x31b1c90() {
   return (neuron0x31a7530()*-0.038888);
}

double NNfunction_ns_chi03_uL::synapse0x31b2310() {
   return (neuron0x31a7870()*0.0421064);
}

double NNfunction_ns_chi03_uL::synapse0x31b2350() {
   return (neuron0x31a7bb0()*0.00577667);
}

double NNfunction_ns_chi03_uL::synapse0x31b2390() {
   return (neuron0x31a7ef0()*-0.0503042);
}

double NNfunction_ns_chi03_uL::synapse0x31b23d0() {
   return (neuron0x31a8230()*0.0228704);
}

double NNfunction_ns_chi03_uL::synapse0x31b2410() {
   return (neuron0x31a8570()*-0.00849631);
}

double NNfunction_ns_chi03_uL::synapse0x31b2450() {
   return (neuron0x31a88b0()*1.79474);
}

double NNfunction_ns_chi03_uL::synapse0x31b27d0() {
   return (neuron0x31a3c60()*-0.00691825);
}

double NNfunction_ns_chi03_uL::synapse0x31b2810() {
   return (neuron0x31a3f10()*0.0135267);
}

double NNfunction_ns_chi03_uL::synapse0x31b2850() {
   return (neuron0x31a4250()*0.0301543);
}

double NNfunction_ns_chi03_uL::synapse0x31b2890() {
   return (neuron0x31a4590()*1.36753);
}

double NNfunction_ns_chi03_uL::synapse0x31b28d0() {
   return (neuron0x31a48d0()*0.0190988);
}

double NNfunction_ns_chi03_uL::synapse0x31b2910() {
   return (neuron0x31a4c10()*-0.0273451);
}

double NNfunction_ns_chi03_uL::synapse0x31b2950() {
   return (neuron0x31a4f50()*-0.0028441);
}

double NNfunction_ns_chi03_uL::synapse0x31b2990() {
   return (neuron0x31a5290()*-0.0263691);
}

double NNfunction_ns_chi03_uL::synapse0x31b29d0() {
   return (neuron0x31a55d0()*-0.0273744);
}

double NNfunction_ns_chi03_uL::synapse0x31b2a10() {
   return (neuron0x31a5910()*0.00548125);
}

double NNfunction_ns_chi03_uL::synapse0x31b2a50() {
   return (neuron0x31a5c50()*-0.00872932);
}

double NNfunction_ns_chi03_uL::synapse0x31b2a90() {
   return (neuron0x31a5f90()*-0.847782);
}

double NNfunction_ns_chi03_uL::synapse0x31b2ad0() {
   return (neuron0x31a62d0()*-0.0124524);
}

double NNfunction_ns_chi03_uL::synapse0x31b2b10() {
   return (neuron0x31a6610()*-0.0312852);
}

double NNfunction_ns_chi03_uL::synapse0x31b2b50() {
   return (neuron0x31a6950()*0.0509115);
}

double NNfunction_ns_chi03_uL::synapse0x31b2b90() {
   return (neuron0x31a6c90()*0.0372081);
}

double NNfunction_ns_chi03_uL::synapse0x31b2620() {
   return (neuron0x31a6fd0()*-0.0495545);
}

double NNfunction_ns_chi03_uL::synapse0x31b2660() {
   return (neuron0x31a7530()*-0.00730073);
}

double NNfunction_ns_chi03_uL::synapse0x31b2ce0() {
   return (neuron0x31a7870()*0.0167147);
}

double NNfunction_ns_chi03_uL::synapse0x31b2d20() {
   return (neuron0x31a7bb0()*0.0268365);
}

double NNfunction_ns_chi03_uL::synapse0x31b2d60() {
   return (neuron0x31a7ef0()*0.0316892);
}

double NNfunction_ns_chi03_uL::synapse0x31b2da0() {
   return (neuron0x31a8230()*0.044788);
}

double NNfunction_ns_chi03_uL::synapse0x31b2de0() {
   return (neuron0x31a8570()*-0.00515288);
}

double NNfunction_ns_chi03_uL::synapse0x31b2e20() {
   return (neuron0x31a88b0()*0.0673331);
}

double NNfunction_ns_chi03_uL::synapse0x31b31a0() {
   return (neuron0x31a3c60()*0.14678);
}

double NNfunction_ns_chi03_uL::synapse0x31b31e0() {
   return (neuron0x31a3f10()*0.0919892);
}

double NNfunction_ns_chi03_uL::synapse0x31b3220() {
   return (neuron0x31a4250()*-2.49651);
}

double NNfunction_ns_chi03_uL::synapse0x31b3260() {
   return (neuron0x31a4590()*-0.0935722);
}

double NNfunction_ns_chi03_uL::synapse0x31b32a0() {
   return (neuron0x31a48d0()*0.0819261);
}

double NNfunction_ns_chi03_uL::synapse0x31b32e0() {
   return (neuron0x31a4c10()*-0.0630019);
}

double NNfunction_ns_chi03_uL::synapse0x31b3320() {
   return (neuron0x31a4f50()*-0.113912);
}

double NNfunction_ns_chi03_uL::synapse0x31b3360() {
   return (neuron0x31a5290()*-0.218121);
}

double NNfunction_ns_chi03_uL::synapse0x31b33a0() {
   return (neuron0x31a55d0()*-0.0316225);
}

double NNfunction_ns_chi03_uL::synapse0x31b33e0() {
   return (neuron0x31a5910()*0.184503);
}

double NNfunction_ns_chi03_uL::synapse0x31b3420() {
   return (neuron0x31a5c50()*0.0586044);
}

double NNfunction_ns_chi03_uL::synapse0x31b3460() {
   return (neuron0x31a5f90()*-0.322765);
}

double NNfunction_ns_chi03_uL::synapse0x31b34a0() {
   return (neuron0x31a62d0()*0.0910288);
}

double NNfunction_ns_chi03_uL::synapse0x31b34e0() {
   return (neuron0x31a6610()*-0.0850939);
}

double NNfunction_ns_chi03_uL::synapse0x31b3520() {
   return (neuron0x31a6950()*0.0364053);
}

double NNfunction_ns_chi03_uL::synapse0x31b3560() {
   return (neuron0x31a6c90()*0.129153);
}

double NNfunction_ns_chi03_uL::synapse0x31b2ff0() {
   return (neuron0x31a6fd0()*0.0465166);
}

double NNfunction_ns_chi03_uL::synapse0x31b3030() {
   return (neuron0x31a7530()*-0.0365666);
}

double NNfunction_ns_chi03_uL::synapse0x31b36b0() {
   return (neuron0x31a7870()*0.103649);
}

double NNfunction_ns_chi03_uL::synapse0x31b36f0() {
   return (neuron0x31a7bb0()*-0.0219578);
}

double NNfunction_ns_chi03_uL::synapse0x31b3730() {
   return (neuron0x31a7ef0()*0.0624477);
}

double NNfunction_ns_chi03_uL::synapse0x31b3770() {
   return (neuron0x31a8230()*0.0520213);
}

double NNfunction_ns_chi03_uL::synapse0x31b37b0() {
   return (neuron0x31a8570()*0.0748926);
}

double NNfunction_ns_chi03_uL::synapse0x31b37f0() {
   return (neuron0x31a88b0()*-0.908949);
}

double NNfunction_ns_chi03_uL::synapse0x31b3b70() {
   return (neuron0x31a3c60()*-0.0046387);
}

double NNfunction_ns_chi03_uL::synapse0x31a3df0() {
   return (neuron0x31a3f10()*0.000591513);
}

double NNfunction_ns_chi03_uL::synapse0x31a3e30() {
   return (neuron0x31a4250()*0.000452181);
}

double NNfunction_ns_chi03_uL::synapse0x31a4130() {
   return (neuron0x31a4590()*2.43874);
}

double NNfunction_ns_chi03_uL::synapse0x31a4170() {
   return (neuron0x31a48d0()*0.00280485);
}

double NNfunction_ns_chi03_uL::synapse0x31a4470() {
   return (neuron0x31a4c10()*-0.00615302);
}

double NNfunction_ns_chi03_uL::synapse0x31a44b0() {
   return (neuron0x31a4f50()*-0.00686578);
}

double NNfunction_ns_chi03_uL::synapse0x31a47b0() {
   return (neuron0x31a5290()*0.00856163);
}

double NNfunction_ns_chi03_uL::synapse0x31a47f0() {
   return (neuron0x31a55d0()*-0.0014406);
}

double NNfunction_ns_chi03_uL::synapse0x31a4af0() {
   return (neuron0x31a5910()*0.00394959);
}

double NNfunction_ns_chi03_uL::synapse0x31a4b30() {
   return (neuron0x31a5c50()*0.00163283);
}

double NNfunction_ns_chi03_uL::synapse0x31a4e30() {
   return (neuron0x31a5f90()*0.218208);
}

double NNfunction_ns_chi03_uL::synapse0x31a4e70() {
   return (neuron0x31a62d0()*-0.0115676);
}

double NNfunction_ns_chi03_uL::synapse0x31a5170() {
   return (neuron0x31a6610()*0.0199092);
}

double NNfunction_ns_chi03_uL::synapse0x31a51b0() {
   return (neuron0x31a6950()*-0.00751131);
}

double NNfunction_ns_chi03_uL::synapse0x31a54b0() {
   return (neuron0x31a6c90()*0.0146643);
}

double NNfunction_ns_chi03_uL::synapse0x31a54f0() {
   return (neuron0x31a6fd0()*0.0169626);
}

double NNfunction_ns_chi03_uL::synapse0x31a57f0() {
   return (neuron0x31a7530()*-0.0206909);
}

double NNfunction_ns_chi03_uL::synapse0x31a5830() {
   return (neuron0x31a7870()*0.00446746);
}

double NNfunction_ns_chi03_uL::synapse0x31a5b30() {
   return (neuron0x31a7bb0()*0.00413274);
}

double NNfunction_ns_chi03_uL::synapse0x31a5b70() {
   return (neuron0x31a7ef0()*0.0163212);
}

double NNfunction_ns_chi03_uL::synapse0x31a5e70() {
   return (neuron0x31a8230()*-0.000998308);
}

double NNfunction_ns_chi03_uL::synapse0x31a5eb0() {
   return (neuron0x31a8570()*0.0053248);
}

double NNfunction_ns_chi03_uL::synapse0x31a61b0() {
   return (neuron0x31a88b0()*0.00885652);
}

double NNfunction_ns_chi03_uL::synapse0x31a61f0() {
   return (neuron0x31a3c60()*0.114653);
}

double NNfunction_ns_chi03_uL::synapse0x31a6eb0() {
   return (neuron0x31a3f10()*7.17691);
}

double NNfunction_ns_chi03_uL::synapse0x31a6ef0() {
   return (neuron0x31a4250()*2.22197);
}

double NNfunction_ns_chi03_uL::synapse0x31b39c0() {
   return (neuron0x31a4590()*-0.0238406);
}

double NNfunction_ns_chi03_uL::synapse0x31b3a00() {
   return (neuron0x31a48d0()*-0.017028);
}

double NNfunction_ns_chi03_uL::synapse0x31a71f0() {
   return (neuron0x31a4c10()*0.0182497);
}

double NNfunction_ns_chi03_uL::synapse0x31a7230() {
   return (neuron0x31a4f50()*-0.0269351);
}

double NNfunction_ns_chi03_uL::synapse0x31a7750() {
   return (neuron0x31a5290()*0.00706524);
}

double NNfunction_ns_chi03_uL::synapse0x31a7790() {
   return (neuron0x31a55d0()*-0.00405449);
}

double NNfunction_ns_chi03_uL::synapse0x31a7a90() {
   return (neuron0x31a5910()*0.0242737);
}

double NNfunction_ns_chi03_uL::synapse0x31a7ad0() {
   return (neuron0x31a5c50()*0.0267612);
}

double NNfunction_ns_chi03_uL::synapse0x31a7dd0() {
   return (neuron0x31a5f90()*-0.0513217);
}

double NNfunction_ns_chi03_uL::synapse0x31a7e10() {
   return (neuron0x31a62d0()*-0.00148796);
}

double NNfunction_ns_chi03_uL::synapse0x31a8110() {
   return (neuron0x31a6610()*-0.019884);
}

double NNfunction_ns_chi03_uL::synapse0x31a8150() {
   return (neuron0x31a6950()*0.00759667);
}

double NNfunction_ns_chi03_uL::synapse0x31a8450() {
   return (neuron0x31a6c90()*0.00110577);
}

double NNfunction_ns_chi03_uL::synapse0x31a8490() {
   return (neuron0x31a6fd0()*-0.0321363);
}

double NNfunction_ns_chi03_uL::synapse0x31a8790() {
   return (neuron0x31a7530()*-0.0245109);
}

double NNfunction_ns_chi03_uL::synapse0x31a87d0() {
   return (neuron0x31a7870()*0.00721497);
}

double NNfunction_ns_chi03_uL::synapse0x31a8ad0() {
   return (neuron0x31a7bb0()*0.0227333);
}

double NNfunction_ns_chi03_uL::synapse0x31a8b10() {
   return (neuron0x31a7ef0()*0.0610035);
}

double NNfunction_ns_chi03_uL::synapse0x31a64f0() {
   return (neuron0x31a8230()*0.00637975);
}

double NNfunction_ns_chi03_uL::synapse0x31a6530() {
   return (neuron0x31a8570()*0.0133476);
}

double NNfunction_ns_chi03_uL::synapse0x31b58e0() {
   return (neuron0x31a88b0()*0.412081);
}

double NNfunction_ns_chi03_uL::synapse0x31b5c60() {
   return (neuron0x31a3c60()*1.1067);
}

double NNfunction_ns_chi03_uL::synapse0x31b5ca0() {
   return (neuron0x31a3f10()*0.100837);
}

double NNfunction_ns_chi03_uL::synapse0x31b5ce0() {
   return (neuron0x31a4250()*-0.171153);
}

double NNfunction_ns_chi03_uL::synapse0x31b5d20() {
   return (neuron0x31a4590()*0.621806);
}

double NNfunction_ns_chi03_uL::synapse0x31b5d60() {
   return (neuron0x31a48d0()*0.918104);
}

double NNfunction_ns_chi03_uL::synapse0x31b5da0() {
   return (neuron0x31a4c10()*-0.800907);
}

double NNfunction_ns_chi03_uL::synapse0x31b5de0() {
   return (neuron0x31a4f50()*-0.422614);
}

double NNfunction_ns_chi03_uL::synapse0x31b5e20() {
   return (neuron0x31a5290()*0.525179);
}

double NNfunction_ns_chi03_uL::synapse0x31b5e60() {
   return (neuron0x31a55d0()*-0.910852);
}

double NNfunction_ns_chi03_uL::synapse0x31b5ea0() {
   return (neuron0x31a5910()*0.0794085);
}

double NNfunction_ns_chi03_uL::synapse0x31b5ee0() {
   return (neuron0x31a5c50()*0.049283);
}

double NNfunction_ns_chi03_uL::synapse0x31b5f20() {
   return (neuron0x31a5f90()*-1.468);
}

double NNfunction_ns_chi03_uL::synapse0x31b5f60() {
   return (neuron0x31a62d0()*-0.965589);
}

double NNfunction_ns_chi03_uL::synapse0x31b5fa0() {
   return (neuron0x31a6610()*-0.417946);
}

double NNfunction_ns_chi03_uL::synapse0x31b5fe0() {
   return (neuron0x31a6950()*0.280782);
}

double NNfunction_ns_chi03_uL::synapse0x31b6020() {
   return (neuron0x31a6c90()*-0.226451);
}

double NNfunction_ns_chi03_uL::synapse0x31b5ab0() {
   return (neuron0x31a6fd0()*0.649289);
}

double NNfunction_ns_chi03_uL::synapse0x31b5af0() {
   return (neuron0x31a7530()*0.69878);
}

double NNfunction_ns_chi03_uL::synapse0x31b6170() {
   return (neuron0x31a7870()*-0.424732);
}

double NNfunction_ns_chi03_uL::synapse0x31b61b0() {
   return (neuron0x31a7bb0()*-0.0654322);
}

double NNfunction_ns_chi03_uL::synapse0x31b61f0() {
   return (neuron0x31a7ef0()*-0.368553);
}

double NNfunction_ns_chi03_uL::synapse0x31b6230() {
   return (neuron0x31a8230()*-0.156911);
}

double NNfunction_ns_chi03_uL::synapse0x31b6270() {
   return (neuron0x31a8570()*-1.1505);
}

double NNfunction_ns_chi03_uL::synapse0x31b62b0() {
   return (neuron0x31a88b0()*0.295089);
}

double NNfunction_ns_chi03_uL::synapse0x31b6630() {
   return (neuron0x31a3c60()*0.496964);
}

double NNfunction_ns_chi03_uL::synapse0x31b6670() {
   return (neuron0x31a3f10()*0.419891);
}

double NNfunction_ns_chi03_uL::synapse0x31b66b0() {
   return (neuron0x31a4250()*-0.0166215);
}

double NNfunction_ns_chi03_uL::synapse0x31b66f0() {
   return (neuron0x31a4590()*0.232312);
}

double NNfunction_ns_chi03_uL::synapse0x31b6730() {
   return (neuron0x31a48d0()*0.146868);
}

double NNfunction_ns_chi03_uL::synapse0x31b6770() {
   return (neuron0x31a4c10()*0.438082);
}

double NNfunction_ns_chi03_uL::synapse0x31b67b0() {
   return (neuron0x31a4f50()*-0.285987);
}

double NNfunction_ns_chi03_uL::synapse0x31b67f0() {
   return (neuron0x31a5290()*-0.125079);
}

double NNfunction_ns_chi03_uL::synapse0x31b6830() {
   return (neuron0x31a55d0()*-0.400185);
}

double NNfunction_ns_chi03_uL::synapse0x31b6870() {
   return (neuron0x31a5910()*-0.925576);
}

double NNfunction_ns_chi03_uL::synapse0x31b68b0() {
   return (neuron0x31a5c50()*0.282519);
}

double NNfunction_ns_chi03_uL::synapse0x31b68f0() {
   return (neuron0x31a5f90()*-0.336991);
}

double NNfunction_ns_chi03_uL::synapse0x31b6930() {
   return (neuron0x31a62d0()*-0.183684);
}

double NNfunction_ns_chi03_uL::synapse0x31b6970() {
   return (neuron0x31a6610()*-0.271219);
}

double NNfunction_ns_chi03_uL::synapse0x31b69b0() {
   return (neuron0x31a6950()*0.0384776);
}

double NNfunction_ns_chi03_uL::synapse0x31b69f0() {
   return (neuron0x31a6c90()*0.477457);
}

double NNfunction_ns_chi03_uL::synapse0x31b6480() {
   return (neuron0x31a6fd0()*-0.23114);
}

double NNfunction_ns_chi03_uL::synapse0x31b64c0() {
   return (neuron0x31a7530()*0.644731);
}

double NNfunction_ns_chi03_uL::synapse0x31b6b40() {
   return (neuron0x31a7870()*0.415872);
}

double NNfunction_ns_chi03_uL::synapse0x31b6b80() {
   return (neuron0x31a7bb0()*-0.591521);
}

double NNfunction_ns_chi03_uL::synapse0x31b6bc0() {
   return (neuron0x31a7ef0()*-0.052485);
}

double NNfunction_ns_chi03_uL::synapse0x31b6c00() {
   return (neuron0x31a8230()*0.249519);
}

double NNfunction_ns_chi03_uL::synapse0x31b6c40() {
   return (neuron0x31a8570()*-0.353908);
}

double NNfunction_ns_chi03_uL::synapse0x31b6c80() {
   return (neuron0x31a88b0()*0.0557617);
}

double NNfunction_ns_chi03_uL::synapse0x31b7000() {
   return (neuron0x31a3c60()*0.00995608);
}

double NNfunction_ns_chi03_uL::synapse0x31b7040() {
   return (neuron0x31a3f10()*-0.000179681);
}

double NNfunction_ns_chi03_uL::synapse0x31b7080() {
   return (neuron0x31a4250()*0.0486766);
}

double NNfunction_ns_chi03_uL::synapse0x31b70c0() {
   return (neuron0x31a4590()*-1.27353);
}

double NNfunction_ns_chi03_uL::synapse0x31b7100() {
   return (neuron0x31a48d0()*0.0138491);
}

double NNfunction_ns_chi03_uL::synapse0x31b7140() {
   return (neuron0x31a4c10()*-0.00670939);
}

double NNfunction_ns_chi03_uL::synapse0x31b7180() {
   return (neuron0x31a4f50()*0.0141577);
}

double NNfunction_ns_chi03_uL::synapse0x31b71c0() {
   return (neuron0x31a5290()*-0.0328664);
}

double NNfunction_ns_chi03_uL::synapse0x31b7200() {
   return (neuron0x31a55d0()*-0.0181257);
}

double NNfunction_ns_chi03_uL::synapse0x31b7240() {
   return (neuron0x31a5910()*0.0177205);
}

double NNfunction_ns_chi03_uL::synapse0x31b7280() {
   return (neuron0x31a5c50()*0.00443891);
}

double NNfunction_ns_chi03_uL::synapse0x31b72c0() {
   return (neuron0x31a5f90()*-0.744544);
}

double NNfunction_ns_chi03_uL::synapse0x31b7300() {
   return (neuron0x31a62d0()*-0.00136286);
}

double NNfunction_ns_chi03_uL::synapse0x31b7340() {
   return (neuron0x31a6610()*-0.0342298);
}

double NNfunction_ns_chi03_uL::synapse0x31b7380() {
   return (neuron0x31a6950()*0.0510892);
}

double NNfunction_ns_chi03_uL::synapse0x31b73c0() {
   return (neuron0x31a6c90()*0.0141517);
}

double NNfunction_ns_chi03_uL::synapse0x31b6e50() {
   return (neuron0x31a6fd0()*-0.0505165);
}

double NNfunction_ns_chi03_uL::synapse0x31b6e90() {
   return (neuron0x31a7530()*0.00428081);
}

double NNfunction_ns_chi03_uL::synapse0x31b7510() {
   return (neuron0x31a7870()*0.0100053);
}

double NNfunction_ns_chi03_uL::synapse0x31b7550() {
   return (neuron0x31a7bb0()*0.0217619);
}

double NNfunction_ns_chi03_uL::synapse0x31b7590() {
   return (neuron0x31a7ef0()*-0.00332696);
}

double NNfunction_ns_chi03_uL::synapse0x31b75d0() {
   return (neuron0x31a8230()*0.0326488);
}

double NNfunction_ns_chi03_uL::synapse0x31b7610() {
   return (neuron0x31a8570()*-0.00187104);
}

double NNfunction_ns_chi03_uL::synapse0x31b7650() {
   return (neuron0x31a88b0()*0.0317005);
}

double NNfunction_ns_chi03_uL::synapse0x31b79d0() {
   return (neuron0x31a3c60()*0.101441);
}

double NNfunction_ns_chi03_uL::synapse0x31b7a10() {
   return (neuron0x31a3f10()*-13.5916);
}

double NNfunction_ns_chi03_uL::synapse0x31b7a50() {
   return (neuron0x31a4250()*-1.30769);
}

double NNfunction_ns_chi03_uL::synapse0x31b7a90() {
   return (neuron0x31a4590()*0.0345071);
}

double NNfunction_ns_chi03_uL::synapse0x31b7ad0() {
   return (neuron0x31a48d0()*-0.0686577);
}

double NNfunction_ns_chi03_uL::synapse0x31b7b10() {
   return (neuron0x31a4c10()*-0.0677723);
}

double NNfunction_ns_chi03_uL::synapse0x31b7b50() {
   return (neuron0x31a4f50()*-0.0274872);
}

double NNfunction_ns_chi03_uL::synapse0x31b7b90() {
   return (neuron0x31a5290()*-0.0350364);
}

double NNfunction_ns_chi03_uL::synapse0x31b7bd0() {
   return (neuron0x31a55d0()*0.00283739);
}

double NNfunction_ns_chi03_uL::synapse0x31b7c10() {
   return (neuron0x31a5910()*0.015055);
}

double NNfunction_ns_chi03_uL::synapse0x31b7c50() {
   return (neuron0x31a5c50()*0.0124673);
}

double NNfunction_ns_chi03_uL::synapse0x31b7c90() {
   return (neuron0x31a5f90()*0.0166054);
}

double NNfunction_ns_chi03_uL::synapse0x31b7cd0() {
   return (neuron0x31a62d0()*-0.0315205);
}

double NNfunction_ns_chi03_uL::synapse0x31b7d10() {
   return (neuron0x31a6610()*0.00406922);
}

double NNfunction_ns_chi03_uL::synapse0x31b7d50() {
   return (neuron0x31a6950()*0.0332073);
}

double NNfunction_ns_chi03_uL::synapse0x31b7d90() {
   return (neuron0x31a6c90()*-0.0314942);
}

double NNfunction_ns_chi03_uL::synapse0x31b7820() {
   return (neuron0x31a6fd0()*0.0131381);
}

double NNfunction_ns_chi03_uL::synapse0x31b7860() {
   return (neuron0x31a7530()*-0.0101846);
}

double NNfunction_ns_chi03_uL::synapse0x31b7ee0() {
   return (neuron0x31a7870()*-0.0415261);
}

double NNfunction_ns_chi03_uL::synapse0x31b7f20() {
   return (neuron0x31a7bb0()*0.0552458);
}

double NNfunction_ns_chi03_uL::synapse0x31b7f60() {
   return (neuron0x31a7ef0()*-0.110247);
}

double NNfunction_ns_chi03_uL::synapse0x31b7fa0() {
   return (neuron0x31a8230()*0.0238888);
}

double NNfunction_ns_chi03_uL::synapse0x31b7fe0() {
   return (neuron0x31a8570()*0.0417732);
}

double NNfunction_ns_chi03_uL::synapse0x31b8020() {
   return (neuron0x31a88b0()*4.37924);
}

double NNfunction_ns_chi03_uL::synapse0x31b83a0() {
   return (neuron0x31a3c60()*0.0533293);
}

double NNfunction_ns_chi03_uL::synapse0x31b83e0() {
   return (neuron0x31a3f10()*17.4703);
}

double NNfunction_ns_chi03_uL::synapse0x31b8420() {
   return (neuron0x31a4250()*0.0917815);
}

double NNfunction_ns_chi03_uL::synapse0x31b8460() {
   return (neuron0x31a4590()*0.000712174);
}

double NNfunction_ns_chi03_uL::synapse0x31b84a0() {
   return (neuron0x31a48d0()*0.0279491);
}

double NNfunction_ns_chi03_uL::synapse0x31b84e0() {
   return (neuron0x31a4c10()*-0.00307524);
}

double NNfunction_ns_chi03_uL::synapse0x31b8520() {
   return (neuron0x31a4f50()*-0.0224461);
}

double NNfunction_ns_chi03_uL::synapse0x31b8560() {
   return (neuron0x31a5290()*-0.0185082);
}

double NNfunction_ns_chi03_uL::synapse0x31b85a0() {
   return (neuron0x31a55d0()*-0.0112491);
}

double NNfunction_ns_chi03_uL::synapse0x31b0760() {
   return (neuron0x31a5910()*-0.00422038);
}

double NNfunction_ns_chi03_uL::synapse0x31b07a0() {
   return (neuron0x31a5c50()*0.0186311);
}

double NNfunction_ns_chi03_uL::synapse0x31b07e0() {
   return (neuron0x31a5f90()*-0.0509886);
}

double NNfunction_ns_chi03_uL::synapse0x31b0820() {
   return (neuron0x31a62d0()*0.00968077);
}

double NNfunction_ns_chi03_uL::synapse0x31b0860() {
   return (neuron0x31a6610()*-0.00753731);
}

double NNfunction_ns_chi03_uL::synapse0x31b08a0() {
   return (neuron0x31a6950()*0.0302563);
}

double NNfunction_ns_chi03_uL::synapse0x31b08e0() {
   return (neuron0x31a6c90()*0.0182153);
}

double NNfunction_ns_chi03_uL::synapse0x31b81f0() {
   return (neuron0x31a6fd0()*-3.86017e-05);
}

double NNfunction_ns_chi03_uL::synapse0x31b8230() {
   return (neuron0x31a7530()*-0.0247197);
}

double NNfunction_ns_chi03_uL::synapse0x31b0a30() {
   return (neuron0x31a7870()*0.0144286);
}

double NNfunction_ns_chi03_uL::synapse0x31b0a70() {
   return (neuron0x31a7bb0()*-0.0211911);
}

double NNfunction_ns_chi03_uL::synapse0x31b0ab0() {
   return (neuron0x31a7ef0()*0.0289274);
}

double NNfunction_ns_chi03_uL::synapse0x31b0af0() {
   return (neuron0x31a8230()*0.00155537);
}

double NNfunction_ns_chi03_uL::synapse0x31b0b30() {
   return (neuron0x31a8570()*0.00220434);
}

double NNfunction_ns_chi03_uL::synapse0x31b0b70() {
   return (neuron0x31a88b0()*0.820271);
}

double NNfunction_ns_chi03_uL::synapse0x31b0ef0() {
   return (neuron0x31a3c60()*0.0101844);
}

double NNfunction_ns_chi03_uL::synapse0x31b0f30() {
   return (neuron0x31a3f10()*0.0730193);
}

double NNfunction_ns_chi03_uL::synapse0x31b0f70() {
   return (neuron0x31a4250()*2.2492);
}

double NNfunction_ns_chi03_uL::synapse0x31b0fb0() {
   return (neuron0x31a4590()*-0.0562343);
}

double NNfunction_ns_chi03_uL::synapse0x31b0ff0() {
   return (neuron0x31a48d0()*0.0414188);
}

double NNfunction_ns_chi03_uL::synapse0x31b1030() {
   return (neuron0x31a4c10()*-0.181398);
}

double NNfunction_ns_chi03_uL::synapse0x31b1070() {
   return (neuron0x31a4f50()*-0.15853);
}

double NNfunction_ns_chi03_uL::synapse0x31b10b0() {
   return (neuron0x31a5290()*-0.199176);
}

double NNfunction_ns_chi03_uL::synapse0x31b10f0() {
   return (neuron0x31a55d0()*0.0618669);
}

double NNfunction_ns_chi03_uL::synapse0x31b1130() {
   return (neuron0x31a5910()*0.178721);
}

double NNfunction_ns_chi03_uL::synapse0x31b1170() {
   return (neuron0x31a5c50()*0.0754692);
}

double NNfunction_ns_chi03_uL::synapse0x31b11b0() {
   return (neuron0x31a5f90()*-0.331889);
}

double NNfunction_ns_chi03_uL::synapse0x31b11f0() {
   return (neuron0x31a62d0()*0.152074);
}

double NNfunction_ns_chi03_uL::synapse0x31b1230() {
   return (neuron0x31a6610()*-0.0783243);
}

double NNfunction_ns_chi03_uL::synapse0x31b1270() {
   return (neuron0x31a6950()*-0.0561113);
}

double NNfunction_ns_chi03_uL::synapse0x31b12b0() {
   return (neuron0x31a6c90()*0.110315);
}

double NNfunction_ns_chi03_uL::synapse0x31b0d40() {
   return (neuron0x31a6fd0()*0.0826727);
}

double NNfunction_ns_chi03_uL::synapse0x31b0d80() {
   return (neuron0x31a7530()*-0.0754997);
}

double NNfunction_ns_chi03_uL::synapse0x31b1400() {
   return (neuron0x31a7870()*0.162676);
}

double NNfunction_ns_chi03_uL::synapse0x31b1440() {
   return (neuron0x31a7bb0()*0.0219672);
}

double NNfunction_ns_chi03_uL::synapse0x31b1480() {
   return (neuron0x31a7ef0()*0.00908962);
}

double NNfunction_ns_chi03_uL::synapse0x31b14c0() {
   return (neuron0x31a8230()*-0.0200322);
}

double NNfunction_ns_chi03_uL::synapse0x31b1500() {
   return (neuron0x31a8570()*0.117444);
}

double NNfunction_ns_chi03_uL::synapse0x31b1540() {
   return (neuron0x31a88b0()*1.25567);
}

double NNfunction_ns_chi03_uL::synapse0x31b1710() {
   return (neuron0x31a3c60()*0.00648387);
}

double NNfunction_ns_chi03_uL::synapse0x31ba7a0() {
   return (neuron0x31a3f10()*-0.00768961);
}

double NNfunction_ns_chi03_uL::synapse0x31ba7e0() {
   return (neuron0x31a4250()*-0.0106622);
}

double NNfunction_ns_chi03_uL::synapse0x31ba820() {
   return (neuron0x31a4590()*-2.42094);
}

double NNfunction_ns_chi03_uL::synapse0x31ba860() {
   return (neuron0x31a48d0()*-0.00544028);
}

double NNfunction_ns_chi03_uL::synapse0x31ba8a0() {
   return (neuron0x31a4c10()*0.00379603);
}

double NNfunction_ns_chi03_uL::synapse0x31ba8e0() {
   return (neuron0x31a4f50()*0.00226161);
}

double NNfunction_ns_chi03_uL::synapse0x31ba920() {
   return (neuron0x31a5290()*0.00876431);
}

double NNfunction_ns_chi03_uL::synapse0x31ba960() {
   return (neuron0x31a55d0()*0.00310302);
}

double NNfunction_ns_chi03_uL::synapse0x31ba9a0() {
   return (neuron0x31a5910()*0.00354612);
}

double NNfunction_ns_chi03_uL::synapse0x31ba9e0() {
   return (neuron0x31a5c50()*0.00172814);
}

double NNfunction_ns_chi03_uL::synapse0x31baa20() {
   return (neuron0x31a5f90()*0.253106);
}

double NNfunction_ns_chi03_uL::synapse0x31baa60() {
   return (neuron0x31a62d0()*0.00577055);
}

double NNfunction_ns_chi03_uL::synapse0x31baaa0() {
   return (neuron0x31a6610()*0.0125633);
}

double NNfunction_ns_chi03_uL::synapse0x31baae0() {
   return (neuron0x31a6950()*0.000467883);
}

double NNfunction_ns_chi03_uL::synapse0x31bab20() {
   return (neuron0x31a6c90()*-0.0196913);
}

double NNfunction_ns_chi03_uL::synapse0x31ba5f0() {
   return (neuron0x31a6fd0()*0.0133245);
}

double NNfunction_ns_chi03_uL::synapse0x31ba630() {
   return (neuron0x31a7530()*0.0107093);
}

double NNfunction_ns_chi03_uL::synapse0x31bac70() {
   return (neuron0x31a7870()*-0.000403325);
}

double NNfunction_ns_chi03_uL::synapse0x31bacb0() {
   return (neuron0x31a7bb0()*-0.00590317);
}

double NNfunction_ns_chi03_uL::synapse0x31bacf0() {
   return (neuron0x31a7ef0()*-0.0156245);
}

double NNfunction_ns_chi03_uL::synapse0x31bad30() {
   return (neuron0x31a8230()*-0.00143569);
}

double NNfunction_ns_chi03_uL::synapse0x31bad70() {
   return (neuron0x31a8570()*-0.0035277);
}

double NNfunction_ns_chi03_uL::synapse0x31badb0() {
   return (neuron0x31a88b0()*-0.0229842);
}

double NNfunction_ns_chi03_uL::synapse0x31bb130() {
   return (neuron0x31a3c60()*-0.0730157);
}

double NNfunction_ns_chi03_uL::synapse0x31bb170() {
   return (neuron0x31a3f10()*0.258307);
}

double NNfunction_ns_chi03_uL::synapse0x31bb1b0() {
   return (neuron0x31a4250()*1.25753);
}

double NNfunction_ns_chi03_uL::synapse0x31bb1f0() {
   return (neuron0x31a4590()*0.160865);
}

double NNfunction_ns_chi03_uL::synapse0x31bb230() {
   return (neuron0x31a48d0()*-0.0303189);
}

double NNfunction_ns_chi03_uL::synapse0x31bb270() {
   return (neuron0x31a4c10()*-0.0721112);
}

double NNfunction_ns_chi03_uL::synapse0x31bb2b0() {
   return (neuron0x31a4f50()*-0.0460967);
}

double NNfunction_ns_chi03_uL::synapse0x31bb2f0() {
   return (neuron0x31a5290()*-0.00721094);
}

double NNfunction_ns_chi03_uL::synapse0x31bb330() {
   return (neuron0x31a55d0()*0.00274792);
}

double NNfunction_ns_chi03_uL::synapse0x31bb370() {
   return (neuron0x31a5910()*-0.0511732);
}

double NNfunction_ns_chi03_uL::synapse0x31bb3b0() {
   return (neuron0x31a5c50()*0.0937518);
}

double NNfunction_ns_chi03_uL::synapse0x31bb3f0() {
   return (neuron0x31a5f90()*0.0316235);
}

double NNfunction_ns_chi03_uL::synapse0x31bb430() {
   return (neuron0x31a62d0()*0.00244207);
}

double NNfunction_ns_chi03_uL::synapse0x31bb470() {
   return (neuron0x31a6610()*0.131503);
}

double NNfunction_ns_chi03_uL::synapse0x31bb4b0() {
   return (neuron0x31a6950()*-0.0418494);
}

double NNfunction_ns_chi03_uL::synapse0x31bb4f0() {
   return (neuron0x31a6c90()*-0.0330814);
}

double NNfunction_ns_chi03_uL::synapse0x31baf80() {
   return (neuron0x31a6fd0()*0.0885474);
}

double NNfunction_ns_chi03_uL::synapse0x31bafc0() {
   return (neuron0x31a7530()*0.0433102);
}

double NNfunction_ns_chi03_uL::synapse0x31bb640() {
   return (neuron0x31a7870()*-0.00267881);
}

double NNfunction_ns_chi03_uL::synapse0x31bb680() {
   return (neuron0x31a7bb0()*-0.104294);
}

double NNfunction_ns_chi03_uL::synapse0x31bb6c0() {
   return (neuron0x31a7ef0()*-0.0405042);
}

double NNfunction_ns_chi03_uL::synapse0x31bb700() {
   return (neuron0x31a8230()*0.0441041);
}

double NNfunction_ns_chi03_uL::synapse0x31bb740() {
   return (neuron0x31a8570()*0.0659817);
}

double NNfunction_ns_chi03_uL::synapse0x31bb780() {
   return (neuron0x31a88b0()*4.1693);
}

double NNfunction_ns_chi03_uL::synapse0x31bbb00() {
   return (neuron0x31a3c60()*-0.0200671);
}

double NNfunction_ns_chi03_uL::synapse0x31bbb40() {
   return (neuron0x31a3f10()*3.57082);
}

double NNfunction_ns_chi03_uL::synapse0x31bbb80() {
   return (neuron0x31a4250()*-0.451556);
}

double NNfunction_ns_chi03_uL::synapse0x31bbbc0() {
   return (neuron0x31a4590()*0.00297768);
}

double NNfunction_ns_chi03_uL::synapse0x31bbc00() {
   return (neuron0x31a48d0()*0.0146084);
}

double NNfunction_ns_chi03_uL::synapse0x31bbc40() {
   return (neuron0x31a4c10()*-0.00661643);
}

double NNfunction_ns_chi03_uL::synapse0x31bbc80() {
   return (neuron0x31a4f50()*-0.00877097);
}

double NNfunction_ns_chi03_uL::synapse0x31bbcc0() {
   return (neuron0x31a5290()*0.00802327);
}

double NNfunction_ns_chi03_uL::synapse0x31bbd00() {
   return (neuron0x31a55d0()*0.00836581);
}

double NNfunction_ns_chi03_uL::synapse0x31bbd40() {
   return (neuron0x31a5910()*-0.00333153);
}

double NNfunction_ns_chi03_uL::synapse0x31bbd80() {
   return (neuron0x31a5c50()*-0.0232153);
}

double NNfunction_ns_chi03_uL::synapse0x31bbdc0() {
   return (neuron0x31a5f90()*-0.0909107);
}

double NNfunction_ns_chi03_uL::synapse0x31bbe00() {
   return (neuron0x31a62d0()*0.0109759);
}

double NNfunction_ns_chi03_uL::synapse0x31bbe40() {
   return (neuron0x31a6610()*0.00407376);
}

double NNfunction_ns_chi03_uL::synapse0x31bbe80() {
   return (neuron0x31a6950()*-0.021477);
}

double NNfunction_ns_chi03_uL::synapse0x31bbec0() {
   return (neuron0x31a6c90()*0.000117231);
}

double NNfunction_ns_chi03_uL::synapse0x31bb950() {
   return (neuron0x31a6fd0()*-0.00576115);
}

double NNfunction_ns_chi03_uL::synapse0x31bb990() {
   return (neuron0x31a7530()*0.0114892);
}

double NNfunction_ns_chi03_uL::synapse0x31bc010() {
   return (neuron0x31a7870()*0.00374593);
}

double NNfunction_ns_chi03_uL::synapse0x31bc050() {
   return (neuron0x31a7bb0()*0.017085);
}

double NNfunction_ns_chi03_uL::synapse0x31bc090() {
   return (neuron0x31a7ef0()*0.000807552);
}

double NNfunction_ns_chi03_uL::synapse0x31bc0d0() {
   return (neuron0x31a8230()*-0.0232384);
}

double NNfunction_ns_chi03_uL::synapse0x31bc110() {
   return (neuron0x31a8570()*0.0145914);
}

double NNfunction_ns_chi03_uL::synapse0x31bc150() {
   return (neuron0x31a88b0()*0.406392);
}

double NNfunction_ns_chi03_uL::synapse0x31bc4d0() {
   return (neuron0x31a3c60()*-0.0291197);
}

double NNfunction_ns_chi03_uL::synapse0x31bc510() {
   return (neuron0x31a3f10()*2.67557);
}

double NNfunction_ns_chi03_uL::synapse0x31bc550() {
   return (neuron0x31a4250()*0.433518);
}

double NNfunction_ns_chi03_uL::synapse0x31bc590() {
   return (neuron0x31a4590()*0.0164712);
}

double NNfunction_ns_chi03_uL::synapse0x31bc5d0() {
   return (neuron0x31a48d0()*0.0347447);
}

double NNfunction_ns_chi03_uL::synapse0x31bc610() {
   return (neuron0x31a4c10()*-0.00413551);
}

double NNfunction_ns_chi03_uL::synapse0x31bc650() {
   return (neuron0x31a4f50()*0.0185605);
}

double NNfunction_ns_chi03_uL::synapse0x31bc690() {
   return (neuron0x31a5290()*0.00574404);
}

double NNfunction_ns_chi03_uL::synapse0x31bc6d0() {
   return (neuron0x31a55d0()*0.000209259);
}

double NNfunction_ns_chi03_uL::synapse0x31bc710() {
   return (neuron0x31a5910()*-0.0100574);
}

double NNfunction_ns_chi03_uL::synapse0x31bc750() {
   return (neuron0x31a5c50()*-0.0233235);
}

double NNfunction_ns_chi03_uL::synapse0x31bc790() {
   return (neuron0x31a5f90()*-0.184157);
}

double NNfunction_ns_chi03_uL::synapse0x31bc7d0() {
   return (neuron0x31a62d0()*0.0333454);
}

double NNfunction_ns_chi03_uL::synapse0x31bc810() {
   return (neuron0x31a6610()*-0.00662907);
}

double NNfunction_ns_chi03_uL::synapse0x31bc850() {
   return (neuron0x31a6950()*0.00581301);
}

double NNfunction_ns_chi03_uL::synapse0x31bc890() {
   return (neuron0x31a6c90()*0.0205851);
}

double NNfunction_ns_chi03_uL::synapse0x31bc320() {
   return (neuron0x31a6fd0()*0.00167365);
}

double NNfunction_ns_chi03_uL::synapse0x31bc360() {
   return (neuron0x31a7530()*0.0186205);
}

double NNfunction_ns_chi03_uL::synapse0x31bc9e0() {
   return (neuron0x31a7870()*0.000567655);
}

double NNfunction_ns_chi03_uL::synapse0x31bca20() {
   return (neuron0x31a7bb0()*0.0343733);
}

double NNfunction_ns_chi03_uL::synapse0x31bca60() {
   return (neuron0x31a7ef0()*-0.0198215);
}

double NNfunction_ns_chi03_uL::synapse0x31bcaa0() {
   return (neuron0x31a8230()*-0.0169946);
}

double NNfunction_ns_chi03_uL::synapse0x31bcae0() {
   return (neuron0x31a8570()*0.0126688);
}

double NNfunction_ns_chi03_uL::synapse0x31bcb20() {
   return (neuron0x31a88b0()*0.250715);
}

double NNfunction_ns_chi03_uL::synapse0x31bcea0() {
   return (neuron0x31a3c60()*0.0817368);
}

double NNfunction_ns_chi03_uL::synapse0x31bcee0() {
   return (neuron0x31a3f10()*21.0483);
}

double NNfunction_ns_chi03_uL::synapse0x31bcf20() {
   return (neuron0x31a4250()*-0.489666);
}

double NNfunction_ns_chi03_uL::synapse0x31bcf60() {
   return (neuron0x31a4590()*0.027482);
}

double NNfunction_ns_chi03_uL::synapse0x31bcfa0() {
   return (neuron0x31a48d0()*0.0298441);
}

double NNfunction_ns_chi03_uL::synapse0x31bcfe0() {
   return (neuron0x31a4c10()*0.027652);
}

double NNfunction_ns_chi03_uL::synapse0x31bd020() {
   return (neuron0x31a4f50()*-0.000176668);
}

double NNfunction_ns_chi03_uL::synapse0x31bd060() {
   return (neuron0x31a5290()*-0.0122902);
}

double NNfunction_ns_chi03_uL::synapse0x31bd0a0() {
   return (neuron0x31a55d0()*0.0183116);
}

double NNfunction_ns_chi03_uL::synapse0x31bd0e0() {
   return (neuron0x31a5910()*0.0241729);
}

double NNfunction_ns_chi03_uL::synapse0x31bd120() {
   return (neuron0x31a5c50()*-0.0183064);
}

double NNfunction_ns_chi03_uL::synapse0x31bd160() {
   return (neuron0x31a5f90()*0.159272);
}

double NNfunction_ns_chi03_uL::synapse0x31bd1a0() {
   return (neuron0x31a62d0()*0.0111883);
}

double NNfunction_ns_chi03_uL::synapse0x31bd1e0() {
   return (neuron0x31a6610()*-0.0104353);
}

double NNfunction_ns_chi03_uL::synapse0x31bd220() {
   return (neuron0x31a6950()*0.0103578);
}

double NNfunction_ns_chi03_uL::synapse0x31bd260() {
   return (neuron0x31a6c90()*-0.0165363);
}

double NNfunction_ns_chi03_uL::synapse0x31bccf0() {
   return (neuron0x31a6fd0()*-0.0179457);
}

double NNfunction_ns_chi03_uL::synapse0x31bcd30() {
   return (neuron0x31a7530()*-0.0401134);
}

double NNfunction_ns_chi03_uL::synapse0x31bd3b0() {
   return (neuron0x31a7870()*0.0268304);
}

double NNfunction_ns_chi03_uL::synapse0x31bd3f0() {
   return (neuron0x31a7bb0()*-0.0268148);
}

double NNfunction_ns_chi03_uL::synapse0x31bd430() {
   return (neuron0x31a7ef0()*0.0389672);
}

double NNfunction_ns_chi03_uL::synapse0x31bd470() {
   return (neuron0x31a8230()*-0.00691559);
}

double NNfunction_ns_chi03_uL::synapse0x31bd4b0() {
   return (neuron0x31a8570()*-0.00453344);
}

double NNfunction_ns_chi03_uL::synapse0x31bd4f0() {
   return (neuron0x31a88b0()*-0.118422);
}

double NNfunction_ns_chi03_uL::synapse0x31bd870() {
   return (neuron0x31a3c60()*0.214389);
}

double NNfunction_ns_chi03_uL::synapse0x31bd8b0() {
   return (neuron0x31a3f10()*0.544817);
}

double NNfunction_ns_chi03_uL::synapse0x31bd8f0() {
   return (neuron0x31a4250()*-1.17204);
}

double NNfunction_ns_chi03_uL::synapse0x31bd930() {
   return (neuron0x31a4590()*-0.515825);
}

double NNfunction_ns_chi03_uL::synapse0x31bd970() {
   return (neuron0x31a48d0()*0.143012);
}

double NNfunction_ns_chi03_uL::synapse0x31bd9b0() {
   return (neuron0x31a4c10()*0.15186);
}

double NNfunction_ns_chi03_uL::synapse0x31bd9f0() {
   return (neuron0x31a4f50()*-0.0712194);
}

double NNfunction_ns_chi03_uL::synapse0x31bda30() {
   return (neuron0x31a5290()*0.0212365);
}

double NNfunction_ns_chi03_uL::synapse0x31bda70() {
   return (neuron0x31a55d0()*-0.460172);
}

double NNfunction_ns_chi03_uL::synapse0x31bdab0() {
   return (neuron0x31a5910()*-0.914463);
}

double NNfunction_ns_chi03_uL::synapse0x31bdaf0() {
   return (neuron0x31a5c50()*0.861542);
}

double NNfunction_ns_chi03_uL::synapse0x31bdb30() {
   return (neuron0x31a5f90()*-1.78913);
}

double NNfunction_ns_chi03_uL::synapse0x31bdb70() {
   return (neuron0x31a62d0()*-0.419723);
}

double NNfunction_ns_chi03_uL::synapse0x31bdbb0() {
   return (neuron0x31a6610()*-0.114248);
}

double NNfunction_ns_chi03_uL::synapse0x31bdbf0() {
   return (neuron0x31a6950()*-0.485641);
}

double NNfunction_ns_chi03_uL::synapse0x31bdc30() {
   return (neuron0x31a6c90()*0.87999);
}

double NNfunction_ns_chi03_uL::synapse0x31bd6c0() {
   return (neuron0x31a6fd0()*0.609569);
}

double NNfunction_ns_chi03_uL::synapse0x31bd700() {
   return (neuron0x31a7530()*-1.26152);
}

double NNfunction_ns_chi03_uL::synapse0x31bdd80() {
   return (neuron0x31a7870()*0.710328);
}

double NNfunction_ns_chi03_uL::synapse0x31bddc0() {
   return (neuron0x31a7bb0()*-0.866691);
}

double NNfunction_ns_chi03_uL::synapse0x31bde00() {
   return (neuron0x31a7ef0()*0.835236);
}

double NNfunction_ns_chi03_uL::synapse0x31bde40() {
   return (neuron0x31a8230()*-0.324551);
}

double NNfunction_ns_chi03_uL::synapse0x31bde80() {
   return (neuron0x31a8570()*-0.198755);
}

double NNfunction_ns_chi03_uL::synapse0x31bdec0() {
   return (neuron0x31a88b0()*0.831819);
}

double NNfunction_ns_chi03_uL::synapse0x31be240() {
   return (neuron0x31a3c60()*-0.76151);
}

double NNfunction_ns_chi03_uL::synapse0x31be280() {
   return (neuron0x31a3f10()*0.290112);
}

double NNfunction_ns_chi03_uL::synapse0x31be2c0() {
   return (neuron0x31a4250()*-0.0164595);
}

double NNfunction_ns_chi03_uL::synapse0x31be300() {
   return (neuron0x31a4590()*0.44754);
}

double NNfunction_ns_chi03_uL::synapse0x31be340() {
   return (neuron0x31a48d0()*0.00830125);
}

double NNfunction_ns_chi03_uL::synapse0x31be380() {
   return (neuron0x31a4c10()*0.178521);
}

double NNfunction_ns_chi03_uL::synapse0x31be3c0() {
   return (neuron0x31a4f50()*-0.077836);
}

double NNfunction_ns_chi03_uL::synapse0x31be400() {
   return (neuron0x31a5290()*0.616004);
}

double NNfunction_ns_chi03_uL::synapse0x31be440() {
   return (neuron0x31a55d0()*0.267227);
}

double NNfunction_ns_chi03_uL::synapse0x31be480() {
   return (neuron0x31a5910()*-0.544287);
}

double NNfunction_ns_chi03_uL::synapse0x31be4c0() {
   return (neuron0x31a5c50()*-0.287388);
}

double NNfunction_ns_chi03_uL::synapse0x31be500() {
   return (neuron0x31a5f90()*-0.568774);
}

double NNfunction_ns_chi03_uL::synapse0x31be540() {
   return (neuron0x31a62d0()*-0.310442);
}

double NNfunction_ns_chi03_uL::synapse0x31be580() {
   return (neuron0x31a6610()*-0.0800631);
}

double NNfunction_ns_chi03_uL::synapse0x31be5c0() {
   return (neuron0x31a6950()*-0.362823);
}

double NNfunction_ns_chi03_uL::synapse0x31be600() {
   return (neuron0x31a6c90()*0.144166);
}

double NNfunction_ns_chi03_uL::synapse0x31be090() {
   return (neuron0x31a6fd0()*0.0999725);
}

double NNfunction_ns_chi03_uL::synapse0x31be0d0() {
   return (neuron0x31a7530()*0.825167);
}

double NNfunction_ns_chi03_uL::synapse0x31be750() {
   return (neuron0x31a7870()*0.283462);
}

double NNfunction_ns_chi03_uL::synapse0x31be790() {
   return (neuron0x31a7bb0()*-0.513047);
}

double NNfunction_ns_chi03_uL::synapse0x31be7d0() {
   return (neuron0x31a7ef0()*0.350354);
}

double NNfunction_ns_chi03_uL::synapse0x31be810() {
   return (neuron0x31a8230()*-0.416163);
}

double NNfunction_ns_chi03_uL::synapse0x31be850() {
   return (neuron0x31a8570()*-0.0582191);
}

double NNfunction_ns_chi03_uL::synapse0x31be890() {
   return (neuron0x31a88b0()*1.81255);
}

double NNfunction_ns_chi03_uL::synapse0x31bec10() {
   return (neuron0x31a3c60()*-0.874564);
}

double NNfunction_ns_chi03_uL::synapse0x31bec50() {
   return (neuron0x31a3f10()*0.288192);
}

double NNfunction_ns_chi03_uL::synapse0x31bec90() {
   return (neuron0x31a4250()*0.267235);
}

double NNfunction_ns_chi03_uL::synapse0x31becd0() {
   return (neuron0x31a4590()*-0.0213754);
}

double NNfunction_ns_chi03_uL::synapse0x31bed10() {
   return (neuron0x31a48d0()*-0.404664);
}

double NNfunction_ns_chi03_uL::synapse0x31bed50() {
   return (neuron0x31a4c10()*-0.0119869);
}

double NNfunction_ns_chi03_uL::synapse0x31bed90() {
   return (neuron0x31a4f50()*-0.289296);
}

double NNfunction_ns_chi03_uL::synapse0x31bedd0() {
   return (neuron0x31a5290()*0.413786);
}

double NNfunction_ns_chi03_uL::synapse0x31bee10() {
   return (neuron0x31a55d0()*0.281102);
}

double NNfunction_ns_chi03_uL::synapse0x31bee50() {
   return (neuron0x31a5910()*-0.330323);
}

double NNfunction_ns_chi03_uL::synapse0x31bee90() {
   return (neuron0x31a5c50()*0.236148);
}

double NNfunction_ns_chi03_uL::synapse0x31beed0() {
   return (neuron0x31a5f90()*0.0136549);
}

double NNfunction_ns_chi03_uL::synapse0x31bef10() {
   return (neuron0x31a62d0()*0.0833459);
}

double NNfunction_ns_chi03_uL::synapse0x31bef50() {
   return (neuron0x31a6610()*-0.238179);
}

double NNfunction_ns_chi03_uL::synapse0x31bef90() {
   return (neuron0x31a6950()*-0.702807);
}

double NNfunction_ns_chi03_uL::synapse0x31befd0() {
   return (neuron0x31a6c90()*0.616338);
}

double NNfunction_ns_chi03_uL::synapse0x31bea60() {
   return (neuron0x31a6fd0()*-0.0215801);
}

double NNfunction_ns_chi03_uL::synapse0x31beaa0() {
   return (neuron0x31a7530()*0.289896);
}

double NNfunction_ns_chi03_uL::synapse0x31bf120() {
   return (neuron0x31a7870()*-0.107587);
}

double NNfunction_ns_chi03_uL::synapse0x31bf160() {
   return (neuron0x31a7bb0()*-0.906836);
}

double NNfunction_ns_chi03_uL::synapse0x31bf1a0() {
   return (neuron0x31a7ef0()*0.506815);
}

double NNfunction_ns_chi03_uL::synapse0x31bf1e0() {
   return (neuron0x31a8230()*-0.442393);
}

double NNfunction_ns_chi03_uL::synapse0x31bf220() {
   return (neuron0x31a8570()*0.411498);
}

double NNfunction_ns_chi03_uL::synapse0x31bf260() {
   return (neuron0x31a88b0()*0.305061);
}

double NNfunction_ns_chi03_uL::synapse0x31bf5e0() {
   return (neuron0x31a3c60()*0.0209062);
}

double NNfunction_ns_chi03_uL::synapse0x31b3bb0() {
   return (neuron0x31a3f10()*-0.00294359);
}

double NNfunction_ns_chi03_uL::synapse0x31b3bf0() {
   return (neuron0x31a4250()*0.736663);
}

double NNfunction_ns_chi03_uL::synapse0x31b3c30() {
   return (neuron0x31a4590()*0.00254964);
}

double NNfunction_ns_chi03_uL::synapse0x31b3e80() {
   return (neuron0x31a48d0()*0.0117582);
}

double NNfunction_ns_chi03_uL::synapse0x31b3ec0() {
   return (neuron0x31a4c10()*0.0104175);
}

double NNfunction_ns_chi03_uL::synapse0x31b3f00() {
   return (neuron0x31a4f50()*-0.00395381);
}

double NNfunction_ns_chi03_uL::synapse0x31b4150() {
   return (neuron0x31a5290()*-0.00433228);
}

double NNfunction_ns_chi03_uL::synapse0x31b4190() {
   return (neuron0x31a55d0()*-0.0135967);
}

double NNfunction_ns_chi03_uL::synapse0x31b43e0() {
   return (neuron0x31a5910()*0.00603585);
}

double NNfunction_ns_chi03_uL::synapse0x31b4420() {
   return (neuron0x31a5c50()*-0.0142294);
}

double NNfunction_ns_chi03_uL::synapse0x31b4460() {
   return (neuron0x31a5f90()*-0.41099);
}

double NNfunction_ns_chi03_uL::synapse0x31b46b0() {
   return (neuron0x31a62d0()*0.0154134);
}

double NNfunction_ns_chi03_uL::synapse0x31b46f0() {
   return (neuron0x31a6610()*-0.00167498);
}

double NNfunction_ns_chi03_uL::synapse0x31b4940() {
   return (neuron0x31a6950()*0.0211402);
}

double NNfunction_ns_chi03_uL::synapse0x31b4980() {
   return (neuron0x31a6c90()*0.00317585);
}

double NNfunction_ns_chi03_uL::synapse0x31bf430() {
   return (neuron0x31a6fd0()*0.00455426);
}

double NNfunction_ns_chi03_uL::synapse0x31bf470() {
   return (neuron0x31a7530()*0.00411684);
}

double NNfunction_ns_chi03_uL::synapse0x31b4ad0() {
   return (neuron0x31a7870()*0.000912213);
}

double NNfunction_ns_chi03_uL::synapse0x31b4fe0() {
   return (neuron0x31a7bb0()*-0.00325134);
}

double NNfunction_ns_chi03_uL::synapse0x31b5020() {
   return (neuron0x31a7ef0()*-0.00280659);
}

double NNfunction_ns_chi03_uL::synapse0x31b5060() {
   return (neuron0x31a8230()*-0.000578936);
}

double NNfunction_ns_chi03_uL::synapse0x31b52b0() {
   return (neuron0x31a8570()*-0.000679597);
}

double NNfunction_ns_chi03_uL::synapse0x31b52f0() {
   return (neuron0x31a88b0()*0.815808);
}

double NNfunction_ns_chi03_uL::synapse0x31b4ba0() {
   return (neuron0x31a3c60()*-0.0363679);
}

double NNfunction_ns_chi03_uL::synapse0x31b4be0() {
   return (neuron0x31a3f10()*-0.00236838);
}

double NNfunction_ns_chi03_uL::synapse0x31b4c20() {
   return (neuron0x31a4250()*-0.0886708);
}

double NNfunction_ns_chi03_uL::synapse0x31b4c60() {
   return (neuron0x31a4590()*0.00478796);
}

double NNfunction_ns_chi03_uL::synapse0x31b55e0() {
   return (neuron0x31a48d0()*-0.0102712);
}

double NNfunction_ns_chi03_uL::synapse0x31c1930() {
   return (neuron0x31a4c10()*0.0223134);
}

double NNfunction_ns_chi03_uL::synapse0x31c1970() {
   return (neuron0x31a4f50()*0.0132404);
}

double NNfunction_ns_chi03_uL::synapse0x31c19b0() {
   return (neuron0x31a5290()*-0.00773378);
}

double NNfunction_ns_chi03_uL::synapse0x31c19f0() {
   return (neuron0x31a55d0()*-0.0234656);
}

double NNfunction_ns_chi03_uL::synapse0x31c1a30() {
   return (neuron0x31a5910()*-0.0234905);
}

double NNfunction_ns_chi03_uL::synapse0x31c1a70() {
   return (neuron0x31a5c50()*-0.0126995);
}

double NNfunction_ns_chi03_uL::synapse0x31c1ab0() {
   return (neuron0x31a5f90()*-2.23203);
}

double NNfunction_ns_chi03_uL::synapse0x31c1af0() {
   return (neuron0x31a62d0()*-0.00237343);
}

double NNfunction_ns_chi03_uL::synapse0x31c1b30() {
   return (neuron0x31a6610()*0.00834806);
}

double NNfunction_ns_chi03_uL::synapse0x31c1b70() {
   return (neuron0x31a6950()*0.0133196);
}

double NNfunction_ns_chi03_uL::synapse0x31c1bb0() {
   return (neuron0x31a6c90()*-0.0114228);
}

double NNfunction_ns_chi03_uL::synapse0x31b54c0() {
   return (neuron0x31a6fd0()*0.0178813);
}

double NNfunction_ns_chi03_uL::synapse0x31b5500() {
   return (neuron0x31a7530()*-0.0115155);
}

double NNfunction_ns_chi03_uL::synapse0x31c1d00() {
   return (neuron0x31a7870()*-0.00926991);
}

double NNfunction_ns_chi03_uL::synapse0x31c1d40() {
   return (neuron0x31a7bb0()*0.0250973);
}

double NNfunction_ns_chi03_uL::synapse0x31c1d80() {
   return (neuron0x31a7ef0()*-0.0197992);
}

double NNfunction_ns_chi03_uL::synapse0x31c1dc0() {
   return (neuron0x31a8230()*0.0369643);
}

double NNfunction_ns_chi03_uL::synapse0x31c1e00() {
   return (neuron0x31a8570()*-0.0132245);
}

double NNfunction_ns_chi03_uL::synapse0x31c1e40() {
   return (neuron0x31a88b0()*-0.210666);
}

double NNfunction_ns_chi03_uL::synapse0x31c21c0() {
   return (neuron0x31a3c60()*-0.130438);
}

double NNfunction_ns_chi03_uL::synapse0x31c2200() {
   return (neuron0x31a3f10()*-0.110518);
}

double NNfunction_ns_chi03_uL::synapse0x31c2240() {
   return (neuron0x31a4250()*-0.413947);
}

double NNfunction_ns_chi03_uL::synapse0x31c2280() {
   return (neuron0x31a4590()*-0.630294);
}

double NNfunction_ns_chi03_uL::synapse0x31c22c0() {
   return (neuron0x31a48d0()*-0.754099);
}

double NNfunction_ns_chi03_uL::synapse0x31c2300() {
   return (neuron0x31a4c10()*0.179923);
}

double NNfunction_ns_chi03_uL::synapse0x31c2340() {
   return (neuron0x31a4f50()*-0.910132);
}

double NNfunction_ns_chi03_uL::synapse0x31c2380() {
   return (neuron0x31a5290()*-0.337858);
}

double NNfunction_ns_chi03_uL::synapse0x31c23c0() {
   return (neuron0x31a55d0()*-0.629623);
}

double NNfunction_ns_chi03_uL::synapse0x31c2400() {
   return (neuron0x31a5910()*-1.1433);
}

double NNfunction_ns_chi03_uL::synapse0x31c2440() {
   return (neuron0x31a5c50()*0.8884);
}

double NNfunction_ns_chi03_uL::synapse0x31c2480() {
   return (neuron0x31a5f90()*0.22738);
}

double NNfunction_ns_chi03_uL::synapse0x31c24c0() {
   return (neuron0x31a62d0()*0.0665841);
}

double NNfunction_ns_chi03_uL::synapse0x31c2500() {
   return (neuron0x31a6610()*0.190988);
}

double NNfunction_ns_chi03_uL::synapse0x31c2540() {
   return (neuron0x31a6950()*0.0189403);
}

double NNfunction_ns_chi03_uL::synapse0x31c2580() {
   return (neuron0x31a6c90()*0.232865);
}

double NNfunction_ns_chi03_uL::synapse0x31c2010() {
   return (neuron0x31a6fd0()*-0.950179);
}

double NNfunction_ns_chi03_uL::synapse0x31c2050() {
   return (neuron0x31a7530()*-0.529157);
}

double NNfunction_ns_chi03_uL::synapse0x31c26d0() {
   return (neuron0x31a7870()*-0.0233317);
}

double NNfunction_ns_chi03_uL::synapse0x31c2710() {
   return (neuron0x31a7bb0()*-1.13997);
}

double NNfunction_ns_chi03_uL::synapse0x31c2750() {
   return (neuron0x31a7ef0()*-0.771405);
}

double NNfunction_ns_chi03_uL::synapse0x31c2790() {
   return (neuron0x31a8230()*1.12877);
}

double NNfunction_ns_chi03_uL::synapse0x31c27d0() {
   return (neuron0x31a8570()*-0.514019);
}

double NNfunction_ns_chi03_uL::synapse0x31c2810() {
   return (neuron0x31a88b0()*-0.203466);
}

double NNfunction_ns_chi03_uL::synapse0x31c2b90() {
   return (neuron0x31a3c60()*0.0771284);
}

double NNfunction_ns_chi03_uL::synapse0x31c2bd0() {
   return (neuron0x31a3f10()*-0.0713536);
}

double NNfunction_ns_chi03_uL::synapse0x31c2c10() {
   return (neuron0x31a4250()*3.77711);
}

double NNfunction_ns_chi03_uL::synapse0x31c2c50() {
   return (neuron0x31a4590()*-0.0529125);
}

double NNfunction_ns_chi03_uL::synapse0x31c2c90() {
   return (neuron0x31a48d0()*-0.0629176);
}

double NNfunction_ns_chi03_uL::synapse0x31c2cd0() {
   return (neuron0x31a4c10()*0.039968);
}

double NNfunction_ns_chi03_uL::synapse0x31c2d10() {
   return (neuron0x31a4f50()*-0.00296863);
}

double NNfunction_ns_chi03_uL::synapse0x31c2d50() {
   return (neuron0x31a5290()*-0.0417681);
}

double NNfunction_ns_chi03_uL::synapse0x31c2d90() {
   return (neuron0x31a55d0()*-0.0206499);
}

double NNfunction_ns_chi03_uL::synapse0x31c2dd0() {
   return (neuron0x31a5910()*0.0357885);
}

double NNfunction_ns_chi03_uL::synapse0x31c2e10() {
   return (neuron0x31a5c50()*-0.0688562);
}

double NNfunction_ns_chi03_uL::synapse0x31c2e50() {
   return (neuron0x31a5f90()*0.22608);
}

double NNfunction_ns_chi03_uL::synapse0x31c2e90() {
   return (neuron0x31a62d0()*0.0225719);
}

double NNfunction_ns_chi03_uL::synapse0x31c2ed0() {
   return (neuron0x31a6610()*0.0351543);
}

double NNfunction_ns_chi03_uL::synapse0x31c2f10() {
   return (neuron0x31a6950()*-0.0138196);
}

double NNfunction_ns_chi03_uL::synapse0x31c2f50() {
   return (neuron0x31a6c90()*0.0648853);
}

double NNfunction_ns_chi03_uL::synapse0x31c29e0() {
   return (neuron0x31a6fd0()*0.0377061);
}

double NNfunction_ns_chi03_uL::synapse0x31c2a20() {
   return (neuron0x31a7530()*0.0201766);
}

double NNfunction_ns_chi03_uL::synapse0x31c30a0() {
   return (neuron0x31a7870()*0.0104832);
}

double NNfunction_ns_chi03_uL::synapse0x31c30e0() {
   return (neuron0x31a7bb0()*0.0213185);
}

double NNfunction_ns_chi03_uL::synapse0x31c3120() {
   return (neuron0x31a7ef0()*-0.0179683);
}

double NNfunction_ns_chi03_uL::synapse0x31c3160() {
   return (neuron0x31a8230()*-0.0243519);
}

double NNfunction_ns_chi03_uL::synapse0x31c31a0() {
   return (neuron0x31a8570()*-0.00874118);
}

double NNfunction_ns_chi03_uL::synapse0x31c31e0() {
   return (neuron0x31a88b0()*-2.97041);
}

double NNfunction_ns_chi03_uL::synapse0x31c3560() {
   return (neuron0x31a3c60()*-0.0683058);
}

double NNfunction_ns_chi03_uL::synapse0x31c35a0() {
   return (neuron0x31a3f10()*7.37262);
}

double NNfunction_ns_chi03_uL::synapse0x31c35e0() {
   return (neuron0x31a4250()*-3.09921);
}

double NNfunction_ns_chi03_uL::synapse0x31c3620() {
   return (neuron0x31a4590()*-0.0115512);
}

double NNfunction_ns_chi03_uL::synapse0x31c3660() {
   return (neuron0x31a48d0()*-0.017778);
}

double NNfunction_ns_chi03_uL::synapse0x31c36a0() {
   return (neuron0x31a4c10()*-0.0303969);
}

double NNfunction_ns_chi03_uL::synapse0x31c36e0() {
   return (neuron0x31a4f50()*-0.00119583);
}

double NNfunction_ns_chi03_uL::synapse0x31c3720() {
   return (neuron0x31a5290()*-0.00697318);
}

double NNfunction_ns_chi03_uL::synapse0x31c3760() {
   return (neuron0x31a55d0()*-0.0273214);
}

double NNfunction_ns_chi03_uL::synapse0x31c37a0() {
   return (neuron0x31a5910()*-0.0173629);
}

double NNfunction_ns_chi03_uL::synapse0x31c37e0() {
   return (neuron0x31a5c50()*0.0544017);
}

double NNfunction_ns_chi03_uL::synapse0x31c3820() {
   return (neuron0x31a5f90()*0.0187232);
}

double NNfunction_ns_chi03_uL::synapse0x31c3860() {
   return (neuron0x31a62d0()*-0.0531564);
}

double NNfunction_ns_chi03_uL::synapse0x31c38a0() {
   return (neuron0x31a6610()*-0.00436877);
}

double NNfunction_ns_chi03_uL::synapse0x31c38e0() {
   return (neuron0x31a6950()*0.0721311);
}

double NNfunction_ns_chi03_uL::synapse0x31c3920() {
   return (neuron0x31a6c90()*0.0994951);
}

double NNfunction_ns_chi03_uL::synapse0x31c33b0() {
   return (neuron0x31a6fd0()*-0.00830702);
}

double NNfunction_ns_chi03_uL::synapse0x31c33f0() {
   return (neuron0x31a7530()*0.0102648);
}

double NNfunction_ns_chi03_uL::synapse0x31c3a70() {
   return (neuron0x31a7870()*-0.0221889);
}

double NNfunction_ns_chi03_uL::synapse0x31c3ab0() {
   return (neuron0x31a7bb0()*0.0403813);
}

double NNfunction_ns_chi03_uL::synapse0x31c3af0() {
   return (neuron0x31a7ef0()*-0.0195676);
}

double NNfunction_ns_chi03_uL::synapse0x31c3b30() {
   return (neuron0x31a8230()*0.0488305);
}

double NNfunction_ns_chi03_uL::synapse0x31c3b70() {
   return (neuron0x31a8570()*-0.0283028);
}

double NNfunction_ns_chi03_uL::synapse0x31c3bb0() {
   return (neuron0x31a88b0()*-0.745625);
}

double NNfunction_ns_chi03_uL::synapse0x31c3f30() {
   return (neuron0x31a3c60()*0.715543);
}

double NNfunction_ns_chi03_uL::synapse0x31c3f70() {
   return (neuron0x31a3f10()*0.377168);
}

double NNfunction_ns_chi03_uL::synapse0x31c3fb0() {
   return (neuron0x31a4250()*-0.567447);
}

double NNfunction_ns_chi03_uL::synapse0x31c3ff0() {
   return (neuron0x31a4590()*0.311413);
}

double NNfunction_ns_chi03_uL::synapse0x31c4030() {
   return (neuron0x31a48d0()*-0.357109);
}

double NNfunction_ns_chi03_uL::synapse0x31c4070() {
   return (neuron0x31a4c10()*0.441532);
}

double NNfunction_ns_chi03_uL::synapse0x31c40b0() {
   return (neuron0x31a4f50()*-0.172929);
}

double NNfunction_ns_chi03_uL::synapse0x31c40f0() {
   return (neuron0x31a5290()*0.209857);
}

double NNfunction_ns_chi03_uL::synapse0x31c4130() {
   return (neuron0x31a55d0()*0.755485);
}

double NNfunction_ns_chi03_uL::synapse0x31c4170() {
   return (neuron0x31a5910()*1.45925);
}

double NNfunction_ns_chi03_uL::synapse0x31c41b0() {
   return (neuron0x31a5c50()*-0.078672);
}

double NNfunction_ns_chi03_uL::synapse0x31c41f0() {
   return (neuron0x31a5f90()*-0.370198);
}

double NNfunction_ns_chi03_uL::synapse0x31c4230() {
   return (neuron0x31a62d0()*0.973607);
}

double NNfunction_ns_chi03_uL::synapse0x31c4270() {
   return (neuron0x31a6610()*0.118242);
}

double NNfunction_ns_chi03_uL::synapse0x31c42b0() {
   return (neuron0x31a6950()*-0.473616);
}

double NNfunction_ns_chi03_uL::synapse0x31c42f0() {
   return (neuron0x31a6c90()*0.299395);
}

double NNfunction_ns_chi03_uL::synapse0x31c3d80() {
   return (neuron0x31a6fd0()*-0.391813);
}

double NNfunction_ns_chi03_uL::synapse0x31c3dc0() {
   return (neuron0x31a7530()*0.378199);
}

double NNfunction_ns_chi03_uL::synapse0x31c4440() {
   return (neuron0x31a7870()*0.43047);
}

double NNfunction_ns_chi03_uL::synapse0x31c4480() {
   return (neuron0x31a7bb0()*-0.405843);
}

double NNfunction_ns_chi03_uL::synapse0x31c44c0() {
   return (neuron0x31a7ef0()*1.54135);
}

double NNfunction_ns_chi03_uL::synapse0x31c4500() {
   return (neuron0x31a8230()*-0.433547);
}

double NNfunction_ns_chi03_uL::synapse0x31c4540() {
   return (neuron0x31a8570()*0.347122);
}

double NNfunction_ns_chi03_uL::synapse0x31c4580() {
   return (neuron0x31a88b0()*1.1751);
}

double NNfunction_ns_chi03_uL::synapse0x31c4900() {
   return (neuron0x31a3c60()*0.381902);
}

double NNfunction_ns_chi03_uL::synapse0x31c4940() {
   return (neuron0x31a3f10()*0.154945);
}

double NNfunction_ns_chi03_uL::synapse0x31c4980() {
   return (neuron0x31a4250()*-0.514413);
}

double NNfunction_ns_chi03_uL::synapse0x31c49c0() {
   return (neuron0x31a4590()*0.854211);
}

double NNfunction_ns_chi03_uL::synapse0x31c4a00() {
   return (neuron0x31a48d0()*-0.240456);
}

double NNfunction_ns_chi03_uL::synapse0x31c4a40() {
   return (neuron0x31a4c10()*0.519825);
}

double NNfunction_ns_chi03_uL::synapse0x31c4a80() {
   return (neuron0x31a4f50()*0.959415);
}

double NNfunction_ns_chi03_uL::synapse0x31c4ac0() {
   return (neuron0x31a5290()*-0.403987);
}

double NNfunction_ns_chi03_uL::synapse0x31c4b00() {
   return (neuron0x31a55d0()*-0.101091);
}

double NNfunction_ns_chi03_uL::synapse0x31c4b40() {
   return (neuron0x31a5910()*-0.0729223);
}

double NNfunction_ns_chi03_uL::synapse0x31c4b80() {
   return (neuron0x31a5c50()*0.0445711);
}

double NNfunction_ns_chi03_uL::synapse0x31c4bc0() {
   return (neuron0x31a5f90()*-1.12235);
}

double NNfunction_ns_chi03_uL::synapse0x31c4c00() {
   return (neuron0x31a62d0()*-0.463561);
}

double NNfunction_ns_chi03_uL::synapse0x31c4c40() {
   return (neuron0x31a6610()*-0.117392);
}

double NNfunction_ns_chi03_uL::synapse0x31c4c80() {
   return (neuron0x31a6950()*-0.140231);
}

double NNfunction_ns_chi03_uL::synapse0x31c4cc0() {
   return (neuron0x31a6c90()*0.223668);
}

double NNfunction_ns_chi03_uL::synapse0x31c4750() {
   return (neuron0x31a6fd0()*-0.218586);
}

double NNfunction_ns_chi03_uL::synapse0x31c4790() {
   return (neuron0x31a7530()*0.410605);
}

double NNfunction_ns_chi03_uL::synapse0x31c4e10() {
   return (neuron0x31a7870()*-0.233789);
}

double NNfunction_ns_chi03_uL::synapse0x31c4e50() {
   return (neuron0x31a7bb0()*0.588506);
}

double NNfunction_ns_chi03_uL::synapse0x31c4e90() {
   return (neuron0x31a7ef0()*-0.583669);
}

double NNfunction_ns_chi03_uL::synapse0x31c4ed0() {
   return (neuron0x31a8230()*0.618102);
}

double NNfunction_ns_chi03_uL::synapse0x31c4f10() {
   return (neuron0x31a8570()*-0.101065);
}

double NNfunction_ns_chi03_uL::synapse0x31c4f50() {
   return (neuron0x31a88b0()*0.403772);
}

double NNfunction_ns_chi03_uL::synapse0x31c52d0() {
   return (neuron0x31a3c60()*0.422702);
}

double NNfunction_ns_chi03_uL::synapse0x31c5310() {
   return (neuron0x31a3f10()*-0.0754398);
}

double NNfunction_ns_chi03_uL::synapse0x31c5350() {
   return (neuron0x31a4250()*0.718165);
}

double NNfunction_ns_chi03_uL::synapse0x31c5390() {
   return (neuron0x31a4590()*-1.1787);
}

double NNfunction_ns_chi03_uL::synapse0x31c53d0() {
   return (neuron0x31a48d0()*-0.208227);
}

double NNfunction_ns_chi03_uL::synapse0x31c5410() {
   return (neuron0x31a4c10()*-0.102238);
}

double NNfunction_ns_chi03_uL::synapse0x31c5450() {
   return (neuron0x31a4f50()*0.48797);
}

double NNfunction_ns_chi03_uL::synapse0x31c5490() {
   return (neuron0x31a5290()*0.227286);
}

double NNfunction_ns_chi03_uL::synapse0x31c54d0() {
   return (neuron0x31a55d0()*0.0164735);
}

double NNfunction_ns_chi03_uL::synapse0x31c5510() {
   return (neuron0x31a5910()*-0.0283531);
}

double NNfunction_ns_chi03_uL::synapse0x31c5550() {
   return (neuron0x31a5c50()*0.206003);
}

double NNfunction_ns_chi03_uL::synapse0x31c5590() {
   return (neuron0x31a5f90()*1.62531);
}

double NNfunction_ns_chi03_uL::synapse0x31c55d0() {
   return (neuron0x31a62d0()*-0.406779);
}

double NNfunction_ns_chi03_uL::synapse0x31c5610() {
   return (neuron0x31a6610()*0.22554);
}

double NNfunction_ns_chi03_uL::synapse0x31c5650() {
   return (neuron0x31a6950()*-0.181561);
}

double NNfunction_ns_chi03_uL::synapse0x31c5690() {
   return (neuron0x31a6c90()*0.0920302);
}

double NNfunction_ns_chi03_uL::synapse0x31c5120() {
   return (neuron0x31a6fd0()*0.744014);
}

double NNfunction_ns_chi03_uL::synapse0x31c5160() {
   return (neuron0x31a7530()*0.187258);
}

double NNfunction_ns_chi03_uL::synapse0x31c57e0() {
   return (neuron0x31a7870()*0.0267953);
}

double NNfunction_ns_chi03_uL::synapse0x31c5820() {
   return (neuron0x31a7bb0()*-0.032968);
}

double NNfunction_ns_chi03_uL::synapse0x31c5860() {
   return (neuron0x31a7ef0()*0.577598);
}

double NNfunction_ns_chi03_uL::synapse0x31c58a0() {
   return (neuron0x31a8230()*-0.0886362);
}

double NNfunction_ns_chi03_uL::synapse0x31c58e0() {
   return (neuron0x31a8570()*-0.397935);
}

double NNfunction_ns_chi03_uL::synapse0x31c5920() {
   return (neuron0x31a88b0()*0.685249);
}

double NNfunction_ns_chi03_uL::synapse0x31c5ca0() {
   return (neuron0x31a3c60()*0.0358073);
}

double NNfunction_ns_chi03_uL::synapse0x31c5ce0() {
   return (neuron0x31a3f10()*0.108239);
}

double NNfunction_ns_chi03_uL::synapse0x31c5d20() {
   return (neuron0x31a4250()*0.259981);
}

double NNfunction_ns_chi03_uL::synapse0x31c5d60() {
   return (neuron0x31a4590()*-0.0362935);
}

double NNfunction_ns_chi03_uL::synapse0x31c5da0() {
   return (neuron0x31a48d0()*0.0823604);
}

double NNfunction_ns_chi03_uL::synapse0x31c5de0() {
   return (neuron0x31a4c10()*0.0197003);
}

double NNfunction_ns_chi03_uL::synapse0x31c5e20() {
   return (neuron0x31a4f50()*-0.0257509);
}

double NNfunction_ns_chi03_uL::synapse0x31c5e60() {
   return (neuron0x31a5290()*-0.0187322);
}

double NNfunction_ns_chi03_uL::synapse0x31c5ea0() {
   return (neuron0x31a55d0()*-0.00187267);
}

double NNfunction_ns_chi03_uL::synapse0x31c5ee0() {
   return (neuron0x31a5910()*-0.00935827);
}

double NNfunction_ns_chi03_uL::synapse0x31c5f20() {
   return (neuron0x31a5c50()*-0.03499);
}

double NNfunction_ns_chi03_uL::synapse0x31c5f60() {
   return (neuron0x31a5f90()*-0.703993);
}

double NNfunction_ns_chi03_uL::synapse0x31c5fa0() {
   return (neuron0x31a62d0()*-0.0584334);
}

double NNfunction_ns_chi03_uL::synapse0x31c5fe0() {
   return (neuron0x31a6610()*-0.0169392);
}

double NNfunction_ns_chi03_uL::synapse0x31c6020() {
   return (neuron0x31a6950()*0.0613636);
}

double NNfunction_ns_chi03_uL::synapse0x31c6060() {
   return (neuron0x31a6c90()*0.0958935);
}

double NNfunction_ns_chi03_uL::synapse0x31c5af0() {
   return (neuron0x31a6fd0()*-0.0603645);
}

double NNfunction_ns_chi03_uL::synapse0x31c5b30() {
   return (neuron0x31a7530()*-0.0405361);
}

double NNfunction_ns_chi03_uL::synapse0x31c61b0() {
   return (neuron0x31a7870()*-0.0274316);
}

double NNfunction_ns_chi03_uL::synapse0x31c61f0() {
   return (neuron0x31a7bb0()*0.025578);
}

double NNfunction_ns_chi03_uL::synapse0x31c6230() {
   return (neuron0x31a7ef0()*-0.019552);
}

double NNfunction_ns_chi03_uL::synapse0x31c6270() {
   return (neuron0x31a8230()*-0.00578952);
}

double NNfunction_ns_chi03_uL::synapse0x31c62b0() {
   return (neuron0x31a8570()*0.0323973);
}

double NNfunction_ns_chi03_uL::synapse0x31c62f0() {
   return (neuron0x31a88b0()*5.08304);
}

double NNfunction_ns_chi03_uL::synapse0x31aeda0() {
   return (neuron0x31a3c60()*-0.0124245);
}

double NNfunction_ns_chi03_uL::synapse0x31aede0() {
   return (neuron0x31a3f10()*-0.0274486);
}

double NNfunction_ns_chi03_uL::synapse0x31aee20() {
   return (neuron0x31a4250()*-4.09689);
}

double NNfunction_ns_chi03_uL::synapse0x31aee60() {
   return (neuron0x31a4590()*0.0133451);
}

double NNfunction_ns_chi03_uL::synapse0x31aeea0() {
   return (neuron0x31a48d0()*-0.00479265);
}

double NNfunction_ns_chi03_uL::synapse0x31aeee0() {
   return (neuron0x31a4c10()*0.00387796);
}

double NNfunction_ns_chi03_uL::synapse0x31aef20() {
   return (neuron0x31a4f50()*-0.00889016);
}

double NNfunction_ns_chi03_uL::synapse0x31aef60() {
   return (neuron0x31a5290()*-0.016361);
}

double NNfunction_ns_chi03_uL::synapse0x31c6a80() {
   return (neuron0x31a55d0()*0.00312526);
}

double NNfunction_ns_chi03_uL::synapse0x31c6ac0() {
   return (neuron0x31a5910()*0.0186967);
}

double NNfunction_ns_chi03_uL::synapse0x31c6b00() {
   return (neuron0x31a5c50()*-0.00841312);
}

double NNfunction_ns_chi03_uL::synapse0x31c6b40() {
   return (neuron0x31a5f90()*-0.0744999);
}

double NNfunction_ns_chi03_uL::synapse0x31c6b80() {
   return (neuron0x31a62d0()*-0.0029738);
}

double NNfunction_ns_chi03_uL::synapse0x31c6bc0() {
   return (neuron0x31a6610()*0.0111157);
}

double NNfunction_ns_chi03_uL::synapse0x31c6c00() {
   return (neuron0x31a6950()*-0.0136462);
}

double NNfunction_ns_chi03_uL::synapse0x31c6c40() {
   return (neuron0x31a6c90()*0.00729098);
}

double NNfunction_ns_chi03_uL::synapse0x31c64c0() {
   return (neuron0x31a6fd0()*0.0231789);
}

double NNfunction_ns_chi03_uL::synapse0x31c6500() {
   return (neuron0x31a7530()*-0.000819017);
}

double NNfunction_ns_chi03_uL::synapse0x31c6d90() {
   return (neuron0x31a7870()*-0.00468591);
}

double NNfunction_ns_chi03_uL::synapse0x31c6dd0() {
   return (neuron0x31a7bb0()*0.00664636);
}

double NNfunction_ns_chi03_uL::synapse0x31c6e10() {
   return (neuron0x31a7ef0()*0.00780619);
}

double NNfunction_ns_chi03_uL::synapse0x31c6e50() {
   return (neuron0x31a8230()*0.0117797);
}

double NNfunction_ns_chi03_uL::synapse0x31c6e90() {
   return (neuron0x31a8570()*-0.00322754);
}

double NNfunction_ns_chi03_uL::synapse0x31c6ed0() {
   return (neuron0x31a88b0()*1.58449);
}

double NNfunction_ns_chi03_uL::synapse0x31c7250() {
   return (neuron0x31a3c60()*-1.86366);
}

double NNfunction_ns_chi03_uL::synapse0x31c7290() {
   return (neuron0x31a3f10()*-0.250857);
}

double NNfunction_ns_chi03_uL::synapse0x31c72d0() {
   return (neuron0x31a4250()*-1.25726);
}

double NNfunction_ns_chi03_uL::synapse0x31c7310() {
   return (neuron0x31a4590()*-0.281074);
}

double NNfunction_ns_chi03_uL::synapse0x31c7350() {
   return (neuron0x31a48d0()*0.0492247);
}

double NNfunction_ns_chi03_uL::synapse0x31c7390() {
   return (neuron0x31a4c10()*0.114023);
}

double NNfunction_ns_chi03_uL::synapse0x31c73d0() {
   return (neuron0x31a4f50()*-0.0808708);
}

double NNfunction_ns_chi03_uL::synapse0x31c7410() {
   return (neuron0x31a5290()*-0.3954);
}

double NNfunction_ns_chi03_uL::synapse0x31c7450() {
   return (neuron0x31a55d0()*-0.257946);
}

double NNfunction_ns_chi03_uL::synapse0x31c7490() {
   return (neuron0x31a5910()*-0.418076);
}

double NNfunction_ns_chi03_uL::synapse0x31c74d0() {
   return (neuron0x31a5c50()*0.54846);
}

double NNfunction_ns_chi03_uL::synapse0x31c7510() {
   return (neuron0x31a5f90()*1.39879);
}

double NNfunction_ns_chi03_uL::synapse0x31c7550() {
   return (neuron0x31a62d0()*-0.157302);
}

double NNfunction_ns_chi03_uL::synapse0x31c7590() {
   return (neuron0x31a6610()*0.120531);
}

double NNfunction_ns_chi03_uL::synapse0x31c75d0() {
   return (neuron0x31a6950()*-0.217485);
}

double NNfunction_ns_chi03_uL::synapse0x31c7610() {
   return (neuron0x31a6c90()*0.691455);
}

double NNfunction_ns_chi03_uL::synapse0x31c70a0() {
   return (neuron0x31a6fd0()*-0.93544);
}

double NNfunction_ns_chi03_uL::synapse0x31c70e0() {
   return (neuron0x31a7530()*0.328446);
}

double NNfunction_ns_chi03_uL::synapse0x31c7760() {
   return (neuron0x31a7870()*0.510975);
}

double NNfunction_ns_chi03_uL::synapse0x31c77a0() {
   return (neuron0x31a7bb0()*0.88635);
}

double NNfunction_ns_chi03_uL::synapse0x31c77e0() {
   return (neuron0x31a7ef0()*0.641311);
}

double NNfunction_ns_chi03_uL::synapse0x31c7820() {
   return (neuron0x31a8230()*0.258099);
}

double NNfunction_ns_chi03_uL::synapse0x31c7860() {
   return (neuron0x31a8570()*-0.327852);
}

double NNfunction_ns_chi03_uL::synapse0x31c78a0() {
   return (neuron0x31a88b0()*0.790318);
}

double NNfunction_ns_chi03_uL::synapse0x31c7c20() {
   return (neuron0x31a3c60()*1.59084);
}

double NNfunction_ns_chi03_uL::synapse0x31c7c60() {
   return (neuron0x31a3f10()*0.0373153);
}

double NNfunction_ns_chi03_uL::synapse0x31c7ca0() {
   return (neuron0x31a4250()*1.74434);
}

double NNfunction_ns_chi03_uL::synapse0x31c7ce0() {
   return (neuron0x31a4590()*0.423999);
}

double NNfunction_ns_chi03_uL::synapse0x31c7d20() {
   return (neuron0x31a48d0()*-0.39029);
}

double NNfunction_ns_chi03_uL::synapse0x31c7d60() {
   return (neuron0x31a4c10()*-0.0738478);
}

double NNfunction_ns_chi03_uL::synapse0x31c7da0() {
   return (neuron0x31a4f50()*0.15558);
}

double NNfunction_ns_chi03_uL::synapse0x31c7de0() {
   return (neuron0x31a5290()*0.0929114);
}

double NNfunction_ns_chi03_uL::synapse0x31c7e20() {
   return (neuron0x31a55d0()*0.132534);
}

double NNfunction_ns_chi03_uL::synapse0x31c7e60() {
   return (neuron0x31a5910()*-0.173899);
}

double NNfunction_ns_chi03_uL::synapse0x31c7ea0() {
   return (neuron0x31a5c50()*-0.781345);
}

double NNfunction_ns_chi03_uL::synapse0x31c7ee0() {
   return (neuron0x31a5f90()*-0.168927);
}

double NNfunction_ns_chi03_uL::synapse0x31c7f20() {
   return (neuron0x31a62d0()*0.131365);
}

double NNfunction_ns_chi03_uL::synapse0x31c7f60() {
   return (neuron0x31a6610()*0.647598);
}

double NNfunction_ns_chi03_uL::synapse0x31c7fa0() {
   return (neuron0x31a6950()*0.241419);
}

double NNfunction_ns_chi03_uL::synapse0x31c7fe0() {
   return (neuron0x31a6c90()*0.194163);
}

double NNfunction_ns_chi03_uL::synapse0x31c7a70() {
   return (neuron0x31a6fd0()*0.0756761);
}

double NNfunction_ns_chi03_uL::synapse0x31c7ab0() {
   return (neuron0x31a7530()*0.296481);
}

double NNfunction_ns_chi03_uL::synapse0x31b85e0() {
   return (neuron0x31a7870()*-0.508655);
}

double NNfunction_ns_chi03_uL::synapse0x31b8620() {
   return (neuron0x31a7bb0()*0.43295);
}

double NNfunction_ns_chi03_uL::synapse0x31b8660() {
   return (neuron0x31a7ef0()*-0.627174);
}

double NNfunction_ns_chi03_uL::synapse0x31b86a0() {
   return (neuron0x31a8230()*-0.00141828);
}

double NNfunction_ns_chi03_uL::synapse0x31b86e0() {
   return (neuron0x31a8570()*-0.132058);
}

double NNfunction_ns_chi03_uL::synapse0x31b8720() {
   return (neuron0x31a88b0()*-1.27399);
}

double NNfunction_ns_chi03_uL::synapse0x31b8aa0() {
   return (neuron0x31a3c60()*0.00587848);
}

double NNfunction_ns_chi03_uL::synapse0x31b8ae0() {
   return (neuron0x31a3f10()*0.0189181);
}

double NNfunction_ns_chi03_uL::synapse0x31b8b20() {
   return (neuron0x31a4250()*0.446745);
}

double NNfunction_ns_chi03_uL::synapse0x31b8b60() {
   return (neuron0x31a4590()*-0.013445);
}

double NNfunction_ns_chi03_uL::synapse0x31b8ba0() {
   return (neuron0x31a48d0()*-0.00527447);
}

double NNfunction_ns_chi03_uL::synapse0x31b8be0() {
   return (neuron0x31a4c10()*-0.0153408);
}

double NNfunction_ns_chi03_uL::synapse0x31b8c20() {
   return (neuron0x31a4f50()*0.00814339);
}

double NNfunction_ns_chi03_uL::synapse0x31b8c60() {
   return (neuron0x31a5290()*0.0177185);
}

double NNfunction_ns_chi03_uL::synapse0x31b8ca0() {
   return (neuron0x31a55d0()*0.0127195);
}

double NNfunction_ns_chi03_uL::synapse0x31b8ce0() {
   return (neuron0x31a5910()*-0.00898422);
}

double NNfunction_ns_chi03_uL::synapse0x31b8d20() {
   return (neuron0x31a5c50()*-0.00362315);
}

double NNfunction_ns_chi03_uL::synapse0x31b8d60() {
   return (neuron0x31a5f90()*-0.51811);
}

double NNfunction_ns_chi03_uL::synapse0x31b8da0() {
   return (neuron0x31a62d0()*-0.0154378);
}

double NNfunction_ns_chi03_uL::synapse0x31b8de0() {
   return (neuron0x31a6610()*0.000861084);
}

double NNfunction_ns_chi03_uL::synapse0x31b8e20() {
   return (neuron0x31a6950()*-0.00226593);
}

double NNfunction_ns_chi03_uL::synapse0x31b8e60() {
   return (neuron0x31a6c90()*0.00479639);
}

double NNfunction_ns_chi03_uL::synapse0x31b88f0() {
   return (neuron0x31a6fd0()*0.00277507);
}

double NNfunction_ns_chi03_uL::synapse0x31b8930() {
   return (neuron0x31a7530()*-0.00274559);
}

double NNfunction_ns_chi03_uL::synapse0x31b8fb0() {
   return (neuron0x31a7870()*0.0212691);
}

double NNfunction_ns_chi03_uL::synapse0x31b8ff0() {
   return (neuron0x31a7bb0()*0.0101328);
}

double NNfunction_ns_chi03_uL::synapse0x31b9030() {
   return (neuron0x31a7ef0()*0.0175408);
}

double NNfunction_ns_chi03_uL::synapse0x31b9070() {
   return (neuron0x31a8230()*0.0115411);
}

double NNfunction_ns_chi03_uL::synapse0x31b90b0() {
   return (neuron0x31a8570()*-0.00145457);
}

double NNfunction_ns_chi03_uL::synapse0x31b90f0() {
   return (neuron0x31a88b0()*0.816833);
}

double NNfunction_ns_chi03_uL::synapse0x31b9470() {
   return (neuron0x31a3c60()*-0.0687173);
}

double NNfunction_ns_chi03_uL::synapse0x31b94b0() {
   return (neuron0x31a3f10()*-1.57945);
}

double NNfunction_ns_chi03_uL::synapse0x31b94f0() {
   return (neuron0x31a4250()*3.06791);
}

double NNfunction_ns_chi03_uL::synapse0x31b9530() {
   return (neuron0x31a4590()*0.106551);
}

double NNfunction_ns_chi03_uL::synapse0x31b9570() {
   return (neuron0x31a48d0()*0.0945666);
}

double NNfunction_ns_chi03_uL::synapse0x31b95b0() {
   return (neuron0x31a4c10()*0.112855);
}

double NNfunction_ns_chi03_uL::synapse0x31b95f0() {
   return (neuron0x31a4f50()*-0.00257594);
}

double NNfunction_ns_chi03_uL::synapse0x31b9630() {
   return (neuron0x31a5290()*0.0690748);
}

double NNfunction_ns_chi03_uL::synapse0x31b9670() {
   return (neuron0x31a55d0()*0.0112885);
}

double NNfunction_ns_chi03_uL::synapse0x31b96b0() {
   return (neuron0x31a5910()*0.0880015);
}

double NNfunction_ns_chi03_uL::synapse0x31b96f0() {
   return (neuron0x31a5c50()*-0.0212598);
}

double NNfunction_ns_chi03_uL::synapse0x31b9730() {
   return (neuron0x31a5f90()*0.691026);
}

double NNfunction_ns_chi03_uL::synapse0x31b9770() {
   return (neuron0x31a62d0()*0.109112);
}

double NNfunction_ns_chi03_uL::synapse0x31b97b0() {
   return (neuron0x31a6610()*-0.0257067);
}

double NNfunction_ns_chi03_uL::synapse0x31b97f0() {
   return (neuron0x31a6950()*-0.113212);
}

double NNfunction_ns_chi03_uL::synapse0x31b9830() {
   return (neuron0x31a6c90()*-0.0710486);
}

double NNfunction_ns_chi03_uL::synapse0x31b92c0() {
   return (neuron0x31a6fd0()*-0.0283015);
}

double NNfunction_ns_chi03_uL::synapse0x31b9300() {
   return (neuron0x31a7530()*0.0211502);
}

double NNfunction_ns_chi03_uL::synapse0x31b9980() {
   return (neuron0x31a7870()*0.0290239);
}

double NNfunction_ns_chi03_uL::synapse0x31b99c0() {
   return (neuron0x31a7bb0()*-0.130879);
}

double NNfunction_ns_chi03_uL::synapse0x31b9a00() {
   return (neuron0x31a7ef0()*0.0886688);
}

double NNfunction_ns_chi03_uL::synapse0x31b9a40() {
   return (neuron0x31a8230()*-0.0939948);
}

double NNfunction_ns_chi03_uL::synapse0x31b9a80() {
   return (neuron0x31a8570()*0.00849114);
}

double NNfunction_ns_chi03_uL::synapse0x31b9ac0() {
   return (neuron0x31a88b0()*-0.718125);
}

double NNfunction_ns_chi03_uL::synapse0x31b9e40() {
   return (neuron0x31a3c60()*0.423305);
}

double NNfunction_ns_chi03_uL::synapse0x31b9e80() {
   return (neuron0x31a3f10()*-0.369667);
}

double NNfunction_ns_chi03_uL::synapse0x31b9ec0() {
   return (neuron0x31a4250()*0.486586);
}

double NNfunction_ns_chi03_uL::synapse0x31b9f00() {
   return (neuron0x31a4590()*0.309605);
}

double NNfunction_ns_chi03_uL::synapse0x31b9f40() {
   return (neuron0x31a48d0()*0.0804347);
}

double NNfunction_ns_chi03_uL::synapse0x31b9f80() {
   return (neuron0x31a4c10()*0.108773);
}

double NNfunction_ns_chi03_uL::synapse0x31b9fc0() {
   return (neuron0x31a4f50()*0.0407901);
}

double NNfunction_ns_chi03_uL::synapse0x31ba000() {
   return (neuron0x31a5290()*0.195642);
}

double NNfunction_ns_chi03_uL::synapse0x31ba040() {
   return (neuron0x31a55d0()*-0.137932);
}

double NNfunction_ns_chi03_uL::synapse0x31ba080() {
   return (neuron0x31a5910()*0.102886);
}

double NNfunction_ns_chi03_uL::synapse0x31ba0c0() {
   return (neuron0x31a5c50()*-0.0115875);
}

double NNfunction_ns_chi03_uL::synapse0x31ba100() {
   return (neuron0x31a5f90()*0.339267);
}

double NNfunction_ns_chi03_uL::synapse0x31ba140() {
   return (neuron0x31a62d0()*-0.0542384);
}

double NNfunction_ns_chi03_uL::synapse0x31ba180() {
   return (neuron0x31a6610()*-0.175784);
}

double NNfunction_ns_chi03_uL::synapse0x31ba1c0() {
   return (neuron0x31a6950()*-0.0695423);
}

double NNfunction_ns_chi03_uL::synapse0x31ba200() {
   return (neuron0x31a6c90()*0.1841);
}

double NNfunction_ns_chi03_uL::synapse0x31b9c90() {
   return (neuron0x31a6fd0()*0.0687413);
}

double NNfunction_ns_chi03_uL::synapse0x31b9cd0() {
   return (neuron0x31a7530()*0.152896);
}

double NNfunction_ns_chi03_uL::synapse0x31ba350() {
   return (neuron0x31a7870()*0.507898);
}

double NNfunction_ns_chi03_uL::synapse0x31ba390() {
   return (neuron0x31a7bb0()*-0.219665);
}

double NNfunction_ns_chi03_uL::synapse0x31ba3d0() {
   return (neuron0x31a7ef0()*-0.193104);
}

double NNfunction_ns_chi03_uL::synapse0x31ba410() {
   return (neuron0x31a8230()*-0.137155);
}

double NNfunction_ns_chi03_uL::synapse0x31ba450() {
   return (neuron0x31a8570()*0.0931407);
}

double NNfunction_ns_chi03_uL::synapse0x31ba490() {
   return (neuron0x31a88b0()*-1.43346);
}

double NNfunction_ns_chi03_uL::synapse0x31cc360() {
   return (neuron0x31a3c60()*-0.0227165);
}

double NNfunction_ns_chi03_uL::synapse0x31cc3a0() {
   return (neuron0x31a3f10()*15.1009);
}

double NNfunction_ns_chi03_uL::synapse0x31cc3e0() {
   return (neuron0x31a4250()*-7.18761);
}

double NNfunction_ns_chi03_uL::synapse0x31cc420() {
   return (neuron0x31a4590()*-0.0195247);
}

double NNfunction_ns_chi03_uL::synapse0x31cc460() {
   return (neuron0x31a48d0()*-0.022032);
}

double NNfunction_ns_chi03_uL::synapse0x31cc4a0() {
   return (neuron0x31a4c10()*-0.0233409);
}

double NNfunction_ns_chi03_uL::synapse0x31cc4e0() {
   return (neuron0x31a4f50()*-0.025875);
}

double NNfunction_ns_chi03_uL::synapse0x31cc520() {
   return (neuron0x31a5290()*-0.0045681);
}

double NNfunction_ns_chi03_uL::synapse0x31cc560() {
   return (neuron0x31a55d0()*0.0213817);
}

double NNfunction_ns_chi03_uL::synapse0x31cc5a0() {
   return (neuron0x31a5910()*0.00107856);
}

double NNfunction_ns_chi03_uL::synapse0x31cc5e0() {
   return (neuron0x31a5c50()*0.0155508);
}

double NNfunction_ns_chi03_uL::synapse0x31cc620() {
   return (neuron0x31a5f90()*0.215716);
}

double NNfunction_ns_chi03_uL::synapse0x31cc660() {
   return (neuron0x31a62d0()*-0.0684051);
}

double NNfunction_ns_chi03_uL::synapse0x31cc6a0() {
   return (neuron0x31a6610()*0.00392522);
}

double NNfunction_ns_chi03_uL::synapse0x31cc6e0() {
   return (neuron0x31a6950()*0.053394);
}

double NNfunction_ns_chi03_uL::synapse0x31cc720() {
   return (neuron0x31a6c90()*0.0361252);
}

double NNfunction_ns_chi03_uL::synapse0x31ba4d0() {
   return (neuron0x31a6fd0()*-0.0114736);
}

double NNfunction_ns_chi03_uL::synapse0x31ba510() {
   return (neuron0x31a7530()*0.0135356);
}

double NNfunction_ns_chi03_uL::synapse0x31cc870() {
   return (neuron0x31a7870()*-0.02557);
}

double NNfunction_ns_chi03_uL::synapse0x31cc8b0() {
   return (neuron0x31a7bb0()*0.0246437);
}

double NNfunction_ns_chi03_uL::synapse0x31cc8f0() {
   return (neuron0x31a7ef0()*0.0216828);
}

double NNfunction_ns_chi03_uL::synapse0x31cc930() {
   return (neuron0x31a8230()*0.0233505);
}

double NNfunction_ns_chi03_uL::synapse0x31cc970() {
   return (neuron0x31a8570()*0.0199206);
}

double NNfunction_ns_chi03_uL::synapse0x31cc9b0() {
   return (neuron0x31a88b0()*0.0329432);
}

double NNfunction_ns_chi03_uL::synapse0x31ccd30() {
   return (neuron0x31a3c60()*-0.0713986);
}

double NNfunction_ns_chi03_uL::synapse0x31ccd70() {
   return (neuron0x31a3f10()*-10.6549);
}

double NNfunction_ns_chi03_uL::synapse0x31ccdb0() {
   return (neuron0x31a4250()*0.349139);
}

double NNfunction_ns_chi03_uL::synapse0x31ccdf0() {
   return (neuron0x31a4590()*-0.0461323);
}

double NNfunction_ns_chi03_uL::synapse0x31cce30() {
   return (neuron0x31a48d0()*-0.0293487);
}

double NNfunction_ns_chi03_uL::synapse0x31cce70() {
   return (neuron0x31a4c10()*-0.035233);
}

double NNfunction_ns_chi03_uL::synapse0x31cceb0() {
   return (neuron0x31a4f50()*0.00543884);
}

double NNfunction_ns_chi03_uL::synapse0x31ccef0() {
   return (neuron0x31a5290()*-0.0247343);
}

double NNfunction_ns_chi03_uL::synapse0x31ccf30() {
   return (neuron0x31a55d0()*-0.0202032);
}

double NNfunction_ns_chi03_uL::synapse0x31ccf70() {
   return (neuron0x31a5910()*-0.0195784);
}

double NNfunction_ns_chi03_uL::synapse0x31ccfb0() {
   return (neuron0x31a5c50()*0.0236474);
}

double NNfunction_ns_chi03_uL::synapse0x31ccff0() {
   return (neuron0x31a5f90()*-0.118303);
}

double NNfunction_ns_chi03_uL::synapse0x31cd030() {
   return (neuron0x31a62d0()*-0.0399882);
}

double NNfunction_ns_chi03_uL::synapse0x31cd070() {
   return (neuron0x31a6610()*0.0168893);
}

double NNfunction_ns_chi03_uL::synapse0x31cd0b0() {
   return (neuron0x31a6950()*0.0126488);
}

double NNfunction_ns_chi03_uL::synapse0x31cd0f0() {
   return (neuron0x31a6c90()*-0.0011344);
}

double NNfunction_ns_chi03_uL::synapse0x31ccb80() {
   return (neuron0x31a6fd0()*-0.00769814);
}

double NNfunction_ns_chi03_uL::synapse0x31ccbc0() {
   return (neuron0x31a7530()*0.00522705);
}

double NNfunction_ns_chi03_uL::synapse0x31cd240() {
   return (neuron0x31a7870()*-0.0412627);
}

double NNfunction_ns_chi03_uL::synapse0x31cd280() {
   return (neuron0x31a7bb0()*0.013432);
}

double NNfunction_ns_chi03_uL::synapse0x31cd2c0() {
   return (neuron0x31a7ef0()*-0.0702443);
}

double NNfunction_ns_chi03_uL::synapse0x31cd300() {
   return (neuron0x31a8230()*0.0270933);
}

double NNfunction_ns_chi03_uL::synapse0x31cd340() {
   return (neuron0x31a8570()*-0.0305737);
}

double NNfunction_ns_chi03_uL::synapse0x31cd380() {
   return (neuron0x31a88b0()*-2.17272);
}

double NNfunction_ns_chi03_uL::synapse0x31cd700() {
   return (neuron0x31a3c60()*0.0709852);
}

double NNfunction_ns_chi03_uL::synapse0x31cd740() {
   return (neuron0x31a3f10()*-0.45333);
}

double NNfunction_ns_chi03_uL::synapse0x31cd780() {
   return (neuron0x31a4250()*0.740943);
}

double NNfunction_ns_chi03_uL::synapse0x31cd7c0() {
   return (neuron0x31a4590()*0.329018);
}

double NNfunction_ns_chi03_uL::synapse0x31cd800() {
   return (neuron0x31a48d0()*0.264136);
}

double NNfunction_ns_chi03_uL::synapse0x31cd840() {
   return (neuron0x31a4c10()*-0.298537);
}

double NNfunction_ns_chi03_uL::synapse0x31cd880() {
   return (neuron0x31a4f50()*-0.200139);
}

double NNfunction_ns_chi03_uL::synapse0x31cd8c0() {
   return (neuron0x31a5290()*0.0877056);
}

double NNfunction_ns_chi03_uL::synapse0x31cd900() {
   return (neuron0x31a55d0()*0.0337474);
}

double NNfunction_ns_chi03_uL::synapse0x31cd940() {
   return (neuron0x31a5910()*0.445716);
}

double NNfunction_ns_chi03_uL::synapse0x31cd980() {
   return (neuron0x31a5c50()*-0.31377);
}

double NNfunction_ns_chi03_uL::synapse0x31cd9c0() {
   return (neuron0x31a5f90()*0.735824);
}

double NNfunction_ns_chi03_uL::synapse0x31cda00() {
   return (neuron0x31a62d0()*0.193094);
}

double NNfunction_ns_chi03_uL::synapse0x31cda40() {
   return (neuron0x31a6610()*-0.170321);
}

double NNfunction_ns_chi03_uL::synapse0x31cda80() {
   return (neuron0x31a6950()*0.315926);
}

double NNfunction_ns_chi03_uL::synapse0x31cdac0() {
   return (neuron0x31a6c90()*-0.103391);
}

double NNfunction_ns_chi03_uL::synapse0x31cd550() {
   return (neuron0x31a6fd0()*-0.615692);
}

double NNfunction_ns_chi03_uL::synapse0x31cd590() {
   return (neuron0x31a7530()*0.213401);
}

double NNfunction_ns_chi03_uL::synapse0x31cdc10() {
   return (neuron0x31a7870()*0.492886);
}

double NNfunction_ns_chi03_uL::synapse0x31cdc50() {
   return (neuron0x31a7bb0()*0.373442);
}

double NNfunction_ns_chi03_uL::synapse0x31cdc90() {
   return (neuron0x31a7ef0()*-0.281858);
}

double NNfunction_ns_chi03_uL::synapse0x31cdcd0() {
   return (neuron0x31a8230()*-0.0283771);
}

double NNfunction_ns_chi03_uL::synapse0x31cdd10() {
   return (neuron0x31a8570()*0.201263);
}

double NNfunction_ns_chi03_uL::synapse0x31cdd50() {
   return (neuron0x31a88b0()*0.430051);
}

double NNfunction_ns_chi03_uL::synapse0x31ce0d0() {
   return (neuron0x31a3c60()*0.123496);
}

double NNfunction_ns_chi03_uL::synapse0x31ce110() {
   return (neuron0x31a3f10()*-6.60268);
}

double NNfunction_ns_chi03_uL::synapse0x31ce150() {
   return (neuron0x31a4250()*-0.793369);
}

double NNfunction_ns_chi03_uL::synapse0x31ce190() {
   return (neuron0x31a4590()*0.0138356);
}

double NNfunction_ns_chi03_uL::synapse0x31ce1d0() {
   return (neuron0x31a48d0()*-0.0419972);
}

double NNfunction_ns_chi03_uL::synapse0x31ce210() {
   return (neuron0x31a4c10()*-0.0244424);
}

double NNfunction_ns_chi03_uL::synapse0x31ce250() {
   return (neuron0x31a4f50()*-0.0465598);
}

double NNfunction_ns_chi03_uL::synapse0x31ce290() {
   return (neuron0x31a5290()*-0.0148657);
}

double NNfunction_ns_chi03_uL::synapse0x31ce2d0() {
   return (neuron0x31a55d0()*-0.0122862);
}

double NNfunction_ns_chi03_uL::synapse0x31ce310() {
   return (neuron0x31a5910()*0.0113927);
}

double NNfunction_ns_chi03_uL::synapse0x31ce350() {
   return (neuron0x31a5c50()*0.0309574);
}

double NNfunction_ns_chi03_uL::synapse0x31ce390() {
   return (neuron0x31a5f90()*-0.30124);
}

double NNfunction_ns_chi03_uL::synapse0x31ce3d0() {
   return (neuron0x31a62d0()*0.0169264);
}

double NNfunction_ns_chi03_uL::synapse0x31ce410() {
   return (neuron0x31a6610()*0.0250687);
}

double NNfunction_ns_chi03_uL::synapse0x31ce450() {
   return (neuron0x31a6950()*-0.0185621);
}

double NNfunction_ns_chi03_uL::synapse0x31ce490() {
   return (neuron0x31a6c90()*-0.0744847);
}

double NNfunction_ns_chi03_uL::synapse0x31cdf20() {
   return (neuron0x31a6fd0()*0.0320805);
}

double NNfunction_ns_chi03_uL::synapse0x31cdf60() {
   return (neuron0x31a7530()*-0.02463);
}

double NNfunction_ns_chi03_uL::synapse0x31ce5e0() {
   return (neuron0x31a7870()*-0.0328326);
}

double NNfunction_ns_chi03_uL::synapse0x31ce620() {
   return (neuron0x31a7bb0()*-0.00489697);
}

double NNfunction_ns_chi03_uL::synapse0x31ce660() {
   return (neuron0x31a7ef0()*-0.0101046);
}

double NNfunction_ns_chi03_uL::synapse0x31ce6a0() {
   return (neuron0x31a8230()*-0.0160536);
}

double NNfunction_ns_chi03_uL::synapse0x31ce6e0() {
   return (neuron0x31a8570()*-0.0283853);
}

double NNfunction_ns_chi03_uL::synapse0x31ce720() {
   return (neuron0x31a88b0()*0.377313);
}

double NNfunction_ns_chi03_uL::synapse0x2f6e590() {
   return (neuron0x31a8d20()*0.0633484);
}

double NNfunction_ns_chi03_uL::synapse0x2f6e5d0() {
   return (neuron0x31a9560()*-0.105067);
}

double NNfunction_ns_chi03_uL::synapse0x31ab0d0() {
   return (neuron0x31aa040()*0.583221);
}

double NNfunction_ns_chi03_uL::synapse0x31ab110() {
   return (neuron0x31a9ae0()*-2.04233);
}

double NNfunction_ns_chi03_uL::synapse0x31acba0() {
   return (neuron0x31aae20()*-0.1052);
}

double NNfunction_ns_chi03_uL::synapse0x31acbe0() {
   return (neuron0x31ac8f0()*-0.430552);
}

double NNfunction_ns_chi03_uL::synapse0x31ad970() {
   return (neuron0x31ad6c0()*-0.326119);
}

double NNfunction_ns_chi03_uL::synapse0x31ad9b0() {
   return (neuron0x31ae090()*0.28568);
}

double NNfunction_ns_chi03_uL::synapse0x31ae340() {
   return (neuron0x31aea60()*1.21596);
}

double NNfunction_ns_chi03_uL::synapse0x31ae380() {
   return (neuron0x31af540()*0.398057);
}

double NNfunction_ns_chi03_uL::synapse0x31aed10() {
   return (neuron0x31aff10()*2.65052);
}

double NNfunction_ns_chi03_uL::synapse0x31aed50() {
   return (neuron0x31acff0()*0.566289);
}

double NNfunction_ns_chi03_uL::synapse0x31af7f0() {
   return (neuron0x31b1ac0()*-0.0563296);
}

double NNfunction_ns_chi03_uL::synapse0x31af830() {
   return (neuron0x31b2490()*0.293261);
}

double NNfunction_ns_chi03_uL::synapse0x31b01c0() {
   return (neuron0x31b2e60()*0.705204);
}

double NNfunction_ns_chi03_uL::synapse0x31b0200() {
   return (neuron0x31b3830()*0.773085);
}

double NNfunction_ns_chi03_uL::synapse0x31ad2a0() {
   return (neuron0x31b5640()*-1.35072);
}

double NNfunction_ns_chi03_uL::synapse0x31ad2e0() {
   return (neuron0x31b5920()*0.105503);
}

double NNfunction_ns_chi03_uL::synapse0x31b1d70() {
   return (neuron0x31b62f0()*-0.118971);
}

double NNfunction_ns_chi03_uL::synapse0x31b1db0() {
   return (neuron0x31b6cc0()*0.500836);
}

double NNfunction_ns_chi03_uL::synapse0x31b2740() {
   return (neuron0x31b7690()*0.959571);
}

double NNfunction_ns_chi03_uL::synapse0x31b2780() {
   return (neuron0x31b8060()*1.77005);
}

double NNfunction_ns_chi03_uL::synapse0x31b3110() {
   return (neuron0x31b0bb0()*-0.38142);
}

double NNfunction_ns_chi03_uL::synapse0x31b3150() {
   return (neuron0x31b1580()*0.780107);
}

double NNfunction_ns_chi03_uL::synapse0x31b3ae0() {
   return (neuron0x31badf0()*0.038322);
}

double NNfunction_ns_chi03_uL::synapse0x31b3b20() {
   return (neuron0x31bb7c0()*2.325);
}

double NNfunction_ns_chi03_uL::synapse0x31a6b70() {
   return (neuron0x31bc190()*-2.09707);
}

double NNfunction_ns_chi03_uL::synapse0x31a6bb0() {
   return (neuron0x31bcb60()*-2.71449);
}

double NNfunction_ns_chi03_uL::synapse0x31b5bd0() {
   return (neuron0x31bd530()*-0.136241);
}

double NNfunction_ns_chi03_uL::synapse0x31b5c10() {
   return (neuron0x31bdf00()*-0.21203);
}

double NNfunction_ns_chi03_uL::synapse0x31b65a0() {
   return (neuron0x31be8d0()*0.194773);
}

double NNfunction_ns_chi03_uL::synapse0x31b65e0() {
   return (neuron0x31bf2a0()*0.0310506);
}

double NNfunction_ns_chi03_uL::synapse0x31b6f70() {
   return (neuron0x31b5330()*-0.331671);
}

double NNfunction_ns_chi03_uL::synapse0x31b6fb0() {
   return (neuron0x31c1e80()*0.114774);
}

double NNfunction_ns_chi03_uL::synapse0x31b7940() {
   return (neuron0x31c2850()*-0.349949);
}

double NNfunction_ns_chi03_uL::synapse0x31b7980() {
   return (neuron0x31c3220()*0.189788);
}

double NNfunction_ns_chi03_uL::synapse0x31b8310() {
   return (neuron0x31c3bf0()*-0.085973);
}

double NNfunction_ns_chi03_uL::synapse0x31b8350() {
   return (neuron0x31c45c0()*0.134339);
}

double NNfunction_ns_chi03_uL::synapse0x31b0e60() {
   return (neuron0x31c4f90()*-0.105011);
}

double NNfunction_ns_chi03_uL::synapse0x31b0ea0() {
   return (neuron0x31c5960()*-0.0139286);
}

double NNfunction_ns_chi03_uL::synapse0x31ba710() {
   return (neuron0x31c6330()*-0.297093);
}

double NNfunction_ns_chi03_uL::synapse0x31ba750() {
   return (neuron0x31c6f10()*-0.225612);
}

double NNfunction_ns_chi03_uL::synapse0x31bb0a0() {
   return (neuron0x31c78e0()*0.377618);
}

double NNfunction_ns_chi03_uL::synapse0x31bb0e0() {
   return (neuron0x31b8760()*0.227052);
}

double NNfunction_ns_chi03_uL::synapse0x31bba70() {
   return (neuron0x31b9130()*0.3855);
}

double NNfunction_ns_chi03_uL::synapse0x31bbab0() {
   return (neuron0x31b9b00()*0.335195);
}

double NNfunction_ns_chi03_uL::synapse0x31bc440() {
   return (neuron0x31cc140()*-0.744819);
}

double NNfunction_ns_chi03_uL::synapse0x31bc480() {
   return (neuron0x31cc9f0()*-1.70129);
}

double NNfunction_ns_chi03_uL::synapse0x31bce10() {
   return (neuron0x31cd3c0()*-0.329756);
}

double NNfunction_ns_chi03_uL::synapse0x31bce50() {
   return (neuron0x31cdd90()*-1.25032);
}

double NNfunction_ns_chi03_uL::synapse0x31bf550() {
   return (neuron0x31a8d20()*-0.63149);
}

double NNfunction_ns_chi03_uL::synapse0x31bf590() {
   return (neuron0x31a9560()*0.305511);
}

double NNfunction_ns_chi03_uL::synapse0x31b4b10() {
   return (neuron0x31aa040()*-1.64721);
}

double NNfunction_ns_chi03_uL::synapse0x31b4b50() {
   return (neuron0x31a9ae0()*-0.90948);
}

double NNfunction_ns_chi03_uL::synapse0x31c2130() {
   return (neuron0x31aae20()*0.144727);
}

double NNfunction_ns_chi03_uL::synapse0x31c2170() {
   return (neuron0x31ac8f0()*-0.322197);
}

double NNfunction_ns_chi03_uL::synapse0x31c2b00() {
   return (neuron0x31ad6c0()*-0.323143);
}

double NNfunction_ns_chi03_uL::synapse0x31c2b40() {
   return (neuron0x31ae090()*0.24555);
}

double NNfunction_ns_chi03_uL::synapse0x31c34d0() {
   return (neuron0x31aea60()*0.9165);
}

double NNfunction_ns_chi03_uL::synapse0x31c3510() {
   return (neuron0x31af540()*0.138879);
}

double NNfunction_ns_chi03_uL::synapse0x31c3ea0() {
   return (neuron0x31aff10()*1.69161);
}

double NNfunction_ns_chi03_uL::synapse0x31c3ee0() {
   return (neuron0x31acff0()*0.335654);
}

double NNfunction_ns_chi03_uL::synapse0x31c4870() {
   return (neuron0x31b1ac0()*3.34744);
}

double NNfunction_ns_chi03_uL::synapse0x31c48b0() {
   return (neuron0x31b2490()*-0.260682);
}

double NNfunction_ns_chi03_uL::synapse0x31c5240() {
   return (neuron0x31b2e60()*-0.500346);
}

double NNfunction_ns_chi03_uL::synapse0x31c5280() {
   return (neuron0x31b3830()*-0.207261);
}

double NNfunction_ns_chi03_uL::synapse0x31c5c10() {
   return (neuron0x31b5640()*0.223716);
}

double NNfunction_ns_chi03_uL::synapse0x31c5c50() {
   return (neuron0x31b5920()*-0.0683117);
}

double NNfunction_ns_chi03_uL::synapse0x31c65e0() {
   return (neuron0x31b62f0()*0.0915031);
}

double NNfunction_ns_chi03_uL::synapse0x31c6620() {
   return (neuron0x31b6cc0()*-0.32312);
}

double NNfunction_ns_chi03_uL::synapse0x31c71c0() {
   return (neuron0x31b7690()*0.138577);
}

double NNfunction_ns_chi03_uL::synapse0x31c7200() {
   return (neuron0x31b8060()*-3.95551);
}

double NNfunction_ns_chi03_uL::synapse0x31c7b90() {
   return (neuron0x31b0bb0()*1.33776);
}

double NNfunction_ns_chi03_uL::synapse0x31c7bd0() {
   return (neuron0x31b1580()*-0.179998);
}

double NNfunction_ns_chi03_uL::synapse0x31b8a10() {
   return (neuron0x31badf0()*-1.28576);
}

double NNfunction_ns_chi03_uL::synapse0x31b8a50() {
   return (neuron0x31bb7c0()*0.219745);
}

double NNfunction_ns_chi03_uL::synapse0x31b93e0() {
   return (neuron0x31bc190()*1.29553);
}

double NNfunction_ns_chi03_uL::synapse0x31b9420() {
   return (neuron0x31bcb60()*2.53164);
}

double NNfunction_ns_chi03_uL::synapse0x31b9db0() {
   return (neuron0x31bd530()*-0.130882);
}

double NNfunction_ns_chi03_uL::synapse0x31b9df0() {
   return (neuron0x31bdf00()*-0.123086);
}

double NNfunction_ns_chi03_uL::synapse0x31cc2d0() {
   return (neuron0x31be8d0()*-0.250588);
}

double NNfunction_ns_chi03_uL::synapse0x31cc310() {
   return (neuron0x31bf2a0()*-0.289656);
}

double NNfunction_ns_chi03_uL::synapse0x31ccca0() {
   return (neuron0x31b5330()*0.20507);
}

double NNfunction_ns_chi03_uL::synapse0x31ccce0() {
   return (neuron0x31c1e80()*-0.0704894);
}

double NNfunction_ns_chi03_uL::synapse0x31cd670() {
   return (neuron0x31c2850()*0.892911);
}

double NNfunction_ns_chi03_uL::synapse0x31cd6b0() {
   return (neuron0x31c3220()*0.834636);
}

double NNfunction_ns_chi03_uL::synapse0x31ce040() {
   return (neuron0x31c3bf0()*-0.0943386);
}

double NNfunction_ns_chi03_uL::synapse0x31ce080() {
   return (neuron0x31c45c0()*-0.205449);
}

double NNfunction_ns_chi03_uL::synapse0x31a8fd0() {
   return (neuron0x31c4f90()*0.221168);
}

double NNfunction_ns_chi03_uL::synapse0x31a9010() {
   return (neuron0x31c5960()*2.55763);
}

double NNfunction_ns_chi03_uL::synapse0x31bd7e0() {
   return (neuron0x31c6330()*-1.13375);
}

double NNfunction_ns_chi03_uL::synapse0x31bd820() {
   return (neuron0x31c6f10()*-0.185947);
}

double NNfunction_ns_chi03_uL::synapse0x31ce760() {
   return (neuron0x31c78e0()*0.376626);
}

double NNfunction_ns_chi03_uL::synapse0x31ce7a0() {
   return (neuron0x31b8760()*0.821581);
}

double NNfunction_ns_chi03_uL::synapse0x31ce7e0() {
   return (neuron0x31b9130()*1.4299);
}

double NNfunction_ns_chi03_uL::synapse0x31ce820() {
   return (neuron0x31b9b00()*0.536864);
}

double NNfunction_ns_chi03_uL::synapse0x31d56d0() {
   return (neuron0x31cc140()*2.36363);
}

double NNfunction_ns_chi03_uL::synapse0x31d5710() {
   return (neuron0x31cc9f0()*-0.228318);
}

double NNfunction_ns_chi03_uL::synapse0x31d5750() {
   return (neuron0x31cd3c0()*-0.31803);
}

double NNfunction_ns_chi03_uL::synapse0x31d5790() {
   return (neuron0x31cdd90()*0.883581);
}

double NNfunction_ns_chi03_uL::synapse0x31d5b10() {
   return (neuron0x31a8d20()*0.117506);
}

double NNfunction_ns_chi03_uL::synapse0x31d5b50() {
   return (neuron0x31a9560()*-0.181948);
}

double NNfunction_ns_chi03_uL::synapse0x31d5b90() {
   return (neuron0x31aa040()*-0.0697887);
}

double NNfunction_ns_chi03_uL::synapse0x31d5bd0() {
   return (neuron0x31a9ae0()*-2.28022);
}

double NNfunction_ns_chi03_uL::synapse0x31d5c10() {
   return (neuron0x31aae20()*-0.203486);
}

double NNfunction_ns_chi03_uL::synapse0x31d5c50() {
   return (neuron0x31ac8f0()*-0.66764);
}

double NNfunction_ns_chi03_uL::synapse0x31d5c90() {
   return (neuron0x31ad6c0()*-0.533108);
}

double NNfunction_ns_chi03_uL::synapse0x31d5cd0() {
   return (neuron0x31ae090()*0.465086);
}

double NNfunction_ns_chi03_uL::synapse0x31d5d10() {
   return (neuron0x31aea60()*0.550795);
}

double NNfunction_ns_chi03_uL::synapse0x31d5d50() {
   return (neuron0x31af540()*0.624765);
}

double NNfunction_ns_chi03_uL::synapse0x31d5d90() {
   return (neuron0x31aff10()*1.76618);
}

double NNfunction_ns_chi03_uL::synapse0x31d5dd0() {
   return (neuron0x31acff0()*0.902933);
}

double NNfunction_ns_chi03_uL::synapse0x31d5e10() {
   return (neuron0x31b1ac0()*-0.146443);
}

double NNfunction_ns_chi03_uL::synapse0x31d5e50() {
   return (neuron0x31b2490()*-0.106535);
}

double NNfunction_ns_chi03_uL::synapse0x31d5e90() {
   return (neuron0x31b2e60()*1.27042);
}

double NNfunction_ns_chi03_uL::synapse0x31d5ed0() {
   return (neuron0x31b3830()*-0.0800623);
}

double NNfunction_ns_chi03_uL::synapse0x31d5960() {
   return (neuron0x31b5640()*-1.28965);
}

double NNfunction_ns_chi03_uL::synapse0x31d59a0() {
   return (neuron0x31b5920()*0.191902);
}

double NNfunction_ns_chi03_uL::synapse0x31d6020() {
   return (neuron0x31b62f0()*-0.217297);
}

double NNfunction_ns_chi03_uL::synapse0x31d6060() {
   return (neuron0x31b6cc0()*0.163401);
}

double NNfunction_ns_chi03_uL::synapse0x31d60a0() {
   return (neuron0x31b7690()*1.07599);
}

double NNfunction_ns_chi03_uL::synapse0x31d60e0() {
   return (neuron0x31b8060()*2.8427);
}

double NNfunction_ns_chi03_uL::synapse0x31d6120() {
   return (neuron0x31b0bb0()*-0.657134);
}

double NNfunction_ns_chi03_uL::synapse0x31d6160() {
   return (neuron0x31b1580()*-0.0749027);
}

double NNfunction_ns_chi03_uL::synapse0x31d61a0() {
   return (neuron0x31badf0()*0.0298356);
}

double NNfunction_ns_chi03_uL::synapse0x31d61e0() {
   return (neuron0x31bb7c0()*2.33835);
}

double NNfunction_ns_chi03_uL::synapse0x31d6220() {
   return (neuron0x31bc190()*-2.26189);
}

double NNfunction_ns_chi03_uL::synapse0x31d6260() {
   return (neuron0x31bcb60()*-4.27924);
}

double NNfunction_ns_chi03_uL::synapse0x31d62a0() {
   return (neuron0x31bd530()*-0.228258);
}

double NNfunction_ns_chi03_uL::synapse0x31d62e0() {
   return (neuron0x31bdf00()*-0.348162);
}

double NNfunction_ns_chi03_uL::synapse0x31d6320() {
   return (neuron0x31be8d0()*0.337639);
}

double NNfunction_ns_chi03_uL::synapse0x31d6360() {
   return (neuron0x31bf2a0()*1.25363);
}

double NNfunction_ns_chi03_uL::synapse0x31d5f10() {
   return (neuron0x31b5330()*0.0515896);
}

double NNfunction_ns_chi03_uL::synapse0x31d5f50() {
   return (neuron0x31c1e80()*0.174645);
}

double NNfunction_ns_chi03_uL::synapse0x31d5f90() {
   return (neuron0x31c2850()*-0.689046);
}

double NNfunction_ns_chi03_uL::synapse0x31d5fd0() {
   return (neuron0x31c3220()*-0.128895);
}

double NNfunction_ns_chi03_uL::synapse0x31d65b0() {
   return (neuron0x31c3bf0()*-0.152997);
}

double NNfunction_ns_chi03_uL::synapse0x31d65f0() {
   return (neuron0x31c45c0()*0.240333);
}

double NNfunction_ns_chi03_uL::synapse0x31d6630() {
   return (neuron0x31c4f90()*-0.212132);
}

double NNfunction_ns_chi03_uL::synapse0x31d6670() {
   return (neuron0x31c5960()*-0.0179386);
}

double NNfunction_ns_chi03_uL::synapse0x31d66b0() {
   return (neuron0x31c6330()*-1.86909);
}

double NNfunction_ns_chi03_uL::synapse0x31d66f0() {
   return (neuron0x31c6f10()*-0.349935);
}

double NNfunction_ns_chi03_uL::synapse0x31d6730() {
   return (neuron0x31c78e0()*0.577239);
}

double NNfunction_ns_chi03_uL::synapse0x31d6770() {
   return (neuron0x31b8760()*1.6106);
}

double NNfunction_ns_chi03_uL::synapse0x31d67b0() {
   return (neuron0x31b9130()*0.585104);
}

double NNfunction_ns_chi03_uL::synapse0x31d67f0() {
   return (neuron0x31b9b00()*0.542836);
}

double NNfunction_ns_chi03_uL::synapse0x31d6830() {
   return (neuron0x31cc140()*-0.102941);
}

double NNfunction_ns_chi03_uL::synapse0x31d6870() {
   return (neuron0x31cc9f0()*-2.30924);
}

double NNfunction_ns_chi03_uL::synapse0x31d68b0() {
   return (neuron0x31cd3c0()*-0.567027);
}

double NNfunction_ns_chi03_uL::synapse0x31d68f0() {
   return (neuron0x31cdd90()*-1.73333);
}

double NNfunction_ns_chi03_uL::synapse0x31d6c70() {
   return (neuron0x31a8d20()*0.592086);
}

double NNfunction_ns_chi03_uL::synapse0x31d6cb0() {
   return (neuron0x31a9560()*-0.291197);
}

double NNfunction_ns_chi03_uL::synapse0x31d6cf0() {
   return (neuron0x31aa040()*0.779672);
}

double NNfunction_ns_chi03_uL::synapse0x31d6d30() {
   return (neuron0x31a9ae0()*-2.37631);
}

double NNfunction_ns_chi03_uL::synapse0x31d6d70() {
   return (neuron0x31aae20()*-0.378121);
}

double NNfunction_ns_chi03_uL::synapse0x31d6db0() {
   return (neuron0x31ac8f0()*-0.364916);
}

double NNfunction_ns_chi03_uL::synapse0x31d6df0() {
   return (neuron0x31ad6c0()*-0.335252);
}

double NNfunction_ns_chi03_uL::synapse0x31d6e30() {
   return (neuron0x31ae090()*0.231527);
}

double NNfunction_ns_chi03_uL::synapse0x31d6e70() {
   return (neuron0x31aea60()*3.81859);
}

double NNfunction_ns_chi03_uL::synapse0x31d6eb0() {
   return (neuron0x31af540()*0.27954);
}

double NNfunction_ns_chi03_uL::synapse0x31d6ef0() {
   return (neuron0x31aff10()*0.710897);
}

double NNfunction_ns_chi03_uL::synapse0x31d6f30() {
   return (neuron0x31acff0()*2.839);
}

double NNfunction_ns_chi03_uL::synapse0x31d6f70() {
   return (neuron0x31b1ac0()*0.644164);
}

double NNfunction_ns_chi03_uL::synapse0x31d6fb0() {
   return (neuron0x31b2490()*2.67407);
}

double NNfunction_ns_chi03_uL::synapse0x31d6ff0() {
   return (neuron0x31b2e60()*0.140857);
}

double NNfunction_ns_chi03_uL::synapse0x31d7030() {
   return (neuron0x31b3830()*5.26901);
}

double NNfunction_ns_chi03_uL::synapse0x31d6ac0() {
   return (neuron0x31b5640()*-0.898708);
}

double NNfunction_ns_chi03_uL::synapse0x31d6b00() {
   return (neuron0x31b5920()*0.249327);
}

double NNfunction_ns_chi03_uL::synapse0x31d7180() {
   return (neuron0x31b62f0()*-0.117696);
}

double NNfunction_ns_chi03_uL::synapse0x31d71c0() {
   return (neuron0x31b6cc0()*3.62117);
}

double NNfunction_ns_chi03_uL::synapse0x31d7200() {
   return (neuron0x31b7690()*1.03814);
}

double NNfunction_ns_chi03_uL::synapse0x31d7240() {
   return (neuron0x31b8060()*-2.75892);
}

double NNfunction_ns_chi03_uL::synapse0x31d7280() {
   return (neuron0x31b0bb0()*-0.293945);
}

double NNfunction_ns_chi03_uL::synapse0x31d72c0() {
   return (neuron0x31b1580()*5.23003);
}

double NNfunction_ns_chi03_uL::synapse0x31d7300() {
   return (neuron0x31badf0()*-0.465922);
}

double NNfunction_ns_chi03_uL::synapse0x31d7340() {
   return (neuron0x31bb7c0()*1.51996);
}

double NNfunction_ns_chi03_uL::synapse0x31d7380() {
   return (neuron0x31bc190()*-1.61573);
}

double NNfunction_ns_chi03_uL::synapse0x31d73c0() {
   return (neuron0x31bcb60()*1.02779);
}

double NNfunction_ns_chi03_uL::synapse0x31d7400() {
   return (neuron0x31bd530()*-0.0583288);
}

double NNfunction_ns_chi03_uL::synapse0x31d7440() {
   return (neuron0x31bdf00()*-0.251691);
}

double NNfunction_ns_chi03_uL::synapse0x31d7480() {
   return (neuron0x31be8d0()*0.344426);
}

double NNfunction_ns_chi03_uL::synapse0x31d74c0() {
   return (neuron0x31bf2a0()*-3.8488);
}

double NNfunction_ns_chi03_uL::synapse0x31d7070() {
   return (neuron0x31b5330()*-1.11367);
}

double NNfunction_ns_chi03_uL::synapse0x31d70b0() {
   return (neuron0x31c1e80()*0.0834648);
}

double NNfunction_ns_chi03_uL::synapse0x31d70f0() {
   return (neuron0x31c2850()*0.814339);
}

double NNfunction_ns_chi03_uL::synapse0x31d7130() {
   return (neuron0x31c3220()*1.69775);
}

double NNfunction_ns_chi03_uL::synapse0x31d7710() {
   return (neuron0x31c3bf0()*-0.139888);
}

double NNfunction_ns_chi03_uL::synapse0x31d7750() {
   return (neuron0x31c45c0()*0.377162);
}

double NNfunction_ns_chi03_uL::synapse0x31d7790() {
   return (neuron0x31c4f90()*-0.389233);
}

double NNfunction_ns_chi03_uL::synapse0x31d77d0() {
   return (neuron0x31c5960()*0.0196455);
}

double NNfunction_ns_chi03_uL::synapse0x31d7810() {
   return (neuron0x31c6330()*1.74922);
}

double NNfunction_ns_chi03_uL::synapse0x31d7850() {
   return (neuron0x31c6f10()*-0.271694);
}

double NNfunction_ns_chi03_uL::synapse0x31d7890() {
   return (neuron0x31c78e0()*0.139148);
}

double NNfunction_ns_chi03_uL::synapse0x31d78d0() {
   return (neuron0x31b8760()*-2.10022);
}

double NNfunction_ns_chi03_uL::synapse0x31d7910() {
   return (neuron0x31b9130()*0.321226);
}

double NNfunction_ns_chi03_uL::synapse0x31d7950() {
   return (neuron0x31b9b00()*0.112904);
}

double NNfunction_ns_chi03_uL::synapse0x31d7990() {
   return (neuron0x31cc140()*-0.376795);
}

double NNfunction_ns_chi03_uL::synapse0x31d79d0() {
   return (neuron0x31cc9f0()*-1.18032);
}

double NNfunction_ns_chi03_uL::synapse0x31d7a10() {
   return (neuron0x31cd3c0()*-0.473601);
}

double NNfunction_ns_chi03_uL::synapse0x31d7a50() {
   return (neuron0x31cdd90()*-0.387338);
}

double NNfunction_ns_chi03_uL::synapse0x31d7dd0() {
   return (neuron0x31a8d20()*2.45349);
}

double NNfunction_ns_chi03_uL::synapse0x31d7e10() {
   return (neuron0x31a9560()*-0.535152);
}

double NNfunction_ns_chi03_uL::synapse0x31d7e50() {
   return (neuron0x31aa040()*1.49619);
}

double NNfunction_ns_chi03_uL::synapse0x31d7e90() {
   return (neuron0x31a9ae0()*1.9722);
}

double NNfunction_ns_chi03_uL::synapse0x31d7ed0() {
   return (neuron0x31aae20()*-0.403614);
}

double NNfunction_ns_chi03_uL::synapse0x31d7f10() {
   return (neuron0x31ac8f0()*-0.651361);
}

double NNfunction_ns_chi03_uL::synapse0x31d7f50() {
   return (neuron0x31ad6c0()*-0.416767);
}

double NNfunction_ns_chi03_uL::synapse0x31d7f90() {
   return (neuron0x31ae090()*0.484181);
}

double NNfunction_ns_chi03_uL::synapse0x31d7fd0() {
   return (neuron0x31aea60()*-1.15802);
}

double NNfunction_ns_chi03_uL::synapse0x31d8010() {
   return (neuron0x31af540()*0.601701);
}

double NNfunction_ns_chi03_uL::synapse0x31d8050() {
   return (neuron0x31aff10()*-0.454324);
}

double NNfunction_ns_chi03_uL::synapse0x31d8090() {
   return (neuron0x31acff0()*-1.32431);
}

double NNfunction_ns_chi03_uL::synapse0x31d80d0() {
   return (neuron0x31b1ac0()*-1.77516);
}

double NNfunction_ns_chi03_uL::synapse0x31d8110() {
   return (neuron0x31b2490()*-0.465618);
}

double NNfunction_ns_chi03_uL::synapse0x31d8150() {
   return (neuron0x31b2e60()*3.40823);
}

double NNfunction_ns_chi03_uL::synapse0x31d8190() {
   return (neuron0x31b3830()*-0.605637);
}

double NNfunction_ns_chi03_uL::synapse0x31d7c20() {
   return (neuron0x31b5640()*3.77059);
}

double NNfunction_ns_chi03_uL::synapse0x31d7c60() {
   return (neuron0x31b5920()*0.341462);
}

double NNfunction_ns_chi03_uL::synapse0x31d82e0() {
   return (neuron0x31b62f0()*-0.578759);
}

double NNfunction_ns_chi03_uL::synapse0x31d8320() {
   return (neuron0x31b6cc0()*-0.423955);
}

double NNfunction_ns_chi03_uL::synapse0x31d8360() {
   return (neuron0x31b7690()*-0.11024);
}

double NNfunction_ns_chi03_uL::synapse0x31d83a0() {
   return (neuron0x31b8060()*9.8153);
}

double NNfunction_ns_chi03_uL::synapse0x31d83e0() {
   return (neuron0x31b0bb0()*-2.59002);
}

double NNfunction_ns_chi03_uL::synapse0x31d8420() {
   return (neuron0x31b1580()*-0.595369);
}

double NNfunction_ns_chi03_uL::synapse0x31d8460() {
   return (neuron0x31badf0()*-3.52964);
}

double NNfunction_ns_chi03_uL::synapse0x31d84a0() {
   return (neuron0x31bb7c0()*-0.648714);
}

double NNfunction_ns_chi03_uL::synapse0x31d84e0() {
   return (neuron0x31bc190()*-0.575506);
}

double NNfunction_ns_chi03_uL::synapse0x31d8520() {
   return (neuron0x31bcb60()*-9.32367);
}

double NNfunction_ns_chi03_uL::synapse0x31d8560() {
   return (neuron0x31bd530()*-0.296963);
}

double NNfunction_ns_chi03_uL::synapse0x31d85a0() {
   return (neuron0x31bdf00()*-0.252868);
}

double NNfunction_ns_chi03_uL::synapse0x31d85e0() {
   return (neuron0x31be8d0()*0.730645);
}

double NNfunction_ns_chi03_uL::synapse0x31d8620() {
   return (neuron0x31bf2a0()*-1.60625);
}

double NNfunction_ns_chi03_uL::synapse0x31d81d0() {
   return (neuron0x31b5330()*0.284625);
}

double NNfunction_ns_chi03_uL::synapse0x31d8210() {
   return (neuron0x31c1e80()*0.389005);
}

double NNfunction_ns_chi03_uL::synapse0x31d8250() {
   return (neuron0x31c2850()*-3.05562);
}

double NNfunction_ns_chi03_uL::synapse0x31d8290() {
   return (neuron0x31c3220()*-4.18766);
}

double NNfunction_ns_chi03_uL::synapse0x31d8870() {
   return (neuron0x31c3bf0()*-0.168611);
}

double NNfunction_ns_chi03_uL::synapse0x31d88b0() {
   return (neuron0x31c45c0()*0.396673);
}

double NNfunction_ns_chi03_uL::synapse0x31d88f0() {
   return (neuron0x31c4f90()*-0.364037);
}

double NNfunction_ns_chi03_uL::synapse0x31d8930() {
   return (neuron0x31c5960()*-2.51741);
}

double NNfunction_ns_chi03_uL::synapse0x31d8970() {
   return (neuron0x31c6330()*-3.19891);
}

double NNfunction_ns_chi03_uL::synapse0x31d89b0() {
   return (neuron0x31c6f10()*-0.242659);
}

double NNfunction_ns_chi03_uL::synapse0x31d89f0() {
   return (neuron0x31c78e0()*0.461699);
}

double NNfunction_ns_chi03_uL::synapse0x31d8a30() {
   return (neuron0x31b8760()*1.07379);
}

double NNfunction_ns_chi03_uL::synapse0x31d8a70() {
   return (neuron0x31b9130()*-0.376814);
}

double NNfunction_ns_chi03_uL::synapse0x31d8ab0() {
   return (neuron0x31b9b00()*0.630484);
}

double NNfunction_ns_chi03_uL::synapse0x31d8af0() {
   return (neuron0x31cc140()*-0.0148722);
}

double NNfunction_ns_chi03_uL::synapse0x31d8b30() {
   return (neuron0x31cc9f0()*3.01303);
}

double NNfunction_ns_chi03_uL::synapse0x31d8b70() {
   return (neuron0x31cd3c0()*-0.548821);
}

double NNfunction_ns_chi03_uL::synapse0x31d8bb0() {
   return (neuron0x31cdd90()*-2.21499);
}

double NNfunction_ns_chi03_uL::synapse0x31d8e10() {
   return (neuron0x31d4f90()*-11.5463);
}

double NNfunction_ns_chi03_uL::synapse0x31d8e50() {
   return (neuron0x31d5330()*-3.28585);
}

double NNfunction_ns_chi03_uL::synapse0x31d8e90() {
   return (neuron0x31d57d0()*8.7968);
}

double NNfunction_ns_chi03_uL::synapse0x31d8ed0() {
   return (neuron0x31d6930()*-6.06064);
}

double NNfunction_ns_chi03_uL::synapse0x31d8f10() {
   return (neuron0x31d7a90()*-3.37715);
}

