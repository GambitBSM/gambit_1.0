#include "NNfunction_sb_cLuL.h"
#include <cmath>

double NNfunction_sb_cLuL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.4843)/15.3166;
   input1 = (in1 - 3.05097)/1141.98;
   input2 = (in2 - 666.161)/620.559;
   input3 = (in3 - -52.4617)/790.357;
   input4 = (in4 - 1034.21)/937.234;
   input5 = (in5 - 878.162)/933.078;
   input6 = (in6 - 887.329)/933.272;
   input7 = (in7 - 914.839)/925.653;
   input8 = (in8 - 925.621)/976.263;
   input9 = (in9 - 896.303)/954.559;
   input10 = (in10 - 989.192)/959.504;
   input11 = (in11 - 370.985)/374.207;
   input12 = (in12 - 368.314)/371.069;
   input13 = (in13 - 499.002)/513.399;
   input14 = (in14 - 697.431)/793.251;
   input15 = (in15 - 699.964)/796.396;
   input16 = (in16 - 529.404)/551.108;
   input17 = (in17 - 768.311)/906.574;
   input18 = (in18 - 752.698)/902.328;
   input19 = (in19 - 805.894)/882.058;
   input20 = (in20 - -4.05199)/486.238;
   input21 = (in21 - 4.73356)/1158.28;
   input22 = (in22 - 5.50332)/1202.22;
   input23 = (in23 - -196.759)/597.39;
   switch(index) {
     case 0:
         return neuron0x1ea84b0();
     default:
         return 0.;
   }
}

double NNfunction_sb_cLuL::Value(int index, double* input) {
   input0 = (input[0] - 23.4843)/15.3166;
   input1 = (input[1] - 3.05097)/1141.98;
   input2 = (input[2] - 666.161)/620.559;
   input3 = (input[3] - -52.4617)/790.357;
   input4 = (input[4] - 1034.21)/937.234;
   input5 = (input[5] - 878.162)/933.078;
   input6 = (input[6] - 887.329)/933.272;
   input7 = (input[7] - 914.839)/925.653;
   input8 = (input[8] - 925.621)/976.263;
   input9 = (input[9] - 896.303)/954.559;
   input10 = (input[10] - 989.192)/959.504;
   input11 = (input[11] - 370.985)/374.207;
   input12 = (input[12] - 368.314)/371.069;
   input13 = (input[13] - 499.002)/513.399;
   input14 = (input[14] - 697.431)/793.251;
   input15 = (input[15] - 699.964)/796.396;
   input16 = (input[16] - 529.404)/551.108;
   input17 = (input[17] - 768.311)/906.574;
   input18 = (input[18] - 752.698)/902.328;
   input19 = (input[19] - 805.894)/882.058;
   input20 = (input[20] - -4.05199)/486.238;
   input21 = (input[21] - 4.73356)/1158.28;
   input22 = (input[22] - 5.50332)/1202.22;
   input23 = (input[23] - -196.759)/597.39;
   switch(index) {
     case 0:
         return neuron0x1ea84b0();
     default:
         return 0.;
   }
}

double NNfunction_sb_cLuL::neuron0x1e74570() {
   return input0;
}

double NNfunction_sb_cLuL::neuron0x1e748b0() {
   return input1;
}

double NNfunction_sb_cLuL::neuron0x1e74bf0() {
   return input2;
}

double NNfunction_sb_cLuL::neuron0x1e74f30() {
   return input3;
}

double NNfunction_sb_cLuL::neuron0x1e75270() {
   return input4;
}

double NNfunction_sb_cLuL::neuron0x1e755b0() {
   return input5;
}

double NNfunction_sb_cLuL::neuron0x1e758f0() {
   return input6;
}

double NNfunction_sb_cLuL::neuron0x1e75c30() {
   return input7;
}

double NNfunction_sb_cLuL::neuron0x1e75f70() {
   return input8;
}

double NNfunction_sb_cLuL::neuron0x1e762b0() {
   return input9;
}

double NNfunction_sb_cLuL::neuron0x1e765f0() {
   return input10;
}

double NNfunction_sb_cLuL::neuron0x1e76930() {
   return input11;
}

double NNfunction_sb_cLuL::neuron0x1e76c70() {
   return input12;
}

double NNfunction_sb_cLuL::neuron0x1e76fb0() {
   return input13;
}

double NNfunction_sb_cLuL::neuron0x1e772f0() {
   return input14;
}

double NNfunction_sb_cLuL::neuron0x1e77630() {
   return input15;
}

double NNfunction_sb_cLuL::neuron0x1e77970() {
   return input16;
}

double NNfunction_sb_cLuL::neuron0x1e77ed0() {
   return input17;
}

double NNfunction_sb_cLuL::neuron0x1e780f0() {
   return input18;
}

double NNfunction_sb_cLuL::neuron0x1e78430() {
   return input19;
}

double NNfunction_sb_cLuL::neuron0x1e78770() {
   return input20;
}

double NNfunction_sb_cLuL::neuron0x1e78ab0() {
   return input21;
}

double NNfunction_sb_cLuL::neuron0x1e78df0() {
   return input22;
}

double NNfunction_sb_cLuL::neuron0x1e79130() {
   return input23;
}

double NNfunction_sb_cLuL::input0x1e795d0() {
   double input = 0.580642;
   input += synapse0x1c343e0();
   input += synapse0x1e74430();
   input += synapse0x1e74470();
   input += synapse0x1e79880();
   input += synapse0x1e798c0();
   input += synapse0x1e79900();
   input += synapse0x1e79940();
   input += synapse0x1e79980();
   input += synapse0x1e799c0();
   input += synapse0x1e79a00();
   input += synapse0x1e79a40();
   input += synapse0x1e79a80();
   input += synapse0x1e79ac0();
   input += synapse0x1e79b00();
   input += synapse0x1e79b40();
   input += synapse0x1e79b80();
   input += synapse0x1e743a0();
   input += synapse0x1e743e0();
   input += synapse0x1c25c80();
   input += synapse0x1c25cc0();
   input += synapse0x1e79de0();
   input += synapse0x1e79e20();
   input += synapse0x1e79e60();
   input += synapse0x1e79ea0();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e795d0() {
   double input = input0x1e795d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e79ee0() {
   double input = 0.046962;
   input += synapse0x1e7a220();
   input += synapse0x1e7a260();
   input += synapse0x1e7a2a0();
   input += synapse0x1e7a2e0();
   input += synapse0x1e7a320();
   input += synapse0x1e7a360();
   input += synapse0x1e7a3a0();
   input += synapse0x1e7a3e0();
   input += synapse0x1e7a420();
   input += synapse0x1e79cd0();
   input += synapse0x1e79d10();
   input += synapse0x1e79d50();
   input += synapse0x1e79d90();
   input += synapse0x1e7a670();
   input += synapse0x1e7a6b0();
   input += synapse0x1e7a6f0();
   input += synapse0x1e7a070();
   input += synapse0x1e7a0b0();
   input += synapse0x1e7a840();
   input += synapse0x1e7a880();
   input += synapse0x1e7a8c0();
   input += synapse0x1e7a900();
   input += synapse0x1e7a940();
   input += synapse0x1e7a980();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e79ee0() {
   double input = input0x1e79ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e7a9c0() {
   double input = -0.621821;
   input += synapse0x1e7ad00();
   input += synapse0x1e7ad40();
   input += synapse0x1e7ad80();
   input += synapse0x1e7adc0();
   input += synapse0x1e7ae00();
   input += synapse0x1e7ae40();
   input += synapse0x1e7ae80();
   input += synapse0x1e7aec0();
   input += synapse0x1e7af00();
   input += synapse0x1e7af40();
   input += synapse0x1e7af80();
   input += synapse0x1e7afc0();
   input += synapse0x1e7b000();
   input += synapse0x1e7b040();
   input += synapse0x1e7b080();
   input += synapse0x1e7b0c0();
   input += synapse0x1e7ab50();
   input += synapse0x1e7ab90();
   input += synapse0x1c33ad0();
   input += synapse0x1c33b10();
   input += synapse0x1e63600();
   input += synapse0x1e63640();
   input += synapse0x1e63680();
   input += synapse0x1e744b0();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e7a9c0() {
   double input = input0x1e7a9c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1c34250() {
   double input = 0.172185;
   input += synapse0x1e7a610();
   input += synapse0x1e744f0();
   input += synapse0x1e74530();
   input += synapse0x1e7b210();
   input += synapse0x1e7b250();
   input += synapse0x1e7b290();
   input += synapse0x1e7b2d0();
   input += synapse0x1e7b310();
   input += synapse0x1e7b350();
   input += synapse0x1e7b390();
   input += synapse0x1e7b3d0();
   input += synapse0x1e7b410();
   input += synapse0x1e7b450();
   input += synapse0x1e7b490();
   input += synapse0x1e7b4d0();
   input += synapse0x1e7b510();
   input += synapse0x1e7a460();
   input += synapse0x1e7a4a0();
   input += synapse0x1e7b660();
   input += synapse0x1e7b6a0();
   input += synapse0x1e7b6e0();
   input += synapse0x1e7b720();
   input += synapse0x1e7b760();
   input += synapse0x1e7b7a0();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1c34250() {
   double input = input0x1c34250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e7b7e0() {
   double input = 0.424486;
   input += synapse0x1e7bb20();
   input += synapse0x1e7bb60();
   input += synapse0x1e7bba0();
   input += synapse0x1e7bbe0();
   input += synapse0x1e7bc20();
   input += synapse0x1e7bc60();
   input += synapse0x1e7bca0();
   input += synapse0x1e7bce0();
   input += synapse0x1e7bd20();
   input += synapse0x1e7bd60();
   input += synapse0x1e7bda0();
   input += synapse0x1e7bde0();
   input += synapse0x1e7be20();
   input += synapse0x1e7be60();
   input += synapse0x1e7bea0();
   input += synapse0x1e7bee0();
   input += synapse0x1e7b970();
   input += synapse0x1e7b9b0();
   input += synapse0x1e7c030();
   input += synapse0x1e7c070();
   input += synapse0x1e7c0b0();
   input += synapse0x1e7c0f0();
   input += synapse0x1e7c130();
   input += synapse0x1e7c170();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e7b7e0() {
   double input = input0x1e7b7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e7c1b0() {
   double input = 4.40625;
   input += synapse0x1e7c4f0();
   input += synapse0x1e7c530();
   input += synapse0x1e7c570();
   input += synapse0x1e7c5b0();
   input += synapse0x1e7c5f0();
   input += synapse0x1e7c630();
   input += synapse0x1e7c670();
   input += synapse0x1e7c6b0();
   input += synapse0x1e7c6f0();
   input += synapse0x1c33e40();
   input += synapse0x1c33e80();
   input += synapse0x1c33ec0();
   input += synapse0x1c33f00();
   input += synapse0x1c33f40();
   input += synapse0x1c33f80();
   input += synapse0x1c33fc0();
   input += synapse0x1e7c340();
   input += synapse0x1e7c380();
   input += synapse0x1c34110();
   input += synapse0x1c34150();
   input += synapse0x1c34190();
   input += synapse0x1c341d0();
   input += synapse0x1c34210();
   input += synapse0x1e7cf40();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e7c1b0() {
   double input = input0x1e7c1b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e7cf80() {
   double input = 0.305781;
   input += synapse0x1e7d2c0();
   input += synapse0x1e7d300();
   input += synapse0x1e7d340();
   input += synapse0x1e7d380();
   input += synapse0x1e7d3c0();
   input += synapse0x1e7d400();
   input += synapse0x1e7d440();
   input += synapse0x1e7d480();
   input += synapse0x1e7d4c0();
   input += synapse0x1e7d500();
   input += synapse0x1e7d540();
   input += synapse0x1e7d580();
   input += synapse0x1e7d5c0();
   input += synapse0x1e7d600();
   input += synapse0x1e7d640();
   input += synapse0x1e7d680();
   input += synapse0x1e7d110();
   input += synapse0x1e7d150();
   input += synapse0x1e7d7d0();
   input += synapse0x1e7d810();
   input += synapse0x1e7d850();
   input += synapse0x1e7d890();
   input += synapse0x1e7d8d0();
   input += synapse0x1e7d910();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e7cf80() {
   double input = input0x1e7cf80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e7d950() {
   double input = 1.79797;
   input += synapse0x1e7dc90();
   input += synapse0x1e7dcd0();
   input += synapse0x1e7dd10();
   input += synapse0x1e7dd50();
   input += synapse0x1e7dd90();
   input += synapse0x1e7ddd0();
   input += synapse0x1e7de10();
   input += synapse0x1e7de50();
   input += synapse0x1e7de90();
   input += synapse0x1e7ded0();
   input += synapse0x1e7df10();
   input += synapse0x1e7df50();
   input += synapse0x1e7df90();
   input += synapse0x1e7dfd0();
   input += synapse0x1e7e010();
   input += synapse0x1e7e050();
   input += synapse0x1e7dae0();
   input += synapse0x1e7db20();
   input += synapse0x1e7e1a0();
   input += synapse0x1e7e1e0();
   input += synapse0x1e7e220();
   input += synapse0x1e7e260();
   input += synapse0x1e7e2a0();
   input += synapse0x1e7e2e0();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e7d950() {
   double input = input0x1e7d950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e7e320() {
   double input = -3.52864;
   input += synapse0x1e77dc0();
   input += synapse0x1e77e00();
   input += synapse0x1e77e40();
   input += synapse0x1e77e80();
   input += synapse0x1e7e870();
   input += synapse0x1e7e8b0();
   input += synapse0x1e7e8f0();
   input += synapse0x1e7e930();
   input += synapse0x1e7e970();
   input += synapse0x1e7e9b0();
   input += synapse0x1e7e9f0();
   input += synapse0x1e7ea30();
   input += synapse0x1e7ea70();
   input += synapse0x1e7eab0();
   input += synapse0x1e7eaf0();
   input += synapse0x1e7eb30();
   input += synapse0x1e7e4b0();
   input += synapse0x1e7e4f0();
   input += synapse0x1e7ec80();
   input += synapse0x1e7ecc0();
   input += synapse0x1e7ed00();
   input += synapse0x1e7ed40();
   input += synapse0x1e7ed80();
   input += synapse0x1e7edc0();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e7e320() {
   double input = input0x1e7e320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e7ee00() {
   double input = -1.20233;
   input += synapse0x1e7f140();
   input += synapse0x1e7f180();
   input += synapse0x1e7f1c0();
   input += synapse0x1e7f200();
   input += synapse0x1e7f240();
   input += synapse0x1e7f280();
   input += synapse0x1e7f2c0();
   input += synapse0x1e7f300();
   input += synapse0x1e7f340();
   input += synapse0x1e7f380();
   input += synapse0x1e7f3c0();
   input += synapse0x1e7f400();
   input += synapse0x1e7f440();
   input += synapse0x1e7f480();
   input += synapse0x1e7f4c0();
   input += synapse0x1e7f500();
   input += synapse0x1e7ef90();
   input += synapse0x1e7efd0();
   input += synapse0x1e7f650();
   input += synapse0x1e7f690();
   input += synapse0x1e7f6d0();
   input += synapse0x1e7f710();
   input += synapse0x1e7f750();
   input += synapse0x1e7f790();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e7ee00() {
   double input = input0x1e7ee00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e7f7d0() {
   double input = 0.379298;
   input += synapse0x1e7fb10();
   input += synapse0x1e7fb50();
   input += synapse0x1e7fb90();
   input += synapse0x1e7fbd0();
   input += synapse0x1e7fc10();
   input += synapse0x1e7fc50();
   input += synapse0x1e7fc90();
   input += synapse0x1e7fcd0();
   input += synapse0x1e7fd10();
   input += synapse0x1e7fd50();
   input += synapse0x1e7fd90();
   input += synapse0x1e7fdd0();
   input += synapse0x1e7fe10();
   input += synapse0x1e7fe50();
   input += synapse0x1e7fe90();
   input += synapse0x1e7fed0();
   input += synapse0x1e7f960();
   input += synapse0x1e7f9a0();
   input += synapse0x1e7c730();
   input += synapse0x1e7c770();
   input += synapse0x1e7c7b0();
   input += synapse0x1e7c7f0();
   input += synapse0x1e7c830();
   input += synapse0x1e7c870();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e7f7d0() {
   double input = input0x1e7f7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e7c8b0() {
   double input = 0.287464;
   input += synapse0x1e7cbf0();
   input += synapse0x1e7cc30();
   input += synapse0x1e7cc70();
   input += synapse0x1e7ccb0();
   input += synapse0x1e7ccf0();
   input += synapse0x1e7cd30();
   input += synapse0x1e7cd70();
   input += synapse0x1e7cdb0();
   input += synapse0x1e7cdf0();
   input += synapse0x1e7ce30();
   input += synapse0x1e7ce70();
   input += synapse0x1e7ceb0();
   input += synapse0x1e7cef0();
   input += synapse0x1e81030();
   input += synapse0x1e81070();
   input += synapse0x1e810b0();
   input += synapse0x1e7ca40();
   input += synapse0x1e7ca80();
   input += synapse0x1e81200();
   input += synapse0x1e81240();
   input += synapse0x1e81280();
   input += synapse0x1e812c0();
   input += synapse0x1e81300();
   input += synapse0x1e81340();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e7c8b0() {
   double input = input0x1e7c8b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e81380() {
   double input = -0.125353;
   input += synapse0x1e816c0();
   input += synapse0x1e81700();
   input += synapse0x1e81740();
   input += synapse0x1e81780();
   input += synapse0x1e817c0();
   input += synapse0x1e81800();
   input += synapse0x1e81840();
   input += synapse0x1e81880();
   input += synapse0x1e818c0();
   input += synapse0x1e81900();
   input += synapse0x1e81940();
   input += synapse0x1e81980();
   input += synapse0x1e819c0();
   input += synapse0x1e81a00();
   input += synapse0x1e81a40();
   input += synapse0x1e81a80();
   input += synapse0x1e81510();
   input += synapse0x1e81550();
   input += synapse0x1e81bd0();
   input += synapse0x1e81c10();
   input += synapse0x1e81c50();
   input += synapse0x1e81c90();
   input += synapse0x1e81cd0();
   input += synapse0x1e81d10();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e81380() {
   double input = input0x1e81380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e81d50() {
   double input = -0.385667;
   input += synapse0x1e82090();
   input += synapse0x1e820d0();
   input += synapse0x1e82110();
   input += synapse0x1e82150();
   input += synapse0x1e82190();
   input += synapse0x1e821d0();
   input += synapse0x1e82210();
   input += synapse0x1e82250();
   input += synapse0x1e82290();
   input += synapse0x1e822d0();
   input += synapse0x1e82310();
   input += synapse0x1e82350();
   input += synapse0x1e82390();
   input += synapse0x1e823d0();
   input += synapse0x1e82410();
   input += synapse0x1e82450();
   input += synapse0x1e81ee0();
   input += synapse0x1e81f20();
   input += synapse0x1e825a0();
   input += synapse0x1e825e0();
   input += synapse0x1e82620();
   input += synapse0x1e82660();
   input += synapse0x1e826a0();
   input += synapse0x1e826e0();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e81d50() {
   double input = input0x1e81d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e82720() {
   double input = 1.68276;
   input += synapse0x1e82a60();
   input += synapse0x1e82aa0();
   input += synapse0x1e82ae0();
   input += synapse0x1e82b20();
   input += synapse0x1e82b60();
   input += synapse0x1e82ba0();
   input += synapse0x1e82be0();
   input += synapse0x1e82c20();
   input += synapse0x1e82c60();
   input += synapse0x1e82ca0();
   input += synapse0x1e82ce0();
   input += synapse0x1e82d20();
   input += synapse0x1e82d60();
   input += synapse0x1e82da0();
   input += synapse0x1e82de0();
   input += synapse0x1e82e20();
   input += synapse0x1e828b0();
   input += synapse0x1e828f0();
   input += synapse0x1e82f70();
   input += synapse0x1e82fb0();
   input += synapse0x1e82ff0();
   input += synapse0x1e83030();
   input += synapse0x1e83070();
   input += synapse0x1e830b0();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e82720() {
   double input = input0x1e82720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e830f0() {
   double input = 0.951904;
   input += synapse0x1e83430();
   input += synapse0x1e74790();
   input += synapse0x1e747d0();
   input += synapse0x1e74ad0();
   input += synapse0x1e74b10();
   input += synapse0x1e74e10();
   input += synapse0x1e74e50();
   input += synapse0x1e75150();
   input += synapse0x1e75190();
   input += synapse0x1e75490();
   input += synapse0x1e754d0();
   input += synapse0x1e757d0();
   input += synapse0x1e75810();
   input += synapse0x1e75b10();
   input += synapse0x1e75b50();
   input += synapse0x1e75e50();
   input += synapse0x1e75e90();
   input += synapse0x1e76190();
   input += synapse0x1e761d0();
   input += synapse0x1e764d0();
   input += synapse0x1e76510();
   input += synapse0x1e76810();
   input += synapse0x1e76850();
   input += synapse0x1e76b50();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e830f0() {
   double input = input0x1e830f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e84f00() {
   double input = 1.16335;
   input += synapse0x1e76b90();
   input += synapse0x1e77850();
   input += synapse0x1e77890();
   input += synapse0x1e83280();
   input += synapse0x1e832c0();
   input += synapse0x1e77b90();
   input += synapse0x1e77bd0();
   input += synapse0x1c25b60();
   input += synapse0x1c25ba0();
   input += synapse0x1e78310();
   input += synapse0x1e78350();
   input += synapse0x1e78650();
   input += synapse0x1e78690();
   input += synapse0x1e78990();
   input += synapse0x1e789d0();
   input += synapse0x1e78cd0();
   input += synapse0x1e78d10();
   input += synapse0x1e79010();
   input += synapse0x1e79050();
   input += synapse0x1e79350();
   input += synapse0x1e79390();
   input += synapse0x1e76e90();
   input += synapse0x1e76ed0();
   input += synapse0x1e851a0();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e84f00() {
   double input = input0x1e84f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e851e0() {
   double input = -2.43118;
   input += synapse0x1e85520();
   input += synapse0x1e85560();
   input += synapse0x1e855a0();
   input += synapse0x1e855e0();
   input += synapse0x1e85620();
   input += synapse0x1e85660();
   input += synapse0x1e856a0();
   input += synapse0x1e856e0();
   input += synapse0x1e85720();
   input += synapse0x1e85760();
   input += synapse0x1e857a0();
   input += synapse0x1e857e0();
   input += synapse0x1e85820();
   input += synapse0x1e85860();
   input += synapse0x1e858a0();
   input += synapse0x1e858e0();
   input += synapse0x1e85370();
   input += synapse0x1e853b0();
   input += synapse0x1e85a30();
   input += synapse0x1e85a70();
   input += synapse0x1e85ab0();
   input += synapse0x1e85af0();
   input += synapse0x1e85b30();
   input += synapse0x1e85b70();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e851e0() {
   double input = input0x1e851e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e85bb0() {
   double input = 1.40195;
   input += synapse0x1e85ef0();
   input += synapse0x1e85f30();
   input += synapse0x1e85f70();
   input += synapse0x1e85fb0();
   input += synapse0x1e85ff0();
   input += synapse0x1e86030();
   input += synapse0x1e86070();
   input += synapse0x1e860b0();
   input += synapse0x1e860f0();
   input += synapse0x1e86130();
   input += synapse0x1e86170();
   input += synapse0x1e861b0();
   input += synapse0x1e861f0();
   input += synapse0x1e86230();
   input += synapse0x1e86270();
   input += synapse0x1e862b0();
   input += synapse0x1e85d40();
   input += synapse0x1e85d80();
   input += synapse0x1e86400();
   input += synapse0x1e86440();
   input += synapse0x1e86480();
   input += synapse0x1e864c0();
   input += synapse0x1e86500();
   input += synapse0x1e86540();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e85bb0() {
   double input = input0x1e85bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e86580() {
   double input = 0.778838;
   input += synapse0x1e868c0();
   input += synapse0x1e86900();
   input += synapse0x1e86940();
   input += synapse0x1e86980();
   input += synapse0x1e869c0();
   input += synapse0x1e86a00();
   input += synapse0x1e86a40();
   input += synapse0x1e86a80();
   input += synapse0x1e86ac0();
   input += synapse0x1e86b00();
   input += synapse0x1e86b40();
   input += synapse0x1e86b80();
   input += synapse0x1e86bc0();
   input += synapse0x1e86c00();
   input += synapse0x1e86c40();
   input += synapse0x1e86c80();
   input += synapse0x1e86710();
   input += synapse0x1e86750();
   input += synapse0x1e86dd0();
   input += synapse0x1e86e10();
   input += synapse0x1e86e50();
   input += synapse0x1e86e90();
   input += synapse0x1e86ed0();
   input += synapse0x1e86f10();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e86580() {
   double input = input0x1e86580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e86f50() {
   double input = 1.35684;
   input += synapse0x1e87290();
   input += synapse0x1e872d0();
   input += synapse0x1e87310();
   input += synapse0x1e87350();
   input += synapse0x1e87390();
   input += synapse0x1e873d0();
   input += synapse0x1e87410();
   input += synapse0x1e87450();
   input += synapse0x1e87490();
   input += synapse0x1e874d0();
   input += synapse0x1e87510();
   input += synapse0x1e87550();
   input += synapse0x1e87590();
   input += synapse0x1e875d0();
   input += synapse0x1e87610();
   input += synapse0x1e87650();
   input += synapse0x1e870e0();
   input += synapse0x1e87120();
   input += synapse0x1e877a0();
   input += synapse0x1e877e0();
   input += synapse0x1e87820();
   input += synapse0x1e87860();
   input += synapse0x1e878a0();
   input += synapse0x1e878e0();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e86f50() {
   double input = input0x1e86f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e87920() {
   double input = -1.12639;
   input += synapse0x1e87c60();
   input += synapse0x1e87ca0();
   input += synapse0x1e87ce0();
   input += synapse0x1e87d20();
   input += synapse0x1e87d60();
   input += synapse0x1e87da0();
   input += synapse0x1e87de0();
   input += synapse0x1e87e20();
   input += synapse0x1e87e60();
   input += synapse0x1e80020();
   input += synapse0x1e80060();
   input += synapse0x1e800a0();
   input += synapse0x1e800e0();
   input += synapse0x1e80120();
   input += synapse0x1e80160();
   input += synapse0x1e801a0();
   input += synapse0x1e87ab0();
   input += synapse0x1e87af0();
   input += synapse0x1e802f0();
   input += synapse0x1e80330();
   input += synapse0x1e80370();
   input += synapse0x1e803b0();
   input += synapse0x1e803f0();
   input += synapse0x1e80430();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e87920() {
   double input = input0x1e87920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e80470() {
   double input = -0.894129;
   input += synapse0x1e807b0();
   input += synapse0x1e807f0();
   input += synapse0x1e80830();
   input += synapse0x1e80870();
   input += synapse0x1e808b0();
   input += synapse0x1e808f0();
   input += synapse0x1e80930();
   input += synapse0x1e80970();
   input += synapse0x1e809b0();
   input += synapse0x1e809f0();
   input += synapse0x1e80a30();
   input += synapse0x1e80a70();
   input += synapse0x1e80ab0();
   input += synapse0x1e80af0();
   input += synapse0x1e80b30();
   input += synapse0x1e80b70();
   input += synapse0x1e80600();
   input += synapse0x1e80640();
   input += synapse0x1e80cc0();
   input += synapse0x1e80d00();
   input += synapse0x1e80d40();
   input += synapse0x1e80d80();
   input += synapse0x1e80dc0();
   input += synapse0x1e80e00();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e80470() {
   double input = input0x1e80470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e80e40() {
   double input = 0.454672;
   input += synapse0x1e80fd0();
   input += synapse0x1e8a060();
   input += synapse0x1e8a0a0();
   input += synapse0x1e8a0e0();
   input += synapse0x1e8a120();
   input += synapse0x1e8a160();
   input += synapse0x1e8a1a0();
   input += synapse0x1e8a1e0();
   input += synapse0x1e8a220();
   input += synapse0x1e8a260();
   input += synapse0x1e8a2a0();
   input += synapse0x1e8a2e0();
   input += synapse0x1e8a320();
   input += synapse0x1e8a360();
   input += synapse0x1e8a3a0();
   input += synapse0x1e8a3e0();
   input += synapse0x1e89eb0();
   input += synapse0x1e89ef0();
   input += synapse0x1e8a530();
   input += synapse0x1e8a570();
   input += synapse0x1e8a5b0();
   input += synapse0x1e8a5f0();
   input += synapse0x1e8a630();
   input += synapse0x1e8a670();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e80e40() {
   double input = input0x1e80e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e8a6b0() {
   double input = 0.423792;
   input += synapse0x1e8a9f0();
   input += synapse0x1e8aa30();
   input += synapse0x1e8aa70();
   input += synapse0x1e8aab0();
   input += synapse0x1e8aaf0();
   input += synapse0x1e8ab30();
   input += synapse0x1e8ab70();
   input += synapse0x1e8abb0();
   input += synapse0x1e8abf0();
   input += synapse0x1e8ac30();
   input += synapse0x1e8ac70();
   input += synapse0x1e8acb0();
   input += synapse0x1e8acf0();
   input += synapse0x1e8ad30();
   input += synapse0x1e8ad70();
   input += synapse0x1e8adb0();
   input += synapse0x1e8a840();
   input += synapse0x1e8a880();
   input += synapse0x1e8af00();
   input += synapse0x1e8af40();
   input += synapse0x1e8af80();
   input += synapse0x1e8afc0();
   input += synapse0x1e8b000();
   input += synapse0x1e8b040();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e8a6b0() {
   double input = input0x1e8a6b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e8b080() {
   double input = -0.101035;
   input += synapse0x1e8b3c0();
   input += synapse0x1e8b400();
   input += synapse0x1e8b440();
   input += synapse0x1e8b480();
   input += synapse0x1e8b4c0();
   input += synapse0x1e8b500();
   input += synapse0x1e8b540();
   input += synapse0x1e8b580();
   input += synapse0x1e8b5c0();
   input += synapse0x1e8b600();
   input += synapse0x1e8b640();
   input += synapse0x1e8b680();
   input += synapse0x1e8b6c0();
   input += synapse0x1e8b700();
   input += synapse0x1e8b740();
   input += synapse0x1e8b780();
   input += synapse0x1e8b210();
   input += synapse0x1e8b250();
   input += synapse0x1e8b8d0();
   input += synapse0x1e8b910();
   input += synapse0x1e8b950();
   input += synapse0x1e8b990();
   input += synapse0x1e8b9d0();
   input += synapse0x1e8ba10();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e8b080() {
   double input = input0x1e8b080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e8ba50() {
   double input = -1.78835;
   input += synapse0x1e8bd90();
   input += synapse0x1e8bdd0();
   input += synapse0x1e8be10();
   input += synapse0x1e8be50();
   input += synapse0x1e8be90();
   input += synapse0x1e8bed0();
   input += synapse0x1e8bf10();
   input += synapse0x1e8bf50();
   input += synapse0x1e8bf90();
   input += synapse0x1e8bfd0();
   input += synapse0x1e8c010();
   input += synapse0x1e8c050();
   input += synapse0x1e8c090();
   input += synapse0x1e8c0d0();
   input += synapse0x1e8c110();
   input += synapse0x1e8c150();
   input += synapse0x1e8bbe0();
   input += synapse0x1e8bc20();
   input += synapse0x1e8c2a0();
   input += synapse0x1e8c2e0();
   input += synapse0x1e8c320();
   input += synapse0x1e8c360();
   input += synapse0x1e8c3a0();
   input += synapse0x1e8c3e0();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e8ba50() {
   double input = input0x1e8ba50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e8c420() {
   double input = -0.181509;
   input += synapse0x1e8c760();
   input += synapse0x1e8c7a0();
   input += synapse0x1e8c7e0();
   input += synapse0x1e8c820();
   input += synapse0x1e8c860();
   input += synapse0x1e8c8a0();
   input += synapse0x1e8c8e0();
   input += synapse0x1e8c920();
   input += synapse0x1e8c960();
   input += synapse0x1e8c9a0();
   input += synapse0x1e8c9e0();
   input += synapse0x1e8ca20();
   input += synapse0x1e8ca60();
   input += synapse0x1e8caa0();
   input += synapse0x1e8cae0();
   input += synapse0x1e8cb20();
   input += synapse0x1e8c5b0();
   input += synapse0x1e8c5f0();
   input += synapse0x1e8cc70();
   input += synapse0x1e8ccb0();
   input += synapse0x1e8ccf0();
   input += synapse0x1e8cd30();
   input += synapse0x1e8cd70();
   input += synapse0x1e8cdb0();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e8c420() {
   double input = input0x1e8c420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e8cdf0() {
   double input = 1.3114;
   input += synapse0x1e8d130();
   input += synapse0x1e8d170();
   input += synapse0x1e8d1b0();
   input += synapse0x1e8d1f0();
   input += synapse0x1e8d230();
   input += synapse0x1e8d270();
   input += synapse0x1e8d2b0();
   input += synapse0x1e8d2f0();
   input += synapse0x1e8d330();
   input += synapse0x1e8d370();
   input += synapse0x1e8d3b0();
   input += synapse0x1e8d3f0();
   input += synapse0x1e8d430();
   input += synapse0x1e8d470();
   input += synapse0x1e8d4b0();
   input += synapse0x1e8d4f0();
   input += synapse0x1e8cf80();
   input += synapse0x1e8cfc0();
   input += synapse0x1e8d640();
   input += synapse0x1e8d680();
   input += synapse0x1e8d6c0();
   input += synapse0x1e8d700();
   input += synapse0x1e8d740();
   input += synapse0x1e8d780();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e8cdf0() {
   double input = input0x1e8cdf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e8d7c0() {
   double input = 0.483349;
   input += synapse0x1e8db00();
   input += synapse0x1e8db40();
   input += synapse0x1e8db80();
   input += synapse0x1e8dbc0();
   input += synapse0x1e8dc00();
   input += synapse0x1e8dc40();
   input += synapse0x1e8dc80();
   input += synapse0x1e8dcc0();
   input += synapse0x1e8dd00();
   input += synapse0x1e8dd40();
   input += synapse0x1e8dd80();
   input += synapse0x1e8ddc0();
   input += synapse0x1e8de00();
   input += synapse0x1e8de40();
   input += synapse0x1e8de80();
   input += synapse0x1e8dec0();
   input += synapse0x1e8d950();
   input += synapse0x1e8d990();
   input += synapse0x1e8e010();
   input += synapse0x1e8e050();
   input += synapse0x1e8e090();
   input += synapse0x1e8e0d0();
   input += synapse0x1e8e110();
   input += synapse0x1e8e150();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e8d7c0() {
   double input = input0x1e8d7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e8e190() {
   double input = -2.51039;
   input += synapse0x1e8e4d0();
   input += synapse0x1e8e510();
   input += synapse0x1e8e550();
   input += synapse0x1e8e590();
   input += synapse0x1e8e5d0();
   input += synapse0x1e8e610();
   input += synapse0x1e8e650();
   input += synapse0x1e8e690();
   input += synapse0x1e8e6d0();
   input += synapse0x1e8e710();
   input += synapse0x1e8e750();
   input += synapse0x1e8e790();
   input += synapse0x1e8e7d0();
   input += synapse0x1e8e810();
   input += synapse0x1e8e850();
   input += synapse0x1e8e890();
   input += synapse0x1e8e320();
   input += synapse0x1e8e360();
   input += synapse0x1e8e9e0();
   input += synapse0x1e8ea20();
   input += synapse0x1e8ea60();
   input += synapse0x1e8eaa0();
   input += synapse0x1e8eae0();
   input += synapse0x1e8eb20();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e8e190() {
   double input = input0x1e8e190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e8eb60() {
   double input = 0.132287;
   input += synapse0x1e8eea0();
   input += synapse0x1e83470();
   input += synapse0x1e834b0();
   input += synapse0x1e834f0();
   input += synapse0x1e83740();
   input += synapse0x1e83780();
   input += synapse0x1e837c0();
   input += synapse0x1e83a10();
   input += synapse0x1e83a50();
   input += synapse0x1e83ca0();
   input += synapse0x1e83ce0();
   input += synapse0x1e83d20();
   input += synapse0x1e83f70();
   input += synapse0x1e83fb0();
   input += synapse0x1e84200();
   input += synapse0x1e84240();
   input += synapse0x1e8ecf0();
   input += synapse0x1e8ed30();
   input += synapse0x1e84390();
   input += synapse0x1e848a0();
   input += synapse0x1e848e0();
   input += synapse0x1e84920();
   input += synapse0x1e84b70();
   input += synapse0x1e84bb0();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e8eb60() {
   double input = input0x1e8eb60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e84bf0() {
   double input = -0.488654;
   input += synapse0x1e84460();
   input += synapse0x1e844a0();
   input += synapse0x1e844e0();
   input += synapse0x1e84520();
   input += synapse0x1e84ea0();
   input += synapse0x1e911f0();
   input += synapse0x1e91230();
   input += synapse0x1e91270();
   input += synapse0x1e912b0();
   input += synapse0x1e912f0();
   input += synapse0x1e91330();
   input += synapse0x1e91370();
   input += synapse0x1e913b0();
   input += synapse0x1e913f0();
   input += synapse0x1e91430();
   input += synapse0x1e91470();
   input += synapse0x1e84d80();
   input += synapse0x1e84dc0();
   input += synapse0x1e915c0();
   input += synapse0x1e91600();
   input += synapse0x1e91640();
   input += synapse0x1e91680();
   input += synapse0x1e916c0();
   input += synapse0x1e91700();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e84bf0() {
   double input = input0x1e84bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e91740() {
   double input = 0.666928;
   input += synapse0x1e91a80();
   input += synapse0x1e91ac0();
   input += synapse0x1e91b00();
   input += synapse0x1e91b40();
   input += synapse0x1e91b80();
   input += synapse0x1e91bc0();
   input += synapse0x1e91c00();
   input += synapse0x1e91c40();
   input += synapse0x1e91c80();
   input += synapse0x1e91cc0();
   input += synapse0x1e91d00();
   input += synapse0x1e91d40();
   input += synapse0x1e91d80();
   input += synapse0x1e91dc0();
   input += synapse0x1e91e00();
   input += synapse0x1e91e40();
   input += synapse0x1e918d0();
   input += synapse0x1e91910();
   input += synapse0x1e91f90();
   input += synapse0x1e91fd0();
   input += synapse0x1e92010();
   input += synapse0x1e92050();
   input += synapse0x1e92090();
   input += synapse0x1e920d0();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e91740() {
   double input = input0x1e91740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e92110() {
   double input = 0.489493;
   input += synapse0x1e92450();
   input += synapse0x1e92490();
   input += synapse0x1e924d0();
   input += synapse0x1e92510();
   input += synapse0x1e92550();
   input += synapse0x1e92590();
   input += synapse0x1e925d0();
   input += synapse0x1e92610();
   input += synapse0x1e92650();
   input += synapse0x1e92690();
   input += synapse0x1e926d0();
   input += synapse0x1e92710();
   input += synapse0x1e92750();
   input += synapse0x1e92790();
   input += synapse0x1e927d0();
   input += synapse0x1e92810();
   input += synapse0x1e922a0();
   input += synapse0x1e922e0();
   input += synapse0x1e92960();
   input += synapse0x1e929a0();
   input += synapse0x1e929e0();
   input += synapse0x1e92a20();
   input += synapse0x1e92a60();
   input += synapse0x1e92aa0();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e92110() {
   double input = input0x1e92110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e92ae0() {
   double input = -5.66973;
   input += synapse0x1e92e20();
   input += synapse0x1e92e60();
   input += synapse0x1e92ea0();
   input += synapse0x1e92ee0();
   input += synapse0x1e92f20();
   input += synapse0x1e92f60();
   input += synapse0x1e92fa0();
   input += synapse0x1e92fe0();
   input += synapse0x1e93020();
   input += synapse0x1e93060();
   input += synapse0x1e930a0();
   input += synapse0x1e930e0();
   input += synapse0x1e93120();
   input += synapse0x1e93160();
   input += synapse0x1e931a0();
   input += synapse0x1e931e0();
   input += synapse0x1e92c70();
   input += synapse0x1e92cb0();
   input += synapse0x1e93330();
   input += synapse0x1e93370();
   input += synapse0x1e933b0();
   input += synapse0x1e933f0();
   input += synapse0x1e93430();
   input += synapse0x1e93470();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e92ae0() {
   double input = input0x1e92ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e934b0() {
   double input = 2.01025;
   input += synapse0x1e937f0();
   input += synapse0x1e93830();
   input += synapse0x1e93870();
   input += synapse0x1e938b0();
   input += synapse0x1e938f0();
   input += synapse0x1e93930();
   input += synapse0x1e93970();
   input += synapse0x1e939b0();
   input += synapse0x1e939f0();
   input += synapse0x1e93a30();
   input += synapse0x1e93a70();
   input += synapse0x1e93ab0();
   input += synapse0x1e93af0();
   input += synapse0x1e93b30();
   input += synapse0x1e93b70();
   input += synapse0x1e93bb0();
   input += synapse0x1e93640();
   input += synapse0x1e93680();
   input += synapse0x1e93d00();
   input += synapse0x1e93d40();
   input += synapse0x1e93d80();
   input += synapse0x1e93dc0();
   input += synapse0x1e93e00();
   input += synapse0x1e93e40();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e934b0() {
   double input = input0x1e934b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e93e80() {
   double input = -0.462414;
   input += synapse0x1e941c0();
   input += synapse0x1e94200();
   input += synapse0x1e94240();
   input += synapse0x1e94280();
   input += synapse0x1e942c0();
   input += synapse0x1e94300();
   input += synapse0x1e94340();
   input += synapse0x1e94380();
   input += synapse0x1e943c0();
   input += synapse0x1e94400();
   input += synapse0x1e94440();
   input += synapse0x1e94480();
   input += synapse0x1e944c0();
   input += synapse0x1e94500();
   input += synapse0x1e94540();
   input += synapse0x1e94580();
   input += synapse0x1e94010();
   input += synapse0x1e94050();
   input += synapse0x1e946d0();
   input += synapse0x1e94710();
   input += synapse0x1e94750();
   input += synapse0x1e94790();
   input += synapse0x1e947d0();
   input += synapse0x1e94810();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e93e80() {
   double input = input0x1e93e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e94850() {
   double input = -0.240311;
   input += synapse0x1e94b90();
   input += synapse0x1e94bd0();
   input += synapse0x1e94c10();
   input += synapse0x1e94c50();
   input += synapse0x1e94c90();
   input += synapse0x1e94cd0();
   input += synapse0x1e94d10();
   input += synapse0x1e94d50();
   input += synapse0x1e94d90();
   input += synapse0x1e94dd0();
   input += synapse0x1e94e10();
   input += synapse0x1e94e50();
   input += synapse0x1e94e90();
   input += synapse0x1e94ed0();
   input += synapse0x1e94f10();
   input += synapse0x1e94f50();
   input += synapse0x1e949e0();
   input += synapse0x1e94a20();
   input += synapse0x1e950a0();
   input += synapse0x1e950e0();
   input += synapse0x1e95120();
   input += synapse0x1e95160();
   input += synapse0x1e951a0();
   input += synapse0x1e951e0();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e94850() {
   double input = input0x1e94850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e95220() {
   double input = -0.39454;
   input += synapse0x1e95560();
   input += synapse0x1e955a0();
   input += synapse0x1e955e0();
   input += synapse0x1e95620();
   input += synapse0x1e95660();
   input += synapse0x1e956a0();
   input += synapse0x1e956e0();
   input += synapse0x1e95720();
   input += synapse0x1e95760();
   input += synapse0x1e957a0();
   input += synapse0x1e957e0();
   input += synapse0x1e95820();
   input += synapse0x1e95860();
   input += synapse0x1e958a0();
   input += synapse0x1e958e0();
   input += synapse0x1e95920();
   input += synapse0x1e953b0();
   input += synapse0x1e953f0();
   input += synapse0x1e95a70();
   input += synapse0x1e95ab0();
   input += synapse0x1e95af0();
   input += synapse0x1e95b30();
   input += synapse0x1e95b70();
   input += synapse0x1e95bb0();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e95220() {
   double input = input0x1e95220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e95bf0() {
   double input = -1.25152;
   input += synapse0x1e7e660();
   input += synapse0x1e7e6a0();
   input += synapse0x1e7e6e0();
   input += synapse0x1e7e720();
   input += synapse0x1e7e760();
   input += synapse0x1e7e7a0();
   input += synapse0x1e7e7e0();
   input += synapse0x1e7e820();
   input += synapse0x1e96340();
   input += synapse0x1e96380();
   input += synapse0x1e963c0();
   input += synapse0x1e96400();
   input += synapse0x1e96440();
   input += synapse0x1e96480();
   input += synapse0x1e964c0();
   input += synapse0x1e96500();
   input += synapse0x1e95d80();
   input += synapse0x1e95dc0();
   input += synapse0x1e96650();
   input += synapse0x1e96690();
   input += synapse0x1e966d0();
   input += synapse0x1e96710();
   input += synapse0x1e96750();
   input += synapse0x1e96790();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e95bf0() {
   double input = input0x1e95bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e967d0() {
   double input = -0.00662876;
   input += synapse0x1e96b10();
   input += synapse0x1e96b50();
   input += synapse0x1e96b90();
   input += synapse0x1e96bd0();
   input += synapse0x1e96c10();
   input += synapse0x1e96c50();
   input += synapse0x1e96c90();
   input += synapse0x1e96cd0();
   input += synapse0x1e96d10();
   input += synapse0x1e96d50();
   input += synapse0x1e96d90();
   input += synapse0x1e96dd0();
   input += synapse0x1e96e10();
   input += synapse0x1e96e50();
   input += synapse0x1e96e90();
   input += synapse0x1e96ed0();
   input += synapse0x1e96960();
   input += synapse0x1e969a0();
   input += synapse0x1e97020();
   input += synapse0x1e97060();
   input += synapse0x1e970a0();
   input += synapse0x1e970e0();
   input += synapse0x1e97120();
   input += synapse0x1e97160();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e967d0() {
   double input = input0x1e967d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e971a0() {
   double input = 0.852107;
   input += synapse0x1e974e0();
   input += synapse0x1e97520();
   input += synapse0x1e97560();
   input += synapse0x1e975a0();
   input += synapse0x1e975e0();
   input += synapse0x1e97620();
   input += synapse0x1e97660();
   input += synapse0x1e976a0();
   input += synapse0x1e976e0();
   input += synapse0x1e97720();
   input += synapse0x1e97760();
   input += synapse0x1e977a0();
   input += synapse0x1e977e0();
   input += synapse0x1e97820();
   input += synapse0x1e97860();
   input += synapse0x1e978a0();
   input += synapse0x1e97330();
   input += synapse0x1e97370();
   input += synapse0x1e87ea0();
   input += synapse0x1e87ee0();
   input += synapse0x1e87f20();
   input += synapse0x1e87f60();
   input += synapse0x1e87fa0();
   input += synapse0x1e87fe0();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e971a0() {
   double input = input0x1e971a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e88020() {
   double input = 1.70443;
   input += synapse0x1e88360();
   input += synapse0x1e883a0();
   input += synapse0x1e883e0();
   input += synapse0x1e88420();
   input += synapse0x1e88460();
   input += synapse0x1e884a0();
   input += synapse0x1e884e0();
   input += synapse0x1e88520();
   input += synapse0x1e88560();
   input += synapse0x1e885a0();
   input += synapse0x1e885e0();
   input += synapse0x1e88620();
   input += synapse0x1e88660();
   input += synapse0x1e886a0();
   input += synapse0x1e886e0();
   input += synapse0x1e88720();
   input += synapse0x1e881b0();
   input += synapse0x1e881f0();
   input += synapse0x1e88870();
   input += synapse0x1e888b0();
   input += synapse0x1e888f0();
   input += synapse0x1e88930();
   input += synapse0x1e88970();
   input += synapse0x1e889b0();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e88020() {
   double input = input0x1e88020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e889f0() {
   double input = -0.687279;
   input += synapse0x1e88d30();
   input += synapse0x1e88d70();
   input += synapse0x1e88db0();
   input += synapse0x1e88df0();
   input += synapse0x1e88e30();
   input += synapse0x1e88e70();
   input += synapse0x1e88eb0();
   input += synapse0x1e88ef0();
   input += synapse0x1e88f30();
   input += synapse0x1e88f70();
   input += synapse0x1e88fb0();
   input += synapse0x1e88ff0();
   input += synapse0x1e89030();
   input += synapse0x1e89070();
   input += synapse0x1e890b0();
   input += synapse0x1e890f0();
   input += synapse0x1e88b80();
   input += synapse0x1e88bc0();
   input += synapse0x1e89240();
   input += synapse0x1e89280();
   input += synapse0x1e892c0();
   input += synapse0x1e89300();
   input += synapse0x1e89340();
   input += synapse0x1e89380();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e889f0() {
   double input = input0x1e889f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e893c0() {
   double input = -1.81171;
   input += synapse0x1e89700();
   input += synapse0x1e89740();
   input += synapse0x1e89780();
   input += synapse0x1e897c0();
   input += synapse0x1e89800();
   input += synapse0x1e89840();
   input += synapse0x1e89880();
   input += synapse0x1e898c0();
   input += synapse0x1e89900();
   input += synapse0x1e89940();
   input += synapse0x1e89980();
   input += synapse0x1e899c0();
   input += synapse0x1e89a00();
   input += synapse0x1e89a40();
   input += synapse0x1e89a80();
   input += synapse0x1e89ac0();
   input += synapse0x1e89550();
   input += synapse0x1e89590();
   input += synapse0x1e89c10();
   input += synapse0x1e89c50();
   input += synapse0x1e89c90();
   input += synapse0x1e89cd0();
   input += synapse0x1e89d10();
   input += synapse0x1e89d50();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e893c0() {
   double input = input0x1e893c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e9ba00() {
   double input = -0.141422;
   input += synapse0x1e9bc20();
   input += synapse0x1e9bc60();
   input += synapse0x1e9bca0();
   input += synapse0x1e9bce0();
   input += synapse0x1e9bd20();
   input += synapse0x1e9bd60();
   input += synapse0x1e9bda0();
   input += synapse0x1e9bde0();
   input += synapse0x1e9be20();
   input += synapse0x1e9be60();
   input += synapse0x1e9bea0();
   input += synapse0x1e9bee0();
   input += synapse0x1e9bf20();
   input += synapse0x1e9bf60();
   input += synapse0x1e9bfa0();
   input += synapse0x1e9bfe0();
   input += synapse0x1e89d90();
   input += synapse0x1e89dd0();
   input += synapse0x1e9c130();
   input += synapse0x1e9c170();
   input += synapse0x1e9c1b0();
   input += synapse0x1e9c1f0();
   input += synapse0x1e9c230();
   input += synapse0x1e9c270();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e9ba00() {
   double input = input0x1e9ba00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e9c2b0() {
   double input = 1.3694;
   input += synapse0x1e9c5f0();
   input += synapse0x1e9c630();
   input += synapse0x1e9c670();
   input += synapse0x1e9c6b0();
   input += synapse0x1e9c6f0();
   input += synapse0x1e9c730();
   input += synapse0x1e9c770();
   input += synapse0x1e9c7b0();
   input += synapse0x1e9c7f0();
   input += synapse0x1e9c830();
   input += synapse0x1e9c870();
   input += synapse0x1e9c8b0();
   input += synapse0x1e9c8f0();
   input += synapse0x1e9c930();
   input += synapse0x1e9c970();
   input += synapse0x1e9c9b0();
   input += synapse0x1e9c440();
   input += synapse0x1e9c480();
   input += synapse0x1e9cb00();
   input += synapse0x1e9cb40();
   input += synapse0x1e9cb80();
   input += synapse0x1e9cbc0();
   input += synapse0x1e9cc00();
   input += synapse0x1e9cc40();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e9c2b0() {
   double input = input0x1e9c2b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e9cc80() {
   double input = 1.1982;
   input += synapse0x1e9cfc0();
   input += synapse0x1e9d000();
   input += synapse0x1e9d040();
   input += synapse0x1e9d080();
   input += synapse0x1e9d0c0();
   input += synapse0x1e9d100();
   input += synapse0x1e9d140();
   input += synapse0x1e9d180();
   input += synapse0x1e9d1c0();
   input += synapse0x1e9d200();
   input += synapse0x1e9d240();
   input += synapse0x1e9d280();
   input += synapse0x1e9d2c0();
   input += synapse0x1e9d300();
   input += synapse0x1e9d340();
   input += synapse0x1e9d380();
   input += synapse0x1e9ce10();
   input += synapse0x1e9ce50();
   input += synapse0x1e9d4d0();
   input += synapse0x1e9d510();
   input += synapse0x1e9d550();
   input += synapse0x1e9d590();
   input += synapse0x1e9d5d0();
   input += synapse0x1e9d610();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e9cc80() {
   double input = input0x1e9cc80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1e9d650() {
   double input = 1.11685;
   input += synapse0x1e9d990();
   input += synapse0x1e9d9d0();
   input += synapse0x1e9da10();
   input += synapse0x1e9da50();
   input += synapse0x1e9da90();
   input += synapse0x1e9dad0();
   input += synapse0x1e9db10();
   input += synapse0x1e9db50();
   input += synapse0x1e9db90();
   input += synapse0x1e9dbd0();
   input += synapse0x1e9dc10();
   input += synapse0x1e9dc50();
   input += synapse0x1e9dc90();
   input += synapse0x1e9dcd0();
   input += synapse0x1e9dd10();
   input += synapse0x1e9dd50();
   input += synapse0x1e9d7e0();
   input += synapse0x1e9d820();
   input += synapse0x1e9dea0();
   input += synapse0x1e9dee0();
   input += synapse0x1e9df20();
   input += synapse0x1e9df60();
   input += synapse0x1e9dfa0();
   input += synapse0x1e9dfe0();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1e9d650() {
   double input = input0x1e9d650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1ea4850() {
   double input = -1.10063;
   input += synapse0x1e7a580();
   input += synapse0x1e7a5c0();
   input += synapse0x1e7ba90();
   input += synapse0x1e7bad0();
   input += synapse0x1e7c460();
   input += synapse0x1e7c4a0();
   input += synapse0x1e7d230();
   input += synapse0x1e7d270();
   input += synapse0x1e7dc00();
   input += synapse0x1e7dc40();
   input += synapse0x1e7e5d0();
   input += synapse0x1e7e610();
   input += synapse0x1e7f0b0();
   input += synapse0x1e7f0f0();
   input += synapse0x1e7fa80();
   input += synapse0x1e7fac0();
   input += synapse0x1e7cb60();
   input += synapse0x1e7cba0();
   input += synapse0x1e81630();
   input += synapse0x1e81670();
   input += synapse0x1e82000();
   input += synapse0x1e82040();
   input += synapse0x1e829d0();
   input += synapse0x1e82a10();
   input += synapse0x1e833a0();
   input += synapse0x1e833e0();
   input += synapse0x1e77510();
   input += synapse0x1e77550();
   input += synapse0x1e85490();
   input += synapse0x1e854d0();
   input += synapse0x1e85e60();
   input += synapse0x1e85ea0();
   input += synapse0x1e86830();
   input += synapse0x1e86870();
   input += synapse0x1e87200();
   input += synapse0x1e87240();
   input += synapse0x1e87bd0();
   input += synapse0x1e87c10();
   input += synapse0x1e80720();
   input += synapse0x1e80760();
   input += synapse0x1e89fd0();
   input += synapse0x1e8a010();
   input += synapse0x1e8a960();
   input += synapse0x1e8a9a0();
   input += synapse0x1e8b330();
   input += synapse0x1e8b370();
   input += synapse0x1e8bd00();
   input += synapse0x1e8bd40();
   input += synapse0x1e8c6d0();
   input += synapse0x1e8c710();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1ea4850() {
   double input = input0x1ea4850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1ea4bf0() {
   double input = 0.395583;
   input += synapse0x1e8ee10();
   input += synapse0x1e8ee50();
   input += synapse0x1e843d0();
   input += synapse0x1e84410();
   input += synapse0x1e919f0();
   input += synapse0x1e91a30();
   input += synapse0x1e923c0();
   input += synapse0x1e92400();
   input += synapse0x1e92d90();
   input += synapse0x1e92dd0();
   input += synapse0x1e93760();
   input += synapse0x1e937a0();
   input += synapse0x1e94130();
   input += synapse0x1e94170();
   input += synapse0x1e94b00();
   input += synapse0x1e94b40();
   input += synapse0x1e954d0();
   input += synapse0x1e95510();
   input += synapse0x1e95ea0();
   input += synapse0x1e95ee0();
   input += synapse0x1e96a80();
   input += synapse0x1e96ac0();
   input += synapse0x1e97450();
   input += synapse0x1e97490();
   input += synapse0x1e882d0();
   input += synapse0x1e88310();
   input += synapse0x1e88ca0();
   input += synapse0x1e88ce0();
   input += synapse0x1e89670();
   input += synapse0x1e896b0();
   input += synapse0x1e9bb90();
   input += synapse0x1e9bbd0();
   input += synapse0x1e9c560();
   input += synapse0x1e9c5a0();
   input += synapse0x1e9cf30();
   input += synapse0x1e9cf70();
   input += synapse0x1e9d900();
   input += synapse0x1e9d940();
   input += synapse0x1e797f0();
   input += synapse0x1e79830();
   input += synapse0x1e8d0a0();
   input += synapse0x1e8d0e0();
   input += synapse0x1e9e020();
   input += synapse0x1e9e060();
   input += synapse0x1e9e0a0();
   input += synapse0x1e9e0e0();
   input += synapse0x1ea4f90();
   input += synapse0x1ea4fd0();
   input += synapse0x1ea5010();
   input += synapse0x1ea5050();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1ea4bf0() {
   double input = input0x1ea4bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1ea5090() {
   double input = -0.122938;
   input += synapse0x1ea53d0();
   input += synapse0x1ea5410();
   input += synapse0x1ea5450();
   input += synapse0x1ea5490();
   input += synapse0x1ea54d0();
   input += synapse0x1ea5510();
   input += synapse0x1ea5550();
   input += synapse0x1ea5590();
   input += synapse0x1ea55d0();
   input += synapse0x1ea5610();
   input += synapse0x1ea5650();
   input += synapse0x1ea5690();
   input += synapse0x1ea56d0();
   input += synapse0x1ea5710();
   input += synapse0x1ea5750();
   input += synapse0x1ea5790();
   input += synapse0x1ea5220();
   input += synapse0x1ea5260();
   input += synapse0x1ea58e0();
   input += synapse0x1ea5920();
   input += synapse0x1ea5960();
   input += synapse0x1ea59a0();
   input += synapse0x1ea59e0();
   input += synapse0x1ea5a20();
   input += synapse0x1ea5a60();
   input += synapse0x1ea5aa0();
   input += synapse0x1ea5ae0();
   input += synapse0x1ea5b20();
   input += synapse0x1ea5b60();
   input += synapse0x1ea5ba0();
   input += synapse0x1ea5be0();
   input += synapse0x1ea5c20();
   input += synapse0x1ea57d0();
   input += synapse0x1ea5810();
   input += synapse0x1ea5850();
   input += synapse0x1ea5890();
   input += synapse0x1ea5e70();
   input += synapse0x1ea5eb0();
   input += synapse0x1ea5ef0();
   input += synapse0x1ea5f30();
   input += synapse0x1ea5f70();
   input += synapse0x1ea5fb0();
   input += synapse0x1ea5ff0();
   input += synapse0x1ea6030();
   input += synapse0x1ea6070();
   input += synapse0x1ea60b0();
   input += synapse0x1ea60f0();
   input += synapse0x1ea6130();
   input += synapse0x1ea6170();
   input += synapse0x1ea61b0();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1ea5090() {
   double input = input0x1ea5090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1ea61f0() {
   double input = 0.168385;
   input += synapse0x1ea6530();
   input += synapse0x1ea6570();
   input += synapse0x1ea65b0();
   input += synapse0x1ea65f0();
   input += synapse0x1ea6630();
   input += synapse0x1ea6670();
   input += synapse0x1ea66b0();
   input += synapse0x1ea66f0();
   input += synapse0x1ea6730();
   input += synapse0x1ea6770();
   input += synapse0x1ea67b0();
   input += synapse0x1ea67f0();
   input += synapse0x1ea6830();
   input += synapse0x1ea6870();
   input += synapse0x1ea68b0();
   input += synapse0x1ea68f0();
   input += synapse0x1ea6380();
   input += synapse0x1ea63c0();
   input += synapse0x1ea6a40();
   input += synapse0x1ea6a80();
   input += synapse0x1ea6ac0();
   input += synapse0x1ea6b00();
   input += synapse0x1ea6b40();
   input += synapse0x1ea6b80();
   input += synapse0x1ea6bc0();
   input += synapse0x1ea6c00();
   input += synapse0x1ea6c40();
   input += synapse0x1ea6c80();
   input += synapse0x1ea6cc0();
   input += synapse0x1ea6d00();
   input += synapse0x1ea6d40();
   input += synapse0x1ea6d80();
   input += synapse0x1ea6930();
   input += synapse0x1ea6970();
   input += synapse0x1ea69b0();
   input += synapse0x1ea69f0();
   input += synapse0x1ea6fd0();
   input += synapse0x1ea7010();
   input += synapse0x1ea7050();
   input += synapse0x1ea7090();
   input += synapse0x1ea70d0();
   input += synapse0x1ea7110();
   input += synapse0x1ea7150();
   input += synapse0x1ea7190();
   input += synapse0x1ea71d0();
   input += synapse0x1ea7210();
   input += synapse0x1ea7250();
   input += synapse0x1ea7290();
   input += synapse0x1ea72d0();
   input += synapse0x1ea7310();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1ea61f0() {
   double input = input0x1ea61f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1ea7350() {
   double input = 1.29762;
   input += synapse0x1ea7690();
   input += synapse0x1ea76d0();
   input += synapse0x1ea7710();
   input += synapse0x1ea7750();
   input += synapse0x1ea7790();
   input += synapse0x1ea77d0();
   input += synapse0x1ea7810();
   input += synapse0x1ea7850();
   input += synapse0x1ea7890();
   input += synapse0x1ea78d0();
   input += synapse0x1ea7910();
   input += synapse0x1ea7950();
   input += synapse0x1ea7990();
   input += synapse0x1ea79d0();
   input += synapse0x1ea7a10();
   input += synapse0x1ea7a50();
   input += synapse0x1ea74e0();
   input += synapse0x1ea7520();
   input += synapse0x1ea7ba0();
   input += synapse0x1ea7be0();
   input += synapse0x1ea7c20();
   input += synapse0x1ea7c60();
   input += synapse0x1ea7ca0();
   input += synapse0x1ea7ce0();
   input += synapse0x1ea7d20();
   input += synapse0x1ea7d60();
   input += synapse0x1ea7da0();
   input += synapse0x1ea7de0();
   input += synapse0x1ea7e20();
   input += synapse0x1ea7e60();
   input += synapse0x1ea7ea0();
   input += synapse0x1ea7ee0();
   input += synapse0x1ea7a90();
   input += synapse0x1ea7ad0();
   input += synapse0x1ea7b10();
   input += synapse0x1ea7b50();
   input += synapse0x1ea8130();
   input += synapse0x1ea8170();
   input += synapse0x1ea81b0();
   input += synapse0x1ea81f0();
   input += synapse0x1ea8230();
   input += synapse0x1ea8270();
   input += synapse0x1ea82b0();
   input += synapse0x1ea82f0();
   input += synapse0x1ea8330();
   input += synapse0x1ea8370();
   input += synapse0x1ea83b0();
   input += synapse0x1ea83f0();
   input += synapse0x1ea8430();
   input += synapse0x1ea8470();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1ea7350() {
   double input = input0x1ea7350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x1ea84b0() {
   double input = 1.29125;
   input += synapse0x1e79590();
   input += synapse0x1ea86d0();
   input += synapse0x1ea8710();
   input += synapse0x1ea8750();
   input += synapse0x1ea8790();
   return input;
}

double NNfunction_sb_cLuL::neuron0x1ea84b0() {
   double input = input0x1ea84b0();
   return (input * 1)+0;
}

double NNfunction_sb_cLuL::synapse0x1c343e0() {
   return (neuron0x1e74570()*-0.310281);
}

double NNfunction_sb_cLuL::synapse0x1e74430() {
   return (neuron0x1e748b0()*-0.660789);
}

double NNfunction_sb_cLuL::synapse0x1e74470() {
   return (neuron0x1e74bf0()*-0.472794);
}

double NNfunction_sb_cLuL::synapse0x1e79880() {
   return (neuron0x1e74f30()*0.824801);
}

double NNfunction_sb_cLuL::synapse0x1e798c0() {
   return (neuron0x1e75270()*-1.23635);
}

double NNfunction_sb_cLuL::synapse0x1e79900() {
   return (neuron0x1e755b0()*-1.06313);
}

double NNfunction_sb_cLuL::synapse0x1e79940() {
   return (neuron0x1e758f0()*-0.140744);
}

double NNfunction_sb_cLuL::synapse0x1e79980() {
   return (neuron0x1e75c30()*0.0361171);
}

double NNfunction_sb_cLuL::synapse0x1e799c0() {
   return (neuron0x1e75f70()*0.364567);
}

double NNfunction_sb_cLuL::synapse0x1e79a00() {
   return (neuron0x1e762b0()*-0.548598);
}

double NNfunction_sb_cLuL::synapse0x1e79a40() {
   return (neuron0x1e765f0()*-1.28186);
}

double NNfunction_sb_cLuL::synapse0x1e79a80() {
   return (neuron0x1e76930()*-0.908505);
}

double NNfunction_sb_cLuL::synapse0x1e79ac0() {
   return (neuron0x1e76c70()*-0.633392);
}

double NNfunction_sb_cLuL::synapse0x1e79b00() {
   return (neuron0x1e76fb0()*-0.869946);
}

double NNfunction_sb_cLuL::synapse0x1e79b40() {
   return (neuron0x1e772f0()*0.0181411);
}

double NNfunction_sb_cLuL::synapse0x1e79b80() {
   return (neuron0x1e77630()*-0.102356);
}

double NNfunction_sb_cLuL::synapse0x1e743a0() {
   return (neuron0x1e77970()*0.573499);
}

double NNfunction_sb_cLuL::synapse0x1e743e0() {
   return (neuron0x1e77ed0()*0.556982);
}

double NNfunction_sb_cLuL::synapse0x1c25c80() {
   return (neuron0x1e780f0()*-0.309505);
}

double NNfunction_sb_cLuL::synapse0x1c25cc0() {
   return (neuron0x1e78430()*0.967195);
}

double NNfunction_sb_cLuL::synapse0x1e79de0() {
   return (neuron0x1e78770()*0.411549);
}

double NNfunction_sb_cLuL::synapse0x1e79e20() {
   return (neuron0x1e78ab0()*-0.611019);
}

double NNfunction_sb_cLuL::synapse0x1e79e60() {
   return (neuron0x1e78df0()*0.087402);
}

double NNfunction_sb_cLuL::synapse0x1e79ea0() {
   return (neuron0x1e79130()*0.494986);
}

double NNfunction_sb_cLuL::synapse0x1e7a220() {
   return (neuron0x1e74570()*-0.168885);
}

double NNfunction_sb_cLuL::synapse0x1e7a260() {
   return (neuron0x1e748b0()*-0.245544);
}

double NNfunction_sb_cLuL::synapse0x1e7a2a0() {
   return (neuron0x1e74bf0()*-0.14529);
}

double NNfunction_sb_cLuL::synapse0x1e7a2e0() {
   return (neuron0x1e74f30()*0.433801);
}

double NNfunction_sb_cLuL::synapse0x1e7a320() {
   return (neuron0x1e75270()*-0.286601);
}

double NNfunction_sb_cLuL::synapse0x1e7a360() {
   return (neuron0x1e755b0()*-0.183838);
}

double NNfunction_sb_cLuL::synapse0x1e7a3a0() {
   return (neuron0x1e758f0()*-0.0588967);
}

double NNfunction_sb_cLuL::synapse0x1e7a3e0() {
   return (neuron0x1e75c30()*-0.43287);
}

double NNfunction_sb_cLuL::synapse0x1e7a420() {
   return (neuron0x1e75f70()*0.459211);
}

double NNfunction_sb_cLuL::synapse0x1e79cd0() {
   return (neuron0x1e762b0()*-0.167469);
}

double NNfunction_sb_cLuL::synapse0x1e79d10() {
   return (neuron0x1e765f0()*0.0807717);
}

double NNfunction_sb_cLuL::synapse0x1e79d50() {
   return (neuron0x1e76930()*0.333429);
}

double NNfunction_sb_cLuL::synapse0x1e79d90() {
   return (neuron0x1e76c70()*-0.403353);
}

double NNfunction_sb_cLuL::synapse0x1e7a670() {
   return (neuron0x1e76fb0()*-0.795925);
}

double NNfunction_sb_cLuL::synapse0x1e7a6b0() {
   return (neuron0x1e772f0()*0.0936471);
}

double NNfunction_sb_cLuL::synapse0x1e7a6f0() {
   return (neuron0x1e77630()*0.254445);
}

double NNfunction_sb_cLuL::synapse0x1e7a070() {
   return (neuron0x1e77970()*0.0720455);
}

double NNfunction_sb_cLuL::synapse0x1e7a0b0() {
   return (neuron0x1e77ed0()*-0.272352);
}

double NNfunction_sb_cLuL::synapse0x1e7a840() {
   return (neuron0x1e780f0()*-0.440323);
}

double NNfunction_sb_cLuL::synapse0x1e7a880() {
   return (neuron0x1e78430()*0.0140148);
}

double NNfunction_sb_cLuL::synapse0x1e7a8c0() {
   return (neuron0x1e78770()*-0.19516);
}

double NNfunction_sb_cLuL::synapse0x1e7a900() {
   return (neuron0x1e78ab0()*0.39162);
}

double NNfunction_sb_cLuL::synapse0x1e7a940() {
   return (neuron0x1e78df0()*-0.353401);
}

double NNfunction_sb_cLuL::synapse0x1e7a980() {
   return (neuron0x1e79130()*0.167296);
}

double NNfunction_sb_cLuL::synapse0x1e7ad00() {
   return (neuron0x1e74570()*0.000193117);
}

double NNfunction_sb_cLuL::synapse0x1e7ad40() {
   return (neuron0x1e748b0()*0.00968343);
}

double NNfunction_sb_cLuL::synapse0x1e7ad80() {
   return (neuron0x1e74bf0()*0.0041145);
}

double NNfunction_sb_cLuL::synapse0x1e7adc0() {
   return (neuron0x1e74f30()*-3.56053);
}

double NNfunction_sb_cLuL::synapse0x1e7ae00() {
   return (neuron0x1e75270()*-0.0256863);
}

double NNfunction_sb_cLuL::synapse0x1e7ae40() {
   return (neuron0x1e755b0()*-0.000578983);
}

double NNfunction_sb_cLuL::synapse0x1e7ae80() {
   return (neuron0x1e758f0()*-0.00460728);
}

double NNfunction_sb_cLuL::synapse0x1e7aec0() {
   return (neuron0x1e75c30()*-0.00361648);
}

double NNfunction_sb_cLuL::synapse0x1e7af00() {
   return (neuron0x1e75f70()*0.0381735);
}

double NNfunction_sb_cLuL::synapse0x1e7af40() {
   return (neuron0x1e762b0()*-0.0259292);
}

double NNfunction_sb_cLuL::synapse0x1e7af80() {
   return (neuron0x1e765f0()*0.00719873);
}

double NNfunction_sb_cLuL::synapse0x1e7afc0() {
   return (neuron0x1e76930()*0.402419);
}

double NNfunction_sb_cLuL::synapse0x1e7b000() {
   return (neuron0x1e76c70()*0.405492);
}

double NNfunction_sb_cLuL::synapse0x1e7b040() {
   return (neuron0x1e76fb0()*-0.00849561);
}

double NNfunction_sb_cLuL::synapse0x1e7b080() {
   return (neuron0x1e772f0()*-0.0198608);
}

double NNfunction_sb_cLuL::synapse0x1e7b0c0() {
   return (neuron0x1e77630()*-0.0277302);
}

double NNfunction_sb_cLuL::synapse0x1e7ab50() {
   return (neuron0x1e77970()*-0.00799272);
}

double NNfunction_sb_cLuL::synapse0x1e7ab90() {
   return (neuron0x1e77ed0()*0.000834433);
}

double NNfunction_sb_cLuL::synapse0x1c33ad0() {
   return (neuron0x1e780f0()*-0.00118277);
}

double NNfunction_sb_cLuL::synapse0x1c33b10() {
   return (neuron0x1e78430()*-0.00797406);
}

double NNfunction_sb_cLuL::synapse0x1e63600() {
   return (neuron0x1e78770()*-0.0132064);
}

double NNfunction_sb_cLuL::synapse0x1e63640() {
   return (neuron0x1e78ab0()*-0.00424546);
}

double NNfunction_sb_cLuL::synapse0x1e63680() {
   return (neuron0x1e78df0()*-0.00338978);
}

double NNfunction_sb_cLuL::synapse0x1e744b0() {
   return (neuron0x1e79130()*-0.000613479);
}

double NNfunction_sb_cLuL::synapse0x1e7a610() {
   return (neuron0x1e74570()*-0.17333);
}

double NNfunction_sb_cLuL::synapse0x1e744f0() {
   return (neuron0x1e748b0()*0.0064205);
}

double NNfunction_sb_cLuL::synapse0x1e74530() {
   return (neuron0x1e74bf0()*-0.221085);
}

double NNfunction_sb_cLuL::synapse0x1e7b210() {
   return (neuron0x1e74f30()*1.31427);
}

double NNfunction_sb_cLuL::synapse0x1e7b250() {
   return (neuron0x1e75270()*0.0737823);
}

double NNfunction_sb_cLuL::synapse0x1e7b290() {
   return (neuron0x1e755b0()*-0.0436526);
}

double NNfunction_sb_cLuL::synapse0x1e7b2d0() {
   return (neuron0x1e758f0()*0.189041);
}

double NNfunction_sb_cLuL::synapse0x1e7b310() {
   return (neuron0x1e75c30()*-0.130325);
}

double NNfunction_sb_cLuL::synapse0x1e7b350() {
   return (neuron0x1e75f70()*-0.00650989);
}

double NNfunction_sb_cLuL::synapse0x1e7b390() {
   return (neuron0x1e762b0()*0.184287);
}

double NNfunction_sb_cLuL::synapse0x1e7b3d0() {
   return (neuron0x1e765f0()*0.269687);
}

double NNfunction_sb_cLuL::synapse0x1e7b410() {
   return (neuron0x1e76930()*1.24961);
}

double NNfunction_sb_cLuL::synapse0x1e7b450() {
   return (neuron0x1e76c70()*-0.0695801);
}

double NNfunction_sb_cLuL::synapse0x1e7b490() {
   return (neuron0x1e76fb0()*0.141183);
}

double NNfunction_sb_cLuL::synapse0x1e7b4d0() {
   return (neuron0x1e772f0()*-0.140845);
}

double NNfunction_sb_cLuL::synapse0x1e7b510() {
   return (neuron0x1e77630()*-0.170908);
}

double NNfunction_sb_cLuL::synapse0x1e7a460() {
   return (neuron0x1e77970()*0.191872);
}

double NNfunction_sb_cLuL::synapse0x1e7a4a0() {
   return (neuron0x1e77ed0()*-0.314438);
}

double NNfunction_sb_cLuL::synapse0x1e7b660() {
   return (neuron0x1e780f0()*0.403873);
}

double NNfunction_sb_cLuL::synapse0x1e7b6a0() {
   return (neuron0x1e78430()*0.11714);
}

double NNfunction_sb_cLuL::synapse0x1e7b6e0() {
   return (neuron0x1e78770()*0.210705);
}

double NNfunction_sb_cLuL::synapse0x1e7b720() {
   return (neuron0x1e78ab0()*0.0543861);
}

double NNfunction_sb_cLuL::synapse0x1e7b760() {
   return (neuron0x1e78df0()*0.246314);
}

double NNfunction_sb_cLuL::synapse0x1e7b7a0() {
   return (neuron0x1e79130()*0.131419);
}

double NNfunction_sb_cLuL::synapse0x1e7bb20() {
   return (neuron0x1e74570()*-0.818034);
}

double NNfunction_sb_cLuL::synapse0x1e7bb60() {
   return (neuron0x1e748b0()*-0.229075);
}

double NNfunction_sb_cLuL::synapse0x1e7bba0() {
   return (neuron0x1e74bf0()*-0.516083);
}

double NNfunction_sb_cLuL::synapse0x1e7bbe0() {
   return (neuron0x1e74f30()*0.361198);
}

double NNfunction_sb_cLuL::synapse0x1e7bc20() {
   return (neuron0x1e75270()*-0.501858);
}

double NNfunction_sb_cLuL::synapse0x1e7bc60() {
   return (neuron0x1e755b0()*-0.209423);
}

double NNfunction_sb_cLuL::synapse0x1e7bca0() {
   return (neuron0x1e758f0()*0.761138);
}

double NNfunction_sb_cLuL::synapse0x1e7bce0() {
   return (neuron0x1e75c30()*0.39035);
}

double NNfunction_sb_cLuL::synapse0x1e7bd20() {
   return (neuron0x1e75f70()*0.181632);
}

double NNfunction_sb_cLuL::synapse0x1e7bd60() {
   return (neuron0x1e762b0()*0.672214);
}

double NNfunction_sb_cLuL::synapse0x1e7bda0() {
   return (neuron0x1e765f0()*0.366167);
}

double NNfunction_sb_cLuL::synapse0x1e7bde0() {
   return (neuron0x1e76930()*0.723841);
}

double NNfunction_sb_cLuL::synapse0x1e7be20() {
   return (neuron0x1e76c70()*-0.928933);
}

double NNfunction_sb_cLuL::synapse0x1e7be60() {
   return (neuron0x1e76fb0()*0.371279);
}

double NNfunction_sb_cLuL::synapse0x1e7bea0() {
   return (neuron0x1e772f0()*0.36256);
}

double NNfunction_sb_cLuL::synapse0x1e7bee0() {
   return (neuron0x1e77630()*0.40181);
}

double NNfunction_sb_cLuL::synapse0x1e7b970() {
   return (neuron0x1e77970()*-0.0119135);
}

double NNfunction_sb_cLuL::synapse0x1e7b9b0() {
   return (neuron0x1e77ed0()*0.456972);
}

double NNfunction_sb_cLuL::synapse0x1e7c030() {
   return (neuron0x1e780f0()*0.347005);
}

double NNfunction_sb_cLuL::synapse0x1e7c070() {
   return (neuron0x1e78430()*-0.127783);
}

double NNfunction_sb_cLuL::synapse0x1e7c0b0() {
   return (neuron0x1e78770()*0.0725338);
}

double NNfunction_sb_cLuL::synapse0x1e7c0f0() {
   return (neuron0x1e78ab0()*-0.00733394);
}

double NNfunction_sb_cLuL::synapse0x1e7c130() {
   return (neuron0x1e78df0()*0.603255);
}

double NNfunction_sb_cLuL::synapse0x1e7c170() {
   return (neuron0x1e79130()*0.234002);
}

double NNfunction_sb_cLuL::synapse0x1e7c4f0() {
   return (neuron0x1e74570()*-0.1822);
}

double NNfunction_sb_cLuL::synapse0x1e7c530() {
   return (neuron0x1e748b0()*-0.0629211);
}

double NNfunction_sb_cLuL::synapse0x1e7c570() {
   return (neuron0x1e74bf0()*0.144312);
}

double NNfunction_sb_cLuL::synapse0x1e7c5b0() {
   return (neuron0x1e74f30()*-2.5459);
}

double NNfunction_sb_cLuL::synapse0x1e7c5f0() {
   return (neuron0x1e75270()*0.142855);
}

double NNfunction_sb_cLuL::synapse0x1e7c630() {
   return (neuron0x1e755b0()*0.0486774);
}

double NNfunction_sb_cLuL::synapse0x1e7c670() {
   return (neuron0x1e758f0()*0.0352608);
}

double NNfunction_sb_cLuL::synapse0x1e7c6b0() {
   return (neuron0x1e75c30()*-0.0313574);
}

double NNfunction_sb_cLuL::synapse0x1e7c6f0() {
   return (neuron0x1e75f70()*-0.0279043);
}

double NNfunction_sb_cLuL::synapse0x1c33e40() {
   return (neuron0x1e762b0()*0.0756219);
}

double NNfunction_sb_cLuL::synapse0x1c33e80() {
   return (neuron0x1e765f0()*0.0522862);
}

double NNfunction_sb_cLuL::synapse0x1c33ec0() {
   return (neuron0x1e76930()*-0.297693);
}

double NNfunction_sb_cLuL::synapse0x1c33f00() {
   return (neuron0x1e76c70()*-0.0615465);
}

double NNfunction_sb_cLuL::synapse0x1c33f40() {
   return (neuron0x1e76fb0()*0.0511528);
}

double NNfunction_sb_cLuL::synapse0x1c33f80() {
   return (neuron0x1e772f0()*-0.0660625);
}

double NNfunction_sb_cLuL::synapse0x1c33fc0() {
   return (neuron0x1e77630()*0.077447);
}

double NNfunction_sb_cLuL::synapse0x1e7c340() {
   return (neuron0x1e77970()*-0.0395712);
}

double NNfunction_sb_cLuL::synapse0x1e7c380() {
   return (neuron0x1e77ed0()*-0.246203);
}

double NNfunction_sb_cLuL::synapse0x1c34110() {
   return (neuron0x1e780f0()*0.0523644);
}

double NNfunction_sb_cLuL::synapse0x1c34150() {
   return (neuron0x1e78430()*-0.0531708);
}

double NNfunction_sb_cLuL::synapse0x1c34190() {
   return (neuron0x1e78770()*0.0752956);
}

double NNfunction_sb_cLuL::synapse0x1c341d0() {
   return (neuron0x1e78ab0()*-0.0416224);
}

double NNfunction_sb_cLuL::synapse0x1c34210() {
   return (neuron0x1e78df0()*0.0356043);
}

double NNfunction_sb_cLuL::synapse0x1e7cf40() {
   return (neuron0x1e79130()*0.10841);
}

double NNfunction_sb_cLuL::synapse0x1e7d2c0() {
   return (neuron0x1e74570()*-0.107771);
}

double NNfunction_sb_cLuL::synapse0x1e7d300() {
   return (neuron0x1e748b0()*0.2014);
}

double NNfunction_sb_cLuL::synapse0x1e7d340() {
   return (neuron0x1e74bf0()*0.0396481);
}

double NNfunction_sb_cLuL::synapse0x1e7d380() {
   return (neuron0x1e74f30()*-0.379295);
}

double NNfunction_sb_cLuL::synapse0x1e7d3c0() {
   return (neuron0x1e75270()*-0.7563);
}

double NNfunction_sb_cLuL::synapse0x1e7d400() {
   return (neuron0x1e755b0()*-0.917764);
}

double NNfunction_sb_cLuL::synapse0x1e7d440() {
   return (neuron0x1e758f0()*0.0260458);
}

double NNfunction_sb_cLuL::synapse0x1e7d480() {
   return (neuron0x1e75c30()*-0.327618);
}

double NNfunction_sb_cLuL::synapse0x1e7d4c0() {
   return (neuron0x1e75f70()*0.0159741);
}

double NNfunction_sb_cLuL::synapse0x1e7d500() {
   return (neuron0x1e762b0()*-0.0348103);
}

double NNfunction_sb_cLuL::synapse0x1e7d540() {
   return (neuron0x1e765f0()*0.317512);
}

double NNfunction_sb_cLuL::synapse0x1e7d580() {
   return (neuron0x1e76930()*0.126355);
}

double NNfunction_sb_cLuL::synapse0x1e7d5c0() {
   return (neuron0x1e76c70()*-0.361222);
}

double NNfunction_sb_cLuL::synapse0x1e7d600() {
   return (neuron0x1e76fb0()*-0.0357697);
}

double NNfunction_sb_cLuL::synapse0x1e7d640() {
   return (neuron0x1e772f0()*0.38607);
}

double NNfunction_sb_cLuL::synapse0x1e7d680() {
   return (neuron0x1e77630()*0.257745);
}

double NNfunction_sb_cLuL::synapse0x1e7d110() {
   return (neuron0x1e77970()*-0.161995);
}

double NNfunction_sb_cLuL::synapse0x1e7d150() {
   return (neuron0x1e77ed0()*0.161581);
}

double NNfunction_sb_cLuL::synapse0x1e7d7d0() {
   return (neuron0x1e780f0()*0.279223);
}

double NNfunction_sb_cLuL::synapse0x1e7d810() {
   return (neuron0x1e78430()*1.57713);
}

double NNfunction_sb_cLuL::synapse0x1e7d850() {
   return (neuron0x1e78770()*0.016793);
}

double NNfunction_sb_cLuL::synapse0x1e7d890() {
   return (neuron0x1e78ab0()*0.920063);
}

double NNfunction_sb_cLuL::synapse0x1e7d8d0() {
   return (neuron0x1e78df0()*-0.396498);
}

double NNfunction_sb_cLuL::synapse0x1e7d910() {
   return (neuron0x1e79130()*0.37049);
}

double NNfunction_sb_cLuL::synapse0x1e7dc90() {
   return (neuron0x1e74570()*-0.0938221);
}

double NNfunction_sb_cLuL::synapse0x1e7dcd0() {
   return (neuron0x1e748b0()*-0.727645);
}

double NNfunction_sb_cLuL::synapse0x1e7dd10() {
   return (neuron0x1e74bf0()*-0.750402);
}

double NNfunction_sb_cLuL::synapse0x1e7dd50() {
   return (neuron0x1e74f30()*0.620239);
}

double NNfunction_sb_cLuL::synapse0x1e7dd90() {
   return (neuron0x1e75270()*0.158734);
}

double NNfunction_sb_cLuL::synapse0x1e7ddd0() {
   return (neuron0x1e755b0()*-0.208216);
}

double NNfunction_sb_cLuL::synapse0x1e7de10() {
   return (neuron0x1e758f0()*-0.124309);
}

double NNfunction_sb_cLuL::synapse0x1e7de50() {
   return (neuron0x1e75c30()*-0.194654);
}

double NNfunction_sb_cLuL::synapse0x1e7de90() {
   return (neuron0x1e75f70()*-0.404002);
}

double NNfunction_sb_cLuL::synapse0x1e7ded0() {
   return (neuron0x1e762b0()*-0.177287);
}

double NNfunction_sb_cLuL::synapse0x1e7df10() {
   return (neuron0x1e765f0()*-0.493289);
}

double NNfunction_sb_cLuL::synapse0x1e7df50() {
   return (neuron0x1e76930()*-0.468081);
}

double NNfunction_sb_cLuL::synapse0x1e7df90() {
   return (neuron0x1e76c70()*1.13645);
}

double NNfunction_sb_cLuL::synapse0x1e7dfd0() {
   return (neuron0x1e76fb0()*-0.435633);
}

double NNfunction_sb_cLuL::synapse0x1e7e010() {
   return (neuron0x1e772f0()*0.367537);
}

double NNfunction_sb_cLuL::synapse0x1e7e050() {
   return (neuron0x1e77630()*-1.14282);
}

double NNfunction_sb_cLuL::synapse0x1e7dae0() {
   return (neuron0x1e77970()*0.046539);
}

double NNfunction_sb_cLuL::synapse0x1e7db20() {
   return (neuron0x1e77ed0()*-0.0839879);
}

double NNfunction_sb_cLuL::synapse0x1e7e1a0() {
   return (neuron0x1e780f0()*0.321837);
}

double NNfunction_sb_cLuL::synapse0x1e7e1e0() {
   return (neuron0x1e78430()*0.399155);
}

double NNfunction_sb_cLuL::synapse0x1e7e220() {
   return (neuron0x1e78770()*0.924418);
}

double NNfunction_sb_cLuL::synapse0x1e7e260() {
   return (neuron0x1e78ab0()*-0.325634);
}

double NNfunction_sb_cLuL::synapse0x1e7e2a0() {
   return (neuron0x1e78df0()*-0.229447);
}

double NNfunction_sb_cLuL::synapse0x1e7e2e0() {
   return (neuron0x1e79130()*0.57721);
}

double NNfunction_sb_cLuL::synapse0x1e77dc0() {
   return (neuron0x1e74570()*0.104194);
}

double NNfunction_sb_cLuL::synapse0x1e77e00() {
   return (neuron0x1e748b0()*-0.147632);
}

double NNfunction_sb_cLuL::synapse0x1e77e40() {
   return (neuron0x1e74bf0()*0.112878);
}

double NNfunction_sb_cLuL::synapse0x1e77e80() {
   return (neuron0x1e74f30()*-2.22368);
}

double NNfunction_sb_cLuL::synapse0x1e7e870() {
   return (neuron0x1e75270()*-0.0161592);
}

double NNfunction_sb_cLuL::synapse0x1e7e8b0() {
   return (neuron0x1e755b0()*-0.401704);
}

double NNfunction_sb_cLuL::synapse0x1e7e8f0() {
   return (neuron0x1e758f0()*0.461502);
}

double NNfunction_sb_cLuL::synapse0x1e7e930() {
   return (neuron0x1e75c30()*0.00462685);
}

double NNfunction_sb_cLuL::synapse0x1e7e970() {
   return (neuron0x1e75f70()*-0.34788);
}

double NNfunction_sb_cLuL::synapse0x1e7e9b0() {
   return (neuron0x1e762b0()*-0.0177404);
}

double NNfunction_sb_cLuL::synapse0x1e7e9f0() {
   return (neuron0x1e765f0()*0.360012);
}

double NNfunction_sb_cLuL::synapse0x1e7ea30() {
   return (neuron0x1e76930()*0.879927);
}

double NNfunction_sb_cLuL::synapse0x1e7ea70() {
   return (neuron0x1e76c70()*0.70094);
}

double NNfunction_sb_cLuL::synapse0x1e7eab0() {
   return (neuron0x1e76fb0()*0.355341);
}

double NNfunction_sb_cLuL::synapse0x1e7eaf0() {
   return (neuron0x1e772f0()*-0.154607);
}

double NNfunction_sb_cLuL::synapse0x1e7eb30() {
   return (neuron0x1e77630()*0.439851);
}

double NNfunction_sb_cLuL::synapse0x1e7e4b0() {
   return (neuron0x1e77970()*0.231405);
}

double NNfunction_sb_cLuL::synapse0x1e7e4f0() {
   return (neuron0x1e77ed0()*0.536346);
}

double NNfunction_sb_cLuL::synapse0x1e7ec80() {
   return (neuron0x1e780f0()*-0.342213);
}

double NNfunction_sb_cLuL::synapse0x1e7ecc0() {
   return (neuron0x1e78430()*0.08957);
}

double NNfunction_sb_cLuL::synapse0x1e7ed00() {
   return (neuron0x1e78770()*0.119688);
}

double NNfunction_sb_cLuL::synapse0x1e7ed40() {
   return (neuron0x1e78ab0()*-0.200948);
}

double NNfunction_sb_cLuL::synapse0x1e7ed80() {
   return (neuron0x1e78df0()*-0.0405684);
}

double NNfunction_sb_cLuL::synapse0x1e7edc0() {
   return (neuron0x1e79130()*-0.155417);
}

double NNfunction_sb_cLuL::synapse0x1e7f140() {
   return (neuron0x1e74570()*-0.133095);
}

double NNfunction_sb_cLuL::synapse0x1e7f180() {
   return (neuron0x1e748b0()*-0.174342);
}

double NNfunction_sb_cLuL::synapse0x1e7f1c0() {
   return (neuron0x1e74bf0()*-0.539896);
}

double NNfunction_sb_cLuL::synapse0x1e7f200() {
   return (neuron0x1e74f30()*0.543518);
}

double NNfunction_sb_cLuL::synapse0x1e7f240() {
   return (neuron0x1e75270()*-0.150572);
}

double NNfunction_sb_cLuL::synapse0x1e7f280() {
   return (neuron0x1e755b0()*-0.0398956);
}

double NNfunction_sb_cLuL::synapse0x1e7f2c0() {
   return (neuron0x1e758f0()*0.0552442);
}

double NNfunction_sb_cLuL::synapse0x1e7f300() {
   return (neuron0x1e75c30()*-0.269425);
}

double NNfunction_sb_cLuL::synapse0x1e7f340() {
   return (neuron0x1e75f70()*0.0427589);
}

double NNfunction_sb_cLuL::synapse0x1e7f380() {
   return (neuron0x1e762b0()*-0.0570757);
}

double NNfunction_sb_cLuL::synapse0x1e7f3c0() {
   return (neuron0x1e765f0()*-0.00471902);
}

double NNfunction_sb_cLuL::synapse0x1e7f400() {
   return (neuron0x1e76930()*0.412717);
}

double NNfunction_sb_cLuL::synapse0x1e7f440() {
   return (neuron0x1e76c70()*-0.177477);
}

double NNfunction_sb_cLuL::synapse0x1e7f480() {
   return (neuron0x1e76fb0()*-0.367623);
}

double NNfunction_sb_cLuL::synapse0x1e7f4c0() {
   return (neuron0x1e772f0()*-0.526681);
}

double NNfunction_sb_cLuL::synapse0x1e7f500() {
   return (neuron0x1e77630()*-0.563694);
}

double NNfunction_sb_cLuL::synapse0x1e7ef90() {
   return (neuron0x1e77970()*-0.0847745);
}

double NNfunction_sb_cLuL::synapse0x1e7efd0() {
   return (neuron0x1e77ed0()*-0.462597);
}

double NNfunction_sb_cLuL::synapse0x1e7f650() {
   return (neuron0x1e780f0()*-0.249875);
}

double NNfunction_sb_cLuL::synapse0x1e7f690() {
   return (neuron0x1e78430()*0.0934342);
}

double NNfunction_sb_cLuL::synapse0x1e7f6d0() {
   return (neuron0x1e78770()*0.0433605);
}

double NNfunction_sb_cLuL::synapse0x1e7f710() {
   return (neuron0x1e78ab0()*0.196714);
}

double NNfunction_sb_cLuL::synapse0x1e7f750() {
   return (neuron0x1e78df0()*0.137555);
}

double NNfunction_sb_cLuL::synapse0x1e7f790() {
   return (neuron0x1e79130()*-0.283728);
}

double NNfunction_sb_cLuL::synapse0x1e7fb10() {
   return (neuron0x1e74570()*0.0103685);
}

double NNfunction_sb_cLuL::synapse0x1e7fb50() {
   return (neuron0x1e748b0()*0.289814);
}

double NNfunction_sb_cLuL::synapse0x1e7fb90() {
   return (neuron0x1e74bf0()*-0.49198);
}

double NNfunction_sb_cLuL::synapse0x1e7fbd0() {
   return (neuron0x1e74f30()*0.672652);
}

double NNfunction_sb_cLuL::synapse0x1e7fc10() {
   return (neuron0x1e75270()*0.126973);
}

double NNfunction_sb_cLuL::synapse0x1e7fc50() {
   return (neuron0x1e755b0()*0.362203);
}

double NNfunction_sb_cLuL::synapse0x1e7fc90() {
   return (neuron0x1e758f0()*0.159024);
}

double NNfunction_sb_cLuL::synapse0x1e7fcd0() {
   return (neuron0x1e75c30()*0.451961);
}

double NNfunction_sb_cLuL::synapse0x1e7fd10() {
   return (neuron0x1e75f70()*-1.87176);
}

double NNfunction_sb_cLuL::synapse0x1e7fd50() {
   return (neuron0x1e762b0()*0.366308);
}

double NNfunction_sb_cLuL::synapse0x1e7fd90() {
   return (neuron0x1e765f0()*0.0798401);
}

double NNfunction_sb_cLuL::synapse0x1e7fdd0() {
   return (neuron0x1e76930()*-0.356312);
}

double NNfunction_sb_cLuL::synapse0x1e7fe10() {
   return (neuron0x1e76c70()*-0.0226271);
}

double NNfunction_sb_cLuL::synapse0x1e7fe50() {
   return (neuron0x1e76fb0()*-1.03065);
}

double NNfunction_sb_cLuL::synapse0x1e7fe90() {
   return (neuron0x1e772f0()*-0.582914);
}

double NNfunction_sb_cLuL::synapse0x1e7fed0() {
   return (neuron0x1e77630()*0.352027);
}

double NNfunction_sb_cLuL::synapse0x1e7f960() {
   return (neuron0x1e77970()*0.0237671);
}

double NNfunction_sb_cLuL::synapse0x1e7f9a0() {
   return (neuron0x1e77ed0()*0.232393);
}

double NNfunction_sb_cLuL::synapse0x1e7c730() {
   return (neuron0x1e780f0()*0.334202);
}

double NNfunction_sb_cLuL::synapse0x1e7c770() {
   return (neuron0x1e78430()*0.806611);
}

double NNfunction_sb_cLuL::synapse0x1e7c7b0() {
   return (neuron0x1e78770()*0.839483);
}

double NNfunction_sb_cLuL::synapse0x1e7c7f0() {
   return (neuron0x1e78ab0()*-0.106454);
}

double NNfunction_sb_cLuL::synapse0x1e7c830() {
   return (neuron0x1e78df0()*-0.793242);
}

double NNfunction_sb_cLuL::synapse0x1e7c870() {
   return (neuron0x1e79130()*0.306403);
}

double NNfunction_sb_cLuL::synapse0x1e7cbf0() {
   return (neuron0x1e74570()*-0.546813);
}

double NNfunction_sb_cLuL::synapse0x1e7cc30() {
   return (neuron0x1e748b0()*-0.548777);
}

double NNfunction_sb_cLuL::synapse0x1e7cc70() {
   return (neuron0x1e74bf0()*-0.305523);
}

double NNfunction_sb_cLuL::synapse0x1e7ccb0() {
   return (neuron0x1e74f30()*-0.783535);
}

double NNfunction_sb_cLuL::synapse0x1e7ccf0() {
   return (neuron0x1e75270()*-0.388055);
}

double NNfunction_sb_cLuL::synapse0x1e7cd30() {
   return (neuron0x1e755b0()*0.331384);
}

double NNfunction_sb_cLuL::synapse0x1e7cd70() {
   return (neuron0x1e758f0()*-0.310674);
}

double NNfunction_sb_cLuL::synapse0x1e7cdb0() {
   return (neuron0x1e75c30()*-0.116926);
}

double NNfunction_sb_cLuL::synapse0x1e7cdf0() {
   return (neuron0x1e75f70()*-0.272722);
}

double NNfunction_sb_cLuL::synapse0x1e7ce30() {
   return (neuron0x1e762b0()*-0.0427617);
}

double NNfunction_sb_cLuL::synapse0x1e7ce70() {
   return (neuron0x1e765f0()*-0.652841);
}

double NNfunction_sb_cLuL::synapse0x1e7ceb0() {
   return (neuron0x1e76930()*-0.389583);
}

double NNfunction_sb_cLuL::synapse0x1e7cef0() {
   return (neuron0x1e76c70()*0.571846);
}

double NNfunction_sb_cLuL::synapse0x1e81030() {
   return (neuron0x1e76fb0()*0.217375);
}

double NNfunction_sb_cLuL::synapse0x1e81070() {
   return (neuron0x1e772f0()*0.373501);
}

double NNfunction_sb_cLuL::synapse0x1e810b0() {
   return (neuron0x1e77630()*-0.486112);
}

double NNfunction_sb_cLuL::synapse0x1e7ca40() {
   return (neuron0x1e77970()*0.0643607);
}

double NNfunction_sb_cLuL::synapse0x1e7ca80() {
   return (neuron0x1e77ed0()*-0.663559);
}

double NNfunction_sb_cLuL::synapse0x1e81200() {
   return (neuron0x1e780f0()*1.03144);
}

double NNfunction_sb_cLuL::synapse0x1e81240() {
   return (neuron0x1e78430()*-0.423622);
}

double NNfunction_sb_cLuL::synapse0x1e81280() {
   return (neuron0x1e78770()*-0.0595901);
}

double NNfunction_sb_cLuL::synapse0x1e812c0() {
   return (neuron0x1e78ab0()*-0.00542631);
}

double NNfunction_sb_cLuL::synapse0x1e81300() {
   return (neuron0x1e78df0()*0.0274516);
}

double NNfunction_sb_cLuL::synapse0x1e81340() {
   return (neuron0x1e79130()*0.725792);
}

double NNfunction_sb_cLuL::synapse0x1e816c0() {
   return (neuron0x1e74570()*0.491125);
}

double NNfunction_sb_cLuL::synapse0x1e81700() {
   return (neuron0x1e748b0()*0.33865);
}

double NNfunction_sb_cLuL::synapse0x1e81740() {
   return (neuron0x1e74bf0()*1.02795);
}

double NNfunction_sb_cLuL::synapse0x1e81780() {
   return (neuron0x1e74f30()*-0.12836);
}

double NNfunction_sb_cLuL::synapse0x1e817c0() {
   return (neuron0x1e75270()*-0.0183776);
}

double NNfunction_sb_cLuL::synapse0x1e81800() {
   return (neuron0x1e755b0()*0.454984);
}

double NNfunction_sb_cLuL::synapse0x1e81840() {
   return (neuron0x1e758f0()*-0.367542);
}

double NNfunction_sb_cLuL::synapse0x1e81880() {
   return (neuron0x1e75c30()*0.609731);
}

double NNfunction_sb_cLuL::synapse0x1e818c0() {
   return (neuron0x1e75f70()*-0.0988148);
}

double NNfunction_sb_cLuL::synapse0x1e81900() {
   return (neuron0x1e762b0()*0.207271);
}

double NNfunction_sb_cLuL::synapse0x1e81940() {
   return (neuron0x1e765f0()*0.225596);
}

double NNfunction_sb_cLuL::synapse0x1e81980() {
   return (neuron0x1e76930()*-0.211244);
}

double NNfunction_sb_cLuL::synapse0x1e819c0() {
   return (neuron0x1e76c70()*-0.96634);
}

double NNfunction_sb_cLuL::synapse0x1e81a00() {
   return (neuron0x1e76fb0()*-0.261593);
}

double NNfunction_sb_cLuL::synapse0x1e81a40() {
   return (neuron0x1e772f0()*-0.359504);
}

double NNfunction_sb_cLuL::synapse0x1e81a80() {
   return (neuron0x1e77630()*0.293761);
}

double NNfunction_sb_cLuL::synapse0x1e81510() {
   return (neuron0x1e77970()*-0.385079);
}

double NNfunction_sb_cLuL::synapse0x1e81550() {
   return (neuron0x1e77ed0()*1.0625);
}

double NNfunction_sb_cLuL::synapse0x1e81bd0() {
   return (neuron0x1e780f0()*0.251748);
}

double NNfunction_sb_cLuL::synapse0x1e81c10() {
   return (neuron0x1e78430()*-0.357871);
}

double NNfunction_sb_cLuL::synapse0x1e81c50() {
   return (neuron0x1e78770()*-0.697969);
}

double NNfunction_sb_cLuL::synapse0x1e81c90() {
   return (neuron0x1e78ab0()*0.680112);
}

double NNfunction_sb_cLuL::synapse0x1e81cd0() {
   return (neuron0x1e78df0()*0.179314);
}

double NNfunction_sb_cLuL::synapse0x1e81d10() {
   return (neuron0x1e79130()*-0.18082);
}

double NNfunction_sb_cLuL::synapse0x1e82090() {
   return (neuron0x1e74570()*0.0141766);
}

double NNfunction_sb_cLuL::synapse0x1e820d0() {
   return (neuron0x1e748b0()*0.0165293);
}

double NNfunction_sb_cLuL::synapse0x1e82110() {
   return (neuron0x1e74bf0()*0.00755387);
}

double NNfunction_sb_cLuL::synapse0x1e82150() {
   return (neuron0x1e74f30()*0.0395126);
}

double NNfunction_sb_cLuL::synapse0x1e82190() {
   return (neuron0x1e75270()*-0.0268166);
}

double NNfunction_sb_cLuL::synapse0x1e821d0() {
   return (neuron0x1e755b0()*0.0109306);
}

double NNfunction_sb_cLuL::synapse0x1e82210() {
   return (neuron0x1e758f0()*-0.0127557);
}

double NNfunction_sb_cLuL::synapse0x1e82250() {
   return (neuron0x1e75c30()*0.0185432);
}

double NNfunction_sb_cLuL::synapse0x1e82290() {
   return (neuron0x1e75f70()*-0.0217526);
}

double NNfunction_sb_cLuL::synapse0x1e822d0() {
   return (neuron0x1e762b0()*-0.0101014);
}

double NNfunction_sb_cLuL::synapse0x1e82310() {
   return (neuron0x1e765f0()*-0.0109436);
}

double NNfunction_sb_cLuL::synapse0x1e82350() {
   return (neuron0x1e76930()*-0.213412);
}

double NNfunction_sb_cLuL::synapse0x1e82390() {
   return (neuron0x1e76c70()*2.14909);
}

double NNfunction_sb_cLuL::synapse0x1e823d0() {
   return (neuron0x1e76fb0()*0.0376606);
}

double NNfunction_sb_cLuL::synapse0x1e82410() {
   return (neuron0x1e772f0()*0.00475475);
}

double NNfunction_sb_cLuL::synapse0x1e82450() {
   return (neuron0x1e77630()*0.031986);
}

double NNfunction_sb_cLuL::synapse0x1e81ee0() {
   return (neuron0x1e77970()*-0.00843386);
}

double NNfunction_sb_cLuL::synapse0x1e81f20() {
   return (neuron0x1e77ed0()*0.00139842);
}

double NNfunction_sb_cLuL::synapse0x1e825a0() {
   return (neuron0x1e780f0()*-0.0454179);
}

double NNfunction_sb_cLuL::synapse0x1e825e0() {
   return (neuron0x1e78430()*0.0173833);
}

double NNfunction_sb_cLuL::synapse0x1e82620() {
   return (neuron0x1e78770()*-0.0259734);
}

double NNfunction_sb_cLuL::synapse0x1e82660() {
   return (neuron0x1e78ab0()*0.0104957);
}

double NNfunction_sb_cLuL::synapse0x1e826a0() {
   return (neuron0x1e78df0()*-0.0248276);
}

double NNfunction_sb_cLuL::synapse0x1e826e0() {
   return (neuron0x1e79130()*-0.018711);
}

double NNfunction_sb_cLuL::synapse0x1e82a60() {
   return (neuron0x1e74570()*0.00821396);
}

double NNfunction_sb_cLuL::synapse0x1e82aa0() {
   return (neuron0x1e748b0()*-0.00861718);
}

double NNfunction_sb_cLuL::synapse0x1e82ae0() {
   return (neuron0x1e74bf0()*-0.0197758);
}

double NNfunction_sb_cLuL::synapse0x1e82b20() {
   return (neuron0x1e74f30()*-9.57716);
}

double NNfunction_sb_cLuL::synapse0x1e82b60() {
   return (neuron0x1e75270()*0.0139389);
}

double NNfunction_sb_cLuL::synapse0x1e82ba0() {
   return (neuron0x1e755b0()*-0.0169894);
}

double NNfunction_sb_cLuL::synapse0x1e82be0() {
   return (neuron0x1e758f0()*-0.0103007);
}

double NNfunction_sb_cLuL::synapse0x1e82c20() {
   return (neuron0x1e75c30()*0.0132858);
}

double NNfunction_sb_cLuL::synapse0x1e82c60() {
   return (neuron0x1e75f70()*-0.032738);
}

double NNfunction_sb_cLuL::synapse0x1e82ca0() {
   return (neuron0x1e762b0()*0.000515543);
}

double NNfunction_sb_cLuL::synapse0x1e82ce0() {
   return (neuron0x1e765f0()*0.00796349);
}

double NNfunction_sb_cLuL::synapse0x1e82d20() {
   return (neuron0x1e76930()*0.0334832);
}

double NNfunction_sb_cLuL::synapse0x1e82d60() {
   return (neuron0x1e76c70()*-0.0373708);
}

double NNfunction_sb_cLuL::synapse0x1e82da0() {
   return (neuron0x1e76fb0()*-0.0101698);
}

double NNfunction_sb_cLuL::synapse0x1e82de0() {
   return (neuron0x1e772f0()*0.00815988);
}

double NNfunction_sb_cLuL::synapse0x1e82e20() {
   return (neuron0x1e77630()*0.0222001);
}

double NNfunction_sb_cLuL::synapse0x1e828b0() {
   return (neuron0x1e77970()*-0.0140788);
}

double NNfunction_sb_cLuL::synapse0x1e828f0() {
   return (neuron0x1e77ed0()*0.0144405);
}

double NNfunction_sb_cLuL::synapse0x1e82f70() {
   return (neuron0x1e780f0()*-0.000930057);
}

double NNfunction_sb_cLuL::synapse0x1e82fb0() {
   return (neuron0x1e78430()*-0.00161699);
}

double NNfunction_sb_cLuL::synapse0x1e82ff0() {
   return (neuron0x1e78770()*0.015867);
}

double NNfunction_sb_cLuL::synapse0x1e83030() {
   return (neuron0x1e78ab0()*0.0126698);
}

double NNfunction_sb_cLuL::synapse0x1e83070() {
   return (neuron0x1e78df0()*0.00192532);
}

double NNfunction_sb_cLuL::synapse0x1e830b0() {
   return (neuron0x1e79130()*-0.0278242);
}

double NNfunction_sb_cLuL::synapse0x1e83430() {
   return (neuron0x1e74570()*0.723503);
}

double NNfunction_sb_cLuL::synapse0x1e74790() {
   return (neuron0x1e748b0()*0.18276);
}

double NNfunction_sb_cLuL::synapse0x1e747d0() {
   return (neuron0x1e74bf0()*0.058645);
}

double NNfunction_sb_cLuL::synapse0x1e74ad0() {
   return (neuron0x1e74f30()*0.0962174);
}

double NNfunction_sb_cLuL::synapse0x1e74b10() {
   return (neuron0x1e75270()*-0.823433);
}

double NNfunction_sb_cLuL::synapse0x1e74e10() {
   return (neuron0x1e755b0()*-0.919162);
}

double NNfunction_sb_cLuL::synapse0x1e74e50() {
   return (neuron0x1e758f0()*-0.0605645);
}

double NNfunction_sb_cLuL::synapse0x1e75150() {
   return (neuron0x1e75c30()*-0.155934);
}

double NNfunction_sb_cLuL::synapse0x1e75190() {
   return (neuron0x1e75f70()*0.9703);
}

double NNfunction_sb_cLuL::synapse0x1e75490() {
   return (neuron0x1e762b0()*-0.0212957);
}

double NNfunction_sb_cLuL::synapse0x1e754d0() {
   return (neuron0x1e765f0()*-1.54386);
}

double NNfunction_sb_cLuL::synapse0x1e757d0() {
   return (neuron0x1e76930()*0.958823);
}

double NNfunction_sb_cLuL::synapse0x1e75810() {
   return (neuron0x1e76c70()*-0.189529);
}

double NNfunction_sb_cLuL::synapse0x1e75b10() {
   return (neuron0x1e76fb0()*0.236652);
}

double NNfunction_sb_cLuL::synapse0x1e75b50() {
   return (neuron0x1e772f0()*-0.0624996);
}

double NNfunction_sb_cLuL::synapse0x1e75e50() {
   return (neuron0x1e77630()*-0.590569);
}

double NNfunction_sb_cLuL::synapse0x1e75e90() {
   return (neuron0x1e77970()*-0.22533);
}

double NNfunction_sb_cLuL::synapse0x1e76190() {
   return (neuron0x1e77ed0()*0.634635);
}

double NNfunction_sb_cLuL::synapse0x1e761d0() {
   return (neuron0x1e780f0()*-0.152652);
}

double NNfunction_sb_cLuL::synapse0x1e764d0() {
   return (neuron0x1e78430()*-0.1699);
}

double NNfunction_sb_cLuL::synapse0x1e76510() {
   return (neuron0x1e78770()*0.226941);
}

double NNfunction_sb_cLuL::synapse0x1e76810() {
   return (neuron0x1e78ab0()*-0.00435845);
}

double NNfunction_sb_cLuL::synapse0x1e76850() {
   return (neuron0x1e78df0()*-0.376839);
}

double NNfunction_sb_cLuL::synapse0x1e76b50() {
   return (neuron0x1e79130()*-0.595742);
}

double NNfunction_sb_cLuL::synapse0x1e76b90() {
   return (neuron0x1e74570()*-0.292224);
}

double NNfunction_sb_cLuL::synapse0x1e77850() {
   return (neuron0x1e748b0()*0.240958);
}

double NNfunction_sb_cLuL::synapse0x1e77890() {
   return (neuron0x1e74bf0()*-0.507289);
}

double NNfunction_sb_cLuL::synapse0x1e83280() {
   return (neuron0x1e74f30()*0.287031);
}

double NNfunction_sb_cLuL::synapse0x1e832c0() {
   return (neuron0x1e75270()*1.73258);
}

double NNfunction_sb_cLuL::synapse0x1e77b90() {
   return (neuron0x1e755b0()*1.07029);
}

double NNfunction_sb_cLuL::synapse0x1e77bd0() {
   return (neuron0x1e758f0()*-0.813784);
}

double NNfunction_sb_cLuL::synapse0x1c25b60() {
   return (neuron0x1e75c30()*0.344102);
}

double NNfunction_sb_cLuL::synapse0x1c25ba0() {
   return (neuron0x1e75f70()*0.38882);
}

double NNfunction_sb_cLuL::synapse0x1e78310() {
   return (neuron0x1e762b0()*-0.193272);
}

double NNfunction_sb_cLuL::synapse0x1e78350() {
   return (neuron0x1e765f0()*0.365981);
}

double NNfunction_sb_cLuL::synapse0x1e78650() {
   return (neuron0x1e76930()*0.605576);
}

double NNfunction_sb_cLuL::synapse0x1e78690() {
   return (neuron0x1e76c70()*-0.841301);
}

double NNfunction_sb_cLuL::synapse0x1e78990() {
   return (neuron0x1e76fb0()*0.867063);
}

double NNfunction_sb_cLuL::synapse0x1e789d0() {
   return (neuron0x1e772f0()*0.238346);
}

double NNfunction_sb_cLuL::synapse0x1e78cd0() {
   return (neuron0x1e77630()*1.04167);
}

double NNfunction_sb_cLuL::synapse0x1e78d10() {
   return (neuron0x1e77970()*0.350989);
}

double NNfunction_sb_cLuL::synapse0x1e79010() {
   return (neuron0x1e77ed0()*-0.154968);
}

double NNfunction_sb_cLuL::synapse0x1e79050() {
   return (neuron0x1e780f0()*-0.199845);
}

double NNfunction_sb_cLuL::synapse0x1e79350() {
   return (neuron0x1e78430()*-0.198958);
}

double NNfunction_sb_cLuL::synapse0x1e79390() {
   return (neuron0x1e78770()*-0.0363985);
}

double NNfunction_sb_cLuL::synapse0x1e76e90() {
   return (neuron0x1e78ab0()*-0.399065);
}

double NNfunction_sb_cLuL::synapse0x1e76ed0() {
   return (neuron0x1e78df0()*-0.196061);
}

double NNfunction_sb_cLuL::synapse0x1e851a0() {
   return (neuron0x1e79130()*0.393378);
}

double NNfunction_sb_cLuL::synapse0x1e85520() {
   return (neuron0x1e74570()*0.00750103);
}

double NNfunction_sb_cLuL::synapse0x1e85560() {
   return (neuron0x1e748b0()*-0.000385043);
}

double NNfunction_sb_cLuL::synapse0x1e855a0() {
   return (neuron0x1e74bf0()*0.00288728);
}

double NNfunction_sb_cLuL::synapse0x1e855e0() {
   return (neuron0x1e74f30()*4.06672);
}

double NNfunction_sb_cLuL::synapse0x1e85620() {
   return (neuron0x1e75270()*-0.00613566);
}

double NNfunction_sb_cLuL::synapse0x1e85660() {
   return (neuron0x1e755b0()*-0.00038151);
}

double NNfunction_sb_cLuL::synapse0x1e856a0() {
   return (neuron0x1e758f0()*0.00382559);
}

double NNfunction_sb_cLuL::synapse0x1e856e0() {
   return (neuron0x1e75c30()*-0.00580769);
}

double NNfunction_sb_cLuL::synapse0x1e85720() {
   return (neuron0x1e75f70()*0.0115627);
}

double NNfunction_sb_cLuL::synapse0x1e85760() {
   return (neuron0x1e762b0()*-0.0190513);
}

double NNfunction_sb_cLuL::synapse0x1e857a0() {
   return (neuron0x1e765f0()*0.0039287);
}

double NNfunction_sb_cLuL::synapse0x1e857e0() {
   return (neuron0x1e76930()*0.0512184);
}

double NNfunction_sb_cLuL::synapse0x1e85820() {
   return (neuron0x1e76c70()*0.0315408);
}

double NNfunction_sb_cLuL::synapse0x1e85860() {
   return (neuron0x1e76fb0()*0.00263643);
}

double NNfunction_sb_cLuL::synapse0x1e858a0() {
   return (neuron0x1e772f0()*-0.000885652);
}

double NNfunction_sb_cLuL::synapse0x1e858e0() {
   return (neuron0x1e77630()*-0.00799423);
}

double NNfunction_sb_cLuL::synapse0x1e85370() {
   return (neuron0x1e77970()*-0.00476995);
}

double NNfunction_sb_cLuL::synapse0x1e853b0() {
   return (neuron0x1e77ed0()*0.0216725);
}

double NNfunction_sb_cLuL::synapse0x1e85a30() {
   return (neuron0x1e780f0()*0.0096017);
}

double NNfunction_sb_cLuL::synapse0x1e85a70() {
   return (neuron0x1e78430()*0.00790472);
}

double NNfunction_sb_cLuL::synapse0x1e85ab0() {
   return (neuron0x1e78770()*-0.00379856);
}

double NNfunction_sb_cLuL::synapse0x1e85af0() {
   return (neuron0x1e78ab0()*0.00504187);
}

double NNfunction_sb_cLuL::synapse0x1e85b30() {
   return (neuron0x1e78df0()*0.0108691);
}

double NNfunction_sb_cLuL::synapse0x1e85b70() {
   return (neuron0x1e79130()*-0.0117126);
}

double NNfunction_sb_cLuL::synapse0x1e85ef0() {
   return (neuron0x1e74570()*-1.15563);
}

double NNfunction_sb_cLuL::synapse0x1e85f30() {
   return (neuron0x1e748b0()*0.470534);
}

double NNfunction_sb_cLuL::synapse0x1e85f70() {
   return (neuron0x1e74bf0()*0.333819);
}

double NNfunction_sb_cLuL::synapse0x1e85fb0() {
   return (neuron0x1e74f30()*1.26223);
}

double NNfunction_sb_cLuL::synapse0x1e85ff0() {
   return (neuron0x1e75270()*-0.542633);
}

double NNfunction_sb_cLuL::synapse0x1e86030() {
   return (neuron0x1e755b0()*-0.605067);
}

double NNfunction_sb_cLuL::synapse0x1e86070() {
   return (neuron0x1e758f0()*-1.32366);
}

double NNfunction_sb_cLuL::synapse0x1e860b0() {
   return (neuron0x1e75c30()*0.614688);
}

double NNfunction_sb_cLuL::synapse0x1e860f0() {
   return (neuron0x1e75f70()*0.274944);
}

double NNfunction_sb_cLuL::synapse0x1e86130() {
   return (neuron0x1e762b0()*0.675038);
}

double NNfunction_sb_cLuL::synapse0x1e86170() {
   return (neuron0x1e765f0()*0.476659);
}

double NNfunction_sb_cLuL::synapse0x1e861b0() {
   return (neuron0x1e76930()*0.625244);
}

double NNfunction_sb_cLuL::synapse0x1e861f0() {
   return (neuron0x1e76c70()*-0.751774);
}

double NNfunction_sb_cLuL::synapse0x1e86230() {
   return (neuron0x1e76fb0()*0.0683706);
}

double NNfunction_sb_cLuL::synapse0x1e86270() {
   return (neuron0x1e772f0()*-0.79564);
}

double NNfunction_sb_cLuL::synapse0x1e862b0() {
   return (neuron0x1e77630()*0.770319);
}

double NNfunction_sb_cLuL::synapse0x1e85d40() {
   return (neuron0x1e77970()*-0.715173);
}

double NNfunction_sb_cLuL::synapse0x1e85d80() {
   return (neuron0x1e77ed0()*-0.411204);
}

double NNfunction_sb_cLuL::synapse0x1e86400() {
   return (neuron0x1e780f0()*0.44516);
}

double NNfunction_sb_cLuL::synapse0x1e86440() {
   return (neuron0x1e78430()*-0.585129);
}

double NNfunction_sb_cLuL::synapse0x1e86480() {
   return (neuron0x1e78770()*0.508102);
}

double NNfunction_sb_cLuL::synapse0x1e864c0() {
   return (neuron0x1e78ab0()*-0.049437);
}

double NNfunction_sb_cLuL::synapse0x1e86500() {
   return (neuron0x1e78df0()*0.0922971);
}

double NNfunction_sb_cLuL::synapse0x1e86540() {
   return (neuron0x1e79130()*-0.220653);
}

double NNfunction_sb_cLuL::synapse0x1e868c0() {
   return (neuron0x1e74570()*-0.0845142);
}

double NNfunction_sb_cLuL::synapse0x1e86900() {
   return (neuron0x1e748b0()*0.156302);
}

double NNfunction_sb_cLuL::synapse0x1e86940() {
   return (neuron0x1e74bf0()*0.260152);
}

double NNfunction_sb_cLuL::synapse0x1e86980() {
   return (neuron0x1e74f30()*-1.05144);
}

double NNfunction_sb_cLuL::synapse0x1e869c0() {
   return (neuron0x1e75270()*0.016832);
}

double NNfunction_sb_cLuL::synapse0x1e86a00() {
   return (neuron0x1e755b0()*-0.0225652);
}

double NNfunction_sb_cLuL::synapse0x1e86a40() {
   return (neuron0x1e758f0()*-0.0845213);
}

double NNfunction_sb_cLuL::synapse0x1e86a80() {
   return (neuron0x1e75c30()*0.127135);
}

double NNfunction_sb_cLuL::synapse0x1e86ac0() {
   return (neuron0x1e75f70()*-0.0276721);
}

double NNfunction_sb_cLuL::synapse0x1e86b00() {
   return (neuron0x1e762b0()*0.190972);
}

double NNfunction_sb_cLuL::synapse0x1e86b40() {
   return (neuron0x1e765f0()*-0.201169);
}

double NNfunction_sb_cLuL::synapse0x1e86b80() {
   return (neuron0x1e76930()*0.146606);
}

double NNfunction_sb_cLuL::synapse0x1e86bc0() {
   return (neuron0x1e76c70()*-0.0285508);
}

double NNfunction_sb_cLuL::synapse0x1e86c00() {
   return (neuron0x1e76fb0()*0.471687);
}

double NNfunction_sb_cLuL::synapse0x1e86c40() {
   return (neuron0x1e772f0()*0.0208024);
}

double NNfunction_sb_cLuL::synapse0x1e86c80() {
   return (neuron0x1e77630()*0.206054);
}

double NNfunction_sb_cLuL::synapse0x1e86710() {
   return (neuron0x1e77970()*0.165428);
}

double NNfunction_sb_cLuL::synapse0x1e86750() {
   return (neuron0x1e77ed0()*0.351268);
}

double NNfunction_sb_cLuL::synapse0x1e86dd0() {
   return (neuron0x1e780f0()*0.560574);
}

double NNfunction_sb_cLuL::synapse0x1e86e10() {
   return (neuron0x1e78430()*0.264705);
}

double NNfunction_sb_cLuL::synapse0x1e86e50() {
   return (neuron0x1e78770()*0.154867);
}

double NNfunction_sb_cLuL::synapse0x1e86e90() {
   return (neuron0x1e78ab0()*0.117165);
}

double NNfunction_sb_cLuL::synapse0x1e86ed0() {
   return (neuron0x1e78df0()*-0.0121759);
}

double NNfunction_sb_cLuL::synapse0x1e86f10() {
   return (neuron0x1e79130()*0.43995);
}

double NNfunction_sb_cLuL::synapse0x1e87290() {
   return (neuron0x1e74570()*0.0950616);
}

double NNfunction_sb_cLuL::synapse0x1e872d0() {
   return (neuron0x1e748b0()*0.0385686);
}

double NNfunction_sb_cLuL::synapse0x1e87310() {
   return (neuron0x1e74bf0()*-0.139537);
}

double NNfunction_sb_cLuL::synapse0x1e87350() {
   return (neuron0x1e74f30()*0.3613);
}

double NNfunction_sb_cLuL::synapse0x1e87390() {
   return (neuron0x1e75270()*-0.151035);
}

double NNfunction_sb_cLuL::synapse0x1e873d0() {
   return (neuron0x1e755b0()*-0.0405315);
}

double NNfunction_sb_cLuL::synapse0x1e87410() {
   return (neuron0x1e758f0()*0.0139629);
}

double NNfunction_sb_cLuL::synapse0x1e87450() {
   return (neuron0x1e75c30()*0.0588792);
}

double NNfunction_sb_cLuL::synapse0x1e87490() {
   return (neuron0x1e75f70()*0.0991817);
}

double NNfunction_sb_cLuL::synapse0x1e874d0() {
   return (neuron0x1e762b0()*-0.169058);
}

double NNfunction_sb_cLuL::synapse0x1e87510() {
   return (neuron0x1e765f0()*-0.0647305);
}

double NNfunction_sb_cLuL::synapse0x1e87550() {
   return (neuron0x1e76930()*-0.379224);
}

double NNfunction_sb_cLuL::synapse0x1e87590() {
   return (neuron0x1e76c70()*2.48135);
}

double NNfunction_sb_cLuL::synapse0x1e875d0() {
   return (neuron0x1e76fb0()*-0.00876201);
}

double NNfunction_sb_cLuL::synapse0x1e87610() {
   return (neuron0x1e772f0()*-0.0761114);
}

double NNfunction_sb_cLuL::synapse0x1e87650() {
   return (neuron0x1e77630()*-0.0340013);
}

double NNfunction_sb_cLuL::synapse0x1e870e0() {
   return (neuron0x1e77970()*-0.0821053);
}

double NNfunction_sb_cLuL::synapse0x1e87120() {
   return (neuron0x1e77ed0()*-0.04168);
}

double NNfunction_sb_cLuL::synapse0x1e877a0() {
   return (neuron0x1e780f0()*-0.135939);
}

double NNfunction_sb_cLuL::synapse0x1e877e0() {
   return (neuron0x1e78430()*0.147392);
}

double NNfunction_sb_cLuL::synapse0x1e87820() {
   return (neuron0x1e78770()*-0.0277997);
}

double NNfunction_sb_cLuL::synapse0x1e87860() {
   return (neuron0x1e78ab0()*0.168422);
}

double NNfunction_sb_cLuL::synapse0x1e878a0() {
   return (neuron0x1e78df0()*0.0905118);
}

double NNfunction_sb_cLuL::synapse0x1e878e0() {
   return (neuron0x1e79130()*-0.172996);
}

double NNfunction_sb_cLuL::synapse0x1e87c60() {
   return (neuron0x1e74570()*-0.0231152);
}

double NNfunction_sb_cLuL::synapse0x1e87ca0() {
   return (neuron0x1e748b0()*0.0217641);
}

double NNfunction_sb_cLuL::synapse0x1e87ce0() {
   return (neuron0x1e74bf0()*0.336367);
}

double NNfunction_sb_cLuL::synapse0x1e87d20() {
   return (neuron0x1e74f30()*-0.146006);
}

double NNfunction_sb_cLuL::synapse0x1e87d60() {
   return (neuron0x1e75270()*0.0373321);
}

double NNfunction_sb_cLuL::synapse0x1e87da0() {
   return (neuron0x1e755b0()*0.0437932);
}

double NNfunction_sb_cLuL::synapse0x1e87de0() {
   return (neuron0x1e758f0()*-0.0500997);
}

double NNfunction_sb_cLuL::synapse0x1e87e20() {
   return (neuron0x1e75c30()*0.019438);
}

double NNfunction_sb_cLuL::synapse0x1e87e60() {
   return (neuron0x1e75f70()*-0.0370665);
}

double NNfunction_sb_cLuL::synapse0x1e80020() {
   return (neuron0x1e762b0()*0.0267838);
}

double NNfunction_sb_cLuL::synapse0x1e80060() {
   return (neuron0x1e765f0()*0.0158382);
}

double NNfunction_sb_cLuL::synapse0x1e800a0() {
   return (neuron0x1e76930()*-0.0280573);
}

double NNfunction_sb_cLuL::synapse0x1e800e0() {
   return (neuron0x1e76c70()*0.0529742);
}

double NNfunction_sb_cLuL::synapse0x1e80120() {
   return (neuron0x1e76fb0()*0.245134);
}

double NNfunction_sb_cLuL::synapse0x1e80160() {
   return (neuron0x1e772f0()*-0.316302);
}

double NNfunction_sb_cLuL::synapse0x1e801a0() {
   return (neuron0x1e77630()*-0.323387);
}

double NNfunction_sb_cLuL::synapse0x1e87ab0() {
   return (neuron0x1e77970()*0.274748);
}

double NNfunction_sb_cLuL::synapse0x1e87af0() {
   return (neuron0x1e77ed0()*-0.299043);
}

double NNfunction_sb_cLuL::synapse0x1e802f0() {
   return (neuron0x1e780f0()*-0.288155);
}

double NNfunction_sb_cLuL::synapse0x1e80330() {
   return (neuron0x1e78430()*-0.0555097);
}

double NNfunction_sb_cLuL::synapse0x1e80370() {
   return (neuron0x1e78770()*-0.0198714);
}

double NNfunction_sb_cLuL::synapse0x1e803b0() {
   return (neuron0x1e78ab0()*-0.017187);
}

double NNfunction_sb_cLuL::synapse0x1e803f0() {
   return (neuron0x1e78df0()*0.00866378);
}

double NNfunction_sb_cLuL::synapse0x1e80430() {
   return (neuron0x1e79130()*0.0100023);
}

double NNfunction_sb_cLuL::synapse0x1e807b0() {
   return (neuron0x1e74570()*0.0234982);
}

double NNfunction_sb_cLuL::synapse0x1e807f0() {
   return (neuron0x1e748b0()*-0.0169491);
}

double NNfunction_sb_cLuL::synapse0x1e80830() {
   return (neuron0x1e74bf0()*-0.0628945);
}

double NNfunction_sb_cLuL::synapse0x1e80870() {
   return (neuron0x1e74f30()*1.37004);
}

double NNfunction_sb_cLuL::synapse0x1e808b0() {
   return (neuron0x1e75270()*-0.0772131);
}

double NNfunction_sb_cLuL::synapse0x1e808f0() {
   return (neuron0x1e755b0()*-0.0398525);
}

double NNfunction_sb_cLuL::synapse0x1e80930() {
   return (neuron0x1e758f0()*-0.00709048);
}

double NNfunction_sb_cLuL::synapse0x1e80970() {
   return (neuron0x1e75c30()*-0.00272012);
}

double NNfunction_sb_cLuL::synapse0x1e809b0() {
   return (neuron0x1e75f70()*0.00916582);
}

double NNfunction_sb_cLuL::synapse0x1e809f0() {
   return (neuron0x1e762b0()*-0.0720266);
}

double NNfunction_sb_cLuL::synapse0x1e80a30() {
   return (neuron0x1e765f0()*0.0120821);
}

double NNfunction_sb_cLuL::synapse0x1e80a70() {
   return (neuron0x1e76930()*-1.25308);
}

double NNfunction_sb_cLuL::synapse0x1e80ab0() {
   return (neuron0x1e76c70()*0.322626);
}

double NNfunction_sb_cLuL::synapse0x1e80af0() {
   return (neuron0x1e76fb0()*-0.0514532);
}

double NNfunction_sb_cLuL::synapse0x1e80b30() {
   return (neuron0x1e772f0()*-0.0247998);
}

double NNfunction_sb_cLuL::synapse0x1e80b70() {
   return (neuron0x1e77630()*0.0295431);
}

double NNfunction_sb_cLuL::synapse0x1e80600() {
   return (neuron0x1e77970()*-0.0517171);
}

double NNfunction_sb_cLuL::synapse0x1e80640() {
   return (neuron0x1e77ed0()*0.00440876);
}

double NNfunction_sb_cLuL::synapse0x1e80cc0() {
   return (neuron0x1e780f0()*-0.0303281);
}

double NNfunction_sb_cLuL::synapse0x1e80d00() {
   return (neuron0x1e78430()*0.0718504);
}

double NNfunction_sb_cLuL::synapse0x1e80d40() {
   return (neuron0x1e78770()*0.0169609);
}

double NNfunction_sb_cLuL::synapse0x1e80d80() {
   return (neuron0x1e78ab0()*0.00784684);
}

double NNfunction_sb_cLuL::synapse0x1e80dc0() {
   return (neuron0x1e78df0()*0.0242603);
}

double NNfunction_sb_cLuL::synapse0x1e80e00() {
   return (neuron0x1e79130()*-0.0142101);
}

double NNfunction_sb_cLuL::synapse0x1e80fd0() {
   return (neuron0x1e74570()*0.0603946);
}

double NNfunction_sb_cLuL::synapse0x1e8a060() {
   return (neuron0x1e748b0()*-0.191377);
}

double NNfunction_sb_cLuL::synapse0x1e8a0a0() {
   return (neuron0x1e74bf0()*0.115954);
}

double NNfunction_sb_cLuL::synapse0x1e8a0e0() {
   return (neuron0x1e74f30()*-0.812102);
}

double NNfunction_sb_cLuL::synapse0x1e8a120() {
   return (neuron0x1e75270()*-0.137843);
}

double NNfunction_sb_cLuL::synapse0x1e8a160() {
   return (neuron0x1e755b0()*-0.0667693);
}

double NNfunction_sb_cLuL::synapse0x1e8a1a0() {
   return (neuron0x1e758f0()*-0.243818);
}

double NNfunction_sb_cLuL::synapse0x1e8a1e0() {
   return (neuron0x1e75c30()*0.127943);
}

double NNfunction_sb_cLuL::synapse0x1e8a220() {
   return (neuron0x1e75f70()*0.344629);
}

double NNfunction_sb_cLuL::synapse0x1e8a260() {
   return (neuron0x1e762b0()*0.206593);
}

double NNfunction_sb_cLuL::synapse0x1e8a2a0() {
   return (neuron0x1e765f0()*0.106467);
}

double NNfunction_sb_cLuL::synapse0x1e8a2e0() {
   return (neuron0x1e76930()*0.0422269);
}

double NNfunction_sb_cLuL::synapse0x1e8a320() {
   return (neuron0x1e76c70()*0.36876);
}

double NNfunction_sb_cLuL::synapse0x1e8a360() {
   return (neuron0x1e76fb0()*0.241712);
}

double NNfunction_sb_cLuL::synapse0x1e8a3a0() {
   return (neuron0x1e772f0()*0.0210771);
}

double NNfunction_sb_cLuL::synapse0x1e8a3e0() {
   return (neuron0x1e77630()*-0.0889796);
}

double NNfunction_sb_cLuL::synapse0x1e89eb0() {
   return (neuron0x1e77970()*-0.0305453);
}

double NNfunction_sb_cLuL::synapse0x1e89ef0() {
   return (neuron0x1e77ed0()*0.475226);
}

double NNfunction_sb_cLuL::synapse0x1e8a530() {
   return (neuron0x1e780f0()*-0.312351);
}

double NNfunction_sb_cLuL::synapse0x1e8a570() {
   return (neuron0x1e78430()*0.117167);
}

double NNfunction_sb_cLuL::synapse0x1e8a5b0() {
   return (neuron0x1e78770()*-0.187619);
}

double NNfunction_sb_cLuL::synapse0x1e8a5f0() {
   return (neuron0x1e78ab0()*-0.102437);
}

double NNfunction_sb_cLuL::synapse0x1e8a630() {
   return (neuron0x1e78df0()*-0.119502);
}

double NNfunction_sb_cLuL::synapse0x1e8a670() {
   return (neuron0x1e79130()*0.169982);
}

double NNfunction_sb_cLuL::synapse0x1e8a9f0() {
   return (neuron0x1e74570()*-0.271948);
}

double NNfunction_sb_cLuL::synapse0x1e8aa30() {
   return (neuron0x1e748b0()*-0.672476);
}

double NNfunction_sb_cLuL::synapse0x1e8aa70() {
   return (neuron0x1e74bf0()*-0.575004);
}

double NNfunction_sb_cLuL::synapse0x1e8aab0() {
   return (neuron0x1e74f30()*2.01167);
}

double NNfunction_sb_cLuL::synapse0x1e8aaf0() {
   return (neuron0x1e75270()*0.0397259);
}

double NNfunction_sb_cLuL::synapse0x1e8ab30() {
   return (neuron0x1e755b0()*0.310507);
}

double NNfunction_sb_cLuL::synapse0x1e8ab70() {
   return (neuron0x1e758f0()*-0.796961);
}

double NNfunction_sb_cLuL::synapse0x1e8abb0() {
   return (neuron0x1e75c30()*-0.675959);
}

double NNfunction_sb_cLuL::synapse0x1e8abf0() {
   return (neuron0x1e75f70()*-0.108855);
}

double NNfunction_sb_cLuL::synapse0x1e8ac30() {
   return (neuron0x1e762b0()*0.953624);
}

double NNfunction_sb_cLuL::synapse0x1e8ac70() {
   return (neuron0x1e765f0()*-0.638703);
}

double NNfunction_sb_cLuL::synapse0x1e8acb0() {
   return (neuron0x1e76930()*-0.363752);
}

double NNfunction_sb_cLuL::synapse0x1e8acf0() {
   return (neuron0x1e76c70()*-0.232715);
}

double NNfunction_sb_cLuL::synapse0x1e8ad30() {
   return (neuron0x1e76fb0()*-0.737239);
}

double NNfunction_sb_cLuL::synapse0x1e8ad70() {
   return (neuron0x1e772f0()*1.01119);
}

double NNfunction_sb_cLuL::synapse0x1e8adb0() {
   return (neuron0x1e77630()*0.61249);
}

double NNfunction_sb_cLuL::synapse0x1e8a840() {
   return (neuron0x1e77970()*-0.329761);
}

double NNfunction_sb_cLuL::synapse0x1e8a880() {
   return (neuron0x1e77ed0()*-0.246519);
}

double NNfunction_sb_cLuL::synapse0x1e8af00() {
   return (neuron0x1e780f0()*1.32007);
}

double NNfunction_sb_cLuL::synapse0x1e8af40() {
   return (neuron0x1e78430()*-0.651015);
}

double NNfunction_sb_cLuL::synapse0x1e8af80() {
   return (neuron0x1e78770()*0.563237);
}

double NNfunction_sb_cLuL::synapse0x1e8afc0() {
   return (neuron0x1e78ab0()*-1.21146);
}

double NNfunction_sb_cLuL::synapse0x1e8b000() {
   return (neuron0x1e78df0()*0.450627);
}

double NNfunction_sb_cLuL::synapse0x1e8b040() {
   return (neuron0x1e79130()*0.638974);
}

double NNfunction_sb_cLuL::synapse0x1e8b3c0() {
   return (neuron0x1e74570()*-1.24347);
}

double NNfunction_sb_cLuL::synapse0x1e8b400() {
   return (neuron0x1e748b0()*0.904466);
}

double NNfunction_sb_cLuL::synapse0x1e8b440() {
   return (neuron0x1e74bf0()*0.388607);
}

double NNfunction_sb_cLuL::synapse0x1e8b480() {
   return (neuron0x1e74f30()*-0.130962);
}

double NNfunction_sb_cLuL::synapse0x1e8b4c0() {
   return (neuron0x1e75270()*-1.05777);
}

double NNfunction_sb_cLuL::synapse0x1e8b500() {
   return (neuron0x1e755b0()*0.588682);
}

double NNfunction_sb_cLuL::synapse0x1e8b540() {
   return (neuron0x1e758f0()*0.957417);
}

double NNfunction_sb_cLuL::synapse0x1e8b580() {
   return (neuron0x1e75c30()*-0.383097);
}

double NNfunction_sb_cLuL::synapse0x1e8b5c0() {
   return (neuron0x1e75f70()*-0.579195);
}

double NNfunction_sb_cLuL::synapse0x1e8b600() {
   return (neuron0x1e762b0()*0.206294);
}

double NNfunction_sb_cLuL::synapse0x1e8b640() {
   return (neuron0x1e765f0()*0.0674261);
}

double NNfunction_sb_cLuL::synapse0x1e8b680() {
   return (neuron0x1e76930()*-0.840508);
}

double NNfunction_sb_cLuL::synapse0x1e8b6c0() {
   return (neuron0x1e76c70()*0.574686);
}

double NNfunction_sb_cLuL::synapse0x1e8b700() {
   return (neuron0x1e76fb0()*0.397978);
}

double NNfunction_sb_cLuL::synapse0x1e8b740() {
   return (neuron0x1e772f0()*-0.339747);
}

double NNfunction_sb_cLuL::synapse0x1e8b780() {
   return (neuron0x1e77630()*0.0501388);
}

double NNfunction_sb_cLuL::synapse0x1e8b210() {
   return (neuron0x1e77970()*-0.551351);
}

double NNfunction_sb_cLuL::synapse0x1e8b250() {
   return (neuron0x1e77ed0()*0.288008);
}

double NNfunction_sb_cLuL::synapse0x1e8b8d0() {
   return (neuron0x1e780f0()*-0.0199168);
}

double NNfunction_sb_cLuL::synapse0x1e8b910() {
   return (neuron0x1e78430()*-0.0187777);
}

double NNfunction_sb_cLuL::synapse0x1e8b950() {
   return (neuron0x1e78770()*1.07657);
}

double NNfunction_sb_cLuL::synapse0x1e8b990() {
   return (neuron0x1e78ab0()*-0.385194);
}

double NNfunction_sb_cLuL::synapse0x1e8b9d0() {
   return (neuron0x1e78df0()*0.0140425);
}

double NNfunction_sb_cLuL::synapse0x1e8ba10() {
   return (neuron0x1e79130()*0.429117);
}

double NNfunction_sb_cLuL::synapse0x1e8bd90() {
   return (neuron0x1e74570()*-0.0338095);
}

double NNfunction_sb_cLuL::synapse0x1e8bdd0() {
   return (neuron0x1e748b0()*-0.00238585);
}

double NNfunction_sb_cLuL::synapse0x1e8be10() {
   return (neuron0x1e74bf0()*0.694133);
}

double NNfunction_sb_cLuL::synapse0x1e8be50() {
   return (neuron0x1e74f30()*0.527149);
}

double NNfunction_sb_cLuL::synapse0x1e8be90() {
   return (neuron0x1e75270()*-0.0241095);
}

double NNfunction_sb_cLuL::synapse0x1e8bed0() {
   return (neuron0x1e755b0()*-0.0142757);
}

double NNfunction_sb_cLuL::synapse0x1e8bf10() {
   return (neuron0x1e758f0()*0.013317);
}

double NNfunction_sb_cLuL::synapse0x1e8bf50() {
   return (neuron0x1e75c30()*-0.0397653);
}

double NNfunction_sb_cLuL::synapse0x1e8bf90() {
   return (neuron0x1e75f70()*-0.00745629);
}

double NNfunction_sb_cLuL::synapse0x1e8bfd0() {
   return (neuron0x1e762b0()*-0.0229691);
}

double NNfunction_sb_cLuL::synapse0x1e8c010() {
   return (neuron0x1e765f0()*0.00330799);
}

double NNfunction_sb_cLuL::synapse0x1e8c050() {
   return (neuron0x1e76930()*0.0297267);
}

double NNfunction_sb_cLuL::synapse0x1e8c090() {
   return (neuron0x1e76c70()*0.0664985);
}

double NNfunction_sb_cLuL::synapse0x1e8c0d0() {
   return (neuron0x1e76fb0()*-0.0183211);
}

double NNfunction_sb_cLuL::synapse0x1e8c110() {
   return (neuron0x1e772f0()*0.0441344);
}

double NNfunction_sb_cLuL::synapse0x1e8c150() {
   return (neuron0x1e77630()*0.0495599);
}

double NNfunction_sb_cLuL::synapse0x1e8bbe0() {
   return (neuron0x1e77970()*-0.0492112);
}

double NNfunction_sb_cLuL::synapse0x1e8bc20() {
   return (neuron0x1e77ed0()*0.0229329);
}

double NNfunction_sb_cLuL::synapse0x1e8c2a0() {
   return (neuron0x1e780f0()*0.0760109);
}

double NNfunction_sb_cLuL::synapse0x1e8c2e0() {
   return (neuron0x1e78430()*0.0167005);
}

double NNfunction_sb_cLuL::synapse0x1e8c320() {
   return (neuron0x1e78770()*0.00315856);
}

double NNfunction_sb_cLuL::synapse0x1e8c360() {
   return (neuron0x1e78ab0()*0.00591504);
}

double NNfunction_sb_cLuL::synapse0x1e8c3a0() {
   return (neuron0x1e78df0()*0.0209563);
}

double NNfunction_sb_cLuL::synapse0x1e8c3e0() {
   return (neuron0x1e79130()*-0.0322872);
}

double NNfunction_sb_cLuL::synapse0x1e8c760() {
   return (neuron0x1e74570()*0.00205664);
}

double NNfunction_sb_cLuL::synapse0x1e8c7a0() {
   return (neuron0x1e748b0()*-0.0685431);
}

double NNfunction_sb_cLuL::synapse0x1e8c7e0() {
   return (neuron0x1e74bf0()*1.26231);
}

double NNfunction_sb_cLuL::synapse0x1e8c820() {
   return (neuron0x1e74f30()*-0.141941);
}

double NNfunction_sb_cLuL::synapse0x1e8c860() {
   return (neuron0x1e75270()*-0.00762383);
}

double NNfunction_sb_cLuL::synapse0x1e8c8a0() {
   return (neuron0x1e755b0()*-0.0199818);
}

double NNfunction_sb_cLuL::synapse0x1e8c8e0() {
   return (neuron0x1e758f0()*-0.0284228);
}

double NNfunction_sb_cLuL::synapse0x1e8c920() {
   return (neuron0x1e75c30()*0.00175934);
}

double NNfunction_sb_cLuL::synapse0x1e8c960() {
   return (neuron0x1e75f70()*-0.0418635);
}

double NNfunction_sb_cLuL::synapse0x1e8c9a0() {
   return (neuron0x1e762b0()*0.0182572);
}

double NNfunction_sb_cLuL::synapse0x1e8c9e0() {
   return (neuron0x1e765f0()*-0.0062948);
}

double NNfunction_sb_cLuL::synapse0x1e8ca20() {
   return (neuron0x1e76930()*-0.253805);
}

double NNfunction_sb_cLuL::synapse0x1e8ca60() {
   return (neuron0x1e76c70()*-0.190996);
}

double NNfunction_sb_cLuL::synapse0x1e8caa0() {
   return (neuron0x1e76fb0()*-0.068063);
}

double NNfunction_sb_cLuL::synapse0x1e8cae0() {
   return (neuron0x1e772f0()*-0.0242039);
}

double NNfunction_sb_cLuL::synapse0x1e8cb20() {
   return (neuron0x1e77630()*-0.00582031);
}

double NNfunction_sb_cLuL::synapse0x1e8c5b0() {
   return (neuron0x1e77970()*0.00965615);
}

double NNfunction_sb_cLuL::synapse0x1e8c5f0() {
   return (neuron0x1e77ed0()*-0.0543661);
}

double NNfunction_sb_cLuL::synapse0x1e8cc70() {
   return (neuron0x1e780f0()*-0.0221225);
}

double NNfunction_sb_cLuL::synapse0x1e8ccb0() {
   return (neuron0x1e78430()*0.0430516);
}

double NNfunction_sb_cLuL::synapse0x1e8ccf0() {
   return (neuron0x1e78770()*0.0153907);
}

double NNfunction_sb_cLuL::synapse0x1e8cd30() {
   return (neuron0x1e78ab0()*-0.0479258);
}

double NNfunction_sb_cLuL::synapse0x1e8cd70() {
   return (neuron0x1e78df0()*-0.0421561);
}

double NNfunction_sb_cLuL::synapse0x1e8cdb0() {
   return (neuron0x1e79130()*-0.0185056);
}

double NNfunction_sb_cLuL::synapse0x1e8d130() {
   return (neuron0x1e74570()*-0.770918);
}

double NNfunction_sb_cLuL::synapse0x1e8d170() {
   return (neuron0x1e748b0()*0.940237);
}

double NNfunction_sb_cLuL::synapse0x1e8d1b0() {
   return (neuron0x1e74bf0()*-0.97226);
}

double NNfunction_sb_cLuL::synapse0x1e8d1f0() {
   return (neuron0x1e74f30()*0.259987);
}

double NNfunction_sb_cLuL::synapse0x1e8d230() {
   return (neuron0x1e75270()*0.00250751);
}

double NNfunction_sb_cLuL::synapse0x1e8d270() {
   return (neuron0x1e755b0()*0.560926);
}

double NNfunction_sb_cLuL::synapse0x1e8d2b0() {
   return (neuron0x1e758f0()*0.452645);
}

double NNfunction_sb_cLuL::synapse0x1e8d2f0() {
   return (neuron0x1e75c30()*-0.487226);
}

double NNfunction_sb_cLuL::synapse0x1e8d330() {
   return (neuron0x1e75f70()*0.112581);
}

double NNfunction_sb_cLuL::synapse0x1e8d370() {
   return (neuron0x1e762b0()*-1.29834);
}

double NNfunction_sb_cLuL::synapse0x1e8d3b0() {
   return (neuron0x1e765f0()*0.145064);
}

double NNfunction_sb_cLuL::synapse0x1e8d3f0() {
   return (neuron0x1e76930()*1.061);
}

double NNfunction_sb_cLuL::synapse0x1e8d430() {
   return (neuron0x1e76c70()*0.058327);
}

double NNfunction_sb_cLuL::synapse0x1e8d470() {
   return (neuron0x1e76fb0()*0.610397);
}

double NNfunction_sb_cLuL::synapse0x1e8d4b0() {
   return (neuron0x1e772f0()*-0.288572);
}

double NNfunction_sb_cLuL::synapse0x1e8d4f0() {
   return (neuron0x1e77630()*-0.129323);
}

double NNfunction_sb_cLuL::synapse0x1e8cf80() {
   return (neuron0x1e77970()*0.136378);
}

double NNfunction_sb_cLuL::synapse0x1e8cfc0() {
   return (neuron0x1e77ed0()*-0.0326408);
}

double NNfunction_sb_cLuL::synapse0x1e8d640() {
   return (neuron0x1e780f0()*0.485125);
}

double NNfunction_sb_cLuL::synapse0x1e8d680() {
   return (neuron0x1e78430()*0.0628298);
}

double NNfunction_sb_cLuL::synapse0x1e8d6c0() {
   return (neuron0x1e78770()*0.718398);
}

double NNfunction_sb_cLuL::synapse0x1e8d700() {
   return (neuron0x1e78ab0()*0.592944);
}

double NNfunction_sb_cLuL::synapse0x1e8d740() {
   return (neuron0x1e78df0()*0.690542);
}

double NNfunction_sb_cLuL::synapse0x1e8d780() {
   return (neuron0x1e79130()*-0.917628);
}

double NNfunction_sb_cLuL::synapse0x1e8db00() {
   return (neuron0x1e74570()*-0.315257);
}

double NNfunction_sb_cLuL::synapse0x1e8db40() {
   return (neuron0x1e748b0()*-0.173242);
}

double NNfunction_sb_cLuL::synapse0x1e8db80() {
   return (neuron0x1e74bf0()*-0.0956246);
}

double NNfunction_sb_cLuL::synapse0x1e8dbc0() {
   return (neuron0x1e74f30()*-1.07956);
}

double NNfunction_sb_cLuL::synapse0x1e8dc00() {
   return (neuron0x1e75270()*-0.0155856);
}

double NNfunction_sb_cLuL::synapse0x1e8dc40() {
   return (neuron0x1e755b0()*0.0716648);
}

double NNfunction_sb_cLuL::synapse0x1e8dc80() {
   return (neuron0x1e758f0()*-0.0457091);
}

double NNfunction_sb_cLuL::synapse0x1e8dcc0() {
   return (neuron0x1e75c30()*-0.130744);
}

double NNfunction_sb_cLuL::synapse0x1e8dd00() {
   return (neuron0x1e75f70()*-0.0487568);
}

double NNfunction_sb_cLuL::synapse0x1e8dd40() {
   return (neuron0x1e762b0()*0.0109842);
}

double NNfunction_sb_cLuL::synapse0x1e8dd80() {
   return (neuron0x1e765f0()*-0.0639046);
}

double NNfunction_sb_cLuL::synapse0x1e8ddc0() {
   return (neuron0x1e76930()*-0.379338);
}

double NNfunction_sb_cLuL::synapse0x1e8de00() {
   return (neuron0x1e76c70()*1.28177);
}

double NNfunction_sb_cLuL::synapse0x1e8de40() {
   return (neuron0x1e76fb0()*-0.112866);
}

double NNfunction_sb_cLuL::synapse0x1e8de80() {
   return (neuron0x1e772f0()*0.0365434);
}

double NNfunction_sb_cLuL::synapse0x1e8dec0() {
   return (neuron0x1e77630()*0.0836986);
}

double NNfunction_sb_cLuL::synapse0x1e8d950() {
   return (neuron0x1e77970()*0.191229);
}

double NNfunction_sb_cLuL::synapse0x1e8d990() {
   return (neuron0x1e77ed0()*-0.313409);
}

double NNfunction_sb_cLuL::synapse0x1e8e010() {
   return (neuron0x1e780f0()*-0.0446537);
}

double NNfunction_sb_cLuL::synapse0x1e8e050() {
   return (neuron0x1e78430()*-0.122176);
}

double NNfunction_sb_cLuL::synapse0x1e8e090() {
   return (neuron0x1e78770()*0.0921389);
}

double NNfunction_sb_cLuL::synapse0x1e8e0d0() {
   return (neuron0x1e78ab0()*-0.100441);
}

double NNfunction_sb_cLuL::synapse0x1e8e110() {
   return (neuron0x1e78df0()*-0.0247575);
}

double NNfunction_sb_cLuL::synapse0x1e8e150() {
   return (neuron0x1e79130()*0.369977);
}

double NNfunction_sb_cLuL::synapse0x1e8e4d0() {
   return (neuron0x1e74570()*0.312801);
}

double NNfunction_sb_cLuL::synapse0x1e8e510() {
   return (neuron0x1e748b0()*0.554043);
}

double NNfunction_sb_cLuL::synapse0x1e8e550() {
   return (neuron0x1e74bf0()*0.639156);
}

double NNfunction_sb_cLuL::synapse0x1e8e590() {
   return (neuron0x1e74f30()*-0.951458);
}

double NNfunction_sb_cLuL::synapse0x1e8e5d0() {
   return (neuron0x1e75270()*0.357425);
}

double NNfunction_sb_cLuL::synapse0x1e8e610() {
   return (neuron0x1e755b0()*-0.259017);
}

double NNfunction_sb_cLuL::synapse0x1e8e650() {
   return (neuron0x1e758f0()*-0.223573);
}

double NNfunction_sb_cLuL::synapse0x1e8e690() {
   return (neuron0x1e75c30()*0.188512);
}

double NNfunction_sb_cLuL::synapse0x1e8e6d0() {
   return (neuron0x1e75f70()*0.504384);
}

double NNfunction_sb_cLuL::synapse0x1e8e710() {
   return (neuron0x1e762b0()*-0.411407);
}

double NNfunction_sb_cLuL::synapse0x1e8e750() {
   return (neuron0x1e765f0()*0.382886);
}

double NNfunction_sb_cLuL::synapse0x1e8e790() {
   return (neuron0x1e76930()*-0.263435);
}

double NNfunction_sb_cLuL::synapse0x1e8e7d0() {
   return (neuron0x1e76c70()*0.0960245);
}

double NNfunction_sb_cLuL::synapse0x1e8e810() {
   return (neuron0x1e76fb0()*0.510558);
}

double NNfunction_sb_cLuL::synapse0x1e8e850() {
   return (neuron0x1e772f0()*-0.0361268);
}

double NNfunction_sb_cLuL::synapse0x1e8e890() {
   return (neuron0x1e77630()*-0.921376);
}

double NNfunction_sb_cLuL::synapse0x1e8e320() {
   return (neuron0x1e77970()*0.202048);
}

double NNfunction_sb_cLuL::synapse0x1e8e360() {
   return (neuron0x1e77ed0()*0.000781553);
}

double NNfunction_sb_cLuL::synapse0x1e8e9e0() {
   return (neuron0x1e780f0()*-0.453652);
}

double NNfunction_sb_cLuL::synapse0x1e8ea20() {
   return (neuron0x1e78430()*1.00431);
}

double NNfunction_sb_cLuL::synapse0x1e8ea60() {
   return (neuron0x1e78770()*-0.274277);
}

double NNfunction_sb_cLuL::synapse0x1e8eaa0() {
   return (neuron0x1e78ab0()*-0.419638);
}

double NNfunction_sb_cLuL::synapse0x1e8eae0() {
   return (neuron0x1e78df0()*-0.317885);
}

double NNfunction_sb_cLuL::synapse0x1e8eb20() {
   return (neuron0x1e79130()*0.959599);
}

double NNfunction_sb_cLuL::synapse0x1e8eea0() {
   return (neuron0x1e74570()*-0.574994);
}

double NNfunction_sb_cLuL::synapse0x1e83470() {
   return (neuron0x1e748b0()*0.235706);
}

double NNfunction_sb_cLuL::synapse0x1e834b0() {
   return (neuron0x1e74bf0()*-0.319493);
}

double NNfunction_sb_cLuL::synapse0x1e834f0() {
   return (neuron0x1e74f30()*-0.305985);
}

double NNfunction_sb_cLuL::synapse0x1e83740() {
   return (neuron0x1e75270()*-0.395074);
}

double NNfunction_sb_cLuL::synapse0x1e83780() {
   return (neuron0x1e755b0()*-0.193093);
}

double NNfunction_sb_cLuL::synapse0x1e837c0() {
   return (neuron0x1e758f0()*0.0126318);
}

double NNfunction_sb_cLuL::synapse0x1e83a10() {
   return (neuron0x1e75c30()*-0.034195);
}

double NNfunction_sb_cLuL::synapse0x1e83a50() {
   return (neuron0x1e75f70()*-0.305597);
}

double NNfunction_sb_cLuL::synapse0x1e83ca0() {
   return (neuron0x1e762b0()*0.119121);
}

double NNfunction_sb_cLuL::synapse0x1e83ce0() {
   return (neuron0x1e765f0()*-0.0644416);
}

double NNfunction_sb_cLuL::synapse0x1e83d20() {
   return (neuron0x1e76930()*-0.096456);
}

double NNfunction_sb_cLuL::synapse0x1e83f70() {
   return (neuron0x1e76c70()*-0.356239);
}

double NNfunction_sb_cLuL::synapse0x1e83fb0() {
   return (neuron0x1e76fb0()*0.219482);
}

double NNfunction_sb_cLuL::synapse0x1e84200() {
   return (neuron0x1e772f0()*-0.101252);
}

double NNfunction_sb_cLuL::synapse0x1e84240() {
   return (neuron0x1e77630()*0.235751);
}

double NNfunction_sb_cLuL::synapse0x1e8ecf0() {
   return (neuron0x1e77970()*0.148731);
}

double NNfunction_sb_cLuL::synapse0x1e8ed30() {
   return (neuron0x1e77ed0()*-0.316622);
}

double NNfunction_sb_cLuL::synapse0x1e84390() {
   return (neuron0x1e780f0()*0.101817);
}

double NNfunction_sb_cLuL::synapse0x1e848a0() {
   return (neuron0x1e78430()*-0.342275);
}

double NNfunction_sb_cLuL::synapse0x1e848e0() {
   return (neuron0x1e78770()*-0.152717);
}

double NNfunction_sb_cLuL::synapse0x1e84920() {
   return (neuron0x1e78ab0()*0.245323);
}

double NNfunction_sb_cLuL::synapse0x1e84b70() {
   return (neuron0x1e78df0()*-0.135877);
}

double NNfunction_sb_cLuL::synapse0x1e84bb0() {
   return (neuron0x1e79130()*0.0485061);
}

double NNfunction_sb_cLuL::synapse0x1e84460() {
   return (neuron0x1e74570()*-0.0143853);
}

double NNfunction_sb_cLuL::synapse0x1e844a0() {
   return (neuron0x1e748b0()*0.00663975);
}

double NNfunction_sb_cLuL::synapse0x1e844e0() {
   return (neuron0x1e74bf0()*-0.0578006);
}

double NNfunction_sb_cLuL::synapse0x1e84520() {
   return (neuron0x1e74f30()*-0.860413);
}

double NNfunction_sb_cLuL::synapse0x1e84ea0() {
   return (neuron0x1e75270()*-0.00585759);
}

double NNfunction_sb_cLuL::synapse0x1e911f0() {
   return (neuron0x1e755b0()*-0.0113988);
}

double NNfunction_sb_cLuL::synapse0x1e91230() {
   return (neuron0x1e758f0()*0.00826163);
}

double NNfunction_sb_cLuL::synapse0x1e91270() {
   return (neuron0x1e75c30()*-0.015975);
}

double NNfunction_sb_cLuL::synapse0x1e912b0() {
   return (neuron0x1e75f70()*0.0160727);
}

double NNfunction_sb_cLuL::synapse0x1e912f0() {
   return (neuron0x1e762b0()*-0.00109737);
}

double NNfunction_sb_cLuL::synapse0x1e91330() {
   return (neuron0x1e765f0()*0.00636317);
}

double NNfunction_sb_cLuL::synapse0x1e91370() {
   return (neuron0x1e76930()*-0.000143146);
}

double NNfunction_sb_cLuL::synapse0x1e913b0() {
   return (neuron0x1e76c70()*-0.0619775);
}

double NNfunction_sb_cLuL::synapse0x1e913f0() {
   return (neuron0x1e76fb0()*0.019936);
}

double NNfunction_sb_cLuL::synapse0x1e91430() {
   return (neuron0x1e772f0()*-0.0156945);
}

double NNfunction_sb_cLuL::synapse0x1e91470() {
   return (neuron0x1e77630()*-0.0151414);
}

double NNfunction_sb_cLuL::synapse0x1e84d80() {
   return (neuron0x1e77970()*0.0186122);
}

double NNfunction_sb_cLuL::synapse0x1e84dc0() {
   return (neuron0x1e77ed0()*-0.00476187);
}

double NNfunction_sb_cLuL::synapse0x1e915c0() {
   return (neuron0x1e780f0()*0.0162363);
}

double NNfunction_sb_cLuL::synapse0x1e91600() {
   return (neuron0x1e78430()*0.000287899);
}

double NNfunction_sb_cLuL::synapse0x1e91640() {
   return (neuron0x1e78770()*-0.00188164);
}

double NNfunction_sb_cLuL::synapse0x1e91680() {
   return (neuron0x1e78ab0()*0.0208422);
}

double NNfunction_sb_cLuL::synapse0x1e916c0() {
   return (neuron0x1e78df0()*0.0326192);
}

double NNfunction_sb_cLuL::synapse0x1e91700() {
   return (neuron0x1e79130()*-0.0187291);
}

double NNfunction_sb_cLuL::synapse0x1e91a80() {
   return (neuron0x1e74570()*-0.778213);
}

double NNfunction_sb_cLuL::synapse0x1e91ac0() {
   return (neuron0x1e748b0()*0.173259);
}

double NNfunction_sb_cLuL::synapse0x1e91b00() {
   return (neuron0x1e74bf0()*-0.771412);
}

double NNfunction_sb_cLuL::synapse0x1e91b40() {
   return (neuron0x1e74f30()*0.372921);
}

double NNfunction_sb_cLuL::synapse0x1e91b80() {
   return (neuron0x1e75270()*-0.207298);
}

double NNfunction_sb_cLuL::synapse0x1e91bc0() {
   return (neuron0x1e755b0()*-0.420952);
}

double NNfunction_sb_cLuL::synapse0x1e91c00() {
   return (neuron0x1e758f0()*-0.0376415);
}

double NNfunction_sb_cLuL::synapse0x1e91c40() {
   return (neuron0x1e75c30()*-0.927212);
}

double NNfunction_sb_cLuL::synapse0x1e91c80() {
   return (neuron0x1e75f70()*0.959126);
}

double NNfunction_sb_cLuL::synapse0x1e91cc0() {
   return (neuron0x1e762b0()*0.612269);
}

double NNfunction_sb_cLuL::synapse0x1e91d00() {
   return (neuron0x1e765f0()*-0.405854);
}

double NNfunction_sb_cLuL::synapse0x1e91d40() {
   return (neuron0x1e76930()*0.424872);
}

double NNfunction_sb_cLuL::synapse0x1e91d80() {
   return (neuron0x1e76c70()*0.122889);
}

double NNfunction_sb_cLuL::synapse0x1e91dc0() {
   return (neuron0x1e76fb0()*0.494756);
}

double NNfunction_sb_cLuL::synapse0x1e91e00() {
   return (neuron0x1e772f0()*0.308144);
}

double NNfunction_sb_cLuL::synapse0x1e91e40() {
   return (neuron0x1e77630()*-1.04556);
}

double NNfunction_sb_cLuL::synapse0x1e918d0() {
   return (neuron0x1e77970()*0.452078);
}

double NNfunction_sb_cLuL::synapse0x1e91910() {
   return (neuron0x1e77ed0()*-1.30678);
}

double NNfunction_sb_cLuL::synapse0x1e91f90() {
   return (neuron0x1e780f0()*0.385532);
}

double NNfunction_sb_cLuL::synapse0x1e91fd0() {
   return (neuron0x1e78430()*0.0896387);
}

double NNfunction_sb_cLuL::synapse0x1e92010() {
   return (neuron0x1e78770()*-0.25189);
}

double NNfunction_sb_cLuL::synapse0x1e92050() {
   return (neuron0x1e78ab0()*-0.0709918);
}

double NNfunction_sb_cLuL::synapse0x1e92090() {
   return (neuron0x1e78df0()*0.769321);
}

double NNfunction_sb_cLuL::synapse0x1e920d0() {
   return (neuron0x1e79130()*-0.0242176);
}

double NNfunction_sb_cLuL::synapse0x1e92450() {
   return (neuron0x1e74570()*0.491498);
}

double NNfunction_sb_cLuL::synapse0x1e92490() {
   return (neuron0x1e748b0()*-0.180256);
}

double NNfunction_sb_cLuL::synapse0x1e924d0() {
   return (neuron0x1e74bf0()*-0.137763);
}

double NNfunction_sb_cLuL::synapse0x1e92510() {
   return (neuron0x1e74f30()*-0.622947);
}

double NNfunction_sb_cLuL::synapse0x1e92550() {
   return (neuron0x1e75270()*0.508328);
}

double NNfunction_sb_cLuL::synapse0x1e92590() {
   return (neuron0x1e755b0()*0.707709);
}

double NNfunction_sb_cLuL::synapse0x1e925d0() {
   return (neuron0x1e758f0()*0.719935);
}

double NNfunction_sb_cLuL::synapse0x1e92610() {
   return (neuron0x1e75c30()*-0.0415643);
}

double NNfunction_sb_cLuL::synapse0x1e92650() {
   return (neuron0x1e75f70()*-0.0887247);
}

double NNfunction_sb_cLuL::synapse0x1e92690() {
   return (neuron0x1e762b0()*-0.24039);
}

double NNfunction_sb_cLuL::synapse0x1e926d0() {
   return (neuron0x1e765f0()*1.17756);
}

double NNfunction_sb_cLuL::synapse0x1e92710() {
   return (neuron0x1e76930()*-0.545445);
}

double NNfunction_sb_cLuL::synapse0x1e92750() {
   return (neuron0x1e76c70()*0.413296);
}

double NNfunction_sb_cLuL::synapse0x1e92790() {
   return (neuron0x1e76fb0()*-0.514614);
}

double NNfunction_sb_cLuL::synapse0x1e927d0() {
   return (neuron0x1e772f0()*-0.513511);
}

double NNfunction_sb_cLuL::synapse0x1e92810() {
   return (neuron0x1e77630()*0.943899);
}

double NNfunction_sb_cLuL::synapse0x1e922a0() {
   return (neuron0x1e77970()*0.410936);
}

double NNfunction_sb_cLuL::synapse0x1e922e0() {
   return (neuron0x1e77ed0()*0.406428);
}

double NNfunction_sb_cLuL::synapse0x1e92960() {
   return (neuron0x1e780f0()*-0.0719839);
}

double NNfunction_sb_cLuL::synapse0x1e929a0() {
   return (neuron0x1e78430()*-0.65894);
}

double NNfunction_sb_cLuL::synapse0x1e929e0() {
   return (neuron0x1e78770()*-0.114832);
}

double NNfunction_sb_cLuL::synapse0x1e92a20() {
   return (neuron0x1e78ab0()*-0.094376);
}

double NNfunction_sb_cLuL::synapse0x1e92a60() {
   return (neuron0x1e78df0()*0.531765);
}

double NNfunction_sb_cLuL::synapse0x1e92aa0() {
   return (neuron0x1e79130()*0.296343);
}

double NNfunction_sb_cLuL::synapse0x1e92e20() {
   return (neuron0x1e74570()*0.0389884);
}

double NNfunction_sb_cLuL::synapse0x1e92e60() {
   return (neuron0x1e748b0()*0.0247627);
}

double NNfunction_sb_cLuL::synapse0x1e92ea0() {
   return (neuron0x1e74bf0()*-0.0262298);
}

double NNfunction_sb_cLuL::synapse0x1e92ee0() {
   return (neuron0x1e74f30()*2.38062);
}

double NNfunction_sb_cLuL::synapse0x1e92f20() {
   return (neuron0x1e75270()*-0.051629);
}

double NNfunction_sb_cLuL::synapse0x1e92f60() {
   return (neuron0x1e755b0()*-0.00358412);
}

double NNfunction_sb_cLuL::synapse0x1e92fa0() {
   return (neuron0x1e758f0()*-0.0104053);
}

double NNfunction_sb_cLuL::synapse0x1e92fe0() {
   return (neuron0x1e75c30()*-0.00276825);
}

double NNfunction_sb_cLuL::synapse0x1e93020() {
   return (neuron0x1e75f70()*0.0390879);
}

double NNfunction_sb_cLuL::synapse0x1e93060() {
   return (neuron0x1e762b0()*-0.0418056);
}

double NNfunction_sb_cLuL::synapse0x1e930a0() {
   return (neuron0x1e765f0()*0.00164769);
}

double NNfunction_sb_cLuL::synapse0x1e930e0() {
   return (neuron0x1e76930()*-0.0641748);
}

double NNfunction_sb_cLuL::synapse0x1e93120() {
   return (neuron0x1e76c70()*-0.2689);
}

double NNfunction_sb_cLuL::synapse0x1e93160() {
   return (neuron0x1e76fb0()*-0.0120487);
}

double NNfunction_sb_cLuL::synapse0x1e931a0() {
   return (neuron0x1e772f0()*0.00420699);
}

double NNfunction_sb_cLuL::synapse0x1e931e0() {
   return (neuron0x1e77630()*-0.0437098);
}

double NNfunction_sb_cLuL::synapse0x1e92c70() {
   return (neuron0x1e77970()*-0.00436167);
}

double NNfunction_sb_cLuL::synapse0x1e92cb0() {
   return (neuron0x1e77ed0()*0.0790192);
}

double NNfunction_sb_cLuL::synapse0x1e93330() {
   return (neuron0x1e780f0()*0.0172334);
}

double NNfunction_sb_cLuL::synapse0x1e93370() {
   return (neuron0x1e78430()*0.0297644);
}

double NNfunction_sb_cLuL::synapse0x1e933b0() {
   return (neuron0x1e78770()*-0.0113493);
}

double NNfunction_sb_cLuL::synapse0x1e933f0() {
   return (neuron0x1e78ab0()*0.00898212);
}

double NNfunction_sb_cLuL::synapse0x1e93430() {
   return (neuron0x1e78df0()*0.0166367);
}

double NNfunction_sb_cLuL::synapse0x1e93470() {
   return (neuron0x1e79130()*-0.0452079);
}

double NNfunction_sb_cLuL::synapse0x1e937f0() {
   return (neuron0x1e74570()*-0.0223571);
}

double NNfunction_sb_cLuL::synapse0x1e93830() {
   return (neuron0x1e748b0()*-0.010438);
}

double NNfunction_sb_cLuL::synapse0x1e93870() {
   return (neuron0x1e74bf0()*-0.00484819);
}

double NNfunction_sb_cLuL::synapse0x1e938b0() {
   return (neuron0x1e74f30()*-0.0979132);
}

double NNfunction_sb_cLuL::synapse0x1e938f0() {
   return (neuron0x1e75270()*0.00232302);
}

double NNfunction_sb_cLuL::synapse0x1e93930() {
   return (neuron0x1e755b0()*-0.0117554);
}

double NNfunction_sb_cLuL::synapse0x1e93970() {
   return (neuron0x1e758f0()*0.0165271);
}

double NNfunction_sb_cLuL::synapse0x1e939b0() {
   return (neuron0x1e75c30()*-0.00762108);
}

double NNfunction_sb_cLuL::synapse0x1e939f0() {
   return (neuron0x1e75f70()*0.00385727);
}

double NNfunction_sb_cLuL::synapse0x1e93a30() {
   return (neuron0x1e762b0()*0.00869332);
}

double NNfunction_sb_cLuL::synapse0x1e93a70() {
   return (neuron0x1e765f0()*-0.00144035);
}

double NNfunction_sb_cLuL::synapse0x1e93ab0() {
   return (neuron0x1e76930()*1.08776);
}

double NNfunction_sb_cLuL::synapse0x1e93af0() {
   return (neuron0x1e76c70()*-0.531856);
}

double NNfunction_sb_cLuL::synapse0x1e93b30() {
   return (neuron0x1e76fb0()*-0.005148);
}

double NNfunction_sb_cLuL::synapse0x1e93b70() {
   return (neuron0x1e772f0()*-0.0128038);
}

double NNfunction_sb_cLuL::synapse0x1e93bb0() {
   return (neuron0x1e77630()*0.00819449);
}

double NNfunction_sb_cLuL::synapse0x1e93640() {
   return (neuron0x1e77970()*0.00599356);
}

double NNfunction_sb_cLuL::synapse0x1e93680() {
   return (neuron0x1e77ed0()*-0.0184909);
}

double NNfunction_sb_cLuL::synapse0x1e93d00() {
   return (neuron0x1e780f0()*0.00531897);
}

double NNfunction_sb_cLuL::synapse0x1e93d40() {
   return (neuron0x1e78430()*-0.00847317);
}

double NNfunction_sb_cLuL::synapse0x1e93d80() {
   return (neuron0x1e78770()*0.0050569);
}

double NNfunction_sb_cLuL::synapse0x1e93dc0() {
   return (neuron0x1e78ab0()*0.0144944);
}

double NNfunction_sb_cLuL::synapse0x1e93e00() {
   return (neuron0x1e78df0()*0.0185223);
}

double NNfunction_sb_cLuL::synapse0x1e93e40() {
   return (neuron0x1e79130()*-0.00403034);
}

double NNfunction_sb_cLuL::synapse0x1e941c0() {
   return (neuron0x1e74570()*-0.0513503);
}

double NNfunction_sb_cLuL::synapse0x1e94200() {
   return (neuron0x1e748b0()*0.038362);
}

double NNfunction_sb_cLuL::synapse0x1e94240() {
   return (neuron0x1e74bf0()*0.00189937);
}

double NNfunction_sb_cLuL::synapse0x1e94280() {
   return (neuron0x1e74f30()*-0.203009);
}

double NNfunction_sb_cLuL::synapse0x1e942c0() {
   return (neuron0x1e75270()*-0.00821035);
}

double NNfunction_sb_cLuL::synapse0x1e94300() {
   return (neuron0x1e755b0()*0.0255476);
}

double NNfunction_sb_cLuL::synapse0x1e94340() {
   return (neuron0x1e758f0()*0.0402745);
}

double NNfunction_sb_cLuL::synapse0x1e94380() {
   return (neuron0x1e75c30()*-0.0307809);
}

double NNfunction_sb_cLuL::synapse0x1e943c0() {
   return (neuron0x1e75f70()*0.013718);
}

double NNfunction_sb_cLuL::synapse0x1e94400() {
   return (neuron0x1e762b0()*0.0468548);
}

double NNfunction_sb_cLuL::synapse0x1e94440() {
   return (neuron0x1e765f0()*0.0400501);
}

double NNfunction_sb_cLuL::synapse0x1e94480() {
   return (neuron0x1e76930()*-2.31315);
}

double NNfunction_sb_cLuL::synapse0x1e944c0() {
   return (neuron0x1e76c70()*0.0642502);
}

double NNfunction_sb_cLuL::synapse0x1e94500() {
   return (neuron0x1e76fb0()*0.00634016);
}

double NNfunction_sb_cLuL::synapse0x1e94540() {
   return (neuron0x1e772f0()*-0.0111482);
}

double NNfunction_sb_cLuL::synapse0x1e94580() {
   return (neuron0x1e77630()*-0.0783444);
}

double NNfunction_sb_cLuL::synapse0x1e94010() {
   return (neuron0x1e77970()*0.000791839);
}

double NNfunction_sb_cLuL::synapse0x1e94050() {
   return (neuron0x1e77ed0()*-0.0890023);
}

double NNfunction_sb_cLuL::synapse0x1e946d0() {
   return (neuron0x1e780f0()*0.014769);
}

double NNfunction_sb_cLuL::synapse0x1e94710() {
   return (neuron0x1e78430()*-0.0162748);
}

double NNfunction_sb_cLuL::synapse0x1e94750() {
   return (neuron0x1e78770()*0.00449187);
}

double NNfunction_sb_cLuL::synapse0x1e94790() {
   return (neuron0x1e78ab0()*0.0174301);
}

double NNfunction_sb_cLuL::synapse0x1e947d0() {
   return (neuron0x1e78df0()*0.0308163);
}

double NNfunction_sb_cLuL::synapse0x1e94810() {
   return (neuron0x1e79130()*-0.0105177);
}

double NNfunction_sb_cLuL::synapse0x1e94b90() {
   return (neuron0x1e74570()*-0.272161);
}

double NNfunction_sb_cLuL::synapse0x1e94bd0() {
   return (neuron0x1e748b0()*-0.246118);
}

double NNfunction_sb_cLuL::synapse0x1e94c10() {
   return (neuron0x1e74bf0()*0.127235);
}

double NNfunction_sb_cLuL::synapse0x1e94c50() {
   return (neuron0x1e74f30()*-0.811457);
}

double NNfunction_sb_cLuL::synapse0x1e94c90() {
   return (neuron0x1e75270()*0.620224);
}

double NNfunction_sb_cLuL::synapse0x1e94cd0() {
   return (neuron0x1e755b0()*0.739841);
}

double NNfunction_sb_cLuL::synapse0x1e94d10() {
   return (neuron0x1e758f0()*-0.609185);
}

double NNfunction_sb_cLuL::synapse0x1e94d50() {
   return (neuron0x1e75c30()*-0.0820697);
}

double NNfunction_sb_cLuL::synapse0x1e94d90() {
   return (neuron0x1e75f70()*0.011568);
}

double NNfunction_sb_cLuL::synapse0x1e94dd0() {
   return (neuron0x1e762b0()*-0.0139868);
}

double NNfunction_sb_cLuL::synapse0x1e94e10() {
   return (neuron0x1e765f0()*-0.170985);
}

double NNfunction_sb_cLuL::synapse0x1e94e50() {
   return (neuron0x1e76930()*-0.289204);
}

double NNfunction_sb_cLuL::synapse0x1e94e90() {
   return (neuron0x1e76c70()*-1.204);
}

double NNfunction_sb_cLuL::synapse0x1e94ed0() {
   return (neuron0x1e76fb0()*-0.167734);
}

double NNfunction_sb_cLuL::synapse0x1e94f10() {
   return (neuron0x1e772f0()*0.711678);
}

double NNfunction_sb_cLuL::synapse0x1e94f50() {
   return (neuron0x1e77630()*0.348579);
}

double NNfunction_sb_cLuL::synapse0x1e949e0() {
   return (neuron0x1e77970()*-0.0540006);
}

double NNfunction_sb_cLuL::synapse0x1e94a20() {
   return (neuron0x1e77ed0()*0.232589);
}

double NNfunction_sb_cLuL::synapse0x1e950a0() {
   return (neuron0x1e780f0()*-0.0846886);
}

double NNfunction_sb_cLuL::synapse0x1e950e0() {
   return (neuron0x1e78430()*-1.40075);
}

double NNfunction_sb_cLuL::synapse0x1e95120() {
   return (neuron0x1e78770()*0.0374813);
}

double NNfunction_sb_cLuL::synapse0x1e95160() {
   return (neuron0x1e78ab0()*0.0795253);
}

double NNfunction_sb_cLuL::synapse0x1e951a0() {
   return (neuron0x1e78df0()*0.157193);
}

double NNfunction_sb_cLuL::synapse0x1e951e0() {
   return (neuron0x1e79130()*0.0552367);
}

double NNfunction_sb_cLuL::synapse0x1e95560() {
   return (neuron0x1e74570()*-0.0467546);
}

double NNfunction_sb_cLuL::synapse0x1e955a0() {
   return (neuron0x1e748b0()*0.487263);
}

double NNfunction_sb_cLuL::synapse0x1e955e0() {
   return (neuron0x1e74bf0()*-0.803305);
}

double NNfunction_sb_cLuL::synapse0x1e95620() {
   return (neuron0x1e74f30()*0.165887);
}

double NNfunction_sb_cLuL::synapse0x1e95660() {
   return (neuron0x1e75270()*0.0702549);
}

double NNfunction_sb_cLuL::synapse0x1e956a0() {
   return (neuron0x1e755b0()*0.634597);
}

double NNfunction_sb_cLuL::synapse0x1e956e0() {
   return (neuron0x1e758f0()*-0.160859);
}

double NNfunction_sb_cLuL::synapse0x1e95720() {
   return (neuron0x1e75c30()*-0.219503);
}

double NNfunction_sb_cLuL::synapse0x1e95760() {
   return (neuron0x1e75f70()*0.201821);
}

double NNfunction_sb_cLuL::synapse0x1e957a0() {
   return (neuron0x1e762b0()*-0.732288);
}

double NNfunction_sb_cLuL::synapse0x1e957e0() {
   return (neuron0x1e765f0()*-0.0084875);
}

double NNfunction_sb_cLuL::synapse0x1e95820() {
   return (neuron0x1e76930()*0.449275);
}

double NNfunction_sb_cLuL::synapse0x1e95860() {
   return (neuron0x1e76c70()*1.11358);
}

double NNfunction_sb_cLuL::synapse0x1e958a0() {
   return (neuron0x1e76fb0()*0.94929);
}

double NNfunction_sb_cLuL::synapse0x1e958e0() {
   return (neuron0x1e772f0()*-0.649531);
}

double NNfunction_sb_cLuL::synapse0x1e95920() {
   return (neuron0x1e77630()*0.790523);
}

double NNfunction_sb_cLuL::synapse0x1e953b0() {
   return (neuron0x1e77970()*0.133026);
}

double NNfunction_sb_cLuL::synapse0x1e953f0() {
   return (neuron0x1e77ed0()*-0.092801);
}

double NNfunction_sb_cLuL::synapse0x1e95a70() {
   return (neuron0x1e780f0()*0.72454);
}

double NNfunction_sb_cLuL::synapse0x1e95ab0() {
   return (neuron0x1e78430()*-0.492591);
}

double NNfunction_sb_cLuL::synapse0x1e95af0() {
   return (neuron0x1e78770()*0.541218);
}

double NNfunction_sb_cLuL::synapse0x1e95b30() {
   return (neuron0x1e78ab0()*0.336003);
}

double NNfunction_sb_cLuL::synapse0x1e95b70() {
   return (neuron0x1e78df0()*-0.500232);
}

double NNfunction_sb_cLuL::synapse0x1e95bb0() {
   return (neuron0x1e79130()*0.128903);
}

double NNfunction_sb_cLuL::synapse0x1e7e660() {
   return (neuron0x1e74570()*-0.0870796);
}

double NNfunction_sb_cLuL::synapse0x1e7e6a0() {
   return (neuron0x1e748b0()*-0.0368288);
}

double NNfunction_sb_cLuL::synapse0x1e7e6e0() {
   return (neuron0x1e74bf0()*0.10176);
}

double NNfunction_sb_cLuL::synapse0x1e7e720() {
   return (neuron0x1e74f30()*0.5305);
}

double NNfunction_sb_cLuL::synapse0x1e7e760() {
   return (neuron0x1e75270()*0.00292224);
}

double NNfunction_sb_cLuL::synapse0x1e7e7a0() {
   return (neuron0x1e755b0()*-0.0336559);
}

double NNfunction_sb_cLuL::synapse0x1e7e7e0() {
   return (neuron0x1e758f0()*0.0119622);
}

double NNfunction_sb_cLuL::synapse0x1e7e820() {
   return (neuron0x1e75c30()*-0.0188378);
}

double NNfunction_sb_cLuL::synapse0x1e96340() {
   return (neuron0x1e75f70()*-0.0177613);
}

double NNfunction_sb_cLuL::synapse0x1e96380() {
   return (neuron0x1e762b0()*0.0505254);
}

double NNfunction_sb_cLuL::synapse0x1e963c0() {
   return (neuron0x1e765f0()*0.0244802);
}

double NNfunction_sb_cLuL::synapse0x1e96400() {
   return (neuron0x1e76930()*0.160693);
}

double NNfunction_sb_cLuL::synapse0x1e96440() {
   return (neuron0x1e76c70()*0.455117);
}

double NNfunction_sb_cLuL::synapse0x1e96480() {
   return (neuron0x1e76fb0()*-0.0125296);
}

double NNfunction_sb_cLuL::synapse0x1e964c0() {
   return (neuron0x1e772f0()*-0.0177606);
}

double NNfunction_sb_cLuL::synapse0x1e96500() {
   return (neuron0x1e77630()*0.0196306);
}

double NNfunction_sb_cLuL::synapse0x1e95d80() {
   return (neuron0x1e77970()*0.00100373);
}

double NNfunction_sb_cLuL::synapse0x1e95dc0() {
   return (neuron0x1e77ed0()*-0.109753);
}

double NNfunction_sb_cLuL::synapse0x1e96650() {
   return (neuron0x1e780f0()*-0.0119146);
}

double NNfunction_sb_cLuL::synapse0x1e96690() {
   return (neuron0x1e78430()*-0.0296792);
}

double NNfunction_sb_cLuL::synapse0x1e966d0() {
   return (neuron0x1e78770()*-0.0015437);
}

double NNfunction_sb_cLuL::synapse0x1e96710() {
   return (neuron0x1e78ab0()*0.0060976);
}

double NNfunction_sb_cLuL::synapse0x1e96750() {
   return (neuron0x1e78df0()*0.0057669);
}

double NNfunction_sb_cLuL::synapse0x1e96790() {
   return (neuron0x1e79130()*-0.00539726);
}

double NNfunction_sb_cLuL::synapse0x1e96b10() {
   return (neuron0x1e74570()*-1.16189);
}

double NNfunction_sb_cLuL::synapse0x1e96b50() {
   return (neuron0x1e748b0()*0.241306);
}

double NNfunction_sb_cLuL::synapse0x1e96b90() {
   return (neuron0x1e74bf0()*0.0408601);
}

double NNfunction_sb_cLuL::synapse0x1e96bd0() {
   return (neuron0x1e74f30()*0.183556);
}

double NNfunction_sb_cLuL::synapse0x1e96c10() {
   return (neuron0x1e75270()*-0.0872941);
}

double NNfunction_sb_cLuL::synapse0x1e96c50() {
   return (neuron0x1e755b0()*-1.64706);
}

double NNfunction_sb_cLuL::synapse0x1e96c90() {
   return (neuron0x1e758f0()*-0.338673);
}

double NNfunction_sb_cLuL::synapse0x1e96cd0() {
   return (neuron0x1e75c30()*0.426447);
}

double NNfunction_sb_cLuL::synapse0x1e96d10() {
   return (neuron0x1e75f70()*-0.461683);
}

double NNfunction_sb_cLuL::synapse0x1e96d50() {
   return (neuron0x1e762b0()*0.362347);
}

double NNfunction_sb_cLuL::synapse0x1e96d90() {
   return (neuron0x1e765f0()*-0.544382);
}

double NNfunction_sb_cLuL::synapse0x1e96dd0() {
   return (neuron0x1e76930()*-0.47178);
}

double NNfunction_sb_cLuL::synapse0x1e96e10() {
   return (neuron0x1e76c70()*1.3481);
}

double NNfunction_sb_cLuL::synapse0x1e96e50() {
   return (neuron0x1e76fb0()*0.975864);
}

double NNfunction_sb_cLuL::synapse0x1e96e90() {
   return (neuron0x1e772f0()*-0.423278);
}

double NNfunction_sb_cLuL::synapse0x1e96ed0() {
   return (neuron0x1e77630()*0.256979);
}

double NNfunction_sb_cLuL::synapse0x1e96960() {
   return (neuron0x1e77970()*0.098423);
}

double NNfunction_sb_cLuL::synapse0x1e969a0() {
   return (neuron0x1e77ed0()*-1.11741);
}

double NNfunction_sb_cLuL::synapse0x1e97020() {
   return (neuron0x1e780f0()*-0.574233);
}

double NNfunction_sb_cLuL::synapse0x1e97060() {
   return (neuron0x1e78430()*-0.249045);
}

double NNfunction_sb_cLuL::synapse0x1e970a0() {
   return (neuron0x1e78770()*-0.355624);
}

double NNfunction_sb_cLuL::synapse0x1e970e0() {
   return (neuron0x1e78ab0()*0.697883);
}

double NNfunction_sb_cLuL::synapse0x1e97120() {
   return (neuron0x1e78df0()*-0.244465);
}

double NNfunction_sb_cLuL::synapse0x1e97160() {
   return (neuron0x1e79130()*-0.412207);
}

double NNfunction_sb_cLuL::synapse0x1e974e0() {
   return (neuron0x1e74570()*-0.320779);
}

double NNfunction_sb_cLuL::synapse0x1e97520() {
   return (neuron0x1e748b0()*-0.0736082);
}

double NNfunction_sb_cLuL::synapse0x1e97560() {
   return (neuron0x1e74bf0()*-0.325242);
}

double NNfunction_sb_cLuL::synapse0x1e975a0() {
   return (neuron0x1e74f30()*0.505276);
}

double NNfunction_sb_cLuL::synapse0x1e975e0() {
   return (neuron0x1e75270()*-0.16425);
}

double NNfunction_sb_cLuL::synapse0x1e97620() {
   return (neuron0x1e755b0()*-0.632938);
}

double NNfunction_sb_cLuL::synapse0x1e97660() {
   return (neuron0x1e758f0()*1.45419);
}

double NNfunction_sb_cLuL::synapse0x1e976a0() {
   return (neuron0x1e75c30()*0.49024);
}

double NNfunction_sb_cLuL::synapse0x1e976e0() {
   return (neuron0x1e75f70()*0.382902);
}

double NNfunction_sb_cLuL::synapse0x1e97720() {
   return (neuron0x1e762b0()*-0.0619354);
}

double NNfunction_sb_cLuL::synapse0x1e97760() {
   return (neuron0x1e765f0()*-0.122988);
}

double NNfunction_sb_cLuL::synapse0x1e977a0() {
   return (neuron0x1e76930()*-0.68318);
}

double NNfunction_sb_cLuL::synapse0x1e977e0() {
   return (neuron0x1e76c70()*0.248852);
}

double NNfunction_sb_cLuL::synapse0x1e97820() {
   return (neuron0x1e76fb0()*0.24335);
}

double NNfunction_sb_cLuL::synapse0x1e97860() {
   return (neuron0x1e772f0()*0.229085);
}

double NNfunction_sb_cLuL::synapse0x1e978a0() {
   return (neuron0x1e77630()*0.839945);
}

double NNfunction_sb_cLuL::synapse0x1e97330() {
   return (neuron0x1e77970()*1.22549);
}

double NNfunction_sb_cLuL::synapse0x1e97370() {
   return (neuron0x1e77ed0()*-0.102263);
}

double NNfunction_sb_cLuL::synapse0x1e87ea0() {
   return (neuron0x1e780f0()*-0.917327);
}

double NNfunction_sb_cLuL::synapse0x1e87ee0() {
   return (neuron0x1e78430()*-0.353378);
}

double NNfunction_sb_cLuL::synapse0x1e87f20() {
   return (neuron0x1e78770()*-0.106521);
}

double NNfunction_sb_cLuL::synapse0x1e87f60() {
   return (neuron0x1e78ab0()*-0.258368);
}

double NNfunction_sb_cLuL::synapse0x1e87fa0() {
   return (neuron0x1e78df0()*-0.426991);
}

double NNfunction_sb_cLuL::synapse0x1e87fe0() {
   return (neuron0x1e79130()*0.101149);
}

double NNfunction_sb_cLuL::synapse0x1e88360() {
   return (neuron0x1e74570()*0.806457);
}

double NNfunction_sb_cLuL::synapse0x1e883a0() {
   return (neuron0x1e748b0()*0.410795);
}

double NNfunction_sb_cLuL::synapse0x1e883e0() {
   return (neuron0x1e74bf0()*-0.506963);
}

double NNfunction_sb_cLuL::synapse0x1e88420() {
   return (neuron0x1e74f30()*0.78846);
}

double NNfunction_sb_cLuL::synapse0x1e88460() {
   return (neuron0x1e75270()*0.127471);
}

double NNfunction_sb_cLuL::synapse0x1e884a0() {
   return (neuron0x1e755b0()*0.515788);
}

double NNfunction_sb_cLuL::synapse0x1e884e0() {
   return (neuron0x1e758f0()*-0.98504);
}

double NNfunction_sb_cLuL::synapse0x1e88520() {
   return (neuron0x1e75c30()*-1.20587);
}

double NNfunction_sb_cLuL::synapse0x1e88560() {
   return (neuron0x1e75f70()*-1.06497);
}

double NNfunction_sb_cLuL::synapse0x1e885a0() {
   return (neuron0x1e762b0()*0.456189);
}

double NNfunction_sb_cLuL::synapse0x1e885e0() {
   return (neuron0x1e765f0()*-0.325583);
}

double NNfunction_sb_cLuL::synapse0x1e88620() {
   return (neuron0x1e76930()*-0.261567);
}

double NNfunction_sb_cLuL::synapse0x1e88660() {
   return (neuron0x1e76c70()*0.667088);
}

double NNfunction_sb_cLuL::synapse0x1e886a0() {
   return (neuron0x1e76fb0()*0.153696);
}

double NNfunction_sb_cLuL::synapse0x1e886e0() {
   return (neuron0x1e772f0()*-0.370707);
}

double NNfunction_sb_cLuL::synapse0x1e88720() {
   return (neuron0x1e77630()*0.195488);
}

double NNfunction_sb_cLuL::synapse0x1e881b0() {
   return (neuron0x1e77970()*-0.282631);
}

double NNfunction_sb_cLuL::synapse0x1e881f0() {
   return (neuron0x1e77ed0()*0.772386);
}

double NNfunction_sb_cLuL::synapse0x1e88870() {
   return (neuron0x1e780f0()*-0.479829);
}

double NNfunction_sb_cLuL::synapse0x1e888b0() {
   return (neuron0x1e78430()*-0.515012);
}

double NNfunction_sb_cLuL::synapse0x1e888f0() {
   return (neuron0x1e78770()*-0.380802);
}

double NNfunction_sb_cLuL::synapse0x1e88930() {
   return (neuron0x1e78ab0()*0.456209);
}

double NNfunction_sb_cLuL::synapse0x1e88970() {
   return (neuron0x1e78df0()*-0.460961);
}

double NNfunction_sb_cLuL::synapse0x1e889b0() {
   return (neuron0x1e79130()*0.429448);
}

double NNfunction_sb_cLuL::synapse0x1e88d30() {
   return (neuron0x1e74570()*-0.114416);
}

double NNfunction_sb_cLuL::synapse0x1e88d70() {
   return (neuron0x1e748b0()*0.438084);
}

double NNfunction_sb_cLuL::synapse0x1e88db0() {
   return (neuron0x1e74bf0()*0.269782);
}

double NNfunction_sb_cLuL::synapse0x1e88df0() {
   return (neuron0x1e74f30()*-0.0603805);
}

double NNfunction_sb_cLuL::synapse0x1e88e30() {
   return (neuron0x1e75270()*1.47219);
}

double NNfunction_sb_cLuL::synapse0x1e88e70() {
   return (neuron0x1e755b0()*1.02222);
}

double NNfunction_sb_cLuL::synapse0x1e88eb0() {
   return (neuron0x1e758f0()*-0.444987);
}

double NNfunction_sb_cLuL::synapse0x1e88ef0() {
   return (neuron0x1e75c30()*0.107092);
}

double NNfunction_sb_cLuL::synapse0x1e88f30() {
   return (neuron0x1e75f70()*0.994197);
}

double NNfunction_sb_cLuL::synapse0x1e88f70() {
   return (neuron0x1e762b0()*-0.0924957);
}

double NNfunction_sb_cLuL::synapse0x1e88fb0() {
   return (neuron0x1e765f0()*-0.769281);
}

double NNfunction_sb_cLuL::synapse0x1e88ff0() {
   return (neuron0x1e76930()*0.371336);
}

double NNfunction_sb_cLuL::synapse0x1e89030() {
   return (neuron0x1e76c70()*-0.906595);
}

double NNfunction_sb_cLuL::synapse0x1e89070() {
   return (neuron0x1e76fb0()*0.289269);
}

double NNfunction_sb_cLuL::synapse0x1e890b0() {
   return (neuron0x1e772f0()*0.137646);
}

double NNfunction_sb_cLuL::synapse0x1e890f0() {
   return (neuron0x1e77630()*0.833763);
}

double NNfunction_sb_cLuL::synapse0x1e88b80() {
   return (neuron0x1e77970()*-0.426517);
}

double NNfunction_sb_cLuL::synapse0x1e88bc0() {
   return (neuron0x1e77ed0()*-1.82386);
}

double NNfunction_sb_cLuL::synapse0x1e89240() {
   return (neuron0x1e780f0()*0.967246);
}

double NNfunction_sb_cLuL::synapse0x1e89280() {
   return (neuron0x1e78430()*0.255286);
}

double NNfunction_sb_cLuL::synapse0x1e892c0() {
   return (neuron0x1e78770()*1.21544);
}

double NNfunction_sb_cLuL::synapse0x1e89300() {
   return (neuron0x1e78ab0()*0.317359);
}

double NNfunction_sb_cLuL::synapse0x1e89340() {
   return (neuron0x1e78df0()*-0.108914);
}

double NNfunction_sb_cLuL::synapse0x1e89380() {
   return (neuron0x1e79130()*0.605988);
}

double NNfunction_sb_cLuL::synapse0x1e89700() {
   return (neuron0x1e74570()*0.503078);
}

double NNfunction_sb_cLuL::synapse0x1e89740() {
   return (neuron0x1e748b0()*0.226166);
}

double NNfunction_sb_cLuL::synapse0x1e89780() {
   return (neuron0x1e74bf0()*-1.99162);
}

double NNfunction_sb_cLuL::synapse0x1e897c0() {
   return (neuron0x1e74f30()*-0.794227);
}

double NNfunction_sb_cLuL::synapse0x1e89800() {
   return (neuron0x1e75270()*-0.56158);
}

double NNfunction_sb_cLuL::synapse0x1e89840() {
   return (neuron0x1e755b0()*-0.435145);
}

double NNfunction_sb_cLuL::synapse0x1e89880() {
   return (neuron0x1e758f0()*-0.445958);
}

double NNfunction_sb_cLuL::synapse0x1e898c0() {
   return (neuron0x1e75c30()*0.695447);
}

double NNfunction_sb_cLuL::synapse0x1e89900() {
   return (neuron0x1e75f70()*-0.815852);
}

double NNfunction_sb_cLuL::synapse0x1e89940() {
   return (neuron0x1e762b0()*-0.0539324);
}

double NNfunction_sb_cLuL::synapse0x1e89980() {
   return (neuron0x1e765f0()*-0.344272);
}

double NNfunction_sb_cLuL::synapse0x1e899c0() {
   return (neuron0x1e76930()*0.238703);
}

double NNfunction_sb_cLuL::synapse0x1e89a00() {
   return (neuron0x1e76c70()*0.171572);
}

double NNfunction_sb_cLuL::synapse0x1e89a40() {
   return (neuron0x1e76fb0()*-0.906717);
}

double NNfunction_sb_cLuL::synapse0x1e89a80() {
   return (neuron0x1e772f0()*-0.266874);
}

double NNfunction_sb_cLuL::synapse0x1e89ac0() {
   return (neuron0x1e77630()*0.276807);
}

double NNfunction_sb_cLuL::synapse0x1e89550() {
   return (neuron0x1e77970()*0.157689);
}

double NNfunction_sb_cLuL::synapse0x1e89590() {
   return (neuron0x1e77ed0()*-0.00897569);
}

double NNfunction_sb_cLuL::synapse0x1e89c10() {
   return (neuron0x1e780f0()*-0.150011);
}

double NNfunction_sb_cLuL::synapse0x1e89c50() {
   return (neuron0x1e78430()*0.837451);
}

double NNfunction_sb_cLuL::synapse0x1e89c90() {
   return (neuron0x1e78770()*-0.129174);
}

double NNfunction_sb_cLuL::synapse0x1e89cd0() {
   return (neuron0x1e78ab0()*-0.016425);
}

double NNfunction_sb_cLuL::synapse0x1e89d10() {
   return (neuron0x1e78df0()*-0.37721);
}

double NNfunction_sb_cLuL::synapse0x1e89d50() {
   return (neuron0x1e79130()*-0.134461);
}

double NNfunction_sb_cLuL::synapse0x1e9bc20() {
   return (neuron0x1e74570()*-0.00322788);
}

double NNfunction_sb_cLuL::synapse0x1e9bc60() {
   return (neuron0x1e748b0()*0.0212747);
}

double NNfunction_sb_cLuL::synapse0x1e9bca0() {
   return (neuron0x1e74bf0()*-0.0191817);
}

double NNfunction_sb_cLuL::synapse0x1e9bce0() {
   return (neuron0x1e74f30()*-7.76445);
}

double NNfunction_sb_cLuL::synapse0x1e9bd20() {
   return (neuron0x1e75270()*0.0314696);
}

double NNfunction_sb_cLuL::synapse0x1e9bd60() {
   return (neuron0x1e755b0()*-0.00860262);
}

double NNfunction_sb_cLuL::synapse0x1e9bda0() {
   return (neuron0x1e758f0()*0.00354053);
}

double NNfunction_sb_cLuL::synapse0x1e9bde0() {
   return (neuron0x1e75c30()*0.000135056);
}

double NNfunction_sb_cLuL::synapse0x1e9be20() {
   return (neuron0x1e75f70()*0.030607);
}

double NNfunction_sb_cLuL::synapse0x1e9be60() {
   return (neuron0x1e762b0()*-0.0160533);
}

double NNfunction_sb_cLuL::synapse0x1e9bea0() {
   return (neuron0x1e765f0()*0.0416131);
}

double NNfunction_sb_cLuL::synapse0x1e9bee0() {
   return (neuron0x1e76930()*-0.00939609);
}

double NNfunction_sb_cLuL::synapse0x1e9bf20() {
   return (neuron0x1e76c70()*0.00764172);
}

double NNfunction_sb_cLuL::synapse0x1e9bf60() {
   return (neuron0x1e76fb0()*0.0803559);
}

double NNfunction_sb_cLuL::synapse0x1e9bfa0() {
   return (neuron0x1e772f0()*-0.0629853);
}

double NNfunction_sb_cLuL::synapse0x1e9bfe0() {
   return (neuron0x1e77630()*-0.00907839);
}

double NNfunction_sb_cLuL::synapse0x1e89d90() {
   return (neuron0x1e77970()*0.0029009);
}

double NNfunction_sb_cLuL::synapse0x1e89dd0() {
   return (neuron0x1e77ed0()*-0.00343735);
}

double NNfunction_sb_cLuL::synapse0x1e9c130() {
   return (neuron0x1e780f0()*0.045399);
}

double NNfunction_sb_cLuL::synapse0x1e9c170() {
   return (neuron0x1e78430()*-0.0349942);
}

double NNfunction_sb_cLuL::synapse0x1e9c1b0() {
   return (neuron0x1e78770()*0.00719871);
}

double NNfunction_sb_cLuL::synapse0x1e9c1f0() {
   return (neuron0x1e78ab0()*0.0331856);
}

double NNfunction_sb_cLuL::synapse0x1e9c230() {
   return (neuron0x1e78df0()*0.0332202);
}

double NNfunction_sb_cLuL::synapse0x1e9c270() {
   return (neuron0x1e79130()*-0.0186626);
}

double NNfunction_sb_cLuL::synapse0x1e9c5f0() {
   return (neuron0x1e74570()*0.077075);
}

double NNfunction_sb_cLuL::synapse0x1e9c630() {
   return (neuron0x1e748b0()*0.0872962);
}

double NNfunction_sb_cLuL::synapse0x1e9c670() {
   return (neuron0x1e74bf0()*0.0778923);
}

double NNfunction_sb_cLuL::synapse0x1e9c6b0() {
   return (neuron0x1e74f30()*0.289967);
}

double NNfunction_sb_cLuL::synapse0x1e9c6f0() {
   return (neuron0x1e75270()*-0.102585);
}

double NNfunction_sb_cLuL::synapse0x1e9c730() {
   return (neuron0x1e755b0()*0.0155364);
}

double NNfunction_sb_cLuL::synapse0x1e9c770() {
   return (neuron0x1e758f0()*0.0212418);
}

double NNfunction_sb_cLuL::synapse0x1e9c7b0() {
   return (neuron0x1e75c30()*0.107609);
}

double NNfunction_sb_cLuL::synapse0x1e9c7f0() {
   return (neuron0x1e75f70()*0.136907);
}

double NNfunction_sb_cLuL::synapse0x1e9c830() {
   return (neuron0x1e762b0()*-0.010232);
}

double NNfunction_sb_cLuL::synapse0x1e9c870() {
   return (neuron0x1e765f0()*0.127667);
}

double NNfunction_sb_cLuL::synapse0x1e9c8b0() {
   return (neuron0x1e76930()*-0.343135);
}

double NNfunction_sb_cLuL::synapse0x1e9c8f0() {
   return (neuron0x1e76c70()*-0.940267);
}

double NNfunction_sb_cLuL::synapse0x1e9c930() {
   return (neuron0x1e76fb0()*-0.00503663);
}

double NNfunction_sb_cLuL::synapse0x1e9c970() {
   return (neuron0x1e772f0()*0.0901188);
}

double NNfunction_sb_cLuL::synapse0x1e9c9b0() {
   return (neuron0x1e77630()*0.0832121);
}

double NNfunction_sb_cLuL::synapse0x1e9c440() {
   return (neuron0x1e77970()*-0.0031272);
}

double NNfunction_sb_cLuL::synapse0x1e9c480() {
   return (neuron0x1e77ed0()*0.335342);
}

double NNfunction_sb_cLuL::synapse0x1e9cb00() {
   return (neuron0x1e780f0()*0.018413);
}

double NNfunction_sb_cLuL::synapse0x1e9cb40() {
   return (neuron0x1e78430()*-0.0410312);
}

double NNfunction_sb_cLuL::synapse0x1e9cb80() {
   return (neuron0x1e78770()*-0.10483);
}

double NNfunction_sb_cLuL::synapse0x1e9cbc0() {
   return (neuron0x1e78ab0()*-0.15314);
}

double NNfunction_sb_cLuL::synapse0x1e9cc00() {
   return (neuron0x1e78df0()*-0.153899);
}

double NNfunction_sb_cLuL::synapse0x1e9cc40() {
   return (neuron0x1e79130()*0.13633);
}

double NNfunction_sb_cLuL::synapse0x1e9cfc0() {
   return (neuron0x1e74570()*-0.0349557);
}

double NNfunction_sb_cLuL::synapse0x1e9d000() {
   return (neuron0x1e748b0()*-0.00894122);
}

double NNfunction_sb_cLuL::synapse0x1e9d040() {
   return (neuron0x1e74bf0()*-0.00179732);
}

double NNfunction_sb_cLuL::synapse0x1e9d080() {
   return (neuron0x1e74f30()*0.0452771);
}

double NNfunction_sb_cLuL::synapse0x1e9d0c0() {
   return (neuron0x1e75270()*-0.00104843);
}

double NNfunction_sb_cLuL::synapse0x1e9d100() {
   return (neuron0x1e755b0()*-0.0166576);
}

double NNfunction_sb_cLuL::synapse0x1e9d140() {
   return (neuron0x1e758f0()*0.0100671);
}

double NNfunction_sb_cLuL::synapse0x1e9d180() {
   return (neuron0x1e75c30()*-0.0122809);
}

double NNfunction_sb_cLuL::synapse0x1e9d1c0() {
   return (neuron0x1e75f70()*0.0152663);
}

double NNfunction_sb_cLuL::synapse0x1e9d200() {
   return (neuron0x1e762b0()*0.0106825);
}

double NNfunction_sb_cLuL::synapse0x1e9d240() {
   return (neuron0x1e765f0()*0.0128468);
}

double NNfunction_sb_cLuL::synapse0x1e9d280() {
   return (neuron0x1e76930()*-0.651673);
}

double NNfunction_sb_cLuL::synapse0x1e9d2c0() {
   return (neuron0x1e76c70()*-0.327138);
}

double NNfunction_sb_cLuL::synapse0x1e9d300() {
   return (neuron0x1e76fb0()*-0.0135878);
}

double NNfunction_sb_cLuL::synapse0x1e9d340() {
   return (neuron0x1e772f0()*-0.00518366);
}

double NNfunction_sb_cLuL::synapse0x1e9d380() {
   return (neuron0x1e77630()*0.0152768);
}

double NNfunction_sb_cLuL::synapse0x1e9ce10() {
   return (neuron0x1e77970()*-0.0135628);
}

double NNfunction_sb_cLuL::synapse0x1e9ce50() {
   return (neuron0x1e77ed0()*-0.0260307);
}

double NNfunction_sb_cLuL::synapse0x1e9d4d0() {
   return (neuron0x1e780f0()*0.0275715);
}

double NNfunction_sb_cLuL::synapse0x1e9d510() {
   return (neuron0x1e78430()*-0.00862519);
}

double NNfunction_sb_cLuL::synapse0x1e9d550() {
   return (neuron0x1e78770()*-0.00130527);
}

double NNfunction_sb_cLuL::synapse0x1e9d590() {
   return (neuron0x1e78ab0()*0.0140787);
}

double NNfunction_sb_cLuL::synapse0x1e9d5d0() {
   return (neuron0x1e78df0()*0.019431);
}

double NNfunction_sb_cLuL::synapse0x1e9d610() {
   return (neuron0x1e79130()*-0.00955016);
}

double NNfunction_sb_cLuL::synapse0x1e9d990() {
   return (neuron0x1e74570()*0.618714);
}

double NNfunction_sb_cLuL::synapse0x1e9d9d0() {
   return (neuron0x1e748b0()*0.40817);
}

double NNfunction_sb_cLuL::synapse0x1e9da10() {
   return (neuron0x1e74bf0()*0.753796);
}

double NNfunction_sb_cLuL::synapse0x1e9da50() {
   return (neuron0x1e74f30()*1.28744);
}

double NNfunction_sb_cLuL::synapse0x1e9da90() {
   return (neuron0x1e75270()*-0.0408745);
}

double NNfunction_sb_cLuL::synapse0x1e9dad0() {
   return (neuron0x1e755b0()*-0.228019);
}

double NNfunction_sb_cLuL::synapse0x1e9db10() {
   return (neuron0x1e758f0()*1.15664);
}

double NNfunction_sb_cLuL::synapse0x1e9db50() {
   return (neuron0x1e75c30()*0.286699);
}

double NNfunction_sb_cLuL::synapse0x1e9db90() {
   return (neuron0x1e75f70()*-0.212828);
}

double NNfunction_sb_cLuL::synapse0x1e9dbd0() {
   return (neuron0x1e762b0()*-0.833623);
}

double NNfunction_sb_cLuL::synapse0x1e9dc10() {
   return (neuron0x1e765f0()*0.0306203);
}

double NNfunction_sb_cLuL::synapse0x1e9dc50() {
   return (neuron0x1e76930()*0.426209);
}

double NNfunction_sb_cLuL::synapse0x1e9dc90() {
   return (neuron0x1e76c70()*0.114261);
}

double NNfunction_sb_cLuL::synapse0x1e9dcd0() {
   return (neuron0x1e76fb0()*0.844264);
}

double NNfunction_sb_cLuL::synapse0x1e9dd10() {
   return (neuron0x1e772f0()*0.391566);
}

double NNfunction_sb_cLuL::synapse0x1e9dd50() {
   return (neuron0x1e77630()*0.12);
}

double NNfunction_sb_cLuL::synapse0x1e9d7e0() {
   return (neuron0x1e77970()*-0.0358221);
}

double NNfunction_sb_cLuL::synapse0x1e9d820() {
   return (neuron0x1e77ed0()*-0.756573);
}

double NNfunction_sb_cLuL::synapse0x1e9dea0() {
   return (neuron0x1e780f0()*0.111857);
}

double NNfunction_sb_cLuL::synapse0x1e9dee0() {
   return (neuron0x1e78430()*-0.723444);
}

double NNfunction_sb_cLuL::synapse0x1e9df20() {
   return (neuron0x1e78770()*-0.340357);
}

double NNfunction_sb_cLuL::synapse0x1e9df60() {
   return (neuron0x1e78ab0()*-0.230679);
}

double NNfunction_sb_cLuL::synapse0x1e9dfa0() {
   return (neuron0x1e78df0()*0.217592);
}

double NNfunction_sb_cLuL::synapse0x1e9dfe0() {
   return (neuron0x1e79130()*-0.0415352);
}

double NNfunction_sb_cLuL::synapse0x1e7a580() {
   return (neuron0x1e795d0()*0.00224008);
}

double NNfunction_sb_cLuL::synapse0x1e7a5c0() {
   return (neuron0x1e79ee0()*-0.0409082);
}

double NNfunction_sb_cLuL::synapse0x1e7ba90() {
   return (neuron0x1e7a9c0()*-0.597549);
}

double NNfunction_sb_cLuL::synapse0x1e7bad0() {
   return (neuron0x1c34250()*-0.0200155);
}

double NNfunction_sb_cLuL::synapse0x1e7c460() {
   return (neuron0x1e7b7e0()*-0.0140023);
}

double NNfunction_sb_cLuL::synapse0x1e7c4a0() {
   return (neuron0x1e7c1b0()*-0.109157);
}

double NNfunction_sb_cLuL::synapse0x1e7d230() {
   return (neuron0x1e7cf80()*0.0125864);
}

double NNfunction_sb_cLuL::synapse0x1e7d270() {
   return (neuron0x1e7d950()*0.011463);
}

double NNfunction_sb_cLuL::synapse0x1e7dc00() {
   return (neuron0x1e7e320()*0.00424388);
}

double NNfunction_sb_cLuL::synapse0x1e7dc40() {
   return (neuron0x1e7ee00()*0.0412595);
}

double NNfunction_sb_cLuL::synapse0x1e7e5d0() {
   return (neuron0x1e7f7d0()*0.0125936);
}

double NNfunction_sb_cLuL::synapse0x1e7e610() {
   return (neuron0x1e7c8b0()*-0.0152053);
}

double NNfunction_sb_cLuL::synapse0x1e7f0b0() {
   return (neuron0x1e81380()*0.00830703);
}

double NNfunction_sb_cLuL::synapse0x1e7f0f0() {
   return (neuron0x1e81d50()*-0.27997);
}

double NNfunction_sb_cLuL::synapse0x1e7fa80() {
   return (neuron0x1e82720()*0.0998752);
}

double NNfunction_sb_cLuL::synapse0x1e7fac0() {
   return (neuron0x1e830f0()*0.00743144);
}

double NNfunction_sb_cLuL::synapse0x1e7cb60() {
   return (neuron0x1e84f00()*0.00137056);
}

double NNfunction_sb_cLuL::synapse0x1e7cba0() {
   return (neuron0x1e851e0()*-0.827848);
}

double NNfunction_sb_cLuL::synapse0x1e81630() {
   return (neuron0x1e85bb0()*-0.00363044);
}

double NNfunction_sb_cLuL::synapse0x1e81670() {
   return (neuron0x1e86580()*-0.0461392);
}

double NNfunction_sb_cLuL::synapse0x1e82000() {
   return (neuron0x1e86f50()*0.119502);
}

double NNfunction_sb_cLuL::synapse0x1e82040() {
   return (neuron0x1e87920()*0.210183);
}

double NNfunction_sb_cLuL::synapse0x1e829d0() {
   return (neuron0x1e80470()*0.166345);
}

double NNfunction_sb_cLuL::synapse0x1e82a10() {
   return (neuron0x1e80e40()*0.0406279);
}

double NNfunction_sb_cLuL::synapse0x1e833a0() {
   return (neuron0x1e8a6b0()*-0.00160739);
}

double NNfunction_sb_cLuL::synapse0x1e833e0() {
   return (neuron0x1e8b080()*-0.010647);
}

double NNfunction_sb_cLuL::synapse0x1e77510() {
   return (neuron0x1e8ba50()*0.330489);
}

double NNfunction_sb_cLuL::synapse0x1e77550() {
   return (neuron0x1e8c420()*-0.159976);
}

double NNfunction_sb_cLuL::synapse0x1e85490() {
   return (neuron0x1e8cdf0()*-0.000729578);
}

double NNfunction_sb_cLuL::synapse0x1e854d0() {
   return (neuron0x1e8d7c0()*0.0566396);
}

double NNfunction_sb_cLuL::synapse0x1e85e60() {
   return (neuron0x1e8e190()*-0.00363106);
}

double NNfunction_sb_cLuL::synapse0x1e85ea0() {
   return (neuron0x1e8eb60()*0.0341258);
}

double NNfunction_sb_cLuL::synapse0x1e86830() {
   return (neuron0x1e84bf0()*-1.65611);
}

double NNfunction_sb_cLuL::synapse0x1e86870() {
   return (neuron0x1e91740()*0.0146491);
}

double NNfunction_sb_cLuL::synapse0x1e87200() {
   return (neuron0x1e92110()*-0.000120423);
}

double NNfunction_sb_cLuL::synapse0x1e87240() {
   return (neuron0x1e92ae0()*-3.48271);
}

double NNfunction_sb_cLuL::synapse0x1e87bd0() {
   return (neuron0x1e934b0()*1.0553);
}

double NNfunction_sb_cLuL::synapse0x1e87c10() {
   return (neuron0x1e93e80()*0.243682);
}

double NNfunction_sb_cLuL::synapse0x1e80720() {
   return (neuron0x1e94850()*0.00180696);
}

double NNfunction_sb_cLuL::synapse0x1e80760() {
   return (neuron0x1e95220()*-0.00755861);
}

double NNfunction_sb_cLuL::synapse0x1e89fd0() {
   return (neuron0x1e95bf0()*-0.825989);
}

double NNfunction_sb_cLuL::synapse0x1e8a010() {
   return (neuron0x1e967d0()*-0.00974715);
}

double NNfunction_sb_cLuL::synapse0x1e8a960() {
   return (neuron0x1e971a0()*0.00968228);
}

double NNfunction_sb_cLuL::synapse0x1e8a9a0() {
   return (neuron0x1e88020()*0.00790146);
}

double NNfunction_sb_cLuL::synapse0x1e8b330() {
   return (neuron0x1e889f0()*-0.00120666);
}

double NNfunction_sb_cLuL::synapse0x1e8b370() {
   return (neuron0x1e893c0()*-0.00301552);
}

double NNfunction_sb_cLuL::synapse0x1e8bd00() {
   return (neuron0x1e9ba00()*0.197557);
}

double NNfunction_sb_cLuL::synapse0x1e8bd40() {
   return (neuron0x1e9c2b0()*0.000486587);
}

double NNfunction_sb_cLuL::synapse0x1e8c6d0() {
   return (neuron0x1e9cc80()*1.73192);
}

double NNfunction_sb_cLuL::synapse0x1e8c710() {
   return (neuron0x1e9d650()*0.000132603);
}

double NNfunction_sb_cLuL::synapse0x1e8ee10() {
   return (neuron0x1e795d0()*0.53264);
}

double NNfunction_sb_cLuL::synapse0x1e8ee50() {
   return (neuron0x1e79ee0()*0.34396);
}

double NNfunction_sb_cLuL::synapse0x1e843d0() {
   return (neuron0x1e7a9c0()*0.776697);
}

double NNfunction_sb_cLuL::synapse0x1e84410() {
   return (neuron0x1c34250()*0.27864);
}

double NNfunction_sb_cLuL::synapse0x1e919f0() {
   return (neuron0x1e7b7e0()*0.871369);
}

double NNfunction_sb_cLuL::synapse0x1e91a30() {
   return (neuron0x1e7c1b0()*0.510689);
}

double NNfunction_sb_cLuL::synapse0x1e923c0() {
   return (neuron0x1e7cf80()*0.52171);
}

double NNfunction_sb_cLuL::synapse0x1e92400() {
   return (neuron0x1e7d950()*0.666752);
}

double NNfunction_sb_cLuL::synapse0x1e92d90() {
   return (neuron0x1e7e320()*0.127686);
}

double NNfunction_sb_cLuL::synapse0x1e92dd0() {
   return (neuron0x1e7ee00()*0.409592);
}

double NNfunction_sb_cLuL::synapse0x1e93760() {
   return (neuron0x1e7f7d0()*0.367119);
}

double NNfunction_sb_cLuL::synapse0x1e937a0() {
   return (neuron0x1e7c8b0()*0.141337);
}

double NNfunction_sb_cLuL::synapse0x1e94130() {
   return (neuron0x1e81380()*0.716901);
}

double NNfunction_sb_cLuL::synapse0x1e94170() {
   return (neuron0x1e81d50()*0.565788);
}

double NNfunction_sb_cLuL::synapse0x1e94b00() {
   return (neuron0x1e82720()*-0.150775);
}

double NNfunction_sb_cLuL::synapse0x1e94b40() {
   return (neuron0x1e830f0()*0.687156);
}

double NNfunction_sb_cLuL::synapse0x1e954d0() {
   return (neuron0x1e84f00()*0.582553);
}

double NNfunction_sb_cLuL::synapse0x1e95510() {
   return (neuron0x1e851e0()*0.162663);
}

double NNfunction_sb_cLuL::synapse0x1e95ea0() {
   return (neuron0x1e85bb0()*0.650584);
}

double NNfunction_sb_cLuL::synapse0x1e95ee0() {
   return (neuron0x1e86580()*0.241701);
}

double NNfunction_sb_cLuL::synapse0x1e96a80() {
   return (neuron0x1e86f50()*0.620007);
}

double NNfunction_sb_cLuL::synapse0x1e96ac0() {
   return (neuron0x1e87920()*-0.110444);
}

double NNfunction_sb_cLuL::synapse0x1e97450() {
   return (neuron0x1e80470()*0.116554);
}

double NNfunction_sb_cLuL::synapse0x1e97490() {
   return (neuron0x1e80e40()*0.56517);
}

double NNfunction_sb_cLuL::synapse0x1e882d0() {
   return (neuron0x1e8a6b0()*0.263415);
}

double NNfunction_sb_cLuL::synapse0x1e88310() {
   return (neuron0x1e8b080()*-0.490247);
}

double NNfunction_sb_cLuL::synapse0x1e88ca0() {
   return (neuron0x1e8ba50()*0.379925);
}

double NNfunction_sb_cLuL::synapse0x1e88ce0() {
   return (neuron0x1e8c420()*0.183089);
}

double NNfunction_sb_cLuL::synapse0x1e89670() {
   return (neuron0x1e8cdf0()*0.53469);
}

double NNfunction_sb_cLuL::synapse0x1e896b0() {
   return (neuron0x1e8d7c0()*0.349413);
}

double NNfunction_sb_cLuL::synapse0x1e9bb90() {
   return (neuron0x1e8e190()*-0.30463);
}

double NNfunction_sb_cLuL::synapse0x1e9bbd0() {
   return (neuron0x1e8eb60()*0.605863);
}

double NNfunction_sb_cLuL::synapse0x1e9c560() {
   return (neuron0x1e84bf0()*0.477097);
}

double NNfunction_sb_cLuL::synapse0x1e9c5a0() {
   return (neuron0x1e91740()*0.535299);
}

double NNfunction_sb_cLuL::synapse0x1e9cf30() {
   return (neuron0x1e92110()*-0.440854);
}

double NNfunction_sb_cLuL::synapse0x1e9cf70() {
   return (neuron0x1e92ae0()*0.892652);
}

double NNfunction_sb_cLuL::synapse0x1e9d900() {
   return (neuron0x1e934b0()*0.528189);
}

double NNfunction_sb_cLuL::synapse0x1e9d940() {
   return (neuron0x1e93e80()*0.363916);
}

double NNfunction_sb_cLuL::synapse0x1e797f0() {
   return (neuron0x1e94850()*0.171332);
}

double NNfunction_sb_cLuL::synapse0x1e79830() {
   return (neuron0x1e95220()*0.35659);
}

double NNfunction_sb_cLuL::synapse0x1e8d0a0() {
   return (neuron0x1e95bf0()*0.436536);
}

double NNfunction_sb_cLuL::synapse0x1e8d0e0() {
   return (neuron0x1e967d0()*0.123977);
}

double NNfunction_sb_cLuL::synapse0x1e9e020() {
   return (neuron0x1e971a0()*0.451445);
}

double NNfunction_sb_cLuL::synapse0x1e9e060() {
   return (neuron0x1e88020()*0.549234);
}

double NNfunction_sb_cLuL::synapse0x1e9e0a0() {
   return (neuron0x1e889f0()*0.00609496);
}

double NNfunction_sb_cLuL::synapse0x1e9e0e0() {
   return (neuron0x1e893c0()*0.375235);
}

double NNfunction_sb_cLuL::synapse0x1ea4f90() {
   return (neuron0x1e9ba00()*0.351498);
}

double NNfunction_sb_cLuL::synapse0x1ea4fd0() {
   return (neuron0x1e9c2b0()*-0.315573);
}

double NNfunction_sb_cLuL::synapse0x1ea5010() {
   return (neuron0x1e9cc80()*-0.02197);
}

double NNfunction_sb_cLuL::synapse0x1ea5050() {
   return (neuron0x1e9d650()*0.312398);
}

double NNfunction_sb_cLuL::synapse0x1ea53d0() {
   return (neuron0x1e795d0()*2.43504);
}

double NNfunction_sb_cLuL::synapse0x1ea5410() {
   return (neuron0x1e79ee0()*-0.486304);
}

double NNfunction_sb_cLuL::synapse0x1ea5450() {
   return (neuron0x1e7a9c0()*3.83691);
}

double NNfunction_sb_cLuL::synapse0x1ea5490() {
   return (neuron0x1c34250()*1.39442);
}

double NNfunction_sb_cLuL::synapse0x1ea54d0() {
   return (neuron0x1e7b7e0()*1.6866);
}

double NNfunction_sb_cLuL::synapse0x1ea5510() {
   return (neuron0x1e7c1b0()*-0.208038);
}

double NNfunction_sb_cLuL::synapse0x1ea5550() {
   return (neuron0x1e7cf80()*-0.351233);
}

double NNfunction_sb_cLuL::synapse0x1ea5590() {
   return (neuron0x1e7d950()*2.29127);
}

double NNfunction_sb_cLuL::synapse0x1ea55d0() {
   return (neuron0x1e7e320()*-4.47196);
}

double NNfunction_sb_cLuL::synapse0x1ea5610() {
   return (neuron0x1e7ee00()*-0.0208861);
}

double NNfunction_sb_cLuL::synapse0x1ea5650() {
   return (neuron0x1e7f7d0()*2.07004);
}

double NNfunction_sb_cLuL::synapse0x1ea5690() {
   return (neuron0x1e7c8b0()*-1.51791);
}

double NNfunction_sb_cLuL::synapse0x1ea56d0() {
   return (neuron0x1e81380()*0.64365);
}

double NNfunction_sb_cLuL::synapse0x1ea5710() {
   return (neuron0x1e81d50()*0.981518);
}

double NNfunction_sb_cLuL::synapse0x1ea5750() {
   return (neuron0x1e82720()*-2.0561);
}

double NNfunction_sb_cLuL::synapse0x1ea5790() {
   return (neuron0x1e830f0()*-1.72921);
}

double NNfunction_sb_cLuL::synapse0x1ea5220() {
   return (neuron0x1e84f00()*2.74909);
}

double NNfunction_sb_cLuL::synapse0x1ea5260() {
   return (neuron0x1e851e0()*0.758383);
}

double NNfunction_sb_cLuL::synapse0x1ea58e0() {
   return (neuron0x1e85bb0()*2.54454);
}

double NNfunction_sb_cLuL::synapse0x1ea5920() {
   return (neuron0x1e86580()*0.745249);
}

double NNfunction_sb_cLuL::synapse0x1ea5960() {
   return (neuron0x1e86f50()*2.51288);
}

double NNfunction_sb_cLuL::synapse0x1ea59a0() {
   return (neuron0x1e87920()*0.056333);
}

double NNfunction_sb_cLuL::synapse0x1ea59e0() {
   return (neuron0x1e80470()*0.725183);
}

double NNfunction_sb_cLuL::synapse0x1ea5a20() {
   return (neuron0x1e80e40()*-0.806406);
}

double NNfunction_sb_cLuL::synapse0x1ea5a60() {
   return (neuron0x1e8a6b0()*-2.49756);
}

double NNfunction_sb_cLuL::synapse0x1ea5aa0() {
   return (neuron0x1e8b080()*-2.43183);
}

double NNfunction_sb_cLuL::synapse0x1ea5ae0() {
   return (neuron0x1e8ba50()*-0.870993);
}

double NNfunction_sb_cLuL::synapse0x1ea5b20() {
   return (neuron0x1e8c420()*1.86334);
}

double NNfunction_sb_cLuL::synapse0x1ea5b60() {
   return (neuron0x1e8cdf0()*-0.837767);
}

double NNfunction_sb_cLuL::synapse0x1ea5ba0() {
   return (neuron0x1e8d7c0()*-0.63534);
}

double NNfunction_sb_cLuL::synapse0x1ea5be0() {
   return (neuron0x1e8e190()*-2.80877);
}

double NNfunction_sb_cLuL::synapse0x1ea5c20() {
   return (neuron0x1e8eb60()*-0.667551);
}

double NNfunction_sb_cLuL::synapse0x1ea57d0() {
   return (neuron0x1e84bf0()*-1.76262);
}

double NNfunction_sb_cLuL::synapse0x1ea5810() {
   return (neuron0x1e91740()*2.4576);
}

double NNfunction_sb_cLuL::synapse0x1ea5850() {
   return (neuron0x1e92110()*-1.84694);
}

double NNfunction_sb_cLuL::synapse0x1ea5890() {
   return (neuron0x1e92ae0()*0.700098);
}

double NNfunction_sb_cLuL::synapse0x1ea5e70() {
   return (neuron0x1e934b0()*-0.162294);
}

double NNfunction_sb_cLuL::synapse0x1ea5eb0() {
   return (neuron0x1e93e80()*-2.22008);
}

double NNfunction_sb_cLuL::synapse0x1ea5ef0() {
   return (neuron0x1e94850()*-2.85954);
}

double NNfunction_sb_cLuL::synapse0x1ea5f30() {
   return (neuron0x1e95220()*2.04383);
}

double NNfunction_sb_cLuL::synapse0x1ea5f70() {
   return (neuron0x1e95bf0()*0.975265);
}

double NNfunction_sb_cLuL::synapse0x1ea5fb0() {
   return (neuron0x1e967d0()*-1.63159);
}

double NNfunction_sb_cLuL::synapse0x1ea5ff0() {
   return (neuron0x1e971a0()*1.93097);
}

double NNfunction_sb_cLuL::synapse0x1ea6030() {
   return (neuron0x1e88020()*2.65164);
}

double NNfunction_sb_cLuL::synapse0x1ea6070() {
   return (neuron0x1e889f0()*-2.67786);
}

double NNfunction_sb_cLuL::synapse0x1ea60b0() {
   return (neuron0x1e893c0()*-3.30032);
}

double NNfunction_sb_cLuL::synapse0x1ea60f0() {
   return (neuron0x1e9ba00()*4.63756);
}

double NNfunction_sb_cLuL::synapse0x1ea6130() {
   return (neuron0x1e9c2b0()*2.16817);
}

double NNfunction_sb_cLuL::synapse0x1ea6170() {
   return (neuron0x1e9cc80()*0.58034);
}

double NNfunction_sb_cLuL::synapse0x1ea61b0() {
   return (neuron0x1e9d650()*2.27719);
}

double NNfunction_sb_cLuL::synapse0x1ea6530() {
   return (neuron0x1e795d0()*-0.295777);
}

double NNfunction_sb_cLuL::synapse0x1ea6570() {
   return (neuron0x1e79ee0()*-0.945842);
}

double NNfunction_sb_cLuL::synapse0x1ea65b0() {
   return (neuron0x1e7a9c0()*1.39021);
}

double NNfunction_sb_cLuL::synapse0x1ea65f0() {
   return (neuron0x1c34250()*-0.0748265);
}

double NNfunction_sb_cLuL::synapse0x1ea6630() {
   return (neuron0x1e7b7e0()*-0.877459);
}

double NNfunction_sb_cLuL::synapse0x1ea6670() {
   return (neuron0x1e7c1b0()*2.38787);
}

double NNfunction_sb_cLuL::synapse0x1ea66b0() {
   return (neuron0x1e7cf80()*1.49894);
}

double NNfunction_sb_cLuL::synapse0x1ea66f0() {
   return (neuron0x1e7d950()*1.19423);
}

double NNfunction_sb_cLuL::synapse0x1ea6730() {
   return (neuron0x1e7e320()*0.623207);
}

double NNfunction_sb_cLuL::synapse0x1ea6770() {
   return (neuron0x1e7ee00()*-1.73458);
}

double NNfunction_sb_cLuL::synapse0x1ea67b0() {
   return (neuron0x1e7f7d0()*0.123657);
}

double NNfunction_sb_cLuL::synapse0x1ea67f0() {
   return (neuron0x1e7c8b0()*-0.0334818);
}

double NNfunction_sb_cLuL::synapse0x1ea6830() {
   return (neuron0x1e81380()*0.93854);
}

double NNfunction_sb_cLuL::synapse0x1ea6870() {
   return (neuron0x1e81d50()*-0.257414);
}

double NNfunction_sb_cLuL::synapse0x1ea68b0() {
   return (neuron0x1e82720()*-0.301501);
}

double NNfunction_sb_cLuL::synapse0x1ea68f0() {
   return (neuron0x1e830f0()*1.0407);
}

double NNfunction_sb_cLuL::synapse0x1ea6380() {
   return (neuron0x1e84f00()*-0.6557);
}

double NNfunction_sb_cLuL::synapse0x1ea63c0() {
   return (neuron0x1e851e0()*0.614183);
}

double NNfunction_sb_cLuL::synapse0x1ea6a40() {
   return (neuron0x1e85bb0()*-0.2227);
}

double NNfunction_sb_cLuL::synapse0x1ea6a80() {
   return (neuron0x1e86580()*0.258547);
}

double NNfunction_sb_cLuL::synapse0x1ea6ac0() {
   return (neuron0x1e86f50()*-0.353425);
}

double NNfunction_sb_cLuL::synapse0x1ea6b00() {
   return (neuron0x1e87920()*0.17169);
}

double NNfunction_sb_cLuL::synapse0x1ea6b40() {
   return (neuron0x1e80470()*-1.71045);
}

double NNfunction_sb_cLuL::synapse0x1ea6b80() {
   return (neuron0x1e80e40()*1.82029);
}

double NNfunction_sb_cLuL::synapse0x1ea6bc0() {
   return (neuron0x1e8a6b0()*-0.0212002);
}

double NNfunction_sb_cLuL::synapse0x1ea6c00() {
   return (neuron0x1e8b080()*-1.07316);
}

double NNfunction_sb_cLuL::synapse0x1ea6c40() {
   return (neuron0x1e8ba50()*-1.04187);
}

double NNfunction_sb_cLuL::synapse0x1ea6c80() {
   return (neuron0x1e8c420()*1.12809);
}

double NNfunction_sb_cLuL::synapse0x1ea6cc0() {
   return (neuron0x1e8cdf0()*1.72349);
}

double NNfunction_sb_cLuL::synapse0x1ea6d00() {
   return (neuron0x1e8d7c0()*1.49339);
}

double NNfunction_sb_cLuL::synapse0x1ea6d40() {
   return (neuron0x1e8e190()*-1.16765);
}

double NNfunction_sb_cLuL::synapse0x1ea6d80() {
   return (neuron0x1e8eb60()*2.23892);
}

double NNfunction_sb_cLuL::synapse0x1ea6930() {
   return (neuron0x1e84bf0()*0.685808);
}

double NNfunction_sb_cLuL::synapse0x1ea6970() {
   return (neuron0x1e91740()*1.38437);
}

double NNfunction_sb_cLuL::synapse0x1ea69b0() {
   return (neuron0x1e92110()*1.38088);
}

double NNfunction_sb_cLuL::synapse0x1ea69f0() {
   return (neuron0x1e92ae0()*-1.19936);
}

double NNfunction_sb_cLuL::synapse0x1ea6fd0() {
   return (neuron0x1e934b0()*0.290674);
}

double NNfunction_sb_cLuL::synapse0x1ea7010() {
   return (neuron0x1e93e80()*-0.308818);
}

double NNfunction_sb_cLuL::synapse0x1ea7050() {
   return (neuron0x1e94850()*0.342824);
}

double NNfunction_sb_cLuL::synapse0x1ea7090() {
   return (neuron0x1e95220()*-0.728652);
}

double NNfunction_sb_cLuL::synapse0x1ea70d0() {
   return (neuron0x1e95bf0()*-1.26468);
}

double NNfunction_sb_cLuL::synapse0x1ea7110() {
   return (neuron0x1e967d0()*-1.10604);
}

double NNfunction_sb_cLuL::synapse0x1ea7150() {
   return (neuron0x1e971a0()*1.18747);
}

double NNfunction_sb_cLuL::synapse0x1ea7190() {
   return (neuron0x1e88020()*0.440883);
}

double NNfunction_sb_cLuL::synapse0x1ea71d0() {
   return (neuron0x1e889f0()*-0.409636);
}

double NNfunction_sb_cLuL::synapse0x1ea7210() {
   return (neuron0x1e893c0()*0.697842);
}

double NNfunction_sb_cLuL::synapse0x1ea7250() {
   return (neuron0x1e9ba00()*1.10877);
}

double NNfunction_sb_cLuL::synapse0x1ea7290() {
   return (neuron0x1e9c2b0()*-0.451022);
}

double NNfunction_sb_cLuL::synapse0x1ea72d0() {
   return (neuron0x1e9cc80()*-0.564263);
}

double NNfunction_sb_cLuL::synapse0x1ea7310() {
   return (neuron0x1e9d650()*0.0642344);
}

double NNfunction_sb_cLuL::synapse0x1ea7690() {
   return (neuron0x1e795d0()*0.0676039);
}

double NNfunction_sb_cLuL::synapse0x1ea76d0() {
   return (neuron0x1e79ee0()*0.525555);
}

double NNfunction_sb_cLuL::synapse0x1ea7710() {
   return (neuron0x1e7a9c0()*-1.6479);
}

double NNfunction_sb_cLuL::synapse0x1ea7750() {
   return (neuron0x1c34250()*-0.598197);
}

double NNfunction_sb_cLuL::synapse0x1ea7790() {
   return (neuron0x1e7b7e0()*0.218288);
}

double NNfunction_sb_cLuL::synapse0x1ea77d0() {
   return (neuron0x1e7c1b0()*-4.14902);
}

double NNfunction_sb_cLuL::synapse0x1ea7810() {
   return (neuron0x1e7cf80()*-0.221726);
}

double NNfunction_sb_cLuL::synapse0x1ea7850() {
   return (neuron0x1e7d950()*-0.186577);
}

double NNfunction_sb_cLuL::synapse0x1ea7890() {
   return (neuron0x1e7e320()*-0.319279);
}

double NNfunction_sb_cLuL::synapse0x1ea78d0() {
   return (neuron0x1e7ee00()*0.532751);
}

double NNfunction_sb_cLuL::synapse0x1ea7910() {
   return (neuron0x1e7f7d0()*-0.207587);
}

double NNfunction_sb_cLuL::synapse0x1ea7950() {
   return (neuron0x1e7c8b0()*0.265656);
}

double NNfunction_sb_cLuL::synapse0x1ea7990() {
   return (neuron0x1e81380()*-0.248835);
}

double NNfunction_sb_cLuL::synapse0x1ea79d0() {
   return (neuron0x1e81d50()*-0.65866);
}

double NNfunction_sb_cLuL::synapse0x1ea7a10() {
   return (neuron0x1e82720()*3.42096);
}

double NNfunction_sb_cLuL::synapse0x1ea7a50() {
   return (neuron0x1e830f0()*-0.193318);
}

double NNfunction_sb_cLuL::synapse0x1ea74e0() {
   return (neuron0x1e84f00()*-0.00573475);
}

double NNfunction_sb_cLuL::synapse0x1ea7520() {
   return (neuron0x1e851e0()*-4.84783);
}

double NNfunction_sb_cLuL::synapse0x1ea7ba0() {
   return (neuron0x1e85bb0()*0.0709339);
}

double NNfunction_sb_cLuL::synapse0x1ea7be0() {
   return (neuron0x1e86580()*1.03209);
}

double NNfunction_sb_cLuL::synapse0x1ea7c20() {
   return (neuron0x1e86f50()*-1.26732);
}

double NNfunction_sb_cLuL::synapse0x1ea7c60() {
   return (neuron0x1e87920()*1.26215);
}

double NNfunction_sb_cLuL::synapse0x1ea7ca0() {
   return (neuron0x1e80470()*1.95714);
}

double NNfunction_sb_cLuL::synapse0x1ea7ce0() {
   return (neuron0x1e80e40()*-0.989562);
}

double NNfunction_sb_cLuL::synapse0x1ea7d20() {
   return (neuron0x1e8a6b0()*-0.0765086);
}

double NNfunction_sb_cLuL::synapse0x1ea7d60() {
   return (neuron0x1e8b080()*0.0657243);
}

double NNfunction_sb_cLuL::synapse0x1ea7da0() {
   return (neuron0x1e8ba50()*2.71121);
}

double NNfunction_sb_cLuL::synapse0x1ea7de0() {
   return (neuron0x1e8c420()*-1.94124);
}

double NNfunction_sb_cLuL::synapse0x1ea7e20() {
   return (neuron0x1e8cdf0()*-0.0703595);
}

double NNfunction_sb_cLuL::synapse0x1ea7e60() {
   return (neuron0x1e8d7c0()*-1.37056);
}

double NNfunction_sb_cLuL::synapse0x1ea7ea0() {
   return (neuron0x1e8e190()*0.0520501);
}

double NNfunction_sb_cLuL::synapse0x1ea7ee0() {
   return (neuron0x1e8eb60()*-0.874781);
}

double NNfunction_sb_cLuL::synapse0x1ea7a90() {
   return (neuron0x1e84bf0()*-1.63197);
}

double NNfunction_sb_cLuL::synapse0x1ea7ad0() {
   return (neuron0x1e91740()*-0.0963093);
}

double NNfunction_sb_cLuL::synapse0x1ea7b10() {
   return (neuron0x1e92110()*0.00561252);
}

double NNfunction_sb_cLuL::synapse0x1ea7b50() {
   return (neuron0x1e92ae0()*0.599683);
}

double NNfunction_sb_cLuL::synapse0x1ea8130() {
   return (neuron0x1e934b0()*-0.895579);
}

double NNfunction_sb_cLuL::synapse0x1ea8170() {
   return (neuron0x1e93e80()*0.913421);
}

double NNfunction_sb_cLuL::synapse0x1ea81b0() {
   return (neuron0x1e94850()*-0.017385);
}

double NNfunction_sb_cLuL::synapse0x1ea81f0() {
   return (neuron0x1e95220()*0.123289);
}

double NNfunction_sb_cLuL::synapse0x1ea8230() {
   return (neuron0x1e95bf0()*2.9534);
}

double NNfunction_sb_cLuL::synapse0x1ea8270() {
   return (neuron0x1e967d0()*0.175164);
}

double NNfunction_sb_cLuL::synapse0x1ea82b0() {
   return (neuron0x1e971a0()*-0.128024);
}

double NNfunction_sb_cLuL::synapse0x1ea82f0() {
   return (neuron0x1e88020()*-0.0545189);
}

double NNfunction_sb_cLuL::synapse0x1ea8330() {
   return (neuron0x1e889f0()*-0.10648);
}

double NNfunction_sb_cLuL::synapse0x1ea8370() {
   return (neuron0x1e893c0()*-0.00340396);
}

double NNfunction_sb_cLuL::synapse0x1ea83b0() {
   return (neuron0x1e9ba00()*-3.4147);
}

double NNfunction_sb_cLuL::synapse0x1ea83f0() {
   return (neuron0x1e9c2b0()*1.62751);
}

double NNfunction_sb_cLuL::synapse0x1ea8430() {
   return (neuron0x1e9cc80()*1.02679);
}

double NNfunction_sb_cLuL::synapse0x1ea8470() {
   return (neuron0x1e9d650()*-0.0427639);
}

double NNfunction_sb_cLuL::synapse0x1e79590() {
   return (neuron0x1ea4850()*9.53156);
}

double NNfunction_sb_cLuL::synapse0x1ea86d0() {
   return (neuron0x1ea4bf0()*2.40586);
}

double NNfunction_sb_cLuL::synapse0x1ea8710() {
   return (neuron0x1ea5090()*-7.00444);
}

double NNfunction_sb_cLuL::synapse0x1ea8750() {
   return (neuron0x1ea61f0()*-3.44285);
}

double NNfunction_sb_cLuL::synapse0x1ea8790() {
   return (neuron0x1ea7350()*9.74827);
}

