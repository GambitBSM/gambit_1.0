#include "NNfunction-ss_uRdR.h"
#include <cmath>

double NNfunction-ss_uRdR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.9672)/15.0481;
   input1 = (in1 - 92.0498)/636.405;
   input2 = (in2 - 366.499)/404.584;
   input3 = (in3 - 486.873)/655.093;
   input4 = (in4 - 841.83)/621.529;
   input5 = (in5 - 754.76)/608.164;
   input6 = (in6 - 758.176)/608.809;
   input7 = (in7 - 740.578)/598.225;
   input8 = (in8 - 732.87)/623.115;
   input9 = (in9 - 726.221)/612.655;
   input10 = (in10 - 702.665)/618.275;
   input11 = (in11 - 892.103)/580.337;
   input12 = (in12 - 894.076)/583.301;
   input13 = (in13 - 715.569)/418.315;
   input14 = (in14 - 808.04)/469.691;
   input15 = (in15 - 884.494)/560.379;
   input16 = (in16 - 608.668)/392.547;
   input17 = (in17 - 800.362)/470.654;
   input18 = (in18 - 887.143)/587.344;
   input19 = (in19 - 866.36)/563.251;
   input20 = (in20 - -366.588)/493.396;
   input21 = (in21 - -483.208)/978.961;
   input22 = (in22 - -26.3061)/932.894;
   input23 = (in23 - 81.7389)/567.662;
   switch(index) {
     case 0:
         return neuron0x2d325e0();
     default:
         return 0.;
   }
}

double NNfunction-ss_uRdR::Value(int index, double* input) {
   input0 = (input[0] - 22.9672)/15.0481;
   input1 = (input[1] - 92.0498)/636.405;
   input2 = (input[2] - 366.499)/404.584;
   input3 = (input[3] - 486.873)/655.093;
   input4 = (input[4] - 841.83)/621.529;
   input5 = (input[5] - 754.76)/608.164;
   input6 = (input[6] - 758.176)/608.809;
   input7 = (input[7] - 740.578)/598.225;
   input8 = (input[8] - 732.87)/623.115;
   input9 = (input[9] - 726.221)/612.655;
   input10 = (input[10] - 702.665)/618.275;
   input11 = (input[11] - 892.103)/580.337;
   input12 = (input[12] - 894.076)/583.301;
   input13 = (input[13] - 715.569)/418.315;
   input14 = (input[14] - 808.04)/469.691;
   input15 = (input[15] - 884.494)/560.379;
   input16 = (input[16] - 608.668)/392.547;
   input17 = (input[17] - 800.362)/470.654;
   input18 = (input[18] - 887.143)/587.344;
   input19 = (input[19] - 866.36)/563.251;
   input20 = (input[20] - -366.588)/493.396;
   input21 = (input[21] - -483.208)/978.961;
   input22 = (input[22] - -26.3061)/932.894;
   input23 = (input[23] - 81.7389)/567.662;
   switch(index) {
     case 0:
         return neuron0x2d325e0();
     default:
         return 0.;
   }
}

double NNfunction-ss_uRdR::neuron0x2cfe6d0() {
   return input0;
}

double NNfunction-ss_uRdR::neuron0x2cfea10() {
   return input1;
}

double NNfunction-ss_uRdR::neuron0x2cfed50() {
   return input2;
}

double NNfunction-ss_uRdR::neuron0x2cff090() {
   return input3;
}

double NNfunction-ss_uRdR::neuron0x2cff3d0() {
   return input4;
}

double NNfunction-ss_uRdR::neuron0x2cff710() {
   return input5;
}

double NNfunction-ss_uRdR::neuron0x2cffa50() {
   return input6;
}

double NNfunction-ss_uRdR::neuron0x2cffd90() {
   return input7;
}

double NNfunction-ss_uRdR::neuron0x2d000d0() {
   return input8;
}

double NNfunction-ss_uRdR::neuron0x2d00410() {
   return input9;
}

double NNfunction-ss_uRdR::neuron0x2d00750() {
   return input10;
}

double NNfunction-ss_uRdR::neuron0x2d00a90() {
   return input11;
}

double NNfunction-ss_uRdR::neuron0x2d00dd0() {
   return input12;
}

double NNfunction-ss_uRdR::neuron0x2d01110() {
   return input13;
}

double NNfunction-ss_uRdR::neuron0x2d01450() {
   return input14;
}

double NNfunction-ss_uRdR::neuron0x2d01790() {
   return input15;
}

double NNfunction-ss_uRdR::neuron0x2d01ad0() {
   return input16;
}

double NNfunction-ss_uRdR::neuron0x2d02030() {
   return input17;
}

double NNfunction-ss_uRdR::neuron0x2d02250() {
   return input18;
}

double NNfunction-ss_uRdR::neuron0x2d02590() {
   return input19;
}

double NNfunction-ss_uRdR::neuron0x2d028d0() {
   return input20;
}

double NNfunction-ss_uRdR::neuron0x2d02c10() {
   return input21;
}

double NNfunction-ss_uRdR::neuron0x2d02f50() {
   return input22;
}

double NNfunction-ss_uRdR::neuron0x2d03290() {
   return input23;
}

double NNfunction-ss_uRdR::input0x2d03700() {
   double input = -1.29005;
   input += synapse0x2cfe590();
   input += synapse0x2cfe5d0();
   input += synapse0x2d039b0();
   input += synapse0x2d039f0();
   input += synapse0x2d03a30();
   input += synapse0x2d03a70();
   input += synapse0x2d03ab0();
   input += synapse0x2d03af0();
   input += synapse0x2d03b30();
   input += synapse0x2d03b70();
   input += synapse0x2d03bb0();
   input += synapse0x2d03bf0();
   input += synapse0x2d03c30();
   input += synapse0x2d03c70();
   input += synapse0x2d03cb0();
   input += synapse0x2d03cf0();
   input += synapse0x2cfe500();
   input += synapse0x2cfe540();
   input += synapse0x2ab98a0();
   input += synapse0x2ab98e0();
   input += synapse0x2d03f50();
   input += synapse0x2d03f90();
   input += synapse0x2d03fd0();
   input += synapse0x2d04010();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d03700() {
   double input = input0x2d03700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d04050() {
   double input = 0.803891;
   input += synapse0x2d04390();
   input += synapse0x2d043d0();
   input += synapse0x2d04410();
   input += synapse0x2d04450();
   input += synapse0x2d04490();
   input += synapse0x2d044d0();
   input += synapse0x2d04510();
   input += synapse0x2d04550();
   input += synapse0x2d04590();
   input += synapse0x2d03e40();
   input += synapse0x2d03e80();
   input += synapse0x2d03ec0();
   input += synapse0x2d03f00();
   input += synapse0x2d047e0();
   input += synapse0x2d04820();
   input += synapse0x2d04860();
   input += synapse0x2d041e0();
   input += synapse0x2d04220();
   input += synapse0x2d049b0();
   input += synapse0x2d049f0();
   input += synapse0x2d04a30();
   input += synapse0x2d04a70();
   input += synapse0x2d04ab0();
   input += synapse0x2d04af0();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d04050() {
   double input = input0x2d04050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d04b30() {
   double input = -0.0616878;
   input += synapse0x2d04e70();
   input += synapse0x2d04eb0();
   input += synapse0x2d04ef0();
   input += synapse0x2d04f30();
   input += synapse0x2d04f70();
   input += synapse0x2d04fb0();
   input += synapse0x2d04ff0();
   input += synapse0x2d05030();
   input += synapse0x2d05070();
   input += synapse0x2d050b0();
   input += synapse0x2d050f0();
   input += synapse0x2d05130();
   input += synapse0x2d05170();
   input += synapse0x2d051b0();
   input += synapse0x2d051f0();
   input += synapse0x2d05230();
   input += synapse0x2d04cc0();
   input += synapse0x2ab8a00();
   input += synapse0x2d04d00();
   input += synapse0x2ab9f50();
   input += synapse0x2ac7820();
   input += synapse0x2ac7860();
   input += synapse0x2ced760();
   input += synapse0x2ced7a0();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d04b30() {
   double input = input0x2d04b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d045d0() {
   double input = -3.89272;
   input += synapse0x2ced7e0();
   input += synapse0x2d04760();
   input += synapse0x2d047a0();
   input += synapse0x2d05380();
   input += synapse0x2d053c0();
   input += synapse0x2d05400();
   input += synapse0x2d05440();
   input += synapse0x2d05480();
   input += synapse0x2d054c0();
   input += synapse0x2d05500();
   input += synapse0x2d05540();
   input += synapse0x2d05580();
   input += synapse0x2d055c0();
   input += synapse0x2d05600();
   input += synapse0x2d05640();
   input += synapse0x2d05680();
   input += synapse0x2cfe610();
   input += synapse0x2cfe650();
   input += synapse0x2cfe690();
   input += synapse0x2d057d0();
   input += synapse0x2d05810();
   input += synapse0x2d05850();
   input += synapse0x2d05890();
   input += synapse0x2d058d0();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d045d0() {
   double input = input0x2d045d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d05910() {
   double input = -1.59268;
   input += synapse0x2d05c50();
   input += synapse0x2d05c90();
   input += synapse0x2d05cd0();
   input += synapse0x2d05d10();
   input += synapse0x2d05d50();
   input += synapse0x2d05d90();
   input += synapse0x2d05dd0();
   input += synapse0x2d05e10();
   input += synapse0x2d05e50();
   input += synapse0x2d05e90();
   input += synapse0x2d05ed0();
   input += synapse0x2d05f10();
   input += synapse0x2d05f50();
   input += synapse0x2d05f90();
   input += synapse0x2d05fd0();
   input += synapse0x2d06010();
   input += synapse0x2d05aa0();
   input += synapse0x2d05ae0();
   input += synapse0x2d06160();
   input += synapse0x2d061a0();
   input += synapse0x2d061e0();
   input += synapse0x2d06220();
   input += synapse0x2d06260();
   input += synapse0x2d062a0();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d05910() {
   double input = input0x2d05910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d062e0() {
   double input = 1.64205;
   input += synapse0x2d06620();
   input += synapse0x2d06660();
   input += synapse0x2d066a0();
   input += synapse0x2d066e0();
   input += synapse0x2d06720();
   input += synapse0x2d06760();
   input += synapse0x2d067a0();
   input += synapse0x2d067e0();
   input += synapse0x2d06820();
   input += synapse0x2ac7b70();
   input += synapse0x2ac7bb0();
   input += synapse0x2ac7bf0();
   input += synapse0x2ac7c30();
   input += synapse0x2ac7c70();
   input += synapse0x2ac7cb0();
   input += synapse0x2ac7cf0();
   input += synapse0x2d06470();
   input += synapse0x2d064b0();
   input += synapse0x2ac7e40();
   input += synapse0x2ac7e80();
   input += synapse0x2ac7ec0();
   input += synapse0x2ac7f00();
   input += synapse0x2ac7f40();
   input += synapse0x2d07070();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d062e0() {
   double input = input0x2d062e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d070b0() {
   double input = -0.60556;
   input += synapse0x2d073f0();
   input += synapse0x2d07430();
   input += synapse0x2d07470();
   input += synapse0x2d074b0();
   input += synapse0x2d074f0();
   input += synapse0x2d07530();
   input += synapse0x2d07570();
   input += synapse0x2d075b0();
   input += synapse0x2d075f0();
   input += synapse0x2d07630();
   input += synapse0x2d07670();
   input += synapse0x2d076b0();
   input += synapse0x2d076f0();
   input += synapse0x2d07730();
   input += synapse0x2d07770();
   input += synapse0x2d077b0();
   input += synapse0x2d07240();
   input += synapse0x2d07280();
   input += synapse0x2d07900();
   input += synapse0x2d07940();
   input += synapse0x2d07980();
   input += synapse0x2d079c0();
   input += synapse0x2d07a00();
   input += synapse0x2d07a40();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d070b0() {
   double input = input0x2d070b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d07a80() {
   double input = 0.438268;
   input += synapse0x2d07dc0();
   input += synapse0x2d07e00();
   input += synapse0x2d07e40();
   input += synapse0x2d07e80();
   input += synapse0x2d07ec0();
   input += synapse0x2d07f00();
   input += synapse0x2d07f40();
   input += synapse0x2d07f80();
   input += synapse0x2d07fc0();
   input += synapse0x2d08000();
   input += synapse0x2d08040();
   input += synapse0x2d08080();
   input += synapse0x2d080c0();
   input += synapse0x2d08100();
   input += synapse0x2d08140();
   input += synapse0x2d08180();
   input += synapse0x2d07c10();
   input += synapse0x2d07c50();
   input += synapse0x2d082d0();
   input += synapse0x2d08310();
   input += synapse0x2d08350();
   input += synapse0x2d08390();
   input += synapse0x2d083d0();
   input += synapse0x2d08410();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d07a80() {
   double input = input0x2d07a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d08450() {
   double input = 0.0910601;
   input += synapse0x2d01f20();
   input += synapse0x2d01f60();
   input += synapse0x2d01fa0();
   input += synapse0x2d01fe0();
   input += synapse0x2d089a0();
   input += synapse0x2d089e0();
   input += synapse0x2d08a20();
   input += synapse0x2d08a60();
   input += synapse0x2d08aa0();
   input += synapse0x2d08ae0();
   input += synapse0x2d08b20();
   input += synapse0x2d08b60();
   input += synapse0x2d08ba0();
   input += synapse0x2d08be0();
   input += synapse0x2d08c20();
   input += synapse0x2d08c60();
   input += synapse0x2d085e0();
   input += synapse0x2d08620();
   input += synapse0x2d08db0();
   input += synapse0x2d08df0();
   input += synapse0x2d08e30();
   input += synapse0x2d08e70();
   input += synapse0x2d08eb0();
   input += synapse0x2d08ef0();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d08450() {
   double input = input0x2d08450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d08f30() {
   double input = -0.490906;
   input += synapse0x2d09270();
   input += synapse0x2d092b0();
   input += synapse0x2d092f0();
   input += synapse0x2d09330();
   input += synapse0x2d09370();
   input += synapse0x2d093b0();
   input += synapse0x2d093f0();
   input += synapse0x2d09430();
   input += synapse0x2d09470();
   input += synapse0x2d094b0();
   input += synapse0x2d094f0();
   input += synapse0x2d09530();
   input += synapse0x2d09570();
   input += synapse0x2d095b0();
   input += synapse0x2d095f0();
   input += synapse0x2d09630();
   input += synapse0x2d090c0();
   input += synapse0x2d09100();
   input += synapse0x2d09780();
   input += synapse0x2d097c0();
   input += synapse0x2d09800();
   input += synapse0x2d09840();
   input += synapse0x2d09880();
   input += synapse0x2d098c0();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d08f30() {
   double input = input0x2d08f30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d09900() {
   double input = 1.35855;
   input += synapse0x2d09c40();
   input += synapse0x2d09c80();
   input += synapse0x2d09cc0();
   input += synapse0x2d09d00();
   input += synapse0x2d09d40();
   input += synapse0x2d09d80();
   input += synapse0x2d09dc0();
   input += synapse0x2d09e00();
   input += synapse0x2d09e40();
   input += synapse0x2d09e80();
   input += synapse0x2d09ec0();
   input += synapse0x2d09f00();
   input += synapse0x2d09f40();
   input += synapse0x2d09f80();
   input += synapse0x2d09fc0();
   input += synapse0x2d0a000();
   input += synapse0x2d09a90();
   input += synapse0x2d09ad0();
   input += synapse0x2d06860();
   input += synapse0x2d068a0();
   input += synapse0x2d068e0();
   input += synapse0x2d06920();
   input += synapse0x2d06960();
   input += synapse0x2d069a0();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d09900() {
   double input = input0x2d09900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d069e0() {
   double input = 0.490558;
   input += synapse0x2d06d20();
   input += synapse0x2d06d60();
   input += synapse0x2d06da0();
   input += synapse0x2d06de0();
   input += synapse0x2d06e20();
   input += synapse0x2d06e60();
   input += synapse0x2d06ea0();
   input += synapse0x2d06ee0();
   input += synapse0x2d06f20();
   input += synapse0x2d06f60();
   input += synapse0x2d06fa0();
   input += synapse0x2d06fe0();
   input += synapse0x2d07020();
   input += synapse0x2d0b160();
   input += synapse0x2d0b1a0();
   input += synapse0x2d0b1e0();
   input += synapse0x2d06b70();
   input += synapse0x2d06bb0();
   input += synapse0x2d0b330();
   input += synapse0x2d0b370();
   input += synapse0x2d0b3b0();
   input += synapse0x2d0b3f0();
   input += synapse0x2d0b430();
   input += synapse0x2d0b470();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d069e0() {
   double input = input0x2d069e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d0b4b0() {
   double input = -1.52472;
   input += synapse0x2d0b7f0();
   input += synapse0x2d0b830();
   input += synapse0x2d0b870();
   input += synapse0x2d0b8b0();
   input += synapse0x2d0b8f0();
   input += synapse0x2d0b930();
   input += synapse0x2d0b970();
   input += synapse0x2d0b9b0();
   input += synapse0x2d0b9f0();
   input += synapse0x2d0ba30();
   input += synapse0x2d0ba70();
   input += synapse0x2d0bab0();
   input += synapse0x2d0baf0();
   input += synapse0x2d0bb30();
   input += synapse0x2d0bb70();
   input += synapse0x2d0bbb0();
   input += synapse0x2d0b640();
   input += synapse0x2d0b680();
   input += synapse0x2d0bd00();
   input += synapse0x2d0bd40();
   input += synapse0x2d0bd80();
   input += synapse0x2d0bdc0();
   input += synapse0x2d0be00();
   input += synapse0x2d0be40();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d0b4b0() {
   double input = input0x2d0b4b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d0be80() {
   double input = 1.63872;
   input += synapse0x2d0c1c0();
   input += synapse0x2d0c200();
   input += synapse0x2d0c240();
   input += synapse0x2d0c280();
   input += synapse0x2d0c2c0();
   input += synapse0x2d0c300();
   input += synapse0x2d0c340();
   input += synapse0x2d0c380();
   input += synapse0x2d0c3c0();
   input += synapse0x2d0c400();
   input += synapse0x2d0c440();
   input += synapse0x2d0c480();
   input += synapse0x2d0c4c0();
   input += synapse0x2d0c500();
   input += synapse0x2d0c540();
   input += synapse0x2d0c580();
   input += synapse0x2d0c010();
   input += synapse0x2d0c050();
   input += synapse0x2d0c6d0();
   input += synapse0x2d0c710();
   input += synapse0x2d0c750();
   input += synapse0x2d0c790();
   input += synapse0x2d0c7d0();
   input += synapse0x2d0c810();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d0be80() {
   double input = input0x2d0be80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d0c850() {
   double input = 0.0361412;
   input += synapse0x2d0cb90();
   input += synapse0x2d0cbd0();
   input += synapse0x2d0cc10();
   input += synapse0x2d0cc50();
   input += synapse0x2d0cc90();
   input += synapse0x2d0ccd0();
   input += synapse0x2d0cd10();
   input += synapse0x2d0cd50();
   input += synapse0x2d0cd90();
   input += synapse0x2d0cdd0();
   input += synapse0x2d0ce10();
   input += synapse0x2d0ce50();
   input += synapse0x2d0ce90();
   input += synapse0x2d0ced0();
   input += synapse0x2d0cf10();
   input += synapse0x2d0cf50();
   input += synapse0x2d0c9e0();
   input += synapse0x2d0ca20();
   input += synapse0x2d0d0a0();
   input += synapse0x2d0d0e0();
   input += synapse0x2d0d120();
   input += synapse0x2d0d160();
   input += synapse0x2d0d1a0();
   input += synapse0x2d0d1e0();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d0c850() {
   double input = input0x2d0c850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d0d220() {
   double input = 0.276441;
   input += synapse0x2d0d560();
   input += synapse0x2cfe8f0();
   input += synapse0x2cfe930();
   input += synapse0x2cfec30();
   input += synapse0x2cfec70();
   input += synapse0x2cfef70();
   input += synapse0x2cfefb0();
   input += synapse0x2cff2b0();
   input += synapse0x2cff2f0();
   input += synapse0x2cff5f0();
   input += synapse0x2cff630();
   input += synapse0x2cff930();
   input += synapse0x2cff970();
   input += synapse0x2cffc70();
   input += synapse0x2cffcb0();
   input += synapse0x2cfffb0();
   input += synapse0x2cffff0();
   input += synapse0x2d002f0();
   input += synapse0x2d00330();
   input += synapse0x2d00630();
   input += synapse0x2d00670();
   input += synapse0x2d00970();
   input += synapse0x2d009b0();
   input += synapse0x2d00cb0();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d0d220() {
   double input = input0x2d0d220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d0f030() {
   double input = -0.25562;
   input += synapse0x2d00cf0();
   input += synapse0x2d019b0();
   input += synapse0x2d019f0();
   input += synapse0x2d0d3b0();
   input += synapse0x2d0d3f0();
   input += synapse0x2d01cf0();
   input += synapse0x2d01d30();
   input += synapse0x2ab9780();
   input += synapse0x2ab97c0();
   input += synapse0x2d02470();
   input += synapse0x2d024b0();
   input += synapse0x2d027b0();
   input += synapse0x2d027f0();
   input += synapse0x2d02af0();
   input += synapse0x2d02b30();
   input += synapse0x2d02e30();
   input += synapse0x2d02e70();
   input += synapse0x2d03170();
   input += synapse0x2d031b0();
   input += synapse0x2d034b0();
   input += synapse0x2d034f0();
   input += synapse0x2d00ff0();
   input += synapse0x2d01030();
   input += synapse0x2d0f2d0();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d0f030() {
   double input = input0x2d0f030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d0f310() {
   double input = -1.62453;
   input += synapse0x2d0f650();
   input += synapse0x2d0f690();
   input += synapse0x2d0f6d0();
   input += synapse0x2d0f710();
   input += synapse0x2d0f750();
   input += synapse0x2d0f790();
   input += synapse0x2d0f7d0();
   input += synapse0x2d0f810();
   input += synapse0x2d0f850();
   input += synapse0x2d0f890();
   input += synapse0x2d0f8d0();
   input += synapse0x2d0f910();
   input += synapse0x2d0f950();
   input += synapse0x2d0f990();
   input += synapse0x2d0f9d0();
   input += synapse0x2d0fa10();
   input += synapse0x2d0f4a0();
   input += synapse0x2d0f4e0();
   input += synapse0x2d0fb60();
   input += synapse0x2d0fba0();
   input += synapse0x2d0fbe0();
   input += synapse0x2d0fc20();
   input += synapse0x2d0fc60();
   input += synapse0x2d0fca0();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d0f310() {
   double input = input0x2d0f310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d0fce0() {
   double input = -0.9119;
   input += synapse0x2d10020();
   input += synapse0x2d10060();
   input += synapse0x2d100a0();
   input += synapse0x2d100e0();
   input += synapse0x2d10120();
   input += synapse0x2d10160();
   input += synapse0x2d101a0();
   input += synapse0x2d101e0();
   input += synapse0x2d10220();
   input += synapse0x2d10260();
   input += synapse0x2d102a0();
   input += synapse0x2d102e0();
   input += synapse0x2d10320();
   input += synapse0x2d10360();
   input += synapse0x2d103a0();
   input += synapse0x2d103e0();
   input += synapse0x2d0fe70();
   input += synapse0x2d0feb0();
   input += synapse0x2d10530();
   input += synapse0x2d10570();
   input += synapse0x2d105b0();
   input += synapse0x2d105f0();
   input += synapse0x2d10630();
   input += synapse0x2d10670();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d0fce0() {
   double input = input0x2d0fce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d106b0() {
   double input = -2.30257;
   input += synapse0x2d109f0();
   input += synapse0x2d10a30();
   input += synapse0x2d10a70();
   input += synapse0x2d10ab0();
   input += synapse0x2d10af0();
   input += synapse0x2d10b30();
   input += synapse0x2d10b70();
   input += synapse0x2d10bb0();
   input += synapse0x2d10bf0();
   input += synapse0x2d10c30();
   input += synapse0x2d10c70();
   input += synapse0x2d10cb0();
   input += synapse0x2d10cf0();
   input += synapse0x2d10d30();
   input += synapse0x2d10d70();
   input += synapse0x2d10db0();
   input += synapse0x2d10840();
   input += synapse0x2d10880();
   input += synapse0x2d10f00();
   input += synapse0x2d10f40();
   input += synapse0x2d10f80();
   input += synapse0x2d10fc0();
   input += synapse0x2d11000();
   input += synapse0x2d11040();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d106b0() {
   double input = input0x2d106b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d11080() {
   double input = 1.83441;
   input += synapse0x2d113c0();
   input += synapse0x2d11400();
   input += synapse0x2d11440();
   input += synapse0x2d11480();
   input += synapse0x2d114c0();
   input += synapse0x2d11500();
   input += synapse0x2d11540();
   input += synapse0x2d11580();
   input += synapse0x2d115c0();
   input += synapse0x2d11600();
   input += synapse0x2d11640();
   input += synapse0x2d11680();
   input += synapse0x2d116c0();
   input += synapse0x2d11700();
   input += synapse0x2d11740();
   input += synapse0x2d11780();
   input += synapse0x2d11210();
   input += synapse0x2d11250();
   input += synapse0x2d118d0();
   input += synapse0x2d11910();
   input += synapse0x2d11950();
   input += synapse0x2d11990();
   input += synapse0x2d119d0();
   input += synapse0x2d11a10();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d11080() {
   double input = input0x2d11080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d11a50() {
   double input = -0.00977563;
   input += synapse0x2d11d90();
   input += synapse0x2d11dd0();
   input += synapse0x2d11e10();
   input += synapse0x2d11e50();
   input += synapse0x2d11e90();
   input += synapse0x2d11ed0();
   input += synapse0x2d11f10();
   input += synapse0x2d11f50();
   input += synapse0x2d11f90();
   input += synapse0x2d0a150();
   input += synapse0x2d0a190();
   input += synapse0x2d0a1d0();
   input += synapse0x2d0a210();
   input += synapse0x2d0a250();
   input += synapse0x2d0a290();
   input += synapse0x2d0a2d0();
   input += synapse0x2d11be0();
   input += synapse0x2d11c20();
   input += synapse0x2d0a420();
   input += synapse0x2d0a460();
   input += synapse0x2d0a4a0();
   input += synapse0x2d0a4e0();
   input += synapse0x2d0a520();
   input += synapse0x2d0a560();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d11a50() {
   double input = input0x2d11a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d0a5a0() {
   double input = 0.530742;
   input += synapse0x2d0a8e0();
   input += synapse0x2d0a920();
   input += synapse0x2d0a960();
   input += synapse0x2d0a9a0();
   input += synapse0x2d0a9e0();
   input += synapse0x2d0aa20();
   input += synapse0x2d0aa60();
   input += synapse0x2d0aaa0();
   input += synapse0x2d0aae0();
   input += synapse0x2d0ab20();
   input += synapse0x2d0ab60();
   input += synapse0x2d0aba0();
   input += synapse0x2d0abe0();
   input += synapse0x2d0ac20();
   input += synapse0x2d0ac60();
   input += synapse0x2d0aca0();
   input += synapse0x2d0a730();
   input += synapse0x2d0a770();
   input += synapse0x2d0adf0();
   input += synapse0x2d0ae30();
   input += synapse0x2d0ae70();
   input += synapse0x2d0aeb0();
   input += synapse0x2d0aef0();
   input += synapse0x2d0af30();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d0a5a0() {
   double input = input0x2d0a5a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d0af70() {
   double input = 2.99375;
   input += synapse0x2d0b100();
   input += synapse0x2d14190();
   input += synapse0x2d141d0();
   input += synapse0x2d14210();
   input += synapse0x2d14250();
   input += synapse0x2d14290();
   input += synapse0x2d142d0();
   input += synapse0x2d14310();
   input += synapse0x2d14350();
   input += synapse0x2d14390();
   input += synapse0x2d143d0();
   input += synapse0x2d14410();
   input += synapse0x2d14450();
   input += synapse0x2d14490();
   input += synapse0x2d144d0();
   input += synapse0x2d14510();
   input += synapse0x2d13fe0();
   input += synapse0x2d14020();
   input += synapse0x2d14660();
   input += synapse0x2d146a0();
   input += synapse0x2d146e0();
   input += synapse0x2d14720();
   input += synapse0x2d14760();
   input += synapse0x2d147a0();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d0af70() {
   double input = input0x2d0af70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d147e0() {
   double input = -0.279952;
   input += synapse0x2d14b20();
   input += synapse0x2d14b60();
   input += synapse0x2d14ba0();
   input += synapse0x2d14be0();
   input += synapse0x2d14c20();
   input += synapse0x2d14c60();
   input += synapse0x2d14ca0();
   input += synapse0x2d14ce0();
   input += synapse0x2d14d20();
   input += synapse0x2d14d60();
   input += synapse0x2d14da0();
   input += synapse0x2d14de0();
   input += synapse0x2d14e20();
   input += synapse0x2d14e60();
   input += synapse0x2d14ea0();
   input += synapse0x2d14ee0();
   input += synapse0x2d14970();
   input += synapse0x2d149b0();
   input += synapse0x2d15030();
   input += synapse0x2d15070();
   input += synapse0x2d150b0();
   input += synapse0x2d150f0();
   input += synapse0x2d15130();
   input += synapse0x2d15170();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d147e0() {
   double input = input0x2d147e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d151b0() {
   double input = 0.801872;
   input += synapse0x2d154f0();
   input += synapse0x2d15530();
   input += synapse0x2d15570();
   input += synapse0x2d155b0();
   input += synapse0x2d155f0();
   input += synapse0x2d15630();
   input += synapse0x2d15670();
   input += synapse0x2d156b0();
   input += synapse0x2d156f0();
   input += synapse0x2d15730();
   input += synapse0x2d15770();
   input += synapse0x2d157b0();
   input += synapse0x2d157f0();
   input += synapse0x2d15830();
   input += synapse0x2d15870();
   input += synapse0x2d158b0();
   input += synapse0x2d15340();
   input += synapse0x2d15380();
   input += synapse0x2d15a00();
   input += synapse0x2d15a40();
   input += synapse0x2d15a80();
   input += synapse0x2d15ac0();
   input += synapse0x2d15b00();
   input += synapse0x2d15b40();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d151b0() {
   double input = input0x2d151b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d15b80() {
   double input = -0.513508;
   input += synapse0x2d15ec0();
   input += synapse0x2d15f00();
   input += synapse0x2d15f40();
   input += synapse0x2d15f80();
   input += synapse0x2d15fc0();
   input += synapse0x2d16000();
   input += synapse0x2d16040();
   input += synapse0x2d16080();
   input += synapse0x2d160c0();
   input += synapse0x2d16100();
   input += synapse0x2d16140();
   input += synapse0x2d16180();
   input += synapse0x2d161c0();
   input += synapse0x2d16200();
   input += synapse0x2d16240();
   input += synapse0x2d16280();
   input += synapse0x2d15d10();
   input += synapse0x2d15d50();
   input += synapse0x2d163d0();
   input += synapse0x2d16410();
   input += synapse0x2d16450();
   input += synapse0x2d16490();
   input += synapse0x2d164d0();
   input += synapse0x2d16510();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d15b80() {
   double input = input0x2d15b80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d16550() {
   double input = -0.852488;
   input += synapse0x2d16890();
   input += synapse0x2d168d0();
   input += synapse0x2d16910();
   input += synapse0x2d16950();
   input += synapse0x2d16990();
   input += synapse0x2d169d0();
   input += synapse0x2d16a10();
   input += synapse0x2d16a50();
   input += synapse0x2d16a90();
   input += synapse0x2d16ad0();
   input += synapse0x2d16b10();
   input += synapse0x2d16b50();
   input += synapse0x2d16b90();
   input += synapse0x2d16bd0();
   input += synapse0x2d16c10();
   input += synapse0x2d16c50();
   input += synapse0x2d166e0();
   input += synapse0x2d16720();
   input += synapse0x2d16da0();
   input += synapse0x2d16de0();
   input += synapse0x2d16e20();
   input += synapse0x2d16e60();
   input += synapse0x2d16ea0();
   input += synapse0x2d16ee0();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d16550() {
   double input = input0x2d16550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d16f20() {
   double input = -1.82047;
   input += synapse0x2d17260();
   input += synapse0x2d172a0();
   input += synapse0x2d172e0();
   input += synapse0x2d17320();
   input += synapse0x2d17360();
   input += synapse0x2d173a0();
   input += synapse0x2d173e0();
   input += synapse0x2d17420();
   input += synapse0x2d17460();
   input += synapse0x2d174a0();
   input += synapse0x2d174e0();
   input += synapse0x2d17520();
   input += synapse0x2d17560();
   input += synapse0x2d175a0();
   input += synapse0x2d175e0();
   input += synapse0x2d17620();
   input += synapse0x2d170b0();
   input += synapse0x2d170f0();
   input += synapse0x2d17770();
   input += synapse0x2d177b0();
   input += synapse0x2d177f0();
   input += synapse0x2d17830();
   input += synapse0x2d17870();
   input += synapse0x2d178b0();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d16f20() {
   double input = input0x2d16f20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d178f0() {
   double input = 0.276197;
   input += synapse0x2d17c30();
   input += synapse0x2d17c70();
   input += synapse0x2d17cb0();
   input += synapse0x2d17cf0();
   input += synapse0x2d17d30();
   input += synapse0x2d17d70();
   input += synapse0x2d17db0();
   input += synapse0x2d17df0();
   input += synapse0x2d17e30();
   input += synapse0x2d17e70();
   input += synapse0x2d17eb0();
   input += synapse0x2d17ef0();
   input += synapse0x2d17f30();
   input += synapse0x2d17f70();
   input += synapse0x2d17fb0();
   input += synapse0x2d17ff0();
   input += synapse0x2d17a80();
   input += synapse0x2d17ac0();
   input += synapse0x2d18140();
   input += synapse0x2d18180();
   input += synapse0x2d181c0();
   input += synapse0x2d18200();
   input += synapse0x2d18240();
   input += synapse0x2d18280();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d178f0() {
   double input = input0x2d178f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d182c0() {
   double input = -0.774584;
   input += synapse0x2d18600();
   input += synapse0x2d18640();
   input += synapse0x2d18680();
   input += synapse0x2d186c0();
   input += synapse0x2d18700();
   input += synapse0x2d18740();
   input += synapse0x2d18780();
   input += synapse0x2d187c0();
   input += synapse0x2d18800();
   input += synapse0x2d18840();
   input += synapse0x2d18880();
   input += synapse0x2d188c0();
   input += synapse0x2d18900();
   input += synapse0x2d18940();
   input += synapse0x2d18980();
   input += synapse0x2d189c0();
   input += synapse0x2d18450();
   input += synapse0x2d18490();
   input += synapse0x2d18b10();
   input += synapse0x2d18b50();
   input += synapse0x2d18b90();
   input += synapse0x2d18bd0();
   input += synapse0x2d18c10();
   input += synapse0x2d18c50();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d182c0() {
   double input = input0x2d182c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d18c90() {
   double input = 0.536843;
   input += synapse0x2d18fd0();
   input += synapse0x2d0d5a0();
   input += synapse0x2d0d5e0();
   input += synapse0x2d0d620();
   input += synapse0x2d0d870();
   input += synapse0x2d0d8b0();
   input += synapse0x2d0d8f0();
   input += synapse0x2d0db40();
   input += synapse0x2d0db80();
   input += synapse0x2d0ddd0();
   input += synapse0x2d0de10();
   input += synapse0x2d0de50();
   input += synapse0x2d0e0a0();
   input += synapse0x2d0e0e0();
   input += synapse0x2d0e330();
   input += synapse0x2d0e370();
   input += synapse0x2d18e20();
   input += synapse0x2d18e60();
   input += synapse0x2d0e4c0();
   input += synapse0x2d0e9d0();
   input += synapse0x2d0ea10();
   input += synapse0x2d0ea50();
   input += synapse0x2d0eca0();
   input += synapse0x2d0ece0();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d18c90() {
   double input = input0x2d18c90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d0ed20() {
   double input = -1.18996;
   input += synapse0x2d0e590();
   input += synapse0x2d0e5d0();
   input += synapse0x2d0e610();
   input += synapse0x2d0e650();
   input += synapse0x2d0efd0();
   input += synapse0x2d1b320();
   input += synapse0x2d1b360();
   input += synapse0x2d1b3a0();
   input += synapse0x2d1b3e0();
   input += synapse0x2d1b420();
   input += synapse0x2d1b460();
   input += synapse0x2d1b4a0();
   input += synapse0x2d1b4e0();
   input += synapse0x2d1b520();
   input += synapse0x2d1b560();
   input += synapse0x2d1b5a0();
   input += synapse0x2d0eeb0();
   input += synapse0x2d0eef0();
   input += synapse0x2d1b6f0();
   input += synapse0x2d1b730();
   input += synapse0x2d1b770();
   input += synapse0x2d1b7b0();
   input += synapse0x2d1b7f0();
   input += synapse0x2d1b830();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d0ed20() {
   double input = input0x2d0ed20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d1b870() {
   double input = -0.379324;
   input += synapse0x2d1bbb0();
   input += synapse0x2d1bbf0();
   input += synapse0x2d1bc30();
   input += synapse0x2d1bc70();
   input += synapse0x2d1bcb0();
   input += synapse0x2d1bcf0();
   input += synapse0x2d1bd30();
   input += synapse0x2d1bd70();
   input += synapse0x2d1bdb0();
   input += synapse0x2d1bdf0();
   input += synapse0x2d1be30();
   input += synapse0x2d1be70();
   input += synapse0x2d1beb0();
   input += synapse0x2d1bef0();
   input += synapse0x2d1bf30();
   input += synapse0x2d1bf70();
   input += synapse0x2d1ba00();
   input += synapse0x2d1ba40();
   input += synapse0x2d1c0c0();
   input += synapse0x2d1c100();
   input += synapse0x2d1c140();
   input += synapse0x2d1c180();
   input += synapse0x2d1c1c0();
   input += synapse0x2d1c200();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d1b870() {
   double input = input0x2d1b870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d1c240() {
   double input = 0.936962;
   input += synapse0x2d1c580();
   input += synapse0x2d1c5c0();
   input += synapse0x2d1c600();
   input += synapse0x2d1c640();
   input += synapse0x2d1c680();
   input += synapse0x2d1c6c0();
   input += synapse0x2d1c700();
   input += synapse0x2d1c740();
   input += synapse0x2d1c780();
   input += synapse0x2d1c7c0();
   input += synapse0x2d1c800();
   input += synapse0x2d1c840();
   input += synapse0x2d1c880();
   input += synapse0x2d1c8c0();
   input += synapse0x2d1c900();
   input += synapse0x2d1c940();
   input += synapse0x2d1c3d0();
   input += synapse0x2d1c410();
   input += synapse0x2d1ca90();
   input += synapse0x2d1cad0();
   input += synapse0x2d1cb10();
   input += synapse0x2d1cb50();
   input += synapse0x2d1cb90();
   input += synapse0x2d1cbd0();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d1c240() {
   double input = input0x2d1c240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d1cc10() {
   double input = 1.00861;
   input += synapse0x2d1cf50();
   input += synapse0x2d1cf90();
   input += synapse0x2d1cfd0();
   input += synapse0x2d1d010();
   input += synapse0x2d1d050();
   input += synapse0x2d1d090();
   input += synapse0x2d1d0d0();
   input += synapse0x2d1d110();
   input += synapse0x2d1d150();
   input += synapse0x2d1d190();
   input += synapse0x2d1d1d0();
   input += synapse0x2d1d210();
   input += synapse0x2d1d250();
   input += synapse0x2d1d290();
   input += synapse0x2d1d2d0();
   input += synapse0x2d1d310();
   input += synapse0x2d1cda0();
   input += synapse0x2d1cde0();
   input += synapse0x2d1d460();
   input += synapse0x2d1d4a0();
   input += synapse0x2d1d4e0();
   input += synapse0x2d1d520();
   input += synapse0x2d1d560();
   input += synapse0x2d1d5a0();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d1cc10() {
   double input = input0x2d1cc10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d1d5e0() {
   double input = 1.27441;
   input += synapse0x2d1d920();
   input += synapse0x2d1d960();
   input += synapse0x2d1d9a0();
   input += synapse0x2d1d9e0();
   input += synapse0x2d1da20();
   input += synapse0x2d1da60();
   input += synapse0x2d1daa0();
   input += synapse0x2d1dae0();
   input += synapse0x2d1db20();
   input += synapse0x2d1db60();
   input += synapse0x2d1dba0();
   input += synapse0x2d1dbe0();
   input += synapse0x2d1dc20();
   input += synapse0x2d1dc60();
   input += synapse0x2d1dca0();
   input += synapse0x2d1dce0();
   input += synapse0x2d1d770();
   input += synapse0x2d1d7b0();
   input += synapse0x2d1de30();
   input += synapse0x2d1de70();
   input += synapse0x2d1deb0();
   input += synapse0x2d1def0();
   input += synapse0x2d1df30();
   input += synapse0x2d1df70();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d1d5e0() {
   double input = input0x2d1d5e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d1dfb0() {
   double input = -0.54865;
   input += synapse0x2d1e2f0();
   input += synapse0x2d1e330();
   input += synapse0x2d1e370();
   input += synapse0x2d1e3b0();
   input += synapse0x2d1e3f0();
   input += synapse0x2d1e430();
   input += synapse0x2d1e470();
   input += synapse0x2d1e4b0();
   input += synapse0x2d1e4f0();
   input += synapse0x2d1e530();
   input += synapse0x2d1e570();
   input += synapse0x2d1e5b0();
   input += synapse0x2d1e5f0();
   input += synapse0x2d1e630();
   input += synapse0x2d1e670();
   input += synapse0x2d1e6b0();
   input += synapse0x2d1e140();
   input += synapse0x2d1e180();
   input += synapse0x2d1e800();
   input += synapse0x2d1e840();
   input += synapse0x2d1e880();
   input += synapse0x2d1e8c0();
   input += synapse0x2d1e900();
   input += synapse0x2d1e940();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d1dfb0() {
   double input = input0x2d1dfb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d1e980() {
   double input = 0.842516;
   input += synapse0x2d1ecc0();
   input += synapse0x2d1ed00();
   input += synapse0x2d1ed40();
   input += synapse0x2d1ed80();
   input += synapse0x2d1edc0();
   input += synapse0x2d1ee00();
   input += synapse0x2d1ee40();
   input += synapse0x2d1ee80();
   input += synapse0x2d1eec0();
   input += synapse0x2d1ef00();
   input += synapse0x2d1ef40();
   input += synapse0x2d1ef80();
   input += synapse0x2d1efc0();
   input += synapse0x2d1f000();
   input += synapse0x2d1f040();
   input += synapse0x2d1f080();
   input += synapse0x2d1eb10();
   input += synapse0x2d1eb50();
   input += synapse0x2d1f1d0();
   input += synapse0x2d1f210();
   input += synapse0x2d1f250();
   input += synapse0x2d1f290();
   input += synapse0x2d1f2d0();
   input += synapse0x2d1f310();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d1e980() {
   double input = input0x2d1e980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d1f350() {
   double input = 0.144833;
   input += synapse0x2d1f690();
   input += synapse0x2d1f6d0();
   input += synapse0x2d1f710();
   input += synapse0x2d1f750();
   input += synapse0x2d1f790();
   input += synapse0x2d1f7d0();
   input += synapse0x2d1f810();
   input += synapse0x2d1f850();
   input += synapse0x2d1f890();
   input += synapse0x2d1f8d0();
   input += synapse0x2d1f910();
   input += synapse0x2d1f950();
   input += synapse0x2d1f990();
   input += synapse0x2d1f9d0();
   input += synapse0x2d1fa10();
   input += synapse0x2d1fa50();
   input += synapse0x2d1f4e0();
   input += synapse0x2d1f520();
   input += synapse0x2d1fba0();
   input += synapse0x2d1fbe0();
   input += synapse0x2d1fc20();
   input += synapse0x2d1fc60();
   input += synapse0x2d1fca0();
   input += synapse0x2d1fce0();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d1f350() {
   double input = input0x2d1f350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d1fd20() {
   double input = -1.15672;
   input += synapse0x2d08790();
   input += synapse0x2d087d0();
   input += synapse0x2d08810();
   input += synapse0x2d08850();
   input += synapse0x2d08890();
   input += synapse0x2d088d0();
   input += synapse0x2d08910();
   input += synapse0x2d08950();
   input += synapse0x2d20470();
   input += synapse0x2d204b0();
   input += synapse0x2d204f0();
   input += synapse0x2d20530();
   input += synapse0x2d20570();
   input += synapse0x2d205b0();
   input += synapse0x2d205f0();
   input += synapse0x2d20630();
   input += synapse0x2d1feb0();
   input += synapse0x2d1fef0();
   input += synapse0x2d20780();
   input += synapse0x2d207c0();
   input += synapse0x2d20800();
   input += synapse0x2d20840();
   input += synapse0x2d20880();
   input += synapse0x2d208c0();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d1fd20() {
   double input = input0x2d1fd20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d20900() {
   double input = 0.990067;
   input += synapse0x2d20c40();
   input += synapse0x2d20c80();
   input += synapse0x2d20cc0();
   input += synapse0x2d20d00();
   input += synapse0x2d20d40();
   input += synapse0x2d20d80();
   input += synapse0x2d20dc0();
   input += synapse0x2d20e00();
   input += synapse0x2d20e40();
   input += synapse0x2d20e80();
   input += synapse0x2d20ec0();
   input += synapse0x2d20f00();
   input += synapse0x2d20f40();
   input += synapse0x2d20f80();
   input += synapse0x2d20fc0();
   input += synapse0x2d21000();
   input += synapse0x2d20a90();
   input += synapse0x2d20ad0();
   input += synapse0x2d21150();
   input += synapse0x2d21190();
   input += synapse0x2d211d0();
   input += synapse0x2d21210();
   input += synapse0x2d21250();
   input += synapse0x2d21290();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d20900() {
   double input = input0x2d20900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d212d0() {
   double input = -1.00532;
   input += synapse0x2d21610();
   input += synapse0x2d21650();
   input += synapse0x2d21690();
   input += synapse0x2d216d0();
   input += synapse0x2d21710();
   input += synapse0x2d21750();
   input += synapse0x2d21790();
   input += synapse0x2d217d0();
   input += synapse0x2d21810();
   input += synapse0x2d21850();
   input += synapse0x2d21890();
   input += synapse0x2d218d0();
   input += synapse0x2d21910();
   input += synapse0x2d21950();
   input += synapse0x2d21990();
   input += synapse0x2d219d0();
   input += synapse0x2d21460();
   input += synapse0x2d214a0();
   input += synapse0x2d11fd0();
   input += synapse0x2d12010();
   input += synapse0x2d12050();
   input += synapse0x2d12090();
   input += synapse0x2d120d0();
   input += synapse0x2d12110();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d212d0() {
   double input = input0x2d212d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d12150() {
   double input = -0.968936;
   input += synapse0x2d12490();
   input += synapse0x2d124d0();
   input += synapse0x2d12510();
   input += synapse0x2d12550();
   input += synapse0x2d12590();
   input += synapse0x2d125d0();
   input += synapse0x2d12610();
   input += synapse0x2d12650();
   input += synapse0x2d12690();
   input += synapse0x2d126d0();
   input += synapse0x2d12710();
   input += synapse0x2d12750();
   input += synapse0x2d12790();
   input += synapse0x2d127d0();
   input += synapse0x2d12810();
   input += synapse0x2d12850();
   input += synapse0x2d122e0();
   input += synapse0x2d12320();
   input += synapse0x2d129a0();
   input += synapse0x2d129e0();
   input += synapse0x2d12a20();
   input += synapse0x2d12a60();
   input += synapse0x2d12aa0();
   input += synapse0x2d12ae0();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d12150() {
   double input = input0x2d12150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d12b20() {
   double input = -3.17703;
   input += synapse0x2d12e60();
   input += synapse0x2d12ea0();
   input += synapse0x2d12ee0();
   input += synapse0x2d12f20();
   input += synapse0x2d12f60();
   input += synapse0x2d12fa0();
   input += synapse0x2d12fe0();
   input += synapse0x2d13020();
   input += synapse0x2d13060();
   input += synapse0x2d130a0();
   input += synapse0x2d130e0();
   input += synapse0x2d13120();
   input += synapse0x2d13160();
   input += synapse0x2d131a0();
   input += synapse0x2d131e0();
   input += synapse0x2d13220();
   input += synapse0x2d12cb0();
   input += synapse0x2d12cf0();
   input += synapse0x2d13370();
   input += synapse0x2d133b0();
   input += synapse0x2d133f0();
   input += synapse0x2d13430();
   input += synapse0x2d13470();
   input += synapse0x2d134b0();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d12b20() {
   double input = input0x2d12b20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d134f0() {
   double input = 2.25558;
   input += synapse0x2d13830();
   input += synapse0x2d13870();
   input += synapse0x2d138b0();
   input += synapse0x2d138f0();
   input += synapse0x2d13930();
   input += synapse0x2d13970();
   input += synapse0x2d139b0();
   input += synapse0x2d139f0();
   input += synapse0x2d13a30();
   input += synapse0x2d13a70();
   input += synapse0x2d13ab0();
   input += synapse0x2d13af0();
   input += synapse0x2d13b30();
   input += synapse0x2d13b70();
   input += synapse0x2d13bb0();
   input += synapse0x2d13bf0();
   input += synapse0x2d13680();
   input += synapse0x2d136c0();
   input += synapse0x2d13d40();
   input += synapse0x2d13d80();
   input += synapse0x2d13dc0();
   input += synapse0x2d13e00();
   input += synapse0x2d13e40();
   input += synapse0x2d13e80();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d134f0() {
   double input = input0x2d134f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d25b30() {
   double input = 0.371655;
   input += synapse0x2d25d50();
   input += synapse0x2d25d90();
   input += synapse0x2d25dd0();
   input += synapse0x2d25e10();
   input += synapse0x2d25e50();
   input += synapse0x2d25e90();
   input += synapse0x2d25ed0();
   input += synapse0x2d25f10();
   input += synapse0x2d25f50();
   input += synapse0x2d25f90();
   input += synapse0x2d25fd0();
   input += synapse0x2d26010();
   input += synapse0x2d26050();
   input += synapse0x2d26090();
   input += synapse0x2d260d0();
   input += synapse0x2d26110();
   input += synapse0x2d13ec0();
   input += synapse0x2d13f00();
   input += synapse0x2d26260();
   input += synapse0x2d262a0();
   input += synapse0x2d262e0();
   input += synapse0x2d26320();
   input += synapse0x2d26360();
   input += synapse0x2d263a0();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d25b30() {
   double input = input0x2d25b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d263e0() {
   double input = 0.245937;
   input += synapse0x2d26720();
   input += synapse0x2d26760();
   input += synapse0x2d267a0();
   input += synapse0x2d267e0();
   input += synapse0x2d26820();
   input += synapse0x2d26860();
   input += synapse0x2d268a0();
   input += synapse0x2d268e0();
   input += synapse0x2d26920();
   input += synapse0x2d26960();
   input += synapse0x2d269a0();
   input += synapse0x2d269e0();
   input += synapse0x2d26a20();
   input += synapse0x2d26a60();
   input += synapse0x2d26aa0();
   input += synapse0x2d26ae0();
   input += synapse0x2d26570();
   input += synapse0x2d265b0();
   input += synapse0x2d26c30();
   input += synapse0x2d26c70();
   input += synapse0x2d26cb0();
   input += synapse0x2d26cf0();
   input += synapse0x2d26d30();
   input += synapse0x2d26d70();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d263e0() {
   double input = input0x2d263e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d26db0() {
   double input = 1.03344;
   input += synapse0x2d270f0();
   input += synapse0x2d27130();
   input += synapse0x2d27170();
   input += synapse0x2d271b0();
   input += synapse0x2d271f0();
   input += synapse0x2d27230();
   input += synapse0x2d27270();
   input += synapse0x2d272b0();
   input += synapse0x2d272f0();
   input += synapse0x2d27330();
   input += synapse0x2d27370();
   input += synapse0x2d273b0();
   input += synapse0x2d273f0();
   input += synapse0x2d27430();
   input += synapse0x2d27470();
   input += synapse0x2d274b0();
   input += synapse0x2d26f40();
   input += synapse0x2d26f80();
   input += synapse0x2d27600();
   input += synapse0x2d27640();
   input += synapse0x2d27680();
   input += synapse0x2d276c0();
   input += synapse0x2d27700();
   input += synapse0x2d27740();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d26db0() {
   double input = input0x2d26db0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d27780() {
   double input = -3.51393;
   input += synapse0x2d27ac0();
   input += synapse0x2d27b00();
   input += synapse0x2d27b40();
   input += synapse0x2d27b80();
   input += synapse0x2d27bc0();
   input += synapse0x2d27c00();
   input += synapse0x2d27c40();
   input += synapse0x2d27c80();
   input += synapse0x2d27cc0();
   input += synapse0x2d27d00();
   input += synapse0x2d27d40();
   input += synapse0x2d27d80();
   input += synapse0x2d27dc0();
   input += synapse0x2d27e00();
   input += synapse0x2d27e40();
   input += synapse0x2d27e80();
   input += synapse0x2d27910();
   input += synapse0x2d27950();
   input += synapse0x2d27fd0();
   input += synapse0x2d28010();
   input += synapse0x2d28050();
   input += synapse0x2d28090();
   input += synapse0x2d280d0();
   input += synapse0x2d28110();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d27780() {
   double input = input0x2d27780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d2e980() {
   double input = -0.86889;
   input += synapse0x2ac8010();
   input += synapse0x2ac8050();
   input += synapse0x2d05bc0();
   input += synapse0x2d05c00();
   input += synapse0x2d06590();
   input += synapse0x2d065d0();
   input += synapse0x2d07360();
   input += synapse0x2d073a0();
   input += synapse0x2d07d30();
   input += synapse0x2d07d70();
   input += synapse0x2d08700();
   input += synapse0x2d08740();
   input += synapse0x2d091e0();
   input += synapse0x2d09220();
   input += synapse0x2d09bb0();
   input += synapse0x2d09bf0();
   input += synapse0x2d06c90();
   input += synapse0x2d06cd0();
   input += synapse0x2d0b760();
   input += synapse0x2d0b7a0();
   input += synapse0x2d0c130();
   input += synapse0x2d0c170();
   input += synapse0x2d0cb00();
   input += synapse0x2d0cb40();
   input += synapse0x2d0d4d0();
   input += synapse0x2d0d510();
   input += synapse0x2d01670();
   input += synapse0x2d016b0();
   input += synapse0x2d0f5c0();
   input += synapse0x2d0f600();
   input += synapse0x2d0ff90();
   input += synapse0x2d0ffd0();
   input += synapse0x2d10960();
   input += synapse0x2d109a0();
   input += synapse0x2d11330();
   input += synapse0x2d11370();
   input += synapse0x2d11d00();
   input += synapse0x2d11d40();
   input += synapse0x2d0a850();
   input += synapse0x2d0a890();
   input += synapse0x2d14100();
   input += synapse0x2d14140();
   input += synapse0x2d14a90();
   input += synapse0x2d14ad0();
   input += synapse0x2d15460();
   input += synapse0x2d154a0();
   input += synapse0x2d15e30();
   input += synapse0x2d15e70();
   input += synapse0x2d16800();
   input += synapse0x2d16840();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d2e980() {
   double input = input0x2d2e980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d2ed20() {
   double input = 0.739735;
   input += synapse0x2d18f40();
   input += synapse0x2d18f80();
   input += synapse0x2d0e500();
   input += synapse0x2d0e540();
   input += synapse0x2d1bb20();
   input += synapse0x2d1bb60();
   input += synapse0x2d1c4f0();
   input += synapse0x2d1c530();
   input += synapse0x2d1cec0();
   input += synapse0x2d1cf00();
   input += synapse0x2d1d890();
   input += synapse0x2d1d8d0();
   input += synapse0x2d1e260();
   input += synapse0x2d1e2a0();
   input += synapse0x2d1ec30();
   input += synapse0x2d1ec70();
   input += synapse0x2d1f600();
   input += synapse0x2d1f640();
   input += synapse0x2d1ffd0();
   input += synapse0x2d20010();
   input += synapse0x2d20bb0();
   input += synapse0x2d20bf0();
   input += synapse0x2d21580();
   input += synapse0x2d215c0();
   input += synapse0x2d12400();
   input += synapse0x2d12440();
   input += synapse0x2d12dd0();
   input += synapse0x2d12e10();
   input += synapse0x2d137a0();
   input += synapse0x2d137e0();
   input += synapse0x2d25cc0();
   input += synapse0x2d25d00();
   input += synapse0x2d26690();
   input += synapse0x2d266d0();
   input += synapse0x2d27060();
   input += synapse0x2d270a0();
   input += synapse0x2d27a30();
   input += synapse0x2d27a70();
   input += synapse0x2d03920();
   input += synapse0x2d03960();
   input += synapse0x2d171d0();
   input += synapse0x2d17210();
   input += synapse0x2d28150();
   input += synapse0x2d28190();
   input += synapse0x2d281d0();
   input += synapse0x2d28210();
   input += synapse0x2d2f0c0();
   input += synapse0x2d2f100();
   input += synapse0x2d2f140();
   input += synapse0x2d2f180();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d2ed20() {
   double input = input0x2d2ed20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d2f1c0() {
   double input = 0.0259405;
   input += synapse0x2d2f500();
   input += synapse0x2d2f540();
   input += synapse0x2d2f580();
   input += synapse0x2d2f5c0();
   input += synapse0x2d2f600();
   input += synapse0x2d2f640();
   input += synapse0x2d2f680();
   input += synapse0x2d2f6c0();
   input += synapse0x2d2f700();
   input += synapse0x2d2f740();
   input += synapse0x2d2f780();
   input += synapse0x2d2f7c0();
   input += synapse0x2d2f800();
   input += synapse0x2d2f840();
   input += synapse0x2d2f880();
   input += synapse0x2d2f8c0();
   input += synapse0x2d2f350();
   input += synapse0x2d2f390();
   input += synapse0x2d2fa10();
   input += synapse0x2d2fa50();
   input += synapse0x2d2fa90();
   input += synapse0x2d2fad0();
   input += synapse0x2d2fb10();
   input += synapse0x2d2fb50();
   input += synapse0x2d2fb90();
   input += synapse0x2d2fbd0();
   input += synapse0x2d2fc10();
   input += synapse0x2d2fc50();
   input += synapse0x2d2fc90();
   input += synapse0x2d2fcd0();
   input += synapse0x2d2fd10();
   input += synapse0x2d2fd50();
   input += synapse0x2d2f900();
   input += synapse0x2d2f940();
   input += synapse0x2d2f980();
   input += synapse0x2d2f9c0();
   input += synapse0x2d2ffa0();
   input += synapse0x2d2ffe0();
   input += synapse0x2d30020();
   input += synapse0x2d30060();
   input += synapse0x2d300a0();
   input += synapse0x2d300e0();
   input += synapse0x2d30120();
   input += synapse0x2d30160();
   input += synapse0x2d301a0();
   input += synapse0x2d301e0();
   input += synapse0x2d30220();
   input += synapse0x2d30260();
   input += synapse0x2d302a0();
   input += synapse0x2d302e0();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d2f1c0() {
   double input = input0x2d2f1c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d30320() {
   double input = 0.384476;
   input += synapse0x2d30660();
   input += synapse0x2d306a0();
   input += synapse0x2d306e0();
   input += synapse0x2d30720();
   input += synapse0x2d30760();
   input += synapse0x2d307a0();
   input += synapse0x2d307e0();
   input += synapse0x2d30820();
   input += synapse0x2d30860();
   input += synapse0x2d308a0();
   input += synapse0x2d308e0();
   input += synapse0x2d30920();
   input += synapse0x2d30960();
   input += synapse0x2d309a0();
   input += synapse0x2d309e0();
   input += synapse0x2d30a20();
   input += synapse0x2d304b0();
   input += synapse0x2d304f0();
   input += synapse0x2d30b70();
   input += synapse0x2d30bb0();
   input += synapse0x2d30bf0();
   input += synapse0x2d30c30();
   input += synapse0x2d30c70();
   input += synapse0x2d30cb0();
   input += synapse0x2d30cf0();
   input += synapse0x2d30d30();
   input += synapse0x2d30d70();
   input += synapse0x2d30db0();
   input += synapse0x2d30df0();
   input += synapse0x2d30e30();
   input += synapse0x2d30e70();
   input += synapse0x2d30eb0();
   input += synapse0x2d30a60();
   input += synapse0x2d30aa0();
   input += synapse0x2d30ae0();
   input += synapse0x2d30b20();
   input += synapse0x2d31100();
   input += synapse0x2d31140();
   input += synapse0x2d31180();
   input += synapse0x2d311c0();
   input += synapse0x2d31200();
   input += synapse0x2d31240();
   input += synapse0x2d31280();
   input += synapse0x2d312c0();
   input += synapse0x2d31300();
   input += synapse0x2d31340();
   input += synapse0x2d31380();
   input += synapse0x2d313c0();
   input += synapse0x2d31400();
   input += synapse0x2d31440();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d30320() {
   double input = input0x2d30320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d31480() {
   double input = -0.278824;
   input += synapse0x2d317c0();
   input += synapse0x2d31800();
   input += synapse0x2d31840();
   input += synapse0x2d31880();
   input += synapse0x2d318c0();
   input += synapse0x2d31900();
   input += synapse0x2d31940();
   input += synapse0x2d31980();
   input += synapse0x2d319c0();
   input += synapse0x2d31a00();
   input += synapse0x2d31a40();
   input += synapse0x2d31a80();
   input += synapse0x2d31ac0();
   input += synapse0x2d31b00();
   input += synapse0x2d31b40();
   input += synapse0x2d31b80();
   input += synapse0x2d31610();
   input += synapse0x2d31650();
   input += synapse0x2d31cd0();
   input += synapse0x2d31d10();
   input += synapse0x2d31d50();
   input += synapse0x2d31d90();
   input += synapse0x2d31dd0();
   input += synapse0x2d31e10();
   input += synapse0x2d31e50();
   input += synapse0x2d31e90();
   input += synapse0x2d31ed0();
   input += synapse0x2d31f10();
   input += synapse0x2d31f50();
   input += synapse0x2d31f90();
   input += synapse0x2d31fd0();
   input += synapse0x2d32010();
   input += synapse0x2d31bc0();
   input += synapse0x2d31c00();
   input += synapse0x2d31c40();
   input += synapse0x2d31c80();
   input += synapse0x2d32260();
   input += synapse0x2d322a0();
   input += synapse0x2d322e0();
   input += synapse0x2d32320();
   input += synapse0x2d32360();
   input += synapse0x2d323a0();
   input += synapse0x2d323e0();
   input += synapse0x2d32420();
   input += synapse0x2d32460();
   input += synapse0x2d324a0();
   input += synapse0x2d324e0();
   input += synapse0x2d32520();
   input += synapse0x2d32560();
   input += synapse0x2d325a0();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d31480() {
   double input = input0x2d31480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRdR::input0x2d325e0() {
   double input = 2.92067;
   input += synapse0x2d32800();
   input += synapse0x2d32840();
   input += synapse0x2d32880();
   input += synapse0x2d328c0();
   input += synapse0x2d32900();
   return input;
}

double NNfunction-ss_uRdR::neuron0x2d325e0() {
   double input = input0x2d325e0();
   return (input * 1)+0;
}

double NNfunction-ss_uRdR::synapse0x2cfe590() {
   return (neuron0x2cfe6d0()*-0.14847);
}

double NNfunction-ss_uRdR::synapse0x2cfe5d0() {
   return (neuron0x2cfea10()*-0.375446);
}

double NNfunction-ss_uRdR::synapse0x2d039b0() {
   return (neuron0x2cfed50()*0.280091);
}

double NNfunction-ss_uRdR::synapse0x2d039f0() {
   return (neuron0x2cff090()*0.637631);
}

double NNfunction-ss_uRdR::synapse0x2d03a30() {
   return (neuron0x2cff3d0()*-0.547849);
}

double NNfunction-ss_uRdR::synapse0x2d03a70() {
   return (neuron0x2cff710()*-0.187246);
}

double NNfunction-ss_uRdR::synapse0x2d03ab0() {
   return (neuron0x2cffa50()*-0.07468);
}

double NNfunction-ss_uRdR::synapse0x2d03af0() {
   return (neuron0x2cffd90()*-0.0611877);
}

double NNfunction-ss_uRdR::synapse0x2d03b30() {
   return (neuron0x2d000d0()*-0.231837);
}

double NNfunction-ss_uRdR::synapse0x2d03b70() {
   return (neuron0x2d00410()*-0.489416);
}

double NNfunction-ss_uRdR::synapse0x2d03bb0() {
   return (neuron0x2d00750()*0.683558);
}

double NNfunction-ss_uRdR::synapse0x2d03bf0() {
   return (neuron0x2d00a90()*-0.033808);
}

double NNfunction-ss_uRdR::synapse0x2d03c30() {
   return (neuron0x2d00dd0()*-0.0730463);
}

double NNfunction-ss_uRdR::synapse0x2d03c70() {
   return (neuron0x2d01110()*0.250542);
}

double NNfunction-ss_uRdR::synapse0x2d03cb0() {
   return (neuron0x2d01450()*-0.0692585);
}

double NNfunction-ss_uRdR::synapse0x2d03cf0() {
   return (neuron0x2d01790()*0.0895292);
}

double NNfunction-ss_uRdR::synapse0x2cfe500() {
   return (neuron0x2d01ad0()*-0.204304);
}

double NNfunction-ss_uRdR::synapse0x2cfe540() {
   return (neuron0x2d02030()*0.15514);
}

double NNfunction-ss_uRdR::synapse0x2ab98a0() {
   return (neuron0x2d02250()*1.0326);
}

double NNfunction-ss_uRdR::synapse0x2ab98e0() {
   return (neuron0x2d02590()*-0.291942);
}

double NNfunction-ss_uRdR::synapse0x2d03f50() {
   return (neuron0x2d028d0()*-0.509225);
}

double NNfunction-ss_uRdR::synapse0x2d03f90() {
   return (neuron0x2d02c10()*0.442228);
}

double NNfunction-ss_uRdR::synapse0x2d03fd0() {
   return (neuron0x2d02f50()*-0.158168);
}

double NNfunction-ss_uRdR::synapse0x2d04010() {
   return (neuron0x2d03290()*-0.195165);
}

double NNfunction-ss_uRdR::synapse0x2d04390() {
   return (neuron0x2cfe6d0()*-0.0200408);
}

double NNfunction-ss_uRdR::synapse0x2d043d0() {
   return (neuron0x2cfea10()*0.00490084);
}

double NNfunction-ss_uRdR::synapse0x2d04410() {
   return (neuron0x2cfed50()*0.0164901);
}

double NNfunction-ss_uRdR::synapse0x2d04450() {
   return (neuron0x2cff090()*-0.134946);
}

double NNfunction-ss_uRdR::synapse0x2d04490() {
   return (neuron0x2cff3d0()*0.0091207);
}

double NNfunction-ss_uRdR::synapse0x2d044d0() {
   return (neuron0x2cff710()*0.0593054);
}

double NNfunction-ss_uRdR::synapse0x2d04510() {
   return (neuron0x2cffa50()*0.0414667);
}

double NNfunction-ss_uRdR::synapse0x2d04550() {
   return (neuron0x2cffd90()*-0.00485603);
}

double NNfunction-ss_uRdR::synapse0x2d04590() {
   return (neuron0x2d000d0()*-0.0462074);
}

double NNfunction-ss_uRdR::synapse0x2d03e40() {
   return (neuron0x2d00410()*0.00251936);
}

double NNfunction-ss_uRdR::synapse0x2d03e80() {
   return (neuron0x2d00750()*-0.0129117);
}

double NNfunction-ss_uRdR::synapse0x2d03ec0() {
   return (neuron0x2d00a90()*-0.0212223);
}

double NNfunction-ss_uRdR::synapse0x2d03f00() {
   return (neuron0x2d00dd0()*-0.0533504);
}

double NNfunction-ss_uRdR::synapse0x2d047e0() {
   return (neuron0x2d01110()*0.00731344);
}

double NNfunction-ss_uRdR::synapse0x2d04820() {
   return (neuron0x2d01450()*-0.640911);
}

double NNfunction-ss_uRdR::synapse0x2d04860() {
   return (neuron0x2d01790()*-0.0135802);
}

double NNfunction-ss_uRdR::synapse0x2d041e0() {
   return (neuron0x2d01ad0()*0.00771409);
}

double NNfunction-ss_uRdR::synapse0x2d04220() {
   return (neuron0x2d02030()*1.86638);
}

double NNfunction-ss_uRdR::synapse0x2d049b0() {
   return (neuron0x2d02250()*-0.05857);
}

double NNfunction-ss_uRdR::synapse0x2d049f0() {
   return (neuron0x2d02590()*-0.00631034);
}

double NNfunction-ss_uRdR::synapse0x2d04a30() {
   return (neuron0x2d028d0()*-0.0173434);
}

double NNfunction-ss_uRdR::synapse0x2d04a70() {
   return (neuron0x2d02c10()*0.010747);
}

double NNfunction-ss_uRdR::synapse0x2d04ab0() {
   return (neuron0x2d02f50()*-0.0286892);
}

double NNfunction-ss_uRdR::synapse0x2d04af0() {
   return (neuron0x2d03290()*0.0439407);
}

double NNfunction-ss_uRdR::synapse0x2d04e70() {
   return (neuron0x2cfe6d0()*0.0872915);
}

double NNfunction-ss_uRdR::synapse0x2d04eb0() {
   return (neuron0x2cfea10()*-1.18462);
}

double NNfunction-ss_uRdR::synapse0x2d04ef0() {
   return (neuron0x2cfed50()*0.332929);
}

double NNfunction-ss_uRdR::synapse0x2d04f30() {
   return (neuron0x2cff090()*-0.273519);
}

double NNfunction-ss_uRdR::synapse0x2d04f70() {
   return (neuron0x2cff3d0()*0.375446);
}

double NNfunction-ss_uRdR::synapse0x2d04fb0() {
   return (neuron0x2cff710()*-0.25229);
}

double NNfunction-ss_uRdR::synapse0x2d04ff0() {
   return (neuron0x2cffa50()*0.940201);
}

double NNfunction-ss_uRdR::synapse0x2d05030() {
   return (neuron0x2cffd90()*0.792503);
}

double NNfunction-ss_uRdR::synapse0x2d05070() {
   return (neuron0x2d000d0()*0.0626865);
}

double NNfunction-ss_uRdR::synapse0x2d050b0() {
   return (neuron0x2d00410()*-0.0381237);
}

double NNfunction-ss_uRdR::synapse0x2d050f0() {
   return (neuron0x2d00750()*-0.356087);
}

double NNfunction-ss_uRdR::synapse0x2d05130() {
   return (neuron0x2d00a90()*0.598987);
}

double NNfunction-ss_uRdR::synapse0x2d05170() {
   return (neuron0x2d00dd0()*0.312787);
}

double NNfunction-ss_uRdR::synapse0x2d051b0() {
   return (neuron0x2d01110()*0.515718);
}

double NNfunction-ss_uRdR::synapse0x2d051f0() {
   return (neuron0x2d01450()*-0.472904);
}

double NNfunction-ss_uRdR::synapse0x2d05230() {
   return (neuron0x2d01790()*1.11869);
}

double NNfunction-ss_uRdR::synapse0x2d04cc0() {
   return (neuron0x2d01ad0()*0.237987);
}

double NNfunction-ss_uRdR::synapse0x2ab8a00() {
   return (neuron0x2d02030()*-0.854595);
}

double NNfunction-ss_uRdR::synapse0x2d04d00() {
   return (neuron0x2d02250()*-0.960189);
}

double NNfunction-ss_uRdR::synapse0x2ab9f50() {
   return (neuron0x2d02590()*-0.14164);
}

double NNfunction-ss_uRdR::synapse0x2ac7820() {
   return (neuron0x2d028d0()*0.254039);
}

double NNfunction-ss_uRdR::synapse0x2ac7860() {
   return (neuron0x2d02c10()*-0.860328);
}

double NNfunction-ss_uRdR::synapse0x2ced760() {
   return (neuron0x2d02f50()*0.33194);
}

double NNfunction-ss_uRdR::synapse0x2ced7a0() {
   return (neuron0x2d03290()*-0.292022);
}

double NNfunction-ss_uRdR::synapse0x2ced7e0() {
   return (neuron0x2cfe6d0()*-0.00463944);
}

double NNfunction-ss_uRdR::synapse0x2d04760() {
   return (neuron0x2cfea10()*0.0164728);
}

double NNfunction-ss_uRdR::synapse0x2d047a0() {
   return (neuron0x2cfed50()*-0.0464361);
}

double NNfunction-ss_uRdR::synapse0x2d05380() {
   return (neuron0x2cff090()*-4.41282);
}

double NNfunction-ss_uRdR::synapse0x2d053c0() {
   return (neuron0x2cff3d0()*-0.0298937);
}

double NNfunction-ss_uRdR::synapse0x2d05400() {
   return (neuron0x2cff710()*0.00323022);
}

double NNfunction-ss_uRdR::synapse0x2d05440() {
   return (neuron0x2cffa50()*0.00332809);
}

double NNfunction-ss_uRdR::synapse0x2d05480() {
   return (neuron0x2cffd90()*0.00171294);
}

double NNfunction-ss_uRdR::synapse0x2d054c0() {
   return (neuron0x2d000d0()*-0.0141046);
}

double NNfunction-ss_uRdR::synapse0x2d05500() {
   return (neuron0x2d00410()*0.0152966);
}

double NNfunction-ss_uRdR::synapse0x2d05540() {
   return (neuron0x2d00750()*-0.0151343);
}

double NNfunction-ss_uRdR::synapse0x2d05580() {
   return (neuron0x2d00a90()*0.00148088);
}

double NNfunction-ss_uRdR::synapse0x2d055c0() {
   return (neuron0x2d00dd0()*-0.0251108);
}

double NNfunction-ss_uRdR::synapse0x2d05600() {
   return (neuron0x2d01110()*-0.0180978);
}

double NNfunction-ss_uRdR::synapse0x2d05640() {
   return (neuron0x2d01450()*-0.015216);
}

double NNfunction-ss_uRdR::synapse0x2d05680() {
   return (neuron0x2d01790()*-0.0220937);
}

double NNfunction-ss_uRdR::synapse0x2cfe610() {
   return (neuron0x2d01ad0()*-0.0177708);
}

double NNfunction-ss_uRdR::synapse0x2cfe650() {
   return (neuron0x2d02030()*0.505686);
}

double NNfunction-ss_uRdR::synapse0x2cfe690() {
   return (neuron0x2d02250()*0.023444);
}

double NNfunction-ss_uRdR::synapse0x2d057d0() {
   return (neuron0x2d02590()*-0.00786405);
}

double NNfunction-ss_uRdR::synapse0x2d05810() {
   return (neuron0x2d028d0()*0.0311645);
}

double NNfunction-ss_uRdR::synapse0x2d05850() {
   return (neuron0x2d02c10()*0.00308919);
}

double NNfunction-ss_uRdR::synapse0x2d05890() {
   return (neuron0x2d02f50()*0.00072622);
}

double NNfunction-ss_uRdR::synapse0x2d058d0() {
   return (neuron0x2d03290()*0.0275092);
}

double NNfunction-ss_uRdR::synapse0x2d05c50() {
   return (neuron0x2cfe6d0()*0.179142);
}

double NNfunction-ss_uRdR::synapse0x2d05c90() {
   return (neuron0x2cfea10()*0.360855);
}

double NNfunction-ss_uRdR::synapse0x2d05cd0() {
   return (neuron0x2cfed50()*-0.392984);
}

double NNfunction-ss_uRdR::synapse0x2d05d10() {
   return (neuron0x2cff090()*0.514934);
}

double NNfunction-ss_uRdR::synapse0x2d05d50() {
   return (neuron0x2cff3d0()*0.21364);
}

double NNfunction-ss_uRdR::synapse0x2d05d90() {
   return (neuron0x2cff710()*0.0803496);
}

double NNfunction-ss_uRdR::synapse0x2d05dd0() {
   return (neuron0x2cffa50()*-0.207435);
}

double NNfunction-ss_uRdR::synapse0x2d05e10() {
   return (neuron0x2cffd90()*0.147345);
}

double NNfunction-ss_uRdR::synapse0x2d05e50() {
   return (neuron0x2d000d0()*-0.0293197);
}

double NNfunction-ss_uRdR::synapse0x2d05e90() {
   return (neuron0x2d00410()*-0.00491369);
}

double NNfunction-ss_uRdR::synapse0x2d05ed0() {
   return (neuron0x2d00750()*-0.214766);
}

double NNfunction-ss_uRdR::synapse0x2d05f10() {
   return (neuron0x2d00a90()*1.12474);
}

double NNfunction-ss_uRdR::synapse0x2d05f50() {
   return (neuron0x2d00dd0()*0.472507);
}

double NNfunction-ss_uRdR::synapse0x2d05f90() {
   return (neuron0x2d01110()*-0.487096);
}

double NNfunction-ss_uRdR::synapse0x2d05fd0() {
   return (neuron0x2d01450()*-1.29996);
}

double NNfunction-ss_uRdR::synapse0x2d06010() {
   return (neuron0x2d01790()*0.109536);
}

double NNfunction-ss_uRdR::synapse0x2d05aa0() {
   return (neuron0x2d01ad0()*-0.372558);
}

double NNfunction-ss_uRdR::synapse0x2d05ae0() {
   return (neuron0x2d02030()*-1.09905);
}

double NNfunction-ss_uRdR::synapse0x2d06160() {
   return (neuron0x2d02250()*0.496895);
}

double NNfunction-ss_uRdR::synapse0x2d061a0() {
   return (neuron0x2d02590()*-0.196171);
}

double NNfunction-ss_uRdR::synapse0x2d061e0() {
   return (neuron0x2d028d0()*-0.684368);
}

double NNfunction-ss_uRdR::synapse0x2d06220() {
   return (neuron0x2d02c10()*-0.344665);
}

double NNfunction-ss_uRdR::synapse0x2d06260() {
   return (neuron0x2d02f50()*0.616468);
}

double NNfunction-ss_uRdR::synapse0x2d062a0() {
   return (neuron0x2d03290()*0.106332);
}

double NNfunction-ss_uRdR::synapse0x2d06620() {
   return (neuron0x2cfe6d0()*0.151822);
}

double NNfunction-ss_uRdR::synapse0x2d06660() {
   return (neuron0x2cfea10()*0.0374164);
}

double NNfunction-ss_uRdR::synapse0x2d066a0() {
   return (neuron0x2cfed50()*-0.205934);
}

double NNfunction-ss_uRdR::synapse0x2d066e0() {
   return (neuron0x2cff090()*-0.72102);
}

double NNfunction-ss_uRdR::synapse0x2d06720() {
   return (neuron0x2cff3d0()*-0.151219);
}

double NNfunction-ss_uRdR::synapse0x2d06760() {
   return (neuron0x2cff710()*-0.320162);
}

double NNfunction-ss_uRdR::synapse0x2d067a0() {
   return (neuron0x2cffa50()*-0.206473);
}

double NNfunction-ss_uRdR::synapse0x2d067e0() {
   return (neuron0x2cffd90()*-0.0396869);
}

double NNfunction-ss_uRdR::synapse0x2d06820() {
   return (neuron0x2d000d0()*-0.0597761);
}

double NNfunction-ss_uRdR::synapse0x2ac7b70() {
   return (neuron0x2d00410()*-0.127367);
}

double NNfunction-ss_uRdR::synapse0x2ac7bb0() {
   return (neuron0x2d00750()*-0.0915095);
}

double NNfunction-ss_uRdR::synapse0x2ac7bf0() {
   return (neuron0x2d00a90()*-0.0492859);
}

double NNfunction-ss_uRdR::synapse0x2ac7c30() {
   return (neuron0x2d00dd0()*0.109723);
}

double NNfunction-ss_uRdR::synapse0x2ac7c70() {
   return (neuron0x2d01110()*0.0734871);
}

double NNfunction-ss_uRdR::synapse0x2ac7cb0() {
   return (neuron0x2d01450()*0.614287);
}

double NNfunction-ss_uRdR::synapse0x2ac7cf0() {
   return (neuron0x2d01790()*-0.161494);
}

double NNfunction-ss_uRdR::synapse0x2d06470() {
   return (neuron0x2d01ad0()*-0.18696);
}

double NNfunction-ss_uRdR::synapse0x2d064b0() {
   return (neuron0x2d02030()*0.573298);
}

double NNfunction-ss_uRdR::synapse0x2ac7e40() {
   return (neuron0x2d02250()*0.0705165);
}

double NNfunction-ss_uRdR::synapse0x2ac7e80() {
   return (neuron0x2d02590()*-0.0775446);
}

double NNfunction-ss_uRdR::synapse0x2ac7ec0() {
   return (neuron0x2d028d0()*-0.0729403);
}

double NNfunction-ss_uRdR::synapse0x2ac7f00() {
   return (neuron0x2d02c10()*0.0420157);
}

double NNfunction-ss_uRdR::synapse0x2ac7f40() {
   return (neuron0x2d02f50()*-0.00587231);
}

double NNfunction-ss_uRdR::synapse0x2d07070() {
   return (neuron0x2d03290()*-0.0733329);
}

double NNfunction-ss_uRdR::synapse0x2d073f0() {
   return (neuron0x2cfe6d0()*0.104349);
}

double NNfunction-ss_uRdR::synapse0x2d07430() {
   return (neuron0x2cfea10()*-0.0163261);
}

double NNfunction-ss_uRdR::synapse0x2d07470() {
   return (neuron0x2cfed50()*-0.0271947);
}

double NNfunction-ss_uRdR::synapse0x2d074b0() {
   return (neuron0x2cff090()*0.0794316);
}

double NNfunction-ss_uRdR::synapse0x2d074f0() {
   return (neuron0x2cff3d0()*0.0302276);
}

double NNfunction-ss_uRdR::synapse0x2d07530() {
   return (neuron0x2cff710()*0.175797);
}

double NNfunction-ss_uRdR::synapse0x2d07570() {
   return (neuron0x2cffa50()*-0.0203655);
}

double NNfunction-ss_uRdR::synapse0x2d075b0() {
   return (neuron0x2cffd90()*0.157788);
}

double NNfunction-ss_uRdR::synapse0x2d075f0() {
   return (neuron0x2d000d0()*-0.0500047);
}

double NNfunction-ss_uRdR::synapse0x2d07630() {
   return (neuron0x2d00410()*-0.0281594);
}

double NNfunction-ss_uRdR::synapse0x2d07670() {
   return (neuron0x2d00750()*-0.22092);
}

double NNfunction-ss_uRdR::synapse0x2d076b0() {
   return (neuron0x2d00a90()*0.117003);
}

double NNfunction-ss_uRdR::synapse0x2d076f0() {
   return (neuron0x2d00dd0()*-0.142519);
}

double NNfunction-ss_uRdR::synapse0x2d07730() {
   return (neuron0x2d01110()*0.0729314);
}

double NNfunction-ss_uRdR::synapse0x2d07770() {
   return (neuron0x2d01450()*-2.24424);
}

double NNfunction-ss_uRdR::synapse0x2d077b0() {
   return (neuron0x2d01790()*0.200552);
}

double NNfunction-ss_uRdR::synapse0x2d07240() {
   return (neuron0x2d01ad0()*0.0647272);
}

double NNfunction-ss_uRdR::synapse0x2d07280() {
   return (neuron0x2d02030()*1.25393);
}

double NNfunction-ss_uRdR::synapse0x2d07900() {
   return (neuron0x2d02250()*0.234444);
}

double NNfunction-ss_uRdR::synapse0x2d07940() {
   return (neuron0x2d02590()*0.0976397);
}

double NNfunction-ss_uRdR::synapse0x2d07980() {
   return (neuron0x2d028d0()*0.139087);
}

double NNfunction-ss_uRdR::synapse0x2d079c0() {
   return (neuron0x2d02c10()*0.185227);
}

double NNfunction-ss_uRdR::synapse0x2d07a00() {
   return (neuron0x2d02f50()*-0.226374);
}

double NNfunction-ss_uRdR::synapse0x2d07a40() {
   return (neuron0x2d03290()*0.185467);
}

double NNfunction-ss_uRdR::synapse0x2d07dc0() {
   return (neuron0x2cfe6d0()*0.334389);
}

double NNfunction-ss_uRdR::synapse0x2d07e00() {
   return (neuron0x2cfea10()*-0.528778);
}

double NNfunction-ss_uRdR::synapse0x2d07e40() {
   return (neuron0x2cfed50()*0.467707);
}

double NNfunction-ss_uRdR::synapse0x2d07e80() {
   return (neuron0x2cff090()*-0.425124);
}

double NNfunction-ss_uRdR::synapse0x2d07ec0() {
   return (neuron0x2cff3d0()*0.57142);
}

double NNfunction-ss_uRdR::synapse0x2d07f00() {
   return (neuron0x2cff710()*-0.398988);
}

double NNfunction-ss_uRdR::synapse0x2d07f40() {
   return (neuron0x2cffa50()*0.174744);
}

double NNfunction-ss_uRdR::synapse0x2d07f80() {
   return (neuron0x2cffd90()*0.0230456);
}

double NNfunction-ss_uRdR::synapse0x2d07fc0() {
   return (neuron0x2d000d0()*0.821499);
}

double NNfunction-ss_uRdR::synapse0x2d08000() {
   return (neuron0x2d00410()*0.528103);
}

double NNfunction-ss_uRdR::synapse0x2d08040() {
   return (neuron0x2d00750()*0.32511);
}

double NNfunction-ss_uRdR::synapse0x2d08080() {
   return (neuron0x2d00a90()*-0.373877);
}

double NNfunction-ss_uRdR::synapse0x2d080c0() {
   return (neuron0x2d00dd0()*0.106144);
}

double NNfunction-ss_uRdR::synapse0x2d08100() {
   return (neuron0x2d01110()*-0.131112);
}

double NNfunction-ss_uRdR::synapse0x2d08140() {
   return (neuron0x2d01450()*-1.13549);
}

double NNfunction-ss_uRdR::synapse0x2d08180() {
   return (neuron0x2d01790()*0.0509726);
}

double NNfunction-ss_uRdR::synapse0x2d07c10() {
   return (neuron0x2d01ad0()*-0.200078);
}

double NNfunction-ss_uRdR::synapse0x2d07c50() {
   return (neuron0x2d02030()*-0.533996);
}

double NNfunction-ss_uRdR::synapse0x2d082d0() {
   return (neuron0x2d02250()*0.131486);
}

double NNfunction-ss_uRdR::synapse0x2d08310() {
   return (neuron0x2d02590()*-0.841298);
}

double NNfunction-ss_uRdR::synapse0x2d08350() {
   return (neuron0x2d028d0()*-0.357298);
}

double NNfunction-ss_uRdR::synapse0x2d08390() {
   return (neuron0x2d02c10()*0.318979);
}

double NNfunction-ss_uRdR::synapse0x2d083d0() {
   return (neuron0x2d02f50()*0.0301822);
}

double NNfunction-ss_uRdR::synapse0x2d08410() {
   return (neuron0x2d03290()*-0.143439);
}

double NNfunction-ss_uRdR::synapse0x2d01f20() {
   return (neuron0x2cfe6d0()*-0.545766);
}

double NNfunction-ss_uRdR::synapse0x2d01f60() {
   return (neuron0x2cfea10()*-0.0451783);
}

double NNfunction-ss_uRdR::synapse0x2d01fa0() {
   return (neuron0x2cfed50()*-0.239283);
}

double NNfunction-ss_uRdR::synapse0x2d01fe0() {
   return (neuron0x2cff090()*-0.155837);
}

double NNfunction-ss_uRdR::synapse0x2d089a0() {
   return (neuron0x2cff3d0()*-0.509913);
}

double NNfunction-ss_uRdR::synapse0x2d089e0() {
   return (neuron0x2cff710()*-0.00561415);
}

double NNfunction-ss_uRdR::synapse0x2d08a20() {
   return (neuron0x2cffa50()*0.0370303);
}

double NNfunction-ss_uRdR::synapse0x2d08a60() {
   return (neuron0x2cffd90()*-0.101701);
}

double NNfunction-ss_uRdR::synapse0x2d08aa0() {
   return (neuron0x2d000d0()*-0.314302);
}

double NNfunction-ss_uRdR::synapse0x2d08ae0() {
   return (neuron0x2d00410()*-0.233702);
}

double NNfunction-ss_uRdR::synapse0x2d08b20() {
   return (neuron0x2d00750()*0.00250703);
}

double NNfunction-ss_uRdR::synapse0x2d08b60() {
   return (neuron0x2d00a90()*-0.443679);
}

double NNfunction-ss_uRdR::synapse0x2d08ba0() {
   return (neuron0x2d00dd0()*0.154558);
}

double NNfunction-ss_uRdR::synapse0x2d08be0() {
   return (neuron0x2d01110()*-0.347078);
}

double NNfunction-ss_uRdR::synapse0x2d08c20() {
   return (neuron0x2d01450()*0.240909);
}

double NNfunction-ss_uRdR::synapse0x2d08c60() {
   return (neuron0x2d01790()*0.0164958);
}

double NNfunction-ss_uRdR::synapse0x2d085e0() {
   return (neuron0x2d01ad0()*0.12991);
}

double NNfunction-ss_uRdR::synapse0x2d08620() {
   return (neuron0x2d02030()*0.247037);
}

double NNfunction-ss_uRdR::synapse0x2d08db0() {
   return (neuron0x2d02250()*-0.0120609);
}

double NNfunction-ss_uRdR::synapse0x2d08df0() {
   return (neuron0x2d02590()*0.269912);
}

double NNfunction-ss_uRdR::synapse0x2d08e30() {
   return (neuron0x2d028d0()*0.167611);
}

double NNfunction-ss_uRdR::synapse0x2d08e70() {
   return (neuron0x2d02c10()*-0.271459);
}

double NNfunction-ss_uRdR::synapse0x2d08eb0() {
   return (neuron0x2d02f50()*0.430211);
}

double NNfunction-ss_uRdR::synapse0x2d08ef0() {
   return (neuron0x2d03290()*0.240432);
}

double NNfunction-ss_uRdR::synapse0x2d09270() {
   return (neuron0x2cfe6d0()*0.0151704);
}

double NNfunction-ss_uRdR::synapse0x2d092b0() {
   return (neuron0x2cfea10()*0.000637181);
}

double NNfunction-ss_uRdR::synapse0x2d092f0() {
   return (neuron0x2cfed50()*-0.0913313);
}

double NNfunction-ss_uRdR::synapse0x2d09330() {
   return (neuron0x2cff090()*0.87332);
}

double NNfunction-ss_uRdR::synapse0x2d09370() {
   return (neuron0x2cff3d0()*0.00109782);
}

double NNfunction-ss_uRdR::synapse0x2d093b0() {
   return (neuron0x2cff710()*-0.02691);
}

double NNfunction-ss_uRdR::synapse0x2d093f0() {
   return (neuron0x2cffa50()*-0.126638);
}

double NNfunction-ss_uRdR::synapse0x2d09430() {
   return (neuron0x2cffd90()*0.00828415);
}

double NNfunction-ss_uRdR::synapse0x2d09470() {
   return (neuron0x2d000d0()*0.00396431);
}

double NNfunction-ss_uRdR::synapse0x2d094b0() {
   return (neuron0x2d00410()*-0.0478336);
}

double NNfunction-ss_uRdR::synapse0x2d094f0() {
   return (neuron0x2d00750()*-0.0116052);
}

double NNfunction-ss_uRdR::synapse0x2d09530() {
   return (neuron0x2d00a90()*0.0315661);
}

double NNfunction-ss_uRdR::synapse0x2d09570() {
   return (neuron0x2d00dd0()*-0.00504539);
}

double NNfunction-ss_uRdR::synapse0x2d095b0() {
   return (neuron0x2d01110()*0.0465261);
}

double NNfunction-ss_uRdR::synapse0x2d095f0() {
   return (neuron0x2d01450()*1.13884);
}

double NNfunction-ss_uRdR::synapse0x2d09630() {
   return (neuron0x2d01790()*0.0246475);
}

double NNfunction-ss_uRdR::synapse0x2d090c0() {
   return (neuron0x2d01ad0()*-0.043074);
}

double NNfunction-ss_uRdR::synapse0x2d09100() {
   return (neuron0x2d02030()*1.13843);
}

double NNfunction-ss_uRdR::synapse0x2d09780() {
   return (neuron0x2d02250()*0.0389848);
}

double NNfunction-ss_uRdR::synapse0x2d097c0() {
   return (neuron0x2d02590()*0.015806);
}

double NNfunction-ss_uRdR::synapse0x2d09800() {
   return (neuron0x2d028d0()*-0.142399);
}

double NNfunction-ss_uRdR::synapse0x2d09840() {
   return (neuron0x2d02c10()*-0.00781744);
}

double NNfunction-ss_uRdR::synapse0x2d09880() {
   return (neuron0x2d02f50()*0.00726163);
}

double NNfunction-ss_uRdR::synapse0x2d098c0() {
   return (neuron0x2d03290()*0.0312277);
}

double NNfunction-ss_uRdR::synapse0x2d09c40() {
   return (neuron0x2cfe6d0()*0.0285708);
}

double NNfunction-ss_uRdR::synapse0x2d09c80() {
   return (neuron0x2cfea10()*-0.0381422);
}

double NNfunction-ss_uRdR::synapse0x2d09cc0() {
   return (neuron0x2cfed50()*-0.0561657);
}

double NNfunction-ss_uRdR::synapse0x2d09d00() {
   return (neuron0x2cff090()*0.0999306);
}

double NNfunction-ss_uRdR::synapse0x2d09d40() {
   return (neuron0x2cff3d0()*-0.0123388);
}

double NNfunction-ss_uRdR::synapse0x2d09d80() {
   return (neuron0x2cff710()*0.00828936);
}

double NNfunction-ss_uRdR::synapse0x2d09dc0() {
   return (neuron0x2cffa50()*0.000111355);
}

double NNfunction-ss_uRdR::synapse0x2d09e00() {
   return (neuron0x2cffd90()*-0.0210161);
}

double NNfunction-ss_uRdR::synapse0x2d09e40() {
   return (neuron0x2d000d0()*-0.0204577);
}

double NNfunction-ss_uRdR::synapse0x2d09e80() {
   return (neuron0x2d00410()*0.0725755);
}

double NNfunction-ss_uRdR::synapse0x2d09ec0() {
   return (neuron0x2d00750()*0.0241912);
}

double NNfunction-ss_uRdR::synapse0x2d09f00() {
   return (neuron0x2d00a90()*0.358675);
}

double NNfunction-ss_uRdR::synapse0x2d09f40() {
   return (neuron0x2d00dd0()*0.231608);
}

double NNfunction-ss_uRdR::synapse0x2d09f80() {
   return (neuron0x2d01110()*-0.0311391);
}

double NNfunction-ss_uRdR::synapse0x2d09fc0() {
   return (neuron0x2d01450()*-0.0752718);
}

double NNfunction-ss_uRdR::synapse0x2d0a000() {
   return (neuron0x2d01790()*0.170388);
}

double NNfunction-ss_uRdR::synapse0x2d09a90() {
   return (neuron0x2d01ad0()*-0.0178823);
}

double NNfunction-ss_uRdR::synapse0x2d09ad0() {
   return (neuron0x2d02030()*0.0204406);
}

double NNfunction-ss_uRdR::synapse0x2d06860() {
   return (neuron0x2d02250()*0.189874);
}

double NNfunction-ss_uRdR::synapse0x2d068a0() {
   return (neuron0x2d02590()*-0.0830263);
}

double NNfunction-ss_uRdR::synapse0x2d068e0() {
   return (neuron0x2d028d0()*0.00216294);
}

double NNfunction-ss_uRdR::synapse0x2d06920() {
   return (neuron0x2d02c10()*0.0380001);
}

double NNfunction-ss_uRdR::synapse0x2d06960() {
   return (neuron0x2d02f50()*-0.000514586);
}

double NNfunction-ss_uRdR::synapse0x2d069a0() {
   return (neuron0x2d03290()*-0.010247);
}

double NNfunction-ss_uRdR::synapse0x2d06d20() {
   return (neuron0x2cfe6d0()*-0.135456);
}

double NNfunction-ss_uRdR::synapse0x2d06d60() {
   return (neuron0x2cfea10()*0.124946);
}

double NNfunction-ss_uRdR::synapse0x2d06da0() {
   return (neuron0x2cfed50()*-0.315009);
}

double NNfunction-ss_uRdR::synapse0x2d06de0() {
   return (neuron0x2cff090()*0.321435);
}

double NNfunction-ss_uRdR::synapse0x2d06e20() {
   return (neuron0x2cff3d0()*-0.118412);
}

double NNfunction-ss_uRdR::synapse0x2d06e60() {
   return (neuron0x2cff710()*0.236569);
}

double NNfunction-ss_uRdR::synapse0x2d06ea0() {
   return (neuron0x2cffa50()*-0.118214);
}

double NNfunction-ss_uRdR::synapse0x2d06ee0() {
   return (neuron0x2cffd90()*0.162853);
}

double NNfunction-ss_uRdR::synapse0x2d06f20() {
   return (neuron0x2d000d0()*-0.243319);
}

double NNfunction-ss_uRdR::synapse0x2d06f60() {
   return (neuron0x2d00410()*-0.0649529);
}

double NNfunction-ss_uRdR::synapse0x2d06fa0() {
   return (neuron0x2d00750()*-0.432494);
}

double NNfunction-ss_uRdR::synapse0x2d06fe0() {
   return (neuron0x2d00a90()*0.312192);
}

double NNfunction-ss_uRdR::synapse0x2d07020() {
   return (neuron0x2d00dd0()*-0.138397);
}

double NNfunction-ss_uRdR::synapse0x2d0b160() {
   return (neuron0x2d01110()*-0.0617743);
}

double NNfunction-ss_uRdR::synapse0x2d0b1a0() {
   return (neuron0x2d01450()*-3.10577);
}

double NNfunction-ss_uRdR::synapse0x2d0b1e0() {
   return (neuron0x2d01790()*0.023541);
}

double NNfunction-ss_uRdR::synapse0x2d06b70() {
   return (neuron0x2d01ad0()*-0.0714913);
}

double NNfunction-ss_uRdR::synapse0x2d06bb0() {
   return (neuron0x2d02030()*2.40717);
}

double NNfunction-ss_uRdR::synapse0x2d0b330() {
   return (neuron0x2d02250()*0.193169);
}

double NNfunction-ss_uRdR::synapse0x2d0b370() {
   return (neuron0x2d02590()*-0.0270054);
}

double NNfunction-ss_uRdR::synapse0x2d0b3b0() {
   return (neuron0x2d028d0()*0.0341304);
}

double NNfunction-ss_uRdR::synapse0x2d0b3f0() {
   return (neuron0x2d02c10()*-0.0320962);
}

double NNfunction-ss_uRdR::synapse0x2d0b430() {
   return (neuron0x2d02f50()*-0.0152493);
}

double NNfunction-ss_uRdR::synapse0x2d0b470() {
   return (neuron0x2d03290()*-0.143747);
}

double NNfunction-ss_uRdR::synapse0x2d0b7f0() {
   return (neuron0x2cfe6d0()*0.158503);
}

double NNfunction-ss_uRdR::synapse0x2d0b830() {
   return (neuron0x2cfea10()*0.296461);
}

double NNfunction-ss_uRdR::synapse0x2d0b870() {
   return (neuron0x2cfed50()*-0.323104);
}

double NNfunction-ss_uRdR::synapse0x2d0b8b0() {
   return (neuron0x2cff090()*-2.35008);
}

double NNfunction-ss_uRdR::synapse0x2d0b8f0() {
   return (neuron0x2cff3d0()*0.427119);
}

double NNfunction-ss_uRdR::synapse0x2d0b930() {
   return (neuron0x2cff710()*0.514202);
}

double NNfunction-ss_uRdR::synapse0x2d0b970() {
   return (neuron0x2cffa50()*-0.809221);
}

double NNfunction-ss_uRdR::synapse0x2d0b9b0() {
   return (neuron0x2cffd90()*0.522748);
}

double NNfunction-ss_uRdR::synapse0x2d0b9f0() {
   return (neuron0x2d000d0()*0.431036);
}

double NNfunction-ss_uRdR::synapse0x2d0ba30() {
   return (neuron0x2d00410()*-0.192468);
}

double NNfunction-ss_uRdR::synapse0x2d0ba70() {
   return (neuron0x2d00750()*-0.109396);
}

double NNfunction-ss_uRdR::synapse0x2d0bab0() {
   return (neuron0x2d00a90()*-0.580565);
}

double NNfunction-ss_uRdR::synapse0x2d0baf0() {
   return (neuron0x2d00dd0()*0.376685);
}

double NNfunction-ss_uRdR::synapse0x2d0bb30() {
   return (neuron0x2d01110()*1.2068);
}

double NNfunction-ss_uRdR::synapse0x2d0bb70() {
   return (neuron0x2d01450()*1.05279);
}

double NNfunction-ss_uRdR::synapse0x2d0bbb0() {
   return (neuron0x2d01790()*-1.26731);
}

double NNfunction-ss_uRdR::synapse0x2d0b640() {
   return (neuron0x2d01ad0()*-0.88578);
}

double NNfunction-ss_uRdR::synapse0x2d0b680() {
   return (neuron0x2d02030()*-1.01933);
}

double NNfunction-ss_uRdR::synapse0x2d0bd00() {
   return (neuron0x2d02250()*0.887686);
}

double NNfunction-ss_uRdR::synapse0x2d0bd40() {
   return (neuron0x2d02590()*-0.240533);
}

double NNfunction-ss_uRdR::synapse0x2d0bd80() {
   return (neuron0x2d028d0()*-0.426934);
}

double NNfunction-ss_uRdR::synapse0x2d0bdc0() {
   return (neuron0x2d02c10()*0.114286);
}

double NNfunction-ss_uRdR::synapse0x2d0be00() {
   return (neuron0x2d02f50()*0.0483965);
}

double NNfunction-ss_uRdR::synapse0x2d0be40() {
   return (neuron0x2d03290()*0.050029);
}

double NNfunction-ss_uRdR::synapse0x2d0c1c0() {
   return (neuron0x2cfe6d0()*0.0731127);
}

double NNfunction-ss_uRdR::synapse0x2d0c200() {
   return (neuron0x2cfea10()*-0.0499638);
}

double NNfunction-ss_uRdR::synapse0x2d0c240() {
   return (neuron0x2cfed50()*0.169421);
}

double NNfunction-ss_uRdR::synapse0x2d0c280() {
   return (neuron0x2cff090()*1.33978);
}

double NNfunction-ss_uRdR::synapse0x2d0c2c0() {
   return (neuron0x2cff3d0()*-0.140827);
}

double NNfunction-ss_uRdR::synapse0x2d0c300() {
   return (neuron0x2cff710()*0.160547);
}

double NNfunction-ss_uRdR::synapse0x2d0c340() {
   return (neuron0x2cffa50()*0.272745);
}

double NNfunction-ss_uRdR::synapse0x2d0c380() {
   return (neuron0x2cffd90()*0.0495538);
}

double NNfunction-ss_uRdR::synapse0x2d0c3c0() {
   return (neuron0x2d000d0()*-0.159489);
}

double NNfunction-ss_uRdR::synapse0x2d0c400() {
   return (neuron0x2d00410()*0.176301);
}

double NNfunction-ss_uRdR::synapse0x2d0c440() {
   return (neuron0x2d00750()*0.151222);
}

double NNfunction-ss_uRdR::synapse0x2d0c480() {
   return (neuron0x2d00a90()*0.0662519);
}

double NNfunction-ss_uRdR::synapse0x2d0c4c0() {
   return (neuron0x2d00dd0()*-0.187162);
}

double NNfunction-ss_uRdR::synapse0x2d0c500() {
   return (neuron0x2d01110()*-0.476029);
}

double NNfunction-ss_uRdR::synapse0x2d0c540() {
   return (neuron0x2d01450()*-0.514383);
}

double NNfunction-ss_uRdR::synapse0x2d0c580() {
   return (neuron0x2d01790()*-0.388994);
}

double NNfunction-ss_uRdR::synapse0x2d0c010() {
   return (neuron0x2d01ad0()*0.189355);
}

double NNfunction-ss_uRdR::synapse0x2d0c050() {
   return (neuron0x2d02030()*-0.458904);
}

double NNfunction-ss_uRdR::synapse0x2d0c6d0() {
   return (neuron0x2d02250()*0.123272);
}

double NNfunction-ss_uRdR::synapse0x2d0c710() {
   return (neuron0x2d02590()*0.89118);
}

double NNfunction-ss_uRdR::synapse0x2d0c750() {
   return (neuron0x2d028d0()*0.100152);
}

double NNfunction-ss_uRdR::synapse0x2d0c790() {
   return (neuron0x2d02c10()*0.216757);
}

double NNfunction-ss_uRdR::synapse0x2d0c7d0() {
   return (neuron0x2d02f50()*-0.1712);
}

double NNfunction-ss_uRdR::synapse0x2d0c810() {
   return (neuron0x2d03290()*0.134238);
}

double NNfunction-ss_uRdR::synapse0x2d0cb90() {
   return (neuron0x2cfe6d0()*0.391548);
}

double NNfunction-ss_uRdR::synapse0x2d0cbd0() {
   return (neuron0x2cfea10()*-0.86151);
}

double NNfunction-ss_uRdR::synapse0x2d0cc10() {
   return (neuron0x2cfed50()*-0.194641);
}

double NNfunction-ss_uRdR::synapse0x2d0cc50() {
   return (neuron0x2cff090()*0.687214);
}

double NNfunction-ss_uRdR::synapse0x2d0cc90() {
   return (neuron0x2cff3d0()*0.257241);
}

double NNfunction-ss_uRdR::synapse0x2d0ccd0() {
   return (neuron0x2cff710()*-0.284717);
}

double NNfunction-ss_uRdR::synapse0x2d0cd10() {
   return (neuron0x2cffa50()*-0.184431);
}

double NNfunction-ss_uRdR::synapse0x2d0cd50() {
   return (neuron0x2cffd90()*0.116437);
}

double NNfunction-ss_uRdR::synapse0x2d0cd90() {
   return (neuron0x2d000d0()*0.495888);
}

double NNfunction-ss_uRdR::synapse0x2d0cdd0() {
   return (neuron0x2d00410()*0.147063);
}

double NNfunction-ss_uRdR::synapse0x2d0ce10() {
   return (neuron0x2d00750()*0.591646);
}

double NNfunction-ss_uRdR::synapse0x2d0ce50() {
   return (neuron0x2d00a90()*0.0622019);
}

double NNfunction-ss_uRdR::synapse0x2d0ce90() {
   return (neuron0x2d00dd0()*0.426477);
}

double NNfunction-ss_uRdR::synapse0x2d0ced0() {
   return (neuron0x2d01110()*-0.319912);
}

double NNfunction-ss_uRdR::synapse0x2d0cf10() {
   return (neuron0x2d01450()*-0.0899837);
}

double NNfunction-ss_uRdR::synapse0x2d0cf50() {
   return (neuron0x2d01790()*-0.360689);
}

double NNfunction-ss_uRdR::synapse0x2d0c9e0() {
   return (neuron0x2d01ad0()*0.535852);
}

double NNfunction-ss_uRdR::synapse0x2d0ca20() {
   return (neuron0x2d02030()*-0.831994);
}

double NNfunction-ss_uRdR::synapse0x2d0d0a0() {
   return (neuron0x2d02250()*0.339527);
}

double NNfunction-ss_uRdR::synapse0x2d0d0e0() {
   return (neuron0x2d02590()*0.0333054);
}

double NNfunction-ss_uRdR::synapse0x2d0d120() {
   return (neuron0x2d028d0()*0.421325);
}

double NNfunction-ss_uRdR::synapse0x2d0d160() {
   return (neuron0x2d02c10()*-0.431931);
}

double NNfunction-ss_uRdR::synapse0x2d0d1a0() {
   return (neuron0x2d02f50()*-0.474642);
}

double NNfunction-ss_uRdR::synapse0x2d0d1e0() {
   return (neuron0x2d03290()*-0.236027);
}

double NNfunction-ss_uRdR::synapse0x2d0d560() {
   return (neuron0x2cfe6d0()*0.0946714);
}

double NNfunction-ss_uRdR::synapse0x2cfe8f0() {
   return (neuron0x2cfea10()*0.105866);
}

double NNfunction-ss_uRdR::synapse0x2cfe930() {
   return (neuron0x2cfed50()*0.200194);
}

double NNfunction-ss_uRdR::synapse0x2cfec30() {
   return (neuron0x2cff090()*0.672066);
}

double NNfunction-ss_uRdR::synapse0x2cfec70() {
   return (neuron0x2cff3d0()*0.202989);
}

double NNfunction-ss_uRdR::synapse0x2cfef70() {
   return (neuron0x2cff710()*-0.216143);
}

double NNfunction-ss_uRdR::synapse0x2cfefb0() {
   return (neuron0x2cffa50()*0.0935166);
}

double NNfunction-ss_uRdR::synapse0x2cff2b0() {
   return (neuron0x2cffd90()*0.238129);
}

double NNfunction-ss_uRdR::synapse0x2cff2f0() {
   return (neuron0x2d000d0()*0.132261);
}

double NNfunction-ss_uRdR::synapse0x2cff5f0() {
   return (neuron0x2d00410()*0.127606);
}

double NNfunction-ss_uRdR::synapse0x2cff630() {
   return (neuron0x2d00750()*-0.0870502);
}

double NNfunction-ss_uRdR::synapse0x2cff930() {
   return (neuron0x2d00a90()*0.00799771);
}

double NNfunction-ss_uRdR::synapse0x2cff970() {
   return (neuron0x2d00dd0()*0.165269);
}

double NNfunction-ss_uRdR::synapse0x2cffc70() {
   return (neuron0x2d01110()*0.174587);
}

double NNfunction-ss_uRdR::synapse0x2cffcb0() {
   return (neuron0x2d01450()*-0.887485);
}

double NNfunction-ss_uRdR::synapse0x2cfffb0() {
   return (neuron0x2d01790()*0.355013);
}

double NNfunction-ss_uRdR::synapse0x2cffff0() {
   return (neuron0x2d01ad0()*0.0689796);
}

double NNfunction-ss_uRdR::synapse0x2d002f0() {
   return (neuron0x2d02030()*1.06948);
}

double NNfunction-ss_uRdR::synapse0x2d00330() {
   return (neuron0x2d02250()*0.74042);
}

double NNfunction-ss_uRdR::synapse0x2d00630() {
   return (neuron0x2d02590()*0.105096);
}

double NNfunction-ss_uRdR::synapse0x2d00670() {
   return (neuron0x2d028d0()*-0.256049);
}

double NNfunction-ss_uRdR::synapse0x2d00970() {
   return (neuron0x2d02c10()*0.112218);
}

double NNfunction-ss_uRdR::synapse0x2d009b0() {
   return (neuron0x2d02f50()*-0.0110398);
}

double NNfunction-ss_uRdR::synapse0x2d00cb0() {
   return (neuron0x2d03290()*-0.0305181);
}

double NNfunction-ss_uRdR::synapse0x2d00cf0() {
   return (neuron0x2cfe6d0()*0.597046);
}

double NNfunction-ss_uRdR::synapse0x2d019b0() {
   return (neuron0x2cfea10()*-0.155966);
}

double NNfunction-ss_uRdR::synapse0x2d019f0() {
   return (neuron0x2cfed50()*0.159798);
}

double NNfunction-ss_uRdR::synapse0x2d0d3b0() {
   return (neuron0x2cff090()*-0.892447);
}

double NNfunction-ss_uRdR::synapse0x2d0d3f0() {
   return (neuron0x2cff3d0()*-0.17772);
}

double NNfunction-ss_uRdR::synapse0x2d01cf0() {
   return (neuron0x2cff710()*-0.168681);
}

double NNfunction-ss_uRdR::synapse0x2d01d30() {
   return (neuron0x2cffa50()*0.0427142);
}

double NNfunction-ss_uRdR::synapse0x2ab9780() {
   return (neuron0x2cffd90()*0.180916);
}

double NNfunction-ss_uRdR::synapse0x2ab97c0() {
   return (neuron0x2d000d0()*0.477546);
}

double NNfunction-ss_uRdR::synapse0x2d02470() {
   return (neuron0x2d00410()*0.586846);
}

double NNfunction-ss_uRdR::synapse0x2d024b0() {
   return (neuron0x2d00750()*0.671748);
}

double NNfunction-ss_uRdR::synapse0x2d027b0() {
   return (neuron0x2d00a90()*0.167807);
}

double NNfunction-ss_uRdR::synapse0x2d027f0() {
   return (neuron0x2d00dd0()*-0.0127798);
}

double NNfunction-ss_uRdR::synapse0x2d02af0() {
   return (neuron0x2d01110()*-0.123956);
}

double NNfunction-ss_uRdR::synapse0x2d02b30() {
   return (neuron0x2d01450()*-0.551916);
}

double NNfunction-ss_uRdR::synapse0x2d02e30() {
   return (neuron0x2d01790()*-0.474649);
}

double NNfunction-ss_uRdR::synapse0x2d02e70() {
   return (neuron0x2d01ad0()*0.408718);
}

double NNfunction-ss_uRdR::synapse0x2d03170() {
   return (neuron0x2d02030()*0.41515);
}

double NNfunction-ss_uRdR::synapse0x2d031b0() {
   return (neuron0x2d02250()*-0.599782);
}

double NNfunction-ss_uRdR::synapse0x2d034b0() {
   return (neuron0x2d02590()*-0.36003);
}

double NNfunction-ss_uRdR::synapse0x2d034f0() {
   return (neuron0x2d028d0()*-0.0342011);
}

double NNfunction-ss_uRdR::synapse0x2d00ff0() {
   return (neuron0x2d02c10()*-0.636849);
}

double NNfunction-ss_uRdR::synapse0x2d01030() {
   return (neuron0x2d02f50()*0.33501);
}

double NNfunction-ss_uRdR::synapse0x2d0f2d0() {
   return (neuron0x2d03290()*0.194105);
}

double NNfunction-ss_uRdR::synapse0x2d0f650() {
   return (neuron0x2cfe6d0()*-0.524745);
}

double NNfunction-ss_uRdR::synapse0x2d0f690() {
   return (neuron0x2cfea10()*-0.0621344);
}

double NNfunction-ss_uRdR::synapse0x2d0f6d0() {
   return (neuron0x2cfed50()*0.753382);
}

double NNfunction-ss_uRdR::synapse0x2d0f710() {
   return (neuron0x2cff090()*1.75328);
}

double NNfunction-ss_uRdR::synapse0x2d0f750() {
   return (neuron0x2cff3d0()*-0.224666);
}

double NNfunction-ss_uRdR::synapse0x2d0f790() {
   return (neuron0x2cff710()*-0.668218);
}

double NNfunction-ss_uRdR::synapse0x2d0f7d0() {
   return (neuron0x2cffa50()*1.0742);
}

double NNfunction-ss_uRdR::synapse0x2d0f810() {
   return (neuron0x2cffd90()*0.0603463);
}

double NNfunction-ss_uRdR::synapse0x2d0f850() {
   return (neuron0x2d000d0()*-0.316455);
}

double NNfunction-ss_uRdR::synapse0x2d0f890() {
   return (neuron0x2d00410()*0.0411267);
}

double NNfunction-ss_uRdR::synapse0x2d0f8d0() {
   return (neuron0x2d00750()*0.349207);
}

double NNfunction-ss_uRdR::synapse0x2d0f910() {
   return (neuron0x2d00a90()*-0.480589);
}

double NNfunction-ss_uRdR::synapse0x2d0f950() {
   return (neuron0x2d00dd0()*0.251686);
}

double NNfunction-ss_uRdR::synapse0x2d0f990() {
   return (neuron0x2d01110()*-0.507512);
}

double NNfunction-ss_uRdR::synapse0x2d0f9d0() {
   return (neuron0x2d01450()*-0.888114);
}

double NNfunction-ss_uRdR::synapse0x2d0fa10() {
   return (neuron0x2d01790()*0.732882);
}

double NNfunction-ss_uRdR::synapse0x2d0f4a0() {
   return (neuron0x2d01ad0()*0.077643);
}

double NNfunction-ss_uRdR::synapse0x2d0f4e0() {
   return (neuron0x2d02030()*1.34454);
}

double NNfunction-ss_uRdR::synapse0x2d0fb60() {
   return (neuron0x2d02250()*-1.30705);
}

double NNfunction-ss_uRdR::synapse0x2d0fba0() {
   return (neuron0x2d02590()*-0.747781);
}

double NNfunction-ss_uRdR::synapse0x2d0fbe0() {
   return (neuron0x2d028d0()*0.242681);
}

double NNfunction-ss_uRdR::synapse0x2d0fc20() {
   return (neuron0x2d02c10()*0.100758);
}

double NNfunction-ss_uRdR::synapse0x2d0fc60() {
   return (neuron0x2d02f50()*0.0383708);
}

double NNfunction-ss_uRdR::synapse0x2d0fca0() {
   return (neuron0x2d03290()*0.109214);
}

double NNfunction-ss_uRdR::synapse0x2d10020() {
   return (neuron0x2cfe6d0()*-0.0254496);
}

double NNfunction-ss_uRdR::synapse0x2d10060() {
   return (neuron0x2cfea10()*-0.00288216);
}

double NNfunction-ss_uRdR::synapse0x2d100a0() {
   return (neuron0x2cfed50()*-0.126429);
}

double NNfunction-ss_uRdR::synapse0x2d100e0() {
   return (neuron0x2cff090()*1.28156);
}

double NNfunction-ss_uRdR::synapse0x2d10120() {
   return (neuron0x2cff3d0()*-0.0371623);
}

double NNfunction-ss_uRdR::synapse0x2d10160() {
   return (neuron0x2cff710()*0.0133034);
}

double NNfunction-ss_uRdR::synapse0x2d101a0() {
   return (neuron0x2cffa50()*-0.00743585);
}

double NNfunction-ss_uRdR::synapse0x2d101e0() {
   return (neuron0x2cffd90()*-0.0563111);
}

double NNfunction-ss_uRdR::synapse0x2d10220() {
   return (neuron0x2d000d0()*-0.0163327);
}

double NNfunction-ss_uRdR::synapse0x2d10260() {
   return (neuron0x2d00410()*-0.0246487);
}

double NNfunction-ss_uRdR::synapse0x2d102a0() {
   return (neuron0x2d00750()*0.0104589);
}

double NNfunction-ss_uRdR::synapse0x2d102e0() {
   return (neuron0x2d00a90()*-0.0224712);
}

double NNfunction-ss_uRdR::synapse0x2d10320() {
   return (neuron0x2d00dd0()*-0.0109195);
}

double NNfunction-ss_uRdR::synapse0x2d10360() {
   return (neuron0x2d01110()*-0.0171999);
}

double NNfunction-ss_uRdR::synapse0x2d103a0() {
   return (neuron0x2d01450()*-0.7539);
}

double NNfunction-ss_uRdR::synapse0x2d103e0() {
   return (neuron0x2d01790()*-0.0170889);
}

double NNfunction-ss_uRdR::synapse0x2d0fe70() {
   return (neuron0x2d01ad0()*-0.0686393);
}

double NNfunction-ss_uRdR::synapse0x2d0feb0() {
   return (neuron0x2d02030()*-0.846128);
}

double NNfunction-ss_uRdR::synapse0x2d10530() {
   return (neuron0x2d02250()*-0.0156414);
}

double NNfunction-ss_uRdR::synapse0x2d10570() {
   return (neuron0x2d02590()*-0.0890402);
}

double NNfunction-ss_uRdR::synapse0x2d105b0() {
   return (neuron0x2d028d0()*-0.03731);
}

double NNfunction-ss_uRdR::synapse0x2d105f0() {
   return (neuron0x2d02c10()*-0.0273734);
}

double NNfunction-ss_uRdR::synapse0x2d10630() {
   return (neuron0x2d02f50()*0.0810656);
}

double NNfunction-ss_uRdR::synapse0x2d10670() {
   return (neuron0x2d03290()*-0.00449452);
}

double NNfunction-ss_uRdR::synapse0x2d109f0() {
   return (neuron0x2cfe6d0()*0.0149734);
}

double NNfunction-ss_uRdR::synapse0x2d10a30() {
   return (neuron0x2cfea10()*0.00276823);
}

double NNfunction-ss_uRdR::synapse0x2d10a70() {
   return (neuron0x2cfed50()*0.0335013);
}

double NNfunction-ss_uRdR::synapse0x2d10ab0() {
   return (neuron0x2cff090()*-1.88185);
}

double NNfunction-ss_uRdR::synapse0x2d10af0() {
   return (neuron0x2cff3d0()*0.0106927);
}

double NNfunction-ss_uRdR::synapse0x2d10b30() {
   return (neuron0x2cff710()*-0.00364724);
}

double NNfunction-ss_uRdR::synapse0x2d10b70() {
   return (neuron0x2cffa50()*0.00354064);
}

double NNfunction-ss_uRdR::synapse0x2d10bb0() {
   return (neuron0x2cffd90()*0.0116195);
}

double NNfunction-ss_uRdR::synapse0x2d10bf0() {
   return (neuron0x2d000d0()*0.0096922);
}

double NNfunction-ss_uRdR::synapse0x2d10c30() {
   return (neuron0x2d00410()*-0.00145427);
}

double NNfunction-ss_uRdR::synapse0x2d10c70() {
   return (neuron0x2d00750()*0.00158273);
}

double NNfunction-ss_uRdR::synapse0x2d10cb0() {
   return (neuron0x2d00a90()*-0.0032191);
}

double NNfunction-ss_uRdR::synapse0x2d10cf0() {
   return (neuron0x2d00dd0()*-0.00652125);
}

double NNfunction-ss_uRdR::synapse0x2d10d30() {
   return (neuron0x2d01110()*-0.0130529);
}

double NNfunction-ss_uRdR::synapse0x2d10d70() {
   return (neuron0x2d01450()*0.23535);
}

double NNfunction-ss_uRdR::synapse0x2d10db0() {
   return (neuron0x2d01790()*0.00052402);
}

double NNfunction-ss_uRdR::synapse0x2d10840() {
   return (neuron0x2d01ad0()*0.00440133);
}

double NNfunction-ss_uRdR::synapse0x2d10880() {
   return (neuron0x2d02030()*0.269224);
}

double NNfunction-ss_uRdR::synapse0x2d10f00() {
   return (neuron0x2d02250()*-0.00441595);
}

double NNfunction-ss_uRdR::synapse0x2d10f40() {
   return (neuron0x2d02590()*0.02414);
}

double NNfunction-ss_uRdR::synapse0x2d10f80() {
   return (neuron0x2d028d0()*0.0131733);
}

double NNfunction-ss_uRdR::synapse0x2d10fc0() {
   return (neuron0x2d02c10()*0.00679798);
}

double NNfunction-ss_uRdR::synapse0x2d11000() {
   return (neuron0x2d02f50()*-0.000416575);
}

double NNfunction-ss_uRdR::synapse0x2d11040() {
   return (neuron0x2d03290()*-0.0142731);
}

double NNfunction-ss_uRdR::synapse0x2d113c0() {
   return (neuron0x2cfe6d0()*0.17568);
}

double NNfunction-ss_uRdR::synapse0x2d11400() {
   return (neuron0x2cfea10()*-0.324001);
}

double NNfunction-ss_uRdR::synapse0x2d11440() {
   return (neuron0x2cfed50()*0.657266);
}

double NNfunction-ss_uRdR::synapse0x2d11480() {
   return (neuron0x2cff090()*1.00271);
}

double NNfunction-ss_uRdR::synapse0x2d114c0() {
   return (neuron0x2cff3d0()*0.237681);
}

double NNfunction-ss_uRdR::synapse0x2d11500() {
   return (neuron0x2cff710()*-0.343771);
}

double NNfunction-ss_uRdR::synapse0x2d11540() {
   return (neuron0x2cffa50()*0.440402);
}

double NNfunction-ss_uRdR::synapse0x2d11580() {
   return (neuron0x2cffd90()*0.370465);
}

double NNfunction-ss_uRdR::synapse0x2d115c0() {
   return (neuron0x2d000d0()*-0.282276);
}

double NNfunction-ss_uRdR::synapse0x2d11600() {
   return (neuron0x2d00410()*-0.486768);
}

double NNfunction-ss_uRdR::synapse0x2d11640() {
   return (neuron0x2d00750()*0.629036);
}

double NNfunction-ss_uRdR::synapse0x2d11680() {
   return (neuron0x2d00a90()*1.10213);
}

double NNfunction-ss_uRdR::synapse0x2d116c0() {
   return (neuron0x2d00dd0()*-1.0018);
}

double NNfunction-ss_uRdR::synapse0x2d11700() {
   return (neuron0x2d01110()*0.926811);
}

double NNfunction-ss_uRdR::synapse0x2d11740() {
   return (neuron0x2d01450()*-1.0829);
}

double NNfunction-ss_uRdR::synapse0x2d11780() {
   return (neuron0x2d01790()*-1.05296);
}

double NNfunction-ss_uRdR::synapse0x2d11210() {
   return (neuron0x2d01ad0()*-0.402285);
}

double NNfunction-ss_uRdR::synapse0x2d11250() {
   return (neuron0x2d02030()*0.584758);
}

double NNfunction-ss_uRdR::synapse0x2d118d0() {
   return (neuron0x2d02250()*0.183982);
}

double NNfunction-ss_uRdR::synapse0x2d11910() {
   return (neuron0x2d02590()*-0.493461);
}

double NNfunction-ss_uRdR::synapse0x2d11950() {
   return (neuron0x2d028d0()*0.205103);
}

double NNfunction-ss_uRdR::synapse0x2d11990() {
   return (neuron0x2d02c10()*-0.551671);
}

double NNfunction-ss_uRdR::synapse0x2d119d0() {
   return (neuron0x2d02f50()*0.44616);
}

double NNfunction-ss_uRdR::synapse0x2d11a10() {
   return (neuron0x2d03290()*0.158304);
}

double NNfunction-ss_uRdR::synapse0x2d11d90() {
   return (neuron0x2cfe6d0()*-0.134284);
}

double NNfunction-ss_uRdR::synapse0x2d11dd0() {
   return (neuron0x2cfea10()*-0.971686);
}

double NNfunction-ss_uRdR::synapse0x2d11e10() {
   return (neuron0x2cfed50()*0.528843);
}

double NNfunction-ss_uRdR::synapse0x2d11e50() {
   return (neuron0x2cff090()*-0.314169);
}

double NNfunction-ss_uRdR::synapse0x2d11e90() {
   return (neuron0x2cff3d0()*0.274074);
}

double NNfunction-ss_uRdR::synapse0x2d11ed0() {
   return (neuron0x2cff710()*-0.17126);
}

double NNfunction-ss_uRdR::synapse0x2d11f10() {
   return (neuron0x2cffa50()*1.07947);
}

double NNfunction-ss_uRdR::synapse0x2d11f50() {
   return (neuron0x2cffd90()*0.448734);
}

double NNfunction-ss_uRdR::synapse0x2d11f90() {
   return (neuron0x2d000d0()*-0.142229);
}

double NNfunction-ss_uRdR::synapse0x2d0a150() {
   return (neuron0x2d00410()*0.0232677);
}

double NNfunction-ss_uRdR::synapse0x2d0a190() {
   return (neuron0x2d00750()*0.281997);
}

double NNfunction-ss_uRdR::synapse0x2d0a1d0() {
   return (neuron0x2d00a90()*-1.39515);
}

double NNfunction-ss_uRdR::synapse0x2d0a210() {
   return (neuron0x2d00dd0()*-0.918765);
}

double NNfunction-ss_uRdR::synapse0x2d0a250() {
   return (neuron0x2d01110()*0.481638);
}

double NNfunction-ss_uRdR::synapse0x2d0a290() {
   return (neuron0x2d01450()*-0.0574557);
}

double NNfunction-ss_uRdR::synapse0x2d0a2d0() {
   return (neuron0x2d01790()*0.0495076);
}

double NNfunction-ss_uRdR::synapse0x2d11be0() {
   return (neuron0x2d01ad0()*0.320503);
}

double NNfunction-ss_uRdR::synapse0x2d11c20() {
   return (neuron0x2d02030()*-0.665974);
}

double NNfunction-ss_uRdR::synapse0x2d0a420() {
   return (neuron0x2d02250()*-0.831389);
}

double NNfunction-ss_uRdR::synapse0x2d0a460() {
   return (neuron0x2d02590()*0.705432);
}

double NNfunction-ss_uRdR::synapse0x2d0a4a0() {
   return (neuron0x2d028d0()*0.510073);
}

double NNfunction-ss_uRdR::synapse0x2d0a4e0() {
   return (neuron0x2d02c10()*-0.236963);
}

double NNfunction-ss_uRdR::synapse0x2d0a520() {
   return (neuron0x2d02f50()*-0.236079);
}

double NNfunction-ss_uRdR::synapse0x2d0a560() {
   return (neuron0x2d03290()*-0.211328);
}

double NNfunction-ss_uRdR::synapse0x2d0a8e0() {
   return (neuron0x2cfe6d0()*-0.131697);
}

double NNfunction-ss_uRdR::synapse0x2d0a920() {
   return (neuron0x2cfea10()*-0.315558);
}

double NNfunction-ss_uRdR::synapse0x2d0a960() {
   return (neuron0x2cfed50()*0.373384);
}

double NNfunction-ss_uRdR::synapse0x2d0a9a0() {
   return (neuron0x2cff090()*-0.916839);
}

double NNfunction-ss_uRdR::synapse0x2d0a9e0() {
   return (neuron0x2cff3d0()*0.147018);
}

double NNfunction-ss_uRdR::synapse0x2d0aa20() {
   return (neuron0x2cff710()*0.283864);
}

double NNfunction-ss_uRdR::synapse0x2d0aa60() {
   return (neuron0x2cffa50()*1.43968);
}

double NNfunction-ss_uRdR::synapse0x2d0aaa0() {
   return (neuron0x2cffd90()*0.706784);
}

double NNfunction-ss_uRdR::synapse0x2d0aae0() {
   return (neuron0x2d000d0()*-0.266938);
}

double NNfunction-ss_uRdR::synapse0x2d0ab20() {
   return (neuron0x2d00410()*0.365874);
}

double NNfunction-ss_uRdR::synapse0x2d0ab60() {
   return (neuron0x2d00750()*0.104574);
}

double NNfunction-ss_uRdR::synapse0x2d0aba0() {
   return (neuron0x2d00a90()*0.0688705);
}

double NNfunction-ss_uRdR::synapse0x2d0abe0() {
   return (neuron0x2d00dd0()*-0.749195);
}

double NNfunction-ss_uRdR::synapse0x2d0ac20() {
   return (neuron0x2d01110()*0.343983);
}

double NNfunction-ss_uRdR::synapse0x2d0ac60() {
   return (neuron0x2d01450()*-0.193595);
}

double NNfunction-ss_uRdR::synapse0x2d0aca0() {
   return (neuron0x2d01790()*-0.716679);
}

double NNfunction-ss_uRdR::synapse0x2d0a730() {
   return (neuron0x2d01ad0()*-0.290187);
}

double NNfunction-ss_uRdR::synapse0x2d0a770() {
   return (neuron0x2d02030()*-0.0104262);
}

double NNfunction-ss_uRdR::synapse0x2d0adf0() {
   return (neuron0x2d02250()*0.125462);
}

double NNfunction-ss_uRdR::synapse0x2d0ae30() {
   return (neuron0x2d02590()*0.189713);
}

double NNfunction-ss_uRdR::synapse0x2d0ae70() {
   return (neuron0x2d028d0()*0.435261);
}

double NNfunction-ss_uRdR::synapse0x2d0aeb0() {
   return (neuron0x2d02c10()*-0.186659);
}

double NNfunction-ss_uRdR::synapse0x2d0aef0() {
   return (neuron0x2d02f50()*-0.0905748);
}

double NNfunction-ss_uRdR::synapse0x2d0af30() {
   return (neuron0x2d03290()*-0.0199623);
}

double NNfunction-ss_uRdR::synapse0x2d0b100() {
   return (neuron0x2cfe6d0()*0.0967209);
}

double NNfunction-ss_uRdR::synapse0x2d14190() {
   return (neuron0x2cfea10()*0.00190186);
}

double NNfunction-ss_uRdR::synapse0x2d141d0() {
   return (neuron0x2cfed50()*-0.0240925);
}

double NNfunction-ss_uRdR::synapse0x2d14210() {
   return (neuron0x2cff090()*-0.281776);
}

double NNfunction-ss_uRdR::synapse0x2d14250() {
   return (neuron0x2cff3d0()*0.00490995);
}

double NNfunction-ss_uRdR::synapse0x2d14290() {
   return (neuron0x2cff710()*-0.064462);
}

double NNfunction-ss_uRdR::synapse0x2d142d0() {
   return (neuron0x2cffa50()*-0.0874891);
}

double NNfunction-ss_uRdR::synapse0x2d14310() {
   return (neuron0x2cffd90()*0.0919944);
}

double NNfunction-ss_uRdR::synapse0x2d14350() {
   return (neuron0x2d000d0()*0.022825);
}

double NNfunction-ss_uRdR::synapse0x2d14390() {
   return (neuron0x2d00410()*-0.0143877);
}

double NNfunction-ss_uRdR::synapse0x2d143d0() {
   return (neuron0x2d00750()*-0.00917267);
}

double NNfunction-ss_uRdR::synapse0x2d14410() {
   return (neuron0x2d00a90()*0.0342495);
}

double NNfunction-ss_uRdR::synapse0x2d14450() {
   return (neuron0x2d00dd0()*0.00814805);
}

double NNfunction-ss_uRdR::synapse0x2d14490() {
   return (neuron0x2d01110()*0.0207379);
}

double NNfunction-ss_uRdR::synapse0x2d144d0() {
   return (neuron0x2d01450()*-0.708199);
}

double NNfunction-ss_uRdR::synapse0x2d14510() {
   return (neuron0x2d01790()*0.0575831);
}

double NNfunction-ss_uRdR::synapse0x2d13fe0() {
   return (neuron0x2d01ad0()*-0.102371);
}

double NNfunction-ss_uRdR::synapse0x2d14020() {
   return (neuron0x2d02030()*-0.49178);
}

double NNfunction-ss_uRdR::synapse0x2d14660() {
   return (neuron0x2d02250()*0.0609974);
}

double NNfunction-ss_uRdR::synapse0x2d146a0() {
   return (neuron0x2d02590()*0.0728859);
}

double NNfunction-ss_uRdR::synapse0x2d146e0() {
   return (neuron0x2d028d0()*-0.16456);
}

double NNfunction-ss_uRdR::synapse0x2d14720() {
   return (neuron0x2d02c10()*0.0588432);
}

double NNfunction-ss_uRdR::synapse0x2d14760() {
   return (neuron0x2d02f50()*0.0732287);
}

double NNfunction-ss_uRdR::synapse0x2d147a0() {
   return (neuron0x2d03290()*-0.0128335);
}

double NNfunction-ss_uRdR::synapse0x2d14b20() {
   return (neuron0x2cfe6d0()*0.265682);
}

double NNfunction-ss_uRdR::synapse0x2d14b60() {
   return (neuron0x2cfea10()*0.23678);
}

double NNfunction-ss_uRdR::synapse0x2d14ba0() {
   return (neuron0x2cfed50()*0.0234466);
}

double NNfunction-ss_uRdR::synapse0x2d14be0() {
   return (neuron0x2cff090()*-0.477411);
}

double NNfunction-ss_uRdR::synapse0x2d14c20() {
   return (neuron0x2cff3d0()*0.366868);
}

double NNfunction-ss_uRdR::synapse0x2d14c60() {
   return (neuron0x2cff710()*0.161506);
}

double NNfunction-ss_uRdR::synapse0x2d14ca0() {
   return (neuron0x2cffa50()*-0.102848);
}

double NNfunction-ss_uRdR::synapse0x2d14ce0() {
   return (neuron0x2cffd90()*-0.0912316);
}

double NNfunction-ss_uRdR::synapse0x2d14d20() {
   return (neuron0x2d000d0()*0.110177);
}

double NNfunction-ss_uRdR::synapse0x2d14d60() {
   return (neuron0x2d00410()*0.161895);
}

double NNfunction-ss_uRdR::synapse0x2d14da0() {
   return (neuron0x2d00750()*0.0950347);
}

double NNfunction-ss_uRdR::synapse0x2d14de0() {
   return (neuron0x2d00a90()*0.559086);
}

double NNfunction-ss_uRdR::synapse0x2d14e20() {
   return (neuron0x2d00dd0()*-0.182825);
}

double NNfunction-ss_uRdR::synapse0x2d14e60() {
   return (neuron0x2d01110()*0.859395);
}

double NNfunction-ss_uRdR::synapse0x2d14ea0() {
   return (neuron0x2d01450()*-0.241515);
}

double NNfunction-ss_uRdR::synapse0x2d14ee0() {
   return (neuron0x2d01790()*0.171144);
}

double NNfunction-ss_uRdR::synapse0x2d14970() {
   return (neuron0x2d01ad0()*-0.206323);
}

double NNfunction-ss_uRdR::synapse0x2d149b0() {
   return (neuron0x2d02030()*-0.568043);
}

double NNfunction-ss_uRdR::synapse0x2d15030() {
   return (neuron0x2d02250()*0.0227928);
}

double NNfunction-ss_uRdR::synapse0x2d15070() {
   return (neuron0x2d02590()*-0.281648);
}

double NNfunction-ss_uRdR::synapse0x2d150b0() {
   return (neuron0x2d028d0()*-0.223043);
}

double NNfunction-ss_uRdR::synapse0x2d150f0() {
   return (neuron0x2d02c10()*0.327119);
}

double NNfunction-ss_uRdR::synapse0x2d15130() {
   return (neuron0x2d02f50()*-0.449162);
}

double NNfunction-ss_uRdR::synapse0x2d15170() {
   return (neuron0x2d03290()*-0.249145);
}

double NNfunction-ss_uRdR::synapse0x2d154f0() {
   return (neuron0x2cfe6d0()*-0.550066);
}

double NNfunction-ss_uRdR::synapse0x2d15530() {
   return (neuron0x2cfea10()*-0.405018);
}

double NNfunction-ss_uRdR::synapse0x2d15570() {
   return (neuron0x2cfed50()*-0.251662);
}

double NNfunction-ss_uRdR::synapse0x2d155b0() {
   return (neuron0x2cff090()*-1.21184);
}

double NNfunction-ss_uRdR::synapse0x2d155f0() {
   return (neuron0x2cff3d0()*-0.508767);
}

double NNfunction-ss_uRdR::synapse0x2d15630() {
   return (neuron0x2cff710()*0.0530754);
}

double NNfunction-ss_uRdR::synapse0x2d15670() {
   return (neuron0x2cffa50()*0.0455443);
}

double NNfunction-ss_uRdR::synapse0x2d156b0() {
   return (neuron0x2cffd90()*-0.828485);
}

double NNfunction-ss_uRdR::synapse0x2d156f0() {
   return (neuron0x2d000d0()*-0.213344);
}

double NNfunction-ss_uRdR::synapse0x2d15730() {
   return (neuron0x2d00410()*-0.175705);
}

double NNfunction-ss_uRdR::synapse0x2d15770() {
   return (neuron0x2d00750()*-0.344543);
}

double NNfunction-ss_uRdR::synapse0x2d157b0() {
   return (neuron0x2d00a90()*1.07722);
}

double NNfunction-ss_uRdR::synapse0x2d157f0() {
   return (neuron0x2d00dd0()*0.853068);
}

double NNfunction-ss_uRdR::synapse0x2d15830() {
   return (neuron0x2d01110()*-0.605596);
}

double NNfunction-ss_uRdR::synapse0x2d15870() {
   return (neuron0x2d01450()*2.01558);
}

double NNfunction-ss_uRdR::synapse0x2d158b0() {
   return (neuron0x2d01790()*0.393636);
}

double NNfunction-ss_uRdR::synapse0x2d15340() {
   return (neuron0x2d01ad0()*-0.188363);
}

double NNfunction-ss_uRdR::synapse0x2d15380() {
   return (neuron0x2d02030()*-0.688187);
}

double NNfunction-ss_uRdR::synapse0x2d15a00() {
   return (neuron0x2d02250()*-1.03397);
}

double NNfunction-ss_uRdR::synapse0x2d15a40() {
   return (neuron0x2d02590()*-0.143746);
}

double NNfunction-ss_uRdR::synapse0x2d15a80() {
   return (neuron0x2d028d0()*-0.0329555);
}

double NNfunction-ss_uRdR::synapse0x2d15ac0() {
   return (neuron0x2d02c10()*0.26146);
}

double NNfunction-ss_uRdR::synapse0x2d15b00() {
   return (neuron0x2d02f50()*-0.0410644);
}

double NNfunction-ss_uRdR::synapse0x2d15b40() {
   return (neuron0x2d03290()*0.126304);
}

double NNfunction-ss_uRdR::synapse0x2d15ec0() {
   return (neuron0x2cfe6d0()*-0.0520807);
}

double NNfunction-ss_uRdR::synapse0x2d15f00() {
   return (neuron0x2cfea10()*-0.124255);
}

double NNfunction-ss_uRdR::synapse0x2d15f40() {
   return (neuron0x2cfed50()*0.0790143);
}

double NNfunction-ss_uRdR::synapse0x2d15f80() {
   return (neuron0x2cff090()*-0.817784);
}

double NNfunction-ss_uRdR::synapse0x2d15fc0() {
   return (neuron0x2cff3d0()*-0.345217);
}

double NNfunction-ss_uRdR::synapse0x2d16000() {
   return (neuron0x2cff710()*-0.160654);
}

double NNfunction-ss_uRdR::synapse0x2d16040() {
   return (neuron0x2cffa50()*0.12034);
}

double NNfunction-ss_uRdR::synapse0x2d16080() {
   return (neuron0x2cffd90()*-0.225896);
}

double NNfunction-ss_uRdR::synapse0x2d160c0() {
   return (neuron0x2d000d0()*0.247085);
}

double NNfunction-ss_uRdR::synapse0x2d16100() {
   return (neuron0x2d00410()*-0.263269);
}

double NNfunction-ss_uRdR::synapse0x2d16140() {
   return (neuron0x2d00750()*0.187499);
}

double NNfunction-ss_uRdR::synapse0x2d16180() {
   return (neuron0x2d00a90()*-0.297256);
}

double NNfunction-ss_uRdR::synapse0x2d161c0() {
   return (neuron0x2d00dd0()*-0.219928);
}

double NNfunction-ss_uRdR::synapse0x2d16200() {
   return (neuron0x2d01110()*-0.463777);
}

double NNfunction-ss_uRdR::synapse0x2d16240() {
   return (neuron0x2d01450()*0.0462498);
}

double NNfunction-ss_uRdR::synapse0x2d16280() {
   return (neuron0x2d01790()*0.0078319);
}

double NNfunction-ss_uRdR::synapse0x2d15d10() {
   return (neuron0x2d01ad0()*-0.0709565);
}

double NNfunction-ss_uRdR::synapse0x2d15d50() {
   return (neuron0x2d02030()*0.739344);
}

double NNfunction-ss_uRdR::synapse0x2d163d0() {
   return (neuron0x2d02250()*-0.0355042);
}

double NNfunction-ss_uRdR::synapse0x2d16410() {
   return (neuron0x2d02590()*0.758209);
}

double NNfunction-ss_uRdR::synapse0x2d16450() {
   return (neuron0x2d028d0()*0.214147);
}

double NNfunction-ss_uRdR::synapse0x2d16490() {
   return (neuron0x2d02c10()*-0.307409);
}

double NNfunction-ss_uRdR::synapse0x2d164d0() {
   return (neuron0x2d02f50()*0.13254);
}

double NNfunction-ss_uRdR::synapse0x2d16510() {
   return (neuron0x2d03290()*0.402261);
}

double NNfunction-ss_uRdR::synapse0x2d16890() {
   return (neuron0x2cfe6d0()*0.0170885);
}

double NNfunction-ss_uRdR::synapse0x2d168d0() {
   return (neuron0x2cfea10()*0.105616);
}

double NNfunction-ss_uRdR::synapse0x2d16910() {
   return (neuron0x2cfed50()*0.132683);
}

double NNfunction-ss_uRdR::synapse0x2d16950() {
   return (neuron0x2cff090()*-0.195607);
}

double NNfunction-ss_uRdR::synapse0x2d16990() {
   return (neuron0x2cff3d0()*0.118446);
}

double NNfunction-ss_uRdR::synapse0x2d169d0() {
   return (neuron0x2cff710()*-0.290767);
}

double NNfunction-ss_uRdR::synapse0x2d16a10() {
   return (neuron0x2cffa50()*0.258324);
}

double NNfunction-ss_uRdR::synapse0x2d16a50() {
   return (neuron0x2cffd90()*-0.11106);
}

double NNfunction-ss_uRdR::synapse0x2d16a90() {
   return (neuron0x2d000d0()*0.0406925);
}

double NNfunction-ss_uRdR::synapse0x2d16ad0() {
   return (neuron0x2d00410()*-0.12857);
}

double NNfunction-ss_uRdR::synapse0x2d16b10() {
   return (neuron0x2d00750()*-0.0388238);
}

double NNfunction-ss_uRdR::synapse0x2d16b50() {
   return (neuron0x2d00a90()*0.18742);
}

double NNfunction-ss_uRdR::synapse0x2d16b90() {
   return (neuron0x2d00dd0()*1.5152);
}

double NNfunction-ss_uRdR::synapse0x2d16bd0() {
   return (neuron0x2d01110()*-0.0112626);
}

double NNfunction-ss_uRdR::synapse0x2d16c10() {
   return (neuron0x2d01450()*-1.03155);
}

double NNfunction-ss_uRdR::synapse0x2d16c50() {
   return (neuron0x2d01790()*0.0962033);
}

double NNfunction-ss_uRdR::synapse0x2d166e0() {
   return (neuron0x2d01ad0()*-0.238017);
}

double NNfunction-ss_uRdR::synapse0x2d16720() {
   return (neuron0x2d02030()*-0.0480124);
}

double NNfunction-ss_uRdR::synapse0x2d16da0() {
   return (neuron0x2d02250()*-0.439045);
}

double NNfunction-ss_uRdR::synapse0x2d16de0() {
   return (neuron0x2d02590()*0.0483978);
}

double NNfunction-ss_uRdR::synapse0x2d16e20() {
   return (neuron0x2d028d0()*-0.187686);
}

double NNfunction-ss_uRdR::synapse0x2d16e60() {
   return (neuron0x2d02c10()*0.4476);
}

double NNfunction-ss_uRdR::synapse0x2d16ea0() {
   return (neuron0x2d02f50()*-0.0183682);
}

double NNfunction-ss_uRdR::synapse0x2d16ee0() {
   return (neuron0x2d03290()*-0.0487102);
}

double NNfunction-ss_uRdR::synapse0x2d17260() {
   return (neuron0x2cfe6d0()*-0.115407);
}

double NNfunction-ss_uRdR::synapse0x2d172a0() {
   return (neuron0x2cfea10()*0.961336);
}

double NNfunction-ss_uRdR::synapse0x2d172e0() {
   return (neuron0x2cfed50()*0.377846);
}

double NNfunction-ss_uRdR::synapse0x2d17320() {
   return (neuron0x2cff090()*0.21456);
}

double NNfunction-ss_uRdR::synapse0x2d17360() {
   return (neuron0x2cff3d0()*-0.0874209);
}

double NNfunction-ss_uRdR::synapse0x2d173a0() {
   return (neuron0x2cff710()*0.122591);
}

double NNfunction-ss_uRdR::synapse0x2d173e0() {
   return (neuron0x2cffa50()*-0.67197);
}

double NNfunction-ss_uRdR::synapse0x2d17420() {
   return (neuron0x2cffd90()*-0.268065);
}

double NNfunction-ss_uRdR::synapse0x2d17460() {
   return (neuron0x2d000d0()*0.0623606);
}

double NNfunction-ss_uRdR::synapse0x2d174a0() {
   return (neuron0x2d00410()*0.198124);
}

double NNfunction-ss_uRdR::synapse0x2d174e0() {
   return (neuron0x2d00750()*-0.393432);
}

double NNfunction-ss_uRdR::synapse0x2d17520() {
   return (neuron0x2d00a90()*0.503386);
}

double NNfunction-ss_uRdR::synapse0x2d17560() {
   return (neuron0x2d00dd0()*-0.593953);
}

double NNfunction-ss_uRdR::synapse0x2d175a0() {
   return (neuron0x2d01110()*-0.705671);
}

double NNfunction-ss_uRdR::synapse0x2d175e0() {
   return (neuron0x2d01450()*0.0263697);
}

double NNfunction-ss_uRdR::synapse0x2d17620() {
   return (neuron0x2d01790()*-0.560452);
}

double NNfunction-ss_uRdR::synapse0x2d170b0() {
   return (neuron0x2d01ad0()*0.508899);
}

double NNfunction-ss_uRdR::synapse0x2d170f0() {
   return (neuron0x2d02030()*1.06769);
}

double NNfunction-ss_uRdR::synapse0x2d17770() {
   return (neuron0x2d02250()*0.513558);
}

double NNfunction-ss_uRdR::synapse0x2d177b0() {
   return (neuron0x2d02590()*-0.331156);
}

double NNfunction-ss_uRdR::synapse0x2d177f0() {
   return (neuron0x2d028d0()*-0.0379938);
}

double NNfunction-ss_uRdR::synapse0x2d17830() {
   return (neuron0x2d02c10()*0.483069);
}

double NNfunction-ss_uRdR::synapse0x2d17870() {
   return (neuron0x2d02f50()*-0.40471);
}

double NNfunction-ss_uRdR::synapse0x2d178b0() {
   return (neuron0x2d03290()*0.105878);
}

double NNfunction-ss_uRdR::synapse0x2d17c30() {
   return (neuron0x2cfe6d0()*0.00361327);
}

double NNfunction-ss_uRdR::synapse0x2d17c70() {
   return (neuron0x2cfea10()*0.00157462);
}

double NNfunction-ss_uRdR::synapse0x2d17cb0() {
   return (neuron0x2cfed50()*0.00524735);
}

double NNfunction-ss_uRdR::synapse0x2d17cf0() {
   return (neuron0x2cff090()*2.11332);
}

double NNfunction-ss_uRdR::synapse0x2d17d30() {
   return (neuron0x2cff3d0()*-0.018771);
}

double NNfunction-ss_uRdR::synapse0x2d17d70() {
   return (neuron0x2cff710()*-0.00417016);
}

double NNfunction-ss_uRdR::synapse0x2d17db0() {
   return (neuron0x2cffa50()*-0.00374952);
}

double NNfunction-ss_uRdR::synapse0x2d17df0() {
   return (neuron0x2cffd90()*0.0115109);
}

double NNfunction-ss_uRdR::synapse0x2d17e30() {
   return (neuron0x2d000d0()*0.0158851);
}

double NNfunction-ss_uRdR::synapse0x2d17e70() {
   return (neuron0x2d00410()*-0.0173876);
}

double NNfunction-ss_uRdR::synapse0x2d17eb0() {
   return (neuron0x2d00750()*-0.00106809);
}

double NNfunction-ss_uRdR::synapse0x2d17ef0() {
   return (neuron0x2d00a90()*-0.000666263);
}

double NNfunction-ss_uRdR::synapse0x2d17f30() {
   return (neuron0x2d00dd0()*0.0107866);
}

double NNfunction-ss_uRdR::synapse0x2d17f70() {
   return (neuron0x2d01110()*0.00859971);
}

double NNfunction-ss_uRdR::synapse0x2d17fb0() {
   return (neuron0x2d01450()*0.0117056);
}

double NNfunction-ss_uRdR::synapse0x2d17ff0() {
   return (neuron0x2d01790()*-0.0124397);
}

double NNfunction-ss_uRdR::synapse0x2d17a80() {
   return (neuron0x2d01ad0()*-0.014571);
}

double NNfunction-ss_uRdR::synapse0x2d17ac0() {
   return (neuron0x2d02030()*-0.0134088);
}

double NNfunction-ss_uRdR::synapse0x2d18140() {
   return (neuron0x2d02250()*0.016654);
}

double NNfunction-ss_uRdR::synapse0x2d18180() {
   return (neuron0x2d02590()*0.0089749);
}

double NNfunction-ss_uRdR::synapse0x2d181c0() {
   return (neuron0x2d028d0()*0.00176791);
}

double NNfunction-ss_uRdR::synapse0x2d18200() {
   return (neuron0x2d02c10()*-0.00248148);
}

double NNfunction-ss_uRdR::synapse0x2d18240() {
   return (neuron0x2d02f50()*0.0068623);
}

double NNfunction-ss_uRdR::synapse0x2d18280() {
   return (neuron0x2d03290()*-0.0240605);
}

double NNfunction-ss_uRdR::synapse0x2d18600() {
   return (neuron0x2cfe6d0()*0.00182048);
}

double NNfunction-ss_uRdR::synapse0x2d18640() {
   return (neuron0x2cfea10()*-0.236052);
}

double NNfunction-ss_uRdR::synapse0x2d18680() {
   return (neuron0x2cfed50()*0.19218);
}

double NNfunction-ss_uRdR::synapse0x2d186c0() {
   return (neuron0x2cff090()*-0.353894);
}

double NNfunction-ss_uRdR::synapse0x2d18700() {
   return (neuron0x2cff3d0()*-0.030394);
}

double NNfunction-ss_uRdR::synapse0x2d18740() {
   return (neuron0x2cff710()*0.490002);
}

double NNfunction-ss_uRdR::synapse0x2d18780() {
   return (neuron0x2cffa50()*-0.357359);
}

double NNfunction-ss_uRdR::synapse0x2d187c0() {
   return (neuron0x2cffd90()*0.250166);
}

double NNfunction-ss_uRdR::synapse0x2d18800() {
   return (neuron0x2d000d0()*-0.15091);
}

double NNfunction-ss_uRdR::synapse0x2d18840() {
   return (neuron0x2d00410()*0.173773);
}

double NNfunction-ss_uRdR::synapse0x2d18880() {
   return (neuron0x2d00750()*0.213246);
}

double NNfunction-ss_uRdR::synapse0x2d188c0() {
   return (neuron0x2d00a90()*-0.0915224);
}

double NNfunction-ss_uRdR::synapse0x2d18900() {
   return (neuron0x2d00dd0()*-2.47021);
}

double NNfunction-ss_uRdR::synapse0x2d18940() {
   return (neuron0x2d01110()*0.21428);
}

double NNfunction-ss_uRdR::synapse0x2d18980() {
   return (neuron0x2d01450()*1.15038);
}

double NNfunction-ss_uRdR::synapse0x2d189c0() {
   return (neuron0x2d01790()*-0.228291);
}

double NNfunction-ss_uRdR::synapse0x2d18450() {
   return (neuron0x2d01ad0()*0.239847);
}

double NNfunction-ss_uRdR::synapse0x2d18490() {
   return (neuron0x2d02030()*-0.753188);
}

double NNfunction-ss_uRdR::synapse0x2d18b10() {
   return (neuron0x2d02250()*0.679769);
}

double NNfunction-ss_uRdR::synapse0x2d18b50() {
   return (neuron0x2d02590()*0.123439);
}

double NNfunction-ss_uRdR::synapse0x2d18b90() {
   return (neuron0x2d028d0()*-0.18316);
}

double NNfunction-ss_uRdR::synapse0x2d18bd0() {
   return (neuron0x2d02c10()*-0.506226);
}

double NNfunction-ss_uRdR::synapse0x2d18c10() {
   return (neuron0x2d02f50()*0.269293);
}

double NNfunction-ss_uRdR::synapse0x2d18c50() {
   return (neuron0x2d03290()*0.0770245);
}

double NNfunction-ss_uRdR::synapse0x2d18fd0() {
   return (neuron0x2cfe6d0()*-0.114573);
}

double NNfunction-ss_uRdR::synapse0x2d0d5a0() {
   return (neuron0x2cfea10()*0.0257851);
}

double NNfunction-ss_uRdR::synapse0x2d0d5e0() {
   return (neuron0x2cfed50()*-1.00167);
}

double NNfunction-ss_uRdR::synapse0x2d0d620() {
   return (neuron0x2cff090()*0.849366);
}

double NNfunction-ss_uRdR::synapse0x2d0d870() {
   return (neuron0x2cff3d0()*-0.160818);
}

double NNfunction-ss_uRdR::synapse0x2d0d8b0() {
   return (neuron0x2cff710()*0.338565);
}

double NNfunction-ss_uRdR::synapse0x2d0d8f0() {
   return (neuron0x2cffa50()*-1.0902);
}

double NNfunction-ss_uRdR::synapse0x2d0db40() {
   return (neuron0x2cffd90()*0.884258);
}

double NNfunction-ss_uRdR::synapse0x2d0db80() {
   return (neuron0x2d000d0()*-0.876035);
}

double NNfunction-ss_uRdR::synapse0x2d0ddd0() {
   return (neuron0x2d00410()*0.180077);
}

double NNfunction-ss_uRdR::synapse0x2d0de10() {
   return (neuron0x2d00750()*0.405005);
}

double NNfunction-ss_uRdR::synapse0x2d0de50() {
   return (neuron0x2d00a90()*0.114629);
}

double NNfunction-ss_uRdR::synapse0x2d0e0a0() {
   return (neuron0x2d00dd0()*0.205961);
}

double NNfunction-ss_uRdR::synapse0x2d0e0e0() {
   return (neuron0x2d01110()*-0.752051);
}

double NNfunction-ss_uRdR::synapse0x2d0e330() {
   return (neuron0x2d01450()*-0.47637);
}

double NNfunction-ss_uRdR::synapse0x2d0e370() {
   return (neuron0x2d01790()*1.09173);
}

double NNfunction-ss_uRdR::synapse0x2d18e20() {
   return (neuron0x2d01ad0()*-0.0436168);
}

double NNfunction-ss_uRdR::synapse0x2d18e60() {
   return (neuron0x2d02030()*0.59836);
}

double NNfunction-ss_uRdR::synapse0x2d0e4c0() {
   return (neuron0x2d02250()*0.360353);
}

double NNfunction-ss_uRdR::synapse0x2d0e9d0() {
   return (neuron0x2d02590()*-0.162962);
}

double NNfunction-ss_uRdR::synapse0x2d0ea10() {
   return (neuron0x2d028d0()*0.354991);
}

double NNfunction-ss_uRdR::synapse0x2d0ea50() {
   return (neuron0x2d02c10()*-0.64721);
}

double NNfunction-ss_uRdR::synapse0x2d0eca0() {
   return (neuron0x2d02f50()*0.0915694);
}

double NNfunction-ss_uRdR::synapse0x2d0ece0() {
   return (neuron0x2d03290()*0.262093);
}

double NNfunction-ss_uRdR::synapse0x2d0e590() {
   return (neuron0x2cfe6d0()*-0.377141);
}

double NNfunction-ss_uRdR::synapse0x2d0e5d0() {
   return (neuron0x2cfea10()*0.0182962);
}

double NNfunction-ss_uRdR::synapse0x2d0e610() {
   return (neuron0x2cfed50()*-0.248308);
}

double NNfunction-ss_uRdR::synapse0x2d0e650() {
   return (neuron0x2cff090()*-0.587727);
}

double NNfunction-ss_uRdR::synapse0x2d0efd0() {
   return (neuron0x2cff3d0()*-0.94555);
}

double NNfunction-ss_uRdR::synapse0x2d1b320() {
   return (neuron0x2cff710()*0.621479);
}

double NNfunction-ss_uRdR::synapse0x2d1b360() {
   return (neuron0x2cffa50()*0.234275);
}

double NNfunction-ss_uRdR::synapse0x2d1b3a0() {
   return (neuron0x2cffd90()*-0.10867);
}

double NNfunction-ss_uRdR::synapse0x2d1b3e0() {
   return (neuron0x2d000d0()*0.541526);
}

double NNfunction-ss_uRdR::synapse0x2d1b420() {
   return (neuron0x2d00410()*0.362302);
}

double NNfunction-ss_uRdR::synapse0x2d1b460() {
   return (neuron0x2d00750()*-0.864791);
}

double NNfunction-ss_uRdR::synapse0x2d1b4a0() {
   return (neuron0x2d00a90()*1.42147);
}

double NNfunction-ss_uRdR::synapse0x2d1b4e0() {
   return (neuron0x2d00dd0()*1.33139);
}

double NNfunction-ss_uRdR::synapse0x2d1b520() {
   return (neuron0x2d01110()*-0.501623);
}

double NNfunction-ss_uRdR::synapse0x2d1b560() {
   return (neuron0x2d01450()*0.424399);
}

double NNfunction-ss_uRdR::synapse0x2d1b5a0() {
   return (neuron0x2d01790()*0.591987);
}

double NNfunction-ss_uRdR::synapse0x2d0eeb0() {
   return (neuron0x2d01ad0()*0.286153);
}

double NNfunction-ss_uRdR::synapse0x2d0eef0() {
   return (neuron0x2d02030()*-0.869188);
}

double NNfunction-ss_uRdR::synapse0x2d1b6f0() {
   return (neuron0x2d02250()*-0.361224);
}

double NNfunction-ss_uRdR::synapse0x2d1b730() {
   return (neuron0x2d02590()*-1.0254);
}

double NNfunction-ss_uRdR::synapse0x2d1b770() {
   return (neuron0x2d028d0()*-0.390991);
}

double NNfunction-ss_uRdR::synapse0x2d1b7b0() {
   return (neuron0x2d02c10()*0.0117579);
}

double NNfunction-ss_uRdR::synapse0x2d1b7f0() {
   return (neuron0x2d02f50()*0.202347);
}

double NNfunction-ss_uRdR::synapse0x2d1b830() {
   return (neuron0x2d03290()*-0.166913);
}

double NNfunction-ss_uRdR::synapse0x2d1bbb0() {
   return (neuron0x2cfe6d0()*-0.00647658);
}

double NNfunction-ss_uRdR::synapse0x2d1bbf0() {
   return (neuron0x2cfea10()*0.00024445);
}

double NNfunction-ss_uRdR::synapse0x2d1bc30() {
   return (neuron0x2cfed50()*-0.0280852);
}

double NNfunction-ss_uRdR::synapse0x2d1bc70() {
   return (neuron0x2cff090()*0.0538759);
}

double NNfunction-ss_uRdR::synapse0x2d1bcb0() {
   return (neuron0x2cff3d0()*-0.014807);
}

double NNfunction-ss_uRdR::synapse0x2d1bcf0() {
   return (neuron0x2cff710()*-0.0126712);
}

double NNfunction-ss_uRdR::synapse0x2d1bd30() {
   return (neuron0x2cffa50()*-0.0242679);
}

double NNfunction-ss_uRdR::synapse0x2d1bd70() {
   return (neuron0x2cffd90()*-0.00734036);
}

double NNfunction-ss_uRdR::synapse0x2d1bdb0() {
   return (neuron0x2d000d0()*0.00721178);
}

double NNfunction-ss_uRdR::synapse0x2d1bdf0() {
   return (neuron0x2d00410()*-0.00721496);
}

double NNfunction-ss_uRdR::synapse0x2d1be30() {
   return (neuron0x2d00750()*-0.0196587);
}

double NNfunction-ss_uRdR::synapse0x2d1be70() {
   return (neuron0x2d00a90()*-0.00738621);
}

double NNfunction-ss_uRdR::synapse0x2d1beb0() {
   return (neuron0x2d00dd0()*0.0172207);
}

double NNfunction-ss_uRdR::synapse0x2d1bef0() {
   return (neuron0x2d01110()*0.0140265);
}

double NNfunction-ss_uRdR::synapse0x2d1bf30() {
   return (neuron0x2d01450()*0.759637);
}

double NNfunction-ss_uRdR::synapse0x2d1bf70() {
   return (neuron0x2d01790()*0.00611366);
}

double NNfunction-ss_uRdR::synapse0x2d1ba00() {
   return (neuron0x2d01ad0()*-0.0169531);
}

double NNfunction-ss_uRdR::synapse0x2d1ba40() {
   return (neuron0x2d02030()*-0.481579);
}

double NNfunction-ss_uRdR::synapse0x2d1c0c0() {
   return (neuron0x2d02250()*0.0263933);
}

double NNfunction-ss_uRdR::synapse0x2d1c100() {
   return (neuron0x2d02590()*0.0258166);
}

double NNfunction-ss_uRdR::synapse0x2d1c140() {
   return (neuron0x2d028d0()*-0.0069187);
}

double NNfunction-ss_uRdR::synapse0x2d1c180() {
   return (neuron0x2d02c10()*-0.00383898);
}

double NNfunction-ss_uRdR::synapse0x2d1c1c0() {
   return (neuron0x2d02f50()*0.0324683);
}

double NNfunction-ss_uRdR::synapse0x2d1c200() {
   return (neuron0x2d03290()*0.00716529);
}

double NNfunction-ss_uRdR::synapse0x2d1c580() {
   return (neuron0x2cfe6d0()*-0.243478);
}

double NNfunction-ss_uRdR::synapse0x2d1c5c0() {
   return (neuron0x2cfea10()*-0.129968);
}

double NNfunction-ss_uRdR::synapse0x2d1c600() {
   return (neuron0x2cfed50()*-0.030735);
}

double NNfunction-ss_uRdR::synapse0x2d1c640() {
   return (neuron0x2cff090()*1.48228);
}

double NNfunction-ss_uRdR::synapse0x2d1c680() {
   return (neuron0x2cff3d0()*-0.0579748);
}

double NNfunction-ss_uRdR::synapse0x2d1c6c0() {
   return (neuron0x2cff710()*-0.0592633);
}

double NNfunction-ss_uRdR::synapse0x2d1c700() {
   return (neuron0x2cffa50()*0.193767);
}

double NNfunction-ss_uRdR::synapse0x2d1c740() {
   return (neuron0x2cffd90()*-0.0486457);
}

double NNfunction-ss_uRdR::synapse0x2d1c780() {
   return (neuron0x2d000d0()*0.437837);
}

double NNfunction-ss_uRdR::synapse0x2d1c7c0() {
   return (neuron0x2d00410()*-0.210011);
}

double NNfunction-ss_uRdR::synapse0x2d1c800() {
   return (neuron0x2d00750()*-0.678518);
}

double NNfunction-ss_uRdR::synapse0x2d1c840() {
   return (neuron0x2d00a90()*-0.592934);
}

double NNfunction-ss_uRdR::synapse0x2d1c880() {
   return (neuron0x2d00dd0()*0.00603583);
}

double NNfunction-ss_uRdR::synapse0x2d1c8c0() {
   return (neuron0x2d01110()*0.111922);
}

double NNfunction-ss_uRdR::synapse0x2d1c900() {
   return (neuron0x2d01450()*0.99828);
}

double NNfunction-ss_uRdR::synapse0x2d1c940() {
   return (neuron0x2d01790()*0.376736);
}

double NNfunction-ss_uRdR::synapse0x2d1c3d0() {
   return (neuron0x2d01ad0()*-0.104987);
}

double NNfunction-ss_uRdR::synapse0x2d1c410() {
   return (neuron0x2d02030()*-1.62525);
}

double NNfunction-ss_uRdR::synapse0x2d1ca90() {
   return (neuron0x2d02250()*-0.0720554);
}

double NNfunction-ss_uRdR::synapse0x2d1cad0() {
   return (neuron0x2d02590()*0.599037);
}

double NNfunction-ss_uRdR::synapse0x2d1cb10() {
   return (neuron0x2d028d0()*0.0626217);
}

double NNfunction-ss_uRdR::synapse0x2d1cb50() {
   return (neuron0x2d02c10()*0.466512);
}

double NNfunction-ss_uRdR::synapse0x2d1cb90() {
   return (neuron0x2d02f50()*-0.410197);
}

double NNfunction-ss_uRdR::synapse0x2d1cbd0() {
   return (neuron0x2d03290()*-0.359633);
}

double NNfunction-ss_uRdR::synapse0x2d1cf50() {
   return (neuron0x2cfe6d0()*-0.0426783);
}

double NNfunction-ss_uRdR::synapse0x2d1cf90() {
   return (neuron0x2cfea10()*0.0528874);
}

double NNfunction-ss_uRdR::synapse0x2d1cfd0() {
   return (neuron0x2cfed50()*0.730526);
}

double NNfunction-ss_uRdR::synapse0x2d1d010() {
   return (neuron0x2cff090()*-0.0620521);
}

double NNfunction-ss_uRdR::synapse0x2d1d050() {
   return (neuron0x2cff3d0()*0.430671);
}

double NNfunction-ss_uRdR::synapse0x2d1d090() {
   return (neuron0x2cff710()*-0.0756271);
}

double NNfunction-ss_uRdR::synapse0x2d1d0d0() {
   return (neuron0x2cffa50()*0.327076);
}

double NNfunction-ss_uRdR::synapse0x2d1d110() {
   return (neuron0x2cffd90()*0.404403);
}

double NNfunction-ss_uRdR::synapse0x2d1d150() {
   return (neuron0x2d000d0()*0.358327);
}

double NNfunction-ss_uRdR::synapse0x2d1d190() {
   return (neuron0x2d00410()*-0.0298117);
}

double NNfunction-ss_uRdR::synapse0x2d1d1d0() {
   return (neuron0x2d00750()*-0.22637);
}

double NNfunction-ss_uRdR::synapse0x2d1d210() {
   return (neuron0x2d00a90()*-1.31846);
}

double NNfunction-ss_uRdR::synapse0x2d1d250() {
   return (neuron0x2d00dd0()*-0.195165);
}

double NNfunction-ss_uRdR::synapse0x2d1d290() {
   return (neuron0x2d01110()*0.319425);
}

double NNfunction-ss_uRdR::synapse0x2d1d2d0() {
   return (neuron0x2d01450()*-0.603384);
}

double NNfunction-ss_uRdR::synapse0x2d1d310() {
   return (neuron0x2d01790()*0.566339);
}

double NNfunction-ss_uRdR::synapse0x2d1cda0() {
   return (neuron0x2d01ad0()*0.290017);
}

double NNfunction-ss_uRdR::synapse0x2d1cde0() {
   return (neuron0x2d02030()*-0.163546);
}

double NNfunction-ss_uRdR::synapse0x2d1d460() {
   return (neuron0x2d02250()*0.505378);
}

double NNfunction-ss_uRdR::synapse0x2d1d4a0() {
   return (neuron0x2d02590()*-0.369432);
}

double NNfunction-ss_uRdR::synapse0x2d1d4e0() {
   return (neuron0x2d028d0()*0.236898);
}

double NNfunction-ss_uRdR::synapse0x2d1d520() {
   return (neuron0x2d02c10()*-0.148729);
}

double NNfunction-ss_uRdR::synapse0x2d1d560() {
   return (neuron0x2d02f50()*0.271587);
}

double NNfunction-ss_uRdR::synapse0x2d1d5a0() {
   return (neuron0x2d03290()*0.105427);
}

double NNfunction-ss_uRdR::synapse0x2d1d920() {
   return (neuron0x2cfe6d0()*-0.112664);
}

double NNfunction-ss_uRdR::synapse0x2d1d960() {
   return (neuron0x2cfea10()*0.353783);
}

double NNfunction-ss_uRdR::synapse0x2d1d9a0() {
   return (neuron0x2cfed50()*-0.401429);
}

double NNfunction-ss_uRdR::synapse0x2d1d9e0() {
   return (neuron0x2cff090()*1.57814);
}

double NNfunction-ss_uRdR::synapse0x2d1da20() {
   return (neuron0x2cff3d0()*-0.800984);
}

double NNfunction-ss_uRdR::synapse0x2d1da60() {
   return (neuron0x2cff710()*-0.799735);
}

double NNfunction-ss_uRdR::synapse0x2d1daa0() {
   return (neuron0x2cffa50()*0.708174);
}

double NNfunction-ss_uRdR::synapse0x2d1dae0() {
   return (neuron0x2cffd90()*-0.104935);
}

double NNfunction-ss_uRdR::synapse0x2d1db20() {
   return (neuron0x2d000d0()*-0.89191);
}

double NNfunction-ss_uRdR::synapse0x2d1db60() {
   return (neuron0x2d00410()*-1.5584);
}

double NNfunction-ss_uRdR::synapse0x2d1dba0() {
   return (neuron0x2d00750()*0.955854);
}

double NNfunction-ss_uRdR::synapse0x2d1dbe0() {
   return (neuron0x2d00a90()*0.16473);
}

double NNfunction-ss_uRdR::synapse0x2d1dc20() {
   return (neuron0x2d00dd0()*0.0844247);
}

double NNfunction-ss_uRdR::synapse0x2d1dc60() {
   return (neuron0x2d01110()*1.19252);
}

double NNfunction-ss_uRdR::synapse0x2d1dca0() {
   return (neuron0x2d01450()*-0.31439);
}

double NNfunction-ss_uRdR::synapse0x2d1dce0() {
   return (neuron0x2d01790()*1.0778);
}

double NNfunction-ss_uRdR::synapse0x2d1d770() {
   return (neuron0x2d01ad0()*-0.226521);
}

double NNfunction-ss_uRdR::synapse0x2d1d7b0() {
   return (neuron0x2d02030()*-0.587057);
}

double NNfunction-ss_uRdR::synapse0x2d1de30() {
   return (neuron0x2d02250()*0.89702);
}

double NNfunction-ss_uRdR::synapse0x2d1de70() {
   return (neuron0x2d02590()*-0.698278);
}

double NNfunction-ss_uRdR::synapse0x2d1deb0() {
   return (neuron0x2d028d0()*-0.925124);
}

double NNfunction-ss_uRdR::synapse0x2d1def0() {
   return (neuron0x2d02c10()*-0.439909);
}

double NNfunction-ss_uRdR::synapse0x2d1df30() {
   return (neuron0x2d02f50()*0.91808);
}

double NNfunction-ss_uRdR::synapse0x2d1df70() {
   return (neuron0x2d03290()*0.347918);
}

double NNfunction-ss_uRdR::synapse0x2d1e2f0() {
   return (neuron0x2cfe6d0()*-0.0198202);
}

double NNfunction-ss_uRdR::synapse0x2d1e330() {
   return (neuron0x2cfea10()*-0.363961);
}

double NNfunction-ss_uRdR::synapse0x2d1e370() {
   return (neuron0x2cfed50()*-0.380147);
}

double NNfunction-ss_uRdR::synapse0x2d1e3b0() {
   return (neuron0x2cff090()*0.091602);
}

double NNfunction-ss_uRdR::synapse0x2d1e3f0() {
   return (neuron0x2cff3d0()*0.0542911);
}

double NNfunction-ss_uRdR::synapse0x2d1e430() {
   return (neuron0x2cff710()*-0.0085619);
}

double NNfunction-ss_uRdR::synapse0x2d1e470() {
   return (neuron0x2cffa50()*0.111858);
}

double NNfunction-ss_uRdR::synapse0x2d1e4b0() {
   return (neuron0x2cffd90()*0.107003);
}

double NNfunction-ss_uRdR::synapse0x2d1e4f0() {
   return (neuron0x2d000d0()*-0.0937693);
}

double NNfunction-ss_uRdR::synapse0x2d1e530() {
   return (neuron0x2d00410()*0.115154);
}

double NNfunction-ss_uRdR::synapse0x2d1e570() {
   return (neuron0x2d00750()*0.00172998);
}

double NNfunction-ss_uRdR::synapse0x2d1e5b0() {
   return (neuron0x2d00a90()*-0.50662);
}

double NNfunction-ss_uRdR::synapse0x2d1e5f0() {
   return (neuron0x2d00dd0()*-0.5468);
}

double NNfunction-ss_uRdR::synapse0x2d1e630() {
   return (neuron0x2d01110()*0.283527);
}

double NNfunction-ss_uRdR::synapse0x2d1e670() {
   return (neuron0x2d01450()*0.13613);
}

double NNfunction-ss_uRdR::synapse0x2d1e6b0() {
   return (neuron0x2d01790()*0.160373);
}

double NNfunction-ss_uRdR::synapse0x2d1e140() {
   return (neuron0x2d01ad0()*0.104586);
}

double NNfunction-ss_uRdR::synapse0x2d1e180() {
   return (neuron0x2d02030()*0.177502);
}

double NNfunction-ss_uRdR::synapse0x2d1e800() {
   return (neuron0x2d02250()*0.149023);
}

double NNfunction-ss_uRdR::synapse0x2d1e840() {
   return (neuron0x2d02590()*-0.0208038);
}

double NNfunction-ss_uRdR::synapse0x2d1e880() {
   return (neuron0x2d028d0()*-0.223494);
}

double NNfunction-ss_uRdR::synapse0x2d1e8c0() {
   return (neuron0x2d02c10()*0.170078);
}

double NNfunction-ss_uRdR::synapse0x2d1e900() {
   return (neuron0x2d02f50()*0.229462);
}

double NNfunction-ss_uRdR::synapse0x2d1e940() {
   return (neuron0x2d03290()*-0.10586);
}

double NNfunction-ss_uRdR::synapse0x2d1ecc0() {
   return (neuron0x2cfe6d0()*0.267146);
}

double NNfunction-ss_uRdR::synapse0x2d1ed00() {
   return (neuron0x2cfea10()*-0.769413);
}

double NNfunction-ss_uRdR::synapse0x2d1ed40() {
   return (neuron0x2cfed50()*1.229);
}

double NNfunction-ss_uRdR::synapse0x2d1ed80() {
   return (neuron0x2cff090()*0.429743);
}

double NNfunction-ss_uRdR::synapse0x2d1edc0() {
   return (neuron0x2cff3d0()*0.651163);
}

double NNfunction-ss_uRdR::synapse0x2d1ee00() {
   return (neuron0x2cff710()*-0.205065);
}

double NNfunction-ss_uRdR::synapse0x2d1ee40() {
   return (neuron0x2cffa50()*0.268405);
}

double NNfunction-ss_uRdR::synapse0x2d1ee80() {
   return (neuron0x2cffd90()*0.0657704);
}

double NNfunction-ss_uRdR::synapse0x2d1eec0() {
   return (neuron0x2d000d0()*1.11084);
}

double NNfunction-ss_uRdR::synapse0x2d1ef00() {
   return (neuron0x2d00410()*-0.476039);
}

double NNfunction-ss_uRdR::synapse0x2d1ef40() {
   return (neuron0x2d00750()*-0.658049);
}

double NNfunction-ss_uRdR::synapse0x2d1ef80() {
   return (neuron0x2d00a90()*-0.694004);
}

double NNfunction-ss_uRdR::synapse0x2d1efc0() {
   return (neuron0x2d00dd0()*-0.0798454);
}

double NNfunction-ss_uRdR::synapse0x2d1f000() {
   return (neuron0x2d01110()*-0.260016);
}

double NNfunction-ss_uRdR::synapse0x2d1f040() {
   return (neuron0x2d01450()*-0.402253);
}

double NNfunction-ss_uRdR::synapse0x2d1f080() {
   return (neuron0x2d01790()*-0.322894);
}

double NNfunction-ss_uRdR::synapse0x2d1eb10() {
   return (neuron0x2d01ad0()*-0.306616);
}

double NNfunction-ss_uRdR::synapse0x2d1eb50() {
   return (neuron0x2d02030()*0.137723);
}

double NNfunction-ss_uRdR::synapse0x2d1f1d0() {
   return (neuron0x2d02250()*-0.502285);
}

double NNfunction-ss_uRdR::synapse0x2d1f210() {
   return (neuron0x2d02590()*0.355569);
}

double NNfunction-ss_uRdR::synapse0x2d1f250() {
   return (neuron0x2d028d0()*-0.164908);
}

double NNfunction-ss_uRdR::synapse0x2d1f290() {
   return (neuron0x2d02c10()*0.0321922);
}

double NNfunction-ss_uRdR::synapse0x2d1f2d0() {
   return (neuron0x2d02f50()*0.159561);
}

double NNfunction-ss_uRdR::synapse0x2d1f310() {
   return (neuron0x2d03290()*-0.228817);
}

double NNfunction-ss_uRdR::synapse0x2d1f690() {
   return (neuron0x2cfe6d0()*-0.0983677);
}

double NNfunction-ss_uRdR::synapse0x2d1f6d0() {
   return (neuron0x2cfea10()*-0.137114);
}

double NNfunction-ss_uRdR::synapse0x2d1f710() {
   return (neuron0x2cfed50()*0.252235);
}

double NNfunction-ss_uRdR::synapse0x2d1f750() {
   return (neuron0x2cff090()*0.211176);
}

double NNfunction-ss_uRdR::synapse0x2d1f790() {
   return (neuron0x2cff3d0()*-0.113499);
}

double NNfunction-ss_uRdR::synapse0x2d1f7d0() {
   return (neuron0x2cff710()*0.302992);
}

double NNfunction-ss_uRdR::synapse0x2d1f810() {
   return (neuron0x2cffa50()*0.384617);
}

double NNfunction-ss_uRdR::synapse0x2d1f850() {
   return (neuron0x2cffd90()*-0.102364);
}

double NNfunction-ss_uRdR::synapse0x2d1f890() {
   return (neuron0x2d000d0()*0.359443);
}

double NNfunction-ss_uRdR::synapse0x2d1f8d0() {
   return (neuron0x2d00410()*-0.139223);
}

double NNfunction-ss_uRdR::synapse0x2d1f910() {
   return (neuron0x2d00750()*0.468483);
}

double NNfunction-ss_uRdR::synapse0x2d1f950() {
   return (neuron0x2d00a90()*0.177194);
}

double NNfunction-ss_uRdR::synapse0x2d1f990() {
   return (neuron0x2d00dd0()*-0.331315);
}

double NNfunction-ss_uRdR::synapse0x2d1f9d0() {
   return (neuron0x2d01110()*0.456473);
}

double NNfunction-ss_uRdR::synapse0x2d1fa10() {
   return (neuron0x2d01450()*0.607641);
}

double NNfunction-ss_uRdR::synapse0x2d1fa50() {
   return (neuron0x2d01790()*-0.366551);
}

double NNfunction-ss_uRdR::synapse0x2d1f4e0() {
   return (neuron0x2d01ad0()*-0.0621676);
}

double NNfunction-ss_uRdR::synapse0x2d1f520() {
   return (neuron0x2d02030()*-0.28536);
}

double NNfunction-ss_uRdR::synapse0x2d1fba0() {
   return (neuron0x2d02250()*0.13862);
}

double NNfunction-ss_uRdR::synapse0x2d1fbe0() {
   return (neuron0x2d02590()*-0.3442);
}

double NNfunction-ss_uRdR::synapse0x2d1fc20() {
   return (neuron0x2d028d0()*-0.365586);
}

double NNfunction-ss_uRdR::synapse0x2d1fc60() {
   return (neuron0x2d02c10()*0.175816);
}

double NNfunction-ss_uRdR::synapse0x2d1fca0() {
   return (neuron0x2d02f50()*0.171294);
}

double NNfunction-ss_uRdR::synapse0x2d1fce0() {
   return (neuron0x2d03290()*0.272678);
}

double NNfunction-ss_uRdR::synapse0x2d08790() {
   return (neuron0x2cfe6d0()*-0.060384);
}

double NNfunction-ss_uRdR::synapse0x2d087d0() {
   return (neuron0x2cfea10()*-0.0367402);
}

double NNfunction-ss_uRdR::synapse0x2d08810() {
   return (neuron0x2cfed50()*-0.0241999);
}

double NNfunction-ss_uRdR::synapse0x2d08850() {
   return (neuron0x2cff090()*-1.09396);
}

double NNfunction-ss_uRdR::synapse0x2d08890() {
   return (neuron0x2cff3d0()*-0.00392601);
}

double NNfunction-ss_uRdR::synapse0x2d088d0() {
   return (neuron0x2cff710()*-0.030826);
}

double NNfunction-ss_uRdR::synapse0x2d08910() {
   return (neuron0x2cffa50()*0.0732031);
}

double NNfunction-ss_uRdR::synapse0x2d08950() {
   return (neuron0x2cffd90()*-0.0928719);
}

double NNfunction-ss_uRdR::synapse0x2d20470() {
   return (neuron0x2d000d0()*-0.0194786);
}

double NNfunction-ss_uRdR::synapse0x2d204b0() {
   return (neuron0x2d00410()*-0.00772051);
}

double NNfunction-ss_uRdR::synapse0x2d204f0() {
   return (neuron0x2d00750()*0.118896);
}

double NNfunction-ss_uRdR::synapse0x2d20530() {
   return (neuron0x2d00a90()*-0.0920592);
}

double NNfunction-ss_uRdR::synapse0x2d20570() {
   return (neuron0x2d00dd0()*-0.0637257);
}

double NNfunction-ss_uRdR::synapse0x2d205b0() {
   return (neuron0x2d01110()*-0.0392168);
}

double NNfunction-ss_uRdR::synapse0x2d205f0() {
   return (neuron0x2d01450()*1.66176);
}

double NNfunction-ss_uRdR::synapse0x2d20630() {
   return (neuron0x2d01790()*-0.0855216);
}

double NNfunction-ss_uRdR::synapse0x2d1feb0() {
   return (neuron0x2d01ad0()*-0.0305443);
}

double NNfunction-ss_uRdR::synapse0x2d1fef0() {
   return (neuron0x2d02030()*-0.681493);
}

double NNfunction-ss_uRdR::synapse0x2d20780() {
   return (neuron0x2d02250()*-0.187036);
}

double NNfunction-ss_uRdR::synapse0x2d207c0() {
   return (neuron0x2d02590()*-0.120713);
}

double NNfunction-ss_uRdR::synapse0x2d20800() {
   return (neuron0x2d028d0()*-0.113855);
}

double NNfunction-ss_uRdR::synapse0x2d20840() {
   return (neuron0x2d02c10()*-0.0268451);
}

double NNfunction-ss_uRdR::synapse0x2d20880() {
   return (neuron0x2d02f50()*0.194426);
}

double NNfunction-ss_uRdR::synapse0x2d208c0() {
   return (neuron0x2d03290()*-0.0150864);
}

double NNfunction-ss_uRdR::synapse0x2d20c40() {
   return (neuron0x2cfe6d0()*-0.106276);
}

double NNfunction-ss_uRdR::synapse0x2d20c80() {
   return (neuron0x2cfea10()*0.175781);
}

double NNfunction-ss_uRdR::synapse0x2d20cc0() {
   return (neuron0x2cfed50()*-0.174585);
}

double NNfunction-ss_uRdR::synapse0x2d20d00() {
   return (neuron0x2cff090()*-2.64601);
}

double NNfunction-ss_uRdR::synapse0x2d20d40() {
   return (neuron0x2cff3d0()*-0.333338);
}

double NNfunction-ss_uRdR::synapse0x2d20d80() {
   return (neuron0x2cff710()*-0.296338);
}

double NNfunction-ss_uRdR::synapse0x2d20dc0() {
   return (neuron0x2cffa50()*-0.261423);
}

double NNfunction-ss_uRdR::synapse0x2d20e00() {
   return (neuron0x2cffd90()*0.105417);
}

double NNfunction-ss_uRdR::synapse0x2d20e40() {
   return (neuron0x2d000d0()*-0.259216);
}

double NNfunction-ss_uRdR::synapse0x2d20e80() {
   return (neuron0x2d00410()*-0.424389);
}

double NNfunction-ss_uRdR::synapse0x2d20ec0() {
   return (neuron0x2d00750()*-0.0955977);
}

double NNfunction-ss_uRdR::synapse0x2d20f00() {
   return (neuron0x2d00a90()*-0.0891227);
}

double NNfunction-ss_uRdR::synapse0x2d20f40() {
   return (neuron0x2d00dd0()*-0.10114);
}

double NNfunction-ss_uRdR::synapse0x2d20f80() {
   return (neuron0x2d01110()*0.35206);
}

double NNfunction-ss_uRdR::synapse0x2d20fc0() {
   return (neuron0x2d01450()*0.811201);
}

double NNfunction-ss_uRdR::synapse0x2d21000() {
   return (neuron0x2d01790()*0.0409025);
}

double NNfunction-ss_uRdR::synapse0x2d20a90() {
   return (neuron0x2d01ad0()*-0.527035);
}

double NNfunction-ss_uRdR::synapse0x2d20ad0() {
   return (neuron0x2d02030()*0.954148);
}

double NNfunction-ss_uRdR::synapse0x2d21150() {
   return (neuron0x2d02250()*0.115683);
}

double NNfunction-ss_uRdR::synapse0x2d21190() {
   return (neuron0x2d02590()*-0.0975187);
}

double NNfunction-ss_uRdR::synapse0x2d211d0() {
   return (neuron0x2d028d0()*-0.502725);
}

double NNfunction-ss_uRdR::synapse0x2d21210() {
   return (neuron0x2d02c10()*0.0976687);
}

double NNfunction-ss_uRdR::synapse0x2d21250() {
   return (neuron0x2d02f50()*0.185501);
}

double NNfunction-ss_uRdR::synapse0x2d21290() {
   return (neuron0x2d03290()*0.0550735);
}

double NNfunction-ss_uRdR::synapse0x2d21610() {
   return (neuron0x2cfe6d0()*-0.0376979);
}

double NNfunction-ss_uRdR::synapse0x2d21650() {
   return (neuron0x2cfea10()*-0.00265117);
}

double NNfunction-ss_uRdR::synapse0x2d21690() {
   return (neuron0x2cfed50()*-0.0128165);
}

double NNfunction-ss_uRdR::synapse0x2d216d0() {
   return (neuron0x2cff090()*-0.184351);
}

double NNfunction-ss_uRdR::synapse0x2d21710() {
   return (neuron0x2cff3d0()*-0.0149647);
}

double NNfunction-ss_uRdR::synapse0x2d21750() {
   return (neuron0x2cff710()*-0.023577);
}

double NNfunction-ss_uRdR::synapse0x2d21790() {
   return (neuron0x2cffa50()*-0.00731678);
}

double NNfunction-ss_uRdR::synapse0x2d217d0() {
   return (neuron0x2cffd90()*0.00044791);
}

double NNfunction-ss_uRdR::synapse0x2d21810() {
   return (neuron0x2d000d0()*-0.0477234);
}

double NNfunction-ss_uRdR::synapse0x2d21850() {
   return (neuron0x2d00410()*-0.0260211);
}

double NNfunction-ss_uRdR::synapse0x2d21890() {
   return (neuron0x2d00750()*-0.0172195);
}

double NNfunction-ss_uRdR::synapse0x2d218d0() {
   return (neuron0x2d00a90()*-0.0145946);
}

double NNfunction-ss_uRdR::synapse0x2d21910() {
   return (neuron0x2d00dd0()*0.046542);
}

double NNfunction-ss_uRdR::synapse0x2d21950() {
   return (neuron0x2d01110()*0.0117596);
}

double NNfunction-ss_uRdR::synapse0x2d21990() {
   return (neuron0x2d01450()*0.0986879);
}

double NNfunction-ss_uRdR::synapse0x2d219d0() {
   return (neuron0x2d01790()*0.0198387);
}

double NNfunction-ss_uRdR::synapse0x2d21460() {
   return (neuron0x2d01ad0()*-0.0168099);
}

double NNfunction-ss_uRdR::synapse0x2d214a0() {
   return (neuron0x2d02030()*1.05622);
}

double NNfunction-ss_uRdR::synapse0x2d11fd0() {
   return (neuron0x2d02250()*0.0237421);
}

double NNfunction-ss_uRdR::synapse0x2d12010() {
   return (neuron0x2d02590()*-0.000425884);
}

double NNfunction-ss_uRdR::synapse0x2d12050() {
   return (neuron0x2d028d0()*-0.0101985);
}

double NNfunction-ss_uRdR::synapse0x2d12090() {
   return (neuron0x2d02c10()*-0.00278055);
}

double NNfunction-ss_uRdR::synapse0x2d120d0() {
   return (neuron0x2d02f50()*0.0589986);
}

double NNfunction-ss_uRdR::synapse0x2d12110() {
   return (neuron0x2d03290()*0.0158454);
}

double NNfunction-ss_uRdR::synapse0x2d12490() {
   return (neuron0x2cfe6d0()*-0.139828);
}

double NNfunction-ss_uRdR::synapse0x2d124d0() {
   return (neuron0x2cfea10()*-0.18679);
}

double NNfunction-ss_uRdR::synapse0x2d12510() {
   return (neuron0x2cfed50()*0.107743);
}

double NNfunction-ss_uRdR::synapse0x2d12550() {
   return (neuron0x2cff090()*0.20195);
}

double NNfunction-ss_uRdR::synapse0x2d12590() {
   return (neuron0x2cff3d0()*-0.00550152);
}

double NNfunction-ss_uRdR::synapse0x2d125d0() {
   return (neuron0x2cff710()*-0.155616);
}

double NNfunction-ss_uRdR::synapse0x2d12610() {
   return (neuron0x2cffa50()*-0.169538);
}

double NNfunction-ss_uRdR::synapse0x2d12650() {
   return (neuron0x2cffd90()*0.141887);
}

double NNfunction-ss_uRdR::synapse0x2d12690() {
   return (neuron0x2d000d0()*-0.0480832);
}

double NNfunction-ss_uRdR::synapse0x2d126d0() {
   return (neuron0x2d00410()*-0.151355);
}

double NNfunction-ss_uRdR::synapse0x2d12710() {
   return (neuron0x2d00750()*-0.271962);
}

double NNfunction-ss_uRdR::synapse0x2d12750() {
   return (neuron0x2d00a90()*0.441801);
}

double NNfunction-ss_uRdR::synapse0x2d12790() {
   return (neuron0x2d00dd0()*0.442297);
}

double NNfunction-ss_uRdR::synapse0x2d127d0() {
   return (neuron0x2d01110()*0.23312);
}

double NNfunction-ss_uRdR::synapse0x2d12810() {
   return (neuron0x2d01450()*0.0675388);
}

double NNfunction-ss_uRdR::synapse0x2d12850() {
   return (neuron0x2d01790()*0.373897);
}

double NNfunction-ss_uRdR::synapse0x2d122e0() {
   return (neuron0x2d01ad0()*-0.272225);
}

double NNfunction-ss_uRdR::synapse0x2d12320() {
   return (neuron0x2d02030()*0.598088);
}

double NNfunction-ss_uRdR::synapse0x2d129a0() {
   return (neuron0x2d02250()*0.305581);
}

double NNfunction-ss_uRdR::synapse0x2d129e0() {
   return (neuron0x2d02590()*0.200937);
}

double NNfunction-ss_uRdR::synapse0x2d12a20() {
   return (neuron0x2d028d0()*-0.490745);
}

double NNfunction-ss_uRdR::synapse0x2d12a60() {
   return (neuron0x2d02c10()*-0.146144);
}

double NNfunction-ss_uRdR::synapse0x2d12aa0() {
   return (neuron0x2d02f50()*0.309588);
}

double NNfunction-ss_uRdR::synapse0x2d12ae0() {
   return (neuron0x2d03290()*0.0378131);
}

double NNfunction-ss_uRdR::synapse0x2d12e60() {
   return (neuron0x2cfe6d0()*0.048664);
}

double NNfunction-ss_uRdR::synapse0x2d12ea0() {
   return (neuron0x2cfea10()*0.00718275);
}

double NNfunction-ss_uRdR::synapse0x2d12ee0() {
   return (neuron0x2cfed50()*0.0595328);
}

double NNfunction-ss_uRdR::synapse0x2d12f20() {
   return (neuron0x2cff090()*-1.0048);
}

double NNfunction-ss_uRdR::synapse0x2d12f60() {
   return (neuron0x2cff3d0()*0.00679256);
}

double NNfunction-ss_uRdR::synapse0x2d12fa0() {
   return (neuron0x2cff710()*0.0161343);
}

double NNfunction-ss_uRdR::synapse0x2d12fe0() {
   return (neuron0x2cffa50()*0.0307074);
}

double NNfunction-ss_uRdR::synapse0x2d13020() {
   return (neuron0x2cffd90()*0.0342514);
}

double NNfunction-ss_uRdR::synapse0x2d13060() {
   return (neuron0x2d000d0()*0.0377265);
}

double NNfunction-ss_uRdR::synapse0x2d130a0() {
   return (neuron0x2d00410()*0.0355608);
}

double NNfunction-ss_uRdR::synapse0x2d130e0() {
   return (neuron0x2d00750()*-0.013705);
}

double NNfunction-ss_uRdR::synapse0x2d13120() {
   return (neuron0x2d00a90()*-0.00770935);
}

double NNfunction-ss_uRdR::synapse0x2d13160() {
   return (neuron0x2d00dd0()*0.0109583);
}

double NNfunction-ss_uRdR::synapse0x2d131a0() {
   return (neuron0x2d01110()*-0.0288317);
}

double NNfunction-ss_uRdR::synapse0x2d131e0() {
   return (neuron0x2d01450()*0.63954);
}

double NNfunction-ss_uRdR::synapse0x2d13220() {
   return (neuron0x2d01790()*0.00334758);
}

double NNfunction-ss_uRdR::synapse0x2d12cb0() {
   return (neuron0x2d01ad0()*0.0337443);
}

double NNfunction-ss_uRdR::synapse0x2d12cf0() {
   return (neuron0x2d02030()*0.77554);
}

double NNfunction-ss_uRdR::synapse0x2d13370() {
   return (neuron0x2d02250()*-0.0153998);
}

double NNfunction-ss_uRdR::synapse0x2d133b0() {
   return (neuron0x2d02590()*0.0961385);
}

double NNfunction-ss_uRdR::synapse0x2d133f0() {
   return (neuron0x2d028d0()*-0.00183557);
}

double NNfunction-ss_uRdR::synapse0x2d13430() {
   return (neuron0x2d02c10()*-0.0167573);
}

double NNfunction-ss_uRdR::synapse0x2d13470() {
   return (neuron0x2d02f50()*-0.0364402);
}

double NNfunction-ss_uRdR::synapse0x2d134b0() {
   return (neuron0x2d03290()*-0.0155117);
}

double NNfunction-ss_uRdR::synapse0x2d13830() {
   return (neuron0x2cfe6d0()*-0.0134387);
}

double NNfunction-ss_uRdR::synapse0x2d13870() {
   return (neuron0x2cfea10()*-0.00414791);
}

double NNfunction-ss_uRdR::synapse0x2d138b0() {
   return (neuron0x2cfed50()*-0.0341983);
}

double NNfunction-ss_uRdR::synapse0x2d138f0() {
   return (neuron0x2cff090()*0.632299);
}

double NNfunction-ss_uRdR::synapse0x2d13930() {
   return (neuron0x2cff3d0()*0.00854089);
}

double NNfunction-ss_uRdR::synapse0x2d13970() {
   return (neuron0x2cff710()*-0.0132494);
}

double NNfunction-ss_uRdR::synapse0x2d139b0() {
   return (neuron0x2cffa50()*-0.00540092);
}

double NNfunction-ss_uRdR::synapse0x2d139f0() {
   return (neuron0x2cffd90()*0.00201289);
}

double NNfunction-ss_uRdR::synapse0x2d13a30() {
   return (neuron0x2d000d0()*-0.0263489);
}

double NNfunction-ss_uRdR::synapse0x2d13a70() {
   return (neuron0x2d00410()*-0.0203258);
}

double NNfunction-ss_uRdR::synapse0x2d13ab0() {
   return (neuron0x2d00750()*0.000388043);
}

double NNfunction-ss_uRdR::synapse0x2d13af0() {
   return (neuron0x2d00a90()*-0.0496816);
}

double NNfunction-ss_uRdR::synapse0x2d13b30() {
   return (neuron0x2d00dd0()*-0.087394);
}

double NNfunction-ss_uRdR::synapse0x2d13b70() {
   return (neuron0x2d01110()*0.0385598);
}

double NNfunction-ss_uRdR::synapse0x2d13bb0() {
   return (neuron0x2d01450()*0.0884732);
}

double NNfunction-ss_uRdR::synapse0x2d13bf0() {
   return (neuron0x2d01790()*0.00103482);
}

double NNfunction-ss_uRdR::synapse0x2d13680() {
   return (neuron0x2d01ad0()*0.00651217);
}

double NNfunction-ss_uRdR::synapse0x2d136c0() {
   return (neuron0x2d02030()*0.0122068);
}

double NNfunction-ss_uRdR::synapse0x2d13d40() {
   return (neuron0x2d02250()*-0.0242945);
}

double NNfunction-ss_uRdR::synapse0x2d13d80() {
   return (neuron0x2d02590()*-0.0585832);
}

double NNfunction-ss_uRdR::synapse0x2d13dc0() {
   return (neuron0x2d028d0()*-0.0404434);
}

double NNfunction-ss_uRdR::synapse0x2d13e00() {
   return (neuron0x2d02c10()*-0.00332317);
}

double NNfunction-ss_uRdR::synapse0x2d13e40() {
   return (neuron0x2d02f50()*0.000535825);
}

double NNfunction-ss_uRdR::synapse0x2d13e80() {
   return (neuron0x2d03290()*0.014365);
}

double NNfunction-ss_uRdR::synapse0x2d25d50() {
   return (neuron0x2cfe6d0()*-0.0973973);
}

double NNfunction-ss_uRdR::synapse0x2d25d90() {
   return (neuron0x2cfea10()*0.164456);
}

double NNfunction-ss_uRdR::synapse0x2d25dd0() {
   return (neuron0x2cfed50()*0.223746);
}

double NNfunction-ss_uRdR::synapse0x2d25e10() {
   return (neuron0x2cff090()*1.05449);
}

double NNfunction-ss_uRdR::synapse0x2d25e50() {
   return (neuron0x2cff3d0()*-0.542875);
}

double NNfunction-ss_uRdR::synapse0x2d25e90() {
   return (neuron0x2cff710()*-0.762427);
}

double NNfunction-ss_uRdR::synapse0x2d25ed0() {
   return (neuron0x2cffa50()*-0.305759);
}

double NNfunction-ss_uRdR::synapse0x2d25f10() {
   return (neuron0x2cffd90()*-0.775122);
}

double NNfunction-ss_uRdR::synapse0x2d25f50() {
   return (neuron0x2d000d0()*0.0762951);
}

double NNfunction-ss_uRdR::synapse0x2d25f90() {
   return (neuron0x2d00410()*0.534042);
}

double NNfunction-ss_uRdR::synapse0x2d25fd0() {
   return (neuron0x2d00750()*0.501473);
}

double NNfunction-ss_uRdR::synapse0x2d26010() {
   return (neuron0x2d00a90()*-0.0752955);
}

double NNfunction-ss_uRdR::synapse0x2d26050() {
   return (neuron0x2d00dd0()*0.785386);
}

double NNfunction-ss_uRdR::synapse0x2d26090() {
   return (neuron0x2d01110()*0.294276);
}

double NNfunction-ss_uRdR::synapse0x2d260d0() {
   return (neuron0x2d01450()*-0.724681);
}

double NNfunction-ss_uRdR::synapse0x2d26110() {
   return (neuron0x2d01790()*-0.267565);
}

double NNfunction-ss_uRdR::synapse0x2d13ec0() {
   return (neuron0x2d01ad0()*-0.0671956);
}

double NNfunction-ss_uRdR::synapse0x2d13f00() {
   return (neuron0x2d02030()*-0.879106);
}

double NNfunction-ss_uRdR::synapse0x2d26260() {
   return (neuron0x2d02250()*0.224552);
}

double NNfunction-ss_uRdR::synapse0x2d262a0() {
   return (neuron0x2d02590()*-0.890649);
}

double NNfunction-ss_uRdR::synapse0x2d262e0() {
   return (neuron0x2d028d0()*-0.335515);
}

double NNfunction-ss_uRdR::synapse0x2d26320() {
   return (neuron0x2d02c10()*0.458041);
}

double NNfunction-ss_uRdR::synapse0x2d26360() {
   return (neuron0x2d02f50()*-0.0708235);
}

double NNfunction-ss_uRdR::synapse0x2d263a0() {
   return (neuron0x2d03290()*-0.00844196);
}

double NNfunction-ss_uRdR::synapse0x2d26720() {
   return (neuron0x2cfe6d0()*0.158192);
}

double NNfunction-ss_uRdR::synapse0x2d26760() {
   return (neuron0x2cfea10()*0.787734);
}

double NNfunction-ss_uRdR::synapse0x2d267a0() {
   return (neuron0x2cfed50()*0.889595);
}

double NNfunction-ss_uRdR::synapse0x2d267e0() {
   return (neuron0x2cff090()*-2.0198);
}

double NNfunction-ss_uRdR::synapse0x2d26820() {
   return (neuron0x2cff3d0()*0.712757);
}

double NNfunction-ss_uRdR::synapse0x2d26860() {
   return (neuron0x2cff710()*0.25086);
}

double NNfunction-ss_uRdR::synapse0x2d268a0() {
   return (neuron0x2cffa50()*0.457834);
}

double NNfunction-ss_uRdR::synapse0x2d268e0() {
   return (neuron0x2cffd90()*0.877719);
}

double NNfunction-ss_uRdR::synapse0x2d26920() {
   return (neuron0x2d000d0()*-0.162996);
}

double NNfunction-ss_uRdR::synapse0x2d26960() {
   return (neuron0x2d00410()*0.364731);
}

double NNfunction-ss_uRdR::synapse0x2d269a0() {
   return (neuron0x2d00750()*0.050352);
}

double NNfunction-ss_uRdR::synapse0x2d269e0() {
   return (neuron0x2d00a90()*-0.150019);
}

double NNfunction-ss_uRdR::synapse0x2d26a20() {
   return (neuron0x2d00dd0()*-0.610423);
}

double NNfunction-ss_uRdR::synapse0x2d26a60() {
   return (neuron0x2d01110()*-0.211737);
}

double NNfunction-ss_uRdR::synapse0x2d26aa0() {
   return (neuron0x2d01450()*-1.13708);
}

double NNfunction-ss_uRdR::synapse0x2d26ae0() {
   return (neuron0x2d01790()*0.254015);
}

double NNfunction-ss_uRdR::synapse0x2d26570() {
   return (neuron0x2d01ad0()*0.828893);
}

double NNfunction-ss_uRdR::synapse0x2d265b0() {
   return (neuron0x2d02030()*-0.573477);
}

double NNfunction-ss_uRdR::synapse0x2d26c30() {
   return (neuron0x2d02250()*0.658976);
}

double NNfunction-ss_uRdR::synapse0x2d26c70() {
   return (neuron0x2d02590()*0.156623);
}

double NNfunction-ss_uRdR::synapse0x2d26cb0() {
   return (neuron0x2d028d0()*1.10067);
}

double NNfunction-ss_uRdR::synapse0x2d26cf0() {
   return (neuron0x2d02c10()*-0.649459);
}

double NNfunction-ss_uRdR::synapse0x2d26d30() {
   return (neuron0x2d02f50()*0.0252497);
}

double NNfunction-ss_uRdR::synapse0x2d26d70() {
   return (neuron0x2d03290()*-0.178559);
}

double NNfunction-ss_uRdR::synapse0x2d270f0() {
   return (neuron0x2cfe6d0()*0.172715);
}

double NNfunction-ss_uRdR::synapse0x2d27130() {
   return (neuron0x2cfea10()*0.785363);
}

double NNfunction-ss_uRdR::synapse0x2d27170() {
   return (neuron0x2cfed50()*-0.676348);
}

double NNfunction-ss_uRdR::synapse0x2d271b0() {
   return (neuron0x2cff090()*-0.0224549);
}

double NNfunction-ss_uRdR::synapse0x2d271f0() {
   return (neuron0x2cff3d0()*0.504366);
}

double NNfunction-ss_uRdR::synapse0x2d27230() {
   return (neuron0x2cff710()*-0.319484);
}

double NNfunction-ss_uRdR::synapse0x2d27270() {
   return (neuron0x2cffa50()*-0.558252);
}

double NNfunction-ss_uRdR::synapse0x2d272b0() {
   return (neuron0x2cffd90()*-0.850582);
}

double NNfunction-ss_uRdR::synapse0x2d272f0() {
   return (neuron0x2d000d0()*-0.547188);
}

double NNfunction-ss_uRdR::synapse0x2d27330() {
   return (neuron0x2d00410()*-0.00336335);
}

double NNfunction-ss_uRdR::synapse0x2d27370() {
   return (neuron0x2d00750()*-1.01226);
}

double NNfunction-ss_uRdR::synapse0x2d273b0() {
   return (neuron0x2d00a90()*0.877113);
}

double NNfunction-ss_uRdR::synapse0x2d273f0() {
   return (neuron0x2d00dd0()*0.63558);
}

double NNfunction-ss_uRdR::synapse0x2d27430() {
   return (neuron0x2d01110()*-0.262657);
}

double NNfunction-ss_uRdR::synapse0x2d27470() {
   return (neuron0x2d01450()*-0.315424);
}

double NNfunction-ss_uRdR::synapse0x2d274b0() {
   return (neuron0x2d01790()*1.50629);
}

double NNfunction-ss_uRdR::synapse0x2d26f40() {
   return (neuron0x2d01ad0()*-0.0483583);
}

double NNfunction-ss_uRdR::synapse0x2d26f80() {
   return (neuron0x2d02030()*-0.147492);
}

double NNfunction-ss_uRdR::synapse0x2d27600() {
   return (neuron0x2d02250()*-0.778627);
}

double NNfunction-ss_uRdR::synapse0x2d27640() {
   return (neuron0x2d02590()*1.79095);
}

double NNfunction-ss_uRdR::synapse0x2d27680() {
   return (neuron0x2d028d0()*-0.119201);
}

double NNfunction-ss_uRdR::synapse0x2d276c0() {
   return (neuron0x2d02c10()*0.77334);
}

double NNfunction-ss_uRdR::synapse0x2d27700() {
   return (neuron0x2d02f50()*-0.466667);
}

double NNfunction-ss_uRdR::synapse0x2d27740() {
   return (neuron0x2d03290()*-0.386899);
}

double NNfunction-ss_uRdR::synapse0x2d27ac0() {
   return (neuron0x2cfe6d0()*-0.0180542);
}

double NNfunction-ss_uRdR::synapse0x2d27b00() {
   return (neuron0x2cfea10()*0.0050017);
}

double NNfunction-ss_uRdR::synapse0x2d27b40() {
   return (neuron0x2cfed50()*0.037293);
}

double NNfunction-ss_uRdR::synapse0x2d27b80() {
   return (neuron0x2cff090()*-6.31841);
}

double NNfunction-ss_uRdR::synapse0x2d27bc0() {
   return (neuron0x2cff3d0()*-0.00229373);
}

double NNfunction-ss_uRdR::synapse0x2d27c00() {
   return (neuron0x2cff710()*-0.0132173);
}

double NNfunction-ss_uRdR::synapse0x2d27c40() {
   return (neuron0x2cffa50()*0.00947332);
}

double NNfunction-ss_uRdR::synapse0x2d27c80() {
   return (neuron0x2cffd90()*0.028504);
}

double NNfunction-ss_uRdR::synapse0x2d27cc0() {
   return (neuron0x2d000d0()*0.00595076);
}

double NNfunction-ss_uRdR::synapse0x2d27d00() {
   return (neuron0x2d00410()*-0.0078483);
}

double NNfunction-ss_uRdR::synapse0x2d27d40() {
   return (neuron0x2d00750()*-0.00579341);
}

double NNfunction-ss_uRdR::synapse0x2d27d80() {
   return (neuron0x2d00a90()*0.00310798);
}

double NNfunction-ss_uRdR::synapse0x2d27dc0() {
   return (neuron0x2d00dd0()*-0.0353909);
}

double NNfunction-ss_uRdR::synapse0x2d27e00() {
   return (neuron0x2d01110()*-0.00409188);
}

double NNfunction-ss_uRdR::synapse0x2d27e40() {
   return (neuron0x2d01450()*-0.137953);
}

double NNfunction-ss_uRdR::synapse0x2d27e80() {
   return (neuron0x2d01790()*0.0244077);
}

double NNfunction-ss_uRdR::synapse0x2d27910() {
   return (neuron0x2d01ad0()*0.0193714);
}

double NNfunction-ss_uRdR::synapse0x2d27950() {
   return (neuron0x2d02030()*0.149727);
}

double NNfunction-ss_uRdR::synapse0x2d27fd0() {
   return (neuron0x2d02250()*0.0203847);
}

double NNfunction-ss_uRdR::synapse0x2d28010() {
   return (neuron0x2d02590()*0.0240204);
}

double NNfunction-ss_uRdR::synapse0x2d28050() {
   return (neuron0x2d028d0()*0.0252925);
}

double NNfunction-ss_uRdR::synapse0x2d28090() {
   return (neuron0x2d02c10()*-0.0174645);
}

double NNfunction-ss_uRdR::synapse0x2d280d0() {
   return (neuron0x2d02f50()*-0.00132465);
}

double NNfunction-ss_uRdR::synapse0x2d28110() {
   return (neuron0x2d03290()*-0.0144918);
}

double NNfunction-ss_uRdR::synapse0x2ac8010() {
   return (neuron0x2d03700()*-0.451331);
}

double NNfunction-ss_uRdR::synapse0x2ac8050() {
   return (neuron0x2d04050()*0.529601);
}

double NNfunction-ss_uRdR::synapse0x2d05bc0() {
   return (neuron0x2d04b30()*-0.308862);
}

double NNfunction-ss_uRdR::synapse0x2d05c00() {
   return (neuron0x2d045d0()*0.101595);
}

double NNfunction-ss_uRdR::synapse0x2d06590() {
   return (neuron0x2d05910()*-0.484848);
}

double NNfunction-ss_uRdR::synapse0x2d065d0() {
   return (neuron0x2d062e0()*-0.953103);
}

double NNfunction-ss_uRdR::synapse0x2d07360() {
   return (neuron0x2d070b0()*-1.01392);
}

double NNfunction-ss_uRdR::synapse0x2d073a0() {
   return (neuron0x2d07a80()*-0.165428);
}

double NNfunction-ss_uRdR::synapse0x2d07d30() {
   return (neuron0x2d08450()*-0.150889);
}

double NNfunction-ss_uRdR::synapse0x2d07d70() {
   return (neuron0x2d08f30()*0.25193);
}

double NNfunction-ss_uRdR::synapse0x2d08700() {
   return (neuron0x2d09900()*0.402122);
}

double NNfunction-ss_uRdR::synapse0x2d08740() {
   return (neuron0x2d069e0()*0.637195);
}

double NNfunction-ss_uRdR::synapse0x2d091e0() {
   return (neuron0x2d0b4b0()*-0.223581);
}

double NNfunction-ss_uRdR::synapse0x2d09220() {
   return (neuron0x2d0be80()*0.510209);
}

double NNfunction-ss_uRdR::synapse0x2d09bb0() {
   return (neuron0x2d0c850()*0.314441);
}

double NNfunction-ss_uRdR::synapse0x2d09bf0() {
   return (neuron0x2d0d220()*0.6073);
}

double NNfunction-ss_uRdR::synapse0x2d06c90() {
   return (neuron0x2d0f030()*0.285048);
}

double NNfunction-ss_uRdR::synapse0x2d06cd0() {
   return (neuron0x2d0f310()*-0.316649);
}

double NNfunction-ss_uRdR::synapse0x2d0b760() {
   return (neuron0x2d0fce0()*-0.255392);
}

double NNfunction-ss_uRdR::synapse0x2d0b7a0() {
   return (neuron0x2d106b0()*2.9971);
}

double NNfunction-ss_uRdR::synapse0x2d0c130() {
   return (neuron0x2d11080()*0.273029);
}

double NNfunction-ss_uRdR::synapse0x2d0c170() {
   return (neuron0x2d11a50()*-0.335032);
}

double NNfunction-ss_uRdR::synapse0x2d0cb00() {
   return (neuron0x2d0a5a0()*0.130175);
}

double NNfunction-ss_uRdR::synapse0x2d0cb40() {
   return (neuron0x2d0af70()*-0.331092);
}

double NNfunction-ss_uRdR::synapse0x2d0d4d0() {
   return (neuron0x2d147e0()*-0.471896);
}

double NNfunction-ss_uRdR::synapse0x2d0d510() {
   return (neuron0x2d151b0()*0.405925);
}

double NNfunction-ss_uRdR::synapse0x2d01670() {
   return (neuron0x2d15b80()*-0.81115);
}

double NNfunction-ss_uRdR::synapse0x2d016b0() {
   return (neuron0x2d16550()*-1.00014);
}

double NNfunction-ss_uRdR::synapse0x2d0f5c0() {
   return (neuron0x2d16f20()*-0.436042);
}

double NNfunction-ss_uRdR::synapse0x2d0f600() {
   return (neuron0x2d178f0()*-0.0158865);
}

double NNfunction-ss_uRdR::synapse0x2d0ff90() {
   return (neuron0x2d182c0()*-0.668646);
}

double NNfunction-ss_uRdR::synapse0x2d0ffd0() {
   return (neuron0x2d18c90()*0.24199);
}

double NNfunction-ss_uRdR::synapse0x2d10960() {
   return (neuron0x2d0ed20()*-0.241129);
}

double NNfunction-ss_uRdR::synapse0x2d109a0() {
   return (neuron0x2d1b870()*1.1711);
}

double NNfunction-ss_uRdR::synapse0x2d11330() {
   return (neuron0x2d1c240()*0.402287);
}

double NNfunction-ss_uRdR::synapse0x2d11370() {
   return (neuron0x2d1cc10()*0.378487);
}

double NNfunction-ss_uRdR::synapse0x2d11d00() {
   return (neuron0x2d1d5e0()*0.232946);
}

double NNfunction-ss_uRdR::synapse0x2d11d40() {
   return (neuron0x2d1dfb0()*-0.501187);
}

double NNfunction-ss_uRdR::synapse0x2d0a850() {
   return (neuron0x2d1e980()*0.243507);
}

double NNfunction-ss_uRdR::synapse0x2d0a890() {
   return (neuron0x2d1f350()*0.547644);
}

double NNfunction-ss_uRdR::synapse0x2d14100() {
   return (neuron0x2d1fd20()*-0.503335);
}

double NNfunction-ss_uRdR::synapse0x2d14140() {
   return (neuron0x2d20900()*0.766919);
}

double NNfunction-ss_uRdR::synapse0x2d14a90() {
   return (neuron0x2d212d0()*1.02053);
}

double NNfunction-ss_uRdR::synapse0x2d14ad0() {
   return (neuron0x2d12150()*0.171844);
}

double NNfunction-ss_uRdR::synapse0x2d15460() {
   return (neuron0x2d12b20()*-0.162042);
}

double NNfunction-ss_uRdR::synapse0x2d154a0() {
   return (neuron0x2d134f0()*1.84978);
}

double NNfunction-ss_uRdR::synapse0x2d15e30() {
   return (neuron0x2d25b30()*0.209927);
}

double NNfunction-ss_uRdR::synapse0x2d15e70() {
   return (neuron0x2d263e0()*-0.180071);
}

double NNfunction-ss_uRdR::synapse0x2d16800() {
   return (neuron0x2d26db0()*0.380373);
}

double NNfunction-ss_uRdR::synapse0x2d16840() {
   return (neuron0x2d27780()*-1.45093);
}

double NNfunction-ss_uRdR::synapse0x2d18f40() {
   return (neuron0x2d03700()*0.504534);
}

double NNfunction-ss_uRdR::synapse0x2d18f80() {
   return (neuron0x2d04050()*0.47262);
}

double NNfunction-ss_uRdR::synapse0x2d0e500() {
   return (neuron0x2d04b30()*0.438639);
}

double NNfunction-ss_uRdR::synapse0x2d0e540() {
   return (neuron0x2d045d0()*0.157822);
}

double NNfunction-ss_uRdR::synapse0x2d1bb20() {
   return (neuron0x2d05910()*0.648673);
}

double NNfunction-ss_uRdR::synapse0x2d1bb60() {
   return (neuron0x2d062e0()*0.487579);
}

double NNfunction-ss_uRdR::synapse0x2d1c4f0() {
   return (neuron0x2d070b0()*0.335719);
}

double NNfunction-ss_uRdR::synapse0x2d1c530() {
   return (neuron0x2d07a80()*0.604388);
}

double NNfunction-ss_uRdR::synapse0x2d1cec0() {
   return (neuron0x2d08450()*-0.144095);
}

double NNfunction-ss_uRdR::synapse0x2d1cf00() {
   return (neuron0x2d08f30()*0.00232809);
}

double NNfunction-ss_uRdR::synapse0x2d1d890() {
   return (neuron0x2d09900()*0.277135);
}

double NNfunction-ss_uRdR::synapse0x2d1d8d0() {
   return (neuron0x2d069e0()*0.423392);
}

double NNfunction-ss_uRdR::synapse0x2d1e260() {
   return (neuron0x2d0b4b0()*0.0601362);
}

double NNfunction-ss_uRdR::synapse0x2d1e2a0() {
   return (neuron0x2d0be80()*0.475741);
}

double NNfunction-ss_uRdR::synapse0x2d1ec30() {
   return (neuron0x2d0c850()*0.362856);
}

double NNfunction-ss_uRdR::synapse0x2d1ec70() {
   return (neuron0x2d0d220()*0.385055);
}

double NNfunction-ss_uRdR::synapse0x2d1f600() {
   return (neuron0x2d0f030()*-0.0978139);
}

double NNfunction-ss_uRdR::synapse0x2d1f640() {
   return (neuron0x2d0f310()*0.0584963);
}

double NNfunction-ss_uRdR::synapse0x2d1ffd0() {
   return (neuron0x2d0fce0()*0.684167);
}

double NNfunction-ss_uRdR::synapse0x2d20010() {
   return (neuron0x2d106b0()*0.373972);
}

double NNfunction-ss_uRdR::synapse0x2d20bb0() {
   return (neuron0x2d11080()*0.156211);
}

double NNfunction-ss_uRdR::synapse0x2d20bf0() {
   return (neuron0x2d11a50()*0.307124);
}

double NNfunction-ss_uRdR::synapse0x2d21580() {
   return (neuron0x2d0a5a0()*0.697417);
}

double NNfunction-ss_uRdR::synapse0x2d215c0() {
   return (neuron0x2d0af70()*0.45345);
}

double NNfunction-ss_uRdR::synapse0x2d12400() {
   return (neuron0x2d147e0()*0.315719);
}

double NNfunction-ss_uRdR::synapse0x2d12440() {
   return (neuron0x2d151b0()*0.518491);
}

double NNfunction-ss_uRdR::synapse0x2d12dd0() {
   return (neuron0x2d15b80()*0.181744);
}

double NNfunction-ss_uRdR::synapse0x2d12e10() {
   return (neuron0x2d16550()*-0.153693);
}

double NNfunction-ss_uRdR::synapse0x2d137a0() {
   return (neuron0x2d16f20()*0.260401);
}

double NNfunction-ss_uRdR::synapse0x2d137e0() {
   return (neuron0x2d178f0()*0.0760797);
}

double NNfunction-ss_uRdR::synapse0x2d25cc0() {
   return (neuron0x2d182c0()*0.668272);
}

double NNfunction-ss_uRdR::synapse0x2d25d00() {
   return (neuron0x2d18c90()*-0.135902);
}

double NNfunction-ss_uRdR::synapse0x2d26690() {
   return (neuron0x2d0ed20()*0.514708);
}

double NNfunction-ss_uRdR::synapse0x2d266d0() {
   return (neuron0x2d1b870()*0.277407);
}

double NNfunction-ss_uRdR::synapse0x2d27060() {
   return (neuron0x2d1c240()*0.0668391);
}

double NNfunction-ss_uRdR::synapse0x2d270a0() {
   return (neuron0x2d1cc10()*-0.177523);
}

double NNfunction-ss_uRdR::synapse0x2d27a30() {
   return (neuron0x2d1d5e0()*0.0912709);
}

double NNfunction-ss_uRdR::synapse0x2d27a70() {
   return (neuron0x2d1dfb0()*-0.0248469);
}

double NNfunction-ss_uRdR::synapse0x2d03920() {
   return (neuron0x2d1e980()*0.305987);
}

double NNfunction-ss_uRdR::synapse0x2d03960() {
   return (neuron0x2d1f350()*0.0203526);
}

double NNfunction-ss_uRdR::synapse0x2d171d0() {
   return (neuron0x2d1fd20()*0.395174);
}

double NNfunction-ss_uRdR::synapse0x2d17210() {
   return (neuron0x2d20900()*0.589167);
}

double NNfunction-ss_uRdR::synapse0x2d28150() {
   return (neuron0x2d212d0()*0.476644);
}

double NNfunction-ss_uRdR::synapse0x2d28190() {
   return (neuron0x2d12150()*0.601518);
}

double NNfunction-ss_uRdR::synapse0x2d281d0() {
   return (neuron0x2d12b20()*-0.00549136);
}

double NNfunction-ss_uRdR::synapse0x2d28210() {
   return (neuron0x2d134f0()*0.289831);
}

double NNfunction-ss_uRdR::synapse0x2d2f0c0() {
   return (neuron0x2d25b30()*0.435452);
}

double NNfunction-ss_uRdR::synapse0x2d2f100() {
   return (neuron0x2d263e0()*0.0348071);
}

double NNfunction-ss_uRdR::synapse0x2d2f140() {
   return (neuron0x2d26db0()*0.483931);
}

double NNfunction-ss_uRdR::synapse0x2d2f180() {
   return (neuron0x2d27780()*-0.11274);
}

double NNfunction-ss_uRdR::synapse0x2d2f500() {
   return (neuron0x2d03700()*-0.695558);
}

double NNfunction-ss_uRdR::synapse0x2d2f540() {
   return (neuron0x2d04050()*-1.73132);
}

double NNfunction-ss_uRdR::synapse0x2d2f580() {
   return (neuron0x2d04b30()*-0.615046);
}

double NNfunction-ss_uRdR::synapse0x2d2f5c0() {
   return (neuron0x2d045d0()*-3.64167);
}

double NNfunction-ss_uRdR::synapse0x2d2f600() {
   return (neuron0x2d05910()*-0.785705);
}

double NNfunction-ss_uRdR::synapse0x2d2f640() {
   return (neuron0x2d062e0()*-2.39114);
}

double NNfunction-ss_uRdR::synapse0x2d2f680() {
   return (neuron0x2d070b0()*-0.911732);
}

double NNfunction-ss_uRdR::synapse0x2d2f6c0() {
   return (neuron0x2d07a80()*-0.972919);
}

double NNfunction-ss_uRdR::synapse0x2d2f700() {
   return (neuron0x2d08450()*-1.76163);
}

double NNfunction-ss_uRdR::synapse0x2d2f740() {
   return (neuron0x2d08f30()*0.945686);
}

double NNfunction-ss_uRdR::synapse0x2d2f780() {
   return (neuron0x2d09900()*-1.44817);
}

double NNfunction-ss_uRdR::synapse0x2d2f7c0() {
   return (neuron0x2d069e0()*1.7022);
}

double NNfunction-ss_uRdR::synapse0x2d2f800() {
   return (neuron0x2d0b4b0()*-0.601006);
}

double NNfunction-ss_uRdR::synapse0x2d2f840() {
   return (neuron0x2d0be80()*0.9793);
}

double NNfunction-ss_uRdR::synapse0x2d2f880() {
   return (neuron0x2d0c850()*-0.239227);
}

double NNfunction-ss_uRdR::synapse0x2d2f8c0() {
   return (neuron0x2d0d220()*0.895764);
}

double NNfunction-ss_uRdR::synapse0x2d2f350() {
   return (neuron0x2d0f030()*0.954385);
}

double NNfunction-ss_uRdR::synapse0x2d2f390() {
   return (neuron0x2d0f310()*-0.657282);
}

double NNfunction-ss_uRdR::synapse0x2d2fa10() {
   return (neuron0x2d0fce0()*1.51963);
}

double NNfunction-ss_uRdR::synapse0x2d2fa50() {
   return (neuron0x2d106b0()*-2.45851);
}

double NNfunction-ss_uRdR::synapse0x2d2fa90() {
   return (neuron0x2d11080()*0.343945);
}

double NNfunction-ss_uRdR::synapse0x2d2fad0() {
   return (neuron0x2d11a50()*-1.3286);
}

double NNfunction-ss_uRdR::synapse0x2d2fb10() {
   return (neuron0x2d0a5a0()*1.08437);
}

double NNfunction-ss_uRdR::synapse0x2d2fb50() {
   return (neuron0x2d0af70()*0.0849721);
}

double NNfunction-ss_uRdR::synapse0x2d2fb90() {
   return (neuron0x2d147e0()*-1.58919);
}

double NNfunction-ss_uRdR::synapse0x2d2fbd0() {
   return (neuron0x2d151b0()*0.552249);
}

double NNfunction-ss_uRdR::synapse0x2d2fc10() {
   return (neuron0x2d15b80()*-1.28425);
}

double NNfunction-ss_uRdR::synapse0x2d2fc50() {
   return (neuron0x2d16550()*-0.330386);
}

double NNfunction-ss_uRdR::synapse0x2d2fc90() {
   return (neuron0x2d16f20()*-1.23348);
}

double NNfunction-ss_uRdR::synapse0x2d2fcd0() {
   return (neuron0x2d178f0()*-2.69177);
}

double NNfunction-ss_uRdR::synapse0x2d2fd10() {
   return (neuron0x2d182c0()*-0.150683);
}

double NNfunction-ss_uRdR::synapse0x2d2fd50() {
   return (neuron0x2d18c90()*0.845139);
}

double NNfunction-ss_uRdR::synapse0x2d2f900() {
   return (neuron0x2d0ed20()*-0.713284);
}

double NNfunction-ss_uRdR::synapse0x2d2f940() {
   return (neuron0x2d1b870()*-0.440725);
}

double NNfunction-ss_uRdR::synapse0x2d2f980() {
   return (neuron0x2d1c240()*0.758899);
}

double NNfunction-ss_uRdR::synapse0x2d2f9c0() {
   return (neuron0x2d1cc10()*1.14907);
}

double NNfunction-ss_uRdR::synapse0x2d2ffa0() {
   return (neuron0x2d1d5e0()*0.789599);
}

double NNfunction-ss_uRdR::synapse0x2d2ffe0() {
   return (neuron0x2d1dfb0()*-0.500936);
}

double NNfunction-ss_uRdR::synapse0x2d30020() {
   return (neuron0x2d1e980()*0.694368);
}

double NNfunction-ss_uRdR::synapse0x2d30060() {
   return (neuron0x2d1f350()*0.533108);
}

double NNfunction-ss_uRdR::synapse0x2d300a0() {
   return (neuron0x2d1fd20()*-1.16916);
}

double NNfunction-ss_uRdR::synapse0x2d300e0() {
   return (neuron0x2d20900()*0.753181);
}

double NNfunction-ss_uRdR::synapse0x2d30120() {
   return (neuron0x2d212d0()*-0.442172);
}

double NNfunction-ss_uRdR::synapse0x2d30160() {
   return (neuron0x2d12150()*-0.570815);
}

double NNfunction-ss_uRdR::synapse0x2d301a0() {
   return (neuron0x2d12b20()*-1.10563);
}

double NNfunction-ss_uRdR::synapse0x2d301e0() {
   return (neuron0x2d134f0()*-1.0053);
}

double NNfunction-ss_uRdR::synapse0x2d30220() {
   return (neuron0x2d25b30()*1.22151);
}

double NNfunction-ss_uRdR::synapse0x2d30260() {
   return (neuron0x2d263e0()*-1.41336);
}

double NNfunction-ss_uRdR::synapse0x2d302a0() {
   return (neuron0x2d26db0()*0.600485);
}

double NNfunction-ss_uRdR::synapse0x2d302e0() {
   return (neuron0x2d27780()*3.43095);
}

double NNfunction-ss_uRdR::synapse0x2d30660() {
   return (neuron0x2d03700()*-0.523501);
}

double NNfunction-ss_uRdR::synapse0x2d306a0() {
   return (neuron0x2d04050()*-0.169098);
}

double NNfunction-ss_uRdR::synapse0x2d306e0() {
   return (neuron0x2d04b30()*-0.421698);
}

double NNfunction-ss_uRdR::synapse0x2d30720() {
   return (neuron0x2d045d0()*1.30927);
}

double NNfunction-ss_uRdR::synapse0x2d30760() {
   return (neuron0x2d05910()*-0.608101);
}

double NNfunction-ss_uRdR::synapse0x2d307a0() {
   return (neuron0x2d062e0()*-1.17073);
}

double NNfunction-ss_uRdR::synapse0x2d307e0() {
   return (neuron0x2d070b0()*-0.935036);
}

double NNfunction-ss_uRdR::synapse0x2d30820() {
   return (neuron0x2d07a80()*-0.268993);
}

double NNfunction-ss_uRdR::synapse0x2d30860() {
   return (neuron0x2d08450()*-0.427854);
}

double NNfunction-ss_uRdR::synapse0x2d308a0() {
   return (neuron0x2d08f30()*-0.777895);
}

double NNfunction-ss_uRdR::synapse0x2d308e0() {
   return (neuron0x2d09900()*-0.399645);
}

double NNfunction-ss_uRdR::synapse0x2d30920() {
   return (neuron0x2d069e0()*0.881535);
}

double NNfunction-ss_uRdR::synapse0x2d30960() {
   return (neuron0x2d0b4b0()*-0.308199);
}

double NNfunction-ss_uRdR::synapse0x2d309a0() {
   return (neuron0x2d0be80()*0.572316);
}

double NNfunction-ss_uRdR::synapse0x2d309e0() {
   return (neuron0x2d0c850()*0.310843);
}

double NNfunction-ss_uRdR::synapse0x2d30a20() {
   return (neuron0x2d0d220()*0.817139);
}

double NNfunction-ss_uRdR::synapse0x2d304b0() {
   return (neuron0x2d0f030()*0.351798);
}

double NNfunction-ss_uRdR::synapse0x2d304f0() {
   return (neuron0x2d0f310()*-0.404091);
}

double NNfunction-ss_uRdR::synapse0x2d30b70() {
   return (neuron0x2d0fce0()*-0.922684);
}

double NNfunction-ss_uRdR::synapse0x2d30bb0() {
   return (neuron0x2d106b0()*0.337889);
}

double NNfunction-ss_uRdR::synapse0x2d30bf0() {
   return (neuron0x2d11080()*0.340185);
}

double NNfunction-ss_uRdR::synapse0x2d30c30() {
   return (neuron0x2d11a50()*-0.445584);
}

double NNfunction-ss_uRdR::synapse0x2d30c70() {
   return (neuron0x2d0a5a0()*0.154618);
}

double NNfunction-ss_uRdR::synapse0x2d30cb0() {
   return (neuron0x2d0af70()*1.08201);
}

double NNfunction-ss_uRdR::synapse0x2d30cf0() {
   return (neuron0x2d147e0()*-0.763547);
}

double NNfunction-ss_uRdR::synapse0x2d30d30() {
   return (neuron0x2d151b0()*0.520221);
}

double NNfunction-ss_uRdR::synapse0x2d30d70() {
   return (neuron0x2d15b80()*-0.975224);
}

double NNfunction-ss_uRdR::synapse0x2d30db0() {
   return (neuron0x2d16550()*-1.24207);
}

double NNfunction-ss_uRdR::synapse0x2d30df0() {
   return (neuron0x2d16f20()*-0.556795);
}

double NNfunction-ss_uRdR::synapse0x2d30e30() {
   return (neuron0x2d178f0()*-1.14974);
}

double NNfunction-ss_uRdR::synapse0x2d30e70() {
   return (neuron0x2d182c0()*-0.780894);
}

double NNfunction-ss_uRdR::synapse0x2d30eb0() {
   return (neuron0x2d18c90()*0.298705);
}

double NNfunction-ss_uRdR::synapse0x2d30a60() {
   return (neuron0x2d0ed20()*-0.334252);
}

double NNfunction-ss_uRdR::synapse0x2d30aa0() {
   return (neuron0x2d1b870()*-1.40947);
}

double NNfunction-ss_uRdR::synapse0x2d30ae0() {
   return (neuron0x2d1c240()*0.476944);
}

double NNfunction-ss_uRdR::synapse0x2d30b20() {
   return (neuron0x2d1cc10()*0.497143);
}

double NNfunction-ss_uRdR::synapse0x2d31100() {
   return (neuron0x2d1d5e0()*0.328662);
}

double NNfunction-ss_uRdR::synapse0x2d31140() {
   return (neuron0x2d1dfb0()*-0.46309);
}

double NNfunction-ss_uRdR::synapse0x2d31180() {
   return (neuron0x2d1e980()*0.292637);
}

double NNfunction-ss_uRdR::synapse0x2d311c0() {
   return (neuron0x2d1f350()*0.52185);
}

double NNfunction-ss_uRdR::synapse0x2d31200() {
   return (neuron0x2d1fd20()*0.218764);
}

double NNfunction-ss_uRdR::synapse0x2d31240() {
   return (neuron0x2d20900()*0.996633);
}

double NNfunction-ss_uRdR::synapse0x2d31280() {
   return (neuron0x2d212d0()*-0.544771);
}

double NNfunction-ss_uRdR::synapse0x2d312c0() {
   return (neuron0x2d12150()*0.36981);
}

double NNfunction-ss_uRdR::synapse0x2d31300() {
   return (neuron0x2d12b20()*-2.11199);
}

double NNfunction-ss_uRdR::synapse0x2d31340() {
   return (neuron0x2d134f0()*-0.247879);
}

double NNfunction-ss_uRdR::synapse0x2d31380() {
   return (neuron0x2d25b30()*0.279175);
}

double NNfunction-ss_uRdR::synapse0x2d313c0() {
   return (neuron0x2d263e0()*-0.305017);
}

double NNfunction-ss_uRdR::synapse0x2d31400() {
   return (neuron0x2d26db0()*0.45999);
}

double NNfunction-ss_uRdR::synapse0x2d31440() {
   return (neuron0x2d27780()*-1.04048);
}

double NNfunction-ss_uRdR::synapse0x2d317c0() {
   return (neuron0x2d03700()*0.111973);
}

double NNfunction-ss_uRdR::synapse0x2d31800() {
   return (neuron0x2d04050()*0.228208);
}

double NNfunction-ss_uRdR::synapse0x2d31840() {
   return (neuron0x2d04b30()*0.00900271);
}

double NNfunction-ss_uRdR::synapse0x2d31880() {
   return (neuron0x2d045d0()*2.36948);
}

double NNfunction-ss_uRdR::synapse0x2d318c0() {
   return (neuron0x2d05910()*0.127898);
}

double NNfunction-ss_uRdR::synapse0x2d31900() {
   return (neuron0x2d062e0()*-0.054549);
}

double NNfunction-ss_uRdR::synapse0x2d31940() {
   return (neuron0x2d070b0()*0.372747);
}

double NNfunction-ss_uRdR::synapse0x2d31980() {
   return (neuron0x2d07a80()*-0.0833411);
}

double NNfunction-ss_uRdR::synapse0x2d319c0() {
   return (neuron0x2d08450()*-0.312248);
}

double NNfunction-ss_uRdR::synapse0x2d31a00() {
   return (neuron0x2d08f30()*0.337457);
}

double NNfunction-ss_uRdR::synapse0x2d31a40() {
   return (neuron0x2d09900()*0.161725);
}

double NNfunction-ss_uRdR::synapse0x2d31a80() {
   return (neuron0x2d069e0()*-0.0193259);
}

double NNfunction-ss_uRdR::synapse0x2d31ac0() {
   return (neuron0x2d0b4b0()*0.00300242);
}

double NNfunction-ss_uRdR::synapse0x2d31b00() {
   return (neuron0x2d0be80()*-0.15779);
}

double NNfunction-ss_uRdR::synapse0x2d31b40() {
   return (neuron0x2d0c850()*-0.193728);
}

double NNfunction-ss_uRdR::synapse0x2d31b80() {
   return (neuron0x2d0d220()*-0.0721527);
}

double NNfunction-ss_uRdR::synapse0x2d31610() {
   return (neuron0x2d0f030()*0.0215801);
}

double NNfunction-ss_uRdR::synapse0x2d31650() {
   return (neuron0x2d0f310()*0.0154846);
}

double NNfunction-ss_uRdR::synapse0x2d31cd0() {
   return (neuron0x2d0fce0()*-1.38483);
}

double NNfunction-ss_uRdR::synapse0x2d31d10() {
   return (neuron0x2d106b0()*1.70346);
}

double NNfunction-ss_uRdR::synapse0x2d31d50() {
   return (neuron0x2d11080()*-0.0750337);
}

double NNfunction-ss_uRdR::synapse0x2d31d90() {
   return (neuron0x2d11a50()*-0.0160578);
}

double NNfunction-ss_uRdR::synapse0x2d31dd0() {
   return (neuron0x2d0a5a0()*0.061945);
}

double NNfunction-ss_uRdR::synapse0x2d31e10() {
   return (neuron0x2d0af70()*-1.10126);
}

double NNfunction-ss_uRdR::synapse0x2d31e50() {
   return (neuron0x2d147e0()*-0.0885996);
}

double NNfunction-ss_uRdR::synapse0x2d31e90() {
   return (neuron0x2d151b0()*-0.0973119);
}

double NNfunction-ss_uRdR::synapse0x2d31ed0() {
   return (neuron0x2d15b80()*0.188834);
}

double NNfunction-ss_uRdR::synapse0x2d31f10() {
   return (neuron0x2d16550()*0.29654);
}

double NNfunction-ss_uRdR::synapse0x2d31f50() {
   return (neuron0x2d16f20()*-0.00292639);
}

double NNfunction-ss_uRdR::synapse0x2d31f90() {
   return (neuron0x2d178f0()*2.32015);
}

double NNfunction-ss_uRdR::synapse0x2d31fd0() {
   return (neuron0x2d182c0()*0.189538);
}

double NNfunction-ss_uRdR::synapse0x2d32010() {
   return (neuron0x2d18c90()*-0.0252282);
}

double NNfunction-ss_uRdR::synapse0x2d31bc0() {
   return (neuron0x2d0ed20()*-0.00788508);
}

double NNfunction-ss_uRdR::synapse0x2d31c00() {
   return (neuron0x2d1b870()*-0.144544);
}

double NNfunction-ss_uRdR::synapse0x2d31c40() {
   return (neuron0x2d1c240()*-0.0936666);
}

double NNfunction-ss_uRdR::synapse0x2d31c80() {
   return (neuron0x2d1cc10()*-0.0154866);
}

double NNfunction-ss_uRdR::synapse0x2d32260() {
   return (neuron0x2d1d5e0()*0.0476102);
}

double NNfunction-ss_uRdR::synapse0x2d322a0() {
   return (neuron0x2d1dfb0()*0.183249);
}

double NNfunction-ss_uRdR::synapse0x2d322e0() {
   return (neuron0x2d1e980()*-0.017273);
}

double NNfunction-ss_uRdR::synapse0x2d32320() {
   return (neuron0x2d1f350()*-0.330022);
}

double NNfunction-ss_uRdR::synapse0x2d32360() {
   return (neuron0x2d1fd20()*0.944427);
}

double NNfunction-ss_uRdR::synapse0x2d323a0() {
   return (neuron0x2d20900()*-0.21795);
}

double NNfunction-ss_uRdR::synapse0x2d323e0() {
   return (neuron0x2d212d0()*0.230986);
}

double NNfunction-ss_uRdR::synapse0x2d32420() {
   return (neuron0x2d12150()*-0.260931);
}

double NNfunction-ss_uRdR::synapse0x2d32460() {
   return (neuron0x2d12b20()*-0.0962044);
}

double NNfunction-ss_uRdR::synapse0x2d324a0() {
   return (neuron0x2d134f0()*1.37009);
}

double NNfunction-ss_uRdR::synapse0x2d324e0() {
   return (neuron0x2d25b30()*0.0381245);
}

double NNfunction-ss_uRdR::synapse0x2d32520() {
   return (neuron0x2d263e0()*-0.176645);
}

double NNfunction-ss_uRdR::synapse0x2d32560() {
   return (neuron0x2d26db0()*-0.093061);
}

double NNfunction-ss_uRdR::synapse0x2d325a0() {
   return (neuron0x2d27780()*0.0380059);
}

double NNfunction-ss_uRdR::synapse0x2d32800() {
   return (neuron0x2d2e980()*-6.77591);
}

double NNfunction-ss_uRdR::synapse0x2d32840() {
   return (neuron0x2d2ed20()*2.54893);
}

double NNfunction-ss_uRdR::synapse0x2d32880() {
   return (neuron0x2d2f1c0()*6.22994);
}

double NNfunction-ss_uRdR::synapse0x2d328c0() {
   return (neuron0x2d30320()*4.9397);
}

double NNfunction-ss_uRdR::synapse0x2d32900() {
   return (neuron0x2d31480()*-4.48881);
}

