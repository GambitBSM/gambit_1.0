#include "NNfunction-NN_6_7.h"
#include <cmath>

double NNfunction-NN_6_7::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.4202)/15.1839;
   input1 = (in1 - -9.68902)/1192.54;
   input2 = (in2 - 244.656)/209.731;
   input3 = (in3 - -22.2659)/841.983;
   input4 = (in4 - 1067.03)/925.1;
   input5 = (in5 - 917.517)/950.673;
   input6 = (in6 - 925.866)/949.726;
   input7 = (in7 - 941.708)/930.271;
   input8 = (in8 - 934.383)/977.514;
   input9 = (in9 - 918.857)/964.414;
   input10 = (in10 - 972.834)/955.973;
   input11 = (in11 - 646.073)/834.811;
   input12 = (in12 - 731.914)/873.086;
   input13 = (in13 - 502.188)/521.237;
   input14 = (in14 - 704.465)/801.74;
   input15 = (in15 - 707.096)/804.352;
   input16 = (in16 - 524.241)/560.28;
   input17 = (in17 - 762.885)/904.465;
   input18 = (in18 - 764.78)/908.793;
   input19 = (in19 - 775.234)/865.973;
   input20 = (in20 - -6.38983)/488.259;
   input21 = (in21 - -6.33966)/1136.27;
   input22 = (in22 - 1.31908)/1193.72;
   input23 = (in23 - -40.6628)/250.199;
   switch(index) {
     case 0:
         return neuron0x233f9a0();
     default:
         return 0.;
   }
}

double NNfunction-NN_6_7::Value(int index, double* input) {
   input0 = (input[0] - 23.4202)/15.1839;
   input1 = (input[1] - -9.68902)/1192.54;
   input2 = (input[2] - 244.656)/209.731;
   input3 = (input[3] - -22.2659)/841.983;
   input4 = (input[4] - 1067.03)/925.1;
   input5 = (input[5] - 917.517)/950.673;
   input6 = (input[6] - 925.866)/949.726;
   input7 = (input[7] - 941.708)/930.271;
   input8 = (input[8] - 934.383)/977.514;
   input9 = (input[9] - 918.857)/964.414;
   input10 = (input[10] - 972.834)/955.973;
   input11 = (input[11] - 646.073)/834.811;
   input12 = (input[12] - 731.914)/873.086;
   input13 = (input[13] - 502.188)/521.237;
   input14 = (input[14] - 704.465)/801.74;
   input15 = (input[15] - 707.096)/804.352;
   input16 = (input[16] - 524.241)/560.28;
   input17 = (input[17] - 762.885)/904.465;
   input18 = (input[18] - 764.78)/908.793;
   input19 = (input[19] - 775.234)/865.973;
   input20 = (input[20] - -6.38983)/488.259;
   input21 = (input[21] - -6.33966)/1136.27;
   input22 = (input[22] - 1.31908)/1193.72;
   input23 = (input[23] - -40.6628)/250.199;
   switch(index) {
     case 0:
         return neuron0x233f9a0();
     default:
         return 0.;
   }
}

double NNfunction-NN_6_7::neuron0x230ba60() {
   return input0;
}

double NNfunction-NN_6_7::neuron0x230bda0() {
   return input1;
}

double NNfunction-NN_6_7::neuron0x230c0e0() {
   return input2;
}

double NNfunction-NN_6_7::neuron0x230c420() {
   return input3;
}

double NNfunction-NN_6_7::neuron0x230c760() {
   return input4;
}

double NNfunction-NN_6_7::neuron0x230caa0() {
   return input5;
}

double NNfunction-NN_6_7::neuron0x230cde0() {
   return input6;
}

double NNfunction-NN_6_7::neuron0x230d120() {
   return input7;
}

double NNfunction-NN_6_7::neuron0x230d460() {
   return input8;
}

double NNfunction-NN_6_7::neuron0x230d7a0() {
   return input9;
}

double NNfunction-NN_6_7::neuron0x230dae0() {
   return input10;
}

double NNfunction-NN_6_7::neuron0x230de20() {
   return input11;
}

double NNfunction-NN_6_7::neuron0x230e160() {
   return input12;
}

double NNfunction-NN_6_7::neuron0x230e4a0() {
   return input13;
}

double NNfunction-NN_6_7::neuron0x230e7e0() {
   return input14;
}

double NNfunction-NN_6_7::neuron0x230eb20() {
   return input15;
}

double NNfunction-NN_6_7::neuron0x230ee60() {
   return input16;
}

double NNfunction-NN_6_7::neuron0x230f3c0() {
   return input17;
}

double NNfunction-NN_6_7::neuron0x230f5e0() {
   return input18;
}

double NNfunction-NN_6_7::neuron0x230f920() {
   return input19;
}

double NNfunction-NN_6_7::neuron0x230fc60() {
   return input20;
}

double NNfunction-NN_6_7::neuron0x230ffa0() {
   return input21;
}

double NNfunction-NN_6_7::neuron0x23102e0() {
   return input22;
}

double NNfunction-NN_6_7::neuron0x2310620() {
   return input23;
}

double NNfunction-NN_6_7::input0x2310ac0() {
   double input = 0.457368;
   input += synapse0x20cb8d0();
   input += synapse0x230b920();
   input += synapse0x230b960();
   input += synapse0x2310d70();
   input += synapse0x2310db0();
   input += synapse0x2310df0();
   input += synapse0x2310e30();
   input += synapse0x2310e70();
   input += synapse0x2310eb0();
   input += synapse0x2310ef0();
   input += synapse0x2310f30();
   input += synapse0x2310f70();
   input += synapse0x2310fb0();
   input += synapse0x2310ff0();
   input += synapse0x2311030();
   input += synapse0x2311070();
   input += synapse0x230b890();
   input += synapse0x230b8d0();
   input += synapse0x20bd170();
   input += synapse0x20bd1b0();
   input += synapse0x23112d0();
   input += synapse0x2311310();
   input += synapse0x2311350();
   input += synapse0x2311390();
   return input;
}

double NNfunction-NN_6_7::neuron0x2310ac0() {
   double input = input0x2310ac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x23113d0() {
   double input = 1.0854;
   input += synapse0x2311710();
   input += synapse0x2311750();
   input += synapse0x2311790();
   input += synapse0x23117d0();
   input += synapse0x2311810();
   input += synapse0x2311850();
   input += synapse0x2311890();
   input += synapse0x23118d0();
   input += synapse0x2311910();
   input += synapse0x23111c0();
   input += synapse0x2311200();
   input += synapse0x2311240();
   input += synapse0x2311280();
   input += synapse0x2311b60();
   input += synapse0x2311ba0();
   input += synapse0x2311be0();
   input += synapse0x2311560();
   input += synapse0x23115a0();
   input += synapse0x2311d30();
   input += synapse0x2311d70();
   input += synapse0x2311db0();
   input += synapse0x2311df0();
   input += synapse0x2311e30();
   input += synapse0x2311e70();
   return input;
}

double NNfunction-NN_6_7::neuron0x23113d0() {
   double input = input0x23113d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x2311eb0() {
   double input = 0.372119;
   input += synapse0x23121f0();
   input += synapse0x2312230();
   input += synapse0x2312270();
   input += synapse0x23122b0();
   input += synapse0x23122f0();
   input += synapse0x2312330();
   input += synapse0x2312370();
   input += synapse0x23123b0();
   input += synapse0x23123f0();
   input += synapse0x2312430();
   input += synapse0x2312470();
   input += synapse0x23124b0();
   input += synapse0x23124f0();
   input += synapse0x2312530();
   input += synapse0x2312570();
   input += synapse0x23125b0();
   input += synapse0x2312040();
   input += synapse0x2312080();
   input += synapse0x20cafc0();
   input += synapse0x20cb000();
   input += synapse0x22faaf0();
   input += synapse0x22fab30();
   input += synapse0x22fab70();
   input += synapse0x230b9a0();
   return input;
}

double NNfunction-NN_6_7::neuron0x2311eb0() {
   double input = input0x2311eb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x20cb740() {
   double input = -1.19134;
   input += synapse0x2311b00();
   input += synapse0x230b9e0();
   input += synapse0x230ba20();
   input += synapse0x2312700();
   input += synapse0x2312740();
   input += synapse0x2312780();
   input += synapse0x23127c0();
   input += synapse0x2312800();
   input += synapse0x2312840();
   input += synapse0x2312880();
   input += synapse0x23128c0();
   input += synapse0x2312900();
   input += synapse0x2312940();
   input += synapse0x2312980();
   input += synapse0x23129c0();
   input += synapse0x2312a00();
   input += synapse0x2311950();
   input += synapse0x2311990();
   input += synapse0x2312b50();
   input += synapse0x2312b90();
   input += synapse0x2312bd0();
   input += synapse0x2312c10();
   input += synapse0x2312c50();
   input += synapse0x2312c90();
   return input;
}

double NNfunction-NN_6_7::neuron0x20cb740() {
   double input = input0x20cb740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x2312cd0() {
   double input = -1.35564;
   input += synapse0x2313010();
   input += synapse0x2313050();
   input += synapse0x2313090();
   input += synapse0x23130d0();
   input += synapse0x2313110();
   input += synapse0x2313150();
   input += synapse0x2313190();
   input += synapse0x23131d0();
   input += synapse0x2313210();
   input += synapse0x2313250();
   input += synapse0x2313290();
   input += synapse0x23132d0();
   input += synapse0x2313310();
   input += synapse0x2313350();
   input += synapse0x2313390();
   input += synapse0x23133d0();
   input += synapse0x2312e60();
   input += synapse0x2312ea0();
   input += synapse0x2313520();
   input += synapse0x2313560();
   input += synapse0x23135a0();
   input += synapse0x23135e0();
   input += synapse0x2313620();
   input += synapse0x2313660();
   return input;
}

double NNfunction-NN_6_7::neuron0x2312cd0() {
   double input = input0x2312cd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x23136a0() {
   double input = -0.177199;
   input += synapse0x23139e0();
   input += synapse0x2313a20();
   input += synapse0x2313a60();
   input += synapse0x2313aa0();
   input += synapse0x2313ae0();
   input += synapse0x2313b20();
   input += synapse0x2313b60();
   input += synapse0x2313ba0();
   input += synapse0x2313be0();
   input += synapse0x20cb330();
   input += synapse0x20cb370();
   input += synapse0x20cb3b0();
   input += synapse0x20cb3f0();
   input += synapse0x20cb430();
   input += synapse0x20cb470();
   input += synapse0x20cb4b0();
   input += synapse0x2313830();
   input += synapse0x2313870();
   input += synapse0x20cb600();
   input += synapse0x20cb640();
   input += synapse0x20cb680();
   input += synapse0x20cb6c0();
   input += synapse0x20cb700();
   input += synapse0x2314430();
   return input;
}

double NNfunction-NN_6_7::neuron0x23136a0() {
   double input = input0x23136a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x2314470() {
   double input = 1.87021;
   input += synapse0x23147b0();
   input += synapse0x23147f0();
   input += synapse0x2314830();
   input += synapse0x2314870();
   input += synapse0x23148b0();
   input += synapse0x23148f0();
   input += synapse0x2314930();
   input += synapse0x2314970();
   input += synapse0x23149b0();
   input += synapse0x23149f0();
   input += synapse0x2314a30();
   input += synapse0x2314a70();
   input += synapse0x2314ab0();
   input += synapse0x2314af0();
   input += synapse0x2314b30();
   input += synapse0x2314b70();
   input += synapse0x2314600();
   input += synapse0x2314640();
   input += synapse0x2314cc0();
   input += synapse0x2314d00();
   input += synapse0x2314d40();
   input += synapse0x2314d80();
   input += synapse0x2314dc0();
   input += synapse0x2314e00();
   return input;
}

double NNfunction-NN_6_7::neuron0x2314470() {
   double input = input0x2314470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x2314e40() {
   double input = 1.61177;
   input += synapse0x2315180();
   input += synapse0x23151c0();
   input += synapse0x2315200();
   input += synapse0x2315240();
   input += synapse0x2315280();
   input += synapse0x23152c0();
   input += synapse0x2315300();
   input += synapse0x2315340();
   input += synapse0x2315380();
   input += synapse0x23153c0();
   input += synapse0x2315400();
   input += synapse0x2315440();
   input += synapse0x2315480();
   input += synapse0x23154c0();
   input += synapse0x2315500();
   input += synapse0x2315540();
   input += synapse0x2314fd0();
   input += synapse0x2315010();
   input += synapse0x2315690();
   input += synapse0x23156d0();
   input += synapse0x2315710();
   input += synapse0x2315750();
   input += synapse0x2315790();
   input += synapse0x23157d0();
   return input;
}

double NNfunction-NN_6_7::neuron0x2314e40() {
   double input = input0x2314e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x2315810() {
   double input = -1.20406;
   input += synapse0x230f2b0();
   input += synapse0x230f2f0();
   input += synapse0x230f330();
   input += synapse0x230f370();
   input += synapse0x2315d60();
   input += synapse0x2315da0();
   input += synapse0x2315de0();
   input += synapse0x2315e20();
   input += synapse0x2315e60();
   input += synapse0x2315ea0();
   input += synapse0x2315ee0();
   input += synapse0x2315f20();
   input += synapse0x2315f60();
   input += synapse0x2315fa0();
   input += synapse0x2315fe0();
   input += synapse0x2316020();
   input += synapse0x23159a0();
   input += synapse0x23159e0();
   input += synapse0x2316170();
   input += synapse0x23161b0();
   input += synapse0x23161f0();
   input += synapse0x2316230();
   input += synapse0x2316270();
   input += synapse0x23162b0();
   return input;
}

double NNfunction-NN_6_7::neuron0x2315810() {
   double input = input0x2315810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x23162f0() {
   double input = -0.906535;
   input += synapse0x2316630();
   input += synapse0x2316670();
   input += synapse0x23166b0();
   input += synapse0x23166f0();
   input += synapse0x2316730();
   input += synapse0x2316770();
   input += synapse0x23167b0();
   input += synapse0x23167f0();
   input += synapse0x2316830();
   input += synapse0x2316870();
   input += synapse0x23168b0();
   input += synapse0x23168f0();
   input += synapse0x2316930();
   input += synapse0x2316970();
   input += synapse0x23169b0();
   input += synapse0x23169f0();
   input += synapse0x2316480();
   input += synapse0x23164c0();
   input += synapse0x2316b40();
   input += synapse0x2316b80();
   input += synapse0x2316bc0();
   input += synapse0x2316c00();
   input += synapse0x2316c40();
   input += synapse0x2316c80();
   return input;
}

double NNfunction-NN_6_7::neuron0x23162f0() {
   double input = input0x23162f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x2316cc0() {
   double input = -4.15013;
   input += synapse0x2317000();
   input += synapse0x2317040();
   input += synapse0x2317080();
   input += synapse0x23170c0();
   input += synapse0x2317100();
   input += synapse0x2317140();
   input += synapse0x2317180();
   input += synapse0x23171c0();
   input += synapse0x2317200();
   input += synapse0x2317240();
   input += synapse0x2317280();
   input += synapse0x23172c0();
   input += synapse0x2317300();
   input += synapse0x2317340();
   input += synapse0x2317380();
   input += synapse0x23173c0();
   input += synapse0x2316e50();
   input += synapse0x2316e90();
   input += synapse0x2313c20();
   input += synapse0x2313c60();
   input += synapse0x2313ca0();
   input += synapse0x2313ce0();
   input += synapse0x2313d20();
   input += synapse0x2313d60();
   return input;
}

double NNfunction-NN_6_7::neuron0x2316cc0() {
   double input = input0x2316cc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x2313da0() {
   double input = 0.296559;
   input += synapse0x23140e0();
   input += synapse0x2314120();
   input += synapse0x2314160();
   input += synapse0x23141a0();
   input += synapse0x23141e0();
   input += synapse0x2314220();
   input += synapse0x2314260();
   input += synapse0x23142a0();
   input += synapse0x23142e0();
   input += synapse0x2314320();
   input += synapse0x2314360();
   input += synapse0x23143a0();
   input += synapse0x23143e0();
   input += synapse0x2318520();
   input += synapse0x2318560();
   input += synapse0x23185a0();
   input += synapse0x2313f30();
   input += synapse0x2313f70();
   input += synapse0x23186f0();
   input += synapse0x2318730();
   input += synapse0x2318770();
   input += synapse0x23187b0();
   input += synapse0x23187f0();
   input += synapse0x2318830();
   return input;
}

double NNfunction-NN_6_7::neuron0x2313da0() {
   double input = input0x2313da0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x2318870() {
   double input = -1.39085;
   input += synapse0x2318bb0();
   input += synapse0x2318bf0();
   input += synapse0x2318c30();
   input += synapse0x2318c70();
   input += synapse0x2318cb0();
   input += synapse0x2318cf0();
   input += synapse0x2318d30();
   input += synapse0x2318d70();
   input += synapse0x2318db0();
   input += synapse0x2318df0();
   input += synapse0x2318e30();
   input += synapse0x2318e70();
   input += synapse0x2318eb0();
   input += synapse0x2318ef0();
   input += synapse0x2318f30();
   input += synapse0x2318f70();
   input += synapse0x2318a00();
   input += synapse0x2318a40();
   input += synapse0x23190c0();
   input += synapse0x2319100();
   input += synapse0x2319140();
   input += synapse0x2319180();
   input += synapse0x23191c0();
   input += synapse0x2319200();
   return input;
}

double NNfunction-NN_6_7::neuron0x2318870() {
   double input = input0x2318870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x2319240() {
   double input = 0.720565;
   input += synapse0x2319580();
   input += synapse0x23195c0();
   input += synapse0x2319600();
   input += synapse0x2319640();
   input += synapse0x2319680();
   input += synapse0x23196c0();
   input += synapse0x2319700();
   input += synapse0x2319740();
   input += synapse0x2319780();
   input += synapse0x23197c0();
   input += synapse0x2319800();
   input += synapse0x2319840();
   input += synapse0x2319880();
   input += synapse0x23198c0();
   input += synapse0x2319900();
   input += synapse0x2319940();
   input += synapse0x23193d0();
   input += synapse0x2319410();
   input += synapse0x2319a90();
   input += synapse0x2319ad0();
   input += synapse0x2319b10();
   input += synapse0x2319b50();
   input += synapse0x2319b90();
   input += synapse0x2319bd0();
   return input;
}

double NNfunction-NN_6_7::neuron0x2319240() {
   double input = input0x2319240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x2319c10() {
   double input = 1.21261;
   input += synapse0x2319f50();
   input += synapse0x2319f90();
   input += synapse0x2319fd0();
   input += synapse0x231a010();
   input += synapse0x231a050();
   input += synapse0x231a090();
   input += synapse0x231a0d0();
   input += synapse0x231a110();
   input += synapse0x231a150();
   input += synapse0x231a190();
   input += synapse0x231a1d0();
   input += synapse0x231a210();
   input += synapse0x231a250();
   input += synapse0x231a290();
   input += synapse0x231a2d0();
   input += synapse0x231a310();
   input += synapse0x2319da0();
   input += synapse0x2319de0();
   input += synapse0x231a460();
   input += synapse0x231a4a0();
   input += synapse0x231a4e0();
   input += synapse0x231a520();
   input += synapse0x231a560();
   input += synapse0x231a5a0();
   return input;
}

double NNfunction-NN_6_7::neuron0x2319c10() {
   double input = input0x2319c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x231a5e0() {
   double input = -3.11112;
   input += synapse0x231a920();
   input += synapse0x230bc80();
   input += synapse0x230bcc0();
   input += synapse0x230bfc0();
   input += synapse0x230c000();
   input += synapse0x230c300();
   input += synapse0x230c340();
   input += synapse0x230c640();
   input += synapse0x230c680();
   input += synapse0x230c980();
   input += synapse0x230c9c0();
   input += synapse0x230ccc0();
   input += synapse0x230cd00();
   input += synapse0x230d000();
   input += synapse0x230d040();
   input += synapse0x230d340();
   input += synapse0x230d380();
   input += synapse0x230d680();
   input += synapse0x230d6c0();
   input += synapse0x230d9c0();
   input += synapse0x230da00();
   input += synapse0x230dd00();
   input += synapse0x230dd40();
   input += synapse0x230e040();
   return input;
}

double NNfunction-NN_6_7::neuron0x231a5e0() {
   double input = input0x231a5e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x231c3f0() {
   double input = -2.24578;
   input += synapse0x230e080();
   input += synapse0x230ed40();
   input += synapse0x230ed80();
   input += synapse0x231a770();
   input += synapse0x231a7b0();
   input += synapse0x230f080();
   input += synapse0x230f0c0();
   input += synapse0x20bd050();
   input += synapse0x20bd090();
   input += synapse0x230f800();
   input += synapse0x230f840();
   input += synapse0x230fb40();
   input += synapse0x230fb80();
   input += synapse0x230fe80();
   input += synapse0x230fec0();
   input += synapse0x23101c0();
   input += synapse0x2310200();
   input += synapse0x2310500();
   input += synapse0x2310540();
   input += synapse0x2310840();
   input += synapse0x2310880();
   input += synapse0x230e380();
   input += synapse0x230e3c0();
   input += synapse0x231c690();
   return input;
}

double NNfunction-NN_6_7::neuron0x231c3f0() {
   double input = input0x231c3f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x231c6d0() {
   double input = -3.01558;
   input += synapse0x231ca10();
   input += synapse0x231ca50();
   input += synapse0x231ca90();
   input += synapse0x231cad0();
   input += synapse0x231cb10();
   input += synapse0x231cb50();
   input += synapse0x231cb90();
   input += synapse0x231cbd0();
   input += synapse0x231cc10();
   input += synapse0x231cc50();
   input += synapse0x231cc90();
   input += synapse0x231ccd0();
   input += synapse0x231cd10();
   input += synapse0x231cd50();
   input += synapse0x231cd90();
   input += synapse0x231cdd0();
   input += synapse0x231c860();
   input += synapse0x231c8a0();
   input += synapse0x231cf20();
   input += synapse0x231cf60();
   input += synapse0x231cfa0();
   input += synapse0x231cfe0();
   input += synapse0x231d020();
   input += synapse0x231d060();
   return input;
}

double NNfunction-NN_6_7::neuron0x231c6d0() {
   double input = input0x231c6d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x231d0a0() {
   double input = 0.514164;
   input += synapse0x231d3e0();
   input += synapse0x231d420();
   input += synapse0x231d460();
   input += synapse0x231d4a0();
   input += synapse0x231d4e0();
   input += synapse0x231d520();
   input += synapse0x231d560();
   input += synapse0x231d5a0();
   input += synapse0x231d5e0();
   input += synapse0x231d620();
   input += synapse0x231d660();
   input += synapse0x231d6a0();
   input += synapse0x231d6e0();
   input += synapse0x231d720();
   input += synapse0x231d760();
   input += synapse0x231d7a0();
   input += synapse0x231d230();
   input += synapse0x231d270();
   input += synapse0x231d8f0();
   input += synapse0x231d930();
   input += synapse0x231d970();
   input += synapse0x231d9b0();
   input += synapse0x231d9f0();
   input += synapse0x231da30();
   return input;
}

double NNfunction-NN_6_7::neuron0x231d0a0() {
   double input = input0x231d0a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x231da70() {
   double input = -0.532553;
   input += synapse0x231ddb0();
   input += synapse0x231ddf0();
   input += synapse0x231de30();
   input += synapse0x231de70();
   input += synapse0x231deb0();
   input += synapse0x231def0();
   input += synapse0x231df30();
   input += synapse0x231df70();
   input += synapse0x231dfb0();
   input += synapse0x231dff0();
   input += synapse0x231e030();
   input += synapse0x231e070();
   input += synapse0x231e0b0();
   input += synapse0x231e0f0();
   input += synapse0x231e130();
   input += synapse0x231e170();
   input += synapse0x231dc00();
   input += synapse0x231dc40();
   input += synapse0x231e2c0();
   input += synapse0x231e300();
   input += synapse0x231e340();
   input += synapse0x231e380();
   input += synapse0x231e3c0();
   input += synapse0x231e400();
   return input;
}

double NNfunction-NN_6_7::neuron0x231da70() {
   double input = input0x231da70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x231e440() {
   double input = -0.417397;
   input += synapse0x231e780();
   input += synapse0x231e7c0();
   input += synapse0x231e800();
   input += synapse0x231e840();
   input += synapse0x231e880();
   input += synapse0x231e8c0();
   input += synapse0x231e900();
   input += synapse0x231e940();
   input += synapse0x231e980();
   input += synapse0x231e9c0();
   input += synapse0x231ea00();
   input += synapse0x231ea40();
   input += synapse0x231ea80();
   input += synapse0x231eac0();
   input += synapse0x231eb00();
   input += synapse0x231eb40();
   input += synapse0x231e5d0();
   input += synapse0x231e610();
   input += synapse0x231ec90();
   input += synapse0x231ecd0();
   input += synapse0x231ed10();
   input += synapse0x231ed50();
   input += synapse0x231ed90();
   input += synapse0x231edd0();
   return input;
}

double NNfunction-NN_6_7::neuron0x231e440() {
   double input = input0x231e440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x231ee10() {
   double input = 0.714165;
   input += synapse0x231f150();
   input += synapse0x231f190();
   input += synapse0x231f1d0();
   input += synapse0x231f210();
   input += synapse0x231f250();
   input += synapse0x231f290();
   input += synapse0x231f2d0();
   input += synapse0x231f310();
   input += synapse0x231f350();
   input += synapse0x2317510();
   input += synapse0x2317550();
   input += synapse0x2317590();
   input += synapse0x23175d0();
   input += synapse0x2317610();
   input += synapse0x2317650();
   input += synapse0x2317690();
   input += synapse0x231efa0();
   input += synapse0x231efe0();
   input += synapse0x23177e0();
   input += synapse0x2317820();
   input += synapse0x2317860();
   input += synapse0x23178a0();
   input += synapse0x23178e0();
   input += synapse0x2317920();
   return input;
}

double NNfunction-NN_6_7::neuron0x231ee10() {
   double input = input0x231ee10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x2317960() {
   double input = 1.02711;
   input += synapse0x2317ca0();
   input += synapse0x2317ce0();
   input += synapse0x2317d20();
   input += synapse0x2317d60();
   input += synapse0x2317da0();
   input += synapse0x2317de0();
   input += synapse0x2317e20();
   input += synapse0x2317e60();
   input += synapse0x2317ea0();
   input += synapse0x2317ee0();
   input += synapse0x2317f20();
   input += synapse0x2317f60();
   input += synapse0x2317fa0();
   input += synapse0x2317fe0();
   input += synapse0x2318020();
   input += synapse0x2318060();
   input += synapse0x2317af0();
   input += synapse0x2317b30();
   input += synapse0x23181b0();
   input += synapse0x23181f0();
   input += synapse0x2318230();
   input += synapse0x2318270();
   input += synapse0x23182b0();
   input += synapse0x23182f0();
   return input;
}

double NNfunction-NN_6_7::neuron0x2317960() {
   double input = input0x2317960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x2318330() {
   double input = -1.33799;
   input += synapse0x23184c0();
   input += synapse0x2321550();
   input += synapse0x2321590();
   input += synapse0x23215d0();
   input += synapse0x2321610();
   input += synapse0x2321650();
   input += synapse0x2321690();
   input += synapse0x23216d0();
   input += synapse0x2321710();
   input += synapse0x2321750();
   input += synapse0x2321790();
   input += synapse0x23217d0();
   input += synapse0x2321810();
   input += synapse0x2321850();
   input += synapse0x2321890();
   input += synapse0x23218d0();
   input += synapse0x23213a0();
   input += synapse0x23213e0();
   input += synapse0x2321a20();
   input += synapse0x2321a60();
   input += synapse0x2321aa0();
   input += synapse0x2321ae0();
   input += synapse0x2321b20();
   input += synapse0x2321b60();
   return input;
}

double NNfunction-NN_6_7::neuron0x2318330() {
   double input = input0x2318330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x2321ba0() {
   double input = 2.88075;
   input += synapse0x2321ee0();
   input += synapse0x2321f20();
   input += synapse0x2321f60();
   input += synapse0x2321fa0();
   input += synapse0x2321fe0();
   input += synapse0x2322020();
   input += synapse0x2322060();
   input += synapse0x23220a0();
   input += synapse0x23220e0();
   input += synapse0x2322120();
   input += synapse0x2322160();
   input += synapse0x23221a0();
   input += synapse0x23221e0();
   input += synapse0x2322220();
   input += synapse0x2322260();
   input += synapse0x23222a0();
   input += synapse0x2321d30();
   input += synapse0x2321d70();
   input += synapse0x23223f0();
   input += synapse0x2322430();
   input += synapse0x2322470();
   input += synapse0x23224b0();
   input += synapse0x23224f0();
   input += synapse0x2322530();
   return input;
}

double NNfunction-NN_6_7::neuron0x2321ba0() {
   double input = input0x2321ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x2322570() {
   double input = -4.78752;
   input += synapse0x23228b0();
   input += synapse0x23228f0();
   input += synapse0x2322930();
   input += synapse0x2322970();
   input += synapse0x23229b0();
   input += synapse0x23229f0();
   input += synapse0x2322a30();
   input += synapse0x2322a70();
   input += synapse0x2322ab0();
   input += synapse0x2322af0();
   input += synapse0x2322b30();
   input += synapse0x2322b70();
   input += synapse0x2322bb0();
   input += synapse0x2322bf0();
   input += synapse0x2322c30();
   input += synapse0x2322c70();
   input += synapse0x2322700();
   input += synapse0x2322740();
   input += synapse0x2322dc0();
   input += synapse0x2322e00();
   input += synapse0x2322e40();
   input += synapse0x2322e80();
   input += synapse0x2322ec0();
   input += synapse0x2322f00();
   return input;
}

double NNfunction-NN_6_7::neuron0x2322570() {
   double input = input0x2322570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x2322f40() {
   double input = 3.50629;
   input += synapse0x2323280();
   input += synapse0x23232c0();
   input += synapse0x2323300();
   input += synapse0x2323340();
   input += synapse0x2323380();
   input += synapse0x23233c0();
   input += synapse0x2323400();
   input += synapse0x2323440();
   input += synapse0x2323480();
   input += synapse0x23234c0();
   input += synapse0x2323500();
   input += synapse0x2323540();
   input += synapse0x2323580();
   input += synapse0x23235c0();
   input += synapse0x2323600();
   input += synapse0x2323640();
   input += synapse0x23230d0();
   input += synapse0x2323110();
   input += synapse0x2323790();
   input += synapse0x23237d0();
   input += synapse0x2323810();
   input += synapse0x2323850();
   input += synapse0x2323890();
   input += synapse0x23238d0();
   return input;
}

double NNfunction-NN_6_7::neuron0x2322f40() {
   double input = input0x2322f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x2323910() {
   double input = 0.652205;
   input += synapse0x2323c50();
   input += synapse0x2323c90();
   input += synapse0x2323cd0();
   input += synapse0x2323d10();
   input += synapse0x2323d50();
   input += synapse0x2323d90();
   input += synapse0x2323dd0();
   input += synapse0x2323e10();
   input += synapse0x2323e50();
   input += synapse0x2323e90();
   input += synapse0x2323ed0();
   input += synapse0x2323f10();
   input += synapse0x2323f50();
   input += synapse0x2323f90();
   input += synapse0x2323fd0();
   input += synapse0x2324010();
   input += synapse0x2323aa0();
   input += synapse0x2323ae0();
   input += synapse0x2324160();
   input += synapse0x23241a0();
   input += synapse0x23241e0();
   input += synapse0x2324220();
   input += synapse0x2324260();
   input += synapse0x23242a0();
   return input;
}

double NNfunction-NN_6_7::neuron0x2323910() {
   double input = input0x2323910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x23242e0() {
   double input = 2.59539;
   input += synapse0x2324620();
   input += synapse0x2324660();
   input += synapse0x23246a0();
   input += synapse0x23246e0();
   input += synapse0x2324720();
   input += synapse0x2324760();
   input += synapse0x23247a0();
   input += synapse0x23247e0();
   input += synapse0x2324820();
   input += synapse0x2324860();
   input += synapse0x23248a0();
   input += synapse0x23248e0();
   input += synapse0x2324920();
   input += synapse0x2324960();
   input += synapse0x23249a0();
   input += synapse0x23249e0();
   input += synapse0x2324470();
   input += synapse0x23244b0();
   input += synapse0x2324b30();
   input += synapse0x2324b70();
   input += synapse0x2324bb0();
   input += synapse0x2324bf0();
   input += synapse0x2324c30();
   input += synapse0x2324c70();
   return input;
}

double NNfunction-NN_6_7::neuron0x23242e0() {
   double input = input0x23242e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x2324cb0() {
   double input = -3.34158;
   input += synapse0x2324ff0();
   input += synapse0x2325030();
   input += synapse0x2325070();
   input += synapse0x23250b0();
   input += synapse0x23250f0();
   input += synapse0x2325130();
   input += synapse0x2325170();
   input += synapse0x23251b0();
   input += synapse0x23251f0();
   input += synapse0x2325230();
   input += synapse0x2325270();
   input += synapse0x23252b0();
   input += synapse0x23252f0();
   input += synapse0x2325330();
   input += synapse0x2325370();
   input += synapse0x23253b0();
   input += synapse0x2324e40();
   input += synapse0x2324e80();
   input += synapse0x2325500();
   input += synapse0x2325540();
   input += synapse0x2325580();
   input += synapse0x23255c0();
   input += synapse0x2325600();
   input += synapse0x2325640();
   return input;
}

double NNfunction-NN_6_7::neuron0x2324cb0() {
   double input = input0x2324cb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x2325680() {
   double input = -0.102;
   input += synapse0x23259c0();
   input += synapse0x2325a00();
   input += synapse0x2325a40();
   input += synapse0x2325a80();
   input += synapse0x2325ac0();
   input += synapse0x2325b00();
   input += synapse0x2325b40();
   input += synapse0x2325b80();
   input += synapse0x2325bc0();
   input += synapse0x2325c00();
   input += synapse0x2325c40();
   input += synapse0x2325c80();
   input += synapse0x2325cc0();
   input += synapse0x2325d00();
   input += synapse0x2325d40();
   input += synapse0x2325d80();
   input += synapse0x2325810();
   input += synapse0x2325850();
   input += synapse0x2325ed0();
   input += synapse0x2325f10();
   input += synapse0x2325f50();
   input += synapse0x2325f90();
   input += synapse0x2325fd0();
   input += synapse0x2326010();
   return input;
}

double NNfunction-NN_6_7::neuron0x2325680() {
   double input = input0x2325680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x2326050() {
   double input = -0.0667183;
   input += synapse0x2326390();
   input += synapse0x231a960();
   input += synapse0x231a9a0();
   input += synapse0x231a9e0();
   input += synapse0x231ac30();
   input += synapse0x231ac70();
   input += synapse0x231acb0();
   input += synapse0x231af00();
   input += synapse0x231af40();
   input += synapse0x231b190();
   input += synapse0x231b1d0();
   input += synapse0x231b210();
   input += synapse0x231b460();
   input += synapse0x231b4a0();
   input += synapse0x231b6f0();
   input += synapse0x231b730();
   input += synapse0x23261e0();
   input += synapse0x2326220();
   input += synapse0x231b880();
   input += synapse0x231bd90();
   input += synapse0x231bdd0();
   input += synapse0x231be10();
   input += synapse0x231c060();
   input += synapse0x231c0a0();
   return input;
}

double NNfunction-NN_6_7::neuron0x2326050() {
   double input = input0x2326050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x231c0e0() {
   double input = 1.43487;
   input += synapse0x231b950();
   input += synapse0x231b990();
   input += synapse0x231b9d0();
   input += synapse0x231ba10();
   input += synapse0x231c390();
   input += synapse0x23286e0();
   input += synapse0x2328720();
   input += synapse0x2328760();
   input += synapse0x23287a0();
   input += synapse0x23287e0();
   input += synapse0x2328820();
   input += synapse0x2328860();
   input += synapse0x23288a0();
   input += synapse0x23288e0();
   input += synapse0x2328920();
   input += synapse0x2328960();
   input += synapse0x231c270();
   input += synapse0x231c2b0();
   input += synapse0x2328ab0();
   input += synapse0x2328af0();
   input += synapse0x2328b30();
   input += synapse0x2328b70();
   input += synapse0x2328bb0();
   input += synapse0x2328bf0();
   return input;
}

double NNfunction-NN_6_7::neuron0x231c0e0() {
   double input = input0x231c0e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x2328c30() {
   double input = -0.948081;
   input += synapse0x2328f70();
   input += synapse0x2328fb0();
   input += synapse0x2328ff0();
   input += synapse0x2329030();
   input += synapse0x2329070();
   input += synapse0x23290b0();
   input += synapse0x23290f0();
   input += synapse0x2329130();
   input += synapse0x2329170();
   input += synapse0x23291b0();
   input += synapse0x23291f0();
   input += synapse0x2329230();
   input += synapse0x2329270();
   input += synapse0x23292b0();
   input += synapse0x23292f0();
   input += synapse0x2329330();
   input += synapse0x2328dc0();
   input += synapse0x2328e00();
   input += synapse0x2329480();
   input += synapse0x23294c0();
   input += synapse0x2329500();
   input += synapse0x2329540();
   input += synapse0x2329580();
   input += synapse0x23295c0();
   return input;
}

double NNfunction-NN_6_7::neuron0x2328c30() {
   double input = input0x2328c30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x2329600() {
   double input = -0.730138;
   input += synapse0x2329940();
   input += synapse0x2329980();
   input += synapse0x23299c0();
   input += synapse0x2329a00();
   input += synapse0x2329a40();
   input += synapse0x2329a80();
   input += synapse0x2329ac0();
   input += synapse0x2329b00();
   input += synapse0x2329b40();
   input += synapse0x2329b80();
   input += synapse0x2329bc0();
   input += synapse0x2329c00();
   input += synapse0x2329c40();
   input += synapse0x2329c80();
   input += synapse0x2329cc0();
   input += synapse0x2329d00();
   input += synapse0x2329790();
   input += synapse0x23297d0();
   input += synapse0x2329e50();
   input += synapse0x2329e90();
   input += synapse0x2329ed0();
   input += synapse0x2329f10();
   input += synapse0x2329f50();
   input += synapse0x2329f90();
   return input;
}

double NNfunction-NN_6_7::neuron0x2329600() {
   double input = input0x2329600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x2329fd0() {
   double input = 1.61091;
   input += synapse0x232a310();
   input += synapse0x232a350();
   input += synapse0x232a390();
   input += synapse0x232a3d0();
   input += synapse0x232a410();
   input += synapse0x232a450();
   input += synapse0x232a490();
   input += synapse0x232a4d0();
   input += synapse0x232a510();
   input += synapse0x232a550();
   input += synapse0x232a590();
   input += synapse0x232a5d0();
   input += synapse0x232a610();
   input += synapse0x232a650();
   input += synapse0x232a690();
   input += synapse0x232a6d0();
   input += synapse0x232a160();
   input += synapse0x232a1a0();
   input += synapse0x232a820();
   input += synapse0x232a860();
   input += synapse0x232a8a0();
   input += synapse0x232a8e0();
   input += synapse0x232a920();
   input += synapse0x232a960();
   return input;
}

double NNfunction-NN_6_7::neuron0x2329fd0() {
   double input = input0x2329fd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x232a9a0() {
   double input = 0.594004;
   input += synapse0x232ace0();
   input += synapse0x232ad20();
   input += synapse0x232ad60();
   input += synapse0x232ada0();
   input += synapse0x232ade0();
   input += synapse0x232ae20();
   input += synapse0x232ae60();
   input += synapse0x232aea0();
   input += synapse0x232aee0();
   input += synapse0x232af20();
   input += synapse0x232af60();
   input += synapse0x232afa0();
   input += synapse0x232afe0();
   input += synapse0x232b020();
   input += synapse0x232b060();
   input += synapse0x232b0a0();
   input += synapse0x232ab30();
   input += synapse0x232ab70();
   input += synapse0x232b1f0();
   input += synapse0x232b230();
   input += synapse0x232b270();
   input += synapse0x232b2b0();
   input += synapse0x232b2f0();
   input += synapse0x232b330();
   return input;
}

double NNfunction-NN_6_7::neuron0x232a9a0() {
   double input = input0x232a9a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x232b370() {
   double input = -2.38717;
   input += synapse0x232b6b0();
   input += synapse0x232b6f0();
   input += synapse0x232b730();
   input += synapse0x232b770();
   input += synapse0x232b7b0();
   input += synapse0x232b7f0();
   input += synapse0x232b830();
   input += synapse0x232b870();
   input += synapse0x232b8b0();
   input += synapse0x232b8f0();
   input += synapse0x232b930();
   input += synapse0x232b970();
   input += synapse0x232b9b0();
   input += synapse0x232b9f0();
   input += synapse0x232ba30();
   input += synapse0x232ba70();
   input += synapse0x232b500();
   input += synapse0x232b540();
   input += synapse0x232bbc0();
   input += synapse0x232bc00();
   input += synapse0x232bc40();
   input += synapse0x232bc80();
   input += synapse0x232bcc0();
   input += synapse0x232bd00();
   return input;
}

double NNfunction-NN_6_7::neuron0x232b370() {
   double input = input0x232b370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x232bd40() {
   double input = -0.039653;
   input += synapse0x232c080();
   input += synapse0x232c0c0();
   input += synapse0x232c100();
   input += synapse0x232c140();
   input += synapse0x232c180();
   input += synapse0x232c1c0();
   input += synapse0x232c200();
   input += synapse0x232c240();
   input += synapse0x232c280();
   input += synapse0x232c2c0();
   input += synapse0x232c300();
   input += synapse0x232c340();
   input += synapse0x232c380();
   input += synapse0x232c3c0();
   input += synapse0x232c400();
   input += synapse0x232c440();
   input += synapse0x232bed0();
   input += synapse0x232bf10();
   input += synapse0x232c590();
   input += synapse0x232c5d0();
   input += synapse0x232c610();
   input += synapse0x232c650();
   input += synapse0x232c690();
   input += synapse0x232c6d0();
   return input;
}

double NNfunction-NN_6_7::neuron0x232bd40() {
   double input = input0x232bd40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x232c710() {
   double input = 0.166878;
   input += synapse0x232ca50();
   input += synapse0x232ca90();
   input += synapse0x232cad0();
   input += synapse0x232cb10();
   input += synapse0x232cb50();
   input += synapse0x232cb90();
   input += synapse0x232cbd0();
   input += synapse0x232cc10();
   input += synapse0x232cc50();
   input += synapse0x232cc90();
   input += synapse0x232ccd0();
   input += synapse0x232cd10();
   input += synapse0x232cd50();
   input += synapse0x232cd90();
   input += synapse0x232cdd0();
   input += synapse0x232ce10();
   input += synapse0x232c8a0();
   input += synapse0x232c8e0();
   input += synapse0x232cf60();
   input += synapse0x232cfa0();
   input += synapse0x232cfe0();
   input += synapse0x232d020();
   input += synapse0x232d060();
   input += synapse0x232d0a0();
   return input;
}

double NNfunction-NN_6_7::neuron0x232c710() {
   double input = input0x232c710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x232d0e0() {
   double input = 0.9861;
   input += synapse0x2315b50();
   input += synapse0x2315b90();
   input += synapse0x2315bd0();
   input += synapse0x2315c10();
   input += synapse0x2315c50();
   input += synapse0x2315c90();
   input += synapse0x2315cd0();
   input += synapse0x2315d10();
   input += synapse0x232d830();
   input += synapse0x232d870();
   input += synapse0x232d8b0();
   input += synapse0x232d8f0();
   input += synapse0x232d930();
   input += synapse0x232d970();
   input += synapse0x232d9b0();
   input += synapse0x232d9f0();
   input += synapse0x232d270();
   input += synapse0x232d2b0();
   input += synapse0x232db40();
   input += synapse0x232db80();
   input += synapse0x232dbc0();
   input += synapse0x232dc00();
   input += synapse0x232dc40();
   input += synapse0x232dc80();
   return input;
}

double NNfunction-NN_6_7::neuron0x232d0e0() {
   double input = input0x232d0e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x232dcc0() {
   double input = 0.94886;
   input += synapse0x232e000();
   input += synapse0x232e040();
   input += synapse0x232e080();
   input += synapse0x232e0c0();
   input += synapse0x232e100();
   input += synapse0x232e140();
   input += synapse0x232e180();
   input += synapse0x232e1c0();
   input += synapse0x232e200();
   input += synapse0x232e240();
   input += synapse0x232e280();
   input += synapse0x232e2c0();
   input += synapse0x232e300();
   input += synapse0x232e340();
   input += synapse0x232e380();
   input += synapse0x232e3c0();
   input += synapse0x232de50();
   input += synapse0x232de90();
   input += synapse0x232e510();
   input += synapse0x232e550();
   input += synapse0x232e590();
   input += synapse0x232e5d0();
   input += synapse0x232e610();
   input += synapse0x232e650();
   return input;
}

double NNfunction-NN_6_7::neuron0x232dcc0() {
   double input = input0x232dcc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x232e690() {
   double input = 0.676098;
   input += synapse0x232e9d0();
   input += synapse0x232ea10();
   input += synapse0x232ea50();
   input += synapse0x232ea90();
   input += synapse0x232ead0();
   input += synapse0x232eb10();
   input += synapse0x232eb50();
   input += synapse0x232eb90();
   input += synapse0x232ebd0();
   input += synapse0x232ec10();
   input += synapse0x232ec50();
   input += synapse0x232ec90();
   input += synapse0x232ecd0();
   input += synapse0x232ed10();
   input += synapse0x232ed50();
   input += synapse0x232ed90();
   input += synapse0x232e820();
   input += synapse0x232e860();
   input += synapse0x231f390();
   input += synapse0x231f3d0();
   input += synapse0x231f410();
   input += synapse0x231f450();
   input += synapse0x231f490();
   input += synapse0x231f4d0();
   return input;
}

double NNfunction-NN_6_7::neuron0x232e690() {
   double input = input0x232e690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x231f510() {
   double input = -0.634925;
   input += synapse0x231f850();
   input += synapse0x231f890();
   input += synapse0x231f8d0();
   input += synapse0x231f910();
   input += synapse0x231f950();
   input += synapse0x231f990();
   input += synapse0x231f9d0();
   input += synapse0x231fa10();
   input += synapse0x231fa50();
   input += synapse0x231fa90();
   input += synapse0x231fad0();
   input += synapse0x231fb10();
   input += synapse0x231fb50();
   input += synapse0x231fb90();
   input += synapse0x231fbd0();
   input += synapse0x231fc10();
   input += synapse0x231f6a0();
   input += synapse0x231f6e0();
   input += synapse0x231fd60();
   input += synapse0x231fda0();
   input += synapse0x231fde0();
   input += synapse0x231fe20();
   input += synapse0x231fe60();
   input += synapse0x231fea0();
   return input;
}

double NNfunction-NN_6_7::neuron0x231f510() {
   double input = input0x231f510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x231fee0() {
   double input = -0.507428;
   input += synapse0x2320220();
   input += synapse0x2320260();
   input += synapse0x23202a0();
   input += synapse0x23202e0();
   input += synapse0x2320320();
   input += synapse0x2320360();
   input += synapse0x23203a0();
   input += synapse0x23203e0();
   input += synapse0x2320420();
   input += synapse0x2320460();
   input += synapse0x23204a0();
   input += synapse0x23204e0();
   input += synapse0x2320520();
   input += synapse0x2320560();
   input += synapse0x23205a0();
   input += synapse0x23205e0();
   input += synapse0x2320070();
   input += synapse0x23200b0();
   input += synapse0x2320730();
   input += synapse0x2320770();
   input += synapse0x23207b0();
   input += synapse0x23207f0();
   input += synapse0x2320830();
   input += synapse0x2320870();
   return input;
}

double NNfunction-NN_6_7::neuron0x231fee0() {
   double input = input0x231fee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x23208b0() {
   double input = -0.91677;
   input += synapse0x2320bf0();
   input += synapse0x2320c30();
   input += synapse0x2320c70();
   input += synapse0x2320cb0();
   input += synapse0x2320cf0();
   input += synapse0x2320d30();
   input += synapse0x2320d70();
   input += synapse0x2320db0();
   input += synapse0x2320df0();
   input += synapse0x2320e30();
   input += synapse0x2320e70();
   input += synapse0x2320eb0();
   input += synapse0x2320ef0();
   input += synapse0x2320f30();
   input += synapse0x2320f70();
   input += synapse0x2320fb0();
   input += synapse0x2320a40();
   input += synapse0x2320a80();
   input += synapse0x2321100();
   input += synapse0x2321140();
   input += synapse0x2321180();
   input += synapse0x23211c0();
   input += synapse0x2321200();
   input += synapse0x2321240();
   return input;
}

double NNfunction-NN_6_7::neuron0x23208b0() {
   double input = input0x23208b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x2332ef0() {
   double input = -1.34153;
   input += synapse0x2333110();
   input += synapse0x2333150();
   input += synapse0x2333190();
   input += synapse0x23331d0();
   input += synapse0x2333210();
   input += synapse0x2333250();
   input += synapse0x2333290();
   input += synapse0x23332d0();
   input += synapse0x2333310();
   input += synapse0x2333350();
   input += synapse0x2333390();
   input += synapse0x23333d0();
   input += synapse0x2333410();
   input += synapse0x2333450();
   input += synapse0x2333490();
   input += synapse0x23334d0();
   input += synapse0x2321280();
   input += synapse0x23212c0();
   input += synapse0x2333620();
   input += synapse0x2333660();
   input += synapse0x23336a0();
   input += synapse0x23336e0();
   input += synapse0x2333720();
   input += synapse0x2333760();
   return input;
}

double NNfunction-NN_6_7::neuron0x2332ef0() {
   double input = input0x2332ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x23337a0() {
   double input = -0.0577156;
   input += synapse0x2333ae0();
   input += synapse0x2333b20();
   input += synapse0x2333b60();
   input += synapse0x2333ba0();
   input += synapse0x2333be0();
   input += synapse0x2333c20();
   input += synapse0x2333c60();
   input += synapse0x2333ca0();
   input += synapse0x2333ce0();
   input += synapse0x2333d20();
   input += synapse0x2333d60();
   input += synapse0x2333da0();
   input += synapse0x2333de0();
   input += synapse0x2333e20();
   input += synapse0x2333e60();
   input += synapse0x2333ea0();
   input += synapse0x2333930();
   input += synapse0x2333970();
   input += synapse0x2333ff0();
   input += synapse0x2334030();
   input += synapse0x2334070();
   input += synapse0x23340b0();
   input += synapse0x23340f0();
   input += synapse0x2334130();
   return input;
}

double NNfunction-NN_6_7::neuron0x23337a0() {
   double input = input0x23337a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x2334170() {
   double input = -0.957377;
   input += synapse0x23344b0();
   input += synapse0x23344f0();
   input += synapse0x2334530();
   input += synapse0x2334570();
   input += synapse0x23345b0();
   input += synapse0x23345f0();
   input += synapse0x2334630();
   input += synapse0x2334670();
   input += synapse0x23346b0();
   input += synapse0x23346f0();
   input += synapse0x2334730();
   input += synapse0x2334770();
   input += synapse0x23347b0();
   input += synapse0x23347f0();
   input += synapse0x2334830();
   input += synapse0x2334870();
   input += synapse0x2334300();
   input += synapse0x2334340();
   input += synapse0x23349c0();
   input += synapse0x2334a00();
   input += synapse0x2334a40();
   input += synapse0x2334a80();
   input += synapse0x2334ac0();
   input += synapse0x2334b00();
   return input;
}

double NNfunction-NN_6_7::neuron0x2334170() {
   double input = input0x2334170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x2334b40() {
   double input = 0.394935;
   input += synapse0x2334e80();
   input += synapse0x2334ec0();
   input += synapse0x2334f00();
   input += synapse0x2334f40();
   input += synapse0x2334f80();
   input += synapse0x2334fc0();
   input += synapse0x2335000();
   input += synapse0x2335040();
   input += synapse0x2335080();
   input += synapse0x23350c0();
   input += synapse0x2335100();
   input += synapse0x2335140();
   input += synapse0x2335180();
   input += synapse0x23351c0();
   input += synapse0x2335200();
   input += synapse0x2335240();
   input += synapse0x2334cd0();
   input += synapse0x2334d10();
   input += synapse0x2335390();
   input += synapse0x23353d0();
   input += synapse0x2335410();
   input += synapse0x2335450();
   input += synapse0x2335490();
   input += synapse0x23354d0();
   return input;
}

double NNfunction-NN_6_7::neuron0x2334b40() {
   double input = input0x2334b40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x233bd40() {
   double input = -0.67399;
   input += synapse0x2311a70();
   input += synapse0x2311ab0();
   input += synapse0x2312f80();
   input += synapse0x2312fc0();
   input += synapse0x2313950();
   input += synapse0x2313990();
   input += synapse0x2314720();
   input += synapse0x2314760();
   input += synapse0x23150f0();
   input += synapse0x2315130();
   input += synapse0x2315ac0();
   input += synapse0x2315b00();
   input += synapse0x23165a0();
   input += synapse0x23165e0();
   input += synapse0x2316f70();
   input += synapse0x2316fb0();
   input += synapse0x2314050();
   input += synapse0x2314090();
   input += synapse0x2318b20();
   input += synapse0x2318b60();
   input += synapse0x23194f0();
   input += synapse0x2319530();
   input += synapse0x2319ec0();
   input += synapse0x2319f00();
   input += synapse0x231a890();
   input += synapse0x231a8d0();
   input += synapse0x230ea00();
   input += synapse0x230ea40();
   input += synapse0x231c980();
   input += synapse0x231c9c0();
   input += synapse0x231d350();
   input += synapse0x231d390();
   input += synapse0x231dd20();
   input += synapse0x231dd60();
   input += synapse0x231e6f0();
   input += synapse0x231e730();
   input += synapse0x231f0c0();
   input += synapse0x231f100();
   input += synapse0x2317c10();
   input += synapse0x2317c50();
   input += synapse0x23214c0();
   input += synapse0x2321500();
   input += synapse0x2321e50();
   input += synapse0x2321e90();
   input += synapse0x2322820();
   input += synapse0x2322860();
   input += synapse0x23231f0();
   input += synapse0x2323230();
   input += synapse0x2323bc0();
   input += synapse0x2323c00();
   return input;
}

double NNfunction-NN_6_7::neuron0x233bd40() {
   double input = input0x233bd40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x233c0e0() {
   double input = 0.981612;
   input += synapse0x2326300();
   input += synapse0x2326340();
   input += synapse0x231b8c0();
   input += synapse0x231b900();
   input += synapse0x2328ee0();
   input += synapse0x2328f20();
   input += synapse0x23298b0();
   input += synapse0x23298f0();
   input += synapse0x232a280();
   input += synapse0x232a2c0();
   input += synapse0x232ac50();
   input += synapse0x232ac90();
   input += synapse0x232b620();
   input += synapse0x232b660();
   input += synapse0x232bff0();
   input += synapse0x232c030();
   input += synapse0x232c9c0();
   input += synapse0x232ca00();
   input += synapse0x232d390();
   input += synapse0x232d3d0();
   input += synapse0x232df70();
   input += synapse0x232dfb0();
   input += synapse0x232e940();
   input += synapse0x232e980();
   input += synapse0x231f7c0();
   input += synapse0x231f800();
   input += synapse0x2320190();
   input += synapse0x23201d0();
   input += synapse0x2320b60();
   input += synapse0x2320ba0();
   input += synapse0x2333080();
   input += synapse0x23330c0();
   input += synapse0x2333a50();
   input += synapse0x2333a90();
   input += synapse0x2334420();
   input += synapse0x2334460();
   input += synapse0x2334df0();
   input += synapse0x2334e30();
   input += synapse0x2310ce0();
   input += synapse0x2310d20();
   input += synapse0x2324590();
   input += synapse0x23245d0();
   input += synapse0x2335510();
   input += synapse0x2335550();
   input += synapse0x2335590();
   input += synapse0x23355d0();
   input += synapse0x233c480();
   input += synapse0x233c4c0();
   input += synapse0x233c500();
   input += synapse0x233c540();
   return input;
}

double NNfunction-NN_6_7::neuron0x233c0e0() {
   double input = input0x233c0e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x233c580() {
   double input = -1.47822;
   input += synapse0x233c8c0();
   input += synapse0x233c900();
   input += synapse0x233c940();
   input += synapse0x233c980();
   input += synapse0x233c9c0();
   input += synapse0x233ca00();
   input += synapse0x233ca40();
   input += synapse0x233ca80();
   input += synapse0x233cac0();
   input += synapse0x233cb00();
   input += synapse0x233cb40();
   input += synapse0x233cb80();
   input += synapse0x233cbc0();
   input += synapse0x233cc00();
   input += synapse0x233cc40();
   input += synapse0x233cc80();
   input += synapse0x233c710();
   input += synapse0x233c750();
   input += synapse0x233cdd0();
   input += synapse0x233ce10();
   input += synapse0x233ce50();
   input += synapse0x233ce90();
   input += synapse0x233ced0();
   input += synapse0x233cf10();
   input += synapse0x233cf50();
   input += synapse0x233cf90();
   input += synapse0x233cfd0();
   input += synapse0x233d010();
   input += synapse0x233d050();
   input += synapse0x233d090();
   input += synapse0x233d0d0();
   input += synapse0x233d110();
   input += synapse0x233ccc0();
   input += synapse0x233cd00();
   input += synapse0x233cd40();
   input += synapse0x233cd80();
   input += synapse0x233d360();
   input += synapse0x233d3a0();
   input += synapse0x233d3e0();
   input += synapse0x233d420();
   input += synapse0x233d460();
   input += synapse0x233d4a0();
   input += synapse0x233d4e0();
   input += synapse0x233d520();
   input += synapse0x233d560();
   input += synapse0x233d5a0();
   input += synapse0x233d5e0();
   input += synapse0x233d620();
   input += synapse0x233d660();
   input += synapse0x233d6a0();
   return input;
}

double NNfunction-NN_6_7::neuron0x233c580() {
   double input = input0x233c580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x233d6e0() {
   double input = 0.233569;
   input += synapse0x233da20();
   input += synapse0x233da60();
   input += synapse0x233daa0();
   input += synapse0x233dae0();
   input += synapse0x233db20();
   input += synapse0x233db60();
   input += synapse0x233dba0();
   input += synapse0x233dbe0();
   input += synapse0x233dc20();
   input += synapse0x233dc60();
   input += synapse0x233dca0();
   input += synapse0x233dce0();
   input += synapse0x233dd20();
   input += synapse0x233dd60();
   input += synapse0x233dda0();
   input += synapse0x233dde0();
   input += synapse0x233d870();
   input += synapse0x233d8b0();
   input += synapse0x233df30();
   input += synapse0x233df70();
   input += synapse0x233dfb0();
   input += synapse0x233dff0();
   input += synapse0x233e030();
   input += synapse0x233e070();
   input += synapse0x233e0b0();
   input += synapse0x233e0f0();
   input += synapse0x233e130();
   input += synapse0x233e170();
   input += synapse0x233e1b0();
   input += synapse0x233e1f0();
   input += synapse0x233e230();
   input += synapse0x233e270();
   input += synapse0x233de20();
   input += synapse0x233de60();
   input += synapse0x233dea0();
   input += synapse0x233dee0();
   input += synapse0x233e4c0();
   input += synapse0x233e500();
   input += synapse0x233e540();
   input += synapse0x233e580();
   input += synapse0x233e5c0();
   input += synapse0x233e600();
   input += synapse0x233e640();
   input += synapse0x233e680();
   input += synapse0x233e6c0();
   input += synapse0x233e700();
   input += synapse0x233e740();
   input += synapse0x233e780();
   input += synapse0x233e7c0();
   input += synapse0x233e800();
   return input;
}

double NNfunction-NN_6_7::neuron0x233d6e0() {
   double input = input0x233d6e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x233e840() {
   double input = 0.459569;
   input += synapse0x233eb80();
   input += synapse0x233ebc0();
   input += synapse0x233ec00();
   input += synapse0x233ec40();
   input += synapse0x233ec80();
   input += synapse0x233ecc0();
   input += synapse0x233ed00();
   input += synapse0x233ed40();
   input += synapse0x233ed80();
   input += synapse0x233edc0();
   input += synapse0x233ee00();
   input += synapse0x233ee40();
   input += synapse0x233ee80();
   input += synapse0x233eec0();
   input += synapse0x233ef00();
   input += synapse0x233ef40();
   input += synapse0x233e9d0();
   input += synapse0x233ea10();
   input += synapse0x233f090();
   input += synapse0x233f0d0();
   input += synapse0x233f110();
   input += synapse0x233f150();
   input += synapse0x233f190();
   input += synapse0x233f1d0();
   input += synapse0x233f210();
   input += synapse0x233f250();
   input += synapse0x233f290();
   input += synapse0x233f2d0();
   input += synapse0x233f310();
   input += synapse0x233f350();
   input += synapse0x233f390();
   input += synapse0x233f3d0();
   input += synapse0x233ef80();
   input += synapse0x233efc0();
   input += synapse0x233f000();
   input += synapse0x233f040();
   input += synapse0x233f620();
   input += synapse0x233f660();
   input += synapse0x233f6a0();
   input += synapse0x233f6e0();
   input += synapse0x233f720();
   input += synapse0x233f760();
   input += synapse0x233f7a0();
   input += synapse0x233f7e0();
   input += synapse0x233f820();
   input += synapse0x233f860();
   input += synapse0x233f8a0();
   input += synapse0x233f8e0();
   input += synapse0x233f920();
   input += synapse0x233f960();
   return input;
}

double NNfunction-NN_6_7::neuron0x233e840() {
   double input = input0x233e840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_6_7::input0x233f9a0() {
   double input = -2.96692;
   input += synapse0x2310a80();
   input += synapse0x233fbc0();
   input += synapse0x233fc00();
   input += synapse0x233fc40();
   input += synapse0x233fc80();
   return input;
}

double NNfunction-NN_6_7::neuron0x233f9a0() {
   double input = input0x233f9a0();
   return (input * 1)+0;
}

double NNfunction-NN_6_7::synapse0x20cb8d0() {
   return (neuron0x230ba60()*0.0930517);
}

double NNfunction-NN_6_7::synapse0x230b920() {
   return (neuron0x230bda0()*-0.0317105);
}

double NNfunction-NN_6_7::synapse0x230b960() {
   return (neuron0x230c0e0()*-1.07831);
}

double NNfunction-NN_6_7::synapse0x2310d70() {
   return (neuron0x230c420()*0.0751205);
}

double NNfunction-NN_6_7::synapse0x2310db0() {
   return (neuron0x230c760()*-0.0345645);
}

double NNfunction-NN_6_7::synapse0x2310df0() {
   return (neuron0x230caa0()*0.0269185);
}

double NNfunction-NN_6_7::synapse0x2310e30() {
   return (neuron0x230cde0()*0.0416989);
}

double NNfunction-NN_6_7::synapse0x2310e70() {
   return (neuron0x230d120()*0.00326403);
}

double NNfunction-NN_6_7::synapse0x2310eb0() {
   return (neuron0x230d460()*0.0154388);
}

double NNfunction-NN_6_7::synapse0x2310ef0() {
   return (neuron0x230d7a0()*0.0746877);
}

double NNfunction-NN_6_7::synapse0x2310f30() {
   return (neuron0x230dae0()*-0.000313698);
}

double NNfunction-NN_6_7::synapse0x2310f70() {
   return (neuron0x230de20()*-0.812799);
}

double NNfunction-NN_6_7::synapse0x2310fb0() {
   return (neuron0x230e160()*0.0353182);
}

double NNfunction-NN_6_7::synapse0x2310ff0() {
   return (neuron0x230e4a0()*0.00340467);
}

double NNfunction-NN_6_7::synapse0x2311030() {
   return (neuron0x230e7e0()*-0.0606798);
}

double NNfunction-NN_6_7::synapse0x2311070() {
   return (neuron0x230eb20()*0.0394511);
}

double NNfunction-NN_6_7::synapse0x230b890() {
   return (neuron0x230ee60()*0.0722287);
}

double NNfunction-NN_6_7::synapse0x230b8d0() {
   return (neuron0x230f3c0()*-0.00444455);
}

double NNfunction-NN_6_7::synapse0x20bd170() {
   return (neuron0x230f5e0()*-0.041188);
}

double NNfunction-NN_6_7::synapse0x20bd1b0() {
   return (neuron0x230f920()*0.0188428);
}

double NNfunction-NN_6_7::synapse0x23112d0() {
   return (neuron0x230fc60()*0.06325);
}

double NNfunction-NN_6_7::synapse0x2311310() {
   return (neuron0x230ffa0()*0.023171);
}

double NNfunction-NN_6_7::synapse0x2311350() {
   return (neuron0x23102e0()*-0.00427814);
}

double NNfunction-NN_6_7::synapse0x2311390() {
   return (neuron0x2310620()*-0.492189);
}

double NNfunction-NN_6_7::synapse0x2311710() {
   return (neuron0x230ba60()*0.403404);
}

double NNfunction-NN_6_7::synapse0x2311750() {
   return (neuron0x230bda0()*0.0070446);
}

double NNfunction-NN_6_7::synapse0x2311790() {
   return (neuron0x230c0e0()*0.200682);
}

double NNfunction-NN_6_7::synapse0x23117d0() {
   return (neuron0x230c420()*0.0598555);
}

double NNfunction-NN_6_7::synapse0x2311810() {
   return (neuron0x230c760()*-0.0776139);
}

double NNfunction-NN_6_7::synapse0x2311850() {
   return (neuron0x230caa0()*0.0773142);
}

double NNfunction-NN_6_7::synapse0x2311890() {
   return (neuron0x230cde0()*0.254264);
}

double NNfunction-NN_6_7::synapse0x23118d0() {
   return (neuron0x230d120()*0.166445);
}

double NNfunction-NN_6_7::synapse0x2311910() {
   return (neuron0x230d460()*0.0334151);
}

double NNfunction-NN_6_7::synapse0x23111c0() {
   return (neuron0x230d7a0()*-0.0566979);
}

double NNfunction-NN_6_7::synapse0x2311200() {
   return (neuron0x230dae0()*-0.0621279);
}

double NNfunction-NN_6_7::synapse0x2311240() {
   return (neuron0x230de20()*-0.245998);
}

double NNfunction-NN_6_7::synapse0x2311280() {
   return (neuron0x230e160()*-0.164642);
}

double NNfunction-NN_6_7::synapse0x2311b60() {
   return (neuron0x230e4a0()*0.00518771);
}

double NNfunction-NN_6_7::synapse0x2311ba0() {
   return (neuron0x230e7e0()*0.0786585);
}

double NNfunction-NN_6_7::synapse0x2311be0() {
   return (neuron0x230eb20()*-0.115752);
}

double NNfunction-NN_6_7::synapse0x2311560() {
   return (neuron0x230ee60()*-0.0138319);
}

double NNfunction-NN_6_7::synapse0x23115a0() {
   return (neuron0x230f3c0()*-0.0311316);
}

double NNfunction-NN_6_7::synapse0x2311d30() {
   return (neuron0x230f5e0()*-0.0446781);
}

double NNfunction-NN_6_7::synapse0x2311d70() {
   return (neuron0x230f920()*0.133062);
}

double NNfunction-NN_6_7::synapse0x2311db0() {
   return (neuron0x230fc60()*-0.069259);
}

double NNfunction-NN_6_7::synapse0x2311df0() {
   return (neuron0x230ffa0()*0.0682843);
}

double NNfunction-NN_6_7::synapse0x2311e30() {
   return (neuron0x23102e0()*0.0269908);
}

double NNfunction-NN_6_7::synapse0x2311e70() {
   return (neuron0x2310620()*-0.54985);
}

double NNfunction-NN_6_7::synapse0x23121f0() {
   return (neuron0x230ba60()*0.0281937);
}

double NNfunction-NN_6_7::synapse0x2312230() {
   return (neuron0x230bda0()*-0.0153272);
}

double NNfunction-NN_6_7::synapse0x2312270() {
   return (neuron0x230c0e0()*0.730248);
}

double NNfunction-NN_6_7::synapse0x23122b0() {
   return (neuron0x230c420()*-0.0768543);
}

double NNfunction-NN_6_7::synapse0x23122f0() {
   return (neuron0x230c760()*-0.00731928);
}

double NNfunction-NN_6_7::synapse0x2312330() {
   return (neuron0x230caa0()*-0.00678177);
}

double NNfunction-NN_6_7::synapse0x2312370() {
   return (neuron0x230cde0()*0.0250222);
}

double NNfunction-NN_6_7::synapse0x23123b0() {
   return (neuron0x230d120()*0.016276);
}

double NNfunction-NN_6_7::synapse0x23123f0() {
   return (neuron0x230d460()*-0.00770664);
}

double NNfunction-NN_6_7::synapse0x2312430() {
   return (neuron0x230d7a0()*1.15916e-05);
}

double NNfunction-NN_6_7::synapse0x2312470() {
   return (neuron0x230dae0()*-0.0501033);
}

double NNfunction-NN_6_7::synapse0x23124b0() {
   return (neuron0x230de20()*1.21052);
}

double NNfunction-NN_6_7::synapse0x23124f0() {
   return (neuron0x230e160()*0.0161686);
}

double NNfunction-NN_6_7::synapse0x2312530() {
   return (neuron0x230e4a0()*-0.021775);
}

double NNfunction-NN_6_7::synapse0x2312570() {
   return (neuron0x230e7e0()*0.00913645);
}

double NNfunction-NN_6_7::synapse0x23125b0() {
   return (neuron0x230eb20()*-0.00582028);
}

double NNfunction-NN_6_7::synapse0x2312040() {
   return (neuron0x230ee60()*-0.00926711);
}

double NNfunction-NN_6_7::synapse0x2312080() {
   return (neuron0x230f3c0()*0.0455637);
}

double NNfunction-NN_6_7::synapse0x20cafc0() {
   return (neuron0x230f5e0()*0.00906756);
}

double NNfunction-NN_6_7::synapse0x20cb000() {
   return (neuron0x230f920()*0.00567623);
}

double NNfunction-NN_6_7::synapse0x22faaf0() {
   return (neuron0x230fc60()*-0.00984186);
}

double NNfunction-NN_6_7::synapse0x22fab30() {
   return (neuron0x230ffa0()*0.00323488);
}

double NNfunction-NN_6_7::synapse0x22fab70() {
   return (neuron0x23102e0()*0.0277863);
}

double NNfunction-NN_6_7::synapse0x230b9a0() {
   return (neuron0x2310620()*-1.76269);
}

double NNfunction-NN_6_7::synapse0x2311b00() {
   return (neuron0x230ba60()*-0.0275552);
}

double NNfunction-NN_6_7::synapse0x230b9e0() {
   return (neuron0x230bda0()*-0.0132232);
}

double NNfunction-NN_6_7::synapse0x230ba20() {
   return (neuron0x230c0e0()*-0.169583);
}

double NNfunction-NN_6_7::synapse0x2312700() {
   return (neuron0x230c420()*2.10406);
}

double NNfunction-NN_6_7::synapse0x2312740() {
   return (neuron0x230c760()*0.0211158);
}

double NNfunction-NN_6_7::synapse0x2312780() {
   return (neuron0x230caa0()*0.0072019);
}

double NNfunction-NN_6_7::synapse0x23127c0() {
   return (neuron0x230cde0()*0.0203913);
}

double NNfunction-NN_6_7::synapse0x2312800() {
   return (neuron0x230d120()*-0.0185246);
}

double NNfunction-NN_6_7::synapse0x2312840() {
   return (neuron0x230d460()*0.00644893);
}

double NNfunction-NN_6_7::synapse0x2312880() {
   return (neuron0x230d7a0()*-0.00737341);
}

double NNfunction-NN_6_7::synapse0x23128c0() {
   return (neuron0x230dae0()*-0.0349825);
}

double NNfunction-NN_6_7::synapse0x2312900() {
   return (neuron0x230de20()*0.307083);
}

double NNfunction-NN_6_7::synapse0x2312940() {
   return (neuron0x230e160()*0.0111766);
}

double NNfunction-NN_6_7::synapse0x2312980() {
   return (neuron0x230e4a0()*0.0226967);
}

double NNfunction-NN_6_7::synapse0x23129c0() {
   return (neuron0x230e7e0()*-0.0375077);
}

double NNfunction-NN_6_7::synapse0x2312a00() {
   return (neuron0x230eb20()*-0.018919);
}

double NNfunction-NN_6_7::synapse0x2311950() {
   return (neuron0x230ee60()*0.00739201);
}

double NNfunction-NN_6_7::synapse0x2311990() {
   return (neuron0x230f3c0()*-0.0152627);
}

double NNfunction-NN_6_7::synapse0x2312b50() {
   return (neuron0x230f5e0()*-0.0217955);
}

double NNfunction-NN_6_7::synapse0x2312b90() {
   return (neuron0x230f920()*0.00938127);
}

double NNfunction-NN_6_7::synapse0x2312bd0() {
   return (neuron0x230fc60()*0.0214643);
}

double NNfunction-NN_6_7::synapse0x2312c10() {
   return (neuron0x230ffa0()*0.0108068);
}

double NNfunction-NN_6_7::synapse0x2312c50() {
   return (neuron0x23102e0()*-0.00147489);
}

double NNfunction-NN_6_7::synapse0x2312c90() {
   return (neuron0x2310620()*-0.0695874);
}

double NNfunction-NN_6_7::synapse0x2313010() {
   return (neuron0x230ba60()*-0.0209706);
}

double NNfunction-NN_6_7::synapse0x2313050() {
   return (neuron0x230bda0()*-0.00176722);
}

double NNfunction-NN_6_7::synapse0x2313090() {
   return (neuron0x230c0e0()*1.60046);
}

double NNfunction-NN_6_7::synapse0x23130d0() {
   return (neuron0x230c420()*0.0867986);
}

double NNfunction-NN_6_7::synapse0x2313110() {
   return (neuron0x230c760()*-0.00942849);
}

double NNfunction-NN_6_7::synapse0x2313150() {
   return (neuron0x230caa0()*0.0110359);
}

double NNfunction-NN_6_7::synapse0x2313190() {
   return (neuron0x230cde0()*-0.00995879);
}

double NNfunction-NN_6_7::synapse0x23131d0() {
   return (neuron0x230d120()*0.0271762);
}

double NNfunction-NN_6_7::synapse0x2313210() {
   return (neuron0x230d460()*-0.00993942);
}

double NNfunction-NN_6_7::synapse0x2313250() {
   return (neuron0x230d7a0()*0.00327015);
}

double NNfunction-NN_6_7::synapse0x2313290() {
   return (neuron0x230dae0()*0.0121381);
}

double NNfunction-NN_6_7::synapse0x23132d0() {
   return (neuron0x230de20()*-0.603596);
}

double NNfunction-NN_6_7::synapse0x2313310() {
   return (neuron0x230e160()*0.0589414);
}

double NNfunction-NN_6_7::synapse0x2313350() {
   return (neuron0x230e4a0()*0.0157326);
}

double NNfunction-NN_6_7::synapse0x2313390() {
   return (neuron0x230e7e0()*0.00948408);
}

double NNfunction-NN_6_7::synapse0x23133d0() {
   return (neuron0x230eb20()*0.0124369);
}

double NNfunction-NN_6_7::synapse0x2312e60() {
   return (neuron0x230ee60()*0.00537466);
}

double NNfunction-NN_6_7::synapse0x2312ea0() {
   return (neuron0x230f3c0()*0.0122404);
}

double NNfunction-NN_6_7::synapse0x2313520() {
   return (neuron0x230f5e0()*0.022993);
}

double NNfunction-NN_6_7::synapse0x2313560() {
   return (neuron0x230f920()*0.00690654);
}

double NNfunction-NN_6_7::synapse0x23135a0() {
   return (neuron0x230fc60()*-0.00334887);
}

double NNfunction-NN_6_7::synapse0x23135e0() {
   return (neuron0x230ffa0()*-0.013824);
}

double NNfunction-NN_6_7::synapse0x2313620() {
   return (neuron0x23102e0()*-0.0018421);
}

double NNfunction-NN_6_7::synapse0x2313660() {
   return (neuron0x2310620()*-0.196136);
}

double NNfunction-NN_6_7::synapse0x23139e0() {
   return (neuron0x230ba60()*-0.0687274);
}

double NNfunction-NN_6_7::synapse0x2313a20() {
   return (neuron0x230bda0()*-0.0185901);
}

double NNfunction-NN_6_7::synapse0x2313a60() {
   return (neuron0x230c0e0()*0.118199);
}

double NNfunction-NN_6_7::synapse0x2313aa0() {
   return (neuron0x230c420()*-0.129999);
}

double NNfunction-NN_6_7::synapse0x2313ae0() {
   return (neuron0x230c760()*0.478118);
}

double NNfunction-NN_6_7::synapse0x2313b20() {
   return (neuron0x230caa0()*0.109291);
}

double NNfunction-NN_6_7::synapse0x2313b60() {
   return (neuron0x230cde0()*0.0457905);
}

double NNfunction-NN_6_7::synapse0x2313ba0() {
   return (neuron0x230d120()*0.308868);
}

double NNfunction-NN_6_7::synapse0x2313be0() {
   return (neuron0x230d460()*0.000353777);
}

double NNfunction-NN_6_7::synapse0x20cb330() {
   return (neuron0x230d7a0()*0.117049);
}

double NNfunction-NN_6_7::synapse0x20cb370() {
   return (neuron0x230dae0()*-0.429252);
}

double NNfunction-NN_6_7::synapse0x20cb3b0() {
   return (neuron0x230de20()*-0.144291);
}

double NNfunction-NN_6_7::synapse0x20cb3f0() {
   return (neuron0x230e160()*-0.162461);
}

double NNfunction-NN_6_7::synapse0x20cb430() {
   return (neuron0x230e4a0()*0.00809645);
}

double NNfunction-NN_6_7::synapse0x20cb470() {
   return (neuron0x230e7e0()*0.0134277);
}

double NNfunction-NN_6_7::synapse0x20cb4b0() {
   return (neuron0x230eb20()*-0.150726);
}

double NNfunction-NN_6_7::synapse0x2313830() {
   return (neuron0x230ee60()*0.0387968);
}

double NNfunction-NN_6_7::synapse0x2313870() {
   return (neuron0x230f3c0()*-0.113888);
}

double NNfunction-NN_6_7::synapse0x20cb600() {
   return (neuron0x230f5e0()*-0.156842);
}

double NNfunction-NN_6_7::synapse0x20cb640() {
   return (neuron0x230f920()*0.219431);
}

double NNfunction-NN_6_7::synapse0x20cb680() {
   return (neuron0x230fc60()*0.00216457);
}

double NNfunction-NN_6_7::synapse0x20cb6c0() {
   return (neuron0x230ffa0()*0.0906418);
}

double NNfunction-NN_6_7::synapse0x20cb700() {
   return (neuron0x23102e0()*0.0938797);
}

double NNfunction-NN_6_7::synapse0x2314430() {
   return (neuron0x2310620()*-0.00378564);
}

double NNfunction-NN_6_7::synapse0x23147b0() {
   return (neuron0x230ba60()*0.00193768);
}

double NNfunction-NN_6_7::synapse0x23147f0() {
   return (neuron0x230bda0()*-0.0294214);
}

double NNfunction-NN_6_7::synapse0x2314830() {
   return (neuron0x230c0e0()*-0.286459);
}

double NNfunction-NN_6_7::synapse0x2314870() {
   return (neuron0x230c420()*0.0101922);
}

double NNfunction-NN_6_7::synapse0x23148b0() {
   return (neuron0x230c760()*-0.0264679);
}

double NNfunction-NN_6_7::synapse0x23148f0() {
   return (neuron0x230caa0()*0.010671);
}

double NNfunction-NN_6_7::synapse0x2314930() {
   return (neuron0x230cde0()*-0.00804068);
}

double NNfunction-NN_6_7::synapse0x2314970() {
   return (neuron0x230d120()*0.00909286);
}

double NNfunction-NN_6_7::synapse0x23149b0() {
   return (neuron0x230d460()*0.011228);
}

double NNfunction-NN_6_7::synapse0x23149f0() {
   return (neuron0x230d7a0()*0.0115614);
}

double NNfunction-NN_6_7::synapse0x2314a30() {
   return (neuron0x230dae0()*0.0149147);
}

double NNfunction-NN_6_7::synapse0x2314a70() {
   return (neuron0x230de20()*3.81883);
}

double NNfunction-NN_6_7::synapse0x2314ab0() {
   return (neuron0x230e160()*0.084034);
}

double NNfunction-NN_6_7::synapse0x2314af0() {
   return (neuron0x230e4a0()*0.0287577);
}

double NNfunction-NN_6_7::synapse0x2314b30() {
   return (neuron0x230e7e0()*0.0108825);
}

double NNfunction-NN_6_7::synapse0x2314b70() {
   return (neuron0x230eb20()*0.00933754);
}

double NNfunction-NN_6_7::synapse0x2314600() {
   return (neuron0x230ee60()*0.00553374);
}

double NNfunction-NN_6_7::synapse0x2314640() {
   return (neuron0x230f3c0()*0.0309237);
}

double NNfunction-NN_6_7::synapse0x2314cc0() {
   return (neuron0x230f5e0()*0.000644022);
}

double NNfunction-NN_6_7::synapse0x2314d00() {
   return (neuron0x230f920()*-0.0030982);
}

double NNfunction-NN_6_7::synapse0x2314d40() {
   return (neuron0x230fc60()*-0.0226116);
}

double NNfunction-NN_6_7::synapse0x2314d80() {
   return (neuron0x230ffa0()*0.0211028);
}

double NNfunction-NN_6_7::synapse0x2314dc0() {
   return (neuron0x23102e0()*-0.0173418);
}

double NNfunction-NN_6_7::synapse0x2314e00() {
   return (neuron0x2310620()*-1.47135);
}

double NNfunction-NN_6_7::synapse0x2315180() {
   return (neuron0x230ba60()*0.216294);
}

double NNfunction-NN_6_7::synapse0x23151c0() {
   return (neuron0x230bda0()*0.0104062);
}

double NNfunction-NN_6_7::synapse0x2315200() {
   return (neuron0x230c0e0()*-0.125622);
}

double NNfunction-NN_6_7::synapse0x2315240() {
   return (neuron0x230c420()*-0.0357823);
}

double NNfunction-NN_6_7::synapse0x2315280() {
   return (neuron0x230c760()*0.0169375);
}

double NNfunction-NN_6_7::synapse0x23152c0() {
   return (neuron0x230caa0()*0.00822214);
}

double NNfunction-NN_6_7::synapse0x2315300() {
   return (neuron0x230cde0()*-0.014637);
}

double NNfunction-NN_6_7::synapse0x2315340() {
   return (neuron0x230d120()*-0.0157349);
}

double NNfunction-NN_6_7::synapse0x2315380() {
   return (neuron0x230d460()*-0.0130818);
}

double NNfunction-NN_6_7::synapse0x23153c0() {
   return (neuron0x230d7a0()*0.00378055);
}

double NNfunction-NN_6_7::synapse0x2315400() {
   return (neuron0x230dae0()*-0.00648016);
}

double NNfunction-NN_6_7::synapse0x2315440() {
   return (neuron0x230de20()*-0.151058);
}

double NNfunction-NN_6_7::synapse0x2315480() {
   return (neuron0x230e160()*0.000489791);
}

double NNfunction-NN_6_7::synapse0x23154c0() {
   return (neuron0x230e4a0()*-0.0146708);
}

double NNfunction-NN_6_7::synapse0x2315500() {
   return (neuron0x230e7e0()*0.00228312);
}

double NNfunction-NN_6_7::synapse0x2315540() {
   return (neuron0x230eb20()*-0.00142825);
}

double NNfunction-NN_6_7::synapse0x2314fd0() {
   return (neuron0x230ee60()*-0.00168743);
}

double NNfunction-NN_6_7::synapse0x2315010() {
   return (neuron0x230f3c0()*0.00217473);
}

double NNfunction-NN_6_7::synapse0x2315690() {
   return (neuron0x230f5e0()*0.015564);
}

double NNfunction-NN_6_7::synapse0x23156d0() {
   return (neuron0x230f920()*-0.00362078);
}

double NNfunction-NN_6_7::synapse0x2315710() {
   return (neuron0x230fc60()*-9.15471e-05);
}

double NNfunction-NN_6_7::synapse0x2315750() {
   return (neuron0x230ffa0()*-0.0138228);
}

double NNfunction-NN_6_7::synapse0x2315790() {
   return (neuron0x23102e0()*0.0142909);
}

double NNfunction-NN_6_7::synapse0x23157d0() {
   return (neuron0x2310620()*1.01873);
}

double NNfunction-NN_6_7::synapse0x230f2b0() {
   return (neuron0x230ba60()*-0.00301649);
}

double NNfunction-NN_6_7::synapse0x230f2f0() {
   return (neuron0x230bda0()*0.00789583);
}

double NNfunction-NN_6_7::synapse0x230f330() {
   return (neuron0x230c0e0()*0.132054);
}

double NNfunction-NN_6_7::synapse0x230f370() {
   return (neuron0x230c420()*0.0808843);
}

double NNfunction-NN_6_7::synapse0x2315d60() {
   return (neuron0x230c760()*0.0167723);
}

double NNfunction-NN_6_7::synapse0x2315da0() {
   return (neuron0x230caa0()*0.0280622);
}

double NNfunction-NN_6_7::synapse0x2315de0() {
   return (neuron0x230cde0()*-0.0151616);
}

double NNfunction-NN_6_7::synapse0x2315e20() {
   return (neuron0x230d120()*0.00183723);
}

double NNfunction-NN_6_7::synapse0x2315e60() {
   return (neuron0x230d460()*-0.00288028);
}

double NNfunction-NN_6_7::synapse0x2315ea0() {
   return (neuron0x230d7a0()*-0.0215574);
}

double NNfunction-NN_6_7::synapse0x2315ee0() {
   return (neuron0x230dae0()*-0.00727211);
}

double NNfunction-NN_6_7::synapse0x2315f20() {
   return (neuron0x230de20()*-0.100708);
}

double NNfunction-NN_6_7::synapse0x2315f60() {
   return (neuron0x230e160()*-0.0560957);
}

double NNfunction-NN_6_7::synapse0x2315fa0() {
   return (neuron0x230e4a0()*0.0109976);
}

double NNfunction-NN_6_7::synapse0x2315fe0() {
   return (neuron0x230e7e0()*-0.0451323);
}

double NNfunction-NN_6_7::synapse0x2316020() {
   return (neuron0x230eb20()*-0.0263278);
}

double NNfunction-NN_6_7::synapse0x23159a0() {
   return (neuron0x230ee60()*-0.000631526);
}

double NNfunction-NN_6_7::synapse0x23159e0() {
   return (neuron0x230f3c0()*-0.0444209);
}

double NNfunction-NN_6_7::synapse0x2316170() {
   return (neuron0x230f5e0()*-0.0112281);
}

double NNfunction-NN_6_7::synapse0x23161b0() {
   return (neuron0x230f920()*-0.0274901);
}

double NNfunction-NN_6_7::synapse0x23161f0() {
   return (neuron0x230fc60()*0.0037329);
}

double NNfunction-NN_6_7::synapse0x2316230() {
   return (neuron0x230ffa0()*0.00747046);
}

double NNfunction-NN_6_7::synapse0x2316270() {
   return (neuron0x23102e0()*-0.0321946);
}

double NNfunction-NN_6_7::synapse0x23162b0() {
   return (neuron0x2310620()*6.93563);
}

double NNfunction-NN_6_7::synapse0x2316630() {
   return (neuron0x230ba60()*-0.122399);
}

double NNfunction-NN_6_7::synapse0x2316670() {
   return (neuron0x230bda0()*-0.00362142);
}

double NNfunction-NN_6_7::synapse0x23166b0() {
   return (neuron0x230c0e0()*0.205995);
}

double NNfunction-NN_6_7::synapse0x23166f0() {
   return (neuron0x230c420()*-0.106079);
}

double NNfunction-NN_6_7::synapse0x2316730() {
   return (neuron0x230c760()*0.131662);
}

double NNfunction-NN_6_7::synapse0x2316770() {
   return (neuron0x230caa0()*-0.0510379);
}

double NNfunction-NN_6_7::synapse0x23167b0() {
   return (neuron0x230cde0()*-0.107476);
}

double NNfunction-NN_6_7::synapse0x23167f0() {
   return (neuron0x230d120()*0.066343);
}

double NNfunction-NN_6_7::synapse0x2316830() {
   return (neuron0x230d460()*0.00302818);
}

double NNfunction-NN_6_7::synapse0x2316870() {
   return (neuron0x230d7a0()*-0.0113489);
}

double NNfunction-NN_6_7::synapse0x23168b0() {
   return (neuron0x230dae0()*-0.0867012);
}

double NNfunction-NN_6_7::synapse0x23168f0() {
   return (neuron0x230de20()*-0.201867);
}

double NNfunction-NN_6_7::synapse0x2316930() {
   return (neuron0x230e160()*0.145971);
}

double NNfunction-NN_6_7::synapse0x2316970() {
   return (neuron0x230e4a0()*-0.151306);
}

double NNfunction-NN_6_7::synapse0x23169b0() {
   return (neuron0x230e7e0()*0.275379);
}

double NNfunction-NN_6_7::synapse0x23169f0() {
   return (neuron0x230eb20()*0.191058);
}

double NNfunction-NN_6_7::synapse0x2316480() {
   return (neuron0x230ee60()*-0.205881);
}

double NNfunction-NN_6_7::synapse0x23164c0() {
   return (neuron0x230f3c0()*0.092053);
}

double NNfunction-NN_6_7::synapse0x2316b40() {
   return (neuron0x230f5e0()*0.163267);
}

double NNfunction-NN_6_7::synapse0x2316b80() {
   return (neuron0x230f920()*0.0268905);
}

double NNfunction-NN_6_7::synapse0x2316bc0() {
   return (neuron0x230fc60()*-0.0153216);
}

double NNfunction-NN_6_7::synapse0x2316c00() {
   return (neuron0x230ffa0()*-0.0187846);
}

double NNfunction-NN_6_7::synapse0x2316c40() {
   return (neuron0x23102e0()*0.0339398);
}

double NNfunction-NN_6_7::synapse0x2316c80() {
   return (neuron0x2310620()*0.104309);
}

double NNfunction-NN_6_7::synapse0x2317000() {
   return (neuron0x230ba60()*0.0143478);
}

double NNfunction-NN_6_7::synapse0x2317040() {
   return (neuron0x230bda0()*0.00341582);
}

double NNfunction-NN_6_7::synapse0x2317080() {
   return (neuron0x230c0e0()*-3.46916);
}

double NNfunction-NN_6_7::synapse0x23170c0() {
   return (neuron0x230c420()*0.0243671);
}

double NNfunction-NN_6_7::synapse0x2317100() {
   return (neuron0x230c760()*-0.0257096);
}

double NNfunction-NN_6_7::synapse0x2317140() {
   return (neuron0x230caa0()*0.00127097);
}

double NNfunction-NN_6_7::synapse0x2317180() {
   return (neuron0x230cde0()*-0.0132782);
}

double NNfunction-NN_6_7::synapse0x23171c0() {
   return (neuron0x230d120()*0.00212831);
}

double NNfunction-NN_6_7::synapse0x2317200() {
   return (neuron0x230d460()*-0.00301021);
}

double NNfunction-NN_6_7::synapse0x2317240() {
   return (neuron0x230d7a0()*-0.00904765);
}

double NNfunction-NN_6_7::synapse0x2317280() {
   return (neuron0x230dae0()*0.00376137);
}

double NNfunction-NN_6_7::synapse0x23172c0() {
   return (neuron0x230de20()*-0.090722);
}

double NNfunction-NN_6_7::synapse0x2317300() {
   return (neuron0x230e160()*-0.0289287);
}

double NNfunction-NN_6_7::synapse0x2317340() {
   return (neuron0x230e4a0()*-0.0245878);
}

double NNfunction-NN_6_7::synapse0x2317380() {
   return (neuron0x230e7e0()*-0.0377884);
}

double NNfunction-NN_6_7::synapse0x23173c0() {
   return (neuron0x230eb20()*0.0171824);
}

double NNfunction-NN_6_7::synapse0x2316e50() {
   return (neuron0x230ee60()*0.0129372);
}

double NNfunction-NN_6_7::synapse0x2316e90() {
   return (neuron0x230f3c0()*-0.0246814);
}

double NNfunction-NN_6_7::synapse0x2313c20() {
   return (neuron0x230f5e0()*-0.00357747);
}

double NNfunction-NN_6_7::synapse0x2313c60() {
   return (neuron0x230f920()*0.0159646);
}

double NNfunction-NN_6_7::synapse0x2313ca0() {
   return (neuron0x230fc60()*0.0147861);
}

double NNfunction-NN_6_7::synapse0x2313ce0() {
   return (neuron0x230ffa0()*-0.00160813);
}

double NNfunction-NN_6_7::synapse0x2313d20() {
   return (neuron0x23102e0()*-0.0294333);
}

double NNfunction-NN_6_7::synapse0x2313d60() {
   return (neuron0x2310620()*3.86059);
}

double NNfunction-NN_6_7::synapse0x23140e0() {
   return (neuron0x230ba60()*0.338802);
}

double NNfunction-NN_6_7::synapse0x2314120() {
   return (neuron0x230bda0()*0.00800077);
}

double NNfunction-NN_6_7::synapse0x2314160() {
   return (neuron0x230c0e0()*0.157425);
}

double NNfunction-NN_6_7::synapse0x23141a0() {
   return (neuron0x230c420()*-0.0970033);
}

double NNfunction-NN_6_7::synapse0x23141e0() {
   return (neuron0x230c760()*-0.000769005);
}

double NNfunction-NN_6_7::synapse0x2314220() {
   return (neuron0x230caa0()*-0.0214899);
}

double NNfunction-NN_6_7::synapse0x2314260() {
   return (neuron0x230cde0()*0.121311);
}

double NNfunction-NN_6_7::synapse0x23142a0() {
   return (neuron0x230d120()*-0.322651);
}

double NNfunction-NN_6_7::synapse0x23142e0() {
   return (neuron0x230d460()*0.228469);
}

double NNfunction-NN_6_7::synapse0x2314320() {
   return (neuron0x230d7a0()*-0.255501);
}

double NNfunction-NN_6_7::synapse0x2314360() {
   return (neuron0x230dae0()*0.57996);
}

double NNfunction-NN_6_7::synapse0x23143a0() {
   return (neuron0x230de20()*-0.399377);
}

double NNfunction-NN_6_7::synapse0x23143e0() {
   return (neuron0x230e160()*0.0412366);
}

double NNfunction-NN_6_7::synapse0x2318520() {
   return (neuron0x230e4a0()*-0.233813);
}

double NNfunction-NN_6_7::synapse0x2318560() {
   return (neuron0x230e7e0()*-0.0211862);
}

double NNfunction-NN_6_7::synapse0x23185a0() {
   return (neuron0x230eb20()*-0.0483472);
}

double NNfunction-NN_6_7::synapse0x2313f30() {
   return (neuron0x230ee60()*0.144624);
}

double NNfunction-NN_6_7::synapse0x2313f70() {
   return (neuron0x230f3c0()*-0.236817);
}

double NNfunction-NN_6_7::synapse0x23186f0() {
   return (neuron0x230f5e0()*-0.0463032);
}

double NNfunction-NN_6_7::synapse0x2318730() {
   return (neuron0x230f920()*0.21979);
}

double NNfunction-NN_6_7::synapse0x2318770() {
   return (neuron0x230fc60()*-0.0326203);
}

double NNfunction-NN_6_7::synapse0x23187b0() {
   return (neuron0x230ffa0()*-0.0867926);
}

double NNfunction-NN_6_7::synapse0x23187f0() {
   return (neuron0x23102e0()*-0.203738);
}

double NNfunction-NN_6_7::synapse0x2318830() {
   return (neuron0x2310620()*0.0807624);
}

double NNfunction-NN_6_7::synapse0x2318bb0() {
   return (neuron0x230ba60()*0.0253899);
}

double NNfunction-NN_6_7::synapse0x2318bf0() {
   return (neuron0x230bda0()*0.0133266);
}

double NNfunction-NN_6_7::synapse0x2318c30() {
   return (neuron0x230c0e0()*0.707673);
}

double NNfunction-NN_6_7::synapse0x2318c70() {
   return (neuron0x230c420()*0.10883);
}

double NNfunction-NN_6_7::synapse0x2318cb0() {
   return (neuron0x230c760()*-0.0684777);
}

double NNfunction-NN_6_7::synapse0x2318cf0() {
   return (neuron0x230caa0()*0.018755);
}

double NNfunction-NN_6_7::synapse0x2318d30() {
   return (neuron0x230cde0()*-0.0158687);
}

double NNfunction-NN_6_7::synapse0x2318d70() {
   return (neuron0x230d120()*0.106355);
}

double NNfunction-NN_6_7::synapse0x2318db0() {
   return (neuron0x230d460()*-0.0125973);
}

double NNfunction-NN_6_7::synapse0x2318df0() {
   return (neuron0x230d7a0()*0.0172864);
}

double NNfunction-NN_6_7::synapse0x2318e30() {
   return (neuron0x230dae0()*0.0486593);
}

double NNfunction-NN_6_7::synapse0x2318e70() {
   return (neuron0x230de20()*0.251757);
}

double NNfunction-NN_6_7::synapse0x2318eb0() {
   return (neuron0x230e160()*-0.201164);
}

double NNfunction-NN_6_7::synapse0x2318ef0() {
   return (neuron0x230e4a0()*0.00120751);
}

double NNfunction-NN_6_7::synapse0x2318f30() {
   return (neuron0x230e7e0()*-0.0801786);
}

double NNfunction-NN_6_7::synapse0x2318f70() {
   return (neuron0x230eb20()*0.0705919);
}

double NNfunction-NN_6_7::synapse0x2318a00() {
   return (neuron0x230ee60()*0.00715078);
}

double NNfunction-NN_6_7::synapse0x2318a40() {
   return (neuron0x230f3c0()*-0.0485779);
}

double NNfunction-NN_6_7::synapse0x23190c0() {
   return (neuron0x230f5e0()*-0.0812596);
}

double NNfunction-NN_6_7::synapse0x2319100() {
   return (neuron0x230f920()*0.0563981);
}

double NNfunction-NN_6_7::synapse0x2319140() {
   return (neuron0x230fc60()*0.00665852);
}

double NNfunction-NN_6_7::synapse0x2319180() {
   return (neuron0x230ffa0()*-0.0743365);
}

double NNfunction-NN_6_7::synapse0x23191c0() {
   return (neuron0x23102e0()*-0.00732292);
}

double NNfunction-NN_6_7::synapse0x2319200() {
   return (neuron0x2310620()*-1.29539);
}

double NNfunction-NN_6_7::synapse0x2319580() {
   return (neuron0x230ba60()*-0.0232475);
}

double NNfunction-NN_6_7::synapse0x23195c0() {
   return (neuron0x230bda0()*-0.121998);
}

double NNfunction-NN_6_7::synapse0x2319600() {
   return (neuron0x230c0e0()*0.219762);
}

double NNfunction-NN_6_7::synapse0x2319640() {
   return (neuron0x230c420()*0.149092);
}

double NNfunction-NN_6_7::synapse0x2319680() {
   return (neuron0x230c760()*-0.138955);
}

double NNfunction-NN_6_7::synapse0x23196c0() {
   return (neuron0x230caa0()*-0.0822727);
}

double NNfunction-NN_6_7::synapse0x2319700() {
   return (neuron0x230cde0()*-0.0172248);
}

double NNfunction-NN_6_7::synapse0x2319740() {
   return (neuron0x230d120()*0.00936124);
}

double NNfunction-NN_6_7::synapse0x2319780() {
   return (neuron0x230d460()*-0.0448945);
}

double NNfunction-NN_6_7::synapse0x23197c0() {
   return (neuron0x230d7a0()*-0.0977314);
}

double NNfunction-NN_6_7::synapse0x2319800() {
   return (neuron0x230dae0()*-0.035304);
}

double NNfunction-NN_6_7::synapse0x2319840() {
   return (neuron0x230de20()*-0.144471);
}

double NNfunction-NN_6_7::synapse0x2319880() {
   return (neuron0x230e160()*0.459401);
}

double NNfunction-NN_6_7::synapse0x23198c0() {
   return (neuron0x230e4a0()*0.107779);
}

double NNfunction-NN_6_7::synapse0x2319900() {
   return (neuron0x230e7e0()*0.226505);
}

double NNfunction-NN_6_7::synapse0x2319940() {
   return (neuron0x230eb20()*0.185628);
}

double NNfunction-NN_6_7::synapse0x23193d0() {
   return (neuron0x230ee60()*-0.0828464);
}

double NNfunction-NN_6_7::synapse0x2319410() {
   return (neuron0x230f3c0()*-0.00755212);
}

double NNfunction-NN_6_7::synapse0x2319a90() {
   return (neuron0x230f5e0()*-0.20687);
}

double NNfunction-NN_6_7::synapse0x2319ad0() {
   return (neuron0x230f920()*-0.211143);
}

double NNfunction-NN_6_7::synapse0x2319b10() {
   return (neuron0x230fc60()*-0.143011);
}

double NNfunction-NN_6_7::synapse0x2319b50() {
   return (neuron0x230ffa0()*0.0896896);
}

double NNfunction-NN_6_7::synapse0x2319b90() {
   return (neuron0x23102e0()*0.0576777);
}

double NNfunction-NN_6_7::synapse0x2319bd0() {
   return (neuron0x2310620()*0.267619);
}

double NNfunction-NN_6_7::synapse0x2319f50() {
   return (neuron0x230ba60()*0.0636945);
}

double NNfunction-NN_6_7::synapse0x2319f90() {
   return (neuron0x230bda0()*0.00497927);
}

double NNfunction-NN_6_7::synapse0x2319fd0() {
   return (neuron0x230c0e0()*0.121608);
}

double NNfunction-NN_6_7::synapse0x231a010() {
   return (neuron0x230c420()*0.0275046);
}

double NNfunction-NN_6_7::synapse0x231a050() {
   return (neuron0x230c760()*0.00530774);
}

double NNfunction-NN_6_7::synapse0x231a090() {
   return (neuron0x230caa0()*-0.0073536);
}

double NNfunction-NN_6_7::synapse0x231a0d0() {
   return (neuron0x230cde0()*0.00149456);
}

double NNfunction-NN_6_7::synapse0x231a110() {
   return (neuron0x230d120()*-0.0193691);
}

double NNfunction-NN_6_7::synapse0x231a150() {
   return (neuron0x230d460()*0.00164379);
}

double NNfunction-NN_6_7::synapse0x231a190() {
   return (neuron0x230d7a0()*-0.0152415);
}

double NNfunction-NN_6_7::synapse0x231a1d0() {
   return (neuron0x230dae0()*0.0016597);
}

double NNfunction-NN_6_7::synapse0x231a210() {
   return (neuron0x230de20()*2.16716);
}

double NNfunction-NN_6_7::synapse0x231a250() {
   return (neuron0x230e160()*0.00132036);
}

double NNfunction-NN_6_7::synapse0x231a290() {
   return (neuron0x230e4a0()*-0.000274735);
}

double NNfunction-NN_6_7::synapse0x231a2d0() {
   return (neuron0x230e7e0()*0.00791412);
}

double NNfunction-NN_6_7::synapse0x231a310() {
   return (neuron0x230eb20()*-0.0106918);
}

double NNfunction-NN_6_7::synapse0x2319da0() {
   return (neuron0x230ee60()*0.00369508);
}

double NNfunction-NN_6_7::synapse0x2319de0() {
   return (neuron0x230f3c0()*0.000186522);
}

double NNfunction-NN_6_7::synapse0x231a460() {
   return (neuron0x230f5e0()*-0.0105359);
}

double NNfunction-NN_6_7::synapse0x231a4a0() {
   return (neuron0x230f920()*-0.0175417);
}

double NNfunction-NN_6_7::synapse0x231a4e0() {
   return (neuron0x230fc60()*0.00897438);
}

double NNfunction-NN_6_7::synapse0x231a520() {
   return (neuron0x230ffa0()*0.00367979);
}

double NNfunction-NN_6_7::synapse0x231a560() {
   return (neuron0x23102e0()*0.00209617);
}

double NNfunction-NN_6_7::synapse0x231a5a0() {
   return (neuron0x2310620()*3.19573);
}

double NNfunction-NN_6_7::synapse0x231a920() {
   return (neuron0x230ba60()*-0.0157554);
}

double NNfunction-NN_6_7::synapse0x230bc80() {
   return (neuron0x230bda0()*0.0280097);
}

double NNfunction-NN_6_7::synapse0x230bcc0() {
   return (neuron0x230c0e0()*-0.321694);
}

double NNfunction-NN_6_7::synapse0x230bfc0() {
   return (neuron0x230c420()*-1.28953);
}

double NNfunction-NN_6_7::synapse0x230c000() {
   return (neuron0x230c760()*-7.24374e-05);
}

double NNfunction-NN_6_7::synapse0x230c300() {
   return (neuron0x230caa0()*-0.0106706);
}

double NNfunction-NN_6_7::synapse0x230c340() {
   return (neuron0x230cde0()*0.0259698);
}

double NNfunction-NN_6_7::synapse0x230c640() {
   return (neuron0x230d120()*-0.034886);
}

double NNfunction-NN_6_7::synapse0x230c680() {
   return (neuron0x230d460()*0.0013129);
}

double NNfunction-NN_6_7::synapse0x230c980() {
   return (neuron0x230d7a0()*-0.00562671);
}

double NNfunction-NN_6_7::synapse0x230c9c0() {
   return (neuron0x230dae0()*-0.0196625);
}

double NNfunction-NN_6_7::synapse0x230ccc0() {
   return (neuron0x230de20()*0.199932);
}

double NNfunction-NN_6_7::synapse0x230cd00() {
   return (neuron0x230e160()*-0.0284743);
}

double NNfunction-NN_6_7::synapse0x230d000() {
   return (neuron0x230e4a0()*0.0312975);
}

double NNfunction-NN_6_7::synapse0x230d040() {
   return (neuron0x230e7e0()*0.00416267);
}

double NNfunction-NN_6_7::synapse0x230d340() {
   return (neuron0x230eb20()*-0.0290065);
}

double NNfunction-NN_6_7::synapse0x230d380() {
   return (neuron0x230ee60()*0.0312373);
}

double NNfunction-NN_6_7::synapse0x230d680() {
   return (neuron0x230f3c0()*-0.00957025);
}

double NNfunction-NN_6_7::synapse0x230d6c0() {
   return (neuron0x230f5e0()*-0.00658425);
}

double NNfunction-NN_6_7::synapse0x230d9c0() {
   return (neuron0x230f920()*0.0104887);
}

double NNfunction-NN_6_7::synapse0x230da00() {
   return (neuron0x230fc60()*-0.000844292);
}

double NNfunction-NN_6_7::synapse0x230dd00() {
   return (neuron0x230ffa0()*0.0098946);
}

double NNfunction-NN_6_7::synapse0x230dd40() {
   return (neuron0x23102e0()*-0.00428111);
}

double NNfunction-NN_6_7::synapse0x230e040() {
   return (neuron0x2310620()*0.0347714);
}

double NNfunction-NN_6_7::synapse0x230e080() {
   return (neuron0x230ba60()*-0.0115498);
}

double NNfunction-NN_6_7::synapse0x230ed40() {
   return (neuron0x230bda0()*-0.0111156);
}

double NNfunction-NN_6_7::synapse0x230ed80() {
   return (neuron0x230c0e0()*0.663239);
}

double NNfunction-NN_6_7::synapse0x231a770() {
   return (neuron0x230c420()*0.00840316);
}

double NNfunction-NN_6_7::synapse0x231a7b0() {
   return (neuron0x230c760()*-0.0231268);
}

double NNfunction-NN_6_7::synapse0x230f080() {
   return (neuron0x230caa0()*0.00247764);
}

double NNfunction-NN_6_7::synapse0x230f0c0() {
   return (neuron0x230cde0()*-0.0118339);
}

double NNfunction-NN_6_7::synapse0x20bd050() {
   return (neuron0x230d120()*0.00972019);
}

double NNfunction-NN_6_7::synapse0x20bd090() {
   return (neuron0x230d460()*-0.0127879);
}

double NNfunction-NN_6_7::synapse0x230f800() {
   return (neuron0x230d7a0()*-0.0266063);
}

double NNfunction-NN_6_7::synapse0x230f840() {
   return (neuron0x230dae0()*-0.0120911);
}

double NNfunction-NN_6_7::synapse0x230fb40() {
   return (neuron0x230de20()*-0.0471196);
}

double NNfunction-NN_6_7::synapse0x230fb80() {
   return (neuron0x230e160()*-2.37784);
}

double NNfunction-NN_6_7::synapse0x230fe80() {
   return (neuron0x230e4a0()*0.00380038);
}

double NNfunction-NN_6_7::synapse0x230fec0() {
   return (neuron0x230e7e0()*0.0176522);
}

double NNfunction-NN_6_7::synapse0x23101c0() {
   return (neuron0x230eb20()*0.00478244);
}

double NNfunction-NN_6_7::synapse0x2310200() {
   return (neuron0x230ee60()*-0.0125495);
}

double NNfunction-NN_6_7::synapse0x2310500() {
   return (neuron0x230f3c0()*-0.0258358);
}

double NNfunction-NN_6_7::synapse0x2310540() {
   return (neuron0x230f5e0()*-0.0394245);
}

double NNfunction-NN_6_7::synapse0x2310840() {
   return (neuron0x230f920()*-0.00285407);
}

double NNfunction-NN_6_7::synapse0x2310880() {
   return (neuron0x230fc60()*-0.0114563);
}

double NNfunction-NN_6_7::synapse0x230e380() {
   return (neuron0x230ffa0()*0.01017);
}

double NNfunction-NN_6_7::synapse0x230e3c0() {
   return (neuron0x23102e0()*-0.0107971);
}

double NNfunction-NN_6_7::synapse0x231c690() {
   return (neuron0x2310620()*0.0593821);
}

double NNfunction-NN_6_7::synapse0x231ca10() {
   return (neuron0x230ba60()*-0.0553346);
}

double NNfunction-NN_6_7::synapse0x231ca50() {
   return (neuron0x230bda0()*-0.00659877);
}

double NNfunction-NN_6_7::synapse0x231ca90() {
   return (neuron0x230c0e0()*1.05627);
}

double NNfunction-NN_6_7::synapse0x231cad0() {
   return (neuron0x230c420()*-0.00677145);
}

double NNfunction-NN_6_7::synapse0x231cb10() {
   return (neuron0x230c760()*0.0179918);
}

double NNfunction-NN_6_7::synapse0x231cb50() {
   return (neuron0x230caa0()*0.0102049);
}

double NNfunction-NN_6_7::synapse0x231cb90() {
   return (neuron0x230cde0()*0.0010024);
}

double NNfunction-NN_6_7::synapse0x231cbd0() {
   return (neuron0x230d120()*0.0110478);
}

double NNfunction-NN_6_7::synapse0x231cc10() {
   return (neuron0x230d460()*-0.00917747);
}

double NNfunction-NN_6_7::synapse0x231cc50() {
   return (neuron0x230d7a0()*-0.00444924);
}

double NNfunction-NN_6_7::synapse0x231cc90() {
   return (neuron0x230dae0()*-0.0136238);
}

double NNfunction-NN_6_7::synapse0x231ccd0() {
   return (neuron0x230de20()*-5.67693);
}

double NNfunction-NN_6_7::synapse0x231cd10() {
   return (neuron0x230e160()*0.0281676);
}

double NNfunction-NN_6_7::synapse0x231cd50() {
   return (neuron0x230e4a0()*-0.00782909);
}

double NNfunction-NN_6_7::synapse0x231cd90() {
   return (neuron0x230e7e0()*0.010338);
}

double NNfunction-NN_6_7::synapse0x231cdd0() {
   return (neuron0x230eb20()*0.00984373);
}

double NNfunction-NN_6_7::synapse0x231c860() {
   return (neuron0x230ee60()*-0.0184571);
}

double NNfunction-NN_6_7::synapse0x231c8a0() {
   return (neuron0x230f3c0()*-0.0139641);
}

double NNfunction-NN_6_7::synapse0x231cf20() {
   return (neuron0x230f5e0()*0.00384287);
}

double NNfunction-NN_6_7::synapse0x231cf60() {
   return (neuron0x230f920()*0.00365041);
}

double NNfunction-NN_6_7::synapse0x231cfa0() {
   return (neuron0x230fc60()*0.00583855);
}

double NNfunction-NN_6_7::synapse0x231cfe0() {
   return (neuron0x230ffa0()*-0.00332141);
}

double NNfunction-NN_6_7::synapse0x231d020() {
   return (neuron0x23102e0()*0.00445005);
}

double NNfunction-NN_6_7::synapse0x231d060() {
   return (neuron0x2310620()*-0.808494);
}

double NNfunction-NN_6_7::synapse0x231d3e0() {
   return (neuron0x230ba60()*-0.290268);
}

double NNfunction-NN_6_7::synapse0x231d420() {
   return (neuron0x230bda0()*-0.0232272);
}

double NNfunction-NN_6_7::synapse0x231d460() {
   return (neuron0x230c0e0()*-1.24867);
}

double NNfunction-NN_6_7::synapse0x231d4a0() {
   return (neuron0x230c420()*-0.00343606);
}

double NNfunction-NN_6_7::synapse0x231d4e0() {
   return (neuron0x230c760()*0.0591304);
}

double NNfunction-NN_6_7::synapse0x231d520() {
   return (neuron0x230caa0()*-0.0205952);
}

double NNfunction-NN_6_7::synapse0x231d560() {
   return (neuron0x230cde0()*-0.0218242);
}

double NNfunction-NN_6_7::synapse0x231d5a0() {
   return (neuron0x230d120()*-0.0512644);
}

double NNfunction-NN_6_7::synapse0x231d5e0() {
   return (neuron0x230d460()*-0.026832);
}

double NNfunction-NN_6_7::synapse0x231d620() {
   return (neuron0x230d7a0()*-0.0958284);
}

double NNfunction-NN_6_7::synapse0x231d660() {
   return (neuron0x230dae0()*-0.00429849);
}

double NNfunction-NN_6_7::synapse0x231d6a0() {
   return (neuron0x230de20()*-0.499139);
}

double NNfunction-NN_6_7::synapse0x231d6e0() {
   return (neuron0x230e160()*-0.00930049);
}

double NNfunction-NN_6_7::synapse0x231d720() {
   return (neuron0x230e4a0()*-0.0349401);
}

double NNfunction-NN_6_7::synapse0x231d760() {
   return (neuron0x230e7e0()*0.0470119);
}

double NNfunction-NN_6_7::synapse0x231d7a0() {
   return (neuron0x230eb20()*0.0390566);
}

double NNfunction-NN_6_7::synapse0x231d230() {
   return (neuron0x230ee60()*-0.0703106);
}

double NNfunction-NN_6_7::synapse0x231d270() {
   return (neuron0x230f3c0()*0.0288892);
}

double NNfunction-NN_6_7::synapse0x231d8f0() {
   return (neuron0x230f5e0()*0.0241885);
}

double NNfunction-NN_6_7::synapse0x231d930() {
   return (neuron0x230f920()*-0.020417);
}

double NNfunction-NN_6_7::synapse0x231d970() {
   return (neuron0x230fc60()*-0.0337121);
}

double NNfunction-NN_6_7::synapse0x231d9b0() {
   return (neuron0x230ffa0()*-0.0357795);
}

double NNfunction-NN_6_7::synapse0x231d9f0() {
   return (neuron0x23102e0()*-0.00139847);
}

double NNfunction-NN_6_7::synapse0x231da30() {
   return (neuron0x2310620()*-0.343909);
}

double NNfunction-NN_6_7::synapse0x231ddb0() {
   return (neuron0x230ba60()*-0.12116);
}

double NNfunction-NN_6_7::synapse0x231ddf0() {
   return (neuron0x230bda0()*0.105612);
}

double NNfunction-NN_6_7::synapse0x231de30() {
   return (neuron0x230c0e0()*-0.145357);
}

double NNfunction-NN_6_7::synapse0x231de70() {
   return (neuron0x230c420()*0.298188);
}

double NNfunction-NN_6_7::synapse0x231deb0() {
   return (neuron0x230c760()*0.0324209);
}

double NNfunction-NN_6_7::synapse0x231def0() {
   return (neuron0x230caa0()*0.17924);
}

double NNfunction-NN_6_7::synapse0x231df30() {
   return (neuron0x230cde0()*-0.362592);
}

double NNfunction-NN_6_7::synapse0x231df70() {
   return (neuron0x230d120()*-0.0620291);
}

double NNfunction-NN_6_7::synapse0x231dfb0() {
   return (neuron0x230d460()*-0.221427);
}

double NNfunction-NN_6_7::synapse0x231dff0() {
   return (neuron0x230d7a0()*0.0900171);
}

double NNfunction-NN_6_7::synapse0x231e030() {
   return (neuron0x230dae0()*0.0219802);
}

double NNfunction-NN_6_7::synapse0x231e070() {
   return (neuron0x230de20()*0.125857);
}

double NNfunction-NN_6_7::synapse0x231e0b0() {
   return (neuron0x230e160()*-0.235052);
}

double NNfunction-NN_6_7::synapse0x231e0f0() {
   return (neuron0x230e4a0()*0.0324514);
}

double NNfunction-NN_6_7::synapse0x231e130() {
   return (neuron0x230e7e0()*-0.351994);
}

double NNfunction-NN_6_7::synapse0x231e170() {
   return (neuron0x230eb20()*0.16492);
}

double NNfunction-NN_6_7::synapse0x231dc00() {
   return (neuron0x230ee60()*0.011699);
}

double NNfunction-NN_6_7::synapse0x231dc40() {
   return (neuron0x230f3c0()*0.0317867);
}

double NNfunction-NN_6_7::synapse0x231e2c0() {
   return (neuron0x230f5e0()*0.302902);
}

double NNfunction-NN_6_7::synapse0x231e300() {
   return (neuron0x230f920()*-0.148411);
}

double NNfunction-NN_6_7::synapse0x231e340() {
   return (neuron0x230fc60()*0.357112);
}

double NNfunction-NN_6_7::synapse0x231e380() {
   return (neuron0x230ffa0()*0.0369252);
}

double NNfunction-NN_6_7::synapse0x231e3c0() {
   return (neuron0x23102e0()*0.154064);
}

double NNfunction-NN_6_7::synapse0x231e400() {
   return (neuron0x2310620()*-0.774606);
}

double NNfunction-NN_6_7::synapse0x231e780() {
   return (neuron0x230ba60()*0.667464);
}

double NNfunction-NN_6_7::synapse0x231e7c0() {
   return (neuron0x230bda0()*0.00156823);
}

double NNfunction-NN_6_7::synapse0x231e800() {
   return (neuron0x230c0e0()*-0.000270765);
}

double NNfunction-NN_6_7::synapse0x231e840() {
   return (neuron0x230c420()*0.00689024);
}

double NNfunction-NN_6_7::synapse0x231e880() {
   return (neuron0x230c760()*-0.0150333);
}

double NNfunction-NN_6_7::synapse0x231e8c0() {
   return (neuron0x230caa0()*-0.00657234);
}

double NNfunction-NN_6_7::synapse0x231e900() {
   return (neuron0x230cde0()*0.0301874);
}

double NNfunction-NN_6_7::synapse0x231e940() {
   return (neuron0x230d120()*-0.0158483);
}

double NNfunction-NN_6_7::synapse0x231e980() {
   return (neuron0x230d460()*0.022005);
}

double NNfunction-NN_6_7::synapse0x231e9c0() {
   return (neuron0x230d7a0()*0.020971);
}

double NNfunction-NN_6_7::synapse0x231ea00() {
   return (neuron0x230dae0()*0.0129536);
}

double NNfunction-NN_6_7::synapse0x231ea40() {
   return (neuron0x230de20()*-0.12245);
}

double NNfunction-NN_6_7::synapse0x231ea80() {
   return (neuron0x230e160()*-0.00379368);
}

double NNfunction-NN_6_7::synapse0x231eac0() {
   return (neuron0x230e4a0()*0.0103987);
}

double NNfunction-NN_6_7::synapse0x231eb00() {
   return (neuron0x230e7e0()*-0.0259805);
}

double NNfunction-NN_6_7::synapse0x231eb40() {
   return (neuron0x230eb20()*-0.00583573);
}

double NNfunction-NN_6_7::synapse0x231e5d0() {
   return (neuron0x230ee60()*0.00805229);
}

double NNfunction-NN_6_7::synapse0x231e610() {
   return (neuron0x230f3c0()*-0.0111834);
}

double NNfunction-NN_6_7::synapse0x231ec90() {
   return (neuron0x230f5e0()*-0.0291052);
}

double NNfunction-NN_6_7::synapse0x231ecd0() {
   return (neuron0x230f920()*0.00335212);
}

double NNfunction-NN_6_7::synapse0x231ed10() {
   return (neuron0x230fc60()*0.0185955);
}

double NNfunction-NN_6_7::synapse0x231ed50() {
   return (neuron0x230ffa0()*0.0122927);
}

double NNfunction-NN_6_7::synapse0x231ed90() {
   return (neuron0x23102e0()*-0.000268107);
}

double NNfunction-NN_6_7::synapse0x231edd0() {
   return (neuron0x2310620()*0.729442);
}

double NNfunction-NN_6_7::synapse0x231f150() {
   return (neuron0x230ba60()*0.0415488);
}

double NNfunction-NN_6_7::synapse0x231f190() {
   return (neuron0x230bda0()*-0.00262336);
}

double NNfunction-NN_6_7::synapse0x231f1d0() {
   return (neuron0x230c0e0()*0.233466);
}

double NNfunction-NN_6_7::synapse0x231f210() {
   return (neuron0x230c420()*-0.844428);
}

double NNfunction-NN_6_7::synapse0x231f250() {
   return (neuron0x230c760()*-0.0214691);
}

double NNfunction-NN_6_7::synapse0x231f290() {
   return (neuron0x230caa0()*-0.00921528);
}

double NNfunction-NN_6_7::synapse0x231f2d0() {
   return (neuron0x230cde0()*-0.0316912);
}

double NNfunction-NN_6_7::synapse0x231f310() {
   return (neuron0x230d120()*0.011075);
}

double NNfunction-NN_6_7::synapse0x231f350() {
   return (neuron0x230d460()*-0.00401507);
}

double NNfunction-NN_6_7::synapse0x2317510() {
   return (neuron0x230d7a0()*0.00513067);
}

double NNfunction-NN_6_7::synapse0x2317550() {
   return (neuron0x230dae0()*0.0483435);
}

double NNfunction-NN_6_7::synapse0x2317590() {
   return (neuron0x230de20()*-0.25028);
}

double NNfunction-NN_6_7::synapse0x23175d0() {
   return (neuron0x230e160()*0.0190485);
}

double NNfunction-NN_6_7::synapse0x2317610() {
   return (neuron0x230e4a0()*-0.0161551);
}

double NNfunction-NN_6_7::synapse0x2317650() {
   return (neuron0x230e7e0()*0.0413867);
}

double NNfunction-NN_6_7::synapse0x2317690() {
   return (neuron0x230eb20()*0.0283176);
}

double NNfunction-NN_6_7::synapse0x231efa0() {
   return (neuron0x230ee60()*0.0020312);
}

double NNfunction-NN_6_7::synapse0x231efe0() {
   return (neuron0x230f3c0()*0.014047);
}

double NNfunction-NN_6_7::synapse0x23177e0() {
   return (neuron0x230f5e0()*0.00725143);
}

double NNfunction-NN_6_7::synapse0x2317820() {
   return (neuron0x230f920()*-0.00973767);
}

double NNfunction-NN_6_7::synapse0x2317860() {
   return (neuron0x230fc60()*-0.0251356);
}

double NNfunction-NN_6_7::synapse0x23178a0() {
   return (neuron0x230ffa0()*-0.0172784);
}

double NNfunction-NN_6_7::synapse0x23178e0() {
   return (neuron0x23102e0()*-0.00128307);
}

double NNfunction-NN_6_7::synapse0x2317920() {
   return (neuron0x2310620()*0.0958809);
}

double NNfunction-NN_6_7::synapse0x2317ca0() {
   return (neuron0x230ba60()*-0.0629596);
}

double NNfunction-NN_6_7::synapse0x2317ce0() {
   return (neuron0x230bda0()*0.0757864);
}

double NNfunction-NN_6_7::synapse0x2317d20() {
   return (neuron0x230c0e0()*1.61344);
}

double NNfunction-NN_6_7::synapse0x2317d60() {
   return (neuron0x230c420()*0.0543794);
}

double NNfunction-NN_6_7::synapse0x2317da0() {
   return (neuron0x230c760()*-0.115264);
}

double NNfunction-NN_6_7::synapse0x2317de0() {
   return (neuron0x230caa0()*0.0119209);
}

double NNfunction-NN_6_7::synapse0x2317e20() {
   return (neuron0x230cde0()*-0.049819);
}

double NNfunction-NN_6_7::synapse0x2317e60() {
   return (neuron0x230d120()*0.0900618);
}

double NNfunction-NN_6_7::synapse0x2317ea0() {
   return (neuron0x230d460()*-0.0256587);
}

double NNfunction-NN_6_7::synapse0x2317ee0() {
   return (neuron0x230d7a0()*0.0218731);
}

double NNfunction-NN_6_7::synapse0x2317f20() {
   return (neuron0x230dae0()*0.0435441);
}

double NNfunction-NN_6_7::synapse0x2317f60() {
   return (neuron0x230de20()*-0.0506086);
}

double NNfunction-NN_6_7::synapse0x2317fa0() {
   return (neuron0x230e160()*-0.0993858);
}

double NNfunction-NN_6_7::synapse0x2317fe0() {
   return (neuron0x230e4a0()*-0.0445683);
}

double NNfunction-NN_6_7::synapse0x2318020() {
   return (neuron0x230e7e0()*-0.0088144);
}

double NNfunction-NN_6_7::synapse0x2318060() {
   return (neuron0x230eb20()*-0.0356965);
}

double NNfunction-NN_6_7::synapse0x2317af0() {
   return (neuron0x230ee60()*-0.0106311);
}

double NNfunction-NN_6_7::synapse0x2317b30() {
   return (neuron0x230f3c0()*0.00156793);
}

double NNfunction-NN_6_7::synapse0x23181b0() {
   return (neuron0x230f5e0()*0.0869504);
}

double NNfunction-NN_6_7::synapse0x23181f0() {
   return (neuron0x230f920()*0.0238083);
}

double NNfunction-NN_6_7::synapse0x2318230() {
   return (neuron0x230fc60()*-0.0217768);
}

double NNfunction-NN_6_7::synapse0x2318270() {
   return (neuron0x230ffa0()*-0.0168409);
}

double NNfunction-NN_6_7::synapse0x23182b0() {
   return (neuron0x23102e0()*-0.0177324);
}

double NNfunction-NN_6_7::synapse0x23182f0() {
   return (neuron0x2310620()*-0.0338174);
}

double NNfunction-NN_6_7::synapse0x23184c0() {
   return (neuron0x230ba60()*-0.0334537);
}

double NNfunction-NN_6_7::synapse0x2321550() {
   return (neuron0x230bda0()*0.0421758);
}

double NNfunction-NN_6_7::synapse0x2321590() {
   return (neuron0x230c0e0()*0.366309);
}

double NNfunction-NN_6_7::synapse0x23215d0() {
   return (neuron0x230c420()*-0.911369);
}

double NNfunction-NN_6_7::synapse0x2321610() {
   return (neuron0x230c760()*-0.013891);
}

double NNfunction-NN_6_7::synapse0x2321650() {
   return (neuron0x230caa0()*-0.0247651);
}

double NNfunction-NN_6_7::synapse0x2321690() {
   return (neuron0x230cde0()*0.0286611);
}

double NNfunction-NN_6_7::synapse0x23216d0() {
   return (neuron0x230d120()*-0.0608397);
}

double NNfunction-NN_6_7::synapse0x2321710() {
   return (neuron0x230d460()*0.0024189);
}

double NNfunction-NN_6_7::synapse0x2321750() {
   return (neuron0x230d7a0()*-0.0107772);
}

double NNfunction-NN_6_7::synapse0x2321790() {
   return (neuron0x230dae0()*0.00304631);
}

double NNfunction-NN_6_7::synapse0x23217d0() {
   return (neuron0x230de20()*0.228163);
}

double NNfunction-NN_6_7::synapse0x2321810() {
   return (neuron0x230e160()*-0.0637942);
}

double NNfunction-NN_6_7::synapse0x2321850() {
   return (neuron0x230e4a0()*0.0368767);
}

double NNfunction-NN_6_7::synapse0x2321890() {
   return (neuron0x230e7e0()*-0.00183513);
}

double NNfunction-NN_6_7::synapse0x23218d0() {
   return (neuron0x230eb20()*-0.0625833);
}

double NNfunction-NN_6_7::synapse0x23213a0() {
   return (neuron0x230ee60()*0.0367495);
}

double NNfunction-NN_6_7::synapse0x23213e0() {
   return (neuron0x230f3c0()*-0.0364521);
}

double NNfunction-NN_6_7::synapse0x2321a20() {
   return (neuron0x230f5e0()*-0.00911967);
}

double NNfunction-NN_6_7::synapse0x2321a60() {
   return (neuron0x230f920()*0.0102221);
}

double NNfunction-NN_6_7::synapse0x2321aa0() {
   return (neuron0x230fc60()*0.0333367);
}

double NNfunction-NN_6_7::synapse0x2321ae0() {
   return (neuron0x230ffa0()*-0.000211586);
}

double NNfunction-NN_6_7::synapse0x2321b20() {
   return (neuron0x23102e0()*0.0114272);
}

double NNfunction-NN_6_7::synapse0x2321b60() {
   return (neuron0x2310620()*-0.149492);
}

double NNfunction-NN_6_7::synapse0x2321ee0() {
   return (neuron0x230ba60()*-0.0227026);
}

double NNfunction-NN_6_7::synapse0x2321f20() {
   return (neuron0x230bda0()*-0.0187704);
}

double NNfunction-NN_6_7::synapse0x2321f60() {
   return (neuron0x230c0e0()*-1.41182);
}

double NNfunction-NN_6_7::synapse0x2321fa0() {
   return (neuron0x230c420()*-0.0464049);
}

double NNfunction-NN_6_7::synapse0x2321fe0() {
   return (neuron0x230c760()*-0.0129689);
}

double NNfunction-NN_6_7::synapse0x2322020() {
   return (neuron0x230caa0()*0.00172409);
}

double NNfunction-NN_6_7::synapse0x2322060() {
   return (neuron0x230cde0()*0.00198958);
}

double NNfunction-NN_6_7::synapse0x23220a0() {
   return (neuron0x230d120()*-0.00698853);
}

double NNfunction-NN_6_7::synapse0x23220e0() {
   return (neuron0x230d460()*0.00432572);
}

double NNfunction-NN_6_7::synapse0x2322120() {
   return (neuron0x230d7a0()*0.0159879);
}

double NNfunction-NN_6_7::synapse0x2322160() {
   return (neuron0x230dae0()*-0.00625742);
}

double NNfunction-NN_6_7::synapse0x23221a0() {
   return (neuron0x230de20()*-0.399275);
}

double NNfunction-NN_6_7::synapse0x23221e0() {
   return (neuron0x230e160()*-0.0059587);
}

double NNfunction-NN_6_7::synapse0x2322220() {
   return (neuron0x230e4a0()*-0.0277681);
}

double NNfunction-NN_6_7::synapse0x2322260() {
   return (neuron0x230e7e0()*-0.0271277);
}

double NNfunction-NN_6_7::synapse0x23222a0() {
   return (neuron0x230eb20()*0.0040445);
}

double NNfunction-NN_6_7::synapse0x2321d30() {
   return (neuron0x230ee60()*-0.00343812);
}

double NNfunction-NN_6_7::synapse0x2321d70() {
   return (neuron0x230f3c0()*0.00168483);
}

double NNfunction-NN_6_7::synapse0x23223f0() {
   return (neuron0x230f5e0()*-0.0222129);
}

double NNfunction-NN_6_7::synapse0x2322430() {
   return (neuron0x230f920()*-0.0148165);
}

double NNfunction-NN_6_7::synapse0x2322470() {
   return (neuron0x230fc60()*0.0183088);
}

double NNfunction-NN_6_7::synapse0x23224b0() {
   return (neuron0x230ffa0()*0.0150396);
}

double NNfunction-NN_6_7::synapse0x23224f0() {
   return (neuron0x23102e0()*-0.0106877);
}

double NNfunction-NN_6_7::synapse0x2322530() {
   return (neuron0x2310620()*0.0938525);
}

double NNfunction-NN_6_7::synapse0x23228b0() {
   return (neuron0x230ba60()*0.00850521);
}

double NNfunction-NN_6_7::synapse0x23228f0() {
   return (neuron0x230bda0()*0.00280178);
}

double NNfunction-NN_6_7::synapse0x2322930() {
   return (neuron0x230c0e0()*0.538992);
}

double NNfunction-NN_6_7::synapse0x2322970() {
   return (neuron0x230c420()*-0.0188143);
}

double NNfunction-NN_6_7::synapse0x23229b0() {
   return (neuron0x230c760()*0.0216973);
}

double NNfunction-NN_6_7::synapse0x23229f0() {
   return (neuron0x230caa0()*0.0124192);
}

double NNfunction-NN_6_7::synapse0x2322a30() {
   return (neuron0x230cde0()*0.00950182);
}

double NNfunction-NN_6_7::synapse0x2322a70() {
   return (neuron0x230d120()*0.00189406);
}

double NNfunction-NN_6_7::synapse0x2322ab0() {
   return (neuron0x230d460()*-0.00501398);
}

double NNfunction-NN_6_7::synapse0x2322af0() {
   return (neuron0x230d7a0()*-0.0137544);
}

double NNfunction-NN_6_7::synapse0x2322b30() {
   return (neuron0x230dae0()*-0.0129545);
}

double NNfunction-NN_6_7::synapse0x2322b70() {
   return (neuron0x230de20()*-6.01007);
}

double NNfunction-NN_6_7::synapse0x2322bb0() {
   return (neuron0x230e160()*-0.0359012);
}

double NNfunction-NN_6_7::synapse0x2322bf0() {
   return (neuron0x230e4a0()*-0.0305815);
}

double NNfunction-NN_6_7::synapse0x2322c30() {
   return (neuron0x230e7e0()*0.00228527);
}

double NNfunction-NN_6_7::synapse0x2322c70() {
   return (neuron0x230eb20()*0.00586871);
}

double NNfunction-NN_6_7::synapse0x2322700() {
   return (neuron0x230ee60()*-0.0181014);
}

double NNfunction-NN_6_7::synapse0x2322740() {
   return (neuron0x230f3c0()*-0.0122514);
}

double NNfunction-NN_6_7::synapse0x2322dc0() {
   return (neuron0x230f5e0()*-0.00286149);
}

double NNfunction-NN_6_7::synapse0x2322e00() {
   return (neuron0x230f920()*-0.00375992);
}

double NNfunction-NN_6_7::synapse0x2322e40() {
   return (neuron0x230fc60()*0.00314066);
}

double NNfunction-NN_6_7::synapse0x2322e80() {
   return (neuron0x230ffa0()*-0.0163203);
}

double NNfunction-NN_6_7::synapse0x2322ec0() {
   return (neuron0x23102e0()*0.00876996);
}

double NNfunction-NN_6_7::synapse0x2322f00() {
   return (neuron0x2310620()*1.59389);
}

double NNfunction-NN_6_7::synapse0x2323280() {
   return (neuron0x230ba60()*0.0425295);
}

double NNfunction-NN_6_7::synapse0x23232c0() {
   return (neuron0x230bda0()*-0.00548128);
}

double NNfunction-NN_6_7::synapse0x2323300() {
   return (neuron0x230c0e0()*5.29855);
}

double NNfunction-NN_6_7::synapse0x2323340() {
   return (neuron0x230c420()*-0.0495731);
}

double NNfunction-NN_6_7::synapse0x2323380() {
   return (neuron0x230c760()*0.0331555);
}

double NNfunction-NN_6_7::synapse0x23233c0() {
   return (neuron0x230caa0()*-0.00671527);
}

double NNfunction-NN_6_7::synapse0x2323400() {
   return (neuron0x230cde0()*-0.0103664);
}

double NNfunction-NN_6_7::synapse0x2323440() {
   return (neuron0x230d120()*0.00662931);
}

double NNfunction-NN_6_7::synapse0x2323480() {
   return (neuron0x230d460()*-0.0164341);
}

double NNfunction-NN_6_7::synapse0x23234c0() {
   return (neuron0x230d7a0()*-0.019681);
}

double NNfunction-NN_6_7::synapse0x2323500() {
   return (neuron0x230dae0()*-0.000454431);
}

double NNfunction-NN_6_7::synapse0x2323540() {
   return (neuron0x230de20()*0.0369209);
}

double NNfunction-NN_6_7::synapse0x2323580() {
   return (neuron0x230e160()*0.0207303);
}

double NNfunction-NN_6_7::synapse0x23235c0() {
   return (neuron0x230e4a0()*3.10786e-05);
}

double NNfunction-NN_6_7::synapse0x2323600() {
   return (neuron0x230e7e0()*-0.00325489);
}

double NNfunction-NN_6_7::synapse0x2323640() {
   return (neuron0x230eb20()*0.0146758);
}

double NNfunction-NN_6_7::synapse0x23230d0() {
   return (neuron0x230ee60()*-0.00373822);
}

double NNfunction-NN_6_7::synapse0x2323110() {
   return (neuron0x230f3c0()*0.0144833);
}

double NNfunction-NN_6_7::synapse0x2323790() {
   return (neuron0x230f5e0()*-0.00230831);
}

double NNfunction-NN_6_7::synapse0x23237d0() {
   return (neuron0x230f920()*-0.00171843);
}

double NNfunction-NN_6_7::synapse0x2323810() {
   return (neuron0x230fc60()*-0.00729508);
}

double NNfunction-NN_6_7::synapse0x2323850() {
   return (neuron0x230ffa0()*-0.00776314);
}

double NNfunction-NN_6_7::synapse0x2323890() {
   return (neuron0x23102e0()*-0.0096104);
}

double NNfunction-NN_6_7::synapse0x23238d0() {
   return (neuron0x2310620()*10.3354);
}

double NNfunction-NN_6_7::synapse0x2323c50() {
   return (neuron0x230ba60()*-0.020037);
}

double NNfunction-NN_6_7::synapse0x2323c90() {
   return (neuron0x230bda0()*0.0895368);
}

double NNfunction-NN_6_7::synapse0x2323cd0() {
   return (neuron0x230c0e0()*-0.0100974);
}

double NNfunction-NN_6_7::synapse0x2323d10() {
   return (neuron0x230c420()*-0.0775775);
}

double NNfunction-NN_6_7::synapse0x2323d50() {
   return (neuron0x230c760()*-0.130809);
}

double NNfunction-NN_6_7::synapse0x2323d90() {
   return (neuron0x230caa0()*0.0856515);
}

double NNfunction-NN_6_7::synapse0x2323dd0() {
   return (neuron0x230cde0()*0.501499);
}

double NNfunction-NN_6_7::synapse0x2323e10() {
   return (neuron0x230d120()*-0.0315455);
}

double NNfunction-NN_6_7::synapse0x2323e50() {
   return (neuron0x230d460()*0.100098);
}

double NNfunction-NN_6_7::synapse0x2323e90() {
   return (neuron0x230d7a0()*-0.0115692);
}

double NNfunction-NN_6_7::synapse0x2323ed0() {
   return (neuron0x230dae0()*0.0701372);
}

double NNfunction-NN_6_7::synapse0x2323f10() {
   return (neuron0x230de20()*-0.690139);
}

double NNfunction-NN_6_7::synapse0x2323f50() {
   return (neuron0x230e160()*0.398046);
}

double NNfunction-NN_6_7::synapse0x2323f90() {
   return (neuron0x230e4a0()*-0.47973);
}

double NNfunction-NN_6_7::synapse0x2323fd0() {
   return (neuron0x230e7e0()*0.258137);
}

double NNfunction-NN_6_7::synapse0x2324010() {
   return (neuron0x230eb20()*0.37804);
}

double NNfunction-NN_6_7::synapse0x2323aa0() {
   return (neuron0x230ee60()*-0.382391);
}

double NNfunction-NN_6_7::synapse0x2323ae0() {
   return (neuron0x230f3c0()*0.265601);
}

double NNfunction-NN_6_7::synapse0x2324160() {
   return (neuron0x230f5e0()*0.0165757);
}

double NNfunction-NN_6_7::synapse0x23241a0() {
   return (neuron0x230f920()*0.130864);
}

double NNfunction-NN_6_7::synapse0x23241e0() {
   return (neuron0x230fc60()*0.0105498);
}

double NNfunction-NN_6_7::synapse0x2324220() {
   return (neuron0x230ffa0()*0.0486119);
}

double NNfunction-NN_6_7::synapse0x2324260() {
   return (neuron0x23102e0()*0.0641192);
}

double NNfunction-NN_6_7::synapse0x23242a0() {
   return (neuron0x2310620()*-0.414777);
}

double NNfunction-NN_6_7::synapse0x2324620() {
   return (neuron0x230ba60()*-0.0547808);
}

double NNfunction-NN_6_7::synapse0x2324660() {
   return (neuron0x230bda0()*-0.0152059);
}

double NNfunction-NN_6_7::synapse0x23246a0() {
   return (neuron0x230c0e0()*3.24175);
}

double NNfunction-NN_6_7::synapse0x23246e0() {
   return (neuron0x230c420()*0.00103612);
}

double NNfunction-NN_6_7::synapse0x2324720() {
   return (neuron0x230c760()*-0.0101971);
}

double NNfunction-NN_6_7::synapse0x2324760() {
   return (neuron0x230caa0()*0.0197116);
}

double NNfunction-NN_6_7::synapse0x23247a0() {
   return (neuron0x230cde0()*0.00278604);
}

double NNfunction-NN_6_7::synapse0x23247e0() {
   return (neuron0x230d120()*0.00828574);
}

double NNfunction-NN_6_7::synapse0x2324820() {
   return (neuron0x230d460()*-0.000951126);
}

double NNfunction-NN_6_7::synapse0x2324860() {
   return (neuron0x230d7a0()*0.00759678);
}

double NNfunction-NN_6_7::synapse0x23248a0() {
   return (neuron0x230dae0()*-0.00639036);
}

double NNfunction-NN_6_7::synapse0x23248e0() {
   return (neuron0x230de20()*0.220737);
}

double NNfunction-NN_6_7::synapse0x2324920() {
   return (neuron0x230e160()*0.0477741);
}

double NNfunction-NN_6_7::synapse0x2324960() {
   return (neuron0x230e4a0()*0.0274641);
}

double NNfunction-NN_6_7::synapse0x23249a0() {
   return (neuron0x230e7e0()*-0.00617826);
}

double NNfunction-NN_6_7::synapse0x23249e0() {
   return (neuron0x230eb20()*0.0185038);
}

double NNfunction-NN_6_7::synapse0x2324470() {
   return (neuron0x230ee60()*0.003396);
}

double NNfunction-NN_6_7::synapse0x23244b0() {
   return (neuron0x230f3c0()*-0.00378723);
}

double NNfunction-NN_6_7::synapse0x2324b30() {
   return (neuron0x230f5e0()*0.00213166);
}

double NNfunction-NN_6_7::synapse0x2324b70() {
   return (neuron0x230f920()*0.00627651);
}

double NNfunction-NN_6_7::synapse0x2324bb0() {
   return (neuron0x230fc60()*0.0165359);
}

double NNfunction-NN_6_7::synapse0x2324bf0() {
   return (neuron0x230ffa0()*0.00254455);
}

double NNfunction-NN_6_7::synapse0x2324c30() {
   return (neuron0x23102e0()*-0.0107231);
}

double NNfunction-NN_6_7::synapse0x2324c70() {
   return (neuron0x2310620()*3.79273);
}

double NNfunction-NN_6_7::synapse0x2324ff0() {
   return (neuron0x230ba60()*0.00318859);
}

double NNfunction-NN_6_7::synapse0x2325030() {
   return (neuron0x230bda0()*-0.0035293);
}

double NNfunction-NN_6_7::synapse0x2325070() {
   return (neuron0x230c0e0()*-0.657601);
}

double NNfunction-NN_6_7::synapse0x23250b0() {
   return (neuron0x230c420()*-0.0294289);
}

double NNfunction-NN_6_7::synapse0x23250f0() {
   return (neuron0x230c760()*0.00154057);
}

double NNfunction-NN_6_7::synapse0x2325130() {
   return (neuron0x230caa0()*-0.00791717);
}

double NNfunction-NN_6_7::synapse0x2325170() {
   return (neuron0x230cde0()*0.0191028);
}

double NNfunction-NN_6_7::synapse0x23251b0() {
   return (neuron0x230d120()*-0.00873703);
}

double NNfunction-NN_6_7::synapse0x23251f0() {
   return (neuron0x230d460()*-0.00743071);
}

double NNfunction-NN_6_7::synapse0x2325230() {
   return (neuron0x230d7a0()*-0.0108984);
}

double NNfunction-NN_6_7::synapse0x2325270() {
   return (neuron0x230dae0()*-0.0114444);
}

double NNfunction-NN_6_7::synapse0x23252b0() {
   return (neuron0x230de20()*-2.95175);
}

double NNfunction-NN_6_7::synapse0x23252f0() {
   return (neuron0x230e160()*0.035407);
}

double NNfunction-NN_6_7::synapse0x2325330() {
   return (neuron0x230e4a0()*0.00612711);
}

double NNfunction-NN_6_7::synapse0x2325370() {
   return (neuron0x230e7e0()*0.0011592);
}

double NNfunction-NN_6_7::synapse0x23253b0() {
   return (neuron0x230eb20()*0.0365239);
}

double NNfunction-NN_6_7::synapse0x2324e40() {
   return (neuron0x230ee60()*-0.0159539);
}

double NNfunction-NN_6_7::synapse0x2324e80() {
   return (neuron0x230f3c0()*0.0213068);
}

double NNfunction-NN_6_7::synapse0x2325500() {
   return (neuron0x230f5e0()*-0.00701609);
}

double NNfunction-NN_6_7::synapse0x2325540() {
   return (neuron0x230f920()*0.00851615);
}

double NNfunction-NN_6_7::synapse0x2325580() {
   return (neuron0x230fc60()*0.0142443);
}

double NNfunction-NN_6_7::synapse0x23255c0() {
   return (neuron0x230ffa0()*-0.00417);
}

double NNfunction-NN_6_7::synapse0x2325600() {
   return (neuron0x23102e0()*0.00543215);
}

double NNfunction-NN_6_7::synapse0x2325640() {
   return (neuron0x2310620()*2.85748);
}

double NNfunction-NN_6_7::synapse0x23259c0() {
   return (neuron0x230ba60()*-0.0229759);
}

double NNfunction-NN_6_7::synapse0x2325a00() {
   return (neuron0x230bda0()*-0.0209004);
}

double NNfunction-NN_6_7::synapse0x2325a40() {
   return (neuron0x230c0e0()*0.165015);
}

double NNfunction-NN_6_7::synapse0x2325a80() {
   return (neuron0x230c420()*-3.87743);
}

double NNfunction-NN_6_7::synapse0x2325ac0() {
   return (neuron0x230c760()*0.0285996);
}

double NNfunction-NN_6_7::synapse0x2325b00() {
   return (neuron0x230caa0()*0.0182128);
}

double NNfunction-NN_6_7::synapse0x2325b40() {
   return (neuron0x230cde0()*0.00171677);
}

double NNfunction-NN_6_7::synapse0x2325b80() {
   return (neuron0x230d120()*-0.0114268);
}

double NNfunction-NN_6_7::synapse0x2325bc0() {
   return (neuron0x230d460()*-0.0126168);
}

double NNfunction-NN_6_7::synapse0x2325c00() {
   return (neuron0x230d7a0()*0.00423012);
}

double NNfunction-NN_6_7::synapse0x2325c40() {
   return (neuron0x230dae0()*-0.0182167);
}

double NNfunction-NN_6_7::synapse0x2325c80() {
   return (neuron0x230de20()*0.50123);
}

double NNfunction-NN_6_7::synapse0x2325cc0() {
   return (neuron0x230e160()*-0.0437991);
}

double NNfunction-NN_6_7::synapse0x2325d00() {
   return (neuron0x230e4a0()*0.0306951);
}

double NNfunction-NN_6_7::synapse0x2325d40() {
   return (neuron0x230e7e0()*-0.0313822);
}

double NNfunction-NN_6_7::synapse0x2325d80() {
   return (neuron0x230eb20()*-0.0156539);
}

double NNfunction-NN_6_7::synapse0x2325810() {
   return (neuron0x230ee60()*0.0246902);
}

double NNfunction-NN_6_7::synapse0x2325850() {
   return (neuron0x230f3c0()*-0.0119983);
}

double NNfunction-NN_6_7::synapse0x2325ed0() {
   return (neuron0x230f5e0()*-0.00672918);
}

double NNfunction-NN_6_7::synapse0x2325f10() {
   return (neuron0x230f920()*-0.0209359);
}

double NNfunction-NN_6_7::synapse0x2325f50() {
   return (neuron0x230fc60()*0.0135519);
}

double NNfunction-NN_6_7::synapse0x2325f90() {
   return (neuron0x230ffa0()*0.00559922);
}

double NNfunction-NN_6_7::synapse0x2325fd0() {
   return (neuron0x23102e0()*-0.00139513);
}

double NNfunction-NN_6_7::synapse0x2326010() {
   return (neuron0x2310620()*-0.100751);
}

double NNfunction-NN_6_7::synapse0x2326390() {
   return (neuron0x230ba60()*-0.141046);
}

double NNfunction-NN_6_7::synapse0x231a960() {
   return (neuron0x230bda0()*-0.0368024);
}

double NNfunction-NN_6_7::synapse0x231a9a0() {
   return (neuron0x230c0e0()*-0.298323);
}

double NNfunction-NN_6_7::synapse0x231a9e0() {
   return (neuron0x230c420()*0.569374);
}

double NNfunction-NN_6_7::synapse0x231ac30() {
   return (neuron0x230c760()*0.0733952);
}

double NNfunction-NN_6_7::synapse0x231ac70() {
   return (neuron0x230caa0()*0.140433);
}

double NNfunction-NN_6_7::synapse0x231acb0() {
   return (neuron0x230cde0()*0.254183);
}

double NNfunction-NN_6_7::synapse0x231af00() {
   return (neuron0x230d120()*0.109303);
}

double NNfunction-NN_6_7::synapse0x231af40() {
   return (neuron0x230d460()*-0.0334937);
}

double NNfunction-NN_6_7::synapse0x231b190() {
   return (neuron0x230d7a0()*0.0365219);
}

double NNfunction-NN_6_7::synapse0x231b1d0() {
   return (neuron0x230dae0()*0.450545);
}

double NNfunction-NN_6_7::synapse0x231b210() {
   return (neuron0x230de20()*0.340721);
}

double NNfunction-NN_6_7::synapse0x231b460() {
   return (neuron0x230e160()*0.242607);
}

double NNfunction-NN_6_7::synapse0x231b4a0() {
   return (neuron0x230e4a0()*0.283542);
}

double NNfunction-NN_6_7::synapse0x231b6f0() {
   return (neuron0x230e7e0()*-0.377141);
}

double NNfunction-NN_6_7::synapse0x231b730() {
   return (neuron0x230eb20()*-0.455682);
}

double NNfunction-NN_6_7::synapse0x23261e0() {
   return (neuron0x230ee60()*0.280729);
}

double NNfunction-NN_6_7::synapse0x2326220() {
   return (neuron0x230f3c0()*0.377053);
}

double NNfunction-NN_6_7::synapse0x231b880() {
   return (neuron0x230f5e0()*-0.192472);
}

double NNfunction-NN_6_7::synapse0x231bd90() {
   return (neuron0x230f920()*-0.283249);
}

double NNfunction-NN_6_7::synapse0x231bdd0() {
   return (neuron0x230fc60()*-0.0502033);
}

double NNfunction-NN_6_7::synapse0x231be10() {
   return (neuron0x230ffa0()*0.129471);
}

double NNfunction-NN_6_7::synapse0x231c060() {
   return (neuron0x23102e0()*0.184088);
}

double NNfunction-NN_6_7::synapse0x231c0a0() {
   return (neuron0x2310620()*0.195625);
}

double NNfunction-NN_6_7::synapse0x231b950() {
   return (neuron0x230ba60()*-0.0978177);
}

double NNfunction-NN_6_7::synapse0x231b990() {
   return (neuron0x230bda0()*-0.00516042);
}

double NNfunction-NN_6_7::synapse0x231b9d0() {
   return (neuron0x230c0e0()*-0.668551);
}

double NNfunction-NN_6_7::synapse0x231ba10() {
   return (neuron0x230c420()*-0.0365298);
}

double NNfunction-NN_6_7::synapse0x231c390() {
   return (neuron0x230c760()*0.013973);
}

double NNfunction-NN_6_7::synapse0x23286e0() {
   return (neuron0x230caa0()*-0.00390017);
}

double NNfunction-NN_6_7::synapse0x2328720() {
   return (neuron0x230cde0()*0.043644);
}

double NNfunction-NN_6_7::synapse0x2328760() {
   return (neuron0x230d120()*-0.0262428);
}

double NNfunction-NN_6_7::synapse0x23287a0() {
   return (neuron0x230d460()*0.00398722);
}

double NNfunction-NN_6_7::synapse0x23287e0() {
   return (neuron0x230d7a0()*-0.0218684);
}

double NNfunction-NN_6_7::synapse0x2328820() {
   return (neuron0x230dae0()*-0.00192991);
}

double NNfunction-NN_6_7::synapse0x2328860() {
   return (neuron0x230de20()*-0.577494);
}

double NNfunction-NN_6_7::synapse0x23288a0() {
   return (neuron0x230e160()*-0.0746186);
}

double NNfunction-NN_6_7::synapse0x23288e0() {
   return (neuron0x230e4a0()*-0.0324845);
}

double NNfunction-NN_6_7::synapse0x2328920() {
   return (neuron0x230e7e0()*-0.00341914);
}

double NNfunction-NN_6_7::synapse0x2328960() {
   return (neuron0x230eb20()*0.0182445);
}

double NNfunction-NN_6_7::synapse0x231c270() {
   return (neuron0x230ee60()*-0.0183184);
}

double NNfunction-NN_6_7::synapse0x231c2b0() {
   return (neuron0x230f3c0()*0.0127354);
}

double NNfunction-NN_6_7::synapse0x2328ab0() {
   return (neuron0x230f5e0()*-0.044303);
}

double NNfunction-NN_6_7::synapse0x2328af0() {
   return (neuron0x230f920()*0.0149881);
}

double NNfunction-NN_6_7::synapse0x2328b30() {
   return (neuron0x230fc60()*0.0190343);
}

double NNfunction-NN_6_7::synapse0x2328b70() {
   return (neuron0x230ffa0()*-0.00993347);
}

double NNfunction-NN_6_7::synapse0x2328bb0() {
   return (neuron0x23102e0()*0.00295797);
}

double NNfunction-NN_6_7::synapse0x2328bf0() {
   return (neuron0x2310620()*0.591398);
}

double NNfunction-NN_6_7::synapse0x2328f70() {
   return (neuron0x230ba60()*-0.0887713);
}

double NNfunction-NN_6_7::synapse0x2328fb0() {
   return (neuron0x230bda0()*0.0136562);
}

double NNfunction-NN_6_7::synapse0x2328ff0() {
   return (neuron0x230c0e0()*0.369422);
}

double NNfunction-NN_6_7::synapse0x2329030() {
   return (neuron0x230c420()*0.754608);
}

double NNfunction-NN_6_7::synapse0x2329070() {
   return (neuron0x230c760()*0.010523);
}

double NNfunction-NN_6_7::synapse0x23290b0() {
   return (neuron0x230caa0()*-0.0379525);
}

double NNfunction-NN_6_7::synapse0x23290f0() {
   return (neuron0x230cde0()*0.0371104);
}

double NNfunction-NN_6_7::synapse0x2329130() {
   return (neuron0x230d120()*-0.0954962);
}

double NNfunction-NN_6_7::synapse0x2329170() {
   return (neuron0x230d460()*0.01038);
}

double NNfunction-NN_6_7::synapse0x23291b0() {
   return (neuron0x230d7a0()*-0.0165493);
}

double NNfunction-NN_6_7::synapse0x23291f0() {
   return (neuron0x230dae0()*0.00521723);
}

double NNfunction-NN_6_7::synapse0x2329230() {
   return (neuron0x230de20()*0.0930389);
}

double NNfunction-NN_6_7::synapse0x2329270() {
   return (neuron0x230e160()*-0.00800462);
}

double NNfunction-NN_6_7::synapse0x23292b0() {
   return (neuron0x230e4a0()*0.000858749);
}

double NNfunction-NN_6_7::synapse0x23292f0() {
   return (neuron0x230e7e0()*-0.0127594);
}

double NNfunction-NN_6_7::synapse0x2329330() {
   return (neuron0x230eb20()*-0.0568493);
}

double NNfunction-NN_6_7::synapse0x2328dc0() {
   return (neuron0x230ee60()*0.0342527);
}

double NNfunction-NN_6_7::synapse0x2328e00() {
   return (neuron0x230f3c0()*-0.00566599);
}

double NNfunction-NN_6_7::synapse0x2329480() {
   return (neuron0x230f5e0()*-0.0337663);
}

double NNfunction-NN_6_7::synapse0x23294c0() {
   return (neuron0x230f920()*4.49726e-05);
}

double NNfunction-NN_6_7::synapse0x2329500() {
   return (neuron0x230fc60()*-0.026997);
}

double NNfunction-NN_6_7::synapse0x2329540() {
   return (neuron0x230ffa0()*-0.00664323);
}

double NNfunction-NN_6_7::synapse0x2329580() {
   return (neuron0x23102e0()*-0.0125891);
}

double NNfunction-NN_6_7::synapse0x23295c0() {
   return (neuron0x2310620()*-0.0441413);
}

double NNfunction-NN_6_7::synapse0x2329940() {
   return (neuron0x230ba60()*-0.0173508);
}

double NNfunction-NN_6_7::synapse0x2329980() {
   return (neuron0x230bda0()*0.0196772);
}

double NNfunction-NN_6_7::synapse0x23299c0() {
   return (neuron0x230c0e0()*-1.79699);
}

double NNfunction-NN_6_7::synapse0x2329a00() {
   return (neuron0x230c420()*0.0721562);
}

double NNfunction-NN_6_7::synapse0x2329a40() {
   return (neuron0x230c760()*-0.0697064);
}

double NNfunction-NN_6_7::synapse0x2329a80() {
   return (neuron0x230caa0()*-0.0149274);
}

double NNfunction-NN_6_7::synapse0x2329ac0() {
   return (neuron0x230cde0()*-0.0375986);
}

double NNfunction-NN_6_7::synapse0x2329b00() {
   return (neuron0x230d120()*0.0578831);
}

double NNfunction-NN_6_7::synapse0x2329b40() {
   return (neuron0x230d460()*-0.00138843);
}

double NNfunction-NN_6_7::synapse0x2329b80() {
   return (neuron0x230d7a0()*0.0388879);
}

double NNfunction-NN_6_7::synapse0x2329bc0() {
   return (neuron0x230dae0()*0.0204654);
}

double NNfunction-NN_6_7::synapse0x2329c00() {
   return (neuron0x230de20()*-0.0505517);
}

double NNfunction-NN_6_7::synapse0x2329c40() {
   return (neuron0x230e160()*-0.103494);
}

double NNfunction-NN_6_7::synapse0x2329c80() {
   return (neuron0x230e4a0()*-0.0441807);
}

double NNfunction-NN_6_7::synapse0x2329cc0() {
   return (neuron0x230e7e0()*-0.0440724);
}

double NNfunction-NN_6_7::synapse0x2329d00() {
   return (neuron0x230eb20()*-0.0575755);
}

double NNfunction-NN_6_7::synapse0x2329790() {
   return (neuron0x230ee60()*-0.00668612);
}

double NNfunction-NN_6_7::synapse0x23297d0() {
   return (neuron0x230f3c0()*-0.01098);
}

double NNfunction-NN_6_7::synapse0x2329e50() {
   return (neuron0x230f5e0()*-0.00608544);
}

double NNfunction-NN_6_7::synapse0x2329e90() {
   return (neuron0x230f920()*-0.0355644);
}

double NNfunction-NN_6_7::synapse0x2329ed0() {
   return (neuron0x230fc60()*0.0328221);
}

double NNfunction-NN_6_7::synapse0x2329f10() {
   return (neuron0x230ffa0()*0.0150018);
}

double NNfunction-NN_6_7::synapse0x2329f50() {
   return (neuron0x23102e0()*-0.0232292);
}

double NNfunction-NN_6_7::synapse0x2329f90() {
   return (neuron0x2310620()*0.641505);
}

double NNfunction-NN_6_7::synapse0x232a310() {
   return (neuron0x230ba60()*0.0438708);
}

double NNfunction-NN_6_7::synapse0x232a350() {
   return (neuron0x230bda0()*-0.00632177);
}

double NNfunction-NN_6_7::synapse0x232a390() {
   return (neuron0x230c0e0()*0.095198);
}

double NNfunction-NN_6_7::synapse0x232a3d0() {
   return (neuron0x230c420()*0.018125);
}

double NNfunction-NN_6_7::synapse0x232a410() {
   return (neuron0x230c760()*0.0180306);
}

double NNfunction-NN_6_7::synapse0x232a450() {
   return (neuron0x230caa0()*-0.0201087);
}

double NNfunction-NN_6_7::synapse0x232a490() {
   return (neuron0x230cde0()*0.0243765);
}

double NNfunction-NN_6_7::synapse0x232a4d0() {
   return (neuron0x230d120()*-0.086796);
}

double NNfunction-NN_6_7::synapse0x232a510() {
   return (neuron0x230d460()*-0.00082734);
}

double NNfunction-NN_6_7::synapse0x232a550() {
   return (neuron0x230d7a0()*-0.0469003);
}

double NNfunction-NN_6_7::synapse0x232a590() {
   return (neuron0x230dae0()*-0.0075958);
}

double NNfunction-NN_6_7::synapse0x232a5d0() {
   return (neuron0x230de20()*2.76975);
}

double NNfunction-NN_6_7::synapse0x232a610() {
   return (neuron0x230e160()*-0.00630592);
}

double NNfunction-NN_6_7::synapse0x232a650() {
   return (neuron0x230e4a0()*0.0032739);
}

double NNfunction-NN_6_7::synapse0x232a690() {
   return (neuron0x230e7e0()*-0.020492);
}

double NNfunction-NN_6_7::synapse0x232a6d0() {
   return (neuron0x230eb20()*-0.0184378);
}

double NNfunction-NN_6_7::synapse0x232a160() {
   return (neuron0x230ee60()*0.0268225);
}

double NNfunction-NN_6_7::synapse0x232a1a0() {
   return (neuron0x230f3c0()*-0.0331061);
}

double NNfunction-NN_6_7::synapse0x232a820() {
   return (neuron0x230f5e0()*-0.0389715);
}

double NNfunction-NN_6_7::synapse0x232a860() {
   return (neuron0x230f920()*-0.0263276);
}

double NNfunction-NN_6_7::synapse0x232a8a0() {
   return (neuron0x230fc60()*-0.0210152);
}

double NNfunction-NN_6_7::synapse0x232a8e0() {
   return (neuron0x230ffa0()*-0.00680474);
}

double NNfunction-NN_6_7::synapse0x232a920() {
   return (neuron0x23102e0()*0.0102469);
}

double NNfunction-NN_6_7::synapse0x232a960() {
   return (neuron0x2310620()*1.48941);
}

double NNfunction-NN_6_7::synapse0x232ace0() {
   return (neuron0x230ba60()*-0.452435);
}

double NNfunction-NN_6_7::synapse0x232ad20() {
   return (neuron0x230bda0()*-0.0987958);
}

double NNfunction-NN_6_7::synapse0x232ad60() {
   return (neuron0x230c0e0()*-0.0323815);
}

double NNfunction-NN_6_7::synapse0x232ada0() {
   return (neuron0x230c420()*-0.0530039);
}

double NNfunction-NN_6_7::synapse0x232ade0() {
   return (neuron0x230c760()*0.0290417);
}

double NNfunction-NN_6_7::synapse0x232ae20() {
   return (neuron0x230caa0()*0.138052);
}

double NNfunction-NN_6_7::synapse0x232ae60() {
   return (neuron0x230cde0()*-0.209977);
}

double NNfunction-NN_6_7::synapse0x232aea0() {
   return (neuron0x230d120()*-0.120634);
}

double NNfunction-NN_6_7::synapse0x232aee0() {
   return (neuron0x230d460()*-0.00631535);
}

double NNfunction-NN_6_7::synapse0x232af20() {
   return (neuron0x230d7a0()*0.0424569);
}

double NNfunction-NN_6_7::synapse0x232af60() {
   return (neuron0x230dae0()*-0.0306458);
}

double NNfunction-NN_6_7::synapse0x232afa0() {
   return (neuron0x230de20()*-0.0611774);
}

double NNfunction-NN_6_7::synapse0x232afe0() {
   return (neuron0x230e160()*-0.0353579);
}

double NNfunction-NN_6_7::synapse0x232b020() {
   return (neuron0x230e4a0()*0.037721);
}

double NNfunction-NN_6_7::synapse0x232b060() {
   return (neuron0x230e7e0()*-0.209707);
}

double NNfunction-NN_6_7::synapse0x232b0a0() {
   return (neuron0x230eb20()*0.20043);
}

double NNfunction-NN_6_7::synapse0x232ab30() {
   return (neuron0x230ee60()*-0.0502827);
}

double NNfunction-NN_6_7::synapse0x232ab70() {
   return (neuron0x230f3c0()*-0.043868);
}

double NNfunction-NN_6_7::synapse0x232b1f0() {
   return (neuron0x230f5e0()*0.183254);
}

double NNfunction-NN_6_7::synapse0x232b230() {
   return (neuron0x230f920()*-0.0601647);
}

double NNfunction-NN_6_7::synapse0x232b270() {
   return (neuron0x230fc60()*0.120335);
}

double NNfunction-NN_6_7::synapse0x232b2b0() {
   return (neuron0x230ffa0()*-0.0151345);
}

double NNfunction-NN_6_7::synapse0x232b2f0() {
   return (neuron0x23102e0()*-0.153989);
}

double NNfunction-NN_6_7::synapse0x232b330() {
   return (neuron0x2310620()*-0.140132);
}

double NNfunction-NN_6_7::synapse0x232b6b0() {
   return (neuron0x230ba60()*-0.068209);
}

double NNfunction-NN_6_7::synapse0x232b6f0() {
   return (neuron0x230bda0()*0.00516094);
}

double NNfunction-NN_6_7::synapse0x232b730() {
   return (neuron0x230c0e0()*0.781207);
}

double NNfunction-NN_6_7::synapse0x232b770() {
   return (neuron0x230c420()*-0.020333);
}

double NNfunction-NN_6_7::synapse0x232b7b0() {
   return (neuron0x230c760()*0.0271296);
}

double NNfunction-NN_6_7::synapse0x232b7f0() {
   return (neuron0x230caa0()*0.0131131);
}

double NNfunction-NN_6_7::synapse0x232b830() {
   return (neuron0x230cde0()*0.00378096);
}

double NNfunction-NN_6_7::synapse0x232b870() {
   return (neuron0x230d120()*0.0297604);
}

double NNfunction-NN_6_7::synapse0x232b8b0() {
   return (neuron0x230d460()*-0.00915613);
}

double NNfunction-NN_6_7::synapse0x232b8f0() {
   return (neuron0x230d7a0()*-0.00507444);
}

double NNfunction-NN_6_7::synapse0x232b930() {
   return (neuron0x230dae0()*-0.0209043);
}

double NNfunction-NN_6_7::synapse0x232b970() {
   return (neuron0x230de20()*-6.34071);
}

double NNfunction-NN_6_7::synapse0x232b9b0() {
   return (neuron0x230e160()*0.013304);
}

double NNfunction-NN_6_7::synapse0x232b9f0() {
   return (neuron0x230e4a0()*-0.0236932);
}

double NNfunction-NN_6_7::synapse0x232ba30() {
   return (neuron0x230e7e0()*0.0293611);
}

double NNfunction-NN_6_7::synapse0x232ba70() {
   return (neuron0x230eb20()*0.00768806);
}

double NNfunction-NN_6_7::synapse0x232b500() {
   return (neuron0x230ee60()*-0.0305682);
}

double NNfunction-NN_6_7::synapse0x232b540() {
   return (neuron0x230f3c0()*-0.0102523);
}

double NNfunction-NN_6_7::synapse0x232bbc0() {
   return (neuron0x230f5e0()*0.0142348);
}

double NNfunction-NN_6_7::synapse0x232bc00() {
   return (neuron0x230f920()*0.00200922);
}

double NNfunction-NN_6_7::synapse0x232bc40() {
   return (neuron0x230fc60()*0.0148839);
}

double NNfunction-NN_6_7::synapse0x232bc80() {
   return (neuron0x230ffa0()*0.00752623);
}

double NNfunction-NN_6_7::synapse0x232bcc0() {
   return (neuron0x23102e0()*0.00652863);
}

double NNfunction-NN_6_7::synapse0x232bd00() {
   return (neuron0x2310620()*-1.15812);
}

double NNfunction-NN_6_7::synapse0x232c080() {
   return (neuron0x230ba60()*0.703235);
}

double NNfunction-NN_6_7::synapse0x232c0c0() {
   return (neuron0x230bda0()*0.0283804);
}

double NNfunction-NN_6_7::synapse0x232c100() {
   return (neuron0x230c0e0()*-0.501675);
}

double NNfunction-NN_6_7::synapse0x232c140() {
   return (neuron0x230c420()*-0.0124324);
}

double NNfunction-NN_6_7::synapse0x232c180() {
   return (neuron0x230c760()*-0.0172891);
}

double NNfunction-NN_6_7::synapse0x232c1c0() {
   return (neuron0x230caa0()*0.00339448);
}

double NNfunction-NN_6_7::synapse0x232c200() {
   return (neuron0x230cde0()*0.0421938);
}

double NNfunction-NN_6_7::synapse0x232c240() {
   return (neuron0x230d120()*0.028373);
}

double NNfunction-NN_6_7::synapse0x232c280() {
   return (neuron0x230d460()*-0.00555925);
}

double NNfunction-NN_6_7::synapse0x232c2c0() {
   return (neuron0x230d7a0()*-0.0152437);
}

double NNfunction-NN_6_7::synapse0x232c300() {
   return (neuron0x230dae0()*-0.0330101);
}

double NNfunction-NN_6_7::synapse0x232c340() {
   return (neuron0x230de20()*0.137767);
}

double NNfunction-NN_6_7::synapse0x232c380() {
   return (neuron0x230e160()*-0.00598273);
}

double NNfunction-NN_6_7::synapse0x232c3c0() {
   return (neuron0x230e4a0()*-0.033535);
}

double NNfunction-NN_6_7::synapse0x232c400() {
   return (neuron0x230e7e0()*0.0093997);
}

double NNfunction-NN_6_7::synapse0x232c440() {
   return (neuron0x230eb20()*-0.0722576);
}

double NNfunction-NN_6_7::synapse0x232bed0() {
   return (neuron0x230ee60()*0.0810676);
}

double NNfunction-NN_6_7::synapse0x232bf10() {
   return (neuron0x230f3c0()*-0.020282);
}

double NNfunction-NN_6_7::synapse0x232c590() {
   return (neuron0x230f5e0()*-0.00237879);
}

double NNfunction-NN_6_7::synapse0x232c5d0() {
   return (neuron0x230f920()*-0.0306258);
}

double NNfunction-NN_6_7::synapse0x232c610() {
   return (neuron0x230fc60()*-0.00662717);
}

double NNfunction-NN_6_7::synapse0x232c650() {
   return (neuron0x230ffa0()*-0.0191577);
}

double NNfunction-NN_6_7::synapse0x232c690() {
   return (neuron0x23102e0()*0.00872245);
}

double NNfunction-NN_6_7::synapse0x232c6d0() {
   return (neuron0x2310620()*-2.93429);
}

double NNfunction-NN_6_7::synapse0x232ca50() {
   return (neuron0x230ba60()*0.265489);
}

double NNfunction-NN_6_7::synapse0x232ca90() {
   return (neuron0x230bda0()*0.140669);
}

double NNfunction-NN_6_7::synapse0x232cad0() {
   return (neuron0x230c0e0()*-0.0367626);
}

double NNfunction-NN_6_7::synapse0x232cb10() {
   return (neuron0x230c420()*0.794587);
}

double NNfunction-NN_6_7::synapse0x232cb50() {
   return (neuron0x230c760()*-0.11648);
}

double NNfunction-NN_6_7::synapse0x232cb90() {
   return (neuron0x230caa0()*-0.129758);
}

double NNfunction-NN_6_7::synapse0x232cbd0() {
   return (neuron0x230cde0()*-0.0917649);
}

double NNfunction-NN_6_7::synapse0x232cc10() {
   return (neuron0x230d120()*-0.0262688);
}

double NNfunction-NN_6_7::synapse0x232cc50() {
   return (neuron0x230d460()*0.0146208);
}

double NNfunction-NN_6_7::synapse0x232cc90() {
   return (neuron0x230d7a0()*-0.0587846);
}

double NNfunction-NN_6_7::synapse0x232ccd0() {
   return (neuron0x230dae0()*0.150701);
}

double NNfunction-NN_6_7::synapse0x232cd10() {
   return (neuron0x230de20()*-1.13265);
}

double NNfunction-NN_6_7::synapse0x232cd50() {
   return (neuron0x230e160()*0.00695601);
}

double NNfunction-NN_6_7::synapse0x232cd90() {
   return (neuron0x230e4a0()*0.17109);
}

double NNfunction-NN_6_7::synapse0x232cdd0() {
   return (neuron0x230e7e0()*0.343706);
}

double NNfunction-NN_6_7::synapse0x232ce10() {
   return (neuron0x230eb20()*-0.0702757);
}

double NNfunction-NN_6_7::synapse0x232c8a0() {
   return (neuron0x230ee60()*0.0309923);
}

double NNfunction-NN_6_7::synapse0x232c8e0() {
   return (neuron0x230f3c0()*-0.0621389);
}

double NNfunction-NN_6_7::synapse0x232cf60() {
   return (neuron0x230f5e0()*-0.007558);
}

double NNfunction-NN_6_7::synapse0x232cfa0() {
   return (neuron0x230f920()*0.0336136);
}

double NNfunction-NN_6_7::synapse0x232cfe0() {
   return (neuron0x230fc60()*-0.0202289);
}

double NNfunction-NN_6_7::synapse0x232d020() {
   return (neuron0x230ffa0()*-0.0417794);
}

double NNfunction-NN_6_7::synapse0x232d060() {
   return (neuron0x23102e0()*0.0811971);
}

double NNfunction-NN_6_7::synapse0x232d0a0() {
   return (neuron0x2310620()*-0.00995082);
}

double NNfunction-NN_6_7::synapse0x2315b50() {
   return (neuron0x230ba60()*-0.0262546);
}

double NNfunction-NN_6_7::synapse0x2315b90() {
   return (neuron0x230bda0()*-0.0101841);
}

double NNfunction-NN_6_7::synapse0x2315bd0() {
   return (neuron0x230c0e0()*-0.768462);
}

double NNfunction-NN_6_7::synapse0x2315c10() {
   return (neuron0x230c420()*-0.0746667);
}

double NNfunction-NN_6_7::synapse0x2315c50() {
   return (neuron0x230c760()*-0.000322761);
}

double NNfunction-NN_6_7::synapse0x2315c90() {
   return (neuron0x230caa0()*-0.0341516);
}

double NNfunction-NN_6_7::synapse0x2315cd0() {
   return (neuron0x230cde0()*0.0245201);
}

double NNfunction-NN_6_7::synapse0x2315d10() {
   return (neuron0x230d120()*-0.0406639);
}

double NNfunction-NN_6_7::synapse0x232d830() {
   return (neuron0x230d460()*0.00508222);
}

double NNfunction-NN_6_7::synapse0x232d870() {
   return (neuron0x230d7a0()*0.0100395);
}

double NNfunction-NN_6_7::synapse0x232d8b0() {
   return (neuron0x230dae0()*-0.0232765);
}

double NNfunction-NN_6_7::synapse0x232d8f0() {
   return (neuron0x230de20()*0.0250433);
}

double NNfunction-NN_6_7::synapse0x232d930() {
   return (neuron0x230e160()*3.20222);
}

double NNfunction-NN_6_7::synapse0x232d970() {
   return (neuron0x230e4a0()*0.0530225);
}

double NNfunction-NN_6_7::synapse0x232d9b0() {
   return (neuron0x230e7e0()*0.0189683);
}

double NNfunction-NN_6_7::synapse0x232d9f0() {
   return (neuron0x230eb20()*0.000218078);
}

double NNfunction-NN_6_7::synapse0x232d270() {
   return (neuron0x230ee60()*0.0161788);
}

double NNfunction-NN_6_7::synapse0x232d2b0() {
   return (neuron0x230f3c0()*0.0281266);
}

double NNfunction-NN_6_7::synapse0x232db40() {
   return (neuron0x230f5e0()*0.0400534);
}

double NNfunction-NN_6_7::synapse0x232db80() {
   return (neuron0x230f920()*-0.0547454);
}

double NNfunction-NN_6_7::synapse0x232dbc0() {
   return (neuron0x230fc60()*-0.0119131);
}

double NNfunction-NN_6_7::synapse0x232dc00() {
   return (neuron0x230ffa0()*-0.00285695);
}

double NNfunction-NN_6_7::synapse0x232dc40() {
   return (neuron0x23102e0()*0.036146);
}

double NNfunction-NN_6_7::synapse0x232dc80() {
   return (neuron0x2310620()*-0.33821);
}

double NNfunction-NN_6_7::synapse0x232e000() {
   return (neuron0x230ba60()*0.256663);
}

double NNfunction-NN_6_7::synapse0x232e040() {
   return (neuron0x230bda0()*0.180378);
}

double NNfunction-NN_6_7::synapse0x232e080() {
   return (neuron0x230c0e0()*-0.141779);
}

double NNfunction-NN_6_7::synapse0x232e0c0() {
   return (neuron0x230c420()*-0.190572);
}

double NNfunction-NN_6_7::synapse0x232e100() {
   return (neuron0x230c760()*-0.337111);
}

double NNfunction-NN_6_7::synapse0x232e140() {
   return (neuron0x230caa0()*-0.390983);
}

double NNfunction-NN_6_7::synapse0x232e180() {
   return (neuron0x230cde0()*-0.308018);
}

double NNfunction-NN_6_7::synapse0x232e1c0() {
   return (neuron0x230d120()*-0.427546);
}

double NNfunction-NN_6_7::synapse0x232e200() {
   return (neuron0x230d460()*0.0231571);
}

double NNfunction-NN_6_7::synapse0x232e240() {
   return (neuron0x230d7a0()*0.150448);
}

double NNfunction-NN_6_7::synapse0x232e280() {
   return (neuron0x230dae0()*0.186755);
}

double NNfunction-NN_6_7::synapse0x232e2c0() {
   return (neuron0x230de20()*-0.00172496);
}

double NNfunction-NN_6_7::synapse0x232e300() {
   return (neuron0x230e160()*0.202408);
}

double NNfunction-NN_6_7::synapse0x232e340() {
   return (neuron0x230e4a0()*-0.130611);
}

double NNfunction-NN_6_7::synapse0x232e380() {
   return (neuron0x230e7e0()*0.0379048);
}

double NNfunction-NN_6_7::synapse0x232e3c0() {
   return (neuron0x230eb20()*0.152638);
}

double NNfunction-NN_6_7::synapse0x232de50() {
   return (neuron0x230ee60()*0.108917);
}

double NNfunction-NN_6_7::synapse0x232de90() {
   return (neuron0x230f3c0()*-0.0370781);
}

double NNfunction-NN_6_7::synapse0x232e510() {
   return (neuron0x230f5e0()*0.0936862);
}

double NNfunction-NN_6_7::synapse0x232e550() {
   return (neuron0x230f920()*-0.143372);
}

double NNfunction-NN_6_7::synapse0x232e590() {
   return (neuron0x230fc60()*0.132205);
}

double NNfunction-NN_6_7::synapse0x232e5d0() {
   return (neuron0x230ffa0()*-0.135747);
}

double NNfunction-NN_6_7::synapse0x232e610() {
   return (neuron0x23102e0()*-0.00969681);
}

double NNfunction-NN_6_7::synapse0x232e650() {
   return (neuron0x2310620()*-0.398918);
}

double NNfunction-NN_6_7::synapse0x232e9d0() {
   return (neuron0x230ba60()*0.00828391);
}

double NNfunction-NN_6_7::synapse0x232ea10() {
   return (neuron0x230bda0()*-0.0152868);
}

double NNfunction-NN_6_7::synapse0x232ea50() {
   return (neuron0x230c0e0()*-0.211147);
}

double NNfunction-NN_6_7::synapse0x232ea90() {
   return (neuron0x230c420()*-4.13512);
}

double NNfunction-NN_6_7::synapse0x232ead0() {
   return (neuron0x230c760()*0.010626);
}

double NNfunction-NN_6_7::synapse0x232eb10() {
   return (neuron0x230caa0()*0.0210396);
}

double NNfunction-NN_6_7::synapse0x232eb50() {
   return (neuron0x230cde0()*0.0106176);
}

double NNfunction-NN_6_7::synapse0x232eb90() {
   return (neuron0x230d120()*0.00277003);
}

double NNfunction-NN_6_7::synapse0x232ebd0() {
   return (neuron0x230d460()*-0.0129926);
}

double NNfunction-NN_6_7::synapse0x232ec10() {
   return (neuron0x230d7a0()*-0.00361889);
}

double NNfunction-NN_6_7::synapse0x232ec50() {
   return (neuron0x230dae0()*-0.0390046);
}

double NNfunction-NN_6_7::synapse0x232ec90() {
   return (neuron0x230de20()*-0.08846);
}

double NNfunction-NN_6_7::synapse0x232ecd0() {
   return (neuron0x230e160()*0.0369668);
}

double NNfunction-NN_6_7::synapse0x232ed10() {
   return (neuron0x230e4a0()*-0.00571143);
}

double NNfunction-NN_6_7::synapse0x232ed50() {
   return (neuron0x230e7e0()*-0.0120138);
}

double NNfunction-NN_6_7::synapse0x232ed90() {
   return (neuron0x230eb20()*0.0183185);
}

double NNfunction-NN_6_7::synapse0x232e820() {
   return (neuron0x230ee60()*-0.0146138);
}

double NNfunction-NN_6_7::synapse0x232e860() {
   return (neuron0x230f3c0()*0.0119483);
}

double NNfunction-NN_6_7::synapse0x231f390() {
   return (neuron0x230f5e0()*0.0129573);
}

double NNfunction-NN_6_7::synapse0x231f3d0() {
   return (neuron0x230f920()*0.00173071);
}

double NNfunction-NN_6_7::synapse0x231f410() {
   return (neuron0x230fc60()*0.0190725);
}

double NNfunction-NN_6_7::synapse0x231f450() {
   return (neuron0x230ffa0()*0.0100121);
}

double NNfunction-NN_6_7::synapse0x231f490() {
   return (neuron0x23102e0()*-0.00630855);
}

double NNfunction-NN_6_7::synapse0x231f4d0() {
   return (neuron0x2310620()*-0.0536751);
}

double NNfunction-NN_6_7::synapse0x231f850() {
   return (neuron0x230ba60()*0.0547536);
}

double NNfunction-NN_6_7::synapse0x231f890() {
   return (neuron0x230bda0()*0.00768825);
}

double NNfunction-NN_6_7::synapse0x231f8d0() {
   return (neuron0x230c0e0()*0.106908);
}

double NNfunction-NN_6_7::synapse0x231f910() {
   return (neuron0x230c420()*8.31688e-05);
}

double NNfunction-NN_6_7::synapse0x231f950() {
   return (neuron0x230c760()*0.0153278);
}

double NNfunction-NN_6_7::synapse0x231f990() {
   return (neuron0x230caa0()*0.0199244);
}

double NNfunction-NN_6_7::synapse0x231f9d0() {
   return (neuron0x230cde0()*-0.00298636);
}

double NNfunction-NN_6_7::synapse0x231fa10() {
   return (neuron0x230d120()*0.020352);
}

double NNfunction-NN_6_7::synapse0x231fa50() {
   return (neuron0x230d460()*-0.0239467);
}

double NNfunction-NN_6_7::synapse0x231fa90() {
   return (neuron0x230d7a0()*-0.010333);
}

double NNfunction-NN_6_7::synapse0x231fad0() {
   return (neuron0x230dae0()*-0.0115553);
}

double NNfunction-NN_6_7::synapse0x231fb10() {
   return (neuron0x230de20()*-0.0751888);
}

double NNfunction-NN_6_7::synapse0x231fb50() {
   return (neuron0x230e160()*-0.0147296);
}

double NNfunction-NN_6_7::synapse0x231fb90() {
   return (neuron0x230e4a0()*-0.0101463);
}

double NNfunction-NN_6_7::synapse0x231fbd0() {
   return (neuron0x230e7e0()*-0.0131393);
}

double NNfunction-NN_6_7::synapse0x231fc10() {
   return (neuron0x230eb20()*-0.00580919);
}

double NNfunction-NN_6_7::synapse0x231f6a0() {
   return (neuron0x230ee60()*-0.0105507);
}

double NNfunction-NN_6_7::synapse0x231f6e0() {
   return (neuron0x230f3c0()*-0.0120795);
}

double NNfunction-NN_6_7::synapse0x231fd60() {
   return (neuron0x230f5e0()*0.00942018);
}

double NNfunction-NN_6_7::synapse0x231fda0() {
   return (neuron0x230f920()*0.00808469);
}

double NNfunction-NN_6_7::synapse0x231fde0() {
   return (neuron0x230fc60()*0.00832274);
}

double NNfunction-NN_6_7::synapse0x231fe20() {
   return (neuron0x230ffa0()*-0.00944089);
}

double NNfunction-NN_6_7::synapse0x231fe60() {
   return (neuron0x23102e0()*-0.0135484);
}

double NNfunction-NN_6_7::synapse0x231fea0() {
   return (neuron0x2310620()*11.154);
}

double NNfunction-NN_6_7::synapse0x2320220() {
   return (neuron0x230ba60()*-0.0581504);
}

double NNfunction-NN_6_7::synapse0x2320260() {
   return (neuron0x230bda0()*-0.00201292);
}

double NNfunction-NN_6_7::synapse0x23202a0() {
   return (neuron0x230c0e0()*0.246622);
}

double NNfunction-NN_6_7::synapse0x23202e0() {
   return (neuron0x230c420()*-0.0483958);
}

double NNfunction-NN_6_7::synapse0x2320320() {
   return (neuron0x230c760()*0.0241053);
}

double NNfunction-NN_6_7::synapse0x2320360() {
   return (neuron0x230caa0()*-0.00100245);
}

double NNfunction-NN_6_7::synapse0x23203a0() {
   return (neuron0x230cde0()*0.00888512);
}

double NNfunction-NN_6_7::synapse0x23203e0() {
   return (neuron0x230d120()*-0.0144786);
}

double NNfunction-NN_6_7::synapse0x2320420() {
   return (neuron0x230d460()*-0.00182607);
}

double NNfunction-NN_6_7::synapse0x2320460() {
   return (neuron0x230d7a0()*-0.0115518);
}

double NNfunction-NN_6_7::synapse0x23204a0() {
   return (neuron0x230dae0()*-0.0213708);
}

double NNfunction-NN_6_7::synapse0x23204e0() {
   return (neuron0x230de20()*1.0973);
}

double NNfunction-NN_6_7::synapse0x2320520() {
   return (neuron0x230e160()*-0.011589);
}

double NNfunction-NN_6_7::synapse0x2320560() {
   return (neuron0x230e4a0()*-0.0456377);
}

double NNfunction-NN_6_7::synapse0x23205a0() {
   return (neuron0x230e7e0()*0.0145873);
}

double NNfunction-NN_6_7::synapse0x23205e0() {
   return (neuron0x230eb20()*0.0300477);
}

double NNfunction-NN_6_7::synapse0x2320070() {
   return (neuron0x230ee60()*-0.0182953);
}

double NNfunction-NN_6_7::synapse0x23200b0() {
   return (neuron0x230f3c0()*0.0155673);
}

double NNfunction-NN_6_7::synapse0x2320730() {
   return (neuron0x230f5e0()*-0.011037);
}

double NNfunction-NN_6_7::synapse0x2320770() {
   return (neuron0x230f920()*-0.01688);
}

double NNfunction-NN_6_7::synapse0x23207b0() {
   return (neuron0x230fc60()*-0.00491976);
}

double NNfunction-NN_6_7::synapse0x23207f0() {
   return (neuron0x230ffa0()*-0.00889551);
}

double NNfunction-NN_6_7::synapse0x2320830() {
   return (neuron0x23102e0()*-0.0035353);
}

double NNfunction-NN_6_7::synapse0x2320870() {
   return (neuron0x2310620()*-0.198172);
}

double NNfunction-NN_6_7::synapse0x2320bf0() {
   return (neuron0x230ba60()*0.638524);
}

double NNfunction-NN_6_7::synapse0x2320c30() {
   return (neuron0x230bda0()*0.0193096);
}

double NNfunction-NN_6_7::synapse0x2320c70() {
   return (neuron0x230c0e0()*0.437345);
}

double NNfunction-NN_6_7::synapse0x2320cb0() {
   return (neuron0x230c420()*0.0212301);
}

double NNfunction-NN_6_7::synapse0x2320cf0() {
   return (neuron0x230c760()*0.0237965);
}

double NNfunction-NN_6_7::synapse0x2320d30() {
   return (neuron0x230caa0()*-0.0141245);
}

double NNfunction-NN_6_7::synapse0x2320d70() {
   return (neuron0x230cde0()*0.0525576);
}

double NNfunction-NN_6_7::synapse0x2320db0() {
   return (neuron0x230d120()*0.00454516);
}

double NNfunction-NN_6_7::synapse0x2320df0() {
   return (neuron0x230d460()*-0.00918265);
}

double NNfunction-NN_6_7::synapse0x2320e30() {
   return (neuron0x230d7a0()*-0.0504702);
}

double NNfunction-NN_6_7::synapse0x2320e70() {
   return (neuron0x230dae0()*-0.00649163);
}

double NNfunction-NN_6_7::synapse0x2320eb0() {
   return (neuron0x230de20()*-0.0836971);
}

double NNfunction-NN_6_7::synapse0x2320ef0() {
   return (neuron0x230e160()*0.00811629);
}

double NNfunction-NN_6_7::synapse0x2320f30() {
   return (neuron0x230e4a0()*-0.0395891);
}

double NNfunction-NN_6_7::synapse0x2320f70() {
   return (neuron0x230e7e0()*0.044475);
}

double NNfunction-NN_6_7::synapse0x2320fb0() {
   return (neuron0x230eb20()*-0.0763695);
}

double NNfunction-NN_6_7::synapse0x2320a40() {
   return (neuron0x230ee60()*0.0229132);
}

double NNfunction-NN_6_7::synapse0x2320a80() {
   return (neuron0x230f3c0()*0.0119443);
}

double NNfunction-NN_6_7::synapse0x2321100() {
   return (neuron0x230f5e0()*-0.0207755);
}

double NNfunction-NN_6_7::synapse0x2321140() {
   return (neuron0x230f920()*-0.0171061);
}

double NNfunction-NN_6_7::synapse0x2321180() {
   return (neuron0x230fc60()*-0.0618113);
}

double NNfunction-NN_6_7::synapse0x23211c0() {
   return (neuron0x230ffa0()*-0.0082985);
}

double NNfunction-NN_6_7::synapse0x2321200() {
   return (neuron0x23102e0()*0.0378397);
}

double NNfunction-NN_6_7::synapse0x2321240() {
   return (neuron0x2310620()*3.42125);
}

double NNfunction-NN_6_7::synapse0x2333110() {
   return (neuron0x230ba60()*0.00870258);
}

double NNfunction-NN_6_7::synapse0x2333150() {
   return (neuron0x230bda0()*-0.017072);
}

double NNfunction-NN_6_7::synapse0x2333190() {
   return (neuron0x230c0e0()*-1.10908);
}

double NNfunction-NN_6_7::synapse0x23331d0() {
   return (neuron0x230c420()*0.0250759);
}

double NNfunction-NN_6_7::synapse0x2333210() {
   return (neuron0x230c760()*0.00242768);
}

double NNfunction-NN_6_7::synapse0x2333250() {
   return (neuron0x230caa0()*0.01632);
}

double NNfunction-NN_6_7::synapse0x2333290() {
   return (neuron0x230cde0()*-0.014458);
}

double NNfunction-NN_6_7::synapse0x23332d0() {
   return (neuron0x230d120()*0.00570586);
}

double NNfunction-NN_6_7::synapse0x2333310() {
   return (neuron0x230d460()*-0.00561765);
}

double NNfunction-NN_6_7::synapse0x2333350() {
   return (neuron0x230d7a0()*0.0100414);
}

double NNfunction-NN_6_7::synapse0x2333390() {
   return (neuron0x230dae0()*-0.0135076);
}

double NNfunction-NN_6_7::synapse0x23333d0() {
   return (neuron0x230de20()*-2.56751);
}

double NNfunction-NN_6_7::synapse0x2333410() {
   return (neuron0x230e160()*0.104767);
}

double NNfunction-NN_6_7::synapse0x2333450() {
   return (neuron0x230e4a0()*0.0191493);
}

double NNfunction-NN_6_7::synapse0x2333490() {
   return (neuron0x230e7e0()*0.0219663);
}

double NNfunction-NN_6_7::synapse0x23334d0() {
   return (neuron0x230eb20()*0.0383173);
}

double NNfunction-NN_6_7::synapse0x2321280() {
   return (neuron0x230ee60()*0.0242793);
}

double NNfunction-NN_6_7::synapse0x23212c0() {
   return (neuron0x230f3c0()*0.0300315);
}

double NNfunction-NN_6_7::synapse0x2333620() {
   return (neuron0x230f5e0()*-0.00148408);
}

double NNfunction-NN_6_7::synapse0x2333660() {
   return (neuron0x230f920()*0.00790672);
}

double NNfunction-NN_6_7::synapse0x23336a0() {
   return (neuron0x230fc60()*0.0294083);
}

double NNfunction-NN_6_7::synapse0x23336e0() {
   return (neuron0x230ffa0()*-0.0168757);
}

double NNfunction-NN_6_7::synapse0x2333720() {
   return (neuron0x23102e0()*-0.00943843);
}

double NNfunction-NN_6_7::synapse0x2333760() {
   return (neuron0x2310620()*-1.54928);
}

double NNfunction-NN_6_7::synapse0x2333ae0() {
   return (neuron0x230ba60()*-0.152572);
}

double NNfunction-NN_6_7::synapse0x2333b20() {
   return (neuron0x230bda0()*-0.0081167);
}

double NNfunction-NN_6_7::synapse0x2333b60() {
   return (neuron0x230c0e0()*-0.686055);
}

double NNfunction-NN_6_7::synapse0x2333ba0() {
   return (neuron0x230c420()*-0.009472);
}

double NNfunction-NN_6_7::synapse0x2333be0() {
   return (neuron0x230c760()*0.0548059);
}

double NNfunction-NN_6_7::synapse0x2333c20() {
   return (neuron0x230caa0()*-0.0536568);
}

double NNfunction-NN_6_7::synapse0x2333c60() {
   return (neuron0x230cde0()*0.0188934);
}

double NNfunction-NN_6_7::synapse0x2333ca0() {
   return (neuron0x230d120()*-0.0198781);
}

double NNfunction-NN_6_7::synapse0x2333ce0() {
   return (neuron0x230d460()*0.00082801);
}

double NNfunction-NN_6_7::synapse0x2333d20() {
   return (neuron0x230d7a0()*-0.0172185);
}

double NNfunction-NN_6_7::synapse0x2333d60() {
   return (neuron0x230dae0()*-0.00311845);
}

double NNfunction-NN_6_7::synapse0x2333da0() {
   return (neuron0x230de20()*-0.0455969);
}

double NNfunction-NN_6_7::synapse0x2333de0() {
   return (neuron0x230e160()*0.0699372);
}

double NNfunction-NN_6_7::synapse0x2333e20() {
   return (neuron0x230e4a0()*-0.0213162);
}

double NNfunction-NN_6_7::synapse0x2333e60() {
   return (neuron0x230e7e0()*-0.00209689);
}

double NNfunction-NN_6_7::synapse0x2333ea0() {
   return (neuron0x230eb20()*-0.0661783);
}

double NNfunction-NN_6_7::synapse0x2333930() {
   return (neuron0x230ee60()*0.0363815);
}

double NNfunction-NN_6_7::synapse0x2333970() {
   return (neuron0x230f3c0()*0.0316171);
}

double NNfunction-NN_6_7::synapse0x2333ff0() {
   return (neuron0x230f5e0()*-0.0529315);
}

double NNfunction-NN_6_7::synapse0x2334030() {
   return (neuron0x230f920()*-0.0448432);
}

double NNfunction-NN_6_7::synapse0x2334070() {
   return (neuron0x230fc60()*0.0359566);
}

double NNfunction-NN_6_7::synapse0x23340b0() {
   return (neuron0x230ffa0()*-0.05015);
}

double NNfunction-NN_6_7::synapse0x23340f0() {
   return (neuron0x23102e0()*0.0145313);
}

double NNfunction-NN_6_7::synapse0x2334130() {
   return (neuron0x2310620()*2.03742);
}

double NNfunction-NN_6_7::synapse0x23344b0() {
   return (neuron0x230ba60()*0.0845042);
}

double NNfunction-NN_6_7::synapse0x23344f0() {
   return (neuron0x230bda0()*0.00990719);
}

double NNfunction-NN_6_7::synapse0x2334530() {
   return (neuron0x230c0e0()*-0.771119);
}

double NNfunction-NN_6_7::synapse0x2334570() {
   return (neuron0x230c420()*0.0896893);
}

double NNfunction-NN_6_7::synapse0x23345b0() {
   return (neuron0x230c760()*-0.0267278);
}

double NNfunction-NN_6_7::synapse0x23345f0() {
   return (neuron0x230caa0()*0.0376599);
}

double NNfunction-NN_6_7::synapse0x2334630() {
   return (neuron0x230cde0()*0.0154129);
}

double NNfunction-NN_6_7::synapse0x2334670() {
   return (neuron0x230d120()*0.0330319);
}

double NNfunction-NN_6_7::synapse0x23346b0() {
   return (neuron0x230d460()*-0.0139477);
}

double NNfunction-NN_6_7::synapse0x23346f0() {
   return (neuron0x230d7a0()*0.0227312);
}

double NNfunction-NN_6_7::synapse0x2334730() {
   return (neuron0x230dae0()*0.0204429);
}

double NNfunction-NN_6_7::synapse0x2334770() {
   return (neuron0x230de20()*0.675284);
}

double NNfunction-NN_6_7::synapse0x23347b0() {
   return (neuron0x230e160()*0.0498697);
}

double NNfunction-NN_6_7::synapse0x23347f0() {
   return (neuron0x230e4a0()*0.00875435);
}

double NNfunction-NN_6_7::synapse0x2334830() {
   return (neuron0x230e7e0()*0.0111103);
}

double NNfunction-NN_6_7::synapse0x2334870() {
   return (neuron0x230eb20()*0.0965061);
}

double NNfunction-NN_6_7::synapse0x2334300() {
   return (neuron0x230ee60()*0.0217585);
}

double NNfunction-NN_6_7::synapse0x2334340() {
   return (neuron0x230f3c0()*0.0438583);
}

double NNfunction-NN_6_7::synapse0x23349c0() {
   return (neuron0x230f5e0()*0.0173845);
}

double NNfunction-NN_6_7::synapse0x2334a00() {
   return (neuron0x230f920()*0.0190922);
}

double NNfunction-NN_6_7::synapse0x2334a40() {
   return (neuron0x230fc60()*0.0155356);
}

double NNfunction-NN_6_7::synapse0x2334a80() {
   return (neuron0x230ffa0()*-0.00467239);
}

double NNfunction-NN_6_7::synapse0x2334ac0() {
   return (neuron0x23102e0()*0.0148223);
}

double NNfunction-NN_6_7::synapse0x2334b00() {
   return (neuron0x2310620()*0.836367);
}

double NNfunction-NN_6_7::synapse0x2334e80() {
   return (neuron0x230ba60()*0.342334);
}

double NNfunction-NN_6_7::synapse0x2334ec0() {
   return (neuron0x230bda0()*0.109214);
}

double NNfunction-NN_6_7::synapse0x2334f00() {
   return (neuron0x230c0e0()*-0.191794);
}

double NNfunction-NN_6_7::synapse0x2334f40() {
   return (neuron0x230c420()*0.0366753);
}

double NNfunction-NN_6_7::synapse0x2334f80() {
   return (neuron0x230c760()*-0.0527788);
}

double NNfunction-NN_6_7::synapse0x2334fc0() {
   return (neuron0x230caa0()*-0.132657);
}

double NNfunction-NN_6_7::synapse0x2335000() {
   return (neuron0x230cde0()*-0.0637697);
}

double NNfunction-NN_6_7::synapse0x2335040() {
   return (neuron0x230d120()*0.0180503);
}

double NNfunction-NN_6_7::synapse0x2335080() {
   return (neuron0x230d460()*-0.0616327);
}

double NNfunction-NN_6_7::synapse0x23350c0() {
   return (neuron0x230d7a0()*0.00602989);
}

double NNfunction-NN_6_7::synapse0x2335100() {
   return (neuron0x230dae0()*0.11859);
}

double NNfunction-NN_6_7::synapse0x2335140() {
   return (neuron0x230de20()*-0.46584);
}

double NNfunction-NN_6_7::synapse0x2335180() {
   return (neuron0x230e160()*0.16993);
}

double NNfunction-NN_6_7::synapse0x23351c0() {
   return (neuron0x230e4a0()*0.0962931);
}

double NNfunction-NN_6_7::synapse0x2335200() {
   return (neuron0x230e7e0()*0.123652);
}

double NNfunction-NN_6_7::synapse0x2335240() {
   return (neuron0x230eb20()*-0.0399381);
}

double NNfunction-NN_6_7::synapse0x2334cd0() {
   return (neuron0x230ee60()*0.0106128);
}

double NNfunction-NN_6_7::synapse0x2334d10() {
   return (neuron0x230f3c0()*0.036011);
}

double NNfunction-NN_6_7::synapse0x2335390() {
   return (neuron0x230f5e0()*-0.155779);
}

double NNfunction-NN_6_7::synapse0x23353d0() {
   return (neuron0x230f920()*-0.121135);
}

double NNfunction-NN_6_7::synapse0x2335410() {
   return (neuron0x230fc60()*-0.0830348);
}

double NNfunction-NN_6_7::synapse0x2335450() {
   return (neuron0x230ffa0()*-0.0429739);
}

double NNfunction-NN_6_7::synapse0x2335490() {
   return (neuron0x23102e0()*0.118851);
}

double NNfunction-NN_6_7::synapse0x23354d0() {
   return (neuron0x2310620()*-0.262387);
}

double NNfunction-NN_6_7::synapse0x2311a70() {
   return (neuron0x2310ac0()*-0.514579);
}

double NNfunction-NN_6_7::synapse0x2311ab0() {
   return (neuron0x23113d0()*-0.30736);
}

double NNfunction-NN_6_7::synapse0x2312f80() {
   return (neuron0x2311eb0()*0.517374);
}

double NNfunction-NN_6_7::synapse0x2312fc0() {
   return (neuron0x20cb740()*0.970152);
}

double NNfunction-NN_6_7::synapse0x2313950() {
   return (neuron0x2312cd0()*-0.306044);
}

double NNfunction-NN_6_7::synapse0x2313990() {
   return (neuron0x23136a0()*-0.00891609);
}

double NNfunction-NN_6_7::synapse0x2314720() {
   return (neuron0x2314470()*-2.74882);
}

double NNfunction-NN_6_7::synapse0x2314760() {
   return (neuron0x2314e40()*0.420427);
}

double NNfunction-NN_6_7::synapse0x23150f0() {
   return (neuron0x2315810()*1.02377);
}

double NNfunction-NN_6_7::synapse0x2315130() {
   return (neuron0x23162f0()*-0.941239);
}

double NNfunction-NN_6_7::synapse0x2315ac0() {
   return (neuron0x2316cc0()*-0.373984);
}

double NNfunction-NN_6_7::synapse0x2315b00() {
   return (neuron0x2313da0()*-0.090806);
}

double NNfunction-NN_6_7::synapse0x23165a0() {
   return (neuron0x2318870()*-0.985637);
}

double NNfunction-NN_6_7::synapse0x23165e0() {
   return (neuron0x2319240()*-0.408589);
}

double NNfunction-NN_6_7::synapse0x2316f70() {
   return (neuron0x2319c10()*-0.882045);
}

double NNfunction-NN_6_7::synapse0x2316fb0() {
   return (neuron0x231a5e0()*-1.66499);
}

double NNfunction-NN_6_7::synapse0x2314050() {
   return (neuron0x231c3f0()*1.37888);
}

double NNfunction-NN_6_7::synapse0x2314090() {
   return (neuron0x231c6d0()*1.19797);
}

double NNfunction-NN_6_7::synapse0x2318b20() {
   return (neuron0x231d0a0()*0.276923);
}

double NNfunction-NN_6_7::synapse0x2318b60() {
   return (neuron0x231da70()*-0.161863);
}

double NNfunction-NN_6_7::synapse0x23194f0() {
   return (neuron0x231e440()*-0.725765);
}

double NNfunction-NN_6_7::synapse0x2319530() {
   return (neuron0x231ee10()*1.8184);
}

double NNfunction-NN_6_7::synapse0x2319ec0() {
   return (neuron0x2317960()*-1.07233);
}

double NNfunction-NN_6_7::synapse0x2319f00() {
   return (neuron0x2318330()*-1.81794);
}

double NNfunction-NN_6_7::synapse0x231a890() {
   return (neuron0x2321ba0()*-0.0586853);
}

double NNfunction-NN_6_7::synapse0x231a8d0() {
   return (neuron0x2322570()*0.507868);
}

double NNfunction-NN_6_7::synapse0x230ea00() {
   return (neuron0x2322f40()*-0.38752);
}

double NNfunction-NN_6_7::synapse0x230ea40() {
   return (neuron0x2323910()*0.261906);
}

double NNfunction-NN_6_7::synapse0x231c980() {
   return (neuron0x23242e0()*0.742383);
}

double NNfunction-NN_6_7::synapse0x231c9c0() {
   return (neuron0x2324cb0()*-0.62591);
}

double NNfunction-NN_6_7::synapse0x231d350() {
   return (neuron0x2325680()*3.1209);
}

double NNfunction-NN_6_7::synapse0x231d390() {
   return (neuron0x2326050()*-0.0994265);
}

double NNfunction-NN_6_7::synapse0x231dd20() {
   return (neuron0x231c0e0()*0.509313);
}

double NNfunction-NN_6_7::synapse0x231dd60() {
   return (neuron0x2328c30()*-2.05033);
}

double NNfunction-NN_6_7::synapse0x231e6f0() {
   return (neuron0x2329600()*0.0733257);
}

double NNfunction-NN_6_7::synapse0x231e730() {
   return (neuron0x2329fd0()*-0.678049);
}

double NNfunction-NN_6_7::synapse0x231f0c0() {
   return (neuron0x232a9a0()*-0.129553);
}

double NNfunction-NN_6_7::synapse0x231f100() {
   return (neuron0x232b370()*0.460802);
}

double NNfunction-NN_6_7::synapse0x2317c10() {
   return (neuron0x232bd40()*0.0970133);
}

double NNfunction-NN_6_7::synapse0x2317c50() {
   return (neuron0x232c710()*0.25253);
}

double NNfunction-NN_6_7::synapse0x23214c0() {
   return (neuron0x232d0e0()*0.513067);
}

double NNfunction-NN_6_7::synapse0x2321500() {
   return (neuron0x232dcc0()*0.167387);
}

double NNfunction-NN_6_7::synapse0x2321e50() {
   return (neuron0x232e690()*-3.06237);
}

double NNfunction-NN_6_7::synapse0x2321e90() {
   return (neuron0x231f510()*-0.116715);
}

double NNfunction-NN_6_7::synapse0x2322820() {
   return (neuron0x231fee0()*0.200563);
}

double NNfunction-NN_6_7::synapse0x2322860() {
   return (neuron0x23208b0()*0.336451);
}

double NNfunction-NN_6_7::synapse0x23231f0() {
   return (neuron0x2332ef0()*0.336024);
}

double NNfunction-NN_6_7::synapse0x2323230() {
   return (neuron0x23337a0()*-0.583077);
}

double NNfunction-NN_6_7::synapse0x2323bc0() {
   return (neuron0x2334170()*-0.865796);
}

double NNfunction-NN_6_7::synapse0x2323c00() {
   return (neuron0x2334b40()*-0.120145);
}

double NNfunction-NN_6_7::synapse0x2326300() {
   return (neuron0x2310ac0()*0.521584);
}

double NNfunction-NN_6_7::synapse0x2326340() {
   return (neuron0x23113d0()*0.0602363);
}

double NNfunction-NN_6_7::synapse0x231b8c0() {
   return (neuron0x2311eb0()*-0.0345258);
}

double NNfunction-NN_6_7::synapse0x231b900() {
   return (neuron0x20cb740()*0.375335);
}

double NNfunction-NN_6_7::synapse0x2328ee0() {
   return (neuron0x2312cd0()*1.30286);
}

double NNfunction-NN_6_7::synapse0x2328f20() {
   return (neuron0x23136a0()*0.0435336);
}

double NNfunction-NN_6_7::synapse0x23298b0() {
   return (neuron0x2314470()*0.634593);
}

double NNfunction-NN_6_7::synapse0x23298f0() {
   return (neuron0x2314e40()*-1.54898);
}

double NNfunction-NN_6_7::synapse0x232a280() {
   return (neuron0x2315810()*-1.51114);
}

double NNfunction-NN_6_7::synapse0x232a2c0() {
   return (neuron0x23162f0()*0.143307);
}

double NNfunction-NN_6_7::synapse0x232ac50() {
   return (neuron0x2316cc0()*-0.84335);
}

double NNfunction-NN_6_7::synapse0x232ac90() {
   return (neuron0x2313da0()*-0.00559226);
}

double NNfunction-NN_6_7::synapse0x232b620() {
   return (neuron0x2318870()*0.324532);
}

double NNfunction-NN_6_7::synapse0x232b660() {
   return (neuron0x2319240()*0.167659);
}

double NNfunction-NN_6_7::synapse0x232bff0() {
   return (neuron0x2319c10()*-0.50501);
}

double NNfunction-NN_6_7::synapse0x232c030() {
   return (neuron0x231a5e0()*-0.647514);
}

double NNfunction-NN_6_7::synapse0x232c9c0() {
   return (neuron0x231c3f0()*-0.805878);
}

double NNfunction-NN_6_7::synapse0x232ca00() {
   return (neuron0x231c6d0()*-2.2416);
}

double NNfunction-NN_6_7::synapse0x232d390() {
   return (neuron0x231d0a0()*-0.0541404);
}

double NNfunction-NN_6_7::synapse0x232d3d0() {
   return (neuron0x231da70()*0.0757763);
}

double NNfunction-NN_6_7::synapse0x232df70() {
   return (neuron0x231e440()*0.588165);
}

double NNfunction-NN_6_7::synapse0x232dfb0() {
   return (neuron0x231ee10()*0.615922);
}

double NNfunction-NN_6_7::synapse0x232e940() {
   return (neuron0x2317960()*0.96025);
}

double NNfunction-NN_6_7::synapse0x232e980() {
   return (neuron0x2318330()*0.730666);
}

double NNfunction-NN_6_7::synapse0x231f7c0() {
   return (neuron0x2321ba0()*-1.34543);
}

double NNfunction-NN_6_7::synapse0x231f800() {
   return (neuron0x2322570()*-1.2006);
}

double NNfunction-NN_6_7::synapse0x2320190() {
   return (neuron0x2322f40()*-0.305562);
}

double NNfunction-NN_6_7::synapse0x23201d0() {
   return (neuron0x2323910()*0.00184675);
}

double NNfunction-NN_6_7::synapse0x2320b60() {
   return (neuron0x23242e0()*-0.989009);
}

double NNfunction-NN_6_7::synapse0x2320ba0() {
   return (neuron0x2324cb0()*0.867088);
}

double NNfunction-NN_6_7::synapse0x2333080() {
   return (neuron0x2325680()*-0.590716);
}

double NNfunction-NN_6_7::synapse0x23330c0() {
   return (neuron0x2326050()*0.00938651);
}

double NNfunction-NN_6_7::synapse0x2333a50() {
   return (neuron0x231c0e0()*-0.297);
}

double NNfunction-NN_6_7::synapse0x2333a90() {
   return (neuron0x2328c30()*0.214398);
}

double NNfunction-NN_6_7::synapse0x2334420() {
   return (neuron0x2329600()*-0.275179);
}

double NNfunction-NN_6_7::synapse0x2334460() {
   return (neuron0x2329fd0()*1.37245);
}

double NNfunction-NN_6_7::synapse0x2334df0() {
   return (neuron0x232a9a0()*0.150271);
}

double NNfunction-NN_6_7::synapse0x2334e30() {
   return (neuron0x232b370()*1.19551);
}

double NNfunction-NN_6_7::synapse0x2310ce0() {
   return (neuron0x232bd40()*-0.443952);
}

double NNfunction-NN_6_7::synapse0x2310d20() {
   return (neuron0x232c710()*-0.0738951);
}

double NNfunction-NN_6_7::synapse0x2324590() {
   return (neuron0x232d0e0()*-0.293035);
}

double NNfunction-NN_6_7::synapse0x23245d0() {
   return (neuron0x232dcc0()*-0.138775);
}

double NNfunction-NN_6_7::synapse0x2335510() {
   return (neuron0x232e690()*0.594693);
}

double NNfunction-NN_6_7::synapse0x2335550() {
   return (neuron0x231f510()*1.76528);
}

double NNfunction-NN_6_7::synapse0x2335590() {
   return (neuron0x231fee0()*0.830283);
}

double NNfunction-NN_6_7::synapse0x23355d0() {
   return (neuron0x23208b0()*0.00254841);
}

double NNfunction-NN_6_7::synapse0x233c480() {
   return (neuron0x2332ef0()*0.476874);
}

double NNfunction-NN_6_7::synapse0x233c4c0() {
   return (neuron0x23337a0()*-0.287063);
}

double NNfunction-NN_6_7::synapse0x233c500() {
   return (neuron0x2334170()*-1.12522);
}

double NNfunction-NN_6_7::synapse0x233c540() {
   return (neuron0x2334b40()*0.129645);
}

double NNfunction-NN_6_7::synapse0x233c8c0() {
   return (neuron0x2310ac0()*0.800236);
}

double NNfunction-NN_6_7::synapse0x233c900() {
   return (neuron0x23113d0()*-0.0955666);
}

double NNfunction-NN_6_7::synapse0x233c940() {
   return (neuron0x2311eb0()*0.253857);
}

double NNfunction-NN_6_7::synapse0x233c980() {
   return (neuron0x20cb740()*-0.235597);
}

double NNfunction-NN_6_7::synapse0x233c9c0() {
   return (neuron0x2312cd0()*-0.436909);
}

double NNfunction-NN_6_7::synapse0x233ca00() {
   return (neuron0x23136a0()*-0.073482);
}

double NNfunction-NN_6_7::synapse0x233ca40() {
   return (neuron0x2314470()*0.559772);
}

double NNfunction-NN_6_7::synapse0x233ca80() {
   return (neuron0x2314e40()*-0.95874);
}

double NNfunction-NN_6_7::synapse0x233cac0() {
   return (neuron0x2315810()*-0.969145);
}

double NNfunction-NN_6_7::synapse0x233cb00() {
   return (neuron0x23162f0()*-0.0977646);
}

double NNfunction-NN_6_7::synapse0x233cb40() {
   return (neuron0x2316cc0()*-0.330534);
}

double NNfunction-NN_6_7::synapse0x233cb80() {
   return (neuron0x2313da0()*0.0113407);
}

double NNfunction-NN_6_7::synapse0x233cbc0() {
   return (neuron0x2318870()*0.0761014);
}

double NNfunction-NN_6_7::synapse0x233cc00() {
   return (neuron0x2319240()*-0.326229);
}

double NNfunction-NN_6_7::synapse0x233cc40() {
   return (neuron0x2319c10()*0.223798);
}

double NNfunction-NN_6_7::synapse0x233cc80() {
   return (neuron0x231a5e0()*0.060585);
}

double NNfunction-NN_6_7::synapse0x233c710() {
   return (neuron0x231c3f0()*0.608699);
}

double NNfunction-NN_6_7::synapse0x233c750() {
   return (neuron0x231c6d0()*0.770722);
}

double NNfunction-NN_6_7::synapse0x233cdd0() {
   return (neuron0x231d0a0()*1.04472);
}

double NNfunction-NN_6_7::synapse0x233ce10() {
   return (neuron0x231da70()*0.0789609);
}

double NNfunction-NN_6_7::synapse0x233ce50() {
   return (neuron0x231e440()*0.312846);
}

double NNfunction-NN_6_7::synapse0x233ce90() {
   return (neuron0x231ee10()*-0.4246);
}

double NNfunction-NN_6_7::synapse0x233ced0() {
   return (neuron0x2317960()*-0.546885);
}

double NNfunction-NN_6_7::synapse0x233cf10() {
   return (neuron0x2318330()*0.0966444);
}

double NNfunction-NN_6_7::synapse0x233cf50() {
   return (neuron0x2321ba0()*0.421738);
}

double NNfunction-NN_6_7::synapse0x233cf90() {
   return (neuron0x2322570()*-1.73386);
}

double NNfunction-NN_6_7::synapse0x233cfd0() {
   return (neuron0x2322f40()*-1.72464);
}

double NNfunction-NN_6_7::synapse0x233d010() {
   return (neuron0x2323910()*-0.0117809);
}

double NNfunction-NN_6_7::synapse0x233d050() {
   return (neuron0x23242e0()*-3.91701);
}

double NNfunction-NN_6_7::synapse0x233d090() {
   return (neuron0x2324cb0()*-1.59162);
}

double NNfunction-NN_6_7::synapse0x233d0d0() {
   return (neuron0x2325680()*0.0325709);
}

double NNfunction-NN_6_7::synapse0x233d110() {
   return (neuron0x2326050()*-0.0580368);
}

double NNfunction-NN_6_7::synapse0x233ccc0() {
   return (neuron0x231c0e0()*-1.59042);
}

double NNfunction-NN_6_7::synapse0x233cd00() {
   return (neuron0x2328c30()*-0.0804344);
}

double NNfunction-NN_6_7::synapse0x233cd40() {
   return (neuron0x2329600()*0.041031);
}

double NNfunction-NN_6_7::synapse0x233cd80() {
   return (neuron0x2329fd0()*-0.372371);
}

double NNfunction-NN_6_7::synapse0x233d360() {
   return (neuron0x232a9a0()*-0.284064);
}

double NNfunction-NN_6_7::synapse0x233d3a0() {
   return (neuron0x232b370()*-1.24406);
}

double NNfunction-NN_6_7::synapse0x233d3e0() {
   return (neuron0x232bd40()*0.0293131);
}

double NNfunction-NN_6_7::synapse0x233d420() {
   return (neuron0x232c710()*0.0673517);
}

double NNfunction-NN_6_7::synapse0x233d460() {
   return (neuron0x232d0e0()*0.306411);
}

double NNfunction-NN_6_7::synapse0x233d4a0() {
   return (neuron0x232dcc0()*-0.0468473);
}

double NNfunction-NN_6_7::synapse0x233d4e0() {
   return (neuron0x232e690()*-0.0837993);
}

double NNfunction-NN_6_7::synapse0x233d520() {
   return (neuron0x231f510()*-3.00619);
}

double NNfunction-NN_6_7::synapse0x233d560() {
   return (neuron0x231fee0()*1.07559);
}

double NNfunction-NN_6_7::synapse0x233d5a0() {
   return (neuron0x23208b0()*-1.44358);
}

double NNfunction-NN_6_7::synapse0x233d5e0() {
   return (neuron0x2332ef0()*0.902557);
}

double NNfunction-NN_6_7::synapse0x233d620() {
   return (neuron0x23337a0()*-0.608581);
}

double NNfunction-NN_6_7::synapse0x233d660() {
   return (neuron0x2334170()*-0.100593);
}

double NNfunction-NN_6_7::synapse0x233d6a0() {
   return (neuron0x2334b40()*0.1436);
}

double NNfunction-NN_6_7::synapse0x233da20() {
   return (neuron0x2310ac0()*0.893962);
}

double NNfunction-NN_6_7::synapse0x233da60() {
   return (neuron0x23113d0()*0.922317);
}

double NNfunction-NN_6_7::synapse0x233daa0() {
   return (neuron0x2311eb0()*0.82469);
}

double NNfunction-NN_6_7::synapse0x233dae0() {
   return (neuron0x20cb740()*0.0639737);
}

double NNfunction-NN_6_7::synapse0x233db20() {
   return (neuron0x2312cd0()*1.22347);
}

double NNfunction-NN_6_7::synapse0x233db60() {
   return (neuron0x23136a0()*0.254449);
}

double NNfunction-NN_6_7::synapse0x233dba0() {
   return (neuron0x2314470()*0.265656);
}

double NNfunction-NN_6_7::synapse0x233dbe0() {
   return (neuron0x2314e40()*-1.00827);
}

double NNfunction-NN_6_7::synapse0x233dc20() {
   return (neuron0x2315810()*1.78141);
}

double NNfunction-NN_6_7::synapse0x233dc60() {
   return (neuron0x23162f0()*0.244426);
}

double NNfunction-NN_6_7::synapse0x233dca0() {
   return (neuron0x2316cc0()*-2.3647);
}

double NNfunction-NN_6_7::synapse0x233dce0() {
   return (neuron0x2313da0()*0.0815647);
}

double NNfunction-NN_6_7::synapse0x233dd20() {
   return (neuron0x2318870()*1.32406);
}

double NNfunction-NN_6_7::synapse0x233dd60() {
   return (neuron0x2319240()*0.103964);
}

double NNfunction-NN_6_7::synapse0x233dda0() {
   return (neuron0x2319c10()*0.295275);
}

double NNfunction-NN_6_7::synapse0x233dde0() {
   return (neuron0x231a5e0()*-0.28608);
}

double NNfunction-NN_6_7::synapse0x233d870() {
   return (neuron0x231c3f0()*-0.30092);
}

double NNfunction-NN_6_7::synapse0x233d8b0() {
   return (neuron0x231c6d0()*-0.471637);
}

double NNfunction-NN_6_7::synapse0x233df30() {
   return (neuron0x231d0a0()*0.742758);
}

double NNfunction-NN_6_7::synapse0x233df70() {
   return (neuron0x231da70()*0.0594999);
}

double NNfunction-NN_6_7::synapse0x233dfb0() {
   return (neuron0x231e440()*0.167381);
}

double NNfunction-NN_6_7::synapse0x233dff0() {
   return (neuron0x231ee10()*0.452983);
}

double NNfunction-NN_6_7::synapse0x233e030() {
   return (neuron0x2317960()*0.638084);
}

double NNfunction-NN_6_7::synapse0x233e070() {
   return (neuron0x2318330()*0.23182);
}

double NNfunction-NN_6_7::synapse0x233e0b0() {
   return (neuron0x2321ba0()*1.02283);
}

double NNfunction-NN_6_7::synapse0x233e0f0() {
   return (neuron0x2322570()*-0.32011);
}

double NNfunction-NN_6_7::synapse0x233e130() {
   return (neuron0x2322f40()*5.56423);
}

double NNfunction-NN_6_7::synapse0x233e170() {
   return (neuron0x2323910()*-8.81678e-05);
}

double NNfunction-NN_6_7::synapse0x233e1b0() {
   return (neuron0x23242e0()*-0.0909377);
}

double NNfunction-NN_6_7::synapse0x233e1f0() {
   return (neuron0x2324cb0()*0.0938121);
}

double NNfunction-NN_6_7::synapse0x233e230() {
   return (neuron0x2325680()*0.0952333);
}

double NNfunction-NN_6_7::synapse0x233e270() {
   return (neuron0x2326050()*0.143217);
}

double NNfunction-NN_6_7::synapse0x233de20() {
   return (neuron0x231c0e0()*-0.456492);
}

double NNfunction-NN_6_7::synapse0x233de60() {
   return (neuron0x2328c30()*0.494432);
}

double NNfunction-NN_6_7::synapse0x233dea0() {
   return (neuron0x2329600()*-0.301885);
}

double NNfunction-NN_6_7::synapse0x233dee0() {
   return (neuron0x2329fd0()*-0.851772);
}

double NNfunction-NN_6_7::synapse0x233e4c0() {
   return (neuron0x232a9a0()*0.783985);
}

double NNfunction-NN_6_7::synapse0x233e500() {
   return (neuron0x232b370()*0.185045);
}

double NNfunction-NN_6_7::synapse0x233e540() {
   return (neuron0x232bd40()*1.06651);
}

double NNfunction-NN_6_7::synapse0x233e580() {
   return (neuron0x232c710()*-0.076725);
}

double NNfunction-NN_6_7::synapse0x233e5c0() {
   return (neuron0x232d0e0()*-0.148159);
}

double NNfunction-NN_6_7::synapse0x233e600() {
   return (neuron0x232dcc0()*0.244794);
}

double NNfunction-NN_6_7::synapse0x233e640() {
   return (neuron0x232e690()*-0.126926);
}

double NNfunction-NN_6_7::synapse0x233e680() {
   return (neuron0x231f510()*-4.92054);
}

double NNfunction-NN_6_7::synapse0x233e6c0() {
   return (neuron0x231fee0()*0.779896);
}

double NNfunction-NN_6_7::synapse0x233e700() {
   return (neuron0x23208b0()*-0.778111);
}

double NNfunction-NN_6_7::synapse0x233e740() {
   return (neuron0x2332ef0()*0.596007);
}

double NNfunction-NN_6_7::synapse0x233e780() {
   return (neuron0x23337a0()*-0.628481);
}

double NNfunction-NN_6_7::synapse0x233e7c0() {
   return (neuron0x2334170()*-1.10569);
}

double NNfunction-NN_6_7::synapse0x233e800() {
   return (neuron0x2334b40()*0.567684);
}

double NNfunction-NN_6_7::synapse0x233eb80() {
   return (neuron0x2310ac0()*-0.522452);
}

double NNfunction-NN_6_7::synapse0x233ebc0() {
   return (neuron0x23113d0()*0.131689);
}

double NNfunction-NN_6_7::synapse0x233ec00() {
   return (neuron0x2311eb0()*-0.622494);
}

double NNfunction-NN_6_7::synapse0x233ec40() {
   return (neuron0x20cb740()*0.635322);
}

double NNfunction-NN_6_7::synapse0x233ec80() {
   return (neuron0x2312cd0()*0.900038);
}

double NNfunction-NN_6_7::synapse0x233ecc0() {
   return (neuron0x23136a0()*0.215314);
}

double NNfunction-NN_6_7::synapse0x233ed00() {
   return (neuron0x2314470()*-0.316226);
}

double NNfunction-NN_6_7::synapse0x233ed40() {
   return (neuron0x2314e40()*-0.514269);
}

double NNfunction-NN_6_7::synapse0x233ed80() {
   return (neuron0x2315810()*2.00439);
}

double NNfunction-NN_6_7::synapse0x233edc0() {
   return (neuron0x23162f0()*-0.231559);
}

double NNfunction-NN_6_7::synapse0x233ee00() {
   return (neuron0x2316cc0()*0.359564);
}

double NNfunction-NN_6_7::synapse0x233ee40() {
   return (neuron0x2313da0()*-0.0989701);
}

double NNfunction-NN_6_7::synapse0x233ee80() {
   return (neuron0x2318870()*-0.362613);
}

double NNfunction-NN_6_7::synapse0x233eec0() {
   return (neuron0x2319240()*0.312353);
}

double NNfunction-NN_6_7::synapse0x233ef00() {
   return (neuron0x2319c10()*-0.667157);
}

double NNfunction-NN_6_7::synapse0x233ef40() {
   return (neuron0x231a5e0()*-0.627252);
}

double NNfunction-NN_6_7::synapse0x233e9d0() {
   return (neuron0x231c3f0()*-0.922939);
}

double NNfunction-NN_6_7::synapse0x233ea10() {
   return (neuron0x231c6d0()*-1.89807);
}

double NNfunction-NN_6_7::synapse0x233f090() {
   return (neuron0x231d0a0()*-0.239336);
}

double NNfunction-NN_6_7::synapse0x233f0d0() {
   return (neuron0x231da70()*0.0106885);
}

double NNfunction-NN_6_7::synapse0x233f110() {
   return (neuron0x231e440()*0.774447);
}

double NNfunction-NN_6_7::synapse0x233f150() {
   return (neuron0x231ee10()*1.20064);
}

double NNfunction-NN_6_7::synapse0x233f190() {
   return (neuron0x2317960()*0.615008);
}

double NNfunction-NN_6_7::synapse0x233f1d0() {
   return (neuron0x2318330()*0.291112);
}

double NNfunction-NN_6_7::synapse0x233f210() {
   return (neuron0x2321ba0()*-1.65527);
}

double NNfunction-NN_6_7::synapse0x233f250() {
   return (neuron0x2322570()*-2.05303);
}

double NNfunction-NN_6_7::synapse0x233f290() {
   return (neuron0x2322f40()*0.556475);
}

double NNfunction-NN_6_7::synapse0x233f2d0() {
   return (neuron0x2323910()*-0.0159707);
}

double NNfunction-NN_6_7::synapse0x233f310() {
   return (neuron0x23242e0()*1.03381);
}

double NNfunction-NN_6_7::synapse0x233f350() {
   return (neuron0x2324cb0()*0.869082);
}

double NNfunction-NN_6_7::synapse0x233f390() {
   return (neuron0x2325680()*0.118121);
}

double NNfunction-NN_6_7::synapse0x233f3d0() {
   return (neuron0x2326050()*0.122755);
}

double NNfunction-NN_6_7::synapse0x233ef80() {
   return (neuron0x231c0e0()*1.18093);
}

double NNfunction-NN_6_7::synapse0x233efc0() {
   return (neuron0x2328c30()*0.170402);
}

double NNfunction-NN_6_7::synapse0x233f000() {
   return (neuron0x2329600()*-1.09727);
}

double NNfunction-NN_6_7::synapse0x233f040() {
   return (neuron0x2329fd0()*-0.884755);
}

double NNfunction-NN_6_7::synapse0x233f620() {
   return (neuron0x232a9a0()*0.234701);
}

double NNfunction-NN_6_7::synapse0x233f660() {
   return (neuron0x232b370()*0.974756);
}

double NNfunction-NN_6_7::synapse0x233f6a0() {
   return (neuron0x232bd40()*0.240235);
}

double NNfunction-NN_6_7::synapse0x233f6e0() {
   return (neuron0x232c710()*0.224147);
}

double NNfunction-NN_6_7::synapse0x233f720() {
   return (neuron0x232d0e0()*-0.358138);
}

double NNfunction-NN_6_7::synapse0x233f760() {
   return (neuron0x232dcc0()*0.209548);
}

double NNfunction-NN_6_7::synapse0x233f7a0() {
   return (neuron0x232e690()*0.0270525);
}

double NNfunction-NN_6_7::synapse0x233f7e0() {
   return (neuron0x231f510()*-2.71622);
}

double NNfunction-NN_6_7::synapse0x233f820() {
   return (neuron0x231fee0()*0.66487);
}

double NNfunction-NN_6_7::synapse0x233f860() {
   return (neuron0x23208b0()*0.152064);
}

double NNfunction-NN_6_7::synapse0x233f8a0() {
   return (neuron0x2332ef0()*-1.15865);
}

double NNfunction-NN_6_7::synapse0x233f8e0() {
   return (neuron0x23337a0()*1.29856);
}

double NNfunction-NN_6_7::synapse0x233f920() {
   return (neuron0x2334170()*0.613336);
}

double NNfunction-NN_6_7::synapse0x233f960() {
   return (neuron0x2334b40()*-0.519004);
}

double NNfunction-NN_6_7::synapse0x2310a80() {
   return (neuron0x233bd40()*-4.34177);
}

double NNfunction-NN_6_7::synapse0x233fbc0() {
   return (neuron0x233c0e0()*-4.06107);
}

double NNfunction-NN_6_7::synapse0x233fc00() {
   return (neuron0x233c580()*-4.53883);
}

double NNfunction-NN_6_7::synapse0x233fc40() {
   return (neuron0x233d6e0()*5.91452);
}

double NNfunction-NN_6_7::synapse0x233fc80() {
   return (neuron0x233e840()*-3.75009);
}

