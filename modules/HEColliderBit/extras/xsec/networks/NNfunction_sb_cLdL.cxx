#include "NNfunction_sb_cLdL.h"
#include <cmath>

double NNfunction_sb_cLdL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.8933)/15.0109;
   input1 = (in1 - 38.9376)/789.91;
   input2 = (in2 - 390.134)/502.352;
   input3 = (in3 - 194.21)/596.886;
   input4 = (in4 - 713.926)/721.174;
   input5 = (in5 - 623.362)/699.471;
   input6 = (in6 - 627.129)/699.939;
   input7 = (in7 - 629.92)/701.236;
   input8 = (in8 - 635.119)/739.013;
   input9 = (in9 - 621.204)/720.444;
   input10 = (in10 - 642.865)/746.814;
   input11 = (in11 - 443.859)/269.896;
   input12 = (in12 - 443.695)/269.008;
   input13 = (in13 - 477.646)/365.483;
   input14 = (in14 - 614.394)/561.379;
   input15 = (in15 - 614.248)/562.181;
   input16 = (in16 - 441.68)/396.901;
   input17 = (in17 - 647.592)/644.566;
   input18 = (in18 - 641.269)/642.447;
   input19 = (in19 - 648.667)/629.647;
   input20 = (in20 - -156.827)/390.572;
   input21 = (in21 - -198.938)/881.059;
   input22 = (in22 - 9.92626)/896.483;
   input23 = (in23 - -43.4517)/486.076;
   switch(index) {
     case 0:
         return neuron0x30e4e50();
     default:
         return 0.;
   }
}

double NNfunction_sb_cLdL::Value(int index, double* input) {
   input0 = (input[0] - 22.8933)/15.0109;
   input1 = (input[1] - 38.9376)/789.91;
   input2 = (input[2] - 390.134)/502.352;
   input3 = (input[3] - 194.21)/596.886;
   input4 = (input[4] - 713.926)/721.174;
   input5 = (input[5] - 623.362)/699.471;
   input6 = (input[6] - 627.129)/699.939;
   input7 = (input[7] - 629.92)/701.236;
   input8 = (input[8] - 635.119)/739.013;
   input9 = (input[9] - 621.204)/720.444;
   input10 = (input[10] - 642.865)/746.814;
   input11 = (input[11] - 443.859)/269.896;
   input12 = (input[12] - 443.695)/269.008;
   input13 = (input[13] - 477.646)/365.483;
   input14 = (input[14] - 614.394)/561.379;
   input15 = (input[15] - 614.248)/562.181;
   input16 = (input[16] - 441.68)/396.901;
   input17 = (input[17] - 647.592)/644.566;
   input18 = (input[18] - 641.269)/642.447;
   input19 = (input[19] - 648.667)/629.647;
   input20 = (input[20] - -156.827)/390.572;
   input21 = (input[21] - -198.938)/881.059;
   input22 = (input[22] - 9.92626)/896.483;
   input23 = (input[23] - -43.4517)/486.076;
   switch(index) {
     case 0:
         return neuron0x30e4e50();
     default:
         return 0.;
   }
}

double NNfunction_sb_cLdL::neuron0x30b0f10() {
   return input0;
}

double NNfunction_sb_cLdL::neuron0x30b1250() {
   return input1;
}

double NNfunction_sb_cLdL::neuron0x30b1590() {
   return input2;
}

double NNfunction_sb_cLdL::neuron0x30b18d0() {
   return input3;
}

double NNfunction_sb_cLdL::neuron0x30b1c10() {
   return input4;
}

double NNfunction_sb_cLdL::neuron0x30b1f50() {
   return input5;
}

double NNfunction_sb_cLdL::neuron0x30b2290() {
   return input6;
}

double NNfunction_sb_cLdL::neuron0x30b25d0() {
   return input7;
}

double NNfunction_sb_cLdL::neuron0x30b2910() {
   return input8;
}

double NNfunction_sb_cLdL::neuron0x30b2c50() {
   return input9;
}

double NNfunction_sb_cLdL::neuron0x30b2f90() {
   return input10;
}

double NNfunction_sb_cLdL::neuron0x30b32d0() {
   return input11;
}

double NNfunction_sb_cLdL::neuron0x30b3610() {
   return input12;
}

double NNfunction_sb_cLdL::neuron0x30b3950() {
   return input13;
}

double NNfunction_sb_cLdL::neuron0x30b3c90() {
   return input14;
}

double NNfunction_sb_cLdL::neuron0x30b3fd0() {
   return input15;
}

double NNfunction_sb_cLdL::neuron0x30b4310() {
   return input16;
}

double NNfunction_sb_cLdL::neuron0x30b4870() {
   return input17;
}

double NNfunction_sb_cLdL::neuron0x30b4a90() {
   return input18;
}

double NNfunction_sb_cLdL::neuron0x30b4dd0() {
   return input19;
}

double NNfunction_sb_cLdL::neuron0x30b5110() {
   return input20;
}

double NNfunction_sb_cLdL::neuron0x30b5450() {
   return input21;
}

double NNfunction_sb_cLdL::neuron0x30b5790() {
   return input22;
}

double NNfunction_sb_cLdL::neuron0x30b5ad0() {
   return input23;
}

double NNfunction_sb_cLdL::input0x30b5f70() {
   double input = 0.464188;
   input += synapse0x2e7a8c0();
   input += synapse0x30b0dd0();
   input += synapse0x30b0e10();
   input += synapse0x30b6220();
   input += synapse0x30b6260();
   input += synapse0x30b62a0();
   input += synapse0x30b62e0();
   input += synapse0x30b6320();
   input += synapse0x30b6360();
   input += synapse0x30b63a0();
   input += synapse0x30b63e0();
   input += synapse0x30b6420();
   input += synapse0x30b6460();
   input += synapse0x30b64a0();
   input += synapse0x30b64e0();
   input += synapse0x30b6520();
   input += synapse0x30b0d40();
   input += synapse0x30b0d80();
   input += synapse0x2e6c0d0();
   input += synapse0x2e6c110();
   input += synapse0x30b6780();
   input += synapse0x30b67c0();
   input += synapse0x30b6800();
   input += synapse0x30b6840();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30b5f70() {
   double input = input0x30b5f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30b6880() {
   double input = -2.40218;
   input += synapse0x30b6bc0();
   input += synapse0x30b6c00();
   input += synapse0x30b6c40();
   input += synapse0x30b6c80();
   input += synapse0x30b6cc0();
   input += synapse0x30b6d00();
   input += synapse0x30b6d40();
   input += synapse0x30b6d80();
   input += synapse0x30b6dc0();
   input += synapse0x30b6670();
   input += synapse0x30b66b0();
   input += synapse0x30b66f0();
   input += synapse0x30b6730();
   input += synapse0x30b7010();
   input += synapse0x30b7050();
   input += synapse0x30b7090();
   input += synapse0x30b6a10();
   input += synapse0x30b6a50();
   input += synapse0x30b71e0();
   input += synapse0x30b7220();
   input += synapse0x30b7260();
   input += synapse0x30b72a0();
   input += synapse0x30b72e0();
   input += synapse0x30b7320();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30b6880() {
   double input = input0x30b6880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30b7360() {
   double input = 0.267659;
   input += synapse0x30b76a0();
   input += synapse0x30b76e0();
   input += synapse0x30b7720();
   input += synapse0x30b7760();
   input += synapse0x30b77a0();
   input += synapse0x30b77e0();
   input += synapse0x30b7820();
   input += synapse0x30b7860();
   input += synapse0x30b78a0();
   input += synapse0x30b78e0();
   input += synapse0x30b7920();
   input += synapse0x30b7960();
   input += synapse0x30b79a0();
   input += synapse0x30b79e0();
   input += synapse0x30b7a20();
   input += synapse0x30b7a60();
   input += synapse0x30b74f0();
   input += synapse0x30b7530();
   input += synapse0x2e79fd0();
   input += synapse0x2e7a010();
   input += synapse0x309ffa0();
   input += synapse0x309ffe0();
   input += synapse0x30a0020();
   input += synapse0x30b0e50();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30b7360() {
   double input = input0x30b7360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x2e7a730() {
   double input = 0.911424;
   input += synapse0x30b6fb0();
   input += synapse0x30b0e90();
   input += synapse0x30b0ed0();
   input += synapse0x30b7bb0();
   input += synapse0x30b7bf0();
   input += synapse0x30b7c30();
   input += synapse0x30b7c70();
   input += synapse0x30b7cb0();
   input += synapse0x30b7cf0();
   input += synapse0x30b7d30();
   input += synapse0x30b7d70();
   input += synapse0x30b7db0();
   input += synapse0x30b7df0();
   input += synapse0x30b7e30();
   input += synapse0x30b7e70();
   input += synapse0x30b7eb0();
   input += synapse0x30b6e00();
   input += synapse0x30b6e40();
   input += synapse0x30b8000();
   input += synapse0x30b8040();
   input += synapse0x30b8080();
   input += synapse0x30b80c0();
   input += synapse0x30b8100();
   input += synapse0x30b8140();
   return input;
}

double NNfunction_sb_cLdL::neuron0x2e7a730() {
   double input = input0x2e7a730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30b8180() {
   double input = 1.00277;
   input += synapse0x30b84c0();
   input += synapse0x30b8500();
   input += synapse0x30b8540();
   input += synapse0x30b8580();
   input += synapse0x30b85c0();
   input += synapse0x30b8600();
   input += synapse0x30b8640();
   input += synapse0x30b8680();
   input += synapse0x30b86c0();
   input += synapse0x30b8700();
   input += synapse0x30b8740();
   input += synapse0x30b8780();
   input += synapse0x30b87c0();
   input += synapse0x30b8800();
   input += synapse0x30b8840();
   input += synapse0x30b8880();
   input += synapse0x30b8310();
   input += synapse0x30b8350();
   input += synapse0x30b89d0();
   input += synapse0x30b8a10();
   input += synapse0x30b8a50();
   input += synapse0x30b8a90();
   input += synapse0x30b8ad0();
   input += synapse0x30b8b10();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30b8180() {
   double input = input0x30b8180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30b8b50() {
   double input = 4.73823;
   input += synapse0x30b8e90();
   input += synapse0x30b8ed0();
   input += synapse0x30b8f10();
   input += synapse0x30b8f50();
   input += synapse0x30b8f90();
   input += synapse0x30b8fd0();
   input += synapse0x30b9010();
   input += synapse0x30b9050();
   input += synapse0x30b9090();
   input += synapse0x2e7a320();
   input += synapse0x2e7a360();
   input += synapse0x2e7a3a0();
   input += synapse0x2e7a3e0();
   input += synapse0x2e7a420();
   input += synapse0x2e7a460();
   input += synapse0x2e7a4a0();
   input += synapse0x30b8ce0();
   input += synapse0x30b8d20();
   input += synapse0x2e7a5f0();
   input += synapse0x2e7a630();
   input += synapse0x2e7a670();
   input += synapse0x2e7a6b0();
   input += synapse0x2e7a6f0();
   input += synapse0x30b98e0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30b8b50() {
   double input = input0x30b8b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30b9920() {
   double input = -0.334839;
   input += synapse0x30b9c60();
   input += synapse0x30b9ca0();
   input += synapse0x30b9ce0();
   input += synapse0x30b9d20();
   input += synapse0x30b9d60();
   input += synapse0x30b9da0();
   input += synapse0x30b9de0();
   input += synapse0x30b9e20();
   input += synapse0x30b9e60();
   input += synapse0x30b9ea0();
   input += synapse0x30b9ee0();
   input += synapse0x30b9f20();
   input += synapse0x30b9f60();
   input += synapse0x30b9fa0();
   input += synapse0x30b9fe0();
   input += synapse0x30ba020();
   input += synapse0x30b9ab0();
   input += synapse0x30b9af0();
   input += synapse0x30ba170();
   input += synapse0x30ba1b0();
   input += synapse0x30ba1f0();
   input += synapse0x30ba230();
   input += synapse0x30ba270();
   input += synapse0x30ba2b0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30b9920() {
   double input = input0x30b9920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30ba2f0() {
   double input = 0.435298;
   input += synapse0x30ba630();
   input += synapse0x30ba670();
   input += synapse0x30ba6b0();
   input += synapse0x30ba6f0();
   input += synapse0x30ba730();
   input += synapse0x30ba770();
   input += synapse0x30ba7b0();
   input += synapse0x30ba7f0();
   input += synapse0x30ba830();
   input += synapse0x30ba870();
   input += synapse0x30ba8b0();
   input += synapse0x30ba8f0();
   input += synapse0x30ba930();
   input += synapse0x30ba970();
   input += synapse0x30ba9b0();
   input += synapse0x30ba9f0();
   input += synapse0x30ba480();
   input += synapse0x30ba4c0();
   input += synapse0x30bab40();
   input += synapse0x30bab80();
   input += synapse0x30babc0();
   input += synapse0x30bac00();
   input += synapse0x30bac40();
   input += synapse0x30bac80();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30ba2f0() {
   double input = input0x30ba2f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30bacc0() {
   double input = 0.295719;
   input += synapse0x30b4760();
   input += synapse0x30b47a0();
   input += synapse0x30b47e0();
   input += synapse0x30b4820();
   input += synapse0x30bb210();
   input += synapse0x30bb250();
   input += synapse0x30bb290();
   input += synapse0x30bb2d0();
   input += synapse0x30bb310();
   input += synapse0x30bb350();
   input += synapse0x30bb390();
   input += synapse0x30bb3d0();
   input += synapse0x30bb410();
   input += synapse0x30bb450();
   input += synapse0x30bb490();
   input += synapse0x30bb4d0();
   input += synapse0x30bae50();
   input += synapse0x30bae90();
   input += synapse0x30bb620();
   input += synapse0x30bb660();
   input += synapse0x30bb6a0();
   input += synapse0x30bb6e0();
   input += synapse0x30bb720();
   input += synapse0x30bb760();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30bacc0() {
   double input = input0x30bacc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30bb7a0() {
   double input = 1.24102;
   input += synapse0x30bbae0();
   input += synapse0x30bbb20();
   input += synapse0x30bbb60();
   input += synapse0x30bbba0();
   input += synapse0x30bbbe0();
   input += synapse0x30bbc20();
   input += synapse0x30bbc60();
   input += synapse0x30bbca0();
   input += synapse0x30bbce0();
   input += synapse0x30bbd20();
   input += synapse0x30bbd60();
   input += synapse0x30bbda0();
   input += synapse0x30bbde0();
   input += synapse0x30bbe20();
   input += synapse0x30bbe60();
   input += synapse0x30bbea0();
   input += synapse0x30bb930();
   input += synapse0x30bb970();
   input += synapse0x30bbff0();
   input += synapse0x30bc030();
   input += synapse0x30bc070();
   input += synapse0x30bc0b0();
   input += synapse0x30bc0f0();
   input += synapse0x30bc130();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30bb7a0() {
   double input = input0x30bb7a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30bc170() {
   double input = 1.16415;
   input += synapse0x30bc4b0();
   input += synapse0x30bc4f0();
   input += synapse0x30bc530();
   input += synapse0x30bc570();
   input += synapse0x30bc5b0();
   input += synapse0x30bc5f0();
   input += synapse0x30bc630();
   input += synapse0x30bc670();
   input += synapse0x30bc6b0();
   input += synapse0x30bc6f0();
   input += synapse0x30bc730();
   input += synapse0x30bc770();
   input += synapse0x30bc7b0();
   input += synapse0x30bc7f0();
   input += synapse0x30bc830();
   input += synapse0x30bc870();
   input += synapse0x30bc300();
   input += synapse0x30bc340();
   input += synapse0x30b90d0();
   input += synapse0x30b9110();
   input += synapse0x30b9150();
   input += synapse0x30b9190();
   input += synapse0x30b91d0();
   input += synapse0x30b9210();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30bc170() {
   double input = input0x30bc170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30b9250() {
   double input = 0.92927;
   input += synapse0x30b9590();
   input += synapse0x30b95d0();
   input += synapse0x30b9610();
   input += synapse0x30b9650();
   input += synapse0x30b9690();
   input += synapse0x30b96d0();
   input += synapse0x30b9710();
   input += synapse0x30b9750();
   input += synapse0x30b9790();
   input += synapse0x30b97d0();
   input += synapse0x30b9810();
   input += synapse0x30b9850();
   input += synapse0x30b9890();
   input += synapse0x30bd9d0();
   input += synapse0x30bda10();
   input += synapse0x30bda50();
   input += synapse0x30b93e0();
   input += synapse0x30b9420();
   input += synapse0x30bdba0();
   input += synapse0x30bdbe0();
   input += synapse0x30bdc20();
   input += synapse0x30bdc60();
   input += synapse0x30bdca0();
   input += synapse0x30bdce0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30b9250() {
   double input = input0x30b9250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30bdd20() {
   double input = -0.430073;
   input += synapse0x30be060();
   input += synapse0x30be0a0();
   input += synapse0x30be0e0();
   input += synapse0x30be120();
   input += synapse0x30be160();
   input += synapse0x30be1a0();
   input += synapse0x30be1e0();
   input += synapse0x30be220();
   input += synapse0x30be260();
   input += synapse0x30be2a0();
   input += synapse0x30be2e0();
   input += synapse0x30be320();
   input += synapse0x30be360();
   input += synapse0x30be3a0();
   input += synapse0x30be3e0();
   input += synapse0x30be420();
   input += synapse0x30bdeb0();
   input += synapse0x30bdef0();
   input += synapse0x30be570();
   input += synapse0x30be5b0();
   input += synapse0x30be5f0();
   input += synapse0x30be630();
   input += synapse0x30be670();
   input += synapse0x30be6b0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30bdd20() {
   double input = input0x30bdd20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30be6f0() {
   double input = 1.59198;
   input += synapse0x30bea30();
   input += synapse0x30bea70();
   input += synapse0x30beab0();
   input += synapse0x30beaf0();
   input += synapse0x30beb30();
   input += synapse0x30beb70();
   input += synapse0x30bebb0();
   input += synapse0x30bebf0();
   input += synapse0x30bec30();
   input += synapse0x30bec70();
   input += synapse0x30becb0();
   input += synapse0x30becf0();
   input += synapse0x30bed30();
   input += synapse0x30bed70();
   input += synapse0x30bedb0();
   input += synapse0x30bedf0();
   input += synapse0x30be880();
   input += synapse0x30be8c0();
   input += synapse0x30bef40();
   input += synapse0x30bef80();
   input += synapse0x30befc0();
   input += synapse0x30bf000();
   input += synapse0x30bf040();
   input += synapse0x30bf080();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30be6f0() {
   double input = input0x30be6f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30bf0c0() {
   double input = -0.593352;
   input += synapse0x30bf400();
   input += synapse0x30bf440();
   input += synapse0x30bf480();
   input += synapse0x30bf4c0();
   input += synapse0x30bf500();
   input += synapse0x30bf540();
   input += synapse0x30bf580();
   input += synapse0x30bf5c0();
   input += synapse0x30bf600();
   input += synapse0x30bf640();
   input += synapse0x30bf680();
   input += synapse0x30bf6c0();
   input += synapse0x30bf700();
   input += synapse0x30bf740();
   input += synapse0x30bf780();
   input += synapse0x30bf7c0();
   input += synapse0x30bf250();
   input += synapse0x30bf290();
   input += synapse0x30bf910();
   input += synapse0x30bf950();
   input += synapse0x30bf990();
   input += synapse0x30bf9d0();
   input += synapse0x30bfa10();
   input += synapse0x30bfa50();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30bf0c0() {
   double input = input0x30bf0c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30bfa90() {
   double input = 1.50579;
   input += synapse0x30bfdd0();
   input += synapse0x30b1130();
   input += synapse0x30b1170();
   input += synapse0x30b1470();
   input += synapse0x30b14b0();
   input += synapse0x30b17b0();
   input += synapse0x30b17f0();
   input += synapse0x30b1af0();
   input += synapse0x30b1b30();
   input += synapse0x30b1e30();
   input += synapse0x30b1e70();
   input += synapse0x30b2170();
   input += synapse0x30b21b0();
   input += synapse0x30b24b0();
   input += synapse0x30b24f0();
   input += synapse0x30b27f0();
   input += synapse0x30b2830();
   input += synapse0x30b2b30();
   input += synapse0x30b2b70();
   input += synapse0x30b2e70();
   input += synapse0x30b2eb0();
   input += synapse0x30b31b0();
   input += synapse0x30b31f0();
   input += synapse0x30b34f0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30bfa90() {
   double input = input0x30bfa90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30c18a0() {
   double input = 0.893304;
   input += synapse0x30b3530();
   input += synapse0x30b41f0();
   input += synapse0x30b4230();
   input += synapse0x30bfc20();
   input += synapse0x30bfc60();
   input += synapse0x30b4530();
   input += synapse0x30b4570();
   input += synapse0x2e6bfb0();
   input += synapse0x2e6bff0();
   input += synapse0x30b4cb0();
   input += synapse0x30b4cf0();
   input += synapse0x30b4ff0();
   input += synapse0x30b5030();
   input += synapse0x30b5330();
   input += synapse0x30b5370();
   input += synapse0x30b5670();
   input += synapse0x30b56b0();
   input += synapse0x30b59b0();
   input += synapse0x30b59f0();
   input += synapse0x30b5cf0();
   input += synapse0x30b5d30();
   input += synapse0x30b3830();
   input += synapse0x30b3870();
   input += synapse0x30c1b40();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30c18a0() {
   double input = input0x30c18a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30c1b80() {
   double input = -0.0849042;
   input += synapse0x30c1ec0();
   input += synapse0x30c1f00();
   input += synapse0x30c1f40();
   input += synapse0x30c1f80();
   input += synapse0x30c1fc0();
   input += synapse0x30c2000();
   input += synapse0x30c2040();
   input += synapse0x30c2080();
   input += synapse0x30c20c0();
   input += synapse0x30c2100();
   input += synapse0x30c2140();
   input += synapse0x30c2180();
   input += synapse0x30c21c0();
   input += synapse0x30c2200();
   input += synapse0x30c2240();
   input += synapse0x30c2280();
   input += synapse0x30c1d10();
   input += synapse0x30c1d50();
   input += synapse0x30c23d0();
   input += synapse0x30c2410();
   input += synapse0x30c2450();
   input += synapse0x30c2490();
   input += synapse0x30c24d0();
   input += synapse0x30c2510();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30c1b80() {
   double input = input0x30c1b80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30c2550() {
   double input = -4.79309;
   input += synapse0x30c2890();
   input += synapse0x30c28d0();
   input += synapse0x30c2910();
   input += synapse0x30c2950();
   input += synapse0x30c2990();
   input += synapse0x30c29d0();
   input += synapse0x30c2a10();
   input += synapse0x30c2a50();
   input += synapse0x30c2a90();
   input += synapse0x30c2ad0();
   input += synapse0x30c2b10();
   input += synapse0x30c2b50();
   input += synapse0x30c2b90();
   input += synapse0x30c2bd0();
   input += synapse0x30c2c10();
   input += synapse0x30c2c50();
   input += synapse0x30c26e0();
   input += synapse0x30c2720();
   input += synapse0x30c2da0();
   input += synapse0x30c2de0();
   input += synapse0x30c2e20();
   input += synapse0x30c2e60();
   input += synapse0x30c2ea0();
   input += synapse0x30c2ee0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30c2550() {
   double input = input0x30c2550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30c2f20() {
   double input = -0.547391;
   input += synapse0x30c3260();
   input += synapse0x30c32a0();
   input += synapse0x30c32e0();
   input += synapse0x30c3320();
   input += synapse0x30c3360();
   input += synapse0x30c33a0();
   input += synapse0x30c33e0();
   input += synapse0x30c3420();
   input += synapse0x30c3460();
   input += synapse0x30c34a0();
   input += synapse0x30c34e0();
   input += synapse0x30c3520();
   input += synapse0x30c3560();
   input += synapse0x30c35a0();
   input += synapse0x30c35e0();
   input += synapse0x30c3620();
   input += synapse0x30c30b0();
   input += synapse0x30c30f0();
   input += synapse0x30c3770();
   input += synapse0x30c37b0();
   input += synapse0x30c37f0();
   input += synapse0x30c3830();
   input += synapse0x30c3870();
   input += synapse0x30c38b0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30c2f20() {
   double input = input0x30c2f20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30c38f0() {
   double input = 1.17321;
   input += synapse0x30c3c30();
   input += synapse0x30c3c70();
   input += synapse0x30c3cb0();
   input += synapse0x30c3cf0();
   input += synapse0x30c3d30();
   input += synapse0x30c3d70();
   input += synapse0x30c3db0();
   input += synapse0x30c3df0();
   input += synapse0x30c3e30();
   input += synapse0x30c3e70();
   input += synapse0x30c3eb0();
   input += synapse0x30c3ef0();
   input += synapse0x30c3f30();
   input += synapse0x30c3f70();
   input += synapse0x30c3fb0();
   input += synapse0x30c3ff0();
   input += synapse0x30c3a80();
   input += synapse0x30c3ac0();
   input += synapse0x30c4140();
   input += synapse0x30c4180();
   input += synapse0x30c41c0();
   input += synapse0x30c4200();
   input += synapse0x30c4240();
   input += synapse0x30c4280();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30c38f0() {
   double input = input0x30c38f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30c42c0() {
   double input = 0.414552;
   input += synapse0x30c4600();
   input += synapse0x30c4640();
   input += synapse0x30c4680();
   input += synapse0x30c46c0();
   input += synapse0x30c4700();
   input += synapse0x30c4740();
   input += synapse0x30c4780();
   input += synapse0x30c47c0();
   input += synapse0x30c4800();
   input += synapse0x30bc9c0();
   input += synapse0x30bca00();
   input += synapse0x30bca40();
   input += synapse0x30bca80();
   input += synapse0x30bcac0();
   input += synapse0x30bcb00();
   input += synapse0x30bcb40();
   input += synapse0x30c4450();
   input += synapse0x30c4490();
   input += synapse0x30bcc90();
   input += synapse0x30bccd0();
   input += synapse0x30bcd10();
   input += synapse0x30bcd50();
   input += synapse0x30bcd90();
   input += synapse0x30bcdd0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30c42c0() {
   double input = input0x30c42c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30bce10() {
   double input = 1.28556;
   input += synapse0x30bd150();
   input += synapse0x30bd190();
   input += synapse0x30bd1d0();
   input += synapse0x30bd210();
   input += synapse0x30bd250();
   input += synapse0x30bd290();
   input += synapse0x30bd2d0();
   input += synapse0x30bd310();
   input += synapse0x30bd350();
   input += synapse0x30bd390();
   input += synapse0x30bd3d0();
   input += synapse0x30bd410();
   input += synapse0x30bd450();
   input += synapse0x30bd490();
   input += synapse0x30bd4d0();
   input += synapse0x30bd510();
   input += synapse0x30bcfa0();
   input += synapse0x30bcfe0();
   input += synapse0x30bd660();
   input += synapse0x30bd6a0();
   input += synapse0x30bd6e0();
   input += synapse0x30bd720();
   input += synapse0x30bd760();
   input += synapse0x30bd7a0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30bce10() {
   double input = input0x30bce10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30bd7e0() {
   double input = 2.21652;
   input += synapse0x30bd970();
   input += synapse0x30c6a00();
   input += synapse0x30c6a40();
   input += synapse0x30c6a80();
   input += synapse0x30c6ac0();
   input += synapse0x30c6b00();
   input += synapse0x30c6b40();
   input += synapse0x30c6b80();
   input += synapse0x30c6bc0();
   input += synapse0x30c6c00();
   input += synapse0x30c6c40();
   input += synapse0x30c6c80();
   input += synapse0x30c6cc0();
   input += synapse0x30c6d00();
   input += synapse0x30c6d40();
   input += synapse0x30c6d80();
   input += synapse0x30c6850();
   input += synapse0x30c6890();
   input += synapse0x30c6ed0();
   input += synapse0x30c6f10();
   input += synapse0x30c6f50();
   input += synapse0x30c6f90();
   input += synapse0x30c6fd0();
   input += synapse0x30c7010();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30bd7e0() {
   double input = input0x30bd7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30c7050() {
   double input = 1.45605;
   input += synapse0x30c7390();
   input += synapse0x30c73d0();
   input += synapse0x30c7410();
   input += synapse0x30c7450();
   input += synapse0x30c7490();
   input += synapse0x30c74d0();
   input += synapse0x30c7510();
   input += synapse0x30c7550();
   input += synapse0x30c7590();
   input += synapse0x30c75d0();
   input += synapse0x30c7610();
   input += synapse0x30c7650();
   input += synapse0x30c7690();
   input += synapse0x30c76d0();
   input += synapse0x30c7710();
   input += synapse0x30c7750();
   input += synapse0x30c71e0();
   input += synapse0x30c7220();
   input += synapse0x30c78a0();
   input += synapse0x30c78e0();
   input += synapse0x30c7920();
   input += synapse0x30c7960();
   input += synapse0x30c79a0();
   input += synapse0x30c79e0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30c7050() {
   double input = input0x30c7050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30c7a20() {
   double input = -2.01045;
   input += synapse0x30c7d60();
   input += synapse0x30c7da0();
   input += synapse0x30c7de0();
   input += synapse0x30c7e20();
   input += synapse0x30c7e60();
   input += synapse0x30c7ea0();
   input += synapse0x30c7ee0();
   input += synapse0x30c7f20();
   input += synapse0x30c7f60();
   input += synapse0x30c7fa0();
   input += synapse0x30c7fe0();
   input += synapse0x30c8020();
   input += synapse0x30c8060();
   input += synapse0x30c80a0();
   input += synapse0x30c80e0();
   input += synapse0x30c8120();
   input += synapse0x30c7bb0();
   input += synapse0x30c7bf0();
   input += synapse0x30c8270();
   input += synapse0x30c82b0();
   input += synapse0x30c82f0();
   input += synapse0x30c8330();
   input += synapse0x30c8370();
   input += synapse0x30c83b0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30c7a20() {
   double input = input0x30c7a20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30c83f0() {
   double input = -0.457146;
   input += synapse0x30c8730();
   input += synapse0x30c8770();
   input += synapse0x30c87b0();
   input += synapse0x30c87f0();
   input += synapse0x30c8830();
   input += synapse0x30c8870();
   input += synapse0x30c88b0();
   input += synapse0x30c88f0();
   input += synapse0x30c8930();
   input += synapse0x30c8970();
   input += synapse0x30c89b0();
   input += synapse0x30c89f0();
   input += synapse0x30c8a30();
   input += synapse0x30c8a70();
   input += synapse0x30c8ab0();
   input += synapse0x30c8af0();
   input += synapse0x30c8580();
   input += synapse0x30c85c0();
   input += synapse0x30c8c40();
   input += synapse0x30c8c80();
   input += synapse0x30c8cc0();
   input += synapse0x30c8d00();
   input += synapse0x30c8d40();
   input += synapse0x30c8d80();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30c83f0() {
   double input = input0x30c83f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30c8dc0() {
   double input = -0.0053191;
   input += synapse0x30c9100();
   input += synapse0x30c9140();
   input += synapse0x30c9180();
   input += synapse0x30c91c0();
   input += synapse0x30c9200();
   input += synapse0x30c9240();
   input += synapse0x30c9280();
   input += synapse0x30c92c0();
   input += synapse0x30c9300();
   input += synapse0x30c9340();
   input += synapse0x30c9380();
   input += synapse0x30c93c0();
   input += synapse0x30c9400();
   input += synapse0x30c9440();
   input += synapse0x30c9480();
   input += synapse0x30c94c0();
   input += synapse0x30c8f50();
   input += synapse0x30c8f90();
   input += synapse0x30c9610();
   input += synapse0x30c9650();
   input += synapse0x30c9690();
   input += synapse0x30c96d0();
   input += synapse0x30c9710();
   input += synapse0x30c9750();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30c8dc0() {
   double input = input0x30c8dc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30c9790() {
   double input = 0.151932;
   input += synapse0x30c9ad0();
   input += synapse0x30c9b10();
   input += synapse0x30c9b50();
   input += synapse0x30c9b90();
   input += synapse0x30c9bd0();
   input += synapse0x30c9c10();
   input += synapse0x30c9c50();
   input += synapse0x30c9c90();
   input += synapse0x30c9cd0();
   input += synapse0x30c9d10();
   input += synapse0x30c9d50();
   input += synapse0x30c9d90();
   input += synapse0x30c9dd0();
   input += synapse0x30c9e10();
   input += synapse0x30c9e50();
   input += synapse0x30c9e90();
   input += synapse0x30c9920();
   input += synapse0x30c9960();
   input += synapse0x30c9fe0();
   input += synapse0x30ca020();
   input += synapse0x30ca060();
   input += synapse0x30ca0a0();
   input += synapse0x30ca0e0();
   input += synapse0x30ca120();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30c9790() {
   double input = input0x30c9790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30ca160() {
   double input = 0.246347;
   input += synapse0x30ca4a0();
   input += synapse0x30ca4e0();
   input += synapse0x30ca520();
   input += synapse0x30ca560();
   input += synapse0x30ca5a0();
   input += synapse0x30ca5e0();
   input += synapse0x30ca620();
   input += synapse0x30ca660();
   input += synapse0x30ca6a0();
   input += synapse0x30ca6e0();
   input += synapse0x30ca720();
   input += synapse0x30ca760();
   input += synapse0x30ca7a0();
   input += synapse0x30ca7e0();
   input += synapse0x30ca820();
   input += synapse0x30ca860();
   input += synapse0x30ca2f0();
   input += synapse0x30ca330();
   input += synapse0x30ca9b0();
   input += synapse0x30ca9f0();
   input += synapse0x30caa30();
   input += synapse0x30caa70();
   input += synapse0x30caab0();
   input += synapse0x30caaf0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30ca160() {
   double input = input0x30ca160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30cab30() {
   double input = -0.304664;
   input += synapse0x30cae70();
   input += synapse0x30caeb0();
   input += synapse0x30caef0();
   input += synapse0x30caf30();
   input += synapse0x30caf70();
   input += synapse0x30cafb0();
   input += synapse0x30caff0();
   input += synapse0x30cb030();
   input += synapse0x30cb070();
   input += synapse0x30cb0b0();
   input += synapse0x30cb0f0();
   input += synapse0x30cb130();
   input += synapse0x30cb170();
   input += synapse0x30cb1b0();
   input += synapse0x30cb1f0();
   input += synapse0x30cb230();
   input += synapse0x30cacc0();
   input += synapse0x30cad00();
   input += synapse0x30cb380();
   input += synapse0x30cb3c0();
   input += synapse0x30cb400();
   input += synapse0x30cb440();
   input += synapse0x30cb480();
   input += synapse0x30cb4c0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30cab30() {
   double input = input0x30cab30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30cb500() {
   double input = -0.270383;
   input += synapse0x30cb840();
   input += synapse0x30bfe10();
   input += synapse0x30bfe50();
   input += synapse0x30bfe90();
   input += synapse0x30c00e0();
   input += synapse0x30c0120();
   input += synapse0x30c0160();
   input += synapse0x30c03b0();
   input += synapse0x30c03f0();
   input += synapse0x30c0640();
   input += synapse0x30c0680();
   input += synapse0x30c06c0();
   input += synapse0x30c0910();
   input += synapse0x30c0950();
   input += synapse0x30c0ba0();
   input += synapse0x30c0be0();
   input += synapse0x30cb690();
   input += synapse0x30cb6d0();
   input += synapse0x30c0d30();
   input += synapse0x30c1240();
   input += synapse0x30c1280();
   input += synapse0x30c12c0();
   input += synapse0x30c1510();
   input += synapse0x30c1550();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30cb500() {
   double input = input0x30cb500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30c1590() {
   double input = 0.13434;
   input += synapse0x30c0e00();
   input += synapse0x30c0e40();
   input += synapse0x30c0e80();
   input += synapse0x30c0ec0();
   input += synapse0x30c1840();
   input += synapse0x30cdb90();
   input += synapse0x30cdbd0();
   input += synapse0x30cdc10();
   input += synapse0x30cdc50();
   input += synapse0x30cdc90();
   input += synapse0x30cdcd0();
   input += synapse0x30cdd10();
   input += synapse0x30cdd50();
   input += synapse0x30cdd90();
   input += synapse0x30cddd0();
   input += synapse0x30cde10();
   input += synapse0x30c1720();
   input += synapse0x30c1760();
   input += synapse0x30cdf60();
   input += synapse0x30cdfa0();
   input += synapse0x30cdfe0();
   input += synapse0x30ce020();
   input += synapse0x30ce060();
   input += synapse0x30ce0a0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30c1590() {
   double input = input0x30c1590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30ce0e0() {
   double input = -4.07827;
   input += synapse0x30ce420();
   input += synapse0x30ce460();
   input += synapse0x30ce4a0();
   input += synapse0x30ce4e0();
   input += synapse0x30ce520();
   input += synapse0x30ce560();
   input += synapse0x30ce5a0();
   input += synapse0x30ce5e0();
   input += synapse0x30ce620();
   input += synapse0x30ce660();
   input += synapse0x30ce6a0();
   input += synapse0x30ce6e0();
   input += synapse0x30ce720();
   input += synapse0x30ce760();
   input += synapse0x30ce7a0();
   input += synapse0x30ce7e0();
   input += synapse0x30ce270();
   input += synapse0x30ce2b0();
   input += synapse0x30ce930();
   input += synapse0x30ce970();
   input += synapse0x30ce9b0();
   input += synapse0x30ce9f0();
   input += synapse0x30cea30();
   input += synapse0x30cea70();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30ce0e0() {
   double input = input0x30ce0e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30ceab0() {
   double input = -2.17899;
   input += synapse0x30cedf0();
   input += synapse0x30cee30();
   input += synapse0x30cee70();
   input += synapse0x30ceeb0();
   input += synapse0x30ceef0();
   input += synapse0x30cef30();
   input += synapse0x30cef70();
   input += synapse0x30cefb0();
   input += synapse0x30ceff0();
   input += synapse0x30cf030();
   input += synapse0x30cf070();
   input += synapse0x30cf0b0();
   input += synapse0x30cf0f0();
   input += synapse0x30cf130();
   input += synapse0x30cf170();
   input += synapse0x30cf1b0();
   input += synapse0x30cec40();
   input += synapse0x30cec80();
   input += synapse0x30cf300();
   input += synapse0x30cf340();
   input += synapse0x30cf380();
   input += synapse0x30cf3c0();
   input += synapse0x30cf400();
   input += synapse0x30cf440();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30ceab0() {
   double input = input0x30ceab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30cf480() {
   double input = -1.14726;
   input += synapse0x30cf7c0();
   input += synapse0x30cf800();
   input += synapse0x30cf840();
   input += synapse0x30cf880();
   input += synapse0x30cf8c0();
   input += synapse0x30cf900();
   input += synapse0x30cf940();
   input += synapse0x30cf980();
   input += synapse0x30cf9c0();
   input += synapse0x30cfa00();
   input += synapse0x30cfa40();
   input += synapse0x30cfa80();
   input += synapse0x30cfac0();
   input += synapse0x30cfb00();
   input += synapse0x30cfb40();
   input += synapse0x30cfb80();
   input += synapse0x30cf610();
   input += synapse0x30cf650();
   input += synapse0x30cfcd0();
   input += synapse0x30cfd10();
   input += synapse0x30cfd50();
   input += synapse0x30cfd90();
   input += synapse0x30cfdd0();
   input += synapse0x30cfe10();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30cf480() {
   double input = input0x30cf480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30cfe50() {
   double input = -0.551993;
   input += synapse0x30d0190();
   input += synapse0x30d01d0();
   input += synapse0x30d0210();
   input += synapse0x30d0250();
   input += synapse0x30d0290();
   input += synapse0x30d02d0();
   input += synapse0x30d0310();
   input += synapse0x30d0350();
   input += synapse0x30d0390();
   input += synapse0x30d03d0();
   input += synapse0x30d0410();
   input += synapse0x30d0450();
   input += synapse0x30d0490();
   input += synapse0x30d04d0();
   input += synapse0x30d0510();
   input += synapse0x30d0550();
   input += synapse0x30cffe0();
   input += synapse0x30d0020();
   input += synapse0x30d06a0();
   input += synapse0x30d06e0();
   input += synapse0x30d0720();
   input += synapse0x30d0760();
   input += synapse0x30d07a0();
   input += synapse0x30d07e0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30cfe50() {
   double input = input0x30cfe50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30d0820() {
   double input = -0.327963;
   input += synapse0x30d0b60();
   input += synapse0x30d0ba0();
   input += synapse0x30d0be0();
   input += synapse0x30d0c20();
   input += synapse0x30d0c60();
   input += synapse0x30d0ca0();
   input += synapse0x30d0ce0();
   input += synapse0x30d0d20();
   input += synapse0x30d0d60();
   input += synapse0x30d0da0();
   input += synapse0x30d0de0();
   input += synapse0x30d0e20();
   input += synapse0x30d0e60();
   input += synapse0x30d0ea0();
   input += synapse0x30d0ee0();
   input += synapse0x30d0f20();
   input += synapse0x30d09b0();
   input += synapse0x30d09f0();
   input += synapse0x30d1070();
   input += synapse0x30d10b0();
   input += synapse0x30d10f0();
   input += synapse0x30d1130();
   input += synapse0x30d1170();
   input += synapse0x30d11b0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30d0820() {
   double input = input0x30d0820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30d11f0() {
   double input = 0.276627;
   input += synapse0x30d1530();
   input += synapse0x30d1570();
   input += synapse0x30d15b0();
   input += synapse0x30d15f0();
   input += synapse0x30d1630();
   input += synapse0x30d1670();
   input += synapse0x30d16b0();
   input += synapse0x30d16f0();
   input += synapse0x30d1730();
   input += synapse0x30d1770();
   input += synapse0x30d17b0();
   input += synapse0x30d17f0();
   input += synapse0x30d1830();
   input += synapse0x30d1870();
   input += synapse0x30d18b0();
   input += synapse0x30d18f0();
   input += synapse0x30d1380();
   input += synapse0x30d13c0();
   input += synapse0x30d1a40();
   input += synapse0x30d1a80();
   input += synapse0x30d1ac0();
   input += synapse0x30d1b00();
   input += synapse0x30d1b40();
   input += synapse0x30d1b80();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30d11f0() {
   double input = input0x30d11f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30d1bc0() {
   double input = -0.41061;
   input += synapse0x30d1f00();
   input += synapse0x30d1f40();
   input += synapse0x30d1f80();
   input += synapse0x30d1fc0();
   input += synapse0x30d2000();
   input += synapse0x30d2040();
   input += synapse0x30d2080();
   input += synapse0x30d20c0();
   input += synapse0x30d2100();
   input += synapse0x30d2140();
   input += synapse0x30d2180();
   input += synapse0x30d21c0();
   input += synapse0x30d2200();
   input += synapse0x30d2240();
   input += synapse0x30d2280();
   input += synapse0x30d22c0();
   input += synapse0x30d1d50();
   input += synapse0x30d1d90();
   input += synapse0x30d2410();
   input += synapse0x30d2450();
   input += synapse0x30d2490();
   input += synapse0x30d24d0();
   input += synapse0x30d2510();
   input += synapse0x30d2550();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30d1bc0() {
   double input = input0x30d1bc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30d2590() {
   double input = 0.0881976;
   input += synapse0x30bb000();
   input += synapse0x30bb040();
   input += synapse0x30bb080();
   input += synapse0x30bb0c0();
   input += synapse0x30bb100();
   input += synapse0x30bb140();
   input += synapse0x30bb180();
   input += synapse0x30bb1c0();
   input += synapse0x30d2ce0();
   input += synapse0x30d2d20();
   input += synapse0x30d2d60();
   input += synapse0x30d2da0();
   input += synapse0x30d2de0();
   input += synapse0x30d2e20();
   input += synapse0x30d2e60();
   input += synapse0x30d2ea0();
   input += synapse0x30d2720();
   input += synapse0x30d2760();
   input += synapse0x30d2ff0();
   input += synapse0x30d3030();
   input += synapse0x30d3070();
   input += synapse0x30d30b0();
   input += synapse0x30d30f0();
   input += synapse0x30d3130();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30d2590() {
   double input = input0x30d2590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30d3170() {
   double input = -0.194711;
   input += synapse0x30d34b0();
   input += synapse0x30d34f0();
   input += synapse0x30d3530();
   input += synapse0x30d3570();
   input += synapse0x30d35b0();
   input += synapse0x30d35f0();
   input += synapse0x30d3630();
   input += synapse0x30d3670();
   input += synapse0x30d36b0();
   input += synapse0x30d36f0();
   input += synapse0x30d3730();
   input += synapse0x30d3770();
   input += synapse0x30d37b0();
   input += synapse0x30d37f0();
   input += synapse0x30d3830();
   input += synapse0x30d3870();
   input += synapse0x30d3300();
   input += synapse0x30d3340();
   input += synapse0x30d39c0();
   input += synapse0x30d3a00();
   input += synapse0x30d3a40();
   input += synapse0x30d3a80();
   input += synapse0x30d3ac0();
   input += synapse0x30d3b00();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30d3170() {
   double input = input0x30d3170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30d3b40() {
   double input = -1.63589;
   input += synapse0x30d3e80();
   input += synapse0x30d3ec0();
   input += synapse0x30d3f00();
   input += synapse0x30d3f40();
   input += synapse0x30d3f80();
   input += synapse0x30d3fc0();
   input += synapse0x30d4000();
   input += synapse0x30d4040();
   input += synapse0x30d4080();
   input += synapse0x30d40c0();
   input += synapse0x30d4100();
   input += synapse0x30d4140();
   input += synapse0x30d4180();
   input += synapse0x30d41c0();
   input += synapse0x30d4200();
   input += synapse0x30d4240();
   input += synapse0x30d3cd0();
   input += synapse0x30d3d10();
   input += synapse0x30c4840();
   input += synapse0x30c4880();
   input += synapse0x30c48c0();
   input += synapse0x30c4900();
   input += synapse0x30c4940();
   input += synapse0x30c4980();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30d3b40() {
   double input = input0x30d3b40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30c49c0() {
   double input = 0.195994;
   input += synapse0x30c4d00();
   input += synapse0x30c4d40();
   input += synapse0x30c4d80();
   input += synapse0x30c4dc0();
   input += synapse0x30c4e00();
   input += synapse0x30c4e40();
   input += synapse0x30c4e80();
   input += synapse0x30c4ec0();
   input += synapse0x30c4f00();
   input += synapse0x30c4f40();
   input += synapse0x30c4f80();
   input += synapse0x30c4fc0();
   input += synapse0x30c5000();
   input += synapse0x30c5040();
   input += synapse0x30c5080();
   input += synapse0x30c50c0();
   input += synapse0x30c4b50();
   input += synapse0x30c4b90();
   input += synapse0x30c5210();
   input += synapse0x30c5250();
   input += synapse0x30c5290();
   input += synapse0x30c52d0();
   input += synapse0x30c5310();
   input += synapse0x30c5350();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30c49c0() {
   double input = input0x30c49c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30c5390() {
   double input = 0.15027;
   input += synapse0x30c56d0();
   input += synapse0x30c5710();
   input += synapse0x30c5750();
   input += synapse0x30c5790();
   input += synapse0x30c57d0();
   input += synapse0x30c5810();
   input += synapse0x30c5850();
   input += synapse0x30c5890();
   input += synapse0x30c58d0();
   input += synapse0x30c5910();
   input += synapse0x30c5950();
   input += synapse0x30c5990();
   input += synapse0x30c59d0();
   input += synapse0x30c5a10();
   input += synapse0x30c5a50();
   input += synapse0x30c5a90();
   input += synapse0x30c5520();
   input += synapse0x30c5560();
   input += synapse0x30c5be0();
   input += synapse0x30c5c20();
   input += synapse0x30c5c60();
   input += synapse0x30c5ca0();
   input += synapse0x30c5ce0();
   input += synapse0x30c5d20();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30c5390() {
   double input = input0x30c5390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30c5d60() {
   double input = -0.0407747;
   input += synapse0x30c60a0();
   input += synapse0x30c60e0();
   input += synapse0x30c6120();
   input += synapse0x30c6160();
   input += synapse0x30c61a0();
   input += synapse0x30c61e0();
   input += synapse0x30c6220();
   input += synapse0x30c6260();
   input += synapse0x30c62a0();
   input += synapse0x30c62e0();
   input += synapse0x30c6320();
   input += synapse0x30c6360();
   input += synapse0x30c63a0();
   input += synapse0x30c63e0();
   input += synapse0x30c6420();
   input += synapse0x30c6460();
   input += synapse0x30c5ef0();
   input += synapse0x30c5f30();
   input += synapse0x30c65b0();
   input += synapse0x30c65f0();
   input += synapse0x30c6630();
   input += synapse0x30c6670();
   input += synapse0x30c66b0();
   input += synapse0x30c66f0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30c5d60() {
   double input = input0x30c5d60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30d83a0() {
   double input = -0.0961368;
   input += synapse0x30d85c0();
   input += synapse0x30d8600();
   input += synapse0x30d8640();
   input += synapse0x30d8680();
   input += synapse0x30d86c0();
   input += synapse0x30d8700();
   input += synapse0x30d8740();
   input += synapse0x30d8780();
   input += synapse0x30d87c0();
   input += synapse0x30d8800();
   input += synapse0x30d8840();
   input += synapse0x30d8880();
   input += synapse0x30d88c0();
   input += synapse0x30d8900();
   input += synapse0x30d8940();
   input += synapse0x30d8980();
   input += synapse0x30c6730();
   input += synapse0x30c6770();
   input += synapse0x30d8ad0();
   input += synapse0x30d8b10();
   input += synapse0x30d8b50();
   input += synapse0x30d8b90();
   input += synapse0x30d8bd0();
   input += synapse0x30d8c10();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30d83a0() {
   double input = input0x30d83a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30d8c50() {
   double input = -1.78377;
   input += synapse0x30d8f90();
   input += synapse0x30d8fd0();
   input += synapse0x30d9010();
   input += synapse0x30d9050();
   input += synapse0x30d9090();
   input += synapse0x30d90d0();
   input += synapse0x30d9110();
   input += synapse0x30d9150();
   input += synapse0x30d9190();
   input += synapse0x30d91d0();
   input += synapse0x30d9210();
   input += synapse0x30d9250();
   input += synapse0x30d9290();
   input += synapse0x30d92d0();
   input += synapse0x30d9310();
   input += synapse0x30d9350();
   input += synapse0x30d8de0();
   input += synapse0x30d8e20();
   input += synapse0x30d94a0();
   input += synapse0x30d94e0();
   input += synapse0x30d9520();
   input += synapse0x30d9560();
   input += synapse0x30d95a0();
   input += synapse0x30d95e0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30d8c50() {
   double input = input0x30d8c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30d9620() {
   double input = -0.198744;
   input += synapse0x30d9960();
   input += synapse0x30d99a0();
   input += synapse0x30d99e0();
   input += synapse0x30d9a20();
   input += synapse0x30d9a60();
   input += synapse0x30d9aa0();
   input += synapse0x30d9ae0();
   input += synapse0x30d9b20();
   input += synapse0x30d9b60();
   input += synapse0x30d9ba0();
   input += synapse0x30d9be0();
   input += synapse0x30d9c20();
   input += synapse0x30d9c60();
   input += synapse0x30d9ca0();
   input += synapse0x30d9ce0();
   input += synapse0x30d9d20();
   input += synapse0x30d97b0();
   input += synapse0x30d97f0();
   input += synapse0x30d9e70();
   input += synapse0x30d9eb0();
   input += synapse0x30d9ef0();
   input += synapse0x30d9f30();
   input += synapse0x30d9f70();
   input += synapse0x30d9fb0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30d9620() {
   double input = input0x30d9620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30d9ff0() {
   double input = 0.683753;
   input += synapse0x30da330();
   input += synapse0x30da370();
   input += synapse0x30da3b0();
   input += synapse0x30da3f0();
   input += synapse0x30da430();
   input += synapse0x30da470();
   input += synapse0x30da4b0();
   input += synapse0x30da4f0();
   input += synapse0x30da530();
   input += synapse0x30da570();
   input += synapse0x30da5b0();
   input += synapse0x30da5f0();
   input += synapse0x30da630();
   input += synapse0x30da670();
   input += synapse0x30da6b0();
   input += synapse0x30da6f0();
   input += synapse0x30da180();
   input += synapse0x30da1c0();
   input += synapse0x30da840();
   input += synapse0x30da880();
   input += synapse0x30da8c0();
   input += synapse0x30da900();
   input += synapse0x30da940();
   input += synapse0x30da980();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30d9ff0() {
   double input = input0x30d9ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30e11f0() {
   double input = 0.262866;
   input += synapse0x30b6f20();
   input += synapse0x30b6f60();
   input += synapse0x30b8430();
   input += synapse0x30b8470();
   input += synapse0x30b8e00();
   input += synapse0x30b8e40();
   input += synapse0x30b9bd0();
   input += synapse0x30b9c10();
   input += synapse0x30ba5a0();
   input += synapse0x30ba5e0();
   input += synapse0x30baf70();
   input += synapse0x30bafb0();
   input += synapse0x30bba50();
   input += synapse0x30bba90();
   input += synapse0x30bc420();
   input += synapse0x30bc460();
   input += synapse0x30b9500();
   input += synapse0x30b9540();
   input += synapse0x30bdfd0();
   input += synapse0x30be010();
   input += synapse0x30be9a0();
   input += synapse0x30be9e0();
   input += synapse0x30bf370();
   input += synapse0x30bf3b0();
   input += synapse0x30bfd40();
   input += synapse0x30bfd80();
   input += synapse0x30b3eb0();
   input += synapse0x30b3ef0();
   input += synapse0x30c1e30();
   input += synapse0x30c1e70();
   input += synapse0x30c2800();
   input += synapse0x30c2840();
   input += synapse0x30c31d0();
   input += synapse0x30c3210();
   input += synapse0x30c3ba0();
   input += synapse0x30c3be0();
   input += synapse0x30c4570();
   input += synapse0x30c45b0();
   input += synapse0x30bd0c0();
   input += synapse0x30bd100();
   input += synapse0x30c6970();
   input += synapse0x30c69b0();
   input += synapse0x30c7300();
   input += synapse0x30c7340();
   input += synapse0x30c7cd0();
   input += synapse0x30c7d10();
   input += synapse0x30c86a0();
   input += synapse0x30c86e0();
   input += synapse0x30c9070();
   input += synapse0x30c90b0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30e11f0() {
   double input = input0x30e11f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30e1590() {
   double input = -0.377918;
   input += synapse0x30cb7b0();
   input += synapse0x30cb7f0();
   input += synapse0x30c0d70();
   input += synapse0x30c0db0();
   input += synapse0x30ce390();
   input += synapse0x30ce3d0();
   input += synapse0x30ced60();
   input += synapse0x30ceda0();
   input += synapse0x30cf730();
   input += synapse0x30cf770();
   input += synapse0x30d0100();
   input += synapse0x30d0140();
   input += synapse0x30d0ad0();
   input += synapse0x30d0b10();
   input += synapse0x30d14a0();
   input += synapse0x30d14e0();
   input += synapse0x30d1e70();
   input += synapse0x30d1eb0();
   input += synapse0x30d2840();
   input += synapse0x30d2880();
   input += synapse0x30d3420();
   input += synapse0x30d3460();
   input += synapse0x30d3df0();
   input += synapse0x30d3e30();
   input += synapse0x30c4c70();
   input += synapse0x30c4cb0();
   input += synapse0x30c5640();
   input += synapse0x30c5680();
   input += synapse0x30c6010();
   input += synapse0x30c6050();
   input += synapse0x30d8530();
   input += synapse0x30d8570();
   input += synapse0x30d8f00();
   input += synapse0x30d8f40();
   input += synapse0x30d98d0();
   input += synapse0x30d9910();
   input += synapse0x30da2a0();
   input += synapse0x30da2e0();
   input += synapse0x30b6190();
   input += synapse0x30b61d0();
   input += synapse0x30c9a40();
   input += synapse0x30c9a80();
   input += synapse0x30da9c0();
   input += synapse0x30daa00();
   input += synapse0x30daa40();
   input += synapse0x30daa80();
   input += synapse0x30e1930();
   input += synapse0x30e1970();
   input += synapse0x30e19b0();
   input += synapse0x30e19f0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30e1590() {
   double input = input0x30e1590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30e1a30() {
   double input = -1.12454;
   input += synapse0x30e1d70();
   input += synapse0x30e1db0();
   input += synapse0x30e1df0();
   input += synapse0x30e1e30();
   input += synapse0x30e1e70();
   input += synapse0x30e1eb0();
   input += synapse0x30e1ef0();
   input += synapse0x30e1f30();
   input += synapse0x30e1f70();
   input += synapse0x30e1fb0();
   input += synapse0x30e1ff0();
   input += synapse0x30e2030();
   input += synapse0x30e2070();
   input += synapse0x30e20b0();
   input += synapse0x30e20f0();
   input += synapse0x30e2130();
   input += synapse0x30e1bc0();
   input += synapse0x30e1c00();
   input += synapse0x30e2280();
   input += synapse0x30e22c0();
   input += synapse0x30e2300();
   input += synapse0x30e2340();
   input += synapse0x30e2380();
   input += synapse0x30e23c0();
   input += synapse0x30e2400();
   input += synapse0x30e2440();
   input += synapse0x30e2480();
   input += synapse0x30e24c0();
   input += synapse0x30e2500();
   input += synapse0x30e2540();
   input += synapse0x30e2580();
   input += synapse0x30e25c0();
   input += synapse0x30e2170();
   input += synapse0x30e21b0();
   input += synapse0x30e21f0();
   input += synapse0x30e2230();
   input += synapse0x30e2810();
   input += synapse0x30e2850();
   input += synapse0x30e2890();
   input += synapse0x30e28d0();
   input += synapse0x30e2910();
   input += synapse0x30e2950();
   input += synapse0x30e2990();
   input += synapse0x30e29d0();
   input += synapse0x30e2a10();
   input += synapse0x30e2a50();
   input += synapse0x30e2a90();
   input += synapse0x30e2ad0();
   input += synapse0x30e2b10();
   input += synapse0x30e2b50();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30e1a30() {
   double input = input0x30e1a30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30e2b90() {
   double input = 2.18774;
   input += synapse0x30e2ed0();
   input += synapse0x30e2f10();
   input += synapse0x30e2f50();
   input += synapse0x30e2f90();
   input += synapse0x30e2fd0();
   input += synapse0x30e3010();
   input += synapse0x30e3050();
   input += synapse0x30e3090();
   input += synapse0x30e30d0();
   input += synapse0x30e3110();
   input += synapse0x30e3150();
   input += synapse0x30e3190();
   input += synapse0x30e31d0();
   input += synapse0x30e3210();
   input += synapse0x30e3250();
   input += synapse0x30e3290();
   input += synapse0x30e2d20();
   input += synapse0x30e2d60();
   input += synapse0x30e33e0();
   input += synapse0x30e3420();
   input += synapse0x30e3460();
   input += synapse0x30e34a0();
   input += synapse0x30e34e0();
   input += synapse0x30e3520();
   input += synapse0x30e3560();
   input += synapse0x30e35a0();
   input += synapse0x30e35e0();
   input += synapse0x30e3620();
   input += synapse0x30e3660();
   input += synapse0x30e36a0();
   input += synapse0x30e36e0();
   input += synapse0x30e3720();
   input += synapse0x30e32d0();
   input += synapse0x30e3310();
   input += synapse0x30e3350();
   input += synapse0x30e3390();
   input += synapse0x30e3970();
   input += synapse0x30e39b0();
   input += synapse0x30e39f0();
   input += synapse0x30e3a30();
   input += synapse0x30e3a70();
   input += synapse0x30e3ab0();
   input += synapse0x30e3af0();
   input += synapse0x30e3b30();
   input += synapse0x30e3b70();
   input += synapse0x30e3bb0();
   input += synapse0x30e3bf0();
   input += synapse0x30e3c30();
   input += synapse0x30e3c70();
   input += synapse0x30e3cb0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30e2b90() {
   double input = input0x30e2b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30e3cf0() {
   double input = -0.733313;
   input += synapse0x30e4030();
   input += synapse0x30e4070();
   input += synapse0x30e40b0();
   input += synapse0x30e40f0();
   input += synapse0x30e4130();
   input += synapse0x30e4170();
   input += synapse0x30e41b0();
   input += synapse0x30e41f0();
   input += synapse0x30e4230();
   input += synapse0x30e4270();
   input += synapse0x30e42b0();
   input += synapse0x30e42f0();
   input += synapse0x30e4330();
   input += synapse0x30e4370();
   input += synapse0x30e43b0();
   input += synapse0x30e43f0();
   input += synapse0x30e3e80();
   input += synapse0x30e3ec0();
   input += synapse0x30e4540();
   input += synapse0x30e4580();
   input += synapse0x30e45c0();
   input += synapse0x30e4600();
   input += synapse0x30e4640();
   input += synapse0x30e4680();
   input += synapse0x30e46c0();
   input += synapse0x30e4700();
   input += synapse0x30e4740();
   input += synapse0x30e4780();
   input += synapse0x30e47c0();
   input += synapse0x30e4800();
   input += synapse0x30e4840();
   input += synapse0x30e4880();
   input += synapse0x30e4430();
   input += synapse0x30e4470();
   input += synapse0x30e44b0();
   input += synapse0x30e44f0();
   input += synapse0x30e4ad0();
   input += synapse0x30e4b10();
   input += synapse0x30e4b50();
   input += synapse0x30e4b90();
   input += synapse0x30e4bd0();
   input += synapse0x30e4c10();
   input += synapse0x30e4c50();
   input += synapse0x30e4c90();
   input += synapse0x30e4cd0();
   input += synapse0x30e4d10();
   input += synapse0x30e4d50();
   input += synapse0x30e4d90();
   input += synapse0x30e4dd0();
   input += synapse0x30e4e10();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30e3cf0() {
   double input = input0x30e3cf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x30e4e50() {
   double input = 6.18976;
   input += synapse0x30b5f30();
   input += synapse0x30e5070();
   input += synapse0x30e50b0();
   input += synapse0x30e50f0();
   input += synapse0x30e5130();
   return input;
}

double NNfunction_sb_cLdL::neuron0x30e4e50() {
   double input = input0x30e4e50();
   return (input * 1)+0;
}

double NNfunction_sb_cLdL::synapse0x2e7a8c0() {
   return (neuron0x30b0f10()*-0.727932);
}

double NNfunction_sb_cLdL::synapse0x30b0dd0() {
   return (neuron0x30b1250()*-0.144035);
}

double NNfunction_sb_cLdL::synapse0x30b0e10() {
   return (neuron0x30b1590()*-0.31188);
}

double NNfunction_sb_cLdL::synapse0x30b6220() {
   return (neuron0x30b18d0()*0.860182);
}

double NNfunction_sb_cLdL::synapse0x30b6260() {
   return (neuron0x30b1c10()*0.314483);
}

double NNfunction_sb_cLdL::synapse0x30b62a0() {
   return (neuron0x30b1f50()*-0.0357668);
}

double NNfunction_sb_cLdL::synapse0x30b62e0() {
   return (neuron0x30b2290()*0.0826459);
}

double NNfunction_sb_cLdL::synapse0x30b6320() {
   return (neuron0x30b25d0()*0.559778);
}

double NNfunction_sb_cLdL::synapse0x30b6360() {
   return (neuron0x30b2910()*0.429963);
}

double NNfunction_sb_cLdL::synapse0x30b63a0() {
   return (neuron0x30b2c50()*0.24978);
}

double NNfunction_sb_cLdL::synapse0x30b63e0() {
   return (neuron0x30b2f90()*0.0255602);
}

double NNfunction_sb_cLdL::synapse0x30b6420() {
   return (neuron0x30b32d0()*-0.197766);
}

double NNfunction_sb_cLdL::synapse0x30b6460() {
   return (neuron0x30b3610()*-0.967072);
}

double NNfunction_sb_cLdL::synapse0x30b64a0() {
   return (neuron0x30b3950()*0.293555);
}

double NNfunction_sb_cLdL::synapse0x30b64e0() {
   return (neuron0x30b3c90()*0.362702);
}

double NNfunction_sb_cLdL::synapse0x30b6520() {
   return (neuron0x30b3fd0()*-0.308939);
}

double NNfunction_sb_cLdL::synapse0x30b0d40() {
   return (neuron0x30b4310()*0.414029);
}

double NNfunction_sb_cLdL::synapse0x30b0d80() {
   return (neuron0x30b4870()*-0.11959);
}

double NNfunction_sb_cLdL::synapse0x2e6c0d0() {
   return (neuron0x30b4a90()*-0.0524239);
}

double NNfunction_sb_cLdL::synapse0x2e6c110() {
   return (neuron0x30b4dd0()*0.0195166);
}

double NNfunction_sb_cLdL::synapse0x30b6780() {
   return (neuron0x30b5110()*0.0115056);
}

double NNfunction_sb_cLdL::synapse0x30b67c0() {
   return (neuron0x30b5450()*-0.127573);
}

double NNfunction_sb_cLdL::synapse0x30b6800() {
   return (neuron0x30b5790()*0.233438);
}

double NNfunction_sb_cLdL::synapse0x30b6840() {
   return (neuron0x30b5ad0()*0.160863);
}

double NNfunction_sb_cLdL::synapse0x30b6bc0() {
   return (neuron0x30b0f10()*0.0370282);
}

double NNfunction_sb_cLdL::synapse0x30b6c00() {
   return (neuron0x30b1250()*0.0103173);
}

double NNfunction_sb_cLdL::synapse0x30b6c40() {
   return (neuron0x30b1590()*-0.00260394);
}

double NNfunction_sb_cLdL::synapse0x30b6c80() {
   return (neuron0x30b18d0()*-5.26958);
}

double NNfunction_sb_cLdL::synapse0x30b6cc0() {
   return (neuron0x30b1c10()*0.00997895);
}

double NNfunction_sb_cLdL::synapse0x30b6d00() {
   return (neuron0x30b1f50()*0.0214536);
}

double NNfunction_sb_cLdL::synapse0x30b6d40() {
   return (neuron0x30b2290()*0.0131699);
}

double NNfunction_sb_cLdL::synapse0x30b6d80() {
   return (neuron0x30b25d0()*0.00822308);
}

double NNfunction_sb_cLdL::synapse0x30b6dc0() {
   return (neuron0x30b2910()*0.00034952);
}

double NNfunction_sb_cLdL::synapse0x30b6670() {
   return (neuron0x30b2c50()*-0.0111523);
}

double NNfunction_sb_cLdL::synapse0x30b66b0() {
   return (neuron0x30b2f90()*-0.00551819);
}

double NNfunction_sb_cLdL::synapse0x30b66f0() {
   return (neuron0x30b32d0()*0.224713);
}

double NNfunction_sb_cLdL::synapse0x30b6730() {
   return (neuron0x30b3610()*0.17809);
}

double NNfunction_sb_cLdL::synapse0x30b7010() {
   return (neuron0x30b3950()*0.000684009);
}

double NNfunction_sb_cLdL::synapse0x30b7050() {
   return (neuron0x30b3c90()*-0.0190759);
}

double NNfunction_sb_cLdL::synapse0x30b7090() {
   return (neuron0x30b3fd0()*-0.0316958);
}

double NNfunction_sb_cLdL::synapse0x30b6a10() {
   return (neuron0x30b4310()*-0.0213057);
}

double NNfunction_sb_cLdL::synapse0x30b6a50() {
   return (neuron0x30b4870()*-0.00787084);
}

double NNfunction_sb_cLdL::synapse0x30b71e0() {
   return (neuron0x30b4a90()*-0.00774871);
}

double NNfunction_sb_cLdL::synapse0x30b7220() {
   return (neuron0x30b4dd0()*-0.0165922);
}

double NNfunction_sb_cLdL::synapse0x30b7260() {
   return (neuron0x30b5110()*0.0280277);
}

double NNfunction_sb_cLdL::synapse0x30b72a0() {
   return (neuron0x30b5450()*0.00600352);
}

double NNfunction_sb_cLdL::synapse0x30b72e0() {
   return (neuron0x30b5790()*-0.00860402);
}

double NNfunction_sb_cLdL::synapse0x30b7320() {
   return (neuron0x30b5ad0()*-0.0196561);
}

double NNfunction_sb_cLdL::synapse0x30b76a0() {
   return (neuron0x30b0f10()*-0.616025);
}

double NNfunction_sb_cLdL::synapse0x30b76e0() {
   return (neuron0x30b1250()*0.231805);
}

double NNfunction_sb_cLdL::synapse0x30b7720() {
   return (neuron0x30b1590()*-0.230541);
}

double NNfunction_sb_cLdL::synapse0x30b7760() {
   return (neuron0x30b18d0()*0.502421);
}

double NNfunction_sb_cLdL::synapse0x30b77a0() {
   return (neuron0x30b1c10()*0.0925362);
}

double NNfunction_sb_cLdL::synapse0x30b77e0() {
   return (neuron0x30b1f50()*0.170021);
}

double NNfunction_sb_cLdL::synapse0x30b7820() {
   return (neuron0x30b2290()*-0.482811);
}

double NNfunction_sb_cLdL::synapse0x30b7860() {
   return (neuron0x30b25d0()*-0.54113);
}

double NNfunction_sb_cLdL::synapse0x30b78a0() {
   return (neuron0x30b2910()*0.104744);
}

double NNfunction_sb_cLdL::synapse0x30b78e0() {
   return (neuron0x30b2c50()*0.0863916);
}

double NNfunction_sb_cLdL::synapse0x30b7920() {
   return (neuron0x30b2f90()*0.0504356);
}

double NNfunction_sb_cLdL::synapse0x30b7960() {
   return (neuron0x30b32d0()*-0.173023);
}

double NNfunction_sb_cLdL::synapse0x30b79a0() {
   return (neuron0x30b3610()*0.746361);
}

double NNfunction_sb_cLdL::synapse0x30b79e0() {
   return (neuron0x30b3950()*0.237652);
}

double NNfunction_sb_cLdL::synapse0x30b7a20() {
   return (neuron0x30b3c90()*-0.54829);
}

double NNfunction_sb_cLdL::synapse0x30b7a60() {
   return (neuron0x30b3fd0()*-0.328121);
}

double NNfunction_sb_cLdL::synapse0x30b74f0() {
   return (neuron0x30b4310()*-0.093693);
}

double NNfunction_sb_cLdL::synapse0x30b7530() {
   return (neuron0x30b4870()*-0.897087);
}

double NNfunction_sb_cLdL::synapse0x2e79fd0() {
   return (neuron0x30b4a90()*0.0200856);
}

double NNfunction_sb_cLdL::synapse0x2e7a010() {
   return (neuron0x30b4dd0()*-0.168125);
}

double NNfunction_sb_cLdL::synapse0x309ffa0() {
   return (neuron0x30b5110()*0.364897);
}

double NNfunction_sb_cLdL::synapse0x309ffe0() {
   return (neuron0x30b5450()*-0.00102708);
}

double NNfunction_sb_cLdL::synapse0x30a0020() {
   return (neuron0x30b5790()*0.357216);
}

double NNfunction_sb_cLdL::synapse0x30b0e50() {
   return (neuron0x30b5ad0()*0.271759);
}

double NNfunction_sb_cLdL::synapse0x30b6fb0() {
   return (neuron0x30b0f10()*-0.0190558);
}

double NNfunction_sb_cLdL::synapse0x30b0e90() {
   return (neuron0x30b1250()*0.0126757);
}

double NNfunction_sb_cLdL::synapse0x30b0ed0() {
   return (neuron0x30b1590()*0.0798326);
}

double NNfunction_sb_cLdL::synapse0x30b7bb0() {
   return (neuron0x30b18d0()*-2.28349);
}

double NNfunction_sb_cLdL::synapse0x30b7bf0() {
   return (neuron0x30b1c10()*-0.0278114);
}

double NNfunction_sb_cLdL::synapse0x30b7c30() {
   return (neuron0x30b1f50()*-0.0147836);
}

double NNfunction_sb_cLdL::synapse0x30b7c70() {
   return (neuron0x30b2290()*-0.026337);
}

double NNfunction_sb_cLdL::synapse0x30b7cb0() {
   return (neuron0x30b25d0()*0.0410217);
}

double NNfunction_sb_cLdL::synapse0x30b7cf0() {
   return (neuron0x30b2910()*-0.00765741);
}

double NNfunction_sb_cLdL::synapse0x30b7d30() {
   return (neuron0x30b2c50()*-0.0308267);
}

double NNfunction_sb_cLdL::synapse0x30b7d70() {
   return (neuron0x30b2f90()*-0.00142578);
}

double NNfunction_sb_cLdL::synapse0x30b7db0() {
   return (neuron0x30b32d0()*-0.0388581);
}

double NNfunction_sb_cLdL::synapse0x30b7df0() {
   return (neuron0x30b3610()*-0.164668);
}

double NNfunction_sb_cLdL::synapse0x30b7e30() {
   return (neuron0x30b3950()*0.0144828);
}

double NNfunction_sb_cLdL::synapse0x30b7e70() {
   return (neuron0x30b3c90()*-0.00335239);
}

double NNfunction_sb_cLdL::synapse0x30b7eb0() {
   return (neuron0x30b3fd0()*0.0198526);
}

double NNfunction_sb_cLdL::synapse0x30b6e00() {
   return (neuron0x30b4310()*0.018371);
}

double NNfunction_sb_cLdL::synapse0x30b6e40() {
   return (neuron0x30b4870()*-0.00438587);
}

double NNfunction_sb_cLdL::synapse0x30b8000() {
   return (neuron0x30b4a90()*0.0131603);
}

double NNfunction_sb_cLdL::synapse0x30b8040() {
   return (neuron0x30b4dd0()*0.0284039);
}

double NNfunction_sb_cLdL::synapse0x30b8080() {
   return (neuron0x30b5110()*-0.0277524);
}

double NNfunction_sb_cLdL::synapse0x30b80c0() {
   return (neuron0x30b5450()*-0.0065895);
}

double NNfunction_sb_cLdL::synapse0x30b8100() {
   return (neuron0x30b5790()*-0.00390188);
}

double NNfunction_sb_cLdL::synapse0x30b8140() {
   return (neuron0x30b5ad0()*-0.00605987);
}

double NNfunction_sb_cLdL::synapse0x30b84c0() {
   return (neuron0x30b0f10()*0.856197);
}

double NNfunction_sb_cLdL::synapse0x30b8500() {
   return (neuron0x30b1250()*0.148469);
}

double NNfunction_sb_cLdL::synapse0x30b8540() {
   return (neuron0x30b1590()*-0.991922);
}

double NNfunction_sb_cLdL::synapse0x30b8580() {
   return (neuron0x30b18d0()*0.0370255);
}

double NNfunction_sb_cLdL::synapse0x30b85c0() {
   return (neuron0x30b1c10()*-0.369318);
}

double NNfunction_sb_cLdL::synapse0x30b8600() {
   return (neuron0x30b1f50()*0.370299);
}

double NNfunction_sb_cLdL::synapse0x30b8640() {
   return (neuron0x30b2290()*-1.02435);
}

double NNfunction_sb_cLdL::synapse0x30b8680() {
   return (neuron0x30b25d0()*0.0852945);
}

double NNfunction_sb_cLdL::synapse0x30b86c0() {
   return (neuron0x30b2910()*0.110199);
}

double NNfunction_sb_cLdL::synapse0x30b8700() {
   return (neuron0x30b2c50()*0.386364);
}

double NNfunction_sb_cLdL::synapse0x30b8740() {
   return (neuron0x30b2f90()*-0.399301);
}

double NNfunction_sb_cLdL::synapse0x30b8780() {
   return (neuron0x30b32d0()*-0.810222);
}

double NNfunction_sb_cLdL::synapse0x30b87c0() {
   return (neuron0x30b3610()*-0.677247);
}

double NNfunction_sb_cLdL::synapse0x30b8800() {
   return (neuron0x30b3950()*0.0537485);
}

double NNfunction_sb_cLdL::synapse0x30b8840() {
   return (neuron0x30b3c90()*-0.231295);
}

double NNfunction_sb_cLdL::synapse0x30b8880() {
   return (neuron0x30b3fd0()*-0.627175);
}

double NNfunction_sb_cLdL::synapse0x30b8310() {
   return (neuron0x30b4310()*0.25808);
}

double NNfunction_sb_cLdL::synapse0x30b8350() {
   return (neuron0x30b4870()*0.348285);
}

double NNfunction_sb_cLdL::synapse0x30b89d0() {
   return (neuron0x30b4a90()*0.104482);
}

double NNfunction_sb_cLdL::synapse0x30b8a10() {
   return (neuron0x30b4dd0()*-0.0905521);
}

double NNfunction_sb_cLdL::synapse0x30b8a50() {
   return (neuron0x30b5110()*0.441369);
}

double NNfunction_sb_cLdL::synapse0x30b8a90() {
   return (neuron0x30b5450()*0.222559);
}

double NNfunction_sb_cLdL::synapse0x30b8ad0() {
   return (neuron0x30b5790()*0.118032);
}

double NNfunction_sb_cLdL::synapse0x30b8b10() {
   return (neuron0x30b5ad0()*-0.487326);
}

double NNfunction_sb_cLdL::synapse0x30b8e90() {
   return (neuron0x30b0f10()*0.0514351);
}

double NNfunction_sb_cLdL::synapse0x30b8ed0() {
   return (neuron0x30b1250()*0.0272753);
}

double NNfunction_sb_cLdL::synapse0x30b8f10() {
   return (neuron0x30b1590()*0.0985063);
}

double NNfunction_sb_cLdL::synapse0x30b8f50() {
   return (neuron0x30b18d0()*1.58897);
}

double NNfunction_sb_cLdL::synapse0x30b8f90() {
   return (neuron0x30b1c10()*-0.021251);
}

double NNfunction_sb_cLdL::synapse0x30b8fd0() {
   return (neuron0x30b1f50()*0.028589);
}

double NNfunction_sb_cLdL::synapse0x30b9010() {
   return (neuron0x30b2290()*0.0325565);
}

double NNfunction_sb_cLdL::synapse0x30b9050() {
   return (neuron0x30b25d0()*-0.00492134);
}

double NNfunction_sb_cLdL::synapse0x30b9090() {
   return (neuron0x30b2910()*-0.00291169);
}

double NNfunction_sb_cLdL::synapse0x2e7a320() {
   return (neuron0x30b2c50()*-0.0239432);
}

double NNfunction_sb_cLdL::synapse0x2e7a360() {
   return (neuron0x30b2f90()*0.0152592);
}

double NNfunction_sb_cLdL::synapse0x2e7a3a0() {
   return (neuron0x30b32d0()*0.0959339);
}

double NNfunction_sb_cLdL::synapse0x2e7a3e0() {
   return (neuron0x30b3610()*-0.328942);
}

double NNfunction_sb_cLdL::synapse0x2e7a420() {
   return (neuron0x30b3950()*-0.012479);
}

double NNfunction_sb_cLdL::synapse0x2e7a460() {
   return (neuron0x30b3c90()*0.00287652);
}

double NNfunction_sb_cLdL::synapse0x2e7a4a0() {
   return (neuron0x30b3fd0()*0.01737);
}

double NNfunction_sb_cLdL::synapse0x30b8ce0() {
   return (neuron0x30b4310()*0.00280446);
}

double NNfunction_sb_cLdL::synapse0x30b8d20() {
   return (neuron0x30b4870()*-0.0231166);
}

double NNfunction_sb_cLdL::synapse0x2e7a5f0() {
   return (neuron0x30b4a90()*-0.00902375);
}

double NNfunction_sb_cLdL::synapse0x2e7a630() {
   return (neuron0x30b4dd0()*-0.000670455);
}

double NNfunction_sb_cLdL::synapse0x2e7a670() {
   return (neuron0x30b5110()*0.0176366);
}

double NNfunction_sb_cLdL::synapse0x2e7a6b0() {
   return (neuron0x30b5450()*0.00584931);
}

double NNfunction_sb_cLdL::synapse0x2e7a6f0() {
   return (neuron0x30b5790()*0.0104095);
}

double NNfunction_sb_cLdL::synapse0x30b98e0() {
   return (neuron0x30b5ad0()*-0.00538717);
}

double NNfunction_sb_cLdL::synapse0x30b9c60() {
   return (neuron0x30b0f10()*-0.286773);
}

double NNfunction_sb_cLdL::synapse0x30b9ca0() {
   return (neuron0x30b1250()*0.10051);
}

double NNfunction_sb_cLdL::synapse0x30b9ce0() {
   return (neuron0x30b1590()*0.191721);
}

double NNfunction_sb_cLdL::synapse0x30b9d20() {
   return (neuron0x30b18d0()*0.885759);
}

double NNfunction_sb_cLdL::synapse0x30b9d60() {
   return (neuron0x30b1c10()*0.416214);
}

double NNfunction_sb_cLdL::synapse0x30b9da0() {
   return (neuron0x30b1f50()*-0.647673);
}

double NNfunction_sb_cLdL::synapse0x30b9de0() {
   return (neuron0x30b2290()*0.334921);
}

double NNfunction_sb_cLdL::synapse0x30b9e20() {
   return (neuron0x30b25d0()*-0.745273);
}

double NNfunction_sb_cLdL::synapse0x30b9e60() {
   return (neuron0x30b2910()*-0.579953);
}

double NNfunction_sb_cLdL::synapse0x30b9ea0() {
   return (neuron0x30b2c50()*-0.236342);
}

double NNfunction_sb_cLdL::synapse0x30b9ee0() {
   return (neuron0x30b2f90()*0.22317);
}

double NNfunction_sb_cLdL::synapse0x30b9f20() {
   return (neuron0x30b32d0()*-0.129835);
}

double NNfunction_sb_cLdL::synapse0x30b9f60() {
   return (neuron0x30b3610()*0.237847);
}

double NNfunction_sb_cLdL::synapse0x30b9fa0() {
   return (neuron0x30b3950()*-0.178451);
}

double NNfunction_sb_cLdL::synapse0x30b9fe0() {
   return (neuron0x30b3c90()*-0.688816);
}

double NNfunction_sb_cLdL::synapse0x30ba020() {
   return (neuron0x30b3fd0()*-0.109333);
}

double NNfunction_sb_cLdL::synapse0x30b9ab0() {
   return (neuron0x30b4310()*0.231672);
}

double NNfunction_sb_cLdL::synapse0x30b9af0() {
   return (neuron0x30b4870()*-0.201269);
}

double NNfunction_sb_cLdL::synapse0x30ba170() {
   return (neuron0x30b4a90()*0.152278);
}

double NNfunction_sb_cLdL::synapse0x30ba1b0() {
   return (neuron0x30b4dd0()*0.614646);
}

double NNfunction_sb_cLdL::synapse0x30ba1f0() {
   return (neuron0x30b5110()*-0.731637);
}

double NNfunction_sb_cLdL::synapse0x30ba230() {
   return (neuron0x30b5450()*0.0570676);
}

double NNfunction_sb_cLdL::synapse0x30ba270() {
   return (neuron0x30b5790()*-0.215808);
}

double NNfunction_sb_cLdL::synapse0x30ba2b0() {
   return (neuron0x30b5ad0()*-0.575655);
}

double NNfunction_sb_cLdL::synapse0x30ba630() {
   return (neuron0x30b0f10()*-0.201369);
}

double NNfunction_sb_cLdL::synapse0x30ba670() {
   return (neuron0x30b1250()*0.606651);
}

double NNfunction_sb_cLdL::synapse0x30ba6b0() {
   return (neuron0x30b1590()*-0.432376);
}

double NNfunction_sb_cLdL::synapse0x30ba6f0() {
   return (neuron0x30b18d0()*1.043);
}

double NNfunction_sb_cLdL::synapse0x30ba730() {
   return (neuron0x30b1c10()*0.0939822);
}

double NNfunction_sb_cLdL::synapse0x30ba770() {
   return (neuron0x30b1f50()*0.290659);
}

double NNfunction_sb_cLdL::synapse0x30ba7b0() {
   return (neuron0x30b2290()*0.00678484);
}

double NNfunction_sb_cLdL::synapse0x30ba7f0() {
   return (neuron0x30b25d0()*0.137801);
}

double NNfunction_sb_cLdL::synapse0x30ba830() {
   return (neuron0x30b2910()*0.254887);
}

double NNfunction_sb_cLdL::synapse0x30ba870() {
   return (neuron0x30b2c50()*-0.636024);
}

double NNfunction_sb_cLdL::synapse0x30ba8b0() {
   return (neuron0x30b2f90()*0.0878363);
}

double NNfunction_sb_cLdL::synapse0x30ba8f0() {
   return (neuron0x30b32d0()*0.75082);
}

double NNfunction_sb_cLdL::synapse0x30ba930() {
   return (neuron0x30b3610()*0.200837);
}

double NNfunction_sb_cLdL::synapse0x30ba970() {
   return (neuron0x30b3950()*0.113158);
}

double NNfunction_sb_cLdL::synapse0x30ba9b0() {
   return (neuron0x30b3c90()*-0.271535);
}

double NNfunction_sb_cLdL::synapse0x30ba9f0() {
   return (neuron0x30b3fd0()*0.675511);
}

double NNfunction_sb_cLdL::synapse0x30ba480() {
   return (neuron0x30b4310()*0.331681);
}

double NNfunction_sb_cLdL::synapse0x30ba4c0() {
   return (neuron0x30b4870()*0.22731);
}

double NNfunction_sb_cLdL::synapse0x30bab40() {
   return (neuron0x30b4a90()*0.0381745);
}

double NNfunction_sb_cLdL::synapse0x30bab80() {
   return (neuron0x30b4dd0()*-0.217722);
}

double NNfunction_sb_cLdL::synapse0x30babc0() {
   return (neuron0x30b5110()*0.326996);
}

double NNfunction_sb_cLdL::synapse0x30bac00() {
   return (neuron0x30b5450()*0.223375);
}

double NNfunction_sb_cLdL::synapse0x30bac40() {
   return (neuron0x30b5790()*0.573814);
}

double NNfunction_sb_cLdL::synapse0x30bac80() {
   return (neuron0x30b5ad0()*-0.126525);
}

double NNfunction_sb_cLdL::synapse0x30b4760() {
   return (neuron0x30b0f10()*0.589003);
}

double NNfunction_sb_cLdL::synapse0x30b47a0() {
   return (neuron0x30b1250()*-0.136563);
}

double NNfunction_sb_cLdL::synapse0x30b47e0() {
   return (neuron0x30b1590()*0.319378);
}

double NNfunction_sb_cLdL::synapse0x30b4820() {
   return (neuron0x30b18d0()*0.0184476);
}

double NNfunction_sb_cLdL::synapse0x30bb210() {
   return (neuron0x30b1c10()*0.0240659);
}

double NNfunction_sb_cLdL::synapse0x30bb250() {
   return (neuron0x30b1f50()*-0.017835);
}

double NNfunction_sb_cLdL::synapse0x30bb290() {
   return (neuron0x30b2290()*1.01603);
}

double NNfunction_sb_cLdL::synapse0x30bb2d0() {
   return (neuron0x30b25d0()*0.205399);
}

double NNfunction_sb_cLdL::synapse0x30bb310() {
   return (neuron0x30b2910()*-0.120847);
}

double NNfunction_sb_cLdL::synapse0x30bb350() {
   return (neuron0x30b2c50()*0.324139);
}

double NNfunction_sb_cLdL::synapse0x30bb390() {
   return (neuron0x30b2f90()*0.231832);
}

double NNfunction_sb_cLdL::synapse0x30bb3d0() {
   return (neuron0x30b32d0()*-0.826259);
}

double NNfunction_sb_cLdL::synapse0x30bb410() {
   return (neuron0x30b3610()*-0.083273);
}

double NNfunction_sb_cLdL::synapse0x30bb450() {
   return (neuron0x30b3950()*-0.0814697);
}

double NNfunction_sb_cLdL::synapse0x30bb490() {
   return (neuron0x30b3c90()*1.18253);
}

double NNfunction_sb_cLdL::synapse0x30bb4d0() {
   return (neuron0x30b3fd0()*-0.00328275);
}

double NNfunction_sb_cLdL::synapse0x30bae50() {
   return (neuron0x30b4310()*0.0748669);
}

double NNfunction_sb_cLdL::synapse0x30bae90() {
   return (neuron0x30b4870()*0.728382);
}

double NNfunction_sb_cLdL::synapse0x30bb620() {
   return (neuron0x30b4a90()*0.0202524);
}

double NNfunction_sb_cLdL::synapse0x30bb660() {
   return (neuron0x30b4dd0()*-0.408653);
}

double NNfunction_sb_cLdL::synapse0x30bb6a0() {
   return (neuron0x30b5110()*0.300583);
}

double NNfunction_sb_cLdL::synapse0x30bb6e0() {
   return (neuron0x30b5450()*-0.344276);
}

double NNfunction_sb_cLdL::synapse0x30bb720() {
   return (neuron0x30b5790()*-0.0404316);
}

double NNfunction_sb_cLdL::synapse0x30bb760() {
   return (neuron0x30b5ad0()*-0.724766);
}

double NNfunction_sb_cLdL::synapse0x30bbae0() {
   return (neuron0x30b0f10()*0.00509969);
}

double NNfunction_sb_cLdL::synapse0x30bbb20() {
   return (neuron0x30b1250()*0.058693);
}

double NNfunction_sb_cLdL::synapse0x30bbb60() {
   return (neuron0x30b1590()*-1.32925);
}

double NNfunction_sb_cLdL::synapse0x30bbba0() {
   return (neuron0x30b18d0()*-0.120996);
}

double NNfunction_sb_cLdL::synapse0x30bbbe0() {
   return (neuron0x30b1c10()*-0.00898473);
}

double NNfunction_sb_cLdL::synapse0x30bbc20() {
   return (neuron0x30b1f50()*0.0827717);
}

double NNfunction_sb_cLdL::synapse0x30bbc60() {
   return (neuron0x30b2290()*0.0502698);
}

double NNfunction_sb_cLdL::synapse0x30bbca0() {
   return (neuron0x30b25d0()*-0.0279505);
}

double NNfunction_sb_cLdL::synapse0x30bbce0() {
   return (neuron0x30b2910()*0.00364919);
}

double NNfunction_sb_cLdL::synapse0x30bbd20() {
   return (neuron0x30b2c50()*0.0322613);
}

double NNfunction_sb_cLdL::synapse0x30bbd60() {
   return (neuron0x30b2f90()*0.000752403);
}

double NNfunction_sb_cLdL::synapse0x30bbda0() {
   return (neuron0x30b32d0()*0.162553);
}

double NNfunction_sb_cLdL::synapse0x30bbde0() {
   return (neuron0x30b3610()*0.274214);
}

double NNfunction_sb_cLdL::synapse0x30bbe20() {
   return (neuron0x30b3950()*-0.0963436);
}

double NNfunction_sb_cLdL::synapse0x30bbe60() {
   return (neuron0x30b3c90()*-0.0599108);
}

double NNfunction_sb_cLdL::synapse0x30bbea0() {
   return (neuron0x30b3fd0()*0.0749532);
}

double NNfunction_sb_cLdL::synapse0x30bb930() {
   return (neuron0x30b4310()*-0.105769);
}

double NNfunction_sb_cLdL::synapse0x30bb970() {
   return (neuron0x30b4870()*0.0454319);
}

double NNfunction_sb_cLdL::synapse0x30bbff0() {
   return (neuron0x30b4a90()*0.0138195);
}

double NNfunction_sb_cLdL::synapse0x30bc030() {
   return (neuron0x30b4dd0()*-0.107769);
}

double NNfunction_sb_cLdL::synapse0x30bc070() {
   return (neuron0x30b5110()*-0.0117372);
}

double NNfunction_sb_cLdL::synapse0x30bc0b0() {
   return (neuron0x30b5450()*0.0855758);
}

double NNfunction_sb_cLdL::synapse0x30bc0f0() {
   return (neuron0x30b5790()*0.116816);
}

double NNfunction_sb_cLdL::synapse0x30bc130() {
   return (neuron0x30b5ad0()*0.0318244);
}

double NNfunction_sb_cLdL::synapse0x30bc4b0() {
   return (neuron0x30b0f10()*-0.0105706);
}

double NNfunction_sb_cLdL::synapse0x30bc4f0() {
   return (neuron0x30b1250()*-0.0078562);
}

double NNfunction_sb_cLdL::synapse0x30bc530() {
   return (neuron0x30b1590()*-0.0200523);
}

double NNfunction_sb_cLdL::synapse0x30bc570() {
   return (neuron0x30b18d0()*6.51836);
}

double NNfunction_sb_cLdL::synapse0x30bc5b0() {
   return (neuron0x30b1c10()*-0.00551047);
}

double NNfunction_sb_cLdL::synapse0x30bc5f0() {
   return (neuron0x30b1f50()*0.00221874);
}

double NNfunction_sb_cLdL::synapse0x30bc630() {
   return (neuron0x30b2290()*-0.0230002);
}

double NNfunction_sb_cLdL::synapse0x30bc670() {
   return (neuron0x30b25d0()*-0.0364906);
}

double NNfunction_sb_cLdL::synapse0x30bc6b0() {
   return (neuron0x30b2910()*-0.0102657);
}

double NNfunction_sb_cLdL::synapse0x30bc6f0() {
   return (neuron0x30b2c50()*0.0186645);
}

double NNfunction_sb_cLdL::synapse0x30bc730() {
   return (neuron0x30b2f90()*-0.0398926);
}

double NNfunction_sb_cLdL::synapse0x30bc770() {
   return (neuron0x30b32d0()*0.227342);
}

double NNfunction_sb_cLdL::synapse0x30bc7b0() {
   return (neuron0x30b3610()*0.213962);
}

double NNfunction_sb_cLdL::synapse0x30bc7f0() {
   return (neuron0x30b3950()*-0.00794198);
}

double NNfunction_sb_cLdL::synapse0x30bc830() {
   return (neuron0x30b3c90()*-0.0379219);
}

double NNfunction_sb_cLdL::synapse0x30bc870() {
   return (neuron0x30b3fd0()*-0.0209967);
}

double NNfunction_sb_cLdL::synapse0x30bc300() {
   return (neuron0x30b4310()*-0.00229468);
}

double NNfunction_sb_cLdL::synapse0x30bc340() {
   return (neuron0x30b4870()*-0.0135683);
}

double NNfunction_sb_cLdL::synapse0x30b90d0() {
   return (neuron0x30b4a90()*-0.0249411);
}

double NNfunction_sb_cLdL::synapse0x30b9110() {
   return (neuron0x30b4dd0()*-0.0079962);
}

double NNfunction_sb_cLdL::synapse0x30b9150() {
   return (neuron0x30b5110()*-0.00920065);
}

double NNfunction_sb_cLdL::synapse0x30b9190() {
   return (neuron0x30b5450()*0.0124384);
}

double NNfunction_sb_cLdL::synapse0x30b91d0() {
   return (neuron0x30b5790()*-0.00345704);
}

double NNfunction_sb_cLdL::synapse0x30b9210() {
   return (neuron0x30b5ad0()*0.0126728);
}

double NNfunction_sb_cLdL::synapse0x30b9590() {
   return (neuron0x30b0f10()*0.250005);
}

double NNfunction_sb_cLdL::synapse0x30b95d0() {
   return (neuron0x30b1250()*-0.105287);
}

double NNfunction_sb_cLdL::synapse0x30b9610() {
   return (neuron0x30b1590()*0.0403946);
}

double NNfunction_sb_cLdL::synapse0x30b9650() {
   return (neuron0x30b18d0()*-0.863743);
}

double NNfunction_sb_cLdL::synapse0x30b9690() {
   return (neuron0x30b1c10()*0.0565619);
}

double NNfunction_sb_cLdL::synapse0x30b96d0() {
   return (neuron0x30b1f50()*-0.0281865);
}

double NNfunction_sb_cLdL::synapse0x30b9710() {
   return (neuron0x30b2290()*-0.0379253);
}

double NNfunction_sb_cLdL::synapse0x30b9750() {
   return (neuron0x30b25d0()*0.215857);
}

double NNfunction_sb_cLdL::synapse0x30b9790() {
   return (neuron0x30b2910()*-0.180248);
}

double NNfunction_sb_cLdL::synapse0x30b97d0() {
   return (neuron0x30b2c50()*0.16243);
}

double NNfunction_sb_cLdL::synapse0x30b9810() {
   return (neuron0x30b2f90()*0.0765897);
}

double NNfunction_sb_cLdL::synapse0x30b9850() {
   return (neuron0x30b32d0()*1.08308);
}

double NNfunction_sb_cLdL::synapse0x30b9890() {
   return (neuron0x30b3610()*-0.254818);
}

double NNfunction_sb_cLdL::synapse0x30bd9d0() {
   return (neuron0x30b3950()*-0.507238);
}

double NNfunction_sb_cLdL::synapse0x30bda10() {
   return (neuron0x30b3c90()*0.246613);
}

double NNfunction_sb_cLdL::synapse0x30bda50() {
   return (neuron0x30b3fd0()*-0.0327124);
}

double NNfunction_sb_cLdL::synapse0x30b93e0() {
   return (neuron0x30b4310()*-0.661058);
}

double NNfunction_sb_cLdL::synapse0x30b9420() {
   return (neuron0x30b4870()*0.221152);
}

double NNfunction_sb_cLdL::synapse0x30bdba0() {
   return (neuron0x30b4a90()*0.454566);
}

double NNfunction_sb_cLdL::synapse0x30bdbe0() {
   return (neuron0x30b4dd0()*0.589181);
}

double NNfunction_sb_cLdL::synapse0x30bdc20() {
   return (neuron0x30b5110()*-1.0645);
}

double NNfunction_sb_cLdL::synapse0x30bdc60() {
   return (neuron0x30b5450()*-0.142737);
}

double NNfunction_sb_cLdL::synapse0x30bdca0() {
   return (neuron0x30b5790()*-0.324669);
}

double NNfunction_sb_cLdL::synapse0x30bdce0() {
   return (neuron0x30b5ad0()*-0.501551);
}

double NNfunction_sb_cLdL::synapse0x30be060() {
   return (neuron0x30b0f10()*0.148095);
}

double NNfunction_sb_cLdL::synapse0x30be0a0() {
   return (neuron0x30b1250()*-0.423408);
}

double NNfunction_sb_cLdL::synapse0x30be0e0() {
   return (neuron0x30b1590()*-0.24072);
}

double NNfunction_sb_cLdL::synapse0x30be120() {
   return (neuron0x30b18d0()*0.0146253);
}

double NNfunction_sb_cLdL::synapse0x30be160() {
   return (neuron0x30b1c10()*-0.491626);
}

double NNfunction_sb_cLdL::synapse0x30be1a0() {
   return (neuron0x30b1f50()*1.05887);
}

double NNfunction_sb_cLdL::synapse0x30be1e0() {
   return (neuron0x30b2290()*0.0752034);
}

double NNfunction_sb_cLdL::synapse0x30be220() {
   return (neuron0x30b25d0()*0.650872);
}

double NNfunction_sb_cLdL::synapse0x30be260() {
   return (neuron0x30b2910()*1.03533);
}

double NNfunction_sb_cLdL::synapse0x30be2a0() {
   return (neuron0x30b2c50()*0.818255);
}

double NNfunction_sb_cLdL::synapse0x30be2e0() {
   return (neuron0x30b2f90()*0.576484);
}

double NNfunction_sb_cLdL::synapse0x30be320() {
   return (neuron0x30b32d0()*0.21632);
}

double NNfunction_sb_cLdL::synapse0x30be360() {
   return (neuron0x30b3610()*-6.28943e-05);
}

double NNfunction_sb_cLdL::synapse0x30be3a0() {
   return (neuron0x30b3950()*0.0147669);
}

double NNfunction_sb_cLdL::synapse0x30be3e0() {
   return (neuron0x30b3c90()*-1.13999);
}

double NNfunction_sb_cLdL::synapse0x30be420() {
   return (neuron0x30b3fd0()*0.150872);
}

double NNfunction_sb_cLdL::synapse0x30bdeb0() {
   return (neuron0x30b4310()*0.237613);
}

double NNfunction_sb_cLdL::synapse0x30bdef0() {
   return (neuron0x30b4870()*0.413033);
}

double NNfunction_sb_cLdL::synapse0x30be570() {
   return (neuron0x30b4a90()*0.250074);
}

double NNfunction_sb_cLdL::synapse0x30be5b0() {
   return (neuron0x30b4dd0()*-0.298947);
}

double NNfunction_sb_cLdL::synapse0x30be5f0() {
   return (neuron0x30b5110()*-0.509298);
}

double NNfunction_sb_cLdL::synapse0x30be630() {
   return (neuron0x30b5450()*-0.258286);
}

double NNfunction_sb_cLdL::synapse0x30be670() {
   return (neuron0x30b5790()*0.354448);
}

double NNfunction_sb_cLdL::synapse0x30be6b0() {
   return (neuron0x30b5ad0()*0.145868);
}

double NNfunction_sb_cLdL::synapse0x30bea30() {
   return (neuron0x30b0f10()*-0.0172796);
}

double NNfunction_sb_cLdL::synapse0x30bea70() {
   return (neuron0x30b1250()*0.00259418);
}

double NNfunction_sb_cLdL::synapse0x30beab0() {
   return (neuron0x30b1590()*0.0574298);
}

double NNfunction_sb_cLdL::synapse0x30beaf0() {
   return (neuron0x30b18d0()*1.81035);
}

double NNfunction_sb_cLdL::synapse0x30beb30() {
   return (neuron0x30b1c10()*0.00970414);
}

double NNfunction_sb_cLdL::synapse0x30beb70() {
   return (neuron0x30b1f50()*-0.0279902);
}

double NNfunction_sb_cLdL::synapse0x30bebb0() {
   return (neuron0x30b2290()*-0.0205868);
}

double NNfunction_sb_cLdL::synapse0x30bebf0() {
   return (neuron0x30b25d0()*0.0221411);
}

double NNfunction_sb_cLdL::synapse0x30bec30() {
   return (neuron0x30b2910()*-0.00474631);
}

double NNfunction_sb_cLdL::synapse0x30bec70() {
   return (neuron0x30b2c50()*-0.0124189);
}

double NNfunction_sb_cLdL::synapse0x30becb0() {
   return (neuron0x30b2f90()*0.00180153);
}

double NNfunction_sb_cLdL::synapse0x30becf0() {
   return (neuron0x30b32d0()*0.0612898);
}

double NNfunction_sb_cLdL::synapse0x30bed30() {
   return (neuron0x30b3610()*0.57143);
}

double NNfunction_sb_cLdL::synapse0x30bed70() {
   return (neuron0x30b3950()*0.019943);
}

double NNfunction_sb_cLdL::synapse0x30bedb0() {
   return (neuron0x30b3c90()*-0.00391188);
}

double NNfunction_sb_cLdL::synapse0x30bedf0() {
   return (neuron0x30b3fd0()*0.00734542);
}

double NNfunction_sb_cLdL::synapse0x30be880() {
   return (neuron0x30b4310()*0.00842227);
}

double NNfunction_sb_cLdL::synapse0x30be8c0() {
   return (neuron0x30b4870()*0.00862343);
}

double NNfunction_sb_cLdL::synapse0x30bef40() {
   return (neuron0x30b4a90()*-0.000600448);
}

double NNfunction_sb_cLdL::synapse0x30bef80() {
   return (neuron0x30b4dd0()*0.0181373);
}

double NNfunction_sb_cLdL::synapse0x30befc0() {
   return (neuron0x30b5110()*-0.0195401);
}

double NNfunction_sb_cLdL::synapse0x30bf000() {
   return (neuron0x30b5450()*-0.0117741);
}

double NNfunction_sb_cLdL::synapse0x30bf040() {
   return (neuron0x30b5790()*0.00441829);
}

double NNfunction_sb_cLdL::synapse0x30bf080() {
   return (neuron0x30b5ad0()*0.0120568);
}

double NNfunction_sb_cLdL::synapse0x30bf400() {
   return (neuron0x30b0f10()*0.392983);
}

double NNfunction_sb_cLdL::synapse0x30bf440() {
   return (neuron0x30b1250()*-0.15791);
}

double NNfunction_sb_cLdL::synapse0x30bf480() {
   return (neuron0x30b1590()*0.555759);
}

double NNfunction_sb_cLdL::synapse0x30bf4c0() {
   return (neuron0x30b18d0()*-0.0569991);
}

double NNfunction_sb_cLdL::synapse0x30bf500() {
   return (neuron0x30b1c10()*-0.21131);
}

double NNfunction_sb_cLdL::synapse0x30bf540() {
   return (neuron0x30b1f50()*0.877183);
}

double NNfunction_sb_cLdL::synapse0x30bf580() {
   return (neuron0x30b2290()*-0.260359);
}

double NNfunction_sb_cLdL::synapse0x30bf5c0() {
   return (neuron0x30b25d0()*0.406399);
}

double NNfunction_sb_cLdL::synapse0x30bf600() {
   return (neuron0x30b2910()*0.258722);
}

double NNfunction_sb_cLdL::synapse0x30bf640() {
   return (neuron0x30b2c50()*-0.719506);
}

double NNfunction_sb_cLdL::synapse0x30bf680() {
   return (neuron0x30b2f90()*-0.288419);
}

double NNfunction_sb_cLdL::synapse0x30bf6c0() {
   return (neuron0x30b32d0()*0.151284);
}

double NNfunction_sb_cLdL::synapse0x30bf700() {
   return (neuron0x30b3610()*-0.512562);
}

double NNfunction_sb_cLdL::synapse0x30bf740() {
   return (neuron0x30b3950()*0.465413);
}

double NNfunction_sb_cLdL::synapse0x30bf780() {
   return (neuron0x30b3c90()*-0.140649);
}

double NNfunction_sb_cLdL::synapse0x30bf7c0() {
   return (neuron0x30b3fd0()*0.646319);
}

double NNfunction_sb_cLdL::synapse0x30bf250() {
   return (neuron0x30b4310()*-0.121372);
}

double NNfunction_sb_cLdL::synapse0x30bf290() {
   return (neuron0x30b4870()*0.392026);
}

double NNfunction_sb_cLdL::synapse0x30bf910() {
   return (neuron0x30b4a90()*-0.0230301);
}

double NNfunction_sb_cLdL::synapse0x30bf950() {
   return (neuron0x30b4dd0()*-0.201002);
}

double NNfunction_sb_cLdL::synapse0x30bf990() {
   return (neuron0x30b5110()*-0.503544);
}

double NNfunction_sb_cLdL::synapse0x30bf9d0() {
   return (neuron0x30b5450()*-0.326693);
}

double NNfunction_sb_cLdL::synapse0x30bfa10() {
   return (neuron0x30b5790()*0.0149959);
}

double NNfunction_sb_cLdL::synapse0x30bfa50() {
   return (neuron0x30b5ad0()*-0.284004);
}

double NNfunction_sb_cLdL::synapse0x30bfdd0() {
   return (neuron0x30b0f10()*0.0737674);
}

double NNfunction_sb_cLdL::synapse0x30b1130() {
   return (neuron0x30b1250()*-0.404146);
}

double NNfunction_sb_cLdL::synapse0x30b1170() {
   return (neuron0x30b1590()*0.283778);
}

double NNfunction_sb_cLdL::synapse0x30b1470() {
   return (neuron0x30b18d0()*0.169968);
}

double NNfunction_sb_cLdL::synapse0x30b14b0() {
   return (neuron0x30b1c10()*0.464424);
}

double NNfunction_sb_cLdL::synapse0x30b17b0() {
   return (neuron0x30b1f50()*0.109939);
}

double NNfunction_sb_cLdL::synapse0x30b17f0() {
   return (neuron0x30b2290()*0.774196);
}

double NNfunction_sb_cLdL::synapse0x30b1af0() {
   return (neuron0x30b25d0()*0.481093);
}

double NNfunction_sb_cLdL::synapse0x30b1b30() {
   return (neuron0x30b2910()*0.0746741);
}

double NNfunction_sb_cLdL::synapse0x30b1e30() {
   return (neuron0x30b2c50()*0.178345);
}

double NNfunction_sb_cLdL::synapse0x30b1e70() {
   return (neuron0x30b2f90()*-0.45563);
}

double NNfunction_sb_cLdL::synapse0x30b2170() {
   return (neuron0x30b32d0()*0.0079396);
}

double NNfunction_sb_cLdL::synapse0x30b21b0() {
   return (neuron0x30b3610()*-0.106235);
}

double NNfunction_sb_cLdL::synapse0x30b24b0() {
   return (neuron0x30b3950()*0.0241185);
}

double NNfunction_sb_cLdL::synapse0x30b24f0() {
   return (neuron0x30b3c90()*-0.24601);
}

double NNfunction_sb_cLdL::synapse0x30b27f0() {
   return (neuron0x30b3fd0()*-0.0294676);
}

double NNfunction_sb_cLdL::synapse0x30b2830() {
   return (neuron0x30b4310()*0.0222583);
}

double NNfunction_sb_cLdL::synapse0x30b2b30() {
   return (neuron0x30b4870()*0.0908882);
}

double NNfunction_sb_cLdL::synapse0x30b2b70() {
   return (neuron0x30b4a90()*0.884163);
}

double NNfunction_sb_cLdL::synapse0x30b2e70() {
   return (neuron0x30b4dd0()*0.181825);
}

double NNfunction_sb_cLdL::synapse0x30b2eb0() {
   return (neuron0x30b5110()*-0.43574);
}

double NNfunction_sb_cLdL::synapse0x30b31b0() {
   return (neuron0x30b5450()*-0.106459);
}

double NNfunction_sb_cLdL::synapse0x30b31f0() {
   return (neuron0x30b5790()*-0.117073);
}

double NNfunction_sb_cLdL::synapse0x30b34f0() {
   return (neuron0x30b5ad0()*0.229674);
}

double NNfunction_sb_cLdL::synapse0x30b3530() {
   return (neuron0x30b0f10()*-0.0320208);
}

double NNfunction_sb_cLdL::synapse0x30b41f0() {
   return (neuron0x30b1250()*-0.0228815);
}

double NNfunction_sb_cLdL::synapse0x30b4230() {
   return (neuron0x30b1590()*-0.324248);
}

double NNfunction_sb_cLdL::synapse0x30bfc20() {
   return (neuron0x30b18d0()*-0.344632);
}

double NNfunction_sb_cLdL::synapse0x30bfc60() {
   return (neuron0x30b1c10()*-0.0213903);
}

double NNfunction_sb_cLdL::synapse0x30b4530() {
   return (neuron0x30b1f50()*0.0844388);
}

double NNfunction_sb_cLdL::synapse0x30b4570() {
   return (neuron0x30b2290()*0.0609341);
}

double NNfunction_sb_cLdL::synapse0x2e6bfb0() {
   return (neuron0x30b25d0()*0.00119165);
}

double NNfunction_sb_cLdL::synapse0x2e6bff0() {
   return (neuron0x30b2910()*0.104493);
}

double NNfunction_sb_cLdL::synapse0x30b4cb0() {
   return (neuron0x30b2c50()*-0.0381315);
}

double NNfunction_sb_cLdL::synapse0x30b4cf0() {
   return (neuron0x30b2f90()*0.0444902);
}

double NNfunction_sb_cLdL::synapse0x30b4ff0() {
   return (neuron0x30b32d0()*-0.0224775);
}

double NNfunction_sb_cLdL::synapse0x30b5030() {
   return (neuron0x30b3610()*-0.0666215);
}

double NNfunction_sb_cLdL::synapse0x30b5330() {
   return (neuron0x30b3950()*-0.285411);
}

double NNfunction_sb_cLdL::synapse0x30b5370() {
   return (neuron0x30b3c90()*0.561362);
}

double NNfunction_sb_cLdL::synapse0x30b5670() {
   return (neuron0x30b3fd0()*0.655179);
}

double NNfunction_sb_cLdL::synapse0x30b56b0() {
   return (neuron0x30b4310()*-0.264945);
}

double NNfunction_sb_cLdL::synapse0x30b59b0() {
   return (neuron0x30b4870()*0.581864);
}

double NNfunction_sb_cLdL::synapse0x30b59f0() {
   return (neuron0x30b4a90()*0.472874);
}

double NNfunction_sb_cLdL::synapse0x30b5cf0() {
   return (neuron0x30b4dd0()*0.00695617);
}

double NNfunction_sb_cLdL::synapse0x30b5d30() {
   return (neuron0x30b5110()*0.0736706);
}

double NNfunction_sb_cLdL::synapse0x30b3830() {
   return (neuron0x30b5450()*-0.00188007);
}

double NNfunction_sb_cLdL::synapse0x30b3870() {
   return (neuron0x30b5790()*-0.0128107);
}

double NNfunction_sb_cLdL::synapse0x30c1b40() {
   return (neuron0x30b5ad0()*-0.0516859);
}

double NNfunction_sb_cLdL::synapse0x30c1ec0() {
   return (neuron0x30b0f10()*0.123572);
}

double NNfunction_sb_cLdL::synapse0x30c1f00() {
   return (neuron0x30b1250()*0.107543);
}

double NNfunction_sb_cLdL::synapse0x30c1f40() {
   return (neuron0x30b1590()*1.36307);
}

double NNfunction_sb_cLdL::synapse0x30c1f80() {
   return (neuron0x30b18d0()*-0.453112);
}

double NNfunction_sb_cLdL::synapse0x30c1fc0() {
   return (neuron0x30b1c10()*-0.133813);
}

double NNfunction_sb_cLdL::synapse0x30c2000() {
   return (neuron0x30b1f50()*0.0511111);
}

double NNfunction_sb_cLdL::synapse0x30c2040() {
   return (neuron0x30b2290()*-0.118843);
}

double NNfunction_sb_cLdL::synapse0x30c2080() {
   return (neuron0x30b25d0()*0.193256);
}

double NNfunction_sb_cLdL::synapse0x30c20c0() {
   return (neuron0x30b2910()*-0.0343675);
}

double NNfunction_sb_cLdL::synapse0x30c2100() {
   return (neuron0x30b2c50()*0.0494341);
}

double NNfunction_sb_cLdL::synapse0x30c2140() {
   return (neuron0x30b2f90()*0.0889627);
}

double NNfunction_sb_cLdL::synapse0x30c2180() {
   return (neuron0x30b32d0()*-0.365558);
}

double NNfunction_sb_cLdL::synapse0x30c21c0() {
   return (neuron0x30b3610()*0.0932013);
}

double NNfunction_sb_cLdL::synapse0x30c2200() {
   return (neuron0x30b3950()*-0.00194819);
}

double NNfunction_sb_cLdL::synapse0x30c2240() {
   return (neuron0x30b3c90()*-0.106583);
}

double NNfunction_sb_cLdL::synapse0x30c2280() {
   return (neuron0x30b3fd0()*0.0882215);
}

double NNfunction_sb_cLdL::synapse0x30c1d10() {
   return (neuron0x30b4310()*0.0395729);
}

double NNfunction_sb_cLdL::synapse0x30c1d50() {
   return (neuron0x30b4870()*0.0235125);
}

double NNfunction_sb_cLdL::synapse0x30c23d0() {
   return (neuron0x30b4a90()*-0.0371206);
}

double NNfunction_sb_cLdL::synapse0x30c2410() {
   return (neuron0x30b4dd0()*0.0286673);
}

double NNfunction_sb_cLdL::synapse0x30c2450() {
   return (neuron0x30b5110()*-0.0411893);
}

double NNfunction_sb_cLdL::synapse0x30c2490() {
   return (neuron0x30b5450()*0.108073);
}

double NNfunction_sb_cLdL::synapse0x30c24d0() {
   return (neuron0x30b5790()*0.089433);
}

double NNfunction_sb_cLdL::synapse0x30c2510() {
   return (neuron0x30b5ad0()*-0.00374326);
}

double NNfunction_sb_cLdL::synapse0x30c2890() {
   return (neuron0x30b0f10()*-0.118166);
}

double NNfunction_sb_cLdL::synapse0x30c28d0() {
   return (neuron0x30b1250()*-0.0621818);
}

double NNfunction_sb_cLdL::synapse0x30c2910() {
   return (neuron0x30b1590()*-0.0153035);
}

double NNfunction_sb_cLdL::synapse0x30c2950() {
   return (neuron0x30b18d0()*-2.0137);
}

double NNfunction_sb_cLdL::synapse0x30c2990() {
   return (neuron0x30b1c10()*-0.0186288);
}

double NNfunction_sb_cLdL::synapse0x30c29d0() {
   return (neuron0x30b1f50()*-0.0544896);
}

double NNfunction_sb_cLdL::synapse0x30c2a10() {
   return (neuron0x30b2290()*-0.0638605);
}

double NNfunction_sb_cLdL::synapse0x30c2a50() {
   return (neuron0x30b25d0()*0.0179059);
}

double NNfunction_sb_cLdL::synapse0x30c2a90() {
   return (neuron0x30b2910()*0.0050105);
}

double NNfunction_sb_cLdL::synapse0x30c2ad0() {
   return (neuron0x30b2c50()*0.0215878);
}

double NNfunction_sb_cLdL::synapse0x30c2b10() {
   return (neuron0x30b2f90()*-0.015599);
}

double NNfunction_sb_cLdL::synapse0x30c2b50() {
   return (neuron0x30b32d0()*0.181505);
}

double NNfunction_sb_cLdL::synapse0x30c2b90() {
   return (neuron0x30b3610()*0.592787);
}

double NNfunction_sb_cLdL::synapse0x30c2bd0() {
   return (neuron0x30b3950()*0.0594349);
}

double NNfunction_sb_cLdL::synapse0x30c2c10() {
   return (neuron0x30b3c90()*0.0172946);
}

double NNfunction_sb_cLdL::synapse0x30c2c50() {
   return (neuron0x30b3fd0()*-0.0105325);
}

double NNfunction_sb_cLdL::synapse0x30c26e0() {
   return (neuron0x30b4310()*0.0365858);
}

double NNfunction_sb_cLdL::synapse0x30c2720() {
   return (neuron0x30b4870()*0.0187742);
}

double NNfunction_sb_cLdL::synapse0x30c2da0() {
   return (neuron0x30b4a90()*-0.000974295);
}

double NNfunction_sb_cLdL::synapse0x30c2de0() {
   return (neuron0x30b4dd0()*0.0134164);
}

double NNfunction_sb_cLdL::synapse0x30c2e20() {
   return (neuron0x30b5110()*-0.0561935);
}

double NNfunction_sb_cLdL::synapse0x30c2e60() {
   return (neuron0x30b5450()*-0.0131537);
}

double NNfunction_sb_cLdL::synapse0x30c2ea0() {
   return (neuron0x30b5790()*-0.0297182);
}

double NNfunction_sb_cLdL::synapse0x30c2ee0() {
   return (neuron0x30b5ad0()*0.00604122);
}

double NNfunction_sb_cLdL::synapse0x30c3260() {
   return (neuron0x30b0f10()*0.0228948);
}

double NNfunction_sb_cLdL::synapse0x30c32a0() {
   return (neuron0x30b1250()*0.239641);
}

double NNfunction_sb_cLdL::synapse0x30c32e0() {
   return (neuron0x30b1590()*0.242386);
}

double NNfunction_sb_cLdL::synapse0x30c3320() {
   return (neuron0x30b18d0()*0.73867);
}

double NNfunction_sb_cLdL::synapse0x30c3360() {
   return (neuron0x30b1c10()*0.0902672);
}

double NNfunction_sb_cLdL::synapse0x30c33a0() {
   return (neuron0x30b1f50()*-0.495974);
}

double NNfunction_sb_cLdL::synapse0x30c33e0() {
   return (neuron0x30b2290()*0.636716);
}

double NNfunction_sb_cLdL::synapse0x30c3420() {
   return (neuron0x30b25d0()*-0.0709651);
}

double NNfunction_sb_cLdL::synapse0x30c3460() {
   return (neuron0x30b2910()*-0.0928953);
}

double NNfunction_sb_cLdL::synapse0x30c34a0() {
   return (neuron0x30b2c50()*-0.158557);
}

double NNfunction_sb_cLdL::synapse0x30c34e0() {
   return (neuron0x30b2f90()*0.199919);
}

double NNfunction_sb_cLdL::synapse0x30c3520() {
   return (neuron0x30b32d0()*0.867358);
}

double NNfunction_sb_cLdL::synapse0x30c3560() {
   return (neuron0x30b3610()*-0.683936);
}

double NNfunction_sb_cLdL::synapse0x30c35a0() {
   return (neuron0x30b3950()*-0.85922);
}

double NNfunction_sb_cLdL::synapse0x30c35e0() {
   return (neuron0x30b3c90()*0.228918);
}

double NNfunction_sb_cLdL::synapse0x30c3620() {
   return (neuron0x30b3fd0()*-0.209516);
}

double NNfunction_sb_cLdL::synapse0x30c30b0() {
   return (neuron0x30b4310()*0.236796);
}

double NNfunction_sb_cLdL::synapse0x30c30f0() {
   return (neuron0x30b4870()*0.490563);
}

double NNfunction_sb_cLdL::synapse0x30c3770() {
   return (neuron0x30b4a90()*0.000547953);
}

double NNfunction_sb_cLdL::synapse0x30c37b0() {
   return (neuron0x30b4dd0()*-0.0378939);
}

double NNfunction_sb_cLdL::synapse0x30c37f0() {
   return (neuron0x30b5110()*-0.270998);
}

double NNfunction_sb_cLdL::synapse0x30c3830() {
   return (neuron0x30b5450()*-0.449194);
}

double NNfunction_sb_cLdL::synapse0x30c3870() {
   return (neuron0x30b5790()*-0.458938);
}

double NNfunction_sb_cLdL::synapse0x30c38b0() {
   return (neuron0x30b5ad0()*-0.0686277);
}

double NNfunction_sb_cLdL::synapse0x30c3c30() {
   return (neuron0x30b0f10()*-0.531114);
}

double NNfunction_sb_cLdL::synapse0x30c3c70() {
   return (neuron0x30b1250()*0.347968);
}

double NNfunction_sb_cLdL::synapse0x30c3cb0() {
   return (neuron0x30b1590()*-0.587948);
}

double NNfunction_sb_cLdL::synapse0x30c3cf0() {
   return (neuron0x30b18d0()*0.0441649);
}

double NNfunction_sb_cLdL::synapse0x30c3d30() {
   return (neuron0x30b1c10()*-0.449546);
}

double NNfunction_sb_cLdL::synapse0x30c3d70() {
   return (neuron0x30b1f50()*-0.451523);
}

double NNfunction_sb_cLdL::synapse0x30c3db0() {
   return (neuron0x30b2290()*0.296722);
}

double NNfunction_sb_cLdL::synapse0x30c3df0() {
   return (neuron0x30b25d0()*0.174859);
}

double NNfunction_sb_cLdL::synapse0x30c3e30() {
   return (neuron0x30b2910()*0.0612528);
}

double NNfunction_sb_cLdL::synapse0x30c3e70() {
   return (neuron0x30b2c50()*-0.099523);
}

double NNfunction_sb_cLdL::synapse0x30c3eb0() {
   return (neuron0x30b2f90()*-0.150767);
}

double NNfunction_sb_cLdL::synapse0x30c3ef0() {
   return (neuron0x30b32d0()*-0.835322);
}

double NNfunction_sb_cLdL::synapse0x30c3f30() {
   return (neuron0x30b3610()*-0.128302);
}

double NNfunction_sb_cLdL::synapse0x30c3f70() {
   return (neuron0x30b3950()*0.219874);
}

double NNfunction_sb_cLdL::synapse0x30c3fb0() {
   return (neuron0x30b3c90()*-0.31029);
}

double NNfunction_sb_cLdL::synapse0x30c3ff0() {
   return (neuron0x30b3fd0()*0.741217);
}

double NNfunction_sb_cLdL::synapse0x30c3a80() {
   return (neuron0x30b4310()*0.786);
}

double NNfunction_sb_cLdL::synapse0x30c3ac0() {
   return (neuron0x30b4870()*0.243513);
}

double NNfunction_sb_cLdL::synapse0x30c4140() {
   return (neuron0x30b4a90()*-0.26644);
}

double NNfunction_sb_cLdL::synapse0x30c4180() {
   return (neuron0x30b4dd0()*-0.397826);
}

double NNfunction_sb_cLdL::synapse0x30c41c0() {
   return (neuron0x30b5110()*-0.39076);
}

double NNfunction_sb_cLdL::synapse0x30c4200() {
   return (neuron0x30b5450()*0.30363);
}

double NNfunction_sb_cLdL::synapse0x30c4240() {
   return (neuron0x30b5790()*-0.148226);
}

double NNfunction_sb_cLdL::synapse0x30c4280() {
   return (neuron0x30b5ad0()*0.483623);
}

double NNfunction_sb_cLdL::synapse0x30c4600() {
   return (neuron0x30b0f10()*-0.0170604);
}

double NNfunction_sb_cLdL::synapse0x30c4640() {
   return (neuron0x30b1250()*0.256545);
}

double NNfunction_sb_cLdL::synapse0x30c4680() {
   return (neuron0x30b1590()*0.387372);
}

double NNfunction_sb_cLdL::synapse0x30c46c0() {
   return (neuron0x30b18d0()*0.31483);
}

double NNfunction_sb_cLdL::synapse0x30c4700() {
   return (neuron0x30b1c10()*-0.103211);
}

double NNfunction_sb_cLdL::synapse0x30c4740() {
   return (neuron0x30b1f50()*-0.148785);
}

double NNfunction_sb_cLdL::synapse0x30c4780() {
   return (neuron0x30b2290()*0.114366);
}

double NNfunction_sb_cLdL::synapse0x30c47c0() {
   return (neuron0x30b25d0()*-0.200099);
}

double NNfunction_sb_cLdL::synapse0x30c4800() {
   return (neuron0x30b2910()*0.268283);
}

double NNfunction_sb_cLdL::synapse0x30bc9c0() {
   return (neuron0x30b2c50()*-0.174693);
}

double NNfunction_sb_cLdL::synapse0x30bca00() {
   return (neuron0x30b2f90()*-0.0329379);
}

double NNfunction_sb_cLdL::synapse0x30bca40() {
   return (neuron0x30b32d0()*-0.212983);
}

double NNfunction_sb_cLdL::synapse0x30bca80() {
   return (neuron0x30b3610()*-0.370999);
}

double NNfunction_sb_cLdL::synapse0x30bcac0() {
   return (neuron0x30b3950()*-0.458716);
}

double NNfunction_sb_cLdL::synapse0x30bcb00() {
   return (neuron0x30b3c90()*0.244584);
}

double NNfunction_sb_cLdL::synapse0x30bcb40() {
   return (neuron0x30b3fd0()*0.185807);
}

double NNfunction_sb_cLdL::synapse0x30c4450() {
   return (neuron0x30b4310()*0.0522419);
}

double NNfunction_sb_cLdL::synapse0x30c4490() {
   return (neuron0x30b4870()*-0.31719);
}

double NNfunction_sb_cLdL::synapse0x30bcc90() {
   return (neuron0x30b4a90()*0.494513);
}

double NNfunction_sb_cLdL::synapse0x30bccd0() {
   return (neuron0x30b4dd0()*-0.0111813);
}

double NNfunction_sb_cLdL::synapse0x30bcd10() {
   return (neuron0x30b5110()*0.309367);
}

double NNfunction_sb_cLdL::synapse0x30bcd50() {
   return (neuron0x30b5450()*-0.166904);
}

double NNfunction_sb_cLdL::synapse0x30bcd90() {
   return (neuron0x30b5790()*-0.203952);
}

double NNfunction_sb_cLdL::synapse0x30bcdd0() {
   return (neuron0x30b5ad0()*0.257425);
}

double NNfunction_sb_cLdL::synapse0x30bd150() {
   return (neuron0x30b0f10()*-0.0450255);
}

double NNfunction_sb_cLdL::synapse0x30bd190() {
   return (neuron0x30b1250()*-0.651701);
}

double NNfunction_sb_cLdL::synapse0x30bd1d0() {
   return (neuron0x30b1590()*-0.309883);
}

double NNfunction_sb_cLdL::synapse0x30bd210() {
   return (neuron0x30b18d0()*-0.210538);
}

double NNfunction_sb_cLdL::synapse0x30bd250() {
   return (neuron0x30b1c10()*-0.53749);
}

double NNfunction_sb_cLdL::synapse0x30bd290() {
   return (neuron0x30b1f50()*-0.548976);
}

double NNfunction_sb_cLdL::synapse0x30bd2d0() {
   return (neuron0x30b2290()*-0.457334);
}

double NNfunction_sb_cLdL::synapse0x30bd310() {
   return (neuron0x30b25d0()*0.0698081);
}

double NNfunction_sb_cLdL::synapse0x30bd350() {
   return (neuron0x30b2910()*0.13731);
}

double NNfunction_sb_cLdL::synapse0x30bd390() {
   return (neuron0x30b2c50()*-0.325074);
}

double NNfunction_sb_cLdL::synapse0x30bd3d0() {
   return (neuron0x30b2f90()*0.213955);
}

double NNfunction_sb_cLdL::synapse0x30bd410() {
   return (neuron0x30b32d0()*-1.01538);
}

double NNfunction_sb_cLdL::synapse0x30bd450() {
   return (neuron0x30b3610()*-0.171492);
}

double NNfunction_sb_cLdL::synapse0x30bd490() {
   return (neuron0x30b3950()*0.361143);
}

double NNfunction_sb_cLdL::synapse0x30bd4d0() {
   return (neuron0x30b3c90()*0.042535);
}

double NNfunction_sb_cLdL::synapse0x30bd510() {
   return (neuron0x30b3fd0()*-0.220575);
}

double NNfunction_sb_cLdL::synapse0x30bcfa0() {
   return (neuron0x30b4310()*0.451317);
}

double NNfunction_sb_cLdL::synapse0x30bcfe0() {
   return (neuron0x30b4870()*0.0969529);
}

double NNfunction_sb_cLdL::synapse0x30bd660() {
   return (neuron0x30b4a90()*-0.424517);
}

double NNfunction_sb_cLdL::synapse0x30bd6a0() {
   return (neuron0x30b4dd0()*-0.143541);
}

double NNfunction_sb_cLdL::synapse0x30bd6e0() {
   return (neuron0x30b5110()*0.554843);
}

double NNfunction_sb_cLdL::synapse0x30bd720() {
   return (neuron0x30b5450()*-0.267612);
}

double NNfunction_sb_cLdL::synapse0x30bd760() {
   return (neuron0x30b5790()*0.00474965);
}

double NNfunction_sb_cLdL::synapse0x30bd7a0() {
   return (neuron0x30b5ad0()*0.187956);
}

double NNfunction_sb_cLdL::synapse0x30bd970() {
   return (neuron0x30b0f10()*-0.0116439);
}

double NNfunction_sb_cLdL::synapse0x30c6a00() {
   return (neuron0x30b1250()*0.00702528);
}

double NNfunction_sb_cLdL::synapse0x30c6a40() {
   return (neuron0x30b1590()*0.0804471);
}

double NNfunction_sb_cLdL::synapse0x30c6a80() {
   return (neuron0x30b18d0()*2.13858);
}

double NNfunction_sb_cLdL::synapse0x30c6ac0() {
   return (neuron0x30b1c10()*-0.00534133);
}

double NNfunction_sb_cLdL::synapse0x30c6b00() {
   return (neuron0x30b1f50()*-0.00975532);
}

double NNfunction_sb_cLdL::synapse0x30c6b40() {
   return (neuron0x30b2290()*-0.0114929);
}

double NNfunction_sb_cLdL::synapse0x30c6b80() {
   return (neuron0x30b25d0()*0.0302431);
}

double NNfunction_sb_cLdL::synapse0x30c6bc0() {
   return (neuron0x30b2910()*-0.00436202);
}

double NNfunction_sb_cLdL::synapse0x30c6c00() {
   return (neuron0x30b2c50()*-0.0204993);
}

double NNfunction_sb_cLdL::synapse0x30c6c40() {
   return (neuron0x30b2f90()*0.00401629);
}

double NNfunction_sb_cLdL::synapse0x30c6c80() {
   return (neuron0x30b32d0()*0.0183732);
}

double NNfunction_sb_cLdL::synapse0x30c6cc0() {
   return (neuron0x30b3610()*0.241872);
}

double NNfunction_sb_cLdL::synapse0x30c6d00() {
   return (neuron0x30b3950()*0.016601);
}

double NNfunction_sb_cLdL::synapse0x30c6d40() {
   return (neuron0x30b3c90()*0.00307477);
}

double NNfunction_sb_cLdL::synapse0x30c6d80() {
   return (neuron0x30b3fd0()*0.014624);
}

double NNfunction_sb_cLdL::synapse0x30c6850() {
   return (neuron0x30b4310()*0.00705564);
}

double NNfunction_sb_cLdL::synapse0x30c6890() {
   return (neuron0x30b4870()*0.00444426);
}

double NNfunction_sb_cLdL::synapse0x30c6ed0() {
   return (neuron0x30b4a90()*0.00760771);
}

double NNfunction_sb_cLdL::synapse0x30c6f10() {
   return (neuron0x30b4dd0()*0.0193102);
}

double NNfunction_sb_cLdL::synapse0x30c6f50() {
   return (neuron0x30b5110()*-0.024739);
}

double NNfunction_sb_cLdL::synapse0x30c6f90() {
   return (neuron0x30b5450()*-0.0101988);
}

double NNfunction_sb_cLdL::synapse0x30c6fd0() {
   return (neuron0x30b5790()*0.00376909);
}

double NNfunction_sb_cLdL::synapse0x30c7010() {
   return (neuron0x30b5ad0()*0.00220168);
}

double NNfunction_sb_cLdL::synapse0x30c7390() {
   return (neuron0x30b0f10()*0.0475942);
}

double NNfunction_sb_cLdL::synapse0x30c73d0() {
   return (neuron0x30b1250()*0.0605074);
}

double NNfunction_sb_cLdL::synapse0x30c7410() {
   return (neuron0x30b1590()*-0.512408);
}

double NNfunction_sb_cLdL::synapse0x30c7450() {
   return (neuron0x30b18d0()*-0.742882);
}

double NNfunction_sb_cLdL::synapse0x30c7490() {
   return (neuron0x30b1c10()*0.0037533);
}

double NNfunction_sb_cLdL::synapse0x30c74d0() {
   return (neuron0x30b1f50()*-0.0409214);
}

double NNfunction_sb_cLdL::synapse0x30c7510() {
   return (neuron0x30b2290()*-0.0753189);
}

double NNfunction_sb_cLdL::synapse0x30c7550() {
   return (neuron0x30b25d0()*0.0909902);
}

double NNfunction_sb_cLdL::synapse0x30c7590() {
   return (neuron0x30b2910()*0.00740275);
}

double NNfunction_sb_cLdL::synapse0x30c75d0() {
   return (neuron0x30b2c50()*-0.00870918);
}

double NNfunction_sb_cLdL::synapse0x30c7610() {
   return (neuron0x30b2f90()*0.0174633);
}

double NNfunction_sb_cLdL::synapse0x30c7650() {
   return (neuron0x30b32d0()*-0.247187);
}

double NNfunction_sb_cLdL::synapse0x30c7690() {
   return (neuron0x30b3610()*-0.220877);
}

double NNfunction_sb_cLdL::synapse0x30c76d0() {
   return (neuron0x30b3950()*0.0102226);
}

double NNfunction_sb_cLdL::synapse0x30c7710() {
   return (neuron0x30b3c90()*-0.0822663);
}

double NNfunction_sb_cLdL::synapse0x30c7750() {
   return (neuron0x30b3fd0()*-0.0336901);
}

double NNfunction_sb_cLdL::synapse0x30c71e0() {
   return (neuron0x30b4310()*0.0594922);
}

double NNfunction_sb_cLdL::synapse0x30c7220() {
   return (neuron0x30b4870()*-0.0175325);
}

double NNfunction_sb_cLdL::synapse0x30c78a0() {
   return (neuron0x30b4a90()*-0.0235527);
}

double NNfunction_sb_cLdL::synapse0x30c78e0() {
   return (neuron0x30b4dd0()*-0.0388273);
}

double NNfunction_sb_cLdL::synapse0x30c7920() {
   return (neuron0x30b5110()*0.00183602);
}

double NNfunction_sb_cLdL::synapse0x30c7960() {
   return (neuron0x30b5450()*0.0123158);
}

double NNfunction_sb_cLdL::synapse0x30c79a0() {
   return (neuron0x30b5790()*0.0320082);
}

double NNfunction_sb_cLdL::synapse0x30c79e0() {
   return (neuron0x30b5ad0()*-0.10606);
}

double NNfunction_sb_cLdL::synapse0x30c7d60() {
   return (neuron0x30b0f10()*-0.0134908);
}

double NNfunction_sb_cLdL::synapse0x30c7da0() {
   return (neuron0x30b1250()*0.00144103);
}

double NNfunction_sb_cLdL::synapse0x30c7de0() {
   return (neuron0x30b1590()*0.0347567);
}

double NNfunction_sb_cLdL::synapse0x30c7e20() {
   return (neuron0x30b18d0()*-0.0556882);
}

double NNfunction_sb_cLdL::synapse0x30c7e60() {
   return (neuron0x30b1c10()*-0.0147102);
}

double NNfunction_sb_cLdL::synapse0x30c7ea0() {
   return (neuron0x30b1f50()*0.000200102);
}

double NNfunction_sb_cLdL::synapse0x30c7ee0() {
   return (neuron0x30b2290()*-0.00758604);
}

double NNfunction_sb_cLdL::synapse0x30c7f20() {
   return (neuron0x30b25d0()*0.00568447);
}

double NNfunction_sb_cLdL::synapse0x30c7f60() {
   return (neuron0x30b2910()*0.000664036);
}

double NNfunction_sb_cLdL::synapse0x30c7fa0() {
   return (neuron0x30b2c50()*-0.0109013);
}

double NNfunction_sb_cLdL::synapse0x30c7fe0() {
   return (neuron0x30b2f90()*-0.00031915);
}

double NNfunction_sb_cLdL::synapse0x30c8020() {
   return (neuron0x30b32d0()*0.288124);
}

double NNfunction_sb_cLdL::synapse0x30c8060() {
   return (neuron0x30b3610()*0.650324);
}

double NNfunction_sb_cLdL::synapse0x30c80a0() {
   return (neuron0x30b3950()*0.0279015);
}

double NNfunction_sb_cLdL::synapse0x30c80e0() {
   return (neuron0x30b3c90()*0.00853533);
}

double NNfunction_sb_cLdL::synapse0x30c8120() {
   return (neuron0x30b3fd0()*0.00555082);
}

double NNfunction_sb_cLdL::synapse0x30c7bb0() {
   return (neuron0x30b4310()*0.0223255);
}

double NNfunction_sb_cLdL::synapse0x30c7bf0() {
   return (neuron0x30b4870()*-0.0128081);
}

double NNfunction_sb_cLdL::synapse0x30c8270() {
   return (neuron0x30b4a90()*0.00368854);
}

double NNfunction_sb_cLdL::synapse0x30c82b0() {
   return (neuron0x30b4dd0()*0.00607536);
}

double NNfunction_sb_cLdL::synapse0x30c82f0() {
   return (neuron0x30b5110()*-0.0155408);
}

double NNfunction_sb_cLdL::synapse0x30c8330() {
   return (neuron0x30b5450()*-0.00294503);
}

double NNfunction_sb_cLdL::synapse0x30c8370() {
   return (neuron0x30b5790()*0.00182676);
}

double NNfunction_sb_cLdL::synapse0x30c83b0() {
   return (neuron0x30b5ad0()*0.0101949);
}

double NNfunction_sb_cLdL::synapse0x30c8730() {
   return (neuron0x30b0f10()*-0.0663484);
}

double NNfunction_sb_cLdL::synapse0x30c8770() {
   return (neuron0x30b1250()*0.524235);
}

double NNfunction_sb_cLdL::synapse0x30c87b0() {
   return (neuron0x30b1590()*0.132802);
}

double NNfunction_sb_cLdL::synapse0x30c87f0() {
   return (neuron0x30b18d0()*0.164016);
}

double NNfunction_sb_cLdL::synapse0x30c8830() {
   return (neuron0x30b1c10()*-0.507222);
}

double NNfunction_sb_cLdL::synapse0x30c8870() {
   return (neuron0x30b1f50()*-0.683548);
}

double NNfunction_sb_cLdL::synapse0x30c88b0() {
   return (neuron0x30b2290()*0.772728);
}

double NNfunction_sb_cLdL::synapse0x30c88f0() {
   return (neuron0x30b25d0()*-0.293607);
}

double NNfunction_sb_cLdL::synapse0x30c8930() {
   return (neuron0x30b2910()*-0.232117);
}

double NNfunction_sb_cLdL::synapse0x30c8970() {
   return (neuron0x30b2c50()*-0.0569125);
}

double NNfunction_sb_cLdL::synapse0x30c89b0() {
   return (neuron0x30b2f90()*-0.481716);
}

double NNfunction_sb_cLdL::synapse0x30c89f0() {
   return (neuron0x30b32d0()*0.122536);
}

double NNfunction_sb_cLdL::synapse0x30c8a30() {
   return (neuron0x30b3610()*0.1635);
}

double NNfunction_sb_cLdL::synapse0x30c8a70() {
   return (neuron0x30b3950()*-0.694452);
}

double NNfunction_sb_cLdL::synapse0x30c8ab0() {
   return (neuron0x30b3c90()*-0.178126);
}

double NNfunction_sb_cLdL::synapse0x30c8af0() {
   return (neuron0x30b3fd0()*-0.0240809);
}

double NNfunction_sb_cLdL::synapse0x30c8580() {
   return (neuron0x30b4310()*-0.408393);
}

double NNfunction_sb_cLdL::synapse0x30c85c0() {
   return (neuron0x30b4870()*-0.268694);
}

double NNfunction_sb_cLdL::synapse0x30c8c40() {
   return (neuron0x30b4a90()*-0.197915);
}

double NNfunction_sb_cLdL::synapse0x30c8c80() {
   return (neuron0x30b4dd0()*0.173513);
}

double NNfunction_sb_cLdL::synapse0x30c8cc0() {
   return (neuron0x30b5110()*0.330382);
}

double NNfunction_sb_cLdL::synapse0x30c8d00() {
   return (neuron0x30b5450()*0.194799);
}

double NNfunction_sb_cLdL::synapse0x30c8d40() {
   return (neuron0x30b5790()*0.21755);
}

double NNfunction_sb_cLdL::synapse0x30c8d80() {
   return (neuron0x30b5ad0()*-0.57346);
}

double NNfunction_sb_cLdL::synapse0x30c9100() {
   return (neuron0x30b0f10()*-0.00394334);
}

double NNfunction_sb_cLdL::synapse0x30c9140() {
   return (neuron0x30b1250()*-0.0252172);
}

double NNfunction_sb_cLdL::synapse0x30c9180() {
   return (neuron0x30b1590()*0.0685406);
}

double NNfunction_sb_cLdL::synapse0x30c91c0() {
   return (neuron0x30b18d0()*0.14625);
}

double NNfunction_sb_cLdL::synapse0x30c9200() {
   return (neuron0x30b1c10()*-0.0016736);
}

double NNfunction_sb_cLdL::synapse0x30c9240() {
   return (neuron0x30b1f50()*-0.00613407);
}

double NNfunction_sb_cLdL::synapse0x30c9280() {
   return (neuron0x30b2290()*0.0072914);
}

double NNfunction_sb_cLdL::synapse0x30c92c0() {
   return (neuron0x30b25d0()*0.0330391);
}

double NNfunction_sb_cLdL::synapse0x30c9300() {
   return (neuron0x30b2910()*-0.0616726);
}

double NNfunction_sb_cLdL::synapse0x30c9340() {
   return (neuron0x30b2c50()*-0.00067657);
}

double NNfunction_sb_cLdL::synapse0x30c9380() {
   return (neuron0x30b2f90()*-0.00440046);
}

double NNfunction_sb_cLdL::synapse0x30c93c0() {
   return (neuron0x30b32d0()*0.102211);
}

double NNfunction_sb_cLdL::synapse0x30c9400() {
   return (neuron0x30b3610()*-1.44305);
}

double NNfunction_sb_cLdL::synapse0x30c9440() {
   return (neuron0x30b3950()*-0.0184462);
}

double NNfunction_sb_cLdL::synapse0x30c9480() {
   return (neuron0x30b3c90()*-0.0294709);
}

double NNfunction_sb_cLdL::synapse0x30c94c0() {
   return (neuron0x30b3fd0()*-0.0623209);
}

double NNfunction_sb_cLdL::synapse0x30c8f50() {
   return (neuron0x30b4310()*-0.0156933);
}

double NNfunction_sb_cLdL::synapse0x30c8f90() {
   return (neuron0x30b4870()*-0.0359982);
}

double NNfunction_sb_cLdL::synapse0x30c9610() {
   return (neuron0x30b4a90()*-0.0655105);
}

double NNfunction_sb_cLdL::synapse0x30c9650() {
   return (neuron0x30b4dd0()*0.00907441);
}

double NNfunction_sb_cLdL::synapse0x30c9690() {
   return (neuron0x30b5110()*0.030845);
}

double NNfunction_sb_cLdL::synapse0x30c96d0() {
   return (neuron0x30b5450()*-0.00156941);
}

double NNfunction_sb_cLdL::synapse0x30c9710() {
   return (neuron0x30b5790()*-0.0152265);
}

double NNfunction_sb_cLdL::synapse0x30c9750() {
   return (neuron0x30b5ad0()*0.0190509);
}

double NNfunction_sb_cLdL::synapse0x30c9ad0() {
   return (neuron0x30b0f10()*0.355905);
}

double NNfunction_sb_cLdL::synapse0x30c9b10() {
   return (neuron0x30b1250()*-0.592912);
}

double NNfunction_sb_cLdL::synapse0x30c9b50() {
   return (neuron0x30b1590()*-0.495829);
}

double NNfunction_sb_cLdL::synapse0x30c9b90() {
   return (neuron0x30b18d0()*-0.165041);
}

double NNfunction_sb_cLdL::synapse0x30c9bd0() {
   return (neuron0x30b1c10()*-0.319683);
}

double NNfunction_sb_cLdL::synapse0x30c9c10() {
   return (neuron0x30b1f50()*0.872787);
}

double NNfunction_sb_cLdL::synapse0x30c9c50() {
   return (neuron0x30b2290()*0.945104);
}

double NNfunction_sb_cLdL::synapse0x30c9c90() {
   return (neuron0x30b25d0()*0.293646);
}

double NNfunction_sb_cLdL::synapse0x30c9cd0() {
   return (neuron0x30b2910()*0.68168);
}

double NNfunction_sb_cLdL::synapse0x30c9d10() {
   return (neuron0x30b2c50()*0.5635);
}

double NNfunction_sb_cLdL::synapse0x30c9d50() {
   return (neuron0x30b2f90()*0.888088);
}

double NNfunction_sb_cLdL::synapse0x30c9d90() {
   return (neuron0x30b32d0()*-0.253287);
}

double NNfunction_sb_cLdL::synapse0x30c9dd0() {
   return (neuron0x30b3610()*-0.0246826);
}

double NNfunction_sb_cLdL::synapse0x30c9e10() {
   return (neuron0x30b3950()*0.0180706);
}

double NNfunction_sb_cLdL::synapse0x30c9e50() {
   return (neuron0x30b3c90()*-0.764125);
}

double NNfunction_sb_cLdL::synapse0x30c9e90() {
   return (neuron0x30b3fd0()*0.0546226);
}

double NNfunction_sb_cLdL::synapse0x30c9920() {
   return (neuron0x30b4310()*0.127649);
}

double NNfunction_sb_cLdL::synapse0x30c9960() {
   return (neuron0x30b4870()*0.268651);
}

double NNfunction_sb_cLdL::synapse0x30c9fe0() {
   return (neuron0x30b4a90()*-0.0197468);
}

double NNfunction_sb_cLdL::synapse0x30ca020() {
   return (neuron0x30b4dd0()*0.351827);
}

double NNfunction_sb_cLdL::synapse0x30ca060() {
   return (neuron0x30b5110()*-0.161145);
}

double NNfunction_sb_cLdL::synapse0x30ca0a0() {
   return (neuron0x30b5450()*-0.276844);
}

double NNfunction_sb_cLdL::synapse0x30ca0e0() {
   return (neuron0x30b5790()*0.352919);
}

double NNfunction_sb_cLdL::synapse0x30ca120() {
   return (neuron0x30b5ad0()*0.434817);
}

double NNfunction_sb_cLdL::synapse0x30ca4a0() {
   return (neuron0x30b0f10()*-0.0908693);
}

double NNfunction_sb_cLdL::synapse0x30ca4e0() {
   return (neuron0x30b1250()*-0.00612293);
}

double NNfunction_sb_cLdL::synapse0x30ca520() {
   return (neuron0x30b1590()*0.463918);
}

double NNfunction_sb_cLdL::synapse0x30ca560() {
   return (neuron0x30b18d0()*0.742766);
}

double NNfunction_sb_cLdL::synapse0x30ca5a0() {
   return (neuron0x30b1c10()*-0.64865);
}

double NNfunction_sb_cLdL::synapse0x30ca5e0() {
   return (neuron0x30b1f50()*0.583198);
}

double NNfunction_sb_cLdL::synapse0x30ca620() {
   return (neuron0x30b2290()*0.292781);
}

double NNfunction_sb_cLdL::synapse0x30ca660() {
   return (neuron0x30b25d0()*-0.256596);
}

double NNfunction_sb_cLdL::synapse0x30ca6a0() {
   return (neuron0x30b2910()*0.383896);
}

double NNfunction_sb_cLdL::synapse0x30ca6e0() {
   return (neuron0x30b2c50()*0.202267);
}

double NNfunction_sb_cLdL::synapse0x30ca720() {
   return (neuron0x30b2f90()*0.0303977);
}

double NNfunction_sb_cLdL::synapse0x30ca760() {
   return (neuron0x30b32d0()*-0.254813);
}

double NNfunction_sb_cLdL::synapse0x30ca7a0() {
   return (neuron0x30b3610()*-0.48989);
}

double NNfunction_sb_cLdL::synapse0x30ca7e0() {
   return (neuron0x30b3950()*-1.34022);
}

double NNfunction_sb_cLdL::synapse0x30ca820() {
   return (neuron0x30b3c90()*-0.422699);
}

double NNfunction_sb_cLdL::synapse0x30ca860() {
   return (neuron0x30b3fd0()*0.426921);
}

double NNfunction_sb_cLdL::synapse0x30ca2f0() {
   return (neuron0x30b4310()*0.212896);
}

double NNfunction_sb_cLdL::synapse0x30ca330() {
   return (neuron0x30b4870()*-0.198718);
}

double NNfunction_sb_cLdL::synapse0x30ca9b0() {
   return (neuron0x30b4a90()*0.469569);
}

double NNfunction_sb_cLdL::synapse0x30ca9f0() {
   return (neuron0x30b4dd0()*0.136549);
}

double NNfunction_sb_cLdL::synapse0x30caa30() {
   return (neuron0x30b5110()*0.530783);
}

double NNfunction_sb_cLdL::synapse0x30caa70() {
   return (neuron0x30b5450()*-0.383355);
}

double NNfunction_sb_cLdL::synapse0x30caab0() {
   return (neuron0x30b5790()*0.101779);
}

double NNfunction_sb_cLdL::synapse0x30caaf0() {
   return (neuron0x30b5ad0()*-0.517239);
}

double NNfunction_sb_cLdL::synapse0x30cae70() {
   return (neuron0x30b0f10()*0.0255154);
}

double NNfunction_sb_cLdL::synapse0x30caeb0() {
   return (neuron0x30b1250()*0.184157);
}

double NNfunction_sb_cLdL::synapse0x30caef0() {
   return (neuron0x30b1590()*-0.280939);
}

double NNfunction_sb_cLdL::synapse0x30caf30() {
   return (neuron0x30b18d0()*0.621537);
}

double NNfunction_sb_cLdL::synapse0x30caf70() {
   return (neuron0x30b1c10()*0.17721);
}

double NNfunction_sb_cLdL::synapse0x30cafb0() {
   return (neuron0x30b1f50()*-0.0879564);
}

double NNfunction_sb_cLdL::synapse0x30caff0() {
   return (neuron0x30b2290()*-0.23996);
}

double NNfunction_sb_cLdL::synapse0x30cb030() {
   return (neuron0x30b25d0()*-0.0200537);
}

double NNfunction_sb_cLdL::synapse0x30cb070() {
   return (neuron0x30b2910()*0.246068);
}

double NNfunction_sb_cLdL::synapse0x30cb0b0() {
   return (neuron0x30b2c50()*0.0733564);
}

double NNfunction_sb_cLdL::synapse0x30cb0f0() {
   return (neuron0x30b2f90()*-0.00827748);
}

double NNfunction_sb_cLdL::synapse0x30cb130() {
   return (neuron0x30b32d0()*0.252231);
}

double NNfunction_sb_cLdL::synapse0x30cb170() {
   return (neuron0x30b3610()*1.36016);
}

double NNfunction_sb_cLdL::synapse0x30cb1b0() {
   return (neuron0x30b3950()*0.0536922);
}

double NNfunction_sb_cLdL::synapse0x30cb1f0() {
   return (neuron0x30b3c90()*-0.00363358);
}

double NNfunction_sb_cLdL::synapse0x30cb230() {
   return (neuron0x30b3fd0()*0.241593);
}

double NNfunction_sb_cLdL::synapse0x30cacc0() {
   return (neuron0x30b4310()*0.0335119);
}

double NNfunction_sb_cLdL::synapse0x30cad00() {
   return (neuron0x30b4870()*0.145507);
}

double NNfunction_sb_cLdL::synapse0x30cb380() {
   return (neuron0x30b4a90()*0.178817);
}

double NNfunction_sb_cLdL::synapse0x30cb3c0() {
   return (neuron0x30b4dd0()*-0.0260904);
}

double NNfunction_sb_cLdL::synapse0x30cb400() {
   return (neuron0x30b5110()*-0.0705228);
}

double NNfunction_sb_cLdL::synapse0x30cb440() {
   return (neuron0x30b5450()*0.00391252);
}

double NNfunction_sb_cLdL::synapse0x30cb480() {
   return (neuron0x30b5790()*0.103275);
}

double NNfunction_sb_cLdL::synapse0x30cb4c0() {
   return (neuron0x30b5ad0()*-0.144754);
}

double NNfunction_sb_cLdL::synapse0x30cb840() {
   return (neuron0x30b0f10()*0.794955);
}

double NNfunction_sb_cLdL::synapse0x30bfe10() {
   return (neuron0x30b1250()*-0.00311914);
}

double NNfunction_sb_cLdL::synapse0x30bfe50() {
   return (neuron0x30b1590()*0.814108);
}

double NNfunction_sb_cLdL::synapse0x30bfe90() {
   return (neuron0x30b18d0()*-0.136564);
}

double NNfunction_sb_cLdL::synapse0x30c00e0() {
   return (neuron0x30b1c10()*-0.473786);
}

double NNfunction_sb_cLdL::synapse0x30c0120() {
   return (neuron0x30b1f50()*0.840735);
}

double NNfunction_sb_cLdL::synapse0x30c0160() {
   return (neuron0x30b2290()*0.0507621);
}

double NNfunction_sb_cLdL::synapse0x30c03b0() {
   return (neuron0x30b25d0()*0.0156621);
}

double NNfunction_sb_cLdL::synapse0x30c03f0() {
   return (neuron0x30b2910()*-0.274463);
}

double NNfunction_sb_cLdL::synapse0x30c0640() {
   return (neuron0x30b2c50()*0.161738);
}

double NNfunction_sb_cLdL::synapse0x30c0680() {
   return (neuron0x30b2f90()*-0.642615);
}

double NNfunction_sb_cLdL::synapse0x30c06c0() {
   return (neuron0x30b32d0()*-0.441641);
}

double NNfunction_sb_cLdL::synapse0x30c0910() {
   return (neuron0x30b3610()*0.199746);
}

double NNfunction_sb_cLdL::synapse0x30c0950() {
   return (neuron0x30b3950()*1.07259);
}

double NNfunction_sb_cLdL::synapse0x30c0ba0() {
   return (neuron0x30b3c90()*0.22957);
}

double NNfunction_sb_cLdL::synapse0x30c0be0() {
   return (neuron0x30b3fd0()*-0.25706);
}

double NNfunction_sb_cLdL::synapse0x30cb690() {
   return (neuron0x30b4310()*-0.662238);
}

double NNfunction_sb_cLdL::synapse0x30cb6d0() {
   return (neuron0x30b4870()*0.566139);
}

double NNfunction_sb_cLdL::synapse0x30c0d30() {
   return (neuron0x30b4a90()*0.294388);
}

double NNfunction_sb_cLdL::synapse0x30c1240() {
   return (neuron0x30b4dd0()*0.0446705);
}

double NNfunction_sb_cLdL::synapse0x30c1280() {
   return (neuron0x30b5110()*-0.0206142);
}

double NNfunction_sb_cLdL::synapse0x30c12c0() {
   return (neuron0x30b5450()*-0.213048);
}

double NNfunction_sb_cLdL::synapse0x30c1510() {
   return (neuron0x30b5790()*-0.5862);
}

double NNfunction_sb_cLdL::synapse0x30c1550() {
   return (neuron0x30b5ad0()*-0.427889);
}

double NNfunction_sb_cLdL::synapse0x30c0e00() {
   return (neuron0x30b0f10()*-0.0485025);
}

double NNfunction_sb_cLdL::synapse0x30c0e40() {
   return (neuron0x30b1250()*-0.0742553);
}

double NNfunction_sb_cLdL::synapse0x30c0e80() {
   return (neuron0x30b1590()*-0.51979);
}

double NNfunction_sb_cLdL::synapse0x30c0ec0() {
   return (neuron0x30b18d0()*-0.187407);
}

double NNfunction_sb_cLdL::synapse0x30c1840() {
   return (neuron0x30b1c10()*-0.0133086);
}

double NNfunction_sb_cLdL::synapse0x30cdb90() {
   return (neuron0x30b1f50()*-0.172056);
}

double NNfunction_sb_cLdL::synapse0x30cdbd0() {
   return (neuron0x30b2290()*0.00890087);
}

double NNfunction_sb_cLdL::synapse0x30cdc10() {
   return (neuron0x30b25d0()*-0.114717);
}

double NNfunction_sb_cLdL::synapse0x30cdc50() {
   return (neuron0x30b2910()*0.477271);
}

double NNfunction_sb_cLdL::synapse0x30cdc90() {
   return (neuron0x30b2c50()*-0.305044);
}

double NNfunction_sb_cLdL::synapse0x30cdcd0() {
   return (neuron0x30b2f90()*0.0766739);
}

double NNfunction_sb_cLdL::synapse0x30cdd10() {
   return (neuron0x30b32d0()*1.03153);
}

double NNfunction_sb_cLdL::synapse0x30cdd50() {
   return (neuron0x30b3610()*-0.24851);
}

double NNfunction_sb_cLdL::synapse0x30cdd90() {
   return (neuron0x30b3950()*-0.844179);
}

double NNfunction_sb_cLdL::synapse0x30cddd0() {
   return (neuron0x30b3c90()*0.194969);
}

double NNfunction_sb_cLdL::synapse0x30cde10() {
   return (neuron0x30b3fd0()*-0.0487598);
}

double NNfunction_sb_cLdL::synapse0x30c1720() {
   return (neuron0x30b4310()*-0.0871105);
}

double NNfunction_sb_cLdL::synapse0x30c1760() {
   return (neuron0x30b4870()*-0.751122);
}

double NNfunction_sb_cLdL::synapse0x30cdf60() {
   return (neuron0x30b4a90()*1.03426);
}

double NNfunction_sb_cLdL::synapse0x30cdfa0() {
   return (neuron0x30b4dd0()*-0.0501679);
}

double NNfunction_sb_cLdL::synapse0x30cdfe0() {
   return (neuron0x30b5110()*0.134357);
}

double NNfunction_sb_cLdL::synapse0x30ce020() {
   return (neuron0x30b5450()*0.703236);
}

double NNfunction_sb_cLdL::synapse0x30ce060() {
   return (neuron0x30b5790()*0.127457);
}

double NNfunction_sb_cLdL::synapse0x30ce0a0() {
   return (neuron0x30b5ad0()*0.849155);
}

double NNfunction_sb_cLdL::synapse0x30ce420() {
   return (neuron0x30b0f10()*-0.0355073);
}

double NNfunction_sb_cLdL::synapse0x30ce460() {
   return (neuron0x30b1250()*-0.0371836);
}

double NNfunction_sb_cLdL::synapse0x30ce4a0() {
   return (neuron0x30b1590()*-0.0394716);
}

double NNfunction_sb_cLdL::synapse0x30ce4e0() {
   return (neuron0x30b18d0()*2.30348);
}

double NNfunction_sb_cLdL::synapse0x30ce520() {
   return (neuron0x30b1c10()*0.0699004);
}

double NNfunction_sb_cLdL::synapse0x30ce560() {
   return (neuron0x30b1f50()*-0.00303833);
}

double NNfunction_sb_cLdL::synapse0x30ce5a0() {
   return (neuron0x30b2290()*-0.00127018);
}

double NNfunction_sb_cLdL::synapse0x30ce5e0() {
   return (neuron0x30b25d0()*-0.0620909);
}

double NNfunction_sb_cLdL::synapse0x30ce620() {
   return (neuron0x30b2910()*0.0140637);
}

double NNfunction_sb_cLdL::synapse0x30ce660() {
   return (neuron0x30b2c50()*0.0524116);
}

double NNfunction_sb_cLdL::synapse0x30ce6a0() {
   return (neuron0x30b2f90()*-0.035995);
}

double NNfunction_sb_cLdL::synapse0x30ce6e0() {
   return (neuron0x30b32d0()*-0.0547233);
}

double NNfunction_sb_cLdL::synapse0x30ce720() {
   return (neuron0x30b3610()*0.632739);
}

double NNfunction_sb_cLdL::synapse0x30ce760() {
   return (neuron0x30b3950()*-0.0139632);
}

double NNfunction_sb_cLdL::synapse0x30ce7a0() {
   return (neuron0x30b3c90()*0.00448992);
}

double NNfunction_sb_cLdL::synapse0x30ce7e0() {
   return (neuron0x30b3fd0()*-0.037519);
}

double NNfunction_sb_cLdL::synapse0x30ce270() {
   return (neuron0x30b4310()*-0.0519012);
}

double NNfunction_sb_cLdL::synapse0x30ce2b0() {
   return (neuron0x30b4870()*0.0303575);
}

double NNfunction_sb_cLdL::synapse0x30ce930() {
   return (neuron0x30b4a90()*0.0130437);
}

double NNfunction_sb_cLdL::synapse0x30ce970() {
   return (neuron0x30b4dd0()*0.0252377);
}

double NNfunction_sb_cLdL::synapse0x30ce9b0() {
   return (neuron0x30b5110()*0.0329695);
}

double NNfunction_sb_cLdL::synapse0x30ce9f0() {
   return (neuron0x30b5450()*0.00941565);
}

double NNfunction_sb_cLdL::synapse0x30cea30() {
   return (neuron0x30b5790()*-0.0346463);
}

double NNfunction_sb_cLdL::synapse0x30cea70() {
   return (neuron0x30b5ad0()*0.0678613);
}

double NNfunction_sb_cLdL::synapse0x30cedf0() {
   return (neuron0x30b0f10()*0.117002);
}

double NNfunction_sb_cLdL::synapse0x30cee30() {
   return (neuron0x30b1250()*0.327878);
}

double NNfunction_sb_cLdL::synapse0x30cee70() {
   return (neuron0x30b1590()*0.0607185);
}

double NNfunction_sb_cLdL::synapse0x30ceeb0() {
   return (neuron0x30b18d0()*1.49472);
}

double NNfunction_sb_cLdL::synapse0x30ceef0() {
   return (neuron0x30b1c10()*-0.217034);
}

double NNfunction_sb_cLdL::synapse0x30cef30() {
   return (neuron0x30b1f50()*-0.356562);
}

double NNfunction_sb_cLdL::synapse0x30cef70() {
   return (neuron0x30b2290()*-0.115527);
}

double NNfunction_sb_cLdL::synapse0x30cefb0() {
   return (neuron0x30b25d0()*0.575504);
}

double NNfunction_sb_cLdL::synapse0x30ceff0() {
   return (neuron0x30b2910()*-0.311639);
}

double NNfunction_sb_cLdL::synapse0x30cf030() {
   return (neuron0x30b2c50()*-0.416603);
}

double NNfunction_sb_cLdL::synapse0x30cf070() {
   return (neuron0x30b2f90()*0.141085);
}

double NNfunction_sb_cLdL::synapse0x30cf0b0() {
   return (neuron0x30b32d0()*0.793569);
}

double NNfunction_sb_cLdL::synapse0x30cf0f0() {
   return (neuron0x30b3610()*0.376865);
}

double NNfunction_sb_cLdL::synapse0x30cf130() {
   return (neuron0x30b3950()*0.114827);
}

double NNfunction_sb_cLdL::synapse0x30cf170() {
   return (neuron0x30b3c90()*-0.0667726);
}

double NNfunction_sb_cLdL::synapse0x30cf1b0() {
   return (neuron0x30b3fd0()*0.0304153);
}

double NNfunction_sb_cLdL::synapse0x30cec40() {
   return (neuron0x30b4310()*-0.00144993);
}

double NNfunction_sb_cLdL::synapse0x30cec80() {
   return (neuron0x30b4870()*-0.342815);
}

double NNfunction_sb_cLdL::synapse0x30cf300() {
   return (neuron0x30b4a90()*0.144361);
}

double NNfunction_sb_cLdL::synapse0x30cf340() {
   return (neuron0x30b4dd0()*0.0278772);
}

double NNfunction_sb_cLdL::synapse0x30cf380() {
   return (neuron0x30b5110()*-0.293585);
}

double NNfunction_sb_cLdL::synapse0x30cf3c0() {
   return (neuron0x30b5450()*0.258615);
}

double NNfunction_sb_cLdL::synapse0x30cf400() {
   return (neuron0x30b5790()*-0.111982);
}

double NNfunction_sb_cLdL::synapse0x30cf440() {
   return (neuron0x30b5ad0()*-0.0992768);
}

double NNfunction_sb_cLdL::synapse0x30cf7c0() {
   return (neuron0x30b0f10()*0.290259);
}

double NNfunction_sb_cLdL::synapse0x30cf800() {
   return (neuron0x30b1250()*0.399863);
}

double NNfunction_sb_cLdL::synapse0x30cf840() {
   return (neuron0x30b1590()*0.54034);
}

double NNfunction_sb_cLdL::synapse0x30cf880() {
   return (neuron0x30b18d0()*-0.169727);
}

double NNfunction_sb_cLdL::synapse0x30cf8c0() {
   return (neuron0x30b1c10()*0.317666);
}

double NNfunction_sb_cLdL::synapse0x30cf900() {
   return (neuron0x30b1f50()*0.315452);
}

double NNfunction_sb_cLdL::synapse0x30cf940() {
   return (neuron0x30b2290()*-0.369504);
}

double NNfunction_sb_cLdL::synapse0x30cf980() {
   return (neuron0x30b25d0()*-0.141959);
}

double NNfunction_sb_cLdL::synapse0x30cf9c0() {
   return (neuron0x30b2910()*-0.131431);
}

double NNfunction_sb_cLdL::synapse0x30cfa00() {
   return (neuron0x30b2c50()*0.404781);
}

double NNfunction_sb_cLdL::synapse0x30cfa40() {
   return (neuron0x30b2f90()*0.12999);
}

double NNfunction_sb_cLdL::synapse0x30cfa80() {
   return (neuron0x30b32d0()*0.188495);
}

double NNfunction_sb_cLdL::synapse0x30cfac0() {
   return (neuron0x30b3610()*-0.175177);
}

double NNfunction_sb_cLdL::synapse0x30cfb00() {
   return (neuron0x30b3950()*-0.26304);
}

double NNfunction_sb_cLdL::synapse0x30cfb40() {
   return (neuron0x30b3c90()*0.241963);
}

double NNfunction_sb_cLdL::synapse0x30cfb80() {
   return (neuron0x30b3fd0()*0.24646);
}

double NNfunction_sb_cLdL::synapse0x30cf610() {
   return (neuron0x30b4310()*0.348663);
}

double NNfunction_sb_cLdL::synapse0x30cf650() {
   return (neuron0x30b4870()*-0.447809);
}

double NNfunction_sb_cLdL::synapse0x30cfcd0() {
   return (neuron0x30b4a90()*-0.456686);
}

double NNfunction_sb_cLdL::synapse0x30cfd10() {
   return (neuron0x30b4dd0()*-0.341602);
}

double NNfunction_sb_cLdL::synapse0x30cfd50() {
   return (neuron0x30b5110()*0.431918);
}

double NNfunction_sb_cLdL::synapse0x30cfd90() {
   return (neuron0x30b5450()*-0.0285004);
}

double NNfunction_sb_cLdL::synapse0x30cfdd0() {
   return (neuron0x30b5790()*0.213476);
}

double NNfunction_sb_cLdL::synapse0x30cfe10() {
   return (neuron0x30b5ad0()*-0.105266);
}

double NNfunction_sb_cLdL::synapse0x30d0190() {
   return (neuron0x30b0f10()*-0.0517569);
}

double NNfunction_sb_cLdL::synapse0x30d01d0() {
   return (neuron0x30b1250()*0.110642);
}

double NNfunction_sb_cLdL::synapse0x30d0210() {
   return (neuron0x30b1590()*-0.289769);
}

double NNfunction_sb_cLdL::synapse0x30d0250() {
   return (neuron0x30b18d0()*-0.000610219);
}

double NNfunction_sb_cLdL::synapse0x30d0290() {
   return (neuron0x30b1c10()*-0.124067);
}

double NNfunction_sb_cLdL::synapse0x30d02d0() {
   return (neuron0x30b1f50()*0.0201431);
}

double NNfunction_sb_cLdL::synapse0x30d0310() {
   return (neuron0x30b2290()*-0.165425);
}

double NNfunction_sb_cLdL::synapse0x30d0350() {
   return (neuron0x30b25d0()*-0.12527);
}

double NNfunction_sb_cLdL::synapse0x30d0390() {
   return (neuron0x30b2910()*-0.0544205);
}

double NNfunction_sb_cLdL::synapse0x30d03d0() {
   return (neuron0x30b2c50()*-0.218909);
}

double NNfunction_sb_cLdL::synapse0x30d0410() {
   return (neuron0x30b2f90()*-0.201359);
}

double NNfunction_sb_cLdL::synapse0x30d0450() {
   return (neuron0x30b32d0()*-1.29574);
}

double NNfunction_sb_cLdL::synapse0x30d0490() {
   return (neuron0x30b3610()*-0.787633);
}

double NNfunction_sb_cLdL::synapse0x30d04d0() {
   return (neuron0x30b3950()*0.144661);
}

double NNfunction_sb_cLdL::synapse0x30d0510() {
   return (neuron0x30b3c90()*-0.449395);
}

double NNfunction_sb_cLdL::synapse0x30d0550() {
   return (neuron0x30b3fd0()*-0.206719);
}

double NNfunction_sb_cLdL::synapse0x30cffe0() {
   return (neuron0x30b4310()*-0.0712111);
}

double NNfunction_sb_cLdL::synapse0x30d0020() {
   return (neuron0x30b4870()*0.0897552);
}

double NNfunction_sb_cLdL::synapse0x30d06a0() {
   return (neuron0x30b4a90()*0.172696);
}

double NNfunction_sb_cLdL::synapse0x30d06e0() {
   return (neuron0x30b4dd0()*0.333182);
}

double NNfunction_sb_cLdL::synapse0x30d0720() {
   return (neuron0x30b5110()*0.0581479);
}

double NNfunction_sb_cLdL::synapse0x30d0760() {
   return (neuron0x30b5450()*0.188389);
}

double NNfunction_sb_cLdL::synapse0x30d07a0() {
   return (neuron0x30b5790()*0.0609872);
}

double NNfunction_sb_cLdL::synapse0x30d07e0() {
   return (neuron0x30b5ad0()*-0.146664);
}

double NNfunction_sb_cLdL::synapse0x30d0b60() {
   return (neuron0x30b0f10()*-0.517485);
}

double NNfunction_sb_cLdL::synapse0x30d0ba0() {
   return (neuron0x30b1250()*-0.172327);
}

double NNfunction_sb_cLdL::synapse0x30d0be0() {
   return (neuron0x30b1590()*0.37731);
}

double NNfunction_sb_cLdL::synapse0x30d0c20() {
   return (neuron0x30b18d0()*-0.230781);
}

double NNfunction_sb_cLdL::synapse0x30d0c60() {
   return (neuron0x30b1c10()*0.401289);
}

double NNfunction_sb_cLdL::synapse0x30d0ca0() {
   return (neuron0x30b1f50()*0.19858);
}

double NNfunction_sb_cLdL::synapse0x30d0ce0() {
   return (neuron0x30b2290()*-0.869472);
}

double NNfunction_sb_cLdL::synapse0x30d0d20() {
   return (neuron0x30b25d0()*0.254984);
}

double NNfunction_sb_cLdL::synapse0x30d0d60() {
   return (neuron0x30b2910()*0.0577123);
}

double NNfunction_sb_cLdL::synapse0x30d0da0() {
   return (neuron0x30b2c50()*0.24242);
}

double NNfunction_sb_cLdL::synapse0x30d0de0() {
   return (neuron0x30b2f90()*-0.0715921);
}

double NNfunction_sb_cLdL::synapse0x30d0e20() {
   return (neuron0x30b32d0()*0.146718);
}

double NNfunction_sb_cLdL::synapse0x30d0e60() {
   return (neuron0x30b3610()*0.366654);
}

double NNfunction_sb_cLdL::synapse0x30d0ea0() {
   return (neuron0x30b3950()*-1.06414);
}

double NNfunction_sb_cLdL::synapse0x30d0ee0() {
   return (neuron0x30b3c90()*-0.10405);
}

double NNfunction_sb_cLdL::synapse0x30d0f20() {
   return (neuron0x30b3fd0()*0.438991);
}

double NNfunction_sb_cLdL::synapse0x30d09b0() {
   return (neuron0x30b4310()*0.410802);
}

double NNfunction_sb_cLdL::synapse0x30d09f0() {
   return (neuron0x30b4870()*-0.52733);
}

double NNfunction_sb_cLdL::synapse0x30d1070() {
   return (neuron0x30b4a90()*-0.555505);
}

double NNfunction_sb_cLdL::synapse0x30d10b0() {
   return (neuron0x30b4dd0()*-0.877717);
}

double NNfunction_sb_cLdL::synapse0x30d10f0() {
   return (neuron0x30b5110()*0.0375851);
}

double NNfunction_sb_cLdL::synapse0x30d1130() {
   return (neuron0x30b5450()*0.419833);
}

double NNfunction_sb_cLdL::synapse0x30d1170() {
   return (neuron0x30b5790()*-0.401181);
}

double NNfunction_sb_cLdL::synapse0x30d11b0() {
   return (neuron0x30b5ad0()*0.364353);
}

double NNfunction_sb_cLdL::synapse0x30d1530() {
   return (neuron0x30b0f10()*-0.00711738);
}

double NNfunction_sb_cLdL::synapse0x30d1570() {
   return (neuron0x30b1250()*-0.167686);
}

double NNfunction_sb_cLdL::synapse0x30d15b0() {
   return (neuron0x30b1590()*0.443194);
}

double NNfunction_sb_cLdL::synapse0x30d15f0() {
   return (neuron0x30b18d0()*0.581768);
}

double NNfunction_sb_cLdL::synapse0x30d1630() {
   return (neuron0x30b1c10()*-0.4457);
}

double NNfunction_sb_cLdL::synapse0x30d1670() {
   return (neuron0x30b1f50()*0.087103);
}

double NNfunction_sb_cLdL::synapse0x30d16b0() {
   return (neuron0x30b2290()*0.0747307);
}

double NNfunction_sb_cLdL::synapse0x30d16f0() {
   return (neuron0x30b25d0()*0.0195087);
}

double NNfunction_sb_cLdL::synapse0x30d1730() {
   return (neuron0x30b2910()*0.277762);
}

double NNfunction_sb_cLdL::synapse0x30d1770() {
   return (neuron0x30b2c50()*0.123601);
}

double NNfunction_sb_cLdL::synapse0x30d17b0() {
   return (neuron0x30b2f90()*0.311456);
}

double NNfunction_sb_cLdL::synapse0x30d17f0() {
   return (neuron0x30b32d0()*0.168661);
}

double NNfunction_sb_cLdL::synapse0x30d1830() {
   return (neuron0x30b3610()*-0.779372);
}

double NNfunction_sb_cLdL::synapse0x30d1870() {
   return (neuron0x30b3950()*0.397193);
}

double NNfunction_sb_cLdL::synapse0x30d18b0() {
   return (neuron0x30b3c90()*-0.730669);
}

double NNfunction_sb_cLdL::synapse0x30d18f0() {
   return (neuron0x30b3fd0()*0.352023);
}

double NNfunction_sb_cLdL::synapse0x30d1380() {
   return (neuron0x30b4310()*0.393898);
}

double NNfunction_sb_cLdL::synapse0x30d13c0() {
   return (neuron0x30b4870()*-1.18823);
}

double NNfunction_sb_cLdL::synapse0x30d1a40() {
   return (neuron0x30b4a90()*0.176675);
}

double NNfunction_sb_cLdL::synapse0x30d1a80() {
   return (neuron0x30b4dd0()*0.190839);
}

double NNfunction_sb_cLdL::synapse0x30d1ac0() {
   return (neuron0x30b5110()*0.303953);
}

double NNfunction_sb_cLdL::synapse0x30d1b00() {
   return (neuron0x30b5450()*-0.25364);
}

double NNfunction_sb_cLdL::synapse0x30d1b40() {
   return (neuron0x30b5790()*0.180424);
}

double NNfunction_sb_cLdL::synapse0x30d1b80() {
   return (neuron0x30b5ad0()*0.0200762);
}

double NNfunction_sb_cLdL::synapse0x30d1f00() {
   return (neuron0x30b0f10()*-0.0718376);
}

double NNfunction_sb_cLdL::synapse0x30d1f40() {
   return (neuron0x30b1250()*-0.37468);
}

double NNfunction_sb_cLdL::synapse0x30d1f80() {
   return (neuron0x30b1590()*0.724571);
}

double NNfunction_sb_cLdL::synapse0x30d1fc0() {
   return (neuron0x30b18d0()*0.442017);
}

double NNfunction_sb_cLdL::synapse0x30d2000() {
   return (neuron0x30b1c10()*-0.203431);
}

double NNfunction_sb_cLdL::synapse0x30d2040() {
   return (neuron0x30b1f50()*0.20497);
}

double NNfunction_sb_cLdL::synapse0x30d2080() {
   return (neuron0x30b2290()*0.212065);
}

double NNfunction_sb_cLdL::synapse0x30d20c0() {
   return (neuron0x30b25d0()*0.229776);
}

double NNfunction_sb_cLdL::synapse0x30d2100() {
   return (neuron0x30b2910()*0.489671);
}

double NNfunction_sb_cLdL::synapse0x30d2140() {
   return (neuron0x30b2c50()*-0.0598363);
}

double NNfunction_sb_cLdL::synapse0x30d2180() {
   return (neuron0x30b2f90()*0.238701);
}

double NNfunction_sb_cLdL::synapse0x30d21c0() {
   return (neuron0x30b32d0()*0.904704);
}

double NNfunction_sb_cLdL::synapse0x30d2200() {
   return (neuron0x30b3610()*0.567346);
}

double NNfunction_sb_cLdL::synapse0x30d2240() {
   return (neuron0x30b3950()*-0.549434);
}

double NNfunction_sb_cLdL::synapse0x30d2280() {
   return (neuron0x30b3c90()*0.544123);
}

double NNfunction_sb_cLdL::synapse0x30d22c0() {
   return (neuron0x30b3fd0()*0.267622);
}

double NNfunction_sb_cLdL::synapse0x30d1d50() {
   return (neuron0x30b4310()*-0.0141799);
}

double NNfunction_sb_cLdL::synapse0x30d1d90() {
   return (neuron0x30b4870()*-0.172317);
}

double NNfunction_sb_cLdL::synapse0x30d2410() {
   return (neuron0x30b4a90()*-0.177018);
}

double NNfunction_sb_cLdL::synapse0x30d2450() {
   return (neuron0x30b4dd0()*-0.512867);
}

double NNfunction_sb_cLdL::synapse0x30d2490() {
   return (neuron0x30b5110()*-0.424069);
}

double NNfunction_sb_cLdL::synapse0x30d24d0() {
   return (neuron0x30b5450()*-0.245312);
}

double NNfunction_sb_cLdL::synapse0x30d2510() {
   return (neuron0x30b5790()*-0.823072);
}

double NNfunction_sb_cLdL::synapse0x30d2550() {
   return (neuron0x30b5ad0()*0.110216);
}

double NNfunction_sb_cLdL::synapse0x30bb000() {
   return (neuron0x30b0f10()*-0.0687658);
}

double NNfunction_sb_cLdL::synapse0x30bb040() {
   return (neuron0x30b1250()*-0.00717269);
}

double NNfunction_sb_cLdL::synapse0x30bb080() {
   return (neuron0x30b1590()*-0.849242);
}

double NNfunction_sb_cLdL::synapse0x30bb0c0() {
   return (neuron0x30b18d0()*-0.121884);
}

double NNfunction_sb_cLdL::synapse0x30bb100() {
   return (neuron0x30b1c10()*0.0503487);
}

double NNfunction_sb_cLdL::synapse0x30bb140() {
   return (neuron0x30b1f50()*-0.110391);
}

double NNfunction_sb_cLdL::synapse0x30bb180() {
   return (neuron0x30b2290()*-0.29859);
}

double NNfunction_sb_cLdL::synapse0x30bb1c0() {
   return (neuron0x30b25d0()*-0.0902947);
}

double NNfunction_sb_cLdL::synapse0x30d2ce0() {
   return (neuron0x30b2910()*0.0275564);
}

double NNfunction_sb_cLdL::synapse0x30d2d20() {
   return (neuron0x30b2c50()*0.26663);
}

double NNfunction_sb_cLdL::synapse0x30d2d60() {
   return (neuron0x30b2f90()*-0.369708);
}

double NNfunction_sb_cLdL::synapse0x30d2da0() {
   return (neuron0x30b32d0()*0.230615);
}

double NNfunction_sb_cLdL::synapse0x30d2de0() {
   return (neuron0x30b3610()*-0.0101619);
}

double NNfunction_sb_cLdL::synapse0x30d2e20() {
   return (neuron0x30b3950()*-0.0978658);
}

double NNfunction_sb_cLdL::synapse0x30d2e60() {
   return (neuron0x30b3c90()*-0.642605);
}

double NNfunction_sb_cLdL::synapse0x30d2ea0() {
   return (neuron0x30b3fd0()*-0.315532);
}

double NNfunction_sb_cLdL::synapse0x30d2720() {
   return (neuron0x30b4310()*-0.43972);
}

double NNfunction_sb_cLdL::synapse0x30d2760() {
   return (neuron0x30b4870()*-0.145158);
}

double NNfunction_sb_cLdL::synapse0x30d2ff0() {
   return (neuron0x30b4a90()*-0.178925);
}

double NNfunction_sb_cLdL::synapse0x30d3030() {
   return (neuron0x30b4dd0()*0.27537);
}

double NNfunction_sb_cLdL::synapse0x30d3070() {
   return (neuron0x30b5110()*-0.0524806);
}

double NNfunction_sb_cLdL::synapse0x30d30b0() {
   return (neuron0x30b5450()*-0.142024);
}

double NNfunction_sb_cLdL::synapse0x30d30f0() {
   return (neuron0x30b5790()*-0.137721);
}

double NNfunction_sb_cLdL::synapse0x30d3130() {
   return (neuron0x30b5ad0()*0.264476);
}

double NNfunction_sb_cLdL::synapse0x30d34b0() {
   return (neuron0x30b0f10()*-0.058198);
}

double NNfunction_sb_cLdL::synapse0x30d34f0() {
   return (neuron0x30b1250()*0.737975);
}

double NNfunction_sb_cLdL::synapse0x30d3530() {
   return (neuron0x30b1590()*0.0364446);
}

double NNfunction_sb_cLdL::synapse0x30d3570() {
   return (neuron0x30b18d0()*0.694693);
}

double NNfunction_sb_cLdL::synapse0x30d35b0() {
   return (neuron0x30b1c10()*0.356653);
}

double NNfunction_sb_cLdL::synapse0x30d35f0() {
   return (neuron0x30b1f50()*-1.17879);
}

double NNfunction_sb_cLdL::synapse0x30d3630() {
   return (neuron0x30b2290()*-0.719203);
}

double NNfunction_sb_cLdL::synapse0x30d3670() {
   return (neuron0x30b25d0()*0.164102);
}

double NNfunction_sb_cLdL::synapse0x30d36b0() {
   return (neuron0x30b2910()*-0.794008);
}

double NNfunction_sb_cLdL::synapse0x30d36f0() {
   return (neuron0x30b2c50()*-0.204438);
}

double NNfunction_sb_cLdL::synapse0x30d3730() {
   return (neuron0x30b2f90()*-0.72377);
}

double NNfunction_sb_cLdL::synapse0x30d3770() {
   return (neuron0x30b32d0()*0.805928);
}

double NNfunction_sb_cLdL::synapse0x30d37b0() {
   return (neuron0x30b3610()*0.427061);
}

double NNfunction_sb_cLdL::synapse0x30d37f0() {
   return (neuron0x30b3950()*-0.238778);
}

double NNfunction_sb_cLdL::synapse0x30d3830() {
   return (neuron0x30b3c90()*-0.243322);
}

double NNfunction_sb_cLdL::synapse0x30d3870() {
   return (neuron0x30b3fd0()*0.0713844);
}

double NNfunction_sb_cLdL::synapse0x30d3300() {
   return (neuron0x30b4310()*0.0218398);
}

double NNfunction_sb_cLdL::synapse0x30d3340() {
   return (neuron0x30b4870()*-0.303636);
}

double NNfunction_sb_cLdL::synapse0x30d39c0() {
   return (neuron0x30b4a90()*-0.290243);
}

double NNfunction_sb_cLdL::synapse0x30d3a00() {
   return (neuron0x30b4dd0()*-0.151202);
}

double NNfunction_sb_cLdL::synapse0x30d3a40() {
   return (neuron0x30b5110()*-0.553406);
}

double NNfunction_sb_cLdL::synapse0x30d3a80() {
   return (neuron0x30b5450()*0.328641);
}

double NNfunction_sb_cLdL::synapse0x30d3ac0() {
   return (neuron0x30b5790()*-0.101563);
}

double NNfunction_sb_cLdL::synapse0x30d3b00() {
   return (neuron0x30b5ad0()*-0.0084147);
}

double NNfunction_sb_cLdL::synapse0x30d3e80() {
   return (neuron0x30b0f10()*0.216594);
}

double NNfunction_sb_cLdL::synapse0x30d3ec0() {
   return (neuron0x30b1250()*0.0175274);
}

double NNfunction_sb_cLdL::synapse0x30d3f00() {
   return (neuron0x30b1590()*0.195408);
}

double NNfunction_sb_cLdL::synapse0x30d3f40() {
   return (neuron0x30b18d0()*1.07965);
}

double NNfunction_sb_cLdL::synapse0x30d3f80() {
   return (neuron0x30b1c10()*0.28025);
}

double NNfunction_sb_cLdL::synapse0x30d3fc0() {
   return (neuron0x30b1f50()*-0.367149);
}

double NNfunction_sb_cLdL::synapse0x30d4000() {
   return (neuron0x30b2290()*-0.332867);
}

double NNfunction_sb_cLdL::synapse0x30d4040() {
   return (neuron0x30b25d0()*0.467931);
}

double NNfunction_sb_cLdL::synapse0x30d4080() {
   return (neuron0x30b2910()*0.262363);
}

double NNfunction_sb_cLdL::synapse0x30d40c0() {
   return (neuron0x30b2c50()*0.203625);
}

double NNfunction_sb_cLdL::synapse0x30d4100() {
   return (neuron0x30b2f90()*-0.145758);
}

double NNfunction_sb_cLdL::synapse0x30d4140() {
   return (neuron0x30b32d0()*0.134287);
}

double NNfunction_sb_cLdL::synapse0x30d4180() {
   return (neuron0x30b3610()*0.125567);
}

double NNfunction_sb_cLdL::synapse0x30d41c0() {
   return (neuron0x30b3950()*-0.541759);
}

double NNfunction_sb_cLdL::synapse0x30d4200() {
   return (neuron0x30b3c90()*-0.00132085);
}

double NNfunction_sb_cLdL::synapse0x30d4240() {
   return (neuron0x30b3fd0()*-0.0127607);
}

double NNfunction_sb_cLdL::synapse0x30d3cd0() {
   return (neuron0x30b4310()*0.34065);
}

double NNfunction_sb_cLdL::synapse0x30d3d10() {
   return (neuron0x30b4870()*0.654608);
}

double NNfunction_sb_cLdL::synapse0x30c4840() {
   return (neuron0x30b4a90()*0.150002);
}

double NNfunction_sb_cLdL::synapse0x30c4880() {
   return (neuron0x30b4dd0()*-0.00441789);
}

double NNfunction_sb_cLdL::synapse0x30c48c0() {
   return (neuron0x30b5110()*-0.046337);
}

double NNfunction_sb_cLdL::synapse0x30c4900() {
   return (neuron0x30b5450()*-0.281263);
}

double NNfunction_sb_cLdL::synapse0x30c4940() {
   return (neuron0x30b5790()*-0.291713);
}

double NNfunction_sb_cLdL::synapse0x30c4980() {
   return (neuron0x30b5ad0()*0.000406061);
}

double NNfunction_sb_cLdL::synapse0x30c4d00() {
   return (neuron0x30b0f10()*-0.326501);
}

double NNfunction_sb_cLdL::synapse0x30c4d40() {
   return (neuron0x30b1250()*-0.0620656);
}

double NNfunction_sb_cLdL::synapse0x30c4d80() {
   return (neuron0x30b1590()*0.338499);
}

double NNfunction_sb_cLdL::synapse0x30c4dc0() {
   return (neuron0x30b18d0()*0.1824);
}

double NNfunction_sb_cLdL::synapse0x30c4e00() {
   return (neuron0x30b1c10()*0.758322);
}

double NNfunction_sb_cLdL::synapse0x30c4e40() {
   return (neuron0x30b1f50()*0.106129);
}

double NNfunction_sb_cLdL::synapse0x30c4e80() {
   return (neuron0x30b2290()*0.567776);
}

double NNfunction_sb_cLdL::synapse0x30c4ec0() {
   return (neuron0x30b25d0()*-0.818917);
}

double NNfunction_sb_cLdL::synapse0x30c4f00() {
   return (neuron0x30b2910()*0.158419);
}

double NNfunction_sb_cLdL::synapse0x30c4f40() {
   return (neuron0x30b2c50()*-0.355026);
}

double NNfunction_sb_cLdL::synapse0x30c4f80() {
   return (neuron0x30b2f90()*0.57226);
}

double NNfunction_sb_cLdL::synapse0x30c4fc0() {
   return (neuron0x30b32d0()*0.382003);
}

double NNfunction_sb_cLdL::synapse0x30c5000() {
   return (neuron0x30b3610()*0.910883);
}

double NNfunction_sb_cLdL::synapse0x30c5040() {
   return (neuron0x30b3950()*-0.143996);
}

double NNfunction_sb_cLdL::synapse0x30c5080() {
   return (neuron0x30b3c90()*-0.13566);
}

double NNfunction_sb_cLdL::synapse0x30c50c0() {
   return (neuron0x30b3fd0()*0.530905);
}

double NNfunction_sb_cLdL::synapse0x30c4b50() {
   return (neuron0x30b4310()*-0.347723);
}

double NNfunction_sb_cLdL::synapse0x30c4b90() {
   return (neuron0x30b4870()*0.147167);
}

double NNfunction_sb_cLdL::synapse0x30c5210() {
   return (neuron0x30b4a90()*0.337724);
}

double NNfunction_sb_cLdL::synapse0x30c5250() {
   return (neuron0x30b4dd0()*0.42608);
}

double NNfunction_sb_cLdL::synapse0x30c5290() {
   return (neuron0x30b5110()*-0.568525);
}

double NNfunction_sb_cLdL::synapse0x30c52d0() {
   return (neuron0x30b5450()*-0.127023);
}

double NNfunction_sb_cLdL::synapse0x30c5310() {
   return (neuron0x30b5790()*-0.330638);
}

double NNfunction_sb_cLdL::synapse0x30c5350() {
   return (neuron0x30b5ad0()*0.141212);
}

double NNfunction_sb_cLdL::synapse0x30c56d0() {
   return (neuron0x30b0f10()*0.593761);
}

double NNfunction_sb_cLdL::synapse0x30c5710() {
   return (neuron0x30b1250()*0.147189);
}

double NNfunction_sb_cLdL::synapse0x30c5750() {
   return (neuron0x30b1590()*0.983949);
}

double NNfunction_sb_cLdL::synapse0x30c5790() {
   return (neuron0x30b18d0()*-0.732873);
}

double NNfunction_sb_cLdL::synapse0x30c57d0() {
   return (neuron0x30b1c10()*0.342195);
}

double NNfunction_sb_cLdL::synapse0x30c5810() {
   return (neuron0x30b1f50()*-0.270393);
}

double NNfunction_sb_cLdL::synapse0x30c5850() {
   return (neuron0x30b2290()*0.74265);
}

double NNfunction_sb_cLdL::synapse0x30c5890() {
   return (neuron0x30b25d0()*0.578226);
}

double NNfunction_sb_cLdL::synapse0x30c58d0() {
   return (neuron0x30b2910()*0.0324419);
}

double NNfunction_sb_cLdL::synapse0x30c5910() {
   return (neuron0x30b2c50()*0.330263);
}

double NNfunction_sb_cLdL::synapse0x30c5950() {
   return (neuron0x30b2f90()*-0.69941);
}

double NNfunction_sb_cLdL::synapse0x30c5990() {
   return (neuron0x30b32d0()*-0.267944);
}

double NNfunction_sb_cLdL::synapse0x30c59d0() {
   return (neuron0x30b3610()*-1.0004);
}

double NNfunction_sb_cLdL::synapse0x30c5a10() {
   return (neuron0x30b3950()*0.105692);
}

double NNfunction_sb_cLdL::synapse0x30c5a50() {
   return (neuron0x30b3c90()*-0.211652);
}

double NNfunction_sb_cLdL::synapse0x30c5a90() {
   return (neuron0x30b3fd0()*0.485502);
}

double NNfunction_sb_cLdL::synapse0x30c5520() {
   return (neuron0x30b4310()*0.215409);
}

double NNfunction_sb_cLdL::synapse0x30c5560() {
   return (neuron0x30b4870()*-0.255101);
}

double NNfunction_sb_cLdL::synapse0x30c5be0() {
   return (neuron0x30b4a90()*0.617021);
}

double NNfunction_sb_cLdL::synapse0x30c5c20() {
   return (neuron0x30b4dd0()*-0.408769);
}

double NNfunction_sb_cLdL::synapse0x30c5c60() {
   return (neuron0x30b5110()*0.0157174);
}

double NNfunction_sb_cLdL::synapse0x30c5ca0() {
   return (neuron0x30b5450()*-0.284184);
}

double NNfunction_sb_cLdL::synapse0x30c5ce0() {
   return (neuron0x30b5790()*0.0291204);
}

double NNfunction_sb_cLdL::synapse0x30c5d20() {
   return (neuron0x30b5ad0()*0.0739584);
}

double NNfunction_sb_cLdL::synapse0x30c60a0() {
   return (neuron0x30b0f10()*0.691047);
}

double NNfunction_sb_cLdL::synapse0x30c60e0() {
   return (neuron0x30b1250()*0.252934);
}

double NNfunction_sb_cLdL::synapse0x30c6120() {
   return (neuron0x30b1590()*0.288604);
}

double NNfunction_sb_cLdL::synapse0x30c6160() {
   return (neuron0x30b18d0()*1.01455);
}

double NNfunction_sb_cLdL::synapse0x30c61a0() {
   return (neuron0x30b1c10()*0.0254568);
}

double NNfunction_sb_cLdL::synapse0x30c61e0() {
   return (neuron0x30b1f50()*0.0811139);
}

double NNfunction_sb_cLdL::synapse0x30c6220() {
   return (neuron0x30b2290()*0.644677);
}

double NNfunction_sb_cLdL::synapse0x30c6260() {
   return (neuron0x30b25d0()*0.0162815);
}

double NNfunction_sb_cLdL::synapse0x30c62a0() {
   return (neuron0x30b2910()*-0.807307);
}

double NNfunction_sb_cLdL::synapse0x30c62e0() {
   return (neuron0x30b2c50()*-0.296219);
}

double NNfunction_sb_cLdL::synapse0x30c6320() {
   return (neuron0x30b2f90()*0.115016);
}

double NNfunction_sb_cLdL::synapse0x30c6360() {
   return (neuron0x30b32d0()*0.534058);
}

double NNfunction_sb_cLdL::synapse0x30c63a0() {
   return (neuron0x30b3610()*1.60807);
}

double NNfunction_sb_cLdL::synapse0x30c63e0() {
   return (neuron0x30b3950()*-0.315078);
}

double NNfunction_sb_cLdL::synapse0x30c6420() {
   return (neuron0x30b3c90()*-0.199356);
}

double NNfunction_sb_cLdL::synapse0x30c6460() {
   return (neuron0x30b3fd0()*0.283903);
}

double NNfunction_sb_cLdL::synapse0x30c5ef0() {
   return (neuron0x30b4310()*-0.356513);
}

double NNfunction_sb_cLdL::synapse0x30c5f30() {
   return (neuron0x30b4870()*-0.583384);
}

double NNfunction_sb_cLdL::synapse0x30c65b0() {
   return (neuron0x30b4a90()*0.131658);
}

double NNfunction_sb_cLdL::synapse0x30c65f0() {
   return (neuron0x30b4dd0()*0.467211);
}

double NNfunction_sb_cLdL::synapse0x30c6630() {
   return (neuron0x30b5110()*-0.38484);
}

double NNfunction_sb_cLdL::synapse0x30c6670() {
   return (neuron0x30b5450()*0.316965);
}

double NNfunction_sb_cLdL::synapse0x30c66b0() {
   return (neuron0x30b5790()*-0.460793);
}

double NNfunction_sb_cLdL::synapse0x30c66f0() {
   return (neuron0x30b5ad0()*-0.296378);
}

double NNfunction_sb_cLdL::synapse0x30d85c0() {
   return (neuron0x30b0f10()*0.969989);
}

double NNfunction_sb_cLdL::synapse0x30d8600() {
   return (neuron0x30b1250()*-0.0345026);
}

double NNfunction_sb_cLdL::synapse0x30d8640() {
   return (neuron0x30b1590()*-0.25761);
}

double NNfunction_sb_cLdL::synapse0x30d8680() {
   return (neuron0x30b18d0()*-0.417005);
}

double NNfunction_sb_cLdL::synapse0x30d86c0() {
   return (neuron0x30b1c10()*0.920056);
}

double NNfunction_sb_cLdL::synapse0x30d8700() {
   return (neuron0x30b1f50()*-0.189733);
}

double NNfunction_sb_cLdL::synapse0x30d8740() {
   return (neuron0x30b2290()*-0.519471);
}

double NNfunction_sb_cLdL::synapse0x30d8780() {
   return (neuron0x30b25d0()*0.0682001);
}

double NNfunction_sb_cLdL::synapse0x30d87c0() {
   return (neuron0x30b2910()*0.0858339);
}

double NNfunction_sb_cLdL::synapse0x30d8800() {
   return (neuron0x30b2c50()*-0.36661);
}

double NNfunction_sb_cLdL::synapse0x30d8840() {
   return (neuron0x30b2f90()*-0.190714);
}

double NNfunction_sb_cLdL::synapse0x30d8880() {
   return (neuron0x30b32d0()*1.27834);
}

double NNfunction_sb_cLdL::synapse0x30d88c0() {
   return (neuron0x30b3610()*-0.0676034);
}

double NNfunction_sb_cLdL::synapse0x30d8900() {
   return (neuron0x30b3950()*0.0786336);
}

double NNfunction_sb_cLdL::synapse0x30d8940() {
   return (neuron0x30b3c90()*0.0292359);
}

double NNfunction_sb_cLdL::synapse0x30d8980() {
   return (neuron0x30b3fd0()*-0.744234);
}

double NNfunction_sb_cLdL::synapse0x30c6730() {
   return (neuron0x30b4310()*0.296538);
}

double NNfunction_sb_cLdL::synapse0x30c6770() {
   return (neuron0x30b4870()*0.336792);
}

double NNfunction_sb_cLdL::synapse0x30d8ad0() {
   return (neuron0x30b4a90()*-0.0371563);
}

double NNfunction_sb_cLdL::synapse0x30d8b10() {
   return (neuron0x30b4dd0()*0.0176045);
}

double NNfunction_sb_cLdL::synapse0x30d8b50() {
   return (neuron0x30b5110()*-0.0425191);
}

double NNfunction_sb_cLdL::synapse0x30d8b90() {
   return (neuron0x30b5450()*-0.168889);
}

double NNfunction_sb_cLdL::synapse0x30d8bd0() {
   return (neuron0x30b5790()*-0.0380757);
}

double NNfunction_sb_cLdL::synapse0x30d8c10() {
   return (neuron0x30b5ad0()*-0.452888);
}

double NNfunction_sb_cLdL::synapse0x30d8f90() {
   return (neuron0x30b0f10()*-0.0133738);
}

double NNfunction_sb_cLdL::synapse0x30d8fd0() {
   return (neuron0x30b1250()*-0.00527755);
}

double NNfunction_sb_cLdL::synapse0x30d9010() {
   return (neuron0x30b1590()*-0.022133);
}

double NNfunction_sb_cLdL::synapse0x30d9050() {
   return (neuron0x30b18d0()*-0.0489249);
}

double NNfunction_sb_cLdL::synapse0x30d9090() {
   return (neuron0x30b1c10()*0.00181254);
}

double NNfunction_sb_cLdL::synapse0x30d90d0() {
   return (neuron0x30b1f50()*-0.00109753);
}

double NNfunction_sb_cLdL::synapse0x30d9110() {
   return (neuron0x30b2290()*0.00725128);
}

double NNfunction_sb_cLdL::synapse0x30d9150() {
   return (neuron0x30b25d0()*-0.00830161);
}

double NNfunction_sb_cLdL::synapse0x30d9190() {
   return (neuron0x30b2910()*-0.00213071);
}

double NNfunction_sb_cLdL::synapse0x30d91d0() {
   return (neuron0x30b2c50()*0.00156056);
}

double NNfunction_sb_cLdL::synapse0x30d9210() {
   return (neuron0x30b2f90()*0.000176731);
}

double NNfunction_sb_cLdL::synapse0x30d9250() {
   return (neuron0x30b32d0()*0.711907);
}

double NNfunction_sb_cLdL::synapse0x30d9290() {
   return (neuron0x30b3610()*-0.173091);
}

double NNfunction_sb_cLdL::synapse0x30d92d0() {
   return (neuron0x30b3950()*0.00553047);
}

double NNfunction_sb_cLdL::synapse0x30d9310() {
   return (neuron0x30b3c90()*0.00601026);
}

double NNfunction_sb_cLdL::synapse0x30d9350() {
   return (neuron0x30b3fd0()*-0.00459444);
}

double NNfunction_sb_cLdL::synapse0x30d8de0() {
   return (neuron0x30b4310()*-0.00827418);
}

double NNfunction_sb_cLdL::synapse0x30d8e20() {
   return (neuron0x30b4870()*0.00217148);
}

double NNfunction_sb_cLdL::synapse0x30d94a0() {
   return (neuron0x30b4a90()*0.00443032);
}

double NNfunction_sb_cLdL::synapse0x30d94e0() {
   return (neuron0x30b4dd0()*0.00885678);
}

double NNfunction_sb_cLdL::synapse0x30d9520() {
   return (neuron0x30b5110()*-0.00598154);
}

double NNfunction_sb_cLdL::synapse0x30d9560() {
   return (neuron0x30b5450()*-0.00444858);
}

double NNfunction_sb_cLdL::synapse0x30d95a0() {
   return (neuron0x30b5790()*-0.0104953);
}

double NNfunction_sb_cLdL::synapse0x30d95e0() {
   return (neuron0x30b5ad0()*0.0068464);
}

double NNfunction_sb_cLdL::synapse0x30d9960() {
   return (neuron0x30b0f10()*0.601357);
}

double NNfunction_sb_cLdL::synapse0x30d99a0() {
   return (neuron0x30b1250()*-0.0842465);
}

double NNfunction_sb_cLdL::synapse0x30d99e0() {
   return (neuron0x30b1590()*-0.0185084);
}

double NNfunction_sb_cLdL::synapse0x30d9a20() {
   return (neuron0x30b18d0()*-0.369754);
}

double NNfunction_sb_cLdL::synapse0x30d9a60() {
   return (neuron0x30b1c10()*0.567779);
}

double NNfunction_sb_cLdL::synapse0x30d9aa0() {
   return (neuron0x30b1f50()*-0.3384);
}

double NNfunction_sb_cLdL::synapse0x30d9ae0() {
   return (neuron0x30b2290()*-0.0116001);
}

double NNfunction_sb_cLdL::synapse0x30d9b20() {
   return (neuron0x30b25d0()*0.147409);
}

double NNfunction_sb_cLdL::synapse0x30d9b60() {
   return (neuron0x30b2910()*0.262575);
}

double NNfunction_sb_cLdL::synapse0x30d9ba0() {
   return (neuron0x30b2c50()*0.0931526);
}

double NNfunction_sb_cLdL::synapse0x30d9be0() {
   return (neuron0x30b2f90()*0.647378);
}

double NNfunction_sb_cLdL::synapse0x30d9c20() {
   return (neuron0x30b32d0()*0.748184);
}

double NNfunction_sb_cLdL::synapse0x30d9c60() {
   return (neuron0x30b3610()*-0.0755955);
}

double NNfunction_sb_cLdL::synapse0x30d9ca0() {
   return (neuron0x30b3950()*-0.270901);
}

double NNfunction_sb_cLdL::synapse0x30d9ce0() {
   return (neuron0x30b3c90()*0.11824);
}

double NNfunction_sb_cLdL::synapse0x30d9d20() {
   return (neuron0x30b3fd0()*-0.101695);
}

double NNfunction_sb_cLdL::synapse0x30d97b0() {
   return (neuron0x30b4310()*0.123609);
}

double NNfunction_sb_cLdL::synapse0x30d97f0() {
   return (neuron0x30b4870()*-0.0349255);
}

double NNfunction_sb_cLdL::synapse0x30d9e70() {
   return (neuron0x30b4a90()*0.224406);
}

double NNfunction_sb_cLdL::synapse0x30d9eb0() {
   return (neuron0x30b4dd0()*-0.265631);
}

double NNfunction_sb_cLdL::synapse0x30d9ef0() {
   return (neuron0x30b5110()*0.513197);
}

double NNfunction_sb_cLdL::synapse0x30d9f30() {
   return (neuron0x30b5450()*0.1207);
}

double NNfunction_sb_cLdL::synapse0x30d9f70() {
   return (neuron0x30b5790()*-0.0383985);
}

double NNfunction_sb_cLdL::synapse0x30d9fb0() {
   return (neuron0x30b5ad0()*0.185579);
}

double NNfunction_sb_cLdL::synapse0x30da330() {
   return (neuron0x30b0f10()*-0.0120041);
}

double NNfunction_sb_cLdL::synapse0x30da370() {
   return (neuron0x30b1250()*-0.015866);
}

double NNfunction_sb_cLdL::synapse0x30da3b0() {
   return (neuron0x30b1590()*-0.0406843);
}

double NNfunction_sb_cLdL::synapse0x30da3f0() {
   return (neuron0x30b18d0()*0.00597466);
}

double NNfunction_sb_cLdL::synapse0x30da430() {
   return (neuron0x30b1c10()*-0.0127978);
}

double NNfunction_sb_cLdL::synapse0x30da470() {
   return (neuron0x30b1f50()*-0.0205231);
}

double NNfunction_sb_cLdL::synapse0x30da4b0() {
   return (neuron0x30b2290()*0.0178332);
}

double NNfunction_sb_cLdL::synapse0x30da4f0() {
   return (neuron0x30b25d0()*-0.00527793);
}

double NNfunction_sb_cLdL::synapse0x30da530() {
   return (neuron0x30b2910()*-0.0405252);
}

double NNfunction_sb_cLdL::synapse0x30da570() {
   return (neuron0x30b2c50()*-0.00789188);
}

double NNfunction_sb_cLdL::synapse0x30da5b0() {
   return (neuron0x30b2f90()*-0.00224176);
}

double NNfunction_sb_cLdL::synapse0x30da5f0() {
   return (neuron0x30b32d0()*1.93245);
}

double NNfunction_sb_cLdL::synapse0x30da630() {
   return (neuron0x30b3610()*-0.121672);
}

double NNfunction_sb_cLdL::synapse0x30da670() {
   return (neuron0x30b3950()*0.0101505);
}

double NNfunction_sb_cLdL::synapse0x30da6b0() {
   return (neuron0x30b3c90()*0.0365202);
}

double NNfunction_sb_cLdL::synapse0x30da6f0() {
   return (neuron0x30b3fd0()*0.018977);
}

double NNfunction_sb_cLdL::synapse0x30da180() {
   return (neuron0x30b4310()*0.00532729);
}

double NNfunction_sb_cLdL::synapse0x30da1c0() {
   return (neuron0x30b4870()*0.00650005);
}

double NNfunction_sb_cLdL::synapse0x30da840() {
   return (neuron0x30b4a90()*0.00153614);
}

double NNfunction_sb_cLdL::synapse0x30da880() {
   return (neuron0x30b4dd0()*0.0318643);
}

double NNfunction_sb_cLdL::synapse0x30da8c0() {
   return (neuron0x30b5110()*-0.0276187);
}

double NNfunction_sb_cLdL::synapse0x30da900() {
   return (neuron0x30b5450()*-0.0159525);
}

double NNfunction_sb_cLdL::synapse0x30da940() {
   return (neuron0x30b5790()*-0.00570332);
}

double NNfunction_sb_cLdL::synapse0x30da980() {
   return (neuron0x30b5ad0()*0.0219091);
}

double NNfunction_sb_cLdL::synapse0x30b6f20() {
   return (neuron0x30b5f70()*0.501587);
}

double NNfunction_sb_cLdL::synapse0x30b6f60() {
   return (neuron0x30b6880()*0.225196);
}

double NNfunction_sb_cLdL::synapse0x30b8430() {
   return (neuron0x30b7360()*0.581499);
}

double NNfunction_sb_cLdL::synapse0x30b8470() {
   return (neuron0x2e7a730()*-0.263569);
}

double NNfunction_sb_cLdL::synapse0x30b8e00() {
   return (neuron0x30b8180()*-0.332432);
}

double NNfunction_sb_cLdL::synapse0x30b8e40() {
   return (neuron0x30b8b50()*0.609597);
}

double NNfunction_sb_cLdL::synapse0x30b9bd0() {
   return (neuron0x30b9920()*-0.287257);
}

double NNfunction_sb_cLdL::synapse0x30b9c10() {
   return (neuron0x30ba2f0()*0.184437);
}

double NNfunction_sb_cLdL::synapse0x30ba5a0() {
   return (neuron0x30bacc0()*-0.0959853);
}

double NNfunction_sb_cLdL::synapse0x30ba5e0() {
   return (neuron0x30bb7a0()*0.232515);
}

double NNfunction_sb_cLdL::synapse0x30baf70() {
   return (neuron0x30bc170()*1.00729);
}

double NNfunction_sb_cLdL::synapse0x30bafb0() {
   return (neuron0x30b9250()*0.39113);
}

double NNfunction_sb_cLdL::synapse0x30bba50() {
   return (neuron0x30bdd20()*-0.0351366);
}

double NNfunction_sb_cLdL::synapse0x30bba90() {
   return (neuron0x30be6f0()*0.428201);
}

double NNfunction_sb_cLdL::synapse0x30bc420() {
   return (neuron0x30bf0c0()*-0.0790019);
}

double NNfunction_sb_cLdL::synapse0x30bc460() {
   return (neuron0x30bfa90()*0.789014);
}

double NNfunction_sb_cLdL::synapse0x30b9500() {
   return (neuron0x30c18a0()*0.548882);
}

double NNfunction_sb_cLdL::synapse0x30b9540() {
   return (neuron0x30c1b80()*-0.434195);
}

double NNfunction_sb_cLdL::synapse0x30bdfd0() {
   return (neuron0x30c2550()*-0.370763);
}

double NNfunction_sb_cLdL::synapse0x30be010() {
   return (neuron0x30c2f20()*0.218232);
}

double NNfunction_sb_cLdL::synapse0x30be9a0() {
   return (neuron0x30c38f0()*0.454199);
}

double NNfunction_sb_cLdL::synapse0x30be9e0() {
   return (neuron0x30c42c0()*0.159472);
}

double NNfunction_sb_cLdL::synapse0x30bf370() {
   return (neuron0x30bce10()*0.597316);
}

double NNfunction_sb_cLdL::synapse0x30bf3b0() {
   return (neuron0x30bd7e0()*0.761212);
}

double NNfunction_sb_cLdL::synapse0x30bfd40() {
   return (neuron0x30c7050()*0.0773167);
}

double NNfunction_sb_cLdL::synapse0x30bfd80() {
   return (neuron0x30c7a20()*0.430523);
}

double NNfunction_sb_cLdL::synapse0x30b3eb0() {
   return (neuron0x30c83f0()*0.339935);
}

double NNfunction_sb_cLdL::synapse0x30b3ef0() {
   return (neuron0x30c8dc0()*-0.095364);
}

double NNfunction_sb_cLdL::synapse0x30c1e30() {
   return (neuron0x30c9790()*0.202446);
}

double NNfunction_sb_cLdL::synapse0x30c1e70() {
   return (neuron0x30ca160()*0.185429);
}

double NNfunction_sb_cLdL::synapse0x30c2800() {
   return (neuron0x30cab30()*0.554098);
}

double NNfunction_sb_cLdL::synapse0x30c2840() {
   return (neuron0x30cb500()*0.779254);
}

double NNfunction_sb_cLdL::synapse0x30c31d0() {
   return (neuron0x30c1590()*0.897914);
}

double NNfunction_sb_cLdL::synapse0x30c3210() {
   return (neuron0x30ce0e0()*-0.023404);
}

double NNfunction_sb_cLdL::synapse0x30c3ba0() {
   return (neuron0x30ceab0()*0.651199);
}

double NNfunction_sb_cLdL::synapse0x30c3be0() {
   return (neuron0x30cf480()*0.876893);
}

double NNfunction_sb_cLdL::synapse0x30c4570() {
   return (neuron0x30cfe50()*-0.287287);
}

double NNfunction_sb_cLdL::synapse0x30c45b0() {
   return (neuron0x30d0820()*-0.490115);
}

double NNfunction_sb_cLdL::synapse0x30bd0c0() {
   return (neuron0x30d11f0()*0.474087);
}

double NNfunction_sb_cLdL::synapse0x30bd100() {
   return (neuron0x30d1bc0()*-0.0161795);
}

double NNfunction_sb_cLdL::synapse0x30c6970() {
   return (neuron0x30d2590()*0.112422);
}

double NNfunction_sb_cLdL::synapse0x30c69b0() {
   return (neuron0x30d3170()*0.279469);
}

double NNfunction_sb_cLdL::synapse0x30c7300() {
   return (neuron0x30d3b40()*0.614912);
}

double NNfunction_sb_cLdL::synapse0x30c7340() {
   return (neuron0x30c49c0()*0.598796);
}

double NNfunction_sb_cLdL::synapse0x30c7cd0() {
   return (neuron0x30c5390()*0.0458982);
}

double NNfunction_sb_cLdL::synapse0x30c7d10() {
   return (neuron0x30c5d60()*0.0861361);
}

double NNfunction_sb_cLdL::synapse0x30c86a0() {
   return (neuron0x30d83a0()*0.55083);
}

double NNfunction_sb_cLdL::synapse0x30c86e0() {
   return (neuron0x30d8c50()*0.339981);
}

double NNfunction_sb_cLdL::synapse0x30c9070() {
   return (neuron0x30d9620()*0.185534);
}

double NNfunction_sb_cLdL::synapse0x30c90b0() {
   return (neuron0x30d9ff0()*0.335049);
}

double NNfunction_sb_cLdL::synapse0x30cb7b0() {
   return (neuron0x30b5f70()*-0.14559);
}

double NNfunction_sb_cLdL::synapse0x30cb7f0() {
   return (neuron0x30b6880()*-0.160046);
}

double NNfunction_sb_cLdL::synapse0x30c0d70() {
   return (neuron0x30b7360()*0.0398339);
}

double NNfunction_sb_cLdL::synapse0x30c0db0() {
   return (neuron0x2e7a730()*0.21066);
}

double NNfunction_sb_cLdL::synapse0x30ce390() {
   return (neuron0x30b8180()*0.501136);
}

double NNfunction_sb_cLdL::synapse0x30ce3d0() {
   return (neuron0x30b8b50()*0.324429);
}

double NNfunction_sb_cLdL::synapse0x30ced60() {
   return (neuron0x30b9920()*-0.560002);
}

double NNfunction_sb_cLdL::synapse0x30ceda0() {
   return (neuron0x30ba2f0()*0.0449689);
}

double NNfunction_sb_cLdL::synapse0x30cf730() {
   return (neuron0x30bacc0()*0.33808);
}

double NNfunction_sb_cLdL::synapse0x30cf770() {
   return (neuron0x30bb7a0()*-0.278568);
}

double NNfunction_sb_cLdL::synapse0x30d0100() {
   return (neuron0x30bc170()*0.168947);
}

double NNfunction_sb_cLdL::synapse0x30d0140() {
   return (neuron0x30b9250()*-0.117461);
}

double NNfunction_sb_cLdL::synapse0x30d0ad0() {
   return (neuron0x30bdd20()*0.149657);
}

double NNfunction_sb_cLdL::synapse0x30d0b10() {
   return (neuron0x30be6f0()*-0.260078);
}

double NNfunction_sb_cLdL::synapse0x30d14a0() {
   return (neuron0x30bf0c0()*-0.418164);
}

double NNfunction_sb_cLdL::synapse0x30d14e0() {
   return (neuron0x30bfa90()*-0.1008);
}

double NNfunction_sb_cLdL::synapse0x30d1e70() {
   return (neuron0x30c18a0()*-0.115995);
}

double NNfunction_sb_cLdL::synapse0x30d1eb0() {
   return (neuron0x30c1b80()*0.223342);
}

double NNfunction_sb_cLdL::synapse0x30d2840() {
   return (neuron0x30c2550()*-0.142481);
}

double NNfunction_sb_cLdL::synapse0x30d2880() {
   return (neuron0x30c2f20()*-0.39513);
}

double NNfunction_sb_cLdL::synapse0x30d3420() {
   return (neuron0x30c38f0()*-0.151329);
}

double NNfunction_sb_cLdL::synapse0x30d3460() {
   return (neuron0x30c42c0()*0.132586);
}

double NNfunction_sb_cLdL::synapse0x30d3df0() {
   return (neuron0x30bce10()*-0.208116);
}

double NNfunction_sb_cLdL::synapse0x30d3e30() {
   return (neuron0x30bd7e0()*0.459915);
}

double NNfunction_sb_cLdL::synapse0x30c4c70() {
   return (neuron0x30c7050()*-0.103373);
}

double NNfunction_sb_cLdL::synapse0x30c4cb0() {
   return (neuron0x30c7a20()*-0.0973092);
}

double NNfunction_sb_cLdL::synapse0x30c5640() {
   return (neuron0x30c83f0()*-0.0285643);
}

double NNfunction_sb_cLdL::synapse0x30c5680() {
   return (neuron0x30c8dc0()*-0.120943);
}

double NNfunction_sb_cLdL::synapse0x30c6010() {
   return (neuron0x30c9790()*0.200114);
}

double NNfunction_sb_cLdL::synapse0x30c6050() {
   return (neuron0x30ca160()*-0.0921733);
}

double NNfunction_sb_cLdL::synapse0x30d8530() {
   return (neuron0x30cab30()*-0.144951);
}

double NNfunction_sb_cLdL::synapse0x30d8570() {
   return (neuron0x30cb500()*-0.376124);
}

double NNfunction_sb_cLdL::synapse0x30d8f00() {
   return (neuron0x30c1590()*-0.017408);
}

double NNfunction_sb_cLdL::synapse0x30d8f40() {
   return (neuron0x30ce0e0()*0.0468106);
}

double NNfunction_sb_cLdL::synapse0x30d98d0() {
   return (neuron0x30ceab0()*-0.56839);
}

double NNfunction_sb_cLdL::synapse0x30d9910() {
   return (neuron0x30cf480()*-0.422093);
}

double NNfunction_sb_cLdL::synapse0x30da2a0() {
   return (neuron0x30cfe50()*-0.0560976);
}

double NNfunction_sb_cLdL::synapse0x30da2e0() {
   return (neuron0x30d0820()*-0.19507);
}

double NNfunction_sb_cLdL::synapse0x30b6190() {
   return (neuron0x30d11f0()*-0.393318);
}

double NNfunction_sb_cLdL::synapse0x30b61d0() {
   return (neuron0x30d1bc0()*-0.263711);
}

double NNfunction_sb_cLdL::synapse0x30c9a40() {
   return (neuron0x30d2590()*-0.430839);
}

double NNfunction_sb_cLdL::synapse0x30c9a80() {
   return (neuron0x30d3170()*0.19321);
}

double NNfunction_sb_cLdL::synapse0x30da9c0() {
   return (neuron0x30d3b40()*-0.252188);
}

double NNfunction_sb_cLdL::synapse0x30daa00() {
   return (neuron0x30c49c0()*-0.50409);
}

double NNfunction_sb_cLdL::synapse0x30daa40() {
   return (neuron0x30c5390()*0.0271435);
}

double NNfunction_sb_cLdL::synapse0x30daa80() {
   return (neuron0x30c5d60()*-0.498584);
}

double NNfunction_sb_cLdL::synapse0x30e1930() {
   return (neuron0x30d83a0()*-0.254897);
}

double NNfunction_sb_cLdL::synapse0x30e1970() {
   return (neuron0x30d8c50()*-0.182669);
}

double NNfunction_sb_cLdL::synapse0x30e19b0() {
   return (neuron0x30d9620()*0.316137);
}

double NNfunction_sb_cLdL::synapse0x30e19f0() {
   return (neuron0x30d9ff0()*-0.212945);
}

double NNfunction_sb_cLdL::synapse0x30e1d70() {
   return (neuron0x30b5f70()*1.13349);
}

double NNfunction_sb_cLdL::synapse0x30e1db0() {
   return (neuron0x30b6880()*5.03749);
}

double NNfunction_sb_cLdL::synapse0x30e1df0() {
   return (neuron0x30b7360()*0.972759);
}

double NNfunction_sb_cLdL::synapse0x30e1e30() {
   return (neuron0x2e7a730()*-2.53958);
}

double NNfunction_sb_cLdL::synapse0x30e1e70() {
   return (neuron0x30b8180()*1.16602);
}

double NNfunction_sb_cLdL::synapse0x30e1eb0() {
   return (neuron0x30b8b50()*1.65638);
}

double NNfunction_sb_cLdL::synapse0x30e1ef0() {
   return (neuron0x30b9920()*-1.27837);
}

double NNfunction_sb_cLdL::synapse0x30e1f30() {
   return (neuron0x30ba2f0()*1.18442);
}

double NNfunction_sb_cLdL::synapse0x30e1f70() {
   return (neuron0x30bacc0()*0.862558);
}

double NNfunction_sb_cLdL::synapse0x30e1fb0() {
   return (neuron0x30bb7a0()*-2.26942);
}

double NNfunction_sb_cLdL::synapse0x30e1ff0() {
   return (neuron0x30bc170()*4.39115);
}

double NNfunction_sb_cLdL::synapse0x30e2030() {
   return (neuron0x30b9250()*0.973474);
}

double NNfunction_sb_cLdL::synapse0x30e2070() {
   return (neuron0x30bdd20()*-1.08374);
}

double NNfunction_sb_cLdL::synapse0x30e20b0() {
   return (neuron0x30be6f0()*1.50301);
}

double NNfunction_sb_cLdL::synapse0x30e20f0() {
   return (neuron0x30bf0c0()*-1.18517);
}

double NNfunction_sb_cLdL::synapse0x30e2130() {
   return (neuron0x30bfa90()*-1.27879);
}

double NNfunction_sb_cLdL::synapse0x30e1bc0() {
   return (neuron0x30c18a0()*0.666896);
}

double NNfunction_sb_cLdL::synapse0x30e1c00() {
   return (neuron0x30c1b80()*1.26716);
}

double NNfunction_sb_cLdL::synapse0x30e2280() {
   return (neuron0x30c2550()*-5.99172);
}

double NNfunction_sb_cLdL::synapse0x30e22c0() {
   return (neuron0x30c2f20()*1.22814);
}

double NNfunction_sb_cLdL::synapse0x30e2300() {
   return (neuron0x30c38f0()*1.04037);
}

double NNfunction_sb_cLdL::synapse0x30e2340() {
   return (neuron0x30c42c0()*-1.82526);
}

double NNfunction_sb_cLdL::synapse0x30e2380() {
   return (neuron0x30bce10()*0.985256);
}

double NNfunction_sb_cLdL::synapse0x30e23c0() {
   return (neuron0x30bd7e0()*-2.01543);
}

double NNfunction_sb_cLdL::synapse0x30e2400() {
   return (neuron0x30c7050()*2.47976);
}

double NNfunction_sb_cLdL::synapse0x30e2440() {
   return (neuron0x30c7a20()*-2.04318);
}

double NNfunction_sb_cLdL::synapse0x30e2480() {
   return (neuron0x30c83f0()*-0.919594);
}

double NNfunction_sb_cLdL::synapse0x30e24c0() {
   return (neuron0x30c8dc0()*-3.28289);
}

double NNfunction_sb_cLdL::synapse0x30e2500() {
   return (neuron0x30c9790()*1.00375);
}

double NNfunction_sb_cLdL::synapse0x30e2540() {
   return (neuron0x30ca160()*0.783498);
}

double NNfunction_sb_cLdL::synapse0x30e2580() {
   return (neuron0x30cab30()*0.0679415);
}

double NNfunction_sb_cLdL::synapse0x30e25c0() {
   return (neuron0x30cb500()*0.912718);
}

double NNfunction_sb_cLdL::synapse0x30e2170() {
   return (neuron0x30c1590()*1.04065);
}

double NNfunction_sb_cLdL::synapse0x30e21b0() {
   return (neuron0x30ce0e0()*-4.24251);
}

double NNfunction_sb_cLdL::synapse0x30e21f0() {
   return (neuron0x30ceab0()*-2.18829);
}

double NNfunction_sb_cLdL::synapse0x30e2230() {
   return (neuron0x30cf480()*-1.61275);
}

double NNfunction_sb_cLdL::synapse0x30e2810() {
   return (neuron0x30cfe50()*-2.57644);
}

double NNfunction_sb_cLdL::synapse0x30e2850() {
   return (neuron0x30d0820()*0.911057);
}

double NNfunction_sb_cLdL::synapse0x30e2890() {
   return (neuron0x30d11f0()*1.05375);
}

double NNfunction_sb_cLdL::synapse0x30e28d0() {
   return (neuron0x30d1bc0()*-1.11514);
}

double NNfunction_sb_cLdL::synapse0x30e2910() {
   return (neuron0x30d2590()*0.402651);
}

double NNfunction_sb_cLdL::synapse0x30e2950() {
   return (neuron0x30d3170()*0.698019);
}

double NNfunction_sb_cLdL::synapse0x30e2990() {
   return (neuron0x30d3b40()*-1.24239);
}

double NNfunction_sb_cLdL::synapse0x30e29d0() {
   return (neuron0x30c49c0()*1.20612);
}

double NNfunction_sb_cLdL::synapse0x30e2a10() {
   return (neuron0x30c5390()*0.967098);
}

double NNfunction_sb_cLdL::synapse0x30e2a50() {
   return (neuron0x30c5d60()*1.33365);
}

double NNfunction_sb_cLdL::synapse0x30e2a90() {
   return (neuron0x30d83a0()*1.0765);
}

double NNfunction_sb_cLdL::synapse0x30e2ad0() {
   return (neuron0x30d8c50()*0.484401);
}

double NNfunction_sb_cLdL::synapse0x30e2b10() {
   return (neuron0x30d9620()*-1.22304);
}

double NNfunction_sb_cLdL::synapse0x30e2b50() {
   return (neuron0x30d9ff0()*0.979598);
}

double NNfunction_sb_cLdL::synapse0x30e2ed0() {
   return (neuron0x30b5f70()*-0.0221953);
}

double NNfunction_sb_cLdL::synapse0x30e2f10() {
   return (neuron0x30b6880()*0.588366);
}

double NNfunction_sb_cLdL::synapse0x30e2f50() {
   return (neuron0x30b7360()*-0.0029343);
}

double NNfunction_sb_cLdL::synapse0x30e2f90() {
   return (neuron0x2e7a730()*-0.795562);
}

double NNfunction_sb_cLdL::synapse0x30e2fd0() {
   return (neuron0x30b8180()*-0.0135822);
}

double NNfunction_sb_cLdL::synapse0x30e3010() {
   return (neuron0x30b8b50()*-1.9393);
}

double NNfunction_sb_cLdL::synapse0x30e3050() {
   return (neuron0x30b9920()*0.0124229);
}

double NNfunction_sb_cLdL::synapse0x30e3090() {
   return (neuron0x30ba2f0()*-0.0120979);
}

double NNfunction_sb_cLdL::synapse0x30e30d0() {
   return (neuron0x30bacc0()*-0.00645343);
}

double NNfunction_sb_cLdL::synapse0x30e3110() {
   return (neuron0x30bb7a0()*-0.105004);
}

double NNfunction_sb_cLdL::synapse0x30e3150() {
   return (neuron0x30bc170()*0.462473);
}

double NNfunction_sb_cLdL::synapse0x30e3190() {
   return (neuron0x30b9250()*-0.00688453);
}

double NNfunction_sb_cLdL::synapse0x30e31d0() {
   return (neuron0x30bdd20()*0.0167284);
}

double NNfunction_sb_cLdL::synapse0x30e3210() {
   return (neuron0x30be6f0()*1.57479);
}

double NNfunction_sb_cLdL::synapse0x30e3250() {
   return (neuron0x30bf0c0()*0.0174783);
}

double NNfunction_sb_cLdL::synapse0x30e3290() {
   return (neuron0x30bfa90()*0.0310875);
}

double NNfunction_sb_cLdL::synapse0x30e2d20() {
   return (neuron0x30c18a0()*0.102255);
}

double NNfunction_sb_cLdL::synapse0x30e2d60() {
   return (neuron0x30c1b80()*0.0990994);
}

double NNfunction_sb_cLdL::synapse0x30e33e0() {
   return (neuron0x30c2550()*-0.629548);
}

double NNfunction_sb_cLdL::synapse0x30e3420() {
   return (neuron0x30c2f20()*-0.038801);
}

double NNfunction_sb_cLdL::synapse0x30e3460() {
   return (neuron0x30c38f0()*-0.0107423);
}

double NNfunction_sb_cLdL::synapse0x30e34a0() {
   return (neuron0x30c42c0()*0.0506486);
}

double NNfunction_sb_cLdL::synapse0x30e34e0() {
   return (neuron0x30bce10()*-0.0106384);
}

double NNfunction_sb_cLdL::synapse0x30e3520() {
   return (neuron0x30bd7e0()*-1.90231);
}

double NNfunction_sb_cLdL::synapse0x30e3560() {
   return (neuron0x30c7050()*0.36534);
}

double NNfunction_sb_cLdL::synapse0x30e35a0() {
   return (neuron0x30c7a20()*1.8163);
}

double NNfunction_sb_cLdL::synapse0x30e35e0() {
   return (neuron0x30c83f0()*0.00579064);
}

double NNfunction_sb_cLdL::synapse0x30e3620() {
   return (neuron0x30c8dc0()*-0.377353);
}

double NNfunction_sb_cLdL::synapse0x30e3660() {
   return (neuron0x30c9790()*0.00111644);
}

double NNfunction_sb_cLdL::synapse0x30e36a0() {
   return (neuron0x30ca160()*-0.00810945);
}

double NNfunction_sb_cLdL::synapse0x30e36e0() {
   return (neuron0x30cab30()*-0.0881151);
}

double NNfunction_sb_cLdL::synapse0x30e3720() {
   return (neuron0x30cb500()*-0.0179033);
}

double NNfunction_sb_cLdL::synapse0x30e32d0() {
   return (neuron0x30c1590()*-0.0141001);
}

double NNfunction_sb_cLdL::synapse0x30e3310() {
   return (neuron0x30ce0e0()*0.639944);
}

double NNfunction_sb_cLdL::synapse0x30e3350() {
   return (neuron0x30ceab0()*0.0101557);
}

double NNfunction_sb_cLdL::synapse0x30e3390() {
   return (neuron0x30cf480()*0.0237172);
}

double NNfunction_sb_cLdL::synapse0x30e3970() {
   return (neuron0x30cfe50()*0.0507216);
}

double NNfunction_sb_cLdL::synapse0x30e39b0() {
   return (neuron0x30d0820()*-0.0346461);
}

double NNfunction_sb_cLdL::synapse0x30e39f0() {
   return (neuron0x30d11f0()*-0.0244669);
}

double NNfunction_sb_cLdL::synapse0x30e3a30() {
   return (neuron0x30d1bc0()*0.0156083);
}

double NNfunction_sb_cLdL::synapse0x30e3a70() {
   return (neuron0x30d2590()*-0.0559277);
}

double NNfunction_sb_cLdL::synapse0x30e3ab0() {
   return (neuron0x30d3170()*0.0129305);
}

double NNfunction_sb_cLdL::synapse0x30e3af0() {
   return (neuron0x30d3b40()*0.0234061);
}

double NNfunction_sb_cLdL::synapse0x30e3b30() {
   return (neuron0x30c49c0()*-0.0370586);
}

double NNfunction_sb_cLdL::synapse0x30e3b70() {
   return (neuron0x30c5390()*-0.016317);
}

double NNfunction_sb_cLdL::synapse0x30e3bb0() {
   return (neuron0x30c5d60()*-0.0249297);
}

double NNfunction_sb_cLdL::synapse0x30e3bf0() {
   return (neuron0x30d83a0()*-0.0279381);
}

double NNfunction_sb_cLdL::synapse0x30e3c30() {
   return (neuron0x30d8c50()*1.59327);
}

double NNfunction_sb_cLdL::synapse0x30e3c70() {
   return (neuron0x30d9620()*0.0165561);
}

double NNfunction_sb_cLdL::synapse0x30e3cb0() {
   return (neuron0x30d9ff0()*0.298605);
}

double NNfunction_sb_cLdL::synapse0x30e4030() {
   return (neuron0x30b5f70()*-0.119314);
}

double NNfunction_sb_cLdL::synapse0x30e4070() {
   return (neuron0x30b6880()*-0.427013);
}

double NNfunction_sb_cLdL::synapse0x30e40b0() {
   return (neuron0x30b7360()*0.0376175);
}

double NNfunction_sb_cLdL::synapse0x30e40f0() {
   return (neuron0x2e7a730()*-0.523701);
}

double NNfunction_sb_cLdL::synapse0x30e4130() {
   return (neuron0x30b8180()*-0.251433);
}

double NNfunction_sb_cLdL::synapse0x30e4170() {
   return (neuron0x30b8b50()*-0.5613);
}

double NNfunction_sb_cLdL::synapse0x30e41b0() {
   return (neuron0x30b9920()*-0.388642);
}

double NNfunction_sb_cLdL::synapse0x30e41f0() {
   return (neuron0x30ba2f0()*0.340206);
}

double NNfunction_sb_cLdL::synapse0x30e4230() {
   return (neuron0x30bacc0()*0.262153);
}

double NNfunction_sb_cLdL::synapse0x30e4270() {
   return (neuron0x30bb7a0()*-0.0826947);
}

double NNfunction_sb_cLdL::synapse0x30e42b0() {
   return (neuron0x30bc170()*-0.393236);
}

double NNfunction_sb_cLdL::synapse0x30e42f0() {
   return (neuron0x30b9250()*-0.591634);
}

double NNfunction_sb_cLdL::synapse0x30e4330() {
   return (neuron0x30bdd20()*-0.222234);
}

double NNfunction_sb_cLdL::synapse0x30e4370() {
   return (neuron0x30be6f0()*-0.16632);
}

double NNfunction_sb_cLdL::synapse0x30e43b0() {
   return (neuron0x30bf0c0()*-0.521168);
}

double NNfunction_sb_cLdL::synapse0x30e43f0() {
   return (neuron0x30bfa90()*-0.00572262);
}

double NNfunction_sb_cLdL::synapse0x30e3e80() {
   return (neuron0x30c18a0()*0.082936);
}

double NNfunction_sb_cLdL::synapse0x30e3ec0() {
   return (neuron0x30c1b80()*-0.423124);
}

double NNfunction_sb_cLdL::synapse0x30e4540() {
   return (neuron0x30c2550()*0.394506);
}

double NNfunction_sb_cLdL::synapse0x30e4580() {
   return (neuron0x30c2f20()*-0.352443);
}

double NNfunction_sb_cLdL::synapse0x30e45c0() {
   return (neuron0x30c38f0()*-0.198284);
}

double NNfunction_sb_cLdL::synapse0x30e4600() {
   return (neuron0x30c42c0()*-0.605473);
}

double NNfunction_sb_cLdL::synapse0x30e4640() {
   return (neuron0x30bce10()*0.00297005);
}

double NNfunction_sb_cLdL::synapse0x30e4680() {
   return (neuron0x30bd7e0()*-0.30942);
}

double NNfunction_sb_cLdL::synapse0x30e46c0() {
   return (neuron0x30c7050()*-0.0664369);
}

double NNfunction_sb_cLdL::synapse0x30e4700() {
   return (neuron0x30c7a20()*-0.268592);
}

double NNfunction_sb_cLdL::synapse0x30e4740() {
   return (neuron0x30c83f0()*0.0804194);
}

double NNfunction_sb_cLdL::synapse0x30e4780() {
   return (neuron0x30c8dc0()*-0.105875);
}

double NNfunction_sb_cLdL::synapse0x30e47c0() {
   return (neuron0x30c9790()*0.119277);
}

double NNfunction_sb_cLdL::synapse0x30e4800() {
   return (neuron0x30ca160()*0.0203603);
}

double NNfunction_sb_cLdL::synapse0x30e4840() {
   return (neuron0x30cab30()*0.127643);
}

double NNfunction_sb_cLdL::synapse0x30e4880() {
   return (neuron0x30cb500()*-0.529399);
}

double NNfunction_sb_cLdL::synapse0x30e4430() {
   return (neuron0x30c1590()*-0.12246);
}

double NNfunction_sb_cLdL::synapse0x30e4470() {
   return (neuron0x30ce0e0()*-0.352108);
}

double NNfunction_sb_cLdL::synapse0x30e44b0() {
   return (neuron0x30ceab0()*0.12116);
}

double NNfunction_sb_cLdL::synapse0x30e44f0() {
   return (neuron0x30cf480()*-0.0237424);
}

double NNfunction_sb_cLdL::synapse0x30e4ad0() {
   return (neuron0x30cfe50()*-0.370298);
}

double NNfunction_sb_cLdL::synapse0x30e4b10() {
   return (neuron0x30d0820()*0.333769);
}

double NNfunction_sb_cLdL::synapse0x30e4b50() {
   return (neuron0x30d11f0()*-0.469798);
}

double NNfunction_sb_cLdL::synapse0x30e4b90() {
   return (neuron0x30d1bc0()*-0.257649);
}

double NNfunction_sb_cLdL::synapse0x30e4bd0() {
   return (neuron0x30d2590()*0.302984);
}

double NNfunction_sb_cLdL::synapse0x30e4c10() {
   return (neuron0x30d3170()*-0.554712);
}

double NNfunction_sb_cLdL::synapse0x30e4c50() {
   return (neuron0x30d3b40()*-0.241525);
}

double NNfunction_sb_cLdL::synapse0x30e4c90() {
   return (neuron0x30c49c0()*-0.195753);
}

double NNfunction_sb_cLdL::synapse0x30e4cd0() {
   return (neuron0x30c5390()*-0.038393);
}

double NNfunction_sb_cLdL::synapse0x30e4d10() {
   return (neuron0x30c5d60()*-0.250457);
}

double NNfunction_sb_cLdL::synapse0x30e4d50() {
   return (neuron0x30d83a0()*-0.614382);
}

double NNfunction_sb_cLdL::synapse0x30e4d90() {
   return (neuron0x30d8c50()*-0.616064);
}

double NNfunction_sb_cLdL::synapse0x30e4dd0() {
   return (neuron0x30d9620()*-0.394659);
}

double NNfunction_sb_cLdL::synapse0x30e4e10() {
   return (neuron0x30d9ff0()*-0.571243);
}

double NNfunction_sb_cLdL::synapse0x30b5f30() {
   return (neuron0x30e11f0()*4.83419);
}

double NNfunction_sb_cLdL::synapse0x30e5070() {
   return (neuron0x30e1590()*0.358498);
}

double NNfunction_sb_cLdL::synapse0x30e50b0() {
   return (neuron0x30e1a30()*-7.48927);
}

double NNfunction_sb_cLdL::synapse0x30e50f0() {
   return (neuron0x30e2b90()*-9.28455);
}

double NNfunction_sb_cLdL::synapse0x30e5130() {
   return (neuron0x30e3cf0()*-0.0842227);
}

