#include "NNfunction_ss_cLdR.h"
#include <cmath>

double NNfunction_ss_cLdR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5454)/15.3237;
   input1 = (in1 - 0.98285)/1150.78;
   input2 = (in2 - 668.165)/622.402;
   input3 = (in3 - -50.8744)/787.816;
   input4 = (in4 - 1034.49)/939.774;
   input5 = (in5 - 877.769)/928.626;
   input6 = (in6 - 886.53)/930.321;
   input7 = (in7 - 918.992)/924.895;
   input8 = (in8 - 924.047)/979.017;
   input9 = (in9 - 898.978)/959.739;
   input10 = (in10 - 988.165)/959.639;
   input11 = (in11 - 726.192)/874.147;
   input12 = (in12 - 343.025)/341.376;
   input13 = (in13 - 498.998)/515.076;
   input14 = (in14 - 700.035)/795.596;
   input15 = (in15 - 701.673)/798.273;
   input16 = (in16 - 530.913)/554.514;
   input17 = (in17 - 351.518)/352.378;
   input18 = (in18 - 757.483)/909.563;
   input19 = (in19 - 807.666)/882.008;
   input20 = (in20 - -7.35768)/482.256;
   input21 = (in21 - -2.13571)/1149.35;
   input22 = (in22 - -4.93592)/1207.91;
   input23 = (in23 - -206.148)/608.33;
   switch(index) {
     case 0:
         return neuron0x2151440();
     default:
         return 0.;
   }
}

double NNfunction_ss_cLdR::Value(int index, double* input) {
   input0 = (input[0] - 23.5454)/15.3237;
   input1 = (input[1] - 0.98285)/1150.78;
   input2 = (input[2] - 668.165)/622.402;
   input3 = (input[3] - -50.8744)/787.816;
   input4 = (input[4] - 1034.49)/939.774;
   input5 = (input[5] - 877.769)/928.626;
   input6 = (input[6] - 886.53)/930.321;
   input7 = (input[7] - 918.992)/924.895;
   input8 = (input[8] - 924.047)/979.017;
   input9 = (input[9] - 898.978)/959.739;
   input10 = (input[10] - 988.165)/959.639;
   input11 = (input[11] - 726.192)/874.147;
   input12 = (input[12] - 343.025)/341.376;
   input13 = (input[13] - 498.998)/515.076;
   input14 = (input[14] - 700.035)/795.596;
   input15 = (input[15] - 701.673)/798.273;
   input16 = (input[16] - 530.913)/554.514;
   input17 = (input[17] - 351.518)/352.378;
   input18 = (input[18] - 757.483)/909.563;
   input19 = (input[19] - 807.666)/882.008;
   input20 = (input[20] - -7.35768)/482.256;
   input21 = (input[21] - -2.13571)/1149.35;
   input22 = (input[22] - -4.93592)/1207.91;
   input23 = (input[23] - -206.148)/608.33;
   switch(index) {
     case 0:
         return neuron0x2151440();
     default:
         return 0.;
   }
}

double NNfunction_ss_cLdR::neuron0x211d500() {
   return input0;
}

double NNfunction_ss_cLdR::neuron0x211d840() {
   return input1;
}

double NNfunction_ss_cLdR::neuron0x211db80() {
   return input2;
}

double NNfunction_ss_cLdR::neuron0x211dec0() {
   return input3;
}

double NNfunction_ss_cLdR::neuron0x211e200() {
   return input4;
}

double NNfunction_ss_cLdR::neuron0x211e540() {
   return input5;
}

double NNfunction_ss_cLdR::neuron0x211e880() {
   return input6;
}

double NNfunction_ss_cLdR::neuron0x211ebc0() {
   return input7;
}

double NNfunction_ss_cLdR::neuron0x211ef00() {
   return input8;
}

double NNfunction_ss_cLdR::neuron0x211f240() {
   return input9;
}

double NNfunction_ss_cLdR::neuron0x211f580() {
   return input10;
}

double NNfunction_ss_cLdR::neuron0x211f8c0() {
   return input11;
}

double NNfunction_ss_cLdR::neuron0x211fc00() {
   return input12;
}

double NNfunction_ss_cLdR::neuron0x211ff40() {
   return input13;
}

double NNfunction_ss_cLdR::neuron0x2120280() {
   return input14;
}

double NNfunction_ss_cLdR::neuron0x21205c0() {
   return input15;
}

double NNfunction_ss_cLdR::neuron0x2120900() {
   return input16;
}

double NNfunction_ss_cLdR::neuron0x2120e60() {
   return input17;
}

double NNfunction_ss_cLdR::neuron0x2121080() {
   return input18;
}

double NNfunction_ss_cLdR::neuron0x21213c0() {
   return input19;
}

double NNfunction_ss_cLdR::neuron0x2121700() {
   return input20;
}

double NNfunction_ss_cLdR::neuron0x2121a40() {
   return input21;
}

double NNfunction_ss_cLdR::neuron0x2121d80() {
   return input22;
}

double NNfunction_ss_cLdR::neuron0x21220c0() {
   return input23;
}

double NNfunction_ss_cLdR::input0x2122560() {
   double input = 0.0468856;
   input += synapse0x1edd370();
   input += synapse0x211d3c0();
   input += synapse0x211d400();
   input += synapse0x2122810();
   input += synapse0x2122850();
   input += synapse0x2122890();
   input += synapse0x21228d0();
   input += synapse0x2122910();
   input += synapse0x2122950();
   input += synapse0x2122990();
   input += synapse0x21229d0();
   input += synapse0x2122a10();
   input += synapse0x2122a50();
   input += synapse0x2122a90();
   input += synapse0x2122ad0();
   input += synapse0x2122b10();
   input += synapse0x211d330();
   input += synapse0x211d370();
   input += synapse0x1ecec70();
   input += synapse0x1ececb0();
   input += synapse0x2122d70();
   input += synapse0x2122db0();
   input += synapse0x2122df0();
   input += synapse0x2122e30();
   return input;
}

double NNfunction_ss_cLdR::neuron0x2122560() {
   double input = input0x2122560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x2122e70() {
   double input = 1.23245;
   input += synapse0x21231b0();
   input += synapse0x21231f0();
   input += synapse0x2123230();
   input += synapse0x2123270();
   input += synapse0x21232b0();
   input += synapse0x21232f0();
   input += synapse0x2123330();
   input += synapse0x2123370();
   input += synapse0x21233b0();
   input += synapse0x2122c60();
   input += synapse0x2122ca0();
   input += synapse0x2122ce0();
   input += synapse0x2122d20();
   input += synapse0x2123600();
   input += synapse0x2123640();
   input += synapse0x2123680();
   input += synapse0x2123000();
   input += synapse0x2123040();
   input += synapse0x21237d0();
   input += synapse0x2123810();
   input += synapse0x2123850();
   input += synapse0x2123890();
   input += synapse0x21238d0();
   input += synapse0x2123910();
   return input;
}

double NNfunction_ss_cLdR::neuron0x2122e70() {
   double input = input0x2122e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x2123950() {
   double input = 0.0908103;
   input += synapse0x2123c90();
   input += synapse0x2123cd0();
   input += synapse0x2123d10();
   input += synapse0x2123d50();
   input += synapse0x2123d90();
   input += synapse0x2123dd0();
   input += synapse0x2123e10();
   input += synapse0x2123e50();
   input += synapse0x2123e90();
   input += synapse0x2123ed0();
   input += synapse0x2123f10();
   input += synapse0x2123f50();
   input += synapse0x2123f90();
   input += synapse0x2123fd0();
   input += synapse0x2124010();
   input += synapse0x2124050();
   input += synapse0x2123ae0();
   input += synapse0x2123b20();
   input += synapse0x1edca60();
   input += synapse0x1edcaa0();
   input += synapse0x210c590();
   input += synapse0x210c5d0();
   input += synapse0x210c610();
   input += synapse0x211d440();
   return input;
}

double NNfunction_ss_cLdR::neuron0x2123950() {
   double input = input0x2123950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x1edd1e0() {
   double input = -0.748025;
   input += synapse0x21235a0();
   input += synapse0x211d480();
   input += synapse0x211d4c0();
   input += synapse0x21241a0();
   input += synapse0x21241e0();
   input += synapse0x2124220();
   input += synapse0x2124260();
   input += synapse0x21242a0();
   input += synapse0x21242e0();
   input += synapse0x2124320();
   input += synapse0x2124360();
   input += synapse0x21243a0();
   input += synapse0x21243e0();
   input += synapse0x2124420();
   input += synapse0x2124460();
   input += synapse0x21244a0();
   input += synapse0x21233f0();
   input += synapse0x2123430();
   input += synapse0x21245f0();
   input += synapse0x2124630();
   input += synapse0x2124670();
   input += synapse0x21246b0();
   input += synapse0x21246f0();
   input += synapse0x2124730();
   return input;
}

double NNfunction_ss_cLdR::neuron0x1edd1e0() {
   double input = input0x1edd1e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x2124770() {
   double input = 1.26563;
   input += synapse0x2124ab0();
   input += synapse0x2124af0();
   input += synapse0x2124b30();
   input += synapse0x2124b70();
   input += synapse0x2124bb0();
   input += synapse0x2124bf0();
   input += synapse0x2124c30();
   input += synapse0x2124c70();
   input += synapse0x2124cb0();
   input += synapse0x2124cf0();
   input += synapse0x2124d30();
   input += synapse0x2124d70();
   input += synapse0x2124db0();
   input += synapse0x2124df0();
   input += synapse0x2124e30();
   input += synapse0x2124e70();
   input += synapse0x2124900();
   input += synapse0x2124940();
   input += synapse0x2124fc0();
   input += synapse0x2125000();
   input += synapse0x2125040();
   input += synapse0x2125080();
   input += synapse0x21250c0();
   input += synapse0x2125100();
   return input;
}

double NNfunction_ss_cLdR::neuron0x2124770() {
   double input = input0x2124770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x2125140() {
   double input = 1.50211;
   input += synapse0x2125480();
   input += synapse0x21254c0();
   input += synapse0x2125500();
   input += synapse0x2125540();
   input += synapse0x2125580();
   input += synapse0x21255c0();
   input += synapse0x2125600();
   input += synapse0x2125640();
   input += synapse0x2125680();
   input += synapse0x1edcdd0();
   input += synapse0x1edce10();
   input += synapse0x1edce50();
   input += synapse0x1edce90();
   input += synapse0x1edced0();
   input += synapse0x1edcf10();
   input += synapse0x1edcf50();
   input += synapse0x21252d0();
   input += synapse0x2125310();
   input += synapse0x1edd0a0();
   input += synapse0x1edd0e0();
   input += synapse0x1edd120();
   input += synapse0x1edd160();
   input += synapse0x1edd1a0();
   input += synapse0x2125ed0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x2125140() {
   double input = input0x2125140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x2125f10() {
   double input = -1.24381;
   input += synapse0x2126250();
   input += synapse0x2126290();
   input += synapse0x21262d0();
   input += synapse0x2126310();
   input += synapse0x2126350();
   input += synapse0x2126390();
   input += synapse0x21263d0();
   input += synapse0x2126410();
   input += synapse0x2126450();
   input += synapse0x2126490();
   input += synapse0x21264d0();
   input += synapse0x2126510();
   input += synapse0x2126550();
   input += synapse0x2126590();
   input += synapse0x21265d0();
   input += synapse0x2126610();
   input += synapse0x21260a0();
   input += synapse0x21260e0();
   input += synapse0x2126760();
   input += synapse0x21267a0();
   input += synapse0x21267e0();
   input += synapse0x2126820();
   input += synapse0x2126860();
   input += synapse0x21268a0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x2125f10() {
   double input = input0x2125f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x21268e0() {
   double input = 0.307126;
   input += synapse0x2126c20();
   input += synapse0x2126c60();
   input += synapse0x2126ca0();
   input += synapse0x2126ce0();
   input += synapse0x2126d20();
   input += synapse0x2126d60();
   input += synapse0x2126da0();
   input += synapse0x2126de0();
   input += synapse0x2126e20();
   input += synapse0x2126e60();
   input += synapse0x2126ea0();
   input += synapse0x2126ee0();
   input += synapse0x2126f20();
   input += synapse0x2126f60();
   input += synapse0x2126fa0();
   input += synapse0x2126fe0();
   input += synapse0x2126a70();
   input += synapse0x2126ab0();
   input += synapse0x2127130();
   input += synapse0x2127170();
   input += synapse0x21271b0();
   input += synapse0x21271f0();
   input += synapse0x2127230();
   input += synapse0x2127270();
   return input;
}

double NNfunction_ss_cLdR::neuron0x21268e0() {
   double input = input0x21268e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x21272b0() {
   double input = -1.31099;
   input += synapse0x2120d50();
   input += synapse0x2120d90();
   input += synapse0x2120dd0();
   input += synapse0x2120e10();
   input += synapse0x2127800();
   input += synapse0x2127840();
   input += synapse0x2127880();
   input += synapse0x21278c0();
   input += synapse0x2127900();
   input += synapse0x2127940();
   input += synapse0x2127980();
   input += synapse0x21279c0();
   input += synapse0x2127a00();
   input += synapse0x2127a40();
   input += synapse0x2127a80();
   input += synapse0x2127ac0();
   input += synapse0x2127440();
   input += synapse0x2127480();
   input += synapse0x2127c10();
   input += synapse0x2127c50();
   input += synapse0x2127c90();
   input += synapse0x2127cd0();
   input += synapse0x2127d10();
   input += synapse0x2127d50();
   return input;
}

double NNfunction_ss_cLdR::neuron0x21272b0() {
   double input = input0x21272b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x2127d90() {
   double input = 2.70876;
   input += synapse0x21280d0();
   input += synapse0x2128110();
   input += synapse0x2128150();
   input += synapse0x2128190();
   input += synapse0x21281d0();
   input += synapse0x2128210();
   input += synapse0x2128250();
   input += synapse0x2128290();
   input += synapse0x21282d0();
   input += synapse0x2128310();
   input += synapse0x2128350();
   input += synapse0x2128390();
   input += synapse0x21283d0();
   input += synapse0x2128410();
   input += synapse0x2128450();
   input += synapse0x2128490();
   input += synapse0x2127f20();
   input += synapse0x2127f60();
   input += synapse0x21285e0();
   input += synapse0x2128620();
   input += synapse0x2128660();
   input += synapse0x21286a0();
   input += synapse0x21286e0();
   input += synapse0x2128720();
   return input;
}

double NNfunction_ss_cLdR::neuron0x2127d90() {
   double input = input0x2127d90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x2128760() {
   double input = -0.225081;
   input += synapse0x2128aa0();
   input += synapse0x2128ae0();
   input += synapse0x2128b20();
   input += synapse0x2128b60();
   input += synapse0x2128ba0();
   input += synapse0x2128be0();
   input += synapse0x2128c20();
   input += synapse0x2128c60();
   input += synapse0x2128ca0();
   input += synapse0x2128ce0();
   input += synapse0x2128d20();
   input += synapse0x2128d60();
   input += synapse0x2128da0();
   input += synapse0x2128de0();
   input += synapse0x2128e20();
   input += synapse0x2128e60();
   input += synapse0x21288f0();
   input += synapse0x2128930();
   input += synapse0x21256c0();
   input += synapse0x2125700();
   input += synapse0x2125740();
   input += synapse0x2125780();
   input += synapse0x21257c0();
   input += synapse0x2125800();
   return input;
}

double NNfunction_ss_cLdR::neuron0x2128760() {
   double input = input0x2128760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x2125840() {
   double input = -1.29887;
   input += synapse0x2125b80();
   input += synapse0x2125bc0();
   input += synapse0x2125c00();
   input += synapse0x2125c40();
   input += synapse0x2125c80();
   input += synapse0x2125cc0();
   input += synapse0x2125d00();
   input += synapse0x2125d40();
   input += synapse0x2125d80();
   input += synapse0x2125dc0();
   input += synapse0x2125e00();
   input += synapse0x2125e40();
   input += synapse0x2125e80();
   input += synapse0x2129fc0();
   input += synapse0x212a000();
   input += synapse0x212a040();
   input += synapse0x21259d0();
   input += synapse0x2125a10();
   input += synapse0x212a190();
   input += synapse0x212a1d0();
   input += synapse0x212a210();
   input += synapse0x212a250();
   input += synapse0x212a290();
   input += synapse0x212a2d0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x2125840() {
   double input = input0x2125840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x212a310() {
   double input = -1.78507;
   input += synapse0x212a650();
   input += synapse0x212a690();
   input += synapse0x212a6d0();
   input += synapse0x212a710();
   input += synapse0x212a750();
   input += synapse0x212a790();
   input += synapse0x212a7d0();
   input += synapse0x212a810();
   input += synapse0x212a850();
   input += synapse0x212a890();
   input += synapse0x212a8d0();
   input += synapse0x212a910();
   input += synapse0x212a950();
   input += synapse0x212a990();
   input += synapse0x212a9d0();
   input += synapse0x212aa10();
   input += synapse0x212a4a0();
   input += synapse0x212a4e0();
   input += synapse0x212ab60();
   input += synapse0x212aba0();
   input += synapse0x212abe0();
   input += synapse0x212ac20();
   input += synapse0x212ac60();
   input += synapse0x212aca0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x212a310() {
   double input = input0x212a310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x212ace0() {
   double input = 0.65389;
   input += synapse0x212b020();
   input += synapse0x212b060();
   input += synapse0x212b0a0();
   input += synapse0x212b0e0();
   input += synapse0x212b120();
   input += synapse0x212b160();
   input += synapse0x212b1a0();
   input += synapse0x212b1e0();
   input += synapse0x212b220();
   input += synapse0x212b260();
   input += synapse0x212b2a0();
   input += synapse0x212b2e0();
   input += synapse0x212b320();
   input += synapse0x212b360();
   input += synapse0x212b3a0();
   input += synapse0x212b3e0();
   input += synapse0x212ae70();
   input += synapse0x212aeb0();
   input += synapse0x212b530();
   input += synapse0x212b570();
   input += synapse0x212b5b0();
   input += synapse0x212b5f0();
   input += synapse0x212b630();
   input += synapse0x212b670();
   return input;
}

double NNfunction_ss_cLdR::neuron0x212ace0() {
   double input = input0x212ace0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x212b6b0() {
   double input = -0.984611;
   input += synapse0x212b9f0();
   input += synapse0x212ba30();
   input += synapse0x212ba70();
   input += synapse0x212bab0();
   input += synapse0x212baf0();
   input += synapse0x212bb30();
   input += synapse0x212bb70();
   input += synapse0x212bbb0();
   input += synapse0x212bbf0();
   input += synapse0x212bc30();
   input += synapse0x212bc70();
   input += synapse0x212bcb0();
   input += synapse0x212bcf0();
   input += synapse0x212bd30();
   input += synapse0x212bd70();
   input += synapse0x212bdb0();
   input += synapse0x212b840();
   input += synapse0x212b880();
   input += synapse0x212bf00();
   input += synapse0x212bf40();
   input += synapse0x212bf80();
   input += synapse0x212bfc0();
   input += synapse0x212c000();
   input += synapse0x212c040();
   return input;
}

double NNfunction_ss_cLdR::neuron0x212b6b0() {
   double input = input0x212b6b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x212c080() {
   double input = 1.30895;
   input += synapse0x212c3c0();
   input += synapse0x211d720();
   input += synapse0x211d760();
   input += synapse0x211da60();
   input += synapse0x211daa0();
   input += synapse0x211dda0();
   input += synapse0x211dde0();
   input += synapse0x211e0e0();
   input += synapse0x211e120();
   input += synapse0x211e420();
   input += synapse0x211e460();
   input += synapse0x211e760();
   input += synapse0x211e7a0();
   input += synapse0x211eaa0();
   input += synapse0x211eae0();
   input += synapse0x211ede0();
   input += synapse0x211ee20();
   input += synapse0x211f120();
   input += synapse0x211f160();
   input += synapse0x211f460();
   input += synapse0x211f4a0();
   input += synapse0x211f7a0();
   input += synapse0x211f7e0();
   input += synapse0x211fae0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x212c080() {
   double input = input0x212c080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x212de90() {
   double input = 0.551368;
   input += synapse0x211fb20();
   input += synapse0x21207e0();
   input += synapse0x2120820();
   input += synapse0x212c210();
   input += synapse0x212c250();
   input += synapse0x2120b20();
   input += synapse0x2120b60();
   input += synapse0x1eceb50();
   input += synapse0x1eceb90();
   input += synapse0x21212a0();
   input += synapse0x21212e0();
   input += synapse0x21215e0();
   input += synapse0x2121620();
   input += synapse0x2121920();
   input += synapse0x2121960();
   input += synapse0x2121c60();
   input += synapse0x2121ca0();
   input += synapse0x2121fa0();
   input += synapse0x2121fe0();
   input += synapse0x21222e0();
   input += synapse0x2122320();
   input += synapse0x211fe20();
   input += synapse0x211fe60();
   input += synapse0x212e130();
   return input;
}

double NNfunction_ss_cLdR::neuron0x212de90() {
   double input = input0x212de90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x212e170() {
   double input = 0.158149;
   input += synapse0x212e4b0();
   input += synapse0x212e4f0();
   input += synapse0x212e530();
   input += synapse0x212e570();
   input += synapse0x212e5b0();
   input += synapse0x212e5f0();
   input += synapse0x212e630();
   input += synapse0x212e670();
   input += synapse0x212e6b0();
   input += synapse0x212e6f0();
   input += synapse0x212e730();
   input += synapse0x212e770();
   input += synapse0x212e7b0();
   input += synapse0x212e7f0();
   input += synapse0x212e830();
   input += synapse0x212e870();
   input += synapse0x212e300();
   input += synapse0x212e340();
   input += synapse0x212e9c0();
   input += synapse0x212ea00();
   input += synapse0x212ea40();
   input += synapse0x212ea80();
   input += synapse0x212eac0();
   input += synapse0x212eb00();
   return input;
}

double NNfunction_ss_cLdR::neuron0x212e170() {
   double input = input0x212e170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x212eb40() {
   double input = -0.222231;
   input += synapse0x212ee80();
   input += synapse0x212eec0();
   input += synapse0x212ef00();
   input += synapse0x212ef40();
   input += synapse0x212ef80();
   input += synapse0x212efc0();
   input += synapse0x212f000();
   input += synapse0x212f040();
   input += synapse0x212f080();
   input += synapse0x212f0c0();
   input += synapse0x212f100();
   input += synapse0x212f140();
   input += synapse0x212f180();
   input += synapse0x212f1c0();
   input += synapse0x212f200();
   input += synapse0x212f240();
   input += synapse0x212ecd0();
   input += synapse0x212ed10();
   input += synapse0x212f390();
   input += synapse0x212f3d0();
   input += synapse0x212f410();
   input += synapse0x212f450();
   input += synapse0x212f490();
   input += synapse0x212f4d0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x212eb40() {
   double input = input0x212eb40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x212f510() {
   double input = 2.43941;
   input += synapse0x212f850();
   input += synapse0x212f890();
   input += synapse0x212f8d0();
   input += synapse0x212f910();
   input += synapse0x212f950();
   input += synapse0x212f990();
   input += synapse0x212f9d0();
   input += synapse0x212fa10();
   input += synapse0x212fa50();
   input += synapse0x212fa90();
   input += synapse0x212fad0();
   input += synapse0x212fb10();
   input += synapse0x212fb50();
   input += synapse0x212fb90();
   input += synapse0x212fbd0();
   input += synapse0x212fc10();
   input += synapse0x212f6a0();
   input += synapse0x212f6e0();
   input += synapse0x212fd60();
   input += synapse0x212fda0();
   input += synapse0x212fde0();
   input += synapse0x212fe20();
   input += synapse0x212fe60();
   input += synapse0x212fea0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x212f510() {
   double input = input0x212f510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x212fee0() {
   double input = 0.702535;
   input += synapse0x2130220();
   input += synapse0x2130260();
   input += synapse0x21302a0();
   input += synapse0x21302e0();
   input += synapse0x2130320();
   input += synapse0x2130360();
   input += synapse0x21303a0();
   input += synapse0x21303e0();
   input += synapse0x2130420();
   input += synapse0x2130460();
   input += synapse0x21304a0();
   input += synapse0x21304e0();
   input += synapse0x2130520();
   input += synapse0x2130560();
   input += synapse0x21305a0();
   input += synapse0x21305e0();
   input += synapse0x2130070();
   input += synapse0x21300b0();
   input += synapse0x2130730();
   input += synapse0x2130770();
   input += synapse0x21307b0();
   input += synapse0x21307f0();
   input += synapse0x2130830();
   input += synapse0x2130870();
   return input;
}

double NNfunction_ss_cLdR::neuron0x212fee0() {
   double input = input0x212fee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x21308b0() {
   double input = -0.279529;
   input += synapse0x2130bf0();
   input += synapse0x2130c30();
   input += synapse0x2130c70();
   input += synapse0x2130cb0();
   input += synapse0x2130cf0();
   input += synapse0x2130d30();
   input += synapse0x2130d70();
   input += synapse0x2130db0();
   input += synapse0x2130df0();
   input += synapse0x2128fb0();
   input += synapse0x2128ff0();
   input += synapse0x2129030();
   input += synapse0x2129070();
   input += synapse0x21290b0();
   input += synapse0x21290f0();
   input += synapse0x2129130();
   input += synapse0x2130a40();
   input += synapse0x2130a80();
   input += synapse0x2129280();
   input += synapse0x21292c0();
   input += synapse0x2129300();
   input += synapse0x2129340();
   input += synapse0x2129380();
   input += synapse0x21293c0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x21308b0() {
   double input = input0x21308b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x2129400() {
   double input = -0.276766;
   input += synapse0x2129740();
   input += synapse0x2129780();
   input += synapse0x21297c0();
   input += synapse0x2129800();
   input += synapse0x2129840();
   input += synapse0x2129880();
   input += synapse0x21298c0();
   input += synapse0x2129900();
   input += synapse0x2129940();
   input += synapse0x2129980();
   input += synapse0x21299c0();
   input += synapse0x2129a00();
   input += synapse0x2129a40();
   input += synapse0x2129a80();
   input += synapse0x2129ac0();
   input += synapse0x2129b00();
   input += synapse0x2129590();
   input += synapse0x21295d0();
   input += synapse0x2129c50();
   input += synapse0x2129c90();
   input += synapse0x2129cd0();
   input += synapse0x2129d10();
   input += synapse0x2129d50();
   input += synapse0x2129d90();
   return input;
}

double NNfunction_ss_cLdR::neuron0x2129400() {
   double input = input0x2129400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x2129dd0() {
   double input = -0.982241;
   input += synapse0x2129f60();
   input += synapse0x2132ff0();
   input += synapse0x2133030();
   input += synapse0x2133070();
   input += synapse0x21330b0();
   input += synapse0x21330f0();
   input += synapse0x2133130();
   input += synapse0x2133170();
   input += synapse0x21331b0();
   input += synapse0x21331f0();
   input += synapse0x2133230();
   input += synapse0x2133270();
   input += synapse0x21332b0();
   input += synapse0x21332f0();
   input += synapse0x2133330();
   input += synapse0x2133370();
   input += synapse0x2132e40();
   input += synapse0x2132e80();
   input += synapse0x21334c0();
   input += synapse0x2133500();
   input += synapse0x2133540();
   input += synapse0x2133580();
   input += synapse0x21335c0();
   input += synapse0x2133600();
   return input;
}

double NNfunction_ss_cLdR::neuron0x2129dd0() {
   double input = input0x2129dd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x2133640() {
   double input = -0.306557;
   input += synapse0x2133980();
   input += synapse0x21339c0();
   input += synapse0x2133a00();
   input += synapse0x2133a40();
   input += synapse0x2133a80();
   input += synapse0x2133ac0();
   input += synapse0x2133b00();
   input += synapse0x2133b40();
   input += synapse0x2133b80();
   input += synapse0x2133bc0();
   input += synapse0x2133c00();
   input += synapse0x2133c40();
   input += synapse0x2133c80();
   input += synapse0x2133cc0();
   input += synapse0x2133d00();
   input += synapse0x2133d40();
   input += synapse0x21337d0();
   input += synapse0x2133810();
   input += synapse0x2133e90();
   input += synapse0x2133ed0();
   input += synapse0x2133f10();
   input += synapse0x2133f50();
   input += synapse0x2133f90();
   input += synapse0x2133fd0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x2133640() {
   double input = input0x2133640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x2134010() {
   double input = 1.13512;
   input += synapse0x2134350();
   input += synapse0x2134390();
   input += synapse0x21343d0();
   input += synapse0x2134410();
   input += synapse0x2134450();
   input += synapse0x2134490();
   input += synapse0x21344d0();
   input += synapse0x2134510();
   input += synapse0x2134550();
   input += synapse0x2134590();
   input += synapse0x21345d0();
   input += synapse0x2134610();
   input += synapse0x2134650();
   input += synapse0x2134690();
   input += synapse0x21346d0();
   input += synapse0x2134710();
   input += synapse0x21341a0();
   input += synapse0x21341e0();
   input += synapse0x2134860();
   input += synapse0x21348a0();
   input += synapse0x21348e0();
   input += synapse0x2134920();
   input += synapse0x2134960();
   input += synapse0x21349a0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x2134010() {
   double input = input0x2134010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x21349e0() {
   double input = 0.948611;
   input += synapse0x2134d20();
   input += synapse0x2134d60();
   input += synapse0x2134da0();
   input += synapse0x2134de0();
   input += synapse0x2134e20();
   input += synapse0x2134e60();
   input += synapse0x2134ea0();
   input += synapse0x2134ee0();
   input += synapse0x2134f20();
   input += synapse0x2134f60();
   input += synapse0x2134fa0();
   input += synapse0x2134fe0();
   input += synapse0x2135020();
   input += synapse0x2135060();
   input += synapse0x21350a0();
   input += synapse0x21350e0();
   input += synapse0x2134b70();
   input += synapse0x2134bb0();
   input += synapse0x2135230();
   input += synapse0x2135270();
   input += synapse0x21352b0();
   input += synapse0x21352f0();
   input += synapse0x2135330();
   input += synapse0x2135370();
   return input;
}

double NNfunction_ss_cLdR::neuron0x21349e0() {
   double input = input0x21349e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x21353b0() {
   double input = -1.81669;
   input += synapse0x21356f0();
   input += synapse0x2135730();
   input += synapse0x2135770();
   input += synapse0x21357b0();
   input += synapse0x21357f0();
   input += synapse0x2135830();
   input += synapse0x2135870();
   input += synapse0x21358b0();
   input += synapse0x21358f0();
   input += synapse0x2135930();
   input += synapse0x2135970();
   input += synapse0x21359b0();
   input += synapse0x21359f0();
   input += synapse0x2135a30();
   input += synapse0x2135a70();
   input += synapse0x2135ab0();
   input += synapse0x2135540();
   input += synapse0x2135580();
   input += synapse0x2135c00();
   input += synapse0x2135c40();
   input += synapse0x2135c80();
   input += synapse0x2135cc0();
   input += synapse0x2135d00();
   input += synapse0x2135d40();
   return input;
}

double NNfunction_ss_cLdR::neuron0x21353b0() {
   double input = input0x21353b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x2135d80() {
   double input = -0.381276;
   input += synapse0x21360c0();
   input += synapse0x2136100();
   input += synapse0x2136140();
   input += synapse0x2136180();
   input += synapse0x21361c0();
   input += synapse0x2136200();
   input += synapse0x2136240();
   input += synapse0x2136280();
   input += synapse0x21362c0();
   input += synapse0x2136300();
   input += synapse0x2136340();
   input += synapse0x2136380();
   input += synapse0x21363c0();
   input += synapse0x2136400();
   input += synapse0x2136440();
   input += synapse0x2136480();
   input += synapse0x2135f10();
   input += synapse0x2135f50();
   input += synapse0x21365d0();
   input += synapse0x2136610();
   input += synapse0x2136650();
   input += synapse0x2136690();
   input += synapse0x21366d0();
   input += synapse0x2136710();
   return input;
}

double NNfunction_ss_cLdR::neuron0x2135d80() {
   double input = input0x2135d80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x2136750() {
   double input = 1.55754;
   input += synapse0x2136a90();
   input += synapse0x2136ad0();
   input += synapse0x2136b10();
   input += synapse0x2136b50();
   input += synapse0x2136b90();
   input += synapse0x2136bd0();
   input += synapse0x2136c10();
   input += synapse0x2136c50();
   input += synapse0x2136c90();
   input += synapse0x2136cd0();
   input += synapse0x2136d10();
   input += synapse0x2136d50();
   input += synapse0x2136d90();
   input += synapse0x2136dd0();
   input += synapse0x2136e10();
   input += synapse0x2136e50();
   input += synapse0x21368e0();
   input += synapse0x2136920();
   input += synapse0x2136fa0();
   input += synapse0x2136fe0();
   input += synapse0x2137020();
   input += synapse0x2137060();
   input += synapse0x21370a0();
   input += synapse0x21370e0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x2136750() {
   double input = input0x2136750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x2137120() {
   double input = -6.113;
   input += synapse0x2137460();
   input += synapse0x21374a0();
   input += synapse0x21374e0();
   input += synapse0x2137520();
   input += synapse0x2137560();
   input += synapse0x21375a0();
   input += synapse0x21375e0();
   input += synapse0x2137620();
   input += synapse0x2137660();
   input += synapse0x21376a0();
   input += synapse0x21376e0();
   input += synapse0x2137720();
   input += synapse0x2137760();
   input += synapse0x21377a0();
   input += synapse0x21377e0();
   input += synapse0x2137820();
   input += synapse0x21372b0();
   input += synapse0x21372f0();
   input += synapse0x2137970();
   input += synapse0x21379b0();
   input += synapse0x21379f0();
   input += synapse0x2137a30();
   input += synapse0x2137a70();
   input += synapse0x2137ab0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x2137120() {
   double input = input0x2137120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x2137af0() {
   double input = -1.06317;
   input += synapse0x2137e30();
   input += synapse0x212c400();
   input += synapse0x212c440();
   input += synapse0x212c480();
   input += synapse0x212c6d0();
   input += synapse0x212c710();
   input += synapse0x212c750();
   input += synapse0x212c9a0();
   input += synapse0x212c9e0();
   input += synapse0x212cc30();
   input += synapse0x212cc70();
   input += synapse0x212ccb0();
   input += synapse0x212cf00();
   input += synapse0x212cf40();
   input += synapse0x212d190();
   input += synapse0x212d1d0();
   input += synapse0x2137c80();
   input += synapse0x2137cc0();
   input += synapse0x212d320();
   input += synapse0x212d830();
   input += synapse0x212d870();
   input += synapse0x212d8b0();
   input += synapse0x212db00();
   input += synapse0x212db40();
   return input;
}

double NNfunction_ss_cLdR::neuron0x2137af0() {
   double input = input0x2137af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x212db80() {
   double input = 1.08863;
   input += synapse0x212d3f0();
   input += synapse0x212d430();
   input += synapse0x212d470();
   input += synapse0x212d4b0();
   input += synapse0x212de30();
   input += synapse0x213a180();
   input += synapse0x213a1c0();
   input += synapse0x213a200();
   input += synapse0x213a240();
   input += synapse0x213a280();
   input += synapse0x213a2c0();
   input += synapse0x213a300();
   input += synapse0x213a340();
   input += synapse0x213a380();
   input += synapse0x213a3c0();
   input += synapse0x213a400();
   input += synapse0x212dd10();
   input += synapse0x212dd50();
   input += synapse0x213a550();
   input += synapse0x213a590();
   input += synapse0x213a5d0();
   input += synapse0x213a610();
   input += synapse0x213a650();
   input += synapse0x213a690();
   return input;
}

double NNfunction_ss_cLdR::neuron0x212db80() {
   double input = input0x212db80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x213a6d0() {
   double input = 2.90733;
   input += synapse0x213aa10();
   input += synapse0x213aa50();
   input += synapse0x213aa90();
   input += synapse0x213aad0();
   input += synapse0x213ab10();
   input += synapse0x213ab50();
   input += synapse0x213ab90();
   input += synapse0x213abd0();
   input += synapse0x213ac10();
   input += synapse0x213ac50();
   input += synapse0x213ac90();
   input += synapse0x213acd0();
   input += synapse0x213ad10();
   input += synapse0x213ad50();
   input += synapse0x213ad90();
   input += synapse0x213add0();
   input += synapse0x213a860();
   input += synapse0x213a8a0();
   input += synapse0x213af20();
   input += synapse0x213af60();
   input += synapse0x213afa0();
   input += synapse0x213afe0();
   input += synapse0x213b020();
   input += synapse0x213b060();
   return input;
}

double NNfunction_ss_cLdR::neuron0x213a6d0() {
   double input = input0x213a6d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x213b0a0() {
   double input = -0.0295199;
   input += synapse0x213b3e0();
   input += synapse0x213b420();
   input += synapse0x213b460();
   input += synapse0x213b4a0();
   input += synapse0x213b4e0();
   input += synapse0x213b520();
   input += synapse0x213b560();
   input += synapse0x213b5a0();
   input += synapse0x213b5e0();
   input += synapse0x213b620();
   input += synapse0x213b660();
   input += synapse0x213b6a0();
   input += synapse0x213b6e0();
   input += synapse0x213b720();
   input += synapse0x213b760();
   input += synapse0x213b7a0();
   input += synapse0x213b230();
   input += synapse0x213b270();
   input += synapse0x213b8f0();
   input += synapse0x213b930();
   input += synapse0x213b970();
   input += synapse0x213b9b0();
   input += synapse0x213b9f0();
   input += synapse0x213ba30();
   return input;
}

double NNfunction_ss_cLdR::neuron0x213b0a0() {
   double input = input0x213b0a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x213ba70() {
   double input = -1.226;
   input += synapse0x213bdb0();
   input += synapse0x213bdf0();
   input += synapse0x213be30();
   input += synapse0x213be70();
   input += synapse0x213beb0();
   input += synapse0x213bef0();
   input += synapse0x213bf30();
   input += synapse0x213bf70();
   input += synapse0x213bfb0();
   input += synapse0x213bff0();
   input += synapse0x213c030();
   input += synapse0x213c070();
   input += synapse0x213c0b0();
   input += synapse0x213c0f0();
   input += synapse0x213c130();
   input += synapse0x213c170();
   input += synapse0x213bc00();
   input += synapse0x213bc40();
   input += synapse0x213c2c0();
   input += synapse0x213c300();
   input += synapse0x213c340();
   input += synapse0x213c380();
   input += synapse0x213c3c0();
   input += synapse0x213c400();
   return input;
}

double NNfunction_ss_cLdR::neuron0x213ba70() {
   double input = input0x213ba70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x213c440() {
   double input = -1.36905;
   input += synapse0x213c780();
   input += synapse0x213c7c0();
   input += synapse0x213c800();
   input += synapse0x213c840();
   input += synapse0x213c880();
   input += synapse0x213c8c0();
   input += synapse0x213c900();
   input += synapse0x213c940();
   input += synapse0x213c980();
   input += synapse0x213c9c0();
   input += synapse0x213ca00();
   input += synapse0x213ca40();
   input += synapse0x213ca80();
   input += synapse0x213cac0();
   input += synapse0x213cb00();
   input += synapse0x213cb40();
   input += synapse0x213c5d0();
   input += synapse0x213c610();
   input += synapse0x213cc90();
   input += synapse0x213ccd0();
   input += synapse0x213cd10();
   input += synapse0x213cd50();
   input += synapse0x213cd90();
   input += synapse0x213cdd0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x213c440() {
   double input = input0x213c440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x213ce10() {
   double input = 3.95728;
   input += synapse0x213d150();
   input += synapse0x213d190();
   input += synapse0x213d1d0();
   input += synapse0x213d210();
   input += synapse0x213d250();
   input += synapse0x213d290();
   input += synapse0x213d2d0();
   input += synapse0x213d310();
   input += synapse0x213d350();
   input += synapse0x213d390();
   input += synapse0x213d3d0();
   input += synapse0x213d410();
   input += synapse0x213d450();
   input += synapse0x213d490();
   input += synapse0x213d4d0();
   input += synapse0x213d510();
   input += synapse0x213cfa0();
   input += synapse0x213cfe0();
   input += synapse0x213d660();
   input += synapse0x213d6a0();
   input += synapse0x213d6e0();
   input += synapse0x213d720();
   input += synapse0x213d760();
   input += synapse0x213d7a0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x213ce10() {
   double input = input0x213ce10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x213d7e0() {
   double input = -0.989692;
   input += synapse0x213db20();
   input += synapse0x213db60();
   input += synapse0x213dba0();
   input += synapse0x213dbe0();
   input += synapse0x213dc20();
   input += synapse0x213dc60();
   input += synapse0x213dca0();
   input += synapse0x213dce0();
   input += synapse0x213dd20();
   input += synapse0x213dd60();
   input += synapse0x213dda0();
   input += synapse0x213dde0();
   input += synapse0x213de20();
   input += synapse0x213de60();
   input += synapse0x213dea0();
   input += synapse0x213dee0();
   input += synapse0x213d970();
   input += synapse0x213d9b0();
   input += synapse0x213e030();
   input += synapse0x213e070();
   input += synapse0x213e0b0();
   input += synapse0x213e0f0();
   input += synapse0x213e130();
   input += synapse0x213e170();
   return input;
}

double NNfunction_ss_cLdR::neuron0x213d7e0() {
   double input = input0x213d7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x213e1b0() {
   double input = -4.99965;
   input += synapse0x213e4f0();
   input += synapse0x213e530();
   input += synapse0x213e570();
   input += synapse0x213e5b0();
   input += synapse0x213e5f0();
   input += synapse0x213e630();
   input += synapse0x213e670();
   input += synapse0x213e6b0();
   input += synapse0x213e6f0();
   input += synapse0x213e730();
   input += synapse0x213e770();
   input += synapse0x213e7b0();
   input += synapse0x213e7f0();
   input += synapse0x213e830();
   input += synapse0x213e870();
   input += synapse0x213e8b0();
   input += synapse0x213e340();
   input += synapse0x213e380();
   input += synapse0x213ea00();
   input += synapse0x213ea40();
   input += synapse0x213ea80();
   input += synapse0x213eac0();
   input += synapse0x213eb00();
   input += synapse0x213eb40();
   return input;
}

double NNfunction_ss_cLdR::neuron0x213e1b0() {
   double input = input0x213e1b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x213eb80() {
   double input = -3.10826;
   input += synapse0x21275f0();
   input += synapse0x2127630();
   input += synapse0x2127670();
   input += synapse0x21276b0();
   input += synapse0x21276f0();
   input += synapse0x2127730();
   input += synapse0x2127770();
   input += synapse0x21277b0();
   input += synapse0x213f2d0();
   input += synapse0x213f310();
   input += synapse0x213f350();
   input += synapse0x213f390();
   input += synapse0x213f3d0();
   input += synapse0x213f410();
   input += synapse0x213f450();
   input += synapse0x213f490();
   input += synapse0x213ed10();
   input += synapse0x213ed50();
   input += synapse0x213f5e0();
   input += synapse0x213f620();
   input += synapse0x213f660();
   input += synapse0x213f6a0();
   input += synapse0x213f6e0();
   input += synapse0x213f720();
   return input;
}

double NNfunction_ss_cLdR::neuron0x213eb80() {
   double input = input0x213eb80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x213f760() {
   double input = 0.468695;
   input += synapse0x213faa0();
   input += synapse0x213fae0();
   input += synapse0x213fb20();
   input += synapse0x213fb60();
   input += synapse0x213fba0();
   input += synapse0x213fbe0();
   input += synapse0x213fc20();
   input += synapse0x213fc60();
   input += synapse0x213fca0();
   input += synapse0x213fce0();
   input += synapse0x213fd20();
   input += synapse0x213fd60();
   input += synapse0x213fda0();
   input += synapse0x213fde0();
   input += synapse0x213fe20();
   input += synapse0x213fe60();
   input += synapse0x213f8f0();
   input += synapse0x213f930();
   input += synapse0x213ffb0();
   input += synapse0x213fff0();
   input += synapse0x2140030();
   input += synapse0x2140070();
   input += synapse0x21400b0();
   input += synapse0x21400f0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x213f760() {
   double input = input0x213f760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x2140130() {
   double input = -2.08642;
   input += synapse0x2140470();
   input += synapse0x21404b0();
   input += synapse0x21404f0();
   input += synapse0x2140530();
   input += synapse0x2140570();
   input += synapse0x21405b0();
   input += synapse0x21405f0();
   input += synapse0x2140630();
   input += synapse0x2140670();
   input += synapse0x21406b0();
   input += synapse0x21406f0();
   input += synapse0x2140730();
   input += synapse0x2140770();
   input += synapse0x21407b0();
   input += synapse0x21407f0();
   input += synapse0x2140830();
   input += synapse0x21402c0();
   input += synapse0x2140300();
   input += synapse0x2130e30();
   input += synapse0x2130e70();
   input += synapse0x2130eb0();
   input += synapse0x2130ef0();
   input += synapse0x2130f30();
   input += synapse0x2130f70();
   return input;
}

double NNfunction_ss_cLdR::neuron0x2140130() {
   double input = input0x2140130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x2130fb0() {
   double input = 0.167252;
   input += synapse0x21312f0();
   input += synapse0x2131330();
   input += synapse0x2131370();
   input += synapse0x21313b0();
   input += synapse0x21313f0();
   input += synapse0x2131430();
   input += synapse0x2131470();
   input += synapse0x21314b0();
   input += synapse0x21314f0();
   input += synapse0x2131530();
   input += synapse0x2131570();
   input += synapse0x21315b0();
   input += synapse0x21315f0();
   input += synapse0x2131630();
   input += synapse0x2131670();
   input += synapse0x21316b0();
   input += synapse0x2131140();
   input += synapse0x2131180();
   input += synapse0x2131800();
   input += synapse0x2131840();
   input += synapse0x2131880();
   input += synapse0x21318c0();
   input += synapse0x2131900();
   input += synapse0x2131940();
   return input;
}

double NNfunction_ss_cLdR::neuron0x2130fb0() {
   double input = input0x2130fb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x2131980() {
   double input = -1.0684;
   input += synapse0x2131cc0();
   input += synapse0x2131d00();
   input += synapse0x2131d40();
   input += synapse0x2131d80();
   input += synapse0x2131dc0();
   input += synapse0x2131e00();
   input += synapse0x2131e40();
   input += synapse0x2131e80();
   input += synapse0x2131ec0();
   input += synapse0x2131f00();
   input += synapse0x2131f40();
   input += synapse0x2131f80();
   input += synapse0x2131fc0();
   input += synapse0x2132000();
   input += synapse0x2132040();
   input += synapse0x2132080();
   input += synapse0x2131b10();
   input += synapse0x2131b50();
   input += synapse0x21321d0();
   input += synapse0x2132210();
   input += synapse0x2132250();
   input += synapse0x2132290();
   input += synapse0x21322d0();
   input += synapse0x2132310();
   return input;
}

double NNfunction_ss_cLdR::neuron0x2131980() {
   double input = input0x2131980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x2132350() {
   double input = 0.012459;
   input += synapse0x2132690();
   input += synapse0x21326d0();
   input += synapse0x2132710();
   input += synapse0x2132750();
   input += synapse0x2132790();
   input += synapse0x21327d0();
   input += synapse0x2132810();
   input += synapse0x2132850();
   input += synapse0x2132890();
   input += synapse0x21328d0();
   input += synapse0x2132910();
   input += synapse0x2132950();
   input += synapse0x2132990();
   input += synapse0x21329d0();
   input += synapse0x2132a10();
   input += synapse0x2132a50();
   input += synapse0x21324e0();
   input += synapse0x2132520();
   input += synapse0x2132ba0();
   input += synapse0x2132be0();
   input += synapse0x2132c20();
   input += synapse0x2132c60();
   input += synapse0x2132ca0();
   input += synapse0x2132ce0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x2132350() {
   double input = input0x2132350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x2144990() {
   double input = -0.227218;
   input += synapse0x2144bb0();
   input += synapse0x2144bf0();
   input += synapse0x2144c30();
   input += synapse0x2144c70();
   input += synapse0x2144cb0();
   input += synapse0x2144cf0();
   input += synapse0x2144d30();
   input += synapse0x2144d70();
   input += synapse0x2144db0();
   input += synapse0x2144df0();
   input += synapse0x2144e30();
   input += synapse0x2144e70();
   input += synapse0x2144eb0();
   input += synapse0x2144ef0();
   input += synapse0x2144f30();
   input += synapse0x2144f70();
   input += synapse0x2132d20();
   input += synapse0x2132d60();
   input += synapse0x21450c0();
   input += synapse0x2145100();
   input += synapse0x2145140();
   input += synapse0x2145180();
   input += synapse0x21451c0();
   input += synapse0x2145200();
   return input;
}

double NNfunction_ss_cLdR::neuron0x2144990() {
   double input = input0x2144990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x2145240() {
   double input = 0.471794;
   input += synapse0x2145580();
   input += synapse0x21455c0();
   input += synapse0x2145600();
   input += synapse0x2145640();
   input += synapse0x2145680();
   input += synapse0x21456c0();
   input += synapse0x2145700();
   input += synapse0x2145740();
   input += synapse0x2145780();
   input += synapse0x21457c0();
   input += synapse0x2145800();
   input += synapse0x2145840();
   input += synapse0x2145880();
   input += synapse0x21458c0();
   input += synapse0x2145900();
   input += synapse0x2145940();
   input += synapse0x21453d0();
   input += synapse0x2145410();
   input += synapse0x2145a90();
   input += synapse0x2145ad0();
   input += synapse0x2145b10();
   input += synapse0x2145b50();
   input += synapse0x2145b90();
   input += synapse0x2145bd0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x2145240() {
   double input = input0x2145240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x2145c10() {
   double input = 0.632484;
   input += synapse0x2145f50();
   input += synapse0x2145f90();
   input += synapse0x2145fd0();
   input += synapse0x2146010();
   input += synapse0x2146050();
   input += synapse0x2146090();
   input += synapse0x21460d0();
   input += synapse0x2146110();
   input += synapse0x2146150();
   input += synapse0x2146190();
   input += synapse0x21461d0();
   input += synapse0x2146210();
   input += synapse0x2146250();
   input += synapse0x2146290();
   input += synapse0x21462d0();
   input += synapse0x2146310();
   input += synapse0x2145da0();
   input += synapse0x2145de0();
   input += synapse0x2146460();
   input += synapse0x21464a0();
   input += synapse0x21464e0();
   input += synapse0x2146520();
   input += synapse0x2146560();
   input += synapse0x21465a0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x2145c10() {
   double input = input0x2145c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x21465e0() {
   double input = -0.339191;
   input += synapse0x2146920();
   input += synapse0x2146960();
   input += synapse0x21469a0();
   input += synapse0x21469e0();
   input += synapse0x2146a20();
   input += synapse0x2146a60();
   input += synapse0x2146aa0();
   input += synapse0x2146ae0();
   input += synapse0x2146b20();
   input += synapse0x2146b60();
   input += synapse0x2146ba0();
   input += synapse0x2146be0();
   input += synapse0x2146c20();
   input += synapse0x2146c60();
   input += synapse0x2146ca0();
   input += synapse0x2146ce0();
   input += synapse0x2146770();
   input += synapse0x21467b0();
   input += synapse0x2146e30();
   input += synapse0x2146e70();
   input += synapse0x2146eb0();
   input += synapse0x2146ef0();
   input += synapse0x2146f30();
   input += synapse0x2146f70();
   return input;
}

double NNfunction_ss_cLdR::neuron0x21465e0() {
   double input = input0x21465e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x214d7e0() {
   double input = -0.664072;
   input += synapse0x2123510();
   input += synapse0x2123550();
   input += synapse0x2124a20();
   input += synapse0x2124a60();
   input += synapse0x21253f0();
   input += synapse0x2125430();
   input += synapse0x21261c0();
   input += synapse0x2126200();
   input += synapse0x2126b90();
   input += synapse0x2126bd0();
   input += synapse0x2127560();
   input += synapse0x21275a0();
   input += synapse0x2128040();
   input += synapse0x2128080();
   input += synapse0x2128a10();
   input += synapse0x2128a50();
   input += synapse0x2125af0();
   input += synapse0x2125b30();
   input += synapse0x212a5c0();
   input += synapse0x212a600();
   input += synapse0x212af90();
   input += synapse0x212afd0();
   input += synapse0x212b960();
   input += synapse0x212b9a0();
   input += synapse0x212c330();
   input += synapse0x212c370();
   input += synapse0x21204a0();
   input += synapse0x21204e0();
   input += synapse0x212e420();
   input += synapse0x212e460();
   input += synapse0x212edf0();
   input += synapse0x212ee30();
   input += synapse0x212f7c0();
   input += synapse0x212f800();
   input += synapse0x2130190();
   input += synapse0x21301d0();
   input += synapse0x2130b60();
   input += synapse0x2130ba0();
   input += synapse0x21296b0();
   input += synapse0x21296f0();
   input += synapse0x2132f60();
   input += synapse0x2132fa0();
   input += synapse0x21338f0();
   input += synapse0x2133930();
   input += synapse0x21342c0();
   input += synapse0x2134300();
   input += synapse0x2134c90();
   input += synapse0x2134cd0();
   input += synapse0x2135660();
   input += synapse0x21356a0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x214d7e0() {
   double input = input0x214d7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x214db80() {
   double input = -1.15763;
   input += synapse0x2137da0();
   input += synapse0x2137de0();
   input += synapse0x212d360();
   input += synapse0x212d3a0();
   input += synapse0x213a980();
   input += synapse0x213a9c0();
   input += synapse0x213b350();
   input += synapse0x213b390();
   input += synapse0x213bd20();
   input += synapse0x213bd60();
   input += synapse0x213c6f0();
   input += synapse0x213c730();
   input += synapse0x213d0c0();
   input += synapse0x213d100();
   input += synapse0x213da90();
   input += synapse0x213dad0();
   input += synapse0x213e460();
   input += synapse0x213e4a0();
   input += synapse0x213ee30();
   input += synapse0x213ee70();
   input += synapse0x213fa10();
   input += synapse0x213fa50();
   input += synapse0x21403e0();
   input += synapse0x2140420();
   input += synapse0x2131260();
   input += synapse0x21312a0();
   input += synapse0x2131c30();
   input += synapse0x2131c70();
   input += synapse0x2132600();
   input += synapse0x2132640();
   input += synapse0x2144b20();
   input += synapse0x2144b60();
   input += synapse0x21454f0();
   input += synapse0x2145530();
   input += synapse0x2145ec0();
   input += synapse0x2145f00();
   input += synapse0x2146890();
   input += synapse0x21468d0();
   input += synapse0x2122780();
   input += synapse0x21227c0();
   input += synapse0x2136030();
   input += synapse0x2136070();
   input += synapse0x2146fb0();
   input += synapse0x2146ff0();
   input += synapse0x2147030();
   input += synapse0x2147070();
   input += synapse0x214df20();
   input += synapse0x214df60();
   input += synapse0x214dfa0();
   input += synapse0x214dfe0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x214db80() {
   double input = input0x214db80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x214e020() {
   double input = -0.0918853;
   input += synapse0x214e360();
   input += synapse0x214e3a0();
   input += synapse0x214e3e0();
   input += synapse0x214e420();
   input += synapse0x214e460();
   input += synapse0x214e4a0();
   input += synapse0x214e4e0();
   input += synapse0x214e520();
   input += synapse0x214e560();
   input += synapse0x214e5a0();
   input += synapse0x214e5e0();
   input += synapse0x214e620();
   input += synapse0x214e660();
   input += synapse0x214e6a0();
   input += synapse0x214e6e0();
   input += synapse0x214e720();
   input += synapse0x214e1b0();
   input += synapse0x214e1f0();
   input += synapse0x214e870();
   input += synapse0x214e8b0();
   input += synapse0x214e8f0();
   input += synapse0x214e930();
   input += synapse0x214e970();
   input += synapse0x214e9b0();
   input += synapse0x214e9f0();
   input += synapse0x214ea30();
   input += synapse0x214ea70();
   input += synapse0x214eab0();
   input += synapse0x214eaf0();
   input += synapse0x214eb30();
   input += synapse0x214eb70();
   input += synapse0x214ebb0();
   input += synapse0x214e760();
   input += synapse0x214e7a0();
   input += synapse0x214e7e0();
   input += synapse0x214e820();
   input += synapse0x214ee00();
   input += synapse0x214ee40();
   input += synapse0x214ee80();
   input += synapse0x214eec0();
   input += synapse0x214ef00();
   input += synapse0x214ef40();
   input += synapse0x214ef80();
   input += synapse0x214efc0();
   input += synapse0x214f000();
   input += synapse0x214f040();
   input += synapse0x214f080();
   input += synapse0x214f0c0();
   input += synapse0x214f100();
   input += synapse0x214f140();
   return input;
}

double NNfunction_ss_cLdR::neuron0x214e020() {
   double input = input0x214e020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x214f180() {
   double input = -0.696817;
   input += synapse0x214f4c0();
   input += synapse0x214f500();
   input += synapse0x214f540();
   input += synapse0x214f580();
   input += synapse0x214f5c0();
   input += synapse0x214f600();
   input += synapse0x214f640();
   input += synapse0x214f680();
   input += synapse0x214f6c0();
   input += synapse0x214f700();
   input += synapse0x214f740();
   input += synapse0x214f780();
   input += synapse0x214f7c0();
   input += synapse0x214f800();
   input += synapse0x214f840();
   input += synapse0x214f880();
   input += synapse0x214f310();
   input += synapse0x214f350();
   input += synapse0x214f9d0();
   input += synapse0x214fa10();
   input += synapse0x214fa50();
   input += synapse0x214fa90();
   input += synapse0x214fad0();
   input += synapse0x214fb10();
   input += synapse0x214fb50();
   input += synapse0x214fb90();
   input += synapse0x214fbd0();
   input += synapse0x214fc10();
   input += synapse0x214fc50();
   input += synapse0x214fc90();
   input += synapse0x214fcd0();
   input += synapse0x214fd10();
   input += synapse0x214f8c0();
   input += synapse0x214f900();
   input += synapse0x214f940();
   input += synapse0x214f980();
   input += synapse0x214ff60();
   input += synapse0x214ffa0();
   input += synapse0x214ffe0();
   input += synapse0x2150020();
   input += synapse0x2150060();
   input += synapse0x21500a0();
   input += synapse0x21500e0();
   input += synapse0x2150120();
   input += synapse0x2150160();
   input += synapse0x21501a0();
   input += synapse0x21501e0();
   input += synapse0x2150220();
   input += synapse0x2150260();
   input += synapse0x21502a0();
   return input;
}

double NNfunction_ss_cLdR::neuron0x214f180() {
   double input = input0x214f180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x21502e0() {
   double input = -0.452586;
   input += synapse0x2150620();
   input += synapse0x2150660();
   input += synapse0x21506a0();
   input += synapse0x21506e0();
   input += synapse0x2150720();
   input += synapse0x2150760();
   input += synapse0x21507a0();
   input += synapse0x21507e0();
   input += synapse0x2150820();
   input += synapse0x2150860();
   input += synapse0x21508a0();
   input += synapse0x21508e0();
   input += synapse0x2150920();
   input += synapse0x2150960();
   input += synapse0x21509a0();
   input += synapse0x21509e0();
   input += synapse0x2150470();
   input += synapse0x21504b0();
   input += synapse0x2150b30();
   input += synapse0x2150b70();
   input += synapse0x2150bb0();
   input += synapse0x2150bf0();
   input += synapse0x2150c30();
   input += synapse0x2150c70();
   input += synapse0x2150cb0();
   input += synapse0x2150cf0();
   input += synapse0x2150d30();
   input += synapse0x2150d70();
   input += synapse0x2150db0();
   input += synapse0x2150df0();
   input += synapse0x2150e30();
   input += synapse0x2150e70();
   input += synapse0x2150a20();
   input += synapse0x2150a60();
   input += synapse0x2150aa0();
   input += synapse0x2150ae0();
   input += synapse0x21510c0();
   input += synapse0x2151100();
   input += synapse0x2151140();
   input += synapse0x2151180();
   input += synapse0x21511c0();
   input += synapse0x2151200();
   input += synapse0x2151240();
   input += synapse0x2151280();
   input += synapse0x21512c0();
   input += synapse0x2151300();
   input += synapse0x2151340();
   input += synapse0x2151380();
   input += synapse0x21513c0();
   input += synapse0x2151400();
   return input;
}

double NNfunction_ss_cLdR::neuron0x21502e0() {
   double input = input0x21502e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdR::input0x2151440() {
   double input = 5.13078;
   input += synapse0x2122520();
   input += synapse0x2151660();
   input += synapse0x21516a0();
   input += synapse0x21516e0();
   input += synapse0x2151720();
   return input;
}

double NNfunction_ss_cLdR::neuron0x2151440() {
   double input = input0x2151440();
   return (input * 1)+0;
}

double NNfunction_ss_cLdR::synapse0x1edd370() {
   return (neuron0x211d500()*0.239428);
}

double NNfunction_ss_cLdR::synapse0x211d3c0() {
   return (neuron0x211d840()*0.0822614);
}

double NNfunction_ss_cLdR::synapse0x211d400() {
   return (neuron0x211db80()*-0.767189);
}

double NNfunction_ss_cLdR::synapse0x2122810() {
   return (neuron0x211dec0()*0.356765);
}

double NNfunction_ss_cLdR::synapse0x2122850() {
   return (neuron0x211e200()*0.383058);
}

double NNfunction_ss_cLdR::synapse0x2122890() {
   return (neuron0x211e540()*-0.140626);
}

double NNfunction_ss_cLdR::synapse0x21228d0() {
   return (neuron0x211e880()*-0.0497204);
}

double NNfunction_ss_cLdR::synapse0x2122910() {
   return (neuron0x211ebc0()*0.216908);
}

double NNfunction_ss_cLdR::synapse0x2122950() {
   return (neuron0x211ef00()*-0.148532);
}

double NNfunction_ss_cLdR::synapse0x2122990() {
   return (neuron0x211f240()*0.226064);
}

double NNfunction_ss_cLdR::synapse0x21229d0() {
   return (neuron0x211f580()*-0.138909);
}

double NNfunction_ss_cLdR::synapse0x2122a10() {
   return (neuron0x211f8c0()*0.149688);
}

double NNfunction_ss_cLdR::synapse0x2122a50() {
   return (neuron0x211fc00()*-0.240436);
}

double NNfunction_ss_cLdR::synapse0x2122a90() {
   return (neuron0x211ff40()*0.0848129);
}

double NNfunction_ss_cLdR::synapse0x2122ad0() {
   return (neuron0x2120280()*-0.225916);
}

double NNfunction_ss_cLdR::synapse0x2122b10() {
   return (neuron0x21205c0()*0.499367);
}

double NNfunction_ss_cLdR::synapse0x211d330() {
   return (neuron0x2120900()*-0.323114);
}

double NNfunction_ss_cLdR::synapse0x211d370() {
   return (neuron0x2120e60()*-0.508171);
}

double NNfunction_ss_cLdR::synapse0x1ecec70() {
   return (neuron0x2121080()*0.327576);
}

double NNfunction_ss_cLdR::synapse0x1ececb0() {
   return (neuron0x21213c0()*0.576796);
}

double NNfunction_ss_cLdR::synapse0x2122d70() {
   return (neuron0x2121700()*-0.468973);
}

double NNfunction_ss_cLdR::synapse0x2122db0() {
   return (neuron0x2121a40()*-0.70079);
}

double NNfunction_ss_cLdR::synapse0x2122df0() {
   return (neuron0x2121d80()*0.0239558);
}

double NNfunction_ss_cLdR::synapse0x2122e30() {
   return (neuron0x21220c0()*-0.400747);
}

double NNfunction_ss_cLdR::synapse0x21231b0() {
   return (neuron0x211d500()*-0.352987);
}

double NNfunction_ss_cLdR::synapse0x21231f0() {
   return (neuron0x211d840()*-0.0186469);
}

double NNfunction_ss_cLdR::synapse0x2123230() {
   return (neuron0x211db80()*-0.234333);
}

double NNfunction_ss_cLdR::synapse0x2123270() {
   return (neuron0x211dec0()*0.783853);
}

double NNfunction_ss_cLdR::synapse0x21232b0() {
   return (neuron0x211e200()*0.00481445);
}

double NNfunction_ss_cLdR::synapse0x21232f0() {
   return (neuron0x211e540()*0.179778);
}

double NNfunction_ss_cLdR::synapse0x2123330() {
   return (neuron0x211e880()*-0.282509);
}

double NNfunction_ss_cLdR::synapse0x2123370() {
   return (neuron0x211ebc0()*-0.116857);
}

double NNfunction_ss_cLdR::synapse0x21233b0() {
   return (neuron0x211ef00()*0.163158);
}

double NNfunction_ss_cLdR::synapse0x2122c60() {
   return (neuron0x211f240()*0.148201);
}

double NNfunction_ss_cLdR::synapse0x2122ca0() {
   return (neuron0x211f580()*1.59278);
}

double NNfunction_ss_cLdR::synapse0x2122ce0() {
   return (neuron0x211f8c0()*0.0541651);
}

double NNfunction_ss_cLdR::synapse0x2122d20() {
   return (neuron0x211fc00()*-0.536496);
}

double NNfunction_ss_cLdR::synapse0x2123600() {
   return (neuron0x211ff40()*-0.468746);
}

double NNfunction_ss_cLdR::synapse0x2123640() {
   return (neuron0x2120280()*-0.136147);
}

double NNfunction_ss_cLdR::synapse0x2123680() {
   return (neuron0x21205c0()*0.0215222);
}

double NNfunction_ss_cLdR::synapse0x2123000() {
   return (neuron0x2120900()*-0.387576);
}

double NNfunction_ss_cLdR::synapse0x2123040() {
   return (neuron0x2120e60()*-0.0734763);
}

double NNfunction_ss_cLdR::synapse0x21237d0() {
   return (neuron0x2121080()*-0.26211);
}

double NNfunction_ss_cLdR::synapse0x2123810() {
   return (neuron0x21213c0()*0.454735);
}

double NNfunction_ss_cLdR::synapse0x2123850() {
   return (neuron0x2121700()*0.0399179);
}

double NNfunction_ss_cLdR::synapse0x2123890() {
   return (neuron0x2121a40()*0.438747);
}

double NNfunction_ss_cLdR::synapse0x21238d0() {
   return (neuron0x2121d80()*0.237545);
}

double NNfunction_ss_cLdR::synapse0x2123910() {
   return (neuron0x21220c0()*0.210374);
}

double NNfunction_ss_cLdR::synapse0x2123c90() {
   return (neuron0x211d500()*-0.061528);
}

double NNfunction_ss_cLdR::synapse0x2123cd0() {
   return (neuron0x211d840()*0.0486195);
}

double NNfunction_ss_cLdR::synapse0x2123d10() {
   return (neuron0x211db80()*-0.213543);
}

double NNfunction_ss_cLdR::synapse0x2123d50() {
   return (neuron0x211dec0()*-0.996637);
}

double NNfunction_ss_cLdR::synapse0x2123d90() {
   return (neuron0x211e200()*-0.0267332);
}

double NNfunction_ss_cLdR::synapse0x2123dd0() {
   return (neuron0x211e540()*-0.0118601);
}

double NNfunction_ss_cLdR::synapse0x2123e10() {
   return (neuron0x211e880()*0.170375);
}

double NNfunction_ss_cLdR::synapse0x2123e50() {
   return (neuron0x211ebc0()*0.0392216);
}

double NNfunction_ss_cLdR::synapse0x2123e90() {
   return (neuron0x211ef00()*0.047403);
}

double NNfunction_ss_cLdR::synapse0x2123ed0() {
   return (neuron0x211f240()*-0.00414979);
}

double NNfunction_ss_cLdR::synapse0x2123f10() {
   return (neuron0x211f580()*-0.0809318);
}

double NNfunction_ss_cLdR::synapse0x2123f50() {
   return (neuron0x211f8c0()*-0.184496);
}

double NNfunction_ss_cLdR::synapse0x2123f90() {
   return (neuron0x211fc00()*-0.510712);
}

double NNfunction_ss_cLdR::synapse0x2123fd0() {
   return (neuron0x211ff40()*0.00867621);
}

double NNfunction_ss_cLdR::synapse0x2124010() {
   return (neuron0x2120280()*0.0681413);
}

double NNfunction_ss_cLdR::synapse0x2124050() {
   return (neuron0x21205c0()*-0.214485);
}

double NNfunction_ss_cLdR::synapse0x2123ae0() {
   return (neuron0x2120900()*-0.00156699);
}

double NNfunction_ss_cLdR::synapse0x2123b20() {
   return (neuron0x2120e60()*-0.904592);
}

double NNfunction_ss_cLdR::synapse0x1edca60() {
   return (neuron0x2121080()*-0.169831);
}

double NNfunction_ss_cLdR::synapse0x1edcaa0() {
   return (neuron0x21213c0()*-0.0546045);
}

double NNfunction_ss_cLdR::synapse0x210c590() {
   return (neuron0x2121700()*0.0574601);
}

double NNfunction_ss_cLdR::synapse0x210c5d0() {
   return (neuron0x2121a40()*0.0279829);
}

double NNfunction_ss_cLdR::synapse0x210c610() {
   return (neuron0x2121d80()*-0.05184);
}

double NNfunction_ss_cLdR::synapse0x211d440() {
   return (neuron0x21220c0()*0.0612125);
}

double NNfunction_ss_cLdR::synapse0x21235a0() {
   return (neuron0x211d500()*0.210919);
}

double NNfunction_ss_cLdR::synapse0x211d480() {
   return (neuron0x211d840()*0.622782);
}

double NNfunction_ss_cLdR::synapse0x211d4c0() {
   return (neuron0x211db80()*-0.220227);
}

double NNfunction_ss_cLdR::synapse0x21241a0() {
   return (neuron0x211dec0()*0.0924633);
}

double NNfunction_ss_cLdR::synapse0x21241e0() {
   return (neuron0x211e200()*-0.412718);
}

double NNfunction_ss_cLdR::synapse0x2124220() {
   return (neuron0x211e540()*-0.269599);
}

double NNfunction_ss_cLdR::synapse0x2124260() {
   return (neuron0x211e880()*-0.283289);
}

double NNfunction_ss_cLdR::synapse0x21242a0() {
   return (neuron0x211ebc0()*-0.409106);
}

double NNfunction_ss_cLdR::synapse0x21242e0() {
   return (neuron0x211ef00()*0.400432);
}

double NNfunction_ss_cLdR::synapse0x2124320() {
   return (neuron0x211f240()*0.582358);
}

double NNfunction_ss_cLdR::synapse0x2124360() {
   return (neuron0x211f580()*0.13227);
}

double NNfunction_ss_cLdR::synapse0x21243a0() {
   return (neuron0x211f8c0()*-0.0591474);
}

double NNfunction_ss_cLdR::synapse0x21243e0() {
   return (neuron0x211fc00()*0.526515);
}

double NNfunction_ss_cLdR::synapse0x2124420() {
   return (neuron0x211ff40()*0.352219);
}

double NNfunction_ss_cLdR::synapse0x2124460() {
   return (neuron0x2120280()*-0.0921877);
}

double NNfunction_ss_cLdR::synapse0x21244a0() {
   return (neuron0x21205c0()*-0.146401);
}

double NNfunction_ss_cLdR::synapse0x21233f0() {
   return (neuron0x2120900()*0.106146);
}

double NNfunction_ss_cLdR::synapse0x2123430() {
   return (neuron0x2120e60()*0.510964);
}

double NNfunction_ss_cLdR::synapse0x21245f0() {
   return (neuron0x2121080()*0.854324);
}

double NNfunction_ss_cLdR::synapse0x2124630() {
   return (neuron0x21213c0()*0.154341);
}

double NNfunction_ss_cLdR::synapse0x2124670() {
   return (neuron0x2121700()*0.234399);
}

double NNfunction_ss_cLdR::synapse0x21246b0() {
   return (neuron0x2121a40()*-0.0340097);
}

double NNfunction_ss_cLdR::synapse0x21246f0() {
   return (neuron0x2121d80()*-0.127481);
}

double NNfunction_ss_cLdR::synapse0x2124730() {
   return (neuron0x21220c0()*0.329401);
}

double NNfunction_ss_cLdR::synapse0x2124ab0() {
   return (neuron0x211d500()*0.031148);
}

double NNfunction_ss_cLdR::synapse0x2124af0() {
   return (neuron0x211d840()*-0.0745543);
}

double NNfunction_ss_cLdR::synapse0x2124b30() {
   return (neuron0x211db80()*-0.0123004);
}

double NNfunction_ss_cLdR::synapse0x2124b70() {
   return (neuron0x211dec0()*3.70973);
}

double NNfunction_ss_cLdR::synapse0x2124bb0() {
   return (neuron0x211e200()*0.0876824);
}

double NNfunction_ss_cLdR::synapse0x2124bf0() {
   return (neuron0x211e540()*0.00526881);
}

double NNfunction_ss_cLdR::synapse0x2124c30() {
   return (neuron0x211e880()*-0.00983932);
}

double NNfunction_ss_cLdR::synapse0x2124c70() {
   return (neuron0x211ebc0()*0.0638474);
}

double NNfunction_ss_cLdR::synapse0x2124cb0() {
   return (neuron0x211ef00()*-0.0217904);
}

double NNfunction_ss_cLdR::synapse0x2124cf0() {
   return (neuron0x211f240()*0.0264703);
}

double NNfunction_ss_cLdR::synapse0x2124d30() {
   return (neuron0x211f580()*-0.0106142);
}

double NNfunction_ss_cLdR::synapse0x2124d70() {
   return (neuron0x211f8c0()*0.0646397);
}

double NNfunction_ss_cLdR::synapse0x2124db0() {
   return (neuron0x211fc00()*0.740451);
}

double NNfunction_ss_cLdR::synapse0x2124df0() {
   return (neuron0x211ff40()*0.027658);
}

double NNfunction_ss_cLdR::synapse0x2124e30() {
   return (neuron0x2120280()*-0.0564014);
}

double NNfunction_ss_cLdR::synapse0x2124e70() {
   return (neuron0x21205c0()*0.091069);
}

double NNfunction_ss_cLdR::synapse0x2124900() {
   return (neuron0x2120900()*-0.0189304);
}

double NNfunction_ss_cLdR::synapse0x2124940() {
   return (neuron0x2120e60()*0.748659);
}

double NNfunction_ss_cLdR::synapse0x2124fc0() {
   return (neuron0x2121080()*0.0294749);
}

double NNfunction_ss_cLdR::synapse0x2125000() {
   return (neuron0x21213c0()*0.0278686);
}

double NNfunction_ss_cLdR::synapse0x2125040() {
   return (neuron0x2121700()*0.0308034);
}

double NNfunction_ss_cLdR::synapse0x2125080() {
   return (neuron0x2121a40()*-0.0325946);
}

double NNfunction_ss_cLdR::synapse0x21250c0() {
   return (neuron0x2121d80()*0.0477319);
}

double NNfunction_ss_cLdR::synapse0x2125100() {
   return (neuron0x21220c0()*0.0246861);
}

double NNfunction_ss_cLdR::synapse0x2125480() {
   return (neuron0x211d500()*-0.0248342);
}

double NNfunction_ss_cLdR::synapse0x21254c0() {
   return (neuron0x211d840()*-0.00560087);
}

double NNfunction_ss_cLdR::synapse0x2125500() {
   return (neuron0x211db80()*0.0188578);
}

double NNfunction_ss_cLdR::synapse0x2125540() {
   return (neuron0x211dec0()*-0.128478);
}

double NNfunction_ss_cLdR::synapse0x2125580() {
   return (neuron0x211e200()*-0.019828);
}

double NNfunction_ss_cLdR::synapse0x21255c0() {
   return (neuron0x211e540()*0.00431311);
}

double NNfunction_ss_cLdR::synapse0x2125600() {
   return (neuron0x211e880()*-0.0108322);
}

double NNfunction_ss_cLdR::synapse0x2125640() {
   return (neuron0x211ebc0()*9.72614e-05);
}

double NNfunction_ss_cLdR::synapse0x2125680() {
   return (neuron0x211ef00()*-0.0080935);
}

double NNfunction_ss_cLdR::synapse0x1edcdd0() {
   return (neuron0x211f240()*0.00210749);
}

double NNfunction_ss_cLdR::synapse0x1edce10() {
   return (neuron0x211f580()*0.00226267);
}

double NNfunction_ss_cLdR::synapse0x1edce50() {
   return (neuron0x211f8c0()*0.00899227);
}

double NNfunction_ss_cLdR::synapse0x1edce90() {
   return (neuron0x211fc00()*1.12258);
}

double NNfunction_ss_cLdR::synapse0x1edced0() {
   return (neuron0x211ff40()*0.00805229);
}

double NNfunction_ss_cLdR::synapse0x1edcf10() {
   return (neuron0x2120280()*0.00457997);
}

double NNfunction_ss_cLdR::synapse0x1edcf50() {
   return (neuron0x21205c0()*0.011918);
}

double NNfunction_ss_cLdR::synapse0x21252d0() {
   return (neuron0x2120900()*0.000650579);
}

double NNfunction_ss_cLdR::synapse0x2125310() {
   return (neuron0x2120e60()*-0.965336);
}

double NNfunction_ss_cLdR::synapse0x1edd0a0() {
   return (neuron0x2121080()*0.0152946);
}

double NNfunction_ss_cLdR::synapse0x1edd0e0() {
   return (neuron0x21213c0()*0.00661302);
}

double NNfunction_ss_cLdR::synapse0x1edd120() {
   return (neuron0x2121700()*0.0210938);
}

double NNfunction_ss_cLdR::synapse0x1edd160() {
   return (neuron0x2121a40()*0.00327706);
}

double NNfunction_ss_cLdR::synapse0x1edd1a0() {
   return (neuron0x2121d80()*0.0272745);
}

double NNfunction_ss_cLdR::synapse0x2125ed0() {
   return (neuron0x21220c0()*0.0107227);
}

double NNfunction_ss_cLdR::synapse0x2126250() {
   return (neuron0x211d500()*0.0156871);
}

double NNfunction_ss_cLdR::synapse0x2126290() {
   return (neuron0x211d840()*0.0232177);
}

double NNfunction_ss_cLdR::synapse0x21262d0() {
   return (neuron0x211db80()*0.00622995);
}

double NNfunction_ss_cLdR::synapse0x2126310() {
   return (neuron0x211dec0()*-4.03963);
}

double NNfunction_ss_cLdR::synapse0x2126350() {
   return (neuron0x211e200()*-0.0264213);
}

double NNfunction_ss_cLdR::synapse0x2126390() {
   return (neuron0x211e540()*-0.0115005);
}

double NNfunction_ss_cLdR::synapse0x21263d0() {
   return (neuron0x211e880()*-0.00609635);
}

double NNfunction_ss_cLdR::synapse0x2126410() {
   return (neuron0x211ebc0()*-0.0350271);
}

double NNfunction_ss_cLdR::synapse0x2126450() {
   return (neuron0x211ef00()*0.0107704);
}

double NNfunction_ss_cLdR::synapse0x2126490() {
   return (neuron0x211f240()*-0.00798861);
}

double NNfunction_ss_cLdR::synapse0x21264d0() {
   return (neuron0x211f580()*0.0082986);
}

double NNfunction_ss_cLdR::synapse0x2126510() {
   return (neuron0x211f8c0()*-0.0251625);
}

double NNfunction_ss_cLdR::synapse0x2126550() {
   return (neuron0x211fc00()*0.0761318);
}

double NNfunction_ss_cLdR::synapse0x2126590() {
   return (neuron0x211ff40()*-0.0233308);
}

double NNfunction_ss_cLdR::synapse0x21265d0() {
   return (neuron0x2120280()*0.00719386);
}

double NNfunction_ss_cLdR::synapse0x2126610() {
   return (neuron0x21205c0()*-0.0144715);
}

double NNfunction_ss_cLdR::synapse0x21260a0() {
   return (neuron0x2120900()*-0.00187361);
}

double NNfunction_ss_cLdR::synapse0x21260e0() {
   return (neuron0x2120e60()*0.0544636);
}

double NNfunction_ss_cLdR::synapse0x2126760() {
   return (neuron0x2121080()*-0.0141184);
}

double NNfunction_ss_cLdR::synapse0x21267a0() {
   return (neuron0x21213c0()*-0.00750715);
}

double NNfunction_ss_cLdR::synapse0x21267e0() {
   return (neuron0x2121700()*-0.000589304);
}

double NNfunction_ss_cLdR::synapse0x2126820() {
   return (neuron0x2121a40()*0.0167787);
}

double NNfunction_ss_cLdR::synapse0x2126860() {
   return (neuron0x2121d80()*-0.000540652);
}

double NNfunction_ss_cLdR::synapse0x21268a0() {
   return (neuron0x21220c0()*-0.0175436);
}

double NNfunction_ss_cLdR::synapse0x2126c20() {
   return (neuron0x211d500()*0.0479435);
}

double NNfunction_ss_cLdR::synapse0x2126c60() {
   return (neuron0x211d840()*0.000502026);
}

double NNfunction_ss_cLdR::synapse0x2126ca0() {
   return (neuron0x211db80()*0.0630617);
}

double NNfunction_ss_cLdR::synapse0x2126ce0() {
   return (neuron0x211dec0()*1.15369);
}

double NNfunction_ss_cLdR::synapse0x2126d20() {
   return (neuron0x211e200()*-0.00198325);
}

double NNfunction_ss_cLdR::synapse0x2126d60() {
   return (neuron0x211e540()*-0.0217268);
}

double NNfunction_ss_cLdR::synapse0x2126da0() {
   return (neuron0x211e880()*-0.0104437);
}

double NNfunction_ss_cLdR::synapse0x2126de0() {
   return (neuron0x211ebc0()*0.0016503);
}

double NNfunction_ss_cLdR::synapse0x2126e20() {
   return (neuron0x211ef00()*0.00436135);
}

double NNfunction_ss_cLdR::synapse0x2126e60() {
   return (neuron0x211f240()*-0.0188026);
}

double NNfunction_ss_cLdR::synapse0x2126ea0() {
   return (neuron0x211f580()*-0.0157199);
}

double NNfunction_ss_cLdR::synapse0x2126ee0() {
   return (neuron0x211f8c0()*-0.00707104);
}

double NNfunction_ss_cLdR::synapse0x2126f20() {
   return (neuron0x211fc00()*-0.525236);
}

double NNfunction_ss_cLdR::synapse0x2126f60() {
   return (neuron0x211ff40()*-0.0562918);
}

double NNfunction_ss_cLdR::synapse0x2126fa0() {
   return (neuron0x2120280()*0.0109175);
}

double NNfunction_ss_cLdR::synapse0x2126fe0() {
   return (neuron0x21205c0()*0.0335296);
}

double NNfunction_ss_cLdR::synapse0x2126a70() {
   return (neuron0x2120900()*-0.0332112);
}

double NNfunction_ss_cLdR::synapse0x2126ab0() {
   return (neuron0x2120e60()*-0.415726);
}

double NNfunction_ss_cLdR::synapse0x2127130() {
   return (neuron0x2121080()*-0.00781514);
}

double NNfunction_ss_cLdR::synapse0x2127170() {
   return (neuron0x21213c0()*0.0176088);
}

double NNfunction_ss_cLdR::synapse0x21271b0() {
   return (neuron0x2121700()*-0.0241109);
}

double NNfunction_ss_cLdR::synapse0x21271f0() {
   return (neuron0x2121a40()*-0.0245745);
}

double NNfunction_ss_cLdR::synapse0x2127230() {
   return (neuron0x2121d80()*-0.00899285);
}

double NNfunction_ss_cLdR::synapse0x2127270() {
   return (neuron0x21220c0()*-0.0224435);
}

double NNfunction_ss_cLdR::synapse0x2120d50() {
   return (neuron0x211d500()*0.514443);
}

double NNfunction_ss_cLdR::synapse0x2120d90() {
   return (neuron0x211d840()*-0.446932);
}

double NNfunction_ss_cLdR::synapse0x2120dd0() {
   return (neuron0x211db80()*0.0407169);
}

double NNfunction_ss_cLdR::synapse0x2120e10() {
   return (neuron0x211dec0()*0.256509);
}

double NNfunction_ss_cLdR::synapse0x2127800() {
   return (neuron0x211e200()*-0.183415);
}

double NNfunction_ss_cLdR::synapse0x2127840() {
   return (neuron0x211e540()*0.573419);
}

double NNfunction_ss_cLdR::synapse0x2127880() {
   return (neuron0x211e880()*-0.101553);
}

double NNfunction_ss_cLdR::synapse0x21278c0() {
   return (neuron0x211ebc0()*-0.0709796);
}

double NNfunction_ss_cLdR::synapse0x2127900() {
   return (neuron0x211ef00()*-1.27784);
}

double NNfunction_ss_cLdR::synapse0x2127940() {
   return (neuron0x211f240()*-0.505815);
}

double NNfunction_ss_cLdR::synapse0x2127980() {
   return (neuron0x211f580()*-0.901971);
}

double NNfunction_ss_cLdR::synapse0x21279c0() {
   return (neuron0x211f8c0()*-0.323616);
}

double NNfunction_ss_cLdR::synapse0x2127a00() {
   return (neuron0x211fc00()*-0.461395);
}

double NNfunction_ss_cLdR::synapse0x2127a40() {
   return (neuron0x211ff40()*-0.804681);
}

double NNfunction_ss_cLdR::synapse0x2127a80() {
   return (neuron0x2120280()*-0.0907311);
}

double NNfunction_ss_cLdR::synapse0x2127ac0() {
   return (neuron0x21205c0()*-0.330545);
}

double NNfunction_ss_cLdR::synapse0x2127440() {
   return (neuron0x2120900()*0.179897);
}

double NNfunction_ss_cLdR::synapse0x2127480() {
   return (neuron0x2120e60()*0.822808);
}

double NNfunction_ss_cLdR::synapse0x2127c10() {
   return (neuron0x2121080()*0.219883);
}

double NNfunction_ss_cLdR::synapse0x2127c50() {
   return (neuron0x21213c0()*-0.0229621);
}

double NNfunction_ss_cLdR::synapse0x2127c90() {
   return (neuron0x2121700()*0.111762);
}

double NNfunction_ss_cLdR::synapse0x2127cd0() {
   return (neuron0x2121a40()*-0.0886007);
}

double NNfunction_ss_cLdR::synapse0x2127d10() {
   return (neuron0x2121d80()*-0.146849);
}

double NNfunction_ss_cLdR::synapse0x2127d50() {
   return (neuron0x21220c0()*0.113802);
}

double NNfunction_ss_cLdR::synapse0x21280d0() {
   return (neuron0x211d500()*-0.266841);
}

double NNfunction_ss_cLdR::synapse0x2128110() {
   return (neuron0x211d840()*0.414168);
}

double NNfunction_ss_cLdR::synapse0x2128150() {
   return (neuron0x211db80()*0.208434);
}

double NNfunction_ss_cLdR::synapse0x2128190() {
   return (neuron0x211dec0()*-1.55055);
}

double NNfunction_ss_cLdR::synapse0x21281d0() {
   return (neuron0x211e200()*-0.41578);
}

double NNfunction_ss_cLdR::synapse0x2128210() {
   return (neuron0x211e540()*-0.0522176);
}

double NNfunction_ss_cLdR::synapse0x2128250() {
   return (neuron0x211e880()*-0.300742);
}

double NNfunction_ss_cLdR::synapse0x2128290() {
   return (neuron0x211ebc0()*0.173607);
}

double NNfunction_ss_cLdR::synapse0x21282d0() {
   return (neuron0x211ef00()*0.111066);
}

double NNfunction_ss_cLdR::synapse0x2128310() {
   return (neuron0x211f240()*0.0011387);
}

double NNfunction_ss_cLdR::synapse0x2128350() {
   return (neuron0x211f580()*0.194535);
}

double NNfunction_ss_cLdR::synapse0x2128390() {
   return (neuron0x211f8c0()*-0.0973119);
}

double NNfunction_ss_cLdR::synapse0x21283d0() {
   return (neuron0x211fc00()*-0.107699);
}

double NNfunction_ss_cLdR::synapse0x2128410() {
   return (neuron0x211ff40()*-0.00389613);
}

double NNfunction_ss_cLdR::synapse0x2128450() {
   return (neuron0x2120280()*0.055705);
}

double NNfunction_ss_cLdR::synapse0x2128490() {
   return (neuron0x21205c0()*0.100469);
}

double NNfunction_ss_cLdR::synapse0x2127f20() {
   return (neuron0x2120900()*-0.0916357);
}

double NNfunction_ss_cLdR::synapse0x2127f60() {
   return (neuron0x2120e60()*-0.214642);
}

double NNfunction_ss_cLdR::synapse0x21285e0() {
   return (neuron0x2121080()*-0.112556);
}

double NNfunction_ss_cLdR::synapse0x2128620() {
   return (neuron0x21213c0()*0.0468875);
}

double NNfunction_ss_cLdR::synapse0x2128660() {
   return (neuron0x2121700()*0.0627093);
}

double NNfunction_ss_cLdR::synapse0x21286a0() {
   return (neuron0x2121a40()*-0.0181248);
}

double NNfunction_ss_cLdR::synapse0x21286e0() {
   return (neuron0x2121d80()*-0.118011);
}

double NNfunction_ss_cLdR::synapse0x2128720() {
   return (neuron0x21220c0()*0.014881);
}

double NNfunction_ss_cLdR::synapse0x2128aa0() {
   return (neuron0x211d500()*-0.108885);
}

double NNfunction_ss_cLdR::synapse0x2128ae0() {
   return (neuron0x211d840()*-0.521906);
}

double NNfunction_ss_cLdR::synapse0x2128b20() {
   return (neuron0x211db80()*0.232948);
}

double NNfunction_ss_cLdR::synapse0x2128b60() {
   return (neuron0x211dec0()*0.258226);
}

double NNfunction_ss_cLdR::synapse0x2128ba0() {
   return (neuron0x211e200()*-0.600682);
}

double NNfunction_ss_cLdR::synapse0x2128be0() {
   return (neuron0x211e540()*0.653952);
}

double NNfunction_ss_cLdR::synapse0x2128c20() {
   return (neuron0x211e880()*0.30233);
}

double NNfunction_ss_cLdR::synapse0x2128c60() {
   return (neuron0x211ebc0()*0.540025);
}

double NNfunction_ss_cLdR::synapse0x2128ca0() {
   return (neuron0x211ef00()*0.286322);
}

double NNfunction_ss_cLdR::synapse0x2128ce0() {
   return (neuron0x211f240()*0.00437392);
}

double NNfunction_ss_cLdR::synapse0x2128d20() {
   return (neuron0x211f580()*0.197261);
}

double NNfunction_ss_cLdR::synapse0x2128d60() {
   return (neuron0x211f8c0()*0.147542);
}

double NNfunction_ss_cLdR::synapse0x2128da0() {
   return (neuron0x211fc00()*-0.198762);
}

double NNfunction_ss_cLdR::synapse0x2128de0() {
   return (neuron0x211ff40()*0.097425);
}

double NNfunction_ss_cLdR::synapse0x2128e20() {
   return (neuron0x2120280()*-0.306274);
}

double NNfunction_ss_cLdR::synapse0x2128e60() {
   return (neuron0x21205c0()*0.346559);
}

double NNfunction_ss_cLdR::synapse0x21288f0() {
   return (neuron0x2120900()*-0.00794521);
}

double NNfunction_ss_cLdR::synapse0x2128930() {
   return (neuron0x2120e60()*0.466923);
}

double NNfunction_ss_cLdR::synapse0x21256c0() {
   return (neuron0x2121080()*-0.0917762);
}

double NNfunction_ss_cLdR::synapse0x2125700() {
   return (neuron0x21213c0()*0.0626942);
}

double NNfunction_ss_cLdR::synapse0x2125740() {
   return (neuron0x2121700()*-0.197715);
}

double NNfunction_ss_cLdR::synapse0x2125780() {
   return (neuron0x2121a40()*0.260846);
}

double NNfunction_ss_cLdR::synapse0x21257c0() {
   return (neuron0x2121d80()*0.377216);
}

double NNfunction_ss_cLdR::synapse0x2125800() {
   return (neuron0x21220c0()*-0.100102);
}

double NNfunction_ss_cLdR::synapse0x2125b80() {
   return (neuron0x211d500()*-0.0673956);
}

double NNfunction_ss_cLdR::synapse0x2125bc0() {
   return (neuron0x211d840()*0.105616);
}

double NNfunction_ss_cLdR::synapse0x2125c00() {
   return (neuron0x211db80()*0.173544);
}

double NNfunction_ss_cLdR::synapse0x2125c40() {
   return (neuron0x211dec0()*-2.90235);
}

double NNfunction_ss_cLdR::synapse0x2125c80() {
   return (neuron0x211e200()*-0.0580277);
}

double NNfunction_ss_cLdR::synapse0x2125cc0() {
   return (neuron0x211e540()*0.24834);
}

double NNfunction_ss_cLdR::synapse0x2125d00() {
   return (neuron0x211e880()*0.141763);
}

double NNfunction_ss_cLdR::synapse0x2125d40() {
   return (neuron0x211ebc0()*-0.0741619);
}

double NNfunction_ss_cLdR::synapse0x2125d80() {
   return (neuron0x211ef00()*-0.263769);
}

double NNfunction_ss_cLdR::synapse0x2125dc0() {
   return (neuron0x211f240()*-0.572612);
}

double NNfunction_ss_cLdR::synapse0x2125e00() {
   return (neuron0x211f580()*-0.163858);
}

double NNfunction_ss_cLdR::synapse0x2125e40() {
   return (neuron0x211f8c0()*-0.059932);
}

double NNfunction_ss_cLdR::synapse0x2125e80() {
   return (neuron0x211fc00()*1.21125);
}

double NNfunction_ss_cLdR::synapse0x2129fc0() {
   return (neuron0x211ff40()*-0.928432);
}

double NNfunction_ss_cLdR::synapse0x212a000() {
   return (neuron0x2120280()*0.201177);
}

double NNfunction_ss_cLdR::synapse0x212a040() {
   return (neuron0x21205c0()*-0.161113);
}

double NNfunction_ss_cLdR::synapse0x21259d0() {
   return (neuron0x2120900()*0.102859);
}

double NNfunction_ss_cLdR::synapse0x2125a10() {
   return (neuron0x2120e60()*1.30007);
}

double NNfunction_ss_cLdR::synapse0x212a190() {
   return (neuron0x2121080()*-0.396316);
}

double NNfunction_ss_cLdR::synapse0x212a1d0() {
   return (neuron0x21213c0()*-0.230332);
}

double NNfunction_ss_cLdR::synapse0x212a210() {
   return (neuron0x2121700()*-0.229149);
}

double NNfunction_ss_cLdR::synapse0x212a250() {
   return (neuron0x2121a40()*-0.126197);
}

double NNfunction_ss_cLdR::synapse0x212a290() {
   return (neuron0x2121d80()*-0.525278);
}

double NNfunction_ss_cLdR::synapse0x212a2d0() {
   return (neuron0x21220c0()*-0.598894);
}

double NNfunction_ss_cLdR::synapse0x212a650() {
   return (neuron0x211d500()*0.0203984);
}

double NNfunction_ss_cLdR::synapse0x212a690() {
   return (neuron0x211d840()*-0.0198273);
}

double NNfunction_ss_cLdR::synapse0x212a6d0() {
   return (neuron0x211db80()*-0.00678003);
}

double NNfunction_ss_cLdR::synapse0x212a710() {
   return (neuron0x211dec0()*3.53649);
}

double NNfunction_ss_cLdR::synapse0x212a750() {
   return (neuron0x211e200()*-0.000823249);
}

double NNfunction_ss_cLdR::synapse0x212a790() {
   return (neuron0x211e540()*-0.00134015);
}

double NNfunction_ss_cLdR::synapse0x212a7d0() {
   return (neuron0x211e880()*-0.00721048);
}

double NNfunction_ss_cLdR::synapse0x212a810() {
   return (neuron0x211ebc0()*-0.00780678);
}

double NNfunction_ss_cLdR::synapse0x212a850() {
   return (neuron0x211ef00()*-0.00132764);
}

double NNfunction_ss_cLdR::synapse0x212a890() {
   return (neuron0x211f240()*0.00261355);
}

double NNfunction_ss_cLdR::synapse0x212a8d0() {
   return (neuron0x211f580()*0.0240383);
}

double NNfunction_ss_cLdR::synapse0x212a910() {
   return (neuron0x211f8c0()*0.00999627);
}

double NNfunction_ss_cLdR::synapse0x212a950() {
   return (neuron0x211fc00()*0.289694);
}

double NNfunction_ss_cLdR::synapse0x212a990() {
   return (neuron0x211ff40()*-0.0120451);
}

double NNfunction_ss_cLdR::synapse0x212a9d0() {
   return (neuron0x2120280()*-0.0145672);
}

double NNfunction_ss_cLdR::synapse0x212aa10() {
   return (neuron0x21205c0()*0.00679704);
}

double NNfunction_ss_cLdR::synapse0x212a4a0() {
   return (neuron0x2120900()*-0.0069723);
}

double NNfunction_ss_cLdR::synapse0x212a4e0() {
   return (neuron0x2120e60()*0.26705);
}

double NNfunction_ss_cLdR::synapse0x212ab60() {
   return (neuron0x2121080()*-0.00341022);
}

double NNfunction_ss_cLdR::synapse0x212aba0() {
   return (neuron0x21213c0()*0.0149791);
}

double NNfunction_ss_cLdR::synapse0x212abe0() {
   return (neuron0x2121700()*0.0175215);
}

double NNfunction_ss_cLdR::synapse0x212ac20() {
   return (neuron0x2121a40()*0.00513389);
}

double NNfunction_ss_cLdR::synapse0x212ac60() {
   return (neuron0x2121d80()*0.0305126);
}

double NNfunction_ss_cLdR::synapse0x212aca0() {
   return (neuron0x21220c0()*-0.0190586);
}

double NNfunction_ss_cLdR::synapse0x212b020() {
   return (neuron0x211d500()*-0.0978039);
}

double NNfunction_ss_cLdR::synapse0x212b060() {
   return (neuron0x211d840()*0.0916434);
}

double NNfunction_ss_cLdR::synapse0x212b0a0() {
   return (neuron0x211db80()*-0.651799);
}

double NNfunction_ss_cLdR::synapse0x212b0e0() {
   return (neuron0x211dec0()*1.66986);
}

double NNfunction_ss_cLdR::synapse0x212b120() {
   return (neuron0x211e200()*0.0957626);
}

double NNfunction_ss_cLdR::synapse0x212b160() {
   return (neuron0x211e540()*-0.103918);
}

double NNfunction_ss_cLdR::synapse0x212b1a0() {
   return (neuron0x211e880()*0.156056);
}

double NNfunction_ss_cLdR::synapse0x212b1e0() {
   return (neuron0x211ebc0()*0.00146866);
}

double NNfunction_ss_cLdR::synapse0x212b220() {
   return (neuron0x211ef00()*0.106804);
}

double NNfunction_ss_cLdR::synapse0x212b260() {
   return (neuron0x211f240()*-0.020653);
}

double NNfunction_ss_cLdR::synapse0x212b2a0() {
   return (neuron0x211f580()*0.0674865);
}

double NNfunction_ss_cLdR::synapse0x212b2e0() {
   return (neuron0x211f8c0()*-0.169004);
}

double NNfunction_ss_cLdR::synapse0x212b320() {
   return (neuron0x211fc00()*-0.379224);
}

double NNfunction_ss_cLdR::synapse0x212b360() {
   return (neuron0x211ff40()*-0.00860649);
}

double NNfunction_ss_cLdR::synapse0x212b3a0() {
   return (neuron0x2120280()*0.23141);
}

double NNfunction_ss_cLdR::synapse0x212b3e0() {
   return (neuron0x21205c0()*-0.0820502);
}

double NNfunction_ss_cLdR::synapse0x212ae70() {
   return (neuron0x2120900()*0.00316361);
}

double NNfunction_ss_cLdR::synapse0x212aeb0() {
   return (neuron0x2120e60()*0.250065);
}

double NNfunction_ss_cLdR::synapse0x212b530() {
   return (neuron0x2121080()*-0.0638644);
}

double NNfunction_ss_cLdR::synapse0x212b570() {
   return (neuron0x21213c0()*0.007439);
}

double NNfunction_ss_cLdR::synapse0x212b5b0() {
   return (neuron0x2121700()*-0.0677491);
}

double NNfunction_ss_cLdR::synapse0x212b5f0() {
   return (neuron0x2121a40()*0.0738713);
}

double NNfunction_ss_cLdR::synapse0x212b630() {
   return (neuron0x2121d80()*0.110192);
}

double NNfunction_ss_cLdR::synapse0x212b670() {
   return (neuron0x21220c0()*0.0129069);
}

double NNfunction_ss_cLdR::synapse0x212b9f0() {
   return (neuron0x211d500()*0.523592);
}

double NNfunction_ss_cLdR::synapse0x212ba30() {
   return (neuron0x211d840()*-0.00724832);
}

double NNfunction_ss_cLdR::synapse0x212ba70() {
   return (neuron0x211db80()*-0.153304);
}

double NNfunction_ss_cLdR::synapse0x212bab0() {
   return (neuron0x211dec0()*0.572439);
}

double NNfunction_ss_cLdR::synapse0x212baf0() {
   return (neuron0x211e200()*-0.304153);
}

double NNfunction_ss_cLdR::synapse0x212bb30() {
   return (neuron0x211e540()*-0.162942);
}

double NNfunction_ss_cLdR::synapse0x212bb70() {
   return (neuron0x211e880()*-0.226483);
}

double NNfunction_ss_cLdR::synapse0x212bbb0() {
   return (neuron0x211ebc0()*0.337222);
}

double NNfunction_ss_cLdR::synapse0x212bbf0() {
   return (neuron0x211ef00()*-0.41938);
}

double NNfunction_ss_cLdR::synapse0x212bc30() {
   return (neuron0x211f240()*-0.743833);
}

double NNfunction_ss_cLdR::synapse0x212bc70() {
   return (neuron0x211f580()*-0.0609311);
}

double NNfunction_ss_cLdR::synapse0x212bcb0() {
   return (neuron0x211f8c0()*0.167688);
}

double NNfunction_ss_cLdR::synapse0x212bcf0() {
   return (neuron0x211fc00()*-0.997339);
}

double NNfunction_ss_cLdR::synapse0x212bd30() {
   return (neuron0x211ff40()*0.0556085);
}

double NNfunction_ss_cLdR::synapse0x212bd70() {
   return (neuron0x2120280()*0.324875);
}

double NNfunction_ss_cLdR::synapse0x212bdb0() {
   return (neuron0x21205c0()*-0.988213);
}

double NNfunction_ss_cLdR::synapse0x212b840() {
   return (neuron0x2120900()*0.188175);
}

double NNfunction_ss_cLdR::synapse0x212b880() {
   return (neuron0x2120e60()*-1.07579);
}

double NNfunction_ss_cLdR::synapse0x212bf00() {
   return (neuron0x2121080()*0.195529);
}

double NNfunction_ss_cLdR::synapse0x212bf40() {
   return (neuron0x21213c0()*-0.286725);
}

double NNfunction_ss_cLdR::synapse0x212bf80() {
   return (neuron0x2121700()*-0.0439502);
}

double NNfunction_ss_cLdR::synapse0x212bfc0() {
   return (neuron0x2121a40()*0.130315);
}

double NNfunction_ss_cLdR::synapse0x212c000() {
   return (neuron0x2121d80()*-0.24656);
}

double NNfunction_ss_cLdR::synapse0x212c040() {
   return (neuron0x21220c0()*-0.211873);
}

double NNfunction_ss_cLdR::synapse0x212c3c0() {
   return (neuron0x211d500()*-0.486321);
}

double NNfunction_ss_cLdR::synapse0x211d720() {
   return (neuron0x211d840()*0.0599052);
}

double NNfunction_ss_cLdR::synapse0x211d760() {
   return (neuron0x211db80()*0.43083);
}

double NNfunction_ss_cLdR::synapse0x211da60() {
   return (neuron0x211dec0()*-0.163621);
}

double NNfunction_ss_cLdR::synapse0x211daa0() {
   return (neuron0x211e200()*-0.437171);
}

double NNfunction_ss_cLdR::synapse0x211dda0() {
   return (neuron0x211e540()*-0.0398901);
}

double NNfunction_ss_cLdR::synapse0x211dde0() {
   return (neuron0x211e880()*-0.413661);
}

double NNfunction_ss_cLdR::synapse0x211e0e0() {
   return (neuron0x211ebc0()*-0.0207607);
}

double NNfunction_ss_cLdR::synapse0x211e120() {
   return (neuron0x211ef00()*0.678848);
}

double NNfunction_ss_cLdR::synapse0x211e420() {
   return (neuron0x211f240()*0.487646);
}

double NNfunction_ss_cLdR::synapse0x211e460() {
   return (neuron0x211f580()*0.923154);
}

double NNfunction_ss_cLdR::synapse0x211e760() {
   return (neuron0x211f8c0()*-0.615102);
}

double NNfunction_ss_cLdR::synapse0x211e7a0() {
   return (neuron0x211fc00()*-1.51682);
}

double NNfunction_ss_cLdR::synapse0x211eaa0() {
   return (neuron0x211ff40()*-0.474373);
}

double NNfunction_ss_cLdR::synapse0x211eae0() {
   return (neuron0x2120280()*0.201621);
}

double NNfunction_ss_cLdR::synapse0x211ede0() {
   return (neuron0x21205c0()*0.297511);
}

double NNfunction_ss_cLdR::synapse0x211ee20() {
   return (neuron0x2120900()*-0.0727934);
}

double NNfunction_ss_cLdR::synapse0x211f120() {
   return (neuron0x2120e60()*-1.17917);
}

double NNfunction_ss_cLdR::synapse0x211f160() {
   return (neuron0x2121080()*0.448903);
}

double NNfunction_ss_cLdR::synapse0x211f460() {
   return (neuron0x21213c0()*0.113497);
}

double NNfunction_ss_cLdR::synapse0x211f4a0() {
   return (neuron0x2121700()*0.115647);
}

double NNfunction_ss_cLdR::synapse0x211f7a0() {
   return (neuron0x2121a40()*0.0706005);
}

double NNfunction_ss_cLdR::synapse0x211f7e0() {
   return (neuron0x2121d80()*0.24933);
}

double NNfunction_ss_cLdR::synapse0x211fae0() {
   return (neuron0x21220c0()*0.474806);
}

double NNfunction_ss_cLdR::synapse0x211fb20() {
   return (neuron0x211d500()*-0.185885);
}

double NNfunction_ss_cLdR::synapse0x21207e0() {
   return (neuron0x211d840()*-0.197314);
}

double NNfunction_ss_cLdR::synapse0x2120820() {
   return (neuron0x211db80()*-0.413906);
}

double NNfunction_ss_cLdR::synapse0x212c210() {
   return (neuron0x211dec0()*-0.949413);
}

double NNfunction_ss_cLdR::synapse0x212c250() {
   return (neuron0x211e200()*0.247129);
}

double NNfunction_ss_cLdR::synapse0x2120b20() {
   return (neuron0x211e540()*-0.0965605);
}

double NNfunction_ss_cLdR::synapse0x2120b60() {
   return (neuron0x211e880()*0.380715);
}

double NNfunction_ss_cLdR::synapse0x1eceb50() {
   return (neuron0x211ebc0()*-0.300147);
}

double NNfunction_ss_cLdR::synapse0x1eceb90() {
   return (neuron0x211ef00()*0.227988);
}

double NNfunction_ss_cLdR::synapse0x21212a0() {
   return (neuron0x211f240()*-0.314814);
}

double NNfunction_ss_cLdR::synapse0x21212e0() {
   return (neuron0x211f580()*-0.0763189);
}

double NNfunction_ss_cLdR::synapse0x21215e0() {
   return (neuron0x211f8c0()*0.271557);
}

double NNfunction_ss_cLdR::synapse0x2121620() {
   return (neuron0x211fc00()*-0.707521);
}

double NNfunction_ss_cLdR::synapse0x2121920() {
   return (neuron0x211ff40()*0.0276917);
}

double NNfunction_ss_cLdR::synapse0x2121960() {
   return (neuron0x2120280()*0.592697);
}

double NNfunction_ss_cLdR::synapse0x2121c60() {
   return (neuron0x21205c0()*0.227943);
}

double NNfunction_ss_cLdR::synapse0x2121ca0() {
   return (neuron0x2120900()*-0.0218946);
}

double NNfunction_ss_cLdR::synapse0x2121fa0() {
   return (neuron0x2120e60()*-0.310131);
}

double NNfunction_ss_cLdR::synapse0x2121fe0() {
   return (neuron0x2121080()*0.088369);
}

double NNfunction_ss_cLdR::synapse0x21222e0() {
   return (neuron0x21213c0()*-0.322294);
}

double NNfunction_ss_cLdR::synapse0x2122320() {
   return (neuron0x2121700()*-0.26959);
}

double NNfunction_ss_cLdR::synapse0x211fe20() {
   return (neuron0x2121a40()*0.116042);
}

double NNfunction_ss_cLdR::synapse0x211fe60() {
   return (neuron0x2121d80()*0.167018);
}

double NNfunction_ss_cLdR::synapse0x212e130() {
   return (neuron0x21220c0()*-0.473228);
}

double NNfunction_ss_cLdR::synapse0x212e4b0() {
   return (neuron0x211d500()*-0.0834707);
}

double NNfunction_ss_cLdR::synapse0x212e4f0() {
   return (neuron0x211d840()*0.00809994);
}

double NNfunction_ss_cLdR::synapse0x212e530() {
   return (neuron0x211db80()*-0.0375473);
}

double NNfunction_ss_cLdR::synapse0x212e570() {
   return (neuron0x211dec0()*0.100935);
}

double NNfunction_ss_cLdR::synapse0x212e5b0() {
   return (neuron0x211e200()*-0.142209);
}

double NNfunction_ss_cLdR::synapse0x212e5f0() {
   return (neuron0x211e540()*-0.0825022);
}

double NNfunction_ss_cLdR::synapse0x212e630() {
   return (neuron0x211e880()*0.118296);
}

double NNfunction_ss_cLdR::synapse0x212e670() {
   return (neuron0x211ebc0()*0.214452);
}

double NNfunction_ss_cLdR::synapse0x212e6b0() {
   return (neuron0x211ef00()*-0.238107);
}

double NNfunction_ss_cLdR::synapse0x212e6f0() {
   return (neuron0x211f240()*-0.538361);
}

double NNfunction_ss_cLdR::synapse0x212e730() {
   return (neuron0x211f580()*0.194784);
}

double NNfunction_ss_cLdR::synapse0x212e770() {
   return (neuron0x211f8c0()*0.301622);
}

double NNfunction_ss_cLdR::synapse0x212e7b0() {
   return (neuron0x211fc00()*0.608337);
}

double NNfunction_ss_cLdR::synapse0x212e7f0() {
   return (neuron0x211ff40()*0.883349);
}

double NNfunction_ss_cLdR::synapse0x212e830() {
   return (neuron0x2120280()*-0.266009);
}

double NNfunction_ss_cLdR::synapse0x212e870() {
   return (neuron0x21205c0()*0.297481);
}

double NNfunction_ss_cLdR::synapse0x212e300() {
   return (neuron0x2120900()*1.49216);
}

double NNfunction_ss_cLdR::synapse0x212e340() {
   return (neuron0x2120e60()*-0.158835);
}

double NNfunction_ss_cLdR::synapse0x212e9c0() {
   return (neuron0x2121080()*0.204248);
}

double NNfunction_ss_cLdR::synapse0x212ea00() {
   return (neuron0x21213c0()*0.137478);
}

double NNfunction_ss_cLdR::synapse0x212ea40() {
   return (neuron0x2121700()*-1.82192);
}

double NNfunction_ss_cLdR::synapse0x212ea80() {
   return (neuron0x2121a40()*-0.0360132);
}

double NNfunction_ss_cLdR::synapse0x212eac0() {
   return (neuron0x2121d80()*-0.350348);
}

double NNfunction_ss_cLdR::synapse0x212eb00() {
   return (neuron0x21220c0()*0.294862);
}

double NNfunction_ss_cLdR::synapse0x212ee80() {
   return (neuron0x211d500()*0.391392);
}

double NNfunction_ss_cLdR::synapse0x212eec0() {
   return (neuron0x211d840()*0.384471);
}

double NNfunction_ss_cLdR::synapse0x212ef00() {
   return (neuron0x211db80()*-0.00619864);
}

double NNfunction_ss_cLdR::synapse0x212ef40() {
   return (neuron0x211dec0()*0.962167);
}

double NNfunction_ss_cLdR::synapse0x212ef80() {
   return (neuron0x211e200()*-0.448137);
}

double NNfunction_ss_cLdR::synapse0x212efc0() {
   return (neuron0x211e540()*-0.115975);
}

double NNfunction_ss_cLdR::synapse0x212f000() {
   return (neuron0x211e880()*0.306101);
}

double NNfunction_ss_cLdR::synapse0x212f040() {
   return (neuron0x211ebc0()*0.184325);
}

double NNfunction_ss_cLdR::synapse0x212f080() {
   return (neuron0x211ef00()*0.0564225);
}

double NNfunction_ss_cLdR::synapse0x212f0c0() {
   return (neuron0x211f240()*-0.0400311);
}

double NNfunction_ss_cLdR::synapse0x212f100() {
   return (neuron0x211f580()*-0.657798);
}

double NNfunction_ss_cLdR::synapse0x212f140() {
   return (neuron0x211f8c0()*0.127607);
}

double NNfunction_ss_cLdR::synapse0x212f180() {
   return (neuron0x211fc00()*-0.39346);
}

double NNfunction_ss_cLdR::synapse0x212f1c0() {
   return (neuron0x211ff40()*0.0129144);
}

double NNfunction_ss_cLdR::synapse0x212f200() {
   return (neuron0x2120280()*0.298553);
}

double NNfunction_ss_cLdR::synapse0x212f240() {
   return (neuron0x21205c0()*-0.179652);
}

double NNfunction_ss_cLdR::synapse0x212ecd0() {
   return (neuron0x2120900()*0.383134);
}

double NNfunction_ss_cLdR::synapse0x212ed10() {
   return (neuron0x2120e60()*-1.13045);
}

double NNfunction_ss_cLdR::synapse0x212f390() {
   return (neuron0x2121080()*-0.166788);
}

double NNfunction_ss_cLdR::synapse0x212f3d0() {
   return (neuron0x21213c0()*-0.331924);
}

double NNfunction_ss_cLdR::synapse0x212f410() {
   return (neuron0x2121700()*0.515106);
}

double NNfunction_ss_cLdR::synapse0x212f450() {
   return (neuron0x2121a40()*0.0840952);
}

double NNfunction_ss_cLdR::synapse0x212f490() {
   return (neuron0x2121d80()*0.263218);
}

double NNfunction_ss_cLdR::synapse0x212f4d0() {
   return (neuron0x21220c0()*0.0618443);
}

double NNfunction_ss_cLdR::synapse0x212f850() {
   return (neuron0x211d500()*-0.0145663);
}

double NNfunction_ss_cLdR::synapse0x212f890() {
   return (neuron0x211d840()*-0.0803085);
}

double NNfunction_ss_cLdR::synapse0x212f8d0() {
   return (neuron0x211db80()*0.0876478);
}

double NNfunction_ss_cLdR::synapse0x212f910() {
   return (neuron0x211dec0()*-1.31074);
}

double NNfunction_ss_cLdR::synapse0x212f950() {
   return (neuron0x211e200()*0.0289623);
}

double NNfunction_ss_cLdR::synapse0x212f990() {
   return (neuron0x211e540()*-0.00830656);
}

double NNfunction_ss_cLdR::synapse0x212f9d0() {
   return (neuron0x211e880()*0.0175984);
}

double NNfunction_ss_cLdR::synapse0x212fa10() {
   return (neuron0x211ebc0()*-0.0637748);
}

double NNfunction_ss_cLdR::synapse0x212fa50() {
   return (neuron0x211ef00()*0.0281117);
}

double NNfunction_ss_cLdR::synapse0x212fa90() {
   return (neuron0x211f240()*0.0394958);
}

double NNfunction_ss_cLdR::synapse0x212fad0() {
   return (neuron0x211f580()*0.0299492);
}

double NNfunction_ss_cLdR::synapse0x212fb10() {
   return (neuron0x211f8c0()*-0.0344833);
}

double NNfunction_ss_cLdR::synapse0x212fb50() {
   return (neuron0x211fc00()*-0.767324);
}

double NNfunction_ss_cLdR::synapse0x212fb90() {
   return (neuron0x211ff40()*-0.0214252);
}

double NNfunction_ss_cLdR::synapse0x212fbd0() {
   return (neuron0x2120280()*0.0100938);
}

double NNfunction_ss_cLdR::synapse0x212fc10() {
   return (neuron0x21205c0()*-0.0269612);
}

double NNfunction_ss_cLdR::synapse0x212f6a0() {
   return (neuron0x2120900()*-0.04832);
}

double NNfunction_ss_cLdR::synapse0x212f6e0() {
   return (neuron0x2120e60()*-0.655142);
}

double NNfunction_ss_cLdR::synapse0x212fd60() {
   return (neuron0x2121080()*-0.0289197);
}

double NNfunction_ss_cLdR::synapse0x212fda0() {
   return (neuron0x21213c0()*0.0279272);
}

double NNfunction_ss_cLdR::synapse0x212fde0() {
   return (neuron0x2121700()*-0.0267282);
}

double NNfunction_ss_cLdR::synapse0x212fe20() {
   return (neuron0x2121a40()*0.0168723);
}

double NNfunction_ss_cLdR::synapse0x212fe60() {
   return (neuron0x2121d80()*0.0604243);
}

double NNfunction_ss_cLdR::synapse0x212fea0() {
   return (neuron0x21220c0()*-0.069561);
}

double NNfunction_ss_cLdR::synapse0x2130220() {
   return (neuron0x211d500()*-0.0799108);
}

double NNfunction_ss_cLdR::synapse0x2130260() {
   return (neuron0x211d840()*-0.245925);
}

double NNfunction_ss_cLdR::synapse0x21302a0() {
   return (neuron0x211db80()*0.0470203);
}

double NNfunction_ss_cLdR::synapse0x21302e0() {
   return (neuron0x211dec0()*0.011028);
}

double NNfunction_ss_cLdR::synapse0x2130320() {
   return (neuron0x211e200()*0.485041);
}

double NNfunction_ss_cLdR::synapse0x2130360() {
   return (neuron0x211e540()*-0.0125254);
}

double NNfunction_ss_cLdR::synapse0x21303a0() {
   return (neuron0x211e880()*-0.215977);
}

double NNfunction_ss_cLdR::synapse0x21303e0() {
   return (neuron0x211ebc0()*-0.389947);
}

double NNfunction_ss_cLdR::synapse0x2130420() {
   return (neuron0x211ef00()*-0.137702);
}

double NNfunction_ss_cLdR::synapse0x2130460() {
   return (neuron0x211f240()*-0.237477);
}

double NNfunction_ss_cLdR::synapse0x21304a0() {
   return (neuron0x211f580()*0.425039);
}

double NNfunction_ss_cLdR::synapse0x21304e0() {
   return (neuron0x211f8c0()*-0.298736);
}

double NNfunction_ss_cLdR::synapse0x2130520() {
   return (neuron0x211fc00()*-1.18356);
}

double NNfunction_ss_cLdR::synapse0x2130560() {
   return (neuron0x211ff40()*-0.232814);
}

double NNfunction_ss_cLdR::synapse0x21305a0() {
   return (neuron0x2120280()*0.457619);
}

double NNfunction_ss_cLdR::synapse0x21305e0() {
   return (neuron0x21205c0()*-0.0846446);
}

double NNfunction_ss_cLdR::synapse0x2130070() {
   return (neuron0x2120900()*-0.475742);
}

double NNfunction_ss_cLdR::synapse0x21300b0() {
   return (neuron0x2120e60()*-0.871634);
}

double NNfunction_ss_cLdR::synapse0x2130730() {
   return (neuron0x2121080()*-0.852242);
}

double NNfunction_ss_cLdR::synapse0x2130770() {
   return (neuron0x21213c0()*-0.528632);
}

double NNfunction_ss_cLdR::synapse0x21307b0() {
   return (neuron0x2121700()*0.381512);
}

double NNfunction_ss_cLdR::synapse0x21307f0() {
   return (neuron0x2121a40()*0.223337);
}

double NNfunction_ss_cLdR::synapse0x2130830() {
   return (neuron0x2121d80()*0.149569);
}

double NNfunction_ss_cLdR::synapse0x2130870() {
   return (neuron0x21220c0()*0.00527093);
}

double NNfunction_ss_cLdR::synapse0x2130bf0() {
   return (neuron0x211d500()*-0.219391);
}

double NNfunction_ss_cLdR::synapse0x2130c30() {
   return (neuron0x211d840()*0.533241);
}

double NNfunction_ss_cLdR::synapse0x2130c70() {
   return (neuron0x211db80()*0.733698);
}

double NNfunction_ss_cLdR::synapse0x2130cb0() {
   return (neuron0x211dec0()*-0.558154);
}

double NNfunction_ss_cLdR::synapse0x2130cf0() {
   return (neuron0x211e200()*-0.095608);
}

double NNfunction_ss_cLdR::synapse0x2130d30() {
   return (neuron0x211e540()*0.678809);
}

double NNfunction_ss_cLdR::synapse0x2130d70() {
   return (neuron0x211e880()*1.10172);
}

double NNfunction_ss_cLdR::synapse0x2130db0() {
   return (neuron0x211ebc0()*-0.105246);
}

double NNfunction_ss_cLdR::synapse0x2130df0() {
   return (neuron0x211ef00()*0.604183);
}

double NNfunction_ss_cLdR::synapse0x2128fb0() {
   return (neuron0x211f240()*-0.327845);
}

double NNfunction_ss_cLdR::synapse0x2128ff0() {
   return (neuron0x211f580()*-0.610116);
}

double NNfunction_ss_cLdR::synapse0x2129030() {
   return (neuron0x211f8c0()*-0.00156226);
}

double NNfunction_ss_cLdR::synapse0x2129070() {
   return (neuron0x211fc00()*0.389858);
}

double NNfunction_ss_cLdR::synapse0x21290b0() {
   return (neuron0x211ff40()*0.193875);
}

double NNfunction_ss_cLdR::synapse0x21290f0() {
   return (neuron0x2120280()*-0.461723);
}

double NNfunction_ss_cLdR::synapse0x2129130() {
   return (neuron0x21205c0()*0.248558);
}

double NNfunction_ss_cLdR::synapse0x2130a40() {
   return (neuron0x2120900()*-0.604025);
}

double NNfunction_ss_cLdR::synapse0x2130a80() {
   return (neuron0x2120e60()*0.14695);
}

double NNfunction_ss_cLdR::synapse0x2129280() {
   return (neuron0x2121080()*0.0770996);
}

double NNfunction_ss_cLdR::synapse0x21292c0() {
   return (neuron0x21213c0()*0.18802);
}

double NNfunction_ss_cLdR::synapse0x2129300() {
   return (neuron0x2121700()*-0.32611);
}

double NNfunction_ss_cLdR::synapse0x2129340() {
   return (neuron0x2121a40()*-0.253764);
}

double NNfunction_ss_cLdR::synapse0x2129380() {
   return (neuron0x2121d80()*-0.0131555);
}

double NNfunction_ss_cLdR::synapse0x21293c0() {
   return (neuron0x21220c0()*0.473142);
}

double NNfunction_ss_cLdR::synapse0x2129740() {
   return (neuron0x211d500()*0.00711222);
}

double NNfunction_ss_cLdR::synapse0x2129780() {
   return (neuron0x211d840()*0.212627);
}

double NNfunction_ss_cLdR::synapse0x21297c0() {
   return (neuron0x211db80()*-1.55121);
}

double NNfunction_ss_cLdR::synapse0x2129800() {
   return (neuron0x211dec0()*0.00829546);
}

double NNfunction_ss_cLdR::synapse0x2129840() {
   return (neuron0x211e200()*-0.0596716);
}

double NNfunction_ss_cLdR::synapse0x2129880() {
   return (neuron0x211e540()*0.00529036);
}

double NNfunction_ss_cLdR::synapse0x21298c0() {
   return (neuron0x211e880()*0.0108039);
}

double NNfunction_ss_cLdR::synapse0x2129900() {
   return (neuron0x211ebc0()*-0.125791);
}

double NNfunction_ss_cLdR::synapse0x2129940() {
   return (neuron0x211ef00()*-0.146602);
}

double NNfunction_ss_cLdR::synapse0x2129980() {
   return (neuron0x211f240()*0.0339367);
}

double NNfunction_ss_cLdR::synapse0x21299c0() {
   return (neuron0x211f580()*-0.0748806);
}

double NNfunction_ss_cLdR::synapse0x2129a00() {
   return (neuron0x211f8c0()*0.0307471);
}

double NNfunction_ss_cLdR::synapse0x2129a40() {
   return (neuron0x211fc00()*0.318871);
}

double NNfunction_ss_cLdR::synapse0x2129a80() {
   return (neuron0x211ff40()*-0.0101497);
}

double NNfunction_ss_cLdR::synapse0x2129ac0() {
   return (neuron0x2120280()*-0.116445);
}

double NNfunction_ss_cLdR::synapse0x2129b00() {
   return (neuron0x21205c0()*0.0688064);
}

double NNfunction_ss_cLdR::synapse0x2129590() {
   return (neuron0x2120900()*-0.128415);
}

double NNfunction_ss_cLdR::synapse0x21295d0() {
   return (neuron0x2120e60()*-0.0392703);
}

double NNfunction_ss_cLdR::synapse0x2129c50() {
   return (neuron0x2121080()*-0.112071);
}

double NNfunction_ss_cLdR::synapse0x2129c90() {
   return (neuron0x21213c0()*-0.141767);
}

double NNfunction_ss_cLdR::synapse0x2129cd0() {
   return (neuron0x2121700()*0.212127);
}

double NNfunction_ss_cLdR::synapse0x2129d10() {
   return (neuron0x2121a40()*0.0138417);
}

double NNfunction_ss_cLdR::synapse0x2129d50() {
   return (neuron0x2121d80()*0.0951707);
}

double NNfunction_ss_cLdR::synapse0x2129d90() {
   return (neuron0x21220c0()*0.0576386);
}

double NNfunction_ss_cLdR::synapse0x2129f60() {
   return (neuron0x211d500()*0.289516);
}

double NNfunction_ss_cLdR::synapse0x2132ff0() {
   return (neuron0x211d840()*0.243631);
}

double NNfunction_ss_cLdR::synapse0x2133030() {
   return (neuron0x211db80()*0.045815);
}

double NNfunction_ss_cLdR::synapse0x2133070() {
   return (neuron0x211dec0()*-0.883129);
}

double NNfunction_ss_cLdR::synapse0x21330b0() {
   return (neuron0x211e200()*-0.128424);
}

double NNfunction_ss_cLdR::synapse0x21330f0() {
   return (neuron0x211e540()*-0.148491);
}

double NNfunction_ss_cLdR::synapse0x2133130() {
   return (neuron0x211e880()*0.0416889);
}

double NNfunction_ss_cLdR::synapse0x2133170() {
   return (neuron0x211ebc0()*0.0111728);
}

double NNfunction_ss_cLdR::synapse0x21331b0() {
   return (neuron0x211ef00()*0.00336115);
}

double NNfunction_ss_cLdR::synapse0x21331f0() {
   return (neuron0x211f240()*0.026595);
}

double NNfunction_ss_cLdR::synapse0x2133230() {
   return (neuron0x211f580()*0.134444);
}

double NNfunction_ss_cLdR::synapse0x2133270() {
   return (neuron0x211f8c0()*0.0876519);
}

double NNfunction_ss_cLdR::synapse0x21332b0() {
   return (neuron0x211fc00()*0.580099);
}

double NNfunction_ss_cLdR::synapse0x21332f0() {
   return (neuron0x211ff40()*-0.312767);
}

double NNfunction_ss_cLdR::synapse0x2133330() {
   return (neuron0x2120280()*-0.0291171);
}

double NNfunction_ss_cLdR::synapse0x2133370() {
   return (neuron0x21205c0()*0.284742);
}

double NNfunction_ss_cLdR::synapse0x2132e40() {
   return (neuron0x2120900()*-0.328813);
}

double NNfunction_ss_cLdR::synapse0x2132e80() {
   return (neuron0x2120e60()*0.592275);
}

double NNfunction_ss_cLdR::synapse0x21334c0() {
   return (neuron0x2121080()*0.118636);
}

double NNfunction_ss_cLdR::synapse0x2133500() {
   return (neuron0x21213c0()*0.195568);
}

double NNfunction_ss_cLdR::synapse0x2133540() {
   return (neuron0x2121700()*-0.13943);
}

double NNfunction_ss_cLdR::synapse0x2133580() {
   return (neuron0x2121a40()*0.0948795);
}

double NNfunction_ss_cLdR::synapse0x21335c0() {
   return (neuron0x2121d80()*0.0177547);
}

double NNfunction_ss_cLdR::synapse0x2133600() {
   return (neuron0x21220c0()*-0.0529031);
}

double NNfunction_ss_cLdR::synapse0x2133980() {
   return (neuron0x211d500()*-0.326181);
}

double NNfunction_ss_cLdR::synapse0x21339c0() {
   return (neuron0x211d840()*-0.523997);
}

double NNfunction_ss_cLdR::synapse0x2133a00() {
   return (neuron0x211db80()*-0.0587063);
}

double NNfunction_ss_cLdR::synapse0x2133a40() {
   return (neuron0x211dec0()*-0.0707371);
}

double NNfunction_ss_cLdR::synapse0x2133a80() {
   return (neuron0x211e200()*0.462914);
}

double NNfunction_ss_cLdR::synapse0x2133ac0() {
   return (neuron0x211e540()*-0.369055);
}

double NNfunction_ss_cLdR::synapse0x2133b00() {
   return (neuron0x211e880()*-0.218603);
}

double NNfunction_ss_cLdR::synapse0x2133b40() {
   return (neuron0x211ebc0()*-0.135551);
}

double NNfunction_ss_cLdR::synapse0x2133b80() {
   return (neuron0x211ef00()*-0.116274);
}

double NNfunction_ss_cLdR::synapse0x2133bc0() {
   return (neuron0x211f240()*0.0949961);
}

double NNfunction_ss_cLdR::synapse0x2133c00() {
   return (neuron0x211f580()*-0.363993);
}

double NNfunction_ss_cLdR::synapse0x2133c40() {
   return (neuron0x211f8c0()*-0.670203);
}

double NNfunction_ss_cLdR::synapse0x2133c80() {
   return (neuron0x211fc00()*0.348201);
}

double NNfunction_ss_cLdR::synapse0x2133cc0() {
   return (neuron0x211ff40()*0.96753);
}

double NNfunction_ss_cLdR::synapse0x2133d00() {
   return (neuron0x2120280()*0.0269237);
}

double NNfunction_ss_cLdR::synapse0x2133d40() {
   return (neuron0x21205c0()*0.216035);
}

double NNfunction_ss_cLdR::synapse0x21337d0() {
   return (neuron0x2120900()*-0.247232);
}

double NNfunction_ss_cLdR::synapse0x2133810() {
   return (neuron0x2120e60()*0.258348);
}

double NNfunction_ss_cLdR::synapse0x2133e90() {
   return (neuron0x2121080()*0.190296);
}

double NNfunction_ss_cLdR::synapse0x2133ed0() {
   return (neuron0x21213c0()*0.013458);
}

double NNfunction_ss_cLdR::synapse0x2133f10() {
   return (neuron0x2121700()*-0.749776);
}

double NNfunction_ss_cLdR::synapse0x2133f50() {
   return (neuron0x2121a40()*-0.458151);
}

double NNfunction_ss_cLdR::synapse0x2133f90() {
   return (neuron0x2121d80()*0.0808934);
}

double NNfunction_ss_cLdR::synapse0x2133fd0() {
   return (neuron0x21220c0()*0.251281);
}

double NNfunction_ss_cLdR::synapse0x2134350() {
   return (neuron0x211d500()*-0.0471664);
}

double NNfunction_ss_cLdR::synapse0x2134390() {
   return (neuron0x211d840()*-0.09268);
}

double NNfunction_ss_cLdR::synapse0x21343d0() {
   return (neuron0x211db80()*-0.16987);
}

double NNfunction_ss_cLdR::synapse0x2134410() {
   return (neuron0x211dec0()*-0.225385);
}

double NNfunction_ss_cLdR::synapse0x2134450() {
   return (neuron0x211e200()*-0.0521628);
}

double NNfunction_ss_cLdR::synapse0x2134490() {
   return (neuron0x211e540()*-0.13395);
}

double NNfunction_ss_cLdR::synapse0x21344d0() {
   return (neuron0x211e880()*-0.0226877);
}

double NNfunction_ss_cLdR::synapse0x2134510() {
   return (neuron0x211ebc0()*0.0319666);
}

double NNfunction_ss_cLdR::synapse0x2134550() {
   return (neuron0x211ef00()*0.0504579);
}

double NNfunction_ss_cLdR::synapse0x2134590() {
   return (neuron0x211f240()*0.0665476);
}

double NNfunction_ss_cLdR::synapse0x21345d0() {
   return (neuron0x211f580()*0.0918764);
}

double NNfunction_ss_cLdR::synapse0x2134610() {
   return (neuron0x211f8c0()*0.397776);
}

double NNfunction_ss_cLdR::synapse0x2134650() {
   return (neuron0x211fc00()*0.105865);
}

double NNfunction_ss_cLdR::synapse0x2134690() {
   return (neuron0x211ff40()*-0.17952);
}

double NNfunction_ss_cLdR::synapse0x21346d0() {
   return (neuron0x2120280()*0.87333);
}

double NNfunction_ss_cLdR::synapse0x2134710() {
   return (neuron0x21205c0()*0.53947);
}

double NNfunction_ss_cLdR::synapse0x21341a0() {
   return (neuron0x2120900()*-0.358494);
}

double NNfunction_ss_cLdR::synapse0x21341e0() {
   return (neuron0x2120e60()*-0.101803);
}

double NNfunction_ss_cLdR::synapse0x2134860() {
   return (neuron0x2121080()*0.272199);
}

double NNfunction_ss_cLdR::synapse0x21348a0() {
   return (neuron0x21213c0()*-0.112155);
}

double NNfunction_ss_cLdR::synapse0x21348e0() {
   return (neuron0x2121700()*-0.0499185);
}

double NNfunction_ss_cLdR::synapse0x2134920() {
   return (neuron0x2121a40()*-0.0368394);
}

double NNfunction_ss_cLdR::synapse0x2134960() {
   return (neuron0x2121d80()*0.0486657);
}

double NNfunction_ss_cLdR::synapse0x21349a0() {
   return (neuron0x21220c0()*0.111795);
}

double NNfunction_ss_cLdR::synapse0x2134d20() {
   return (neuron0x211d500()*0.0314238);
}

double NNfunction_ss_cLdR::synapse0x2134d60() {
   return (neuron0x211d840()*-0.348144);
}

double NNfunction_ss_cLdR::synapse0x2134da0() {
   return (neuron0x211db80()*-0.184867);
}

double NNfunction_ss_cLdR::synapse0x2134de0() {
   return (neuron0x211dec0()*-3.29319);
}

double NNfunction_ss_cLdR::synapse0x2134e20() {
   return (neuron0x211e200()*0.144786);
}

double NNfunction_ss_cLdR::synapse0x2134e60() {
   return (neuron0x211e540()*0.248228);
}

double NNfunction_ss_cLdR::synapse0x2134ea0() {
   return (neuron0x211e880()*-0.0131358);
}

double NNfunction_ss_cLdR::synapse0x2134ee0() {
   return (neuron0x211ebc0()*0.110088);
}

double NNfunction_ss_cLdR::synapse0x2134f20() {
   return (neuron0x211ef00()*0.0260795);
}

double NNfunction_ss_cLdR::synapse0x2134f60() {
   return (neuron0x211f240()*0.0918451);
}

double NNfunction_ss_cLdR::synapse0x2134fa0() {
   return (neuron0x211f580()*0.107308);
}

double NNfunction_ss_cLdR::synapse0x2134fe0() {
   return (neuron0x211f8c0()*0.263258);
}

double NNfunction_ss_cLdR::synapse0x2135020() {
   return (neuron0x211fc00()*0.0325607);
}

double NNfunction_ss_cLdR::synapse0x2135060() {
   return (neuron0x211ff40()*0.0211655);
}

double NNfunction_ss_cLdR::synapse0x21350a0() {
   return (neuron0x2120280()*-0.114384);
}

double NNfunction_ss_cLdR::synapse0x21350e0() {
   return (neuron0x21205c0()*-0.0368214);
}

double NNfunction_ss_cLdR::synapse0x2134b70() {
   return (neuron0x2120900()*-0.0997892);
}

double NNfunction_ss_cLdR::synapse0x2134bb0() {
   return (neuron0x2120e60()*0.21745);
}

double NNfunction_ss_cLdR::synapse0x2135230() {
   return (neuron0x2121080()*0.174321);
}

double NNfunction_ss_cLdR::synapse0x2135270() {
   return (neuron0x21213c0()*0.12884);
}

double NNfunction_ss_cLdR::synapse0x21352b0() {
   return (neuron0x2121700()*0.0795042);
}

double NNfunction_ss_cLdR::synapse0x21352f0() {
   return (neuron0x2121a40()*-0.00473286);
}

double NNfunction_ss_cLdR::synapse0x2135330() {
   return (neuron0x2121d80()*-0.0103051);
}

double NNfunction_ss_cLdR::synapse0x2135370() {
   return (neuron0x21220c0()*-0.149088);
}

double NNfunction_ss_cLdR::synapse0x21356f0() {
   return (neuron0x211d500()*0.247457);
}

double NNfunction_ss_cLdR::synapse0x2135730() {
   return (neuron0x211d840()*0.045327);
}

double NNfunction_ss_cLdR::synapse0x2135770() {
   return (neuron0x211db80()*0.713371);
}

double NNfunction_ss_cLdR::synapse0x21357b0() {
   return (neuron0x211dec0()*-0.437171);
}

double NNfunction_ss_cLdR::synapse0x21357f0() {
   return (neuron0x211e200()*-0.11928);
}

double NNfunction_ss_cLdR::synapse0x2135830() {
   return (neuron0x211e540()*0.0814796);
}

double NNfunction_ss_cLdR::synapse0x2135870() {
   return (neuron0x211e880()*0.0781601);
}

double NNfunction_ss_cLdR::synapse0x21358b0() {
   return (neuron0x211ebc0()*0.405786);
}

double NNfunction_ss_cLdR::synapse0x21358f0() {
   return (neuron0x211ef00()*0.162053);
}

double NNfunction_ss_cLdR::synapse0x2135930() {
   return (neuron0x211f240()*0.294126);
}

double NNfunction_ss_cLdR::synapse0x2135970() {
   return (neuron0x211f580()*-1.97615);
}

double NNfunction_ss_cLdR::synapse0x21359b0() {
   return (neuron0x211f8c0()*-0.152984);
}

double NNfunction_ss_cLdR::synapse0x21359f0() {
   return (neuron0x211fc00()*0.909997);
}

double NNfunction_ss_cLdR::synapse0x2135a30() {
   return (neuron0x211ff40()*0.791866);
}

double NNfunction_ss_cLdR::synapse0x2135a70() {
   return (neuron0x2120280()*-0.0360387);
}

double NNfunction_ss_cLdR::synapse0x2135ab0() {
   return (neuron0x21205c0()*-0.185153);
}

double NNfunction_ss_cLdR::synapse0x2135540() {
   return (neuron0x2120900()*0.00667001);
}

double NNfunction_ss_cLdR::synapse0x2135580() {
   return (neuron0x2120e60()*-0.103516);
}

double NNfunction_ss_cLdR::synapse0x2135c00() {
   return (neuron0x2121080()*0.535606);
}

double NNfunction_ss_cLdR::synapse0x2135c40() {
   return (neuron0x21213c0()*-0.730012);
}

double NNfunction_ss_cLdR::synapse0x2135c80() {
   return (neuron0x2121700()*-0.0315117);
}

double NNfunction_ss_cLdR::synapse0x2135cc0() {
   return (neuron0x2121a40()*-0.509057);
}

double NNfunction_ss_cLdR::synapse0x2135d00() {
   return (neuron0x2121d80()*-0.279815);
}

double NNfunction_ss_cLdR::synapse0x2135d40() {
   return (neuron0x21220c0()*-0.0282278);
}

double NNfunction_ss_cLdR::synapse0x21360c0() {
   return (neuron0x211d500()*0.0894889);
}

double NNfunction_ss_cLdR::synapse0x2136100() {
   return (neuron0x211d840()*0.356943);
}

double NNfunction_ss_cLdR::synapse0x2136140() {
   return (neuron0x211db80()*0.256955);
}

double NNfunction_ss_cLdR::synapse0x2136180() {
   return (neuron0x211dec0()*-0.721698);
}

double NNfunction_ss_cLdR::synapse0x21361c0() {
   return (neuron0x211e200()*-0.446827);
}

double NNfunction_ss_cLdR::synapse0x2136200() {
   return (neuron0x211e540()*-0.328338);
}

double NNfunction_ss_cLdR::synapse0x2136240() {
   return (neuron0x211e880()*0.0524878);
}

double NNfunction_ss_cLdR::synapse0x2136280() {
   return (neuron0x211ebc0()*0.292808);
}

double NNfunction_ss_cLdR::synapse0x21362c0() {
   return (neuron0x211ef00()*-0.397963);
}

double NNfunction_ss_cLdR::synapse0x2136300() {
   return (neuron0x211f240()*-0.19813);
}

double NNfunction_ss_cLdR::synapse0x2136340() {
   return (neuron0x211f580()*0.0412954);
}

double NNfunction_ss_cLdR::synapse0x2136380() {
   return (neuron0x211f8c0()*-0.0343422);
}

double NNfunction_ss_cLdR::synapse0x21363c0() {
   return (neuron0x211fc00()*-0.405982);
}

double NNfunction_ss_cLdR::synapse0x2136400() {
   return (neuron0x211ff40()*-0.642363);
}

double NNfunction_ss_cLdR::synapse0x2136440() {
   return (neuron0x2120280()*0.0205564);
}

double NNfunction_ss_cLdR::synapse0x2136480() {
   return (neuron0x21205c0()*0.284674);
}

double NNfunction_ss_cLdR::synapse0x2135f10() {
   return (neuron0x2120900()*0.369431);
}

double NNfunction_ss_cLdR::synapse0x2135f50() {
   return (neuron0x2120e60()*-0.198929);
}

double NNfunction_ss_cLdR::synapse0x21365d0() {
   return (neuron0x2121080()*0.102361);
}

double NNfunction_ss_cLdR::synapse0x2136610() {
   return (neuron0x21213c0()*0.311773);
}

double NNfunction_ss_cLdR::synapse0x2136650() {
   return (neuron0x2121700()*-0.156564);
}

double NNfunction_ss_cLdR::synapse0x2136690() {
   return (neuron0x2121a40()*-0.0595769);
}

double NNfunction_ss_cLdR::synapse0x21366d0() {
   return (neuron0x2121d80()*0.183524);
}

double NNfunction_ss_cLdR::synapse0x2136710() {
   return (neuron0x21220c0()*0.524584);
}

double NNfunction_ss_cLdR::synapse0x2136a90() {
   return (neuron0x211d500()*0.197138);
}

double NNfunction_ss_cLdR::synapse0x2136ad0() {
   return (neuron0x211d840()*-0.334737);
}

double NNfunction_ss_cLdR::synapse0x2136b10() {
   return (neuron0x211db80()*-0.639768);
}

double NNfunction_ss_cLdR::synapse0x2136b50() {
   return (neuron0x211dec0()*-0.785034);
}

double NNfunction_ss_cLdR::synapse0x2136b90() {
   return (neuron0x211e200()*0.0363702);
}

double NNfunction_ss_cLdR::synapse0x2136bd0() {
   return (neuron0x211e540()*0.168614);
}

double NNfunction_ss_cLdR::synapse0x2136c10() {
   return (neuron0x211e880()*0.110415);
}

double NNfunction_ss_cLdR::synapse0x2136c50() {
   return (neuron0x211ebc0()*0.125506);
}

double NNfunction_ss_cLdR::synapse0x2136c90() {
   return (neuron0x211ef00()*-0.0229307);
}

double NNfunction_ss_cLdR::synapse0x2136cd0() {
   return (neuron0x211f240()*0.040195);
}

double NNfunction_ss_cLdR::synapse0x2136d10() {
   return (neuron0x211f580()*0.013874);
}

double NNfunction_ss_cLdR::synapse0x2136d50() {
   return (neuron0x211f8c0()*0.0858718);
}

double NNfunction_ss_cLdR::synapse0x2136d90() {
   return (neuron0x211fc00()*-0.399953);
}

double NNfunction_ss_cLdR::synapse0x2136dd0() {
   return (neuron0x211ff40()*-0.0929582);
}

double NNfunction_ss_cLdR::synapse0x2136e10() {
   return (neuron0x2120280()*-0.130317);
}

double NNfunction_ss_cLdR::synapse0x2136e50() {
   return (neuron0x21205c0()*-0.0935474);
}

double NNfunction_ss_cLdR::synapse0x21368e0() {
   return (neuron0x2120900()*0.23821);
}

double NNfunction_ss_cLdR::synapse0x2136920() {
   return (neuron0x2120e60()*0.385274);
}

double NNfunction_ss_cLdR::synapse0x2136fa0() {
   return (neuron0x2121080()*-0.047865);
}

double NNfunction_ss_cLdR::synapse0x2136fe0() {
   return (neuron0x21213c0()*-0.241167);
}

double NNfunction_ss_cLdR::synapse0x2137020() {
   return (neuron0x2121700()*0.00383604);
}

double NNfunction_ss_cLdR::synapse0x2137060() {
   return (neuron0x2121a40()*0.25625);
}

double NNfunction_ss_cLdR::synapse0x21370a0() {
   return (neuron0x2121d80()*-0.0719397);
}

double NNfunction_ss_cLdR::synapse0x21370e0() {
   return (neuron0x21220c0()*-0.0254096);
}

double NNfunction_ss_cLdR::synapse0x2137460() {
   return (neuron0x211d500()*-0.088029);
}

double NNfunction_ss_cLdR::synapse0x21374a0() {
   return (neuron0x211d840()*-0.0903263);
}

double NNfunction_ss_cLdR::synapse0x21374e0() {
   return (neuron0x211db80()*0.0106643);
}

double NNfunction_ss_cLdR::synapse0x2137520() {
   return (neuron0x211dec0()*-3.39068);
}

double NNfunction_ss_cLdR::synapse0x2137560() {
   return (neuron0x211e200()*0.0999837);
}

double NNfunction_ss_cLdR::synapse0x21375a0() {
   return (neuron0x211e540()*0.0226371);
}

double NNfunction_ss_cLdR::synapse0x21375e0() {
   return (neuron0x211e880()*-0.037364);
}

double NNfunction_ss_cLdR::synapse0x2137620() {
   return (neuron0x211ebc0()*0.100056);
}

double NNfunction_ss_cLdR::synapse0x2137660() {
   return (neuron0x211ef00()*-0.0236219);
}

double NNfunction_ss_cLdR::synapse0x21376a0() {
   return (neuron0x211f240()*-0.0377602);
}

double NNfunction_ss_cLdR::synapse0x21376e0() {
   return (neuron0x211f580()*0.104728);
}

double NNfunction_ss_cLdR::synapse0x2137720() {
   return (neuron0x211f8c0()*0.1956);
}

double NNfunction_ss_cLdR::synapse0x2137760() {
   return (neuron0x211fc00()*0.644127);
}

double NNfunction_ss_cLdR::synapse0x21377a0() {
   return (neuron0x211ff40()*-0.0132555);
}

double NNfunction_ss_cLdR::synapse0x21377e0() {
   return (neuron0x2120280()*-0.0612048);
}

double NNfunction_ss_cLdR::synapse0x2137820() {
   return (neuron0x21205c0()*-0.00197698);
}

double NNfunction_ss_cLdR::synapse0x21372b0() {
   return (neuron0x2120900()*-0.0354911);
}

double NNfunction_ss_cLdR::synapse0x21372f0() {
   return (neuron0x2120e60()*0.515922);
}

double NNfunction_ss_cLdR::synapse0x2137970() {
   return (neuron0x2121080()*0.0704511);
}

double NNfunction_ss_cLdR::synapse0x21379b0() {
   return (neuron0x21213c0()*0.0703966);
}

double NNfunction_ss_cLdR::synapse0x21379f0() {
   return (neuron0x2121700()*-0.0240617);
}

double NNfunction_ss_cLdR::synapse0x2137a30() {
   return (neuron0x2121a40()*-0.0160379);
}

double NNfunction_ss_cLdR::synapse0x2137a70() {
   return (neuron0x2121d80()*0.0585542);
}

double NNfunction_ss_cLdR::synapse0x2137ab0() {
   return (neuron0x21220c0()*-0.0169977);
}

double NNfunction_ss_cLdR::synapse0x2137e30() {
   return (neuron0x211d500()*-0.00555186);
}

double NNfunction_ss_cLdR::synapse0x212c400() {
   return (neuron0x211d840()*-0.157986);
}

double NNfunction_ss_cLdR::synapse0x212c440() {
   return (neuron0x211db80()*0.16491);
}

double NNfunction_ss_cLdR::synapse0x212c480() {
   return (neuron0x211dec0()*-1.52545);
}

double NNfunction_ss_cLdR::synapse0x212c6d0() {
   return (neuron0x211e200()*-0.0761389);
}

double NNfunction_ss_cLdR::synapse0x212c710() {
   return (neuron0x211e540()*0.029665);
}

double NNfunction_ss_cLdR::synapse0x212c750() {
   return (neuron0x211e880()*-0.0967135);
}

double NNfunction_ss_cLdR::synapse0x212c9a0() {
   return (neuron0x211ebc0()*-0.550793);
}

double NNfunction_ss_cLdR::synapse0x212c9e0() {
   return (neuron0x211ef00()*0.0120491);
}

double NNfunction_ss_cLdR::synapse0x212cc30() {
   return (neuron0x211f240()*-0.0645836);
}

double NNfunction_ss_cLdR::synapse0x212cc70() {
   return (neuron0x211f580()*-0.0769094);
}

double NNfunction_ss_cLdR::synapse0x212ccb0() {
   return (neuron0x211f8c0()*-0.335974);
}

double NNfunction_ss_cLdR::synapse0x212cf00() {
   return (neuron0x211fc00()*0.450969);
}

double NNfunction_ss_cLdR::synapse0x212cf40() {
   return (neuron0x211ff40()*-0.227666);
}

double NNfunction_ss_cLdR::synapse0x212d190() {
   return (neuron0x2120280()*0.555086);
}

double NNfunction_ss_cLdR::synapse0x212d1d0() {
   return (neuron0x21205c0()*-0.261537);
}

double NNfunction_ss_cLdR::synapse0x2137c80() {
   return (neuron0x2120900()*0.207306);
}

double NNfunction_ss_cLdR::synapse0x2137cc0() {
   return (neuron0x2120e60()*0.335385);
}

double NNfunction_ss_cLdR::synapse0x212d320() {
   return (neuron0x2121080()*-0.254962);
}

double NNfunction_ss_cLdR::synapse0x212d830() {
   return (neuron0x21213c0()*-0.242403);
}

double NNfunction_ss_cLdR::synapse0x212d870() {
   return (neuron0x2121700()*0.0565989);
}

double NNfunction_ss_cLdR::synapse0x212d8b0() {
   return (neuron0x2121a40()*0.114647);
}

double NNfunction_ss_cLdR::synapse0x212db00() {
   return (neuron0x2121d80()*0.303939);
}

double NNfunction_ss_cLdR::synapse0x212db40() {
   return (neuron0x21220c0()*0.239173);
}

double NNfunction_ss_cLdR::synapse0x212d3f0() {
   return (neuron0x211d500()*0.0560465);
}

double NNfunction_ss_cLdR::synapse0x212d430() {
   return (neuron0x211d840()*-0.141738);
}

double NNfunction_ss_cLdR::synapse0x212d470() {
   return (neuron0x211db80()*0.0927301);
}

double NNfunction_ss_cLdR::synapse0x212d4b0() {
   return (neuron0x211dec0()*0.695459);
}

double NNfunction_ss_cLdR::synapse0x212de30() {
   return (neuron0x211e200()*0.878972);
}

double NNfunction_ss_cLdR::synapse0x213a180() {
   return (neuron0x211e540()*0.275594);
}

double NNfunction_ss_cLdR::synapse0x213a1c0() {
   return (neuron0x211e880()*0.87639);
}

double NNfunction_ss_cLdR::synapse0x213a200() {
   return (neuron0x211ebc0()*-0.297488);
}

double NNfunction_ss_cLdR::synapse0x213a240() {
   return (neuron0x211ef00()*0.304873);
}

double NNfunction_ss_cLdR::synapse0x213a280() {
   return (neuron0x211f240()*-0.5902);
}

double NNfunction_ss_cLdR::synapse0x213a2c0() {
   return (neuron0x211f580()*-0.766378);
}

double NNfunction_ss_cLdR::synapse0x213a300() {
   return (neuron0x211f8c0()*0.00276871);
}

double NNfunction_ss_cLdR::synapse0x213a340() {
   return (neuron0x211fc00()*-0.316213);
}

double NNfunction_ss_cLdR::synapse0x213a380() {
   return (neuron0x211ff40()*-0.384205);
}

double NNfunction_ss_cLdR::synapse0x213a3c0() {
   return (neuron0x2120280()*0.02351);
}

double NNfunction_ss_cLdR::synapse0x213a400() {
   return (neuron0x21205c0()*0.211675);
}

double NNfunction_ss_cLdR::synapse0x212dd10() {
   return (neuron0x2120900()*0.172156);
}

double NNfunction_ss_cLdR::synapse0x212dd50() {
   return (neuron0x2120e60()*-1.01262);
}

double NNfunction_ss_cLdR::synapse0x213a550() {
   return (neuron0x2121080()*0.450535);
}

double NNfunction_ss_cLdR::synapse0x213a590() {
   return (neuron0x21213c0()*-0.240738);
}

double NNfunction_ss_cLdR::synapse0x213a5d0() {
   return (neuron0x2121700()*0.143995);
}

double NNfunction_ss_cLdR::synapse0x213a610() {
   return (neuron0x2121a40()*-0.42968);
}

double NNfunction_ss_cLdR::synapse0x213a650() {
   return (neuron0x2121d80()*-0.00756519);
}

double NNfunction_ss_cLdR::synapse0x213a690() {
   return (neuron0x21220c0()*0.211332);
}

double NNfunction_ss_cLdR::synapse0x213aa10() {
   return (neuron0x211d500()*0.00578313);
}

double NNfunction_ss_cLdR::synapse0x213aa50() {
   return (neuron0x211d840()*0.0350931);
}

double NNfunction_ss_cLdR::synapse0x213aa90() {
   return (neuron0x211db80()*-0.025403);
}

double NNfunction_ss_cLdR::synapse0x213aad0() {
   return (neuron0x211dec0()*0.29194);
}

double NNfunction_ss_cLdR::synapse0x213ab10() {
   return (neuron0x211e200()*-0.051958);
}

double NNfunction_ss_cLdR::synapse0x213ab50() {
   return (neuron0x211e540()*0.0736789);
}

double NNfunction_ss_cLdR::synapse0x213ab90() {
   return (neuron0x211e880()*0.0163265);
}

double NNfunction_ss_cLdR::synapse0x213abd0() {
   return (neuron0x211ebc0()*-0.0500443);
}

double NNfunction_ss_cLdR::synapse0x213ac10() {
   return (neuron0x211ef00()*0.0254692);
}

double NNfunction_ss_cLdR::synapse0x213ac50() {
   return (neuron0x211f240()*0.015409);
}

double NNfunction_ss_cLdR::synapse0x213ac90() {
   return (neuron0x211f580()*-0.0435785);
}

double NNfunction_ss_cLdR::synapse0x213acd0() {
   return (neuron0x211f8c0()*-0.092331);
}

double NNfunction_ss_cLdR::synapse0x213ad10() {
   return (neuron0x211fc00()*1.6938);
}

double NNfunction_ss_cLdR::synapse0x213ad50() {
   return (neuron0x211ff40()*0.081681);
}

double NNfunction_ss_cLdR::synapse0x213ad90() {
   return (neuron0x2120280()*0.0054088);
}

double NNfunction_ss_cLdR::synapse0x213add0() {
   return (neuron0x21205c0()*-0.12617);
}

double NNfunction_ss_cLdR::synapse0x213a860() {
   return (neuron0x2120900()*0.0620139);
}

double NNfunction_ss_cLdR::synapse0x213a8a0() {
   return (neuron0x2120e60()*2.27286);
}

double NNfunction_ss_cLdR::synapse0x213af20() {
   return (neuron0x2121080()*-0.088304);
}

double NNfunction_ss_cLdR::synapse0x213af60() {
   return (neuron0x21213c0()*-0.069472);
}

double NNfunction_ss_cLdR::synapse0x213afa0() {
   return (neuron0x2121700()*-0.0113964);
}

double NNfunction_ss_cLdR::synapse0x213afe0() {
   return (neuron0x2121a40()*-0.0125792);
}

double NNfunction_ss_cLdR::synapse0x213b020() {
   return (neuron0x2121d80()*-0.0545662);
}

double NNfunction_ss_cLdR::synapse0x213b060() {
   return (neuron0x21220c0()*-0.0601385);
}

double NNfunction_ss_cLdR::synapse0x213b3e0() {
   return (neuron0x211d500()*-0.0197767);
}

double NNfunction_ss_cLdR::synapse0x213b420() {
   return (neuron0x211d840()*-0.0206228);
}

double NNfunction_ss_cLdR::synapse0x213b460() {
   return (neuron0x211db80()*-0.0186312);
}

double NNfunction_ss_cLdR::synapse0x213b4a0() {
   return (neuron0x211dec0()*0.0832987);
}

double NNfunction_ss_cLdR::synapse0x213b4e0() {
   return (neuron0x211e200()*0.0540421);
}

double NNfunction_ss_cLdR::synapse0x213b520() {
   return (neuron0x211e540()*0.0258321);
}

double NNfunction_ss_cLdR::synapse0x213b560() {
   return (neuron0x211e880()*0.0988192);
}

double NNfunction_ss_cLdR::synapse0x213b5a0() {
   return (neuron0x211ebc0()*-0.00966561);
}

double NNfunction_ss_cLdR::synapse0x213b5e0() {
   return (neuron0x211ef00()*0.00172367);
}

double NNfunction_ss_cLdR::synapse0x213b620() {
   return (neuron0x211f240()*0.0358067);
}

double NNfunction_ss_cLdR::synapse0x213b660() {
   return (neuron0x211f580()*0.00214826);
}

double NNfunction_ss_cLdR::synapse0x213b6a0() {
   return (neuron0x211f8c0()*-0.090252);
}

double NNfunction_ss_cLdR::synapse0x213b6e0() {
   return (neuron0x211fc00()*-1.81413);
}

double NNfunction_ss_cLdR::synapse0x213b720() {
   return (neuron0x211ff40()*0.0132303);
}

double NNfunction_ss_cLdR::synapse0x213b760() {
   return (neuron0x2120280()*0.00328099);
}

double NNfunction_ss_cLdR::synapse0x213b7a0() {
   return (neuron0x21205c0()*-0.0615916);
}

double NNfunction_ss_cLdR::synapse0x213b230() {
   return (neuron0x2120900()*-0.0249425);
}

double NNfunction_ss_cLdR::synapse0x213b270() {
   return (neuron0x2120e60()*0.373981);
}

double NNfunction_ss_cLdR::synapse0x213b8f0() {
   return (neuron0x2121080()*-0.0346634);
}

double NNfunction_ss_cLdR::synapse0x213b930() {
   return (neuron0x21213c0()*-0.044518);
}

double NNfunction_ss_cLdR::synapse0x213b970() {
   return (neuron0x2121700()*-0.0267313);
}

double NNfunction_ss_cLdR::synapse0x213b9b0() {
   return (neuron0x2121a40()*0.0346426);
}

double NNfunction_ss_cLdR::synapse0x213b9f0() {
   return (neuron0x2121d80()*-0.00821705);
}

double NNfunction_ss_cLdR::synapse0x213ba30() {
   return (neuron0x21220c0()*-0.00459511);
}

double NNfunction_ss_cLdR::synapse0x213bdb0() {
   return (neuron0x211d500()*0.0260488);
}

double NNfunction_ss_cLdR::synapse0x213bdf0() {
   return (neuron0x211d840()*-0.20046);
}

double NNfunction_ss_cLdR::synapse0x213be30() {
   return (neuron0x211db80()*0.223566);
}

double NNfunction_ss_cLdR::synapse0x213be70() {
   return (neuron0x211dec0()*0.0784539);
}

double NNfunction_ss_cLdR::synapse0x213beb0() {
   return (neuron0x211e200()*-0.12136);
}

double NNfunction_ss_cLdR::synapse0x213bef0() {
   return (neuron0x211e540()*0.294139);
}

double NNfunction_ss_cLdR::synapse0x213bf30() {
   return (neuron0x211e880()*0.159195);
}

double NNfunction_ss_cLdR::synapse0x213bf70() {
   return (neuron0x211ebc0()*-0.0107333);
}

double NNfunction_ss_cLdR::synapse0x213bfb0() {
   return (neuron0x211ef00()*-0.14569);
}

double NNfunction_ss_cLdR::synapse0x213bff0() {
   return (neuron0x211f240()*0.15877);
}

double NNfunction_ss_cLdR::synapse0x213c030() {
   return (neuron0x211f580()*-0.0886424);
}

double NNfunction_ss_cLdR::synapse0x213c070() {
   return (neuron0x211f8c0()*0.0530736);
}

double NNfunction_ss_cLdR::synapse0x213c0b0() {
   return (neuron0x211fc00()*0.208344);
}

double NNfunction_ss_cLdR::synapse0x213c0f0() {
   return (neuron0x211ff40()*-0.836052);
}

double NNfunction_ss_cLdR::synapse0x213c130() {
   return (neuron0x2120280()*-0.0251501);
}

double NNfunction_ss_cLdR::synapse0x213c170() {
   return (neuron0x21205c0()*-0.234914);
}

double NNfunction_ss_cLdR::synapse0x213bc00() {
   return (neuron0x2120900()*-1.09848);
}

double NNfunction_ss_cLdR::synapse0x213bc40() {
   return (neuron0x2120e60()*-0.0526742);
}

double NNfunction_ss_cLdR::synapse0x213c2c0() {
   return (neuron0x2121080()*0.0903169);
}

double NNfunction_ss_cLdR::synapse0x213c300() {
   return (neuron0x21213c0()*-0.346189);
}

double NNfunction_ss_cLdR::synapse0x213c340() {
   return (neuron0x2121700()*0.843734);
}

double NNfunction_ss_cLdR::synapse0x213c380() {
   return (neuron0x2121a40()*0.00334493);
}

double NNfunction_ss_cLdR::synapse0x213c3c0() {
   return (neuron0x2121d80()*-0.0695252);
}

double NNfunction_ss_cLdR::synapse0x213c400() {
   return (neuron0x21220c0()*-0.121377);
}

double NNfunction_ss_cLdR::synapse0x213c780() {
   return (neuron0x211d500()*0.0493928);
}

double NNfunction_ss_cLdR::synapse0x213c7c0() {
   return (neuron0x211d840()*0.00681966);
}

double NNfunction_ss_cLdR::synapse0x213c800() {
   return (neuron0x211db80()*0.0101832);
}

double NNfunction_ss_cLdR::synapse0x213c840() {
   return (neuron0x211dec0()*0.826286);
}

double NNfunction_ss_cLdR::synapse0x213c880() {
   return (neuron0x211e200()*0.0913871);
}

double NNfunction_ss_cLdR::synapse0x213c8c0() {
   return (neuron0x211e540()*-0.11715);
}

double NNfunction_ss_cLdR::synapse0x213c900() {
   return (neuron0x211e880()*-0.022158);
}

double NNfunction_ss_cLdR::synapse0x213c940() {
   return (neuron0x211ebc0()*-0.00777725);
}

double NNfunction_ss_cLdR::synapse0x213c980() {
   return (neuron0x211ef00()*0.0539785);
}

double NNfunction_ss_cLdR::synapse0x213c9c0() {
   return (neuron0x211f240()*0.0769991);
}

double NNfunction_ss_cLdR::synapse0x213ca00() {
   return (neuron0x211f580()*-0.0461543);
}

double NNfunction_ss_cLdR::synapse0x213ca40() {
   return (neuron0x211f8c0()*0.028274);
}

double NNfunction_ss_cLdR::synapse0x213ca80() {
   return (neuron0x211fc00()*1.07879);
}

double NNfunction_ss_cLdR::synapse0x213cac0() {
   return (neuron0x211ff40()*-0.116553);
}

double NNfunction_ss_cLdR::synapse0x213cb00() {
   return (neuron0x2120280()*0.04014);
}

double NNfunction_ss_cLdR::synapse0x213cb40() {
   return (neuron0x21205c0()*-0.12949);
}

double NNfunction_ss_cLdR::synapse0x213c5d0() {
   return (neuron0x2120900()*-0.00577814);
}

double NNfunction_ss_cLdR::synapse0x213c610() {
   return (neuron0x2120e60()*-0.334142);
}

double NNfunction_ss_cLdR::synapse0x213cc90() {
   return (neuron0x2121080()*-0.0344525);
}

double NNfunction_ss_cLdR::synapse0x213ccd0() {
   return (neuron0x21213c0()*-0.00817047);
}

double NNfunction_ss_cLdR::synapse0x213cd10() {
   return (neuron0x2121700()*-0.145315);
}

double NNfunction_ss_cLdR::synapse0x213cd50() {
   return (neuron0x2121a40()*-0.0604069);
}

double NNfunction_ss_cLdR::synapse0x213cd90() {
   return (neuron0x2121d80()*-0.103884);
}

double NNfunction_ss_cLdR::synapse0x213cdd0() {
   return (neuron0x21220c0()*-0.0443358);
}

double NNfunction_ss_cLdR::synapse0x213d150() {
   return (neuron0x211d500()*-0.0355088);
}

double NNfunction_ss_cLdR::synapse0x213d190() {
   return (neuron0x211d840()*0.091272);
}

double NNfunction_ss_cLdR::synapse0x213d1d0() {
   return (neuron0x211db80()*-0.0605669);
}

double NNfunction_ss_cLdR::synapse0x213d210() {
   return (neuron0x211dec0()*-2.88324);
}

double NNfunction_ss_cLdR::synapse0x213d250() {
   return (neuron0x211e200()*-0.047105);
}

double NNfunction_ss_cLdR::synapse0x213d290() {
   return (neuron0x211e540()*-0.0419936);
}

double NNfunction_ss_cLdR::synapse0x213d2d0() {
   return (neuron0x211e880()*-0.00728105);
}

double NNfunction_ss_cLdR::synapse0x213d310() {
   return (neuron0x211ebc0()*0.0722239);
}

double NNfunction_ss_cLdR::synapse0x213d350() {
   return (neuron0x211ef00()*-0.0474332);
}

double NNfunction_ss_cLdR::synapse0x213d390() {
   return (neuron0x211f240()*-0.0447214);
}

double NNfunction_ss_cLdR::synapse0x213d3d0() {
   return (neuron0x211f580()*0.0157751);
}

double NNfunction_ss_cLdR::synapse0x213d410() {
   return (neuron0x211f8c0()*-0.0569284);
}

double NNfunction_ss_cLdR::synapse0x213d450() {
   return (neuron0x211fc00()*-0.558765);
}

double NNfunction_ss_cLdR::synapse0x213d490() {
   return (neuron0x211ff40()*0.0402862);
}

double NNfunction_ss_cLdR::synapse0x213d4d0() {
   return (neuron0x2120280()*-0.0370541);
}

double NNfunction_ss_cLdR::synapse0x213d510() {
   return (neuron0x21205c0()*-0.040834);
}

double NNfunction_ss_cLdR::synapse0x213cfa0() {
   return (neuron0x2120900()*0.0061428);
}

double NNfunction_ss_cLdR::synapse0x213cfe0() {
   return (neuron0x2120e60()*-0.683562);
}

double NNfunction_ss_cLdR::synapse0x213d660() {
   return (neuron0x2121080()*-0.0788251);
}

double NNfunction_ss_cLdR::synapse0x213d6a0() {
   return (neuron0x21213c0()*-0.0321353);
}

double NNfunction_ss_cLdR::synapse0x213d6e0() {
   return (neuron0x2121700()*0.0379584);
}

double NNfunction_ss_cLdR::synapse0x213d720() {
   return (neuron0x2121a40()*-0.0492785);
}

double NNfunction_ss_cLdR::synapse0x213d760() {
   return (neuron0x2121d80()*-0.0577979);
}

double NNfunction_ss_cLdR::synapse0x213d7a0() {
   return (neuron0x21220c0()*0.07466);
}

double NNfunction_ss_cLdR::synapse0x213db20() {
   return (neuron0x211d500()*-0.146075);
}

double NNfunction_ss_cLdR::synapse0x213db60() {
   return (neuron0x211d840()*0.0710138);
}

double NNfunction_ss_cLdR::synapse0x213dba0() {
   return (neuron0x211db80()*0.306852);
}

double NNfunction_ss_cLdR::synapse0x213dbe0() {
   return (neuron0x211dec0()*0.0254999);
}

double NNfunction_ss_cLdR::synapse0x213dc20() {
   return (neuron0x211e200()*-0.0418397);
}

double NNfunction_ss_cLdR::synapse0x213dc60() {
   return (neuron0x211e540()*0.177942);
}

double NNfunction_ss_cLdR::synapse0x213dca0() {
   return (neuron0x211e880()*0.25306);
}

double NNfunction_ss_cLdR::synapse0x213dce0() {
   return (neuron0x211ebc0()*0.162957);
}

double NNfunction_ss_cLdR::synapse0x213dd20() {
   return (neuron0x211ef00()*0.232263);
}

double NNfunction_ss_cLdR::synapse0x213dd60() {
   return (neuron0x211f240()*-0.0585056);
}

double NNfunction_ss_cLdR::synapse0x213dda0() {
   return (neuron0x211f580()*0.0912103);
}

double NNfunction_ss_cLdR::synapse0x213dde0() {
   return (neuron0x211f8c0()*-0.502779);
}

double NNfunction_ss_cLdR::synapse0x213de20() {
   return (neuron0x211fc00()*-0.110141);
}

double NNfunction_ss_cLdR::synapse0x213de60() {
   return (neuron0x211ff40()*0.11439);
}

double NNfunction_ss_cLdR::synapse0x213dea0() {
   return (neuron0x2120280()*0.489789);
}

double NNfunction_ss_cLdR::synapse0x213dee0() {
   return (neuron0x21205c0()*-0.154835);
}

double NNfunction_ss_cLdR::synapse0x213d970() {
   return (neuron0x2120900()*0.331415);
}

double NNfunction_ss_cLdR::synapse0x213d9b0() {
   return (neuron0x2120e60()*0.248985);
}

double NNfunction_ss_cLdR::synapse0x213e030() {
   return (neuron0x2121080()*-0.198432);
}

double NNfunction_ss_cLdR::synapse0x213e070() {
   return (neuron0x21213c0()*-0.216543);
}

double NNfunction_ss_cLdR::synapse0x213e0b0() {
   return (neuron0x2121700()*0.202502);
}

double NNfunction_ss_cLdR::synapse0x213e0f0() {
   return (neuron0x2121a40()*0.325649);
}

double NNfunction_ss_cLdR::synapse0x213e130() {
   return (neuron0x2121d80()*-0.14898);
}

double NNfunction_ss_cLdR::synapse0x213e170() {
   return (neuron0x21220c0()*0.0749457);
}

double NNfunction_ss_cLdR::synapse0x213e4f0() {
   return (neuron0x211d500()*-0.0650143);
}

double NNfunction_ss_cLdR::synapse0x213e530() {
   return (neuron0x211d840()*-0.0286549);
}

double NNfunction_ss_cLdR::synapse0x213e570() {
   return (neuron0x211db80()*0.01066);
}

double NNfunction_ss_cLdR::synapse0x213e5b0() {
   return (neuron0x211dec0()*-2.7281);
}

double NNfunction_ss_cLdR::synapse0x213e5f0() {
   return (neuron0x211e200()*0.0223953);
}

double NNfunction_ss_cLdR::synapse0x213e630() {
   return (neuron0x211e540()*0.0181264);
}

double NNfunction_ss_cLdR::synapse0x213e670() {
   return (neuron0x211e880()*-0.0212341);
}

double NNfunction_ss_cLdR::synapse0x213e6b0() {
   return (neuron0x211ebc0()*0.0425965);
}

double NNfunction_ss_cLdR::synapse0x213e6f0() {
   return (neuron0x211ef00()*-0.0230393);
}

double NNfunction_ss_cLdR::synapse0x213e730() {
   return (neuron0x211f240()*-0.0158149);
}

double NNfunction_ss_cLdR::synapse0x213e770() {
   return (neuron0x211f580()*0.0507459);
}

double NNfunction_ss_cLdR::synapse0x213e7b0() {
   return (neuron0x211f8c0()*0.112877);
}

double NNfunction_ss_cLdR::synapse0x213e7f0() {
   return (neuron0x211fc00()*0.946615);
}

double NNfunction_ss_cLdR::synapse0x213e830() {
   return (neuron0x211ff40()*0.00945699);
}

double NNfunction_ss_cLdR::synapse0x213e870() {
   return (neuron0x2120280()*0.00167308);
}

double NNfunction_ss_cLdR::synapse0x213e8b0() {
   return (neuron0x21205c0()*0.0157436);
}

double NNfunction_ss_cLdR::synapse0x213e340() {
   return (neuron0x2120900()*0.0102288);
}

double NNfunction_ss_cLdR::synapse0x213e380() {
   return (neuron0x2120e60()*0.862901);
}

double NNfunction_ss_cLdR::synapse0x213ea00() {
   return (neuron0x2121080()*0.0436884);
}

double NNfunction_ss_cLdR::synapse0x213ea40() {
   return (neuron0x21213c0()*0.0295655);
}

double NNfunction_ss_cLdR::synapse0x213ea80() {
   return (neuron0x2121700()*0.0133475);
}

double NNfunction_ss_cLdR::synapse0x213eac0() {
   return (neuron0x2121a40()*0.0040431);
}

double NNfunction_ss_cLdR::synapse0x213eb00() {
   return (neuron0x2121d80()*0.0446424);
}

double NNfunction_ss_cLdR::synapse0x213eb40() {
   return (neuron0x21220c0()*-0.0100441);
}

double NNfunction_ss_cLdR::synapse0x21275f0() {
   return (neuron0x211d500()*0.165772);
}

double NNfunction_ss_cLdR::synapse0x2127630() {
   return (neuron0x211d840()*0.030763);
}

double NNfunction_ss_cLdR::synapse0x2127670() {
   return (neuron0x211db80()*0.141652);
}

double NNfunction_ss_cLdR::synapse0x21276b0() {
   return (neuron0x211dec0()*1.73126);
}

double NNfunction_ss_cLdR::synapse0x21276f0() {
   return (neuron0x211e200()*-0.069601);
}

double NNfunction_ss_cLdR::synapse0x2127730() {
   return (neuron0x211e540()*-0.0543252);
}

double NNfunction_ss_cLdR::synapse0x2127770() {
   return (neuron0x211e880()*-0.185762);
}

double NNfunction_ss_cLdR::synapse0x21277b0() {
   return (neuron0x211ebc0()*0.20781);
}

double NNfunction_ss_cLdR::synapse0x213f2d0() {
   return (neuron0x211ef00()*0.101822);
}

double NNfunction_ss_cLdR::synapse0x213f310() {
   return (neuron0x211f240()*0.0756237);
}

double NNfunction_ss_cLdR::synapse0x213f350() {
   return (neuron0x211f580()*-0.0499608);
}

double NNfunction_ss_cLdR::synapse0x213f390() {
   return (neuron0x211f8c0()*0.202329);
}

double NNfunction_ss_cLdR::synapse0x213f3d0() {
   return (neuron0x211fc00()*0.0456196);
}

double NNfunction_ss_cLdR::synapse0x213f410() {
   return (neuron0x211ff40()*-0.301588);
}

double NNfunction_ss_cLdR::synapse0x213f450() {
   return (neuron0x2120280()*0.0243252);
}

double NNfunction_ss_cLdR::synapse0x213f490() {
   return (neuron0x21205c0()*0.176479);
}

double NNfunction_ss_cLdR::synapse0x213ed10() {
   return (neuron0x2120900()*-0.0996197);
}

double NNfunction_ss_cLdR::synapse0x213ed50() {
   return (neuron0x2120e60()*0.0875712);
}

double NNfunction_ss_cLdR::synapse0x213f5e0() {
   return (neuron0x2121080()*0.0928836);
}

double NNfunction_ss_cLdR::synapse0x213f620() {
   return (neuron0x21213c0()*0.0364576);
}

double NNfunction_ss_cLdR::synapse0x213f660() {
   return (neuron0x2121700()*-0.101151);
}

double NNfunction_ss_cLdR::synapse0x213f6a0() {
   return (neuron0x2121a40()*-0.0935674);
}

double NNfunction_ss_cLdR::synapse0x213f6e0() {
   return (neuron0x2121d80()*-0.0986159);
}

double NNfunction_ss_cLdR::synapse0x213f720() {
   return (neuron0x21220c0()*-0.0151429);
}

double NNfunction_ss_cLdR::synapse0x213faa0() {
   return (neuron0x211d500()*-0.645568);
}

double NNfunction_ss_cLdR::synapse0x213fae0() {
   return (neuron0x211d840()*0.782758);
}

double NNfunction_ss_cLdR::synapse0x213fb20() {
   return (neuron0x211db80()*-0.308057);
}

double NNfunction_ss_cLdR::synapse0x213fb60() {
   return (neuron0x211dec0()*0.236766);
}

double NNfunction_ss_cLdR::synapse0x213fba0() {
   return (neuron0x211e200()*-0.647755);
}

double NNfunction_ss_cLdR::synapse0x213fbe0() {
   return (neuron0x211e540()*0.558024);
}

double NNfunction_ss_cLdR::synapse0x213fc20() {
   return (neuron0x211e880()*1.17772);
}

double NNfunction_ss_cLdR::synapse0x213fc60() {
   return (neuron0x211ebc0()*-0.756056);
}

double NNfunction_ss_cLdR::synapse0x213fca0() {
   return (neuron0x211ef00()*0.788819);
}

double NNfunction_ss_cLdR::synapse0x213fce0() {
   return (neuron0x211f240()*-0.192762);
}

double NNfunction_ss_cLdR::synapse0x213fd20() {
   return (neuron0x211f580()*-0.543898);
}

double NNfunction_ss_cLdR::synapse0x213fd60() {
   return (neuron0x211f8c0()*0.27866);
}

double NNfunction_ss_cLdR::synapse0x213fda0() {
   return (neuron0x211fc00()*0.712203);
}

double NNfunction_ss_cLdR::synapse0x213fde0() {
   return (neuron0x211ff40()*0.554293);
}

double NNfunction_ss_cLdR::synapse0x213fe20() {
   return (neuron0x2120280()*0.00839087);
}

double NNfunction_ss_cLdR::synapse0x213fe60() {
   return (neuron0x21205c0()*-0.0371558);
}

double NNfunction_ss_cLdR::synapse0x213f8f0() {
   return (neuron0x2120900()*0.419468);
}

double NNfunction_ss_cLdR::synapse0x213f930() {
   return (neuron0x2120e60()*-0.142731);
}

double NNfunction_ss_cLdR::synapse0x213ffb0() {
   return (neuron0x2121080()*0.405562);
}

double NNfunction_ss_cLdR::synapse0x213fff0() {
   return (neuron0x21213c0()*0.149694);
}

double NNfunction_ss_cLdR::synapse0x2140030() {
   return (neuron0x2121700()*-0.200352);
}

double NNfunction_ss_cLdR::synapse0x2140070() {
   return (neuron0x2121a40()*0.244957);
}

double NNfunction_ss_cLdR::synapse0x21400b0() {
   return (neuron0x2121d80()*-0.0836409);
}

double NNfunction_ss_cLdR::synapse0x21400f0() {
   return (neuron0x21220c0()*-0.749606);
}

double NNfunction_ss_cLdR::synapse0x2140470() {
   return (neuron0x211d500()*-0.163202);
}

double NNfunction_ss_cLdR::synapse0x21404b0() {
   return (neuron0x211d840()*0.128677);
}

double NNfunction_ss_cLdR::synapse0x21404f0() {
   return (neuron0x211db80()*0.100401);
}

double NNfunction_ss_cLdR::synapse0x2140530() {
   return (neuron0x211dec0()*-0.101812);
}

double NNfunction_ss_cLdR::synapse0x2140570() {
   return (neuron0x211e200()*0.068607);
}

double NNfunction_ss_cLdR::synapse0x21405b0() {
   return (neuron0x211e540()*-0.0520861);
}

double NNfunction_ss_cLdR::synapse0x21405f0() {
   return (neuron0x211e880()*0.00633663);
}

double NNfunction_ss_cLdR::synapse0x2140630() {
   return (neuron0x211ebc0()*-0.0933411);
}

double NNfunction_ss_cLdR::synapse0x2140670() {
   return (neuron0x211ef00()*0.17322);
}

double NNfunction_ss_cLdR::synapse0x21406b0() {
   return (neuron0x211f240()*0.102264);
}

double NNfunction_ss_cLdR::synapse0x21406f0() {
   return (neuron0x211f580()*0.144329);
}

double NNfunction_ss_cLdR::synapse0x2140730() {
   return (neuron0x211f8c0()*-0.0986551);
}

double NNfunction_ss_cLdR::synapse0x2140770() {
   return (neuron0x211fc00()*0.932381);
}

double NNfunction_ss_cLdR::synapse0x21407b0() {
   return (neuron0x211ff40()*0.0266284);
}

double NNfunction_ss_cLdR::synapse0x21407f0() {
   return (neuron0x2120280()*0.132923);
}

double NNfunction_ss_cLdR::synapse0x2140830() {
   return (neuron0x21205c0()*0.338838);
}

double NNfunction_ss_cLdR::synapse0x21402c0() {
   return (neuron0x2120900()*0.153012);
}

double NNfunction_ss_cLdR::synapse0x2140300() {
   return (neuron0x2120e60()*0.955274);
}

double NNfunction_ss_cLdR::synapse0x2130e30() {
   return (neuron0x2121080()*0.342778);
}

double NNfunction_ss_cLdR::synapse0x2130e70() {
   return (neuron0x21213c0()*-0.0491883);
}

double NNfunction_ss_cLdR::synapse0x2130eb0() {
   return (neuron0x2121700()*-0.0889933);
}

double NNfunction_ss_cLdR::synapse0x2130ef0() {
   return (neuron0x2121a40()*0.149306);
}

double NNfunction_ss_cLdR::synapse0x2130f30() {
   return (neuron0x2121d80()*0.113658);
}

double NNfunction_ss_cLdR::synapse0x2130f70() {
   return (neuron0x21220c0()*0.13292);
}

double NNfunction_ss_cLdR::synapse0x21312f0() {
   return (neuron0x211d500()*-0.169152);
}

double NNfunction_ss_cLdR::synapse0x2131330() {
   return (neuron0x211d840()*-0.148516);
}

double NNfunction_ss_cLdR::synapse0x2131370() {
   return (neuron0x211db80()*-0.268704);
}

double NNfunction_ss_cLdR::synapse0x21313b0() {
   return (neuron0x211dec0()*-0.167983);
}

double NNfunction_ss_cLdR::synapse0x21313f0() {
   return (neuron0x211e200()*0.453926);
}

double NNfunction_ss_cLdR::synapse0x2131430() {
   return (neuron0x211e540()*0.0278124);
}

double NNfunction_ss_cLdR::synapse0x2131470() {
   return (neuron0x211e880()*-0.318648);
}

double NNfunction_ss_cLdR::synapse0x21314b0() {
   return (neuron0x211ebc0()*0.0225881);
}

double NNfunction_ss_cLdR::synapse0x21314f0() {
   return (neuron0x211ef00()*-0.145668);
}

double NNfunction_ss_cLdR::synapse0x2131530() {
   return (neuron0x211f240()*-0.249611);
}

double NNfunction_ss_cLdR::synapse0x2131570() {
   return (neuron0x211f580()*0.501395);
}

double NNfunction_ss_cLdR::synapse0x21315b0() {
   return (neuron0x211f8c0()*-0.0684535);
}

double NNfunction_ss_cLdR::synapse0x21315f0() {
   return (neuron0x211fc00()*0.536914);
}

double NNfunction_ss_cLdR::synapse0x2131630() {
   return (neuron0x211ff40()*0.0616489);
}

double NNfunction_ss_cLdR::synapse0x2131670() {
   return (neuron0x2120280()*-0.139119);
}

double NNfunction_ss_cLdR::synapse0x21316b0() {
   return (neuron0x21205c0()*0.116037);
}

double NNfunction_ss_cLdR::synapse0x2131140() {
   return (neuron0x2120900()*-0.185413);
}

double NNfunction_ss_cLdR::synapse0x2131180() {
   return (neuron0x2120e60()*0.900617);
}

double NNfunction_ss_cLdR::synapse0x2131800() {
   return (neuron0x2121080()*0.0921071);
}

double NNfunction_ss_cLdR::synapse0x2131840() {
   return (neuron0x21213c0()*0.103113);
}

double NNfunction_ss_cLdR::synapse0x2131880() {
   return (neuron0x2121700()*-0.280051);
}

double NNfunction_ss_cLdR::synapse0x21318c0() {
   return (neuron0x2121a40()*-0.269615);
}

double NNfunction_ss_cLdR::synapse0x2131900() {
   return (neuron0x2121d80()*-0.0154172);
}

double NNfunction_ss_cLdR::synapse0x2131940() {
   return (neuron0x21220c0()*-0.0328714);
}

double NNfunction_ss_cLdR::synapse0x2131cc0() {
   return (neuron0x211d500()*-0.490833);
}

double NNfunction_ss_cLdR::synapse0x2131d00() {
   return (neuron0x211d840()*-0.337563);
}

double NNfunction_ss_cLdR::synapse0x2131d40() {
   return (neuron0x211db80()*-1.15189);
}

double NNfunction_ss_cLdR::synapse0x2131d80() {
   return (neuron0x211dec0()*0.650573);
}

double NNfunction_ss_cLdR::synapse0x2131dc0() {
   return (neuron0x211e200()*0.493622);
}

double NNfunction_ss_cLdR::synapse0x2131e00() {
   return (neuron0x211e540()*0.184415);
}

double NNfunction_ss_cLdR::synapse0x2131e40() {
   return (neuron0x211e880()*-0.321347);
}

double NNfunction_ss_cLdR::synapse0x2131e80() {
   return (neuron0x211ebc0()*0.100281);
}

double NNfunction_ss_cLdR::synapse0x2131ec0() {
   return (neuron0x211ef00()*0.361952);
}

double NNfunction_ss_cLdR::synapse0x2131f00() {
   return (neuron0x211f240()*-0.144145);
}

double NNfunction_ss_cLdR::synapse0x2131f40() {
   return (neuron0x211f580()*0.471946);
}

double NNfunction_ss_cLdR::synapse0x2131f80() {
   return (neuron0x211f8c0()*0.113194);
}

double NNfunction_ss_cLdR::synapse0x2131fc0() {
   return (neuron0x211fc00()*0.227997);
}

double NNfunction_ss_cLdR::synapse0x2132000() {
   return (neuron0x211ff40()*-0.159004);
}

double NNfunction_ss_cLdR::synapse0x2132040() {
   return (neuron0x2120280()*-0.192359);
}

double NNfunction_ss_cLdR::synapse0x2132080() {
   return (neuron0x21205c0()*-0.256567);
}

double NNfunction_ss_cLdR::synapse0x2131b10() {
   return (neuron0x2120900()*-0.220867);
}

double NNfunction_ss_cLdR::synapse0x2131b50() {
   return (neuron0x2120e60()*0.0152212);
}

double NNfunction_ss_cLdR::synapse0x21321d0() {
   return (neuron0x2121080()*0.0352369);
}

double NNfunction_ss_cLdR::synapse0x2132210() {
   return (neuron0x21213c0()*0.255235);
}

double NNfunction_ss_cLdR::synapse0x2132250() {
   return (neuron0x2121700()*-0.722294);
}

double NNfunction_ss_cLdR::synapse0x2132290() {
   return (neuron0x2121a40()*0.120556);
}

double NNfunction_ss_cLdR::synapse0x21322d0() {
   return (neuron0x2121d80()*-0.116419);
}

double NNfunction_ss_cLdR::synapse0x2132310() {
   return (neuron0x21220c0()*-0.168089);
}

double NNfunction_ss_cLdR::synapse0x2132690() {
   return (neuron0x211d500()*-0.076796);
}

double NNfunction_ss_cLdR::synapse0x21326d0() {
   return (neuron0x211d840()*-0.185483);
}

double NNfunction_ss_cLdR::synapse0x2132710() {
   return (neuron0x211db80()*0.0927854);
}

double NNfunction_ss_cLdR::synapse0x2132750() {
   return (neuron0x211dec0()*1.98782);
}

double NNfunction_ss_cLdR::synapse0x2132790() {
   return (neuron0x211e200()*-0.0221016);
}

double NNfunction_ss_cLdR::synapse0x21327d0() {
   return (neuron0x211e540()*0.303791);
}

double NNfunction_ss_cLdR::synapse0x2132810() {
   return (neuron0x211e880()*0.110552);
}

double NNfunction_ss_cLdR::synapse0x2132850() {
   return (neuron0x211ebc0()*-0.263403);
}

double NNfunction_ss_cLdR::synapse0x2132890() {
   return (neuron0x211ef00()*0.0236243);
}

double NNfunction_ss_cLdR::synapse0x21328d0() {
   return (neuron0x211f240()*0.0117546);
}

double NNfunction_ss_cLdR::synapse0x2132910() {
   return (neuron0x211f580()*0.127307);
}

double NNfunction_ss_cLdR::synapse0x2132950() {
   return (neuron0x211f8c0()*0.225661);
}

double NNfunction_ss_cLdR::synapse0x2132990() {
   return (neuron0x211fc00()*-0.324514);
}

double NNfunction_ss_cLdR::synapse0x21329d0() {
   return (neuron0x211ff40()*-0.432948);
}

double NNfunction_ss_cLdR::synapse0x2132a10() {
   return (neuron0x2120280()*0.336839);
}

double NNfunction_ss_cLdR::synapse0x2132a50() {
   return (neuron0x21205c0()*0.060569);
}

double NNfunction_ss_cLdR::synapse0x21324e0() {
   return (neuron0x2120900()*-0.423714);
}

double NNfunction_ss_cLdR::synapse0x2132520() {
   return (neuron0x2120e60()*0.429087);
}

double NNfunction_ss_cLdR::synapse0x2132ba0() {
   return (neuron0x2121080()*-0.265949);
}

double NNfunction_ss_cLdR::synapse0x2132be0() {
   return (neuron0x21213c0()*-0.224421);
}

double NNfunction_ss_cLdR::synapse0x2132c20() {
   return (neuron0x2121700()*0.23052);
}

double NNfunction_ss_cLdR::synapse0x2132c60() {
   return (neuron0x2121a40()*-0.0279721);
}

double NNfunction_ss_cLdR::synapse0x2132ca0() {
   return (neuron0x2121d80()*-0.127193);
}

double NNfunction_ss_cLdR::synapse0x2132ce0() {
   return (neuron0x21220c0()*-0.0206137);
}

double NNfunction_ss_cLdR::synapse0x2144bb0() {
   return (neuron0x211d500()*-0.249503);
}

double NNfunction_ss_cLdR::synapse0x2144bf0() {
   return (neuron0x211d840()*-0.0820449);
}

double NNfunction_ss_cLdR::synapse0x2144c30() {
   return (neuron0x211db80()*0.493892);
}

double NNfunction_ss_cLdR::synapse0x2144c70() {
   return (neuron0x211dec0()*0.0398752);
}

double NNfunction_ss_cLdR::synapse0x2144cb0() {
   return (neuron0x211e200()*-0.0829978);
}

double NNfunction_ss_cLdR::synapse0x2144cf0() {
   return (neuron0x211e540()*-0.290502);
}

double NNfunction_ss_cLdR::synapse0x2144d30() {
   return (neuron0x211e880()*-0.231223);
}

double NNfunction_ss_cLdR::synapse0x2144d70() {
   return (neuron0x211ebc0()*0.0416877);
}

double NNfunction_ss_cLdR::synapse0x2144db0() {
   return (neuron0x211ef00()*-0.201751);
}

double NNfunction_ss_cLdR::synapse0x2144df0() {
   return (neuron0x211f240()*0.150579);
}

double NNfunction_ss_cLdR::synapse0x2144e30() {
   return (neuron0x211f580()*-0.0721677);
}

double NNfunction_ss_cLdR::synapse0x2144e70() {
   return (neuron0x211f8c0()*-0.0773379);
}

double NNfunction_ss_cLdR::synapse0x2144eb0() {
   return (neuron0x211fc00()*0.239185);
}

double NNfunction_ss_cLdR::synapse0x2144ef0() {
   return (neuron0x211ff40()*0.66499);
}

double NNfunction_ss_cLdR::synapse0x2144f30() {
   return (neuron0x2120280()*0.278725);
}

double NNfunction_ss_cLdR::synapse0x2144f70() {
   return (neuron0x21205c0()*0.0912694);
}

double NNfunction_ss_cLdR::synapse0x2132d20() {
   return (neuron0x2120900()*1.14576);
}

double NNfunction_ss_cLdR::synapse0x2132d60() {
   return (neuron0x2120e60()*0.366809);
}

double NNfunction_ss_cLdR::synapse0x21450c0() {
   return (neuron0x2121080()*-0.318528);
}

double NNfunction_ss_cLdR::synapse0x2145100() {
   return (neuron0x21213c0()*-0.467298);
}

double NNfunction_ss_cLdR::synapse0x2145140() {
   return (neuron0x2121700()*1.7581);
}

double NNfunction_ss_cLdR::synapse0x2145180() {
   return (neuron0x2121a40()*0.408134);
}

double NNfunction_ss_cLdR::synapse0x21451c0() {
   return (neuron0x2121d80()*0.0208102);
}

double NNfunction_ss_cLdR::synapse0x2145200() {
   return (neuron0x21220c0()*-0.644779);
}

double NNfunction_ss_cLdR::synapse0x2145580() {
   return (neuron0x211d500()*-0.170378);
}

double NNfunction_ss_cLdR::synapse0x21455c0() {
   return (neuron0x211d840()*-0.290255);
}

double NNfunction_ss_cLdR::synapse0x2145600() {
   return (neuron0x211db80()*-0.339828);
}

double NNfunction_ss_cLdR::synapse0x2145640() {
   return (neuron0x211dec0()*0.0702162);
}

double NNfunction_ss_cLdR::synapse0x2145680() {
   return (neuron0x211e200()*-0.220816);
}

double NNfunction_ss_cLdR::synapse0x21456c0() {
   return (neuron0x211e540()*1.41767);
}

double NNfunction_ss_cLdR::synapse0x2145700() {
   return (neuron0x211e880()*0.489544);
}

double NNfunction_ss_cLdR::synapse0x2145740() {
   return (neuron0x211ebc0()*0.342334);
}

double NNfunction_ss_cLdR::synapse0x2145780() {
   return (neuron0x211ef00()*0.710197);
}

double NNfunction_ss_cLdR::synapse0x21457c0() {
   return (neuron0x211f240()*0.429957);
}

double NNfunction_ss_cLdR::synapse0x2145800() {
   return (neuron0x211f580()*0.740222);
}

double NNfunction_ss_cLdR::synapse0x2145840() {
   return (neuron0x211f8c0()*0.0213318);
}

double NNfunction_ss_cLdR::synapse0x2145880() {
   return (neuron0x211fc00()*0.197679);
}

double NNfunction_ss_cLdR::synapse0x21458c0() {
   return (neuron0x211ff40()*0.28373);
}

double NNfunction_ss_cLdR::synapse0x2145900() {
   return (neuron0x2120280()*-0.259213);
}

double NNfunction_ss_cLdR::synapse0x2145940() {
   return (neuron0x21205c0()*-0.421015);
}

double NNfunction_ss_cLdR::synapse0x21453d0() {
   return (neuron0x2120900()*-0.731664);
}

double NNfunction_ss_cLdR::synapse0x2145410() {
   return (neuron0x2120e60()*-0.249665);
}

double NNfunction_ss_cLdR::synapse0x2145a90() {
   return (neuron0x2121080()*-0.438315);
}

double NNfunction_ss_cLdR::synapse0x2145ad0() {
   return (neuron0x21213c0()*-0.039125);
}

double NNfunction_ss_cLdR::synapse0x2145b10() {
   return (neuron0x2121700()*0.467118);
}

double NNfunction_ss_cLdR::synapse0x2145b50() {
   return (neuron0x2121a40()*0.0855723);
}

double NNfunction_ss_cLdR::synapse0x2145b90() {
   return (neuron0x2121d80()*-0.361791);
}

double NNfunction_ss_cLdR::synapse0x2145bd0() {
   return (neuron0x21220c0()*0.0430516);
}

double NNfunction_ss_cLdR::synapse0x2145f50() {
   return (neuron0x211d500()*0.0898093);
}

double NNfunction_ss_cLdR::synapse0x2145f90() {
   return (neuron0x211d840()*-0.833902);
}

double NNfunction_ss_cLdR::synapse0x2145fd0() {
   return (neuron0x211db80()*0.0764668);
}

double NNfunction_ss_cLdR::synapse0x2146010() {
   return (neuron0x211dec0()*0.0138844);
}

double NNfunction_ss_cLdR::synapse0x2146050() {
   return (neuron0x211e200()*-0.0230134);
}

double NNfunction_ss_cLdR::synapse0x2146090() {
   return (neuron0x211e540()*0.463544);
}

double NNfunction_ss_cLdR::synapse0x21460d0() {
   return (neuron0x211e880()*0.643212);
}

double NNfunction_ss_cLdR::synapse0x2146110() {
   return (neuron0x211ebc0()*0.145729);
}

double NNfunction_ss_cLdR::synapse0x2146150() {
   return (neuron0x211ef00()*0.0490488);
}

double NNfunction_ss_cLdR::synapse0x2146190() {
   return (neuron0x211f240()*-0.260317);
}

double NNfunction_ss_cLdR::synapse0x21461d0() {
   return (neuron0x211f580()*0.0414088);
}

double NNfunction_ss_cLdR::synapse0x2146210() {
   return (neuron0x211f8c0()*-0.129576);
}

double NNfunction_ss_cLdR::synapse0x2146250() {
   return (neuron0x211fc00()*0.372857);
}

double NNfunction_ss_cLdR::synapse0x2146290() {
   return (neuron0x211ff40()*0.517806);
}

double NNfunction_ss_cLdR::synapse0x21462d0() {
   return (neuron0x2120280()*-0.450067);
}

double NNfunction_ss_cLdR::synapse0x2146310() {
   return (neuron0x21205c0()*0.684181);
}

double NNfunction_ss_cLdR::synapse0x2145da0() {
   return (neuron0x2120900()*0.279716);
}

double NNfunction_ss_cLdR::synapse0x2145de0() {
   return (neuron0x2120e60()*0.08461);
}

double NNfunction_ss_cLdR::synapse0x2146460() {
   return (neuron0x2121080()*1.0989);
}

double NNfunction_ss_cLdR::synapse0x21464a0() {
   return (neuron0x21213c0()*0.0835);
}

double NNfunction_ss_cLdR::synapse0x21464e0() {
   return (neuron0x2121700()*0.00655204);
}

double NNfunction_ss_cLdR::synapse0x2146520() {
   return (neuron0x2121a40()*-0.0946389);
}

double NNfunction_ss_cLdR::synapse0x2146560() {
   return (neuron0x2121d80()*0.114372);
}

double NNfunction_ss_cLdR::synapse0x21465a0() {
   return (neuron0x21220c0()*0.00993399);
}

double NNfunction_ss_cLdR::synapse0x2146920() {
   return (neuron0x211d500()*-0.0960681);
}

double NNfunction_ss_cLdR::synapse0x2146960() {
   return (neuron0x211d840()*0.310374);
}

double NNfunction_ss_cLdR::synapse0x21469a0() {
   return (neuron0x211db80()*-0.469585);
}

double NNfunction_ss_cLdR::synapse0x21469e0() {
   return (neuron0x211dec0()*0.88051);
}

double NNfunction_ss_cLdR::synapse0x2146a20() {
   return (neuron0x211e200()*-0.248364);
}

double NNfunction_ss_cLdR::synapse0x2146a60() {
   return (neuron0x211e540()*-0.191449);
}

double NNfunction_ss_cLdR::synapse0x2146aa0() {
   return (neuron0x211e880()*-0.0933565);
}

double NNfunction_ss_cLdR::synapse0x2146ae0() {
   return (neuron0x211ebc0()*-0.704276);
}

double NNfunction_ss_cLdR::synapse0x2146b20() {
   return (neuron0x211ef00()*-0.34922);
}

double NNfunction_ss_cLdR::synapse0x2146b60() {
   return (neuron0x211f240()*-0.0277064);
}

double NNfunction_ss_cLdR::synapse0x2146ba0() {
   return (neuron0x211f580()*0.0292889);
}

double NNfunction_ss_cLdR::synapse0x2146be0() {
   return (neuron0x211f8c0()*-0.180721);
}

double NNfunction_ss_cLdR::synapse0x2146c20() {
   return (neuron0x211fc00()*0.0564988);
}

double NNfunction_ss_cLdR::synapse0x2146c60() {
   return (neuron0x211ff40()*-0.77877);
}

double NNfunction_ss_cLdR::synapse0x2146ca0() {
   return (neuron0x2120280()*-0.212992);
}

double NNfunction_ss_cLdR::synapse0x2146ce0() {
   return (neuron0x21205c0()*0.129296);
}

double NNfunction_ss_cLdR::synapse0x2146770() {
   return (neuron0x2120900()*0.21453);
}

double NNfunction_ss_cLdR::synapse0x21467b0() {
   return (neuron0x2120e60()*-0.214878);
}

double NNfunction_ss_cLdR::synapse0x2146e30() {
   return (neuron0x2121080()*0.430443);
}

double NNfunction_ss_cLdR::synapse0x2146e70() {
   return (neuron0x21213c0()*0.279836);
}

double NNfunction_ss_cLdR::synapse0x2146eb0() {
   return (neuron0x2121700()*-0.204816);
}

double NNfunction_ss_cLdR::synapse0x2146ef0() {
   return (neuron0x2121a40()*0.225772);
}

double NNfunction_ss_cLdR::synapse0x2146f30() {
   return (neuron0x2121d80()*-0.0505551);
}

double NNfunction_ss_cLdR::synapse0x2146f70() {
   return (neuron0x21220c0()*-0.21138);
}

double NNfunction_ss_cLdR::synapse0x2123510() {
   return (neuron0x2122560()*-1.33179);
}

double NNfunction_ss_cLdR::synapse0x2123550() {
   return (neuron0x2122e70()*2.43225);
}

double NNfunction_ss_cLdR::synapse0x2124a20() {
   return (neuron0x2123950()*3.41595);
}

double NNfunction_ss_cLdR::synapse0x2124a60() {
   return (neuron0x1edd1e0()*-0.75069);
}

double NNfunction_ss_cLdR::synapse0x21253f0() {
   return (neuron0x2124770()*1.11655);
}

double NNfunction_ss_cLdR::synapse0x2125430() {
   return (neuron0x2125140()*-1.001);
}

double NNfunction_ss_cLdR::synapse0x21261c0() {
   return (neuron0x2125f10()*3.43919);
}

double NNfunction_ss_cLdR::synapse0x2126200() {
   return (neuron0x21268e0()*0.989517);
}

double NNfunction_ss_cLdR::synapse0x2126b90() {
   return (neuron0x21272b0()*1.03367);
}

double NNfunction_ss_cLdR::synapse0x2126bd0() {
   return (neuron0x2127d90()*2.93805);
}

double NNfunction_ss_cLdR::synapse0x2127560() {
   return (neuron0x2128760()*-1.4037);
}

double NNfunction_ss_cLdR::synapse0x21275a0() {
   return (neuron0x2125840()*0.729665);
}

double NNfunction_ss_cLdR::synapse0x2128040() {
   return (neuron0x212a310()*3.67935);
}

double NNfunction_ss_cLdR::synapse0x2128080() {
   return (neuron0x212ace0()*0.950743);
}

double NNfunction_ss_cLdR::synapse0x2128a10() {
   return (neuron0x212b6b0()*-1.50649);
}

double NNfunction_ss_cLdR::synapse0x2128a50() {
   return (neuron0x212c080()*-1.05257);
}

double NNfunction_ss_cLdR::synapse0x2125af0() {
   return (neuron0x212de90()*-0.652772);
}

double NNfunction_ss_cLdR::synapse0x2125b30() {
   return (neuron0x212e170()*-1.04867);
}

double NNfunction_ss_cLdR::synapse0x212a5c0() {
   return (neuron0x212eb40()*1.17644);
}

double NNfunction_ss_cLdR::synapse0x212a600() {
   return (neuron0x212f510()*3.82731);
}

double NNfunction_ss_cLdR::synapse0x212af90() {
   return (neuron0x212fee0()*-1.83451);
}

double NNfunction_ss_cLdR::synapse0x212afd0() {
   return (neuron0x21308b0()*-1.16433);
}

double NNfunction_ss_cLdR::synapse0x212b960() {
   return (neuron0x2129400()*-1.56135);
}

double NNfunction_ss_cLdR::synapse0x212b9a0() {
   return (neuron0x2129dd0()*-3.43643);
}

double NNfunction_ss_cLdR::synapse0x212c330() {
   return (neuron0x2133640()*-1.44048);
}

double NNfunction_ss_cLdR::synapse0x212c370() {
   return (neuron0x2134010()*1.84545);
}

double NNfunction_ss_cLdR::synapse0x21204a0() {
   return (neuron0x21349e0()*-1.07374);
}

double NNfunction_ss_cLdR::synapse0x21204e0() {
   return (neuron0x21353b0()*1.37295);
}

double NNfunction_ss_cLdR::synapse0x212e420() {
   return (neuron0x2135d80()*-0.622086);
}

double NNfunction_ss_cLdR::synapse0x212e460() {
   return (neuron0x2136750()*3.29718);
}

double NNfunction_ss_cLdR::synapse0x212edf0() {
   return (neuron0x2137120()*-7.16416);
}

double NNfunction_ss_cLdR::synapse0x212ee30() {
   return (neuron0x2137af0()*-1.75502);
}

double NNfunction_ss_cLdR::synapse0x212f7c0() {
   return (neuron0x212db80()*-1.27774);
}

double NNfunction_ss_cLdR::synapse0x212f800() {
   return (neuron0x213a6d0()*0.992072);
}

double NNfunction_ss_cLdR::synapse0x2130190() {
   return (neuron0x213b0a0()*-2.10225);
}

double NNfunction_ss_cLdR::synapse0x21301d0() {
   return (neuron0x213ba70()*-1.44229);
}

double NNfunction_ss_cLdR::synapse0x2130b60() {
   return (neuron0x213c440()*0.475768);
}

double NNfunction_ss_cLdR::synapse0x2130ba0() {
   return (neuron0x213ce10()*-0.419265);
}

double NNfunction_ss_cLdR::synapse0x21296b0() {
   return (neuron0x213d7e0()*-1.32036);
}

double NNfunction_ss_cLdR::synapse0x21296f0() {
   return (neuron0x213e1b0()*0.761816);
}

double NNfunction_ss_cLdR::synapse0x2132f60() {
   return (neuron0x213eb80()*-3.54321);
}

double NNfunction_ss_cLdR::synapse0x2132fa0() {
   return (neuron0x213f760()*1.30624);
}

double NNfunction_ss_cLdR::synapse0x21338f0() {
   return (neuron0x2140130()*3.4545);
}

double NNfunction_ss_cLdR::synapse0x2133930() {
   return (neuron0x2130fb0()*2.62148);
}

double NNfunction_ss_cLdR::synapse0x21342c0() {
   return (neuron0x2131980()*-1.3675);
}

double NNfunction_ss_cLdR::synapse0x2134300() {
   return (neuron0x2132350()*-0.411741);
}

double NNfunction_ss_cLdR::synapse0x2134c90() {
   return (neuron0x2144990()*-1.58666);
}

double NNfunction_ss_cLdR::synapse0x2134cd0() {
   return (neuron0x2145240()*-1.39276);
}

double NNfunction_ss_cLdR::synapse0x2135660() {
   return (neuron0x2145c10()*1.07287);
}

double NNfunction_ss_cLdR::synapse0x21356a0() {
   return (neuron0x21465e0()*-1.76898);
}

double NNfunction_ss_cLdR::synapse0x2137da0() {
   return (neuron0x2122560()*-0.0267036);
}

double NNfunction_ss_cLdR::synapse0x2137de0() {
   return (neuron0x2122e70()*0.0476347);
}

double NNfunction_ss_cLdR::synapse0x212d360() {
   return (neuron0x2123950()*-0.091062);
}

double NNfunction_ss_cLdR::synapse0x212d3a0() {
   return (neuron0x1edd1e0()*-0.0405861);
}

double NNfunction_ss_cLdR::synapse0x213a980() {
   return (neuron0x2124770()*-0.568657);
}

double NNfunction_ss_cLdR::synapse0x213a9c0() {
   return (neuron0x2125140()*0.961038);
}

double NNfunction_ss_cLdR::synapse0x213b350() {
   return (neuron0x2125f10()*-1.45121);
}

double NNfunction_ss_cLdR::synapse0x213b390() {
   return (neuron0x21268e0()*1.30898);
}

double NNfunction_ss_cLdR::synapse0x213bd20() {
   return (neuron0x21272b0()*-0.0102784);
}

double NNfunction_ss_cLdR::synapse0x213bd60() {
   return (neuron0x2127d90()*0.00907002);
}

double NNfunction_ss_cLdR::synapse0x213c6f0() {
   return (neuron0x2128760()*-0.0518373);
}

double NNfunction_ss_cLdR::synapse0x213c730() {
   return (neuron0x2125840()*0.00909819);
}

double NNfunction_ss_cLdR::synapse0x213d0c0() {
   return (neuron0x212a310()*-1.4436);
}

double NNfunction_ss_cLdR::synapse0x213d100() {
   return (neuron0x212ace0()*-0.00115139);
}

double NNfunction_ss_cLdR::synapse0x213da90() {
   return (neuron0x212b6b0()*-0.00678381);
}

double NNfunction_ss_cLdR::synapse0x213dad0() {
   return (neuron0x212c080()*-0.0154122);
}

double NNfunction_ss_cLdR::synapse0x213e460() {
   return (neuron0x212de90()*-0.0503653);
}

double NNfunction_ss_cLdR::synapse0x213e4a0() {
   return (neuron0x212e170()*-0.038633);
}

double NNfunction_ss_cLdR::synapse0x213ee30() {
   return (neuron0x212eb40()*0.0177859);
}

double NNfunction_ss_cLdR::synapse0x213ee70() {
   return (neuron0x212f510()*0.745586);
}

double NNfunction_ss_cLdR::synapse0x213fa10() {
   return (neuron0x212fee0()*0.00583343);
}

double NNfunction_ss_cLdR::synapse0x213fa50() {
   return (neuron0x21308b0()*-0.0369569);
}

double NNfunction_ss_cLdR::synapse0x21403e0() {
   return (neuron0x2129400()*0.104512);
}

double NNfunction_ss_cLdR::synapse0x2140420() {
   return (neuron0x2129dd0()*-0.139393);
}

double NNfunction_ss_cLdR::synapse0x2131260() {
   return (neuron0x2133640()*-0.0457041);
}

double NNfunction_ss_cLdR::synapse0x21312a0() {
   return (neuron0x2134010()*-0.0715207);
}

double NNfunction_ss_cLdR::synapse0x2131c30() {
   return (neuron0x21349e0()*-0.0252473);
}

double NNfunction_ss_cLdR::synapse0x2131c70() {
   return (neuron0x21353b0()*0.00434484);
}

double NNfunction_ss_cLdR::synapse0x2132600() {
   return (neuron0x2135d80()*-0.0113483);
}

double NNfunction_ss_cLdR::synapse0x2132640() {
   return (neuron0x2136750()*0.0400018);
}

double NNfunction_ss_cLdR::synapse0x2144b20() {
   return (neuron0x2137120()*0.876183);
}

double NNfunction_ss_cLdR::synapse0x2144b60() {
   return (neuron0x2137af0()*-0.0360078);
}

double NNfunction_ss_cLdR::synapse0x21454f0() {
   return (neuron0x212db80()*-0.00688029);
}

double NNfunction_ss_cLdR::synapse0x2145530() {
   return (neuron0x213a6d0()*-0.0252232);
}

double NNfunction_ss_cLdR::synapse0x2145ec0() {
   return (neuron0x213b0a0()*0.477077);
}

double NNfunction_ss_cLdR::synapse0x2145f00() {
   return (neuron0x213ba70()*-0.0355555);
}

double NNfunction_ss_cLdR::synapse0x2146890() {
   return (neuron0x213c440()*-0.184838);
}

double NNfunction_ss_cLdR::synapse0x21468d0() {
   return (neuron0x213ce10()*0.245241);
}

double NNfunction_ss_cLdR::synapse0x2122780() {
   return (neuron0x213d7e0()*0.00428912);
}

double NNfunction_ss_cLdR::synapse0x21227c0() {
   return (neuron0x213e1b0()*-1.60923);
}

double NNfunction_ss_cLdR::synapse0x2136030() {
   return (neuron0x213eb80()*0.143068);
}

double NNfunction_ss_cLdR::synapse0x2136070() {
   return (neuron0x213f760()*0.00953547);
}

double NNfunction_ss_cLdR::synapse0x2146fb0() {
   return (neuron0x2140130()*0.0585264);
}

double NNfunction_ss_cLdR::synapse0x2146ff0() {
   return (neuron0x2130fb0()*-0.00606011);
}

double NNfunction_ss_cLdR::synapse0x2147030() {
   return (neuron0x2131980()*-0.0159088);
}

double NNfunction_ss_cLdR::synapse0x2147070() {
   return (neuron0x2132350()*-0.0706591);
}

double NNfunction_ss_cLdR::synapse0x214df20() {
   return (neuron0x2144990()*-0.0570027);
}

double NNfunction_ss_cLdR::synapse0x214df60() {
   return (neuron0x2145240()*-0.00714115);
}

double NNfunction_ss_cLdR::synapse0x214dfa0() {
   return (neuron0x2145c10()*0.036598);
}

double NNfunction_ss_cLdR::synapse0x214dfe0() {
   return (neuron0x21465e0()*-0.0355682);
}

double NNfunction_ss_cLdR::synapse0x214e360() {
   return (neuron0x2122560()*-0.136429);
}

double NNfunction_ss_cLdR::synapse0x214e3a0() {
   return (neuron0x2122e70()*0.232066);
}

double NNfunction_ss_cLdR::synapse0x214e3e0() {
   return (neuron0x2123950()*-0.0896276);
}

double NNfunction_ss_cLdR::synapse0x214e420() {
   return (neuron0x1edd1e0()*0.360365);
}

double NNfunction_ss_cLdR::synapse0x214e460() {
   return (neuron0x2124770()*0.545437);
}

double NNfunction_ss_cLdR::synapse0x214e4a0() {
   return (neuron0x2125140()*0.338872);
}

double NNfunction_ss_cLdR::synapse0x214e4e0() {
   return (neuron0x2125f10()*-0.971116);
}

double NNfunction_ss_cLdR::synapse0x214e520() {
   return (neuron0x21268e0()*0.962234);
}

double NNfunction_ss_cLdR::synapse0x214e560() {
   return (neuron0x21272b0()*0.377955);
}

double NNfunction_ss_cLdR::synapse0x214e5a0() {
   return (neuron0x2127d90()*-0.813772);
}

double NNfunction_ss_cLdR::synapse0x214e5e0() {
   return (neuron0x2128760()*0.198842);
}

double NNfunction_ss_cLdR::synapse0x214e620() {
   return (neuron0x2125840()*-0.233549);
}

double NNfunction_ss_cLdR::synapse0x214e660() {
   return (neuron0x212a310()*-1.20831);
}

double NNfunction_ss_cLdR::synapse0x214e6a0() {
   return (neuron0x212ace0()*0.452264);
}

double NNfunction_ss_cLdR::synapse0x214e6e0() {
   return (neuron0x212b6b0()*-0.253634);
}

double NNfunction_ss_cLdR::synapse0x214e720() {
   return (neuron0x212c080()*0.0805155);
}

double NNfunction_ss_cLdR::synapse0x214e1b0() {
   return (neuron0x212de90()*0.639943);
}

double NNfunction_ss_cLdR::synapse0x214e1f0() {
   return (neuron0x212e170()*0.344084);
}

double NNfunction_ss_cLdR::synapse0x214e870() {
   return (neuron0x212eb40()*-0.358371);
}

double NNfunction_ss_cLdR::synapse0x214e8b0() {
   return (neuron0x212f510()*0.720468);
}

double NNfunction_ss_cLdR::synapse0x214e8f0() {
   return (neuron0x212fee0()*-0.770827);
}

double NNfunction_ss_cLdR::synapse0x214e930() {
   return (neuron0x21308b0()*0.00268654);
}

double NNfunction_ss_cLdR::synapse0x214e970() {
   return (neuron0x2129400()*0.0752069);
}

double NNfunction_ss_cLdR::synapse0x214e9b0() {
   return (neuron0x2129dd0()*-0.341015);
}

double NNfunction_ss_cLdR::synapse0x214e9f0() {
   return (neuron0x2133640()*0.0701202);
}

double NNfunction_ss_cLdR::synapse0x214ea30() {
   return (neuron0x2134010()*-0.177885);
}

double NNfunction_ss_cLdR::synapse0x214ea70() {
   return (neuron0x21349e0()*0.804395);
}

double NNfunction_ss_cLdR::synapse0x214eab0() {
   return (neuron0x21353b0()*0.349941);
}

double NNfunction_ss_cLdR::synapse0x214eaf0() {
   return (neuron0x2135d80()*0.204599);
}

double NNfunction_ss_cLdR::synapse0x214eb30() {
   return (neuron0x2136750()*-0.0673468);
}

double NNfunction_ss_cLdR::synapse0x214eb70() {
   return (neuron0x2137120()*-0.136234);
}

double NNfunction_ss_cLdR::synapse0x214ebb0() {
   return (neuron0x2137af0()*-0.165575);
}

double NNfunction_ss_cLdR::synapse0x214e760() {
   return (neuron0x212db80()*-0.41311);
}

double NNfunction_ss_cLdR::synapse0x214e7a0() {
   return (neuron0x213a6d0()*1.43495);
}

double NNfunction_ss_cLdR::synapse0x214e7e0() {
   return (neuron0x213b0a0()*-0.8735);
}

double NNfunction_ss_cLdR::synapse0x214e820() {
   return (neuron0x213ba70()*0.526268);
}

double NNfunction_ss_cLdR::synapse0x214ee00() {
   return (neuron0x213c440()*-1.04339);
}

double NNfunction_ss_cLdR::synapse0x214ee40() {
   return (neuron0x213ce10()*3.43909);
}

double NNfunction_ss_cLdR::synapse0x214ee80() {
   return (neuron0x213d7e0()*0.757796);
}

double NNfunction_ss_cLdR::synapse0x214eec0() {
   return (neuron0x213e1b0()*-2.82016);
}

double NNfunction_ss_cLdR::synapse0x214ef00() {
   return (neuron0x213eb80()*-0.0877586);
}

double NNfunction_ss_cLdR::synapse0x214ef40() {
   return (neuron0x213f760()*0.244377);
}

double NNfunction_ss_cLdR::synapse0x214ef80() {
   return (neuron0x2140130()*0.0823004);
}

double NNfunction_ss_cLdR::synapse0x214efc0() {
   return (neuron0x2130fb0()*0.400005);
}

double NNfunction_ss_cLdR::synapse0x214f000() {
   return (neuron0x2131980()*-0.0166459);
}

double NNfunction_ss_cLdR::synapse0x214f040() {
   return (neuron0x2132350()*0.771921);
}

double NNfunction_ss_cLdR::synapse0x214f080() {
   return (neuron0x2144990()*0.164404);
}

double NNfunction_ss_cLdR::synapse0x214f0c0() {
   return (neuron0x2145240()*-0.576537);
}

double NNfunction_ss_cLdR::synapse0x214f100() {
   return (neuron0x2145c10()*-0.461239);
}

double NNfunction_ss_cLdR::synapse0x214f140() {
   return (neuron0x21465e0()*-0.314916);
}

double NNfunction_ss_cLdR::synapse0x214f4c0() {
   return (neuron0x2122560()*-0.355706);
}

double NNfunction_ss_cLdR::synapse0x214f500() {
   return (neuron0x2122e70()*-0.43863);
}

double NNfunction_ss_cLdR::synapse0x214f540() {
   return (neuron0x2123950()*-0.150275);
}

double NNfunction_ss_cLdR::synapse0x214f580() {
   return (neuron0x1edd1e0()*-0.0559217);
}

double NNfunction_ss_cLdR::synapse0x214f5c0() {
   return (neuron0x2124770()*-3.33115);
}

double NNfunction_ss_cLdR::synapse0x214f600() {
   return (neuron0x2125140()*0.550014);
}

double NNfunction_ss_cLdR::synapse0x214f640() {
   return (neuron0x2125f10()*4.60536);
}

double NNfunction_ss_cLdR::synapse0x214f680() {
   return (neuron0x21268e0()*-1.3885);
}

double NNfunction_ss_cLdR::synapse0x214f6c0() {
   return (neuron0x21272b0()*-0.137619);
}

double NNfunction_ss_cLdR::synapse0x214f700() {
   return (neuron0x2127d90()*0.892476);
}

double NNfunction_ss_cLdR::synapse0x214f740() {
   return (neuron0x2128760()*-0.588023);
}

double NNfunction_ss_cLdR::synapse0x214f780() {
   return (neuron0x2125840()*0.470006);
}

double NNfunction_ss_cLdR::synapse0x214f7c0() {
   return (neuron0x212a310()*-1.95182);
}

double NNfunction_ss_cLdR::synapse0x214f800() {
   return (neuron0x212ace0()*-1.1998);
}

double NNfunction_ss_cLdR::synapse0x214f840() {
   return (neuron0x212b6b0()*-0.563927);
}

double NNfunction_ss_cLdR::synapse0x214f880() {
   return (neuron0x212c080()*0.0702828);
}

double NNfunction_ss_cLdR::synapse0x214f310() {
   return (neuron0x212de90()*1.15678);
}

double NNfunction_ss_cLdR::synapse0x214f350() {
   return (neuron0x212e170()*-0.203652);
}

double NNfunction_ss_cLdR::synapse0x214f9d0() {
   return (neuron0x212eb40()*-0.745986);
}

double NNfunction_ss_cLdR::synapse0x214fa10() {
   return (neuron0x212f510()*0.441166);
}

double NNfunction_ss_cLdR::synapse0x214fa50() {
   return (neuron0x212fee0()*-0.0306478);
}

double NNfunction_ss_cLdR::synapse0x214fa90() {
   return (neuron0x21308b0()*0.0741375);
}

double NNfunction_ss_cLdR::synapse0x214fad0() {
   return (neuron0x2129400()*0.568761);
}

double NNfunction_ss_cLdR::synapse0x214fb10() {
   return (neuron0x2129dd0()*0.783455);
}

double NNfunction_ss_cLdR::synapse0x214fb50() {
   return (neuron0x2133640()*-0.0171566);
}

double NNfunction_ss_cLdR::synapse0x214fb90() {
   return (neuron0x2134010()*0.000555955);
}

double NNfunction_ss_cLdR::synapse0x214fbd0() {
   return (neuron0x21349e0()*2.08157);
}

double NNfunction_ss_cLdR::synapse0x214fc10() {
   return (neuron0x21353b0()*-0.204924);
}

double NNfunction_ss_cLdR::synapse0x214fc50() {
   return (neuron0x2135d80()*1.12916);
}

double NNfunction_ss_cLdR::synapse0x214fc90() {
   return (neuron0x2136750()*0.165441);
}

double NNfunction_ss_cLdR::synapse0x214fcd0() {
   return (neuron0x2137120()*0.329674);
}

double NNfunction_ss_cLdR::synapse0x214fd10() {
   return (neuron0x2137af0()*0.577574);
}

double NNfunction_ss_cLdR::synapse0x214f8c0() {
   return (neuron0x212db80()*-0.0778326);
}

double NNfunction_ss_cLdR::synapse0x214f900() {
   return (neuron0x213a6d0()*2.28648);
}

double NNfunction_ss_cLdR::synapse0x214f940() {
   return (neuron0x213b0a0()*0.261343);
}

double NNfunction_ss_cLdR::synapse0x214f980() {
   return (neuron0x213ba70()*0.130434);
}

double NNfunction_ss_cLdR::synapse0x214ff60() {
   return (neuron0x213c440()*-0.737457);
}

double NNfunction_ss_cLdR::synapse0x214ffa0() {
   return (neuron0x213ce10()*0.489504);
}

double NNfunction_ss_cLdR::synapse0x214ffe0() {
   return (neuron0x213d7e0()*-0.384428);
}

double NNfunction_ss_cLdR::synapse0x2150020() {
   return (neuron0x213e1b0()*1.84422);
}

double NNfunction_ss_cLdR::synapse0x2150060() {
   return (neuron0x213eb80()*0.142311);
}

double NNfunction_ss_cLdR::synapse0x21500a0() {
   return (neuron0x213f760()*-0.196607);
}

double NNfunction_ss_cLdR::synapse0x21500e0() {
   return (neuron0x2140130()*-0.316341);
}

double NNfunction_ss_cLdR::synapse0x2150120() {
   return (neuron0x2130fb0()*-0.381985);
}

double NNfunction_ss_cLdR::synapse0x2150160() {
   return (neuron0x2131980()*-0.267193);
}

double NNfunction_ss_cLdR::synapse0x21501a0() {
   return (neuron0x2132350()*-1.45702);
}

double NNfunction_ss_cLdR::synapse0x21501e0() {
   return (neuron0x2144990()*-0.0694993);
}

double NNfunction_ss_cLdR::synapse0x2150220() {
   return (neuron0x2145240()*0.211138);
}

double NNfunction_ss_cLdR::synapse0x2150260() {
   return (neuron0x2145c10()*-0.058047);
}

double NNfunction_ss_cLdR::synapse0x21502a0() {
   return (neuron0x21465e0()*-0.868494);
}

double NNfunction_ss_cLdR::synapse0x2150620() {
   return (neuron0x2122560()*0.263086);
}

double NNfunction_ss_cLdR::synapse0x2150660() {
   return (neuron0x2122e70()*0.319143);
}

double NNfunction_ss_cLdR::synapse0x21506a0() {
   return (neuron0x2123950()*-1.08232);
}

double NNfunction_ss_cLdR::synapse0x21506e0() {
   return (neuron0x1edd1e0()*0.0321637);
}

double NNfunction_ss_cLdR::synapse0x2150720() {
   return (neuron0x2124770()*4.59826);
}

double NNfunction_ss_cLdR::synapse0x2150760() {
   return (neuron0x2125140()*1.13476);
}

double NNfunction_ss_cLdR::synapse0x21507a0() {
   return (neuron0x2125f10()*-1.31474);
}

double NNfunction_ss_cLdR::synapse0x21507e0() {
   return (neuron0x21268e0()*1.0783);
}

double NNfunction_ss_cLdR::synapse0x2150820() {
   return (neuron0x21272b0()*0.0553719);
}

double NNfunction_ss_cLdR::synapse0x2150860() {
   return (neuron0x2127d90()*-1.02792);
}

double NNfunction_ss_cLdR::synapse0x21508a0() {
   return (neuron0x2128760()*0.415734);
}

double NNfunction_ss_cLdR::synapse0x21508e0() {
   return (neuron0x2125840()*-0.471876);
}

double NNfunction_ss_cLdR::synapse0x2150920() {
   return (neuron0x212a310()*2.43191);
}

double NNfunction_ss_cLdR::synapse0x2150960() {
   return (neuron0x212ace0()*1.88086);
}

double NNfunction_ss_cLdR::synapse0x21509a0() {
   return (neuron0x212b6b0()*0.597395);
}

double NNfunction_ss_cLdR::synapse0x21509e0() {
   return (neuron0x212c080()*-0.121234);
}

double NNfunction_ss_cLdR::synapse0x2150470() {
   return (neuron0x212de90()*-1.18595);
}

double NNfunction_ss_cLdR::synapse0x21504b0() {
   return (neuron0x212e170()*0.16789);
}

double NNfunction_ss_cLdR::synapse0x2150b30() {
   return (neuron0x212eb40()*0.378518);
}

double NNfunction_ss_cLdR::synapse0x2150b70() {
   return (neuron0x212f510()*-0.771122);
}

double NNfunction_ss_cLdR::synapse0x2150bb0() {
   return (neuron0x212fee0()*-0.0189431);
}

double NNfunction_ss_cLdR::synapse0x2150bf0() {
   return (neuron0x21308b0()*-0.0764338);
}

double NNfunction_ss_cLdR::synapse0x2150c30() {
   return (neuron0x2129400()*-0.74861);
}

double NNfunction_ss_cLdR::synapse0x2150c70() {
   return (neuron0x2129dd0()*-1.38851);
}

double NNfunction_ss_cLdR::synapse0x2150cb0() {
   return (neuron0x2133640()*0.000408276);
}

double NNfunction_ss_cLdR::synapse0x2150cf0() {
   return (neuron0x2134010()*0.163679);
}

double NNfunction_ss_cLdR::synapse0x2150d30() {
   return (neuron0x21349e0()*-2.62789);
}

double NNfunction_ss_cLdR::synapse0x2150d70() {
   return (neuron0x21353b0()*0.112943);
}

double NNfunction_ss_cLdR::synapse0x2150db0() {
   return (neuron0x2135d80()*-1.02482);
}

double NNfunction_ss_cLdR::synapse0x2150df0() {
   return (neuron0x2136750()*-0.014893);
}

double NNfunction_ss_cLdR::synapse0x2150e30() {
   return (neuron0x2137120()*-1.43783);
}

double NNfunction_ss_cLdR::synapse0x2150e70() {
   return (neuron0x2137af0()*-0.858684);
}

double NNfunction_ss_cLdR::synapse0x2150a20() {
   return (neuron0x212db80()*0.145192);
}

double NNfunction_ss_cLdR::synapse0x2150a60() {
   return (neuron0x213a6d0()*-0.116093);
}

double NNfunction_ss_cLdR::synapse0x2150aa0() {
   return (neuron0x213b0a0()*0.0725984);
}

double NNfunction_ss_cLdR::synapse0x2150ae0() {
   return (neuron0x213ba70()*-0.0963552);
}

double NNfunction_ss_cLdR::synapse0x21510c0() {
   return (neuron0x213c440()*-0.0907763);
}

double NNfunction_ss_cLdR::synapse0x2151100() {
   return (neuron0x213ce10()*-2.79196);
}

double NNfunction_ss_cLdR::synapse0x2151140() {
   return (neuron0x213d7e0()*0.375628);
}

double NNfunction_ss_cLdR::synapse0x2151180() {
   return (neuron0x213e1b0()*-0.813869);
}

double NNfunction_ss_cLdR::synapse0x21511c0() {
   return (neuron0x213eb80()*1.05);
}

double NNfunction_ss_cLdR::synapse0x2151200() {
   return (neuron0x213f760()*0.138165);
}

double NNfunction_ss_cLdR::synapse0x2151240() {
   return (neuron0x2140130()*-0.087301);
}

double NNfunction_ss_cLdR::synapse0x2151280() {
   return (neuron0x2130fb0()*-0.0377524);
}

double NNfunction_ss_cLdR::synapse0x21512c0() {
   return (neuron0x2131980()*0.210315);
}

double NNfunction_ss_cLdR::synapse0x2151300() {
   return (neuron0x2132350()*1.42677);
}

double NNfunction_ss_cLdR::synapse0x2151340() {
   return (neuron0x2144990()*-0.0324076);
}

double NNfunction_ss_cLdR::synapse0x2151380() {
   return (neuron0x2145240()*-0.0969595);
}

double NNfunction_ss_cLdR::synapse0x21513c0() {
   return (neuron0x2145c10()*0.0382615);
}

double NNfunction_ss_cLdR::synapse0x2151400() {
   return (neuron0x21465e0()*0.834379);
}

double NNfunction_ss_cLdR::synapse0x2122520() {
   return (neuron0x214d7e0()*-11.561);
}

double NNfunction_ss_cLdR::synapse0x2151660() {
   return (neuron0x214db80()*6.93386);
}

double NNfunction_ss_cLdR::synapse0x21516a0() {
   return (neuron0x214e020()*5.87532);
}

double NNfunction_ss_cLdR::synapse0x21516e0() {
   return (neuron0x214f180()*-4.25942);
}

double NNfunction_ss_cLdR::synapse0x2151720() {
   return (neuron0x21502e0()*-4.43116);
}

