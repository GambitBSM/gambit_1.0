#include "NNfunction_NG_4.h"
#include <cmath>

double NNfunction_NG_4::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.2017)/15.1637;
   input1 = (in1 - -95.4645)/776.793;
   input2 = (in2 - 532.854)/496.232;
   input3 = (in3 - -23.072)/690.829;
   input4 = (in4 - 1015.64)/919.839;
   input5 = (in5 - 886.107)/942.606;
   input6 = (in6 - 898.739)/945.791;
   input7 = (in7 - 904.406)/919.66;
   input8 = (in8 - 904.61)/965.376;
   input9 = (in9 - 890.183)/948.859;
   input10 = (in10 - 947.967)/935.826;
   input11 = (in11 - 588.766)/731.361;
   input12 = (in12 - 691.827)/830.3;
   input13 = (in13 - 480.199)/491.241;
   input14 = (in14 - 664.631)/762.376;
   input15 = (in15 - 716.831)/798.275;
   input16 = (in16 - 545.176)/565.272;
   input17 = (in17 - 732.601)/872.551;
   input18 = (in18 - 736.498)/877.159;
   input19 = (in19 - 759.348)/836.657;
   input20 = (in20 - -6.48876)/488.606;
   input21 = (in21 - -8.23454)/1131.65;
   input22 = (in22 - -0.270884)/1196.33;
   input23 = (in23 - -110.118)/316.472;
   switch(index) {
     case 0:
         return neuron0x1d66a30();
     default:
         return 0.;
   }
}

double NNfunction_NG_4::Value(int index, double* input) {
   input0 = (input[0] - 23.2017)/15.1637;
   input1 = (input[1] - -95.4645)/776.793;
   input2 = (input[2] - 532.854)/496.232;
   input3 = (input[3] - -23.072)/690.829;
   input4 = (input[4] - 1015.64)/919.839;
   input5 = (input[5] - 886.107)/942.606;
   input6 = (input[6] - 898.739)/945.791;
   input7 = (input[7] - 904.406)/919.66;
   input8 = (input[8] - 904.61)/965.376;
   input9 = (input[9] - 890.183)/948.859;
   input10 = (input[10] - 947.967)/935.826;
   input11 = (input[11] - 588.766)/731.361;
   input12 = (input[12] - 691.827)/830.3;
   input13 = (input[13] - 480.199)/491.241;
   input14 = (input[14] - 664.631)/762.376;
   input15 = (input[15] - 716.831)/798.275;
   input16 = (input[16] - 545.176)/565.272;
   input17 = (input[17] - 732.601)/872.551;
   input18 = (input[18] - 736.498)/877.159;
   input19 = (input[19] - 759.348)/836.657;
   input20 = (input[20] - -6.48876)/488.606;
   input21 = (input[21] - -8.23454)/1131.65;
   input22 = (input[22] - -0.270884)/1196.33;
   input23 = (input[23] - -110.118)/316.472;
   switch(index) {
     case 0:
         return neuron0x1d66a30();
     default:
         return 0.;
   }
}

double NNfunction_NG_4::neuron0x1d32af0() {
   return input0;
}

double NNfunction_NG_4::neuron0x1d32e30() {
   return input1;
}

double NNfunction_NG_4::neuron0x1d33170() {
   return input2;
}

double NNfunction_NG_4::neuron0x1d334b0() {
   return input3;
}

double NNfunction_NG_4::neuron0x1d337f0() {
   return input4;
}

double NNfunction_NG_4::neuron0x1d33b30() {
   return input5;
}

double NNfunction_NG_4::neuron0x1d33e70() {
   return input6;
}

double NNfunction_NG_4::neuron0x1d341b0() {
   return input7;
}

double NNfunction_NG_4::neuron0x1d344f0() {
   return input8;
}

double NNfunction_NG_4::neuron0x1d34830() {
   return input9;
}

double NNfunction_NG_4::neuron0x1d34b70() {
   return input10;
}

double NNfunction_NG_4::neuron0x1d34eb0() {
   return input11;
}

double NNfunction_NG_4::neuron0x1d351f0() {
   return input12;
}

double NNfunction_NG_4::neuron0x1d35530() {
   return input13;
}

double NNfunction_NG_4::neuron0x1d35870() {
   return input14;
}

double NNfunction_NG_4::neuron0x1d35bb0() {
   return input15;
}

double NNfunction_NG_4::neuron0x1d35ef0() {
   return input16;
}

double NNfunction_NG_4::neuron0x1d36450() {
   return input17;
}

double NNfunction_NG_4::neuron0x1d36670() {
   return input18;
}

double NNfunction_NG_4::neuron0x1d369b0() {
   return input19;
}

double NNfunction_NG_4::neuron0x1d36cf0() {
   return input20;
}

double NNfunction_NG_4::neuron0x1d37030() {
   return input21;
}

double NNfunction_NG_4::neuron0x1d37370() {
   return input22;
}

double NNfunction_NG_4::neuron0x1d376b0() {
   return input23;
}

double NNfunction_NG_4::input0x1d37b50() {
   double input = 1.04144;
   input += synapse0x1af2960();
   input += synapse0x1d329b0();
   input += synapse0x1d329f0();
   input += synapse0x1d37e00();
   input += synapse0x1d37e40();
   input += synapse0x1d37e80();
   input += synapse0x1d37ec0();
   input += synapse0x1d37f00();
   input += synapse0x1d37f40();
   input += synapse0x1d37f80();
   input += synapse0x1d37fc0();
   input += synapse0x1d38000();
   input += synapse0x1d38040();
   input += synapse0x1d38080();
   input += synapse0x1d380c0();
   input += synapse0x1d38100();
   input += synapse0x1d32920();
   input += synapse0x1d32960();
   input += synapse0x1ae41c0();
   input += synapse0x1ae4200();
   input += synapse0x1d38360();
   input += synapse0x1d383a0();
   input += synapse0x1d383e0();
   input += synapse0x1d38420();
   return input;
}

double NNfunction_NG_4::neuron0x1d37b50() {
   double input = input0x1d37b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d38460() {
   double input = -1.3971;
   input += synapse0x1d387a0();
   input += synapse0x1d387e0();
   input += synapse0x1d38820();
   input += synapse0x1d38860();
   input += synapse0x1d388a0();
   input += synapse0x1d388e0();
   input += synapse0x1d38920();
   input += synapse0x1d38960();
   input += synapse0x1d389a0();
   input += synapse0x1d38250();
   input += synapse0x1d38290();
   input += synapse0x1d382d0();
   input += synapse0x1d38310();
   input += synapse0x1d38bf0();
   input += synapse0x1d38c30();
   input += synapse0x1d38c70();
   input += synapse0x1d385f0();
   input += synapse0x1d38630();
   input += synapse0x1d38dc0();
   input += synapse0x1d38e00();
   input += synapse0x1d38e40();
   input += synapse0x1d38e80();
   input += synapse0x1d38ec0();
   input += synapse0x1d38f00();
   return input;
}

double NNfunction_NG_4::neuron0x1d38460() {
   double input = input0x1d38460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d38f40() {
   double input = -1.17956;
   input += synapse0x1d39280();
   input += synapse0x1d392c0();
   input += synapse0x1d39300();
   input += synapse0x1d39340();
   input += synapse0x1d39380();
   input += synapse0x1d393c0();
   input += synapse0x1d39400();
   input += synapse0x1d39440();
   input += synapse0x1d39480();
   input += synapse0x1d394c0();
   input += synapse0x1d39500();
   input += synapse0x1d39540();
   input += synapse0x1d39580();
   input += synapse0x1d395c0();
   input += synapse0x1d39600();
   input += synapse0x1d39640();
   input += synapse0x1d390d0();
   input += synapse0x1d39110();
   input += synapse0x1af2030();
   input += synapse0x1af2070();
   input += synapse0x1d21b80();
   input += synapse0x1d21bc0();
   input += synapse0x1d21c00();
   input += synapse0x1d32a30();
   return input;
}

double NNfunction_NG_4::neuron0x1d38f40() {
   double input = input0x1d38f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1af27d0() {
   double input = -0.143669;
   input += synapse0x1d38b90();
   input += synapse0x1d32a70();
   input += synapse0x1d32ab0();
   input += synapse0x1d39790();
   input += synapse0x1d397d0();
   input += synapse0x1d39810();
   input += synapse0x1d39850();
   input += synapse0x1d39890();
   input += synapse0x1d398d0();
   input += synapse0x1d39910();
   input += synapse0x1d39950();
   input += synapse0x1d39990();
   input += synapse0x1d399d0();
   input += synapse0x1d39a10();
   input += synapse0x1d39a50();
   input += synapse0x1d39a90();
   input += synapse0x1d389e0();
   input += synapse0x1d38a20();
   input += synapse0x1d39be0();
   input += synapse0x1d39c20();
   input += synapse0x1d39c60();
   input += synapse0x1d39ca0();
   input += synapse0x1d39ce0();
   input += synapse0x1d39d20();
   return input;
}

double NNfunction_NG_4::neuron0x1af27d0() {
   double input = input0x1af27d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d39d60() {
   double input = 0.00604537;
   input += synapse0x1d3a0a0();
   input += synapse0x1d3a0e0();
   input += synapse0x1d3a120();
   input += synapse0x1d3a160();
   input += synapse0x1d3a1a0();
   input += synapse0x1d3a1e0();
   input += synapse0x1d3a220();
   input += synapse0x1d3a260();
   input += synapse0x1d3a2a0();
   input += synapse0x1d3a2e0();
   input += synapse0x1d3a320();
   input += synapse0x1d3a360();
   input += synapse0x1d3a3a0();
   input += synapse0x1d3a3e0();
   input += synapse0x1d3a420();
   input += synapse0x1d3a460();
   input += synapse0x1d39ef0();
   input += synapse0x1d39f30();
   input += synapse0x1d3a5b0();
   input += synapse0x1d3a5f0();
   input += synapse0x1d3a630();
   input += synapse0x1d3a670();
   input += synapse0x1d3a6b0();
   input += synapse0x1d3a6f0();
   return input;
}

double NNfunction_NG_4::neuron0x1d39d60() {
   double input = input0x1d39d60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d3a730() {
   double input = -1.09896;
   input += synapse0x1d3aa70();
   input += synapse0x1d3aab0();
   input += synapse0x1d3aaf0();
   input += synapse0x1d3ab30();
   input += synapse0x1d3ab70();
   input += synapse0x1d3abb0();
   input += synapse0x1d3abf0();
   input += synapse0x1d3ac30();
   input += synapse0x1d3ac70();
   input += synapse0x1af23c0();
   input += synapse0x1af2400();
   input += synapse0x1af2440();
   input += synapse0x1af2480();
   input += synapse0x1af24c0();
   input += synapse0x1af2500();
   input += synapse0x1af2540();
   input += synapse0x1d3a8c0();
   input += synapse0x1d3a900();
   input += synapse0x1af2690();
   input += synapse0x1af26d0();
   input += synapse0x1af2710();
   input += synapse0x1af2750();
   input += synapse0x1af2790();
   input += synapse0x1d3b4c0();
   return input;
}

double NNfunction_NG_4::neuron0x1d3a730() {
   double input = input0x1d3a730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d3b500() {
   double input = -0.463833;
   input += synapse0x1d3b840();
   input += synapse0x1d3b880();
   input += synapse0x1d3b8c0();
   input += synapse0x1d3b900();
   input += synapse0x1d3b940();
   input += synapse0x1d3b980();
   input += synapse0x1d3b9c0();
   input += synapse0x1d3ba00();
   input += synapse0x1d3ba40();
   input += synapse0x1d3ba80();
   input += synapse0x1d3bac0();
   input += synapse0x1d3bb00();
   input += synapse0x1d3bb40();
   input += synapse0x1d3bb80();
   input += synapse0x1d3bbc0();
   input += synapse0x1d3bc00();
   input += synapse0x1d3b690();
   input += synapse0x1d3b6d0();
   input += synapse0x1d3bd50();
   input += synapse0x1d3bd90();
   input += synapse0x1d3bdd0();
   input += synapse0x1d3be10();
   input += synapse0x1d3be50();
   input += synapse0x1d3be90();
   return input;
}

double NNfunction_NG_4::neuron0x1d3b500() {
   double input = input0x1d3b500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d3bed0() {
   double input = -1.87651;
   input += synapse0x1d3c210();
   input += synapse0x1d3c250();
   input += synapse0x1d3c290();
   input += synapse0x1d3c2d0();
   input += synapse0x1d3c310();
   input += synapse0x1d3c350();
   input += synapse0x1d3c390();
   input += synapse0x1d3c3d0();
   input += synapse0x1d3c410();
   input += synapse0x1d3c450();
   input += synapse0x1d3c490();
   input += synapse0x1d3c4d0();
   input += synapse0x1d3c510();
   input += synapse0x1d3c550();
   input += synapse0x1d3c590();
   input += synapse0x1d3c5d0();
   input += synapse0x1d3c060();
   input += synapse0x1d3c0a0();
   input += synapse0x1d3c720();
   input += synapse0x1d3c760();
   input += synapse0x1d3c7a0();
   input += synapse0x1d3c7e0();
   input += synapse0x1d3c820();
   input += synapse0x1d3c860();
   return input;
}

double NNfunction_NG_4::neuron0x1d3bed0() {
   double input = input0x1d3bed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d3c8a0() {
   double input = -1.82104;
   input += synapse0x1d36340();
   input += synapse0x1d36380();
   input += synapse0x1d363c0();
   input += synapse0x1d36400();
   input += synapse0x1d3cdf0();
   input += synapse0x1d3ce30();
   input += synapse0x1d3ce70();
   input += synapse0x1d3ceb0();
   input += synapse0x1d3cef0();
   input += synapse0x1d3cf30();
   input += synapse0x1d3cf70();
   input += synapse0x1d3cfb0();
   input += synapse0x1d3cff0();
   input += synapse0x1d3d030();
   input += synapse0x1d3d070();
   input += synapse0x1d3d0b0();
   input += synapse0x1d3ca30();
   input += synapse0x1d3ca70();
   input += synapse0x1d3d200();
   input += synapse0x1d3d240();
   input += synapse0x1d3d280();
   input += synapse0x1d3d2c0();
   input += synapse0x1d3d300();
   input += synapse0x1d3d340();
   return input;
}

double NNfunction_NG_4::neuron0x1d3c8a0() {
   double input = input0x1d3c8a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d3d380() {
   double input = 0.94188;
   input += synapse0x1d3d6c0();
   input += synapse0x1d3d700();
   input += synapse0x1d3d740();
   input += synapse0x1d3d780();
   input += synapse0x1d3d7c0();
   input += synapse0x1d3d800();
   input += synapse0x1d3d840();
   input += synapse0x1d3d880();
   input += synapse0x1d3d8c0();
   input += synapse0x1d3d900();
   input += synapse0x1d3d940();
   input += synapse0x1d3d980();
   input += synapse0x1d3d9c0();
   input += synapse0x1d3da00();
   input += synapse0x1d3da40();
   input += synapse0x1d3da80();
   input += synapse0x1d3d510();
   input += synapse0x1d3d550();
   input += synapse0x1d3dbd0();
   input += synapse0x1d3dc10();
   input += synapse0x1d3dc50();
   input += synapse0x1d3dc90();
   input += synapse0x1d3dcd0();
   input += synapse0x1d3dd10();
   return input;
}

double NNfunction_NG_4::neuron0x1d3d380() {
   double input = input0x1d3d380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d3dd50() {
   double input = -2.95365;
   input += synapse0x1d3e090();
   input += synapse0x1d3e0d0();
   input += synapse0x1d3e110();
   input += synapse0x1d3e150();
   input += synapse0x1d3e190();
   input += synapse0x1d3e1d0();
   input += synapse0x1d3e210();
   input += synapse0x1d3e250();
   input += synapse0x1d3e290();
   input += synapse0x1d3e2d0();
   input += synapse0x1d3e310();
   input += synapse0x1d3e350();
   input += synapse0x1d3e390();
   input += synapse0x1d3e3d0();
   input += synapse0x1d3e410();
   input += synapse0x1d3e450();
   input += synapse0x1d3dee0();
   input += synapse0x1d3df20();
   input += synapse0x1d3acb0();
   input += synapse0x1d3acf0();
   input += synapse0x1d3ad30();
   input += synapse0x1d3ad70();
   input += synapse0x1d3adb0();
   input += synapse0x1d3adf0();
   return input;
}

double NNfunction_NG_4::neuron0x1d3dd50() {
   double input = input0x1d3dd50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d3ae30() {
   double input = 0.832576;
   input += synapse0x1d3b170();
   input += synapse0x1d3b1b0();
   input += synapse0x1d3b1f0();
   input += synapse0x1d3b230();
   input += synapse0x1d3b270();
   input += synapse0x1d3b2b0();
   input += synapse0x1d3b2f0();
   input += synapse0x1d3b330();
   input += synapse0x1d3b370();
   input += synapse0x1d3b3b0();
   input += synapse0x1d3b3f0();
   input += synapse0x1d3b430();
   input += synapse0x1d3b470();
   input += synapse0x1d3f5b0();
   input += synapse0x1d3f5f0();
   input += synapse0x1d3f630();
   input += synapse0x1d3afc0();
   input += synapse0x1d3b000();
   input += synapse0x1d3f780();
   input += synapse0x1d3f7c0();
   input += synapse0x1d3f800();
   input += synapse0x1d3f840();
   input += synapse0x1d3f880();
   input += synapse0x1d3f8c0();
   return input;
}

double NNfunction_NG_4::neuron0x1d3ae30() {
   double input = input0x1d3ae30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d3f900() {
   double input = -0.981594;
   input += synapse0x1d3fc40();
   input += synapse0x1d3fc80();
   input += synapse0x1d3fcc0();
   input += synapse0x1d3fd00();
   input += synapse0x1d3fd40();
   input += synapse0x1d3fd80();
   input += synapse0x1d3fdc0();
   input += synapse0x1d3fe00();
   input += synapse0x1d3fe40();
   input += synapse0x1d3fe80();
   input += synapse0x1d3fec0();
   input += synapse0x1d3ff00();
   input += synapse0x1d3ff40();
   input += synapse0x1d3ff80();
   input += synapse0x1d3ffc0();
   input += synapse0x1d40000();
   input += synapse0x1d3fa90();
   input += synapse0x1d3fad0();
   input += synapse0x1d40150();
   input += synapse0x1d40190();
   input += synapse0x1d401d0();
   input += synapse0x1d40210();
   input += synapse0x1d40250();
   input += synapse0x1d40290();
   return input;
}

double NNfunction_NG_4::neuron0x1d3f900() {
   double input = input0x1d3f900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d402d0() {
   double input = -1.62866;
   input += synapse0x1d40610();
   input += synapse0x1d40650();
   input += synapse0x1d40690();
   input += synapse0x1d406d0();
   input += synapse0x1d40710();
   input += synapse0x1d40750();
   input += synapse0x1d40790();
   input += synapse0x1d407d0();
   input += synapse0x1d40810();
   input += synapse0x1d40850();
   input += synapse0x1d40890();
   input += synapse0x1d408d0();
   input += synapse0x1d40910();
   input += synapse0x1d40950();
   input += synapse0x1d40990();
   input += synapse0x1d409d0();
   input += synapse0x1d40460();
   input += synapse0x1d404a0();
   input += synapse0x1d40b20();
   input += synapse0x1d40b60();
   input += synapse0x1d40ba0();
   input += synapse0x1d40be0();
   input += synapse0x1d40c20();
   input += synapse0x1d40c60();
   return input;
}

double NNfunction_NG_4::neuron0x1d402d0() {
   double input = input0x1d402d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d40ca0() {
   double input = 0.18377;
   input += synapse0x1d40fe0();
   input += synapse0x1d41020();
   input += synapse0x1d41060();
   input += synapse0x1d410a0();
   input += synapse0x1d410e0();
   input += synapse0x1d41120();
   input += synapse0x1d41160();
   input += synapse0x1d411a0();
   input += synapse0x1d411e0();
   input += synapse0x1d41220();
   input += synapse0x1d41260();
   input += synapse0x1d412a0();
   input += synapse0x1d412e0();
   input += synapse0x1d41320();
   input += synapse0x1d41360();
   input += synapse0x1d413a0();
   input += synapse0x1d40e30();
   input += synapse0x1d40e70();
   input += synapse0x1d414f0();
   input += synapse0x1d41530();
   input += synapse0x1d41570();
   input += synapse0x1d415b0();
   input += synapse0x1d415f0();
   input += synapse0x1d41630();
   return input;
}

double NNfunction_NG_4::neuron0x1d40ca0() {
   double input = input0x1d40ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d41670() {
   double input = -0.915404;
   input += synapse0x1d419b0();
   input += synapse0x1d32d10();
   input += synapse0x1d32d50();
   input += synapse0x1d33050();
   input += synapse0x1d33090();
   input += synapse0x1d33390();
   input += synapse0x1d333d0();
   input += synapse0x1d336d0();
   input += synapse0x1d33710();
   input += synapse0x1d33a10();
   input += synapse0x1d33a50();
   input += synapse0x1d33d50();
   input += synapse0x1d33d90();
   input += synapse0x1d34090();
   input += synapse0x1d340d0();
   input += synapse0x1d343d0();
   input += synapse0x1d34410();
   input += synapse0x1d34710();
   input += synapse0x1d34750();
   input += synapse0x1d34a50();
   input += synapse0x1d34a90();
   input += synapse0x1d34d90();
   input += synapse0x1d34dd0();
   input += synapse0x1d350d0();
   return input;
}

double NNfunction_NG_4::neuron0x1d41670() {
   double input = input0x1d41670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d43480() {
   double input = -1.53821;
   input += synapse0x1d35110();
   input += synapse0x1d35dd0();
   input += synapse0x1d35e10();
   input += synapse0x1d41800();
   input += synapse0x1d41840();
   input += synapse0x1d36110();
   input += synapse0x1d36150();
   input += synapse0x1ae40a0();
   input += synapse0x1ae40e0();
   input += synapse0x1d36890();
   input += synapse0x1d368d0();
   input += synapse0x1d36bd0();
   input += synapse0x1d36c10();
   input += synapse0x1d36f10();
   input += synapse0x1d36f50();
   input += synapse0x1d37250();
   input += synapse0x1d37290();
   input += synapse0x1d37590();
   input += synapse0x1d375d0();
   input += synapse0x1d378d0();
   input += synapse0x1d37910();
   input += synapse0x1d35410();
   input += synapse0x1d35450();
   input += synapse0x1d43720();
   return input;
}

double NNfunction_NG_4::neuron0x1d43480() {
   double input = input0x1d43480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d43760() {
   double input = 0.765208;
   input += synapse0x1d43aa0();
   input += synapse0x1d43ae0();
   input += synapse0x1d43b20();
   input += synapse0x1d43b60();
   input += synapse0x1d43ba0();
   input += synapse0x1d43be0();
   input += synapse0x1d43c20();
   input += synapse0x1d43c60();
   input += synapse0x1d43ca0();
   input += synapse0x1d43ce0();
   input += synapse0x1d43d20();
   input += synapse0x1d43d60();
   input += synapse0x1d43da0();
   input += synapse0x1d43de0();
   input += synapse0x1d43e20();
   input += synapse0x1d43e60();
   input += synapse0x1d438f0();
   input += synapse0x1d43930();
   input += synapse0x1d43fb0();
   input += synapse0x1d43ff0();
   input += synapse0x1d44030();
   input += synapse0x1d44070();
   input += synapse0x1d440b0();
   input += synapse0x1d440f0();
   return input;
}

double NNfunction_NG_4::neuron0x1d43760() {
   double input = input0x1d43760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d44130() {
   double input = 0.570902;
   input += synapse0x1d44470();
   input += synapse0x1d444b0();
   input += synapse0x1d444f0();
   input += synapse0x1d44530();
   input += synapse0x1d44570();
   input += synapse0x1d445b0();
   input += synapse0x1d445f0();
   input += synapse0x1d44630();
   input += synapse0x1d44670();
   input += synapse0x1d446b0();
   input += synapse0x1d446f0();
   input += synapse0x1d44730();
   input += synapse0x1d44770();
   input += synapse0x1d447b0();
   input += synapse0x1d447f0();
   input += synapse0x1d44830();
   input += synapse0x1d442c0();
   input += synapse0x1d44300();
   input += synapse0x1d44980();
   input += synapse0x1d449c0();
   input += synapse0x1d44a00();
   input += synapse0x1d44a40();
   input += synapse0x1d44a80();
   input += synapse0x1d44ac0();
   return input;
}

double NNfunction_NG_4::neuron0x1d44130() {
   double input = input0x1d44130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d44b00() {
   double input = 2.32328;
   input += synapse0x1d44e40();
   input += synapse0x1d44e80();
   input += synapse0x1d44ec0();
   input += synapse0x1d44f00();
   input += synapse0x1d44f40();
   input += synapse0x1d44f80();
   input += synapse0x1d44fc0();
   input += synapse0x1d45000();
   input += synapse0x1d45040();
   input += synapse0x1d45080();
   input += synapse0x1d450c0();
   input += synapse0x1d45100();
   input += synapse0x1d45140();
   input += synapse0x1d45180();
   input += synapse0x1d451c0();
   input += synapse0x1d45200();
   input += synapse0x1d44c90();
   input += synapse0x1d44cd0();
   input += synapse0x1d45350();
   input += synapse0x1d45390();
   input += synapse0x1d453d0();
   input += synapse0x1d45410();
   input += synapse0x1d45450();
   input += synapse0x1d45490();
   return input;
}

double NNfunction_NG_4::neuron0x1d44b00() {
   double input = input0x1d44b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d454d0() {
   double input = -0.258202;
   input += synapse0x1d45810();
   input += synapse0x1d45850();
   input += synapse0x1d45890();
   input += synapse0x1d458d0();
   input += synapse0x1d45910();
   input += synapse0x1d45950();
   input += synapse0x1d45990();
   input += synapse0x1d459d0();
   input += synapse0x1d45a10();
   input += synapse0x1d45a50();
   input += synapse0x1d45a90();
   input += synapse0x1d45ad0();
   input += synapse0x1d45b10();
   input += synapse0x1d45b50();
   input += synapse0x1d45b90();
   input += synapse0x1d45bd0();
   input += synapse0x1d45660();
   input += synapse0x1d456a0();
   input += synapse0x1d45d20();
   input += synapse0x1d45d60();
   input += synapse0x1d45da0();
   input += synapse0x1d45de0();
   input += synapse0x1d45e20();
   input += synapse0x1d45e60();
   return input;
}

double NNfunction_NG_4::neuron0x1d454d0() {
   double input = input0x1d454d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d45ea0() {
   double input = -0.092748;
   input += synapse0x1d461e0();
   input += synapse0x1d46220();
   input += synapse0x1d46260();
   input += synapse0x1d462a0();
   input += synapse0x1d462e0();
   input += synapse0x1d46320();
   input += synapse0x1d46360();
   input += synapse0x1d463a0();
   input += synapse0x1d463e0();
   input += synapse0x1d3e5a0();
   input += synapse0x1d3e5e0();
   input += synapse0x1d3e620();
   input += synapse0x1d3e660();
   input += synapse0x1d3e6a0();
   input += synapse0x1d3e6e0();
   input += synapse0x1d3e720();
   input += synapse0x1d46030();
   input += synapse0x1d46070();
   input += synapse0x1d3e870();
   input += synapse0x1d3e8b0();
   input += synapse0x1d3e8f0();
   input += synapse0x1d3e930();
   input += synapse0x1d3e970();
   input += synapse0x1d3e9b0();
   return input;
}

double NNfunction_NG_4::neuron0x1d45ea0() {
   double input = input0x1d45ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d3e9f0() {
   double input = -0.266718;
   input += synapse0x1d3ed30();
   input += synapse0x1d3ed70();
   input += synapse0x1d3edb0();
   input += synapse0x1d3edf0();
   input += synapse0x1d3ee30();
   input += synapse0x1d3ee70();
   input += synapse0x1d3eeb0();
   input += synapse0x1d3eef0();
   input += synapse0x1d3ef30();
   input += synapse0x1d3ef70();
   input += synapse0x1d3efb0();
   input += synapse0x1d3eff0();
   input += synapse0x1d3f030();
   input += synapse0x1d3f070();
   input += synapse0x1d3f0b0();
   input += synapse0x1d3f0f0();
   input += synapse0x1d3eb80();
   input += synapse0x1d3ebc0();
   input += synapse0x1d3f240();
   input += synapse0x1d3f280();
   input += synapse0x1d3f2c0();
   input += synapse0x1d3f300();
   input += synapse0x1d3f340();
   input += synapse0x1d3f380();
   return input;
}

double NNfunction_NG_4::neuron0x1d3e9f0() {
   double input = input0x1d3e9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d3f3c0() {
   double input = 0.10208;
   input += synapse0x1d3f550();
   input += synapse0x1d485e0();
   input += synapse0x1d48620();
   input += synapse0x1d48660();
   input += synapse0x1d486a0();
   input += synapse0x1d486e0();
   input += synapse0x1d48720();
   input += synapse0x1d48760();
   input += synapse0x1d487a0();
   input += synapse0x1d487e0();
   input += synapse0x1d48820();
   input += synapse0x1d48860();
   input += synapse0x1d488a0();
   input += synapse0x1d488e0();
   input += synapse0x1d48920();
   input += synapse0x1d48960();
   input += synapse0x1d48430();
   input += synapse0x1d48470();
   input += synapse0x1d48ab0();
   input += synapse0x1d48af0();
   input += synapse0x1d48b30();
   input += synapse0x1d48b70();
   input += synapse0x1d48bb0();
   input += synapse0x1d48bf0();
   return input;
}

double NNfunction_NG_4::neuron0x1d3f3c0() {
   double input = input0x1d3f3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d48c30() {
   double input = -1.91318;
   input += synapse0x1d48f70();
   input += synapse0x1d48fb0();
   input += synapse0x1d48ff0();
   input += synapse0x1d49030();
   input += synapse0x1d49070();
   input += synapse0x1d490b0();
   input += synapse0x1d490f0();
   input += synapse0x1d49130();
   input += synapse0x1d49170();
   input += synapse0x1d491b0();
   input += synapse0x1d491f0();
   input += synapse0x1d49230();
   input += synapse0x1d49270();
   input += synapse0x1d492b0();
   input += synapse0x1d492f0();
   input += synapse0x1d49330();
   input += synapse0x1d48dc0();
   input += synapse0x1d48e00();
   input += synapse0x1d49480();
   input += synapse0x1d494c0();
   input += synapse0x1d49500();
   input += synapse0x1d49540();
   input += synapse0x1d49580();
   input += synapse0x1d495c0();
   return input;
}

double NNfunction_NG_4::neuron0x1d48c30() {
   double input = input0x1d48c30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d49600() {
   double input = -0.296884;
   input += synapse0x1d49940();
   input += synapse0x1d49980();
   input += synapse0x1d499c0();
   input += synapse0x1d49a00();
   input += synapse0x1d49a40();
   input += synapse0x1d49a80();
   input += synapse0x1d49ac0();
   input += synapse0x1d49b00();
   input += synapse0x1d49b40();
   input += synapse0x1d49b80();
   input += synapse0x1d49bc0();
   input += synapse0x1d49c00();
   input += synapse0x1d49c40();
   input += synapse0x1d49c80();
   input += synapse0x1d49cc0();
   input += synapse0x1d49d00();
   input += synapse0x1d49790();
   input += synapse0x1d497d0();
   input += synapse0x1d49e50();
   input += synapse0x1d49e90();
   input += synapse0x1d49ed0();
   input += synapse0x1d49f10();
   input += synapse0x1d49f50();
   input += synapse0x1d49f90();
   return input;
}

double NNfunction_NG_4::neuron0x1d49600() {
   double input = input0x1d49600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d49fd0() {
   double input = -3.61119;
   input += synapse0x1d4a310();
   input += synapse0x1d4a350();
   input += synapse0x1d4a390();
   input += synapse0x1d4a3d0();
   input += synapse0x1d4a410();
   input += synapse0x1d4a450();
   input += synapse0x1d4a490();
   input += synapse0x1d4a4d0();
   input += synapse0x1d4a510();
   input += synapse0x1d4a550();
   input += synapse0x1d4a590();
   input += synapse0x1d4a5d0();
   input += synapse0x1d4a610();
   input += synapse0x1d4a650();
   input += synapse0x1d4a690();
   input += synapse0x1d4a6d0();
   input += synapse0x1d4a160();
   input += synapse0x1d4a1a0();
   input += synapse0x1d4a820();
   input += synapse0x1d4a860();
   input += synapse0x1d4a8a0();
   input += synapse0x1d4a8e0();
   input += synapse0x1d4a920();
   input += synapse0x1d4a960();
   return input;
}

double NNfunction_NG_4::neuron0x1d49fd0() {
   double input = input0x1d49fd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d4a9a0() {
   double input = 1.50909;
   input += synapse0x1d4ace0();
   input += synapse0x1d4ad20();
   input += synapse0x1d4ad60();
   input += synapse0x1d4ada0();
   input += synapse0x1d4ade0();
   input += synapse0x1d4ae20();
   input += synapse0x1d4ae60();
   input += synapse0x1d4aea0();
   input += synapse0x1d4aee0();
   input += synapse0x1d4af20();
   input += synapse0x1d4af60();
   input += synapse0x1d4afa0();
   input += synapse0x1d4afe0();
   input += synapse0x1d4b020();
   input += synapse0x1d4b060();
   input += synapse0x1d4b0a0();
   input += synapse0x1d4ab30();
   input += synapse0x1d4ab70();
   input += synapse0x1d4b1f0();
   input += synapse0x1d4b230();
   input += synapse0x1d4b270();
   input += synapse0x1d4b2b0();
   input += synapse0x1d4b2f0();
   input += synapse0x1d4b330();
   return input;
}

double NNfunction_NG_4::neuron0x1d4a9a0() {
   double input = input0x1d4a9a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d4b370() {
   double input = -0.652756;
   input += synapse0x1d4b6b0();
   input += synapse0x1d4b6f0();
   input += synapse0x1d4b730();
   input += synapse0x1d4b770();
   input += synapse0x1d4b7b0();
   input += synapse0x1d4b7f0();
   input += synapse0x1d4b830();
   input += synapse0x1d4b870();
   input += synapse0x1d4b8b0();
   input += synapse0x1d4b8f0();
   input += synapse0x1d4b930();
   input += synapse0x1d4b970();
   input += synapse0x1d4b9b0();
   input += synapse0x1d4b9f0();
   input += synapse0x1d4ba30();
   input += synapse0x1d4ba70();
   input += synapse0x1d4b500();
   input += synapse0x1d4b540();
   input += synapse0x1d4bbc0();
   input += synapse0x1d4bc00();
   input += synapse0x1d4bc40();
   input += synapse0x1d4bc80();
   input += synapse0x1d4bcc0();
   input += synapse0x1d4bd00();
   return input;
}

double NNfunction_NG_4::neuron0x1d4b370() {
   double input = input0x1d4b370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d4bd40() {
   double input = -0.23767;
   input += synapse0x1d4c080();
   input += synapse0x1d4c0c0();
   input += synapse0x1d4c100();
   input += synapse0x1d4c140();
   input += synapse0x1d4c180();
   input += synapse0x1d4c1c0();
   input += synapse0x1d4c200();
   input += synapse0x1d4c240();
   input += synapse0x1d4c280();
   input += synapse0x1d4c2c0();
   input += synapse0x1d4c300();
   input += synapse0x1d4c340();
   input += synapse0x1d4c380();
   input += synapse0x1d4c3c0();
   input += synapse0x1d4c400();
   input += synapse0x1d4c440();
   input += synapse0x1d4bed0();
   input += synapse0x1d4bf10();
   input += synapse0x1d4c590();
   input += synapse0x1d4c5d0();
   input += synapse0x1d4c610();
   input += synapse0x1d4c650();
   input += synapse0x1d4c690();
   input += synapse0x1d4c6d0();
   return input;
}

double NNfunction_NG_4::neuron0x1d4bd40() {
   double input = input0x1d4bd40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d4c710() {
   double input = 0.03385;
   input += synapse0x1d4ca50();
   input += synapse0x1d4ca90();
   input += synapse0x1d4cad0();
   input += synapse0x1d4cb10();
   input += synapse0x1d4cb50();
   input += synapse0x1d4cb90();
   input += synapse0x1d4cbd0();
   input += synapse0x1d4cc10();
   input += synapse0x1d4cc50();
   input += synapse0x1d4cc90();
   input += synapse0x1d4ccd0();
   input += synapse0x1d4cd10();
   input += synapse0x1d4cd50();
   input += synapse0x1d4cd90();
   input += synapse0x1d4cdd0();
   input += synapse0x1d4ce10();
   input += synapse0x1d4c8a0();
   input += synapse0x1d4c8e0();
   input += synapse0x1d4cf60();
   input += synapse0x1d4cfa0();
   input += synapse0x1d4cfe0();
   input += synapse0x1d4d020();
   input += synapse0x1d4d060();
   input += synapse0x1d4d0a0();
   return input;
}

double NNfunction_NG_4::neuron0x1d4c710() {
   double input = input0x1d4c710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d4d0e0() {
   double input = 3.8219;
   input += synapse0x1d4d420();
   input += synapse0x1d419f0();
   input += synapse0x1d41a30();
   input += synapse0x1d41a70();
   input += synapse0x1d41cc0();
   input += synapse0x1d41d00();
   input += synapse0x1d41d40();
   input += synapse0x1d41f90();
   input += synapse0x1d41fd0();
   input += synapse0x1d42220();
   input += synapse0x1d42260();
   input += synapse0x1d422a0();
   input += synapse0x1d424f0();
   input += synapse0x1d42530();
   input += synapse0x1d42780();
   input += synapse0x1d427c0();
   input += synapse0x1d4d270();
   input += synapse0x1d4d2b0();
   input += synapse0x1d42910();
   input += synapse0x1d42e20();
   input += synapse0x1d42e60();
   input += synapse0x1d42ea0();
   input += synapse0x1d430f0();
   input += synapse0x1d43130();
   return input;
}

double NNfunction_NG_4::neuron0x1d4d0e0() {
   double input = input0x1d4d0e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d43170() {
   double input = -0.674005;
   input += synapse0x1d429e0();
   input += synapse0x1d42a20();
   input += synapse0x1d42a60();
   input += synapse0x1d42aa0();
   input += synapse0x1d43420();
   input += synapse0x1d4f770();
   input += synapse0x1d4f7b0();
   input += synapse0x1d4f7f0();
   input += synapse0x1d4f830();
   input += synapse0x1d4f870();
   input += synapse0x1d4f8b0();
   input += synapse0x1d4f8f0();
   input += synapse0x1d4f930();
   input += synapse0x1d4f970();
   input += synapse0x1d4f9b0();
   input += synapse0x1d4f9f0();
   input += synapse0x1d43300();
   input += synapse0x1d43340();
   input += synapse0x1d4fb40();
   input += synapse0x1d4fb80();
   input += synapse0x1d4fbc0();
   input += synapse0x1d4fc00();
   input += synapse0x1d4fc40();
   input += synapse0x1d4fc80();
   return input;
}

double NNfunction_NG_4::neuron0x1d43170() {
   double input = input0x1d43170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d4fcc0() {
   double input = -0.178542;
   input += synapse0x1d50000();
   input += synapse0x1d50040();
   input += synapse0x1d50080();
   input += synapse0x1d500c0();
   input += synapse0x1d50100();
   input += synapse0x1d50140();
   input += synapse0x1d50180();
   input += synapse0x1d501c0();
   input += synapse0x1d50200();
   input += synapse0x1d50240();
   input += synapse0x1d50280();
   input += synapse0x1d502c0();
   input += synapse0x1d50300();
   input += synapse0x1d50340();
   input += synapse0x1d50380();
   input += synapse0x1d503c0();
   input += synapse0x1d4fe50();
   input += synapse0x1d4fe90();
   input += synapse0x1d50510();
   input += synapse0x1d50550();
   input += synapse0x1d50590();
   input += synapse0x1d505d0();
   input += synapse0x1d50610();
   input += synapse0x1d50650();
   return input;
}

double NNfunction_NG_4::neuron0x1d4fcc0() {
   double input = input0x1d4fcc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d50690() {
   double input = 0.464469;
   input += synapse0x1d509d0();
   input += synapse0x1d50a10();
   input += synapse0x1d50a50();
   input += synapse0x1d50a90();
   input += synapse0x1d50ad0();
   input += synapse0x1d50b10();
   input += synapse0x1d50b50();
   input += synapse0x1d50b90();
   input += synapse0x1d50bd0();
   input += synapse0x1d50c10();
   input += synapse0x1d50c50();
   input += synapse0x1d50c90();
   input += synapse0x1d50cd0();
   input += synapse0x1d50d10();
   input += synapse0x1d50d50();
   input += synapse0x1d50d90();
   input += synapse0x1d50820();
   input += synapse0x1d50860();
   input += synapse0x1d50ee0();
   input += synapse0x1d50f20();
   input += synapse0x1d50f60();
   input += synapse0x1d50fa0();
   input += synapse0x1d50fe0();
   input += synapse0x1d51020();
   return input;
}

double NNfunction_NG_4::neuron0x1d50690() {
   double input = input0x1d50690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d51060() {
   double input = -2.58245;
   input += synapse0x1d513a0();
   input += synapse0x1d513e0();
   input += synapse0x1d51420();
   input += synapse0x1d51460();
   input += synapse0x1d514a0();
   input += synapse0x1d514e0();
   input += synapse0x1d51520();
   input += synapse0x1d51560();
   input += synapse0x1d515a0();
   input += synapse0x1d515e0();
   input += synapse0x1d51620();
   input += synapse0x1d51660();
   input += synapse0x1d516a0();
   input += synapse0x1d516e0();
   input += synapse0x1d51720();
   input += synapse0x1d51760();
   input += synapse0x1d511f0();
   input += synapse0x1d51230();
   input += synapse0x1d518b0();
   input += synapse0x1d518f0();
   input += synapse0x1d51930();
   input += synapse0x1d51970();
   input += synapse0x1d519b0();
   input += synapse0x1d519f0();
   return input;
}

double NNfunction_NG_4::neuron0x1d51060() {
   double input = input0x1d51060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d51a30() {
   double input = 0.460167;
   input += synapse0x1d51d70();
   input += synapse0x1d51db0();
   input += synapse0x1d51df0();
   input += synapse0x1d51e30();
   input += synapse0x1d51e70();
   input += synapse0x1d51eb0();
   input += synapse0x1d51ef0();
   input += synapse0x1d51f30();
   input += synapse0x1d51f70();
   input += synapse0x1d51fb0();
   input += synapse0x1d51ff0();
   input += synapse0x1d52030();
   input += synapse0x1d52070();
   input += synapse0x1d520b0();
   input += synapse0x1d520f0();
   input += synapse0x1d52130();
   input += synapse0x1d51bc0();
   input += synapse0x1d51c00();
   input += synapse0x1d52280();
   input += synapse0x1d522c0();
   input += synapse0x1d52300();
   input += synapse0x1d52340();
   input += synapse0x1d52380();
   input += synapse0x1d523c0();
   return input;
}

double NNfunction_NG_4::neuron0x1d51a30() {
   double input = input0x1d51a30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d52400() {
   double input = -2.71306;
   input += synapse0x1d52740();
   input += synapse0x1d52780();
   input += synapse0x1d527c0();
   input += synapse0x1d52800();
   input += synapse0x1d52840();
   input += synapse0x1d52880();
   input += synapse0x1d528c0();
   input += synapse0x1d52900();
   input += synapse0x1d52940();
   input += synapse0x1d52980();
   input += synapse0x1d529c0();
   input += synapse0x1d52a00();
   input += synapse0x1d52a40();
   input += synapse0x1d52a80();
   input += synapse0x1d52ac0();
   input += synapse0x1d52b00();
   input += synapse0x1d52590();
   input += synapse0x1d525d0();
   input += synapse0x1d52c50();
   input += synapse0x1d52c90();
   input += synapse0x1d52cd0();
   input += synapse0x1d52d10();
   input += synapse0x1d52d50();
   input += synapse0x1d52d90();
   return input;
}

double NNfunction_NG_4::neuron0x1d52400() {
   double input = input0x1d52400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d52dd0() {
   double input = 0.736285;
   input += synapse0x1d53110();
   input += synapse0x1d53150();
   input += synapse0x1d53190();
   input += synapse0x1d531d0();
   input += synapse0x1d53210();
   input += synapse0x1d53250();
   input += synapse0x1d53290();
   input += synapse0x1d532d0();
   input += synapse0x1d53310();
   input += synapse0x1d53350();
   input += synapse0x1d53390();
   input += synapse0x1d533d0();
   input += synapse0x1d53410();
   input += synapse0x1d53450();
   input += synapse0x1d53490();
   input += synapse0x1d534d0();
   input += synapse0x1d52f60();
   input += synapse0x1d52fa0();
   input += synapse0x1d53620();
   input += synapse0x1d53660();
   input += synapse0x1d536a0();
   input += synapse0x1d536e0();
   input += synapse0x1d53720();
   input += synapse0x1d53760();
   return input;
}

double NNfunction_NG_4::neuron0x1d52dd0() {
   double input = input0x1d52dd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d537a0() {
   double input = 2.08041;
   input += synapse0x1d53ae0();
   input += synapse0x1d53b20();
   input += synapse0x1d53b60();
   input += synapse0x1d53ba0();
   input += synapse0x1d53be0();
   input += synapse0x1d53c20();
   input += synapse0x1d53c60();
   input += synapse0x1d53ca0();
   input += synapse0x1d53ce0();
   input += synapse0x1d53d20();
   input += synapse0x1d53d60();
   input += synapse0x1d53da0();
   input += synapse0x1d53de0();
   input += synapse0x1d53e20();
   input += synapse0x1d53e60();
   input += synapse0x1d53ea0();
   input += synapse0x1d53930();
   input += synapse0x1d53970();
   input += synapse0x1d53ff0();
   input += synapse0x1d54030();
   input += synapse0x1d54070();
   input += synapse0x1d540b0();
   input += synapse0x1d540f0();
   input += synapse0x1d54130();
   return input;
}

double NNfunction_NG_4::neuron0x1d537a0() {
   double input = input0x1d537a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d54170() {
   double input = -0.350799;
   input += synapse0x1d3cbe0();
   input += synapse0x1d3cc20();
   input += synapse0x1d3cc60();
   input += synapse0x1d3cca0();
   input += synapse0x1d3cce0();
   input += synapse0x1d3cd20();
   input += synapse0x1d3cd60();
   input += synapse0x1d3cda0();
   input += synapse0x1d548c0();
   input += synapse0x1d54900();
   input += synapse0x1d54940();
   input += synapse0x1d54980();
   input += synapse0x1d549c0();
   input += synapse0x1d54a00();
   input += synapse0x1d54a40();
   input += synapse0x1d54a80();
   input += synapse0x1d54300();
   input += synapse0x1d54340();
   input += synapse0x1d54bd0();
   input += synapse0x1d54c10();
   input += synapse0x1d54c50();
   input += synapse0x1d54c90();
   input += synapse0x1d54cd0();
   input += synapse0x1d54d10();
   return input;
}

double NNfunction_NG_4::neuron0x1d54170() {
   double input = input0x1d54170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d54d50() {
   double input = 3.56149;
   input += synapse0x1d55090();
   input += synapse0x1d550d0();
   input += synapse0x1d55110();
   input += synapse0x1d55150();
   input += synapse0x1d55190();
   input += synapse0x1d551d0();
   input += synapse0x1d55210();
   input += synapse0x1d55250();
   input += synapse0x1d55290();
   input += synapse0x1d552d0();
   input += synapse0x1d55310();
   input += synapse0x1d55350();
   input += synapse0x1d55390();
   input += synapse0x1d553d0();
   input += synapse0x1d55410();
   input += synapse0x1d55450();
   input += synapse0x1d54ee0();
   input += synapse0x1d54f20();
   input += synapse0x1d555a0();
   input += synapse0x1d555e0();
   input += synapse0x1d55620();
   input += synapse0x1d55660();
   input += synapse0x1d556a0();
   input += synapse0x1d556e0();
   return input;
}

double NNfunction_NG_4::neuron0x1d54d50() {
   double input = input0x1d54d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d55720() {
   double input = -0.50379;
   input += synapse0x1d55a60();
   input += synapse0x1d55aa0();
   input += synapse0x1d55ae0();
   input += synapse0x1d55b20();
   input += synapse0x1d55b60();
   input += synapse0x1d55ba0();
   input += synapse0x1d55be0();
   input += synapse0x1d55c20();
   input += synapse0x1d55c60();
   input += synapse0x1d55ca0();
   input += synapse0x1d55ce0();
   input += synapse0x1d55d20();
   input += synapse0x1d55d60();
   input += synapse0x1d55da0();
   input += synapse0x1d55de0();
   input += synapse0x1d55e20();
   input += synapse0x1d558b0();
   input += synapse0x1d558f0();
   input += synapse0x1d46420();
   input += synapse0x1d46460();
   input += synapse0x1d464a0();
   input += synapse0x1d464e0();
   input += synapse0x1d46520();
   input += synapse0x1d46560();
   return input;
}

double NNfunction_NG_4::neuron0x1d55720() {
   double input = input0x1d55720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d465a0() {
   double input = -1.9807;
   input += synapse0x1d468e0();
   input += synapse0x1d46920();
   input += synapse0x1d46960();
   input += synapse0x1d469a0();
   input += synapse0x1d469e0();
   input += synapse0x1d46a20();
   input += synapse0x1d46a60();
   input += synapse0x1d46aa0();
   input += synapse0x1d46ae0();
   input += synapse0x1d46b20();
   input += synapse0x1d46b60();
   input += synapse0x1d46ba0();
   input += synapse0x1d46be0();
   input += synapse0x1d46c20();
   input += synapse0x1d46c60();
   input += synapse0x1d46ca0();
   input += synapse0x1d46730();
   input += synapse0x1d46770();
   input += synapse0x1d46df0();
   input += synapse0x1d46e30();
   input += synapse0x1d46e70();
   input += synapse0x1d46eb0();
   input += synapse0x1d46ef0();
   input += synapse0x1d46f30();
   return input;
}

double NNfunction_NG_4::neuron0x1d465a0() {
   double input = input0x1d465a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d46f70() {
   double input = 0.388342;
   input += synapse0x1d472b0();
   input += synapse0x1d472f0();
   input += synapse0x1d47330();
   input += synapse0x1d47370();
   input += synapse0x1d473b0();
   input += synapse0x1d473f0();
   input += synapse0x1d47430();
   input += synapse0x1d47470();
   input += synapse0x1d474b0();
   input += synapse0x1d474f0();
   input += synapse0x1d47530();
   input += synapse0x1d47570();
   input += synapse0x1d475b0();
   input += synapse0x1d475f0();
   input += synapse0x1d47630();
   input += synapse0x1d47670();
   input += synapse0x1d47100();
   input += synapse0x1d47140();
   input += synapse0x1d477c0();
   input += synapse0x1d47800();
   input += synapse0x1d47840();
   input += synapse0x1d47880();
   input += synapse0x1d478c0();
   input += synapse0x1d47900();
   return input;
}

double NNfunction_NG_4::neuron0x1d46f70() {
   double input = input0x1d46f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d47940() {
   double input = -1.03341;
   input += synapse0x1d47c80();
   input += synapse0x1d47cc0();
   input += synapse0x1d47d00();
   input += synapse0x1d47d40();
   input += synapse0x1d47d80();
   input += synapse0x1d47dc0();
   input += synapse0x1d47e00();
   input += synapse0x1d47e40();
   input += synapse0x1d47e80();
   input += synapse0x1d47ec0();
   input += synapse0x1d47f00();
   input += synapse0x1d47f40();
   input += synapse0x1d47f80();
   input += synapse0x1d47fc0();
   input += synapse0x1d48000();
   input += synapse0x1d48040();
   input += synapse0x1d47ad0();
   input += synapse0x1d47b10();
   input += synapse0x1d48190();
   input += synapse0x1d481d0();
   input += synapse0x1d48210();
   input += synapse0x1d48250();
   input += synapse0x1d48290();
   input += synapse0x1d482d0();
   return input;
}

double NNfunction_NG_4::neuron0x1d47940() {
   double input = input0x1d47940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d59f80() {
   double input = 1.28403;
   input += synapse0x1d5a1a0();
   input += synapse0x1d5a1e0();
   input += synapse0x1d5a220();
   input += synapse0x1d5a260();
   input += synapse0x1d5a2a0();
   input += synapse0x1d5a2e0();
   input += synapse0x1d5a320();
   input += synapse0x1d5a360();
   input += synapse0x1d5a3a0();
   input += synapse0x1d5a3e0();
   input += synapse0x1d5a420();
   input += synapse0x1d5a460();
   input += synapse0x1d5a4a0();
   input += synapse0x1d5a4e0();
   input += synapse0x1d5a520();
   input += synapse0x1d5a560();
   input += synapse0x1d48310();
   input += synapse0x1d48350();
   input += synapse0x1d5a6b0();
   input += synapse0x1d5a6f0();
   input += synapse0x1d5a730();
   input += synapse0x1d5a770();
   input += synapse0x1d5a7b0();
   input += synapse0x1d5a7f0();
   return input;
}

double NNfunction_NG_4::neuron0x1d59f80() {
   double input = input0x1d59f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d5a830() {
   double input = 2.90501;
   input += synapse0x1d5ab70();
   input += synapse0x1d5abb0();
   input += synapse0x1d5abf0();
   input += synapse0x1d5ac30();
   input += synapse0x1d5ac70();
   input += synapse0x1d5acb0();
   input += synapse0x1d5acf0();
   input += synapse0x1d5ad30();
   input += synapse0x1d5ad70();
   input += synapse0x1d5adb0();
   input += synapse0x1d5adf0();
   input += synapse0x1d5ae30();
   input += synapse0x1d5ae70();
   input += synapse0x1d5aeb0();
   input += synapse0x1d5aef0();
   input += synapse0x1d5af30();
   input += synapse0x1d5a9c0();
   input += synapse0x1d5aa00();
   input += synapse0x1d5b080();
   input += synapse0x1d5b0c0();
   input += synapse0x1d5b100();
   input += synapse0x1d5b140();
   input += synapse0x1d5b180();
   input += synapse0x1d5b1c0();
   return input;
}

double NNfunction_NG_4::neuron0x1d5a830() {
   double input = input0x1d5a830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d5b200() {
   double input = 0.709084;
   input += synapse0x1d5b540();
   input += synapse0x1d5b580();
   input += synapse0x1d5b5c0();
   input += synapse0x1d5b600();
   input += synapse0x1d5b640();
   input += synapse0x1d5b680();
   input += synapse0x1d5b6c0();
   input += synapse0x1d5b700();
   input += synapse0x1d5b740();
   input += synapse0x1d5b780();
   input += synapse0x1d5b7c0();
   input += synapse0x1d5b800();
   input += synapse0x1d5b840();
   input += synapse0x1d5b880();
   input += synapse0x1d5b8c0();
   input += synapse0x1d5b900();
   input += synapse0x1d5b390();
   input += synapse0x1d5b3d0();
   input += synapse0x1d5ba50();
   input += synapse0x1d5ba90();
   input += synapse0x1d5bad0();
   input += synapse0x1d5bb10();
   input += synapse0x1d5bb50();
   input += synapse0x1d5bb90();
   return input;
}

double NNfunction_NG_4::neuron0x1d5b200() {
   double input = input0x1d5b200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d5bbd0() {
   double input = -0.402017;
   input += synapse0x1d5bf10();
   input += synapse0x1d5bf50();
   input += synapse0x1d5bf90();
   input += synapse0x1d5bfd0();
   input += synapse0x1d5c010();
   input += synapse0x1d5c050();
   input += synapse0x1d5c090();
   input += synapse0x1d5c0d0();
   input += synapse0x1d5c110();
   input += synapse0x1d5c150();
   input += synapse0x1d5c190();
   input += synapse0x1d5c1d0();
   input += synapse0x1d5c210();
   input += synapse0x1d5c250();
   input += synapse0x1d5c290();
   input += synapse0x1d5c2d0();
   input += synapse0x1d5bd60();
   input += synapse0x1d5bda0();
   input += synapse0x1d5c420();
   input += synapse0x1d5c460();
   input += synapse0x1d5c4a0();
   input += synapse0x1d5c4e0();
   input += synapse0x1d5c520();
   input += synapse0x1d5c560();
   return input;
}

double NNfunction_NG_4::neuron0x1d5bbd0() {
   double input = input0x1d5bbd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d62dd0() {
   double input = -0.811025;
   input += synapse0x1d38b00();
   input += synapse0x1d38b40();
   input += synapse0x1d3a010();
   input += synapse0x1d3a050();
   input += synapse0x1d3a9e0();
   input += synapse0x1d3aa20();
   input += synapse0x1d3b7b0();
   input += synapse0x1d3b7f0();
   input += synapse0x1d3c180();
   input += synapse0x1d3c1c0();
   input += synapse0x1d3cb50();
   input += synapse0x1d3cb90();
   input += synapse0x1d3d630();
   input += synapse0x1d3d670();
   input += synapse0x1d3e000();
   input += synapse0x1d3e040();
   input += synapse0x1d3b0e0();
   input += synapse0x1d3b120();
   input += synapse0x1d3fbb0();
   input += synapse0x1d3fbf0();
   input += synapse0x1d40580();
   input += synapse0x1d405c0();
   input += synapse0x1d40f50();
   input += synapse0x1d40f90();
   input += synapse0x1d41920();
   input += synapse0x1d41960();
   input += synapse0x1d35a90();
   input += synapse0x1d35ad0();
   input += synapse0x1d43a10();
   input += synapse0x1d43a50();
   input += synapse0x1d443e0();
   input += synapse0x1d44420();
   input += synapse0x1d44db0();
   input += synapse0x1d44df0();
   input += synapse0x1d45780();
   input += synapse0x1d457c0();
   input += synapse0x1d46150();
   input += synapse0x1d46190();
   input += synapse0x1d3eca0();
   input += synapse0x1d3ece0();
   input += synapse0x1d48550();
   input += synapse0x1d48590();
   input += synapse0x1d48ee0();
   input += synapse0x1d48f20();
   input += synapse0x1d498b0();
   input += synapse0x1d498f0();
   input += synapse0x1d4a280();
   input += synapse0x1d4a2c0();
   input += synapse0x1d4ac50();
   input += synapse0x1d4ac90();
   return input;
}

double NNfunction_NG_4::neuron0x1d62dd0() {
   double input = input0x1d62dd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d63170() {
   double input = 0.616754;
   input += synapse0x1d4d390();
   input += synapse0x1d4d3d0();
   input += synapse0x1d42950();
   input += synapse0x1d42990();
   input += synapse0x1d4ff70();
   input += synapse0x1d4ffb0();
   input += synapse0x1d50940();
   input += synapse0x1d50980();
   input += synapse0x1d51310();
   input += synapse0x1d51350();
   input += synapse0x1d51ce0();
   input += synapse0x1d51d20();
   input += synapse0x1d526b0();
   input += synapse0x1d526f0();
   input += synapse0x1d53080();
   input += synapse0x1d530c0();
   input += synapse0x1d53a50();
   input += synapse0x1d53a90();
   input += synapse0x1d54420();
   input += synapse0x1d54460();
   input += synapse0x1d55000();
   input += synapse0x1d55040();
   input += synapse0x1d559d0();
   input += synapse0x1d55a10();
   input += synapse0x1d46850();
   input += synapse0x1d46890();
   input += synapse0x1d47220();
   input += synapse0x1d47260();
   input += synapse0x1d47bf0();
   input += synapse0x1d47c30();
   input += synapse0x1d5a110();
   input += synapse0x1d5a150();
   input += synapse0x1d5aae0();
   input += synapse0x1d5ab20();
   input += synapse0x1d5b4b0();
   input += synapse0x1d5b4f0();
   input += synapse0x1d5be80();
   input += synapse0x1d5bec0();
   input += synapse0x1d37d70();
   input += synapse0x1d37db0();
   input += synapse0x1d4b620();
   input += synapse0x1d4b660();
   input += synapse0x1d5c5a0();
   input += synapse0x1d5c5e0();
   input += synapse0x1d5c620();
   input += synapse0x1d5c660();
   input += synapse0x1d63510();
   input += synapse0x1d63550();
   input += synapse0x1d63590();
   input += synapse0x1d635d0();
   return input;
}

double NNfunction_NG_4::neuron0x1d63170() {
   double input = input0x1d63170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d63610() {
   double input = -1.00091;
   input += synapse0x1d63950();
   input += synapse0x1d63990();
   input += synapse0x1d639d0();
   input += synapse0x1d63a10();
   input += synapse0x1d63a50();
   input += synapse0x1d63a90();
   input += synapse0x1d63ad0();
   input += synapse0x1d63b10();
   input += synapse0x1d63b50();
   input += synapse0x1d63b90();
   input += synapse0x1d63bd0();
   input += synapse0x1d63c10();
   input += synapse0x1d63c50();
   input += synapse0x1d63c90();
   input += synapse0x1d63cd0();
   input += synapse0x1d63d10();
   input += synapse0x1d637a0();
   input += synapse0x1d637e0();
   input += synapse0x1d63e60();
   input += synapse0x1d63ea0();
   input += synapse0x1d63ee0();
   input += synapse0x1d63f20();
   input += synapse0x1d63f60();
   input += synapse0x1d63fa0();
   input += synapse0x1d63fe0();
   input += synapse0x1d64020();
   input += synapse0x1d64060();
   input += synapse0x1d640a0();
   input += synapse0x1d640e0();
   input += synapse0x1d64120();
   input += synapse0x1d64160();
   input += synapse0x1d641a0();
   input += synapse0x1d63d50();
   input += synapse0x1d63d90();
   input += synapse0x1d63dd0();
   input += synapse0x1d63e10();
   input += synapse0x1d643f0();
   input += synapse0x1d64430();
   input += synapse0x1d64470();
   input += synapse0x1d644b0();
   input += synapse0x1d644f0();
   input += synapse0x1d64530();
   input += synapse0x1d64570();
   input += synapse0x1d645b0();
   input += synapse0x1d645f0();
   input += synapse0x1d64630();
   input += synapse0x1d64670();
   input += synapse0x1d646b0();
   input += synapse0x1d646f0();
   input += synapse0x1d64730();
   return input;
}

double NNfunction_NG_4::neuron0x1d63610() {
   double input = input0x1d63610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d64770() {
   double input = 0.0697485;
   input += synapse0x1d64ab0();
   input += synapse0x1d64af0();
   input += synapse0x1d64b30();
   input += synapse0x1d64b70();
   input += synapse0x1d64bb0();
   input += synapse0x1d64bf0();
   input += synapse0x1d64c30();
   input += synapse0x1d64c70();
   input += synapse0x1d64cb0();
   input += synapse0x1d64cf0();
   input += synapse0x1d64d30();
   input += synapse0x1d64d70();
   input += synapse0x1d64db0();
   input += synapse0x1d64df0();
   input += synapse0x1d64e30();
   input += synapse0x1d64e70();
   input += synapse0x1d64900();
   input += synapse0x1d64940();
   input += synapse0x1d64fc0();
   input += synapse0x1d65000();
   input += synapse0x1d65040();
   input += synapse0x1d65080();
   input += synapse0x1d650c0();
   input += synapse0x1d65100();
   input += synapse0x1d65140();
   input += synapse0x1d65180();
   input += synapse0x1d651c0();
   input += synapse0x1d65200();
   input += synapse0x1d65240();
   input += synapse0x1d65280();
   input += synapse0x1d652c0();
   input += synapse0x1d65300();
   input += synapse0x1d64eb0();
   input += synapse0x1d64ef0();
   input += synapse0x1d64f30();
   input += synapse0x1d64f70();
   input += synapse0x1d65550();
   input += synapse0x1d65590();
   input += synapse0x1d655d0();
   input += synapse0x1d65610();
   input += synapse0x1d65650();
   input += synapse0x1d65690();
   input += synapse0x1d656d0();
   input += synapse0x1d65710();
   input += synapse0x1d65750();
   input += synapse0x1d65790();
   input += synapse0x1d657d0();
   input += synapse0x1d65810();
   input += synapse0x1d65850();
   input += synapse0x1d65890();
   return input;
}

double NNfunction_NG_4::neuron0x1d64770() {
   double input = input0x1d64770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d658d0() {
   double input = 0.353926;
   input += synapse0x1d65c10();
   input += synapse0x1d65c50();
   input += synapse0x1d65c90();
   input += synapse0x1d65cd0();
   input += synapse0x1d65d10();
   input += synapse0x1d65d50();
   input += synapse0x1d65d90();
   input += synapse0x1d65dd0();
   input += synapse0x1d65e10();
   input += synapse0x1d65e50();
   input += synapse0x1d65e90();
   input += synapse0x1d65ed0();
   input += synapse0x1d65f10();
   input += synapse0x1d65f50();
   input += synapse0x1d65f90();
   input += synapse0x1d65fd0();
   input += synapse0x1d65a60();
   input += synapse0x1d65aa0();
   input += synapse0x1d66120();
   input += synapse0x1d66160();
   input += synapse0x1d661a0();
   input += synapse0x1d661e0();
   input += synapse0x1d66220();
   input += synapse0x1d66260();
   input += synapse0x1d662a0();
   input += synapse0x1d662e0();
   input += synapse0x1d66320();
   input += synapse0x1d66360();
   input += synapse0x1d663a0();
   input += synapse0x1d663e0();
   input += synapse0x1d66420();
   input += synapse0x1d66460();
   input += synapse0x1d66010();
   input += synapse0x1d66050();
   input += synapse0x1d66090();
   input += synapse0x1d660d0();
   input += synapse0x1d666b0();
   input += synapse0x1d666f0();
   input += synapse0x1d66730();
   input += synapse0x1d66770();
   input += synapse0x1d667b0();
   input += synapse0x1d667f0();
   input += synapse0x1d66830();
   input += synapse0x1d66870();
   input += synapse0x1d668b0();
   input += synapse0x1d668f0();
   input += synapse0x1d66930();
   input += synapse0x1d66970();
   input += synapse0x1d669b0();
   input += synapse0x1d669f0();
   return input;
}

double NNfunction_NG_4::neuron0x1d658d0() {
   double input = input0x1d658d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_4::input0x1d66a30() {
   double input = 8.27492;
   input += synapse0x1d37b10();
   input += synapse0x1d66c50();
   input += synapse0x1d66c90();
   input += synapse0x1d66cd0();
   input += synapse0x1d66d10();
   return input;
}

double NNfunction_NG_4::neuron0x1d66a30() {
   double input = input0x1d66a30();
   return (input * 1)+0;
}

double NNfunction_NG_4::synapse0x1af2960() {
   return (neuron0x1d32af0()*0.00537622);
}

double NNfunction_NG_4::synapse0x1d329b0() {
   return (neuron0x1d32e30()*-0.704365);
}

double NNfunction_NG_4::synapse0x1d329f0() {
   return (neuron0x1d33170()*-0.191241);
}

double NNfunction_NG_4::synapse0x1d37e00() {
   return (neuron0x1d334b0()*2.26084);
}

double NNfunction_NG_4::synapse0x1d37e40() {
   return (neuron0x1d337f0()*0.0086333);
}

double NNfunction_NG_4::synapse0x1d37e80() {
   return (neuron0x1d33b30()*0.0215572);
}

double NNfunction_NG_4::synapse0x1d37ec0() {
   return (neuron0x1d33e70()*-0.0232808);
}

double NNfunction_NG_4::synapse0x1d37f00() {
   return (neuron0x1d341b0()*-0.00823166);
}

double NNfunction_NG_4::synapse0x1d37f40() {
   return (neuron0x1d344f0()*0.0335098);
}

double NNfunction_NG_4::synapse0x1d37f80() {
   return (neuron0x1d34830()*0.016836);
}

double NNfunction_NG_4::synapse0x1d37fc0() {
   return (neuron0x1d34b70()*-0.0184828);
}

double NNfunction_NG_4::synapse0x1d38000() {
   return (neuron0x1d34eb0()*-0.0938091);
}

double NNfunction_NG_4::synapse0x1d38040() {
   return (neuron0x1d351f0()*0.154319);
}

double NNfunction_NG_4::synapse0x1d38080() {
   return (neuron0x1d35530()*-0.00390489);
}

double NNfunction_NG_4::synapse0x1d380c0() {
   return (neuron0x1d35870()*-0.588026);
}

double NNfunction_NG_4::synapse0x1d38100() {
   return (neuron0x1d35bb0()*-0.00930274);
}

double NNfunction_NG_4::synapse0x1d32920() {
   return (neuron0x1d35ef0()*-0.0137643);
}

double NNfunction_NG_4::synapse0x1d32960() {
   return (neuron0x1d36450()*-0.0432748);
}

double NNfunction_NG_4::synapse0x1ae41c0() {
   return (neuron0x1d36670()*0.00363384);
}

double NNfunction_NG_4::synapse0x1ae4200() {
   return (neuron0x1d369b0()*0.0195879);
}

double NNfunction_NG_4::synapse0x1d38360() {
   return (neuron0x1d36cf0()*0.00407665);
}

double NNfunction_NG_4::synapse0x1d383a0() {
   return (neuron0x1d37030()*-0.0044035);
}

double NNfunction_NG_4::synapse0x1d383e0() {
   return (neuron0x1d37370()*-0.0189043);
}

double NNfunction_NG_4::synapse0x1d38420() {
   return (neuron0x1d376b0()*-0.194568);
}

double NNfunction_NG_4::synapse0x1d387a0() {
   return (neuron0x1d32af0()*-0.00557128);
}

double NNfunction_NG_4::synapse0x1d387e0() {
   return (neuron0x1d32e30()*0.523485);
}

double NNfunction_NG_4::synapse0x1d38820() {
   return (neuron0x1d33170()*0.306535);
}

double NNfunction_NG_4::synapse0x1d38860() {
   return (neuron0x1d334b0()*-0.795005);
}

double NNfunction_NG_4::synapse0x1d388a0() {
   return (neuron0x1d337f0()*0.0102048);
}

double NNfunction_NG_4::synapse0x1d388e0() {
   return (neuron0x1d33b30()*0.00109445);
}

double NNfunction_NG_4::synapse0x1d38920() {
   return (neuron0x1d33e70()*-0.0100077);
}

double NNfunction_NG_4::synapse0x1d38960() {
   return (neuron0x1d341b0()*-0.0245995);
}

double NNfunction_NG_4::synapse0x1d389a0() {
   return (neuron0x1d344f0()*0.0140657);
}

double NNfunction_NG_4::synapse0x1d38250() {
   return (neuron0x1d34830()*0.00918226);
}

double NNfunction_NG_4::synapse0x1d38290() {
   return (neuron0x1d34b70()*-0.0178638);
}

double NNfunction_NG_4::synapse0x1d382d0() {
   return (neuron0x1d34eb0()*-2.10111);
}

double NNfunction_NG_4::synapse0x1d38310() {
   return (neuron0x1d351f0()*0.21207);
}

double NNfunction_NG_4::synapse0x1d38bf0() {
   return (neuron0x1d35530()*0.0496201);
}

double NNfunction_NG_4::synapse0x1d38c30() {
   return (neuron0x1d35870()*0.189867);
}

double NNfunction_NG_4::synapse0x1d38c70() {
   return (neuron0x1d35bb0()*-0.0367432);
}

double NNfunction_NG_4::synapse0x1d385f0() {
   return (neuron0x1d35ef0()*-0.0480196);
}

double NNfunction_NG_4::synapse0x1d38630() {
   return (neuron0x1d36450()*0.111549);
}

double NNfunction_NG_4::synapse0x1d38dc0() {
   return (neuron0x1d36670()*0.0113305);
}

double NNfunction_NG_4::synapse0x1d38e00() {
   return (neuron0x1d369b0()*-0.0196808);
}

double NNfunction_NG_4::synapse0x1d38e40() {
   return (neuron0x1d36cf0()*-0.00564366);
}

double NNfunction_NG_4::synapse0x1d38e80() {
   return (neuron0x1d37030()*-0.00952643);
}

double NNfunction_NG_4::synapse0x1d38ec0() {
   return (neuron0x1d37370()*0.0109054);
}

double NNfunction_NG_4::synapse0x1d38f00() {
   return (neuron0x1d376b0()*0.129693);
}

double NNfunction_NG_4::synapse0x1d39280() {
   return (neuron0x1d32af0()*0.0725663);
}

double NNfunction_NG_4::synapse0x1d392c0() {
   return (neuron0x1d32e30()*3.4104);
}

double NNfunction_NG_4::synapse0x1d39300() {
   return (neuron0x1d33170()*-0.34167);
}

double NNfunction_NG_4::synapse0x1d39340() {
   return (neuron0x1d334b0()*-0.153643);
}

double NNfunction_NG_4::synapse0x1d39380() {
   return (neuron0x1d337f0()*0.034381);
}

double NNfunction_NG_4::synapse0x1d393c0() {
   return (neuron0x1d33b30()*-0.0350737);
}

double NNfunction_NG_4::synapse0x1d39400() {
   return (neuron0x1d33e70()*-0.0273974);
}

double NNfunction_NG_4::synapse0x1d39440() {
   return (neuron0x1d341b0()*-0.0294503);
}

double NNfunction_NG_4::synapse0x1d39480() {
   return (neuron0x1d344f0()*0.0304405);
}

double NNfunction_NG_4::synapse0x1d394c0() {
   return (neuron0x1d34830()*-0.00400388);
}

double NNfunction_NG_4::synapse0x1d39500() {
   return (neuron0x1d34b70()*0.0170055);
}

double NNfunction_NG_4::synapse0x1d39540() {
   return (neuron0x1d34eb0()*0.454972);
}

double NNfunction_NG_4::synapse0x1d39580() {
   return (neuron0x1d351f0()*0.0315088);
}

double NNfunction_NG_4::synapse0x1d395c0() {
   return (neuron0x1d35530()*-0.016189);
}

double NNfunction_NG_4::synapse0x1d39600() {
   return (neuron0x1d35870()*-0.340379);
}

double NNfunction_NG_4::synapse0x1d39640() {
   return (neuron0x1d35bb0()*0.0640161);
}

double NNfunction_NG_4::synapse0x1d390d0() {
   return (neuron0x1d35ef0()*-0.0219195);
}

double NNfunction_NG_4::synapse0x1d39110() {
   return (neuron0x1d36450()*-0.037241);
}

double NNfunction_NG_4::synapse0x1af2030() {
   return (neuron0x1d36670()*-0.0105585);
}

double NNfunction_NG_4::synapse0x1af2070() {
   return (neuron0x1d369b0()*-0.0620263);
}

double NNfunction_NG_4::synapse0x1d21b80() {
   return (neuron0x1d36cf0()*0.0664851);
}

double NNfunction_NG_4::synapse0x1d21bc0() {
   return (neuron0x1d37030()*0.0285736);
}

double NNfunction_NG_4::synapse0x1d21c00() {
   return (neuron0x1d37370()*0.00391606);
}

double NNfunction_NG_4::synapse0x1d32a30() {
   return (neuron0x1d376b0()*-0.795719);
}

double NNfunction_NG_4::synapse0x1d38b90() {
   return (neuron0x1d32af0()*-0.0488173);
}

double NNfunction_NG_4::synapse0x1d32a70() {
   return (neuron0x1d32e30()*3.02091);
}

double NNfunction_NG_4::synapse0x1d32ab0() {
   return (neuron0x1d33170()*-1.85165);
}

double NNfunction_NG_4::synapse0x1d39790() {
   return (neuron0x1d334b0()*0.0257228);
}

double NNfunction_NG_4::synapse0x1d397d0() {
   return (neuron0x1d337f0()*-0.0186246);
}

double NNfunction_NG_4::synapse0x1d39810() {
   return (neuron0x1d33b30()*0.0617652);
}

double NNfunction_NG_4::synapse0x1d39850() {
   return (neuron0x1d33e70()*0.0183359);
}

double NNfunction_NG_4::synapse0x1d39890() {
   return (neuron0x1d341b0()*0.0122728);
}

double NNfunction_NG_4::synapse0x1d398d0() {
   return (neuron0x1d344f0()*-0.0221696);
}

double NNfunction_NG_4::synapse0x1d39910() {
   return (neuron0x1d34830()*0.041235);
}

double NNfunction_NG_4::synapse0x1d39950() {
   return (neuron0x1d34b70()*-0.00218623);
}

double NNfunction_NG_4::synapse0x1d39990() {
   return (neuron0x1d34eb0()*-0.146961);
}

double NNfunction_NG_4::synapse0x1d399d0() {
   return (neuron0x1d351f0()*-0.139279);
}

double NNfunction_NG_4::synapse0x1d39a10() {
   return (neuron0x1d35530()*0.0342526);
}

double NNfunction_NG_4::synapse0x1d39a50() {
   return (neuron0x1d35870()*0.0348593);
}

double NNfunction_NG_4::synapse0x1d39a90() {
   return (neuron0x1d35bb0()*-0.0222968);
}

double NNfunction_NG_4::synapse0x1d389e0() {
   return (neuron0x1d35ef0()*-0.0338933);
}

double NNfunction_NG_4::synapse0x1d38a20() {
   return (neuron0x1d36450()*-0.0647075);
}

double NNfunction_NG_4::synapse0x1d39be0() {
   return (neuron0x1d36670()*0.00474842);
}

double NNfunction_NG_4::synapse0x1d39c20() {
   return (neuron0x1d369b0()*-0.00743656);
}

double NNfunction_NG_4::synapse0x1d39c60() {
   return (neuron0x1d36cf0()*-0.0417285);
}

double NNfunction_NG_4::synapse0x1d39ca0() {
   return (neuron0x1d37030()*0.0190738);
}

double NNfunction_NG_4::synapse0x1d39ce0() {
   return (neuron0x1d37370()*0.0425202);
}

double NNfunction_NG_4::synapse0x1d39d20() {
   return (neuron0x1d376b0()*-0.935076);
}

double NNfunction_NG_4::synapse0x1d3a0a0() {
   return (neuron0x1d32af0()*0.105059);
}

double NNfunction_NG_4::synapse0x1d3a0e0() {
   return (neuron0x1d32e30()*0.357145);
}

double NNfunction_NG_4::synapse0x1d3a120() {
   return (neuron0x1d33170()*0.0268367);
}

double NNfunction_NG_4::synapse0x1d3a160() {
   return (neuron0x1d334b0()*-0.305769);
}

double NNfunction_NG_4::synapse0x1d3a1a0() {
   return (neuron0x1d337f0()*0.508535);
}

double NNfunction_NG_4::synapse0x1d3a1e0() {
   return (neuron0x1d33b30()*-0.0922082);
}

double NNfunction_NG_4::synapse0x1d3a220() {
   return (neuron0x1d33e70()*0.0984827);
}

double NNfunction_NG_4::synapse0x1d3a260() {
   return (neuron0x1d341b0()*-0.467625);
}

double NNfunction_NG_4::synapse0x1d3a2a0() {
   return (neuron0x1d344f0()*0.152489);
}

double NNfunction_NG_4::synapse0x1d3a2e0() {
   return (neuron0x1d34830()*-0.321673);
}

double NNfunction_NG_4::synapse0x1d3a320() {
   return (neuron0x1d34b70()*-0.49405);
}

double NNfunction_NG_4::synapse0x1d3a360() {
   return (neuron0x1d34eb0()*0.30352);
}

double NNfunction_NG_4::synapse0x1d3a3a0() {
   return (neuron0x1d351f0()*-0.162692);
}

double NNfunction_NG_4::synapse0x1d3a3e0() {
   return (neuron0x1d35530()*0.237892);
}

double NNfunction_NG_4::synapse0x1d3a420() {
   return (neuron0x1d35870()*-0.0920358);
}

double NNfunction_NG_4::synapse0x1d3a460() {
   return (neuron0x1d35bb0()*0.0682735);
}

double NNfunction_NG_4::synapse0x1d39ef0() {
   return (neuron0x1d35ef0()*-0.222846);
}

double NNfunction_NG_4::synapse0x1d39f30() {
   return (neuron0x1d36450()*0.00804978);
}

double NNfunction_NG_4::synapse0x1d3a5b0() {
   return (neuron0x1d36670()*-0.160466);
}

double NNfunction_NG_4::synapse0x1d3a5f0() {
   return (neuron0x1d369b0()*0.156537);
}

double NNfunction_NG_4::synapse0x1d3a630() {
   return (neuron0x1d36cf0()*-0.388621);
}

double NNfunction_NG_4::synapse0x1d3a670() {
   return (neuron0x1d37030()*-0.0483821);
}

double NNfunction_NG_4::synapse0x1d3a6b0() {
   return (neuron0x1d37370()*-0.0128272);
}

double NNfunction_NG_4::synapse0x1d3a6f0() {
   return (neuron0x1d376b0()*0.339787);
}

double NNfunction_NG_4::synapse0x1d3aa70() {
   return (neuron0x1d32af0()*-0.00763587);
}

double NNfunction_NG_4::synapse0x1d3aab0() {
   return (neuron0x1d32e30()*-0.136755);
}

double NNfunction_NG_4::synapse0x1d3aaf0() {
   return (neuron0x1d33170()*-0.562967);
}

double NNfunction_NG_4::synapse0x1d3ab30() {
   return (neuron0x1d334b0()*0.141042);
}

double NNfunction_NG_4::synapse0x1d3ab70() {
   return (neuron0x1d337f0()*0.00804081);
}

double NNfunction_NG_4::synapse0x1d3abb0() {
   return (neuron0x1d33b30()*0.00888788);
}

double NNfunction_NG_4::synapse0x1d3abf0() {
   return (neuron0x1d33e70()*-0.0297413);
}

double NNfunction_NG_4::synapse0x1d3ac30() {
   return (neuron0x1d341b0()*-0.0230628);
}

double NNfunction_NG_4::synapse0x1d3ac70() {
   return (neuron0x1d344f0()*0.00851303);
}

double NNfunction_NG_4::synapse0x1af23c0() {
   return (neuron0x1d34830()*0.00533413);
}

double NNfunction_NG_4::synapse0x1af2400() {
   return (neuron0x1d34b70()*-0.0365779);
}

double NNfunction_NG_4::synapse0x1af2440() {
   return (neuron0x1d34eb0()*0.0467571);
}

double NNfunction_NG_4::synapse0x1af2480() {
   return (neuron0x1d351f0()*0.0130241);
}

double NNfunction_NG_4::synapse0x1af24c0() {
   return (neuron0x1d35530()*0.0394887);
}

double NNfunction_NG_4::synapse0x1af2500() {
   return (neuron0x1d35870()*-0.321213);
}

double NNfunction_NG_4::synapse0x1af2540() {
   return (neuron0x1d35bb0()*-0.0240532);
}

double NNfunction_NG_4::synapse0x1d3a8c0() {
   return (neuron0x1d35ef0()*-0.0235773);
}

double NNfunction_NG_4::synapse0x1d3a900() {
   return (neuron0x1d36450()*-0.37268);
}

double NNfunction_NG_4::synapse0x1af2690() {
   return (neuron0x1d36670()*-0.0239407);
}

double NNfunction_NG_4::synapse0x1af26d0() {
   return (neuron0x1d369b0()*-0.0247091);
}

double NNfunction_NG_4::synapse0x1af2710() {
   return (neuron0x1d36cf0()*-0.0391365);
}

double NNfunction_NG_4::synapse0x1af2750() {
   return (neuron0x1d37030()*-0.0177269);
}

double NNfunction_NG_4::synapse0x1af2790() {
   return (neuron0x1d37370()*0.0223512);
}

double NNfunction_NG_4::synapse0x1d3b4c0() {
   return (neuron0x1d376b0()*0.366665);
}

double NNfunction_NG_4::synapse0x1d3b840() {
   return (neuron0x1d32af0()*-0.133613);
}

double NNfunction_NG_4::synapse0x1d3b880() {
   return (neuron0x1d32e30()*-2.29551);
}

double NNfunction_NG_4::synapse0x1d3b8c0() {
   return (neuron0x1d33170()*-0.354653);
}

double NNfunction_NG_4::synapse0x1d3b900() {
   return (neuron0x1d334b0()*2.45155);
}

double NNfunction_NG_4::synapse0x1d3b940() {
   return (neuron0x1d337f0()*-0.0511279);
}

double NNfunction_NG_4::synapse0x1d3b980() {
   return (neuron0x1d33b30()*-0.0372418);
}

double NNfunction_NG_4::synapse0x1d3b9c0() {
   return (neuron0x1d33e70()*0.0305167);
}

double NNfunction_NG_4::synapse0x1d3ba00() {
   return (neuron0x1d341b0()*-0.0263392);
}

double NNfunction_NG_4::synapse0x1d3ba40() {
   return (neuron0x1d344f0()*0.069191);
}

double NNfunction_NG_4::synapse0x1d3ba80() {
   return (neuron0x1d34830()*0.0105501);
}

double NNfunction_NG_4::synapse0x1d3bac0() {
   return (neuron0x1d34b70()*0.0464245);
}

double NNfunction_NG_4::synapse0x1d3bb00() {
   return (neuron0x1d34eb0()*-0.174814);
}

double NNfunction_NG_4::synapse0x1d3bb40() {
   return (neuron0x1d351f0()*0.0680654);
}

double NNfunction_NG_4::synapse0x1d3bb80() {
   return (neuron0x1d35530()*0.0817122);
}

double NNfunction_NG_4::synapse0x1d3bbc0() {
   return (neuron0x1d35870()*0.222284);
}

double NNfunction_NG_4::synapse0x1d3bc00() {
   return (neuron0x1d35bb0()*-0.0665088);
}

double NNfunction_NG_4::synapse0x1d3b690() {
   return (neuron0x1d35ef0()*0.068041);
}

double NNfunction_NG_4::synapse0x1d3b6d0() {
   return (neuron0x1d36450()*-0.143175);
}

double NNfunction_NG_4::synapse0x1d3bd50() {
   return (neuron0x1d36670()*0.00325817);
}

double NNfunction_NG_4::synapse0x1d3bd90() {
   return (neuron0x1d369b0()*0.0291792);
}

double NNfunction_NG_4::synapse0x1d3bdd0() {
   return (neuron0x1d36cf0()*-0.0216491);
}

double NNfunction_NG_4::synapse0x1d3be10() {
   return (neuron0x1d37030()*0.0139501);
}

double NNfunction_NG_4::synapse0x1d3be50() {
   return (neuron0x1d37370()*0.00695665);
}

double NNfunction_NG_4::synapse0x1d3be90() {
   return (neuron0x1d376b0()*0.297097);
}

double NNfunction_NG_4::synapse0x1d3c210() {
   return (neuron0x1d32af0()*-0.0560627);
}

double NNfunction_NG_4::synapse0x1d3c250() {
   return (neuron0x1d32e30()*-1.6418);
}

double NNfunction_NG_4::synapse0x1d3c290() {
   return (neuron0x1d33170()*-1.05565);
}

double NNfunction_NG_4::synapse0x1d3c2d0() {
   return (neuron0x1d334b0()*-0.111971);
}

double NNfunction_NG_4::synapse0x1d3c310() {
   return (neuron0x1d337f0()*0.00985834);
}

double NNfunction_NG_4::synapse0x1d3c350() {
   return (neuron0x1d33b30()*0.03358);
}

double NNfunction_NG_4::synapse0x1d3c390() {
   return (neuron0x1d33e70()*0.0472375);
}

double NNfunction_NG_4::synapse0x1d3c3d0() {
   return (neuron0x1d341b0()*0.0029259);
}

double NNfunction_NG_4::synapse0x1d3c410() {
   return (neuron0x1d344f0()*0.0226458);
}

double NNfunction_NG_4::synapse0x1d3c450() {
   return (neuron0x1d34830()*0.00114402);
}

double NNfunction_NG_4::synapse0x1d3c490() {
   return (neuron0x1d34b70()*0.0330112);
}

double NNfunction_NG_4::synapse0x1d3c4d0() {
   return (neuron0x1d34eb0()*0.713456);
}

double NNfunction_NG_4::synapse0x1d3c510() {
   return (neuron0x1d351f0()*-0.0853222);
}

double NNfunction_NG_4::synapse0x1d3c550() {
   return (neuron0x1d35530()*0.00900608);
}

double NNfunction_NG_4::synapse0x1d3c590() {
   return (neuron0x1d35870()*-0.439618);
}

double NNfunction_NG_4::synapse0x1d3c5d0() {
   return (neuron0x1d35bb0()*-0.006014);
}

double NNfunction_NG_4::synapse0x1d3c060() {
   return (neuron0x1d35ef0()*0.0456306);
}

double NNfunction_NG_4::synapse0x1d3c0a0() {
   return (neuron0x1d36450()*-0.224191);
}

double NNfunction_NG_4::synapse0x1d3c720() {
   return (neuron0x1d36670()*-0.0459834);
}

double NNfunction_NG_4::synapse0x1d3c760() {
   return (neuron0x1d369b0()*-0.0587874);
}

double NNfunction_NG_4::synapse0x1d3c7a0() {
   return (neuron0x1d36cf0()*-0.0137667);
}

double NNfunction_NG_4::synapse0x1d3c7e0() {
   return (neuron0x1d37030()*0.0387064);
}

double NNfunction_NG_4::synapse0x1d3c820() {
   return (neuron0x1d37370()*0.00710306);
}

double NNfunction_NG_4::synapse0x1d3c860() {
   return (neuron0x1d376b0()*0.325191);
}

double NNfunction_NG_4::synapse0x1d36340() {
   return (neuron0x1d32af0()*-0.0310305);
}

double NNfunction_NG_4::synapse0x1d36380() {
   return (neuron0x1d32e30()*-3.64266);
}

double NNfunction_NG_4::synapse0x1d363c0() {
   return (neuron0x1d33170()*-1.94152);
}

double NNfunction_NG_4::synapse0x1d36400() {
   return (neuron0x1d334b0()*-0.0195761);
}

double NNfunction_NG_4::synapse0x1d3cdf0() {
   return (neuron0x1d337f0()*-0.0158955);
}

double NNfunction_NG_4::synapse0x1d3ce30() {
   return (neuron0x1d33b30()*0.0132961);
}

double NNfunction_NG_4::synapse0x1d3ce70() {
   return (neuron0x1d33e70()*-0.00480879);
}

double NNfunction_NG_4::synapse0x1d3ceb0() {
   return (neuron0x1d341b0()*0.00069475);
}

double NNfunction_NG_4::synapse0x1d3cef0() {
   return (neuron0x1d344f0()*0.00147707);
}

double NNfunction_NG_4::synapse0x1d3cf30() {
   return (neuron0x1d34830()*-0.00550652);
}

double NNfunction_NG_4::synapse0x1d3cf70() {
   return (neuron0x1d34b70()*-0.00776258);
}

double NNfunction_NG_4::synapse0x1d3cfb0() {
   return (neuron0x1d34eb0()*-0.163574);
}

double NNfunction_NG_4::synapse0x1d3cff0() {
   return (neuron0x1d351f0()*-0.0491955);
}

double NNfunction_NG_4::synapse0x1d3d030() {
   return (neuron0x1d35530()*-0.013984);
}

double NNfunction_NG_4::synapse0x1d3d070() {
   return (neuron0x1d35870()*0.175373);
}

double NNfunction_NG_4::synapse0x1d3d0b0() {
   return (neuron0x1d35bb0()*0.00249135);
}

double NNfunction_NG_4::synapse0x1d3ca30() {
   return (neuron0x1d35ef0()*0.0190376);
}

double NNfunction_NG_4::synapse0x1d3ca70() {
   return (neuron0x1d36450()*0.0469855);
}

double NNfunction_NG_4::synapse0x1d3d200() {
   return (neuron0x1d36670()*0.00365553);
}

double NNfunction_NG_4::synapse0x1d3d240() {
   return (neuron0x1d369b0()*-0.0112272);
}

double NNfunction_NG_4::synapse0x1d3d280() {
   return (neuron0x1d36cf0()*-0.003375);
}

double NNfunction_NG_4::synapse0x1d3d2c0() {
   return (neuron0x1d37030()*-0.00434168);
}

double NNfunction_NG_4::synapse0x1d3d300() {
   return (neuron0x1d37370()*-0.00151841);
}

double NNfunction_NG_4::synapse0x1d3d340() {
   return (neuron0x1d376b0()*-0.0143271);
}

double NNfunction_NG_4::synapse0x1d3d6c0() {
   return (neuron0x1d32af0()*-0.0202622);
}

double NNfunction_NG_4::synapse0x1d3d700() {
   return (neuron0x1d32e30()*0.00869667);
}

double NNfunction_NG_4::synapse0x1d3d740() {
   return (neuron0x1d33170()*-0.0841505);
}

double NNfunction_NG_4::synapse0x1d3d780() {
   return (neuron0x1d334b0()*-1.46193);
}

double NNfunction_NG_4::synapse0x1d3d7c0() {
   return (neuron0x1d337f0()*0.000731605);
}

double NNfunction_NG_4::synapse0x1d3d800() {
   return (neuron0x1d33b30()*-0.00944464);
}

double NNfunction_NG_4::synapse0x1d3d840() {
   return (neuron0x1d33e70()*-0.00554011);
}

double NNfunction_NG_4::synapse0x1d3d880() {
   return (neuron0x1d341b0()*-0.00610774);
}

double NNfunction_NG_4::synapse0x1d3d8c0() {
   return (neuron0x1d344f0()*-0.0115718);
}

double NNfunction_NG_4::synapse0x1d3d900() {
   return (neuron0x1d34830()*0.00626691);
}

double NNfunction_NG_4::synapse0x1d3d940() {
   return (neuron0x1d34b70()*-0.0116847);
}

double NNfunction_NG_4::synapse0x1d3d980() {
   return (neuron0x1d34eb0()*-0.051212);
}

double NNfunction_NG_4::synapse0x1d3d9c0() {
   return (neuron0x1d351f0()*0.00472186);
}

double NNfunction_NG_4::synapse0x1d3da00() {
   return (neuron0x1d35530()*-0.00191152);
}

double NNfunction_NG_4::synapse0x1d3da40() {
   return (neuron0x1d35870()*-0.105696);
}

double NNfunction_NG_4::synapse0x1d3da80() {
   return (neuron0x1d35bb0()*0.00564188);
}

double NNfunction_NG_4::synapse0x1d3d510() {
   return (neuron0x1d35ef0()*-0.00321853);
}

double NNfunction_NG_4::synapse0x1d3d550() {
   return (neuron0x1d36450()*-0.0246381);
}

double NNfunction_NG_4::synapse0x1d3dbd0() {
   return (neuron0x1d36670()*0.000620415);
}

double NNfunction_NG_4::synapse0x1d3dc10() {
   return (neuron0x1d369b0()*-0.00333256);
}

double NNfunction_NG_4::synapse0x1d3dc50() {
   return (neuron0x1d36cf0()*-0.00648964);
}

double NNfunction_NG_4::synapse0x1d3dc90() {
   return (neuron0x1d37030()*0.00202212);
}

double NNfunction_NG_4::synapse0x1d3dcd0() {
   return (neuron0x1d37370()*0.000464178);
}

double NNfunction_NG_4::synapse0x1d3dd10() {
   return (neuron0x1d376b0()*0.171347);
}

double NNfunction_NG_4::synapse0x1d3e090() {
   return (neuron0x1d32af0()*0.00146751);
}

double NNfunction_NG_4::synapse0x1d3e0d0() {
   return (neuron0x1d32e30()*-7.00959);
}

double NNfunction_NG_4::synapse0x1d3e110() {
   return (neuron0x1d33170()*-3.79225);
}

double NNfunction_NG_4::synapse0x1d3e150() {
   return (neuron0x1d334b0()*0.00264494);
}

double NNfunction_NG_4::synapse0x1d3e190() {
   return (neuron0x1d337f0()*-0.000471383);
}

double NNfunction_NG_4::synapse0x1d3e1d0() {
   return (neuron0x1d33b30()*0.0121353);
}

double NNfunction_NG_4::synapse0x1d3e210() {
   return (neuron0x1d33e70()*-0.0129335);
}

double NNfunction_NG_4::synapse0x1d3e250() {
   return (neuron0x1d341b0()*0.00689747);
}

double NNfunction_NG_4::synapse0x1d3e290() {
   return (neuron0x1d344f0()*0.00973012);
}

double NNfunction_NG_4::synapse0x1d3e2d0() {
   return (neuron0x1d34830()*0.0247405);
}

double NNfunction_NG_4::synapse0x1d3e310() {
   return (neuron0x1d34b70()*0.019721);
}

double NNfunction_NG_4::synapse0x1d3e350() {
   return (neuron0x1d34eb0()*0.33795);
}

double NNfunction_NG_4::synapse0x1d3e390() {
   return (neuron0x1d351f0()*0.00178175);
}

double NNfunction_NG_4::synapse0x1d3e3d0() {
   return (neuron0x1d35530()*0.0101763);
}

double NNfunction_NG_4::synapse0x1d3e410() {
   return (neuron0x1d35870()*-0.201893);
}

double NNfunction_NG_4::synapse0x1d3e450() {
   return (neuron0x1d35bb0()*-0.0240958);
}

double NNfunction_NG_4::synapse0x1d3dee0() {
   return (neuron0x1d35ef0()*0.042189);
}

double NNfunction_NG_4::synapse0x1d3df20() {
   return (neuron0x1d36450()*-0.0813923);
}

double NNfunction_NG_4::synapse0x1d3acb0() {
   return (neuron0x1d36670()*0.0110195);
}

double NNfunction_NG_4::synapse0x1d3acf0() {
   return (neuron0x1d369b0()*-0.00660643);
}

double NNfunction_NG_4::synapse0x1d3ad30() {
   return (neuron0x1d36cf0()*-0.00784722);
}

double NNfunction_NG_4::synapse0x1d3ad70() {
   return (neuron0x1d37030()*0.00980714);
}

double NNfunction_NG_4::synapse0x1d3adb0() {
   return (neuron0x1d37370()*0.0108384);
}

double NNfunction_NG_4::synapse0x1d3adf0() {
   return (neuron0x1d376b0()*-1.6617);
}

double NNfunction_NG_4::synapse0x1d3b170() {
   return (neuron0x1d32af0()*0.0262097);
}

double NNfunction_NG_4::synapse0x1d3b1b0() {
   return (neuron0x1d32e30()*-0.333656);
}

double NNfunction_NG_4::synapse0x1d3b1f0() {
   return (neuron0x1d33170()*-0.460116);
}

double NNfunction_NG_4::synapse0x1d3b230() {
   return (neuron0x1d334b0()*-2.91046);
}

double NNfunction_NG_4::synapse0x1d3b270() {
   return (neuron0x1d337f0()*-0.0624754);
}

double NNfunction_NG_4::synapse0x1d3b2b0() {
   return (neuron0x1d33b30()*-0.0374973);
}

double NNfunction_NG_4::synapse0x1d3b2f0() {
   return (neuron0x1d33e70()*-0.0334262);
}

double NNfunction_NG_4::synapse0x1d3b330() {
   return (neuron0x1d341b0()*-0.00982502);
}

double NNfunction_NG_4::synapse0x1d3b370() {
   return (neuron0x1d344f0()*-0.00597488);
}

double NNfunction_NG_4::synapse0x1d3b3b0() {
   return (neuron0x1d34830()*0.0434089);
}

double NNfunction_NG_4::synapse0x1d3b3f0() {
   return (neuron0x1d34b70()*-0.0157986);
}

double NNfunction_NG_4::synapse0x1d3b430() {
   return (neuron0x1d34eb0()*0.156754);
}

double NNfunction_NG_4::synapse0x1d3b470() {
   return (neuron0x1d351f0()*-0.00609027);
}

double NNfunction_NG_4::synapse0x1d3f5b0() {
   return (neuron0x1d35530()*-0.0594437);
}

double NNfunction_NG_4::synapse0x1d3f5f0() {
   return (neuron0x1d35870()*-0.120971);
}

double NNfunction_NG_4::synapse0x1d3f630() {
   return (neuron0x1d35bb0()*-0.0273818);
}

double NNfunction_NG_4::synapse0x1d3afc0() {
   return (neuron0x1d35ef0()*-0.0382278);
}

double NNfunction_NG_4::synapse0x1d3b000() {
   return (neuron0x1d36450()*-0.0787944);
}

double NNfunction_NG_4::synapse0x1d3f780() {
   return (neuron0x1d36670()*-0.0430764);
}

double NNfunction_NG_4::synapse0x1d3f7c0() {
   return (neuron0x1d369b0()*0.00512806);
}

double NNfunction_NG_4::synapse0x1d3f800() {
   return (neuron0x1d36cf0()*0.00148418);
}

double NNfunction_NG_4::synapse0x1d3f840() {
   return (neuron0x1d37030()*0.0444808);
}

double NNfunction_NG_4::synapse0x1d3f880() {
   return (neuron0x1d37370()*-0.0277096);
}

double NNfunction_NG_4::synapse0x1d3f8c0() {
   return (neuron0x1d376b0()*0.229486);
}

double NNfunction_NG_4::synapse0x1d3fc40() {
   return (neuron0x1d32af0()*-0.0102047);
}

double NNfunction_NG_4::synapse0x1d3fc80() {
   return (neuron0x1d32e30()*0.102999);
}

double NNfunction_NG_4::synapse0x1d3fcc0() {
   return (neuron0x1d33170()*0.00433832);
}

double NNfunction_NG_4::synapse0x1d3fd00() {
   return (neuron0x1d334b0()*-2.43573);
}

double NNfunction_NG_4::synapse0x1d3fd40() {
   return (neuron0x1d337f0()*0.0104177);
}

double NNfunction_NG_4::synapse0x1d3fd80() {
   return (neuron0x1d33b30()*-0.0043585);
}

double NNfunction_NG_4::synapse0x1d3fdc0() {
   return (neuron0x1d33e70()*0.00162525);
}

double NNfunction_NG_4::synapse0x1d3fe00() {
   return (neuron0x1d341b0()*0.0051872);
}

double NNfunction_NG_4::synapse0x1d3fe40() {
   return (neuron0x1d344f0()*-0.00347012);
}

double NNfunction_NG_4::synapse0x1d3fe80() {
   return (neuron0x1d34830()*-0.000119731);
}

double NNfunction_NG_4::synapse0x1d3fec0() {
   return (neuron0x1d34b70()*-0.00278555);
}

double NNfunction_NG_4::synapse0x1d3ff00() {
   return (neuron0x1d34eb0()*-0.0099058);
}

double NNfunction_NG_4::synapse0x1d3ff40() {
   return (neuron0x1d351f0()*-0.03528);
}

double NNfunction_NG_4::synapse0x1d3ff80() {
   return (neuron0x1d35530()*-0.00400227);
}

double NNfunction_NG_4::synapse0x1d3ffc0() {
   return (neuron0x1d35870()*-0.0421722);
}

double NNfunction_NG_4::synapse0x1d40000() {
   return (neuron0x1d35bb0()*-0.01608);
}

double NNfunction_NG_4::synapse0x1d3fa90() {
   return (neuron0x1d35ef0()*-0.00742484);
}

double NNfunction_NG_4::synapse0x1d3fad0() {
   return (neuron0x1d36450()*0.0138874);
}

double NNfunction_NG_4::synapse0x1d40150() {
   return (neuron0x1d36670()*-0.00302312);
}

double NNfunction_NG_4::synapse0x1d40190() {
   return (neuron0x1d369b0()*-0.00969526);
}

double NNfunction_NG_4::synapse0x1d401d0() {
   return (neuron0x1d36cf0()*0.000410901);
}

double NNfunction_NG_4::synapse0x1d40210() {
   return (neuron0x1d37030()*-0.00270459);
}

double NNfunction_NG_4::synapse0x1d40250() {
   return (neuron0x1d37370()*0.00591106);
}

double NNfunction_NG_4::synapse0x1d40290() {
   return (neuron0x1d376b0()*0.0542147);
}

double NNfunction_NG_4::synapse0x1d40610() {
   return (neuron0x1d32af0()*-0.0316461);
}

double NNfunction_NG_4::synapse0x1d40650() {
   return (neuron0x1d32e30()*-0.0435492);
}

double NNfunction_NG_4::synapse0x1d40690() {
   return (neuron0x1d33170()*0.255882);
}

double NNfunction_NG_4::synapse0x1d406d0() {
   return (neuron0x1d334b0()*1.03893);
}

double NNfunction_NG_4::synapse0x1d40710() {
   return (neuron0x1d337f0()*0.00552323);
}

double NNfunction_NG_4::synapse0x1d40750() {
   return (neuron0x1d33b30()*-0.0174078);
}

double NNfunction_NG_4::synapse0x1d40790() {
   return (neuron0x1d33e70()*-0.000249367);
}

double NNfunction_NG_4::synapse0x1d407d0() {
   return (neuron0x1d341b0()*-0.00496709);
}

double NNfunction_NG_4::synapse0x1d40810() {
   return (neuron0x1d344f0()*-0.0196011);
}

double NNfunction_NG_4::synapse0x1d40850() {
   return (neuron0x1d34830()*0.00896822);
}

double NNfunction_NG_4::synapse0x1d40890() {
   return (neuron0x1d34b70()*-0.0101842);
}

double NNfunction_NG_4::synapse0x1d408d0() {
   return (neuron0x1d34eb0()*0.00787356);
}

double NNfunction_NG_4::synapse0x1d40910() {
   return (neuron0x1d351f0()*-0.00210661);
}

double NNfunction_NG_4::synapse0x1d40950() {
   return (neuron0x1d35530()*0.00107311);
}

double NNfunction_NG_4::synapse0x1d40990() {
   return (neuron0x1d35870()*-0.167316);
}

double NNfunction_NG_4::synapse0x1d409d0() {
   return (neuron0x1d35bb0()*0.00771904);
}

double NNfunction_NG_4::synapse0x1d40460() {
   return (neuron0x1d35ef0()*-0.00911578);
}

double NNfunction_NG_4::synapse0x1d404a0() {
   return (neuron0x1d36450()*-0.010463);
}

double NNfunction_NG_4::synapse0x1d40b20() {
   return (neuron0x1d36670()*0.0112442);
}

double NNfunction_NG_4::synapse0x1d40b60() {
   return (neuron0x1d369b0()*-0.0113153);
}

double NNfunction_NG_4::synapse0x1d40ba0() {
   return (neuron0x1d36cf0()*-0.00248691);
}

double NNfunction_NG_4::synapse0x1d40be0() {
   return (neuron0x1d37030()*-0.000139204);
}

double NNfunction_NG_4::synapse0x1d40c20() {
   return (neuron0x1d37370()*0.00895224);
}

double NNfunction_NG_4::synapse0x1d40c60() {
   return (neuron0x1d376b0()*0.307074);
}

double NNfunction_NG_4::synapse0x1d40fe0() {
   return (neuron0x1d32af0()*-0.00991005);
}

double NNfunction_NG_4::synapse0x1d41020() {
   return (neuron0x1d32e30()*0.0366801);
}

double NNfunction_NG_4::synapse0x1d41060() {
   return (neuron0x1d33170()*0.0824118);
}

double NNfunction_NG_4::synapse0x1d410a0() {
   return (neuron0x1d334b0()*-9.95802);
}

double NNfunction_NG_4::synapse0x1d410e0() {
   return (neuron0x1d337f0()*0.00315536);
}

double NNfunction_NG_4::synapse0x1d41120() {
   return (neuron0x1d33b30()*-0.00745569);
}

double NNfunction_NG_4::synapse0x1d41160() {
   return (neuron0x1d33e70()*-0.00749013);
}

double NNfunction_NG_4::synapse0x1d411a0() {
   return (neuron0x1d341b0()*-0.00736236);
}

double NNfunction_NG_4::synapse0x1d411e0() {
   return (neuron0x1d344f0()*-0.011298);
}

double NNfunction_NG_4::synapse0x1d41220() {
   return (neuron0x1d34830()*-0.00263327);
}

double NNfunction_NG_4::synapse0x1d41260() {
   return (neuron0x1d34b70()*-0.00131554);
}

double NNfunction_NG_4::synapse0x1d412a0() {
   return (neuron0x1d34eb0()*0.0193313);
}

double NNfunction_NG_4::synapse0x1d412e0() {
   return (neuron0x1d351f0()*0.0233341);
}

double NNfunction_NG_4::synapse0x1d41320() {
   return (neuron0x1d35530()*0.00726563);
}

double NNfunction_NG_4::synapse0x1d41360() {
   return (neuron0x1d35870()*-0.0314467);
}

double NNfunction_NG_4::synapse0x1d413a0() {
   return (neuron0x1d35bb0()*-0.0183166);
}

double NNfunction_NG_4::synapse0x1d40e30() {
   return (neuron0x1d35ef0()*-0.0205821);
}

double NNfunction_NG_4::synapse0x1d40e70() {
   return (neuron0x1d36450()*0.0442106);
}

double NNfunction_NG_4::synapse0x1d414f0() {
   return (neuron0x1d36670()*-0.0139332);
}

double NNfunction_NG_4::synapse0x1d41530() {
   return (neuron0x1d369b0()*-0.00146265);
}

double NNfunction_NG_4::synapse0x1d41570() {
   return (neuron0x1d36cf0()*0.0101671);
}

double NNfunction_NG_4::synapse0x1d415b0() {
   return (neuron0x1d37030()*-0.0117269);
}

double NNfunction_NG_4::synapse0x1d415f0() {
   return (neuron0x1d37370()*0.0109232);
}

double NNfunction_NG_4::synapse0x1d41630() {
   return (neuron0x1d376b0()*0.00505167);
}

double NNfunction_NG_4::synapse0x1d419b0() {
   return (neuron0x1d32af0()*-0.0169466);
}

double NNfunction_NG_4::synapse0x1d32d10() {
   return (neuron0x1d32e30()*-0.0836605);
}

double NNfunction_NG_4::synapse0x1d32d50() {
   return (neuron0x1d33170()*-0.393);
}

double NNfunction_NG_4::synapse0x1d33050() {
   return (neuron0x1d334b0()*0.0937343);
}

double NNfunction_NG_4::synapse0x1d33090() {
   return (neuron0x1d337f0()*-0.029291);
}

double NNfunction_NG_4::synapse0x1d33390() {
   return (neuron0x1d33b30()*0.00376793);
}

double NNfunction_NG_4::synapse0x1d333d0() {
   return (neuron0x1d33e70()*0.00768713);
}

double NNfunction_NG_4::synapse0x1d336d0() {
   return (neuron0x1d341b0()*0.031213);
}

double NNfunction_NG_4::synapse0x1d33710() {
   return (neuron0x1d344f0()*-0.0376807);
}

double NNfunction_NG_4::synapse0x1d33a10() {
   return (neuron0x1d34830()*-0.0465309);
}

double NNfunction_NG_4::synapse0x1d33a50() {
   return (neuron0x1d34b70()*0.0286947);
}

double NNfunction_NG_4::synapse0x1d33d50() {
   return (neuron0x1d34eb0()*-0.319179);
}

double NNfunction_NG_4::synapse0x1d33d90() {
   return (neuron0x1d351f0()*0.0392221);
}

double NNfunction_NG_4::synapse0x1d34090() {
   return (neuron0x1d35530()*-0.019526);
}

double NNfunction_NG_4::synapse0x1d340d0() {
   return (neuron0x1d35870()*0.426855);
}

double NNfunction_NG_4::synapse0x1d343d0() {
   return (neuron0x1d35bb0()*0.00393813);
}

double NNfunction_NG_4::synapse0x1d34410() {
   return (neuron0x1d35ef0()*-0.00392824);
}

double NNfunction_NG_4::synapse0x1d34710() {
   return (neuron0x1d36450()*0.102904);
}

double NNfunction_NG_4::synapse0x1d34750() {
   return (neuron0x1d36670()*0.0212144);
}

double NNfunction_NG_4::synapse0x1d34a50() {
   return (neuron0x1d369b0()*-0.0347011);
}

double NNfunction_NG_4::synapse0x1d34a90() {
   return (neuron0x1d36cf0()*0.0389148);
}

double NNfunction_NG_4::synapse0x1d34d90() {
   return (neuron0x1d37030()*-0.0359414);
}

double NNfunction_NG_4::synapse0x1d34dd0() {
   return (neuron0x1d37370()*-0.0113602);
}

double NNfunction_NG_4::synapse0x1d350d0() {
   return (neuron0x1d376b0()*0.741891);
}

double NNfunction_NG_4::synapse0x1d35110() {
   return (neuron0x1d32af0()*-0.0307794);
}

double NNfunction_NG_4::synapse0x1d35dd0() {
   return (neuron0x1d32e30()*-0.512657);
}

double NNfunction_NG_4::synapse0x1d35e10() {
   return (neuron0x1d33170()*-0.715298);
}

double NNfunction_NG_4::synapse0x1d41800() {
   return (neuron0x1d334b0()*-0.424589);
}

double NNfunction_NG_4::synapse0x1d41840() {
   return (neuron0x1d337f0()*0.0580226);
}

double NNfunction_NG_4::synapse0x1d36110() {
   return (neuron0x1d33b30()*-0.0226052);
}

double NNfunction_NG_4::synapse0x1d36150() {
   return (neuron0x1d33e70()*-0.0313628);
}

double NNfunction_NG_4::synapse0x1ae40a0() {
   return (neuron0x1d341b0()*-0.0342237);
}

double NNfunction_NG_4::synapse0x1ae40e0() {
   return (neuron0x1d344f0()*0.0129456);
}

double NNfunction_NG_4::synapse0x1d36890() {
   return (neuron0x1d34830()*0.00570874);
}

double NNfunction_NG_4::synapse0x1d368d0() {
   return (neuron0x1d34b70()*-0.0357845);
}

double NNfunction_NG_4::synapse0x1d36bd0() {
   return (neuron0x1d34eb0()*0.643617);
}

double NNfunction_NG_4::synapse0x1d36c10() {
   return (neuron0x1d351f0()*0.00817178);
}

double NNfunction_NG_4::synapse0x1d36f10() {
   return (neuron0x1d35530()*-0.0126605);
}

double NNfunction_NG_4::synapse0x1d36f50() {
   return (neuron0x1d35870()*-0.36355);
}

double NNfunction_NG_4::synapse0x1d37250() {
   return (neuron0x1d35bb0()*-0.0435151);
}

double NNfunction_NG_4::synapse0x1d37290() {
   return (neuron0x1d35ef0()*-0.0222357);
}

double NNfunction_NG_4::synapse0x1d37590() {
   return (neuron0x1d36450()*-0.0735179);
}

double NNfunction_NG_4::synapse0x1d375d0() {
   return (neuron0x1d36670()*-0.00760696);
}

double NNfunction_NG_4::synapse0x1d378d0() {
   return (neuron0x1d369b0()*0.0212703);
}

double NNfunction_NG_4::synapse0x1d37910() {
   return (neuron0x1d36cf0()*-0.0177489);
}

double NNfunction_NG_4::synapse0x1d35410() {
   return (neuron0x1d37030()*-0.0536463);
}

double NNfunction_NG_4::synapse0x1d35450() {
   return (neuron0x1d37370()*-0.0191134);
}

double NNfunction_NG_4::synapse0x1d43720() {
   return (neuron0x1d376b0()*-0.644154);
}

double NNfunction_NG_4::synapse0x1d43aa0() {
   return (neuron0x1d32af0()*0.434445);
}

double NNfunction_NG_4::synapse0x1d43ae0() {
   return (neuron0x1d32e30()*0.256091);
}

double NNfunction_NG_4::synapse0x1d43b20() {
   return (neuron0x1d33170()*-0.246299);
}

double NNfunction_NG_4::synapse0x1d43b60() {
   return (neuron0x1d334b0()*0.13056);
}

double NNfunction_NG_4::synapse0x1d43ba0() {
   return (neuron0x1d337f0()*-0.0957856);
}

double NNfunction_NG_4::synapse0x1d43be0() {
   return (neuron0x1d33b30()*0.0274429);
}

double NNfunction_NG_4::synapse0x1d43c20() {
   return (neuron0x1d33e70()*-0.0241202);
}

double NNfunction_NG_4::synapse0x1d43c60() {
   return (neuron0x1d341b0()*-0.460023);
}

double NNfunction_NG_4::synapse0x1d43ca0() {
   return (neuron0x1d344f0()*-0.0770092);
}

double NNfunction_NG_4::synapse0x1d43ce0() {
   return (neuron0x1d34830()*0.289846);
}

double NNfunction_NG_4::synapse0x1d43d20() {
   return (neuron0x1d34b70()*-0.404349);
}

double NNfunction_NG_4::synapse0x1d43d60() {
   return (neuron0x1d34eb0()*0.227258);
}

double NNfunction_NG_4::synapse0x1d43da0() {
   return (neuron0x1d351f0()*-0.0100946);
}

double NNfunction_NG_4::synapse0x1d43de0() {
   return (neuron0x1d35530()*0.545243);
}

double NNfunction_NG_4::synapse0x1d43e20() {
   return (neuron0x1d35870()*-0.139969);
}

double NNfunction_NG_4::synapse0x1d43e60() {
   return (neuron0x1d35bb0()*0.170916);
}

double NNfunction_NG_4::synapse0x1d438f0() {
   return (neuron0x1d35ef0()*0.083977);
}

double NNfunction_NG_4::synapse0x1d43930() {
   return (neuron0x1d36450()*-0.0156844);
}

double NNfunction_NG_4::synapse0x1d43fb0() {
   return (neuron0x1d36670()*0.0450035);
}

double NNfunction_NG_4::synapse0x1d43ff0() {
   return (neuron0x1d369b0()*0.00513538);
}

double NNfunction_NG_4::synapse0x1d44030() {
   return (neuron0x1d36cf0()*-0.244103);
}

double NNfunction_NG_4::synapse0x1d44070() {
   return (neuron0x1d37030()*-0.351307);
}

double NNfunction_NG_4::synapse0x1d440b0() {
   return (neuron0x1d37370()*-0.280639);
}

double NNfunction_NG_4::synapse0x1d440f0() {
   return (neuron0x1d376b0()*-0.348787);
}

double NNfunction_NG_4::synapse0x1d44470() {
   return (neuron0x1d32af0()*-0.0277755);
}

double NNfunction_NG_4::synapse0x1d444b0() {
   return (neuron0x1d32e30()*-2.05722);
}

double NNfunction_NG_4::synapse0x1d444f0() {
   return (neuron0x1d33170()*-0.720393);
}

double NNfunction_NG_4::synapse0x1d44530() {
   return (neuron0x1d334b0()*-0.0528792);
}

double NNfunction_NG_4::synapse0x1d44570() {
   return (neuron0x1d337f0()*0.0341704);
}

double NNfunction_NG_4::synapse0x1d445b0() {
   return (neuron0x1d33b30()*0.00157696);
}

double NNfunction_NG_4::synapse0x1d445f0() {
   return (neuron0x1d33e70()*-0.0116087);
}

double NNfunction_NG_4::synapse0x1d44630() {
   return (neuron0x1d341b0()*-0.00930083);
}

double NNfunction_NG_4::synapse0x1d44670() {
   return (neuron0x1d344f0()*-0.000256661);
}

double NNfunction_NG_4::synapse0x1d446b0() {
   return (neuron0x1d34830()*0.0107475);
}

double NNfunction_NG_4::synapse0x1d446f0() {
   return (neuron0x1d34b70()*0.0111532);
}

double NNfunction_NG_4::synapse0x1d44730() {
   return (neuron0x1d34eb0()*0.240071);
}

double NNfunction_NG_4::synapse0x1d44770() {
   return (neuron0x1d351f0()*0.00817358);
}

double NNfunction_NG_4::synapse0x1d447b0() {
   return (neuron0x1d35530()*-0.0116286);
}

double NNfunction_NG_4::synapse0x1d447f0() {
   return (neuron0x1d35870()*-0.244639);
}

double NNfunction_NG_4::synapse0x1d44830() {
   return (neuron0x1d35bb0()*-0.0119557);
}

double NNfunction_NG_4::synapse0x1d442c0() {
   return (neuron0x1d35ef0()*0.0148096);
}

double NNfunction_NG_4::synapse0x1d44300() {
   return (neuron0x1d36450()*-0.00998256);
}

double NNfunction_NG_4::synapse0x1d44980() {
   return (neuron0x1d36670()*0.0023553);
}

double NNfunction_NG_4::synapse0x1d449c0() {
   return (neuron0x1d369b0()*-0.0126707);
}

double NNfunction_NG_4::synapse0x1d44a00() {
   return (neuron0x1d36cf0()*0.0272958);
}

double NNfunction_NG_4::synapse0x1d44a40() {
   return (neuron0x1d37030()*-0.032022);
}

double NNfunction_NG_4::synapse0x1d44a80() {
   return (neuron0x1d37370()*-0.0297556);
}

double NNfunction_NG_4::synapse0x1d44ac0() {
   return (neuron0x1d376b0()*-2.72192);
}

double NNfunction_NG_4::synapse0x1d44e40() {
   return (neuron0x1d32af0()*0.0447338);
}

double NNfunction_NG_4::synapse0x1d44e80() {
   return (neuron0x1d32e30()*-4.17232);
}

double NNfunction_NG_4::synapse0x1d44ec0() {
   return (neuron0x1d33170()*1.46155);
}

double NNfunction_NG_4::synapse0x1d44f00() {
   return (neuron0x1d334b0()*-0.0208841);
}

double NNfunction_NG_4::synapse0x1d44f40() {
   return (neuron0x1d337f0()*0.0276313);
}

double NNfunction_NG_4::synapse0x1d44f80() {
   return (neuron0x1d33b30()*-0.000422699);
}

double NNfunction_NG_4::synapse0x1d44fc0() {
   return (neuron0x1d33e70()*0.00340933);
}

double NNfunction_NG_4::synapse0x1d45000() {
   return (neuron0x1d341b0()*-0.00844549);
}

double NNfunction_NG_4::synapse0x1d45040() {
   return (neuron0x1d344f0()*0.00368066);
}

double NNfunction_NG_4::synapse0x1d45080() {
   return (neuron0x1d34830()*0.0428483);
}

double NNfunction_NG_4::synapse0x1d450c0() {
   return (neuron0x1d34b70()*0.0167863);
}

double NNfunction_NG_4::synapse0x1d45100() {
   return (neuron0x1d34eb0()*0.254985);
}

double NNfunction_NG_4::synapse0x1d45140() {
   return (neuron0x1d351f0()*0.0128413);
}

double NNfunction_NG_4::synapse0x1d45180() {
   return (neuron0x1d35530()*0.0268413);
}

double NNfunction_NG_4::synapse0x1d451c0() {
   return (neuron0x1d35870()*-0.22189);
}

double NNfunction_NG_4::synapse0x1d45200() {
   return (neuron0x1d35bb0()*-0.00507791);
}

double NNfunction_NG_4::synapse0x1d44c90() {
   return (neuron0x1d35ef0()*0.00810029);
}

double NNfunction_NG_4::synapse0x1d44cd0() {
   return (neuron0x1d36450()*-0.0622526);
}

double NNfunction_NG_4::synapse0x1d45350() {
   return (neuron0x1d36670()*-0.0143405);
}

double NNfunction_NG_4::synapse0x1d45390() {
   return (neuron0x1d369b0()*0.00475869);
}

double NNfunction_NG_4::synapse0x1d453d0() {
   return (neuron0x1d36cf0()*0.0119318);
}

double NNfunction_NG_4::synapse0x1d45410() {
   return (neuron0x1d37030()*-0.00782815);
}

double NNfunction_NG_4::synapse0x1d45450() {
   return (neuron0x1d37370()*-0.00333083);
}

double NNfunction_NG_4::synapse0x1d45490() {
   return (neuron0x1d376b0()*-1.62716);
}

double NNfunction_NG_4::synapse0x1d45810() {
   return (neuron0x1d32af0()*-0.14782);
}

double NNfunction_NG_4::synapse0x1d45850() {
   return (neuron0x1d32e30()*-2.17013);
}

double NNfunction_NG_4::synapse0x1d45890() {
   return (neuron0x1d33170()*1.99227);
}

double NNfunction_NG_4::synapse0x1d458d0() {
   return (neuron0x1d334b0()*0.058738);
}

double NNfunction_NG_4::synapse0x1d45910() {
   return (neuron0x1d337f0()*-0.102112);
}

double NNfunction_NG_4::synapse0x1d45950() {
   return (neuron0x1d33b30()*0.0135147);
}

double NNfunction_NG_4::synapse0x1d45990() {
   return (neuron0x1d33e70()*0.0233392);
}

double NNfunction_NG_4::synapse0x1d459d0() {
   return (neuron0x1d341b0()*-0.00820827);
}

double NNfunction_NG_4::synapse0x1d45a10() {
   return (neuron0x1d344f0()*-0.0751817);
}

double NNfunction_NG_4::synapse0x1d45a50() {
   return (neuron0x1d34830()*0.0504329);
}

double NNfunction_NG_4::synapse0x1d45a90() {
   return (neuron0x1d34b70()*0.0294894);
}

double NNfunction_NG_4::synapse0x1d45ad0() {
   return (neuron0x1d34eb0()*0.0636939);
}

double NNfunction_NG_4::synapse0x1d45b10() {
   return (neuron0x1d351f0()*-0.0971946);
}

double NNfunction_NG_4::synapse0x1d45b50() {
   return (neuron0x1d35530()*0.0021295);
}

double NNfunction_NG_4::synapse0x1d45b90() {
   return (neuron0x1d35870()*0.68341);
}

double NNfunction_NG_4::synapse0x1d45bd0() {
   return (neuron0x1d35bb0()*0.083277);
}

double NNfunction_NG_4::synapse0x1d45660() {
   return (neuron0x1d35ef0()*0.0224336);
}

double NNfunction_NG_4::synapse0x1d456a0() {
   return (neuron0x1d36450()*-0.176774);
}

double NNfunction_NG_4::synapse0x1d45d20() {
   return (neuron0x1d36670()*0.0633572);
}

double NNfunction_NG_4::synapse0x1d45d60() {
   return (neuron0x1d369b0()*-0.0408215);
}

double NNfunction_NG_4::synapse0x1d45da0() {
   return (neuron0x1d36cf0()*0.0103119);
}

double NNfunction_NG_4::synapse0x1d45de0() {
   return (neuron0x1d37030()*0.000338352);
}

double NNfunction_NG_4::synapse0x1d45e20() {
   return (neuron0x1d37370()*-0.000500395);
}

double NNfunction_NG_4::synapse0x1d45e60() {
   return (neuron0x1d376b0()*1.0597);
}

double NNfunction_NG_4::synapse0x1d461e0() {
   return (neuron0x1d32af0()*0.00518285);
}

double NNfunction_NG_4::synapse0x1d46220() {
   return (neuron0x1d32e30()*0.70352);
}

double NNfunction_NG_4::synapse0x1d46260() {
   return (neuron0x1d33170()*0.195163);
}

double NNfunction_NG_4::synapse0x1d462a0() {
   return (neuron0x1d334b0()*0.0756284);
}

double NNfunction_NG_4::synapse0x1d462e0() {
   return (neuron0x1d337f0()*-0.0721101);
}

double NNfunction_NG_4::synapse0x1d46320() {
   return (neuron0x1d33b30()*-0.0558068);
}

double NNfunction_NG_4::synapse0x1d46360() {
   return (neuron0x1d33e70()*-0.0678661);
}

double NNfunction_NG_4::synapse0x1d463a0() {
   return (neuron0x1d341b0()*0.113792);
}

double NNfunction_NG_4::synapse0x1d463e0() {
   return (neuron0x1d344f0()*-1.10516e-05);
}

double NNfunction_NG_4::synapse0x1d3e5a0() {
   return (neuron0x1d34830()*-0.00348155);
}

double NNfunction_NG_4::synapse0x1d3e5e0() {
   return (neuron0x1d34b70()*0.0216828);
}

double NNfunction_NG_4::synapse0x1d3e620() {
   return (neuron0x1d34eb0()*-0.521703);
}

double NNfunction_NG_4::synapse0x1d3e660() {
   return (neuron0x1d351f0()*-0.0519269);
}

double NNfunction_NG_4::synapse0x1d3e6a0() {
   return (neuron0x1d35530()*-0.130934);
}

double NNfunction_NG_4::synapse0x1d3e6e0() {
   return (neuron0x1d35870()*-0.50959);
}

double NNfunction_NG_4::synapse0x1d3e720() {
   return (neuron0x1d35bb0()*0.0532514);
}

double NNfunction_NG_4::synapse0x1d46030() {
   return (neuron0x1d35ef0()*0.0838192);
}

double NNfunction_NG_4::synapse0x1d46070() {
   return (neuron0x1d36450()*1.12401);
}

double NNfunction_NG_4::synapse0x1d3e870() {
   return (neuron0x1d36670()*0.0227057);
}

double NNfunction_NG_4::synapse0x1d3e8b0() {
   return (neuron0x1d369b0()*0.0516339);
}

double NNfunction_NG_4::synapse0x1d3e8f0() {
   return (neuron0x1d36cf0()*0.0213709);
}

double NNfunction_NG_4::synapse0x1d3e930() {
   return (neuron0x1d37030()*-0.0424155);
}

double NNfunction_NG_4::synapse0x1d3e970() {
   return (neuron0x1d37370()*-0.0401935);
}

double NNfunction_NG_4::synapse0x1d3e9b0() {
   return (neuron0x1d376b0()*-0.274938);
}

double NNfunction_NG_4::synapse0x1d3ed30() {
   return (neuron0x1d32af0()*-0.0691024);
}

double NNfunction_NG_4::synapse0x1d3ed70() {
   return (neuron0x1d32e30()*-2.96538);
}

double NNfunction_NG_4::synapse0x1d3edb0() {
   return (neuron0x1d33170()*0.14726);
}

double NNfunction_NG_4::synapse0x1d3edf0() {
   return (neuron0x1d334b0()*0.00823635);
}

double NNfunction_NG_4::synapse0x1d3ee30() {
   return (neuron0x1d337f0()*-0.0100732);
}

double NNfunction_NG_4::synapse0x1d3ee70() {
   return (neuron0x1d33b30()*0.0046628);
}

double NNfunction_NG_4::synapse0x1d3eeb0() {
   return (neuron0x1d33e70()*-0.00432718);
}

double NNfunction_NG_4::synapse0x1d3eef0() {
   return (neuron0x1d341b0()*0.00835012);
}

double NNfunction_NG_4::synapse0x1d3ef30() {
   return (neuron0x1d344f0()*0.0372792);
}

double NNfunction_NG_4::synapse0x1d3ef70() {
   return (neuron0x1d34830()*0.022616);
}

double NNfunction_NG_4::synapse0x1d3efb0() {
   return (neuron0x1d34b70()*-0.0397075);
}

double NNfunction_NG_4::synapse0x1d3eff0() {
   return (neuron0x1d34eb0()*0.0307279);
}

double NNfunction_NG_4::synapse0x1d3f030() {
   return (neuron0x1d351f0()*0.0643656);
}

double NNfunction_NG_4::synapse0x1d3f070() {
   return (neuron0x1d35530()*-0.0282247);
}

double NNfunction_NG_4::synapse0x1d3f0b0() {
   return (neuron0x1d35870()*0.0209936);
}

double NNfunction_NG_4::synapse0x1d3f0f0() {
   return (neuron0x1d35bb0()*0.0308175);
}

double NNfunction_NG_4::synapse0x1d3eb80() {
   return (neuron0x1d35ef0()*-0.0138039);
}

double NNfunction_NG_4::synapse0x1d3ebc0() {
   return (neuron0x1d36450()*0.102999);
}

double NNfunction_NG_4::synapse0x1d3f240() {
   return (neuron0x1d36670()*-0.0132796);
}

double NNfunction_NG_4::synapse0x1d3f280() {
   return (neuron0x1d369b0()*-0.0115213);
}

double NNfunction_NG_4::synapse0x1d3f2c0() {
   return (neuron0x1d36cf0()*-0.0505988);
}

double NNfunction_NG_4::synapse0x1d3f300() {
   return (neuron0x1d37030()*0.0234651);
}

double NNfunction_NG_4::synapse0x1d3f340() {
   return (neuron0x1d37370()*0.00628999);
}

double NNfunction_NG_4::synapse0x1d3f380() {
   return (neuron0x1d376b0()*1.65868);
}

double NNfunction_NG_4::synapse0x1d3f550() {
   return (neuron0x1d32af0()*0.0285235);
}

double NNfunction_NG_4::synapse0x1d485e0() {
   return (neuron0x1d32e30()*-1.05065);
}

double NNfunction_NG_4::synapse0x1d48620() {
   return (neuron0x1d33170()*0.706949);
}

double NNfunction_NG_4::synapse0x1d48660() {
   return (neuron0x1d334b0()*-0.0444461);
}

double NNfunction_NG_4::synapse0x1d486a0() {
   return (neuron0x1d337f0()*0.00670392);
}

double NNfunction_NG_4::synapse0x1d486e0() {
   return (neuron0x1d33b30()*0.00483673);
}

double NNfunction_NG_4::synapse0x1d48720() {
   return (neuron0x1d33e70()*0.0235612);
}

double NNfunction_NG_4::synapse0x1d48760() {
   return (neuron0x1d341b0()*0.0142928);
}

double NNfunction_NG_4::synapse0x1d487a0() {
   return (neuron0x1d344f0()*-0.0135167);
}

double NNfunction_NG_4::synapse0x1d487e0() {
   return (neuron0x1d34830()*0.0062489);
}

double NNfunction_NG_4::synapse0x1d48820() {
   return (neuron0x1d34b70()*-0.0200983);
}

double NNfunction_NG_4::synapse0x1d48860() {
   return (neuron0x1d34eb0()*0.14258);
}

double NNfunction_NG_4::synapse0x1d488a0() {
   return (neuron0x1d351f0()*-0.00581355);
}

double NNfunction_NG_4::synapse0x1d488e0() {
   return (neuron0x1d35530()*0.0153364);
}

double NNfunction_NG_4::synapse0x1d48920() {
   return (neuron0x1d35870()*-0.0961846);
}

double NNfunction_NG_4::synapse0x1d48960() {
   return (neuron0x1d35bb0()*-0.0101076);
}

double NNfunction_NG_4::synapse0x1d48430() {
   return (neuron0x1d35ef0()*-0.00505154);
}

double NNfunction_NG_4::synapse0x1d48470() {
   return (neuron0x1d36450()*-0.0171538);
}

double NNfunction_NG_4::synapse0x1d48ab0() {
   return (neuron0x1d36670()*-0.00918012);
}

double NNfunction_NG_4::synapse0x1d48af0() {
   return (neuron0x1d369b0()*0.00312816);
}

double NNfunction_NG_4::synapse0x1d48b30() {
   return (neuron0x1d36cf0()*0.0307934);
}

double NNfunction_NG_4::synapse0x1d48b70() {
   return (neuron0x1d37030()*-0.0168699);
}

double NNfunction_NG_4::synapse0x1d48bb0() {
   return (neuron0x1d37370()*-0.0137318);
}

double NNfunction_NG_4::synapse0x1d48bf0() {
   return (neuron0x1d376b0()*-0.516165);
}

double NNfunction_NG_4::synapse0x1d48f70() {
   return (neuron0x1d32af0()*0.003365);
}

double NNfunction_NG_4::synapse0x1d48fb0() {
   return (neuron0x1d32e30()*-0.874166);
}

double NNfunction_NG_4::synapse0x1d48ff0() {
   return (neuron0x1d33170()*-0.594218);
}

double NNfunction_NG_4::synapse0x1d49030() {
   return (neuron0x1d334b0()*-0.110667);
}

double NNfunction_NG_4::synapse0x1d49070() {
   return (neuron0x1d337f0()*0.00408076);
}

double NNfunction_NG_4::synapse0x1d490b0() {
   return (neuron0x1d33b30()*0.0050082);
}

double NNfunction_NG_4::synapse0x1d490f0() {
   return (neuron0x1d33e70()*0.000252923);
}

double NNfunction_NG_4::synapse0x1d49130() {
   return (neuron0x1d341b0()*-0.00390629);
}

double NNfunction_NG_4::synapse0x1d49170() {
   return (neuron0x1d344f0()*0.0091616);
}

double NNfunction_NG_4::synapse0x1d491b0() {
   return (neuron0x1d34830()*0.0015465);
}

double NNfunction_NG_4::synapse0x1d491f0() {
   return (neuron0x1d34b70()*-0.00378141);
}

double NNfunction_NG_4::synapse0x1d49230() {
   return (neuron0x1d34eb0()*-0.155972);
}

double NNfunction_NG_4::synapse0x1d49270() {
   return (neuron0x1d351f0()*-0.00215482);
}

double NNfunction_NG_4::synapse0x1d492b0() {
   return (neuron0x1d35530()*0.00690366);
}

double NNfunction_NG_4::synapse0x1d492f0() {
   return (neuron0x1d35870()*0.0679591);
}

double NNfunction_NG_4::synapse0x1d49330() {
   return (neuron0x1d35bb0()*-0.000563678);
}

double NNfunction_NG_4::synapse0x1d48dc0() {
   return (neuron0x1d35ef0()*0.00769194);
}

double NNfunction_NG_4::synapse0x1d48e00() {
   return (neuron0x1d36450()*-0.0063369);
}

double NNfunction_NG_4::synapse0x1d49480() {
   return (neuron0x1d36670()*0.0018097);
}

double NNfunction_NG_4::synapse0x1d494c0() {
   return (neuron0x1d369b0()*-0.0148423);
}

double NNfunction_NG_4::synapse0x1d49500() {
   return (neuron0x1d36cf0()*-0.0156309);
}

double NNfunction_NG_4::synapse0x1d49540() {
   return (neuron0x1d37030()*0.00431572);
}

double NNfunction_NG_4::synapse0x1d49580() {
   return (neuron0x1d37370()*0.0069769);
}

double NNfunction_NG_4::synapse0x1d495c0() {
   return (neuron0x1d376b0()*0.262524);
}

double NNfunction_NG_4::synapse0x1d49940() {
   return (neuron0x1d32af0()*-0.0623389);
}

double NNfunction_NG_4::synapse0x1d49980() {
   return (neuron0x1d32e30()*-1.06805);
}

double NNfunction_NG_4::synapse0x1d499c0() {
   return (neuron0x1d33170()*-0.296544);
}

double NNfunction_NG_4::synapse0x1d49a00() {
   return (neuron0x1d334b0()*-0.337718);
}

double NNfunction_NG_4::synapse0x1d49a40() {
   return (neuron0x1d337f0()*0.0153821);
}

double NNfunction_NG_4::synapse0x1d49a80() {
   return (neuron0x1d33b30()*-0.0186071);
}

double NNfunction_NG_4::synapse0x1d49ac0() {
   return (neuron0x1d33e70()*0.0251878);
}

double NNfunction_NG_4::synapse0x1d49b00() {
   return (neuron0x1d341b0()*0.010715);
}

double NNfunction_NG_4::synapse0x1d49b40() {
   return (neuron0x1d344f0()*-0.0104142);
}

double NNfunction_NG_4::synapse0x1d49b80() {
   return (neuron0x1d34830()*-0.0209276);
}

double NNfunction_NG_4::synapse0x1d49bc0() {
   return (neuron0x1d34b70()*-0.0255967);
}

double NNfunction_NG_4::synapse0x1d49c00() {
   return (neuron0x1d34eb0()*-1.22699);
}

double NNfunction_NG_4::synapse0x1d49c40() {
   return (neuron0x1d351f0()*0.0602598);
}

double NNfunction_NG_4::synapse0x1d49c80() {
   return (neuron0x1d35530()*-0.0162334);
}

double NNfunction_NG_4::synapse0x1d49cc0() {
   return (neuron0x1d35870()*-0.113922);
}

double NNfunction_NG_4::synapse0x1d49d00() {
   return (neuron0x1d35bb0()*0.0199778);
}

double NNfunction_NG_4::synapse0x1d49790() {
   return (neuron0x1d35ef0()*0.0269489);
}

double NNfunction_NG_4::synapse0x1d497d0() {
   return (neuron0x1d36450()*-0.061438);
}

double NNfunction_NG_4::synapse0x1d49e50() {
   return (neuron0x1d36670()*0.0055357);
}

double NNfunction_NG_4::synapse0x1d49e90() {
   return (neuron0x1d369b0()*0.000790836);
}

double NNfunction_NG_4::synapse0x1d49ed0() {
   return (neuron0x1d36cf0()*0.0770745);
}

double NNfunction_NG_4::synapse0x1d49f10() {
   return (neuron0x1d37030()*-0.0074933);
}

double NNfunction_NG_4::synapse0x1d49f50() {
   return (neuron0x1d37370()*-0.000577899);
}

double NNfunction_NG_4::synapse0x1d49f90() {
   return (neuron0x1d376b0()*-0.738495);
}

double NNfunction_NG_4::synapse0x1d4a310() {
   return (neuron0x1d32af0()*0.0395382);
}

double NNfunction_NG_4::synapse0x1d4a350() {
   return (neuron0x1d32e30()*-7.16356);
}

double NNfunction_NG_4::synapse0x1d4a390() {
   return (neuron0x1d33170()*-3.73786);
}

double NNfunction_NG_4::synapse0x1d4a3d0() {
   return (neuron0x1d334b0()*0.0298646);
}

double NNfunction_NG_4::synapse0x1d4a410() {
   return (neuron0x1d337f0()*0.00348196);
}

double NNfunction_NG_4::synapse0x1d4a450() {
   return (neuron0x1d33b30()*0.0126937);
}

double NNfunction_NG_4::synapse0x1d4a490() {
   return (neuron0x1d33e70()*-0.0105692);
}

double NNfunction_NG_4::synapse0x1d4a4d0() {
   return (neuron0x1d341b0()*0.00703876);
}

double NNfunction_NG_4::synapse0x1d4a510() {
   return (neuron0x1d344f0()*0.0158519);
}

double NNfunction_NG_4::synapse0x1d4a550() {
   return (neuron0x1d34830()*0.0314096);
}

double NNfunction_NG_4::synapse0x1d4a590() {
   return (neuron0x1d34b70()*0.040968);
}

double NNfunction_NG_4::synapse0x1d4a5d0() {
   return (neuron0x1d34eb0()*0.281946);
}

double NNfunction_NG_4::synapse0x1d4a610() {
   return (neuron0x1d351f0()*-0.0149273);
}

double NNfunction_NG_4::synapse0x1d4a650() {
   return (neuron0x1d35530()*0.0097683);
}

double NNfunction_NG_4::synapse0x1d4a690() {
   return (neuron0x1d35870()*-0.133094);
}

double NNfunction_NG_4::synapse0x1d4a6d0() {
   return (neuron0x1d35bb0()*-0.0236376);
}

double NNfunction_NG_4::synapse0x1d4a160() {
   return (neuron0x1d35ef0()*0.0355479);
}

double NNfunction_NG_4::synapse0x1d4a1a0() {
   return (neuron0x1d36450()*-0.0683253);
}

double NNfunction_NG_4::synapse0x1d4a820() {
   return (neuron0x1d36670()*0.00292269);
}

double NNfunction_NG_4::synapse0x1d4a860() {
   return (neuron0x1d369b0()*0.00650402);
}

double NNfunction_NG_4::synapse0x1d4a8a0() {
   return (neuron0x1d36cf0()*0.00160193);
}

double NNfunction_NG_4::synapse0x1d4a8e0() {
   return (neuron0x1d37030()*-0.0134246);
}

double NNfunction_NG_4::synapse0x1d4a920() {
   return (neuron0x1d37370()*-0.00629338);
}

double NNfunction_NG_4::synapse0x1d4a960() {
   return (neuron0x1d376b0()*-1.98391);
}

double NNfunction_NG_4::synapse0x1d4ace0() {
   return (neuron0x1d32af0()*-0.0516828);
}

double NNfunction_NG_4::synapse0x1d4ad20() {
   return (neuron0x1d32e30()*1.08163);
}

double NNfunction_NG_4::synapse0x1d4ad60() {
   return (neuron0x1d33170()*1.19597);
}

double NNfunction_NG_4::synapse0x1d4ada0() {
   return (neuron0x1d334b0()*0.0785498);
}

double NNfunction_NG_4::synapse0x1d4ade0() {
   return (neuron0x1d337f0()*0.0104074);
}

double NNfunction_NG_4::synapse0x1d4ae20() {
   return (neuron0x1d33b30()*0.0123872);
}

double NNfunction_NG_4::synapse0x1d4ae60() {
   return (neuron0x1d33e70()*-0.0062034);
}

double NNfunction_NG_4::synapse0x1d4aea0() {
   return (neuron0x1d341b0()*-0.0380586);
}

double NNfunction_NG_4::synapse0x1d4aee0() {
   return (neuron0x1d344f0()*0.00492203);
}

double NNfunction_NG_4::synapse0x1d4af20() {
   return (neuron0x1d34830()*-0.00141361);
}

double NNfunction_NG_4::synapse0x1d4af60() {
   return (neuron0x1d34b70()*-0.00652647);
}

double NNfunction_NG_4::synapse0x1d4afa0() {
   return (neuron0x1d34eb0()*0.174551);
}

double NNfunction_NG_4::synapse0x1d4afe0() {
   return (neuron0x1d351f0()*0.0109094);
}

double NNfunction_NG_4::synapse0x1d4b020() {
   return (neuron0x1d35530()*0.00288732);
}

double NNfunction_NG_4::synapse0x1d4b060() {
   return (neuron0x1d35870()*-1.0883);
}

double NNfunction_NG_4::synapse0x1d4b0a0() {
   return (neuron0x1d35bb0()*0.0268073);
}

double NNfunction_NG_4::synapse0x1d4ab30() {
   return (neuron0x1d35ef0()*-0.00729794);
}

double NNfunction_NG_4::synapse0x1d4ab70() {
   return (neuron0x1d36450()*0.21594);
}

double NNfunction_NG_4::synapse0x1d4b1f0() {
   return (neuron0x1d36670()*0.0539135);
}

double NNfunction_NG_4::synapse0x1d4b230() {
   return (neuron0x1d369b0()*-0.0210179);
}

double NNfunction_NG_4::synapse0x1d4b270() {
   return (neuron0x1d36cf0()*0.00160224);
}

double NNfunction_NG_4::synapse0x1d4b2b0() {
   return (neuron0x1d37030()*0.0145855);
}

double NNfunction_NG_4::synapse0x1d4b2f0() {
   return (neuron0x1d37370()*-0.000396179);
}

double NNfunction_NG_4::synapse0x1d4b330() {
   return (neuron0x1d376b0()*0.0949333);
}

double NNfunction_NG_4::synapse0x1d4b6b0() {
   return (neuron0x1d32af0()*0.0322175);
}

double NNfunction_NG_4::synapse0x1d4b6f0() {
   return (neuron0x1d32e30()*1.71599);
}

double NNfunction_NG_4::synapse0x1d4b730() {
   return (neuron0x1d33170()*-0.0318387);
}

double NNfunction_NG_4::synapse0x1d4b770() {
   return (neuron0x1d334b0()*-0.339447);
}

double NNfunction_NG_4::synapse0x1d4b7b0() {
   return (neuron0x1d337f0()*-0.00926744);
}

double NNfunction_NG_4::synapse0x1d4b7f0() {
   return (neuron0x1d33b30()*-0.000370277);
}

double NNfunction_NG_4::synapse0x1d4b830() {
   return (neuron0x1d33e70()*-0.0133122);
}

double NNfunction_NG_4::synapse0x1d4b870() {
   return (neuron0x1d341b0()*-0.00846768);
}

double NNfunction_NG_4::synapse0x1d4b8b0() {
   return (neuron0x1d344f0()*-0.00087273);
}

double NNfunction_NG_4::synapse0x1d4b8f0() {
   return (neuron0x1d34830()*-0.00383832);
}

double NNfunction_NG_4::synapse0x1d4b930() {
   return (neuron0x1d34b70()*0.0211916);
}

double NNfunction_NG_4::synapse0x1d4b970() {
   return (neuron0x1d34eb0()*0.3382);
}

double NNfunction_NG_4::synapse0x1d4b9b0() {
   return (neuron0x1d351f0()*0.0201484);
}

double NNfunction_NG_4::synapse0x1d4b9f0() {
   return (neuron0x1d35530()*0.0119378);
}

double NNfunction_NG_4::synapse0x1d4ba30() {
   return (neuron0x1d35870()*-0.310179);
}

double NNfunction_NG_4::synapse0x1d4ba70() {
   return (neuron0x1d35bb0()*-0.0296449);
}

double NNfunction_NG_4::synapse0x1d4b500() {
   return (neuron0x1d35ef0()*-0.00234961);
}

double NNfunction_NG_4::synapse0x1d4b540() {
   return (neuron0x1d36450()*-0.0967133);
}

double NNfunction_NG_4::synapse0x1d4bbc0() {
   return (neuron0x1d36670()*0.0323997);
}

double NNfunction_NG_4::synapse0x1d4bc00() {
   return (neuron0x1d369b0()*-0.00177652);
}

double NNfunction_NG_4::synapse0x1d4bc40() {
   return (neuron0x1d36cf0()*-0.017305);
}

double NNfunction_NG_4::synapse0x1d4bc80() {
   return (neuron0x1d37030()*-0.00620173);
}

double NNfunction_NG_4::synapse0x1d4bcc0() {
   return (neuron0x1d37370()*0.0107658);
}

double NNfunction_NG_4::synapse0x1d4bd00() {
   return (neuron0x1d376b0()*0.332084);
}

double NNfunction_NG_4::synapse0x1d4c080() {
   return (neuron0x1d32af0()*0.00466058);
}

double NNfunction_NG_4::synapse0x1d4c0c0() {
   return (neuron0x1d32e30()*0.761817);
}

double NNfunction_NG_4::synapse0x1d4c100() {
   return (neuron0x1d33170()*0.20293);
}

double NNfunction_NG_4::synapse0x1d4c140() {
   return (neuron0x1d334b0()*0.148579);
}

double NNfunction_NG_4::synapse0x1d4c180() {
   return (neuron0x1d337f0()*-0.0150759);
}

double NNfunction_NG_4::synapse0x1d4c1c0() {
   return (neuron0x1d33b30()*-0.00379362);
}

double NNfunction_NG_4::synapse0x1d4c200() {
   return (neuron0x1d33e70()*-0.0188134);
}

double NNfunction_NG_4::synapse0x1d4c240() {
   return (neuron0x1d341b0()*-0.0108931);
}

double NNfunction_NG_4::synapse0x1d4c280() {
   return (neuron0x1d344f0()*-0.0139441);
}

double NNfunction_NG_4::synapse0x1d4c2c0() {
   return (neuron0x1d34830()*0.00669818);
}

double NNfunction_NG_4::synapse0x1d4c300() {
   return (neuron0x1d34b70()*0.000595955);
}

double NNfunction_NG_4::synapse0x1d4c340() {
   return (neuron0x1d34eb0()*0.509905);
}

double NNfunction_NG_4::synapse0x1d4c380() {
   return (neuron0x1d351f0()*-0.0756189);
}

double NNfunction_NG_4::synapse0x1d4c3c0() {
   return (neuron0x1d35530()*-0.0152059);
}

double NNfunction_NG_4::synapse0x1d4c400() {
   return (neuron0x1d35870()*0.038572);
}

double NNfunction_NG_4::synapse0x1d4c440() {
   return (neuron0x1d35bb0()*-0.00422002);
}

double NNfunction_NG_4::synapse0x1d4bed0() {
   return (neuron0x1d35ef0()*-0.0110597);
}

double NNfunction_NG_4::synapse0x1d4bf10() {
   return (neuron0x1d36450()*-0.0118399);
}

double NNfunction_NG_4::synapse0x1d4c590() {
   return (neuron0x1d36670()*0.0126309);
}

double NNfunction_NG_4::synapse0x1d4c5d0() {
   return (neuron0x1d369b0()*0.00589365);
}

double NNfunction_NG_4::synapse0x1d4c610() {
   return (neuron0x1d36cf0()*-0.0183646);
}

double NNfunction_NG_4::synapse0x1d4c650() {
   return (neuron0x1d37030()*-0.00886884);
}

double NNfunction_NG_4::synapse0x1d4c690() {
   return (neuron0x1d37370()*-0.0138239);
}

double NNfunction_NG_4::synapse0x1d4c6d0() {
   return (neuron0x1d376b0()*-0.474263);
}

double NNfunction_NG_4::synapse0x1d4ca50() {
   return (neuron0x1d32af0()*-0.0318838);
}

double NNfunction_NG_4::synapse0x1d4ca90() {
   return (neuron0x1d32e30()*-1.25797);
}

double NNfunction_NG_4::synapse0x1d4cad0() {
   return (neuron0x1d33170()*-0.53067);
}

double NNfunction_NG_4::synapse0x1d4cb10() {
   return (neuron0x1d334b0()*0.0805705);
}

double NNfunction_NG_4::synapse0x1d4cb50() {
   return (neuron0x1d337f0()*-0.0234587);
}

double NNfunction_NG_4::synapse0x1d4cb90() {
   return (neuron0x1d33b30()*-0.0406131);
}

double NNfunction_NG_4::synapse0x1d4cbd0() {
   return (neuron0x1d33e70()*0.023287);
}

double NNfunction_NG_4::synapse0x1d4cc10() {
   return (neuron0x1d341b0()*-0.0131688);
}

double NNfunction_NG_4::synapse0x1d4cc50() {
   return (neuron0x1d344f0()*-0.0268312);
}

double NNfunction_NG_4::synapse0x1d4cc90() {
   return (neuron0x1d34830()*0.0194519);
}

double NNfunction_NG_4::synapse0x1d4ccd0() {
   return (neuron0x1d34b70()*0.0111304);
}

double NNfunction_NG_4::synapse0x1d4cd10() {
   return (neuron0x1d34eb0()*0.32078);
}

double NNfunction_NG_4::synapse0x1d4cd50() {
   return (neuron0x1d351f0()*-0.00153805);
}

double NNfunction_NG_4::synapse0x1d4cd90() {
   return (neuron0x1d35530()*-0.00164709);
}

double NNfunction_NG_4::synapse0x1d4cdd0() {
   return (neuron0x1d35870()*-1.34594);
}

double NNfunction_NG_4::synapse0x1d4ce10() {
   return (neuron0x1d35bb0()*-0.0539169);
}

double NNfunction_NG_4::synapse0x1d4c8a0() {
   return (neuron0x1d35ef0()*-0.0225211);
}

double NNfunction_NG_4::synapse0x1d4c8e0() {
   return (neuron0x1d36450()*0.202971);
}

double NNfunction_NG_4::synapse0x1d4cf60() {
   return (neuron0x1d36670()*0.00508721);
}

double NNfunction_NG_4::synapse0x1d4cfa0() {
   return (neuron0x1d369b0()*-0.0224298);
}

double NNfunction_NG_4::synapse0x1d4cfe0() {
   return (neuron0x1d36cf0()*-0.0203668);
}

double NNfunction_NG_4::synapse0x1d4d020() {
   return (neuron0x1d37030()*-7.7969e-05);
}

double NNfunction_NG_4::synapse0x1d4d060() {
   return (neuron0x1d37370()*0.0167772);
}

double NNfunction_NG_4::synapse0x1d4d0a0() {
   return (neuron0x1d376b0()*0.161741);
}

double NNfunction_NG_4::synapse0x1d4d420() {
   return (neuron0x1d32af0()*-0.0226113);
}

double NNfunction_NG_4::synapse0x1d419f0() {
   return (neuron0x1d32e30()*4.77621);
}

double NNfunction_NG_4::synapse0x1d41a30() {
   return (neuron0x1d33170()*3.09213);
}

double NNfunction_NG_4::synapse0x1d41a70() {
   return (neuron0x1d334b0()*-0.0165949);
}

double NNfunction_NG_4::synapse0x1d41cc0() {
   return (neuron0x1d337f0()*0.0139122);
}

double NNfunction_NG_4::synapse0x1d41d00() {
   return (neuron0x1d33b30()*-0.0321337);
}

double NNfunction_NG_4::synapse0x1d41d40() {
   return (neuron0x1d33e70()*-0.0059093);
}

double NNfunction_NG_4::synapse0x1d41f90() {
   return (neuron0x1d341b0()*-0.00813936);
}

double NNfunction_NG_4::synapse0x1d41fd0() {
   return (neuron0x1d344f0()*-0.00355945);
}

double NNfunction_NG_4::synapse0x1d42220() {
   return (neuron0x1d34830()*-0.0180913);
}

double NNfunction_NG_4::synapse0x1d42260() {
   return (neuron0x1d34b70()*-0.009953);
}

double NNfunction_NG_4::synapse0x1d422a0() {
   return (neuron0x1d34eb0()*0.291144);
}

double NNfunction_NG_4::synapse0x1d424f0() {
   return (neuron0x1d351f0()*0.0489447);
}

double NNfunction_NG_4::synapse0x1d42530() {
   return (neuron0x1d35530()*0.00521588);
}

double NNfunction_NG_4::synapse0x1d42780() {
   return (neuron0x1d35870()*-0.336225);
}

double NNfunction_NG_4::synapse0x1d427c0() {
   return (neuron0x1d35bb0()*0.00938544);
}

double NNfunction_NG_4::synapse0x1d4d270() {
   return (neuron0x1d35ef0()*-0.0201439);
}

double NNfunction_NG_4::synapse0x1d4d2b0() {
   return (neuron0x1d36450()*-0.0262025);
}

double NNfunction_NG_4::synapse0x1d42910() {
   return (neuron0x1d36670()*-0.00272276);
}

double NNfunction_NG_4::synapse0x1d42e20() {
   return (neuron0x1d369b0()*0.00525398);
}

double NNfunction_NG_4::synapse0x1d42e60() {
   return (neuron0x1d36cf0()*-0.0169817);
}

double NNfunction_NG_4::synapse0x1d42ea0() {
   return (neuron0x1d37030()*-0.00103298);
}

double NNfunction_NG_4::synapse0x1d430f0() {
   return (neuron0x1d37370()*0.0179914);
}

double NNfunction_NG_4::synapse0x1d43130() {
   return (neuron0x1d376b0()*0.0634343);
}

double NNfunction_NG_4::synapse0x1d429e0() {
   return (neuron0x1d32af0()*0.0251221);
}

double NNfunction_NG_4::synapse0x1d42a20() {
   return (neuron0x1d32e30()*-4.30564);
}

double NNfunction_NG_4::synapse0x1d42a60() {
   return (neuron0x1d33170()*-0.514738);
}

double NNfunction_NG_4::synapse0x1d42aa0() {
   return (neuron0x1d334b0()*-0.0952501);
}

double NNfunction_NG_4::synapse0x1d43420() {
   return (neuron0x1d337f0()*-0.0145548);
}

double NNfunction_NG_4::synapse0x1d4f770() {
   return (neuron0x1d33b30()*-0.012476);
}

double NNfunction_NG_4::synapse0x1d4f7b0() {
   return (neuron0x1d33e70()*-0.010906);
}

double NNfunction_NG_4::synapse0x1d4f7f0() {
   return (neuron0x1d341b0()*0.0101789);
}

double NNfunction_NG_4::synapse0x1d4f830() {
   return (neuron0x1d344f0()*0.024819);
}

double NNfunction_NG_4::synapse0x1d4f870() {
   return (neuron0x1d34830()*-0.012448);
}

double NNfunction_NG_4::synapse0x1d4f8b0() {
   return (neuron0x1d34b70()*0.0219673);
}

double NNfunction_NG_4::synapse0x1d4f8f0() {
   return (neuron0x1d34eb0()*-1.09746);
}

double NNfunction_NG_4::synapse0x1d4f930() {
   return (neuron0x1d351f0()*0.0484516);
}

double NNfunction_NG_4::synapse0x1d4f970() {
   return (neuron0x1d35530()*-0.0132599);
}

double NNfunction_NG_4::synapse0x1d4f9b0() {
   return (neuron0x1d35870()*0.191464);
}

double NNfunction_NG_4::synapse0x1d4f9f0() {
   return (neuron0x1d35bb0()*-0.0243867);
}

double NNfunction_NG_4::synapse0x1d43300() {
   return (neuron0x1d35ef0()*0.0132278);
}

double NNfunction_NG_4::synapse0x1d43340() {
   return (neuron0x1d36450()*-0.00152206);
}

double NNfunction_NG_4::synapse0x1d4fb40() {
   return (neuron0x1d36670()*-0.00224043);
}

double NNfunction_NG_4::synapse0x1d4fb80() {
   return (neuron0x1d369b0()*-0.0310807);
}

double NNfunction_NG_4::synapse0x1d4fbc0() {
   return (neuron0x1d36cf0()*-0.0227375);
}

double NNfunction_NG_4::synapse0x1d4fc00() {
   return (neuron0x1d37030()*0.0568174);
}

double NNfunction_NG_4::synapse0x1d4fc40() {
   return (neuron0x1d37370()*-0.00023725);
}

double NNfunction_NG_4::synapse0x1d4fc80() {
   return (neuron0x1d376b0()*0.0459507);
}

double NNfunction_NG_4::synapse0x1d50000() {
   return (neuron0x1d32af0()*-0.0902863);
}

double NNfunction_NG_4::synapse0x1d50040() {
   return (neuron0x1d32e30()*-0.256898);
}

double NNfunction_NG_4::synapse0x1d50080() {
   return (neuron0x1d33170()*1.2201);
}

double NNfunction_NG_4::synapse0x1d500c0() {
   return (neuron0x1d334b0()*-0.109171);
}

double NNfunction_NG_4::synapse0x1d50100() {
   return (neuron0x1d337f0()*0.00881375);
}

double NNfunction_NG_4::synapse0x1d50140() {
   return (neuron0x1d33b30()*-0.00301808);
}

double NNfunction_NG_4::synapse0x1d50180() {
   return (neuron0x1d33e70()*-0.0237707);
}

double NNfunction_NG_4::synapse0x1d501c0() {
   return (neuron0x1d341b0()*-0.0112557);
}

double NNfunction_NG_4::synapse0x1d50200() {
   return (neuron0x1d344f0()*-0.0242253);
}

double NNfunction_NG_4::synapse0x1d50240() {
   return (neuron0x1d34830()*0.0229712);
}

double NNfunction_NG_4::synapse0x1d50280() {
   return (neuron0x1d34b70()*-0.00648996);
}

double NNfunction_NG_4::synapse0x1d502c0() {
   return (neuron0x1d34eb0()*0.0355504);
}

double NNfunction_NG_4::synapse0x1d50300() {
   return (neuron0x1d351f0()*0.00101937);
}

double NNfunction_NG_4::synapse0x1d50340() {
   return (neuron0x1d35530()*0.0361203);
}

double NNfunction_NG_4::synapse0x1d50380() {
   return (neuron0x1d35870()*-0.0172036);
}

double NNfunction_NG_4::synapse0x1d503c0() {
   return (neuron0x1d35bb0()*0.0414302);
}

double NNfunction_NG_4::synapse0x1d4fe50() {
   return (neuron0x1d35ef0()*0.0363882);
}

double NNfunction_NG_4::synapse0x1d4fe90() {
   return (neuron0x1d36450()*0.01917);
}

double NNfunction_NG_4::synapse0x1d50510() {
   return (neuron0x1d36670()*0.0300867);
}

double NNfunction_NG_4::synapse0x1d50550() {
   return (neuron0x1d369b0()*-0.0202548);
}

double NNfunction_NG_4::synapse0x1d50590() {
   return (neuron0x1d36cf0()*-0.00909646);
}

double NNfunction_NG_4::synapse0x1d505d0() {
   return (neuron0x1d37030()*0.0411739);
}

double NNfunction_NG_4::synapse0x1d50610() {
   return (neuron0x1d37370()*-0.0115548);
}

double NNfunction_NG_4::synapse0x1d50650() {
   return (neuron0x1d376b0()*0.945311);
}

double NNfunction_NG_4::synapse0x1d509d0() {
   return (neuron0x1d32af0()*0.030254);
}

double NNfunction_NG_4::synapse0x1d50a10() {
   return (neuron0x1d32e30()*-0.344199);
}

double NNfunction_NG_4::synapse0x1d50a50() {
   return (neuron0x1d33170()*0.0830652);
}

double NNfunction_NG_4::synapse0x1d50a90() {
   return (neuron0x1d334b0()*0.12875);
}

double NNfunction_NG_4::synapse0x1d50ad0() {
   return (neuron0x1d337f0()*-0.111532);
}

double NNfunction_NG_4::synapse0x1d50b10() {
   return (neuron0x1d33b30()*-0.064288);
}

double NNfunction_NG_4::synapse0x1d50b50() {
   return (neuron0x1d33e70()*-0.293952);
}

double NNfunction_NG_4::synapse0x1d50b90() {
   return (neuron0x1d341b0()*-0.136209);
}

double NNfunction_NG_4::synapse0x1d50bd0() {
   return (neuron0x1d344f0()*0.00398115);
}

double NNfunction_NG_4::synapse0x1d50c10() {
   return (neuron0x1d34830()*0.0572583);
}

double NNfunction_NG_4::synapse0x1d50c50() {
   return (neuron0x1d34b70()*-0.120351);
}

double NNfunction_NG_4::synapse0x1d50c90() {
   return (neuron0x1d34eb0()*-0.29877);
}

double NNfunction_NG_4::synapse0x1d50cd0() {
   return (neuron0x1d351f0()*-0.401328);
}

double NNfunction_NG_4::synapse0x1d50d10() {
   return (neuron0x1d35530()*-0.217695);
}

double NNfunction_NG_4::synapse0x1d50d50() {
   return (neuron0x1d35870()*-0.274082);
}

double NNfunction_NG_4::synapse0x1d50d90() {
   return (neuron0x1d35bb0()*0.0838172);
}

double NNfunction_NG_4::synapse0x1d50820() {
   return (neuron0x1d35ef0()*-0.0414383);
}

double NNfunction_NG_4::synapse0x1d50860() {
   return (neuron0x1d36450()*-0.138974);
}

double NNfunction_NG_4::synapse0x1d50ee0() {
   return (neuron0x1d36670()*0.135297);
}

double NNfunction_NG_4::synapse0x1d50f20() {
   return (neuron0x1d369b0()*0.00719047);
}

double NNfunction_NG_4::synapse0x1d50f60() {
   return (neuron0x1d36cf0()*-0.0735714);
}

double NNfunction_NG_4::synapse0x1d50fa0() {
   return (neuron0x1d37030()*-0.00630123);
}

double NNfunction_NG_4::synapse0x1d50fe0() {
   return (neuron0x1d37370()*-0.088055);
}

double NNfunction_NG_4::synapse0x1d51020() {
   return (neuron0x1d376b0()*0.710116);
}

double NNfunction_NG_4::synapse0x1d513a0() {
   return (neuron0x1d32af0()*-0.0042324);
}

double NNfunction_NG_4::synapse0x1d513e0() {
   return (neuron0x1d32e30()*-0.41516);
}

double NNfunction_NG_4::synapse0x1d51420() {
   return (neuron0x1d33170()*0.708806);
}

double NNfunction_NG_4::synapse0x1d51460() {
   return (neuron0x1d334b0()*-0.978747);
}

double NNfunction_NG_4::synapse0x1d514a0() {
   return (neuron0x1d337f0()*-0.00255242);
}

double NNfunction_NG_4::synapse0x1d514e0() {
   return (neuron0x1d33b30()*-0.0088693);
}

double NNfunction_NG_4::synapse0x1d51520() {
   return (neuron0x1d33e70()*0.00958722);
}

double NNfunction_NG_4::synapse0x1d51560() {
   return (neuron0x1d341b0()*-0.00315058);
}

double NNfunction_NG_4::synapse0x1d515a0() {
   return (neuron0x1d344f0()*-0.0110469);
}

double NNfunction_NG_4::synapse0x1d515e0() {
   return (neuron0x1d34830()*0.00399393);
}

double NNfunction_NG_4::synapse0x1d51620() {
   return (neuron0x1d34b70()*0.000295513);
}

double NNfunction_NG_4::synapse0x1d51660() {
   return (neuron0x1d34eb0()*0.0475606);
}

double NNfunction_NG_4::synapse0x1d516a0() {
   return (neuron0x1d351f0()*0.0262751);
}

double NNfunction_NG_4::synapse0x1d516e0() {
   return (neuron0x1d35530()*-0.00270456);
}

double NNfunction_NG_4::synapse0x1d51720() {
   return (neuron0x1d35870()*0.0206967);
}

double NNfunction_NG_4::synapse0x1d51760() {
   return (neuron0x1d35bb0()*0.015209);
}

double NNfunction_NG_4::synapse0x1d511f0() {
   return (neuron0x1d35ef0()*-0.000462817);
}

double NNfunction_NG_4::synapse0x1d51230() {
   return (neuron0x1d36450()*0.00792418);
}

double NNfunction_NG_4::synapse0x1d518b0() {
   return (neuron0x1d36670()*0.010924);
}

double NNfunction_NG_4::synapse0x1d518f0() {
   return (neuron0x1d369b0()*0.00566492);
}

double NNfunction_NG_4::synapse0x1d51930() {
   return (neuron0x1d36cf0()*0.0109765);
}

double NNfunction_NG_4::synapse0x1d51970() {
   return (neuron0x1d37030()*-0.00287479);
}

double NNfunction_NG_4::synapse0x1d519b0() {
   return (neuron0x1d37370()*-0.00478984);
}

double NNfunction_NG_4::synapse0x1d519f0() {
   return (neuron0x1d376b0()*-0.0636905);
}

double NNfunction_NG_4::synapse0x1d51d70() {
   return (neuron0x1d32af0()*-0.0490901);
}

double NNfunction_NG_4::synapse0x1d51db0() {
   return (neuron0x1d32e30()*-0.642333);
}

double NNfunction_NG_4::synapse0x1d51df0() {
   return (neuron0x1d33170()*-0.443019);
}

double NNfunction_NG_4::synapse0x1d51e30() {
   return (neuron0x1d334b0()*0.0804946);
}

double NNfunction_NG_4::synapse0x1d51e70() {
   return (neuron0x1d337f0()*-0.00222264);
}

double NNfunction_NG_4::synapse0x1d51eb0() {
   return (neuron0x1d33b30()*0.000675284);
}

double NNfunction_NG_4::synapse0x1d51ef0() {
   return (neuron0x1d33e70()*-0.00684849);
}

double NNfunction_NG_4::synapse0x1d51f30() {
   return (neuron0x1d341b0()*-0.00332228);
}

double NNfunction_NG_4::synapse0x1d51f70() {
   return (neuron0x1d344f0()*0.0270031);
}

double NNfunction_NG_4::synapse0x1d51fb0() {
   return (neuron0x1d34830()*-0.0199534);
}

double NNfunction_NG_4::synapse0x1d51ff0() {
   return (neuron0x1d34b70()*-0.00212683);
}

double NNfunction_NG_4::synapse0x1d52030() {
   return (neuron0x1d34eb0()*-0.0589664);
}

double NNfunction_NG_4::synapse0x1d52070() {
   return (neuron0x1d351f0()*0.0363976);
}

double NNfunction_NG_4::synapse0x1d520b0() {
   return (neuron0x1d35530()*0.0131156);
}

double NNfunction_NG_4::synapse0x1d520f0() {
   return (neuron0x1d35870()*-0.293055);
}

double NNfunction_NG_4::synapse0x1d52130() {
   return (neuron0x1d35bb0()*0.0276951);
}

double NNfunction_NG_4::synapse0x1d51bc0() {
   return (neuron0x1d35ef0()*0.0099068);
}

double NNfunction_NG_4::synapse0x1d51c00() {
   return (neuron0x1d36450()*0.364316);
}

double NNfunction_NG_4::synapse0x1d52280() {
   return (neuron0x1d36670()*-0.00842253);
}

double NNfunction_NG_4::synapse0x1d522c0() {
   return (neuron0x1d369b0()*-0.0085723);
}

double NNfunction_NG_4::synapse0x1d52300() {
   return (neuron0x1d36cf0()*-0.0348959);
}

double NNfunction_NG_4::synapse0x1d52340() {
   return (neuron0x1d37030()*-0.0293099);
}

double NNfunction_NG_4::synapse0x1d52380() {
   return (neuron0x1d37370()*0.0331262);
}

double NNfunction_NG_4::synapse0x1d523c0() {
   return (neuron0x1d376b0()*0.142793);
}

double NNfunction_NG_4::synapse0x1d52740() {
   return (neuron0x1d32af0()*-0.0170965);
}

double NNfunction_NG_4::synapse0x1d52780() {
   return (neuron0x1d32e30()*-6.06812);
}

double NNfunction_NG_4::synapse0x1d527c0() {
   return (neuron0x1d33170()*-3.01939);
}

double NNfunction_NG_4::synapse0x1d52800() {
   return (neuron0x1d334b0()*0.00116617);
}

double NNfunction_NG_4::synapse0x1d52840() {
   return (neuron0x1d337f0()*-0.0263392);
}

double NNfunction_NG_4::synapse0x1d52880() {
   return (neuron0x1d33b30()*0.00605126);
}

double NNfunction_NG_4::synapse0x1d528c0() {
   return (neuron0x1d33e70()*-0.0226496);
}

double NNfunction_NG_4::synapse0x1d52900() {
   return (neuron0x1d341b0()*-0.00434655);
}

double NNfunction_NG_4::synapse0x1d52940() {
   return (neuron0x1d344f0()*0.00930918);
}

double NNfunction_NG_4::synapse0x1d52980() {
   return (neuron0x1d34830()*0.0255235);
}

double NNfunction_NG_4::synapse0x1d529c0() {
   return (neuron0x1d34b70()*-0.000111749);
}

double NNfunction_NG_4::synapse0x1d52a00() {
   return (neuron0x1d34eb0()*-0.0928944);
}

double NNfunction_NG_4::synapse0x1d52a40() {
   return (neuron0x1d351f0()*-0.0353732);
}

double NNfunction_NG_4::synapse0x1d52a80() {
   return (neuron0x1d35530()*-0.00605973);
}

double NNfunction_NG_4::synapse0x1d52ac0() {
   return (neuron0x1d35870()*0.216079);
}

double NNfunction_NG_4::synapse0x1d52b00() {
   return (neuron0x1d35bb0()*0.0234444);
}

double NNfunction_NG_4::synapse0x1d52590() {
   return (neuron0x1d35ef0()*-0.0210077);
}

double NNfunction_NG_4::synapse0x1d525d0() {
   return (neuron0x1d36450()*0.0598059);
}

double NNfunction_NG_4::synapse0x1d52c50() {
   return (neuron0x1d36670()*0.00455678);
}

double NNfunction_NG_4::synapse0x1d52c90() {
   return (neuron0x1d369b0()*0.0168912);
}

double NNfunction_NG_4::synapse0x1d52cd0() {
   return (neuron0x1d36cf0()*-0.0134876);
}

double NNfunction_NG_4::synapse0x1d52d10() {
   return (neuron0x1d37030()*-0.013147);
}

double NNfunction_NG_4::synapse0x1d52d50() {
   return (neuron0x1d37370()*0.00675804);
}

double NNfunction_NG_4::synapse0x1d52d90() {
   return (neuron0x1d376b0()*1.59649);
}

double NNfunction_NG_4::synapse0x1d53110() {
   return (neuron0x1d32af0()*-0.052093);
}

double NNfunction_NG_4::synapse0x1d53150() {
   return (neuron0x1d32e30()*-0.644837);
}

double NNfunction_NG_4::synapse0x1d53190() {
   return (neuron0x1d33170()*-0.00588698);
}

double NNfunction_NG_4::synapse0x1d531d0() {
   return (neuron0x1d334b0()*-1.06583);
}

double NNfunction_NG_4::synapse0x1d53210() {
   return (neuron0x1d337f0()*0.0302126);
}

double NNfunction_NG_4::synapse0x1d53250() {
   return (neuron0x1d33b30()*0.00967345);
}

double NNfunction_NG_4::synapse0x1d53290() {
   return (neuron0x1d33e70()*0.0119388);
}

double NNfunction_NG_4::synapse0x1d532d0() {
   return (neuron0x1d341b0()*-0.0198913);
}

double NNfunction_NG_4::synapse0x1d53310() {
   return (neuron0x1d344f0()*0.0495554);
}

double NNfunction_NG_4::synapse0x1d53350() {
   return (neuron0x1d34830()*-0.0477604);
}

double NNfunction_NG_4::synapse0x1d53390() {
   return (neuron0x1d34b70()*-0.0127822);
}

double NNfunction_NG_4::synapse0x1d533d0() {
   return (neuron0x1d34eb0()*0.368252);
}

double NNfunction_NG_4::synapse0x1d53410() {
   return (neuron0x1d351f0()*0.0468304);
}

double NNfunction_NG_4::synapse0x1d53450() {
   return (neuron0x1d35530()*0.0541854);
}

double NNfunction_NG_4::synapse0x1d53490() {
   return (neuron0x1d35870()*-0.341983);
}

double NNfunction_NG_4::synapse0x1d534d0() {
   return (neuron0x1d35bb0()*0.0344366);
}

double NNfunction_NG_4::synapse0x1d52f60() {
   return (neuron0x1d35ef0()*0.0679154);
}

double NNfunction_NG_4::synapse0x1d52fa0() {
   return (neuron0x1d36450()*-0.16804);
}

double NNfunction_NG_4::synapse0x1d53620() {
   return (neuron0x1d36670()*0.0167608);
}

double NNfunction_NG_4::synapse0x1d53660() {
   return (neuron0x1d369b0()*0.0554777);
}

double NNfunction_NG_4::synapse0x1d536a0() {
   return (neuron0x1d36cf0()*0.0542445);
}

double NNfunction_NG_4::synapse0x1d536e0() {
   return (neuron0x1d37030()*0.00590529);
}

double NNfunction_NG_4::synapse0x1d53720() {
   return (neuron0x1d37370()*-0.0358502);
}

double NNfunction_NG_4::synapse0x1d53760() {
   return (neuron0x1d376b0()*-0.0522387);
}

double NNfunction_NG_4::synapse0x1d53ae0() {
   return (neuron0x1d32af0()*0.0356054);
}

double NNfunction_NG_4::synapse0x1d53b20() {
   return (neuron0x1d32e30()*1.17527);
}

double NNfunction_NG_4::synapse0x1d53b60() {
   return (neuron0x1d33170()*2.21881);
}

double NNfunction_NG_4::synapse0x1d53ba0() {
   return (neuron0x1d334b0()*0.0086595);
}

double NNfunction_NG_4::synapse0x1d53be0() {
   return (neuron0x1d337f0()*-0.00871547);
}

double NNfunction_NG_4::synapse0x1d53c20() {
   return (neuron0x1d33b30()*0.00595461);
}

double NNfunction_NG_4::synapse0x1d53c60() {
   return (neuron0x1d33e70()*0.0137323);
}

double NNfunction_NG_4::synapse0x1d53ca0() {
   return (neuron0x1d341b0()*0.0124941);
}

double NNfunction_NG_4::synapse0x1d53ce0() {
   return (neuron0x1d344f0()*-0.030823);
}

double NNfunction_NG_4::synapse0x1d53d20() {
   return (neuron0x1d34830()*0.0381763);
}

double NNfunction_NG_4::synapse0x1d53d60() {
   return (neuron0x1d34b70()*-0.00749963);
}

double NNfunction_NG_4::synapse0x1d53da0() {
   return (neuron0x1d34eb0()*0.609372);
}

double NNfunction_NG_4::synapse0x1d53de0() {
   return (neuron0x1d351f0()*0.0151834);
}

double NNfunction_NG_4::synapse0x1d53e20() {
   return (neuron0x1d35530()*0.00315355);
}

double NNfunction_NG_4::synapse0x1d53e60() {
   return (neuron0x1d35870()*-0.240641);
}

double NNfunction_NG_4::synapse0x1d53ea0() {
   return (neuron0x1d35bb0()*-0.00012697);
}

double NNfunction_NG_4::synapse0x1d53930() {
   return (neuron0x1d35ef0()*0.0102451);
}

double NNfunction_NG_4::synapse0x1d53970() {
   return (neuron0x1d36450()*-0.0604359);
}

double NNfunction_NG_4::synapse0x1d53ff0() {
   return (neuron0x1d36670()*0.011864);
}

double NNfunction_NG_4::synapse0x1d54030() {
   return (neuron0x1d369b0()*-0.0112498);
}

double NNfunction_NG_4::synapse0x1d54070() {
   return (neuron0x1d36cf0()*0.0184428);
}

double NNfunction_NG_4::synapse0x1d540b0() {
   return (neuron0x1d37030()*-0.0106966);
}

double NNfunction_NG_4::synapse0x1d540f0() {
   return (neuron0x1d37370()*0.00486173);
}

double NNfunction_NG_4::synapse0x1d54130() {
   return (neuron0x1d376b0()*0.986399);
}

double NNfunction_NG_4::synapse0x1d3cbe0() {
   return (neuron0x1d32af0()*-0.023793);
}

double NNfunction_NG_4::synapse0x1d3cc20() {
   return (neuron0x1d32e30()*0.00955577);
}

double NNfunction_NG_4::synapse0x1d3cc60() {
   return (neuron0x1d33170()*1.43229);
}

double NNfunction_NG_4::synapse0x1d3cca0() {
   return (neuron0x1d334b0()*-0.222268);
}

double NNfunction_NG_4::synapse0x1d3cce0() {
   return (neuron0x1d337f0()*-0.00591869);
}

double NNfunction_NG_4::synapse0x1d3cd20() {
   return (neuron0x1d33b30()*0.00719066);
}

double NNfunction_NG_4::synapse0x1d3cd60() {
   return (neuron0x1d33e70()*-0.01528);
}

double NNfunction_NG_4::synapse0x1d3cda0() {
   return (neuron0x1d341b0()*0.0320566);
}

double NNfunction_NG_4::synapse0x1d548c0() {
   return (neuron0x1d344f0()*0.0650137);
}

double NNfunction_NG_4::synapse0x1d54900() {
   return (neuron0x1d34830()*-0.0365341);
}

double NNfunction_NG_4::synapse0x1d54940() {
   return (neuron0x1d34b70()*0.00388147);
}

double NNfunction_NG_4::synapse0x1d54980() {
   return (neuron0x1d34eb0()*0.0602005);
}

double NNfunction_NG_4::synapse0x1d549c0() {
   return (neuron0x1d351f0()*-0.0213304);
}

double NNfunction_NG_4::synapse0x1d54a00() {
   return (neuron0x1d35530()*-0.0294738);
}

double NNfunction_NG_4::synapse0x1d54a40() {
   return (neuron0x1d35870()*-0.292337);
}

double NNfunction_NG_4::synapse0x1d54a80() {
   return (neuron0x1d35bb0()*-0.0378029);
}

double NNfunction_NG_4::synapse0x1d54300() {
   return (neuron0x1d35ef0()*0.00886527);
}

double NNfunction_NG_4::synapse0x1d54340() {
   return (neuron0x1d36450()*-0.133723);
}

double NNfunction_NG_4::synapse0x1d54bd0() {
   return (neuron0x1d36670()*-0.0157169);
}

double NNfunction_NG_4::synapse0x1d54c10() {
   return (neuron0x1d369b0()*0.0992105);
}

double NNfunction_NG_4::synapse0x1d54c50() {
   return (neuron0x1d36cf0()*-0.0114946);
}

double NNfunction_NG_4::synapse0x1d54c90() {
   return (neuron0x1d37030()*-0.0828335);
}

double NNfunction_NG_4::synapse0x1d54cd0() {
   return (neuron0x1d37370()*0.00600987);
}

double NNfunction_NG_4::synapse0x1d54d10() {
   return (neuron0x1d376b0()*-1.28939);
}

double NNfunction_NG_4::synapse0x1d55090() {
   return (neuron0x1d32af0()*0.0398043);
}

double NNfunction_NG_4::synapse0x1d550d0() {
   return (neuron0x1d32e30()*-5.44747);
}

double NNfunction_NG_4::synapse0x1d55110() {
   return (neuron0x1d33170()*3.44427);
}

double NNfunction_NG_4::synapse0x1d55150() {
   return (neuron0x1d334b0()*-0.00995121);
}

double NNfunction_NG_4::synapse0x1d55190() {
   return (neuron0x1d337f0()*-0.0243412);
}

double NNfunction_NG_4::synapse0x1d551d0() {
   return (neuron0x1d33b30()*0.00361457);
}

double NNfunction_NG_4::synapse0x1d55210() {
   return (neuron0x1d33e70()*0.00167547);
}

double NNfunction_NG_4::synapse0x1d55250() {
   return (neuron0x1d341b0()*-0.00439778);
}

double NNfunction_NG_4::synapse0x1d55290() {
   return (neuron0x1d344f0()*0.00191607);
}

double NNfunction_NG_4::synapse0x1d552d0() {
   return (neuron0x1d34830()*-0.0277854);
}

double NNfunction_NG_4::synapse0x1d55310() {
   return (neuron0x1d34b70()*0.0203771);
}

double NNfunction_NG_4::synapse0x1d55350() {
   return (neuron0x1d34eb0()*0.0931753);
}

double NNfunction_NG_4::synapse0x1d55390() {
   return (neuron0x1d351f0()*0.0394308);
}

double NNfunction_NG_4::synapse0x1d553d0() {
   return (neuron0x1d35530()*-0.0374847);
}

double NNfunction_NG_4::synapse0x1d55410() {
   return (neuron0x1d35870()*-0.0775353);
}

double NNfunction_NG_4::synapse0x1d55450() {
   return (neuron0x1d35bb0()*-0.00991359);
}

double NNfunction_NG_4::synapse0x1d54ee0() {
   return (neuron0x1d35ef0()*0.0187083);
}

double NNfunction_NG_4::synapse0x1d54f20() {
   return (neuron0x1d36450()*-0.0143375);
}

double NNfunction_NG_4::synapse0x1d555a0() {
   return (neuron0x1d36670()*-0.00760764);
}

double NNfunction_NG_4::synapse0x1d555e0() {
   return (neuron0x1d369b0()*0.00889025);
}

double NNfunction_NG_4::synapse0x1d55620() {
   return (neuron0x1d36cf0()*-0.00207035);
}

double NNfunction_NG_4::synapse0x1d55660() {
   return (neuron0x1d37030()*-0.0248356);
}

double NNfunction_NG_4::synapse0x1d556a0() {
   return (neuron0x1d37370()*0.00232875);
}

double NNfunction_NG_4::synapse0x1d556e0() {
   return (neuron0x1d376b0()*2.49029);
}

double NNfunction_NG_4::synapse0x1d55a60() {
   return (neuron0x1d32af0()*-0.0135831);
}

double NNfunction_NG_4::synapse0x1d55aa0() {
   return (neuron0x1d32e30()*0.551752);
}

double NNfunction_NG_4::synapse0x1d55ae0() {
   return (neuron0x1d33170()*-0.621082);
}

double NNfunction_NG_4::synapse0x1d55b20() {
   return (neuron0x1d334b0()*0.922999);
}

double NNfunction_NG_4::synapse0x1d55b60() {
   return (neuron0x1d337f0()*0.0300395);
}

double NNfunction_NG_4::synapse0x1d55ba0() {
   return (neuron0x1d33b30()*-0.00511805);
}

double NNfunction_NG_4::synapse0x1d55be0() {
   return (neuron0x1d33e70()*0.0166326);
}

double NNfunction_NG_4::synapse0x1d55c20() {
   return (neuron0x1d341b0()*0.0180123);
}

double NNfunction_NG_4::synapse0x1d55c60() {
   return (neuron0x1d344f0()*0.0464242);
}

double NNfunction_NG_4::synapse0x1d55ca0() {
   return (neuron0x1d34830()*-0.0198535);
}

double NNfunction_NG_4::synapse0x1d55ce0() {
   return (neuron0x1d34b70()*-0.0129001);
}

double NNfunction_NG_4::synapse0x1d55d20() {
   return (neuron0x1d34eb0()*0.110704);
}

double NNfunction_NG_4::synapse0x1d55d60() {
   return (neuron0x1d351f0()*-0.0949332);
}

double NNfunction_NG_4::synapse0x1d55da0() {
   return (neuron0x1d35530()*0.0055799);
}

double NNfunction_NG_4::synapse0x1d55de0() {
   return (neuron0x1d35870()*-0.11911);
}

double NNfunction_NG_4::synapse0x1d55e20() {
   return (neuron0x1d35bb0()*-0.0113636);
}

double NNfunction_NG_4::synapse0x1d558b0() {
   return (neuron0x1d35ef0()*0.000164715);
}

double NNfunction_NG_4::synapse0x1d558f0() {
   return (neuron0x1d36450()*-0.00551455);
}

double NNfunction_NG_4::synapse0x1d46420() {
   return (neuron0x1d36670()*-0.010261);
}

double NNfunction_NG_4::synapse0x1d46460() {
   return (neuron0x1d369b0()*-0.0115704);
}

double NNfunction_NG_4::synapse0x1d464a0() {
   return (neuron0x1d36cf0()*0.0148713);
}

double NNfunction_NG_4::synapse0x1d464e0() {
   return (neuron0x1d37030()*0.000298001);
}

double NNfunction_NG_4::synapse0x1d46520() {
   return (neuron0x1d37370()*0.00938281);
}

double NNfunction_NG_4::synapse0x1d46560() {
   return (neuron0x1d376b0()*0.22226);
}

double NNfunction_NG_4::synapse0x1d468e0() {
   return (neuron0x1d32af0()*-0.00618662);
}

double NNfunction_NG_4::synapse0x1d46920() {
   return (neuron0x1d32e30()*0.995425);
}

double NNfunction_NG_4::synapse0x1d46960() {
   return (neuron0x1d33170()*-0.351375);
}

double NNfunction_NG_4::synapse0x1d469a0() {
   return (neuron0x1d334b0()*-0.182001);
}

double NNfunction_NG_4::synapse0x1d469e0() {
   return (neuron0x1d337f0()*-0.00499059);
}

double NNfunction_NG_4::synapse0x1d46a20() {
   return (neuron0x1d33b30()*-0.0133784);
}

double NNfunction_NG_4::synapse0x1d46a60() {
   return (neuron0x1d33e70()*-0.00851734);
}

double NNfunction_NG_4::synapse0x1d46aa0() {
   return (neuron0x1d341b0()*-0.0128673);
}

double NNfunction_NG_4::synapse0x1d46ae0() {
   return (neuron0x1d344f0()*0.0213628);
}

double NNfunction_NG_4::synapse0x1d46b20() {
   return (neuron0x1d34830()*0.00246425);
}

double NNfunction_NG_4::synapse0x1d46b60() {
   return (neuron0x1d34b70()*-0.00308107);
}

double NNfunction_NG_4::synapse0x1d46ba0() {
   return (neuron0x1d34eb0()*-0.0814971);
}

double NNfunction_NG_4::synapse0x1d46be0() {
   return (neuron0x1d351f0()*-0.0324435);
}

double NNfunction_NG_4::synapse0x1d46c20() {
   return (neuron0x1d35530()*-0.0034983);
}

double NNfunction_NG_4::synapse0x1d46c60() {
   return (neuron0x1d35870()*0.179235);
}

double NNfunction_NG_4::synapse0x1d46ca0() {
   return (neuron0x1d35bb0()*0.0186287);
}

double NNfunction_NG_4::synapse0x1d46730() {
   return (neuron0x1d35ef0()*-1.09539e-05);
}

double NNfunction_NG_4::synapse0x1d46770() {
   return (neuron0x1d36450()*0.0132527);
}

double NNfunction_NG_4::synapse0x1d46df0() {
   return (neuron0x1d36670()*0.015331);
}

double NNfunction_NG_4::synapse0x1d46e30() {
   return (neuron0x1d369b0()*-0.00288603);
}

double NNfunction_NG_4::synapse0x1d46e70() {
   return (neuron0x1d36cf0()*-0.036255);
}

double NNfunction_NG_4::synapse0x1d46eb0() {
   return (neuron0x1d37030()*0.00897596);
}

double NNfunction_NG_4::synapse0x1d46ef0() {
   return (neuron0x1d37370()*0.00760772);
}

double NNfunction_NG_4::synapse0x1d46f30() {
   return (neuron0x1d376b0()*0.392089);
}

double NNfunction_NG_4::synapse0x1d472b0() {
   return (neuron0x1d32af0()*-0.0152576);
}

double NNfunction_NG_4::synapse0x1d472f0() {
   return (neuron0x1d32e30()*3.00843);
}

double NNfunction_NG_4::synapse0x1d47330() {
   return (neuron0x1d33170()*1.23067);
}

double NNfunction_NG_4::synapse0x1d47370() {
   return (neuron0x1d334b0()*-0.0504355);
}

double NNfunction_NG_4::synapse0x1d473b0() {
   return (neuron0x1d337f0()*0.0476308);
}

double NNfunction_NG_4::synapse0x1d473f0() {
   return (neuron0x1d33b30()*0.00823843);
}

double NNfunction_NG_4::synapse0x1d47430() {
   return (neuron0x1d33e70()*0.001147);
}

double NNfunction_NG_4::synapse0x1d47470() {
   return (neuron0x1d341b0()*-0.00325398);
}

double NNfunction_NG_4::synapse0x1d474b0() {
   return (neuron0x1d344f0()*-0.0271677);
}

double NNfunction_NG_4::synapse0x1d474f0() {
   return (neuron0x1d34830()*0.0232688);
}

double NNfunction_NG_4::synapse0x1d47530() {
   return (neuron0x1d34b70()*-0.0306689);
}

double NNfunction_NG_4::synapse0x1d47570() {
   return (neuron0x1d34eb0()*-0.807546);
}

double NNfunction_NG_4::synapse0x1d475b0() {
   return (neuron0x1d351f0()*0.0828954);
}

double NNfunction_NG_4::synapse0x1d475f0() {
   return (neuron0x1d35530()*0.0208145);
}

double NNfunction_NG_4::synapse0x1d47630() {
   return (neuron0x1d35870()*0.539826);
}

double NNfunction_NG_4::synapse0x1d47670() {
   return (neuron0x1d35bb0()*-0.00816423);
}

double NNfunction_NG_4::synapse0x1d47100() {
   return (neuron0x1d35ef0()*-0.000670552);
}

double NNfunction_NG_4::synapse0x1d47140() {
   return (neuron0x1d36450()*-0.0567782);
}

double NNfunction_NG_4::synapse0x1d477c0() {
   return (neuron0x1d36670()*-0.0507611);
}

double NNfunction_NG_4::synapse0x1d47800() {
   return (neuron0x1d369b0()*-0.0244182);
}

double NNfunction_NG_4::synapse0x1d47840() {
   return (neuron0x1d36cf0()*-0.0152093);
}

double NNfunction_NG_4::synapse0x1d47880() {
   return (neuron0x1d37030()*0.0181013);
}

double NNfunction_NG_4::synapse0x1d478c0() {
   return (neuron0x1d37370()*0.0128466);
}

double NNfunction_NG_4::synapse0x1d47900() {
   return (neuron0x1d376b0()*-0.229347);
}

double NNfunction_NG_4::synapse0x1d47c80() {
   return (neuron0x1d32af0()*-0.0289586);
}

double NNfunction_NG_4::synapse0x1d47cc0() {
   return (neuron0x1d32e30()*-0.313444);
}

double NNfunction_NG_4::synapse0x1d47d00() {
   return (neuron0x1d33170()*-0.0514292);
}

double NNfunction_NG_4::synapse0x1d47d40() {
   return (neuron0x1d334b0()*0.27613);
}

double NNfunction_NG_4::synapse0x1d47d80() {
   return (neuron0x1d337f0()*-0.0443614);
}

double NNfunction_NG_4::synapse0x1d47dc0() {
   return (neuron0x1d33b30()*-0.0155547);
}

double NNfunction_NG_4::synapse0x1d47e00() {
   return (neuron0x1d33e70()*0.00155603);
}

double NNfunction_NG_4::synapse0x1d47e40() {
   return (neuron0x1d341b0()*0.00240037);
}

double NNfunction_NG_4::synapse0x1d47e80() {
   return (neuron0x1d344f0()*-0.0234176);
}

double NNfunction_NG_4::synapse0x1d47ec0() {
   return (neuron0x1d34830()*0.0257575);
}

double NNfunction_NG_4::synapse0x1d47f00() {
   return (neuron0x1d34b70()*0.0220682);
}

double NNfunction_NG_4::synapse0x1d47f40() {
   return (neuron0x1d34eb0()*0.192476);
}

double NNfunction_NG_4::synapse0x1d47f80() {
   return (neuron0x1d351f0()*-0.015029);
}

double NNfunction_NG_4::synapse0x1d47fc0() {
   return (neuron0x1d35530()*-0.0119537);
}

double NNfunction_NG_4::synapse0x1d48000() {
   return (neuron0x1d35870()*-0.862295);
}

double NNfunction_NG_4::synapse0x1d48040() {
   return (neuron0x1d35bb0()*0.00303835);
}

double NNfunction_NG_4::synapse0x1d47ad0() {
   return (neuron0x1d35ef0()*-0.022472);
}

double NNfunction_NG_4::synapse0x1d47b10() {
   return (neuron0x1d36450()*0.281451);
}

double NNfunction_NG_4::synapse0x1d48190() {
   return (neuron0x1d36670()*0.0351227);
}

double NNfunction_NG_4::synapse0x1d481d0() {
   return (neuron0x1d369b0()*0.0054764);
}

double NNfunction_NG_4::synapse0x1d48210() {
   return (neuron0x1d36cf0()*0.0197752);
}

double NNfunction_NG_4::synapse0x1d48250() {
   return (neuron0x1d37030()*0.0194274);
}

double NNfunction_NG_4::synapse0x1d48290() {
   return (neuron0x1d37370()*-0.00811716);
}

double NNfunction_NG_4::synapse0x1d482d0() {
   return (neuron0x1d376b0()*0.165346);
}

double NNfunction_NG_4::synapse0x1d5a1a0() {
   return (neuron0x1d32af0()*0.00096972);
}

double NNfunction_NG_4::synapse0x1d5a1e0() {
   return (neuron0x1d32e30()*-0.0427552);
}

double NNfunction_NG_4::synapse0x1d5a220() {
   return (neuron0x1d33170()*-0.0663565);
}

double NNfunction_NG_4::synapse0x1d5a260() {
   return (neuron0x1d334b0()*1.68563);
}

double NNfunction_NG_4::synapse0x1d5a2a0() {
   return (neuron0x1d337f0()*-0.00413686);
}

double NNfunction_NG_4::synapse0x1d5a2e0() {
   return (neuron0x1d33b30()*0.0412995);
}

double NNfunction_NG_4::synapse0x1d5a320() {
   return (neuron0x1d33e70()*-0.000686452);
}

double NNfunction_NG_4::synapse0x1d5a360() {
   return (neuron0x1d341b0()*0.028733);
}

double NNfunction_NG_4::synapse0x1d5a3a0() {
   return (neuron0x1d344f0()*0.0260862);
}

double NNfunction_NG_4::synapse0x1d5a3e0() {
   return (neuron0x1d34830()*-0.0360558);
}

double NNfunction_NG_4::synapse0x1d5a420() {
   return (neuron0x1d34b70()*0.00243213);
}

double NNfunction_NG_4::synapse0x1d5a460() {
   return (neuron0x1d34eb0()*-0.077463);
}

double NNfunction_NG_4::synapse0x1d5a4a0() {
   return (neuron0x1d351f0()*-0.00614817);
}

double NNfunction_NG_4::synapse0x1d5a4e0() {
   return (neuron0x1d35530()*-0.00935506);
}

double NNfunction_NG_4::synapse0x1d5a520() {
   return (neuron0x1d35870()*1.14401);
}

double NNfunction_NG_4::synapse0x1d5a560() {
   return (neuron0x1d35bb0()*0.00899586);
}

double NNfunction_NG_4::synapse0x1d48310() {
   return (neuron0x1d35ef0()*0.0212328);
}

double NNfunction_NG_4::synapse0x1d48350() {
   return (neuron0x1d36450()*-0.216268);
}

double NNfunction_NG_4::synapse0x1d5a6b0() {
   return (neuron0x1d36670()*-0.0373469);
}

double NNfunction_NG_4::synapse0x1d5a6f0() {
   return (neuron0x1d369b0()*0.00649847);
}

double NNfunction_NG_4::synapse0x1d5a730() {
   return (neuron0x1d36cf0()*0.0201005);
}

double NNfunction_NG_4::synapse0x1d5a770() {
   return (neuron0x1d37030()*0.00536213);
}

double NNfunction_NG_4::synapse0x1d5a7b0() {
   return (neuron0x1d37370()*-0.0301574);
}

double NNfunction_NG_4::synapse0x1d5a7f0() {
   return (neuron0x1d376b0()*-0.095272);
}

double NNfunction_NG_4::synapse0x1d5ab70() {
   return (neuron0x1d32af0()*0.0236172);
}

double NNfunction_NG_4::synapse0x1d5abb0() {
   return (neuron0x1d32e30()*-5.78544);
}

double NNfunction_NG_4::synapse0x1d5abf0() {
   return (neuron0x1d33170()*3.32597);
}

double NNfunction_NG_4::synapse0x1d5ac30() {
   return (neuron0x1d334b0()*-0.00894014);
}

double NNfunction_NG_4::synapse0x1d5ac70() {
   return (neuron0x1d337f0()*0.0138621);
}

double NNfunction_NG_4::synapse0x1d5acb0() {
   return (neuron0x1d33b30()*0.0299458);
}

double NNfunction_NG_4::synapse0x1d5acf0() {
   return (neuron0x1d33e70()*0.00137644);
}

double NNfunction_NG_4::synapse0x1d5ad30() {
   return (neuron0x1d341b0()*0.0028418);
}

double NNfunction_NG_4::synapse0x1d5ad70() {
   return (neuron0x1d344f0()*-0.0224091);
}

double NNfunction_NG_4::synapse0x1d5adb0() {
   return (neuron0x1d34830()*-0.013658);
}

double NNfunction_NG_4::synapse0x1d5adf0() {
   return (neuron0x1d34b70()*-0.00730411);
}

double NNfunction_NG_4::synapse0x1d5ae30() {
   return (neuron0x1d34eb0()*-0.609304);
}

double NNfunction_NG_4::synapse0x1d5ae70() {
   return (neuron0x1d351f0()*-0.0492043);
}

double NNfunction_NG_4::synapse0x1d5aeb0() {
   return (neuron0x1d35530()*0.0147655);
}

double NNfunction_NG_4::synapse0x1d5aef0() {
   return (neuron0x1d35870()*0.409122);
}

double NNfunction_NG_4::synapse0x1d5af30() {
   return (neuron0x1d35bb0()*0.00565922);
}

double NNfunction_NG_4::synapse0x1d5a9c0() {
   return (neuron0x1d35ef0()*-0.00222297);
}

double NNfunction_NG_4::synapse0x1d5aa00() {
   return (neuron0x1d36450()*0.107137);
}

double NNfunction_NG_4::synapse0x1d5b080() {
   return (neuron0x1d36670()*-0.0014633);
}

double NNfunction_NG_4::synapse0x1d5b0c0() {
   return (neuron0x1d369b0()*-0.0108013);
}

double NNfunction_NG_4::synapse0x1d5b100() {
   return (neuron0x1d36cf0()*0.0175721);
}

double NNfunction_NG_4::synapse0x1d5b140() {
   return (neuron0x1d37030()*-0.0181554);
}

double NNfunction_NG_4::synapse0x1d5b180() {
   return (neuron0x1d37370()*-0.00466137);
}

double NNfunction_NG_4::synapse0x1d5b1c0() {
   return (neuron0x1d376b0()*-0.11001);
}

double NNfunction_NG_4::synapse0x1d5b540() {
   return (neuron0x1d32af0()*-0.0631601);
}

double NNfunction_NG_4::synapse0x1d5b580() {
   return (neuron0x1d32e30()*-1.97123);
}

double NNfunction_NG_4::synapse0x1d5b5c0() {
   return (neuron0x1d33170()*-0.610946);
}

double NNfunction_NG_4::synapse0x1d5b600() {
   return (neuron0x1d334b0()*0.0718783);
}

double NNfunction_NG_4::synapse0x1d5b640() {
   return (neuron0x1d337f0()*-0.0232566);
}

double NNfunction_NG_4::synapse0x1d5b680() {
   return (neuron0x1d33b30()*-0.0214103);
}

double NNfunction_NG_4::synapse0x1d5b6c0() {
   return (neuron0x1d33e70()*-0.00844442);
}

double NNfunction_NG_4::synapse0x1d5b700() {
   return (neuron0x1d341b0()*-0.0300634);
}

double NNfunction_NG_4::synapse0x1d5b740() {
   return (neuron0x1d344f0()*0.0187642);
}

double NNfunction_NG_4::synapse0x1d5b780() {
   return (neuron0x1d34830()*-0.000572053);
}

double NNfunction_NG_4::synapse0x1d5b7c0() {
   return (neuron0x1d34b70()*0.0204861);
}

double NNfunction_NG_4::synapse0x1d5b800() {
   return (neuron0x1d34eb0()*0.0444873);
}

double NNfunction_NG_4::synapse0x1d5b840() {
   return (neuron0x1d351f0()*-0.0202642);
}

double NNfunction_NG_4::synapse0x1d5b880() {
   return (neuron0x1d35530()*-0.00463047);
}

double NNfunction_NG_4::synapse0x1d5b8c0() {
   return (neuron0x1d35870()*-0.0406817);
}

double NNfunction_NG_4::synapse0x1d5b900() {
   return (neuron0x1d35bb0()*0.0176805);
}

double NNfunction_NG_4::synapse0x1d5b390() {
   return (neuron0x1d35ef0()*-0.0145319);
}

double NNfunction_NG_4::synapse0x1d5b3d0() {
   return (neuron0x1d36450()*0.189784);
}

double NNfunction_NG_4::synapse0x1d5ba50() {
   return (neuron0x1d36670()*0.0299427);
}

double NNfunction_NG_4::synapse0x1d5ba90() {
   return (neuron0x1d369b0()*0.000630528);
}

double NNfunction_NG_4::synapse0x1d5bad0() {
   return (neuron0x1d36cf0()*-0.0383098);
}

double NNfunction_NG_4::synapse0x1d5bb10() {
   return (neuron0x1d37030()*-0.032501);
}

double NNfunction_NG_4::synapse0x1d5bb50() {
   return (neuron0x1d37370()*0.0174379);
}

double NNfunction_NG_4::synapse0x1d5bb90() {
   return (neuron0x1d376b0()*0.48018);
}

double NNfunction_NG_4::synapse0x1d5bf10() {
   return (neuron0x1d32af0()*-0.0263661);
}

double NNfunction_NG_4::synapse0x1d5bf50() {
   return (neuron0x1d32e30()*0.276948);
}

double NNfunction_NG_4::synapse0x1d5bf90() {
   return (neuron0x1d33170()*-0.607986);
}

double NNfunction_NG_4::synapse0x1d5bfd0() {
   return (neuron0x1d334b0()*-0.39207);
}

double NNfunction_NG_4::synapse0x1d5c010() {
   return (neuron0x1d337f0()*-0.0310069);
}

double NNfunction_NG_4::synapse0x1d5c050() {
   return (neuron0x1d33b30()*-0.00394497);
}

double NNfunction_NG_4::synapse0x1d5c090() {
   return (neuron0x1d33e70()*-0.0342775);
}

double NNfunction_NG_4::synapse0x1d5c0d0() {
   return (neuron0x1d341b0()*-0.0382451);
}

double NNfunction_NG_4::synapse0x1d5c110() {
   return (neuron0x1d344f0()*-0.00495241);
}

double NNfunction_NG_4::synapse0x1d5c150() {
   return (neuron0x1d34830()*0.0616212);
}

double NNfunction_NG_4::synapse0x1d5c190() {
   return (neuron0x1d34b70()*-0.0330496);
}

double NNfunction_NG_4::synapse0x1d5c1d0() {
   return (neuron0x1d34eb0()*0.0409081);
}

double NNfunction_NG_4::synapse0x1d5c210() {
   return (neuron0x1d351f0()*0.0527378);
}

double NNfunction_NG_4::synapse0x1d5c250() {
   return (neuron0x1d35530()*0.0500393);
}

double NNfunction_NG_4::synapse0x1d5c290() {
   return (neuron0x1d35870()*-0.374846);
}

double NNfunction_NG_4::synapse0x1d5c2d0() {
   return (neuron0x1d35bb0()*0.00236799);
}

double NNfunction_NG_4::synapse0x1d5bd60() {
   return (neuron0x1d35ef0()*-0.0192873);
}

double NNfunction_NG_4::synapse0x1d5bda0() {
   return (neuron0x1d36450()*0.064417);
}

double NNfunction_NG_4::synapse0x1d5c420() {
   return (neuron0x1d36670()*-0.00575157);
}

double NNfunction_NG_4::synapse0x1d5c460() {
   return (neuron0x1d369b0()*0.0203003);
}

double NNfunction_NG_4::synapse0x1d5c4a0() {
   return (neuron0x1d36cf0()*0.0421766);
}

double NNfunction_NG_4::synapse0x1d5c4e0() {
   return (neuron0x1d37030()*0.0250806);
}

double NNfunction_NG_4::synapse0x1d5c520() {
   return (neuron0x1d37370()*-0.00149744);
}

double NNfunction_NG_4::synapse0x1d5c560() {
   return (neuron0x1d376b0()*-0.0346184);
}

double NNfunction_NG_4::synapse0x1d38b00() {
   return (neuron0x1d37b50()*-0.0110199);
}

double NNfunction_NG_4::synapse0x1d38b40() {
   return (neuron0x1d38460()*-0.138835);
}

double NNfunction_NG_4::synapse0x1d3a010() {
   return (neuron0x1d38f40()*-0.0869194);
}

double NNfunction_NG_4::synapse0x1d3a050() {
   return (neuron0x1af27d0()*-0.120168);
}

double NNfunction_NG_4::synapse0x1d3a9e0() {
   return (neuron0x1d39d60()*-0.0144009);
}

double NNfunction_NG_4::synapse0x1d3aa20() {
   return (neuron0x1d3a730()*-0.470002);
}

double NNfunction_NG_4::synapse0x1d3b7b0() {
   return (neuron0x1d3b500()*0.0335948);
}

double NNfunction_NG_4::synapse0x1d3b7f0() {
   return (neuron0x1d3bed0()*-0.162762);
}

double NNfunction_NG_4::synapse0x1d3c180() {
   return (neuron0x1d3c8a0()*-0.989559);
}

double NNfunction_NG_4::synapse0x1d3c1c0() {
   return (neuron0x1d3d380()*-1.65949);
}

double NNfunction_NG_4::synapse0x1d3cb50() {
   return (neuron0x1d3dd50()*0.370973);
}

double NNfunction_NG_4::synapse0x1d3cb90() {
   return (neuron0x1d3ae30()*0.365726);
}

double NNfunction_NG_4::synapse0x1d3d630() {
   return (neuron0x1d3f900()*1.01478);
}

double NNfunction_NG_4::synapse0x1d3d670() {
   return (neuron0x1d402d0()*1.08683);
}

double NNfunction_NG_4::synapse0x1d3e000() {
   return (neuron0x1d40ca0()*1.07525);
}

double NNfunction_NG_4::synapse0x1d3e040() {
   return (neuron0x1d41670()*-0.00470021);
}

double NNfunction_NG_4::synapse0x1d3b0e0() {
   return (neuron0x1d43480()*0.0446746);
}

double NNfunction_NG_4::synapse0x1d3b120() {
   return (neuron0x1d43760()*-0.00815716);
}

double NNfunction_NG_4::synapse0x1d3fbb0() {
   return (neuron0x1d44130()*0.0333148);
}

double NNfunction_NG_4::synapse0x1d3fbf0() {
   return (neuron0x1d44b00()*-0.139276);
}

double NNfunction_NG_4::synapse0x1d40580() {
   return (neuron0x1d454d0()*-0.00177865);
}

double NNfunction_NG_4::synapse0x1d405c0() {
   return (neuron0x1d45ea0()*-0.0954315);
}

double NNfunction_NG_4::synapse0x1d40f50() {
   return (neuron0x1d3e9f0()*0.209801);
}

double NNfunction_NG_4::synapse0x1d40f90() {
   return (neuron0x1d3f3c0()*0.458088);
}

double NNfunction_NG_4::synapse0x1d41920() {
   return (neuron0x1d48c30()*1.58669);
}

double NNfunction_NG_4::synapse0x1d41960() {
   return (neuron0x1d49600()*-0.124043);
}

double NNfunction_NG_4::synapse0x1d35a90() {
   return (neuron0x1d49fd0()*-0.0710233);
}

double NNfunction_NG_4::synapse0x1d35ad0() {
   return (neuron0x1d4a9a0()*-0.154317);
}

double NNfunction_NG_4::synapse0x1d43a10() {
   return (neuron0x1d4b370()*0.606859);
}

double NNfunction_NG_4::synapse0x1d43a50() {
   return (neuron0x1d4bd40()*0.522049);
}

double NNfunction_NG_4::synapse0x1d443e0() {
   return (neuron0x1d4c710()*-0.0942762);
}

double NNfunction_NG_4::synapse0x1d44420() {
   return (neuron0x1d4d0e0()*-0.076744);
}

double NNfunction_NG_4::synapse0x1d44db0() {
   return (neuron0x1d43170()*0.0470117);
}

double NNfunction_NG_4::synapse0x1d44df0() {
   return (neuron0x1d4fcc0()*0.120274);
}

double NNfunction_NG_4::synapse0x1d45780() {
   return (neuron0x1d50690()*-0.038214);
}

double NNfunction_NG_4::synapse0x1d457c0() {
   return (neuron0x1d51060()*1.40661);
}

double NNfunction_NG_4::synapse0x1d46150() {
   return (neuron0x1d51a30()*0.675275);
}

double NNfunction_NG_4::synapse0x1d46190() {
   return (neuron0x1d52400()*0.210994);
}

double NNfunction_NG_4::synapse0x1d3eca0() {
   return (neuron0x1d52dd0()*0.26623);
}

double NNfunction_NG_4::synapse0x1d3ece0() {
   return (neuron0x1d537a0()*-0.121029);
}

double NNfunction_NG_4::synapse0x1d48550() {
   return (neuron0x1d54170()*-0.00282785);
}

double NNfunction_NG_4::synapse0x1d48590() {
   return (neuron0x1d54d50()*-0.0495097);
}

double NNfunction_NG_4::synapse0x1d48ee0() {
   return (neuron0x1d55720()*-0.38066);
}

double NNfunction_NG_4::synapse0x1d48f20() {
   return (neuron0x1d465a0()*0.621062);
}

double NNfunction_NG_4::synapse0x1d498b0() {
   return (neuron0x1d46f70()*-0.187147);
}

double NNfunction_NG_4::synapse0x1d498f0() {
   return (neuron0x1d47940()*-0.299109);
}

double NNfunction_NG_4::synapse0x1d4a280() {
   return (neuron0x1d59f80()*0.0671479);
}

double NNfunction_NG_4::synapse0x1d4a2c0() {
   return (neuron0x1d5a830()*-0.0531716);
}

double NNfunction_NG_4::synapse0x1d4ac50() {
   return (neuron0x1d5b200()*-0.52083);
}

double NNfunction_NG_4::synapse0x1d4ac90() {
   return (neuron0x1d5bbd0()*0.243902);
}

double NNfunction_NG_4::synapse0x1d4d390() {
   return (neuron0x1d37b50()*1.41572);
}

double NNfunction_NG_4::synapse0x1d4d3d0() {
   return (neuron0x1d38460()*-0.799666);
}

double NNfunction_NG_4::synapse0x1d42950() {
   return (neuron0x1d38f40()*0.735989);
}

double NNfunction_NG_4::synapse0x1d42990() {
   return (neuron0x1af27d0()*-0.425634);
}

double NNfunction_NG_4::synapse0x1d4ff70() {
   return (neuron0x1d39d60()*0.138664);
}

double NNfunction_NG_4::synapse0x1d4ffb0() {
   return (neuron0x1d3a730()*-0.267677);
}

double NNfunction_NG_4::synapse0x1d50940() {
   return (neuron0x1d3b500()*0.936895);
}

double NNfunction_NG_4::synapse0x1d50980() {
   return (neuron0x1d3bed0()*-0.266662);
}

double NNfunction_NG_4::synapse0x1d51310() {
   return (neuron0x1d3c8a0()*-0.931569);
}

double NNfunction_NG_4::synapse0x1d51350() {
   return (neuron0x1d3d380()*-1.48508);
}

double NNfunction_NG_4::synapse0x1d51ce0() {
   return (neuron0x1d3dd50()*0.41913);
}

double NNfunction_NG_4::synapse0x1d51d20() {
   return (neuron0x1d3ae30()*-1.09377);
}

double NNfunction_NG_4::synapse0x1d526b0() {
   return (neuron0x1d3f900()*-0.543899);
}

double NNfunction_NG_4::synapse0x1d526f0() {
   return (neuron0x1d402d0()*1.82694);
}

double NNfunction_NG_4::synapse0x1d53080() {
   return (neuron0x1d40ca0()*-2.41796);
}

double NNfunction_NG_4::synapse0x1d530c0() {
   return (neuron0x1d41670()*0.237789);
}

double NNfunction_NG_4::synapse0x1d53a50() {
   return (neuron0x1d43480()*0.132248);
}

double NNfunction_NG_4::synapse0x1d53a90() {
   return (neuron0x1d43760()*-0.036516);
}

double NNfunction_NG_4::synapse0x1d54420() {
   return (neuron0x1d44130()*-0.127443);
}

double NNfunction_NG_4::synapse0x1d54460() {
   return (neuron0x1d44b00()*-0.013054);
}

double NNfunction_NG_4::synapse0x1d55000() {
   return (neuron0x1d454d0()*0.0774627);
}

double NNfunction_NG_4::synapse0x1d55040() {
   return (neuron0x1d45ea0()*0.0456094);
}

double NNfunction_NG_4::synapse0x1d559d0() {
   return (neuron0x1d3e9f0()*0.0833638);
}

double NNfunction_NG_4::synapse0x1d55a10() {
   return (neuron0x1d3f3c0()*0.439668);
}

double NNfunction_NG_4::synapse0x1d46850() {
   return (neuron0x1d48c30()*-0.204105);
}

double NNfunction_NG_4::synapse0x1d46890() {
   return (neuron0x1d49600()*-0.0386318);
}

double NNfunction_NG_4::synapse0x1d47220() {
   return (neuron0x1d49fd0()*0.106151);
}

double NNfunction_NG_4::synapse0x1d47260() {
   return (neuron0x1d4a9a0()*-0.341622);
}

double NNfunction_NG_4::synapse0x1d47bf0() {
   return (neuron0x1d4b370()*-0.206897);
}

double NNfunction_NG_4::synapse0x1d47c30() {
   return (neuron0x1d4bd40()*-0.0858253);
}

double NNfunction_NG_4::synapse0x1d5a110() {
   return (neuron0x1d4c710()*0.978836);
}

double NNfunction_NG_4::synapse0x1d5a150() {
   return (neuron0x1d4d0e0()*-0.771839);
}

double NNfunction_NG_4::synapse0x1d5aae0() {
   return (neuron0x1d43170()*-0.607464);
}

double NNfunction_NG_4::synapse0x1d5ab20() {
   return (neuron0x1d4fcc0()*0.393234);
}

double NNfunction_NG_4::synapse0x1d5b4b0() {
   return (neuron0x1d50690()*0.110207);
}

double NNfunction_NG_4::synapse0x1d5b4f0() {
   return (neuron0x1d51060()*-1.7101);
}

double NNfunction_NG_4::synapse0x1d5be80() {
   return (neuron0x1d51a30()*-0.175897);
}

double NNfunction_NG_4::synapse0x1d5bec0() {
   return (neuron0x1d52400()*0.151662);
}

double NNfunction_NG_4::synapse0x1d37d70() {
   return (neuron0x1d52dd0()*-1.37716);
}

double NNfunction_NG_4::synapse0x1d37db0() {
   return (neuron0x1d537a0()*0.143429);
}

double NNfunction_NG_4::synapse0x1d4b620() {
   return (neuron0x1d54170()*0.11914);
}

double NNfunction_NG_4::synapse0x1d4b660() {
   return (neuron0x1d54d50()*0.0169166);
}

double NNfunction_NG_4::synapse0x1d5c5a0() {
   return (neuron0x1d55720()*-0.113091);
}

double NNfunction_NG_4::synapse0x1d5c5e0() {
   return (neuron0x1d465a0()*0.961872);
}

double NNfunction_NG_4::synapse0x1d5c620() {
   return (neuron0x1d46f70()*0.0209502);
}

double NNfunction_NG_4::synapse0x1d5c660() {
   return (neuron0x1d47940()*-0.146963);
}

double NNfunction_NG_4::synapse0x1d63510() {
   return (neuron0x1d59f80()*1.64583);
}

double NNfunction_NG_4::synapse0x1d63550() {
   return (neuron0x1d5a830()*-0.0923498);
}

double NNfunction_NG_4::synapse0x1d63590() {
   return (neuron0x1d5b200()*-0.277109);
}

double NNfunction_NG_4::synapse0x1d635d0() {
   return (neuron0x1d5bbd0()*0.573758);
}

double NNfunction_NG_4::synapse0x1d63950() {
   return (neuron0x1d37b50()*-0.580161);
}

double NNfunction_NG_4::synapse0x1d63990() {
   return (neuron0x1d38460()*0.310344);
}

double NNfunction_NG_4::synapse0x1d639d0() {
   return (neuron0x1d38f40()*-1.30197);
}

double NNfunction_NG_4::synapse0x1d63a10() {
   return (neuron0x1af27d0()*-1.10162);
}

double NNfunction_NG_4::synapse0x1d63a50() {
   return (neuron0x1d39d60()*0.144515);
}

double NNfunction_NG_4::synapse0x1d63a90() {
   return (neuron0x1d3a730()*0.839115);
}

double NNfunction_NG_4::synapse0x1d63ad0() {
   return (neuron0x1d3b500()*-0.140171);
}

double NNfunction_NG_4::synapse0x1d63b10() {
   return (neuron0x1d3bed0()*1.89219);
}

double NNfunction_NG_4::synapse0x1d63b50() {
   return (neuron0x1d3c8a0()*-0.218903);
}

double NNfunction_NG_4::synapse0x1d63b90() {
   return (neuron0x1d3d380()*0.397255);
}

double NNfunction_NG_4::synapse0x1d63bd0() {
   return (neuron0x1d3dd50()*0.0310761);
}

double NNfunction_NG_4::synapse0x1d63c10() {
   return (neuron0x1d3ae30()*-0.470654);
}

double NNfunction_NG_4::synapse0x1d63c50() {
   return (neuron0x1d3f900()*-0.264341);
}

double NNfunction_NG_4::synapse0x1d63c90() {
   return (neuron0x1d402d0()*-0.8011);
}

double NNfunction_NG_4::synapse0x1d63cd0() {
   return (neuron0x1d40ca0()*-0.207932);
}

double NNfunction_NG_4::synapse0x1d63d10() {
   return (neuron0x1d41670()*0.577249);
}

double NNfunction_NG_4::synapse0x1d637a0() {
   return (neuron0x1d43480()*-0.206262);
}

double NNfunction_NG_4::synapse0x1d637e0() {
   return (neuron0x1d43760()*-0.0483621);
}

double NNfunction_NG_4::synapse0x1d63e60() {
   return (neuron0x1d44130()*2.0102);
}

double NNfunction_NG_4::synapse0x1d63ea0() {
   return (neuron0x1d44b00()*-2.51796);
}

double NNfunction_NG_4::synapse0x1d63ee0() {
   return (neuron0x1d454d0()*-0.61266);
}

double NNfunction_NG_4::synapse0x1d63f20() {
   return (neuron0x1d45ea0()*0.443014);
}

double NNfunction_NG_4::synapse0x1d63f60() {
   return (neuron0x1d3e9f0()*-1.06432);
}

double NNfunction_NG_4::synapse0x1d63fa0() {
   return (neuron0x1d3f3c0()*-1.30737);
}

double NNfunction_NG_4::synapse0x1d63fe0() {
   return (neuron0x1d48c30()*0.845326);
}

double NNfunction_NG_4::synapse0x1d64020() {
   return (neuron0x1d49600()*-0.0746935);
}

double NNfunction_NG_4::synapse0x1d64060() {
   return (neuron0x1d49fd0()*-5.01611);
}

double NNfunction_NG_4::synapse0x1d640a0() {
   return (neuron0x1d4a9a0()*0.953177);
}

double NNfunction_NG_4::synapse0x1d640e0() {
   return (neuron0x1d4b370()*-0.651355);
}

double NNfunction_NG_4::synapse0x1d64120() {
   return (neuron0x1d4bd40()*-0.739458);
}

double NNfunction_NG_4::synapse0x1d64160() {
   return (neuron0x1d4c710()*-0.616318);
}

double NNfunction_NG_4::synapse0x1d641a0() {
   return (neuron0x1d4d0e0()*0.253414);
}

double NNfunction_NG_4::synapse0x1d63d50() {
   return (neuron0x1d43170()*-0.36457);
}

double NNfunction_NG_4::synapse0x1d63d90() {
   return (neuron0x1d4fcc0()*-0.55639);
}

double NNfunction_NG_4::synapse0x1d63dd0() {
   return (neuron0x1d50690()*-0.267297);
}

double NNfunction_NG_4::synapse0x1d63e10() {
   return (neuron0x1d51060()*-0.92476);
}

double NNfunction_NG_4::synapse0x1d643f0() {
   return (neuron0x1d51a30()*-1.75811);
}

double NNfunction_NG_4::synapse0x1d64430() {
   return (neuron0x1d52400()*3.73747);
}

double NNfunction_NG_4::synapse0x1d64470() {
   return (neuron0x1d52dd0()*-0.532792);
}

double NNfunction_NG_4::synapse0x1d644b0() {
   return (neuron0x1d537a0()*2.24575);
}

double NNfunction_NG_4::synapse0x1d644f0() {
   return (neuron0x1d54170()*0.63517);
}

double NNfunction_NG_4::synapse0x1d64530() {
   return (neuron0x1d54d50()*0.649803);
}

double NNfunction_NG_4::synapse0x1d64570() {
   return (neuron0x1d55720()*0.492753);
}

double NNfunction_NG_4::synapse0x1d645b0() {
   return (neuron0x1d465a0()*0.366851);
}

double NNfunction_NG_4::synapse0x1d645f0() {
   return (neuron0x1d46f70()*0.193308);
}

double NNfunction_NG_4::synapse0x1d64630() {
   return (neuron0x1d47940()*0.316112);
}

double NNfunction_NG_4::synapse0x1d64670() {
   return (neuron0x1d59f80()*-0.112038);
}

double NNfunction_NG_4::synapse0x1d646b0() {
   return (neuron0x1d5a830()*-1.54102);
}

double NNfunction_NG_4::synapse0x1d646f0() {
   return (neuron0x1d5b200()*-0.226448);
}

double NNfunction_NG_4::synapse0x1d64730() {
   return (neuron0x1d5bbd0()*1.10581);
}

double NNfunction_NG_4::synapse0x1d64ab0() {
   return (neuron0x1d37b50()*0.448699);
}

double NNfunction_NG_4::synapse0x1d64af0() {
   return (neuron0x1d38460()*-0.195553);
}

double NNfunction_NG_4::synapse0x1d64b30() {
   return (neuron0x1d38f40()*1.27733);
}

double NNfunction_NG_4::synapse0x1d64b70() {
   return (neuron0x1af27d0()*0.610757);
}

double NNfunction_NG_4::synapse0x1d64bb0() {
   return (neuron0x1d39d60()*0.0615914);
}

double NNfunction_NG_4::synapse0x1d64bf0() {
   return (neuron0x1d3a730()*-0.106958);
}

double NNfunction_NG_4::synapse0x1d64c30() {
   return (neuron0x1d3b500()*0.0381328);
}

double NNfunction_NG_4::synapse0x1d64c70() {
   return (neuron0x1d3bed0()*-0.89701);
}

double NNfunction_NG_4::synapse0x1d64cb0() {
   return (neuron0x1d3c8a0()*-0.664866);
}

double NNfunction_NG_4::synapse0x1d64cf0() {
   return (neuron0x1d3d380()*0.0208324);
}

double NNfunction_NG_4::synapse0x1d64d30() {
   return (neuron0x1d3dd50()*0.696181);
}

double NNfunction_NG_4::synapse0x1d64d70() {
   return (neuron0x1d3ae30()*-0.25165);
}

double NNfunction_NG_4::synapse0x1d64db0() {
   return (neuron0x1d3f900()*0.566274);
}

double NNfunction_NG_4::synapse0x1d64df0() {
   return (neuron0x1d402d0()*0.408696);
}

double NNfunction_NG_4::synapse0x1d64e30() {
   return (neuron0x1d40ca0()*0.0803813);
}

double NNfunction_NG_4::synapse0x1d64e70() {
   return (neuron0x1d41670()*0.980248);
}

double NNfunction_NG_4::synapse0x1d64900() {
   return (neuron0x1d43480()*-1.20004);
}

double NNfunction_NG_4::synapse0x1d64940() {
   return (neuron0x1d43760()*-0.0902269);
}

double NNfunction_NG_4::synapse0x1d64fc0() {
   return (neuron0x1d44130()*0.618344);
}

double NNfunction_NG_4::synapse0x1d65000() {
   return (neuron0x1d44b00()*2.14021);
}

double NNfunction_NG_4::synapse0x1d65040() {
   return (neuron0x1d454d0()*0.586859);
}

double NNfunction_NG_4::synapse0x1d65080() {
   return (neuron0x1d45ea0()*-0.225699);
}

double NNfunction_NG_4::synapse0x1d650c0() {
   return (neuron0x1d3e9f0()*1.14132);
}

double NNfunction_NG_4::synapse0x1d65100() {
   return (neuron0x1d3f3c0()*1.33248);
}

double NNfunction_NG_4::synapse0x1d65140() {
   return (neuron0x1d48c30()*2.26277);
}

double NNfunction_NG_4::synapse0x1d65180() {
   return (neuron0x1d49600()*-0.548497);
}

double NNfunction_NG_4::synapse0x1d651c0() {
   return (neuron0x1d49fd0()*-2.5359);
}

double NNfunction_NG_4::synapse0x1d65200() {
   return (neuron0x1d4a9a0()*-1.00358);
}

double NNfunction_NG_4::synapse0x1d65240() {
   return (neuron0x1d4b370()*-0.304772);
}

double NNfunction_NG_4::synapse0x1d65280() {
   return (neuron0x1d4bd40()*0.51556);
}

double NNfunction_NG_4::synapse0x1d652c0() {
   return (neuron0x1d4c710()*1.31581);
}

double NNfunction_NG_4::synapse0x1d65300() {
   return (neuron0x1d4d0e0()*-3.49448);
}

double NNfunction_NG_4::synapse0x1d64eb0() {
   return (neuron0x1d43170()*-0.99253);
}

double NNfunction_NG_4::synapse0x1d64ef0() {
   return (neuron0x1d4fcc0()*1.30548);
}

double NNfunction_NG_4::synapse0x1d64f30() {
   return (neuron0x1d50690()*0.265238);
}

double NNfunction_NG_4::synapse0x1d64f70() {
   return (neuron0x1d51060()*0.711963);
}

double NNfunction_NG_4::synapse0x1d65550() {
   return (neuron0x1d51a30()*0.5974);
}

double NNfunction_NG_4::synapse0x1d65590() {
   return (neuron0x1d52400()*-2.44771);
}

double NNfunction_NG_4::synapse0x1d655d0() {
   return (neuron0x1d52dd0()*0.21286);
}

double NNfunction_NG_4::synapse0x1d65610() {
   return (neuron0x1d537a0()*-1.91823);
}

double NNfunction_NG_4::synapse0x1d65650() {
   return (neuron0x1d54170()*0.961788);
}

double NNfunction_NG_4::synapse0x1d65690() {
   return (neuron0x1d54d50()*2.75532);
}

double NNfunction_NG_4::synapse0x1d656d0() {
   return (neuron0x1d55720()*-0.252139);
}

double NNfunction_NG_4::synapse0x1d65710() {
   return (neuron0x1d465a0()*-0.663579);
}

double NNfunction_NG_4::synapse0x1d65750() {
   return (neuron0x1d46f70()*-0.644484);
}

double NNfunction_NG_4::synapse0x1d65790() {
   return (neuron0x1d47940()*-0.715262);
}

double NNfunction_NG_4::synapse0x1d657d0() {
   return (neuron0x1d59f80()*-0.091486);
}

double NNfunction_NG_4::synapse0x1d65810() {
   return (neuron0x1d5a830()*0.628118);
}

double NNfunction_NG_4::synapse0x1d65850() {
   return (neuron0x1d5b200()*-0.777467);
}

double NNfunction_NG_4::synapse0x1d65890() {
   return (neuron0x1d5bbd0()*0.069566);
}

double NNfunction_NG_4::synapse0x1d65c10() {
   return (neuron0x1d37b50()*0.133213);
}

double NNfunction_NG_4::synapse0x1d65c50() {
   return (neuron0x1d38460()*0.281802);
}

double NNfunction_NG_4::synapse0x1d65c90() {
   return (neuron0x1d38f40()*0.320087);
}

double NNfunction_NG_4::synapse0x1d65cd0() {
   return (neuron0x1af27d0()*2.09943);
}

double NNfunction_NG_4::synapse0x1d65d10() {
   return (neuron0x1d39d60()*-0.211756);
}

double NNfunction_NG_4::synapse0x1d65d50() {
   return (neuron0x1d3a730()*-0.885405);
}

double NNfunction_NG_4::synapse0x1d65d90() {
   return (neuron0x1d3b500()*-0.0743021);
}

double NNfunction_NG_4::synapse0x1d65dd0() {
   return (neuron0x1d3bed0()*-1.19858);
}

double NNfunction_NG_4::synapse0x1d65e10() {
   return (neuron0x1d3c8a0()*0.65602);
}

double NNfunction_NG_4::synapse0x1d65e50() {
   return (neuron0x1d3d380()*-0.472486);
}

double NNfunction_NG_4::synapse0x1d65e90() {
   return (neuron0x1d3dd50()*3.07097);
}

double NNfunction_NG_4::synapse0x1d65ed0() {
   return (neuron0x1d3ae30()*-0.451507);
}

double NNfunction_NG_4::synapse0x1d65f10() {
   return (neuron0x1d3f900()*0.56837);
}

double NNfunction_NG_4::synapse0x1d65f50() {
   return (neuron0x1d402d0()*-0.39847);
}

double NNfunction_NG_4::synapse0x1d65f90() {
   return (neuron0x1d40ca0()*-0.0787968);
}

double NNfunction_NG_4::synapse0x1d65fd0() {
   return (neuron0x1d41670()*0.48893);
}

double NNfunction_NG_4::synapse0x1d65a60() {
   return (neuron0x1d43480()*1.41524);
}

double NNfunction_NG_4::synapse0x1d65aa0() {
   return (neuron0x1d43760()*0.104505);
}

double NNfunction_NG_4::synapse0x1d66120() {
   return (neuron0x1d44130()*-2.82635);
}

double NNfunction_NG_4::synapse0x1d66160() {
   return (neuron0x1d44b00()*1.08684);
}

double NNfunction_NG_4::synapse0x1d661a0() {
   return (neuron0x1d454d0()*-1.26818);
}

double NNfunction_NG_4::synapse0x1d661e0() {
   return (neuron0x1d45ea0()*-0.0960841);
}

double NNfunction_NG_4::synapse0x1d66220() {
   return (neuron0x1d3e9f0()*-0.37119);
}

double NNfunction_NG_4::synapse0x1d66260() {
   return (neuron0x1d3f3c0()*1.15789);
}

double NNfunction_NG_4::synapse0x1d662a0() {
   return (neuron0x1d48c30()*-0.587191);
}

double NNfunction_NG_4::synapse0x1d662e0() {
   return (neuron0x1d49600()*0.715186);
}

double NNfunction_NG_4::synapse0x1d66320() {
   return (neuron0x1d49fd0()*0.0476511);
}

double NNfunction_NG_4::synapse0x1d66360() {
   return (neuron0x1d4a9a0()*1.10691);
}

double NNfunction_NG_4::synapse0x1d663a0() {
   return (neuron0x1d4b370()*-1.81447);
}

double NNfunction_NG_4::synapse0x1d663e0() {
   return (neuron0x1d4bd40()*1.17112);
}

double NNfunction_NG_4::synapse0x1d66420() {
   return (neuron0x1d4c710()*0.08982);
}

double NNfunction_NG_4::synapse0x1d66460() {
   return (neuron0x1d4d0e0()*0.537978);
}

double NNfunction_NG_4::synapse0x1d66010() {
   return (neuron0x1d43170()*-1.04206);
}

double NNfunction_NG_4::synapse0x1d66050() {
   return (neuron0x1d4fcc0()*0.164936);
}

double NNfunction_NG_4::synapse0x1d66090() {
   return (neuron0x1d50690()*-0.0697692);
}

double NNfunction_NG_4::synapse0x1d660d0() {
   return (neuron0x1d51060()*-0.753165);
}

double NNfunction_NG_4::synapse0x1d666b0() {
   return (neuron0x1d51a30()*-0.309205);
}

double NNfunction_NG_4::synapse0x1d666f0() {
   return (neuron0x1d52400()*-1.66417);
}

double NNfunction_NG_4::synapse0x1d66730() {
   return (neuron0x1d52dd0()*-0.0105974);
}

double NNfunction_NG_4::synapse0x1d66770() {
   return (neuron0x1d537a0()*-1.75158);
}

double NNfunction_NG_4::synapse0x1d667b0() {
   return (neuron0x1d54170()*-1.07171);
}

double NNfunction_NG_4::synapse0x1d667f0() {
   return (neuron0x1d54d50()*-1.85859);
}

double NNfunction_NG_4::synapse0x1d66830() {
   return (neuron0x1d55720()*-1.05514);
}

double NNfunction_NG_4::synapse0x1d66870() {
   return (neuron0x1d465a0()*2.38186);
}

double NNfunction_NG_4::synapse0x1d668b0() {
   return (neuron0x1d46f70()*0.326901);
}

double NNfunction_NG_4::synapse0x1d668f0() {
   return (neuron0x1d47940()*-1.22404);
}

double NNfunction_NG_4::synapse0x1d66930() {
   return (neuron0x1d59f80()*0.24751);
}

double NNfunction_NG_4::synapse0x1d66970() {
   return (neuron0x1d5a830()*-2.10698);
}

double NNfunction_NG_4::synapse0x1d669b0() {
   return (neuron0x1d5b200()*0.972835);
}

double NNfunction_NG_4::synapse0x1d669f0() {
   return (neuron0x1d5bbd0()*-0.69371);
}

double NNfunction_NG_4::synapse0x1d37b10() {
   return (neuron0x1d62dd0()*-11.2591);
}

double NNfunction_NG_4::synapse0x1d66c50() {
   return (neuron0x1d63170()*-4.19524);
}

double NNfunction_NG_4::synapse0x1d66c90() {
   return (neuron0x1d63610()*-4.49188);
}

double NNfunction_NG_4::synapse0x1d66cd0() {
   return (neuron0x1d64770()*-3.76072);
}

double NNfunction_NG_4::synapse0x1d66d10() {
   return (neuron0x1d658d0()*-3.59997);
}

