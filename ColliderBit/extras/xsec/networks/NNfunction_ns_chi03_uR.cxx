#include "NNfunction_ns_chi03_uR.h"
#include <cmath>

double NNfunction_ns_chi03_uR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.9644)/15.2364;
   input1 = (in1 - 32.6356)/622.063;
   input2 = (in2 - 587.286)/642;
   input3 = (in3 - 51.4261)/765.296;
   input4 = (in4 - 907.672)/896.35;
   input5 = (in5 - 803.179)/906.719;
   input6 = (in6 - 803.866)/905.146;
   input7 = (in7 - 793.437)/876.873;
   input8 = (in8 - 783.786)/883.067;
   input9 = (in9 - 775.637)/871.153;
   input10 = (in10 - 826.697)/883.695;
   input11 = (in11 - 647.358)/755.612;
   input12 = (in12 - 646.379)/756.799;
   input13 = (in13 - 456.849)/446.9;
   input14 = (in14 - 319.216)/278.716;
   input15 = (in15 - 695.265)/773.946;
   input16 = (in16 - 498.987)/529.806;
   input17 = (in17 - 667.775)/788.094;
   input18 = (in18 - 673.048)/793.847;
   input19 = (in19 - 681.806)/762.234;
   input20 = (in20 - -44.8847)/456.901;
   input21 = (in21 - -62.0756)/1036.47;
   input22 = (in22 - 5.61664)/1068.75;
   input23 = (in23 - -48.7635)/231.934;
   switch(index) {
     case 0:
         return neuron0x35cc9c0();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi03_uR::Value(int index, double* input) {
   input0 = (input[0] - 23.9644)/15.2364;
   input1 = (input[1] - 32.6356)/622.063;
   input2 = (input[2] - 587.286)/642;
   input3 = (input[3] - 51.4261)/765.296;
   input4 = (input[4] - 907.672)/896.35;
   input5 = (input[5] - 803.179)/906.719;
   input6 = (input[6] - 803.866)/905.146;
   input7 = (input[7] - 793.437)/876.873;
   input8 = (input[8] - 783.786)/883.067;
   input9 = (input[9] - 775.637)/871.153;
   input10 = (input[10] - 826.697)/883.695;
   input11 = (input[11] - 647.358)/755.612;
   input12 = (input[12] - 646.379)/756.799;
   input13 = (input[13] - 456.849)/446.9;
   input14 = (input[14] - 319.216)/278.716;
   input15 = (input[15] - 695.265)/773.946;
   input16 = (input[16] - 498.987)/529.806;
   input17 = (input[17] - 667.775)/788.094;
   input18 = (input[18] - 673.048)/793.847;
   input19 = (input[19] - 681.806)/762.234;
   input20 = (input[20] - -44.8847)/456.901;
   input21 = (input[21] - -62.0756)/1036.47;
   input22 = (input[22] - 5.61664)/1068.75;
   input23 = (input[23] - -48.7635)/231.934;
   switch(index) {
     case 0:
         return neuron0x35cc9c0();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi03_uR::neuron0x3597a30() {
   return input0;
}

double NNfunction_ns_chi03_uR::neuron0x3597ce0() {
   return input1;
}

double NNfunction_ns_chi03_uR::neuron0x3598020() {
   return input2;
}

double NNfunction_ns_chi03_uR::neuron0x3598360() {
   return input3;
}

double NNfunction_ns_chi03_uR::neuron0x35986a0() {
   return input4;
}

double NNfunction_ns_chi03_uR::neuron0x35989e0() {
   return input5;
}

double NNfunction_ns_chi03_uR::neuron0x3598d20() {
   return input6;
}

double NNfunction_ns_chi03_uR::neuron0x3599060() {
   return input7;
}

double NNfunction_ns_chi03_uR::neuron0x35993a0() {
   return input8;
}

double NNfunction_ns_chi03_uR::neuron0x35996e0() {
   return input9;
}

double NNfunction_ns_chi03_uR::neuron0x3599a20() {
   return input10;
}

double NNfunction_ns_chi03_uR::neuron0x3599d60() {
   return input11;
}

double NNfunction_ns_chi03_uR::neuron0x359a0a0() {
   return input12;
}

double NNfunction_ns_chi03_uR::neuron0x359a3e0() {
   return input13;
}

double NNfunction_ns_chi03_uR::neuron0x359a720() {
   return input14;
}

double NNfunction_ns_chi03_uR::neuron0x359aa60() {
   return input15;
}

double NNfunction_ns_chi03_uR::neuron0x359ada0() {
   return input16;
}

double NNfunction_ns_chi03_uR::neuron0x359b300() {
   return input17;
}

double NNfunction_ns_chi03_uR::neuron0x359b640() {
   return input18;
}

double NNfunction_ns_chi03_uR::neuron0x359b980() {
   return input19;
}

double NNfunction_ns_chi03_uR::neuron0x359bcc0() {
   return input20;
}

double NNfunction_ns_chi03_uR::neuron0x359c000() {
   return input21;
}

double NNfunction_ns_chi03_uR::neuron0x359c340() {
   return input22;
}

double NNfunction_ns_chi03_uR::neuron0x359c680() {
   return input23;
}

double NNfunction_ns_chi03_uR::input0x359caf0() {
   double input = 1.04819;
   input += synapse0x359ce30();
   input += synapse0x359ce70();
   input += synapse0x359ceb0();
   input += synapse0x359cef0();
   input += synapse0x359cf30();
   input += synapse0x359cf70();
   input += synapse0x359cfb0();
   input += synapse0x359cff0();
   input += synapse0x359d030();
   input += synapse0x359d070();
   input += synapse0x359d0b0();
   input += synapse0x359d0f0();
   input += synapse0x359d130();
   input += synapse0x359d170();
   input += synapse0x359d1b0();
   input += synapse0x359d1f0();
   input += synapse0x359cc80();
   input += synapse0x359ccc0();
   input += synapse0x3353bb0();
   input += synapse0x3353bf0();
   input += synapse0x359d230();
   input += synapse0x359d270();
   input += synapse0x359d2b0();
   input += synapse0x359d2f0();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x359caf0() {
   double input = input0x359caf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x359d330() {
   double input = -0.467296;
   input += synapse0x359d670();
   input += synapse0x359d6b0();
   input += synapse0x359d6f0();
   input += synapse0x359d730();
   input += synapse0x359d770();
   input += synapse0x359d7b0();
   input += synapse0x359d7f0();
   input += synapse0x359d830();
   input += synapse0x359d870();
   input += synapse0x3353a00();
   input += synapse0x3353a40();
   input += synapse0x3353a80();
   input += synapse0x3353ac0();
   input += synapse0x359dac0();
   input += synapse0x359db00();
   input += synapse0x359db40();
   input += synapse0x359d4c0();
   input += synapse0x359d500();
   input += synapse0x359dc90();
   input += synapse0x359dcd0();
   input += synapse0x359dd10();
   input += synapse0x359dd50();
   input += synapse0x359dd90();
   input += synapse0x359ddd0();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x359d330() {
   double input = input0x359d330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x359de10() {
   double input = 2.27716;
   input += synapse0x359e150();
   input += synapse0x359e190();
   input += synapse0x359e1d0();
   input += synapse0x359e210();
   input += synapse0x359e250();
   input += synapse0x359e290();
   input += synapse0x359e2d0();
   input += synapse0x359e310();
   input += synapse0x359e350();
   input += synapse0x359e390();
   input += synapse0x359e3d0();
   input += synapse0x359e410();
   input += synapse0x359e450();
   input += synapse0x359e490();
   input += synapse0x359e4d0();
   input += synapse0x359e510();
   input += synapse0x359dfa0();
   input += synapse0x359dfe0();
   input += synapse0x33542a0();
   input += synapse0x3361b70();
   input += synapse0x3361bb0();
   input += synapse0x35a0440();
   input += synapse0x35a0480();
   input += synapse0x3597770();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x359de10() {
   double input = input0x359de10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x359d8b0() {
   double input = 0.742465;
   input += synapse0x3597840();
   input += synapse0x33623f0();
   input += synapse0x359da40();
   input += synapse0x359da80();
   input += synapse0x359e660();
   input += synapse0x359e6a0();
   input += synapse0x359e6e0();
   input += synapse0x359e720();
   input += synapse0x359e760();
   input += synapse0x359e7a0();
   input += synapse0x359e7e0();
   input += synapse0x359e820();
   input += synapse0x359e860();
   input += synapse0x359e8a0();
   input += synapse0x359e8e0();
   input += synapse0x359e920();
   input += synapse0x35977b0();
   input += synapse0x35977f0();
   input += synapse0x359ea70();
   input += synapse0x359eab0();
   input += synapse0x359eaf0();
   input += synapse0x359eb30();
   input += synapse0x359eb70();
   input += synapse0x359ebb0();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x359d8b0() {
   double input = input0x359d8b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x359ebf0() {
   double input = -0.95237;
   input += synapse0x359ef30();
   input += synapse0x359ef70();
   input += synapse0x359efb0();
   input += synapse0x359eff0();
   input += synapse0x359f030();
   input += synapse0x359f070();
   input += synapse0x359f0b0();
   input += synapse0x359f0f0();
   input += synapse0x359f130();
   input += synapse0x359f170();
   input += synapse0x359f1b0();
   input += synapse0x359f1f0();
   input += synapse0x359f230();
   input += synapse0x359f270();
   input += synapse0x359f2b0();
   input += synapse0x359f2f0();
   input += synapse0x359f440();
   input += synapse0x359ed80();
   input += synapse0x359edc0();
   input += synapse0x35a0580();
   input += synapse0x35a05c0();
   input += synapse0x35a0600();
   input += synapse0x35a0640();
   input += synapse0x35a0680();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x359ebf0() {
   double input = input0x359ebf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35a06c0() {
   double input = 0.503435;
   input += synapse0x35a0a00();
   input += synapse0x35a0a40();
   input += synapse0x35a0a80();
   input += synapse0x35a0ac0();
   input += synapse0x35a0b00();
   input += synapse0x35a0b40();
   input += synapse0x35a0b80();
   input += synapse0x35a0bc0();
   input += synapse0x35a0c00();
   input += synapse0x3361ec0();
   input += synapse0x3361f00();
   input += synapse0x3361f40();
   input += synapse0x3361f80();
   input += synapse0x3361fc0();
   input += synapse0x3362000();
   input += synapse0x3362040();
   input += synapse0x35a0850();
   input += synapse0x35a0890();
   input += synapse0x3362190();
   input += synapse0x33621d0();
   input += synapse0x3362210();
   input += synapse0x3362250();
   input += synapse0x3362290();
   input += synapse0x35a1450();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35a06c0() {
   double input = input0x35a06c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35a1490() {
   double input = 0.318092;
   input += synapse0x35a17d0();
   input += synapse0x35a1810();
   input += synapse0x35a1850();
   input += synapse0x35a1890();
   input += synapse0x35a18d0();
   input += synapse0x35a1910();
   input += synapse0x35a1950();
   input += synapse0x35a1990();
   input += synapse0x35a19d0();
   input += synapse0x35a1a10();
   input += synapse0x35a1a50();
   input += synapse0x35a1a90();
   input += synapse0x35a1ad0();
   input += synapse0x35a1b10();
   input += synapse0x35a1b50();
   input += synapse0x35a1b90();
   input += synapse0x35a1620();
   input += synapse0x35a1660();
   input += synapse0x35a1ce0();
   input += synapse0x35a1d20();
   input += synapse0x35a1d60();
   input += synapse0x35a1da0();
   input += synapse0x35a1de0();
   input += synapse0x35a1e20();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35a1490() {
   double input = input0x35a1490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35a1e60() {
   double input = -1.40453;
   input += synapse0x35a21a0();
   input += synapse0x35a21e0();
   input += synapse0x35a2220();
   input += synapse0x35a2260();
   input += synapse0x35a22a0();
   input += synapse0x35a22e0();
   input += synapse0x35a2320();
   input += synapse0x35a2360();
   input += synapse0x35a23a0();
   input += synapse0x35a23e0();
   input += synapse0x35a2420();
   input += synapse0x35a2460();
   input += synapse0x35a24a0();
   input += synapse0x35a24e0();
   input += synapse0x35a2520();
   input += synapse0x35a2560();
   input += synapse0x35a1ff0();
   input += synapse0x35a2030();
   input += synapse0x35a26b0();
   input += synapse0x35a26f0();
   input += synapse0x35a2730();
   input += synapse0x35a2770();
   input += synapse0x35a27b0();
   input += synapse0x35a27f0();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35a1e60() {
   double input = input0x35a1e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35a2830() {
   double input = -2.4233;
   input += synapse0x359b1f0();
   input += synapse0x359b230();
   input += synapse0x359b270();
   input += synapse0x359b2b0();
   input += synapse0x35a2d80();
   input += synapse0x35a2dc0();
   input += synapse0x35a2e00();
   input += synapse0x35a2e40();
   input += synapse0x35a2e80();
   input += synapse0x35a2ec0();
   input += synapse0x35a2f00();
   input += synapse0x35a2f40();
   input += synapse0x35a2f80();
   input += synapse0x35a2fc0();
   input += synapse0x35a3000();
   input += synapse0x35a3040();
   input += synapse0x35a29c0();
   input += synapse0x35a2a00();
   input += synapse0x35a3190();
   input += synapse0x35a31d0();
   input += synapse0x35a3210();
   input += synapse0x35a3250();
   input += synapse0x35a3290();
   input += synapse0x35a32d0();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35a2830() {
   double input = input0x35a2830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35a3310() {
   double input = -0.248521;
   input += synapse0x35a3650();
   input += synapse0x35a3690();
   input += synapse0x35a36d0();
   input += synapse0x35a3710();
   input += synapse0x35a3750();
   input += synapse0x35a3790();
   input += synapse0x35a37d0();
   input += synapse0x35a3810();
   input += synapse0x35a3850();
   input += synapse0x35a3890();
   input += synapse0x35a38d0();
   input += synapse0x35a3910();
   input += synapse0x35a3950();
   input += synapse0x35a3990();
   input += synapse0x35a39d0();
   input += synapse0x35a3a10();
   input += synapse0x35a34a0();
   input += synapse0x35a34e0();
   input += synapse0x35a3b60();
   input += synapse0x35a3ba0();
   input += synapse0x35a3be0();
   input += synapse0x35a3c20();
   input += synapse0x35a3c60();
   input += synapse0x35a3ca0();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35a3310() {
   double input = input0x35a3310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35a3ce0() {
   double input = -1.47628;
   input += synapse0x35a4020();
   input += synapse0x35a4060();
   input += synapse0x35a40a0();
   input += synapse0x35a40e0();
   input += synapse0x35a4120();
   input += synapse0x35a4160();
   input += synapse0x35a41a0();
   input += synapse0x35a41e0();
   input += synapse0x35a4220();
   input += synapse0x35a4260();
   input += synapse0x35a42a0();
   input += synapse0x35a42e0();
   input += synapse0x35a4320();
   input += synapse0x35a4360();
   input += synapse0x35a43a0();
   input += synapse0x35a43e0();
   input += synapse0x35a3e70();
   input += synapse0x35a3eb0();
   input += synapse0x35a0c40();
   input += synapse0x35a0c80();
   input += synapse0x35a0cc0();
   input += synapse0x35a0d00();
   input += synapse0x35a0d40();
   input += synapse0x35a0d80();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35a3ce0() {
   double input = input0x35a3ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35a0dc0() {
   double input = -1.40624;
   input += synapse0x35a1100();
   input += synapse0x35a1140();
   input += synapse0x35a1180();
   input += synapse0x35a11c0();
   input += synapse0x35a1200();
   input += synapse0x35a1240();
   input += synapse0x35a1280();
   input += synapse0x35a12c0();
   input += synapse0x35a1300();
   input += synapse0x35a1340();
   input += synapse0x35a1380();
   input += synapse0x35a13c0();
   input += synapse0x35a1400();
   input += synapse0x35a5540();
   input += synapse0x35a5580();
   input += synapse0x35a55c0();
   input += synapse0x35a0f50();
   input += synapse0x35a0f90();
   input += synapse0x35a5710();
   input += synapse0x35a5750();
   input += synapse0x35a5790();
   input += synapse0x35a57d0();
   input += synapse0x35a5810();
   input += synapse0x35a5850();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35a0dc0() {
   double input = input0x35a0dc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35a5890() {
   double input = 1.56618;
   input += synapse0x35a5bd0();
   input += synapse0x35a5c10();
   input += synapse0x35a5c50();
   input += synapse0x35a5c90();
   input += synapse0x35a5cd0();
   input += synapse0x35a5d10();
   input += synapse0x35a5d50();
   input += synapse0x35a5d90();
   input += synapse0x35a5dd0();
   input += synapse0x35a5e10();
   input += synapse0x35a5e50();
   input += synapse0x35a5e90();
   input += synapse0x35a5ed0();
   input += synapse0x35a5f10();
   input += synapse0x35a5f50();
   input += synapse0x35a5f90();
   input += synapse0x35a5a20();
   input += synapse0x35a5a60();
   input += synapse0x35a60e0();
   input += synapse0x35a6120();
   input += synapse0x35a6160();
   input += synapse0x35a61a0();
   input += synapse0x35a61e0();
   input += synapse0x35a6220();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35a5890() {
   double input = input0x35a5890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35a6260() {
   double input = 0.881402;
   input += synapse0x35a65a0();
   input += synapse0x35a65e0();
   input += synapse0x35a6620();
   input += synapse0x35a6660();
   input += synapse0x35a66a0();
   input += synapse0x35a66e0();
   input += synapse0x35a6720();
   input += synapse0x35a6760();
   input += synapse0x35a67a0();
   input += synapse0x35a67e0();
   input += synapse0x35a6820();
   input += synapse0x35a6860();
   input += synapse0x35a68a0();
   input += synapse0x35a68e0();
   input += synapse0x35a6920();
   input += synapse0x35a6960();
   input += synapse0x35a63f0();
   input += synapse0x35a6430();
   input += synapse0x35a6ab0();
   input += synapse0x35a6af0();
   input += synapse0x35a6b30();
   input += synapse0x35a6b70();
   input += synapse0x35a6bb0();
   input += synapse0x35a6bf0();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35a6260() {
   double input = input0x35a6260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35a6c30() {
   double input = 0.882289;
   input += synapse0x35a6f70();
   input += synapse0x35a6fb0();
   input += synapse0x35a6ff0();
   input += synapse0x35a7030();
   input += synapse0x35a7070();
   input += synapse0x35a70b0();
   input += synapse0x35a70f0();
   input += synapse0x35a7130();
   input += synapse0x35a7170();
   input += synapse0x35a71b0();
   input += synapse0x35a71f0();
   input += synapse0x35a7230();
   input += synapse0x35a7270();
   input += synapse0x35a72b0();
   input += synapse0x35a72f0();
   input += synapse0x35a7330();
   input += synapse0x35a6dc0();
   input += synapse0x35a6e00();
   input += synapse0x35a7480();
   input += synapse0x35a74c0();
   input += synapse0x35a7500();
   input += synapse0x35a7540();
   input += synapse0x35a7580();
   input += synapse0x35a75c0();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35a6c30() {
   double input = input0x35a6c30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35a7600() {
   double input = 0.784447;
   input += synapse0x35a7940();
   input += synapse0x3597bc0();
   input += synapse0x3597c00();
   input += synapse0x3597f00();
   input += synapse0x3597f40();
   input += synapse0x3598240();
   input += synapse0x3598280();
   input += synapse0x3598580();
   input += synapse0x35985c0();
   input += synapse0x35988c0();
   input += synapse0x3598900();
   input += synapse0x3598c00();
   input += synapse0x3598c40();
   input += synapse0x3598f40();
   input += synapse0x3598f80();
   input += synapse0x3599280();
   input += synapse0x35992c0();
   input += synapse0x35995c0();
   input += synapse0x3599600();
   input += synapse0x3599900();
   input += synapse0x3599940();
   input += synapse0x3599c40();
   input += synapse0x3599c80();
   input += synapse0x3599f80();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35a7600() {
   double input = input0x35a7600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35a9410() {
   double input = -0.440163;
   input += synapse0x3599fc0();
   input += synapse0x359ac80();
   input += synapse0x359acc0();
   input += synapse0x35a7790();
   input += synapse0x35a77d0();
   input += synapse0x359afc0();
   input += synapse0x359b000();
   input += synapse0x359b520();
   input += synapse0x359b560();
   input += synapse0x359b860();
   input += synapse0x359b8a0();
   input += synapse0x359bba0();
   input += synapse0x359bbe0();
   input += synapse0x359bee0();
   input += synapse0x359bf20();
   input += synapse0x359c220();
   input += synapse0x359c260();
   input += synapse0x359c560();
   input += synapse0x359c5a0();
   input += synapse0x359c8a0();
   input += synapse0x359c8e0();
   input += synapse0x359a2c0();
   input += synapse0x359a300();
   input += synapse0x35a96b0();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35a9410() {
   double input = input0x35a9410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35a96f0() {
   double input = -0.189676;
   input += synapse0x35a9a30();
   input += synapse0x35a9a70();
   input += synapse0x35a9ab0();
   input += synapse0x35a9af0();
   input += synapse0x35a9b30();
   input += synapse0x35a9b70();
   input += synapse0x35a9bb0();
   input += synapse0x35a9bf0();
   input += synapse0x35a9c30();
   input += synapse0x35a9c70();
   input += synapse0x35a9cb0();
   input += synapse0x35a9cf0();
   input += synapse0x35a9d30();
   input += synapse0x35a9d70();
   input += synapse0x35a9db0();
   input += synapse0x35a9df0();
   input += synapse0x35a9880();
   input += synapse0x35a98c0();
   input += synapse0x35a9f40();
   input += synapse0x35a9f80();
   input += synapse0x35a9fc0();
   input += synapse0x35aa000();
   input += synapse0x35aa040();
   input += synapse0x35aa080();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35a96f0() {
   double input = input0x35a96f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35aa0c0() {
   double input = 0.638444;
   input += synapse0x35aa400();
   input += synapse0x35aa440();
   input += synapse0x35aa480();
   input += synapse0x35aa4c0();
   input += synapse0x35aa500();
   input += synapse0x35aa540();
   input += synapse0x35aa580();
   input += synapse0x35aa5c0();
   input += synapse0x35aa600();
   input += synapse0x35aa640();
   input += synapse0x35aa680();
   input += synapse0x35aa6c0();
   input += synapse0x35aa700();
   input += synapse0x35aa740();
   input += synapse0x35aa780();
   input += synapse0x35aa7c0();
   input += synapse0x35aa250();
   input += synapse0x35aa290();
   input += synapse0x35aa910();
   input += synapse0x35aa950();
   input += synapse0x35aa990();
   input += synapse0x35aa9d0();
   input += synapse0x35aaa10();
   input += synapse0x35aaa50();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35aa0c0() {
   double input = input0x35aa0c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35aaa90() {
   double input = 0.416062;
   input += synapse0x35aadd0();
   input += synapse0x35aae10();
   input += synapse0x35aae50();
   input += synapse0x35aae90();
   input += synapse0x35aaed0();
   input += synapse0x35aaf10();
   input += synapse0x35aaf50();
   input += synapse0x35aaf90();
   input += synapse0x35aafd0();
   input += synapse0x35ab010();
   input += synapse0x35ab050();
   input += synapse0x35ab090();
   input += synapse0x35ab0d0();
   input += synapse0x35ab110();
   input += synapse0x35ab150();
   input += synapse0x35ab190();
   input += synapse0x35aac20();
   input += synapse0x35aac60();
   input += synapse0x35ab2e0();
   input += synapse0x35ab320();
   input += synapse0x35ab360();
   input += synapse0x35ab3a0();
   input += synapse0x35ab3e0();
   input += synapse0x35ab420();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35aaa90() {
   double input = input0x35aaa90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35ab460() {
   double input = -13.5235;
   input += synapse0x35ab7a0();
   input += synapse0x35ab7e0();
   input += synapse0x35ab820();
   input += synapse0x35ab860();
   input += synapse0x35ab8a0();
   input += synapse0x35ab8e0();
   input += synapse0x35ab920();
   input += synapse0x35ab960();
   input += synapse0x35ab9a0();
   input += synapse0x35ab9e0();
   input += synapse0x35aba20();
   input += synapse0x35aba60();
   input += synapse0x35abaa0();
   input += synapse0x35abae0();
   input += synapse0x35abb20();
   input += synapse0x35abb60();
   input += synapse0x35ab5f0();
   input += synapse0x35ab630();
   input += synapse0x35abcb0();
   input += synapse0x35abcf0();
   input += synapse0x35abd30();
   input += synapse0x35abd70();
   input += synapse0x35abdb0();
   input += synapse0x35abdf0();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35ab460() {
   double input = input0x35ab460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35abe30() {
   double input = -0.240642;
   input += synapse0x35ac170();
   input += synapse0x35ac1b0();
   input += synapse0x35ac1f0();
   input += synapse0x35ac230();
   input += synapse0x35ac270();
   input += synapse0x35ac2b0();
   input += synapse0x35ac2f0();
   input += synapse0x35ac330();
   input += synapse0x35ac370();
   input += synapse0x35a4530();
   input += synapse0x35a4570();
   input += synapse0x35a45b0();
   input += synapse0x35a45f0();
   input += synapse0x35a4630();
   input += synapse0x35a4670();
   input += synapse0x35a46b0();
   input += synapse0x35abfc0();
   input += synapse0x35ac000();
   input += synapse0x35a4800();
   input += synapse0x35a4840();
   input += synapse0x35a4880();
   input += synapse0x35a48c0();
   input += synapse0x35a4900();
   input += synapse0x35a4940();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35abe30() {
   double input = input0x35abe30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35a4980() {
   double input = 2.39068;
   input += synapse0x35a4cc0();
   input += synapse0x35a4d00();
   input += synapse0x35a4d40();
   input += synapse0x35a4d80();
   input += synapse0x35a4dc0();
   input += synapse0x35a4e00();
   input += synapse0x35a4e40();
   input += synapse0x35a4e80();
   input += synapse0x35a4ec0();
   input += synapse0x35a4f00();
   input += synapse0x35a4f40();
   input += synapse0x35a4f80();
   input += synapse0x35a4fc0();
   input += synapse0x35a5000();
   input += synapse0x35a5040();
   input += synapse0x35a5080();
   input += synapse0x35a4b10();
   input += synapse0x35a4b50();
   input += synapse0x35a51d0();
   input += synapse0x35a5210();
   input += synapse0x35a5250();
   input += synapse0x35a5290();
   input += synapse0x35a52d0();
   input += synapse0x35a5310();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35a4980() {
   double input = input0x35a4980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35a5350() {
   double input = 0.683529;
   input += synapse0x35a54e0();
   input += synapse0x35ae570();
   input += synapse0x35ae5b0();
   input += synapse0x35ae5f0();
   input += synapse0x35ae630();
   input += synapse0x35ae670();
   input += synapse0x35ae6b0();
   input += synapse0x35ae6f0();
   input += synapse0x35ae730();
   input += synapse0x35ae770();
   input += synapse0x35ae7b0();
   input += synapse0x35ae7f0();
   input += synapse0x35ae830();
   input += synapse0x35ae870();
   input += synapse0x35ae8b0();
   input += synapse0x35ae8f0();
   input += synapse0x35ae3c0();
   input += synapse0x35ae400();
   input += synapse0x35aea40();
   input += synapse0x35aea80();
   input += synapse0x35aeac0();
   input += synapse0x35aeb00();
   input += synapse0x35aeb40();
   input += synapse0x35aeb80();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35a5350() {
   double input = input0x35a5350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35aebc0() {
   double input = 0.902806;
   input += synapse0x35aef00();
   input += synapse0x35aef40();
   input += synapse0x35aef80();
   input += synapse0x35aefc0();
   input += synapse0x35af000();
   input += synapse0x35af040();
   input += synapse0x35af080();
   input += synapse0x35af0c0();
   input += synapse0x35af100();
   input += synapse0x35af140();
   input += synapse0x35af180();
   input += synapse0x35af1c0();
   input += synapse0x35af200();
   input += synapse0x35af240();
   input += synapse0x35af280();
   input += synapse0x35af2c0();
   input += synapse0x35aed50();
   input += synapse0x35aed90();
   input += synapse0x35af410();
   input += synapse0x35af450();
   input += synapse0x35af490();
   input += synapse0x35af4d0();
   input += synapse0x35af510();
   input += synapse0x35af550();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35aebc0() {
   double input = input0x35aebc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35af590() {
   double input = 1.78961;
   input += synapse0x35af8d0();
   input += synapse0x35af910();
   input += synapse0x35af950();
   input += synapse0x35af990();
   input += synapse0x35af9d0();
   input += synapse0x35afa10();
   input += synapse0x35afa50();
   input += synapse0x35afa90();
   input += synapse0x35afad0();
   input += synapse0x35afb10();
   input += synapse0x35afb50();
   input += synapse0x35afb90();
   input += synapse0x35afbd0();
   input += synapse0x35afc10();
   input += synapse0x35afc50();
   input += synapse0x35afc90();
   input += synapse0x35af720();
   input += synapse0x35af760();
   input += synapse0x35afde0();
   input += synapse0x35afe20();
   input += synapse0x35afe60();
   input += synapse0x35afea0();
   input += synapse0x35afee0();
   input += synapse0x35aff20();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35af590() {
   double input = input0x35af590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35aff60() {
   double input = -2.30921;
   input += synapse0x35b02a0();
   input += synapse0x35b02e0();
   input += synapse0x35b0320();
   input += synapse0x35b0360();
   input += synapse0x35b03a0();
   input += synapse0x35b03e0();
   input += synapse0x35b0420();
   input += synapse0x35b0460();
   input += synapse0x35b04a0();
   input += synapse0x35b04e0();
   input += synapse0x35b0520();
   input += synapse0x35b0560();
   input += synapse0x35b05a0();
   input += synapse0x35b05e0();
   input += synapse0x35b0620();
   input += synapse0x35b0660();
   input += synapse0x35b00f0();
   input += synapse0x35b0130();
   input += synapse0x35b07b0();
   input += synapse0x35b07f0();
   input += synapse0x35b0830();
   input += synapse0x35b0870();
   input += synapse0x35b08b0();
   input += synapse0x35b08f0();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35aff60() {
   double input = input0x35aff60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35b0930() {
   double input = -2.65076;
   input += synapse0x35b0c70();
   input += synapse0x35b0cb0();
   input += synapse0x35b0cf0();
   input += synapse0x35b0d30();
   input += synapse0x35b0d70();
   input += synapse0x35b0db0();
   input += synapse0x35b0df0();
   input += synapse0x35b0e30();
   input += synapse0x35b0e70();
   input += synapse0x35b0eb0();
   input += synapse0x35b0ef0();
   input += synapse0x35b0f30();
   input += synapse0x35b0f70();
   input += synapse0x35b0fb0();
   input += synapse0x35b0ff0();
   input += synapse0x35b1030();
   input += synapse0x35b0ac0();
   input += synapse0x35b0b00();
   input += synapse0x35b1180();
   input += synapse0x35b11c0();
   input += synapse0x35b1200();
   input += synapse0x35b1240();
   input += synapse0x35b1280();
   input += synapse0x35b12c0();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35b0930() {
   double input = input0x35b0930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35b1300() {
   double input = -0.159106;
   input += synapse0x35b1640();
   input += synapse0x35b1680();
   input += synapse0x35b16c0();
   input += synapse0x35b1700();
   input += synapse0x35b1740();
   input += synapse0x35b1780();
   input += synapse0x35b17c0();
   input += synapse0x35b1800();
   input += synapse0x35b1840();
   input += synapse0x35b1880();
   input += synapse0x35b18c0();
   input += synapse0x35b1900();
   input += synapse0x35b1940();
   input += synapse0x35b1980();
   input += synapse0x35b19c0();
   input += synapse0x35b1a00();
   input += synapse0x35b1490();
   input += synapse0x35b14d0();
   input += synapse0x35b1b50();
   input += synapse0x35b1b90();
   input += synapse0x35b1bd0();
   input += synapse0x35b1c10();
   input += synapse0x35b1c50();
   input += synapse0x35b1c90();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35b1300() {
   double input = input0x35b1300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35b1cd0() {
   double input = -0.529466;
   input += synapse0x35b2010();
   input += synapse0x35b2050();
   input += synapse0x35b2090();
   input += synapse0x35b20d0();
   input += synapse0x35b2110();
   input += synapse0x35b2150();
   input += synapse0x35b2190();
   input += synapse0x35b21d0();
   input += synapse0x35b2210();
   input += synapse0x35b2250();
   input += synapse0x35b2290();
   input += synapse0x35b22d0();
   input += synapse0x35b2310();
   input += synapse0x35b2350();
   input += synapse0x35b2390();
   input += synapse0x35b23d0();
   input += synapse0x35b1e60();
   input += synapse0x35b1ea0();
   input += synapse0x35b2520();
   input += synapse0x35b2560();
   input += synapse0x35b25a0();
   input += synapse0x35b25e0();
   input += synapse0x35b2620();
   input += synapse0x35b2660();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35b1cd0() {
   double input = input0x35b1cd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35b26a0() {
   double input = -1.65114;
   input += synapse0x35b29e0();
   input += synapse0x35b2a20();
   input += synapse0x35b2a60();
   input += synapse0x35b2aa0();
   input += synapse0x35b2ae0();
   input += synapse0x35b2b20();
   input += synapse0x35b2b60();
   input += synapse0x35b2ba0();
   input += synapse0x35b2be0();
   input += synapse0x35b2c20();
   input += synapse0x35b2c60();
   input += synapse0x35b2ca0();
   input += synapse0x35b2ce0();
   input += synapse0x35b2d20();
   input += synapse0x35b2d60();
   input += synapse0x35b2da0();
   input += synapse0x35b2830();
   input += synapse0x35b2870();
   input += synapse0x35b2ef0();
   input += synapse0x35b2f30();
   input += synapse0x35b2f70();
   input += synapse0x35b2fb0();
   input += synapse0x35b2ff0();
   input += synapse0x35b3030();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35b26a0() {
   double input = input0x35b26a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35b3070() {
   double input = 1.04934;
   input += synapse0x35b33b0();
   input += synapse0x35a7980();
   input += synapse0x35a79c0();
   input += synapse0x35a7a00();
   input += synapse0x35a7c50();
   input += synapse0x35a7c90();
   input += synapse0x35a7cd0();
   input += synapse0x35a7f20();
   input += synapse0x35a7f60();
   input += synapse0x35a81b0();
   input += synapse0x35a81f0();
   input += synapse0x35a8230();
   input += synapse0x35a8480();
   input += synapse0x35a84c0();
   input += synapse0x35a8710();
   input += synapse0x35a8750();
   input += synapse0x35b3200();
   input += synapse0x35b3240();
   input += synapse0x35a88a0();
   input += synapse0x35a8db0();
   input += synapse0x35a8df0();
   input += synapse0x35a8e30();
   input += synapse0x35a9080();
   input += synapse0x35a90c0();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35b3070() {
   double input = input0x35b3070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35a9100() {
   double input = 0.205535;
   input += synapse0x35a8970();
   input += synapse0x35a89b0();
   input += synapse0x35a89f0();
   input += synapse0x35a8a30();
   input += synapse0x35a93b0();
   input += synapse0x35b5700();
   input += synapse0x35b5740();
   input += synapse0x35b5780();
   input += synapse0x35b57c0();
   input += synapse0x35b5800();
   input += synapse0x35b5840();
   input += synapse0x35b5880();
   input += synapse0x35b58c0();
   input += synapse0x35b5900();
   input += synapse0x35b5940();
   input += synapse0x35b5980();
   input += synapse0x35a9290();
   input += synapse0x35a92d0();
   input += synapse0x35b5ad0();
   input += synapse0x35b5b10();
   input += synapse0x35b5b50();
   input += synapse0x35b5b90();
   input += synapse0x35b5bd0();
   input += synapse0x35b5c10();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35a9100() {
   double input = input0x35a9100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35b5c50() {
   double input = 1.45427;
   input += synapse0x35b5f90();
   input += synapse0x35b5fd0();
   input += synapse0x35b6010();
   input += synapse0x35b6050();
   input += synapse0x35b6090();
   input += synapse0x35b60d0();
   input += synapse0x35b6110();
   input += synapse0x35b6150();
   input += synapse0x35b6190();
   input += synapse0x35b61d0();
   input += synapse0x35b6210();
   input += synapse0x35b6250();
   input += synapse0x35b6290();
   input += synapse0x35b62d0();
   input += synapse0x35b6310();
   input += synapse0x35b6350();
   input += synapse0x35b5de0();
   input += synapse0x35b5e20();
   input += synapse0x35b64a0();
   input += synapse0x35b64e0();
   input += synapse0x35b6520();
   input += synapse0x35b6560();
   input += synapse0x35b65a0();
   input += synapse0x35b65e0();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35b5c50() {
   double input = input0x35b5c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35b6620() {
   double input = -0.801428;
   input += synapse0x35b6960();
   input += synapse0x35b69a0();
   input += synapse0x35b69e0();
   input += synapse0x35b6a20();
   input += synapse0x35b6a60();
   input += synapse0x35b6aa0();
   input += synapse0x35b6ae0();
   input += synapse0x35b6b20();
   input += synapse0x35b6b60();
   input += synapse0x35b6ba0();
   input += synapse0x35b6be0();
   input += synapse0x35b6c20();
   input += synapse0x35b6c60();
   input += synapse0x35b6ca0();
   input += synapse0x35b6ce0();
   input += synapse0x35b6d20();
   input += synapse0x35b67b0();
   input += synapse0x35b67f0();
   input += synapse0x35b6e70();
   input += synapse0x35b6eb0();
   input += synapse0x35b6ef0();
   input += synapse0x35b6f30();
   input += synapse0x35b6f70();
   input += synapse0x35b6fb0();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35b6620() {
   double input = input0x35b6620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35b6ff0() {
   double input = 0.183372;
   input += synapse0x35b7330();
   input += synapse0x35b7370();
   input += synapse0x35b73b0();
   input += synapse0x35b73f0();
   input += synapse0x35b7430();
   input += synapse0x35b7470();
   input += synapse0x35b74b0();
   input += synapse0x35b74f0();
   input += synapse0x35b7530();
   input += synapse0x35b7570();
   input += synapse0x35b75b0();
   input += synapse0x35b75f0();
   input += synapse0x35b7630();
   input += synapse0x35b7670();
   input += synapse0x35b76b0();
   input += synapse0x35b76f0();
   input += synapse0x35b7180();
   input += synapse0x35b71c0();
   input += synapse0x35b7840();
   input += synapse0x35b7880();
   input += synapse0x35b78c0();
   input += synapse0x35b7900();
   input += synapse0x35b7940();
   input += synapse0x35b7980();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35b6ff0() {
   double input = input0x35b6ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35b79c0() {
   double input = 0.584338;
   input += synapse0x35b7d00();
   input += synapse0x35b7d40();
   input += synapse0x35b7d80();
   input += synapse0x35b7dc0();
   input += synapse0x35b7e00();
   input += synapse0x35b7e40();
   input += synapse0x35b7e80();
   input += synapse0x35b7ec0();
   input += synapse0x35b7f00();
   input += synapse0x35b7f40();
   input += synapse0x35b7f80();
   input += synapse0x35b7fc0();
   input += synapse0x35b8000();
   input += synapse0x35b8040();
   input += synapse0x35b8080();
   input += synapse0x35b80c0();
   input += synapse0x35b7b50();
   input += synapse0x35b7b90();
   input += synapse0x35b8210();
   input += synapse0x35b8250();
   input += synapse0x35b8290();
   input += synapse0x35b82d0();
   input += synapse0x35b8310();
   input += synapse0x35b8350();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35b79c0() {
   double input = input0x35b79c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35b8390() {
   double input = -0.937303;
   input += synapse0x35b86d0();
   input += synapse0x35b8710();
   input += synapse0x35b8750();
   input += synapse0x35b8790();
   input += synapse0x35b87d0();
   input += synapse0x35b8810();
   input += synapse0x35b8850();
   input += synapse0x35b8890();
   input += synapse0x35b88d0();
   input += synapse0x35b8910();
   input += synapse0x35b8950();
   input += synapse0x35b8990();
   input += synapse0x35b89d0();
   input += synapse0x35b8a10();
   input += synapse0x35b8a50();
   input += synapse0x35b8a90();
   input += synapse0x35b8520();
   input += synapse0x35b8560();
   input += synapse0x35b8be0();
   input += synapse0x35b8c20();
   input += synapse0x35b8c60();
   input += synapse0x35b8ca0();
   input += synapse0x35b8ce0();
   input += synapse0x35b8d20();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35b8390() {
   double input = input0x35b8390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35b8d60() {
   double input = -4.70578;
   input += synapse0x35b90a0();
   input += synapse0x35b90e0();
   input += synapse0x35b9120();
   input += synapse0x35b9160();
   input += synapse0x35b91a0();
   input += synapse0x35b91e0();
   input += synapse0x35b9220();
   input += synapse0x35b9260();
   input += synapse0x35b92a0();
   input += synapse0x35b92e0();
   input += synapse0x35b9320();
   input += synapse0x35b9360();
   input += synapse0x35b93a0();
   input += synapse0x35b93e0();
   input += synapse0x35b9420();
   input += synapse0x35b9460();
   input += synapse0x35b8ef0();
   input += synapse0x35b8f30();
   input += synapse0x35b95b0();
   input += synapse0x35b95f0();
   input += synapse0x35b9630();
   input += synapse0x35b9670();
   input += synapse0x35b96b0();
   input += synapse0x35b96f0();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35b8d60() {
   double input = input0x35b8d60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35b9730() {
   double input = 0.434307;
   input += synapse0x35b9a70();
   input += synapse0x35b9ab0();
   input += synapse0x35b9af0();
   input += synapse0x35b9b30();
   input += synapse0x35b9b70();
   input += synapse0x35b9bb0();
   input += synapse0x35b9bf0();
   input += synapse0x35b9c30();
   input += synapse0x35b9c70();
   input += synapse0x35b9cb0();
   input += synapse0x35b9cf0();
   input += synapse0x35b9d30();
   input += synapse0x35b9d70();
   input += synapse0x35b9db0();
   input += synapse0x35b9df0();
   input += synapse0x35b9e30();
   input += synapse0x35b98c0();
   input += synapse0x35b9900();
   input += synapse0x35b9f80();
   input += synapse0x35b9fc0();
   input += synapse0x35ba000();
   input += synapse0x35ba040();
   input += synapse0x35ba080();
   input += synapse0x35ba0c0();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35b9730() {
   double input = input0x35b9730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35ba100() {
   double input = -3.99921;
   input += synapse0x35a2b70();
   input += synapse0x35a2bb0();
   input += synapse0x35a2bf0();
   input += synapse0x35a2c30();
   input += synapse0x35a2c70();
   input += synapse0x35a2cb0();
   input += synapse0x35a2cf0();
   input += synapse0x35a2d30();
   input += synapse0x35ba850();
   input += synapse0x35ba890();
   input += synapse0x35ba8d0();
   input += synapse0x35ba910();
   input += synapse0x35ba950();
   input += synapse0x35ba990();
   input += synapse0x35ba9d0();
   input += synapse0x35baa10();
   input += synapse0x35ba290();
   input += synapse0x35ba2d0();
   input += synapse0x35bab60();
   input += synapse0x35baba0();
   input += synapse0x35babe0();
   input += synapse0x35bac20();
   input += synapse0x35bac60();
   input += synapse0x35baca0();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35ba100() {
   double input = input0x35ba100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35bace0() {
   double input = 3.25723;
   input += synapse0x35bb020();
   input += synapse0x35bb060();
   input += synapse0x35bb0a0();
   input += synapse0x35bb0e0();
   input += synapse0x35bb120();
   input += synapse0x35bb160();
   input += synapse0x35bb1a0();
   input += synapse0x35bb1e0();
   input += synapse0x35bb220();
   input += synapse0x35bb260();
   input += synapse0x35bb2a0();
   input += synapse0x35bb2e0();
   input += synapse0x35bb320();
   input += synapse0x35bb360();
   input += synapse0x35bb3a0();
   input += synapse0x35bb3e0();
   input += synapse0x35bae70();
   input += synapse0x35baeb0();
   input += synapse0x35bb530();
   input += synapse0x35bb570();
   input += synapse0x35bb5b0();
   input += synapse0x35bb5f0();
   input += synapse0x35bb630();
   input += synapse0x35bb670();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35bace0() {
   double input = input0x35bace0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35bb6b0() {
   double input = 1.62959;
   input += synapse0x35bb9f0();
   input += synapse0x35bba30();
   input += synapse0x35bba70();
   input += synapse0x35bbab0();
   input += synapse0x35bbaf0();
   input += synapse0x35bbb30();
   input += synapse0x35bbb70();
   input += synapse0x35bbbb0();
   input += synapse0x35bbbf0();
   input += synapse0x35bbc30();
   input += synapse0x35bbc70();
   input += synapse0x35bbcb0();
   input += synapse0x35bbcf0();
   input += synapse0x35bbd30();
   input += synapse0x35bbd70();
   input += synapse0x35bbdb0();
   input += synapse0x35bb840();
   input += synapse0x35bb880();
   input += synapse0x35ac3b0();
   input += synapse0x35ac3f0();
   input += synapse0x35ac430();
   input += synapse0x35ac470();
   input += synapse0x35ac4b0();
   input += synapse0x35ac4f0();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35bb6b0() {
   double input = input0x35bb6b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35ac530() {
   double input = -1.10214;
   input += synapse0x35ac870();
   input += synapse0x35ac8b0();
   input += synapse0x35ac8f0();
   input += synapse0x35ac930();
   input += synapse0x35ac970();
   input += synapse0x35ac9b0();
   input += synapse0x35ac9f0();
   input += synapse0x35aca30();
   input += synapse0x35aca70();
   input += synapse0x35acab0();
   input += synapse0x35acaf0();
   input += synapse0x35acb30();
   input += synapse0x35acb70();
   input += synapse0x35acbb0();
   input += synapse0x35acbf0();
   input += synapse0x35acc30();
   input += synapse0x35ac6c0();
   input += synapse0x35ac700();
   input += synapse0x35acd80();
   input += synapse0x35acdc0();
   input += synapse0x35ace00();
   input += synapse0x35ace40();
   input += synapse0x35ace80();
   input += synapse0x35acec0();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35ac530() {
   double input = input0x35ac530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35acf00() {
   double input = -0.234124;
   input += synapse0x35ad240();
   input += synapse0x35ad280();
   input += synapse0x35ad2c0();
   input += synapse0x35ad300();
   input += synapse0x35ad340();
   input += synapse0x35ad380();
   input += synapse0x35ad3c0();
   input += synapse0x35ad400();
   input += synapse0x35ad440();
   input += synapse0x35ad480();
   input += synapse0x35ad4c0();
   input += synapse0x35ad500();
   input += synapse0x35ad540();
   input += synapse0x35ad580();
   input += synapse0x35ad5c0();
   input += synapse0x35ad600();
   input += synapse0x35ad090();
   input += synapse0x35ad0d0();
   input += synapse0x35ad750();
   input += synapse0x35ad790();
   input += synapse0x35ad7d0();
   input += synapse0x35ad810();
   input += synapse0x35ad850();
   input += synapse0x35ad890();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35acf00() {
   double input = input0x35acf00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35ad8d0() {
   double input = -0.500696;
   input += synapse0x35adc10();
   input += synapse0x35adc50();
   input += synapse0x35adc90();
   input += synapse0x35adcd0();
   input += synapse0x35add10();
   input += synapse0x35add50();
   input += synapse0x35add90();
   input += synapse0x35addd0();
   input += synapse0x35ade10();
   input += synapse0x35ade50();
   input += synapse0x35ade90();
   input += synapse0x35aded0();
   input += synapse0x35adf10();
   input += synapse0x35adf50();
   input += synapse0x35adf90();
   input += synapse0x35adfd0();
   input += synapse0x35ada60();
   input += synapse0x35adaa0();
   input += synapse0x35ae120();
   input += synapse0x35ae160();
   input += synapse0x35ae1a0();
   input += synapse0x35ae1e0();
   input += synapse0x35ae220();
   input += synapse0x35ae260();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35ad8d0() {
   double input = input0x35ad8d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35bff10() {
   double input = -0.453883;
   input += synapse0x35c0130();
   input += synapse0x35c0170();
   input += synapse0x35c01b0();
   input += synapse0x35c01f0();
   input += synapse0x35c0230();
   input += synapse0x35c0270();
   input += synapse0x35c02b0();
   input += synapse0x35c02f0();
   input += synapse0x35c0330();
   input += synapse0x35c0370();
   input += synapse0x35c03b0();
   input += synapse0x35c03f0();
   input += synapse0x35c0430();
   input += synapse0x35c0470();
   input += synapse0x35c04b0();
   input += synapse0x35c04f0();
   input += synapse0x35ae2a0();
   input += synapse0x35ae2e0();
   input += synapse0x35c0640();
   input += synapse0x35c0680();
   input += synapse0x35c06c0();
   input += synapse0x35c0700();
   input += synapse0x35c0740();
   input += synapse0x35c0780();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35bff10() {
   double input = input0x35bff10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35c07c0() {
   double input = 5.79636;
   input += synapse0x35c0b00();
   input += synapse0x35c0b40();
   input += synapse0x35c0b80();
   input += synapse0x35c0bc0();
   input += synapse0x35c0c00();
   input += synapse0x35c0c40();
   input += synapse0x35c0c80();
   input += synapse0x35c0cc0();
   input += synapse0x35c0d00();
   input += synapse0x35c0d40();
   input += synapse0x35c0d80();
   input += synapse0x35c0dc0();
   input += synapse0x35c0e00();
   input += synapse0x35c0e40();
   input += synapse0x35c0e80();
   input += synapse0x35c0ec0();
   input += synapse0x35c0950();
   input += synapse0x35c0990();
   input += synapse0x35c1010();
   input += synapse0x35c1050();
   input += synapse0x35c1090();
   input += synapse0x35c10d0();
   input += synapse0x35c1110();
   input += synapse0x35c1150();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35c07c0() {
   double input = input0x35c07c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35c1190() {
   double input = -0.851698;
   input += synapse0x35c14d0();
   input += synapse0x35c1510();
   input += synapse0x35c1550();
   input += synapse0x35c1590();
   input += synapse0x35c15d0();
   input += synapse0x35c1610();
   input += synapse0x35c1650();
   input += synapse0x35c1690();
   input += synapse0x35c16d0();
   input += synapse0x35c1710();
   input += synapse0x35c1750();
   input += synapse0x35c1790();
   input += synapse0x35c17d0();
   input += synapse0x35c1810();
   input += synapse0x35c1850();
   input += synapse0x35c1890();
   input += synapse0x35c1320();
   input += synapse0x35c1360();
   input += synapse0x35c19e0();
   input += synapse0x35c1a20();
   input += synapse0x35c1a60();
   input += synapse0x35c1aa0();
   input += synapse0x35c1ae0();
   input += synapse0x35c1b20();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35c1190() {
   double input = input0x35c1190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35c1b60() {
   double input = -1.09649;
   input += synapse0x35c1ea0();
   input += synapse0x35c1ee0();
   input += synapse0x35c1f20();
   input += synapse0x35c1f60();
   input += synapse0x35c1fa0();
   input += synapse0x35c1fe0();
   input += synapse0x35c2020();
   input += synapse0x35c2060();
   input += synapse0x35c20a0();
   input += synapse0x35c20e0();
   input += synapse0x35c2120();
   input += synapse0x35c2160();
   input += synapse0x35c21a0();
   input += synapse0x35c21e0();
   input += synapse0x35c2220();
   input += synapse0x35c2260();
   input += synapse0x35c1cf0();
   input += synapse0x35c1d30();
   input += synapse0x35c23b0();
   input += synapse0x35c23f0();
   input += synapse0x35c2430();
   input += synapse0x35c2470();
   input += synapse0x35c24b0();
   input += synapse0x35c24f0();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35c1b60() {
   double input = input0x35c1b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35c8d60() {
   double input = -1.41948;
   input += synapse0x3362360();
   input += synapse0x33623a0();
   input += synapse0x359eea0();
   input += synapse0x359eee0();
   input += synapse0x35a0970();
   input += synapse0x35a09b0();
   input += synapse0x35a1740();
   input += synapse0x35a1780();
   input += synapse0x35a2110();
   input += synapse0x35a2150();
   input += synapse0x35a2ae0();
   input += synapse0x35a2b20();
   input += synapse0x35a35c0();
   input += synapse0x35a3600();
   input += synapse0x35a3f90();
   input += synapse0x35a3fd0();
   input += synapse0x35a1070();
   input += synapse0x35a10b0();
   input += synapse0x35a5b40();
   input += synapse0x35a5b80();
   input += synapse0x35a6510();
   input += synapse0x35a6550();
   input += synapse0x35a6ee0();
   input += synapse0x35a6f20();
   input += synapse0x35a78b0();
   input += synapse0x35a78f0();
   input += synapse0x359a940();
   input += synapse0x359a980();
   input += synapse0x35a99a0();
   input += synapse0x35a99e0();
   input += synapse0x35aa370();
   input += synapse0x35aa3b0();
   input += synapse0x35aad40();
   input += synapse0x35aad80();
   input += synapse0x35ab710();
   input += synapse0x35ab750();
   input += synapse0x35ac0e0();
   input += synapse0x35ac120();
   input += synapse0x35a4c30();
   input += synapse0x35a4c70();
   input += synapse0x35ae4e0();
   input += synapse0x35ae520();
   input += synapse0x35aee70();
   input += synapse0x35aeeb0();
   input += synapse0x35af840();
   input += synapse0x35af880();
   input += synapse0x35b0210();
   input += synapse0x35b0250();
   input += synapse0x35b0be0();
   input += synapse0x35b0c20();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35c8d60() {
   double input = input0x35c8d60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35c9100() {
   double input = -0.535032;
   input += synapse0x35b3320();
   input += synapse0x35b3360();
   input += synapse0x35a88e0();
   input += synapse0x35a8920();
   input += synapse0x35b5f00();
   input += synapse0x35b5f40();
   input += synapse0x35b68d0();
   input += synapse0x35b6910();
   input += synapse0x35b72a0();
   input += synapse0x35b72e0();
   input += synapse0x35b7c70();
   input += synapse0x35b7cb0();
   input += synapse0x35b8640();
   input += synapse0x35b8680();
   input += synapse0x35b9010();
   input += synapse0x35b9050();
   input += synapse0x35b99e0();
   input += synapse0x35b9a20();
   input += synapse0x35ba3b0();
   input += synapse0x35ba3f0();
   input += synapse0x35baf90();
   input += synapse0x35bafd0();
   input += synapse0x35bb960();
   input += synapse0x35bb9a0();
   input += synapse0x35ac7e0();
   input += synapse0x35ac820();
   input += synapse0x35ad1b0();
   input += synapse0x35ad1f0();
   input += synapse0x35adb80();
   input += synapse0x35adbc0();
   input += synapse0x35c00a0();
   input += synapse0x35c00e0();
   input += synapse0x35c0a70();
   input += synapse0x35c0ab0();
   input += synapse0x35c1440();
   input += synapse0x35c1480();
   input += synapse0x35c1e10();
   input += synapse0x35c1e50();
   input += synapse0x359cda0();
   input += synapse0x359cde0();
   input += synapse0x35b15b0();
   input += synapse0x35b15f0();
   input += synapse0x35c2530();
   input += synapse0x35c2570();
   input += synapse0x35c25b0();
   input += synapse0x35c25f0();
   input += synapse0x35c94a0();
   input += synapse0x35c94e0();
   input += synapse0x35c9520();
   input += synapse0x35c9560();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35c9100() {
   double input = input0x35c9100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35c95a0() {
   double input = -0.474136;
   input += synapse0x35c98e0();
   input += synapse0x35c9920();
   input += synapse0x35c9960();
   input += synapse0x35c99a0();
   input += synapse0x35c99e0();
   input += synapse0x35c9a20();
   input += synapse0x35c9a60();
   input += synapse0x35c9aa0();
   input += synapse0x35c9ae0();
   input += synapse0x35c9b20();
   input += synapse0x35c9b60();
   input += synapse0x35c9ba0();
   input += synapse0x35c9be0();
   input += synapse0x35c9c20();
   input += synapse0x35c9c60();
   input += synapse0x35c9ca0();
   input += synapse0x35c9730();
   input += synapse0x35c9770();
   input += synapse0x35c9df0();
   input += synapse0x35c9e30();
   input += synapse0x35c9e70();
   input += synapse0x35c9eb0();
   input += synapse0x35c9ef0();
   input += synapse0x35c9f30();
   input += synapse0x35c9f70();
   input += synapse0x35c9fb0();
   input += synapse0x35c9ff0();
   input += synapse0x35ca030();
   input += synapse0x35ca070();
   input += synapse0x35ca0b0();
   input += synapse0x35ca0f0();
   input += synapse0x35ca130();
   input += synapse0x35c9ce0();
   input += synapse0x35c9d20();
   input += synapse0x35c9d60();
   input += synapse0x35c9da0();
   input += synapse0x35ca380();
   input += synapse0x35ca3c0();
   input += synapse0x35ca400();
   input += synapse0x35ca440();
   input += synapse0x35ca480();
   input += synapse0x35ca4c0();
   input += synapse0x35ca500();
   input += synapse0x35ca540();
   input += synapse0x35ca580();
   input += synapse0x35ca5c0();
   input += synapse0x35ca600();
   input += synapse0x35ca640();
   input += synapse0x35ca680();
   input += synapse0x35ca6c0();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35c95a0() {
   double input = input0x35c95a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35ca700() {
   double input = 0.191643;
   input += synapse0x35caa40();
   input += synapse0x35caa80();
   input += synapse0x35caac0();
   input += synapse0x35cab00();
   input += synapse0x35cab40();
   input += synapse0x35cab80();
   input += synapse0x35cabc0();
   input += synapse0x35cac00();
   input += synapse0x35cac40();
   input += synapse0x35cac80();
   input += synapse0x35cacc0();
   input += synapse0x35cad00();
   input += synapse0x35cad40();
   input += synapse0x35cad80();
   input += synapse0x35cadc0();
   input += synapse0x35cae00();
   input += synapse0x35ca890();
   input += synapse0x35ca8d0();
   input += synapse0x35caf50();
   input += synapse0x35caf90();
   input += synapse0x35cafd0();
   input += synapse0x35cb010();
   input += synapse0x35cb050();
   input += synapse0x35cb090();
   input += synapse0x35cb0d0();
   input += synapse0x35cb110();
   input += synapse0x35cb150();
   input += synapse0x35cb190();
   input += synapse0x35cb1d0();
   input += synapse0x35cb210();
   input += synapse0x35cb250();
   input += synapse0x35cb290();
   input += synapse0x35cae40();
   input += synapse0x35cae80();
   input += synapse0x35caec0();
   input += synapse0x35caf00();
   input += synapse0x35cb4e0();
   input += synapse0x35cb520();
   input += synapse0x35cb560();
   input += synapse0x35cb5a0();
   input += synapse0x35cb5e0();
   input += synapse0x35cb620();
   input += synapse0x35cb660();
   input += synapse0x35cb6a0();
   input += synapse0x35cb6e0();
   input += synapse0x35cb720();
   input += synapse0x35cb760();
   input += synapse0x35cb7a0();
   input += synapse0x35cb7e0();
   input += synapse0x35cb820();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35ca700() {
   double input = input0x35ca700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35cb860() {
   double input = -1.25395;
   input += synapse0x35cbba0();
   input += synapse0x35cbbe0();
   input += synapse0x35cbc20();
   input += synapse0x35cbc60();
   input += synapse0x35cbca0();
   input += synapse0x35cbce0();
   input += synapse0x35cbd20();
   input += synapse0x35cbd60();
   input += synapse0x35cbda0();
   input += synapse0x35cbde0();
   input += synapse0x35cbe20();
   input += synapse0x35cbe60();
   input += synapse0x35cbea0();
   input += synapse0x35cbee0();
   input += synapse0x35cbf20();
   input += synapse0x35cbf60();
   input += synapse0x35cb9f0();
   input += synapse0x35cba30();
   input += synapse0x35cc0b0();
   input += synapse0x35cc0f0();
   input += synapse0x35cc130();
   input += synapse0x35cc170();
   input += synapse0x35cc1b0();
   input += synapse0x35cc1f0();
   input += synapse0x35cc230();
   input += synapse0x35cc270();
   input += synapse0x35cc2b0();
   input += synapse0x35cc2f0();
   input += synapse0x35cc330();
   input += synapse0x35cc370();
   input += synapse0x35cc3b0();
   input += synapse0x35cc3f0();
   input += synapse0x35cbfa0();
   input += synapse0x35cbfe0();
   input += synapse0x35cc020();
   input += synapse0x35cc060();
   input += synapse0x35cc640();
   input += synapse0x35cc680();
   input += synapse0x35cc6c0();
   input += synapse0x35cc700();
   input += synapse0x35cc740();
   input += synapse0x35cc780();
   input += synapse0x35cc7c0();
   input += synapse0x35cc800();
   input += synapse0x35cc840();
   input += synapse0x35cc880();
   input += synapse0x35cc8c0();
   input += synapse0x35cc900();
   input += synapse0x35cc940();
   input += synapse0x35cc980();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35cb860() {
   double input = input0x35cb860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_uR::input0x35cc9c0() {
   double input = 15.5658;
   input += synapse0x35ccbe0();
   input += synapse0x35ccc20();
   input += synapse0x35ccc60();
   input += synapse0x35ccca0();
   input += synapse0x35ccce0();
   return input;
}

double NNfunction_ns_chi03_uR::neuron0x35cc9c0() {
   double input = input0x35cc9c0();
   return (input * 1)+0;
}

double NNfunction_ns_chi03_uR::synapse0x359ce30() {
   return (neuron0x3597a30()*-0.0120167);
}

double NNfunction_ns_chi03_uR::synapse0x359ce70() {
   return (neuron0x3597ce0()*0.0560856);
}

double NNfunction_ns_chi03_uR::synapse0x359ceb0() {
   return (neuron0x3598020()*0.216069);
}

double NNfunction_ns_chi03_uR::synapse0x359cef0() {
   return (neuron0x3598360()*0.0118288);
}

double NNfunction_ns_chi03_uR::synapse0x359cf30() {
   return (neuron0x35986a0()*-0.00753395);
}

double NNfunction_ns_chi03_uR::synapse0x359cf70() {
   return (neuron0x35989e0()*0.00706606);
}

double NNfunction_ns_chi03_uR::synapse0x359cfb0() {
   return (neuron0x3598d20()*0.00038188);
}

double NNfunction_ns_chi03_uR::synapse0x359cff0() {
   return (neuron0x3599060()*-0.0036449);
}

double NNfunction_ns_chi03_uR::synapse0x359d030() {
   return (neuron0x35993a0()*-0.0141325);
}

double NNfunction_ns_chi03_uR::synapse0x359d070() {
   return (neuron0x35996e0()*0.00497499);
}

double NNfunction_ns_chi03_uR::synapse0x359d0b0() {
   return (neuron0x3599a20()*-0.00517466);
}

double NNfunction_ns_chi03_uR::synapse0x359d0f0() {
   return (neuron0x3599d60()*0.00975981);
}

double NNfunction_ns_chi03_uR::synapse0x359d130() {
   return (neuron0x359a0a0()*0.00942755);
}

double NNfunction_ns_chi03_uR::synapse0x359d170() {
   return (neuron0x359a3e0()*-0.00402922);
}

double NNfunction_ns_chi03_uR::synapse0x359d1b0() {
   return (neuron0x359a720()*-0.146547);
}

double NNfunction_ns_chi03_uR::synapse0x359d1f0() {
   return (neuron0x359aa60()*0.00951544);
}

double NNfunction_ns_chi03_uR::synapse0x359cc80() {
   return (neuron0x359ada0()*-0.018926);
}

double NNfunction_ns_chi03_uR::synapse0x359ccc0() {
   return (neuron0x359b300()*-0.000864833);
}

double NNfunction_ns_chi03_uR::synapse0x3353bb0() {
   return (neuron0x359b640()*0.0169071);
}

double NNfunction_ns_chi03_uR::synapse0x3353bf0() {
   return (neuron0x359b980()*0.0117643);
}

double NNfunction_ns_chi03_uR::synapse0x359d230() {
   return (neuron0x359bcc0()*0.0203117);
}

double NNfunction_ns_chi03_uR::synapse0x359d270() {
   return (neuron0x359c000()*0.00501095);
}

double NNfunction_ns_chi03_uR::synapse0x359d2b0() {
   return (neuron0x359c340()*0.0115448);
}

double NNfunction_ns_chi03_uR::synapse0x359d2f0() {
   return (neuron0x359c680()*-0.885569);
}

double NNfunction_ns_chi03_uR::synapse0x359d670() {
   return (neuron0x3597a30()*0.0286651);
}

double NNfunction_ns_chi03_uR::synapse0x359d6b0() {
   return (neuron0x3597ce0()*0.959182);
}

double NNfunction_ns_chi03_uR::synapse0x359d6f0() {
   return (neuron0x3598020()*0.642763);
}

double NNfunction_ns_chi03_uR::synapse0x359d730() {
   return (neuron0x3598360()*0.00218764);
}

double NNfunction_ns_chi03_uR::synapse0x359d770() {
   return (neuron0x35986a0()*-0.00293847);
}

double NNfunction_ns_chi03_uR::synapse0x359d7b0() {
   return (neuron0x35989e0()*-0.0181651);
}

double NNfunction_ns_chi03_uR::synapse0x359d7f0() {
   return (neuron0x3598d20()*-0.0183894);
}

double NNfunction_ns_chi03_uR::synapse0x359d830() {
   return (neuron0x3599060()*0.00913015);
}

double NNfunction_ns_chi03_uR::synapse0x359d870() {
   return (neuron0x35993a0()*0.0150381);
}

double NNfunction_ns_chi03_uR::synapse0x3353a00() {
   return (neuron0x35996e0()*0.00367151);
}

double NNfunction_ns_chi03_uR::synapse0x3353a40() {
   return (neuron0x3599a20()*-0.0162066);
}

double NNfunction_ns_chi03_uR::synapse0x3353a80() {
   return (neuron0x3599d60()*0.0013853);
}

double NNfunction_ns_chi03_uR::synapse0x3353ac0() {
   return (neuron0x359a0a0()*0.0108321);
}

double NNfunction_ns_chi03_uR::synapse0x359dac0() {
   return (neuron0x359a3e0()*-0.0285065);
}

double NNfunction_ns_chi03_uR::synapse0x359db00() {
   return (neuron0x359a720()*-0.0181862);
}

double NNfunction_ns_chi03_uR::synapse0x359db40() {
   return (neuron0x359aa60()*0.00298027);
}

double NNfunction_ns_chi03_uR::synapse0x359d4c0() {
   return (neuron0x359ada0()*-0.00388124);
}

double NNfunction_ns_chi03_uR::synapse0x359d500() {
   return (neuron0x359b300()*-0.00171833);
}

double NNfunction_ns_chi03_uR::synapse0x359dc90() {
   return (neuron0x359b640()*0.0129045);
}

double NNfunction_ns_chi03_uR::synapse0x359dcd0() {
   return (neuron0x359b980()*-0.00389568);
}

double NNfunction_ns_chi03_uR::synapse0x359dd10() {
   return (neuron0x359bcc0()*-0.000191699);
}

double NNfunction_ns_chi03_uR::synapse0x359dd50() {
   return (neuron0x359c000()*0.00228837);
}

double NNfunction_ns_chi03_uR::synapse0x359dd90() {
   return (neuron0x359c340()*0.00775554);
}

double NNfunction_ns_chi03_uR::synapse0x359ddd0() {
   return (neuron0x359c680()*-0.202532);
}

double NNfunction_ns_chi03_uR::synapse0x359e150() {
   return (neuron0x3597a30()*0.0430045);
}

double NNfunction_ns_chi03_uR::synapse0x359e190() {
   return (neuron0x3597ce0()*0.472551);
}

double NNfunction_ns_chi03_uR::synapse0x359e1d0() {
   return (neuron0x3598020()*3.66776);
}

double NNfunction_ns_chi03_uR::synapse0x359e210() {
   return (neuron0x3598360()*-0.0957175);
}

double NNfunction_ns_chi03_uR::synapse0x359e250() {
   return (neuron0x35986a0()*-0.0449411);
}

double NNfunction_ns_chi03_uR::synapse0x359e290() {
   return (neuron0x35989e0()*-0.014792);
}

double NNfunction_ns_chi03_uR::synapse0x359e2d0() {
   return (neuron0x3598d20()*-0.0685414);
}

double NNfunction_ns_chi03_uR::synapse0x359e310() {
   return (neuron0x3599060()*-0.00217803);
}

double NNfunction_ns_chi03_uR::synapse0x359e350() {
   return (neuron0x35993a0()*-0.13034);
}

double NNfunction_ns_chi03_uR::synapse0x359e390() {
   return (neuron0x35996e0()*0.0619254);
}

double NNfunction_ns_chi03_uR::synapse0x359e3d0() {
   return (neuron0x3599a20()*-0.0889605);
}

double NNfunction_ns_chi03_uR::synapse0x359e410() {
   return (neuron0x3599d60()*0.0680328);
}

double NNfunction_ns_chi03_uR::synapse0x359e450() {
   return (neuron0x359a0a0()*0.0859093);
}

double NNfunction_ns_chi03_uR::synapse0x359e490() {
   return (neuron0x359a3e0()*-0.0683594);
}

double NNfunction_ns_chi03_uR::synapse0x359e4d0() {
   return (neuron0x359a720()*-0.164597);
}

double NNfunction_ns_chi03_uR::synapse0x359e510() {
   return (neuron0x359aa60()*-0.0110528);
}

double NNfunction_ns_chi03_uR::synapse0x359dfa0() {
   return (neuron0x359ada0()*0.0449122);
}

double NNfunction_ns_chi03_uR::synapse0x359dfe0() {
   return (neuron0x359b300()*0.0259518);
}

double NNfunction_ns_chi03_uR::synapse0x33542a0() {
   return (neuron0x359b640()*0.0667765);
}

double NNfunction_ns_chi03_uR::synapse0x3361b70() {
   return (neuron0x359b980()*-0.020371);
}

double NNfunction_ns_chi03_uR::synapse0x3361bb0() {
   return (neuron0x359bcc0()*0.0356021);
}

double NNfunction_ns_chi03_uR::synapse0x35a0440() {
   return (neuron0x359c000()*-0.0349209);
}

double NNfunction_ns_chi03_uR::synapse0x35a0480() {
   return (neuron0x359c340()*0.0426375);
}

double NNfunction_ns_chi03_uR::synapse0x3597770() {
   return (neuron0x359c680()*-2.78927);
}

double NNfunction_ns_chi03_uR::synapse0x3597840() {
   return (neuron0x3597a30()*-0.425287);
}

double NNfunction_ns_chi03_uR::synapse0x33623f0() {
   return (neuron0x3597ce0()*0.393697);
}

double NNfunction_ns_chi03_uR::synapse0x359da40() {
   return (neuron0x3598020()*0.0116699);
}

double NNfunction_ns_chi03_uR::synapse0x359da80() {
   return (neuron0x3598360()*-0.362845);
}

double NNfunction_ns_chi03_uR::synapse0x359e660() {
   return (neuron0x35986a0()*0.294734);
}

double NNfunction_ns_chi03_uR::synapse0x359e6a0() {
   return (neuron0x35989e0()*0.0379975);
}

double NNfunction_ns_chi03_uR::synapse0x359e6e0() {
   return (neuron0x3598d20()*-0.066193);
}

double NNfunction_ns_chi03_uR::synapse0x359e720() {
   return (neuron0x3599060()*0.189362);
}

double NNfunction_ns_chi03_uR::synapse0x359e760() {
   return (neuron0x35993a0()*0.695019);
}

double NNfunction_ns_chi03_uR::synapse0x359e7a0() {
   return (neuron0x35996e0()*-0.151936);
}

double NNfunction_ns_chi03_uR::synapse0x359e7e0() {
   return (neuron0x3599a20()*0.347308);
}

double NNfunction_ns_chi03_uR::synapse0x359e820() {
   return (neuron0x3599d60()*-0.17286);
}

double NNfunction_ns_chi03_uR::synapse0x359e860() {
   return (neuron0x359a0a0()*0.716116);
}

double NNfunction_ns_chi03_uR::synapse0x359e8a0() {
   return (neuron0x359a3e0()*-0.382445);
}

double NNfunction_ns_chi03_uR::synapse0x359e8e0() {
   return (neuron0x359a720()*-0.178441);
}

double NNfunction_ns_chi03_uR::synapse0x359e920() {
   return (neuron0x359aa60()*0.555388);
}

double NNfunction_ns_chi03_uR::synapse0x35977b0() {
   return (neuron0x359ada0()*0.368999);
}

double NNfunction_ns_chi03_uR::synapse0x35977f0() {
   return (neuron0x359b300()*0.38231);
}

double NNfunction_ns_chi03_uR::synapse0x359ea70() {
   return (neuron0x359b640()*-0.915841);
}

double NNfunction_ns_chi03_uR::synapse0x359eab0() {
   return (neuron0x359b980()*-0.139743);
}

double NNfunction_ns_chi03_uR::synapse0x359eaf0() {
   return (neuron0x359bcc0()*0.528175);
}

double NNfunction_ns_chi03_uR::synapse0x359eb30() {
   return (neuron0x359c000()*-0.218777);
}

double NNfunction_ns_chi03_uR::synapse0x359eb70() {
   return (neuron0x359c340()*-0.116808);
}

double NNfunction_ns_chi03_uR::synapse0x359ebb0() {
   return (neuron0x359c680()*0.983295);
}

double NNfunction_ns_chi03_uR::synapse0x359ef30() {
   return (neuron0x3597a30()*0.0279174);
}

double NNfunction_ns_chi03_uR::synapse0x359ef70() {
   return (neuron0x3597ce0()*0.0431585);
}

double NNfunction_ns_chi03_uR::synapse0x359efb0() {
   return (neuron0x3598020()*-0.339238);
}

double NNfunction_ns_chi03_uR::synapse0x359eff0() {
   return (neuron0x3598360()*-0.0463245);
}

double NNfunction_ns_chi03_uR::synapse0x359f030() {
   return (neuron0x35986a0()*-0.000956336);
}

double NNfunction_ns_chi03_uR::synapse0x359f070() {
   return (neuron0x35989e0()*-0.153325);
}

double NNfunction_ns_chi03_uR::synapse0x359f0b0() {
   return (neuron0x3598d20()*-0.0238713);
}

double NNfunction_ns_chi03_uR::synapse0x359f0f0() {
   return (neuron0x3599060()*-0.2043);
}

double NNfunction_ns_chi03_uR::synapse0x359f130() {
   return (neuron0x35993a0()*0.0718939);
}

double NNfunction_ns_chi03_uR::synapse0x359f170() {
   return (neuron0x35996e0()*0.0665179);
}

double NNfunction_ns_chi03_uR::synapse0x359f1b0() {
   return (neuron0x3599a20()*0.024754);
}

double NNfunction_ns_chi03_uR::synapse0x359f1f0() {
   return (neuron0x3599d60()*0.0111675);
}

double NNfunction_ns_chi03_uR::synapse0x359f230() {
   return (neuron0x359a0a0()*0.00452599);
}

double NNfunction_ns_chi03_uR::synapse0x359f270() {
   return (neuron0x359a3e0()*0.0410967);
}

double NNfunction_ns_chi03_uR::synapse0x359f2b0() {
   return (neuron0x359a720()*1.3195);
}

double NNfunction_ns_chi03_uR::synapse0x359f2f0() {
   return (neuron0x359aa60()*-0.270646);
}

double NNfunction_ns_chi03_uR::synapse0x359f440() {
   return (neuron0x359ada0()*-0.0328213);
}

double NNfunction_ns_chi03_uR::synapse0x359ed80() {
   return (neuron0x359b300()*0.0419114);
}

double NNfunction_ns_chi03_uR::synapse0x359edc0() {
   return (neuron0x359b640()*-0.0167299);
}

double NNfunction_ns_chi03_uR::synapse0x35a0580() {
   return (neuron0x359b980()*0.00719785);
}

double NNfunction_ns_chi03_uR::synapse0x35a05c0() {
   return (neuron0x359bcc0()*-0.0282084);
}

double NNfunction_ns_chi03_uR::synapse0x35a0600() {
   return (neuron0x359c000()*0.0175593);
}

double NNfunction_ns_chi03_uR::synapse0x35a0640() {
   return (neuron0x359c340()*0.045993);
}

double NNfunction_ns_chi03_uR::synapse0x35a0680() {
   return (neuron0x359c680()*0.0350596);
}

double NNfunction_ns_chi03_uR::synapse0x35a0a00() {
   return (neuron0x3597a30()*-0.541488);
}

double NNfunction_ns_chi03_uR::synapse0x35a0a40() {
   return (neuron0x3597ce0()*0.68798);
}

double NNfunction_ns_chi03_uR::synapse0x35a0a80() {
   return (neuron0x3598020()*-0.0934804);
}

double NNfunction_ns_chi03_uR::synapse0x35a0ac0() {
   return (neuron0x3598360()*-0.544597);
}

double NNfunction_ns_chi03_uR::synapse0x35a0b00() {
   return (neuron0x35986a0()*0.0982961);
}

double NNfunction_ns_chi03_uR::synapse0x35a0b40() {
   return (neuron0x35989e0()*0.132639);
}

double NNfunction_ns_chi03_uR::synapse0x35a0b80() {
   return (neuron0x3598d20()*-0.154506);
}

double NNfunction_ns_chi03_uR::synapse0x35a0bc0() {
   return (neuron0x3599060()*0.581095);
}

double NNfunction_ns_chi03_uR::synapse0x35a0c00() {
   return (neuron0x35993a0()*0.956358);
}

double NNfunction_ns_chi03_uR::synapse0x3361ec0() {
   return (neuron0x35996e0()*-0.00545347);
}

double NNfunction_ns_chi03_uR::synapse0x3361f00() {
   return (neuron0x3599a20()*-0.0695691);
}

double NNfunction_ns_chi03_uR::synapse0x3361f40() {
   return (neuron0x3599d60()*-0.846056);
}

double NNfunction_ns_chi03_uR::synapse0x3361f80() {
   return (neuron0x359a0a0()*-0.263619);
}

double NNfunction_ns_chi03_uR::synapse0x3361fc0() {
   return (neuron0x359a3e0()*-0.087161);
}

double NNfunction_ns_chi03_uR::synapse0x3362000() {
   return (neuron0x359a720()*0.0602851);
}

double NNfunction_ns_chi03_uR::synapse0x3362040() {
   return (neuron0x359aa60()*1.04515);
}

double NNfunction_ns_chi03_uR::synapse0x35a0850() {
   return (neuron0x359ada0()*0.226711);
}

double NNfunction_ns_chi03_uR::synapse0x35a0890() {
   return (neuron0x359b300()*0.353068);
}

double NNfunction_ns_chi03_uR::synapse0x3362190() {
   return (neuron0x359b640()*2.37575);
}

double NNfunction_ns_chi03_uR::synapse0x33621d0() {
   return (neuron0x359b980()*0.166688);
}

double NNfunction_ns_chi03_uR::synapse0x3362210() {
   return (neuron0x359bcc0()*-0.187718);
}

double NNfunction_ns_chi03_uR::synapse0x3362250() {
   return (neuron0x359c000()*0.173975);
}

double NNfunction_ns_chi03_uR::synapse0x3362290() {
   return (neuron0x359c340()*-0.401558);
}

double NNfunction_ns_chi03_uR::synapse0x35a1450() {
   return (neuron0x359c680()*1.05875);
}

double NNfunction_ns_chi03_uR::synapse0x35a17d0() {
   return (neuron0x3597a30()*-1.30653);
}

double NNfunction_ns_chi03_uR::synapse0x35a1810() {
   return (neuron0x3597ce0()*-0.895117);
}

double NNfunction_ns_chi03_uR::synapse0x35a1850() {
   return (neuron0x3598020()*-0.53871);
}

double NNfunction_ns_chi03_uR::synapse0x35a1890() {
   return (neuron0x3598360()*0.0593877);
}

double NNfunction_ns_chi03_uR::synapse0x35a18d0() {
   return (neuron0x35986a0()*-0.380491);
}

double NNfunction_ns_chi03_uR::synapse0x35a1910() {
   return (neuron0x35989e0()*-0.78358);
}

double NNfunction_ns_chi03_uR::synapse0x35a1950() {
   return (neuron0x3598d20()*-0.243488);
}

double NNfunction_ns_chi03_uR::synapse0x35a1990() {
   return (neuron0x3599060()*-0.140539);
}

double NNfunction_ns_chi03_uR::synapse0x35a19d0() {
   return (neuron0x35993a0()*0.492298);
}

double NNfunction_ns_chi03_uR::synapse0x35a1a10() {
   return (neuron0x35996e0()*-0.23296);
}

double NNfunction_ns_chi03_uR::synapse0x35a1a50() {
   return (neuron0x3599a20()*0.47848);
}

double NNfunction_ns_chi03_uR::synapse0x35a1a90() {
   return (neuron0x3599d60()*-0.854896);
}

double NNfunction_ns_chi03_uR::synapse0x35a1ad0() {
   return (neuron0x359a0a0()*0.995046);
}

double NNfunction_ns_chi03_uR::synapse0x35a1b10() {
   return (neuron0x359a3e0()*-0.0973077);
}

double NNfunction_ns_chi03_uR::synapse0x35a1b50() {
   return (neuron0x359a720()*-0.0322227);
}

double NNfunction_ns_chi03_uR::synapse0x35a1b90() {
   return (neuron0x359aa60()*0.535859);
}

double NNfunction_ns_chi03_uR::synapse0x35a1620() {
   return (neuron0x359ada0()*0.467939);
}

double NNfunction_ns_chi03_uR::synapse0x35a1660() {
   return (neuron0x359b300()*0.460564);
}

double NNfunction_ns_chi03_uR::synapse0x35a1ce0() {
   return (neuron0x359b640()*-0.251594);
}

double NNfunction_ns_chi03_uR::synapse0x35a1d20() {
   return (neuron0x359b980()*0.454434);
}

double NNfunction_ns_chi03_uR::synapse0x35a1d60() {
   return (neuron0x359bcc0()*0.71393);
}

double NNfunction_ns_chi03_uR::synapse0x35a1da0() {
   return (neuron0x359c000()*-0.373567);
}

double NNfunction_ns_chi03_uR::synapse0x35a1de0() {
   return (neuron0x359c340()*0.0197578);
}

double NNfunction_ns_chi03_uR::synapse0x35a1e20() {
   return (neuron0x359c680()*0.118706);
}

double NNfunction_ns_chi03_uR::synapse0x35a21a0() {
   return (neuron0x3597a30()*0.0421131);
}

double NNfunction_ns_chi03_uR::synapse0x35a21e0() {
   return (neuron0x3597ce0()*12.6711);
}

double NNfunction_ns_chi03_uR::synapse0x35a2220() {
   return (neuron0x3598020()*0.608808);
}

double NNfunction_ns_chi03_uR::synapse0x35a2260() {
   return (neuron0x3598360()*-0.0114972);
}

double NNfunction_ns_chi03_uR::synapse0x35a22a0() {
   return (neuron0x35986a0()*0.0421234);
}

double NNfunction_ns_chi03_uR::synapse0x35a22e0() {
   return (neuron0x35989e0()*0.0205224);
}

double NNfunction_ns_chi03_uR::synapse0x35a2320() {
   return (neuron0x3598d20()*0.0237478);
}

double NNfunction_ns_chi03_uR::synapse0x35a2360() {
   return (neuron0x3599060()*0.0288559);
}

double NNfunction_ns_chi03_uR::synapse0x35a23a0() {
   return (neuron0x35993a0()*0.0135811);
}

double NNfunction_ns_chi03_uR::synapse0x35a23e0() {
   return (neuron0x35996e0()*-0.0294625);
}

double NNfunction_ns_chi03_uR::synapse0x35a2420() {
   return (neuron0x3599a20()*0.00966269);
}

double NNfunction_ns_chi03_uR::synapse0x35a2460() {
   return (neuron0x3599d60()*-0.0295656);
}

double NNfunction_ns_chi03_uR::synapse0x35a24a0() {
   return (neuron0x359a0a0()*-0.000538195);
}

double NNfunction_ns_chi03_uR::synapse0x35a24e0() {
   return (neuron0x359a3e0()*0.017453);
}

double NNfunction_ns_chi03_uR::synapse0x35a2520() {
   return (neuron0x359a720()*0.0506508);
}

double NNfunction_ns_chi03_uR::synapse0x35a2560() {
   return (neuron0x359aa60()*0.0284537);
}

double NNfunction_ns_chi03_uR::synapse0x35a1ff0() {
   return (neuron0x359ada0()*0.0292331);
}

double NNfunction_ns_chi03_uR::synapse0x35a2030() {
   return (neuron0x359b300()*0.0539981);
}

double NNfunction_ns_chi03_uR::synapse0x35a26b0() {
   return (neuron0x359b640()*0.0100579);
}

double NNfunction_ns_chi03_uR::synapse0x35a26f0() {
   return (neuron0x359b980()*-0.0262376);
}

double NNfunction_ns_chi03_uR::synapse0x35a2730() {
   return (neuron0x359bcc0()*0.0559443);
}

double NNfunction_ns_chi03_uR::synapse0x35a2770() {
   return (neuron0x359c000()*0.0258345);
}

double NNfunction_ns_chi03_uR::synapse0x35a27b0() {
   return (neuron0x359c340()*-0.00669268);
}

double NNfunction_ns_chi03_uR::synapse0x35a27f0() {
   return (neuron0x359c680()*1.80744);
}

double NNfunction_ns_chi03_uR::synapse0x359b1f0() {
   return (neuron0x3597a30()*0.0218927);
}

double NNfunction_ns_chi03_uR::synapse0x359b230() {
   return (neuron0x3597ce0()*-12.5325);
}

double NNfunction_ns_chi03_uR::synapse0x359b270() {
   return (neuron0x3598020()*-1.23713);
}

double NNfunction_ns_chi03_uR::synapse0x359b2b0() {
   return (neuron0x3598360()*0.0696745);
}

double NNfunction_ns_chi03_uR::synapse0x35a2d80() {
   return (neuron0x35986a0()*-0.00909853);
}

double NNfunction_ns_chi03_uR::synapse0x35a2dc0() {
   return (neuron0x35989e0()*0.0174781);
}

double NNfunction_ns_chi03_uR::synapse0x35a2e00() {
   return (neuron0x3598d20()*-0.0295238);
}

double NNfunction_ns_chi03_uR::synapse0x35a2e40() {
   return (neuron0x3599060()*-0.0412455);
}

double NNfunction_ns_chi03_uR::synapse0x35a2e80() {
   return (neuron0x35993a0()*-0.0152661);
}

double NNfunction_ns_chi03_uR::synapse0x35a2ec0() {
   return (neuron0x35996e0()*-0.0196777);
}

double NNfunction_ns_chi03_uR::synapse0x35a2f00() {
   return (neuron0x3599a20()*-0.0221003);
}

double NNfunction_ns_chi03_uR::synapse0x35a2f40() {
   return (neuron0x3599d60()*0.00599721);
}

double NNfunction_ns_chi03_uR::synapse0x35a2f80() {
   return (neuron0x359a0a0()*0.00421649);
}

double NNfunction_ns_chi03_uR::synapse0x35a2fc0() {
   return (neuron0x359a3e0()*-0.043748);
}

double NNfunction_ns_chi03_uR::synapse0x35a3000() {
   return (neuron0x359a720()*-0.0501091);
}

double NNfunction_ns_chi03_uR::synapse0x35a3040() {
   return (neuron0x359aa60()*-0.0386922);
}

double NNfunction_ns_chi03_uR::synapse0x35a29c0() {
   return (neuron0x359ada0()*-0.0217309);
}

double NNfunction_ns_chi03_uR::synapse0x35a2a00() {
   return (neuron0x359b300()*-0.0190847);
}

double NNfunction_ns_chi03_uR::synapse0x35a3190() {
   return (neuron0x359b640()*0.0440862);
}

double NNfunction_ns_chi03_uR::synapse0x35a31d0() {
   return (neuron0x359b980()*0.0341464);
}

double NNfunction_ns_chi03_uR::synapse0x35a3210() {
   return (neuron0x359bcc0()*-0.0292327);
}

double NNfunction_ns_chi03_uR::synapse0x35a3250() {
   return (neuron0x359c000()*0.00152647);
}

double NNfunction_ns_chi03_uR::synapse0x35a3290() {
   return (neuron0x359c340()*0.011807);
}

double NNfunction_ns_chi03_uR::synapse0x35a32d0() {
   return (neuron0x359c680()*5.11068);
}

double NNfunction_ns_chi03_uR::synapse0x35a3650() {
   return (neuron0x3597a30()*0.12852);
}

double NNfunction_ns_chi03_uR::synapse0x35a3690() {
   return (neuron0x3597ce0()*0.0700972);
}

double NNfunction_ns_chi03_uR::synapse0x35a36d0() {
   return (neuron0x3598020()*0.0779047);
}

double NNfunction_ns_chi03_uR::synapse0x35a3710() {
   return (neuron0x3598360()*-0.111157);
}

double NNfunction_ns_chi03_uR::synapse0x35a3750() {
   return (neuron0x35986a0()*-0.206626);
}

double NNfunction_ns_chi03_uR::synapse0x35a3790() {
   return (neuron0x35989e0()*-0.283875);
}

double NNfunction_ns_chi03_uR::synapse0x35a37d0() {
   return (neuron0x3598d20()*-0.0968301);
}

double NNfunction_ns_chi03_uR::synapse0x35a3810() {
   return (neuron0x3599060()*0.151416);
}

double NNfunction_ns_chi03_uR::synapse0x35a3850() {
   return (neuron0x35993a0()*0.454513);
}

double NNfunction_ns_chi03_uR::synapse0x35a3890() {
   return (neuron0x35996e0()*0.176553);
}

double NNfunction_ns_chi03_uR::synapse0x35a38d0() {
   return (neuron0x3599a20()*0.00537641);
}

double NNfunction_ns_chi03_uR::synapse0x35a3910() {
   return (neuron0x3599d60()*0.0528663);
}

double NNfunction_ns_chi03_uR::synapse0x35a3950() {
   return (neuron0x359a0a0()*-0.0881248);
}

double NNfunction_ns_chi03_uR::synapse0x35a3990() {
   return (neuron0x359a3e0()*0.191453);
}

double NNfunction_ns_chi03_uR::synapse0x35a39d0() {
   return (neuron0x359a720()*-0.2469);
}

double NNfunction_ns_chi03_uR::synapse0x35a3a10() {
   return (neuron0x359aa60()*1.1448);
}

double NNfunction_ns_chi03_uR::synapse0x35a34a0() {
   return (neuron0x359ada0()*0.322625);
}

double NNfunction_ns_chi03_uR::synapse0x35a34e0() {
   return (neuron0x359b300()*0.23105);
}

double NNfunction_ns_chi03_uR::synapse0x35a3b60() {
   return (neuron0x359b640()*-0.30764);
}

double NNfunction_ns_chi03_uR::synapse0x35a3ba0() {
   return (neuron0x359b980()*0.112185);
}

double NNfunction_ns_chi03_uR::synapse0x35a3be0() {
   return (neuron0x359bcc0()*-0.397854);
}

double NNfunction_ns_chi03_uR::synapse0x35a3c20() {
   return (neuron0x359c000()*-0.202453);
}

double NNfunction_ns_chi03_uR::synapse0x35a3c60() {
   return (neuron0x359c340()*-0.197659);
}

double NNfunction_ns_chi03_uR::synapse0x35a3ca0() {
   return (neuron0x359c680()*0.785455);
}

double NNfunction_ns_chi03_uR::synapse0x35a4020() {
   return (neuron0x3597a30()*0.595417);
}

double NNfunction_ns_chi03_uR::synapse0x35a4060() {
   return (neuron0x3597ce0()*1.21838);
}

double NNfunction_ns_chi03_uR::synapse0x35a40a0() {
   return (neuron0x3598020()*2.1267);
}

double NNfunction_ns_chi03_uR::synapse0x35a40e0() {
   return (neuron0x3598360()*0.598661);
}

double NNfunction_ns_chi03_uR::synapse0x35a4120() {
   return (neuron0x35986a0()*0.296932);
}

double NNfunction_ns_chi03_uR::synapse0x35a4160() {
   return (neuron0x35989e0()*-0.034417);
}

double NNfunction_ns_chi03_uR::synapse0x35a41a0() {
   return (neuron0x3598d20()*-1.13771);
}

double NNfunction_ns_chi03_uR::synapse0x35a41e0() {
   return (neuron0x3599060()*-0.153997);
}

double NNfunction_ns_chi03_uR::synapse0x35a4220() {
   return (neuron0x35993a0()*0.183856);
}

double NNfunction_ns_chi03_uR::synapse0x35a4260() {
   return (neuron0x35996e0()*0.568789);
}

double NNfunction_ns_chi03_uR::synapse0x35a42a0() {
   return (neuron0x3599a20()*0.149457);
}

double NNfunction_ns_chi03_uR::synapse0x35a42e0() {
   return (neuron0x3599d60()*-0.0356959);
}

double NNfunction_ns_chi03_uR::synapse0x35a4320() {
   return (neuron0x359a0a0()*0.129856);
}

double NNfunction_ns_chi03_uR::synapse0x35a4360() {
   return (neuron0x359a3e0()*0.135632);
}

double NNfunction_ns_chi03_uR::synapse0x35a43a0() {
   return (neuron0x359a720()*0.544865);
}

double NNfunction_ns_chi03_uR::synapse0x35a43e0() {
   return (neuron0x359aa60()*-0.97682);
}

double NNfunction_ns_chi03_uR::synapse0x35a3e70() {
   return (neuron0x359ada0()*-0.247099);
}

double NNfunction_ns_chi03_uR::synapse0x35a3eb0() {
   return (neuron0x359b300()*-0.0510499);
}

double NNfunction_ns_chi03_uR::synapse0x35a0c40() {
   return (neuron0x359b640()*-1.39629);
}

double NNfunction_ns_chi03_uR::synapse0x35a0c80() {
   return (neuron0x359b980()*0.259613);
}

double NNfunction_ns_chi03_uR::synapse0x35a0cc0() {
   return (neuron0x359bcc0()*-0.855597);
}

double NNfunction_ns_chi03_uR::synapse0x35a0d00() {
   return (neuron0x359c000()*-0.781776);
}

double NNfunction_ns_chi03_uR::synapse0x35a0d40() {
   return (neuron0x359c340()*0.0568327);
}

double NNfunction_ns_chi03_uR::synapse0x35a0d80() {
   return (neuron0x359c680()*-0.426564);
}

double NNfunction_ns_chi03_uR::synapse0x35a1100() {
   return (neuron0x3597a30()*-0.00679121);
}

double NNfunction_ns_chi03_uR::synapse0x35a1140() {
   return (neuron0x3597ce0()*-1.07221);
}

double NNfunction_ns_chi03_uR::synapse0x35a1180() {
   return (neuron0x3598020()*-3.49182);
}

double NNfunction_ns_chi03_uR::synapse0x35a11c0() {
   return (neuron0x3598360()*-0.0418288);
}

double NNfunction_ns_chi03_uR::synapse0x35a1200() {
   return (neuron0x35986a0()*0.0336663);
}

double NNfunction_ns_chi03_uR::synapse0x35a1240() {
   return (neuron0x35989e0()*-0.0527982);
}

double NNfunction_ns_chi03_uR::synapse0x35a1280() {
   return (neuron0x3598d20()*0.0335113);
}

double NNfunction_ns_chi03_uR::synapse0x35a12c0() {
   return (neuron0x3599060()*-0.153119);
}

double NNfunction_ns_chi03_uR::synapse0x35a1300() {
   return (neuron0x35993a0()*-0.00278006);
}

double NNfunction_ns_chi03_uR::synapse0x35a1340() {
   return (neuron0x35996e0()*-0.114199);
}

double NNfunction_ns_chi03_uR::synapse0x35a1380() {
   return (neuron0x3599a20()*-0.01401);
}

double NNfunction_ns_chi03_uR::synapse0x35a13c0() {
   return (neuron0x3599d60()*0.0833851);
}

double NNfunction_ns_chi03_uR::synapse0x35a1400() {
   return (neuron0x359a0a0()*0.0348021);
}

double NNfunction_ns_chi03_uR::synapse0x35a5540() {
   return (neuron0x359a3e0()*-0.0233842);
}

double NNfunction_ns_chi03_uR::synapse0x35a5580() {
   return (neuron0x359a720()*-0.608986);
}

double NNfunction_ns_chi03_uR::synapse0x35a55c0() {
   return (neuron0x359aa60()*-0.0937901);
}

double NNfunction_ns_chi03_uR::synapse0x35a0f50() {
   return (neuron0x359ada0()*0.0694207);
}

double NNfunction_ns_chi03_uR::synapse0x35a0f90() {
   return (neuron0x359b300()*-0.0447866);
}

double NNfunction_ns_chi03_uR::synapse0x35a5710() {
   return (neuron0x359b640()*0.0629279);
}

double NNfunction_ns_chi03_uR::synapse0x35a5750() {
   return (neuron0x359b980()*0.0996345);
}

double NNfunction_ns_chi03_uR::synapse0x35a5790() {
   return (neuron0x359bcc0()*-0.175192);
}

double NNfunction_ns_chi03_uR::synapse0x35a57d0() {
   return (neuron0x359c000()*0.00152019);
}

double NNfunction_ns_chi03_uR::synapse0x35a5810() {
   return (neuron0x359c340()*0.00293705);
}

double NNfunction_ns_chi03_uR::synapse0x35a5850() {
   return (neuron0x359c680()*1.53285);
}

double NNfunction_ns_chi03_uR::synapse0x35a5bd0() {
   return (neuron0x3597a30()*-0.0930305);
}

double NNfunction_ns_chi03_uR::synapse0x35a5c10() {
   return (neuron0x3597ce0()*0.283172);
}

double NNfunction_ns_chi03_uR::synapse0x35a5c50() {
   return (neuron0x3598020()*1.00434);
}

double NNfunction_ns_chi03_uR::synapse0x35a5c90() {
   return (neuron0x3598360()*0.0649346);
}

double NNfunction_ns_chi03_uR::synapse0x35a5cd0() {
   return (neuron0x35986a0()*0.1097);
}

double NNfunction_ns_chi03_uR::synapse0x35a5d10() {
   return (neuron0x35989e0()*-0.967738);
}

double NNfunction_ns_chi03_uR::synapse0x35a5d50() {
   return (neuron0x3598d20()*0.208263);
}

double NNfunction_ns_chi03_uR::synapse0x35a5d90() {
   return (neuron0x3599060()*1.0885);
}

double NNfunction_ns_chi03_uR::synapse0x35a5dd0() {
   return (neuron0x35993a0()*0.363848);
}

double NNfunction_ns_chi03_uR::synapse0x35a5e10() {
   return (neuron0x35996e0()*0.346417);
}

double NNfunction_ns_chi03_uR::synapse0x35a5e50() {
   return (neuron0x3599a20()*-0.102724);
}

double NNfunction_ns_chi03_uR::synapse0x35a5e90() {
   return (neuron0x3599d60()*0.19263);
}

double NNfunction_ns_chi03_uR::synapse0x35a5ed0() {
   return (neuron0x359a0a0()*0.25505);
}

double NNfunction_ns_chi03_uR::synapse0x35a5f10() {
   return (neuron0x359a3e0()*0.219947);
}

double NNfunction_ns_chi03_uR::synapse0x35a5f50() {
   return (neuron0x359a720()*-1.01925);
}

double NNfunction_ns_chi03_uR::synapse0x35a5f90() {
   return (neuron0x359aa60()*0.243255);
}

double NNfunction_ns_chi03_uR::synapse0x35a5a20() {
   return (neuron0x359ada0()*-0.636012);
}

double NNfunction_ns_chi03_uR::synapse0x35a5a60() {
   return (neuron0x359b300()*0.00268716);
}

double NNfunction_ns_chi03_uR::synapse0x35a60e0() {
   return (neuron0x359b640()*0.0303194);
}

double NNfunction_ns_chi03_uR::synapse0x35a6120() {
   return (neuron0x359b980()*0.136753);
}

double NNfunction_ns_chi03_uR::synapse0x35a6160() {
   return (neuron0x359bcc0()*0.610504);
}

double NNfunction_ns_chi03_uR::synapse0x35a61a0() {
   return (neuron0x359c000()*0.0261079);
}

double NNfunction_ns_chi03_uR::synapse0x35a61e0() {
   return (neuron0x359c340()*-0.216143);
}

double NNfunction_ns_chi03_uR::synapse0x35a6220() {
   return (neuron0x359c680()*0.591989);
}

double NNfunction_ns_chi03_uR::synapse0x35a65a0() {
   return (neuron0x3597a30()*-0.148693);
}

double NNfunction_ns_chi03_uR::synapse0x35a65e0() {
   return (neuron0x3597ce0()*-0.0925348);
}

double NNfunction_ns_chi03_uR::synapse0x35a6620() {
   return (neuron0x3598020()*0.150865);
}

double NNfunction_ns_chi03_uR::synapse0x35a6660() {
   return (neuron0x3598360()*0.495022);
}

double NNfunction_ns_chi03_uR::synapse0x35a66a0() {
   return (neuron0x35986a0()*0.793836);
}

double NNfunction_ns_chi03_uR::synapse0x35a66e0() {
   return (neuron0x35989e0()*-0.0561728);
}

double NNfunction_ns_chi03_uR::synapse0x35a6720() {
   return (neuron0x3598d20()*-0.44195);
}

double NNfunction_ns_chi03_uR::synapse0x35a6760() {
   return (neuron0x3599060()*0.633885);
}

double NNfunction_ns_chi03_uR::synapse0x35a67a0() {
   return (neuron0x35993a0()*0.107996);
}

double NNfunction_ns_chi03_uR::synapse0x35a67e0() {
   return (neuron0x35996e0()*0.0574692);
}

double NNfunction_ns_chi03_uR::synapse0x35a6820() {
   return (neuron0x3599a20()*-0.0867819);
}

double NNfunction_ns_chi03_uR::synapse0x35a6860() {
   return (neuron0x3599d60()*0.0855948);
}

double NNfunction_ns_chi03_uR::synapse0x35a68a0() {
   return (neuron0x359a0a0()*-0.00759899);
}

double NNfunction_ns_chi03_uR::synapse0x35a68e0() {
   return (neuron0x359a3e0()*0.322418);
}

double NNfunction_ns_chi03_uR::synapse0x35a6920() {
   return (neuron0x359a720()*-0.802691);
}

double NNfunction_ns_chi03_uR::synapse0x35a6960() {
   return (neuron0x359aa60()*-0.168244);
}

double NNfunction_ns_chi03_uR::synapse0x35a63f0() {
   return (neuron0x359ada0()*0.413688);
}

double NNfunction_ns_chi03_uR::synapse0x35a6430() {
   return (neuron0x359b300()*0.0763182);
}

double NNfunction_ns_chi03_uR::synapse0x35a6ab0() {
   return (neuron0x359b640()*-0.159443);
}

double NNfunction_ns_chi03_uR::synapse0x35a6af0() {
   return (neuron0x359b980()*0.00364024);
}

double NNfunction_ns_chi03_uR::synapse0x35a6b30() {
   return (neuron0x359bcc0()*-0.140255);
}

double NNfunction_ns_chi03_uR::synapse0x35a6b70() {
   return (neuron0x359c000()*-0.0785562);
}

double NNfunction_ns_chi03_uR::synapse0x35a6bb0() {
   return (neuron0x359c340()*0.00796291);
}

double NNfunction_ns_chi03_uR::synapse0x35a6bf0() {
   return (neuron0x359c680()*-0.876402);
}

double NNfunction_ns_chi03_uR::synapse0x35a6f70() {
   return (neuron0x3597a30()*-0.0276027);
}

double NNfunction_ns_chi03_uR::synapse0x35a6fb0() {
   return (neuron0x3597ce0()*0.0935463);
}

double NNfunction_ns_chi03_uR::synapse0x35a6ff0() {
   return (neuron0x3598020()*0.273279);
}

double NNfunction_ns_chi03_uR::synapse0x35a7030() {
   return (neuron0x3598360()*0.10806);
}

double NNfunction_ns_chi03_uR::synapse0x35a7070() {
   return (neuron0x35986a0()*0.0611792);
}

double NNfunction_ns_chi03_uR::synapse0x35a70b0() {
   return (neuron0x35989e0()*-0.11322);
}

double NNfunction_ns_chi03_uR::synapse0x35a70f0() {
   return (neuron0x3598d20()*0.190938);
}

double NNfunction_ns_chi03_uR::synapse0x35a7130() {
   return (neuron0x3599060()*-0.310391);
}

double NNfunction_ns_chi03_uR::synapse0x35a7170() {
   return (neuron0x35993a0()*-0.123305);
}

double NNfunction_ns_chi03_uR::synapse0x35a71b0() {
   return (neuron0x35996e0()*0.0423135);
}

double NNfunction_ns_chi03_uR::synapse0x35a71f0() {
   return (neuron0x3599a20()*-0.0121524);
}

double NNfunction_ns_chi03_uR::synapse0x35a7230() {
   return (neuron0x3599d60()*0.0679825);
}

double NNfunction_ns_chi03_uR::synapse0x35a7270() {
   return (neuron0x359a0a0()*0.00579624);
}

double NNfunction_ns_chi03_uR::synapse0x35a72b0() {
   return (neuron0x359a3e0()*-0.165512);
}

double NNfunction_ns_chi03_uR::synapse0x35a72f0() {
   return (neuron0x359a720()*-2.03306);
}

double NNfunction_ns_chi03_uR::synapse0x35a7330() {
   return (neuron0x359aa60()*-0.638514);
}

double NNfunction_ns_chi03_uR::synapse0x35a6dc0() {
   return (neuron0x359ada0()*-0.283173);
}

double NNfunction_ns_chi03_uR::synapse0x35a6e00() {
   return (neuron0x359b300()*0.0243304);
}

double NNfunction_ns_chi03_uR::synapse0x35a7480() {
   return (neuron0x359b640()*-0.137083);
}

double NNfunction_ns_chi03_uR::synapse0x35a74c0() {
   return (neuron0x359b980()*-0.0456215);
}

double NNfunction_ns_chi03_uR::synapse0x35a7500() {
   return (neuron0x359bcc0()*-0.0647839);
}

double NNfunction_ns_chi03_uR::synapse0x35a7540() {
   return (neuron0x359c000()*0.0370954);
}

double NNfunction_ns_chi03_uR::synapse0x35a7580() {
   return (neuron0x359c340()*-0.0249931);
}

double NNfunction_ns_chi03_uR::synapse0x35a75c0() {
   return (neuron0x359c680()*-0.0137169);
}

double NNfunction_ns_chi03_uR::synapse0x35a7940() {
   return (neuron0x3597a30()*0.0562903);
}

double NNfunction_ns_chi03_uR::synapse0x3597bc0() {
   return (neuron0x3597ce0()*-0.551622);
}

double NNfunction_ns_chi03_uR::synapse0x3597c00() {
   return (neuron0x3598020()*0.302319);
}

double NNfunction_ns_chi03_uR::synapse0x3597f00() {
   return (neuron0x3598360()*0.372903);
}

double NNfunction_ns_chi03_uR::synapse0x3597f40() {
   return (neuron0x35986a0()*0.333505);
}

double NNfunction_ns_chi03_uR::synapse0x3598240() {
   return (neuron0x35989e0()*-0.180079);
}

double NNfunction_ns_chi03_uR::synapse0x3598280() {
   return (neuron0x3598d20()*-0.110166);
}

double NNfunction_ns_chi03_uR::synapse0x3598580() {
   return (neuron0x3599060()*0.103998);
}

double NNfunction_ns_chi03_uR::synapse0x35985c0() {
   return (neuron0x35993a0()*0.586275);
}

double NNfunction_ns_chi03_uR::synapse0x35988c0() {
   return (neuron0x35996e0()*1.10952);
}

double NNfunction_ns_chi03_uR::synapse0x3598900() {
   return (neuron0x3599a20()*-0.0498315);
}

double NNfunction_ns_chi03_uR::synapse0x3598c00() {
   return (neuron0x3599d60()*0.531327);
}

double NNfunction_ns_chi03_uR::synapse0x3598c40() {
   return (neuron0x359a0a0()*-0.0952063);
}

double NNfunction_ns_chi03_uR::synapse0x3598f40() {
   return (neuron0x359a3e0()*0.169724);
}

double NNfunction_ns_chi03_uR::synapse0x3598f80() {
   return (neuron0x359a720()*-0.517375);
}

double NNfunction_ns_chi03_uR::synapse0x3599280() {
   return (neuron0x359aa60()*0.0608474);
}

double NNfunction_ns_chi03_uR::synapse0x35992c0() {
   return (neuron0x359ada0()*-0.344695);
}

double NNfunction_ns_chi03_uR::synapse0x35995c0() {
   return (neuron0x359b300()*-0.197616);
}

double NNfunction_ns_chi03_uR::synapse0x3599600() {
   return (neuron0x359b640()*-0.209578);
}

double NNfunction_ns_chi03_uR::synapse0x3599900() {
   return (neuron0x359b980()*-0.278025);
}

double NNfunction_ns_chi03_uR::synapse0x3599940() {
   return (neuron0x359bcc0()*0.209875);
}

double NNfunction_ns_chi03_uR::synapse0x3599c40() {
   return (neuron0x359c000()*0.0712644);
}

double NNfunction_ns_chi03_uR::synapse0x3599c80() {
   return (neuron0x359c340()*-0.0866745);
}

double NNfunction_ns_chi03_uR::synapse0x3599f80() {
   return (neuron0x359c680()*0.311272);
}

double NNfunction_ns_chi03_uR::synapse0x3599fc0() {
   return (neuron0x3597a30()*0.0015689);
}

double NNfunction_ns_chi03_uR::synapse0x359ac80() {
   return (neuron0x3597ce0()*-0.00271533);
}

double NNfunction_ns_chi03_uR::synapse0x359acc0() {
   return (neuron0x3598020()*0.0107829);
}

double NNfunction_ns_chi03_uR::synapse0x35a7790() {
   return (neuron0x3598360()*-2.00435);
}

double NNfunction_ns_chi03_uR::synapse0x35a77d0() {
   return (neuron0x35986a0()*-0.00183357);
}

double NNfunction_ns_chi03_uR::synapse0x359afc0() {
   return (neuron0x35989e0()*-0.00127392);
}

double NNfunction_ns_chi03_uR::synapse0x359b000() {
   return (neuron0x3598d20()*0.00683294);
}

double NNfunction_ns_chi03_uR::synapse0x359b520() {
   return (neuron0x3599060()*-0.00804024);
}

double NNfunction_ns_chi03_uR::synapse0x359b560() {
   return (neuron0x35993a0()*0.00261171);
}

double NNfunction_ns_chi03_uR::synapse0x359b860() {
   return (neuron0x35996e0()*-0.0106808);
}

double NNfunction_ns_chi03_uR::synapse0x359b8a0() {
   return (neuron0x3599a20()*0.000588659);
}

double NNfunction_ns_chi03_uR::synapse0x359bba0() {
   return (neuron0x3599d60()*-0.00974442);
}

double NNfunction_ns_chi03_uR::synapse0x359bbe0() {
   return (neuron0x359a0a0()*-0.0104278);
}

double NNfunction_ns_chi03_uR::synapse0x359bee0() {
   return (neuron0x359a3e0()*0.0110489);
}

double NNfunction_ns_chi03_uR::synapse0x359bf20() {
   return (neuron0x359a720()*0.194865);
}

double NNfunction_ns_chi03_uR::synapse0x359c220() {
   return (neuron0x359aa60()*-0.00384164);
}

double NNfunction_ns_chi03_uR::synapse0x359c260() {
   return (neuron0x359ada0()*0.0200048);
}

double NNfunction_ns_chi03_uR::synapse0x359c560() {
   return (neuron0x359b300()*-0.0169318);
}

double NNfunction_ns_chi03_uR::synapse0x359c5a0() {
   return (neuron0x359b640()*-0.0110678);
}

double NNfunction_ns_chi03_uR::synapse0x359c8a0() {
   return (neuron0x359b980()*-0.0108895);
}

double NNfunction_ns_chi03_uR::synapse0x359c8e0() {
   return (neuron0x359bcc0()*-0.00340357);
}

double NNfunction_ns_chi03_uR::synapse0x359a2c0() {
   return (neuron0x359c000()*0.00112729);
}

double NNfunction_ns_chi03_uR::synapse0x359a300() {
   return (neuron0x359c340()*0.00432665);
}

double NNfunction_ns_chi03_uR::synapse0x35a96b0() {
   return (neuron0x359c680()*-0.0111971);
}

double NNfunction_ns_chi03_uR::synapse0x35a9a30() {
   return (neuron0x3597a30()*-0.00647427);
}

double NNfunction_ns_chi03_uR::synapse0x35a9a70() {
   return (neuron0x3597ce0()*0.0162393);
}

double NNfunction_ns_chi03_uR::synapse0x35a9ab0() {
   return (neuron0x3598020()*0.00280605);
}

double NNfunction_ns_chi03_uR::synapse0x35a9af0() {
   return (neuron0x3598360()*2.01807);
}

double NNfunction_ns_chi03_uR::synapse0x35a9b30() {
   return (neuron0x35986a0()*-0.00286985);
}

double NNfunction_ns_chi03_uR::synapse0x35a9b70() {
   return (neuron0x35989e0()*0.00566512);
}

double NNfunction_ns_chi03_uR::synapse0x35a9bb0() {
   return (neuron0x3598d20()*-0.00571808);
}

double NNfunction_ns_chi03_uR::synapse0x35a9bf0() {
   return (neuron0x3599060()*0.00643896);
}

double NNfunction_ns_chi03_uR::synapse0x35a9c30() {
   return (neuron0x35993a0()*0.00770572);
}

double NNfunction_ns_chi03_uR::synapse0x35a9c70() {
   return (neuron0x35996e0()*0.0102462);
}

double NNfunction_ns_chi03_uR::synapse0x35a9cb0() {
   return (neuron0x3599a20()*-0.0104204);
}

double NNfunction_ns_chi03_uR::synapse0x35a9cf0() {
   return (neuron0x3599d60()*-0.0014098);
}

double NNfunction_ns_chi03_uR::synapse0x35a9d30() {
   return (neuron0x359a0a0()*0.00412891);
}

double NNfunction_ns_chi03_uR::synapse0x35a9d70() {
   return (neuron0x359a3e0()*0.00438309);
}

double NNfunction_ns_chi03_uR::synapse0x35a9db0() {
   return (neuron0x359a720()*0.16231);
}

double NNfunction_ns_chi03_uR::synapse0x35a9df0() {
   return (neuron0x359aa60()*-0.00212232);
}

double NNfunction_ns_chi03_uR::synapse0x35a9880() {
   return (neuron0x359ada0()*-0.00271841);
}

double NNfunction_ns_chi03_uR::synapse0x35a98c0() {
   return (neuron0x359b300()*0.012421);
}

double NNfunction_ns_chi03_uR::synapse0x35a9f40() {
   return (neuron0x359b640()*0.000619625);
}

double NNfunction_ns_chi03_uR::synapse0x35a9f80() {
   return (neuron0x359b980()*0.00405155);
}

double NNfunction_ns_chi03_uR::synapse0x35a9fc0() {
   return (neuron0x359bcc0()*0.00870401);
}

double NNfunction_ns_chi03_uR::synapse0x35aa000() {
   return (neuron0x359c000()*-0.000141998);
}

double NNfunction_ns_chi03_uR::synapse0x35aa040() {
   return (neuron0x359c340()*-0.00647239);
}

double NNfunction_ns_chi03_uR::synapse0x35aa080() {
   return (neuron0x359c680()*0.00812711);
}

double NNfunction_ns_chi03_uR::synapse0x35aa400() {
   return (neuron0x3597a30()*0.284544);
}

double NNfunction_ns_chi03_uR::synapse0x35aa440() {
   return (neuron0x3597ce0()*-0.108837);
}

double NNfunction_ns_chi03_uR::synapse0x35aa480() {
   return (neuron0x3598020()*0.729151);
}

double NNfunction_ns_chi03_uR::synapse0x35aa4c0() {
   return (neuron0x3598360()*0.437899);
}

double NNfunction_ns_chi03_uR::synapse0x35aa500() {
   return (neuron0x35986a0()*-0.518063);
}

double NNfunction_ns_chi03_uR::synapse0x35aa540() {
   return (neuron0x35989e0()*-0.0828031);
}

double NNfunction_ns_chi03_uR::synapse0x35aa580() {
   return (neuron0x3598d20()*-0.0224916);
}

double NNfunction_ns_chi03_uR::synapse0x35aa5c0() {
   return (neuron0x3599060()*-0.19261);
}

double NNfunction_ns_chi03_uR::synapse0x35aa600() {
   return (neuron0x35993a0()*-0.471961);
}

double NNfunction_ns_chi03_uR::synapse0x35aa640() {
   return (neuron0x35996e0()*-0.259968);
}

double NNfunction_ns_chi03_uR::synapse0x35aa680() {
   return (neuron0x3599a20()*1.99984);
}

double NNfunction_ns_chi03_uR::synapse0x35aa6c0() {
   return (neuron0x3599d60()*-0.233016);
}

double NNfunction_ns_chi03_uR::synapse0x35aa700() {
   return (neuron0x359a0a0()*-0.417634);
}

double NNfunction_ns_chi03_uR::synapse0x35aa740() {
   return (neuron0x359a3e0()*0.212075);
}

double NNfunction_ns_chi03_uR::synapse0x35aa780() {
   return (neuron0x359a720()*-0.48772);
}

double NNfunction_ns_chi03_uR::synapse0x35aa7c0() {
   return (neuron0x359aa60()*-0.0566951);
}

double NNfunction_ns_chi03_uR::synapse0x35aa250() {
   return (neuron0x359ada0()*-0.375985);
}

double NNfunction_ns_chi03_uR::synapse0x35aa290() {
   return (neuron0x359b300()*0.677677);
}

double NNfunction_ns_chi03_uR::synapse0x35aa910() {
   return (neuron0x359b640()*-0.0333351);
}

double NNfunction_ns_chi03_uR::synapse0x35aa950() {
   return (neuron0x359b980()*-0.420355);
}

double NNfunction_ns_chi03_uR::synapse0x35aa990() {
   return (neuron0x359bcc0()*0.586372);
}

double NNfunction_ns_chi03_uR::synapse0x35aa9d0() {
   return (neuron0x359c000()*-0.452591);
}

double NNfunction_ns_chi03_uR::synapse0x35aaa10() {
   return (neuron0x359c340()*-0.377376);
}

double NNfunction_ns_chi03_uR::synapse0x35aaa50() {
   return (neuron0x359c680()*0.562439);
}

double NNfunction_ns_chi03_uR::synapse0x35aadd0() {
   return (neuron0x3597a30()*-0.18339);
}

double NNfunction_ns_chi03_uR::synapse0x35aae10() {
   return (neuron0x3597ce0()*0.730087);
}

double NNfunction_ns_chi03_uR::synapse0x35aae50() {
   return (neuron0x3598020()*-1.36735);
}

double NNfunction_ns_chi03_uR::synapse0x35aae90() {
   return (neuron0x3598360()*-0.145878);
}

double NNfunction_ns_chi03_uR::synapse0x35aaed0() {
   return (neuron0x35986a0()*-0.0339581);
}

double NNfunction_ns_chi03_uR::synapse0x35aaf10() {
   return (neuron0x35989e0()*0.0214191);
}

double NNfunction_ns_chi03_uR::synapse0x35aaf50() {
   return (neuron0x3598d20()*0.0831015);
}

double NNfunction_ns_chi03_uR::synapse0x35aaf90() {
   return (neuron0x3599060()*-0.0545228);
}

double NNfunction_ns_chi03_uR::synapse0x35aafd0() {
   return (neuron0x35993a0()*-0.0987809);
}

double NNfunction_ns_chi03_uR::synapse0x35ab010() {
   return (neuron0x35996e0()*0.0713165);
}

double NNfunction_ns_chi03_uR::synapse0x35ab050() {
   return (neuron0x3599a20()*0.0187028);
}

double NNfunction_ns_chi03_uR::synapse0x35ab090() {
   return (neuron0x3599d60()*0.00972965);
}

double NNfunction_ns_chi03_uR::synapse0x35ab0d0() {
   return (neuron0x359a0a0()*-0.0961131);
}

double NNfunction_ns_chi03_uR::synapse0x35ab110() {
   return (neuron0x359a3e0()*0.111905);
}

double NNfunction_ns_chi03_uR::synapse0x35ab150() {
   return (neuron0x359a720()*-0.433361);
}

double NNfunction_ns_chi03_uR::synapse0x35ab190() {
   return (neuron0x359aa60()*0.0423794);
}

double NNfunction_ns_chi03_uR::synapse0x35aac20() {
   return (neuron0x359ada0()*-0.060941);
}

double NNfunction_ns_chi03_uR::synapse0x35aac60() {
   return (neuron0x359b300()*0.197211);
}

double NNfunction_ns_chi03_uR::synapse0x35ab2e0() {
   return (neuron0x359b640()*0.0703392);
}

double NNfunction_ns_chi03_uR::synapse0x35ab320() {
   return (neuron0x359b980()*0.128198);
}

double NNfunction_ns_chi03_uR::synapse0x35ab360() {
   return (neuron0x359bcc0()*0.0681437);
}

double NNfunction_ns_chi03_uR::synapse0x35ab3a0() {
   return (neuron0x359c000()*-0.00657885);
}

double NNfunction_ns_chi03_uR::synapse0x35ab3e0() {
   return (neuron0x359c340()*0.0265485);
}

double NNfunction_ns_chi03_uR::synapse0x35ab420() {
   return (neuron0x359c680()*1.15566);
}

double NNfunction_ns_chi03_uR::synapse0x35ab7a0() {
   return (neuron0x3597a30()*0.0336939);
}

double NNfunction_ns_chi03_uR::synapse0x35ab7e0() {
   return (neuron0x3597ce0()*-13.0138);
}

double NNfunction_ns_chi03_uR::synapse0x35ab820() {
   return (neuron0x3598020()*-12.0672);
}

double NNfunction_ns_chi03_uR::synapse0x35ab860() {
   return (neuron0x3598360()*-0.0196232);
}

double NNfunction_ns_chi03_uR::synapse0x35ab8a0() {
   return (neuron0x35986a0()*-0.017687);
}

double NNfunction_ns_chi03_uR::synapse0x35ab8e0() {
   return (neuron0x35989e0()*-0.0610681);
}

double NNfunction_ns_chi03_uR::synapse0x35ab920() {
   return (neuron0x3598d20()*-0.0320699);
}

double NNfunction_ns_chi03_uR::synapse0x35ab960() {
   return (neuron0x3599060()*-0.0768341);
}

double NNfunction_ns_chi03_uR::synapse0x35ab9a0() {
   return (neuron0x35993a0()*-0.0102011);
}

double NNfunction_ns_chi03_uR::synapse0x35ab9e0() {
   return (neuron0x35996e0()*-0.107669);
}

double NNfunction_ns_chi03_uR::synapse0x35aba20() {
   return (neuron0x3599a20()*-0.03727);
}

double NNfunction_ns_chi03_uR::synapse0x35aba60() {
   return (neuron0x3599d60()*-0.0347061);
}

double NNfunction_ns_chi03_uR::synapse0x35abaa0() {
   return (neuron0x359a0a0()*0.0232265);
}

double NNfunction_ns_chi03_uR::synapse0x35abae0() {
   return (neuron0x359a3e0()*-0.00433045);
}

double NNfunction_ns_chi03_uR::synapse0x35abb20() {
   return (neuron0x359a720()*-0.0710252);
}

double NNfunction_ns_chi03_uR::synapse0x35abb60() {
   return (neuron0x359aa60()*-0.0263835);
}

double NNfunction_ns_chi03_uR::synapse0x35ab5f0() {
   return (neuron0x359ada0()*0.0382436);
}

double NNfunction_ns_chi03_uR::synapse0x35ab630() {
   return (neuron0x359b300()*0.0321429);
}

double NNfunction_ns_chi03_uR::synapse0x35abcb0() {
   return (neuron0x359b640()*-0.0219258);
}

double NNfunction_ns_chi03_uR::synapse0x35abcf0() {
   return (neuron0x359b980()*-0.0230134);
}

double NNfunction_ns_chi03_uR::synapse0x35abd30() {
   return (neuron0x359bcc0()*-0.0742334);
}

double NNfunction_ns_chi03_uR::synapse0x35abd70() {
   return (neuron0x359c000()*0.0491214);
}

double NNfunction_ns_chi03_uR::synapse0x35abdb0() {
   return (neuron0x359c340()*0.00148875);
}

double NNfunction_ns_chi03_uR::synapse0x35abdf0() {
   return (neuron0x359c680()*-0.154343);
}

double NNfunction_ns_chi03_uR::synapse0x35ac170() {
   return (neuron0x3597a30()*-0.454143);
}

double NNfunction_ns_chi03_uR::synapse0x35ac1b0() {
   return (neuron0x3597ce0()*-0.149232);
}

double NNfunction_ns_chi03_uR::synapse0x35ac1f0() {
   return (neuron0x3598020()*0.549769);
}

double NNfunction_ns_chi03_uR::synapse0x35ac230() {
   return (neuron0x3598360()*-0.244008);
}

double NNfunction_ns_chi03_uR::synapse0x35ac270() {
   return (neuron0x35986a0()*0.107195);
}

double NNfunction_ns_chi03_uR::synapse0x35ac2b0() {
   return (neuron0x35989e0()*-0.502102);
}

double NNfunction_ns_chi03_uR::synapse0x35ac2f0() {
   return (neuron0x3598d20()*-0.0699636);
}

double NNfunction_ns_chi03_uR::synapse0x35ac330() {
   return (neuron0x3599060()*0.0371548);
}

double NNfunction_ns_chi03_uR::synapse0x35ac370() {
   return (neuron0x35993a0()*-0.0597957);
}

double NNfunction_ns_chi03_uR::synapse0x35a4530() {
   return (neuron0x35996e0()*-0.219457);
}

double NNfunction_ns_chi03_uR::synapse0x35a4570() {
   return (neuron0x3599a20()*-0.00857664);
}

double NNfunction_ns_chi03_uR::synapse0x35a45b0() {
   return (neuron0x3599d60()*-1.14106);
}

double NNfunction_ns_chi03_uR::synapse0x35a45f0() {
   return (neuron0x359a0a0()*0.31989);
}

double NNfunction_ns_chi03_uR::synapse0x35a4630() {
   return (neuron0x359a3e0()*0.0203226);
}

double NNfunction_ns_chi03_uR::synapse0x35a4670() {
   return (neuron0x359a720()*0.0126204);
}

double NNfunction_ns_chi03_uR::synapse0x35a46b0() {
   return (neuron0x359aa60()*1.0362);
}

double NNfunction_ns_chi03_uR::synapse0x35abfc0() {
   return (neuron0x359ada0()*0.869692);
}

double NNfunction_ns_chi03_uR::synapse0x35ac000() {
   return (neuron0x359b300()*0.352736);
}

double NNfunction_ns_chi03_uR::synapse0x35a4800() {
   return (neuron0x359b640()*-0.208181);
}

double NNfunction_ns_chi03_uR::synapse0x35a4840() {
   return (neuron0x359b980()*-0.125651);
}

double NNfunction_ns_chi03_uR::synapse0x35a4880() {
   return (neuron0x359bcc0()*0.612395);
}

double NNfunction_ns_chi03_uR::synapse0x35a48c0() {
   return (neuron0x359c000()*-0.435536);
}

double NNfunction_ns_chi03_uR::synapse0x35a4900() {
   return (neuron0x359c340()*-0.126932);
}

double NNfunction_ns_chi03_uR::synapse0x35a4940() {
   return (neuron0x359c680()*0.761193);
}

double NNfunction_ns_chi03_uR::synapse0x35a4cc0() {
   return (neuron0x3597a30()*0.02263);
}

double NNfunction_ns_chi03_uR::synapse0x35a4d00() {
   return (neuron0x3597ce0()*0.170044);
}

double NNfunction_ns_chi03_uR::synapse0x35a4d40() {
   return (neuron0x3598020()*-0.152752);
}

double NNfunction_ns_chi03_uR::synapse0x35a4d80() {
   return (neuron0x3598360()*0.156179);
}

double NNfunction_ns_chi03_uR::synapse0x35a4dc0() {
   return (neuron0x35986a0()*0.059593);
}

double NNfunction_ns_chi03_uR::synapse0x35a4e00() {
   return (neuron0x35989e0()*0.0387044);
}

double NNfunction_ns_chi03_uR::synapse0x35a4e40() {
   return (neuron0x3598d20()*0.0229091);
}

double NNfunction_ns_chi03_uR::synapse0x35a4e80() {
   return (neuron0x3599060()*0.00603155);
}

double NNfunction_ns_chi03_uR::synapse0x35a4ec0() {
   return (neuron0x35993a0()*0.00269336);
}

double NNfunction_ns_chi03_uR::synapse0x35a4f00() {
   return (neuron0x35996e0()*-0.0563009);
}

double NNfunction_ns_chi03_uR::synapse0x35a4f40() {
   return (neuron0x3599a20()*-0.0305648);
}

double NNfunction_ns_chi03_uR::synapse0x35a4f80() {
   return (neuron0x3599d60()*-0.237387);
}

double NNfunction_ns_chi03_uR::synapse0x35a4fc0() {
   return (neuron0x359a0a0()*-0.196553);
}

double NNfunction_ns_chi03_uR::synapse0x35a5000() {
   return (neuron0x359a3e0()*0.121448);
}

double NNfunction_ns_chi03_uR::synapse0x35a5040() {
   return (neuron0x359a720()*0.300454);
}

double NNfunction_ns_chi03_uR::synapse0x35a5080() {
   return (neuron0x359aa60()*0.0537625);
}

double NNfunction_ns_chi03_uR::synapse0x35a4b10() {
   return (neuron0x359ada0()*0.074049);
}

double NNfunction_ns_chi03_uR::synapse0x35a4b50() {
   return (neuron0x359b300()*-0.0561734);
}

double NNfunction_ns_chi03_uR::synapse0x35a51d0() {
   return (neuron0x359b640()*-0.190955);
}

double NNfunction_ns_chi03_uR::synapse0x35a5210() {
   return (neuron0x359b980()*-0.0730289);
}

double NNfunction_ns_chi03_uR::synapse0x35a5250() {
   return (neuron0x359bcc0()*-0.0462908);
}

double NNfunction_ns_chi03_uR::synapse0x35a5290() {
   return (neuron0x359c000()*-0.0224754);
}

double NNfunction_ns_chi03_uR::synapse0x35a52d0() {
   return (neuron0x359c340()*-0.0119459);
}

double NNfunction_ns_chi03_uR::synapse0x35a5310() {
   return (neuron0x359c680()*0.0133692);
}

double NNfunction_ns_chi03_uR::synapse0x35a54e0() {
   return (neuron0x3597a30()*0.0112921);
}

double NNfunction_ns_chi03_uR::synapse0x35ae570() {
   return (neuron0x3597ce0()*-0.0302423);
}

double NNfunction_ns_chi03_uR::synapse0x35ae5b0() {
   return (neuron0x3598020()*-0.0265026);
}

double NNfunction_ns_chi03_uR::synapse0x35ae5f0() {
   return (neuron0x3598360()*-0.975549);
}

double NNfunction_ns_chi03_uR::synapse0x35ae630() {
   return (neuron0x35986a0()*0.00340833);
}

double NNfunction_ns_chi03_uR::synapse0x35ae670() {
   return (neuron0x35989e0()*-0.00817567);
}

double NNfunction_ns_chi03_uR::synapse0x35ae6b0() {
   return (neuron0x3598d20()*0.0191262);
}

double NNfunction_ns_chi03_uR::synapse0x35ae6f0() {
   return (neuron0x3599060()*-0.00140708);
}

double NNfunction_ns_chi03_uR::synapse0x35ae730() {
   return (neuron0x35993a0()*-0.0283198);
}

double NNfunction_ns_chi03_uR::synapse0x35ae770() {
   return (neuron0x35996e0()*-0.0155429);
}

double NNfunction_ns_chi03_uR::synapse0x35ae7b0() {
   return (neuron0x3599a20()*0.0151306);
}

double NNfunction_ns_chi03_uR::synapse0x35ae7f0() {
   return (neuron0x3599d60()*0.0220029);
}

double NNfunction_ns_chi03_uR::synapse0x35ae830() {
   return (neuron0x359a0a0()*0.000547541);
}

double NNfunction_ns_chi03_uR::synapse0x35ae870() {
   return (neuron0x359a3e0()*-0.00849185);
}

double NNfunction_ns_chi03_uR::synapse0x35ae8b0() {
   return (neuron0x359a720()*-0.493032);
}

double NNfunction_ns_chi03_uR::synapse0x35ae8f0() {
   return (neuron0x359aa60()*0.0205125);
}

double NNfunction_ns_chi03_uR::synapse0x35ae3c0() {
   return (neuron0x359ada0()*-0.0158776);
}

double NNfunction_ns_chi03_uR::synapse0x35ae400() {
   return (neuron0x359b300()*-0.010081);
}

double NNfunction_ns_chi03_uR::synapse0x35aea40() {
   return (neuron0x359b640()*0.0168315);
}

double NNfunction_ns_chi03_uR::synapse0x35aea80() {
   return (neuron0x359b980()*0.00932598);
}

double NNfunction_ns_chi03_uR::synapse0x35aeac0() {
   return (neuron0x359bcc0()*-0.0203974);
}

double NNfunction_ns_chi03_uR::synapse0x35aeb00() {
   return (neuron0x359c000()*0.00152533);
}

double NNfunction_ns_chi03_uR::synapse0x35aeb40() {
   return (neuron0x359c340()*0.00293706);
}

double NNfunction_ns_chi03_uR::synapse0x35aeb80() {
   return (neuron0x359c680()*0.00843927);
}

double NNfunction_ns_chi03_uR::synapse0x35aef00() {
   return (neuron0x3597a30()*0.00374727);
}

double NNfunction_ns_chi03_uR::synapse0x35aef40() {
   return (neuron0x3597ce0()*-0.0219041);
}

double NNfunction_ns_chi03_uR::synapse0x35aef80() {
   return (neuron0x3598020()*-0.0195808);
}

double NNfunction_ns_chi03_uR::synapse0x35aefc0() {
   return (neuron0x3598360()*1.02611);
}

double NNfunction_ns_chi03_uR::synapse0x35af000() {
   return (neuron0x35986a0()*0.017568);
}

double NNfunction_ns_chi03_uR::synapse0x35af040() {
   return (neuron0x35989e0()*-0.0108927);
}

double NNfunction_ns_chi03_uR::synapse0x35af080() {
   return (neuron0x3598d20()*-0.000380422);
}

double NNfunction_ns_chi03_uR::synapse0x35af0c0() {
   return (neuron0x3599060()*0.0170515);
}

double NNfunction_ns_chi03_uR::synapse0x35af100() {
   return (neuron0x35993a0()*-0.0335091);
}

double NNfunction_ns_chi03_uR::synapse0x35af140() {
   return (neuron0x35996e0()*-0.00843634);
}

double NNfunction_ns_chi03_uR::synapse0x35af180() {
   return (neuron0x3599a20()*0.00424055);
}

double NNfunction_ns_chi03_uR::synapse0x35af1c0() {
   return (neuron0x3599d60()*0.0426288);
}

double NNfunction_ns_chi03_uR::synapse0x35af200() {
   return (neuron0x359a0a0()*0.0255865);
}

double NNfunction_ns_chi03_uR::synapse0x35af240() {
   return (neuron0x359a3e0()*-0.0224145);
}

double NNfunction_ns_chi03_uR::synapse0x35af280() {
   return (neuron0x359a720()*-0.548322);
}

double NNfunction_ns_chi03_uR::synapse0x35af2c0() {
   return (neuron0x359aa60()*0.0101028);
}

double NNfunction_ns_chi03_uR::synapse0x35aed50() {
   return (neuron0x359ada0()*-0.0267677);
}

double NNfunction_ns_chi03_uR::synapse0x35aed90() {
   return (neuron0x359b300()*0.00691595);
}

double NNfunction_ns_chi03_uR::synapse0x35af410() {
   return (neuron0x359b640()*0.0400091);
}

double NNfunction_ns_chi03_uR::synapse0x35af450() {
   return (neuron0x359b980()*0.0252569);
}

double NNfunction_ns_chi03_uR::synapse0x35af490() {
   return (neuron0x359bcc0()*-0.0165985);
}

double NNfunction_ns_chi03_uR::synapse0x35af4d0() {
   return (neuron0x359c000()*-0.00693658);
}

double NNfunction_ns_chi03_uR::synapse0x35af510() {
   return (neuron0x359c340()*0.00357053);
}

double NNfunction_ns_chi03_uR::synapse0x35af550() {
   return (neuron0x359c680()*-0.0204402);
}

double NNfunction_ns_chi03_uR::synapse0x35af8d0() {
   return (neuron0x3597a30()*-0.0482016);
}

double NNfunction_ns_chi03_uR::synapse0x35af910() {
   return (neuron0x3597ce0()*14.3435);
}

double NNfunction_ns_chi03_uR::synapse0x35af950() {
   return (neuron0x3598020()*4.30429);
}

double NNfunction_ns_chi03_uR::synapse0x35af990() {
   return (neuron0x3598360()*-0.00702958);
}

double NNfunction_ns_chi03_uR::synapse0x35af9d0() {
   return (neuron0x35986a0()*-0.00189807);
}

double NNfunction_ns_chi03_uR::synapse0x35afa10() {
   return (neuron0x35989e0()*0.0207102);
}

double NNfunction_ns_chi03_uR::synapse0x35afa50() {
   return (neuron0x3598d20()*0.00659508);
}

double NNfunction_ns_chi03_uR::synapse0x35afa90() {
   return (neuron0x3599060()*0.0534553);
}

double NNfunction_ns_chi03_uR::synapse0x35afad0() {
   return (neuron0x35993a0()*0.0369226);
}

double NNfunction_ns_chi03_uR::synapse0x35afb10() {
   return (neuron0x35996e0()*-0.0102554);
}

double NNfunction_ns_chi03_uR::synapse0x35afb50() {
   return (neuron0x3599a20()*0.0259712);
}

double NNfunction_ns_chi03_uR::synapse0x35afb90() {
   return (neuron0x3599d60()*0.0244639);
}

double NNfunction_ns_chi03_uR::synapse0x35afbd0() {
   return (neuron0x359a0a0()*0.00838383);
}

double NNfunction_ns_chi03_uR::synapse0x35afc10() {
   return (neuron0x359a3e0()*-0.024377);
}

double NNfunction_ns_chi03_uR::synapse0x35afc50() {
   return (neuron0x359a720()*0.239804);
}

double NNfunction_ns_chi03_uR::synapse0x35afc90() {
   return (neuron0x359aa60()*0.00770377);
}

double NNfunction_ns_chi03_uR::synapse0x35af720() {
   return (neuron0x359ada0()*0.00815542);
}

double NNfunction_ns_chi03_uR::synapse0x35af760() {
   return (neuron0x359b300()*0.0381343);
}

double NNfunction_ns_chi03_uR::synapse0x35afde0() {
   return (neuron0x359b640()*0.0438793);
}

double NNfunction_ns_chi03_uR::synapse0x35afe20() {
   return (neuron0x359b980()*0.0454082);
}

double NNfunction_ns_chi03_uR::synapse0x35afe60() {
   return (neuron0x359bcc0()*-0.00629393);
}

double NNfunction_ns_chi03_uR::synapse0x35afea0() {
   return (neuron0x359c000()*-0.0211968);
}

double NNfunction_ns_chi03_uR::synapse0x35afee0() {
   return (neuron0x359c340()*0.040684);
}

double NNfunction_ns_chi03_uR::synapse0x35aff20() {
   return (neuron0x359c680()*6.59298);
}

double NNfunction_ns_chi03_uR::synapse0x35b02a0() {
   return (neuron0x3597a30()*0.0389835);
}

double NNfunction_ns_chi03_uR::synapse0x35b02e0() {
   return (neuron0x3597ce0()*12.4655);
}

double NNfunction_ns_chi03_uR::synapse0x35b0320() {
   return (neuron0x3598020()*-0.63345);
}

double NNfunction_ns_chi03_uR::synapse0x35b0360() {
   return (neuron0x3598360()*0.0211192);
}

double NNfunction_ns_chi03_uR::synapse0x35b03a0() {
   return (neuron0x35986a0()*-0.0110697);
}

double NNfunction_ns_chi03_uR::synapse0x35b03e0() {
   return (neuron0x35989e0()*-0.01882);
}

double NNfunction_ns_chi03_uR::synapse0x35b0420() {
   return (neuron0x3598d20()*-0.0253871);
}

double NNfunction_ns_chi03_uR::synapse0x35b0460() {
   return (neuron0x3599060()*0.0138859);
}

double NNfunction_ns_chi03_uR::synapse0x35b04a0() {
   return (neuron0x35993a0()*0.0344332);
}

double NNfunction_ns_chi03_uR::synapse0x35b04e0() {
   return (neuron0x35996e0()*-0.0129853);
}

double NNfunction_ns_chi03_uR::synapse0x35b0520() {
   return (neuron0x3599a20()*0.00711805);
}

double NNfunction_ns_chi03_uR::synapse0x35b0560() {
   return (neuron0x3599d60()*-0.00359349);
}

double NNfunction_ns_chi03_uR::synapse0x35b05a0() {
   return (neuron0x359a0a0()*0.00669872);
}

double NNfunction_ns_chi03_uR::synapse0x35b05e0() {
   return (neuron0x359a3e0()*0.0220774);
}

double NNfunction_ns_chi03_uR::synapse0x35b0620() {
   return (neuron0x359a720()*0.0390472);
}

double NNfunction_ns_chi03_uR::synapse0x35b0660() {
   return (neuron0x359aa60()*0.00508898);
}

double NNfunction_ns_chi03_uR::synapse0x35b00f0() {
   return (neuron0x359ada0()*-0.0190327);
}

double NNfunction_ns_chi03_uR::synapse0x35b0130() {
   return (neuron0x359b300()*-0.0257015);
}

double NNfunction_ns_chi03_uR::synapse0x35b07b0() {
   return (neuron0x359b640()*0.0185548);
}

double NNfunction_ns_chi03_uR::synapse0x35b07f0() {
   return (neuron0x359b980()*0.0578491);
}

double NNfunction_ns_chi03_uR::synapse0x35b0830() {
   return (neuron0x359bcc0()*-0.0361563);
}

double NNfunction_ns_chi03_uR::synapse0x35b0870() {
   return (neuron0x359c000()*-0.0265249);
}

double NNfunction_ns_chi03_uR::synapse0x35b08b0() {
   return (neuron0x359c340()*0.0118032);
}

double NNfunction_ns_chi03_uR::synapse0x35b08f0() {
   return (neuron0x359c680()*4.77497);
}

double NNfunction_ns_chi03_uR::synapse0x35b0c70() {
   return (neuron0x3597a30()*0.0827288);
}

double NNfunction_ns_chi03_uR::synapse0x35b0cb0() {
   return (neuron0x3597ce0()*4.97623);
}

double NNfunction_ns_chi03_uR::synapse0x35b0cf0() {
   return (neuron0x3598020()*-0.0402299);
}

double NNfunction_ns_chi03_uR::synapse0x35b0d30() {
   return (neuron0x3598360()*0.0263075);
}

double NNfunction_ns_chi03_uR::synapse0x35b0d70() {
   return (neuron0x35986a0()*-0.00507694);
}

double NNfunction_ns_chi03_uR::synapse0x35b0db0() {
   return (neuron0x35989e0()*-0.0104027);
}

double NNfunction_ns_chi03_uR::synapse0x35b0df0() {
   return (neuron0x3598d20()*0.0139792);
}

double NNfunction_ns_chi03_uR::synapse0x35b0e30() {
   return (neuron0x3599060()*0.00596375);
}

double NNfunction_ns_chi03_uR::synapse0x35b0e70() {
   return (neuron0x35993a0()*-0.00914216);
}

double NNfunction_ns_chi03_uR::synapse0x35b0eb0() {
   return (neuron0x35996e0()*-0.0430248);
}

double NNfunction_ns_chi03_uR::synapse0x35b0ef0() {
   return (neuron0x3599a20()*-0.0114115);
}

double NNfunction_ns_chi03_uR::synapse0x35b0f30() {
   return (neuron0x3599d60()*0.00169478);
}

double NNfunction_ns_chi03_uR::synapse0x35b0f70() {
   return (neuron0x359a0a0()*-0.00205079);
}

double NNfunction_ns_chi03_uR::synapse0x35b0fb0() {
   return (neuron0x359a3e0()*-0.0391837);
}

double NNfunction_ns_chi03_uR::synapse0x35b0ff0() {
   return (neuron0x359a720()*0.0731666);
}

double NNfunction_ns_chi03_uR::synapse0x35b1030() {
   return (neuron0x359aa60()*-0.00236651);
}

double NNfunction_ns_chi03_uR::synapse0x35b0ac0() {
   return (neuron0x359ada0()*0.00736864);
}

double NNfunction_ns_chi03_uR::synapse0x35b0b00() {
   return (neuron0x359b300()*-0.0243204);
}

double NNfunction_ns_chi03_uR::synapse0x35b1180() {
   return (neuron0x359b640()*0.0319656);
}

double NNfunction_ns_chi03_uR::synapse0x35b11c0() {
   return (neuron0x359b980()*-0.00301205);
}

double NNfunction_ns_chi03_uR::synapse0x35b1200() {
   return (neuron0x359bcc0()*-0.0052322);
}

double NNfunction_ns_chi03_uR::synapse0x35b1240() {
   return (neuron0x359c000()*-0.0331311);
}

double NNfunction_ns_chi03_uR::synapse0x35b1280() {
   return (neuron0x359c340()*-0.00435392);
}

double NNfunction_ns_chi03_uR::synapse0x35b12c0() {
   return (neuron0x359c680()*-1.88909);
}

double NNfunction_ns_chi03_uR::synapse0x35b1640() {
   return (neuron0x3597a30()*0.00903015);
}

double NNfunction_ns_chi03_uR::synapse0x35b1680() {
   return (neuron0x3597ce0()*-11.1468);
}

double NNfunction_ns_chi03_uR::synapse0x35b16c0() {
   return (neuron0x3598020()*0.318759);
}

double NNfunction_ns_chi03_uR::synapse0x35b1700() {
   return (neuron0x3598360()*0.0311016);
}

double NNfunction_ns_chi03_uR::synapse0x35b1740() {
   return (neuron0x35986a0()*0.0213355);
}

double NNfunction_ns_chi03_uR::synapse0x35b1780() {
   return (neuron0x35989e0()*0.00451798);
}

double NNfunction_ns_chi03_uR::synapse0x35b17c0() {
   return (neuron0x3598d20()*-0.00199231);
}

double NNfunction_ns_chi03_uR::synapse0x35b1800() {
   return (neuron0x3599060()*-0.0217115);
}

double NNfunction_ns_chi03_uR::synapse0x35b1840() {
   return (neuron0x35993a0()*-0.0308841);
}

double NNfunction_ns_chi03_uR::synapse0x35b1880() {
   return (neuron0x35996e0()*0.00860195);
}

double NNfunction_ns_chi03_uR::synapse0x35b18c0() {
   return (neuron0x3599a20()*0.0159401);
}

double NNfunction_ns_chi03_uR::synapse0x35b1900() {
   return (neuron0x3599d60()*-0.0011291);
}

double NNfunction_ns_chi03_uR::synapse0x35b1940() {
   return (neuron0x359a0a0()*-0.0113715);
}

double NNfunction_ns_chi03_uR::synapse0x35b1980() {
   return (neuron0x359a3e0()*-0.0263553);
}

double NNfunction_ns_chi03_uR::synapse0x35b19c0() {
   return (neuron0x359a720()*-0.0589177);
}

double NNfunction_ns_chi03_uR::synapse0x35b1a00() {
   return (neuron0x359aa60()*-0.0178986);
}

double NNfunction_ns_chi03_uR::synapse0x35b1490() {
   return (neuron0x359ada0()*0.0197487);
}

double NNfunction_ns_chi03_uR::synapse0x35b14d0() {
   return (neuron0x359b300()*-0.00634144);
}

double NNfunction_ns_chi03_uR::synapse0x35b1b50() {
   return (neuron0x359b640()*0.00458493);
}

double NNfunction_ns_chi03_uR::synapse0x35b1b90() {
   return (neuron0x359b980()*0.00542347);
}

double NNfunction_ns_chi03_uR::synapse0x35b1bd0() {
   return (neuron0x359bcc0()*-0.00151573);
}

double NNfunction_ns_chi03_uR::synapse0x35b1c10() {
   return (neuron0x359c000()*0.0293988);
}

double NNfunction_ns_chi03_uR::synapse0x35b1c50() {
   return (neuron0x359c340()*-0.0038189);
}

double NNfunction_ns_chi03_uR::synapse0x35b1c90() {
   return (neuron0x359c680()*4.45833);
}

double NNfunction_ns_chi03_uR::synapse0x35b2010() {
   return (neuron0x3597a30()*-0.0332673);
}

double NNfunction_ns_chi03_uR::synapse0x35b2050() {
   return (neuron0x3597ce0()*0.654486);
}

double NNfunction_ns_chi03_uR::synapse0x35b2090() {
   return (neuron0x3598020()*0.193397);
}

double NNfunction_ns_chi03_uR::synapse0x35b20d0() {
   return (neuron0x3598360()*-0.053963);
}

double NNfunction_ns_chi03_uR::synapse0x35b2110() {
   return (neuron0x35986a0()*0.290249);
}

double NNfunction_ns_chi03_uR::synapse0x35b2150() {
   return (neuron0x35989e0()*0.413468);
}

double NNfunction_ns_chi03_uR::synapse0x35b2190() {
   return (neuron0x3598d20()*-0.166038);
}

double NNfunction_ns_chi03_uR::synapse0x35b21d0() {
   return (neuron0x3599060()*0.312193);
}

double NNfunction_ns_chi03_uR::synapse0x35b2210() {
   return (neuron0x35993a0()*0.0352119);
}

double NNfunction_ns_chi03_uR::synapse0x35b2250() {
   return (neuron0x35996e0()*0.544032);
}

double NNfunction_ns_chi03_uR::synapse0x35b2290() {
   return (neuron0x3599a20()*-0.389949);
}

double NNfunction_ns_chi03_uR::synapse0x35b22d0() {
   return (neuron0x3599d60()*0.272072);
}

double NNfunction_ns_chi03_uR::synapse0x35b2310() {
   return (neuron0x359a0a0()*0.166803);
}

double NNfunction_ns_chi03_uR::synapse0x35b2350() {
   return (neuron0x359a3e0()*-0.654487);
}

double NNfunction_ns_chi03_uR::synapse0x35b2390() {
   return (neuron0x359a720()*-0.216209);
}

double NNfunction_ns_chi03_uR::synapse0x35b23d0() {
   return (neuron0x359aa60()*-0.0515826);
}

double NNfunction_ns_chi03_uR::synapse0x35b1e60() {
   return (neuron0x359ada0()*0.199396);
}

double NNfunction_ns_chi03_uR::synapse0x35b1ea0() {
   return (neuron0x359b300()*2.09647);
}

double NNfunction_ns_chi03_uR::synapse0x35b2520() {
   return (neuron0x359b640()*-0.297331);
}

double NNfunction_ns_chi03_uR::synapse0x35b2560() {
   return (neuron0x359b980()*0.161955);
}

double NNfunction_ns_chi03_uR::synapse0x35b25a0() {
   return (neuron0x359bcc0()*-0.131943);
}

double NNfunction_ns_chi03_uR::synapse0x35b25e0() {
   return (neuron0x359c000()*-0.517391);
}

double NNfunction_ns_chi03_uR::synapse0x35b2620() {
   return (neuron0x359c340()*0.386396);
}

double NNfunction_ns_chi03_uR::synapse0x35b2660() {
   return (neuron0x359c680()*0.57989);
}

double NNfunction_ns_chi03_uR::synapse0x35b29e0() {
   return (neuron0x3597a30()*-0.00636776);
}

double NNfunction_ns_chi03_uR::synapse0x35b2a20() {
   return (neuron0x3597ce0()*-0.190758);
}

double NNfunction_ns_chi03_uR::synapse0x35b2a60() {
   return (neuron0x3598020()*0.322472);
}

double NNfunction_ns_chi03_uR::synapse0x35b2aa0() {
   return (neuron0x3598360()*0.0104075);
}

double NNfunction_ns_chi03_uR::synapse0x35b2ae0() {
   return (neuron0x35986a0()*-0.00338376);
}

double NNfunction_ns_chi03_uR::synapse0x35b2b20() {
   return (neuron0x35989e0()*0.00221915);
}

double NNfunction_ns_chi03_uR::synapse0x35b2b60() {
   return (neuron0x3598d20()*-0.00860854);
}

double NNfunction_ns_chi03_uR::synapse0x35b2ba0() {
   return (neuron0x3599060()*0.0164985);
}

double NNfunction_ns_chi03_uR::synapse0x35b2be0() {
   return (neuron0x35993a0()*0.00762298);
}

double NNfunction_ns_chi03_uR::synapse0x35b2c20() {
   return (neuron0x35996e0()*0.0158041);
}

double NNfunction_ns_chi03_uR::synapse0x35b2c60() {
   return (neuron0x3599a20()*-0.00637931);
}

double NNfunction_ns_chi03_uR::synapse0x35b2ca0() {
   return (neuron0x3599d60()*0.00623851);
}

double NNfunction_ns_chi03_uR::synapse0x35b2ce0() {
   return (neuron0x359a0a0()*0.00451839);
}

double NNfunction_ns_chi03_uR::synapse0x35b2d20() {
   return (neuron0x359a3e0()*-0.0121537);
}

double NNfunction_ns_chi03_uR::synapse0x35b2d60() {
   return (neuron0x359a720()*0.4238);
}

double NNfunction_ns_chi03_uR::synapse0x35b2da0() {
   return (neuron0x359aa60()*0.00570294);
}

double NNfunction_ns_chi03_uR::synapse0x35b2830() {
   return (neuron0x359ada0()*0.00714793);
}

double NNfunction_ns_chi03_uR::synapse0x35b2870() {
   return (neuron0x359b300()*-0.00172649);
}

double NNfunction_ns_chi03_uR::synapse0x35b2ef0() {
   return (neuron0x359b640()*-0.00524281);
}

double NNfunction_ns_chi03_uR::synapse0x35b2f30() {
   return (neuron0x359b980()*-0.00960556);
}

double NNfunction_ns_chi03_uR::synapse0x35b2f70() {
   return (neuron0x359bcc0()*0.0206174);
}

double NNfunction_ns_chi03_uR::synapse0x35b2fb0() {
   return (neuron0x359c000()*0.00519545);
}

double NNfunction_ns_chi03_uR::synapse0x35b2ff0() {
   return (neuron0x359c340()*0.00314401);
}

double NNfunction_ns_chi03_uR::synapse0x35b3030() {
   return (neuron0x359c680()*-0.121361);
}

double NNfunction_ns_chi03_uR::synapse0x35b33b0() {
   return (neuron0x3597a30()*-0.362532);
}

double NNfunction_ns_chi03_uR::synapse0x35a7980() {
   return (neuron0x3597ce0()*0.764955);
}

double NNfunction_ns_chi03_uR::synapse0x35a79c0() {
   return (neuron0x3598020()*0.740615);
}

double NNfunction_ns_chi03_uR::synapse0x35a7a00() {
   return (neuron0x3598360()*0.101415);
}

double NNfunction_ns_chi03_uR::synapse0x35a7c50() {
   return (neuron0x35986a0()*-0.0451884);
}

double NNfunction_ns_chi03_uR::synapse0x35a7c90() {
   return (neuron0x35989e0()*-0.527443);
}

double NNfunction_ns_chi03_uR::synapse0x35a7cd0() {
   return (neuron0x3598d20()*-0.0890631);
}

double NNfunction_ns_chi03_uR::synapse0x35a7f20() {
   return (neuron0x3599060()*0.131755);
}

double NNfunction_ns_chi03_uR::synapse0x35a7f60() {
   return (neuron0x35993a0()*0.684993);
}

double NNfunction_ns_chi03_uR::synapse0x35a81b0() {
   return (neuron0x35996e0()*0.253652);
}

double NNfunction_ns_chi03_uR::synapse0x35a81f0() {
   return (neuron0x3599a20()*0.171833);
}

double NNfunction_ns_chi03_uR::synapse0x35a8230() {
   return (neuron0x3599d60()*-0.515008);
}

double NNfunction_ns_chi03_uR::synapse0x35a8480() {
   return (neuron0x359a0a0()*0.467511);
}

double NNfunction_ns_chi03_uR::synapse0x35a84c0() {
   return (neuron0x359a3e0()*0.417172);
}

double NNfunction_ns_chi03_uR::synapse0x35a8710() {
   return (neuron0x359a720()*-0.647652);
}

double NNfunction_ns_chi03_uR::synapse0x35a8750() {
   return (neuron0x359aa60()*0.0168061);
}

double NNfunction_ns_chi03_uR::synapse0x35b3200() {
   return (neuron0x359ada0()*-0.0486272);
}

double NNfunction_ns_chi03_uR::synapse0x35b3240() {
   return (neuron0x359b300()*-0.214338);
}

double NNfunction_ns_chi03_uR::synapse0x35a88a0() {
   return (neuron0x359b640()*-0.102735);
}

double NNfunction_ns_chi03_uR::synapse0x35a8db0() {
   return (neuron0x359b980()*0.816997);
}

double NNfunction_ns_chi03_uR::synapse0x35a8df0() {
   return (neuron0x359bcc0()*-0.0356255);
}

double NNfunction_ns_chi03_uR::synapse0x35a8e30() {
   return (neuron0x359c000()*-0.0317934);
}

double NNfunction_ns_chi03_uR::synapse0x35a9080() {
   return (neuron0x359c340()*0.0595347);
}

double NNfunction_ns_chi03_uR::synapse0x35a90c0() {
   return (neuron0x359c680()*-0.0168772);
}

double NNfunction_ns_chi03_uR::synapse0x35a8970() {
   return (neuron0x3597a30()*0.108449);
}

double NNfunction_ns_chi03_uR::synapse0x35a89b0() {
   return (neuron0x3597ce0()*15.2146);
}

double NNfunction_ns_chi03_uR::synapse0x35a89f0() {
   return (neuron0x3598020()*0.533361);
}

double NNfunction_ns_chi03_uR::synapse0x35a8a30() {
   return (neuron0x3598360()*-0.0138241);
}

double NNfunction_ns_chi03_uR::synapse0x35a93b0() {
   return (neuron0x35986a0()*-0.00617094);
}

double NNfunction_ns_chi03_uR::synapse0x35b5700() {
   return (neuron0x35989e0()*-0.00428787);
}

double NNfunction_ns_chi03_uR::synapse0x35b5740() {
   return (neuron0x3598d20()*0.00670651);
}

double NNfunction_ns_chi03_uR::synapse0x35b5780() {
   return (neuron0x3599060()*0.0149735);
}

double NNfunction_ns_chi03_uR::synapse0x35b57c0() {
   return (neuron0x35993a0()*0.0604293);
}

double NNfunction_ns_chi03_uR::synapse0x35b5800() {
   return (neuron0x35996e0()*-0.0052681);
}

double NNfunction_ns_chi03_uR::synapse0x35b5840() {
   return (neuron0x3599a20()*0.0102795);
}

double NNfunction_ns_chi03_uR::synapse0x35b5880() {
   return (neuron0x3599d60()*-0.0369921);
}

double NNfunction_ns_chi03_uR::synapse0x35b58c0() {
   return (neuron0x359a0a0()*0.015164);
}

double NNfunction_ns_chi03_uR::synapse0x35b5900() {
   return (neuron0x359a3e0()*0.0318991);
}

double NNfunction_ns_chi03_uR::synapse0x35b5940() {
   return (neuron0x359a720()*0.0798065);
}

double NNfunction_ns_chi03_uR::synapse0x35b5980() {
   return (neuron0x359aa60()*0.0474098);
}

double NNfunction_ns_chi03_uR::synapse0x35a9290() {
   return (neuron0x359ada0()*-0.0177566);
}

double NNfunction_ns_chi03_uR::synapse0x35a92d0() {
   return (neuron0x359b300()*0.0428339);
}

double NNfunction_ns_chi03_uR::synapse0x35b5ad0() {
   return (neuron0x359b640()*0.00260616);
}

double NNfunction_ns_chi03_uR::synapse0x35b5b10() {
   return (neuron0x359b980()*0.00760715);
}

double NNfunction_ns_chi03_uR::synapse0x35b5b50() {
   return (neuron0x359bcc0()*0.0671777);
}

double NNfunction_ns_chi03_uR::synapse0x35b5b90() {
   return (neuron0x359c000()*0.0121235);
}

double NNfunction_ns_chi03_uR::synapse0x35b5bd0() {
   return (neuron0x359c340()*0.0081038);
}

double NNfunction_ns_chi03_uR::synapse0x35b5c10() {
   return (neuron0x359c680()*5.0711);
}

double NNfunction_ns_chi03_uR::synapse0x35b5f90() {
   return (neuron0x3597a30()*-0.0110801);
}

double NNfunction_ns_chi03_uR::synapse0x35b5fd0() {
   return (neuron0x3597ce0()*-1.1074);
}

double NNfunction_ns_chi03_uR::synapse0x35b6010() {
   return (neuron0x3598020()*0.264523);
}

double NNfunction_ns_chi03_uR::synapse0x35b6050() {
   return (neuron0x3598360()*-0.00773319);
}

double NNfunction_ns_chi03_uR::synapse0x35b6090() {
   return (neuron0x35986a0()*-0.00329324);
}

double NNfunction_ns_chi03_uR::synapse0x35b60d0() {
   return (neuron0x35989e0()*-0.00657698);
}

double NNfunction_ns_chi03_uR::synapse0x35b6110() {
   return (neuron0x3598d20()*-0.00382249);
}

double NNfunction_ns_chi03_uR::synapse0x35b6150() {
   return (neuron0x3599060()*0.0104647);
}

double NNfunction_ns_chi03_uR::synapse0x35b6190() {
   return (neuron0x35993a0()*-0.0142616);
}

double NNfunction_ns_chi03_uR::synapse0x35b61d0() {
   return (neuron0x35996e0()*0.00913729);
}

double NNfunction_ns_chi03_uR::synapse0x35b6210() {
   return (neuron0x3599a20()*0.00613681);
}

double NNfunction_ns_chi03_uR::synapse0x35b6250() {
   return (neuron0x3599d60()*0.0188269);
}

double NNfunction_ns_chi03_uR::synapse0x35b6290() {
   return (neuron0x359a0a0()*-0.0153794);
}

double NNfunction_ns_chi03_uR::synapse0x35b62d0() {
   return (neuron0x359a3e0()*0.0136711);
}

double NNfunction_ns_chi03_uR::synapse0x35b6310() {
   return (neuron0x359a720()*0.0939146);
}

double NNfunction_ns_chi03_uR::synapse0x35b6350() {
   return (neuron0x359aa60()*0.0270114);
}

double NNfunction_ns_chi03_uR::synapse0x35b5de0() {
   return (neuron0x359ada0()*-0.0181466);
}

double NNfunction_ns_chi03_uR::synapse0x35b5e20() {
   return (neuron0x359b300()*-0.00431445);
}

double NNfunction_ns_chi03_uR::synapse0x35b64a0() {
   return (neuron0x359b640()*-0.0143739);
}

double NNfunction_ns_chi03_uR::synapse0x35b64e0() {
   return (neuron0x359b980()*0.001515);
}

double NNfunction_ns_chi03_uR::synapse0x35b6520() {
   return (neuron0x359bcc0()*0.0115471);
}

double NNfunction_ns_chi03_uR::synapse0x35b6560() {
   return (neuron0x359c000()*-0.0195129);
}

double NNfunction_ns_chi03_uR::synapse0x35b65a0() {
   return (neuron0x359c340()*-0.00290273);
}

double NNfunction_ns_chi03_uR::synapse0x35b65e0() {
   return (neuron0x359c680()*0.388519);
}

double NNfunction_ns_chi03_uR::synapse0x35b6960() {
   return (neuron0x3597a30()*-0.0449631);
}

double NNfunction_ns_chi03_uR::synapse0x35b69a0() {
   return (neuron0x3597ce0()*0.580052);
}

double NNfunction_ns_chi03_uR::synapse0x35b69e0() {
   return (neuron0x3598020()*-0.0126665);
}

double NNfunction_ns_chi03_uR::synapse0x35b6a20() {
   return (neuron0x3598360()*-0.543134);
}

double NNfunction_ns_chi03_uR::synapse0x35b6a60() {
   return (neuron0x35986a0()*-0.214868);
}

double NNfunction_ns_chi03_uR::synapse0x35b6aa0() {
   return (neuron0x35989e0()*0.467027);
}

double NNfunction_ns_chi03_uR::synapse0x35b6ae0() {
   return (neuron0x3598d20()*-0.273884);
}

double NNfunction_ns_chi03_uR::synapse0x35b6b20() {
   return (neuron0x3599060()*0.365503);
}

double NNfunction_ns_chi03_uR::synapse0x35b6b60() {
   return (neuron0x35993a0()*0.0361627);
}

double NNfunction_ns_chi03_uR::synapse0x35b6ba0() {
   return (neuron0x35996e0()*-0.0745461);
}

double NNfunction_ns_chi03_uR::synapse0x35b6be0() {
   return (neuron0x3599a20()*0.333262);
}

double NNfunction_ns_chi03_uR::synapse0x35b6c20() {
   return (neuron0x3599d60()*0.247952);
}

double NNfunction_ns_chi03_uR::synapse0x35b6c60() {
   return (neuron0x359a0a0()*-0.111672);
}

double NNfunction_ns_chi03_uR::synapse0x35b6ca0() {
   return (neuron0x359a3e0()*-0.114157);
}

double NNfunction_ns_chi03_uR::synapse0x35b6ce0() {
   return (neuron0x359a720()*-0.0620736);
}

double NNfunction_ns_chi03_uR::synapse0x35b6d20() {
   return (neuron0x359aa60()*0.190941);
}

double NNfunction_ns_chi03_uR::synapse0x35b67b0() {
   return (neuron0x359ada0()*-0.199292);
}

double NNfunction_ns_chi03_uR::synapse0x35b67f0() {
   return (neuron0x359b300()*1.19201);
}

double NNfunction_ns_chi03_uR::synapse0x35b6e70() {
   return (neuron0x359b640()*-0.745472);
}

double NNfunction_ns_chi03_uR::synapse0x35b6eb0() {
   return (neuron0x359b980()*0.496739);
}

double NNfunction_ns_chi03_uR::synapse0x35b6ef0() {
   return (neuron0x359bcc0()*0.504615);
}

double NNfunction_ns_chi03_uR::synapse0x35b6f30() {
   return (neuron0x359c000()*-0.593262);
}

double NNfunction_ns_chi03_uR::synapse0x35b6f70() {
   return (neuron0x359c340()*-0.470982);
}

double NNfunction_ns_chi03_uR::synapse0x35b6fb0() {
   return (neuron0x359c680()*0.411506);
}

double NNfunction_ns_chi03_uR::synapse0x35b7330() {
   return (neuron0x3597a30()*-0.0114377);
}

double NNfunction_ns_chi03_uR::synapse0x35b7370() {
   return (neuron0x3597ce0()*-0.153415);
}

double NNfunction_ns_chi03_uR::synapse0x35b73b0() {
   return (neuron0x3598020()*-0.764331);
}

double NNfunction_ns_chi03_uR::synapse0x35b73f0() {
   return (neuron0x3598360()*-0.0137564);
}

double NNfunction_ns_chi03_uR::synapse0x35b7430() {
   return (neuron0x35986a0()*0.00186716);
}

double NNfunction_ns_chi03_uR::synapse0x35b7470() {
   return (neuron0x35989e0()*0.00378828);
}

double NNfunction_ns_chi03_uR::synapse0x35b74b0() {
   return (neuron0x3598d20()*0.0163882);
}

double NNfunction_ns_chi03_uR::synapse0x35b74f0() {
   return (neuron0x3599060()*-0.0148942);
}

double NNfunction_ns_chi03_uR::synapse0x35b7530() {
   return (neuron0x35993a0()*0.00460875);
}

double NNfunction_ns_chi03_uR::synapse0x35b7570() {
   return (neuron0x35996e0()*0.00601306);
}

double NNfunction_ns_chi03_uR::synapse0x35b75b0() {
   return (neuron0x3599a20()*0.0447001);
}

double NNfunction_ns_chi03_uR::synapse0x35b75f0() {
   return (neuron0x3599d60()*-0.00560461);
}

double NNfunction_ns_chi03_uR::synapse0x35b7630() {
   return (neuron0x359a0a0()*-0.00431204);
}

double NNfunction_ns_chi03_uR::synapse0x35b7670() {
   return (neuron0x359a3e0()*0.0105557);
}

double NNfunction_ns_chi03_uR::synapse0x35b76b0() {
   return (neuron0x359a720()*-0.136474);
}

double NNfunction_ns_chi03_uR::synapse0x35b76f0() {
   return (neuron0x359aa60()*-0.0243662);
}

double NNfunction_ns_chi03_uR::synapse0x35b7180() {
   return (neuron0x359ada0()*0.00245525);
}

double NNfunction_ns_chi03_uR::synapse0x35b71c0() {
   return (neuron0x359b300()*0.0162269);
}

double NNfunction_ns_chi03_uR::synapse0x35b7840() {
   return (neuron0x359b640()*-0.0137411);
}

double NNfunction_ns_chi03_uR::synapse0x35b7880() {
   return (neuron0x359b980()*0.00533929);
}

double NNfunction_ns_chi03_uR::synapse0x35b78c0() {
   return (neuron0x359bcc0()*-0.0131288);
}

double NNfunction_ns_chi03_uR::synapse0x35b7900() {
   return (neuron0x359c000()*0.000751796);
}

double NNfunction_ns_chi03_uR::synapse0x35b7940() {
   return (neuron0x359c340()*0.000564073);
}

double NNfunction_ns_chi03_uR::synapse0x35b7980() {
   return (neuron0x359c680()*0.481576);
}

double NNfunction_ns_chi03_uR::synapse0x35b7d00() {
   return (neuron0x3597a30()*0.176903);
}

double NNfunction_ns_chi03_uR::synapse0x35b7d40() {
   return (neuron0x3597ce0()*-0.880145);
}

double NNfunction_ns_chi03_uR::synapse0x35b7d80() {
   return (neuron0x3598020()*1.24907);
}

double NNfunction_ns_chi03_uR::synapse0x35b7dc0() {
   return (neuron0x3598360()*-0.0705197);
}

double NNfunction_ns_chi03_uR::synapse0x35b7e00() {
   return (neuron0x35986a0()*-0.118062);
}

double NNfunction_ns_chi03_uR::synapse0x35b7e40() {
   return (neuron0x35989e0()*0.00521659);
}

double NNfunction_ns_chi03_uR::synapse0x35b7e80() {
   return (neuron0x3598d20()*0.0349964);
}

double NNfunction_ns_chi03_uR::synapse0x35b7ec0() {
   return (neuron0x3599060()*0.0215799);
}

double NNfunction_ns_chi03_uR::synapse0x35b7f00() {
   return (neuron0x35993a0()*0.318536);
}

double NNfunction_ns_chi03_uR::synapse0x35b7f40() {
   return (neuron0x35996e0()*-0.496586);
}

double NNfunction_ns_chi03_uR::synapse0x35b7f80() {
   return (neuron0x3599a20()*-0.197182);
}

double NNfunction_ns_chi03_uR::synapse0x35b7fc0() {
   return (neuron0x3599d60()*-0.416688);
}

double NNfunction_ns_chi03_uR::synapse0x35b8000() {
   return (neuron0x359a0a0()*0.211244);
}

double NNfunction_ns_chi03_uR::synapse0x35b8040() {
   return (neuron0x359a3e0()*-0.102632);
}

double NNfunction_ns_chi03_uR::synapse0x35b8080() {
   return (neuron0x359a720()*0.287446);
}

double NNfunction_ns_chi03_uR::synapse0x35b80c0() {
   return (neuron0x359aa60()*0.021317);
}

double NNfunction_ns_chi03_uR::synapse0x35b7b50() {
   return (neuron0x359ada0()*0.218173);
}

double NNfunction_ns_chi03_uR::synapse0x35b7b90() {
   return (neuron0x359b300()*0.0757923);
}

double NNfunction_ns_chi03_uR::synapse0x35b8210() {
   return (neuron0x359b640()*0.201766);
}

double NNfunction_ns_chi03_uR::synapse0x35b8250() {
   return (neuron0x359b980()*0.0521596);
}

double NNfunction_ns_chi03_uR::synapse0x35b8290() {
   return (neuron0x359bcc0()*-0.0742263);
}

double NNfunction_ns_chi03_uR::synapse0x35b82d0() {
   return (neuron0x359c000()*-0.162881);
}

double NNfunction_ns_chi03_uR::synapse0x35b8310() {
   return (neuron0x359c340()*-0.323942);
}

double NNfunction_ns_chi03_uR::synapse0x35b8350() {
   return (neuron0x359c680()*2.24645);
}

double NNfunction_ns_chi03_uR::synapse0x35b86d0() {
   return (neuron0x3597a30()*0.346547);
}

double NNfunction_ns_chi03_uR::synapse0x35b8710() {
   return (neuron0x3597ce0()*-1.17529);
}

double NNfunction_ns_chi03_uR::synapse0x35b8750() {
   return (neuron0x3598020()*0.589238);
}

double NNfunction_ns_chi03_uR::synapse0x35b8790() {
   return (neuron0x3598360()*-0.404723);
}

double NNfunction_ns_chi03_uR::synapse0x35b87d0() {
   return (neuron0x35986a0()*-0.238216);
}

double NNfunction_ns_chi03_uR::synapse0x35b8810() {
   return (neuron0x35989e0()*0.148996);
}

double NNfunction_ns_chi03_uR::synapse0x35b8850() {
   return (neuron0x3598d20()*-0.475899);
}

double NNfunction_ns_chi03_uR::synapse0x35b8890() {
   return (neuron0x3599060()*0.777009);
}

double NNfunction_ns_chi03_uR::synapse0x35b88d0() {
   return (neuron0x35993a0()*-0.0664475);
}

double NNfunction_ns_chi03_uR::synapse0x35b8910() {
   return (neuron0x35996e0()*-0.0482932);
}

double NNfunction_ns_chi03_uR::synapse0x35b8950() {
   return (neuron0x3599a20()*1.10719);
}

double NNfunction_ns_chi03_uR::synapse0x35b8990() {
   return (neuron0x3599d60()*1.38721);
}

double NNfunction_ns_chi03_uR::synapse0x35b89d0() {
   return (neuron0x359a0a0()*0.196315);
}

double NNfunction_ns_chi03_uR::synapse0x35b8a10() {
   return (neuron0x359a3e0()*0.782839);
}

double NNfunction_ns_chi03_uR::synapse0x35b8a50() {
   return (neuron0x359a720()*-0.904957);
}

double NNfunction_ns_chi03_uR::synapse0x35b8a90() {
   return (neuron0x359aa60()*-0.0877837);
}

double NNfunction_ns_chi03_uR::synapse0x35b8520() {
   return (neuron0x359ada0()*-0.12791);
}

double NNfunction_ns_chi03_uR::synapse0x35b8560() {
   return (neuron0x359b300()*1.5533);
}

double NNfunction_ns_chi03_uR::synapse0x35b8be0() {
   return (neuron0x359b640()*-1.44359);
}

double NNfunction_ns_chi03_uR::synapse0x35b8c20() {
   return (neuron0x359b980()*-0.419504);
}

double NNfunction_ns_chi03_uR::synapse0x35b8c60() {
   return (neuron0x359bcc0()*0.392602);
}

double NNfunction_ns_chi03_uR::synapse0x35b8ca0() {
   return (neuron0x359c000()*-0.178514);
}

double NNfunction_ns_chi03_uR::synapse0x35b8ce0() {
   return (neuron0x359c340()*-0.842542);
}

double NNfunction_ns_chi03_uR::synapse0x35b8d20() {
   return (neuron0x359c680()*-0.228756);
}

double NNfunction_ns_chi03_uR::synapse0x35b90a0() {
   return (neuron0x3597a30()*-0.00940712);
}

double NNfunction_ns_chi03_uR::synapse0x35b90e0() {
   return (neuron0x3597ce0()*0.00909049);
}

double NNfunction_ns_chi03_uR::synapse0x35b9120() {
   return (neuron0x3598020()*-5.74444);
}

double NNfunction_ns_chi03_uR::synapse0x35b9160() {
   return (neuron0x3598360()*0.00916445);
}

double NNfunction_ns_chi03_uR::synapse0x35b91a0() {
   return (neuron0x35986a0()*-0.0251011);
}

double NNfunction_ns_chi03_uR::synapse0x35b91e0() {
   return (neuron0x35989e0()*-0.0363827);
}

double NNfunction_ns_chi03_uR::synapse0x35b9220() {
   return (neuron0x3598d20()*-0.000397779);
}

double NNfunction_ns_chi03_uR::synapse0x35b9260() {
   return (neuron0x3599060()*-0.0504228);
}

double NNfunction_ns_chi03_uR::synapse0x35b92a0() {
   return (neuron0x35993a0()*0.0360127);
}

double NNfunction_ns_chi03_uR::synapse0x35b92e0() {
   return (neuron0x35996e0()*0.00993245);
}

double NNfunction_ns_chi03_uR::synapse0x35b9320() {
   return (neuron0x3599a20()*0.0668527);
}

double NNfunction_ns_chi03_uR::synapse0x35b9360() {
   return (neuron0x3599d60()*-0.00974466);
}

double NNfunction_ns_chi03_uR::synapse0x35b93a0() {
   return (neuron0x359a0a0()*-0.0152698);
}

double NNfunction_ns_chi03_uR::synapse0x35b93e0() {
   return (neuron0x359a3e0()*0.00907842);
}

double NNfunction_ns_chi03_uR::synapse0x35b9420() {
   return (neuron0x359a720()*-0.20998);
}

double NNfunction_ns_chi03_uR::synapse0x35b9460() {
   return (neuron0x359aa60()*-0.0242308);
}

double NNfunction_ns_chi03_uR::synapse0x35b8ef0() {
   return (neuron0x359ada0()*-0.0263154);
}

double NNfunction_ns_chi03_uR::synapse0x35b8f30() {
   return (neuron0x359b300()*-0.00917756);
}

double NNfunction_ns_chi03_uR::synapse0x35b95b0() {
   return (neuron0x359b640()*-0.016241);
}

double NNfunction_ns_chi03_uR::synapse0x35b95f0() {
   return (neuron0x359b980()*0.0209765);
}

double NNfunction_ns_chi03_uR::synapse0x35b9630() {
   return (neuron0x359bcc0()*-0.0496732);
}

double NNfunction_ns_chi03_uR::synapse0x35b9670() {
   return (neuron0x359c000()*0.00927997);
}

double NNfunction_ns_chi03_uR::synapse0x35b96b0() {
   return (neuron0x359c340()*0.0112351);
}

double NNfunction_ns_chi03_uR::synapse0x35b96f0() {
   return (neuron0x359c680()*1.91714);
}

double NNfunction_ns_chi03_uR::synapse0x35b9a70() {
   return (neuron0x3597a30()*-0.16127);
}

double NNfunction_ns_chi03_uR::synapse0x35b9ab0() {
   return (neuron0x3597ce0()*4.5652);
}

double NNfunction_ns_chi03_uR::synapse0x35b9af0() {
   return (neuron0x3598020()*0.171631);
}

double NNfunction_ns_chi03_uR::synapse0x35b9b30() {
   return (neuron0x3598360()*0.0356187);
}

double NNfunction_ns_chi03_uR::synapse0x35b9b70() {
   return (neuron0x35986a0()*-0.0142725);
}

double NNfunction_ns_chi03_uR::synapse0x35b9bb0() {
   return (neuron0x35989e0()*0.0149783);
}

double NNfunction_ns_chi03_uR::synapse0x35b9bf0() {
   return (neuron0x3598d20()*0.00574398);
}

double NNfunction_ns_chi03_uR::synapse0x35b9c30() {
   return (neuron0x3599060()*-0.0232318);
}

double NNfunction_ns_chi03_uR::synapse0x35b9c70() {
   return (neuron0x35993a0()*-0.00574691);
}

double NNfunction_ns_chi03_uR::synapse0x35b9cb0() {
   return (neuron0x35996e0()*-0.0126723);
}

double NNfunction_ns_chi03_uR::synapse0x35b9cf0() {
   return (neuron0x3599a20()*0.0471736);
}

double NNfunction_ns_chi03_uR::synapse0x35b9d30() {
   return (neuron0x3599d60()*0.0384449);
}

double NNfunction_ns_chi03_uR::synapse0x35b9d70() {
   return (neuron0x359a0a0()*-0.0274264);
}

double NNfunction_ns_chi03_uR::synapse0x35b9db0() {
   return (neuron0x359a3e0()*0.0298701);
}

double NNfunction_ns_chi03_uR::synapse0x35b9df0() {
   return (neuron0x359a720()*-0.761624);
}

double NNfunction_ns_chi03_uR::synapse0x35b9e30() {
   return (neuron0x359aa60()*-0.00166177);
}

double NNfunction_ns_chi03_uR::synapse0x35b98c0() {
   return (neuron0x359ada0()*0.00636633);
}

double NNfunction_ns_chi03_uR::synapse0x35b9900() {
   return (neuron0x359b300()*-0.00301824);
}

double NNfunction_ns_chi03_uR::synapse0x35b9f80() {
   return (neuron0x359b640()*0.0338994);
}

double NNfunction_ns_chi03_uR::synapse0x35b9fc0() {
   return (neuron0x359b980()*0.0562856);
}

double NNfunction_ns_chi03_uR::synapse0x35ba000() {
   return (neuron0x359bcc0()*0.00265723);
}

double NNfunction_ns_chi03_uR::synapse0x35ba040() {
   return (neuron0x359c000()*-0.0595107);
}

double NNfunction_ns_chi03_uR::synapse0x35ba080() {
   return (neuron0x359c340()*-0.0141114);
}

double NNfunction_ns_chi03_uR::synapse0x35ba0c0() {
   return (neuron0x359c680()*1.17987);
}

double NNfunction_ns_chi03_uR::synapse0x35a2b70() {
   return (neuron0x3597a30()*-0.0616652);
}

double NNfunction_ns_chi03_uR::synapse0x35a2bb0() {
   return (neuron0x3597ce0()*-4.39635);
}

double NNfunction_ns_chi03_uR::synapse0x35a2bf0() {
   return (neuron0x3598020()*-5.03435);
}

double NNfunction_ns_chi03_uR::synapse0x35a2c30() {
   return (neuron0x3598360()*-0.0247728);
}

double NNfunction_ns_chi03_uR::synapse0x35a2c70() {
   return (neuron0x35986a0()*0.0195706);
}

double NNfunction_ns_chi03_uR::synapse0x35a2cb0() {
   return (neuron0x35989e0()*-0.000914359);
}

double NNfunction_ns_chi03_uR::synapse0x35a2cf0() {
   return (neuron0x3598d20()*0.0346184);
}

double NNfunction_ns_chi03_uR::synapse0x35a2d30() {
   return (neuron0x3599060()*-0.0756654);
}

double NNfunction_ns_chi03_uR::synapse0x35ba850() {
   return (neuron0x35993a0()*-0.0626569);
}

double NNfunction_ns_chi03_uR::synapse0x35ba890() {
   return (neuron0x35996e0()*-0.0242905);
}

double NNfunction_ns_chi03_uR::synapse0x35ba8d0() {
   return (neuron0x3599a20()*0.00800956);
}

double NNfunction_ns_chi03_uR::synapse0x35ba910() {
   return (neuron0x3599d60()*0.019642);
}

double NNfunction_ns_chi03_uR::synapse0x35ba950() {
   return (neuron0x359a0a0()*0.000506654);
}

double NNfunction_ns_chi03_uR::synapse0x35ba990() {
   return (neuron0x359a3e0()*-0.00903134);
}

double NNfunction_ns_chi03_uR::synapse0x35ba9d0() {
   return (neuron0x359a720()*-0.203905);
}

double NNfunction_ns_chi03_uR::synapse0x35baa10() {
   return (neuron0x359aa60()*-0.0263885);
}

double NNfunction_ns_chi03_uR::synapse0x35ba290() {
   return (neuron0x359ada0()*0.025195);
}

double NNfunction_ns_chi03_uR::synapse0x35ba2d0() {
   return (neuron0x359b300()*-0.00966012);
}

double NNfunction_ns_chi03_uR::synapse0x35bab60() {
   return (neuron0x359b640()*-0.00743048);
}

double NNfunction_ns_chi03_uR::synapse0x35baba0() {
   return (neuron0x359b980()*-0.0157562);
}

double NNfunction_ns_chi03_uR::synapse0x35babe0() {
   return (neuron0x359bcc0()*-0.0476645);
}

double NNfunction_ns_chi03_uR::synapse0x35bac20() {
   return (neuron0x359c000()*0.0236866);
}

double NNfunction_ns_chi03_uR::synapse0x35bac60() {
   return (neuron0x359c340()*-0.000727327);
}

double NNfunction_ns_chi03_uR::synapse0x35baca0() {
   return (neuron0x359c680()*0.835175);
}

double NNfunction_ns_chi03_uR::synapse0x35bb020() {
   return (neuron0x3597a30()*-0.269473);
}

double NNfunction_ns_chi03_uR::synapse0x35bb060() {
   return (neuron0x3597ce0()*-1.12479);
}

double NNfunction_ns_chi03_uR::synapse0x35bb0a0() {
   return (neuron0x3598020()*3.99341);
}

double NNfunction_ns_chi03_uR::synapse0x35bb0e0() {
   return (neuron0x3598360()*-0.0142099);
}

double NNfunction_ns_chi03_uR::synapse0x35bb120() {
   return (neuron0x35986a0()*-0.101148);
}

double NNfunction_ns_chi03_uR::synapse0x35bb160() {
   return (neuron0x35989e0()*0.0020902);
}

double NNfunction_ns_chi03_uR::synapse0x35bb1a0() {
   return (neuron0x3598d20()*0.0436928);
}

double NNfunction_ns_chi03_uR::synapse0x35bb1e0() {
   return (neuron0x3599060()*0.0737421);
}

double NNfunction_ns_chi03_uR::synapse0x35bb220() {
   return (neuron0x35993a0()*-0.0686691);
}

double NNfunction_ns_chi03_uR::synapse0x35bb260() {
   return (neuron0x35996e0()*-0.0556926);
}

double NNfunction_ns_chi03_uR::synapse0x35bb2a0() {
   return (neuron0x3599a20()*-0.115443);
}

double NNfunction_ns_chi03_uR::synapse0x35bb2e0() {
   return (neuron0x3599d60()*0.185468);
}

double NNfunction_ns_chi03_uR::synapse0x35bb320() {
   return (neuron0x359a0a0()*-0.0336095);
}

double NNfunction_ns_chi03_uR::synapse0x35bb360() {
   return (neuron0x359a3e0()*-0.129092);
}

double NNfunction_ns_chi03_uR::synapse0x35bb3a0() {
   return (neuron0x359a720()*0.368479);
}

double NNfunction_ns_chi03_uR::synapse0x35bb3e0() {
   return (neuron0x359aa60()*0.0473906);
}

double NNfunction_ns_chi03_uR::synapse0x35bae70() {
   return (neuron0x359ada0()*-0.0906048);
}

double NNfunction_ns_chi03_uR::synapse0x35baeb0() {
   return (neuron0x359b300()*-0.131337);
}

double NNfunction_ns_chi03_uR::synapse0x35bb530() {
   return (neuron0x359b640()*-0.04466);
}

double NNfunction_ns_chi03_uR::synapse0x35bb570() {
   return (neuron0x359b980()*-0.0704947);
}

double NNfunction_ns_chi03_uR::synapse0x35bb5b0() {
   return (neuron0x359bcc0()*0.0394226);
}

double NNfunction_ns_chi03_uR::synapse0x35bb5f0() {
   return (neuron0x359c000()*-0.0807468);
}

double NNfunction_ns_chi03_uR::synapse0x35bb630() {
   return (neuron0x359c340()*-0.00648607);
}

double NNfunction_ns_chi03_uR::synapse0x35bb670() {
   return (neuron0x359c680()*0.646436);
}

double NNfunction_ns_chi03_uR::synapse0x35bb9f0() {
   return (neuron0x3597a30()*0.0102076);
}

double NNfunction_ns_chi03_uR::synapse0x35bba30() {
   return (neuron0x3597ce0()*0.0117933);
}

double NNfunction_ns_chi03_uR::synapse0x35bba70() {
   return (neuron0x3598020()*-0.0538642);
}

double NNfunction_ns_chi03_uR::synapse0x35bbab0() {
   return (neuron0x3598360()*0.0267635);
}

double NNfunction_ns_chi03_uR::synapse0x35bbaf0() {
   return (neuron0x35986a0()*-0.0266421);
}

double NNfunction_ns_chi03_uR::synapse0x35bbb30() {
   return (neuron0x35989e0()*-0.049032);
}

double NNfunction_ns_chi03_uR::synapse0x35bbb70() {
   return (neuron0x3598d20()*-0.0474709);
}

double NNfunction_ns_chi03_uR::synapse0x35bbbb0() {
   return (neuron0x3599060()*-0.0391215);
}

double NNfunction_ns_chi03_uR::synapse0x35bbbf0() {
   return (neuron0x35993a0()*0.0144528);
}

double NNfunction_ns_chi03_uR::synapse0x35bbc30() {
   return (neuron0x35996e0()*0.048194);
}

double NNfunction_ns_chi03_uR::synapse0x35bbc70() {
   return (neuron0x3599a20()*0.00966168);
}

double NNfunction_ns_chi03_uR::synapse0x35bbcb0() {
   return (neuron0x3599d60()*0.0373419);
}

double NNfunction_ns_chi03_uR::synapse0x35bbcf0() {
   return (neuron0x359a0a0()*0.00722452);
}

double NNfunction_ns_chi03_uR::synapse0x35bbd30() {
   return (neuron0x359a3e0()*-0.0474909);
}

double NNfunction_ns_chi03_uR::synapse0x35bbd70() {
   return (neuron0x359a720()*3.69853);
}

double NNfunction_ns_chi03_uR::synapse0x35bbdb0() {
   return (neuron0x359aa60()*-0.155411);
}

double NNfunction_ns_chi03_uR::synapse0x35bb840() {
   return (neuron0x359ada0()*-0.00111241);
}

double NNfunction_ns_chi03_uR::synapse0x35bb880() {
   return (neuron0x359b300()*0.0279983);
}

double NNfunction_ns_chi03_uR::synapse0x35ac3b0() {
   return (neuron0x359b640()*-0.0749793);
}

double NNfunction_ns_chi03_uR::synapse0x35ac3f0() {
   return (neuron0x359b980()*0.023218);
}

double NNfunction_ns_chi03_uR::synapse0x35ac430() {
   return (neuron0x359bcc0()*-0.0445824);
}

double NNfunction_ns_chi03_uR::synapse0x35ac470() {
   return (neuron0x359c000()*0.00565506);
}

double NNfunction_ns_chi03_uR::synapse0x35ac4b0() {
   return (neuron0x359c340()*-0.0310449);
}

double NNfunction_ns_chi03_uR::synapse0x35ac4f0() {
   return (neuron0x359c680()*0.0984251);
}

double NNfunction_ns_chi03_uR::synapse0x35ac870() {
   return (neuron0x3597a30()*-1.36466);
}

double NNfunction_ns_chi03_uR::synapse0x35ac8b0() {
   return (neuron0x3597ce0()*-0.433745);
}

double NNfunction_ns_chi03_uR::synapse0x35ac8f0() {
   return (neuron0x3598020()*-0.70319);
}

double NNfunction_ns_chi03_uR::synapse0x35ac930() {
   return (neuron0x3598360()*-0.312359);
}

double NNfunction_ns_chi03_uR::synapse0x35ac970() {
   return (neuron0x35986a0()*-0.377166);
}

double NNfunction_ns_chi03_uR::synapse0x35ac9b0() {
   return (neuron0x35989e0()*0.181439);
}

double NNfunction_ns_chi03_uR::synapse0x35ac9f0() {
   return (neuron0x3598d20()*-1.14871);
}

double NNfunction_ns_chi03_uR::synapse0x35aca30() {
   return (neuron0x3599060()*-0.438334);
}

double NNfunction_ns_chi03_uR::synapse0x35aca70() {
   return (neuron0x35993a0()*0.617285);
}

double NNfunction_ns_chi03_uR::synapse0x35acab0() {
   return (neuron0x35996e0()*-0.166476);
}

double NNfunction_ns_chi03_uR::synapse0x35acaf0() {
   return (neuron0x3599a20()*0.663199);
}

double NNfunction_ns_chi03_uR::synapse0x35acb30() {
   return (neuron0x3599d60()*-0.601882);
}

double NNfunction_ns_chi03_uR::synapse0x35acb70() {
   return (neuron0x359a0a0()*1.59818);
}

double NNfunction_ns_chi03_uR::synapse0x35acbb0() {
   return (neuron0x359a3e0()*-0.293805);
}

double NNfunction_ns_chi03_uR::synapse0x35acbf0() {
   return (neuron0x359a720()*-1.08751);
}

double NNfunction_ns_chi03_uR::synapse0x35acc30() {
   return (neuron0x359aa60()*0.801759);
}

double NNfunction_ns_chi03_uR::synapse0x35ac6c0() {
   return (neuron0x359ada0()*0.0871175);
}

double NNfunction_ns_chi03_uR::synapse0x35ac700() {
   return (neuron0x359b300()*1.51089);
}

double NNfunction_ns_chi03_uR::synapse0x35acd80() {
   return (neuron0x359b640()*0.308065);
}

double NNfunction_ns_chi03_uR::synapse0x35acdc0() {
   return (neuron0x359b980()*0.620264);
}

double NNfunction_ns_chi03_uR::synapse0x35ace00() {
   return (neuron0x359bcc0()*0.25294);
}

double NNfunction_ns_chi03_uR::synapse0x35ace40() {
   return (neuron0x359c000()*-0.583427);
}

double NNfunction_ns_chi03_uR::synapse0x35ace80() {
   return (neuron0x359c340()*-0.996433);
}

double NNfunction_ns_chi03_uR::synapse0x35acec0() {
   return (neuron0x359c680()*0.732336);
}

double NNfunction_ns_chi03_uR::synapse0x35ad240() {
   return (neuron0x3597a30()*-0.131298);
}

double NNfunction_ns_chi03_uR::synapse0x35ad280() {
   return (neuron0x3597ce0()*1.16697);
}

double NNfunction_ns_chi03_uR::synapse0x35ad2c0() {
   return (neuron0x3598020()*0.768795);
}

double NNfunction_ns_chi03_uR::synapse0x35ad300() {
   return (neuron0x3598360()*-0.00660463);
}

double NNfunction_ns_chi03_uR::synapse0x35ad340() {
   return (neuron0x35986a0()*-0.0387087);
}

double NNfunction_ns_chi03_uR::synapse0x35ad380() {
   return (neuron0x35989e0()*-0.0245547);
}

double NNfunction_ns_chi03_uR::synapse0x35ad3c0() {
   return (neuron0x3598d20()*-0.0601219);
}

double NNfunction_ns_chi03_uR::synapse0x35ad400() {
   return (neuron0x3599060()*0.00916279);
}

double NNfunction_ns_chi03_uR::synapse0x35ad440() {
   return (neuron0x35993a0()*0.0107501);
}

double NNfunction_ns_chi03_uR::synapse0x35ad480() {
   return (neuron0x35996e0()*-0.00249107);
}

double NNfunction_ns_chi03_uR::synapse0x35ad4c0() {
   return (neuron0x3599a20()*0.077607);
}

double NNfunction_ns_chi03_uR::synapse0x35ad500() {
   return (neuron0x3599d60()*-0.0142471);
}

double NNfunction_ns_chi03_uR::synapse0x35ad540() {
   return (neuron0x359a0a0()*-0.0216673);
}

double NNfunction_ns_chi03_uR::synapse0x35ad580() {
   return (neuron0x359a3e0()*0.0209598);
}

double NNfunction_ns_chi03_uR::synapse0x35ad5c0() {
   return (neuron0x359a720()*0.221938);
}

double NNfunction_ns_chi03_uR::synapse0x35ad600() {
   return (neuron0x359aa60()*0.0649975);
}

double NNfunction_ns_chi03_uR::synapse0x35ad090() {
   return (neuron0x359ada0()*0.00376412);
}

double NNfunction_ns_chi03_uR::synapse0x35ad0d0() {
   return (neuron0x359b300()*-0.00688449);
}

double NNfunction_ns_chi03_uR::synapse0x35ad750() {
   return (neuron0x359b640()*0.0308986);
}

double NNfunction_ns_chi03_uR::synapse0x35ad790() {
   return (neuron0x359b980()*0.0477391);
}

double NNfunction_ns_chi03_uR::synapse0x35ad7d0() {
   return (neuron0x359bcc0()*-0.00139323);
}

double NNfunction_ns_chi03_uR::synapse0x35ad810() {
   return (neuron0x359c000()*-0.0266637);
}

double NNfunction_ns_chi03_uR::synapse0x35ad850() {
   return (neuron0x359c340()*0.00884999);
}

double NNfunction_ns_chi03_uR::synapse0x35ad890() {
   return (neuron0x359c680()*1.93876);
}

double NNfunction_ns_chi03_uR::synapse0x35adc10() {
   return (neuron0x3597a30()*-0.23777);
}

double NNfunction_ns_chi03_uR::synapse0x35adc50() {
   return (neuron0x3597ce0()*-0.462536);
}

double NNfunction_ns_chi03_uR::synapse0x35adc90() {
   return (neuron0x3598020()*-0.0217938);
}

double NNfunction_ns_chi03_uR::synapse0x35adcd0() {
   return (neuron0x3598360()*0.0581906);
}

double NNfunction_ns_chi03_uR::synapse0x35add10() {
   return (neuron0x35986a0()*-1.62966);
}

double NNfunction_ns_chi03_uR::synapse0x35add50() {
   return (neuron0x35989e0()*-0.414203);
}

double NNfunction_ns_chi03_uR::synapse0x35add90() {
   return (neuron0x3598d20()*0.206185);
}

double NNfunction_ns_chi03_uR::synapse0x35addd0() {
   return (neuron0x3599060()*0.661126);
}

double NNfunction_ns_chi03_uR::synapse0x35ade10() {
   return (neuron0x35993a0()*-0.517937);
}

double NNfunction_ns_chi03_uR::synapse0x35ade50() {
   return (neuron0x35996e0()*-0.081991);
}

double NNfunction_ns_chi03_uR::synapse0x35ade90() {
   return (neuron0x3599a20()*-0.161132);
}

double NNfunction_ns_chi03_uR::synapse0x35aded0() {
   return (neuron0x3599d60()*-0.837617);
}

double NNfunction_ns_chi03_uR::synapse0x35adf10() {
   return (neuron0x359a0a0()*-0.661335);
}

double NNfunction_ns_chi03_uR::synapse0x35adf50() {
   return (neuron0x359a3e0()*0.241001);
}

double NNfunction_ns_chi03_uR::synapse0x35adf90() {
   return (neuron0x359a720()*0.00427764);
}

double NNfunction_ns_chi03_uR::synapse0x35adfd0() {
   return (neuron0x359aa60()*-0.962969);
}

double NNfunction_ns_chi03_uR::synapse0x35ada60() {
   return (neuron0x359ada0()*0.552705);
}

double NNfunction_ns_chi03_uR::synapse0x35adaa0() {
   return (neuron0x359b300()*-1.21589);
}

double NNfunction_ns_chi03_uR::synapse0x35ae120() {
   return (neuron0x359b640()*-1.14549);
}

double NNfunction_ns_chi03_uR::synapse0x35ae160() {
   return (neuron0x359b980()*0.906424);
}

double NNfunction_ns_chi03_uR::synapse0x35ae1a0() {
   return (neuron0x359bcc0()*0.108691);
}

double NNfunction_ns_chi03_uR::synapse0x35ae1e0() {
   return (neuron0x359c000()*-0.395913);
}

double NNfunction_ns_chi03_uR::synapse0x35ae220() {
   return (neuron0x359c340()*0.591348);
}

double NNfunction_ns_chi03_uR::synapse0x35ae260() {
   return (neuron0x359c680()*-0.888603);
}

double NNfunction_ns_chi03_uR::synapse0x35c0130() {
   return (neuron0x3597a30()*0.198044);
}

double NNfunction_ns_chi03_uR::synapse0x35c0170() {
   return (neuron0x3597ce0()*-0.0814928);
}

double NNfunction_ns_chi03_uR::synapse0x35c01b0() {
   return (neuron0x3598020()*-3.89493);
}

double NNfunction_ns_chi03_uR::synapse0x35c01f0() {
   return (neuron0x3598360()*-0.171916);
}

double NNfunction_ns_chi03_uR::synapse0x35c0230() {
   return (neuron0x35986a0()*0.138335);
}

double NNfunction_ns_chi03_uR::synapse0x35c0270() {
   return (neuron0x35989e0()*0.027464);
}

double NNfunction_ns_chi03_uR::synapse0x35c02b0() {
   return (neuron0x3598d20()*0.0536623);
}

double NNfunction_ns_chi03_uR::synapse0x35c02f0() {
   return (neuron0x3599060()*-0.0228787);
}

double NNfunction_ns_chi03_uR::synapse0x35c0330() {
   return (neuron0x35993a0()*0.0782128);
}

double NNfunction_ns_chi03_uR::synapse0x35c0370() {
   return (neuron0x35996e0()*-0.241925);
}

double NNfunction_ns_chi03_uR::synapse0x35c03b0() {
   return (neuron0x3599a20()*-0.272399);
}

double NNfunction_ns_chi03_uR::synapse0x35c03f0() {
   return (neuron0x3599d60()*0.141277);
}

double NNfunction_ns_chi03_uR::synapse0x35c0430() {
   return (neuron0x359a0a0()*-0.311818);
}

double NNfunction_ns_chi03_uR::synapse0x35c0470() {
   return (neuron0x359a3e0()*-0.0956138);
}

double NNfunction_ns_chi03_uR::synapse0x35c04b0() {
   return (neuron0x359a720()*1.18322);
}

double NNfunction_ns_chi03_uR::synapse0x35c04f0() {
   return (neuron0x359aa60()*-0.421327);
}

double NNfunction_ns_chi03_uR::synapse0x35ae2a0() {
   return (neuron0x359ada0()*-0.283496);
}

double NNfunction_ns_chi03_uR::synapse0x35ae2e0() {
   return (neuron0x359b300()*0.392347);
}

double NNfunction_ns_chi03_uR::synapse0x35c0640() {
   return (neuron0x359b640()*0.041401);
}

double NNfunction_ns_chi03_uR::synapse0x35c0680() {
   return (neuron0x359b980()*0.637604);
}

double NNfunction_ns_chi03_uR::synapse0x35c06c0() {
   return (neuron0x359bcc0()*0.329569);
}

double NNfunction_ns_chi03_uR::synapse0x35c0700() {
   return (neuron0x359c000()*0.389254);
}

double NNfunction_ns_chi03_uR::synapse0x35c0740() {
   return (neuron0x359c340()*0.199555);
}

double NNfunction_ns_chi03_uR::synapse0x35c0780() {
   return (neuron0x359c680()*-1.16977);
}

double NNfunction_ns_chi03_uR::synapse0x35c0b00() {
   return (neuron0x3597a30()*-0.241186);
}

double NNfunction_ns_chi03_uR::synapse0x35c0b40() {
   return (neuron0x3597ce0()*-5.73568);
}

double NNfunction_ns_chi03_uR::synapse0x35c0b80() {
   return (neuron0x3598020()*3.04499);
}

double NNfunction_ns_chi03_uR::synapse0x35c0bc0() {
   return (neuron0x3598360()*0.0352819);
}

double NNfunction_ns_chi03_uR::synapse0x35c0c00() {
   return (neuron0x35986a0()*-0.0576346);
}

double NNfunction_ns_chi03_uR::synapse0x35c0c40() {
   return (neuron0x35989e0()*0.114474);
}

double NNfunction_ns_chi03_uR::synapse0x35c0c80() {
   return (neuron0x3598d20()*0.0102338);
}

double NNfunction_ns_chi03_uR::synapse0x35c0cc0() {
   return (neuron0x3599060()*0.0560694);
}

double NNfunction_ns_chi03_uR::synapse0x35c0d00() {
   return (neuron0x35993a0()*-0.023382);
}

double NNfunction_ns_chi03_uR::synapse0x35c0d40() {
   return (neuron0x35996e0()*0.0355724);
}

double NNfunction_ns_chi03_uR::synapse0x35c0d80() {
   return (neuron0x3599a20()*-0.0206552);
}

double NNfunction_ns_chi03_uR::synapse0x35c0dc0() {
   return (neuron0x3599d60()*0.0459059);
}

double NNfunction_ns_chi03_uR::synapse0x35c0e00() {
   return (neuron0x359a0a0()*-0.0494226);
}

double NNfunction_ns_chi03_uR::synapse0x35c0e40() {
   return (neuron0x359a3e0()*0.0413799);
}

double NNfunction_ns_chi03_uR::synapse0x35c0e80() {
   return (neuron0x359a720()*-0.115135);
}

double NNfunction_ns_chi03_uR::synapse0x35c0ec0() {
   return (neuron0x359aa60()*-0.0845658);
}

double NNfunction_ns_chi03_uR::synapse0x35c0950() {
   return (neuron0x359ada0()*-0.0361495);
}

double NNfunction_ns_chi03_uR::synapse0x35c0990() {
   return (neuron0x359b300()*-0.0484188);
}

double NNfunction_ns_chi03_uR::synapse0x35c1010() {
   return (neuron0x359b640()*0.00870351);
}

double NNfunction_ns_chi03_uR::synapse0x35c1050() {
   return (neuron0x359b980()*0.0554404);
}

double NNfunction_ns_chi03_uR::synapse0x35c1090() {
   return (neuron0x359bcc0()*0.0210526);
}

double NNfunction_ns_chi03_uR::synapse0x35c10d0() {
   return (neuron0x359c000()*0.0138164);
}

double NNfunction_ns_chi03_uR::synapse0x35c1110() {
   return (neuron0x359c340()*0.0839262);
}

double NNfunction_ns_chi03_uR::synapse0x35c1150() {
   return (neuron0x359c680()*-0.138967);
}

double NNfunction_ns_chi03_uR::synapse0x35c14d0() {
   return (neuron0x3597a30()*0.127769);
}

double NNfunction_ns_chi03_uR::synapse0x35c1510() {
   return (neuron0x3597ce0()*3.38131);
}

double NNfunction_ns_chi03_uR::synapse0x35c1550() {
   return (neuron0x3598020()*-1.73196);
}

double NNfunction_ns_chi03_uR::synapse0x35c1590() {
   return (neuron0x3598360()*-0.0396639);
}

double NNfunction_ns_chi03_uR::synapse0x35c15d0() {
   return (neuron0x35986a0()*-0.0281841);
}

double NNfunction_ns_chi03_uR::synapse0x35c1610() {
   return (neuron0x35989e0()*0.0342488);
}

double NNfunction_ns_chi03_uR::synapse0x35c1650() {
   return (neuron0x3598d20()*0.0337921);
}

double NNfunction_ns_chi03_uR::synapse0x35c1690() {
   return (neuron0x3599060()*0.0317311);
}

double NNfunction_ns_chi03_uR::synapse0x35c16d0() {
   return (neuron0x35993a0()*0.0766941);
}

double NNfunction_ns_chi03_uR::synapse0x35c1710() {
   return (neuron0x35996e0()*-0.0658422);
}

double NNfunction_ns_chi03_uR::synapse0x35c1750() {
   return (neuron0x3599a20()*-0.0404149);
}

double NNfunction_ns_chi03_uR::synapse0x35c1790() {
   return (neuron0x3599d60()*-0.04828);
}

double NNfunction_ns_chi03_uR::synapse0x35c17d0() {
   return (neuron0x359a0a0()*0.0482137);
}

double NNfunction_ns_chi03_uR::synapse0x35c1810() {
   return (neuron0x359a3e0()*0.0144081);
}

double NNfunction_ns_chi03_uR::synapse0x35c1850() {
   return (neuron0x359a720()*-0.119133);
}

double NNfunction_ns_chi03_uR::synapse0x35c1890() {
   return (neuron0x359aa60()*0.0261881);
}

double NNfunction_ns_chi03_uR::synapse0x35c1320() {
   return (neuron0x359ada0()*-0.00353502);
}

double NNfunction_ns_chi03_uR::synapse0x35c1360() {
   return (neuron0x359b300()*0.0695811);
}

double NNfunction_ns_chi03_uR::synapse0x35c19e0() {
   return (neuron0x359b640()*0.0580164);
}

double NNfunction_ns_chi03_uR::synapse0x35c1a20() {
   return (neuron0x359b980()*-0.0177754);
}

double NNfunction_ns_chi03_uR::synapse0x35c1a60() {
   return (neuron0x359bcc0()*0.0711232);
}

double NNfunction_ns_chi03_uR::synapse0x35c1aa0() {
   return (neuron0x359c000()*-0.000813105);
}

double NNfunction_ns_chi03_uR::synapse0x35c1ae0() {
   return (neuron0x359c340()*-0.0450316);
}

double NNfunction_ns_chi03_uR::synapse0x35c1b20() {
   return (neuron0x359c680()*-2.44179);
}

double NNfunction_ns_chi03_uR::synapse0x35c1ea0() {
   return (neuron0x3597a30()*0.100068);
}

double NNfunction_ns_chi03_uR::synapse0x35c1ee0() {
   return (neuron0x3597ce0()*-1.28324);
}

double NNfunction_ns_chi03_uR::synapse0x35c1f20() {
   return (neuron0x3598020()*5.76782);
}

double NNfunction_ns_chi03_uR::synapse0x35c1f60() {
   return (neuron0x3598360()*0.18184);
}

double NNfunction_ns_chi03_uR::synapse0x35c1fa0() {
   return (neuron0x35986a0()*0.0881438);
}

double NNfunction_ns_chi03_uR::synapse0x35c1fe0() {
   return (neuron0x35989e0()*0.0203386);
}

double NNfunction_ns_chi03_uR::synapse0x35c2020() {
   return (neuron0x3598d20()*-0.0905052);
}

double NNfunction_ns_chi03_uR::synapse0x35c2060() {
   return (neuron0x3599060()*0.0246166);
}

double NNfunction_ns_chi03_uR::synapse0x35c20a0() {
   return (neuron0x35993a0()*-0.229813);
}

double NNfunction_ns_chi03_uR::synapse0x35c20e0() {
   return (neuron0x35996e0()*0.219108);
}

double NNfunction_ns_chi03_uR::synapse0x35c2120() {
   return (neuron0x3599a20()*0.146203);
}

double NNfunction_ns_chi03_uR::synapse0x35c2160() {
   return (neuron0x3599d60()*0.0551684);
}

double NNfunction_ns_chi03_uR::synapse0x35c21a0() {
   return (neuron0x359a0a0()*-0.0405014);
}

double NNfunction_ns_chi03_uR::synapse0x35c21e0() {
   return (neuron0x359a3e0()*0.163054);
}

double NNfunction_ns_chi03_uR::synapse0x35c2220() {
   return (neuron0x359a720()*0.600055);
}

double NNfunction_ns_chi03_uR::synapse0x35c2260() {
   return (neuron0x359aa60()*0.0788905);
}

double NNfunction_ns_chi03_uR::synapse0x35c1cf0() {
   return (neuron0x359ada0()*-0.0210236);
}

double NNfunction_ns_chi03_uR::synapse0x35c1d30() {
   return (neuron0x359b300()*0.188623);
}

double NNfunction_ns_chi03_uR::synapse0x35c23b0() {
   return (neuron0x359b640()*-0.0666851);
}

double NNfunction_ns_chi03_uR::synapse0x35c23f0() {
   return (neuron0x359b980()*0.0435343);
}

double NNfunction_ns_chi03_uR::synapse0x35c2430() {
   return (neuron0x359bcc0()*0.0446646);
}

double NNfunction_ns_chi03_uR::synapse0x35c2470() {
   return (neuron0x359c000()*-0.0232604);
}

double NNfunction_ns_chi03_uR::synapse0x35c24b0() {
   return (neuron0x359c340()*0.017429);
}

double NNfunction_ns_chi03_uR::synapse0x35c24f0() {
   return (neuron0x359c680()*0.0210483);
}

double NNfunction_ns_chi03_uR::synapse0x3362360() {
   return (neuron0x359caf0()*0.816815);
}

double NNfunction_ns_chi03_uR::synapse0x33623a0() {
   return (neuron0x359d330()*-0.475515);
}

double NNfunction_ns_chi03_uR::synapse0x359eea0() {
   return (neuron0x359de10()*-3.92511);
}

double NNfunction_ns_chi03_uR::synapse0x359eee0() {
   return (neuron0x359d8b0()*0.951174);
}

double NNfunction_ns_chi03_uR::synapse0x35a0970() {
   return (neuron0x359ebf0()*-1.14451);
}

double NNfunction_ns_chi03_uR::synapse0x35a09b0() {
   return (neuron0x35a06c0()*0.96364);
}

double NNfunction_ns_chi03_uR::synapse0x35a1740() {
   return (neuron0x35a1490()*-2.04639);
}

double NNfunction_ns_chi03_uR::synapse0x35a1780() {
   return (neuron0x35a1e60()*3.52808);
}

double NNfunction_ns_chi03_uR::synapse0x35a2110() {
   return (neuron0x35a2830()*4.19406);
}

double NNfunction_ns_chi03_uR::synapse0x35a2150() {
   return (neuron0x35a3310()*-1.04324);
}

double NNfunction_ns_chi03_uR::synapse0x35a2ae0() {
   return (neuron0x35a3ce0()*0.886552);
}

double NNfunction_ns_chi03_uR::synapse0x35a2b20() {
   return (neuron0x35a0dc0()*4.17988);
}

double NNfunction_ns_chi03_uR::synapse0x35a35c0() {
   return (neuron0x35a5890()*-0.710465);
}

double NNfunction_ns_chi03_uR::synapse0x35a3600() {
   return (neuron0x35a6260()*-0.157089);
}

double NNfunction_ns_chi03_uR::synapse0x35a3f90() {
   return (neuron0x35a6c30()*-0.787954);
}

double NNfunction_ns_chi03_uR::synapse0x35a3fd0() {
   return (neuron0x35a7600()*0.757153);
}

double NNfunction_ns_chi03_uR::synapse0x35a1070() {
   return (neuron0x35a9410()*-1.74132);
}

double NNfunction_ns_chi03_uR::synapse0x35a10b0() {
   return (neuron0x35a96f0()*-1.87447);
}

double NNfunction_ns_chi03_uR::synapse0x35a5b40() {
   return (neuron0x35aa0c0()*0.82574);
}

double NNfunction_ns_chi03_uR::synapse0x35a5b80() {
   return (neuron0x35aaa90()*4.44849);
}

double NNfunction_ns_chi03_uR::synapse0x35a6510() {
   return (neuron0x35ab460()*10.251);
}

double NNfunction_ns_chi03_uR::synapse0x35a6550() {
   return (neuron0x35abe30()*1.56354);
}

double NNfunction_ns_chi03_uR::synapse0x35a6ee0() {
   return (neuron0x35a4980()*-1.40536);
}

double NNfunction_ns_chi03_uR::synapse0x35a6f20() {
   return (neuron0x35a5350()*-1.29238);
}

double NNfunction_ns_chi03_uR::synapse0x35a78b0() {
   return (neuron0x35aebc0()*-0.568028);
}

double NNfunction_ns_chi03_uR::synapse0x35a78f0() {
   return (neuron0x35af590()*-5.97288);
}

double NNfunction_ns_chi03_uR::synapse0x359a940() {
   return (neuron0x35aff60()*4.33952);
}

double NNfunction_ns_chi03_uR::synapse0x359a980() {
   return (neuron0x35b0930()*1.93288);
}

double NNfunction_ns_chi03_uR::synapse0x35a99a0() {
   return (neuron0x35b1300()*-2.81555);
}

double NNfunction_ns_chi03_uR::synapse0x35a99e0() {
   return (neuron0x35b1cd0()*0.633782);
}

double NNfunction_ns_chi03_uR::synapse0x35aa370() {
   return (neuron0x35b26a0()*-0.515074);
}

double NNfunction_ns_chi03_uR::synapse0x35aa3b0() {
   return (neuron0x35b3070()*1.52146);
}

double NNfunction_ns_chi03_uR::synapse0x35aad40() {
   return (neuron0x35a9100()*1.74399);
}

double NNfunction_ns_chi03_uR::synapse0x35aad80() {
   return (neuron0x35b5c50()*-0.261793);
}

double NNfunction_ns_chi03_uR::synapse0x35ab710() {
   return (neuron0x35b6620()*-1.94439);
}

double NNfunction_ns_chi03_uR::synapse0x35ab750() {
   return (neuron0x35b6ff0()*-1.07214);
}

double NNfunction_ns_chi03_uR::synapse0x35ac0e0() {
   return (neuron0x35b79c0()*-2.15206);
}

double NNfunction_ns_chi03_uR::synapse0x35ac120() {
   return (neuron0x35b8390()*0.865105);
}

double NNfunction_ns_chi03_uR::synapse0x35a4c30() {
   return (neuron0x35b8d60()*1.21713);
}

double NNfunction_ns_chi03_uR::synapse0x35a4c70() {
   return (neuron0x35b9730()*-3.36294);
}

double NNfunction_ns_chi03_uR::synapse0x35ae4e0() {
   return (neuron0x35ba100()*-2.97548);
}

double NNfunction_ns_chi03_uR::synapse0x35ae520() {
   return (neuron0x35bace0()*5.26534);
}

double NNfunction_ns_chi03_uR::synapse0x35aee70() {
   return (neuron0x35bb6b0()*0.0857033);
}

double NNfunction_ns_chi03_uR::synapse0x35aeeb0() {
   return (neuron0x35ac530()*1.16624);
}

double NNfunction_ns_chi03_uR::synapse0x35af840() {
   return (neuron0x35acf00()*-2.65818);
}

double NNfunction_ns_chi03_uR::synapse0x35af880() {
   return (neuron0x35ad8d0()*1.03916);
}

double NNfunction_ns_chi03_uR::synapse0x35b0210() {
   return (neuron0x35bff10()*1.42533);
}

double NNfunction_ns_chi03_uR::synapse0x35b0250() {
   return (neuron0x35c07c0()*-6.38322);
}

double NNfunction_ns_chi03_uR::synapse0x35b0be0() {
   return (neuron0x35c1190()*3.79488);
}

double NNfunction_ns_chi03_uR::synapse0x35b0c20() {
   return (neuron0x35c1b60()*-6.24576);
}

double NNfunction_ns_chi03_uR::synapse0x35b3320() {
   return (neuron0x359caf0()*-0.179785);
}

double NNfunction_ns_chi03_uR::synapse0x35b3360() {
   return (neuron0x359d330()*0.697987);
}

double NNfunction_ns_chi03_uR::synapse0x35a88e0() {
   return (neuron0x359de10()*-0.404437);
}

double NNfunction_ns_chi03_uR::synapse0x35a8920() {
   return (neuron0x359d8b0()*-0.180947);
}

double NNfunction_ns_chi03_uR::synapse0x35b5f00() {
   return (neuron0x359ebf0()*0.846056);
}

double NNfunction_ns_chi03_uR::synapse0x35b5f40() {
   return (neuron0x35a06c0()*-0.0921718);
}

double NNfunction_ns_chi03_uR::synapse0x35b68d0() {
   return (neuron0x35a1490()*-0.0456956);
}

double NNfunction_ns_chi03_uR::synapse0x35b6910() {
   return (neuron0x35a1e60()*-0.676934);
}

double NNfunction_ns_chi03_uR::synapse0x35b72a0() {
   return (neuron0x35a2830()*0.963089);
}

double NNfunction_ns_chi03_uR::synapse0x35b72e0() {
   return (neuron0x35a3310()*0.179019);
}

double NNfunction_ns_chi03_uR::synapse0x35b7c70() {
   return (neuron0x35a3ce0()*0.0814273);
}

double NNfunction_ns_chi03_uR::synapse0x35b7cb0() {
   return (neuron0x35a0dc0()*0.15963);
}

double NNfunction_ns_chi03_uR::synapse0x35b8640() {
   return (neuron0x35a5890()*0.146859);
}

double NNfunction_ns_chi03_uR::synapse0x35b8680() {
   return (neuron0x35a6260()*0.175764);
}

double NNfunction_ns_chi03_uR::synapse0x35b9010() {
   return (neuron0x35a6c30()*-0.714694);
}

double NNfunction_ns_chi03_uR::synapse0x35b9050() {
   return (neuron0x35a7600()*-0.391091);
}

double NNfunction_ns_chi03_uR::synapse0x35b99e0() {
   return (neuron0x35a9410()*-0.272967);
}

double NNfunction_ns_chi03_uR::synapse0x35b9a20() {
   return (neuron0x35a96f0()*-0.590596);
}

double NNfunction_ns_chi03_uR::synapse0x35ba3b0() {
   return (neuron0x35aa0c0()*-0.102503);
}

double NNfunction_ns_chi03_uR::synapse0x35ba3f0() {
   return (neuron0x35aaa90()*0.0121791);
}

double NNfunction_ns_chi03_uR::synapse0x35baf90() {
   return (neuron0x35ab460()*-1.74013);
}

double NNfunction_ns_chi03_uR::synapse0x35bafd0() {
   return (neuron0x35abe30()*0.13014);
}

double NNfunction_ns_chi03_uR::synapse0x35bb960() {
   return (neuron0x35a4980()*0.48452);
}

double NNfunction_ns_chi03_uR::synapse0x35bb9a0() {
   return (neuron0x35a5350()*-1.12292);
}

double NNfunction_ns_chi03_uR::synapse0x35ac7e0() {
   return (neuron0x35aebc0()*-0.823673);
}

double NNfunction_ns_chi03_uR::synapse0x35ac820() {
   return (neuron0x35af590()*-0.0687355);
}

double NNfunction_ns_chi03_uR::synapse0x35ad1b0() {
   return (neuron0x35aff60()*0.420824);
}

double NNfunction_ns_chi03_uR::synapse0x35ad1f0() {
   return (neuron0x35b0930()*0.445101);
}

double NNfunction_ns_chi03_uR::synapse0x35adb80() {
   return (neuron0x35b1300()*-0.580939);
}

double NNfunction_ns_chi03_uR::synapse0x35adbc0() {
   return (neuron0x35b1cd0()*-0.173054);
}

double NNfunction_ns_chi03_uR::synapse0x35c00a0() {
   return (neuron0x35b26a0()*-0.395808);
}

double NNfunction_ns_chi03_uR::synapse0x35c00e0() {
   return (neuron0x35b3070()*-0.0681385);
}

double NNfunction_ns_chi03_uR::synapse0x35c0a70() {
   return (neuron0x35a9100()*-1.48687);
}

double NNfunction_ns_chi03_uR::synapse0x35c0ab0() {
   return (neuron0x35b5c50()*-0.803049);
}

double NNfunction_ns_chi03_uR::synapse0x35c1440() {
   return (neuron0x35b6620()*0.261311);
}

double NNfunction_ns_chi03_uR::synapse0x35c1480() {
   return (neuron0x35b6ff0()*-0.0292875);
}

double NNfunction_ns_chi03_uR::synapse0x35c1e10() {
   return (neuron0x35b79c0()*-0.349808);
}

double NNfunction_ns_chi03_uR::synapse0x35c1e50() {
   return (neuron0x35b8390()*-0.0615808);
}

double NNfunction_ns_chi03_uR::synapse0x359cda0() {
   return (neuron0x35b8d60()*0.610772);
}

double NNfunction_ns_chi03_uR::synapse0x359cde0() {
   return (neuron0x35b9730()*0.04598);
}

double NNfunction_ns_chi03_uR::synapse0x35b15b0() {
   return (neuron0x35ba100()*-0.0150533);
}

double NNfunction_ns_chi03_uR::synapse0x35b15f0() {
   return (neuron0x35bace0()*0.209406);
}

double NNfunction_ns_chi03_uR::synapse0x35c2530() {
   return (neuron0x35bb6b0()*0.964238);
}

double NNfunction_ns_chi03_uR::synapse0x35c2570() {
   return (neuron0x35ac530()*0.0727048);
}

double NNfunction_ns_chi03_uR::synapse0x35c25b0() {
   return (neuron0x35acf00()*0.507548);
}

double NNfunction_ns_chi03_uR::synapse0x35c25f0() {
   return (neuron0x35ad8d0()*-0.14894);
}

double NNfunction_ns_chi03_uR::synapse0x35c94a0() {
   return (neuron0x35bff10()*0.0851347);
}

double NNfunction_ns_chi03_uR::synapse0x35c94e0() {
   return (neuron0x35c07c0()*0.249535);
}

double NNfunction_ns_chi03_uR::synapse0x35c9520() {
   return (neuron0x35c1190()*0.188329);
}

double NNfunction_ns_chi03_uR::synapse0x35c9560() {
   return (neuron0x35c1b60()*0.13316);
}

double NNfunction_ns_chi03_uR::synapse0x35c98e0() {
   return (neuron0x359caf0()*-2.69977);
}

double NNfunction_ns_chi03_uR::synapse0x35c9920() {
   return (neuron0x359d330()*-2.01335);
}

double NNfunction_ns_chi03_uR::synapse0x35c9960() {
   return (neuron0x359de10()*-0.00256373);
}

double NNfunction_ns_chi03_uR::synapse0x35c99a0() {
   return (neuron0x359d8b0()*0.0597216);
}

double NNfunction_ns_chi03_uR::synapse0x35c99e0() {
   return (neuron0x359ebf0()*0.289057);
}

double NNfunction_ns_chi03_uR::synapse0x35c9a20() {
   return (neuron0x35a06c0()*0.0107036);
}

double NNfunction_ns_chi03_uR::synapse0x35c9a60() {
   return (neuron0x35a1490()*0.0400369);
}

double NNfunction_ns_chi03_uR::synapse0x35c9aa0() {
   return (neuron0x35a1e60()*0.173992);
}

double NNfunction_ns_chi03_uR::synapse0x35c9ae0() {
   return (neuron0x35a2830()*0.743825);
}

double NNfunction_ns_chi03_uR::synapse0x35c9b20() {
   return (neuron0x35a3310()*-0.0931651);
}

double NNfunction_ns_chi03_uR::synapse0x35c9b60() {
   return (neuron0x35a3ce0()*-0.00594192);
}

double NNfunction_ns_chi03_uR::synapse0x35c9ba0() {
   return (neuron0x35a0dc0()*-0.19601);
}

double NNfunction_ns_chi03_uR::synapse0x35c9be0() {
   return (neuron0x35a5890()*-0.0629269);
}

double NNfunction_ns_chi03_uR::synapse0x35c9c20() {
   return (neuron0x35a6260()*-0.108297);
}

double NNfunction_ns_chi03_uR::synapse0x35c9c60() {
   return (neuron0x35a6c30()*-0.111286);
}

double NNfunction_ns_chi03_uR::synapse0x35c9ca0() {
   return (neuron0x35a7600()*0.0920687);
}

double NNfunction_ns_chi03_uR::synapse0x35c9730() {
   return (neuron0x35a9410()*3.5298);
}

double NNfunction_ns_chi03_uR::synapse0x35c9770() {
   return (neuron0x35a96f0()*3.52656);
}

double NNfunction_ns_chi03_uR::synapse0x35c9df0() {
   return (neuron0x35aa0c0()*0.0267944);
}

double NNfunction_ns_chi03_uR::synapse0x35c9e30() {
   return (neuron0x35aaa90()*0.167048);
}

double NNfunction_ns_chi03_uR::synapse0x35c9e70() {
   return (neuron0x35ab460()*-1.37495);
}

double NNfunction_ns_chi03_uR::synapse0x35c9eb0() {
   return (neuron0x35abe30()*-0.0662267);
}

double NNfunction_ns_chi03_uR::synapse0x35c9ef0() {
   return (neuron0x35a4980()*0.921086);
}

double NNfunction_ns_chi03_uR::synapse0x35c9f30() {
   return (neuron0x35a5350()*2.31003);
}

double NNfunction_ns_chi03_uR::synapse0x35c9f70() {
   return (neuron0x35aebc0()*2.22391);
}

double NNfunction_ns_chi03_uR::synapse0x35c9fb0() {
   return (neuron0x35af590()*-0.147999);
}

double NNfunction_ns_chi03_uR::synapse0x35c9ff0() {
   return (neuron0x35aff60()*0.0959661);
}

double NNfunction_ns_chi03_uR::synapse0x35ca030() {
   return (neuron0x35b0930()*0.278769);
}

double NNfunction_ns_chi03_uR::synapse0x35ca070() {
   return (neuron0x35b1300()*-0.18989);
}

double NNfunction_ns_chi03_uR::synapse0x35ca0b0() {
   return (neuron0x35b1cd0()*0.0362664);
}

double NNfunction_ns_chi03_uR::synapse0x35ca0f0() {
   return (neuron0x35b26a0()*3.09165);
}

double NNfunction_ns_chi03_uR::synapse0x35ca130() {
   return (neuron0x35b3070()*0.0682531);
}

double NNfunction_ns_chi03_uR::synapse0x35c9ce0() {
   return (neuron0x35a9100()*-1.04763);
}

double NNfunction_ns_chi03_uR::synapse0x35c9d20() {
   return (neuron0x35b5c50()*-1.8634);
}

double NNfunction_ns_chi03_uR::synapse0x35c9d60() {
   return (neuron0x35b6620()*0.00454652);
}

double NNfunction_ns_chi03_uR::synapse0x35c9da0() {
   return (neuron0x35b6ff0()*-2.52873);
}

double NNfunction_ns_chi03_uR::synapse0x35ca380() {
   return (neuron0x35b79c0()*0.00730048);
}

double NNfunction_ns_chi03_uR::synapse0x35ca3c0() {
   return (neuron0x35b8390()*0.00657889);
}

double NNfunction_ns_chi03_uR::synapse0x35ca400() {
   return (neuron0x35b8d60()*-0.728898);
}

double NNfunction_ns_chi03_uR::synapse0x35ca440() {
   return (neuron0x35b9730()*-0.47188);
}

double NNfunction_ns_chi03_uR::synapse0x35ca480() {
   return (neuron0x35ba100()*1.0036);
}

double NNfunction_ns_chi03_uR::synapse0x35ca4c0() {
   return (neuron0x35bace0()*0.0776911);
}

double NNfunction_ns_chi03_uR::synapse0x35ca500() {
   return (neuron0x35bb6b0()*0.234385);
}

double NNfunction_ns_chi03_uR::synapse0x35ca540() {
   return (neuron0x35ac530()*-0.0258564);
}

double NNfunction_ns_chi03_uR::synapse0x35ca580() {
   return (neuron0x35acf00()*0.445719);
}

double NNfunction_ns_chi03_uR::synapse0x35ca5c0() {
   return (neuron0x35ad8d0()*0.0037581);
}

double NNfunction_ns_chi03_uR::synapse0x35ca600() {
   return (neuron0x35bff10()*-0.028337);
}

double NNfunction_ns_chi03_uR::synapse0x35ca640() {
   return (neuron0x35c07c0()*-0.0892068);
}

double NNfunction_ns_chi03_uR::synapse0x35ca680() {
   return (neuron0x35c1190()*0.22376);
}

double NNfunction_ns_chi03_uR::synapse0x35ca6c0() {
   return (neuron0x35c1b60()*0.0347968);
}

double NNfunction_ns_chi03_uR::synapse0x35caa40() {
   return (neuron0x359caf0()*-0.430213);
}

double NNfunction_ns_chi03_uR::synapse0x35caa80() {
   return (neuron0x359d330()*-1.99401);
}

double NNfunction_ns_chi03_uR::synapse0x35caac0() {
   return (neuron0x359de10()*-0.154831);
}

double NNfunction_ns_chi03_uR::synapse0x35cab00() {
   return (neuron0x359d8b0()*0.0314597);
}

double NNfunction_ns_chi03_uR::synapse0x35cab40() {
   return (neuron0x359ebf0()*0.164472);
}

double NNfunction_ns_chi03_uR::synapse0x35cab80() {
   return (neuron0x35a06c0()*0.0435319);
}

double NNfunction_ns_chi03_uR::synapse0x35cabc0() {
   return (neuron0x35a1490()*-0.0296656);
}

double NNfunction_ns_chi03_uR::synapse0x35cac00() {
   return (neuron0x35a1e60()*4.23711);
}

double NNfunction_ns_chi03_uR::synapse0x35cac40() {
   return (neuron0x35a2830()*-0.601787);
}

double NNfunction_ns_chi03_uR::synapse0x35cac80() {
   return (neuron0x35a3310()*-0.0335501);
}

double NNfunction_ns_chi03_uR::synapse0x35cacc0() {
   return (neuron0x35a3ce0()*0.000480222);
}

double NNfunction_ns_chi03_uR::synapse0x35cad00() {
   return (neuron0x35a0dc0()*-0.449082);
}

double NNfunction_ns_chi03_uR::synapse0x35cad40() {
   return (neuron0x35a5890()*-0.0661116);
}

double NNfunction_ns_chi03_uR::synapse0x35cad80() {
   return (neuron0x35a6260()*-0.0727765);
}

double NNfunction_ns_chi03_uR::synapse0x35cadc0() {
   return (neuron0x35a6c30()*0.0298898);
}

double NNfunction_ns_chi03_uR::synapse0x35cae00() {
   return (neuron0x35a7600()*0.0599019);
}

double NNfunction_ns_chi03_uR::synapse0x35ca890() {
   return (neuron0x35a9410()*2.3689);
}

double NNfunction_ns_chi03_uR::synapse0x35ca8d0() {
   return (neuron0x35a96f0()*2.38308);
}

double NNfunction_ns_chi03_uR::synapse0x35caf50() {
   return (neuron0x35aa0c0()*0.051963);
}

double NNfunction_ns_chi03_uR::synapse0x35caf90() {
   return (neuron0x35aaa90()*-0.157608);
}

double NNfunction_ns_chi03_uR::synapse0x35cafd0() {
   return (neuron0x35ab460()*1.27325);
}

double NNfunction_ns_chi03_uR::synapse0x35cb010() {
   return (neuron0x35abe30()*-0.0119953);
}

double NNfunction_ns_chi03_uR::synapse0x35cb050() {
   return (neuron0x35a4980()*0.225074);
}

double NNfunction_ns_chi03_uR::synapse0x35cb090() {
   return (neuron0x35a5350()*1.60645);
}

double NNfunction_ns_chi03_uR::synapse0x35cb0d0() {
   return (neuron0x35aebc0()*1.53738);
}

double NNfunction_ns_chi03_uR::synapse0x35cb110() {
   return (neuron0x35af590()*0.0692097);
}

double NNfunction_ns_chi03_uR::synapse0x35cb150() {
   return (neuron0x35aff60()*2.50108);
}

double NNfunction_ns_chi03_uR::synapse0x35cb190() {
   return (neuron0x35b0930()*2.86506);
}

double NNfunction_ns_chi03_uR::synapse0x35cb1d0() {
   return (neuron0x35b1300()*-1.38477);
}

double NNfunction_ns_chi03_uR::synapse0x35cb210() {
   return (neuron0x35b1cd0()*0.0568792);
}

double NNfunction_ns_chi03_uR::synapse0x35cb250() {
   return (neuron0x35b26a0()*3.10189);
}

double NNfunction_ns_chi03_uR::synapse0x35cb290() {
   return (neuron0x35b3070()*0.0545987);
}

double NNfunction_ns_chi03_uR::synapse0x35cae40() {
   return (neuron0x35a9100()*0.551053);
}

double NNfunction_ns_chi03_uR::synapse0x35cae80() {
   return (neuron0x35b5c50()*0.524199);
}

double NNfunction_ns_chi03_uR::synapse0x35caec0() {
   return (neuron0x35b6620()*-0.0711704);
}

double NNfunction_ns_chi03_uR::synapse0x35caf00() {
   return (neuron0x35b6ff0()*-0.632705);
}

double NNfunction_ns_chi03_uR::synapse0x35cb4e0() {
   return (neuron0x35b79c0()*0.111198);
}

double NNfunction_ns_chi03_uR::synapse0x35cb520() {
   return (neuron0x35b8390()*0.00450103);
}

double NNfunction_ns_chi03_uR::synapse0x35cb560() {
   return (neuron0x35b8d60()*-0.581054);
}

double NNfunction_ns_chi03_uR::synapse0x35cb5a0() {
   return (neuron0x35b9730()*-0.0195639);
}

double NNfunction_ns_chi03_uR::synapse0x35cb5e0() {
   return (neuron0x35ba100()*-0.049766);
}

double NNfunction_ns_chi03_uR::synapse0x35cb620() {
   return (neuron0x35bace0()*-0.0798029);
}

double NNfunction_ns_chi03_uR::synapse0x35cb660() {
   return (neuron0x35bb6b0()*0.0617136);
}

double NNfunction_ns_chi03_uR::synapse0x35cb6a0() {
   return (neuron0x35ac530()*0.0240859);
}

double NNfunction_ns_chi03_uR::synapse0x35cb6e0() {
   return (neuron0x35acf00()*-0.403512);
}

double NNfunction_ns_chi03_uR::synapse0x35cb720() {
   return (neuron0x35ad8d0()*0.0195074);
}

double NNfunction_ns_chi03_uR::synapse0x35cb760() {
   return (neuron0x35bff10()*0.0899326);
}

double NNfunction_ns_chi03_uR::synapse0x35cb7a0() {
   return (neuron0x35c07c0()*-1.85904);
}

double NNfunction_ns_chi03_uR::synapse0x35cb7e0() {
   return (neuron0x35c1190()*-0.707361);
}

double NNfunction_ns_chi03_uR::synapse0x35cb820() {
   return (neuron0x35c1b60()*-0.151786);
}

double NNfunction_ns_chi03_uR::synapse0x35cbba0() {
   return (neuron0x359caf0()*0.00303787);
}

double NNfunction_ns_chi03_uR::synapse0x35cbbe0() {
   return (neuron0x359d330()*-0.230827);
}

double NNfunction_ns_chi03_uR::synapse0x35cbc20() {
   return (neuron0x359de10()*-0.271647);
}

double NNfunction_ns_chi03_uR::synapse0x35cbc60() {
   return (neuron0x359d8b0()*-0.0528825);
}

double NNfunction_ns_chi03_uR::synapse0x35cbca0() {
   return (neuron0x359ebf0()*-0.831874);
}

double NNfunction_ns_chi03_uR::synapse0x35cbce0() {
   return (neuron0x35a06c0()*-0.801177);
}

double NNfunction_ns_chi03_uR::synapse0x35cbd20() {
   return (neuron0x35a1490()*-0.188388);
}

double NNfunction_ns_chi03_uR::synapse0x35cbd60() {
   return (neuron0x35a1e60()*0.0560798);
}

double NNfunction_ns_chi03_uR::synapse0x35cbda0() {
   return (neuron0x35a2830()*0.0387804);
}

double NNfunction_ns_chi03_uR::synapse0x35cbde0() {
   return (neuron0x35a3310()*0.306945);
}

double NNfunction_ns_chi03_uR::synapse0x35cbe20() {
   return (neuron0x35a3ce0()*-0.390846);
}

double NNfunction_ns_chi03_uR::synapse0x35cbe60() {
   return (neuron0x35a0dc0()*0.680883);
}

double NNfunction_ns_chi03_uR::synapse0x35cbea0() {
   return (neuron0x35a5890()*-0.682691);
}

double NNfunction_ns_chi03_uR::synapse0x35cbee0() {
   return (neuron0x35a6260()*-0.448748);
}

double NNfunction_ns_chi03_uR::synapse0x35cbf20() {
   return (neuron0x35a6c30()*-0.0818928);
}

double NNfunction_ns_chi03_uR::synapse0x35cbf60() {
   return (neuron0x35a7600()*-0.570398);
}

double NNfunction_ns_chi03_uR::synapse0x35cb9f0() {
   return (neuron0x35a9410()*-0.558281);
}

double NNfunction_ns_chi03_uR::synapse0x35cba30() {
   return (neuron0x35a96f0()*-0.522238);
}

double NNfunction_ns_chi03_uR::synapse0x35cc0b0() {
   return (neuron0x35aa0c0()*-0.263557);
}

double NNfunction_ns_chi03_uR::synapse0x35cc0f0() {
   return (neuron0x35aaa90()*-0.480101);
}

double NNfunction_ns_chi03_uR::synapse0x35cc130() {
   return (neuron0x35ab460()*-1.62563);
}

double NNfunction_ns_chi03_uR::synapse0x35cc170() {
   return (neuron0x35abe30()*0.253385);
}

double NNfunction_ns_chi03_uR::synapse0x35cc1b0() {
   return (neuron0x35a4980()*-0.436143);
}

double NNfunction_ns_chi03_uR::synapse0x35cc1f0() {
   return (neuron0x35a5350()*-1.28326);
}

double NNfunction_ns_chi03_uR::synapse0x35cc230() {
   return (neuron0x35aebc0()*-0.730097);
}

double NNfunction_ns_chi03_uR::synapse0x35cc270() {
   return (neuron0x35af590()*0.341082);
}

double NNfunction_ns_chi03_uR::synapse0x35cc2b0() {
   return (neuron0x35aff60()*-1.44179);
}

double NNfunction_ns_chi03_uR::synapse0x35cc2f0() {
   return (neuron0x35b0930()*-1.23697);
}

double NNfunction_ns_chi03_uR::synapse0x35cc330() {
   return (neuron0x35b1300()*-0.151262);
}

double NNfunction_ns_chi03_uR::synapse0x35cc370() {
   return (neuron0x35b1cd0()*-0.469189);
}

double NNfunction_ns_chi03_uR::synapse0x35cc3b0() {
   return (neuron0x35b26a0()*-0.125369);
}

double NNfunction_ns_chi03_uR::synapse0x35cc3f0() {
   return (neuron0x35b3070()*-0.472645);
}

double NNfunction_ns_chi03_uR::synapse0x35cbfa0() {
   return (neuron0x35a9100()*0.358772);
}

double NNfunction_ns_chi03_uR::synapse0x35cbfe0() {
   return (neuron0x35b5c50()*0.198146);
}

double NNfunction_ns_chi03_uR::synapse0x35cc020() {
   return (neuron0x35b6620()*-0.132891);
}

double NNfunction_ns_chi03_uR::synapse0x35cc060() {
   return (neuron0x35b6ff0()*-0.435273);
}

double NNfunction_ns_chi03_uR::synapse0x35cc640() {
   return (neuron0x35b79c0()*-0.436995);
}

double NNfunction_ns_chi03_uR::synapse0x35cc680() {
   return (neuron0x35b8390()*-0.679256);
}

double NNfunction_ns_chi03_uR::synapse0x35cc6c0() {
   return (neuron0x35b8d60()*-1.33813);
}

double NNfunction_ns_chi03_uR::synapse0x35cc700() {
   return (neuron0x35b9730()*-0.711156);
}

double NNfunction_ns_chi03_uR::synapse0x35cc740() {
   return (neuron0x35ba100()*-1.12249);
}

double NNfunction_ns_chi03_uR::synapse0x35cc780() {
   return (neuron0x35bace0()*-0.307366);
}

double NNfunction_ns_chi03_uR::synapse0x35cc7c0() {
   return (neuron0x35bb6b0()*-0.262293);
}

double NNfunction_ns_chi03_uR::synapse0x35cc800() {
   return (neuron0x35ac530()*-0.376771);
}

double NNfunction_ns_chi03_uR::synapse0x35cc840() {
   return (neuron0x35acf00()*-0.30328);
}

double NNfunction_ns_chi03_uR::synapse0x35cc880() {
   return (neuron0x35ad8d0()*-0.294927);
}

double NNfunction_ns_chi03_uR::synapse0x35cc8c0() {
   return (neuron0x35bff10()*-0.416659);
}

double NNfunction_ns_chi03_uR::synapse0x35cc900() {
   return (neuron0x35c07c0()*0.0921766);
}

double NNfunction_ns_chi03_uR::synapse0x35cc940() {
   return (neuron0x35c1190()*-0.483989);
}

double NNfunction_ns_chi03_uR::synapse0x35cc980() {
   return (neuron0x35c1b60()*-0.0282511);
}

double NNfunction_ns_chi03_uR::synapse0x35ccbe0() {
   return (neuron0x35c8d60()*-2.7139);
}

double NNfunction_ns_chi03_uR::synapse0x35ccc20() {
   return (neuron0x35c9100()*-2.04145);
}

double NNfunction_ns_chi03_uR::synapse0x35ccc60() {
   return (neuron0x35c95a0()*-13.0321);
}

double NNfunction_ns_chi03_uR::synapse0x35ccca0() {
   return (neuron0x35ca700()*-7.5652);
}

double NNfunction_ns_chi03_uR::synapse0x35ccce0() {
   return (neuron0x35cb860()*0.247269);
}

