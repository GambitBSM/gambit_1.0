#include "NNfunction_ss_dRdR.h"
#include <cmath>

double NNfunction_ss_dRdR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.8416)/15.0408;
   input1 = (in1 - 74.4204)/693.578;
   input2 = (in2 - 371.173)/440.509;
   input3 = (in3 - 378.987)/639.924;
   input4 = (in4 - 784.88)/648.531;
   input5 = (in5 - 688.636)/624.893;
   input6 = (in6 - 692.101)/626.876;
   input7 = (in7 - 683.897)/623.959;
   input8 = (in8 - 679.506)/655.179;
   input9 = (in9 - 672.188)/642.009;
   input10 = (in10 - 664.493)/656.769;
   input11 = (in11 - 786.915)/577.324;
   input12 = (in12 - 787.851)/579.869;
   input13 = (in13 - 619.366)/383.916;
   input14 = (in14 - 772.515)/542.212;
   input15 = (in15 - 773.592)/542.723;
   input16 = (in16 - 540.135)/381.698;
   input17 = (in17 - 634.559)/371.053;
   input18 = (in18 - 784.687)/587.443;
   input19 = (in19 - 775.32)/571.64;
   input20 = (in20 - -288.665)/447.652;
   input21 = (in21 - -376.978)/922.47;
   input22 = (in22 - -10.0662)/903.933;
   input23 = (in23 - 31.6489)/533.956;
   switch(index) {
     case 0:
         return neuron0x32e4300();
     default:
         return 0.;
   }
}

double NNfunction_ss_dRdR::Value(int index, double* input) {
   input0 = (input[0] - 22.8416)/15.0408;
   input1 = (input[1] - 74.4204)/693.578;
   input2 = (input[2] - 371.173)/440.509;
   input3 = (input[3] - 378.987)/639.924;
   input4 = (input[4] - 784.88)/648.531;
   input5 = (input[5] - 688.636)/624.893;
   input6 = (input[6] - 692.101)/626.876;
   input7 = (input[7] - 683.897)/623.959;
   input8 = (input[8] - 679.506)/655.179;
   input9 = (input[9] - 672.188)/642.009;
   input10 = (input[10] - 664.493)/656.769;
   input11 = (input[11] - 786.915)/577.324;
   input12 = (input[12] - 787.851)/579.869;
   input13 = (input[13] - 619.366)/383.916;
   input14 = (input[14] - 772.515)/542.212;
   input15 = (input[15] - 773.592)/542.723;
   input16 = (input[16] - 540.135)/381.698;
   input17 = (input[17] - 634.559)/371.053;
   input18 = (input[18] - 784.687)/587.443;
   input19 = (input[19] - 775.32)/571.64;
   input20 = (input[20] - -288.665)/447.652;
   input21 = (input[21] - -376.978)/922.47;
   input22 = (input[22] - -10.0662)/903.933;
   input23 = (input[23] - 31.6489)/533.956;
   switch(index) {
     case 0:
         return neuron0x32e4300();
     default:
         return 0.;
   }
}

double NNfunction_ss_dRdR::neuron0x32b04c0() {
   return input0;
}

double NNfunction_ss_dRdR::neuron0x32b0770() {
   return input1;
}

double NNfunction_ss_dRdR::neuron0x32b0ab0() {
   return input2;
}

double NNfunction_ss_dRdR::neuron0x32b0df0() {
   return input3;
}

double NNfunction_ss_dRdR::neuron0x32b1130() {
   return input4;
}

double NNfunction_ss_dRdR::neuron0x32b1470() {
   return input5;
}

double NNfunction_ss_dRdR::neuron0x32b17b0() {
   return input6;
}

double NNfunction_ss_dRdR::neuron0x32b1af0() {
   return input7;
}

double NNfunction_ss_dRdR::neuron0x32b1e30() {
   return input8;
}

double NNfunction_ss_dRdR::neuron0x32b2170() {
   return input9;
}

double NNfunction_ss_dRdR::neuron0x32b24b0() {
   return input10;
}

double NNfunction_ss_dRdR::neuron0x32b27f0() {
   return input11;
}

double NNfunction_ss_dRdR::neuron0x32b2b30() {
   return input12;
}

double NNfunction_ss_dRdR::neuron0x32b2e70() {
   return input13;
}

double NNfunction_ss_dRdR::neuron0x32b31b0() {
   return input14;
}

double NNfunction_ss_dRdR::neuron0x32b34f0() {
   return input15;
}

double NNfunction_ss_dRdR::neuron0x32b3830() {
   return input16;
}

double NNfunction_ss_dRdR::neuron0x32b3d90() {
   return input17;
}

double NNfunction_ss_dRdR::neuron0x32b3fb0() {
   return input18;
}

double NNfunction_ss_dRdR::neuron0x32b42f0() {
   return input19;
}

double NNfunction_ss_dRdR::neuron0x32b4630() {
   return input20;
}

double NNfunction_ss_dRdR::neuron0x32b4970() {
   return input21;
}

double NNfunction_ss_dRdR::neuron0x32b4cb0() {
   return input22;
}

double NNfunction_ss_dRdR::neuron0x32b4ff0() {
   return input23;
}

double NNfunction_ss_dRdR::input0x32b5460() {
   double input = -2.89408;
   input += synapse0x32b0440();
   input += synapse0x32b0480();
   input += synapse0x32b5710();
   input += synapse0x32b5750();
   input += synapse0x32b5790();
   input += synapse0x32b57d0();
   input += synapse0x32b5810();
   input += synapse0x32b5850();
   input += synapse0x32b5890();
   input += synapse0x32b58d0();
   input += synapse0x32b5910();
   input += synapse0x32b5950();
   input += synapse0x32b5990();
   input += synapse0x32b59d0();
   input += synapse0x32b5a10();
   input += synapse0x32b5a50();
   input += synapse0x32b03b0();
   input += synapse0x32b03f0();
   input += synapse0x306b5b0();
   input += synapse0x306b5f0();
   input += synapse0x32b5cb0();
   input += synapse0x32b5cf0();
   input += synapse0x32b5d30();
   input += synapse0x32b5d70();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32b5460() {
   double input = input0x32b5460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32b5db0() {
   double input = 1.37017;
   input += synapse0x32b60f0();
   input += synapse0x32b6130();
   input += synapse0x32b6170();
   input += synapse0x32b61b0();
   input += synapse0x32b61f0();
   input += synapse0x32b6230();
   input += synapse0x32b6270();
   input += synapse0x32b62b0();
   input += synapse0x32b62f0();
   input += synapse0x32b5ba0();
   input += synapse0x32b5be0();
   input += synapse0x32b5c20();
   input += synapse0x32b5c60();
   input += synapse0x32b6540();
   input += synapse0x32b6580();
   input += synapse0x32b65c0();
   input += synapse0x32b5f40();
   input += synapse0x32b5f80();
   input += synapse0x32b6710();
   input += synapse0x32b6750();
   input += synapse0x32b6790();
   input += synapse0x32b67d0();
   input += synapse0x32b6810();
   input += synapse0x32b6850();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32b5db0() {
   double input = input0x32b5db0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32b6890() {
   double input = -0.562332;
   input += synapse0x32b6bd0();
   input += synapse0x32b6c10();
   input += synapse0x32b6c50();
   input += synapse0x32b6c90();
   input += synapse0x32b6cd0();
   input += synapse0x32b6d10();
   input += synapse0x32b6d50();
   input += synapse0x32b6d90();
   input += synapse0x32b6dd0();
   input += synapse0x32b6e10();
   input += synapse0x32b6e50();
   input += synapse0x32b6e90();
   input += synapse0x32b6ed0();
   input += synapse0x32b6f10();
   input += synapse0x32b6f50();
   input += synapse0x32b6f90();
   input += synapse0x32b6a20();
   input += synapse0x32b6a60();
   input += synapse0x329f530();
   input += synapse0x3079480();
   input += synapse0x30794c0();
   input += synapse0x31949d0();
   input += synapse0x3194a10();
   input += synapse0x32b0220();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32b6890() {
   double input = input0x32b6890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x3079be0() {
   double input = -0.00245119;
   input += synapse0x3079d70();
   input += synapse0x32b6450();
   input += synapse0x32b6490();
   input += synapse0x32b64d0();
   input += synapse0x32b70e0();
   input += synapse0x32b7120();
   input += synapse0x32b7160();
   input += synapse0x32b71a0();
   input += synapse0x32b71e0();
   input += synapse0x32b7220();
   input += synapse0x32b7260();
   input += synapse0x32b72a0();
   input += synapse0x32b72e0();
   input += synapse0x32b7320();
   input += synapse0x32b7360();
   input += synapse0x32b73a0();
   input += synapse0x32b0260();
   input += synapse0x32b02a0();
   input += synapse0x32b02e0();
   input += synapse0x32b74f0();
   input += synapse0x32b7530();
   input += synapse0x32b7570();
   input += synapse0x32b75b0();
   input += synapse0x32b75f0();
   return input;
}

double NNfunction_ss_dRdR::neuron0x3079be0() {
   double input = input0x3079be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32b7630() {
   double input = 0.590109;
   input += synapse0x32b7970();
   input += synapse0x32b79b0();
   input += synapse0x32b79f0();
   input += synapse0x32b7a30();
   input += synapse0x32b7a70();
   input += synapse0x32b7ab0();
   input += synapse0x32b7af0();
   input += synapse0x32b7b30();
   input += synapse0x32b7b70();
   input += synapse0x32b7bb0();
   input += synapse0x32b7bf0();
   input += synapse0x32b7c30();
   input += synapse0x32b7c70();
   input += synapse0x32b7cb0();
   input += synapse0x32b7cf0();
   input += synapse0x32b7d30();
   input += synapse0x32b77c0();
   input += synapse0x32b7800();
   input += synapse0x32b7e80();
   input += synapse0x32b7ec0();
   input += synapse0x32b7f00();
   input += synapse0x32b7f40();
   input += synapse0x32b7f80();
   input += synapse0x32b7fc0();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32b7630() {
   double input = input0x32b7630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32b8000() {
   double input = 2.69222;
   input += synapse0x32b8340();
   input += synapse0x32b8380();
   input += synapse0x32b83c0();
   input += synapse0x32b8400();
   input += synapse0x32b8440();
   input += synapse0x32b8480();
   input += synapse0x32b84c0();
   input += synapse0x32b8500();
   input += synapse0x32b8540();
   input += synapse0x30797d0();
   input += synapse0x3079810();
   input += synapse0x3079850();
   input += synapse0x3079890();
   input += synapse0x30798d0();
   input += synapse0x3079910();
   input += synapse0x3079950();
   input += synapse0x32b8190();
   input += synapse0x32b81d0();
   input += synapse0x3079aa0();
   input += synapse0x3079ae0();
   input += synapse0x3079b20();
   input += synapse0x3079b60();
   input += synapse0x3079ba0();
   input += synapse0x32b8d90();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32b8000() {
   double input = input0x32b8000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32b8dd0() {
   double input = 0.157891;
   input += synapse0x32b9110();
   input += synapse0x32b9150();
   input += synapse0x32b9190();
   input += synapse0x32b91d0();
   input += synapse0x32b9210();
   input += synapse0x32b9250();
   input += synapse0x32b9290();
   input += synapse0x32b92d0();
   input += synapse0x32b9310();
   input += synapse0x32b9350();
   input += synapse0x32b9390();
   input += synapse0x32b93d0();
   input += synapse0x32b9410();
   input += synapse0x32b9450();
   input += synapse0x32b9490();
   input += synapse0x32b94d0();
   input += synapse0x32b8f60();
   input += synapse0x32b8fa0();
   input += synapse0x32b9620();
   input += synapse0x32b9660();
   input += synapse0x32b96a0();
   input += synapse0x32b96e0();
   input += synapse0x32b9720();
   input += synapse0x32b9760();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32b8dd0() {
   double input = input0x32b8dd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32b97a0() {
   double input = 0.114725;
   input += synapse0x32b9ae0();
   input += synapse0x32b9b20();
   input += synapse0x32b9b60();
   input += synapse0x32b9ba0();
   input += synapse0x32b9be0();
   input += synapse0x32b9c20();
   input += synapse0x32b9c60();
   input += synapse0x32b9ca0();
   input += synapse0x32b9ce0();
   input += synapse0x32b9d20();
   input += synapse0x32b9d60();
   input += synapse0x32b9da0();
   input += synapse0x32b9de0();
   input += synapse0x32b9e20();
   input += synapse0x32b9e60();
   input += synapse0x32b9ea0();
   input += synapse0x32b9930();
   input += synapse0x32b9970();
   input += synapse0x32b9ff0();
   input += synapse0x32ba030();
   input += synapse0x32ba070();
   input += synapse0x32ba0b0();
   input += synapse0x32ba0f0();
   input += synapse0x32ba130();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32b97a0() {
   double input = input0x32b97a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32ba170() {
   double input = -1.39486;
   input += synapse0x32b3c80();
   input += synapse0x32b3cc0();
   input += synapse0x32b3d00();
   input += synapse0x32b3d40();
   input += synapse0x32ba6c0();
   input += synapse0x32ba700();
   input += synapse0x32ba740();
   input += synapse0x32ba780();
   input += synapse0x32ba7c0();
   input += synapse0x32ba800();
   input += synapse0x32ba840();
   input += synapse0x32ba880();
   input += synapse0x32ba8c0();
   input += synapse0x32ba900();
   input += synapse0x32ba940();
   input += synapse0x32ba980();
   input += synapse0x32ba300();
   input += synapse0x32ba340();
   input += synapse0x32baad0();
   input += synapse0x32bab10();
   input += synapse0x32bab50();
   input += synapse0x32bab90();
   input += synapse0x32babd0();
   input += synapse0x32bac10();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32ba170() {
   double input = input0x32ba170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32bac50() {
   double input = 2.0377;
   input += synapse0x32baf90();
   input += synapse0x32bafd0();
   input += synapse0x32bb010();
   input += synapse0x32bb050();
   input += synapse0x32bb090();
   input += synapse0x32bb0d0();
   input += synapse0x32bb110();
   input += synapse0x32bb150();
   input += synapse0x32bb190();
   input += synapse0x32bb1d0();
   input += synapse0x32bb210();
   input += synapse0x32bb250();
   input += synapse0x32bb290();
   input += synapse0x32bb2d0();
   input += synapse0x32bb310();
   input += synapse0x32bb350();
   input += synapse0x32bade0();
   input += synapse0x32bae20();
   input += synapse0x32bb4a0();
   input += synapse0x32bb4e0();
   input += synapse0x32bb520();
   input += synapse0x32bb560();
   input += synapse0x32bb5a0();
   input += synapse0x32bb5e0();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32bac50() {
   double input = input0x32bac50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32bb620() {
   double input = 1.10145;
   input += synapse0x32bb960();
   input += synapse0x32bb9a0();
   input += synapse0x32bb9e0();
   input += synapse0x32bba20();
   input += synapse0x32bba60();
   input += synapse0x32bbaa0();
   input += synapse0x32bbae0();
   input += synapse0x32bbb20();
   input += synapse0x32bbb60();
   input += synapse0x32bbba0();
   input += synapse0x32bbbe0();
   input += synapse0x32bbc20();
   input += synapse0x32bbc60();
   input += synapse0x32bbca0();
   input += synapse0x32bbce0();
   input += synapse0x32bbd20();
   input += synapse0x32bb7b0();
   input += synapse0x32bb7f0();
   input += synapse0x32b8580();
   input += synapse0x32b85c0();
   input += synapse0x32b8600();
   input += synapse0x32b8640();
   input += synapse0x32b8680();
   input += synapse0x32b86c0();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32bb620() {
   double input = input0x32bb620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32b8700() {
   double input = 1.34951;
   input += synapse0x32b8a40();
   input += synapse0x32b8a80();
   input += synapse0x32b8ac0();
   input += synapse0x32b8b00();
   input += synapse0x32b8b40();
   input += synapse0x32b8b80();
   input += synapse0x32b8bc0();
   input += synapse0x32b8c00();
   input += synapse0x32b8c40();
   input += synapse0x32b8c80();
   input += synapse0x32b8cc0();
   input += synapse0x32b8d00();
   input += synapse0x32b8d40();
   input += synapse0x32bce80();
   input += synapse0x32bcec0();
   input += synapse0x32bcf00();
   input += synapse0x32b8890();
   input += synapse0x32b88d0();
   input += synapse0x32bd050();
   input += synapse0x32bd090();
   input += synapse0x32bd0d0();
   input += synapse0x32bd110();
   input += synapse0x32bd150();
   input += synapse0x32bd190();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32b8700() {
   double input = input0x32b8700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32bd1d0() {
   double input = -0.752185;
   input += synapse0x32bd510();
   input += synapse0x32bd550();
   input += synapse0x32bd590();
   input += synapse0x32bd5d0();
   input += synapse0x32bd610();
   input += synapse0x32bd650();
   input += synapse0x32bd690();
   input += synapse0x32bd6d0();
   input += synapse0x32bd710();
   input += synapse0x32bd750();
   input += synapse0x32bd790();
   input += synapse0x32bd7d0();
   input += synapse0x32bd810();
   input += synapse0x32bd850();
   input += synapse0x32bd890();
   input += synapse0x32bd8d0();
   input += synapse0x32bd360();
   input += synapse0x32bd3a0();
   input += synapse0x32bda20();
   input += synapse0x32bda60();
   input += synapse0x32bdaa0();
   input += synapse0x32bdae0();
   input += synapse0x32bdb20();
   input += synapse0x32bdb60();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32bd1d0() {
   double input = input0x32bd1d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32bdba0() {
   double input = 3.57275;
   input += synapse0x32bdee0();
   input += synapse0x32bdf20();
   input += synapse0x32bdf60();
   input += synapse0x32bdfa0();
   input += synapse0x32bdfe0();
   input += synapse0x32be020();
   input += synapse0x32be060();
   input += synapse0x32be0a0();
   input += synapse0x32be0e0();
   input += synapse0x32be120();
   input += synapse0x32be160();
   input += synapse0x32be1a0();
   input += synapse0x32be1e0();
   input += synapse0x32be220();
   input += synapse0x32be260();
   input += synapse0x32be2a0();
   input += synapse0x32bdd30();
   input += synapse0x32bdd70();
   input += synapse0x32be3f0();
   input += synapse0x32be430();
   input += synapse0x32be470();
   input += synapse0x32be4b0();
   input += synapse0x32be4f0();
   input += synapse0x32be530();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32bdba0() {
   double input = input0x32bdba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32be570() {
   double input = 0.114102;
   input += synapse0x32be8b0();
   input += synapse0x32be8f0();
   input += synapse0x32be930();
   input += synapse0x32be970();
   input += synapse0x32be9b0();
   input += synapse0x32be9f0();
   input += synapse0x32bea30();
   input += synapse0x32bea70();
   input += synapse0x32beab0();
   input += synapse0x32beaf0();
   input += synapse0x32beb30();
   input += synapse0x32beb70();
   input += synapse0x32bebb0();
   input += synapse0x32bebf0();
   input += synapse0x32bec30();
   input += synapse0x32bec70();
   input += synapse0x32be700();
   input += synapse0x32be740();
   input += synapse0x32bedc0();
   input += synapse0x32bee00();
   input += synapse0x32bee40();
   input += synapse0x32bee80();
   input += synapse0x32beec0();
   input += synapse0x32bef00();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32be570() {
   double input = input0x32be570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32bef40() {
   double input = 1.56617;
   input += synapse0x32bf280();
   input += synapse0x32b0650();
   input += synapse0x32b0690();
   input += synapse0x32b0990();
   input += synapse0x32b09d0();
   input += synapse0x32b0cd0();
   input += synapse0x32b0d10();
   input += synapse0x32b1010();
   input += synapse0x32b1050();
   input += synapse0x32b1350();
   input += synapse0x32b1390();
   input += synapse0x32b1690();
   input += synapse0x32b16d0();
   input += synapse0x32b19d0();
   input += synapse0x32b1a10();
   input += synapse0x32b1d10();
   input += synapse0x32b1d50();
   input += synapse0x32b2050();
   input += synapse0x32b2090();
   input += synapse0x32b2390();
   input += synapse0x32b23d0();
   input += synapse0x32b26d0();
   input += synapse0x32b2710();
   input += synapse0x32b2a10();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32bef40() {
   double input = input0x32bef40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32c0d50() {
   double input = -0.572069;
   input += synapse0x32b2a50();
   input += synapse0x32b3710();
   input += synapse0x32b3750();
   input += synapse0x32bf0d0();
   input += synapse0x32bf110();
   input += synapse0x32b3a50();
   input += synapse0x32b3a90();
   input += synapse0x306b490();
   input += synapse0x306b4d0();
   input += synapse0x32b41d0();
   input += synapse0x32b4210();
   input += synapse0x32b4510();
   input += synapse0x32b4550();
   input += synapse0x32b4850();
   input += synapse0x32b4890();
   input += synapse0x32b4b90();
   input += synapse0x32b4bd0();
   input += synapse0x32b4ed0();
   input += synapse0x32b4f10();
   input += synapse0x32b5210();
   input += synapse0x32b5250();
   input += synapse0x32b2d50();
   input += synapse0x32b2d90();
   input += synapse0x32c0ff0();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32c0d50() {
   double input = input0x32c0d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32c1030() {
   double input = -0.444015;
   input += synapse0x32c1370();
   input += synapse0x32c13b0();
   input += synapse0x32c13f0();
   input += synapse0x32c1430();
   input += synapse0x32c1470();
   input += synapse0x32c14b0();
   input += synapse0x32c14f0();
   input += synapse0x32c1530();
   input += synapse0x32c1570();
   input += synapse0x32c15b0();
   input += synapse0x32c15f0();
   input += synapse0x32c1630();
   input += synapse0x32c1670();
   input += synapse0x32c16b0();
   input += synapse0x32c16f0();
   input += synapse0x32c1730();
   input += synapse0x32c11c0();
   input += synapse0x32c1200();
   input += synapse0x32c1880();
   input += synapse0x32c18c0();
   input += synapse0x32c1900();
   input += synapse0x32c1940();
   input += synapse0x32c1980();
   input += synapse0x32c19c0();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32c1030() {
   double input = input0x32c1030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32c1a00() {
   double input = 0.270328;
   input += synapse0x32c1d40();
   input += synapse0x32c1d80();
   input += synapse0x32c1dc0();
   input += synapse0x32c1e00();
   input += synapse0x32c1e40();
   input += synapse0x32c1e80();
   input += synapse0x32c1ec0();
   input += synapse0x32c1f00();
   input += synapse0x32c1f40();
   input += synapse0x32c1f80();
   input += synapse0x32c1fc0();
   input += synapse0x32c2000();
   input += synapse0x32c2040();
   input += synapse0x32c2080();
   input += synapse0x32c20c0();
   input += synapse0x32c2100();
   input += synapse0x32c1b90();
   input += synapse0x32c1bd0();
   input += synapse0x32c2250();
   input += synapse0x32c2290();
   input += synapse0x32c22d0();
   input += synapse0x32c2310();
   input += synapse0x32c2350();
   input += synapse0x32c2390();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32c1a00() {
   double input = input0x32c1a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32c23d0() {
   double input = 5.20374;
   input += synapse0x32c2710();
   input += synapse0x32c2750();
   input += synapse0x32c2790();
   input += synapse0x32c27d0();
   input += synapse0x32c2810();
   input += synapse0x32c2850();
   input += synapse0x32c2890();
   input += synapse0x32c28d0();
   input += synapse0x32c2910();
   input += synapse0x32c2950();
   input += synapse0x32c2990();
   input += synapse0x32c29d0();
   input += synapse0x32c2a10();
   input += synapse0x32c2a50();
   input += synapse0x32c2a90();
   input += synapse0x32c2ad0();
   input += synapse0x32c2560();
   input += synapse0x32c25a0();
   input += synapse0x32c2c20();
   input += synapse0x32c2c60();
   input += synapse0x32c2ca0();
   input += synapse0x32c2ce0();
   input += synapse0x32c2d20();
   input += synapse0x32c2d60();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32c23d0() {
   double input = input0x32c23d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32c2da0() {
   double input = 1.90783;
   input += synapse0x32c30e0();
   input += synapse0x32c3120();
   input += synapse0x32c3160();
   input += synapse0x32c31a0();
   input += synapse0x32c31e0();
   input += synapse0x32c3220();
   input += synapse0x32c3260();
   input += synapse0x32c32a0();
   input += synapse0x32c32e0();
   input += synapse0x32c3320();
   input += synapse0x32c3360();
   input += synapse0x32c33a0();
   input += synapse0x32c33e0();
   input += synapse0x32c3420();
   input += synapse0x32c3460();
   input += synapse0x32c34a0();
   input += synapse0x32c2f30();
   input += synapse0x32c2f70();
   input += synapse0x32c35f0();
   input += synapse0x32c3630();
   input += synapse0x32c3670();
   input += synapse0x32c36b0();
   input += synapse0x32c36f0();
   input += synapse0x32c3730();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32c2da0() {
   double input = input0x32c2da0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32c3770() {
   double input = 0.500708;
   input += synapse0x32c3ab0();
   input += synapse0x32c3af0();
   input += synapse0x32c3b30();
   input += synapse0x32c3b70();
   input += synapse0x32c3bb0();
   input += synapse0x32c3bf0();
   input += synapse0x32c3c30();
   input += synapse0x32c3c70();
   input += synapse0x32c3cb0();
   input += synapse0x32bbe70();
   input += synapse0x32bbeb0();
   input += synapse0x32bbef0();
   input += synapse0x32bbf30();
   input += synapse0x32bbf70();
   input += synapse0x32bbfb0();
   input += synapse0x32bbff0();
   input += synapse0x32c3900();
   input += synapse0x32c3940();
   input += synapse0x32bc140();
   input += synapse0x32bc180();
   input += synapse0x32bc1c0();
   input += synapse0x32bc200();
   input += synapse0x32bc240();
   input += synapse0x32bc280();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32c3770() {
   double input = input0x32c3770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32bc2c0() {
   double input = 0.843109;
   input += synapse0x32bc600();
   input += synapse0x32bc640();
   input += synapse0x32bc680();
   input += synapse0x32bc6c0();
   input += synapse0x32bc700();
   input += synapse0x32bc740();
   input += synapse0x32bc780();
   input += synapse0x32bc7c0();
   input += synapse0x32bc800();
   input += synapse0x32bc840();
   input += synapse0x32bc880();
   input += synapse0x32bc8c0();
   input += synapse0x32bc900();
   input += synapse0x32bc940();
   input += synapse0x32bc980();
   input += synapse0x32bc9c0();
   input += synapse0x32bc450();
   input += synapse0x32bc490();
   input += synapse0x32bcb10();
   input += synapse0x32bcb50();
   input += synapse0x32bcb90();
   input += synapse0x32bcbd0();
   input += synapse0x32bcc10();
   input += synapse0x32bcc50();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32bc2c0() {
   double input = input0x32bc2c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32bcc90() {
   double input = -0.469627;
   input += synapse0x32bce20();
   input += synapse0x32c5eb0();
   input += synapse0x32c5ef0();
   input += synapse0x32c5f30();
   input += synapse0x32c5f70();
   input += synapse0x32c5fb0();
   input += synapse0x32c5ff0();
   input += synapse0x32c6030();
   input += synapse0x32c6070();
   input += synapse0x32c60b0();
   input += synapse0x32c60f0();
   input += synapse0x32c6130();
   input += synapse0x32c6170();
   input += synapse0x32c61b0();
   input += synapse0x32c61f0();
   input += synapse0x32c6230();
   input += synapse0x32c5d00();
   input += synapse0x32c5d40();
   input += synapse0x32c6380();
   input += synapse0x32c63c0();
   input += synapse0x32c6400();
   input += synapse0x32c6440();
   input += synapse0x32c6480();
   input += synapse0x32c64c0();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32bcc90() {
   double input = input0x32bcc90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32c6500() {
   double input = 0.062683;
   input += synapse0x32c6840();
   input += synapse0x32c6880();
   input += synapse0x32c68c0();
   input += synapse0x32c6900();
   input += synapse0x32c6940();
   input += synapse0x32c6980();
   input += synapse0x32c69c0();
   input += synapse0x32c6a00();
   input += synapse0x32c6a40();
   input += synapse0x32c6a80();
   input += synapse0x32c6ac0();
   input += synapse0x32c6b00();
   input += synapse0x32c6b40();
   input += synapse0x32c6b80();
   input += synapse0x32c6bc0();
   input += synapse0x32c6c00();
   input += synapse0x32c6690();
   input += synapse0x32c66d0();
   input += synapse0x32c6d50();
   input += synapse0x32c6d90();
   input += synapse0x32c6dd0();
   input += synapse0x32c6e10();
   input += synapse0x32c6e50();
   input += synapse0x32c6e90();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32c6500() {
   double input = input0x32c6500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32c6ed0() {
   double input = 0.556803;
   input += synapse0x32c7210();
   input += synapse0x32c7250();
   input += synapse0x32c7290();
   input += synapse0x32c72d0();
   input += synapse0x32c7310();
   input += synapse0x32c7350();
   input += synapse0x32c7390();
   input += synapse0x32c73d0();
   input += synapse0x32c7410();
   input += synapse0x32c7450();
   input += synapse0x32c7490();
   input += synapse0x32c74d0();
   input += synapse0x32c7510();
   input += synapse0x32c7550();
   input += synapse0x32c7590();
   input += synapse0x32c75d0();
   input += synapse0x32c7060();
   input += synapse0x32c70a0();
   input += synapse0x32c7720();
   input += synapse0x32c7760();
   input += synapse0x32c77a0();
   input += synapse0x32c77e0();
   input += synapse0x32c7820();
   input += synapse0x32c7860();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32c6ed0() {
   double input = input0x32c6ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32c78a0() {
   double input = -1.32904;
   input += synapse0x32c7be0();
   input += synapse0x32c7c20();
   input += synapse0x32c7c60();
   input += synapse0x32c7ca0();
   input += synapse0x32c7ce0();
   input += synapse0x32c7d20();
   input += synapse0x32c7d60();
   input += synapse0x32c7da0();
   input += synapse0x32c7de0();
   input += synapse0x32c7e20();
   input += synapse0x32c7e60();
   input += synapse0x32c7ea0();
   input += synapse0x32c7ee0();
   input += synapse0x32c7f20();
   input += synapse0x32c7f60();
   input += synapse0x32c7fa0();
   input += synapse0x32c7a30();
   input += synapse0x32c7a70();
   input += synapse0x32c80f0();
   input += synapse0x32c8130();
   input += synapse0x32c8170();
   input += synapse0x32c81b0();
   input += synapse0x32c81f0();
   input += synapse0x32c8230();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32c78a0() {
   double input = input0x32c78a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32c8270() {
   double input = 0.421578;
   input += synapse0x32c85b0();
   input += synapse0x32c85f0();
   input += synapse0x32c8630();
   input += synapse0x32c8670();
   input += synapse0x32c86b0();
   input += synapse0x32c86f0();
   input += synapse0x32c8730();
   input += synapse0x32c8770();
   input += synapse0x32c87b0();
   input += synapse0x32c87f0();
   input += synapse0x32c8830();
   input += synapse0x32c8870();
   input += synapse0x32c88b0();
   input += synapse0x32c88f0();
   input += synapse0x32c8930();
   input += synapse0x32c8970();
   input += synapse0x32c8400();
   input += synapse0x32c8440();
   input += synapse0x32c8ac0();
   input += synapse0x32c8b00();
   input += synapse0x32c8b40();
   input += synapse0x32c8b80();
   input += synapse0x32c8bc0();
   input += synapse0x32c8c00();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32c8270() {
   double input = input0x32c8270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32c8c40() {
   double input = 1.28816;
   input += synapse0x32c8f80();
   input += synapse0x32c8fc0();
   input += synapse0x32c9000();
   input += synapse0x32c9040();
   input += synapse0x32c9080();
   input += synapse0x32c90c0();
   input += synapse0x32c9100();
   input += synapse0x32c9140();
   input += synapse0x32c9180();
   input += synapse0x32c91c0();
   input += synapse0x32c9200();
   input += synapse0x32c9240();
   input += synapse0x32c9280();
   input += synapse0x32c92c0();
   input += synapse0x32c9300();
   input += synapse0x32c9340();
   input += synapse0x32c8dd0();
   input += synapse0x32c8e10();
   input += synapse0x32c9490();
   input += synapse0x32c94d0();
   input += synapse0x32c9510();
   input += synapse0x32c9550();
   input += synapse0x32c9590();
   input += synapse0x32c95d0();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32c8c40() {
   double input = input0x32c8c40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32c9610() {
   double input = 0.779193;
   input += synapse0x32c9950();
   input += synapse0x32c9990();
   input += synapse0x32c99d0();
   input += synapse0x32c9a10();
   input += synapse0x32c9a50();
   input += synapse0x32c9a90();
   input += synapse0x32c9ad0();
   input += synapse0x32c9b10();
   input += synapse0x32c9b50();
   input += synapse0x32c9b90();
   input += synapse0x32c9bd0();
   input += synapse0x32c9c10();
   input += synapse0x32c9c50();
   input += synapse0x32c9c90();
   input += synapse0x32c9cd0();
   input += synapse0x32c9d10();
   input += synapse0x32c97a0();
   input += synapse0x32c97e0();
   input += synapse0x32c9e60();
   input += synapse0x32c9ea0();
   input += synapse0x32c9ee0();
   input += synapse0x32c9f20();
   input += synapse0x32c9f60();
   input += synapse0x32c9fa0();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32c9610() {
   double input = input0x32c9610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32c9fe0() {
   double input = -0.230733;
   input += synapse0x32ca320();
   input += synapse0x32ca360();
   input += synapse0x32ca3a0();
   input += synapse0x32ca3e0();
   input += synapse0x32ca420();
   input += synapse0x32ca460();
   input += synapse0x32ca4a0();
   input += synapse0x32ca4e0();
   input += synapse0x32ca520();
   input += synapse0x32ca560();
   input += synapse0x32ca5a0();
   input += synapse0x32ca5e0();
   input += synapse0x32ca620();
   input += synapse0x32ca660();
   input += synapse0x32ca6a0();
   input += synapse0x32ca6e0();
   input += synapse0x32ca170();
   input += synapse0x32ca1b0();
   input += synapse0x32ca830();
   input += synapse0x32ca870();
   input += synapse0x32ca8b0();
   input += synapse0x32ca8f0();
   input += synapse0x32ca930();
   input += synapse0x32ca970();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32c9fe0() {
   double input = input0x32c9fe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32ca9b0() {
   double input = 1.89662;
   input += synapse0x32cacf0();
   input += synapse0x32bf2c0();
   input += synapse0x32bf300();
   input += synapse0x32bf340();
   input += synapse0x32bf590();
   input += synapse0x32bf5d0();
   input += synapse0x32bf610();
   input += synapse0x32bf860();
   input += synapse0x32bf8a0();
   input += synapse0x32bfaf0();
   input += synapse0x32bfb30();
   input += synapse0x32bfb70();
   input += synapse0x32bfdc0();
   input += synapse0x32bfe00();
   input += synapse0x32c0050();
   input += synapse0x32c0090();
   input += synapse0x32cab40();
   input += synapse0x32cab80();
   input += synapse0x32c01e0();
   input += synapse0x32c06f0();
   input += synapse0x32c0730();
   input += synapse0x32c0770();
   input += synapse0x32c09c0();
   input += synapse0x32c0a00();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32ca9b0() {
   double input = input0x32ca9b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32c0a40() {
   double input = -0.655783;
   input += synapse0x32c02b0();
   input += synapse0x32c02f0();
   input += synapse0x32c0330();
   input += synapse0x32c0370();
   input += synapse0x32c0cf0();
   input += synapse0x32cd040();
   input += synapse0x32cd080();
   input += synapse0x32cd0c0();
   input += synapse0x32cd100();
   input += synapse0x32cd140();
   input += synapse0x32cd180();
   input += synapse0x32cd1c0();
   input += synapse0x32cd200();
   input += synapse0x32cd240();
   input += synapse0x32cd280();
   input += synapse0x32cd2c0();
   input += synapse0x32c0bd0();
   input += synapse0x32c0c10();
   input += synapse0x32cd410();
   input += synapse0x32cd450();
   input += synapse0x32cd490();
   input += synapse0x32cd4d0();
   input += synapse0x32cd510();
   input += synapse0x32cd550();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32c0a40() {
   double input = input0x32c0a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32cd590() {
   double input = -0.148285;
   input += synapse0x32cd8d0();
   input += synapse0x32cd910();
   input += synapse0x32cd950();
   input += synapse0x32cd990();
   input += synapse0x32cd9d0();
   input += synapse0x32cda10();
   input += synapse0x32cda50();
   input += synapse0x32cda90();
   input += synapse0x32cdad0();
   input += synapse0x32cdb10();
   input += synapse0x32cdb50();
   input += synapse0x32cdb90();
   input += synapse0x32cdbd0();
   input += synapse0x32cdc10();
   input += synapse0x32cdc50();
   input += synapse0x32cdc90();
   input += synapse0x32cd720();
   input += synapse0x32cd760();
   input += synapse0x32cdde0();
   input += synapse0x32cde20();
   input += synapse0x32cde60();
   input += synapse0x32cdea0();
   input += synapse0x32cdee0();
   input += synapse0x32cdf20();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32cd590() {
   double input = input0x32cd590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32cdf60() {
   double input = 0.9049;
   input += synapse0x32ce2a0();
   input += synapse0x32ce2e0();
   input += synapse0x32ce320();
   input += synapse0x32ce360();
   input += synapse0x32ce3a0();
   input += synapse0x32ce3e0();
   input += synapse0x32ce420();
   input += synapse0x32ce460();
   input += synapse0x32ce4a0();
   input += synapse0x32ce4e0();
   input += synapse0x32ce520();
   input += synapse0x32ce560();
   input += synapse0x32ce5a0();
   input += synapse0x32ce5e0();
   input += synapse0x32ce620();
   input += synapse0x32ce660();
   input += synapse0x32ce0f0();
   input += synapse0x32ce130();
   input += synapse0x32ce7b0();
   input += synapse0x32ce7f0();
   input += synapse0x32ce830();
   input += synapse0x32ce870();
   input += synapse0x32ce8b0();
   input += synapse0x32ce8f0();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32cdf60() {
   double input = input0x32cdf60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32ce930() {
   double input = -0.492803;
   input += synapse0x32cec70();
   input += synapse0x32cecb0();
   input += synapse0x32cecf0();
   input += synapse0x32ced30();
   input += synapse0x32ced70();
   input += synapse0x32cedb0();
   input += synapse0x32cedf0();
   input += synapse0x32cee30();
   input += synapse0x32cee70();
   input += synapse0x32ceeb0();
   input += synapse0x32ceef0();
   input += synapse0x32cef30();
   input += synapse0x32cef70();
   input += synapse0x32cefb0();
   input += synapse0x32ceff0();
   input += synapse0x32cf030();
   input += synapse0x32ceac0();
   input += synapse0x32ceb00();
   input += synapse0x32cf180();
   input += synapse0x32cf1c0();
   input += synapse0x32cf200();
   input += synapse0x32cf240();
   input += synapse0x32cf280();
   input += synapse0x32cf2c0();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32ce930() {
   double input = input0x32ce930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32cf300() {
   double input = -1.26319;
   input += synapse0x32cf640();
   input += synapse0x32cf680();
   input += synapse0x32cf6c0();
   input += synapse0x32cf700();
   input += synapse0x32cf740();
   input += synapse0x32cf780();
   input += synapse0x32cf7c0();
   input += synapse0x32cf800();
   input += synapse0x32cf840();
   input += synapse0x32cf880();
   input += synapse0x32cf8c0();
   input += synapse0x32cf900();
   input += synapse0x32cf940();
   input += synapse0x32cf980();
   input += synapse0x32cf9c0();
   input += synapse0x32cfa00();
   input += synapse0x32cf490();
   input += synapse0x32cf4d0();
   input += synapse0x32cfb50();
   input += synapse0x32cfb90();
   input += synapse0x32cfbd0();
   input += synapse0x32cfc10();
   input += synapse0x32cfc50();
   input += synapse0x32cfc90();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32cf300() {
   double input = input0x32cf300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32cfcd0() {
   double input = 1.01335;
   input += synapse0x32d0010();
   input += synapse0x32d0050();
   input += synapse0x32d0090();
   input += synapse0x32d00d0();
   input += synapse0x32d0110();
   input += synapse0x32d0150();
   input += synapse0x32d0190();
   input += synapse0x32d01d0();
   input += synapse0x32d0210();
   input += synapse0x32d0250();
   input += synapse0x32d0290();
   input += synapse0x32d02d0();
   input += synapse0x32d0310();
   input += synapse0x32d0350();
   input += synapse0x32d0390();
   input += synapse0x32d03d0();
   input += synapse0x32cfe60();
   input += synapse0x32cfea0();
   input += synapse0x32d0520();
   input += synapse0x32d0560();
   input += synapse0x32d05a0();
   input += synapse0x32d05e0();
   input += synapse0x32d0620();
   input += synapse0x32d0660();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32cfcd0() {
   double input = input0x32cfcd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32d06a0() {
   double input = 0.440175;
   input += synapse0x32d09e0();
   input += synapse0x32d0a20();
   input += synapse0x32d0a60();
   input += synapse0x32d0aa0();
   input += synapse0x32d0ae0();
   input += synapse0x32d0b20();
   input += synapse0x32d0b60();
   input += synapse0x32d0ba0();
   input += synapse0x32d0be0();
   input += synapse0x32d0c20();
   input += synapse0x32d0c60();
   input += synapse0x32d0ca0();
   input += synapse0x32d0ce0();
   input += synapse0x32d0d20();
   input += synapse0x32d0d60();
   input += synapse0x32d0da0();
   input += synapse0x32d0830();
   input += synapse0x32d0870();
   input += synapse0x32d0ef0();
   input += synapse0x32d0f30();
   input += synapse0x32d0f70();
   input += synapse0x32d0fb0();
   input += synapse0x32d0ff0();
   input += synapse0x32d1030();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32d06a0() {
   double input = input0x32d06a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32d1070() {
   double input = 0.332003;
   input += synapse0x32d13b0();
   input += synapse0x32d13f0();
   input += synapse0x32d1430();
   input += synapse0x32d1470();
   input += synapse0x32d14b0();
   input += synapse0x32d14f0();
   input += synapse0x32d1530();
   input += synapse0x32d1570();
   input += synapse0x32d15b0();
   input += synapse0x32d15f0();
   input += synapse0x32d1630();
   input += synapse0x32d1670();
   input += synapse0x32d16b0();
   input += synapse0x32d16f0();
   input += synapse0x32d1730();
   input += synapse0x32d1770();
   input += synapse0x32d1200();
   input += synapse0x32d1240();
   input += synapse0x32d18c0();
   input += synapse0x32d1900();
   input += synapse0x32d1940();
   input += synapse0x32d1980();
   input += synapse0x32d19c0();
   input += synapse0x32d1a00();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32d1070() {
   double input = input0x32d1070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32d1a40() {
   double input = 0.481109;
   input += synapse0x32ba4b0();
   input += synapse0x32ba4f0();
   input += synapse0x32ba530();
   input += synapse0x32ba570();
   input += synapse0x32ba5b0();
   input += synapse0x32ba5f0();
   input += synapse0x32ba630();
   input += synapse0x32ba670();
   input += synapse0x32d2190();
   input += synapse0x32d21d0();
   input += synapse0x32d2210();
   input += synapse0x32d2250();
   input += synapse0x32d2290();
   input += synapse0x32d22d0();
   input += synapse0x32d2310();
   input += synapse0x32d2350();
   input += synapse0x32d1bd0();
   input += synapse0x32d1c10();
   input += synapse0x32d24a0();
   input += synapse0x32d24e0();
   input += synapse0x32d2520();
   input += synapse0x32d2560();
   input += synapse0x32d25a0();
   input += synapse0x32d25e0();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32d1a40() {
   double input = input0x32d1a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32d2620() {
   double input = 0.693298;
   input += synapse0x32d2960();
   input += synapse0x32d29a0();
   input += synapse0x32d29e0();
   input += synapse0x32d2a20();
   input += synapse0x32d2a60();
   input += synapse0x32d2aa0();
   input += synapse0x32d2ae0();
   input += synapse0x32d2b20();
   input += synapse0x32d2b60();
   input += synapse0x32d2ba0();
   input += synapse0x32d2be0();
   input += synapse0x32d2c20();
   input += synapse0x32d2c60();
   input += synapse0x32d2ca0();
   input += synapse0x32d2ce0();
   input += synapse0x32d2d20();
   input += synapse0x32d27b0();
   input += synapse0x32d27f0();
   input += synapse0x32d2e70();
   input += synapse0x32d2eb0();
   input += synapse0x32d2ef0();
   input += synapse0x32d2f30();
   input += synapse0x32d2f70();
   input += synapse0x32d2fb0();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32d2620() {
   double input = input0x32d2620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32d2ff0() {
   double input = -0.465955;
   input += synapse0x32d3330();
   input += synapse0x32d3370();
   input += synapse0x32d33b0();
   input += synapse0x32d33f0();
   input += synapse0x32d3430();
   input += synapse0x32d3470();
   input += synapse0x32d34b0();
   input += synapse0x32d34f0();
   input += synapse0x32d3530();
   input += synapse0x32d3570();
   input += synapse0x32d35b0();
   input += synapse0x32d35f0();
   input += synapse0x32d3630();
   input += synapse0x32d3670();
   input += synapse0x32d36b0();
   input += synapse0x32d36f0();
   input += synapse0x32d3180();
   input += synapse0x32d31c0();
   input += synapse0x32c3cf0();
   input += synapse0x32c3d30();
   input += synapse0x32c3d70();
   input += synapse0x32c3db0();
   input += synapse0x32c3df0();
   input += synapse0x32c3e30();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32d2ff0() {
   double input = input0x32d2ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32c3e70() {
   double input = -1.28878;
   input += synapse0x32c41b0();
   input += synapse0x32c41f0();
   input += synapse0x32c4230();
   input += synapse0x32c4270();
   input += synapse0x32c42b0();
   input += synapse0x32c42f0();
   input += synapse0x32c4330();
   input += synapse0x32c4370();
   input += synapse0x32c43b0();
   input += synapse0x32c43f0();
   input += synapse0x32c4430();
   input += synapse0x32c4470();
   input += synapse0x32c44b0();
   input += synapse0x32c44f0();
   input += synapse0x32c4530();
   input += synapse0x32c4570();
   input += synapse0x32c4000();
   input += synapse0x32c4040();
   input += synapse0x32c46c0();
   input += synapse0x32c4700();
   input += synapse0x32c4740();
   input += synapse0x32c4780();
   input += synapse0x32c47c0();
   input += synapse0x32c4800();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32c3e70() {
   double input = input0x32c3e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32c4840() {
   double input = -2.55477;
   input += synapse0x32c4b80();
   input += synapse0x32c4bc0();
   input += synapse0x32c4c00();
   input += synapse0x32c4c40();
   input += synapse0x32c4c80();
   input += synapse0x32c4cc0();
   input += synapse0x32c4d00();
   input += synapse0x32c4d40();
   input += synapse0x32c4d80();
   input += synapse0x32c4dc0();
   input += synapse0x32c4e00();
   input += synapse0x32c4e40();
   input += synapse0x32c4e80();
   input += synapse0x32c4ec0();
   input += synapse0x32c4f00();
   input += synapse0x32c4f40();
   input += synapse0x32c49d0();
   input += synapse0x32c4a10();
   input += synapse0x32c5090();
   input += synapse0x32c50d0();
   input += synapse0x32c5110();
   input += synapse0x32c5150();
   input += synapse0x32c5190();
   input += synapse0x32c51d0();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32c4840() {
   double input = input0x32c4840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32c5210() {
   double input = 0.908268;
   input += synapse0x32c5550();
   input += synapse0x32c5590();
   input += synapse0x32c55d0();
   input += synapse0x32c5610();
   input += synapse0x32c5650();
   input += synapse0x32c5690();
   input += synapse0x32c56d0();
   input += synapse0x32c5710();
   input += synapse0x32c5750();
   input += synapse0x32c5790();
   input += synapse0x32c57d0();
   input += synapse0x32c5810();
   input += synapse0x32c5850();
   input += synapse0x32c5890();
   input += synapse0x32c58d0();
   input += synapse0x32c5910();
   input += synapse0x32c53a0();
   input += synapse0x32c53e0();
   input += synapse0x32c5a60();
   input += synapse0x32c5aa0();
   input += synapse0x32c5ae0();
   input += synapse0x32c5b20();
   input += synapse0x32c5b60();
   input += synapse0x32c5ba0();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32c5210() {
   double input = input0x32c5210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32d7850() {
   double input = 0.763342;
   input += synapse0x32d7a70();
   input += synapse0x32d7ab0();
   input += synapse0x32d7af0();
   input += synapse0x32d7b30();
   input += synapse0x32d7b70();
   input += synapse0x32d7bb0();
   input += synapse0x32d7bf0();
   input += synapse0x32d7c30();
   input += synapse0x32d7c70();
   input += synapse0x32d7cb0();
   input += synapse0x32d7cf0();
   input += synapse0x32d7d30();
   input += synapse0x32d7d70();
   input += synapse0x32d7db0();
   input += synapse0x32d7df0();
   input += synapse0x32d7e30();
   input += synapse0x32c5be0();
   input += synapse0x32c5c20();
   input += synapse0x32d7f80();
   input += synapse0x32d7fc0();
   input += synapse0x32d8000();
   input += synapse0x32d8040();
   input += synapse0x32d8080();
   input += synapse0x32d80c0();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32d7850() {
   double input = input0x32d7850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32d8100() {
   double input = 2.41097;
   input += synapse0x32d8440();
   input += synapse0x32d8480();
   input += synapse0x32d84c0();
   input += synapse0x32d8500();
   input += synapse0x32d8540();
   input += synapse0x32d8580();
   input += synapse0x32d85c0();
   input += synapse0x32d8600();
   input += synapse0x32d8640();
   input += synapse0x32d8680();
   input += synapse0x32d86c0();
   input += synapse0x32d8700();
   input += synapse0x32d8740();
   input += synapse0x32d8780();
   input += synapse0x32d87c0();
   input += synapse0x32d8800();
   input += synapse0x32d8290();
   input += synapse0x32d82d0();
   input += synapse0x32d8950();
   input += synapse0x32d8990();
   input += synapse0x32d89d0();
   input += synapse0x32d8a10();
   input += synapse0x32d8a50();
   input += synapse0x32d8a90();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32d8100() {
   double input = input0x32d8100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32d8ad0() {
   double input = -0.679086;
   input += synapse0x32d8e10();
   input += synapse0x32d8e50();
   input += synapse0x32d8e90();
   input += synapse0x32d8ed0();
   input += synapse0x32d8f10();
   input += synapse0x32d8f50();
   input += synapse0x32d8f90();
   input += synapse0x32d8fd0();
   input += synapse0x32d9010();
   input += synapse0x32d9050();
   input += synapse0x32d9090();
   input += synapse0x32d90d0();
   input += synapse0x32d9110();
   input += synapse0x32d9150();
   input += synapse0x32d9190();
   input += synapse0x32d91d0();
   input += synapse0x32d8c60();
   input += synapse0x32d8ca0();
   input += synapse0x32d9320();
   input += synapse0x32d9360();
   input += synapse0x32d93a0();
   input += synapse0x32d93e0();
   input += synapse0x32d9420();
   input += synapse0x32d9460();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32d8ad0() {
   double input = input0x32d8ad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32d94a0() {
   double input = 1.5081;
   input += synapse0x32d97e0();
   input += synapse0x32d9820();
   input += synapse0x32d9860();
   input += synapse0x32d98a0();
   input += synapse0x32d98e0();
   input += synapse0x32d9920();
   input += synapse0x32d9960();
   input += synapse0x32d99a0();
   input += synapse0x32d99e0();
   input += synapse0x32d9a20();
   input += synapse0x32d9a60();
   input += synapse0x32d9aa0();
   input += synapse0x32d9ae0();
   input += synapse0x32d9b20();
   input += synapse0x32d9b60();
   input += synapse0x32d9ba0();
   input += synapse0x32d9630();
   input += synapse0x32d9670();
   input += synapse0x32d9cf0();
   input += synapse0x32d9d30();
   input += synapse0x32d9d70();
   input += synapse0x32d9db0();
   input += synapse0x32d9df0();
   input += synapse0x32d9e30();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32d94a0() {
   double input = input0x32d94a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32e06a0() {
   double input = -0.221411;
   input += synapse0x32b63c0();
   input += synapse0x32b6400();
   input += synapse0x32b78e0();
   input += synapse0x32b7920();
   input += synapse0x32b82b0();
   input += synapse0x32b82f0();
   input += synapse0x32b9080();
   input += synapse0x32b90c0();
   input += synapse0x32b9a50();
   input += synapse0x32b9a90();
   input += synapse0x32ba420();
   input += synapse0x32ba460();
   input += synapse0x32baf00();
   input += synapse0x32baf40();
   input += synapse0x32bb8d0();
   input += synapse0x32bb910();
   input += synapse0x32b89b0();
   input += synapse0x32b89f0();
   input += synapse0x32bd480();
   input += synapse0x32bd4c0();
   input += synapse0x32bde50();
   input += synapse0x32bde90();
   input += synapse0x32be820();
   input += synapse0x32be860();
   input += synapse0x32bf1f0();
   input += synapse0x32bf230();
   input += synapse0x32b33d0();
   input += synapse0x32b3410();
   input += synapse0x32c12e0();
   input += synapse0x32c1320();
   input += synapse0x32c1cb0();
   input += synapse0x32c1cf0();
   input += synapse0x32c2680();
   input += synapse0x32c26c0();
   input += synapse0x32c3050();
   input += synapse0x32c3090();
   input += synapse0x32c3a20();
   input += synapse0x32c3a60();
   input += synapse0x32bc570();
   input += synapse0x32bc5b0();
   input += synapse0x32c5e20();
   input += synapse0x32c5e60();
   input += synapse0x32c67b0();
   input += synapse0x32c67f0();
   input += synapse0x32c7180();
   input += synapse0x32c71c0();
   input += synapse0x32c7b50();
   input += synapse0x32c7b90();
   input += synapse0x32c8520();
   input += synapse0x32c8560();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32e06a0() {
   double input = input0x32e06a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32e0a40() {
   double input = 0.623324;
   input += synapse0x32cac60();
   input += synapse0x32caca0();
   input += synapse0x32c0220();
   input += synapse0x32c0260();
   input += synapse0x32cd840();
   input += synapse0x32cd880();
   input += synapse0x32ce210();
   input += synapse0x32ce250();
   input += synapse0x32cebe0();
   input += synapse0x32cec20();
   input += synapse0x32cf5b0();
   input += synapse0x32cf5f0();
   input += synapse0x32cff80();
   input += synapse0x32cffc0();
   input += synapse0x32d0950();
   input += synapse0x32d0990();
   input += synapse0x32d1320();
   input += synapse0x32d1360();
   input += synapse0x32d1cf0();
   input += synapse0x32d1d30();
   input += synapse0x32d28d0();
   input += synapse0x32d2910();
   input += synapse0x32d32a0();
   input += synapse0x32d32e0();
   input += synapse0x32c4120();
   input += synapse0x32c4160();
   input += synapse0x32c4af0();
   input += synapse0x32c4b30();
   input += synapse0x32c54c0();
   input += synapse0x32c5500();
   input += synapse0x32d79e0();
   input += synapse0x32d7a20();
   input += synapse0x32d83b0();
   input += synapse0x32d83f0();
   input += synapse0x32d8d80();
   input += synapse0x32d8dc0();
   input += synapse0x32d9750();
   input += synapse0x32d9790();
   input += synapse0x32b5680();
   input += synapse0x32b56c0();
   input += synapse0x32c8ef0();
   input += synapse0x32c8f30();
   input += synapse0x32d9e70();
   input += synapse0x32d9eb0();
   input += synapse0x32d9ef0();
   input += synapse0x32d9f30();
   input += synapse0x32e0de0();
   input += synapse0x32e0e20();
   input += synapse0x32e0e60();
   input += synapse0x32e0ea0();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32e0a40() {
   double input = input0x32e0a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32e0ee0() {
   double input = 0.0878021;
   input += synapse0x32e1220();
   input += synapse0x32e1260();
   input += synapse0x32e12a0();
   input += synapse0x32e12e0();
   input += synapse0x32e1320();
   input += synapse0x32e1360();
   input += synapse0x32e13a0();
   input += synapse0x32e13e0();
   input += synapse0x32e1420();
   input += synapse0x32e1460();
   input += synapse0x32e14a0();
   input += synapse0x32e14e0();
   input += synapse0x32e1520();
   input += synapse0x32e1560();
   input += synapse0x32e15a0();
   input += synapse0x32e15e0();
   input += synapse0x32e1070();
   input += synapse0x32e10b0();
   input += synapse0x32e1730();
   input += synapse0x32e1770();
   input += synapse0x32e17b0();
   input += synapse0x32e17f0();
   input += synapse0x32e1830();
   input += synapse0x32e1870();
   input += synapse0x32e18b0();
   input += synapse0x32e18f0();
   input += synapse0x32e1930();
   input += synapse0x32e1970();
   input += synapse0x32e19b0();
   input += synapse0x32e19f0();
   input += synapse0x32e1a30();
   input += synapse0x32e1a70();
   input += synapse0x32e1620();
   input += synapse0x32e1660();
   input += synapse0x32e16a0();
   input += synapse0x32e16e0();
   input += synapse0x32e1cc0();
   input += synapse0x32e1d00();
   input += synapse0x32e1d40();
   input += synapse0x32e1d80();
   input += synapse0x32e1dc0();
   input += synapse0x32e1e00();
   input += synapse0x32e1e40();
   input += synapse0x32e1e80();
   input += synapse0x32e1ec0();
   input += synapse0x32e1f00();
   input += synapse0x32e1f40();
   input += synapse0x32e1f80();
   input += synapse0x32e1fc0();
   input += synapse0x32e2000();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32e0ee0() {
   double input = input0x32e0ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32e2040() {
   double input = 1.51285;
   input += synapse0x32e2380();
   input += synapse0x32e23c0();
   input += synapse0x32e2400();
   input += synapse0x32e2440();
   input += synapse0x32e2480();
   input += synapse0x32e24c0();
   input += synapse0x32e2500();
   input += synapse0x32e2540();
   input += synapse0x32e2580();
   input += synapse0x32e25c0();
   input += synapse0x32e2600();
   input += synapse0x32e2640();
   input += synapse0x32e2680();
   input += synapse0x32e26c0();
   input += synapse0x32e2700();
   input += synapse0x32e2740();
   input += synapse0x32e21d0();
   input += synapse0x32e2210();
   input += synapse0x32e2890();
   input += synapse0x32e28d0();
   input += synapse0x32e2910();
   input += synapse0x32e2950();
   input += synapse0x32e2990();
   input += synapse0x32e29d0();
   input += synapse0x32e2a10();
   input += synapse0x32e2a50();
   input += synapse0x32e2a90();
   input += synapse0x32e2ad0();
   input += synapse0x32e2b10();
   input += synapse0x32e2b50();
   input += synapse0x32e2b90();
   input += synapse0x32e2bd0();
   input += synapse0x32e2780();
   input += synapse0x32e27c0();
   input += synapse0x32e2800();
   input += synapse0x32e2840();
   input += synapse0x32e2e20();
   input += synapse0x32e2e60();
   input += synapse0x32e2ea0();
   input += synapse0x32e2ee0();
   input += synapse0x32e2f20();
   input += synapse0x32e2f60();
   input += synapse0x32e2fa0();
   input += synapse0x32e2fe0();
   input += synapse0x32e3020();
   input += synapse0x32e3060();
   input += synapse0x32e30a0();
   input += synapse0x32e30e0();
   input += synapse0x32e3120();
   input += synapse0x32e3160();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32e2040() {
   double input = input0x32e2040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32e31a0() {
   double input = 0.0776398;
   input += synapse0x32e34e0();
   input += synapse0x32e3520();
   input += synapse0x32e3560();
   input += synapse0x32e35a0();
   input += synapse0x32e35e0();
   input += synapse0x32e3620();
   input += synapse0x32e3660();
   input += synapse0x32e36a0();
   input += synapse0x32e36e0();
   input += synapse0x32e3720();
   input += synapse0x32e3760();
   input += synapse0x32e37a0();
   input += synapse0x32e37e0();
   input += synapse0x32e3820();
   input += synapse0x32e3860();
   input += synapse0x32e38a0();
   input += synapse0x32e3330();
   input += synapse0x32e3370();
   input += synapse0x32e39f0();
   input += synapse0x32e3a30();
   input += synapse0x32e3a70();
   input += synapse0x32e3ab0();
   input += synapse0x32e3af0();
   input += synapse0x32e3b30();
   input += synapse0x32e3b70();
   input += synapse0x32e3bb0();
   input += synapse0x32e3bf0();
   input += synapse0x32e3c30();
   input += synapse0x32e3c70();
   input += synapse0x32e3cb0();
   input += synapse0x32e3cf0();
   input += synapse0x32e3d30();
   input += synapse0x32e38e0();
   input += synapse0x32e3920();
   input += synapse0x32e3960();
   input += synapse0x32e39a0();
   input += synapse0x32e3f80();
   input += synapse0x32e3fc0();
   input += synapse0x32e4000();
   input += synapse0x32e4040();
   input += synapse0x32e4080();
   input += synapse0x32e40c0();
   input += synapse0x32e4100();
   input += synapse0x32e4140();
   input += synapse0x32e4180();
   input += synapse0x32e41c0();
   input += synapse0x32e4200();
   input += synapse0x32e4240();
   input += synapse0x32e4280();
   input += synapse0x32e42c0();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32e31a0() {
   double input = input0x32e31a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x32e4300() {
   double input = 5.05716;
   input += synapse0x32e4520();
   input += synapse0x32e4560();
   input += synapse0x32e45a0();
   input += synapse0x32e45e0();
   input += synapse0x32e4620();
   return input;
}

double NNfunction_ss_dRdR::neuron0x32e4300() {
   double input = input0x32e4300();
   return (input * 1)+0;
}

double NNfunction_ss_dRdR::synapse0x32b0440() {
   return (neuron0x32b04c0()*0.0359609);
}

double NNfunction_ss_dRdR::synapse0x32b0480() {
   return (neuron0x32b0770()*0.10711);
}

double NNfunction_ss_dRdR::synapse0x32b5710() {
   return (neuron0x32b0ab0()*-0.0455558);
}

double NNfunction_ss_dRdR::synapse0x32b5750() {
   return (neuron0x32b0df0()*2.74494);
}

double NNfunction_ss_dRdR::synapse0x32b5790() {
   return (neuron0x32b1130()*-0.00296185);
}

double NNfunction_ss_dRdR::synapse0x32b57d0() {
   return (neuron0x32b1470()*0.0356341);
}

double NNfunction_ss_dRdR::synapse0x32b5810() {
   return (neuron0x32b17b0()*0.0768065);
}

double NNfunction_ss_dRdR::synapse0x32b5850() {
   return (neuron0x32b1af0()*-0.0292838);
}

double NNfunction_ss_dRdR::synapse0x32b5890() {
   return (neuron0x32b1e30()*0.0331194);
}

double NNfunction_ss_dRdR::synapse0x32b58d0() {
   return (neuron0x32b2170()*-0.00162441);
}

double NNfunction_ss_dRdR::synapse0x32b5910() {
   return (neuron0x32b24b0()*0.0745237);
}

double NNfunction_ss_dRdR::synapse0x32b5950() {
   return (neuron0x32b27f0()*-0.0158282);
}

double NNfunction_ss_dRdR::synapse0x32b5990() {
   return (neuron0x32b2b30()*-0.034259);
}

double NNfunction_ss_dRdR::synapse0x32b59d0() {
   return (neuron0x32b2e70()*0.00483147);
}

double NNfunction_ss_dRdR::synapse0x32b5a10() {
   return (neuron0x32b31b0()*-0.00748915);
}

double NNfunction_ss_dRdR::synapse0x32b5a50() {
   return (neuron0x32b34f0()*-0.06931);
}

double NNfunction_ss_dRdR::synapse0x32b03b0() {
   return (neuron0x32b3830()*0.0687776);
}

double NNfunction_ss_dRdR::synapse0x32b03f0() {
   return (neuron0x32b3d90()*1.29169);
}

double NNfunction_ss_dRdR::synapse0x306b5b0() {
   return (neuron0x32b3fb0()*0.00768403);
}

double NNfunction_ss_dRdR::synapse0x306b5f0() {
   return (neuron0x32b42f0()*-0.0132517);
}

double NNfunction_ss_dRdR::synapse0x32b5cb0() {
   return (neuron0x32b4630()*0.0141331);
}

double NNfunction_ss_dRdR::synapse0x32b5cf0() {
   return (neuron0x32b4970()*-0.0556004);
}

double NNfunction_ss_dRdR::synapse0x32b5d30() {
   return (neuron0x32b4cb0()*0.000154006);
}

double NNfunction_ss_dRdR::synapse0x32b5d70() {
   return (neuron0x32b4ff0()*-0.0216614);
}

double NNfunction_ss_dRdR::synapse0x32b60f0() {
   return (neuron0x32b04c0()*0.0823777);
}

double NNfunction_ss_dRdR::synapse0x32b6130() {
   return (neuron0x32b0770()*0.00643102);
}

double NNfunction_ss_dRdR::synapse0x32b6170() {
   return (neuron0x32b0ab0()*-0.0156178);
}

double NNfunction_ss_dRdR::synapse0x32b61b0() {
   return (neuron0x32b0df0()*-0.212434);
}

double NNfunction_ss_dRdR::synapse0x32b61f0() {
   return (neuron0x32b1130()*0.0142903);
}

double NNfunction_ss_dRdR::synapse0x32b6230() {
   return (neuron0x32b1470()*0.00500077);
}

double NNfunction_ss_dRdR::synapse0x32b6270() {
   return (neuron0x32b17b0()*0.0230557);
}

double NNfunction_ss_dRdR::synapse0x32b62b0() {
   return (neuron0x32b1af0()*-0.0272174);
}

double NNfunction_ss_dRdR::synapse0x32b62f0() {
   return (neuron0x32b1e30()*0.272724);
}

double NNfunction_ss_dRdR::synapse0x32b5ba0() {
   return (neuron0x32b2170()*0.0923474);
}

double NNfunction_ss_dRdR::synapse0x32b5be0() {
   return (neuron0x32b24b0()*-0.101276);
}

double NNfunction_ss_dRdR::synapse0x32b5c20() {
   return (neuron0x32b27f0()*-0.00517966);
}

double NNfunction_ss_dRdR::synapse0x32b5c60() {
   return (neuron0x32b2b30()*-0.018988);
}

double NNfunction_ss_dRdR::synapse0x32b6540() {
   return (neuron0x32b2e70()*-0.00982204);
}

double NNfunction_ss_dRdR::synapse0x32b6580() {
   return (neuron0x32b31b0()*-0.0345765);
}

double NNfunction_ss_dRdR::synapse0x32b65c0() {
   return (neuron0x32b34f0()*-0.0712124);
}

double NNfunction_ss_dRdR::synapse0x32b5f40() {
   return (neuron0x32b3830()*-0.0307384);
}

double NNfunction_ss_dRdR::synapse0x32b5f80() {
   return (neuron0x32b3d90()*2.26269);
}

double NNfunction_ss_dRdR::synapse0x32b6710() {
   return (neuron0x32b3fb0()*0.00384003);
}

double NNfunction_ss_dRdR::synapse0x32b6750() {
   return (neuron0x32b42f0()*0.0102626);
}

double NNfunction_ss_dRdR::synapse0x32b6790() {
   return (neuron0x32b4630()*-0.0344964);
}

double NNfunction_ss_dRdR::synapse0x32b67d0() {
   return (neuron0x32b4970()*-0.00454381);
}

double NNfunction_ss_dRdR::synapse0x32b6810() {
   return (neuron0x32b4cb0()*0.0309899);
}

double NNfunction_ss_dRdR::synapse0x32b6850() {
   return (neuron0x32b4ff0()*0.0386425);
}

double NNfunction_ss_dRdR::synapse0x32b6bd0() {
   return (neuron0x32b04c0()*-0.156521);
}

double NNfunction_ss_dRdR::synapse0x32b6c10() {
   return (neuron0x32b0770()*0.162072);
}

double NNfunction_ss_dRdR::synapse0x32b6c50() {
   return (neuron0x32b0ab0()*0.0146528);
}

double NNfunction_ss_dRdR::synapse0x32b6c90() {
   return (neuron0x32b0df0()*-0.654907);
}

double NNfunction_ss_dRdR::synapse0x32b6cd0() {
   return (neuron0x32b1130()*0.342355);
}

double NNfunction_ss_dRdR::synapse0x32b6d10() {
   return (neuron0x32b1470()*-0.392325);
}

double NNfunction_ss_dRdR::synapse0x32b6d50() {
   return (neuron0x32b17b0()*0.374839);
}

double NNfunction_ss_dRdR::synapse0x32b6d90() {
   return (neuron0x32b1af0()*0.293565);
}

double NNfunction_ss_dRdR::synapse0x32b6dd0() {
   return (neuron0x32b1e30()*-0.013338);
}

double NNfunction_ss_dRdR::synapse0x32b6e10() {
   return (neuron0x32b2170()*-0.361006);
}

double NNfunction_ss_dRdR::synapse0x32b6e50() {
   return (neuron0x32b24b0()*0.21408);
}

double NNfunction_ss_dRdR::synapse0x32b6e90() {
   return (neuron0x32b27f0()*0.0207647);
}

double NNfunction_ss_dRdR::synapse0x32b6ed0() {
   return (neuron0x32b2b30()*0.0572479);
}

double NNfunction_ss_dRdR::synapse0x32b6f10() {
   return (neuron0x32b2e70()*0.128444);
}

double NNfunction_ss_dRdR::synapse0x32b6f50() {
   return (neuron0x32b31b0()*0.419439);
}

double NNfunction_ss_dRdR::synapse0x32b6f90() {
   return (neuron0x32b34f0()*0.0800284);
}

double NNfunction_ss_dRdR::synapse0x32b6a20() {
   return (neuron0x32b3830()*0.172987);
}

double NNfunction_ss_dRdR::synapse0x32b6a60() {
   return (neuron0x32b3d90()*0.831467);
}

double NNfunction_ss_dRdR::synapse0x329f530() {
   return (neuron0x32b3fb0()*-0.00674751);
}

double NNfunction_ss_dRdR::synapse0x3079480() {
   return (neuron0x32b42f0()*0.0670976);
}

double NNfunction_ss_dRdR::synapse0x30794c0() {
   return (neuron0x32b4630()*-0.0778318);
}

double NNfunction_ss_dRdR::synapse0x31949d0() {
   return (neuron0x32b4970()*-0.106277);
}

double NNfunction_ss_dRdR::synapse0x3194a10() {
   return (neuron0x32b4cb0()*-0.0862638);
}

double NNfunction_ss_dRdR::synapse0x32b0220() {
   return (neuron0x32b4ff0()*-0.0801009);
}

double NNfunction_ss_dRdR::synapse0x3079d70() {
   return (neuron0x32b04c0()*-0.23738);
}

double NNfunction_ss_dRdR::synapse0x32b6450() {
   return (neuron0x32b0770()*0.0984196);
}

double NNfunction_ss_dRdR::synapse0x32b6490() {
   return (neuron0x32b0ab0()*-0.266578);
}

double NNfunction_ss_dRdR::synapse0x32b64d0() {
   return (neuron0x32b0df0()*0.183532);
}

double NNfunction_ss_dRdR::synapse0x32b70e0() {
   return (neuron0x32b1130()*-0.000439141);
}

double NNfunction_ss_dRdR::synapse0x32b7120() {
   return (neuron0x32b1470()*-0.117295);
}

double NNfunction_ss_dRdR::synapse0x32b7160() {
   return (neuron0x32b17b0()*-0.155315);
}

double NNfunction_ss_dRdR::synapse0x32b71a0() {
   return (neuron0x32b1af0()*-0.224128);
}

double NNfunction_ss_dRdR::synapse0x32b71e0() {
   return (neuron0x32b1e30()*-0.424601);
}

double NNfunction_ss_dRdR::synapse0x32b7220() {
   return (neuron0x32b2170()*-0.0608737);
}

double NNfunction_ss_dRdR::synapse0x32b7260() {
   return (neuron0x32b24b0()*-0.137336);
}

double NNfunction_ss_dRdR::synapse0x32b72a0() {
   return (neuron0x32b27f0()*0.232322);
}

double NNfunction_ss_dRdR::synapse0x32b72e0() {
   return (neuron0x32b2b30()*-0.357436);
}

double NNfunction_ss_dRdR::synapse0x32b7320() {
   return (neuron0x32b2e70()*-0.0290896);
}

double NNfunction_ss_dRdR::synapse0x32b7360() {
   return (neuron0x32b31b0()*0.0316795);
}

double NNfunction_ss_dRdR::synapse0x32b73a0() {
   return (neuron0x32b34f0()*-0.150279);
}

double NNfunction_ss_dRdR::synapse0x32b0260() {
   return (neuron0x32b3830()*-0.166039);
}

double NNfunction_ss_dRdR::synapse0x32b02a0() {
   return (neuron0x32b3d90()*-0.339889);
}

double NNfunction_ss_dRdR::synapse0x32b02e0() {
   return (neuron0x32b3fb0()*0.0614367);
}

double NNfunction_ss_dRdR::synapse0x32b74f0() {
   return (neuron0x32b42f0()*-0.0136819);
}

double NNfunction_ss_dRdR::synapse0x32b7530() {
   return (neuron0x32b4630()*-0.0836623);
}

double NNfunction_ss_dRdR::synapse0x32b7570() {
   return (neuron0x32b4970()*-0.0938355);
}

double NNfunction_ss_dRdR::synapse0x32b75b0() {
   return (neuron0x32b4cb0()*-0.00181204);
}

double NNfunction_ss_dRdR::synapse0x32b75f0() {
   return (neuron0x32b4ff0()*0.0931388);
}

double NNfunction_ss_dRdR::synapse0x32b7970() {
   return (neuron0x32b04c0()*0.418806);
}

double NNfunction_ss_dRdR::synapse0x32b79b0() {
   return (neuron0x32b0770()*0.161064);
}

double NNfunction_ss_dRdR::synapse0x32b79f0() {
   return (neuron0x32b0ab0()*-0.111735);
}

double NNfunction_ss_dRdR::synapse0x32b7a30() {
   return (neuron0x32b0df0()*0.222635);
}

double NNfunction_ss_dRdR::synapse0x32b7a70() {
   return (neuron0x32b1130()*-0.261758);
}

double NNfunction_ss_dRdR::synapse0x32b7ab0() {
   return (neuron0x32b1470()*0.0462695);
}

double NNfunction_ss_dRdR::synapse0x32b7af0() {
   return (neuron0x32b17b0()*-0.0158101);
}

double NNfunction_ss_dRdR::synapse0x32b7b30() {
   return (neuron0x32b1af0()*-0.436305);
}

double NNfunction_ss_dRdR::synapse0x32b7b70() {
   return (neuron0x32b1e30()*-0.138168);
}

double NNfunction_ss_dRdR::synapse0x32b7bb0() {
   return (neuron0x32b2170()*0.0863185);
}

double NNfunction_ss_dRdR::synapse0x32b7bf0() {
   return (neuron0x32b24b0()*0.182381);
}

double NNfunction_ss_dRdR::synapse0x32b7c30() {
   return (neuron0x32b27f0()*0.757082);
}

double NNfunction_ss_dRdR::synapse0x32b7c70() {
   return (neuron0x32b2b30()*0.404707);
}

double NNfunction_ss_dRdR::synapse0x32b7cb0() {
   return (neuron0x32b2e70()*-0.341905);
}

double NNfunction_ss_dRdR::synapse0x32b7cf0() {
   return (neuron0x32b31b0()*-0.11992);
}

double NNfunction_ss_dRdR::synapse0x32b7d30() {
   return (neuron0x32b34f0()*0.340611);
}

double NNfunction_ss_dRdR::synapse0x32b77c0() {
   return (neuron0x32b3830()*-0.570314);
}

double NNfunction_ss_dRdR::synapse0x32b7800() {
   return (neuron0x32b3d90()*0.270514);
}

double NNfunction_ss_dRdR::synapse0x32b7e80() {
   return (neuron0x32b3fb0()*0.616262);
}

double NNfunction_ss_dRdR::synapse0x32b7ec0() {
   return (neuron0x32b42f0()*0.021287);
}

double NNfunction_ss_dRdR::synapse0x32b7f00() {
   return (neuron0x32b4630()*0.0277914);
}

double NNfunction_ss_dRdR::synapse0x32b7f40() {
   return (neuron0x32b4970()*0.167935);
}

double NNfunction_ss_dRdR::synapse0x32b7f80() {
   return (neuron0x32b4cb0()*-0.254702);
}

double NNfunction_ss_dRdR::synapse0x32b7fc0() {
   return (neuron0x32b4ff0()*-0.177641);
}

double NNfunction_ss_dRdR::synapse0x32b8340() {
   return (neuron0x32b04c0()*0.0767904);
}

double NNfunction_ss_dRdR::synapse0x32b8380() {
   return (neuron0x32b0770()*-0.00680138);
}

double NNfunction_ss_dRdR::synapse0x32b83c0() {
   return (neuron0x32b0ab0()*-0.0141688);
}

double NNfunction_ss_dRdR::synapse0x32b8400() {
   return (neuron0x32b0df0()*-0.459884);
}

double NNfunction_ss_dRdR::synapse0x32b8440() {
   return (neuron0x32b1130()*0.0488484);
}

double NNfunction_ss_dRdR::synapse0x32b8480() {
   return (neuron0x32b1470()*0.0512626);
}

double NNfunction_ss_dRdR::synapse0x32b84c0() {
   return (neuron0x32b17b0()*0.0283665);
}

double NNfunction_ss_dRdR::synapse0x32b8500() {
   return (neuron0x32b1af0()*-0.0329749);
}

double NNfunction_ss_dRdR::synapse0x32b8540() {
   return (neuron0x32b1e30()*-0.399503);
}

double NNfunction_ss_dRdR::synapse0x30797d0() {
   return (neuron0x32b2170()*0.247707);
}

double NNfunction_ss_dRdR::synapse0x3079810() {
   return (neuron0x32b24b0()*0.0465828);
}

double NNfunction_ss_dRdR::synapse0x3079850() {
   return (neuron0x32b27f0()*-0.0697591);
}

double NNfunction_ss_dRdR::synapse0x3079890() {
   return (neuron0x32b2b30()*0.055381);
}

double NNfunction_ss_dRdR::synapse0x30798d0() {
   return (neuron0x32b2e70()*-0.00802776);
}

double NNfunction_ss_dRdR::synapse0x3079910() {
   return (neuron0x32b31b0()*-0.0031623);
}

double NNfunction_ss_dRdR::synapse0x3079950() {
   return (neuron0x32b34f0()*0.00401655);
}

double NNfunction_ss_dRdR::synapse0x32b8190() {
   return (neuron0x32b3830()*0.0760171);
}

double NNfunction_ss_dRdR::synapse0x32b81d0() {
   return (neuron0x32b3d90()*3.44189);
}

double NNfunction_ss_dRdR::synapse0x3079aa0() {
   return (neuron0x32b3fb0()*-0.0442707);
}

double NNfunction_ss_dRdR::synapse0x3079ae0() {
   return (neuron0x32b42f0()*-0.00574157);
}

double NNfunction_ss_dRdR::synapse0x3079b20() {
   return (neuron0x32b4630()*-0.0066081);
}

double NNfunction_ss_dRdR::synapse0x3079b60() {
   return (neuron0x32b4970()*0.0282821);
}

double NNfunction_ss_dRdR::synapse0x3079ba0() {
   return (neuron0x32b4cb0()*0.0227754);
}

double NNfunction_ss_dRdR::synapse0x32b8d90() {
   return (neuron0x32b4ff0()*0.00382932);
}

double NNfunction_ss_dRdR::synapse0x32b9110() {
   return (neuron0x32b04c0()*-0.44091);
}

double NNfunction_ss_dRdR::synapse0x32b9150() {
   return (neuron0x32b0770()*-0.222394);
}

double NNfunction_ss_dRdR::synapse0x32b9190() {
   return (neuron0x32b0ab0()*0.0647019);
}

double NNfunction_ss_dRdR::synapse0x32b91d0() {
   return (neuron0x32b0df0()*-0.0714321);
}

double NNfunction_ss_dRdR::synapse0x32b9210() {
   return (neuron0x32b1130()*-0.106172);
}

double NNfunction_ss_dRdR::synapse0x32b9250() {
   return (neuron0x32b1470()*0.0275571);
}

double NNfunction_ss_dRdR::synapse0x32b9290() {
   return (neuron0x32b17b0()*-0.142032);
}

double NNfunction_ss_dRdR::synapse0x32b92d0() {
   return (neuron0x32b1af0()*0.20741);
}

double NNfunction_ss_dRdR::synapse0x32b9310() {
   return (neuron0x32b1e30()*-0.266163);
}

double NNfunction_ss_dRdR::synapse0x32b9350() {
   return (neuron0x32b2170()*-0.105832);
}

double NNfunction_ss_dRdR::synapse0x32b9390() {
   return (neuron0x32b24b0()*0.285665);
}

double NNfunction_ss_dRdR::synapse0x32b93d0() {
   return (neuron0x32b27f0()*0.0644607);
}

double NNfunction_ss_dRdR::synapse0x32b9410() {
   return (neuron0x32b2b30()*0.0764705);
}

double NNfunction_ss_dRdR::synapse0x32b9450() {
   return (neuron0x32b2e70()*-0.247813);
}

double NNfunction_ss_dRdR::synapse0x32b9490() {
   return (neuron0x32b31b0()*0.0599748);
}

double NNfunction_ss_dRdR::synapse0x32b94d0() {
   return (neuron0x32b34f0()*0.217049);
}

double NNfunction_ss_dRdR::synapse0x32b8f60() {
   return (neuron0x32b3830()*0.195324);
}

double NNfunction_ss_dRdR::synapse0x32b8fa0() {
   return (neuron0x32b3d90()*-0.818979);
}

double NNfunction_ss_dRdR::synapse0x32b9620() {
   return (neuron0x32b3fb0()*-0.0660201);
}

double NNfunction_ss_dRdR::synapse0x32b9660() {
   return (neuron0x32b42f0()*0.180969);
}

double NNfunction_ss_dRdR::synapse0x32b96a0() {
   return (neuron0x32b4630()*0.154493);
}

double NNfunction_ss_dRdR::synapse0x32b96e0() {
   return (neuron0x32b4970()*-0.111883);
}

double NNfunction_ss_dRdR::synapse0x32b9720() {
   return (neuron0x32b4cb0()*-0.159564);
}

double NNfunction_ss_dRdR::synapse0x32b9760() {
   return (neuron0x32b4ff0()*0.497546);
}

double NNfunction_ss_dRdR::synapse0x32b9ae0() {
   return (neuron0x32b04c0()*-0.120631);
}

double NNfunction_ss_dRdR::synapse0x32b9b20() {
   return (neuron0x32b0770()*-0.535264);
}

double NNfunction_ss_dRdR::synapse0x32b9b60() {
   return (neuron0x32b0ab0()*-0.408932);
}

double NNfunction_ss_dRdR::synapse0x32b9ba0() {
   return (neuron0x32b0df0()*0.917822);
}

double NNfunction_ss_dRdR::synapse0x32b9be0() {
   return (neuron0x32b1130()*0.327054);
}

double NNfunction_ss_dRdR::synapse0x32b9c20() {
   return (neuron0x32b1470()*-0.440302);
}

double NNfunction_ss_dRdR::synapse0x32b9c60() {
   return (neuron0x32b17b0()*0.450427);
}

double NNfunction_ss_dRdR::synapse0x32b9ca0() {
   return (neuron0x32b1af0()*-0.288809);
}

double NNfunction_ss_dRdR::synapse0x32b9ce0() {
   return (neuron0x32b1e30()*0.0989676);
}

double NNfunction_ss_dRdR::synapse0x32b9d20() {
   return (neuron0x32b2170()*-0.525347);
}

double NNfunction_ss_dRdR::synapse0x32b9d60() {
   return (neuron0x32b24b0()*-0.229826);
}

double NNfunction_ss_dRdR::synapse0x32b9da0() {
   return (neuron0x32b27f0()*-0.177268);
}

double NNfunction_ss_dRdR::synapse0x32b9de0() {
   return (neuron0x32b2b30()*0.350442);
}

double NNfunction_ss_dRdR::synapse0x32b9e20() {
   return (neuron0x32b2e70()*1.16386);
}

double NNfunction_ss_dRdR::synapse0x32b9e60() {
   return (neuron0x32b31b0()*0.177268);
}

double NNfunction_ss_dRdR::synapse0x32b9ea0() {
   return (neuron0x32b34f0()*0.30305);
}

double NNfunction_ss_dRdR::synapse0x32b9930() {
   return (neuron0x32b3830()*-0.564633);
}

double NNfunction_ss_dRdR::synapse0x32b9970() {
   return (neuron0x32b3d90()*-0.53461);
}

double NNfunction_ss_dRdR::synapse0x32b9ff0() {
   return (neuron0x32b3fb0()*0.394973);
}

double NNfunction_ss_dRdR::synapse0x32ba030() {
   return (neuron0x32b42f0()*-0.454193);
}

double NNfunction_ss_dRdR::synapse0x32ba070() {
   return (neuron0x32b4630()*-1.43191);
}

double NNfunction_ss_dRdR::synapse0x32ba0b0() {
   return (neuron0x32b4970()*0.188168);
}

double NNfunction_ss_dRdR::synapse0x32ba0f0() {
   return (neuron0x32b4cb0()*0.624379);
}

double NNfunction_ss_dRdR::synapse0x32ba130() {
   return (neuron0x32b4ff0()*0.00961584);
}

double NNfunction_ss_dRdR::synapse0x32b3c80() {
   return (neuron0x32b04c0()*0.0154427);
}

double NNfunction_ss_dRdR::synapse0x32b3cc0() {
   return (neuron0x32b0770()*-0.000102304);
}

double NNfunction_ss_dRdR::synapse0x32b3d00() {
   return (neuron0x32b0ab0()*-0.0594594);
}

double NNfunction_ss_dRdR::synapse0x32b3d40() {
   return (neuron0x32b0df0()*0.165779);
}

double NNfunction_ss_dRdR::synapse0x32ba6c0() {
   return (neuron0x32b1130()*-0.0734225);
}

double NNfunction_ss_dRdR::synapse0x32ba700() {
   return (neuron0x32b1470()*-0.0408087);
}

double NNfunction_ss_dRdR::synapse0x32ba740() {
   return (neuron0x32b17b0()*-0.0890499);
}

double NNfunction_ss_dRdR::synapse0x32ba780() {
   return (neuron0x32b1af0()*-0.0926449);
}

double NNfunction_ss_dRdR::synapse0x32ba7c0() {
   return (neuron0x32b1e30()*-0.0827966);
}

double NNfunction_ss_dRdR::synapse0x32ba800() {
   return (neuron0x32b2170()*-0.0988893);
}

double NNfunction_ss_dRdR::synapse0x32ba840() {
   return (neuron0x32b24b0()*-0.0994144);
}

double NNfunction_ss_dRdR::synapse0x32ba880() {
   return (neuron0x32b27f0()*-0.260297);
}

double NNfunction_ss_dRdR::synapse0x32ba8c0() {
   return (neuron0x32b2b30()*-0.328971);
}

double NNfunction_ss_dRdR::synapse0x32ba900() {
   return (neuron0x32b2e70()*0.0475563);
}

double NNfunction_ss_dRdR::synapse0x32ba940() {
   return (neuron0x32b31b0()*-0.127688);
}

double NNfunction_ss_dRdR::synapse0x32ba980() {
   return (neuron0x32b34f0()*-0.178589);
}

double NNfunction_ss_dRdR::synapse0x32ba300() {
   return (neuron0x32b3830()*-0.0498807);
}

double NNfunction_ss_dRdR::synapse0x32ba340() {
   return (neuron0x32b3d90()*0.453451);
}

double NNfunction_ss_dRdR::synapse0x32baad0() {
   return (neuron0x32b3fb0()*-0.152722);
}

double NNfunction_ss_dRdR::synapse0x32bab10() {
   return (neuron0x32b42f0()*-0.0501352);
}

double NNfunction_ss_dRdR::synapse0x32bab50() {
   return (neuron0x32b4630()*-0.0392805);
}

double NNfunction_ss_dRdR::synapse0x32bab90() {
   return (neuron0x32b4970()*-0.0192312);
}

double NNfunction_ss_dRdR::synapse0x32babd0() {
   return (neuron0x32b4cb0()*0.0296446);
}

double NNfunction_ss_dRdR::synapse0x32bac10() {
   return (neuron0x32b4ff0()*0.0829812);
}

double NNfunction_ss_dRdR::synapse0x32baf90() {
   return (neuron0x32b04c0()*-0.0159831);
}

double NNfunction_ss_dRdR::synapse0x32bafd0() {
   return (neuron0x32b0770()*0.0328649);
}

double NNfunction_ss_dRdR::synapse0x32bb010() {
   return (neuron0x32b0ab0()*-0.0219397);
}

double NNfunction_ss_dRdR::synapse0x32bb050() {
   return (neuron0x32b0df0()*7.71494);
}

double NNfunction_ss_dRdR::synapse0x32bb090() {
   return (neuron0x32b1130()*0.01673);
}

double NNfunction_ss_dRdR::synapse0x32bb0d0() {
   return (neuron0x32b1470()*0.00980381);
}

double NNfunction_ss_dRdR::synapse0x32bb110() {
   return (neuron0x32b17b0()*-0.0306978);
}

double NNfunction_ss_dRdR::synapse0x32bb150() {
   return (neuron0x32b1af0()*0.0222886);
}

double NNfunction_ss_dRdR::synapse0x32bb190() {
   return (neuron0x32b1e30()*0.0238163);
}

double NNfunction_ss_dRdR::synapse0x32bb1d0() {
   return (neuron0x32b2170()*0.00346904);
}

double NNfunction_ss_dRdR::synapse0x32bb210() {
   return (neuron0x32b24b0()*0.0227699);
}

double NNfunction_ss_dRdR::synapse0x32bb250() {
   return (neuron0x32b27f0()*0.0823678);
}

double NNfunction_ss_dRdR::synapse0x32bb290() {
   return (neuron0x32b2b30()*-0.0276699);
}

double NNfunction_ss_dRdR::synapse0x32bb2d0() {
   return (neuron0x32b2e70()*-0.00793838);
}

double NNfunction_ss_dRdR::synapse0x32bb310() {
   return (neuron0x32b31b0()*0.0467683);
}

double NNfunction_ss_dRdR::synapse0x32bb350() {
   return (neuron0x32b34f0()*0.0293933);
}

double NNfunction_ss_dRdR::synapse0x32bade0() {
   return (neuron0x32b3830()*0.0177689);
}

double NNfunction_ss_dRdR::synapse0x32bae20() {
   return (neuron0x32b3d90()*-0.364046);
}

double NNfunction_ss_dRdR::synapse0x32bb4a0() {
   return (neuron0x32b3fb0()*0.007404);
}

double NNfunction_ss_dRdR::synapse0x32bb4e0() {
   return (neuron0x32b42f0()*-0.0280733);
}

double NNfunction_ss_dRdR::synapse0x32bb520() {
   return (neuron0x32b4630()*0.0229072);
}

double NNfunction_ss_dRdR::synapse0x32bb560() {
   return (neuron0x32b4970()*0.00240277);
}

double NNfunction_ss_dRdR::synapse0x32bb5a0() {
   return (neuron0x32b4cb0()*0.00258484);
}

double NNfunction_ss_dRdR::synapse0x32bb5e0() {
   return (neuron0x32b4ff0()*-0.020001);
}

double NNfunction_ss_dRdR::synapse0x32bb960() {
   return (neuron0x32b04c0()*0.042489);
}

double NNfunction_ss_dRdR::synapse0x32bb9a0() {
   return (neuron0x32b0770()*0.0108202);
}

double NNfunction_ss_dRdR::synapse0x32bb9e0() {
   return (neuron0x32b0ab0()*0.0146287);
}

double NNfunction_ss_dRdR::synapse0x32bba20() {
   return (neuron0x32b0df0()*-0.325694);
}

double NNfunction_ss_dRdR::synapse0x32bba60() {
   return (neuron0x32b1130()*0.0821189);
}

double NNfunction_ss_dRdR::synapse0x32bbaa0() {
   return (neuron0x32b1470()*0.0787805);
}

double NNfunction_ss_dRdR::synapse0x32bbae0() {
   return (neuron0x32b17b0()*0.0284932);
}

double NNfunction_ss_dRdR::synapse0x32bbb20() {
   return (neuron0x32b1af0()*-0.0629345);
}

double NNfunction_ss_dRdR::synapse0x32bbb60() {
   return (neuron0x32b1e30()*-0.0891409);
}

double NNfunction_ss_dRdR::synapse0x32bbba0() {
   return (neuron0x32b2170()*-0.504373);
}

double NNfunction_ss_dRdR::synapse0x32bbbe0() {
   return (neuron0x32b24b0()*-0.0860621);
}

double NNfunction_ss_dRdR::synapse0x32bbc20() {
   return (neuron0x32b27f0()*-0.0754894);
}

double NNfunction_ss_dRdR::synapse0x32bbc60() {
   return (neuron0x32b2b30()*-0.102776);
}

double NNfunction_ss_dRdR::synapse0x32bbca0() {
   return (neuron0x32b2e70()*-0.179486);
}

double NNfunction_ss_dRdR::synapse0x32bbce0() {
   return (neuron0x32b31b0()*-0.0254059);
}

double NNfunction_ss_dRdR::synapse0x32bbd20() {
   return (neuron0x32b34f0()*-0.0733641);
}

double NNfunction_ss_dRdR::synapse0x32bb7b0() {
   return (neuron0x32b3830()*-0.111524);
}

double NNfunction_ss_dRdR::synapse0x32bb7f0() {
   return (neuron0x32b3d90()*1.77185);
}

double NNfunction_ss_dRdR::synapse0x32b8580() {
   return (neuron0x32b3fb0()*-0.139264);
}

double NNfunction_ss_dRdR::synapse0x32b85c0() {
   return (neuron0x32b42f0()*-0.141688);
}

double NNfunction_ss_dRdR::synapse0x32b8600() {
   return (neuron0x32b4630()*-0.0611476);
}

double NNfunction_ss_dRdR::synapse0x32b8640() {
   return (neuron0x32b4970()*0.0552522);
}

double NNfunction_ss_dRdR::synapse0x32b8680() {
   return (neuron0x32b4cb0()*-0.004048);
}

double NNfunction_ss_dRdR::synapse0x32b86c0() {
   return (neuron0x32b4ff0()*0.0637427);
}

double NNfunction_ss_dRdR::synapse0x32b8a40() {
   return (neuron0x32b04c0()*0.0580015);
}

double NNfunction_ss_dRdR::synapse0x32b8a80() {
   return (neuron0x32b0770()*-0.00813876);
}

double NNfunction_ss_dRdR::synapse0x32b8ac0() {
   return (neuron0x32b0ab0()*-0.083705);
}

double NNfunction_ss_dRdR::synapse0x32b8b00() {
   return (neuron0x32b0df0()*-0.0213);
}

double NNfunction_ss_dRdR::synapse0x32b8b40() {
   return (neuron0x32b1130()*-0.182064);
}

double NNfunction_ss_dRdR::synapse0x32b8b80() {
   return (neuron0x32b1470()*-0.356428);
}

double NNfunction_ss_dRdR::synapse0x32b8bc0() {
   return (neuron0x32b17b0()*-0.336843);
}

double NNfunction_ss_dRdR::synapse0x32b8c00() {
   return (neuron0x32b1af0()*-0.047641);
}

double NNfunction_ss_dRdR::synapse0x32b8c40() {
   return (neuron0x32b1e30()*-0.160911);
}

double NNfunction_ss_dRdR::synapse0x32b8c80() {
   return (neuron0x32b2170()*0.423401);
}

double NNfunction_ss_dRdR::synapse0x32b8cc0() {
   return (neuron0x32b24b0()*0.290395);
}

double NNfunction_ss_dRdR::synapse0x32b8d00() {
   return (neuron0x32b27f0()*-0.0550223);
}

double NNfunction_ss_dRdR::synapse0x32b8d40() {
   return (neuron0x32b2b30()*0.145348);
}

double NNfunction_ss_dRdR::synapse0x32bce80() {
   return (neuron0x32b2e70()*0.0696682);
}

double NNfunction_ss_dRdR::synapse0x32bcec0() {
   return (neuron0x32b31b0()*-0.385003);
}

double NNfunction_ss_dRdR::synapse0x32bcf00() {
   return (neuron0x32b34f0()*-0.123071);
}

double NNfunction_ss_dRdR::synapse0x32b8890() {
   return (neuron0x32b3830()*0.898391);
}

double NNfunction_ss_dRdR::synapse0x32b88d0() {
   return (neuron0x32b3d90()*0.0305653);
}

double NNfunction_ss_dRdR::synapse0x32bd050() {
   return (neuron0x32b3fb0()*0.0515432);
}

double NNfunction_ss_dRdR::synapse0x32bd090() {
   return (neuron0x32b42f0()*0.0613142);
}

double NNfunction_ss_dRdR::synapse0x32bd0d0() {
   return (neuron0x32b4630()*0.267856);
}

double NNfunction_ss_dRdR::synapse0x32bd110() {
   return (neuron0x32b4970()*-0.239021);
}

double NNfunction_ss_dRdR::synapse0x32bd150() {
   return (neuron0x32b4cb0()*0.0751191);
}

double NNfunction_ss_dRdR::synapse0x32bd190() {
   return (neuron0x32b4ff0()*-0.147424);
}

double NNfunction_ss_dRdR::synapse0x32bd510() {
   return (neuron0x32b04c0()*-0.11373);
}

double NNfunction_ss_dRdR::synapse0x32bd550() {
   return (neuron0x32b0770()*0.280264);
}

double NNfunction_ss_dRdR::synapse0x32bd590() {
   return (neuron0x32b0ab0()*-0.124321);
}

double NNfunction_ss_dRdR::synapse0x32bd5d0() {
   return (neuron0x32b0df0()*1.13384);
}

double NNfunction_ss_dRdR::synapse0x32bd610() {
   return (neuron0x32b1130()*-0.0660036);
}

double NNfunction_ss_dRdR::synapse0x32bd650() {
   return (neuron0x32b1470()*-0.216411);
}

double NNfunction_ss_dRdR::synapse0x32bd690() {
   return (neuron0x32b17b0()*-0.672986);
}

double NNfunction_ss_dRdR::synapse0x32bd6d0() {
   return (neuron0x32b1af0()*-0.706712);
}

double NNfunction_ss_dRdR::synapse0x32bd710() {
   return (neuron0x32b1e30()*-0.760306);
}

double NNfunction_ss_dRdR::synapse0x32bd750() {
   return (neuron0x32b2170()*-0.654274);
}

double NNfunction_ss_dRdR::synapse0x32bd790() {
   return (neuron0x32b24b0()*-0.710894);
}

double NNfunction_ss_dRdR::synapse0x32bd7d0() {
   return (neuron0x32b27f0()*1.32668);
}

double NNfunction_ss_dRdR::synapse0x32bd810() {
   return (neuron0x32b2b30()*0.670919);
}

double NNfunction_ss_dRdR::synapse0x32bd850() {
   return (neuron0x32b2e70()*0.87791);
}

double NNfunction_ss_dRdR::synapse0x32bd890() {
   return (neuron0x32b31b0()*0.164361);
}

double NNfunction_ss_dRdR::synapse0x32bd8d0() {
   return (neuron0x32b34f0()*-0.128888);
}

double NNfunction_ss_dRdR::synapse0x32bd360() {
   return (neuron0x32b3830()*0.186277);
}

double NNfunction_ss_dRdR::synapse0x32bd3a0() {
   return (neuron0x32b3d90()*0.868618);
}

double NNfunction_ss_dRdR::synapse0x32bda20() {
   return (neuron0x32b3fb0()*0.0173891);
}

double NNfunction_ss_dRdR::synapse0x32bda60() {
   return (neuron0x32b42f0()*-0.184455);
}

double NNfunction_ss_dRdR::synapse0x32bdaa0() {
   return (neuron0x32b4630()*-0.556297);
}

double NNfunction_ss_dRdR::synapse0x32bdae0() {
   return (neuron0x32b4970()*-0.24517);
}

double NNfunction_ss_dRdR::synapse0x32bdb20() {
   return (neuron0x32b4cb0()*0.613547);
}

double NNfunction_ss_dRdR::synapse0x32bdb60() {
   return (neuron0x32b4ff0()*0.0065142);
}

double NNfunction_ss_dRdR::synapse0x32bdee0() {
   return (neuron0x32b04c0()*-0.128289);
}

double NNfunction_ss_dRdR::synapse0x32bdf20() {
   return (neuron0x32b0770()*0.135308);
}

double NNfunction_ss_dRdR::synapse0x32bdf60() {
   return (neuron0x32b0ab0()*-0.0672828);
}

double NNfunction_ss_dRdR::synapse0x32bdfa0() {
   return (neuron0x32b0df0()*1.44607);
}

double NNfunction_ss_dRdR::synapse0x32bdfe0() {
   return (neuron0x32b1130()*-0.212557);
}

double NNfunction_ss_dRdR::synapse0x32be020() {
   return (neuron0x32b1470()*-0.175673);
}

double NNfunction_ss_dRdR::synapse0x32be060() {
   return (neuron0x32b17b0()*-0.0778321);
}

double NNfunction_ss_dRdR::synapse0x32be0a0() {
   return (neuron0x32b1af0()*-0.0844344);
}

double NNfunction_ss_dRdR::synapse0x32be0e0() {
   return (neuron0x32b1e30()*-0.00955521);
}

double NNfunction_ss_dRdR::synapse0x32be120() {
   return (neuron0x32b2170()*-0.0373781);
}

double NNfunction_ss_dRdR::synapse0x32be160() {
   return (neuron0x32b24b0()*-0.026247);
}

double NNfunction_ss_dRdR::synapse0x32be1a0() {
   return (neuron0x32b27f0()*0.161075);
}

double NNfunction_ss_dRdR::synapse0x32be1e0() {
   return (neuron0x32b2b30()*-0.00840429);
}

double NNfunction_ss_dRdR::synapse0x32be220() {
   return (neuron0x32b2e70()*-0.0178634);
}

double NNfunction_ss_dRdR::synapse0x32be260() {
   return (neuron0x32b31b0()*0.0429488);
}

double NNfunction_ss_dRdR::synapse0x32be2a0() {
   return (neuron0x32b34f0()*-0.0961009);
}

double NNfunction_ss_dRdR::synapse0x32bdd30() {
   return (neuron0x32b3830()*-0.069337);
}

double NNfunction_ss_dRdR::synapse0x32bdd70() {
   return (neuron0x32b3d90()*-0.756088);
}

double NNfunction_ss_dRdR::synapse0x32be3f0() {
   return (neuron0x32b3fb0()*0.0218934);
}

double NNfunction_ss_dRdR::synapse0x32be430() {
   return (neuron0x32b42f0()*0.0383602);
}

double NNfunction_ss_dRdR::synapse0x32be470() {
   return (neuron0x32b4630()*-0.0649262);
}

double NNfunction_ss_dRdR::synapse0x32be4b0() {
   return (neuron0x32b4970()*-0.0618789);
}

double NNfunction_ss_dRdR::synapse0x32be4f0() {
   return (neuron0x32b4cb0()*-0.0458478);
}

double NNfunction_ss_dRdR::synapse0x32be530() {
   return (neuron0x32b4ff0()*0.00483138);
}

double NNfunction_ss_dRdR::synapse0x32be8b0() {
   return (neuron0x32b04c0()*0.127884);
}

double NNfunction_ss_dRdR::synapse0x32be8f0() {
   return (neuron0x32b0770()*-0.101348);
}

double NNfunction_ss_dRdR::synapse0x32be930() {
   return (neuron0x32b0ab0()*0.0126152);
}

double NNfunction_ss_dRdR::synapse0x32be970() {
   return (neuron0x32b0df0()*0.802743);
}

double NNfunction_ss_dRdR::synapse0x32be9b0() {
   return (neuron0x32b1130()*-0.00500555);
}

double NNfunction_ss_dRdR::synapse0x32be9f0() {
   return (neuron0x32b1470()*0.115278);
}

double NNfunction_ss_dRdR::synapse0x32bea30() {
   return (neuron0x32b17b0()*-0.0394272);
}

double NNfunction_ss_dRdR::synapse0x32bea70() {
   return (neuron0x32b1af0()*-0.0768106);
}

double NNfunction_ss_dRdR::synapse0x32beab0() {
   return (neuron0x32b1e30()*0.0986169);
}

double NNfunction_ss_dRdR::synapse0x32beaf0() {
   return (neuron0x32b2170()*0.294332);
}

double NNfunction_ss_dRdR::synapse0x32beb30() {
   return (neuron0x32b24b0()*0.487603);
}

double NNfunction_ss_dRdR::synapse0x32beb70() {
   return (neuron0x32b27f0()*-0.108169);
}

double NNfunction_ss_dRdR::synapse0x32bebb0() {
   return (neuron0x32b2b30()*-0.207711);
}

double NNfunction_ss_dRdR::synapse0x32bebf0() {
   return (neuron0x32b2e70()*-0.395247);
}

double NNfunction_ss_dRdR::synapse0x32bec30() {
   return (neuron0x32b31b0()*-0.200586);
}

double NNfunction_ss_dRdR::synapse0x32bec70() {
   return (neuron0x32b34f0()*-0.163697);
}

double NNfunction_ss_dRdR::synapse0x32be700() {
   return (neuron0x32b3830()*-0.0776712);
}

double NNfunction_ss_dRdR::synapse0x32be740() {
   return (neuron0x32b3d90()*-1.68042);
}

double NNfunction_ss_dRdR::synapse0x32bedc0() {
   return (neuron0x32b3fb0()*-0.139641);
}

double NNfunction_ss_dRdR::synapse0x32bee00() {
   return (neuron0x32b42f0()*-0.40721);
}

double NNfunction_ss_dRdR::synapse0x32bee40() {
   return (neuron0x32b4630()*0.00516158);
}

double NNfunction_ss_dRdR::synapse0x32bee80() {
   return (neuron0x32b4970()*-0.0805647);
}

double NNfunction_ss_dRdR::synapse0x32beec0() {
   return (neuron0x32b4cb0()*-0.144305);
}

double NNfunction_ss_dRdR::synapse0x32bef00() {
   return (neuron0x32b4ff0()*-0.0312271);
}

double NNfunction_ss_dRdR::synapse0x32bf280() {
   return (neuron0x32b04c0()*0.00880921);
}

double NNfunction_ss_dRdR::synapse0x32b0650() {
   return (neuron0x32b0770()*0.0032077);
}

double NNfunction_ss_dRdR::synapse0x32b0690() {
   return (neuron0x32b0ab0()*-0.00710905);
}

double NNfunction_ss_dRdR::synapse0x32b0990() {
   return (neuron0x32b0df0()*1.81176);
}

double NNfunction_ss_dRdR::synapse0x32b09d0() {
   return (neuron0x32b1130()*0.00258239);
}

double NNfunction_ss_dRdR::synapse0x32b0cd0() {
   return (neuron0x32b1470()*-0.000813743);
}

double NNfunction_ss_dRdR::synapse0x32b0d10() {
   return (neuron0x32b17b0()*0.0243826);
}

double NNfunction_ss_dRdR::synapse0x32b1010() {
   return (neuron0x32b1af0()*0.0111318);
}

double NNfunction_ss_dRdR::synapse0x32b1050() {
   return (neuron0x32b1e30()*-0.0035318);
}

double NNfunction_ss_dRdR::synapse0x32b1350() {
   return (neuron0x32b2170()*-0.00476749);
}

double NNfunction_ss_dRdR::synapse0x32b1390() {
   return (neuron0x32b24b0()*0.00704728);
}

double NNfunction_ss_dRdR::synapse0x32b1690() {
   return (neuron0x32b27f0()*0.00719792);
}

double NNfunction_ss_dRdR::synapse0x32b16d0() {
   return (neuron0x32b2b30()*0.0135038);
}

double NNfunction_ss_dRdR::synapse0x32b19d0() {
   return (neuron0x32b2e70()*-0.0380028);
}

double NNfunction_ss_dRdR::synapse0x32b1a10() {
   return (neuron0x32b31b0()*-0.00469897);
}

double NNfunction_ss_dRdR::synapse0x32b1d10() {
   return (neuron0x32b34f0()*0.00720177);
}

double NNfunction_ss_dRdR::synapse0x32b1d50() {
   return (neuron0x32b3830()*-0.0220156);
}

double NNfunction_ss_dRdR::synapse0x32b2050() {
   return (neuron0x32b3d90()*-0.124098);
}

double NNfunction_ss_dRdR::synapse0x32b2090() {
   return (neuron0x32b3fb0()*0.000963484);
}

double NNfunction_ss_dRdR::synapse0x32b2390() {
   return (neuron0x32b42f0()*0.00546019);
}

double NNfunction_ss_dRdR::synapse0x32b23d0() {
   return (neuron0x32b4630()*0.00111403);
}

double NNfunction_ss_dRdR::synapse0x32b26d0() {
   return (neuron0x32b4970()*-0.0071168);
}

double NNfunction_ss_dRdR::synapse0x32b2710() {
   return (neuron0x32b4cb0()*-0.00885829);
}

double NNfunction_ss_dRdR::synapse0x32b2a10() {
   return (neuron0x32b4ff0()*0.00772748);
}

double NNfunction_ss_dRdR::synapse0x32b2a50() {
   return (neuron0x32b04c0()*0.378147);
}

double NNfunction_ss_dRdR::synapse0x32b3710() {
   return (neuron0x32b0770()*-0.0817802);
}

double NNfunction_ss_dRdR::synapse0x32b3750() {
   return (neuron0x32b0ab0()*0.362398);
}

double NNfunction_ss_dRdR::synapse0x32bf0d0() {
   return (neuron0x32b0df0()*-0.0366233);
}

double NNfunction_ss_dRdR::synapse0x32bf110() {
   return (neuron0x32b1130()*-0.778302);
}

double NNfunction_ss_dRdR::synapse0x32b3a50() {
   return (neuron0x32b1470()*0.128991);
}

double NNfunction_ss_dRdR::synapse0x32b3a90() {
   return (neuron0x32b17b0()*-0.711816);
}

double NNfunction_ss_dRdR::synapse0x306b490() {
   return (neuron0x32b1af0()*0.162098);
}

double NNfunction_ss_dRdR::synapse0x306b4d0() {
   return (neuron0x32b1e30()*0.274403);
}

double NNfunction_ss_dRdR::synapse0x32b41d0() {
   return (neuron0x32b2170()*0.435945);
}

double NNfunction_ss_dRdR::synapse0x32b4210() {
   return (neuron0x32b24b0()*0.113519);
}

double NNfunction_ss_dRdR::synapse0x32b4510() {
   return (neuron0x32b27f0()*0.309565);
}

double NNfunction_ss_dRdR::synapse0x32b4550() {
   return (neuron0x32b2b30()*-0.632695);
}

double NNfunction_ss_dRdR::synapse0x32b4850() {
   return (neuron0x32b2e70()*0.246407);
}

double NNfunction_ss_dRdR::synapse0x32b4890() {
   return (neuron0x32b31b0()*-0.473283);
}

double NNfunction_ss_dRdR::synapse0x32b4b90() {
   return (neuron0x32b34f0()*-0.15551);
}

double NNfunction_ss_dRdR::synapse0x32b4bd0() {
   return (neuron0x32b3830()*0.78614);
}

double NNfunction_ss_dRdR::synapse0x32b4ed0() {
   return (neuron0x32b3d90()*0.292557);
}

double NNfunction_ss_dRdR::synapse0x32b4f10() {
   return (neuron0x32b3fb0()*-0.205183);
}

double NNfunction_ss_dRdR::synapse0x32b5210() {
   return (neuron0x32b42f0()*-0.0981236);
}

double NNfunction_ss_dRdR::synapse0x32b5250() {
   return (neuron0x32b4630()*-0.733237);
}

double NNfunction_ss_dRdR::synapse0x32b2d50() {
   return (neuron0x32b4970()*-0.653102);
}

double NNfunction_ss_dRdR::synapse0x32b2d90() {
   return (neuron0x32b4cb0()*-0.878296);
}

double NNfunction_ss_dRdR::synapse0x32c0ff0() {
   return (neuron0x32b4ff0()*-0.146865);
}

double NNfunction_ss_dRdR::synapse0x32c1370() {
   return (neuron0x32b04c0()*0.41722);
}

double NNfunction_ss_dRdR::synapse0x32c13b0() {
   return (neuron0x32b0770()*-0.474686);
}

double NNfunction_ss_dRdR::synapse0x32c13f0() {
   return (neuron0x32b0ab0()*0.603193);
}

double NNfunction_ss_dRdR::synapse0x32c1430() {
   return (neuron0x32b0df0()*0.892769);
}

double NNfunction_ss_dRdR::synapse0x32c1470() {
   return (neuron0x32b1130()*0.702958);
}

double NNfunction_ss_dRdR::synapse0x32c14b0() {
   return (neuron0x32b1470()*0.84102);
}

double NNfunction_ss_dRdR::synapse0x32c14f0() {
   return (neuron0x32b17b0()*0.26068);
}

double NNfunction_ss_dRdR::synapse0x32c1530() {
   return (neuron0x32b1af0()*0.643079);
}

double NNfunction_ss_dRdR::synapse0x32c1570() {
   return (neuron0x32b1e30()*0.376404);
}

double NNfunction_ss_dRdR::synapse0x32c15b0() {
   return (neuron0x32b2170()*0.185115);
}

double NNfunction_ss_dRdR::synapse0x32c15f0() {
   return (neuron0x32b24b0()*-0.0597227);
}

double NNfunction_ss_dRdR::synapse0x32c1630() {
   return (neuron0x32b27f0()*-0.496096);
}

double NNfunction_ss_dRdR::synapse0x32c1670() {
   return (neuron0x32b2b30()*-0.222084);
}

double NNfunction_ss_dRdR::synapse0x32c16b0() {
   return (neuron0x32b2e70()*-0.0672574);
}

double NNfunction_ss_dRdR::synapse0x32c16f0() {
   return (neuron0x32b31b0()*-0.223292);
}

double NNfunction_ss_dRdR::synapse0x32c1730() {
   return (neuron0x32b34f0()*-0.170868);
}

double NNfunction_ss_dRdR::synapse0x32c11c0() {
   return (neuron0x32b3830()*0.961209);
}

double NNfunction_ss_dRdR::synapse0x32c1200() {
   return (neuron0x32b3d90()*-0.221326);
}

double NNfunction_ss_dRdR::synapse0x32c1880() {
   return (neuron0x32b3fb0()*-0.0017623);
}

double NNfunction_ss_dRdR::synapse0x32c18c0() {
   return (neuron0x32b42f0()*-0.0694862);
}

double NNfunction_ss_dRdR::synapse0x32c1900() {
   return (neuron0x32b4630()*0.756207);
}

double NNfunction_ss_dRdR::synapse0x32c1940() {
   return (neuron0x32b4970()*0.223361);
}

double NNfunction_ss_dRdR::synapse0x32c1980() {
   return (neuron0x32b4cb0()*0.130501);
}

double NNfunction_ss_dRdR::synapse0x32c19c0() {
   return (neuron0x32b4ff0()*0.267653);
}

double NNfunction_ss_dRdR::synapse0x32c1d40() {
   return (neuron0x32b04c0()*0.0739749);
}

double NNfunction_ss_dRdR::synapse0x32c1d80() {
   return (neuron0x32b0770()*0.187492);
}

double NNfunction_ss_dRdR::synapse0x32c1dc0() {
   return (neuron0x32b0ab0()*0.124951);
}

double NNfunction_ss_dRdR::synapse0x32c1e00() {
   return (neuron0x32b0df0()*-0.238754);
}

double NNfunction_ss_dRdR::synapse0x32c1e40() {
   return (neuron0x32b1130()*0.124435);
}

double NNfunction_ss_dRdR::synapse0x32c1e80() {
   return (neuron0x32b1470()*0.0646371);
}

double NNfunction_ss_dRdR::synapse0x32c1ec0() {
   return (neuron0x32b17b0()*0.0595841);
}

double NNfunction_ss_dRdR::synapse0x32c1f00() {
   return (neuron0x32b1af0()*0.189377);
}

double NNfunction_ss_dRdR::synapse0x32c1f40() {
   return (neuron0x32b1e30()*0.107735);
}

double NNfunction_ss_dRdR::synapse0x32c1f80() {
   return (neuron0x32b2170()*0.0884738);
}

double NNfunction_ss_dRdR::synapse0x32c1fc0() {
   return (neuron0x32b24b0()*0.0995814);
}

double NNfunction_ss_dRdR::synapse0x32c2000() {
   return (neuron0x32b27f0()*-0.254458);
}

double NNfunction_ss_dRdR::synapse0x32c2040() {
   return (neuron0x32b2b30()*-0.318311);
}

double NNfunction_ss_dRdR::synapse0x32c2080() {
   return (neuron0x32b2e70()*0.128845);
}

double NNfunction_ss_dRdR::synapse0x32c20c0() {
   return (neuron0x32b31b0()*-0.121833);
}

double NNfunction_ss_dRdR::synapse0x32c2100() {
   return (neuron0x32b34f0()*-0.173128);
}

double NNfunction_ss_dRdR::synapse0x32c1b90() {
   return (neuron0x32b3830()*0.285956);
}

double NNfunction_ss_dRdR::synapse0x32c1bd0() {
   return (neuron0x32b3d90()*-1.27871);
}

double NNfunction_ss_dRdR::synapse0x32c2250() {
   return (neuron0x32b3fb0()*-0.172195);
}

double NNfunction_ss_dRdR::synapse0x32c2290() {
   return (neuron0x32b42f0()*-0.0368082);
}

double NNfunction_ss_dRdR::synapse0x32c22d0() {
   return (neuron0x32b4630()*0.116325);
}

double NNfunction_ss_dRdR::synapse0x32c2310() {
   return (neuron0x32b4970()*0.0931616);
}

double NNfunction_ss_dRdR::synapse0x32c2350() {
   return (neuron0x32b4cb0()*0.0739831);
}

double NNfunction_ss_dRdR::synapse0x32c2390() {
   return (neuron0x32b4ff0()*-0.13128);
}

double NNfunction_ss_dRdR::synapse0x32c2710() {
   return (neuron0x32b04c0()*-0.0163255);
}

double NNfunction_ss_dRdR::synapse0x32c2750() {
   return (neuron0x32b0770()*0.0140823);
}

double NNfunction_ss_dRdR::synapse0x32c2790() {
   return (neuron0x32b0ab0()*0.00573827);
}

double NNfunction_ss_dRdR::synapse0x32c27d0() {
   return (neuron0x32b0df0()*0.172139);
}

double NNfunction_ss_dRdR::synapse0x32c2810() {
   return (neuron0x32b1130()*-0.0161844);
}

double NNfunction_ss_dRdR::synapse0x32c2850() {
   return (neuron0x32b1470()*-0.00902003);
}

double NNfunction_ss_dRdR::synapse0x32c2890() {
   return (neuron0x32b17b0()*-0.0468913);
}

double NNfunction_ss_dRdR::synapse0x32c28d0() {
   return (neuron0x32b1af0()*0.00743496);
}

double NNfunction_ss_dRdR::synapse0x32c2910() {
   return (neuron0x32b1e30()*0.00339714);
}

double NNfunction_ss_dRdR::synapse0x32c2950() {
   return (neuron0x32b2170()*-0.0138862);
}

double NNfunction_ss_dRdR::synapse0x32c2990() {
   return (neuron0x32b24b0()*0.0014101);
}

double NNfunction_ss_dRdR::synapse0x32c29d0() {
   return (neuron0x32b27f0()*0.0226998);
}

double NNfunction_ss_dRdR::synapse0x32c2a10() {
   return (neuron0x32b2b30()*-0.00354419);
}

double NNfunction_ss_dRdR::synapse0x32c2a50() {
   return (neuron0x32b2e70()*0.0273709);
}

double NNfunction_ss_dRdR::synapse0x32c2a90() {
   return (neuron0x32b31b0()*0.00460996);
}

double NNfunction_ss_dRdR::synapse0x32c2ad0() {
   return (neuron0x32b34f0()*-0.00371278);
}

double NNfunction_ss_dRdR::synapse0x32c2560() {
   return (neuron0x32b3830()*0.0135467);
}

double NNfunction_ss_dRdR::synapse0x32c25a0() {
   return (neuron0x32b3d90()*4.26172);
}

double NNfunction_ss_dRdR::synapse0x32c2c20() {
   return (neuron0x32b3fb0()*0.0229221);
}

double NNfunction_ss_dRdR::synapse0x32c2c60() {
   return (neuron0x32b42f0()*-0.0123091);
}

double NNfunction_ss_dRdR::synapse0x32c2ca0() {
   return (neuron0x32b4630()*0.0318295);
}

double NNfunction_ss_dRdR::synapse0x32c2ce0() {
   return (neuron0x32b4970()*0.00262533);
}

double NNfunction_ss_dRdR::synapse0x32c2d20() {
   return (neuron0x32b4cb0()*-0.00840773);
}

double NNfunction_ss_dRdR::synapse0x32c2d60() {
   return (neuron0x32b4ff0()*-0.00439493);
}

double NNfunction_ss_dRdR::synapse0x32c30e0() {
   return (neuron0x32b04c0()*0.413076);
}

double NNfunction_ss_dRdR::synapse0x32c3120() {
   return (neuron0x32b0770()*-0.118172);
}

double NNfunction_ss_dRdR::synapse0x32c3160() {
   return (neuron0x32b0ab0()*-0.32706);
}

double NNfunction_ss_dRdR::synapse0x32c31a0() {
   return (neuron0x32b0df0()*-0.960038);
}

double NNfunction_ss_dRdR::synapse0x32c31e0() {
   return (neuron0x32b1130()*0.831464);
}

double NNfunction_ss_dRdR::synapse0x32c3220() {
   return (neuron0x32b1470()*0.316989);
}

double NNfunction_ss_dRdR::synapse0x32c3260() {
   return (neuron0x32b17b0()*-0.00852442);
}

double NNfunction_ss_dRdR::synapse0x32c32a0() {
   return (neuron0x32b1af0()*-0.177113);
}

double NNfunction_ss_dRdR::synapse0x32c32e0() {
   return (neuron0x32b1e30()*0.678494);
}

double NNfunction_ss_dRdR::synapse0x32c3320() {
   return (neuron0x32b2170()*-0.0346136);
}

double NNfunction_ss_dRdR::synapse0x32c3360() {
   return (neuron0x32b24b0()*0.407358);
}

double NNfunction_ss_dRdR::synapse0x32c33a0() {
   return (neuron0x32b27f0()*-0.614444);
}

double NNfunction_ss_dRdR::synapse0x32c33e0() {
   return (neuron0x32b2b30()*-0.813013);
}

double NNfunction_ss_dRdR::synapse0x32c3420() {
   return (neuron0x32b2e70()*1.08353);
}

double NNfunction_ss_dRdR::synapse0x32c3460() {
   return (neuron0x32b31b0()*-0.435859);
}

double NNfunction_ss_dRdR::synapse0x32c34a0() {
   return (neuron0x32b34f0()*0.156441);
}

double NNfunction_ss_dRdR::synapse0x32c2f30() {
   return (neuron0x32b3830()*-0.638406);
}

double NNfunction_ss_dRdR::synapse0x32c2f70() {
   return (neuron0x32b3d90()*1.05362);
}

double NNfunction_ss_dRdR::synapse0x32c35f0() {
   return (neuron0x32b3fb0()*0.433685);
}

double NNfunction_ss_dRdR::synapse0x32c3630() {
   return (neuron0x32b42f0()*0.359505);
}

double NNfunction_ss_dRdR::synapse0x32c3670() {
   return (neuron0x32b4630()*0.195916);
}

double NNfunction_ss_dRdR::synapse0x32c36b0() {
   return (neuron0x32b4970()*0.00745606);
}

double NNfunction_ss_dRdR::synapse0x32c36f0() {
   return (neuron0x32b4cb0()*0.03829);
}

double NNfunction_ss_dRdR::synapse0x32c3730() {
   return (neuron0x32b4ff0()*-0.312587);
}

double NNfunction_ss_dRdR::synapse0x32c3ab0() {
   return (neuron0x32b04c0()*0.00433129);
}

double NNfunction_ss_dRdR::synapse0x32c3af0() {
   return (neuron0x32b0770()*0.0133232);
}

double NNfunction_ss_dRdR::synapse0x32c3b30() {
   return (neuron0x32b0ab0()*0.210118);
}

double NNfunction_ss_dRdR::synapse0x32c3b70() {
   return (neuron0x32b0df0()*-0.109063);
}

double NNfunction_ss_dRdR::synapse0x32c3bb0() {
   return (neuron0x32b1130()*-0.620743);
}

double NNfunction_ss_dRdR::synapse0x32c3bf0() {
   return (neuron0x32b1470()*-0.0681115);
}

double NNfunction_ss_dRdR::synapse0x32c3c30() {
   return (neuron0x32b17b0()*-0.344851);
}

double NNfunction_ss_dRdR::synapse0x32c3c70() {
   return (neuron0x32b1af0()*-0.274033);
}

double NNfunction_ss_dRdR::synapse0x32c3cb0() {
   return (neuron0x32b1e30()*-0.396689);
}

double NNfunction_ss_dRdR::synapse0x32bbe70() {
   return (neuron0x32b2170()*0.665066);
}

double NNfunction_ss_dRdR::synapse0x32bbeb0() {
   return (neuron0x32b24b0()*-0.0361204);
}

double NNfunction_ss_dRdR::synapse0x32bbef0() {
   return (neuron0x32b27f0()*0.0343772);
}

double NNfunction_ss_dRdR::synapse0x32bbf30() {
   return (neuron0x32b2b30()*-0.172016);
}

double NNfunction_ss_dRdR::synapse0x32bbf70() {
   return (neuron0x32b2e70()*-0.0312381);
}

double NNfunction_ss_dRdR::synapse0x32bbfb0() {
   return (neuron0x32b31b0()*-0.393024);
}

double NNfunction_ss_dRdR::synapse0x32bbff0() {
   return (neuron0x32b34f0()*-0.305497);
}

double NNfunction_ss_dRdR::synapse0x32c3900() {
   return (neuron0x32b3830()*0.442248);
}

double NNfunction_ss_dRdR::synapse0x32c3940() {
   return (neuron0x32b3d90()*-0.349213);
}

double NNfunction_ss_dRdR::synapse0x32bc140() {
   return (neuron0x32b3fb0()*-0.324283);
}

double NNfunction_ss_dRdR::synapse0x32bc180() {
   return (neuron0x32b42f0()*0.863701);
}

double NNfunction_ss_dRdR::synapse0x32bc1c0() {
   return (neuron0x32b4630()*0.287444);
}

double NNfunction_ss_dRdR::synapse0x32bc200() {
   return (neuron0x32b4970()*0.0932902);
}

double NNfunction_ss_dRdR::synapse0x32bc240() {
   return (neuron0x32b4cb0()*0.155171);
}

double NNfunction_ss_dRdR::synapse0x32bc280() {
   return (neuron0x32b4ff0()*-0.200927);
}

double NNfunction_ss_dRdR::synapse0x32bc600() {
   return (neuron0x32b04c0()*-0.237435);
}

double NNfunction_ss_dRdR::synapse0x32bc640() {
   return (neuron0x32b0770()*0.248847);
}

double NNfunction_ss_dRdR::synapse0x32bc680() {
   return (neuron0x32b0ab0()*0.0205091);
}

double NNfunction_ss_dRdR::synapse0x32bc6c0() {
   return (neuron0x32b0df0()*-0.16049);
}

double NNfunction_ss_dRdR::synapse0x32bc700() {
   return (neuron0x32b1130()*-0.0115709);
}

double NNfunction_ss_dRdR::synapse0x32bc740() {
   return (neuron0x32b1470()*1.09886);
}

double NNfunction_ss_dRdR::synapse0x32bc780() {
   return (neuron0x32b17b0()*0.763274);
}

double NNfunction_ss_dRdR::synapse0x32bc7c0() {
   return (neuron0x32b1af0()*0.560035);
}

double NNfunction_ss_dRdR::synapse0x32bc800() {
   return (neuron0x32b1e30()*0.116373);
}

double NNfunction_ss_dRdR::synapse0x32bc840() {
   return (neuron0x32b2170()*-0.363061);
}

double NNfunction_ss_dRdR::synapse0x32bc880() {
   return (neuron0x32b24b0()*0.238772);
}

double NNfunction_ss_dRdR::synapse0x32bc8c0() {
   return (neuron0x32b27f0()*0.282418);
}

double NNfunction_ss_dRdR::synapse0x32bc900() {
   return (neuron0x32b2b30()*0.275816);
}

double NNfunction_ss_dRdR::synapse0x32bc940() {
   return (neuron0x32b2e70()*-0.0503458);
}

double NNfunction_ss_dRdR::synapse0x32bc980() {
   return (neuron0x32b31b0()*0.361619);
}

double NNfunction_ss_dRdR::synapse0x32bc9c0() {
   return (neuron0x32b34f0()*0.243276);
}

double NNfunction_ss_dRdR::synapse0x32bc450() {
   return (neuron0x32b3830()*0.526303);
}

double NNfunction_ss_dRdR::synapse0x32bc490() {
   return (neuron0x32b3d90()*0.504347);
}

double NNfunction_ss_dRdR::synapse0x32bcb10() {
   return (neuron0x32b3fb0()*0.109024);
}

double NNfunction_ss_dRdR::synapse0x32bcb50() {
   return (neuron0x32b42f0()*0.140894);
}

double NNfunction_ss_dRdR::synapse0x32bcb90() {
   return (neuron0x32b4630()*-0.454898);
}

double NNfunction_ss_dRdR::synapse0x32bcbd0() {
   return (neuron0x32b4970()*0.250382);
}

double NNfunction_ss_dRdR::synapse0x32bcc10() {
   return (neuron0x32b4cb0()*-0.0353385);
}

double NNfunction_ss_dRdR::synapse0x32bcc50() {
   return (neuron0x32b4ff0()*0.0815408);
}

double NNfunction_ss_dRdR::synapse0x32bce20() {
   return (neuron0x32b04c0()*0.0301072);
}

double NNfunction_ss_dRdR::synapse0x32c5eb0() {
   return (neuron0x32b0770()*-0.0194541);
}

double NNfunction_ss_dRdR::synapse0x32c5ef0() {
   return (neuron0x32b0ab0()*0.0583052);
}

double NNfunction_ss_dRdR::synapse0x32c5f30() {
   return (neuron0x32b0df0()*-0.577909);
}

double NNfunction_ss_dRdR::synapse0x32c5f70() {
   return (neuron0x32b1130()*0.0524583);
}

double NNfunction_ss_dRdR::synapse0x32c5fb0() {
   return (neuron0x32b1470()*0.0638788);
}

double NNfunction_ss_dRdR::synapse0x32c5ff0() {
   return (neuron0x32b17b0()*0.128985);
}

double NNfunction_ss_dRdR::synapse0x32c6030() {
   return (neuron0x32b1af0()*0.0938055);
}

double NNfunction_ss_dRdR::synapse0x32c6070() {
   return (neuron0x32b1e30()*0.184019);
}

double NNfunction_ss_dRdR::synapse0x32c60b0() {
   return (neuron0x32b2170()*0.17791);
}

double NNfunction_ss_dRdR::synapse0x32c60f0() {
   return (neuron0x32b24b0()*0.153473);
}

double NNfunction_ss_dRdR::synapse0x32c6130() {
   return (neuron0x32b27f0()*-0.0238316);
}

double NNfunction_ss_dRdR::synapse0x32c6170() {
   return (neuron0x32b2b30()*0.0865964);
}

double NNfunction_ss_dRdR::synapse0x32c61b0() {
   return (neuron0x32b2e70()*-0.139461);
}

double NNfunction_ss_dRdR::synapse0x32c61f0() {
   return (neuron0x32b31b0()*0.0877465);
}

double NNfunction_ss_dRdR::synapse0x32c6230() {
   return (neuron0x32b34f0()*0.0604678);
}

double NNfunction_ss_dRdR::synapse0x32c5d00() {
   return (neuron0x32b3830()*0.029598);
}

double NNfunction_ss_dRdR::synapse0x32c5d40() {
   return (neuron0x32b3d90()*-0.896484);
}

double NNfunction_ss_dRdR::synapse0x32c6380() {
   return (neuron0x32b3fb0()*0.0831263);
}

double NNfunction_ss_dRdR::synapse0x32c63c0() {
   return (neuron0x32b42f0()*0.0230805);
}

double NNfunction_ss_dRdR::synapse0x32c6400() {
   return (neuron0x32b4630()*0.138908);
}

double NNfunction_ss_dRdR::synapse0x32c6440() {
   return (neuron0x32b4970()*0.0955897);
}

double NNfunction_ss_dRdR::synapse0x32c6480() {
   return (neuron0x32b4cb0()*-0.0448622);
}

double NNfunction_ss_dRdR::synapse0x32c64c0() {
   return (neuron0x32b4ff0()*-0.0376632);
}

double NNfunction_ss_dRdR::synapse0x32c6840() {
   return (neuron0x32b04c0()*0.0770955);
}

double NNfunction_ss_dRdR::synapse0x32c6880() {
   return (neuron0x32b0770()*0.00654178);
}

double NNfunction_ss_dRdR::synapse0x32c68c0() {
   return (neuron0x32b0ab0()*-0.0291061);
}

double NNfunction_ss_dRdR::synapse0x32c6900() {
   return (neuron0x32b0df0()*-0.529086);
}

double NNfunction_ss_dRdR::synapse0x32c6940() {
   return (neuron0x32b1130()*-0.0284685);
}

double NNfunction_ss_dRdR::synapse0x32c6980() {
   return (neuron0x32b1470()*0.0772941);
}

double NNfunction_ss_dRdR::synapse0x32c69c0() {
   return (neuron0x32b17b0()*-0.15261);
}

double NNfunction_ss_dRdR::synapse0x32c6a00() {
   return (neuron0x32b1af0()*-0.0121467);
}

double NNfunction_ss_dRdR::synapse0x32c6a40() {
   return (neuron0x32b1e30()*-0.000231805);
}

double NNfunction_ss_dRdR::synapse0x32c6a80() {
   return (neuron0x32b2170()*0.00795055);
}

double NNfunction_ss_dRdR::synapse0x32c6ac0() {
   return (neuron0x32b24b0()*0.017741);
}

double NNfunction_ss_dRdR::synapse0x32c6b00() {
   return (neuron0x32b27f0()*0.116832);
}

double NNfunction_ss_dRdR::synapse0x32c6b40() {
   return (neuron0x32b2b30()*0.207231);
}

double NNfunction_ss_dRdR::synapse0x32c6b80() {
   return (neuron0x32b2e70()*-0.232269);
}

double NNfunction_ss_dRdR::synapse0x32c6bc0() {
   return (neuron0x32b31b0()*0.396649);
}

double NNfunction_ss_dRdR::synapse0x32c6c00() {
   return (neuron0x32b34f0()*-0.0442857);
}

double NNfunction_ss_dRdR::synapse0x32c6690() {
   return (neuron0x32b3830()*-0.190123);
}

double NNfunction_ss_dRdR::synapse0x32c66d0() {
   return (neuron0x32b3d90()*-0.412728);
}

double NNfunction_ss_dRdR::synapse0x32c6d50() {
   return (neuron0x32b3fb0()*0.074534);
}

double NNfunction_ss_dRdR::synapse0x32c6d90() {
   return (neuron0x32b42f0()*0.0275896);
}

double NNfunction_ss_dRdR::synapse0x32c6dd0() {
   return (neuron0x32b4630()*0.0136785);
}

double NNfunction_ss_dRdR::synapse0x32c6e10() {
   return (neuron0x32b4970()*-0.00547225);
}

double NNfunction_ss_dRdR::synapse0x32c6e50() {
   return (neuron0x32b4cb0()*0.0140888);
}

double NNfunction_ss_dRdR::synapse0x32c6e90() {
   return (neuron0x32b4ff0()*-0.0351407);
}

double NNfunction_ss_dRdR::synapse0x32c7210() {
   return (neuron0x32b04c0()*-0.286752);
}

double NNfunction_ss_dRdR::synapse0x32c7250() {
   return (neuron0x32b0770()*0.316717);
}

double NNfunction_ss_dRdR::synapse0x32c7290() {
   return (neuron0x32b0ab0()*-1.5274);
}

double NNfunction_ss_dRdR::synapse0x32c72d0() {
   return (neuron0x32b0df0()*-0.0590139);
}

double NNfunction_ss_dRdR::synapse0x32c7310() {
   return (neuron0x32b1130()*-0.925259);
}

double NNfunction_ss_dRdR::synapse0x32c7350() {
   return (neuron0x32b1470()*0.370979);
}

double NNfunction_ss_dRdR::synapse0x32c7390() {
   return (neuron0x32b17b0()*0.371342);
}

double NNfunction_ss_dRdR::synapse0x32c73d0() {
   return (neuron0x32b1af0()*0.0568856);
}

double NNfunction_ss_dRdR::synapse0x32c7410() {
   return (neuron0x32b1e30()*0.351904);
}

double NNfunction_ss_dRdR::synapse0x32c7450() {
   return (neuron0x32b2170()*0.61665);
}

double NNfunction_ss_dRdR::synapse0x32c7490() {
   return (neuron0x32b24b0()*-1.37561);
}

double NNfunction_ss_dRdR::synapse0x32c74d0() {
   return (neuron0x32b27f0()*1.84519);
}

double NNfunction_ss_dRdR::synapse0x32c7510() {
   return (neuron0x32b2b30()*0.522693);
}

double NNfunction_ss_dRdR::synapse0x32c7550() {
   return (neuron0x32b2e70()*-0.610755);
}

double NNfunction_ss_dRdR::synapse0x32c7590() {
   return (neuron0x32b31b0()*0.7501);
}

double NNfunction_ss_dRdR::synapse0x32c75d0() {
   return (neuron0x32b34f0()*0.682943);
}

double NNfunction_ss_dRdR::synapse0x32c7060() {
   return (neuron0x32b3830()*0.381065);
}

double NNfunction_ss_dRdR::synapse0x32c70a0() {
   return (neuron0x32b3d90()*-0.852726);
}

double NNfunction_ss_dRdR::synapse0x32c7720() {
   return (neuron0x32b3fb0()*-0.000220662);
}

double NNfunction_ss_dRdR::synapse0x32c7760() {
   return (neuron0x32b42f0()*0.527992);
}

double NNfunction_ss_dRdR::synapse0x32c77a0() {
   return (neuron0x32b4630()*-0.73153);
}

double NNfunction_ss_dRdR::synapse0x32c77e0() {
   return (neuron0x32b4970()*0.0180466);
}

double NNfunction_ss_dRdR::synapse0x32c7820() {
   return (neuron0x32b4cb0()*0.351131);
}

double NNfunction_ss_dRdR::synapse0x32c7860() {
   return (neuron0x32b4ff0()*0.0455344);
}

double NNfunction_ss_dRdR::synapse0x32c7be0() {
   return (neuron0x32b04c0()*-0.0159305);
}

double NNfunction_ss_dRdR::synapse0x32c7c20() {
   return (neuron0x32b0770()*-0.0593562);
}

double NNfunction_ss_dRdR::synapse0x32c7c60() {
   return (neuron0x32b0ab0()*-0.0535836);
}

double NNfunction_ss_dRdR::synapse0x32c7ca0() {
   return (neuron0x32b0df0()*-0.960485);
}

double NNfunction_ss_dRdR::synapse0x32c7ce0() {
   return (neuron0x32b1130()*-0.194973);
}

double NNfunction_ss_dRdR::synapse0x32c7d20() {
   return (neuron0x32b1470()*0.0513719);
}

double NNfunction_ss_dRdR::synapse0x32c7d60() {
   return (neuron0x32b17b0()*0.244745);
}

double NNfunction_ss_dRdR::synapse0x32c7da0() {
   return (neuron0x32b1af0()*0.04315);
}

double NNfunction_ss_dRdR::synapse0x32c7de0() {
   return (neuron0x32b1e30()*-0.0648724);
}

double NNfunction_ss_dRdR::synapse0x32c7e20() {
   return (neuron0x32b2170()*-0.0141214);
}

double NNfunction_ss_dRdR::synapse0x32c7e60() {
   return (neuron0x32b24b0()*0.017779);
}

double NNfunction_ss_dRdR::synapse0x32c7ea0() {
   return (neuron0x32b27f0()*-0.129155);
}

double NNfunction_ss_dRdR::synapse0x32c7ee0() {
   return (neuron0x32b2b30()*0.096038);
}

double NNfunction_ss_dRdR::synapse0x32c7f20() {
   return (neuron0x32b2e70()*0.0723385);
}

double NNfunction_ss_dRdR::synapse0x32c7f60() {
   return (neuron0x32b31b0()*-0.108454);
}

double NNfunction_ss_dRdR::synapse0x32c7fa0() {
   return (neuron0x32b34f0()*0.180931);
}

double NNfunction_ss_dRdR::synapse0x32c7a30() {
   return (neuron0x32b3830()*-0.161749);
}

double NNfunction_ss_dRdR::synapse0x32c7a70() {
   return (neuron0x32b3d90()*0.417412);
}

double NNfunction_ss_dRdR::synapse0x32c80f0() {
   return (neuron0x32b3fb0()*0.119547);
}

double NNfunction_ss_dRdR::synapse0x32c8130() {
   return (neuron0x32b42f0()*0.149629);
}

double NNfunction_ss_dRdR::synapse0x32c8170() {
   return (neuron0x32b4630()*-0.13294);
}

double NNfunction_ss_dRdR::synapse0x32c81b0() {
   return (neuron0x32b4970()*0.0159915);
}

double NNfunction_ss_dRdR::synapse0x32c81f0() {
   return (neuron0x32b4cb0()*0.0479961);
}

double NNfunction_ss_dRdR::synapse0x32c8230() {
   return (neuron0x32b4ff0()*-0.0805712);
}

double NNfunction_ss_dRdR::synapse0x32c85b0() {
   return (neuron0x32b04c0()*0.260284);
}

double NNfunction_ss_dRdR::synapse0x32c85f0() {
   return (neuron0x32b0770()*0.25197);
}

double NNfunction_ss_dRdR::synapse0x32c8630() {
   return (neuron0x32b0ab0()*0.31781);
}

double NNfunction_ss_dRdR::synapse0x32c8670() {
   return (neuron0x32b0df0()*-0.739134);
}

double NNfunction_ss_dRdR::synapse0x32c86b0() {
   return (neuron0x32b1130()*-0.293817);
}

double NNfunction_ss_dRdR::synapse0x32c86f0() {
   return (neuron0x32b1470()*-0.294679);
}

double NNfunction_ss_dRdR::synapse0x32c8730() {
   return (neuron0x32b17b0()*0.744376);
}

double NNfunction_ss_dRdR::synapse0x32c8770() {
   return (neuron0x32b1af0()*-0.385166);
}

double NNfunction_ss_dRdR::synapse0x32c87b0() {
   return (neuron0x32b1e30()*0.283233);
}

double NNfunction_ss_dRdR::synapse0x32c87f0() {
   return (neuron0x32b2170()*0.266852);
}

double NNfunction_ss_dRdR::synapse0x32c8830() {
   return (neuron0x32b24b0()*-0.0053489);
}

double NNfunction_ss_dRdR::synapse0x32c8870() {
   return (neuron0x32b27f0()*0.158402);
}

double NNfunction_ss_dRdR::synapse0x32c88b0() {
   return (neuron0x32b2b30()*0.212918);
}

double NNfunction_ss_dRdR::synapse0x32c88f0() {
   return (neuron0x32b2e70()*-0.105932);
}

double NNfunction_ss_dRdR::synapse0x32c8930() {
   return (neuron0x32b31b0()*-0.30323);
}

double NNfunction_ss_dRdR::synapse0x32c8970() {
   return (neuron0x32b34f0()*-0.194253);
}

double NNfunction_ss_dRdR::synapse0x32c8400() {
   return (neuron0x32b3830()*-0.207888);
}

double NNfunction_ss_dRdR::synapse0x32c8440() {
   return (neuron0x32b3d90()*-0.593994);
}

double NNfunction_ss_dRdR::synapse0x32c8ac0() {
   return (neuron0x32b3fb0()*0.0488683);
}

double NNfunction_ss_dRdR::synapse0x32c8b00() {
   return (neuron0x32b42f0()*-0.0943364);
}

double NNfunction_ss_dRdR::synapse0x32c8b40() {
   return (neuron0x32b4630()*0.265288);
}

double NNfunction_ss_dRdR::synapse0x32c8b80() {
   return (neuron0x32b4970()*0.0873784);
}

double NNfunction_ss_dRdR::synapse0x32c8bc0() {
   return (neuron0x32b4cb0()*0.0231638);
}

double NNfunction_ss_dRdR::synapse0x32c8c00() {
   return (neuron0x32b4ff0()*-0.138416);
}

double NNfunction_ss_dRdR::synapse0x32c8f80() {
   return (neuron0x32b04c0()*-0.0210773);
}

double NNfunction_ss_dRdR::synapse0x32c8fc0() {
   return (neuron0x32b0770()*-0.016713);
}

double NNfunction_ss_dRdR::synapse0x32c9000() {
   return (neuron0x32b0ab0()*0.00394304);
}

double NNfunction_ss_dRdR::synapse0x32c9040() {
   return (neuron0x32b0df0()*0.164472);
}

double NNfunction_ss_dRdR::synapse0x32c9080() {
   return (neuron0x32b1130()*-0.0205633);
}

double NNfunction_ss_dRdR::synapse0x32c90c0() {
   return (neuron0x32b1470()*-0.0294941);
}

double NNfunction_ss_dRdR::synapse0x32c9100() {
   return (neuron0x32b17b0()*-0.000450715);
}

double NNfunction_ss_dRdR::synapse0x32c9140() {
   return (neuron0x32b1af0()*-0.0178251);
}

double NNfunction_ss_dRdR::synapse0x32c9180() {
   return (neuron0x32b1e30()*-0.0569585);
}

double NNfunction_ss_dRdR::synapse0x32c91c0() {
   return (neuron0x32b2170()*-0.0502515);
}

double NNfunction_ss_dRdR::synapse0x32c9200() {
   return (neuron0x32b24b0()*0.0173649);
}

double NNfunction_ss_dRdR::synapse0x32c9240() {
   return (neuron0x32b27f0()*-0.041732);
}

double NNfunction_ss_dRdR::synapse0x32c9280() {
   return (neuron0x32b2b30()*-0.0268992);
}

double NNfunction_ss_dRdR::synapse0x32c92c0() {
   return (neuron0x32b2e70()*0.0593025);
}

double NNfunction_ss_dRdR::synapse0x32c9300() {
   return (neuron0x32b31b0()*-0.014269);
}

double NNfunction_ss_dRdR::synapse0x32c9340() {
   return (neuron0x32b34f0()*-0.0133502);
}

double NNfunction_ss_dRdR::synapse0x32c8dd0() {
   return (neuron0x32b3830()*0.0136009);
}

double NNfunction_ss_dRdR::synapse0x32c8e10() {
   return (neuron0x32b3d90()*1.60136);
}

double NNfunction_ss_dRdR::synapse0x32c9490() {
   return (neuron0x32b3fb0()*0.00440369);
}

double NNfunction_ss_dRdR::synapse0x32c94d0() {
   return (neuron0x32b42f0()*-0.010839);
}

double NNfunction_ss_dRdR::synapse0x32c9510() {
   return (neuron0x32b4630()*-0.0180777);
}

double NNfunction_ss_dRdR::synapse0x32c9550() {
   return (neuron0x32b4970()*-0.0109187);
}

double NNfunction_ss_dRdR::synapse0x32c9590() {
   return (neuron0x32b4cb0()*-0.0154204);
}

double NNfunction_ss_dRdR::synapse0x32c95d0() {
   return (neuron0x32b4ff0()*-0.0242191);
}

double NNfunction_ss_dRdR::synapse0x32c9950() {
   return (neuron0x32b04c0()*0.120235);
}

double NNfunction_ss_dRdR::synapse0x32c9990() {
   return (neuron0x32b0770()*0.799493);
}

double NNfunction_ss_dRdR::synapse0x32c99d0() {
   return (neuron0x32b0ab0()*0.606924);
}

double NNfunction_ss_dRdR::synapse0x32c9a10() {
   return (neuron0x32b0df0()*1.80659);
}

double NNfunction_ss_dRdR::synapse0x32c9a50() {
   return (neuron0x32b1130()*0.0859629);
}

double NNfunction_ss_dRdR::synapse0x32c9a90() {
   return (neuron0x32b1470()*-0.16474);
}

double NNfunction_ss_dRdR::synapse0x32c9ad0() {
   return (neuron0x32b17b0()*-0.60787);
}

double NNfunction_ss_dRdR::synapse0x32c9b10() {
   return (neuron0x32b1af0()*-0.101729);
}

double NNfunction_ss_dRdR::synapse0x32c9b50() {
   return (neuron0x32b1e30()*0.526672);
}

double NNfunction_ss_dRdR::synapse0x32c9b90() {
   return (neuron0x32b2170()*0.588867);
}

double NNfunction_ss_dRdR::synapse0x32c9bd0() {
   return (neuron0x32b24b0()*0.202969);
}

double NNfunction_ss_dRdR::synapse0x32c9c10() {
   return (neuron0x32b27f0()*-0.27811);
}

double NNfunction_ss_dRdR::synapse0x32c9c50() {
   return (neuron0x32b2b30()*0.206257);
}

double NNfunction_ss_dRdR::synapse0x32c9c90() {
   return (neuron0x32b2e70()*-0.269378);
}

double NNfunction_ss_dRdR::synapse0x32c9cd0() {
   return (neuron0x32b31b0()*0.267138);
}

double NNfunction_ss_dRdR::synapse0x32c9d10() {
   return (neuron0x32b34f0()*0.247854);
}

double NNfunction_ss_dRdR::synapse0x32c97a0() {
   return (neuron0x32b3830()*-0.304675);
}

double NNfunction_ss_dRdR::synapse0x32c97e0() {
   return (neuron0x32b3d90()*-0.324395);
}

double NNfunction_ss_dRdR::synapse0x32c9e60() {
   return (neuron0x32b3fb0()*0.676272);
}

double NNfunction_ss_dRdR::synapse0x32c9ea0() {
   return (neuron0x32b42f0()*0.739034);
}

double NNfunction_ss_dRdR::synapse0x32c9ee0() {
   return (neuron0x32b4630()*-0.0368075);
}

double NNfunction_ss_dRdR::synapse0x32c9f20() {
   return (neuron0x32b4970()*0.142758);
}

double NNfunction_ss_dRdR::synapse0x32c9f60() {
   return (neuron0x32b4cb0()*-0.0391647);
}

double NNfunction_ss_dRdR::synapse0x32c9fa0() {
   return (neuron0x32b4ff0()*0.0915274);
}

double NNfunction_ss_dRdR::synapse0x32ca320() {
   return (neuron0x32b04c0()*0.0870044);
}

double NNfunction_ss_dRdR::synapse0x32ca360() {
   return (neuron0x32b0770()*-0.206783);
}

double NNfunction_ss_dRdR::synapse0x32ca3a0() {
   return (neuron0x32b0ab0()*0.0247874);
}

double NNfunction_ss_dRdR::synapse0x32ca3e0() {
   return (neuron0x32b0df0()*0.619734);
}

double NNfunction_ss_dRdR::synapse0x32ca420() {
   return (neuron0x32b1130()*-0.996603);
}

double NNfunction_ss_dRdR::synapse0x32ca460() {
   return (neuron0x32b1470()*0.090495);
}

double NNfunction_ss_dRdR::synapse0x32ca4a0() {
   return (neuron0x32b17b0()*-0.587148);
}

double NNfunction_ss_dRdR::synapse0x32ca4e0() {
   return (neuron0x32b1af0()*0.245674);
}

double NNfunction_ss_dRdR::synapse0x32ca520() {
   return (neuron0x32b1e30()*0.32437);
}

double NNfunction_ss_dRdR::synapse0x32ca560() {
   return (neuron0x32b2170()*-0.00144523);
}

double NNfunction_ss_dRdR::synapse0x32ca5a0() {
   return (neuron0x32b24b0()*0.124548);
}

double NNfunction_ss_dRdR::synapse0x32ca5e0() {
   return (neuron0x32b27f0()*0.0764226);
}

double NNfunction_ss_dRdR::synapse0x32ca620() {
   return (neuron0x32b2b30()*-0.354557);
}

double NNfunction_ss_dRdR::synapse0x32ca660() {
   return (neuron0x32b2e70()*0.390226);
}

double NNfunction_ss_dRdR::synapse0x32ca6a0() {
   return (neuron0x32b31b0()*-0.0529618);
}

double NNfunction_ss_dRdR::synapse0x32ca6e0() {
   return (neuron0x32b34f0()*0.121406);
}

double NNfunction_ss_dRdR::synapse0x32ca170() {
   return (neuron0x32b3830()*0.20588);
}

double NNfunction_ss_dRdR::synapse0x32ca1b0() {
   return (neuron0x32b3d90()*-0.214089);
}

double NNfunction_ss_dRdR::synapse0x32ca830() {
   return (neuron0x32b3fb0()*0.0347241);
}

double NNfunction_ss_dRdR::synapse0x32ca870() {
   return (neuron0x32b42f0()*0.228924);
}

double NNfunction_ss_dRdR::synapse0x32ca8b0() {
   return (neuron0x32b4630()*0.00452725);
}

double NNfunction_ss_dRdR::synapse0x32ca8f0() {
   return (neuron0x32b4970()*-0.31691);
}

double NNfunction_ss_dRdR::synapse0x32ca930() {
   return (neuron0x32b4cb0()*-0.11358);
}

double NNfunction_ss_dRdR::synapse0x32ca970() {
   return (neuron0x32b4ff0()*0.000288602);
}

double NNfunction_ss_dRdR::synapse0x32cacf0() {
   return (neuron0x32b04c0()*0.100677);
}

double NNfunction_ss_dRdR::synapse0x32bf2c0() {
   return (neuron0x32b0770()*-0.255064);
}

double NNfunction_ss_dRdR::synapse0x32bf300() {
   return (neuron0x32b0ab0()*0.150866);
}

double NNfunction_ss_dRdR::synapse0x32bf340() {
   return (neuron0x32b0df0()*1.26115);
}

double NNfunction_ss_dRdR::synapse0x32bf590() {
   return (neuron0x32b1130()*0.0161135);
}

double NNfunction_ss_dRdR::synapse0x32bf5d0() {
   return (neuron0x32b1470()*0.133604);
}

double NNfunction_ss_dRdR::synapse0x32bf610() {
   return (neuron0x32b17b0()*-0.161897);
}

double NNfunction_ss_dRdR::synapse0x32bf860() {
   return (neuron0x32b1af0()*0.0225879);
}

double NNfunction_ss_dRdR::synapse0x32bf8a0() {
   return (neuron0x32b1e30()*0.0597962);
}

double NNfunction_ss_dRdR::synapse0x32bfaf0() {
   return (neuron0x32b2170()*-0.00981393);
}

double NNfunction_ss_dRdR::synapse0x32bfb30() {
   return (neuron0x32b24b0()*0.119264);
}

double NNfunction_ss_dRdR::synapse0x32bfb70() {
   return (neuron0x32b27f0()*-0.0348528);
}

double NNfunction_ss_dRdR::synapse0x32bfdc0() {
   return (neuron0x32b2b30()*0.138599);
}

double NNfunction_ss_dRdR::synapse0x32bfe00() {
   return (neuron0x32b2e70()*-0.048419);
}

double NNfunction_ss_dRdR::synapse0x32c0050() {
   return (neuron0x32b31b0()*-0.08451);
}

double NNfunction_ss_dRdR::synapse0x32c0090() {
   return (neuron0x32b34f0()*0.425673);
}

double NNfunction_ss_dRdR::synapse0x32cab40() {
   return (neuron0x32b3830()*-0.0732613);
}

double NNfunction_ss_dRdR::synapse0x32cab80() {
   return (neuron0x32b3d90()*-0.795573);
}

double NNfunction_ss_dRdR::synapse0x32c01e0() {
   return (neuron0x32b3fb0()*0.0369572);
}

double NNfunction_ss_dRdR::synapse0x32c06f0() {
   return (neuron0x32b42f0()*-0.0664273);
}

double NNfunction_ss_dRdR::synapse0x32c0730() {
   return (neuron0x32b4630()*0.09682);
}

double NNfunction_ss_dRdR::synapse0x32c0770() {
   return (neuron0x32b4970()*0.0631057);
}

double NNfunction_ss_dRdR::synapse0x32c09c0() {
   return (neuron0x32b4cb0()*-0.0768672);
}

double NNfunction_ss_dRdR::synapse0x32c0a00() {
   return (neuron0x32b4ff0()*-0.132652);
}

double NNfunction_ss_dRdR::synapse0x32c02b0() {
   return (neuron0x32b04c0()*-0.163666);
}

double NNfunction_ss_dRdR::synapse0x32c02f0() {
   return (neuron0x32b0770()*-0.24294);
}

double NNfunction_ss_dRdR::synapse0x32c0330() {
   return (neuron0x32b0ab0()*-0.272944);
}

double NNfunction_ss_dRdR::synapse0x32c0370() {
   return (neuron0x32b0df0()*-0.0190125);
}

double NNfunction_ss_dRdR::synapse0x32c0cf0() {
   return (neuron0x32b1130()*0.429895);
}

double NNfunction_ss_dRdR::synapse0x32cd040() {
   return (neuron0x32b1470()*0.42938);
}

double NNfunction_ss_dRdR::synapse0x32cd080() {
   return (neuron0x32b17b0()*0.130095);
}

double NNfunction_ss_dRdR::synapse0x32cd0c0() {
   return (neuron0x32b1af0()*-0.709816);
}

double NNfunction_ss_dRdR::synapse0x32cd100() {
   return (neuron0x32b1e30()*-0.060166);
}

double NNfunction_ss_dRdR::synapse0x32cd140() {
   return (neuron0x32b2170()*0.214573);
}

double NNfunction_ss_dRdR::synapse0x32cd180() {
   return (neuron0x32b24b0()*0.285497);
}

double NNfunction_ss_dRdR::synapse0x32cd1c0() {
   return (neuron0x32b27f0()*0.730523);
}

double NNfunction_ss_dRdR::synapse0x32cd200() {
   return (neuron0x32b2b30()*0.370028);
}

double NNfunction_ss_dRdR::synapse0x32cd240() {
   return (neuron0x32b2e70()*-0.156324);
}

double NNfunction_ss_dRdR::synapse0x32cd280() {
   return (neuron0x32b31b0()*0.183416);
}

double NNfunction_ss_dRdR::synapse0x32cd2c0() {
   return (neuron0x32b34f0()*0.432314);
}

double NNfunction_ss_dRdR::synapse0x32c0bd0() {
   return (neuron0x32b3830()*-0.390797);
}

double NNfunction_ss_dRdR::synapse0x32c0c10() {
   return (neuron0x32b3d90()*0.851613);
}

double NNfunction_ss_dRdR::synapse0x32cd410() {
   return (neuron0x32b3fb0()*-0.194735);
}

double NNfunction_ss_dRdR::synapse0x32cd450() {
   return (neuron0x32b42f0()*-0.236893);
}

double NNfunction_ss_dRdR::synapse0x32cd490() {
   return (neuron0x32b4630()*0.0515076);
}

double NNfunction_ss_dRdR::synapse0x32cd4d0() {
   return (neuron0x32b4970()*-0.0444998);
}

double NNfunction_ss_dRdR::synapse0x32cd510() {
   return (neuron0x32b4cb0()*-0.0758709);
}

double NNfunction_ss_dRdR::synapse0x32cd550() {
   return (neuron0x32b4ff0()*0.157243);
}

double NNfunction_ss_dRdR::synapse0x32cd8d0() {
   return (neuron0x32b04c0()*-0.217241);
}

double NNfunction_ss_dRdR::synapse0x32cd910() {
   return (neuron0x32b0770()*-0.352308);
}

double NNfunction_ss_dRdR::synapse0x32cd950() {
   return (neuron0x32b0ab0()*0.323308);
}

double NNfunction_ss_dRdR::synapse0x32cd990() {
   return (neuron0x32b0df0()*1.6437);
}

double NNfunction_ss_dRdR::synapse0x32cd9d0() {
   return (neuron0x32b1130()*0.525033);
}

double NNfunction_ss_dRdR::synapse0x32cda10() {
   return (neuron0x32b1470()*-1.01121);
}

double NNfunction_ss_dRdR::synapse0x32cda50() {
   return (neuron0x32b17b0()*-0.256265);
}

double NNfunction_ss_dRdR::synapse0x32cda90() {
   return (neuron0x32b1af0()*-1.04461);
}

double NNfunction_ss_dRdR::synapse0x32cdad0() {
   return (neuron0x32b1e30()*-0.363731);
}

double NNfunction_ss_dRdR::synapse0x32cdb10() {
   return (neuron0x32b2170()*0.156447);
}

double NNfunction_ss_dRdR::synapse0x32cdb50() {
   return (neuron0x32b24b0()*-0.744657);
}

double NNfunction_ss_dRdR::synapse0x32cdb90() {
   return (neuron0x32b27f0()*-0.374874);
}

double NNfunction_ss_dRdR::synapse0x32cdbd0() {
   return (neuron0x32b2b30()*-0.0236943);
}

double NNfunction_ss_dRdR::synapse0x32cdc10() {
   return (neuron0x32b2e70()*-0.252766);
}

double NNfunction_ss_dRdR::synapse0x32cdc50() {
   return (neuron0x32b31b0()*0.750157);
}

double NNfunction_ss_dRdR::synapse0x32cdc90() {
   return (neuron0x32b34f0()*0.743873);
}

double NNfunction_ss_dRdR::synapse0x32cd720() {
   return (neuron0x32b3830()*0.129646);
}

double NNfunction_ss_dRdR::synapse0x32cd760() {
   return (neuron0x32b3d90()*0.986772);
}

double NNfunction_ss_dRdR::synapse0x32cdde0() {
   return (neuron0x32b3fb0()*0.172881);
}

double NNfunction_ss_dRdR::synapse0x32cde20() {
   return (neuron0x32b42f0()*-0.617833);
}

double NNfunction_ss_dRdR::synapse0x32cde60() {
   return (neuron0x32b4630()*-0.116187);
}

double NNfunction_ss_dRdR::synapse0x32cdea0() {
   return (neuron0x32b4970()*-0.161116);
}

double NNfunction_ss_dRdR::synapse0x32cdee0() {
   return (neuron0x32b4cb0()*-0.0375957);
}

double NNfunction_ss_dRdR::synapse0x32cdf20() {
   return (neuron0x32b4ff0()*-0.168085);
}

double NNfunction_ss_dRdR::synapse0x32ce2a0() {
   return (neuron0x32b04c0()*0.156878);
}

double NNfunction_ss_dRdR::synapse0x32ce2e0() {
   return (neuron0x32b0770()*-0.00156773);
}

double NNfunction_ss_dRdR::synapse0x32ce320() {
   return (neuron0x32b0ab0()*-0.0238492);
}

double NNfunction_ss_dRdR::synapse0x32ce360() {
   return (neuron0x32b0df0()*0.363609);
}

double NNfunction_ss_dRdR::synapse0x32ce3a0() {
   return (neuron0x32b1130()*0.0175687);
}

double NNfunction_ss_dRdR::synapse0x32ce3e0() {
   return (neuron0x32b1470()*0.0204926);
}

double NNfunction_ss_dRdR::synapse0x32ce420() {
   return (neuron0x32b17b0()*-0.0498679);
}

double NNfunction_ss_dRdR::synapse0x32ce460() {
   return (neuron0x32b1af0()*0.0526238);
}

double NNfunction_ss_dRdR::synapse0x32ce4a0() {
   return (neuron0x32b1e30()*-0.134159);
}

double NNfunction_ss_dRdR::synapse0x32ce4e0() {
   return (neuron0x32b2170()*0.0945867);
}

double NNfunction_ss_dRdR::synapse0x32ce520() {
   return (neuron0x32b24b0()*-0.619409);
}

double NNfunction_ss_dRdR::synapse0x32ce560() {
   return (neuron0x32b27f0()*-0.0440325);
}

double NNfunction_ss_dRdR::synapse0x32ce5a0() {
   return (neuron0x32b2b30()*0.0073499);
}

double NNfunction_ss_dRdR::synapse0x32ce5e0() {
   return (neuron0x32b2e70()*-0.188195);
}

double NNfunction_ss_dRdR::synapse0x32ce620() {
   return (neuron0x32b31b0()*-0.00915876);
}

double NNfunction_ss_dRdR::synapse0x32ce660() {
   return (neuron0x32b34f0()*0.0698232);
}

double NNfunction_ss_dRdR::synapse0x32ce0f0() {
   return (neuron0x32b3830()*0.0274943);
}

double NNfunction_ss_dRdR::synapse0x32ce130() {
   return (neuron0x32b3d90()*-1.2172);
}

double NNfunction_ss_dRdR::synapse0x32ce7b0() {
   return (neuron0x32b3fb0()*0.149188);
}

double NNfunction_ss_dRdR::synapse0x32ce7f0() {
   return (neuron0x32b42f0()*0.0215162);
}

double NNfunction_ss_dRdR::synapse0x32ce830() {
   return (neuron0x32b4630()*0.0886596);
}

double NNfunction_ss_dRdR::synapse0x32ce870() {
   return (neuron0x32b4970()*-0.111402);
}

double NNfunction_ss_dRdR::synapse0x32ce8b0() {
   return (neuron0x32b4cb0()*-0.0335505);
}

double NNfunction_ss_dRdR::synapse0x32ce8f0() {
   return (neuron0x32b4ff0()*-0.0746405);
}

double NNfunction_ss_dRdR::synapse0x32cec70() {
   return (neuron0x32b04c0()*0.0249896);
}

double NNfunction_ss_dRdR::synapse0x32cecb0() {
   return (neuron0x32b0770()*-0.00715562);
}

double NNfunction_ss_dRdR::synapse0x32cecf0() {
   return (neuron0x32b0ab0()*0.00287969);
}

double NNfunction_ss_dRdR::synapse0x32ced30() {
   return (neuron0x32b0df0()*-2.89567);
}

double NNfunction_ss_dRdR::synapse0x32ced70() {
   return (neuron0x32b1130()*0.0207392);
}

double NNfunction_ss_dRdR::synapse0x32cedb0() {
   return (neuron0x32b1470()*0.0146087);
}

double NNfunction_ss_dRdR::synapse0x32cedf0() {
   return (neuron0x32b17b0()*0.00210791);
}

double NNfunction_ss_dRdR::synapse0x32cee30() {
   return (neuron0x32b1af0()*-0.00576397);
}

double NNfunction_ss_dRdR::synapse0x32cee70() {
   return (neuron0x32b1e30()*0.000898263);
}

double NNfunction_ss_dRdR::synapse0x32ceeb0() {
   return (neuron0x32b2170()*0.0156505);
}

double NNfunction_ss_dRdR::synapse0x32ceef0() {
   return (neuron0x32b24b0()*-0.000766004);
}

double NNfunction_ss_dRdR::synapse0x32cef30() {
   return (neuron0x32b27f0()*-0.00352308);
}

double NNfunction_ss_dRdR::synapse0x32cef70() {
   return (neuron0x32b2b30()*-0.0101965);
}

double NNfunction_ss_dRdR::synapse0x32cefb0() {
   return (neuron0x32b2e70()*0.00811288);
}

double NNfunction_ss_dRdR::synapse0x32ceff0() {
   return (neuron0x32b31b0()*0.00843566);
}

double NNfunction_ss_dRdR::synapse0x32cf030() {
   return (neuron0x32b34f0()*-0.010268);
}

double NNfunction_ss_dRdR::synapse0x32ceac0() {
   return (neuron0x32b3830()*0.00911593);
}

double NNfunction_ss_dRdR::synapse0x32ceb00() {
   return (neuron0x32b3d90()*-0.603777);
}

double NNfunction_ss_dRdR::synapse0x32cf180() {
   return (neuron0x32b3fb0()*-0.0101643);
}

double NNfunction_ss_dRdR::synapse0x32cf1c0() {
   return (neuron0x32b42f0()*-0.0011332);
}

double NNfunction_ss_dRdR::synapse0x32cf200() {
   return (neuron0x32b4630()*-0.0131869);
}

double NNfunction_ss_dRdR::synapse0x32cf240() {
   return (neuron0x32b4970()*0.00742866);
}

double NNfunction_ss_dRdR::synapse0x32cf280() {
   return (neuron0x32b4cb0()*0.00949324);
}

double NNfunction_ss_dRdR::synapse0x32cf2c0() {
   return (neuron0x32b4ff0()*-0.0130122);
}

double NNfunction_ss_dRdR::synapse0x32cf640() {
   return (neuron0x32b04c0()*-0.0304068);
}

double NNfunction_ss_dRdR::synapse0x32cf680() {
   return (neuron0x32b0770()*-0.0580853);
}

double NNfunction_ss_dRdR::synapse0x32cf6c0() {
   return (neuron0x32b0ab0()*0.0482145);
}

double NNfunction_ss_dRdR::synapse0x32cf700() {
   return (neuron0x32b0df0()*-0.168432);
}

double NNfunction_ss_dRdR::synapse0x32cf740() {
   return (neuron0x32b1130()*0.00232996);
}

double NNfunction_ss_dRdR::synapse0x32cf780() {
   return (neuron0x32b1470()*-0.0175625);
}

double NNfunction_ss_dRdR::synapse0x32cf7c0() {
   return (neuron0x32b17b0()*0.143533);
}

double NNfunction_ss_dRdR::synapse0x32cf800() {
   return (neuron0x32b1af0()*0.0362857);
}

double NNfunction_ss_dRdR::synapse0x32cf840() {
   return (neuron0x32b1e30()*0.0759812);
}

double NNfunction_ss_dRdR::synapse0x32cf880() {
   return (neuron0x32b2170()*0.0775401);
}

double NNfunction_ss_dRdR::synapse0x32cf8c0() {
   return (neuron0x32b24b0()*0.0353961);
}

double NNfunction_ss_dRdR::synapse0x32cf900() {
   return (neuron0x32b27f0()*-0.169881);
}

double NNfunction_ss_dRdR::synapse0x32cf940() {
   return (neuron0x32b2b30()*-0.115557);
}

double NNfunction_ss_dRdR::synapse0x32cf980() {
   return (neuron0x32b2e70()*0.0262925);
}

double NNfunction_ss_dRdR::synapse0x32cf9c0() {
   return (neuron0x32b31b0()*-0.130498);
}

double NNfunction_ss_dRdR::synapse0x32cfa00() {
   return (neuron0x32b34f0()*-0.152582);
}

double NNfunction_ss_dRdR::synapse0x32cf490() {
   return (neuron0x32b3830()*0.0683728);
}

double NNfunction_ss_dRdR::synapse0x32cf4d0() {
   return (neuron0x32b3d90()*-1.23506);
}

double NNfunction_ss_dRdR::synapse0x32cfb50() {
   return (neuron0x32b3fb0()*-0.0834748);
}

double NNfunction_ss_dRdR::synapse0x32cfb90() {
   return (neuron0x32b42f0()*-0.037397);
}

double NNfunction_ss_dRdR::synapse0x32cfbd0() {
   return (neuron0x32b4630()*-0.00456623);
}

double NNfunction_ss_dRdR::synapse0x32cfc10() {
   return (neuron0x32b4970()*-0.0544746);
}

double NNfunction_ss_dRdR::synapse0x32cfc50() {
   return (neuron0x32b4cb0()*-0.091683);
}

double NNfunction_ss_dRdR::synapse0x32cfc90() {
   return (neuron0x32b4ff0()*-0.0526117);
}

double NNfunction_ss_dRdR::synapse0x32d0010() {
   return (neuron0x32b04c0()*0.0599079);
}

double NNfunction_ss_dRdR::synapse0x32d0050() {
   return (neuron0x32b0770()*0.0165583);
}

double NNfunction_ss_dRdR::synapse0x32d0090() {
   return (neuron0x32b0ab0()*0.869117);
}

double NNfunction_ss_dRdR::synapse0x32d00d0() {
   return (neuron0x32b0df0()*-0.56969);
}

double NNfunction_ss_dRdR::synapse0x32d0110() {
   return (neuron0x32b1130()*0.436012);
}

double NNfunction_ss_dRdR::synapse0x32d0150() {
   return (neuron0x32b1470()*0.156411);
}

double NNfunction_ss_dRdR::synapse0x32d0190() {
   return (neuron0x32b17b0()*0.542082);
}

double NNfunction_ss_dRdR::synapse0x32d01d0() {
   return (neuron0x32b1af0()*0.532265);
}

double NNfunction_ss_dRdR::synapse0x32d0210() {
   return (neuron0x32b1e30()*0.523079);
}

double NNfunction_ss_dRdR::synapse0x32d0250() {
   return (neuron0x32b2170()*0.533423);
}

double NNfunction_ss_dRdR::synapse0x32d0290() {
   return (neuron0x32b24b0()*0.651123);
}

double NNfunction_ss_dRdR::synapse0x32d02d0() {
   return (neuron0x32b27f0()*0.161579);
}

double NNfunction_ss_dRdR::synapse0x32d0310() {
   return (neuron0x32b2b30()*0.507008);
}

double NNfunction_ss_dRdR::synapse0x32d0350() {
   return (neuron0x32b2e70()*0.0384952);
}

double NNfunction_ss_dRdR::synapse0x32d0390() {
   return (neuron0x32b31b0()*-0.0220695);
}

double NNfunction_ss_dRdR::synapse0x32d03d0() {
   return (neuron0x32b34f0()*0.231977);
}

double NNfunction_ss_dRdR::synapse0x32cfe60() {
   return (neuron0x32b3830()*0.526688);
}

double NNfunction_ss_dRdR::synapse0x32cfea0() {
   return (neuron0x32b3d90()*-3.56015);
}

double NNfunction_ss_dRdR::synapse0x32d0520() {
   return (neuron0x32b3fb0()*0.215764);
}

double NNfunction_ss_dRdR::synapse0x32d0560() {
   return (neuron0x32b42f0()*0.34286);
}

double NNfunction_ss_dRdR::synapse0x32d05a0() {
   return (neuron0x32b4630()*0.417789);
}

double NNfunction_ss_dRdR::synapse0x32d05e0() {
   return (neuron0x32b4970()*0.0549714);
}

double NNfunction_ss_dRdR::synapse0x32d0620() {
   return (neuron0x32b4cb0()*-0.1688);
}

double NNfunction_ss_dRdR::synapse0x32d0660() {
   return (neuron0x32b4ff0()*-0.221827);
}

double NNfunction_ss_dRdR::synapse0x32d09e0() {
   return (neuron0x32b04c0()*0.037468);
}

double NNfunction_ss_dRdR::synapse0x32d0a20() {
   return (neuron0x32b0770()*-0.089541);
}

double NNfunction_ss_dRdR::synapse0x32d0a60() {
   return (neuron0x32b0ab0()*0.0582014);
}

double NNfunction_ss_dRdR::synapse0x32d0aa0() {
   return (neuron0x32b0df0()*0.232095);
}

double NNfunction_ss_dRdR::synapse0x32d0ae0() {
   return (neuron0x32b1130()*0.0758356);
}

double NNfunction_ss_dRdR::synapse0x32d0b20() {
   return (neuron0x32b1470()*0.0781302);
}

double NNfunction_ss_dRdR::synapse0x32d0b60() {
   return (neuron0x32b17b0()*0.0167057);
}

double NNfunction_ss_dRdR::synapse0x32d0ba0() {
   return (neuron0x32b1af0()*-0.0387731);
}

double NNfunction_ss_dRdR::synapse0x32d0be0() {
   return (neuron0x32b1e30()*-0.0168078);
}

double NNfunction_ss_dRdR::synapse0x32d0c20() {
   return (neuron0x32b2170()*-0.0125364);
}

double NNfunction_ss_dRdR::synapse0x32d0c60() {
   return (neuron0x32b24b0()*0.00599337);
}

double NNfunction_ss_dRdR::synapse0x32d0ca0() {
   return (neuron0x32b27f0()*-0.0638102);
}

double NNfunction_ss_dRdR::synapse0x32d0ce0() {
   return (neuron0x32b2b30()*-0.0877337);
}

double NNfunction_ss_dRdR::synapse0x32d0d20() {
   return (neuron0x32b2e70()*0.0448594);
}

double NNfunction_ss_dRdR::synapse0x32d0d60() {
   return (neuron0x32b31b0()*0.302481);
}

double NNfunction_ss_dRdR::synapse0x32d0da0() {
   return (neuron0x32b34f0()*-0.675775);
}

double NNfunction_ss_dRdR::synapse0x32d0830() {
   return (neuron0x32b3830()*0.0299145);
}

double NNfunction_ss_dRdR::synapse0x32d0870() {
   return (neuron0x32b3d90()*0.92324);
}

double NNfunction_ss_dRdR::synapse0x32d0ef0() {
   return (neuron0x32b3fb0()*-0.0127748);
}

double NNfunction_ss_dRdR::synapse0x32d0f30() {
   return (neuron0x32b42f0()*-0.0252227);
}

double NNfunction_ss_dRdR::synapse0x32d0f70() {
   return (neuron0x32b4630()*0.0694491);
}

double NNfunction_ss_dRdR::synapse0x32d0fb0() {
   return (neuron0x32b4970()*-0.0256069);
}

double NNfunction_ss_dRdR::synapse0x32d0ff0() {
   return (neuron0x32b4cb0()*-0.0587912);
}

double NNfunction_ss_dRdR::synapse0x32d1030() {
   return (neuron0x32b4ff0()*-0.00660411);
}

double NNfunction_ss_dRdR::synapse0x32d13b0() {
   return (neuron0x32b04c0()*0.0583604);
}

double NNfunction_ss_dRdR::synapse0x32d13f0() {
   return (neuron0x32b0770()*0.102107);
}

double NNfunction_ss_dRdR::synapse0x32d1430() {
   return (neuron0x32b0ab0()*-0.385416);
}

double NNfunction_ss_dRdR::synapse0x32d1470() {
   return (neuron0x32b0df0()*1.07145);
}

double NNfunction_ss_dRdR::synapse0x32d14b0() {
   return (neuron0x32b1130()*-0.187632);
}

double NNfunction_ss_dRdR::synapse0x32d14f0() {
   return (neuron0x32b1470()*0.377441);
}

double NNfunction_ss_dRdR::synapse0x32d1530() {
   return (neuron0x32b17b0()*-0.677199);
}

double NNfunction_ss_dRdR::synapse0x32d1570() {
   return (neuron0x32b1af0()*-0.18838);
}

double NNfunction_ss_dRdR::synapse0x32d15b0() {
   return (neuron0x32b1e30()*0.400572);
}

double NNfunction_ss_dRdR::synapse0x32d15f0() {
   return (neuron0x32b2170()*-0.0389177);
}

double NNfunction_ss_dRdR::synapse0x32d1630() {
   return (neuron0x32b24b0()*-0.0121663);
}

double NNfunction_ss_dRdR::synapse0x32d1670() {
   return (neuron0x32b27f0()*0.398087);
}

double NNfunction_ss_dRdR::synapse0x32d16b0() {
   return (neuron0x32b2b30()*1.00712);
}

double NNfunction_ss_dRdR::synapse0x32d16f0() {
   return (neuron0x32b2e70()*0.929048);
}

double NNfunction_ss_dRdR::synapse0x32d1730() {
   return (neuron0x32b31b0()*0.0561493);
}

double NNfunction_ss_dRdR::synapse0x32d1770() {
   return (neuron0x32b34f0()*0.520923);
}

double NNfunction_ss_dRdR::synapse0x32d1200() {
   return (neuron0x32b3830()*0.314157);
}

double NNfunction_ss_dRdR::synapse0x32d1240() {
   return (neuron0x32b3d90()*-1.09484);
}

double NNfunction_ss_dRdR::synapse0x32d18c0() {
   return (neuron0x32b3fb0()*1.10555);
}

double NNfunction_ss_dRdR::synapse0x32d1900() {
   return (neuron0x32b42f0()*0.339396);
}

double NNfunction_ss_dRdR::synapse0x32d1940() {
   return (neuron0x32b4630()*-0.621651);
}

double NNfunction_ss_dRdR::synapse0x32d1980() {
   return (neuron0x32b4970()*-0.229644);
}

double NNfunction_ss_dRdR::synapse0x32d19c0() {
   return (neuron0x32b4cb0()*0.68163);
}

double NNfunction_ss_dRdR::synapse0x32d1a00() {
   return (neuron0x32b4ff0()*-0.136098);
}

double NNfunction_ss_dRdR::synapse0x32ba4b0() {
   return (neuron0x32b04c0()*0.00668897);
}

double NNfunction_ss_dRdR::synapse0x32ba4f0() {
   return (neuron0x32b0770()*-0.000725505);
}

double NNfunction_ss_dRdR::synapse0x32ba530() {
   return (neuron0x32b0ab0()*0.0610748);
}

double NNfunction_ss_dRdR::synapse0x32ba570() {
   return (neuron0x32b0df0()*0.297172);
}

double NNfunction_ss_dRdR::synapse0x32ba5b0() {
   return (neuron0x32b1130()*-0.262597);
}

double NNfunction_ss_dRdR::synapse0x32ba5f0() {
   return (neuron0x32b1470()*-0.011442);
}

double NNfunction_ss_dRdR::synapse0x32ba630() {
   return (neuron0x32b17b0()*0.168263);
}

double NNfunction_ss_dRdR::synapse0x32ba670() {
   return (neuron0x32b1af0()*0.0303026);
}

double NNfunction_ss_dRdR::synapse0x32d2190() {
   return (neuron0x32b1e30()*0.0962556);
}

double NNfunction_ss_dRdR::synapse0x32d21d0() {
   return (neuron0x32b2170()*0.159467);
}

double NNfunction_ss_dRdR::synapse0x32d2210() {
   return (neuron0x32b24b0()*0.0372701);
}

double NNfunction_ss_dRdR::synapse0x32d2250() {
   return (neuron0x32b27f0()*-0.02798);
}

double NNfunction_ss_dRdR::synapse0x32d2290() {
   return (neuron0x32b2b30()*0.0537965);
}

double NNfunction_ss_dRdR::synapse0x32d22d0() {
   return (neuron0x32b2e70()*0.0931501);
}

double NNfunction_ss_dRdR::synapse0x32d2310() {
   return (neuron0x32b31b0()*0.979747);
}

double NNfunction_ss_dRdR::synapse0x32d2350() {
   return (neuron0x32b34f0()*0.448228);
}

double NNfunction_ss_dRdR::synapse0x32d1bd0() {
   return (neuron0x32b3830()*0.19057);
}

double NNfunction_ss_dRdR::synapse0x32d1c10() {
   return (neuron0x32b3d90()*-0.444575);
}

double NNfunction_ss_dRdR::synapse0x32d24a0() {
   return (neuron0x32b3fb0()*0.0974186);
}

double NNfunction_ss_dRdR::synapse0x32d24e0() {
   return (neuron0x32b42f0()*0.06481);
}

double NNfunction_ss_dRdR::synapse0x32d2520() {
   return (neuron0x32b4630()*0.144012);
}

double NNfunction_ss_dRdR::synapse0x32d2560() {
   return (neuron0x32b4970()*0.0319951);
}

double NNfunction_ss_dRdR::synapse0x32d25a0() {
   return (neuron0x32b4cb0()*0.0183147);
}

double NNfunction_ss_dRdR::synapse0x32d25e0() {
   return (neuron0x32b4ff0()*0.142549);
}

double NNfunction_ss_dRdR::synapse0x32d2960() {
   return (neuron0x32b04c0()*-0.0358693);
}

double NNfunction_ss_dRdR::synapse0x32d29a0() {
   return (neuron0x32b0770()*-0.0667075);
}

double NNfunction_ss_dRdR::synapse0x32d29e0() {
   return (neuron0x32b0ab0()*-0.0158476);
}

double NNfunction_ss_dRdR::synapse0x32d2a20() {
   return (neuron0x32b0df0()*-3.84716);
}

double NNfunction_ss_dRdR::synapse0x32d2a60() {
   return (neuron0x32b1130()*-0.026585);
}

double NNfunction_ss_dRdR::synapse0x32d2aa0() {
   return (neuron0x32b1470()*-0.0450126);
}

double NNfunction_ss_dRdR::synapse0x32d2ae0() {
   return (neuron0x32b17b0()*0.0280967);
}

double NNfunction_ss_dRdR::synapse0x32d2b20() {
   return (neuron0x32b1af0()*-0.0260433);
}

double NNfunction_ss_dRdR::synapse0x32d2b60() {
   return (neuron0x32b1e30()*-0.0349455);
}

double NNfunction_ss_dRdR::synapse0x32d2ba0() {
   return (neuron0x32b2170()*-0.00154095);
}

double NNfunction_ss_dRdR::synapse0x32d2be0() {
   return (neuron0x32b24b0()*-0.0326922);
}

double NNfunction_ss_dRdR::synapse0x32d2c20() {
   return (neuron0x32b27f0()*-0.0584459);
}

double NNfunction_ss_dRdR::synapse0x32d2c60() {
   return (neuron0x32b2b30()*-0.000777617);
}

double NNfunction_ss_dRdR::synapse0x32d2ca0() {
   return (neuron0x32b2e70()*0.0541853);
}

double NNfunction_ss_dRdR::synapse0x32d2ce0() {
   return (neuron0x32b31b0()*-0.0375987);
}

double NNfunction_ss_dRdR::synapse0x32d2d20() {
   return (neuron0x32b34f0()*0.0174077);
}

double NNfunction_ss_dRdR::synapse0x32d27b0() {
   return (neuron0x32b3830()*0.0145527);
}

double NNfunction_ss_dRdR::synapse0x32d27f0() {
   return (neuron0x32b3d90()*2.42635);
}

double NNfunction_ss_dRdR::synapse0x32d2e70() {
   return (neuron0x32b3fb0()*-0.0456938);
}

double NNfunction_ss_dRdR::synapse0x32d2eb0() {
   return (neuron0x32b42f0()*0.0175255);
}

double NNfunction_ss_dRdR::synapse0x32d2ef0() {
   return (neuron0x32b4630()*-0.0165445);
}

double NNfunction_ss_dRdR::synapse0x32d2f30() {
   return (neuron0x32b4970()*-0.0154409);
}

double NNfunction_ss_dRdR::synapse0x32d2f70() {
   return (neuron0x32b4cb0()*-0.0312919);
}

double NNfunction_ss_dRdR::synapse0x32d2fb0() {
   return (neuron0x32b4ff0()*-0.00491869);
}

double NNfunction_ss_dRdR::synapse0x32d3330() {
   return (neuron0x32b04c0()*0.282759);
}

double NNfunction_ss_dRdR::synapse0x32d3370() {
   return (neuron0x32b0770()*-0.019223);
}

double NNfunction_ss_dRdR::synapse0x32d33b0() {
   return (neuron0x32b0ab0()*-0.131159);
}

double NNfunction_ss_dRdR::synapse0x32d33f0() {
   return (neuron0x32b0df0()*0.0955384);
}

double NNfunction_ss_dRdR::synapse0x32d3430() {
   return (neuron0x32b1130()*0.00331578);
}

double NNfunction_ss_dRdR::synapse0x32d3470() {
   return (neuron0x32b1470()*-0.0151787);
}

double NNfunction_ss_dRdR::synapse0x32d34b0() {
   return (neuron0x32b17b0()*-0.0877615);
}

double NNfunction_ss_dRdR::synapse0x32d34f0() {
   return (neuron0x32b1af0()*0.0612018);
}

double NNfunction_ss_dRdR::synapse0x32d3530() {
   return (neuron0x32b1e30()*-0.0952759);
}

double NNfunction_ss_dRdR::synapse0x32d3570() {
   return (neuron0x32b2170()*-0.535573);
}

double NNfunction_ss_dRdR::synapse0x32d35b0() {
   return (neuron0x32b24b0()*0.421491);
}

double NNfunction_ss_dRdR::synapse0x32d35f0() {
   return (neuron0x32b27f0()*-0.0697268);
}

double NNfunction_ss_dRdR::synapse0x32d3630() {
   return (neuron0x32b2b30()*0.0618871);
}

double NNfunction_ss_dRdR::synapse0x32d3670() {
   return (neuron0x32b2e70()*0.224328);
}

double NNfunction_ss_dRdR::synapse0x32d36b0() {
   return (neuron0x32b31b0()*0.101612);
}

double NNfunction_ss_dRdR::synapse0x32d36f0() {
   return (neuron0x32b34f0()*-0.0293528);
}

double NNfunction_ss_dRdR::synapse0x32d3180() {
   return (neuron0x32b3830()*0.269926);
}

double NNfunction_ss_dRdR::synapse0x32d31c0() {
   return (neuron0x32b3d90()*1.64486);
}

double NNfunction_ss_dRdR::synapse0x32c3cf0() {
   return (neuron0x32b3fb0()*0.329932);
}

double NNfunction_ss_dRdR::synapse0x32c3d30() {
   return (neuron0x32b42f0()*0.374636);
}

double NNfunction_ss_dRdR::synapse0x32c3d70() {
   return (neuron0x32b4630()*0.0169512);
}

double NNfunction_ss_dRdR::synapse0x32c3db0() {
   return (neuron0x32b4970()*-0.202083);
}

double NNfunction_ss_dRdR::synapse0x32c3df0() {
   return (neuron0x32b4cb0()*0.0962194);
}

double NNfunction_ss_dRdR::synapse0x32c3e30() {
   return (neuron0x32b4ff0()*-0.0325479);
}

double NNfunction_ss_dRdR::synapse0x32c41b0() {
   return (neuron0x32b04c0()*0.119468);
}

double NNfunction_ss_dRdR::synapse0x32c41f0() {
   return (neuron0x32b0770()*-0.0162283);
}

double NNfunction_ss_dRdR::synapse0x32c4230() {
   return (neuron0x32b0ab0()*0.0107838);
}

double NNfunction_ss_dRdR::synapse0x32c4270() {
   return (neuron0x32b0df0()*0.0113481);
}

double NNfunction_ss_dRdR::synapse0x32c42b0() {
   return (neuron0x32b1130()*0.00491161);
}

double NNfunction_ss_dRdR::synapse0x32c42f0() {
   return (neuron0x32b1470()*-0.0216838);
}

double NNfunction_ss_dRdR::synapse0x32c4330() {
   return (neuron0x32b17b0()*-0.00667129);
}

double NNfunction_ss_dRdR::synapse0x32c4370() {
   return (neuron0x32b1af0()*-0.0174155);
}

double NNfunction_ss_dRdR::synapse0x32c43b0() {
   return (neuron0x32b1e30()*0.0219045);
}

double NNfunction_ss_dRdR::synapse0x32c43f0() {
   return (neuron0x32b2170()*0.0252014);
}

double NNfunction_ss_dRdR::synapse0x32c4430() {
   return (neuron0x32b24b0()*-0.0808477);
}

double NNfunction_ss_dRdR::synapse0x32c4470() {
   return (neuron0x32b27f0()*-0.0990656);
}

double NNfunction_ss_dRdR::synapse0x32c44b0() {
   return (neuron0x32b2b30()*-0.0271917);
}

double NNfunction_ss_dRdR::synapse0x32c44f0() {
   return (neuron0x32b2e70()*0.0385304);
}

double NNfunction_ss_dRdR::synapse0x32c4530() {
   return (neuron0x32b31b0()*-0.0101351);
}

double NNfunction_ss_dRdR::synapse0x32c4570() {
   return (neuron0x32b34f0()*-0.0288389);
}

double NNfunction_ss_dRdR::synapse0x32c4000() {
   return (neuron0x32b3830()*-0.0231503);
}

double NNfunction_ss_dRdR::synapse0x32c4040() {
   return (neuron0x32b3d90()*0.991252);
}

double NNfunction_ss_dRdR::synapse0x32c46c0() {
   return (neuron0x32b3fb0()*0.0429311);
}

double NNfunction_ss_dRdR::synapse0x32c4700() {
   return (neuron0x32b42f0()*-0.0786108);
}

double NNfunction_ss_dRdR::synapse0x32c4740() {
   return (neuron0x32b4630()*0.0299795);
}

double NNfunction_ss_dRdR::synapse0x32c4780() {
   return (neuron0x32b4970()*0.0137357);
}

double NNfunction_ss_dRdR::synapse0x32c47c0() {
   return (neuron0x32b4cb0()*-0.0118106);
}

double NNfunction_ss_dRdR::synapse0x32c4800() {
   return (neuron0x32b4ff0()*0.104126);
}

double NNfunction_ss_dRdR::synapse0x32c4b80() {
   return (neuron0x32b04c0()*-0.0687283);
}

double NNfunction_ss_dRdR::synapse0x32c4bc0() {
   return (neuron0x32b0770()*-0.0193965);
}

double NNfunction_ss_dRdR::synapse0x32c4c00() {
   return (neuron0x32b0ab0()*-0.359373);
}

double NNfunction_ss_dRdR::synapse0x32c4c40() {
   return (neuron0x32b0df0()*0.235209);
}

double NNfunction_ss_dRdR::synapse0x32c4c80() {
   return (neuron0x32b1130()*-0.175751);
}

double NNfunction_ss_dRdR::synapse0x32c4cc0() {
   return (neuron0x32b1470()*-0.0624058);
}

double NNfunction_ss_dRdR::synapse0x32c4d00() {
   return (neuron0x32b17b0()*-0.0864107);
}

double NNfunction_ss_dRdR::synapse0x32c4d40() {
   return (neuron0x32b1af0()*-0.126994);
}

double NNfunction_ss_dRdR::synapse0x32c4d80() {
   return (neuron0x32b1e30()*0.0789307);
}

double NNfunction_ss_dRdR::synapse0x32c4dc0() {
   return (neuron0x32b2170()*-0.101831);
}

double NNfunction_ss_dRdR::synapse0x32c4e00() {
   return (neuron0x32b24b0()*-0.290927);
}

double NNfunction_ss_dRdR::synapse0x32c4e40() {
   return (neuron0x32b27f0()*0.167785);
}

double NNfunction_ss_dRdR::synapse0x32c4e80() {
   return (neuron0x32b2b30()*-0.504291);
}

double NNfunction_ss_dRdR::synapse0x32c4ec0() {
   return (neuron0x32b2e70()*-0.422508);
}

double NNfunction_ss_dRdR::synapse0x32c4f00() {
   return (neuron0x32b31b0()*0.0253611);
}

double NNfunction_ss_dRdR::synapse0x32c4f40() {
   return (neuron0x32b34f0()*-0.0111267);
}

double NNfunction_ss_dRdR::synapse0x32c49d0() {
   return (neuron0x32b3830()*-0.00277916);
}

double NNfunction_ss_dRdR::synapse0x32c4a10() {
   return (neuron0x32b3d90()*0.760438);
}

double NNfunction_ss_dRdR::synapse0x32c5090() {
   return (neuron0x32b3fb0()*0.0847871);
}

double NNfunction_ss_dRdR::synapse0x32c50d0() {
   return (neuron0x32b42f0()*0.102754);
}

double NNfunction_ss_dRdR::synapse0x32c5110() {
   return (neuron0x32b4630()*-0.141306);
}

double NNfunction_ss_dRdR::synapse0x32c5150() {
   return (neuron0x32b4970()*0.0216959);
}

double NNfunction_ss_dRdR::synapse0x32c5190() {
   return (neuron0x32b4cb0()*-0.00937667);
}

double NNfunction_ss_dRdR::synapse0x32c51d0() {
   return (neuron0x32b4ff0()*0.101741);
}

double NNfunction_ss_dRdR::synapse0x32c5550() {
   return (neuron0x32b04c0()*-0.146619);
}

double NNfunction_ss_dRdR::synapse0x32c5590() {
   return (neuron0x32b0770()*-0.409764);
}

double NNfunction_ss_dRdR::synapse0x32c55d0() {
   return (neuron0x32b0ab0()*-0.104581);
}

double NNfunction_ss_dRdR::synapse0x32c5610() {
   return (neuron0x32b0df0()*0.831342);
}

double NNfunction_ss_dRdR::synapse0x32c5650() {
   return (neuron0x32b1130()*0.33469);
}

double NNfunction_ss_dRdR::synapse0x32c5690() {
   return (neuron0x32b1470()*0.100353);
}

double NNfunction_ss_dRdR::synapse0x32c56d0() {
   return (neuron0x32b17b0()*-0.463691);
}

double NNfunction_ss_dRdR::synapse0x32c5710() {
   return (neuron0x32b1af0()*-0.1332);
}

double NNfunction_ss_dRdR::synapse0x32c5750() {
   return (neuron0x32b1e30()*0.0481306);
}

double NNfunction_ss_dRdR::synapse0x32c5790() {
   return (neuron0x32b2170()*-0.176658);
}

double NNfunction_ss_dRdR::synapse0x32c57d0() {
   return (neuron0x32b24b0()*-0.778915);
}

double NNfunction_ss_dRdR::synapse0x32c5810() {
   return (neuron0x32b27f0()*-0.779437);
}

double NNfunction_ss_dRdR::synapse0x32c5850() {
   return (neuron0x32b2b30()*0.0248122);
}

double NNfunction_ss_dRdR::synapse0x32c5890() {
   return (neuron0x32b2e70()*-0.199177);
}

double NNfunction_ss_dRdR::synapse0x32c58d0() {
   return (neuron0x32b31b0()*0.326882);
}

double NNfunction_ss_dRdR::synapse0x32c5910() {
   return (neuron0x32b34f0()*0.682626);
}

double NNfunction_ss_dRdR::synapse0x32c53a0() {
   return (neuron0x32b3830()*0.291436);
}

double NNfunction_ss_dRdR::synapse0x32c53e0() {
   return (neuron0x32b3d90()*-0.232958);
}

double NNfunction_ss_dRdR::synapse0x32c5a60() {
   return (neuron0x32b3fb0()*-0.457706);
}

double NNfunction_ss_dRdR::synapse0x32c5aa0() {
   return (neuron0x32b42f0()*0.750016);
}

double NNfunction_ss_dRdR::synapse0x32c5ae0() {
   return (neuron0x32b4630()*-0.70936);
}

double NNfunction_ss_dRdR::synapse0x32c5b20() {
   return (neuron0x32b4970()*-0.0662874);
}

double NNfunction_ss_dRdR::synapse0x32c5b60() {
   return (neuron0x32b4cb0()*0.377548);
}

double NNfunction_ss_dRdR::synapse0x32c5ba0() {
   return (neuron0x32b4ff0()*-0.1578);
}

double NNfunction_ss_dRdR::synapse0x32d7a70() {
   return (neuron0x32b04c0()*0.210794);
}

double NNfunction_ss_dRdR::synapse0x32d7ab0() {
   return (neuron0x32b0770()*-0.402882);
}

double NNfunction_ss_dRdR::synapse0x32d7af0() {
   return (neuron0x32b0ab0()*0.0669938);
}

double NNfunction_ss_dRdR::synapse0x32d7b30() {
   return (neuron0x32b0df0()*0.930352);
}

double NNfunction_ss_dRdR::synapse0x32d7b70() {
   return (neuron0x32b1130()*-0.102509);
}

double NNfunction_ss_dRdR::synapse0x32d7bb0() {
   return (neuron0x32b1470()*-0.34544);
}

double NNfunction_ss_dRdR::synapse0x32d7bf0() {
   return (neuron0x32b17b0()*0.227394);
}

double NNfunction_ss_dRdR::synapse0x32d7c30() {
   return (neuron0x32b1af0()*0.638522);
}

double NNfunction_ss_dRdR::synapse0x32d7c70() {
   return (neuron0x32b1e30()*0.154277);
}

double NNfunction_ss_dRdR::synapse0x32d7cb0() {
   return (neuron0x32b2170()*0.237329);
}

double NNfunction_ss_dRdR::synapse0x32d7cf0() {
   return (neuron0x32b24b0()*-0.0264372);
}

double NNfunction_ss_dRdR::synapse0x32d7d30() {
   return (neuron0x32b27f0()*0.354785);
}

double NNfunction_ss_dRdR::synapse0x32d7d70() {
   return (neuron0x32b2b30()*0.245125);
}

double NNfunction_ss_dRdR::synapse0x32d7db0() {
   return (neuron0x32b2e70()*-0.0438533);
}

double NNfunction_ss_dRdR::synapse0x32d7df0() {
   return (neuron0x32b31b0()*-0.0187226);
}

double NNfunction_ss_dRdR::synapse0x32d7e30() {
   return (neuron0x32b34f0()*-0.240467);
}

double NNfunction_ss_dRdR::synapse0x32c5be0() {
   return (neuron0x32b3830()*-0.458835);
}

double NNfunction_ss_dRdR::synapse0x32c5c20() {
   return (neuron0x32b3d90()*-1.14823);
}

double NNfunction_ss_dRdR::synapse0x32d7f80() {
   return (neuron0x32b3fb0()*0.182911);
}

double NNfunction_ss_dRdR::synapse0x32d7fc0() {
   return (neuron0x32b42f0()*0.0452183);
}

double NNfunction_ss_dRdR::synapse0x32d8000() {
   return (neuron0x32b4630()*0.0754189);
}

double NNfunction_ss_dRdR::synapse0x32d8040() {
   return (neuron0x32b4970()*0.00626304);
}

double NNfunction_ss_dRdR::synapse0x32d8080() {
   return (neuron0x32b4cb0()*0.14454);
}

double NNfunction_ss_dRdR::synapse0x32d80c0() {
   return (neuron0x32b4ff0()*0.0551816);
}

double NNfunction_ss_dRdR::synapse0x32d8440() {
   return (neuron0x32b04c0()*-0.128189);
}

double NNfunction_ss_dRdR::synapse0x32d8480() {
   return (neuron0x32b0770()*-0.0345444);
}

double NNfunction_ss_dRdR::synapse0x32d84c0() {
   return (neuron0x32b0ab0()*-0.120224);
}

double NNfunction_ss_dRdR::synapse0x32d8500() {
   return (neuron0x32b0df0()*1.50872);
}

double NNfunction_ss_dRdR::synapse0x32d8540() {
   return (neuron0x32b1130()*0.137045);
}

double NNfunction_ss_dRdR::synapse0x32d8580() {
   return (neuron0x32b1470()*0.143593);
}

double NNfunction_ss_dRdR::synapse0x32d85c0() {
   return (neuron0x32b17b0()*0.250965);
}

double NNfunction_ss_dRdR::synapse0x32d8600() {
   return (neuron0x32b1af0()*0.00858564);
}

double NNfunction_ss_dRdR::synapse0x32d8640() {
   return (neuron0x32b1e30()*-0.0364927);
}

double NNfunction_ss_dRdR::synapse0x32d8680() {
   return (neuron0x32b2170()*-0.115627);
}

double NNfunction_ss_dRdR::synapse0x32d86c0() {
   return (neuron0x32b24b0()*-0.0295629);
}

double NNfunction_ss_dRdR::synapse0x32d8700() {
   return (neuron0x32b27f0()*-0.180627);
}

double NNfunction_ss_dRdR::synapse0x32d8740() {
   return (neuron0x32b2b30()*-0.0264132);
}

double NNfunction_ss_dRdR::synapse0x32d8780() {
   return (neuron0x32b2e70()*-0.0986875);
}

double NNfunction_ss_dRdR::synapse0x32d87c0() {
   return (neuron0x32b31b0()*-0.169555);
}

double NNfunction_ss_dRdR::synapse0x32d8800() {
   return (neuron0x32b34f0()*-0.0683643);
}

double NNfunction_ss_dRdR::synapse0x32d8290() {
   return (neuron0x32b3830()*-0.0925935);
}

double NNfunction_ss_dRdR::synapse0x32d82d0() {
   return (neuron0x32b3d90()*-0.955064);
}

double NNfunction_ss_dRdR::synapse0x32d8950() {
   return (neuron0x32b3fb0()*0.0127266);
}

double NNfunction_ss_dRdR::synapse0x32d8990() {
   return (neuron0x32b42f0()*-0.0452986);
}

double NNfunction_ss_dRdR::synapse0x32d89d0() {
   return (neuron0x32b4630()*-0.0551017);
}

double NNfunction_ss_dRdR::synapse0x32d8a10() {
   return (neuron0x32b4970()*-0.0723532);
}

double NNfunction_ss_dRdR::synapse0x32d8a50() {
   return (neuron0x32b4cb0()*0.011198);
}

double NNfunction_ss_dRdR::synapse0x32d8a90() {
   return (neuron0x32b4ff0()*0.0135574);
}

double NNfunction_ss_dRdR::synapse0x32d8e10() {
   return (neuron0x32b04c0()*0.209275);
}

double NNfunction_ss_dRdR::synapse0x32d8e50() {
   return (neuron0x32b0770()*0.86606);
}

double NNfunction_ss_dRdR::synapse0x32d8e90() {
   return (neuron0x32b0ab0()*0.20649);
}

double NNfunction_ss_dRdR::synapse0x32d8ed0() {
   return (neuron0x32b0df0()*1.48878);
}

double NNfunction_ss_dRdR::synapse0x32d8f10() {
   return (neuron0x32b1130()*0.478383);
}

double NNfunction_ss_dRdR::synapse0x32d8f50() {
   return (neuron0x32b1470()*-0.31562);
}

double NNfunction_ss_dRdR::synapse0x32d8f90() {
   return (neuron0x32b17b0()*-0.0304225);
}

double NNfunction_ss_dRdR::synapse0x32d8fd0() {
   return (neuron0x32b1af0()*0.740348);
}

double NNfunction_ss_dRdR::synapse0x32d9010() {
   return (neuron0x32b1e30()*-0.30891);
}

double NNfunction_ss_dRdR::synapse0x32d9050() {
   return (neuron0x32b2170()*-0.162833);
}

double NNfunction_ss_dRdR::synapse0x32d9090() {
   return (neuron0x32b24b0()*-0.744768);
}

double NNfunction_ss_dRdR::synapse0x32d90d0() {
   return (neuron0x32b27f0()*0.174438);
}

double NNfunction_ss_dRdR::synapse0x32d9110() {
   return (neuron0x32b2b30()*-0.0602678);
}

double NNfunction_ss_dRdR::synapse0x32d9150() {
   return (neuron0x32b2e70()*0.0667849);
}

double NNfunction_ss_dRdR::synapse0x32d9190() {
   return (neuron0x32b31b0()*0.190418);
}

double NNfunction_ss_dRdR::synapse0x32d91d0() {
   return (neuron0x32b34f0()*0.856534);
}

double NNfunction_ss_dRdR::synapse0x32d8c60() {
   return (neuron0x32b3830()*-0.32569);
}

double NNfunction_ss_dRdR::synapse0x32d8ca0() {
   return (neuron0x32b3d90()*0.871937);
}

double NNfunction_ss_dRdR::synapse0x32d9320() {
   return (neuron0x32b3fb0()*-0.00917517);
}

double NNfunction_ss_dRdR::synapse0x32d9360() {
   return (neuron0x32b42f0()*0.0858915);
}

double NNfunction_ss_dRdR::synapse0x32d93a0() {
   return (neuron0x32b4630()*0.0447168);
}

double NNfunction_ss_dRdR::synapse0x32d93e0() {
   return (neuron0x32b4970()*-0.348735);
}

double NNfunction_ss_dRdR::synapse0x32d9420() {
   return (neuron0x32b4cb0()*0.0716842);
}

double NNfunction_ss_dRdR::synapse0x32d9460() {
   return (neuron0x32b4ff0()*0.0334842);
}

double NNfunction_ss_dRdR::synapse0x32d97e0() {
   return (neuron0x32b04c0()*0.0586694);
}

double NNfunction_ss_dRdR::synapse0x32d9820() {
   return (neuron0x32b0770()*0.000174607);
}

double NNfunction_ss_dRdR::synapse0x32d9860() {
   return (neuron0x32b0ab0()*-0.00519385);
}

double NNfunction_ss_dRdR::synapse0x32d98a0() {
   return (neuron0x32b0df0()*0.0125927);
}

double NNfunction_ss_dRdR::synapse0x32d98e0() {
   return (neuron0x32b1130()*-0.0164807);
}

double NNfunction_ss_dRdR::synapse0x32d9920() {
   return (neuron0x32b1470()*-0.0120061);
}

double NNfunction_ss_dRdR::synapse0x32d9960() {
   return (neuron0x32b17b0()*-0.0227151);
}

double NNfunction_ss_dRdR::synapse0x32d99a0() {
   return (neuron0x32b1af0()*-0.00272605);
}

double NNfunction_ss_dRdR::synapse0x32d99e0() {
   return (neuron0x32b1e30()*-0.0212578);
}

double NNfunction_ss_dRdR::synapse0x32d9a20() {
   return (neuron0x32b2170()*-0.0282686);
}

double NNfunction_ss_dRdR::synapse0x32d9a60() {
   return (neuron0x32b24b0()*-0.0493295);
}

double NNfunction_ss_dRdR::synapse0x32d9aa0() {
   return (neuron0x32b27f0()*-0.0221276);
}

double NNfunction_ss_dRdR::synapse0x32d9ae0() {
   return (neuron0x32b2b30()*-0.00616538);
}

double NNfunction_ss_dRdR::synapse0x32d9b20() {
   return (neuron0x32b2e70()*0.0212849);
}

double NNfunction_ss_dRdR::synapse0x32d9b60() {
   return (neuron0x32b31b0()*0.0154282);
}

double NNfunction_ss_dRdR::synapse0x32d9ba0() {
   return (neuron0x32b34f0()*-0.00158942);
}

double NNfunction_ss_dRdR::synapse0x32d9630() {
   return (neuron0x32b3830()*-0.0182751);
}

double NNfunction_ss_dRdR::synapse0x32d9670() {
   return (neuron0x32b3d90()*-0.841923);
}

double NNfunction_ss_dRdR::synapse0x32d9cf0() {
   return (neuron0x32b3fb0()*0.0327451);
}

double NNfunction_ss_dRdR::synapse0x32d9d30() {
   return (neuron0x32b42f0()*-0.0653876);
}

double NNfunction_ss_dRdR::synapse0x32d9d70() {
   return (neuron0x32b4630()*0.0113991);
}

double NNfunction_ss_dRdR::synapse0x32d9db0() {
   return (neuron0x32b4970()*0.00348407);
}

double NNfunction_ss_dRdR::synapse0x32d9df0() {
   return (neuron0x32b4cb0()*-0.0145435);
}

double NNfunction_ss_dRdR::synapse0x32d9e30() {
   return (neuron0x32b4ff0()*0.049624);
}

double NNfunction_ss_dRdR::synapse0x32b63c0() {
   return (neuron0x32b5460()*-4.48746);
}

double NNfunction_ss_dRdR::synapse0x32b6400() {
   return (neuron0x32b5db0()*1.28161);
}

double NNfunction_ss_dRdR::synapse0x32b78e0() {
   return (neuron0x32b6890()*-1.12581);
}

double NNfunction_ss_dRdR::synapse0x32b7920() {
   return (neuron0x3079be0()*1.53479);
}

double NNfunction_ss_dRdR::synapse0x32b82b0() {
   return (neuron0x32b7630()*-1.20073);
}

double NNfunction_ss_dRdR::synapse0x32b82f0() {
   return (neuron0x32b8000()*1.15489);
}

double NNfunction_ss_dRdR::synapse0x32b9080() {
   return (neuron0x32b8dd0()*-0.635804);
}

double NNfunction_ss_dRdR::synapse0x32b90c0() {
   return (neuron0x32b97a0()*-0.621491);
}

double NNfunction_ss_dRdR::synapse0x32b9a50() {
   return (neuron0x32ba170()*-0.080021);
}

double NNfunction_ss_dRdR::synapse0x32b9a90() {
   return (neuron0x32bac50()*8.0974);
}

double NNfunction_ss_dRdR::synapse0x32ba420() {
   return (neuron0x32bb620()*1.38295);
}

double NNfunction_ss_dRdR::synapse0x32ba460() {
   return (neuron0x32b8700()*0.848301);
}

double NNfunction_ss_dRdR::synapse0x32baf00() {
   return (neuron0x32bd1d0()*-0.146903);
}

double NNfunction_ss_dRdR::synapse0x32baf40() {
   return (neuron0x32bdba0()*1.09247);
}

double NNfunction_ss_dRdR::synapse0x32bb8d0() {
   return (neuron0x32be570()*-1.19535);
}

double NNfunction_ss_dRdR::synapse0x32bb910() {
   return (neuron0x32bef40()*-1.86483);
}

double NNfunction_ss_dRdR::synapse0x32b89b0() {
   return (neuron0x32c0d50()*0.855795);
}

double NNfunction_ss_dRdR::synapse0x32b89f0() {
   return (neuron0x32c1030()*0.315519);
}

double NNfunction_ss_dRdR::synapse0x32bd480() {
   return (neuron0x32c1a00()*-1.22159);
}

double NNfunction_ss_dRdR::synapse0x32bd4c0() {
   return (neuron0x32c23d0()*3.37521);
}

double NNfunction_ss_dRdR::synapse0x32bde50() {
   return (neuron0x32c2da0()*0.530339);
}

double NNfunction_ss_dRdR::synapse0x32bde90() {
   return (neuron0x32c3770()*-0.7696);
}

double NNfunction_ss_dRdR::synapse0x32be820() {
   return (neuron0x32bc2c0()*0.537504);
}

double NNfunction_ss_dRdR::synapse0x32be860() {
   return (neuron0x32bcc90()*-0.669265);
}

double NNfunction_ss_dRdR::synapse0x32bf1f0() {
   return (neuron0x32c6500()*2.2356);
}

double NNfunction_ss_dRdR::synapse0x32bf230() {
   return (neuron0x32c6ed0()*-0.142855);
}

double NNfunction_ss_dRdR::synapse0x32b33d0() {
   return (neuron0x32c78a0()*-0.490989);
}

double NNfunction_ss_dRdR::synapse0x32b3410() {
   return (neuron0x32c8270()*1.33458);
}

double NNfunction_ss_dRdR::synapse0x32c12e0() {
   return (neuron0x32c8c40()*0.594974);
}

double NNfunction_ss_dRdR::synapse0x32c1320() {
   return (neuron0x32c9610()*0.0971312);
}

double NNfunction_ss_dRdR::synapse0x32c1cb0() {
   return (neuron0x32c9fe0()*-1.16949);
}

double NNfunction_ss_dRdR::synapse0x32c1cf0() {
   return (neuron0x32ca9b0()*0.472059);
}

double NNfunction_ss_dRdR::synapse0x32c2680() {
   return (neuron0x32c0a40()*-0.804017);
}

double NNfunction_ss_dRdR::synapse0x32c26c0() {
   return (neuron0x32cd590()*-0.384813);
}

double NNfunction_ss_dRdR::synapse0x32c3050() {
   return (neuron0x32cdf60()*-1.40596);
}

double NNfunction_ss_dRdR::synapse0x32c3090() {
   return (neuron0x32ce930()*1.35192);
}

double NNfunction_ss_dRdR::synapse0x32c3a20() {
   return (neuron0x32cf300()*0.797349);
}

double NNfunction_ss_dRdR::synapse0x32c3a60() {
   return (neuron0x32cfcd0()*-1.82344);
}

double NNfunction_ss_dRdR::synapse0x32bc570() {
   return (neuron0x32d06a0()*-1.90081);
}

double NNfunction_ss_dRdR::synapse0x32bc5b0() {
   return (neuron0x32d1070()*0.209082);
}

double NNfunction_ss_dRdR::synapse0x32c5e20() {
   return (neuron0x32d1a40()*0.982003);
}

double NNfunction_ss_dRdR::synapse0x32c5e60() {
   return (neuron0x32d2620()*3.43805);
}

double NNfunction_ss_dRdR::synapse0x32c67b0() {
   return (neuron0x32d2ff0()*0.910589);
}

double NNfunction_ss_dRdR::synapse0x32c67f0() {
   return (neuron0x32c3e70()*-1.12939);
}

double NNfunction_ss_dRdR::synapse0x32c7180() {
   return (neuron0x32c4840()*0.144199);
}

double NNfunction_ss_dRdR::synapse0x32c71c0() {
   return (neuron0x32c5210()*-0.27303);
}

double NNfunction_ss_dRdR::synapse0x32c7b50() {
   return (neuron0x32d7850()*0.608548);
}

double NNfunction_ss_dRdR::synapse0x32c7b90() {
   return (neuron0x32d8100()*-0.301663);
}

double NNfunction_ss_dRdR::synapse0x32c8520() {
   return (neuron0x32d8ad0()*-0.573801);
}

double NNfunction_ss_dRdR::synapse0x32c8560() {
   return (neuron0x32d94a0()*0.20421);
}

double NNfunction_ss_dRdR::synapse0x32cac60() {
   return (neuron0x32b5460()*-0.528589);
}

double NNfunction_ss_dRdR::synapse0x32caca0() {
   return (neuron0x32b5db0()*0.860565);
}

double NNfunction_ss_dRdR::synapse0x32c0220() {
   return (neuron0x32b6890()*0.064303);
}

double NNfunction_ss_dRdR::synapse0x32c0260() {
   return (neuron0x3079be0()*0.261201);
}

double NNfunction_ss_dRdR::synapse0x32cd840() {
   return (neuron0x32b7630()*0.232057);
}

double NNfunction_ss_dRdR::synapse0x32cd880() {
   return (neuron0x32b8000()*0.617825);
}

double NNfunction_ss_dRdR::synapse0x32ce210() {
   return (neuron0x32b8dd0()*0.174783);
}

double NNfunction_ss_dRdR::synapse0x32ce250() {
   return (neuron0x32b97a0()*0.124185);
}

double NNfunction_ss_dRdR::synapse0x32cebe0() {
   return (neuron0x32ba170()*-1.38381);
}

double NNfunction_ss_dRdR::synapse0x32cec20() {
   return (neuron0x32bac50()*1.38649);
}

double NNfunction_ss_dRdR::synapse0x32cf5b0() {
   return (neuron0x32bb620()*0.789376);
}

double NNfunction_ss_dRdR::synapse0x32cf5f0() {
   return (neuron0x32b8700()*0.00303867);
}

double NNfunction_ss_dRdR::synapse0x32cff80() {
   return (neuron0x32bd1d0()*0.105912);
}

double NNfunction_ss_dRdR::synapse0x32cffc0() {
   return (neuron0x32bdba0()*0.536767);
}

double NNfunction_ss_dRdR::synapse0x32d0950() {
   return (neuron0x32be570()*-0.243737);
}

double NNfunction_ss_dRdR::synapse0x32d0990() {
   return (neuron0x32bef40()*-2.29662);
}

double NNfunction_ss_dRdR::synapse0x32d1320() {
   return (neuron0x32c0d50()*-0.126825);
}

double NNfunction_ss_dRdR::synapse0x32d1360() {
   return (neuron0x32c1030()*-0.0256191);
}

double NNfunction_ss_dRdR::synapse0x32d1cf0() {
   return (neuron0x32c1a00()*0.731412);
}

double NNfunction_ss_dRdR::synapse0x32d1d30() {
   return (neuron0x32c23d0()*1.34924);
}

double NNfunction_ss_dRdR::synapse0x32d28d0() {
   return (neuron0x32c2da0()*-0.050297);
}

double NNfunction_ss_dRdR::synapse0x32d2910() {
   return (neuron0x32c3770()*0.147737);
}

double NNfunction_ss_dRdR::synapse0x32d32a0() {
   return (neuron0x32bc2c0()*-0.075049);
}

double NNfunction_ss_dRdR::synapse0x32d32e0() {
   return (neuron0x32bcc90()*-0.321193);
}

double NNfunction_ss_dRdR::synapse0x32c4120() {
   return (neuron0x32c6500()*0.486787);
}

double NNfunction_ss_dRdR::synapse0x32c4160() {
   return (neuron0x32c6ed0()*0.0192099);
}

double NNfunction_ss_dRdR::synapse0x32c4af0() {
   return (neuron0x32c78a0()*0.00390523);
}

double NNfunction_ss_dRdR::synapse0x32c4b30() {
   return (neuron0x32c8270()*-0.0718685);
}

double NNfunction_ss_dRdR::synapse0x32c54c0() {
   return (neuron0x32c8c40()*-1.42805);
}

double NNfunction_ss_dRdR::synapse0x32c5500() {
   return (neuron0x32c9610()*-0.0069468);
}

double NNfunction_ss_dRdR::synapse0x32d79e0() {
   return (neuron0x32c9fe0()*0.0538123);
}

double NNfunction_ss_dRdR::synapse0x32d7a20() {
   return (neuron0x32ca9b0()*0.287827);
}

double NNfunction_ss_dRdR::synapse0x32d83b0() {
   return (neuron0x32c0a40()*0.0625657);
}

double NNfunction_ss_dRdR::synapse0x32d83f0() {
   return (neuron0x32cd590()*0.0785221);
}

double NNfunction_ss_dRdR::synapse0x32d8d80() {
   return (neuron0x32cdf60()*-0.229925);
}

double NNfunction_ss_dRdR::synapse0x32d8dc0() {
   return (neuron0x32ce930()*-1.59082);
}

double NNfunction_ss_dRdR::synapse0x32d9750() {
   return (neuron0x32cf300()*1.83699);
}

double NNfunction_ss_dRdR::synapse0x32d9790() {
   return (neuron0x32cfcd0()*-1.32327);
}

double NNfunction_ss_dRdR::synapse0x32b5680() {
   return (neuron0x32d06a0()*-0.36829);
}

double NNfunction_ss_dRdR::synapse0x32b56c0() {
   return (neuron0x32d1070()*0.0612656);
}

double NNfunction_ss_dRdR::synapse0x32c8ef0() {
   return (neuron0x32d1a40()*0.138526);
}

double NNfunction_ss_dRdR::synapse0x32c8f30() {
   return (neuron0x32d2620()*0.532959);
}

double NNfunction_ss_dRdR::synapse0x32d9e70() {
   return (neuron0x32d2ff0()*0.264577);
}

double NNfunction_ss_dRdR::synapse0x32d9eb0() {
   return (neuron0x32c3e70()*1.05898);
}

double NNfunction_ss_dRdR::synapse0x32d9ef0() {
   return (neuron0x32c4840()*-0.379577);
}

double NNfunction_ss_dRdR::synapse0x32d9f30() {
   return (neuron0x32c5210()*0.0328498);
}

double NNfunction_ss_dRdR::synapse0x32e0de0() {
   return (neuron0x32d7850()*0.109819);
}

double NNfunction_ss_dRdR::synapse0x32e0e20() {
   return (neuron0x32d8100()*0.0120286);
}

double NNfunction_ss_dRdR::synapse0x32e0e60() {
   return (neuron0x32d8ad0()*0.0200729);
}

double NNfunction_ss_dRdR::synapse0x32e0ea0() {
   return (neuron0x32d94a0()*-0.275257);
}

double NNfunction_ss_dRdR::synapse0x32e1220() {
   return (neuron0x32b5460()*-0.0468199);
}

double NNfunction_ss_dRdR::synapse0x32e1260() {
   return (neuron0x32b5db0()*-0.159163);
}

double NNfunction_ss_dRdR::synapse0x32e12a0() {
   return (neuron0x32b6890()*-0.0116439);
}

double NNfunction_ss_dRdR::synapse0x32e12e0() {
   return (neuron0x3079be0()*0.120648);
}

double NNfunction_ss_dRdR::synapse0x32e1320() {
   return (neuron0x32b7630()*0.070165);
}

double NNfunction_ss_dRdR::synapse0x32e1360() {
   return (neuron0x32b8000()*0.100541);
}

double NNfunction_ss_dRdR::synapse0x32e13a0() {
   return (neuron0x32b8dd0()*-0.0386607);
}

double NNfunction_ss_dRdR::synapse0x32e13e0() {
   return (neuron0x32b97a0()*0.0675916);
}

double NNfunction_ss_dRdR::synapse0x32e1420() {
   return (neuron0x32ba170()*0.754049);
}

double NNfunction_ss_dRdR::synapse0x32e1460() {
   return (neuron0x32bac50()*0.58457);
}

double NNfunction_ss_dRdR::synapse0x32e14a0() {
   return (neuron0x32bb620()*0.219732);
}

double NNfunction_ss_dRdR::synapse0x32e14e0() {
   return (neuron0x32b8700()*-0.0135611);
}

double NNfunction_ss_dRdR::synapse0x32e1520() {
   return (neuron0x32bd1d0()*0.14639);
}

double NNfunction_ss_dRdR::synapse0x32e1560() {
   return (neuron0x32bdba0()*0.0610824);
}

double NNfunction_ss_dRdR::synapse0x32e15a0() {
   return (neuron0x32be570()*-0.13967);
}

double NNfunction_ss_dRdR::synapse0x32e15e0() {
   return (neuron0x32bef40()*0.486989);
}

double NNfunction_ss_dRdR::synapse0x32e1070() {
   return (neuron0x32c0d50()*-0.0420419);
}

double NNfunction_ss_dRdR::synapse0x32e10b0() {
   return (neuron0x32c1030()*-0.00877977);
}

double NNfunction_ss_dRdR::synapse0x32e1730() {
   return (neuron0x32c1a00()*0.033891);
}

double NNfunction_ss_dRdR::synapse0x32e1770() {
   return (neuron0x32c23d0()*-0.87412);
}

double NNfunction_ss_dRdR::synapse0x32e17b0() {
   return (neuron0x32c2da0()*-0.0232254);
}

double NNfunction_ss_dRdR::synapse0x32e17f0() {
   return (neuron0x32c3770()*0.0648834);
}

double NNfunction_ss_dRdR::synapse0x32e1830() {
   return (neuron0x32bc2c0()*-0.0401422);
}

double NNfunction_ss_dRdR::synapse0x32e1870() {
   return (neuron0x32bcc90()*0.410156);
}

double NNfunction_ss_dRdR::synapse0x32e18b0() {
   return (neuron0x32c6500()*-0.0407096);
}

double NNfunction_ss_dRdR::synapse0x32e18f0() {
   return (neuron0x32c6ed0()*-0.0304155);
}

double NNfunction_ss_dRdR::synapse0x32e1930() {
   return (neuron0x32c78a0()*-0.0246983);
}

double NNfunction_ss_dRdR::synapse0x32e1970() {
   return (neuron0x32c8270()*-0.0531361);
}

double NNfunction_ss_dRdR::synapse0x32e19b0() {
   return (neuron0x32c8c40()*-1.617);
}

double NNfunction_ss_dRdR::synapse0x32e19f0() {
   return (neuron0x32c9610()*0.0168439);
}

double NNfunction_ss_dRdR::synapse0x32e1a30() {
   return (neuron0x32c9fe0()*0.0544662);
}

double NNfunction_ss_dRdR::synapse0x32e1a70() {
   return (neuron0x32ca9b0()*0.0606417);
}

double NNfunction_ss_dRdR::synapse0x32e1620() {
   return (neuron0x32c0a40()*-0.0170713);
}

double NNfunction_ss_dRdR::synapse0x32e1660() {
   return (neuron0x32cd590()*0.0590136);
}

double NNfunction_ss_dRdR::synapse0x32e16a0() {
   return (neuron0x32cdf60()*-0.111564);
}

double NNfunction_ss_dRdR::synapse0x32e16e0() {
   return (neuron0x32ce930()*0.511943);
}

double NNfunction_ss_dRdR::synapse0x32e1cc0() {
   return (neuron0x32cf300()*0.788738);
}

double NNfunction_ss_dRdR::synapse0x32e1d00() {
   return (neuron0x32cfcd0()*-0.273254);
}

double NNfunction_ss_dRdR::synapse0x32e1d40() {
   return (neuron0x32d06a0()*-0.080165);
}

double NNfunction_ss_dRdR::synapse0x32e1d80() {
   return (neuron0x32d1070()*0.0226881);
}

double NNfunction_ss_dRdR::synapse0x32e1dc0() {
   return (neuron0x32d1a40()*0.0260912);
}

double NNfunction_ss_dRdR::synapse0x32e1e00() {
   return (neuron0x32d2620()*0.270542);
}

double NNfunction_ss_dRdR::synapse0x32e1e40() {
   return (neuron0x32d2ff0()*0.108061);
}

double NNfunction_ss_dRdR::synapse0x32e1e80() {
   return (neuron0x32c3e70()*-0.955313);
}

double NNfunction_ss_dRdR::synapse0x32e1ec0() {
   return (neuron0x32c4840()*-0.298665);
}

double NNfunction_ss_dRdR::synapse0x32e1f00() {
   return (neuron0x32c5210()*0.0350093);
}

double NNfunction_ss_dRdR::synapse0x32e1f40() {
   return (neuron0x32d7850()*0.013449);
}

double NNfunction_ss_dRdR::synapse0x32e1f80() {
   return (neuron0x32d8100()*-0.0486714);
}

double NNfunction_ss_dRdR::synapse0x32e1fc0() {
   return (neuron0x32d8ad0()*0.0284623);
}

double NNfunction_ss_dRdR::synapse0x32e2000() {
   return (neuron0x32d94a0()*1.55435);
}

double NNfunction_ss_dRdR::synapse0x32e2380() {
   return (neuron0x32b5460()*-0.608157);
}

double NNfunction_ss_dRdR::synapse0x32e23c0() {
   return (neuron0x32b5db0()*-1.58895);
}

double NNfunction_ss_dRdR::synapse0x32e2400() {
   return (neuron0x32b6890()*1.06397);
}

double NNfunction_ss_dRdR::synapse0x32e2440() {
   return (neuron0x3079be0()*-0.708356);
}

double NNfunction_ss_dRdR::synapse0x32e2480() {
   return (neuron0x32b7630()*-0.182089);
}

double NNfunction_ss_dRdR::synapse0x32e24c0() {
   return (neuron0x32b8000()*-2.47434);
}

double NNfunction_ss_dRdR::synapse0x32e2500() {
   return (neuron0x32b8dd0()*1.04569);
}

double NNfunction_ss_dRdR::synapse0x32e2540() {
   return (neuron0x32b97a0()*0.0220152);
}

double NNfunction_ss_dRdR::synapse0x32e2580() {
   return (neuron0x32ba170()*0.162978);
}

double NNfunction_ss_dRdR::synapse0x32e25c0() {
   return (neuron0x32bac50()*-1.29756);
}

double NNfunction_ss_dRdR::synapse0x32e2600() {
   return (neuron0x32bb620()*-0.653961);
}

double NNfunction_ss_dRdR::synapse0x32e2640() {
   return (neuron0x32b8700()*-0.772316);
}

double NNfunction_ss_dRdR::synapse0x32e2680() {
   return (neuron0x32bd1d0()*-0.223404);
}

double NNfunction_ss_dRdR::synapse0x32e26c0() {
   return (neuron0x32bdba0()*-3.62836);
}

double NNfunction_ss_dRdR::synapse0x32e2700() {
   return (neuron0x32be570()*1.39154);
}

double NNfunction_ss_dRdR::synapse0x32e2740() {
   return (neuron0x32bef40()*-1.36688);
}

double NNfunction_ss_dRdR::synapse0x32e21d0() {
   return (neuron0x32c0d50()*-0.104071);
}

double NNfunction_ss_dRdR::synapse0x32e2210() {
   return (neuron0x32c1030()*-0.534502);
}

double NNfunction_ss_dRdR::synapse0x32e2890() {
   return (neuron0x32c1a00()*0.793798);
}

double NNfunction_ss_dRdR::synapse0x32e28d0() {
   return (neuron0x32c23d0()*-0.585508);
}

double NNfunction_ss_dRdR::synapse0x32e2910() {
   return (neuron0x32c2da0()*-0.0738962);
}

double NNfunction_ss_dRdR::synapse0x32e2950() {
   return (neuron0x32c3770()*0.563702);
}

double NNfunction_ss_dRdR::synapse0x32e2990() {
   return (neuron0x32bc2c0()*-0.471907);
}

double NNfunction_ss_dRdR::synapse0x32e29d0() {
   return (neuron0x32bcc90()*1.54113);
}

double NNfunction_ss_dRdR::synapse0x32e2a10() {
   return (neuron0x32c6500()*-0.397409);
}

double NNfunction_ss_dRdR::synapse0x32e2a50() {
   return (neuron0x32c6ed0()*0.209532);
}

double NNfunction_ss_dRdR::synapse0x32e2a90() {
   return (neuron0x32c78a0()*2.37003);
}

double NNfunction_ss_dRdR::synapse0x32e2ad0() {
   return (neuron0x32c8270()*-0.213649);
}

double NNfunction_ss_dRdR::synapse0x32e2b10() {
   return (neuron0x32c8c40()*-0.871603);
}

double NNfunction_ss_dRdR::synapse0x32e2b50() {
   return (neuron0x32c9610()*-0.386561);
}

double NNfunction_ss_dRdR::synapse0x32e2b90() {
   return (neuron0x32c9fe0()*0.20379);
}

double NNfunction_ss_dRdR::synapse0x32e2bd0() {
   return (neuron0x32ca9b0()*-2.31823);
}

double NNfunction_ss_dRdR::synapse0x32e2780() {
   return (neuron0x32c0a40()*0.580571);
}

double NNfunction_ss_dRdR::synapse0x32e27c0() {
   return (neuron0x32cd590()*0.406475);
}

double NNfunction_ss_dRdR::synapse0x32e2800() {
   return (neuron0x32cdf60()*1.49971);
}

double NNfunction_ss_dRdR::synapse0x32e2840() {
   return (neuron0x32ce930()*3.08656);
}

double NNfunction_ss_dRdR::synapse0x32e2e20() {
   return (neuron0x32cf300()*-0.938084);
}

double NNfunction_ss_dRdR::synapse0x32e2e60() {
   return (neuron0x32cfcd0()*1.35959);
}

double NNfunction_ss_dRdR::synapse0x32e2ea0() {
   return (neuron0x32d06a0()*0.725285);
}

double NNfunction_ss_dRdR::synapse0x32e2ee0() {
   return (neuron0x32d1070()*0.42392);
}

double NNfunction_ss_dRdR::synapse0x32e2f20() {
   return (neuron0x32d1a40()*-0.983464);
}

double NNfunction_ss_dRdR::synapse0x32e2f60() {
   return (neuron0x32d2620()*-8.89014);
}

double NNfunction_ss_dRdR::synapse0x32e2fa0() {
   return (neuron0x32d2ff0()*-0.498915);
}

double NNfunction_ss_dRdR::synapse0x32e2fe0() {
   return (neuron0x32c3e70()*-0.0534787);
}

double NNfunction_ss_dRdR::synapse0x32e3020() {
   return (neuron0x32c4840()*-0.616537);
}

double NNfunction_ss_dRdR::synapse0x32e3060() {
   return (neuron0x32c5210()*-0.37228);
}

double NNfunction_ss_dRdR::synapse0x32e30a0() {
   return (neuron0x32d7850()*-0.791958);
}

double NNfunction_ss_dRdR::synapse0x32e30e0() {
   return (neuron0x32d8100()*-2.68832);
}

double NNfunction_ss_dRdR::synapse0x32e3120() {
   return (neuron0x32d8ad0()*0.406635);
}

double NNfunction_ss_dRdR::synapse0x32e3160() {
   return (neuron0x32d94a0()*1.7025);
}

double NNfunction_ss_dRdR::synapse0x32e34e0() {
   return (neuron0x32b5460()*0.289428);
}

double NNfunction_ss_dRdR::synapse0x32e3520() {
   return (neuron0x32b5db0()*0.654161);
}

double NNfunction_ss_dRdR::synapse0x32e3560() {
   return (neuron0x32b6890()*-0.383966);
}

double NNfunction_ss_dRdR::synapse0x32e35a0() {
   return (neuron0x3079be0()*0.913881);
}

double NNfunction_ss_dRdR::synapse0x32e35e0() {
   return (neuron0x32b7630()*-0.0859269);
}

double NNfunction_ss_dRdR::synapse0x32e3620() {
   return (neuron0x32b8000()*0.401527);
}

double NNfunction_ss_dRdR::synapse0x32e3660() {
   return (neuron0x32b8dd0()*-0.905321);
}

double NNfunction_ss_dRdR::synapse0x32e36a0() {
   return (neuron0x32b97a0()*-0.126698);
}

double NNfunction_ss_dRdR::synapse0x32e36e0() {
   return (neuron0x32ba170()*-0.298085);
}

double NNfunction_ss_dRdR::synapse0x32e3720() {
   return (neuron0x32bac50()*1.78841);
}

double NNfunction_ss_dRdR::synapse0x32e3760() {
   return (neuron0x32bb620()*-0.291043);
}

double NNfunction_ss_dRdR::synapse0x32e37a0() {
   return (neuron0x32b8700()*-0.604202);
}

double NNfunction_ss_dRdR::synapse0x32e37e0() {
   return (neuron0x32bd1d0()*0.617195);
}

double NNfunction_ss_dRdR::synapse0x32e3820() {
   return (neuron0x32bdba0()*0.0568395);
}

double NNfunction_ss_dRdR::synapse0x32e3860() {
   return (neuron0x32be570()*-0.499128);
}

double NNfunction_ss_dRdR::synapse0x32e38a0() {
   return (neuron0x32bef40()*-0.442254);
}

double NNfunction_ss_dRdR::synapse0x32e3330() {
   return (neuron0x32c0d50()*-0.222613);
}

double NNfunction_ss_dRdR::synapse0x32e3370() {
   return (neuron0x32c1030()*0.0578559);
}

double NNfunction_ss_dRdR::synapse0x32e39f0() {
   return (neuron0x32c1a00()*-0.282619);
}

double NNfunction_ss_dRdR::synapse0x32e3a30() {
   return (neuron0x32c23d0()*1.06502);
}

double NNfunction_ss_dRdR::synapse0x32e3a70() {
   return (neuron0x32c2da0()*-0.827621);
}

double NNfunction_ss_dRdR::synapse0x32e3ab0() {
   return (neuron0x32c3770()*0.123696);
}

double NNfunction_ss_dRdR::synapse0x32e3af0() {
   return (neuron0x32bc2c0()*-0.382152);
}

double NNfunction_ss_dRdR::synapse0x32e3b30() {
   return (neuron0x32bcc90()*-0.882913);
}

double NNfunction_ss_dRdR::synapse0x32e3b70() {
   return (neuron0x32c6500()*0.0741238);
}

double NNfunction_ss_dRdR::synapse0x32e3bb0() {
   return (neuron0x32c6ed0()*-1.4759);
}

double NNfunction_ss_dRdR::synapse0x32e3bf0() {
   return (neuron0x32c78a0()*0.613632);
}

double NNfunction_ss_dRdR::synapse0x32e3c30() {
   return (neuron0x32c8270()*-0.414275);
}

double NNfunction_ss_dRdR::synapse0x32e3c70() {
   return (neuron0x32c8c40()*0.284953);
}

double NNfunction_ss_dRdR::synapse0x32e3cb0() {
   return (neuron0x32c9610()*-0.577367);
}

double NNfunction_ss_dRdR::synapse0x32e3cf0() {
   return (neuron0x32c9fe0()*0.647968);
}

double NNfunction_ss_dRdR::synapse0x32e3d30() {
   return (neuron0x32ca9b0()*-0.422831);
}

double NNfunction_ss_dRdR::synapse0x32e38e0() {
   return (neuron0x32c0a40()*-0.394614);
}

double NNfunction_ss_dRdR::synapse0x32e3920() {
   return (neuron0x32cd590()*0.211651);
}

double NNfunction_ss_dRdR::synapse0x32e3960() {
   return (neuron0x32cdf60()*-0.98872);
}

double NNfunction_ss_dRdR::synapse0x32e39a0() {
   return (neuron0x32ce930()*-0.695912);
}

double NNfunction_ss_dRdR::synapse0x32e3f80() {
   return (neuron0x32cf300()*-0.871674);
}

double NNfunction_ss_dRdR::synapse0x32e3fc0() {
   return (neuron0x32cfcd0()*-0.341801);
}

double NNfunction_ss_dRdR::synapse0x32e4000() {
   return (neuron0x32d06a0()*-0.923322);
}

double NNfunction_ss_dRdR::synapse0x32e4040() {
   return (neuron0x32d1070()*-0.470024);
}

double NNfunction_ss_dRdR::synapse0x32e4080() {
   return (neuron0x32d1a40()*-0.016008);
}

double NNfunction_ss_dRdR::synapse0x32e40c0() {
   return (neuron0x32d2620()*0.222382);
}

double NNfunction_ss_dRdR::synapse0x32e4100() {
   return (neuron0x32d2ff0()*0.353072);
}

double NNfunction_ss_dRdR::synapse0x32e4140() {
   return (neuron0x32c3e70()*0.244497);
}

double NNfunction_ss_dRdR::synapse0x32e4180() {
   return (neuron0x32c4840()*0.454282);
}

double NNfunction_ss_dRdR::synapse0x32e41c0() {
   return (neuron0x32c5210()*-0.133745);
}

double NNfunction_ss_dRdR::synapse0x32e4200() {
   return (neuron0x32d7850()*-0.298471);
}

double NNfunction_ss_dRdR::synapse0x32e4240() {
   return (neuron0x32d8100()*-0.146629);
}

double NNfunction_ss_dRdR::synapse0x32e4280() {
   return (neuron0x32d8ad0()*-0.0751327);
}

double NNfunction_ss_dRdR::synapse0x32e42c0() {
   return (neuron0x32d94a0()*-0.87176);
}

double NNfunction_ss_dRdR::synapse0x32e4520() {
   return (neuron0x32e06a0()*-8.08079);
}

double NNfunction_ss_dRdR::synapse0x32e4560() {
   return (neuron0x32e0a40()*-3.52917);
}

double NNfunction_ss_dRdR::synapse0x32e45a0() {
   return (neuron0x32e0ee0()*6.73213);
}

double NNfunction_ss_dRdR::synapse0x32e45e0() {
   return (neuron0x32e2040()*10.3061);
}

double NNfunction_ss_dRdR::synapse0x32e4620() {
   return (neuron0x32e31a0()*-1.77953);
}

