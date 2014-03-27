#include "NNfunction_NG_8.h"
#include <cmath>

double NNfunction_NG_8::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.4378)/15.2091;
   input1 = (in1 - -7.31355)/1171.15;
   input2 = (in2 - 486.51)/460.693;
   input3 = (in3 - -22.603)/706.646;
   input4 = (in4 - 1010.56)/915.62;
   input5 = (in5 - 885.88)/943.28;
   input6 = (in6 - 895.474)/941.978;
   input7 = (in7 - 905.175)/920.622;
   input8 = (in8 - 918.833)/971.861;
   input9 = (in9 - 906.997)/957.946;
   input10 = (in10 - 957.81)/947.207;
   input11 = (in11 - 526.755)/659.175;
   input12 = (in12 - 700.774)/844.408;
   input13 = (in13 - 483.73)/497.673;
   input14 = (in14 - 707.89)/794.306;
   input15 = (in15 - 711.309)/798.183;
   input16 = (in16 - 538.026)/558.362;
   input17 = (in17 - 755.443)/895.769;
   input18 = (in18 - 753.29)/894.58;
   input19 = (in19 - 768.764)/847.733;
   input20 = (in20 - -4.52673)/484.331;
   input21 = (in21 - -6.8022)/1129.93;
   input22 = (in22 - 0.622347)/1198.04;
   input23 = (in23 - -93.2527)/273.106;
   switch(index) {
     case 0:
         return neuron0x305aa30();
     default:
         return 0.;
   }
}

double NNfunction_NG_8::Value(int index, double* input) {
   input0 = (input[0] - 23.4378)/15.2091;
   input1 = (input[1] - -7.31355)/1171.15;
   input2 = (input[2] - 486.51)/460.693;
   input3 = (input[3] - -22.603)/706.646;
   input4 = (input[4] - 1010.56)/915.62;
   input5 = (input[5] - 885.88)/943.28;
   input6 = (input[6] - 895.474)/941.978;
   input7 = (input[7] - 905.175)/920.622;
   input8 = (input[8] - 918.833)/971.861;
   input9 = (input[9] - 906.997)/957.946;
   input10 = (input[10] - 957.81)/947.207;
   input11 = (input[11] - 526.755)/659.175;
   input12 = (input[12] - 700.774)/844.408;
   input13 = (input[13] - 483.73)/497.673;
   input14 = (input[14] - 707.89)/794.306;
   input15 = (input[15] - 711.309)/798.183;
   input16 = (input[16] - 538.026)/558.362;
   input17 = (input[17] - 755.443)/895.769;
   input18 = (input[18] - 753.29)/894.58;
   input19 = (input[19] - 768.764)/847.733;
   input20 = (input[20] - -4.52673)/484.331;
   input21 = (input[21] - -6.8022)/1129.93;
   input22 = (input[22] - 0.622347)/1198.04;
   input23 = (input[23] - -93.2527)/273.106;
   switch(index) {
     case 0:
         return neuron0x305aa30();
     default:
         return 0.;
   }
}

double NNfunction_NG_8::neuron0x3026af0() {
   return input0;
}

double NNfunction_NG_8::neuron0x3026e30() {
   return input1;
}

double NNfunction_NG_8::neuron0x3027170() {
   return input2;
}

double NNfunction_NG_8::neuron0x30274b0() {
   return input3;
}

double NNfunction_NG_8::neuron0x30277f0() {
   return input4;
}

double NNfunction_NG_8::neuron0x3027b30() {
   return input5;
}

double NNfunction_NG_8::neuron0x3027e70() {
   return input6;
}

double NNfunction_NG_8::neuron0x30281b0() {
   return input7;
}

double NNfunction_NG_8::neuron0x30284f0() {
   return input8;
}

double NNfunction_NG_8::neuron0x3028830() {
   return input9;
}

double NNfunction_NG_8::neuron0x3028b70() {
   return input10;
}

double NNfunction_NG_8::neuron0x3028eb0() {
   return input11;
}

double NNfunction_NG_8::neuron0x30291f0() {
   return input12;
}

double NNfunction_NG_8::neuron0x3029530() {
   return input13;
}

double NNfunction_NG_8::neuron0x3029870() {
   return input14;
}

double NNfunction_NG_8::neuron0x3029bb0() {
   return input15;
}

double NNfunction_NG_8::neuron0x3029ef0() {
   return input16;
}

double NNfunction_NG_8::neuron0x302a450() {
   return input17;
}

double NNfunction_NG_8::neuron0x302a670() {
   return input18;
}

double NNfunction_NG_8::neuron0x302a9b0() {
   return input19;
}

double NNfunction_NG_8::neuron0x302acf0() {
   return input20;
}

double NNfunction_NG_8::neuron0x302b030() {
   return input21;
}

double NNfunction_NG_8::neuron0x302b370() {
   return input22;
}

double NNfunction_NG_8::neuron0x302b6b0() {
   return input23;
}

double NNfunction_NG_8::input0x302bb50() {
   double input = -0.083252;
   input += synapse0x2de6960();
   input += synapse0x30269b0();
   input += synapse0x30269f0();
   input += synapse0x302be00();
   input += synapse0x302be40();
   input += synapse0x302be80();
   input += synapse0x302bec0();
   input += synapse0x302bf00();
   input += synapse0x302bf40();
   input += synapse0x302bf80();
   input += synapse0x302bfc0();
   input += synapse0x302c000();
   input += synapse0x302c040();
   input += synapse0x302c080();
   input += synapse0x302c0c0();
   input += synapse0x302c100();
   input += synapse0x3026920();
   input += synapse0x3026960();
   input += synapse0x2dd81b0();
   input += synapse0x2dd81f0();
   input += synapse0x302c360();
   input += synapse0x302c3a0();
   input += synapse0x302c3e0();
   input += synapse0x302c420();
   return input;
}

double NNfunction_NG_8::neuron0x302bb50() {
   double input = input0x302bb50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x302c460() {
   double input = -0.520739;
   input += synapse0x302c7a0();
   input += synapse0x302c7e0();
   input += synapse0x302c820();
   input += synapse0x302c860();
   input += synapse0x302c8a0();
   input += synapse0x302c8e0();
   input += synapse0x302c920();
   input += synapse0x302c960();
   input += synapse0x302c9a0();
   input += synapse0x302c250();
   input += synapse0x302c290();
   input += synapse0x302c2d0();
   input += synapse0x302c310();
   input += synapse0x302cbf0();
   input += synapse0x302cc30();
   input += synapse0x302cc70();
   input += synapse0x302c5f0();
   input += synapse0x302c630();
   input += synapse0x302cdc0();
   input += synapse0x302ce00();
   input += synapse0x302ce40();
   input += synapse0x302ce80();
   input += synapse0x302cec0();
   input += synapse0x302cf00();
   return input;
}

double NNfunction_NG_8::neuron0x302c460() {
   double input = input0x302c460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x302cf40() {
   double input = -4.70697;
   input += synapse0x302d280();
   input += synapse0x302d2c0();
   input += synapse0x302d300();
   input += synapse0x302d340();
   input += synapse0x302d380();
   input += synapse0x302d3c0();
   input += synapse0x302d400();
   input += synapse0x302d440();
   input += synapse0x302d480();
   input += synapse0x302d4c0();
   input += synapse0x302d500();
   input += synapse0x302d540();
   input += synapse0x302d580();
   input += synapse0x302d5c0();
   input += synapse0x302d600();
   input += synapse0x302d640();
   input += synapse0x302d0d0();
   input += synapse0x302d110();
   input += synapse0x2de6030();
   input += synapse0x2de6070();
   input += synapse0x3015b80();
   input += synapse0x3015bc0();
   input += synapse0x3015c00();
   input += synapse0x3026a30();
   return input;
}

double NNfunction_NG_8::neuron0x302cf40() {
   double input = input0x302cf40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x2de67d0() {
   double input = -0.42257;
   input += synapse0x302cb90();
   input += synapse0x3026a70();
   input += synapse0x3026ab0();
   input += synapse0x302d790();
   input += synapse0x302d7d0();
   input += synapse0x302d810();
   input += synapse0x302d850();
   input += synapse0x302d890();
   input += synapse0x302d8d0();
   input += synapse0x302d910();
   input += synapse0x302d950();
   input += synapse0x302d990();
   input += synapse0x302d9d0();
   input += synapse0x302da10();
   input += synapse0x302da50();
   input += synapse0x302da90();
   input += synapse0x302c9e0();
   input += synapse0x302ca20();
   input += synapse0x302dbe0();
   input += synapse0x302dc20();
   input += synapse0x302dc60();
   input += synapse0x302dca0();
   input += synapse0x302dce0();
   input += synapse0x302dd20();
   return input;
}

double NNfunction_NG_8::neuron0x2de67d0() {
   double input = input0x2de67d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x302dd60() {
   double input = -0.80008;
   input += synapse0x302e0a0();
   input += synapse0x302e0e0();
   input += synapse0x302e120();
   input += synapse0x302e160();
   input += synapse0x302e1a0();
   input += synapse0x302e1e0();
   input += synapse0x302e220();
   input += synapse0x302e260();
   input += synapse0x302e2a0();
   input += synapse0x302e2e0();
   input += synapse0x302e320();
   input += synapse0x302e360();
   input += synapse0x302e3a0();
   input += synapse0x302e3e0();
   input += synapse0x302e420();
   input += synapse0x302e460();
   input += synapse0x302def0();
   input += synapse0x302df30();
   input += synapse0x302e5b0();
   input += synapse0x302e5f0();
   input += synapse0x302e630();
   input += synapse0x302e670();
   input += synapse0x302e6b0();
   input += synapse0x302e6f0();
   return input;
}

double NNfunction_NG_8::neuron0x302dd60() {
   double input = input0x302dd60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x302e730() {
   double input = -0.00760916;
   input += synapse0x302ea70();
   input += synapse0x302eab0();
   input += synapse0x302eaf0();
   input += synapse0x302eb30();
   input += synapse0x302eb70();
   input += synapse0x302ebb0();
   input += synapse0x302ebf0();
   input += synapse0x302ec30();
   input += synapse0x302ec70();
   input += synapse0x2de63c0();
   input += synapse0x2de6400();
   input += synapse0x2de6440();
   input += synapse0x2de6480();
   input += synapse0x2de64c0();
   input += synapse0x2de6500();
   input += synapse0x2de6540();
   input += synapse0x302e8c0();
   input += synapse0x302e900();
   input += synapse0x2de6690();
   input += synapse0x2de66d0();
   input += synapse0x2de6710();
   input += synapse0x2de6750();
   input += synapse0x2de6790();
   input += synapse0x302f4c0();
   return input;
}

double NNfunction_NG_8::neuron0x302e730() {
   double input = input0x302e730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x302f500() {
   double input = 1.90466;
   input += synapse0x302f840();
   input += synapse0x302f880();
   input += synapse0x302f8c0();
   input += synapse0x302f900();
   input += synapse0x302f940();
   input += synapse0x302f980();
   input += synapse0x302f9c0();
   input += synapse0x302fa00();
   input += synapse0x302fa40();
   input += synapse0x302fa80();
   input += synapse0x302fac0();
   input += synapse0x302fb00();
   input += synapse0x302fb40();
   input += synapse0x302fb80();
   input += synapse0x302fbc0();
   input += synapse0x302fc00();
   input += synapse0x302f690();
   input += synapse0x302f6d0();
   input += synapse0x302fd50();
   input += synapse0x302fd90();
   input += synapse0x302fdd0();
   input += synapse0x302fe10();
   input += synapse0x302fe50();
   input += synapse0x302fe90();
   return input;
}

double NNfunction_NG_8::neuron0x302f500() {
   double input = input0x302f500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x302fed0() {
   double input = -1.29825;
   input += synapse0x3030210();
   input += synapse0x3030250();
   input += synapse0x3030290();
   input += synapse0x30302d0();
   input += synapse0x3030310();
   input += synapse0x3030350();
   input += synapse0x3030390();
   input += synapse0x30303d0();
   input += synapse0x3030410();
   input += synapse0x3030450();
   input += synapse0x3030490();
   input += synapse0x30304d0();
   input += synapse0x3030510();
   input += synapse0x3030550();
   input += synapse0x3030590();
   input += synapse0x30305d0();
   input += synapse0x3030060();
   input += synapse0x30300a0();
   input += synapse0x3030720();
   input += synapse0x3030760();
   input += synapse0x30307a0();
   input += synapse0x30307e0();
   input += synapse0x3030820();
   input += synapse0x3030860();
   return input;
}

double NNfunction_NG_8::neuron0x302fed0() {
   double input = input0x302fed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x30308a0() {
   double input = 4.23217;
   input += synapse0x302a340();
   input += synapse0x302a380();
   input += synapse0x302a3c0();
   input += synapse0x302a400();
   input += synapse0x3030df0();
   input += synapse0x3030e30();
   input += synapse0x3030e70();
   input += synapse0x3030eb0();
   input += synapse0x3030ef0();
   input += synapse0x3030f30();
   input += synapse0x3030f70();
   input += synapse0x3030fb0();
   input += synapse0x3030ff0();
   input += synapse0x3031030();
   input += synapse0x3031070();
   input += synapse0x30310b0();
   input += synapse0x3030a30();
   input += synapse0x3030a70();
   input += synapse0x3031200();
   input += synapse0x3031240();
   input += synapse0x3031280();
   input += synapse0x30312c0();
   input += synapse0x3031300();
   input += synapse0x3031340();
   return input;
}

double NNfunction_NG_8::neuron0x30308a0() {
   double input = input0x30308a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x3031380() {
   double input = 0.300562;
   input += synapse0x30316c0();
   input += synapse0x3031700();
   input += synapse0x3031740();
   input += synapse0x3031780();
   input += synapse0x30317c0();
   input += synapse0x3031800();
   input += synapse0x3031840();
   input += synapse0x3031880();
   input += synapse0x30318c0();
   input += synapse0x3031900();
   input += synapse0x3031940();
   input += synapse0x3031980();
   input += synapse0x30319c0();
   input += synapse0x3031a00();
   input += synapse0x3031a40();
   input += synapse0x3031a80();
   input += synapse0x3031510();
   input += synapse0x3031550();
   input += synapse0x3031bd0();
   input += synapse0x3031c10();
   input += synapse0x3031c50();
   input += synapse0x3031c90();
   input += synapse0x3031cd0();
   input += synapse0x3031d10();
   return input;
}

double NNfunction_NG_8::neuron0x3031380() {
   double input = input0x3031380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x3031d50() {
   double input = 0.781556;
   input += synapse0x3032090();
   input += synapse0x30320d0();
   input += synapse0x3032110();
   input += synapse0x3032150();
   input += synapse0x3032190();
   input += synapse0x30321d0();
   input += synapse0x3032210();
   input += synapse0x3032250();
   input += synapse0x3032290();
   input += synapse0x30322d0();
   input += synapse0x3032310();
   input += synapse0x3032350();
   input += synapse0x3032390();
   input += synapse0x30323d0();
   input += synapse0x3032410();
   input += synapse0x3032450();
   input += synapse0x3031ee0();
   input += synapse0x3031f20();
   input += synapse0x302ecb0();
   input += synapse0x302ecf0();
   input += synapse0x302ed30();
   input += synapse0x302ed70();
   input += synapse0x302edb0();
   input += synapse0x302edf0();
   return input;
}

double NNfunction_NG_8::neuron0x3031d50() {
   double input = input0x3031d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x302ee30() {
   double input = -0.0526643;
   input += synapse0x302f170();
   input += synapse0x302f1b0();
   input += synapse0x302f1f0();
   input += synapse0x302f230();
   input += synapse0x302f270();
   input += synapse0x302f2b0();
   input += synapse0x302f2f0();
   input += synapse0x302f330();
   input += synapse0x302f370();
   input += synapse0x302f3b0();
   input += synapse0x302f3f0();
   input += synapse0x302f430();
   input += synapse0x302f470();
   input += synapse0x30335b0();
   input += synapse0x30335f0();
   input += synapse0x3033630();
   input += synapse0x302efc0();
   input += synapse0x302f000();
   input += synapse0x3033780();
   input += synapse0x30337c0();
   input += synapse0x3033800();
   input += synapse0x3033840();
   input += synapse0x3033880();
   input += synapse0x30338c0();
   return input;
}

double NNfunction_NG_8::neuron0x302ee30() {
   double input = input0x302ee30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x3033900() {
   double input = 0.1922;
   input += synapse0x3033c40();
   input += synapse0x3033c80();
   input += synapse0x3033cc0();
   input += synapse0x3033d00();
   input += synapse0x3033d40();
   input += synapse0x3033d80();
   input += synapse0x3033dc0();
   input += synapse0x3033e00();
   input += synapse0x3033e40();
   input += synapse0x3033e80();
   input += synapse0x3033ec0();
   input += synapse0x3033f00();
   input += synapse0x3033f40();
   input += synapse0x3033f80();
   input += synapse0x3033fc0();
   input += synapse0x3034000();
   input += synapse0x3033a90();
   input += synapse0x3033ad0();
   input += synapse0x3034150();
   input += synapse0x3034190();
   input += synapse0x30341d0();
   input += synapse0x3034210();
   input += synapse0x3034250();
   input += synapse0x3034290();
   return input;
}

double NNfunction_NG_8::neuron0x3033900() {
   double input = input0x3033900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x30342d0() {
   double input = -1.53367;
   input += synapse0x3034610();
   input += synapse0x3034650();
   input += synapse0x3034690();
   input += synapse0x30346d0();
   input += synapse0x3034710();
   input += synapse0x3034750();
   input += synapse0x3034790();
   input += synapse0x30347d0();
   input += synapse0x3034810();
   input += synapse0x3034850();
   input += synapse0x3034890();
   input += synapse0x30348d0();
   input += synapse0x3034910();
   input += synapse0x3034950();
   input += synapse0x3034990();
   input += synapse0x30349d0();
   input += synapse0x3034460();
   input += synapse0x30344a0();
   input += synapse0x3034b20();
   input += synapse0x3034b60();
   input += synapse0x3034ba0();
   input += synapse0x3034be0();
   input += synapse0x3034c20();
   input += synapse0x3034c60();
   return input;
}

double NNfunction_NG_8::neuron0x30342d0() {
   double input = input0x30342d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x3034ca0() {
   double input = -0.73656;
   input += synapse0x3034fe0();
   input += synapse0x3035020();
   input += synapse0x3035060();
   input += synapse0x30350a0();
   input += synapse0x30350e0();
   input += synapse0x3035120();
   input += synapse0x3035160();
   input += synapse0x30351a0();
   input += synapse0x30351e0();
   input += synapse0x3035220();
   input += synapse0x3035260();
   input += synapse0x30352a0();
   input += synapse0x30352e0();
   input += synapse0x3035320();
   input += synapse0x3035360();
   input += synapse0x30353a0();
   input += synapse0x3034e30();
   input += synapse0x3034e70();
   input += synapse0x30354f0();
   input += synapse0x3035530();
   input += synapse0x3035570();
   input += synapse0x30355b0();
   input += synapse0x30355f0();
   input += synapse0x3035630();
   return input;
}

double NNfunction_NG_8::neuron0x3034ca0() {
   double input = input0x3034ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x3035670() {
   double input = 0.50033;
   input += synapse0x30359b0();
   input += synapse0x3026d10();
   input += synapse0x3026d50();
   input += synapse0x3027050();
   input += synapse0x3027090();
   input += synapse0x3027390();
   input += synapse0x30273d0();
   input += synapse0x30276d0();
   input += synapse0x3027710();
   input += synapse0x3027a10();
   input += synapse0x3027a50();
   input += synapse0x3027d50();
   input += synapse0x3027d90();
   input += synapse0x3028090();
   input += synapse0x30280d0();
   input += synapse0x30283d0();
   input += synapse0x3028410();
   input += synapse0x3028710();
   input += synapse0x3028750();
   input += synapse0x3028a50();
   input += synapse0x3028a90();
   input += synapse0x3028d90();
   input += synapse0x3028dd0();
   input += synapse0x30290d0();
   return input;
}

double NNfunction_NG_8::neuron0x3035670() {
   double input = input0x3035670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x3037480() {
   double input = -0.236595;
   input += synapse0x3029110();
   input += synapse0x3029dd0();
   input += synapse0x3029e10();
   input += synapse0x3035800();
   input += synapse0x3035840();
   input += synapse0x302a110();
   input += synapse0x302a150();
   input += synapse0x2dd8090();
   input += synapse0x2dd80d0();
   input += synapse0x302a890();
   input += synapse0x302a8d0();
   input += synapse0x302abd0();
   input += synapse0x302ac10();
   input += synapse0x302af10();
   input += synapse0x302af50();
   input += synapse0x302b250();
   input += synapse0x302b290();
   input += synapse0x302b590();
   input += synapse0x302b5d0();
   input += synapse0x302b8d0();
   input += synapse0x302b910();
   input += synapse0x3029410();
   input += synapse0x3029450();
   input += synapse0x3037720();
   return input;
}

double NNfunction_NG_8::neuron0x3037480() {
   double input = input0x3037480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x3037760() {
   double input = 0.0522151;
   input += synapse0x3037aa0();
   input += synapse0x3037ae0();
   input += synapse0x3037b20();
   input += synapse0x3037b60();
   input += synapse0x3037ba0();
   input += synapse0x3037be0();
   input += synapse0x3037c20();
   input += synapse0x3037c60();
   input += synapse0x3037ca0();
   input += synapse0x3037ce0();
   input += synapse0x3037d20();
   input += synapse0x3037d60();
   input += synapse0x3037da0();
   input += synapse0x3037de0();
   input += synapse0x3037e20();
   input += synapse0x3037e60();
   input += synapse0x30378f0();
   input += synapse0x3037930();
   input += synapse0x3037fb0();
   input += synapse0x3037ff0();
   input += synapse0x3038030();
   input += synapse0x3038070();
   input += synapse0x30380b0();
   input += synapse0x30380f0();
   return input;
}

double NNfunction_NG_8::neuron0x3037760() {
   double input = input0x3037760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x3038130() {
   double input = 0.0643788;
   input += synapse0x3038470();
   input += synapse0x30384b0();
   input += synapse0x30384f0();
   input += synapse0x3038530();
   input += synapse0x3038570();
   input += synapse0x30385b0();
   input += synapse0x30385f0();
   input += synapse0x3038630();
   input += synapse0x3038670();
   input += synapse0x30386b0();
   input += synapse0x30386f0();
   input += synapse0x3038730();
   input += synapse0x3038770();
   input += synapse0x30387b0();
   input += synapse0x30387f0();
   input += synapse0x3038830();
   input += synapse0x30382c0();
   input += synapse0x3038300();
   input += synapse0x3038980();
   input += synapse0x30389c0();
   input += synapse0x3038a00();
   input += synapse0x3038a40();
   input += synapse0x3038a80();
   input += synapse0x3038ac0();
   return input;
}

double NNfunction_NG_8::neuron0x3038130() {
   double input = input0x3038130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x3038b00() {
   double input = -0.0620532;
   input += synapse0x3038e40();
   input += synapse0x3038e80();
   input += synapse0x3038ec0();
   input += synapse0x3038f00();
   input += synapse0x3038f40();
   input += synapse0x3038f80();
   input += synapse0x3038fc0();
   input += synapse0x3039000();
   input += synapse0x3039040();
   input += synapse0x3039080();
   input += synapse0x30390c0();
   input += synapse0x3039100();
   input += synapse0x3039140();
   input += synapse0x3039180();
   input += synapse0x30391c0();
   input += synapse0x3039200();
   input += synapse0x3038c90();
   input += synapse0x3038cd0();
   input += synapse0x3039350();
   input += synapse0x3039390();
   input += synapse0x30393d0();
   input += synapse0x3039410();
   input += synapse0x3039450();
   input += synapse0x3039490();
   return input;
}

double NNfunction_NG_8::neuron0x3038b00() {
   double input = input0x3038b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x30394d0() {
   double input = -0.786604;
   input += synapse0x3039810();
   input += synapse0x3039850();
   input += synapse0x3039890();
   input += synapse0x30398d0();
   input += synapse0x3039910();
   input += synapse0x3039950();
   input += synapse0x3039990();
   input += synapse0x30399d0();
   input += synapse0x3039a10();
   input += synapse0x3039a50();
   input += synapse0x3039a90();
   input += synapse0x3039ad0();
   input += synapse0x3039b10();
   input += synapse0x3039b50();
   input += synapse0x3039b90();
   input += synapse0x3039bd0();
   input += synapse0x3039660();
   input += synapse0x30396a0();
   input += synapse0x3039d20();
   input += synapse0x3039d60();
   input += synapse0x3039da0();
   input += synapse0x3039de0();
   input += synapse0x3039e20();
   input += synapse0x3039e60();
   return input;
}

double NNfunction_NG_8::neuron0x30394d0() {
   double input = input0x30394d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x3039ea0() {
   double input = 0.8055;
   input += synapse0x303a1e0();
   input += synapse0x303a220();
   input += synapse0x303a260();
   input += synapse0x303a2a0();
   input += synapse0x303a2e0();
   input += synapse0x303a320();
   input += synapse0x303a360();
   input += synapse0x303a3a0();
   input += synapse0x303a3e0();
   input += synapse0x30325a0();
   input += synapse0x30325e0();
   input += synapse0x3032620();
   input += synapse0x3032660();
   input += synapse0x30326a0();
   input += synapse0x30326e0();
   input += synapse0x3032720();
   input += synapse0x303a030();
   input += synapse0x303a070();
   input += synapse0x3032870();
   input += synapse0x30328b0();
   input += synapse0x30328f0();
   input += synapse0x3032930();
   input += synapse0x3032970();
   input += synapse0x30329b0();
   return input;
}

double NNfunction_NG_8::neuron0x3039ea0() {
   double input = input0x3039ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x30329f0() {
   double input = 0.480957;
   input += synapse0x3032d30();
   input += synapse0x3032d70();
   input += synapse0x3032db0();
   input += synapse0x3032df0();
   input += synapse0x3032e30();
   input += synapse0x3032e70();
   input += synapse0x3032eb0();
   input += synapse0x3032ef0();
   input += synapse0x3032f30();
   input += synapse0x3032f70();
   input += synapse0x3032fb0();
   input += synapse0x3032ff0();
   input += synapse0x3033030();
   input += synapse0x3033070();
   input += synapse0x30330b0();
   input += synapse0x30330f0();
   input += synapse0x3032b80();
   input += synapse0x3032bc0();
   input += synapse0x3033240();
   input += synapse0x3033280();
   input += synapse0x30332c0();
   input += synapse0x3033300();
   input += synapse0x3033340();
   input += synapse0x3033380();
   return input;
}

double NNfunction_NG_8::neuron0x30329f0() {
   double input = input0x30329f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x30333c0() {
   double input = 1.18464;
   input += synapse0x3033550();
   input += synapse0x303c5e0();
   input += synapse0x303c620();
   input += synapse0x303c660();
   input += synapse0x303c6a0();
   input += synapse0x303c6e0();
   input += synapse0x303c720();
   input += synapse0x303c760();
   input += synapse0x303c7a0();
   input += synapse0x303c7e0();
   input += synapse0x303c820();
   input += synapse0x303c860();
   input += synapse0x303c8a0();
   input += synapse0x303c8e0();
   input += synapse0x303c920();
   input += synapse0x303c960();
   input += synapse0x303c430();
   input += synapse0x303c470();
   input += synapse0x303cab0();
   input += synapse0x303caf0();
   input += synapse0x303cb30();
   input += synapse0x303cb70();
   input += synapse0x303cbb0();
   input += synapse0x303cbf0();
   return input;
}

double NNfunction_NG_8::neuron0x30333c0() {
   double input = input0x30333c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x303cc30() {
   double input = 1.3519;
   input += synapse0x303cf70();
   input += synapse0x303cfb0();
   input += synapse0x303cff0();
   input += synapse0x303d030();
   input += synapse0x303d070();
   input += synapse0x303d0b0();
   input += synapse0x303d0f0();
   input += synapse0x303d130();
   input += synapse0x303d170();
   input += synapse0x303d1b0();
   input += synapse0x303d1f0();
   input += synapse0x303d230();
   input += synapse0x303d270();
   input += synapse0x303d2b0();
   input += synapse0x303d2f0();
   input += synapse0x303d330();
   input += synapse0x303cdc0();
   input += synapse0x303ce00();
   input += synapse0x303d480();
   input += synapse0x303d4c0();
   input += synapse0x303d500();
   input += synapse0x303d540();
   input += synapse0x303d580();
   input += synapse0x303d5c0();
   return input;
}

double NNfunction_NG_8::neuron0x303cc30() {
   double input = input0x303cc30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x303d600() {
   double input = -0.187363;
   input += synapse0x303d940();
   input += synapse0x303d980();
   input += synapse0x303d9c0();
   input += synapse0x303da00();
   input += synapse0x303da40();
   input += synapse0x303da80();
   input += synapse0x303dac0();
   input += synapse0x303db00();
   input += synapse0x303db40();
   input += synapse0x303db80();
   input += synapse0x303dbc0();
   input += synapse0x303dc00();
   input += synapse0x303dc40();
   input += synapse0x303dc80();
   input += synapse0x303dcc0();
   input += synapse0x303dd00();
   input += synapse0x303d790();
   input += synapse0x303d7d0();
   input += synapse0x303de50();
   input += synapse0x303de90();
   input += synapse0x303ded0();
   input += synapse0x303df10();
   input += synapse0x303df50();
   input += synapse0x303df90();
   return input;
}

double NNfunction_NG_8::neuron0x303d600() {
   double input = input0x303d600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x303dfd0() {
   double input = 0.376145;
   input += synapse0x303e310();
   input += synapse0x303e350();
   input += synapse0x303e390();
   input += synapse0x303e3d0();
   input += synapse0x303e410();
   input += synapse0x303e450();
   input += synapse0x303e490();
   input += synapse0x303e4d0();
   input += synapse0x303e510();
   input += synapse0x303e550();
   input += synapse0x303e590();
   input += synapse0x303e5d0();
   input += synapse0x303e610();
   input += synapse0x303e650();
   input += synapse0x303e690();
   input += synapse0x303e6d0();
   input += synapse0x303e160();
   input += synapse0x303e1a0();
   input += synapse0x303e820();
   input += synapse0x303e860();
   input += synapse0x303e8a0();
   input += synapse0x303e8e0();
   input += synapse0x303e920();
   input += synapse0x303e960();
   return input;
}

double NNfunction_NG_8::neuron0x303dfd0() {
   double input = input0x303dfd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x303e9a0() {
   double input = 0.35542;
   input += synapse0x303ece0();
   input += synapse0x303ed20();
   input += synapse0x303ed60();
   input += synapse0x303eda0();
   input += synapse0x303ede0();
   input += synapse0x303ee20();
   input += synapse0x303ee60();
   input += synapse0x303eea0();
   input += synapse0x303eee0();
   input += synapse0x303ef20();
   input += synapse0x303ef60();
   input += synapse0x303efa0();
   input += synapse0x303efe0();
   input += synapse0x303f020();
   input += synapse0x303f060();
   input += synapse0x303f0a0();
   input += synapse0x303eb30();
   input += synapse0x303eb70();
   input += synapse0x303f1f0();
   input += synapse0x303f230();
   input += synapse0x303f270();
   input += synapse0x303f2b0();
   input += synapse0x303f2f0();
   input += synapse0x303f330();
   return input;
}

double NNfunction_NG_8::neuron0x303e9a0() {
   double input = input0x303e9a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x303f370() {
   double input = 1.59107;
   input += synapse0x303f6b0();
   input += synapse0x303f6f0();
   input += synapse0x303f730();
   input += synapse0x303f770();
   input += synapse0x303f7b0();
   input += synapse0x303f7f0();
   input += synapse0x303f830();
   input += synapse0x303f870();
   input += synapse0x303f8b0();
   input += synapse0x303f8f0();
   input += synapse0x303f930();
   input += synapse0x303f970();
   input += synapse0x303f9b0();
   input += synapse0x303f9f0();
   input += synapse0x303fa30();
   input += synapse0x303fa70();
   input += synapse0x303f500();
   input += synapse0x303f540();
   input += synapse0x303fbc0();
   input += synapse0x303fc00();
   input += synapse0x303fc40();
   input += synapse0x303fc80();
   input += synapse0x303fcc0();
   input += synapse0x303fd00();
   return input;
}

double NNfunction_NG_8::neuron0x303f370() {
   double input = input0x303f370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x303fd40() {
   double input = 0.261052;
   input += synapse0x3040080();
   input += synapse0x30400c0();
   input += synapse0x3040100();
   input += synapse0x3040140();
   input += synapse0x3040180();
   input += synapse0x30401c0();
   input += synapse0x3040200();
   input += synapse0x3040240();
   input += synapse0x3040280();
   input += synapse0x30402c0();
   input += synapse0x3040300();
   input += synapse0x3040340();
   input += synapse0x3040380();
   input += synapse0x30403c0();
   input += synapse0x3040400();
   input += synapse0x3040440();
   input += synapse0x303fed0();
   input += synapse0x303ff10();
   input += synapse0x3040590();
   input += synapse0x30405d0();
   input += synapse0x3040610();
   input += synapse0x3040650();
   input += synapse0x3040690();
   input += synapse0x30406d0();
   return input;
}

double NNfunction_NG_8::neuron0x303fd40() {
   double input = input0x303fd40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x3040710() {
   double input = 5.03026;
   input += synapse0x3040a50();
   input += synapse0x3040a90();
   input += synapse0x3040ad0();
   input += synapse0x3040b10();
   input += synapse0x3040b50();
   input += synapse0x3040b90();
   input += synapse0x3040bd0();
   input += synapse0x3040c10();
   input += synapse0x3040c50();
   input += synapse0x3040c90();
   input += synapse0x3040cd0();
   input += synapse0x3040d10();
   input += synapse0x3040d50();
   input += synapse0x3040d90();
   input += synapse0x3040dd0();
   input += synapse0x3040e10();
   input += synapse0x30408a0();
   input += synapse0x30408e0();
   input += synapse0x3040f60();
   input += synapse0x3040fa0();
   input += synapse0x3040fe0();
   input += synapse0x3041020();
   input += synapse0x3041060();
   input += synapse0x30410a0();
   return input;
}

double NNfunction_NG_8::neuron0x3040710() {
   double input = input0x3040710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x30410e0() {
   double input = 0.801587;
   input += synapse0x3041420();
   input += synapse0x30359f0();
   input += synapse0x3035a30();
   input += synapse0x3035a70();
   input += synapse0x3035cc0();
   input += synapse0x3035d00();
   input += synapse0x3035d40();
   input += synapse0x3035f90();
   input += synapse0x3035fd0();
   input += synapse0x3036220();
   input += synapse0x3036260();
   input += synapse0x30362a0();
   input += synapse0x30364f0();
   input += synapse0x3036530();
   input += synapse0x3036780();
   input += synapse0x30367c0();
   input += synapse0x3041270();
   input += synapse0x30412b0();
   input += synapse0x3036910();
   input += synapse0x3036e20();
   input += synapse0x3036e60();
   input += synapse0x3036ea0();
   input += synapse0x30370f0();
   input += synapse0x3037130();
   return input;
}

double NNfunction_NG_8::neuron0x30410e0() {
   double input = input0x30410e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x3037170() {
   double input = 0.511302;
   input += synapse0x30369e0();
   input += synapse0x3036a20();
   input += synapse0x3036a60();
   input += synapse0x3036aa0();
   input += synapse0x3037420();
   input += synapse0x3043770();
   input += synapse0x30437b0();
   input += synapse0x30437f0();
   input += synapse0x3043830();
   input += synapse0x3043870();
   input += synapse0x30438b0();
   input += synapse0x30438f0();
   input += synapse0x3043930();
   input += synapse0x3043970();
   input += synapse0x30439b0();
   input += synapse0x30439f0();
   input += synapse0x3037300();
   input += synapse0x3037340();
   input += synapse0x3043b40();
   input += synapse0x3043b80();
   input += synapse0x3043bc0();
   input += synapse0x3043c00();
   input += synapse0x3043c40();
   input += synapse0x3043c80();
   return input;
}

double NNfunction_NG_8::neuron0x3037170() {
   double input = input0x3037170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x3043cc0() {
   double input = -2.17655;
   input += synapse0x3044000();
   input += synapse0x3044040();
   input += synapse0x3044080();
   input += synapse0x30440c0();
   input += synapse0x3044100();
   input += synapse0x3044140();
   input += synapse0x3044180();
   input += synapse0x30441c0();
   input += synapse0x3044200();
   input += synapse0x3044240();
   input += synapse0x3044280();
   input += synapse0x30442c0();
   input += synapse0x3044300();
   input += synapse0x3044340();
   input += synapse0x3044380();
   input += synapse0x30443c0();
   input += synapse0x3043e50();
   input += synapse0x3043e90();
   input += synapse0x3044510();
   input += synapse0x3044550();
   input += synapse0x3044590();
   input += synapse0x30445d0();
   input += synapse0x3044610();
   input += synapse0x3044650();
   return input;
}

double NNfunction_NG_8::neuron0x3043cc0() {
   double input = input0x3043cc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x3044690() {
   double input = 3.59821;
   input += synapse0x30449d0();
   input += synapse0x3044a10();
   input += synapse0x3044a50();
   input += synapse0x3044a90();
   input += synapse0x3044ad0();
   input += synapse0x3044b10();
   input += synapse0x3044b50();
   input += synapse0x3044b90();
   input += synapse0x3044bd0();
   input += synapse0x3044c10();
   input += synapse0x3044c50();
   input += synapse0x3044c90();
   input += synapse0x3044cd0();
   input += synapse0x3044d10();
   input += synapse0x3044d50();
   input += synapse0x3044d90();
   input += synapse0x3044820();
   input += synapse0x3044860();
   input += synapse0x3044ee0();
   input += synapse0x3044f20();
   input += synapse0x3044f60();
   input += synapse0x3044fa0();
   input += synapse0x3044fe0();
   input += synapse0x3045020();
   return input;
}

double NNfunction_NG_8::neuron0x3044690() {
   double input = input0x3044690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x3045060() {
   double input = -0.063915;
   input += synapse0x30453a0();
   input += synapse0x30453e0();
   input += synapse0x3045420();
   input += synapse0x3045460();
   input += synapse0x30454a0();
   input += synapse0x30454e0();
   input += synapse0x3045520();
   input += synapse0x3045560();
   input += synapse0x30455a0();
   input += synapse0x30455e0();
   input += synapse0x3045620();
   input += synapse0x3045660();
   input += synapse0x30456a0();
   input += synapse0x30456e0();
   input += synapse0x3045720();
   input += synapse0x3045760();
   input += synapse0x30451f0();
   input += synapse0x3045230();
   input += synapse0x30458b0();
   input += synapse0x30458f0();
   input += synapse0x3045930();
   input += synapse0x3045970();
   input += synapse0x30459b0();
   input += synapse0x30459f0();
   return input;
}

double NNfunction_NG_8::neuron0x3045060() {
   double input = input0x3045060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x3045a30() {
   double input = 0.144488;
   input += synapse0x3045d70();
   input += synapse0x3045db0();
   input += synapse0x3045df0();
   input += synapse0x3045e30();
   input += synapse0x3045e70();
   input += synapse0x3045eb0();
   input += synapse0x3045ef0();
   input += synapse0x3045f30();
   input += synapse0x3045f70();
   input += synapse0x3045fb0();
   input += synapse0x3045ff0();
   input += synapse0x3046030();
   input += synapse0x3046070();
   input += synapse0x30460b0();
   input += synapse0x30460f0();
   input += synapse0x3046130();
   input += synapse0x3045bc0();
   input += synapse0x3045c00();
   input += synapse0x3046280();
   input += synapse0x30462c0();
   input += synapse0x3046300();
   input += synapse0x3046340();
   input += synapse0x3046380();
   input += synapse0x30463c0();
   return input;
}

double NNfunction_NG_8::neuron0x3045a30() {
   double input = input0x3045a30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x3046400() {
   double input = -1.81767;
   input += synapse0x3046740();
   input += synapse0x3046780();
   input += synapse0x30467c0();
   input += synapse0x3046800();
   input += synapse0x3046840();
   input += synapse0x3046880();
   input += synapse0x30468c0();
   input += synapse0x3046900();
   input += synapse0x3046940();
   input += synapse0x3046980();
   input += synapse0x30469c0();
   input += synapse0x3046a00();
   input += synapse0x3046a40();
   input += synapse0x3046a80();
   input += synapse0x3046ac0();
   input += synapse0x3046b00();
   input += synapse0x3046590();
   input += synapse0x30465d0();
   input += synapse0x3046c50();
   input += synapse0x3046c90();
   input += synapse0x3046cd0();
   input += synapse0x3046d10();
   input += synapse0x3046d50();
   input += synapse0x3046d90();
   return input;
}

double NNfunction_NG_8::neuron0x3046400() {
   double input = input0x3046400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x3046dd0() {
   double input = 0.0232297;
   input += synapse0x3047110();
   input += synapse0x3047150();
   input += synapse0x3047190();
   input += synapse0x30471d0();
   input += synapse0x3047210();
   input += synapse0x3047250();
   input += synapse0x3047290();
   input += synapse0x30472d0();
   input += synapse0x3047310();
   input += synapse0x3047350();
   input += synapse0x3047390();
   input += synapse0x30473d0();
   input += synapse0x3047410();
   input += synapse0x3047450();
   input += synapse0x3047490();
   input += synapse0x30474d0();
   input += synapse0x3046f60();
   input += synapse0x3046fa0();
   input += synapse0x3047620();
   input += synapse0x3047660();
   input += synapse0x30476a0();
   input += synapse0x30476e0();
   input += synapse0x3047720();
   input += synapse0x3047760();
   return input;
}

double NNfunction_NG_8::neuron0x3046dd0() {
   double input = input0x3046dd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x30477a0() {
   double input = -0.0118397;
   input += synapse0x3047ae0();
   input += synapse0x3047b20();
   input += synapse0x3047b60();
   input += synapse0x3047ba0();
   input += synapse0x3047be0();
   input += synapse0x3047c20();
   input += synapse0x3047c60();
   input += synapse0x3047ca0();
   input += synapse0x3047ce0();
   input += synapse0x3047d20();
   input += synapse0x3047d60();
   input += synapse0x3047da0();
   input += synapse0x3047de0();
   input += synapse0x3047e20();
   input += synapse0x3047e60();
   input += synapse0x3047ea0();
   input += synapse0x3047930();
   input += synapse0x3047970();
   input += synapse0x3047ff0();
   input += synapse0x3048030();
   input += synapse0x3048070();
   input += synapse0x30480b0();
   input += synapse0x30480f0();
   input += synapse0x3048130();
   return input;
}

double NNfunction_NG_8::neuron0x30477a0() {
   double input = input0x30477a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x3048170() {
   double input = 0.614436;
   input += synapse0x3030be0();
   input += synapse0x3030c20();
   input += synapse0x3030c60();
   input += synapse0x3030ca0();
   input += synapse0x3030ce0();
   input += synapse0x3030d20();
   input += synapse0x3030d60();
   input += synapse0x3030da0();
   input += synapse0x30488c0();
   input += synapse0x3048900();
   input += synapse0x3048940();
   input += synapse0x3048980();
   input += synapse0x30489c0();
   input += synapse0x3048a00();
   input += synapse0x3048a40();
   input += synapse0x3048a80();
   input += synapse0x3048300();
   input += synapse0x3048340();
   input += synapse0x3048bd0();
   input += synapse0x3048c10();
   input += synapse0x3048c50();
   input += synapse0x3048c90();
   input += synapse0x3048cd0();
   input += synapse0x3048d10();
   return input;
}

double NNfunction_NG_8::neuron0x3048170() {
   double input = input0x3048170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x3048d50() {
   double input = -2.57997;
   input += synapse0x3049090();
   input += synapse0x30490d0();
   input += synapse0x3049110();
   input += synapse0x3049150();
   input += synapse0x3049190();
   input += synapse0x30491d0();
   input += synapse0x3049210();
   input += synapse0x3049250();
   input += synapse0x3049290();
   input += synapse0x30492d0();
   input += synapse0x3049310();
   input += synapse0x3049350();
   input += synapse0x3049390();
   input += synapse0x30493d0();
   input += synapse0x3049410();
   input += synapse0x3049450();
   input += synapse0x3048ee0();
   input += synapse0x3048f20();
   input += synapse0x30495a0();
   input += synapse0x30495e0();
   input += synapse0x3049620();
   input += synapse0x3049660();
   input += synapse0x30496a0();
   input += synapse0x30496e0();
   return input;
}

double NNfunction_NG_8::neuron0x3048d50() {
   double input = input0x3048d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x3049720() {
   double input = -0.492216;
   input += synapse0x3049a60();
   input += synapse0x3049aa0();
   input += synapse0x3049ae0();
   input += synapse0x3049b20();
   input += synapse0x3049b60();
   input += synapse0x3049ba0();
   input += synapse0x3049be0();
   input += synapse0x3049c20();
   input += synapse0x3049c60();
   input += synapse0x3049ca0();
   input += synapse0x3049ce0();
   input += synapse0x3049d20();
   input += synapse0x3049d60();
   input += synapse0x3049da0();
   input += synapse0x3049de0();
   input += synapse0x3049e20();
   input += synapse0x30498b0();
   input += synapse0x30498f0();
   input += synapse0x303a420();
   input += synapse0x303a460();
   input += synapse0x303a4a0();
   input += synapse0x303a4e0();
   input += synapse0x303a520();
   input += synapse0x303a560();
   return input;
}

double NNfunction_NG_8::neuron0x3049720() {
   double input = input0x3049720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x303a5a0() {
   double input = -1.03549;
   input += synapse0x303a8e0();
   input += synapse0x303a920();
   input += synapse0x303a960();
   input += synapse0x303a9a0();
   input += synapse0x303a9e0();
   input += synapse0x303aa20();
   input += synapse0x303aa60();
   input += synapse0x303aaa0();
   input += synapse0x303aae0();
   input += synapse0x303ab20();
   input += synapse0x303ab60();
   input += synapse0x303aba0();
   input += synapse0x303abe0();
   input += synapse0x303ac20();
   input += synapse0x303ac60();
   input += synapse0x303aca0();
   input += synapse0x303a730();
   input += synapse0x303a770();
   input += synapse0x303adf0();
   input += synapse0x303ae30();
   input += synapse0x303ae70();
   input += synapse0x303aeb0();
   input += synapse0x303aef0();
   input += synapse0x303af30();
   return input;
}

double NNfunction_NG_8::neuron0x303a5a0() {
   double input = input0x303a5a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x303af70() {
   double input = -4.3689;
   input += synapse0x303b2b0();
   input += synapse0x303b2f0();
   input += synapse0x303b330();
   input += synapse0x303b370();
   input += synapse0x303b3b0();
   input += synapse0x303b3f0();
   input += synapse0x303b430();
   input += synapse0x303b470();
   input += synapse0x303b4b0();
   input += synapse0x303b4f0();
   input += synapse0x303b530();
   input += synapse0x303b570();
   input += synapse0x303b5b0();
   input += synapse0x303b5f0();
   input += synapse0x303b630();
   input += synapse0x303b670();
   input += synapse0x303b100();
   input += synapse0x303b140();
   input += synapse0x303b7c0();
   input += synapse0x303b800();
   input += synapse0x303b840();
   input += synapse0x303b880();
   input += synapse0x303b8c0();
   input += synapse0x303b900();
   return input;
}

double NNfunction_NG_8::neuron0x303af70() {
   double input = input0x303af70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x303b940() {
   double input = 1.66437;
   input += synapse0x303bc80();
   input += synapse0x303bcc0();
   input += synapse0x303bd00();
   input += synapse0x303bd40();
   input += synapse0x303bd80();
   input += synapse0x303bdc0();
   input += synapse0x303be00();
   input += synapse0x303be40();
   input += synapse0x303be80();
   input += synapse0x303bec0();
   input += synapse0x303bf00();
   input += synapse0x303bf40();
   input += synapse0x303bf80();
   input += synapse0x303bfc0();
   input += synapse0x303c000();
   input += synapse0x303c040();
   input += synapse0x303bad0();
   input += synapse0x303bb10();
   input += synapse0x303c190();
   input += synapse0x303c1d0();
   input += synapse0x303c210();
   input += synapse0x303c250();
   input += synapse0x303c290();
   input += synapse0x303c2d0();
   return input;
}

double NNfunction_NG_8::neuron0x303b940() {
   double input = input0x303b940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x304df80() {
   double input = 0.183789;
   input += synapse0x304e1a0();
   input += synapse0x304e1e0();
   input += synapse0x304e220();
   input += synapse0x304e260();
   input += synapse0x304e2a0();
   input += synapse0x304e2e0();
   input += synapse0x304e320();
   input += synapse0x304e360();
   input += synapse0x304e3a0();
   input += synapse0x304e3e0();
   input += synapse0x304e420();
   input += synapse0x304e460();
   input += synapse0x304e4a0();
   input += synapse0x304e4e0();
   input += synapse0x304e520();
   input += synapse0x304e560();
   input += synapse0x303c310();
   input += synapse0x303c350();
   input += synapse0x304e6b0();
   input += synapse0x304e6f0();
   input += synapse0x304e730();
   input += synapse0x304e770();
   input += synapse0x304e7b0();
   input += synapse0x304e7f0();
   return input;
}

double NNfunction_NG_8::neuron0x304df80() {
   double input = input0x304df80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x304e830() {
   double input = 0.660248;
   input += synapse0x304eb70();
   input += synapse0x304ebb0();
   input += synapse0x304ebf0();
   input += synapse0x304ec30();
   input += synapse0x304ec70();
   input += synapse0x304ecb0();
   input += synapse0x304ecf0();
   input += synapse0x304ed30();
   input += synapse0x304ed70();
   input += synapse0x304edb0();
   input += synapse0x304edf0();
   input += synapse0x304ee30();
   input += synapse0x304ee70();
   input += synapse0x304eeb0();
   input += synapse0x304eef0();
   input += synapse0x304ef30();
   input += synapse0x304e9c0();
   input += synapse0x304ea00();
   input += synapse0x304f080();
   input += synapse0x304f0c0();
   input += synapse0x304f100();
   input += synapse0x304f140();
   input += synapse0x304f180();
   input += synapse0x304f1c0();
   return input;
}

double NNfunction_NG_8::neuron0x304e830() {
   double input = input0x304e830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x304f200() {
   double input = 0.101773;
   input += synapse0x304f540();
   input += synapse0x304f580();
   input += synapse0x304f5c0();
   input += synapse0x304f600();
   input += synapse0x304f640();
   input += synapse0x304f680();
   input += synapse0x304f6c0();
   input += synapse0x304f700();
   input += synapse0x304f740();
   input += synapse0x304f780();
   input += synapse0x304f7c0();
   input += synapse0x304f800();
   input += synapse0x304f840();
   input += synapse0x304f880();
   input += synapse0x304f8c0();
   input += synapse0x304f900();
   input += synapse0x304f390();
   input += synapse0x304f3d0();
   input += synapse0x304fa50();
   input += synapse0x304fa90();
   input += synapse0x304fad0();
   input += synapse0x304fb10();
   input += synapse0x304fb50();
   input += synapse0x304fb90();
   return input;
}

double NNfunction_NG_8::neuron0x304f200() {
   double input = input0x304f200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x304fbd0() {
   double input = 1.05721;
   input += synapse0x304ff10();
   input += synapse0x304ff50();
   input += synapse0x304ff90();
   input += synapse0x304ffd0();
   input += synapse0x3050010();
   input += synapse0x3050050();
   input += synapse0x3050090();
   input += synapse0x30500d0();
   input += synapse0x3050110();
   input += synapse0x3050150();
   input += synapse0x3050190();
   input += synapse0x30501d0();
   input += synapse0x3050210();
   input += synapse0x3050250();
   input += synapse0x3050290();
   input += synapse0x30502d0();
   input += synapse0x304fd60();
   input += synapse0x304fda0();
   input += synapse0x3050420();
   input += synapse0x3050460();
   input += synapse0x30504a0();
   input += synapse0x30504e0();
   input += synapse0x3050520();
   input += synapse0x3050560();
   return input;
}

double NNfunction_NG_8::neuron0x304fbd0() {
   double input = input0x304fbd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x3056dd0() {
   double input = 0.678984;
   input += synapse0x302cb00();
   input += synapse0x302cb40();
   input += synapse0x302e010();
   input += synapse0x302e050();
   input += synapse0x302e9e0();
   input += synapse0x302ea20();
   input += synapse0x302f7b0();
   input += synapse0x302f7f0();
   input += synapse0x3030180();
   input += synapse0x30301c0();
   input += synapse0x3030b50();
   input += synapse0x3030b90();
   input += synapse0x3031630();
   input += synapse0x3031670();
   input += synapse0x3032000();
   input += synapse0x3032040();
   input += synapse0x302f0e0();
   input += synapse0x302f120();
   input += synapse0x3033bb0();
   input += synapse0x3033bf0();
   input += synapse0x3034580();
   input += synapse0x30345c0();
   input += synapse0x3034f50();
   input += synapse0x3034f90();
   input += synapse0x3035920();
   input += synapse0x3035960();
   input += synapse0x3029a90();
   input += synapse0x3029ad0();
   input += synapse0x3037a10();
   input += synapse0x3037a50();
   input += synapse0x30383e0();
   input += synapse0x3038420();
   input += synapse0x3038db0();
   input += synapse0x3038df0();
   input += synapse0x3039780();
   input += synapse0x30397c0();
   input += synapse0x303a150();
   input += synapse0x303a190();
   input += synapse0x3032ca0();
   input += synapse0x3032ce0();
   input += synapse0x303c550();
   input += synapse0x303c590();
   input += synapse0x303cee0();
   input += synapse0x303cf20();
   input += synapse0x303d8b0();
   input += synapse0x303d8f0();
   input += synapse0x303e280();
   input += synapse0x303e2c0();
   input += synapse0x303ec50();
   input += synapse0x303ec90();
   return input;
}

double NNfunction_NG_8::neuron0x3056dd0() {
   double input = input0x3056dd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x3057170() {
   double input = -0.736633;
   input += synapse0x3041390();
   input += synapse0x30413d0();
   input += synapse0x3036950();
   input += synapse0x3036990();
   input += synapse0x3043f70();
   input += synapse0x3043fb0();
   input += synapse0x3044940();
   input += synapse0x3044980();
   input += synapse0x3045310();
   input += synapse0x3045350();
   input += synapse0x3045ce0();
   input += synapse0x3045d20();
   input += synapse0x30466b0();
   input += synapse0x30466f0();
   input += synapse0x3047080();
   input += synapse0x30470c0();
   input += synapse0x3047a50();
   input += synapse0x3047a90();
   input += synapse0x3048420();
   input += synapse0x3048460();
   input += synapse0x3049000();
   input += synapse0x3049040();
   input += synapse0x30499d0();
   input += synapse0x3049a10();
   input += synapse0x303a850();
   input += synapse0x303a890();
   input += synapse0x303b220();
   input += synapse0x303b260();
   input += synapse0x303bbf0();
   input += synapse0x303bc30();
   input += synapse0x304e110();
   input += synapse0x304e150();
   input += synapse0x304eae0();
   input += synapse0x304eb20();
   input += synapse0x304f4b0();
   input += synapse0x304f4f0();
   input += synapse0x304fe80();
   input += synapse0x304fec0();
   input += synapse0x302bd70();
   input += synapse0x302bdb0();
   input += synapse0x303f620();
   input += synapse0x303f660();
   input += synapse0x30505a0();
   input += synapse0x30505e0();
   input += synapse0x3050620();
   input += synapse0x3050660();
   input += synapse0x3057510();
   input += synapse0x3057550();
   input += synapse0x3057590();
   input += synapse0x30575d0();
   return input;
}

double NNfunction_NG_8::neuron0x3057170() {
   double input = input0x3057170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x3057610() {
   double input = 0.214914;
   input += synapse0x3057950();
   input += synapse0x3057990();
   input += synapse0x30579d0();
   input += synapse0x3057a10();
   input += synapse0x3057a50();
   input += synapse0x3057a90();
   input += synapse0x3057ad0();
   input += synapse0x3057b10();
   input += synapse0x3057b50();
   input += synapse0x3057b90();
   input += synapse0x3057bd0();
   input += synapse0x3057c10();
   input += synapse0x3057c50();
   input += synapse0x3057c90();
   input += synapse0x3057cd0();
   input += synapse0x3057d10();
   input += synapse0x30577a0();
   input += synapse0x30577e0();
   input += synapse0x3057e60();
   input += synapse0x3057ea0();
   input += synapse0x3057ee0();
   input += synapse0x3057f20();
   input += synapse0x3057f60();
   input += synapse0x3057fa0();
   input += synapse0x3057fe0();
   input += synapse0x3058020();
   input += synapse0x3058060();
   input += synapse0x30580a0();
   input += synapse0x30580e0();
   input += synapse0x3058120();
   input += synapse0x3058160();
   input += synapse0x30581a0();
   input += synapse0x3057d50();
   input += synapse0x3057d90();
   input += synapse0x3057dd0();
   input += synapse0x3057e10();
   input += synapse0x30583f0();
   input += synapse0x3058430();
   input += synapse0x3058470();
   input += synapse0x30584b0();
   input += synapse0x30584f0();
   input += synapse0x3058530();
   input += synapse0x3058570();
   input += synapse0x30585b0();
   input += synapse0x30585f0();
   input += synapse0x3058630();
   input += synapse0x3058670();
   input += synapse0x30586b0();
   input += synapse0x30586f0();
   input += synapse0x3058730();
   return input;
}

double NNfunction_NG_8::neuron0x3057610() {
   double input = input0x3057610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x3058770() {
   double input = 0.397771;
   input += synapse0x3058ab0();
   input += synapse0x3058af0();
   input += synapse0x3058b30();
   input += synapse0x3058b70();
   input += synapse0x3058bb0();
   input += synapse0x3058bf0();
   input += synapse0x3058c30();
   input += synapse0x3058c70();
   input += synapse0x3058cb0();
   input += synapse0x3058cf0();
   input += synapse0x3058d30();
   input += synapse0x3058d70();
   input += synapse0x3058db0();
   input += synapse0x3058df0();
   input += synapse0x3058e30();
   input += synapse0x3058e70();
   input += synapse0x3058900();
   input += synapse0x3058940();
   input += synapse0x3058fc0();
   input += synapse0x3059000();
   input += synapse0x3059040();
   input += synapse0x3059080();
   input += synapse0x30590c0();
   input += synapse0x3059100();
   input += synapse0x3059140();
   input += synapse0x3059180();
   input += synapse0x30591c0();
   input += synapse0x3059200();
   input += synapse0x3059240();
   input += synapse0x3059280();
   input += synapse0x30592c0();
   input += synapse0x3059300();
   input += synapse0x3058eb0();
   input += synapse0x3058ef0();
   input += synapse0x3058f30();
   input += synapse0x3058f70();
   input += synapse0x3059550();
   input += synapse0x3059590();
   input += synapse0x30595d0();
   input += synapse0x3059610();
   input += synapse0x3059650();
   input += synapse0x3059690();
   input += synapse0x30596d0();
   input += synapse0x3059710();
   input += synapse0x3059750();
   input += synapse0x3059790();
   input += synapse0x30597d0();
   input += synapse0x3059810();
   input += synapse0x3059850();
   input += synapse0x3059890();
   return input;
}

double NNfunction_NG_8::neuron0x3058770() {
   double input = input0x3058770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x30598d0() {
   double input = 0.27137;
   input += synapse0x3059c10();
   input += synapse0x3059c50();
   input += synapse0x3059c90();
   input += synapse0x3059cd0();
   input += synapse0x3059d10();
   input += synapse0x3059d50();
   input += synapse0x3059d90();
   input += synapse0x3059dd0();
   input += synapse0x3059e10();
   input += synapse0x3059e50();
   input += synapse0x3059e90();
   input += synapse0x3059ed0();
   input += synapse0x3059f10();
   input += synapse0x3059f50();
   input += synapse0x3059f90();
   input += synapse0x3059fd0();
   input += synapse0x3059a60();
   input += synapse0x3059aa0();
   input += synapse0x305a120();
   input += synapse0x305a160();
   input += synapse0x305a1a0();
   input += synapse0x305a1e0();
   input += synapse0x305a220();
   input += synapse0x305a260();
   input += synapse0x305a2a0();
   input += synapse0x305a2e0();
   input += synapse0x305a320();
   input += synapse0x305a360();
   input += synapse0x305a3a0();
   input += synapse0x305a3e0();
   input += synapse0x305a420();
   input += synapse0x305a460();
   input += synapse0x305a010();
   input += synapse0x305a050();
   input += synapse0x305a090();
   input += synapse0x305a0d0();
   input += synapse0x305a6b0();
   input += synapse0x305a6f0();
   input += synapse0x305a730();
   input += synapse0x305a770();
   input += synapse0x305a7b0();
   input += synapse0x305a7f0();
   input += synapse0x305a830();
   input += synapse0x305a870();
   input += synapse0x305a8b0();
   input += synapse0x305a8f0();
   input += synapse0x305a930();
   input += synapse0x305a970();
   input += synapse0x305a9b0();
   input += synapse0x305a9f0();
   return input;
}

double NNfunction_NG_8::neuron0x30598d0() {
   double input = input0x30598d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_8::input0x305aa30() {
   double input = 7.33674;
   input += synapse0x302bb10();
   input += synapse0x305ac50();
   input += synapse0x305ac90();
   input += synapse0x305acd0();
   input += synapse0x305ad10();
   return input;
}

double NNfunction_NG_8::neuron0x305aa30() {
   double input = input0x305aa30();
   return (input * 1)+0;
}

double NNfunction_NG_8::synapse0x2de6960() {
   return (neuron0x3026af0()*0.000187765);
}

double NNfunction_NG_8::synapse0x30269b0() {
   return (neuron0x3026e30()*0.000703983);
}

double NNfunction_NG_8::synapse0x30269f0() {
   return (neuron0x3027170()*-0.0711265);
}

double NNfunction_NG_8::synapse0x302be00() {
   return (neuron0x30274b0()*-11.1159);
}

double NNfunction_NG_8::synapse0x302be40() {
   return (neuron0x30277f0()*-0.00684423);
}

double NNfunction_NG_8::synapse0x302be80() {
   return (neuron0x3027b30()*-0.00364467);
}

double NNfunction_NG_8::synapse0x302bec0() {
   return (neuron0x3027e70()*0.00763002);
}

double NNfunction_NG_8::synapse0x302bf00() {
   return (neuron0x30281b0()*-0.0055217);
}

double NNfunction_NG_8::synapse0x302bf40() {
   return (neuron0x30284f0()*0.00762221);
}

double NNfunction_NG_8::synapse0x302bf80() {
   return (neuron0x3028830()*-0.0068396);
}

double NNfunction_NG_8::synapse0x302bfc0() {
   return (neuron0x3028b70()*-0.0101359);
}

double NNfunction_NG_8::synapse0x302c000() {
   return (neuron0x3028eb0()*0.0644813);
}

double NNfunction_NG_8::synapse0x302c040() {
   return (neuron0x30291f0()*-0.0397221);
}

double NNfunction_NG_8::synapse0x302c080() {
   return (neuron0x3029530()*-0.00588747);
}

double NNfunction_NG_8::synapse0x302c0c0() {
   return (neuron0x3029870()*-0.0125164);
}

double NNfunction_NG_8::synapse0x302c100() {
   return (neuron0x3029bb0()*-0.00798474);
}

double NNfunction_NG_8::synapse0x3026920() {
   return (neuron0x3029ef0()*-0.00209369);
}

double NNfunction_NG_8::synapse0x3026960() {
   return (neuron0x302a450()*-0.00304094);
}

double NNfunction_NG_8::synapse0x2dd81b0() {
   return (neuron0x302a670()*-0.0100576);
}

double NNfunction_NG_8::synapse0x2dd81f0() {
   return (neuron0x302a9b0()*-0.0144378);
}

double NNfunction_NG_8::synapse0x302c360() {
   return (neuron0x302acf0()*0.0153497);
}

double NNfunction_NG_8::synapse0x302c3a0() {
   return (neuron0x302b030()*-0.00542876);
}

double NNfunction_NG_8::synapse0x302c3e0() {
   return (neuron0x302b370()*0.00639055);
}

double NNfunction_NG_8::synapse0x302c420() {
   return (neuron0x302b6b0()*0.0326026);
}

double NNfunction_NG_8::synapse0x302c7a0() {
   return (neuron0x3026af0()*0.00433314);
}

double NNfunction_NG_8::synapse0x302c7e0() {
   return (neuron0x3026e30()*-0.0421434);
}

double NNfunction_NG_8::synapse0x302c820() {
   return (neuron0x3027170()*-0.182166);
}

double NNfunction_NG_8::synapse0x302c860() {
   return (neuron0x30274b0()*-1.01877);
}

double NNfunction_NG_8::synapse0x302c8a0() {
   return (neuron0x30277f0()*-0.118627);
}

double NNfunction_NG_8::synapse0x302c8e0() {
   return (neuron0x3027b30()*0.0140013);
}

double NNfunction_NG_8::synapse0x302c920() {
   return (neuron0x3027e70()*-0.0843243);
}

double NNfunction_NG_8::synapse0x302c960() {
   return (neuron0x30281b0()*0.0763049);
}

double NNfunction_NG_8::synapse0x302c9a0() {
   return (neuron0x30284f0()*-0.0599502);
}

double NNfunction_NG_8::synapse0x302c250() {
   return (neuron0x3028830()*-0.0833841);
}

double NNfunction_NG_8::synapse0x302c290() {
   return (neuron0x3028b70()*-0.0725106);
}

double NNfunction_NG_8::synapse0x302c2d0() {
   return (neuron0x3028eb0()*-0.0471415);
}

double NNfunction_NG_8::synapse0x302c310() {
   return (neuron0x30291f0()*0.727218);
}

double NNfunction_NG_8::synapse0x302cbf0() {
   return (neuron0x3029530()*-0.0524608);
}

double NNfunction_NG_8::synapse0x302cc30() {
   return (neuron0x3029870()*0.282165);
}

double NNfunction_NG_8::synapse0x302cc70() {
   return (neuron0x3029bb0()*0.367785);
}

double NNfunction_NG_8::synapse0x302c5f0() {
   return (neuron0x3029ef0()*-0.0317578);
}

double NNfunction_NG_8::synapse0x302c630() {
   return (neuron0x302a450()*0.360097);
}

double NNfunction_NG_8::synapse0x302cdc0() {
   return (neuron0x302a670()*0.356087);
}

double NNfunction_NG_8::synapse0x302ce00() {
   return (neuron0x302a9b0()*-0.0399636);
}

double NNfunction_NG_8::synapse0x302ce40() {
   return (neuron0x302acf0()*0.0976797);
}

double NNfunction_NG_8::synapse0x302ce80() {
   return (neuron0x302b030()*0.037697);
}

double NNfunction_NG_8::synapse0x302cec0() {
   return (neuron0x302b370()*-0.0282907);
}

double NNfunction_NG_8::synapse0x302cf00() {
   return (neuron0x302b6b0()*0.0390678);
}

double NNfunction_NG_8::synapse0x302d280() {
   return (neuron0x3026af0()*-0.0353692);
}

double NNfunction_NG_8::synapse0x302d2c0() {
   return (neuron0x3026e30()*0.00212241);
}

double NNfunction_NG_8::synapse0x302d300() {
   return (neuron0x3027170()*-4.22599);
}

double NNfunction_NG_8::synapse0x302d340() {
   return (neuron0x30274b0()*0.0349723);
}

double NNfunction_NG_8::synapse0x302d380() {
   return (neuron0x30277f0()*-0.00428695);
}

double NNfunction_NG_8::synapse0x302d3c0() {
   return (neuron0x3027b30()*0.000553431);
}

double NNfunction_NG_8::synapse0x302d400() {
   return (neuron0x3027e70()*-0.00521143);
}

double NNfunction_NG_8::synapse0x302d440() {
   return (neuron0x30281b0()*-0.00459783);
}

double NNfunction_NG_8::synapse0x302d480() {
   return (neuron0x30284f0()*0.000420434);
}

double NNfunction_NG_8::synapse0x302d4c0() {
   return (neuron0x3028830()*0.00408378);
}

double NNfunction_NG_8::synapse0x302d500() {
   return (neuron0x3028b70()*0.00740854);
}

double NNfunction_NG_8::synapse0x302d540() {
   return (neuron0x3028eb0()*-0.116469);
}

double NNfunction_NG_8::synapse0x302d580() {
   return (neuron0x30291f0()*-0.00836246);
}

double NNfunction_NG_8::synapse0x302d5c0() {
   return (neuron0x3029530()*-0.000222713);
}

double NNfunction_NG_8::synapse0x302d600() {
   return (neuron0x3029870()*0.0122524);
}

double NNfunction_NG_8::synapse0x302d640() {
   return (neuron0x3029bb0()*-0.00421616);
}

double NNfunction_NG_8::synapse0x302d0d0() {
   return (neuron0x3029ef0()*-0.0130327);
}

double NNfunction_NG_8::synapse0x302d110() {
   return (neuron0x302a450()*0.00893906);
}

double NNfunction_NG_8::synapse0x2de6030() {
   return (neuron0x302a670()*-0.00453023);
}

double NNfunction_NG_8::synapse0x2de6070() {
   return (neuron0x302a9b0()*0.0008537);
}

double NNfunction_NG_8::synapse0x3015b80() {
   return (neuron0x302acf0()*0.00283649);
}

double NNfunction_NG_8::synapse0x3015bc0() {
   return (neuron0x302b030()*0.00314238);
}

double NNfunction_NG_8::synapse0x3015c00() {
   return (neuron0x302b370()*-0.0021073);
}

double NNfunction_NG_8::synapse0x3026a30() {
   return (neuron0x302b6b0()*2.18508);
}

double NNfunction_NG_8::synapse0x302cb90() {
   return (neuron0x3026af0()*0.000977508);
}

double NNfunction_NG_8::synapse0x3026a70() {
   return (neuron0x3026e30()*-0.0067449);
}

double NNfunction_NG_8::synapse0x3026ab0() {
   return (neuron0x3027170()*0.188197);
}

double NNfunction_NG_8::synapse0x302d790() {
   return (neuron0x30274b0()*-1.16347);
}

double NNfunction_NG_8::synapse0x302d7d0() {
   return (neuron0x30277f0()*-0.0116503);
}

double NNfunction_NG_8::synapse0x302d810() {
   return (neuron0x3027b30()*0.0127625);
}

double NNfunction_NG_8::synapse0x302d850() {
   return (neuron0x3027e70()*-0.00852218);
}

double NNfunction_NG_8::synapse0x302d890() {
   return (neuron0x30281b0()*0.0296816);
}

double NNfunction_NG_8::synapse0x302d8d0() {
   return (neuron0x30284f0()*-0.037121);
}

double NNfunction_NG_8::synapse0x302d910() {
   return (neuron0x3028830()*0.0226731);
}

double NNfunction_NG_8::synapse0x302d950() {
   return (neuron0x3028b70()*-0.00638499);
}

double NNfunction_NG_8::synapse0x302d990() {
   return (neuron0x3028eb0()*0.184364);
}

double NNfunction_NG_8::synapse0x302d9d0() {
   return (neuron0x30291f0()*0.22062);
}

double NNfunction_NG_8::synapse0x302da10() {
   return (neuron0x3029530()*0.0621173);
}

double NNfunction_NG_8::synapse0x302da50() {
   return (neuron0x3029870()*0.0465858);
}

double NNfunction_NG_8::synapse0x302da90() {
   return (neuron0x3029bb0()*0.0702093);
}

double NNfunction_NG_8::synapse0x302c9e0() {
   return (neuron0x3029ef0()*0.0485645);
}

double NNfunction_NG_8::synapse0x302ca20() {
   return (neuron0x302a450()*0.0609981);
}

double NNfunction_NG_8::synapse0x302dbe0() {
   return (neuron0x302a670()*0.0618863);
}

double NNfunction_NG_8::synapse0x302dc20() {
   return (neuron0x302a9b0()*0.0390432);
}

double NNfunction_NG_8::synapse0x302dc60() {
   return (neuron0x302acf0()*0.011747);
}

double NNfunction_NG_8::synapse0x302dca0() {
   return (neuron0x302b030()*-0.0167393);
}

double NNfunction_NG_8::synapse0x302dce0() {
   return (neuron0x302b370()*0.000199264);
}

double NNfunction_NG_8::synapse0x302dd20() {
   return (neuron0x302b6b0()*0.0139427);
}

double NNfunction_NG_8::synapse0x302e0a0() {
   return (neuron0x3026af0()*0.00596075);
}

double NNfunction_NG_8::synapse0x302e0e0() {
   return (neuron0x3026e30()*-0.0119819);
}

double NNfunction_NG_8::synapse0x302e120() {
   return (neuron0x3027170()*-0.293408);
}

double NNfunction_NG_8::synapse0x302e160() {
   return (neuron0x30274b0()*-3.48582);
}

double NNfunction_NG_8::synapse0x302e1a0() {
   return (neuron0x30277f0()*0.00173585);
}

double NNfunction_NG_8::synapse0x302e1e0() {
   return (neuron0x3027b30()*0.00364586);
}

double NNfunction_NG_8::synapse0x302e220() {
   return (neuron0x3027e70()*-0.00959962);
}

double NNfunction_NG_8::synapse0x302e260() {
   return (neuron0x30281b0()*0.00426218);
}

double NNfunction_NG_8::synapse0x302e2a0() {
   return (neuron0x30284f0()*-0.0215939);
}

double NNfunction_NG_8::synapse0x302e2e0() {
   return (neuron0x3028830()*-0.0106121);
}

double NNfunction_NG_8::synapse0x302e320() {
   return (neuron0x3028b70()*0.0100384);
}

double NNfunction_NG_8::synapse0x302e360() {
   return (neuron0x3028eb0()*0.00435933);
}

double NNfunction_NG_8::synapse0x302e3a0() {
   return (neuron0x30291f0()*0.177337);
}

double NNfunction_NG_8::synapse0x302e3e0() {
   return (neuron0x3029530()*0.0135671);
}

double NNfunction_NG_8::synapse0x302e420() {
   return (neuron0x3029870()*0.00954229);
}

double NNfunction_NG_8::synapse0x302e460() {
   return (neuron0x3029bb0()*0.0120084);
}

double NNfunction_NG_8::synapse0x302def0() {
   return (neuron0x3029ef0()*0.0111448);
}

double NNfunction_NG_8::synapse0x302df30() {
   return (neuron0x302a450()*0.00968264);
}

double NNfunction_NG_8::synapse0x302e5b0() {
   return (neuron0x302a670()*0.0233724);
}

double NNfunction_NG_8::synapse0x302e5f0() {
   return (neuron0x302a9b0()*0.004867);
}

double NNfunction_NG_8::synapse0x302e630() {
   return (neuron0x302acf0()*-0.00718257);
}

double NNfunction_NG_8::synapse0x302e670() {
   return (neuron0x302b030()*0.00490472);
}

double NNfunction_NG_8::synapse0x302e6b0() {
   return (neuron0x302b370()*0.000221274);
}

double NNfunction_NG_8::synapse0x302e6f0() {
   return (neuron0x302b6b0()*-0.0429739);
}

double NNfunction_NG_8::synapse0x302ea70() {
   return (neuron0x3026af0()*0.00312724);
}

double NNfunction_NG_8::synapse0x302eab0() {
   return (neuron0x3026e30()*0.0157239);
}

double NNfunction_NG_8::synapse0x302eaf0() {
   return (neuron0x3027170()*0.103188);
}

double NNfunction_NG_8::synapse0x302eb30() {
   return (neuron0x30274b0()*-3.2062);
}

double NNfunction_NG_8::synapse0x302eb70() {
   return (neuron0x30277f0()*-0.0023106);
}

double NNfunction_NG_8::synapse0x302ebb0() {
   return (neuron0x3027b30()*-0.0174367);
}

double NNfunction_NG_8::synapse0x302ebf0() {
   return (neuron0x3027e70()*0.0280331);
}

double NNfunction_NG_8::synapse0x302ec30() {
   return (neuron0x30281b0()*-0.00407432);
}

double NNfunction_NG_8::synapse0x302ec70() {
   return (neuron0x30284f0()*0.0268918);
}

double NNfunction_NG_8::synapse0x2de63c0() {
   return (neuron0x3028830()*-0.000761878);
}

double NNfunction_NG_8::synapse0x2de6400() {
   return (neuron0x3028b70()*-0.00704753);
}

double NNfunction_NG_8::synapse0x2de6440() {
   return (neuron0x3028eb0()*0.427707);
}

double NNfunction_NG_8::synapse0x2de6480() {
   return (neuron0x30291f0()*-0.227513);
}

double NNfunction_NG_8::synapse0x2de64c0() {
   return (neuron0x3029530()*-0.01638);
}

double NNfunction_NG_8::synapse0x2de6500() {
   return (neuron0x3029870()*-0.0428148);
}

double NNfunction_NG_8::synapse0x2de6540() {
   return (neuron0x3029bb0()*-0.0343891);
}

double NNfunction_NG_8::synapse0x302e8c0() {
   return (neuron0x3029ef0()*-0.0231353);
}

double NNfunction_NG_8::synapse0x302e900() {
   return (neuron0x302a450()*-0.0242271);
}

double NNfunction_NG_8::synapse0x2de6690() {
   return (neuron0x302a670()*-0.0558063);
}

double NNfunction_NG_8::synapse0x2de66d0() {
   return (neuron0x302a9b0()*-0.0271152);
}

double NNfunction_NG_8::synapse0x2de6710() {
   return (neuron0x302acf0()*0.00128409);
}

double NNfunction_NG_8::synapse0x2de6750() {
   return (neuron0x302b030()*-0.00279342);
}

double NNfunction_NG_8::synapse0x2de6790() {
   return (neuron0x302b370()*0.00615196);
}

double NNfunction_NG_8::synapse0x302f4c0() {
   return (neuron0x302b6b0()*-0.130228);
}

double NNfunction_NG_8::synapse0x302f840() {
   return (neuron0x3026af0()*0.00928974);
}

double NNfunction_NG_8::synapse0x302f880() {
   return (neuron0x3026e30()*-0.00399293);
}

double NNfunction_NG_8::synapse0x302f8c0() {
   return (neuron0x3027170()*-0.113157);
}

double NNfunction_NG_8::synapse0x302f900() {
   return (neuron0x30274b0()*0.0258135);
}

double NNfunction_NG_8::synapse0x302f940() {
   return (neuron0x30277f0()*-0.00147457);
}

double NNfunction_NG_8::synapse0x302f980() {
   return (neuron0x3027b30()*-0.00402043);
}

double NNfunction_NG_8::synapse0x302f9c0() {
   return (neuron0x3027e70()*0.0177574);
}

double NNfunction_NG_8::synapse0x302fa00() {
   return (neuron0x30281b0()*0.00224888);
}

double NNfunction_NG_8::synapse0x302fa40() {
   return (neuron0x30284f0()*-0.0194913);
}

double NNfunction_NG_8::synapse0x302fa80() {
   return (neuron0x3028830()*-0.000233188);
}

double NNfunction_NG_8::synapse0x302fac0() {
   return (neuron0x3028b70()*-0.00323924);
}

double NNfunction_NG_8::synapse0x302fb00() {
   return (neuron0x3028eb0()*1.00698);
}

double NNfunction_NG_8::synapse0x302fb40() {
   return (neuron0x30291f0()*0.213229);
}

double NNfunction_NG_8::synapse0x302fb80() {
   return (neuron0x3029530()*0.00141154);
}

double NNfunction_NG_8::synapse0x302fbc0() {
   return (neuron0x3029870()*0.00429099);
}

double NNfunction_NG_8::synapse0x302fc00() {
   return (neuron0x3029bb0()*0.0313213);
}

double NNfunction_NG_8::synapse0x302f690() {
   return (neuron0x3029ef0()*0.00173634);
}

double NNfunction_NG_8::synapse0x302f6d0() {
   return (neuron0x302a450()*-0.013611);
}

double NNfunction_NG_8::synapse0x302fd50() {
   return (neuron0x302a670()*-0.00816192);
}

double NNfunction_NG_8::synapse0x302fd90() {
   return (neuron0x302a9b0()*0.0124457);
}

double NNfunction_NG_8::synapse0x302fdd0() {
   return (neuron0x302acf0()*-0.013904);
}

double NNfunction_NG_8::synapse0x302fe10() {
   return (neuron0x302b030()*0.00496127);
}

double NNfunction_NG_8::synapse0x302fe50() {
   return (neuron0x302b370()*0.00283411);
}

double NNfunction_NG_8::synapse0x302fe90() {
   return (neuron0x302b6b0()*-0.405801);
}

double NNfunction_NG_8::synapse0x3030210() {
   return (neuron0x3026af0()*-0.0116785);
}

double NNfunction_NG_8::synapse0x3030250() {
   return (neuron0x3026e30()*0.0405752);
}

double NNfunction_NG_8::synapse0x3030290() {
   return (neuron0x3027170()*0.519704);
}

double NNfunction_NG_8::synapse0x30302d0() {
   return (neuron0x30274b0()*0.173865);
}

double NNfunction_NG_8::synapse0x3030310() {
   return (neuron0x30277f0()*0.0211378);
}

double NNfunction_NG_8::synapse0x3030350() {
   return (neuron0x3027b30()*-0.0350045);
}

double NNfunction_NG_8::synapse0x3030390() {
   return (neuron0x3027e70()*0.0697016);
}

double NNfunction_NG_8::synapse0x30303d0() {
   return (neuron0x30281b0()*-0.0223914);
}

double NNfunction_NG_8::synapse0x3030410() {
   return (neuron0x30284f0()*-0.0207562);
}

double NNfunction_NG_8::synapse0x3030450() {
   return (neuron0x3028830()*0.0285958);
}

double NNfunction_NG_8::synapse0x3030490() {
   return (neuron0x3028b70()*0.00421812);
}

double NNfunction_NG_8::synapse0x30304d0() {
   return (neuron0x3028eb0()*0.0417471);
}

double NNfunction_NG_8::synapse0x3030510() {
   return (neuron0x30291f0()*-0.592141);
}

double NNfunction_NG_8::synapse0x3030550() {
   return (neuron0x3029530()*0.0189495);
}

double NNfunction_NG_8::synapse0x3030590() {
   return (neuron0x3029870()*-0.0344829);
}

double NNfunction_NG_8::synapse0x30305d0() {
   return (neuron0x3029bb0()*-0.0315804);
}

double NNfunction_NG_8::synapse0x3030060() {
   return (neuron0x3029ef0()*0.00672814);
}

double NNfunction_NG_8::synapse0x30300a0() {
   return (neuron0x302a450()*-0.0466119);
}

double NNfunction_NG_8::synapse0x3030720() {
   return (neuron0x302a670()*-0.0716343);
}

double NNfunction_NG_8::synapse0x3030760() {
   return (neuron0x302a9b0()*0.0428614);
}

double NNfunction_NG_8::synapse0x30307a0() {
   return (neuron0x302acf0()*-0.00793284);
}

double NNfunction_NG_8::synapse0x30307e0() {
   return (neuron0x302b030()*-0.0127058);
}

double NNfunction_NG_8::synapse0x3030820() {
   return (neuron0x302b370()*0.0138667);
}

double NNfunction_NG_8::synapse0x3030860() {
   return (neuron0x302b6b0()*-0.351181);
}

double NNfunction_NG_8::synapse0x302a340() {
   return (neuron0x3026af0()*0.0560772);
}

double NNfunction_NG_8::synapse0x302a380() {
   return (neuron0x3026e30()*0.00583464);
}

double NNfunction_NG_8::synapse0x302a3c0() {
   return (neuron0x3027170()*3.66187);
}

double NNfunction_NG_8::synapse0x302a400() {
   return (neuron0x30274b0()*-0.123756);
}

double NNfunction_NG_8::synapse0x3030df0() {
   return (neuron0x30277f0()*-0.00210158);
}

double NNfunction_NG_8::synapse0x3030e30() {
   return (neuron0x3027b30()*-0.0133213);
}

double NNfunction_NG_8::synapse0x3030e70() {
   return (neuron0x3027e70()*0.0160192);
}

double NNfunction_NG_8::synapse0x3030eb0() {
   return (neuron0x30281b0()*-0.00237401);
}

double NNfunction_NG_8::synapse0x3030ef0() {
   return (neuron0x30284f0()*0.00187765);
}

double NNfunction_NG_8::synapse0x3030f30() {
   return (neuron0x3028830()*-0.00711418);
}

double NNfunction_NG_8::synapse0x3030f70() {
   return (neuron0x3028b70()*-0.00365064);
}

double NNfunction_NG_8::synapse0x3030fb0() {
   return (neuron0x3028eb0()*0.104251);
}

double NNfunction_NG_8::synapse0x3030ff0() {
   return (neuron0x30291f0()*-0.0219553);
}

double NNfunction_NG_8::synapse0x3031030() {
   return (neuron0x3029530()*-0.00134754);
}

double NNfunction_NG_8::synapse0x3031070() {
   return (neuron0x3029870()*-0.0093);
}

double NNfunction_NG_8::synapse0x30310b0() {
   return (neuron0x3029bb0()*-0.00400724);
}

double NNfunction_NG_8::synapse0x3030a30() {
   return (neuron0x3029ef0()*0.00259768);
}

double NNfunction_NG_8::synapse0x3030a70() {
   return (neuron0x302a450()*0.00596337);
}

double NNfunction_NG_8::synapse0x3031200() {
   return (neuron0x302a670()*0.0127674);
}

double NNfunction_NG_8::synapse0x3031240() {
   return (neuron0x302a9b0()*-0.00070429);
}

double NNfunction_NG_8::synapse0x3031280() {
   return (neuron0x302acf0()*0.00461287);
}

double NNfunction_NG_8::synapse0x30312c0() {
   return (neuron0x302b030()*-0.00041099);
}

double NNfunction_NG_8::synapse0x3031300() {
   return (neuron0x302b370()*0.00176894);
}

double NNfunction_NG_8::synapse0x3031340() {
   return (neuron0x302b6b0()*-2.21682);
}

double NNfunction_NG_8::synapse0x30316c0() {
   return (neuron0x3026af0()*-0.181305);
}

double NNfunction_NG_8::synapse0x3031700() {
   return (neuron0x3026e30()*-0.077946);
}

double NNfunction_NG_8::synapse0x3031740() {
   return (neuron0x3027170()*-0.704777);
}

double NNfunction_NG_8::synapse0x3031780() {
   return (neuron0x30274b0()*-0.438024);
}

double NNfunction_NG_8::synapse0x30317c0() {
   return (neuron0x30277f0()*0.278314);
}

double NNfunction_NG_8::synapse0x3031800() {
   return (neuron0x3027b30()*-0.140549);
}

double NNfunction_NG_8::synapse0x3031840() {
   return (neuron0x3027e70()*-0.139709);
}

double NNfunction_NG_8::synapse0x3031880() {
   return (neuron0x30281b0()*-0.305675);
}

double NNfunction_NG_8::synapse0x30318c0() {
   return (neuron0x30284f0()*-0.249419);
}

double NNfunction_NG_8::synapse0x3031900() {
   return (neuron0x3028830()*-0.0595682);
}

double NNfunction_NG_8::synapse0x3031940() {
   return (neuron0x3028b70()*-0.0293435);
}

double NNfunction_NG_8::synapse0x3031980() {
   return (neuron0x3028eb0()*-1.02988);
}

double NNfunction_NG_8::synapse0x30319c0() {
   return (neuron0x30291f0()*0.118158);
}

double NNfunction_NG_8::synapse0x3031a00() {
   return (neuron0x3029530()*-0.310744);
}

double NNfunction_NG_8::synapse0x3031a40() {
   return (neuron0x3029870()*-0.0561126);
}

double NNfunction_NG_8::synapse0x3031a80() {
   return (neuron0x3029bb0()*-0.205034);
}

double NNfunction_NG_8::synapse0x3031510() {
   return (neuron0x3029ef0()*0.350483);
}

double NNfunction_NG_8::synapse0x3031550() {
   return (neuron0x302a450()*0.22878);
}

double NNfunction_NG_8::synapse0x3031bd0() {
   return (neuron0x302a670()*0.0888519);
}

double NNfunction_NG_8::synapse0x3031c10() {
   return (neuron0x302a9b0()*0.329469);
}

double NNfunction_NG_8::synapse0x3031c50() {
   return (neuron0x302acf0()*-0.233256);
}

double NNfunction_NG_8::synapse0x3031c90() {
   return (neuron0x302b030()*0.210313);
}

double NNfunction_NG_8::synapse0x3031cd0() {
   return (neuron0x302b370()*0.213999);
}

double NNfunction_NG_8::synapse0x3031d10() {
   return (neuron0x302b6b0()*0.350329);
}

double NNfunction_NG_8::synapse0x3032090() {
   return (neuron0x3026af0()*-0.0239629);
}

double NNfunction_NG_8::synapse0x30320d0() {
   return (neuron0x3026e30()*0.023921);
}

double NNfunction_NG_8::synapse0x3032110() {
   return (neuron0x3027170()*2.5819);
}

double NNfunction_NG_8::synapse0x3032150() {
   return (neuron0x30274b0()*-0.239695);
}

double NNfunction_NG_8::synapse0x3032190() {
   return (neuron0x30277f0()*-0.00199186);
}

double NNfunction_NG_8::synapse0x30321d0() {
   return (neuron0x3027b30()*0.0145604);
}

double NNfunction_NG_8::synapse0x3032210() {
   return (neuron0x3027e70()*0.0325478);
}

double NNfunction_NG_8::synapse0x3032250() {
   return (neuron0x30281b0()*0.0155944);
}

double NNfunction_NG_8::synapse0x3032290() {
   return (neuron0x30284f0()*0.00525971);
}

double NNfunction_NG_8::synapse0x30322d0() {
   return (neuron0x3028830()*-0.00947049);
}

double NNfunction_NG_8::synapse0x3032310() {
   return (neuron0x3028b70()*-0.00184508);
}

double NNfunction_NG_8::synapse0x3032350() {
   return (neuron0x3028eb0()*-0.0200455);
}

double NNfunction_NG_8::synapse0x3032390() {
   return (neuron0x30291f0()*-0.0569524);
}

double NNfunction_NG_8::synapse0x30323d0() {
   return (neuron0x3029530()*0.042334);
}

double NNfunction_NG_8::synapse0x3032410() {
   return (neuron0x3029870()*-0.0633743);
}

double NNfunction_NG_8::synapse0x3032450() {
   return (neuron0x3029bb0()*-0.0723433);
}

double NNfunction_NG_8::synapse0x3031ee0() {
   return (neuron0x3029ef0()*0.017134);
}

double NNfunction_NG_8::synapse0x3031f20() {
   return (neuron0x302a450()*-0.057044);
}

double NNfunction_NG_8::synapse0x302ecb0() {
   return (neuron0x302a670()*-0.0720601);
}

double NNfunction_NG_8::synapse0x302ecf0() {
   return (neuron0x302a9b0()*0.00367672);
}

double NNfunction_NG_8::synapse0x302ed30() {
   return (neuron0x302acf0()*0.0130911);
}

double NNfunction_NG_8::synapse0x302ed70() {
   return (neuron0x302b030()*0.00635567);
}

double NNfunction_NG_8::synapse0x302edb0() {
   return (neuron0x302b370()*-0.00127151);
}

double NNfunction_NG_8::synapse0x302edf0() {
   return (neuron0x302b6b0()*0.154061);
}

double NNfunction_NG_8::synapse0x302f170() {
   return (neuron0x3026af0()*-0.00189583);
}

double NNfunction_NG_8::synapse0x302f1b0() {
   return (neuron0x3026e30()*0.00594663);
}

double NNfunction_NG_8::synapse0x302f1f0() {
   return (neuron0x3027170()*0.106376);
}

double NNfunction_NG_8::synapse0x302f230() {
   return (neuron0x30274b0()*2.32712);
}

double NNfunction_NG_8::synapse0x302f270() {
   return (neuron0x30277f0()*-0.0024314);
}

double NNfunction_NG_8::synapse0x302f2b0() {
   return (neuron0x3027b30()*-0.00582818);
}

double NNfunction_NG_8::synapse0x302f2f0() {
   return (neuron0x3027e70()*0.00214788);
}

double NNfunction_NG_8::synapse0x302f330() {
   return (neuron0x30281b0()*-0.0144142);
}

double NNfunction_NG_8::synapse0x302f370() {
   return (neuron0x30284f0()*0.0186582);
}

double NNfunction_NG_8::synapse0x302f3b0() {
   return (neuron0x3028830()*-0.00362431);
}

double NNfunction_NG_8::synapse0x302f3f0() {
   return (neuron0x3028b70()*0.0135916);
}

double NNfunction_NG_8::synapse0x302f430() {
   return (neuron0x3028eb0()*0.209744);
}

double NNfunction_NG_8::synapse0x302f470() {
   return (neuron0x30291f0()*-0.317028);
}

double NNfunction_NG_8::synapse0x30335b0() {
   return (neuron0x3029530()*-0.0690148);
}

double NNfunction_NG_8::synapse0x30335f0() {
   return (neuron0x3029870()*-0.0378067);
}

double NNfunction_NG_8::synapse0x3033630() {
   return (neuron0x3029bb0()*-0.0547261);
}

double NNfunction_NG_8::synapse0x302efc0() {
   return (neuron0x3029ef0()*-0.0351628);
}

double NNfunction_NG_8::synapse0x302f000() {
   return (neuron0x302a450()*-0.0261215);
}

double NNfunction_NG_8::synapse0x3033780() {
   return (neuron0x302a670()*-0.0400958);
}

double NNfunction_NG_8::synapse0x30337c0() {
   return (neuron0x302a9b0()*-0.0279949);
}

double NNfunction_NG_8::synapse0x3033800() {
   return (neuron0x302acf0()*0.0204957);
}

double NNfunction_NG_8::synapse0x3033840() {
   return (neuron0x302b030()*0.0105124);
}

double NNfunction_NG_8::synapse0x3033880() {
   return (neuron0x302b370()*0.00044833);
}

double NNfunction_NG_8::synapse0x30338c0() {
   return (neuron0x302b6b0()*-0.00570939);
}

double NNfunction_NG_8::synapse0x3033c40() {
   return (neuron0x3026af0()*-0.0216769);
}

double NNfunction_NG_8::synapse0x3033c80() {
   return (neuron0x3026e30()*-0.0352303);
}

double NNfunction_NG_8::synapse0x3033cc0() {
   return (neuron0x3027170()*0.563848);
}

double NNfunction_NG_8::synapse0x3033d00() {
   return (neuron0x30274b0()*-0.115711);
}

double NNfunction_NG_8::synapse0x3033d40() {
   return (neuron0x30277f0()*-0.0336644);
}

double NNfunction_NG_8::synapse0x3033d80() {
   return (neuron0x3027b30()*0.0600911);
}

double NNfunction_NG_8::synapse0x3033dc0() {
   return (neuron0x3027e70()*-0.121084);
}

double NNfunction_NG_8::synapse0x3033e00() {
   return (neuron0x30281b0()*0.12254);
}

double NNfunction_NG_8::synapse0x3033e40() {
   return (neuron0x30284f0()*0.0152736);
}

double NNfunction_NG_8::synapse0x3033e80() {
   return (neuron0x3028830()*0.067658);
}

double NNfunction_NG_8::synapse0x3033ec0() {
   return (neuron0x3028b70()*-0.142161);
}

double NNfunction_NG_8::synapse0x3033f00() {
   return (neuron0x3028eb0()*0.827269);
}

double NNfunction_NG_8::synapse0x3033f40() {
   return (neuron0x30291f0()*-0.0152597);
}

double NNfunction_NG_8::synapse0x3033f80() {
   return (neuron0x3029530()*0.02121);
}

double NNfunction_NG_8::synapse0x3033fc0() {
   return (neuron0x3029870()*0.0834945);
}

double NNfunction_NG_8::synapse0x3034000() {
   return (neuron0x3029bb0()*-0.235475);
}

double NNfunction_NG_8::synapse0x3033a90() {
   return (neuron0x3029ef0()*0.0431414);
}

double NNfunction_NG_8::synapse0x3033ad0() {
   return (neuron0x302a450()*0.187031);
}

double NNfunction_NG_8::synapse0x3034150() {
   return (neuron0x302a670()*-0.138132);
}

double NNfunction_NG_8::synapse0x3034190() {
   return (neuron0x302a9b0()*-0.00111963);
}

double NNfunction_NG_8::synapse0x30341d0() {
   return (neuron0x302acf0()*0.0137512);
}

double NNfunction_NG_8::synapse0x3034210() {
   return (neuron0x302b030()*0.160756);
}

double NNfunction_NG_8::synapse0x3034250() {
   return (neuron0x302b370()*0.0540599);
}

double NNfunction_NG_8::synapse0x3034290() {
   return (neuron0x302b6b0()*-0.346111);
}

double NNfunction_NG_8::synapse0x3034610() {
   return (neuron0x3026af0()*-0.00996196);
}

double NNfunction_NG_8::synapse0x3034650() {
   return (neuron0x3026e30()*-0.00131216);
}

double NNfunction_NG_8::synapse0x3034690() {
   return (neuron0x3027170()*-0.806629);
}

double NNfunction_NG_8::synapse0x30346d0() {
   return (neuron0x30274b0()*-1.35999);
}

double NNfunction_NG_8::synapse0x3034710() {
   return (neuron0x30277f0()*-0.00722841);
}

double NNfunction_NG_8::synapse0x3034750() {
   return (neuron0x3027b30()*-0.00349656);
}

double NNfunction_NG_8::synapse0x3034790() {
   return (neuron0x3027e70()*0.00303784);
}

double NNfunction_NG_8::synapse0x30347d0() {
   return (neuron0x30281b0()*-0.00723103);
}

double NNfunction_NG_8::synapse0x3034810() {
   return (neuron0x30284f0()*0.00124492);
}

double NNfunction_NG_8::synapse0x3034850() {
   return (neuron0x3028830()*-0.0122901);
}

double NNfunction_NG_8::synapse0x3034890() {
   return (neuron0x3028b70()*0.0105774);
}

double NNfunction_NG_8::synapse0x30348d0() {
   return (neuron0x3028eb0()*0.162047);
}

double NNfunction_NG_8::synapse0x3034910() {
   return (neuron0x30291f0()*0.014344);
}

double NNfunction_NG_8::synapse0x3034950() {
   return (neuron0x3029530()*-0.00298984);
}

double NNfunction_NG_8::synapse0x3034990() {
   return (neuron0x3029870()*0.000242816);
}

double NNfunction_NG_8::synapse0x30349d0() {
   return (neuron0x3029bb0()*-0.00247109);
}

double NNfunction_NG_8::synapse0x3034460() {
   return (neuron0x3029ef0()*-0.00360911);
}

double NNfunction_NG_8::synapse0x30344a0() {
   return (neuron0x302a450()*0.0101742);
}

double NNfunction_NG_8::synapse0x3034b20() {
   return (neuron0x302a670()*-0.000569691);
}

double NNfunction_NG_8::synapse0x3034b60() {
   return (neuron0x302a9b0()*-0.000550626);
}

double NNfunction_NG_8::synapse0x3034ba0() {
   return (neuron0x302acf0()*-0.00337185);
}

double NNfunction_NG_8::synapse0x3034be0() {
   return (neuron0x302b030()*0.00890074);
}

double NNfunction_NG_8::synapse0x3034c20() {
   return (neuron0x302b370()*0.00403825);
}

double NNfunction_NG_8::synapse0x3034c60() {
   return (neuron0x302b6b0()*-0.316255);
}

double NNfunction_NG_8::synapse0x3034fe0() {
   return (neuron0x3026af0()*0.00894911);
}

double NNfunction_NG_8::synapse0x3035020() {
   return (neuron0x3026e30()*0.00134384);
}

double NNfunction_NG_8::synapse0x3035060() {
   return (neuron0x3027170()*0.251432);
}

double NNfunction_NG_8::synapse0x30350a0() {
   return (neuron0x30274b0()*0.661245);
}

double NNfunction_NG_8::synapse0x30350e0() {
   return (neuron0x30277f0()*-0.0215934);
}

double NNfunction_NG_8::synapse0x3035120() {
   return (neuron0x3027b30()*-0.00850721);
}

double NNfunction_NG_8::synapse0x3035160() {
   return (neuron0x3027e70()*0.00392864);
}

double NNfunction_NG_8::synapse0x30351a0() {
   return (neuron0x30281b0()*-0.0349928);
}

double NNfunction_NG_8::synapse0x30351e0() {
   return (neuron0x30284f0()*-0.0194808);
}

double NNfunction_NG_8::synapse0x3035220() {
   return (neuron0x3028830()*-0.0253465);
}

double NNfunction_NG_8::synapse0x3035260() {
   return (neuron0x3028b70()*0.0623967);
}

double NNfunction_NG_8::synapse0x30352a0() {
   return (neuron0x3028eb0()*-0.460685);
}

double NNfunction_NG_8::synapse0x30352e0() {
   return (neuron0x30291f0()*0.448014);
}

double NNfunction_NG_8::synapse0x3035320() {
   return (neuron0x3029530()*-0.00733529);
}

double NNfunction_NG_8::synapse0x3035360() {
   return (neuron0x3029870()*0.110427);
}

double NNfunction_NG_8::synapse0x30353a0() {
   return (neuron0x3029bb0()*0.0789045);
}

double NNfunction_NG_8::synapse0x3034e30() {
   return (neuron0x3029ef0()*-0.0254655);
}

double NNfunction_NG_8::synapse0x3034e70() {
   return (neuron0x302a450()*0.112464);
}

double NNfunction_NG_8::synapse0x30354f0() {
   return (neuron0x302a670()*0.0761587);
}

double NNfunction_NG_8::synapse0x3035530() {
   return (neuron0x302a9b0()*0.0220771);
}

double NNfunction_NG_8::synapse0x3035570() {
   return (neuron0x302acf0()*-0.0131644);
}

double NNfunction_NG_8::synapse0x30355b0() {
   return (neuron0x302b030()*0.0314907);
}

double NNfunction_NG_8::synapse0x30355f0() {
   return (neuron0x302b370()*0.0384327);
}

double NNfunction_NG_8::synapse0x3035630() {
   return (neuron0x302b6b0()*0.231542);
}

double NNfunction_NG_8::synapse0x30359b0() {
   return (neuron0x3026af0()*-0.0488673);
}

double NNfunction_NG_8::synapse0x3026d10() {
   return (neuron0x3026e30()*0.00913999);
}

double NNfunction_NG_8::synapse0x3026d50() {
   return (neuron0x3027170()*0.0594288);
}

double NNfunction_NG_8::synapse0x3027050() {
   return (neuron0x30274b0()*-0.095206);
}

double NNfunction_NG_8::synapse0x3027090() {
   return (neuron0x30277f0()*0.00014113);
}

double NNfunction_NG_8::synapse0x3027390() {
   return (neuron0x3027b30()*-0.0437828);
}

double NNfunction_NG_8::synapse0x30273d0() {
   return (neuron0x3027e70()*0.146234);
}

double NNfunction_NG_8::synapse0x30276d0() {
   return (neuron0x30281b0()*-0.0306537);
}

double NNfunction_NG_8::synapse0x3027710() {
   return (neuron0x30284f0()*-0.0350055);
}

double NNfunction_NG_8::synapse0x3027a10() {
   return (neuron0x3028830()*0.0371768);
}

double NNfunction_NG_8::synapse0x3027a50() {
   return (neuron0x3028b70()*0.0169181);
}

double NNfunction_NG_8::synapse0x3027d50() {
   return (neuron0x3028eb0()*0.450367);
}

double NNfunction_NG_8::synapse0x3027d90() {
   return (neuron0x30291f0()*1.24035);
}

double NNfunction_NG_8::synapse0x3028090() {
   return (neuron0x3029530()*0.0264748);
}

double NNfunction_NG_8::synapse0x30280d0() {
   return (neuron0x3029870()*-0.0719546);
}

double NNfunction_NG_8::synapse0x30283d0() {
   return (neuron0x3029bb0()*-0.0411114);
}

double NNfunction_NG_8::synapse0x3028410() {
   return (neuron0x3029ef0()*0.0247373);
}

double NNfunction_NG_8::synapse0x3028710() {
   return (neuron0x302a450()*-0.0435969);
}

double NNfunction_NG_8::synapse0x3028750() {
   return (neuron0x302a670()*-0.0526568);
}

double NNfunction_NG_8::synapse0x3028a50() {
   return (neuron0x302a9b0()*0.105244);
}

double NNfunction_NG_8::synapse0x3028a90() {
   return (neuron0x302acf0()*-0.0292721);
}

double NNfunction_NG_8::synapse0x3028d90() {
   return (neuron0x302b030()*-0.00899557);
}

double NNfunction_NG_8::synapse0x3028dd0() {
   return (neuron0x302b370()*0.0296945);
}

double NNfunction_NG_8::synapse0x30290d0() {
   return (neuron0x302b6b0()*0.308852);
}

double NNfunction_NG_8::synapse0x3029110() {
   return (neuron0x3026af0()*0.0468501);
}

double NNfunction_NG_8::synapse0x3029dd0() {
   return (neuron0x3026e30()*-0.185083);
}

double NNfunction_NG_8::synapse0x3029e10() {
   return (neuron0x3027170()*-0.264738);
}

double NNfunction_NG_8::synapse0x3035800() {
   return (neuron0x30274b0()*-0.225778);
}

double NNfunction_NG_8::synapse0x3035840() {
   return (neuron0x30277f0()*0.197128);
}

double NNfunction_NG_8::synapse0x302a110() {
   return (neuron0x3027b30()*-0.0214748);
}

double NNfunction_NG_8::synapse0x302a150() {
   return (neuron0x3027e70()*-0.0538687);
}

double NNfunction_NG_8::synapse0x2dd8090() {
   return (neuron0x30281b0()*-0.155404);
}

double NNfunction_NG_8::synapse0x2dd80d0() {
   return (neuron0x30284f0()*-0.17402);
}

double NNfunction_NG_8::synapse0x302a890() {
   return (neuron0x3028830()*-0.217679);
}

double NNfunction_NG_8::synapse0x302a8d0() {
   return (neuron0x3028b70()*0.0664195);
}

double NNfunction_NG_8::synapse0x302abd0() {
   return (neuron0x3028eb0()*-0.458796);
}

double NNfunction_NG_8::synapse0x302ac10() {
   return (neuron0x30291f0()*0.481674);
}

double NNfunction_NG_8::synapse0x302af10() {
   return (neuron0x3029530()*0.138838);
}

double NNfunction_NG_8::synapse0x302af50() {
   return (neuron0x3029870()*0.133589);
}

double NNfunction_NG_8::synapse0x302b250() {
   return (neuron0x3029bb0()*0.303153);
}

double NNfunction_NG_8::synapse0x302b290() {
   return (neuron0x3029ef0()*0.303315);
}

double NNfunction_NG_8::synapse0x302b590() {
   return (neuron0x302a450()*-0.155814);
}

double NNfunction_NG_8::synapse0x302b5d0() {
   return (neuron0x302a670()*0.597849);
}

double NNfunction_NG_8::synapse0x302b8d0() {
   return (neuron0x302a9b0()*0.195793);
}

double NNfunction_NG_8::synapse0x302b910() {
   return (neuron0x302acf0()*-0.249645);
}

double NNfunction_NG_8::synapse0x3029410() {
   return (neuron0x302b030()*-0.0138626);
}

double NNfunction_NG_8::synapse0x3029450() {
   return (neuron0x302b370()*-0.342099);
}

double NNfunction_NG_8::synapse0x3037720() {
   return (neuron0x302b6b0()*0.0914918);
}

double NNfunction_NG_8::synapse0x3037aa0() {
   return (neuron0x3026af0()*-0.0418477);
}

double NNfunction_NG_8::synapse0x3037ae0() {
   return (neuron0x3026e30()*-0.00193966);
}

double NNfunction_NG_8::synapse0x3037b20() {
   return (neuron0x3027170()*0.0456459);
}

double NNfunction_NG_8::synapse0x3037b60() {
   return (neuron0x30274b0()*0.0781605);
}

double NNfunction_NG_8::synapse0x3037ba0() {
   return (neuron0x30277f0()*-0.0141929);
}

double NNfunction_NG_8::synapse0x3037be0() {
   return (neuron0x3027b30()*-0.0145358);
}

double NNfunction_NG_8::synapse0x3037c20() {
   return (neuron0x3027e70()*0.0224524);
}

double NNfunction_NG_8::synapse0x3037c60() {
   return (neuron0x30281b0()*-0.0447298);
}

double NNfunction_NG_8::synapse0x3037ca0() {
   return (neuron0x30284f0()*-0.00215876);
}

double NNfunction_NG_8::synapse0x3037ce0() {
   return (neuron0x3028830()*-0.0392493);
}

double NNfunction_NG_8::synapse0x3037d20() {
   return (neuron0x3028b70()*0.0341941);
}

double NNfunction_NG_8::synapse0x3037d60() {
   return (neuron0x3028eb0()*-2.13116);
}

double NNfunction_NG_8::synapse0x3037da0() {
   return (neuron0x30291f0()*0.840842);
}

double NNfunction_NG_8::synapse0x3037de0() {
   return (neuron0x3029530()*0.0481541);
}

double NNfunction_NG_8::synapse0x3037e20() {
   return (neuron0x3029870()*-0.0226214);
}

double NNfunction_NG_8::synapse0x3037e60() {
   return (neuron0x3029bb0()*-0.0350395);
}

double NNfunction_NG_8::synapse0x30378f0() {
   return (neuron0x3029ef0()*0.0173926);
}

double NNfunction_NG_8::synapse0x3037930() {
   return (neuron0x302a450()*-0.0223855);
}

double NNfunction_NG_8::synapse0x3037fb0() {
   return (neuron0x302a670()*-0.0124579);
}

double NNfunction_NG_8::synapse0x3037ff0() {
   return (neuron0x302a9b0()*0.00502345);
}

double NNfunction_NG_8::synapse0x3038030() {
   return (neuron0x302acf0()*-0.00462869);
}

double NNfunction_NG_8::synapse0x3038070() {
   return (neuron0x302b030()*0.00656959);
}

double NNfunction_NG_8::synapse0x30380b0() {
   return (neuron0x302b370()*0.0357495);
}

double NNfunction_NG_8::synapse0x30380f0() {
   return (neuron0x302b6b0()*0.152672);
}

double NNfunction_NG_8::synapse0x3038470() {
   return (neuron0x3026af0()*0.0509438);
}

double NNfunction_NG_8::synapse0x30384b0() {
   return (neuron0x3026e30()*-0.0725276);
}

double NNfunction_NG_8::synapse0x30384f0() {
   return (neuron0x3027170()*0.00684551);
}

double NNfunction_NG_8::synapse0x3038530() {
   return (neuron0x30274b0()*-0.329275);
}

double NNfunction_NG_8::synapse0x3038570() {
   return (neuron0x30277f0()*-0.271899);
}

double NNfunction_NG_8::synapse0x30385b0() {
   return (neuron0x3027b30()*0.28445);
}

double NNfunction_NG_8::synapse0x30385f0() {
   return (neuron0x3027e70()*-0.177091);
}

double NNfunction_NG_8::synapse0x3038630() {
   return (neuron0x30281b0()*0.142417);
}

double NNfunction_NG_8::synapse0x3038670() {
   return (neuron0x30284f0()*0.15955);
}

double NNfunction_NG_8::synapse0x30386b0() {
   return (neuron0x3028830()*-0.0460316);
}

double NNfunction_NG_8::synapse0x30386f0() {
   return (neuron0x3028b70()*0.176324);
}

double NNfunction_NG_8::synapse0x3038730() {
   return (neuron0x3028eb0()*-0.681354);
}

double NNfunction_NG_8::synapse0x3038770() {
   return (neuron0x30291f0()*-0.162576);
}

double NNfunction_NG_8::synapse0x30387b0() {
   return (neuron0x3029530()*0.151595);
}

double NNfunction_NG_8::synapse0x30387f0() {
   return (neuron0x3029870()*0.0440555);
}

double NNfunction_NG_8::synapse0x3038830() {
   return (neuron0x3029bb0()*0.16044);
}

double NNfunction_NG_8::synapse0x30382c0() {
   return (neuron0x3029ef0()*-0.112716);
}

double NNfunction_NG_8::synapse0x3038300() {
   return (neuron0x302a450()*0.10395);
}

double NNfunction_NG_8::synapse0x3038980() {
   return (neuron0x302a670()*0.0887713);
}

double NNfunction_NG_8::synapse0x30389c0() {
   return (neuron0x302a9b0()*0.0360675);
}

double NNfunction_NG_8::synapse0x3038a00() {
   return (neuron0x302acf0()*-0.116886);
}

double NNfunction_NG_8::synapse0x3038a40() {
   return (neuron0x302b030()*0.15051);
}

double NNfunction_NG_8::synapse0x3038a80() {
   return (neuron0x302b370()*-0.0504295);
}

double NNfunction_NG_8::synapse0x3038ac0() {
   return (neuron0x302b6b0()*-0.148467);
}

double NNfunction_NG_8::synapse0x3038e40() {
   return (neuron0x3026af0()*-0.0436742);
}

double NNfunction_NG_8::synapse0x3038e80() {
   return (neuron0x3026e30()*0.0147939);
}

double NNfunction_NG_8::synapse0x3038ec0() {
   return (neuron0x3027170()*1.69607);
}

double NNfunction_NG_8::synapse0x3038f00() {
   return (neuron0x30274b0()*0.211677);
}

double NNfunction_NG_8::synapse0x3038f40() {
   return (neuron0x30277f0()*-0.0166443);
}

double NNfunction_NG_8::synapse0x3038f80() {
   return (neuron0x3027b30()*0.0113542);
}

double NNfunction_NG_8::synapse0x3038fc0() {
   return (neuron0x3027e70()*0.00088545);
}

double NNfunction_NG_8::synapse0x3039000() {
   return (neuron0x30281b0()*-0.000225354);
}

double NNfunction_NG_8::synapse0x3039040() {
   return (neuron0x30284f0()*-0.00630516);
}

double NNfunction_NG_8::synapse0x3039080() {
   return (neuron0x3028830()*-0.00633066);
}

double NNfunction_NG_8::synapse0x30390c0() {
   return (neuron0x3028b70()*-0.0118888);
}

double NNfunction_NG_8::synapse0x3039100() {
   return (neuron0x3028eb0()*-0.0393205);
}

double NNfunction_NG_8::synapse0x3039140() {
   return (neuron0x30291f0()*-0.0557321);
}

double NNfunction_NG_8::synapse0x3039180() {
   return (neuron0x3029530()*0.00240205);
}

double NNfunction_NG_8::synapse0x30391c0() {
   return (neuron0x3029870()*-0.00250845);
}

double NNfunction_NG_8::synapse0x3039200() {
   return (neuron0x3029bb0()*-0.00368002);
}

double NNfunction_NG_8::synapse0x3038c90() {
   return (neuron0x3029ef0()*0.0196077);
}

double NNfunction_NG_8::synapse0x3038cd0() {
   return (neuron0x302a450()*0.0026356);
}

double NNfunction_NG_8::synapse0x3039350() {
   return (neuron0x302a670()*0.00128605);
}

double NNfunction_NG_8::synapse0x3039390() {
   return (neuron0x302a9b0()*-0.0307945);
}

double NNfunction_NG_8::synapse0x30393d0() {
   return (neuron0x302acf0()*0.00236777);
}

double NNfunction_NG_8::synapse0x3039410() {
   return (neuron0x302b030()*-0.00196659);
}

double NNfunction_NG_8::synapse0x3039450() {
   return (neuron0x302b370()*0.00179321);
}

double NNfunction_NG_8::synapse0x3039490() {
   return (neuron0x302b6b0()*1.49305);
}

double NNfunction_NG_8::synapse0x3039810() {
   return (neuron0x3026af0()*-0.233991);
}

double NNfunction_NG_8::synapse0x3039850() {
   return (neuron0x3026e30()*0.131187);
}

double NNfunction_NG_8::synapse0x3039890() {
   return (neuron0x3027170()*0.253619);
}

double NNfunction_NG_8::synapse0x30398d0() {
   return (neuron0x30274b0()*0.46625);
}

double NNfunction_NG_8::synapse0x3039910() {
   return (neuron0x30277f0()*-0.17176);
}

double NNfunction_NG_8::synapse0x3039950() {
   return (neuron0x3027b30()*0.00753535);
}

double NNfunction_NG_8::synapse0x3039990() {
   return (neuron0x3027e70()*0.217308);
}

double NNfunction_NG_8::synapse0x30399d0() {
   return (neuron0x30281b0()*0.026023);
}

double NNfunction_NG_8::synapse0x3039a10() {
   return (neuron0x30284f0()*0.115368);
}

double NNfunction_NG_8::synapse0x3039a50() {
   return (neuron0x3028830()*0.0481704);
}

double NNfunction_NG_8::synapse0x3039a90() {
   return (neuron0x3028b70()*-0.168808);
}

double NNfunction_NG_8::synapse0x3039ad0() {
   return (neuron0x3028eb0()*0.372808);
}

double NNfunction_NG_8::synapse0x3039b10() {
   return (neuron0x30291f0()*-0.592095);
}

double NNfunction_NG_8::synapse0x3039b50() {
   return (neuron0x3029530()*0.308565);
}

double NNfunction_NG_8::synapse0x3039b90() {
   return (neuron0x3029870()*0.114517);
}

double NNfunction_NG_8::synapse0x3039bd0() {
   return (neuron0x3029bb0()*-0.154571);
}

double NNfunction_NG_8::synapse0x3039660() {
   return (neuron0x3029ef0()*0.160226);
}

double NNfunction_NG_8::synapse0x30396a0() {
   return (neuron0x302a450()*0.430477);
}

double NNfunction_NG_8::synapse0x3039d20() {
   return (neuron0x302a670()*0.19363);
}

double NNfunction_NG_8::synapse0x3039d60() {
   return (neuron0x302a9b0()*0.0791631);
}

double NNfunction_NG_8::synapse0x3039da0() {
   return (neuron0x302acf0()*0.142571);
}

double NNfunction_NG_8::synapse0x3039de0() {
   return (neuron0x302b030()*0.0256351);
}

double NNfunction_NG_8::synapse0x3039e20() {
   return (neuron0x302b370()*0.172688);
}

double NNfunction_NG_8::synapse0x3039e60() {
   return (neuron0x302b6b0()*0.88594);
}

double NNfunction_NG_8::synapse0x303a1e0() {
   return (neuron0x3026af0()*-0.0293719);
}

double NNfunction_NG_8::synapse0x303a220() {
   return (neuron0x3026e30()*-0.00752561);
}

double NNfunction_NG_8::synapse0x303a260() {
   return (neuron0x3027170()*0.183501);
}

double NNfunction_NG_8::synapse0x303a2a0() {
   return (neuron0x30274b0()*-0.0769034);
}

double NNfunction_NG_8::synapse0x303a2e0() {
   return (neuron0x30277f0()*-0.0125759);
}

double NNfunction_NG_8::synapse0x303a320() {
   return (neuron0x3027b30()*-0.000206558);
}

double NNfunction_NG_8::synapse0x303a360() {
   return (neuron0x3027e70()*0.00416858);
}

double NNfunction_NG_8::synapse0x303a3a0() {
   return (neuron0x30281b0()*-0.0143897);
}

double NNfunction_NG_8::synapse0x303a3e0() {
   return (neuron0x30284f0()*-0.00778737);
}

double NNfunction_NG_8::synapse0x30325a0() {
   return (neuron0x3028830()*-0.00549947);
}

double NNfunction_NG_8::synapse0x30325e0() {
   return (neuron0x3028b70()*0.0119582);
}

double NNfunction_NG_8::synapse0x3032620() {
   return (neuron0x3028eb0()*2.68084);
}

double NNfunction_NG_8::synapse0x3032660() {
   return (neuron0x30291f0()*-0.0859363);
}

double NNfunction_NG_8::synapse0x30326a0() {
   return (neuron0x3029530()*0.0271041);
}

double NNfunction_NG_8::synapse0x30326e0() {
   return (neuron0x3029870()*0.00146255);
}

double NNfunction_NG_8::synapse0x3032720() {
   return (neuron0x3029bb0()*-0.0116317);
}

double NNfunction_NG_8::synapse0x303a030() {
   return (neuron0x3029ef0()*0.000397337);
}

double NNfunction_NG_8::synapse0x303a070() {
   return (neuron0x302a450()*-0.016059);
}

double NNfunction_NG_8::synapse0x3032870() {
   return (neuron0x302a670()*-0.00406052);
}

double NNfunction_NG_8::synapse0x30328b0() {
   return (neuron0x302a9b0()*0.00433087);
}

double NNfunction_NG_8::synapse0x30328f0() {
   return (neuron0x302acf0()*-0.00274516);
}

double NNfunction_NG_8::synapse0x3032930() {
   return (neuron0x302b030()*0.00769402);
}

double NNfunction_NG_8::synapse0x3032970() {
   return (neuron0x302b370()*0.00987633);
}

double NNfunction_NG_8::synapse0x30329b0() {
   return (neuron0x302b6b0()*0.0742712);
}

double NNfunction_NG_8::synapse0x3032d30() {
   return (neuron0x3026af0()*-0.0173133);
}

double NNfunction_NG_8::synapse0x3032d70() {
   return (neuron0x3026e30()*-0.0324989);
}

double NNfunction_NG_8::synapse0x3032db0() {
   return (neuron0x3027170()*-0.400281);
}

double NNfunction_NG_8::synapse0x3032df0() {
   return (neuron0x30274b0()*-0.191538);
}

double NNfunction_NG_8::synapse0x3032e30() {
   return (neuron0x30277f0()*0.0369487);
}

double NNfunction_NG_8::synapse0x3032e70() {
   return (neuron0x3027b30()*-0.0177407);
}

double NNfunction_NG_8::synapse0x3032eb0() {
   return (neuron0x3027e70()*-0.00330559);
}

double NNfunction_NG_8::synapse0x3032ef0() {
   return (neuron0x30281b0()*0.00134729);
}

double NNfunction_NG_8::synapse0x3032f30() {
   return (neuron0x30284f0()*0.0106683);
}

double NNfunction_NG_8::synapse0x3032f70() {
   return (neuron0x3028830()*-0.00629269);
}

double NNfunction_NG_8::synapse0x3032fb0() {
   return (neuron0x3028b70()*0.0121379);
}

double NNfunction_NG_8::synapse0x3032ff0() {
   return (neuron0x3028eb0()*-0.404203);
}

double NNfunction_NG_8::synapse0x3033030() {
   return (neuron0x30291f0()*-0.0168485);
}

double NNfunction_NG_8::synapse0x3033070() {
   return (neuron0x3029530()*-0.0533006);
}

double NNfunction_NG_8::synapse0x30330b0() {
   return (neuron0x3029870()*0.0251235);
}

double NNfunction_NG_8::synapse0x30330f0() {
   return (neuron0x3029bb0()*0.012806);
}

double NNfunction_NG_8::synapse0x3032b80() {
   return (neuron0x3029ef0()*-0.0480203);
}

double NNfunction_NG_8::synapse0x3032bc0() {
   return (neuron0x302a450()*0.0213814);
}

double NNfunction_NG_8::synapse0x3033240() {
   return (neuron0x302a670()*-0.0147052);
}

double NNfunction_NG_8::synapse0x3033280() {
   return (neuron0x302a9b0()*0.0105657);
}

double NNfunction_NG_8::synapse0x30332c0() {
   return (neuron0x302acf0()*-0.0312921);
}

double NNfunction_NG_8::synapse0x3033300() {
   return (neuron0x302b030()*0.0381959);
}

double NNfunction_NG_8::synapse0x3033340() {
   return (neuron0x302b370()*0.0182759);
}

double NNfunction_NG_8::synapse0x3033380() {
   return (neuron0x302b6b0()*0.44838);
}

double NNfunction_NG_8::synapse0x3033550() {
   return (neuron0x3026af0()*-0.00197731);
}

double NNfunction_NG_8::synapse0x303c5e0() {
   return (neuron0x3026e30()*0.0331943);
}

double NNfunction_NG_8::synapse0x303c620() {
   return (neuron0x3027170()*-0.00966387);
}

double NNfunction_NG_8::synapse0x303c660() {
   return (neuron0x30274b0()*0.0295701);
}

double NNfunction_NG_8::synapse0x303c6a0() {
   return (neuron0x30277f0()*-0.0177518);
}

double NNfunction_NG_8::synapse0x303c6e0() {
   return (neuron0x3027b30()*0.0145845);
}

double NNfunction_NG_8::synapse0x303c720() {
   return (neuron0x3027e70()*0.0427893);
}

double NNfunction_NG_8::synapse0x303c760() {
   return (neuron0x30281b0()*-0.0222979);
}

double NNfunction_NG_8::synapse0x303c7a0() {
   return (neuron0x30284f0()*-0.0152658);
}

double NNfunction_NG_8::synapse0x303c7e0() {
   return (neuron0x3028830()*-0.00926027);
}

double NNfunction_NG_8::synapse0x303c820() {
   return (neuron0x3028b70()*0.0405902);
}

double NNfunction_NG_8::synapse0x303c860() {
   return (neuron0x3028eb0()*-1.09496);
}

double NNfunction_NG_8::synapse0x303c8a0() {
   return (neuron0x30291f0()*-0.599975);
}

double NNfunction_NG_8::synapse0x303c8e0() {
   return (neuron0x3029530()*0.0211621);
}

double NNfunction_NG_8::synapse0x303c920() {
   return (neuron0x3029870()*-0.0365312);
}

double NNfunction_NG_8::synapse0x303c960() {
   return (neuron0x3029bb0()*0.0261641);
}

double NNfunction_NG_8::synapse0x303c430() {
   return (neuron0x3029ef0()*0.0205034);
}

double NNfunction_NG_8::synapse0x303c470() {
   return (neuron0x302a450()*0.0042716);
}

double NNfunction_NG_8::synapse0x303cab0() {
   return (neuron0x302a670()*-0.00623098);
}

double NNfunction_NG_8::synapse0x303caf0() {
   return (neuron0x302a9b0()*-0.0208375);
}

double NNfunction_NG_8::synapse0x303cb30() {
   return (neuron0x302acf0()*-0.0214883);
}

double NNfunction_NG_8::synapse0x303cb70() {
   return (neuron0x302b030()*-0.0239518);
}

double NNfunction_NG_8::synapse0x303cbb0() {
   return (neuron0x302b370()*0.0172481);
}

double NNfunction_NG_8::synapse0x303cbf0() {
   return (neuron0x302b6b0()*-0.253255);
}

double NNfunction_NG_8::synapse0x303cf70() {
   return (neuron0x3026af0()*-0.00118916);
}

double NNfunction_NG_8::synapse0x303cfb0() {
   return (neuron0x3026e30()*0.00484713);
}

double NNfunction_NG_8::synapse0x303cff0() {
   return (neuron0x3027170()*0.220598);
}

double NNfunction_NG_8::synapse0x303d030() {
   return (neuron0x30274b0()*-3.03982);
}

double NNfunction_NG_8::synapse0x303d070() {
   return (neuron0x30277f0()*-0.0018206);
}

double NNfunction_NG_8::synapse0x303d0b0() {
   return (neuron0x3027b30()*0.00522331);
}

double NNfunction_NG_8::synapse0x303d0f0() {
   return (neuron0x3027e70()*-0.00698585);
}

double NNfunction_NG_8::synapse0x303d130() {
   return (neuron0x30281b0()*0.00323404);
}

double NNfunction_NG_8::synapse0x303d170() {
   return (neuron0x30284f0()*0.00559416);
}

double NNfunction_NG_8::synapse0x303d1b0() {
   return (neuron0x3028830()*0.000346526);
}

double NNfunction_NG_8::synapse0x303d1f0() {
   return (neuron0x3028b70()*0.0069813);
}

double NNfunction_NG_8::synapse0x303d230() {
   return (neuron0x3028eb0()*-0.0183054);
}

double NNfunction_NG_8::synapse0x303d270() {
   return (neuron0x30291f0()*-0.0712617);
}

double NNfunction_NG_8::synapse0x303d2b0() {
   return (neuron0x3029530()*-0.018565);
}

double NNfunction_NG_8::synapse0x303d2f0() {
   return (neuron0x3029870()*0.00747924);
}

double NNfunction_NG_8::synapse0x303d330() {
   return (neuron0x3029bb0()*0.0079753);
}

double NNfunction_NG_8::synapse0x303cdc0() {
   return (neuron0x3029ef0()*-0.00824062);
}

double NNfunction_NG_8::synapse0x303ce00() {
   return (neuron0x302a450()*0.0060817);
}

double NNfunction_NG_8::synapse0x303d480() {
   return (neuron0x302a670()*0.0083525);
}

double NNfunction_NG_8::synapse0x303d4c0() {
   return (neuron0x302a9b0()*-0.00453828);
}

double NNfunction_NG_8::synapse0x303d500() {
   return (neuron0x302acf0()*0.00901189);
}

double NNfunction_NG_8::synapse0x303d540() {
   return (neuron0x302b030()*0.00683914);
}

double NNfunction_NG_8::synapse0x303d580() {
   return (neuron0x302b370()*-0.00307816);
}

double NNfunction_NG_8::synapse0x303d5c0() {
   return (neuron0x302b6b0()*0.026038);
}

double NNfunction_NG_8::synapse0x303d940() {
   return (neuron0x3026af0()*0.476224);
}

double NNfunction_NG_8::synapse0x303d980() {
   return (neuron0x3026e30()*0.320155);
}

double NNfunction_NG_8::synapse0x303d9c0() {
   return (neuron0x3027170()*-0.248186);
}

double NNfunction_NG_8::synapse0x303da00() {
   return (neuron0x30274b0()*-0.696112);
}

double NNfunction_NG_8::synapse0x303da40() {
   return (neuron0x30277f0()*0.277713);
}

double NNfunction_NG_8::synapse0x303da80() {
   return (neuron0x3027b30()*-0.00764417);
}

double NNfunction_NG_8::synapse0x303dac0() {
   return (neuron0x3027e70()*0.112743);
}

double NNfunction_NG_8::synapse0x303db00() {
   return (neuron0x30281b0()*-0.374428);
}

double NNfunction_NG_8::synapse0x303db40() {
   return (neuron0x30284f0()*0.0837929);
}

double NNfunction_NG_8::synapse0x303db80() {
   return (neuron0x3028830()*-0.167075);
}

double NNfunction_NG_8::synapse0x303dbc0() {
   return (neuron0x3028b70()*-0.110152);
}

double NNfunction_NG_8::synapse0x303dc00() {
   return (neuron0x3028eb0()*0.173156);
}

double NNfunction_NG_8::synapse0x303dc40() {
   return (neuron0x30291f0()*-0.242831);
}

double NNfunction_NG_8::synapse0x303dc80() {
   return (neuron0x3029530()*-0.31632);
}

double NNfunction_NG_8::synapse0x303dcc0() {
   return (neuron0x3029870()*-0.0538025);
}

double NNfunction_NG_8::synapse0x303dd00() {
   return (neuron0x3029bb0()*-0.262026);
}

double NNfunction_NG_8::synapse0x303d790() {
   return (neuron0x3029ef0()*-0.0306136);
}

double NNfunction_NG_8::synapse0x303d7d0() {
   return (neuron0x302a450()*0.308574);
}

double NNfunction_NG_8::synapse0x303de50() {
   return (neuron0x302a670()*-0.367115);
}

double NNfunction_NG_8::synapse0x303de90() {
   return (neuron0x302a9b0()*0.366414);
}

double NNfunction_NG_8::synapse0x303ded0() {
   return (neuron0x302acf0()*-0.0867908);
}

double NNfunction_NG_8::synapse0x303df10() {
   return (neuron0x302b030()*-0.238031);
}

double NNfunction_NG_8::synapse0x303df50() {
   return (neuron0x302b370()*-0.0141771);
}

double NNfunction_NG_8::synapse0x303df90() {
   return (neuron0x302b6b0()*-0.409445);
}

double NNfunction_NG_8::synapse0x303e310() {
   return (neuron0x3026af0()*0.00306849);
}

double NNfunction_NG_8::synapse0x303e350() {
   return (neuron0x3026e30()*-0.00640921);
}

double NNfunction_NG_8::synapse0x303e390() {
   return (neuron0x3027170()*-0.174369);
}

double NNfunction_NG_8::synapse0x303e3d0() {
   return (neuron0x30274b0()*0.111386);
}

double NNfunction_NG_8::synapse0x303e410() {
   return (neuron0x30277f0()*-0.00796702);
}

double NNfunction_NG_8::synapse0x303e450() {
   return (neuron0x3027b30()*-0.00467355);
}

double NNfunction_NG_8::synapse0x303e490() {
   return (neuron0x3027e70()*-0.00812094);
}

double NNfunction_NG_8::synapse0x303e4d0() {
   return (neuron0x30281b0()*0.0169678);
}

double NNfunction_NG_8::synapse0x303e510() {
   return (neuron0x30284f0()*-0.0149704);
}

double NNfunction_NG_8::synapse0x303e550() {
   return (neuron0x3028830()*0.0153247);
}

double NNfunction_NG_8::synapse0x303e590() {
   return (neuron0x3028b70()*-0.0116065);
}

double NNfunction_NG_8::synapse0x303e5d0() {
   return (neuron0x3028eb0()*1.59271);
}

double NNfunction_NG_8::synapse0x303e610() {
   return (neuron0x30291f0()*-0.75652);
}

double NNfunction_NG_8::synapse0x303e650() {
   return (neuron0x3029530()*0.000293621);
}

double NNfunction_NG_8::synapse0x303e690() {
   return (neuron0x3029870()*0.0182023);
}

double NNfunction_NG_8::synapse0x303e6d0() {
   return (neuron0x3029bb0()*0.000904922);
}

double NNfunction_NG_8::synapse0x303e160() {
   return (neuron0x3029ef0()*-0.00812688);
}

double NNfunction_NG_8::synapse0x303e1a0() {
   return (neuron0x302a450()*-0.00694544);
}

double NNfunction_NG_8::synapse0x303e820() {
   return (neuron0x302a670()*0.0150948);
}

double NNfunction_NG_8::synapse0x303e860() {
   return (neuron0x302a9b0()*-0.00251554);
}

double NNfunction_NG_8::synapse0x303e8a0() {
   return (neuron0x302acf0()*-0.00263582);
}

double NNfunction_NG_8::synapse0x303e8e0() {
   return (neuron0x302b030()*-0.00564518);
}

double NNfunction_NG_8::synapse0x303e920() {
   return (neuron0x302b370()*-0.0137933);
}

double NNfunction_NG_8::synapse0x303e960() {
   return (neuron0x302b6b0()*-0.033122);
}

double NNfunction_NG_8::synapse0x303ece0() {
   return (neuron0x3026af0()*-0.0344489);
}

double NNfunction_NG_8::synapse0x303ed20() {
   return (neuron0x3026e30()*-0.0423931);
}

double NNfunction_NG_8::synapse0x303ed60() {
   return (neuron0x3027170()*-0.184421);
}

double NNfunction_NG_8::synapse0x303eda0() {
   return (neuron0x30274b0()*1.11486);
}

double NNfunction_NG_8::synapse0x303ede0() {
   return (neuron0x30277f0()*0.0109076);
}

double NNfunction_NG_8::synapse0x303ee20() {
   return (neuron0x3027b30()*0.0283577);
}

double NNfunction_NG_8::synapse0x303ee60() {
   return (neuron0x3027e70()*-0.0801136);
}

double NNfunction_NG_8::synapse0x303eea0() {
   return (neuron0x30281b0()*-0.0193564);
}

double NNfunction_NG_8::synapse0x303eee0() {
   return (neuron0x30284f0()*-0.0158582);
}

double NNfunction_NG_8::synapse0x303ef20() {
   return (neuron0x3028830()*0.0105075);
}

double NNfunction_NG_8::synapse0x303ef60() {
   return (neuron0x3028b70()*0.0184736);
}

double NNfunction_NG_8::synapse0x303efa0() {
   return (neuron0x3028eb0()*-0.374635);
}

double NNfunction_NG_8::synapse0x303efe0() {
   return (neuron0x30291f0()*0.380837);
}

double NNfunction_NG_8::synapse0x303f020() {
   return (neuron0x3029530()*-0.0737503);
}

double NNfunction_NG_8::synapse0x303f060() {
   return (neuron0x3029870()*-0.162701);
}

double NNfunction_NG_8::synapse0x303f0a0() {
   return (neuron0x3029bb0()*-0.0569222);
}

double NNfunction_NG_8::synapse0x303eb30() {
   return (neuron0x3029ef0()*-0.0289811);
}

double NNfunction_NG_8::synapse0x303eb70() {
   return (neuron0x302a450()*-0.111869);
}

double NNfunction_NG_8::synapse0x303f1f0() {
   return (neuron0x302a670()*-0.0464891);
}

double NNfunction_NG_8::synapse0x303f230() {
   return (neuron0x302a9b0()*-0.0263661);
}

double NNfunction_NG_8::synapse0x303f270() {
   return (neuron0x302acf0()*0.0262637);
}

double NNfunction_NG_8::synapse0x303f2b0() {
   return (neuron0x302b030()*0.0436828);
}

double NNfunction_NG_8::synapse0x303f2f0() {
   return (neuron0x302b370()*-0.0364219);
}

double NNfunction_NG_8::synapse0x303f330() {
   return (neuron0x302b6b0()*0.0937966);
}

double NNfunction_NG_8::synapse0x303f6b0() {
   return (neuron0x3026af0()*-0.00585153);
}

double NNfunction_NG_8::synapse0x303f6f0() {
   return (neuron0x3026e30()*-0.00961934);
}

double NNfunction_NG_8::synapse0x303f730() {
   return (neuron0x3027170()*-0.681792);
}

double NNfunction_NG_8::synapse0x303f770() {
   return (neuron0x30274b0()*-0.00844183);
}

double NNfunction_NG_8::synapse0x303f7b0() {
   return (neuron0x30277f0()*-0.000972538);
}

double NNfunction_NG_8::synapse0x303f7f0() {
   return (neuron0x3027b30()*-0.00451444);
}

double NNfunction_NG_8::synapse0x303f830() {
   return (neuron0x3027e70()*-0.0099368);
}

double NNfunction_NG_8::synapse0x303f870() {
   return (neuron0x30281b0()*-0.00953991);
}

double NNfunction_NG_8::synapse0x303f8b0() {
   return (neuron0x30284f0()*-0.00396498);
}

double NNfunction_NG_8::synapse0x303f8f0() {
   return (neuron0x3028830()*0.00840486);
}

double NNfunction_NG_8::synapse0x303f930() {
   return (neuron0x3028b70()*0.0060633);
}

double NNfunction_NG_8::synapse0x303f970() {
   return (neuron0x3028eb0()*-0.0281424);
}

double NNfunction_NG_8::synapse0x303f9b0() {
   return (neuron0x30291f0()*-0.0418793);
}

double NNfunction_NG_8::synapse0x303f9f0() {
   return (neuron0x3029530()*-0.0244148);
}

double NNfunction_NG_8::synapse0x303fa30() {
   return (neuron0x3029870()*0.017351);
}

double NNfunction_NG_8::synapse0x303fa70() {
   return (neuron0x3029bb0()*0.0176467);
}

double NNfunction_NG_8::synapse0x303f500() {
   return (neuron0x3029ef0()*-0.0202566);
}

double NNfunction_NG_8::synapse0x303f540() {
   return (neuron0x302a450()*0.0180991);
}

double NNfunction_NG_8::synapse0x303fbc0() {
   return (neuron0x302a670()*0.0111815);
}

double NNfunction_NG_8::synapse0x303fc00() {
   return (neuron0x302a9b0()*-1.46081e-05);
}

double NNfunction_NG_8::synapse0x303fc40() {
   return (neuron0x302acf0()*0.0133241);
}

double NNfunction_NG_8::synapse0x303fc80() {
   return (neuron0x302b030()*-0.00501627);
}

double NNfunction_NG_8::synapse0x303fcc0() {
   return (neuron0x302b370()*0.00031249);
}

double NNfunction_NG_8::synapse0x303fd00() {
   return (neuron0x302b6b0()*-0.745531);
}

double NNfunction_NG_8::synapse0x3040080() {
   return (neuron0x3026af0()*-0.0301423);
}

double NNfunction_NG_8::synapse0x30400c0() {
   return (neuron0x3026e30()*0.0401414);
}

double NNfunction_NG_8::synapse0x3040100() {
   return (neuron0x3027170()*-0.418301);
}

double NNfunction_NG_8::synapse0x3040140() {
   return (neuron0x30274b0()*0.157055);
}

double NNfunction_NG_8::synapse0x3040180() {
   return (neuron0x30277f0()*0.00345947);
}

double NNfunction_NG_8::synapse0x30401c0() {
   return (neuron0x3027b30()*0.00340157);
}

double NNfunction_NG_8::synapse0x3040200() {
   return (neuron0x3027e70()*0.0440249);
}

double NNfunction_NG_8::synapse0x3040240() {
   return (neuron0x30281b0()*0.0241458);
}

double NNfunction_NG_8::synapse0x3040280() {
   return (neuron0x30284f0()*0.0227547);
}

double NNfunction_NG_8::synapse0x30402c0() {
   return (neuron0x3028830()*0.00123714);
}

double NNfunction_NG_8::synapse0x3040300() {
   return (neuron0x3028b70()*-0.00446057);
}

double NNfunction_NG_8::synapse0x3040340() {
   return (neuron0x3028eb0()*0.35566);
}

double NNfunction_NG_8::synapse0x3040380() {
   return (neuron0x30291f0()*0.0825973);
}

double NNfunction_NG_8::synapse0x30403c0() {
   return (neuron0x3029530()*0.00952819);
}

double NNfunction_NG_8::synapse0x3040400() {
   return (neuron0x3029870()*-0.0192654);
}

double NNfunction_NG_8::synapse0x3040440() {
   return (neuron0x3029bb0()*-0.0454421);
}

double NNfunction_NG_8::synapse0x303fed0() {
   return (neuron0x3029ef0()*-0.0168738);
}

double NNfunction_NG_8::synapse0x303ff10() {
   return (neuron0x302a450()*-0.0264866);
}

double NNfunction_NG_8::synapse0x3040590() {
   return (neuron0x302a670()*-0.0618509);
}

double NNfunction_NG_8::synapse0x30405d0() {
   return (neuron0x302a9b0()*0.0520459);
}

double NNfunction_NG_8::synapse0x3040610() {
   return (neuron0x302acf0()*0.00821161);
}

double NNfunction_NG_8::synapse0x3040650() {
   return (neuron0x302b030()*0.0288836);
}

double NNfunction_NG_8::synapse0x3040690() {
   return (neuron0x302b370()*-0.0198504);
}

double NNfunction_NG_8::synapse0x30406d0() {
   return (neuron0x302b6b0()*0.582122);
}

double NNfunction_NG_8::synapse0x3040a50() {
   return (neuron0x3026af0()*0.0360853);
}

double NNfunction_NG_8::synapse0x3040a90() {
   return (neuron0x3026e30()*0.000769616);
}

double NNfunction_NG_8::synapse0x3040ad0() {
   return (neuron0x3027170()*5.81722);
}

double NNfunction_NG_8::synapse0x3040b10() {
   return (neuron0x30274b0()*0.0618038);
}

double NNfunction_NG_8::synapse0x3040b50() {
   return (neuron0x30277f0()*0.0050704);
}

double NNfunction_NG_8::synapse0x3040b90() {
   return (neuron0x3027b30()*0.00611387);
}

double NNfunction_NG_8::synapse0x3040bd0() {
   return (neuron0x3027e70()*0.0164122);
}

double NNfunction_NG_8::synapse0x3040c10() {
   return (neuron0x30281b0()*0.0135221);
}

double NNfunction_NG_8::synapse0x3040c50() {
   return (neuron0x30284f0()*0.000819584);
}

double NNfunction_NG_8::synapse0x3040c90() {
   return (neuron0x3028830()*0.00333209);
}

double NNfunction_NG_8::synapse0x3040cd0() {
   return (neuron0x3028b70()*-0.00141087);
}

double NNfunction_NG_8::synapse0x3040d10() {
   return (neuron0x3028eb0()*0.0701729);
}

double NNfunction_NG_8::synapse0x3040d50() {
   return (neuron0x30291f0()*0.0418826);
}

double NNfunction_NG_8::synapse0x3040d90() {
   return (neuron0x3029530()*0.0159318);
}

double NNfunction_NG_8::synapse0x3040dd0() {
   return (neuron0x3029870()*0.00123967);
}

double NNfunction_NG_8::synapse0x3040e10() {
   return (neuron0x3029bb0()*0.0047103);
}

double NNfunction_NG_8::synapse0x30408a0() {
   return (neuron0x3029ef0()*-0.015035);
}

double NNfunction_NG_8::synapse0x30408e0() {
   return (neuron0x302a450()*0.00262868);
}

double NNfunction_NG_8::synapse0x3040f60() {
   return (neuron0x302a670()*0.0066055);
}

double NNfunction_NG_8::synapse0x3040fa0() {
   return (neuron0x302a9b0()*0.00238443);
}

double NNfunction_NG_8::synapse0x3040fe0() {
   return (neuron0x302acf0()*0.00566125);
}

double NNfunction_NG_8::synapse0x3041020() {
   return (neuron0x302b030()*0.0013807);
}

double NNfunction_NG_8::synapse0x3041060() {
   return (neuron0x302b370()*0.00437483);
}

double NNfunction_NG_8::synapse0x30410a0() {
   return (neuron0x302b6b0()*3.03801);
}

double NNfunction_NG_8::synapse0x3041420() {
   return (neuron0x3026af0()*-0.0539145);
}

double NNfunction_NG_8::synapse0x30359f0() {
   return (neuron0x3026e30()*-0.0654793);
}

double NNfunction_NG_8::synapse0x3035a30() {
   return (neuron0x3027170()*-0.149768);
}

double NNfunction_NG_8::synapse0x3035a70() {
   return (neuron0x30274b0()*-0.368697);
}

double NNfunction_NG_8::synapse0x3035cc0() {
   return (neuron0x30277f0()*0.0585153);
}

double NNfunction_NG_8::synapse0x3035d00() {
   return (neuron0x3027b30()*-0.00441776);
}

double NNfunction_NG_8::synapse0x3035d40() {
   return (neuron0x3027e70()*-0.000399859);
}

double NNfunction_NG_8::synapse0x3035f90() {
   return (neuron0x30281b0()*-0.0353814);
}

double NNfunction_NG_8::synapse0x3035fd0() {
   return (neuron0x30284f0()*0.011014);
}

double NNfunction_NG_8::synapse0x3036220() {
   return (neuron0x3028830()*0.000397071);
}

double NNfunction_NG_8::synapse0x3036260() {
   return (neuron0x3028b70()*0.00741163);
}

double NNfunction_NG_8::synapse0x30362a0() {
   return (neuron0x3028eb0()*0.0316356);
}

double NNfunction_NG_8::synapse0x30364f0() {
   return (neuron0x30291f0()*0.141713);
}

double NNfunction_NG_8::synapse0x3036530() {
   return (neuron0x3029530()*-0.172407);
}

double NNfunction_NG_8::synapse0x3036780() {
   return (neuron0x3029870()*0.195019);
}

double NNfunction_NG_8::synapse0x30367c0() {
   return (neuron0x3029bb0()*0.143384);
}

double NNfunction_NG_8::synapse0x3041270() {
   return (neuron0x3029ef0()*-0.197079);
}

double NNfunction_NG_8::synapse0x30412b0() {
   return (neuron0x302a450()*0.0951212);
}

double NNfunction_NG_8::synapse0x3036910() {
   return (neuron0x302a670()*0.0772387);
}

double NNfunction_NG_8::synapse0x3036e20() {
   return (neuron0x302a9b0()*0.0410366);
}

double NNfunction_NG_8::synapse0x3036e60() {
   return (neuron0x302acf0()*0.0224333);
}

double NNfunction_NG_8::synapse0x3036ea0() {
   return (neuron0x302b030()*0.00478335);
}

double NNfunction_NG_8::synapse0x30370f0() {
   return (neuron0x302b370()*0.00328934);
}

double NNfunction_NG_8::synapse0x3037130() {
   return (neuron0x302b6b0()*-0.392503);
}

double NNfunction_NG_8::synapse0x30369e0() {
   return (neuron0x3026af0()*0.0265627);
}

double NNfunction_NG_8::synapse0x3036a20() {
   return (neuron0x3026e30()*-0.00909723);
}

double NNfunction_NG_8::synapse0x3036a60() {
   return (neuron0x3027170()*-0.116505);
}

double NNfunction_NG_8::synapse0x3036aa0() {
   return (neuron0x30274b0()*1.50506);
}

double NNfunction_NG_8::synapse0x3037420() {
   return (neuron0x30277f0()*-0.0483976);
}

double NNfunction_NG_8::synapse0x3043770() {
   return (neuron0x3027b30()*-0.015411);
}

double NNfunction_NG_8::synapse0x30437b0() {
   return (neuron0x3027e70()*0.00512489);
}

double NNfunction_NG_8::synapse0x30437f0() {
   return (neuron0x30281b0()*0.0422339);
}

double NNfunction_NG_8::synapse0x3043830() {
   return (neuron0x30284f0()*-0.00645489);
}

double NNfunction_NG_8::synapse0x3043870() {
   return (neuron0x3028830()*-0.050309);
}

double NNfunction_NG_8::synapse0x30438b0() {
   return (neuron0x3028b70()*-0.00314541);
}

double NNfunction_NG_8::synapse0x30438f0() {
   return (neuron0x3028eb0()*0.327198);
}

double NNfunction_NG_8::synapse0x3043930() {
   return (neuron0x30291f0()*0.440158);
}

double NNfunction_NG_8::synapse0x3043970() {
   return (neuron0x3029530()*-0.006522);
}

double NNfunction_NG_8::synapse0x30439b0() {
   return (neuron0x3029870()*0.195923);
}

double NNfunction_NG_8::synapse0x30439f0() {
   return (neuron0x3029bb0()*0.231323);
}

double NNfunction_NG_8::synapse0x3037300() {
   return (neuron0x3029ef0()*-0.016392);
}

double NNfunction_NG_8::synapse0x3037340() {
   return (neuron0x302a450()*0.245371);
}

double NNfunction_NG_8::synapse0x3043b40() {
   return (neuron0x302a670()*0.234218);
}

double NNfunction_NG_8::synapse0x3043b80() {
   return (neuron0x302a9b0()*-0.0578498);
}

double NNfunction_NG_8::synapse0x3043bc0() {
   return (neuron0x302acf0()*-0.00150987);
}

double NNfunction_NG_8::synapse0x3043c00() {
   return (neuron0x302b030()*-0.00255193);
}

double NNfunction_NG_8::synapse0x3043c40() {
   return (neuron0x302b370()*0.00942432);
}

double NNfunction_NG_8::synapse0x3043c80() {
   return (neuron0x302b6b0()*0.118539);
}

double NNfunction_NG_8::synapse0x3044000() {
   return (neuron0x3026af0()*0.00503399);
}

double NNfunction_NG_8::synapse0x3044040() {
   return (neuron0x3026e30()*-0.00316495);
}

double NNfunction_NG_8::synapse0x3044080() {
   return (neuron0x3027170()*0.138527);
}

double NNfunction_NG_8::synapse0x30440c0() {
   return (neuron0x30274b0()*1.42563);
}

double NNfunction_NG_8::synapse0x3044100() {
   return (neuron0x30277f0()*0.00797814);
}

double NNfunction_NG_8::synapse0x3044140() {
   return (neuron0x3027b30()*-0.00441835);
}

double NNfunction_NG_8::synapse0x3044180() {
   return (neuron0x3027e70()*-0.00238497);
}

double NNfunction_NG_8::synapse0x30441c0() {
   return (neuron0x30281b0()*0.00707326);
}

double NNfunction_NG_8::synapse0x3044200() {
   return (neuron0x30284f0()*-0.00511455);
}

double NNfunction_NG_8::synapse0x3044240() {
   return (neuron0x3028830()*0.00414599);
}

double NNfunction_NG_8::synapse0x3044280() {
   return (neuron0x3028b70()*0.00315165);
}

double NNfunction_NG_8::synapse0x30442c0() {
   return (neuron0x3028eb0()*0.0398829);
}

double NNfunction_NG_8::synapse0x3044300() {
   return (neuron0x30291f0()*0.00944984);
}

double NNfunction_NG_8::synapse0x3044340() {
   return (neuron0x3029530()*0.00139374);
}

double NNfunction_NG_8::synapse0x3044380() {
   return (neuron0x3029870()*0.00366282);
}

double NNfunction_NG_8::synapse0x30443c0() {
   return (neuron0x3029bb0()*-0.0149619);
}

double NNfunction_NG_8::synapse0x3043e50() {
   return (neuron0x3029ef0()*0.00352092);
}

double NNfunction_NG_8::synapse0x3043e90() {
   return (neuron0x302a450()*-0.00292163);
}

double NNfunction_NG_8::synapse0x3044510() {
   return (neuron0x302a670()*-0.00378717);
}

double NNfunction_NG_8::synapse0x3044550() {
   return (neuron0x302a9b0()*0.00528028);
}

double NNfunction_NG_8::synapse0x3044590() {
   return (neuron0x302acf0()*-0.00567458);
}

double NNfunction_NG_8::synapse0x30445d0() {
   return (neuron0x302b030()*0.00282669);
}

double NNfunction_NG_8::synapse0x3044610() {
   return (neuron0x302b370()*-0.00174705);
}

double NNfunction_NG_8::synapse0x3044650() {
   return (neuron0x302b6b0()*-0.338156);
}

double NNfunction_NG_8::synapse0x30449d0() {
   return (neuron0x3026af0()*0.000783407);
}

double NNfunction_NG_8::synapse0x3044a10() {
   return (neuron0x3026e30()*0.00406331);
}

double NNfunction_NG_8::synapse0x3044a50() {
   return (neuron0x3027170()*-0.496129);
}

double NNfunction_NG_8::synapse0x3044a90() {
   return (neuron0x30274b0()*1.26586);
}

double NNfunction_NG_8::synapse0x3044ad0() {
   return (neuron0x30277f0()*-0.0173753);
}

double NNfunction_NG_8::synapse0x3044b10() {
   return (neuron0x3027b30()*-0.00469664);
}

double NNfunction_NG_8::synapse0x3044b50() {
   return (neuron0x3027e70()*-0.00341604);
}

double NNfunction_NG_8::synapse0x3044b90() {
   return (neuron0x30281b0()*-0.00943496);
}

double NNfunction_NG_8::synapse0x3044bd0() {
   return (neuron0x30284f0()*0.00661126);
}

double NNfunction_NG_8::synapse0x3044c10() {
   return (neuron0x3028830()*-0.0190371);
}

double NNfunction_NG_8::synapse0x3044c50() {
   return (neuron0x3028b70()*-0.0101134);
}

double NNfunction_NG_8::synapse0x3044c90() {
   return (neuron0x3028eb0()*-0.125599);
}

double NNfunction_NG_8::synapse0x3044cd0() {
   return (neuron0x30291f0()*0.00224478);
}

double NNfunction_NG_8::synapse0x3044d10() {
   return (neuron0x3029530()*0.0170179);
}

double NNfunction_NG_8::synapse0x3044d50() {
   return (neuron0x3029870()*-0.0124642);
}

double NNfunction_NG_8::synapse0x3044d90() {
   return (neuron0x3029bb0()*-0.00459941);
}

double NNfunction_NG_8::synapse0x3044820() {
   return (neuron0x3029ef0()*0.00970817);
}

double NNfunction_NG_8::synapse0x3044860() {
   return (neuron0x302a450()*-0.0117207);
}

double NNfunction_NG_8::synapse0x3044ee0() {
   return (neuron0x302a670()*0.00102641);
}

double NNfunction_NG_8::synapse0x3044f20() {
   return (neuron0x302a9b0()*-0.0123431);
}

double NNfunction_NG_8::synapse0x3044f60() {
   return (neuron0x302acf0()*0.00144633);
}

double NNfunction_NG_8::synapse0x3044fa0() {
   return (neuron0x302b030()*-0.00257768);
}

double NNfunction_NG_8::synapse0x3044fe0() {
   return (neuron0x302b370()*0.00286658);
}

double NNfunction_NG_8::synapse0x3045020() {
   return (neuron0x302b6b0()*0.671893);
}

double NNfunction_NG_8::synapse0x30453a0() {
   return (neuron0x3026af0()*-0.0403214);
}

double NNfunction_NG_8::synapse0x30453e0() {
   return (neuron0x3026e30()*0.0641899);
}

double NNfunction_NG_8::synapse0x3045420() {
   return (neuron0x3027170()*-0.274015);
}

double NNfunction_NG_8::synapse0x3045460() {
   return (neuron0x30274b0()*-0.731636);
}

double NNfunction_NG_8::synapse0x30454a0() {
   return (neuron0x30277f0()*0.133596);
}

double NNfunction_NG_8::synapse0x30454e0() {
   return (neuron0x3027b30()*-0.0790661);
}

double NNfunction_NG_8::synapse0x3045520() {
   return (neuron0x3027e70()*0.0777074);
}

double NNfunction_NG_8::synapse0x3045560() {
   return (neuron0x30281b0()*0.0593471);
}

double NNfunction_NG_8::synapse0x30455a0() {
   return (neuron0x30284f0()*0.0376347);
}

double NNfunction_NG_8::synapse0x30455e0() {
   return (neuron0x3028830()*-0.241894);
}

double NNfunction_NG_8::synapse0x3045620() {
   return (neuron0x3028b70()*-0.151353);
}

double NNfunction_NG_8::synapse0x3045660() {
   return (neuron0x3028eb0()*-0.300489);
}

double NNfunction_NG_8::synapse0x30456a0() {
   return (neuron0x30291f0()*0.22386);
}

double NNfunction_NG_8::synapse0x30456e0() {
   return (neuron0x3029530()*0.0706874);
}

double NNfunction_NG_8::synapse0x3045720() {
   return (neuron0x3029870()*-0.0633246);
}

double NNfunction_NG_8::synapse0x3045760() {
   return (neuron0x3029bb0()*0.359049);
}

double NNfunction_NG_8::synapse0x30451f0() {
   return (neuron0x3029ef0()*-0.00526482);
}

double NNfunction_NG_8::synapse0x3045230() {
   return (neuron0x302a450()*0.0490828);
}

double NNfunction_NG_8::synapse0x30458b0() {
   return (neuron0x302a670()*0.219455);
}

double NNfunction_NG_8::synapse0x30458f0() {
   return (neuron0x302a9b0()*-0.0452682);
}

double NNfunction_NG_8::synapse0x3045930() {
   return (neuron0x302acf0()*-0.0652532);
}

double NNfunction_NG_8::synapse0x3045970() {
   return (neuron0x302b030()*-0.0107959);
}

double NNfunction_NG_8::synapse0x30459b0() {
   return (neuron0x302b370()*-0.0328039);
}

double NNfunction_NG_8::synapse0x30459f0() {
   return (neuron0x302b6b0()*-0.234883);
}

double NNfunction_NG_8::synapse0x3045d70() {
   return (neuron0x3026af0()*0.0254018);
}

double NNfunction_NG_8::synapse0x3045db0() {
   return (neuron0x3026e30()*-0.0199642);
}

double NNfunction_NG_8::synapse0x3045df0() {
   return (neuron0x3027170()*-0.275433);
}

double NNfunction_NG_8::synapse0x3045e30() {
   return (neuron0x30274b0()*-0.0706699);
}

double NNfunction_NG_8::synapse0x3045e70() {
   return (neuron0x30277f0()*0.0447573);
}

double NNfunction_NG_8::synapse0x3045eb0() {
   return (neuron0x3027b30()*0.0620899);
}

double NNfunction_NG_8::synapse0x3045ef0() {
   return (neuron0x3027e70()*0.0111964);
}

double NNfunction_NG_8::synapse0x3045f30() {
   return (neuron0x30281b0()*0.0273789);
}

double NNfunction_NG_8::synapse0x3045f70() {
   return (neuron0x30284f0()*-0.00135189);
}

double NNfunction_NG_8::synapse0x3045fb0() {
   return (neuron0x3028830()*-0.00726647);
}

double NNfunction_NG_8::synapse0x3045ff0() {
   return (neuron0x3028b70()*-0.027517);
}

double NNfunction_NG_8::synapse0x3046030() {
   return (neuron0x3028eb0()*-3.41051);
}

double NNfunction_NG_8::synapse0x3046070() {
   return (neuron0x30291f0()*0.510127);
}

double NNfunction_NG_8::synapse0x30460b0() {
   return (neuron0x3029530()*-0.0483151);
}

double NNfunction_NG_8::synapse0x30460f0() {
   return (neuron0x3029870()*0.0414548);
}

double NNfunction_NG_8::synapse0x3046130() {
   return (neuron0x3029bb0()*0.0384065);
}

double NNfunction_NG_8::synapse0x3045bc0() {
   return (neuron0x3029ef0()*-0.0181028);
}

double NNfunction_NG_8::synapse0x3045c00() {
   return (neuron0x302a450()*0.0307131);
}

double NNfunction_NG_8::synapse0x3046280() {
   return (neuron0x302a670()*-0.00834081);
}

double NNfunction_NG_8::synapse0x30462c0() {
   return (neuron0x302a9b0()*-0.0259825);
}

double NNfunction_NG_8::synapse0x3046300() {
   return (neuron0x302acf0()*0.0259021);
}

double NNfunction_NG_8::synapse0x3046340() {
   return (neuron0x302b030()*-0.0189276);
}

double NNfunction_NG_8::synapse0x3046380() {
   return (neuron0x302b370()*0.00487586);
}

double NNfunction_NG_8::synapse0x30463c0() {
   return (neuron0x302b6b0()*-0.0676029);
}

double NNfunction_NG_8::synapse0x3046740() {
   return (neuron0x3026af0()*0.00720532);
}

double NNfunction_NG_8::synapse0x3046780() {
   return (neuron0x3026e30()*0.00841626);
}

double NNfunction_NG_8::synapse0x30467c0() {
   return (neuron0x3027170()*-0.440022);
}

double NNfunction_NG_8::synapse0x3046800() {
   return (neuron0x30274b0()*-0.0773938);
}

double NNfunction_NG_8::synapse0x3046840() {
   return (neuron0x30277f0()*0.00617172);
}

double NNfunction_NG_8::synapse0x3046880() {
   return (neuron0x3027b30()*-0.0146818);
}

double NNfunction_NG_8::synapse0x30468c0() {
   return (neuron0x3027e70()*-0.00689548);
}

double NNfunction_NG_8::synapse0x3046900() {
   return (neuron0x30281b0()*-0.00782443);
}

double NNfunction_NG_8::synapse0x3046940() {
   return (neuron0x30284f0()*0.0291144);
}

double NNfunction_NG_8::synapse0x3046980() {
   return (neuron0x3028830()*-0.00941243);
}

double NNfunction_NG_8::synapse0x30469c0() {
   return (neuron0x3028b70()*-0.0258362);
}

double NNfunction_NG_8::synapse0x3046a00() {
   return (neuron0x3028eb0()*-0.491413);
}

double NNfunction_NG_8::synapse0x3046a40() {
   return (neuron0x30291f0()*-0.0406914);
}

double NNfunction_NG_8::synapse0x3046a80() {
   return (neuron0x3029530()*0.0136896);
}

double NNfunction_NG_8::synapse0x3046ac0() {
   return (neuron0x3029870()*-0.00564003);
}

double NNfunction_NG_8::synapse0x3046b00() {
   return (neuron0x3029bb0()*-0.0264525);
}

double NNfunction_NG_8::synapse0x3046590() {
   return (neuron0x3029ef0()*0.0537886);
}

double NNfunction_NG_8::synapse0x30465d0() {
   return (neuron0x302a450()*-0.0149877);
}

double NNfunction_NG_8::synapse0x3046c50() {
   return (neuron0x302a670()*-0.00063656);
}

double NNfunction_NG_8::synapse0x3046c90() {
   return (neuron0x302a9b0()*-0.00167987);
}

double NNfunction_NG_8::synapse0x3046cd0() {
   return (neuron0x302acf0()*0.00459715);
}

double NNfunction_NG_8::synapse0x3046d10() {
   return (neuron0x302b030()*0.0100494);
}

double NNfunction_NG_8::synapse0x3046d50() {
   return (neuron0x302b370()*-0.0108362);
}

double NNfunction_NG_8::synapse0x3046d90() {
   return (neuron0x302b6b0()*-1.17353);
}

double NNfunction_NG_8::synapse0x3047110() {
   return (neuron0x3026af0()*-0.0340007);
}

double NNfunction_NG_8::synapse0x3047150() {
   return (neuron0x3026e30()*0.00858554);
}

double NNfunction_NG_8::synapse0x3047190() {
   return (neuron0x3027170()*-0.28675);
}

double NNfunction_NG_8::synapse0x30471d0() {
   return (neuron0x30274b0()*0.63591);
}

double NNfunction_NG_8::synapse0x3047210() {
   return (neuron0x30277f0()*0.0110453);
}

double NNfunction_NG_8::synapse0x3047250() {
   return (neuron0x3027b30()*0.0804024);
}

double NNfunction_NG_8::synapse0x3047290() {
   return (neuron0x3027e70()*-0.0341164);
}

double NNfunction_NG_8::synapse0x30472d0() {
   return (neuron0x30281b0()*-0.0504299);
}

double NNfunction_NG_8::synapse0x3047310() {
   return (neuron0x30284f0()*-0.0389063);
}

double NNfunction_NG_8::synapse0x3047350() {
   return (neuron0x3028830()*-0.0450538);
}

double NNfunction_NG_8::synapse0x3047390() {
   return (neuron0x3028b70()*0.0473269);
}

double NNfunction_NG_8::synapse0x30473d0() {
   return (neuron0x3028eb0()*-0.226619);
}

double NNfunction_NG_8::synapse0x3047410() {
   return (neuron0x30291f0()*-0.711175);
}

double NNfunction_NG_8::synapse0x3047450() {
   return (neuron0x3029530()*-0.0915684);
}

double NNfunction_NG_8::synapse0x3047490() {
   return (neuron0x3029870()*-0.165859);
}

double NNfunction_NG_8::synapse0x30474d0() {
   return (neuron0x3029bb0()*-0.121718);
}

double NNfunction_NG_8::synapse0x3046f60() {
   return (neuron0x3029ef0()*0.0430905);
}

double NNfunction_NG_8::synapse0x3046fa0() {
   return (neuron0x302a450()*-0.243693);
}

double NNfunction_NG_8::synapse0x3047620() {
   return (neuron0x302a670()*-0.0529791);
}

double NNfunction_NG_8::synapse0x3047660() {
   return (neuron0x302a9b0()*0.0646094);
}

double NNfunction_NG_8::synapse0x30476a0() {
   return (neuron0x302acf0()*0.00407843);
}

double NNfunction_NG_8::synapse0x30476e0() {
   return (neuron0x302b030()*0.032883);
}

double NNfunction_NG_8::synapse0x3047720() {
   return (neuron0x302b370()*0.00212382);
}

double NNfunction_NG_8::synapse0x3047760() {
   return (neuron0x302b6b0()*1.19564);
}

double NNfunction_NG_8::synapse0x3047ae0() {
   return (neuron0x3026af0()*0.0728363);
}

double NNfunction_NG_8::synapse0x3047b20() {
   return (neuron0x3026e30()*-0.0422289);
}

double NNfunction_NG_8::synapse0x3047b60() {
   return (neuron0x3027170()*0.214924);
}

double NNfunction_NG_8::synapse0x3047ba0() {
   return (neuron0x30274b0()*0.353143);
}

double NNfunction_NG_8::synapse0x3047be0() {
   return (neuron0x30277f0()*0.00685639);
}

double NNfunction_NG_8::synapse0x3047c20() {
   return (neuron0x3027b30()*-0.023787);
}

double NNfunction_NG_8::synapse0x3047c60() {
   return (neuron0x3027e70()*-0.119954);
}

double NNfunction_NG_8::synapse0x3047ca0() {
   return (neuron0x30281b0()*-0.115408);
}

double NNfunction_NG_8::synapse0x3047ce0() {
   return (neuron0x30284f0()*0.353685);
}

double NNfunction_NG_8::synapse0x3047d20() {
   return (neuron0x3028830()*-0.124331);
}

double NNfunction_NG_8::synapse0x3047d60() {
   return (neuron0x3028b70()*0.10607);
}

double NNfunction_NG_8::synapse0x3047da0() {
   return (neuron0x3028eb0()*-0.0177741);
}

double NNfunction_NG_8::synapse0x3047de0() {
   return (neuron0x30291f0()*0.294874);
}

double NNfunction_NG_8::synapse0x3047e20() {
   return (neuron0x3029530()*0.196926);
}

double NNfunction_NG_8::synapse0x3047e60() {
   return (neuron0x3029870()*-0.361427);
}

double NNfunction_NG_8::synapse0x3047ea0() {
   return (neuron0x3029bb0()*-0.375852);
}

double NNfunction_NG_8::synapse0x3047930() {
   return (neuron0x3029ef0()*-0.00387774);
}

double NNfunction_NG_8::synapse0x3047970() {
   return (neuron0x302a450()*-0.236148);
}

double NNfunction_NG_8::synapse0x3047ff0() {
   return (neuron0x302a670()*-0.282867);
}

double NNfunction_NG_8::synapse0x3048030() {
   return (neuron0x302a9b0()*-0.0807782);
}

double NNfunction_NG_8::synapse0x3048070() {
   return (neuron0x302acf0()*-0.103657);
}

double NNfunction_NG_8::synapse0x30480b0() {
   return (neuron0x302b030()*0.117877);
}

double NNfunction_NG_8::synapse0x30480f0() {
   return (neuron0x302b370()*-0.0735624);
}

double NNfunction_NG_8::synapse0x3048130() {
   return (neuron0x302b6b0()*-0.162095);
}

double NNfunction_NG_8::synapse0x3030be0() {
   return (neuron0x3026af0()*-0.0560743);
}

double NNfunction_NG_8::synapse0x3030c20() {
   return (neuron0x3026e30()*-0.0509351);
}

double NNfunction_NG_8::synapse0x3030c60() {
   return (neuron0x3027170()*0.252916);
}

double NNfunction_NG_8::synapse0x3030ca0() {
   return (neuron0x30274b0()*-0.208082);
}

double NNfunction_NG_8::synapse0x3030ce0() {
   return (neuron0x30277f0()*-0.0628221);
}

double NNfunction_NG_8::synapse0x3030d20() {
   return (neuron0x3027b30()*-0.0259348);
}

double NNfunction_NG_8::synapse0x3030d60() {
   return (neuron0x3027e70()*-0.0176389);
}

double NNfunction_NG_8::synapse0x3030da0() {
   return (neuron0x30281b0()*0.0461885);
}

double NNfunction_NG_8::synapse0x30488c0() {
   return (neuron0x30284f0()*0.0254367);
}

double NNfunction_NG_8::synapse0x3048900() {
   return (neuron0x3028830()*-0.00152588);
}

double NNfunction_NG_8::synapse0x3048940() {
   return (neuron0x3028b70()*-0.0495346);
}

double NNfunction_NG_8::synapse0x3048980() {
   return (neuron0x3028eb0()*0.862115);
}

double NNfunction_NG_8::synapse0x30489c0() {
   return (neuron0x30291f0()*-0.243641);
}

double NNfunction_NG_8::synapse0x3048a00() {
   return (neuron0x3029530()*0.0144948);
}

double NNfunction_NG_8::synapse0x3048a40() {
   return (neuron0x3029870()*-0.0968638);
}

double NNfunction_NG_8::synapse0x3048a80() {
   return (neuron0x3029bb0()*0.47068);
}

double NNfunction_NG_8::synapse0x3048300() {
   return (neuron0x3029ef0()*0.0233048);
}

double NNfunction_NG_8::synapse0x3048340() {
   return (neuron0x302a450()*-0.0175524);
}

double NNfunction_NG_8::synapse0x3048bd0() {
   return (neuron0x302a670()*-0.0651425);
}

double NNfunction_NG_8::synapse0x3048c10() {
   return (neuron0x302a9b0()*0.0961127);
}

double NNfunction_NG_8::synapse0x3048c50() {
   return (neuron0x302acf0()*-0.0393734);
}

double NNfunction_NG_8::synapse0x3048c90() {
   return (neuron0x302b030()*0.0234825);
}

double NNfunction_NG_8::synapse0x3048cd0() {
   return (neuron0x302b370()*-0.0703618);
}

double NNfunction_NG_8::synapse0x3048d10() {
   return (neuron0x302b6b0()*0.207128);
}

double NNfunction_NG_8::synapse0x3049090() {
   return (neuron0x3026af0()*0.029273);
}

double NNfunction_NG_8::synapse0x30490d0() {
   return (neuron0x3026e30()*-0.0276384);
}

double NNfunction_NG_8::synapse0x3049110() {
   return (neuron0x3027170()*-0.318488);
}

double NNfunction_NG_8::synapse0x3049150() {
   return (neuron0x30274b0()*0.295701);
}

double NNfunction_NG_8::synapse0x3049190() {
   return (neuron0x30277f0()*0.0427409);
}

double NNfunction_NG_8::synapse0x30491d0() {
   return (neuron0x3027b30()*0.00224367);
}

double NNfunction_NG_8::synapse0x3049210() {
   return (neuron0x3027e70()*-0.00711077);
}

double NNfunction_NG_8::synapse0x3049250() {
   return (neuron0x30281b0()*0.0201516);
}

double NNfunction_NG_8::synapse0x3049290() {
   return (neuron0x30284f0()*-0.0294662);
}

double NNfunction_NG_8::synapse0x30492d0() {
   return (neuron0x3028830()*0.0123606);
}

double NNfunction_NG_8::synapse0x3049310() {
   return (neuron0x3028b70()*-0.0111666);
}

double NNfunction_NG_8::synapse0x3049350() {
   return (neuron0x3028eb0()*0.482397);
}

double NNfunction_NG_8::synapse0x3049390() {
   return (neuron0x30291f0()*-1.96381);
}

double NNfunction_NG_8::synapse0x30493d0() {
   return (neuron0x3029530()*-0.0172024);
}

double NNfunction_NG_8::synapse0x3049410() {
   return (neuron0x3029870()*-0.00758535);
}

double NNfunction_NG_8::synapse0x3049450() {
   return (neuron0x3029bb0()*0.00349669);
}

double NNfunction_NG_8::synapse0x3048ee0() {
   return (neuron0x3029ef0()*-0.00224472);
}

double NNfunction_NG_8::synapse0x3048f20() {
   return (neuron0x302a450()*0.00312192);
}

double NNfunction_NG_8::synapse0x30495a0() {
   return (neuron0x302a670()*-0.00518773);
}

double NNfunction_NG_8::synapse0x30495e0() {
   return (neuron0x302a9b0()*0.00536103);
}

double NNfunction_NG_8::synapse0x3049620() {
   return (neuron0x302acf0()*0.00348576);
}

double NNfunction_NG_8::synapse0x3049660() {
   return (neuron0x302b030()*-0.00367108);
}

double NNfunction_NG_8::synapse0x30496a0() {
   return (neuron0x302b370()*-0.0175671);
}

double NNfunction_NG_8::synapse0x30496e0() {
   return (neuron0x302b6b0()*-0.058806);
}

double NNfunction_NG_8::synapse0x3049a60() {
   return (neuron0x3026af0()*-0.083362);
}

double NNfunction_NG_8::synapse0x3049aa0() {
   return (neuron0x3026e30()*-0.01166);
}

double NNfunction_NG_8::synapse0x3049ae0() {
   return (neuron0x3027170()*-0.128315);
}

double NNfunction_NG_8::synapse0x3049b20() {
   return (neuron0x30274b0()*0.177876);
}

double NNfunction_NG_8::synapse0x3049b60() {
   return (neuron0x30277f0()*-0.0795017);
}

double NNfunction_NG_8::synapse0x3049ba0() {
   return (neuron0x3027b30()*-0.265825);
}

double NNfunction_NG_8::synapse0x3049be0() {
   return (neuron0x3027e70()*0.0531107);
}

double NNfunction_NG_8::synapse0x3049c20() {
   return (neuron0x30281b0()*0.00264703);
}

double NNfunction_NG_8::synapse0x3049c60() {
   return (neuron0x30284f0()*-0.185498);
}

double NNfunction_NG_8::synapse0x3049ca0() {
   return (neuron0x3028830()*0.00486714);
}

double NNfunction_NG_8::synapse0x3049ce0() {
   return (neuron0x3028b70()*0.0576256);
}

double NNfunction_NG_8::synapse0x3049d20() {
   return (neuron0x3028eb0()*-0.0627667);
}

double NNfunction_NG_8::synapse0x3049d60() {
   return (neuron0x30291f0()*-0.0748993);
}

double NNfunction_NG_8::synapse0x3049da0() {
   return (neuron0x3029530()*-0.554964);
}

double NNfunction_NG_8::synapse0x3049de0() {
   return (neuron0x3029870()*0.120942);
}

double NNfunction_NG_8::synapse0x3049e20() {
   return (neuron0x3029bb0()*0.0573663);
}

double NNfunction_NG_8::synapse0x30498b0() {
   return (neuron0x3029ef0()*-0.558861);
}

double NNfunction_NG_8::synapse0x30498f0() {
   return (neuron0x302a450()*0.145675);
}

double NNfunction_NG_8::synapse0x303a420() {
   return (neuron0x302a670()*0.0709538);
}

double NNfunction_NG_8::synapse0x303a460() {
   return (neuron0x302a9b0()*0.0924398);
}

double NNfunction_NG_8::synapse0x303a4a0() {
   return (neuron0x302acf0()*-0.0253061);
}

double NNfunction_NG_8::synapse0x303a4e0() {
   return (neuron0x302b030()*0.075738);
}

double NNfunction_NG_8::synapse0x303a520() {
   return (neuron0x302b370()*0.124383);
}

double NNfunction_NG_8::synapse0x303a560() {
   return (neuron0x302b6b0()*0.177008);
}

double NNfunction_NG_8::synapse0x303a8e0() {
   return (neuron0x3026af0()*-0.00731054);
}

double NNfunction_NG_8::synapse0x303a920() {
   return (neuron0x3026e30()*0.00512827);
}

double NNfunction_NG_8::synapse0x303a960() {
   return (neuron0x3027170()*-0.0970984);
}

double NNfunction_NG_8::synapse0x303a9a0() {
   return (neuron0x30274b0()*11.2905);
}

double NNfunction_NG_8::synapse0x303a9e0() {
   return (neuron0x30277f0()*-0.00199805);
}

double NNfunction_NG_8::synapse0x303aa20() {
   return (neuron0x3027b30()*-0.00532639);
}

double NNfunction_NG_8::synapse0x303aa60() {
   return (neuron0x3027e70()*0.00151304);
}

double NNfunction_NG_8::synapse0x303aaa0() {
   return (neuron0x30281b0()*-0.00415281);
}

double NNfunction_NG_8::synapse0x303aae0() {
   return (neuron0x30284f0()*0.000513742);
}

double NNfunction_NG_8::synapse0x303ab20() {
   return (neuron0x3028830()*-0.00514956);
}

double NNfunction_NG_8::synapse0x303ab60() {
   return (neuron0x3028b70()*0.0129074);
}

double NNfunction_NG_8::synapse0x303aba0() {
   return (neuron0x3028eb0()*0.0450738);
}

double NNfunction_NG_8::synapse0x303abe0() {
   return (neuron0x30291f0()*-0.033186);
}

double NNfunction_NG_8::synapse0x303ac20() {
   return (neuron0x3029530()*-0.00528801);
}

double NNfunction_NG_8::synapse0x303ac60() {
   return (neuron0x3029870()*0.00270009);
}

double NNfunction_NG_8::synapse0x303aca0() {
   return (neuron0x3029bb0()*0.0022283);
}

double NNfunction_NG_8::synapse0x303a730() {
   return (neuron0x3029ef0()*-0.00626778);
}

double NNfunction_NG_8::synapse0x303a770() {
   return (neuron0x302a450()*-0.00149664);
}

double NNfunction_NG_8::synapse0x303adf0() {
   return (neuron0x302a670()*0.000755126);
}

double NNfunction_NG_8::synapse0x303ae30() {
   return (neuron0x302a9b0()*0.00060958);
}

double NNfunction_NG_8::synapse0x303ae70() {
   return (neuron0x302acf0()*-0.0128951);
}

double NNfunction_NG_8::synapse0x303aeb0() {
   return (neuron0x302b030()*0.00350821);
}

double NNfunction_NG_8::synapse0x303aef0() {
   return (neuron0x302b370()*0.00268258);
}

double NNfunction_NG_8::synapse0x303af30() {
   return (neuron0x302b6b0()*0.050073);
}

double NNfunction_NG_8::synapse0x303b2b0() {
   return (neuron0x3026af0()*-0.0234321);
}

double NNfunction_NG_8::synapse0x303b2f0() {
   return (neuron0x3026e30()*0.00112306);
}

double NNfunction_NG_8::synapse0x303b330() {
   return (neuron0x3027170()*-5.50914);
}

double NNfunction_NG_8::synapse0x303b370() {
   return (neuron0x30274b0()*-0.0309057);
}

double NNfunction_NG_8::synapse0x303b3b0() {
   return (neuron0x30277f0()*0.00530639);
}

double NNfunction_NG_8::synapse0x303b3f0() {
   return (neuron0x3027b30()*0.00349728);
}

double NNfunction_NG_8::synapse0x303b430() {
   return (neuron0x3027e70()*-0.00940604);
}

double NNfunction_NG_8::synapse0x303b470() {
   return (neuron0x30281b0()*-0.00197888);
}

double NNfunction_NG_8::synapse0x303b4b0() {
   return (neuron0x30284f0()*-9.79457e-05);
}

double NNfunction_NG_8::synapse0x303b4f0() {
   return (neuron0x3028830()*0.00506411);
}

double NNfunction_NG_8::synapse0x303b530() {
   return (neuron0x3028b70()*-0.00143009);
}

double NNfunction_NG_8::synapse0x303b570() {
   return (neuron0x3028eb0()*-0.107719);
}

double NNfunction_NG_8::synapse0x303b5b0() {
   return (neuron0x30291f0()*-0.0433946);
}

double NNfunction_NG_8::synapse0x303b5f0() {
   return (neuron0x3029530()*0.00101506);
}

double NNfunction_NG_8::synapse0x303b630() {
   return (neuron0x3029870()*0.00521256);
}

double NNfunction_NG_8::synapse0x303b670() {
   return (neuron0x3029bb0()*-0.00909052);
}

double NNfunction_NG_8::synapse0x303b100() {
   return (neuron0x3029ef0()*0.00809311);
}

double NNfunction_NG_8::synapse0x303b140() {
   return (neuron0x302a450()*-0.00682057);
}

double NNfunction_NG_8::synapse0x303b7c0() {
   return (neuron0x302a670()*-0.00941623);
}

double NNfunction_NG_8::synapse0x303b800() {
   return (neuron0x302a9b0()*0.00198136);
}

double NNfunction_NG_8::synapse0x303b840() {
   return (neuron0x302acf0()*0.00197737);
}

double NNfunction_NG_8::synapse0x303b880() {
   return (neuron0x302b030()*0.000330552);
}

double NNfunction_NG_8::synapse0x303b8c0() {
   return (neuron0x302b370()*-0.00756723);
}

double NNfunction_NG_8::synapse0x303b900() {
   return (neuron0x302b6b0()*-4.05895);
}

double NNfunction_NG_8::synapse0x303bc80() {
   return (neuron0x3026af0()*0.0280817);
}

double NNfunction_NG_8::synapse0x303bcc0() {
   return (neuron0x3026e30()*-0.0131738);
}

double NNfunction_NG_8::synapse0x303bd00() {
   return (neuron0x3027170()*-0.0157585);
}

double NNfunction_NG_8::synapse0x303bd40() {
   return (neuron0x30274b0()*0.28604);
}

double NNfunction_NG_8::synapse0x303bd80() {
   return (neuron0x30277f0()*0.0075085);
}

double NNfunction_NG_8::synapse0x303bdc0() {
   return (neuron0x3027b30()*-0.00472459);
}

double NNfunction_NG_8::synapse0x303be00() {
   return (neuron0x3027e70()*0.000265896);
}

double NNfunction_NG_8::synapse0x303be40() {
   return (neuron0x30281b0()*-0.0117098);
}

double NNfunction_NG_8::synapse0x303be80() {
   return (neuron0x30284f0()*-0.0154954);
}

double NNfunction_NG_8::synapse0x303bec0() {
   return (neuron0x3028830()*0.00587693);
}

double NNfunction_NG_8::synapse0x303bf00() {
   return (neuron0x3028b70()*0.0079802);
}

double NNfunction_NG_8::synapse0x303bf40() {
   return (neuron0x3028eb0()*-1.39532);
}

double NNfunction_NG_8::synapse0x303bf80() {
   return (neuron0x30291f0()*0.352135);
}

double NNfunction_NG_8::synapse0x303bfc0() {
   return (neuron0x3029530()*-0.0280776);
}

double NNfunction_NG_8::synapse0x303c000() {
   return (neuron0x3029870()*0.016999);
}

double NNfunction_NG_8::synapse0x303c040() {
   return (neuron0x3029bb0()*0.0174823);
}

double NNfunction_NG_8::synapse0x303bad0() {
   return (neuron0x3029ef0()*0.00671489);
}

double NNfunction_NG_8::synapse0x303bb10() {
   return (neuron0x302a450()*0.0412753);
}

double NNfunction_NG_8::synapse0x303c190() {
   return (neuron0x302a670()*0.0555318);
}

double NNfunction_NG_8::synapse0x303c1d0() {
   return (neuron0x302a9b0()*0.0111336);
}

double NNfunction_NG_8::synapse0x303c210() {
   return (neuron0x302acf0()*0.00692369);
}

double NNfunction_NG_8::synapse0x303c250() {
   return (neuron0x302b030()*-0.00400154);
}

double NNfunction_NG_8::synapse0x303c290() {
   return (neuron0x302b370()*-0.00893445);
}

double NNfunction_NG_8::synapse0x303c2d0() {
   return (neuron0x302b6b0()*-0.0959967);
}

double NNfunction_NG_8::synapse0x304e1a0() {
   return (neuron0x3026af0()*0.0215778);
}

double NNfunction_NG_8::synapse0x304e1e0() {
   return (neuron0x3026e30()*0.388565);
}

double NNfunction_NG_8::synapse0x304e220() {
   return (neuron0x3027170()*-0.0381795);
}

double NNfunction_NG_8::synapse0x304e260() {
   return (neuron0x30274b0()*-0.361572);
}

double NNfunction_NG_8::synapse0x304e2a0() {
   return (neuron0x30277f0()*0.0136136);
}

double NNfunction_NG_8::synapse0x304e2e0() {
   return (neuron0x3027b30()*0.0100451);
}

double NNfunction_NG_8::synapse0x304e320() {
   return (neuron0x3027e70()*-0.14478);
}

double NNfunction_NG_8::synapse0x304e360() {
   return (neuron0x30281b0()*0.304997);
}

double NNfunction_NG_8::synapse0x304e3a0() {
   return (neuron0x30284f0()*0.0450952);
}

double NNfunction_NG_8::synapse0x304e3e0() {
   return (neuron0x3028830()*0.237395);
}

double NNfunction_NG_8::synapse0x304e420() {
   return (neuron0x3028b70()*0.222258);
}

double NNfunction_NG_8::synapse0x304e460() {
   return (neuron0x3028eb0()*-0.205438);
}

double NNfunction_NG_8::synapse0x304e4a0() {
   return (neuron0x30291f0()*-0.344773);
}

double NNfunction_NG_8::synapse0x304e4e0() {
   return (neuron0x3029530()*0.202157);
}

double NNfunction_NG_8::synapse0x304e520() {
   return (neuron0x3029870()*-0.0502481);
}

double NNfunction_NG_8::synapse0x304e560() {
   return (neuron0x3029bb0()*0.273781);
}

double NNfunction_NG_8::synapse0x303c310() {
   return (neuron0x3029ef0()*-0.155665);
}

double NNfunction_NG_8::synapse0x303c350() {
   return (neuron0x302a450()*0.0310545);
}

double NNfunction_NG_8::synapse0x304e6b0() {
   return (neuron0x302a670()*0.301513);
}

double NNfunction_NG_8::synapse0x304e6f0() {
   return (neuron0x302a9b0()*-0.0777655);
}

double NNfunction_NG_8::synapse0x304e730() {
   return (neuron0x302acf0()*0.259686);
}

double NNfunction_NG_8::synapse0x304e770() {
   return (neuron0x302b030()*-0.426637);
}

double NNfunction_NG_8::synapse0x304e7b0() {
   return (neuron0x302b370()*0.273912);
}

double NNfunction_NG_8::synapse0x304e7f0() {
   return (neuron0x302b6b0()*0.0358476);
}

double NNfunction_NG_8::synapse0x304eb70() {
   return (neuron0x3026af0()*0.0806224);
}

double NNfunction_NG_8::synapse0x304ebb0() {
   return (neuron0x3026e30()*0.174695);
}

double NNfunction_NG_8::synapse0x304ebf0() {
   return (neuron0x3027170()*0.0106453);
}

double NNfunction_NG_8::synapse0x304ec30() {
   return (neuron0x30274b0()*0.11595);
}

double NNfunction_NG_8::synapse0x304ec70() {
   return (neuron0x30277f0()*-0.0121929);
}

double NNfunction_NG_8::synapse0x304ecb0() {
   return (neuron0x3027b30()*-0.11059);
}

double NNfunction_NG_8::synapse0x304ecf0() {
   return (neuron0x3027e70()*-0.0898399);
}

double NNfunction_NG_8::synapse0x304ed30() {
   return (neuron0x30281b0()*-0.17528);
}

double NNfunction_NG_8::synapse0x304ed70() {
   return (neuron0x30284f0()*0.0329755);
}

double NNfunction_NG_8::synapse0x304edb0() {
   return (neuron0x3028830()*-0.0397056);
}

double NNfunction_NG_8::synapse0x304edf0() {
   return (neuron0x3028b70()*-0.00775279);
}

double NNfunction_NG_8::synapse0x304ee30() {
   return (neuron0x3028eb0()*-0.504952);
}

double NNfunction_NG_8::synapse0x304ee70() {
   return (neuron0x30291f0()*0.266384);
}

double NNfunction_NG_8::synapse0x304eeb0() {
   return (neuron0x3029530()*0.00984678);
}

double NNfunction_NG_8::synapse0x304eef0() {
   return (neuron0x3029870()*0.721638);
}

double NNfunction_NG_8::synapse0x304ef30() {
   return (neuron0x3029bb0()*-0.300175);
}

double NNfunction_NG_8::synapse0x304e9c0() {
   return (neuron0x3029ef0()*0.0761684);
}

double NNfunction_NG_8::synapse0x304ea00() {
   return (neuron0x302a450()*0.0806825);
}

double NNfunction_NG_8::synapse0x304f080() {
   return (neuron0x302a670()*0.0227187);
}

double NNfunction_NG_8::synapse0x304f0c0() {
   return (neuron0x302a9b0()*-0.0457959);
}

double NNfunction_NG_8::synapse0x304f100() {
   return (neuron0x302acf0()*0.0225149);
}

double NNfunction_NG_8::synapse0x304f140() {
   return (neuron0x302b030()*0.106948);
}

double NNfunction_NG_8::synapse0x304f180() {
   return (neuron0x302b370()*0.00970727);
}

double NNfunction_NG_8::synapse0x304f1c0() {
   return (neuron0x302b6b0()*-0.0643189);
}

double NNfunction_NG_8::synapse0x304f540() {
   return (neuron0x3026af0()*-0.019053);
}

double NNfunction_NG_8::synapse0x304f580() {
   return (neuron0x3026e30()*-0.0098788);
}

double NNfunction_NG_8::synapse0x304f5c0() {
   return (neuron0x3027170()*-1.02494);
}

double NNfunction_NG_8::synapse0x304f600() {
   return (neuron0x30274b0()*0.0567301);
}

double NNfunction_NG_8::synapse0x304f640() {
   return (neuron0x30277f0()*-0.0212052);
}

double NNfunction_NG_8::synapse0x304f680() {
   return (neuron0x3027b30()*0.0146908);
}

double NNfunction_NG_8::synapse0x304f6c0() {
   return (neuron0x3027e70()*-0.0283269);
}

double NNfunction_NG_8::synapse0x304f700() {
   return (neuron0x30281b0()*-0.0192387);
}

double NNfunction_NG_8::synapse0x304f740() {
   return (neuron0x30284f0()*-0.0101192);
}

double NNfunction_NG_8::synapse0x304f780() {
   return (neuron0x3028830()*-0.0108851);
}

double NNfunction_NG_8::synapse0x304f7c0() {
   return (neuron0x3028b70()*0.00545142);
}

double NNfunction_NG_8::synapse0x304f800() {
   return (neuron0x3028eb0()*0.09966);
}

double NNfunction_NG_8::synapse0x304f840() {
   return (neuron0x30291f0()*0.0554645);
}

double NNfunction_NG_8::synapse0x304f880() {
   return (neuron0x3029530()*-0.0159843);
}

double NNfunction_NG_8::synapse0x304f8c0() {
   return (neuron0x3029870()*0.0225059);
}

double NNfunction_NG_8::synapse0x304f900() {
   return (neuron0x3029bb0()*0.0189277);
}

double NNfunction_NG_8::synapse0x304f390() {
   return (neuron0x3029ef0()*-0.00644268);
}

double NNfunction_NG_8::synapse0x304f3d0() {
   return (neuron0x302a450()*-0.00875566);
}

double NNfunction_NG_8::synapse0x304fa50() {
   return (neuron0x302a670()*0.0180521);
}

double NNfunction_NG_8::synapse0x304fa90() {
   return (neuron0x302a9b0()*-0.0264932);
}

double NNfunction_NG_8::synapse0x304fad0() {
   return (neuron0x302acf0()*-0.00419334);
}

double NNfunction_NG_8::synapse0x304fb10() {
   return (neuron0x302b030()*-0.00940979);
}

double NNfunction_NG_8::synapse0x304fb50() {
   return (neuron0x302b370()*0.00650807);
}

double NNfunction_NG_8::synapse0x304fb90() {
   return (neuron0x302b6b0()*0.837202);
}

double NNfunction_NG_8::synapse0x304ff10() {
   return (neuron0x3026af0()*0.0268338);
}

double NNfunction_NG_8::synapse0x304ff50() {
   return (neuron0x3026e30()*0.00391216);
}

double NNfunction_NG_8::synapse0x304ff90() {
   return (neuron0x3027170()*0.93166);
}

double NNfunction_NG_8::synapse0x304ffd0() {
   return (neuron0x30274b0()*0.0688932);
}

double NNfunction_NG_8::synapse0x3050010() {
   return (neuron0x30277f0()*-0.00302172);
}

double NNfunction_NG_8::synapse0x3050050() {
   return (neuron0x3027b30()*0.0180615);
}

double NNfunction_NG_8::synapse0x3050090() {
   return (neuron0x3027e70()*0.0223474);
}

double NNfunction_NG_8::synapse0x30500d0() {
   return (neuron0x30281b0()*0.0146222);
}

double NNfunction_NG_8::synapse0x3050110() {
   return (neuron0x30284f0()*-0.0109036);
}

double NNfunction_NG_8::synapse0x3050150() {
   return (neuron0x3028830()*-0.00194401);
}

double NNfunction_NG_8::synapse0x3050190() {
   return (neuron0x3028b70()*0.0179557);
}

double NNfunction_NG_8::synapse0x30501d0() {
   return (neuron0x3028eb0()*0.445235);
}

double NNfunction_NG_8::synapse0x3050210() {
   return (neuron0x30291f0()*0.0928523);
}

double NNfunction_NG_8::synapse0x3050250() {
   return (neuron0x3029530()*0.0216589);
}

double NNfunction_NG_8::synapse0x3050290() {
   return (neuron0x3029870()*0.00320601);
}

double NNfunction_NG_8::synapse0x30502d0() {
   return (neuron0x3029bb0()*0.0132467);
}

double NNfunction_NG_8::synapse0x304fd60() {
   return (neuron0x3029ef0()*-0.0328896);
}

double NNfunction_NG_8::synapse0x304fda0() {
   return (neuron0x302a450()*0.0165918);
}

double NNfunction_NG_8::synapse0x3050420() {
   return (neuron0x302a670()*0.0102084);
}

double NNfunction_NG_8::synapse0x3050460() {
   return (neuron0x302a9b0()*0.000602482);
}

double NNfunction_NG_8::synapse0x30504a0() {
   return (neuron0x302acf0()*0.00219551);
}

double NNfunction_NG_8::synapse0x30504e0() {
   return (neuron0x302b030()*-0.00592868);
}

double NNfunction_NG_8::synapse0x3050520() {
   return (neuron0x302b370()*0.00956692);
}

double NNfunction_NG_8::synapse0x3050560() {
   return (neuron0x302b6b0()*1.31201);
}

double NNfunction_NG_8::synapse0x302cb00() {
   return (neuron0x302bb50()*0.578039);
}

double NNfunction_NG_8::synapse0x302cb40() {
   return (neuron0x302c460()*-0.374479);
}

double NNfunction_NG_8::synapse0x302e010() {
   return (neuron0x302cf40()*0.0485599);
}

double NNfunction_NG_8::synapse0x302e050() {
   return (neuron0x2de67d0()*0.274245);
}

double NNfunction_NG_8::synapse0x302e9e0() {
   return (neuron0x302dd60()*0.615116);
}

double NNfunction_NG_8::synapse0x302ea20() {
   return (neuron0x302e730()*1.01788);
}

double NNfunction_NG_8::synapse0x302f7b0() {
   return (neuron0x302f500()*0.0989192);
}

double NNfunction_NG_8::synapse0x302f7f0() {
   return (neuron0x302fed0()*0.298144);
}

double NNfunction_NG_8::synapse0x3030180() {
   return (neuron0x30308a0()*0.522338);
}

double NNfunction_NG_8::synapse0x30301c0() {
   return (neuron0x3031380()*-0.0820057);
}

double NNfunction_NG_8::synapse0x3030b50() {
   return (neuron0x3031d50()*0.206202);
}

double NNfunction_NG_8::synapse0x3030b90() {
   return (neuron0x302ee30()*1.14251);
}

double NNfunction_NG_8::synapse0x3031630() {
   return (neuron0x3033900()*0.354992);
}

double NNfunction_NG_8::synapse0x3031670() {
   return (neuron0x30342d0()*0.950225);
}

double NNfunction_NG_8::synapse0x3032000() {
   return (neuron0x3034ca0()*0.377351);
}

double NNfunction_NG_8::synapse0x3032040() {
   return (neuron0x3035670()*0.116708);
}

double NNfunction_NG_8::synapse0x302f0e0() {
   return (neuron0x3037480()*0.163491);
}

double NNfunction_NG_8::synapse0x302f120() {
   return (neuron0x3037760()*-0.106078);
}

double NNfunction_NG_8::synapse0x3033bb0() {
   return (neuron0x3038130()*0.0596098);
}

double NNfunction_NG_8::synapse0x3033bf0() {
   return (neuron0x3038b00()*0.468887);
}

double NNfunction_NG_8::synapse0x3034580() {
   return (neuron0x30394d0()*0.0299895);
}

double NNfunction_NG_8::synapse0x30345c0() {
   return (neuron0x3039ea0()*0.976762);
}

double NNfunction_NG_8::synapse0x3034f50() {
   return (neuron0x30329f0()*-0.458663);
}

double NNfunction_NG_8::synapse0x3034f90() {
   return (neuron0x30333c0()*-0.192129);
}

double NNfunction_NG_8::synapse0x3035920() {
   return (neuron0x303cc30()*-1.82515);
}

double NNfunction_NG_8::synapse0x3035960() {
   return (neuron0x303d600()*0.00984447);
}

double NNfunction_NG_8::synapse0x3029a90() {
   return (neuron0x303dfd0()*-0.522006);
}

double NNfunction_NG_8::synapse0x3029ad0() {
   return (neuron0x303e9a0()*0.139148);
}

double NNfunction_NG_8::synapse0x3037a10() {
   return (neuron0x303f370()*-0.520501);
}

double NNfunction_NG_8::synapse0x3037a50() {
   return (neuron0x303fd40()*-0.714434);
}

double NNfunction_NG_8::synapse0x30383e0() {
   return (neuron0x3040710()*-1.14178);
}

double NNfunction_NG_8::synapse0x3038420() {
   return (neuron0x30410e0()*0.199596);
}

double NNfunction_NG_8::synapse0x3038db0() {
   return (neuron0x3037170()*0.11435);
}

double NNfunction_NG_8::synapse0x3038df0() {
   return (neuron0x3043cc0()*1.08561);
}

double NNfunction_NG_8::synapse0x3039780() {
   return (neuron0x3044690()*-1.06744);
}

double NNfunction_NG_8::synapse0x30397c0() {
   return (neuron0x3045060()*0.0107533);
}

double NNfunction_NG_8::synapse0x303a150() {
   return (neuron0x3045a30()*0.159985);
}

double NNfunction_NG_8::synapse0x303a190() {
   return (neuron0x3046400()*0.600793);
}

double NNfunction_NG_8::synapse0x3032ca0() {
   return (neuron0x3046dd0()*0.167692);
}

double NNfunction_NG_8::synapse0x3032ce0() {
   return (neuron0x30477a0()*-0.0479767);
}

double NNfunction_NG_8::synapse0x303c550() {
   return (neuron0x3048170()*0.259388);
}

double NNfunction_NG_8::synapse0x303c590() {
   return (neuron0x3048d50()*0.287337);
}

double NNfunction_NG_8::synapse0x303cee0() {
   return (neuron0x3049720()*0.0332222);
}

double NNfunction_NG_8::synapse0x303cf20() {
   return (neuron0x303a5a0()*0.527683);
}

double NNfunction_NG_8::synapse0x303d8b0() {
   return (neuron0x303af70()*-0.644918);
}

double NNfunction_NG_8::synapse0x303d8f0() {
   return (neuron0x303b940()*-0.083295);
}

double NNfunction_NG_8::synapse0x303e280() {
   return (neuron0x304df80()*0.0945045);
}

double NNfunction_NG_8::synapse0x303e2c0() {
   return (neuron0x304e830()*0.124813);
}

double NNfunction_NG_8::synapse0x303ec50() {
   return (neuron0x304f200()*-0.693903);
}

double NNfunction_NG_8::synapse0x303ec90() {
   return (neuron0x304fbd0()*0.445554);
}

double NNfunction_NG_8::synapse0x3041390() {
   return (neuron0x302bb50()*1.32424);
}

double NNfunction_NG_8::synapse0x30413d0() {
   return (neuron0x302c460()*0.33093);
}

double NNfunction_NG_8::synapse0x3036950() {
   return (neuron0x302cf40()*-0.348372);
}

double NNfunction_NG_8::synapse0x3036990() {
   return (neuron0x2de67d0()*0.501728);
}

double NNfunction_NG_8::synapse0x3043f70() {
   return (neuron0x302dd60()*0.712315);
}

double NNfunction_NG_8::synapse0x3043fb0() {
   return (neuron0x302e730()*1.58751);
}

double NNfunction_NG_8::synapse0x3044940() {
   return (neuron0x302f500()*-0.12912);
}

double NNfunction_NG_8::synapse0x3044980() {
   return (neuron0x302fed0()*-0.148597);
}

double NNfunction_NG_8::synapse0x3045310() {
   return (neuron0x30308a0()*0.121406);
}

double NNfunction_NG_8::synapse0x3045350() {
   return (neuron0x3031380()*0.021048);
}

double NNfunction_NG_8::synapse0x3045ce0() {
   return (neuron0x3031d50()*-0.0954804);
}

double NNfunction_NG_8::synapse0x3045d20() {
   return (neuron0x302ee30()*-0.633754);
}

double NNfunction_NG_8::synapse0x30466b0() {
   return (neuron0x3033900()*-0.164671);
}

double NNfunction_NG_8::synapse0x30466f0() {
   return (neuron0x30342d0()*0.0587721);
}

double NNfunction_NG_8::synapse0x3047080() {
   return (neuron0x3034ca0()*-0.446715);
}

double NNfunction_NG_8::synapse0x30470c0() {
   return (neuron0x3035670()*-0.163397);
}

double NNfunction_NG_8::synapse0x3047a50() {
   return (neuron0x3037480()*-0.0213476);
}

double NNfunction_NG_8::synapse0x3047a90() {
   return (neuron0x3037760()*-0.401869);
}

double NNfunction_NG_8::synapse0x3048420() {
   return (neuron0x3038130()*-0.0198765);
}

double NNfunction_NG_8::synapse0x3048460() {
   return (neuron0x3038b00()*0.00738369);
}

double NNfunction_NG_8::synapse0x3049000() {
   return (neuron0x30394d0()*-0.0231886);
}

double NNfunction_NG_8::synapse0x3049040() {
   return (neuron0x3039ea0()*-0.452221);
}

double NNfunction_NG_8::synapse0x30499d0() {
   return (neuron0x30329f0()*0.0553262);
}

double NNfunction_NG_8::synapse0x3049a10() {
   return (neuron0x30333c0()*0.021533);
}

double NNfunction_NG_8::synapse0x303a850() {
   return (neuron0x303cc30()*-0.0575801);
}

double NNfunction_NG_8::synapse0x303a890() {
   return (neuron0x303d600()*-0.0402529);
}

double NNfunction_NG_8::synapse0x303b220() {
   return (neuron0x303dfd0()*-1.08795);
}

double NNfunction_NG_8::synapse0x303b260() {
   return (neuron0x303e9a0()*-0.724455);
}

double NNfunction_NG_8::synapse0x303bbf0() {
   return (neuron0x303f370()*-0.497045);
}

double NNfunction_NG_8::synapse0x303bc30() {
   return (neuron0x303fd40()*-0.293419);
}

double NNfunction_NG_8::synapse0x304e110() {
   return (neuron0x3040710()*-0.111855);
}

double NNfunction_NG_8::synapse0x304e150() {
   return (neuron0x30410e0()*0.202244);
}

double NNfunction_NG_8::synapse0x304eae0() {
   return (neuron0x3037170()*-0.793388);
}

double NNfunction_NG_8::synapse0x304eb20() {
   return (neuron0x3043cc0()*-0.869556);
}

double NNfunction_NG_8::synapse0x304f4b0() {
   return (neuron0x3044690()*-0.959891);
}

double NNfunction_NG_8::synapse0x304f4f0() {
   return (neuron0x3045060()*0.0154827);
}

double NNfunction_NG_8::synapse0x304fe80() {
   return (neuron0x3045a30()*-0.377982);
}

double NNfunction_NG_8::synapse0x304fec0() {
   return (neuron0x3046400()*0.0802289);
}

double NNfunction_NG_8::synapse0x302bd70() {
   return (neuron0x3046dd0()*-0.0755385);
}

double NNfunction_NG_8::synapse0x302bdb0() {
   return (neuron0x30477a0()*0.0509168);
}

double NNfunction_NG_8::synapse0x303f620() {
   return (neuron0x3048170()*-0.17471);
}

double NNfunction_NG_8::synapse0x303f660() {
   return (neuron0x3048d50()*-0.247382);
}

double NNfunction_NG_8::synapse0x30505a0() {
   return (neuron0x3049720()*0.0803612);
}

double NNfunction_NG_8::synapse0x30505e0() {
   return (neuron0x303a5a0()*-1.09243);
}

double NNfunction_NG_8::synapse0x3050620() {
   return (neuron0x303af70()*-0.0320412);
}

double NNfunction_NG_8::synapse0x3050660() {
   return (neuron0x303b940()*-0.223324);
}

double NNfunction_NG_8::synapse0x3057510() {
   return (neuron0x304df80()*-0.0688141);
}

double NNfunction_NG_8::synapse0x3057550() {
   return (neuron0x304e830()*-0.0276762);
}

double NNfunction_NG_8::synapse0x3057590() {
   return (neuron0x304f200()*-0.0635093);
}

double NNfunction_NG_8::synapse0x30575d0() {
   return (neuron0x304fbd0()*0.514221);
}

double NNfunction_NG_8::synapse0x3057950() {
   return (neuron0x302bb50()*4.11318);
}

double NNfunction_NG_8::synapse0x3057990() {
   return (neuron0x302c460()*0.0848641);
}

double NNfunction_NG_8::synapse0x30579d0() {
   return (neuron0x302cf40()*0.981118);
}

double NNfunction_NG_8::synapse0x3057a10() {
   return (neuron0x2de67d0()*0.462513);
}

double NNfunction_NG_8::synapse0x3057a50() {
   return (neuron0x302dd60()*2.37324);
}

double NNfunction_NG_8::synapse0x3057a90() {
   return (neuron0x302e730()*-0.393964);
}

double NNfunction_NG_8::synapse0x3057ad0() {
   return (neuron0x302f500()*-1.77308);
}

double NNfunction_NG_8::synapse0x3057b10() {
   return (neuron0x302fed0()*-1.03187);
}

double NNfunction_NG_8::synapse0x3057b50() {
   return (neuron0x30308a0()*1.64346);
}

double NNfunction_NG_8::synapse0x3057b90() {
   return (neuron0x3031380()*0.210592);
}

double NNfunction_NG_8::synapse0x3057bd0() {
   return (neuron0x3031d50()*-0.00582513);
}

double NNfunction_NG_8::synapse0x3057c10() {
   return (neuron0x302ee30()*-0.144614);
}

double NNfunction_NG_8::synapse0x3057c50() {
   return (neuron0x3033900()*-0.535996);
}

double NNfunction_NG_8::synapse0x3057c90() {
   return (neuron0x30342d0()*0.612067);
}

double NNfunction_NG_8::synapse0x3057cd0() {
   return (neuron0x3034ca0()*-0.0962612);
}

double NNfunction_NG_8::synapse0x3057d10() {
   return (neuron0x3035670()*0.635279);
}

double NNfunction_NG_8::synapse0x30577a0() {
   return (neuron0x3037480()*-0.29014);
}

double NNfunction_NG_8::synapse0x30577e0() {
   return (neuron0x3037760()*-0.375065);
}

double NNfunction_NG_8::synapse0x3057e60() {
   return (neuron0x3038130()*0.366148);
}

double NNfunction_NG_8::synapse0x3057ea0() {
   return (neuron0x3038b00()*1.53457);
}

double NNfunction_NG_8::synapse0x3057ee0() {
   return (neuron0x30394d0()*-0.258067);
}

double NNfunction_NG_8::synapse0x3057f20() {
   return (neuron0x3039ea0()*1.49993);
}

double NNfunction_NG_8::synapse0x3057f60() {
   return (neuron0x30329f0()*0.0877643);
}

double NNfunction_NG_8::synapse0x3057fa0() {
   return (neuron0x30333c0()*-1.19509);
}

double NNfunction_NG_8::synapse0x3057fe0() {
   return (neuron0x303cc30()*-3.31093);
}

double NNfunction_NG_8::synapse0x3058020() {
   return (neuron0x303d600()*0.0172812);
}

double NNfunction_NG_8::synapse0x3058060() {
   return (neuron0x303dfd0()*3.98056);
}

double NNfunction_NG_8::synapse0x30580a0() {
   return (neuron0x303e9a0()*0.609596);
}

double NNfunction_NG_8::synapse0x30580e0() {
   return (neuron0x303f370()*-2.06819);
}

double NNfunction_NG_8::synapse0x3058120() {
   return (neuron0x303fd40()*-0.244197);
}

double NNfunction_NG_8::synapse0x3058160() {
   return (neuron0x3040710()*-0.305252);
}

double NNfunction_NG_8::synapse0x30581a0() {
   return (neuron0x30410e0()*0.210519);
}

double NNfunction_NG_8::synapse0x3057d50() {
   return (neuron0x3037170()*-0.99904);
}

double NNfunction_NG_8::synapse0x3057d90() {
   return (neuron0x3043cc0()*2.41782);
}

double NNfunction_NG_8::synapse0x3057dd0() {
   return (neuron0x3044690()*-1.74595);
}

double NNfunction_NG_8::synapse0x3057e10() {
   return (neuron0x3045060()*0.243278);
}

double NNfunction_NG_8::synapse0x30583f0() {
   return (neuron0x3045a30()*1.75994);
}

double NNfunction_NG_8::synapse0x3058430() {
   return (neuron0x3046400()*1.62899);
}

double NNfunction_NG_8::synapse0x3058470() {
   return (neuron0x3046dd0()*-0.683516);
}

double NNfunction_NG_8::synapse0x30584b0() {
   return (neuron0x30477a0()*-0.152074);
}

double NNfunction_NG_8::synapse0x30584f0() {
   return (neuron0x3048170()*0.0111365);
}

double NNfunction_NG_8::synapse0x3058530() {
   return (neuron0x3048d50()*-1.96932);
}

double NNfunction_NG_8::synapse0x3058570() {
   return (neuron0x3049720()*-0.216634);
}

double NNfunction_NG_8::synapse0x30585b0() {
   return (neuron0x303a5a0()*4.36067);
}

double NNfunction_NG_8::synapse0x30585f0() {
   return (neuron0x303af70()*-0.351515);
}

double NNfunction_NG_8::synapse0x3058630() {
   return (neuron0x303b940()*1.76093);
}

double NNfunction_NG_8::synapse0x3058670() {
   return (neuron0x304df80()*0.0481259);
}

double NNfunction_NG_8::synapse0x30586b0() {
   return (neuron0x304e830()*0.212107);
}

double NNfunction_NG_8::synapse0x30586f0() {
   return (neuron0x304f200()*-2.2322);
}

double NNfunction_NG_8::synapse0x3058730() {
   return (neuron0x304fbd0()*0.247065);
}

double NNfunction_NG_8::synapse0x3058ab0() {
   return (neuron0x302bb50()*-0.149042);
}

double NNfunction_NG_8::synapse0x3058af0() {
   return (neuron0x302c460()*0.0633);
}

double NNfunction_NG_8::synapse0x3058b30() {
   return (neuron0x302cf40()*2.76928);
}

double NNfunction_NG_8::synapse0x3058b70() {
   return (neuron0x2de67d0()*0.472626);
}

double NNfunction_NG_8::synapse0x3058bb0() {
   return (neuron0x302dd60()*-0.193752);
}

double NNfunction_NG_8::synapse0x3058bf0() {
   return (neuron0x302e730()*0.228471);
}

double NNfunction_NG_8::synapse0x3058c30() {
   return (neuron0x302f500()*-1.54546);
}

double NNfunction_NG_8::synapse0x3058c70() {
   return (neuron0x302fed0()*-0.952284);
}

double NNfunction_NG_8::synapse0x3058cb0() {
   return (neuron0x30308a0()*0.364333);
}

double NNfunction_NG_8::synapse0x3058cf0() {
   return (neuron0x3031380()*-0.0227181);
}

double NNfunction_NG_8::synapse0x3058d30() {
   return (neuron0x3031d50()*-0.837255);
}

double NNfunction_NG_8::synapse0x3058d70() {
   return (neuron0x302ee30()*0.258455);
}

double NNfunction_NG_8::synapse0x3058db0() {
   return (neuron0x3033900()*-0.116667);
}

double NNfunction_NG_8::synapse0x3058df0() {
   return (neuron0x30342d0()*0.214872);
}

double NNfunction_NG_8::synapse0x3058e30() {
   return (neuron0x3034ca0()*0.348005);
}

double NNfunction_NG_8::synapse0x3058e70() {
   return (neuron0x3035670()*0.167964);
}

double NNfunction_NG_8::synapse0x3058900() {
   return (neuron0x3037480()*-0.0368503);
}

double NNfunction_NG_8::synapse0x3058940() {
   return (neuron0x3037760()*-0.0399843);
}

double NNfunction_NG_8::synapse0x3058fc0() {
   return (neuron0x3038130()*-0.191387);
}

double NNfunction_NG_8::synapse0x3059000() {
   return (neuron0x3038b00()*0.183119);
}

double NNfunction_NG_8::synapse0x3059040() {
   return (neuron0x30394d0()*0.0344915);
}

double NNfunction_NG_8::synapse0x3059080() {
   return (neuron0x3039ea0()*0.0652947);
}

double NNfunction_NG_8::synapse0x30590c0() {
   return (neuron0x30329f0()*0.163184);
}

double NNfunction_NG_8::synapse0x3059100() {
   return (neuron0x30333c0()*-0.0707753);
}

double NNfunction_NG_8::synapse0x3059140() {
   return (neuron0x303cc30()*0.175989);
}

double NNfunction_NG_8::synapse0x3059180() {
   return (neuron0x303d600()*-0.00247956);
}

double NNfunction_NG_8::synapse0x30591c0() {
   return (neuron0x303dfd0()*-0.164187);
}

double NNfunction_NG_8::synapse0x3059200() {
   return (neuron0x303e9a0()*-0.0518076);
}

double NNfunction_NG_8::synapse0x3059240() {
   return (neuron0x303f370()*-1.32715);
}

double NNfunction_NG_8::synapse0x3059280() {
   return (neuron0x303fd40()*0.426062);
}

double NNfunction_NG_8::synapse0x30592c0() {
   return (neuron0x3040710()*0.400753);
}

double NNfunction_NG_8::synapse0x3059300() {
   return (neuron0x30410e0()*-0.15758);
}

double NNfunction_NG_8::synapse0x3058eb0() {
   return (neuron0x3037170()*0.0819464);
}

double NNfunction_NG_8::synapse0x3058ef0() {
   return (neuron0x3043cc0()*0.100182);
}

double NNfunction_NG_8::synapse0x3058f30() {
   return (neuron0x3044690()*-1.24107);
}

double NNfunction_NG_8::synapse0x3058f70() {
   return (neuron0x3045060()*-0.0728097);
}

double NNfunction_NG_8::synapse0x3059550() {
   return (neuron0x3045a30()*-0.234423);
}

double NNfunction_NG_8::synapse0x3059590() {
   return (neuron0x3046400()*-0.344861);
}

double NNfunction_NG_8::synapse0x30595d0() {
   return (neuron0x3046dd0()*0.213783);
}

double NNfunction_NG_8::synapse0x3059610() {
   return (neuron0x30477a0()*0.0229645);
}

double NNfunction_NG_8::synapse0x3059650() {
   return (neuron0x3048170()*0.098183);
}

double NNfunction_NG_8::synapse0x3059690() {
   return (neuron0x3048d50()*0.453852);
}

double NNfunction_NG_8::synapse0x30596d0() {
   return (neuron0x3049720()*-0.0399463);
}

double NNfunction_NG_8::synapse0x3059710() {
   return (neuron0x303a5a0()*-0.240484);
}

double NNfunction_NG_8::synapse0x3059750() {
   return (neuron0x303af70()*-1.99083);
}

double NNfunction_NG_8::synapse0x3059790() {
   return (neuron0x303b940()*-0.454114);
}

double NNfunction_NG_8::synapse0x30597d0() {
   return (neuron0x304df80()*-0.0308033);
}

double NNfunction_NG_8::synapse0x3059810() {
   return (neuron0x304e830()*-0.0725983);
}

double NNfunction_NG_8::synapse0x3059850() {
   return (neuron0x304f200()*0.00505814);
}

double NNfunction_NG_8::synapse0x3059890() {
   return (neuron0x304fbd0()*-0.459437);
}

double NNfunction_NG_8::synapse0x3059c10() {
   return (neuron0x302bb50()*0.145802);
}

double NNfunction_NG_8::synapse0x3059c50() {
   return (neuron0x302c460()*-0.0117867);
}

double NNfunction_NG_8::synapse0x3059c90() {
   return (neuron0x302cf40()*-0.377047);
}

double NNfunction_NG_8::synapse0x3059cd0() {
   return (neuron0x2de67d0()*0.38037);
}

double NNfunction_NG_8::synapse0x3059d10() {
   return (neuron0x302dd60()*0.419311);
}

double NNfunction_NG_8::synapse0x3059d50() {
   return (neuron0x302e730()*0.00458517);
}

double NNfunction_NG_8::synapse0x3059d90() {
   return (neuron0x302f500()*-0.761581);
}

double NNfunction_NG_8::synapse0x3059dd0() {
   return (neuron0x302fed0()*0.313408);
}

double NNfunction_NG_8::synapse0x3059e10() {
   return (neuron0x30308a0()*0.346113);
}

double NNfunction_NG_8::synapse0x3059e50() {
   return (neuron0x3031380()*0.0277191);
}

double NNfunction_NG_8::synapse0x3059e90() {
   return (neuron0x3031d50()*-0.271669);
}

double NNfunction_NG_8::synapse0x3059ed0() {
   return (neuron0x302ee30()*0.49705);
}

double NNfunction_NG_8::synapse0x3059f10() {
   return (neuron0x3033900()*-0.0190419);
}

double NNfunction_NG_8::synapse0x3059f50() {
   return (neuron0x30342d0()*1.04874);
}

double NNfunction_NG_8::synapse0x3059f90() {
   return (neuron0x3034ca0()*0.193558);
}

double NNfunction_NG_8::synapse0x3059fd0() {
   return (neuron0x3035670()*0.0256184);
}

double NNfunction_NG_8::synapse0x3059a60() {
   return (neuron0x3037480()*-0.0259904);
}

double NNfunction_NG_8::synapse0x3059aa0() {
   return (neuron0x3037760()*-0.195624);
}

double NNfunction_NG_8::synapse0x305a120() {
   return (neuron0x3038130()*0.0228435);
}

double NNfunction_NG_8::synapse0x305a160() {
   return (neuron0x3038b00()*0.303574);
}

double NNfunction_NG_8::synapse0x305a1a0() {
   return (neuron0x30394d0()*0.00781973);
}

double NNfunction_NG_8::synapse0x305a1e0() {
   return (neuron0x3039ea0()*0.282797);
}

double NNfunction_NG_8::synapse0x305a220() {
   return (neuron0x30329f0()*-0.634384);
}

double NNfunction_NG_8::synapse0x305a260() {
   return (neuron0x30333c0()*-0.0542404);
}

double NNfunction_NG_8::synapse0x305a2a0() {
   return (neuron0x303cc30()*-0.39792);
}

double NNfunction_NG_8::synapse0x305a2e0() {
   return (neuron0x303d600()*0.00938718);
}

double NNfunction_NG_8::synapse0x305a320() {
   return (neuron0x303dfd0()*-0.172874);
}

double NNfunction_NG_8::synapse0x305a360() {
   return (neuron0x303e9a0()*0.236453);
}

double NNfunction_NG_8::synapse0x305a3a0() {
   return (neuron0x303f370()*-1.39516);
}

double NNfunction_NG_8::synapse0x305a3e0() {
   return (neuron0x303fd40()*-0.30675);
}

double NNfunction_NG_8::synapse0x305a420() {
   return (neuron0x3040710()*-1.15445);
}

double NNfunction_NG_8::synapse0x305a460() {
   return (neuron0x30410e0()*0.381686);
}

double NNfunction_NG_8::synapse0x305a010() {
   return (neuron0x3037170()*0.115059);
}

double NNfunction_NG_8::synapse0x305a050() {
   return (neuron0x3043cc0()*2.08282);
}

double NNfunction_NG_8::synapse0x305a090() {
   return (neuron0x3044690()*-0.161481);
}

double NNfunction_NG_8::synapse0x305a0d0() {
   return (neuron0x3045060()*0.047528);
}

double NNfunction_NG_8::synapse0x305a6b0() {
   return (neuron0x3045a30()*-0.134566);
}

double NNfunction_NG_8::synapse0x305a6f0() {
   return (neuron0x3046400()*0.838201);
}

double NNfunction_NG_8::synapse0x305a730() {
   return (neuron0x3046dd0()*-0.0871388);
}

double NNfunction_NG_8::synapse0x305a770() {
   return (neuron0x30477a0()*0.0165514);
}

double NNfunction_NG_8::synapse0x305a7b0() {
   return (neuron0x3048170()*0.0276931);
}

double NNfunction_NG_8::synapse0x305a7f0() {
   return (neuron0x3048d50()*-0.157841);
}

double NNfunction_NG_8::synapse0x305a830() {
   return (neuron0x3049720()*-0.0431571);
}

double NNfunction_NG_8::synapse0x305a870() {
   return (neuron0x303a5a0()*0.223544);
}

double NNfunction_NG_8::synapse0x305a8b0() {
   return (neuron0x303af70()*-0.0774953);
}

double NNfunction_NG_8::synapse0x305a8f0() {
   return (neuron0x303b940()*-0.658588);
}

double NNfunction_NG_8::synapse0x305a930() {
   return (neuron0x304df80()*-0.0153719);
}

double NNfunction_NG_8::synapse0x305a970() {
   return (neuron0x304e830()*-0.0326681);
}

double NNfunction_NG_8::synapse0x305a9b0() {
   return (neuron0x304f200()*-0.236742);
}

double NNfunction_NG_8::synapse0x305a9f0() {
   return (neuron0x304fbd0()*0.941176);
}

double NNfunction_NG_8::synapse0x302bb10() {
   return (neuron0x3056dd0()*-3.11564);
}

double NNfunction_NG_8::synapse0x305ac50() {
   return (neuron0x3057170()*-2.50379);
}

double NNfunction_NG_8::synapse0x305ac90() {
   return (neuron0x3057610()*-6.06096);
}

double NNfunction_NG_8::synapse0x305acd0() {
   return (neuron0x3058770()*-5.07421);
}

double NNfunction_NG_8::synapse0x305ad10() {
   return (neuron0x30598d0()*-4.7603);
}

