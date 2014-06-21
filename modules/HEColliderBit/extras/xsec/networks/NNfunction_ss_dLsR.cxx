#include "NNfunction_ss_dLsR.h"
#include <cmath>

double NNfunction_ss_dLsR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.9663)/15.0217;
   input1 = (in1 - 46.1165)/760.119;
   input2 = (in2 - 383.52)/491.692;
   input3 = (in3 - 232.032)/623.25;
   input4 = (in4 - 738.632)/708.723;
   input5 = (in5 - 640.828)/678.2;
   input6 = (in6 - 652.097)/686.909;
   input7 = (in7 - 642.658)/675.86;
   input8 = (in8 - 651.27)/719.604;
   input9 = (in9 - 639.522)/702.532;
   input10 = (in10 - 654.506)/728.844;
   input11 = (in11 - 523.137)/331.448;
   input12 = (in12 - 669.943)/605.76;
   input13 = (in13 - 509.603)/364.819;
   input14 = (in14 - 652.326)/555.567;
   input15 = (in15 - 653.165)/555.711;
   input16 = (in16 - 461.57)/386.198;
   input17 = (in17 - 680.198)/627.445;
   input18 = (in18 - 516.422)/331.919;
   input19 = (in19 - 679.699)/617.642;
   input20 = (in20 - -184.173)/400.328;
   input21 = (in21 - -235.867)/887.169;
   input22 = (in22 - 5.66123)/893.866;
   input23 = (in23 - -27.4062)/488.839;
   switch(index) {
     case 0:
         return neuron0x2ef4210();
     default:
         return 0.;
   }
}

double NNfunction_ss_dLsR::Value(int index, double* input) {
   input0 = (input[0] - 22.9663)/15.0217;
   input1 = (input[1] - 46.1165)/760.119;
   input2 = (input[2] - 383.52)/491.692;
   input3 = (input[3] - 232.032)/623.25;
   input4 = (input[4] - 738.632)/708.723;
   input5 = (input[5] - 640.828)/678.2;
   input6 = (input[6] - 652.097)/686.909;
   input7 = (input[7] - 642.658)/675.86;
   input8 = (input[8] - 651.27)/719.604;
   input9 = (input[9] - 639.522)/702.532;
   input10 = (input[10] - 654.506)/728.844;
   input11 = (input[11] - 523.137)/331.448;
   input12 = (input[12] - 669.943)/605.76;
   input13 = (input[13] - 509.603)/364.819;
   input14 = (input[14] - 652.326)/555.567;
   input15 = (input[15] - 653.165)/555.711;
   input16 = (input[16] - 461.57)/386.198;
   input17 = (input[17] - 680.198)/627.445;
   input18 = (input[18] - 516.422)/331.919;
   input19 = (input[19] - 679.699)/617.642;
   input20 = (input[20] - -184.173)/400.328;
   input21 = (input[21] - -235.867)/887.169;
   input22 = (input[22] - 5.66123)/893.866;
   input23 = (input[23] - -27.4062)/488.839;
   switch(index) {
     case 0:
         return neuron0x2ef4210();
     default:
         return 0.;
   }
}

double NNfunction_ss_dLsR::neuron0x2ec0300() {
   return input0;
}

double NNfunction_ss_dLsR::neuron0x2ec0640() {
   return input1;
}

double NNfunction_ss_dLsR::neuron0x2ec0980() {
   return input2;
}

double NNfunction_ss_dLsR::neuron0x2ec0cc0() {
   return input3;
}

double NNfunction_ss_dLsR::neuron0x2ec1000() {
   return input4;
}

double NNfunction_ss_dLsR::neuron0x2ec1340() {
   return input5;
}

double NNfunction_ss_dLsR::neuron0x2ec1680() {
   return input6;
}

double NNfunction_ss_dLsR::neuron0x2ec19c0() {
   return input7;
}

double NNfunction_ss_dLsR::neuron0x2ec1d00() {
   return input8;
}

double NNfunction_ss_dLsR::neuron0x2ec2040() {
   return input9;
}

double NNfunction_ss_dLsR::neuron0x2ec2380() {
   return input10;
}

double NNfunction_ss_dLsR::neuron0x2ec26c0() {
   return input11;
}

double NNfunction_ss_dLsR::neuron0x2ec2a00() {
   return input12;
}

double NNfunction_ss_dLsR::neuron0x2ec2d40() {
   return input13;
}

double NNfunction_ss_dLsR::neuron0x2ec3080() {
   return input14;
}

double NNfunction_ss_dLsR::neuron0x2ec33c0() {
   return input15;
}

double NNfunction_ss_dLsR::neuron0x2ec3700() {
   return input16;
}

double NNfunction_ss_dLsR::neuron0x2ec3c60() {
   return input17;
}

double NNfunction_ss_dLsR::neuron0x2ec3e80() {
   return input18;
}

double NNfunction_ss_dLsR::neuron0x2ec41c0() {
   return input19;
}

double NNfunction_ss_dLsR::neuron0x2ec4500() {
   return input20;
}

double NNfunction_ss_dLsR::neuron0x2ec4840() {
   return input21;
}

double NNfunction_ss_dLsR::neuron0x2ec4b80() {
   return input22;
}

double NNfunction_ss_dLsR::neuron0x2ec4ec0() {
   return input23;
}

double NNfunction_ss_dLsR::input0x2ec5330() {
   double input = 0.452344;
   input += synapse0x2ec01c0();
   input += synapse0x2ec0200();
   input += synapse0x2ec55e0();
   input += synapse0x2ec5620();
   input += synapse0x2ec5660();
   input += synapse0x2ec56a0();
   input += synapse0x2ec56e0();
   input += synapse0x2ec5720();
   input += synapse0x2ec5760();
   input += synapse0x2ec57a0();
   input += synapse0x2ec57e0();
   input += synapse0x2ec5820();
   input += synapse0x2ec5860();
   input += synapse0x2ec58a0();
   input += synapse0x2ec58e0();
   input += synapse0x2ec5920();
   input += synapse0x2ec0130();
   input += synapse0x2ec0170();
   input += synapse0x2c7b4f0();
   input += synapse0x2c7b530();
   input += synapse0x2ec5b80();
   input += synapse0x2ec5bc0();
   input += synapse0x2ec5c00();
   input += synapse0x2ec5c40();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ec5330() {
   double input = input0x2ec5330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ec5c80() {
   double input = -0.858793;
   input += synapse0x2ec5fc0();
   input += synapse0x2ec6000();
   input += synapse0x2ec6040();
   input += synapse0x2ec6080();
   input += synapse0x2ec60c0();
   input += synapse0x2ec6100();
   input += synapse0x2ec6140();
   input += synapse0x2ec6180();
   input += synapse0x2ec61c0();
   input += synapse0x2ec5a70();
   input += synapse0x2ec5ab0();
   input += synapse0x2ec5af0();
   input += synapse0x2ec5b30();
   input += synapse0x2ec6410();
   input += synapse0x2ec6450();
   input += synapse0x2ec6490();
   input += synapse0x2ec5e10();
   input += synapse0x2ec5e50();
   input += synapse0x2ec65e0();
   input += synapse0x2ec6620();
   input += synapse0x2ec6660();
   input += synapse0x2ec66a0();
   input += synapse0x2ec66e0();
   input += synapse0x2ec6720();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ec5c80() {
   double input = input0x2ec5c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ec6760() {
   double input = 0.0164384;
   input += synapse0x2ec6aa0();
   input += synapse0x2ec6ae0();
   input += synapse0x2ec6b20();
   input += synapse0x2ec6b60();
   input += synapse0x2ec6ba0();
   input += synapse0x2ec6be0();
   input += synapse0x2ec6c20();
   input += synapse0x2ec6c60();
   input += synapse0x2ec6ca0();
   input += synapse0x2ec6ce0();
   input += synapse0x2ec6d20();
   input += synapse0x2ec6d60();
   input += synapse0x2ec6da0();
   input += synapse0x2ec6de0();
   input += synapse0x2ec6e20();
   input += synapse0x2ec6e60();
   input += synapse0x2ec68f0();
   input += synapse0x2ec6930();
   input += synapse0x2c7bb90();
   input += synapse0x2c89460();
   input += synapse0x2c894a0();
   input += synapse0x2eaf390();
   input += synapse0x2eaf3d0();
   input += synapse0x2eaf410();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ec6760() {
   double input = input0x2ec6760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ec6200() {
   double input = -1.04346;
   input += synapse0x2c89ce0();
   input += synapse0x2ec6390();
   input += synapse0x2ec63d0();
   input += synapse0x2ec6fb0();
   input += synapse0x2ec6ff0();
   input += synapse0x2ec7030();
   input += synapse0x2ec7070();
   input += synapse0x2ec70b0();
   input += synapse0x2ec70f0();
   input += synapse0x2ec7130();
   input += synapse0x2ec7170();
   input += synapse0x2ec71b0();
   input += synapse0x2ec71f0();
   input += synapse0x2ec7230();
   input += synapse0x2ec7270();
   input += synapse0x2ec72b0();
   input += synapse0x2ec0240();
   input += synapse0x2ec0280();
   input += synapse0x2ec02c0();
   input += synapse0x2ec7400();
   input += synapse0x2ec7440();
   input += synapse0x2ec7480();
   input += synapse0x2ec74c0();
   input += synapse0x2ec7500();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ec6200() {
   double input = input0x2ec6200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ec7540() {
   double input = 0.814856;
   input += synapse0x2ec7880();
   input += synapse0x2ec78c0();
   input += synapse0x2ec7900();
   input += synapse0x2ec7940();
   input += synapse0x2ec7980();
   input += synapse0x2ec79c0();
   input += synapse0x2ec7a00();
   input += synapse0x2ec7a40();
   input += synapse0x2ec7a80();
   input += synapse0x2ec7ac0();
   input += synapse0x2ec7b00();
   input += synapse0x2ec7b40();
   input += synapse0x2ec7b80();
   input += synapse0x2ec7bc0();
   input += synapse0x2ec7c00();
   input += synapse0x2ec7c40();
   input += synapse0x2ec76d0();
   input += synapse0x2ec7710();
   input += synapse0x2ec7d90();
   input += synapse0x2ec7dd0();
   input += synapse0x2ec7e10();
   input += synapse0x2ec7e50();
   input += synapse0x2ec7e90();
   input += synapse0x2ec7ed0();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ec7540() {
   double input = input0x2ec7540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ec7f10() {
   double input = 1.4156;
   input += synapse0x2ec8250();
   input += synapse0x2ec8290();
   input += synapse0x2ec82d0();
   input += synapse0x2ec8310();
   input += synapse0x2ec8350();
   input += synapse0x2ec8390();
   input += synapse0x2ec83d0();
   input += synapse0x2ec8410();
   input += synapse0x2ec8450();
   input += synapse0x2c897b0();
   input += synapse0x2c897f0();
   input += synapse0x2c89830();
   input += synapse0x2c89870();
   input += synapse0x2c898b0();
   input += synapse0x2c898f0();
   input += synapse0x2c89930();
   input += synapse0x2ec80a0();
   input += synapse0x2ec80e0();
   input += synapse0x2c89a80();
   input += synapse0x2c89ac0();
   input += synapse0x2c89b00();
   input += synapse0x2c89b40();
   input += synapse0x2c89b80();
   input += synapse0x2ec8ca0();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ec7f10() {
   double input = input0x2ec7f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ec8ce0() {
   double input = 0.0906942;
   input += synapse0x2ec9020();
   input += synapse0x2ec9060();
   input += synapse0x2ec90a0();
   input += synapse0x2ec90e0();
   input += synapse0x2ec9120();
   input += synapse0x2ec9160();
   input += synapse0x2ec91a0();
   input += synapse0x2ec91e0();
   input += synapse0x2ec9220();
   input += synapse0x2ec9260();
   input += synapse0x2ec92a0();
   input += synapse0x2ec92e0();
   input += synapse0x2ec9320();
   input += synapse0x2ec9360();
   input += synapse0x2ec93a0();
   input += synapse0x2ec93e0();
   input += synapse0x2ec8e70();
   input += synapse0x2ec8eb0();
   input += synapse0x2ec9530();
   input += synapse0x2ec9570();
   input += synapse0x2ec95b0();
   input += synapse0x2ec95f0();
   input += synapse0x2ec9630();
   input += synapse0x2ec9670();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ec8ce0() {
   double input = input0x2ec8ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ec96b0() {
   double input = 0.893879;
   input += synapse0x2ec99f0();
   input += synapse0x2ec9a30();
   input += synapse0x2ec9a70();
   input += synapse0x2ec9ab0();
   input += synapse0x2ec9af0();
   input += synapse0x2ec9b30();
   input += synapse0x2ec9b70();
   input += synapse0x2ec9bb0();
   input += synapse0x2ec9bf0();
   input += synapse0x2ec9c30();
   input += synapse0x2ec9c70();
   input += synapse0x2ec9cb0();
   input += synapse0x2ec9cf0();
   input += synapse0x2ec9d30();
   input += synapse0x2ec9d70();
   input += synapse0x2ec9db0();
   input += synapse0x2ec9840();
   input += synapse0x2ec9880();
   input += synapse0x2ec9f00();
   input += synapse0x2ec9f40();
   input += synapse0x2ec9f80();
   input += synapse0x2ec9fc0();
   input += synapse0x2eca000();
   input += synapse0x2eca040();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ec96b0() {
   double input = input0x2ec96b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2eca080() {
   double input = -0.103785;
   input += synapse0x2ec3b50();
   input += synapse0x2ec3b90();
   input += synapse0x2ec3bd0();
   input += synapse0x2ec3c10();
   input += synapse0x2eca5d0();
   input += synapse0x2eca610();
   input += synapse0x2eca650();
   input += synapse0x2eca690();
   input += synapse0x2eca6d0();
   input += synapse0x2eca710();
   input += synapse0x2eca750();
   input += synapse0x2eca790();
   input += synapse0x2eca7d0();
   input += synapse0x2eca810();
   input += synapse0x2eca850();
   input += synapse0x2eca890();
   input += synapse0x2eca210();
   input += synapse0x2eca250();
   input += synapse0x2eca9e0();
   input += synapse0x2ecaa20();
   input += synapse0x2ecaa60();
   input += synapse0x2ecaaa0();
   input += synapse0x2ecaae0();
   input += synapse0x2ecab20();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2eca080() {
   double input = input0x2eca080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ecab60() {
   double input = 1.62763;
   input += synapse0x2ecaea0();
   input += synapse0x2ecaee0();
   input += synapse0x2ecaf20();
   input += synapse0x2ecaf60();
   input += synapse0x2ecafa0();
   input += synapse0x2ecafe0();
   input += synapse0x2ecb020();
   input += synapse0x2ecb060();
   input += synapse0x2ecb0a0();
   input += synapse0x2ecb0e0();
   input += synapse0x2ecb120();
   input += synapse0x2ecb160();
   input += synapse0x2ecb1a0();
   input += synapse0x2ecb1e0();
   input += synapse0x2ecb220();
   input += synapse0x2ecb260();
   input += synapse0x2ecacf0();
   input += synapse0x2ecad30();
   input += synapse0x2ecb3b0();
   input += synapse0x2ecb3f0();
   input += synapse0x2ecb430();
   input += synapse0x2ecb470();
   input += synapse0x2ecb4b0();
   input += synapse0x2ecb4f0();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ecab60() {
   double input = input0x2ecab60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ecb530() {
   double input = -0.256208;
   input += synapse0x2ecb870();
   input += synapse0x2ecb8b0();
   input += synapse0x2ecb8f0();
   input += synapse0x2ecb930();
   input += synapse0x2ecb970();
   input += synapse0x2ecb9b0();
   input += synapse0x2ecb9f0();
   input += synapse0x2ecba30();
   input += synapse0x2ecba70();
   input += synapse0x2ecbab0();
   input += synapse0x2ecbaf0();
   input += synapse0x2ecbb30();
   input += synapse0x2ecbb70();
   input += synapse0x2ecbbb0();
   input += synapse0x2ecbbf0();
   input += synapse0x2ecbc30();
   input += synapse0x2ecb6c0();
   input += synapse0x2ecb700();
   input += synapse0x2ec8490();
   input += synapse0x2ec84d0();
   input += synapse0x2ec8510();
   input += synapse0x2ec8550();
   input += synapse0x2ec8590();
   input += synapse0x2ec85d0();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ecb530() {
   double input = input0x2ecb530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ec8610() {
   double input = -2.35169;
   input += synapse0x2ec8950();
   input += synapse0x2ec8990();
   input += synapse0x2ec89d0();
   input += synapse0x2ec8a10();
   input += synapse0x2ec8a50();
   input += synapse0x2ec8a90();
   input += synapse0x2ec8ad0();
   input += synapse0x2ec8b10();
   input += synapse0x2ec8b50();
   input += synapse0x2ec8b90();
   input += synapse0x2ec8bd0();
   input += synapse0x2ec8c10();
   input += synapse0x2ec8c50();
   input += synapse0x2eccd90();
   input += synapse0x2eccdd0();
   input += synapse0x2ecce10();
   input += synapse0x2ec87a0();
   input += synapse0x2ec87e0();
   input += synapse0x2eccf60();
   input += synapse0x2eccfa0();
   input += synapse0x2eccfe0();
   input += synapse0x2ecd020();
   input += synapse0x2ecd060();
   input += synapse0x2ecd0a0();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ec8610() {
   double input = input0x2ec8610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ecd0e0() {
   double input = 0.674745;
   input += synapse0x2ecd420();
   input += synapse0x2ecd460();
   input += synapse0x2ecd4a0();
   input += synapse0x2ecd4e0();
   input += synapse0x2ecd520();
   input += synapse0x2ecd560();
   input += synapse0x2ecd5a0();
   input += synapse0x2ecd5e0();
   input += synapse0x2ecd620();
   input += synapse0x2ecd660();
   input += synapse0x2ecd6a0();
   input += synapse0x2ecd6e0();
   input += synapse0x2ecd720();
   input += synapse0x2ecd760();
   input += synapse0x2ecd7a0();
   input += synapse0x2ecd7e0();
   input += synapse0x2ecd270();
   input += synapse0x2ecd2b0();
   input += synapse0x2ecd930();
   input += synapse0x2ecd970();
   input += synapse0x2ecd9b0();
   input += synapse0x2ecd9f0();
   input += synapse0x2ecda30();
   input += synapse0x2ecda70();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ecd0e0() {
   double input = input0x2ecd0e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ecdab0() {
   double input = 0.404748;
   input += synapse0x2ecddf0();
   input += synapse0x2ecde30();
   input += synapse0x2ecde70();
   input += synapse0x2ecdeb0();
   input += synapse0x2ecdef0();
   input += synapse0x2ecdf30();
   input += synapse0x2ecdf70();
   input += synapse0x2ecdfb0();
   input += synapse0x2ecdff0();
   input += synapse0x2ece030();
   input += synapse0x2ece070();
   input += synapse0x2ece0b0();
   input += synapse0x2ece0f0();
   input += synapse0x2ece130();
   input += synapse0x2ece170();
   input += synapse0x2ece1b0();
   input += synapse0x2ecdc40();
   input += synapse0x2ecdc80();
   input += synapse0x2ece300();
   input += synapse0x2ece340();
   input += synapse0x2ece380();
   input += synapse0x2ece3c0();
   input += synapse0x2ece400();
   input += synapse0x2ece440();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ecdab0() {
   double input = input0x2ecdab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ece480() {
   double input = 1.38118;
   input += synapse0x2ece7c0();
   input += synapse0x2ece800();
   input += synapse0x2ece840();
   input += synapse0x2ece880();
   input += synapse0x2ece8c0();
   input += synapse0x2ece900();
   input += synapse0x2ece940();
   input += synapse0x2ece980();
   input += synapse0x2ece9c0();
   input += synapse0x2ecea00();
   input += synapse0x2ecea40();
   input += synapse0x2ecea80();
   input += synapse0x2eceac0();
   input += synapse0x2eceb00();
   input += synapse0x2eceb40();
   input += synapse0x2eceb80();
   input += synapse0x2ece610();
   input += synapse0x2ece650();
   input += synapse0x2ececd0();
   input += synapse0x2eced10();
   input += synapse0x2eced50();
   input += synapse0x2eced90();
   input += synapse0x2ecedd0();
   input += synapse0x2ecee10();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ece480() {
   double input = input0x2ece480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ecee50() {
   double input = 0.513949;
   input += synapse0x2ecf190();
   input += synapse0x2ec0520();
   input += synapse0x2ec0560();
   input += synapse0x2ec0860();
   input += synapse0x2ec08a0();
   input += synapse0x2ec0ba0();
   input += synapse0x2ec0be0();
   input += synapse0x2ec0ee0();
   input += synapse0x2ec0f20();
   input += synapse0x2ec1220();
   input += synapse0x2ec1260();
   input += synapse0x2ec1560();
   input += synapse0x2ec15a0();
   input += synapse0x2ec18a0();
   input += synapse0x2ec18e0();
   input += synapse0x2ec1be0();
   input += synapse0x2ec1c20();
   input += synapse0x2ec1f20();
   input += synapse0x2ec1f60();
   input += synapse0x2ec2260();
   input += synapse0x2ec22a0();
   input += synapse0x2ec25a0();
   input += synapse0x2ec25e0();
   input += synapse0x2ec28e0();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ecee50() {
   double input = input0x2ecee50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ed0c60() {
   double input = -0.249055;
   input += synapse0x2ec2920();
   input += synapse0x2ec35e0();
   input += synapse0x2ec3620();
   input += synapse0x2ecefe0();
   input += synapse0x2ecf020();
   input += synapse0x2ec3920();
   input += synapse0x2ec3960();
   input += synapse0x2c7b3d0();
   input += synapse0x2c7b410();
   input += synapse0x2ec40a0();
   input += synapse0x2ec40e0();
   input += synapse0x2ec43e0();
   input += synapse0x2ec4420();
   input += synapse0x2ec4720();
   input += synapse0x2ec4760();
   input += synapse0x2ec4a60();
   input += synapse0x2ec4aa0();
   input += synapse0x2ec4da0();
   input += synapse0x2ec4de0();
   input += synapse0x2ec50e0();
   input += synapse0x2ec5120();
   input += synapse0x2ec2c20();
   input += synapse0x2ec2c60();
   input += synapse0x2ed0f00();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ed0c60() {
   double input = input0x2ed0c60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ed0f40() {
   double input = -0.0207353;
   input += synapse0x2ed1280();
   input += synapse0x2ed12c0();
   input += synapse0x2ed1300();
   input += synapse0x2ed1340();
   input += synapse0x2ed1380();
   input += synapse0x2ed13c0();
   input += synapse0x2ed1400();
   input += synapse0x2ed1440();
   input += synapse0x2ed1480();
   input += synapse0x2ed14c0();
   input += synapse0x2ed1500();
   input += synapse0x2ed1540();
   input += synapse0x2ed1580();
   input += synapse0x2ed15c0();
   input += synapse0x2ed1600();
   input += synapse0x2ed1640();
   input += synapse0x2ed10d0();
   input += synapse0x2ed1110();
   input += synapse0x2ed1790();
   input += synapse0x2ed17d0();
   input += synapse0x2ed1810();
   input += synapse0x2ed1850();
   input += synapse0x2ed1890();
   input += synapse0x2ed18d0();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ed0f40() {
   double input = input0x2ed0f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ed1910() {
   double input = 1.78867;
   input += synapse0x2ed1c50();
   input += synapse0x2ed1c90();
   input += synapse0x2ed1cd0();
   input += synapse0x2ed1d10();
   input += synapse0x2ed1d50();
   input += synapse0x2ed1d90();
   input += synapse0x2ed1dd0();
   input += synapse0x2ed1e10();
   input += synapse0x2ed1e50();
   input += synapse0x2ed1e90();
   input += synapse0x2ed1ed0();
   input += synapse0x2ed1f10();
   input += synapse0x2ed1f50();
   input += synapse0x2ed1f90();
   input += synapse0x2ed1fd0();
   input += synapse0x2ed2010();
   input += synapse0x2ed1aa0();
   input += synapse0x2ed1ae0();
   input += synapse0x2ed2160();
   input += synapse0x2ed21a0();
   input += synapse0x2ed21e0();
   input += synapse0x2ed2220();
   input += synapse0x2ed2260();
   input += synapse0x2ed22a0();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ed1910() {
   double input = input0x2ed1910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ed22e0() {
   double input = 1.46913;
   input += synapse0x2ed2620();
   input += synapse0x2ed2660();
   input += synapse0x2ed26a0();
   input += synapse0x2ed26e0();
   input += synapse0x2ed2720();
   input += synapse0x2ed2760();
   input += synapse0x2ed27a0();
   input += synapse0x2ed27e0();
   input += synapse0x2ed2820();
   input += synapse0x2ed2860();
   input += synapse0x2ed28a0();
   input += synapse0x2ed28e0();
   input += synapse0x2ed2920();
   input += synapse0x2ed2960();
   input += synapse0x2ed29a0();
   input += synapse0x2ed29e0();
   input += synapse0x2ed2470();
   input += synapse0x2ed24b0();
   input += synapse0x2ed2b30();
   input += synapse0x2ed2b70();
   input += synapse0x2ed2bb0();
   input += synapse0x2ed2bf0();
   input += synapse0x2ed2c30();
   input += synapse0x2ed2c70();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ed22e0() {
   double input = input0x2ed22e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ed2cb0() {
   double input = 0.970652;
   input += synapse0x2ed2ff0();
   input += synapse0x2ed3030();
   input += synapse0x2ed3070();
   input += synapse0x2ed30b0();
   input += synapse0x2ed30f0();
   input += synapse0x2ed3130();
   input += synapse0x2ed3170();
   input += synapse0x2ed31b0();
   input += synapse0x2ed31f0();
   input += synapse0x2ed3230();
   input += synapse0x2ed3270();
   input += synapse0x2ed32b0();
   input += synapse0x2ed32f0();
   input += synapse0x2ed3330();
   input += synapse0x2ed3370();
   input += synapse0x2ed33b0();
   input += synapse0x2ed2e40();
   input += synapse0x2ed2e80();
   input += synapse0x2ed3500();
   input += synapse0x2ed3540();
   input += synapse0x2ed3580();
   input += synapse0x2ed35c0();
   input += synapse0x2ed3600();
   input += synapse0x2ed3640();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ed2cb0() {
   double input = input0x2ed2cb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ed3680() {
   double input = -0.667075;
   input += synapse0x2ed39c0();
   input += synapse0x2ed3a00();
   input += synapse0x2ed3a40();
   input += synapse0x2ed3a80();
   input += synapse0x2ed3ac0();
   input += synapse0x2ed3b00();
   input += synapse0x2ed3b40();
   input += synapse0x2ed3b80();
   input += synapse0x2ed3bc0();
   input += synapse0x2ecbd80();
   input += synapse0x2ecbdc0();
   input += synapse0x2ecbe00();
   input += synapse0x2ecbe40();
   input += synapse0x2ecbe80();
   input += synapse0x2ecbec0();
   input += synapse0x2ecbf00();
   input += synapse0x2ed3810();
   input += synapse0x2ed3850();
   input += synapse0x2ecc050();
   input += synapse0x2ecc090();
   input += synapse0x2ecc0d0();
   input += synapse0x2ecc110();
   input += synapse0x2ecc150();
   input += synapse0x2ecc190();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ed3680() {
   double input = input0x2ed3680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ecc1d0() {
   double input = 0.897623;
   input += synapse0x2ecc510();
   input += synapse0x2ecc550();
   input += synapse0x2ecc590();
   input += synapse0x2ecc5d0();
   input += synapse0x2ecc610();
   input += synapse0x2ecc650();
   input += synapse0x2ecc690();
   input += synapse0x2ecc6d0();
   input += synapse0x2ecc710();
   input += synapse0x2ecc750();
   input += synapse0x2ecc790();
   input += synapse0x2ecc7d0();
   input += synapse0x2ecc810();
   input += synapse0x2ecc850();
   input += synapse0x2ecc890();
   input += synapse0x2ecc8d0();
   input += synapse0x2ecc360();
   input += synapse0x2ecc3a0();
   input += synapse0x2ecca20();
   input += synapse0x2ecca60();
   input += synapse0x2eccaa0();
   input += synapse0x2eccae0();
   input += synapse0x2eccb20();
   input += synapse0x2eccb60();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ecc1d0() {
   double input = input0x2ecc1d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2eccba0() {
   double input = -0.629671;
   input += synapse0x2eccd30();
   input += synapse0x2ed5dc0();
   input += synapse0x2ed5e00();
   input += synapse0x2ed5e40();
   input += synapse0x2ed5e80();
   input += synapse0x2ed5ec0();
   input += synapse0x2ed5f00();
   input += synapse0x2ed5f40();
   input += synapse0x2ed5f80();
   input += synapse0x2ed5fc0();
   input += synapse0x2ed6000();
   input += synapse0x2ed6040();
   input += synapse0x2ed6080();
   input += synapse0x2ed60c0();
   input += synapse0x2ed6100();
   input += synapse0x2ed6140();
   input += synapse0x2ed5c10();
   input += synapse0x2ed5c50();
   input += synapse0x2ed6290();
   input += synapse0x2ed62d0();
   input += synapse0x2ed6310();
   input += synapse0x2ed6350();
   input += synapse0x2ed6390();
   input += synapse0x2ed63d0();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2eccba0() {
   double input = input0x2eccba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ed6410() {
   double input = 0.665803;
   input += synapse0x2ed6750();
   input += synapse0x2ed6790();
   input += synapse0x2ed67d0();
   input += synapse0x2ed6810();
   input += synapse0x2ed6850();
   input += synapse0x2ed6890();
   input += synapse0x2ed68d0();
   input += synapse0x2ed6910();
   input += synapse0x2ed6950();
   input += synapse0x2ed6990();
   input += synapse0x2ed69d0();
   input += synapse0x2ed6a10();
   input += synapse0x2ed6a50();
   input += synapse0x2ed6a90();
   input += synapse0x2ed6ad0();
   input += synapse0x2ed6b10();
   input += synapse0x2ed65a0();
   input += synapse0x2ed65e0();
   input += synapse0x2ed6c60();
   input += synapse0x2ed6ca0();
   input += synapse0x2ed6ce0();
   input += synapse0x2ed6d20();
   input += synapse0x2ed6d60();
   input += synapse0x2ed6da0();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ed6410() {
   double input = input0x2ed6410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ed6de0() {
   double input = 0.984118;
   input += synapse0x2ed7120();
   input += synapse0x2ed7160();
   input += synapse0x2ed71a0();
   input += synapse0x2ed71e0();
   input += synapse0x2ed7220();
   input += synapse0x2ed7260();
   input += synapse0x2ed72a0();
   input += synapse0x2ed72e0();
   input += synapse0x2ed7320();
   input += synapse0x2ed7360();
   input += synapse0x2ed73a0();
   input += synapse0x2ed73e0();
   input += synapse0x2ed7420();
   input += synapse0x2ed7460();
   input += synapse0x2ed74a0();
   input += synapse0x2ed74e0();
   input += synapse0x2ed6f70();
   input += synapse0x2ed6fb0();
   input += synapse0x2ed7630();
   input += synapse0x2ed7670();
   input += synapse0x2ed76b0();
   input += synapse0x2ed76f0();
   input += synapse0x2ed7730();
   input += synapse0x2ed7770();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ed6de0() {
   double input = input0x2ed6de0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ed77b0() {
   double input = -0.227474;
   input += synapse0x2ed7af0();
   input += synapse0x2ed7b30();
   input += synapse0x2ed7b70();
   input += synapse0x2ed7bb0();
   input += synapse0x2ed7bf0();
   input += synapse0x2ed7c30();
   input += synapse0x2ed7c70();
   input += synapse0x2ed7cb0();
   input += synapse0x2ed7cf0();
   input += synapse0x2ed7d30();
   input += synapse0x2ed7d70();
   input += synapse0x2ed7db0();
   input += synapse0x2ed7df0();
   input += synapse0x2ed7e30();
   input += synapse0x2ed7e70();
   input += synapse0x2ed7eb0();
   input += synapse0x2ed7940();
   input += synapse0x2ed7980();
   input += synapse0x2ed8000();
   input += synapse0x2ed8040();
   input += synapse0x2ed8080();
   input += synapse0x2ed80c0();
   input += synapse0x2ed8100();
   input += synapse0x2ed8140();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ed77b0() {
   double input = input0x2ed77b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ed8180() {
   double input = 0.566428;
   input += synapse0x2ed84c0();
   input += synapse0x2ed8500();
   input += synapse0x2ed8540();
   input += synapse0x2ed8580();
   input += synapse0x2ed85c0();
   input += synapse0x2ed8600();
   input += synapse0x2ed8640();
   input += synapse0x2ed8680();
   input += synapse0x2ed86c0();
   input += synapse0x2ed8700();
   input += synapse0x2ed8740();
   input += synapse0x2ed8780();
   input += synapse0x2ed87c0();
   input += synapse0x2ed8800();
   input += synapse0x2ed8840();
   input += synapse0x2ed8880();
   input += synapse0x2ed8310();
   input += synapse0x2ed8350();
   input += synapse0x2ed89d0();
   input += synapse0x2ed8a10();
   input += synapse0x2ed8a50();
   input += synapse0x2ed8a90();
   input += synapse0x2ed8ad0();
   input += synapse0x2ed8b10();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ed8180() {
   double input = input0x2ed8180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ed8b50() {
   double input = -0.219174;
   input += synapse0x2ed8e90();
   input += synapse0x2ed8ed0();
   input += synapse0x2ed8f10();
   input += synapse0x2ed8f50();
   input += synapse0x2ed8f90();
   input += synapse0x2ed8fd0();
   input += synapse0x2ed9010();
   input += synapse0x2ed9050();
   input += synapse0x2ed9090();
   input += synapse0x2ed90d0();
   input += synapse0x2ed9110();
   input += synapse0x2ed9150();
   input += synapse0x2ed9190();
   input += synapse0x2ed91d0();
   input += synapse0x2ed9210();
   input += synapse0x2ed9250();
   input += synapse0x2ed8ce0();
   input += synapse0x2ed8d20();
   input += synapse0x2ed93a0();
   input += synapse0x2ed93e0();
   input += synapse0x2ed9420();
   input += synapse0x2ed9460();
   input += synapse0x2ed94a0();
   input += synapse0x2ed94e0();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ed8b50() {
   double input = input0x2ed8b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ed9520() {
   double input = -0.193945;
   input += synapse0x2ed9860();
   input += synapse0x2ed98a0();
   input += synapse0x2ed98e0();
   input += synapse0x2ed9920();
   input += synapse0x2ed9960();
   input += synapse0x2ed99a0();
   input += synapse0x2ed99e0();
   input += synapse0x2ed9a20();
   input += synapse0x2ed9a60();
   input += synapse0x2ed9aa0();
   input += synapse0x2ed9ae0();
   input += synapse0x2ed9b20();
   input += synapse0x2ed9b60();
   input += synapse0x2ed9ba0();
   input += synapse0x2ed9be0();
   input += synapse0x2ed9c20();
   input += synapse0x2ed96b0();
   input += synapse0x2ed96f0();
   input += synapse0x2ed9d70();
   input += synapse0x2ed9db0();
   input += synapse0x2ed9df0();
   input += synapse0x2ed9e30();
   input += synapse0x2ed9e70();
   input += synapse0x2ed9eb0();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ed9520() {
   double input = input0x2ed9520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ed9ef0() {
   double input = 1.25777;
   input += synapse0x2eda230();
   input += synapse0x2eda270();
   input += synapse0x2eda2b0();
   input += synapse0x2eda2f0();
   input += synapse0x2eda330();
   input += synapse0x2eda370();
   input += synapse0x2eda3b0();
   input += synapse0x2eda3f0();
   input += synapse0x2eda430();
   input += synapse0x2eda470();
   input += synapse0x2eda4b0();
   input += synapse0x2eda4f0();
   input += synapse0x2eda530();
   input += synapse0x2eda570();
   input += synapse0x2eda5b0();
   input += synapse0x2eda5f0();
   input += synapse0x2eda080();
   input += synapse0x2eda0c0();
   input += synapse0x2eda740();
   input += synapse0x2eda780();
   input += synapse0x2eda7c0();
   input += synapse0x2eda800();
   input += synapse0x2eda840();
   input += synapse0x2eda880();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ed9ef0() {
   double input = input0x2ed9ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2eda8c0() {
   double input = -0.0114244;
   input += synapse0x2edac00();
   input += synapse0x2ecf1d0();
   input += synapse0x2ecf210();
   input += synapse0x2ecf250();
   input += synapse0x2ecf4a0();
   input += synapse0x2ecf4e0();
   input += synapse0x2ecf520();
   input += synapse0x2ecf770();
   input += synapse0x2ecf7b0();
   input += synapse0x2ecfa00();
   input += synapse0x2ecfa40();
   input += synapse0x2ecfa80();
   input += synapse0x2ecfcd0();
   input += synapse0x2ecfd10();
   input += synapse0x2ecff60();
   input += synapse0x2ecffa0();
   input += synapse0x2edaa50();
   input += synapse0x2edaa90();
   input += synapse0x2ed00f0();
   input += synapse0x2ed0600();
   input += synapse0x2ed0640();
   input += synapse0x2ed0680();
   input += synapse0x2ed08d0();
   input += synapse0x2ed0910();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2eda8c0() {
   double input = input0x2eda8c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ed0950() {
   double input = 0.507747;
   input += synapse0x2ed01c0();
   input += synapse0x2ed0200();
   input += synapse0x2ed0240();
   input += synapse0x2ed0280();
   input += synapse0x2ed0c00();
   input += synapse0x2edcf50();
   input += synapse0x2edcf90();
   input += synapse0x2edcfd0();
   input += synapse0x2edd010();
   input += synapse0x2edd050();
   input += synapse0x2edd090();
   input += synapse0x2edd0d0();
   input += synapse0x2edd110();
   input += synapse0x2edd150();
   input += synapse0x2edd190();
   input += synapse0x2edd1d0();
   input += synapse0x2ed0ae0();
   input += synapse0x2ed0b20();
   input += synapse0x2edd320();
   input += synapse0x2edd360();
   input += synapse0x2edd3a0();
   input += synapse0x2edd3e0();
   input += synapse0x2edd420();
   input += synapse0x2edd460();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ed0950() {
   double input = input0x2ed0950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2edd4a0() {
   double input = -1.54631;
   input += synapse0x2edd7e0();
   input += synapse0x2edd820();
   input += synapse0x2edd860();
   input += synapse0x2edd8a0();
   input += synapse0x2edd8e0();
   input += synapse0x2edd920();
   input += synapse0x2edd960();
   input += synapse0x2edd9a0();
   input += synapse0x2edd9e0();
   input += synapse0x2edda20();
   input += synapse0x2edda60();
   input += synapse0x2eddaa0();
   input += synapse0x2eddae0();
   input += synapse0x2eddb20();
   input += synapse0x2eddb60();
   input += synapse0x2eddba0();
   input += synapse0x2edd630();
   input += synapse0x2edd670();
   input += synapse0x2eddcf0();
   input += synapse0x2eddd30();
   input += synapse0x2eddd70();
   input += synapse0x2edddb0();
   input += synapse0x2edddf0();
   input += synapse0x2edde30();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2edd4a0() {
   double input = input0x2edd4a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2edde70() {
   double input = -2.37361;
   input += synapse0x2ede1b0();
   input += synapse0x2ede1f0();
   input += synapse0x2ede230();
   input += synapse0x2ede270();
   input += synapse0x2ede2b0();
   input += synapse0x2ede2f0();
   input += synapse0x2ede330();
   input += synapse0x2ede370();
   input += synapse0x2ede3b0();
   input += synapse0x2ede3f0();
   input += synapse0x2ede430();
   input += synapse0x2ede470();
   input += synapse0x2ede4b0();
   input += synapse0x2ede4f0();
   input += synapse0x2ede530();
   input += synapse0x2ede570();
   input += synapse0x2ede000();
   input += synapse0x2ede040();
   input += synapse0x2ede6c0();
   input += synapse0x2ede700();
   input += synapse0x2ede740();
   input += synapse0x2ede780();
   input += synapse0x2ede7c0();
   input += synapse0x2ede800();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2edde70() {
   double input = input0x2edde70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ede840() {
   double input = -1.39113;
   input += synapse0x2edeb80();
   input += synapse0x2edebc0();
   input += synapse0x2edec00();
   input += synapse0x2edec40();
   input += synapse0x2edec80();
   input += synapse0x2edecc0();
   input += synapse0x2eded00();
   input += synapse0x2eded40();
   input += synapse0x2eded80();
   input += synapse0x2ededc0();
   input += synapse0x2edee00();
   input += synapse0x2edee40();
   input += synapse0x2edee80();
   input += synapse0x2edeec0();
   input += synapse0x2edef00();
   input += synapse0x2edef40();
   input += synapse0x2ede9d0();
   input += synapse0x2edea10();
   input += synapse0x2edf090();
   input += synapse0x2edf0d0();
   input += synapse0x2edf110();
   input += synapse0x2edf150();
   input += synapse0x2edf190();
   input += synapse0x2edf1d0();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ede840() {
   double input = input0x2ede840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2edf210() {
   double input = -0.332669;
   input += synapse0x2edf550();
   input += synapse0x2edf590();
   input += synapse0x2edf5d0();
   input += synapse0x2edf610();
   input += synapse0x2edf650();
   input += synapse0x2edf690();
   input += synapse0x2edf6d0();
   input += synapse0x2edf710();
   input += synapse0x2edf750();
   input += synapse0x2edf790();
   input += synapse0x2edf7d0();
   input += synapse0x2edf810();
   input += synapse0x2edf850();
   input += synapse0x2edf890();
   input += synapse0x2edf8d0();
   input += synapse0x2edf910();
   input += synapse0x2edf3a0();
   input += synapse0x2edf3e0();
   input += synapse0x2edfa60();
   input += synapse0x2edfaa0();
   input += synapse0x2edfae0();
   input += synapse0x2edfb20();
   input += synapse0x2edfb60();
   input += synapse0x2edfba0();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2edf210() {
   double input = input0x2edf210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2edfbe0() {
   double input = 1.4195;
   input += synapse0x2edff20();
   input += synapse0x2edff60();
   input += synapse0x2edffa0();
   input += synapse0x2edffe0();
   input += synapse0x2ee0020();
   input += synapse0x2ee0060();
   input += synapse0x2ee00a0();
   input += synapse0x2ee00e0();
   input += synapse0x2ee0120();
   input += synapse0x2ee0160();
   input += synapse0x2ee01a0();
   input += synapse0x2ee01e0();
   input += synapse0x2ee0220();
   input += synapse0x2ee0260();
   input += synapse0x2ee02a0();
   input += synapse0x2ee02e0();
   input += synapse0x2edfd70();
   input += synapse0x2edfdb0();
   input += synapse0x2ee0430();
   input += synapse0x2ee0470();
   input += synapse0x2ee04b0();
   input += synapse0x2ee04f0();
   input += synapse0x2ee0530();
   input += synapse0x2ee0570();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2edfbe0() {
   double input = input0x2edfbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ee05b0() {
   double input = -0.239252;
   input += synapse0x2ee08f0();
   input += synapse0x2ee0930();
   input += synapse0x2ee0970();
   input += synapse0x2ee09b0();
   input += synapse0x2ee09f0();
   input += synapse0x2ee0a30();
   input += synapse0x2ee0a70();
   input += synapse0x2ee0ab0();
   input += synapse0x2ee0af0();
   input += synapse0x2ee0b30();
   input += synapse0x2ee0b70();
   input += synapse0x2ee0bb0();
   input += synapse0x2ee0bf0();
   input += synapse0x2ee0c30();
   input += synapse0x2ee0c70();
   input += synapse0x2ee0cb0();
   input += synapse0x2ee0740();
   input += synapse0x2ee0780();
   input += synapse0x2ee0e00();
   input += synapse0x2ee0e40();
   input += synapse0x2ee0e80();
   input += synapse0x2ee0ec0();
   input += synapse0x2ee0f00();
   input += synapse0x2ee0f40();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ee05b0() {
   double input = input0x2ee05b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ee0f80() {
   double input = 0.109066;
   input += synapse0x2ee12c0();
   input += synapse0x2ee1300();
   input += synapse0x2ee1340();
   input += synapse0x2ee1380();
   input += synapse0x2ee13c0();
   input += synapse0x2ee1400();
   input += synapse0x2ee1440();
   input += synapse0x2ee1480();
   input += synapse0x2ee14c0();
   input += synapse0x2ee1500();
   input += synapse0x2ee1540();
   input += synapse0x2ee1580();
   input += synapse0x2ee15c0();
   input += synapse0x2ee1600();
   input += synapse0x2ee1640();
   input += synapse0x2ee1680();
   input += synapse0x2ee1110();
   input += synapse0x2ee1150();
   input += synapse0x2ee17d0();
   input += synapse0x2ee1810();
   input += synapse0x2ee1850();
   input += synapse0x2ee1890();
   input += synapse0x2ee18d0();
   input += synapse0x2ee1910();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ee0f80() {
   double input = input0x2ee0f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ee1950() {
   double input = -0.35641;
   input += synapse0x2eca3c0();
   input += synapse0x2eca400();
   input += synapse0x2eca440();
   input += synapse0x2eca480();
   input += synapse0x2eca4c0();
   input += synapse0x2eca500();
   input += synapse0x2eca540();
   input += synapse0x2eca580();
   input += synapse0x2ee20a0();
   input += synapse0x2ee20e0();
   input += synapse0x2ee2120();
   input += synapse0x2ee2160();
   input += synapse0x2ee21a0();
   input += synapse0x2ee21e0();
   input += synapse0x2ee2220();
   input += synapse0x2ee2260();
   input += synapse0x2ee1ae0();
   input += synapse0x2ee1b20();
   input += synapse0x2ee23b0();
   input += synapse0x2ee23f0();
   input += synapse0x2ee2430();
   input += synapse0x2ee2470();
   input += synapse0x2ee24b0();
   input += synapse0x2ee24f0();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ee1950() {
   double input = input0x2ee1950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ee2530() {
   double input = 0.244658;
   input += synapse0x2ee2870();
   input += synapse0x2ee28b0();
   input += synapse0x2ee28f0();
   input += synapse0x2ee2930();
   input += synapse0x2ee2970();
   input += synapse0x2ee29b0();
   input += synapse0x2ee29f0();
   input += synapse0x2ee2a30();
   input += synapse0x2ee2a70();
   input += synapse0x2ee2ab0();
   input += synapse0x2ee2af0();
   input += synapse0x2ee2b30();
   input += synapse0x2ee2b70();
   input += synapse0x2ee2bb0();
   input += synapse0x2ee2bf0();
   input += synapse0x2ee2c30();
   input += synapse0x2ee26c0();
   input += synapse0x2ee2700();
   input += synapse0x2ee2d80();
   input += synapse0x2ee2dc0();
   input += synapse0x2ee2e00();
   input += synapse0x2ee2e40();
   input += synapse0x2ee2e80();
   input += synapse0x2ee2ec0();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ee2530() {
   double input = input0x2ee2530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ee2f00() {
   double input = 5.46674;
   input += synapse0x2ee3240();
   input += synapse0x2ee3280();
   input += synapse0x2ee32c0();
   input += synapse0x2ee3300();
   input += synapse0x2ee3340();
   input += synapse0x2ee3380();
   input += synapse0x2ee33c0();
   input += synapse0x2ee3400();
   input += synapse0x2ee3440();
   input += synapse0x2ee3480();
   input += synapse0x2ee34c0();
   input += synapse0x2ee3500();
   input += synapse0x2ee3540();
   input += synapse0x2ee3580();
   input += synapse0x2ee35c0();
   input += synapse0x2ee3600();
   input += synapse0x2ee3090();
   input += synapse0x2ee30d0();
   input += synapse0x2ed3c00();
   input += synapse0x2ed3c40();
   input += synapse0x2ed3c80();
   input += synapse0x2ed3cc0();
   input += synapse0x2ed3d00();
   input += synapse0x2ed3d40();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ee2f00() {
   double input = input0x2ee2f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ed3d80() {
   double input = 1.52176;
   input += synapse0x2ed40c0();
   input += synapse0x2ed4100();
   input += synapse0x2ed4140();
   input += synapse0x2ed4180();
   input += synapse0x2ed41c0();
   input += synapse0x2ed4200();
   input += synapse0x2ed4240();
   input += synapse0x2ed4280();
   input += synapse0x2ed42c0();
   input += synapse0x2ed4300();
   input += synapse0x2ed4340();
   input += synapse0x2ed4380();
   input += synapse0x2ed43c0();
   input += synapse0x2ed4400();
   input += synapse0x2ed4440();
   input += synapse0x2ed4480();
   input += synapse0x2ed3f10();
   input += synapse0x2ed3f50();
   input += synapse0x2ed45d0();
   input += synapse0x2ed4610();
   input += synapse0x2ed4650();
   input += synapse0x2ed4690();
   input += synapse0x2ed46d0();
   input += synapse0x2ed4710();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ed3d80() {
   double input = input0x2ed3d80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ed4750() {
   double input = 0.170697;
   input += synapse0x2ed4a90();
   input += synapse0x2ed4ad0();
   input += synapse0x2ed4b10();
   input += synapse0x2ed4b50();
   input += synapse0x2ed4b90();
   input += synapse0x2ed4bd0();
   input += synapse0x2ed4c10();
   input += synapse0x2ed4c50();
   input += synapse0x2ed4c90();
   input += synapse0x2ed4cd0();
   input += synapse0x2ed4d10();
   input += synapse0x2ed4d50();
   input += synapse0x2ed4d90();
   input += synapse0x2ed4dd0();
   input += synapse0x2ed4e10();
   input += synapse0x2ed4e50();
   input += synapse0x2ed48e0();
   input += synapse0x2ed4920();
   input += synapse0x2ed4fa0();
   input += synapse0x2ed4fe0();
   input += synapse0x2ed5020();
   input += synapse0x2ed5060();
   input += synapse0x2ed50a0();
   input += synapse0x2ed50e0();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ed4750() {
   double input = input0x2ed4750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ed5120() {
   double input = 0.99675;
   input += synapse0x2ed5460();
   input += synapse0x2ed54a0();
   input += synapse0x2ed54e0();
   input += synapse0x2ed5520();
   input += synapse0x2ed5560();
   input += synapse0x2ed55a0();
   input += synapse0x2ed55e0();
   input += synapse0x2ed5620();
   input += synapse0x2ed5660();
   input += synapse0x2ed56a0();
   input += synapse0x2ed56e0();
   input += synapse0x2ed5720();
   input += synapse0x2ed5760();
   input += synapse0x2ed57a0();
   input += synapse0x2ed57e0();
   input += synapse0x2ed5820();
   input += synapse0x2ed52b0();
   input += synapse0x2ed52f0();
   input += synapse0x2ed5970();
   input += synapse0x2ed59b0();
   input += synapse0x2ed59f0();
   input += synapse0x2ed5a30();
   input += synapse0x2ed5a70();
   input += synapse0x2ed5ab0();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ed5120() {
   double input = input0x2ed5120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ee7760() {
   double input = -3.04369;
   input += synapse0x2ee7980();
   input += synapse0x2ee79c0();
   input += synapse0x2ee7a00();
   input += synapse0x2ee7a40();
   input += synapse0x2ee7a80();
   input += synapse0x2ee7ac0();
   input += synapse0x2ee7b00();
   input += synapse0x2ee7b40();
   input += synapse0x2ee7b80();
   input += synapse0x2ee7bc0();
   input += synapse0x2ee7c00();
   input += synapse0x2ee7c40();
   input += synapse0x2ee7c80();
   input += synapse0x2ee7cc0();
   input += synapse0x2ee7d00();
   input += synapse0x2ee7d40();
   input += synapse0x2ed5af0();
   input += synapse0x2ed5b30();
   input += synapse0x2ee7e90();
   input += synapse0x2ee7ed0();
   input += synapse0x2ee7f10();
   input += synapse0x2ee7f50();
   input += synapse0x2ee7f90();
   input += synapse0x2ee7fd0();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ee7760() {
   double input = input0x2ee7760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ee8010() {
   double input = -0.71053;
   input += synapse0x2ee8350();
   input += synapse0x2ee8390();
   input += synapse0x2ee83d0();
   input += synapse0x2ee8410();
   input += synapse0x2ee8450();
   input += synapse0x2ee8490();
   input += synapse0x2ee84d0();
   input += synapse0x2ee8510();
   input += synapse0x2ee8550();
   input += synapse0x2ee8590();
   input += synapse0x2ee85d0();
   input += synapse0x2ee8610();
   input += synapse0x2ee8650();
   input += synapse0x2ee8690();
   input += synapse0x2ee86d0();
   input += synapse0x2ee8710();
   input += synapse0x2ee81a0();
   input += synapse0x2ee81e0();
   input += synapse0x2ee8860();
   input += synapse0x2ee88a0();
   input += synapse0x2ee88e0();
   input += synapse0x2ee8920();
   input += synapse0x2ee8960();
   input += synapse0x2ee89a0();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ee8010() {
   double input = input0x2ee8010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ee89e0() {
   double input = 0.608078;
   input += synapse0x2ee8d20();
   input += synapse0x2ee8d60();
   input += synapse0x2ee8da0();
   input += synapse0x2ee8de0();
   input += synapse0x2ee8e20();
   input += synapse0x2ee8e60();
   input += synapse0x2ee8ea0();
   input += synapse0x2ee8ee0();
   input += synapse0x2ee8f20();
   input += synapse0x2ee8f60();
   input += synapse0x2ee8fa0();
   input += synapse0x2ee8fe0();
   input += synapse0x2ee9020();
   input += synapse0x2ee9060();
   input += synapse0x2ee90a0();
   input += synapse0x2ee90e0();
   input += synapse0x2ee8b70();
   input += synapse0x2ee8bb0();
   input += synapse0x2ee9230();
   input += synapse0x2ee9270();
   input += synapse0x2ee92b0();
   input += synapse0x2ee92f0();
   input += synapse0x2ee9330();
   input += synapse0x2ee9370();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ee89e0() {
   double input = input0x2ee89e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ee93b0() {
   double input = 1.78471;
   input += synapse0x2ee96f0();
   input += synapse0x2ee9730();
   input += synapse0x2ee9770();
   input += synapse0x2ee97b0();
   input += synapse0x2ee97f0();
   input += synapse0x2ee9830();
   input += synapse0x2ee9870();
   input += synapse0x2ee98b0();
   input += synapse0x2ee98f0();
   input += synapse0x2ee9930();
   input += synapse0x2ee9970();
   input += synapse0x2ee99b0();
   input += synapse0x2ee99f0();
   input += synapse0x2ee9a30();
   input += synapse0x2ee9a70();
   input += synapse0x2ee9ab0();
   input += synapse0x2ee9540();
   input += synapse0x2ee9580();
   input += synapse0x2ee9c00();
   input += synapse0x2ee9c40();
   input += synapse0x2ee9c80();
   input += synapse0x2ee9cc0();
   input += synapse0x2ee9d00();
   input += synapse0x2ee9d40();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ee93b0() {
   double input = input0x2ee93b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ef05b0() {
   double input = 1.91686;
   input += synapse0x2c89c50();
   input += synapse0x2c89c90();
   input += synapse0x2ec77f0();
   input += synapse0x2ec7830();
   input += synapse0x2ec81c0();
   input += synapse0x2ec8200();
   input += synapse0x2ec8f90();
   input += synapse0x2ec8fd0();
   input += synapse0x2ec9960();
   input += synapse0x2ec99a0();
   input += synapse0x2eca330();
   input += synapse0x2eca370();
   input += synapse0x2ecae10();
   input += synapse0x2ecae50();
   input += synapse0x2ecb7e0();
   input += synapse0x2ecb820();
   input += synapse0x2ec88c0();
   input += synapse0x2ec8900();
   input += synapse0x2ecd390();
   input += synapse0x2ecd3d0();
   input += synapse0x2ecdd60();
   input += synapse0x2ecdda0();
   input += synapse0x2ece730();
   input += synapse0x2ece770();
   input += synapse0x2ecf100();
   input += synapse0x2ecf140();
   input += synapse0x2ec32a0();
   input += synapse0x2ec32e0();
   input += synapse0x2ed11f0();
   input += synapse0x2ed1230();
   input += synapse0x2ed1bc0();
   input += synapse0x2ed1c00();
   input += synapse0x2ed2590();
   input += synapse0x2ed25d0();
   input += synapse0x2ed2f60();
   input += synapse0x2ed2fa0();
   input += synapse0x2ed3930();
   input += synapse0x2ed3970();
   input += synapse0x2ecc480();
   input += synapse0x2ecc4c0();
   input += synapse0x2ed5d30();
   input += synapse0x2ed5d70();
   input += synapse0x2ed66c0();
   input += synapse0x2ed6700();
   input += synapse0x2ed7090();
   input += synapse0x2ed70d0();
   input += synapse0x2ed7a60();
   input += synapse0x2ed7aa0();
   input += synapse0x2ed8430();
   input += synapse0x2ed8470();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ef05b0() {
   double input = input0x2ef05b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ef0950() {
   double input = -0.469616;
   input += synapse0x2edab70();
   input += synapse0x2edabb0();
   input += synapse0x2ed0130();
   input += synapse0x2ed0170();
   input += synapse0x2edd750();
   input += synapse0x2edd790();
   input += synapse0x2ede120();
   input += synapse0x2ede160();
   input += synapse0x2edeaf0();
   input += synapse0x2edeb30();
   input += synapse0x2edf4c0();
   input += synapse0x2edf500();
   input += synapse0x2edfe90();
   input += synapse0x2edfed0();
   input += synapse0x2ee0860();
   input += synapse0x2ee08a0();
   input += synapse0x2ee1230();
   input += synapse0x2ee1270();
   input += synapse0x2ee1c00();
   input += synapse0x2ee1c40();
   input += synapse0x2ee27e0();
   input += synapse0x2ee2820();
   input += synapse0x2ee31b0();
   input += synapse0x2ee31f0();
   input += synapse0x2ed4030();
   input += synapse0x2ed4070();
   input += synapse0x2ed4a00();
   input += synapse0x2ed4a40();
   input += synapse0x2ed53d0();
   input += synapse0x2ed5410();
   input += synapse0x2ee78f0();
   input += synapse0x2ee7930();
   input += synapse0x2ee82c0();
   input += synapse0x2ee8300();
   input += synapse0x2ee8c90();
   input += synapse0x2ee8cd0();
   input += synapse0x2ee9660();
   input += synapse0x2ee96a0();
   input += synapse0x2ec5550();
   input += synapse0x2ec5590();
   input += synapse0x2ed8e00();
   input += synapse0x2ed8e40();
   input += synapse0x2ee9d80();
   input += synapse0x2ee9dc0();
   input += synapse0x2ee9e00();
   input += synapse0x2ee9e40();
   input += synapse0x2ef0cf0();
   input += synapse0x2ef0d30();
   input += synapse0x2ef0d70();
   input += synapse0x2ef0db0();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ef0950() {
   double input = input0x2ef0950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ef0df0() {
   double input = -0.455999;
   input += synapse0x2ef1130();
   input += synapse0x2ef1170();
   input += synapse0x2ef11b0();
   input += synapse0x2ef11f0();
   input += synapse0x2ef1230();
   input += synapse0x2ef1270();
   input += synapse0x2ef12b0();
   input += synapse0x2ef12f0();
   input += synapse0x2ef1330();
   input += synapse0x2ef1370();
   input += synapse0x2ef13b0();
   input += synapse0x2ef13f0();
   input += synapse0x2ef1430();
   input += synapse0x2ef1470();
   input += synapse0x2ef14b0();
   input += synapse0x2ef14f0();
   input += synapse0x2ef0f80();
   input += synapse0x2ef0fc0();
   input += synapse0x2ef1640();
   input += synapse0x2ef1680();
   input += synapse0x2ef16c0();
   input += synapse0x2ef1700();
   input += synapse0x2ef1740();
   input += synapse0x2ef1780();
   input += synapse0x2ef17c0();
   input += synapse0x2ef1800();
   input += synapse0x2ef1840();
   input += synapse0x2ef1880();
   input += synapse0x2ef18c0();
   input += synapse0x2ef1900();
   input += synapse0x2ef1940();
   input += synapse0x2ef1980();
   input += synapse0x2ef1530();
   input += synapse0x2ef1570();
   input += synapse0x2ef15b0();
   input += synapse0x2ef15f0();
   input += synapse0x2ef1bd0();
   input += synapse0x2ef1c10();
   input += synapse0x2ef1c50();
   input += synapse0x2ef1c90();
   input += synapse0x2ef1cd0();
   input += synapse0x2ef1d10();
   input += synapse0x2ef1d50();
   input += synapse0x2ef1d90();
   input += synapse0x2ef1dd0();
   input += synapse0x2ef1e10();
   input += synapse0x2ef1e50();
   input += synapse0x2ef1e90();
   input += synapse0x2ef1ed0();
   input += synapse0x2ef1f10();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ef0df0() {
   double input = input0x2ef0df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ef1f50() {
   double input = 0.185749;
   input += synapse0x2ef2290();
   input += synapse0x2ef22d0();
   input += synapse0x2ef2310();
   input += synapse0x2ef2350();
   input += synapse0x2ef2390();
   input += synapse0x2ef23d0();
   input += synapse0x2ef2410();
   input += synapse0x2ef2450();
   input += synapse0x2ef2490();
   input += synapse0x2ef24d0();
   input += synapse0x2ef2510();
   input += synapse0x2ef2550();
   input += synapse0x2ef2590();
   input += synapse0x2ef25d0();
   input += synapse0x2ef2610();
   input += synapse0x2ef2650();
   input += synapse0x2ef20e0();
   input += synapse0x2ef2120();
   input += synapse0x2ef27a0();
   input += synapse0x2ef27e0();
   input += synapse0x2ef2820();
   input += synapse0x2ef2860();
   input += synapse0x2ef28a0();
   input += synapse0x2ef28e0();
   input += synapse0x2ef2920();
   input += synapse0x2ef2960();
   input += synapse0x2ef29a0();
   input += synapse0x2ef29e0();
   input += synapse0x2ef2a20();
   input += synapse0x2ef2a60();
   input += synapse0x2ef2aa0();
   input += synapse0x2ef2ae0();
   input += synapse0x2ef2690();
   input += synapse0x2ef26d0();
   input += synapse0x2ef2710();
   input += synapse0x2ef2750();
   input += synapse0x2ef2d30();
   input += synapse0x2ef2d70();
   input += synapse0x2ef2db0();
   input += synapse0x2ef2df0();
   input += synapse0x2ef2e30();
   input += synapse0x2ef2e70();
   input += synapse0x2ef2eb0();
   input += synapse0x2ef2ef0();
   input += synapse0x2ef2f30();
   input += synapse0x2ef2f70();
   input += synapse0x2ef2fb0();
   input += synapse0x2ef2ff0();
   input += synapse0x2ef3030();
   input += synapse0x2ef3070();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ef1f50() {
   double input = input0x2ef1f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ef30b0() {
   double input = 0.250033;
   input += synapse0x2ef33f0();
   input += synapse0x2ef3430();
   input += synapse0x2ef3470();
   input += synapse0x2ef34b0();
   input += synapse0x2ef34f0();
   input += synapse0x2ef3530();
   input += synapse0x2ef3570();
   input += synapse0x2ef35b0();
   input += synapse0x2ef35f0();
   input += synapse0x2ef3630();
   input += synapse0x2ef3670();
   input += synapse0x2ef36b0();
   input += synapse0x2ef36f0();
   input += synapse0x2ef3730();
   input += synapse0x2ef3770();
   input += synapse0x2ef37b0();
   input += synapse0x2ef3240();
   input += synapse0x2ef3280();
   input += synapse0x2ef3900();
   input += synapse0x2ef3940();
   input += synapse0x2ef3980();
   input += synapse0x2ef39c0();
   input += synapse0x2ef3a00();
   input += synapse0x2ef3a40();
   input += synapse0x2ef3a80();
   input += synapse0x2ef3ac0();
   input += synapse0x2ef3b00();
   input += synapse0x2ef3b40();
   input += synapse0x2ef3b80();
   input += synapse0x2ef3bc0();
   input += synapse0x2ef3c00();
   input += synapse0x2ef3c40();
   input += synapse0x2ef37f0();
   input += synapse0x2ef3830();
   input += synapse0x2ef3870();
   input += synapse0x2ef38b0();
   input += synapse0x2ef3e90();
   input += synapse0x2ef3ed0();
   input += synapse0x2ef3f10();
   input += synapse0x2ef3f50();
   input += synapse0x2ef3f90();
   input += synapse0x2ef3fd0();
   input += synapse0x2ef4010();
   input += synapse0x2ef4050();
   input += synapse0x2ef4090();
   input += synapse0x2ef40d0();
   input += synapse0x2ef4110();
   input += synapse0x2ef4150();
   input += synapse0x2ef4190();
   input += synapse0x2ef41d0();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ef30b0() {
   double input = input0x2ef30b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x2ef4210() {
   double input = 3.72262;
   input += synapse0x2ef4430();
   input += synapse0x2ef4470();
   input += synapse0x2ef44b0();
   input += synapse0x2ef44f0();
   input += synapse0x2ef4530();
   return input;
}

double NNfunction_ss_dLsR::neuron0x2ef4210() {
   double input = input0x2ef4210();
   return (input * 1)+0;
}

double NNfunction_ss_dLsR::synapse0x2ec01c0() {
   return (neuron0x2ec0300()*0.221618);
}

double NNfunction_ss_dLsR::synapse0x2ec0200() {
   return (neuron0x2ec0640()*0.305482);
}

double NNfunction_ss_dLsR::synapse0x2ec55e0() {
   return (neuron0x2ec0980()*0.0289562);
}

double NNfunction_ss_dLsR::synapse0x2ec5620() {
   return (neuron0x2ec0cc0()*-0.59824);
}

double NNfunction_ss_dLsR::synapse0x2ec5660() {
   return (neuron0x2ec1000()*-0.299701);
}

double NNfunction_ss_dLsR::synapse0x2ec56a0() {
   return (neuron0x2ec1340()*1.22745);
}

double NNfunction_ss_dLsR::synapse0x2ec56e0() {
   return (neuron0x2ec1680()*-0.479254);
}

double NNfunction_ss_dLsR::synapse0x2ec5720() {
   return (neuron0x2ec19c0()*-0.378195);
}

double NNfunction_ss_dLsR::synapse0x2ec5760() {
   return (neuron0x2ec1d00()*-0.170625);
}

double NNfunction_ss_dLsR::synapse0x2ec57a0() {
   return (neuron0x2ec2040()*0.481252);
}

double NNfunction_ss_dLsR::synapse0x2ec57e0() {
   return (neuron0x2ec2380()*0.601101);
}

double NNfunction_ss_dLsR::synapse0x2ec5820() {
   return (neuron0x2ec26c0()*0.292806);
}

double NNfunction_ss_dLsR::synapse0x2ec5860() {
   return (neuron0x2ec2a00()*-0.635785);
}

double NNfunction_ss_dLsR::synapse0x2ec58a0() {
   return (neuron0x2ec2d40()*-0.167062);
}

double NNfunction_ss_dLsR::synapse0x2ec58e0() {
   return (neuron0x2ec3080()*0.0622827);
}

double NNfunction_ss_dLsR::synapse0x2ec5920() {
   return (neuron0x2ec33c0()*-0.302313);
}

double NNfunction_ss_dLsR::synapse0x2ec0130() {
   return (neuron0x2ec3700()*0.580516);
}

double NNfunction_ss_dLsR::synapse0x2ec0170() {
   return (neuron0x2ec3c60()*-0.481886);
}

double NNfunction_ss_dLsR::synapse0x2c7b4f0() {
   return (neuron0x2ec3e80()*0.20711);
}

double NNfunction_ss_dLsR::synapse0x2c7b530() {
   return (neuron0x2ec41c0()*-0.0379931);
}

double NNfunction_ss_dLsR::synapse0x2ec5b80() {
   return (neuron0x2ec4500()*0.0278785);
}

double NNfunction_ss_dLsR::synapse0x2ec5bc0() {
   return (neuron0x2ec4840()*0.304053);
}

double NNfunction_ss_dLsR::synapse0x2ec5c00() {
   return (neuron0x2ec4b80()*-0.126784);
}

double NNfunction_ss_dLsR::synapse0x2ec5c40() {
   return (neuron0x2ec4ec0()*0.47181);
}

double NNfunction_ss_dLsR::synapse0x2ec5fc0() {
   return (neuron0x2ec0300()*-0.864486);
}

double NNfunction_ss_dLsR::synapse0x2ec6000() {
   return (neuron0x2ec0640()*0.907011);
}

double NNfunction_ss_dLsR::synapse0x2ec6040() {
   return (neuron0x2ec0980()*0.64842);
}

double NNfunction_ss_dLsR::synapse0x2ec6080() {
   return (neuron0x2ec0cc0()*-0.292567);
}

double NNfunction_ss_dLsR::synapse0x2ec60c0() {
   return (neuron0x2ec1000()*0.134944);
}

double NNfunction_ss_dLsR::synapse0x2ec6100() {
   return (neuron0x2ec1340()*0.162273);
}

double NNfunction_ss_dLsR::synapse0x2ec6140() {
   return (neuron0x2ec1680()*-0.145864);
}

double NNfunction_ss_dLsR::synapse0x2ec6180() {
   return (neuron0x2ec19c0()*-0.0651928);
}

double NNfunction_ss_dLsR::synapse0x2ec61c0() {
   return (neuron0x2ec1d00()*0.0248568);
}

double NNfunction_ss_dLsR::synapse0x2ec5a70() {
   return (neuron0x2ec2040()*-0.099788);
}

double NNfunction_ss_dLsR::synapse0x2ec5ab0() {
   return (neuron0x2ec2380()*0.108864);
}

double NNfunction_ss_dLsR::synapse0x2ec5af0() {
   return (neuron0x2ec26c0()*0.138794);
}

double NNfunction_ss_dLsR::synapse0x2ec5b30() {
   return (neuron0x2ec2a00()*0.508945);
}

double NNfunction_ss_dLsR::synapse0x2ec6410() {
   return (neuron0x2ec2d40()*0.211818);
}

double NNfunction_ss_dLsR::synapse0x2ec6450() {
   return (neuron0x2ec3080()*-0.429722);
}

double NNfunction_ss_dLsR::synapse0x2ec6490() {
   return (neuron0x2ec33c0()*-0.806217);
}

double NNfunction_ss_dLsR::synapse0x2ec5e10() {
   return (neuron0x2ec3700()*-0.496719);
}

double NNfunction_ss_dLsR::synapse0x2ec5e50() {
   return (neuron0x2ec3c60()*0.18892);
}

double NNfunction_ss_dLsR::synapse0x2ec65e0() {
   return (neuron0x2ec3e80()*0.047748);
}

double NNfunction_ss_dLsR::synapse0x2ec6620() {
   return (neuron0x2ec41c0()*0.471445);
}

double NNfunction_ss_dLsR::synapse0x2ec6660() {
   return (neuron0x2ec4500()*0.117783);
}

double NNfunction_ss_dLsR::synapse0x2ec66a0() {
   return (neuron0x2ec4840()*-0.263505);
}

double NNfunction_ss_dLsR::synapse0x2ec66e0() {
   return (neuron0x2ec4b80()*-0.537985);
}

double NNfunction_ss_dLsR::synapse0x2ec6720() {
   return (neuron0x2ec4ec0()*0.305895);
}

double NNfunction_ss_dLsR::synapse0x2ec6aa0() {
   return (neuron0x2ec0300()*0.257788);
}

double NNfunction_ss_dLsR::synapse0x2ec6ae0() {
   return (neuron0x2ec0640()*0.231552);
}

double NNfunction_ss_dLsR::synapse0x2ec6b20() {
   return (neuron0x2ec0980()*0.343407);
}

double NNfunction_ss_dLsR::synapse0x2ec6b60() {
   return (neuron0x2ec0cc0()*-0.397971);
}

double NNfunction_ss_dLsR::synapse0x2ec6ba0() {
   return (neuron0x2ec1000()*-0.341835);
}

double NNfunction_ss_dLsR::synapse0x2ec6be0() {
   return (neuron0x2ec1340()*-0.390201);
}

double NNfunction_ss_dLsR::synapse0x2ec6c20() {
   return (neuron0x2ec1680()*0.124869);
}

double NNfunction_ss_dLsR::synapse0x2ec6c60() {
   return (neuron0x2ec19c0()*0.159546);
}

double NNfunction_ss_dLsR::synapse0x2ec6ca0() {
   return (neuron0x2ec1d00()*-0.151273);
}

double NNfunction_ss_dLsR::synapse0x2ec6ce0() {
   return (neuron0x2ec2040()*-0.515845);
}

double NNfunction_ss_dLsR::synapse0x2ec6d20() {
   return (neuron0x2ec2380()*0.216004);
}

double NNfunction_ss_dLsR::synapse0x2ec6d60() {
   return (neuron0x2ec26c0()*-0.37918);
}

double NNfunction_ss_dLsR::synapse0x2ec6da0() {
   return (neuron0x2ec2a00()*-1.05151);
}

double NNfunction_ss_dLsR::synapse0x2ec6de0() {
   return (neuron0x2ec2d40()*0.0188557);
}

double NNfunction_ss_dLsR::synapse0x2ec6e20() {
   return (neuron0x2ec3080()*-0.622886);
}

double NNfunction_ss_dLsR::synapse0x2ec6e60() {
   return (neuron0x2ec33c0()*-0.18721);
}

double NNfunction_ss_dLsR::synapse0x2ec68f0() {
   return (neuron0x2ec3700()*-0.557817);
}

double NNfunction_ss_dLsR::synapse0x2ec6930() {
   return (neuron0x2ec3c60()*-0.721001);
}

double NNfunction_ss_dLsR::synapse0x2c7bb90() {
   return (neuron0x2ec3e80()*0.0679216);
}

double NNfunction_ss_dLsR::synapse0x2c89460() {
   return (neuron0x2ec41c0()*-0.183684);
}

double NNfunction_ss_dLsR::synapse0x2c894a0() {
   return (neuron0x2ec4500()*-0.215905);
}

double NNfunction_ss_dLsR::synapse0x2eaf390() {
   return (neuron0x2ec4840()*-0.491471);
}

double NNfunction_ss_dLsR::synapse0x2eaf3d0() {
   return (neuron0x2ec4b80()*-0.0399087);
}

double NNfunction_ss_dLsR::synapse0x2eaf410() {
   return (neuron0x2ec4ec0()*-0.141098);
}

double NNfunction_ss_dLsR::synapse0x2c89ce0() {
   return (neuron0x2ec0300()*-0.0746748);
}

double NNfunction_ss_dLsR::synapse0x2ec6390() {
   return (neuron0x2ec0640()*0.259829);
}

double NNfunction_ss_dLsR::synapse0x2ec63d0() {
   return (neuron0x2ec0980()*0.412328);
}

double NNfunction_ss_dLsR::synapse0x2ec6fb0() {
   return (neuron0x2ec0cc0()*0.405826);
}

double NNfunction_ss_dLsR::synapse0x2ec6ff0() {
   return (neuron0x2ec1000()*-0.104561);
}

double NNfunction_ss_dLsR::synapse0x2ec7030() {
   return (neuron0x2ec1340()*-0.262534);
}

double NNfunction_ss_dLsR::synapse0x2ec7070() {
   return (neuron0x2ec1680()*-1.49746);
}

double NNfunction_ss_dLsR::synapse0x2ec70b0() {
   return (neuron0x2ec19c0()*-0.898709);
}

double NNfunction_ss_dLsR::synapse0x2ec70f0() {
   return (neuron0x2ec1d00()*-0.733976);
}

double NNfunction_ss_dLsR::synapse0x2ec7130() {
   return (neuron0x2ec2040()*-0.114548);
}

double NNfunction_ss_dLsR::synapse0x2ec7170() {
   return (neuron0x2ec2380()*-0.557979);
}

double NNfunction_ss_dLsR::synapse0x2ec71b0() {
   return (neuron0x2ec26c0()*0.408547);
}

double NNfunction_ss_dLsR::synapse0x2ec71f0() {
   return (neuron0x2ec2a00()*-0.356234);
}

double NNfunction_ss_dLsR::synapse0x2ec7230() {
   return (neuron0x2ec2d40()*0.356754);
}

double NNfunction_ss_dLsR::synapse0x2ec7270() {
   return (neuron0x2ec3080()*1.03459);
}

double NNfunction_ss_dLsR::synapse0x2ec72b0() {
   return (neuron0x2ec33c0()*1.57351);
}

double NNfunction_ss_dLsR::synapse0x2ec0240() {
   return (neuron0x2ec3700()*0.0489464);
}

double NNfunction_ss_dLsR::synapse0x2ec0280() {
   return (neuron0x2ec3c60()*0.331869);
}

double NNfunction_ss_dLsR::synapse0x2ec02c0() {
   return (neuron0x2ec3e80()*0.0819467);
}

double NNfunction_ss_dLsR::synapse0x2ec7400() {
   return (neuron0x2ec41c0()*0.0995438);
}

double NNfunction_ss_dLsR::synapse0x2ec7440() {
   return (neuron0x2ec4500()*-0.540835);
}

double NNfunction_ss_dLsR::synapse0x2ec7480() {
   return (neuron0x2ec4840()*0.276529);
}

double NNfunction_ss_dLsR::synapse0x2ec74c0() {
   return (neuron0x2ec4b80()*0.372217);
}

double NNfunction_ss_dLsR::synapse0x2ec7500() {
   return (neuron0x2ec4ec0()*0.206959);
}

double NNfunction_ss_dLsR::synapse0x2ec7880() {
   return (neuron0x2ec0300()*0.116741);
}

double NNfunction_ss_dLsR::synapse0x2ec78c0() {
   return (neuron0x2ec0640()*-0.0783336);
}

double NNfunction_ss_dLsR::synapse0x2ec7900() {
   return (neuron0x2ec0980()*-1.13252);
}

double NNfunction_ss_dLsR::synapse0x2ec7940() {
   return (neuron0x2ec0cc0()*0.683399);
}

double NNfunction_ss_dLsR::synapse0x2ec7980() {
   return (neuron0x2ec1000()*-0.602516);
}

double NNfunction_ss_dLsR::synapse0x2ec79c0() {
   return (neuron0x2ec1340()*-0.366274);
}

double NNfunction_ss_dLsR::synapse0x2ec7a00() {
   return (neuron0x2ec1680()*0.0335208);
}

double NNfunction_ss_dLsR::synapse0x2ec7a40() {
   return (neuron0x2ec19c0()*-0.244166);
}

double NNfunction_ss_dLsR::synapse0x2ec7a80() {
   return (neuron0x2ec1d00()*-0.203475);
}

double NNfunction_ss_dLsR::synapse0x2ec7ac0() {
   return (neuron0x2ec2040()*-0.137694);
}

double NNfunction_ss_dLsR::synapse0x2ec7b00() {
   return (neuron0x2ec2380()*-0.00317857);
}

double NNfunction_ss_dLsR::synapse0x2ec7b40() {
   return (neuron0x2ec26c0()*0.505198);
}

double NNfunction_ss_dLsR::synapse0x2ec7b80() {
   return (neuron0x2ec2a00()*-0.0977087);
}

double NNfunction_ss_dLsR::synapse0x2ec7bc0() {
   return (neuron0x2ec2d40()*0.00995565);
}

double NNfunction_ss_dLsR::synapse0x2ec7c00() {
   return (neuron0x2ec3080()*-0.203116);
}

double NNfunction_ss_dLsR::synapse0x2ec7c40() {
   return (neuron0x2ec33c0()*-0.173626);
}

double NNfunction_ss_dLsR::synapse0x2ec76d0() {
   return (neuron0x2ec3700()*-0.196933);
}

double NNfunction_ss_dLsR::synapse0x2ec7710() {
   return (neuron0x2ec3c60()*-0.0848135);
}

double NNfunction_ss_dLsR::synapse0x2ec7d90() {
   return (neuron0x2ec3e80()*-0.013256);
}

double NNfunction_ss_dLsR::synapse0x2ec7dd0() {
   return (neuron0x2ec41c0()*0.000362393);
}

double NNfunction_ss_dLsR::synapse0x2ec7e10() {
   return (neuron0x2ec4500()*0.261254);
}

double NNfunction_ss_dLsR::synapse0x2ec7e50() {
   return (neuron0x2ec4840()*0.0385928);
}

double NNfunction_ss_dLsR::synapse0x2ec7e90() {
   return (neuron0x2ec4b80()*0.228947);
}

double NNfunction_ss_dLsR::synapse0x2ec7ed0() {
   return (neuron0x2ec4ec0()*0.264548);
}

double NNfunction_ss_dLsR::synapse0x2ec8250() {
   return (neuron0x2ec0300()*-0.0360859);
}

double NNfunction_ss_dLsR::synapse0x2ec8290() {
   return (neuron0x2ec0640()*-0.00917088);
}

double NNfunction_ss_dLsR::synapse0x2ec82d0() {
   return (neuron0x2ec0980()*0.314247);
}

double NNfunction_ss_dLsR::synapse0x2ec8310() {
   return (neuron0x2ec0cc0()*-0.17513);
}

double NNfunction_ss_dLsR::synapse0x2ec8350() {
   return (neuron0x2ec1000()*0.171118);
}

double NNfunction_ss_dLsR::synapse0x2ec8390() {
   return (neuron0x2ec1340()*0.110852);
}

double NNfunction_ss_dLsR::synapse0x2ec83d0() {
   return (neuron0x2ec1680()*0.079256);
}

double NNfunction_ss_dLsR::synapse0x2ec8410() {
   return (neuron0x2ec19c0()*0.192132);
}

double NNfunction_ss_dLsR::synapse0x2ec8450() {
   return (neuron0x2ec1d00()*0.217892);
}

double NNfunction_ss_dLsR::synapse0x2c897b0() {
   return (neuron0x2ec2040()*0.128809);
}

double NNfunction_ss_dLsR::synapse0x2c897f0() {
   return (neuron0x2ec2380()*0.13036);
}

double NNfunction_ss_dLsR::synapse0x2c89830() {
   return (neuron0x2ec26c0()*-1.25581);
}

double NNfunction_ss_dLsR::synapse0x2c89870() {
   return (neuron0x2ec2a00()*0.0704716);
}

double NNfunction_ss_dLsR::synapse0x2c898b0() {
   return (neuron0x2ec2d40()*0.0857267);
}

double NNfunction_ss_dLsR::synapse0x2c898f0() {
   return (neuron0x2ec3080()*-0.0127805);
}

double NNfunction_ss_dLsR::synapse0x2c89930() {
   return (neuron0x2ec33c0()*-0.0367861);
}

double NNfunction_ss_dLsR::synapse0x2ec80a0() {
   return (neuron0x2ec3700()*0.0182143);
}

double NNfunction_ss_dLsR::synapse0x2ec80e0() {
   return (neuron0x2ec3c60()*0.012609);
}

double NNfunction_ss_dLsR::synapse0x2c89a80() {
   return (neuron0x2ec3e80()*1.10023);
}

double NNfunction_ss_dLsR::synapse0x2c89ac0() {
   return (neuron0x2ec41c0()*0.082798);
}

double NNfunction_ss_dLsR::synapse0x2c89b00() {
   return (neuron0x2ec4500()*0.163789);
}

double NNfunction_ss_dLsR::synapse0x2c89b40() {
   return (neuron0x2ec4840()*0.139749);
}

double NNfunction_ss_dLsR::synapse0x2c89b80() {
   return (neuron0x2ec4b80()*0.00905422);
}

double NNfunction_ss_dLsR::synapse0x2ec8ca0() {
   return (neuron0x2ec4ec0()*0.103151);
}

double NNfunction_ss_dLsR::synapse0x2ec9020() {
   return (neuron0x2ec0300()*0.485128);
}

double NNfunction_ss_dLsR::synapse0x2ec9060() {
   return (neuron0x2ec0640()*-0.167941);
}

double NNfunction_ss_dLsR::synapse0x2ec90a0() {
   return (neuron0x2ec0980()*0.029648);
}

double NNfunction_ss_dLsR::synapse0x2ec90e0() {
   return (neuron0x2ec0cc0()*-0.661503);
}

double NNfunction_ss_dLsR::synapse0x2ec9120() {
   return (neuron0x2ec1000()*0.189011);
}

double NNfunction_ss_dLsR::synapse0x2ec9160() {
   return (neuron0x2ec1340()*-0.462248);
}

double NNfunction_ss_dLsR::synapse0x2ec91a0() {
   return (neuron0x2ec1680()*-0.538725);
}

double NNfunction_ss_dLsR::synapse0x2ec91e0() {
   return (neuron0x2ec19c0()*0.271376);
}

double NNfunction_ss_dLsR::synapse0x2ec9220() {
   return (neuron0x2ec1d00()*-0.0620411);
}

double NNfunction_ss_dLsR::synapse0x2ec9260() {
   return (neuron0x2ec2040()*0.381051);
}

double NNfunction_ss_dLsR::synapse0x2ec92a0() {
   return (neuron0x2ec2380()*0.331378);
}

double NNfunction_ss_dLsR::synapse0x2ec92e0() {
   return (neuron0x2ec26c0()*-0.298526);
}

double NNfunction_ss_dLsR::synapse0x2ec9320() {
   return (neuron0x2ec2a00()*-0.797219);
}

double NNfunction_ss_dLsR::synapse0x2ec9360() {
   return (neuron0x2ec2d40()*-0.807267);
}

double NNfunction_ss_dLsR::synapse0x2ec93a0() {
   return (neuron0x2ec3080()*0.165515);
}

double NNfunction_ss_dLsR::synapse0x2ec93e0() {
   return (neuron0x2ec33c0()*0.652332);
}

double NNfunction_ss_dLsR::synapse0x2ec8e70() {
   return (neuron0x2ec3700()*0.0322681);
}

double NNfunction_ss_dLsR::synapse0x2ec8eb0() {
   return (neuron0x2ec3c60()*-0.0217473);
}

double NNfunction_ss_dLsR::synapse0x2ec9530() {
   return (neuron0x2ec3e80()*0.145909);
}

double NNfunction_ss_dLsR::synapse0x2ec9570() {
   return (neuron0x2ec41c0()*0.320366);
}

double NNfunction_ss_dLsR::synapse0x2ec95b0() {
   return (neuron0x2ec4500()*-0.0103174);
}

double NNfunction_ss_dLsR::synapse0x2ec95f0() {
   return (neuron0x2ec4840()*0.327319);
}

double NNfunction_ss_dLsR::synapse0x2ec9630() {
   return (neuron0x2ec4b80()*0.0225817);
}

double NNfunction_ss_dLsR::synapse0x2ec9670() {
   return (neuron0x2ec4ec0()*0.0477329);
}

double NNfunction_ss_dLsR::synapse0x2ec99f0() {
   return (neuron0x2ec0300()*-0.725167);
}

double NNfunction_ss_dLsR::synapse0x2ec9a30() {
   return (neuron0x2ec0640()*-0.287312);
}

double NNfunction_ss_dLsR::synapse0x2ec9a70() {
   return (neuron0x2ec0980()*-0.117508);
}

double NNfunction_ss_dLsR::synapse0x2ec9ab0() {
   return (neuron0x2ec0cc0()*-0.160243);
}

double NNfunction_ss_dLsR::synapse0x2ec9af0() {
   return (neuron0x2ec1000()*-0.00587104);
}

double NNfunction_ss_dLsR::synapse0x2ec9b30() {
   return (neuron0x2ec1340()*-0.086781);
}

double NNfunction_ss_dLsR::synapse0x2ec9b70() {
   return (neuron0x2ec1680()*-0.475967);
}

double NNfunction_ss_dLsR::synapse0x2ec9bb0() {
   return (neuron0x2ec19c0()*-0.289089);
}

double NNfunction_ss_dLsR::synapse0x2ec9bf0() {
   return (neuron0x2ec1d00()*0.125932);
}

double NNfunction_ss_dLsR::synapse0x2ec9c30() {
   return (neuron0x2ec2040()*0.0245176);
}

double NNfunction_ss_dLsR::synapse0x2ec9c70() {
   return (neuron0x2ec2380()*-0.061882);
}

double NNfunction_ss_dLsR::synapse0x2ec9cb0() {
   return (neuron0x2ec26c0()*-0.430365);
}

double NNfunction_ss_dLsR::synapse0x2ec9cf0() {
   return (neuron0x2ec2a00()*-0.324256);
}

double NNfunction_ss_dLsR::synapse0x2ec9d30() {
   return (neuron0x2ec2d40()*0.141529);
}

double NNfunction_ss_dLsR::synapse0x2ec9d70() {
   return (neuron0x2ec3080()*0.100421);
}

double NNfunction_ss_dLsR::synapse0x2ec9db0() {
   return (neuron0x2ec33c0()*0.263777);
}

double NNfunction_ss_dLsR::synapse0x2ec9840() {
   return (neuron0x2ec3700()*0.219552);
}

double NNfunction_ss_dLsR::synapse0x2ec9880() {
   return (neuron0x2ec3c60()*-0.208705);
}

double NNfunction_ss_dLsR::synapse0x2ec9f00() {
   return (neuron0x2ec3e80()*-0.593079);
}

double NNfunction_ss_dLsR::synapse0x2ec9f40() {
   return (neuron0x2ec41c0()*-0.0495802);
}

double NNfunction_ss_dLsR::synapse0x2ec9f80() {
   return (neuron0x2ec4500()*-0.134323);
}

double NNfunction_ss_dLsR::synapse0x2ec9fc0() {
   return (neuron0x2ec4840()*-0.124627);
}

double NNfunction_ss_dLsR::synapse0x2eca000() {
   return (neuron0x2ec4b80()*-0.251035);
}

double NNfunction_ss_dLsR::synapse0x2eca040() {
   return (neuron0x2ec4ec0()*-0.0956275);
}

double NNfunction_ss_dLsR::synapse0x2ec3b50() {
   return (neuron0x2ec0300()*0.00800635);
}

double NNfunction_ss_dLsR::synapse0x2ec3b90() {
   return (neuron0x2ec0640()*0.00569358);
}

double NNfunction_ss_dLsR::synapse0x2ec3bd0() {
   return (neuron0x2ec0980()*-0.0874517);
}

double NNfunction_ss_dLsR::synapse0x2ec3c10() {
   return (neuron0x2ec0cc0()*-0.0241562);
}

double NNfunction_ss_dLsR::synapse0x2eca5d0() {
   return (neuron0x2ec1000()*-0.0119944);
}

double NNfunction_ss_dLsR::synapse0x2eca610() {
   return (neuron0x2ec1340()*-0.00415694);
}

double NNfunction_ss_dLsR::synapse0x2eca650() {
   return (neuron0x2ec1680()*-0.0313562);
}

double NNfunction_ss_dLsR::synapse0x2eca690() {
   return (neuron0x2ec19c0()*-0.00765887);
}

double NNfunction_ss_dLsR::synapse0x2eca6d0() {
   return (neuron0x2ec1d00()*-0.062751);
}

double NNfunction_ss_dLsR::synapse0x2eca710() {
   return (neuron0x2ec2040()*-0.0908352);
}

double NNfunction_ss_dLsR::synapse0x2eca750() {
   return (neuron0x2ec2380()*-0.00663483);
}

double NNfunction_ss_dLsR::synapse0x2eca790() {
   return (neuron0x2ec26c0()*-0.52282);
}

double NNfunction_ss_dLsR::synapse0x2eca7d0() {
   return (neuron0x2ec2a00()*0.00455092);
}

double NNfunction_ss_dLsR::synapse0x2eca810() {
   return (neuron0x2ec2d40()*-0.0195185);
}

double NNfunction_ss_dLsR::synapse0x2eca850() {
   return (neuron0x2ec3080()*0.0103577);
}

double NNfunction_ss_dLsR::synapse0x2eca890() {
   return (neuron0x2ec33c0()*-0.00723429);
}

double NNfunction_ss_dLsR::synapse0x2eca210() {
   return (neuron0x2ec3700()*-0.0198583);
}

double NNfunction_ss_dLsR::synapse0x2eca250() {
   return (neuron0x2ec3c60()*-0.0134412);
}

double NNfunction_ss_dLsR::synapse0x2eca9e0() {
   return (neuron0x2ec3e80()*1.05066);
}

double NNfunction_ss_dLsR::synapse0x2ecaa20() {
   return (neuron0x2ec41c0()*-0.00672764);
}

double NNfunction_ss_dLsR::synapse0x2ecaa60() {
   return (neuron0x2ec4500()*0.000591771);
}

double NNfunction_ss_dLsR::synapse0x2ecaaa0() {
   return (neuron0x2ec4840()*0.00917867);
}

double NNfunction_ss_dLsR::synapse0x2ecaae0() {
   return (neuron0x2ec4b80()*0.0127156);
}

double NNfunction_ss_dLsR::synapse0x2ecab20() {
   return (neuron0x2ec4ec0()*0.0176359);
}

double NNfunction_ss_dLsR::synapse0x2ecaea0() {
   return (neuron0x2ec0300()*0.139841);
}

double NNfunction_ss_dLsR::synapse0x2ecaee0() {
   return (neuron0x2ec0640()*0.0678079);
}

double NNfunction_ss_dLsR::synapse0x2ecaf20() {
   return (neuron0x2ec0980()*-0.099251);
}

double NNfunction_ss_dLsR::synapse0x2ecaf60() {
   return (neuron0x2ec0cc0()*1.12419);
}

double NNfunction_ss_dLsR::synapse0x2ecafa0() {
   return (neuron0x2ec1000()*0.162539);
}

double NNfunction_ss_dLsR::synapse0x2ecafe0() {
   return (neuron0x2ec1340()*0.0837644);
}

double NNfunction_ss_dLsR::synapse0x2ecb020() {
   return (neuron0x2ec1680()*-0.0512044);
}

double NNfunction_ss_dLsR::synapse0x2ecb060() {
   return (neuron0x2ec19c0()*-0.00395093);
}

double NNfunction_ss_dLsR::synapse0x2ecb0a0() {
   return (neuron0x2ec1d00()*-0.0502901);
}

double NNfunction_ss_dLsR::synapse0x2ecb0e0() {
   return (neuron0x2ec2040()*-0.116436);
}

double NNfunction_ss_dLsR::synapse0x2ecb120() {
   return (neuron0x2ec2380()*0.0873665);
}

double NNfunction_ss_dLsR::synapse0x2ecb160() {
   return (neuron0x2ec26c0()*-0.429277);
}

double NNfunction_ss_dLsR::synapse0x2ecb1a0() {
   return (neuron0x2ec2a00()*0.175252);
}

double NNfunction_ss_dLsR::synapse0x2ecb1e0() {
   return (neuron0x2ec2d40()*-0.180088);
}

double NNfunction_ss_dLsR::synapse0x2ecb220() {
   return (neuron0x2ec3080()*0.179408);
}

double NNfunction_ss_dLsR::synapse0x2ecb260() {
   return (neuron0x2ec33c0()*0.134346);
}

double NNfunction_ss_dLsR::synapse0x2ecacf0() {
   return (neuron0x2ec3700()*-0.113367);
}

double NNfunction_ss_dLsR::synapse0x2ecad30() {
   return (neuron0x2ec3c60()*0.0811774);
}

double NNfunction_ss_dLsR::synapse0x2ecb3b0() {
   return (neuron0x2ec3e80()*-0.542488);
}

double NNfunction_ss_dLsR::synapse0x2ecb3f0() {
   return (neuron0x2ec41c0()*0.0116955);
}

double NNfunction_ss_dLsR::synapse0x2ecb430() {
   return (neuron0x2ec4500()*-0.0422536);
}

double NNfunction_ss_dLsR::synapse0x2ecb470() {
   return (neuron0x2ec4840()*0.0248225);
}

double NNfunction_ss_dLsR::synapse0x2ecb4b0() {
   return (neuron0x2ec4b80()*-0.11442);
}

double NNfunction_ss_dLsR::synapse0x2ecb4f0() {
   return (neuron0x2ec4ec0()*0.151436);
}

double NNfunction_ss_dLsR::synapse0x2ecb870() {
   return (neuron0x2ec0300()*-0.0681884);
}

double NNfunction_ss_dLsR::synapse0x2ecb8b0() {
   return (neuron0x2ec0640()*0.487735);
}

double NNfunction_ss_dLsR::synapse0x2ecb8f0() {
   return (neuron0x2ec0980()*0.127053);
}

double NNfunction_ss_dLsR::synapse0x2ecb930() {
   return (neuron0x2ec0cc0()*-0.865495);
}

double NNfunction_ss_dLsR::synapse0x2ecb970() {
   return (neuron0x2ec1000()*-0.12151);
}

double NNfunction_ss_dLsR::synapse0x2ecb9b0() {
   return (neuron0x2ec1340()*0.105193);
}

double NNfunction_ss_dLsR::synapse0x2ecb9f0() {
   return (neuron0x2ec1680()*0.97649);
}

double NNfunction_ss_dLsR::synapse0x2ecba30() {
   return (neuron0x2ec19c0()*-0.0471822);
}

double NNfunction_ss_dLsR::synapse0x2ecba70() {
   return (neuron0x2ec1d00()*-0.156699);
}

double NNfunction_ss_dLsR::synapse0x2ecbab0() {
   return (neuron0x2ec2040()*0.0525877);
}

double NNfunction_ss_dLsR::synapse0x2ecbaf0() {
   return (neuron0x2ec2380()*-0.108316);
}

double NNfunction_ss_dLsR::synapse0x2ecbb30() {
   return (neuron0x2ec26c0()*-0.347651);
}

double NNfunction_ss_dLsR::synapse0x2ecbb70() {
   return (neuron0x2ec2a00()*0.46566);
}

double NNfunction_ss_dLsR::synapse0x2ecbbb0() {
   return (neuron0x2ec2d40()*0.135937);
}

double NNfunction_ss_dLsR::synapse0x2ecbbf0() {
   return (neuron0x2ec3080()*0.197562);
}

double NNfunction_ss_dLsR::synapse0x2ecbc30() {
   return (neuron0x2ec33c0()*1.04377);
}

double NNfunction_ss_dLsR::synapse0x2ecb6c0() {
   return (neuron0x2ec3700()*0.397453);
}

double NNfunction_ss_dLsR::synapse0x2ecb700() {
   return (neuron0x2ec3c60()*0.307149);
}

double NNfunction_ss_dLsR::synapse0x2ec8490() {
   return (neuron0x2ec3e80()*-1.65193);
}

double NNfunction_ss_dLsR::synapse0x2ec84d0() {
   return (neuron0x2ec41c0()*-0.193038);
}

double NNfunction_ss_dLsR::synapse0x2ec8510() {
   return (neuron0x2ec4500()*-0.130429);
}

double NNfunction_ss_dLsR::synapse0x2ec8550() {
   return (neuron0x2ec4840()*0.0262478);
}

double NNfunction_ss_dLsR::synapse0x2ec8590() {
   return (neuron0x2ec4b80()*-0.0254775);
}

double NNfunction_ss_dLsR::synapse0x2ec85d0() {
   return (neuron0x2ec4ec0()*0.0421363);
}

double NNfunction_ss_dLsR::synapse0x2ec8950() {
   return (neuron0x2ec0300()*0.00563477);
}

double NNfunction_ss_dLsR::synapse0x2ec8990() {
   return (neuron0x2ec0640()*0.00714171);
}

double NNfunction_ss_dLsR::synapse0x2ec89d0() {
   return (neuron0x2ec0980()*-0.00541165);
}

double NNfunction_ss_dLsR::synapse0x2ec8a10() {
   return (neuron0x2ec0cc0()*-8.67701);
}

double NNfunction_ss_dLsR::synapse0x2ec8a50() {
   return (neuron0x2ec1000()*-0.0203817);
}

double NNfunction_ss_dLsR::synapse0x2ec8a90() {
   return (neuron0x2ec1340()*-0.018748);
}

double NNfunction_ss_dLsR::synapse0x2ec8ad0() {
   return (neuron0x2ec1680()*-0.016918);
}

double NNfunction_ss_dLsR::synapse0x2ec8b10() {
   return (neuron0x2ec19c0()*0.0158735);
}

double NNfunction_ss_dLsR::synapse0x2ec8b50() {
   return (neuron0x2ec1d00()*0.0151185);
}

double NNfunction_ss_dLsR::synapse0x2ec8b90() {
   return (neuron0x2ec2040()*0.00826278);
}

double NNfunction_ss_dLsR::synapse0x2ec8bd0() {
   return (neuron0x2ec2380()*0.00762663);
}

double NNfunction_ss_dLsR::synapse0x2ec8c10() {
   return (neuron0x2ec26c0()*0.130319);
}

double NNfunction_ss_dLsR::synapse0x2ec8c50() {
   return (neuron0x2ec2a00()*-0.0206767);
}

double NNfunction_ss_dLsR::synapse0x2eccd90() {
   return (neuron0x2ec2d40()*0.0142624);
}

double NNfunction_ss_dLsR::synapse0x2eccdd0() {
   return (neuron0x2ec3080()*0.0017594);
}

double NNfunction_ss_dLsR::synapse0x2ecce10() {
   return (neuron0x2ec33c0()*-0.00846491);
}

double NNfunction_ss_dLsR::synapse0x2ec87a0() {
   return (neuron0x2ec3700()*0.0117373);
}

double NNfunction_ss_dLsR::synapse0x2ec87e0() {
   return (neuron0x2ec3c60()*0.0313406);
}

double NNfunction_ss_dLsR::synapse0x2eccf60() {
   return (neuron0x2ec3e80()*0.509153);
}

double NNfunction_ss_dLsR::synapse0x2eccfa0() {
   return (neuron0x2ec41c0()*-0.00067209);
}

double NNfunction_ss_dLsR::synapse0x2eccfe0() {
   return (neuron0x2ec4500()*-0.0348378);
}

double NNfunction_ss_dLsR::synapse0x2ecd020() {
   return (neuron0x2ec4840()*-0.000440693);
}

double NNfunction_ss_dLsR::synapse0x2ecd060() {
   return (neuron0x2ec4b80()*0.0346154);
}

double NNfunction_ss_dLsR::synapse0x2ecd0a0() {
   return (neuron0x2ec4ec0()*-0.00732071);
}

double NNfunction_ss_dLsR::synapse0x2ecd420() {
   return (neuron0x2ec0300()*-0.169808);
}

double NNfunction_ss_dLsR::synapse0x2ecd460() {
   return (neuron0x2ec0640()*0.312604);
}

double NNfunction_ss_dLsR::synapse0x2ecd4a0() {
   return (neuron0x2ec0980()*0.316259);
}

double NNfunction_ss_dLsR::synapse0x2ecd4e0() {
   return (neuron0x2ec0cc0()*-0.116983);
}

double NNfunction_ss_dLsR::synapse0x2ecd520() {
   return (neuron0x2ec1000()*0.943074);
}

double NNfunction_ss_dLsR::synapse0x2ecd560() {
   return (neuron0x2ec1340()*0.402939);
}

double NNfunction_ss_dLsR::synapse0x2ecd5a0() {
   return (neuron0x2ec1680()*0.4227);
}

double NNfunction_ss_dLsR::synapse0x2ecd5e0() {
   return (neuron0x2ec19c0()*0.479111);
}

double NNfunction_ss_dLsR::synapse0x2ecd620() {
   return (neuron0x2ec1d00()*-0.429549);
}

double NNfunction_ss_dLsR::synapse0x2ecd660() {
   return (neuron0x2ec2040()*-0.231167);
}

double NNfunction_ss_dLsR::synapse0x2ecd6a0() {
   return (neuron0x2ec2380()*-0.410515);
}

double NNfunction_ss_dLsR::synapse0x2ecd6e0() {
   return (neuron0x2ec26c0()*-0.29018);
}

double NNfunction_ss_dLsR::synapse0x2ecd720() {
   return (neuron0x2ec2a00()*-0.37549);
}

double NNfunction_ss_dLsR::synapse0x2ecd760() {
   return (neuron0x2ec2d40()*0.355138);
}

double NNfunction_ss_dLsR::synapse0x2ecd7a0() {
   return (neuron0x2ec3080()*0.0524426);
}

double NNfunction_ss_dLsR::synapse0x2ecd7e0() {
   return (neuron0x2ec33c0()*-0.214032);
}

double NNfunction_ss_dLsR::synapse0x2ecd270() {
   return (neuron0x2ec3700()*-0.0429146);
}

double NNfunction_ss_dLsR::synapse0x2ecd2b0() {
   return (neuron0x2ec3c60()*0.507231);
}

double NNfunction_ss_dLsR::synapse0x2ecd930() {
   return (neuron0x2ec3e80()*-0.0251114);
}

double NNfunction_ss_dLsR::synapse0x2ecd970() {
   return (neuron0x2ec41c0()*-0.235393);
}

double NNfunction_ss_dLsR::synapse0x2ecd9b0() {
   return (neuron0x2ec4500()*-0.0575108);
}

double NNfunction_ss_dLsR::synapse0x2ecd9f0() {
   return (neuron0x2ec4840()*-0.659219);
}

double NNfunction_ss_dLsR::synapse0x2ecda30() {
   return (neuron0x2ec4b80()*0.779323);
}

double NNfunction_ss_dLsR::synapse0x2ecda70() {
   return (neuron0x2ec4ec0()*0.205059);
}

double NNfunction_ss_dLsR::synapse0x2ecddf0() {
   return (neuron0x2ec0300()*0.332231);
}

double NNfunction_ss_dLsR::synapse0x2ecde30() {
   return (neuron0x2ec0640()*0.468857);
}

double NNfunction_ss_dLsR::synapse0x2ecde70() {
   return (neuron0x2ec0980()*-0.422374);
}

double NNfunction_ss_dLsR::synapse0x2ecdeb0() {
   return (neuron0x2ec0cc0()*-0.152148);
}

double NNfunction_ss_dLsR::synapse0x2ecdef0() {
   return (neuron0x2ec1000()*-0.321819);
}

double NNfunction_ss_dLsR::synapse0x2ecdf30() {
   return (neuron0x2ec1340()*-0.00980853);
}

double NNfunction_ss_dLsR::synapse0x2ecdf70() {
   return (neuron0x2ec1680()*1.33476);
}

double NNfunction_ss_dLsR::synapse0x2ecdfb0() {
   return (neuron0x2ec19c0()*-0.0357218);
}

double NNfunction_ss_dLsR::synapse0x2ecdff0() {
   return (neuron0x2ec1d00()*0.83052);
}

double NNfunction_ss_dLsR::synapse0x2ece030() {
   return (neuron0x2ec2040()*0.759555);
}

double NNfunction_ss_dLsR::synapse0x2ece070() {
   return (neuron0x2ec2380()*-0.773133);
}

double NNfunction_ss_dLsR::synapse0x2ece0b0() {
   return (neuron0x2ec26c0()*-0.198006);
}

double NNfunction_ss_dLsR::synapse0x2ece0f0() {
   return (neuron0x2ec2a00()*-0.242075);
}

double NNfunction_ss_dLsR::synapse0x2ece130() {
   return (neuron0x2ec2d40()*0.65447);
}

double NNfunction_ss_dLsR::synapse0x2ece170() {
   return (neuron0x2ec3080()*-0.631342);
}

double NNfunction_ss_dLsR::synapse0x2ece1b0() {
   return (neuron0x2ec33c0()*0.722341);
}

double NNfunction_ss_dLsR::synapse0x2ecdc40() {
   return (neuron0x2ec3700()*0.340354);
}

double NNfunction_ss_dLsR::synapse0x2ecdc80() {
   return (neuron0x2ec3c60()*0.202355);
}

double NNfunction_ss_dLsR::synapse0x2ece300() {
   return (neuron0x2ec3e80()*-0.0945891);
}

double NNfunction_ss_dLsR::synapse0x2ece340() {
   return (neuron0x2ec41c0()*0.0386271);
}

double NNfunction_ss_dLsR::synapse0x2ece380() {
   return (neuron0x2ec4500()*0.50799);
}

double NNfunction_ss_dLsR::synapse0x2ece3c0() {
   return (neuron0x2ec4840()*-0.800152);
}

double NNfunction_ss_dLsR::synapse0x2ece400() {
   return (neuron0x2ec4b80()*0.596226);
}

double NNfunction_ss_dLsR::synapse0x2ece440() {
   return (neuron0x2ec4ec0()*-0.225006);
}

double NNfunction_ss_dLsR::synapse0x2ece7c0() {
   return (neuron0x2ec0300()*0.0320731);
}

double NNfunction_ss_dLsR::synapse0x2ece800() {
   return (neuron0x2ec0640()*0.0136048);
}

double NNfunction_ss_dLsR::synapse0x2ece840() {
   return (neuron0x2ec0980()*-0.00414336);
}

double NNfunction_ss_dLsR::synapse0x2ece880() {
   return (neuron0x2ec0cc0()*2.63184);
}

double NNfunction_ss_dLsR::synapse0x2ece8c0() {
   return (neuron0x2ec1000()*0.0066656);
}

double NNfunction_ss_dLsR::synapse0x2ece900() {
   return (neuron0x2ec1340()*0.0019322);
}

double NNfunction_ss_dLsR::synapse0x2ece940() {
   return (neuron0x2ec1680()*-0.0110903);
}

double NNfunction_ss_dLsR::synapse0x2ece980() {
   return (neuron0x2ec19c0()*0.0118003);
}

double NNfunction_ss_dLsR::synapse0x2ece9c0() {
   return (neuron0x2ec1d00()*-0.00918392);
}

double NNfunction_ss_dLsR::synapse0x2ecea00() {
   return (neuron0x2ec2040()*-0.0217325);
}

double NNfunction_ss_dLsR::synapse0x2ecea40() {
   return (neuron0x2ec2380()*0.00944034);
}

double NNfunction_ss_dLsR::synapse0x2ecea80() {
   return (neuron0x2ec26c0()*0.140177);
}

double NNfunction_ss_dLsR::synapse0x2eceac0() {
   return (neuron0x2ec2a00()*-0.0347839);
}

double NNfunction_ss_dLsR::synapse0x2eceb00() {
   return (neuron0x2ec2d40()*0.0088044);
}

double NNfunction_ss_dLsR::synapse0x2eceb40() {
   return (neuron0x2ec3080()*0.0065726);
}

double NNfunction_ss_dLsR::synapse0x2eceb80() {
   return (neuron0x2ec33c0()*0.00590358);
}

double NNfunction_ss_dLsR::synapse0x2ece610() {
   return (neuron0x2ec3700()*0.0127408);
}

double NNfunction_ss_dLsR::synapse0x2ece650() {
   return (neuron0x2ec3c60()*-0.0170513);
}

double NNfunction_ss_dLsR::synapse0x2ececd0() {
   return (neuron0x2ec3e80()*0.431565);
}

double NNfunction_ss_dLsR::synapse0x2eced10() {
   return (neuron0x2ec41c0()*-0.0212198);
}

double NNfunction_ss_dLsR::synapse0x2eced50() {
   return (neuron0x2ec4500()*-0.00807597);
}

double NNfunction_ss_dLsR::synapse0x2eced90() {
   return (neuron0x2ec4840()*0.00292059);
}

double NNfunction_ss_dLsR::synapse0x2ecedd0() {
   return (neuron0x2ec4b80()*-0.00969272);
}

double NNfunction_ss_dLsR::synapse0x2ecee10() {
   return (neuron0x2ec4ec0()*-0.00989573);
}

double NNfunction_ss_dLsR::synapse0x2ecf190() {
   return (neuron0x2ec0300()*-0.360231);
}

double NNfunction_ss_dLsR::synapse0x2ec0520() {
   return (neuron0x2ec0640()*0.52671);
}

double NNfunction_ss_dLsR::synapse0x2ec0560() {
   return (neuron0x2ec0980()*-0.220789);
}

double NNfunction_ss_dLsR::synapse0x2ec0860() {
   return (neuron0x2ec0cc0()*-0.197019);
}

double NNfunction_ss_dLsR::synapse0x2ec08a0() {
   return (neuron0x2ec1000()*-0.247441);
}

double NNfunction_ss_dLsR::synapse0x2ec0ba0() {
   return (neuron0x2ec1340()*-0.714998);
}

double NNfunction_ss_dLsR::synapse0x2ec0be0() {
   return (neuron0x2ec1680()*-0.286172);
}

double NNfunction_ss_dLsR::synapse0x2ec0ee0() {
   return (neuron0x2ec19c0()*0.395589);
}

double NNfunction_ss_dLsR::synapse0x2ec0f20() {
   return (neuron0x2ec1d00()*-0.24546);
}

double NNfunction_ss_dLsR::synapse0x2ec1220() {
   return (neuron0x2ec2040()*-0.37999);
}

double NNfunction_ss_dLsR::synapse0x2ec1260() {
   return (neuron0x2ec2380()*0.0237908);
}

double NNfunction_ss_dLsR::synapse0x2ec1560() {
   return (neuron0x2ec26c0()*-0.212614);
}

double NNfunction_ss_dLsR::synapse0x2ec15a0() {
   return (neuron0x2ec2a00()*0.376289);
}

double NNfunction_ss_dLsR::synapse0x2ec18a0() {
   return (neuron0x2ec2d40()*0.065365);
}

double NNfunction_ss_dLsR::synapse0x2ec18e0() {
   return (neuron0x2ec3080()*0.573504);
}

double NNfunction_ss_dLsR::synapse0x2ec1be0() {
   return (neuron0x2ec33c0()*0.0333269);
}

double NNfunction_ss_dLsR::synapse0x2ec1c20() {
   return (neuron0x2ec3700()*-0.0837908);
}

double NNfunction_ss_dLsR::synapse0x2ec1f20() {
   return (neuron0x2ec3c60()*0.665125);
}

double NNfunction_ss_dLsR::synapse0x2ec1f60() {
   return (neuron0x2ec3e80()*-0.590851);
}

double NNfunction_ss_dLsR::synapse0x2ec2260() {
   return (neuron0x2ec41c0()*-0.672974);
}

double NNfunction_ss_dLsR::synapse0x2ec22a0() {
   return (neuron0x2ec4500()*-0.42128);
}

double NNfunction_ss_dLsR::synapse0x2ec25a0() {
   return (neuron0x2ec4840()*0.608344);
}

double NNfunction_ss_dLsR::synapse0x2ec25e0() {
   return (neuron0x2ec4b80()*0.309319);
}

double NNfunction_ss_dLsR::synapse0x2ec28e0() {
   return (neuron0x2ec4ec0()*-0.0642511);
}

double NNfunction_ss_dLsR::synapse0x2ec2920() {
   return (neuron0x2ec0300()*-0.0292253);
}

double NNfunction_ss_dLsR::synapse0x2ec35e0() {
   return (neuron0x2ec0640()*0.0254212);
}

double NNfunction_ss_dLsR::synapse0x2ec3620() {
   return (neuron0x2ec0980()*-0.384237);
}

double NNfunction_ss_dLsR::synapse0x2ecefe0() {
   return (neuron0x2ec0cc0()*0.932661);
}

double NNfunction_ss_dLsR::synapse0x2ecf020() {
   return (neuron0x2ec1000()*0.283308);
}

double NNfunction_ss_dLsR::synapse0x2ec3920() {
   return (neuron0x2ec1340()*0.322131);
}

double NNfunction_ss_dLsR::synapse0x2ec3960() {
   return (neuron0x2ec1680()*0.0679721);
}

double NNfunction_ss_dLsR::synapse0x2c7b3d0() {
   return (neuron0x2ec19c0()*0.313257);
}

double NNfunction_ss_dLsR::synapse0x2c7b410() {
   return (neuron0x2ec1d00()*0.0491155);
}

double NNfunction_ss_dLsR::synapse0x2ec40a0() {
   return (neuron0x2ec2040()*-0.00782073);
}

double NNfunction_ss_dLsR::synapse0x2ec40e0() {
   return (neuron0x2ec2380()*-0.424617);
}

double NNfunction_ss_dLsR::synapse0x2ec43e0() {
   return (neuron0x2ec26c0()*-0.428941);
}

double NNfunction_ss_dLsR::synapse0x2ec4420() {
   return (neuron0x2ec2a00()*-0.302957);
}

double NNfunction_ss_dLsR::synapse0x2ec4720() {
   return (neuron0x2ec2d40()*-0.0160031);
}

double NNfunction_ss_dLsR::synapse0x2ec4760() {
   return (neuron0x2ec3080()*0.100343);
}

double NNfunction_ss_dLsR::synapse0x2ec4a60() {
   return (neuron0x2ec33c0()*-0.158755);
}

double NNfunction_ss_dLsR::synapse0x2ec4aa0() {
   return (neuron0x2ec3700()*-0.140019);
}

double NNfunction_ss_dLsR::synapse0x2ec4da0() {
   return (neuron0x2ec3c60()*-0.209526);
}

double NNfunction_ss_dLsR::synapse0x2ec4de0() {
   return (neuron0x2ec3e80()*-0.994104);
}

double NNfunction_ss_dLsR::synapse0x2ec50e0() {
   return (neuron0x2ec41c0()*-0.144192);
}

double NNfunction_ss_dLsR::synapse0x2ec5120() {
   return (neuron0x2ec4500()*-0.206264);
}

double NNfunction_ss_dLsR::synapse0x2ec2c20() {
   return (neuron0x2ec4840()*0.267595);
}

double NNfunction_ss_dLsR::synapse0x2ec2c60() {
   return (neuron0x2ec4b80()*-0.198777);
}

double NNfunction_ss_dLsR::synapse0x2ed0f00() {
   return (neuron0x2ec4ec0()*-0.233396);
}

double NNfunction_ss_dLsR::synapse0x2ed1280() {
   return (neuron0x2ec0300()*0.0797876);
}

double NNfunction_ss_dLsR::synapse0x2ed12c0() {
   return (neuron0x2ec0640()*-0.271334);
}

double NNfunction_ss_dLsR::synapse0x2ed1300() {
   return (neuron0x2ec0980()*0.0520343);
}

double NNfunction_ss_dLsR::synapse0x2ed1340() {
   return (neuron0x2ec0cc0()*-0.546395);
}

double NNfunction_ss_dLsR::synapse0x2ed1380() {
   return (neuron0x2ec1000()*-0.0458354);
}

double NNfunction_ss_dLsR::synapse0x2ed13c0() {
   return (neuron0x2ec1340()*0.0807092);
}

double NNfunction_ss_dLsR::synapse0x2ed1400() {
   return (neuron0x2ec1680()*-0.350449);
}

double NNfunction_ss_dLsR::synapse0x2ed1440() {
   return (neuron0x2ec19c0()*0.761949);
}

double NNfunction_ss_dLsR::synapse0x2ed1480() {
   return (neuron0x2ec1d00()*-0.423305);
}

double NNfunction_ss_dLsR::synapse0x2ed14c0() {
   return (neuron0x2ec2040()*0.068355);
}

double NNfunction_ss_dLsR::synapse0x2ed1500() {
   return (neuron0x2ec2380()*0.0931917);
}

double NNfunction_ss_dLsR::synapse0x2ed1540() {
   return (neuron0x2ec26c0()*-1.01588);
}

double NNfunction_ss_dLsR::synapse0x2ed1580() {
   return (neuron0x2ec2a00()*0.839523);
}

double NNfunction_ss_dLsR::synapse0x2ed15c0() {
   return (neuron0x2ec2d40()*0.234038);
}

double NNfunction_ss_dLsR::synapse0x2ed1600() {
   return (neuron0x2ec3080()*1.0477);
}

double NNfunction_ss_dLsR::synapse0x2ed1640() {
   return (neuron0x2ec33c0()*0.364776);
}

double NNfunction_ss_dLsR::synapse0x2ed10d0() {
   return (neuron0x2ec3700()*-0.447946);
}

double NNfunction_ss_dLsR::synapse0x2ed1110() {
   return (neuron0x2ec3c60()*0.638444);
}

double NNfunction_ss_dLsR::synapse0x2ed1790() {
   return (neuron0x2ec3e80()*-1.09037);
}

double NNfunction_ss_dLsR::synapse0x2ed17d0() {
   return (neuron0x2ec41c0()*0.452627);
}

double NNfunction_ss_dLsR::synapse0x2ed1810() {
   return (neuron0x2ec4500()*-0.357723);
}

double NNfunction_ss_dLsR::synapse0x2ed1850() {
   return (neuron0x2ec4840()*-0.630109);
}

double NNfunction_ss_dLsR::synapse0x2ed1890() {
   return (neuron0x2ec4b80()*0.44882);
}

double NNfunction_ss_dLsR::synapse0x2ed18d0() {
   return (neuron0x2ec4ec0()*-0.264143);
}

double NNfunction_ss_dLsR::synapse0x2ed1c50() {
   return (neuron0x2ec0300()*0.0105534);
}

double NNfunction_ss_dLsR::synapse0x2ed1c90() {
   return (neuron0x2ec0640()*0.00503211);
}

double NNfunction_ss_dLsR::synapse0x2ed1cd0() {
   return (neuron0x2ec0980()*0.0275533);
}

double NNfunction_ss_dLsR::synapse0x2ed1d10() {
   return (neuron0x2ec0cc0()*1.95055);
}

double NNfunction_ss_dLsR::synapse0x2ed1d50() {
   return (neuron0x2ec1000()*0.00314422);
}

double NNfunction_ss_dLsR::synapse0x2ed1d90() {
   return (neuron0x2ec1340()*0.00986122);
}

double NNfunction_ss_dLsR::synapse0x2ed1dd0() {
   return (neuron0x2ec1680()*-0.0040521);
}

double NNfunction_ss_dLsR::synapse0x2ed1e10() {
   return (neuron0x2ec19c0()*0.00421315);
}

double NNfunction_ss_dLsR::synapse0x2ed1e50() {
   return (neuron0x2ec1d00()*-0.0193368);
}

double NNfunction_ss_dLsR::synapse0x2ed1e90() {
   return (neuron0x2ec2040()*-0.0110576);
}

double NNfunction_ss_dLsR::synapse0x2ed1ed0() {
   return (neuron0x2ec2380()*0.00703951);
}

double NNfunction_ss_dLsR::synapse0x2ed1f10() {
   return (neuron0x2ec26c0()*-0.0265465);
}

double NNfunction_ss_dLsR::synapse0x2ed1f50() {
   return (neuron0x2ec2a00()*0.0061616);
}

double NNfunction_ss_dLsR::synapse0x2ed1f90() {
   return (neuron0x2ec2d40()*0.0189598);
}

double NNfunction_ss_dLsR::synapse0x2ed1fd0() {
   return (neuron0x2ec3080()*0.0175595);
}

double NNfunction_ss_dLsR::synapse0x2ed2010() {
   return (neuron0x2ec33c0()*0.0181961);
}

double NNfunction_ss_dLsR::synapse0x2ed1aa0() {
   return (neuron0x2ec3700()*0.000206382);
}

double NNfunction_ss_dLsR::synapse0x2ed1ae0() {
   return (neuron0x2ec3c60()*0.00992047);
}

double NNfunction_ss_dLsR::synapse0x2ed2160() {
   return (neuron0x2ec3e80()*0.0602244);
}

double NNfunction_ss_dLsR::synapse0x2ed21a0() {
   return (neuron0x2ec41c0()*-0.000658126);
}

double NNfunction_ss_dLsR::synapse0x2ed21e0() {
   return (neuron0x2ec4500()*-0.00357923);
}

double NNfunction_ss_dLsR::synapse0x2ed2220() {
   return (neuron0x2ec4840()*0.0182546);
}

double NNfunction_ss_dLsR::synapse0x2ed2260() {
   return (neuron0x2ec4b80()*-0.00972767);
}

double NNfunction_ss_dLsR::synapse0x2ed22a0() {
   return (neuron0x2ec4ec0()*0.0117302);
}

double NNfunction_ss_dLsR::synapse0x2ed2620() {
   return (neuron0x2ec0300()*-0.0311916);
}

double NNfunction_ss_dLsR::synapse0x2ed2660() {
   return (neuron0x2ec0640()*-0.207618);
}

double NNfunction_ss_dLsR::synapse0x2ed26a0() {
   return (neuron0x2ec0980()*-0.307319);
}

double NNfunction_ss_dLsR::synapse0x2ed26e0() {
   return (neuron0x2ec0cc0()*-1.1156);
}

double NNfunction_ss_dLsR::synapse0x2ed2720() {
   return (neuron0x2ec1000()*0.793184);
}

double NNfunction_ss_dLsR::synapse0x2ed2760() {
   return (neuron0x2ec1340()*-0.113929);
}

double NNfunction_ss_dLsR::synapse0x2ed27a0() {
   return (neuron0x2ec1680()*0.331257);
}

double NNfunction_ss_dLsR::synapse0x2ed27e0() {
   return (neuron0x2ec19c0()*0.248285);
}

double NNfunction_ss_dLsR::synapse0x2ed2820() {
   return (neuron0x2ec1d00()*0.935972);
}

double NNfunction_ss_dLsR::synapse0x2ed2860() {
   return (neuron0x2ec2040()*0.387703);
}

double NNfunction_ss_dLsR::synapse0x2ed28a0() {
   return (neuron0x2ec2380()*0.123907);
}

double NNfunction_ss_dLsR::synapse0x2ed28e0() {
   return (neuron0x2ec26c0()*-0.449669);
}

double NNfunction_ss_dLsR::synapse0x2ed2920() {
   return (neuron0x2ec2a00()*0.521521);
}

double NNfunction_ss_dLsR::synapse0x2ed2960() {
   return (neuron0x2ec2d40()*-0.127049);
}

double NNfunction_ss_dLsR::synapse0x2ed29a0() {
   return (neuron0x2ec3080()*-0.159368);
}

double NNfunction_ss_dLsR::synapse0x2ed29e0() {
   return (neuron0x2ec33c0()*0.34743);
}

double NNfunction_ss_dLsR::synapse0x2ed2470() {
   return (neuron0x2ec3700()*-0.15071);
}

double NNfunction_ss_dLsR::synapse0x2ed24b0() {
   return (neuron0x2ec3c60()*0.559863);
}

double NNfunction_ss_dLsR::synapse0x2ed2b30() {
   return (neuron0x2ec3e80()*-1.19685);
}

double NNfunction_ss_dLsR::synapse0x2ed2b70() {
   return (neuron0x2ec41c0()*0.6484);
}

double NNfunction_ss_dLsR::synapse0x2ed2bb0() {
   return (neuron0x2ec4500()*0.340578);
}

double NNfunction_ss_dLsR::synapse0x2ed2bf0() {
   return (neuron0x2ec4840()*0.440481);
}

double NNfunction_ss_dLsR::synapse0x2ed2c30() {
   return (neuron0x2ec4b80()*-0.173506);
}

double NNfunction_ss_dLsR::synapse0x2ed2c70() {
   return (neuron0x2ec4ec0()*-0.264713);
}

double NNfunction_ss_dLsR::synapse0x2ed2ff0() {
   return (neuron0x2ec0300()*0.0194025);
}

double NNfunction_ss_dLsR::synapse0x2ed3030() {
   return (neuron0x2ec0640()*0.00965646);
}

double NNfunction_ss_dLsR::synapse0x2ed3070() {
   return (neuron0x2ec0980()*-0.164985);
}

double NNfunction_ss_dLsR::synapse0x2ed30b0() {
   return (neuron0x2ec0cc0()*-0.0351094);
}

double NNfunction_ss_dLsR::synapse0x2ed30f0() {
   return (neuron0x2ec1000()*-0.0285799);
}

double NNfunction_ss_dLsR::synapse0x2ed3130() {
   return (neuron0x2ec1340()*-0.00263251);
}

double NNfunction_ss_dLsR::synapse0x2ed3170() {
   return (neuron0x2ec1680()*-0.0349188);
}

double NNfunction_ss_dLsR::synapse0x2ed31b0() {
   return (neuron0x2ec19c0()*0.0062253);
}

double NNfunction_ss_dLsR::synapse0x2ed31f0() {
   return (neuron0x2ec1d00()*-0.0909982);
}

double NNfunction_ss_dLsR::synapse0x2ed3230() {
   return (neuron0x2ec2040()*-0.103407);
}

double NNfunction_ss_dLsR::synapse0x2ed3270() {
   return (neuron0x2ec2380()*0.00601223);
}

double NNfunction_ss_dLsR::synapse0x2ed32b0() {
   return (neuron0x2ec26c0()*0.257759);
}

double NNfunction_ss_dLsR::synapse0x2ed32f0() {
   return (neuron0x2ec2a00()*0.0187466);
}

double NNfunction_ss_dLsR::synapse0x2ed3330() {
   return (neuron0x2ec2d40()*-0.00709003);
}

double NNfunction_ss_dLsR::synapse0x2ed3370() {
   return (neuron0x2ec3080()*0.0137023);
}

double NNfunction_ss_dLsR::synapse0x2ed33b0() {
   return (neuron0x2ec33c0()*-0.0307888);
}

double NNfunction_ss_dLsR::synapse0x2ed2e40() {
   return (neuron0x2ec3700()*-0.0268282);
}

double NNfunction_ss_dLsR::synapse0x2ed2e80() {
   return (neuron0x2ec3c60()*-0.0118885);
}

double NNfunction_ss_dLsR::synapse0x2ed3500() {
   return (neuron0x2ec3e80()*-0.37591);
}

double NNfunction_ss_dLsR::synapse0x2ed3540() {
   return (neuron0x2ec41c0()*-0.0188523);
}

double NNfunction_ss_dLsR::synapse0x2ed3580() {
   return (neuron0x2ec4500()*0.0314939);
}

double NNfunction_ss_dLsR::synapse0x2ed35c0() {
   return (neuron0x2ec4840()*0.0472693);
}

double NNfunction_ss_dLsR::synapse0x2ed3600() {
   return (neuron0x2ec4b80()*0.0327414);
}

double NNfunction_ss_dLsR::synapse0x2ed3640() {
   return (neuron0x2ec4ec0()*0.0504254);
}

double NNfunction_ss_dLsR::synapse0x2ed39c0() {
   return (neuron0x2ec0300()*0.303462);
}

double NNfunction_ss_dLsR::synapse0x2ed3a00() {
   return (neuron0x2ec0640()*-0.240237);
}

double NNfunction_ss_dLsR::synapse0x2ed3a40() {
   return (neuron0x2ec0980()*-0.640578);
}

double NNfunction_ss_dLsR::synapse0x2ed3a80() {
   return (neuron0x2ec0cc0()*-0.798526);
}

double NNfunction_ss_dLsR::synapse0x2ed3ac0() {
   return (neuron0x2ec1000()*-0.507327);
}

double NNfunction_ss_dLsR::synapse0x2ed3b00() {
   return (neuron0x2ec1340()*0.200115);
}

double NNfunction_ss_dLsR::synapse0x2ed3b40() {
   return (neuron0x2ec1680()*0.331072);
}

double NNfunction_ss_dLsR::synapse0x2ed3b80() {
   return (neuron0x2ec19c0()*-0.188676);
}

double NNfunction_ss_dLsR::synapse0x2ed3bc0() {
   return (neuron0x2ec1d00()*0.386845);
}

double NNfunction_ss_dLsR::synapse0x2ecbd80() {
   return (neuron0x2ec2040()*-0.473682);
}

double NNfunction_ss_dLsR::synapse0x2ecbdc0() {
   return (neuron0x2ec2380()*-0.806962);
}

double NNfunction_ss_dLsR::synapse0x2ecbe00() {
   return (neuron0x2ec26c0()*-0.382356);
}

double NNfunction_ss_dLsR::synapse0x2ecbe40() {
   return (neuron0x2ec2a00()*0.139838);
}

double NNfunction_ss_dLsR::synapse0x2ecbe80() {
   return (neuron0x2ec2d40()*0.538648);
}

double NNfunction_ss_dLsR::synapse0x2ecbec0() {
   return (neuron0x2ec3080()*0.28766);
}

double NNfunction_ss_dLsR::synapse0x2ecbf00() {
   return (neuron0x2ec33c0()*0.0616459);
}

double NNfunction_ss_dLsR::synapse0x2ed3810() {
   return (neuron0x2ec3700()*-0.18528);
}

double NNfunction_ss_dLsR::synapse0x2ed3850() {
   return (neuron0x2ec3c60()*-0.561048);
}

double NNfunction_ss_dLsR::synapse0x2ecc050() {
   return (neuron0x2ec3e80()*0.0805692);
}

double NNfunction_ss_dLsR::synapse0x2ecc090() {
   return (neuron0x2ec41c0()*-0.156823);
}

double NNfunction_ss_dLsR::synapse0x2ecc0d0() {
   return (neuron0x2ec4500()*0.00219585);
}

double NNfunction_ss_dLsR::synapse0x2ecc110() {
   return (neuron0x2ec4840()*0.354726);
}

double NNfunction_ss_dLsR::synapse0x2ecc150() {
   return (neuron0x2ec4b80()*-0.469324);
}

double NNfunction_ss_dLsR::synapse0x2ecc190() {
   return (neuron0x2ec4ec0()*0.120549);
}

double NNfunction_ss_dLsR::synapse0x2ecc510() {
   return (neuron0x2ec0300()*0.235529);
}

double NNfunction_ss_dLsR::synapse0x2ecc550() {
   return (neuron0x2ec0640()*-0.0212913);
}

double NNfunction_ss_dLsR::synapse0x2ecc590() {
   return (neuron0x2ec0980()*0.342407);
}

double NNfunction_ss_dLsR::synapse0x2ecc5d0() {
   return (neuron0x2ec0cc0()*-0.264687);
}

double NNfunction_ss_dLsR::synapse0x2ecc610() {
   return (neuron0x2ec1000()*0.446417);
}

double NNfunction_ss_dLsR::synapse0x2ecc650() {
   return (neuron0x2ec1340()*0.0512661);
}

double NNfunction_ss_dLsR::synapse0x2ecc690() {
   return (neuron0x2ec1680()*0.0887441);
}

double NNfunction_ss_dLsR::synapse0x2ecc6d0() {
   return (neuron0x2ec19c0()*0.889054);
}

double NNfunction_ss_dLsR::synapse0x2ecc710() {
   return (neuron0x2ec1d00()*0.566055);
}

double NNfunction_ss_dLsR::synapse0x2ecc750() {
   return (neuron0x2ec2040()*0.078556);
}

double NNfunction_ss_dLsR::synapse0x2ecc790() {
   return (neuron0x2ec2380()*0.794254);
}

double NNfunction_ss_dLsR::synapse0x2ecc7d0() {
   return (neuron0x2ec26c0()*1.53394);
}

double NNfunction_ss_dLsR::synapse0x2ecc810() {
   return (neuron0x2ec2a00()*-0.177773);
}

double NNfunction_ss_dLsR::synapse0x2ecc850() {
   return (neuron0x2ec2d40()*0.0706434);
}

double NNfunction_ss_dLsR::synapse0x2ecc890() {
   return (neuron0x2ec3080()*0.129924);
}

double NNfunction_ss_dLsR::synapse0x2ecc8d0() {
   return (neuron0x2ec33c0()*-0.394665);
}

double NNfunction_ss_dLsR::synapse0x2ecc360() {
   return (neuron0x2ec3700()*0.0527366);
}

double NNfunction_ss_dLsR::synapse0x2ecc3a0() {
   return (neuron0x2ec3c60()*0.221481);
}

double NNfunction_ss_dLsR::synapse0x2ecca20() {
   return (neuron0x2ec3e80()*-0.777881);
}

double NNfunction_ss_dLsR::synapse0x2ecca60() {
   return (neuron0x2ec41c0()*-0.0892642);
}

double NNfunction_ss_dLsR::synapse0x2eccaa0() {
   return (neuron0x2ec4500()*0.303095);
}

double NNfunction_ss_dLsR::synapse0x2eccae0() {
   return (neuron0x2ec4840()*0.382507);
}

double NNfunction_ss_dLsR::synapse0x2eccb20() {
   return (neuron0x2ec4b80()*-0.527633);
}

double NNfunction_ss_dLsR::synapse0x2eccb60() {
   return (neuron0x2ec4ec0()*0.0474402);
}

double NNfunction_ss_dLsR::synapse0x2eccd30() {
   return (neuron0x2ec0300()*-0.0947551);
}

double NNfunction_ss_dLsR::synapse0x2ed5dc0() {
   return (neuron0x2ec0640()*-0.124869);
}

double NNfunction_ss_dLsR::synapse0x2ed5e00() {
   return (neuron0x2ec0980()*-0.271347);
}

double NNfunction_ss_dLsR::synapse0x2ed5e40() {
   return (neuron0x2ec0cc0()*0.431581);
}

double NNfunction_ss_dLsR::synapse0x2ed5e80() {
   return (neuron0x2ec1000()*0.228389);
}

double NNfunction_ss_dLsR::synapse0x2ed5ec0() {
   return (neuron0x2ec1340()*0.00242992);
}

double NNfunction_ss_dLsR::synapse0x2ed5f00() {
   return (neuron0x2ec1680()*-0.0764539);
}

double NNfunction_ss_dLsR::synapse0x2ed5f40() {
   return (neuron0x2ec19c0()*-0.276444);
}

double NNfunction_ss_dLsR::synapse0x2ed5f80() {
   return (neuron0x2ec1d00()*0.630828);
}

double NNfunction_ss_dLsR::synapse0x2ed5fc0() {
   return (neuron0x2ec2040()*-0.34252);
}

double NNfunction_ss_dLsR::synapse0x2ed6000() {
   return (neuron0x2ec2380()*-0.908353);
}

double NNfunction_ss_dLsR::synapse0x2ed6040() {
   return (neuron0x2ec26c0()*-0.387933);
}

double NNfunction_ss_dLsR::synapse0x2ed6080() {
   return (neuron0x2ec2a00()*-0.108827);
}

double NNfunction_ss_dLsR::synapse0x2ed60c0() {
   return (neuron0x2ec2d40()*0.800274);
}

double NNfunction_ss_dLsR::synapse0x2ed6100() {
   return (neuron0x2ec3080()*0.471888);
}

double NNfunction_ss_dLsR::synapse0x2ed6140() {
   return (neuron0x2ec33c0()*0.236597);
}

double NNfunction_ss_dLsR::synapse0x2ed5c10() {
   return (neuron0x2ec3700()*-0.268733);
}

double NNfunction_ss_dLsR::synapse0x2ed5c50() {
   return (neuron0x2ec3c60()*0.0491381);
}

double NNfunction_ss_dLsR::synapse0x2ed6290() {
   return (neuron0x2ec3e80()*0.675546);
}

double NNfunction_ss_dLsR::synapse0x2ed62d0() {
   return (neuron0x2ec41c0()*-0.438735);
}

double NNfunction_ss_dLsR::synapse0x2ed6310() {
   return (neuron0x2ec4500()*0.0619182);
}

double NNfunction_ss_dLsR::synapse0x2ed6350() {
   return (neuron0x2ec4840()*-0.193753);
}

double NNfunction_ss_dLsR::synapse0x2ed6390() {
   return (neuron0x2ec4b80()*0.00659815);
}

double NNfunction_ss_dLsR::synapse0x2ed63d0() {
   return (neuron0x2ec4ec0()*-0.12364);
}

double NNfunction_ss_dLsR::synapse0x2ed6750() {
   return (neuron0x2ec0300()*0.418004);
}

double NNfunction_ss_dLsR::synapse0x2ed6790() {
   return (neuron0x2ec0640()*-0.347025);
}

double NNfunction_ss_dLsR::synapse0x2ed67d0() {
   return (neuron0x2ec0980()*-0.242026);
}

double NNfunction_ss_dLsR::synapse0x2ed6810() {
   return (neuron0x2ec0cc0()*0.249949);
}

double NNfunction_ss_dLsR::synapse0x2ed6850() {
   return (neuron0x2ec1000()*-0.446392);
}

double NNfunction_ss_dLsR::synapse0x2ed6890() {
   return (neuron0x2ec1340()*-0.0324387);
}

double NNfunction_ss_dLsR::synapse0x2ed68d0() {
   return (neuron0x2ec1680()*-0.317666);
}

double NNfunction_ss_dLsR::synapse0x2ed6910() {
   return (neuron0x2ec19c0()*0.129347);
}

double NNfunction_ss_dLsR::synapse0x2ed6950() {
   return (neuron0x2ec1d00()*0.169339);
}

double NNfunction_ss_dLsR::synapse0x2ed6990() {
   return (neuron0x2ec2040()*-0.0935624);
}

double NNfunction_ss_dLsR::synapse0x2ed69d0() {
   return (neuron0x2ec2380()*0.389428);
}

double NNfunction_ss_dLsR::synapse0x2ed6a10() {
   return (neuron0x2ec26c0()*-0.484891);
}

double NNfunction_ss_dLsR::synapse0x2ed6a50() {
   return (neuron0x2ec2a00()*-0.114777);
}

double NNfunction_ss_dLsR::synapse0x2ed6a90() {
   return (neuron0x2ec2d40()*0.217992);
}

double NNfunction_ss_dLsR::synapse0x2ed6ad0() {
   return (neuron0x2ec3080()*0.144157);
}

double NNfunction_ss_dLsR::synapse0x2ed6b10() {
   return (neuron0x2ec33c0()*-0.21504);
}

double NNfunction_ss_dLsR::synapse0x2ed65a0() {
   return (neuron0x2ec3700()*0.588594);
}

double NNfunction_ss_dLsR::synapse0x2ed65e0() {
   return (neuron0x2ec3c60()*-0.217801);
}

double NNfunction_ss_dLsR::synapse0x2ed6c60() {
   return (neuron0x2ec3e80()*0.240059);
}

double NNfunction_ss_dLsR::synapse0x2ed6ca0() {
   return (neuron0x2ec41c0()*-0.157653);
}

double NNfunction_ss_dLsR::synapse0x2ed6ce0() {
   return (neuron0x2ec4500()*-0.24299);
}

double NNfunction_ss_dLsR::synapse0x2ed6d20() {
   return (neuron0x2ec4840()*-0.0903043);
}

double NNfunction_ss_dLsR::synapse0x2ed6d60() {
   return (neuron0x2ec4b80()*-0.193012);
}

double NNfunction_ss_dLsR::synapse0x2ed6da0() {
   return (neuron0x2ec4ec0()*0.21898);
}

double NNfunction_ss_dLsR::synapse0x2ed7120() {
   return (neuron0x2ec0300()*0.268479);
}

double NNfunction_ss_dLsR::synapse0x2ed7160() {
   return (neuron0x2ec0640()*0.695912);
}

double NNfunction_ss_dLsR::synapse0x2ed71a0() {
   return (neuron0x2ec0980()*0.114803);
}

double NNfunction_ss_dLsR::synapse0x2ed71e0() {
   return (neuron0x2ec0cc0()*-1.31615);
}

double NNfunction_ss_dLsR::synapse0x2ed7220() {
   return (neuron0x2ec1000()*0.377146);
}

double NNfunction_ss_dLsR::synapse0x2ed7260() {
   return (neuron0x2ec1340()*-0.213658);
}

double NNfunction_ss_dLsR::synapse0x2ed72a0() {
   return (neuron0x2ec1680()*-0.224978);
}

double NNfunction_ss_dLsR::synapse0x2ed72e0() {
   return (neuron0x2ec19c0()*0.00569058);
}

double NNfunction_ss_dLsR::synapse0x2ed7320() {
   return (neuron0x2ec1d00()*-0.162744);
}

double NNfunction_ss_dLsR::synapse0x2ed7360() {
   return (neuron0x2ec2040()*-0.11087);
}

double NNfunction_ss_dLsR::synapse0x2ed73a0() {
   return (neuron0x2ec2380()*0.654538);
}

double NNfunction_ss_dLsR::synapse0x2ed73e0() {
   return (neuron0x2ec26c0()*0.21781);
}

double NNfunction_ss_dLsR::synapse0x2ed7420() {
   return (neuron0x2ec2a00()*0.514241);
}

double NNfunction_ss_dLsR::synapse0x2ed7460() {
   return (neuron0x2ec2d40()*0.110141);
}

double NNfunction_ss_dLsR::synapse0x2ed74a0() {
   return (neuron0x2ec3080()*-0.347056);
}

double NNfunction_ss_dLsR::synapse0x2ed74e0() {
   return (neuron0x2ec33c0()*-0.289985);
}

double NNfunction_ss_dLsR::synapse0x2ed6f70() {
   return (neuron0x2ec3700()*-0.374838);
}

double NNfunction_ss_dLsR::synapse0x2ed6fb0() {
   return (neuron0x2ec3c60()*0.263556);
}

double NNfunction_ss_dLsR::synapse0x2ed7630() {
   return (neuron0x2ec3e80()*-0.0859269);
}

double NNfunction_ss_dLsR::synapse0x2ed7670() {
   return (neuron0x2ec41c0()*0.519878);
}

double NNfunction_ss_dLsR::synapse0x2ed76b0() {
   return (neuron0x2ec4500()*0.0618705);
}

double NNfunction_ss_dLsR::synapse0x2ed76f0() {
   return (neuron0x2ec4840()*-0.826589);
}

double NNfunction_ss_dLsR::synapse0x2ed7730() {
   return (neuron0x2ec4b80()*0.39432);
}

double NNfunction_ss_dLsR::synapse0x2ed7770() {
   return (neuron0x2ec4ec0()*0.759359);
}

double NNfunction_ss_dLsR::synapse0x2ed7af0() {
   return (neuron0x2ec0300()*-0.0042324);
}

double NNfunction_ss_dLsR::synapse0x2ed7b30() {
   return (neuron0x2ec0640()*0.0101119);
}

double NNfunction_ss_dLsR::synapse0x2ed7b70() {
   return (neuron0x2ec0980()*0.0550848);
}

double NNfunction_ss_dLsR::synapse0x2ed7bb0() {
   return (neuron0x2ec0cc0()*-0.0483269);
}

double NNfunction_ss_dLsR::synapse0x2ed7bf0() {
   return (neuron0x2ec1000()*-0.00512513);
}

double NNfunction_ss_dLsR::synapse0x2ed7c30() {
   return (neuron0x2ec1340()*0.0100597);
}

double NNfunction_ss_dLsR::synapse0x2ed7c70() {
   return (neuron0x2ec1680()*0.00472092);
}

double NNfunction_ss_dLsR::synapse0x2ed7cb0() {
   return (neuron0x2ec19c0()*0.0194036);
}

double NNfunction_ss_dLsR::synapse0x2ed7cf0() {
   return (neuron0x2ec1d00()*0.0135271);
}

double NNfunction_ss_dLsR::synapse0x2ed7d30() {
   return (neuron0x2ec2040()*0.00483796);
}

double NNfunction_ss_dLsR::synapse0x2ed7d70() {
   return (neuron0x2ec2380()*0.0185095);
}

double NNfunction_ss_dLsR::synapse0x2ed7db0() {
   return (neuron0x2ec26c0()*-1.24369);
}

double NNfunction_ss_dLsR::synapse0x2ed7df0() {
   return (neuron0x2ec2a00()*0.010314);
}

double NNfunction_ss_dLsR::synapse0x2ed7e30() {
   return (neuron0x2ec2d40()*-0.0213999);
}

double NNfunction_ss_dLsR::synapse0x2ed7e70() {
   return (neuron0x2ec3080()*1.63344e-05);
}

double NNfunction_ss_dLsR::synapse0x2ed7eb0() {
   return (neuron0x2ec33c0()*-0.0240832);
}

double NNfunction_ss_dLsR::synapse0x2ed7940() {
   return (neuron0x2ec3700()*-0.0065926);
}

double NNfunction_ss_dLsR::synapse0x2ed7980() {
   return (neuron0x2ec3c60()*-0.00657687);
}

double NNfunction_ss_dLsR::synapse0x2ed8000() {
   return (neuron0x2ec3e80()*0.520506);
}

double NNfunction_ss_dLsR::synapse0x2ed8040() {
   return (neuron0x2ec41c0()*-0.00573154);
}

double NNfunction_ss_dLsR::synapse0x2ed8080() {
   return (neuron0x2ec4500()*0.0150076);
}

double NNfunction_ss_dLsR::synapse0x2ed80c0() {
   return (neuron0x2ec4840()*-0.00821967);
}

double NNfunction_ss_dLsR::synapse0x2ed8100() {
   return (neuron0x2ec4b80()*-0.00516422);
}

double NNfunction_ss_dLsR::synapse0x2ed8140() {
   return (neuron0x2ec4ec0()*0.004855);
}

double NNfunction_ss_dLsR::synapse0x2ed84c0() {
   return (neuron0x2ec0300()*0.22586);
}

double NNfunction_ss_dLsR::synapse0x2ed8500() {
   return (neuron0x2ec0640()*-0.0544086);
}

double NNfunction_ss_dLsR::synapse0x2ed8540() {
   return (neuron0x2ec0980()*-0.974559);
}

double NNfunction_ss_dLsR::synapse0x2ed8580() {
   return (neuron0x2ec0cc0()*-1.66109);
}

double NNfunction_ss_dLsR::synapse0x2ed85c0() {
   return (neuron0x2ec1000()*0.37481);
}

double NNfunction_ss_dLsR::synapse0x2ed8600() {
   return (neuron0x2ec1340()*0.168319);
}

double NNfunction_ss_dLsR::synapse0x2ed8640() {
   return (neuron0x2ec1680()*0.492643);
}

double NNfunction_ss_dLsR::synapse0x2ed8680() {
   return (neuron0x2ec19c0()*0.733352);
}

double NNfunction_ss_dLsR::synapse0x2ed86c0() {
   return (neuron0x2ec1d00()*-0.804949);
}

double NNfunction_ss_dLsR::synapse0x2ed8700() {
   return (neuron0x2ec2040()*0.0619656);
}

double NNfunction_ss_dLsR::synapse0x2ed8740() {
   return (neuron0x2ec2380()*0.329578);
}

double NNfunction_ss_dLsR::synapse0x2ed8780() {
   return (neuron0x2ec26c0()*-1.7458);
}

double NNfunction_ss_dLsR::synapse0x2ed87c0() {
   return (neuron0x2ec2a00()*0.231354);
}

double NNfunction_ss_dLsR::synapse0x2ed8800() {
   return (neuron0x2ec2d40()*-0.115777);
}

double NNfunction_ss_dLsR::synapse0x2ed8840() {
   return (neuron0x2ec3080()*0.218673);
}

double NNfunction_ss_dLsR::synapse0x2ed8880() {
   return (neuron0x2ec33c0()*0.0557179);
}

double NNfunction_ss_dLsR::synapse0x2ed8310() {
   return (neuron0x2ec3700()*-0.444492);
}

double NNfunction_ss_dLsR::synapse0x2ed8350() {
   return (neuron0x2ec3c60()*0.0852052);
}

double NNfunction_ss_dLsR::synapse0x2ed89d0() {
   return (neuron0x2ec3e80()*0.88599);
}

double NNfunction_ss_dLsR::synapse0x2ed8a10() {
   return (neuron0x2ec41c0()*-0.233972);
}

double NNfunction_ss_dLsR::synapse0x2ed8a50() {
   return (neuron0x2ec4500()*-0.138413);
}

double NNfunction_ss_dLsR::synapse0x2ed8a90() {
   return (neuron0x2ec4840()*0.272482);
}

double NNfunction_ss_dLsR::synapse0x2ed8ad0() {
   return (neuron0x2ec4b80()*-0.153645);
}

double NNfunction_ss_dLsR::synapse0x2ed8b10() {
   return (neuron0x2ec4ec0()*0.324463);
}

double NNfunction_ss_dLsR::synapse0x2ed8e90() {
   return (neuron0x2ec0300()*0.157175);
}

double NNfunction_ss_dLsR::synapse0x2ed8ed0() {
   return (neuron0x2ec0640()*-0.263473);
}

double NNfunction_ss_dLsR::synapse0x2ed8f10() {
   return (neuron0x2ec0980()*0.650265);
}

double NNfunction_ss_dLsR::synapse0x2ed8f50() {
   return (neuron0x2ec0cc0()*-1.06744);
}

double NNfunction_ss_dLsR::synapse0x2ed8f90() {
   return (neuron0x2ec1000()*0.403321);
}

double NNfunction_ss_dLsR::synapse0x2ed8fd0() {
   return (neuron0x2ec1340()*0.63763);
}

double NNfunction_ss_dLsR::synapse0x2ed9010() {
   return (neuron0x2ec1680()*1.33472);
}

double NNfunction_ss_dLsR::synapse0x2ed9050() {
   return (neuron0x2ec19c0()*0.997863);
}

double NNfunction_ss_dLsR::synapse0x2ed9090() {
   return (neuron0x2ec1d00()*1.2875);
}

double NNfunction_ss_dLsR::synapse0x2ed90d0() {
   return (neuron0x2ec2040()*0.644119);
}

double NNfunction_ss_dLsR::synapse0x2ed9110() {
   return (neuron0x2ec2380()*0.883027);
}

double NNfunction_ss_dLsR::synapse0x2ed9150() {
   return (neuron0x2ec26c0()*-0.751621);
}

double NNfunction_ss_dLsR::synapse0x2ed9190() {
   return (neuron0x2ec2a00()*0.0555035);
}

double NNfunction_ss_dLsR::synapse0x2ed91d0() {
   return (neuron0x2ec2d40()*-0.130788);
}

double NNfunction_ss_dLsR::synapse0x2ed9210() {
   return (neuron0x2ec3080()*-0.42747);
}

double NNfunction_ss_dLsR::synapse0x2ed9250() {
   return (neuron0x2ec33c0()*-0.799243);
}

double NNfunction_ss_dLsR::synapse0x2ed8ce0() {
   return (neuron0x2ec3700()*-0.0432193);
}

double NNfunction_ss_dLsR::synapse0x2ed8d20() {
   return (neuron0x2ec3c60()*0.0507426);
}

double NNfunction_ss_dLsR::synapse0x2ed93a0() {
   return (neuron0x2ec3e80()*-0.728175);
}

double NNfunction_ss_dLsR::synapse0x2ed93e0() {
   return (neuron0x2ec41c0()*-0.66014);
}

double NNfunction_ss_dLsR::synapse0x2ed9420() {
   return (neuron0x2ec4500()*1.30568);
}

double NNfunction_ss_dLsR::synapse0x2ed9460() {
   return (neuron0x2ec4840()*0.0392704);
}

double NNfunction_ss_dLsR::synapse0x2ed94a0() {
   return (neuron0x2ec4b80()*-1.04209);
}

double NNfunction_ss_dLsR::synapse0x2ed94e0() {
   return (neuron0x2ec4ec0()*-0.175866);
}

double NNfunction_ss_dLsR::synapse0x2ed9860() {
   return (neuron0x2ec0300()*-0.0468108);
}

double NNfunction_ss_dLsR::synapse0x2ed98a0() {
   return (neuron0x2ec0640()*-0.349868);
}

double NNfunction_ss_dLsR::synapse0x2ed98e0() {
   return (neuron0x2ec0980()*-0.907606);
}

double NNfunction_ss_dLsR::synapse0x2ed9920() {
   return (neuron0x2ec0cc0()*1.04035);
}

double NNfunction_ss_dLsR::synapse0x2ed9960() {
   return (neuron0x2ec1000()*0.424303);
}

double NNfunction_ss_dLsR::synapse0x2ed99a0() {
   return (neuron0x2ec1340()*0.107873);
}

double NNfunction_ss_dLsR::synapse0x2ed99e0() {
   return (neuron0x2ec1680()*0.379052);
}

double NNfunction_ss_dLsR::synapse0x2ed9a20() {
   return (neuron0x2ec19c0()*0.211464);
}

double NNfunction_ss_dLsR::synapse0x2ed9a60() {
   return (neuron0x2ec1d00()*0.113988);
}

double NNfunction_ss_dLsR::synapse0x2ed9aa0() {
   return (neuron0x2ec2040()*0.216785);
}

double NNfunction_ss_dLsR::synapse0x2ed9ae0() {
   return (neuron0x2ec2380()*0.899707);
}

double NNfunction_ss_dLsR::synapse0x2ed9b20() {
   return (neuron0x2ec26c0()*-0.0931325);
}

double NNfunction_ss_dLsR::synapse0x2ed9b60() {
   return (neuron0x2ec2a00()*0.386124);
}

double NNfunction_ss_dLsR::synapse0x2ed9ba0() {
   return (neuron0x2ec2d40()*0.0817052);
}

double NNfunction_ss_dLsR::synapse0x2ed9be0() {
   return (neuron0x2ec3080()*-0.367735);
}

double NNfunction_ss_dLsR::synapse0x2ed9c20() {
   return (neuron0x2ec33c0()*-0.0932457);
}

double NNfunction_ss_dLsR::synapse0x2ed96b0() {
   return (neuron0x2ec3700()*-0.765875);
}

double NNfunction_ss_dLsR::synapse0x2ed96f0() {
   return (neuron0x2ec3c60()*0.161963);
}

double NNfunction_ss_dLsR::synapse0x2ed9d70() {
   return (neuron0x2ec3e80()*0.867033);
}

double NNfunction_ss_dLsR::synapse0x2ed9db0() {
   return (neuron0x2ec41c0()*0.0444833);
}

double NNfunction_ss_dLsR::synapse0x2ed9df0() {
   return (neuron0x2ec4500()*0.32059);
}

double NNfunction_ss_dLsR::synapse0x2ed9e30() {
   return (neuron0x2ec4840()*-0.0456801);
}

double NNfunction_ss_dLsR::synapse0x2ed9e70() {
   return (neuron0x2ec4b80()*-0.426994);
}

double NNfunction_ss_dLsR::synapse0x2ed9eb0() {
   return (neuron0x2ec4ec0()*0.190501);
}

double NNfunction_ss_dLsR::synapse0x2eda230() {
   return (neuron0x2ec0300()*-0.177525);
}

double NNfunction_ss_dLsR::synapse0x2eda270() {
   return (neuron0x2ec0640()*-0.0433066);
}

double NNfunction_ss_dLsR::synapse0x2eda2b0() {
   return (neuron0x2ec0980()*0.3215);
}

double NNfunction_ss_dLsR::synapse0x2eda2f0() {
   return (neuron0x2ec0cc0()*-0.126201);
}

double NNfunction_ss_dLsR::synapse0x2eda330() {
   return (neuron0x2ec1000()*-0.234144);
}

double NNfunction_ss_dLsR::synapse0x2eda370() {
   return (neuron0x2ec1340()*-0.159933);
}

double NNfunction_ss_dLsR::synapse0x2eda3b0() {
   return (neuron0x2ec1680()*0.363379);
}

double NNfunction_ss_dLsR::synapse0x2eda3f0() {
   return (neuron0x2ec19c0()*-0.205951);
}

double NNfunction_ss_dLsR::synapse0x2eda430() {
   return (neuron0x2ec1d00()*-0.147843);
}

double NNfunction_ss_dLsR::synapse0x2eda470() {
   return (neuron0x2ec2040()*0.40034);
}

double NNfunction_ss_dLsR::synapse0x2eda4b0() {
   return (neuron0x2ec2380()*-0.354796);
}

double NNfunction_ss_dLsR::synapse0x2eda4f0() {
   return (neuron0x2ec26c0()*1.24821);
}

double NNfunction_ss_dLsR::synapse0x2eda530() {
   return (neuron0x2ec2a00()*-0.153412);
}

double NNfunction_ss_dLsR::synapse0x2eda570() {
   return (neuron0x2ec2d40()*0.149613);
}

double NNfunction_ss_dLsR::synapse0x2eda5b0() {
   return (neuron0x2ec3080()*-0.350196);
}

double NNfunction_ss_dLsR::synapse0x2eda5f0() {
   return (neuron0x2ec33c0()*-0.139052);
}

double NNfunction_ss_dLsR::synapse0x2eda080() {
   return (neuron0x2ec3700()*-0.0856059);
}

double NNfunction_ss_dLsR::synapse0x2eda0c0() {
   return (neuron0x2ec3c60()*-0.0661913);
}

double NNfunction_ss_dLsR::synapse0x2eda740() {
   return (neuron0x2ec3e80()*1.33975);
}

double NNfunction_ss_dLsR::synapse0x2eda780() {
   return (neuron0x2ec41c0()*0.259811);
}

double NNfunction_ss_dLsR::synapse0x2eda7c0() {
   return (neuron0x2ec4500()*0.0969635);
}

double NNfunction_ss_dLsR::synapse0x2eda800() {
   return (neuron0x2ec4840()*-0.139405);
}

double NNfunction_ss_dLsR::synapse0x2eda840() {
   return (neuron0x2ec4b80()*0.311623);
}

double NNfunction_ss_dLsR::synapse0x2eda880() {
   return (neuron0x2ec4ec0()*-0.179694);
}

double NNfunction_ss_dLsR::synapse0x2edac00() {
   return (neuron0x2ec0300()*0.302102);
}

double NNfunction_ss_dLsR::synapse0x2ecf1d0() {
   return (neuron0x2ec0640()*-0.526339);
}

double NNfunction_ss_dLsR::synapse0x2ecf210() {
   return (neuron0x2ec0980()*-1.47027);
}

double NNfunction_ss_dLsR::synapse0x2ecf250() {
   return (neuron0x2ec0cc0()*-0.694378);
}

double NNfunction_ss_dLsR::synapse0x2ecf4a0() {
   return (neuron0x2ec1000()*0.283414);
}

double NNfunction_ss_dLsR::synapse0x2ecf4e0() {
   return (neuron0x2ec1340()*-0.121834);
}

double NNfunction_ss_dLsR::synapse0x2ecf520() {
   return (neuron0x2ec1680()*-0.0540585);
}

double NNfunction_ss_dLsR::synapse0x2ecf770() {
   return (neuron0x2ec19c0()*0.12078);
}

double NNfunction_ss_dLsR::synapse0x2ecf7b0() {
   return (neuron0x2ec1d00()*-0.0437145);
}

double NNfunction_ss_dLsR::synapse0x2ecfa00() {
   return (neuron0x2ec2040()*0.777249);
}

double NNfunction_ss_dLsR::synapse0x2ecfa40() {
   return (neuron0x2ec2380()*0.256259);
}

double NNfunction_ss_dLsR::synapse0x2ecfa80() {
   return (neuron0x2ec26c0()*1.99908);
}

double NNfunction_ss_dLsR::synapse0x2ecfcd0() {
   return (neuron0x2ec2a00()*-0.200059);
}

double NNfunction_ss_dLsR::synapse0x2ecfd10() {
   return (neuron0x2ec2d40()*0.24);
}

double NNfunction_ss_dLsR::synapse0x2ecff60() {
   return (neuron0x2ec3080()*-0.377273);
}

double NNfunction_ss_dLsR::synapse0x2ecffa0() {
   return (neuron0x2ec33c0()*-0.404807);
}

double NNfunction_ss_dLsR::synapse0x2edaa50() {
   return (neuron0x2ec3700()*-0.181583);
}

double NNfunction_ss_dLsR::synapse0x2edaa90() {
   return (neuron0x2ec3c60()*-0.47368);
}

double NNfunction_ss_dLsR::synapse0x2ed00f0() {
   return (neuron0x2ec3e80()*-0.335384);
}

double NNfunction_ss_dLsR::synapse0x2ed0600() {
   return (neuron0x2ec41c0()*0.347779);
}

double NNfunction_ss_dLsR::synapse0x2ed0640() {
   return (neuron0x2ec4500()*0.685529);
}

double NNfunction_ss_dLsR::synapse0x2ed0680() {
   return (neuron0x2ec4840()*0.243562);
}

double NNfunction_ss_dLsR::synapse0x2ed08d0() {
   return (neuron0x2ec4b80()*-0.393695);
}

double NNfunction_ss_dLsR::synapse0x2ed0910() {
   return (neuron0x2ec4ec0()*0.0414145);
}

double NNfunction_ss_dLsR::synapse0x2ed01c0() {
   return (neuron0x2ec0300()*-0.376542);
}

double NNfunction_ss_dLsR::synapse0x2ed0200() {
   return (neuron0x2ec0640()*-0.0919626);
}

double NNfunction_ss_dLsR::synapse0x2ed0240() {
   return (neuron0x2ec0980()*-0.362611);
}

double NNfunction_ss_dLsR::synapse0x2ed0280() {
   return (neuron0x2ec0cc0()*0.489673);
}

double NNfunction_ss_dLsR::synapse0x2ed0c00() {
   return (neuron0x2ec1000()*0.19133);
}

double NNfunction_ss_dLsR::synapse0x2edcf50() {
   return (neuron0x2ec1340()*-0.184203);
}

double NNfunction_ss_dLsR::synapse0x2edcf90() {
   return (neuron0x2ec1680()*0.0230846);
}

double NNfunction_ss_dLsR::synapse0x2edcfd0() {
   return (neuron0x2ec19c0()*0.0609657);
}

double NNfunction_ss_dLsR::synapse0x2edd010() {
   return (neuron0x2ec1d00()*0.0903656);
}

double NNfunction_ss_dLsR::synapse0x2edd050() {
   return (neuron0x2ec2040()*0.0289238);
}

double NNfunction_ss_dLsR::synapse0x2edd090() {
   return (neuron0x2ec2380()*0.114659);
}

double NNfunction_ss_dLsR::synapse0x2edd0d0() {
   return (neuron0x2ec26c0()*-0.173077);
}

double NNfunction_ss_dLsR::synapse0x2edd110() {
   return (neuron0x2ec2a00()*-0.149192);
}

double NNfunction_ss_dLsR::synapse0x2edd150() {
   return (neuron0x2ec2d40()*-0.165838);
}

double NNfunction_ss_dLsR::synapse0x2edd190() {
   return (neuron0x2ec3080()*-0.370855);
}

double NNfunction_ss_dLsR::synapse0x2edd1d0() {
   return (neuron0x2ec33c0()*-0.174565);
}

double NNfunction_ss_dLsR::synapse0x2ed0ae0() {
   return (neuron0x2ec3700()*-0.250607);
}

double NNfunction_ss_dLsR::synapse0x2ed0b20() {
   return (neuron0x2ec3c60()*-0.0394434);
}

double NNfunction_ss_dLsR::synapse0x2edd320() {
   return (neuron0x2ec3e80()*0.0699149);
}

double NNfunction_ss_dLsR::synapse0x2edd360() {
   return (neuron0x2ec41c0()*0.0244017);
}

double NNfunction_ss_dLsR::synapse0x2edd3a0() {
   return (neuron0x2ec4500()*0.0698625);
}

double NNfunction_ss_dLsR::synapse0x2edd3e0() {
   return (neuron0x2ec4840()*-0.0873942);
}

double NNfunction_ss_dLsR::synapse0x2edd420() {
   return (neuron0x2ec4b80()*-0.11083);
}

double NNfunction_ss_dLsR::synapse0x2edd460() {
   return (neuron0x2ec4ec0()*-0.0451517);
}

double NNfunction_ss_dLsR::synapse0x2edd7e0() {
   return (neuron0x2ec0300()*0.0211381);
}

double NNfunction_ss_dLsR::synapse0x2edd820() {
   return (neuron0x2ec0640()*0.0120734);
}

double NNfunction_ss_dLsR::synapse0x2edd860() {
   return (neuron0x2ec0980()*-0.00569663);
}

double NNfunction_ss_dLsR::synapse0x2edd8a0() {
   return (neuron0x2ec0cc0()*-9.63215);
}

double NNfunction_ss_dLsR::synapse0x2edd8e0() {
   return (neuron0x2ec1000()*-0.015404);
}

double NNfunction_ss_dLsR::synapse0x2edd920() {
   return (neuron0x2ec1340()*-0.0118036);
}

double NNfunction_ss_dLsR::synapse0x2edd960() {
   return (neuron0x2ec1680()*-0.00327932);
}

double NNfunction_ss_dLsR::synapse0x2edd9a0() {
   return (neuron0x2ec19c0()*0.0247714);
}

double NNfunction_ss_dLsR::synapse0x2edd9e0() {
   return (neuron0x2ec1d00()*-0.00621674);
}

double NNfunction_ss_dLsR::synapse0x2edda20() {
   return (neuron0x2ec2040()*-0.00648074);
}

double NNfunction_ss_dLsR::synapse0x2edda60() {
   return (neuron0x2ec2380()*-0.00407529);
}

double NNfunction_ss_dLsR::synapse0x2eddaa0() {
   return (neuron0x2ec26c0()*0.00626839);
}

double NNfunction_ss_dLsR::synapse0x2eddae0() {
   return (neuron0x2ec2a00()*-0.0358313);
}

double NNfunction_ss_dLsR::synapse0x2eddb20() {
   return (neuron0x2ec2d40()*0.0162978);
}

double NNfunction_ss_dLsR::synapse0x2eddb60() {
   return (neuron0x2ec3080()*0.0207466);
}

double NNfunction_ss_dLsR::synapse0x2eddba0() {
   return (neuron0x2ec33c0()*-0.00335215);
}

double NNfunction_ss_dLsR::synapse0x2edd630() {
   return (neuron0x2ec3700()*0.00908565);
}

double NNfunction_ss_dLsR::synapse0x2edd670() {
   return (neuron0x2ec3c60()*0.0349239);
}

double NNfunction_ss_dLsR::synapse0x2eddcf0() {
   return (neuron0x2ec3e80()*0.36041);
}

double NNfunction_ss_dLsR::synapse0x2eddd30() {
   return (neuron0x2ec41c0()*-0.0144335);
}

double NNfunction_ss_dLsR::synapse0x2eddd70() {
   return (neuron0x2ec4500()*-0.0453009);
}

double NNfunction_ss_dLsR::synapse0x2edddb0() {
   return (neuron0x2ec4840()*0.0178613);
}

double NNfunction_ss_dLsR::synapse0x2edddf0() {
   return (neuron0x2ec4b80()*0.0356593);
}

double NNfunction_ss_dLsR::synapse0x2edde30() {
   return (neuron0x2ec4ec0()*-0.0180266);
}

double NNfunction_ss_dLsR::synapse0x2ede1b0() {
   return (neuron0x2ec0300()*-0.0188191);
}

double NNfunction_ss_dLsR::synapse0x2ede1f0() {
   return (neuron0x2ec0640()*-0.0011239);
}

double NNfunction_ss_dLsR::synapse0x2ede230() {
   return (neuron0x2ec0980()*0.00685188);
}

double NNfunction_ss_dLsR::synapse0x2ede270() {
   return (neuron0x2ec0cc0()*1.53207);
}

double NNfunction_ss_dLsR::synapse0x2ede2b0() {
   return (neuron0x2ec1000()*0.00791225);
}

double NNfunction_ss_dLsR::synapse0x2ede2f0() {
   return (neuron0x2ec1340()*0.0240273);
}

double NNfunction_ss_dLsR::synapse0x2ede330() {
   return (neuron0x2ec1680()*0.00287992);
}

double NNfunction_ss_dLsR::synapse0x2ede370() {
   return (neuron0x2ec19c0()*-0.0206076);
}

double NNfunction_ss_dLsR::synapse0x2ede3b0() {
   return (neuron0x2ec1d00()*0.0317615);
}

double NNfunction_ss_dLsR::synapse0x2ede3f0() {
   return (neuron0x2ec2040()*0.00566453);
}

double NNfunction_ss_dLsR::synapse0x2ede430() {
   return (neuron0x2ec2380()*-0.00705798);
}

double NNfunction_ss_dLsR::synapse0x2ede470() {
   return (neuron0x2ec26c0()*-0.172174);
}

double NNfunction_ss_dLsR::synapse0x2ede4b0() {
   return (neuron0x2ec2a00()*0.00293627);
}

double NNfunction_ss_dLsR::synapse0x2ede4f0() {
   return (neuron0x2ec2d40()*-0.0316348);
}

double NNfunction_ss_dLsR::synapse0x2ede530() {
   return (neuron0x2ec3080()*-0.0105064);
}

double NNfunction_ss_dLsR::synapse0x2ede570() {
   return (neuron0x2ec33c0()*-0.000246843);
}

double NNfunction_ss_dLsR::synapse0x2ede000() {
   return (neuron0x2ec3700()*-0.022758);
}

double NNfunction_ss_dLsR::synapse0x2ede040() {
   return (neuron0x2ec3c60()*-0.0209383);
}

double NNfunction_ss_dLsR::synapse0x2ede6c0() {
   return (neuron0x2ec3e80()*-0.182919);
}

double NNfunction_ss_dLsR::synapse0x2ede700() {
   return (neuron0x2ec41c0()*0.0137881);
}

double NNfunction_ss_dLsR::synapse0x2ede740() {
   return (neuron0x2ec4500()*0.00396791);
}

double NNfunction_ss_dLsR::synapse0x2ede780() {
   return (neuron0x2ec4840()*-0.0282388);
}

double NNfunction_ss_dLsR::synapse0x2ede7c0() {
   return (neuron0x2ec4b80()*0.00504497);
}

double NNfunction_ss_dLsR::synapse0x2ede800() {
   return (neuron0x2ec4ec0()*0.00262886);
}

double NNfunction_ss_dLsR::synapse0x2edeb80() {
   return (neuron0x2ec0300()*-0.0130379);
}

double NNfunction_ss_dLsR::synapse0x2edebc0() {
   return (neuron0x2ec0640()*-0.00371501);
}

double NNfunction_ss_dLsR::synapse0x2edec00() {
   return (neuron0x2ec0980()*-0.034858);
}

double NNfunction_ss_dLsR::synapse0x2edec40() {
   return (neuron0x2ec0cc0()*0.170249);
}

double NNfunction_ss_dLsR::synapse0x2edec80() {
   return (neuron0x2ec1000()*-0.00664618);
}

double NNfunction_ss_dLsR::synapse0x2edecc0() {
   return (neuron0x2ec1340()*0.0083176);
}

double NNfunction_ss_dLsR::synapse0x2eded00() {
   return (neuron0x2ec1680()*0.00839282);
}

double NNfunction_ss_dLsR::synapse0x2eded40() {
   return (neuron0x2ec19c0()*0.0119896);
}

double NNfunction_ss_dLsR::synapse0x2eded80() {
   return (neuron0x2ec1d00()*-0.0137471);
}

double NNfunction_ss_dLsR::synapse0x2ededc0() {
   return (neuron0x2ec2040()*0.00417038);
}

double NNfunction_ss_dLsR::synapse0x2edee00() {
   return (neuron0x2ec2380()*0.0128653);
}

double NNfunction_ss_dLsR::synapse0x2edee40() {
   return (neuron0x2ec26c0()*0.643831);
}

double NNfunction_ss_dLsR::synapse0x2edee80() {
   return (neuron0x2ec2a00()*-0.0104471);
}

double NNfunction_ss_dLsR::synapse0x2edeec0() {
   return (neuron0x2ec2d40()*0.0315099);
}

double NNfunction_ss_dLsR::synapse0x2edef00() {
   return (neuron0x2ec3080()*-0.0209259);
}

double NNfunction_ss_dLsR::synapse0x2edef40() {
   return (neuron0x2ec33c0()*-0.0156984);
}

double NNfunction_ss_dLsR::synapse0x2ede9d0() {
   return (neuron0x2ec3700()*0.00944966);
}

double NNfunction_ss_dLsR::synapse0x2edea10() {
   return (neuron0x2ec3c60()*-0.0120734);
}

double NNfunction_ss_dLsR::synapse0x2edf090() {
   return (neuron0x2ec3e80()*0.46578);
}

double NNfunction_ss_dLsR::synapse0x2edf0d0() {
   return (neuron0x2ec41c0()*0.00652995);
}

double NNfunction_ss_dLsR::synapse0x2edf110() {
   return (neuron0x2ec4500()*0.0102622);
}

double NNfunction_ss_dLsR::synapse0x2edf150() {
   return (neuron0x2ec4840()*0.0149071);
}

double NNfunction_ss_dLsR::synapse0x2edf190() {
   return (neuron0x2ec4b80()*0.0199858);
}

double NNfunction_ss_dLsR::synapse0x2edf1d0() {
   return (neuron0x2ec4ec0()*0.00944895);
}

double NNfunction_ss_dLsR::synapse0x2edf550() {
   return (neuron0x2ec0300()*0.424717);
}

double NNfunction_ss_dLsR::synapse0x2edf590() {
   return (neuron0x2ec0640()*0.10286);
}

double NNfunction_ss_dLsR::synapse0x2edf5d0() {
   return (neuron0x2ec0980()*-0.0567113);
}

double NNfunction_ss_dLsR::synapse0x2edf610() {
   return (neuron0x2ec0cc0()*-0.0379794);
}

double NNfunction_ss_dLsR::synapse0x2edf650() {
   return (neuron0x2ec1000()*0.469621);
}

double NNfunction_ss_dLsR::synapse0x2edf690() {
   return (neuron0x2ec1340()*0.133428);
}

double NNfunction_ss_dLsR::synapse0x2edf6d0() {
   return (neuron0x2ec1680()*0.31022);
}

double NNfunction_ss_dLsR::synapse0x2edf710() {
   return (neuron0x2ec19c0()*0.257687);
}

double NNfunction_ss_dLsR::synapse0x2edf750() {
   return (neuron0x2ec1d00()*0.0389463);
}

double NNfunction_ss_dLsR::synapse0x2edf790() {
   return (neuron0x2ec2040()*0.485342);
}

double NNfunction_ss_dLsR::synapse0x2edf7d0() {
   return (neuron0x2ec2380()*-0.125997);
}

double NNfunction_ss_dLsR::synapse0x2edf810() {
   return (neuron0x2ec26c0()*0.145719);
}

double NNfunction_ss_dLsR::synapse0x2edf850() {
   return (neuron0x2ec2a00()*0.319256);
}

double NNfunction_ss_dLsR::synapse0x2edf890() {
   return (neuron0x2ec2d40()*0.35344);
}

double NNfunction_ss_dLsR::synapse0x2edf8d0() {
   return (neuron0x2ec3080()*-0.0666316);
}

double NNfunction_ss_dLsR::synapse0x2edf910() {
   return (neuron0x2ec33c0()*-0.0525665);
}

double NNfunction_ss_dLsR::synapse0x2edf3a0() {
   return (neuron0x2ec3700()*-0.227445);
}

double NNfunction_ss_dLsR::synapse0x2edf3e0() {
   return (neuron0x2ec3c60()*-0.487772);
}

double NNfunction_ss_dLsR::synapse0x2edfa60() {
   return (neuron0x2ec3e80()*-1.30304);
}

double NNfunction_ss_dLsR::synapse0x2edfaa0() {
   return (neuron0x2ec41c0()*-0.794419);
}

double NNfunction_ss_dLsR::synapse0x2edfae0() {
   return (neuron0x2ec4500()*-0.0754425);
}

double NNfunction_ss_dLsR::synapse0x2edfb20() {
   return (neuron0x2ec4840()*0.220744);
}

double NNfunction_ss_dLsR::synapse0x2edfb60() {
   return (neuron0x2ec4b80()*0.0532116);
}

double NNfunction_ss_dLsR::synapse0x2edfba0() {
   return (neuron0x2ec4ec0()*0.197432);
}

double NNfunction_ss_dLsR::synapse0x2edff20() {
   return (neuron0x2ec0300()*0.0409366);
}

double NNfunction_ss_dLsR::synapse0x2edff60() {
   return (neuron0x2ec0640()*-0.107533);
}

double NNfunction_ss_dLsR::synapse0x2edffa0() {
   return (neuron0x2ec0980()*-0.107666);
}

double NNfunction_ss_dLsR::synapse0x2edffe0() {
   return (neuron0x2ec0cc0()*0.0221936);
}

double NNfunction_ss_dLsR::synapse0x2ee0020() {
   return (neuron0x2ec1000()*-0.00033531);
}

double NNfunction_ss_dLsR::synapse0x2ee0060() {
   return (neuron0x2ec1340()*-0.106521);
}

double NNfunction_ss_dLsR::synapse0x2ee00a0() {
   return (neuron0x2ec1680()*-0.0820636);
}

double NNfunction_ss_dLsR::synapse0x2ee00e0() {
   return (neuron0x2ec19c0()*-0.0188359);
}

double NNfunction_ss_dLsR::synapse0x2ee0120() {
   return (neuron0x2ec1d00()*0.032564);
}

double NNfunction_ss_dLsR::synapse0x2ee0160() {
   return (neuron0x2ec2040()*-0.00330082);
}

double NNfunction_ss_dLsR::synapse0x2ee01a0() {
   return (neuron0x2ec2380()*0.0337434);
}

double NNfunction_ss_dLsR::synapse0x2ee01e0() {
   return (neuron0x2ec26c0()*-0.112812);
}

double NNfunction_ss_dLsR::synapse0x2ee0220() {
   return (neuron0x2ec2a00()*0.88323);
}

double NNfunction_ss_dLsR::synapse0x2ee0260() {
   return (neuron0x2ec2d40()*-0.214081);
}

double NNfunction_ss_dLsR::synapse0x2ee02a0() {
   return (neuron0x2ec3080()*0.48015);
}

double NNfunction_ss_dLsR::synapse0x2ee02e0() {
   return (neuron0x2ec33c0()*0.500309);
}

double NNfunction_ss_dLsR::synapse0x2edfd70() {
   return (neuron0x2ec3700()*-0.193883);
}

double NNfunction_ss_dLsR::synapse0x2edfdb0() {
   return (neuron0x2ec3c60()*0.31274);
}

double NNfunction_ss_dLsR::synapse0x2ee0430() {
   return (neuron0x2ec3e80()*-0.0288914);
}

double NNfunction_ss_dLsR::synapse0x2ee0470() {
   return (neuron0x2ec41c0()*-0.0581863);
}

double NNfunction_ss_dLsR::synapse0x2ee04b0() {
   return (neuron0x2ec4500()*0.172518);
}

double NNfunction_ss_dLsR::synapse0x2ee04f0() {
   return (neuron0x2ec4840()*-0.00569639);
}

double NNfunction_ss_dLsR::synapse0x2ee0530() {
   return (neuron0x2ec4b80()*-0.0555396);
}

double NNfunction_ss_dLsR::synapse0x2ee0570() {
   return (neuron0x2ec4ec0()*-0.0806715);
}

double NNfunction_ss_dLsR::synapse0x2ee08f0() {
   return (neuron0x2ec0300()*0.0801406);
}

double NNfunction_ss_dLsR::synapse0x2ee0930() {
   return (neuron0x2ec0640()*0.126051);
}

double NNfunction_ss_dLsR::synapse0x2ee0970() {
   return (neuron0x2ec0980()*-0.156304);
}

double NNfunction_ss_dLsR::synapse0x2ee09b0() {
   return (neuron0x2ec0cc0()*-0.321476);
}

double NNfunction_ss_dLsR::synapse0x2ee09f0() {
   return (neuron0x2ec1000()*0.402912);
}

double NNfunction_ss_dLsR::synapse0x2ee0a30() {
   return (neuron0x2ec1340()*0.251708);
}

double NNfunction_ss_dLsR::synapse0x2ee0a70() {
   return (neuron0x2ec1680()*-0.137456);
}

double NNfunction_ss_dLsR::synapse0x2ee0ab0() {
   return (neuron0x2ec19c0()*0.147553);
}

double NNfunction_ss_dLsR::synapse0x2ee0af0() {
   return (neuron0x2ec1d00()*-0.717997);
}

double NNfunction_ss_dLsR::synapse0x2ee0b30() {
   return (neuron0x2ec2040()*0.465666);
}

double NNfunction_ss_dLsR::synapse0x2ee0b70() {
   return (neuron0x2ec2380()*-1.04567);
}

double NNfunction_ss_dLsR::synapse0x2ee0bb0() {
   return (neuron0x2ec26c0()*-0.423559);
}

double NNfunction_ss_dLsR::synapse0x2ee0bf0() {
   return (neuron0x2ec2a00()*-0.378387);
}

double NNfunction_ss_dLsR::synapse0x2ee0c30() {
   return (neuron0x2ec2d40()*-0.0689913);
}

double NNfunction_ss_dLsR::synapse0x2ee0c70() {
   return (neuron0x2ec3080()*0.250043);
}

double NNfunction_ss_dLsR::synapse0x2ee0cb0() {
   return (neuron0x2ec33c0()*-0.124595);
}

double NNfunction_ss_dLsR::synapse0x2ee0740() {
   return (neuron0x2ec3700()*-0.0647048);
}

double NNfunction_ss_dLsR::synapse0x2ee0780() {
   return (neuron0x2ec3c60()*0.638838);
}

double NNfunction_ss_dLsR::synapse0x2ee0e00() {
   return (neuron0x2ec3e80()*-0.313205);
}

double NNfunction_ss_dLsR::synapse0x2ee0e40() {
   return (neuron0x2ec41c0()*-0.594681);
}

double NNfunction_ss_dLsR::synapse0x2ee0e80() {
   return (neuron0x2ec4500()*0.482963);
}

double NNfunction_ss_dLsR::synapse0x2ee0ec0() {
   return (neuron0x2ec4840()*-0.98634);
}

double NNfunction_ss_dLsR::synapse0x2ee0f00() {
   return (neuron0x2ec4b80()*0.661902);
}

double NNfunction_ss_dLsR::synapse0x2ee0f40() {
   return (neuron0x2ec4ec0()*-0.212241);
}

double NNfunction_ss_dLsR::synapse0x2ee12c0() {
   return (neuron0x2ec0300()*0.584838);
}

double NNfunction_ss_dLsR::synapse0x2ee1300() {
   return (neuron0x2ec0640()*-0.360415);
}

double NNfunction_ss_dLsR::synapse0x2ee1340() {
   return (neuron0x2ec0980()*-0.628131);
}

double NNfunction_ss_dLsR::synapse0x2ee1380() {
   return (neuron0x2ec0cc0()*-0.858999);
}

double NNfunction_ss_dLsR::synapse0x2ee13c0() {
   return (neuron0x2ec1000()*-0.197404);
}

double NNfunction_ss_dLsR::synapse0x2ee1400() {
   return (neuron0x2ec1340()*-0.218033);
}

double NNfunction_ss_dLsR::synapse0x2ee1440() {
   return (neuron0x2ec1680()*-0.632836);
}

double NNfunction_ss_dLsR::synapse0x2ee1480() {
   return (neuron0x2ec19c0()*-0.354419);
}

double NNfunction_ss_dLsR::synapse0x2ee14c0() {
   return (neuron0x2ec1d00()*-0.583293);
}

double NNfunction_ss_dLsR::synapse0x2ee1500() {
   return (neuron0x2ec2040()*0.128301);
}

double NNfunction_ss_dLsR::synapse0x2ee1540() {
   return (neuron0x2ec2380()*-0.0968903);
}

double NNfunction_ss_dLsR::synapse0x2ee1580() {
   return (neuron0x2ec26c0()*0.816645);
}

double NNfunction_ss_dLsR::synapse0x2ee15c0() {
   return (neuron0x2ec2a00()*0.130075);
}

double NNfunction_ss_dLsR::synapse0x2ee1600() {
   return (neuron0x2ec2d40()*-0.119957);
}

double NNfunction_ss_dLsR::synapse0x2ee1640() {
   return (neuron0x2ec3080()*-0.334821);
}

double NNfunction_ss_dLsR::synapse0x2ee1680() {
   return (neuron0x2ec33c0()*0.124745);
}

double NNfunction_ss_dLsR::synapse0x2ee1110() {
   return (neuron0x2ec3700()*-0.070738);
}

double NNfunction_ss_dLsR::synapse0x2ee1150() {
   return (neuron0x2ec3c60()*-0.197798);
}

double NNfunction_ss_dLsR::synapse0x2ee17d0() {
   return (neuron0x2ec3e80()*0.0948097);
}

double NNfunction_ss_dLsR::synapse0x2ee1810() {
   return (neuron0x2ec41c0()*0.269764);
}

double NNfunction_ss_dLsR::synapse0x2ee1850() {
   return (neuron0x2ec4500()*-0.434439);
}

double NNfunction_ss_dLsR::synapse0x2ee1890() {
   return (neuron0x2ec4840()*-0.0594382);
}

double NNfunction_ss_dLsR::synapse0x2ee18d0() {
   return (neuron0x2ec4b80()*0.407297);
}

double NNfunction_ss_dLsR::synapse0x2ee1910() {
   return (neuron0x2ec4ec0()*0.268152);
}

double NNfunction_ss_dLsR::synapse0x2eca3c0() {
   return (neuron0x2ec0300()*-0.147068);
}

double NNfunction_ss_dLsR::synapse0x2eca400() {
   return (neuron0x2ec0640()*-0.0595053);
}

double NNfunction_ss_dLsR::synapse0x2eca440() {
   return (neuron0x2ec0980()*-1.20658);
}

double NNfunction_ss_dLsR::synapse0x2eca480() {
   return (neuron0x2ec0cc0()*-0.0947221);
}

double NNfunction_ss_dLsR::synapse0x2eca4c0() {
   return (neuron0x2ec1000()*0.206596);
}

double NNfunction_ss_dLsR::synapse0x2eca500() {
   return (neuron0x2ec1340()*0.123184);
}

double NNfunction_ss_dLsR::synapse0x2eca540() {
   return (neuron0x2ec1680()*0.0995534);
}

double NNfunction_ss_dLsR::synapse0x2eca580() {
   return (neuron0x2ec19c0()*0.0912303);
}

double NNfunction_ss_dLsR::synapse0x2ee20a0() {
   return (neuron0x2ec1d00()*0.115799);
}

double NNfunction_ss_dLsR::synapse0x2ee20e0() {
   return (neuron0x2ec2040()*-0.128033);
}

double NNfunction_ss_dLsR::synapse0x2ee2120() {
   return (neuron0x2ec2380()*-0.060046);
}

double NNfunction_ss_dLsR::synapse0x2ee2160() {
   return (neuron0x2ec26c0()*0.399359);
}

double NNfunction_ss_dLsR::synapse0x2ee21a0() {
   return (neuron0x2ec2a00()*0.0348066);
}

double NNfunction_ss_dLsR::synapse0x2ee21e0() {
   return (neuron0x2ec2d40()*-0.0279198);
}

double NNfunction_ss_dLsR::synapse0x2ee2220() {
   return (neuron0x2ec3080()*0.0176721);
}

double NNfunction_ss_dLsR::synapse0x2ee2260() {
   return (neuron0x2ec33c0()*0.160778);
}

double NNfunction_ss_dLsR::synapse0x2ee1ae0() {
   return (neuron0x2ec3700()*-0.00966563);
}

double NNfunction_ss_dLsR::synapse0x2ee1b20() {
   return (neuron0x2ec3c60()*0.0979208);
}

double NNfunction_ss_dLsR::synapse0x2ee23b0() {
   return (neuron0x2ec3e80()*-0.788382);
}

double NNfunction_ss_dLsR::synapse0x2ee23f0() {
   return (neuron0x2ec41c0()*-0.0785699);
}

double NNfunction_ss_dLsR::synapse0x2ee2430() {
   return (neuron0x2ec4500()*-0.0579686);
}

double NNfunction_ss_dLsR::synapse0x2ee2470() {
   return (neuron0x2ec4840()*0.0247927);
}

double NNfunction_ss_dLsR::synapse0x2ee24b0() {
   return (neuron0x2ec4b80()*0.0190702);
}

double NNfunction_ss_dLsR::synapse0x2ee24f0() {
   return (neuron0x2ec4ec0()*0.0614428);
}

double NNfunction_ss_dLsR::synapse0x2ee2870() {
   return (neuron0x2ec0300()*0.00553365);
}

double NNfunction_ss_dLsR::synapse0x2ee28b0() {
   return (neuron0x2ec0640()*0.0694054);
}

double NNfunction_ss_dLsR::synapse0x2ee28f0() {
   return (neuron0x2ec0980()*-0.13081);
}

double NNfunction_ss_dLsR::synapse0x2ee2930() {
   return (neuron0x2ec0cc0()*3.5212);
}

double NNfunction_ss_dLsR::synapse0x2ee2970() {
   return (neuron0x2ec1000()*0.0401412);
}

double NNfunction_ss_dLsR::synapse0x2ee29b0() {
   return (neuron0x2ec1340()*-0.0336853);
}

double NNfunction_ss_dLsR::synapse0x2ee29f0() {
   return (neuron0x2ec1680()*-0.0190542);
}

double NNfunction_ss_dLsR::synapse0x2ee2a30() {
   return (neuron0x2ec19c0()*0.0978959);
}

double NNfunction_ss_dLsR::synapse0x2ee2a70() {
   return (neuron0x2ec1d00()*0.0355411);
}

double NNfunction_ss_dLsR::synapse0x2ee2ab0() {
   return (neuron0x2ec2040()*-0.0125779);
}

double NNfunction_ss_dLsR::synapse0x2ee2af0() {
   return (neuron0x2ec2380()*0.0192055);
}

double NNfunction_ss_dLsR::synapse0x2ee2b30() {
   return (neuron0x2ec26c0()*-1.31791);
}

double NNfunction_ss_dLsR::synapse0x2ee2b70() {
   return (neuron0x2ec2a00()*-0.0672057);
}

double NNfunction_ss_dLsR::synapse0x2ee2bb0() {
   return (neuron0x2ec2d40()*0.0180181);
}

double NNfunction_ss_dLsR::synapse0x2ee2bf0() {
   return (neuron0x2ec3080()*-0.0435156);
}

double NNfunction_ss_dLsR::synapse0x2ee2c30() {
   return (neuron0x2ec33c0()*0.00111716);
}

double NNfunction_ss_dLsR::synapse0x2ee26c0() {
   return (neuron0x2ec3700()*-0.00334998);
}

double NNfunction_ss_dLsR::synapse0x2ee2700() {
   return (neuron0x2ec3c60()*-0.0695163);
}

double NNfunction_ss_dLsR::synapse0x2ee2d80() {
   return (neuron0x2ec3e80()*0.668499);
}

double NNfunction_ss_dLsR::synapse0x2ee2dc0() {
   return (neuron0x2ec41c0()*-0.0383144);
}

double NNfunction_ss_dLsR::synapse0x2ee2e00() {
   return (neuron0x2ec4500()*-0.0248664);
}

double NNfunction_ss_dLsR::synapse0x2ee2e40() {
   return (neuron0x2ec4840()*-0.089174);
}

double NNfunction_ss_dLsR::synapse0x2ee2e80() {
   return (neuron0x2ec4b80()*0.0560077);
}

double NNfunction_ss_dLsR::synapse0x2ee2ec0() {
   return (neuron0x2ec4ec0()*-0.0176948);
}

double NNfunction_ss_dLsR::synapse0x2ee3240() {
   return (neuron0x2ec0300()*-0.0373755);
}

double NNfunction_ss_dLsR::synapse0x2ee3280() {
   return (neuron0x2ec0640()*-0.014322);
}

double NNfunction_ss_dLsR::synapse0x2ee32c0() {
   return (neuron0x2ec0980()*-0.0163778);
}

double NNfunction_ss_dLsR::synapse0x2ee3300() {
   return (neuron0x2ec0cc0()*12.6419);
}

double NNfunction_ss_dLsR::synapse0x2ee3340() {
   return (neuron0x2ec1000()*0.0307863);
}

double NNfunction_ss_dLsR::synapse0x2ee3380() {
   return (neuron0x2ec1340()*0.0184324);
}

double NNfunction_ss_dLsR::synapse0x2ee33c0() {
   return (neuron0x2ec1680()*0.0434275);
}

double NNfunction_ss_dLsR::synapse0x2ee3400() {
   return (neuron0x2ec19c0()*-0.0462471);
}

double NNfunction_ss_dLsR::synapse0x2ee3440() {
   return (neuron0x2ec1d00()*-0.0349113);
}

double NNfunction_ss_dLsR::synapse0x2ee3480() {
   return (neuron0x2ec2040()*-0.011693);
}

double NNfunction_ss_dLsR::synapse0x2ee34c0() {
   return (neuron0x2ec2380()*-0.0122303);
}

double NNfunction_ss_dLsR::synapse0x2ee3500() {
   return (neuron0x2ec26c0()*0.0446299);
}

double NNfunction_ss_dLsR::synapse0x2ee3540() {
   return (neuron0x2ec2a00()*0.0140936);
}

double NNfunction_ss_dLsR::synapse0x2ee3580() {
   return (neuron0x2ec2d40()*0.012009);
}

double NNfunction_ss_dLsR::synapse0x2ee35c0() {
   return (neuron0x2ec3080()*-0.0227978);
}

double NNfunction_ss_dLsR::synapse0x2ee3600() {
   return (neuron0x2ec33c0()*0.00783394);
}

double NNfunction_ss_dLsR::synapse0x2ee3090() {
   return (neuron0x2ec3700()*-0.0236882);
}

double NNfunction_ss_dLsR::synapse0x2ee30d0() {
   return (neuron0x2ec3c60()*-0.0423759);
}

double NNfunction_ss_dLsR::synapse0x2ed3c00() {
   return (neuron0x2ec3e80()*0.0458631);
}

double NNfunction_ss_dLsR::synapse0x2ed3c40() {
   return (neuron0x2ec41c0()*-0.00320628);
}

double NNfunction_ss_dLsR::synapse0x2ed3c80() {
   return (neuron0x2ec4500()*0.024126);
}

double NNfunction_ss_dLsR::synapse0x2ed3cc0() {
   return (neuron0x2ec4840()*0.00379984);
}

double NNfunction_ss_dLsR::synapse0x2ed3d00() {
   return (neuron0x2ec4b80()*-0.0389771);
}

double NNfunction_ss_dLsR::synapse0x2ed3d40() {
   return (neuron0x2ec4ec0()*0.0283165);
}

double NNfunction_ss_dLsR::synapse0x2ed40c0() {
   return (neuron0x2ec0300()*0.00689765);
}

double NNfunction_ss_dLsR::synapse0x2ed4100() {
   return (neuron0x2ec0640()*0.0184302);
}

double NNfunction_ss_dLsR::synapse0x2ed4140() {
   return (neuron0x2ec0980()*-0.200469);
}

double NNfunction_ss_dLsR::synapse0x2ed4180() {
   return (neuron0x2ec0cc0()*0.271448);
}

double NNfunction_ss_dLsR::synapse0x2ed41c0() {
   return (neuron0x2ec1000()*-0.0189287);
}

double NNfunction_ss_dLsR::synapse0x2ed4200() {
   return (neuron0x2ec1340()*-0.0037616);
}

double NNfunction_ss_dLsR::synapse0x2ed4240() {
   return (neuron0x2ec1680()*0.0164968);
}

double NNfunction_ss_dLsR::synapse0x2ed4280() {
   return (neuron0x2ec19c0()*0.060138);
}

double NNfunction_ss_dLsR::synapse0x2ed42c0() {
   return (neuron0x2ec1d00()*-0.0125767);
}

double NNfunction_ss_dLsR::synapse0x2ed4300() {
   return (neuron0x2ec2040()*-0.0155677);
}

double NNfunction_ss_dLsR::synapse0x2ed4340() {
   return (neuron0x2ec2380()*0.0640677);
}

double NNfunction_ss_dLsR::synapse0x2ed4380() {
   return (neuron0x2ec26c0()*0.663993);
}

double NNfunction_ss_dLsR::synapse0x2ed43c0() {
   return (neuron0x2ec2a00()*0.0246244);
}

double NNfunction_ss_dLsR::synapse0x2ed4400() {
   return (neuron0x2ec2d40()*0.0322223);
}

double NNfunction_ss_dLsR::synapse0x2ed4440() {
   return (neuron0x2ec3080()*-0.0318192);
}

double NNfunction_ss_dLsR::synapse0x2ed4480() {
   return (neuron0x2ec33c0()*-0.087332);
}

double NNfunction_ss_dLsR::synapse0x2ed3f10() {
   return (neuron0x2ec3700()*-0.0291969);
}

double NNfunction_ss_dLsR::synapse0x2ed3f50() {
   return (neuron0x2ec3c60()*0.00876262);
}

double NNfunction_ss_dLsR::synapse0x2ed45d0() {
   return (neuron0x2ec3e80()*0.568369);
}

double NNfunction_ss_dLsR::synapse0x2ed4610() {
   return (neuron0x2ec41c0()*-0.0216946);
}

double NNfunction_ss_dLsR::synapse0x2ed4650() {
   return (neuron0x2ec4500()*0.0477208);
}

double NNfunction_ss_dLsR::synapse0x2ed4690() {
   return (neuron0x2ec4840()*0.0505153);
}

double NNfunction_ss_dLsR::synapse0x2ed46d0() {
   return (neuron0x2ec4b80()*-0.00326823);
}

double NNfunction_ss_dLsR::synapse0x2ed4710() {
   return (neuron0x2ec4ec0()*0.0599987);
}

double NNfunction_ss_dLsR::synapse0x2ed4a90() {
   return (neuron0x2ec0300()*0.227521);
}

double NNfunction_ss_dLsR::synapse0x2ed4ad0() {
   return (neuron0x2ec0640()*0.287316);
}

double NNfunction_ss_dLsR::synapse0x2ed4b10() {
   return (neuron0x2ec0980()*-0.894333);
}

double NNfunction_ss_dLsR::synapse0x2ed4b50() {
   return (neuron0x2ec0cc0()*0.271579);
}

double NNfunction_ss_dLsR::synapse0x2ed4b90() {
   return (neuron0x2ec1000()*-0.00896055);
}

double NNfunction_ss_dLsR::synapse0x2ed4bd0() {
   return (neuron0x2ec1340()*0.0813813);
}

double NNfunction_ss_dLsR::synapse0x2ed4c10() {
   return (neuron0x2ec1680()*-0.290957);
}

double NNfunction_ss_dLsR::synapse0x2ed4c50() {
   return (neuron0x2ec19c0()*-0.15738);
}

double NNfunction_ss_dLsR::synapse0x2ed4c90() {
   return (neuron0x2ec1d00()*-0.13428);
}

double NNfunction_ss_dLsR::synapse0x2ed4cd0() {
   return (neuron0x2ec2040()*-0.169928);
}

double NNfunction_ss_dLsR::synapse0x2ed4d10() {
   return (neuron0x2ec2380()*-0.0919096);
}

double NNfunction_ss_dLsR::synapse0x2ed4d50() {
   return (neuron0x2ec26c0()*0.648145);
}

double NNfunction_ss_dLsR::synapse0x2ed4d90() {
   return (neuron0x2ec2a00()*-0.0554305);
}

double NNfunction_ss_dLsR::synapse0x2ed4dd0() {
   return (neuron0x2ec2d40()*-0.11588);
}

double NNfunction_ss_dLsR::synapse0x2ed4e10() {
   return (neuron0x2ec3080()*0.476395);
}

double NNfunction_ss_dLsR::synapse0x2ed4e50() {
   return (neuron0x2ec33c0()*-0.274534);
}

double NNfunction_ss_dLsR::synapse0x2ed48e0() {
   return (neuron0x2ec3700()*-0.0938221);
}

double NNfunction_ss_dLsR::synapse0x2ed4920() {
   return (neuron0x2ec3c60()*-0.110409);
}

double NNfunction_ss_dLsR::synapse0x2ed4fa0() {
   return (neuron0x2ec3e80()*0.0197781);
}

double NNfunction_ss_dLsR::synapse0x2ed4fe0() {
   return (neuron0x2ec41c0()*-0.178099);
}

double NNfunction_ss_dLsR::synapse0x2ed5020() {
   return (neuron0x2ec4500()*-0.0104424);
}

double NNfunction_ss_dLsR::synapse0x2ed5060() {
   return (neuron0x2ec4840()*-0.0527177);
}

double NNfunction_ss_dLsR::synapse0x2ed50a0() {
   return (neuron0x2ec4b80()*-0.181768);
}

double NNfunction_ss_dLsR::synapse0x2ed50e0() {
   return (neuron0x2ec4ec0()*-0.10906);
}

double NNfunction_ss_dLsR::synapse0x2ed5460() {
   return (neuron0x2ec0300()*0.14193);
}

double NNfunction_ss_dLsR::synapse0x2ed54a0() {
   return (neuron0x2ec0640()*0.23133);
}

double NNfunction_ss_dLsR::synapse0x2ed54e0() {
   return (neuron0x2ec0980()*-0.198225);
}

double NNfunction_ss_dLsR::synapse0x2ed5520() {
   return (neuron0x2ec0cc0()*0.143686);
}

double NNfunction_ss_dLsR::synapse0x2ed5560() {
   return (neuron0x2ec1000()*-0.169661);
}

double NNfunction_ss_dLsR::synapse0x2ed55a0() {
   return (neuron0x2ec1340()*0.0799647);
}

double NNfunction_ss_dLsR::synapse0x2ed55e0() {
   return (neuron0x2ec1680()*-0.0123858);
}

double NNfunction_ss_dLsR::synapse0x2ed5620() {
   return (neuron0x2ec19c0()*-0.467586);
}

double NNfunction_ss_dLsR::synapse0x2ed5660() {
   return (neuron0x2ec1d00()*0.238101);
}

double NNfunction_ss_dLsR::synapse0x2ed56a0() {
   return (neuron0x2ec2040()*0.296858);
}

double NNfunction_ss_dLsR::synapse0x2ed56e0() {
   return (neuron0x2ec2380()*0.141144);
}

double NNfunction_ss_dLsR::synapse0x2ed5720() {
   return (neuron0x2ec26c0()*0.981347);
}

double NNfunction_ss_dLsR::synapse0x2ed5760() {
   return (neuron0x2ec2a00()*-0.160612);
}

double NNfunction_ss_dLsR::synapse0x2ed57a0() {
   return (neuron0x2ec2d40()*-0.28421);
}

double NNfunction_ss_dLsR::synapse0x2ed57e0() {
   return (neuron0x2ec3080()*-0.146313);
}

double NNfunction_ss_dLsR::synapse0x2ed5820() {
   return (neuron0x2ec33c0()*0.0352245);
}

double NNfunction_ss_dLsR::synapse0x2ed52b0() {
   return (neuron0x2ec3700()*0.297485);
}

double NNfunction_ss_dLsR::synapse0x2ed52f0() {
   return (neuron0x2ec3c60()*-0.206447);
}

double NNfunction_ss_dLsR::synapse0x2ed5970() {
   return (neuron0x2ec3e80()*-0.025999);
}

double NNfunction_ss_dLsR::synapse0x2ed59b0() {
   return (neuron0x2ec41c0()*0.367656);
}

double NNfunction_ss_dLsR::synapse0x2ed59f0() {
   return (neuron0x2ec4500()*0.298221);
}

double NNfunction_ss_dLsR::synapse0x2ed5a30() {
   return (neuron0x2ec4840()*-0.303756);
}

double NNfunction_ss_dLsR::synapse0x2ed5a70() {
   return (neuron0x2ec4b80()*-0.162227);
}

double NNfunction_ss_dLsR::synapse0x2ed5ab0() {
   return (neuron0x2ec4ec0()*0.380176);
}

double NNfunction_ss_dLsR::synapse0x2ee7980() {
   return (neuron0x2ec0300()*-0.0281634);
}

double NNfunction_ss_dLsR::synapse0x2ee79c0() {
   return (neuron0x2ec0640()*-0.00557205);
}

double NNfunction_ss_dLsR::synapse0x2ee7a00() {
   return (neuron0x2ec0980()*0.00299346);
}

double NNfunction_ss_dLsR::synapse0x2ee7a40() {
   return (neuron0x2ec0cc0()*1.28592);
}

double NNfunction_ss_dLsR::synapse0x2ee7a80() {
   return (neuron0x2ec1000()*-0.0116015);
}

double NNfunction_ss_dLsR::synapse0x2ee7ac0() {
   return (neuron0x2ec1340()*0.00384643);
}

double NNfunction_ss_dLsR::synapse0x2ee7b00() {
   return (neuron0x2ec1680()*0.00624232);
}

double NNfunction_ss_dLsR::synapse0x2ee7b40() {
   return (neuron0x2ec19c0()*-0.005715);
}

double NNfunction_ss_dLsR::synapse0x2ee7b80() {
   return (neuron0x2ec1d00()*0.00990972);
}

double NNfunction_ss_dLsR::synapse0x2ee7bc0() {
   return (neuron0x2ec2040()*0.00268858);
}

double NNfunction_ss_dLsR::synapse0x2ee7c00() {
   return (neuron0x2ec2380()*-0.00981613);
}

double NNfunction_ss_dLsR::synapse0x2ee7c40() {
   return (neuron0x2ec26c0()*0.0177616);
}

double NNfunction_ss_dLsR::synapse0x2ee7c80() {
   return (neuron0x2ec2a00()*-0.00668231);
}

double NNfunction_ss_dLsR::synapse0x2ee7cc0() {
   return (neuron0x2ec2d40()*-0.00360399);
}

double NNfunction_ss_dLsR::synapse0x2ee7d00() {
   return (neuron0x2ec3080()*-0.029778);
}

double NNfunction_ss_dLsR::synapse0x2ee7d40() {
   return (neuron0x2ec33c0()*-0.00541902);
}

double NNfunction_ss_dLsR::synapse0x2ed5af0() {
   return (neuron0x2ec3700()*-0.0121981);
}

double NNfunction_ss_dLsR::synapse0x2ed5b30() {
   return (neuron0x2ec3c60()*-0.0139716);
}

double NNfunction_ss_dLsR::synapse0x2ee7e90() {
   return (neuron0x2ec3e80()*0.0542809);
}

double NNfunction_ss_dLsR::synapse0x2ee7ed0() {
   return (neuron0x2ec41c0()*0.0158569);
}

double NNfunction_ss_dLsR::synapse0x2ee7f10() {
   return (neuron0x2ec4500()*-0.000266683);
}

double NNfunction_ss_dLsR::synapse0x2ee7f50() {
   return (neuron0x2ec4840()*-0.0167029);
}

double NNfunction_ss_dLsR::synapse0x2ee7f90() {
   return (neuron0x2ec4b80()*0.0188882);
}

double NNfunction_ss_dLsR::synapse0x2ee7fd0() {
   return (neuron0x2ec4ec0()*-0.00465287);
}

double NNfunction_ss_dLsR::synapse0x2ee8350() {
   return (neuron0x2ec0300()*0.213224);
}

double NNfunction_ss_dLsR::synapse0x2ee8390() {
   return (neuron0x2ec0640()*0.201539);
}

double NNfunction_ss_dLsR::synapse0x2ee83d0() {
   return (neuron0x2ec0980()*0.160175);
}

double NNfunction_ss_dLsR::synapse0x2ee8410() {
   return (neuron0x2ec0cc0()*-0.0510893);
}

double NNfunction_ss_dLsR::synapse0x2ee8450() {
   return (neuron0x2ec1000()*-0.682986);
}

double NNfunction_ss_dLsR::synapse0x2ee8490() {
   return (neuron0x2ec1340()*-0.153498);
}

double NNfunction_ss_dLsR::synapse0x2ee84d0() {
   return (neuron0x2ec1680()*0.814008);
}

double NNfunction_ss_dLsR::synapse0x2ee8510() {
   return (neuron0x2ec19c0()*0.454058);
}

double NNfunction_ss_dLsR::synapse0x2ee8550() {
   return (neuron0x2ec1d00()*0.0188397);
}

double NNfunction_ss_dLsR::synapse0x2ee8590() {
   return (neuron0x2ec2040()*-0.0629546);
}

double NNfunction_ss_dLsR::synapse0x2ee85d0() {
   return (neuron0x2ec2380()*-0.0382645);
}

double NNfunction_ss_dLsR::synapse0x2ee8610() {
   return (neuron0x2ec26c0()*-0.321262);
}

double NNfunction_ss_dLsR::synapse0x2ee8650() {
   return (neuron0x2ec2a00()*0.0613974);
}

double NNfunction_ss_dLsR::synapse0x2ee8690() {
   return (neuron0x2ec2d40()*-0.272168);
}

double NNfunction_ss_dLsR::synapse0x2ee86d0() {
   return (neuron0x2ec3080()*0.175145);
}

double NNfunction_ss_dLsR::synapse0x2ee8710() {
   return (neuron0x2ec33c0()*0.124319);
}

double NNfunction_ss_dLsR::synapse0x2ee81a0() {
   return (neuron0x2ec3700()*0.213222);
}

double NNfunction_ss_dLsR::synapse0x2ee81e0() {
   return (neuron0x2ec3c60()*0.383419);
}

double NNfunction_ss_dLsR::synapse0x2ee8860() {
   return (neuron0x2ec3e80()*0.414904);
}

double NNfunction_ss_dLsR::synapse0x2ee88a0() {
   return (neuron0x2ec41c0()*-0.08347);
}

double NNfunction_ss_dLsR::synapse0x2ee88e0() {
   return (neuron0x2ec4500()*0.182353);
}

double NNfunction_ss_dLsR::synapse0x2ee8920() {
   return (neuron0x2ec4840()*-0.897429);
}

double NNfunction_ss_dLsR::synapse0x2ee8960() {
   return (neuron0x2ec4b80()*-0.736554);
}

double NNfunction_ss_dLsR::synapse0x2ee89a0() {
   return (neuron0x2ec4ec0()*-0.0301235);
}

double NNfunction_ss_dLsR::synapse0x2ee8d20() {
   return (neuron0x2ec0300()*0.268809);
}

double NNfunction_ss_dLsR::synapse0x2ee8d60() {
   return (neuron0x2ec0640()*-0.050845);
}

double NNfunction_ss_dLsR::synapse0x2ee8da0() {
   return (neuron0x2ec0980()*0.147228);
}

double NNfunction_ss_dLsR::synapse0x2ee8de0() {
   return (neuron0x2ec0cc0()*0.33029);
}

double NNfunction_ss_dLsR::synapse0x2ee8e20() {
   return (neuron0x2ec1000()*0.223091);
}

double NNfunction_ss_dLsR::synapse0x2ee8e60() {
   return (neuron0x2ec1340()*-0.153274);
}

double NNfunction_ss_dLsR::synapse0x2ee8ea0() {
   return (neuron0x2ec1680()*0.171249);
}

double NNfunction_ss_dLsR::synapse0x2ee8ee0() {
   return (neuron0x2ec19c0()*0.115462);
}

double NNfunction_ss_dLsR::synapse0x2ee8f20() {
   return (neuron0x2ec1d00()*-0.285462);
}

double NNfunction_ss_dLsR::synapse0x2ee8f60() {
   return (neuron0x2ec2040()*0.242491);
}

double NNfunction_ss_dLsR::synapse0x2ee8fa0() {
   return (neuron0x2ec2380()*0.692698);
}

double NNfunction_ss_dLsR::synapse0x2ee8fe0() {
   return (neuron0x2ec26c0()*-0.75626);
}

double NNfunction_ss_dLsR::synapse0x2ee9020() {
   return (neuron0x2ec2a00()*-0.102968);
}

double NNfunction_ss_dLsR::synapse0x2ee9060() {
   return (neuron0x2ec2d40()*-0.182979);
}

double NNfunction_ss_dLsR::synapse0x2ee90a0() {
   return (neuron0x2ec3080()*-0.190757);
}

double NNfunction_ss_dLsR::synapse0x2ee90e0() {
   return (neuron0x2ec33c0()*0.0619048);
}

double NNfunction_ss_dLsR::synapse0x2ee8b70() {
   return (neuron0x2ec3700()*0.161325);
}

double NNfunction_ss_dLsR::synapse0x2ee8bb0() {
   return (neuron0x2ec3c60()*-0.0588426);
}

double NNfunction_ss_dLsR::synapse0x2ee9230() {
   return (neuron0x2ec3e80()*0.200975);
}

double NNfunction_ss_dLsR::synapse0x2ee9270() {
   return (neuron0x2ec41c0()*0.120164);
}

double NNfunction_ss_dLsR::synapse0x2ee92b0() {
   return (neuron0x2ec4500()*-0.0173073);
}

double NNfunction_ss_dLsR::synapse0x2ee92f0() {
   return (neuron0x2ec4840()*-0.348335);
}

double NNfunction_ss_dLsR::synapse0x2ee9330() {
   return (neuron0x2ec4b80()*0.477101);
}

double NNfunction_ss_dLsR::synapse0x2ee9370() {
   return (neuron0x2ec4ec0()*0.108139);
}

double NNfunction_ss_dLsR::synapse0x2ee96f0() {
   return (neuron0x2ec0300()*0.298349);
}

double NNfunction_ss_dLsR::synapse0x2ee9730() {
   return (neuron0x2ec0640()*-0.181994);
}

double NNfunction_ss_dLsR::synapse0x2ee9770() {
   return (neuron0x2ec0980()*0.0177815);
}

double NNfunction_ss_dLsR::synapse0x2ee97b0() {
   return (neuron0x2ec0cc0()*-0.938174);
}

double NNfunction_ss_dLsR::synapse0x2ee97f0() {
   return (neuron0x2ec1000()*0.16768);
}

double NNfunction_ss_dLsR::synapse0x2ee9830() {
   return (neuron0x2ec1340()*0.812318);
}

double NNfunction_ss_dLsR::synapse0x2ee9870() {
   return (neuron0x2ec1680()*1.24769);
}

double NNfunction_ss_dLsR::synapse0x2ee98b0() {
   return (neuron0x2ec19c0()*1.08824);
}

double NNfunction_ss_dLsR::synapse0x2ee98f0() {
   return (neuron0x2ec1d00()*1.73343);
}

double NNfunction_ss_dLsR::synapse0x2ee9930() {
   return (neuron0x2ec2040()*1.0364);
}

double NNfunction_ss_dLsR::synapse0x2ee9970() {
   return (neuron0x2ec2380()*0.912518);
}

double NNfunction_ss_dLsR::synapse0x2ee99b0() {
   return (neuron0x2ec26c0()*-0.128883);
}

double NNfunction_ss_dLsR::synapse0x2ee99f0() {
   return (neuron0x2ec2a00()*-0.258494);
}

double NNfunction_ss_dLsR::synapse0x2ee9a30() {
   return (neuron0x2ec2d40()*-0.630625);
}

double NNfunction_ss_dLsR::synapse0x2ee9a70() {
   return (neuron0x2ec3080()*0.140459);
}

double NNfunction_ss_dLsR::synapse0x2ee9ab0() {
   return (neuron0x2ec33c0()*-1.06083);
}

double NNfunction_ss_dLsR::synapse0x2ee9540() {
   return (neuron0x2ec3700()*-0.335424);
}

double NNfunction_ss_dLsR::synapse0x2ee9580() {
   return (neuron0x2ec3c60()*-0.221282);
}

double NNfunction_ss_dLsR::synapse0x2ee9c00() {
   return (neuron0x2ec3e80()*-0.882439);
}

double NNfunction_ss_dLsR::synapse0x2ee9c40() {
   return (neuron0x2ec41c0()*-1.47608);
}

double NNfunction_ss_dLsR::synapse0x2ee9c80() {
   return (neuron0x2ec4500()*1.89714);
}

double NNfunction_ss_dLsR::synapse0x2ee9cc0() {
   return (neuron0x2ec4840()*-0.519944);
}

double NNfunction_ss_dLsR::synapse0x2ee9d00() {
   return (neuron0x2ec4b80()*-1.39243);
}

double NNfunction_ss_dLsR::synapse0x2ee9d40() {
   return (neuron0x2ec4ec0()*-0.195412);
}

double NNfunction_ss_dLsR::synapse0x2c89c50() {
   return (neuron0x2ec5330()*-0.196256);
}

double NNfunction_ss_dLsR::synapse0x2c89c90() {
   return (neuron0x2ec5c80()*0.129007);
}

double NNfunction_ss_dLsR::synapse0x2ec77f0() {
   return (neuron0x2ec6760()*-0.0703387);
}

double NNfunction_ss_dLsR::synapse0x2ec7830() {
   return (neuron0x2ec6200()*0.288296);
}

double NNfunction_ss_dLsR::synapse0x2ec81c0() {
   return (neuron0x2ec7540()*0.170184);
}

double NNfunction_ss_dLsR::synapse0x2ec8200() {
   return (neuron0x2ec7f10()*0.266107);
}

double NNfunction_ss_dLsR::synapse0x2ec8f90() {
   return (neuron0x2ec8ce0()*-0.0187342);
}

double NNfunction_ss_dLsR::synapse0x2ec8fd0() {
   return (neuron0x2ec96b0()*-0.269109);
}

double NNfunction_ss_dLsR::synapse0x2ec9960() {
   return (neuron0x2eca080()*-0.95775);
}

double NNfunction_ss_dLsR::synapse0x2ec99a0() {
   return (neuron0x2ecab60()*-0.310948);
}

double NNfunction_ss_dLsR::synapse0x2eca330() {
   return (neuron0x2ecb530()*0.203916);
}

double NNfunction_ss_dLsR::synapse0x2eca370() {
   return (neuron0x2ec8610()*-5.08895);
}

double NNfunction_ss_dLsR::synapse0x2ecae10() {
   return (neuron0x2ecd0e0()*-0.150371);
}

double NNfunction_ss_dLsR::synapse0x2ecae50() {
   return (neuron0x2ecdab0()*-0.127638);
}

double NNfunction_ss_dLsR::synapse0x2ecb7e0() {
   return (neuron0x2ece480()*-2.05667);
}

double NNfunction_ss_dLsR::synapse0x2ecb820() {
   return (neuron0x2ecee50()*-0.149214);
}

double NNfunction_ss_dLsR::synapse0x2ec88c0() {
   return (neuron0x2ed0c60()*0.212494);
}

double NNfunction_ss_dLsR::synapse0x2ec8900() {
   return (neuron0x2ed0f40()*0.12716);
}

double NNfunction_ss_dLsR::synapse0x2ecd390() {
   return (neuron0x2ed1910()*1.46121);
}

double NNfunction_ss_dLsR::synapse0x2ecd3d0() {
   return (neuron0x2ed22e0()*-0.208215);
}

double NNfunction_ss_dLsR::synapse0x2ecdd60() {
   return (neuron0x2ed2cb0()*0.818309);
}

double NNfunction_ss_dLsR::synapse0x2ecdda0() {
   return (neuron0x2ed3680()*-0.0937234);
}

double NNfunction_ss_dLsR::synapse0x2ece730() {
   return (neuron0x2ecc1d0()*0.195004);
}

double NNfunction_ss_dLsR::synapse0x2ece770() {
   return (neuron0x2eccba0()*0.114151);
}

double NNfunction_ss_dLsR::synapse0x2ecf100() {
   return (neuron0x2ed6410()*0.141656);
}

double NNfunction_ss_dLsR::synapse0x2ecf140() {
   return (neuron0x2ed6de0()*-0.21373);
}

double NNfunction_ss_dLsR::synapse0x2ec32a0() {
   return (neuron0x2ed77b0()*0.998304);
}

double NNfunction_ss_dLsR::synapse0x2ec32e0() {
   return (neuron0x2ed8180()*-0.201531);
}

double NNfunction_ss_dLsR::synapse0x2ed11f0() {
   return (neuron0x2ed8b50()*0.440614);
}

double NNfunction_ss_dLsR::synapse0x2ed1230() {
   return (neuron0x2ed9520()*-0.0820521);
}

double NNfunction_ss_dLsR::synapse0x2ed1bc0() {
   return (neuron0x2ed9ef0()*-0.197858);
}

double NNfunction_ss_dLsR::synapse0x2ed1c00() {
   return (neuron0x2eda8c0()*-0.217745);
}

double NNfunction_ss_dLsR::synapse0x2ed2590() {
   return (neuron0x2ed0950()*0.36249);
}

double NNfunction_ss_dLsR::synapse0x2ed25d0() {
   return (neuron0x2edd4a0()*1.27384);
}

double NNfunction_ss_dLsR::synapse0x2ed2f60() {
   return (neuron0x2edde70()*-1.29854);
}

double NNfunction_ss_dLsR::synapse0x2ed2fa0() {
   return (neuron0x2ede840()*-1.00469);
}

double NNfunction_ss_dLsR::synapse0x2ed3930() {
   return (neuron0x2edf210()*0.0901329);
}

double NNfunction_ss_dLsR::synapse0x2ed3970() {
   return (neuron0x2edfbe0()*-0.185693);
}

double NNfunction_ss_dLsR::synapse0x2ecc480() {
   return (neuron0x2ee05b0()*0.129376);
}

double NNfunction_ss_dLsR::synapse0x2ecc4c0() {
   return (neuron0x2ee0f80()*-0.0194517);
}

double NNfunction_ss_dLsR::synapse0x2ed5d30() {
   return (neuron0x2ee1950()*-0.0590603);
}

double NNfunction_ss_dLsR::synapse0x2ed5d70() {
   return (neuron0x2ee2530()*-0.0793855);
}

double NNfunction_ss_dLsR::synapse0x2ed66c0() {
   return (neuron0x2ee2f00()*-3.40559);
}

double NNfunction_ss_dLsR::synapse0x2ed6700() {
   return (neuron0x2ed3d80()*0.0269734);
}

double NNfunction_ss_dLsR::synapse0x2ed7090() {
   return (neuron0x2ed4750()*0.22836);
}

double NNfunction_ss_dLsR::synapse0x2ed70d0() {
   return (neuron0x2ed5120()*0.263074);
}

double NNfunction_ss_dLsR::synapse0x2ed7a60() {
   return (neuron0x2ee7760()*2.6878);
}

double NNfunction_ss_dLsR::synapse0x2ed7aa0() {
   return (neuron0x2ee8010()*-0.0877376);
}

double NNfunction_ss_dLsR::synapse0x2ed8430() {
   return (neuron0x2ee89e0()*0.274599);
}

double NNfunction_ss_dLsR::synapse0x2ed8470() {
   return (neuron0x2ee93b0()*-0.310334);
}

double NNfunction_ss_dLsR::synapse0x2edab70() {
   return (neuron0x2ec5330()*-0.234388);
}

double NNfunction_ss_dLsR::synapse0x2edabb0() {
   return (neuron0x2ec5c80()*0.180269);
}

double NNfunction_ss_dLsR::synapse0x2ed0130() {
   return (neuron0x2ec6760()*-0.236149);
}

double NNfunction_ss_dLsR::synapse0x2ed0170() {
   return (neuron0x2ec6200()*0.366986);
}

double NNfunction_ss_dLsR::synapse0x2edd750() {
   return (neuron0x2ec7540()*0.289235);
}

double NNfunction_ss_dLsR::synapse0x2edd790() {
   return (neuron0x2ec7f10()*0.575801);
}

double NNfunction_ss_dLsR::synapse0x2ede120() {
   return (neuron0x2ec8ce0()*0.00354381);
}

double NNfunction_ss_dLsR::synapse0x2ede160() {
   return (neuron0x2ec96b0()*-0.398273);
}

double NNfunction_ss_dLsR::synapse0x2edeaf0() {
   return (neuron0x2eca080()*-0.149552);
}

double NNfunction_ss_dLsR::synapse0x2edeb30() {
   return (neuron0x2ecab60()*0.117036);
}

double NNfunction_ss_dLsR::synapse0x2edf4c0() {
   return (neuron0x2ecb530()*0.488724);
}

double NNfunction_ss_dLsR::synapse0x2edf500() {
   return (neuron0x2ec8610()*2.74154);
}

double NNfunction_ss_dLsR::synapse0x2edfe90() {
   return (neuron0x2ecd0e0()*-0.324322);
}

double NNfunction_ss_dLsR::synapse0x2edfed0() {
   return (neuron0x2ecdab0()*-0.161592);
}

double NNfunction_ss_dLsR::synapse0x2ee0860() {
   return (neuron0x2ece480()*0.0824896);
}

double NNfunction_ss_dLsR::synapse0x2ee08a0() {
   return (neuron0x2ecee50()*-0.188408);
}

double NNfunction_ss_dLsR::synapse0x2ee1230() {
   return (neuron0x2ed0c60()*0.182567);
}

double NNfunction_ss_dLsR::synapse0x2ee1270() {
   return (neuron0x2ed0f40()*0.388591);
}

double NNfunction_ss_dLsR::synapse0x2ee1c00() {
   return (neuron0x2ed1910()*-1.74491);
}

double NNfunction_ss_dLsR::synapse0x2ee1c40() {
   return (neuron0x2ed22e0()*-0.500667);
}

double NNfunction_ss_dLsR::synapse0x2ee27e0() {
   return (neuron0x2ed2cb0()*-0.0456281);
}

double NNfunction_ss_dLsR::synapse0x2ee2820() {
   return (neuron0x2ed3680()*-0.084476);
}

double NNfunction_ss_dLsR::synapse0x2ee31b0() {
   return (neuron0x2ecc1d0()*0.404275);
}

double NNfunction_ss_dLsR::synapse0x2ee31f0() {
   return (neuron0x2eccba0()*0.291485);
}

double NNfunction_ss_dLsR::synapse0x2ed4030() {
   return (neuron0x2ed6410()*0.187634);
}

double NNfunction_ss_dLsR::synapse0x2ed4070() {
   return (neuron0x2ed6de0()*-0.412369);
}

double NNfunction_ss_dLsR::synapse0x2ed4a00() {
   return (neuron0x2ed77b0()*-0.0156272);
}

double NNfunction_ss_dLsR::synapse0x2ed4a40() {
   return (neuron0x2ed8180()*-0.195403);
}

double NNfunction_ss_dLsR::synapse0x2ed53d0() {
   return (neuron0x2ed8b50()*0.732875);
}

double NNfunction_ss_dLsR::synapse0x2ed5410() {
   return (neuron0x2ed9520()*-0.259137);
}

double NNfunction_ss_dLsR::synapse0x2ee78f0() {
   return (neuron0x2ed9ef0()*-0.452292);
}

double NNfunction_ss_dLsR::synapse0x2ee7930() {
   return (neuron0x2eda8c0()*-0.368479);
}

double NNfunction_ss_dLsR::synapse0x2ee82c0() {
   return (neuron0x2ed0950()*0.917245);
}

double NNfunction_ss_dLsR::synapse0x2ee8300() {
   return (neuron0x2edd4a0()*-1.56478);
}

double NNfunction_ss_dLsR::synapse0x2ee8c90() {
   return (neuron0x2edde70()*0.934682);
}

double NNfunction_ss_dLsR::synapse0x2ee8cd0() {
   return (neuron0x2ede840()*2.2492);
}

double NNfunction_ss_dLsR::synapse0x2ee9660() {
   return (neuron0x2edf210()*0.121363);
}

double NNfunction_ss_dLsR::synapse0x2ee96a0() {
   return (neuron0x2edfbe0()*-0.310192);
}

double NNfunction_ss_dLsR::synapse0x2ec5550() {
   return (neuron0x2ee05b0()*0.298069);
}

double NNfunction_ss_dLsR::synapse0x2ec5590() {
   return (neuron0x2ee0f80()*0.00588994);
}

double NNfunction_ss_dLsR::synapse0x2ed8e00() {
   return (neuron0x2ee1950()*-0.4941);
}

double NNfunction_ss_dLsR::synapse0x2ed8e40() {
   return (neuron0x2ee2530()*-0.616601);
}

double NNfunction_ss_dLsR::synapse0x2ee9d80() {
   return (neuron0x2ee2f00()*0.434207);
}

double NNfunction_ss_dLsR::synapse0x2ee9dc0() {
   return (neuron0x2ed3d80()*1.0953);
}

double NNfunction_ss_dLsR::synapse0x2ee9e00() {
   return (neuron0x2ed4750()*0.20407);
}

double NNfunction_ss_dLsR::synapse0x2ee9e40() {
   return (neuron0x2ed5120()*0.418645);
}

double NNfunction_ss_dLsR::synapse0x2ef0cf0() {
   return (neuron0x2ee7760()*-0.855439);
}

double NNfunction_ss_dLsR::synapse0x2ef0d30() {
   return (neuron0x2ee8010()*-0.156943);
}

double NNfunction_ss_dLsR::synapse0x2ef0d70() {
   return (neuron0x2ee89e0()*0.382901);
}

double NNfunction_ss_dLsR::synapse0x2ef0db0() {
   return (neuron0x2ee93b0()*-0.611205);
}

double NNfunction_ss_dLsR::synapse0x2ef1130() {
   return (neuron0x2ec5330()*0.172365);
}

double NNfunction_ss_dLsR::synapse0x2ef1170() {
   return (neuron0x2ec5c80()*-0.424031);
}

double NNfunction_ss_dLsR::synapse0x2ef11b0() {
   return (neuron0x2ec6760()*0.170351);
}

double NNfunction_ss_dLsR::synapse0x2ef11f0() {
   return (neuron0x2ec6200()*-0.3362);
}

double NNfunction_ss_dLsR::synapse0x2ef1230() {
   return (neuron0x2ec7540()*-0.283044);
}

double NNfunction_ss_dLsR::synapse0x2ef1270() {
   return (neuron0x2ec7f10()*-0.00628416);
}

double NNfunction_ss_dLsR::synapse0x2ef12b0() {
   return (neuron0x2ec8ce0()*-0.295008);
}

double NNfunction_ss_dLsR::synapse0x2ef12f0() {
   return (neuron0x2ec96b0()*0.179015);
}

double NNfunction_ss_dLsR::synapse0x2ef1330() {
   return (neuron0x2eca080()*-0.271014);
}

double NNfunction_ss_dLsR::synapse0x2ef1370() {
   return (neuron0x2ecab60()*0.57615);
}

double NNfunction_ss_dLsR::synapse0x2ef13b0() {
   return (neuron0x2ecb530()*-0.341751);
}

double NNfunction_ss_dLsR::synapse0x2ef13f0() {
   return (neuron0x2ec8610()*0.0499624);
}

double NNfunction_ss_dLsR::synapse0x2ef1430() {
   return (neuron0x2ecd0e0()*0.12044);
}

double NNfunction_ss_dLsR::synapse0x2ef1470() {
   return (neuron0x2ecdab0()*0.28751);
}

double NNfunction_ss_dLsR::synapse0x2ef14b0() {
   return (neuron0x2ece480()*0.0255571);
}

double NNfunction_ss_dLsR::synapse0x2ef14f0() {
   return (neuron0x2ecee50()*0.348532);
}

double NNfunction_ss_dLsR::synapse0x2ef0f80() {
   return (neuron0x2ed0c60()*-0.203603);
}

double NNfunction_ss_dLsR::synapse0x2ef0fc0() {
   return (neuron0x2ed0f40()*-0.313809);
}

double NNfunction_ss_dLsR::synapse0x2ef1640() {
   return (neuron0x2ed1910()*-0.706141);
}

double NNfunction_ss_dLsR::synapse0x2ef1680() {
   return (neuron0x2ed22e0()*0.447953);
}

double NNfunction_ss_dLsR::synapse0x2ef16c0() {
   return (neuron0x2ed2cb0()*0.138226);
}

double NNfunction_ss_dLsR::synapse0x2ef1700() {
   return (neuron0x2ed3680()*0.0758035);
}

double NNfunction_ss_dLsR::synapse0x2ef1740() {
   return (neuron0x2ecc1d0()*-0.496153);
}

double NNfunction_ss_dLsR::synapse0x2ef1780() {
   return (neuron0x2eccba0()*-0.248333);
}

double NNfunction_ss_dLsR::synapse0x2ef17c0() {
   return (neuron0x2ed6410()*-0.0299701);
}

double NNfunction_ss_dLsR::synapse0x2ef1800() {
   return (neuron0x2ed6de0()*0.431518);
}

double NNfunction_ss_dLsR::synapse0x2ef1840() {
   return (neuron0x2ed77b0()*0.258822);
}

double NNfunction_ss_dLsR::synapse0x2ef1880() {
   return (neuron0x2ed8180()*0.703958);
}

double NNfunction_ss_dLsR::synapse0x2ef18c0() {
   return (neuron0x2ed8b50()*-0.704741);
}

double NNfunction_ss_dLsR::synapse0x2ef1900() {
   return (neuron0x2ed9520()*-0.062633);
}

double NNfunction_ss_dLsR::synapse0x2ef1940() {
   return (neuron0x2ed9ef0()*0.0832456);
}

double NNfunction_ss_dLsR::synapse0x2ef1980() {
   return (neuron0x2eda8c0()*0.49577);
}

double NNfunction_ss_dLsR::synapse0x2ef1530() {
   return (neuron0x2ed0950()*0.124941);
}

double NNfunction_ss_dLsR::synapse0x2ef1570() {
   return (neuron0x2edd4a0()*0.719128);
}

double NNfunction_ss_dLsR::synapse0x2ef15b0() {
   return (neuron0x2edde70()*0.259906);
}

double NNfunction_ss_dLsR::synapse0x2ef15f0() {
   return (neuron0x2ede840()*-0.524331);
}

double NNfunction_ss_dLsR::synapse0x2ef1bd0() {
   return (neuron0x2edf210()*-0.431481);
}

double NNfunction_ss_dLsR::synapse0x2ef1c10() {
   return (neuron0x2edfbe0()*-0.0150074);
}

double NNfunction_ss_dLsR::synapse0x2ef1c50() {
   return (neuron0x2ee05b0()*-0.135335);
}

double NNfunction_ss_dLsR::synapse0x2ef1c90() {
   return (neuron0x2ee0f80()*0.118296);
}

double NNfunction_ss_dLsR::synapse0x2ef1cd0() {
   return (neuron0x2ee1950()*0.102122);
}

double NNfunction_ss_dLsR::synapse0x2ef1d10() {
   return (neuron0x2ee2530()*1.42518);
}

double NNfunction_ss_dLsR::synapse0x2ef1d50() {
   return (neuron0x2ee2f00()*-1.0713);
}

double NNfunction_ss_dLsR::synapse0x2ef1d90() {
   return (neuron0x2ed3d80()*-0.830023);
}

double NNfunction_ss_dLsR::synapse0x2ef1dd0() {
   return (neuron0x2ed4750()*-0.158193);
}

double NNfunction_ss_dLsR::synapse0x2ef1e10() {
   return (neuron0x2ed5120()*-0.310553);
}

double NNfunction_ss_dLsR::synapse0x2ef1e50() {
   return (neuron0x2ee7760()*-0.110538);
}

double NNfunction_ss_dLsR::synapse0x2ef1e90() {
   return (neuron0x2ee8010()*0.0247323);
}

double NNfunction_ss_dLsR::synapse0x2ef1ed0() {
   return (neuron0x2ee89e0()*-0.513276);
}

double NNfunction_ss_dLsR::synapse0x2ef1f10() {
   return (neuron0x2ee93b0()*0.576271);
}

double NNfunction_ss_dLsR::synapse0x2ef2290() {
   return (neuron0x2ec5330()*-0.94326);
}

double NNfunction_ss_dLsR::synapse0x2ef22d0() {
   return (neuron0x2ec5c80()*-1.08546);
}

double NNfunction_ss_dLsR::synapse0x2ef2310() {
   return (neuron0x2ec6760()*0.774997);
}

double NNfunction_ss_dLsR::synapse0x2ef2350() {
   return (neuron0x2ec6200()*0.553391);
}

double NNfunction_ss_dLsR::synapse0x2ef2390() {
   return (neuron0x2ec7540()*-1.31701);
}

double NNfunction_ss_dLsR::synapse0x2ef23d0() {
   return (neuron0x2ec7f10()*-0.8238);
}

double NNfunction_ss_dLsR::synapse0x2ef2410() {
   return (neuron0x2ec8ce0()*-1.91494);
}

double NNfunction_ss_dLsR::synapse0x2ef2450() {
   return (neuron0x2ec96b0()*-0.383018);
}

double NNfunction_ss_dLsR::synapse0x2ef2490() {
   return (neuron0x2eca080()*1.7079);
}

double NNfunction_ss_dLsR::synapse0x2ef24d0() {
   return (neuron0x2ecab60()*2.15199);
}

double NNfunction_ss_dLsR::synapse0x2ef2510() {
   return (neuron0x2ecb530()*0.163483);
}

double NNfunction_ss_dLsR::synapse0x2ef2550() {
   return (neuron0x2ec8610()*3.56791);
}

double NNfunction_ss_dLsR::synapse0x2ef2590() {
   return (neuron0x2ecd0e0()*-1.03457);
}

double NNfunction_ss_dLsR::synapse0x2ef25d0() {
   return (neuron0x2ecdab0()*0.360965);
}

double NNfunction_ss_dLsR::synapse0x2ef2610() {
   return (neuron0x2ece480()*0.203345);
}

double NNfunction_ss_dLsR::synapse0x2ef2650() {
   return (neuron0x2ecee50()*0.440623);
}

double NNfunction_ss_dLsR::synapse0x2ef20e0() {
   return (neuron0x2ed0c60()*2.30985);
}

double NNfunction_ss_dLsR::synapse0x2ef2120() {
   return (neuron0x2ed0f40()*-0.84978);
}

double NNfunction_ss_dLsR::synapse0x2ef27a0() {
   return (neuron0x2ed1910()*-1.11634);
}

double NNfunction_ss_dLsR::synapse0x2ef27e0() {
   return (neuron0x2ed22e0()*1.56268);
}

double NNfunction_ss_dLsR::synapse0x2ef2820() {
   return (neuron0x2ed2cb0()*0.0662931);
}

double NNfunction_ss_dLsR::synapse0x2ef2860() {
   return (neuron0x2ed3680()*-1.23419);
}

double NNfunction_ss_dLsR::synapse0x2ef28a0() {
   return (neuron0x2ecc1d0()*-0.714065);
}

double NNfunction_ss_dLsR::synapse0x2ef28e0() {
   return (neuron0x2eccba0()*-0.485544);
}

double NNfunction_ss_dLsR::synapse0x2ef2920() {
   return (neuron0x2ed6410()*2.05462);
}

double NNfunction_ss_dLsR::synapse0x2ef2960() {
   return (neuron0x2ed6de0()*0.824493);
}

double NNfunction_ss_dLsR::synapse0x2ef29a0() {
   return (neuron0x2ed77b0()*-2.06569);
}

double NNfunction_ss_dLsR::synapse0x2ef29e0() {
   return (neuron0x2ed8180()*1.36766);
}

double NNfunction_ss_dLsR::synapse0x2ef2a20() {
   return (neuron0x2ed8b50()*0.0251256);
}

double NNfunction_ss_dLsR::synapse0x2ef2a60() {
   return (neuron0x2ed9520()*0.0438016);
}

double NNfunction_ss_dLsR::synapse0x2ef2aa0() {
   return (neuron0x2ed9ef0()*1.65914);
}

double NNfunction_ss_dLsR::synapse0x2ef2ae0() {
   return (neuron0x2eda8c0()*-0.243479);
}

double NNfunction_ss_dLsR::synapse0x2ef2690() {
   return (neuron0x2ed0950()*0.429384);
}

double NNfunction_ss_dLsR::synapse0x2ef26d0() {
   return (neuron0x2edd4a0()*-1.36836);
}

double NNfunction_ss_dLsR::synapse0x2ef2710() {
   return (neuron0x2edde70()*-0.0278092);
}

double NNfunction_ss_dLsR::synapse0x2ef2750() {
   return (neuron0x2ede840()*1.43446);
}

double NNfunction_ss_dLsR::synapse0x2ef2d30() {
   return (neuron0x2edf210()*-1.3334);
}

double NNfunction_ss_dLsR::synapse0x2ef2d70() {
   return (neuron0x2edfbe0()*0.617093);
}

double NNfunction_ss_dLsR::synapse0x2ef2db0() {
   return (neuron0x2ee05b0()*0.722119);
}

double NNfunction_ss_dLsR::synapse0x2ef2df0() {
   return (neuron0x2ee0f80()*-1.11519);
}

double NNfunction_ss_dLsR::synapse0x2ef2e30() {
   return (neuron0x2ee1950()*-0.67674);
}

double NNfunction_ss_dLsR::synapse0x2ef2e70() {
   return (neuron0x2ee2530()*-0.0607704);
}

double NNfunction_ss_dLsR::synapse0x2ef2eb0() {
   return (neuron0x2ee2f00()*1.55242);
}

double NNfunction_ss_dLsR::synapse0x2ef2ef0() {
   return (neuron0x2ed3d80()*1.74777);
}

double NNfunction_ss_dLsR::synapse0x2ef2f30() {
   return (neuron0x2ed4750()*-0.608754);
}

double NNfunction_ss_dLsR::synapse0x2ef2f70() {
   return (neuron0x2ed5120()*1.57705);
}

double NNfunction_ss_dLsR::synapse0x2ef2fb0() {
   return (neuron0x2ee7760()*-2.61559);
}

double NNfunction_ss_dLsR::synapse0x2ef2ff0() {
   return (neuron0x2ee8010()*-1.42589);
}

double NNfunction_ss_dLsR::synapse0x2ef3030() {
   return (neuron0x2ee89e0()*-0.3349);
}

double NNfunction_ss_dLsR::synapse0x2ef3070() {
   return (neuron0x2ee93b0()*0.623918);
}

double NNfunction_ss_dLsR::synapse0x2ef33f0() {
   return (neuron0x2ec5330()*0.0802857);
}

double NNfunction_ss_dLsR::synapse0x2ef3430() {
   return (neuron0x2ec5c80()*-0.322035);
}

double NNfunction_ss_dLsR::synapse0x2ef3470() {
   return (neuron0x2ec6760()*0.297491);
}

double NNfunction_ss_dLsR::synapse0x2ef34b0() {
   return (neuron0x2ec6200()*-0.0916447);
}

double NNfunction_ss_dLsR::synapse0x2ef34f0() {
   return (neuron0x2ec7540()*-0.436428);
}

double NNfunction_ss_dLsR::synapse0x2ef3530() {
   return (neuron0x2ec7f10()*-0.881812);
}

double NNfunction_ss_dLsR::synapse0x2ef3570() {
   return (neuron0x2ec8ce0()*-0.135759);
}

double NNfunction_ss_dLsR::synapse0x2ef35b0() {
   return (neuron0x2ec96b0()*0.10312);
}

double NNfunction_ss_dLsR::synapse0x2ef35f0() {
   return (neuron0x2eca080()*-0.0255166);
}

double NNfunction_ss_dLsR::synapse0x2ef3630() {
   return (neuron0x2ecab60()*0.0653729);
}

double NNfunction_ss_dLsR::synapse0x2ef3670() {
   return (neuron0x2ecb530()*-0.62932);
}

double NNfunction_ss_dLsR::synapse0x2ef36b0() {
   return (neuron0x2ec8610()*-0.516802);
}

double NNfunction_ss_dLsR::synapse0x2ef36f0() {
   return (neuron0x2ecd0e0()*0.465959);
}

double NNfunction_ss_dLsR::synapse0x2ef3730() {
   return (neuron0x2ecdab0()*0.124745);
}

double NNfunction_ss_dLsR::synapse0x2ef3770() {
   return (neuron0x2ece480()*-0.0296798);
}

double NNfunction_ss_dLsR::synapse0x2ef37b0() {
   return (neuron0x2ecee50()*0.270846);
}

double NNfunction_ss_dLsR::synapse0x2ef3240() {
   return (neuron0x2ed0c60()*-0.0695668);
}

double NNfunction_ss_dLsR::synapse0x2ef3280() {
   return (neuron0x2ed0f40()*-0.606025);
}

double NNfunction_ss_dLsR::synapse0x2ef3900() {
   return (neuron0x2ed1910()*-0.37083);
}

double NNfunction_ss_dLsR::synapse0x2ef3940() {
   return (neuron0x2ed22e0()*0.518221);
}

double NNfunction_ss_dLsR::synapse0x2ef3980() {
   return (neuron0x2ed2cb0()*-0.79835);
}

double NNfunction_ss_dLsR::synapse0x2ef39c0() {
   return (neuron0x2ed3680()*0.02703);
}

double NNfunction_ss_dLsR::synapse0x2ef3a00() {
   return (neuron0x2ecc1d0()*-0.818551);
}

double NNfunction_ss_dLsR::synapse0x2ef3a40() {
   return (neuron0x2eccba0()*-0.292752);
}

double NNfunction_ss_dLsR::synapse0x2ef3a80() {
   return (neuron0x2ed6410()*-0.0416825);
}

double NNfunction_ss_dLsR::synapse0x2ef3ac0() {
   return (neuron0x2ed6de0()*0.518705);
}

double NNfunction_ss_dLsR::synapse0x2ef3b00() {
   return (neuron0x2ed77b0()*0.403694);
}

double NNfunction_ss_dLsR::synapse0x2ef3b40() {
   return (neuron0x2ed8180()*0.211441);
}

double NNfunction_ss_dLsR::synapse0x2ef3b80() {
   return (neuron0x2ed8b50()*-0.532733);
}

double NNfunction_ss_dLsR::synapse0x2ef3bc0() {
   return (neuron0x2ed9520()*0.0976617);
}

double NNfunction_ss_dLsR::synapse0x2ef3c00() {
   return (neuron0x2ed9ef0()*0.482451);
}

double NNfunction_ss_dLsR::synapse0x2ef3c40() {
   return (neuron0x2eda8c0()*0.423482);
}

double NNfunction_ss_dLsR::synapse0x2ef37f0() {
   return (neuron0x2ed0950()*-0.470645);
}

double NNfunction_ss_dLsR::synapse0x2ef3830() {
   return (neuron0x2edd4a0()*-1.56887);
}

double NNfunction_ss_dLsR::synapse0x2ef3870() {
   return (neuron0x2edde70()*-0.0208161);
}

double NNfunction_ss_dLsR::synapse0x2ef38b0() {
   return (neuron0x2ede840()*0.938153);
}

double NNfunction_ss_dLsR::synapse0x2ef3e90() {
   return (neuron0x2edf210()*-0.33703);
}

double NNfunction_ss_dLsR::synapse0x2ef3ed0() {
   return (neuron0x2edfbe0()*0.654715);
}

double NNfunction_ss_dLsR::synapse0x2ef3f10() {
   return (neuron0x2ee05b0()*-0.421611);
}

double NNfunction_ss_dLsR::synapse0x2ef3f50() {
   return (neuron0x2ee0f80()*0.210606);
}

double NNfunction_ss_dLsR::synapse0x2ef3f90() {
   return (neuron0x2ee1950()*0.469178);
}

double NNfunction_ss_dLsR::synapse0x2ef3fd0() {
   return (neuron0x2ee2530()*1.30163);
}

double NNfunction_ss_dLsR::synapse0x2ef4010() {
   return (neuron0x2ee2f00()*-1.58429);
}

double NNfunction_ss_dLsR::synapse0x2ef4050() {
   return (neuron0x2ed3d80()*0.695012);
}

double NNfunction_ss_dLsR::synapse0x2ef4090() {
   return (neuron0x2ed4750()*0.0846698);
}

double NNfunction_ss_dLsR::synapse0x2ef40d0() {
   return (neuron0x2ed5120()*-0.420121);
}

double NNfunction_ss_dLsR::synapse0x2ef4110() {
   return (neuron0x2ee7760()*-0.126548);
}

double NNfunction_ss_dLsR::synapse0x2ef4150() {
   return (neuron0x2ee8010()*0.21773);
}

double NNfunction_ss_dLsR::synapse0x2ef4190() {
   return (neuron0x2ee89e0()*-0.536999);
}

double NNfunction_ss_dLsR::synapse0x2ef41d0() {
   return (neuron0x2ee93b0()*0.565244);
}

double NNfunction_ss_dLsR::synapse0x2ef4430() {
   return (neuron0x2ef05b0()*9.20496);
}

double NNfunction_ss_dLsR::synapse0x2ef4470() {
   return (neuron0x2ef0950()*-4.54498);
}

double NNfunction_ss_dLsR::synapse0x2ef44b0() {
   return (neuron0x2ef0df0()*2.1022);
}

double NNfunction_ss_dLsR::synapse0x2ef44f0() {
   return (neuron0x2ef1f50()*-4.82164);
}

double NNfunction_ss_dLsR::synapse0x2ef4530() {
   return (neuron0x2ef30b0()*-2.6397);
}

