#include "NNfunction_ss_cLcL.h"
#include <cmath>

double NNfunction_ss_cLcL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.6812)/15.3902;
   input1 = (in1 - 3.53093)/1158.85;
   input2 = (in2 - 663.745)/620.863;
   input3 = (in3 - -56.9252)/820.894;
   input4 = (in4 - 1058.64)/946.913;
   input5 = (in5 - 894.549)/947.831;
   input6 = (in6 - 901.638)/945.212;
   input7 = (in7 - 924.218)/934.264;
   input8 = (in8 - 925.271)/975.224;
   input9 = (in9 - 895.356)/949.144;
   input10 = (in10 - 998.738)/961.789;
   input11 = (in11 - 726.042)/873.449;
   input12 = (in12 - 189.812)/142.087;
   input13 = (in13 - 499.84)/517.232;
   input14 = (in14 - 719.112)/817.125;
   input15 = (in15 - 712.269)/817.889;
   input16 = (in16 - 529.269)/555.457;
   input17 = (in17 - 761.49)/903.756;
   input18 = (in18 - 762.048)/912.372;
   input19 = (in19 - 802.91)/883.553;
   input20 = (in20 - -3.90636)/484.345;
   input21 = (in21 - 2.87213)/1148.37;
   input22 = (in22 - -0.186382)/1200.31;
   input23 = (in23 - -200.78)/600.717;
   switch(index) {
     case 0:
         return neuron0x30914b0();
     default:
         return 0.;
   }
}

double NNfunction_ss_cLcL::Value(int index, double* input) {
   input0 = (input[0] - 23.6812)/15.3902;
   input1 = (input[1] - 3.53093)/1158.85;
   input2 = (input[2] - 663.745)/620.863;
   input3 = (input[3] - -56.9252)/820.894;
   input4 = (input[4] - 1058.64)/946.913;
   input5 = (input[5] - 894.549)/947.831;
   input6 = (input[6] - 901.638)/945.212;
   input7 = (input[7] - 924.218)/934.264;
   input8 = (input[8] - 925.271)/975.224;
   input9 = (input[9] - 895.356)/949.144;
   input10 = (input[10] - 998.738)/961.789;
   input11 = (input[11] - 726.042)/873.449;
   input12 = (input[12] - 189.812)/142.087;
   input13 = (input[13] - 499.84)/517.232;
   input14 = (input[14] - 719.112)/817.125;
   input15 = (input[15] - 712.269)/817.889;
   input16 = (input[16] - 529.269)/555.457;
   input17 = (input[17] - 761.49)/903.756;
   input18 = (input[18] - 762.048)/912.372;
   input19 = (input[19] - 802.91)/883.553;
   input20 = (input[20] - -3.90636)/484.345;
   input21 = (input[21] - 2.87213)/1148.37;
   input22 = (input[22] - -0.186382)/1200.31;
   input23 = (input[23] - -200.78)/600.717;
   switch(index) {
     case 0:
         return neuron0x30914b0();
     default:
         return 0.;
   }
}

double NNfunction_ss_cLcL::neuron0x305d570() {
   return input0;
}

double NNfunction_ss_cLcL::neuron0x305d8b0() {
   return input1;
}

double NNfunction_ss_cLcL::neuron0x305dbf0() {
   return input2;
}

double NNfunction_ss_cLcL::neuron0x305df30() {
   return input3;
}

double NNfunction_ss_cLcL::neuron0x305e270() {
   return input4;
}

double NNfunction_ss_cLcL::neuron0x305e5b0() {
   return input5;
}

double NNfunction_ss_cLcL::neuron0x305e8f0() {
   return input6;
}

double NNfunction_ss_cLcL::neuron0x305ec30() {
   return input7;
}

double NNfunction_ss_cLcL::neuron0x305ef70() {
   return input8;
}

double NNfunction_ss_cLcL::neuron0x305f2b0() {
   return input9;
}

double NNfunction_ss_cLcL::neuron0x305f5f0() {
   return input10;
}

double NNfunction_ss_cLcL::neuron0x305f930() {
   return input11;
}

double NNfunction_ss_cLcL::neuron0x305fc70() {
   return input12;
}

double NNfunction_ss_cLcL::neuron0x305ffb0() {
   return input13;
}

double NNfunction_ss_cLcL::neuron0x30602f0() {
   return input14;
}

double NNfunction_ss_cLcL::neuron0x3060630() {
   return input15;
}

double NNfunction_ss_cLcL::neuron0x3060970() {
   return input16;
}

double NNfunction_ss_cLcL::neuron0x3060ed0() {
   return input17;
}

double NNfunction_ss_cLcL::neuron0x30610f0() {
   return input18;
}

double NNfunction_ss_cLcL::neuron0x3061430() {
   return input19;
}

double NNfunction_ss_cLcL::neuron0x3061770() {
   return input20;
}

double NNfunction_ss_cLcL::neuron0x3061ab0() {
   return input21;
}

double NNfunction_ss_cLcL::neuron0x3061df0() {
   return input22;
}

double NNfunction_ss_cLcL::neuron0x3062130() {
   return input23;
}

double NNfunction_ss_cLcL::input0x30625d0() {
   double input = 0.547854;
   input += synapse0x2e1d3e0();
   input += synapse0x305d430();
   input += synapse0x305d470();
   input += synapse0x3062880();
   input += synapse0x30628c0();
   input += synapse0x3062900();
   input += synapse0x3062940();
   input += synapse0x3062980();
   input += synapse0x30629c0();
   input += synapse0x3062a00();
   input += synapse0x3062a40();
   input += synapse0x3062a80();
   input += synapse0x3062ac0();
   input += synapse0x3062b00();
   input += synapse0x3062b40();
   input += synapse0x3062b80();
   input += synapse0x305d3a0();
   input += synapse0x305d3e0();
   input += synapse0x2e0ec80();
   input += synapse0x2e0ecc0();
   input += synapse0x3062de0();
   input += synapse0x3062e20();
   input += synapse0x3062e60();
   input += synapse0x3062ea0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x30625d0() {
   double input = input0x30625d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x3062ee0() {
   double input = 0.781692;
   input += synapse0x3063220();
   input += synapse0x3063260();
   input += synapse0x30632a0();
   input += synapse0x30632e0();
   input += synapse0x3063320();
   input += synapse0x3063360();
   input += synapse0x30633a0();
   input += synapse0x30633e0();
   input += synapse0x3063420();
   input += synapse0x3062cd0();
   input += synapse0x3062d10();
   input += synapse0x3062d50();
   input += synapse0x3062d90();
   input += synapse0x3063670();
   input += synapse0x30636b0();
   input += synapse0x30636f0();
   input += synapse0x3063070();
   input += synapse0x30630b0();
   input += synapse0x3063840();
   input += synapse0x3063880();
   input += synapse0x30638c0();
   input += synapse0x3063900();
   input += synapse0x3063940();
   input += synapse0x3063980();
   return input;
}

double NNfunction_ss_cLcL::neuron0x3062ee0() {
   double input = input0x3062ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x30639c0() {
   double input = -1.58454;
   input += synapse0x3063d00();
   input += synapse0x3063d40();
   input += synapse0x3063d80();
   input += synapse0x3063dc0();
   input += synapse0x3063e00();
   input += synapse0x3063e40();
   input += synapse0x3063e80();
   input += synapse0x3063ec0();
   input += synapse0x3063f00();
   input += synapse0x3063f40();
   input += synapse0x3063f80();
   input += synapse0x3063fc0();
   input += synapse0x3064000();
   input += synapse0x3064040();
   input += synapse0x3064080();
   input += synapse0x30640c0();
   input += synapse0x3063b50();
   input += synapse0x3063b90();
   input += synapse0x2e1cad0();
   input += synapse0x2e1cb10();
   input += synapse0x304c600();
   input += synapse0x304c640();
   input += synapse0x304c680();
   input += synapse0x305d4b0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x30639c0() {
   double input = input0x30639c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x2e1d250() {
   double input = -5.65635;
   input += synapse0x3063610();
   input += synapse0x305d4f0();
   input += synapse0x305d530();
   input += synapse0x3064210();
   input += synapse0x3064250();
   input += synapse0x3064290();
   input += synapse0x30642d0();
   input += synapse0x3064310();
   input += synapse0x3064350();
   input += synapse0x3064390();
   input += synapse0x30643d0();
   input += synapse0x3064410();
   input += synapse0x3064450();
   input += synapse0x3064490();
   input += synapse0x30644d0();
   input += synapse0x3064510();
   input += synapse0x3063460();
   input += synapse0x30634a0();
   input += synapse0x3064660();
   input += synapse0x30646a0();
   input += synapse0x30646e0();
   input += synapse0x3064720();
   input += synapse0x3064760();
   input += synapse0x30647a0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x2e1d250() {
   double input = input0x2e1d250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x30647e0() {
   double input = -1.62;
   input += synapse0x3064b20();
   input += synapse0x3064b60();
   input += synapse0x3064ba0();
   input += synapse0x3064be0();
   input += synapse0x3064c20();
   input += synapse0x3064c60();
   input += synapse0x3064ca0();
   input += synapse0x3064ce0();
   input += synapse0x3064d20();
   input += synapse0x3064d60();
   input += synapse0x3064da0();
   input += synapse0x3064de0();
   input += synapse0x3064e20();
   input += synapse0x3064e60();
   input += synapse0x3064ea0();
   input += synapse0x3064ee0();
   input += synapse0x3064970();
   input += synapse0x30649b0();
   input += synapse0x3065030();
   input += synapse0x3065070();
   input += synapse0x30650b0();
   input += synapse0x30650f0();
   input += synapse0x3065130();
   input += synapse0x3065170();
   return input;
}

double NNfunction_ss_cLcL::neuron0x30647e0() {
   double input = input0x30647e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x30651b0() {
   double input = -0.380784;
   input += synapse0x30654f0();
   input += synapse0x3065530();
   input += synapse0x3065570();
   input += synapse0x30655b0();
   input += synapse0x30655f0();
   input += synapse0x3065630();
   input += synapse0x3065670();
   input += synapse0x30656b0();
   input += synapse0x30656f0();
   input += synapse0x2e1ce40();
   input += synapse0x2e1ce80();
   input += synapse0x2e1cec0();
   input += synapse0x2e1cf00();
   input += synapse0x2e1cf40();
   input += synapse0x2e1cf80();
   input += synapse0x2e1cfc0();
   input += synapse0x3065340();
   input += synapse0x3065380();
   input += synapse0x2e1d110();
   input += synapse0x2e1d150();
   input += synapse0x2e1d190();
   input += synapse0x2e1d1d0();
   input += synapse0x2e1d210();
   input += synapse0x3065f40();
   return input;
}

double NNfunction_ss_cLcL::neuron0x30651b0() {
   double input = input0x30651b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x3065f80() {
   double input = 0.270386;
   input += synapse0x30662c0();
   input += synapse0x3066300();
   input += synapse0x3066340();
   input += synapse0x3066380();
   input += synapse0x30663c0();
   input += synapse0x3066400();
   input += synapse0x3066440();
   input += synapse0x3066480();
   input += synapse0x30664c0();
   input += synapse0x3066500();
   input += synapse0x3066540();
   input += synapse0x3066580();
   input += synapse0x30665c0();
   input += synapse0x3066600();
   input += synapse0x3066640();
   input += synapse0x3066680();
   input += synapse0x3066110();
   input += synapse0x3066150();
   input += synapse0x30667d0();
   input += synapse0x3066810();
   input += synapse0x3066850();
   input += synapse0x3066890();
   input += synapse0x30668d0();
   input += synapse0x3066910();
   return input;
}

double NNfunction_ss_cLcL::neuron0x3065f80() {
   double input = input0x3065f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x3066950() {
   double input = -2.59925;
   input += synapse0x3066c90();
   input += synapse0x3066cd0();
   input += synapse0x3066d10();
   input += synapse0x3066d50();
   input += synapse0x3066d90();
   input += synapse0x3066dd0();
   input += synapse0x3066e10();
   input += synapse0x3066e50();
   input += synapse0x3066e90();
   input += synapse0x3066ed0();
   input += synapse0x3066f10();
   input += synapse0x3066f50();
   input += synapse0x3066f90();
   input += synapse0x3066fd0();
   input += synapse0x3067010();
   input += synapse0x3067050();
   input += synapse0x3066ae0();
   input += synapse0x3066b20();
   input += synapse0x30671a0();
   input += synapse0x30671e0();
   input += synapse0x3067220();
   input += synapse0x3067260();
   input += synapse0x30672a0();
   input += synapse0x30672e0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x3066950() {
   double input = input0x3066950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x3067320() {
   double input = -0.607538;
   input += synapse0x3060dc0();
   input += synapse0x3060e00();
   input += synapse0x3060e40();
   input += synapse0x3060e80();
   input += synapse0x3067870();
   input += synapse0x30678b0();
   input += synapse0x30678f0();
   input += synapse0x3067930();
   input += synapse0x3067970();
   input += synapse0x30679b0();
   input += synapse0x30679f0();
   input += synapse0x3067a30();
   input += synapse0x3067a70();
   input += synapse0x3067ab0();
   input += synapse0x3067af0();
   input += synapse0x3067b30();
   input += synapse0x30674b0();
   input += synapse0x30674f0();
   input += synapse0x3067c80();
   input += synapse0x3067cc0();
   input += synapse0x3067d00();
   input += synapse0x3067d40();
   input += synapse0x3067d80();
   input += synapse0x3067dc0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x3067320() {
   double input = input0x3067320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x3067e00() {
   double input = -0.340473;
   input += synapse0x3068140();
   input += synapse0x3068180();
   input += synapse0x30681c0();
   input += synapse0x3068200();
   input += synapse0x3068240();
   input += synapse0x3068280();
   input += synapse0x30682c0();
   input += synapse0x3068300();
   input += synapse0x3068340();
   input += synapse0x3068380();
   input += synapse0x30683c0();
   input += synapse0x3068400();
   input += synapse0x3068440();
   input += synapse0x3068480();
   input += synapse0x30684c0();
   input += synapse0x3068500();
   input += synapse0x3067f90();
   input += synapse0x3067fd0();
   input += synapse0x3068650();
   input += synapse0x3068690();
   input += synapse0x30686d0();
   input += synapse0x3068710();
   input += synapse0x3068750();
   input += synapse0x3068790();
   return input;
}

double NNfunction_ss_cLcL::neuron0x3067e00() {
   double input = input0x3067e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x30687d0() {
   double input = 1.28671;
   input += synapse0x3068b10();
   input += synapse0x3068b50();
   input += synapse0x3068b90();
   input += synapse0x3068bd0();
   input += synapse0x3068c10();
   input += synapse0x3068c50();
   input += synapse0x3068c90();
   input += synapse0x3068cd0();
   input += synapse0x3068d10();
   input += synapse0x3068d50();
   input += synapse0x3068d90();
   input += synapse0x3068dd0();
   input += synapse0x3068e10();
   input += synapse0x3068e50();
   input += synapse0x3068e90();
   input += synapse0x3068ed0();
   input += synapse0x3068960();
   input += synapse0x30689a0();
   input += synapse0x3065730();
   input += synapse0x3065770();
   input += synapse0x30657b0();
   input += synapse0x30657f0();
   input += synapse0x3065830();
   input += synapse0x3065870();
   return input;
}

double NNfunction_ss_cLcL::neuron0x30687d0() {
   double input = input0x30687d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x30658b0() {
   double input = 0.176024;
   input += synapse0x3065bf0();
   input += synapse0x3065c30();
   input += synapse0x3065c70();
   input += synapse0x3065cb0();
   input += synapse0x3065cf0();
   input += synapse0x3065d30();
   input += synapse0x3065d70();
   input += synapse0x3065db0();
   input += synapse0x3065df0();
   input += synapse0x3065e30();
   input += synapse0x3065e70();
   input += synapse0x3065eb0();
   input += synapse0x3065ef0();
   input += synapse0x306a030();
   input += synapse0x306a070();
   input += synapse0x306a0b0();
   input += synapse0x3065a40();
   input += synapse0x3065a80();
   input += synapse0x306a200();
   input += synapse0x306a240();
   input += synapse0x306a280();
   input += synapse0x306a2c0();
   input += synapse0x306a300();
   input += synapse0x306a340();
   return input;
}

double NNfunction_ss_cLcL::neuron0x30658b0() {
   double input = input0x30658b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x306a380() {
   double input = 0.683915;
   input += synapse0x306a6c0();
   input += synapse0x306a700();
   input += synapse0x306a740();
   input += synapse0x306a780();
   input += synapse0x306a7c0();
   input += synapse0x306a800();
   input += synapse0x306a840();
   input += synapse0x306a880();
   input += synapse0x306a8c0();
   input += synapse0x306a900();
   input += synapse0x306a940();
   input += synapse0x306a980();
   input += synapse0x306a9c0();
   input += synapse0x306aa00();
   input += synapse0x306aa40();
   input += synapse0x306aa80();
   input += synapse0x306a510();
   input += synapse0x306a550();
   input += synapse0x306abd0();
   input += synapse0x306ac10();
   input += synapse0x306ac50();
   input += synapse0x306ac90();
   input += synapse0x306acd0();
   input += synapse0x306ad10();
   return input;
}

double NNfunction_ss_cLcL::neuron0x306a380() {
   double input = input0x306a380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x306ad50() {
   double input = 0.749601;
   input += synapse0x306b090();
   input += synapse0x306b0d0();
   input += synapse0x306b110();
   input += synapse0x306b150();
   input += synapse0x306b190();
   input += synapse0x306b1d0();
   input += synapse0x306b210();
   input += synapse0x306b250();
   input += synapse0x306b290();
   input += synapse0x306b2d0();
   input += synapse0x306b310();
   input += synapse0x306b350();
   input += synapse0x306b390();
   input += synapse0x306b3d0();
   input += synapse0x306b410();
   input += synapse0x306b450();
   input += synapse0x306aee0();
   input += synapse0x306af20();
   input += synapse0x306b5a0();
   input += synapse0x306b5e0();
   input += synapse0x306b620();
   input += synapse0x306b660();
   input += synapse0x306b6a0();
   input += synapse0x306b6e0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x306ad50() {
   double input = input0x306ad50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x306b720() {
   double input = -0.19119;
   input += synapse0x306ba60();
   input += synapse0x306baa0();
   input += synapse0x306bae0();
   input += synapse0x306bb20();
   input += synapse0x306bb60();
   input += synapse0x306bba0();
   input += synapse0x306bbe0();
   input += synapse0x306bc20();
   input += synapse0x306bc60();
   input += synapse0x306bca0();
   input += synapse0x306bce0();
   input += synapse0x306bd20();
   input += synapse0x306bd60();
   input += synapse0x306bda0();
   input += synapse0x306bde0();
   input += synapse0x306be20();
   input += synapse0x306b8b0();
   input += synapse0x306b8f0();
   input += synapse0x306bf70();
   input += synapse0x306bfb0();
   input += synapse0x306bff0();
   input += synapse0x306c030();
   input += synapse0x306c070();
   input += synapse0x306c0b0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x306b720() {
   double input = input0x306b720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x306c0f0() {
   double input = 4.47358;
   input += synapse0x306c430();
   input += synapse0x305d790();
   input += synapse0x305d7d0();
   input += synapse0x305dad0();
   input += synapse0x305db10();
   input += synapse0x305de10();
   input += synapse0x305de50();
   input += synapse0x305e150();
   input += synapse0x305e190();
   input += synapse0x305e490();
   input += synapse0x305e4d0();
   input += synapse0x305e7d0();
   input += synapse0x305e810();
   input += synapse0x305eb10();
   input += synapse0x305eb50();
   input += synapse0x305ee50();
   input += synapse0x305ee90();
   input += synapse0x305f190();
   input += synapse0x305f1d0();
   input += synapse0x305f4d0();
   input += synapse0x305f510();
   input += synapse0x305f810();
   input += synapse0x305f850();
   input += synapse0x305fb50();
   return input;
}

double NNfunction_ss_cLcL::neuron0x306c0f0() {
   double input = input0x306c0f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x306df00() {
   double input = -0.442319;
   input += synapse0x305fb90();
   input += synapse0x3060850();
   input += synapse0x3060890();
   input += synapse0x306c280();
   input += synapse0x306c2c0();
   input += synapse0x3060b90();
   input += synapse0x3060bd0();
   input += synapse0x2e0eb60();
   input += synapse0x2e0eba0();
   input += synapse0x3061310();
   input += synapse0x3061350();
   input += synapse0x3061650();
   input += synapse0x3061690();
   input += synapse0x3061990();
   input += synapse0x30619d0();
   input += synapse0x3061cd0();
   input += synapse0x3061d10();
   input += synapse0x3062010();
   input += synapse0x3062050();
   input += synapse0x3062350();
   input += synapse0x3062390();
   input += synapse0x305fe90();
   input += synapse0x305fed0();
   input += synapse0x306e1a0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x306df00() {
   double input = input0x306df00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x306e1e0() {
   double input = 1.23863;
   input += synapse0x306e520();
   input += synapse0x306e560();
   input += synapse0x306e5a0();
   input += synapse0x306e5e0();
   input += synapse0x306e620();
   input += synapse0x306e660();
   input += synapse0x306e6a0();
   input += synapse0x306e6e0();
   input += synapse0x306e720();
   input += synapse0x306e760();
   input += synapse0x306e7a0();
   input += synapse0x306e7e0();
   input += synapse0x306e820();
   input += synapse0x306e860();
   input += synapse0x306e8a0();
   input += synapse0x306e8e0();
   input += synapse0x306e370();
   input += synapse0x306e3b0();
   input += synapse0x306ea30();
   input += synapse0x306ea70();
   input += synapse0x306eab0();
   input += synapse0x306eaf0();
   input += synapse0x306eb30();
   input += synapse0x306eb70();
   return input;
}

double NNfunction_ss_cLcL::neuron0x306e1e0() {
   double input = input0x306e1e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x306ebb0() {
   double input = 4.65206;
   input += synapse0x306eef0();
   input += synapse0x306ef30();
   input += synapse0x306ef70();
   input += synapse0x306efb0();
   input += synapse0x306eff0();
   input += synapse0x306f030();
   input += synapse0x306f070();
   input += synapse0x306f0b0();
   input += synapse0x306f0f0();
   input += synapse0x306f130();
   input += synapse0x306f170();
   input += synapse0x306f1b0();
   input += synapse0x306f1f0();
   input += synapse0x306f230();
   input += synapse0x306f270();
   input += synapse0x306f2b0();
   input += synapse0x306ed40();
   input += synapse0x306ed80();
   input += synapse0x306f400();
   input += synapse0x306f440();
   input += synapse0x306f480();
   input += synapse0x306f4c0();
   input += synapse0x306f500();
   input += synapse0x306f540();
   return input;
}

double NNfunction_ss_cLcL::neuron0x306ebb0() {
   double input = input0x306ebb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x306f580() {
   double input = -0.0238867;
   input += synapse0x306f8c0();
   input += synapse0x306f900();
   input += synapse0x306f940();
   input += synapse0x306f980();
   input += synapse0x306f9c0();
   input += synapse0x306fa00();
   input += synapse0x306fa40();
   input += synapse0x306fa80();
   input += synapse0x306fac0();
   input += synapse0x306fb00();
   input += synapse0x306fb40();
   input += synapse0x306fb80();
   input += synapse0x306fbc0();
   input += synapse0x306fc00();
   input += synapse0x306fc40();
   input += synapse0x306fc80();
   input += synapse0x306f710();
   input += synapse0x306f750();
   input += synapse0x306fdd0();
   input += synapse0x306fe10();
   input += synapse0x306fe50();
   input += synapse0x306fe90();
   input += synapse0x306fed0();
   input += synapse0x306ff10();
   return input;
}

double NNfunction_ss_cLcL::neuron0x306f580() {
   double input = input0x306f580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x306ff50() {
   double input = -2.46386;
   input += synapse0x3070290();
   input += synapse0x30702d0();
   input += synapse0x3070310();
   input += synapse0x3070350();
   input += synapse0x3070390();
   input += synapse0x30703d0();
   input += synapse0x3070410();
   input += synapse0x3070450();
   input += synapse0x3070490();
   input += synapse0x30704d0();
   input += synapse0x3070510();
   input += synapse0x3070550();
   input += synapse0x3070590();
   input += synapse0x30705d0();
   input += synapse0x3070610();
   input += synapse0x3070650();
   input += synapse0x30700e0();
   input += synapse0x3070120();
   input += synapse0x30707a0();
   input += synapse0x30707e0();
   input += synapse0x3070820();
   input += synapse0x3070860();
   input += synapse0x30708a0();
   input += synapse0x30708e0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x306ff50() {
   double input = input0x306ff50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x3070920() {
   double input = 0.764873;
   input += synapse0x3070c60();
   input += synapse0x3070ca0();
   input += synapse0x3070ce0();
   input += synapse0x3070d20();
   input += synapse0x3070d60();
   input += synapse0x3070da0();
   input += synapse0x3070de0();
   input += synapse0x3070e20();
   input += synapse0x3070e60();
   input += synapse0x3069020();
   input += synapse0x3069060();
   input += synapse0x30690a0();
   input += synapse0x30690e0();
   input += synapse0x3069120();
   input += synapse0x3069160();
   input += synapse0x30691a0();
   input += synapse0x3070ab0();
   input += synapse0x3070af0();
   input += synapse0x30692f0();
   input += synapse0x3069330();
   input += synapse0x3069370();
   input += synapse0x30693b0();
   input += synapse0x30693f0();
   input += synapse0x3069430();
   return input;
}

double NNfunction_ss_cLcL::neuron0x3070920() {
   double input = input0x3070920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x3069470() {
   double input = -0.451541;
   input += synapse0x30697b0();
   input += synapse0x30697f0();
   input += synapse0x3069830();
   input += synapse0x3069870();
   input += synapse0x30698b0();
   input += synapse0x30698f0();
   input += synapse0x3069930();
   input += synapse0x3069970();
   input += synapse0x30699b0();
   input += synapse0x30699f0();
   input += synapse0x3069a30();
   input += synapse0x3069a70();
   input += synapse0x3069ab0();
   input += synapse0x3069af0();
   input += synapse0x3069b30();
   input += synapse0x3069b70();
   input += synapse0x3069600();
   input += synapse0x3069640();
   input += synapse0x3069cc0();
   input += synapse0x3069d00();
   input += synapse0x3069d40();
   input += synapse0x3069d80();
   input += synapse0x3069dc0();
   input += synapse0x3069e00();
   return input;
}

double NNfunction_ss_cLcL::neuron0x3069470() {
   double input = input0x3069470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x3069e40() {
   double input = -0.494848;
   input += synapse0x3069fd0();
   input += synapse0x3073060();
   input += synapse0x30730a0();
   input += synapse0x30730e0();
   input += synapse0x3073120();
   input += synapse0x3073160();
   input += synapse0x30731a0();
   input += synapse0x30731e0();
   input += synapse0x3073220();
   input += synapse0x3073260();
   input += synapse0x30732a0();
   input += synapse0x30732e0();
   input += synapse0x3073320();
   input += synapse0x3073360();
   input += synapse0x30733a0();
   input += synapse0x30733e0();
   input += synapse0x3072eb0();
   input += synapse0x3072ef0();
   input += synapse0x3073530();
   input += synapse0x3073570();
   input += synapse0x30735b0();
   input += synapse0x30735f0();
   input += synapse0x3073630();
   input += synapse0x3073670();
   return input;
}

double NNfunction_ss_cLcL::neuron0x3069e40() {
   double input = input0x3069e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x30736b0() {
   double input = -0.419903;
   input += synapse0x30739f0();
   input += synapse0x3073a30();
   input += synapse0x3073a70();
   input += synapse0x3073ab0();
   input += synapse0x3073af0();
   input += synapse0x3073b30();
   input += synapse0x3073b70();
   input += synapse0x3073bb0();
   input += synapse0x3073bf0();
   input += synapse0x3073c30();
   input += synapse0x3073c70();
   input += synapse0x3073cb0();
   input += synapse0x3073cf0();
   input += synapse0x3073d30();
   input += synapse0x3073d70();
   input += synapse0x3073db0();
   input += synapse0x3073840();
   input += synapse0x3073880();
   input += synapse0x3073f00();
   input += synapse0x3073f40();
   input += synapse0x3073f80();
   input += synapse0x3073fc0();
   input += synapse0x3074000();
   input += synapse0x3074040();
   return input;
}

double NNfunction_ss_cLcL::neuron0x30736b0() {
   double input = input0x30736b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x3074080() {
   double input = -1.05579;
   input += synapse0x30743c0();
   input += synapse0x3074400();
   input += synapse0x3074440();
   input += synapse0x3074480();
   input += synapse0x30744c0();
   input += synapse0x3074500();
   input += synapse0x3074540();
   input += synapse0x3074580();
   input += synapse0x30745c0();
   input += synapse0x3074600();
   input += synapse0x3074640();
   input += synapse0x3074680();
   input += synapse0x30746c0();
   input += synapse0x3074700();
   input += synapse0x3074740();
   input += synapse0x3074780();
   input += synapse0x3074210();
   input += synapse0x3074250();
   input += synapse0x30748d0();
   input += synapse0x3074910();
   input += synapse0x3074950();
   input += synapse0x3074990();
   input += synapse0x30749d0();
   input += synapse0x3074a10();
   return input;
}

double NNfunction_ss_cLcL::neuron0x3074080() {
   double input = input0x3074080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x3074a50() {
   double input = 0.424063;
   input += synapse0x3074d90();
   input += synapse0x3074dd0();
   input += synapse0x3074e10();
   input += synapse0x3074e50();
   input += synapse0x3074e90();
   input += synapse0x3074ed0();
   input += synapse0x3074f10();
   input += synapse0x3074f50();
   input += synapse0x3074f90();
   input += synapse0x3074fd0();
   input += synapse0x3075010();
   input += synapse0x3075050();
   input += synapse0x3075090();
   input += synapse0x30750d0();
   input += synapse0x3075110();
   input += synapse0x3075150();
   input += synapse0x3074be0();
   input += synapse0x3074c20();
   input += synapse0x30752a0();
   input += synapse0x30752e0();
   input += synapse0x3075320();
   input += synapse0x3075360();
   input += synapse0x30753a0();
   input += synapse0x30753e0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x3074a50() {
   double input = input0x3074a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x3075420() {
   double input = 1.59329;
   input += synapse0x3075760();
   input += synapse0x30757a0();
   input += synapse0x30757e0();
   input += synapse0x3075820();
   input += synapse0x3075860();
   input += synapse0x30758a0();
   input += synapse0x30758e0();
   input += synapse0x3075920();
   input += synapse0x3075960();
   input += synapse0x30759a0();
   input += synapse0x30759e0();
   input += synapse0x3075a20();
   input += synapse0x3075a60();
   input += synapse0x3075aa0();
   input += synapse0x3075ae0();
   input += synapse0x3075b20();
   input += synapse0x30755b0();
   input += synapse0x30755f0();
   input += synapse0x3075c70();
   input += synapse0x3075cb0();
   input += synapse0x3075cf0();
   input += synapse0x3075d30();
   input += synapse0x3075d70();
   input += synapse0x3075db0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x3075420() {
   double input = input0x3075420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x3075df0() {
   double input = -1.35235;
   input += synapse0x3076130();
   input += synapse0x3076170();
   input += synapse0x30761b0();
   input += synapse0x30761f0();
   input += synapse0x3076230();
   input += synapse0x3076270();
   input += synapse0x30762b0();
   input += synapse0x30762f0();
   input += synapse0x3076330();
   input += synapse0x3076370();
   input += synapse0x30763b0();
   input += synapse0x30763f0();
   input += synapse0x3076430();
   input += synapse0x3076470();
   input += synapse0x30764b0();
   input += synapse0x30764f0();
   input += synapse0x3075f80();
   input += synapse0x3075fc0();
   input += synapse0x3076640();
   input += synapse0x3076680();
   input += synapse0x30766c0();
   input += synapse0x3076700();
   input += synapse0x3076740();
   input += synapse0x3076780();
   return input;
}

double NNfunction_ss_cLcL::neuron0x3075df0() {
   double input = input0x3075df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x30767c0() {
   double input = 0.573705;
   input += synapse0x3076b00();
   input += synapse0x3076b40();
   input += synapse0x3076b80();
   input += synapse0x3076bc0();
   input += synapse0x3076c00();
   input += synapse0x3076c40();
   input += synapse0x3076c80();
   input += synapse0x3076cc0();
   input += synapse0x3076d00();
   input += synapse0x3076d40();
   input += synapse0x3076d80();
   input += synapse0x3076dc0();
   input += synapse0x3076e00();
   input += synapse0x3076e40();
   input += synapse0x3076e80();
   input += synapse0x3076ec0();
   input += synapse0x3076950();
   input += synapse0x3076990();
   input += synapse0x3077010();
   input += synapse0x3077050();
   input += synapse0x3077090();
   input += synapse0x30770d0();
   input += synapse0x3077110();
   input += synapse0x3077150();
   return input;
}

double NNfunction_ss_cLcL::neuron0x30767c0() {
   double input = input0x30767c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x3077190() {
   double input = 0.995026;
   input += synapse0x30774d0();
   input += synapse0x3077510();
   input += synapse0x3077550();
   input += synapse0x3077590();
   input += synapse0x30775d0();
   input += synapse0x3077610();
   input += synapse0x3077650();
   input += synapse0x3077690();
   input += synapse0x30776d0();
   input += synapse0x3077710();
   input += synapse0x3077750();
   input += synapse0x3077790();
   input += synapse0x30777d0();
   input += synapse0x3077810();
   input += synapse0x3077850();
   input += synapse0x3077890();
   input += synapse0x3077320();
   input += synapse0x3077360();
   input += synapse0x30779e0();
   input += synapse0x3077a20();
   input += synapse0x3077a60();
   input += synapse0x3077aa0();
   input += synapse0x3077ae0();
   input += synapse0x3077b20();
   return input;
}

double NNfunction_ss_cLcL::neuron0x3077190() {
   double input = input0x3077190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x3077b60() {
   double input = 1.68326;
   input += synapse0x3077ea0();
   input += synapse0x306c470();
   input += synapse0x306c4b0();
   input += synapse0x306c4f0();
   input += synapse0x306c740();
   input += synapse0x306c780();
   input += synapse0x306c7c0();
   input += synapse0x306ca10();
   input += synapse0x306ca50();
   input += synapse0x306cca0();
   input += synapse0x306cce0();
   input += synapse0x306cd20();
   input += synapse0x306cf70();
   input += synapse0x306cfb0();
   input += synapse0x306d200();
   input += synapse0x306d240();
   input += synapse0x3077cf0();
   input += synapse0x3077d30();
   input += synapse0x306d390();
   input += synapse0x306d8a0();
   input += synapse0x306d8e0();
   input += synapse0x306d920();
   input += synapse0x306db70();
   input += synapse0x306dbb0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x3077b60() {
   double input = input0x3077b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x306dbf0() {
   double input = -0.042026;
   input += synapse0x306d460();
   input += synapse0x306d4a0();
   input += synapse0x306d4e0();
   input += synapse0x306d520();
   input += synapse0x306dea0();
   input += synapse0x307a1f0();
   input += synapse0x307a230();
   input += synapse0x307a270();
   input += synapse0x307a2b0();
   input += synapse0x307a2f0();
   input += synapse0x307a330();
   input += synapse0x307a370();
   input += synapse0x307a3b0();
   input += synapse0x307a3f0();
   input += synapse0x307a430();
   input += synapse0x307a470();
   input += synapse0x306dd80();
   input += synapse0x306ddc0();
   input += synapse0x307a5c0();
   input += synapse0x307a600();
   input += synapse0x307a640();
   input += synapse0x307a680();
   input += synapse0x307a6c0();
   input += synapse0x307a700();
   return input;
}

double NNfunction_ss_cLcL::neuron0x306dbf0() {
   double input = input0x306dbf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x307a740() {
   double input = 0.307009;
   input += synapse0x307aa80();
   input += synapse0x307aac0();
   input += synapse0x307ab00();
   input += synapse0x307ab40();
   input += synapse0x307ab80();
   input += synapse0x307abc0();
   input += synapse0x307ac00();
   input += synapse0x307ac40();
   input += synapse0x307ac80();
   input += synapse0x307acc0();
   input += synapse0x307ad00();
   input += synapse0x307ad40();
   input += synapse0x307ad80();
   input += synapse0x307adc0();
   input += synapse0x307ae00();
   input += synapse0x307ae40();
   input += synapse0x307a8d0();
   input += synapse0x307a910();
   input += synapse0x307af90();
   input += synapse0x307afd0();
   input += synapse0x307b010();
   input += synapse0x307b050();
   input += synapse0x307b090();
   input += synapse0x307b0d0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x307a740() {
   double input = input0x307a740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x307b110() {
   double input = 0.707581;
   input += synapse0x307b450();
   input += synapse0x307b490();
   input += synapse0x307b4d0();
   input += synapse0x307b510();
   input += synapse0x307b550();
   input += synapse0x307b590();
   input += synapse0x307b5d0();
   input += synapse0x307b610();
   input += synapse0x307b650();
   input += synapse0x307b690();
   input += synapse0x307b6d0();
   input += synapse0x307b710();
   input += synapse0x307b750();
   input += synapse0x307b790();
   input += synapse0x307b7d0();
   input += synapse0x307b810();
   input += synapse0x307b2a0();
   input += synapse0x307b2e0();
   input += synapse0x307b960();
   input += synapse0x307b9a0();
   input += synapse0x307b9e0();
   input += synapse0x307ba20();
   input += synapse0x307ba60();
   input += synapse0x307baa0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x307b110() {
   double input = input0x307b110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x307bae0() {
   double input = -0.71982;
   input += synapse0x307be20();
   input += synapse0x307be60();
   input += synapse0x307bea0();
   input += synapse0x307bee0();
   input += synapse0x307bf20();
   input += synapse0x307bf60();
   input += synapse0x307bfa0();
   input += synapse0x307bfe0();
   input += synapse0x307c020();
   input += synapse0x307c060();
   input += synapse0x307c0a0();
   input += synapse0x307c0e0();
   input += synapse0x307c120();
   input += synapse0x307c160();
   input += synapse0x307c1a0();
   input += synapse0x307c1e0();
   input += synapse0x307bc70();
   input += synapse0x307bcb0();
   input += synapse0x307c330();
   input += synapse0x307c370();
   input += synapse0x307c3b0();
   input += synapse0x307c3f0();
   input += synapse0x307c430();
   input += synapse0x307c470();
   return input;
}

double NNfunction_ss_cLcL::neuron0x307bae0() {
   double input = input0x307bae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x307c4b0() {
   double input = -1.70235;
   input += synapse0x307c7f0();
   input += synapse0x307c830();
   input += synapse0x307c870();
   input += synapse0x307c8b0();
   input += synapse0x307c8f0();
   input += synapse0x307c930();
   input += synapse0x307c970();
   input += synapse0x307c9b0();
   input += synapse0x307c9f0();
   input += synapse0x307ca30();
   input += synapse0x307ca70();
   input += synapse0x307cab0();
   input += synapse0x307caf0();
   input += synapse0x307cb30();
   input += synapse0x307cb70();
   input += synapse0x307cbb0();
   input += synapse0x307c640();
   input += synapse0x307c680();
   input += synapse0x307cd00();
   input += synapse0x307cd40();
   input += synapse0x307cd80();
   input += synapse0x307cdc0();
   input += synapse0x307ce00();
   input += synapse0x307ce40();
   return input;
}

double NNfunction_ss_cLcL::neuron0x307c4b0() {
   double input = input0x307c4b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x307ce80() {
   double input = 1.36055;
   input += synapse0x307d1c0();
   input += synapse0x307d200();
   input += synapse0x307d240();
   input += synapse0x307d280();
   input += synapse0x307d2c0();
   input += synapse0x307d300();
   input += synapse0x307d340();
   input += synapse0x307d380();
   input += synapse0x307d3c0();
   input += synapse0x307d400();
   input += synapse0x307d440();
   input += synapse0x307d480();
   input += synapse0x307d4c0();
   input += synapse0x307d500();
   input += synapse0x307d540();
   input += synapse0x307d580();
   input += synapse0x307d010();
   input += synapse0x307d050();
   input += synapse0x307d6d0();
   input += synapse0x307d710();
   input += synapse0x307d750();
   input += synapse0x307d790();
   input += synapse0x307d7d0();
   input += synapse0x307d810();
   return input;
}

double NNfunction_ss_cLcL::neuron0x307ce80() {
   double input = input0x307ce80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x307d850() {
   double input = -0.480699;
   input += synapse0x307db90();
   input += synapse0x307dbd0();
   input += synapse0x307dc10();
   input += synapse0x307dc50();
   input += synapse0x307dc90();
   input += synapse0x307dcd0();
   input += synapse0x307dd10();
   input += synapse0x307dd50();
   input += synapse0x307dd90();
   input += synapse0x307ddd0();
   input += synapse0x307de10();
   input += synapse0x307de50();
   input += synapse0x307de90();
   input += synapse0x307ded0();
   input += synapse0x307df10();
   input += synapse0x307df50();
   input += synapse0x307d9e0();
   input += synapse0x307da20();
   input += synapse0x307e0a0();
   input += synapse0x307e0e0();
   input += synapse0x307e120();
   input += synapse0x307e160();
   input += synapse0x307e1a0();
   input += synapse0x307e1e0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x307d850() {
   double input = input0x307d850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x307e220() {
   double input = -0.541644;
   input += synapse0x307e560();
   input += synapse0x307e5a0();
   input += synapse0x307e5e0();
   input += synapse0x307e620();
   input += synapse0x307e660();
   input += synapse0x307e6a0();
   input += synapse0x307e6e0();
   input += synapse0x307e720();
   input += synapse0x307e760();
   input += synapse0x307e7a0();
   input += synapse0x307e7e0();
   input += synapse0x307e820();
   input += synapse0x307e860();
   input += synapse0x307e8a0();
   input += synapse0x307e8e0();
   input += synapse0x307e920();
   input += synapse0x307e3b0();
   input += synapse0x307e3f0();
   input += synapse0x307ea70();
   input += synapse0x307eab0();
   input += synapse0x307eaf0();
   input += synapse0x307eb30();
   input += synapse0x307eb70();
   input += synapse0x307ebb0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x307e220() {
   double input = input0x307e220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x307ebf0() {
   double input = 2.4066;
   input += synapse0x3067660();
   input += synapse0x30676a0();
   input += synapse0x30676e0();
   input += synapse0x3067720();
   input += synapse0x3067760();
   input += synapse0x30677a0();
   input += synapse0x30677e0();
   input += synapse0x3067820();
   input += synapse0x307f340();
   input += synapse0x307f380();
   input += synapse0x307f3c0();
   input += synapse0x307f400();
   input += synapse0x307f440();
   input += synapse0x307f480();
   input += synapse0x307f4c0();
   input += synapse0x307f500();
   input += synapse0x307ed80();
   input += synapse0x307edc0();
   input += synapse0x307f650();
   input += synapse0x307f690();
   input += synapse0x307f6d0();
   input += synapse0x307f710();
   input += synapse0x307f750();
   input += synapse0x307f790();
   return input;
}

double NNfunction_ss_cLcL::neuron0x307ebf0() {
   double input = input0x307ebf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x307f7d0() {
   double input = 1.3136;
   input += synapse0x307fb10();
   input += synapse0x307fb50();
   input += synapse0x307fb90();
   input += synapse0x307fbd0();
   input += synapse0x307fc10();
   input += synapse0x307fc50();
   input += synapse0x307fc90();
   input += synapse0x307fcd0();
   input += synapse0x307fd10();
   input += synapse0x307fd50();
   input += synapse0x307fd90();
   input += synapse0x307fdd0();
   input += synapse0x307fe10();
   input += synapse0x307fe50();
   input += synapse0x307fe90();
   input += synapse0x307fed0();
   input += synapse0x307f960();
   input += synapse0x307f9a0();
   input += synapse0x3080020();
   input += synapse0x3080060();
   input += synapse0x30800a0();
   input += synapse0x30800e0();
   input += synapse0x3080120();
   input += synapse0x3080160();
   return input;
}

double NNfunction_ss_cLcL::neuron0x307f7d0() {
   double input = input0x307f7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x30801a0() {
   double input = -1.52322;
   input += synapse0x30804e0();
   input += synapse0x3080520();
   input += synapse0x3080560();
   input += synapse0x30805a0();
   input += synapse0x30805e0();
   input += synapse0x3080620();
   input += synapse0x3080660();
   input += synapse0x30806a0();
   input += synapse0x30806e0();
   input += synapse0x3080720();
   input += synapse0x3080760();
   input += synapse0x30807a0();
   input += synapse0x30807e0();
   input += synapse0x3080820();
   input += synapse0x3080860();
   input += synapse0x30808a0();
   input += synapse0x3080330();
   input += synapse0x3080370();
   input += synapse0x3070ea0();
   input += synapse0x3070ee0();
   input += synapse0x3070f20();
   input += synapse0x3070f60();
   input += synapse0x3070fa0();
   input += synapse0x3070fe0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x30801a0() {
   double input = input0x30801a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x3071020() {
   double input = 2.55962;
   input += synapse0x3071360();
   input += synapse0x30713a0();
   input += synapse0x30713e0();
   input += synapse0x3071420();
   input += synapse0x3071460();
   input += synapse0x30714a0();
   input += synapse0x30714e0();
   input += synapse0x3071520();
   input += synapse0x3071560();
   input += synapse0x30715a0();
   input += synapse0x30715e0();
   input += synapse0x3071620();
   input += synapse0x3071660();
   input += synapse0x30716a0();
   input += synapse0x30716e0();
   input += synapse0x3071720();
   input += synapse0x30711b0();
   input += synapse0x30711f0();
   input += synapse0x3071870();
   input += synapse0x30718b0();
   input += synapse0x30718f0();
   input += synapse0x3071930();
   input += synapse0x3071970();
   input += synapse0x30719b0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x3071020() {
   double input = input0x3071020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x30719f0() {
   double input = 0.11904;
   input += synapse0x3071d30();
   input += synapse0x3071d70();
   input += synapse0x3071db0();
   input += synapse0x3071df0();
   input += synapse0x3071e30();
   input += synapse0x3071e70();
   input += synapse0x3071eb0();
   input += synapse0x3071ef0();
   input += synapse0x3071f30();
   input += synapse0x3071f70();
   input += synapse0x3071fb0();
   input += synapse0x3071ff0();
   input += synapse0x3072030();
   input += synapse0x3072070();
   input += synapse0x30720b0();
   input += synapse0x30720f0();
   input += synapse0x3071b80();
   input += synapse0x3071bc0();
   input += synapse0x3072240();
   input += synapse0x3072280();
   input += synapse0x30722c0();
   input += synapse0x3072300();
   input += synapse0x3072340();
   input += synapse0x3072380();
   return input;
}

double NNfunction_ss_cLcL::neuron0x30719f0() {
   double input = input0x30719f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x30723c0() {
   double input = -0.49887;
   input += synapse0x3072700();
   input += synapse0x3072740();
   input += synapse0x3072780();
   input += synapse0x30727c0();
   input += synapse0x3072800();
   input += synapse0x3072840();
   input += synapse0x3072880();
   input += synapse0x30728c0();
   input += synapse0x3072900();
   input += synapse0x3072940();
   input += synapse0x3072980();
   input += synapse0x30729c0();
   input += synapse0x3072a00();
   input += synapse0x3072a40();
   input += synapse0x3072a80();
   input += synapse0x3072ac0();
   input += synapse0x3072550();
   input += synapse0x3072590();
   input += synapse0x3072c10();
   input += synapse0x3072c50();
   input += synapse0x3072c90();
   input += synapse0x3072cd0();
   input += synapse0x3072d10();
   input += synapse0x3072d50();
   return input;
}

double NNfunction_ss_cLcL::neuron0x30723c0() {
   double input = input0x30723c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x3084a00() {
   double input = 1.23666;
   input += synapse0x3084c20();
   input += synapse0x3084c60();
   input += synapse0x3084ca0();
   input += synapse0x3084ce0();
   input += synapse0x3084d20();
   input += synapse0x3084d60();
   input += synapse0x3084da0();
   input += synapse0x3084de0();
   input += synapse0x3084e20();
   input += synapse0x3084e60();
   input += synapse0x3084ea0();
   input += synapse0x3084ee0();
   input += synapse0x3084f20();
   input += synapse0x3084f60();
   input += synapse0x3084fa0();
   input += synapse0x3084fe0();
   input += synapse0x3072d90();
   input += synapse0x3072dd0();
   input += synapse0x3085130();
   input += synapse0x3085170();
   input += synapse0x30851b0();
   input += synapse0x30851f0();
   input += synapse0x3085230();
   input += synapse0x3085270();
   return input;
}

double NNfunction_ss_cLcL::neuron0x3084a00() {
   double input = input0x3084a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x30852b0() {
   double input = 0.897963;
   input += synapse0x30855f0();
   input += synapse0x3085630();
   input += synapse0x3085670();
   input += synapse0x30856b0();
   input += synapse0x30856f0();
   input += synapse0x3085730();
   input += synapse0x3085770();
   input += synapse0x30857b0();
   input += synapse0x30857f0();
   input += synapse0x3085830();
   input += synapse0x3085870();
   input += synapse0x30858b0();
   input += synapse0x30858f0();
   input += synapse0x3085930();
   input += synapse0x3085970();
   input += synapse0x30859b0();
   input += synapse0x3085440();
   input += synapse0x3085480();
   input += synapse0x3085b00();
   input += synapse0x3085b40();
   input += synapse0x3085b80();
   input += synapse0x3085bc0();
   input += synapse0x3085c00();
   input += synapse0x3085c40();
   return input;
}

double NNfunction_ss_cLcL::neuron0x30852b0() {
   double input = input0x30852b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x3085c80() {
   double input = 1.5776;
   input += synapse0x3085fc0();
   input += synapse0x3086000();
   input += synapse0x3086040();
   input += synapse0x3086080();
   input += synapse0x30860c0();
   input += synapse0x3086100();
   input += synapse0x3086140();
   input += synapse0x3086180();
   input += synapse0x30861c0();
   input += synapse0x3086200();
   input += synapse0x3086240();
   input += synapse0x3086280();
   input += synapse0x30862c0();
   input += synapse0x3086300();
   input += synapse0x3086340();
   input += synapse0x3086380();
   input += synapse0x3085e10();
   input += synapse0x3085e50();
   input += synapse0x30864d0();
   input += synapse0x3086510();
   input += synapse0x3086550();
   input += synapse0x3086590();
   input += synapse0x30865d0();
   input += synapse0x3086610();
   return input;
}

double NNfunction_ss_cLcL::neuron0x3085c80() {
   double input = input0x3085c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x3086650() {
   double input = 3.7973;
   input += synapse0x3086990();
   input += synapse0x30869d0();
   input += synapse0x3086a10();
   input += synapse0x3086a50();
   input += synapse0x3086a90();
   input += synapse0x3086ad0();
   input += synapse0x3086b10();
   input += synapse0x3086b50();
   input += synapse0x3086b90();
   input += synapse0x3086bd0();
   input += synapse0x3086c10();
   input += synapse0x3086c50();
   input += synapse0x3086c90();
   input += synapse0x3086cd0();
   input += synapse0x3086d10();
   input += synapse0x3086d50();
   input += synapse0x30867e0();
   input += synapse0x3086820();
   input += synapse0x3086ea0();
   input += synapse0x3086ee0();
   input += synapse0x3086f20();
   input += synapse0x3086f60();
   input += synapse0x3086fa0();
   input += synapse0x3086fe0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x3086650() {
   double input = input0x3086650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x308d850() {
   double input = 0.216483;
   input += synapse0x3063580();
   input += synapse0x30635c0();
   input += synapse0x3064a90();
   input += synapse0x3064ad0();
   input += synapse0x3065460();
   input += synapse0x30654a0();
   input += synapse0x3066230();
   input += synapse0x3066270();
   input += synapse0x3066c00();
   input += synapse0x3066c40();
   input += synapse0x30675d0();
   input += synapse0x3067610();
   input += synapse0x30680b0();
   input += synapse0x30680f0();
   input += synapse0x3068a80();
   input += synapse0x3068ac0();
   input += synapse0x3065b60();
   input += synapse0x3065ba0();
   input += synapse0x306a630();
   input += synapse0x306a670();
   input += synapse0x306b000();
   input += synapse0x306b040();
   input += synapse0x306b9d0();
   input += synapse0x306ba10();
   input += synapse0x306c3a0();
   input += synapse0x306c3e0();
   input += synapse0x3060510();
   input += synapse0x3060550();
   input += synapse0x306e490();
   input += synapse0x306e4d0();
   input += synapse0x306ee60();
   input += synapse0x306eea0();
   input += synapse0x306f830();
   input += synapse0x306f870();
   input += synapse0x3070200();
   input += synapse0x3070240();
   input += synapse0x3070bd0();
   input += synapse0x3070c10();
   input += synapse0x3069720();
   input += synapse0x3069760();
   input += synapse0x3072fd0();
   input += synapse0x3073010();
   input += synapse0x3073960();
   input += synapse0x30739a0();
   input += synapse0x3074330();
   input += synapse0x3074370();
   input += synapse0x3074d00();
   input += synapse0x3074d40();
   input += synapse0x30756d0();
   input += synapse0x3075710();
   return input;
}

double NNfunction_ss_cLcL::neuron0x308d850() {
   double input = input0x308d850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x308dbf0() {
   double input = 0.458219;
   input += synapse0x3077e10();
   input += synapse0x3077e50();
   input += synapse0x306d3d0();
   input += synapse0x306d410();
   input += synapse0x307a9f0();
   input += synapse0x307aa30();
   input += synapse0x307b3c0();
   input += synapse0x307b400();
   input += synapse0x307bd90();
   input += synapse0x307bdd0();
   input += synapse0x307c760();
   input += synapse0x307c7a0();
   input += synapse0x307d130();
   input += synapse0x307d170();
   input += synapse0x307db00();
   input += synapse0x307db40();
   input += synapse0x307e4d0();
   input += synapse0x307e510();
   input += synapse0x307eea0();
   input += synapse0x307eee0();
   input += synapse0x307fa80();
   input += synapse0x307fac0();
   input += synapse0x3080450();
   input += synapse0x3080490();
   input += synapse0x30712d0();
   input += synapse0x3071310();
   input += synapse0x3071ca0();
   input += synapse0x3071ce0();
   input += synapse0x3072670();
   input += synapse0x30726b0();
   input += synapse0x3084b90();
   input += synapse0x3084bd0();
   input += synapse0x3085560();
   input += synapse0x30855a0();
   input += synapse0x3085f30();
   input += synapse0x3085f70();
   input += synapse0x3086900();
   input += synapse0x3086940();
   input += synapse0x30627f0();
   input += synapse0x3062830();
   input += synapse0x30760a0();
   input += synapse0x30760e0();
   input += synapse0x3087020();
   input += synapse0x3087060();
   input += synapse0x30870a0();
   input += synapse0x30870e0();
   input += synapse0x308df90();
   input += synapse0x308dfd0();
   input += synapse0x308e010();
   input += synapse0x308e050();
   return input;
}

double NNfunction_ss_cLcL::neuron0x308dbf0() {
   double input = input0x308dbf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x308e090() {
   double input = -0.018112;
   input += synapse0x308e3d0();
   input += synapse0x308e410();
   input += synapse0x308e450();
   input += synapse0x308e490();
   input += synapse0x308e4d0();
   input += synapse0x308e510();
   input += synapse0x308e550();
   input += synapse0x308e590();
   input += synapse0x308e5d0();
   input += synapse0x308e610();
   input += synapse0x308e650();
   input += synapse0x308e690();
   input += synapse0x308e6d0();
   input += synapse0x308e710();
   input += synapse0x308e750();
   input += synapse0x308e790();
   input += synapse0x308e220();
   input += synapse0x308e260();
   input += synapse0x308e8e0();
   input += synapse0x308e920();
   input += synapse0x308e960();
   input += synapse0x308e9a0();
   input += synapse0x308e9e0();
   input += synapse0x308ea20();
   input += synapse0x308ea60();
   input += synapse0x308eaa0();
   input += synapse0x308eae0();
   input += synapse0x308eb20();
   input += synapse0x308eb60();
   input += synapse0x308eba0();
   input += synapse0x308ebe0();
   input += synapse0x308ec20();
   input += synapse0x308e7d0();
   input += synapse0x308e810();
   input += synapse0x308e850();
   input += synapse0x308e890();
   input += synapse0x308ee70();
   input += synapse0x308eeb0();
   input += synapse0x308eef0();
   input += synapse0x308ef30();
   input += synapse0x308ef70();
   input += synapse0x308efb0();
   input += synapse0x308eff0();
   input += synapse0x308f030();
   input += synapse0x308f070();
   input += synapse0x308f0b0();
   input += synapse0x308f0f0();
   input += synapse0x308f130();
   input += synapse0x308f170();
   input += synapse0x308f1b0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x308e090() {
   double input = input0x308e090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x308f1f0() {
   double input = 0.107521;
   input += synapse0x308f530();
   input += synapse0x308f570();
   input += synapse0x308f5b0();
   input += synapse0x308f5f0();
   input += synapse0x308f630();
   input += synapse0x308f670();
   input += synapse0x308f6b0();
   input += synapse0x308f6f0();
   input += synapse0x308f730();
   input += synapse0x308f770();
   input += synapse0x308f7b0();
   input += synapse0x308f7f0();
   input += synapse0x308f830();
   input += synapse0x308f870();
   input += synapse0x308f8b0();
   input += synapse0x308f8f0();
   input += synapse0x308f380();
   input += synapse0x308f3c0();
   input += synapse0x308fa40();
   input += synapse0x308fa80();
   input += synapse0x308fac0();
   input += synapse0x308fb00();
   input += synapse0x308fb40();
   input += synapse0x308fb80();
   input += synapse0x308fbc0();
   input += synapse0x308fc00();
   input += synapse0x308fc40();
   input += synapse0x308fc80();
   input += synapse0x308fcc0();
   input += synapse0x308fd00();
   input += synapse0x308fd40();
   input += synapse0x308fd80();
   input += synapse0x308f930();
   input += synapse0x308f970();
   input += synapse0x308f9b0();
   input += synapse0x308f9f0();
   input += synapse0x308ffd0();
   input += synapse0x3090010();
   input += synapse0x3090050();
   input += synapse0x3090090();
   input += synapse0x30900d0();
   input += synapse0x3090110();
   input += synapse0x3090150();
   input += synapse0x3090190();
   input += synapse0x30901d0();
   input += synapse0x3090210();
   input += synapse0x3090250();
   input += synapse0x3090290();
   input += synapse0x30902d0();
   input += synapse0x3090310();
   return input;
}

double NNfunction_ss_cLcL::neuron0x308f1f0() {
   double input = input0x308f1f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x3090350() {
   double input = -0.429181;
   input += synapse0x3090690();
   input += synapse0x30906d0();
   input += synapse0x3090710();
   input += synapse0x3090750();
   input += synapse0x3090790();
   input += synapse0x30907d0();
   input += synapse0x3090810();
   input += synapse0x3090850();
   input += synapse0x3090890();
   input += synapse0x30908d0();
   input += synapse0x3090910();
   input += synapse0x3090950();
   input += synapse0x3090990();
   input += synapse0x30909d0();
   input += synapse0x3090a10();
   input += synapse0x3090a50();
   input += synapse0x30904e0();
   input += synapse0x3090520();
   input += synapse0x3090ba0();
   input += synapse0x3090be0();
   input += synapse0x3090c20();
   input += synapse0x3090c60();
   input += synapse0x3090ca0();
   input += synapse0x3090ce0();
   input += synapse0x3090d20();
   input += synapse0x3090d60();
   input += synapse0x3090da0();
   input += synapse0x3090de0();
   input += synapse0x3090e20();
   input += synapse0x3090e60();
   input += synapse0x3090ea0();
   input += synapse0x3090ee0();
   input += synapse0x3090a90();
   input += synapse0x3090ad0();
   input += synapse0x3090b10();
   input += synapse0x3090b50();
   input += synapse0x3091130();
   input += synapse0x3091170();
   input += synapse0x30911b0();
   input += synapse0x30911f0();
   input += synapse0x3091230();
   input += synapse0x3091270();
   input += synapse0x30912b0();
   input += synapse0x30912f0();
   input += synapse0x3091330();
   input += synapse0x3091370();
   input += synapse0x30913b0();
   input += synapse0x30913f0();
   input += synapse0x3091430();
   input += synapse0x3091470();
   return input;
}

double NNfunction_ss_cLcL::neuron0x3090350() {
   double input = input0x3090350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x30914b0() {
   double input = 15.8246;
   input += synapse0x3062590();
   input += synapse0x30916d0();
   input += synapse0x3091710();
   input += synapse0x3091750();
   input += synapse0x3091790();
   return input;
}

double NNfunction_ss_cLcL::neuron0x30914b0() {
   double input = input0x30914b0();
   return (input * 1)+0;
}

double NNfunction_ss_cLcL::synapse0x2e1d3e0() {
   return (neuron0x305d570()*-0.630989);
}

double NNfunction_ss_cLcL::synapse0x305d430() {
   return (neuron0x305d8b0()*-0.140785);
}

double NNfunction_ss_cLcL::synapse0x305d470() {
   return (neuron0x305dbf0()*-0.465376);
}

double NNfunction_ss_cLcL::synapse0x3062880() {
   return (neuron0x305df30()*-0.560587);
}

double NNfunction_ss_cLcL::synapse0x30628c0() {
   return (neuron0x305e270()*0.372522);
}

double NNfunction_ss_cLcL::synapse0x3062900() {
   return (neuron0x305e5b0()*-0.413491);
}

double NNfunction_ss_cLcL::synapse0x3062940() {
   return (neuron0x305e8f0()*-0.922112);
}

double NNfunction_ss_cLcL::synapse0x3062980() {
   return (neuron0x305ec30()*-0.169759);
}

double NNfunction_ss_cLcL::synapse0x30629c0() {
   return (neuron0x305ef70()*0.384923);
}

double NNfunction_ss_cLcL::synapse0x3062a00() {
   return (neuron0x305f2b0()*0.15936);
}

double NNfunction_ss_cLcL::synapse0x3062a40() {
   return (neuron0x305f5f0()*-0.0113526);
}

double NNfunction_ss_cLcL::synapse0x3062a80() {
   return (neuron0x305f930()*-0.156432);
}

double NNfunction_ss_cLcL::synapse0x3062ac0() {
   return (neuron0x305fc70()*-0.496487);
}

double NNfunction_ss_cLcL::synapse0x3062b00() {
   return (neuron0x305ffb0()*-0.0359424);
}

double NNfunction_ss_cLcL::synapse0x3062b40() {
   return (neuron0x30602f0()*-0.200073);
}

double NNfunction_ss_cLcL::synapse0x3062b80() {
   return (neuron0x3060630()*-0.0545942);
}

double NNfunction_ss_cLcL::synapse0x305d3a0() {
   return (neuron0x3060970()*-0.502118);
}

double NNfunction_ss_cLcL::synapse0x305d3e0() {
   return (neuron0x3060ed0()*-0.00576466);
}

double NNfunction_ss_cLcL::synapse0x2e0ec80() {
   return (neuron0x30610f0()*0.0583828);
}

double NNfunction_ss_cLcL::synapse0x2e0ecc0() {
   return (neuron0x3061430()*-1.24407);
}

double NNfunction_ss_cLcL::synapse0x3062de0() {
   return (neuron0x3061770()*0.061782);
}

double NNfunction_ss_cLcL::synapse0x3062e20() {
   return (neuron0x3061ab0()*-0.058779);
}

double NNfunction_ss_cLcL::synapse0x3062e60() {
   return (neuron0x3061df0()*0.0157344);
}

double NNfunction_ss_cLcL::synapse0x3062ea0() {
   return (neuron0x3062130()*0.0484921);
}

double NNfunction_ss_cLcL::synapse0x3063220() {
   return (neuron0x305d570()*-0.175221);
}

double NNfunction_ss_cLcL::synapse0x3063260() {
   return (neuron0x305d8b0()*0.0738194);
}

double NNfunction_ss_cLcL::synapse0x30632a0() {
   return (neuron0x305dbf0()*0.234838);
}

double NNfunction_ss_cLcL::synapse0x30632e0() {
   return (neuron0x305df30()*0.639761);
}

double NNfunction_ss_cLcL::synapse0x3063320() {
   return (neuron0x305e270()*-0.104855);
}

double NNfunction_ss_cLcL::synapse0x3063360() {
   return (neuron0x305e5b0()*-0.00810426);
}

double NNfunction_ss_cLcL::synapse0x30633a0() {
   return (neuron0x305e8f0()*-0.146046);
}

double NNfunction_ss_cLcL::synapse0x30633e0() {
   return (neuron0x305ec30()*0.0178752);
}

double NNfunction_ss_cLcL::synapse0x3063420() {
   return (neuron0x305ef70()*0.0734372);
}

double NNfunction_ss_cLcL::synapse0x3062cd0() {
   return (neuron0x305f2b0()*0.0367306);
}

double NNfunction_ss_cLcL::synapse0x3062d10() {
   return (neuron0x305f5f0()*0.100192);
}

double NNfunction_ss_cLcL::synapse0x3062d50() {
   return (neuron0x305f930()*-0.305334);
}

double NNfunction_ss_cLcL::synapse0x3062d90() {
   return (neuron0x305fc70()*-0.448615);
}

double NNfunction_ss_cLcL::synapse0x3063670() {
   return (neuron0x305ffb0()*-0.0227898);
}

double NNfunction_ss_cLcL::synapse0x30636b0() {
   return (neuron0x30602f0()*0.69779);
}

double NNfunction_ss_cLcL::synapse0x30636f0() {
   return (neuron0x3060630()*-0.450912);
}

double NNfunction_ss_cLcL::synapse0x3063070() {
   return (neuron0x3060970()*-0.186914);
}

double NNfunction_ss_cLcL::synapse0x30630b0() {
   return (neuron0x3060ed0()*0.0311376);
}

double NNfunction_ss_cLcL::synapse0x3063840() {
   return (neuron0x30610f0()*0.168659);
}

double NNfunction_ss_cLcL::synapse0x3063880() {
   return (neuron0x3061430()*0.238862);
}

double NNfunction_ss_cLcL::synapse0x30638c0() {
   return (neuron0x3061770()*-0.10028);
}

double NNfunction_ss_cLcL::synapse0x3063900() {
   return (neuron0x3061ab0()*-0.080147);
}

double NNfunction_ss_cLcL::synapse0x3063940() {
   return (neuron0x3061df0()*-0.132068);
}

double NNfunction_ss_cLcL::synapse0x3063980() {
   return (neuron0x3062130()*0.0446834);
}

double NNfunction_ss_cLcL::synapse0x3063d00() {
   return (neuron0x305d570()*-0.00495246);
}

double NNfunction_ss_cLcL::synapse0x3063d40() {
   return (neuron0x305d8b0()*-0.0458469);
}

double NNfunction_ss_cLcL::synapse0x3063d80() {
   return (neuron0x305dbf0()*0.0759675);
}

double NNfunction_ss_cLcL::synapse0x3063dc0() {
   return (neuron0x305df30()*5.35096);
}

double NNfunction_ss_cLcL::synapse0x3063e00() {
   return (neuron0x305e270()*-0.0213453);
}

double NNfunction_ss_cLcL::synapse0x3063e40() {
   return (neuron0x305e5b0()*-0.0170783);
}

double NNfunction_ss_cLcL::synapse0x3063e80() {
   return (neuron0x305e8f0()*-0.00594401);
}

double NNfunction_ss_cLcL::synapse0x3063ec0() {
   return (neuron0x305ec30()*0.00033278);
}

double NNfunction_ss_cLcL::synapse0x3063f00() {
   return (neuron0x305ef70()*0.00225066);
}

double NNfunction_ss_cLcL::synapse0x3063f40() {
   return (neuron0x305f2b0()*-0.0145437);
}

double NNfunction_ss_cLcL::synapse0x3063f80() {
   return (neuron0x305f5f0()*-0.00461992);
}

double NNfunction_ss_cLcL::synapse0x3063fc0() {
   return (neuron0x305f930()*-0.0206788);
}

double NNfunction_ss_cLcL::synapse0x3064000() {
   return (neuron0x305fc70()*0.653609);
}

double NNfunction_ss_cLcL::synapse0x3064040() {
   return (neuron0x305ffb0()*-0.002376);
}

double NNfunction_ss_cLcL::synapse0x3064080() {
   return (neuron0x30602f0()*0.0304707);
}

double NNfunction_ss_cLcL::synapse0x30640c0() {
   return (neuron0x3060630()*0.000591567);
}

double NNfunction_ss_cLcL::synapse0x3063b50() {
   return (neuron0x3060970()*0.0226881);
}

double NNfunction_ss_cLcL::synapse0x3063b90() {
   return (neuron0x3060ed0()*-0.0661924);
}

double NNfunction_ss_cLcL::synapse0x2e1cad0() {
   return (neuron0x30610f0()*-0.0146434);
}

double NNfunction_ss_cLcL::synapse0x2e1cb10() {
   return (neuron0x3061430()*-0.0331683);
}

double NNfunction_ss_cLcL::synapse0x304c600() {
   return (neuron0x3061770()*0.000707221);
}

double NNfunction_ss_cLcL::synapse0x304c640() {
   return (neuron0x3061ab0()*-0.030831);
}

double NNfunction_ss_cLcL::synapse0x304c680() {
   return (neuron0x3061df0()*-0.0172907);
}

double NNfunction_ss_cLcL::synapse0x305d4b0() {
   return (neuron0x3062130()*-0.000834046);
}

double NNfunction_ss_cLcL::synapse0x3063610() {
   return (neuron0x305d570()*0.0753536);
}

double NNfunction_ss_cLcL::synapse0x305d4f0() {
   return (neuron0x305d8b0()*0.0328229);
}

double NNfunction_ss_cLcL::synapse0x305d530() {
   return (neuron0x305dbf0()*0.0562982);
}

double NNfunction_ss_cLcL::synapse0x3064210() {
   return (neuron0x305df30()*2.95282);
}

double NNfunction_ss_cLcL::synapse0x3064250() {
   return (neuron0x305e270()*0.0179915);
}

double NNfunction_ss_cLcL::synapse0x3064290() {
   return (neuron0x305e5b0()*-0.0548413);
}

double NNfunction_ss_cLcL::synapse0x30642d0() {
   return (neuron0x305e8f0()*0.0685906);
}

double NNfunction_ss_cLcL::synapse0x3064310() {
   return (neuron0x305ec30()*0.215092);
}

double NNfunction_ss_cLcL::synapse0x3064350() {
   return (neuron0x305ef70()*0.126671);
}

double NNfunction_ss_cLcL::synapse0x3064390() {
   return (neuron0x305f2b0()*0.0534689);
}

double NNfunction_ss_cLcL::synapse0x30643d0() {
   return (neuron0x305f5f0()*-0.0496996);
}

double NNfunction_ss_cLcL::synapse0x3064410() {
   return (neuron0x305f930()*0.101995);
}

double NNfunction_ss_cLcL::synapse0x3064450() {
   return (neuron0x305fc70()*0.253815);
}

double NNfunction_ss_cLcL::synapse0x3064490() {
   return (neuron0x305ffb0()*-0.0201303);
}

double NNfunction_ss_cLcL::synapse0x30644d0() {
   return (neuron0x30602f0()*0.0418653);
}

double NNfunction_ss_cLcL::synapse0x3064510() {
   return (neuron0x3060630()*-0.248595);
}

double NNfunction_ss_cLcL::synapse0x3063460() {
   return (neuron0x3060970()*0.169525);
}

double NNfunction_ss_cLcL::synapse0x30634a0() {
   return (neuron0x3060ed0()*-0.10314);
}

double NNfunction_ss_cLcL::synapse0x3064660() {
   return (neuron0x30610f0()*0.139051);
}

double NNfunction_ss_cLcL::synapse0x30646a0() {
   return (neuron0x3061430()*0.00967715);
}

double NNfunction_ss_cLcL::synapse0x30646e0() {
   return (neuron0x3061770()*-0.00416256);
}

double NNfunction_ss_cLcL::synapse0x3064720() {
   return (neuron0x3061ab0()*0.0390642);
}

double NNfunction_ss_cLcL::synapse0x3064760() {
   return (neuron0x3061df0()*0.0565695);
}

double NNfunction_ss_cLcL::synapse0x30647a0() {
   return (neuron0x3062130()*-0.136348);
}

double NNfunction_ss_cLcL::synapse0x3064b20() {
   return (neuron0x305d570()*-0.180768);
}

double NNfunction_ss_cLcL::synapse0x3064b60() {
   return (neuron0x305d8b0()*0.359616);
}

double NNfunction_ss_cLcL::synapse0x3064ba0() {
   return (neuron0x305dbf0()*-1.41381);
}

double NNfunction_ss_cLcL::synapse0x3064be0() {
   return (neuron0x305df30()*-0.643662);
}

double NNfunction_ss_cLcL::synapse0x3064c20() {
   return (neuron0x305e270()*-0.0803588);
}

double NNfunction_ss_cLcL::synapse0x3064c60() {
   return (neuron0x305e5b0()*0.461729);
}

double NNfunction_ss_cLcL::synapse0x3064ca0() {
   return (neuron0x305e8f0()*0.258573);
}

double NNfunction_ss_cLcL::synapse0x3064ce0() {
   return (neuron0x305ec30()*0.694366);
}

double NNfunction_ss_cLcL::synapse0x3064d20() {
   return (neuron0x305ef70()*0.241868);
}

double NNfunction_ss_cLcL::synapse0x3064d60() {
   return (neuron0x305f2b0()*0.456292);
}

double NNfunction_ss_cLcL::synapse0x3064da0() {
   return (neuron0x305f5f0()*0.149443);
}

double NNfunction_ss_cLcL::synapse0x3064de0() {
   return (neuron0x305f930()*0.466143);
}

double NNfunction_ss_cLcL::synapse0x3064e20() {
   return (neuron0x305fc70()*0.337552);
}

double NNfunction_ss_cLcL::synapse0x3064e60() {
   return (neuron0x305ffb0()*0.434388);
}

double NNfunction_ss_cLcL::synapse0x3064ea0() {
   return (neuron0x30602f0()*-0.261074);
}

double NNfunction_ss_cLcL::synapse0x3064ee0() {
   return (neuron0x3060630()*-0.147179);
}

double NNfunction_ss_cLcL::synapse0x3064970() {
   return (neuron0x3060970()*0.633733);
}

double NNfunction_ss_cLcL::synapse0x30649b0() {
   return (neuron0x3060ed0()*0.884643);
}

double NNfunction_ss_cLcL::synapse0x3065030() {
   return (neuron0x30610f0()*0.442202);
}

double NNfunction_ss_cLcL::synapse0x3065070() {
   return (neuron0x3061430()*0.372263);
}

double NNfunction_ss_cLcL::synapse0x30650b0() {
   return (neuron0x3061770()*-0.431265);
}

double NNfunction_ss_cLcL::synapse0x30650f0() {
   return (neuron0x3061ab0()*0.0261061);
}

double NNfunction_ss_cLcL::synapse0x3065130() {
   return (neuron0x3061df0()*-0.543189);
}

double NNfunction_ss_cLcL::synapse0x3065170() {
   return (neuron0x3062130()*0.00426503);
}

double NNfunction_ss_cLcL::synapse0x30654f0() {
   return (neuron0x305d570()*0.156256);
}

double NNfunction_ss_cLcL::synapse0x3065530() {
   return (neuron0x305d8b0()*-0.398552);
}

double NNfunction_ss_cLcL::synapse0x3065570() {
   return (neuron0x305dbf0()*0.753625);
}

double NNfunction_ss_cLcL::synapse0x30655b0() {
   return (neuron0x305df30()*0.345374);
}

double NNfunction_ss_cLcL::synapse0x30655f0() {
   return (neuron0x305e270()*-0.174944);
}

double NNfunction_ss_cLcL::synapse0x3065630() {
   return (neuron0x305e5b0()*0.365953);
}

double NNfunction_ss_cLcL::synapse0x3065670() {
   return (neuron0x305e8f0()*-0.821038);
}

double NNfunction_ss_cLcL::synapse0x30656b0() {
   return (neuron0x305ec30()*0.346849);
}

double NNfunction_ss_cLcL::synapse0x30656f0() {
   return (neuron0x305ef70()*-0.242514);
}

double NNfunction_ss_cLcL::synapse0x2e1ce40() {
   return (neuron0x305f2b0()*-0.0858885);
}

double NNfunction_ss_cLcL::synapse0x2e1ce80() {
   return (neuron0x305f5f0()*0.377712);
}

double NNfunction_ss_cLcL::synapse0x2e1cec0() {
   return (neuron0x305f930()*0.134431);
}

double NNfunction_ss_cLcL::synapse0x2e1cf00() {
   return (neuron0x305fc70()*0.526452);
}

double NNfunction_ss_cLcL::synapse0x2e1cf40() {
   return (neuron0x305ffb0()*0.216427);
}

double NNfunction_ss_cLcL::synapse0x2e1cf80() {
   return (neuron0x30602f0()*0.716399);
}

double NNfunction_ss_cLcL::synapse0x2e1cfc0() {
   return (neuron0x3060630()*0.045803);
}

double NNfunction_ss_cLcL::synapse0x3065340() {
   return (neuron0x3060970()*0.0826996);
}

double NNfunction_ss_cLcL::synapse0x3065380() {
   return (neuron0x3060ed0()*0.181576);
}

double NNfunction_ss_cLcL::synapse0x2e1d110() {
   return (neuron0x30610f0()*-0.129036);
}

double NNfunction_ss_cLcL::synapse0x2e1d150() {
   return (neuron0x3061430()*0.466479);
}

double NNfunction_ss_cLcL::synapse0x2e1d190() {
   return (neuron0x3061770()*0.175059);
}

double NNfunction_ss_cLcL::synapse0x2e1d1d0() {
   return (neuron0x3061ab0()*-0.187269);
}

double NNfunction_ss_cLcL::synapse0x2e1d210() {
   return (neuron0x3061df0()*0.0738574);
}

double NNfunction_ss_cLcL::synapse0x3065f40() {
   return (neuron0x3062130()*-0.131144);
}

double NNfunction_ss_cLcL::synapse0x30662c0() {
   return (neuron0x305d570()*0.846755);
}

double NNfunction_ss_cLcL::synapse0x3066300() {
   return (neuron0x305d8b0()*-0.5176);
}

double NNfunction_ss_cLcL::synapse0x3066340() {
   return (neuron0x305dbf0()*0.18608);
}

double NNfunction_ss_cLcL::synapse0x3066380() {
   return (neuron0x305df30()*0.279318);
}

double NNfunction_ss_cLcL::synapse0x30663c0() {
   return (neuron0x305e270()*1.01479);
}

double NNfunction_ss_cLcL::synapse0x3066400() {
   return (neuron0x305e5b0()*0.87851);
}

double NNfunction_ss_cLcL::synapse0x3066440() {
   return (neuron0x305e8f0()*0.541869);
}

double NNfunction_ss_cLcL::synapse0x3066480() {
   return (neuron0x305ec30()*0.752023);
}

double NNfunction_ss_cLcL::synapse0x30664c0() {
   return (neuron0x305ef70()*-0.258363);
}

double NNfunction_ss_cLcL::synapse0x3066500() {
   return (neuron0x305f2b0()*-0.7179);
}

double NNfunction_ss_cLcL::synapse0x3066540() {
   return (neuron0x305f5f0()*0.802451);
}

double NNfunction_ss_cLcL::synapse0x3066580() {
   return (neuron0x305f930()*0.525996);
}

double NNfunction_ss_cLcL::synapse0x30665c0() {
   return (neuron0x305fc70()*1.12756);
}

double NNfunction_ss_cLcL::synapse0x3066600() {
   return (neuron0x305ffb0()*-0.0362794);
}

double NNfunction_ss_cLcL::synapse0x3066640() {
   return (neuron0x30602f0()*0.617562);
}

double NNfunction_ss_cLcL::synapse0x3066680() {
   return (neuron0x3060630()*0.642632);
}

double NNfunction_ss_cLcL::synapse0x3066110() {
   return (neuron0x3060970()*-0.233577);
}

double NNfunction_ss_cLcL::synapse0x3066150() {
   return (neuron0x3060ed0()*0.240804);
}

double NNfunction_ss_cLcL::synapse0x30667d0() {
   return (neuron0x30610f0()*0.624572);
}

double NNfunction_ss_cLcL::synapse0x3066810() {
   return (neuron0x3061430()*-0.361318);
}

double NNfunction_ss_cLcL::synapse0x3066850() {
   return (neuron0x3061770()*-0.458781);
}

double NNfunction_ss_cLcL::synapse0x3066890() {
   return (neuron0x3061ab0()*0.0253066);
}

double NNfunction_ss_cLcL::synapse0x30668d0() {
   return (neuron0x3061df0()*0.37742);
}

double NNfunction_ss_cLcL::synapse0x3066910() {
   return (neuron0x3062130()*-0.598754);
}

double NNfunction_ss_cLcL::synapse0x3066c90() {
   return (neuron0x305d570()*0.030992);
}

double NNfunction_ss_cLcL::synapse0x3066cd0() {
   return (neuron0x305d8b0()*-0.00278612);
}

double NNfunction_ss_cLcL::synapse0x3066d10() {
   return (neuron0x305dbf0()*-0.0537803);
}

double NNfunction_ss_cLcL::synapse0x3066d50() {
   return (neuron0x305df30()*-4.79565);
}

double NNfunction_ss_cLcL::synapse0x3066d90() {
   return (neuron0x305e270()*-0.0478589);
}

double NNfunction_ss_cLcL::synapse0x3066dd0() {
   return (neuron0x305e5b0()*-0.0647682);
}

double NNfunction_ss_cLcL::synapse0x3066e10() {
   return (neuron0x305e8f0()*0.0123853);
}

double NNfunction_ss_cLcL::synapse0x3066e50() {
   return (neuron0x305ec30()*0.0030119);
}

double NNfunction_ss_cLcL::synapse0x3066e90() {
   return (neuron0x305ef70()*-0.047758);
}

double NNfunction_ss_cLcL::synapse0x3066ed0() {
   return (neuron0x305f2b0()*-0.0193929);
}

double NNfunction_ss_cLcL::synapse0x3066f10() {
   return (neuron0x305f5f0()*0.0615511);
}

double NNfunction_ss_cLcL::synapse0x3066f50() {
   return (neuron0x305f930()*0.105048);
}

double NNfunction_ss_cLcL::synapse0x3066f90() {
   return (neuron0x305fc70()*0.513257);
}

double NNfunction_ss_cLcL::synapse0x3066fd0() {
   return (neuron0x305ffb0()*0.0526931);
}

double NNfunction_ss_cLcL::synapse0x3067010() {
   return (neuron0x30602f0()*0.0144161);
}

double NNfunction_ss_cLcL::synapse0x3067050() {
   return (neuron0x3060630()*0.0335809);
}

double NNfunction_ss_cLcL::synapse0x3066ae0() {
   return (neuron0x3060970()*0.0234047);
}

double NNfunction_ss_cLcL::synapse0x3066b20() {
   return (neuron0x3060ed0()*0.028629);
}

double NNfunction_ss_cLcL::synapse0x30671a0() {
   return (neuron0x30610f0()*0.0778169);
}

double NNfunction_ss_cLcL::synapse0x30671e0() {
   return (neuron0x3061430()*0.0352583);
}

double NNfunction_ss_cLcL::synapse0x3067220() {
   return (neuron0x3061770()*-0.0414208);
}

double NNfunction_ss_cLcL::synapse0x3067260() {
   return (neuron0x3061ab0()*0.0332481);
}

double NNfunction_ss_cLcL::synapse0x30672a0() {
   return (neuron0x3061df0()*-0.0574293);
}

double NNfunction_ss_cLcL::synapse0x30672e0() {
   return (neuron0x3062130()*0.0154316);
}

double NNfunction_ss_cLcL::synapse0x3060dc0() {
   return (neuron0x305d570()*0.722216);
}

double NNfunction_ss_cLcL::synapse0x3060e00() {
   return (neuron0x305d8b0()*-0.126888);
}

double NNfunction_ss_cLcL::synapse0x3060e40() {
   return (neuron0x305dbf0()*0.0827298);
}

double NNfunction_ss_cLcL::synapse0x3060e80() {
   return (neuron0x305df30()*-0.374346);
}

double NNfunction_ss_cLcL::synapse0x3067870() {
   return (neuron0x305e270()*0.479384);
}

double NNfunction_ss_cLcL::synapse0x30678b0() {
   return (neuron0x305e5b0()*-0.229139);
}

double NNfunction_ss_cLcL::synapse0x30678f0() {
   return (neuron0x305e8f0()*-0.487037);
}

double NNfunction_ss_cLcL::synapse0x3067930() {
   return (neuron0x305ec30()*0.369469);
}

double NNfunction_ss_cLcL::synapse0x3067970() {
   return (neuron0x305ef70()*-0.696968);
}

double NNfunction_ss_cLcL::synapse0x30679b0() {
   return (neuron0x305f2b0()*-0.318699);
}

double NNfunction_ss_cLcL::synapse0x30679f0() {
   return (neuron0x305f5f0()*-0.0988343);
}

double NNfunction_ss_cLcL::synapse0x3067a30() {
   return (neuron0x305f930()*0.684284);
}

double NNfunction_ss_cLcL::synapse0x3067a70() {
   return (neuron0x305fc70()*-0.0828064);
}

double NNfunction_ss_cLcL::synapse0x3067ab0() {
   return (neuron0x305ffb0()*0.712354);
}

double NNfunction_ss_cLcL::synapse0x3067af0() {
   return (neuron0x30602f0()*0.302982);
}

double NNfunction_ss_cLcL::synapse0x3067b30() {
   return (neuron0x3060630()*0.292885);
}

double NNfunction_ss_cLcL::synapse0x30674b0() {
   return (neuron0x3060970()*-1.02789);
}

double NNfunction_ss_cLcL::synapse0x30674f0() {
   return (neuron0x3060ed0()*1.34235);
}

double NNfunction_ss_cLcL::synapse0x3067c80() {
   return (neuron0x30610f0()*0.170485);
}

double NNfunction_ss_cLcL::synapse0x3067cc0() {
   return (neuron0x3061430()*-0.0801696);
}

double NNfunction_ss_cLcL::synapse0x3067d00() {
   return (neuron0x3061770()*-0.594411);
}

double NNfunction_ss_cLcL::synapse0x3067d40() {
   return (neuron0x3061ab0()*-0.789946);
}

double NNfunction_ss_cLcL::synapse0x3067d80() {
   return (neuron0x3061df0()*0.623069);
}

double NNfunction_ss_cLcL::synapse0x3067dc0() {
   return (neuron0x3062130()*-0.631329);
}

double NNfunction_ss_cLcL::synapse0x3068140() {
   return (neuron0x305d570()*-0.0623335);
}

double NNfunction_ss_cLcL::synapse0x3068180() {
   return (neuron0x305d8b0()*0.421479);
}

double NNfunction_ss_cLcL::synapse0x30681c0() {
   return (neuron0x305dbf0()*1.16312);
}

double NNfunction_ss_cLcL::synapse0x3068200() {
   return (neuron0x305df30()*-0.569196);
}

double NNfunction_ss_cLcL::synapse0x3068240() {
   return (neuron0x305e270()*-0.246685);
}

double NNfunction_ss_cLcL::synapse0x3068280() {
   return (neuron0x305e5b0()*0.222655);
}

double NNfunction_ss_cLcL::synapse0x30682c0() {
   return (neuron0x305e8f0()*-0.245065);
}

double NNfunction_ss_cLcL::synapse0x3068300() {
   return (neuron0x305ec30()*0.0582922);
}

double NNfunction_ss_cLcL::synapse0x3068340() {
   return (neuron0x305ef70()*0.302619);
}

double NNfunction_ss_cLcL::synapse0x3068380() {
   return (neuron0x305f2b0()*-0.814402);
}

double NNfunction_ss_cLcL::synapse0x30683c0() {
   return (neuron0x305f5f0()*-0.886385);
}

double NNfunction_ss_cLcL::synapse0x3068400() {
   return (neuron0x305f930()*0.736491);
}

double NNfunction_ss_cLcL::synapse0x3068440() {
   return (neuron0x305fc70()*0.525392);
}

double NNfunction_ss_cLcL::synapse0x3068480() {
   return (neuron0x305ffb0()*0.491649);
}

double NNfunction_ss_cLcL::synapse0x30684c0() {
   return (neuron0x30602f0()*0.0229443);
}

double NNfunction_ss_cLcL::synapse0x3068500() {
   return (neuron0x3060630()*0.0717469);
}

double NNfunction_ss_cLcL::synapse0x3067f90() {
   return (neuron0x3060970()*0.064246);
}

double NNfunction_ss_cLcL::synapse0x3067fd0() {
   return (neuron0x3060ed0()*-0.0212659);
}

double NNfunction_ss_cLcL::synapse0x3068650() {
   return (neuron0x30610f0()*0.202967);
}

double NNfunction_ss_cLcL::synapse0x3068690() {
   return (neuron0x3061430()*0.426531);
}

double NNfunction_ss_cLcL::synapse0x30686d0() {
   return (neuron0x3061770()*0.0818606);
}

double NNfunction_ss_cLcL::synapse0x3068710() {
   return (neuron0x3061ab0()*0.644637);
}

double NNfunction_ss_cLcL::synapse0x3068750() {
   return (neuron0x3061df0()*-0.323021);
}

double NNfunction_ss_cLcL::synapse0x3068790() {
   return (neuron0x3062130()*-0.00823787);
}

double NNfunction_ss_cLcL::synapse0x3068b10() {
   return (neuron0x305d570()*0.0260097);
}

double NNfunction_ss_cLcL::synapse0x3068b50() {
   return (neuron0x305d8b0()*0.0461431);
}

double NNfunction_ss_cLcL::synapse0x3068b90() {
   return (neuron0x305dbf0()*-0.33436);
}

double NNfunction_ss_cLcL::synapse0x3068bd0() {
   return (neuron0x305df30()*-0.434089);
}

double NNfunction_ss_cLcL::synapse0x3068c10() {
   return (neuron0x305e270()*0.0819377);
}

double NNfunction_ss_cLcL::synapse0x3068c50() {
   return (neuron0x305e5b0()*-0.0196161);
}

double NNfunction_ss_cLcL::synapse0x3068c90() {
   return (neuron0x305e8f0()*-0.155497);
}

double NNfunction_ss_cLcL::synapse0x3068cd0() {
   return (neuron0x305ec30()*0.0333534);
}

double NNfunction_ss_cLcL::synapse0x3068d10() {
   return (neuron0x305ef70()*-0.00248429);
}

double NNfunction_ss_cLcL::synapse0x3068d50() {
   return (neuron0x305f2b0()*-0.0608292);
}

double NNfunction_ss_cLcL::synapse0x3068d90() {
   return (neuron0x305f5f0()*0.0307104);
}

double NNfunction_ss_cLcL::synapse0x3068dd0() {
   return (neuron0x305f930()*0.863213);
}

double NNfunction_ss_cLcL::synapse0x3068e10() {
   return (neuron0x305fc70()*-0.344331);
}

double NNfunction_ss_cLcL::synapse0x3068e50() {
   return (neuron0x305ffb0()*-0.853283);
}

double NNfunction_ss_cLcL::synapse0x3068e90() {
   return (neuron0x30602f0()*-0.00483657);
}

double NNfunction_ss_cLcL::synapse0x3068ed0() {
   return (neuron0x3060630()*0.272207);
}

double NNfunction_ss_cLcL::synapse0x3068960() {
   return (neuron0x3060970()*-0.796311);
}

double NNfunction_ss_cLcL::synapse0x30689a0() {
   return (neuron0x3060ed0()*0.314141);
}

double NNfunction_ss_cLcL::synapse0x3065730() {
   return (neuron0x30610f0()*0.519557);
}

double NNfunction_ss_cLcL::synapse0x3065770() {
   return (neuron0x3061430()*0.29515);
}

double NNfunction_ss_cLcL::synapse0x30657b0() {
   return (neuron0x3061770()*-0.074046);
}

double NNfunction_ss_cLcL::synapse0x30657f0() {
   return (neuron0x3061ab0()*-0.087189);
}

double NNfunction_ss_cLcL::synapse0x3065830() {
   return (neuron0x3061df0()*-0.0504354);
}

double NNfunction_ss_cLcL::synapse0x3065870() {
   return (neuron0x3062130()*0.0863228);
}

double NNfunction_ss_cLcL::synapse0x3065bf0() {
   return (neuron0x305d570()*0.01924);
}

double NNfunction_ss_cLcL::synapse0x3065c30() {
   return (neuron0x305d8b0()*-0.150688);
}

double NNfunction_ss_cLcL::synapse0x3065c70() {
   return (neuron0x305dbf0()*1.4936);
}

double NNfunction_ss_cLcL::synapse0x3065cb0() {
   return (neuron0x305df30()*-0.183305);
}

double NNfunction_ss_cLcL::synapse0x3065cf0() {
   return (neuron0x305e270()*0.0607988);
}

double NNfunction_ss_cLcL::synapse0x3065d30() {
   return (neuron0x305e5b0()*0.221582);
}

double NNfunction_ss_cLcL::synapse0x3065d70() {
   return (neuron0x305e8f0()*0.081837);
}

double NNfunction_ss_cLcL::synapse0x3065db0() {
   return (neuron0x305ec30()*0.0373399);
}

double NNfunction_ss_cLcL::synapse0x3065df0() {
   return (neuron0x305ef70()*-0.254891);
}

double NNfunction_ss_cLcL::synapse0x3065e30() {
   return (neuron0x305f2b0()*0.173863);
}

double NNfunction_ss_cLcL::synapse0x3065e70() {
   return (neuron0x305f5f0()*-0.112576);
}

double NNfunction_ss_cLcL::synapse0x3065eb0() {
   return (neuron0x305f930()*-0.428327);
}

double NNfunction_ss_cLcL::synapse0x3065ef0() {
   return (neuron0x305fc70()*-0.190123);
}

double NNfunction_ss_cLcL::synapse0x306a030() {
   return (neuron0x305ffb0()*-0.696691);
}

double NNfunction_ss_cLcL::synapse0x306a070() {
   return (neuron0x30602f0()*-0.160719);
}

double NNfunction_ss_cLcL::synapse0x306a0b0() {
   return (neuron0x3060630()*0.0050386);
}

double NNfunction_ss_cLcL::synapse0x3065a40() {
   return (neuron0x3060970()*-0.067276);
}

double NNfunction_ss_cLcL::synapse0x3065a80() {
   return (neuron0x3060ed0()*-0.701568);
}

double NNfunction_ss_cLcL::synapse0x306a200() {
   return (neuron0x30610f0()*-0.64266);
}

double NNfunction_ss_cLcL::synapse0x306a240() {
   return (neuron0x3061430()*-0.517889);
}

double NNfunction_ss_cLcL::synapse0x306a280() {
   return (neuron0x3061770()*-0.019544);
}

double NNfunction_ss_cLcL::synapse0x306a2c0() {
   return (neuron0x3061ab0()*-0.0878548);
}

double NNfunction_ss_cLcL::synapse0x306a300() {
   return (neuron0x3061df0()*-0.269033);
}

double NNfunction_ss_cLcL::synapse0x306a340() {
   return (neuron0x3062130()*0.15177);
}

double NNfunction_ss_cLcL::synapse0x306a6c0() {
   return (neuron0x305d570()*-0.100115);
}

double NNfunction_ss_cLcL::synapse0x306a700() {
   return (neuron0x305d8b0()*-0.360631);
}

double NNfunction_ss_cLcL::synapse0x306a740() {
   return (neuron0x305dbf0()*0.193015);
}

double NNfunction_ss_cLcL::synapse0x306a780() {
   return (neuron0x305df30()*0.287345);
}

double NNfunction_ss_cLcL::synapse0x306a7c0() {
   return (neuron0x305e270()*0.334162);
}

double NNfunction_ss_cLcL::synapse0x306a800() {
   return (neuron0x305e5b0()*-0.244488);
}

double NNfunction_ss_cLcL::synapse0x306a840() {
   return (neuron0x305e8f0()*-0.457972);
}

double NNfunction_ss_cLcL::synapse0x306a880() {
   return (neuron0x305ec30()*-0.202505);
}

double NNfunction_ss_cLcL::synapse0x306a8c0() {
   return (neuron0x305ef70()*-0.144121);
}

double NNfunction_ss_cLcL::synapse0x306a900() {
   return (neuron0x305f2b0()*0.100036);
}

double NNfunction_ss_cLcL::synapse0x306a940() {
   return (neuron0x305f5f0()*0.403622);
}

double NNfunction_ss_cLcL::synapse0x306a980() {
   return (neuron0x305f930()*-0.527166);
}

double NNfunction_ss_cLcL::synapse0x306a9c0() {
   return (neuron0x305fc70()*-0.126669);
}

double NNfunction_ss_cLcL::synapse0x306aa00() {
   return (neuron0x305ffb0()*-0.690989);
}

double NNfunction_ss_cLcL::synapse0x306aa40() {
   return (neuron0x30602f0()*0.0658543);
}

double NNfunction_ss_cLcL::synapse0x306aa80() {
   return (neuron0x3060630()*-0.363087);
}

double NNfunction_ss_cLcL::synapse0x306a510() {
   return (neuron0x3060970()*1.07594);
}

double NNfunction_ss_cLcL::synapse0x306a550() {
   return (neuron0x3060ed0()*-0.224096);
}

double NNfunction_ss_cLcL::synapse0x306abd0() {
   return (neuron0x30610f0()*-0.383747);
}

double NNfunction_ss_cLcL::synapse0x306ac10() {
   return (neuron0x3061430()*-0.213009);
}

double NNfunction_ss_cLcL::synapse0x306ac50() {
   return (neuron0x3061770()*0.291654);
}

double NNfunction_ss_cLcL::synapse0x306ac90() {
   return (neuron0x3061ab0()*0.349519);
}

double NNfunction_ss_cLcL::synapse0x306acd0() {
   return (neuron0x3061df0()*0.112908);
}

double NNfunction_ss_cLcL::synapse0x306ad10() {
   return (neuron0x3062130()*-0.00904651);
}

double NNfunction_ss_cLcL::synapse0x306b090() {
   return (neuron0x305d570()*-0.0267237);
}

double NNfunction_ss_cLcL::synapse0x306b0d0() {
   return (neuron0x305d8b0()*-0.0748046);
}

double NNfunction_ss_cLcL::synapse0x306b110() {
   return (neuron0x305dbf0()*0.123318);
}

double NNfunction_ss_cLcL::synapse0x306b150() {
   return (neuron0x305df30()*-0.238671);
}

double NNfunction_ss_cLcL::synapse0x306b190() {
   return (neuron0x305e270()*0.00849368);
}

double NNfunction_ss_cLcL::synapse0x306b1d0() {
   return (neuron0x305e5b0()*-0.197897);
}

double NNfunction_ss_cLcL::synapse0x306b210() {
   return (neuron0x305e8f0()*-0.00296764);
}

double NNfunction_ss_cLcL::synapse0x306b250() {
   return (neuron0x305ec30()*-0.219924);
}

double NNfunction_ss_cLcL::synapse0x306b290() {
   return (neuron0x305ef70()*-0.0643209);
}

double NNfunction_ss_cLcL::synapse0x306b2d0() {
   return (neuron0x305f2b0()*0.00351057);
}

double NNfunction_ss_cLcL::synapse0x306b310() {
   return (neuron0x305f5f0()*0.396344);
}

double NNfunction_ss_cLcL::synapse0x306b350() {
   return (neuron0x305f930()*-0.176454);
}

double NNfunction_ss_cLcL::synapse0x306b390() {
   return (neuron0x305fc70()*-0.427923);
}

double NNfunction_ss_cLcL::synapse0x306b3d0() {
   return (neuron0x305ffb0()*-0.300513);
}

double NNfunction_ss_cLcL::synapse0x306b410() {
   return (neuron0x30602f0()*0.237536);
}

double NNfunction_ss_cLcL::synapse0x306b450() {
   return (neuron0x3060630()*-0.0765706);
}

double NNfunction_ss_cLcL::synapse0x306aee0() {
   return (neuron0x3060970()*0.234898);
}

double NNfunction_ss_cLcL::synapse0x306af20() {
   return (neuron0x3060ed0()*0.161523);
}

double NNfunction_ss_cLcL::synapse0x306b5a0() {
   return (neuron0x30610f0()*0.0187964);
}

double NNfunction_ss_cLcL::synapse0x306b5e0() {
   return (neuron0x3061430()*-0.460378);
}

double NNfunction_ss_cLcL::synapse0x306b620() {
   return (neuron0x3061770()*0.0697156);
}

double NNfunction_ss_cLcL::synapse0x306b660() {
   return (neuron0x3061ab0()*0.347566);
}

double NNfunction_ss_cLcL::synapse0x306b6a0() {
   return (neuron0x3061df0()*0.133655);
}

double NNfunction_ss_cLcL::synapse0x306b6e0() {
   return (neuron0x3062130()*0.126218);
}

double NNfunction_ss_cLcL::synapse0x306ba60() {
   return (neuron0x305d570()*-0.364991);
}

double NNfunction_ss_cLcL::synapse0x306baa0() {
   return (neuron0x305d8b0()*-0.0511003);
}

double NNfunction_ss_cLcL::synapse0x306bae0() {
   return (neuron0x305dbf0()*0.0894442);
}

double NNfunction_ss_cLcL::synapse0x306bb20() {
   return (neuron0x305df30()*-0.539854);
}

double NNfunction_ss_cLcL::synapse0x306bb60() {
   return (neuron0x305e270()*0.100847);
}

double NNfunction_ss_cLcL::synapse0x306bba0() {
   return (neuron0x305e5b0()*-0.0189177);
}

double NNfunction_ss_cLcL::synapse0x306bbe0() {
   return (neuron0x305e8f0()*-0.149824);
}

double NNfunction_ss_cLcL::synapse0x306bc20() {
   return (neuron0x305ec30()*0.213173);
}

double NNfunction_ss_cLcL::synapse0x306bc60() {
   return (neuron0x305ef70()*0.0731063);
}

double NNfunction_ss_cLcL::synapse0x306bca0() {
   return (neuron0x305f2b0()*0.153748);
}

double NNfunction_ss_cLcL::synapse0x306bce0() {
   return (neuron0x305f5f0()*0.0553137);
}

double NNfunction_ss_cLcL::synapse0x306bd20() {
   return (neuron0x305f930()*-0.125206);
}

double NNfunction_ss_cLcL::synapse0x306bd60() {
   return (neuron0x305fc70()*-0.778261);
}

double NNfunction_ss_cLcL::synapse0x306bda0() {
   return (neuron0x305ffb0()*-0.192018);
}

double NNfunction_ss_cLcL::synapse0x306bde0() {
   return (neuron0x30602f0()*-0.107759);
}

double NNfunction_ss_cLcL::synapse0x306be20() {
   return (neuron0x3060630()*0.00291159);
}

double NNfunction_ss_cLcL::synapse0x306b8b0() {
   return (neuron0x3060970()*-0.372739);
}

double NNfunction_ss_cLcL::synapse0x306b8f0() {
   return (neuron0x3060ed0()*-0.11884);
}

double NNfunction_ss_cLcL::synapse0x306bf70() {
   return (neuron0x30610f0()*0.0588425);
}

double NNfunction_ss_cLcL::synapse0x306bfb0() {
   return (neuron0x3061430()*0.328339);
}

double NNfunction_ss_cLcL::synapse0x306bff0() {
   return (neuron0x3061770()*0.0552817);
}

double NNfunction_ss_cLcL::synapse0x306c030() {
   return (neuron0x3061ab0()*-0.292051);
}

double NNfunction_ss_cLcL::synapse0x306c070() {
   return (neuron0x3061df0()*0.0679332);
}

double NNfunction_ss_cLcL::synapse0x306c0b0() {
   return (neuron0x3062130()*-0.148903);
}

double NNfunction_ss_cLcL::synapse0x306c430() {
   return (neuron0x305d570()*0.0766973);
}

double NNfunction_ss_cLcL::synapse0x305d790() {
   return (neuron0x305d8b0()*-0.0257415);
}

double NNfunction_ss_cLcL::synapse0x305d7d0() {
   return (neuron0x305dbf0()*-0.0056697);
}

double NNfunction_ss_cLcL::synapse0x305dad0() {
   return (neuron0x305df30()*2.88042);
}

double NNfunction_ss_cLcL::synapse0x305db10() {
   return (neuron0x305e270()*-0.124689);
}

double NNfunction_ss_cLcL::synapse0x305de10() {
   return (neuron0x305e5b0()*-0.114452);
}

double NNfunction_ss_cLcL::synapse0x305de50() {
   return (neuron0x305e8f0()*-0.0143541);
}

double NNfunction_ss_cLcL::synapse0x305e150() {
   return (neuron0x305ec30()*-0.0576256);
}

double NNfunction_ss_cLcL::synapse0x305e190() {
   return (neuron0x305ef70()*-0.0599506);
}

double NNfunction_ss_cLcL::synapse0x305e490() {
   return (neuron0x305f2b0()*-0.121014);
}

double NNfunction_ss_cLcL::synapse0x305e4d0() {
   return (neuron0x305f5f0()*-0.0674454);
}

double NNfunction_ss_cLcL::synapse0x305e7d0() {
   return (neuron0x305f930()*0.106927);
}

double NNfunction_ss_cLcL::synapse0x305e810() {
   return (neuron0x305fc70()*0.2504);
}

double NNfunction_ss_cLcL::synapse0x305eb10() {
   return (neuron0x305ffb0()*0.0147114);
}

double NNfunction_ss_cLcL::synapse0x305eb50() {
   return (neuron0x30602f0()*0.0632095);
}

double NNfunction_ss_cLcL::synapse0x305ee50() {
   return (neuron0x3060630()*0.0237405);
}

double NNfunction_ss_cLcL::synapse0x305ee90() {
   return (neuron0x3060970()*-0.0243561);
}

double NNfunction_ss_cLcL::synapse0x305f190() {
   return (neuron0x3060ed0()*-0.0470913);
}

double NNfunction_ss_cLcL::synapse0x305f1d0() {
   return (neuron0x30610f0()*0.0843807);
}

double NNfunction_ss_cLcL::synapse0x305f4d0() {
   return (neuron0x3061430()*0.16397);
}

double NNfunction_ss_cLcL::synapse0x305f510() {
   return (neuron0x3061770()*-0.00316336);
}

double NNfunction_ss_cLcL::synapse0x305f810() {
   return (neuron0x3061ab0()*-0.0397524);
}

double NNfunction_ss_cLcL::synapse0x305f850() {
   return (neuron0x3061df0()*-0.141728);
}

double NNfunction_ss_cLcL::synapse0x305fb50() {
   return (neuron0x3062130()*0.0805426);
}

double NNfunction_ss_cLcL::synapse0x305fb90() {
   return (neuron0x305d570()*-0.0116296);
}

double NNfunction_ss_cLcL::synapse0x3060850() {
   return (neuron0x305d8b0()*0.043109);
}

double NNfunction_ss_cLcL::synapse0x3060890() {
   return (neuron0x305dbf0()*0.0361576);
}

double NNfunction_ss_cLcL::synapse0x306c280() {
   return (neuron0x305df30()*-13.2727);
}

double NNfunction_ss_cLcL::synapse0x306c2c0() {
   return (neuron0x305e270()*0.10665);
}

double NNfunction_ss_cLcL::synapse0x3060b90() {
   return (neuron0x305e5b0()*0.0056218);
}

double NNfunction_ss_cLcL::synapse0x3060bd0() {
   return (neuron0x305e8f0()*-0.0635835);
}

double NNfunction_ss_cLcL::synapse0x2e0eb60() {
   return (neuron0x305ec30()*0.0724126);
}

double NNfunction_ss_cLcL::synapse0x2e0eba0() {
   return (neuron0x305ef70()*0.045655);
}

double NNfunction_ss_cLcL::synapse0x3061310() {
   return (neuron0x305f2b0()*-0.0932207);
}

double NNfunction_ss_cLcL::synapse0x3061350() {
   return (neuron0x305f5f0()*-0.0139787);
}

double NNfunction_ss_cLcL::synapse0x3061650() {
   return (neuron0x305f930()*-0.158456);
}

double NNfunction_ss_cLcL::synapse0x3061690() {
   return (neuron0x305fc70()*0.0332832);
}

double NNfunction_ss_cLcL::synapse0x3061990() {
   return (neuron0x305ffb0()*-0.00721001);
}

double NNfunction_ss_cLcL::synapse0x30619d0() {
   return (neuron0x30602f0()*0.0358247);
}

double NNfunction_ss_cLcL::synapse0x3061cd0() {
   return (neuron0x3060630()*-0.0508418);
}

double NNfunction_ss_cLcL::synapse0x3061d10() {
   return (neuron0x3060970()*0.0186227);
}

double NNfunction_ss_cLcL::synapse0x3062010() {
   return (neuron0x3060ed0()*-0.00256089);
}

double NNfunction_ss_cLcL::synapse0x3062050() {
   return (neuron0x30610f0()*-0.137173);
}

double NNfunction_ss_cLcL::synapse0x3062350() {
   return (neuron0x3061430()*0.0243883);
}

double NNfunction_ss_cLcL::synapse0x3062390() {
   return (neuron0x3061770()*0.0291599);
}

double NNfunction_ss_cLcL::synapse0x305fe90() {
   return (neuron0x3061ab0()*-0.0448894);
}

double NNfunction_ss_cLcL::synapse0x305fed0() {
   return (neuron0x3061df0()*-0.0311185);
}

double NNfunction_ss_cLcL::synapse0x306e1a0() {
   return (neuron0x3062130()*-0.0848826);
}

double NNfunction_ss_cLcL::synapse0x306e520() {
   return (neuron0x305d570()*-0.0578961);
}

double NNfunction_ss_cLcL::synapse0x306e560() {
   return (neuron0x305d8b0()*0.207896);
}

double NNfunction_ss_cLcL::synapse0x306e5a0() {
   return (neuron0x305dbf0()*-0.295922);
}

double NNfunction_ss_cLcL::synapse0x306e5e0() {
   return (neuron0x305df30()*0.16442);
}

double NNfunction_ss_cLcL::synapse0x306e620() {
   return (neuron0x305e270()*-0.193142);
}

double NNfunction_ss_cLcL::synapse0x306e660() {
   return (neuron0x305e5b0()*-0.1608);
}

double NNfunction_ss_cLcL::synapse0x306e6a0() {
   return (neuron0x305e8f0()*-0.179435);
}

double NNfunction_ss_cLcL::synapse0x306e6e0() {
   return (neuron0x305ec30()*0.0203493);
}

double NNfunction_ss_cLcL::synapse0x306e720() {
   return (neuron0x305ef70()*0.0118644);
}

double NNfunction_ss_cLcL::synapse0x306e760() {
   return (neuron0x305f2b0()*-0.00164045);
}

double NNfunction_ss_cLcL::synapse0x306e7a0() {
   return (neuron0x305f5f0()*0.0495473);
}

double NNfunction_ss_cLcL::synapse0x306e7e0() {
   return (neuron0x305f930()*-0.158356);
}

double NNfunction_ss_cLcL::synapse0x306e820() {
   return (neuron0x305fc70()*-0.160818);
}

double NNfunction_ss_cLcL::synapse0x306e860() {
   return (neuron0x305ffb0()*0.148229);
}

double NNfunction_ss_cLcL::synapse0x306e8a0() {
   return (neuron0x30602f0()*-0.319571);
}

double NNfunction_ss_cLcL::synapse0x306e8e0() {
   return (neuron0x3060630()*0.212097);
}

double NNfunction_ss_cLcL::synapse0x306e370() {
   return (neuron0x3060970()*0.251786);
}

double NNfunction_ss_cLcL::synapse0x306e3b0() {
   return (neuron0x3060ed0()*0.00767676);
}

double NNfunction_ss_cLcL::synapse0x306ea30() {
   return (neuron0x30610f0()*0.064412);
}

double NNfunction_ss_cLcL::synapse0x306ea70() {
   return (neuron0x3061430()*0.0252359);
}

double NNfunction_ss_cLcL::synapse0x306eab0() {
   return (neuron0x3061770()*-0.157538);
}

double NNfunction_ss_cLcL::synapse0x306eaf0() {
   return (neuron0x3061ab0()*0.0609774);
}

double NNfunction_ss_cLcL::synapse0x306eb30() {
   return (neuron0x3061df0()*-0.0692996);
}

double NNfunction_ss_cLcL::synapse0x306eb70() {
   return (neuron0x3062130()*0.0957603);
}

double NNfunction_ss_cLcL::synapse0x306eef0() {
   return (neuron0x305d570()*-0.241406);
}

double NNfunction_ss_cLcL::synapse0x306ef30() {
   return (neuron0x305d8b0()*-0.0517912);
}

double NNfunction_ss_cLcL::synapse0x306ef70() {
   return (neuron0x305dbf0()*0.22605);
}

double NNfunction_ss_cLcL::synapse0x306efb0() {
   return (neuron0x305df30()*2.77178);
}

double NNfunction_ss_cLcL::synapse0x306eff0() {
   return (neuron0x305e270()*0.166476);
}

double NNfunction_ss_cLcL::synapse0x306f030() {
   return (neuron0x305e5b0()*0.13132);
}

double NNfunction_ss_cLcL::synapse0x306f070() {
   return (neuron0x305e8f0()*-0.15883);
}

double NNfunction_ss_cLcL::synapse0x306f0b0() {
   return (neuron0x305ec30()*-0.0379832);
}

double NNfunction_ss_cLcL::synapse0x306f0f0() {
   return (neuron0x305ef70()*0.00604558);
}

double NNfunction_ss_cLcL::synapse0x306f130() {
   return (neuron0x305f2b0()*0.126988);
}

double NNfunction_ss_cLcL::synapse0x306f170() {
   return (neuron0x305f5f0()*0.115001);
}

double NNfunction_ss_cLcL::synapse0x306f1b0() {
   return (neuron0x305f930()*-0.339326);
}

double NNfunction_ss_cLcL::synapse0x306f1f0() {
   return (neuron0x305fc70()*-0.696513);
}

double NNfunction_ss_cLcL::synapse0x306f230() {
   return (neuron0x305ffb0()*-0.0848715);
}

double NNfunction_ss_cLcL::synapse0x306f270() {
   return (neuron0x30602f0()*-0.207943);
}

double NNfunction_ss_cLcL::synapse0x306f2b0() {
   return (neuron0x3060630()*-0.140948);
}

double NNfunction_ss_cLcL::synapse0x306ed40() {
   return (neuron0x3060970()*0.0287826);
}

double NNfunction_ss_cLcL::synapse0x306ed80() {
   return (neuron0x3060ed0()*-0.131834);
}

double NNfunction_ss_cLcL::synapse0x306f400() {
   return (neuron0x30610f0()*-0.324557);
}

double NNfunction_ss_cLcL::synapse0x306f440() {
   return (neuron0x3061430()*-0.242128);
}

double NNfunction_ss_cLcL::synapse0x306f480() {
   return (neuron0x3061770()*0.0695311);
}

double NNfunction_ss_cLcL::synapse0x306f4c0() {
   return (neuron0x3061ab0()*0.133375);
}

double NNfunction_ss_cLcL::synapse0x306f500() {
   return (neuron0x3061df0()*0.17106);
}

double NNfunction_ss_cLcL::synapse0x306f540() {
   return (neuron0x3062130()*-0.140783);
}

double NNfunction_ss_cLcL::synapse0x306f8c0() {
   return (neuron0x305d570()*0.359337);
}

double NNfunction_ss_cLcL::synapse0x306f900() {
   return (neuron0x305d8b0()*-0.785567);
}

double NNfunction_ss_cLcL::synapse0x306f940() {
   return (neuron0x305dbf0()*-1.40233);
}

double NNfunction_ss_cLcL::synapse0x306f980() {
   return (neuron0x305df30()*0.396693);
}

double NNfunction_ss_cLcL::synapse0x306f9c0() {
   return (neuron0x305e270()*-0.341216);
}

double NNfunction_ss_cLcL::synapse0x306fa00() {
   return (neuron0x305e5b0()*-0.915461);
}

double NNfunction_ss_cLcL::synapse0x306fa40() {
   return (neuron0x305e8f0()*-0.20209);
}

double NNfunction_ss_cLcL::synapse0x306fa80() {
   return (neuron0x305ec30()*-0.0483682);
}

double NNfunction_ss_cLcL::synapse0x306fac0() {
   return (neuron0x305ef70()*-0.387812);
}

double NNfunction_ss_cLcL::synapse0x306fb00() {
   return (neuron0x305f2b0()*0.357034);
}

double NNfunction_ss_cLcL::synapse0x306fb40() {
   return (neuron0x305f5f0()*0.22163);
}

double NNfunction_ss_cLcL::synapse0x306fb80() {
   return (neuron0x305f930()*-0.134887);
}

double NNfunction_ss_cLcL::synapse0x306fbc0() {
   return (neuron0x305fc70()*-0.345253);
}

double NNfunction_ss_cLcL::synapse0x306fc00() {
   return (neuron0x305ffb0()*-0.137218);
}

double NNfunction_ss_cLcL::synapse0x306fc40() {
   return (neuron0x30602f0()*0.279113);
}

double NNfunction_ss_cLcL::synapse0x306fc80() {
   return (neuron0x3060630()*-0.41028);
}

double NNfunction_ss_cLcL::synapse0x306f710() {
   return (neuron0x3060970()*-0.014236);
}

double NNfunction_ss_cLcL::synapse0x306f750() {
   return (neuron0x3060ed0()*-0.12874);
}

double NNfunction_ss_cLcL::synapse0x306fdd0() {
   return (neuron0x30610f0()*-0.29609);
}

double NNfunction_ss_cLcL::synapse0x306fe10() {
   return (neuron0x3061430()*-0.158004);
}

double NNfunction_ss_cLcL::synapse0x306fe50() {
   return (neuron0x3061770()*-0.177472);
}

double NNfunction_ss_cLcL::synapse0x306fe90() {
   return (neuron0x3061ab0()*-0.108768);
}

double NNfunction_ss_cLcL::synapse0x306fed0() {
   return (neuron0x3061df0()*0.310902);
}

double NNfunction_ss_cLcL::synapse0x306ff10() {
   return (neuron0x3062130()*0.382926);
}

double NNfunction_ss_cLcL::synapse0x3070290() {
   return (neuron0x305d570()*-0.299128);
}

double NNfunction_ss_cLcL::synapse0x30702d0() {
   return (neuron0x305d8b0()*-0.171282);
}

double NNfunction_ss_cLcL::synapse0x3070310() {
   return (neuron0x305dbf0()*0.256897);
}

double NNfunction_ss_cLcL::synapse0x3070350() {
   return (neuron0x305df30()*-1.77143);
}

double NNfunction_ss_cLcL::synapse0x3070390() {
   return (neuron0x305e270()*-0.305937);
}

double NNfunction_ss_cLcL::synapse0x30703d0() {
   return (neuron0x305e5b0()*0.0223407);
}

double NNfunction_ss_cLcL::synapse0x3070410() {
   return (neuron0x305e8f0()*-0.234008);
}

double NNfunction_ss_cLcL::synapse0x3070450() {
   return (neuron0x305ec30()*-0.0637602);
}

double NNfunction_ss_cLcL::synapse0x3070490() {
   return (neuron0x305ef70()*-0.0955277);
}

double NNfunction_ss_cLcL::synapse0x30704d0() {
   return (neuron0x305f2b0()*0.0758493);
}

double NNfunction_ss_cLcL::synapse0x3070510() {
   return (neuron0x305f5f0()*0.184436);
}

double NNfunction_ss_cLcL::synapse0x3070550() {
   return (neuron0x305f930()*0.125807);
}

double NNfunction_ss_cLcL::synapse0x3070590() {
   return (neuron0x305fc70()*0.899321);
}

double NNfunction_ss_cLcL::synapse0x30705d0() {
   return (neuron0x305ffb0()*0.112754);
}

double NNfunction_ss_cLcL::synapse0x3070610() {
   return (neuron0x30602f0()*-0.139182);
}

double NNfunction_ss_cLcL::synapse0x3070650() {
   return (neuron0x3060630()*0.153952);
}

double NNfunction_ss_cLcL::synapse0x30700e0() {
   return (neuron0x3060970()*0.103779);
}

double NNfunction_ss_cLcL::synapse0x3070120() {
   return (neuron0x3060ed0()*-0.104804);
}

double NNfunction_ss_cLcL::synapse0x30707a0() {
   return (neuron0x30610f0()*-0.0272808);
}

double NNfunction_ss_cLcL::synapse0x30707e0() {
   return (neuron0x3061430()*0.0821685);
}

double NNfunction_ss_cLcL::synapse0x3070820() {
   return (neuron0x3061770()*-0.0268417);
}

double NNfunction_ss_cLcL::synapse0x3070860() {
   return (neuron0x3061ab0()*0.0146801);
}

double NNfunction_ss_cLcL::synapse0x30708a0() {
   return (neuron0x3061df0()*-0.262259);
}

double NNfunction_ss_cLcL::synapse0x30708e0() {
   return (neuron0x3062130()*0.0986545);
}

double NNfunction_ss_cLcL::synapse0x3070c60() {
   return (neuron0x305d570()*0.0493379);
}

double NNfunction_ss_cLcL::synapse0x3070ca0() {
   return (neuron0x305d8b0()*-0.113683);
}

double NNfunction_ss_cLcL::synapse0x3070ce0() {
   return (neuron0x305dbf0()*-0.239794);
}

double NNfunction_ss_cLcL::synapse0x3070d20() {
   return (neuron0x305df30()*-3.43389);
}

double NNfunction_ss_cLcL::synapse0x3070d60() {
   return (neuron0x305e270()*-0.111361);
}

double NNfunction_ss_cLcL::synapse0x3070da0() {
   return (neuron0x305e5b0()*-0.0411323);
}

double NNfunction_ss_cLcL::synapse0x3070de0() {
   return (neuron0x305e8f0()*0.0881337);
}

double NNfunction_ss_cLcL::synapse0x3070e20() {
   return (neuron0x305ec30()*-0.0127932);
}

double NNfunction_ss_cLcL::synapse0x3070e60() {
   return (neuron0x305ef70()*0.00236833);
}

double NNfunction_ss_cLcL::synapse0x3069020() {
   return (neuron0x305f2b0()*0.0461028);
}

double NNfunction_ss_cLcL::synapse0x3069060() {
   return (neuron0x305f5f0()*-0.0893474);
}

double NNfunction_ss_cLcL::synapse0x30690a0() {
   return (neuron0x305f930()*0.243706);
}

double NNfunction_ss_cLcL::synapse0x30690e0() {
   return (neuron0x305fc70()*1.85401);
}

double NNfunction_ss_cLcL::synapse0x3069120() {
   return (neuron0x305ffb0()*0.0893875);
}

double NNfunction_ss_cLcL::synapse0x3069160() {
   return (neuron0x30602f0()*0.0400818);
}

double NNfunction_ss_cLcL::synapse0x30691a0() {
   return (neuron0x3060630()*0.202691);
}

double NNfunction_ss_cLcL::synapse0x3070ab0() {
   return (neuron0x3060970()*-0.0779244);
}

double NNfunction_ss_cLcL::synapse0x3070af0() {
   return (neuron0x3060ed0()*-0.0214581);
}

double NNfunction_ss_cLcL::synapse0x30692f0() {
   return (neuron0x30610f0()*0.164078);
}

double NNfunction_ss_cLcL::synapse0x3069330() {
   return (neuron0x3061430()*0.0206024);
}

double NNfunction_ss_cLcL::synapse0x3069370() {
   return (neuron0x3061770()*-0.0139875);
}

double NNfunction_ss_cLcL::synapse0x30693b0() {
   return (neuron0x3061ab0()*-0.00545069);
}

double NNfunction_ss_cLcL::synapse0x30693f0() {
   return (neuron0x3061df0()*-0.0412251);
}

double NNfunction_ss_cLcL::synapse0x3069430() {
   return (neuron0x3062130()*0.201768);
}

double NNfunction_ss_cLcL::synapse0x30697b0() {
   return (neuron0x305d570()*-0.960223);
}

double NNfunction_ss_cLcL::synapse0x30697f0() {
   return (neuron0x305d8b0()*-0.0741002);
}

double NNfunction_ss_cLcL::synapse0x3069830() {
   return (neuron0x305dbf0()*0.615778);
}

double NNfunction_ss_cLcL::synapse0x3069870() {
   return (neuron0x305df30()*-0.093612);
}

double NNfunction_ss_cLcL::synapse0x30698b0() {
   return (neuron0x305e270()*0.144396);
}

double NNfunction_ss_cLcL::synapse0x30698f0() {
   return (neuron0x305e5b0()*0.0962429);
}

double NNfunction_ss_cLcL::synapse0x3069930() {
   return (neuron0x305e8f0()*-0.965137);
}

double NNfunction_ss_cLcL::synapse0x3069970() {
   return (neuron0x305ec30()*0.208635);
}

double NNfunction_ss_cLcL::synapse0x30699b0() {
   return (neuron0x305ef70()*-0.262231);
}

double NNfunction_ss_cLcL::synapse0x30699f0() {
   return (neuron0x305f2b0()*0.955669);
}

double NNfunction_ss_cLcL::synapse0x3069a30() {
   return (neuron0x305f5f0()*-0.422015);
}

double NNfunction_ss_cLcL::synapse0x3069a70() {
   return (neuron0x305f930()*-1.01062);
}

double NNfunction_ss_cLcL::synapse0x3069ab0() {
   return (neuron0x305fc70()*-1.10541);
}

double NNfunction_ss_cLcL::synapse0x3069af0() {
   return (neuron0x305ffb0()*0.0757681);
}

double NNfunction_ss_cLcL::synapse0x3069b30() {
   return (neuron0x30602f0()*0.705929);
}

double NNfunction_ss_cLcL::synapse0x3069b70() {
   return (neuron0x3060630()*-0.655856);
}

double NNfunction_ss_cLcL::synapse0x3069600() {
   return (neuron0x3060970()*0.648946);
}

double NNfunction_ss_cLcL::synapse0x3069640() {
   return (neuron0x3060ed0()*-0.916612);
}

double NNfunction_ss_cLcL::synapse0x3069cc0() {
   return (neuron0x30610f0()*-0.95513);
}

double NNfunction_ss_cLcL::synapse0x3069d00() {
   return (neuron0x3061430()*0.217996);
}

double NNfunction_ss_cLcL::synapse0x3069d40() {
   return (neuron0x3061770()*-0.214746);
}

double NNfunction_ss_cLcL::synapse0x3069d80() {
   return (neuron0x3061ab0()*0.362386);
}

double NNfunction_ss_cLcL::synapse0x3069dc0() {
   return (neuron0x3061df0()*-0.00276846);
}

double NNfunction_ss_cLcL::synapse0x3069e00() {
   return (neuron0x3062130()*-0.0779571);
}

double NNfunction_ss_cLcL::synapse0x3069fd0() {
   return (neuron0x305d570()*-0.00926547);
}

double NNfunction_ss_cLcL::synapse0x3073060() {
   return (neuron0x305d8b0()*0.0201626);
}

double NNfunction_ss_cLcL::synapse0x30730a0() {
   return (neuron0x305dbf0()*-1.39058);
}

double NNfunction_ss_cLcL::synapse0x30730e0() {
   return (neuron0x305df30()*0.0182709);
}

double NNfunction_ss_cLcL::synapse0x3073120() {
   return (neuron0x305e270()*0.0262732);
}

double NNfunction_ss_cLcL::synapse0x3073160() {
   return (neuron0x305e5b0()*-0.0143275);
}

double NNfunction_ss_cLcL::synapse0x30731a0() {
   return (neuron0x305e8f0()*-0.0522564);
}

double NNfunction_ss_cLcL::synapse0x30731e0() {
   return (neuron0x305ec30()*0.0403128);
}

double NNfunction_ss_cLcL::synapse0x3073220() {
   return (neuron0x305ef70()*-0.00113718);
}

double NNfunction_ss_cLcL::synapse0x3073260() {
   return (neuron0x305f2b0()*0.0198419);
}

double NNfunction_ss_cLcL::synapse0x30732a0() {
   return (neuron0x305f5f0()*-0.0153682);
}

double NNfunction_ss_cLcL::synapse0x30732e0() {
   return (neuron0x305f930()*0.00621569);
}

double NNfunction_ss_cLcL::synapse0x3073320() {
   return (neuron0x305fc70()*0.343539);
}

double NNfunction_ss_cLcL::synapse0x3073360() {
   return (neuron0x305ffb0()*-0.108341);
}

double NNfunction_ss_cLcL::synapse0x30733a0() {
   return (neuron0x30602f0()*0.0439731);
}

double NNfunction_ss_cLcL::synapse0x30733e0() {
   return (neuron0x3060630()*0.0580362);
}

double NNfunction_ss_cLcL::synapse0x3072eb0() {
   return (neuron0x3060970()*-0.0994611);
}

double NNfunction_ss_cLcL::synapse0x3072ef0() {
   return (neuron0x3060ed0()*-0.00167669);
}

double NNfunction_ss_cLcL::synapse0x3073530() {
   return (neuron0x30610f0()*-0.00481636);
}

double NNfunction_ss_cLcL::synapse0x3073570() {
   return (neuron0x3061430()*-0.022538);
}

double NNfunction_ss_cLcL::synapse0x30735b0() {
   return (neuron0x3061770()*0.0194367);
}

double NNfunction_ss_cLcL::synapse0x30735f0() {
   return (neuron0x3061ab0()*-0.00545871);
}

double NNfunction_ss_cLcL::synapse0x3073630() {
   return (neuron0x3061df0()*0.0274434);
}

double NNfunction_ss_cLcL::synapse0x3073670() {
   return (neuron0x3062130()*0.040954);
}

double NNfunction_ss_cLcL::synapse0x30739f0() {
   return (neuron0x305d570()*0.353364);
}

double NNfunction_ss_cLcL::synapse0x3073a30() {
   return (neuron0x305d8b0()*-0.391952);
}

double NNfunction_ss_cLcL::synapse0x3073a70() {
   return (neuron0x305dbf0()*0.136479);
}

double NNfunction_ss_cLcL::synapse0x3073ab0() {
   return (neuron0x305df30()*-0.383074);
}

double NNfunction_ss_cLcL::synapse0x3073af0() {
   return (neuron0x305e270()*0.365851);
}

double NNfunction_ss_cLcL::synapse0x3073b30() {
   return (neuron0x305e5b0()*-0.565223);
}

double NNfunction_ss_cLcL::synapse0x3073b70() {
   return (neuron0x305e8f0()*-0.225926);
}

double NNfunction_ss_cLcL::synapse0x3073bb0() {
   return (neuron0x305ec30()*0.116015);
}

double NNfunction_ss_cLcL::synapse0x3073bf0() {
   return (neuron0x305ef70()*-0.474573);
}

double NNfunction_ss_cLcL::synapse0x3073c30() {
   return (neuron0x305f2b0()*-0.205274);
}

double NNfunction_ss_cLcL::synapse0x3073c70() {
   return (neuron0x305f5f0()*0.141022);
}

double NNfunction_ss_cLcL::synapse0x3073cb0() {
   return (neuron0x305f930()*0.53139);
}

double NNfunction_ss_cLcL::synapse0x3073cf0() {
   return (neuron0x305fc70()*0.451803);
}

double NNfunction_ss_cLcL::synapse0x3073d30() {
   return (neuron0x305ffb0()*-0.131959);
}

double NNfunction_ss_cLcL::synapse0x3073d70() {
   return (neuron0x30602f0()*0.119082);
}

double NNfunction_ss_cLcL::synapse0x3073db0() {
   return (neuron0x3060630()*0.307149);
}

double NNfunction_ss_cLcL::synapse0x3073840() {
   return (neuron0x3060970()*-0.367758);
}

double NNfunction_ss_cLcL::synapse0x3073880() {
   return (neuron0x3060ed0()*0.331272);
}

double NNfunction_ss_cLcL::synapse0x3073f00() {
   return (neuron0x30610f0()*-0.0525796);
}

double NNfunction_ss_cLcL::synapse0x3073f40() {
   return (neuron0x3061430()*-0.152396);
}

double NNfunction_ss_cLcL::synapse0x3073f80() {
   return (neuron0x3061770()*-0.304732);
}

double NNfunction_ss_cLcL::synapse0x3073fc0() {
   return (neuron0x3061ab0()*-0.459769);
}

double NNfunction_ss_cLcL::synapse0x3074000() {
   return (neuron0x3061df0()*0.245901);
}

double NNfunction_ss_cLcL::synapse0x3074040() {
   return (neuron0x3062130()*0.0879362);
}

double NNfunction_ss_cLcL::synapse0x30743c0() {
   return (neuron0x305d570()*0.0366292);
}

double NNfunction_ss_cLcL::synapse0x3074400() {
   return (neuron0x305d8b0()*-0.263784);
}

double NNfunction_ss_cLcL::synapse0x3074440() {
   return (neuron0x305dbf0()*0.332103);
}

double NNfunction_ss_cLcL::synapse0x3074480() {
   return (neuron0x305df30()*0.853829);
}

double NNfunction_ss_cLcL::synapse0x30744c0() {
   return (neuron0x305e270()*0.430754);
}

double NNfunction_ss_cLcL::synapse0x3074500() {
   return (neuron0x305e5b0()*-0.00855711);
}

double NNfunction_ss_cLcL::synapse0x3074540() {
   return (neuron0x305e8f0()*0.713986);
}

double NNfunction_ss_cLcL::synapse0x3074580() {
   return (neuron0x305ec30()*-0.257839);
}

double NNfunction_ss_cLcL::synapse0x30745c0() {
   return (neuron0x305ef70()*-0.0770129);
}

double NNfunction_ss_cLcL::synapse0x3074600() {
   return (neuron0x305f2b0()*-0.326814);
}

double NNfunction_ss_cLcL::synapse0x3074640() {
   return (neuron0x305f5f0()*0.00516747);
}

double NNfunction_ss_cLcL::synapse0x3074680() {
   return (neuron0x305f930()*-0.19799);
}

double NNfunction_ss_cLcL::synapse0x30746c0() {
   return (neuron0x305fc70()*-0.235125);
}

double NNfunction_ss_cLcL::synapse0x3074700() {
   return (neuron0x305ffb0()*-0.0342993);
}

double NNfunction_ss_cLcL::synapse0x3074740() {
   return (neuron0x30602f0()*0.344783);
}

double NNfunction_ss_cLcL::synapse0x3074780() {
   return (neuron0x3060630()*-0.000840819);
}

double NNfunction_ss_cLcL::synapse0x3074210() {
   return (neuron0x3060970()*-0.632395);
}

double NNfunction_ss_cLcL::synapse0x3074250() {
   return (neuron0x3060ed0()*-0.435501);
}

double NNfunction_ss_cLcL::synapse0x30748d0() {
   return (neuron0x30610f0()*-0.0088598);
}

double NNfunction_ss_cLcL::synapse0x3074910() {
   return (neuron0x3061430()*-0.0221722);
}

double NNfunction_ss_cLcL::synapse0x3074950() {
   return (neuron0x3061770()*0.215243);
}

double NNfunction_ss_cLcL::synapse0x3074990() {
   return (neuron0x3061ab0()*-0.153998);
}

double NNfunction_ss_cLcL::synapse0x30749d0() {
   return (neuron0x3061df0()*0.424393);
}

double NNfunction_ss_cLcL::synapse0x3074a10() {
   return (neuron0x3062130()*-0.134921);
}

double NNfunction_ss_cLcL::synapse0x3074d90() {
   return (neuron0x305d570()*0.00923626);
}

double NNfunction_ss_cLcL::synapse0x3074dd0() {
   return (neuron0x305d8b0()*0.114197);
}

double NNfunction_ss_cLcL::synapse0x3074e10() {
   return (neuron0x305dbf0()*-0.0808781);
}

double NNfunction_ss_cLcL::synapse0x3074e50() {
   return (neuron0x305df30()*9.80343);
}

double NNfunction_ss_cLcL::synapse0x3074e90() {
   return (neuron0x305e270()*0.14721);
}

double NNfunction_ss_cLcL::synapse0x3074ed0() {
   return (neuron0x305e5b0()*0.182441);
}

double NNfunction_ss_cLcL::synapse0x3074f10() {
   return (neuron0x305e8f0()*-0.0793656);
}

double NNfunction_ss_cLcL::synapse0x3074f50() {
   return (neuron0x305ec30()*0.0875901);
}

double NNfunction_ss_cLcL::synapse0x3074f90() {
   return (neuron0x305ef70()*0.0102594);
}

double NNfunction_ss_cLcL::synapse0x3074fd0() {
   return (neuron0x305f2b0()*-0.00109326);
}

double NNfunction_ss_cLcL::synapse0x3075010() {
   return (neuron0x305f5f0()*-0.0367824);
}

double NNfunction_ss_cLcL::synapse0x3075050() {
   return (neuron0x305f930()*-0.136083);
}

double NNfunction_ss_cLcL::synapse0x3075090() {
   return (neuron0x305fc70()*-1.43985);
}

double NNfunction_ss_cLcL::synapse0x30750d0() {
   return (neuron0x305ffb0()*-0.0221504);
}

double NNfunction_ss_cLcL::synapse0x3075110() {
   return (neuron0x30602f0()*-0.0143115);
}

double NNfunction_ss_cLcL::synapse0x3075150() {
   return (neuron0x3060630()*0.0271866);
}

double NNfunction_ss_cLcL::synapse0x3074be0() {
   return (neuron0x3060970()*-0.0471377);
}

double NNfunction_ss_cLcL::synapse0x3074c20() {
   return (neuron0x3060ed0()*0.0786723);
}

double NNfunction_ss_cLcL::synapse0x30752a0() {
   return (neuron0x30610f0()*-0.205584);
}

double NNfunction_ss_cLcL::synapse0x30752e0() {
   return (neuron0x3061430()*0.0906282);
}

double NNfunction_ss_cLcL::synapse0x3075320() {
   return (neuron0x3061770()*0.0694803);
}

double NNfunction_ss_cLcL::synapse0x3075360() {
   return (neuron0x3061ab0()*-0.0398977);
}

double NNfunction_ss_cLcL::synapse0x30753a0() {
   return (neuron0x3061df0()*0.00349249);
}

double NNfunction_ss_cLcL::synapse0x30753e0() {
   return (neuron0x3062130()*-0.0498182);
}

double NNfunction_ss_cLcL::synapse0x3075760() {
   return (neuron0x305d570()*0.0522447);
}

double NNfunction_ss_cLcL::synapse0x30757a0() {
   return (neuron0x305d8b0()*0.017716);
}

double NNfunction_ss_cLcL::synapse0x30757e0() {
   return (neuron0x305dbf0()*0.224687);
}

double NNfunction_ss_cLcL::synapse0x3075820() {
   return (neuron0x305df30()*-0.108039);
}

double NNfunction_ss_cLcL::synapse0x3075860() {
   return (neuron0x305e270()*0.00378581);
}

double NNfunction_ss_cLcL::synapse0x30758a0() {
   return (neuron0x305e5b0()*-0.0374368);
}

double NNfunction_ss_cLcL::synapse0x30758e0() {
   return (neuron0x305e8f0()*0.00353107);
}

double NNfunction_ss_cLcL::synapse0x3075920() {
   return (neuron0x305ec30()*0.0212786);
}

double NNfunction_ss_cLcL::synapse0x3075960() {
   return (neuron0x305ef70()*-0.177905);
}

double NNfunction_ss_cLcL::synapse0x30759a0() {
   return (neuron0x305f2b0()*0.00372733);
}

double NNfunction_ss_cLcL::synapse0x30759e0() {
   return (neuron0x305f5f0()*0.000309343);
}

double NNfunction_ss_cLcL::synapse0x3075a20() {
   return (neuron0x305f930()*-0.0157992);
}

double NNfunction_ss_cLcL::synapse0x3075a60() {
   return (neuron0x305fc70()*-0.829027);
}

double NNfunction_ss_cLcL::synapse0x3075aa0() {
   return (neuron0x305ffb0()*0.0288851);
}

double NNfunction_ss_cLcL::synapse0x3075ae0() {
   return (neuron0x30602f0()*-0.0172678);
}

double NNfunction_ss_cLcL::synapse0x3075b20() {
   return (neuron0x3060630()*0.0233289);
}

double NNfunction_ss_cLcL::synapse0x30755b0() {
   return (neuron0x3060970()*0.000806876);
}

double NNfunction_ss_cLcL::synapse0x30755f0() {
   return (neuron0x3060ed0()*0.00229783);
}

double NNfunction_ss_cLcL::synapse0x3075c70() {
   return (neuron0x30610f0()*-0.0106535);
}

double NNfunction_ss_cLcL::synapse0x3075cb0() {
   return (neuron0x3061430()*-0.0188383);
}

double NNfunction_ss_cLcL::synapse0x3075cf0() {
   return (neuron0x3061770()*-0.013711);
}

double NNfunction_ss_cLcL::synapse0x3075d30() {
   return (neuron0x3061ab0()*0.0259738);
}

double NNfunction_ss_cLcL::synapse0x3075d70() {
   return (neuron0x3061df0()*-0.0217259);
}

double NNfunction_ss_cLcL::synapse0x3075db0() {
   return (neuron0x3062130()*0.00262323);
}

double NNfunction_ss_cLcL::synapse0x3076130() {
   return (neuron0x305d570()*0.353937);
}

double NNfunction_ss_cLcL::synapse0x3076170() {
   return (neuron0x305d8b0()*0.315864);
}

double NNfunction_ss_cLcL::synapse0x30761b0() {
   return (neuron0x305dbf0()*-1.69752);
}

double NNfunction_ss_cLcL::synapse0x30761f0() {
   return (neuron0x305df30()*-0.100379);
}

double NNfunction_ss_cLcL::synapse0x3076230() {
   return (neuron0x305e270()*0.967321);
}

double NNfunction_ss_cLcL::synapse0x3076270() {
   return (neuron0x305e5b0()*-0.0342985);
}

double NNfunction_ss_cLcL::synapse0x30762b0() {
   return (neuron0x305e8f0()*-0.316393);
}

double NNfunction_ss_cLcL::synapse0x30762f0() {
   return (neuron0x305ec30()*-0.064069);
}

double NNfunction_ss_cLcL::synapse0x3076330() {
   return (neuron0x305ef70()*-0.0783389);
}

double NNfunction_ss_cLcL::synapse0x3076370() {
   return (neuron0x305f2b0()*0.304019);
}

double NNfunction_ss_cLcL::synapse0x30763b0() {
   return (neuron0x305f5f0()*0.239798);
}

double NNfunction_ss_cLcL::synapse0x30763f0() {
   return (neuron0x305f930()*0.78929);
}

double NNfunction_ss_cLcL::synapse0x3076430() {
   return (neuron0x305fc70()*-1.00834);
}

double NNfunction_ss_cLcL::synapse0x3076470() {
   return (neuron0x305ffb0()*0.144432);
}

double NNfunction_ss_cLcL::synapse0x30764b0() {
   return (neuron0x30602f0()*0.412422);
}

double NNfunction_ss_cLcL::synapse0x30764f0() {
   return (neuron0x3060630()*-0.788995);
}

double NNfunction_ss_cLcL::synapse0x3075f80() {
   return (neuron0x3060970()*0.538707);
}

double NNfunction_ss_cLcL::synapse0x3075fc0() {
   return (neuron0x3060ed0()*0.186874);
}

double NNfunction_ss_cLcL::synapse0x3076640() {
   return (neuron0x30610f0()*-0.497348);
}

double NNfunction_ss_cLcL::synapse0x3076680() {
   return (neuron0x3061430()*0.241792);
}

double NNfunction_ss_cLcL::synapse0x30766c0() {
   return (neuron0x3061770()*-0.39871);
}

double NNfunction_ss_cLcL::synapse0x3076700() {
   return (neuron0x3061ab0()*-0.162568);
}

double NNfunction_ss_cLcL::synapse0x3076740() {
   return (neuron0x3061df0()*-0.750094);
}

double NNfunction_ss_cLcL::synapse0x3076780() {
   return (neuron0x3062130()*-0.360298);
}

double NNfunction_ss_cLcL::synapse0x3076b00() {
   return (neuron0x305d570()*-0.10824);
}

double NNfunction_ss_cLcL::synapse0x3076b40() {
   return (neuron0x305d8b0()*0.0185995);
}

double NNfunction_ss_cLcL::synapse0x3076b80() {
   return (neuron0x305dbf0()*-0.35695);
}

double NNfunction_ss_cLcL::synapse0x3076bc0() {
   return (neuron0x305df30()*1.89585);
}

double NNfunction_ss_cLcL::synapse0x3076c00() {
   return (neuron0x305e270()*0.141213);
}

double NNfunction_ss_cLcL::synapse0x3076c40() {
   return (neuron0x305e5b0()*0.307546);
}

double NNfunction_ss_cLcL::synapse0x3076c80() {
   return (neuron0x305e8f0()*0.0578133);
}

double NNfunction_ss_cLcL::synapse0x3076cc0() {
   return (neuron0x305ec30()*-0.0841862);
}

double NNfunction_ss_cLcL::synapse0x3076d00() {
   return (neuron0x305ef70()*0.0646704);
}

double NNfunction_ss_cLcL::synapse0x3076d40() {
   return (neuron0x305f2b0()*-0.112098);
}

double NNfunction_ss_cLcL::synapse0x3076d80() {
   return (neuron0x305f5f0()*-0.0470603);
}

double NNfunction_ss_cLcL::synapse0x3076dc0() {
   return (neuron0x305f930()*0.156165);
}

double NNfunction_ss_cLcL::synapse0x3076e00() {
   return (neuron0x305fc70()*-1.63828);
}

double NNfunction_ss_cLcL::synapse0x3076e40() {
   return (neuron0x305ffb0()*-0.241004);
}

double NNfunction_ss_cLcL::synapse0x3076e80() {
   return (neuron0x30602f0()*-0.196804);
}

double NNfunction_ss_cLcL::synapse0x3076ec0() {
   return (neuron0x3060630()*0.133683);
}

double NNfunction_ss_cLcL::synapse0x3076950() {
   return (neuron0x3060970()*-0.0566271);
}

double NNfunction_ss_cLcL::synapse0x3076990() {
   return (neuron0x3060ed0()*0.138729);
}

double NNfunction_ss_cLcL::synapse0x3077010() {
   return (neuron0x30610f0()*-0.12609);
}

double NNfunction_ss_cLcL::synapse0x3077050() {
   return (neuron0x3061430()*0.276154);
}

double NNfunction_ss_cLcL::synapse0x3077090() {
   return (neuron0x3061770()*0.120235);
}

double NNfunction_ss_cLcL::synapse0x30770d0() {
   return (neuron0x3061ab0()*-0.0637929);
}

double NNfunction_ss_cLcL::synapse0x3077110() {
   return (neuron0x3061df0()*-0.103181);
}

double NNfunction_ss_cLcL::synapse0x3077150() {
   return (neuron0x3062130()*-0.0712544);
}

double NNfunction_ss_cLcL::synapse0x30774d0() {
   return (neuron0x305d570()*0.119262);
}

double NNfunction_ss_cLcL::synapse0x3077510() {
   return (neuron0x305d8b0()*-0.0470931);
}

double NNfunction_ss_cLcL::synapse0x3077550() {
   return (neuron0x305dbf0()*-0.265038);
}

double NNfunction_ss_cLcL::synapse0x3077590() {
   return (neuron0x305df30()*-0.132877);
}

double NNfunction_ss_cLcL::synapse0x30775d0() {
   return (neuron0x305e270()*-0.0149963);
}

double NNfunction_ss_cLcL::synapse0x3077610() {
   return (neuron0x305e5b0()*-0.0880638);
}

double NNfunction_ss_cLcL::synapse0x3077650() {
   return (neuron0x305e8f0()*-0.0444497);
}

double NNfunction_ss_cLcL::synapse0x3077690() {
   return (neuron0x305ec30()*-0.000500794);
}

double NNfunction_ss_cLcL::synapse0x30776d0() {
   return (neuron0x305ef70()*-0.0889361);
}

double NNfunction_ss_cLcL::synapse0x3077710() {
   return (neuron0x305f2b0()*-0.0714679);
}

double NNfunction_ss_cLcL::synapse0x3077750() {
   return (neuron0x305f5f0()*-0.0510602);
}

double NNfunction_ss_cLcL::synapse0x3077790() {
   return (neuron0x305f930()*0.0551695);
}

double NNfunction_ss_cLcL::synapse0x30777d0() {
   return (neuron0x305fc70()*2.6401);
}

double NNfunction_ss_cLcL::synapse0x3077810() {
   return (neuron0x305ffb0()*0.0486507);
}

double NNfunction_ss_cLcL::synapse0x3077850() {
   return (neuron0x30602f0()*0.0814939);
}

double NNfunction_ss_cLcL::synapse0x3077890() {
   return (neuron0x3060630()*0.0144732);
}

double NNfunction_ss_cLcL::synapse0x3077320() {
   return (neuron0x3060970()*0.0451944);
}

double NNfunction_ss_cLcL::synapse0x3077360() {
   return (neuron0x3060ed0()*0.0167737);
}

double NNfunction_ss_cLcL::synapse0x30779e0() {
   return (neuron0x30610f0()*-0.00114522);
}

double NNfunction_ss_cLcL::synapse0x3077a20() {
   return (neuron0x3061430()*-0.0253652);
}

double NNfunction_ss_cLcL::synapse0x3077a60() {
   return (neuron0x3061770()*-0.016841);
}

double NNfunction_ss_cLcL::synapse0x3077aa0() {
   return (neuron0x3061ab0()*-0.0188165);
}

double NNfunction_ss_cLcL::synapse0x3077ae0() {
   return (neuron0x3061df0()*0.0341167);
}

double NNfunction_ss_cLcL::synapse0x3077b20() {
   return (neuron0x3062130()*0.0403284);
}

double NNfunction_ss_cLcL::synapse0x3077ea0() {
   return (neuron0x305d570()*0.00509951);
}

double NNfunction_ss_cLcL::synapse0x306c470() {
   return (neuron0x305d8b0()*0.0486719);
}

double NNfunction_ss_cLcL::synapse0x306c4b0() {
   return (neuron0x305dbf0()*0.04347);
}

double NNfunction_ss_cLcL::synapse0x306c4f0() {
   return (neuron0x305df30()*-16.6776);
}

double NNfunction_ss_cLcL::synapse0x306c740() {
   return (neuron0x305e270()*0.0578772);
}

double NNfunction_ss_cLcL::synapse0x306c780() {
   return (neuron0x305e5b0()*0.0158171);
}

double NNfunction_ss_cLcL::synapse0x306c7c0() {
   return (neuron0x305e8f0()*-0.0370056);
}

double NNfunction_ss_cLcL::synapse0x306ca10() {
   return (neuron0x305ec30()*0.0650123);
}

double NNfunction_ss_cLcL::synapse0x306ca50() {
   return (neuron0x305ef70()*0.0402866);
}

double NNfunction_ss_cLcL::synapse0x306cca0() {
   return (neuron0x305f2b0()*-0.0795688);
}

double NNfunction_ss_cLcL::synapse0x306cce0() {
   return (neuron0x305f5f0()*0.00898051);
}

double NNfunction_ss_cLcL::synapse0x306cd20() {
   return (neuron0x305f930()*-0.0334305);
}

double NNfunction_ss_cLcL::synapse0x306cf70() {
   return (neuron0x305fc70()*-0.0445541);
}

double NNfunction_ss_cLcL::synapse0x306cfb0() {
   return (neuron0x305ffb0()*-0.0120829);
}

double NNfunction_ss_cLcL::synapse0x306d200() {
   return (neuron0x30602f0()*0.0396213);
}

double NNfunction_ss_cLcL::synapse0x306d240() {
   return (neuron0x3060630()*-0.0339955);
}

double NNfunction_ss_cLcL::synapse0x3077cf0() {
   return (neuron0x3060970()*0.00469725);
}

double NNfunction_ss_cLcL::synapse0x3077d30() {
   return (neuron0x3060ed0()*0.0277429);
}

double NNfunction_ss_cLcL::synapse0x306d390() {
   return (neuron0x30610f0()*-0.0328601);
}

double NNfunction_ss_cLcL::synapse0x306d8a0() {
   return (neuron0x3061430()*0.00579354);
}

double NNfunction_ss_cLcL::synapse0x306d8e0() {
   return (neuron0x3061770()*0.00606129);
}

double NNfunction_ss_cLcL::synapse0x306d920() {
   return (neuron0x3061ab0()*-0.0215418);
}

double NNfunction_ss_cLcL::synapse0x306db70() {
   return (neuron0x3061df0()*-0.0371051);
}

double NNfunction_ss_cLcL::synapse0x306dbb0() {
   return (neuron0x3062130()*-0.0612803);
}

double NNfunction_ss_cLcL::synapse0x306d460() {
   return (neuron0x305d570()*0.646453);
}

double NNfunction_ss_cLcL::synapse0x306d4a0() {
   return (neuron0x305d8b0()*-1.28211);
}

double NNfunction_ss_cLcL::synapse0x306d4e0() {
   return (neuron0x305dbf0()*-0.861527);
}

double NNfunction_ss_cLcL::synapse0x306d520() {
   return (neuron0x305df30()*-0.292192);
}

double NNfunction_ss_cLcL::synapse0x306dea0() {
   return (neuron0x305e270()*1.05664);
}

double NNfunction_ss_cLcL::synapse0x307a1f0() {
   return (neuron0x305e5b0()*0.455825);
}

double NNfunction_ss_cLcL::synapse0x307a230() {
   return (neuron0x305e8f0()*0.560595);
}

double NNfunction_ss_cLcL::synapse0x307a270() {
   return (neuron0x305ec30()*-0.501046);
}

double NNfunction_ss_cLcL::synapse0x307a2b0() {
   return (neuron0x305ef70()*0.15392);
}

double NNfunction_ss_cLcL::synapse0x307a2f0() {
   return (neuron0x305f2b0()*0.6132);
}

double NNfunction_ss_cLcL::synapse0x307a330() {
   return (neuron0x305f5f0()*0.486545);
}

double NNfunction_ss_cLcL::synapse0x307a370() {
   return (neuron0x305f930()*-0.07537);
}

double NNfunction_ss_cLcL::synapse0x307a3b0() {
   return (neuron0x305fc70()*-0.76504);
}

double NNfunction_ss_cLcL::synapse0x307a3f0() {
   return (neuron0x305ffb0()*0.159816);
}

double NNfunction_ss_cLcL::synapse0x307a430() {
   return (neuron0x30602f0()*-0.0988457);
}

double NNfunction_ss_cLcL::synapse0x307a470() {
   return (neuron0x3060630()*0.125433);
}

double NNfunction_ss_cLcL::synapse0x306dd80() {
   return (neuron0x3060970()*0.372423);
}

double NNfunction_ss_cLcL::synapse0x306ddc0() {
   return (neuron0x3060ed0()*0.399227);
}

double NNfunction_ss_cLcL::synapse0x307a5c0() {
   return (neuron0x30610f0()*0.380479);
}

double NNfunction_ss_cLcL::synapse0x307a600() {
   return (neuron0x3061430()*-1.00002);
}

double NNfunction_ss_cLcL::synapse0x307a640() {
   return (neuron0x3061770()*-0.439371);
}

double NNfunction_ss_cLcL::synapse0x307a680() {
   return (neuron0x3061ab0()*-0.098269);
}

double NNfunction_ss_cLcL::synapse0x307a6c0() {
   return (neuron0x3061df0()*-0.376053);
}

double NNfunction_ss_cLcL::synapse0x307a700() {
   return (neuron0x3062130()*0.167129);
}

double NNfunction_ss_cLcL::synapse0x307aa80() {
   return (neuron0x305d570()*-0.0518714);
}

double NNfunction_ss_cLcL::synapse0x307aac0() {
   return (neuron0x305d8b0()*-0.216769);
}

double NNfunction_ss_cLcL::synapse0x307ab00() {
   return (neuron0x305dbf0()*0.0163942);
}

double NNfunction_ss_cLcL::synapse0x307ab40() {
   return (neuron0x305df30()*2.39691);
}

double NNfunction_ss_cLcL::synapse0x307ab80() {
   return (neuron0x305e270()*-0.071218);
}

double NNfunction_ss_cLcL::synapse0x307abc0() {
   return (neuron0x305e5b0()*0.0138143);
}

double NNfunction_ss_cLcL::synapse0x307ac00() {
   return (neuron0x305e8f0()*0.014325);
}

double NNfunction_ss_cLcL::synapse0x307ac40() {
   return (neuron0x305ec30()*0.303919);
}

double NNfunction_ss_cLcL::synapse0x307ac80() {
   return (neuron0x305ef70()*0.0811831);
}

double NNfunction_ss_cLcL::synapse0x307acc0() {
   return (neuron0x305f2b0()*0.10755);
}

double NNfunction_ss_cLcL::synapse0x307ad00() {
   return (neuron0x305f5f0()*-0.00262698);
}

double NNfunction_ss_cLcL::synapse0x307ad40() {
   return (neuron0x305f930()*0.178706);
}

double NNfunction_ss_cLcL::synapse0x307ad80() {
   return (neuron0x305fc70()*1.44255);
}

double NNfunction_ss_cLcL::synapse0x307adc0() {
   return (neuron0x305ffb0()*-0.238901);
}

double NNfunction_ss_cLcL::synapse0x307ae00() {
   return (neuron0x30602f0()*0.0897269);
}

double NNfunction_ss_cLcL::synapse0x307ae40() {
   return (neuron0x3060630()*-0.0568855);
}

double NNfunction_ss_cLcL::synapse0x307a8d0() {
   return (neuron0x3060970()*-0.0294533);
}

double NNfunction_ss_cLcL::synapse0x307a910() {
   return (neuron0x3060ed0()*-0.0137579);
}

double NNfunction_ss_cLcL::synapse0x307af90() {
   return (neuron0x30610f0()*0.413209);
}

double NNfunction_ss_cLcL::synapse0x307afd0() {
   return (neuron0x3061430()*0.0275952);
}

double NNfunction_ss_cLcL::synapse0x307b010() {
   return (neuron0x3061770()*-0.0883005);
}

double NNfunction_ss_cLcL::synapse0x307b050() {
   return (neuron0x3061ab0()*-0.0257481);
}

double NNfunction_ss_cLcL::synapse0x307b090() {
   return (neuron0x3061df0()*-0.017698);
}

double NNfunction_ss_cLcL::synapse0x307b0d0() {
   return (neuron0x3062130()*-0.090912);
}

double NNfunction_ss_cLcL::synapse0x307b450() {
   return (neuron0x305d570()*0.152027);
}

double NNfunction_ss_cLcL::synapse0x307b490() {
   return (neuron0x305d8b0()*-0.112769);
}

double NNfunction_ss_cLcL::synapse0x307b4d0() {
   return (neuron0x305dbf0()*-0.189123);
}

double NNfunction_ss_cLcL::synapse0x307b510() {
   return (neuron0x305df30()*0.0663763);
}

double NNfunction_ss_cLcL::synapse0x307b550() {
   return (neuron0x305e270()*-0.0198029);
}

double NNfunction_ss_cLcL::synapse0x307b590() {
   return (neuron0x305e5b0()*0.0717462);
}

double NNfunction_ss_cLcL::synapse0x307b5d0() {
   return (neuron0x305e8f0()*0.150291);
}

double NNfunction_ss_cLcL::synapse0x307b610() {
   return (neuron0x305ec30()*-0.0332001);
}

double NNfunction_ss_cLcL::synapse0x307b650() {
   return (neuron0x305ef70()*-0.00303681);
}

double NNfunction_ss_cLcL::synapse0x307b690() {
   return (neuron0x305f2b0()*0.0404098);
}

double NNfunction_ss_cLcL::synapse0x307b6d0() {
   return (neuron0x305f5f0()*0.0106726);
}

double NNfunction_ss_cLcL::synapse0x307b710() {
   return (neuron0x305f930()*0.37638);
}

double NNfunction_ss_cLcL::synapse0x307b750() {
   return (neuron0x305fc70()*-0.395412);
}

double NNfunction_ss_cLcL::synapse0x307b790() {
   return (neuron0x305ffb0()*-0.209576);
}

double NNfunction_ss_cLcL::synapse0x307b7d0() {
   return (neuron0x30602f0()*0.986552);
}

double NNfunction_ss_cLcL::synapse0x307b810() {
   return (neuron0x3060630()*1.19767);
}

double NNfunction_ss_cLcL::synapse0x307b2a0() {
   return (neuron0x3060970()*-0.185989);
}

double NNfunction_ss_cLcL::synapse0x307b2e0() {
   return (neuron0x3060ed0()*-0.0843709);
}

double NNfunction_ss_cLcL::synapse0x307b960() {
   return (neuron0x30610f0()*-0.23229);
}

double NNfunction_ss_cLcL::synapse0x307b9a0() {
   return (neuron0x3061430()*0.0479978);
}

double NNfunction_ss_cLcL::synapse0x307b9e0() {
   return (neuron0x3061770()*0.24228);
}

double NNfunction_ss_cLcL::synapse0x307ba20() {
   return (neuron0x3061ab0()*0.0856695);
}

double NNfunction_ss_cLcL::synapse0x307ba60() {
   return (neuron0x3061df0()*8.22759e-05);
}

double NNfunction_ss_cLcL::synapse0x307baa0() {
   return (neuron0x3062130()*0.0406866);
}

double NNfunction_ss_cLcL::synapse0x307be20() {
   return (neuron0x305d570()*-0.443241);
}

double NNfunction_ss_cLcL::synapse0x307be60() {
   return (neuron0x305d8b0()*-0.503296);
}

double NNfunction_ss_cLcL::synapse0x307bea0() {
   return (neuron0x305dbf0()*-0.9849);
}

double NNfunction_ss_cLcL::synapse0x307bee0() {
   return (neuron0x305df30()*0.0934831);
}

double NNfunction_ss_cLcL::synapse0x307bf20() {
   return (neuron0x305e270()*0.0231416);
}

double NNfunction_ss_cLcL::synapse0x307bf60() {
   return (neuron0x305e5b0()*-0.755966);
}

double NNfunction_ss_cLcL::synapse0x307bfa0() {
   return (neuron0x305e8f0()*-0.983622);
}

double NNfunction_ss_cLcL::synapse0x307bfe0() {
   return (neuron0x305ec30()*-0.177376);
}

double NNfunction_ss_cLcL::synapse0x307c020() {
   return (neuron0x305ef70()*0.71797);
}

double NNfunction_ss_cLcL::synapse0x307c060() {
   return (neuron0x305f2b0()*0.132081);
}

double NNfunction_ss_cLcL::synapse0x307c0a0() {
   return (neuron0x305f5f0()*-0.107587);
}

double NNfunction_ss_cLcL::synapse0x307c0e0() {
   return (neuron0x305f930()*-0.110621);
}

double NNfunction_ss_cLcL::synapse0x307c120() {
   return (neuron0x305fc70()*-1.3509);
}

double NNfunction_ss_cLcL::synapse0x307c160() {
   return (neuron0x305ffb0()*-0.346074);
}

double NNfunction_ss_cLcL::synapse0x307c1a0() {
   return (neuron0x30602f0()*-0.532964);
}

double NNfunction_ss_cLcL::synapse0x307c1e0() {
   return (neuron0x3060630()*-0.0886141);
}

double NNfunction_ss_cLcL::synapse0x307bc70() {
   return (neuron0x3060970()*-0.171391);
}

double NNfunction_ss_cLcL::synapse0x307bcb0() {
   return (neuron0x3060ed0()*-0.0478954);
}

double NNfunction_ss_cLcL::synapse0x307c330() {
   return (neuron0x30610f0()*0.309738);
}

double NNfunction_ss_cLcL::synapse0x307c370() {
   return (neuron0x3061430()*-1.18473);
}

double NNfunction_ss_cLcL::synapse0x307c3b0() {
   return (neuron0x3061770()*0.366941);
}

double NNfunction_ss_cLcL::synapse0x307c3f0() {
   return (neuron0x3061ab0()*0.266161);
}

double NNfunction_ss_cLcL::synapse0x307c430() {
   return (neuron0x3061df0()*-0.373813);
}

double NNfunction_ss_cLcL::synapse0x307c470() {
   return (neuron0x3062130()*0.0423602);
}

double NNfunction_ss_cLcL::synapse0x307c7f0() {
   return (neuron0x305d570()*0.025096);
}

double NNfunction_ss_cLcL::synapse0x307c830() {
   return (neuron0x305d8b0()*0.0423714);
}

double NNfunction_ss_cLcL::synapse0x307c870() {
   return (neuron0x305dbf0()*-0.039744);
}

double NNfunction_ss_cLcL::synapse0x307c8b0() {
   return (neuron0x305df30()*2.74021);
}

double NNfunction_ss_cLcL::synapse0x307c8f0() {
   return (neuron0x305e270()*0.0153405);
}

double NNfunction_ss_cLcL::synapse0x307c930() {
   return (neuron0x305e5b0()*-0.00370819);
}

double NNfunction_ss_cLcL::synapse0x307c970() {
   return (neuron0x305e8f0()*-0.0106474);
}

double NNfunction_ss_cLcL::synapse0x307c9b0() {
   return (neuron0x305ec30()*0.00521122);
}

double NNfunction_ss_cLcL::synapse0x307c9f0() {
   return (neuron0x305ef70()*-0.0039406);
}

double NNfunction_ss_cLcL::synapse0x307ca30() {
   return (neuron0x305f2b0()*0.0223162);
}

double NNfunction_ss_cLcL::synapse0x307ca70() {
   return (neuron0x305f5f0()*0.0111908);
}

double NNfunction_ss_cLcL::synapse0x307cab0() {
   return (neuron0x305f930()*-0.064635);
}

double NNfunction_ss_cLcL::synapse0x307caf0() {
   return (neuron0x305fc70()*0.19012);
}

double NNfunction_ss_cLcL::synapse0x307cb30() {
   return (neuron0x305ffb0()*0.0401319);
}

double NNfunction_ss_cLcL::synapse0x307cb70() {
   return (neuron0x30602f0()*-0.0270813);
}

double NNfunction_ss_cLcL::synapse0x307cbb0() {
   return (neuron0x3060630()*-0.0341092);
}

double NNfunction_ss_cLcL::synapse0x307c640() {
   return (neuron0x3060970()*0.0292788);
}

double NNfunction_ss_cLcL::synapse0x307c680() {
   return (neuron0x3060ed0()*0.0316198);
}

double NNfunction_ss_cLcL::synapse0x307cd00() {
   return (neuron0x30610f0()*-0.0495429);
}

double NNfunction_ss_cLcL::synapse0x307cd40() {
   return (neuron0x3061430()*-0.0180893);
}

double NNfunction_ss_cLcL::synapse0x307cd80() {
   return (neuron0x3061770()*0.00424023);
}

double NNfunction_ss_cLcL::synapse0x307cdc0() {
   return (neuron0x3061ab0()*0.0170974);
}

double NNfunction_ss_cLcL::synapse0x307ce00() {
   return (neuron0x3061df0()*0.0288014);
}

double NNfunction_ss_cLcL::synapse0x307ce40() {
   return (neuron0x3062130()*-0.0173737);
}

double NNfunction_ss_cLcL::synapse0x307d1c0() {
   return (neuron0x305d570()*-0.355443);
}

double NNfunction_ss_cLcL::synapse0x307d200() {
   return (neuron0x305d8b0()*-0.408099);
}

double NNfunction_ss_cLcL::synapse0x307d240() {
   return (neuron0x305dbf0()*-0.1709);
}

double NNfunction_ss_cLcL::synapse0x307d280() {
   return (neuron0x305df30()*0.683233);
}

double NNfunction_ss_cLcL::synapse0x307d2c0() {
   return (neuron0x305e270()*-0.584256);
}

double NNfunction_ss_cLcL::synapse0x307d300() {
   return (neuron0x305e5b0()*-0.854142);
}

double NNfunction_ss_cLcL::synapse0x307d340() {
   return (neuron0x305e8f0()*-0.256274);
}

double NNfunction_ss_cLcL::synapse0x307d380() {
   return (neuron0x305ec30()*0.193629);
}

double NNfunction_ss_cLcL::synapse0x307d3c0() {
   return (neuron0x305ef70()*-0.0137403);
}

double NNfunction_ss_cLcL::synapse0x307d400() {
   return (neuron0x305f2b0()*0.404191);
}

double NNfunction_ss_cLcL::synapse0x307d440() {
   return (neuron0x305f5f0()*0.450795);
}

double NNfunction_ss_cLcL::synapse0x307d480() {
   return (neuron0x305f930()*-1.15172);
}

double NNfunction_ss_cLcL::synapse0x307d4c0() {
   return (neuron0x305fc70()*-0.968862);
}

double NNfunction_ss_cLcL::synapse0x307d500() {
   return (neuron0x305ffb0()*-0.548102);
}

double NNfunction_ss_cLcL::synapse0x307d540() {
   return (neuron0x30602f0()*0.0913017);
}

double NNfunction_ss_cLcL::synapse0x307d580() {
   return (neuron0x3060630()*-0.610027);
}

double NNfunction_ss_cLcL::synapse0x307d010() {
   return (neuron0x3060970()*-0.327246);
}

double NNfunction_ss_cLcL::synapse0x307d050() {
   return (neuron0x3060ed0()*0.752195);
}

double NNfunction_ss_cLcL::synapse0x307d6d0() {
   return (neuron0x30610f0()*-0.247888);
}

double NNfunction_ss_cLcL::synapse0x307d710() {
   return (neuron0x3061430()*0.126182);
}

double NNfunction_ss_cLcL::synapse0x307d750() {
   return (neuron0x3061770()*0.348039);
}

double NNfunction_ss_cLcL::synapse0x307d790() {
   return (neuron0x3061ab0()*0.525671);
}

double NNfunction_ss_cLcL::synapse0x307d7d0() {
   return (neuron0x3061df0()*0.274838);
}

double NNfunction_ss_cLcL::synapse0x307d810() {
   return (neuron0x3062130()*-0.133018);
}

double NNfunction_ss_cLcL::synapse0x307db90() {
   return (neuron0x305d570()*0.388987);
}

double NNfunction_ss_cLcL::synapse0x307dbd0() {
   return (neuron0x305d8b0()*-0.100108);
}

double NNfunction_ss_cLcL::synapse0x307dc10() {
   return (neuron0x305dbf0()*0.465614);
}

double NNfunction_ss_cLcL::synapse0x307dc50() {
   return (neuron0x305df30()*-1.03949);
}

double NNfunction_ss_cLcL::synapse0x307dc90() {
   return (neuron0x305e270()*0.125808);
}

double NNfunction_ss_cLcL::synapse0x307dcd0() {
   return (neuron0x305e5b0()*-0.408932);
}

double NNfunction_ss_cLcL::synapse0x307dd10() {
   return (neuron0x305e8f0()*0.488102);
}

double NNfunction_ss_cLcL::synapse0x307dd50() {
   return (neuron0x305ec30()*-0.0795785);
}

double NNfunction_ss_cLcL::synapse0x307dd90() {
   return (neuron0x305ef70()*-0.159404);
}

double NNfunction_ss_cLcL::synapse0x307ddd0() {
   return (neuron0x305f2b0()*0.68197);
}

double NNfunction_ss_cLcL::synapse0x307de10() {
   return (neuron0x305f5f0()*-0.420734);
}

double NNfunction_ss_cLcL::synapse0x307de50() {
   return (neuron0x305f930()*0.185806);
}

double NNfunction_ss_cLcL::synapse0x307de90() {
   return (neuron0x305fc70()*1.45543);
}

double NNfunction_ss_cLcL::synapse0x307ded0() {
   return (neuron0x305ffb0()*0.380775);
}

double NNfunction_ss_cLcL::synapse0x307df10() {
   return (neuron0x30602f0()*0.0106982);
}

double NNfunction_ss_cLcL::synapse0x307df50() {
   return (neuron0x3060630()*-0.32678);
}

double NNfunction_ss_cLcL::synapse0x307d9e0() {
   return (neuron0x3060970()*0.386846);
}

double NNfunction_ss_cLcL::synapse0x307da20() {
   return (neuron0x3060ed0()*0.213981);
}

double NNfunction_ss_cLcL::synapse0x307e0a0() {
   return (neuron0x30610f0()*0.056127);
}

double NNfunction_ss_cLcL::synapse0x307e0e0() {
   return (neuron0x3061430()*-0.225357);
}

double NNfunction_ss_cLcL::synapse0x307e120() {
   return (neuron0x3061770()*0.183312);
}

double NNfunction_ss_cLcL::synapse0x307e160() {
   return (neuron0x3061ab0()*-0.2609);
}

double NNfunction_ss_cLcL::synapse0x307e1a0() {
   return (neuron0x3061df0()*0.450287);
}

double NNfunction_ss_cLcL::synapse0x307e1e0() {
   return (neuron0x3062130()*0.000191286);
}

double NNfunction_ss_cLcL::synapse0x307e560() {
   return (neuron0x305d570()*0.18386);
}

double NNfunction_ss_cLcL::synapse0x307e5a0() {
   return (neuron0x305d8b0()*-0.158403);
}

double NNfunction_ss_cLcL::synapse0x307e5e0() {
   return (neuron0x305dbf0()*0.582605);
}

double NNfunction_ss_cLcL::synapse0x307e620() {
   return (neuron0x305df30()*0.290571);
}

double NNfunction_ss_cLcL::synapse0x307e660() {
   return (neuron0x305e270()*-0.429641);
}

double NNfunction_ss_cLcL::synapse0x307e6a0() {
   return (neuron0x305e5b0()*-0.812183);
}

double NNfunction_ss_cLcL::synapse0x307e6e0() {
   return (neuron0x305e8f0()*-0.0609611);
}

double NNfunction_ss_cLcL::synapse0x307e720() {
   return (neuron0x305ec30()*0.557922);
}

double NNfunction_ss_cLcL::synapse0x307e760() {
   return (neuron0x305ef70()*0.826505);
}

double NNfunction_ss_cLcL::synapse0x307e7a0() {
   return (neuron0x305f2b0()*-0.218196);
}

double NNfunction_ss_cLcL::synapse0x307e7e0() {
   return (neuron0x305f5f0()*-0.389075);
}

double NNfunction_ss_cLcL::synapse0x307e820() {
   return (neuron0x305f930()*-0.431522);
}

double NNfunction_ss_cLcL::synapse0x307e860() {
   return (neuron0x305fc70()*-0.39686);
}

double NNfunction_ss_cLcL::synapse0x307e8a0() {
   return (neuron0x305ffb0()*0.0753374);
}

double NNfunction_ss_cLcL::synapse0x307e8e0() {
   return (neuron0x30602f0()*0.448152);
}

double NNfunction_ss_cLcL::synapse0x307e920() {
   return (neuron0x3060630()*-0.195417);
}

double NNfunction_ss_cLcL::synapse0x307e3b0() {
   return (neuron0x3060970()*-0.301892);
}

double NNfunction_ss_cLcL::synapse0x307e3f0() {
   return (neuron0x3060ed0()*0.463051);
}

double NNfunction_ss_cLcL::synapse0x307ea70() {
   return (neuron0x30610f0()*0.128301);
}

double NNfunction_ss_cLcL::synapse0x307eab0() {
   return (neuron0x3061430()*0.416955);
}

double NNfunction_ss_cLcL::synapse0x307eaf0() {
   return (neuron0x3061770()*-0.0798966);
}

double NNfunction_ss_cLcL::synapse0x307eb30() {
   return (neuron0x3061ab0()*0.0101226);
}

double NNfunction_ss_cLcL::synapse0x307eb70() {
   return (neuron0x3061df0()*-0.0793004);
}

double NNfunction_ss_cLcL::synapse0x307ebb0() {
   return (neuron0x3062130()*0.609044);
}

double NNfunction_ss_cLcL::synapse0x3067660() {
   return (neuron0x305d570()*0.0738887);
}

double NNfunction_ss_cLcL::synapse0x30676a0() {
   return (neuron0x305d8b0()*-0.368029);
}

double NNfunction_ss_cLcL::synapse0x30676e0() {
   return (neuron0x305dbf0()*-0.973571);
}

double NNfunction_ss_cLcL::synapse0x3067720() {
   return (neuron0x305df30()*0.190571);
}

double NNfunction_ss_cLcL::synapse0x3067760() {
   return (neuron0x305e270()*-0.00347199);
}

double NNfunction_ss_cLcL::synapse0x30677a0() {
   return (neuron0x305e5b0()*0.0940724);
}

double NNfunction_ss_cLcL::synapse0x30677e0() {
   return (neuron0x305e8f0()*0.139887);
}

double NNfunction_ss_cLcL::synapse0x3067820() {
   return (neuron0x305ec30()*-0.245328);
}

double NNfunction_ss_cLcL::synapse0x307f340() {
   return (neuron0x305ef70()*0.14872);
}

double NNfunction_ss_cLcL::synapse0x307f380() {
   return (neuron0x305f2b0()*0.0679574);
}

double NNfunction_ss_cLcL::synapse0x307f3c0() {
   return (neuron0x305f5f0()*0.0549444);
}

double NNfunction_ss_cLcL::synapse0x307f400() {
   return (neuron0x305f930()*0.00906912);
}

double NNfunction_ss_cLcL::synapse0x307f440() {
   return (neuron0x305fc70()*0.185012);
}

double NNfunction_ss_cLcL::synapse0x307f480() {
   return (neuron0x305ffb0()*0.122109);
}

double NNfunction_ss_cLcL::synapse0x307f4c0() {
   return (neuron0x30602f0()*-0.0898507);
}

double NNfunction_ss_cLcL::synapse0x307f500() {
   return (neuron0x3060630()*-0.337651);
}

double NNfunction_ss_cLcL::synapse0x307ed80() {
   return (neuron0x3060970()*0.130438);
}

double NNfunction_ss_cLcL::synapse0x307edc0() {
   return (neuron0x3060ed0()*-0.104823);
}

double NNfunction_ss_cLcL::synapse0x307f650() {
   return (neuron0x30610f0()*-0.115785);
}

double NNfunction_ss_cLcL::synapse0x307f690() {
   return (neuron0x3061430()*0.0167559);
}

double NNfunction_ss_cLcL::synapse0x307f6d0() {
   return (neuron0x3061770()*0.0473019);
}

double NNfunction_ss_cLcL::synapse0x307f710() {
   return (neuron0x3061ab0()*-0.0612979);
}

double NNfunction_ss_cLcL::synapse0x307f750() {
   return (neuron0x3061df0()*-0.119186);
}

double NNfunction_ss_cLcL::synapse0x307f790() {
   return (neuron0x3062130()*-0.0198233);
}

double NNfunction_ss_cLcL::synapse0x307fb10() {
   return (neuron0x305d570()*0.0841054);
}

double NNfunction_ss_cLcL::synapse0x307fb50() {
   return (neuron0x305d8b0()*0.525423);
}

double NNfunction_ss_cLcL::synapse0x307fb90() {
   return (neuron0x305dbf0()*-1.09292);
}

double NNfunction_ss_cLcL::synapse0x307fbd0() {
   return (neuron0x305df30()*0.16269);
}

double NNfunction_ss_cLcL::synapse0x307fc10() {
   return (neuron0x305e270()*0.393675);
}

double NNfunction_ss_cLcL::synapse0x307fc50() {
   return (neuron0x305e5b0()*0.0894035);
}

double NNfunction_ss_cLcL::synapse0x307fc90() {
   return (neuron0x305e8f0()*0.806641);
}

double NNfunction_ss_cLcL::synapse0x307fcd0() {
   return (neuron0x305ec30()*0.104669);
}

double NNfunction_ss_cLcL::synapse0x307fd10() {
   return (neuron0x305ef70()*0.0994984);
}

double NNfunction_ss_cLcL::synapse0x307fd50() {
   return (neuron0x305f2b0()*-0.555021);
}

double NNfunction_ss_cLcL::synapse0x307fd90() {
   return (neuron0x305f5f0()*-1.10579);
}

double NNfunction_ss_cLcL::synapse0x307fdd0() {
   return (neuron0x305f930()*-0.647467);
}

double NNfunction_ss_cLcL::synapse0x307fe10() {
   return (neuron0x305fc70()*-0.276891);
}

double NNfunction_ss_cLcL::synapse0x307fe50() {
   return (neuron0x305ffb0()*-0.41364);
}

double NNfunction_ss_cLcL::synapse0x307fe90() {
   return (neuron0x30602f0()*-0.0682567);
}

double NNfunction_ss_cLcL::synapse0x307fed0() {
   return (neuron0x3060630()*-0.159327);
}

double NNfunction_ss_cLcL::synapse0x307f960() {
   return (neuron0x3060970()*-0.535678);
}

double NNfunction_ss_cLcL::synapse0x307f9a0() {
   return (neuron0x3060ed0()*-0.300887);
}

double NNfunction_ss_cLcL::synapse0x3080020() {
   return (neuron0x30610f0()*-0.0517075);
}

double NNfunction_ss_cLcL::synapse0x3080060() {
   return (neuron0x3061430()*-0.166943);
}

double NNfunction_ss_cLcL::synapse0x30800a0() {
   return (neuron0x3061770()*0.0726809);
}

double NNfunction_ss_cLcL::synapse0x30800e0() {
   return (neuron0x3061ab0()*0.108555);
}

double NNfunction_ss_cLcL::synapse0x3080120() {
   return (neuron0x3061df0()*0.177836);
}

double NNfunction_ss_cLcL::synapse0x3080160() {
   return (neuron0x3062130()*0.157982);
}

double NNfunction_ss_cLcL::synapse0x30804e0() {
   return (neuron0x305d570()*0.0562733);
}

double NNfunction_ss_cLcL::synapse0x3080520() {
   return (neuron0x305d8b0()*0.00945428);
}

double NNfunction_ss_cLcL::synapse0x3080560() {
   return (neuron0x305dbf0()*-0.0970706);
}

double NNfunction_ss_cLcL::synapse0x30805a0() {
   return (neuron0x305df30()*-0.0878046);
}

double NNfunction_ss_cLcL::synapse0x30805e0() {
   return (neuron0x305e270()*0.0230648);
}

double NNfunction_ss_cLcL::synapse0x3080620() {
   return (neuron0x305e5b0()*-0.0213963);
}

double NNfunction_ss_cLcL::synapse0x3080660() {
   return (neuron0x305e8f0()*-0.00727204);
}

double NNfunction_ss_cLcL::synapse0x30806a0() {
   return (neuron0x305ec30()*0.0142583);
}

double NNfunction_ss_cLcL::synapse0x30806e0() {
   return (neuron0x305ef70()*-0.170023);
}

double NNfunction_ss_cLcL::synapse0x3080720() {
   return (neuron0x305f2b0()*0.00308999);
}

double NNfunction_ss_cLcL::synapse0x3080760() {
   return (neuron0x305f5f0()*-0.0236525);
}

double NNfunction_ss_cLcL::synapse0x30807a0() {
   return (neuron0x305f930()*0.036786);
}

double NNfunction_ss_cLcL::synapse0x30807e0() {
   return (neuron0x305fc70()*1.13947);
}

double NNfunction_ss_cLcL::synapse0x3080820() {
   return (neuron0x305ffb0()*0.0504885);
}

double NNfunction_ss_cLcL::synapse0x3080860() {
   return (neuron0x30602f0()*-0.00187956);
}

double NNfunction_ss_cLcL::synapse0x30808a0() {
   return (neuron0x3060630()*0.0276353);
}

double NNfunction_ss_cLcL::synapse0x3080330() {
   return (neuron0x3060970()*0.0121006);
}

double NNfunction_ss_cLcL::synapse0x3080370() {
   return (neuron0x3060ed0()*0.0312296);
}

double NNfunction_ss_cLcL::synapse0x3070ea0() {
   return (neuron0x30610f0()*-0.0132385);
}

double NNfunction_ss_cLcL::synapse0x3070ee0() {
   return (neuron0x3061430()*-0.0187319);
}

double NNfunction_ss_cLcL::synapse0x3070f20() {
   return (neuron0x3061770()*0.00638615);
}

double NNfunction_ss_cLcL::synapse0x3070f60() {
   return (neuron0x3061ab0()*0.0120977);
}

double NNfunction_ss_cLcL::synapse0x3070fa0() {
   return (neuron0x3061df0()*0.00197002);
}

double NNfunction_ss_cLcL::synapse0x3070fe0() {
   return (neuron0x3062130()*-0.00506285);
}

double NNfunction_ss_cLcL::synapse0x3071360() {
   return (neuron0x305d570()*0.0205215);
}

double NNfunction_ss_cLcL::synapse0x30713a0() {
   return (neuron0x305d8b0()*-0.0130231);
}

double NNfunction_ss_cLcL::synapse0x30713e0() {
   return (neuron0x305dbf0()*-0.118055);
}

double NNfunction_ss_cLcL::synapse0x3071420() {
   return (neuron0x305df30()*3.92816);
}

double NNfunction_ss_cLcL::synapse0x3071460() {
   return (neuron0x305e270()*-0.0709447);
}

double NNfunction_ss_cLcL::synapse0x30714a0() {
   return (neuron0x305e5b0()*-0.0251076);
}

double NNfunction_ss_cLcL::synapse0x30714e0() {
   return (neuron0x305e8f0()*0.0457588);
}

double NNfunction_ss_cLcL::synapse0x3071520() {
   return (neuron0x305ec30()*0.0374745);
}

double NNfunction_ss_cLcL::synapse0x3071560() {
   return (neuron0x305ef70()*-0.0443882);
}

double NNfunction_ss_cLcL::synapse0x30715a0() {
   return (neuron0x305f2b0()*-0.038639);
}

double NNfunction_ss_cLcL::synapse0x30715e0() {
   return (neuron0x305f5f0()*0.0420204);
}

double NNfunction_ss_cLcL::synapse0x3071620() {
   return (neuron0x305f930()*0.20981);
}

double NNfunction_ss_cLcL::synapse0x3071660() {
   return (neuron0x305fc70()*0.0645682);
}

double NNfunction_ss_cLcL::synapse0x30716a0() {
   return (neuron0x305ffb0()*0.0809919);
}

double NNfunction_ss_cLcL::synapse0x30716e0() {
   return (neuron0x30602f0()*0.123578);
}

double NNfunction_ss_cLcL::synapse0x3071720() {
   return (neuron0x3060630()*0.119608);
}

double NNfunction_ss_cLcL::synapse0x30711b0() {
   return (neuron0x3060970()*-0.0333055);
}

double NNfunction_ss_cLcL::synapse0x30711f0() {
   return (neuron0x3060ed0()*0.0413627);
}

double NNfunction_ss_cLcL::synapse0x3071870() {
   return (neuron0x30610f0()*0.182641);
}

double NNfunction_ss_cLcL::synapse0x30718b0() {
   return (neuron0x3061430()*0.129978);
}

double NNfunction_ss_cLcL::synapse0x30718f0() {
   return (neuron0x3061770()*-0.121779);
}

double NNfunction_ss_cLcL::synapse0x3071930() {
   return (neuron0x3061ab0()*-0.00698297);
}

double NNfunction_ss_cLcL::synapse0x3071970() {
   return (neuron0x3061df0()*-0.13057);
}

double NNfunction_ss_cLcL::synapse0x30719b0() {
   return (neuron0x3062130()*0.0367614);
}

double NNfunction_ss_cLcL::synapse0x3071d30() {
   return (neuron0x305d570()*-0.542458);
}

double NNfunction_ss_cLcL::synapse0x3071d70() {
   return (neuron0x305d8b0()*0.256541);
}

double NNfunction_ss_cLcL::synapse0x3071db0() {
   return (neuron0x305dbf0()*-0.354399);
}

double NNfunction_ss_cLcL::synapse0x3071df0() {
   return (neuron0x305df30()*-0.529571);
}

double NNfunction_ss_cLcL::synapse0x3071e30() {
   return (neuron0x305e270()*-0.287918);
}

double NNfunction_ss_cLcL::synapse0x3071e70() {
   return (neuron0x305e5b0()*-0.351718);
}

double NNfunction_ss_cLcL::synapse0x3071eb0() {
   return (neuron0x305e8f0()*-0.0383382);
}

double NNfunction_ss_cLcL::synapse0x3071ef0() {
   return (neuron0x305ec30()*-0.950568);
}

double NNfunction_ss_cLcL::synapse0x3071f30() {
   return (neuron0x305ef70()*0.191087);
}

double NNfunction_ss_cLcL::synapse0x3071f70() {
   return (neuron0x305f2b0()*0.5223);
}

double NNfunction_ss_cLcL::synapse0x3071fb0() {
   return (neuron0x305f5f0()*0.976644);
}

double NNfunction_ss_cLcL::synapse0x3071ff0() {
   return (neuron0x305f930()*0.782637);
}

double NNfunction_ss_cLcL::synapse0x3072030() {
   return (neuron0x305fc70()*1.09217);
}

double NNfunction_ss_cLcL::synapse0x3072070() {
   return (neuron0x305ffb0()*-0.211732);
}

double NNfunction_ss_cLcL::synapse0x30720b0() {
   return (neuron0x30602f0()*0.787716);
}

double NNfunction_ss_cLcL::synapse0x30720f0() {
   return (neuron0x3060630()*0.177794);
}

double NNfunction_ss_cLcL::synapse0x3071b80() {
   return (neuron0x3060970()*-0.243036);
}

double NNfunction_ss_cLcL::synapse0x3071bc0() {
   return (neuron0x3060ed0()*-1.54468);
}

double NNfunction_ss_cLcL::synapse0x3072240() {
   return (neuron0x30610f0()*1.3462);
}

double NNfunction_ss_cLcL::synapse0x3072280() {
   return (neuron0x3061430()*0.338538);
}

double NNfunction_ss_cLcL::synapse0x30722c0() {
   return (neuron0x3061770()*-0.0710946);
}

double NNfunction_ss_cLcL::synapse0x3072300() {
   return (neuron0x3061ab0()*0.761781);
}

double NNfunction_ss_cLcL::synapse0x3072340() {
   return (neuron0x3061df0()*0.0556923);
}

double NNfunction_ss_cLcL::synapse0x3072380() {
   return (neuron0x3062130()*0.447601);
}

double NNfunction_ss_cLcL::synapse0x3072700() {
   return (neuron0x305d570()*0.174055);
}

double NNfunction_ss_cLcL::synapse0x3072740() {
   return (neuron0x305d8b0()*0.0154467);
}

double NNfunction_ss_cLcL::synapse0x3072780() {
   return (neuron0x305dbf0()*0.082239);
}

double NNfunction_ss_cLcL::synapse0x30727c0() {
   return (neuron0x305df30()*-0.209213);
}

double NNfunction_ss_cLcL::synapse0x3072800() {
   return (neuron0x305e270()*0.0835312);
}

double NNfunction_ss_cLcL::synapse0x3072840() {
   return (neuron0x305e5b0()*0.169216);
}

double NNfunction_ss_cLcL::synapse0x3072880() {
   return (neuron0x305e8f0()*0.412079);
}

double NNfunction_ss_cLcL::synapse0x30728c0() {
   return (neuron0x305ec30()*-0.0971978);
}

double NNfunction_ss_cLcL::synapse0x3072900() {
   return (neuron0x305ef70()*0.723088);
}

double NNfunction_ss_cLcL::synapse0x3072940() {
   return (neuron0x305f2b0()*-0.24855);
}

double NNfunction_ss_cLcL::synapse0x3072980() {
   return (neuron0x305f5f0()*-0.178047);
}

double NNfunction_ss_cLcL::synapse0x30729c0() {
   return (neuron0x305f930()*-0.759193);
}

double NNfunction_ss_cLcL::synapse0x3072a00() {
   return (neuron0x305fc70()*0.0547818);
}

double NNfunction_ss_cLcL::synapse0x3072a40() {
   return (neuron0x305ffb0()*0.052475);
}

double NNfunction_ss_cLcL::synapse0x3072a80() {
   return (neuron0x30602f0()*0.178344);
}

double NNfunction_ss_cLcL::synapse0x3072ac0() {
   return (neuron0x3060630()*0.00089789);
}

double NNfunction_ss_cLcL::synapse0x3072550() {
   return (neuron0x3060970()*-0.0308819);
}

double NNfunction_ss_cLcL::synapse0x3072590() {
   return (neuron0x3060ed0()*-0.323618);
}

double NNfunction_ss_cLcL::synapse0x3072c10() {
   return (neuron0x30610f0()*-0.0835321);
}

double NNfunction_ss_cLcL::synapse0x3072c50() {
   return (neuron0x3061430()*0.532033);
}

double NNfunction_ss_cLcL::synapse0x3072c90() {
   return (neuron0x3061770()*0.30361);
}

double NNfunction_ss_cLcL::synapse0x3072cd0() {
   return (neuron0x3061ab0()*0.0036443);
}

double NNfunction_ss_cLcL::synapse0x3072d10() {
   return (neuron0x3061df0()*-0.00674275);
}

double NNfunction_ss_cLcL::synapse0x3072d50() {
   return (neuron0x3062130()*-0.324559);
}

double NNfunction_ss_cLcL::synapse0x3084c20() {
   return (neuron0x305d570()*-0.0610594);
}

double NNfunction_ss_cLcL::synapse0x3084c60() {
   return (neuron0x305d8b0()*-0.118233);
}

double NNfunction_ss_cLcL::synapse0x3084ca0() {
   return (neuron0x305dbf0()*-0.973395);
}

double NNfunction_ss_cLcL::synapse0x3084ce0() {
   return (neuron0x305df30()*-0.459789);
}

double NNfunction_ss_cLcL::synapse0x3084d20() {
   return (neuron0x305e270()*0.198957);
}

double NNfunction_ss_cLcL::synapse0x3084d60() {
   return (neuron0x305e5b0()*0.425147);
}

double NNfunction_ss_cLcL::synapse0x3084da0() {
   return (neuron0x305e8f0()*0.319222);
}

double NNfunction_ss_cLcL::synapse0x3084de0() {
   return (neuron0x305ec30()*0.736601);
}

double NNfunction_ss_cLcL::synapse0x3084e20() {
   return (neuron0x305ef70()*-0.0737016);
}

double NNfunction_ss_cLcL::synapse0x3084e60() {
   return (neuron0x305f2b0()*-0.244514);
}

double NNfunction_ss_cLcL::synapse0x3084ea0() {
   return (neuron0x305f5f0()*-0.161777);
}

double NNfunction_ss_cLcL::synapse0x3084ee0() {
   return (neuron0x305f930()*-0.105979);
}

double NNfunction_ss_cLcL::synapse0x3084f20() {
   return (neuron0x305fc70()*-0.50035);
}

double NNfunction_ss_cLcL::synapse0x3084f60() {
   return (neuron0x305ffb0()*-0.0317195);
}

double NNfunction_ss_cLcL::synapse0x3084fa0() {
   return (neuron0x30602f0()*0.189015);
}

double NNfunction_ss_cLcL::synapse0x3084fe0() {
   return (neuron0x3060630()*0.138222);
}

double NNfunction_ss_cLcL::synapse0x3072d90() {
   return (neuron0x3060970()*-0.0929745);
}

double NNfunction_ss_cLcL::synapse0x3072dd0() {
   return (neuron0x3060ed0()*0.00137598);
}

double NNfunction_ss_cLcL::synapse0x3085130() {
   return (neuron0x30610f0()*0.0199023);
}

double NNfunction_ss_cLcL::synapse0x3085170() {
   return (neuron0x3061430()*0.065222);
}

double NNfunction_ss_cLcL::synapse0x30851b0() {
   return (neuron0x3061770()*-0.124799);
}

double NNfunction_ss_cLcL::synapse0x30851f0() {
   return (neuron0x3061ab0()*0.0263447);
}

double NNfunction_ss_cLcL::synapse0x3085230() {
   return (neuron0x3061df0()*0.0413151);
}

double NNfunction_ss_cLcL::synapse0x3085270() {
   return (neuron0x3062130()*0.0473681);
}

double NNfunction_ss_cLcL::synapse0x30855f0() {
   return (neuron0x305d570()*-0.150134);
}

double NNfunction_ss_cLcL::synapse0x3085630() {
   return (neuron0x305d8b0()*0.00372605);
}

double NNfunction_ss_cLcL::synapse0x3085670() {
   return (neuron0x305dbf0()*-0.0987499);
}

double NNfunction_ss_cLcL::synapse0x30856b0() {
   return (neuron0x305df30()*0.469954);
}

double NNfunction_ss_cLcL::synapse0x30856f0() {
   return (neuron0x305e270()*-0.123196);
}

double NNfunction_ss_cLcL::synapse0x3085730() {
   return (neuron0x305e5b0()*0.20154);
}

double NNfunction_ss_cLcL::synapse0x3085770() {
   return (neuron0x305e8f0()*0.0850638);
}

double NNfunction_ss_cLcL::synapse0x30857b0() {
   return (neuron0x305ec30()*0.0923065);
}

double NNfunction_ss_cLcL::synapse0x30857f0() {
   return (neuron0x305ef70()*0.329605);
}

double NNfunction_ss_cLcL::synapse0x3085830() {
   return (neuron0x305f2b0()*0.334172);
}

double NNfunction_ss_cLcL::synapse0x3085870() {
   return (neuron0x305f5f0()*-0.00720942);
}

double NNfunction_ss_cLcL::synapse0x30858b0() {
   return (neuron0x305f930()*0.00191376);
}

double NNfunction_ss_cLcL::synapse0x30858f0() {
   return (neuron0x305fc70()*1.7209);
}

double NNfunction_ss_cLcL::synapse0x3085930() {
   return (neuron0x305ffb0()*0.238259);
}

double NNfunction_ss_cLcL::synapse0x3085970() {
   return (neuron0x30602f0()*0.0318594);
}

double NNfunction_ss_cLcL::synapse0x30859b0() {
   return (neuron0x3060630()*0.151869);
}

double NNfunction_ss_cLcL::synapse0x3085440() {
   return (neuron0x3060970()*-0.117872);
}

double NNfunction_ss_cLcL::synapse0x3085480() {
   return (neuron0x3060ed0()*-0.169593);
}

double NNfunction_ss_cLcL::synapse0x3085b00() {
   return (neuron0x30610f0()*0.275026);
}

double NNfunction_ss_cLcL::synapse0x3085b40() {
   return (neuron0x3061430()*0.0103406);
}

double NNfunction_ss_cLcL::synapse0x3085b80() {
   return (neuron0x3061770()*-0.0267609);
}

double NNfunction_ss_cLcL::synapse0x3085bc0() {
   return (neuron0x3061ab0()*-0.060564);
}

double NNfunction_ss_cLcL::synapse0x3085c00() {
   return (neuron0x3061df0()*-0.120148);
}

double NNfunction_ss_cLcL::synapse0x3085c40() {
   return (neuron0x3062130()*0.0559113);
}

double NNfunction_ss_cLcL::synapse0x3085fc0() {
   return (neuron0x305d570()*0.155237);
}

double NNfunction_ss_cLcL::synapse0x3086000() {
   return (neuron0x305d8b0()*-0.211662);
}

double NNfunction_ss_cLcL::synapse0x3086040() {
   return (neuron0x305dbf0()*0.216186);
}

double NNfunction_ss_cLcL::synapse0x3086080() {
   return (neuron0x305df30()*0.71924);
}

double NNfunction_ss_cLcL::synapse0x30860c0() {
   return (neuron0x305e270()*-0.011021);
}

double NNfunction_ss_cLcL::synapse0x3086100() {
   return (neuron0x305e5b0()*-0.148852);
}

double NNfunction_ss_cLcL::synapse0x3086140() {
   return (neuron0x305e8f0()*0.412009);
}

double NNfunction_ss_cLcL::synapse0x3086180() {
   return (neuron0x305ec30()*1.18021);
}

double NNfunction_ss_cLcL::synapse0x30861c0() {
   return (neuron0x305ef70()*-0.457054);
}

double NNfunction_ss_cLcL::synapse0x3086200() {
   return (neuron0x305f2b0()*-0.281486);
}

double NNfunction_ss_cLcL::synapse0x3086240() {
   return (neuron0x305f5f0()*0.523075);
}

double NNfunction_ss_cLcL::synapse0x3086280() {
   return (neuron0x305f930()*0.130601);
}

double NNfunction_ss_cLcL::synapse0x30862c0() {
   return (neuron0x305fc70()*-0.986924);
}

double NNfunction_ss_cLcL::synapse0x3086300() {
   return (neuron0x305ffb0()*1.03226);
}

double NNfunction_ss_cLcL::synapse0x3086340() {
   return (neuron0x30602f0()*-1.405);
}

double NNfunction_ss_cLcL::synapse0x3086380() {
   return (neuron0x3060630()*-0.743363);
}

double NNfunction_ss_cLcL::synapse0x3085e10() {
   return (neuron0x3060970()*-0.203673);
}

double NNfunction_ss_cLcL::synapse0x3085e50() {
   return (neuron0x3060ed0()*-0.551737);
}

double NNfunction_ss_cLcL::synapse0x30864d0() {
   return (neuron0x30610f0()*-0.503236);
}

double NNfunction_ss_cLcL::synapse0x3086510() {
   return (neuron0x3061430()*0.473654);
}

double NNfunction_ss_cLcL::synapse0x3086550() {
   return (neuron0x3061770()*0.276841);
}

double NNfunction_ss_cLcL::synapse0x3086590() {
   return (neuron0x3061ab0()*-0.49903);
}

double NNfunction_ss_cLcL::synapse0x30865d0() {
   return (neuron0x3061df0()*-0.457498);
}

double NNfunction_ss_cLcL::synapse0x3086610() {
   return (neuron0x3062130()*-0.0810335);
}

double NNfunction_ss_cLcL::synapse0x3086990() {
   return (neuron0x305d570()*0.249857);
}

double NNfunction_ss_cLcL::synapse0x30869d0() {
   return (neuron0x305d8b0()*0.0695496);
}

double NNfunction_ss_cLcL::synapse0x3086a10() {
   return (neuron0x305dbf0()*0.107391);
}

double NNfunction_ss_cLcL::synapse0x3086a50() {
   return (neuron0x305df30()*-1.26803);
}

double NNfunction_ss_cLcL::synapse0x3086a90() {
   return (neuron0x305e270()*-0.0810408);
}

double NNfunction_ss_cLcL::synapse0x3086ad0() {
   return (neuron0x305e5b0()*-0.212983);
}

double NNfunction_ss_cLcL::synapse0x3086b10() {
   return (neuron0x305e8f0()*0.114471);
}

double NNfunction_ss_cLcL::synapse0x3086b50() {
   return (neuron0x305ec30()*0.154536);
}

double NNfunction_ss_cLcL::synapse0x3086b90() {
   return (neuron0x305ef70()*0.0512961);
}

double NNfunction_ss_cLcL::synapse0x3086bd0() {
   return (neuron0x305f2b0()*-0.057883);
}

double NNfunction_ss_cLcL::synapse0x3086c10() {
   return (neuron0x305f5f0()*-0.191328);
}

double NNfunction_ss_cLcL::synapse0x3086c50() {
   return (neuron0x305f930()*0.0655191);
}

double NNfunction_ss_cLcL::synapse0x3086c90() {
   return (neuron0x305fc70()*0.676564);
}

double NNfunction_ss_cLcL::synapse0x3086cd0() {
   return (neuron0x305ffb0()*0.18657);
}

double NNfunction_ss_cLcL::synapse0x3086d10() {
   return (neuron0x30602f0()*0.290367);
}

double NNfunction_ss_cLcL::synapse0x3086d50() {
   return (neuron0x3060630()*-0.29025);
}

double NNfunction_ss_cLcL::synapse0x30867e0() {
   return (neuron0x3060970()*0.362124);
}

double NNfunction_ss_cLcL::synapse0x3086820() {
   return (neuron0x3060ed0()*-0.30427);
}

double NNfunction_ss_cLcL::synapse0x3086ea0() {
   return (neuron0x30610f0()*0.0320327);
}

double NNfunction_ss_cLcL::synapse0x3086ee0() {
   return (neuron0x3061430()*-0.120419);
}

double NNfunction_ss_cLcL::synapse0x3086f20() {
   return (neuron0x3061770()*0.0553927);
}

double NNfunction_ss_cLcL::synapse0x3086f60() {
   return (neuron0x3061ab0()*0.110968);
}

double NNfunction_ss_cLcL::synapse0x3086fa0() {
   return (neuron0x3061df0()*0.0590325);
}

double NNfunction_ss_cLcL::synapse0x3086fe0() {
   return (neuron0x3062130()*-0.0845208);
}

double NNfunction_ss_cLcL::synapse0x3063580() {
   return (neuron0x30625d0()*-0.00365843);
}

double NNfunction_ss_cLcL::synapse0x30635c0() {
   return (neuron0x3062ee0()*0.0857061);
}

double NNfunction_ss_cLcL::synapse0x3064a90() {
   return (neuron0x30639c0()*0.564566);
}

double NNfunction_ss_cLcL::synapse0x3064ad0() {
   return (neuron0x2e1d250()*0.0655597);
}

double NNfunction_ss_cLcL::synapse0x3065460() {
   return (neuron0x30647e0()*-0.0156941);
}

double NNfunction_ss_cLcL::synapse0x30654a0() {
   return (neuron0x30651b0()*-0.00809826);
}

double NNfunction_ss_cLcL::synapse0x3066230() {
   return (neuron0x3065f80()*-0.0085458);
}

double NNfunction_ss_cLcL::synapse0x3066270() {
   return (neuron0x3066950()*0.373291);
}

double NNfunction_ss_cLcL::synapse0x3066c00() {
   return (neuron0x3067320()*-0.00334045);
}

double NNfunction_ss_cLcL::synapse0x3066c40() {
   return (neuron0x3067e00()*-0.00322878);
}

double NNfunction_ss_cLcL::synapse0x30675d0() {
   return (neuron0x30687d0()*0.0874166);
}

double NNfunction_ss_cLcL::synapse0x3067610() {
   return (neuron0x30658b0()*0.0135008);
}

double NNfunction_ss_cLcL::synapse0x30680b0() {
   return (neuron0x306a380()*-0.0120153);
}

double NNfunction_ss_cLcL::synapse0x30680f0() {
   return (neuron0x306ad50()*0.0497239);
}

double NNfunction_ss_cLcL::synapse0x3068a80() {
   return (neuron0x306b720()*0.0661425);
}

double NNfunction_ss_cLcL::synapse0x3068ac0() {
   return (neuron0x306c0f0()*-0.209066);
}

double NNfunction_ss_cLcL::synapse0x3065b60() {
   return (neuron0x306df00()*-2.08977);
}

double NNfunction_ss_cLcL::synapse0x3065ba0() {
   return (neuron0x306e1e0()*0.231061);
}

double NNfunction_ss_cLcL::synapse0x306a630() {
   return (neuron0x306ebb0()*-0.105407);
}

double NNfunction_ss_cLcL::synapse0x306a670() {
   return (neuron0x306f580()*-0.00146154);
}

double NNfunction_ss_cLcL::synapse0x306b000() {
   return (neuron0x306ff50()*-0.0454695);
}

double NNfunction_ss_cLcL::synapse0x306b040() {
   return (neuron0x3070920()*0.130277);
}

double NNfunction_ss_cLcL::synapse0x306b9d0() {
   return (neuron0x3069470()*-0.00561714);
}

double NNfunction_ss_cLcL::synapse0x306ba10() {
   return (neuron0x3069e40()*-0.45984);
}

double NNfunction_ss_cLcL::synapse0x306c3a0() {
   return (neuron0x30736b0()*-0.0258887);
}

double NNfunction_ss_cLcL::synapse0x306c3e0() {
   return (neuron0x3074080()*0.0361978);
}

double NNfunction_ss_cLcL::synapse0x3060510() {
   return (neuron0x3074a50()*-0.482454);
}

double NNfunction_ss_cLcL::synapse0x3060550() {
   return (neuron0x3075420()*-1.05273);
}

double NNfunction_ss_cLcL::synapse0x306e490() {
   return (neuron0x3075df0()*0.0102229);
}

double NNfunction_ss_cLcL::synapse0x306e4d0() {
   return (neuron0x30767c0()*0.00111826);
}

double NNfunction_ss_cLcL::synapse0x306ee60() {
   return (neuron0x3077190()*0.204735);
}

double NNfunction_ss_cLcL::synapse0x306eea0() {
   return (neuron0x3077b60()*1.86397);
}

double NNfunction_ss_cLcL::synapse0x306f830() {
   return (neuron0x306dbf0()*-0.00347791);
}

double NNfunction_ss_cLcL::synapse0x306f870() {
   return (neuron0x307a740()*0.0482717);
}

double NNfunction_ss_cLcL::synapse0x3070200() {
   return (neuron0x307b110()*0.0701032);
}

double NNfunction_ss_cLcL::synapse0x3070240() {
   return (neuron0x307bae0()*0.0240755);
}

double NNfunction_ss_cLcL::synapse0x3070bd0() {
   return (neuron0x307c4b0()*0.899095);
}

double NNfunction_ss_cLcL::synapse0x3070c10() {
   return (neuron0x307ce80()*-0.00662234);
}

double NNfunction_ss_cLcL::synapse0x3069720() {
   return (neuron0x307d850()*-0.00992393);
}

double NNfunction_ss_cLcL::synapse0x3069760() {
   return (neuron0x307e220()*-0.0120983);
}

double NNfunction_ss_cLcL::synapse0x3072fd0() {
   return (neuron0x307ebf0()*0.183257);
}

double NNfunction_ss_cLcL::synapse0x3073010() {
   return (neuron0x307f7d0()*-0.00146555);
}

double NNfunction_ss_cLcL::synapse0x3073960() {
   return (neuron0x30801a0()*1.11234);
}

double NNfunction_ss_cLcL::synapse0x30739a0() {
   return (neuron0x3071020()*-0.229906);
}

double NNfunction_ss_cLcL::synapse0x3074330() {
   return (neuron0x30719f0()*-0.00656836);
}

double NNfunction_ss_cLcL::synapse0x3074370() {
   return (neuron0x30723c0()*-0.0376012);
}

double NNfunction_ss_cLcL::synapse0x3074d00() {
   return (neuron0x3084a00()*0.0464691);
}

double NNfunction_ss_cLcL::synapse0x3074d40() {
   return (neuron0x30852b0()*0.0129386);
}

double NNfunction_ss_cLcL::synapse0x30756d0() {
   return (neuron0x3085c80()*0.00848169);
}

double NNfunction_ss_cLcL::synapse0x3075710() {
   return (neuron0x3086650()*-0.0285956);
}

double NNfunction_ss_cLcL::synapse0x3077e10() {
   return (neuron0x30625d0()*1.51851);
}

double NNfunction_ss_cLcL::synapse0x3077e50() {
   return (neuron0x3062ee0()*0.979873);
}

double NNfunction_ss_cLcL::synapse0x306d3d0() {
   return (neuron0x30639c0()*9.16846);
}

double NNfunction_ss_cLcL::synapse0x306d410() {
   return (neuron0x2e1d250()*-5.94701);
}

double NNfunction_ss_cLcL::synapse0x307a9f0() {
   return (neuron0x30647e0()*1.20406);
}

double NNfunction_ss_cLcL::synapse0x307aa30() {
   return (neuron0x30651b0()*-1.14611);
}

double NNfunction_ss_cLcL::synapse0x307b3c0() {
   return (neuron0x3065f80()*0.0997803);
}

double NNfunction_ss_cLcL::synapse0x307b400() {
   return (neuron0x3066950()*2.20456);
}

double NNfunction_ss_cLcL::synapse0x307bd90() {
   return (neuron0x3067320()*1.05404);
}

double NNfunction_ss_cLcL::synapse0x307bdd0() {
   return (neuron0x3067e00()*1.26912);
}

double NNfunction_ss_cLcL::synapse0x307c760() {
   return (neuron0x30687d0()*1.0662);
}

double NNfunction_ss_cLcL::synapse0x307c7a0() {
   return (neuron0x30658b0()*0.405542);
}

double NNfunction_ss_cLcL::synapse0x307d130() {
   return (neuron0x306a380()*1.06356);
}

double NNfunction_ss_cLcL::synapse0x307d170() {
   return (neuron0x306ad50()*0.59479);
}

double NNfunction_ss_cLcL::synapse0x307db00() {
   return (neuron0x306b720()*3.02965);
}

double NNfunction_ss_cLcL::synapse0x307db40() {
   return (neuron0x306c0f0()*-0.237137);
}

double NNfunction_ss_cLcL::synapse0x307e4d0() {
   return (neuron0x306df00()*7.35859);
}

double NNfunction_ss_cLcL::synapse0x307e510() {
   return (neuron0x306e1e0()*-0.350467);
}

double NNfunction_ss_cLcL::synapse0x307eea0() {
   return (neuron0x306ebb0()*-1.31179);
}

double NNfunction_ss_cLcL::synapse0x307eee0() {
   return (neuron0x306f580()*0.834866);
}

double NNfunction_ss_cLcL::synapse0x307fa80() {
   return (neuron0x306ff50()*0.249087);
}

double NNfunction_ss_cLcL::synapse0x307fac0() {
   return (neuron0x3070920()*1.03317);
}

double NNfunction_ss_cLcL::synapse0x3080450() {
   return (neuron0x3069470()*-0.695691);
}

double NNfunction_ss_cLcL::synapse0x3080490() {
   return (neuron0x3069e40()*-2.07542);
}

double NNfunction_ss_cLcL::synapse0x30712d0() {
   return (neuron0x30736b0()*-1.48212);
}

double NNfunction_ss_cLcL::synapse0x3071310() {
   return (neuron0x3074080()*-1.9633);
}

double NNfunction_ss_cLcL::synapse0x3071ca0() {
   return (neuron0x3074a50()*-5.54504);
}

double NNfunction_ss_cLcL::synapse0x3071ce0() {
   return (neuron0x3075420()*-1.31351);
}

double NNfunction_ss_cLcL::synapse0x3072670() {
   return (neuron0x3075df0()*-0.847851);
}

double NNfunction_ss_cLcL::synapse0x30726b0() {
   return (neuron0x30767c0()*0.0994228);
}

double NNfunction_ss_cLcL::synapse0x3084b90() {
   return (neuron0x3077190()*2.16909);
}

double NNfunction_ss_cLcL::synapse0x3084bd0() {
   return (neuron0x3077b60()*-3.34814);
}

double NNfunction_ss_cLcL::synapse0x3085560() {
   return (neuron0x306dbf0()*0.786559);
}

double NNfunction_ss_cLcL::synapse0x30855a0() {
   return (neuron0x307a740()*-3.3934);
}

double NNfunction_ss_cLcL::synapse0x3085f30() {
   return (neuron0x307b110()*0.441163);
}

double NNfunction_ss_cLcL::synapse0x3085f70() {
   return (neuron0x307bae0()*-1.3455);
}

double NNfunction_ss_cLcL::synapse0x3086900() {
   return (neuron0x307c4b0()*3.57922);
}

double NNfunction_ss_cLcL::synapse0x3086940() {
   return (neuron0x307ce80()*0.0911156);
}

double NNfunction_ss_cLcL::synapse0x30627f0() {
   return (neuron0x307d850()*0.907813);
}

double NNfunction_ss_cLcL::synapse0x3062830() {
   return (neuron0x307e220()*-0.550929);
}

double NNfunction_ss_cLcL::synapse0x30760a0() {
   return (neuron0x307ebf0()*0.552949);
}

double NNfunction_ss_cLcL::synapse0x30760e0() {
   return (neuron0x307f7d0()*-0.551511);
}

double NNfunction_ss_cLcL::synapse0x3087020() {
   return (neuron0x30801a0()*1.52723);
}

double NNfunction_ss_cLcL::synapse0x3087060() {
   return (neuron0x3071020()*-3.46239);
}

double NNfunction_ss_cLcL::synapse0x30870a0() {
   return (neuron0x30719f0()*0.449421);
}

double NNfunction_ss_cLcL::synapse0x30870e0() {
   return (neuron0x30723c0()*1.02498);
}

double NNfunction_ss_cLcL::synapse0x308df90() {
   return (neuron0x3084a00()*1.35795);
}

double NNfunction_ss_cLcL::synapse0x308dfd0() {
   return (neuron0x30852b0()*-0.861035);
}

double NNfunction_ss_cLcL::synapse0x308e010() {
   return (neuron0x3085c80()*0.330648);
}

double NNfunction_ss_cLcL::synapse0x308e050() {
   return (neuron0x3086650()*4.87131);
}

double NNfunction_ss_cLcL::synapse0x308e3d0() {
   return (neuron0x30625d0()*0.683432);
}

double NNfunction_ss_cLcL::synapse0x308e410() {
   return (neuron0x3062ee0()*-1.12846);
}

double NNfunction_ss_cLcL::synapse0x308e450() {
   return (neuron0x30639c0()*-0.772624);
}

double NNfunction_ss_cLcL::synapse0x308e490() {
   return (neuron0x2e1d250()*-0.0664192);
}

double NNfunction_ss_cLcL::synapse0x308e4d0() {
   return (neuron0x30647e0()*0.566319);
}

double NNfunction_ss_cLcL::synapse0x308e510() {
   return (neuron0x30651b0()*0.771354);
}

double NNfunction_ss_cLcL::synapse0x308e550() {
   return (neuron0x3065f80()*-0.554255);
}

double NNfunction_ss_cLcL::synapse0x308e590() {
   return (neuron0x3066950()*1.67227);
}

double NNfunction_ss_cLcL::synapse0x308e5d0() {
   return (neuron0x3067320()*0.117302);
}

double NNfunction_ss_cLcL::synapse0x308e610() {
   return (neuron0x3067e00()*-0.347483);
}

double NNfunction_ss_cLcL::synapse0x308e650() {
   return (neuron0x30687d0()*0.0302395);
}

double NNfunction_ss_cLcL::synapse0x308e690() {
   return (neuron0x30658b0()*0.300071);
}

double NNfunction_ss_cLcL::synapse0x308e6d0() {
   return (neuron0x306a380()*-0.704145);
}

double NNfunction_ss_cLcL::synapse0x308e710() {
   return (neuron0x306ad50()*1.22824);
}

double NNfunction_ss_cLcL::synapse0x308e750() {
   return (neuron0x306b720()*1.06126);
}

double NNfunction_ss_cLcL::synapse0x308e790() {
   return (neuron0x306c0f0()*-0.99095);
}

double NNfunction_ss_cLcL::synapse0x308e220() {
   return (neuron0x306df00()*3.69108);
}

double NNfunction_ss_cLcL::synapse0x308e260() {
   return (neuron0x306e1e0()*-1.41243);
}

double NNfunction_ss_cLcL::synapse0x308e8e0() {
   return (neuron0x306ebb0()*-1.01707);
}

double NNfunction_ss_cLcL::synapse0x308e920() {
   return (neuron0x306f580()*0.252618);
}

double NNfunction_ss_cLcL::synapse0x308e960() {
   return (neuron0x306ff50()*1.46016);
}

double NNfunction_ss_cLcL::synapse0x308e9a0() {
   return (neuron0x3070920()*0.120264);
}

double NNfunction_ss_cLcL::synapse0x308e9e0() {
   return (neuron0x3069470()*0.504991);
}

double NNfunction_ss_cLcL::synapse0x308ea20() {
   return (neuron0x3069e40()*-0.00134098);
}

double NNfunction_ss_cLcL::synapse0x308ea60() {
   return (neuron0x30736b0()*0.311764);
}

double NNfunction_ss_cLcL::synapse0x308eaa0() {
   return (neuron0x3074080()*-0.382996);
}

double NNfunction_ss_cLcL::synapse0x308eae0() {
   return (neuron0x3074a50()*-1.3745);
}

double NNfunction_ss_cLcL::synapse0x308eb20() {
   return (neuron0x3075420()*0.681777);
}

double NNfunction_ss_cLcL::synapse0x308eb60() {
   return (neuron0x3075df0()*0.396771);
}

double NNfunction_ss_cLcL::synapse0x308eba0() {
   return (neuron0x30767c0()*-1.09159);
}

double NNfunction_ss_cLcL::synapse0x308ebe0() {
   return (neuron0x3077190()*0.732807);
}

double NNfunction_ss_cLcL::synapse0x308ec20() {
   return (neuron0x3077b60()*0.730224);
}

double NNfunction_ss_cLcL::synapse0x308e7d0() {
   return (neuron0x306dbf0()*0.0427374);
}

double NNfunction_ss_cLcL::synapse0x308e810() {
   return (neuron0x307a740()*-0.625626);
}

double NNfunction_ss_cLcL::synapse0x308e850() {
   return (neuron0x307b110()*-0.600243);
}

double NNfunction_ss_cLcL::synapse0x308e890() {
   return (neuron0x307bae0()*-0.668806);
}

double NNfunction_ss_cLcL::synapse0x308ee70() {
   return (neuron0x307c4b0()*-1.59741);
}

double NNfunction_ss_cLcL::synapse0x308eeb0() {
   return (neuron0x307ce80()*-0.497781);
}

double NNfunction_ss_cLcL::synapse0x308eef0() {
   return (neuron0x307d850()*-0.885806);
}

double NNfunction_ss_cLcL::synapse0x308ef30() {
   return (neuron0x307e220()*-0.145487);
}

double NNfunction_ss_cLcL::synapse0x308ef70() {
   return (neuron0x307ebf0()*-0.736477);
}

double NNfunction_ss_cLcL::synapse0x308efb0() {
   return (neuron0x307f7d0()*0.6632);
}

double NNfunction_ss_cLcL::synapse0x308eff0() {
   return (neuron0x30801a0()*-0.440954);
}

double NNfunction_ss_cLcL::synapse0x308f030() {
   return (neuron0x3071020()*-1.69651);
}

double NNfunction_ss_cLcL::synapse0x308f070() {
   return (neuron0x30719f0()*-0.376369);
}

double NNfunction_ss_cLcL::synapse0x308f0b0() {
   return (neuron0x30723c0()*1.84755);
}

double NNfunction_ss_cLcL::synapse0x308f0f0() {
   return (neuron0x3084a00()*0.263827);
}

double NNfunction_ss_cLcL::synapse0x308f130() {
   return (neuron0x30852b0()*-0.0436047);
}

double NNfunction_ss_cLcL::synapse0x308f170() {
   return (neuron0x3085c80()*-0.357911);
}

double NNfunction_ss_cLcL::synapse0x308f1b0() {
   return (neuron0x3086650()*0.257478);
}

double NNfunction_ss_cLcL::synapse0x308f530() {
   return (neuron0x30625d0()*-1.12412);
}

double NNfunction_ss_cLcL::synapse0x308f570() {
   return (neuron0x3062ee0()*-0.638687);
}

double NNfunction_ss_cLcL::synapse0x308f5b0() {
   return (neuron0x30639c0()*-2.84803);
}

double NNfunction_ss_cLcL::synapse0x308f5f0() {
   return (neuron0x2e1d250()*3.93499);
}

double NNfunction_ss_cLcL::synapse0x308f630() {
   return (neuron0x30647e0()*0.208169);
}

double NNfunction_ss_cLcL::synapse0x308f670() {
   return (neuron0x30651b0()*0.435106);
}

double NNfunction_ss_cLcL::synapse0x308f6b0() {
   return (neuron0x3065f80()*0.997126);
}

double NNfunction_ss_cLcL::synapse0x308f6f0() {
   return (neuron0x3066950()*-1.45071);
}

double NNfunction_ss_cLcL::synapse0x308f730() {
   return (neuron0x3067320()*-1.0192);
}

double NNfunction_ss_cLcL::synapse0x308f770() {
   return (neuron0x3067e00()*1.06995);
}

double NNfunction_ss_cLcL::synapse0x308f7b0() {
   return (neuron0x30687d0()*-0.244042);
}

double NNfunction_ss_cLcL::synapse0x308f7f0() {
   return (neuron0x30658b0()*2.63281);
}

double NNfunction_ss_cLcL::synapse0x308f830() {
   return (neuron0x306a380()*-0.860938);
}

double NNfunction_ss_cLcL::synapse0x308f870() {
   return (neuron0x306ad50()*1.17646);
}

double NNfunction_ss_cLcL::synapse0x308f8b0() {
   return (neuron0x306b720()*1.49725);
}

double NNfunction_ss_cLcL::synapse0x308f8f0() {
   return (neuron0x306c0f0()*-1.83308);
}

double NNfunction_ss_cLcL::synapse0x308f380() {
   return (neuron0x306df00()*-3.72299);
}

double NNfunction_ss_cLcL::synapse0x308f3c0() {
   return (neuron0x306e1e0()*-1.71822);
}

double NNfunction_ss_cLcL::synapse0x308fa40() {
   return (neuron0x306ebb0()*1.31741);
}

double NNfunction_ss_cLcL::synapse0x308fa80() {
   return (neuron0x306f580()*-1.77455);
}

double NNfunction_ss_cLcL::synapse0x308fac0() {
   return (neuron0x306ff50()*1.95189);
}

double NNfunction_ss_cLcL::synapse0x308fb00() {
   return (neuron0x3070920()*-0.993794);
}

double NNfunction_ss_cLcL::synapse0x308fb40() {
   return (neuron0x3069470()*0.968313);
}

double NNfunction_ss_cLcL::synapse0x308fb80() {
   return (neuron0x3069e40()*-0.0346623);
}

double NNfunction_ss_cLcL::synapse0x308fbc0() {
   return (neuron0x30736b0()*-0.488147);
}

double NNfunction_ss_cLcL::synapse0x308fc00() {
   return (neuron0x3074080()*1.69221);
}

double NNfunction_ss_cLcL::synapse0x308fc40() {
   return (neuron0x3074a50()*1.32443);
}

double NNfunction_ss_cLcL::synapse0x308fc80() {
   return (neuron0x3075420()*1.20667);
}

double NNfunction_ss_cLcL::synapse0x308fcc0() {
   return (neuron0x3075df0()*-0.580563);
}

double NNfunction_ss_cLcL::synapse0x308fd00() {
   return (neuron0x30767c0()*-0.0651748);
}

double NNfunction_ss_cLcL::synapse0x308fd40() {
   return (neuron0x3077190()*-2.86371);
}

double NNfunction_ss_cLcL::synapse0x308fd80() {
   return (neuron0x3077b60()*2.67068);
}

double NNfunction_ss_cLcL::synapse0x308f930() {
   return (neuron0x306dbf0()*0.818908);
}

double NNfunction_ss_cLcL::synapse0x308f970() {
   return (neuron0x307a740()*-0.401064);
}

double NNfunction_ss_cLcL::synapse0x308f9b0() {
   return (neuron0x307b110()*-0.883068);
}

double NNfunction_ss_cLcL::synapse0x308f9f0() {
   return (neuron0x307bae0()*0.247407);
}

double NNfunction_ss_cLcL::synapse0x308ffd0() {
   return (neuron0x307c4b0()*-2.28458);
}

double NNfunction_ss_cLcL::synapse0x3090010() {
   return (neuron0x307ce80()*-1.25772);
}

double NNfunction_ss_cLcL::synapse0x3090050() {
   return (neuron0x307d850()*1.06008);
}

double NNfunction_ss_cLcL::synapse0x3090090() {
   return (neuron0x307e220()*2.01015);
}

double NNfunction_ss_cLcL::synapse0x30900d0() {
   return (neuron0x307ebf0()*-3.2479);
}

double NNfunction_ss_cLcL::synapse0x3090110() {
   return (neuron0x307f7d0()*-1.79288);
}

double NNfunction_ss_cLcL::synapse0x3090150() {
   return (neuron0x30801a0()*-0.86976);
}

double NNfunction_ss_cLcL::synapse0x3090190() {
   return (neuron0x3071020()*1.73612);
}

double NNfunction_ss_cLcL::synapse0x30901d0() {
   return (neuron0x30719f0()*-1.16907);
}

double NNfunction_ss_cLcL::synapse0x3090210() {
   return (neuron0x30723c0()*-0.848036);
}

double NNfunction_ss_cLcL::synapse0x3090250() {
   return (neuron0x3084a00()*-2.11067);
}

double NNfunction_ss_cLcL::synapse0x3090290() {
   return (neuron0x30852b0()*-1.07638);
}

double NNfunction_ss_cLcL::synapse0x30902d0() {
   return (neuron0x3085c80()*-0.21756);
}

double NNfunction_ss_cLcL::synapse0x3090310() {
   return (neuron0x3086650()*-1.93337);
}

double NNfunction_ss_cLcL::synapse0x3090690() {
   return (neuron0x30625d0()*-0.14529);
}

double NNfunction_ss_cLcL::synapse0x30906d0() {
   return (neuron0x3062ee0()*1.75413);
}

double NNfunction_ss_cLcL::synapse0x3090710() {
   return (neuron0x30639c0()*4.3539);
}

double NNfunction_ss_cLcL::synapse0x3090750() {
   return (neuron0x2e1d250()*-0.617283);
}

double NNfunction_ss_cLcL::synapse0x3090790() {
   return (neuron0x30647e0()*-0.139954);
}

double NNfunction_ss_cLcL::synapse0x30907d0() {
   return (neuron0x30651b0()*-0.63605);
}

double NNfunction_ss_cLcL::synapse0x3090810() {
   return (neuron0x3065f80()*0.512385);
}

double NNfunction_ss_cLcL::synapse0x3090850() {
   return (neuron0x3066950()*5.73889);
}

double NNfunction_ss_cLcL::synapse0x3090890() {
   return (neuron0x3067320()*0.215956);
}

double NNfunction_ss_cLcL::synapse0x30908d0() {
   return (neuron0x3067e00()*0.371526);
}

double NNfunction_ss_cLcL::synapse0x3090910() {
   return (neuron0x30687d0()*0.606908);
}

double NNfunction_ss_cLcL::synapse0x3090950() {
   return (neuron0x30658b0()*0.0581452);
}

double NNfunction_ss_cLcL::synapse0x3090990() {
   return (neuron0x306a380()*1.01269);
}

double NNfunction_ss_cLcL::synapse0x30909d0() {
   return (neuron0x306ad50()*-2.11079);
}

double NNfunction_ss_cLcL::synapse0x3090a10() {
   return (neuron0x306b720()*-0.848549);
}

double NNfunction_ss_cLcL::synapse0x3090a50() {
   return (neuron0x306c0f0()*5.21309);
}

double NNfunction_ss_cLcL::synapse0x30904e0() {
   return (neuron0x306df00()*5.53263);
}

double NNfunction_ss_cLcL::synapse0x3090520() {
   return (neuron0x306e1e0()*2.48717);
}

double NNfunction_ss_cLcL::synapse0x3090ba0() {
   return (neuron0x306ebb0()*3.8168);
}

double NNfunction_ss_cLcL::synapse0x3090be0() {
   return (neuron0x306f580()*-0.139677);
}

double NNfunction_ss_cLcL::synapse0x3090c20() {
   return (neuron0x306ff50()*-2.42029);
}

double NNfunction_ss_cLcL::synapse0x3090c60() {
   return (neuron0x3070920()*-2.75736);
}

double NNfunction_ss_cLcL::synapse0x3090ca0() {
   return (neuron0x3069470()*-0.285089);
}

double NNfunction_ss_cLcL::synapse0x3090ce0() {
   return (neuron0x3069e40()*-1.38568);
}

double NNfunction_ss_cLcL::synapse0x3090d20() {
   return (neuron0x30736b0()*-0.605805);
}

double NNfunction_ss_cLcL::synapse0x3090d60() {
   return (neuron0x3074080()*0.521569);
}

double NNfunction_ss_cLcL::synapse0x3090da0() {
   return (neuron0x3074a50()*-0.498698);
}

double NNfunction_ss_cLcL::synapse0x3090de0() {
   return (neuron0x3075420()*-2.8673);
}

double NNfunction_ss_cLcL::synapse0x3090e20() {
   return (neuron0x3075df0()*-0.42558);
}

double NNfunction_ss_cLcL::synapse0x3090e60() {
   return (neuron0x30767c0()*2.13388);
}

double NNfunction_ss_cLcL::synapse0x3090ea0() {
   return (neuron0x3077190()*2.18088);
}

double NNfunction_ss_cLcL::synapse0x3090ee0() {
   return (neuron0x3077b60()*-11.7142);
}

double NNfunction_ss_cLcL::synapse0x3090a90() {
   return (neuron0x306dbf0()*0.183929);
}

double NNfunction_ss_cLcL::synapse0x3090ad0() {
   return (neuron0x307a740()*-1.09622);
}

double NNfunction_ss_cLcL::synapse0x3090b10() {
   return (neuron0x307b110()*1.078);
}

double NNfunction_ss_cLcL::synapse0x3090b50() {
   return (neuron0x307bae0()*0.223789);
}

double NNfunction_ss_cLcL::synapse0x3091130() {
   return (neuron0x307c4b0()*0.0134856);
}

double NNfunction_ss_cLcL::synapse0x3091170() {
   return (neuron0x307ce80()*0.552821);
}

double NNfunction_ss_cLcL::synapse0x30911b0() {
   return (neuron0x307d850()*0.719332);
}

double NNfunction_ss_cLcL::synapse0x30911f0() {
   return (neuron0x307e220()*0.20453);
}

double NNfunction_ss_cLcL::synapse0x3091230() {
   return (neuron0x307ebf0()*0.549621);
}

double NNfunction_ss_cLcL::synapse0x3091270() {
   return (neuron0x307f7d0()*-0.646638);
}

double NNfunction_ss_cLcL::synapse0x30912b0() {
   return (neuron0x30801a0()*0.716652);
}

double NNfunction_ss_cLcL::synapse0x30912f0() {
   return (neuron0x3071020()*-4.80661);
}

double NNfunction_ss_cLcL::synapse0x3091330() {
   return (neuron0x30719f0()*0.145735);
}

double NNfunction_ss_cLcL::synapse0x3091370() {
   return (neuron0x30723c0()*-1.64841);
}

double NNfunction_ss_cLcL::synapse0x30913b0() {
   return (neuron0x3084a00()*0.515067);
}

double NNfunction_ss_cLcL::synapse0x30913f0() {
   return (neuron0x30852b0()*1.73712);
}

double NNfunction_ss_cLcL::synapse0x3091430() {
   return (neuron0x3085c80()*0.322355);
}

double NNfunction_ss_cLcL::synapse0x3091470() {
   return (neuron0x3086650()*2.2863);
}

double NNfunction_ss_cLcL::synapse0x3062590() {
   return (neuron0x308d850()*-7.48145);
}

double NNfunction_ss_cLcL::synapse0x30916d0() {
   return (neuron0x308dbf0()*-7.16757);
}

double NNfunction_ss_cLcL::synapse0x3091710() {
   return (neuron0x308e090()*-0.754646);
}

double NNfunction_ss_cLcL::synapse0x3091750() {
   return (neuron0x308f1f0()*7.19825);
}

double NNfunction_ss_cLcL::synapse0x3091790() {
   return (neuron0x3090350()*-6.54655);
}

