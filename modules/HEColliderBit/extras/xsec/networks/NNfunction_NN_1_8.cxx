#include "NNfunction_NN_1_8.h"
#include <cmath>

double NNfunction_NN_1_8::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.3613)/15.1579;
   input1 = (in1 - -16.2144)/1187.27;
   input2 = (in2 - 218.332)/188.607;
   input3 = (in3 - -21.786)/844.338;
   input4 = (in4 - 1066.53)/922.475;
   input5 = (in5 - 922.278)/950.318;
   input6 = (in6 - 928.095)/948.078;
   input7 = (in7 - 944.153)/930.378;
   input8 = (in8 - 934.741)/976.416;
   input9 = (in9 - 918.732)/965.471;
   input10 = (in10 - 970.546)/954.141;
   input11 = (in11 - 652.102)/847.367;
   input12 = (in12 - 729.926)/873.622;
   input13 = (in13 - 503.161)/522.33;
   input14 = (in14 - 699.66)/798.703;
   input15 = (in15 - 704.242)/802.727;
   input16 = (in16 - 525.987)/562.153;
   input17 = (in17 - 760.072)/902.919;
   input18 = (in18 - 761.259)/904.253;
   input19 = (in19 - 773.033)/863.682;
   input20 = (in20 - -6.44613)/488.363;
   input21 = (in21 - -10.4818)/1130.76;
   input22 = (in22 - -0.139851)/1192.64;
   input23 = (in23 - -31.8416)/214.282;
   switch(index) {
     case 0:
         return neuron0x1a558f0();
     default:
         return 0.;
   }
}

double NNfunction_NN_1_8::Value(int index, double* input) {
   input0 = (input[0] - 23.3613)/15.1579;
   input1 = (input[1] - -16.2144)/1187.27;
   input2 = (input[2] - 218.332)/188.607;
   input3 = (input[3] - -21.786)/844.338;
   input4 = (input[4] - 1066.53)/922.475;
   input5 = (input[5] - 922.278)/950.318;
   input6 = (input[6] - 928.095)/948.078;
   input7 = (input[7] - 944.153)/930.378;
   input8 = (input[8] - 934.741)/976.416;
   input9 = (input[9] - 918.732)/965.471;
   input10 = (input[10] - 970.546)/954.141;
   input11 = (input[11] - 652.102)/847.367;
   input12 = (input[12] - 729.926)/873.622;
   input13 = (input[13] - 503.161)/522.33;
   input14 = (input[14] - 699.66)/798.703;
   input15 = (input[15] - 704.242)/802.727;
   input16 = (input[16] - 525.987)/562.153;
   input17 = (input[17] - 760.072)/902.919;
   input18 = (input[18] - 761.259)/904.253;
   input19 = (input[19] - 773.033)/863.682;
   input20 = (input[20] - -6.44613)/488.363;
   input21 = (input[21] - -10.4818)/1130.76;
   input22 = (input[22] - -0.139851)/1192.64;
   input23 = (input[23] - -31.8416)/214.282;
   switch(index) {
     case 0:
         return neuron0x1a558f0();
     default:
         return 0.;
   }
}

double NNfunction_NN_1_8::neuron0x1a219b0() {
   return input0;
}

double NNfunction_NN_1_8::neuron0x1a21cf0() {
   return input1;
}

double NNfunction_NN_1_8::neuron0x1a22030() {
   return input2;
}

double NNfunction_NN_1_8::neuron0x1a22370() {
   return input3;
}

double NNfunction_NN_1_8::neuron0x1a226b0() {
   return input4;
}

double NNfunction_NN_1_8::neuron0x1a229f0() {
   return input5;
}

double NNfunction_NN_1_8::neuron0x1a22d30() {
   return input6;
}

double NNfunction_NN_1_8::neuron0x1a23070() {
   return input7;
}

double NNfunction_NN_1_8::neuron0x1a233b0() {
   return input8;
}

double NNfunction_NN_1_8::neuron0x1a236f0() {
   return input9;
}

double NNfunction_NN_1_8::neuron0x1a23a30() {
   return input10;
}

double NNfunction_NN_1_8::neuron0x1a23d70() {
   return input11;
}

double NNfunction_NN_1_8::neuron0x1a240b0() {
   return input12;
}

double NNfunction_NN_1_8::neuron0x1a243f0() {
   return input13;
}

double NNfunction_NN_1_8::neuron0x1a24730() {
   return input14;
}

double NNfunction_NN_1_8::neuron0x1a24a70() {
   return input15;
}

double NNfunction_NN_1_8::neuron0x1a24db0() {
   return input16;
}

double NNfunction_NN_1_8::neuron0x1a25310() {
   return input17;
}

double NNfunction_NN_1_8::neuron0x1a25530() {
   return input18;
}

double NNfunction_NN_1_8::neuron0x1a25870() {
   return input19;
}

double NNfunction_NN_1_8::neuron0x1a25bb0() {
   return input20;
}

double NNfunction_NN_1_8::neuron0x1a25ef0() {
   return input21;
}

double NNfunction_NN_1_8::neuron0x1a26230() {
   return input22;
}

double NNfunction_NN_1_8::neuron0x1a26570() {
   return input23;
}

double NNfunction_NN_1_8::input0x1a26a10() {
   double input = 0.618972;
   input += synapse0x17e1820();
   input += synapse0x1a21870();
   input += synapse0x1a218b0();
   input += synapse0x1a26cc0();
   input += synapse0x1a26d00();
   input += synapse0x1a26d40();
   input += synapse0x1a26d80();
   input += synapse0x1a26dc0();
   input += synapse0x1a26e00();
   input += synapse0x1a26e40();
   input += synapse0x1a26e80();
   input += synapse0x1a26ec0();
   input += synapse0x1a26f00();
   input += synapse0x1a26f40();
   input += synapse0x1a26f80();
   input += synapse0x1a26fc0();
   input += synapse0x1a217e0();
   input += synapse0x1a21820();
   input += synapse0x17d3080();
   input += synapse0x17d30c0();
   input += synapse0x1a27220();
   input += synapse0x1a27260();
   input += synapse0x1a272a0();
   input += synapse0x1a272e0();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a26a10() {
   double input = input0x1a26a10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a27320() {
   double input = -3.77269;
   input += synapse0x1a27660();
   input += synapse0x1a276a0();
   input += synapse0x1a276e0();
   input += synapse0x1a27720();
   input += synapse0x1a27760();
   input += synapse0x1a277a0();
   input += synapse0x1a277e0();
   input += synapse0x1a27820();
   input += synapse0x1a27860();
   input += synapse0x1a27110();
   input += synapse0x1a27150();
   input += synapse0x1a27190();
   input += synapse0x1a271d0();
   input += synapse0x1a27ab0();
   input += synapse0x1a27af0();
   input += synapse0x1a27b30();
   input += synapse0x1a274b0();
   input += synapse0x1a274f0();
   input += synapse0x1a27c80();
   input += synapse0x1a27cc0();
   input += synapse0x1a27d00();
   input += synapse0x1a27d40();
   input += synapse0x1a27d80();
   input += synapse0x1a27dc0();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a27320() {
   double input = input0x1a27320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a27e00() {
   double input = -0.269155;
   input += synapse0x1a28140();
   input += synapse0x1a28180();
   input += synapse0x1a281c0();
   input += synapse0x1a28200();
   input += synapse0x1a28240();
   input += synapse0x1a28280();
   input += synapse0x1a282c0();
   input += synapse0x1a28300();
   input += synapse0x1a28340();
   input += synapse0x1a28380();
   input += synapse0x1a283c0();
   input += synapse0x1a28400();
   input += synapse0x1a28440();
   input += synapse0x1a28480();
   input += synapse0x1a284c0();
   input += synapse0x1a28500();
   input += synapse0x1a27f90();
   input += synapse0x1a27fd0();
   input += synapse0x17e0ef0();
   input += synapse0x17e0f30();
   input += synapse0x1a10a40();
   input += synapse0x1a10a80();
   input += synapse0x1a10ac0();
   input += synapse0x1a218f0();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a27e00() {
   double input = input0x1a27e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x17e1690() {
   double input = -1.72013;
   input += synapse0x1a27a50();
   input += synapse0x1a21930();
   input += synapse0x1a21970();
   input += synapse0x1a28650();
   input += synapse0x1a28690();
   input += synapse0x1a286d0();
   input += synapse0x1a28710();
   input += synapse0x1a28750();
   input += synapse0x1a28790();
   input += synapse0x1a287d0();
   input += synapse0x1a28810();
   input += synapse0x1a28850();
   input += synapse0x1a28890();
   input += synapse0x1a288d0();
   input += synapse0x1a28910();
   input += synapse0x1a28950();
   input += synapse0x1a278a0();
   input += synapse0x1a278e0();
   input += synapse0x1a28aa0();
   input += synapse0x1a28ae0();
   input += synapse0x1a28b20();
   input += synapse0x1a28b60();
   input += synapse0x1a28ba0();
   input += synapse0x1a28be0();
   return input;
}

double NNfunction_NN_1_8::neuron0x17e1690() {
   double input = input0x17e1690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a28c20() {
   double input = -0.474704;
   input += synapse0x1a28f60();
   input += synapse0x1a28fa0();
   input += synapse0x1a28fe0();
   input += synapse0x1a29020();
   input += synapse0x1a29060();
   input += synapse0x1a290a0();
   input += synapse0x1a290e0();
   input += synapse0x1a29120();
   input += synapse0x1a29160();
   input += synapse0x1a291a0();
   input += synapse0x1a291e0();
   input += synapse0x1a29220();
   input += synapse0x1a29260();
   input += synapse0x1a292a0();
   input += synapse0x1a292e0();
   input += synapse0x1a29320();
   input += synapse0x1a28db0();
   input += synapse0x1a28df0();
   input += synapse0x1a29470();
   input += synapse0x1a294b0();
   input += synapse0x1a294f0();
   input += synapse0x1a29530();
   input += synapse0x1a29570();
   input += synapse0x1a295b0();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a28c20() {
   double input = input0x1a28c20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a295f0() {
   double input = 0.757998;
   input += synapse0x1a29930();
   input += synapse0x1a29970();
   input += synapse0x1a299b0();
   input += synapse0x1a299f0();
   input += synapse0x1a29a30();
   input += synapse0x1a29a70();
   input += synapse0x1a29ab0();
   input += synapse0x1a29af0();
   input += synapse0x1a29b30();
   input += synapse0x17e1280();
   input += synapse0x17e12c0();
   input += synapse0x17e1300();
   input += synapse0x17e1340();
   input += synapse0x17e1380();
   input += synapse0x17e13c0();
   input += synapse0x17e1400();
   input += synapse0x1a29780();
   input += synapse0x1a297c0();
   input += synapse0x17e1550();
   input += synapse0x17e1590();
   input += synapse0x17e15d0();
   input += synapse0x17e1610();
   input += synapse0x17e1650();
   input += synapse0x1a2a380();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a295f0() {
   double input = input0x1a295f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a2a3c0() {
   double input = 1.05667;
   input += synapse0x1a2a700();
   input += synapse0x1a2a740();
   input += synapse0x1a2a780();
   input += synapse0x1a2a7c0();
   input += synapse0x1a2a800();
   input += synapse0x1a2a840();
   input += synapse0x1a2a880();
   input += synapse0x1a2a8c0();
   input += synapse0x1a2a900();
   input += synapse0x1a2a940();
   input += synapse0x1a2a980();
   input += synapse0x1a2a9c0();
   input += synapse0x1a2aa00();
   input += synapse0x1a2aa40();
   input += synapse0x1a2aa80();
   input += synapse0x1a2aac0();
   input += synapse0x1a2a550();
   input += synapse0x1a2a590();
   input += synapse0x1a2ac10();
   input += synapse0x1a2ac50();
   input += synapse0x1a2ac90();
   input += synapse0x1a2acd0();
   input += synapse0x1a2ad10();
   input += synapse0x1a2ad50();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a2a3c0() {
   double input = input0x1a2a3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a2ad90() {
   double input = 0.483257;
   input += synapse0x1a2b0d0();
   input += synapse0x1a2b110();
   input += synapse0x1a2b150();
   input += synapse0x1a2b190();
   input += synapse0x1a2b1d0();
   input += synapse0x1a2b210();
   input += synapse0x1a2b250();
   input += synapse0x1a2b290();
   input += synapse0x1a2b2d0();
   input += synapse0x1a2b310();
   input += synapse0x1a2b350();
   input += synapse0x1a2b390();
   input += synapse0x1a2b3d0();
   input += synapse0x1a2b410();
   input += synapse0x1a2b450();
   input += synapse0x1a2b490();
   input += synapse0x1a2af20();
   input += synapse0x1a2af60();
   input += synapse0x1a2b5e0();
   input += synapse0x1a2b620();
   input += synapse0x1a2b660();
   input += synapse0x1a2b6a0();
   input += synapse0x1a2b6e0();
   input += synapse0x1a2b720();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a2ad90() {
   double input = input0x1a2ad90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a2b760() {
   double input = -0.910095;
   input += synapse0x1a25200();
   input += synapse0x1a25240();
   input += synapse0x1a25280();
   input += synapse0x1a252c0();
   input += synapse0x1a2bcb0();
   input += synapse0x1a2bcf0();
   input += synapse0x1a2bd30();
   input += synapse0x1a2bd70();
   input += synapse0x1a2bdb0();
   input += synapse0x1a2bdf0();
   input += synapse0x1a2be30();
   input += synapse0x1a2be70();
   input += synapse0x1a2beb0();
   input += synapse0x1a2bef0();
   input += synapse0x1a2bf30();
   input += synapse0x1a2bf70();
   input += synapse0x1a2b8f0();
   input += synapse0x1a2b930();
   input += synapse0x1a2c0c0();
   input += synapse0x1a2c100();
   input += synapse0x1a2c140();
   input += synapse0x1a2c180();
   input += synapse0x1a2c1c0();
   input += synapse0x1a2c200();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a2b760() {
   double input = input0x1a2b760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a2c240() {
   double input = 0.727536;
   input += synapse0x1a2c580();
   input += synapse0x1a2c5c0();
   input += synapse0x1a2c600();
   input += synapse0x1a2c640();
   input += synapse0x1a2c680();
   input += synapse0x1a2c6c0();
   input += synapse0x1a2c700();
   input += synapse0x1a2c740();
   input += synapse0x1a2c780();
   input += synapse0x1a2c7c0();
   input += synapse0x1a2c800();
   input += synapse0x1a2c840();
   input += synapse0x1a2c880();
   input += synapse0x1a2c8c0();
   input += synapse0x1a2c900();
   input += synapse0x1a2c940();
   input += synapse0x1a2c3d0();
   input += synapse0x1a2c410();
   input += synapse0x1a2ca90();
   input += synapse0x1a2cad0();
   input += synapse0x1a2cb10();
   input += synapse0x1a2cb50();
   input += synapse0x1a2cb90();
   input += synapse0x1a2cbd0();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a2c240() {
   double input = input0x1a2c240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a2cc10() {
   double input = 0.892866;
   input += synapse0x1a2cf50();
   input += synapse0x1a2cf90();
   input += synapse0x1a2cfd0();
   input += synapse0x1a2d010();
   input += synapse0x1a2d050();
   input += synapse0x1a2d090();
   input += synapse0x1a2d0d0();
   input += synapse0x1a2d110();
   input += synapse0x1a2d150();
   input += synapse0x1a2d190();
   input += synapse0x1a2d1d0();
   input += synapse0x1a2d210();
   input += synapse0x1a2d250();
   input += synapse0x1a2d290();
   input += synapse0x1a2d2d0();
   input += synapse0x1a2d310();
   input += synapse0x1a2cda0();
   input += synapse0x1a2cde0();
   input += synapse0x1a29b70();
   input += synapse0x1a29bb0();
   input += synapse0x1a29bf0();
   input += synapse0x1a29c30();
   input += synapse0x1a29c70();
   input += synapse0x1a29cb0();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a2cc10() {
   double input = input0x1a2cc10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a29cf0() {
   double input = -1.79179;
   input += synapse0x1a2a030();
   input += synapse0x1a2a070();
   input += synapse0x1a2a0b0();
   input += synapse0x1a2a0f0();
   input += synapse0x1a2a130();
   input += synapse0x1a2a170();
   input += synapse0x1a2a1b0();
   input += synapse0x1a2a1f0();
   input += synapse0x1a2a230();
   input += synapse0x1a2a270();
   input += synapse0x1a2a2b0();
   input += synapse0x1a2a2f0();
   input += synapse0x1a2a330();
   input += synapse0x1a2e470();
   input += synapse0x1a2e4b0();
   input += synapse0x1a2e4f0();
   input += synapse0x1a29e80();
   input += synapse0x1a29ec0();
   input += synapse0x1a2e640();
   input += synapse0x1a2e680();
   input += synapse0x1a2e6c0();
   input += synapse0x1a2e700();
   input += synapse0x1a2e740();
   input += synapse0x1a2e780();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a29cf0() {
   double input = input0x1a29cf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a2e7c0() {
   double input = 0.799814;
   input += synapse0x1a2eb00();
   input += synapse0x1a2eb40();
   input += synapse0x1a2eb80();
   input += synapse0x1a2ebc0();
   input += synapse0x1a2ec00();
   input += synapse0x1a2ec40();
   input += synapse0x1a2ec80();
   input += synapse0x1a2ecc0();
   input += synapse0x1a2ed00();
   input += synapse0x1a2ed40();
   input += synapse0x1a2ed80();
   input += synapse0x1a2edc0();
   input += synapse0x1a2ee00();
   input += synapse0x1a2ee40();
   input += synapse0x1a2ee80();
   input += synapse0x1a2eec0();
   input += synapse0x1a2e950();
   input += synapse0x1a2e990();
   input += synapse0x1a2f010();
   input += synapse0x1a2f050();
   input += synapse0x1a2f090();
   input += synapse0x1a2f0d0();
   input += synapse0x1a2f110();
   input += synapse0x1a2f150();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a2e7c0() {
   double input = input0x1a2e7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a2f190() {
   double input = 4.60947;
   input += synapse0x1a2f4d0();
   input += synapse0x1a2f510();
   input += synapse0x1a2f550();
   input += synapse0x1a2f590();
   input += synapse0x1a2f5d0();
   input += synapse0x1a2f610();
   input += synapse0x1a2f650();
   input += synapse0x1a2f690();
   input += synapse0x1a2f6d0();
   input += synapse0x1a2f710();
   input += synapse0x1a2f750();
   input += synapse0x1a2f790();
   input += synapse0x1a2f7d0();
   input += synapse0x1a2f810();
   input += synapse0x1a2f850();
   input += synapse0x1a2f890();
   input += synapse0x1a2f320();
   input += synapse0x1a2f360();
   input += synapse0x1a2f9e0();
   input += synapse0x1a2fa20();
   input += synapse0x1a2fa60();
   input += synapse0x1a2faa0();
   input += synapse0x1a2fae0();
   input += synapse0x1a2fb20();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a2f190() {
   double input = input0x1a2f190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a2fb60() {
   double input = 0.689224;
   input += synapse0x1a2fea0();
   input += synapse0x1a2fee0();
   input += synapse0x1a2ff20();
   input += synapse0x1a2ff60();
   input += synapse0x1a2ffa0();
   input += synapse0x1a2ffe0();
   input += synapse0x1a30020();
   input += synapse0x1a30060();
   input += synapse0x1a300a0();
   input += synapse0x1a300e0();
   input += synapse0x1a30120();
   input += synapse0x1a30160();
   input += synapse0x1a301a0();
   input += synapse0x1a301e0();
   input += synapse0x1a30220();
   input += synapse0x1a30260();
   input += synapse0x1a2fcf0();
   input += synapse0x1a2fd30();
   input += synapse0x1a303b0();
   input += synapse0x1a303f0();
   input += synapse0x1a30430();
   input += synapse0x1a30470();
   input += synapse0x1a304b0();
   input += synapse0x1a304f0();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a2fb60() {
   double input = input0x1a2fb60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a30530() {
   double input = 1.49972;
   input += synapse0x1a30870();
   input += synapse0x1a21bd0();
   input += synapse0x1a21c10();
   input += synapse0x1a21f10();
   input += synapse0x1a21f50();
   input += synapse0x1a22250();
   input += synapse0x1a22290();
   input += synapse0x1a22590();
   input += synapse0x1a225d0();
   input += synapse0x1a228d0();
   input += synapse0x1a22910();
   input += synapse0x1a22c10();
   input += synapse0x1a22c50();
   input += synapse0x1a22f50();
   input += synapse0x1a22f90();
   input += synapse0x1a23290();
   input += synapse0x1a232d0();
   input += synapse0x1a235d0();
   input += synapse0x1a23610();
   input += synapse0x1a23910();
   input += synapse0x1a23950();
   input += synapse0x1a23c50();
   input += synapse0x1a23c90();
   input += synapse0x1a23f90();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a30530() {
   double input = input0x1a30530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a32340() {
   double input = -0.287532;
   input += synapse0x1a23fd0();
   input += synapse0x1a24c90();
   input += synapse0x1a24cd0();
   input += synapse0x1a306c0();
   input += synapse0x1a30700();
   input += synapse0x1a24fd0();
   input += synapse0x1a25010();
   input += synapse0x17d2f60();
   input += synapse0x17d2fa0();
   input += synapse0x1a25750();
   input += synapse0x1a25790();
   input += synapse0x1a25a90();
   input += synapse0x1a25ad0();
   input += synapse0x1a25dd0();
   input += synapse0x1a25e10();
   input += synapse0x1a26110();
   input += synapse0x1a26150();
   input += synapse0x1a26450();
   input += synapse0x1a26490();
   input += synapse0x1a26790();
   input += synapse0x1a267d0();
   input += synapse0x1a242d0();
   input += synapse0x1a24310();
   input += synapse0x1a325e0();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a32340() {
   double input = input0x1a32340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a32620() {
   double input = 0.367714;
   input += synapse0x1a32960();
   input += synapse0x1a329a0();
   input += synapse0x1a329e0();
   input += synapse0x1a32a20();
   input += synapse0x1a32a60();
   input += synapse0x1a32aa0();
   input += synapse0x1a32ae0();
   input += synapse0x1a32b20();
   input += synapse0x1a32b60();
   input += synapse0x1a32ba0();
   input += synapse0x1a32be0();
   input += synapse0x1a32c20();
   input += synapse0x1a32c60();
   input += synapse0x1a32ca0();
   input += synapse0x1a32ce0();
   input += synapse0x1a32d20();
   input += synapse0x1a327b0();
   input += synapse0x1a327f0();
   input += synapse0x1a32e70();
   input += synapse0x1a32eb0();
   input += synapse0x1a32ef0();
   input += synapse0x1a32f30();
   input += synapse0x1a32f70();
   input += synapse0x1a32fb0();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a32620() {
   double input = input0x1a32620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a32ff0() {
   double input = 1.84063;
   input += synapse0x1a33330();
   input += synapse0x1a33370();
   input += synapse0x1a333b0();
   input += synapse0x1a333f0();
   input += synapse0x1a33430();
   input += synapse0x1a33470();
   input += synapse0x1a334b0();
   input += synapse0x1a334f0();
   input += synapse0x1a33530();
   input += synapse0x1a33570();
   input += synapse0x1a335b0();
   input += synapse0x1a335f0();
   input += synapse0x1a33630();
   input += synapse0x1a33670();
   input += synapse0x1a336b0();
   input += synapse0x1a336f0();
   input += synapse0x1a33180();
   input += synapse0x1a331c0();
   input += synapse0x1a33840();
   input += synapse0x1a33880();
   input += synapse0x1a338c0();
   input += synapse0x1a33900();
   input += synapse0x1a33940();
   input += synapse0x1a33980();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a32ff0() {
   double input = input0x1a32ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a339c0() {
   double input = -3.42236;
   input += synapse0x1a33d00();
   input += synapse0x1a33d40();
   input += synapse0x1a33d80();
   input += synapse0x1a33dc0();
   input += synapse0x1a33e00();
   input += synapse0x1a33e40();
   input += synapse0x1a33e80();
   input += synapse0x1a33ec0();
   input += synapse0x1a33f00();
   input += synapse0x1a33f40();
   input += synapse0x1a33f80();
   input += synapse0x1a33fc0();
   input += synapse0x1a34000();
   input += synapse0x1a34040();
   input += synapse0x1a34080();
   input += synapse0x1a340c0();
   input += synapse0x1a33b50();
   input += synapse0x1a33b90();
   input += synapse0x1a34210();
   input += synapse0x1a34250();
   input += synapse0x1a34290();
   input += synapse0x1a342d0();
   input += synapse0x1a34310();
   input += synapse0x1a34350();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a339c0() {
   double input = input0x1a339c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a34390() {
   double input = 0.131718;
   input += synapse0x1a346d0();
   input += synapse0x1a34710();
   input += synapse0x1a34750();
   input += synapse0x1a34790();
   input += synapse0x1a347d0();
   input += synapse0x1a34810();
   input += synapse0x1a34850();
   input += synapse0x1a34890();
   input += synapse0x1a348d0();
   input += synapse0x1a34910();
   input += synapse0x1a34950();
   input += synapse0x1a34990();
   input += synapse0x1a349d0();
   input += synapse0x1a34a10();
   input += synapse0x1a34a50();
   input += synapse0x1a34a90();
   input += synapse0x1a34520();
   input += synapse0x1a34560();
   input += synapse0x1a34be0();
   input += synapse0x1a34c20();
   input += synapse0x1a34c60();
   input += synapse0x1a34ca0();
   input += synapse0x1a34ce0();
   input += synapse0x1a34d20();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a34390() {
   double input = input0x1a34390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a34d60() {
   double input = -1.03177;
   input += synapse0x1a350a0();
   input += synapse0x1a350e0();
   input += synapse0x1a35120();
   input += synapse0x1a35160();
   input += synapse0x1a351a0();
   input += synapse0x1a351e0();
   input += synapse0x1a35220();
   input += synapse0x1a35260();
   input += synapse0x1a352a0();
   input += synapse0x1a2d460();
   input += synapse0x1a2d4a0();
   input += synapse0x1a2d4e0();
   input += synapse0x1a2d520();
   input += synapse0x1a2d560();
   input += synapse0x1a2d5a0();
   input += synapse0x1a2d5e0();
   input += synapse0x1a34ef0();
   input += synapse0x1a34f30();
   input += synapse0x1a2d730();
   input += synapse0x1a2d770();
   input += synapse0x1a2d7b0();
   input += synapse0x1a2d7f0();
   input += synapse0x1a2d830();
   input += synapse0x1a2d870();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a34d60() {
   double input = input0x1a34d60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a2d8b0() {
   double input = -0.844164;
   input += synapse0x1a2dbf0();
   input += synapse0x1a2dc30();
   input += synapse0x1a2dc70();
   input += synapse0x1a2dcb0();
   input += synapse0x1a2dcf0();
   input += synapse0x1a2dd30();
   input += synapse0x1a2dd70();
   input += synapse0x1a2ddb0();
   input += synapse0x1a2ddf0();
   input += synapse0x1a2de30();
   input += synapse0x1a2de70();
   input += synapse0x1a2deb0();
   input += synapse0x1a2def0();
   input += synapse0x1a2df30();
   input += synapse0x1a2df70();
   input += synapse0x1a2dfb0();
   input += synapse0x1a2da40();
   input += synapse0x1a2da80();
   input += synapse0x1a2e100();
   input += synapse0x1a2e140();
   input += synapse0x1a2e180();
   input += synapse0x1a2e1c0();
   input += synapse0x1a2e200();
   input += synapse0x1a2e240();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a2d8b0() {
   double input = input0x1a2d8b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a2e280() {
   double input = -2.19769;
   input += synapse0x1a2e410();
   input += synapse0x1a374a0();
   input += synapse0x1a374e0();
   input += synapse0x1a37520();
   input += synapse0x1a37560();
   input += synapse0x1a375a0();
   input += synapse0x1a375e0();
   input += synapse0x1a37620();
   input += synapse0x1a37660();
   input += synapse0x1a376a0();
   input += synapse0x1a376e0();
   input += synapse0x1a37720();
   input += synapse0x1a37760();
   input += synapse0x1a377a0();
   input += synapse0x1a377e0();
   input += synapse0x1a37820();
   input += synapse0x1a372f0();
   input += synapse0x1a37330();
   input += synapse0x1a37970();
   input += synapse0x1a379b0();
   input += synapse0x1a379f0();
   input += synapse0x1a37a30();
   input += synapse0x1a37a70();
   input += synapse0x1a37ab0();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a2e280() {
   double input = input0x1a2e280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a37af0() {
   double input = -0.955031;
   input += synapse0x1a37e30();
   input += synapse0x1a37e70();
   input += synapse0x1a37eb0();
   input += synapse0x1a37ef0();
   input += synapse0x1a37f30();
   input += synapse0x1a37f70();
   input += synapse0x1a37fb0();
   input += synapse0x1a37ff0();
   input += synapse0x1a38030();
   input += synapse0x1a38070();
   input += synapse0x1a380b0();
   input += synapse0x1a380f0();
   input += synapse0x1a38130();
   input += synapse0x1a38170();
   input += synapse0x1a381b0();
   input += synapse0x1a381f0();
   input += synapse0x1a37c80();
   input += synapse0x1a37cc0();
   input += synapse0x1a38340();
   input += synapse0x1a38380();
   input += synapse0x1a383c0();
   input += synapse0x1a38400();
   input += synapse0x1a38440();
   input += synapse0x1a38480();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a37af0() {
   double input = input0x1a37af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a384c0() {
   double input = -0.476545;
   input += synapse0x1a38800();
   input += synapse0x1a38840();
   input += synapse0x1a38880();
   input += synapse0x1a388c0();
   input += synapse0x1a38900();
   input += synapse0x1a38940();
   input += synapse0x1a38980();
   input += synapse0x1a389c0();
   input += synapse0x1a38a00();
   input += synapse0x1a38a40();
   input += synapse0x1a38a80();
   input += synapse0x1a38ac0();
   input += synapse0x1a38b00();
   input += synapse0x1a38b40();
   input += synapse0x1a38b80();
   input += synapse0x1a38bc0();
   input += synapse0x1a38650();
   input += synapse0x1a38690();
   input += synapse0x1a38d10();
   input += synapse0x1a38d50();
   input += synapse0x1a38d90();
   input += synapse0x1a38dd0();
   input += synapse0x1a38e10();
   input += synapse0x1a38e50();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a384c0() {
   double input = input0x1a384c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a38e90() {
   double input = 1.22656;
   input += synapse0x1a391d0();
   input += synapse0x1a39210();
   input += synapse0x1a39250();
   input += synapse0x1a39290();
   input += synapse0x1a392d0();
   input += synapse0x1a39310();
   input += synapse0x1a39350();
   input += synapse0x1a39390();
   input += synapse0x1a393d0();
   input += synapse0x1a39410();
   input += synapse0x1a39450();
   input += synapse0x1a39490();
   input += synapse0x1a394d0();
   input += synapse0x1a39510();
   input += synapse0x1a39550();
   input += synapse0x1a39590();
   input += synapse0x1a39020();
   input += synapse0x1a39060();
   input += synapse0x1a396e0();
   input += synapse0x1a39720();
   input += synapse0x1a39760();
   input += synapse0x1a397a0();
   input += synapse0x1a397e0();
   input += synapse0x1a39820();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a38e90() {
   double input = input0x1a38e90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a39860() {
   double input = -3.39315;
   input += synapse0x1a39ba0();
   input += synapse0x1a39be0();
   input += synapse0x1a39c20();
   input += synapse0x1a39c60();
   input += synapse0x1a39ca0();
   input += synapse0x1a39ce0();
   input += synapse0x1a39d20();
   input += synapse0x1a39d60();
   input += synapse0x1a39da0();
   input += synapse0x1a39de0();
   input += synapse0x1a39e20();
   input += synapse0x1a39e60();
   input += synapse0x1a39ea0();
   input += synapse0x1a39ee0();
   input += synapse0x1a39f20();
   input += synapse0x1a39f60();
   input += synapse0x1a399f0();
   input += synapse0x1a39a30();
   input += synapse0x1a3a0b0();
   input += synapse0x1a3a0f0();
   input += synapse0x1a3a130();
   input += synapse0x1a3a170();
   input += synapse0x1a3a1b0();
   input += synapse0x1a3a1f0();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a39860() {
   double input = input0x1a39860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a3a230() {
   double input = 1.21926;
   input += synapse0x1a3a570();
   input += synapse0x1a3a5b0();
   input += synapse0x1a3a5f0();
   input += synapse0x1a3a630();
   input += synapse0x1a3a670();
   input += synapse0x1a3a6b0();
   input += synapse0x1a3a6f0();
   input += synapse0x1a3a730();
   input += synapse0x1a3a770();
   input += synapse0x1a3a7b0();
   input += synapse0x1a3a7f0();
   input += synapse0x1a3a830();
   input += synapse0x1a3a870();
   input += synapse0x1a3a8b0();
   input += synapse0x1a3a8f0();
   input += synapse0x1a3a930();
   input += synapse0x1a3a3c0();
   input += synapse0x1a3a400();
   input += synapse0x1a3aa80();
   input += synapse0x1a3aac0();
   input += synapse0x1a3ab00();
   input += synapse0x1a3ab40();
   input += synapse0x1a3ab80();
   input += synapse0x1a3abc0();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a3a230() {
   double input = input0x1a3a230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a3ac00() {
   double input = -0.862372;
   input += synapse0x1a3af40();
   input += synapse0x1a3af80();
   input += synapse0x1a3afc0();
   input += synapse0x1a3b000();
   input += synapse0x1a3b040();
   input += synapse0x1a3b080();
   input += synapse0x1a3b0c0();
   input += synapse0x1a3b100();
   input += synapse0x1a3b140();
   input += synapse0x1a3b180();
   input += synapse0x1a3b1c0();
   input += synapse0x1a3b200();
   input += synapse0x1a3b240();
   input += synapse0x1a3b280();
   input += synapse0x1a3b2c0();
   input += synapse0x1a3b300();
   input += synapse0x1a3ad90();
   input += synapse0x1a3add0();
   input += synapse0x1a3b450();
   input += synapse0x1a3b490();
   input += synapse0x1a3b4d0();
   input += synapse0x1a3b510();
   input += synapse0x1a3b550();
   input += synapse0x1a3b590();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a3ac00() {
   double input = input0x1a3ac00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a3b5d0() {
   double input = 2.24375;
   input += synapse0x1a3b910();
   input += synapse0x1a3b950();
   input += synapse0x1a3b990();
   input += synapse0x1a3b9d0();
   input += synapse0x1a3ba10();
   input += synapse0x1a3ba50();
   input += synapse0x1a3ba90();
   input += synapse0x1a3bad0();
   input += synapse0x1a3bb10();
   input += synapse0x1a3bb50();
   input += synapse0x1a3bb90();
   input += synapse0x1a3bbd0();
   input += synapse0x1a3bc10();
   input += synapse0x1a3bc50();
   input += synapse0x1a3bc90();
   input += synapse0x1a3bcd0();
   input += synapse0x1a3b760();
   input += synapse0x1a3b7a0();
   input += synapse0x1a3be20();
   input += synapse0x1a3be60();
   input += synapse0x1a3bea0();
   input += synapse0x1a3bee0();
   input += synapse0x1a3bf20();
   input += synapse0x1a3bf60();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a3b5d0() {
   double input = input0x1a3b5d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a3bfa0() {
   double input = 0.572934;
   input += synapse0x1a3c2e0();
   input += synapse0x1a308b0();
   input += synapse0x1a308f0();
   input += synapse0x1a30930();
   input += synapse0x1a30b80();
   input += synapse0x1a30bc0();
   input += synapse0x1a30c00();
   input += synapse0x1a30e50();
   input += synapse0x1a30e90();
   input += synapse0x1a310e0();
   input += synapse0x1a31120();
   input += synapse0x1a31160();
   input += synapse0x1a313b0();
   input += synapse0x1a313f0();
   input += synapse0x1a31640();
   input += synapse0x1a31680();
   input += synapse0x1a3c130();
   input += synapse0x1a3c170();
   input += synapse0x1a317d0();
   input += synapse0x1a31ce0();
   input += synapse0x1a31d20();
   input += synapse0x1a31d60();
   input += synapse0x1a31fb0();
   input += synapse0x1a31ff0();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a3bfa0() {
   double input = input0x1a3bfa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a32030() {
   double input = -1.97192;
   input += synapse0x1a318a0();
   input += synapse0x1a318e0();
   input += synapse0x1a31920();
   input += synapse0x1a31960();
   input += synapse0x1a322e0();
   input += synapse0x1a3e630();
   input += synapse0x1a3e670();
   input += synapse0x1a3e6b0();
   input += synapse0x1a3e6f0();
   input += synapse0x1a3e730();
   input += synapse0x1a3e770();
   input += synapse0x1a3e7b0();
   input += synapse0x1a3e7f0();
   input += synapse0x1a3e830();
   input += synapse0x1a3e870();
   input += synapse0x1a3e8b0();
   input += synapse0x1a321c0();
   input += synapse0x1a32200();
   input += synapse0x1a3ea00();
   input += synapse0x1a3ea40();
   input += synapse0x1a3ea80();
   input += synapse0x1a3eac0();
   input += synapse0x1a3eb00();
   input += synapse0x1a3eb40();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a32030() {
   double input = input0x1a32030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a3eb80() {
   double input = -0.416115;
   input += synapse0x1a3eec0();
   input += synapse0x1a3ef00();
   input += synapse0x1a3ef40();
   input += synapse0x1a3ef80();
   input += synapse0x1a3efc0();
   input += synapse0x1a3f000();
   input += synapse0x1a3f040();
   input += synapse0x1a3f080();
   input += synapse0x1a3f0c0();
   input += synapse0x1a3f100();
   input += synapse0x1a3f140();
   input += synapse0x1a3f180();
   input += synapse0x1a3f1c0();
   input += synapse0x1a3f200();
   input += synapse0x1a3f240();
   input += synapse0x1a3f280();
   input += synapse0x1a3ed10();
   input += synapse0x1a3ed50();
   input += synapse0x1a3f3d0();
   input += synapse0x1a3f410();
   input += synapse0x1a3f450();
   input += synapse0x1a3f490();
   input += synapse0x1a3f4d0();
   input += synapse0x1a3f510();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a3eb80() {
   double input = input0x1a3eb80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a3f550() {
   double input = 0.279049;
   input += synapse0x1a3f890();
   input += synapse0x1a3f8d0();
   input += synapse0x1a3f910();
   input += synapse0x1a3f950();
   input += synapse0x1a3f990();
   input += synapse0x1a3f9d0();
   input += synapse0x1a3fa10();
   input += synapse0x1a3fa50();
   input += synapse0x1a3fa90();
   input += synapse0x1a3fad0();
   input += synapse0x1a3fb10();
   input += synapse0x1a3fb50();
   input += synapse0x1a3fb90();
   input += synapse0x1a3fbd0();
   input += synapse0x1a3fc10();
   input += synapse0x1a3fc50();
   input += synapse0x1a3f6e0();
   input += synapse0x1a3f720();
   input += synapse0x1a3fda0();
   input += synapse0x1a3fde0();
   input += synapse0x1a3fe20();
   input += synapse0x1a3fe60();
   input += synapse0x1a3fea0();
   input += synapse0x1a3fee0();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a3f550() {
   double input = input0x1a3f550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a3ff20() {
   double input = -5.39056;
   input += synapse0x1a40260();
   input += synapse0x1a402a0();
   input += synapse0x1a402e0();
   input += synapse0x1a40320();
   input += synapse0x1a40360();
   input += synapse0x1a403a0();
   input += synapse0x1a403e0();
   input += synapse0x1a40420();
   input += synapse0x1a40460();
   input += synapse0x1a404a0();
   input += synapse0x1a404e0();
   input += synapse0x1a40520();
   input += synapse0x1a40560();
   input += synapse0x1a405a0();
   input += synapse0x1a405e0();
   input += synapse0x1a40620();
   input += synapse0x1a400b0();
   input += synapse0x1a400f0();
   input += synapse0x1a40770();
   input += synapse0x1a407b0();
   input += synapse0x1a407f0();
   input += synapse0x1a40830();
   input += synapse0x1a40870();
   input += synapse0x1a408b0();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a3ff20() {
   double input = input0x1a3ff20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a408f0() {
   double input = -1.22033;
   input += synapse0x1a40c30();
   input += synapse0x1a40c70();
   input += synapse0x1a40cb0();
   input += synapse0x1a40cf0();
   input += synapse0x1a40d30();
   input += synapse0x1a40d70();
   input += synapse0x1a40db0();
   input += synapse0x1a40df0();
   input += synapse0x1a40e30();
   input += synapse0x1a40e70();
   input += synapse0x1a40eb0();
   input += synapse0x1a40ef0();
   input += synapse0x1a40f30();
   input += synapse0x1a40f70();
   input += synapse0x1a40fb0();
   input += synapse0x1a40ff0();
   input += synapse0x1a40a80();
   input += synapse0x1a40ac0();
   input += synapse0x1a41140();
   input += synapse0x1a41180();
   input += synapse0x1a411c0();
   input += synapse0x1a41200();
   input += synapse0x1a41240();
   input += synapse0x1a41280();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a408f0() {
   double input = input0x1a408f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a412c0() {
   double input = -3.52106;
   input += synapse0x1a41600();
   input += synapse0x1a41640();
   input += synapse0x1a41680();
   input += synapse0x1a416c0();
   input += synapse0x1a41700();
   input += synapse0x1a41740();
   input += synapse0x1a41780();
   input += synapse0x1a417c0();
   input += synapse0x1a41800();
   input += synapse0x1a41840();
   input += synapse0x1a41880();
   input += synapse0x1a418c0();
   input += synapse0x1a41900();
   input += synapse0x1a41940();
   input += synapse0x1a41980();
   input += synapse0x1a419c0();
   input += synapse0x1a41450();
   input += synapse0x1a41490();
   input += synapse0x1a41b10();
   input += synapse0x1a41b50();
   input += synapse0x1a41b90();
   input += synapse0x1a41bd0();
   input += synapse0x1a41c10();
   input += synapse0x1a41c50();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a412c0() {
   double input = input0x1a412c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a41c90() {
   double input = -0.0918717;
   input += synapse0x1a41fd0();
   input += synapse0x1a42010();
   input += synapse0x1a42050();
   input += synapse0x1a42090();
   input += synapse0x1a420d0();
   input += synapse0x1a42110();
   input += synapse0x1a42150();
   input += synapse0x1a42190();
   input += synapse0x1a421d0();
   input += synapse0x1a42210();
   input += synapse0x1a42250();
   input += synapse0x1a42290();
   input += synapse0x1a422d0();
   input += synapse0x1a42310();
   input += synapse0x1a42350();
   input += synapse0x1a42390();
   input += synapse0x1a41e20();
   input += synapse0x1a41e60();
   input += synapse0x1a424e0();
   input += synapse0x1a42520();
   input += synapse0x1a42560();
   input += synapse0x1a425a0();
   input += synapse0x1a425e0();
   input += synapse0x1a42620();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a41c90() {
   double input = input0x1a41c90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a42660() {
   double input = 0.27837;
   input += synapse0x1a429a0();
   input += synapse0x1a429e0();
   input += synapse0x1a42a20();
   input += synapse0x1a42a60();
   input += synapse0x1a42aa0();
   input += synapse0x1a42ae0();
   input += synapse0x1a42b20();
   input += synapse0x1a42b60();
   input += synapse0x1a42ba0();
   input += synapse0x1a42be0();
   input += synapse0x1a42c20();
   input += synapse0x1a42c60();
   input += synapse0x1a42ca0();
   input += synapse0x1a42ce0();
   input += synapse0x1a42d20();
   input += synapse0x1a42d60();
   input += synapse0x1a427f0();
   input += synapse0x1a42830();
   input += synapse0x1a42eb0();
   input += synapse0x1a42ef0();
   input += synapse0x1a42f30();
   input += synapse0x1a42f70();
   input += synapse0x1a42fb0();
   input += synapse0x1a42ff0();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a42660() {
   double input = input0x1a42660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a43030() {
   double input = -0.481688;
   input += synapse0x1a2baa0();
   input += synapse0x1a2bae0();
   input += synapse0x1a2bb20();
   input += synapse0x1a2bb60();
   input += synapse0x1a2bba0();
   input += synapse0x1a2bbe0();
   input += synapse0x1a2bc20();
   input += synapse0x1a2bc60();
   input += synapse0x1a43780();
   input += synapse0x1a437c0();
   input += synapse0x1a43800();
   input += synapse0x1a43840();
   input += synapse0x1a43880();
   input += synapse0x1a438c0();
   input += synapse0x1a43900();
   input += synapse0x1a43940();
   input += synapse0x1a431c0();
   input += synapse0x1a43200();
   input += synapse0x1a43a90();
   input += synapse0x1a43ad0();
   input += synapse0x1a43b10();
   input += synapse0x1a43b50();
   input += synapse0x1a43b90();
   input += synapse0x1a43bd0();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a43030() {
   double input = input0x1a43030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a43c10() {
   double input = -2.15012;
   input += synapse0x1a43f50();
   input += synapse0x1a43f90();
   input += synapse0x1a43fd0();
   input += synapse0x1a44010();
   input += synapse0x1a44050();
   input += synapse0x1a44090();
   input += synapse0x1a440d0();
   input += synapse0x1a44110();
   input += synapse0x1a44150();
   input += synapse0x1a44190();
   input += synapse0x1a441d0();
   input += synapse0x1a44210();
   input += synapse0x1a44250();
   input += synapse0x1a44290();
   input += synapse0x1a442d0();
   input += synapse0x1a44310();
   input += synapse0x1a43da0();
   input += synapse0x1a43de0();
   input += synapse0x1a44460();
   input += synapse0x1a444a0();
   input += synapse0x1a444e0();
   input += synapse0x1a44520();
   input += synapse0x1a44560();
   input += synapse0x1a445a0();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a43c10() {
   double input = input0x1a43c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a445e0() {
   double input = -0.62572;
   input += synapse0x1a44920();
   input += synapse0x1a44960();
   input += synapse0x1a449a0();
   input += synapse0x1a449e0();
   input += synapse0x1a44a20();
   input += synapse0x1a44a60();
   input += synapse0x1a44aa0();
   input += synapse0x1a44ae0();
   input += synapse0x1a44b20();
   input += synapse0x1a44b60();
   input += synapse0x1a44ba0();
   input += synapse0x1a44be0();
   input += synapse0x1a44c20();
   input += synapse0x1a44c60();
   input += synapse0x1a44ca0();
   input += synapse0x1a44ce0();
   input += synapse0x1a44770();
   input += synapse0x1a447b0();
   input += synapse0x1a352e0();
   input += synapse0x1a35320();
   input += synapse0x1a35360();
   input += synapse0x1a353a0();
   input += synapse0x1a353e0();
   input += synapse0x1a35420();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a445e0() {
   double input = input0x1a445e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a35460() {
   double input = 0.700434;
   input += synapse0x1a357a0();
   input += synapse0x1a357e0();
   input += synapse0x1a35820();
   input += synapse0x1a35860();
   input += synapse0x1a358a0();
   input += synapse0x1a358e0();
   input += synapse0x1a35920();
   input += synapse0x1a35960();
   input += synapse0x1a359a0();
   input += synapse0x1a359e0();
   input += synapse0x1a35a20();
   input += synapse0x1a35a60();
   input += synapse0x1a35aa0();
   input += synapse0x1a35ae0();
   input += synapse0x1a35b20();
   input += synapse0x1a35b60();
   input += synapse0x1a355f0();
   input += synapse0x1a35630();
   input += synapse0x1a35cb0();
   input += synapse0x1a35cf0();
   input += synapse0x1a35d30();
   input += synapse0x1a35d70();
   input += synapse0x1a35db0();
   input += synapse0x1a35df0();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a35460() {
   double input = input0x1a35460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a35e30() {
   double input = 0.495773;
   input += synapse0x1a36170();
   input += synapse0x1a361b0();
   input += synapse0x1a361f0();
   input += synapse0x1a36230();
   input += synapse0x1a36270();
   input += synapse0x1a362b0();
   input += synapse0x1a362f0();
   input += synapse0x1a36330();
   input += synapse0x1a36370();
   input += synapse0x1a363b0();
   input += synapse0x1a363f0();
   input += synapse0x1a36430();
   input += synapse0x1a36470();
   input += synapse0x1a364b0();
   input += synapse0x1a364f0();
   input += synapse0x1a36530();
   input += synapse0x1a35fc0();
   input += synapse0x1a36000();
   input += synapse0x1a36680();
   input += synapse0x1a366c0();
   input += synapse0x1a36700();
   input += synapse0x1a36740();
   input += synapse0x1a36780();
   input += synapse0x1a367c0();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a35e30() {
   double input = input0x1a35e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a36800() {
   double input = -0.247073;
   input += synapse0x1a36b40();
   input += synapse0x1a36b80();
   input += synapse0x1a36bc0();
   input += synapse0x1a36c00();
   input += synapse0x1a36c40();
   input += synapse0x1a36c80();
   input += synapse0x1a36cc0();
   input += synapse0x1a36d00();
   input += synapse0x1a36d40();
   input += synapse0x1a36d80();
   input += synapse0x1a36dc0();
   input += synapse0x1a36e00();
   input += synapse0x1a36e40();
   input += synapse0x1a36e80();
   input += synapse0x1a36ec0();
   input += synapse0x1a36f00();
   input += synapse0x1a36990();
   input += synapse0x1a369d0();
   input += synapse0x1a37050();
   input += synapse0x1a37090();
   input += synapse0x1a370d0();
   input += synapse0x1a37110();
   input += synapse0x1a37150();
   input += synapse0x1a37190();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a36800() {
   double input = input0x1a36800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a48e40() {
   double input = 0.413388;
   input += synapse0x1a49060();
   input += synapse0x1a490a0();
   input += synapse0x1a490e0();
   input += synapse0x1a49120();
   input += synapse0x1a49160();
   input += synapse0x1a491a0();
   input += synapse0x1a491e0();
   input += synapse0x1a49220();
   input += synapse0x1a49260();
   input += synapse0x1a492a0();
   input += synapse0x1a492e0();
   input += synapse0x1a49320();
   input += synapse0x1a49360();
   input += synapse0x1a493a0();
   input += synapse0x1a493e0();
   input += synapse0x1a49420();
   input += synapse0x1a371d0();
   input += synapse0x1a37210();
   input += synapse0x1a49570();
   input += synapse0x1a495b0();
   input += synapse0x1a495f0();
   input += synapse0x1a49630();
   input += synapse0x1a49670();
   input += synapse0x1a496b0();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a48e40() {
   double input = input0x1a48e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a496f0() {
   double input = 0.289037;
   input += synapse0x1a49a30();
   input += synapse0x1a49a70();
   input += synapse0x1a49ab0();
   input += synapse0x1a49af0();
   input += synapse0x1a49b30();
   input += synapse0x1a49b70();
   input += synapse0x1a49bb0();
   input += synapse0x1a49bf0();
   input += synapse0x1a49c30();
   input += synapse0x1a49c70();
   input += synapse0x1a49cb0();
   input += synapse0x1a49cf0();
   input += synapse0x1a49d30();
   input += synapse0x1a49d70();
   input += synapse0x1a49db0();
   input += synapse0x1a49df0();
   input += synapse0x1a49880();
   input += synapse0x1a498c0();
   input += synapse0x1a49f40();
   input += synapse0x1a49f80();
   input += synapse0x1a49fc0();
   input += synapse0x1a4a000();
   input += synapse0x1a4a040();
   input += synapse0x1a4a080();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a496f0() {
   double input = input0x1a496f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a4a0c0() {
   double input = 0.796418;
   input += synapse0x1a4a400();
   input += synapse0x1a4a440();
   input += synapse0x1a4a480();
   input += synapse0x1a4a4c0();
   input += synapse0x1a4a500();
   input += synapse0x1a4a540();
   input += synapse0x1a4a580();
   input += synapse0x1a4a5c0();
   input += synapse0x1a4a600();
   input += synapse0x1a4a640();
   input += synapse0x1a4a680();
   input += synapse0x1a4a6c0();
   input += synapse0x1a4a700();
   input += synapse0x1a4a740();
   input += synapse0x1a4a780();
   input += synapse0x1a4a7c0();
   input += synapse0x1a4a250();
   input += synapse0x1a4a290();
   input += synapse0x1a4a910();
   input += synapse0x1a4a950();
   input += synapse0x1a4a990();
   input += synapse0x1a4a9d0();
   input += synapse0x1a4aa10();
   input += synapse0x1a4aa50();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a4a0c0() {
   double input = input0x1a4a0c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a4aa90() {
   double input = 0.264606;
   input += synapse0x1a4add0();
   input += synapse0x1a4ae10();
   input += synapse0x1a4ae50();
   input += synapse0x1a4ae90();
   input += synapse0x1a4aed0();
   input += synapse0x1a4af10();
   input += synapse0x1a4af50();
   input += synapse0x1a4af90();
   input += synapse0x1a4afd0();
   input += synapse0x1a4b010();
   input += synapse0x1a4b050();
   input += synapse0x1a4b090();
   input += synapse0x1a4b0d0();
   input += synapse0x1a4b110();
   input += synapse0x1a4b150();
   input += synapse0x1a4b190();
   input += synapse0x1a4ac20();
   input += synapse0x1a4ac60();
   input += synapse0x1a4b2e0();
   input += synapse0x1a4b320();
   input += synapse0x1a4b360();
   input += synapse0x1a4b3a0();
   input += synapse0x1a4b3e0();
   input += synapse0x1a4b420();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a4aa90() {
   double input = input0x1a4aa90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a51c90() {
   double input = -0.861825;
   input += synapse0x1a279c0();
   input += synapse0x1a27a00();
   input += synapse0x1a28ed0();
   input += synapse0x1a28f10();
   input += synapse0x1a298a0();
   input += synapse0x1a298e0();
   input += synapse0x1a2a670();
   input += synapse0x1a2a6b0();
   input += synapse0x1a2b040();
   input += synapse0x1a2b080();
   input += synapse0x1a2ba10();
   input += synapse0x1a2ba50();
   input += synapse0x1a2c4f0();
   input += synapse0x1a2c530();
   input += synapse0x1a2cec0();
   input += synapse0x1a2cf00();
   input += synapse0x1a29fa0();
   input += synapse0x1a29fe0();
   input += synapse0x1a2ea70();
   input += synapse0x1a2eab0();
   input += synapse0x1a2f440();
   input += synapse0x1a2f480();
   input += synapse0x1a2fe10();
   input += synapse0x1a2fe50();
   input += synapse0x1a307e0();
   input += synapse0x1a30820();
   input += synapse0x1a24950();
   input += synapse0x1a24990();
   input += synapse0x1a328d0();
   input += synapse0x1a32910();
   input += synapse0x1a332a0();
   input += synapse0x1a332e0();
   input += synapse0x1a33c70();
   input += synapse0x1a33cb0();
   input += synapse0x1a34640();
   input += synapse0x1a34680();
   input += synapse0x1a35010();
   input += synapse0x1a35050();
   input += synapse0x1a2db60();
   input += synapse0x1a2dba0();
   input += synapse0x1a37410();
   input += synapse0x1a37450();
   input += synapse0x1a37da0();
   input += synapse0x1a37de0();
   input += synapse0x1a38770();
   input += synapse0x1a387b0();
   input += synapse0x1a39140();
   input += synapse0x1a39180();
   input += synapse0x1a39b10();
   input += synapse0x1a39b50();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a51c90() {
   double input = input0x1a51c90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a52030() {
   double input = 0.937106;
   input += synapse0x1a3c250();
   input += synapse0x1a3c290();
   input += synapse0x1a31810();
   input += synapse0x1a31850();
   input += synapse0x1a3ee30();
   input += synapse0x1a3ee70();
   input += synapse0x1a3f800();
   input += synapse0x1a3f840();
   input += synapse0x1a401d0();
   input += synapse0x1a40210();
   input += synapse0x1a40ba0();
   input += synapse0x1a40be0();
   input += synapse0x1a41570();
   input += synapse0x1a415b0();
   input += synapse0x1a41f40();
   input += synapse0x1a41f80();
   input += synapse0x1a42910();
   input += synapse0x1a42950();
   input += synapse0x1a432e0();
   input += synapse0x1a43320();
   input += synapse0x1a43ec0();
   input += synapse0x1a43f00();
   input += synapse0x1a44890();
   input += synapse0x1a448d0();
   input += synapse0x1a35710();
   input += synapse0x1a35750();
   input += synapse0x1a360e0();
   input += synapse0x1a36120();
   input += synapse0x1a36ab0();
   input += synapse0x1a36af0();
   input += synapse0x1a48fd0();
   input += synapse0x1a49010();
   input += synapse0x1a499a0();
   input += synapse0x1a499e0();
   input += synapse0x1a4a370();
   input += synapse0x1a4a3b0();
   input += synapse0x1a4ad40();
   input += synapse0x1a4ad80();
   input += synapse0x1a26c30();
   input += synapse0x1a26c70();
   input += synapse0x1a3a4e0();
   input += synapse0x1a3a520();
   input += synapse0x1a4b460();
   input += synapse0x1a4b4a0();
   input += synapse0x1a4b4e0();
   input += synapse0x1a4b520();
   input += synapse0x1a523d0();
   input += synapse0x1a52410();
   input += synapse0x1a52450();
   input += synapse0x1a52490();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a52030() {
   double input = input0x1a52030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a524d0() {
   double input = -1.05811;
   input += synapse0x1a52810();
   input += synapse0x1a52850();
   input += synapse0x1a52890();
   input += synapse0x1a528d0();
   input += synapse0x1a52910();
   input += synapse0x1a52950();
   input += synapse0x1a52990();
   input += synapse0x1a529d0();
   input += synapse0x1a52a10();
   input += synapse0x1a52a50();
   input += synapse0x1a52a90();
   input += synapse0x1a52ad0();
   input += synapse0x1a52b10();
   input += synapse0x1a52b50();
   input += synapse0x1a52b90();
   input += synapse0x1a52bd0();
   input += synapse0x1a52660();
   input += synapse0x1a526a0();
   input += synapse0x1a52d20();
   input += synapse0x1a52d60();
   input += synapse0x1a52da0();
   input += synapse0x1a52de0();
   input += synapse0x1a52e20();
   input += synapse0x1a52e60();
   input += synapse0x1a52ea0();
   input += synapse0x1a52ee0();
   input += synapse0x1a52f20();
   input += synapse0x1a52f60();
   input += synapse0x1a52fa0();
   input += synapse0x1a52fe0();
   input += synapse0x1a53020();
   input += synapse0x1a53060();
   input += synapse0x1a52c10();
   input += synapse0x1a52c50();
   input += synapse0x1a52c90();
   input += synapse0x1a52cd0();
   input += synapse0x1a532b0();
   input += synapse0x1a532f0();
   input += synapse0x1a53330();
   input += synapse0x1a53370();
   input += synapse0x1a533b0();
   input += synapse0x1a533f0();
   input += synapse0x1a53430();
   input += synapse0x1a53470();
   input += synapse0x1a534b0();
   input += synapse0x1a534f0();
   input += synapse0x1a53530();
   input += synapse0x1a53570();
   input += synapse0x1a535b0();
   input += synapse0x1a535f0();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a524d0() {
   double input = input0x1a524d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a53630() {
   double input = -0.267533;
   input += synapse0x1a53970();
   input += synapse0x1a539b0();
   input += synapse0x1a539f0();
   input += synapse0x1a53a30();
   input += synapse0x1a53a70();
   input += synapse0x1a53ab0();
   input += synapse0x1a53af0();
   input += synapse0x1a53b30();
   input += synapse0x1a53b70();
   input += synapse0x1a53bb0();
   input += synapse0x1a53bf0();
   input += synapse0x1a53c30();
   input += synapse0x1a53c70();
   input += synapse0x1a53cb0();
   input += synapse0x1a53cf0();
   input += synapse0x1a53d30();
   input += synapse0x1a537c0();
   input += synapse0x1a53800();
   input += synapse0x1a53e80();
   input += synapse0x1a53ec0();
   input += synapse0x1a53f00();
   input += synapse0x1a53f40();
   input += synapse0x1a53f80();
   input += synapse0x1a53fc0();
   input += synapse0x1a54000();
   input += synapse0x1a54040();
   input += synapse0x1a54080();
   input += synapse0x1a540c0();
   input += synapse0x1a54100();
   input += synapse0x1a54140();
   input += synapse0x1a54180();
   input += synapse0x1a541c0();
   input += synapse0x1a53d70();
   input += synapse0x1a53db0();
   input += synapse0x1a53df0();
   input += synapse0x1a53e30();
   input += synapse0x1a54410();
   input += synapse0x1a54450();
   input += synapse0x1a54490();
   input += synapse0x1a544d0();
   input += synapse0x1a54510();
   input += synapse0x1a54550();
   input += synapse0x1a54590();
   input += synapse0x1a545d0();
   input += synapse0x1a54610();
   input += synapse0x1a54650();
   input += synapse0x1a54690();
   input += synapse0x1a546d0();
   input += synapse0x1a54710();
   input += synapse0x1a54750();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a53630() {
   double input = input0x1a53630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a54790() {
   double input = 0.179681;
   input += synapse0x1a54ad0();
   input += synapse0x1a54b10();
   input += synapse0x1a54b50();
   input += synapse0x1a54b90();
   input += synapse0x1a54bd0();
   input += synapse0x1a54c10();
   input += synapse0x1a54c50();
   input += synapse0x1a54c90();
   input += synapse0x1a54cd0();
   input += synapse0x1a54d10();
   input += synapse0x1a54d50();
   input += synapse0x1a54d90();
   input += synapse0x1a54dd0();
   input += synapse0x1a54e10();
   input += synapse0x1a54e50();
   input += synapse0x1a54e90();
   input += synapse0x1a54920();
   input += synapse0x1a54960();
   input += synapse0x1a54fe0();
   input += synapse0x1a55020();
   input += synapse0x1a55060();
   input += synapse0x1a550a0();
   input += synapse0x1a550e0();
   input += synapse0x1a55120();
   input += synapse0x1a55160();
   input += synapse0x1a551a0();
   input += synapse0x1a551e0();
   input += synapse0x1a55220();
   input += synapse0x1a55260();
   input += synapse0x1a552a0();
   input += synapse0x1a552e0();
   input += synapse0x1a55320();
   input += synapse0x1a54ed0();
   input += synapse0x1a54f10();
   input += synapse0x1a54f50();
   input += synapse0x1a54f90();
   input += synapse0x1a55570();
   input += synapse0x1a555b0();
   input += synapse0x1a555f0();
   input += synapse0x1a55630();
   input += synapse0x1a55670();
   input += synapse0x1a556b0();
   input += synapse0x1a556f0();
   input += synapse0x1a55730();
   input += synapse0x1a55770();
   input += synapse0x1a557b0();
   input += synapse0x1a557f0();
   input += synapse0x1a55830();
   input += synapse0x1a55870();
   input += synapse0x1a558b0();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a54790() {
   double input = input0x1a54790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_8::input0x1a558f0() {
   double input = -2.74946;
   input += synapse0x1a269d0();
   input += synapse0x1a55b10();
   input += synapse0x1a55b50();
   input += synapse0x1a55b90();
   input += synapse0x1a55bd0();
   return input;
}

double NNfunction_NN_1_8::neuron0x1a558f0() {
   double input = input0x1a558f0();
   return (input * 1)+0;
}

double NNfunction_NN_1_8::synapse0x17e1820() {
   return (neuron0x1a219b0()*0.362192);
}

double NNfunction_NN_1_8::synapse0x1a21870() {
   return (neuron0x1a21cf0()*0.160872);
}

double NNfunction_NN_1_8::synapse0x1a218b0() {
   return (neuron0x1a22030()*0.437009);
}

double NNfunction_NN_1_8::synapse0x1a26cc0() {
   return (neuron0x1a22370()*-0.194547);
}

double NNfunction_NN_1_8::synapse0x1a26d00() {
   return (neuron0x1a226b0()*-0.449794);
}

double NNfunction_NN_1_8::synapse0x1a26d40() {
   return (neuron0x1a229f0()*-0.182122);
}

double NNfunction_NN_1_8::synapse0x1a26d80() {
   return (neuron0x1a22d30()*-0.524815);
}

double NNfunction_NN_1_8::synapse0x1a26dc0() {
   return (neuron0x1a23070()*-0.492316);
}

double NNfunction_NN_1_8::synapse0x1a26e00() {
   return (neuron0x1a233b0()*0.288334);
}

double NNfunction_NN_1_8::synapse0x1a26e40() {
   return (neuron0x1a236f0()*-0.0896398);
}

double NNfunction_NN_1_8::synapse0x1a26e80() {
   return (neuron0x1a23a30()*-0.0866947);
}

double NNfunction_NN_1_8::synapse0x1a26ec0() {
   return (neuron0x1a23d70()*-0.345346);
}

double NNfunction_NN_1_8::synapse0x1a26f00() {
   return (neuron0x1a240b0()*0.188382);
}

double NNfunction_NN_1_8::synapse0x1a26f40() {
   return (neuron0x1a243f0()*0.187087);
}

double NNfunction_NN_1_8::synapse0x1a26f80() {
   return (neuron0x1a24730()*0.21163);
}

double NNfunction_NN_1_8::synapse0x1a26fc0() {
   return (neuron0x1a24a70()*-0.211633);
}

double NNfunction_NN_1_8::synapse0x1a217e0() {
   return (neuron0x1a24db0()*-0.710146);
}

double NNfunction_NN_1_8::synapse0x1a21820() {
   return (neuron0x1a25310()*-0.20179);
}

double NNfunction_NN_1_8::synapse0x17d3080() {
   return (neuron0x1a25530()*-0.702526);
}

double NNfunction_NN_1_8::synapse0x17d30c0() {
   return (neuron0x1a25870()*-0.488841);
}

double NNfunction_NN_1_8::synapse0x1a27220() {
   return (neuron0x1a25bb0()*-0.0996293);
}

double NNfunction_NN_1_8::synapse0x1a27260() {
   return (neuron0x1a25ef0()*-0.505208);
}

double NNfunction_NN_1_8::synapse0x1a272a0() {
   return (neuron0x1a26230()*-0.226273);
}

double NNfunction_NN_1_8::synapse0x1a272e0() {
   return (neuron0x1a26570()*0.69697);
}

double NNfunction_NN_1_8::synapse0x1a27660() {
   return (neuron0x1a219b0()*-0.0291178);
}

double NNfunction_NN_1_8::synapse0x1a276a0() {
   return (neuron0x1a21cf0()*-0.0380248);
}

double NNfunction_NN_1_8::synapse0x1a276e0() {
   return (neuron0x1a22030()*1.39294);
}

double NNfunction_NN_1_8::synapse0x1a27720() {
   return (neuron0x1a22370()*-0.0415136);
}

double NNfunction_NN_1_8::synapse0x1a27760() {
   return (neuron0x1a226b0()*-0.0107012);
}

double NNfunction_NN_1_8::synapse0x1a277a0() {
   return (neuron0x1a229f0()*0.00392371);
}

double NNfunction_NN_1_8::synapse0x1a277e0() {
   return (neuron0x1a22d30()*-7.6255e-05);
}

double NNfunction_NN_1_8::synapse0x1a27820() {
   return (neuron0x1a23070()*0.0507938);
}

double NNfunction_NN_1_8::synapse0x1a27860() {
   return (neuron0x1a233b0()*-0.0151954);
}

double NNfunction_NN_1_8::synapse0x1a27110() {
   return (neuron0x1a236f0()*-0.0412867);
}

double NNfunction_NN_1_8::synapse0x1a27150() {
   return (neuron0x1a23a30()*-0.0146111);
}

double NNfunction_NN_1_8::synapse0x1a27190() {
   return (neuron0x1a23d70()*-5.55582);
}

double NNfunction_NN_1_8::synapse0x1a271d0() {
   return (neuron0x1a240b0()*-0.0147275);
}

double NNfunction_NN_1_8::synapse0x1a27ab0() {
   return (neuron0x1a243f0()*0.0168605);
}

double NNfunction_NN_1_8::synapse0x1a27af0() {
   return (neuron0x1a24730()*0.0905848);
}

double NNfunction_NN_1_8::synapse0x1a27b30() {
   return (neuron0x1a24a70()*0.091065);
}

double NNfunction_NN_1_8::synapse0x1a274b0() {
   return (neuron0x1a24db0()*-0.0812749);
}

double NNfunction_NN_1_8::synapse0x1a274f0() {
   return (neuron0x1a25310()*-0.0598557);
}

double NNfunction_NN_1_8::synapse0x1a27c80() {
   return (neuron0x1a25530()*0.00340412);
}

double NNfunction_NN_1_8::synapse0x1a27cc0() {
   return (neuron0x1a25870()*0.0215559);
}

double NNfunction_NN_1_8::synapse0x1a27d00() {
   return (neuron0x1a25bb0()*-0.0474126);
}

double NNfunction_NN_1_8::synapse0x1a27d40() {
   return (neuron0x1a25ef0()*-0.0480372);
}

double NNfunction_NN_1_8::synapse0x1a27d80() {
   return (neuron0x1a26230()*-0.00531106);
}

double NNfunction_NN_1_8::synapse0x1a27dc0() {
   return (neuron0x1a26570()*-3.46605);
}

double NNfunction_NN_1_8::synapse0x1a28140() {
   return (neuron0x1a219b0()*-0.0393197);
}

double NNfunction_NN_1_8::synapse0x1a28180() {
   return (neuron0x1a21cf0()*15.2364);
}

double NNfunction_NN_1_8::synapse0x1a281c0() {
   return (neuron0x1a22030()*0.109183);
}

double NNfunction_NN_1_8::synapse0x1a28200() {
   return (neuron0x1a22370()*-0.0155614);
}

double NNfunction_NN_1_8::synapse0x1a28240() {
   return (neuron0x1a226b0()*-0.0224278);
}

double NNfunction_NN_1_8::synapse0x1a28280() {
   return (neuron0x1a229f0()*0.0109614);
}

double NNfunction_NN_1_8::synapse0x1a282c0() {
   return (neuron0x1a22d30()*-0.00834757);
}

double NNfunction_NN_1_8::synapse0x1a28300() {
   return (neuron0x1a23070()*-0.0130311);
}

double NNfunction_NN_1_8::synapse0x1a28340() {
   return (neuron0x1a233b0()*-0.00847521);
}

double NNfunction_NN_1_8::synapse0x1a28380() {
   return (neuron0x1a236f0()*-0.0150781);
}

double NNfunction_NN_1_8::synapse0x1a283c0() {
   return (neuron0x1a23a30()*0.000449766);
}

double NNfunction_NN_1_8::synapse0x1a28400() {
   return (neuron0x1a23d70()*-0.0270431);
}

double NNfunction_NN_1_8::synapse0x1a28440() {
   return (neuron0x1a240b0()*0.0353962);
}

double NNfunction_NN_1_8::synapse0x1a28480() {
   return (neuron0x1a243f0()*0.0212644);
}

double NNfunction_NN_1_8::synapse0x1a284c0() {
   return (neuron0x1a24730()*-0.00849834);
}

double NNfunction_NN_1_8::synapse0x1a28500() {
   return (neuron0x1a24a70()*0.0232656);
}

double NNfunction_NN_1_8::synapse0x1a27f90() {
   return (neuron0x1a24db0()*0.00864256);
}

double NNfunction_NN_1_8::synapse0x1a27fd0() {
   return (neuron0x1a25310()*0.020882);
}

double NNfunction_NN_1_8::synapse0x17e0ef0() {
   return (neuron0x1a25530()*-0.0018221);
}

double NNfunction_NN_1_8::synapse0x17e0f30() {
   return (neuron0x1a25870()*-0.0196595);
}

double NNfunction_NN_1_8::synapse0x1a10a40() {
   return (neuron0x1a25bb0()*0.0186847);
}

double NNfunction_NN_1_8::synapse0x1a10a80() {
   return (neuron0x1a25ef0()*-0.00703717);
}

double NNfunction_NN_1_8::synapse0x1a10ac0() {
   return (neuron0x1a26230()*0.0212555);
}

double NNfunction_NN_1_8::synapse0x1a218f0() {
   return (neuron0x1a26570()*0.0820204);
}

double NNfunction_NN_1_8::synapse0x1a27a50() {
   return (neuron0x1a219b0()*0.205546);
}

double NNfunction_NN_1_8::synapse0x1a21930() {
   return (neuron0x1a21cf0()*-0.0326619);
}

double NNfunction_NN_1_8::synapse0x1a21970() {
   return (neuron0x1a22030()*-0.0949589);
}

double NNfunction_NN_1_8::synapse0x1a28650() {
   return (neuron0x1a22370()*0.0694701);
}

double NNfunction_NN_1_8::synapse0x1a28690() {
   return (neuron0x1a226b0()*0.00705852);
}

double NNfunction_NN_1_8::synapse0x1a286d0() {
   return (neuron0x1a229f0()*-0.00931438);
}

double NNfunction_NN_1_8::synapse0x1a28710() {
   return (neuron0x1a22d30()*0.0143192);
}

double NNfunction_NN_1_8::synapse0x1a28750() {
   return (neuron0x1a23070()*0.0115876);
}

double NNfunction_NN_1_8::synapse0x1a28790() {
   return (neuron0x1a233b0()*0.010729);
}

double NNfunction_NN_1_8::synapse0x1a287d0() {
   return (neuron0x1a236f0()*-0.00357807);
}

double NNfunction_NN_1_8::synapse0x1a28810() {
   return (neuron0x1a23a30()*-0.0332007);
}

double NNfunction_NN_1_8::synapse0x1a28850() {
   return (neuron0x1a23d70()*-0.00873724);
}

double NNfunction_NN_1_8::synapse0x1a28890() {
   return (neuron0x1a240b0()*0.0205457);
}

double NNfunction_NN_1_8::synapse0x1a288d0() {
   return (neuron0x1a243f0()*0.0128056);
}

double NNfunction_NN_1_8::synapse0x1a28910() {
   return (neuron0x1a24730()*0.0154842);
}

double NNfunction_NN_1_8::synapse0x1a28950() {
   return (neuron0x1a24a70()*0.0399662);
}

double NNfunction_NN_1_8::synapse0x1a278a0() {
   return (neuron0x1a24db0()*-0.0347947);
}

double NNfunction_NN_1_8::synapse0x1a278e0() {
   return (neuron0x1a25310()*-0.0111593);
}

double NNfunction_NN_1_8::synapse0x1a28aa0() {
   return (neuron0x1a25530()*0.00238014);
}

double NNfunction_NN_1_8::synapse0x1a28ae0() {
   return (neuron0x1a25870()*0.00852027);
}

double NNfunction_NN_1_8::synapse0x1a28b20() {
   return (neuron0x1a25bb0()*-0.0356146);
}

double NNfunction_NN_1_8::synapse0x1a28b60() {
   return (neuron0x1a25ef0()*-0.0310813);
}

double NNfunction_NN_1_8::synapse0x1a28ba0() {
   return (neuron0x1a26230()*0.0372168);
}

double NNfunction_NN_1_8::synapse0x1a28be0() {
   return (neuron0x1a26570()*9.05781);
}

double NNfunction_NN_1_8::synapse0x1a28f60() {
   return (neuron0x1a219b0()*-0.850287);
}

double NNfunction_NN_1_8::synapse0x1a28fa0() {
   return (neuron0x1a21cf0()*0.0592034);
}

double NNfunction_NN_1_8::synapse0x1a28fe0() {
   return (neuron0x1a22030()*0.744805);
}

double NNfunction_NN_1_8::synapse0x1a29020() {
   return (neuron0x1a22370()*0.319844);
}

double NNfunction_NN_1_8::synapse0x1a29060() {
   return (neuron0x1a226b0()*-0.492359);
}

double NNfunction_NN_1_8::synapse0x1a290a0() {
   return (neuron0x1a229f0()*0.743362);
}

double NNfunction_NN_1_8::synapse0x1a290e0() {
   return (neuron0x1a22d30()*-0.815514);
}

double NNfunction_NN_1_8::synapse0x1a29120() {
   return (neuron0x1a23070()*0.239908);
}

double NNfunction_NN_1_8::synapse0x1a29160() {
   return (neuron0x1a233b0()*0.266384);
}

double NNfunction_NN_1_8::synapse0x1a291a0() {
   return (neuron0x1a236f0()*0.111015);
}

double NNfunction_NN_1_8::synapse0x1a291e0() {
   return (neuron0x1a23a30()*0.168545);
}

double NNfunction_NN_1_8::synapse0x1a29220() {
   return (neuron0x1a23d70()*-0.900988);
}

double NNfunction_NN_1_8::synapse0x1a29260() {
   return (neuron0x1a240b0()*0.0619435);
}

double NNfunction_NN_1_8::synapse0x1a292a0() {
   return (neuron0x1a243f0()*-0.0659104);
}

double NNfunction_NN_1_8::synapse0x1a292e0() {
   return (neuron0x1a24730()*-0.0760203);
}

double NNfunction_NN_1_8::synapse0x1a29320() {
   return (neuron0x1a24a70()*0.191793);
}

double NNfunction_NN_1_8::synapse0x1a28db0() {
   return (neuron0x1a24db0()*-0.148189);
}

double NNfunction_NN_1_8::synapse0x1a28df0() {
   return (neuron0x1a25310()*-0.11534);
}

double NNfunction_NN_1_8::synapse0x1a29470() {
   return (neuron0x1a25530()*-0.37673);
}

double NNfunction_NN_1_8::synapse0x1a294b0() {
   return (neuron0x1a25870()*0.00944298);
}

double NNfunction_NN_1_8::synapse0x1a294f0() {
   return (neuron0x1a25bb0()*0.36752);
}

double NNfunction_NN_1_8::synapse0x1a29530() {
   return (neuron0x1a25ef0()*0.0504714);
}

double NNfunction_NN_1_8::synapse0x1a29570() {
   return (neuron0x1a26230()*-0.464664);
}

double NNfunction_NN_1_8::synapse0x1a295b0() {
   return (neuron0x1a26570()*2.53785);
}

double NNfunction_NN_1_8::synapse0x1a29930() {
   return (neuron0x1a219b0()*-0.266182);
}

double NNfunction_NN_1_8::synapse0x1a29970() {
   return (neuron0x1a21cf0()*-0.0191982);
}

double NNfunction_NN_1_8::synapse0x1a299b0() {
   return (neuron0x1a22030()*-0.0506636);
}

double NNfunction_NN_1_8::synapse0x1a299f0() {
   return (neuron0x1a22370()*-0.0149764);
}

double NNfunction_NN_1_8::synapse0x1a29a30() {
   return (neuron0x1a226b0()*0.00182493);
}

double NNfunction_NN_1_8::synapse0x1a29a70() {
   return (neuron0x1a229f0()*0.0267974);
}

double NNfunction_NN_1_8::synapse0x1a29ab0() {
   return (neuron0x1a22d30()*-0.0767228);
}

double NNfunction_NN_1_8::synapse0x1a29af0() {
   return (neuron0x1a23070()*0.00886997);
}

double NNfunction_NN_1_8::synapse0x1a29b30() {
   return (neuron0x1a233b0()*0.00123691);
}

double NNfunction_NN_1_8::synapse0x17e1280() {
   return (neuron0x1a236f0()*-0.0179399);
}

double NNfunction_NN_1_8::synapse0x17e12c0() {
   return (neuron0x1a23a30()*0.0323962);
}

double NNfunction_NN_1_8::synapse0x17e1300() {
   return (neuron0x1a23d70()*2.71165);
}

double NNfunction_NN_1_8::synapse0x17e1340() {
   return (neuron0x1a240b0()*0.192678);
}

double NNfunction_NN_1_8::synapse0x17e1380() {
   return (neuron0x1a243f0()*-0.0844962);
}

double NNfunction_NN_1_8::synapse0x17e13c0() {
   return (neuron0x1a24730()*0.0859043);
}

double NNfunction_NN_1_8::synapse0x17e1400() {
   return (neuron0x1a24a70()*0.149642);
}

double NNfunction_NN_1_8::synapse0x1a29780() {
   return (neuron0x1a24db0()*0.166223);
}

double NNfunction_NN_1_8::synapse0x1a297c0() {
   return (neuron0x1a25310()*0.0274529);
}

double NNfunction_NN_1_8::synapse0x17e1550() {
   return (neuron0x1a25530()*-0.006589);
}

double NNfunction_NN_1_8::synapse0x17e1590() {
   return (neuron0x1a25870()*-0.0522486);
}

double NNfunction_NN_1_8::synapse0x17e15d0() {
   return (neuron0x1a25bb0()*0.0667115);
}

double NNfunction_NN_1_8::synapse0x17e1610() {
   return (neuron0x1a25ef0()*0.0845123);
}

double NNfunction_NN_1_8::synapse0x17e1650() {
   return (neuron0x1a26230()*-0.00203645);
}

double NNfunction_NN_1_8::synapse0x1a2a380() {
   return (neuron0x1a26570()*0.505498);
}

double NNfunction_NN_1_8::synapse0x1a2a700() {
   return (neuron0x1a219b0()*0.052747);
}

double NNfunction_NN_1_8::synapse0x1a2a740() {
   return (neuron0x1a21cf0()*0.000487141);
}

double NNfunction_NN_1_8::synapse0x1a2a780() {
   return (neuron0x1a22030()*-0.288245);
}

double NNfunction_NN_1_8::synapse0x1a2a7c0() {
   return (neuron0x1a22370()*-3.29246);
}

double NNfunction_NN_1_8::synapse0x1a2a800() {
   return (neuron0x1a226b0()*0.0251323);
}

double NNfunction_NN_1_8::synapse0x1a2a840() {
   return (neuron0x1a229f0()*-0.0112846);
}

double NNfunction_NN_1_8::synapse0x1a2a880() {
   return (neuron0x1a22d30()*-0.00149518);
}

double NNfunction_NN_1_8::synapse0x1a2a8c0() {
   return (neuron0x1a23070()*0.0161202);
}

double NNfunction_NN_1_8::synapse0x1a2a900() {
   return (neuron0x1a233b0()*-0.00634396);
}

double NNfunction_NN_1_8::synapse0x1a2a940() {
   return (neuron0x1a236f0()*0.0109572);
}

double NNfunction_NN_1_8::synapse0x1a2a980() {
   return (neuron0x1a23a30()*-0.0148937);
}

double NNfunction_NN_1_8::synapse0x1a2a9c0() {
   return (neuron0x1a23d70()*-0.195455);
}

double NNfunction_NN_1_8::synapse0x1a2aa00() {
   return (neuron0x1a240b0()*-0.0491197);
}

double NNfunction_NN_1_8::synapse0x1a2aa40() {
   return (neuron0x1a243f0()*-0.0632487);
}

double NNfunction_NN_1_8::synapse0x1a2aa80() {
   return (neuron0x1a24730()*-0.0307888);
}

double NNfunction_NN_1_8::synapse0x1a2aac0() {
   return (neuron0x1a24a70()*0.0333587);
}

double NNfunction_NN_1_8::synapse0x1a2a550() {
   return (neuron0x1a24db0()*0.00215372);
}

double NNfunction_NN_1_8::synapse0x1a2a590() {
   return (neuron0x1a25310()*-0.00343385);
}

double NNfunction_NN_1_8::synapse0x1a2ac10() {
   return (neuron0x1a25530()*0.0123367);
}

double NNfunction_NN_1_8::synapse0x1a2ac50() {
   return (neuron0x1a25870()*0.00403074);
}

double NNfunction_NN_1_8::synapse0x1a2ac90() {
   return (neuron0x1a25bb0()*0.0155859);
}

double NNfunction_NN_1_8::synapse0x1a2acd0() {
   return (neuron0x1a25ef0()*0.0279629);
}

double NNfunction_NN_1_8::synapse0x1a2ad10() {
   return (neuron0x1a26230()*-0.0131679);
}

double NNfunction_NN_1_8::synapse0x1a2ad50() {
   return (neuron0x1a26570()*0.0668892);
}

double NNfunction_NN_1_8::synapse0x1a2b0d0() {
   return (neuron0x1a219b0()*-0.156191);
}

double NNfunction_NN_1_8::synapse0x1a2b110() {
   return (neuron0x1a21cf0()*0.0808968);
}

double NNfunction_NN_1_8::synapse0x1a2b150() {
   return (neuron0x1a22030()*1.11292);
}

double NNfunction_NN_1_8::synapse0x1a2b190() {
   return (neuron0x1a22370()*-0.0413121);
}

double NNfunction_NN_1_8::synapse0x1a2b1d0() {
   return (neuron0x1a226b0()*-0.0847277);
}

double NNfunction_NN_1_8::synapse0x1a2b210() {
   return (neuron0x1a229f0()*-0.206049);
}

double NNfunction_NN_1_8::synapse0x1a2b250() {
   return (neuron0x1a22d30()*-0.0246344);
}

double NNfunction_NN_1_8::synapse0x1a2b290() {
   return (neuron0x1a23070()*-0.0509168);
}

double NNfunction_NN_1_8::synapse0x1a2b2d0() {
   return (neuron0x1a233b0()*-0.0666567);
}

double NNfunction_NN_1_8::synapse0x1a2b310() {
   return (neuron0x1a236f0()*0.0982238);
}

double NNfunction_NN_1_8::synapse0x1a2b350() {
   return (neuron0x1a23a30()*0.00989887);
}

double NNfunction_NN_1_8::synapse0x1a2b390() {
   return (neuron0x1a23d70()*0.823302);
}

double NNfunction_NN_1_8::synapse0x1a2b3d0() {
   return (neuron0x1a240b0()*-0.118206);
}

double NNfunction_NN_1_8::synapse0x1a2b410() {
   return (neuron0x1a243f0()*0.00499002);
}

double NNfunction_NN_1_8::synapse0x1a2b450() {
   return (neuron0x1a24730()*0.0948479);
}

double NNfunction_NN_1_8::synapse0x1a2b490() {
   return (neuron0x1a24a70()*0.205895);
}

double NNfunction_NN_1_8::synapse0x1a2af20() {
   return (neuron0x1a24db0()*0.0868118);
}

double NNfunction_NN_1_8::synapse0x1a2af60() {
   return (neuron0x1a25310()*0.0311605);
}

double NNfunction_NN_1_8::synapse0x1a2b5e0() {
   return (neuron0x1a25530()*-0.0411504);
}

double NNfunction_NN_1_8::synapse0x1a2b620() {
   return (neuron0x1a25870()*-0.0155969);
}

double NNfunction_NN_1_8::synapse0x1a2b660() {
   return (neuron0x1a25bb0()*0.0956222);
}

double NNfunction_NN_1_8::synapse0x1a2b6a0() {
   return (neuron0x1a25ef0()*-0.0653789);
}

double NNfunction_NN_1_8::synapse0x1a2b6e0() {
   return (neuron0x1a26230()*0.0255493);
}

double NNfunction_NN_1_8::synapse0x1a2b720() {
   return (neuron0x1a26570()*-0.355835);
}

double NNfunction_NN_1_8::synapse0x1a25200() {
   return (neuron0x1a219b0()*-0.827129);
}

double NNfunction_NN_1_8::synapse0x1a25240() {
   return (neuron0x1a21cf0()*0.0371268);
}

double NNfunction_NN_1_8::synapse0x1a25280() {
   return (neuron0x1a22030()*-1.82564);
}

double NNfunction_NN_1_8::synapse0x1a252c0() {
   return (neuron0x1a22370()*-0.00875495);
}

double NNfunction_NN_1_8::synapse0x1a2bcb0() {
   return (neuron0x1a226b0()*-0.0782311);
}

double NNfunction_NN_1_8::synapse0x1a2bcf0() {
   return (neuron0x1a229f0()*0.00577868);
}

double NNfunction_NN_1_8::synapse0x1a2bd30() {
   return (neuron0x1a22d30()*0.127449);
}

double NNfunction_NN_1_8::synapse0x1a2bd70() {
   return (neuron0x1a23070()*-0.033173);
}

double NNfunction_NN_1_8::synapse0x1a2bdb0() {
   return (neuron0x1a233b0()*0.00731702);
}

double NNfunction_NN_1_8::synapse0x1a2bdf0() {
   return (neuron0x1a236f0()*-0.10073);
}

double NNfunction_NN_1_8::synapse0x1a2be30() {
   return (neuron0x1a23a30()*-0.0170436);
}

double NNfunction_NN_1_8::synapse0x1a2be70() {
   return (neuron0x1a23d70()*0.0816569);
}

double NNfunction_NN_1_8::synapse0x1a2beb0() {
   return (neuron0x1a240b0()*0.0871203);
}

double NNfunction_NN_1_8::synapse0x1a2bef0() {
   return (neuron0x1a243f0()*0.0282413);
}

double NNfunction_NN_1_8::synapse0x1a2bf30() {
   return (neuron0x1a24730()*-0.0763152);
}

double NNfunction_NN_1_8::synapse0x1a2bf70() {
   return (neuron0x1a24a70()*0.0622726);
}

double NNfunction_NN_1_8::synapse0x1a2b8f0() {
   return (neuron0x1a24db0()*0.0706555);
}

double NNfunction_NN_1_8::synapse0x1a2b930() {
   return (neuron0x1a25310()*0.00304696);
}

double NNfunction_NN_1_8::synapse0x1a2c0c0() {
   return (neuron0x1a25530()*-0.0152466);
}

double NNfunction_NN_1_8::synapse0x1a2c100() {
   return (neuron0x1a25870()*0.0646125);
}

double NNfunction_NN_1_8::synapse0x1a2c140() {
   return (neuron0x1a25bb0()*0.0265845);
}

double NNfunction_NN_1_8::synapse0x1a2c180() {
   return (neuron0x1a25ef0()*-0.0307037);
}

double NNfunction_NN_1_8::synapse0x1a2c1c0() {
   return (neuron0x1a26230()*0.11924);
}

double NNfunction_NN_1_8::synapse0x1a2c200() {
   return (neuron0x1a26570()*-1.35148);
}

double NNfunction_NN_1_8::synapse0x1a2c580() {
   return (neuron0x1a219b0()*0.108534);
}

double NNfunction_NN_1_8::synapse0x1a2c5c0() {
   return (neuron0x1a21cf0()*-3.99105);
}

double NNfunction_NN_1_8::synapse0x1a2c600() {
   return (neuron0x1a22030()*-0.554379);
}

double NNfunction_NN_1_8::synapse0x1a2c640() {
   return (neuron0x1a22370()*0.122905);
}

double NNfunction_NN_1_8::synapse0x1a2c680() {
   return (neuron0x1a226b0()*0.0203971);
}

double NNfunction_NN_1_8::synapse0x1a2c6c0() {
   return (neuron0x1a229f0()*0.0678673);
}

double NNfunction_NN_1_8::synapse0x1a2c700() {
   return (neuron0x1a22d30()*0.0381807);
}

double NNfunction_NN_1_8::synapse0x1a2c740() {
   return (neuron0x1a23070()*-0.0528488);
}

double NNfunction_NN_1_8::synapse0x1a2c780() {
   return (neuron0x1a233b0()*-0.119376);
}

double NNfunction_NN_1_8::synapse0x1a2c7c0() {
   return (neuron0x1a236f0()*-0.0355919);
}

double NNfunction_NN_1_8::synapse0x1a2c800() {
   return (neuron0x1a23a30()*-0.0779445);
}

double NNfunction_NN_1_8::synapse0x1a2c840() {
   return (neuron0x1a23d70()*0.131188);
}

double NNfunction_NN_1_8::synapse0x1a2c880() {
   return (neuron0x1a240b0()*0.102319);
}

double NNfunction_NN_1_8::synapse0x1a2c8c0() {
   return (neuron0x1a243f0()*0.0254115);
}

double NNfunction_NN_1_8::synapse0x1a2c900() {
   return (neuron0x1a24730()*-0.0371803);
}

double NNfunction_NN_1_8::synapse0x1a2c940() {
   return (neuron0x1a24a70()*0.0196227);
}

double NNfunction_NN_1_8::synapse0x1a2c3d0() {
   return (neuron0x1a24db0()*0.0315586);
}

double NNfunction_NN_1_8::synapse0x1a2c410() {
   return (neuron0x1a25310()*0.0645262);
}

double NNfunction_NN_1_8::synapse0x1a2ca90() {
   return (neuron0x1a25530()*0.135076);
}

double NNfunction_NN_1_8::synapse0x1a2cad0() {
   return (neuron0x1a25870()*0.083822);
}

double NNfunction_NN_1_8::synapse0x1a2cb10() {
   return (neuron0x1a25bb0()*-0.0522987);
}

double NNfunction_NN_1_8::synapse0x1a2cb50() {
   return (neuron0x1a25ef0()*-0.0152048);
}

double NNfunction_NN_1_8::synapse0x1a2cb90() {
   return (neuron0x1a26230()*-0.0458002);
}

double NNfunction_NN_1_8::synapse0x1a2cbd0() {
   return (neuron0x1a26570()*0.30393);
}

double NNfunction_NN_1_8::synapse0x1a2cf50() {
   return (neuron0x1a219b0()*-0.0131514);
}

double NNfunction_NN_1_8::synapse0x1a2cf90() {
   return (neuron0x1a21cf0()*-0.0995129);
}

double NNfunction_NN_1_8::synapse0x1a2cfd0() {
   return (neuron0x1a22030()*1.77868);
}

double NNfunction_NN_1_8::synapse0x1a2d010() {
   return (neuron0x1a22370()*-0.0641209);
}

double NNfunction_NN_1_8::synapse0x1a2d050() {
   return (neuron0x1a226b0()*-0.0189714);
}

double NNfunction_NN_1_8::synapse0x1a2d090() {
   return (neuron0x1a229f0()*0.0369014);
}

double NNfunction_NN_1_8::synapse0x1a2d0d0() {
   return (neuron0x1a22d30()*0.187613);
}

double NNfunction_NN_1_8::synapse0x1a2d110() {
   return (neuron0x1a23070()*-0.0764625);
}

double NNfunction_NN_1_8::synapse0x1a2d150() {
   return (neuron0x1a233b0()*-0.136142);
}

double NNfunction_NN_1_8::synapse0x1a2d190() {
   return (neuron0x1a236f0()*-0.0755361);
}

double NNfunction_NN_1_8::synapse0x1a2d1d0() {
   return (neuron0x1a23a30()*0.022242);
}

double NNfunction_NN_1_8::synapse0x1a2d210() {
   return (neuron0x1a23d70()*0.0219079);
}

double NNfunction_NN_1_8::synapse0x1a2d250() {
   return (neuron0x1a240b0()*-1.1512);
}

double NNfunction_NN_1_8::synapse0x1a2d290() {
   return (neuron0x1a243f0()*0.115749);
}

double NNfunction_NN_1_8::synapse0x1a2d2d0() {
   return (neuron0x1a24730()*-0.115418);
}

double NNfunction_NN_1_8::synapse0x1a2d310() {
   return (neuron0x1a24a70()*0.138219);
}

double NNfunction_NN_1_8::synapse0x1a2cda0() {
   return (neuron0x1a24db0()*-0.0425088);
}

double NNfunction_NN_1_8::synapse0x1a2cde0() {
   return (neuron0x1a25310()*-0.201518);
}

double NNfunction_NN_1_8::synapse0x1a29b70() {
   return (neuron0x1a25530()*-0.287375);
}

double NNfunction_NN_1_8::synapse0x1a29bb0() {
   return (neuron0x1a25870()*0.000797148);
}

double NNfunction_NN_1_8::synapse0x1a29bf0() {
   return (neuron0x1a25bb0()*-0.0385472);
}

double NNfunction_NN_1_8::synapse0x1a29c30() {
   return (neuron0x1a25ef0()*-0.0121033);
}

double NNfunction_NN_1_8::synapse0x1a29c70() {
   return (neuron0x1a26230()*-0.196162);
}

double NNfunction_NN_1_8::synapse0x1a29cb0() {
   return (neuron0x1a26570()*1.0445);
}

double NNfunction_NN_1_8::synapse0x1a2a030() {
   return (neuron0x1a219b0()*-0.0192491);
}

double NNfunction_NN_1_8::synapse0x1a2a070() {
   return (neuron0x1a21cf0()*0.0193038);
}

double NNfunction_NN_1_8::synapse0x1a2a0b0() {
   return (neuron0x1a22030()*-2.30536);
}

double NNfunction_NN_1_8::synapse0x1a2a0f0() {
   return (neuron0x1a22370()*-0.161591);
}

double NNfunction_NN_1_8::synapse0x1a2a130() {
   return (neuron0x1a226b0()*-0.0456687);
}

double NNfunction_NN_1_8::synapse0x1a2a170() {
   return (neuron0x1a229f0()*0.0403441);
}

double NNfunction_NN_1_8::synapse0x1a2a1b0() {
   return (neuron0x1a22d30()*-0.0181822);
}

double NNfunction_NN_1_8::synapse0x1a2a1f0() {
   return (neuron0x1a23070()*-0.0803056);
}

double NNfunction_NN_1_8::synapse0x1a2a230() {
   return (neuron0x1a233b0()*0.0251235);
}

double NNfunction_NN_1_8::synapse0x1a2a270() {
   return (neuron0x1a236f0()*-0.00149716);
}

double NNfunction_NN_1_8::synapse0x1a2a2b0() {
   return (neuron0x1a23a30()*0.0938067);
}

double NNfunction_NN_1_8::synapse0x1a2a2f0() {
   return (neuron0x1a23d70()*0.224134);
}

double NNfunction_NN_1_8::synapse0x1a2a330() {
   return (neuron0x1a240b0()*-0.0487407);
}

double NNfunction_NN_1_8::synapse0x1a2e470() {
   return (neuron0x1a243f0()*0.0018369);
}

double NNfunction_NN_1_8::synapse0x1a2e4b0() {
   return (neuron0x1a24730()*0.0156678);
}

double NNfunction_NN_1_8::synapse0x1a2e4f0() {
   return (neuron0x1a24a70()*0.0681444);
}

double NNfunction_NN_1_8::synapse0x1a29e80() {
   return (neuron0x1a24db0()*0.103372);
}

double NNfunction_NN_1_8::synapse0x1a29ec0() {
   return (neuron0x1a25310()*-0.0512581);
}

double NNfunction_NN_1_8::synapse0x1a2e640() {
   return (neuron0x1a25530()*-0.099637);
}

double NNfunction_NN_1_8::synapse0x1a2e680() {
   return (neuron0x1a25870()*-0.0160859);
}

double NNfunction_NN_1_8::synapse0x1a2e6c0() {
   return (neuron0x1a25bb0()*-0.0646337);
}

double NNfunction_NN_1_8::synapse0x1a2e700() {
   return (neuron0x1a25ef0()*0.000676394);
}

double NNfunction_NN_1_8::synapse0x1a2e740() {
   return (neuron0x1a26230()*-0.127323);
}

double NNfunction_NN_1_8::synapse0x1a2e780() {
   return (neuron0x1a26570()*-0.586087);
}

double NNfunction_NN_1_8::synapse0x1a2eb00() {
   return (neuron0x1a219b0()*0.129975);
}

double NNfunction_NN_1_8::synapse0x1a2eb40() {
   return (neuron0x1a21cf0()*-0.140279);
}

double NNfunction_NN_1_8::synapse0x1a2eb80() {
   return (neuron0x1a22030()*-0.247693);
}

double NNfunction_NN_1_8::synapse0x1a2ebc0() {
   return (neuron0x1a22370()*1.05454);
}

double NNfunction_NN_1_8::synapse0x1a2ec00() {
   return (neuron0x1a226b0()*0.0380015);
}

double NNfunction_NN_1_8::synapse0x1a2ec40() {
   return (neuron0x1a229f0()*0.119007);
}

double NNfunction_NN_1_8::synapse0x1a2ec80() {
   return (neuron0x1a22d30()*0.0332136);
}

double NNfunction_NN_1_8::synapse0x1a2ecc0() {
   return (neuron0x1a23070()*0.00136184);
}

double NNfunction_NN_1_8::synapse0x1a2ed00() {
   return (neuron0x1a233b0()*0.0361058);
}

double NNfunction_NN_1_8::synapse0x1a2ed40() {
   return (neuron0x1a236f0()*-0.0763066);
}

double NNfunction_NN_1_8::synapse0x1a2ed80() {
   return (neuron0x1a23a30()*-0.0285099);
}

double NNfunction_NN_1_8::synapse0x1a2edc0() {
   return (neuron0x1a23d70()*0.114805);
}

double NNfunction_NN_1_8::synapse0x1a2ee00() {
   return (neuron0x1a240b0()*0.0707124);
}

double NNfunction_NN_1_8::synapse0x1a2ee40() {
   return (neuron0x1a243f0()*-0.0877102);
}

double NNfunction_NN_1_8::synapse0x1a2ee80() {
   return (neuron0x1a24730()*0.116133);
}

double NNfunction_NN_1_8::synapse0x1a2eec0() {
   return (neuron0x1a24a70()*0.0694218);
}

double NNfunction_NN_1_8::synapse0x1a2e950() {
   return (neuron0x1a24db0()*-0.0616833);
}

double NNfunction_NN_1_8::synapse0x1a2e990() {
   return (neuron0x1a25310()*-0.0292216);
}

double NNfunction_NN_1_8::synapse0x1a2f010() {
   return (neuron0x1a25530()*-0.0166328);
}

double NNfunction_NN_1_8::synapse0x1a2f050() {
   return (neuron0x1a25870()*0.0254692);
}

double NNfunction_NN_1_8::synapse0x1a2f090() {
   return (neuron0x1a25bb0()*0.0517739);
}

double NNfunction_NN_1_8::synapse0x1a2f0d0() {
   return (neuron0x1a25ef0()*-0.0229898);
}

double NNfunction_NN_1_8::synapse0x1a2f110() {
   return (neuron0x1a26230()*-0.0177777);
}

double NNfunction_NN_1_8::synapse0x1a2f150() {
   return (neuron0x1a26570()*0.342847);
}

double NNfunction_NN_1_8::synapse0x1a2f4d0() {
   return (neuron0x1a219b0()*-0.148127);
}

double NNfunction_NN_1_8::synapse0x1a2f510() {
   return (neuron0x1a21cf0()*0.0123152);
}

double NNfunction_NN_1_8::synapse0x1a2f550() {
   return (neuron0x1a22030()*0.0312934);
}

double NNfunction_NN_1_8::synapse0x1a2f590() {
   return (neuron0x1a22370()*0.0079974);
}

double NNfunction_NN_1_8::synapse0x1a2f5d0() {
   return (neuron0x1a226b0()*-0.0239702);
}

double NNfunction_NN_1_8::synapse0x1a2f610() {
   return (neuron0x1a229f0()*0.00884403);
}

double NNfunction_NN_1_8::synapse0x1a2f650() {
   return (neuron0x1a22d30()*-0.0134645);
}

double NNfunction_NN_1_8::synapse0x1a2f690() {
   return (neuron0x1a23070()*0.00561177);
}

double NNfunction_NN_1_8::synapse0x1a2f6d0() {
   return (neuron0x1a233b0()*-0.00990213);
}

double NNfunction_NN_1_8::synapse0x1a2f710() {
   return (neuron0x1a236f0()*-0.00590286);
}

double NNfunction_NN_1_8::synapse0x1a2f750() {
   return (neuron0x1a23a30()*0.0211343);
}

double NNfunction_NN_1_8::synapse0x1a2f790() {
   return (neuron0x1a23d70()*-0.0214282);
}

double NNfunction_NN_1_8::synapse0x1a2f7d0() {
   return (neuron0x1a240b0()*-0.0203661);
}

double NNfunction_NN_1_8::synapse0x1a2f810() {
   return (neuron0x1a243f0()*-0.0178261);
}

double NNfunction_NN_1_8::synapse0x1a2f850() {
   return (neuron0x1a24730()*0.0309333);
}

double NNfunction_NN_1_8::synapse0x1a2f890() {
   return (neuron0x1a24a70()*-0.00756929);
}

double NNfunction_NN_1_8::synapse0x1a2f320() {
   return (neuron0x1a24db0()*0.0188088);
}

double NNfunction_NN_1_8::synapse0x1a2f360() {
   return (neuron0x1a25310()*-0.00303418);
}

double NNfunction_NN_1_8::synapse0x1a2f9e0() {
   return (neuron0x1a25530()*-0.000154852);
}

double NNfunction_NN_1_8::synapse0x1a2fa20() {
   return (neuron0x1a25870()*0.0181766);
}

double NNfunction_NN_1_8::synapse0x1a2fa60() {
   return (neuron0x1a25bb0()*0.0226829);
}

double NNfunction_NN_1_8::synapse0x1a2faa0() {
   return (neuron0x1a25ef0()*-0.0092613);
}

double NNfunction_NN_1_8::synapse0x1a2fae0() {
   return (neuron0x1a26230()*-0.02791);
}

double NNfunction_NN_1_8::synapse0x1a2fb20() {
   return (neuron0x1a26570()*-18.088);
}

double NNfunction_NN_1_8::synapse0x1a2fea0() {
   return (neuron0x1a219b0()*0.078405);
}

double NNfunction_NN_1_8::synapse0x1a2fee0() {
   return (neuron0x1a21cf0()*0.0233873);
}

double NNfunction_NN_1_8::synapse0x1a2ff20() {
   return (neuron0x1a22030()*-0.903817);
}

double NNfunction_NN_1_8::synapse0x1a2ff60() {
   return (neuron0x1a22370()*-0.042458);
}

double NNfunction_NN_1_8::synapse0x1a2ffa0() {
   return (neuron0x1a226b0()*0.00870251);
}

double NNfunction_NN_1_8::synapse0x1a2ffe0() {
   return (neuron0x1a229f0()*-0.00543788);
}

double NNfunction_NN_1_8::synapse0x1a30020() {
   return (neuron0x1a22d30()*-0.0205963);
}

double NNfunction_NN_1_8::synapse0x1a30060() {
   return (neuron0x1a23070()*-0.017588);
}

double NNfunction_NN_1_8::synapse0x1a300a0() {
   return (neuron0x1a233b0()*0.0280442);
}

double NNfunction_NN_1_8::synapse0x1a300e0() {
   return (neuron0x1a236f0()*-0.0260003);
}

double NNfunction_NN_1_8::synapse0x1a30120() {
   return (neuron0x1a23a30()*0.00438627);
}

double NNfunction_NN_1_8::synapse0x1a30160() {
   return (neuron0x1a23d70()*0.532408);
}

double NNfunction_NN_1_8::synapse0x1a301a0() {
   return (neuron0x1a240b0()*-0.00275403);
}

double NNfunction_NN_1_8::synapse0x1a301e0() {
   return (neuron0x1a243f0()*-0.0189534);
}

double NNfunction_NN_1_8::synapse0x1a30220() {
   return (neuron0x1a24730()*0.00690871);
}

double NNfunction_NN_1_8::synapse0x1a30260() {
   return (neuron0x1a24a70()*0.0348334);
}

double NNfunction_NN_1_8::synapse0x1a2fcf0() {
   return (neuron0x1a24db0()*-0.000289996);
}

double NNfunction_NN_1_8::synapse0x1a2fd30() {
   return (neuron0x1a25310()*0.0376975);
}

double NNfunction_NN_1_8::synapse0x1a303b0() {
   return (neuron0x1a25530()*-0.0101986);
}

double NNfunction_NN_1_8::synapse0x1a303f0() {
   return (neuron0x1a25870()*-0.0524385);
}

double NNfunction_NN_1_8::synapse0x1a30430() {
   return (neuron0x1a25bb0()*0.0277212);
}

double NNfunction_NN_1_8::synapse0x1a30470() {
   return (neuron0x1a25ef0()*0.0232612);
}

double NNfunction_NN_1_8::synapse0x1a304b0() {
   return (neuron0x1a26230()*0.0250251);
}

double NNfunction_NN_1_8::synapse0x1a304f0() {
   return (neuron0x1a26570()*4.08145);
}

double NNfunction_NN_1_8::synapse0x1a30870() {
   return (neuron0x1a219b0()*0.0527891);
}

double NNfunction_NN_1_8::synapse0x1a21bd0() {
   return (neuron0x1a21cf0()*0.0123873);
}

double NNfunction_NN_1_8::synapse0x1a21c10() {
   return (neuron0x1a22030()*-0.748508);
}

double NNfunction_NN_1_8::synapse0x1a21f10() {
   return (neuron0x1a22370()*-1.71852);
}

double NNfunction_NN_1_8::synapse0x1a21f50() {
   return (neuron0x1a226b0()*0.0104256);
}

double NNfunction_NN_1_8::synapse0x1a22250() {
   return (neuron0x1a229f0()*0.0108978);
}

double NNfunction_NN_1_8::synapse0x1a22290() {
   return (neuron0x1a22d30()*-0.0795514);
}

double NNfunction_NN_1_8::synapse0x1a22590() {
   return (neuron0x1a23070()*-0.0129058);
}

double NNfunction_NN_1_8::synapse0x1a225d0() {
   return (neuron0x1a233b0()*-0.0108668);
}

double NNfunction_NN_1_8::synapse0x1a228d0() {
   return (neuron0x1a236f0()*0.011836);
}

double NNfunction_NN_1_8::synapse0x1a22910() {
   return (neuron0x1a23a30()*-0.0382051);
}

double NNfunction_NN_1_8::synapse0x1a22c10() {
   return (neuron0x1a23d70()*-0.59616);
}

double NNfunction_NN_1_8::synapse0x1a22c50() {
   return (neuron0x1a240b0()*-0.0789429);
}

double NNfunction_NN_1_8::synapse0x1a22f50() {
   return (neuron0x1a243f0()*0.00924108);
}

double NNfunction_NN_1_8::synapse0x1a22f90() {
   return (neuron0x1a24730()*-0.0683256);
}

double NNfunction_NN_1_8::synapse0x1a23290() {
   return (neuron0x1a24a70()*0.0426624);
}

double NNfunction_NN_1_8::synapse0x1a232d0() {
   return (neuron0x1a24db0()*0.0606708);
}

double NNfunction_NN_1_8::synapse0x1a235d0() {
   return (neuron0x1a25310()*-0.0693565);
}

double NNfunction_NN_1_8::synapse0x1a23610() {
   return (neuron0x1a25530()*-0.0250914);
}

double NNfunction_NN_1_8::synapse0x1a23910() {
   return (neuron0x1a25870()*-0.023131);
}

double NNfunction_NN_1_8::synapse0x1a23950() {
   return (neuron0x1a25bb0()*0.0740131);
}

double NNfunction_NN_1_8::synapse0x1a23c50() {
   return (neuron0x1a25ef0()*0.0755396);
}

double NNfunction_NN_1_8::synapse0x1a23c90() {
   return (neuron0x1a26230()*-0.0563183);
}

double NNfunction_NN_1_8::synapse0x1a23f90() {
   return (neuron0x1a26570()*0.146144);
}

double NNfunction_NN_1_8::synapse0x1a23fd0() {
   return (neuron0x1a219b0()*-0.0995866);
}

double NNfunction_NN_1_8::synapse0x1a24c90() {
   return (neuron0x1a21cf0()*0.0961542);
}

double NNfunction_NN_1_8::synapse0x1a24cd0() {
   return (neuron0x1a22030()*-1.04872);
}

double NNfunction_NN_1_8::synapse0x1a306c0() {
   return (neuron0x1a22370()*-0.00881925);
}

double NNfunction_NN_1_8::synapse0x1a30700() {
   return (neuron0x1a226b0()*0.0246051);
}

double NNfunction_NN_1_8::synapse0x1a24fd0() {
   return (neuron0x1a229f0()*-0.00948912);
}

double NNfunction_NN_1_8::synapse0x1a25010() {
   return (neuron0x1a22d30()*-0.010159);
}

double NNfunction_NN_1_8::synapse0x17d2f60() {
   return (neuron0x1a23070()*0.0282518);
}

double NNfunction_NN_1_8::synapse0x17d2fa0() {
   return (neuron0x1a233b0()*-0.00570806);
}

double NNfunction_NN_1_8::synapse0x1a25750() {
   return (neuron0x1a236f0()*0.0092993);
}

double NNfunction_NN_1_8::synapse0x1a25790() {
   return (neuron0x1a23a30()*-0.0149356);
}

double NNfunction_NN_1_8::synapse0x1a25a90() {
   return (neuron0x1a23d70()*-0.499054);
}

double NNfunction_NN_1_8::synapse0x1a25ad0() {
   return (neuron0x1a240b0()*-0.0688498);
}

double NNfunction_NN_1_8::synapse0x1a25dd0() {
   return (neuron0x1a243f0()*-0.0256301);
}

double NNfunction_NN_1_8::synapse0x1a25e10() {
   return (neuron0x1a24730()*0.00556977);
}

double NNfunction_NN_1_8::synapse0x1a26110() {
   return (neuron0x1a24a70()*-0.0413321);
}

double NNfunction_NN_1_8::synapse0x1a26150() {
   return (neuron0x1a24db0()*0.00550668);
}

double NNfunction_NN_1_8::synapse0x1a26450() {
   return (neuron0x1a25310()*0.0399114);
}

double NNfunction_NN_1_8::synapse0x1a26490() {
   return (neuron0x1a25530()*0.00939159);
}

double NNfunction_NN_1_8::synapse0x1a26790() {
   return (neuron0x1a25870()*-0.0337854);
}

double NNfunction_NN_1_8::synapse0x1a267d0() {
   return (neuron0x1a25bb0()*-0.0122317);
}

double NNfunction_NN_1_8::synapse0x1a242d0() {
   return (neuron0x1a25ef0()*0.0139668);
}

double NNfunction_NN_1_8::synapse0x1a24310() {
   return (neuron0x1a26230()*-0.00679841);
}

double NNfunction_NN_1_8::synapse0x1a325e0() {
   return (neuron0x1a26570()*-1.64714);
}

double NNfunction_NN_1_8::synapse0x1a32960() {
   return (neuron0x1a219b0()*-0.135808);
}

double NNfunction_NN_1_8::synapse0x1a329a0() {
   return (neuron0x1a21cf0()*-0.0284691);
}

double NNfunction_NN_1_8::synapse0x1a329e0() {
   return (neuron0x1a22030()*-0.00693473);
}

double NNfunction_NN_1_8::synapse0x1a32a20() {
   return (neuron0x1a22370()*1.75572);
}

double NNfunction_NN_1_8::synapse0x1a32a60() {
   return (neuron0x1a226b0()*-0.0878792);
}

double NNfunction_NN_1_8::synapse0x1a32aa0() {
   return (neuron0x1a229f0()*-0.014913);
}

double NNfunction_NN_1_8::synapse0x1a32ae0() {
   return (neuron0x1a22d30()*-0.0384144);
}

double NNfunction_NN_1_8::synapse0x1a32b20() {
   return (neuron0x1a23070()*-0.0782155);
}

double NNfunction_NN_1_8::synapse0x1a32b60() {
   return (neuron0x1a233b0()*-0.0654389);
}

double NNfunction_NN_1_8::synapse0x1a32ba0() {
   return (neuron0x1a236f0()*0.0559982);
}

double NNfunction_NN_1_8::synapse0x1a32be0() {
   return (neuron0x1a23a30()*0.01694);
}

double NNfunction_NN_1_8::synapse0x1a32c20() {
   return (neuron0x1a23d70()*-3.9817);
}

double NNfunction_NN_1_8::synapse0x1a32c60() {
   return (neuron0x1a240b0()*0.221831);
}

double NNfunction_NN_1_8::synapse0x1a32ca0() {
   return (neuron0x1a243f0()*0.0658595);
}

double NNfunction_NN_1_8::synapse0x1a32ce0() {
   return (neuron0x1a24730()*-0.0085222);
}

double NNfunction_NN_1_8::synapse0x1a32d20() {
   return (neuron0x1a24a70()*0.0895753);
}

double NNfunction_NN_1_8::synapse0x1a327b0() {
   return (neuron0x1a24db0()*-0.0807256);
}

double NNfunction_NN_1_8::synapse0x1a327f0() {
   return (neuron0x1a25310()*-0.0103816);
}

double NNfunction_NN_1_8::synapse0x1a32e70() {
   return (neuron0x1a25530()*0.0332879);
}

double NNfunction_NN_1_8::synapse0x1a32eb0() {
   return (neuron0x1a25870()*0.00236707);
}

double NNfunction_NN_1_8::synapse0x1a32ef0() {
   return (neuron0x1a25bb0()*0.0418813);
}

double NNfunction_NN_1_8::synapse0x1a32f30() {
   return (neuron0x1a25ef0()*-0.0301446);
}

double NNfunction_NN_1_8::synapse0x1a32f70() {
   return (neuron0x1a26230()*0.0133178);
}

double NNfunction_NN_1_8::synapse0x1a32fb0() {
   return (neuron0x1a26570()*-0.0140908);
}

double NNfunction_NN_1_8::synapse0x1a33330() {
   return (neuron0x1a219b0()*0.0473335);
}

double NNfunction_NN_1_8::synapse0x1a33370() {
   return (neuron0x1a21cf0()*-0.000431985);
}

double NNfunction_NN_1_8::synapse0x1a333b0() {
   return (neuron0x1a22030()*2.00031);
}

double NNfunction_NN_1_8::synapse0x1a333f0() {
   return (neuron0x1a22370()*-0.00563885);
}

double NNfunction_NN_1_8::synapse0x1a33430() {
   return (neuron0x1a226b0()*0.00855317);
}

double NNfunction_NN_1_8::synapse0x1a33470() {
   return (neuron0x1a229f0()*-0.000834865);
}

double NNfunction_NN_1_8::synapse0x1a334b0() {
   return (neuron0x1a22d30()*0.00190451);
}

double NNfunction_NN_1_8::synapse0x1a334f0() {
   return (neuron0x1a23070()*-0.00779333);
}

double NNfunction_NN_1_8::synapse0x1a33530() {
   return (neuron0x1a233b0()*0.0211927);
}

double NNfunction_NN_1_8::synapse0x1a33570() {
   return (neuron0x1a236f0()*0.00784645);
}

double NNfunction_NN_1_8::synapse0x1a335b0() {
   return (neuron0x1a23a30()*0.030977);
}

double NNfunction_NN_1_8::synapse0x1a335f0() {
   return (neuron0x1a23d70()*-0.15082);
}

double NNfunction_NN_1_8::synapse0x1a33630() {
   return (neuron0x1a240b0()*-0.036373);
}

double NNfunction_NN_1_8::synapse0x1a33670() {
   return (neuron0x1a243f0()*0.00935888);
}

double NNfunction_NN_1_8::synapse0x1a336b0() {
   return (neuron0x1a24730()*0.0162394);
}

double NNfunction_NN_1_8::synapse0x1a336f0() {
   return (neuron0x1a24a70()*0.0244914);
}

double NNfunction_NN_1_8::synapse0x1a33180() {
   return (neuron0x1a24db0()*-0.00765946);
}

double NNfunction_NN_1_8::synapse0x1a331c0() {
   return (neuron0x1a25310()*0.00537008);
}

double NNfunction_NN_1_8::synapse0x1a33840() {
   return (neuron0x1a25530()*-0.0119793);
}

double NNfunction_NN_1_8::synapse0x1a33880() {
   return (neuron0x1a25870()*-0.00732862);
}

double NNfunction_NN_1_8::synapse0x1a338c0() {
   return (neuron0x1a25bb0()*-0.00930161);
}

double NNfunction_NN_1_8::synapse0x1a33900() {
   return (neuron0x1a25ef0()*-0.0229288);
}

double NNfunction_NN_1_8::synapse0x1a33940() {
   return (neuron0x1a26230()*0.0109833);
}

double NNfunction_NN_1_8::synapse0x1a33980() {
   return (neuron0x1a26570()*-2.18909);
}

double NNfunction_NN_1_8::synapse0x1a33d00() {
   return (neuron0x1a219b0()*0.135331);
}

double NNfunction_NN_1_8::synapse0x1a33d40() {
   return (neuron0x1a21cf0()*0.0171636);
}

double NNfunction_NN_1_8::synapse0x1a33d80() {
   return (neuron0x1a22030()*-2.96857);
}

double NNfunction_NN_1_8::synapse0x1a33dc0() {
   return (neuron0x1a22370()*0.0872235);
}

double NNfunction_NN_1_8::synapse0x1a33e00() {
   return (neuron0x1a226b0()*0.0153207);
}

double NNfunction_NN_1_8::synapse0x1a33e40() {
   return (neuron0x1a229f0()*-0.00879507);
}

double NNfunction_NN_1_8::synapse0x1a33e80() {
   return (neuron0x1a22d30()*-0.0391013);
}

double NNfunction_NN_1_8::synapse0x1a33ec0() {
   return (neuron0x1a23070()*0.0140443);
}

double NNfunction_NN_1_8::synapse0x1a33f00() {
   return (neuron0x1a233b0()*0.067568);
}

double NNfunction_NN_1_8::synapse0x1a33f40() {
   return (neuron0x1a236f0()*0.00107279);
}

double NNfunction_NN_1_8::synapse0x1a33f80() {
   return (neuron0x1a23a30()*0.0128409);
}

double NNfunction_NN_1_8::synapse0x1a33fc0() {
   return (neuron0x1a23d70()*0.010723);
}

double NNfunction_NN_1_8::synapse0x1a34000() {
   return (neuron0x1a240b0()*0.101357);
}

double NNfunction_NN_1_8::synapse0x1a34040() {
   return (neuron0x1a243f0()*-0.0159689);
}

double NNfunction_NN_1_8::synapse0x1a34080() {
   return (neuron0x1a24730()*0.0520245);
}

double NNfunction_NN_1_8::synapse0x1a340c0() {
   return (neuron0x1a24a70()*0.0184356);
}

double NNfunction_NN_1_8::synapse0x1a33b50() {
   return (neuron0x1a24db0()*0.0410845);
}

double NNfunction_NN_1_8::synapse0x1a33b90() {
   return (neuron0x1a25310()*0.137529);
}

double NNfunction_NN_1_8::synapse0x1a34210() {
   return (neuron0x1a25530()*-0.0179053);
}

double NNfunction_NN_1_8::synapse0x1a34250() {
   return (neuron0x1a25870()*-0.0445461);
}

double NNfunction_NN_1_8::synapse0x1a34290() {
   return (neuron0x1a25bb0()*0.0370369);
}

double NNfunction_NN_1_8::synapse0x1a342d0() {
   return (neuron0x1a25ef0()*-0.00940449);
}

double NNfunction_NN_1_8::synapse0x1a34310() {
   return (neuron0x1a26230()*-0.00132838);
}

double NNfunction_NN_1_8::synapse0x1a34350() {
   return (neuron0x1a26570()*1.02831);
}

double NNfunction_NN_1_8::synapse0x1a346d0() {
   return (neuron0x1a219b0()*-0.0975014);
}

double NNfunction_NN_1_8::synapse0x1a34710() {
   return (neuron0x1a21cf0()*-0.0222555);
}

double NNfunction_NN_1_8::synapse0x1a34750() {
   return (neuron0x1a22030()*0.0958896);
}

double NNfunction_NN_1_8::synapse0x1a34790() {
   return (neuron0x1a22370()*-0.908849);
}

double NNfunction_NN_1_8::synapse0x1a347d0() {
   return (neuron0x1a226b0()*-0.0232093);
}

double NNfunction_NN_1_8::synapse0x1a34810() {
   return (neuron0x1a229f0()*-0.0536685);
}

double NNfunction_NN_1_8::synapse0x1a34850() {
   return (neuron0x1a22d30()*0.0715567);
}

double NNfunction_NN_1_8::synapse0x1a34890() {
   return (neuron0x1a23070()*-0.032673);
}

double NNfunction_NN_1_8::synapse0x1a348d0() {
   return (neuron0x1a233b0()*0.0197165);
}

double NNfunction_NN_1_8::synapse0x1a34910() {
   return (neuron0x1a236f0()*0.0571728);
}

double NNfunction_NN_1_8::synapse0x1a34950() {
   return (neuron0x1a23a30()*-0.00591061);
}

double NNfunction_NN_1_8::synapse0x1a34990() {
   return (neuron0x1a23d70()*-3.07613);
}

double NNfunction_NN_1_8::synapse0x1a349d0() {
   return (neuron0x1a240b0()*0.27381);
}

double NNfunction_NN_1_8::synapse0x1a34a10() {
   return (neuron0x1a243f0()*-0.00278202);
}

double NNfunction_NN_1_8::synapse0x1a34a50() {
   return (neuron0x1a24730()*0.0327138);
}

double NNfunction_NN_1_8::synapse0x1a34a90() {
   return (neuron0x1a24a70()*0.124391);
}

double NNfunction_NN_1_8::synapse0x1a34520() {
   return (neuron0x1a24db0()*-0.0617008);
}

double NNfunction_NN_1_8::synapse0x1a34560() {
   return (neuron0x1a25310()*0.116294);
}

double NNfunction_NN_1_8::synapse0x1a34be0() {
   return (neuron0x1a25530()*0.0539149);
}

double NNfunction_NN_1_8::synapse0x1a34c20() {
   return (neuron0x1a25870()*0.0491803);
}

double NNfunction_NN_1_8::synapse0x1a34c60() {
   return (neuron0x1a25bb0()*-0.0230594);
}

double NNfunction_NN_1_8::synapse0x1a34ca0() {
   return (neuron0x1a25ef0()*-0.0497713);
}

double NNfunction_NN_1_8::synapse0x1a34ce0() {
   return (neuron0x1a26230()*0.0304727);
}

double NNfunction_NN_1_8::synapse0x1a34d20() {
   return (neuron0x1a26570()*0.00790297);
}

double NNfunction_NN_1_8::synapse0x1a350a0() {
   return (neuron0x1a219b0()*0.0380239);
}

double NNfunction_NN_1_8::synapse0x1a350e0() {
   return (neuron0x1a21cf0()*0.0685082);
}

double NNfunction_NN_1_8::synapse0x1a35120() {
   return (neuron0x1a22030()*0.535467);
}

double NNfunction_NN_1_8::synapse0x1a35160() {
   return (neuron0x1a22370()*0.0428147);
}

double NNfunction_NN_1_8::synapse0x1a351a0() {
   return (neuron0x1a226b0()*0.0108313);
}

double NNfunction_NN_1_8::synapse0x1a351e0() {
   return (neuron0x1a229f0()*-0.00739356);
}

double NNfunction_NN_1_8::synapse0x1a35220() {
   return (neuron0x1a22d30()*-0.0011311);
}

double NNfunction_NN_1_8::synapse0x1a35260() {
   return (neuron0x1a23070()*0.0162647);
}

double NNfunction_NN_1_8::synapse0x1a352a0() {
   return (neuron0x1a233b0()*-0.0260103);
}

double NNfunction_NN_1_8::synapse0x1a2d460() {
   return (neuron0x1a236f0()*0.0282714);
}

double NNfunction_NN_1_8::synapse0x1a2d4a0() {
   return (neuron0x1a23a30()*-0.0023667);
}

double NNfunction_NN_1_8::synapse0x1a2d4e0() {
   return (neuron0x1a23d70()*-0.701161);
}

double NNfunction_NN_1_8::synapse0x1a2d520() {
   return (neuron0x1a240b0()*-0.0558276);
}

double NNfunction_NN_1_8::synapse0x1a2d560() {
   return (neuron0x1a243f0()*0.00932784);
}

double NNfunction_NN_1_8::synapse0x1a2d5a0() {
   return (neuron0x1a24730()*-0.0233656);
}

double NNfunction_NN_1_8::synapse0x1a2d5e0() {
   return (neuron0x1a24a70()*0.00374549);
}

double NNfunction_NN_1_8::synapse0x1a34ef0() {
   return (neuron0x1a24db0()*0.0669594);
}

double NNfunction_NN_1_8::synapse0x1a34f30() {
   return (neuron0x1a25310()*-0.0440528);
}

double NNfunction_NN_1_8::synapse0x1a2d730() {
   return (neuron0x1a25530()*-0.0189687);
}

double NNfunction_NN_1_8::synapse0x1a2d770() {
   return (neuron0x1a25870()*0.0288229);
}

double NNfunction_NN_1_8::synapse0x1a2d7b0() {
   return (neuron0x1a25bb0()*-0.038193);
}

double NNfunction_NN_1_8::synapse0x1a2d7f0() {
   return (neuron0x1a25ef0()*-0.00712841);
}

double NNfunction_NN_1_8::synapse0x1a2d830() {
   return (neuron0x1a26230()*-0.025052);
}

double NNfunction_NN_1_8::synapse0x1a2d870() {
   return (neuron0x1a26570()*2.9314);
}

double NNfunction_NN_1_8::synapse0x1a2dbf0() {
   return (neuron0x1a219b0()*0.179813);
}

double NNfunction_NN_1_8::synapse0x1a2dc30() {
   return (neuron0x1a21cf0()*0.00289302);
}

double NNfunction_NN_1_8::synapse0x1a2dc70() {
   return (neuron0x1a22030()*0.189931);
}

double NNfunction_NN_1_8::synapse0x1a2dcb0() {
   return (neuron0x1a22370()*-0.00582499);
}

double NNfunction_NN_1_8::synapse0x1a2dcf0() {
   return (neuron0x1a226b0()*0.296872);
}

double NNfunction_NN_1_8::synapse0x1a2dd30() {
   return (neuron0x1a229f0()*-0.067764);
}

double NNfunction_NN_1_8::synapse0x1a2dd70() {
   return (neuron0x1a22d30()*0.0187075);
}

double NNfunction_NN_1_8::synapse0x1a2ddb0() {
   return (neuron0x1a23070()*0.0643133);
}

double NNfunction_NN_1_8::synapse0x1a2ddf0() {
   return (neuron0x1a233b0()*-0.394689);
}

double NNfunction_NN_1_8::synapse0x1a2de30() {
   return (neuron0x1a236f0()*0.033091);
}

double NNfunction_NN_1_8::synapse0x1a2de70() {
   return (neuron0x1a23a30()*-0.195825);
}

double NNfunction_NN_1_8::synapse0x1a2deb0() {
   return (neuron0x1a23d70()*-0.904651);
}

double NNfunction_NN_1_8::synapse0x1a2def0() {
   return (neuron0x1a240b0()*-0.000758314);
}

double NNfunction_NN_1_8::synapse0x1a2df30() {
   return (neuron0x1a243f0()*0.0537698);
}

double NNfunction_NN_1_8::synapse0x1a2df70() {
   return (neuron0x1a24730()*5.39163e-05);
}

double NNfunction_NN_1_8::synapse0x1a2dfb0() {
   return (neuron0x1a24a70()*0.0823825);
}

double NNfunction_NN_1_8::synapse0x1a2da40() {
   return (neuron0x1a24db0()*-0.107921);
}

double NNfunction_NN_1_8::synapse0x1a2da80() {
   return (neuron0x1a25310()*-0.0277573);
}

double NNfunction_NN_1_8::synapse0x1a2e100() {
   return (neuron0x1a25530()*0.121996);
}

double NNfunction_NN_1_8::synapse0x1a2e140() {
   return (neuron0x1a25870()*-0.0563913);
}

double NNfunction_NN_1_8::synapse0x1a2e180() {
   return (neuron0x1a25bb0()*-0.226283);
}

double NNfunction_NN_1_8::synapse0x1a2e1c0() {
   return (neuron0x1a25ef0()*-0.118999);
}

double NNfunction_NN_1_8::synapse0x1a2e200() {
   return (neuron0x1a26230()*-0.0450884);
}

double NNfunction_NN_1_8::synapse0x1a2e240() {
   return (neuron0x1a26570()*1.53158);
}

double NNfunction_NN_1_8::synapse0x1a2e410() {
   return (neuron0x1a219b0()*0.0675178);
}

double NNfunction_NN_1_8::synapse0x1a374a0() {
   return (neuron0x1a21cf0()*0.00381765);
}

double NNfunction_NN_1_8::synapse0x1a374e0() {
   return (neuron0x1a22030()*-1.33078);
}

double NNfunction_NN_1_8::synapse0x1a37520() {
   return (neuron0x1a22370()*0.0501108);
}

double NNfunction_NN_1_8::synapse0x1a37560() {
   return (neuron0x1a226b0()*0.00451419);
}

double NNfunction_NN_1_8::synapse0x1a375a0() {
   return (neuron0x1a229f0()*0.00195107);
}

double NNfunction_NN_1_8::synapse0x1a375e0() {
   return (neuron0x1a22d30()*-0.0162183);
}

double NNfunction_NN_1_8::synapse0x1a37620() {
   return (neuron0x1a23070()*0.0138891);
}

double NNfunction_NN_1_8::synapse0x1a37660() {
   return (neuron0x1a233b0()*0.0295808);
}

double NNfunction_NN_1_8::synapse0x1a376a0() {
   return (neuron0x1a236f0()*0.00913528);
}

double NNfunction_NN_1_8::synapse0x1a376e0() {
   return (neuron0x1a23a30()*-0.0218494);
}

double NNfunction_NN_1_8::synapse0x1a37720() {
   return (neuron0x1a23d70()*-0.0493519);
}

double NNfunction_NN_1_8::synapse0x1a37760() {
   return (neuron0x1a240b0()*0.0143464);
}

double NNfunction_NN_1_8::synapse0x1a377a0() {
   return (neuron0x1a243f0()*-0.0191385);
}

double NNfunction_NN_1_8::synapse0x1a377e0() {
   return (neuron0x1a24730()*0.0192705);
}

double NNfunction_NN_1_8::synapse0x1a37820() {
   return (neuron0x1a24a70()*-0.0301291);
}

double NNfunction_NN_1_8::synapse0x1a372f0() {
   return (neuron0x1a24db0()*0.0160775);
}

double NNfunction_NN_1_8::synapse0x1a37330() {
   return (neuron0x1a25310()*0.0195072);
}

double NNfunction_NN_1_8::synapse0x1a37970() {
   return (neuron0x1a25530()*-0.0154148);
}

double NNfunction_NN_1_8::synapse0x1a379b0() {
   return (neuron0x1a25870()*-0.0285891);
}

double NNfunction_NN_1_8::synapse0x1a379f0() {
   return (neuron0x1a25bb0()*0.0306963);
}

double NNfunction_NN_1_8::synapse0x1a37a30() {
   return (neuron0x1a25ef0()*-8.22667e-05);
}

double NNfunction_NN_1_8::synapse0x1a37a70() {
   return (neuron0x1a26230()*0.00740386);
}

double NNfunction_NN_1_8::synapse0x1a37ab0() {
   return (neuron0x1a26570()*1.47438);
}

double NNfunction_NN_1_8::synapse0x1a37e30() {
   return (neuron0x1a219b0()*-0.316548);
}

double NNfunction_NN_1_8::synapse0x1a37e70() {
   return (neuron0x1a21cf0()*0.167352);
}

double NNfunction_NN_1_8::synapse0x1a37eb0() {
   return (neuron0x1a22030()*-0.429183);
}

double NNfunction_NN_1_8::synapse0x1a37ef0() {
   return (neuron0x1a22370()*0.213576);
}

double NNfunction_NN_1_8::synapse0x1a37f30() {
   return (neuron0x1a226b0()*0.0569385);
}

double NNfunction_NN_1_8::synapse0x1a37f70() {
   return (neuron0x1a229f0()*0.0966451);
}

double NNfunction_NN_1_8::synapse0x1a37fb0() {
   return (neuron0x1a22d30()*0.658002);
}

double NNfunction_NN_1_8::synapse0x1a37ff0() {
   return (neuron0x1a23070()*-0.17958);
}

double NNfunction_NN_1_8::synapse0x1a38030() {
   return (neuron0x1a233b0()*0.241943);
}

double NNfunction_NN_1_8::synapse0x1a38070() {
   return (neuron0x1a236f0()*-0.0665221);
}

double NNfunction_NN_1_8::synapse0x1a380b0() {
   return (neuron0x1a23a30()*0.113159);
}

double NNfunction_NN_1_8::synapse0x1a380f0() {
   return (neuron0x1a23d70()*-0.0484777);
}

double NNfunction_NN_1_8::synapse0x1a38130() {
   return (neuron0x1a240b0()*0.236066);
}

double NNfunction_NN_1_8::synapse0x1a38170() {
   return (neuron0x1a243f0()*-0.0886854);
}

double NNfunction_NN_1_8::synapse0x1a381b0() {
   return (neuron0x1a24730()*-0.218824);
}

double NNfunction_NN_1_8::synapse0x1a381f0() {
   return (neuron0x1a24a70()*-0.321802);
}

double NNfunction_NN_1_8::synapse0x1a37c80() {
   return (neuron0x1a24db0()*0.151536);
}

double NNfunction_NN_1_8::synapse0x1a37cc0() {
   return (neuron0x1a25310()*-0.201713);
}

double NNfunction_NN_1_8::synapse0x1a38340() {
   return (neuron0x1a25530()*-0.288714);
}

double NNfunction_NN_1_8::synapse0x1a38380() {
   return (neuron0x1a25870()*-0.166748);
}

double NNfunction_NN_1_8::synapse0x1a383c0() {
   return (neuron0x1a25bb0()*0.103673);
}

double NNfunction_NN_1_8::synapse0x1a38400() {
   return (neuron0x1a25ef0()*0.0400683);
}

double NNfunction_NN_1_8::synapse0x1a38440() {
   return (neuron0x1a26230()*0.0375126);
}

double NNfunction_NN_1_8::synapse0x1a38480() {
   return (neuron0x1a26570()*0.961711);
}

double NNfunction_NN_1_8::synapse0x1a38800() {
   return (neuron0x1a219b0()*-0.0823021);
}

double NNfunction_NN_1_8::synapse0x1a38840() {
   return (neuron0x1a21cf0()*0.135782);
}

double NNfunction_NN_1_8::synapse0x1a38880() {
   return (neuron0x1a22030()*0.752978);
}

double NNfunction_NN_1_8::synapse0x1a388c0() {
   return (neuron0x1a22370()*-0.59495);
}

double NNfunction_NN_1_8::synapse0x1a38900() {
   return (neuron0x1a226b0()*-0.0395269);
}

double NNfunction_NN_1_8::synapse0x1a38940() {
   return (neuron0x1a229f0()*-0.131965);
}

double NNfunction_NN_1_8::synapse0x1a38980() {
   return (neuron0x1a22d30()*-0.0672824);
}

double NNfunction_NN_1_8::synapse0x1a389c0() {
   return (neuron0x1a23070()*-0.0970641);
}

double NNfunction_NN_1_8::synapse0x1a38a00() {
   return (neuron0x1a233b0()*-0.0772238);
}

double NNfunction_NN_1_8::synapse0x1a38a40() {
   return (neuron0x1a236f0()*0.000244444);
}

double NNfunction_NN_1_8::synapse0x1a38a80() {
   return (neuron0x1a23a30()*0.100759);
}

double NNfunction_NN_1_8::synapse0x1a38ac0() {
   return (neuron0x1a23d70()*-0.0436372);
}

double NNfunction_NN_1_8::synapse0x1a38b00() {
   return (neuron0x1a240b0()*0.356686);
}

double NNfunction_NN_1_8::synapse0x1a38b40() {
   return (neuron0x1a243f0()*-0.0943811);
}

double NNfunction_NN_1_8::synapse0x1a38b80() {
   return (neuron0x1a24730()*0.0264862);
}

double NNfunction_NN_1_8::synapse0x1a38bc0() {
   return (neuron0x1a24a70()*0.0104902);
}

double NNfunction_NN_1_8::synapse0x1a38650() {
   return (neuron0x1a24db0()*-0.225922);
}

double NNfunction_NN_1_8::synapse0x1a38690() {
   return (neuron0x1a25310()*-0.0809851);
}

double NNfunction_NN_1_8::synapse0x1a38d10() {
   return (neuron0x1a25530()*0.0764329);
}

double NNfunction_NN_1_8::synapse0x1a38d50() {
   return (neuron0x1a25870()*0.100431);
}

double NNfunction_NN_1_8::synapse0x1a38d90() {
   return (neuron0x1a25bb0()*-0.0211211);
}

double NNfunction_NN_1_8::synapse0x1a38dd0() {
   return (neuron0x1a25ef0()*0.155777);
}

double NNfunction_NN_1_8::synapse0x1a38e10() {
   return (neuron0x1a26230()*-0.115684);
}

double NNfunction_NN_1_8::synapse0x1a38e50() {
   return (neuron0x1a26570()*0.609447);
}

double NNfunction_NN_1_8::synapse0x1a391d0() {
   return (neuron0x1a219b0()*-0.000112449);
}

double NNfunction_NN_1_8::synapse0x1a39210() {
   return (neuron0x1a21cf0()*-0.705579);
}

double NNfunction_NN_1_8::synapse0x1a39250() {
   return (neuron0x1a22030()*-1.35986);
}

double NNfunction_NN_1_8::synapse0x1a39290() {
   return (neuron0x1a22370()*-0.188053);
}

double NNfunction_NN_1_8::synapse0x1a392d0() {
   return (neuron0x1a226b0()*0.113985);
}

double NNfunction_NN_1_8::synapse0x1a39310() {
   return (neuron0x1a229f0()*-0.038004);
}

double NNfunction_NN_1_8::synapse0x1a39350() {
   return (neuron0x1a22d30()*0.0386665);
}

double NNfunction_NN_1_8::synapse0x1a39390() {
   return (neuron0x1a23070()*0.0194834);
}

double NNfunction_NN_1_8::synapse0x1a393d0() {
   return (neuron0x1a233b0()*-0.00401346);
}

double NNfunction_NN_1_8::synapse0x1a39410() {
   return (neuron0x1a236f0()*-0.0716891);
}

double NNfunction_NN_1_8::synapse0x1a39450() {
   return (neuron0x1a23a30()*0.00855244);
}

double NNfunction_NN_1_8::synapse0x1a39490() {
   return (neuron0x1a23d70()*0.0316221);
}

double NNfunction_NN_1_8::synapse0x1a394d0() {
   return (neuron0x1a240b0()*0.0568838);
}

double NNfunction_NN_1_8::synapse0x1a39510() {
   return (neuron0x1a243f0()*0.0431194);
}

double NNfunction_NN_1_8::synapse0x1a39550() {
   return (neuron0x1a24730()*-0.0615524);
}

double NNfunction_NN_1_8::synapse0x1a39590() {
   return (neuron0x1a24a70()*0.105366);
}

double NNfunction_NN_1_8::synapse0x1a39020() {
   return (neuron0x1a24db0()*-0.0611144);
}

double NNfunction_NN_1_8::synapse0x1a39060() {
   return (neuron0x1a25310()*0.0244911);
}

double NNfunction_NN_1_8::synapse0x1a396e0() {
   return (neuron0x1a25530()*0.0545465);
}

double NNfunction_NN_1_8::synapse0x1a39720() {
   return (neuron0x1a25870()*0.0258539);
}

double NNfunction_NN_1_8::synapse0x1a39760() {
   return (neuron0x1a25bb0()*0.102992);
}

double NNfunction_NN_1_8::synapse0x1a397a0() {
   return (neuron0x1a25ef0()*-0.0575873);
}

double NNfunction_NN_1_8::synapse0x1a397e0() {
   return (neuron0x1a26230()*-0.0371843);
}

double NNfunction_NN_1_8::synapse0x1a39820() {
   return (neuron0x1a26570()*-1.15845);
}

double NNfunction_NN_1_8::synapse0x1a39ba0() {
   return (neuron0x1a219b0()*0.0180605);
}

double NNfunction_NN_1_8::synapse0x1a39be0() {
   return (neuron0x1a21cf0()*-0.0183826);
}

double NNfunction_NN_1_8::synapse0x1a39c20() {
   return (neuron0x1a22030()*0.135776);
}

double NNfunction_NN_1_8::synapse0x1a39c60() {
   return (neuron0x1a22370()*0.0276908);
}

double NNfunction_NN_1_8::synapse0x1a39ca0() {
   return (neuron0x1a226b0()*-0.00303862);
}

double NNfunction_NN_1_8::synapse0x1a39ce0() {
   return (neuron0x1a229f0()*-0.027037);
}

double NNfunction_NN_1_8::synapse0x1a39d20() {
   return (neuron0x1a22d30()*0.00596687);
}

double NNfunction_NN_1_8::synapse0x1a39d60() {
   return (neuron0x1a23070()*0.00506341);
}

double NNfunction_NN_1_8::synapse0x1a39da0() {
   return (neuron0x1a233b0()*-0.000795469);
}

double NNfunction_NN_1_8::synapse0x1a39de0() {
   return (neuron0x1a236f0()*0.0634493);
}

double NNfunction_NN_1_8::synapse0x1a39e20() {
   return (neuron0x1a23a30()*-0.0297714);
}

double NNfunction_NN_1_8::synapse0x1a39e60() {
   return (neuron0x1a23d70()*-6.90662);
}

double NNfunction_NN_1_8::synapse0x1a39ea0() {
   return (neuron0x1a240b0()*0.0839724);
}

double NNfunction_NN_1_8::synapse0x1a39ee0() {
   return (neuron0x1a243f0()*0.0616264);
}

double NNfunction_NN_1_8::synapse0x1a39f20() {
   return (neuron0x1a24730()*0.00206384);
}

double NNfunction_NN_1_8::synapse0x1a39f60() {
   return (neuron0x1a24a70()*-0.032492);
}

double NNfunction_NN_1_8::synapse0x1a399f0() {
   return (neuron0x1a24db0()*-0.0272423);
}

double NNfunction_NN_1_8::synapse0x1a39a30() {
   return (neuron0x1a25310()*0.0517136);
}

double NNfunction_NN_1_8::synapse0x1a3a0b0() {
   return (neuron0x1a25530()*-0.0145088);
}

double NNfunction_NN_1_8::synapse0x1a3a0f0() {
   return (neuron0x1a25870()*0.00743848);
}

double NNfunction_NN_1_8::synapse0x1a3a130() {
   return (neuron0x1a25bb0()*0.0247877);
}

double NNfunction_NN_1_8::synapse0x1a3a170() {
   return (neuron0x1a25ef0()*-0.0163438);
}

double NNfunction_NN_1_8::synapse0x1a3a1b0() {
   return (neuron0x1a26230()*0.0140058);
}

double NNfunction_NN_1_8::synapse0x1a3a1f0() {
   return (neuron0x1a26570()*-0.185304);
}

double NNfunction_NN_1_8::synapse0x1a3a570() {
   return (neuron0x1a219b0()*-0.0330424);
}

double NNfunction_NN_1_8::synapse0x1a3a5b0() {
   return (neuron0x1a21cf0()*-0.0482157);
}

double NNfunction_NN_1_8::synapse0x1a3a5f0() {
   return (neuron0x1a22030()*1.80272);
}

double NNfunction_NN_1_8::synapse0x1a3a630() {
   return (neuron0x1a22370()*0.101066);
}

double NNfunction_NN_1_8::synapse0x1a3a670() {
   return (neuron0x1a226b0()*0.0788599);
}

double NNfunction_NN_1_8::synapse0x1a3a6b0() {
   return (neuron0x1a229f0()*-0.0670836);
}

double NNfunction_NN_1_8::synapse0x1a3a6f0() {
   return (neuron0x1a22d30()*0.119894);
}

double NNfunction_NN_1_8::synapse0x1a3a730() {
   return (neuron0x1a23070()*0.0516537);
}

double NNfunction_NN_1_8::synapse0x1a3a770() {
   return (neuron0x1a233b0()*-0.0519324);
}

double NNfunction_NN_1_8::synapse0x1a3a7b0() {
   return (neuron0x1a236f0()*-0.0444127);
}

double NNfunction_NN_1_8::synapse0x1a3a7f0() {
   return (neuron0x1a23a30()*-0.0339428);
}

double NNfunction_NN_1_8::synapse0x1a3a830() {
   return (neuron0x1a23d70()*0.162748);
}

double NNfunction_NN_1_8::synapse0x1a3a870() {
   return (neuron0x1a240b0()*0.437815);
}

double NNfunction_NN_1_8::synapse0x1a3a8b0() {
   return (neuron0x1a243f0()*-0.0271075);
}

double NNfunction_NN_1_8::synapse0x1a3a8f0() {
   return (neuron0x1a24730()*-0.0261293);
}

double NNfunction_NN_1_8::synapse0x1a3a930() {
   return (neuron0x1a24a70()*0.0544277);
}

double NNfunction_NN_1_8::synapse0x1a3a3c0() {
   return (neuron0x1a24db0()*-0.095201);
}

double NNfunction_NN_1_8::synapse0x1a3a400() {
   return (neuron0x1a25310()*0.169023);
}

double NNfunction_NN_1_8::synapse0x1a3aa80() {
   return (neuron0x1a25530()*0.163739);
}

double NNfunction_NN_1_8::synapse0x1a3aac0() {
   return (neuron0x1a25870()*0.120043);
}

double NNfunction_NN_1_8::synapse0x1a3ab00() {
   return (neuron0x1a25bb0()*0.00816985);
}

double NNfunction_NN_1_8::synapse0x1a3ab40() {
   return (neuron0x1a25ef0()*-0.0469805);
}

double NNfunction_NN_1_8::synapse0x1a3ab80() {
   return (neuron0x1a26230()*-0.0146929);
}

double NNfunction_NN_1_8::synapse0x1a3abc0() {
   return (neuron0x1a26570()*0.180334);
}

double NNfunction_NN_1_8::synapse0x1a3af40() {
   return (neuron0x1a219b0()*-0.0350818);
}

double NNfunction_NN_1_8::synapse0x1a3af80() {
   return (neuron0x1a21cf0()*-0.029843);
}

double NNfunction_NN_1_8::synapse0x1a3afc0() {
   return (neuron0x1a22030()*1.71051);
}

double NNfunction_NN_1_8::synapse0x1a3b000() {
   return (neuron0x1a22370()*0.0290874);
}

double NNfunction_NN_1_8::synapse0x1a3b040() {
   return (neuron0x1a226b0()*0.0504317);
}

double NNfunction_NN_1_8::synapse0x1a3b080() {
   return (neuron0x1a229f0()*0.0188404);
}

double NNfunction_NN_1_8::synapse0x1a3b0c0() {
   return (neuron0x1a22d30()*0.0410454);
}

double NNfunction_NN_1_8::synapse0x1a3b100() {
   return (neuron0x1a23070()*0.0795285);
}

double NNfunction_NN_1_8::synapse0x1a3b140() {
   return (neuron0x1a233b0()*-0.0105789);
}

double NNfunction_NN_1_8::synapse0x1a3b180() {
   return (neuron0x1a236f0()*-0.034428);
}

double NNfunction_NN_1_8::synapse0x1a3b1c0() {
   return (neuron0x1a23a30()*-0.0140123);
}

double NNfunction_NN_1_8::synapse0x1a3b200() {
   return (neuron0x1a23d70()*-4.56154);
}

double NNfunction_NN_1_8::synapse0x1a3b240() {
   return (neuron0x1a240b0()*-0.0876356);
}

double NNfunction_NN_1_8::synapse0x1a3b280() {
   return (neuron0x1a243f0()*0.0155904);
}

double NNfunction_NN_1_8::synapse0x1a3b2c0() {
   return (neuron0x1a24730()*-0.000627843);
}

double NNfunction_NN_1_8::synapse0x1a3b300() {
   return (neuron0x1a24a70()*-0.00455249);
}

double NNfunction_NN_1_8::synapse0x1a3ad90() {
   return (neuron0x1a24db0()*-0.059077);
}

double NNfunction_NN_1_8::synapse0x1a3add0() {
   return (neuron0x1a25310()*0.00675637);
}

double NNfunction_NN_1_8::synapse0x1a3b450() {
   return (neuron0x1a25530()*0.0202269);
}

double NNfunction_NN_1_8::synapse0x1a3b490() {
   return (neuron0x1a25870()*0.0219551);
}

double NNfunction_NN_1_8::synapse0x1a3b4d0() {
   return (neuron0x1a25bb0()*-0.0441268);
}

double NNfunction_NN_1_8::synapse0x1a3b510() {
   return (neuron0x1a25ef0()*-0.0680021);
}

double NNfunction_NN_1_8::synapse0x1a3b550() {
   return (neuron0x1a26230()*0.00410169);
}

double NNfunction_NN_1_8::synapse0x1a3b590() {
   return (neuron0x1a26570()*0.426504);
}

double NNfunction_NN_1_8::synapse0x1a3b910() {
   return (neuron0x1a219b0()*0.0894506);
}

double NNfunction_NN_1_8::synapse0x1a3b950() {
   return (neuron0x1a21cf0()*-0.0881613);
}

double NNfunction_NN_1_8::synapse0x1a3b990() {
   return (neuron0x1a22030()*2.76915);
}

double NNfunction_NN_1_8::synapse0x1a3b9d0() {
   return (neuron0x1a22370()*-0.00539924);
}

double NNfunction_NN_1_8::synapse0x1a3ba10() {
   return (neuron0x1a226b0()*0.0305791);
}

double NNfunction_NN_1_8::synapse0x1a3ba50() {
   return (neuron0x1a229f0()*0.0373211);
}

double NNfunction_NN_1_8::synapse0x1a3ba90() {
   return (neuron0x1a22d30()*-0.0754326);
}

double NNfunction_NN_1_8::synapse0x1a3bad0() {
   return (neuron0x1a23070()*0.0613633);
}

double NNfunction_NN_1_8::synapse0x1a3bb10() {
   return (neuron0x1a233b0()*-0.0319944);
}

double NNfunction_NN_1_8::synapse0x1a3bb50() {
   return (neuron0x1a236f0()*0.00824894);
}

double NNfunction_NN_1_8::synapse0x1a3bb90() {
   return (neuron0x1a23a30()*-0.00382226);
}

double NNfunction_NN_1_8::synapse0x1a3bbd0() {
   return (neuron0x1a23d70()*0.0163794);
}

double NNfunction_NN_1_8::synapse0x1a3bc10() {
   return (neuron0x1a240b0()*-0.127702);
}

double NNfunction_NN_1_8::synapse0x1a3bc50() {
   return (neuron0x1a243f0()*0.0534488);
}

double NNfunction_NN_1_8::synapse0x1a3bc90() {
   return (neuron0x1a24730()*-0.0243918);
}

double NNfunction_NN_1_8::synapse0x1a3bcd0() {
   return (neuron0x1a24a70()*-0.0984209);
}

double NNfunction_NN_1_8::synapse0x1a3b760() {
   return (neuron0x1a24db0()*-0.0667693);
}

double NNfunction_NN_1_8::synapse0x1a3b7a0() {
   return (neuron0x1a25310()*-0.0477548);
}

double NNfunction_NN_1_8::synapse0x1a3be20() {
   return (neuron0x1a25530()*0.0430506);
}

double NNfunction_NN_1_8::synapse0x1a3be60() {
   return (neuron0x1a25870()*-0.00252984);
}

double NNfunction_NN_1_8::synapse0x1a3bea0() {
   return (neuron0x1a25bb0()*-0.0110267);
}

double NNfunction_NN_1_8::synapse0x1a3bee0() {
   return (neuron0x1a25ef0()*0.00236106);
}

double NNfunction_NN_1_8::synapse0x1a3bf20() {
   return (neuron0x1a26230()*0.0626101);
}

double NNfunction_NN_1_8::synapse0x1a3bf60() {
   return (neuron0x1a26570()*1.63616);
}

double NNfunction_NN_1_8::synapse0x1a3c2e0() {
   return (neuron0x1a219b0()*0.026653);
}

double NNfunction_NN_1_8::synapse0x1a308b0() {
   return (neuron0x1a21cf0()*0.016829);
}

double NNfunction_NN_1_8::synapse0x1a308f0() {
   return (neuron0x1a22030()*-0.533139);
}

double NNfunction_NN_1_8::synapse0x1a30930() {
   return (neuron0x1a22370()*-0.00123804);
}

double NNfunction_NN_1_8::synapse0x1a30b80() {
   return (neuron0x1a226b0()*-0.00424709);
}

double NNfunction_NN_1_8::synapse0x1a30bc0() {
   return (neuron0x1a229f0()*-0.00217142);
}

double NNfunction_NN_1_8::synapse0x1a30c00() {
   return (neuron0x1a22d30()*-0.010433);
}

double NNfunction_NN_1_8::synapse0x1a30e50() {
   return (neuron0x1a23070()*-0.00942522);
}

double NNfunction_NN_1_8::synapse0x1a30e90() {
   return (neuron0x1a233b0()*-0.00964652);
}

double NNfunction_NN_1_8::synapse0x1a310e0() {
   return (neuron0x1a236f0()*0.00486681);
}

double NNfunction_NN_1_8::synapse0x1a31120() {
   return (neuron0x1a23a30()*-0.00553382);
}

double NNfunction_NN_1_8::synapse0x1a31160() {
   return (neuron0x1a23d70()*-0.122628);
}

double NNfunction_NN_1_8::synapse0x1a313b0() {
   return (neuron0x1a240b0()*-0.0298833);
}

double NNfunction_NN_1_8::synapse0x1a313f0() {
   return (neuron0x1a243f0()*-0.0229959);
}

double NNfunction_NN_1_8::synapse0x1a31640() {
   return (neuron0x1a24730()*0.00263219);
}

double NNfunction_NN_1_8::synapse0x1a31680() {
   return (neuron0x1a24a70()*0.015615);
}

double NNfunction_NN_1_8::synapse0x1a3c130() {
   return (neuron0x1a24db0()*-0.0112422);
}

double NNfunction_NN_1_8::synapse0x1a3c170() {
   return (neuron0x1a25310()*-0.0133187);
}

double NNfunction_NN_1_8::synapse0x1a317d0() {
   return (neuron0x1a25530()*-0.0139664);
}

double NNfunction_NN_1_8::synapse0x1a31ce0() {
   return (neuron0x1a25870()*-0.00701298);
}

double NNfunction_NN_1_8::synapse0x1a31d20() {
   return (neuron0x1a25bb0()*-0.00210053);
}

double NNfunction_NN_1_8::synapse0x1a31d60() {
   return (neuron0x1a25ef0()*-0.00364824);
}

double NNfunction_NN_1_8::synapse0x1a31fb0() {
   return (neuron0x1a26230()*-0.0177995);
}

double NNfunction_NN_1_8::synapse0x1a31ff0() {
   return (neuron0x1a26570()*0.183936);
}

double NNfunction_NN_1_8::synapse0x1a318a0() {
   return (neuron0x1a219b0()*0.223558);
}

double NNfunction_NN_1_8::synapse0x1a318e0() {
   return (neuron0x1a21cf0()*-0.013823);
}

double NNfunction_NN_1_8::synapse0x1a31920() {
   return (neuron0x1a22030()*-0.124714);
}

double NNfunction_NN_1_8::synapse0x1a31960() {
   return (neuron0x1a22370()*0.0568428);
}

double NNfunction_NN_1_8::synapse0x1a322e0() {
   return (neuron0x1a226b0()*0.00348888);
}

double NNfunction_NN_1_8::synapse0x1a3e630() {
   return (neuron0x1a229f0()*-0.00838369);
}

double NNfunction_NN_1_8::synapse0x1a3e670() {
   return (neuron0x1a22d30()*0.0114343);
}

double NNfunction_NN_1_8::synapse0x1a3e6b0() {
   return (neuron0x1a23070()*0.00858566);
}

double NNfunction_NN_1_8::synapse0x1a3e6f0() {
   return (neuron0x1a233b0()*0.013892);
}

double NNfunction_NN_1_8::synapse0x1a3e730() {
   return (neuron0x1a236f0()*-0.00603045);
}

double NNfunction_NN_1_8::synapse0x1a3e770() {
   return (neuron0x1a23a30()*-0.0304865);
}

double NNfunction_NN_1_8::synapse0x1a3e7b0() {
   return (neuron0x1a23d70()*-0.0122907);
}

double NNfunction_NN_1_8::synapse0x1a3e7f0() {
   return (neuron0x1a240b0()*0.0225387);
}

double NNfunction_NN_1_8::synapse0x1a3e830() {
   return (neuron0x1a243f0()*0.00608153);
}

double NNfunction_NN_1_8::synapse0x1a3e870() {
   return (neuron0x1a24730()*-0.00568789);
}

double NNfunction_NN_1_8::synapse0x1a3e8b0() {
   return (neuron0x1a24a70()*0.0231907);
}

double NNfunction_NN_1_8::synapse0x1a321c0() {
   return (neuron0x1a24db0()*-0.0281787);
}

double NNfunction_NN_1_8::synapse0x1a32200() {
   return (neuron0x1a25310()*-0.0031478);
}

double NNfunction_NN_1_8::synapse0x1a3ea00() {
   return (neuron0x1a25530()*0.00265183);
}

double NNfunction_NN_1_8::synapse0x1a3ea40() {
   return (neuron0x1a25870()*-0.00784376);
}

double NNfunction_NN_1_8::synapse0x1a3ea80() {
   return (neuron0x1a25bb0()*-0.0335379);
}

double NNfunction_NN_1_8::synapse0x1a3eac0() {
   return (neuron0x1a25ef0()*-0.010706);
}

double NNfunction_NN_1_8::synapse0x1a3eb00() {
   return (neuron0x1a26230()*0.0264409);
}

double NNfunction_NN_1_8::synapse0x1a3eb40() {
   return (neuron0x1a26570()*10.1602);
}

double NNfunction_NN_1_8::synapse0x1a3eec0() {
   return (neuron0x1a219b0()*1.85582);
}

double NNfunction_NN_1_8::synapse0x1a3ef00() {
   return (neuron0x1a21cf0()*0.0424195);
}

double NNfunction_NN_1_8::synapse0x1a3ef40() {
   return (neuron0x1a22030()*0.884529);
}

double NNfunction_NN_1_8::synapse0x1a3ef80() {
   return (neuron0x1a22370()*0.0434008);
}

double NNfunction_NN_1_8::synapse0x1a3efc0() {
   return (neuron0x1a226b0()*-0.0887495);
}

double NNfunction_NN_1_8::synapse0x1a3f000() {
   return (neuron0x1a229f0()*-0.0398121);
}

double NNfunction_NN_1_8::synapse0x1a3f040() {
   return (neuron0x1a22d30()*-0.140816);
}

double NNfunction_NN_1_8::synapse0x1a3f080() {
   return (neuron0x1a23070()*-0.0720084);
}

double NNfunction_NN_1_8::synapse0x1a3f0c0() {
   return (neuron0x1a233b0()*0.0287425);
}

double NNfunction_NN_1_8::synapse0x1a3f100() {
   return (neuron0x1a236f0()*0.04648);
}

double NNfunction_NN_1_8::synapse0x1a3f140() {
   return (neuron0x1a23a30()*0.0093203);
}

double NNfunction_NN_1_8::synapse0x1a3f180() {
   return (neuron0x1a23d70()*-0.00289511);
}

double NNfunction_NN_1_8::synapse0x1a3f1c0() {
   return (neuron0x1a240b0()*-0.165774);
}

double NNfunction_NN_1_8::synapse0x1a3f200() {
   return (neuron0x1a243f0()*0.00973398);
}

double NNfunction_NN_1_8::synapse0x1a3f240() {
   return (neuron0x1a24730()*-0.0284941);
}

double NNfunction_NN_1_8::synapse0x1a3f280() {
   return (neuron0x1a24a70()*-0.144032);
}

double NNfunction_NN_1_8::synapse0x1a3ed10() {
   return (neuron0x1a24db0()*-0.0958396);
}

double NNfunction_NN_1_8::synapse0x1a3ed50() {
   return (neuron0x1a25310()*0.0225011);
}

double NNfunction_NN_1_8::synapse0x1a3f3d0() {
   return (neuron0x1a25530()*0.0939609);
}

double NNfunction_NN_1_8::synapse0x1a3f410() {
   return (neuron0x1a25870()*0.0545827);
}

double NNfunction_NN_1_8::synapse0x1a3f450() {
   return (neuron0x1a25bb0()*0.125808);
}

double NNfunction_NN_1_8::synapse0x1a3f490() {
   return (neuron0x1a25ef0()*-0.0142015);
}

double NNfunction_NN_1_8::synapse0x1a3f4d0() {
   return (neuron0x1a26230()*-0.000766522);
}

double NNfunction_NN_1_8::synapse0x1a3f510() {
   return (neuron0x1a26570()*-0.587542);
}

double NNfunction_NN_1_8::synapse0x1a3f890() {
   return (neuron0x1a219b0()*-1.35786);
}

double NNfunction_NN_1_8::synapse0x1a3f8d0() {
   return (neuron0x1a21cf0()*-0.0365765);
}

double NNfunction_NN_1_8::synapse0x1a3f910() {
   return (neuron0x1a22030()*0.966694);
}

double NNfunction_NN_1_8::synapse0x1a3f950() {
   return (neuron0x1a22370()*0.196303);
}

double NNfunction_NN_1_8::synapse0x1a3f990() {
   return (neuron0x1a226b0()*0.00342771);
}

double NNfunction_NN_1_8::synapse0x1a3f9d0() {
   return (neuron0x1a229f0()*0.109575);
}

double NNfunction_NN_1_8::synapse0x1a3fa10() {
   return (neuron0x1a22d30()*-0.014898);
}

double NNfunction_NN_1_8::synapse0x1a3fa50() {
   return (neuron0x1a23070()*-0.0304467);
}

double NNfunction_NN_1_8::synapse0x1a3fa90() {
   return (neuron0x1a233b0()*0.067592);
}

double NNfunction_NN_1_8::synapse0x1a3fad0() {
   return (neuron0x1a236f0()*-0.0634766);
}

double NNfunction_NN_1_8::synapse0x1a3fb10() {
   return (neuron0x1a23a30()*-0.000717939);
}

double NNfunction_NN_1_8::synapse0x1a3fb50() {
   return (neuron0x1a23d70()*-0.315611);
}

double NNfunction_NN_1_8::synapse0x1a3fb90() {
   return (neuron0x1a240b0()*0.0465568);
}

double NNfunction_NN_1_8::synapse0x1a3fbd0() {
   return (neuron0x1a243f0()*0.0149104);
}

double NNfunction_NN_1_8::synapse0x1a3fc10() {
   return (neuron0x1a24730()*0.0538088);
}

double NNfunction_NN_1_8::synapse0x1a3fc50() {
   return (neuron0x1a24a70()*-0.101324);
}

double NNfunction_NN_1_8::synapse0x1a3f6e0() {
   return (neuron0x1a24db0()*0.0888023);
}

double NNfunction_NN_1_8::synapse0x1a3f720() {
   return (neuron0x1a25310()*0.0101991);
}

double NNfunction_NN_1_8::synapse0x1a3fda0() {
   return (neuron0x1a25530()*-0.0518224);
}

double NNfunction_NN_1_8::synapse0x1a3fde0() {
   return (neuron0x1a25870()*-0.0453709);
}

double NNfunction_NN_1_8::synapse0x1a3fe20() {
   return (neuron0x1a25bb0()*0.0351191);
}

double NNfunction_NN_1_8::synapse0x1a3fe60() {
   return (neuron0x1a25ef0()*0.132289);
}

double NNfunction_NN_1_8::synapse0x1a3fea0() {
   return (neuron0x1a26230()*-0.0188946);
}

double NNfunction_NN_1_8::synapse0x1a3fee0() {
   return (neuron0x1a26570()*1.23391);
}

double NNfunction_NN_1_8::synapse0x1a40260() {
   return (neuron0x1a219b0()*-0.0568466);
}

double NNfunction_NN_1_8::synapse0x1a402a0() {
   return (neuron0x1a21cf0()*-0.0351925);
}

double NNfunction_NN_1_8::synapse0x1a402e0() {
   return (neuron0x1a22030()*1.9557);
}

double NNfunction_NN_1_8::synapse0x1a40320() {
   return (neuron0x1a22370()*0.0285627);
}

double NNfunction_NN_1_8::synapse0x1a40360() {
   return (neuron0x1a226b0()*0.00237155);
}

double NNfunction_NN_1_8::synapse0x1a403a0() {
   return (neuron0x1a229f0()*0.0142113);
}

double NNfunction_NN_1_8::synapse0x1a403e0() {
   return (neuron0x1a22d30()*-0.0103244);
}

double NNfunction_NN_1_8::synapse0x1a40420() {
   return (neuron0x1a23070()*0.0409204);
}

double NNfunction_NN_1_8::synapse0x1a40460() {
   return (neuron0x1a233b0()*-0.0227065);
}

double NNfunction_NN_1_8::synapse0x1a404a0() {
   return (neuron0x1a236f0()*0.0108206);
}

double NNfunction_NN_1_8::synapse0x1a404e0() {
   return (neuron0x1a23a30()*0.0217867);
}

double NNfunction_NN_1_8::synapse0x1a40520() {
   return (neuron0x1a23d70()*-6.78615);
}

double NNfunction_NN_1_8::synapse0x1a40560() {
   return (neuron0x1a240b0()*-0.0839447);
}

double NNfunction_NN_1_8::synapse0x1a405a0() {
   return (neuron0x1a243f0()*0.0316713);
}

double NNfunction_NN_1_8::synapse0x1a405e0() {
   return (neuron0x1a24730()*0.0954697);
}

double NNfunction_NN_1_8::synapse0x1a40620() {
   return (neuron0x1a24a70()*0.0701158);
}

double NNfunction_NN_1_8::synapse0x1a400b0() {
   return (neuron0x1a24db0()*0.00706192);
}

double NNfunction_NN_1_8::synapse0x1a400f0() {
   return (neuron0x1a25310()*-0.0113998);
}

double NNfunction_NN_1_8::synapse0x1a40770() {
   return (neuron0x1a25530()*-0.0245693);
}

double NNfunction_NN_1_8::synapse0x1a407b0() {
   return (neuron0x1a25870()*0.040141);
}

double NNfunction_NN_1_8::synapse0x1a407f0() {
   return (neuron0x1a25bb0()*-0.0361928);
}

double NNfunction_NN_1_8::synapse0x1a40830() {
   return (neuron0x1a25ef0()*-0.0418911);
}

double NNfunction_NN_1_8::synapse0x1a40870() {
   return (neuron0x1a26230()*0.0107877);
}

double NNfunction_NN_1_8::synapse0x1a408b0() {
   return (neuron0x1a26570()*3.69755);
}

double NNfunction_NN_1_8::synapse0x1a40c30() {
   return (neuron0x1a219b0()*0.150311);
}

double NNfunction_NN_1_8::synapse0x1a40c70() {
   return (neuron0x1a21cf0()*0.00295834);
}

double NNfunction_NN_1_8::synapse0x1a40cb0() {
   return (neuron0x1a22030()*0.967846);
}

double NNfunction_NN_1_8::synapse0x1a40cf0() {
   return (neuron0x1a22370()*0.0384673);
}

double NNfunction_NN_1_8::synapse0x1a40d30() {
   return (neuron0x1a226b0()*0.0468219);
}

double NNfunction_NN_1_8::synapse0x1a40d70() {
   return (neuron0x1a229f0()*0.0289459);
}

double NNfunction_NN_1_8::synapse0x1a40db0() {
   return (neuron0x1a22d30()*0.0741272);
}

double NNfunction_NN_1_8::synapse0x1a40df0() {
   return (neuron0x1a23070()*0.0196184);
}

double NNfunction_NN_1_8::synapse0x1a40e30() {
   return (neuron0x1a233b0()*0.0612071);
}

double NNfunction_NN_1_8::synapse0x1a40e70() {
   return (neuron0x1a236f0()*-0.0121167);
}

double NNfunction_NN_1_8::synapse0x1a40eb0() {
   return (neuron0x1a23a30()*0.0323712);
}

double NNfunction_NN_1_8::synapse0x1a40ef0() {
   return (neuron0x1a23d70()*-2.21404);
}

double NNfunction_NN_1_8::synapse0x1a40f30() {
   return (neuron0x1a240b0()*-0.170701);
}

double NNfunction_NN_1_8::synapse0x1a40f70() {
   return (neuron0x1a243f0()*-0.028018);
}

double NNfunction_NN_1_8::synapse0x1a40fb0() {
   return (neuron0x1a24730()*0.00301041);
}

double NNfunction_NN_1_8::synapse0x1a40ff0() {
   return (neuron0x1a24a70()*0.0234118);
}

double NNfunction_NN_1_8::synapse0x1a40a80() {
   return (neuron0x1a24db0()*0.0217732);
}

double NNfunction_NN_1_8::synapse0x1a40ac0() {
   return (neuron0x1a25310()*-0.0655302);
}

double NNfunction_NN_1_8::synapse0x1a41140() {
   return (neuron0x1a25530()*-0.0662526);
}

double NNfunction_NN_1_8::synapse0x1a41180() {
   return (neuron0x1a25870()*-0.00615063);
}

double NNfunction_NN_1_8::synapse0x1a411c0() {
   return (neuron0x1a25bb0()*-0.0261247);
}

double NNfunction_NN_1_8::synapse0x1a41200() {
   return (neuron0x1a25ef0()*-0.10225);
}

double NNfunction_NN_1_8::synapse0x1a41240() {
   return (neuron0x1a26230()*0.00261704);
}

double NNfunction_NN_1_8::synapse0x1a41280() {
   return (neuron0x1a26570()*-3.48732);
}

double NNfunction_NN_1_8::synapse0x1a41600() {
   return (neuron0x1a219b0()*-0.354191);
}

double NNfunction_NN_1_8::synapse0x1a41640() {
   return (neuron0x1a21cf0()*-0.0085984);
}

double NNfunction_NN_1_8::synapse0x1a41680() {
   return (neuron0x1a22030()*-2.67031);
}

double NNfunction_NN_1_8::synapse0x1a416c0() {
   return (neuron0x1a22370()*-0.0365483);
}

double NNfunction_NN_1_8::synapse0x1a41700() {
   return (neuron0x1a226b0()*0.0711608);
}

double NNfunction_NN_1_8::synapse0x1a41740() {
   return (neuron0x1a229f0()*-0.00379584);
}

double NNfunction_NN_1_8::synapse0x1a41780() {
   return (neuron0x1a22d30()*0.0632498);
}

double NNfunction_NN_1_8::synapse0x1a417c0() {
   return (neuron0x1a23070()*-0.0279333);
}

double NNfunction_NN_1_8::synapse0x1a41800() {
   return (neuron0x1a233b0()*-0.0344473);
}

double NNfunction_NN_1_8::synapse0x1a41840() {
   return (neuron0x1a236f0()*-0.088416);
}

double NNfunction_NN_1_8::synapse0x1a41880() {
   return (neuron0x1a23a30()*0.00660468);
}

double NNfunction_NN_1_8::synapse0x1a418c0() {
   return (neuron0x1a23d70()*0.052057);
}

double NNfunction_NN_1_8::synapse0x1a41900() {
   return (neuron0x1a240b0()*-0.0555142);
}

double NNfunction_NN_1_8::synapse0x1a41940() {
   return (neuron0x1a243f0()*-0.0169053);
}

double NNfunction_NN_1_8::synapse0x1a41980() {
   return (neuron0x1a24730()*-0.0610079);
}

double NNfunction_NN_1_8::synapse0x1a419c0() {
   return (neuron0x1a24a70()*0.0156131);
}

double NNfunction_NN_1_8::synapse0x1a41450() {
   return (neuron0x1a24db0()*-0.0731741);
}

double NNfunction_NN_1_8::synapse0x1a41490() {
   return (neuron0x1a25310()*0.0507026);
}

double NNfunction_NN_1_8::synapse0x1a41b10() {
   return (neuron0x1a25530()*0.0331373);
}

double NNfunction_NN_1_8::synapse0x1a41b50() {
   return (neuron0x1a25870()*-0.00316393);
}

double NNfunction_NN_1_8::synapse0x1a41b90() {
   return (neuron0x1a25bb0()*-0.0135356);
}

double NNfunction_NN_1_8::synapse0x1a41bd0() {
   return (neuron0x1a25ef0()*0.0183517);
}

double NNfunction_NN_1_8::synapse0x1a41c10() {
   return (neuron0x1a26230()*0.0152779);
}

double NNfunction_NN_1_8::synapse0x1a41c50() {
   return (neuron0x1a26570()*-4.25014);
}

double NNfunction_NN_1_8::synapse0x1a41fd0() {
   return (neuron0x1a219b0()*0.103356);
}

double NNfunction_NN_1_8::synapse0x1a42010() {
   return (neuron0x1a21cf0()*-5.43507);
}

double NNfunction_NN_1_8::synapse0x1a42050() {
   return (neuron0x1a22030()*0.254737);
}

double NNfunction_NN_1_8::synapse0x1a42090() {
   return (neuron0x1a22370()*0.0821893);
}

double NNfunction_NN_1_8::synapse0x1a420d0() {
   return (neuron0x1a226b0()*-0.065618);
}

double NNfunction_NN_1_8::synapse0x1a42110() {
   return (neuron0x1a229f0()*0.0511644);
}

double NNfunction_NN_1_8::synapse0x1a42150() {
   return (neuron0x1a22d30()*0.0417066);
}

double NNfunction_NN_1_8::synapse0x1a42190() {
   return (neuron0x1a23070()*-0.0676675);
}

double NNfunction_NN_1_8::synapse0x1a421d0() {
   return (neuron0x1a233b0()*-0.0888812);
}

double NNfunction_NN_1_8::synapse0x1a42210() {
   return (neuron0x1a236f0()*-0.0215124);
}

double NNfunction_NN_1_8::synapse0x1a42250() {
   return (neuron0x1a23a30()*-0.0165658);
}

double NNfunction_NN_1_8::synapse0x1a42290() {
   return (neuron0x1a23d70()*-0.0356469);
}

double NNfunction_NN_1_8::synapse0x1a422d0() {
   return (neuron0x1a240b0()*0.0280806);
}

double NNfunction_NN_1_8::synapse0x1a42310() {
   return (neuron0x1a243f0()*-0.00214589);
}

double NNfunction_NN_1_8::synapse0x1a42350() {
   return (neuron0x1a24730()*-0.0232667);
}

double NNfunction_NN_1_8::synapse0x1a42390() {
   return (neuron0x1a24a70()*0.00429976);
}

double NNfunction_NN_1_8::synapse0x1a41e20() {
   return (neuron0x1a24db0()*-0.0205148);
}

double NNfunction_NN_1_8::synapse0x1a41e60() {
   return (neuron0x1a25310()*-0.0388097);
}

double NNfunction_NN_1_8::synapse0x1a424e0() {
   return (neuron0x1a25530()*0.0817631);
}

double NNfunction_NN_1_8::synapse0x1a42520() {
   return (neuron0x1a25870()*0.11961);
}

double NNfunction_NN_1_8::synapse0x1a42560() {
   return (neuron0x1a25bb0()*-0.0135745);
}

double NNfunction_NN_1_8::synapse0x1a425a0() {
   return (neuron0x1a25ef0()*0.0305829);
}

double NNfunction_NN_1_8::synapse0x1a425e0() {
   return (neuron0x1a26230()*-0.0205477);
}

double NNfunction_NN_1_8::synapse0x1a42620() {
   return (neuron0x1a26570()*-0.637604);
}

double NNfunction_NN_1_8::synapse0x1a429a0() {
   return (neuron0x1a219b0()*0.239289);
}

double NNfunction_NN_1_8::synapse0x1a429e0() {
   return (neuron0x1a21cf0()*-0.111876);
}

double NNfunction_NN_1_8::synapse0x1a42a20() {
   return (neuron0x1a22030()*1.08892);
}

double NNfunction_NN_1_8::synapse0x1a42a60() {
   return (neuron0x1a22370()*-0.1837);
}

double NNfunction_NN_1_8::synapse0x1a42aa0() {
   return (neuron0x1a226b0()*0.0804861);
}

double NNfunction_NN_1_8::synapse0x1a42ae0() {
   return (neuron0x1a229f0()*0.20469);
}

double NNfunction_NN_1_8::synapse0x1a42b20() {
   return (neuron0x1a22d30()*-0.0631994);
}

double NNfunction_NN_1_8::synapse0x1a42b60() {
   return (neuron0x1a23070()*-0.00541106);
}

double NNfunction_NN_1_8::synapse0x1a42ba0() {
   return (neuron0x1a233b0()*-0.0299681);
}

double NNfunction_NN_1_8::synapse0x1a42be0() {
   return (neuron0x1a236f0()*0.0283097);
}

double NNfunction_NN_1_8::synapse0x1a42c20() {
   return (neuron0x1a23a30()*-0.039883);
}

double NNfunction_NN_1_8::synapse0x1a42c60() {
   return (neuron0x1a23d70()*0.486211);
}

double NNfunction_NN_1_8::synapse0x1a42ca0() {
   return (neuron0x1a240b0()*0.231101);
}

double NNfunction_NN_1_8::synapse0x1a42ce0() {
   return (neuron0x1a243f0()*-0.126986);
}

double NNfunction_NN_1_8::synapse0x1a42d20() {
   return (neuron0x1a24730()*0.0346898);
}

double NNfunction_NN_1_8::synapse0x1a42d60() {
   return (neuron0x1a24a70()*-0.126063);
}

double NNfunction_NN_1_8::synapse0x1a427f0() {
   return (neuron0x1a24db0()*-0.28483);
}

double NNfunction_NN_1_8::synapse0x1a42830() {
   return (neuron0x1a25310()*-0.24423);
}

double NNfunction_NN_1_8::synapse0x1a42eb0() {
   return (neuron0x1a25530()*-0.0748952);
}

double NNfunction_NN_1_8::synapse0x1a42ef0() {
   return (neuron0x1a25870()*-0.21199);
}

double NNfunction_NN_1_8::synapse0x1a42f30() {
   return (neuron0x1a25bb0()*-0.185001);
}

double NNfunction_NN_1_8::synapse0x1a42f70() {
   return (neuron0x1a25ef0()*0.0782514);
}

double NNfunction_NN_1_8::synapse0x1a42fb0() {
   return (neuron0x1a26230()*-0.0690175);
}

double NNfunction_NN_1_8::synapse0x1a42ff0() {
   return (neuron0x1a26570()*-0.238972);
}

double NNfunction_NN_1_8::synapse0x1a2baa0() {
   return (neuron0x1a219b0()*1.0807);
}

double NNfunction_NN_1_8::synapse0x1a2bae0() {
   return (neuron0x1a21cf0()*-0.20224);
}

double NNfunction_NN_1_8::synapse0x1a2bb20() {
   return (neuron0x1a22030()*1.25676);
}

double NNfunction_NN_1_8::synapse0x1a2bb60() {
   return (neuron0x1a22370()*0.255966);
}

double NNfunction_NN_1_8::synapse0x1a2bba0() {
   return (neuron0x1a226b0()*-0.0863481);
}

double NNfunction_NN_1_8::synapse0x1a2bbe0() {
   return (neuron0x1a229f0()*-0.0634142);
}

double NNfunction_NN_1_8::synapse0x1a2bc20() {
   return (neuron0x1a22d30()*0.829499);
}

double NNfunction_NN_1_8::synapse0x1a2bc60() {
   return (neuron0x1a23070()*0.214431);
}

double NNfunction_NN_1_8::synapse0x1a43780() {
   return (neuron0x1a233b0()*-0.1017);
}

double NNfunction_NN_1_8::synapse0x1a437c0() {
   return (neuron0x1a236f0()*0.0955996);
}

double NNfunction_NN_1_8::synapse0x1a43800() {
   return (neuron0x1a23a30()*-0.540738);
}

double NNfunction_NN_1_8::synapse0x1a43840() {
   return (neuron0x1a23d70()*0.0985966);
}

double NNfunction_NN_1_8::synapse0x1a43880() {
   return (neuron0x1a240b0()*0.31341);
}

double NNfunction_NN_1_8::synapse0x1a438c0() {
   return (neuron0x1a243f0()*0.100258);
}

double NNfunction_NN_1_8::synapse0x1a43900() {
   return (neuron0x1a24730()*0.164729);
}

double NNfunction_NN_1_8::synapse0x1a43940() {
   return (neuron0x1a24a70()*0.1376);
}

double NNfunction_NN_1_8::synapse0x1a431c0() {
   return (neuron0x1a24db0()*0.412021);
}

double NNfunction_NN_1_8::synapse0x1a43200() {
   return (neuron0x1a25310()*-0.071986);
}

double NNfunction_NN_1_8::synapse0x1a43a90() {
   return (neuron0x1a25530()*0.244958);
}

double NNfunction_NN_1_8::synapse0x1a43ad0() {
   return (neuron0x1a25870()*-0.072661);
}

double NNfunction_NN_1_8::synapse0x1a43b10() {
   return (neuron0x1a25bb0()*-0.15225);
}

double NNfunction_NN_1_8::synapse0x1a43b50() {
   return (neuron0x1a25ef0()*0.127818);
}

double NNfunction_NN_1_8::synapse0x1a43b90() {
   return (neuron0x1a26230()*0.0309241);
}

double NNfunction_NN_1_8::synapse0x1a43bd0() {
   return (neuron0x1a26570()*-2.50263);
}

double NNfunction_NN_1_8::synapse0x1a43f50() {
   return (neuron0x1a219b0()*-0.166901);
}

double NNfunction_NN_1_8::synapse0x1a43f90() {
   return (neuron0x1a21cf0()*-0.0227309);
}

double NNfunction_NN_1_8::synapse0x1a43fd0() {
   return (neuron0x1a22030()*1.56525);
}

double NNfunction_NN_1_8::synapse0x1a44010() {
   return (neuron0x1a22370()*-0.0360741);
}

double NNfunction_NN_1_8::synapse0x1a44050() {
   return (neuron0x1a226b0()*0.0302867);
}

double NNfunction_NN_1_8::synapse0x1a44090() {
   return (neuron0x1a229f0()*0.0215889);
}

double NNfunction_NN_1_8::synapse0x1a440d0() {
   return (neuron0x1a22d30()*0.0135108);
}

double NNfunction_NN_1_8::synapse0x1a44110() {
   return (neuron0x1a23070()*0.0540486);
}

double NNfunction_NN_1_8::synapse0x1a44150() {
   return (neuron0x1a233b0()*0.00481408);
}

double NNfunction_NN_1_8::synapse0x1a44190() {
   return (neuron0x1a236f0()*-0.00599806);
}

double NNfunction_NN_1_8::synapse0x1a441d0() {
   return (neuron0x1a23a30()*0.00509852);
}

double NNfunction_NN_1_8::synapse0x1a44210() {
   return (neuron0x1a23d70()*-4.03643);
}

double NNfunction_NN_1_8::synapse0x1a44250() {
   return (neuron0x1a240b0()*-0.0227601);
}

double NNfunction_NN_1_8::synapse0x1a44290() {
   return (neuron0x1a243f0()*0.00970347);
}

double NNfunction_NN_1_8::synapse0x1a442d0() {
   return (neuron0x1a24730()*0.063692);
}

double NNfunction_NN_1_8::synapse0x1a44310() {
   return (neuron0x1a24a70()*0.109495);
}

double NNfunction_NN_1_8::synapse0x1a43da0() {
   return (neuron0x1a24db0()*-0.0202992);
}

double NNfunction_NN_1_8::synapse0x1a43de0() {
   return (neuron0x1a25310()*-0.0410967);
}

double NNfunction_NN_1_8::synapse0x1a44460() {
   return (neuron0x1a25530()*-0.00353193);
}

double NNfunction_NN_1_8::synapse0x1a444a0() {
   return (neuron0x1a25870()*0.040791);
}

double NNfunction_NN_1_8::synapse0x1a444e0() {
   return (neuron0x1a25bb0()*-0.0663055);
}

double NNfunction_NN_1_8::synapse0x1a44520() {
   return (neuron0x1a25ef0()*-0.047247);
}

double NNfunction_NN_1_8::synapse0x1a44560() {
   return (neuron0x1a26230()*-0.00855948);
}

double NNfunction_NN_1_8::synapse0x1a445a0() {
   return (neuron0x1a26570()*-0.901488);
}

double NNfunction_NN_1_8::synapse0x1a44920() {
   return (neuron0x1a219b0()*0.382371);
}

double NNfunction_NN_1_8::synapse0x1a44960() {
   return (neuron0x1a21cf0()*-0.00815004);
}

double NNfunction_NN_1_8::synapse0x1a449a0() {
   return (neuron0x1a22030()*1.46129);
}

double NNfunction_NN_1_8::synapse0x1a449e0() {
   return (neuron0x1a22370()*0.241688);
}

double NNfunction_NN_1_8::synapse0x1a44a20() {
   return (neuron0x1a226b0()*0.222523);
}

double NNfunction_NN_1_8::synapse0x1a44a60() {
   return (neuron0x1a229f0()*-0.0384024);
}

double NNfunction_NN_1_8::synapse0x1a44aa0() {
   return (neuron0x1a22d30()*0.102686);
}

double NNfunction_NN_1_8::synapse0x1a44ae0() {
   return (neuron0x1a23070()*-0.103362);
}

double NNfunction_NN_1_8::synapse0x1a44b20() {
   return (neuron0x1a233b0()*-0.134573);
}

double NNfunction_NN_1_8::synapse0x1a44b60() {
   return (neuron0x1a236f0()*-0.106538);
}

double NNfunction_NN_1_8::synapse0x1a44ba0() {
   return (neuron0x1a23a30()*0.067698);
}

double NNfunction_NN_1_8::synapse0x1a44be0() {
   return (neuron0x1a23d70()*-2.40608);
}

double NNfunction_NN_1_8::synapse0x1a44c20() {
   return (neuron0x1a240b0()*-0.0371038);
}

double NNfunction_NN_1_8::synapse0x1a44c60() {
   return (neuron0x1a243f0()*0.051324);
}

double NNfunction_NN_1_8::synapse0x1a44ca0() {
   return (neuron0x1a24730()*-0.0365777);
}

double NNfunction_NN_1_8::synapse0x1a44ce0() {
   return (neuron0x1a24a70()*-0.0102153);
}

double NNfunction_NN_1_8::synapse0x1a44770() {
   return (neuron0x1a24db0()*0.0351667);
}

double NNfunction_NN_1_8::synapse0x1a447b0() {
   return (neuron0x1a25310()*0.0655823);
}

double NNfunction_NN_1_8::synapse0x1a352e0() {
   return (neuron0x1a25530()*0.0511591);
}

double NNfunction_NN_1_8::synapse0x1a35320() {
   return (neuron0x1a25870()*-0.047809);
}

double NNfunction_NN_1_8::synapse0x1a35360() {
   return (neuron0x1a25bb0()*-0.0622668);
}

double NNfunction_NN_1_8::synapse0x1a353a0() {
   return (neuron0x1a25ef0()*-0.0916);
}

double NNfunction_NN_1_8::synapse0x1a353e0() {
   return (neuron0x1a26230()*-0.0264304);
}

double NNfunction_NN_1_8::synapse0x1a35420() {
   return (neuron0x1a26570()*3.27362);
}

double NNfunction_NN_1_8::synapse0x1a357a0() {
   return (neuron0x1a219b0()*0.169793);
}

double NNfunction_NN_1_8::synapse0x1a357e0() {
   return (neuron0x1a21cf0()*0.17035);
}

double NNfunction_NN_1_8::synapse0x1a35820() {
   return (neuron0x1a22030()*-1.47507);
}

double NNfunction_NN_1_8::synapse0x1a35860() {
   return (neuron0x1a22370()*-0.0265228);
}

double NNfunction_NN_1_8::synapse0x1a358a0() {
   return (neuron0x1a226b0()*-0.011016);
}

double NNfunction_NN_1_8::synapse0x1a358e0() {
   return (neuron0x1a229f0()*-0.00216655);
}

double NNfunction_NN_1_8::synapse0x1a35920() {
   return (neuron0x1a22d30()*0.0107607);
}

double NNfunction_NN_1_8::synapse0x1a35960() {
   return (neuron0x1a23070()*-0.0404693);
}

double NNfunction_NN_1_8::synapse0x1a359a0() {
   return (neuron0x1a233b0()*-0.0313921);
}

double NNfunction_NN_1_8::synapse0x1a359e0() {
   return (neuron0x1a236f0()*0.00907413);
}

double NNfunction_NN_1_8::synapse0x1a35a20() {
   return (neuron0x1a23a30()*0.00378845);
}

double NNfunction_NN_1_8::synapse0x1a35a60() {
   return (neuron0x1a23d70()*0.0994078);
}

double NNfunction_NN_1_8::synapse0x1a35aa0() {
   return (neuron0x1a240b0()*-0.0119431);
}

double NNfunction_NN_1_8::synapse0x1a35ae0() {
   return (neuron0x1a243f0()*-0.0603087);
}

double NNfunction_NN_1_8::synapse0x1a35b20() {
   return (neuron0x1a24730()*-0.0432689);
}

double NNfunction_NN_1_8::synapse0x1a35b60() {
   return (neuron0x1a24a70()*0.0125826);
}

double NNfunction_NN_1_8::synapse0x1a355f0() {
   return (neuron0x1a24db0()*-0.0871305);
}

double NNfunction_NN_1_8::synapse0x1a35630() {
   return (neuron0x1a25310()*-0.0161333);
}

double NNfunction_NN_1_8::synapse0x1a35cb0() {
   return (neuron0x1a25530()*-0.0156716);
}

double NNfunction_NN_1_8::synapse0x1a35cf0() {
   return (neuron0x1a25870()*0.0353037);
}

double NNfunction_NN_1_8::synapse0x1a35d30() {
   return (neuron0x1a25bb0()*-0.00717946);
}

double NNfunction_NN_1_8::synapse0x1a35d70() {
   return (neuron0x1a25ef0()*-0.00620075);
}

double NNfunction_NN_1_8::synapse0x1a35db0() {
   return (neuron0x1a26230()*-0.0327892);
}

double NNfunction_NN_1_8::synapse0x1a35df0() {
   return (neuron0x1a26570()*-0.960474);
}

double NNfunction_NN_1_8::synapse0x1a36170() {
   return (neuron0x1a219b0()*0.0468125);
}

double NNfunction_NN_1_8::synapse0x1a361b0() {
   return (neuron0x1a21cf0()*0.0456416);
}

double NNfunction_NN_1_8::synapse0x1a361f0() {
   return (neuron0x1a22030()*-0.444807);
}

double NNfunction_NN_1_8::synapse0x1a36230() {
   return (neuron0x1a22370()*0.00903666);
}

double NNfunction_NN_1_8::synapse0x1a36270() {
   return (neuron0x1a226b0()*0.00537746);
}

double NNfunction_NN_1_8::synapse0x1a362b0() {
   return (neuron0x1a229f0()*0.0262864);
}

double NNfunction_NN_1_8::synapse0x1a362f0() {
   return (neuron0x1a22d30()*0.0522607);
}

double NNfunction_NN_1_8::synapse0x1a36330() {
   return (neuron0x1a23070()*0.0139469);
}

double NNfunction_NN_1_8::synapse0x1a36370() {
   return (neuron0x1a233b0()*0.0187097);
}

double NNfunction_NN_1_8::synapse0x1a363b0() {
   return (neuron0x1a236f0()*-0.0197653);
}

double NNfunction_NN_1_8::synapse0x1a363f0() {
   return (neuron0x1a23a30()*-0.0296626);
}

double NNfunction_NN_1_8::synapse0x1a36430() {
   return (neuron0x1a23d70()*-1.07115);
}

double NNfunction_NN_1_8::synapse0x1a36470() {
   return (neuron0x1a240b0()*0.0147869);
}

double NNfunction_NN_1_8::synapse0x1a364b0() {
   return (neuron0x1a243f0()*-0.0168387);
}

double NNfunction_NN_1_8::synapse0x1a364f0() {
   return (neuron0x1a24730()*0.00528451);
}

double NNfunction_NN_1_8::synapse0x1a36530() {
   return (neuron0x1a24a70()*-0.044742);
}

double NNfunction_NN_1_8::synapse0x1a35fc0() {
   return (neuron0x1a24db0()*-0.0239102);
}

double NNfunction_NN_1_8::synapse0x1a36000() {
   return (neuron0x1a25310()*0.0694699);
}

double NNfunction_NN_1_8::synapse0x1a36680() {
   return (neuron0x1a25530()*0.0122238);
}

double NNfunction_NN_1_8::synapse0x1a366c0() {
   return (neuron0x1a25870()*0.0791331);
}

double NNfunction_NN_1_8::synapse0x1a36700() {
   return (neuron0x1a25bb0()*-0.0204707);
}

double NNfunction_NN_1_8::synapse0x1a36740() {
   return (neuron0x1a25ef0()*-0.0152663);
}

double NNfunction_NN_1_8::synapse0x1a36780() {
   return (neuron0x1a26230()*-0.0190811);
}

double NNfunction_NN_1_8::synapse0x1a367c0() {
   return (neuron0x1a26570()*-0.451398);
}

double NNfunction_NN_1_8::synapse0x1a36b40() {
   return (neuron0x1a219b0()*0.154335);
}

double NNfunction_NN_1_8::synapse0x1a36b80() {
   return (neuron0x1a21cf0()*-0.0409334);
}

double NNfunction_NN_1_8::synapse0x1a36bc0() {
   return (neuron0x1a22030()*1.35585);
}

double NNfunction_NN_1_8::synapse0x1a36c00() {
   return (neuron0x1a22370()*0.021941);
}

double NNfunction_NN_1_8::synapse0x1a36c40() {
   return (neuron0x1a226b0()*-0.00724058);
}

double NNfunction_NN_1_8::synapse0x1a36c80() {
   return (neuron0x1a229f0()*0.00500902);
}

double NNfunction_NN_1_8::synapse0x1a36cc0() {
   return (neuron0x1a22d30()*-0.00179878);
}

double NNfunction_NN_1_8::synapse0x1a36d00() {
   return (neuron0x1a23070()*-0.00833774);
}

double NNfunction_NN_1_8::synapse0x1a36d40() {
   return (neuron0x1a233b0()*0.0268478);
}

double NNfunction_NN_1_8::synapse0x1a36d80() {
   return (neuron0x1a236f0()*0.00426036);
}

double NNfunction_NN_1_8::synapse0x1a36dc0() {
   return (neuron0x1a23a30()*-0.00828694);
}

double NNfunction_NN_1_8::synapse0x1a36e00() {
   return (neuron0x1a23d70()*0.00320634);
}

double NNfunction_NN_1_8::synapse0x1a36e40() {
   return (neuron0x1a240b0()*0.0237332);
}

double NNfunction_NN_1_8::synapse0x1a36e80() {
   return (neuron0x1a243f0()*0.0211208);
}

double NNfunction_NN_1_8::synapse0x1a36ec0() {
   return (neuron0x1a24730()*0.0301544);
}

double NNfunction_NN_1_8::synapse0x1a36f00() {
   return (neuron0x1a24a70()*0.0236289);
}

double NNfunction_NN_1_8::synapse0x1a36990() {
   return (neuron0x1a24db0()*0.00447944);
}

double NNfunction_NN_1_8::synapse0x1a369d0() {
   return (neuron0x1a25310()*-0.00692326);
}

double NNfunction_NN_1_8::synapse0x1a37050() {
   return (neuron0x1a25530()*-0.00873082);
}

double NNfunction_NN_1_8::synapse0x1a37090() {
   return (neuron0x1a25870()*-0.00906118);
}

double NNfunction_NN_1_8::synapse0x1a370d0() {
   return (neuron0x1a25bb0()*-0.00234631);
}

double NNfunction_NN_1_8::synapse0x1a37110() {
   return (neuron0x1a25ef0()*-0.00546628);
}

double NNfunction_NN_1_8::synapse0x1a37150() {
   return (neuron0x1a26230()*0.0119488);
}

double NNfunction_NN_1_8::synapse0x1a37190() {
   return (neuron0x1a26570()*2.89692);
}

double NNfunction_NN_1_8::synapse0x1a49060() {
   return (neuron0x1a219b0()*-0.0165171);
}

double NNfunction_NN_1_8::synapse0x1a490a0() {
   return (neuron0x1a21cf0()*-0.0313365);
}

double NNfunction_NN_1_8::synapse0x1a490e0() {
   return (neuron0x1a22030()*-0.179716);
}

double NNfunction_NN_1_8::synapse0x1a49120() {
   return (neuron0x1a22370()*3.47681);
}

double NNfunction_NN_1_8::synapse0x1a49160() {
   return (neuron0x1a226b0()*-0.00583996);
}

double NNfunction_NN_1_8::synapse0x1a491a0() {
   return (neuron0x1a229f0()*0.0547392);
}

double NNfunction_NN_1_8::synapse0x1a491e0() {
   return (neuron0x1a22d30()*0.000317823);
}

double NNfunction_NN_1_8::synapse0x1a49220() {
   return (neuron0x1a23070()*-0.0199362);
}

double NNfunction_NN_1_8::synapse0x1a49260() {
   return (neuron0x1a233b0()*0.019578);
}

double NNfunction_NN_1_8::synapse0x1a492a0() {
   return (neuron0x1a236f0()*-0.0453234);
}

double NNfunction_NN_1_8::synapse0x1a492e0() {
   return (neuron0x1a23a30()*0.003539);
}

double NNfunction_NN_1_8::synapse0x1a49320() {
   return (neuron0x1a23d70()*-0.774603);
}

double NNfunction_NN_1_8::synapse0x1a49360() {
   return (neuron0x1a240b0()*0.0176257);
}

double NNfunction_NN_1_8::synapse0x1a493a0() {
   return (neuron0x1a243f0()*-0.0271592);
}

double NNfunction_NN_1_8::synapse0x1a493e0() {
   return (neuron0x1a24730()*0.0504908);
}

double NNfunction_NN_1_8::synapse0x1a49420() {
   return (neuron0x1a24a70()*0.00338782);
}

double NNfunction_NN_1_8::synapse0x1a371d0() {
   return (neuron0x1a24db0()*-0.0501905);
}

double NNfunction_NN_1_8::synapse0x1a37210() {
   return (neuron0x1a25310()*0.00376876);
}

double NNfunction_NN_1_8::synapse0x1a49570() {
   return (neuron0x1a25530()*0.0202627);
}

double NNfunction_NN_1_8::synapse0x1a495b0() {
   return (neuron0x1a25870()*-0.0275037);
}

double NNfunction_NN_1_8::synapse0x1a495f0() {
   return (neuron0x1a25bb0()*0.0101339);
}

double NNfunction_NN_1_8::synapse0x1a49630() {
   return (neuron0x1a25ef0()*-0.0105714);
}

double NNfunction_NN_1_8::synapse0x1a49670() {
   return (neuron0x1a26230()*-0.00233856);
}

double NNfunction_NN_1_8::synapse0x1a496b0() {
   return (neuron0x1a26570()*0.112649);
}

double NNfunction_NN_1_8::synapse0x1a49a30() {
   return (neuron0x1a219b0()*-0.715514);
}

double NNfunction_NN_1_8::synapse0x1a49a70() {
   return (neuron0x1a21cf0()*0.151594);
}

double NNfunction_NN_1_8::synapse0x1a49ab0() {
   return (neuron0x1a22030()*-1.42174);
}

double NNfunction_NN_1_8::synapse0x1a49af0() {
   return (neuron0x1a22370()*-0.18057);
}

double NNfunction_NN_1_8::synapse0x1a49b30() {
   return (neuron0x1a226b0()*0.124209);
}

double NNfunction_NN_1_8::synapse0x1a49b70() {
   return (neuron0x1a229f0()*-0.0176636);
}

double NNfunction_NN_1_8::synapse0x1a49bb0() {
   return (neuron0x1a22d30()*-0.868234);
}

double NNfunction_NN_1_8::synapse0x1a49bf0() {
   return (neuron0x1a23070()*-0.16945);
}

double NNfunction_NN_1_8::synapse0x1a49c30() {
   return (neuron0x1a233b0()*0.0881843);
}

double NNfunction_NN_1_8::synapse0x1a49c70() {
   return (neuron0x1a236f0()*-0.0357734);
}

double NNfunction_NN_1_8::synapse0x1a49cb0() {
   return (neuron0x1a23a30()*0.526644);
}

double NNfunction_NN_1_8::synapse0x1a49cf0() {
   return (neuron0x1a23d70()*0.0467401);
}

double NNfunction_NN_1_8::synapse0x1a49d30() {
   return (neuron0x1a240b0()*-0.209639);
}

double NNfunction_NN_1_8::synapse0x1a49d70() {
   return (neuron0x1a243f0()*-0.10489);
}

double NNfunction_NN_1_8::synapse0x1a49db0() {
   return (neuron0x1a24730()*-0.0911896);
}

double NNfunction_NN_1_8::synapse0x1a49df0() {
   return (neuron0x1a24a70()*-0.153411);
}

double NNfunction_NN_1_8::synapse0x1a49880() {
   return (neuron0x1a24db0()*-0.346318);
}

double NNfunction_NN_1_8::synapse0x1a498c0() {
   return (neuron0x1a25310()*0.0964331);
}

double NNfunction_NN_1_8::synapse0x1a49f40() {
   return (neuron0x1a25530()*-0.303128);
}

double NNfunction_NN_1_8::synapse0x1a49f80() {
   return (neuron0x1a25870()*-0.0176069);
}

double NNfunction_NN_1_8::synapse0x1a49fc0() {
   return (neuron0x1a25bb0()*0.0445554);
}

double NNfunction_NN_1_8::synapse0x1a4a000() {
   return (neuron0x1a25ef0()*-0.276992);
}

double NNfunction_NN_1_8::synapse0x1a4a040() {
   return (neuron0x1a26230()*-0.0601812);
}

double NNfunction_NN_1_8::synapse0x1a4a080() {
   return (neuron0x1a26570()*1.75706);
}

double NNfunction_NN_1_8::synapse0x1a4a400() {
   return (neuron0x1a219b0()*0.400576);
}

double NNfunction_NN_1_8::synapse0x1a4a440() {
   return (neuron0x1a21cf0()*-0.124678);
}

double NNfunction_NN_1_8::synapse0x1a4a480() {
   return (neuron0x1a22030()*0.168143);
}

double NNfunction_NN_1_8::synapse0x1a4a4c0() {
   return (neuron0x1a22370()*-0.458179);
}

double NNfunction_NN_1_8::synapse0x1a4a500() {
   return (neuron0x1a226b0()*0.068119);
}

double NNfunction_NN_1_8::synapse0x1a4a540() {
   return (neuron0x1a229f0()*-0.025977);
}

double NNfunction_NN_1_8::synapse0x1a4a580() {
   return (neuron0x1a22d30()*-0.00816941);
}

double NNfunction_NN_1_8::synapse0x1a4a5c0() {
   return (neuron0x1a23070()*-0.0361805);
}

double NNfunction_NN_1_8::synapse0x1a4a600() {
   return (neuron0x1a233b0()*-0.144155);
}

double NNfunction_NN_1_8::synapse0x1a4a640() {
   return (neuron0x1a236f0()*0.0846762);
}

double NNfunction_NN_1_8::synapse0x1a4a680() {
   return (neuron0x1a23a30()*0.0143463);
}

double NNfunction_NN_1_8::synapse0x1a4a6c0() {
   return (neuron0x1a23d70()*0.0123455);
}

double NNfunction_NN_1_8::synapse0x1a4a700() {
   return (neuron0x1a240b0()*-0.00147717);
}

double NNfunction_NN_1_8::synapse0x1a4a740() {
   return (neuron0x1a243f0()*-0.0662731);
}

double NNfunction_NN_1_8::synapse0x1a4a780() {
   return (neuron0x1a24730()*-0.0212603);
}

double NNfunction_NN_1_8::synapse0x1a4a7c0() {
   return (neuron0x1a24a70()*0.0982405);
}

double NNfunction_NN_1_8::synapse0x1a4a250() {
   return (neuron0x1a24db0()*0.035304);
}

double NNfunction_NN_1_8::synapse0x1a4a290() {
   return (neuron0x1a25310()*0.0316384);
}

double NNfunction_NN_1_8::synapse0x1a4a910() {
   return (neuron0x1a25530()*0.0449616);
}

double NNfunction_NN_1_8::synapse0x1a4a950() {
   return (neuron0x1a25870()*0.0473205);
}

double NNfunction_NN_1_8::synapse0x1a4a990() {
   return (neuron0x1a25bb0()*-0.0244627);
}

double NNfunction_NN_1_8::synapse0x1a4a9d0() {
   return (neuron0x1a25ef0()*-0.0126105);
}

double NNfunction_NN_1_8::synapse0x1a4aa10() {
   return (neuron0x1a26230()*-0.0396719);
}

double NNfunction_NN_1_8::synapse0x1a4aa50() {
   return (neuron0x1a26570()*0.261733);
}

double NNfunction_NN_1_8::synapse0x1a4add0() {
   return (neuron0x1a219b0()*0.0278138);
}

double NNfunction_NN_1_8::synapse0x1a4ae10() {
   return (neuron0x1a21cf0()*-21.5434);
}

double NNfunction_NN_1_8::synapse0x1a4ae50() {
   return (neuron0x1a22030()*0.0567698);
}

double NNfunction_NN_1_8::synapse0x1a4ae90() {
   return (neuron0x1a22370()*0.00972574);
}

double NNfunction_NN_1_8::synapse0x1a4aed0() {
   return (neuron0x1a226b0()*0.0300393);
}

double NNfunction_NN_1_8::synapse0x1a4af10() {
   return (neuron0x1a229f0()*-0.016614);
}

double NNfunction_NN_1_8::synapse0x1a4af50() {
   return (neuron0x1a22d30()*0.00878624);
}

double NNfunction_NN_1_8::synapse0x1a4af90() {
   return (neuron0x1a23070()*0.0110356);
}

double NNfunction_NN_1_8::synapse0x1a4afd0() {
   return (neuron0x1a233b0()*0.0168141);
}

double NNfunction_NN_1_8::synapse0x1a4b010() {
   return (neuron0x1a236f0()*0.00926812);
}

double NNfunction_NN_1_8::synapse0x1a4b050() {
   return (neuron0x1a23a30()*0.00801854);
}

double NNfunction_NN_1_8::synapse0x1a4b090() {
   return (neuron0x1a23d70()*-0.246165);
}

double NNfunction_NN_1_8::synapse0x1a4b0d0() {
   return (neuron0x1a240b0()*-0.0528403);
}

double NNfunction_NN_1_8::synapse0x1a4b110() {
   return (neuron0x1a243f0()*-0.0123498);
}

double NNfunction_NN_1_8::synapse0x1a4b150() {
   return (neuron0x1a24730()*0.0158396);
}

double NNfunction_NN_1_8::synapse0x1a4b190() {
   return (neuron0x1a24a70()*-0.02066);
}

double NNfunction_NN_1_8::synapse0x1a4ac20() {
   return (neuron0x1a24db0()*-0.00902003);
}

double NNfunction_NN_1_8::synapse0x1a4ac60() {
   return (neuron0x1a25310()*-0.0255156);
}

double NNfunction_NN_1_8::synapse0x1a4b2e0() {
   return (neuron0x1a25530()*0.0113403);
}

double NNfunction_NN_1_8::synapse0x1a4b320() {
   return (neuron0x1a25870()*0.0237502);
}

double NNfunction_NN_1_8::synapse0x1a4b360() {
   return (neuron0x1a25bb0()*-0.0298103);
}

double NNfunction_NN_1_8::synapse0x1a4b3a0() {
   return (neuron0x1a25ef0()*0.00860598);
}

double NNfunction_NN_1_8::synapse0x1a4b3e0() {
   return (neuron0x1a26230()*-0.0215403);
}

double NNfunction_NN_1_8::synapse0x1a4b420() {
   return (neuron0x1a26570()*-0.128702);
}

double NNfunction_NN_1_8::synapse0x1a279c0() {
   return (neuron0x1a26a10()*0.181042);
}

double NNfunction_NN_1_8::synapse0x1a27a00() {
   return (neuron0x1a27320()*0.789386);
}

double NNfunction_NN_1_8::synapse0x1a28ed0() {
   return (neuron0x1a27e00()*1.55259);
}

double NNfunction_NN_1_8::synapse0x1a28f10() {
   return (neuron0x17e1690()*3.72485);
}

double NNfunction_NN_1_8::synapse0x1a298a0() {
   return (neuron0x1a28c20()*0.151413);
}

double NNfunction_NN_1_8::synapse0x1a298e0() {
   return (neuron0x1a295f0()*-0.378273);
}

double NNfunction_NN_1_8::synapse0x1a2a670() {
   return (neuron0x1a2a3c0()*1.32971);
}

double NNfunction_NN_1_8::synapse0x1a2a6b0() {
   return (neuron0x1a2ad90()*-1.11874);
}

double NNfunction_NN_1_8::synapse0x1a2b040() {
   return (neuron0x1a2b760()*0.138059);
}

double NNfunction_NN_1_8::synapse0x1a2b080() {
   return (neuron0x1a2c240()*0.108133);
}

double NNfunction_NN_1_8::synapse0x1a2ba10() {
   return (neuron0x1a2cc10()*0.243823);
}

double NNfunction_NN_1_8::synapse0x1a2ba50() {
   return (neuron0x1a29cf0()*-1.39398);
}

double NNfunction_NN_1_8::synapse0x1a2c4f0() {
   return (neuron0x1a2e7c0()*0.273674);
}

double NNfunction_NN_1_8::synapse0x1a2c530() {
   return (neuron0x1a2f190()*6.06569);
}

double NNfunction_NN_1_8::synapse0x1a2cec0() {
   return (neuron0x1a2fb60()*-1.10311);
}

double NNfunction_NN_1_8::synapse0x1a2cf00() {
   return (neuron0x1a30530()*-0.791304);
}

double NNfunction_NN_1_8::synapse0x1a29fa0() {
   return (neuron0x1a32340()*-1.24972);
}

double NNfunction_NN_1_8::synapse0x1a29fe0() {
   return (neuron0x1a32620()*-0.351777);
}

double NNfunction_NN_1_8::synapse0x1a2ea70() {
   return (neuron0x1a32ff0()*-0.712426);
}

double NNfunction_NN_1_8::synapse0x1a2eab0() {
   return (neuron0x1a339c0()*1.85505);
}

double NNfunction_NN_1_8::synapse0x1a2f440() {
   return (neuron0x1a34390()*-0.457931);
}

double NNfunction_NN_1_8::synapse0x1a2f480() {
   return (neuron0x1a34d60()*-0.433273);
}

double NNfunction_NN_1_8::synapse0x1a2fe10() {
   return (neuron0x1a2d8b0()*-0.238744);
}

double NNfunction_NN_1_8::synapse0x1a2fe50() {
   return (neuron0x1a2e280()*0.903308);
}

double NNfunction_NN_1_8::synapse0x1a307e0() {
   return (neuron0x1a37af0()*0.143333);
}

double NNfunction_NN_1_8::synapse0x1a30820() {
   return (neuron0x1a384c0()*0.615212);
}

double NNfunction_NN_1_8::synapse0x1a24950() {
   return (neuron0x1a38e90()*-0.892574);
}

double NNfunction_NN_1_8::synapse0x1a24990() {
   return (neuron0x1a39860()*0.543961);
}

double NNfunction_NN_1_8::synapse0x1a328d0() {
   return (neuron0x1a3a230()*-0.724367);
}

double NNfunction_NN_1_8::synapse0x1a32910() {
   return (neuron0x1a3ac00()*-0.662128);
}

double NNfunction_NN_1_8::synapse0x1a332a0() {
   return (neuron0x1a3b5d0()*-0.103073);
}

double NNfunction_NN_1_8::synapse0x1a332e0() {
   return (neuron0x1a3bfa0()*1.43298);
}

double NNfunction_NN_1_8::synapse0x1a33c70() {
   return (neuron0x1a32030()*2.61988);
}

double NNfunction_NN_1_8::synapse0x1a33cb0() {
   return (neuron0x1a3eb80()*-0.720149);
}

double NNfunction_NN_1_8::synapse0x1a34640() {
   return (neuron0x1a3f550()*-0.71544);
}

double NNfunction_NN_1_8::synapse0x1a34680() {
   return (neuron0x1a3ff20()*0.693751);
}

double NNfunction_NN_1_8::synapse0x1a35010() {
   return (neuron0x1a408f0()*-0.989998);
}

double NNfunction_NN_1_8::synapse0x1a35050() {
   return (neuron0x1a412c0()*-0.209499);
}

double NNfunction_NN_1_8::synapse0x1a2db60() {
   return (neuron0x1a41c90()*-0.353137);
}

double NNfunction_NN_1_8::synapse0x1a2dba0() {
   return (neuron0x1a42660()*-0.628454);
}

double NNfunction_NN_1_8::synapse0x1a37410() {
   return (neuron0x1a43030()*-0.894594);
}

double NNfunction_NN_1_8::synapse0x1a37450() {
   return (neuron0x1a43c10()*0.161029);
}

double NNfunction_NN_1_8::synapse0x1a37da0() {
   return (neuron0x1a445e0()*0.668915);
}

double NNfunction_NN_1_8::synapse0x1a37de0() {
   return (neuron0x1a35460()*-2.28134);
}

double NNfunction_NN_1_8::synapse0x1a38770() {
   return (neuron0x1a35e30()*-1.40221);
}

double NNfunction_NN_1_8::synapse0x1a387b0() {
   return (neuron0x1a36800()*-2.78738);
}

double NNfunction_NN_1_8::synapse0x1a39140() {
   return (neuron0x1a48e40()*1.02621);
}

double NNfunction_NN_1_8::synapse0x1a39180() {
   return (neuron0x1a496f0()*-0.845708);
}

double NNfunction_NN_1_8::synapse0x1a39b10() {
   return (neuron0x1a4a0c0()*1.55511);
}

double NNfunction_NN_1_8::synapse0x1a39b50() {
   return (neuron0x1a4aa90()*1.68278);
}

double NNfunction_NN_1_8::synapse0x1a3c250() {
   return (neuron0x1a26a10()*0.485842);
}

double NNfunction_NN_1_8::synapse0x1a3c290() {
   return (neuron0x1a27320()*0.00776624);
}

double NNfunction_NN_1_8::synapse0x1a31810() {
   return (neuron0x1a27e00()*0.879267);
}

double NNfunction_NN_1_8::synapse0x1a31850() {
   return (neuron0x17e1690()*0.286705);
}

double NNfunction_NN_1_8::synapse0x1a3ee30() {
   return (neuron0x1a28c20()*-0.159768);
}

double NNfunction_NN_1_8::synapse0x1a3ee70() {
   return (neuron0x1a295f0()*-0.426605);
}

double NNfunction_NN_1_8::synapse0x1a3f800() {
   return (neuron0x1a2a3c0()*0.677444);
}

double NNfunction_NN_1_8::synapse0x1a3f840() {
   return (neuron0x1a2ad90()*0.887948);
}

double NNfunction_NN_1_8::synapse0x1a401d0() {
   return (neuron0x1a2b760()*0.0786407);
}

double NNfunction_NN_1_8::synapse0x1a40210() {
   return (neuron0x1a2c240()*0.0590297);
}

double NNfunction_NN_1_8::synapse0x1a40ba0() {
   return (neuron0x1a2cc10()*-0.128265);
}

double NNfunction_NN_1_8::synapse0x1a40be0() {
   return (neuron0x1a29cf0()*0.608468);
}

double NNfunction_NN_1_8::synapse0x1a41570() {
   return (neuron0x1a2e7c0()*0.582455);
}

double NNfunction_NN_1_8::synapse0x1a415b0() {
   return (neuron0x1a2f190()*-0.0668698);
}

double NNfunction_NN_1_8::synapse0x1a41f40() {
   return (neuron0x1a2fb60()*0.409144);
}

double NNfunction_NN_1_8::synapse0x1a41f80() {
   return (neuron0x1a30530()*0.953096);
}

double NNfunction_NN_1_8::synapse0x1a42910() {
   return (neuron0x1a32340()*0.709904);
}

double NNfunction_NN_1_8::synapse0x1a42950() {
   return (neuron0x1a32620()*0.398568);
}

double NNfunction_NN_1_8::synapse0x1a432e0() {
   return (neuron0x1a32ff0()*0.385092);
}

double NNfunction_NN_1_8::synapse0x1a43320() {
   return (neuron0x1a339c0()*0.305111);
}

double NNfunction_NN_1_8::synapse0x1a43ec0() {
   return (neuron0x1a34390()*-0.425245);
}

double NNfunction_NN_1_8::synapse0x1a43f00() {
   return (neuron0x1a34d60()*0.404833);
}

double NNfunction_NN_1_8::synapse0x1a44890() {
   return (neuron0x1a2d8b0()*0.327853);
}

double NNfunction_NN_1_8::synapse0x1a448d0() {
   return (neuron0x1a2e280()*-0.554009);
}

double NNfunction_NN_1_8::synapse0x1a35710() {
   return (neuron0x1a37af0()*0.766515);
}

double NNfunction_NN_1_8::synapse0x1a35750() {
   return (neuron0x1a384c0()*0.492512);
}

double NNfunction_NN_1_8::synapse0x1a360e0() {
   return (neuron0x1a38e90()*0.629024);
}

double NNfunction_NN_1_8::synapse0x1a36120() {
   return (neuron0x1a39860()*0.313062);
}

double NNfunction_NN_1_8::synapse0x1a36ab0() {
   return (neuron0x1a3a230()*0.434353);
}

double NNfunction_NN_1_8::synapse0x1a36af0() {
   return (neuron0x1a3ac00()*0.0647088);
}

double NNfunction_NN_1_8::synapse0x1a48fd0() {
   return (neuron0x1a3b5d0()*0.26831);
}

double NNfunction_NN_1_8::synapse0x1a49010() {
   return (neuron0x1a3bfa0()*-0.150133);
}

double NNfunction_NN_1_8::synapse0x1a499a0() {
   return (neuron0x1a32030()*-0.154219);
}

double NNfunction_NN_1_8::synapse0x1a499e0() {
   return (neuron0x1a3eb80()*0.338717);
}

double NNfunction_NN_1_8::synapse0x1a4a370() {
   return (neuron0x1a3f550()*0.690443);
}

double NNfunction_NN_1_8::synapse0x1a4a3b0() {
   return (neuron0x1a3ff20()*-0.334149);
}

double NNfunction_NN_1_8::synapse0x1a4ad40() {
   return (neuron0x1a408f0()*1.04459);
}

double NNfunction_NN_1_8::synapse0x1a4ad80() {
   return (neuron0x1a412c0()*0.594681);
}

double NNfunction_NN_1_8::synapse0x1a26c30() {
   return (neuron0x1a41c90()*0.154972);
}

double NNfunction_NN_1_8::synapse0x1a26c70() {
   return (neuron0x1a42660()*-0.197579);
}

double NNfunction_NN_1_8::synapse0x1a3a4e0() {
   return (neuron0x1a43030()*0.483812);
}

double NNfunction_NN_1_8::synapse0x1a3a520() {
   return (neuron0x1a43c10()*-0.0815332);
}

double NNfunction_NN_1_8::synapse0x1a4b460() {
   return (neuron0x1a445e0()*0.646017);
}

double NNfunction_NN_1_8::synapse0x1a4b4a0() {
   return (neuron0x1a35460()*0.867368);
}

double NNfunction_NN_1_8::synapse0x1a4b4e0() {
   return (neuron0x1a35e30()*1.13384);
}

double NNfunction_NN_1_8::synapse0x1a4b520() {
   return (neuron0x1a36800()*-0.132926);
}

double NNfunction_NN_1_8::synapse0x1a523d0() {
   return (neuron0x1a48e40()*-0.013183);
}

double NNfunction_NN_1_8::synapse0x1a52410() {
   return (neuron0x1a496f0()*0.268332);
}

double NNfunction_NN_1_8::synapse0x1a52450() {
   return (neuron0x1a4a0c0()*0.222729);
}

double NNfunction_NN_1_8::synapse0x1a52490() {
   return (neuron0x1a4aa90()*0.510504);
}

double NNfunction_NN_1_8::synapse0x1a52810() {
   return (neuron0x1a26a10()*0.32555);
}

double NNfunction_NN_1_8::synapse0x1a52850() {
   return (neuron0x1a27320()*2.54637);
}

double NNfunction_NN_1_8::synapse0x1a52890() {
   return (neuron0x1a27e00()*-0.754732);
}

double NNfunction_NN_1_8::synapse0x1a528d0() {
   return (neuron0x17e1690()*0.276204);
}

double NNfunction_NN_1_8::synapse0x1a52910() {
   return (neuron0x1a28c20()*0.0293171);
}

double NNfunction_NN_1_8::synapse0x1a52950() {
   return (neuron0x1a295f0()*2.25729);
}

double NNfunction_NN_1_8::synapse0x1a52990() {
   return (neuron0x1a2a3c0()*3.56364);
}

double NNfunction_NN_1_8::synapse0x1a529d0() {
   return (neuron0x1a2ad90()*-1.65488);
}

double NNfunction_NN_1_8::synapse0x1a52a10() {
   return (neuron0x1a2b760()*-0.227317);
}

double NNfunction_NN_1_8::synapse0x1a52a50() {
   return (neuron0x1a2c240()*0.694342);
}

double NNfunction_NN_1_8::synapse0x1a52a90() {
   return (neuron0x1a2cc10()*0.0972118);
}

double NNfunction_NN_1_8::synapse0x1a52ad0() {
   return (neuron0x1a29cf0()*-1.62152);
}

double NNfunction_NN_1_8::synapse0x1a52b10() {
   return (neuron0x1a2e7c0()*-0.837194);
}

double NNfunction_NN_1_8::synapse0x1a52b50() {
   return (neuron0x1a2f190()*1.53516);
}

double NNfunction_NN_1_8::synapse0x1a52b90() {
   return (neuron0x1a2fb60()*-2.34385);
}

double NNfunction_NN_1_8::synapse0x1a52bd0() {
   return (neuron0x1a30530()*-1.86328);
}

double NNfunction_NN_1_8::synapse0x1a52660() {
   return (neuron0x1a32340()*-0.622405);
}

double NNfunction_NN_1_8::synapse0x1a526a0() {
   return (neuron0x1a32620()*-1.30797);
}

double NNfunction_NN_1_8::synapse0x1a52d20() {
   return (neuron0x1a32ff0()*2.03719);
}

double NNfunction_NN_1_8::synapse0x1a52d60() {
   return (neuron0x1a339c0()*-1.0539);
}

double NNfunction_NN_1_8::synapse0x1a52da0() {
   return (neuron0x1a34390()*-1.22396);
}

double NNfunction_NN_1_8::synapse0x1a52de0() {
   return (neuron0x1a34d60()*0.120228);
}

double NNfunction_NN_1_8::synapse0x1a52e20() {
   return (neuron0x1a2d8b0()*0.606269);
}

double NNfunction_NN_1_8::synapse0x1a52e60() {
   return (neuron0x1a2e280()*2.62928);
}

double NNfunction_NN_1_8::synapse0x1a52ea0() {
   return (neuron0x1a37af0()*0.333015);
}

double NNfunction_NN_1_8::synapse0x1a52ee0() {
   return (neuron0x1a384c0()*0.728355);
}

double NNfunction_NN_1_8::synapse0x1a52f20() {
   return (neuron0x1a38e90()*-0.161609);
}

double NNfunction_NN_1_8::synapse0x1a52f60() {
   return (neuron0x1a39860()*2.67053);
}

double NNfunction_NN_1_8::synapse0x1a52fa0() {
   return (neuron0x1a3a230()*-0.788039);
}

double NNfunction_NN_1_8::synapse0x1a52fe0() {
   return (neuron0x1a3ac00()*2.08295);
}

double NNfunction_NN_1_8::synapse0x1a53020() {
   return (neuron0x1a3b5d0()*-1.67368);
}

double NNfunction_NN_1_8::synapse0x1a53060() {
   return (neuron0x1a3bfa0()*0.753063);
}

double NNfunction_NN_1_8::synapse0x1a52c10() {
   return (neuron0x1a32030()*1.56692);
}

double NNfunction_NN_1_8::synapse0x1a52c50() {
   return (neuron0x1a3eb80()*0.0972013);
}

double NNfunction_NN_1_8::synapse0x1a52c90() {
   return (neuron0x1a3f550()*0.16074);
}

double NNfunction_NN_1_8::synapse0x1a52cd0() {
   return (neuron0x1a3ff20()*2.46096);
}

double NNfunction_NN_1_8::synapse0x1a532b0() {
   return (neuron0x1a408f0()*0.0846992);
}

double NNfunction_NN_1_8::synapse0x1a532f0() {
   return (neuron0x1a412c0()*-0.642049);
}

double NNfunction_NN_1_8::synapse0x1a53330() {
   return (neuron0x1a41c90()*-0.248565);
}

double NNfunction_NN_1_8::synapse0x1a53370() {
   return (neuron0x1a42660()*-1.10098);
}

double NNfunction_NN_1_8::synapse0x1a533b0() {
   return (neuron0x1a43030()*-0.598138);
}

double NNfunction_NN_1_8::synapse0x1a533f0() {
   return (neuron0x1a43c10()*-0.779006);
}

double NNfunction_NN_1_8::synapse0x1a53430() {
   return (neuron0x1a445e0()*-0.448334);
}

double NNfunction_NN_1_8::synapse0x1a53470() {
   return (neuron0x1a35460()*1.01631);
}

double NNfunction_NN_1_8::synapse0x1a534b0() {
   return (neuron0x1a35e30()*-1.78233);
}

double NNfunction_NN_1_8::synapse0x1a534f0() {
   return (neuron0x1a36800()*1.34654);
}

double NNfunction_NN_1_8::synapse0x1a53530() {
   return (neuron0x1a48e40()*3.14262);
}

double NNfunction_NN_1_8::synapse0x1a53570() {
   return (neuron0x1a496f0()*-0.650289);
}

double NNfunction_NN_1_8::synapse0x1a535b0() {
   return (neuron0x1a4a0c0()*0.603257);
}

double NNfunction_NN_1_8::synapse0x1a535f0() {
   return (neuron0x1a4aa90()*-1.10854);
}

double NNfunction_NN_1_8::synapse0x1a53970() {
   return (neuron0x1a26a10()*0.161655);
}

double NNfunction_NN_1_8::synapse0x1a539b0() {
   return (neuron0x1a27320()*0.26201);
}

double NNfunction_NN_1_8::synapse0x1a539f0() {
   return (neuron0x1a27e00()*-2.53514);
}

double NNfunction_NN_1_8::synapse0x1a53a30() {
   return (neuron0x17e1690()*1.00604);
}

double NNfunction_NN_1_8::synapse0x1a53a70() {
   return (neuron0x1a28c20()*0.1769);
}

double NNfunction_NN_1_8::synapse0x1a53ab0() {
   return (neuron0x1a295f0()*-0.353225);
}

double NNfunction_NN_1_8::synapse0x1a53af0() {
   return (neuron0x1a2a3c0()*-0.40484);
}

double NNfunction_NN_1_8::synapse0x1a53b30() {
   return (neuron0x1a2ad90()*-0.442309);
}

double NNfunction_NN_1_8::synapse0x1a53b70() {
   return (neuron0x1a2b760()*0.651263);
}

double NNfunction_NN_1_8::synapse0x1a53bb0() {
   return (neuron0x1a2c240()*0.228302);
}

double NNfunction_NN_1_8::synapse0x1a53bf0() {
   return (neuron0x1a2cc10()*0.338778);
}

double NNfunction_NN_1_8::synapse0x1a53c30() {
   return (neuron0x1a29cf0()*0.0052424);
}

double NNfunction_NN_1_8::synapse0x1a53c70() {
   return (neuron0x1a2e7c0()*0.619986);
}

double NNfunction_NN_1_8::synapse0x1a53cb0() {
   return (neuron0x1a2f190()*4.34989);
}

double NNfunction_NN_1_8::synapse0x1a53cf0() {
   return (neuron0x1a2fb60()*-0.881273);
}

double NNfunction_NN_1_8::synapse0x1a53d30() {
   return (neuron0x1a30530()*-0.00892317);
}

double NNfunction_NN_1_8::synapse0x1a537c0() {
   return (neuron0x1a32340()*0.45986);
}

double NNfunction_NN_1_8::synapse0x1a53800() {
   return (neuron0x1a32620()*0.196047);
}

double NNfunction_NN_1_8::synapse0x1a53e80() {
   return (neuron0x1a32ff0()*1.09035);
}

double NNfunction_NN_1_8::synapse0x1a53ec0() {
   return (neuron0x1a339c0()*0.448076);
}

double NNfunction_NN_1_8::synapse0x1a53f00() {
   return (neuron0x1a34390()*0.392771);
}

double NNfunction_NN_1_8::synapse0x1a53f40() {
   return (neuron0x1a34d60()*0.345974);
}

double NNfunction_NN_1_8::synapse0x1a53f80() {
   return (neuron0x1a2d8b0()*-0.099471);
}

double NNfunction_NN_1_8::synapse0x1a53fc0() {
   return (neuron0x1a2e280()*2.09645);
}

double NNfunction_NN_1_8::synapse0x1a54000() {
   return (neuron0x1a37af0()*0.0503976);
}

double NNfunction_NN_1_8::synapse0x1a54040() {
   return (neuron0x1a384c0()*0.568739);
}

double NNfunction_NN_1_8::synapse0x1a54080() {
   return (neuron0x1a38e90()*-0.581165);
}

double NNfunction_NN_1_8::synapse0x1a540c0() {
   return (neuron0x1a39860()*-0.423775);
}

double NNfunction_NN_1_8::synapse0x1a54100() {
   return (neuron0x1a3a230()*0.238341);
}

double NNfunction_NN_1_8::synapse0x1a54140() {
   return (neuron0x1a3ac00()*-1.11644);
}

double NNfunction_NN_1_8::synapse0x1a54180() {
   return (neuron0x1a3b5d0()*1.34399);
}

double NNfunction_NN_1_8::synapse0x1a541c0() {
   return (neuron0x1a3bfa0()*-2.14565);
}

double NNfunction_NN_1_8::synapse0x1a53d70() {
   return (neuron0x1a32030()*3.45854);
}

double NNfunction_NN_1_8::synapse0x1a53db0() {
   return (neuron0x1a3eb80()*-0.40449);
}

double NNfunction_NN_1_8::synapse0x1a53df0() {
   return (neuron0x1a3f550()*-0.466524);
}

double NNfunction_NN_1_8::synapse0x1a53e30() {
   return (neuron0x1a3ff20()*0.162014);
}

double NNfunction_NN_1_8::synapse0x1a54410() {
   return (neuron0x1a408f0()*-0.351086);
}

double NNfunction_NN_1_8::synapse0x1a54450() {
   return (neuron0x1a412c0()*-1.1914);
}

double NNfunction_NN_1_8::synapse0x1a54490() {
   return (neuron0x1a41c90()*-0.551587);
}

double NNfunction_NN_1_8::synapse0x1a544d0() {
   return (neuron0x1a42660()*-0.204646);
}

double NNfunction_NN_1_8::synapse0x1a54510() {
   return (neuron0x1a43030()*-0.418033);
}

double NNfunction_NN_1_8::synapse0x1a54550() {
   return (neuron0x1a43c10()*-0.163564);
}

double NNfunction_NN_1_8::synapse0x1a54590() {
   return (neuron0x1a445e0()*0.58413);
}

double NNfunction_NN_1_8::synapse0x1a545d0() {
   return (neuron0x1a35460()*-1.8813);
}

double NNfunction_NN_1_8::synapse0x1a54610() {
   return (neuron0x1a35e30()*-0.826139);
}

double NNfunction_NN_1_8::synapse0x1a54650() {
   return (neuron0x1a36800()*-1.20206);
}

double NNfunction_NN_1_8::synapse0x1a54690() {
   return (neuron0x1a48e40()*-0.428155);
}

double NNfunction_NN_1_8::synapse0x1a546d0() {
   return (neuron0x1a496f0()*-0.450919);
}

double NNfunction_NN_1_8::synapse0x1a54710() {
   return (neuron0x1a4a0c0()*0.987289);
}

double NNfunction_NN_1_8::synapse0x1a54750() {
   return (neuron0x1a4aa90()*-2.30243);
}

double NNfunction_NN_1_8::synapse0x1a54ad0() {
   return (neuron0x1a26a10()*0.182006);
}

double NNfunction_NN_1_8::synapse0x1a54b10() {
   return (neuron0x1a27320()*0.220619);
}

double NNfunction_NN_1_8::synapse0x1a54b50() {
   return (neuron0x1a27e00()*-2.8087);
}

double NNfunction_NN_1_8::synapse0x1a54b90() {
   return (neuron0x17e1690()*1.70092);
}

double NNfunction_NN_1_8::synapse0x1a54bd0() {
   return (neuron0x1a28c20()*0.176115);
}

double NNfunction_NN_1_8::synapse0x1a54c10() {
   return (neuron0x1a295f0()*1.27184);
}

double NNfunction_NN_1_8::synapse0x1a54c50() {
   return (neuron0x1a2a3c0()*1.0049);
}

double NNfunction_NN_1_8::synapse0x1a54c90() {
   return (neuron0x1a2ad90()*-0.531848);
}

double NNfunction_NN_1_8::synapse0x1a54cd0() {
   return (neuron0x1a2b760()*0.433331);
}

double NNfunction_NN_1_8::synapse0x1a54d10() {
   return (neuron0x1a2c240()*0.809881);
}

double NNfunction_NN_1_8::synapse0x1a54d50() {
   return (neuron0x1a2cc10()*0.106059);
}

double NNfunction_NN_1_8::synapse0x1a54d90() {
   return (neuron0x1a29cf0()*-0.283948);
}

double NNfunction_NN_1_8::synapse0x1a54dd0() {
   return (neuron0x1a2e7c0()*-0.171547);
}

double NNfunction_NN_1_8::synapse0x1a54e10() {
   return (neuron0x1a2f190()*0.57828);
}

double NNfunction_NN_1_8::synapse0x1a54e50() {
   return (neuron0x1a2fb60()*-1.18692);
}

double NNfunction_NN_1_8::synapse0x1a54e90() {
   return (neuron0x1a30530()*-0.61554);
}

double NNfunction_NN_1_8::synapse0x1a54920() {
   return (neuron0x1a32340()*-0.438041);
}

double NNfunction_NN_1_8::synapse0x1a54960() {
   return (neuron0x1a32620()*-0.553112);
}

double NNfunction_NN_1_8::synapse0x1a54fe0() {
   return (neuron0x1a32ff0()*1.65004);
}

double NNfunction_NN_1_8::synapse0x1a55020() {
   return (neuron0x1a339c0()*-0.300112);
}

double NNfunction_NN_1_8::synapse0x1a55060() {
   return (neuron0x1a34390()*-0.231685);
}

double NNfunction_NN_1_8::synapse0x1a550a0() {
   return (neuron0x1a34d60()*-0.208514);
}

double NNfunction_NN_1_8::synapse0x1a550e0() {
   return (neuron0x1a2d8b0()*0.656026);
}

double NNfunction_NN_1_8::synapse0x1a55120() {
   return (neuron0x1a2e280()*0.189365);
}

double NNfunction_NN_1_8::synapse0x1a55160() {
   return (neuron0x1a37af0()*0.375108);
}

double NNfunction_NN_1_8::synapse0x1a551a0() {
   return (neuron0x1a384c0()*0.731501);
}

double NNfunction_NN_1_8::synapse0x1a551e0() {
   return (neuron0x1a38e90()*-0.298981);
}

double NNfunction_NN_1_8::synapse0x1a55220() {
   return (neuron0x1a39860()*1.14113);
}

double NNfunction_NN_1_8::synapse0x1a55260() {
   return (neuron0x1a3a230()*-0.133871);
}

double NNfunction_NN_1_8::synapse0x1a552a0() {
   return (neuron0x1a3ac00()*0.208993);
}

double NNfunction_NN_1_8::synapse0x1a552e0() {
   return (neuron0x1a3b5d0()*0.754788);
}

double NNfunction_NN_1_8::synapse0x1a55320() {
   return (neuron0x1a3bfa0()*2.11318);
}

double NNfunction_NN_1_8::synapse0x1a54ed0() {
   return (neuron0x1a32030()*-0.574107);
}

double NNfunction_NN_1_8::synapse0x1a54f10() {
   return (neuron0x1a3eb80()*0.334967);
}

double NNfunction_NN_1_8::synapse0x1a54f50() {
   return (neuron0x1a3f550()*-0.00668416);
}

double NNfunction_NN_1_8::synapse0x1a54f90() {
   return (neuron0x1a3ff20()*-0.220528);
}

double NNfunction_NN_1_8::synapse0x1a55570() {
   return (neuron0x1a408f0()*0.0781993);
}

double NNfunction_NN_1_8::synapse0x1a555b0() {
   return (neuron0x1a412c0()*-0.976904);
}

double NNfunction_NN_1_8::synapse0x1a555f0() {
   return (neuron0x1a41c90()*-0.715704);
}

double NNfunction_NN_1_8::synapse0x1a55630() {
   return (neuron0x1a42660()*-0.531427);
}

double NNfunction_NN_1_8::synapse0x1a55670() {
   return (neuron0x1a43030()*0.385981);
}

double NNfunction_NN_1_8::synapse0x1a556b0() {
   return (neuron0x1a43c10()*0.78487);
}

double NNfunction_NN_1_8::synapse0x1a556f0() {
   return (neuron0x1a445e0()*-0.0862125);
}

double NNfunction_NN_1_8::synapse0x1a55730() {
   return (neuron0x1a35460()*-1.09797);
}

double NNfunction_NN_1_8::synapse0x1a55770() {
   return (neuron0x1a35e30()*-0.157981);
}

double NNfunction_NN_1_8::synapse0x1a557b0() {
   return (neuron0x1a36800()*-0.0217728);
}

double NNfunction_NN_1_8::synapse0x1a557f0() {
   return (neuron0x1a48e40()*0.912307);
}

double NNfunction_NN_1_8::synapse0x1a55830() {
   return (neuron0x1a496f0()*0.216202);
}

double NNfunction_NN_1_8::synapse0x1a55870() {
   return (neuron0x1a4a0c0()*-0.177268);
}

double NNfunction_NN_1_8::synapse0x1a558b0() {
   return (neuron0x1a4aa90()*-2.81865);
}

double NNfunction_NN_1_8::synapse0x1a269d0() {
   return (neuron0x1a51c90()*4.83326);
}

double NNfunction_NN_1_8::synapse0x1a55b10() {
   return (neuron0x1a52030()*-1.12724);
}

double NNfunction_NN_1_8::synapse0x1a55b50() {
   return (neuron0x1a524d0()*-3.73871);
}

double NNfunction_NN_1_8::synapse0x1a55b90() {
   return (neuron0x1a53630()*-6.74202);
}

double NNfunction_NN_1_8::synapse0x1a55bd0() {
   return (neuron0x1a54790()*5.17117);
}

