#include "NNfunction_ns_chi02_sR.h"
#include <cmath>

double NNfunction_ns_chi02_sR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.9269)/15.2842;
   input1 = (in1 - -11.9491)/528.986;
   input2 = (in2 - 503.489)/579.892;
   input3 = (in3 - 24.8185)/771.658;
   input4 = (in4 - 927.221)/905.077;
   input5 = (in5 - 812.385)/908.352;
   input6 = (in6 - 815.097)/905.9;
   input7 = (in7 - 827.585)/891.424;
   input8 = (in8 - 815.179)/924.008;
   input9 = (in9 - 803.711)/916.275;
   input10 = (in10 - 853.201)/914.008;
   input11 = (in11 - 661.833)/801.763;
   input12 = (in12 - 657.802)/794.443;
   input13 = (in13 - 457.488)/464.019;
   input14 = (in14 - 672.693)/762.861;
   input15 = (in15 - 676.321)/766.22;
   input16 = (in16 - 495.94)/526.707;
   input17 = (in17 - 683.059)/829.819;
   input18 = (in18 - 176.433)/142.717;
   input19 = (in19 - 706.589)/803.501;
   input20 = (in20 - -30.3796)/458.993;
   input21 = (in21 - -41.513)/1061.52;
   input22 = (in22 - 3.45968)/1089.31;
   input23 = (in23 - -37.8965)/423.071;
   switch(index) {
     case 0:
         return neuron0x28d56a0();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi02_sR::Value(int index, double* input) {
   input0 = (input[0] - 23.9269)/15.2842;
   input1 = (input[1] - -11.9491)/528.986;
   input2 = (input[2] - 503.489)/579.892;
   input3 = (input[3] - 24.8185)/771.658;
   input4 = (input[4] - 927.221)/905.077;
   input5 = (input[5] - 812.385)/908.352;
   input6 = (input[6] - 815.097)/905.9;
   input7 = (input[7] - 827.585)/891.424;
   input8 = (input[8] - 815.179)/924.008;
   input9 = (input[9] - 803.711)/916.275;
   input10 = (input[10] - 853.201)/914.008;
   input11 = (input[11] - 661.833)/801.763;
   input12 = (input[12] - 657.802)/794.443;
   input13 = (input[13] - 457.488)/464.019;
   input14 = (input[14] - 672.693)/762.861;
   input15 = (input[15] - 676.321)/766.22;
   input16 = (input[16] - 495.94)/526.707;
   input17 = (input[17] - 683.059)/829.819;
   input18 = (input[18] - 176.433)/142.717;
   input19 = (input[19] - 706.589)/803.501;
   input20 = (input[20] - -30.3796)/458.993;
   input21 = (input[21] - -41.513)/1061.52;
   input22 = (input[22] - 3.45968)/1089.31;
   input23 = (input[23] - -37.8965)/423.071;
   switch(index) {
     case 0:
         return neuron0x28d56a0();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi02_sR::neuron0x28a1790() {
   return input0;
}

double NNfunction_ns_chi02_sR::neuron0x28a1ad0() {
   return input1;
}

double NNfunction_ns_chi02_sR::neuron0x28a1e10() {
   return input2;
}

double NNfunction_ns_chi02_sR::neuron0x28a2150() {
   return input3;
}

double NNfunction_ns_chi02_sR::neuron0x28a2490() {
   return input4;
}

double NNfunction_ns_chi02_sR::neuron0x28a27d0() {
   return input5;
}

double NNfunction_ns_chi02_sR::neuron0x28a2b10() {
   return input6;
}

double NNfunction_ns_chi02_sR::neuron0x28a2e50() {
   return input7;
}

double NNfunction_ns_chi02_sR::neuron0x28a3190() {
   return input8;
}

double NNfunction_ns_chi02_sR::neuron0x28a34d0() {
   return input9;
}

double NNfunction_ns_chi02_sR::neuron0x28a3810() {
   return input10;
}

double NNfunction_ns_chi02_sR::neuron0x28a3b50() {
   return input11;
}

double NNfunction_ns_chi02_sR::neuron0x28a3e90() {
   return input12;
}

double NNfunction_ns_chi02_sR::neuron0x28a41d0() {
   return input13;
}

double NNfunction_ns_chi02_sR::neuron0x28a4510() {
   return input14;
}

double NNfunction_ns_chi02_sR::neuron0x28a4850() {
   return input15;
}

double NNfunction_ns_chi02_sR::neuron0x28a4b90() {
   return input16;
}

double NNfunction_ns_chi02_sR::neuron0x28a50f0() {
   return input17;
}

double NNfunction_ns_chi02_sR::neuron0x28a5310() {
   return input18;
}

double NNfunction_ns_chi02_sR::neuron0x28a5650() {
   return input19;
}

double NNfunction_ns_chi02_sR::neuron0x28a5990() {
   return input20;
}

double NNfunction_ns_chi02_sR::neuron0x28a5cd0() {
   return input21;
}

double NNfunction_ns_chi02_sR::neuron0x28a6010() {
   return input22;
}

double NNfunction_ns_chi02_sR::neuron0x28a6350() {
   return input23;
}

double NNfunction_ns_chi02_sR::input0x28a67c0() {
   double input = 0.425267;
   input += synapse0x28a1650();
   input += synapse0x28a1690();
   input += synapse0x28a6a70();
   input += synapse0x28a6ab0();
   input += synapse0x28a6af0();
   input += synapse0x28a6b30();
   input += synapse0x28a6b70();
   input += synapse0x28a6bb0();
   input += synapse0x28a6bf0();
   input += synapse0x28a6c30();
   input += synapse0x28a6c70();
   input += synapse0x28a6cb0();
   input += synapse0x28a6cf0();
   input += synapse0x28a6d30();
   input += synapse0x28a6d70();
   input += synapse0x28a6db0();
   input += synapse0x28a15c0();
   input += synapse0x28a1600();
   input += synapse0x265c930();
   input += synapse0x265c970();
   input += synapse0x28a7010();
   input += synapse0x28a7050();
   input += synapse0x28a7090();
   input += synapse0x28a70d0();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28a67c0() {
   double input = input0x28a67c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28a7110() {
   double input = -0.937723;
   input += synapse0x28a7450();
   input += synapse0x28a7490();
   input += synapse0x28a74d0();
   input += synapse0x28a7510();
   input += synapse0x28a7550();
   input += synapse0x28a7590();
   input += synapse0x28a75d0();
   input += synapse0x28a7610();
   input += synapse0x28a7650();
   input += synapse0x28a6f00();
   input += synapse0x28a6f40();
   input += synapse0x28a6f80();
   input += synapse0x28a6fc0();
   input += synapse0x28a78a0();
   input += synapse0x28a78e0();
   input += synapse0x28a7920();
   input += synapse0x28a72a0();
   input += synapse0x28a72e0();
   input += synapse0x28a7a70();
   input += synapse0x28a7ab0();
   input += synapse0x28a7af0();
   input += synapse0x28a7b30();
   input += synapse0x28a7b70();
   input += synapse0x28a7bb0();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28a7110() {
   double input = input0x28a7110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28a7bf0() {
   double input = -0.581021;
   input += synapse0x28a7f30();
   input += synapse0x28a7f70();
   input += synapse0x28a7fb0();
   input += synapse0x28a7ff0();
   input += synapse0x28a8030();
   input += synapse0x28a8070();
   input += synapse0x28a80b0();
   input += synapse0x28a80f0();
   input += synapse0x28a8130();
   input += synapse0x28a8170();
   input += synapse0x28a81b0();
   input += synapse0x28a81f0();
   input += synapse0x28a8230();
   input += synapse0x28a8270();
   input += synapse0x28a82b0();
   input += synapse0x28a82f0();
   input += synapse0x28a7d80();
   input += synapse0x28a7dc0();
   input += synapse0x265d020();
   input += synapse0x266a8f0();
   input += synapse0x266a930();
   input += synapse0x2890820();
   input += synapse0x2890860();
   input += synapse0x28908a0();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28a7bf0() {
   double input = input0x28a7bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28a7690() {
   double input = 0.156468;
   input += synapse0x266b170();
   input += synapse0x28a7820();
   input += synapse0x28a7860();
   input += synapse0x28a8440();
   input += synapse0x28a8480();
   input += synapse0x28a84c0();
   input += synapse0x28a8500();
   input += synapse0x28a8540();
   input += synapse0x28a8580();
   input += synapse0x28a85c0();
   input += synapse0x28a8600();
   input += synapse0x28a8640();
   input += synapse0x28a8680();
   input += synapse0x28a86c0();
   input += synapse0x28a8700();
   input += synapse0x28a8740();
   input += synapse0x28a16d0();
   input += synapse0x28a1710();
   input += synapse0x28a1750();
   input += synapse0x28a8890();
   input += synapse0x28a88d0();
   input += synapse0x28a8910();
   input += synapse0x28a8950();
   input += synapse0x28a8990();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28a7690() {
   double input = input0x28a7690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28a89d0() {
   double input = -1.10035;
   input += synapse0x28a8d10();
   input += synapse0x28a8d50();
   input += synapse0x28a8d90();
   input += synapse0x28a8dd0();
   input += synapse0x28a8e10();
   input += synapse0x28a8e50();
   input += synapse0x28a8e90();
   input += synapse0x28a8ed0();
   input += synapse0x28a8f10();
   input += synapse0x28a8f50();
   input += synapse0x28a8f90();
   input += synapse0x28a8fd0();
   input += synapse0x28a9010();
   input += synapse0x28a9050();
   input += synapse0x28a9090();
   input += synapse0x28a90d0();
   input += synapse0x28a8b60();
   input += synapse0x28a8ba0();
   input += synapse0x28a9220();
   input += synapse0x28a9260();
   input += synapse0x28a92a0();
   input += synapse0x28a92e0();
   input += synapse0x28a9320();
   input += synapse0x28a9360();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28a89d0() {
   double input = input0x28a89d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28a93a0() {
   double input = 1.51521;
   input += synapse0x28a96e0();
   input += synapse0x28a9720();
   input += synapse0x28a9760();
   input += synapse0x28a97a0();
   input += synapse0x28a97e0();
   input += synapse0x28a9820();
   input += synapse0x28a9860();
   input += synapse0x28a98a0();
   input += synapse0x28a98e0();
   input += synapse0x266ac40();
   input += synapse0x266ac80();
   input += synapse0x266acc0();
   input += synapse0x266ad00();
   input += synapse0x266ad40();
   input += synapse0x266ad80();
   input += synapse0x266adc0();
   input += synapse0x28a9530();
   input += synapse0x28a9570();
   input += synapse0x266af10();
   input += synapse0x266af50();
   input += synapse0x266af90();
   input += synapse0x266afd0();
   input += synapse0x266b010();
   input += synapse0x28aa130();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28a93a0() {
   double input = input0x28a93a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28aa170() {
   double input = -0.424541;
   input += synapse0x28aa4b0();
   input += synapse0x28aa4f0();
   input += synapse0x28aa530();
   input += synapse0x28aa570();
   input += synapse0x28aa5b0();
   input += synapse0x28aa5f0();
   input += synapse0x28aa630();
   input += synapse0x28aa670();
   input += synapse0x28aa6b0();
   input += synapse0x28aa6f0();
   input += synapse0x28aa730();
   input += synapse0x28aa770();
   input += synapse0x28aa7b0();
   input += synapse0x28aa7f0();
   input += synapse0x28aa830();
   input += synapse0x28aa870();
   input += synapse0x28aa300();
   input += synapse0x28aa340();
   input += synapse0x28aa9c0();
   input += synapse0x28aaa00();
   input += synapse0x28aaa40();
   input += synapse0x28aaa80();
   input += synapse0x28aaac0();
   input += synapse0x28aab00();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28aa170() {
   double input = input0x28aa170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28aab40() {
   double input = 2.97766;
   input += synapse0x28aae80();
   input += synapse0x28aaec0();
   input += synapse0x28aaf00();
   input += synapse0x28aaf40();
   input += synapse0x28aaf80();
   input += synapse0x28aafc0();
   input += synapse0x28ab000();
   input += synapse0x28ab040();
   input += synapse0x28ab080();
   input += synapse0x28ab0c0();
   input += synapse0x28ab100();
   input += synapse0x28ab140();
   input += synapse0x28ab180();
   input += synapse0x28ab1c0();
   input += synapse0x28ab200();
   input += synapse0x28ab240();
   input += synapse0x28aacd0();
   input += synapse0x28aad10();
   input += synapse0x28ab390();
   input += synapse0x28ab3d0();
   input += synapse0x28ab410();
   input += synapse0x28ab450();
   input += synapse0x28ab490();
   input += synapse0x28ab4d0();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28aab40() {
   double input = input0x28aab40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28ab510() {
   double input = -6.89323;
   input += synapse0x28a4fe0();
   input += synapse0x28a5020();
   input += synapse0x28a5060();
   input += synapse0x28a50a0();
   input += synapse0x28aba60();
   input += synapse0x28abaa0();
   input += synapse0x28abae0();
   input += synapse0x28abb20();
   input += synapse0x28abb60();
   input += synapse0x28abba0();
   input += synapse0x28abbe0();
   input += synapse0x28abc20();
   input += synapse0x28abc60();
   input += synapse0x28abca0();
   input += synapse0x28abce0();
   input += synapse0x28abd20();
   input += synapse0x28ab6a0();
   input += synapse0x28ab6e0();
   input += synapse0x28abe70();
   input += synapse0x28abeb0();
   input += synapse0x28abef0();
   input += synapse0x28abf30();
   input += synapse0x28abf70();
   input += synapse0x28abfb0();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28ab510() {
   double input = input0x28ab510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28abff0() {
   double input = 1.60502;
   input += synapse0x28ac330();
   input += synapse0x28ac370();
   input += synapse0x28ac3b0();
   input += synapse0x28ac3f0();
   input += synapse0x28ac430();
   input += synapse0x28ac470();
   input += synapse0x28ac4b0();
   input += synapse0x28ac4f0();
   input += synapse0x28ac530();
   input += synapse0x28ac570();
   input += synapse0x28ac5b0();
   input += synapse0x28ac5f0();
   input += synapse0x28ac630();
   input += synapse0x28ac670();
   input += synapse0x28ac6b0();
   input += synapse0x28ac6f0();
   input += synapse0x28ac180();
   input += synapse0x28ac1c0();
   input += synapse0x28ac840();
   input += synapse0x28ac880();
   input += synapse0x28ac8c0();
   input += synapse0x28ac900();
   input += synapse0x28ac940();
   input += synapse0x28ac980();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28abff0() {
   double input = input0x28abff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28ac9c0() {
   double input = -1.60271;
   input += synapse0x28acd00();
   input += synapse0x28acd40();
   input += synapse0x28acd80();
   input += synapse0x28acdc0();
   input += synapse0x28ace00();
   input += synapse0x28ace40();
   input += synapse0x28ace80();
   input += synapse0x28acec0();
   input += synapse0x28acf00();
   input += synapse0x28acf40();
   input += synapse0x28acf80();
   input += synapse0x28acfc0();
   input += synapse0x28ad000();
   input += synapse0x28ad040();
   input += synapse0x28ad080();
   input += synapse0x28ad0c0();
   input += synapse0x28acb50();
   input += synapse0x28acb90();
   input += synapse0x28a9920();
   input += synapse0x28a9960();
   input += synapse0x28a99a0();
   input += synapse0x28a99e0();
   input += synapse0x28a9a20();
   input += synapse0x28a9a60();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28ac9c0() {
   double input = input0x28ac9c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28a9aa0() {
   double input = -0.0670886;
   input += synapse0x28a9de0();
   input += synapse0x28a9e20();
   input += synapse0x28a9e60();
   input += synapse0x28a9ea0();
   input += synapse0x28a9ee0();
   input += synapse0x28a9f20();
   input += synapse0x28a9f60();
   input += synapse0x28a9fa0();
   input += synapse0x28a9fe0();
   input += synapse0x28aa020();
   input += synapse0x28aa060();
   input += synapse0x28aa0a0();
   input += synapse0x28aa0e0();
   input += synapse0x28ae220();
   input += synapse0x28ae260();
   input += synapse0x28ae2a0();
   input += synapse0x28a9c30();
   input += synapse0x28a9c70();
   input += synapse0x28ae3f0();
   input += synapse0x28ae430();
   input += synapse0x28ae470();
   input += synapse0x28ae4b0();
   input += synapse0x28ae4f0();
   input += synapse0x28ae530();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28a9aa0() {
   double input = input0x28a9aa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28ae570() {
   double input = 0.469431;
   input += synapse0x28ae8b0();
   input += synapse0x28ae8f0();
   input += synapse0x28ae930();
   input += synapse0x28ae970();
   input += synapse0x28ae9b0();
   input += synapse0x28ae9f0();
   input += synapse0x28aea30();
   input += synapse0x28aea70();
   input += synapse0x28aeab0();
   input += synapse0x28aeaf0();
   input += synapse0x28aeb30();
   input += synapse0x28aeb70();
   input += synapse0x28aebb0();
   input += synapse0x28aebf0();
   input += synapse0x28aec30();
   input += synapse0x28aec70();
   input += synapse0x28ae700();
   input += synapse0x28ae740();
   input += synapse0x28aedc0();
   input += synapse0x28aee00();
   input += synapse0x28aee40();
   input += synapse0x28aee80();
   input += synapse0x28aeec0();
   input += synapse0x28aef00();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28ae570() {
   double input = input0x28ae570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28aef40() {
   double input = -1.32722;
   input += synapse0x28af280();
   input += synapse0x28af2c0();
   input += synapse0x28af300();
   input += synapse0x28af340();
   input += synapse0x28af380();
   input += synapse0x28af3c0();
   input += synapse0x28af400();
   input += synapse0x28af440();
   input += synapse0x28af480();
   input += synapse0x28af4c0();
   input += synapse0x28af500();
   input += synapse0x28af540();
   input += synapse0x28af580();
   input += synapse0x28af5c0();
   input += synapse0x28af600();
   input += synapse0x28af640();
   input += synapse0x28af0d0();
   input += synapse0x28af110();
   input += synapse0x28af790();
   input += synapse0x28af7d0();
   input += synapse0x28af810();
   input += synapse0x28af850();
   input += synapse0x28af890();
   input += synapse0x28af8d0();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28aef40() {
   double input = input0x28aef40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28af910() {
   double input = -2.27093;
   input += synapse0x28afc50();
   input += synapse0x28afc90();
   input += synapse0x28afcd0();
   input += synapse0x28afd10();
   input += synapse0x28afd50();
   input += synapse0x28afd90();
   input += synapse0x28afdd0();
   input += synapse0x28afe10();
   input += synapse0x28afe50();
   input += synapse0x28afe90();
   input += synapse0x28afed0();
   input += synapse0x28aff10();
   input += synapse0x28aff50();
   input += synapse0x28aff90();
   input += synapse0x28affd0();
   input += synapse0x28b0010();
   input += synapse0x28afaa0();
   input += synapse0x28afae0();
   input += synapse0x28b0160();
   input += synapse0x28b01a0();
   input += synapse0x28b01e0();
   input += synapse0x28b0220();
   input += synapse0x28b0260();
   input += synapse0x28b02a0();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28af910() {
   double input = input0x28af910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28b02e0() {
   double input = 4.54243;
   input += synapse0x28b0620();
   input += synapse0x28a19b0();
   input += synapse0x28a19f0();
   input += synapse0x28a1cf0();
   input += synapse0x28a1d30();
   input += synapse0x28a2030();
   input += synapse0x28a2070();
   input += synapse0x28a2370();
   input += synapse0x28a23b0();
   input += synapse0x28a26b0();
   input += synapse0x28a26f0();
   input += synapse0x28a29f0();
   input += synapse0x28a2a30();
   input += synapse0x28a2d30();
   input += synapse0x28a2d70();
   input += synapse0x28a3070();
   input += synapse0x28a30b0();
   input += synapse0x28a33b0();
   input += synapse0x28a33f0();
   input += synapse0x28a36f0();
   input += synapse0x28a3730();
   input += synapse0x28a3a30();
   input += synapse0x28a3a70();
   input += synapse0x28a3d70();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28b02e0() {
   double input = input0x28b02e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28b20f0() {
   double input = 0.518109;
   input += synapse0x28a3db0();
   input += synapse0x28a4a70();
   input += synapse0x28a4ab0();
   input += synapse0x28b0470();
   input += synapse0x28b04b0();
   input += synapse0x28a4db0();
   input += synapse0x28a4df0();
   input += synapse0x265c810();
   input += synapse0x265c850();
   input += synapse0x28a5530();
   input += synapse0x28a5570();
   input += synapse0x28a5870();
   input += synapse0x28a58b0();
   input += synapse0x28a5bb0();
   input += synapse0x28a5bf0();
   input += synapse0x28a5ef0();
   input += synapse0x28a5f30();
   input += synapse0x28a6230();
   input += synapse0x28a6270();
   input += synapse0x28a6570();
   input += synapse0x28a65b0();
   input += synapse0x28a40b0();
   input += synapse0x28a40f0();
   input += synapse0x28b2390();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28b20f0() {
   double input = input0x28b20f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28b23d0() {
   double input = 9.14265;
   input += synapse0x28b2710();
   input += synapse0x28b2750();
   input += synapse0x28b2790();
   input += synapse0x28b27d0();
   input += synapse0x28b2810();
   input += synapse0x28b2850();
   input += synapse0x28b2890();
   input += synapse0x28b28d0();
   input += synapse0x28b2910();
   input += synapse0x28b2950();
   input += synapse0x28b2990();
   input += synapse0x28b29d0();
   input += synapse0x28b2a10();
   input += synapse0x28b2a50();
   input += synapse0x28b2a90();
   input += synapse0x28b2ad0();
   input += synapse0x28b2560();
   input += synapse0x28b25a0();
   input += synapse0x28b2c20();
   input += synapse0x28b2c60();
   input += synapse0x28b2ca0();
   input += synapse0x28b2ce0();
   input += synapse0x28b2d20();
   input += synapse0x28b2d60();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28b23d0() {
   double input = input0x28b23d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28b2da0() {
   double input = -0.581048;
   input += synapse0x28b30e0();
   input += synapse0x28b3120();
   input += synapse0x28b3160();
   input += synapse0x28b31a0();
   input += synapse0x28b31e0();
   input += synapse0x28b3220();
   input += synapse0x28b3260();
   input += synapse0x28b32a0();
   input += synapse0x28b32e0();
   input += synapse0x28b3320();
   input += synapse0x28b3360();
   input += synapse0x28b33a0();
   input += synapse0x28b33e0();
   input += synapse0x28b3420();
   input += synapse0x28b3460();
   input += synapse0x28b34a0();
   input += synapse0x28b2f30();
   input += synapse0x28b2f70();
   input += synapse0x28b35f0();
   input += synapse0x28b3630();
   input += synapse0x28b3670();
   input += synapse0x28b36b0();
   input += synapse0x28b36f0();
   input += synapse0x28b3730();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28b2da0() {
   double input = input0x28b2da0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28b3770() {
   double input = 0.436166;
   input += synapse0x28b3ab0();
   input += synapse0x28b3af0();
   input += synapse0x28b3b30();
   input += synapse0x28b3b70();
   input += synapse0x28b3bb0();
   input += synapse0x28b3bf0();
   input += synapse0x28b3c30();
   input += synapse0x28b3c70();
   input += synapse0x28b3cb0();
   input += synapse0x28b3cf0();
   input += synapse0x28b3d30();
   input += synapse0x28b3d70();
   input += synapse0x28b3db0();
   input += synapse0x28b3df0();
   input += synapse0x28b3e30();
   input += synapse0x28b3e70();
   input += synapse0x28b3900();
   input += synapse0x28b3940();
   input += synapse0x28b3fc0();
   input += synapse0x28b4000();
   input += synapse0x28b4040();
   input += synapse0x28b4080();
   input += synapse0x28b40c0();
   input += synapse0x28b4100();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28b3770() {
   double input = input0x28b3770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28b4140() {
   double input = 0.29401;
   input += synapse0x28b4480();
   input += synapse0x28b44c0();
   input += synapse0x28b4500();
   input += synapse0x28b4540();
   input += synapse0x28b4580();
   input += synapse0x28b45c0();
   input += synapse0x28b4600();
   input += synapse0x28b4640();
   input += synapse0x28b4680();
   input += synapse0x28b46c0();
   input += synapse0x28b4700();
   input += synapse0x28b4740();
   input += synapse0x28b4780();
   input += synapse0x28b47c0();
   input += synapse0x28b4800();
   input += synapse0x28b4840();
   input += synapse0x28b42d0();
   input += synapse0x28b4310();
   input += synapse0x28b4990();
   input += synapse0x28b49d0();
   input += synapse0x28b4a10();
   input += synapse0x28b4a50();
   input += synapse0x28b4a90();
   input += synapse0x28b4ad0();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28b4140() {
   double input = input0x28b4140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28b4b10() {
   double input = 2.07931;
   input += synapse0x28b4e50();
   input += synapse0x28b4e90();
   input += synapse0x28b4ed0();
   input += synapse0x28b4f10();
   input += synapse0x28b4f50();
   input += synapse0x28b4f90();
   input += synapse0x28b4fd0();
   input += synapse0x28b5010();
   input += synapse0x28b5050();
   input += synapse0x28ad210();
   input += synapse0x28ad250();
   input += synapse0x28ad290();
   input += synapse0x28ad2d0();
   input += synapse0x28ad310();
   input += synapse0x28ad350();
   input += synapse0x28ad390();
   input += synapse0x28b4ca0();
   input += synapse0x28b4ce0();
   input += synapse0x28ad4e0();
   input += synapse0x28ad520();
   input += synapse0x28ad560();
   input += synapse0x28ad5a0();
   input += synapse0x28ad5e0();
   input += synapse0x28ad620();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28b4b10() {
   double input = input0x28b4b10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28ad660() {
   double input = -2.20182;
   input += synapse0x28ad9a0();
   input += synapse0x28ad9e0();
   input += synapse0x28ada20();
   input += synapse0x28ada60();
   input += synapse0x28adaa0();
   input += synapse0x28adae0();
   input += synapse0x28adb20();
   input += synapse0x28adb60();
   input += synapse0x28adba0();
   input += synapse0x28adbe0();
   input += synapse0x28adc20();
   input += synapse0x28adc60();
   input += synapse0x28adca0();
   input += synapse0x28adce0();
   input += synapse0x28add20();
   input += synapse0x28add60();
   input += synapse0x28ad7f0();
   input += synapse0x28ad830();
   input += synapse0x28adeb0();
   input += synapse0x28adef0();
   input += synapse0x28adf30();
   input += synapse0x28adf70();
   input += synapse0x28adfb0();
   input += synapse0x28adff0();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28ad660() {
   double input = input0x28ad660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28ae030() {
   double input = 0.304705;
   input += synapse0x28ae1c0();
   input += synapse0x28b7250();
   input += synapse0x28b7290();
   input += synapse0x28b72d0();
   input += synapse0x28b7310();
   input += synapse0x28b7350();
   input += synapse0x28b7390();
   input += synapse0x28b73d0();
   input += synapse0x28b7410();
   input += synapse0x28b7450();
   input += synapse0x28b7490();
   input += synapse0x28b74d0();
   input += synapse0x28b7510();
   input += synapse0x28b7550();
   input += synapse0x28b7590();
   input += synapse0x28b75d0();
   input += synapse0x28b70a0();
   input += synapse0x28b70e0();
   input += synapse0x28b7720();
   input += synapse0x28b7760();
   input += synapse0x28b77a0();
   input += synapse0x28b77e0();
   input += synapse0x28b7820();
   input += synapse0x28b7860();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28ae030() {
   double input = input0x28ae030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28b78a0() {
   double input = 1.84567;
   input += synapse0x28b7be0();
   input += synapse0x28b7c20();
   input += synapse0x28b7c60();
   input += synapse0x28b7ca0();
   input += synapse0x28b7ce0();
   input += synapse0x28b7d20();
   input += synapse0x28b7d60();
   input += synapse0x28b7da0();
   input += synapse0x28b7de0();
   input += synapse0x28b7e20();
   input += synapse0x28b7e60();
   input += synapse0x28b7ea0();
   input += synapse0x28b7ee0();
   input += synapse0x28b7f20();
   input += synapse0x28b7f60();
   input += synapse0x28b7fa0();
   input += synapse0x28b7a30();
   input += synapse0x28b7a70();
   input += synapse0x28b80f0();
   input += synapse0x28b8130();
   input += synapse0x28b8170();
   input += synapse0x28b81b0();
   input += synapse0x28b81f0();
   input += synapse0x28b8230();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28b78a0() {
   double input = input0x28b78a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28b8270() {
   double input = 10.6755;
   input += synapse0x28b85b0();
   input += synapse0x28b85f0();
   input += synapse0x28b8630();
   input += synapse0x28b8670();
   input += synapse0x28b86b0();
   input += synapse0x28b86f0();
   input += synapse0x28b8730();
   input += synapse0x28b8770();
   input += synapse0x28b87b0();
   input += synapse0x28b87f0();
   input += synapse0x28b8830();
   input += synapse0x28b8870();
   input += synapse0x28b88b0();
   input += synapse0x28b88f0();
   input += synapse0x28b8930();
   input += synapse0x28b8970();
   input += synapse0x28b8400();
   input += synapse0x28b8440();
   input += synapse0x28b8ac0();
   input += synapse0x28b8b00();
   input += synapse0x28b8b40();
   input += synapse0x28b8b80();
   input += synapse0x28b8bc0();
   input += synapse0x28b8c00();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28b8270() {
   double input = input0x28b8270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28b8c40() {
   double input = -0.296435;
   input += synapse0x28b8f80();
   input += synapse0x28b8fc0();
   input += synapse0x28b9000();
   input += synapse0x28b9040();
   input += synapse0x28b9080();
   input += synapse0x28b90c0();
   input += synapse0x28b9100();
   input += synapse0x28b9140();
   input += synapse0x28b9180();
   input += synapse0x28b91c0();
   input += synapse0x28b9200();
   input += synapse0x28b9240();
   input += synapse0x28b9280();
   input += synapse0x28b92c0();
   input += synapse0x28b9300();
   input += synapse0x28b9340();
   input += synapse0x28b8dd0();
   input += synapse0x28b8e10();
   input += synapse0x28b9490();
   input += synapse0x28b94d0();
   input += synapse0x28b9510();
   input += synapse0x28b9550();
   input += synapse0x28b9590();
   input += synapse0x28b95d0();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28b8c40() {
   double input = input0x28b8c40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28b9610() {
   double input = 8.33023;
   input += synapse0x28b9950();
   input += synapse0x28b9990();
   input += synapse0x28b99d0();
   input += synapse0x28b9a10();
   input += synapse0x28b9a50();
   input += synapse0x28b9a90();
   input += synapse0x28b9ad0();
   input += synapse0x28b9b10();
   input += synapse0x28b9b50();
   input += synapse0x28b9b90();
   input += synapse0x28b9bd0();
   input += synapse0x28b9c10();
   input += synapse0x28b9c50();
   input += synapse0x28b9c90();
   input += synapse0x28b9cd0();
   input += synapse0x28b9d10();
   input += synapse0x28b97a0();
   input += synapse0x28b97e0();
   input += synapse0x28b9e60();
   input += synapse0x28b9ea0();
   input += synapse0x28b9ee0();
   input += synapse0x28b9f20();
   input += synapse0x28b9f60();
   input += synapse0x28b9fa0();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28b9610() {
   double input = input0x28b9610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28b9fe0() {
   double input = -2.17934;
   input += synapse0x28ba320();
   input += synapse0x28ba360();
   input += synapse0x28ba3a0();
   input += synapse0x28ba3e0();
   input += synapse0x28ba420();
   input += synapse0x28ba460();
   input += synapse0x28ba4a0();
   input += synapse0x28ba4e0();
   input += synapse0x28ba520();
   input += synapse0x28ba560();
   input += synapse0x28ba5a0();
   input += synapse0x28ba5e0();
   input += synapse0x28ba620();
   input += synapse0x28ba660();
   input += synapse0x28ba6a0();
   input += synapse0x28ba6e0();
   input += synapse0x28ba170();
   input += synapse0x28ba1b0();
   input += synapse0x28ba830();
   input += synapse0x28ba870();
   input += synapse0x28ba8b0();
   input += synapse0x28ba8f0();
   input += synapse0x28ba930();
   input += synapse0x28ba970();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28b9fe0() {
   double input = input0x28b9fe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28ba9b0() {
   double input = -0.379065;
   input += synapse0x28bacf0();
   input += synapse0x28bad30();
   input += synapse0x28bad70();
   input += synapse0x28badb0();
   input += synapse0x28badf0();
   input += synapse0x28bae30();
   input += synapse0x28bae70();
   input += synapse0x28baeb0();
   input += synapse0x28baef0();
   input += synapse0x28baf30();
   input += synapse0x28baf70();
   input += synapse0x28bafb0();
   input += synapse0x28baff0();
   input += synapse0x28bb030();
   input += synapse0x28bb070();
   input += synapse0x28bb0b0();
   input += synapse0x28bab40();
   input += synapse0x28bab80();
   input += synapse0x28bb200();
   input += synapse0x28bb240();
   input += synapse0x28bb280();
   input += synapse0x28bb2c0();
   input += synapse0x28bb300();
   input += synapse0x28bb340();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28ba9b0() {
   double input = input0x28ba9b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28bb380() {
   double input = -2.00935;
   input += synapse0x28bb6c0();
   input += synapse0x28bb700();
   input += synapse0x28bb740();
   input += synapse0x28bb780();
   input += synapse0x28bb7c0();
   input += synapse0x28bb800();
   input += synapse0x28bb840();
   input += synapse0x28bb880();
   input += synapse0x28bb8c0();
   input += synapse0x28bb900();
   input += synapse0x28bb940();
   input += synapse0x28bb980();
   input += synapse0x28bb9c0();
   input += synapse0x28bba00();
   input += synapse0x28bba40();
   input += synapse0x28bba80();
   input += synapse0x28bb510();
   input += synapse0x28bb550();
   input += synapse0x28bbbd0();
   input += synapse0x28bbc10();
   input += synapse0x28bbc50();
   input += synapse0x28bbc90();
   input += synapse0x28bbcd0();
   input += synapse0x28bbd10();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28bb380() {
   double input = input0x28bb380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28bbd50() {
   double input = -0.0226157;
   input += synapse0x28bc090();
   input += synapse0x28b0660();
   input += synapse0x28b06a0();
   input += synapse0x28b06e0();
   input += synapse0x28b0930();
   input += synapse0x28b0970();
   input += synapse0x28b09b0();
   input += synapse0x28b0c00();
   input += synapse0x28b0c40();
   input += synapse0x28b0e90();
   input += synapse0x28b0ed0();
   input += synapse0x28b0f10();
   input += synapse0x28b1160();
   input += synapse0x28b11a0();
   input += synapse0x28b13f0();
   input += synapse0x28b1430();
   input += synapse0x28bbee0();
   input += synapse0x28bbf20();
   input += synapse0x28b1580();
   input += synapse0x28b1a90();
   input += synapse0x28b1ad0();
   input += synapse0x28b1b10();
   input += synapse0x28b1d60();
   input += synapse0x28b1da0();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28bbd50() {
   double input = input0x28bbd50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28b1de0() {
   double input = 0.891274;
   input += synapse0x28b1650();
   input += synapse0x28b1690();
   input += synapse0x28b16d0();
   input += synapse0x28b1710();
   input += synapse0x28b2090();
   input += synapse0x28be3e0();
   input += synapse0x28be420();
   input += synapse0x28be460();
   input += synapse0x28be4a0();
   input += synapse0x28be4e0();
   input += synapse0x28be520();
   input += synapse0x28be560();
   input += synapse0x28be5a0();
   input += synapse0x28be5e0();
   input += synapse0x28be620();
   input += synapse0x28be660();
   input += synapse0x28b1f70();
   input += synapse0x28b1fb0();
   input += synapse0x28be7b0();
   input += synapse0x28be7f0();
   input += synapse0x28be830();
   input += synapse0x28be870();
   input += synapse0x28be8b0();
   input += synapse0x28be8f0();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28b1de0() {
   double input = input0x28b1de0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28be930() {
   double input = 1.98942;
   input += synapse0x28bec70();
   input += synapse0x28becb0();
   input += synapse0x28becf0();
   input += synapse0x28bed30();
   input += synapse0x28bed70();
   input += synapse0x28bedb0();
   input += synapse0x28bedf0();
   input += synapse0x28bee30();
   input += synapse0x28bee70();
   input += synapse0x28beeb0();
   input += synapse0x28beef0();
   input += synapse0x28bef30();
   input += synapse0x28bef70();
   input += synapse0x28befb0();
   input += synapse0x28beff0();
   input += synapse0x28bf030();
   input += synapse0x28beac0();
   input += synapse0x28beb00();
   input += synapse0x28bf180();
   input += synapse0x28bf1c0();
   input += synapse0x28bf200();
   input += synapse0x28bf240();
   input += synapse0x28bf280();
   input += synapse0x28bf2c0();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28be930() {
   double input = input0x28be930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28bf300() {
   double input = 0.578044;
   input += synapse0x28bf640();
   input += synapse0x28bf680();
   input += synapse0x28bf6c0();
   input += synapse0x28bf700();
   input += synapse0x28bf740();
   input += synapse0x28bf780();
   input += synapse0x28bf7c0();
   input += synapse0x28bf800();
   input += synapse0x28bf840();
   input += synapse0x28bf880();
   input += synapse0x28bf8c0();
   input += synapse0x28bf900();
   input += synapse0x28bf940();
   input += synapse0x28bf980();
   input += synapse0x28bf9c0();
   input += synapse0x28bfa00();
   input += synapse0x28bf490();
   input += synapse0x28bf4d0();
   input += synapse0x28bfb50();
   input += synapse0x28bfb90();
   input += synapse0x28bfbd0();
   input += synapse0x28bfc10();
   input += synapse0x28bfc50();
   input += synapse0x28bfc90();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28bf300() {
   double input = input0x28bf300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28bfcd0() {
   double input = 0.0196532;
   input += synapse0x28c0010();
   input += synapse0x28c0050();
   input += synapse0x28c0090();
   input += synapse0x28c00d0();
   input += synapse0x28c0110();
   input += synapse0x28c0150();
   input += synapse0x28c0190();
   input += synapse0x28c01d0();
   input += synapse0x28c0210();
   input += synapse0x28c0250();
   input += synapse0x28c0290();
   input += synapse0x28c02d0();
   input += synapse0x28c0310();
   input += synapse0x28c0350();
   input += synapse0x28c0390();
   input += synapse0x28c03d0();
   input += synapse0x28bfe60();
   input += synapse0x28bfea0();
   input += synapse0x28c0520();
   input += synapse0x28c0560();
   input += synapse0x28c05a0();
   input += synapse0x28c05e0();
   input += synapse0x28c0620();
   input += synapse0x28c0660();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28bfcd0() {
   double input = input0x28bfcd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28c06a0() {
   double input = -1.44991;
   input += synapse0x28c09e0();
   input += synapse0x28c0a20();
   input += synapse0x28c0a60();
   input += synapse0x28c0aa0();
   input += synapse0x28c0ae0();
   input += synapse0x28c0b20();
   input += synapse0x28c0b60();
   input += synapse0x28c0ba0();
   input += synapse0x28c0be0();
   input += synapse0x28c0c20();
   input += synapse0x28c0c60();
   input += synapse0x28c0ca0();
   input += synapse0x28c0ce0();
   input += synapse0x28c0d20();
   input += synapse0x28c0d60();
   input += synapse0x28c0da0();
   input += synapse0x28c0830();
   input += synapse0x28c0870();
   input += synapse0x28c0ef0();
   input += synapse0x28c0f30();
   input += synapse0x28c0f70();
   input += synapse0x28c0fb0();
   input += synapse0x28c0ff0();
   input += synapse0x28c1030();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28c06a0() {
   double input = input0x28c06a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28c1070() {
   double input = -1.27197;
   input += synapse0x28c13b0();
   input += synapse0x28c13f0();
   input += synapse0x28c1430();
   input += synapse0x28c1470();
   input += synapse0x28c14b0();
   input += synapse0x28c14f0();
   input += synapse0x28c1530();
   input += synapse0x28c1570();
   input += synapse0x28c15b0();
   input += synapse0x28c15f0();
   input += synapse0x28c1630();
   input += synapse0x28c1670();
   input += synapse0x28c16b0();
   input += synapse0x28c16f0();
   input += synapse0x28c1730();
   input += synapse0x28c1770();
   input += synapse0x28c1200();
   input += synapse0x28c1240();
   input += synapse0x28c18c0();
   input += synapse0x28c1900();
   input += synapse0x28c1940();
   input += synapse0x28c1980();
   input += synapse0x28c19c0();
   input += synapse0x28c1a00();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28c1070() {
   double input = input0x28c1070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28c1a40() {
   double input = -1.89715;
   input += synapse0x28c1d80();
   input += synapse0x28c1dc0();
   input += synapse0x28c1e00();
   input += synapse0x28c1e40();
   input += synapse0x28c1e80();
   input += synapse0x28c1ec0();
   input += synapse0x28c1f00();
   input += synapse0x28c1f40();
   input += synapse0x28c1f80();
   input += synapse0x28c1fc0();
   input += synapse0x28c2000();
   input += synapse0x28c2040();
   input += synapse0x28c2080();
   input += synapse0x28c20c0();
   input += synapse0x28c2100();
   input += synapse0x28c2140();
   input += synapse0x28c1bd0();
   input += synapse0x28c1c10();
   input += synapse0x28c2290();
   input += synapse0x28c22d0();
   input += synapse0x28c2310();
   input += synapse0x28c2350();
   input += synapse0x28c2390();
   input += synapse0x28c23d0();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28c1a40() {
   double input = input0x28c1a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28c2410() {
   double input = -0.365675;
   input += synapse0x28c2750();
   input += synapse0x28c2790();
   input += synapse0x28c27d0();
   input += synapse0x28c2810();
   input += synapse0x28c2850();
   input += synapse0x28c2890();
   input += synapse0x28c28d0();
   input += synapse0x28c2910();
   input += synapse0x28c2950();
   input += synapse0x28c2990();
   input += synapse0x28c29d0();
   input += synapse0x28c2a10();
   input += synapse0x28c2a50();
   input += synapse0x28c2a90();
   input += synapse0x28c2ad0();
   input += synapse0x28c2b10();
   input += synapse0x28c25a0();
   input += synapse0x28c25e0();
   input += synapse0x28c2c60();
   input += synapse0x28c2ca0();
   input += synapse0x28c2ce0();
   input += synapse0x28c2d20();
   input += synapse0x28c2d60();
   input += synapse0x28c2da0();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28c2410() {
   double input = input0x28c2410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28c2de0() {
   double input = 7.48434;
   input += synapse0x28ab850();
   input += synapse0x28ab890();
   input += synapse0x28ab8d0();
   input += synapse0x28ab910();
   input += synapse0x28ab950();
   input += synapse0x28ab990();
   input += synapse0x28ab9d0();
   input += synapse0x28aba10();
   input += synapse0x28c3530();
   input += synapse0x28c3570();
   input += synapse0x28c35b0();
   input += synapse0x28c35f0();
   input += synapse0x28c3630();
   input += synapse0x28c3670();
   input += synapse0x28c36b0();
   input += synapse0x28c36f0();
   input += synapse0x28c2f70();
   input += synapse0x28c2fb0();
   input += synapse0x28c3840();
   input += synapse0x28c3880();
   input += synapse0x28c38c0();
   input += synapse0x28c3900();
   input += synapse0x28c3940();
   input += synapse0x28c3980();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28c2de0() {
   double input = input0x28c2de0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28c39c0() {
   double input = 0.708696;
   input += synapse0x28c3d00();
   input += synapse0x28c3d40();
   input += synapse0x28c3d80();
   input += synapse0x28c3dc0();
   input += synapse0x28c3e00();
   input += synapse0x28c3e40();
   input += synapse0x28c3e80();
   input += synapse0x28c3ec0();
   input += synapse0x28c3f00();
   input += synapse0x28c3f40();
   input += synapse0x28c3f80();
   input += synapse0x28c3fc0();
   input += synapse0x28c4000();
   input += synapse0x28c4040();
   input += synapse0x28c4080();
   input += synapse0x28c40c0();
   input += synapse0x28c3b50();
   input += synapse0x28c3b90();
   input += synapse0x28c4210();
   input += synapse0x28c4250();
   input += synapse0x28c4290();
   input += synapse0x28c42d0();
   input += synapse0x28c4310();
   input += synapse0x28c4350();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28c39c0() {
   double input = input0x28c39c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28c4390() {
   double input = -1.2271;
   input += synapse0x28c46d0();
   input += synapse0x28c4710();
   input += synapse0x28c4750();
   input += synapse0x28c4790();
   input += synapse0x28c47d0();
   input += synapse0x28c4810();
   input += synapse0x28c4850();
   input += synapse0x28c4890();
   input += synapse0x28c48d0();
   input += synapse0x28c4910();
   input += synapse0x28c4950();
   input += synapse0x28c4990();
   input += synapse0x28c49d0();
   input += synapse0x28c4a10();
   input += synapse0x28c4a50();
   input += synapse0x28c4a90();
   input += synapse0x28c4520();
   input += synapse0x28c4560();
   input += synapse0x28b5090();
   input += synapse0x28b50d0();
   input += synapse0x28b5110();
   input += synapse0x28b5150();
   input += synapse0x28b5190();
   input += synapse0x28b51d0();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28c4390() {
   double input = input0x28c4390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28b5210() {
   double input = 0.522468;
   input += synapse0x28b5550();
   input += synapse0x28b5590();
   input += synapse0x28b55d0();
   input += synapse0x28b5610();
   input += synapse0x28b5650();
   input += synapse0x28b5690();
   input += synapse0x28b56d0();
   input += synapse0x28b5710();
   input += synapse0x28b5750();
   input += synapse0x28b5790();
   input += synapse0x28b57d0();
   input += synapse0x28b5810();
   input += synapse0x28b5850();
   input += synapse0x28b5890();
   input += synapse0x28b58d0();
   input += synapse0x28b5910();
   input += synapse0x28b53a0();
   input += synapse0x28b53e0();
   input += synapse0x28b5a60();
   input += synapse0x28b5aa0();
   input += synapse0x28b5ae0();
   input += synapse0x28b5b20();
   input += synapse0x28b5b60();
   input += synapse0x28b5ba0();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28b5210() {
   double input = input0x28b5210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28b5be0() {
   double input = 2.93132;
   input += synapse0x28b5f20();
   input += synapse0x28b5f60();
   input += synapse0x28b5fa0();
   input += synapse0x28b5fe0();
   input += synapse0x28b6020();
   input += synapse0x28b6060();
   input += synapse0x28b60a0();
   input += synapse0x28b60e0();
   input += synapse0x28b6120();
   input += synapse0x28b6160();
   input += synapse0x28b61a0();
   input += synapse0x28b61e0();
   input += synapse0x28b6220();
   input += synapse0x28b6260();
   input += synapse0x28b62a0();
   input += synapse0x28b62e0();
   input += synapse0x28b5d70();
   input += synapse0x28b5db0();
   input += synapse0x28b6430();
   input += synapse0x28b6470();
   input += synapse0x28b64b0();
   input += synapse0x28b64f0();
   input += synapse0x28b6530();
   input += synapse0x28b6570();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28b5be0() {
   double input = input0x28b5be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28b65b0() {
   double input = 1.52381;
   input += synapse0x28b68f0();
   input += synapse0x28b6930();
   input += synapse0x28b6970();
   input += synapse0x28b69b0();
   input += synapse0x28b69f0();
   input += synapse0x28b6a30();
   input += synapse0x28b6a70();
   input += synapse0x28b6ab0();
   input += synapse0x28b6af0();
   input += synapse0x28b6b30();
   input += synapse0x28b6b70();
   input += synapse0x28b6bb0();
   input += synapse0x28b6bf0();
   input += synapse0x28b6c30();
   input += synapse0x28b6c70();
   input += synapse0x28b6cb0();
   input += synapse0x28b6740();
   input += synapse0x28b6780();
   input += synapse0x28b6e00();
   input += synapse0x28b6e40();
   input += synapse0x28b6e80();
   input += synapse0x28b6ec0();
   input += synapse0x28b6f00();
   input += synapse0x28b6f40();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28b65b0() {
   double input = input0x28b65b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28c8bf0() {
   double input = -1.62191;
   input += synapse0x28c8e10();
   input += synapse0x28c8e50();
   input += synapse0x28c8e90();
   input += synapse0x28c8ed0();
   input += synapse0x28c8f10();
   input += synapse0x28c8f50();
   input += synapse0x28c8f90();
   input += synapse0x28c8fd0();
   input += synapse0x28c9010();
   input += synapse0x28c9050();
   input += synapse0x28c9090();
   input += synapse0x28c90d0();
   input += synapse0x28c9110();
   input += synapse0x28c9150();
   input += synapse0x28c9190();
   input += synapse0x28c91d0();
   input += synapse0x28b6f80();
   input += synapse0x28b6fc0();
   input += synapse0x28c9320();
   input += synapse0x28c9360();
   input += synapse0x28c93a0();
   input += synapse0x28c93e0();
   input += synapse0x28c9420();
   input += synapse0x28c9460();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28c8bf0() {
   double input = input0x28c8bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28c94a0() {
   double input = 1.78228;
   input += synapse0x28c97e0();
   input += synapse0x28c9820();
   input += synapse0x28c9860();
   input += synapse0x28c98a0();
   input += synapse0x28c98e0();
   input += synapse0x28c9920();
   input += synapse0x28c9960();
   input += synapse0x28c99a0();
   input += synapse0x28c99e0();
   input += synapse0x28c9a20();
   input += synapse0x28c9a60();
   input += synapse0x28c9aa0();
   input += synapse0x28c9ae0();
   input += synapse0x28c9b20();
   input += synapse0x28c9b60();
   input += synapse0x28c9ba0();
   input += synapse0x28c9630();
   input += synapse0x28c9670();
   input += synapse0x28c9cf0();
   input += synapse0x28c9d30();
   input += synapse0x28c9d70();
   input += synapse0x28c9db0();
   input += synapse0x28c9df0();
   input += synapse0x28c9e30();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28c94a0() {
   double input = input0x28c94a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28c9e70() {
   double input = 0.650611;
   input += synapse0x28ca1b0();
   input += synapse0x28ca1f0();
   input += synapse0x28ca230();
   input += synapse0x28ca270();
   input += synapse0x28ca2b0();
   input += synapse0x28ca2f0();
   input += synapse0x28ca330();
   input += synapse0x28ca370();
   input += synapse0x28ca3b0();
   input += synapse0x28ca3f0();
   input += synapse0x28ca430();
   input += synapse0x28ca470();
   input += synapse0x28ca4b0();
   input += synapse0x28ca4f0();
   input += synapse0x28ca530();
   input += synapse0x28ca570();
   input += synapse0x28ca000();
   input += synapse0x28ca040();
   input += synapse0x28ca6c0();
   input += synapse0x28ca700();
   input += synapse0x28ca740();
   input += synapse0x28ca780();
   input += synapse0x28ca7c0();
   input += synapse0x28ca800();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28c9e70() {
   double input = input0x28c9e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28ca840() {
   double input = -14.4845;
   input += synapse0x28cab80();
   input += synapse0x28cabc0();
   input += synapse0x28cac00();
   input += synapse0x28cac40();
   input += synapse0x28cac80();
   input += synapse0x28cacc0();
   input += synapse0x28cad00();
   input += synapse0x28cad40();
   input += synapse0x28cad80();
   input += synapse0x28cadc0();
   input += synapse0x28cae00();
   input += synapse0x28cae40();
   input += synapse0x28cae80();
   input += synapse0x28caec0();
   input += synapse0x28caf00();
   input += synapse0x28caf40();
   input += synapse0x28ca9d0();
   input += synapse0x28caa10();
   input += synapse0x28cb090();
   input += synapse0x28cb0d0();
   input += synapse0x28cb110();
   input += synapse0x28cb150();
   input += synapse0x28cb190();
   input += synapse0x28cb1d0();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28ca840() {
   double input = input0x28ca840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28d1a40() {
   double input = -0.863432;
   input += synapse0x266b0e0();
   input += synapse0x266b120();
   input += synapse0x28a8c80();
   input += synapse0x28a8cc0();
   input += synapse0x28a9650();
   input += synapse0x28a9690();
   input += synapse0x28aa420();
   input += synapse0x28aa460();
   input += synapse0x28aadf0();
   input += synapse0x28aae30();
   input += synapse0x28ab7c0();
   input += synapse0x28ab800();
   input += synapse0x28ac2a0();
   input += synapse0x28ac2e0();
   input += synapse0x28acc70();
   input += synapse0x28accb0();
   input += synapse0x28a9d50();
   input += synapse0x28a9d90();
   input += synapse0x28ae820();
   input += synapse0x28ae860();
   input += synapse0x28af1f0();
   input += synapse0x28af230();
   input += synapse0x28afbc0();
   input += synapse0x28afc00();
   input += synapse0x28b0590();
   input += synapse0x28b05d0();
   input += synapse0x28a4730();
   input += synapse0x28a4770();
   input += synapse0x28b2680();
   input += synapse0x28b26c0();
   input += synapse0x28b3050();
   input += synapse0x28b3090();
   input += synapse0x28b3a20();
   input += synapse0x28b3a60();
   input += synapse0x28b43f0();
   input += synapse0x28b4430();
   input += synapse0x28b4dc0();
   input += synapse0x28b4e00();
   input += synapse0x28ad910();
   input += synapse0x28ad950();
   input += synapse0x28b71c0();
   input += synapse0x28b7200();
   input += synapse0x28b7b50();
   input += synapse0x28b7b90();
   input += synapse0x28b8520();
   input += synapse0x28b8560();
   input += synapse0x28b8ef0();
   input += synapse0x28b8f30();
   input += synapse0x28b98c0();
   input += synapse0x28b9900();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28d1a40() {
   double input = input0x28d1a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28d1de0() {
   double input = -0.280597;
   input += synapse0x28bc000();
   input += synapse0x28bc040();
   input += synapse0x28b15c0();
   input += synapse0x28b1600();
   input += synapse0x28bebe0();
   input += synapse0x28bec20();
   input += synapse0x28bf5b0();
   input += synapse0x28bf5f0();
   input += synapse0x28bff80();
   input += synapse0x28bffc0();
   input += synapse0x28c0950();
   input += synapse0x28c0990();
   input += synapse0x28c1320();
   input += synapse0x28c1360();
   input += synapse0x28c1cf0();
   input += synapse0x28c1d30();
   input += synapse0x28c26c0();
   input += synapse0x28c2700();
   input += synapse0x28c3090();
   input += synapse0x28c30d0();
   input += synapse0x28c3c70();
   input += synapse0x28c3cb0();
   input += synapse0x28c4640();
   input += synapse0x28c4680();
   input += synapse0x28b54c0();
   input += synapse0x28b5500();
   input += synapse0x28b5e90();
   input += synapse0x28b5ed0();
   input += synapse0x28b6860();
   input += synapse0x28b68a0();
   input += synapse0x28c8d80();
   input += synapse0x28c8dc0();
   input += synapse0x28c9750();
   input += synapse0x28c9790();
   input += synapse0x28ca120();
   input += synapse0x28ca160();
   input += synapse0x28caaf0();
   input += synapse0x28cab30();
   input += synapse0x28a69e0();
   input += synapse0x28a6a20();
   input += synapse0x28ba290();
   input += synapse0x28ba2d0();
   input += synapse0x28cb210();
   input += synapse0x28cb250();
   input += synapse0x28cb290();
   input += synapse0x28cb2d0();
   input += synapse0x28d2180();
   input += synapse0x28d21c0();
   input += synapse0x28d2200();
   input += synapse0x28d2240();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28d1de0() {
   double input = input0x28d1de0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28d2280() {
   double input = -0.134282;
   input += synapse0x28d25c0();
   input += synapse0x28d2600();
   input += synapse0x28d2640();
   input += synapse0x28d2680();
   input += synapse0x28d26c0();
   input += synapse0x28d2700();
   input += synapse0x28d2740();
   input += synapse0x28d2780();
   input += synapse0x28d27c0();
   input += synapse0x28d2800();
   input += synapse0x28d2840();
   input += synapse0x28d2880();
   input += synapse0x28d28c0();
   input += synapse0x28d2900();
   input += synapse0x28d2940();
   input += synapse0x28d2980();
   input += synapse0x28d2410();
   input += synapse0x28d2450();
   input += synapse0x28d2ad0();
   input += synapse0x28d2b10();
   input += synapse0x28d2b50();
   input += synapse0x28d2b90();
   input += synapse0x28d2bd0();
   input += synapse0x28d2c10();
   input += synapse0x28d2c50();
   input += synapse0x28d2c90();
   input += synapse0x28d2cd0();
   input += synapse0x28d2d10();
   input += synapse0x28d2d50();
   input += synapse0x28d2d90();
   input += synapse0x28d2dd0();
   input += synapse0x28d2e10();
   input += synapse0x28d29c0();
   input += synapse0x28d2a00();
   input += synapse0x28d2a40();
   input += synapse0x28d2a80();
   input += synapse0x28d3060();
   input += synapse0x28d30a0();
   input += synapse0x28d30e0();
   input += synapse0x28d3120();
   input += synapse0x28d3160();
   input += synapse0x28d31a0();
   input += synapse0x28d31e0();
   input += synapse0x28d3220();
   input += synapse0x28d3260();
   input += synapse0x28d32a0();
   input += synapse0x28d32e0();
   input += synapse0x28d3320();
   input += synapse0x28d3360();
   input += synapse0x28d33a0();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28d2280() {
   double input = input0x28d2280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28d33e0() {
   double input = 3.3058;
   input += synapse0x28d3720();
   input += synapse0x28d3760();
   input += synapse0x28d37a0();
   input += synapse0x28d37e0();
   input += synapse0x28d3820();
   input += synapse0x28d3860();
   input += synapse0x28d38a0();
   input += synapse0x28d38e0();
   input += synapse0x28d3920();
   input += synapse0x28d3960();
   input += synapse0x28d39a0();
   input += synapse0x28d39e0();
   input += synapse0x28d3a20();
   input += synapse0x28d3a60();
   input += synapse0x28d3aa0();
   input += synapse0x28d3ae0();
   input += synapse0x28d3570();
   input += synapse0x28d35b0();
   input += synapse0x28d3c30();
   input += synapse0x28d3c70();
   input += synapse0x28d3cb0();
   input += synapse0x28d3cf0();
   input += synapse0x28d3d30();
   input += synapse0x28d3d70();
   input += synapse0x28d3db0();
   input += synapse0x28d3df0();
   input += synapse0x28d3e30();
   input += synapse0x28d3e70();
   input += synapse0x28d3eb0();
   input += synapse0x28d3ef0();
   input += synapse0x28d3f30();
   input += synapse0x28d3f70();
   input += synapse0x28d3b20();
   input += synapse0x28d3b60();
   input += synapse0x28d3ba0();
   input += synapse0x28d3be0();
   input += synapse0x28d41c0();
   input += synapse0x28d4200();
   input += synapse0x28d4240();
   input += synapse0x28d4280();
   input += synapse0x28d42c0();
   input += synapse0x28d4300();
   input += synapse0x28d4340();
   input += synapse0x28d4380();
   input += synapse0x28d43c0();
   input += synapse0x28d4400();
   input += synapse0x28d4440();
   input += synapse0x28d4480();
   input += synapse0x28d44c0();
   input += synapse0x28d4500();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28d33e0() {
   double input = input0x28d33e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28d4540() {
   double input = -0.539214;
   input += synapse0x28d4880();
   input += synapse0x28d48c0();
   input += synapse0x28d4900();
   input += synapse0x28d4940();
   input += synapse0x28d4980();
   input += synapse0x28d49c0();
   input += synapse0x28d4a00();
   input += synapse0x28d4a40();
   input += synapse0x28d4a80();
   input += synapse0x28d4ac0();
   input += synapse0x28d4b00();
   input += synapse0x28d4b40();
   input += synapse0x28d4b80();
   input += synapse0x28d4bc0();
   input += synapse0x28d4c00();
   input += synapse0x28d4c40();
   input += synapse0x28d46d0();
   input += synapse0x28d4710();
   input += synapse0x28d4d90();
   input += synapse0x28d4dd0();
   input += synapse0x28d4e10();
   input += synapse0x28d4e50();
   input += synapse0x28d4e90();
   input += synapse0x28d4ed0();
   input += synapse0x28d4f10();
   input += synapse0x28d4f50();
   input += synapse0x28d4f90();
   input += synapse0x28d4fd0();
   input += synapse0x28d5010();
   input += synapse0x28d5050();
   input += synapse0x28d5090();
   input += synapse0x28d50d0();
   input += synapse0x28d4c80();
   input += synapse0x28d4cc0();
   input += synapse0x28d4d00();
   input += synapse0x28d4d40();
   input += synapse0x28d5320();
   input += synapse0x28d5360();
   input += synapse0x28d53a0();
   input += synapse0x28d53e0();
   input += synapse0x28d5420();
   input += synapse0x28d5460();
   input += synapse0x28d54a0();
   input += synapse0x28d54e0();
   input += synapse0x28d5520();
   input += synapse0x28d5560();
   input += synapse0x28d55a0();
   input += synapse0x28d55e0();
   input += synapse0x28d5620();
   input += synapse0x28d5660();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28d4540() {
   double input = input0x28d4540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_sR::input0x28d56a0() {
   double input = 14.3379;
   input += synapse0x28d58c0();
   input += synapse0x28d5900();
   input += synapse0x28d5940();
   input += synapse0x28d5980();
   input += synapse0x28d59c0();
   return input;
}

double NNfunction_ns_chi02_sR::neuron0x28d56a0() {
   double input = input0x28d56a0();
   return (input * 1)+0;
}

double NNfunction_ns_chi02_sR::synapse0x28a1650() {
   return (neuron0x28a1790()*0.110143);
}

double NNfunction_ns_chi02_sR::synapse0x28a1690() {
   return (neuron0x28a1ad0()*-6.1853);
}

double NNfunction_ns_chi02_sR::synapse0x28a6a70() {
   return (neuron0x28a1e10()*0.769412);
}

double NNfunction_ns_chi02_sR::synapse0x28a6ab0() {
   return (neuron0x28a2150()*0.0378396);
}

double NNfunction_ns_chi02_sR::synapse0x28a6af0() {
   return (neuron0x28a2490()*-0.0244891);
}

double NNfunction_ns_chi02_sR::synapse0x28a6b30() {
   return (neuron0x28a27d0()*0.00602108);
}

double NNfunction_ns_chi02_sR::synapse0x28a6b70() {
   return (neuron0x28a2b10()*-0.0276032);
}

double NNfunction_ns_chi02_sR::synapse0x28a6bb0() {
   return (neuron0x28a2e50()*-0.0101201);
}

double NNfunction_ns_chi02_sR::synapse0x28a6bf0() {
   return (neuron0x28a3190()*-0.00783393);
}

double NNfunction_ns_chi02_sR::synapse0x28a6c30() {
   return (neuron0x28a34d0()*-0.0151808);
}

double NNfunction_ns_chi02_sR::synapse0x28a6c70() {
   return (neuron0x28a3810()*-0.0378081);
}

double NNfunction_ns_chi02_sR::synapse0x28a6cb0() {
   return (neuron0x28a3b50()*-0.033292);
}

double NNfunction_ns_chi02_sR::synapse0x28a6cf0() {
   return (neuron0x28a3e90()*0.0288732);
}

double NNfunction_ns_chi02_sR::synapse0x28a6d30() {
   return (neuron0x28a41d0()*0.0307456);
}

double NNfunction_ns_chi02_sR::synapse0x28a6d70() {
   return (neuron0x28a4510()*-0.0344658);
}

double NNfunction_ns_chi02_sR::synapse0x28a6db0() {
   return (neuron0x28a4850()*-0.0277479);
}

double NNfunction_ns_chi02_sR::synapse0x28a15c0() {
   return (neuron0x28a4b90()*0.00715041);
}

double NNfunction_ns_chi02_sR::synapse0x28a1600() {
   return (neuron0x28a50f0()*0.00657794);
}

double NNfunction_ns_chi02_sR::synapse0x265c930() {
   return (neuron0x28a5310()*-0.0762349);
}

double NNfunction_ns_chi02_sR::synapse0x265c970() {
   return (neuron0x28a5650()*0.029303);
}

double NNfunction_ns_chi02_sR::synapse0x28a7010() {
   return (neuron0x28a5990()*0.0220371);
}

double NNfunction_ns_chi02_sR::synapse0x28a7050() {
   return (neuron0x28a5cd0()*-0.00349363);
}

double NNfunction_ns_chi02_sR::synapse0x28a7090() {
   return (neuron0x28a6010()*-0.00661288);
}

double NNfunction_ns_chi02_sR::synapse0x28a70d0() {
   return (neuron0x28a6350()*0.252579);
}

double NNfunction_ns_chi02_sR::synapse0x28a7450() {
   return (neuron0x28a1790()*-1.17261);
}

double NNfunction_ns_chi02_sR::synapse0x28a7490() {
   return (neuron0x28a1ad0()*0.435232);
}

double NNfunction_ns_chi02_sR::synapse0x28a74d0() {
   return (neuron0x28a1e10()*-0.410062);
}

double NNfunction_ns_chi02_sR::synapse0x28a7510() {
   return (neuron0x28a2150()*-0.79204);
}

double NNfunction_ns_chi02_sR::synapse0x28a7550() {
   return (neuron0x28a2490()*0.573028);
}

double NNfunction_ns_chi02_sR::synapse0x28a7590() {
   return (neuron0x28a27d0()*1.24271);
}

double NNfunction_ns_chi02_sR::synapse0x28a75d0() {
   return (neuron0x28a2b10()*0.284616);
}

double NNfunction_ns_chi02_sR::synapse0x28a7610() {
   return (neuron0x28a2e50()*-0.97433);
}

double NNfunction_ns_chi02_sR::synapse0x28a7650() {
   return (neuron0x28a3190()*-0.745201);
}

double NNfunction_ns_chi02_sR::synapse0x28a6f00() {
   return (neuron0x28a34d0()*0.688351);
}

double NNfunction_ns_chi02_sR::synapse0x28a6f40() {
   return (neuron0x28a3810()*-0.120293);
}

double NNfunction_ns_chi02_sR::synapse0x28a6f80() {
   return (neuron0x28a3b50()*0.191473);
}

double NNfunction_ns_chi02_sR::synapse0x28a6fc0() {
   return (neuron0x28a3e90()*-0.599573);
}

double NNfunction_ns_chi02_sR::synapse0x28a78a0() {
   return (neuron0x28a41d0()*0.801391);
}

double NNfunction_ns_chi02_sR::synapse0x28a78e0() {
   return (neuron0x28a4510()*-0.146141);
}

double NNfunction_ns_chi02_sR::synapse0x28a7920() {
   return (neuron0x28a4850()*1.2413);
}

double NNfunction_ns_chi02_sR::synapse0x28a72a0() {
   return (neuron0x28a4b90()*0.0719424);
}

double NNfunction_ns_chi02_sR::synapse0x28a72e0() {
   return (neuron0x28a50f0()*-0.733418);
}

double NNfunction_ns_chi02_sR::synapse0x28a7a70() {
   return (neuron0x28a5310()*-1.04358);
}

double NNfunction_ns_chi02_sR::synapse0x28a7ab0() {
   return (neuron0x28a5650()*-0.358268);
}

double NNfunction_ns_chi02_sR::synapse0x28a7af0() {
   return (neuron0x28a5990()*-0.839008);
}

double NNfunction_ns_chi02_sR::synapse0x28a7b30() {
   return (neuron0x28a5cd0()*-0.640332);
}

double NNfunction_ns_chi02_sR::synapse0x28a7b70() {
   return (neuron0x28a6010()*-0.462334);
}

double NNfunction_ns_chi02_sR::synapse0x28a7bb0() {
   return (neuron0x28a6350()*-1.15204);
}

double NNfunction_ns_chi02_sR::synapse0x28a7f30() {
   return (neuron0x28a1790()*-0.00659502);
}

double NNfunction_ns_chi02_sR::synapse0x28a7f70() {
   return (neuron0x28a1ad0()*0.0189603);
}

double NNfunction_ns_chi02_sR::synapse0x28a7fb0() {
   return (neuron0x28a1e10()*0.000339688);
}

double NNfunction_ns_chi02_sR::synapse0x28a7ff0() {
   return (neuron0x28a2150()*-3.63239);
}

double NNfunction_ns_chi02_sR::synapse0x28a8030() {
   return (neuron0x28a2490()*-0.010749);
}

double NNfunction_ns_chi02_sR::synapse0x28a8070() {
   return (neuron0x28a27d0()*-0.0131306);
}

double NNfunction_ns_chi02_sR::synapse0x28a80b0() {
   return (neuron0x28a2b10()*-0.010887);
}

double NNfunction_ns_chi02_sR::synapse0x28a80f0() {
   return (neuron0x28a2e50()*0.00777217);
}

double NNfunction_ns_chi02_sR::synapse0x28a8130() {
   return (neuron0x28a3190()*0.0178848);
}

double NNfunction_ns_chi02_sR::synapse0x28a8170() {
   return (neuron0x28a34d0()*-0.0133035);
}

double NNfunction_ns_chi02_sR::synapse0x28a81b0() {
   return (neuron0x28a3810()*0.0027727);
}

double NNfunction_ns_chi02_sR::synapse0x28a81f0() {
   return (neuron0x28a3b50()*-0.023339);
}

double NNfunction_ns_chi02_sR::synapse0x28a8230() {
   return (neuron0x28a3e90()*-0.00997064);
}

double NNfunction_ns_chi02_sR::synapse0x28a8270() {
   return (neuron0x28a41d0()*0.00499209);
}

double NNfunction_ns_chi02_sR::synapse0x28a82b0() {
   return (neuron0x28a4510()*0.00767419);
}

double NNfunction_ns_chi02_sR::synapse0x28a82f0() {
   return (neuron0x28a4850()*-0.00892634);
}

double NNfunction_ns_chi02_sR::synapse0x28a7d80() {
   return (neuron0x28a4b90()*0.0166492);
}

double NNfunction_ns_chi02_sR::synapse0x28a7dc0() {
   return (neuron0x28a50f0()*0.00845902);
}

double NNfunction_ns_chi02_sR::synapse0x265d020() {
   return (neuron0x28a5310()*0.143459);
}

double NNfunction_ns_chi02_sR::synapse0x266a8f0() {
   return (neuron0x28a5650()*-0.0137785);
}

double NNfunction_ns_chi02_sR::synapse0x266a930() {
   return (neuron0x28a5990()*0.00413176);
}

double NNfunction_ns_chi02_sR::synapse0x2890820() {
   return (neuron0x28a5cd0()*-0.010163);
}

double NNfunction_ns_chi02_sR::synapse0x2890860() {
   return (neuron0x28a6010()*0.011163);
}

double NNfunction_ns_chi02_sR::synapse0x28908a0() {
   return (neuron0x28a6350()*0.00671552);
}

double NNfunction_ns_chi02_sR::synapse0x266b170() {
   return (neuron0x28a1790()*0.0510762);
}

double NNfunction_ns_chi02_sR::synapse0x28a7820() {
   return (neuron0x28a1ad0()*0.0876944);
}

double NNfunction_ns_chi02_sR::synapse0x28a7860() {
   return (neuron0x28a1e10()*0.549738);
}

double NNfunction_ns_chi02_sR::synapse0x28a8440() {
   return (neuron0x28a2150()*-0.025883);
}

double NNfunction_ns_chi02_sR::synapse0x28a8480() {
   return (neuron0x28a2490()*0.0169821);
}

double NNfunction_ns_chi02_sR::synapse0x28a84c0() {
   return (neuron0x28a27d0()*0.0173682);
}

double NNfunction_ns_chi02_sR::synapse0x28a8500() {
   return (neuron0x28a2b10()*0.0117939);
}

double NNfunction_ns_chi02_sR::synapse0x28a8540() {
   return (neuron0x28a2e50()*-0.0141374);
}

double NNfunction_ns_chi02_sR::synapse0x28a8580() {
   return (neuron0x28a3190()*-0.00274548);
}

double NNfunction_ns_chi02_sR::synapse0x28a85c0() {
   return (neuron0x28a34d0()*0.0214132);
}

double NNfunction_ns_chi02_sR::synapse0x28a8600() {
   return (neuron0x28a3810()*-0.00830344);
}

double NNfunction_ns_chi02_sR::synapse0x28a8640() {
   return (neuron0x28a3b50()*-0.000151043);
}

double NNfunction_ns_chi02_sR::synapse0x28a8680() {
   return (neuron0x28a3e90()*-0.0162299);
}

double NNfunction_ns_chi02_sR::synapse0x28a86c0() {
   return (neuron0x28a41d0()*0.010523);
}

double NNfunction_ns_chi02_sR::synapse0x28a8700() {
   return (neuron0x28a4510()*-0.0386018);
}

double NNfunction_ns_chi02_sR::synapse0x28a8740() {
   return (neuron0x28a4850()*0.0215786);
}

double NNfunction_ns_chi02_sR::synapse0x28a16d0() {
   return (neuron0x28a4b90()*-0.0134405);
}

double NNfunction_ns_chi02_sR::synapse0x28a1710() {
   return (neuron0x28a50f0()*0.0213902);
}

double NNfunction_ns_chi02_sR::synapse0x28a1750() {
   return (neuron0x28a5310()*-0.0764099);
}

double NNfunction_ns_chi02_sR::synapse0x28a8890() {
   return (neuron0x28a5650()*0.00829287);
}

double NNfunction_ns_chi02_sR::synapse0x28a88d0() {
   return (neuron0x28a5990()*0.0103667);
}

double NNfunction_ns_chi02_sR::synapse0x28a8910() {
   return (neuron0x28a5cd0()*-0.00145472);
}

double NNfunction_ns_chi02_sR::synapse0x28a8950() {
   return (neuron0x28a6010()*-0.0329872);
}

double NNfunction_ns_chi02_sR::synapse0x28a8990() {
   return (neuron0x28a6350()*5.7241);
}

double NNfunction_ns_chi02_sR::synapse0x28a8d10() {
   return (neuron0x28a1790()*-0.00581258);
}

double NNfunction_ns_chi02_sR::synapse0x28a8d50() {
   return (neuron0x28a1ad0()*-1.15114);
}

double NNfunction_ns_chi02_sR::synapse0x28a8d90() {
   return (neuron0x28a1e10()*0.0356702);
}

double NNfunction_ns_chi02_sR::synapse0x28a8dd0() {
   return (neuron0x28a2150()*-0.000886786);
}

double NNfunction_ns_chi02_sR::synapse0x28a8e10() {
   return (neuron0x28a2490()*0.0081616);
}

double NNfunction_ns_chi02_sR::synapse0x28a8e50() {
   return (neuron0x28a27d0()*0.00525573);
}

double NNfunction_ns_chi02_sR::synapse0x28a8e90() {
   return (neuron0x28a2b10()*0.00169315);
}

double NNfunction_ns_chi02_sR::synapse0x28a8ed0() {
   return (neuron0x28a2e50()*0.0017223);
}

double NNfunction_ns_chi02_sR::synapse0x28a8f10() {
   return (neuron0x28a3190()*-0.0164822);
}

double NNfunction_ns_chi02_sR::synapse0x28a8f50() {
   return (neuron0x28a34d0()*0.01394);
}

double NNfunction_ns_chi02_sR::synapse0x28a8f90() {
   return (neuron0x28a3810()*-0.00384792);
}

double NNfunction_ns_chi02_sR::synapse0x28a8fd0() {
   return (neuron0x28a3b50()*0.0114593);
}

double NNfunction_ns_chi02_sR::synapse0x28a9010() {
   return (neuron0x28a3e90()*-0.00507955);
}

double NNfunction_ns_chi02_sR::synapse0x28a9050() {
   return (neuron0x28a41d0()*0.00989627);
}

double NNfunction_ns_chi02_sR::synapse0x28a9090() {
   return (neuron0x28a4510()*-0.011327);
}

double NNfunction_ns_chi02_sR::synapse0x28a90d0() {
   return (neuron0x28a4850()*-0.00609332);
}

double NNfunction_ns_chi02_sR::synapse0x28a8b60() {
   return (neuron0x28a4b90()*0.00824624);
}

double NNfunction_ns_chi02_sR::synapse0x28a8ba0() {
   return (neuron0x28a50f0()*-0.00127522);
}

double NNfunction_ns_chi02_sR::synapse0x28a9220() {
   return (neuron0x28a5310()*0.217508);
}

double NNfunction_ns_chi02_sR::synapse0x28a9260() {
   return (neuron0x28a5650()*-0.00168891);
}

double NNfunction_ns_chi02_sR::synapse0x28a92a0() {
   return (neuron0x28a5990()*-0.00930801);
}

double NNfunction_ns_chi02_sR::synapse0x28a92e0() {
   return (neuron0x28a5cd0()*0.000553951);
}

double NNfunction_ns_chi02_sR::synapse0x28a9320() {
   return (neuron0x28a6010()*0.00389804);
}

double NNfunction_ns_chi02_sR::synapse0x28a9360() {
   return (neuron0x28a6350()*0.0133175);
}

double NNfunction_ns_chi02_sR::synapse0x28a96e0() {
   return (neuron0x28a1790()*-1.12718);
}

double NNfunction_ns_chi02_sR::synapse0x28a9720() {
   return (neuron0x28a1ad0()*-1.26658);
}

double NNfunction_ns_chi02_sR::synapse0x28a9760() {
   return (neuron0x28a1e10()*-0.235253);
}

double NNfunction_ns_chi02_sR::synapse0x28a97a0() {
   return (neuron0x28a2150()*-1.59193);
}

double NNfunction_ns_chi02_sR::synapse0x28a97e0() {
   return (neuron0x28a2490()*0.224849);
}

double NNfunction_ns_chi02_sR::synapse0x28a9820() {
   return (neuron0x28a27d0()*0.855677);
}

double NNfunction_ns_chi02_sR::synapse0x28a9860() {
   return (neuron0x28a2b10()*0.323682);
}

double NNfunction_ns_chi02_sR::synapse0x28a98a0() {
   return (neuron0x28a2e50()*1.10395);
}

double NNfunction_ns_chi02_sR::synapse0x28a98e0() {
   return (neuron0x28a3190()*0.101784);
}

double NNfunction_ns_chi02_sR::synapse0x266ac40() {
   return (neuron0x28a34d0()*0.0522372);
}

double NNfunction_ns_chi02_sR::synapse0x266ac80() {
   return (neuron0x28a3810()*-1.36771);
}

double NNfunction_ns_chi02_sR::synapse0x266acc0() {
   return (neuron0x28a3b50()*0.878436);
}

double NNfunction_ns_chi02_sR::synapse0x266ad00() {
   return (neuron0x28a3e90()*-0.23967);
}

double NNfunction_ns_chi02_sR::synapse0x266ad40() {
   return (neuron0x28a41d0()*-0.878449);
}

double NNfunction_ns_chi02_sR::synapse0x266ad80() {
   return (neuron0x28a4510()*-0.0418495);
}

double NNfunction_ns_chi02_sR::synapse0x266adc0() {
   return (neuron0x28a4850()*-1.74378);
}

double NNfunction_ns_chi02_sR::synapse0x28a9530() {
   return (neuron0x28a4b90()*0.786492);
}

double NNfunction_ns_chi02_sR::synapse0x28a9570() {
   return (neuron0x28a50f0()*-1.08744);
}

double NNfunction_ns_chi02_sR::synapse0x266af10() {
   return (neuron0x28a5310()*2.74765);
}

double NNfunction_ns_chi02_sR::synapse0x266af50() {
   return (neuron0x28a5650()*-0.254421);
}

double NNfunction_ns_chi02_sR::synapse0x266af90() {
   return (neuron0x28a5990()*0.417575);
}

double NNfunction_ns_chi02_sR::synapse0x266afd0() {
   return (neuron0x28a5cd0()*-0.172625);
}

double NNfunction_ns_chi02_sR::synapse0x266b010() {
   return (neuron0x28a6010()*0.997974);
}

double NNfunction_ns_chi02_sR::synapse0x28aa130() {
   return (neuron0x28a6350()*-0.669349);
}

double NNfunction_ns_chi02_sR::synapse0x28aa4b0() {
   return (neuron0x28a1790()*0.23871);
}

double NNfunction_ns_chi02_sR::synapse0x28aa4f0() {
   return (neuron0x28a1ad0()*2.62247);
}

double NNfunction_ns_chi02_sR::synapse0x28aa530() {
   return (neuron0x28a1e10()*0.307493);
}

double NNfunction_ns_chi02_sR::synapse0x28aa570() {
   return (neuron0x28a2150()*0.371129);
}

double NNfunction_ns_chi02_sR::synapse0x28aa5b0() {
   return (neuron0x28a2490()*0.17074);
}

double NNfunction_ns_chi02_sR::synapse0x28aa5f0() {
   return (neuron0x28a27d0()*-0.148425);
}

double NNfunction_ns_chi02_sR::synapse0x28aa630() {
   return (neuron0x28a2b10()*-0.42859);
}

double NNfunction_ns_chi02_sR::synapse0x28aa670() {
   return (neuron0x28a2e50()*0.764867);
}

double NNfunction_ns_chi02_sR::synapse0x28aa6b0() {
   return (neuron0x28a3190()*0.382362);
}

double NNfunction_ns_chi02_sR::synapse0x28aa6f0() {
   return (neuron0x28a34d0()*0.115912);
}

double NNfunction_ns_chi02_sR::synapse0x28aa730() {
   return (neuron0x28a3810()*0.367116);
}

double NNfunction_ns_chi02_sR::synapse0x28aa770() {
   return (neuron0x28a3b50()*-0.617993);
}

double NNfunction_ns_chi02_sR::synapse0x28aa7b0() {
   return (neuron0x28a3e90()*0.360465);
}

double NNfunction_ns_chi02_sR::synapse0x28aa7f0() {
   return (neuron0x28a41d0()*0.537423);
}

double NNfunction_ns_chi02_sR::synapse0x28aa830() {
   return (neuron0x28a4510()*-0.811169);
}

double NNfunction_ns_chi02_sR::synapse0x28aa870() {
   return (neuron0x28a4850()*0.934186);
}

double NNfunction_ns_chi02_sR::synapse0x28aa300() {
   return (neuron0x28a4b90()*-0.776304);
}

double NNfunction_ns_chi02_sR::synapse0x28aa340() {
   return (neuron0x28a50f0()*0.295344);
}

double NNfunction_ns_chi02_sR::synapse0x28aa9c0() {
   return (neuron0x28a5310()*-1.86879);
}

double NNfunction_ns_chi02_sR::synapse0x28aaa00() {
   return (neuron0x28a5650()*-0.531202);
}

double NNfunction_ns_chi02_sR::synapse0x28aaa40() {
   return (neuron0x28a5990()*-0.0816399);
}

double NNfunction_ns_chi02_sR::synapse0x28aaa80() {
   return (neuron0x28a5cd0()*-0.164532);
}

double NNfunction_ns_chi02_sR::synapse0x28aaac0() {
   return (neuron0x28a6010()*-0.148193);
}

double NNfunction_ns_chi02_sR::synapse0x28aab00() {
   return (neuron0x28a6350()*-0.321171);
}

double NNfunction_ns_chi02_sR::synapse0x28aae80() {
   return (neuron0x28a1790()*0.0173486);
}

double NNfunction_ns_chi02_sR::synapse0x28aaec0() {
   return (neuron0x28a1ad0()*0.0709871);
}

double NNfunction_ns_chi02_sR::synapse0x28aaf00() {
   return (neuron0x28a1e10()*0.581524);
}

double NNfunction_ns_chi02_sR::synapse0x28aaf40() {
   return (neuron0x28a2150()*-0.0661857);
}

double NNfunction_ns_chi02_sR::synapse0x28aaf80() {
   return (neuron0x28a2490()*0.00677325);
}

double NNfunction_ns_chi02_sR::synapse0x28aafc0() {
   return (neuron0x28a27d0()*-0.0172799);
}

double NNfunction_ns_chi02_sR::synapse0x28ab000() {
   return (neuron0x28a2b10()*0.0139469);
}

double NNfunction_ns_chi02_sR::synapse0x28ab040() {
   return (neuron0x28a2e50()*0.00433754);
}

double NNfunction_ns_chi02_sR::synapse0x28ab080() {
   return (neuron0x28a3190()*0.0375264);
}

double NNfunction_ns_chi02_sR::synapse0x28ab0c0() {
   return (neuron0x28a34d0()*0.0194166);
}

double NNfunction_ns_chi02_sR::synapse0x28ab100() {
   return (neuron0x28a3810()*-0.00916778);
}

double NNfunction_ns_chi02_sR::synapse0x28ab140() {
   return (neuron0x28a3b50()*-0.0300179);
}

double NNfunction_ns_chi02_sR::synapse0x28ab180() {
   return (neuron0x28a3e90()*-0.00722962);
}

double NNfunction_ns_chi02_sR::synapse0x28ab1c0() {
   return (neuron0x28a41d0()*0.0358566);
}

double NNfunction_ns_chi02_sR::synapse0x28ab200() {
   return (neuron0x28a4510()*-0.0161127);
}

double NNfunction_ns_chi02_sR::synapse0x28ab240() {
   return (neuron0x28a4850()*-0.0430837);
}

double NNfunction_ns_chi02_sR::synapse0x28aacd0() {
   return (neuron0x28a4b90()*0.0264943);
}

double NNfunction_ns_chi02_sR::synapse0x28aad10() {
   return (neuron0x28a50f0()*0.0337493);
}

double NNfunction_ns_chi02_sR::synapse0x28ab390() {
   return (neuron0x28a5310()*0.0209285);
}

double NNfunction_ns_chi02_sR::synapse0x28ab3d0() {
   return (neuron0x28a5650()*0.0038553);
}

double NNfunction_ns_chi02_sR::synapse0x28ab410() {
   return (neuron0x28a5990()*0.0405607);
}

double NNfunction_ns_chi02_sR::synapse0x28ab450() {
   return (neuron0x28a5cd0()*0.0252382);
}

double NNfunction_ns_chi02_sR::synapse0x28ab490() {
   return (neuron0x28a6010()*-0.0155475);
}

double NNfunction_ns_chi02_sR::synapse0x28ab4d0() {
   return (neuron0x28a6350()*-13.3869);
}

double NNfunction_ns_chi02_sR::synapse0x28a4fe0() {
   return (neuron0x28a1790()*0.0247972);
}

double NNfunction_ns_chi02_sR::synapse0x28a5020() {
   return (neuron0x28a1ad0()*5.52588);
}

double NNfunction_ns_chi02_sR::synapse0x28a5060() {
   return (neuron0x28a1e10()*-6.42096);
}

double NNfunction_ns_chi02_sR::synapse0x28a50a0() {
   return (neuron0x28a2150()*0.0997982);
}

double NNfunction_ns_chi02_sR::synapse0x28aba60() {
   return (neuron0x28a2490()*-0.0465822);
}

double NNfunction_ns_chi02_sR::synapse0x28abaa0() {
   return (neuron0x28a27d0()*-0.11478);
}

double NNfunction_ns_chi02_sR::synapse0x28abae0() {
   return (neuron0x28a2b10()*-0.0745706);
}

double NNfunction_ns_chi02_sR::synapse0x28abb20() {
   return (neuron0x28a2e50()*-0.0510604);
}

double NNfunction_ns_chi02_sR::synapse0x28abb60() {
   return (neuron0x28a3190()*0.0395083);
}

double NNfunction_ns_chi02_sR::synapse0x28abba0() {
   return (neuron0x28a34d0()*0.0142589);
}

double NNfunction_ns_chi02_sR::synapse0x28abbe0() {
   return (neuron0x28a3810()*0.0712787);
}

double NNfunction_ns_chi02_sR::synapse0x28abc20() {
   return (neuron0x28a3b50()*-0.00633389);
}

double NNfunction_ns_chi02_sR::synapse0x28abc60() {
   return (neuron0x28a3e90()*0.0707996);
}

double NNfunction_ns_chi02_sR::synapse0x28abca0() {
   return (neuron0x28a41d0()*-0.181942);
}

double NNfunction_ns_chi02_sR::synapse0x28abce0() {
   return (neuron0x28a4510()*0.108632);
}

double NNfunction_ns_chi02_sR::synapse0x28abd20() {
   return (neuron0x28a4850()*-0.0261651);
}

double NNfunction_ns_chi02_sR::synapse0x28ab6a0() {
   return (neuron0x28a4b90()*0.129002);
}

double NNfunction_ns_chi02_sR::synapse0x28ab6e0() {
   return (neuron0x28a50f0()*0.0848049);
}

double NNfunction_ns_chi02_sR::synapse0x28abe70() {
   return (neuron0x28a5310()*0.490082);
}

double NNfunction_ns_chi02_sR::synapse0x28abeb0() {
   return (neuron0x28a5650()*0.062573);
}

double NNfunction_ns_chi02_sR::synapse0x28abef0() {
   return (neuron0x28a5990()*-0.0371402);
}

double NNfunction_ns_chi02_sR::synapse0x28abf30() {
   return (neuron0x28a5cd0()*0.0973685);
}

double NNfunction_ns_chi02_sR::synapse0x28abf70() {
   return (neuron0x28a6010()*0.103276);
}

double NNfunction_ns_chi02_sR::synapse0x28abfb0() {
   return (neuron0x28a6350()*-0.012242);
}

double NNfunction_ns_chi02_sR::synapse0x28ac330() {
   return (neuron0x28a1790()*-1.32548);
}

double NNfunction_ns_chi02_sR::synapse0x28ac370() {
   return (neuron0x28a1ad0()*-0.90112);
}

double NNfunction_ns_chi02_sR::synapse0x28ac3b0() {
   return (neuron0x28a1e10()*1.2039);
}

double NNfunction_ns_chi02_sR::synapse0x28ac3f0() {
   return (neuron0x28a2150()*-0.302419);
}

double NNfunction_ns_chi02_sR::synapse0x28ac430() {
   return (neuron0x28a2490()*0.491327);
}

double NNfunction_ns_chi02_sR::synapse0x28ac470() {
   return (neuron0x28a27d0()*0.0951315);
}

double NNfunction_ns_chi02_sR::synapse0x28ac4b0() {
   return (neuron0x28a2b10()*-1.79692);
}

double NNfunction_ns_chi02_sR::synapse0x28ac4f0() {
   return (neuron0x28a2e50()*-0.24599);
}

double NNfunction_ns_chi02_sR::synapse0x28ac530() {
   return (neuron0x28a3190()*2.97065);
}

double NNfunction_ns_chi02_sR::synapse0x28ac570() {
   return (neuron0x28a34d0()*-0.937206);
}

double NNfunction_ns_chi02_sR::synapse0x28ac5b0() {
   return (neuron0x28a3810()*-0.729641);
}

double NNfunction_ns_chi02_sR::synapse0x28ac5f0() {
   return (neuron0x28a3b50()*-1.60473);
}

double NNfunction_ns_chi02_sR::synapse0x28ac630() {
   return (neuron0x28a3e90()*1.64741);
}

double NNfunction_ns_chi02_sR::synapse0x28ac670() {
   return (neuron0x28a41d0()*-1.4325);
}

double NNfunction_ns_chi02_sR::synapse0x28ac6b0() {
   return (neuron0x28a4510()*-1.32085);
}

double NNfunction_ns_chi02_sR::synapse0x28ac6f0() {
   return (neuron0x28a4850()*1.42885);
}

double NNfunction_ns_chi02_sR::synapse0x28ac180() {
   return (neuron0x28a4b90()*1.03785);
}

double NNfunction_ns_chi02_sR::synapse0x28ac1c0() {
   return (neuron0x28a50f0()*-1.20969);
}

double NNfunction_ns_chi02_sR::synapse0x28ac840() {
   return (neuron0x28a5310()*0.158606);
}

double NNfunction_ns_chi02_sR::synapse0x28ac880() {
   return (neuron0x28a5650()*-0.33474);
}

double NNfunction_ns_chi02_sR::synapse0x28ac8c0() {
   return (neuron0x28a5990()*0.745466);
}

double NNfunction_ns_chi02_sR::synapse0x28ac900() {
   return (neuron0x28a5cd0()*1.76444);
}

double NNfunction_ns_chi02_sR::synapse0x28ac940() {
   return (neuron0x28a6010()*2.26571);
}

double NNfunction_ns_chi02_sR::synapse0x28ac980() {
   return (neuron0x28a6350()*-1.25656);
}

double NNfunction_ns_chi02_sR::synapse0x28acd00() {
   return (neuron0x28a1790()*0.592931);
}

double NNfunction_ns_chi02_sR::synapse0x28acd40() {
   return (neuron0x28a1ad0()*-0.216939);
}

double NNfunction_ns_chi02_sR::synapse0x28acd80() {
   return (neuron0x28a1e10()*-0.267423);
}

double NNfunction_ns_chi02_sR::synapse0x28acdc0() {
   return (neuron0x28a2150()*0.263503);
}

double NNfunction_ns_chi02_sR::synapse0x28ace00() {
   return (neuron0x28a2490()*0.153724);
}

double NNfunction_ns_chi02_sR::synapse0x28ace40() {
   return (neuron0x28a27d0()*0.123097);
}

double NNfunction_ns_chi02_sR::synapse0x28ace80() {
   return (neuron0x28a2b10()*-0.702881);
}

double NNfunction_ns_chi02_sR::synapse0x28acec0() {
   return (neuron0x28a2e50()*0.76629);
}

double NNfunction_ns_chi02_sR::synapse0x28acf00() {
   return (neuron0x28a3190()*1.29323);
}

double NNfunction_ns_chi02_sR::synapse0x28acf40() {
   return (neuron0x28a34d0()*-0.352131);
}

double NNfunction_ns_chi02_sR::synapse0x28acf80() {
   return (neuron0x28a3810()*0.471974);
}

double NNfunction_ns_chi02_sR::synapse0x28acfc0() {
   return (neuron0x28a3b50()*0.0473972);
}

double NNfunction_ns_chi02_sR::synapse0x28ad000() {
   return (neuron0x28a3e90()*0.1322);
}

double NNfunction_ns_chi02_sR::synapse0x28ad040() {
   return (neuron0x28a41d0()*0.336283);
}

double NNfunction_ns_chi02_sR::synapse0x28ad080() {
   return (neuron0x28a4510()*-0.0973192);
}

double NNfunction_ns_chi02_sR::synapse0x28ad0c0() {
   return (neuron0x28a4850()*0.52612);
}

double NNfunction_ns_chi02_sR::synapse0x28acb50() {
   return (neuron0x28a4b90()*-1.78199);
}

double NNfunction_ns_chi02_sR::synapse0x28acb90() {
   return (neuron0x28a50f0()*0.51488);
}

double NNfunction_ns_chi02_sR::synapse0x28a9920() {
   return (neuron0x28a5310()*-1.787);
}

double NNfunction_ns_chi02_sR::synapse0x28a9960() {
   return (neuron0x28a5650()*-0.621965);
}

double NNfunction_ns_chi02_sR::synapse0x28a99a0() {
   return (neuron0x28a5990()*-0.631012);
}

double NNfunction_ns_chi02_sR::synapse0x28a99e0() {
   return (neuron0x28a5cd0()*-0.0217822);
}

double NNfunction_ns_chi02_sR::synapse0x28a9a20() {
   return (neuron0x28a6010()*0.134457);
}

double NNfunction_ns_chi02_sR::synapse0x28a9a60() {
   return (neuron0x28a6350()*-0.426288);
}

double NNfunction_ns_chi02_sR::synapse0x28a9de0() {
   return (neuron0x28a1790()*-0.290326);
}

double NNfunction_ns_chi02_sR::synapse0x28a9e20() {
   return (neuron0x28a1ad0()*-1.7106);
}

double NNfunction_ns_chi02_sR::synapse0x28a9e60() {
   return (neuron0x28a1e10()*-2.00797);
}

double NNfunction_ns_chi02_sR::synapse0x28a9ea0() {
   return (neuron0x28a2150()*-0.0732198);
}

double NNfunction_ns_chi02_sR::synapse0x28a9ee0() {
   return (neuron0x28a2490()*0.0222529);
}

double NNfunction_ns_chi02_sR::synapse0x28a9f20() {
   return (neuron0x28a27d0()*-0.134968);
}

double NNfunction_ns_chi02_sR::synapse0x28a9f60() {
   return (neuron0x28a2b10()*0.00433769);
}

double NNfunction_ns_chi02_sR::synapse0x28a9fa0() {
   return (neuron0x28a2e50()*-0.1942);
}

double NNfunction_ns_chi02_sR::synapse0x28a9fe0() {
   return (neuron0x28a3190()*0.154765);
}

double NNfunction_ns_chi02_sR::synapse0x28aa020() {
   return (neuron0x28a34d0()*0.210717);
}

double NNfunction_ns_chi02_sR::synapse0x28aa060() {
   return (neuron0x28a3810()*-0.00290069);
}

double NNfunction_ns_chi02_sR::synapse0x28aa0a0() {
   return (neuron0x28a3b50()*0.163042);
}

double NNfunction_ns_chi02_sR::synapse0x28aa0e0() {
   return (neuron0x28a3e90()*-0.139088);
}

double NNfunction_ns_chi02_sR::synapse0x28ae220() {
   return (neuron0x28a41d0()*0.107593);
}

double NNfunction_ns_chi02_sR::synapse0x28ae260() {
   return (neuron0x28a4510()*-0.408482);
}

double NNfunction_ns_chi02_sR::synapse0x28ae2a0() {
   return (neuron0x28a4850()*-0.289569);
}

double NNfunction_ns_chi02_sR::synapse0x28a9c30() {
   return (neuron0x28a4b90()*-0.303103);
}

double NNfunction_ns_chi02_sR::synapse0x28a9c70() {
   return (neuron0x28a50f0()*0.140495);
}

double NNfunction_ns_chi02_sR::synapse0x28ae3f0() {
   return (neuron0x28a5310()*-0.92164);
}

double NNfunction_ns_chi02_sR::synapse0x28ae430() {
   return (neuron0x28a5650()*0.165088);
}

double NNfunction_ns_chi02_sR::synapse0x28ae470() {
   return (neuron0x28a5990()*-0.0948314);
}

double NNfunction_ns_chi02_sR::synapse0x28ae4b0() {
   return (neuron0x28a5cd0()*0.24915);
}

double NNfunction_ns_chi02_sR::synapse0x28ae4f0() {
   return (neuron0x28a6010()*-0.188532);
}

double NNfunction_ns_chi02_sR::synapse0x28ae530() {
   return (neuron0x28a6350()*-0.947493);
}

double NNfunction_ns_chi02_sR::synapse0x28ae8b0() {
   return (neuron0x28a1790()*-0.275484);
}

double NNfunction_ns_chi02_sR::synapse0x28ae8f0() {
   return (neuron0x28a1ad0()*0.469923);
}

double NNfunction_ns_chi02_sR::synapse0x28ae930() {
   return (neuron0x28a1e10()*0.0232355);
}

double NNfunction_ns_chi02_sR::synapse0x28ae970() {
   return (neuron0x28a2150()*0.000903049);
}

double NNfunction_ns_chi02_sR::synapse0x28ae9b0() {
   return (neuron0x28a2490()*0.331316);
}

double NNfunction_ns_chi02_sR::synapse0x28ae9f0() {
   return (neuron0x28a27d0()*-0.939481);
}

double NNfunction_ns_chi02_sR::synapse0x28aea30() {
   return (neuron0x28a2b10()*-0.55918);
}

double NNfunction_ns_chi02_sR::synapse0x28aea70() {
   return (neuron0x28a2e50()*0.120767);
}

double NNfunction_ns_chi02_sR::synapse0x28aeab0() {
   return (neuron0x28a3190()*0.184931);
}

double NNfunction_ns_chi02_sR::synapse0x28aeaf0() {
   return (neuron0x28a34d0()*1.00192);
}

double NNfunction_ns_chi02_sR::synapse0x28aeb30() {
   return (neuron0x28a3810()*0.570853);
}

double NNfunction_ns_chi02_sR::synapse0x28aeb70() {
   return (neuron0x28a3b50()*-0.971018);
}

double NNfunction_ns_chi02_sR::synapse0x28aebb0() {
   return (neuron0x28a3e90()*0.0217756);
}

double NNfunction_ns_chi02_sR::synapse0x28aebf0() {
   return (neuron0x28a41d0()*-0.845096);
}

double NNfunction_ns_chi02_sR::synapse0x28aec30() {
   return (neuron0x28a4510()*0.211281);
}

double NNfunction_ns_chi02_sR::synapse0x28aec70() {
   return (neuron0x28a4850()*-1.17708);
}

double NNfunction_ns_chi02_sR::synapse0x28ae700() {
   return (neuron0x28a4b90()*-0.294213);
}

double NNfunction_ns_chi02_sR::synapse0x28ae740() {
   return (neuron0x28a50f0()*0.465482);
}

double NNfunction_ns_chi02_sR::synapse0x28aedc0() {
   return (neuron0x28a5310()*0.46812);
}

double NNfunction_ns_chi02_sR::synapse0x28aee00() {
   return (neuron0x28a5650()*-0.746479);
}

double NNfunction_ns_chi02_sR::synapse0x28aee40() {
   return (neuron0x28a5990()*-0.202419);
}

double NNfunction_ns_chi02_sR::synapse0x28aee80() {
   return (neuron0x28a5cd0()*-0.522947);
}

double NNfunction_ns_chi02_sR::synapse0x28aeec0() {
   return (neuron0x28a6010()*-0.0896526);
}

double NNfunction_ns_chi02_sR::synapse0x28aef00() {
   return (neuron0x28a6350()*-0.163148);
}

double NNfunction_ns_chi02_sR::synapse0x28af280() {
   return (neuron0x28a1790()*-0.229441);
}

double NNfunction_ns_chi02_sR::synapse0x28af2c0() {
   return (neuron0x28a1ad0()*-1.17327);
}

double NNfunction_ns_chi02_sR::synapse0x28af300() {
   return (neuron0x28a1e10()*-0.643153);
}

double NNfunction_ns_chi02_sR::synapse0x28af340() {
   return (neuron0x28a2150()*-0.22379);
}

double NNfunction_ns_chi02_sR::synapse0x28af380() {
   return (neuron0x28a2490()*-0.598754);
}

double NNfunction_ns_chi02_sR::synapse0x28af3c0() {
   return (neuron0x28a27d0()*0.655919);
}

double NNfunction_ns_chi02_sR::synapse0x28af400() {
   return (neuron0x28a2b10()*-0.378189);
}

double NNfunction_ns_chi02_sR::synapse0x28af440() {
   return (neuron0x28a2e50()*0.0388537);
}

double NNfunction_ns_chi02_sR::synapse0x28af480() {
   return (neuron0x28a3190()*-0.156901);
}

double NNfunction_ns_chi02_sR::synapse0x28af4c0() {
   return (neuron0x28a34d0()*1.3674);
}

double NNfunction_ns_chi02_sR::synapse0x28af500() {
   return (neuron0x28a3810()*-0.0510282);
}

double NNfunction_ns_chi02_sR::synapse0x28af540() {
   return (neuron0x28a3b50()*-1.03012);
}

double NNfunction_ns_chi02_sR::synapse0x28af580() {
   return (neuron0x28a3e90()*-0.442807);
}

double NNfunction_ns_chi02_sR::synapse0x28af5c0() {
   return (neuron0x28a41d0()*0.493098);
}

double NNfunction_ns_chi02_sR::synapse0x28af600() {
   return (neuron0x28a4510()*1.77746);
}

double NNfunction_ns_chi02_sR::synapse0x28af640() {
   return (neuron0x28a4850()*-0.233316);
}

double NNfunction_ns_chi02_sR::synapse0x28af0d0() {
   return (neuron0x28a4b90()*-0.748982);
}

double NNfunction_ns_chi02_sR::synapse0x28af110() {
   return (neuron0x28a50f0()*-1.45722);
}

double NNfunction_ns_chi02_sR::synapse0x28af790() {
   return (neuron0x28a5310()*1.86001);
}

double NNfunction_ns_chi02_sR::synapse0x28af7d0() {
   return (neuron0x28a5650()*0.711885);
}

double NNfunction_ns_chi02_sR::synapse0x28af810() {
   return (neuron0x28a5990()*0.0965359);
}

double NNfunction_ns_chi02_sR::synapse0x28af850() {
   return (neuron0x28a5cd0()*1.51042);
}

double NNfunction_ns_chi02_sR::synapse0x28af890() {
   return (neuron0x28a6010()*0.0995774);
}

double NNfunction_ns_chi02_sR::synapse0x28af8d0() {
   return (neuron0x28a6350()*-0.609646);
}

double NNfunction_ns_chi02_sR::synapse0x28afc50() {
   return (neuron0x28a1790()*-0.00661497);
}

double NNfunction_ns_chi02_sR::synapse0x28afc90() {
   return (neuron0x28a1ad0()*1.4574);
}

double NNfunction_ns_chi02_sR::synapse0x28afcd0() {
   return (neuron0x28a1e10()*0.101836);
}

double NNfunction_ns_chi02_sR::synapse0x28afd10() {
   return (neuron0x28a2150()*0.0260199);
}

double NNfunction_ns_chi02_sR::synapse0x28afd50() {
   return (neuron0x28a2490()*0.00757421);
}

double NNfunction_ns_chi02_sR::synapse0x28afd90() {
   return (neuron0x28a27d0()*0.0110771);
}

double NNfunction_ns_chi02_sR::synapse0x28afdd0() {
   return (neuron0x28a2b10()*-0.0181897);
}

double NNfunction_ns_chi02_sR::synapse0x28afe10() {
   return (neuron0x28a2e50()*-0.00621084);
}

double NNfunction_ns_chi02_sR::synapse0x28afe50() {
   return (neuron0x28a3190()*-0.0356261);
}

double NNfunction_ns_chi02_sR::synapse0x28afe90() {
   return (neuron0x28a34d0()*0.0356206);
}

double NNfunction_ns_chi02_sR::synapse0x28afed0() {
   return (neuron0x28a3810()*-0.00800311);
}

double NNfunction_ns_chi02_sR::synapse0x28aff10() {
   return (neuron0x28a3b50()*0.00384766);
}

double NNfunction_ns_chi02_sR::synapse0x28aff50() {
   return (neuron0x28a3e90()*-0.00878169);
}

double NNfunction_ns_chi02_sR::synapse0x28aff90() {
   return (neuron0x28a41d0()*0.0118955);
}

double NNfunction_ns_chi02_sR::synapse0x28affd0() {
   return (neuron0x28a4510()*-0.0266016);
}

double NNfunction_ns_chi02_sR::synapse0x28b0010() {
   return (neuron0x28a4850()*-0.0169791);
}

double NNfunction_ns_chi02_sR::synapse0x28afaa0() {
   return (neuron0x28a4b90()*-0.00619708);
}

double NNfunction_ns_chi02_sR::synapse0x28afae0() {
   return (neuron0x28a50f0()*-0.0180909);
}

double NNfunction_ns_chi02_sR::synapse0x28b0160() {
   return (neuron0x28a5310()*0.283521);
}

double NNfunction_ns_chi02_sR::synapse0x28b01a0() {
   return (neuron0x28a5650()*0.0236998);
}

double NNfunction_ns_chi02_sR::synapse0x28b01e0() {
   return (neuron0x28a5990()*-0.000329373);
}

double NNfunction_ns_chi02_sR::synapse0x28b0220() {
   return (neuron0x28a5cd0()*0.00564507);
}

double NNfunction_ns_chi02_sR::synapse0x28b0260() {
   return (neuron0x28a6010()*0.00195405);
}

double NNfunction_ns_chi02_sR::synapse0x28b02a0() {
   return (neuron0x28a6350()*-0.0389586);
}

double NNfunction_ns_chi02_sR::synapse0x28b0620() {
   return (neuron0x28a1790()*0.547201);
}

double NNfunction_ns_chi02_sR::synapse0x28a19b0() {
   return (neuron0x28a1ad0()*-0.0504476);
}

double NNfunction_ns_chi02_sR::synapse0x28a19f0() {
   return (neuron0x28a1e10()*0.00169762);
}

double NNfunction_ns_chi02_sR::synapse0x28a1cf0() {
   return (neuron0x28a2150()*0.00584018);
}

double NNfunction_ns_chi02_sR::synapse0x28a1d30() {
   return (neuron0x28a2490()*0.0429291);
}

double NNfunction_ns_chi02_sR::synapse0x28a2030() {
   return (neuron0x28a27d0()*0.0515634);
}

double NNfunction_ns_chi02_sR::synapse0x28a2070() {
   return (neuron0x28a2b10()*0.104059);
}

double NNfunction_ns_chi02_sR::synapse0x28a2370() {
   return (neuron0x28a2e50()*-0.0195209);
}

double NNfunction_ns_chi02_sR::synapse0x28a23b0() {
   return (neuron0x28a3190()*-0.0209473);
}

double NNfunction_ns_chi02_sR::synapse0x28a26b0() {
   return (neuron0x28a34d0()*-0.107319);
}

double NNfunction_ns_chi02_sR::synapse0x28a26f0() {
   return (neuron0x28a3810()*0.121593);
}

double NNfunction_ns_chi02_sR::synapse0x28a29f0() {
   return (neuron0x28a3b50()*-0.0969388);
}

double NNfunction_ns_chi02_sR::synapse0x28a2a30() {
   return (neuron0x28a3e90()*-0.041749);
}

double NNfunction_ns_chi02_sR::synapse0x28a2d30() {
   return (neuron0x28a41d0()*0.0523816);
}

double NNfunction_ns_chi02_sR::synapse0x28a2d70() {
   return (neuron0x28a4510()*-0.0806751);
}

double NNfunction_ns_chi02_sR::synapse0x28a3070() {
   return (neuron0x28a4850()*0.0796151);
}

double NNfunction_ns_chi02_sR::synapse0x28a30b0() {
   return (neuron0x28a4b90()*-0.0839262);
}

double NNfunction_ns_chi02_sR::synapse0x28a33b0() {
   return (neuron0x28a50f0()*-0.0164749);
}

double NNfunction_ns_chi02_sR::synapse0x28a33f0() {
   return (neuron0x28a5310()*0.133971);
}

double NNfunction_ns_chi02_sR::synapse0x28a36f0() {
   return (neuron0x28a5650()*-0.0331633);
}

double NNfunction_ns_chi02_sR::synapse0x28a3730() {
   return (neuron0x28a5990()*-0.122961);
}

double NNfunction_ns_chi02_sR::synapse0x28a3a30() {
   return (neuron0x28a5cd0()*-0.0691151);
}

double NNfunction_ns_chi02_sR::synapse0x28a3a70() {
   return (neuron0x28a6010()*0.0988603);
}

double NNfunction_ns_chi02_sR::synapse0x28a3d70() {
   return (neuron0x28a6350()*-6.16083);
}

double NNfunction_ns_chi02_sR::synapse0x28a3db0() {
   return (neuron0x28a1790()*0.178636);
}

double NNfunction_ns_chi02_sR::synapse0x28a4a70() {
   return (neuron0x28a1ad0()*2.67686);
}

double NNfunction_ns_chi02_sR::synapse0x28a4ab0() {
   return (neuron0x28a1e10()*-0.16962);
}

double NNfunction_ns_chi02_sR::synapse0x28b0470() {
   return (neuron0x28a2150()*-0.0535693);
}

double NNfunction_ns_chi02_sR::synapse0x28b04b0() {
   return (neuron0x28a2490()*-0.300952);
}

double NNfunction_ns_chi02_sR::synapse0x28a4db0() {
   return (neuron0x28a27d0()*-0.146147);
}

double NNfunction_ns_chi02_sR::synapse0x28a4df0() {
   return (neuron0x28a2b10()*-0.391376);
}

double NNfunction_ns_chi02_sR::synapse0x265c810() {
   return (neuron0x28a2e50()*-0.135404);
}

double NNfunction_ns_chi02_sR::synapse0x265c850() {
   return (neuron0x28a3190()*0.0663771);
}

double NNfunction_ns_chi02_sR::synapse0x28a5530() {
   return (neuron0x28a34d0()*-0.124216);
}

double NNfunction_ns_chi02_sR::synapse0x28a5570() {
   return (neuron0x28a3810()*-0.403763);
}

double NNfunction_ns_chi02_sR::synapse0x28a5870() {
   return (neuron0x28a3b50()*1.01744);
}

double NNfunction_ns_chi02_sR::synapse0x28a58b0() {
   return (neuron0x28a3e90()*0.552665);
}

double NNfunction_ns_chi02_sR::synapse0x28a5bb0() {
   return (neuron0x28a41d0()*-0.247222);
}

double NNfunction_ns_chi02_sR::synapse0x28a5bf0() {
   return (neuron0x28a4510()*1.00269);
}

double NNfunction_ns_chi02_sR::synapse0x28a5ef0() {
   return (neuron0x28a4850()*-0.801095);
}

double NNfunction_ns_chi02_sR::synapse0x28a5f30() {
   return (neuron0x28a4b90()*1.11478);
}

double NNfunction_ns_chi02_sR::synapse0x28a6230() {
   return (neuron0x28a50f0()*-0.426749);
}

double NNfunction_ns_chi02_sR::synapse0x28a6270() {
   return (neuron0x28a5310()*-0.00142892);
}

double NNfunction_ns_chi02_sR::synapse0x28a6570() {
   return (neuron0x28a5650()*0.787908);
}

double NNfunction_ns_chi02_sR::synapse0x28a65b0() {
   return (neuron0x28a5990()*0.090754);
}

double NNfunction_ns_chi02_sR::synapse0x28a40b0() {
   return (neuron0x28a5cd0()*0.0650659);
}

double NNfunction_ns_chi02_sR::synapse0x28a40f0() {
   return (neuron0x28a6010()*0.281204);
}

double NNfunction_ns_chi02_sR::synapse0x28b2390() {
   return (neuron0x28a6350()*-2.35538);
}

double NNfunction_ns_chi02_sR::synapse0x28b2710() {
   return (neuron0x28a1790()*0.0160553);
}

double NNfunction_ns_chi02_sR::synapse0x28b2750() {
   return (neuron0x28a1ad0()*0.0322181);
}

double NNfunction_ns_chi02_sR::synapse0x28b2790() {
   return (neuron0x28a1e10()*0.0359154);
}

double NNfunction_ns_chi02_sR::synapse0x28b27d0() {
   return (neuron0x28a2150()*-3.81049);
}

double NNfunction_ns_chi02_sR::synapse0x28b2810() {
   return (neuron0x28a2490()*0.00928496);
}

double NNfunction_ns_chi02_sR::synapse0x28b2850() {
   return (neuron0x28a27d0()*0.0184517);
}

double NNfunction_ns_chi02_sR::synapse0x28b2890() {
   return (neuron0x28a2b10()*-0.0016205);
}

double NNfunction_ns_chi02_sR::synapse0x28b28d0() {
   return (neuron0x28a2e50()*0.0245898);
}

double NNfunction_ns_chi02_sR::synapse0x28b2910() {
   return (neuron0x28a3190()*0.0179634);
}

double NNfunction_ns_chi02_sR::synapse0x28b2950() {
   return (neuron0x28a34d0()*-0.00778196);
}

double NNfunction_ns_chi02_sR::synapse0x28b2990() {
   return (neuron0x28a3810()*0.018265);
}

double NNfunction_ns_chi02_sR::synapse0x28b29d0() {
   return (neuron0x28a3b50()*0.0538432);
}

double NNfunction_ns_chi02_sR::synapse0x28b2a10() {
   return (neuron0x28a3e90()*0.0622173);
}

double NNfunction_ns_chi02_sR::synapse0x28b2a50() {
   return (neuron0x28a41d0()*0.0213519);
}

double NNfunction_ns_chi02_sR::synapse0x28b2a90() {
   return (neuron0x28a4510()*-0.0195498);
}

double NNfunction_ns_chi02_sR::synapse0x28b2ad0() {
   return (neuron0x28a4850()*-0.00397319);
}

double NNfunction_ns_chi02_sR::synapse0x28b2560() {
   return (neuron0x28a4b90()*-0.0712974);
}

double NNfunction_ns_chi02_sR::synapse0x28b25a0() {
   return (neuron0x28a50f0()*0.0107291);
}

double NNfunction_ns_chi02_sR::synapse0x28b2c20() {
   return (neuron0x28a5310()*0.280018);
}

double NNfunction_ns_chi02_sR::synapse0x28b2c60() {
   return (neuron0x28a5650()*0.0102707);
}

double NNfunction_ns_chi02_sR::synapse0x28b2ca0() {
   return (neuron0x28a5990()*-0.0110614);
}

double NNfunction_ns_chi02_sR::synapse0x28b2ce0() {
   return (neuron0x28a5cd0()*0.0239787);
}

double NNfunction_ns_chi02_sR::synapse0x28b2d20() {
   return (neuron0x28a6010()*0.0226718);
}

double NNfunction_ns_chi02_sR::synapse0x28b2d60() {
   return (neuron0x28a6350()*0.0345088);
}

double NNfunction_ns_chi02_sR::synapse0x28b30e0() {
   return (neuron0x28a1790()*-0.322635);
}

double NNfunction_ns_chi02_sR::synapse0x28b3120() {
   return (neuron0x28a1ad0()*-0.483068);
}

double NNfunction_ns_chi02_sR::synapse0x28b3160() {
   return (neuron0x28a1e10()*0.0612772);
}

double NNfunction_ns_chi02_sR::synapse0x28b31a0() {
   return (neuron0x28a2150()*0.475805);
}

double NNfunction_ns_chi02_sR::synapse0x28b31e0() {
   return (neuron0x28a2490()*-1.14509);
}

double NNfunction_ns_chi02_sR::synapse0x28b3220() {
   return (neuron0x28a27d0()*0.692892);
}

double NNfunction_ns_chi02_sR::synapse0x28b3260() {
   return (neuron0x28a2b10()*-0.081579);
}

double NNfunction_ns_chi02_sR::synapse0x28b32a0() {
   return (neuron0x28a2e50()*-0.253153);
}

double NNfunction_ns_chi02_sR::synapse0x28b32e0() {
   return (neuron0x28a3190()*-0.372758);
}

double NNfunction_ns_chi02_sR::synapse0x28b3320() {
   return (neuron0x28a34d0()*-0.0723403);
}

double NNfunction_ns_chi02_sR::synapse0x28b3360() {
   return (neuron0x28a3810()*0.579145);
}

double NNfunction_ns_chi02_sR::synapse0x28b33a0() {
   return (neuron0x28a3b50()*0.0261841);
}

double NNfunction_ns_chi02_sR::synapse0x28b33e0() {
   return (neuron0x28a3e90()*-0.215918);
}

double NNfunction_ns_chi02_sR::synapse0x28b3420() {
   return (neuron0x28a41d0()*0.00916679);
}

double NNfunction_ns_chi02_sR::synapse0x28b3460() {
   return (neuron0x28a4510()*-1.50367);
}

double NNfunction_ns_chi02_sR::synapse0x28b34a0() {
   return (neuron0x28a4850()*-1.1794);
}

double NNfunction_ns_chi02_sR::synapse0x28b2f30() {
   return (neuron0x28a4b90()*-0.0881597);
}

double NNfunction_ns_chi02_sR::synapse0x28b2f70() {
   return (neuron0x28a50f0()*-0.245856);
}

double NNfunction_ns_chi02_sR::synapse0x28b35f0() {
   return (neuron0x28a5310()*0.188501);
}

double NNfunction_ns_chi02_sR::synapse0x28b3630() {
   return (neuron0x28a5650()*0.258655);
}

double NNfunction_ns_chi02_sR::synapse0x28b3670() {
   return (neuron0x28a5990()*0.549976);
}

double NNfunction_ns_chi02_sR::synapse0x28b36b0() {
   return (neuron0x28a5cd0()*-0.123634);
}

double NNfunction_ns_chi02_sR::synapse0x28b36f0() {
   return (neuron0x28a6010()*0.442693);
}

double NNfunction_ns_chi02_sR::synapse0x28b3730() {
   return (neuron0x28a6350()*0.621441);
}

double NNfunction_ns_chi02_sR::synapse0x28b3ab0() {
   return (neuron0x28a1790()*-0.686253);
}

double NNfunction_ns_chi02_sR::synapse0x28b3af0() {
   return (neuron0x28a1ad0()*0.30079);
}

double NNfunction_ns_chi02_sR::synapse0x28b3b30() {
   return (neuron0x28a1e10()*0.31801);
}

double NNfunction_ns_chi02_sR::synapse0x28b3b70() {
   return (neuron0x28a2150()*0.26422);
}

double NNfunction_ns_chi02_sR::synapse0x28b3bb0() {
   return (neuron0x28a2490()*0.00317431);
}

double NNfunction_ns_chi02_sR::synapse0x28b3bf0() {
   return (neuron0x28a27d0()*-0.968558);
}

double NNfunction_ns_chi02_sR::synapse0x28b3c30() {
   return (neuron0x28a2b10()*-0.646782);
}

double NNfunction_ns_chi02_sR::synapse0x28b3c70() {
   return (neuron0x28a2e50()*-0.18415);
}

double NNfunction_ns_chi02_sR::synapse0x28b3cb0() {
   return (neuron0x28a3190()*0.0283027);
}

double NNfunction_ns_chi02_sR::synapse0x28b3cf0() {
   return (neuron0x28a34d0()*1.199);
}

double NNfunction_ns_chi02_sR::synapse0x28b3d30() {
   return (neuron0x28a3810()*0.716284);
}

double NNfunction_ns_chi02_sR::synapse0x28b3d70() {
   return (neuron0x28a3b50()*-1.75099);
}

double NNfunction_ns_chi02_sR::synapse0x28b3db0() {
   return (neuron0x28a3e90()*-0.547722);
}

double NNfunction_ns_chi02_sR::synapse0x28b3df0() {
   return (neuron0x28a41d0()*-1.39763);
}

double NNfunction_ns_chi02_sR::synapse0x28b3e30() {
   return (neuron0x28a4510()*0.205936);
}

double NNfunction_ns_chi02_sR::synapse0x28b3e70() {
   return (neuron0x28a4850()*-1.09433);
}

double NNfunction_ns_chi02_sR::synapse0x28b3900() {
   return (neuron0x28a4b90()*-0.83212);
}

double NNfunction_ns_chi02_sR::synapse0x28b3940() {
   return (neuron0x28a50f0()*0.707971);
}

double NNfunction_ns_chi02_sR::synapse0x28b3fc0() {
   return (neuron0x28a5310()*0.762594);
}

double NNfunction_ns_chi02_sR::synapse0x28b4000() {
   return (neuron0x28a5650()*-1.19699);
}

double NNfunction_ns_chi02_sR::synapse0x28b4040() {
   return (neuron0x28a5990()*-0.779514);
}

double NNfunction_ns_chi02_sR::synapse0x28b4080() {
   return (neuron0x28a5cd0()*-0.266314);
}

double NNfunction_ns_chi02_sR::synapse0x28b40c0() {
   return (neuron0x28a6010()*-0.0257839);
}

double NNfunction_ns_chi02_sR::synapse0x28b4100() {
   return (neuron0x28a6350()*0.00877058);
}

double NNfunction_ns_chi02_sR::synapse0x28b4480() {
   return (neuron0x28a1790()*-0.214473);
}

double NNfunction_ns_chi02_sR::synapse0x28b44c0() {
   return (neuron0x28a1ad0()*-0.230485);
}

double NNfunction_ns_chi02_sR::synapse0x28b4500() {
   return (neuron0x28a1e10()*1.28207);
}

double NNfunction_ns_chi02_sR::synapse0x28b4540() {
   return (neuron0x28a2150()*0.885149);
}

double NNfunction_ns_chi02_sR::synapse0x28b4580() {
   return (neuron0x28a2490()*-0.601968);
}

double NNfunction_ns_chi02_sR::synapse0x28b45c0() {
   return (neuron0x28a27d0()*-0.0772566);
}

double NNfunction_ns_chi02_sR::synapse0x28b4600() {
   return (neuron0x28a2b10()*0.0677155);
}

double NNfunction_ns_chi02_sR::synapse0x28b4640() {
   return (neuron0x28a2e50()*-1.8996);
}

double NNfunction_ns_chi02_sR::synapse0x28b4680() {
   return (neuron0x28a3190()*0.862933);
}

double NNfunction_ns_chi02_sR::synapse0x28b46c0() {
   return (neuron0x28a34d0()*-1.60553);
}

double NNfunction_ns_chi02_sR::synapse0x28b4700() {
   return (neuron0x28a3810()*1.17549);
}

double NNfunction_ns_chi02_sR::synapse0x28b4740() {
   return (neuron0x28a3b50()*-0.0797588);
}

double NNfunction_ns_chi02_sR::synapse0x28b4780() {
   return (neuron0x28a3e90()*2.0813);
}

double NNfunction_ns_chi02_sR::synapse0x28b47c0() {
   return (neuron0x28a41d0()*-0.47987);
}

double NNfunction_ns_chi02_sR::synapse0x28b4800() {
   return (neuron0x28a4510()*-0.529551);
}

double NNfunction_ns_chi02_sR::synapse0x28b4840() {
   return (neuron0x28a4850()*0.159339);
}

double NNfunction_ns_chi02_sR::synapse0x28b42d0() {
   return (neuron0x28a4b90()*-1.84545);
}

double NNfunction_ns_chi02_sR::synapse0x28b4310() {
   return (neuron0x28a50f0()*0.249541);
}

double NNfunction_ns_chi02_sR::synapse0x28b4990() {
   return (neuron0x28a5310()*-0.601378);
}

double NNfunction_ns_chi02_sR::synapse0x28b49d0() {
   return (neuron0x28a5650()*-0.395363);
}

double NNfunction_ns_chi02_sR::synapse0x28b4a10() {
   return (neuron0x28a5990()*-0.230497);
}

double NNfunction_ns_chi02_sR::synapse0x28b4a50() {
   return (neuron0x28a5cd0()*0.619265);
}

double NNfunction_ns_chi02_sR::synapse0x28b4a90() {
   return (neuron0x28a6010()*-0.574327);
}

double NNfunction_ns_chi02_sR::synapse0x28b4ad0() {
   return (neuron0x28a6350()*3.2148);
}

double NNfunction_ns_chi02_sR::synapse0x28b4e50() {
   return (neuron0x28a1790()*1.04264);
}

double NNfunction_ns_chi02_sR::synapse0x28b4e90() {
   return (neuron0x28a1ad0()*0.0951018);
}

double NNfunction_ns_chi02_sR::synapse0x28b4ed0() {
   return (neuron0x28a1e10()*1.21829);
}

double NNfunction_ns_chi02_sR::synapse0x28b4f10() {
   return (neuron0x28a2150()*-0.504287);
}

double NNfunction_ns_chi02_sR::synapse0x28b4f50() {
   return (neuron0x28a2490()*0.323753);
}

double NNfunction_ns_chi02_sR::synapse0x28b4f90() {
   return (neuron0x28a27d0()*0.00519452);
}

double NNfunction_ns_chi02_sR::synapse0x28b4fd0() {
   return (neuron0x28a2b10()*-1.64958);
}

double NNfunction_ns_chi02_sR::synapse0x28b5010() {
   return (neuron0x28a2e50()*0.0554147);
}

double NNfunction_ns_chi02_sR::synapse0x28b5050() {
   return (neuron0x28a3190()*-0.0905614);
}

double NNfunction_ns_chi02_sR::synapse0x28ad210() {
   return (neuron0x28a34d0()*0.0373659);
}

double NNfunction_ns_chi02_sR::synapse0x28ad250() {
   return (neuron0x28a3810()*0.164407);
}

double NNfunction_ns_chi02_sR::synapse0x28ad290() {
   return (neuron0x28a3b50()*0.823573);
}

double NNfunction_ns_chi02_sR::synapse0x28ad2d0() {
   return (neuron0x28a3e90()*-0.748774);
}

double NNfunction_ns_chi02_sR::synapse0x28ad310() {
   return (neuron0x28a41d0()*-1.35531);
}

double NNfunction_ns_chi02_sR::synapse0x28ad350() {
   return (neuron0x28a4510()*-2.06508);
}

double NNfunction_ns_chi02_sR::synapse0x28ad390() {
   return (neuron0x28a4850()*0.191228);
}

double NNfunction_ns_chi02_sR::synapse0x28b4ca0() {
   return (neuron0x28a4b90()*0.361606);
}

double NNfunction_ns_chi02_sR::synapse0x28b4ce0() {
   return (neuron0x28a50f0()*-0.984216);
}

double NNfunction_ns_chi02_sR::synapse0x28ad4e0() {
   return (neuron0x28a5310()*-1.67133);
}

double NNfunction_ns_chi02_sR::synapse0x28ad520() {
   return (neuron0x28a5650()*0.071543);
}

double NNfunction_ns_chi02_sR::synapse0x28ad560() {
   return (neuron0x28a5990()*-1.24372);
}

double NNfunction_ns_chi02_sR::synapse0x28ad5a0() {
   return (neuron0x28a5cd0()*0.308793);
}

double NNfunction_ns_chi02_sR::synapse0x28ad5e0() {
   return (neuron0x28a6010()*-0.489819);
}

double NNfunction_ns_chi02_sR::synapse0x28ad620() {
   return (neuron0x28a6350()*0.0260741);
}

double NNfunction_ns_chi02_sR::synapse0x28ad9a0() {
   return (neuron0x28a1790()*0.025729);
}

double NNfunction_ns_chi02_sR::synapse0x28ad9e0() {
   return (neuron0x28a1ad0()*-6.38813);
}

double NNfunction_ns_chi02_sR::synapse0x28ada20() {
   return (neuron0x28a1e10()*-3.23281);
}

double NNfunction_ns_chi02_sR::synapse0x28ada60() {
   return (neuron0x28a2150()*-0.0642812);
}

double NNfunction_ns_chi02_sR::synapse0x28adaa0() {
   return (neuron0x28a2490()*0.00979846);
}

double NNfunction_ns_chi02_sR::synapse0x28adae0() {
   return (neuron0x28a27d0()*-0.011287);
}

double NNfunction_ns_chi02_sR::synapse0x28adb20() {
   return (neuron0x28a2b10()*0.025761);
}

double NNfunction_ns_chi02_sR::synapse0x28adb60() {
   return (neuron0x28a2e50()*0.105115);
}

double NNfunction_ns_chi02_sR::synapse0x28adba0() {
   return (neuron0x28a3190()*0.0275498);
}

double NNfunction_ns_chi02_sR::synapse0x28adbe0() {
   return (neuron0x28a34d0()*-0.0201483);
}

double NNfunction_ns_chi02_sR::synapse0x28adc20() {
   return (neuron0x28a3810()*-0.0211413);
}

double NNfunction_ns_chi02_sR::synapse0x28adc60() {
   return (neuron0x28a3b50()*-0.0479853);
}

double NNfunction_ns_chi02_sR::synapse0x28adca0() {
   return (neuron0x28a3e90()*0.0357359);
}

double NNfunction_ns_chi02_sR::synapse0x28adce0() {
   return (neuron0x28a41d0()*0.047676);
}

double NNfunction_ns_chi02_sR::synapse0x28add20() {
   return (neuron0x28a4510()*0.0199702);
}

double NNfunction_ns_chi02_sR::synapse0x28add60() {
   return (neuron0x28a4850()*-0.0253287);
}

double NNfunction_ns_chi02_sR::synapse0x28ad7f0() {
   return (neuron0x28a4b90()*0.0240527);
}

double NNfunction_ns_chi02_sR::synapse0x28ad830() {
   return (neuron0x28a50f0()*-0.0157993);
}

double NNfunction_ns_chi02_sR::synapse0x28adeb0() {
   return (neuron0x28a5310()*-0.308538);
}

double NNfunction_ns_chi02_sR::synapse0x28adef0() {
   return (neuron0x28a5650()*0.0256907);
}

double NNfunction_ns_chi02_sR::synapse0x28adf30() {
   return (neuron0x28a5990()*-0.0656994);
}

double NNfunction_ns_chi02_sR::synapse0x28adf70() {
   return (neuron0x28a5cd0()*-0.0225667);
}

double NNfunction_ns_chi02_sR::synapse0x28adfb0() {
   return (neuron0x28a6010()*-0.0105266);
}

double NNfunction_ns_chi02_sR::synapse0x28adff0() {
   return (neuron0x28a6350()*0.385581);
}

double NNfunction_ns_chi02_sR::synapse0x28ae1c0() {
   return (neuron0x28a1790()*-0.0038527);
}

double NNfunction_ns_chi02_sR::synapse0x28b7250() {
   return (neuron0x28a1ad0()*-0.0162703);
}

double NNfunction_ns_chi02_sR::synapse0x28b7290() {
   return (neuron0x28a1e10()*-0.0104755);
}

double NNfunction_ns_chi02_sR::synapse0x28b72d0() {
   return (neuron0x28a2150()*-3.6604);
}

double NNfunction_ns_chi02_sR::synapse0x28b7310() {
   return (neuron0x28a2490()*-0.0011035);
}

double NNfunction_ns_chi02_sR::synapse0x28b7350() {
   return (neuron0x28a27d0()*-0.00840772);
}

double NNfunction_ns_chi02_sR::synapse0x28b7390() {
   return (neuron0x28a2b10()*-0.00127184);
}

double NNfunction_ns_chi02_sR::synapse0x28b73d0() {
   return (neuron0x28a2e50()*0.00350425);
}

double NNfunction_ns_chi02_sR::synapse0x28b7410() {
   return (neuron0x28a3190()*0.00169407);
}

double NNfunction_ns_chi02_sR::synapse0x28b7450() {
   return (neuron0x28a34d0()*-0.000320004);
}

double NNfunction_ns_chi02_sR::synapse0x28b7490() {
   return (neuron0x28a3810()*-0.0115943);
}

double NNfunction_ns_chi02_sR::synapse0x28b74d0() {
   return (neuron0x28a3b50()*-0.010906);
}

double NNfunction_ns_chi02_sR::synapse0x28b7510() {
   return (neuron0x28a3e90()*-0.00305626);
}

double NNfunction_ns_chi02_sR::synapse0x28b7550() {
   return (neuron0x28a41d0()*-0.0332734);
}

double NNfunction_ns_chi02_sR::synapse0x28b7590() {
   return (neuron0x28a4510()*0.00705036);
}

double NNfunction_ns_chi02_sR::synapse0x28b75d0() {
   return (neuron0x28a4850()*0.00456455);
}

double NNfunction_ns_chi02_sR::synapse0x28b70a0() {
   return (neuron0x28a4b90()*0.00449166);
}

double NNfunction_ns_chi02_sR::synapse0x28b70e0() {
   return (neuron0x28a50f0()*0.0323267);
}

double NNfunction_ns_chi02_sR::synapse0x28b7720() {
   return (neuron0x28a5310()*-0.101618);
}

double NNfunction_ns_chi02_sR::synapse0x28b7760() {
   return (neuron0x28a5650()*0.0141757);
}

double NNfunction_ns_chi02_sR::synapse0x28b77a0() {
   return (neuron0x28a5990()*0.0182257);
}

double NNfunction_ns_chi02_sR::synapse0x28b77e0() {
   return (neuron0x28a5cd0()*-0.00552531);
}

double NNfunction_ns_chi02_sR::synapse0x28b7820() {
   return (neuron0x28a6010()*0.00927913);
}

double NNfunction_ns_chi02_sR::synapse0x28b7860() {
   return (neuron0x28a6350()*0.00830435);
}

double NNfunction_ns_chi02_sR::synapse0x28b7be0() {
   return (neuron0x28a1790()*-0.0741542);
}

double NNfunction_ns_chi02_sR::synapse0x28b7c20() {
   return (neuron0x28a1ad0()*0.00685446);
}

double NNfunction_ns_chi02_sR::synapse0x28b7c60() {
   return (neuron0x28a1e10()*-0.0573558);
}

double NNfunction_ns_chi02_sR::synapse0x28b7ca0() {
   return (neuron0x28a2150()*0.149408);
}

double NNfunction_ns_chi02_sR::synapse0x28b7ce0() {
   return (neuron0x28a2490()*0.211155);
}

double NNfunction_ns_chi02_sR::synapse0x28b7d20() {
   return (neuron0x28a27d0()*0.00396559);
}

double NNfunction_ns_chi02_sR::synapse0x28b7d60() {
   return (neuron0x28a2b10()*0.21506);
}

double NNfunction_ns_chi02_sR::synapse0x28b7da0() {
   return (neuron0x28a2e50()*0.00370941);
}

double NNfunction_ns_chi02_sR::synapse0x28b7de0() {
   return (neuron0x28a3190()*-0.0206575);
}

double NNfunction_ns_chi02_sR::synapse0x28b7e20() {
   return (neuron0x28a34d0()*0.0765145);
}

double NNfunction_ns_chi02_sR::synapse0x28b7e60() {
   return (neuron0x28a3810()*0.0334834);
}

double NNfunction_ns_chi02_sR::synapse0x28b7ea0() {
   return (neuron0x28a3b50()*0.18908);
}

double NNfunction_ns_chi02_sR::synapse0x28b7ee0() {
   return (neuron0x28a3e90()*0.0964662);
}

double NNfunction_ns_chi02_sR::synapse0x28b7f20() {
   return (neuron0x28a41d0()*0.00327478);
}

double NNfunction_ns_chi02_sR::synapse0x28b7f60() {
   return (neuron0x28a4510()*-0.541602);
}

double NNfunction_ns_chi02_sR::synapse0x28b7fa0() {
   return (neuron0x28a4850()*0.448939);
}

double NNfunction_ns_chi02_sR::synapse0x28b7a30() {
   return (neuron0x28a4b90()*-0.185734);
}

double NNfunction_ns_chi02_sR::synapse0x28b7a70() {
   return (neuron0x28a50f0()*0.0529958);
}

double NNfunction_ns_chi02_sR::synapse0x28b80f0() {
   return (neuron0x28a5310()*-0.648582);
}

double NNfunction_ns_chi02_sR::synapse0x28b8130() {
   return (neuron0x28a5650()*0.0861901);
}

double NNfunction_ns_chi02_sR::synapse0x28b8170() {
   return (neuron0x28a5990()*0.0133866);
}

double NNfunction_ns_chi02_sR::synapse0x28b81b0() {
   return (neuron0x28a5cd0()*-0.0412194);
}

double NNfunction_ns_chi02_sR::synapse0x28b81f0() {
   return (neuron0x28a6010()*-0.0078808);
}

double NNfunction_ns_chi02_sR::synapse0x28b8230() {
   return (neuron0x28a6350()*0.0824067);
}

double NNfunction_ns_chi02_sR::synapse0x28b85b0() {
   return (neuron0x28a1790()*0.0119298);
}

double NNfunction_ns_chi02_sR::synapse0x28b85f0() {
   return (neuron0x28a1ad0()*0.0637467);
}

double NNfunction_ns_chi02_sR::synapse0x28b8630() {
   return (neuron0x28a1e10()*0.0210495);
}

double NNfunction_ns_chi02_sR::synapse0x28b8670() {
   return (neuron0x28a2150()*4.27244);
}

double NNfunction_ns_chi02_sR::synapse0x28b86b0() {
   return (neuron0x28a2490()*-0.0469814);
}

double NNfunction_ns_chi02_sR::synapse0x28b86f0() {
   return (neuron0x28a27d0()*-0.0204913);
}

double NNfunction_ns_chi02_sR::synapse0x28b8730() {
   return (neuron0x28a2b10()*-0.0175626);
}

double NNfunction_ns_chi02_sR::synapse0x28b8770() {
   return (neuron0x28a2e50()*-0.0313774);
}

double NNfunction_ns_chi02_sR::synapse0x28b87b0() {
   return (neuron0x28a3190()*0.0196345);
}

double NNfunction_ns_chi02_sR::synapse0x28b87f0() {
   return (neuron0x28a34d0()*-0.0238408);
}

double NNfunction_ns_chi02_sR::synapse0x28b8830() {
   return (neuron0x28a3810()*0.0135984);
}

double NNfunction_ns_chi02_sR::synapse0x28b8870() {
   return (neuron0x28a3b50()*-0.0101841);
}

double NNfunction_ns_chi02_sR::synapse0x28b88b0() {
   return (neuron0x28a3e90()*0.000706369);
}

double NNfunction_ns_chi02_sR::synapse0x28b88f0() {
   return (neuron0x28a41d0()*0.0183955);
}

double NNfunction_ns_chi02_sR::synapse0x28b8930() {
   return (neuron0x28a4510()*0.0329967);
}

double NNfunction_ns_chi02_sR::synapse0x28b8970() {
   return (neuron0x28a4850()*-0.0181377);
}

double NNfunction_ns_chi02_sR::synapse0x28b8400() {
   return (neuron0x28a4b90()*-0.00517654);
}

double NNfunction_ns_chi02_sR::synapse0x28b8440() {
   return (neuron0x28a50f0()*-0.0252943);
}

double NNfunction_ns_chi02_sR::synapse0x28b8ac0() {
   return (neuron0x28a5310()*0.422893);
}

double NNfunction_ns_chi02_sR::synapse0x28b8b00() {
   return (neuron0x28a5650()*-0.0304165);
}

double NNfunction_ns_chi02_sR::synapse0x28b8b40() {
   return (neuron0x28a5990()*-0.00953717);
}

double NNfunction_ns_chi02_sR::synapse0x28b8b80() {
   return (neuron0x28a5cd0()*-0.0131444);
}

double NNfunction_ns_chi02_sR::synapse0x28b8bc0() {
   return (neuron0x28a6010()*-0.0159222);
}

double NNfunction_ns_chi02_sR::synapse0x28b8c00() {
   return (neuron0x28a6350()*-0.0554722);
}

double NNfunction_ns_chi02_sR::synapse0x28b8f80() {
   return (neuron0x28a1790()*0.15899);
}

double NNfunction_ns_chi02_sR::synapse0x28b8fc0() {
   return (neuron0x28a1ad0()*11.443);
}

double NNfunction_ns_chi02_sR::synapse0x28b9000() {
   return (neuron0x28a1e10()*0.747611);
}

double NNfunction_ns_chi02_sR::synapse0x28b9040() {
   return (neuron0x28a2150()*-0.000242233);
}

double NNfunction_ns_chi02_sR::synapse0x28b9080() {
   return (neuron0x28a2490()*-0.0305796);
}

double NNfunction_ns_chi02_sR::synapse0x28b90c0() {
   return (neuron0x28a27d0()*0.024959);
}

double NNfunction_ns_chi02_sR::synapse0x28b9100() {
   return (neuron0x28a2b10()*-0.084976);
}

double NNfunction_ns_chi02_sR::synapse0x28b9140() {
   return (neuron0x28a2e50()*-0.0246099);
}

double NNfunction_ns_chi02_sR::synapse0x28b9180() {
   return (neuron0x28a3190()*-0.0266679);
}

double NNfunction_ns_chi02_sR::synapse0x28b91c0() {
   return (neuron0x28a34d0()*0.0563581);
}

double NNfunction_ns_chi02_sR::synapse0x28b9200() {
   return (neuron0x28a3810()*0.0166603);
}

double NNfunction_ns_chi02_sR::synapse0x28b9240() {
   return (neuron0x28a3b50()*-0.00329363);
}

double NNfunction_ns_chi02_sR::synapse0x28b9280() {
   return (neuron0x28a3e90()*0.0547174);
}

double NNfunction_ns_chi02_sR::synapse0x28b92c0() {
   return (neuron0x28a41d0()*-0.00965035);
}

double NNfunction_ns_chi02_sR::synapse0x28b9300() {
   return (neuron0x28a4510()*-0.0331332);
}

double NNfunction_ns_chi02_sR::synapse0x28b9340() {
   return (neuron0x28a4850()*-0.0179906);
}

double NNfunction_ns_chi02_sR::synapse0x28b8dd0() {
   return (neuron0x28a4b90()*-0.0681994);
}

double NNfunction_ns_chi02_sR::synapse0x28b8e10() {
   return (neuron0x28a50f0()*0.0118587);
}

double NNfunction_ns_chi02_sR::synapse0x28b9490() {
   return (neuron0x28a5310()*0.0475007);
}

double NNfunction_ns_chi02_sR::synapse0x28b94d0() {
   return (neuron0x28a5650()*0.00657579);
}

double NNfunction_ns_chi02_sR::synapse0x28b9510() {
   return (neuron0x28a5990()*0.00322375);
}

double NNfunction_ns_chi02_sR::synapse0x28b9550() {
   return (neuron0x28a5cd0()*0.0398176);
}

double NNfunction_ns_chi02_sR::synapse0x28b9590() {
   return (neuron0x28a6010()*0.00892017);
}

double NNfunction_ns_chi02_sR::synapse0x28b95d0() {
   return (neuron0x28a6350()*10.7217);
}

double NNfunction_ns_chi02_sR::synapse0x28b9950() {
   return (neuron0x28a1790()*-0.0554393);
}

double NNfunction_ns_chi02_sR::synapse0x28b9990() {
   return (neuron0x28a1ad0()*10.46);
}

double NNfunction_ns_chi02_sR::synapse0x28b99d0() {
   return (neuron0x28a1e10()*8.61427);
}

double NNfunction_ns_chi02_sR::synapse0x28b9a10() {
   return (neuron0x28a2150()*-0.0241484);
}

double NNfunction_ns_chi02_sR::synapse0x28b9a50() {
   return (neuron0x28a2490()*-0.0374096);
}

double NNfunction_ns_chi02_sR::synapse0x28b9a90() {
   return (neuron0x28a27d0()*-0.000486188);
}

double NNfunction_ns_chi02_sR::synapse0x28b9ad0() {
   return (neuron0x28a2b10()*-0.0928667);
}

double NNfunction_ns_chi02_sR::synapse0x28b9b10() {
   return (neuron0x28a2e50()*-0.00661341);
}

double NNfunction_ns_chi02_sR::synapse0x28b9b50() {
   return (neuron0x28a3190()*-0.0928087);
}

double NNfunction_ns_chi02_sR::synapse0x28b9b90() {
   return (neuron0x28a34d0()*-0.0343114);
}

double NNfunction_ns_chi02_sR::synapse0x28b9bd0() {
   return (neuron0x28a3810()*-0.100706);
}

double NNfunction_ns_chi02_sR::synapse0x28b9c10() {
   return (neuron0x28a3b50()*-0.0191028);
}

double NNfunction_ns_chi02_sR::synapse0x28b9c50() {
   return (neuron0x28a3e90()*0.0287213);
}

double NNfunction_ns_chi02_sR::synapse0x28b9c90() {
   return (neuron0x28a41d0()*-0.00215812);
}

double NNfunction_ns_chi02_sR::synapse0x28b9cd0() {
   return (neuron0x28a4510()*-0.0339919);
}

double NNfunction_ns_chi02_sR::synapse0x28b9d10() {
   return (neuron0x28a4850()*0.0167988);
}

double NNfunction_ns_chi02_sR::synapse0x28b97a0() {
   return (neuron0x28a4b90()*-0.111122);
}

double NNfunction_ns_chi02_sR::synapse0x28b97e0() {
   return (neuron0x28a50f0()*-0.00323593);
}

double NNfunction_ns_chi02_sR::synapse0x28b9e60() {
   return (neuron0x28a5310()*-0.245111);
}

double NNfunction_ns_chi02_sR::synapse0x28b9ea0() {
   return (neuron0x28a5650()*-0.00220628);
}

double NNfunction_ns_chi02_sR::synapse0x28b9ee0() {
   return (neuron0x28a5990()*0.0503421);
}

double NNfunction_ns_chi02_sR::synapse0x28b9f20() {
   return (neuron0x28a5cd0()*0.05579);
}

double NNfunction_ns_chi02_sR::synapse0x28b9f60() {
   return (neuron0x28a6010()*0.043297);
}

double NNfunction_ns_chi02_sR::synapse0x28b9fa0() {
   return (neuron0x28a6350()*-0.100994);
}

double NNfunction_ns_chi02_sR::synapse0x28ba320() {
   return (neuron0x28a1790()*0.151932);
}

double NNfunction_ns_chi02_sR::synapse0x28ba360() {
   return (neuron0x28a1ad0()*-10.1748);
}

double NNfunction_ns_chi02_sR::synapse0x28ba3a0() {
   return (neuron0x28a1e10()*-1.11188);
}

double NNfunction_ns_chi02_sR::synapse0x28ba3e0() {
   return (neuron0x28a2150()*-0.016655);
}

double NNfunction_ns_chi02_sR::synapse0x28ba420() {
   return (neuron0x28a2490()*-0.00525725);
}

double NNfunction_ns_chi02_sR::synapse0x28ba460() {
   return (neuron0x28a27d0()*0.0695784);
}

double NNfunction_ns_chi02_sR::synapse0x28ba4a0() {
   return (neuron0x28a2b10()*0.0116505);
}

double NNfunction_ns_chi02_sR::synapse0x28ba4e0() {
   return (neuron0x28a2e50()*-0.00713868);
}

double NNfunction_ns_chi02_sR::synapse0x28ba520() {
   return (neuron0x28a3190()*-0.0763051);
}

double NNfunction_ns_chi02_sR::synapse0x28ba560() {
   return (neuron0x28a34d0()*0.0479249);
}

double NNfunction_ns_chi02_sR::synapse0x28ba5a0() {
   return (neuron0x28a3810()*0.00928384);
}

double NNfunction_ns_chi02_sR::synapse0x28ba5e0() {
   return (neuron0x28a3b50()*0.058746);
}

double NNfunction_ns_chi02_sR::synapse0x28ba620() {
   return (neuron0x28a3e90()*-0.0460862);
}

double NNfunction_ns_chi02_sR::synapse0x28ba660() {
   return (neuron0x28a41d0()*0.00902257);
}

double NNfunction_ns_chi02_sR::synapse0x28ba6a0() {
   return (neuron0x28a4510()*-0.0151216);
}

double NNfunction_ns_chi02_sR::synapse0x28ba6e0() {
   return (neuron0x28a4850()*0.0137628);
}

double NNfunction_ns_chi02_sR::synapse0x28ba170() {
   return (neuron0x28a4b90()*-0.0110869);
}

double NNfunction_ns_chi02_sR::synapse0x28ba1b0() {
   return (neuron0x28a50f0()*0.0107398);
}

double NNfunction_ns_chi02_sR::synapse0x28ba830() {
   return (neuron0x28a5310()*-0.0612236);
}

double NNfunction_ns_chi02_sR::synapse0x28ba870() {
   return (neuron0x28a5650()*0.00952594);
}

double NNfunction_ns_chi02_sR::synapse0x28ba8b0() {
   return (neuron0x28a5990()*-0.0791941);
}

double NNfunction_ns_chi02_sR::synapse0x28ba8f0() {
   return (neuron0x28a5cd0()*0.00604939);
}

double NNfunction_ns_chi02_sR::synapse0x28ba930() {
   return (neuron0x28a6010()*-0.0523659);
}

double NNfunction_ns_chi02_sR::synapse0x28ba970() {
   return (neuron0x28a6350()*11.5985);
}

double NNfunction_ns_chi02_sR::synapse0x28bacf0() {
   return (neuron0x28a1790()*-1.26156);
}

double NNfunction_ns_chi02_sR::synapse0x28bad30() {
   return (neuron0x28a1ad0()*0.24949);
}

double NNfunction_ns_chi02_sR::synapse0x28bad70() {
   return (neuron0x28a1e10()*0.157431);
}

double NNfunction_ns_chi02_sR::synapse0x28badb0() {
   return (neuron0x28a2150()*-1.22688);
}

double NNfunction_ns_chi02_sR::synapse0x28badf0() {
   return (neuron0x28a2490()*-0.0526183);
}

double NNfunction_ns_chi02_sR::synapse0x28bae30() {
   return (neuron0x28a27d0()*0.0630459);
}

double NNfunction_ns_chi02_sR::synapse0x28bae70() {
   return (neuron0x28a2b10()*0.11195);
}

double NNfunction_ns_chi02_sR::synapse0x28baeb0() {
   return (neuron0x28a2e50()*0.295176);
}

double NNfunction_ns_chi02_sR::synapse0x28baef0() {
   return (neuron0x28a3190()*1.3333);
}

double NNfunction_ns_chi02_sR::synapse0x28baf30() {
   return (neuron0x28a34d0()*0.102168);
}

double NNfunction_ns_chi02_sR::synapse0x28baf70() {
   return (neuron0x28a3810()*0.198583);
}

double NNfunction_ns_chi02_sR::synapse0x28bafb0() {
   return (neuron0x28a3b50()*0.141342);
}

double NNfunction_ns_chi02_sR::synapse0x28baff0() {
   return (neuron0x28a3e90()*0.682591);
}

double NNfunction_ns_chi02_sR::synapse0x28bb030() {
   return (neuron0x28a41d0()*0.629211);
}

double NNfunction_ns_chi02_sR::synapse0x28bb070() {
   return (neuron0x28a4510()*0.457415);
}

double NNfunction_ns_chi02_sR::synapse0x28bb0b0() {
   return (neuron0x28a4850()*-0.0225233);
}

double NNfunction_ns_chi02_sR::synapse0x28bab40() {
   return (neuron0x28a4b90()*-0.0924672);
}

double NNfunction_ns_chi02_sR::synapse0x28bab80() {
   return (neuron0x28a50f0()*0.391141);
}

double NNfunction_ns_chi02_sR::synapse0x28bb200() {
   return (neuron0x28a5310()*-2.25902);
}

double NNfunction_ns_chi02_sR::synapse0x28bb240() {
   return (neuron0x28a5650()*1.42484);
}

double NNfunction_ns_chi02_sR::synapse0x28bb280() {
   return (neuron0x28a5990()*0.0845862);
}

double NNfunction_ns_chi02_sR::synapse0x28bb2c0() {
   return (neuron0x28a5cd0()*0.385618);
}

double NNfunction_ns_chi02_sR::synapse0x28bb300() {
   return (neuron0x28a6010()*0.169692);
}

double NNfunction_ns_chi02_sR::synapse0x28bb340() {
   return (neuron0x28a6350()*0.133455);
}

double NNfunction_ns_chi02_sR::synapse0x28bb6c0() {
   return (neuron0x28a1790()*-0.281689);
}

double NNfunction_ns_chi02_sR::synapse0x28bb700() {
   return (neuron0x28a1ad0()*1.43884);
}

double NNfunction_ns_chi02_sR::synapse0x28bb740() {
   return (neuron0x28a1e10()*-0.18977);
}

double NNfunction_ns_chi02_sR::synapse0x28bb780() {
   return (neuron0x28a2150()*-0.776075);
}

double NNfunction_ns_chi02_sR::synapse0x28bb7c0() {
   return (neuron0x28a2490()*0.997481);
}

double NNfunction_ns_chi02_sR::synapse0x28bb800() {
   return (neuron0x28a27d0()*-0.327063);
}

double NNfunction_ns_chi02_sR::synapse0x28bb840() {
   return (neuron0x28a2b10()*0.386105);
}

double NNfunction_ns_chi02_sR::synapse0x28bb880() {
   return (neuron0x28a2e50()*-0.813129);
}

double NNfunction_ns_chi02_sR::synapse0x28bb8c0() {
   return (neuron0x28a3190()*0.659808);
}

double NNfunction_ns_chi02_sR::synapse0x28bb900() {
   return (neuron0x28a34d0()*1.22746);
}

double NNfunction_ns_chi02_sR::synapse0x28bb940() {
   return (neuron0x28a3810()*1.42627);
}

double NNfunction_ns_chi02_sR::synapse0x28bb980() {
   return (neuron0x28a3b50()*-0.290194);
}

double NNfunction_ns_chi02_sR::synapse0x28bb9c0() {
   return (neuron0x28a3e90()*1.13333);
}

double NNfunction_ns_chi02_sR::synapse0x28bba00() {
   return (neuron0x28a41d0()*0.45697);
}

double NNfunction_ns_chi02_sR::synapse0x28bba40() {
   return (neuron0x28a4510()*1.5047);
}

double NNfunction_ns_chi02_sR::synapse0x28bba80() {
   return (neuron0x28a4850()*-0.614369);
}

double NNfunction_ns_chi02_sR::synapse0x28bb510() {
   return (neuron0x28a4b90()*0.727855);
}

double NNfunction_ns_chi02_sR::synapse0x28bb550() {
   return (neuron0x28a50f0()*0.934475);
}

double NNfunction_ns_chi02_sR::synapse0x28bbbd0() {
   return (neuron0x28a5310()*0.389059);
}

double NNfunction_ns_chi02_sR::synapse0x28bbc10() {
   return (neuron0x28a5650()*-1.07677);
}

double NNfunction_ns_chi02_sR::synapse0x28bbc50() {
   return (neuron0x28a5990()*0.0229563);
}

double NNfunction_ns_chi02_sR::synapse0x28bbc90() {
   return (neuron0x28a5cd0()*-0.622363);
}

double NNfunction_ns_chi02_sR::synapse0x28bbcd0() {
   return (neuron0x28a6010()*1.27784);
}

double NNfunction_ns_chi02_sR::synapse0x28bbd10() {
   return (neuron0x28a6350()*0.612529);
}

double NNfunction_ns_chi02_sR::synapse0x28bc090() {
   return (neuron0x28a1790()*0.0102658);
}

double NNfunction_ns_chi02_sR::synapse0x28b0660() {
   return (neuron0x28a1ad0()*-0.726122);
}

double NNfunction_ns_chi02_sR::synapse0x28b06a0() {
   return (neuron0x28a1e10()*-1.90441);
}

double NNfunction_ns_chi02_sR::synapse0x28b06e0() {
   return (neuron0x28a2150()*-1.55444);
}

double NNfunction_ns_chi02_sR::synapse0x28b0930() {
   return (neuron0x28a2490()*-0.958636);
}

double NNfunction_ns_chi02_sR::synapse0x28b0970() {
   return (neuron0x28a27d0()*-1.58599);
}

double NNfunction_ns_chi02_sR::synapse0x28b09b0() {
   return (neuron0x28a2b10()*-0.378165);
}

double NNfunction_ns_chi02_sR::synapse0x28b0c00() {
   return (neuron0x28a2e50()*0.0899067);
}

double NNfunction_ns_chi02_sR::synapse0x28b0c40() {
   return (neuron0x28a3190()*-0.981581);
}

double NNfunction_ns_chi02_sR::synapse0x28b0e90() {
   return (neuron0x28a34d0()*-0.406246);
}

double NNfunction_ns_chi02_sR::synapse0x28b0ed0() {
   return (neuron0x28a3810()*0.96888);
}

double NNfunction_ns_chi02_sR::synapse0x28b0f10() {
   return (neuron0x28a3b50()*0.632668);
}

double NNfunction_ns_chi02_sR::synapse0x28b1160() {
   return (neuron0x28a3e90()*1.33232);
}

double NNfunction_ns_chi02_sR::synapse0x28b11a0() {
   return (neuron0x28a41d0()*-0.741676);
}

double NNfunction_ns_chi02_sR::synapse0x28b13f0() {
   return (neuron0x28a4510()*0.412424);
}

double NNfunction_ns_chi02_sR::synapse0x28b1430() {
   return (neuron0x28a4850()*0.383128);
}

double NNfunction_ns_chi02_sR::synapse0x28bbee0() {
   return (neuron0x28a4b90()*-0.120126);
}

double NNfunction_ns_chi02_sR::synapse0x28bbf20() {
   return (neuron0x28a50f0()*-0.800793);
}

double NNfunction_ns_chi02_sR::synapse0x28b1580() {
   return (neuron0x28a5310()*0.243367);
}

double NNfunction_ns_chi02_sR::synapse0x28b1a90() {
   return (neuron0x28a5650()*-0.462718);
}

double NNfunction_ns_chi02_sR::synapse0x28b1ad0() {
   return (neuron0x28a5990()*0.473636);
}

double NNfunction_ns_chi02_sR::synapse0x28b1b10() {
   return (neuron0x28a5cd0()*-0.452378);
}

double NNfunction_ns_chi02_sR::synapse0x28b1d60() {
   return (neuron0x28a6010()*-0.386952);
}

double NNfunction_ns_chi02_sR::synapse0x28b1da0() {
   return (neuron0x28a6350()*0.343735);
}

double NNfunction_ns_chi02_sR::synapse0x28b1650() {
   return (neuron0x28a1790()*-0.640788);
}

double NNfunction_ns_chi02_sR::synapse0x28b1690() {
   return (neuron0x28a1ad0()*-1.02082);
}

double NNfunction_ns_chi02_sR::synapse0x28b16d0() {
   return (neuron0x28a1e10()*1.45303);
}

double NNfunction_ns_chi02_sR::synapse0x28b1710() {
   return (neuron0x28a2150()*-0.187293);
}

double NNfunction_ns_chi02_sR::synapse0x28b2090() {
   return (neuron0x28a2490()*0.0867757);
}

double NNfunction_ns_chi02_sR::synapse0x28be3e0() {
   return (neuron0x28a27d0()*-0.658342);
}

double NNfunction_ns_chi02_sR::synapse0x28be420() {
   return (neuron0x28a2b10()*1.89832);
}

double NNfunction_ns_chi02_sR::synapse0x28be460() {
   return (neuron0x28a2e50()*-0.145812);
}

double NNfunction_ns_chi02_sR::synapse0x28be4a0() {
   return (neuron0x28a3190()*0.505422);
}

double NNfunction_ns_chi02_sR::synapse0x28be4e0() {
   return (neuron0x28a34d0()*-0.125775);
}

double NNfunction_ns_chi02_sR::synapse0x28be520() {
   return (neuron0x28a3810()*0.844041);
}

double NNfunction_ns_chi02_sR::synapse0x28be560() {
   return (neuron0x28a3b50()*0.96261);
}

double NNfunction_ns_chi02_sR::synapse0x28be5a0() {
   return (neuron0x28a3e90()*-1.26375);
}

double NNfunction_ns_chi02_sR::synapse0x28be5e0() {
   return (neuron0x28a41d0()*0.928845);
}

double NNfunction_ns_chi02_sR::synapse0x28be620() {
   return (neuron0x28a4510()*1.72671);
}

double NNfunction_ns_chi02_sR::synapse0x28be660() {
   return (neuron0x28a4850()*0.22924);
}

double NNfunction_ns_chi02_sR::synapse0x28b1f70() {
   return (neuron0x28a4b90()*0.161005);
}

double NNfunction_ns_chi02_sR::synapse0x28b1fb0() {
   return (neuron0x28a50f0()*-0.818376);
}

double NNfunction_ns_chi02_sR::synapse0x28be7b0() {
   return (neuron0x28a5310()*-2.79909);
}

double NNfunction_ns_chi02_sR::synapse0x28be7f0() {
   return (neuron0x28a5650()*0.146868);
}

double NNfunction_ns_chi02_sR::synapse0x28be830() {
   return (neuron0x28a5990()*-0.248148);
}

double NNfunction_ns_chi02_sR::synapse0x28be870() {
   return (neuron0x28a5cd0()*-2.04967);
}

double NNfunction_ns_chi02_sR::synapse0x28be8b0() {
   return (neuron0x28a6010()*0.772476);
}

double NNfunction_ns_chi02_sR::synapse0x28be8f0() {
   return (neuron0x28a6350()*0.315415);
}

double NNfunction_ns_chi02_sR::synapse0x28bec70() {
   return (neuron0x28a1790()*-0.233705);
}

double NNfunction_ns_chi02_sR::synapse0x28becb0() {
   return (neuron0x28a1ad0()*2.44664);
}

double NNfunction_ns_chi02_sR::synapse0x28becf0() {
   return (neuron0x28a1e10()*-0.314736);
}

double NNfunction_ns_chi02_sR::synapse0x28bed30() {
   return (neuron0x28a2150()*-0.0354956);
}

double NNfunction_ns_chi02_sR::synapse0x28bed70() {
   return (neuron0x28a2490()*0.0230841);
}

double NNfunction_ns_chi02_sR::synapse0x28bedb0() {
   return (neuron0x28a27d0()*0.0467593);
}

double NNfunction_ns_chi02_sR::synapse0x28bedf0() {
   return (neuron0x28a2b10()*0.00304069);
}

double NNfunction_ns_chi02_sR::synapse0x28bee30() {
   return (neuron0x28a2e50()*0.00204457);
}

double NNfunction_ns_chi02_sR::synapse0x28bee70() {
   return (neuron0x28a3190()*-0.0138705);
}

double NNfunction_ns_chi02_sR::synapse0x28beeb0() {
   return (neuron0x28a34d0()*0.0385255);
}

double NNfunction_ns_chi02_sR::synapse0x28beef0() {
   return (neuron0x28a3810()*0.0113977);
}

double NNfunction_ns_chi02_sR::synapse0x28bef30() {
   return (neuron0x28a3b50()*-0.0149077);
}

double NNfunction_ns_chi02_sR::synapse0x28bef70() {
   return (neuron0x28a3e90()*-0.0193307);
}

double NNfunction_ns_chi02_sR::synapse0x28befb0() {
   return (neuron0x28a41d0()*-0.00974256);
}

double NNfunction_ns_chi02_sR::synapse0x28beff0() {
   return (neuron0x28a4510()*0.0096132);
}

double NNfunction_ns_chi02_sR::synapse0x28bf030() {
   return (neuron0x28a4850()*0.0236715);
}

double NNfunction_ns_chi02_sR::synapse0x28beac0() {
   return (neuron0x28a4b90()*-0.0119116);
}

double NNfunction_ns_chi02_sR::synapse0x28beb00() {
   return (neuron0x28a50f0()*-0.0148083);
}

double NNfunction_ns_chi02_sR::synapse0x28bf180() {
   return (neuron0x28a5310()*-0.0467186);
}

double NNfunction_ns_chi02_sR::synapse0x28bf1c0() {
   return (neuron0x28a5650()*-0.00274547);
}

double NNfunction_ns_chi02_sR::synapse0x28bf200() {
   return (neuron0x28a5990()*0.039909);
}

double NNfunction_ns_chi02_sR::synapse0x28bf240() {
   return (neuron0x28a5cd0()*-0.0150965);
}

double NNfunction_ns_chi02_sR::synapse0x28bf280() {
   return (neuron0x28a6010()*-0.0155094);
}

double NNfunction_ns_chi02_sR::synapse0x28bf2c0() {
   return (neuron0x28a6350()*-4.40228);
}

double NNfunction_ns_chi02_sR::synapse0x28bf640() {
   return (neuron0x28a1790()*-0.579594);
}

double NNfunction_ns_chi02_sR::synapse0x28bf680() {
   return (neuron0x28a1ad0()*-0.711417);
}

double NNfunction_ns_chi02_sR::synapse0x28bf6c0() {
   return (neuron0x28a1e10()*-1.46543);
}

double NNfunction_ns_chi02_sR::synapse0x28bf700() {
   return (neuron0x28a2150()*0.770598);
}

double NNfunction_ns_chi02_sR::synapse0x28bf740() {
   return (neuron0x28a2490()*0.0542944);
}

double NNfunction_ns_chi02_sR::synapse0x28bf780() {
   return (neuron0x28a27d0()*-0.100109);
}

double NNfunction_ns_chi02_sR::synapse0x28bf7c0() {
   return (neuron0x28a2b10()*-0.339299);
}

double NNfunction_ns_chi02_sR::synapse0x28bf800() {
   return (neuron0x28a2e50()*0.0212129);
}

double NNfunction_ns_chi02_sR::synapse0x28bf840() {
   return (neuron0x28a3190()*0.194542);
}

double NNfunction_ns_chi02_sR::synapse0x28bf880() {
   return (neuron0x28a34d0()*0.492539);
}

double NNfunction_ns_chi02_sR::synapse0x28bf8c0() {
   return (neuron0x28a3810()*-0.286855);
}

double NNfunction_ns_chi02_sR::synapse0x28bf900() {
   return (neuron0x28a3b50()*0.0348394);
}

double NNfunction_ns_chi02_sR::synapse0x28bf940() {
   return (neuron0x28a3e90()*-0.748312);
}

double NNfunction_ns_chi02_sR::synapse0x28bf980() {
   return (neuron0x28a41d0()*-0.271632);
}

double NNfunction_ns_chi02_sR::synapse0x28bf9c0() {
   return (neuron0x28a4510()*-1.37202);
}

double NNfunction_ns_chi02_sR::synapse0x28bfa00() {
   return (neuron0x28a4850()*-0.316563);
}

double NNfunction_ns_chi02_sR::synapse0x28bf490() {
   return (neuron0x28a4b90()*-0.0621918);
}

double NNfunction_ns_chi02_sR::synapse0x28bf4d0() {
   return (neuron0x28a50f0()*0.0750063);
}

double NNfunction_ns_chi02_sR::synapse0x28bfb50() {
   return (neuron0x28a5310()*-0.313507);
}

double NNfunction_ns_chi02_sR::synapse0x28bfb90() {
   return (neuron0x28a5650()*1.19365);
}

double NNfunction_ns_chi02_sR::synapse0x28bfbd0() {
   return (neuron0x28a5990()*-0.182931);
}

double NNfunction_ns_chi02_sR::synapse0x28bfc10() {
   return (neuron0x28a5cd0()*0.0261501);
}

double NNfunction_ns_chi02_sR::synapse0x28bfc50() {
   return (neuron0x28a6010()*0.240812);
}

double NNfunction_ns_chi02_sR::synapse0x28bfc90() {
   return (neuron0x28a6350()*0.930071);
}

double NNfunction_ns_chi02_sR::synapse0x28c0010() {
   return (neuron0x28a1790()*-0.540343);
}

double NNfunction_ns_chi02_sR::synapse0x28c0050() {
   return (neuron0x28a1ad0()*2.36504);
}

double NNfunction_ns_chi02_sR::synapse0x28c0090() {
   return (neuron0x28a1e10()*-0.670511);
}

double NNfunction_ns_chi02_sR::synapse0x28c00d0() {
   return (neuron0x28a2150()*-0.721607);
}

double NNfunction_ns_chi02_sR::synapse0x28c0110() {
   return (neuron0x28a2490()*-0.353961);
}

double NNfunction_ns_chi02_sR::synapse0x28c0150() {
   return (neuron0x28a27d0()*-0.121896);
}

double NNfunction_ns_chi02_sR::synapse0x28c0190() {
   return (neuron0x28a2b10()*0.490948);
}

double NNfunction_ns_chi02_sR::synapse0x28c01d0() {
   return (neuron0x28a2e50()*0.197695);
}

double NNfunction_ns_chi02_sR::synapse0x28c0210() {
   return (neuron0x28a3190()*-0.168058);
}

double NNfunction_ns_chi02_sR::synapse0x28c0250() {
   return (neuron0x28a34d0()*-0.0995135);
}

double NNfunction_ns_chi02_sR::synapse0x28c0290() {
   return (neuron0x28a3810()*-0.182696);
}

double NNfunction_ns_chi02_sR::synapse0x28c02d0() {
   return (neuron0x28a3b50()*0.75787);
}

double NNfunction_ns_chi02_sR::synapse0x28c0310() {
   return (neuron0x28a3e90()*1.2202);
}

double NNfunction_ns_chi02_sR::synapse0x28c0350() {
   return (neuron0x28a41d0()*-0.415186);
}

double NNfunction_ns_chi02_sR::synapse0x28c0390() {
   return (neuron0x28a4510()*-0.111728);
}

double NNfunction_ns_chi02_sR::synapse0x28c03d0() {
   return (neuron0x28a4850()*-1.58416);
}

double NNfunction_ns_chi02_sR::synapse0x28bfe60() {
   return (neuron0x28a4b90()*-0.167335);
}

double NNfunction_ns_chi02_sR::synapse0x28bfea0() {
   return (neuron0x28a50f0()*0.599959);
}

double NNfunction_ns_chi02_sR::synapse0x28c0520() {
   return (neuron0x28a5310()*-0.744757);
}

double NNfunction_ns_chi02_sR::synapse0x28c0560() {
   return (neuron0x28a5650()*1.75184);
}

double NNfunction_ns_chi02_sR::synapse0x28c05a0() {
   return (neuron0x28a5990()*0.939159);
}

double NNfunction_ns_chi02_sR::synapse0x28c05e0() {
   return (neuron0x28a5cd0()*1.66464);
}

double NNfunction_ns_chi02_sR::synapse0x28c0620() {
   return (neuron0x28a6010()*-0.385388);
}

double NNfunction_ns_chi02_sR::synapse0x28c0660() {
   return (neuron0x28a6350()*-0.415949);
}

double NNfunction_ns_chi02_sR::synapse0x28c09e0() {
   return (neuron0x28a1790()*0.15819);
}

double NNfunction_ns_chi02_sR::synapse0x28c0a20() {
   return (neuron0x28a1ad0()*-6.70659);
}

double NNfunction_ns_chi02_sR::synapse0x28c0a60() {
   return (neuron0x28a1e10()*-1.40112);
}

double NNfunction_ns_chi02_sR::synapse0x28c0aa0() {
   return (neuron0x28a2150()*0.031153);
}

double NNfunction_ns_chi02_sR::synapse0x28c0ae0() {
   return (neuron0x28a2490()*0.00409126);
}

double NNfunction_ns_chi02_sR::synapse0x28c0b20() {
   return (neuron0x28a27d0()*0.0950773);
}

double NNfunction_ns_chi02_sR::synapse0x28c0b60() {
   return (neuron0x28a2b10()*-0.028837);
}

double NNfunction_ns_chi02_sR::synapse0x28c0ba0() {
   return (neuron0x28a2e50()*-0.00772226);
}

double NNfunction_ns_chi02_sR::synapse0x28c0be0() {
   return (neuron0x28a3190()*-0.00423512);
}

double NNfunction_ns_chi02_sR::synapse0x28c0c20() {
   return (neuron0x28a34d0()*-0.00119163);
}

double NNfunction_ns_chi02_sR::synapse0x28c0c60() {
   return (neuron0x28a3810()*-0.0165527);
}

double NNfunction_ns_chi02_sR::synapse0x28c0ca0() {
   return (neuron0x28a3b50()*0.0457019);
}

double NNfunction_ns_chi02_sR::synapse0x28c0ce0() {
   return (neuron0x28a3e90()*0.0177819);
}

double NNfunction_ns_chi02_sR::synapse0x28c0d20() {
   return (neuron0x28a41d0()*-0.00848633);
}

double NNfunction_ns_chi02_sR::synapse0x28c0d60() {
   return (neuron0x28a4510()*-0.00616613);
}

double NNfunction_ns_chi02_sR::synapse0x28c0da0() {
   return (neuron0x28a4850()*-0.114846);
}

double NNfunction_ns_chi02_sR::synapse0x28c0830() {
   return (neuron0x28a4b90()*0.10533);
}

double NNfunction_ns_chi02_sR::synapse0x28c0870() {
   return (neuron0x28a50f0()*0.0103906);
}

double NNfunction_ns_chi02_sR::synapse0x28c0ef0() {
   return (neuron0x28a5310()*-0.2538);
}

double NNfunction_ns_chi02_sR::synapse0x28c0f30() {
   return (neuron0x28a5650()*0.0134142);
}

double NNfunction_ns_chi02_sR::synapse0x28c0f70() {
   return (neuron0x28a5990()*-0.0563116);
}

double NNfunction_ns_chi02_sR::synapse0x28c0fb0() {
   return (neuron0x28a5cd0()*-0.0506269);
}

double NNfunction_ns_chi02_sR::synapse0x28c0ff0() {
   return (neuron0x28a6010()*0.0357342);
}

double NNfunction_ns_chi02_sR::synapse0x28c1030() {
   return (neuron0x28a6350()*0.268827);
}

double NNfunction_ns_chi02_sR::synapse0x28c13b0() {
   return (neuron0x28a1790()*0.00695044);
}

double NNfunction_ns_chi02_sR::synapse0x28c13f0() {
   return (neuron0x28a1ad0()*4.48394);
}

double NNfunction_ns_chi02_sR::synapse0x28c1430() {
   return (neuron0x28a1e10()*-0.684101);
}

double NNfunction_ns_chi02_sR::synapse0x28c1470() {
   return (neuron0x28a2150()*-0.0499959);
}

double NNfunction_ns_chi02_sR::synapse0x28c14b0() {
   return (neuron0x28a2490()*-0.0317293);
}

double NNfunction_ns_chi02_sR::synapse0x28c14f0() {
   return (neuron0x28a27d0()*0.0180618);
}

double NNfunction_ns_chi02_sR::synapse0x28c1530() {
   return (neuron0x28a2b10()*-0.0625911);
}

double NNfunction_ns_chi02_sR::synapse0x28c1570() {
   return (neuron0x28a2e50()*0.00534614);
}

double NNfunction_ns_chi02_sR::synapse0x28c15b0() {
   return (neuron0x28a3190()*0.0375682);
}

double NNfunction_ns_chi02_sR::synapse0x28c15f0() {
   return (neuron0x28a34d0()*0.0122526);
}

double NNfunction_ns_chi02_sR::synapse0x28c1630() {
   return (neuron0x28a3810()*0.0784418);
}

double NNfunction_ns_chi02_sR::synapse0x28c1670() {
   return (neuron0x28a3b50()*0.0135054);
}

double NNfunction_ns_chi02_sR::synapse0x28c16b0() {
   return (neuron0x28a3e90()*0.0379091);
}

double NNfunction_ns_chi02_sR::synapse0x28c16f0() {
   return (neuron0x28a41d0()*-0.046749);
}

double NNfunction_ns_chi02_sR::synapse0x28c1730() {
   return (neuron0x28a4510()*0.00883101);
}

double NNfunction_ns_chi02_sR::synapse0x28c1770() {
   return (neuron0x28a4850()*0.0230405);
}

double NNfunction_ns_chi02_sR::synapse0x28c1200() {
   return (neuron0x28a4b90()*-0.0711024);
}

double NNfunction_ns_chi02_sR::synapse0x28c1240() {
   return (neuron0x28a50f0()*0.0448088);
}

double NNfunction_ns_chi02_sR::synapse0x28c18c0() {
   return (neuron0x28a5310()*0.0068397);
}

double NNfunction_ns_chi02_sR::synapse0x28c1900() {
   return (neuron0x28a5650()*0.0241389);
}

double NNfunction_ns_chi02_sR::synapse0x28c1940() {
   return (neuron0x28a5990()*0.0171397);
}

double NNfunction_ns_chi02_sR::synapse0x28c1980() {
   return (neuron0x28a5cd0()*0.0504467);
}

double NNfunction_ns_chi02_sR::synapse0x28c19c0() {
   return (neuron0x28a6010()*0.0165818);
}

double NNfunction_ns_chi02_sR::synapse0x28c1a00() {
   return (neuron0x28a6350()*6.99449);
}

double NNfunction_ns_chi02_sR::synapse0x28c1d80() {
   return (neuron0x28a1790()*-0.123538);
}

double NNfunction_ns_chi02_sR::synapse0x28c1dc0() {
   return (neuron0x28a1ad0()*-0.0858452);
}

double NNfunction_ns_chi02_sR::synapse0x28c1e00() {
   return (neuron0x28a1e10()*-0.050705);
}

double NNfunction_ns_chi02_sR::synapse0x28c1e40() {
   return (neuron0x28a2150()*0.100889);
}

double NNfunction_ns_chi02_sR::synapse0x28c1e80() {
   return (neuron0x28a2490()*-0.0831163);
}

double NNfunction_ns_chi02_sR::synapse0x28c1ec0() {
   return (neuron0x28a27d0()*0.13795);
}

double NNfunction_ns_chi02_sR::synapse0x28c1f00() {
   return (neuron0x28a2b10()*-0.341595);
}

double NNfunction_ns_chi02_sR::synapse0x28c1f40() {
   return (neuron0x28a2e50()*0.0668786);
}

double NNfunction_ns_chi02_sR::synapse0x28c1f80() {
   return (neuron0x28a3190()*-0.00987262);
}

double NNfunction_ns_chi02_sR::synapse0x28c1fc0() {
   return (neuron0x28a34d0()*-0.00878938);
}

double NNfunction_ns_chi02_sR::synapse0x28c2000() {
   return (neuron0x28a3810()*-0.121155);
}

double NNfunction_ns_chi02_sR::synapse0x28c2040() {
   return (neuron0x28a3b50()*0.24678);
}

double NNfunction_ns_chi02_sR::synapse0x28c2080() {
   return (neuron0x28a3e90()*0.258311);
}

double NNfunction_ns_chi02_sR::synapse0x28c20c0() {
   return (neuron0x28a41d0()*-0.378566);
}

double NNfunction_ns_chi02_sR::synapse0x28c2100() {
   return (neuron0x28a4510()*0.409372);
}

double NNfunction_ns_chi02_sR::synapse0x28c2140() {
   return (neuron0x28a4850()*0.198074);
}

double NNfunction_ns_chi02_sR::synapse0x28c1bd0() {
   return (neuron0x28a4b90()*-0.654242);
}

double NNfunction_ns_chi02_sR::synapse0x28c1c10() {
   return (neuron0x28a50f0()*-0.0238888);
}

double NNfunction_ns_chi02_sR::synapse0x28c2290() {
   return (neuron0x28a5310()*0.690826);
}

double NNfunction_ns_chi02_sR::synapse0x28c22d0() {
   return (neuron0x28a5650()*0.268197);
}

double NNfunction_ns_chi02_sR::synapse0x28c2310() {
   return (neuron0x28a5990()*-0.0139145);
}

double NNfunction_ns_chi02_sR::synapse0x28c2350() {
   return (neuron0x28a5cd0()*0.047625);
}

double NNfunction_ns_chi02_sR::synapse0x28c2390() {
   return (neuron0x28a6010()*0.141336);
}

double NNfunction_ns_chi02_sR::synapse0x28c23d0() {
   return (neuron0x28a6350()*1.75561);
}

double NNfunction_ns_chi02_sR::synapse0x28c2750() {
   return (neuron0x28a1790()*0.139878);
}

double NNfunction_ns_chi02_sR::synapse0x28c2790() {
   return (neuron0x28a1ad0()*0.0726688);
}

double NNfunction_ns_chi02_sR::synapse0x28c27d0() {
   return (neuron0x28a1e10()*0.735335);
}

double NNfunction_ns_chi02_sR::synapse0x28c2810() {
   return (neuron0x28a2150()*0.0292142);
}

double NNfunction_ns_chi02_sR::synapse0x28c2850() {
   return (neuron0x28a2490()*0.00205039);
}

double NNfunction_ns_chi02_sR::synapse0x28c2890() {
   return (neuron0x28a27d0()*0.0183592);
}

double NNfunction_ns_chi02_sR::synapse0x28c28d0() {
   return (neuron0x28a2b10()*-0.0596008);
}

double NNfunction_ns_chi02_sR::synapse0x28c2910() {
   return (neuron0x28a2e50()*-0.00586358);
}

double NNfunction_ns_chi02_sR::synapse0x28c2950() {
   return (neuron0x28a3190()*-0.18753);
}

double NNfunction_ns_chi02_sR::synapse0x28c2990() {
   return (neuron0x28a34d0()*0.00481474);
}

double NNfunction_ns_chi02_sR::synapse0x28c29d0() {
   return (neuron0x28a3810()*0.0239337);
}

double NNfunction_ns_chi02_sR::synapse0x28c2a10() {
   return (neuron0x28a3b50()*0.0573493);
}

double NNfunction_ns_chi02_sR::synapse0x28c2a50() {
   return (neuron0x28a3e90()*0.0430595);
}

double NNfunction_ns_chi02_sR::synapse0x28c2a90() {
   return (neuron0x28a41d0()*0.06986);
}

double NNfunction_ns_chi02_sR::synapse0x28c2ad0() {
   return (neuron0x28a4510()*0.122632);
}

double NNfunction_ns_chi02_sR::synapse0x28c2b10() {
   return (neuron0x28a4850()*-0.0588522);
}

double NNfunction_ns_chi02_sR::synapse0x28c25a0() {
   return (neuron0x28a4b90()*0.0120782);
}

double NNfunction_ns_chi02_sR::synapse0x28c25e0() {
   return (neuron0x28a50f0()*-0.0892749);
}

double NNfunction_ns_chi02_sR::synapse0x28c2c60() {
   return (neuron0x28a5310()*0.835441);
}

double NNfunction_ns_chi02_sR::synapse0x28c2ca0() {
   return (neuron0x28a5650()*-0.00380878);
}

double NNfunction_ns_chi02_sR::synapse0x28c2ce0() {
   return (neuron0x28a5990()*0.0497113);
}

double NNfunction_ns_chi02_sR::synapse0x28c2d20() {
   return (neuron0x28a5cd0()*0.0453964);
}

double NNfunction_ns_chi02_sR::synapse0x28c2d60() {
   return (neuron0x28a6010()*0.065554);
}

double NNfunction_ns_chi02_sR::synapse0x28c2da0() {
   return (neuron0x28a6350()*-0.0428262);
}

double NNfunction_ns_chi02_sR::synapse0x28ab850() {
   return (neuron0x28a1790()*-0.00549691);
}

double NNfunction_ns_chi02_sR::synapse0x28ab890() {
   return (neuron0x28a1ad0()*-3.76997);
}

double NNfunction_ns_chi02_sR::synapse0x28ab8d0() {
   return (neuron0x28a1e10()*4.98002);
}

double NNfunction_ns_chi02_sR::synapse0x28ab910() {
   return (neuron0x28a2150()*0.0469302);
}

double NNfunction_ns_chi02_sR::synapse0x28ab950() {
   return (neuron0x28a2490()*-0.236651);
}

double NNfunction_ns_chi02_sR::synapse0x28ab990() {
   return (neuron0x28a27d0()*-0.0617486);
}

double NNfunction_ns_chi02_sR::synapse0x28ab9d0() {
   return (neuron0x28a2b10()*0.196989);
}

double NNfunction_ns_chi02_sR::synapse0x28aba10() {
   return (neuron0x28a2e50()*0.114392);
}

double NNfunction_ns_chi02_sR::synapse0x28c3530() {
   return (neuron0x28a3190()*-0.0302505);
}

double NNfunction_ns_chi02_sR::synapse0x28c3570() {
   return (neuron0x28a34d0()*0.000695307);
}

double NNfunction_ns_chi02_sR::synapse0x28c35b0() {
   return (neuron0x28a3810()*0.00207284);
}

double NNfunction_ns_chi02_sR::synapse0x28c35f0() {
   return (neuron0x28a3b50()*-0.0572613);
}

double NNfunction_ns_chi02_sR::synapse0x28c3630() {
   return (neuron0x28a3e90()*0.0311266);
}

double NNfunction_ns_chi02_sR::synapse0x28c3670() {
   return (neuron0x28a41d0()*0.0392578);
}

double NNfunction_ns_chi02_sR::synapse0x28c36b0() {
   return (neuron0x28a4510()*-0.0601635);
}

double NNfunction_ns_chi02_sR::synapse0x28c36f0() {
   return (neuron0x28a4850()*0.0177723);
}

double NNfunction_ns_chi02_sR::synapse0x28c2f70() {
   return (neuron0x28a4b90()*0.276504);
}

double NNfunction_ns_chi02_sR::synapse0x28c2fb0() {
   return (neuron0x28a50f0()*-0.142664);
}

double NNfunction_ns_chi02_sR::synapse0x28c3840() {
   return (neuron0x28a5310()*-0.0219376);
}

double NNfunction_ns_chi02_sR::synapse0x28c3880() {
   return (neuron0x28a5650()*0.0740901);
}

double NNfunction_ns_chi02_sR::synapse0x28c38c0() {
   return (neuron0x28a5990()*-0.0669219);
}

double NNfunction_ns_chi02_sR::synapse0x28c3900() {
   return (neuron0x28a5cd0()*-0.00515707);
}

double NNfunction_ns_chi02_sR::synapse0x28c3940() {
   return (neuron0x28a6010()*0.134355);
}

double NNfunction_ns_chi02_sR::synapse0x28c3980() {
   return (neuron0x28a6350()*8.36623);
}

double NNfunction_ns_chi02_sR::synapse0x28c3d00() {
   return (neuron0x28a1790()*0.828472);
}

double NNfunction_ns_chi02_sR::synapse0x28c3d40() {
   return (neuron0x28a1ad0()*0.206619);
}

double NNfunction_ns_chi02_sR::synapse0x28c3d80() {
   return (neuron0x28a1e10()*2.11756);
}

double NNfunction_ns_chi02_sR::synapse0x28c3dc0() {
   return (neuron0x28a2150()*-1.20137);
}

double NNfunction_ns_chi02_sR::synapse0x28c3e00() {
   return (neuron0x28a2490()*0.339293);
}

double NNfunction_ns_chi02_sR::synapse0x28c3e40() {
   return (neuron0x28a27d0()*0.373362);
}

double NNfunction_ns_chi02_sR::synapse0x28c3e80() {
   return (neuron0x28a2b10()*-0.0232383);
}

double NNfunction_ns_chi02_sR::synapse0x28c3ec0() {
   return (neuron0x28a2e50()*0.286235);
}

double NNfunction_ns_chi02_sR::synapse0x28c3f00() {
   return (neuron0x28a3190()*-1.4473);
}

double NNfunction_ns_chi02_sR::synapse0x28c3f40() {
   return (neuron0x28a34d0()*-1.19407);
}

double NNfunction_ns_chi02_sR::synapse0x28c3f80() {
   return (neuron0x28a3810()*-0.681144);
}

double NNfunction_ns_chi02_sR::synapse0x28c3fc0() {
   return (neuron0x28a3b50()*1.16592);
}

double NNfunction_ns_chi02_sR::synapse0x28c4000() {
   return (neuron0x28a3e90()*0.280384);
}

double NNfunction_ns_chi02_sR::synapse0x28c4040() {
   return (neuron0x28a41d0()*0.135709);
}

double NNfunction_ns_chi02_sR::synapse0x28c4080() {
   return (neuron0x28a4510()*0.249433);
}

double NNfunction_ns_chi02_sR::synapse0x28c40c0() {
   return (neuron0x28a4850()*-0.491099);
}

double NNfunction_ns_chi02_sR::synapse0x28c3b50() {
   return (neuron0x28a4b90()*-0.898708);
}

double NNfunction_ns_chi02_sR::synapse0x28c3b90() {
   return (neuron0x28a50f0()*-0.435615);
}

double NNfunction_ns_chi02_sR::synapse0x28c4210() {
   return (neuron0x28a5310()*-0.0932089);
}

double NNfunction_ns_chi02_sR::synapse0x28c4250() {
   return (neuron0x28a5650()*-0.906334);
}

double NNfunction_ns_chi02_sR::synapse0x28c4290() {
   return (neuron0x28a5990()*1.41154);
}

double NNfunction_ns_chi02_sR::synapse0x28c42d0() {
   return (neuron0x28a5cd0()*0.631375);
}

double NNfunction_ns_chi02_sR::synapse0x28c4310() {
   return (neuron0x28a6010()*-1.97739);
}

double NNfunction_ns_chi02_sR::synapse0x28c4350() {
   return (neuron0x28a6350()*-1.09924);
}

double NNfunction_ns_chi02_sR::synapse0x28c46d0() {
   return (neuron0x28a1790()*0.840074);
}

double NNfunction_ns_chi02_sR::synapse0x28c4710() {
   return (neuron0x28a1ad0()*-0.520499);
}

double NNfunction_ns_chi02_sR::synapse0x28c4750() {
   return (neuron0x28a1e10()*0.823386);
}

double NNfunction_ns_chi02_sR::synapse0x28c4790() {
   return (neuron0x28a2150()*0.271054);
}

double NNfunction_ns_chi02_sR::synapse0x28c47d0() {
   return (neuron0x28a2490()*-0.239777);
}

double NNfunction_ns_chi02_sR::synapse0x28c4810() {
   return (neuron0x28a27d0()*-0.719048);
}

double NNfunction_ns_chi02_sR::synapse0x28c4850() {
   return (neuron0x28a2b10()*-1.06234);
}

double NNfunction_ns_chi02_sR::synapse0x28c4890() {
   return (neuron0x28a2e50()*0.128261);
}

double NNfunction_ns_chi02_sR::synapse0x28c48d0() {
   return (neuron0x28a3190()*-0.589728);
}

double NNfunction_ns_chi02_sR::synapse0x28c4910() {
   return (neuron0x28a34d0()*1.79902);
}

double NNfunction_ns_chi02_sR::synapse0x28c4950() {
   return (neuron0x28a3810()*-0.954931);
}

double NNfunction_ns_chi02_sR::synapse0x28c4990() {
   return (neuron0x28a3b50()*-0.68165);
}

double NNfunction_ns_chi02_sR::synapse0x28c49d0() {
   return (neuron0x28a3e90()*-0.982566);
}

double NNfunction_ns_chi02_sR::synapse0x28c4a10() {
   return (neuron0x28a41d0()*-0.837174);
}

double NNfunction_ns_chi02_sR::synapse0x28c4a50() {
   return (neuron0x28a4510()*0.758105);
}

double NNfunction_ns_chi02_sR::synapse0x28c4a90() {
   return (neuron0x28a4850()*0.438414);
}

double NNfunction_ns_chi02_sR::synapse0x28c4520() {
   return (neuron0x28a4b90()*0.611277);
}

double NNfunction_ns_chi02_sR::synapse0x28c4560() {
   return (neuron0x28a50f0()*1.02454);
}

double NNfunction_ns_chi02_sR::synapse0x28b5090() {
   return (neuron0x28a5310()*-0.323902);
}

double NNfunction_ns_chi02_sR::synapse0x28b50d0() {
   return (neuron0x28a5650()*0.142295);
}

double NNfunction_ns_chi02_sR::synapse0x28b5110() {
   return (neuron0x28a5990()*0.203956);
}

double NNfunction_ns_chi02_sR::synapse0x28b5150() {
   return (neuron0x28a5cd0()*-1.33399);
}

double NNfunction_ns_chi02_sR::synapse0x28b5190() {
   return (neuron0x28a6010()*-0.438172);
}

double NNfunction_ns_chi02_sR::synapse0x28b51d0() {
   return (neuron0x28a6350()*0.0804746);
}

double NNfunction_ns_chi02_sR::synapse0x28b5550() {
   return (neuron0x28a1790()*0.0019328);
}

double NNfunction_ns_chi02_sR::synapse0x28b5590() {
   return (neuron0x28a1ad0()*0.0502562);
}

double NNfunction_ns_chi02_sR::synapse0x28b55d0() {
   return (neuron0x28a1e10()*0.0271394);
}

double NNfunction_ns_chi02_sR::synapse0x28b5610() {
   return (neuron0x28a2150()*-0.0471364);
}

double NNfunction_ns_chi02_sR::synapse0x28b5650() {
   return (neuron0x28a2490()*0.0556724);
}

double NNfunction_ns_chi02_sR::synapse0x28b5690() {
   return (neuron0x28a27d0()*-0.00900291);
}

double NNfunction_ns_chi02_sR::synapse0x28b56d0() {
   return (neuron0x28a2b10()*0.0354558);
}

double NNfunction_ns_chi02_sR::synapse0x28b5710() {
   return (neuron0x28a2e50()*0.0322787);
}

double NNfunction_ns_chi02_sR::synapse0x28b5750() {
   return (neuron0x28a3190()*-0.10667);
}

double NNfunction_ns_chi02_sR::synapse0x28b5790() {
   return (neuron0x28a34d0()*0.0265752);
}

double NNfunction_ns_chi02_sR::synapse0x28b57d0() {
   return (neuron0x28a3810()*0.00231015);
}

double NNfunction_ns_chi02_sR::synapse0x28b5810() {
   return (neuron0x28a3b50()*0.048121);
}

double NNfunction_ns_chi02_sR::synapse0x28b5850() {
   return (neuron0x28a3e90()*0.0140907);
}

double NNfunction_ns_chi02_sR::synapse0x28b5890() {
   return (neuron0x28a41d0()*0.0386536);
}

double NNfunction_ns_chi02_sR::synapse0x28b58d0() {
   return (neuron0x28a4510()*-0.0983219);
}

double NNfunction_ns_chi02_sR::synapse0x28b5910() {
   return (neuron0x28a4850()*0.0653748);
}

double NNfunction_ns_chi02_sR::synapse0x28b53a0() {
   return (neuron0x28a4b90()*-0.00908682);
}

double NNfunction_ns_chi02_sR::synapse0x28b53e0() {
   return (neuron0x28a50f0()*-0.0436847);
}

double NNfunction_ns_chi02_sR::synapse0x28b5a60() {
   return (neuron0x28a5310()*-1.24808);
}

double NNfunction_ns_chi02_sR::synapse0x28b5aa0() {
   return (neuron0x28a5650()*-0.0534379);
}

double NNfunction_ns_chi02_sR::synapse0x28b5ae0() {
   return (neuron0x28a5990()*-0.0390704);
}

double NNfunction_ns_chi02_sR::synapse0x28b5b20() {
   return (neuron0x28a5cd0()*0.0216907);
}

double NNfunction_ns_chi02_sR::synapse0x28b5b60() {
   return (neuron0x28a6010()*0.0223975);
}

double NNfunction_ns_chi02_sR::synapse0x28b5ba0() {
   return (neuron0x28a6350()*0.00960819);
}

double NNfunction_ns_chi02_sR::synapse0x28b5f20() {
   return (neuron0x28a1790()*-0.0526457);
}

double NNfunction_ns_chi02_sR::synapse0x28b5f60() {
   return (neuron0x28a1ad0()*0.109164);
}

double NNfunction_ns_chi02_sR::synapse0x28b5fa0() {
   return (neuron0x28a1e10()*-0.0648837);
}

double NNfunction_ns_chi02_sR::synapse0x28b5fe0() {
   return (neuron0x28a2150()*-0.121879);
}

double NNfunction_ns_chi02_sR::synapse0x28b6020() {
   return (neuron0x28a2490()*0.0559962);
}

double NNfunction_ns_chi02_sR::synapse0x28b6060() {
   return (neuron0x28a27d0()*-0.00635188);
}

double NNfunction_ns_chi02_sR::synapse0x28b60a0() {
   return (neuron0x28a2b10()*0.00363897);
}

double NNfunction_ns_chi02_sR::synapse0x28b60e0() {
   return (neuron0x28a2e50()*0.00622542);
}

double NNfunction_ns_chi02_sR::synapse0x28b6120() {
   return (neuron0x28a3190()*-0.0790363);
}

double NNfunction_ns_chi02_sR::synapse0x28b6160() {
   return (neuron0x28a34d0()*0.0424321);
}

double NNfunction_ns_chi02_sR::synapse0x28b61a0() {
   return (neuron0x28a3810()*-0.0700775);
}

double NNfunction_ns_chi02_sR::synapse0x28b61e0() {
   return (neuron0x28a3b50()*0.0412205);
}

double NNfunction_ns_chi02_sR::synapse0x28b6220() {
   return (neuron0x28a3e90()*0.0380507);
}

double NNfunction_ns_chi02_sR::synapse0x28b6260() {
   return (neuron0x28a41d0()*0.0372831);
}

double NNfunction_ns_chi02_sR::synapse0x28b62a0() {
   return (neuron0x28a4510()*0.0586901);
}

double NNfunction_ns_chi02_sR::synapse0x28b62e0() {
   return (neuron0x28a4850()*0.0409345);
}

double NNfunction_ns_chi02_sR::synapse0x28b5d70() {
   return (neuron0x28a4b90()*0.0365128);
}

double NNfunction_ns_chi02_sR::synapse0x28b5db0() {
   return (neuron0x28a50f0()*0.000328889);
}

double NNfunction_ns_chi02_sR::synapse0x28b6430() {
   return (neuron0x28a5310()*1.80851);
}

double NNfunction_ns_chi02_sR::synapse0x28b6470() {
   return (neuron0x28a5650()*0.0220323);
}

double NNfunction_ns_chi02_sR::synapse0x28b64b0() {
   return (neuron0x28a5990()*0.00527595);
}

double NNfunction_ns_chi02_sR::synapse0x28b64f0() {
   return (neuron0x28a5cd0()*0.0253535);
}

double NNfunction_ns_chi02_sR::synapse0x28b6530() {
   return (neuron0x28a6010()*0.00714209);
}

double NNfunction_ns_chi02_sR::synapse0x28b6570() {
   return (neuron0x28a6350()*-0.0105606);
}

double NNfunction_ns_chi02_sR::synapse0x28b68f0() {
   return (neuron0x28a1790()*-0.644334);
}

double NNfunction_ns_chi02_sR::synapse0x28b6930() {
   return (neuron0x28a1ad0()*1.77312);
}

double NNfunction_ns_chi02_sR::synapse0x28b6970() {
   return (neuron0x28a1e10()*0.0880748);
}

double NNfunction_ns_chi02_sR::synapse0x28b69b0() {
   return (neuron0x28a2150()*0.784371);
}

double NNfunction_ns_chi02_sR::synapse0x28b69f0() {
   return (neuron0x28a2490()*0.984569);
}

double NNfunction_ns_chi02_sR::synapse0x28b6a30() {
   return (neuron0x28a27d0()*-0.0335621);
}

double NNfunction_ns_chi02_sR::synapse0x28b6a70() {
   return (neuron0x28a2b10()*0.305419);
}

double NNfunction_ns_chi02_sR::synapse0x28b6ab0() {
   return (neuron0x28a2e50()*-0.439136);
}

double NNfunction_ns_chi02_sR::synapse0x28b6af0() {
   return (neuron0x28a3190()*0.197887);
}

double NNfunction_ns_chi02_sR::synapse0x28b6b30() {
   return (neuron0x28a34d0()*0.552111);
}

double NNfunction_ns_chi02_sR::synapse0x28b6b70() {
   return (neuron0x28a3810()*-1.2547);
}

double NNfunction_ns_chi02_sR::synapse0x28b6bb0() {
   return (neuron0x28a3b50()*1.25386);
}

double NNfunction_ns_chi02_sR::synapse0x28b6bf0() {
   return (neuron0x28a3e90()*-1.40273);
}

double NNfunction_ns_chi02_sR::synapse0x28b6c30() {
   return (neuron0x28a41d0()*0.812819);
}

double NNfunction_ns_chi02_sR::synapse0x28b6c70() {
   return (neuron0x28a4510()*-0.982606);
}

double NNfunction_ns_chi02_sR::synapse0x28b6cb0() {
   return (neuron0x28a4850()*0.582403);
}

double NNfunction_ns_chi02_sR::synapse0x28b6740() {
   return (neuron0x28a4b90()*0.473917);
}

double NNfunction_ns_chi02_sR::synapse0x28b6780() {
   return (neuron0x28a50f0()*1.55339);
}

double NNfunction_ns_chi02_sR::synapse0x28b6e00() {
   return (neuron0x28a5310()*-0.967919);
}

double NNfunction_ns_chi02_sR::synapse0x28b6e40() {
   return (neuron0x28a5650()*2.65932);
}

double NNfunction_ns_chi02_sR::synapse0x28b6e80() {
   return (neuron0x28a5990()*-0.759125);
}

double NNfunction_ns_chi02_sR::synapse0x28b6ec0() {
   return (neuron0x28a5cd0()*0.243996);
}

double NNfunction_ns_chi02_sR::synapse0x28b6f00() {
   return (neuron0x28a6010()*0.399311);
}

double NNfunction_ns_chi02_sR::synapse0x28b6f40() {
   return (neuron0x28a6350()*0.695769);
}

double NNfunction_ns_chi02_sR::synapse0x28c8e10() {
   return (neuron0x28a1790()*2.49458);
}

double NNfunction_ns_chi02_sR::synapse0x28c8e50() {
   return (neuron0x28a1ad0()*0.213904);
}

double NNfunction_ns_chi02_sR::synapse0x28c8e90() {
   return (neuron0x28a1e10()*0.248661);
}

double NNfunction_ns_chi02_sR::synapse0x28c8ed0() {
   return (neuron0x28a2150()*1.15463);
}

double NNfunction_ns_chi02_sR::synapse0x28c8f10() {
   return (neuron0x28a2490()*-0.599582);
}

double NNfunction_ns_chi02_sR::synapse0x28c8f50() {
   return (neuron0x28a27d0()*0.133114);
}

double NNfunction_ns_chi02_sR::synapse0x28c8f90() {
   return (neuron0x28a2b10()*-0.557984);
}

double NNfunction_ns_chi02_sR::synapse0x28c8fd0() {
   return (neuron0x28a2e50()*0.2015);
}

double NNfunction_ns_chi02_sR::synapse0x28c9010() {
   return (neuron0x28a3190()*-1.4077);
}

double NNfunction_ns_chi02_sR::synapse0x28c9050() {
   return (neuron0x28a34d0()*0.798296);
}

double NNfunction_ns_chi02_sR::synapse0x28c9090() {
   return (neuron0x28a3810()*-0.431096);
}

double NNfunction_ns_chi02_sR::synapse0x28c90d0() {
   return (neuron0x28a3b50()*-0.0251283);
}

double NNfunction_ns_chi02_sR::synapse0x28c9110() {
   return (neuron0x28a3e90()*-0.267795);
}

double NNfunction_ns_chi02_sR::synapse0x28c9150() {
   return (neuron0x28a41d0()*-0.713005);
}

double NNfunction_ns_chi02_sR::synapse0x28c9190() {
   return (neuron0x28a4510()*0.705953);
}

double NNfunction_ns_chi02_sR::synapse0x28c91d0() {
   return (neuron0x28a4850()*-0.291086);
}

double NNfunction_ns_chi02_sR::synapse0x28b6f80() {
   return (neuron0x28a4b90()*0.338765);
}

double NNfunction_ns_chi02_sR::synapse0x28b6fc0() {
   return (neuron0x28a50f0()*-1.93909);
}

double NNfunction_ns_chi02_sR::synapse0x28c9320() {
   return (neuron0x28a5310()*-0.0572938);
}

double NNfunction_ns_chi02_sR::synapse0x28c9360() {
   return (neuron0x28a5650()*-0.917937);
}

double NNfunction_ns_chi02_sR::synapse0x28c93a0() {
   return (neuron0x28a5990()*0.0436248);
}

double NNfunction_ns_chi02_sR::synapse0x28c93e0() {
   return (neuron0x28a5cd0()*-0.627219);
}

double NNfunction_ns_chi02_sR::synapse0x28c9420() {
   return (neuron0x28a6010()*-0.478448);
}

double NNfunction_ns_chi02_sR::synapse0x28c9460() {
   return (neuron0x28a6350()*-0.689271);
}

double NNfunction_ns_chi02_sR::synapse0x28c97e0() {
   return (neuron0x28a1790()*-0.00538466);
}

double NNfunction_ns_chi02_sR::synapse0x28c9820() {
   return (neuron0x28a1ad0()*-3.67972);
}

double NNfunction_ns_chi02_sR::synapse0x28c9860() {
   return (neuron0x28a1e10()*-0.132826);
}

double NNfunction_ns_chi02_sR::synapse0x28c98a0() {
   return (neuron0x28a2150()*0.0057864);
}

double NNfunction_ns_chi02_sR::synapse0x28c98e0() {
   return (neuron0x28a2490()*0.00248164);
}

double NNfunction_ns_chi02_sR::synapse0x28c9920() {
   return (neuron0x28a27d0()*0.00379936);
}

double NNfunction_ns_chi02_sR::synapse0x28c9960() {
   return (neuron0x28a2b10()*0.00910838);
}

double NNfunction_ns_chi02_sR::synapse0x28c99a0() {
   return (neuron0x28a2e50()*0.00400427);
}

double NNfunction_ns_chi02_sR::synapse0x28c99e0() {
   return (neuron0x28a3190()*0.00453393);
}

double NNfunction_ns_chi02_sR::synapse0x28c9a20() {
   return (neuron0x28a34d0()*0.0159453);
}

double NNfunction_ns_chi02_sR::synapse0x28c9a60() {
   return (neuron0x28a3810()*-0.0179957);
}

double NNfunction_ns_chi02_sR::synapse0x28c9aa0() {
   return (neuron0x28a3b50()*-0.0113414);
}

double NNfunction_ns_chi02_sR::synapse0x28c9ae0() {
   return (neuron0x28a3e90()*-0.001891);
}

double NNfunction_ns_chi02_sR::synapse0x28c9b20() {
   return (neuron0x28a41d0()*0.00346428);
}

double NNfunction_ns_chi02_sR::synapse0x28c9b60() {
   return (neuron0x28a4510()*0.00325402);
}

double NNfunction_ns_chi02_sR::synapse0x28c9ba0() {
   return (neuron0x28a4850()*-0.000661016);
}

double NNfunction_ns_chi02_sR::synapse0x28c9630() {
   return (neuron0x28a4b90()*0.0173825);
}

double NNfunction_ns_chi02_sR::synapse0x28c9670() {
   return (neuron0x28a50f0()*-0.00298684);
}

double NNfunction_ns_chi02_sR::synapse0x28c9cf0() {
   return (neuron0x28a5310()*-0.0348446);
}

double NNfunction_ns_chi02_sR::synapse0x28c9d30() {
   return (neuron0x28a5650()*-0.000169);
}

double NNfunction_ns_chi02_sR::synapse0x28c9d70() {
   return (neuron0x28a5990()*-0.0234185);
}

double NNfunction_ns_chi02_sR::synapse0x28c9db0() {
   return (neuron0x28a5cd0()*-0.00148633);
}

double NNfunction_ns_chi02_sR::synapse0x28c9df0() {
   return (neuron0x28a6010()*0.00142078);
}

double NNfunction_ns_chi02_sR::synapse0x28c9e30() {
   return (neuron0x28a6350()*-0.0419144);
}

double NNfunction_ns_chi02_sR::synapse0x28ca1b0() {
   return (neuron0x28a1790()*-0.189192);
}

double NNfunction_ns_chi02_sR::synapse0x28ca1f0() {
   return (neuron0x28a1ad0()*2.70651);
}

double NNfunction_ns_chi02_sR::synapse0x28ca230() {
   return (neuron0x28a1e10()*-1.70382);
}

double NNfunction_ns_chi02_sR::synapse0x28ca270() {
   return (neuron0x28a2150()*-0.632485);
}

double NNfunction_ns_chi02_sR::synapse0x28ca2b0() {
   return (neuron0x28a2490()*0.340971);
}

double NNfunction_ns_chi02_sR::synapse0x28ca2f0() {
   return (neuron0x28a27d0()*-0.0245428);
}

double NNfunction_ns_chi02_sR::synapse0x28ca330() {
   return (neuron0x28a2b10()*-0.103375);
}

double NNfunction_ns_chi02_sR::synapse0x28ca370() {
   return (neuron0x28a2e50()*0.35102);
}

double NNfunction_ns_chi02_sR::synapse0x28ca3b0() {
   return (neuron0x28a3190()*0.203249);
}

double NNfunction_ns_chi02_sR::synapse0x28ca3f0() {
   return (neuron0x28a34d0()*-0.0893655);
}

double NNfunction_ns_chi02_sR::synapse0x28ca430() {
   return (neuron0x28a3810()*-0.11512);
}

double NNfunction_ns_chi02_sR::synapse0x28ca470() {
   return (neuron0x28a3b50()*0.276853);
}

double NNfunction_ns_chi02_sR::synapse0x28ca4b0() {
   return (neuron0x28a3e90()*0.292211);
}

double NNfunction_ns_chi02_sR::synapse0x28ca4f0() {
   return (neuron0x28a41d0()*0.674623);
}

double NNfunction_ns_chi02_sR::synapse0x28ca530() {
   return (neuron0x28a4510()*-0.503824);
}

double NNfunction_ns_chi02_sR::synapse0x28ca570() {
   return (neuron0x28a4850()*-0.970521);
}

double NNfunction_ns_chi02_sR::synapse0x28ca000() {
   return (neuron0x28a4b90()*0.0348769);
}

double NNfunction_ns_chi02_sR::synapse0x28ca040() {
   return (neuron0x28a50f0()*0.0894387);
}

double NNfunction_ns_chi02_sR::synapse0x28ca6c0() {
   return (neuron0x28a5310()*-2.51297);
}

double NNfunction_ns_chi02_sR::synapse0x28ca700() {
   return (neuron0x28a5650()*-0.484992);
}

double NNfunction_ns_chi02_sR::synapse0x28ca740() {
   return (neuron0x28a5990()*0.513977);
}

double NNfunction_ns_chi02_sR::synapse0x28ca780() {
   return (neuron0x28a5cd0()*0.452092);
}

double NNfunction_ns_chi02_sR::synapse0x28ca7c0() {
   return (neuron0x28a6010()*0.158427);
}

double NNfunction_ns_chi02_sR::synapse0x28ca800() {
   return (neuron0x28a6350()*-0.146947);
}

double NNfunction_ns_chi02_sR::synapse0x28cab80() {
   return (neuron0x28a1790()*0.0193888);
}

double NNfunction_ns_chi02_sR::synapse0x28cabc0() {
   return (neuron0x28a1ad0()*15.3605);
}

double NNfunction_ns_chi02_sR::synapse0x28cac00() {
   return (neuron0x28a1e10()*-14.7866);
}

double NNfunction_ns_chi02_sR::synapse0x28cac40() {
   return (neuron0x28a2150()*0.0801931);
}

double NNfunction_ns_chi02_sR::synapse0x28cac80() {
   return (neuron0x28a2490()*-0.000282731);
}

double NNfunction_ns_chi02_sR::synapse0x28cacc0() {
   return (neuron0x28a27d0()*-0.0219734);
}

double NNfunction_ns_chi02_sR::synapse0x28cad00() {
   return (neuron0x28a2b10()*-0.0245468);
}

double NNfunction_ns_chi02_sR::synapse0x28cad40() {
   return (neuron0x28a2e50()*-0.101131);
}

double NNfunction_ns_chi02_sR::synapse0x28cad80() {
   return (neuron0x28a3190()*0.093253);
}

double NNfunction_ns_chi02_sR::synapse0x28cadc0() {
   return (neuron0x28a34d0()*0.0452525);
}

double NNfunction_ns_chi02_sR::synapse0x28cae00() {
   return (neuron0x28a3810()*0.0544168);
}

double NNfunction_ns_chi02_sR::synapse0x28cae40() {
   return (neuron0x28a3b50()*-0.0305167);
}

double NNfunction_ns_chi02_sR::synapse0x28cae80() {
   return (neuron0x28a3e90()*0.00267813);
}

double NNfunction_ns_chi02_sR::synapse0x28caec0() {
   return (neuron0x28a41d0()*-0.151474);
}

double NNfunction_ns_chi02_sR::synapse0x28caf00() {
   return (neuron0x28a4510()*0.0193081);
}

double NNfunction_ns_chi02_sR::synapse0x28caf40() {
   return (neuron0x28a4850()*-0.00701679);
}

double NNfunction_ns_chi02_sR::synapse0x28ca9d0() {
   return (neuron0x28a4b90()*0.096339);
}

double NNfunction_ns_chi02_sR::synapse0x28caa10() {
   return (neuron0x28a50f0()*0.0608239);
}

double NNfunction_ns_chi02_sR::synapse0x28cb090() {
   return (neuron0x28a5310()*0.157128);
}

double NNfunction_ns_chi02_sR::synapse0x28cb0d0() {
   return (neuron0x28a5650()*0.0656102);
}

double NNfunction_ns_chi02_sR::synapse0x28cb110() {
   return (neuron0x28a5990()*-0.00123178);
}

double NNfunction_ns_chi02_sR::synapse0x28cb150() {
   return (neuron0x28a5cd0()*-0.012624);
}

double NNfunction_ns_chi02_sR::synapse0x28cb190() {
   return (neuron0x28a6010()*0.0712267);
}

double NNfunction_ns_chi02_sR::synapse0x28cb1d0() {
   return (neuron0x28a6350()*0.111124);
}

double NNfunction_ns_chi02_sR::synapse0x266b0e0() {
   return (neuron0x28a67c0()*1.22728);
}

double NNfunction_ns_chi02_sR::synapse0x266b120() {
   return (neuron0x28a7110()*0.00616225);
}

double NNfunction_ns_chi02_sR::synapse0x28a8c80() {
   return (neuron0x28a7bf0()*1.7813);
}

double NNfunction_ns_chi02_sR::synapse0x28a8cc0() {
   return (neuron0x28a7690()*-0.662604);
}

double NNfunction_ns_chi02_sR::synapse0x28a9650() {
   return (neuron0x28a89d0()*5.51622);
}

double NNfunction_ns_chi02_sR::synapse0x28a9690() {
   return (neuron0x28a93a0()*-0.0392444);
}

double NNfunction_ns_chi02_sR::synapse0x28aa420() {
   return (neuron0x28aa170()*-0.0474762);
}

double NNfunction_ns_chi02_sR::synapse0x28aa460() {
   return (neuron0x28aab40()*-0.429587);
}

double NNfunction_ns_chi02_sR::synapse0x28aadf0() {
   return (neuron0x28ab510()*0.0251767);
}

double NNfunction_ns_chi02_sR::synapse0x28aae30() {
   return (neuron0x28abff0()*0.0370459);
}

double NNfunction_ns_chi02_sR::synapse0x28ab7c0() {
   return (neuron0x28ac9c0()*0.0180602);
}

double NNfunction_ns_chi02_sR::synapse0x28ab800() {
   return (neuron0x28a9aa0()*0.00140059);
}

double NNfunction_ns_chi02_sR::synapse0x28ac2a0() {
   return (neuron0x28ae570()*0.0797053);
}

double NNfunction_ns_chi02_sR::synapse0x28ac2e0() {
   return (neuron0x28aef40()*-0.0327231);
}

double NNfunction_ns_chi02_sR::synapse0x28acc70() {
   return (neuron0x28af910()*1.91701);
}

double NNfunction_ns_chi02_sR::synapse0x28accb0() {
   return (neuron0x28b02e0()*0.10237);
}

double NNfunction_ns_chi02_sR::synapse0x28a9d50() {
   return (neuron0x28b20f0()*-0.0683657);
}

double NNfunction_ns_chi02_sR::synapse0x28a9d90() {
   return (neuron0x28b23d0()*1.1596);
}

double NNfunction_ns_chi02_sR::synapse0x28ae820() {
   return (neuron0x28b2da0()*-0.0104291);
}

double NNfunction_ns_chi02_sR::synapse0x28ae860() {
   return (neuron0x28b3770()*-0.0598511);
}

double NNfunction_ns_chi02_sR::synapse0x28af1f0() {
   return (neuron0x28b4140()*-0.0108598);
}

double NNfunction_ns_chi02_sR::synapse0x28af230() {
   return (neuron0x28b4b10()*-0.0279286);
}

double NNfunction_ns_chi02_sR::synapse0x28afbc0() {
   return (neuron0x28ad660()*-0.543405);
}

double NNfunction_ns_chi02_sR::synapse0x28afc00() {
   return (neuron0x28ae030()*-1.73965);
}

double NNfunction_ns_chi02_sR::synapse0x28b0590() {
   return (neuron0x28b78a0()*-0.0618468);
}

double NNfunction_ns_chi02_sR::synapse0x28b05d0() {
   return (neuron0x28b8270()*1.16838);
}

double NNfunction_ns_chi02_sR::synapse0x28a4730() {
   return (neuron0x28b8c40()*-0.995705);
}

double NNfunction_ns_chi02_sR::synapse0x28a4770() {
   return (neuron0x28b9610()*-0.162638);
}

double NNfunction_ns_chi02_sR::synapse0x28b2680() {
   return (neuron0x28b9fe0()*0.852526);
}

double NNfunction_ns_chi02_sR::synapse0x28b26c0() {
   return (neuron0x28ba9b0()*0.0226545);
}

double NNfunction_ns_chi02_sR::synapse0x28b3050() {
   return (neuron0x28bb380()*-0.0158817);
}

double NNfunction_ns_chi02_sR::synapse0x28b3090() {
   return (neuron0x28bbd50()*0.0285355);
}

double NNfunction_ns_chi02_sR::synapse0x28b3a20() {
   return (neuron0x28b1de0()*-0.0269471);
}

double NNfunction_ns_chi02_sR::synapse0x28b3a60() {
   return (neuron0x28be930()*-0.112721);
}

double NNfunction_ns_chi02_sR::synapse0x28b43f0() {
   return (neuron0x28bf300()*-0.0419059);
}

double NNfunction_ns_chi02_sR::synapse0x28b4430() {
   return (neuron0x28bfcd0()*0.014642);
}

double NNfunction_ns_chi02_sR::synapse0x28b4dc0() {
   return (neuron0x28c06a0()*-0.630894);
}

double NNfunction_ns_chi02_sR::synapse0x28b4e00() {
   return (neuron0x28c1070()*0.00314692);
}

double NNfunction_ns_chi02_sR::synapse0x28ad910() {
   return (neuron0x28c1a40()*0.0698766);
}

double NNfunction_ns_chi02_sR::synapse0x28ad950() {
   return (neuron0x28c2410()*-0.0166297);
}

double NNfunction_ns_chi02_sR::synapse0x28b71c0() {
   return (neuron0x28c2de0()*0.212555);
}

double NNfunction_ns_chi02_sR::synapse0x28b7200() {
   return (neuron0x28c39c0()*-0.0229414);
}

double NNfunction_ns_chi02_sR::synapse0x28b7b50() {
   return (neuron0x28c4390()*-0.0211392);
}

double NNfunction_ns_chi02_sR::synapse0x28b7b90() {
   return (neuron0x28b5210()*-0.576936);
}

double NNfunction_ns_chi02_sR::synapse0x28b8520() {
   return (neuron0x28b5be0()*-0.971198);
}

double NNfunction_ns_chi02_sR::synapse0x28b8560() {
   return (neuron0x28b65b0()*-0.0143157);
}

double NNfunction_ns_chi02_sR::synapse0x28b8ef0() {
   return (neuron0x28c8bf0()*0.0163969);
}

double NNfunction_ns_chi02_sR::synapse0x28b8f30() {
   return (neuron0x28c94a0()*-1.53011);
}

double NNfunction_ns_chi02_sR::synapse0x28b98c0() {
   return (neuron0x28c9e70()*-0.0138911);
}

double NNfunction_ns_chi02_sR::synapse0x28b9900() {
   return (neuron0x28ca840()*0.025432);
}

double NNfunction_ns_chi02_sR::synapse0x28bc000() {
   return (neuron0x28a67c0()*0.642572);
}

double NNfunction_ns_chi02_sR::synapse0x28bc040() {
   return (neuron0x28a7110()*-0.11242);
}

double NNfunction_ns_chi02_sR::synapse0x28b15c0() {
   return (neuron0x28a7bf0()*6.84063);
}

double NNfunction_ns_chi02_sR::synapse0x28b1600() {
   return (neuron0x28a7690()*-1.86419);
}

double NNfunction_ns_chi02_sR::synapse0x28bebe0() {
   return (neuron0x28a89d0()*0.392829);
}

double NNfunction_ns_chi02_sR::synapse0x28bec20() {
   return (neuron0x28a93a0()*0.0294559);
}

double NNfunction_ns_chi02_sR::synapse0x28bf5b0() {
   return (neuron0x28aa170()*0.163417);
}

double NNfunction_ns_chi02_sR::synapse0x28bf5f0() {
   return (neuron0x28aab40()*-1.51031);
}

double NNfunction_ns_chi02_sR::synapse0x28bff80() {
   return (neuron0x28ab510()*-0.128419);
}

double NNfunction_ns_chi02_sR::synapse0x28bffc0() {
   return (neuron0x28abff0()*-0.00608256);
}

double NNfunction_ns_chi02_sR::synapse0x28c0950() {
   return (neuron0x28ac9c0()*-0.229533);
}

double NNfunction_ns_chi02_sR::synapse0x28c0990() {
   return (neuron0x28a9aa0()*0.511891);
}

double NNfunction_ns_chi02_sR::synapse0x28c1320() {
   return (neuron0x28ae570()*-0.252042);
}

double NNfunction_ns_chi02_sR::synapse0x28c1360() {
   return (neuron0x28aef40()*0.156146);
}

double NNfunction_ns_chi02_sR::synapse0x28c1cf0() {
   return (neuron0x28af910()*-0.335728);
}

double NNfunction_ns_chi02_sR::synapse0x28c1d30() {
   return (neuron0x28b02e0()*-2.51454);
}

double NNfunction_ns_chi02_sR::synapse0x28c26c0() {
   return (neuron0x28b20f0()*0.176608);
}

double NNfunction_ns_chi02_sR::synapse0x28c2700() {
   return (neuron0x28b23d0()*5.35816);
}

double NNfunction_ns_chi02_sR::synapse0x28c3090() {
   return (neuron0x28b2da0()*-0.185033);
}

double NNfunction_ns_chi02_sR::synapse0x28c30d0() {
   return (neuron0x28b3770()*0.326358);
}

double NNfunction_ns_chi02_sR::synapse0x28c3c70() {
   return (neuron0x28b4140()*-0.0377531);
}

double NNfunction_ns_chi02_sR::synapse0x28c3cb0() {
   return (neuron0x28b4b10()*0.120852);
}

double NNfunction_ns_chi02_sR::synapse0x28c4640() {
   return (neuron0x28ad660()*0.0409924);
}

double NNfunction_ns_chi02_sR::synapse0x28c4680() {
   return (neuron0x28ae030()*-6.49537);
}

double NNfunction_ns_chi02_sR::synapse0x28b54c0() {
   return (neuron0x28b78a0()*2.36949);
}

double NNfunction_ns_chi02_sR::synapse0x28b5500() {
   return (neuron0x28b8270()*4.90976);
}

double NNfunction_ns_chi02_sR::synapse0x28b5e90() {
   return (neuron0x28b8c40()*-0.0784892);
}

double NNfunction_ns_chi02_sR::synapse0x28b5ed0() {
   return (neuron0x28b9610()*0.29655);
}

double NNfunction_ns_chi02_sR::synapse0x28b6860() {
   return (neuron0x28b9fe0()*-0.0083555);
}

double NNfunction_ns_chi02_sR::synapse0x28b68a0() {
   return (neuron0x28ba9b0()*-0.181471);
}

double NNfunction_ns_chi02_sR::synapse0x28c8d80() {
   return (neuron0x28bb380()*0.00714913);
}

double NNfunction_ns_chi02_sR::synapse0x28c8dc0() {
   return (neuron0x28bbd50()*-0.0927873);
}

double NNfunction_ns_chi02_sR::synapse0x28c9750() {
   return (neuron0x28b1de0()*0.0196669);
}

double NNfunction_ns_chi02_sR::synapse0x28c9790() {
   return (neuron0x28be930()*0.521123);
}

double NNfunction_ns_chi02_sR::synapse0x28ca120() {
   return (neuron0x28bf300()*-0.0228906);
}

double NNfunction_ns_chi02_sR::synapse0x28ca160() {
   return (neuron0x28bfcd0()*-0.061617);
}

double NNfunction_ns_chi02_sR::synapse0x28caaf0() {
   return (neuron0x28c06a0()*0.0967162);
}

double NNfunction_ns_chi02_sR::synapse0x28cab30() {
   return (neuron0x28c1070()*-0.304868);
}

double NNfunction_ns_chi02_sR::synapse0x28a69e0() {
   return (neuron0x28c1a40()*-0.860557);
}

double NNfunction_ns_chi02_sR::synapse0x28a6a20() {
   return (neuron0x28c2410()*1.76141);
}

double NNfunction_ns_chi02_sR::synapse0x28ba290() {
   return (neuron0x28c2de0()*-0.395272);
}

double NNfunction_ns_chi02_sR::synapse0x28ba2d0() {
   return (neuron0x28c39c0()*-0.0418025);
}

double NNfunction_ns_chi02_sR::synapse0x28cb210() {
   return (neuron0x28c4390()*0.0949919);
}

double NNfunction_ns_chi02_sR::synapse0x28cb250() {
   return (neuron0x28b5210()*-4.56914);
}

double NNfunction_ns_chi02_sR::synapse0x28cb290() {
   return (neuron0x28b5be0()*-1.41368);
}

double NNfunction_ns_chi02_sR::synapse0x28cb2d0() {
   return (neuron0x28b65b0()*-0.00486837);
}

double NNfunction_ns_chi02_sR::synapse0x28d2180() {
   return (neuron0x28c8bf0()*-0.0388022);
}

double NNfunction_ns_chi02_sR::synapse0x28d21c0() {
   return (neuron0x28c94a0()*-1.01784);
}

double NNfunction_ns_chi02_sR::synapse0x28d2200() {
   return (neuron0x28c9e70()*0.113889);
}

double NNfunction_ns_chi02_sR::synapse0x28d2240() {
   return (neuron0x28ca840()*0.117173);
}

double NNfunction_ns_chi02_sR::synapse0x28d25c0() {
   return (neuron0x28a67c0()*1.42132);
}

double NNfunction_ns_chi02_sR::synapse0x28d2600() {
   return (neuron0x28a7110()*-0.0908093);
}

double NNfunction_ns_chi02_sR::synapse0x28d2640() {
   return (neuron0x28a7bf0()*-0.694287);
}

double NNfunction_ns_chi02_sR::synapse0x28d2680() {
   return (neuron0x28a7690()*-6.36926);
}

double NNfunction_ns_chi02_sR::synapse0x28d26c0() {
   return (neuron0x28a89d0()*-1.99757);
}

double NNfunction_ns_chi02_sR::synapse0x28d2700() {
   return (neuron0x28a93a0()*0.204688);
}

double NNfunction_ns_chi02_sR::synapse0x28d2740() {
   return (neuron0x28aa170()*0.0228774);
}

double NNfunction_ns_chi02_sR::synapse0x28d2780() {
   return (neuron0x28aab40()*-2.87222);
}

double NNfunction_ns_chi02_sR::synapse0x28d27c0() {
   return (neuron0x28ab510()*-0.393979);
}

double NNfunction_ns_chi02_sR::synapse0x28d2800() {
   return (neuron0x28abff0()*-0.236596);
}

double NNfunction_ns_chi02_sR::synapse0x28d2840() {
   return (neuron0x28ac9c0()*-0.132986);
}

double NNfunction_ns_chi02_sR::synapse0x28d2880() {
   return (neuron0x28a9aa0()*-0.207607);
}

double NNfunction_ns_chi02_sR::synapse0x28d28c0() {
   return (neuron0x28ae570()*-0.987028);
}

double NNfunction_ns_chi02_sR::synapse0x28d2900() {
   return (neuron0x28aef40()*-0.1542);
}

double NNfunction_ns_chi02_sR::synapse0x28d2940() {
   return (neuron0x28af910()*3.5802);
}

double NNfunction_ns_chi02_sR::synapse0x28d2980() {
   return (neuron0x28b02e0()*0.366144);
}

double NNfunction_ns_chi02_sR::synapse0x28d2410() {
   return (neuron0x28b20f0()*-0.225214);
}

double NNfunction_ns_chi02_sR::synapse0x28d2450() {
   return (neuron0x28b23d0()*-0.905249);
}

double NNfunction_ns_chi02_sR::synapse0x28d2ad0() {
   return (neuron0x28b2da0()*-0.417653);
}

double NNfunction_ns_chi02_sR::synapse0x28d2b10() {
   return (neuron0x28b3770()*0.684619);
}

double NNfunction_ns_chi02_sR::synapse0x28d2b50() {
   return (neuron0x28b4140()*-0.142728);
}

double NNfunction_ns_chi02_sR::synapse0x28d2b90() {
   return (neuron0x28b4b10()*0.251113);
}

double NNfunction_ns_chi02_sR::synapse0x28d2bd0() {
   return (neuron0x28ad660()*-2.84834);
}

double NNfunction_ns_chi02_sR::synapse0x28d2c10() {
   return (neuron0x28ae030()*0.662715);
}

double NNfunction_ns_chi02_sR::synapse0x28d2c50() {
   return (neuron0x28b78a0()*-0.021682);
}

double NNfunction_ns_chi02_sR::synapse0x28d2c90() {
   return (neuron0x28b8270()*-0.618412);
}

double NNfunction_ns_chi02_sR::synapse0x28d2cd0() {
   return (neuron0x28b8c40()*5.71072);
}

double NNfunction_ns_chi02_sR::synapse0x28d2d10() {
   return (neuron0x28b9610()*0.706928);
}

double NNfunction_ns_chi02_sR::synapse0x28d2d50() {
   return (neuron0x28b9fe0()*-5.1973);
}

double NNfunction_ns_chi02_sR::synapse0x28d2d90() {
   return (neuron0x28ba9b0()*0.211485);
}

double NNfunction_ns_chi02_sR::synapse0x28d2dd0() {
   return (neuron0x28bb380()*0.301344);
}

double NNfunction_ns_chi02_sR::synapse0x28d2e10() {
   return (neuron0x28bbd50()*-0.154727);
}

double NNfunction_ns_chi02_sR::synapse0x28d29c0() {
   return (neuron0x28b1de0()*0.184441);
}

double NNfunction_ns_chi02_sR::synapse0x28d2a00() {
   return (neuron0x28be930()*1.30093);
}

double NNfunction_ns_chi02_sR::synapse0x28d2a40() {
   return (neuron0x28bf300()*0.0170136);
}

double NNfunction_ns_chi02_sR::synapse0x28d2a80() {
   return (neuron0x28bfcd0()*0.180469);
}

double NNfunction_ns_chi02_sR::synapse0x28d3060() {
   return (neuron0x28c06a0()*2.64275);
}

double NNfunction_ns_chi02_sR::synapse0x28d30a0() {
   return (neuron0x28c1070()*2.43078);
}

double NNfunction_ns_chi02_sR::synapse0x28d30e0() {
   return (neuron0x28c1a40()*-0.530472);
}

double NNfunction_ns_chi02_sR::synapse0x28d3120() {
   return (neuron0x28c2410()*-2.1266);
}

double NNfunction_ns_chi02_sR::synapse0x28d3160() {
   return (neuron0x28c2de0()*3.16454);
}

double NNfunction_ns_chi02_sR::synapse0x28d31a0() {
   return (neuron0x28c39c0()*0.15036);
}

double NNfunction_ns_chi02_sR::synapse0x28d31e0() {
   return (neuron0x28c4390()*-0.083096);
}

double NNfunction_ns_chi02_sR::synapse0x28d3220() {
   return (neuron0x28b5210()*-0.075355);
}

double NNfunction_ns_chi02_sR::synapse0x28d3260() {
   return (neuron0x28b5be0()*1.3413);
}

double NNfunction_ns_chi02_sR::synapse0x28d32a0() {
   return (neuron0x28b65b0()*-0.0783728);
}

double NNfunction_ns_chi02_sR::synapse0x28d32e0() {
   return (neuron0x28c8bf0()*0.19373);
}

double NNfunction_ns_chi02_sR::synapse0x28d3320() {
   return (neuron0x28c94a0()*-4.03122);
}

double NNfunction_ns_chi02_sR::synapse0x28d3360() {
   return (neuron0x28c9e70()*-0.179451);
}

double NNfunction_ns_chi02_sR::synapse0x28d33a0() {
   return (neuron0x28ca840()*-0.83439);
}

double NNfunction_ns_chi02_sR::synapse0x28d3720() {
   return (neuron0x28a67c0()*-1.57584);
}

double NNfunction_ns_chi02_sR::synapse0x28d3760() {
   return (neuron0x28a7110()*-0.0783691);
}

double NNfunction_ns_chi02_sR::synapse0x28d37a0() {
   return (neuron0x28a7bf0()*-0.362743);
}

double NNfunction_ns_chi02_sR::synapse0x28d37e0() {
   return (neuron0x28a7690()*-4.04617);
}

double NNfunction_ns_chi02_sR::synapse0x28d3820() {
   return (neuron0x28a89d0()*4.62596);
}

double NNfunction_ns_chi02_sR::synapse0x28d3860() {
   return (neuron0x28a93a0()*-0.0223479);
}

double NNfunction_ns_chi02_sR::synapse0x28d38a0() {
   return (neuron0x28aa170()*-0.275295);
}

double NNfunction_ns_chi02_sR::synapse0x28d38e0() {
   return (neuron0x28aab40()*1.73868);
}

double NNfunction_ns_chi02_sR::synapse0x28d3920() {
   return (neuron0x28ab510()*-0.0838194);
}

double NNfunction_ns_chi02_sR::synapse0x28d3960() {
   return (neuron0x28abff0()*0.0898849);
}

double NNfunction_ns_chi02_sR::synapse0x28d39a0() {
   return (neuron0x28ac9c0()*-0.0991548);
}

double NNfunction_ns_chi02_sR::synapse0x28d39e0() {
   return (neuron0x28a9aa0()*0.648288);
}

double NNfunction_ns_chi02_sR::synapse0x28d3a20() {
   return (neuron0x28ae570()*0.650591);
}

double NNfunction_ns_chi02_sR::synapse0x28d3a60() {
   return (neuron0x28aef40()*0.134971);
}

double NNfunction_ns_chi02_sR::synapse0x28d3aa0() {
   return (neuron0x28af910()*-1.04947);
}

double NNfunction_ns_chi02_sR::synapse0x28d3ae0() {
   return (neuron0x28b02e0()*-0.302759);
}

double NNfunction_ns_chi02_sR::synapse0x28d3570() {
   return (neuron0x28b20f0()*-0.0361081);
}

double NNfunction_ns_chi02_sR::synapse0x28d35b0() {
   return (neuron0x28b23d0()*0.847297);
}

double NNfunction_ns_chi02_sR::synapse0x28d3c30() {
   return (neuron0x28b2da0()*0.413472);
}

double NNfunction_ns_chi02_sR::synapse0x28d3c70() {
   return (neuron0x28b3770()*-0.458122);
}

double NNfunction_ns_chi02_sR::synapse0x28d3cb0() {
   return (neuron0x28b4140()*-0.167484);
}

double NNfunction_ns_chi02_sR::synapse0x28d3cf0() {
   return (neuron0x28b4b10()*-0.137905);
}

double NNfunction_ns_chi02_sR::synapse0x28d3d30() {
   return (neuron0x28ad660()*2.00835);
}

double NNfunction_ns_chi02_sR::synapse0x28d3d70() {
   return (neuron0x28ae030()*0.131858);
}

double NNfunction_ns_chi02_sR::synapse0x28d3db0() {
   return (neuron0x28b78a0()*0.441715);
}

double NNfunction_ns_chi02_sR::synapse0x28d3df0() {
   return (neuron0x28b8270()*0.459873);
}

double NNfunction_ns_chi02_sR::synapse0x28d3e30() {
   return (neuron0x28b8c40()*-7.93061);
}

double NNfunction_ns_chi02_sR::synapse0x28d3e70() {
   return (neuron0x28b9610()*-4.06724);
}

double NNfunction_ns_chi02_sR::synapse0x28d3eb0() {
   return (neuron0x28b9fe0()*8.88278);
}

double NNfunction_ns_chi02_sR::synapse0x28d3ef0() {
   return (neuron0x28ba9b0()*-0.022136);
}

double NNfunction_ns_chi02_sR::synapse0x28d3f30() {
   return (neuron0x28bb380()*-0.402978);
}

double NNfunction_ns_chi02_sR::synapse0x28d3f70() {
   return (neuron0x28bbd50()*0.230287);
}

double NNfunction_ns_chi02_sR::synapse0x28d3b20() {
   return (neuron0x28b1de0()*-0.265218);
}

double NNfunction_ns_chi02_sR::synapse0x28d3b60() {
   return (neuron0x28be930()*-2.86347);
}

double NNfunction_ns_chi02_sR::synapse0x28d3ba0() {
   return (neuron0x28bf300()*-0.842324);
}

double NNfunction_ns_chi02_sR::synapse0x28d3be0() {
   return (neuron0x28bfcd0()*-0.351096);
}

double NNfunction_ns_chi02_sR::synapse0x28d41c0() {
   return (neuron0x28c06a0()*-1.44811);
}

double NNfunction_ns_chi02_sR::synapse0x28d4200() {
   return (neuron0x28c1070()*3.18326);
}

double NNfunction_ns_chi02_sR::synapse0x28d4240() {
   return (neuron0x28c1a40()*0.728148);
}

double NNfunction_ns_chi02_sR::synapse0x28d4280() {
   return (neuron0x28c2410()*-0.7075);
}

double NNfunction_ns_chi02_sR::synapse0x28d42c0() {
   return (neuron0x28c2de0()*-1.55549);
}

double NNfunction_ns_chi02_sR::synapse0x28d4300() {
   return (neuron0x28c39c0()*-0.343846);
}

double NNfunction_ns_chi02_sR::synapse0x28d4340() {
   return (neuron0x28c4390()*0.00818484);
}

double NNfunction_ns_chi02_sR::synapse0x28d4380() {
   return (neuron0x28b5210()*0.799392);
}

double NNfunction_ns_chi02_sR::synapse0x28d43c0() {
   return (neuron0x28b5be0()*0.0331113);
}

double NNfunction_ns_chi02_sR::synapse0x28d4400() {
   return (neuron0x28b65b0()*0.283743);
}

double NNfunction_ns_chi02_sR::synapse0x28d4440() {
   return (neuron0x28c8bf0()*-0.130045);
}

double NNfunction_ns_chi02_sR::synapse0x28d4480() {
   return (neuron0x28c94a0()*1.22937);
}

double NNfunction_ns_chi02_sR::synapse0x28d44c0() {
   return (neuron0x28c9e70()*0.0379283);
}

double NNfunction_ns_chi02_sR::synapse0x28d4500() {
   return (neuron0x28ca840()*-7.82961);
}

double NNfunction_ns_chi02_sR::synapse0x28d4880() {
   return (neuron0x28a67c0()*3.4918);
}

double NNfunction_ns_chi02_sR::synapse0x28d48c0() {
   return (neuron0x28a7110()*0.686867);
}

double NNfunction_ns_chi02_sR::synapse0x28d4900() {
   return (neuron0x28a7bf0()*0.802805);
}

double NNfunction_ns_chi02_sR::synapse0x28d4940() {
   return (neuron0x28a7690()*-3.62507);
}

double NNfunction_ns_chi02_sR::synapse0x28d4980() {
   return (neuron0x28a89d0()*-4.45802);
}

double NNfunction_ns_chi02_sR::synapse0x28d49c0() {
   return (neuron0x28a93a0()*0.708026);
}

double NNfunction_ns_chi02_sR::synapse0x28d4a00() {
   return (neuron0x28aa170()*1.62664);
}

double NNfunction_ns_chi02_sR::synapse0x28d4a40() {
   return (neuron0x28aab40()*-1.73351);
}

double NNfunction_ns_chi02_sR::synapse0x28d4a80() {
   return (neuron0x28ab510()*6.07252);
}

double NNfunction_ns_chi02_sR::synapse0x28d4ac0() {
   return (neuron0x28abff0()*-0.672161);
}

double NNfunction_ns_chi02_sR::synapse0x28d4b00() {
   return (neuron0x28ac9c0()*-0.416144);
}

double NNfunction_ns_chi02_sR::synapse0x28d4b40() {
   return (neuron0x28a9aa0()*-2.30622);
}

double NNfunction_ns_chi02_sR::synapse0x28d4b80() {
   return (neuron0x28ae570()*-1.67997);
}

double NNfunction_ns_chi02_sR::synapse0x28d4bc0() {
   return (neuron0x28aef40()*0.427084);
}

double NNfunction_ns_chi02_sR::synapse0x28d4c00() {
   return (neuron0x28af910()*2.27741);
}

double NNfunction_ns_chi02_sR::synapse0x28d4c40() {
   return (neuron0x28b02e0()*3.11063);
}

double NNfunction_ns_chi02_sR::synapse0x28d46d0() {
   return (neuron0x28b20f0()*1.09921);
}

double NNfunction_ns_chi02_sR::synapse0x28d4710() {
   return (neuron0x28b23d0()*-1.34398);
}

double NNfunction_ns_chi02_sR::synapse0x28d4d90() {
   return (neuron0x28b2da0()*-0.777241);
}

double NNfunction_ns_chi02_sR::synapse0x28d4dd0() {
   return (neuron0x28b3770()*0.957188);
}

double NNfunction_ns_chi02_sR::synapse0x28d4e10() {
   return (neuron0x28b4140()*0.929553);
}

double NNfunction_ns_chi02_sR::synapse0x28d4e50() {
   return (neuron0x28b4b10()*0.717687);
}

double NNfunction_ns_chi02_sR::synapse0x28d4e90() {
   return (neuron0x28ad660()*-1.26492);
}

double NNfunction_ns_chi02_sR::synapse0x28d4ed0() {
   return (neuron0x28ae030()*-0.421421);
}

double NNfunction_ns_chi02_sR::synapse0x28d4f10() {
   return (neuron0x28b78a0()*0.0914354);
}

double NNfunction_ns_chi02_sR::synapse0x28d4f50() {
   return (neuron0x28b8270()*-0.496167);
}

double NNfunction_ns_chi02_sR::synapse0x28d4f90() {
   return (neuron0x28b8c40()*5.99397);
}

double NNfunction_ns_chi02_sR::synapse0x28d4fd0() {
   return (neuron0x28b9610()*8.39082);
}

double NNfunction_ns_chi02_sR::synapse0x28d5010() {
   return (neuron0x28b9fe0()*-8.35922);
}

double NNfunction_ns_chi02_sR::synapse0x28d5050() {
   return (neuron0x28ba9b0()*-0.909903);
}

double NNfunction_ns_chi02_sR::synapse0x28d5090() {
   return (neuron0x28bb380()*1.13803);
}

double NNfunction_ns_chi02_sR::synapse0x28d50d0() {
   return (neuron0x28bbd50()*-0.937124);
}

double NNfunction_ns_chi02_sR::synapse0x28d4c80() {
   return (neuron0x28b1de0()*1.04141);
}

double NNfunction_ns_chi02_sR::synapse0x28d4cc0() {
   return (neuron0x28be930()*-2.90166);
}

double NNfunction_ns_chi02_sR::synapse0x28d4d00() {
   return (neuron0x28bf300()*2.08207);
}

double NNfunction_ns_chi02_sR::synapse0x28d4d40() {
   return (neuron0x28bfcd0()*0.903731);
}

double NNfunction_ns_chi02_sR::synapse0x28d5320() {
   return (neuron0x28c06a0()*-1.36515);
}

double NNfunction_ns_chi02_sR::synapse0x28d5360() {
   return (neuron0x28c1070()*2.73518);
}

double NNfunction_ns_chi02_sR::synapse0x28d53a0() {
   return (neuron0x28c1a40()*-1.67008);
}

double NNfunction_ns_chi02_sR::synapse0x28d53e0() {
   return (neuron0x28c2410()*-2.15782);
}

double NNfunction_ns_chi02_sR::synapse0x28d5420() {
   return (neuron0x28c2de0()*2.76776);
}

double NNfunction_ns_chi02_sR::synapse0x28d5460() {
   return (neuron0x28c39c0()*0.875931);
}

double NNfunction_ns_chi02_sR::synapse0x28d54a0() {
   return (neuron0x28c4390()*0.710755);
}

double NNfunction_ns_chi02_sR::synapse0x28d54e0() {
   return (neuron0x28b5210()*-2.59863);
}

double NNfunction_ns_chi02_sR::synapse0x28d5520() {
   return (neuron0x28b5be0()*-0.599181);
}

double NNfunction_ns_chi02_sR::synapse0x28d5560() {
   return (neuron0x28b65b0()*-1.04408);
}

double NNfunction_ns_chi02_sR::synapse0x28d55a0() {
   return (neuron0x28c8bf0()*-0.561936);
}

double NNfunction_ns_chi02_sR::synapse0x28d55e0() {
   return (neuron0x28c94a0()*-3.8381);
}

double NNfunction_ns_chi02_sR::synapse0x28d5620() {
   return (neuron0x28c9e70()*0.736525);
}

double NNfunction_ns_chi02_sR::synapse0x28d5660() {
   return (neuron0x28ca840()*-0.85728);
}

double NNfunction_ns_chi02_sR::synapse0x28d58c0() {
   return (neuron0x28d1a40()*-5.35786);
}

double NNfunction_ns_chi02_sR::synapse0x28d5900() {
   return (neuron0x28d1de0()*-8.66925);
}

double NNfunction_ns_chi02_sR::synapse0x28d5940() {
   return (neuron0x28d2280()*-2.78754);
}

double NNfunction_ns_chi02_sR::synapse0x28d5980() {
   return (neuron0x28d33e0()*-4.93626);
}

double NNfunction_ns_chi02_sR::synapse0x28d59c0() {
   return (neuron0x28d4540()*-5.42263);
}

