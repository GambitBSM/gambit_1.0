#include "NNfunction-NN_5_7.h"
#include <cmath>

double NNfunction-NN_5_7::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.261)/15.2626;
   input1 = (in1 - 3.59285)/1168.86;
   input2 = (in2 - 695.966)/602.689;
   input3 = (in3 - -46.6646)/834.305;
   input4 = (in4 - 1118.04)/986.704;
   input5 = (in5 - 906.617)/962.382;
   input6 = (in6 - 913.707)/961.929;
   input7 = (in7 - 935.096)/944.419;
   input8 = (in8 - 929.61)/974.692;
   input9 = (in9 - 916.155)/961.346;
   input10 = (in10 - 991.356)/954.076;
   input11 = (in11 - 726.144)/871.043;
   input12 = (in12 - 733.805)/875.862;
   input13 = (in13 - 503.134)/520.949;
   input14 = (in14 - 744.886)/836.755;
   input15 = (in15 - 739.585)/834.645;
   input16 = (in16 - 539.306)/572.516;
   input17 = (in17 - 764.553)/904.164;
   input18 = (in18 - 759.407)/904.505;
   input19 = (in19 - 812.975)/882.106;
   input20 = (in20 - -3.52872)/485.614;
   input21 = (in21 - 0.997131)/1157.34;
   input22 = (in22 - -1.60334)/1210.05;
   input23 = (in23 - -203.712)/585.809;
   switch(index) {
     case 0:
         return neuron0x35b91b0();
     default:
         return 0.;
   }
}

double NNfunction-NN_5_7::Value(int index, double* input) {
   input0 = (input[0] - 23.261)/15.2626;
   input1 = (input[1] - 3.59285)/1168.86;
   input2 = (input[2] - 695.966)/602.689;
   input3 = (input[3] - -46.6646)/834.305;
   input4 = (input[4] - 1118.04)/986.704;
   input5 = (input[5] - 906.617)/962.382;
   input6 = (input[6] - 913.707)/961.929;
   input7 = (input[7] - 935.096)/944.419;
   input8 = (input[8] - 929.61)/974.692;
   input9 = (input[9] - 916.155)/961.346;
   input10 = (input[10] - 991.356)/954.076;
   input11 = (input[11] - 726.144)/871.043;
   input12 = (input[12] - 733.805)/875.862;
   input13 = (input[13] - 503.134)/520.949;
   input14 = (input[14] - 744.886)/836.755;
   input15 = (input[15] - 739.585)/834.645;
   input16 = (input[16] - 539.306)/572.516;
   input17 = (input[17] - 764.553)/904.164;
   input18 = (input[18] - 759.407)/904.505;
   input19 = (input[19] - 812.975)/882.106;
   input20 = (input[20] - -3.52872)/485.614;
   input21 = (input[21] - 0.997131)/1157.34;
   input22 = (input[22] - -1.60334)/1210.05;
   input23 = (input[23] - -203.712)/585.809;
   switch(index) {
     case 0:
         return neuron0x35b91b0();
     default:
         return 0.;
   }
}

double NNfunction-NN_5_7::neuron0x3584220() {
   return input0;
}

double NNfunction-NN_5_7::neuron0x35844d0() {
   return input1;
}

double NNfunction-NN_5_7::neuron0x3584810() {
   return input2;
}

double NNfunction-NN_5_7::neuron0x3584b50() {
   return input3;
}

double NNfunction-NN_5_7::neuron0x3584e90() {
   return input4;
}

double NNfunction-NN_5_7::neuron0x35851d0() {
   return input5;
}

double NNfunction-NN_5_7::neuron0x3585510() {
   return input6;
}

double NNfunction-NN_5_7::neuron0x3585850() {
   return input7;
}

double NNfunction-NN_5_7::neuron0x3585b90() {
   return input8;
}

double NNfunction-NN_5_7::neuron0x3585ed0() {
   return input9;
}

double NNfunction-NN_5_7::neuron0x3586210() {
   return input10;
}

double NNfunction-NN_5_7::neuron0x3586550() {
   return input11;
}

double NNfunction-NN_5_7::neuron0x3586890() {
   return input12;
}

double NNfunction-NN_5_7::neuron0x3586bd0() {
   return input13;
}

double NNfunction-NN_5_7::neuron0x3586f10() {
   return input14;
}

double NNfunction-NN_5_7::neuron0x3587250() {
   return input15;
}

double NNfunction-NN_5_7::neuron0x3587590() {
   return input16;
}

double NNfunction-NN_5_7::neuron0x3587af0() {
   return input17;
}

double NNfunction-NN_5_7::neuron0x3587e30() {
   return input18;
}

double NNfunction-NN_5_7::neuron0x3588170() {
   return input19;
}

double NNfunction-NN_5_7::neuron0x35884b0() {
   return input20;
}

double NNfunction-NN_5_7::neuron0x35887f0() {
   return input21;
}

double NNfunction-NN_5_7::neuron0x3588b30() {
   return input22;
}

double NNfunction-NN_5_7::neuron0x3588e70() {
   return input23;
}

double NNfunction-NN_5_7::input0x35892e0() {
   double input = 3.14982;
   input += synapse0x3589620();
   input += synapse0x3589660();
   input += synapse0x35896a0();
   input += synapse0x35896e0();
   input += synapse0x3589720();
   input += synapse0x3589760();
   input += synapse0x35897a0();
   input += synapse0x35897e0();
   input += synapse0x3589820();
   input += synapse0x3589860();
   input += synapse0x35898a0();
   input += synapse0x35898e0();
   input += synapse0x3589920();
   input += synapse0x3589960();
   input += synapse0x35899a0();
   input += synapse0x35899e0();
   input += synapse0x3589470();
   input += synapse0x35894b0();
   input += synapse0x3336930();
   input += synapse0x3336970();
   input += synapse0x3589a20();
   input += synapse0x3589a60();
   input += synapse0x3589aa0();
   input += synapse0x3589ae0();
   return input;
}

double NNfunction-NN_5_7::neuron0x35892e0() {
   double input = input0x35892e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x3589b20() {
   double input = 0.624633;
   input += synapse0x3589e60();
   input += synapse0x3589ea0();
   input += synapse0x3589ee0();
   input += synapse0x3589f20();
   input += synapse0x3589f60();
   input += synapse0x3589fa0();
   input += synapse0x3589fe0();
   input += synapse0x358a020();
   input += synapse0x358a060();
   input += synapse0x3336780();
   input += synapse0x33367c0();
   input += synapse0x3336800();
   input += synapse0x3336840();
   input += synapse0x358a2b0();
   input += synapse0x358a2f0();
   input += synapse0x358a330();
   input += synapse0x3589cb0();
   input += synapse0x3589cf0();
   input += synapse0x358a480();
   input += synapse0x358a4c0();
   input += synapse0x358a500();
   input += synapse0x358a540();
   input += synapse0x358a580();
   input += synapse0x358a5c0();
   return input;
}

double NNfunction-NN_5_7::neuron0x3589b20() {
   double input = input0x3589b20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x358a600() {
   double input = 0.0583349;
   input += synapse0x358a940();
   input += synapse0x358a980();
   input += synapse0x358a9c0();
   input += synapse0x358aa00();
   input += synapse0x358aa40();
   input += synapse0x358aa80();
   input += synapse0x358aac0();
   input += synapse0x358ab00();
   input += synapse0x358ab40();
   input += synapse0x358ab80();
   input += synapse0x358abc0();
   input += synapse0x358ac00();
   input += synapse0x358ac40();
   input += synapse0x358ac80();
   input += synapse0x358acc0();
   input += synapse0x358ad00();
   input += synapse0x358a790();
   input += synapse0x358a7d0();
   input += synapse0x3344790();
   input += synapse0x33447d0();
   input += synapse0x358cc30();
   input += synapse0x358cc70();
   input += synapse0x3583f60();
   input += synapse0x3583fa0();
   return input;
}

double NNfunction-NN_5_7::neuron0x358a600() {
   double input = input0x358a600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x3344f10() {
   double input = -1.22542;
   input += synapse0x33450a0();
   input += synapse0x358a1c0();
   input += synapse0x358a200();
   input += synapse0x358a240();
   input += synapse0x358ae50();
   input += synapse0x358ae90();
   input += synapse0x358aed0();
   input += synapse0x358af10();
   input += synapse0x358af50();
   input += synapse0x358af90();
   input += synapse0x358afd0();
   input += synapse0x358b010();
   input += synapse0x358b050();
   input += synapse0x358b090();
   input += synapse0x358b0d0();
   input += synapse0x358b110();
   input += synapse0x3583fe0();
   input += synapse0x3584020();
   input += synapse0x358b260();
   input += synapse0x358b2a0();
   input += synapse0x358b2e0();
   input += synapse0x358b320();
   input += synapse0x358b360();
   input += synapse0x358b3a0();
   return input;
}

double NNfunction-NN_5_7::neuron0x3344f10() {
   double input = input0x3344f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x358b3e0() {
   double input = 0.193156;
   input += synapse0x358b720();
   input += synapse0x358b760();
   input += synapse0x358b7a0();
   input += synapse0x358b7e0();
   input += synapse0x358b820();
   input += synapse0x358b860();
   input += synapse0x358b8a0();
   input += synapse0x358b8e0();
   input += synapse0x358b920();
   input += synapse0x358b960();
   input += synapse0x358b9a0();
   input += synapse0x358b9e0();
   input += synapse0x358ba20();
   input += synapse0x358ba60();
   input += synapse0x358baa0();
   input += synapse0x358bae0();
   input += synapse0x358bc30();
   input += synapse0x358b570();
   input += synapse0x358b5b0();
   input += synapse0x358cd70();
   input += synapse0x358cdb0();
   input += synapse0x358cdf0();
   input += synapse0x358ce30();
   input += synapse0x358ce70();
   return input;
}

double NNfunction-NN_5_7::neuron0x358b3e0() {
   double input = input0x358b3e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x358ceb0() {
   double input = 1.51985;
   input += synapse0x358d1f0();
   input += synapse0x358d230();
   input += synapse0x358d270();
   input += synapse0x358d2b0();
   input += synapse0x358d2f0();
   input += synapse0x358d330();
   input += synapse0x358d370();
   input += synapse0x358d3b0();
   input += synapse0x358d3f0();
   input += synapse0x3344b00();
   input += synapse0x3344b40();
   input += synapse0x3344b80();
   input += synapse0x3344bc0();
   input += synapse0x3344c00();
   input += synapse0x3344c40();
   input += synapse0x3344c80();
   input += synapse0x358d040();
   input += synapse0x358d080();
   input += synapse0x3344dd0();
   input += synapse0x3344e10();
   input += synapse0x3344e50();
   input += synapse0x3344e90();
   input += synapse0x3344ed0();
   input += synapse0x358dc40();
   return input;
}

double NNfunction-NN_5_7::neuron0x358ceb0() {
   double input = input0x358ceb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x358dc80() {
   double input = -1.83873;
   input += synapse0x358dfc0();
   input += synapse0x358e000();
   input += synapse0x358e040();
   input += synapse0x358e080();
   input += synapse0x358e0c0();
   input += synapse0x358e100();
   input += synapse0x358e140();
   input += synapse0x358e180();
   input += synapse0x358e1c0();
   input += synapse0x358e200();
   input += synapse0x358e240();
   input += synapse0x358e280();
   input += synapse0x358e2c0();
   input += synapse0x358e300();
   input += synapse0x358e340();
   input += synapse0x358e380();
   input += synapse0x358de10();
   input += synapse0x358de50();
   input += synapse0x358e4d0();
   input += synapse0x358e510();
   input += synapse0x358e550();
   input += synapse0x358e590();
   input += synapse0x358e5d0();
   input += synapse0x358e610();
   return input;
}

double NNfunction-NN_5_7::neuron0x358dc80() {
   double input = input0x358dc80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x358e650() {
   double input = -1.01927;
   input += synapse0x358e990();
   input += synapse0x358e9d0();
   input += synapse0x358ea10();
   input += synapse0x358ea50();
   input += synapse0x358ea90();
   input += synapse0x358ead0();
   input += synapse0x358eb10();
   input += synapse0x358eb50();
   input += synapse0x358eb90();
   input += synapse0x358ebd0();
   input += synapse0x358ec10();
   input += synapse0x358ec50();
   input += synapse0x358ec90();
   input += synapse0x358ecd0();
   input += synapse0x358ed10();
   input += synapse0x358ed50();
   input += synapse0x358e7e0();
   input += synapse0x358e820();
   input += synapse0x358eea0();
   input += synapse0x358eee0();
   input += synapse0x358ef20();
   input += synapse0x358ef60();
   input += synapse0x358efa0();
   input += synapse0x358efe0();
   return input;
}

double NNfunction-NN_5_7::neuron0x358e650() {
   double input = input0x358e650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x358f020() {
   double input = 2.96922;
   input += synapse0x35879e0();
   input += synapse0x3587a20();
   input += synapse0x3587a60();
   input += synapse0x3587aa0();
   input += synapse0x358f570();
   input += synapse0x358f5b0();
   input += synapse0x358f5f0();
   input += synapse0x358f630();
   input += synapse0x358f670();
   input += synapse0x358f6b0();
   input += synapse0x358f6f0();
   input += synapse0x358f730();
   input += synapse0x358f770();
   input += synapse0x358f7b0();
   input += synapse0x358f7f0();
   input += synapse0x358f830();
   input += synapse0x358f1b0();
   input += synapse0x358f1f0();
   input += synapse0x358f980();
   input += synapse0x358f9c0();
   input += synapse0x358fa00();
   input += synapse0x358fa40();
   input += synapse0x358fa80();
   input += synapse0x358fac0();
   return input;
}

double NNfunction-NN_5_7::neuron0x358f020() {
   double input = input0x358f020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x358fb00() {
   double input = 4.7211;
   input += synapse0x358fe40();
   input += synapse0x358fe80();
   input += synapse0x358fec0();
   input += synapse0x358ff00();
   input += synapse0x358ff40();
   input += synapse0x358ff80();
   input += synapse0x358ffc0();
   input += synapse0x3590000();
   input += synapse0x3590040();
   input += synapse0x3590080();
   input += synapse0x35900c0();
   input += synapse0x3590100();
   input += synapse0x3590140();
   input += synapse0x3590180();
   input += synapse0x35901c0();
   input += synapse0x3590200();
   input += synapse0x358fc90();
   input += synapse0x358fcd0();
   input += synapse0x3590350();
   input += synapse0x3590390();
   input += synapse0x35903d0();
   input += synapse0x3590410();
   input += synapse0x3590450();
   input += synapse0x3590490();
   return input;
}

double NNfunction-NN_5_7::neuron0x358fb00() {
   double input = input0x358fb00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x35904d0() {
   double input = 3.70674;
   input += synapse0x3590810();
   input += synapse0x3590850();
   input += synapse0x3590890();
   input += synapse0x35908d0();
   input += synapse0x3590910();
   input += synapse0x3590950();
   input += synapse0x3590990();
   input += synapse0x35909d0();
   input += synapse0x3590a10();
   input += synapse0x3590a50();
   input += synapse0x3590a90();
   input += synapse0x3590ad0();
   input += synapse0x3590b10();
   input += synapse0x3590b50();
   input += synapse0x3590b90();
   input += synapse0x3590bd0();
   input += synapse0x3590660();
   input += synapse0x35906a0();
   input += synapse0x358d430();
   input += synapse0x358d470();
   input += synapse0x358d4b0();
   input += synapse0x358d4f0();
   input += synapse0x358d530();
   input += synapse0x358d570();
   return input;
}

double NNfunction-NN_5_7::neuron0x35904d0() {
   double input = input0x35904d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x358d5b0() {
   double input = 0.958651;
   input += synapse0x358d8f0();
   input += synapse0x358d930();
   input += synapse0x358d970();
   input += synapse0x358d9b0();
   input += synapse0x358d9f0();
   input += synapse0x358da30();
   input += synapse0x358da70();
   input += synapse0x358dab0();
   input += synapse0x358daf0();
   input += synapse0x358db30();
   input += synapse0x358db70();
   input += synapse0x358dbb0();
   input += synapse0x358dbf0();
   input += synapse0x3591d30();
   input += synapse0x3591d70();
   input += synapse0x3591db0();
   input += synapse0x358d740();
   input += synapse0x358d780();
   input += synapse0x3591f00();
   input += synapse0x3591f40();
   input += synapse0x3591f80();
   input += synapse0x3591fc0();
   input += synapse0x3592000();
   input += synapse0x3592040();
   return input;
}

double NNfunction-NN_5_7::neuron0x358d5b0() {
   double input = input0x358d5b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x3592080() {
   double input = -1.00927;
   input += synapse0x35923c0();
   input += synapse0x3592400();
   input += synapse0x3592440();
   input += synapse0x3592480();
   input += synapse0x35924c0();
   input += synapse0x3592500();
   input += synapse0x3592540();
   input += synapse0x3592580();
   input += synapse0x35925c0();
   input += synapse0x3592600();
   input += synapse0x3592640();
   input += synapse0x3592680();
   input += synapse0x35926c0();
   input += synapse0x3592700();
   input += synapse0x3592740();
   input += synapse0x3592780();
   input += synapse0x3592210();
   input += synapse0x3592250();
   input += synapse0x35928d0();
   input += synapse0x3592910();
   input += synapse0x3592950();
   input += synapse0x3592990();
   input += synapse0x35929d0();
   input += synapse0x3592a10();
   return input;
}

double NNfunction-NN_5_7::neuron0x3592080() {
   double input = input0x3592080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x3592a50() {
   double input = -3.00096;
   input += synapse0x3592d90();
   input += synapse0x3592dd0();
   input += synapse0x3592e10();
   input += synapse0x3592e50();
   input += synapse0x3592e90();
   input += synapse0x3592ed0();
   input += synapse0x3592f10();
   input += synapse0x3592f50();
   input += synapse0x3592f90();
   input += synapse0x3592fd0();
   input += synapse0x3593010();
   input += synapse0x3593050();
   input += synapse0x3593090();
   input += synapse0x35930d0();
   input += synapse0x3593110();
   input += synapse0x3593150();
   input += synapse0x3592be0();
   input += synapse0x3592c20();
   input += synapse0x35932a0();
   input += synapse0x35932e0();
   input += synapse0x3593320();
   input += synapse0x3593360();
   input += synapse0x35933a0();
   input += synapse0x35933e0();
   return input;
}

double NNfunction-NN_5_7::neuron0x3592a50() {
   double input = input0x3592a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x3593420() {
   double input = 0.397861;
   input += synapse0x3593760();
   input += synapse0x35937a0();
   input += synapse0x35937e0();
   input += synapse0x3593820();
   input += synapse0x3593860();
   input += synapse0x35938a0();
   input += synapse0x35938e0();
   input += synapse0x3593920();
   input += synapse0x3593960();
   input += synapse0x35939a0();
   input += synapse0x35939e0();
   input += synapse0x3593a20();
   input += synapse0x3593a60();
   input += synapse0x3593aa0();
   input += synapse0x3593ae0();
   input += synapse0x3593b20();
   input += synapse0x35935b0();
   input += synapse0x35935f0();
   input += synapse0x3593c70();
   input += synapse0x3593cb0();
   input += synapse0x3593cf0();
   input += synapse0x3593d30();
   input += synapse0x3593d70();
   input += synapse0x3593db0();
   return input;
}

double NNfunction-NN_5_7::neuron0x3593420() {
   double input = input0x3593420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x3593df0() {
   double input = 1.33633;
   input += synapse0x3594130();
   input += synapse0x35843b0();
   input += synapse0x35843f0();
   input += synapse0x35846f0();
   input += synapse0x3584730();
   input += synapse0x3584a30();
   input += synapse0x3584a70();
   input += synapse0x3584d70();
   input += synapse0x3584db0();
   input += synapse0x35850b0();
   input += synapse0x35850f0();
   input += synapse0x35853f0();
   input += synapse0x3585430();
   input += synapse0x3585730();
   input += synapse0x3585770();
   input += synapse0x3585a70();
   input += synapse0x3585ab0();
   input += synapse0x3585db0();
   input += synapse0x3585df0();
   input += synapse0x35860f0();
   input += synapse0x3586130();
   input += synapse0x3586430();
   input += synapse0x3586470();
   input += synapse0x3586770();
   return input;
}

double NNfunction-NN_5_7::neuron0x3593df0() {
   double input = input0x3593df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x3595c00() {
   double input = -0.774301;
   input += synapse0x35867b0();
   input += synapse0x3587470();
   input += synapse0x35874b0();
   input += synapse0x3593f80();
   input += synapse0x3593fc0();
   input += synapse0x35877b0();
   input += synapse0x35877f0();
   input += synapse0x3587d10();
   input += synapse0x3587d50();
   input += synapse0x3588050();
   input += synapse0x3588090();
   input += synapse0x3588390();
   input += synapse0x35883d0();
   input += synapse0x35886d0();
   input += synapse0x3588710();
   input += synapse0x3588a10();
   input += synapse0x3588a50();
   input += synapse0x3588d50();
   input += synapse0x3588d90();
   input += synapse0x3589090();
   input += synapse0x35890d0();
   input += synapse0x3586ab0();
   input += synapse0x3586af0();
   input += synapse0x3595ea0();
   return input;
}

double NNfunction-NN_5_7::neuron0x3595c00() {
   double input = input0x3595c00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x3595ee0() {
   double input = -0.436531;
   input += synapse0x3596220();
   input += synapse0x3596260();
   input += synapse0x35962a0();
   input += synapse0x35962e0();
   input += synapse0x3596320();
   input += synapse0x3596360();
   input += synapse0x35963a0();
   input += synapse0x35963e0();
   input += synapse0x3596420();
   input += synapse0x3596460();
   input += synapse0x35964a0();
   input += synapse0x35964e0();
   input += synapse0x3596520();
   input += synapse0x3596560();
   input += synapse0x35965a0();
   input += synapse0x35965e0();
   input += synapse0x3596070();
   input += synapse0x35960b0();
   input += synapse0x3596730();
   input += synapse0x3596770();
   input += synapse0x35967b0();
   input += synapse0x35967f0();
   input += synapse0x3596830();
   input += synapse0x3596870();
   return input;
}

double NNfunction-NN_5_7::neuron0x3595ee0() {
   double input = input0x3595ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x35968b0() {
   double input = 0.760485;
   input += synapse0x3596bf0();
   input += synapse0x3596c30();
   input += synapse0x3596c70();
   input += synapse0x3596cb0();
   input += synapse0x3596cf0();
   input += synapse0x3596d30();
   input += synapse0x3596d70();
   input += synapse0x3596db0();
   input += synapse0x3596df0();
   input += synapse0x3596e30();
   input += synapse0x3596e70();
   input += synapse0x3596eb0();
   input += synapse0x3596ef0();
   input += synapse0x3596f30();
   input += synapse0x3596f70();
   input += synapse0x3596fb0();
   input += synapse0x3596a40();
   input += synapse0x3596a80();
   input += synapse0x3597100();
   input += synapse0x3597140();
   input += synapse0x3597180();
   input += synapse0x35971c0();
   input += synapse0x3597200();
   input += synapse0x3597240();
   return input;
}

double NNfunction-NN_5_7::neuron0x35968b0() {
   double input = input0x35968b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x3597280() {
   double input = 2.28303;
   input += synapse0x35975c0();
   input += synapse0x3597600();
   input += synapse0x3597640();
   input += synapse0x3597680();
   input += synapse0x35976c0();
   input += synapse0x3597700();
   input += synapse0x3597740();
   input += synapse0x3597780();
   input += synapse0x35977c0();
   input += synapse0x3597800();
   input += synapse0x3597840();
   input += synapse0x3597880();
   input += synapse0x35978c0();
   input += synapse0x3597900();
   input += synapse0x3597940();
   input += synapse0x3597980();
   input += synapse0x3597410();
   input += synapse0x3597450();
   input += synapse0x3597ad0();
   input += synapse0x3597b10();
   input += synapse0x3597b50();
   input += synapse0x3597b90();
   input += synapse0x3597bd0();
   input += synapse0x3597c10();
   return input;
}

double NNfunction-NN_5_7::neuron0x3597280() {
   double input = input0x3597280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x3597c50() {
   double input = 0.0438155;
   input += synapse0x3597f90();
   input += synapse0x3597fd0();
   input += synapse0x3598010();
   input += synapse0x3598050();
   input += synapse0x3598090();
   input += synapse0x35980d0();
   input += synapse0x3598110();
   input += synapse0x3598150();
   input += synapse0x3598190();
   input += synapse0x35981d0();
   input += synapse0x3598210();
   input += synapse0x3598250();
   input += synapse0x3598290();
   input += synapse0x35982d0();
   input += synapse0x3598310();
   input += synapse0x3598350();
   input += synapse0x3597de0();
   input += synapse0x3597e20();
   input += synapse0x35984a0();
   input += synapse0x35984e0();
   input += synapse0x3598520();
   input += synapse0x3598560();
   input += synapse0x35985a0();
   input += synapse0x35985e0();
   return input;
}

double NNfunction-NN_5_7::neuron0x3597c50() {
   double input = input0x3597c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x3598620() {
   double input = 0.57852;
   input += synapse0x3598960();
   input += synapse0x35989a0();
   input += synapse0x35989e0();
   input += synapse0x3598a20();
   input += synapse0x3598a60();
   input += synapse0x3598aa0();
   input += synapse0x3598ae0();
   input += synapse0x3598b20();
   input += synapse0x3598b60();
   input += synapse0x3590d20();
   input += synapse0x3590d60();
   input += synapse0x3590da0();
   input += synapse0x3590de0();
   input += synapse0x3590e20();
   input += synapse0x3590e60();
   input += synapse0x3590ea0();
   input += synapse0x35987b0();
   input += synapse0x35987f0();
   input += synapse0x3590ff0();
   input += synapse0x3591030();
   input += synapse0x3591070();
   input += synapse0x35910b0();
   input += synapse0x35910f0();
   input += synapse0x3591130();
   return input;
}

double NNfunction-NN_5_7::neuron0x3598620() {
   double input = input0x3598620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x3591170() {
   double input = 0.538701;
   input += synapse0x35914b0();
   input += synapse0x35914f0();
   input += synapse0x3591530();
   input += synapse0x3591570();
   input += synapse0x35915b0();
   input += synapse0x35915f0();
   input += synapse0x3591630();
   input += synapse0x3591670();
   input += synapse0x35916b0();
   input += synapse0x35916f0();
   input += synapse0x3591730();
   input += synapse0x3591770();
   input += synapse0x35917b0();
   input += synapse0x35917f0();
   input += synapse0x3591830();
   input += synapse0x3591870();
   input += synapse0x3591300();
   input += synapse0x3591340();
   input += synapse0x35919c0();
   input += synapse0x3591a00();
   input += synapse0x3591a40();
   input += synapse0x3591a80();
   input += synapse0x3591ac0();
   input += synapse0x3591b00();
   return input;
}

double NNfunction-NN_5_7::neuron0x3591170() {
   double input = input0x3591170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x3591b40() {
   double input = -1.51862;
   input += synapse0x3591cd0();
   input += synapse0x359ad60();
   input += synapse0x359ada0();
   input += synapse0x359ade0();
   input += synapse0x359ae20();
   input += synapse0x359ae60();
   input += synapse0x359aea0();
   input += synapse0x359aee0();
   input += synapse0x359af20();
   input += synapse0x359af60();
   input += synapse0x359afa0();
   input += synapse0x359afe0();
   input += synapse0x359b020();
   input += synapse0x359b060();
   input += synapse0x359b0a0();
   input += synapse0x359b0e0();
   input += synapse0x359abb0();
   input += synapse0x359abf0();
   input += synapse0x359b230();
   input += synapse0x359b270();
   input += synapse0x359b2b0();
   input += synapse0x359b2f0();
   input += synapse0x359b330();
   input += synapse0x359b370();
   return input;
}

double NNfunction-NN_5_7::neuron0x3591b40() {
   double input = input0x3591b40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x359b3b0() {
   double input = 3.83078;
   input += synapse0x359b6f0();
   input += synapse0x359b730();
   input += synapse0x359b770();
   input += synapse0x359b7b0();
   input += synapse0x359b7f0();
   input += synapse0x359b830();
   input += synapse0x359b870();
   input += synapse0x359b8b0();
   input += synapse0x359b8f0();
   input += synapse0x359b930();
   input += synapse0x359b970();
   input += synapse0x359b9b0();
   input += synapse0x359b9f0();
   input += synapse0x359ba30();
   input += synapse0x359ba70();
   input += synapse0x359bab0();
   input += synapse0x359b540();
   input += synapse0x359b580();
   input += synapse0x359bc00();
   input += synapse0x359bc40();
   input += synapse0x359bc80();
   input += synapse0x359bcc0();
   input += synapse0x359bd00();
   input += synapse0x359bd40();
   return input;
}

double NNfunction-NN_5_7::neuron0x359b3b0() {
   double input = input0x359b3b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x359bd80() {
   double input = 0.93347;
   input += synapse0x359c0c0();
   input += synapse0x359c100();
   input += synapse0x359c140();
   input += synapse0x359c180();
   input += synapse0x359c1c0();
   input += synapse0x359c200();
   input += synapse0x359c240();
   input += synapse0x359c280();
   input += synapse0x359c2c0();
   input += synapse0x359c300();
   input += synapse0x359c340();
   input += synapse0x359c380();
   input += synapse0x359c3c0();
   input += synapse0x359c400();
   input += synapse0x359c440();
   input += synapse0x359c480();
   input += synapse0x359bf10();
   input += synapse0x359bf50();
   input += synapse0x359c5d0();
   input += synapse0x359c610();
   input += synapse0x359c650();
   input += synapse0x359c690();
   input += synapse0x359c6d0();
   input += synapse0x359c710();
   return input;
}

double NNfunction-NN_5_7::neuron0x359bd80() {
   double input = input0x359bd80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x359c750() {
   double input = -0.478778;
   input += synapse0x359ca90();
   input += synapse0x359cad0();
   input += synapse0x359cb10();
   input += synapse0x359cb50();
   input += synapse0x359cb90();
   input += synapse0x359cbd0();
   input += synapse0x359cc10();
   input += synapse0x359cc50();
   input += synapse0x359cc90();
   input += synapse0x359ccd0();
   input += synapse0x359cd10();
   input += synapse0x359cd50();
   input += synapse0x359cd90();
   input += synapse0x359cdd0();
   input += synapse0x359ce10();
   input += synapse0x359ce50();
   input += synapse0x359c8e0();
   input += synapse0x359c920();
   input += synapse0x359cfa0();
   input += synapse0x359cfe0();
   input += synapse0x359d020();
   input += synapse0x359d060();
   input += synapse0x359d0a0();
   input += synapse0x359d0e0();
   return input;
}

double NNfunction-NN_5_7::neuron0x359c750() {
   double input = input0x359c750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x359d120() {
   double input = -8.5725;
   input += synapse0x359d460();
   input += synapse0x359d4a0();
   input += synapse0x359d4e0();
   input += synapse0x359d520();
   input += synapse0x359d560();
   input += synapse0x359d5a0();
   input += synapse0x359d5e0();
   input += synapse0x359d620();
   input += synapse0x359d660();
   input += synapse0x359d6a0();
   input += synapse0x359d6e0();
   input += synapse0x359d720();
   input += synapse0x359d760();
   input += synapse0x359d7a0();
   input += synapse0x359d7e0();
   input += synapse0x359d820();
   input += synapse0x359d2b0();
   input += synapse0x359d2f0();
   input += synapse0x359d970();
   input += synapse0x359d9b0();
   input += synapse0x359d9f0();
   input += synapse0x359da30();
   input += synapse0x359da70();
   input += synapse0x359dab0();
   return input;
}

double NNfunction-NN_5_7::neuron0x359d120() {
   double input = input0x359d120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x359daf0() {
   double input = 1.75228;
   input += synapse0x359de30();
   input += synapse0x359de70();
   input += synapse0x359deb0();
   input += synapse0x359def0();
   input += synapse0x359df30();
   input += synapse0x359df70();
   input += synapse0x359dfb0();
   input += synapse0x359dff0();
   input += synapse0x359e030();
   input += synapse0x359e070();
   input += synapse0x359e0b0();
   input += synapse0x359e0f0();
   input += synapse0x359e130();
   input += synapse0x359e170();
   input += synapse0x359e1b0();
   input += synapse0x359e1f0();
   input += synapse0x359dc80();
   input += synapse0x359dcc0();
   input += synapse0x359e340();
   input += synapse0x359e380();
   input += synapse0x359e3c0();
   input += synapse0x359e400();
   input += synapse0x359e440();
   input += synapse0x359e480();
   return input;
}

double NNfunction-NN_5_7::neuron0x359daf0() {
   double input = input0x359daf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x359e4c0() {
   double input = 0.509033;
   input += synapse0x359e800();
   input += synapse0x359e840();
   input += synapse0x359e880();
   input += synapse0x359e8c0();
   input += synapse0x359e900();
   input += synapse0x359e940();
   input += synapse0x359e980();
   input += synapse0x359e9c0();
   input += synapse0x359ea00();
   input += synapse0x359ea40();
   input += synapse0x359ea80();
   input += synapse0x359eac0();
   input += synapse0x359eb00();
   input += synapse0x359eb40();
   input += synapse0x359eb80();
   input += synapse0x359ebc0();
   input += synapse0x359e650();
   input += synapse0x359e690();
   input += synapse0x359ed10();
   input += synapse0x359ed50();
   input += synapse0x359ed90();
   input += synapse0x359edd0();
   input += synapse0x359ee10();
   input += synapse0x359ee50();
   return input;
}

double NNfunction-NN_5_7::neuron0x359e4c0() {
   double input = input0x359e4c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x359ee90() {
   double input = -3.91295;
   input += synapse0x359f1d0();
   input += synapse0x359f210();
   input += synapse0x359f250();
   input += synapse0x359f290();
   input += synapse0x359f2d0();
   input += synapse0x359f310();
   input += synapse0x359f350();
   input += synapse0x359f390();
   input += synapse0x359f3d0();
   input += synapse0x359f410();
   input += synapse0x359f450();
   input += synapse0x359f490();
   input += synapse0x359f4d0();
   input += synapse0x359f510();
   input += synapse0x359f550();
   input += synapse0x359f590();
   input += synapse0x359f020();
   input += synapse0x359f060();
   input += synapse0x359f6e0();
   input += synapse0x359f720();
   input += synapse0x359f760();
   input += synapse0x359f7a0();
   input += synapse0x359f7e0();
   input += synapse0x359f820();
   return input;
}

double NNfunction-NN_5_7::neuron0x359ee90() {
   double input = input0x359ee90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x359f860() {
   double input = -0.854502;
   input += synapse0x359fba0();
   input += synapse0x3594170();
   input += synapse0x35941b0();
   input += synapse0x35941f0();
   input += synapse0x3594440();
   input += synapse0x3594480();
   input += synapse0x35944c0();
   input += synapse0x3594710();
   input += synapse0x3594750();
   input += synapse0x35949a0();
   input += synapse0x35949e0();
   input += synapse0x3594a20();
   input += synapse0x3594c70();
   input += synapse0x3594cb0();
   input += synapse0x3594f00();
   input += synapse0x3594f40();
   input += synapse0x359f9f0();
   input += synapse0x359fa30();
   input += synapse0x3595090();
   input += synapse0x35955a0();
   input += synapse0x35955e0();
   input += synapse0x3595620();
   input += synapse0x3595870();
   input += synapse0x35958b0();
   return input;
}

double NNfunction-NN_5_7::neuron0x359f860() {
   double input = input0x359f860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x35958f0() {
   double input = 0.433544;
   input += synapse0x3595160();
   input += synapse0x35951a0();
   input += synapse0x35951e0();
   input += synapse0x3595220();
   input += synapse0x3595ba0();
   input += synapse0x35a1ef0();
   input += synapse0x35a1f30();
   input += synapse0x35a1f70();
   input += synapse0x35a1fb0();
   input += synapse0x35a1ff0();
   input += synapse0x35a2030();
   input += synapse0x35a2070();
   input += synapse0x35a20b0();
   input += synapse0x35a20f0();
   input += synapse0x35a2130();
   input += synapse0x35a2170();
   input += synapse0x3595a80();
   input += synapse0x3595ac0();
   input += synapse0x35a22c0();
   input += synapse0x35a2300();
   input += synapse0x35a2340();
   input += synapse0x35a2380();
   input += synapse0x35a23c0();
   input += synapse0x35a2400();
   return input;
}

double NNfunction-NN_5_7::neuron0x35958f0() {
   double input = input0x35958f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x35a2440() {
   double input = 2.60058;
   input += synapse0x35a2780();
   input += synapse0x35a27c0();
   input += synapse0x35a2800();
   input += synapse0x35a2840();
   input += synapse0x35a2880();
   input += synapse0x35a28c0();
   input += synapse0x35a2900();
   input += synapse0x35a2940();
   input += synapse0x35a2980();
   input += synapse0x35a29c0();
   input += synapse0x35a2a00();
   input += synapse0x35a2a40();
   input += synapse0x35a2a80();
   input += synapse0x35a2ac0();
   input += synapse0x35a2b00();
   input += synapse0x35a2b40();
   input += synapse0x35a25d0();
   input += synapse0x35a2610();
   input += synapse0x35a2c90();
   input += synapse0x35a2cd0();
   input += synapse0x35a2d10();
   input += synapse0x35a2d50();
   input += synapse0x35a2d90();
   input += synapse0x35a2dd0();
   return input;
}

double NNfunction-NN_5_7::neuron0x35a2440() {
   double input = input0x35a2440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x35a2e10() {
   double input = -2.34759;
   input += synapse0x35a3150();
   input += synapse0x35a3190();
   input += synapse0x35a31d0();
   input += synapse0x35a3210();
   input += synapse0x35a3250();
   input += synapse0x35a3290();
   input += synapse0x35a32d0();
   input += synapse0x35a3310();
   input += synapse0x35a3350();
   input += synapse0x35a3390();
   input += synapse0x35a33d0();
   input += synapse0x35a3410();
   input += synapse0x35a3450();
   input += synapse0x35a3490();
   input += synapse0x35a34d0();
   input += synapse0x35a3510();
   input += synapse0x35a2fa0();
   input += synapse0x35a2fe0();
   input += synapse0x35a3660();
   input += synapse0x35a36a0();
   input += synapse0x35a36e0();
   input += synapse0x35a3720();
   input += synapse0x35a3760();
   input += synapse0x35a37a0();
   return input;
}

double NNfunction-NN_5_7::neuron0x35a2e10() {
   double input = input0x35a2e10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x35a37e0() {
   double input = -0.307296;
   input += synapse0x35a3b20();
   input += synapse0x35a3b60();
   input += synapse0x35a3ba0();
   input += synapse0x35a3be0();
   input += synapse0x35a3c20();
   input += synapse0x35a3c60();
   input += synapse0x35a3ca0();
   input += synapse0x35a3ce0();
   input += synapse0x35a3d20();
   input += synapse0x35a3d60();
   input += synapse0x35a3da0();
   input += synapse0x35a3de0();
   input += synapse0x35a3e20();
   input += synapse0x35a3e60();
   input += synapse0x35a3ea0();
   input += synapse0x35a3ee0();
   input += synapse0x35a3970();
   input += synapse0x35a39b0();
   input += synapse0x35a4030();
   input += synapse0x35a4070();
   input += synapse0x35a40b0();
   input += synapse0x35a40f0();
   input += synapse0x35a4130();
   input += synapse0x35a4170();
   return input;
}

double NNfunction-NN_5_7::neuron0x35a37e0() {
   double input = input0x35a37e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x35a41b0() {
   double input = 3.04303;
   input += synapse0x35a44f0();
   input += synapse0x35a4530();
   input += synapse0x35a4570();
   input += synapse0x35a45b0();
   input += synapse0x35a45f0();
   input += synapse0x35a4630();
   input += synapse0x35a4670();
   input += synapse0x35a46b0();
   input += synapse0x35a46f0();
   input += synapse0x35a4730();
   input += synapse0x35a4770();
   input += synapse0x35a47b0();
   input += synapse0x35a47f0();
   input += synapse0x35a4830();
   input += synapse0x35a4870();
   input += synapse0x35a48b0();
   input += synapse0x35a4340();
   input += synapse0x35a4380();
   input += synapse0x35a4a00();
   input += synapse0x35a4a40();
   input += synapse0x35a4a80();
   input += synapse0x35a4ac0();
   input += synapse0x35a4b00();
   input += synapse0x35a4b40();
   return input;
}

double NNfunction-NN_5_7::neuron0x35a41b0() {
   double input = input0x35a41b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x35a4b80() {
   double input = -2.3647;
   input += synapse0x35a4ec0();
   input += synapse0x35a4f00();
   input += synapse0x35a4f40();
   input += synapse0x35a4f80();
   input += synapse0x35a4fc0();
   input += synapse0x35a5000();
   input += synapse0x35a5040();
   input += synapse0x35a5080();
   input += synapse0x35a50c0();
   input += synapse0x35a5100();
   input += synapse0x35a5140();
   input += synapse0x35a5180();
   input += synapse0x35a51c0();
   input += synapse0x35a5200();
   input += synapse0x35a5240();
   input += synapse0x35a5280();
   input += synapse0x35a4d10();
   input += synapse0x35a4d50();
   input += synapse0x35a53d0();
   input += synapse0x35a5410();
   input += synapse0x35a5450();
   input += synapse0x35a5490();
   input += synapse0x35a54d0();
   input += synapse0x35a5510();
   return input;
}

double NNfunction-NN_5_7::neuron0x35a4b80() {
   double input = input0x35a4b80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x35a5550() {
   double input = 0.988537;
   input += synapse0x35a5890();
   input += synapse0x35a58d0();
   input += synapse0x35a5910();
   input += synapse0x35a5950();
   input += synapse0x35a5990();
   input += synapse0x35a59d0();
   input += synapse0x35a5a10();
   input += synapse0x35a5a50();
   input += synapse0x35a5a90();
   input += synapse0x35a5ad0();
   input += synapse0x35a5b10();
   input += synapse0x35a5b50();
   input += synapse0x35a5b90();
   input += synapse0x35a5bd0();
   input += synapse0x35a5c10();
   input += synapse0x35a5c50();
   input += synapse0x35a56e0();
   input += synapse0x35a5720();
   input += synapse0x35a5da0();
   input += synapse0x35a5de0();
   input += synapse0x35a5e20();
   input += synapse0x35a5e60();
   input += synapse0x35a5ea0();
   input += synapse0x35a5ee0();
   return input;
}

double NNfunction-NN_5_7::neuron0x35a5550() {
   double input = input0x35a5550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x35a5f20() {
   double input = -5.05292;
   input += synapse0x35a6260();
   input += synapse0x35a62a0();
   input += synapse0x35a62e0();
   input += synapse0x35a6320();
   input += synapse0x35a6360();
   input += synapse0x35a63a0();
   input += synapse0x35a63e0();
   input += synapse0x35a6420();
   input += synapse0x35a6460();
   input += synapse0x35a64a0();
   input += synapse0x35a64e0();
   input += synapse0x35a6520();
   input += synapse0x35a6560();
   input += synapse0x35a65a0();
   input += synapse0x35a65e0();
   input += synapse0x35a6620();
   input += synapse0x35a60b0();
   input += synapse0x35a60f0();
   input += synapse0x35a6770();
   input += synapse0x35a67b0();
   input += synapse0x35a67f0();
   input += synapse0x35a6830();
   input += synapse0x35a6870();
   input += synapse0x35a68b0();
   return input;
}

double NNfunction-NN_5_7::neuron0x35a5f20() {
   double input = input0x35a5f20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x35a68f0() {
   double input = -3.72408;
   input += synapse0x358f360();
   input += synapse0x358f3a0();
   input += synapse0x358f3e0();
   input += synapse0x358f420();
   input += synapse0x358f460();
   input += synapse0x358f4a0();
   input += synapse0x358f4e0();
   input += synapse0x358f520();
   input += synapse0x35a7040();
   input += synapse0x35a7080();
   input += synapse0x35a70c0();
   input += synapse0x35a7100();
   input += synapse0x35a7140();
   input += synapse0x35a7180();
   input += synapse0x35a71c0();
   input += synapse0x35a7200();
   input += synapse0x35a6a80();
   input += synapse0x35a6ac0();
   input += synapse0x35a7350();
   input += synapse0x35a7390();
   input += synapse0x35a73d0();
   input += synapse0x35a7410();
   input += synapse0x35a7450();
   input += synapse0x35a7490();
   return input;
}

double NNfunction-NN_5_7::neuron0x35a68f0() {
   double input = input0x35a68f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x35a74d0() {
   double input = -3.10017;
   input += synapse0x35a7810();
   input += synapse0x35a7850();
   input += synapse0x35a7890();
   input += synapse0x35a78d0();
   input += synapse0x35a7910();
   input += synapse0x35a7950();
   input += synapse0x35a7990();
   input += synapse0x35a79d0();
   input += synapse0x35a7a10();
   input += synapse0x35a7a50();
   input += synapse0x35a7a90();
   input += synapse0x35a7ad0();
   input += synapse0x35a7b10();
   input += synapse0x35a7b50();
   input += synapse0x35a7b90();
   input += synapse0x35a7bd0();
   input += synapse0x35a7660();
   input += synapse0x35a76a0();
   input += synapse0x35a7d20();
   input += synapse0x35a7d60();
   input += synapse0x35a7da0();
   input += synapse0x35a7de0();
   input += synapse0x35a7e20();
   input += synapse0x35a7e60();
   return input;
}

double NNfunction-NN_5_7::neuron0x35a74d0() {
   double input = input0x35a74d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x35a7ea0() {
   double input = -0.0119445;
   input += synapse0x35a81e0();
   input += synapse0x35a8220();
   input += synapse0x35a8260();
   input += synapse0x35a82a0();
   input += synapse0x35a82e0();
   input += synapse0x35a8320();
   input += synapse0x35a8360();
   input += synapse0x35a83a0();
   input += synapse0x35a83e0();
   input += synapse0x35a8420();
   input += synapse0x35a8460();
   input += synapse0x35a84a0();
   input += synapse0x35a84e0();
   input += synapse0x35a8520();
   input += synapse0x35a8560();
   input += synapse0x35a85a0();
   input += synapse0x35a8030();
   input += synapse0x35a8070();
   input += synapse0x3598ba0();
   input += synapse0x3598be0();
   input += synapse0x3598c20();
   input += synapse0x3598c60();
   input += synapse0x3598ca0();
   input += synapse0x3598ce0();
   return input;
}

double NNfunction-NN_5_7::neuron0x35a7ea0() {
   double input = input0x35a7ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x3598d20() {
   double input = -2.25453;
   input += synapse0x3599060();
   input += synapse0x35990a0();
   input += synapse0x35990e0();
   input += synapse0x3599120();
   input += synapse0x3599160();
   input += synapse0x35991a0();
   input += synapse0x35991e0();
   input += synapse0x3599220();
   input += synapse0x3599260();
   input += synapse0x35992a0();
   input += synapse0x35992e0();
   input += synapse0x3599320();
   input += synapse0x3599360();
   input += synapse0x35993a0();
   input += synapse0x35993e0();
   input += synapse0x3599420();
   input += synapse0x3598eb0();
   input += synapse0x3598ef0();
   input += synapse0x3599570();
   input += synapse0x35995b0();
   input += synapse0x35995f0();
   input += synapse0x3599630();
   input += synapse0x3599670();
   input += synapse0x35996b0();
   return input;
}

double NNfunction-NN_5_7::neuron0x3598d20() {
   double input = input0x3598d20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x35996f0() {
   double input = -0.443846;
   input += synapse0x3599a30();
   input += synapse0x3599a70();
   input += synapse0x3599ab0();
   input += synapse0x3599af0();
   input += synapse0x3599b30();
   input += synapse0x3599b70();
   input += synapse0x3599bb0();
   input += synapse0x3599bf0();
   input += synapse0x3599c30();
   input += synapse0x3599c70();
   input += synapse0x3599cb0();
   input += synapse0x3599cf0();
   input += synapse0x3599d30();
   input += synapse0x3599d70();
   input += synapse0x3599db0();
   input += synapse0x3599df0();
   input += synapse0x3599880();
   input += synapse0x35998c0();
   input += synapse0x3599f40();
   input += synapse0x3599f80();
   input += synapse0x3599fc0();
   input += synapse0x359a000();
   input += synapse0x359a040();
   input += synapse0x359a080();
   return input;
}

double NNfunction-NN_5_7::neuron0x35996f0() {
   double input = input0x35996f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x359a0c0() {
   double input = 0.828491;
   input += synapse0x359a400();
   input += synapse0x359a440();
   input += synapse0x359a480();
   input += synapse0x359a4c0();
   input += synapse0x359a500();
   input += synapse0x359a540();
   input += synapse0x359a580();
   input += synapse0x359a5c0();
   input += synapse0x359a600();
   input += synapse0x359a640();
   input += synapse0x359a680();
   input += synapse0x359a6c0();
   input += synapse0x359a700();
   input += synapse0x359a740();
   input += synapse0x359a780();
   input += synapse0x359a7c0();
   input += synapse0x359a250();
   input += synapse0x359a290();
   input += synapse0x359a910();
   input += synapse0x359a950();
   input += synapse0x359a990();
   input += synapse0x359a9d0();
   input += synapse0x359aa10();
   input += synapse0x359aa50();
   return input;
}

double NNfunction-NN_5_7::neuron0x359a0c0() {
   double input = input0x359a0c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x35ac700() {
   double input = 4.13974;
   input += synapse0x35ac920();
   input += synapse0x35ac960();
   input += synapse0x35ac9a0();
   input += synapse0x35ac9e0();
   input += synapse0x35aca20();
   input += synapse0x35aca60();
   input += synapse0x35acaa0();
   input += synapse0x35acae0();
   input += synapse0x35acb20();
   input += synapse0x35acb60();
   input += synapse0x35acba0();
   input += synapse0x35acbe0();
   input += synapse0x35acc20();
   input += synapse0x35acc60();
   input += synapse0x35acca0();
   input += synapse0x35acce0();
   input += synapse0x359aa90();
   input += synapse0x359aad0();
   input += synapse0x35ace30();
   input += synapse0x35ace70();
   input += synapse0x35aceb0();
   input += synapse0x35acef0();
   input += synapse0x35acf30();
   input += synapse0x35acf70();
   return input;
}

double NNfunction-NN_5_7::neuron0x35ac700() {
   double input = input0x35ac700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x35acfb0() {
   double input = 0.597437;
   input += synapse0x35ad2f0();
   input += synapse0x35ad330();
   input += synapse0x35ad370();
   input += synapse0x35ad3b0();
   input += synapse0x35ad3f0();
   input += synapse0x35ad430();
   input += synapse0x35ad470();
   input += synapse0x35ad4b0();
   input += synapse0x35ad4f0();
   input += synapse0x35ad530();
   input += synapse0x35ad570();
   input += synapse0x35ad5b0();
   input += synapse0x35ad5f0();
   input += synapse0x35ad630();
   input += synapse0x35ad670();
   input += synapse0x35ad6b0();
   input += synapse0x35ad140();
   input += synapse0x35ad180();
   input += synapse0x35ad800();
   input += synapse0x35ad840();
   input += synapse0x35ad880();
   input += synapse0x35ad8c0();
   input += synapse0x35ad900();
   input += synapse0x35ad940();
   return input;
}

double NNfunction-NN_5_7::neuron0x35acfb0() {
   double input = input0x35acfb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x35ad980() {
   double input = 0.85888;
   input += synapse0x35adcc0();
   input += synapse0x35add00();
   input += synapse0x35add40();
   input += synapse0x35add80();
   input += synapse0x35addc0();
   input += synapse0x35ade00();
   input += synapse0x35ade40();
   input += synapse0x35ade80();
   input += synapse0x35adec0();
   input += synapse0x35adf00();
   input += synapse0x35adf40();
   input += synapse0x35adf80();
   input += synapse0x35adfc0();
   input += synapse0x35ae000();
   input += synapse0x35ae040();
   input += synapse0x35ae080();
   input += synapse0x35adb10();
   input += synapse0x35adb50();
   input += synapse0x35ae1d0();
   input += synapse0x35ae210();
   input += synapse0x35ae250();
   input += synapse0x35ae290();
   input += synapse0x35ae2d0();
   input += synapse0x35ae310();
   return input;
}

double NNfunction-NN_5_7::neuron0x35ad980() {
   double input = input0x35ad980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x35ae350() {
   double input = -0.60642;
   input += synapse0x35ae690();
   input += synapse0x35ae6d0();
   input += synapse0x35ae710();
   input += synapse0x35ae750();
   input += synapse0x35ae790();
   input += synapse0x35ae7d0();
   input += synapse0x35ae810();
   input += synapse0x35ae850();
   input += synapse0x35ae890();
   input += synapse0x35ae8d0();
   input += synapse0x35ae910();
   input += synapse0x35ae950();
   input += synapse0x35ae990();
   input += synapse0x35ae9d0();
   input += synapse0x35aea10();
   input += synapse0x35aea50();
   input += synapse0x35ae4e0();
   input += synapse0x35ae520();
   input += synapse0x35aeba0();
   input += synapse0x35aebe0();
   input += synapse0x35aec20();
   input += synapse0x35aec60();
   input += synapse0x35aeca0();
   input += synapse0x35aece0();
   return input;
}

double NNfunction-NN_5_7::neuron0x35ae350() {
   double input = input0x35ae350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x35b5550() {
   double input = 0.104001;
   input += synapse0x358a130();
   input += synapse0x358a170();
   input += synapse0x358b690();
   input += synapse0x358b6d0();
   input += synapse0x358d160();
   input += synapse0x358d1a0();
   input += synapse0x358df30();
   input += synapse0x358df70();
   input += synapse0x358e900();
   input += synapse0x358e940();
   input += synapse0x358f2d0();
   input += synapse0x358f310();
   input += synapse0x358fdb0();
   input += synapse0x358fdf0();
   input += synapse0x3590780();
   input += synapse0x35907c0();
   input += synapse0x358d860();
   input += synapse0x358d8a0();
   input += synapse0x3592330();
   input += synapse0x3592370();
   input += synapse0x3592d00();
   input += synapse0x3592d40();
   input += synapse0x35936d0();
   input += synapse0x3593710();
   input += synapse0x35940a0();
   input += synapse0x35940e0();
   input += synapse0x3587130();
   input += synapse0x3587170();
   input += synapse0x3596190();
   input += synapse0x35961d0();
   input += synapse0x3596b60();
   input += synapse0x3596ba0();
   input += synapse0x3597530();
   input += synapse0x3597570();
   input += synapse0x3597f00();
   input += synapse0x3597f40();
   input += synapse0x35988d0();
   input += synapse0x3598910();
   input += synapse0x3591420();
   input += synapse0x3591460();
   input += synapse0x359acd0();
   input += synapse0x359ad10();
   input += synapse0x359b660();
   input += synapse0x359b6a0();
   input += synapse0x359c030();
   input += synapse0x359c070();
   input += synapse0x359ca00();
   input += synapse0x359ca40();
   input += synapse0x359d3d0();
   input += synapse0x359d410();
   return input;
}

double NNfunction-NN_5_7::neuron0x35b5550() {
   double input = input0x35b5550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x35b58f0() {
   double input = -0.555877;
   input += synapse0x359fb10();
   input += synapse0x359fb50();
   input += synapse0x35950d0();
   input += synapse0x3595110();
   input += synapse0x35a26f0();
   input += synapse0x35a2730();
   input += synapse0x35a30c0();
   input += synapse0x35a3100();
   input += synapse0x35a3a90();
   input += synapse0x35a3ad0();
   input += synapse0x35a4460();
   input += synapse0x35a44a0();
   input += synapse0x35a4e30();
   input += synapse0x35a4e70();
   input += synapse0x35a5800();
   input += synapse0x35a5840();
   input += synapse0x35a61d0();
   input += synapse0x35a6210();
   input += synapse0x35a6ba0();
   input += synapse0x35a6be0();
   input += synapse0x35a7780();
   input += synapse0x35a77c0();
   input += synapse0x35a8150();
   input += synapse0x35a8190();
   input += synapse0x3598fd0();
   input += synapse0x3599010();
   input += synapse0x35999a0();
   input += synapse0x35999e0();
   input += synapse0x359a370();
   input += synapse0x359a3b0();
   input += synapse0x35ac890();
   input += synapse0x35ac8d0();
   input += synapse0x35ad260();
   input += synapse0x35ad2a0();
   input += synapse0x35adc30();
   input += synapse0x35adc70();
   input += synapse0x35ae600();
   input += synapse0x35ae640();
   input += synapse0x3589590();
   input += synapse0x35895d0();
   input += synapse0x359dda0();
   input += synapse0x359dde0();
   input += synapse0x35aed20();
   input += synapse0x35aed60();
   input += synapse0x35aeda0();
   input += synapse0x35aede0();
   input += synapse0x35b5c90();
   input += synapse0x35b5cd0();
   input += synapse0x35b5d10();
   input += synapse0x35b5d50();
   return input;
}

double NNfunction-NN_5_7::neuron0x35b58f0() {
   double input = input0x35b58f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x35b5d90() {
   double input = -0.411254;
   input += synapse0x35b60d0();
   input += synapse0x35b6110();
   input += synapse0x35b6150();
   input += synapse0x35b6190();
   input += synapse0x35b61d0();
   input += synapse0x35b6210();
   input += synapse0x35b6250();
   input += synapse0x35b6290();
   input += synapse0x35b62d0();
   input += synapse0x35b6310();
   input += synapse0x35b6350();
   input += synapse0x35b6390();
   input += synapse0x35b63d0();
   input += synapse0x35b6410();
   input += synapse0x35b6450();
   input += synapse0x35b6490();
   input += synapse0x35b5f20();
   input += synapse0x35b5f60();
   input += synapse0x35b65e0();
   input += synapse0x35b6620();
   input += synapse0x35b6660();
   input += synapse0x35b66a0();
   input += synapse0x35b66e0();
   input += synapse0x35b6720();
   input += synapse0x35b6760();
   input += synapse0x35b67a0();
   input += synapse0x35b67e0();
   input += synapse0x35b6820();
   input += synapse0x35b6860();
   input += synapse0x35b68a0();
   input += synapse0x35b68e0();
   input += synapse0x35b6920();
   input += synapse0x35b64d0();
   input += synapse0x35b6510();
   input += synapse0x35b6550();
   input += synapse0x35b6590();
   input += synapse0x35b6b70();
   input += synapse0x35b6bb0();
   input += synapse0x35b6bf0();
   input += synapse0x35b6c30();
   input += synapse0x35b6c70();
   input += synapse0x35b6cb0();
   input += synapse0x35b6cf0();
   input += synapse0x35b6d30();
   input += synapse0x35b6d70();
   input += synapse0x35b6db0();
   input += synapse0x35b6df0();
   input += synapse0x35b6e30();
   input += synapse0x35b6e70();
   input += synapse0x35b6eb0();
   return input;
}

double NNfunction-NN_5_7::neuron0x35b5d90() {
   double input = input0x35b5d90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x35b6ef0() {
   double input = 0.410533;
   input += synapse0x35b7230();
   input += synapse0x35b7270();
   input += synapse0x35b72b0();
   input += synapse0x35b72f0();
   input += synapse0x35b7330();
   input += synapse0x35b7370();
   input += synapse0x35b73b0();
   input += synapse0x35b73f0();
   input += synapse0x35b7430();
   input += synapse0x35b7470();
   input += synapse0x35b74b0();
   input += synapse0x35b74f0();
   input += synapse0x35b7530();
   input += synapse0x35b7570();
   input += synapse0x35b75b0();
   input += synapse0x35b75f0();
   input += synapse0x35b7080();
   input += synapse0x35b70c0();
   input += synapse0x35b7740();
   input += synapse0x35b7780();
   input += synapse0x35b77c0();
   input += synapse0x35b7800();
   input += synapse0x35b7840();
   input += synapse0x35b7880();
   input += synapse0x35b78c0();
   input += synapse0x35b7900();
   input += synapse0x35b7940();
   input += synapse0x35b7980();
   input += synapse0x35b79c0();
   input += synapse0x35b7a00();
   input += synapse0x35b7a40();
   input += synapse0x35b7a80();
   input += synapse0x35b7630();
   input += synapse0x35b7670();
   input += synapse0x35b76b0();
   input += synapse0x35b76f0();
   input += synapse0x35b7cd0();
   input += synapse0x35b7d10();
   input += synapse0x35b7d50();
   input += synapse0x35b7d90();
   input += synapse0x35b7dd0();
   input += synapse0x35b7e10();
   input += synapse0x35b7e50();
   input += synapse0x35b7e90();
   input += synapse0x35b7ed0();
   input += synapse0x35b7f10();
   input += synapse0x35b7f50();
   input += synapse0x35b7f90();
   input += synapse0x35b7fd0();
   input += synapse0x35b8010();
   return input;
}

double NNfunction-NN_5_7::neuron0x35b6ef0() {
   double input = input0x35b6ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x35b8050() {
   double input = -0.643329;
   input += synapse0x35b8390();
   input += synapse0x35b83d0();
   input += synapse0x35b8410();
   input += synapse0x35b8450();
   input += synapse0x35b8490();
   input += synapse0x35b84d0();
   input += synapse0x35b8510();
   input += synapse0x35b8550();
   input += synapse0x35b8590();
   input += synapse0x35b85d0();
   input += synapse0x35b8610();
   input += synapse0x35b8650();
   input += synapse0x35b8690();
   input += synapse0x35b86d0();
   input += synapse0x35b8710();
   input += synapse0x35b8750();
   input += synapse0x35b81e0();
   input += synapse0x35b8220();
   input += synapse0x35b88a0();
   input += synapse0x35b88e0();
   input += synapse0x35b8920();
   input += synapse0x35b8960();
   input += synapse0x35b89a0();
   input += synapse0x35b89e0();
   input += synapse0x35b8a20();
   input += synapse0x35b8a60();
   input += synapse0x35b8aa0();
   input += synapse0x35b8ae0();
   input += synapse0x35b8b20();
   input += synapse0x35b8b60();
   input += synapse0x35b8ba0();
   input += synapse0x35b8be0();
   input += synapse0x35b8790();
   input += synapse0x35b87d0();
   input += synapse0x35b8810();
   input += synapse0x35b8850();
   input += synapse0x35b8e30();
   input += synapse0x35b8e70();
   input += synapse0x35b8eb0();
   input += synapse0x35b8ef0();
   input += synapse0x35b8f30();
   input += synapse0x35b8f70();
   input += synapse0x35b8fb0();
   input += synapse0x35b8ff0();
   input += synapse0x35b9030();
   input += synapse0x35b9070();
   input += synapse0x35b90b0();
   input += synapse0x35b90f0();
   input += synapse0x35b9130();
   input += synapse0x35b9170();
   return input;
}

double NNfunction-NN_5_7::neuron0x35b8050() {
   double input = input0x35b8050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_5_7::input0x35b91b0() {
   double input = -7.79387;
   input += synapse0x35b93d0();
   input += synapse0x35b9410();
   input += synapse0x35b9450();
   input += synapse0x35b9490();
   input += synapse0x35b94d0();
   return input;
}

double NNfunction-NN_5_7::neuron0x35b91b0() {
   double input = input0x35b91b0();
   return (input * 1)+0;
}

double NNfunction-NN_5_7::synapse0x3589620() {
   return (neuron0x3584220()*2.71812);
}

double NNfunction-NN_5_7::synapse0x3589660() {
   return (neuron0x35844d0()*-0.0231997);
}

double NNfunction-NN_5_7::synapse0x35896a0() {
   return (neuron0x3584810()*1.11326);
}

double NNfunction-NN_5_7::synapse0x35896e0() {
   return (neuron0x3584b50()*0.0735835);
}

double NNfunction-NN_5_7::synapse0x3589720() {
   return (neuron0x3584e90()*-0.0564635);
}

double NNfunction-NN_5_7::synapse0x3589760() {
   return (neuron0x35851d0()*-0.00918732);
}

double NNfunction-NN_5_7::synapse0x35897a0() {
   return (neuron0x3585510()*-0.0166637);
}

double NNfunction-NN_5_7::synapse0x35897e0() {
   return (neuron0x3585850()*-0.030876);
}

double NNfunction-NN_5_7::synapse0x3589820() {
   return (neuron0x3585b90()*0.0163048);
}

double NNfunction-NN_5_7::synapse0x3589860() {
   return (neuron0x3585ed0()*0.00626772);
}

double NNfunction-NN_5_7::synapse0x35898a0() {
   return (neuron0x3586210()*0.0557689);
}

double NNfunction-NN_5_7::synapse0x35898e0() {
   return (neuron0x3586550()*0.0582544);
}

double NNfunction-NN_5_7::synapse0x3589920() {
   return (neuron0x3586890()*0.00282109);
}

double NNfunction-NN_5_7::synapse0x3589960() {
   return (neuron0x3586bd0()*-0.0297655);
}

double NNfunction-NN_5_7::synapse0x35899a0() {
   return (neuron0x3586f10()*-0.0336335);
}

double NNfunction-NN_5_7::synapse0x35899e0() {
   return (neuron0x3587250()*-0.0692184);
}

double NNfunction-NN_5_7::synapse0x3589470() {
   return (neuron0x3587590()*0.0192205);
}

double NNfunction-NN_5_7::synapse0x35894b0() {
   return (neuron0x3587af0()*-0.0326122);
}

double NNfunction-NN_5_7::synapse0x3336930() {
   return (neuron0x3587e30()*-0.000273434);
}

double NNfunction-NN_5_7::synapse0x3336970() {
   return (neuron0x3588170()*0.0975485);
}

double NNfunction-NN_5_7::synapse0x3589a20() {
   return (neuron0x35884b0()*0.0258581);
}

double NNfunction-NN_5_7::synapse0x3589a60() {
   return (neuron0x35887f0()*0.0175072);
}

double NNfunction-NN_5_7::synapse0x3589aa0() {
   return (neuron0x3588b30()*0.0269708);
}

double NNfunction-NN_5_7::synapse0x3589ae0() {
   return (neuron0x3588e70()*1.79589);
}

double NNfunction-NN_5_7::synapse0x3589e60() {
   return (neuron0x3584220()*-0.0112993);
}

double NNfunction-NN_5_7::synapse0x3589ea0() {
   return (neuron0x35844d0()*-0.00122471);
}

double NNfunction-NN_5_7::synapse0x3589ee0() {
   return (neuron0x3584810()*-1.45332);
}

double NNfunction-NN_5_7::synapse0x3589f20() {
   return (neuron0x3584b50()*-0.0148065);
}

double NNfunction-NN_5_7::synapse0x3589f60() {
   return (neuron0x3584e90()*0.000303494);
}

double NNfunction-NN_5_7::synapse0x3589fa0() {
   return (neuron0x35851d0()*0.0117938);
}

double NNfunction-NN_5_7::synapse0x3589fe0() {
   return (neuron0x3585510()*-0.00326874);
}

double NNfunction-NN_5_7::synapse0x358a020() {
   return (neuron0x3585850()*-0.00567583);
}

double NNfunction-NN_5_7::synapse0x358a060() {
   return (neuron0x3585b90()*-0.000563908);
}

double NNfunction-NN_5_7::synapse0x3336780() {
   return (neuron0x3585ed0()*0.00250411);
}

double NNfunction-NN_5_7::synapse0x33367c0() {
   return (neuron0x3586210()*-0.0074764);
}

double NNfunction-NN_5_7::synapse0x3336800() {
   return (neuron0x3586550()*0.192472);
}

double NNfunction-NN_5_7::synapse0x3336840() {
   return (neuron0x3586890()*-0.0102172);
}

double NNfunction-NN_5_7::synapse0x358a2b0() {
   return (neuron0x3586bd0()*-0.012483);
}

double NNfunction-NN_5_7::synapse0x358a2f0() {
   return (neuron0x3586f10()*0.00270841);
}

double NNfunction-NN_5_7::synapse0x358a330() {
   return (neuron0x3587250()*-0.00348927);
}

double NNfunction-NN_5_7::synapse0x3589cb0() {
   return (neuron0x3587590()*0.00244172);
}

double NNfunction-NN_5_7::synapse0x3589cf0() {
   return (neuron0x3587af0()*-0.00287249);
}

double NNfunction-NN_5_7::synapse0x358a480() {
   return (neuron0x3587e30()*-0.02002);
}

double NNfunction-NN_5_7::synapse0x358a4c0() {
   return (neuron0x3588170()*-0.00217923);
}

double NNfunction-NN_5_7::synapse0x358a500() {
   return (neuron0x35884b0()*0.00487878);
}

double NNfunction-NN_5_7::synapse0x358a540() {
   return (neuron0x35887f0()*-0.0025393);
}

double NNfunction-NN_5_7::synapse0x358a580() {
   return (neuron0x3588b30()*0.00493397);
}

double NNfunction-NN_5_7::synapse0x358a5c0() {
   return (neuron0x3588e70()*-3.02479);
}

double NNfunction-NN_5_7::synapse0x358a940() {
   return (neuron0x3584220()*-0.237263);
}

double NNfunction-NN_5_7::synapse0x358a980() {
   return (neuron0x35844d0()*0.0199869);
}

double NNfunction-NN_5_7::synapse0x358a9c0() {
   return (neuron0x3584810()*-0.537527);
}

double NNfunction-NN_5_7::synapse0x358aa00() {
   return (neuron0x3584b50()*0.0341927);
}

double NNfunction-NN_5_7::synapse0x358aa40() {
   return (neuron0x3584e90()*-0.100528);
}

double NNfunction-NN_5_7::synapse0x358aa80() {
   return (neuron0x35851d0()*-0.00965206);
}

double NNfunction-NN_5_7::synapse0x358aac0() {
   return (neuron0x3585510()*0.0213375);
}

double NNfunction-NN_5_7::synapse0x358ab00() {
   return (neuron0x3585850()*0.0425888);
}

double NNfunction-NN_5_7::synapse0x358ab40() {
   return (neuron0x3585b90()*0.0367717);
}

double NNfunction-NN_5_7::synapse0x358ab80() {
   return (neuron0x3585ed0()*-0.0427665);
}

double NNfunction-NN_5_7::synapse0x358abc0() {
   return (neuron0x3586210()*-0.0140894);
}

double NNfunction-NN_5_7::synapse0x358ac00() {
   return (neuron0x3586550()*-0.181417);
}

double NNfunction-NN_5_7::synapse0x358ac40() {
   return (neuron0x3586890()*-0.0231572);
}

double NNfunction-NN_5_7::synapse0x358ac80() {
   return (neuron0x3586bd0()*-0.0274454);
}

double NNfunction-NN_5_7::synapse0x358acc0() {
   return (neuron0x3586f10()*0.0196639);
}

double NNfunction-NN_5_7::synapse0x358ad00() {
   return (neuron0x3587250()*0.00326867);
}

double NNfunction-NN_5_7::synapse0x358a790() {
   return (neuron0x3587590()*0.00836865);
}

double NNfunction-NN_5_7::synapse0x358a7d0() {
   return (neuron0x3587af0()*-0.0108917);
}

double NNfunction-NN_5_7::synapse0x3344790() {
   return (neuron0x3587e30()*-0.0089604);
}

double NNfunction-NN_5_7::synapse0x33447d0() {
   return (neuron0x3588170()*0.0109073);
}

double NNfunction-NN_5_7::synapse0x358cc30() {
   return (neuron0x35884b0()*-0.0283018);
}

double NNfunction-NN_5_7::synapse0x358cc70() {
   return (neuron0x35887f0()*-0.0211777);
}

double NNfunction-NN_5_7::synapse0x3583f60() {
   return (neuron0x3588b30()*0.00522755);
}

double NNfunction-NN_5_7::synapse0x3583fa0() {
   return (neuron0x3588e70()*3.1121);
}

double NNfunction-NN_5_7::synapse0x33450a0() {
   return (neuron0x3584220()*-1.10121);
}

double NNfunction-NN_5_7::synapse0x358a1c0() {
   return (neuron0x35844d0()*0.0129784);
}

double NNfunction-NN_5_7::synapse0x358a200() {
   return (neuron0x3584810()*-2.65555);
}

double NNfunction-NN_5_7::synapse0x358a240() {
   return (neuron0x3584b50()*-0.0157268);
}

double NNfunction-NN_5_7::synapse0x358ae50() {
   return (neuron0x3584e90()*-0.0656133);
}

double NNfunction-NN_5_7::synapse0x358ae90() {
   return (neuron0x35851d0()*0.0866629);
}

double NNfunction-NN_5_7::synapse0x358aed0() {
   return (neuron0x3585510()*-0.0115601);
}

double NNfunction-NN_5_7::synapse0x358af10() {
   return (neuron0x3585850()*0.135306);
}

double NNfunction-NN_5_7::synapse0x358af50() {
   return (neuron0x3585b90()*0.018894);
}

double NNfunction-NN_5_7::synapse0x358af90() {
   return (neuron0x3585ed0()*0.0412775);
}

double NNfunction-NN_5_7::synapse0x358afd0() {
   return (neuron0x3586210()*-0.0433933);
}

double NNfunction-NN_5_7::synapse0x358b010() {
   return (neuron0x3586550()*0.0840096);
}

double NNfunction-NN_5_7::synapse0x358b050() {
   return (neuron0x3586890()*0.0707654);
}

double NNfunction-NN_5_7::synapse0x358b090() {
   return (neuron0x3586bd0()*-0.0535528);
}

double NNfunction-NN_5_7::synapse0x358b0d0() {
   return (neuron0x3586f10()*-0.112278);
}

double NNfunction-NN_5_7::synapse0x358b110() {
   return (neuron0x3587250()*-0.0480305);
}

double NNfunction-NN_5_7::synapse0x3583fe0() {
   return (neuron0x3587590()*-0.0904418);
}

double NNfunction-NN_5_7::synapse0x3584020() {
   return (neuron0x3587af0()*0.0656605);
}

double NNfunction-NN_5_7::synapse0x358b260() {
   return (neuron0x3587e30()*-0.0416104);
}

double NNfunction-NN_5_7::synapse0x358b2a0() {
   return (neuron0x3588170()*-0.019162);
}

double NNfunction-NN_5_7::synapse0x358b2e0() {
   return (neuron0x35884b0()*0.0198164);
}

double NNfunction-NN_5_7::synapse0x358b320() {
   return (neuron0x35887f0()*-0.0323525);
}

double NNfunction-NN_5_7::synapse0x358b360() {
   return (neuron0x3588b30()*0.0488267);
}

double NNfunction-NN_5_7::synapse0x358b3a0() {
   return (neuron0x3588e70()*-0.274145);
}

double NNfunction-NN_5_7::synapse0x358b720() {
   return (neuron0x3584220()*-0.0359867);
}

double NNfunction-NN_5_7::synapse0x358b760() {
   return (neuron0x35844d0()*-0.0116827);
}

double NNfunction-NN_5_7::synapse0x358b7a0() {
   return (neuron0x3584810()*-1.54027);
}

double NNfunction-NN_5_7::synapse0x358b7e0() {
   return (neuron0x3584b50()*-0.0195594);
}

double NNfunction-NN_5_7::synapse0x358b820() {
   return (neuron0x3584e90()*0.0528187);
}

double NNfunction-NN_5_7::synapse0x358b860() {
   return (neuron0x35851d0()*-0.00421979);
}

double NNfunction-NN_5_7::synapse0x358b8a0() {
   return (neuron0x3585510()*-0.00688022);
}

double NNfunction-NN_5_7::synapse0x358b8e0() {
   return (neuron0x3585850()*-0.000746593);
}

double NNfunction-NN_5_7::synapse0x358b920() {
   return (neuron0x3585b90()*-0.00482029);
}

double NNfunction-NN_5_7::synapse0x358b960() {
   return (neuron0x3585ed0()*0.018022);
}

double NNfunction-NN_5_7::synapse0x358b9a0() {
   return (neuron0x3586210()*-0.015824);
}

double NNfunction-NN_5_7::synapse0x358b9e0() {
   return (neuron0x3586550()*2.0774);
}

double NNfunction-NN_5_7::synapse0x358ba20() {
   return (neuron0x3586890()*0.0318112);
}

double NNfunction-NN_5_7::synapse0x358ba60() {
   return (neuron0x3586bd0()*-0.0189977);
}

double NNfunction-NN_5_7::synapse0x358baa0() {
   return (neuron0x3586f10()*0.00732111);
}

double NNfunction-NN_5_7::synapse0x358bae0() {
   return (neuron0x3587250()*-0.0173047);
}

double NNfunction-NN_5_7::synapse0x358bc30() {
   return (neuron0x3587590()*0.00918664);
}

double NNfunction-NN_5_7::synapse0x358b570() {
   return (neuron0x3587af0()*0.00573654);
}

double NNfunction-NN_5_7::synapse0x358b5b0() {
   return (neuron0x3587e30()*0.0192501);
}

double NNfunction-NN_5_7::synapse0x358cd70() {
   return (neuron0x3588170()*-0.000668448);
}

double NNfunction-NN_5_7::synapse0x358cdb0() {
   return (neuron0x35884b0()*0.00303961);
}

double NNfunction-NN_5_7::synapse0x358cdf0() {
   return (neuron0x35887f0()*0.0138231);
}

double NNfunction-NN_5_7::synapse0x358ce30() {
   return (neuron0x3588b30()*0.00741383);
}

double NNfunction-NN_5_7::synapse0x358ce70() {
   return (neuron0x3588e70()*-1.49606);
}

double NNfunction-NN_5_7::synapse0x358d1f0() {
   return (neuron0x3584220()*-0.0713511);
}

double NNfunction-NN_5_7::synapse0x358d230() {
   return (neuron0x35844d0()*-0.013957);
}

double NNfunction-NN_5_7::synapse0x358d270() {
   return (neuron0x3584810()*2.33464);
}

double NNfunction-NN_5_7::synapse0x358d2b0() {
   return (neuron0x3584b50()*-0.00787754);
}

double NNfunction-NN_5_7::synapse0x358d2f0() {
   return (neuron0x3584e90()*-0.0203612);
}

double NNfunction-NN_5_7::synapse0x358d330() {
   return (neuron0x35851d0()*0.00802642);
}

double NNfunction-NN_5_7::synapse0x358d370() {
   return (neuron0x3585510()*0.0158837);
}

double NNfunction-NN_5_7::synapse0x358d3b0() {
   return (neuron0x3585850()*-0.00328802);
}

double NNfunction-NN_5_7::synapse0x358d3f0() {
   return (neuron0x3585b90()*-0.00436853);
}

double NNfunction-NN_5_7::synapse0x3344b00() {
   return (neuron0x3585ed0()*0.0162449);
}

double NNfunction-NN_5_7::synapse0x3344b40() {
   return (neuron0x3586210()*-0.0382038);
}

double NNfunction-NN_5_7::synapse0x3344b80() {
   return (neuron0x3586550()*0.79479);
}

double NNfunction-NN_5_7::synapse0x3344bc0() {
   return (neuron0x3586890()*0.0347225);
}

double NNfunction-NN_5_7::synapse0x3344c00() {
   return (neuron0x3586bd0()*-0.0151778);
}

double NNfunction-NN_5_7::synapse0x3344c40() {
   return (neuron0x3586f10()*0.0215936);
}

double NNfunction-NN_5_7::synapse0x3344c80() {
   return (neuron0x3587250()*0.0390716);
}

double NNfunction-NN_5_7::synapse0x358d040() {
   return (neuron0x3587590()*-0.0209422);
}

double NNfunction-NN_5_7::synapse0x358d080() {
   return (neuron0x3587af0()*0.0099896);
}

double NNfunction-NN_5_7::synapse0x3344dd0() {
   return (neuron0x3587e30()*-0.00315408);
}

double NNfunction-NN_5_7::synapse0x3344e10() {
   return (neuron0x3588170()*-0.0165658);
}

double NNfunction-NN_5_7::synapse0x3344e50() {
   return (neuron0x35884b0()*-0.0156616);
}

double NNfunction-NN_5_7::synapse0x3344e90() {
   return (neuron0x35887f0()*-0.0177983);
}

double NNfunction-NN_5_7::synapse0x3344ed0() {
   return (neuron0x3588b30()*-0.0123012);
}

double NNfunction-NN_5_7::synapse0x358dc40() {
   return (neuron0x3588e70()*-0.0712997);
}

double NNfunction-NN_5_7::synapse0x358dfc0() {
   return (neuron0x3584220()*-0.210281);
}

double NNfunction-NN_5_7::synapse0x358e000() {
   return (neuron0x35844d0()*-0.000864909);
}

double NNfunction-NN_5_7::synapse0x358e040() {
   return (neuron0x3584810()*-2.73138);
}

double NNfunction-NN_5_7::synapse0x358e080() {
   return (neuron0x3584b50()*-0.014938);
}

double NNfunction-NN_5_7::synapse0x358e0c0() {
   return (neuron0x3584e90()*0.00244752);
}

double NNfunction-NN_5_7::synapse0x358e100() {
   return (neuron0x35851d0()*-0.000689992);
}

double NNfunction-NN_5_7::synapse0x358e140() {
   return (neuron0x3585510()*0.00531178);
}

double NNfunction-NN_5_7::synapse0x358e180() {
   return (neuron0x3585850()*0.003644);
}

double NNfunction-NN_5_7::synapse0x358e1c0() {
   return (neuron0x3585b90()*-0.00636586);
}

double NNfunction-NN_5_7::synapse0x358e200() {
   return (neuron0x3585ed0()*0.00561936);
}

double NNfunction-NN_5_7::synapse0x358e240() {
   return (neuron0x3586210()*-0.0207806);
}

double NNfunction-NN_5_7::synapse0x358e280() {
   return (neuron0x3586550()*-0.0829932);
}

double NNfunction-NN_5_7::synapse0x358e2c0() {
   return (neuron0x3586890()*-0.0288208);
}

double NNfunction-NN_5_7::synapse0x358e300() {
   return (neuron0x3586bd0()*-0.0176426);
}

double NNfunction-NN_5_7::synapse0x358e340() {
   return (neuron0x3586f10()*0.0114596);
}

double NNfunction-NN_5_7::synapse0x358e380() {
   return (neuron0x3587250()*0.0283241);
}

double NNfunction-NN_5_7::synapse0x358de10() {
   return (neuron0x3587590()*-0.00723706);
}

double NNfunction-NN_5_7::synapse0x358de50() {
   return (neuron0x3587af0()*0.00409343);
}

double NNfunction-NN_5_7::synapse0x358e4d0() {
   return (neuron0x3587e30()*-0.00556319);
}

double NNfunction-NN_5_7::synapse0x358e510() {
   return (neuron0x3588170()*0.00670563);
}

double NNfunction-NN_5_7::synapse0x358e550() {
   return (neuron0x35884b0()*0.000308015);
}

double NNfunction-NN_5_7::synapse0x358e590() {
   return (neuron0x35887f0()*0.00579545);
}

double NNfunction-NN_5_7::synapse0x358e5d0() {
   return (neuron0x3588b30()*-0.0260803);
}

double NNfunction-NN_5_7::synapse0x358e610() {
   return (neuron0x3588e70()*-0.402925);
}

double NNfunction-NN_5_7::synapse0x358e990() {
   return (neuron0x3584220()*-1.72677);
}

double NNfunction-NN_5_7::synapse0x358e9d0() {
   return (neuron0x35844d0()*-0.00806486);
}

double NNfunction-NN_5_7::synapse0x358ea10() {
   return (neuron0x3584810()*-1.08245);
}

double NNfunction-NN_5_7::synapse0x358ea50() {
   return (neuron0x3584b50()*-0.0208562);
}

double NNfunction-NN_5_7::synapse0x358ea90() {
   return (neuron0x3584e90()*-0.11146);
}

double NNfunction-NN_5_7::synapse0x358ead0() {
   return (neuron0x35851d0()*0.0404859);
}

double NNfunction-NN_5_7::synapse0x358eb10() {
   return (neuron0x3585510()*0.0206754);
}

double NNfunction-NN_5_7::synapse0x358eb50() {
   return (neuron0x3585850()*0.0612333);
}

double NNfunction-NN_5_7::synapse0x358eb90() {
   return (neuron0x3585b90()*-0.0152303);
}

double NNfunction-NN_5_7::synapse0x358ebd0() {
   return (neuron0x3585ed0()*0.0227471);
}

double NNfunction-NN_5_7::synapse0x358ec10() {
   return (neuron0x3586210()*-0.00627291);
}

double NNfunction-NN_5_7::synapse0x358ec50() {
   return (neuron0x3586550()*-0.0327955);
}

double NNfunction-NN_5_7::synapse0x358ec90() {
   return (neuron0x3586890()*-0.0119214);
}

double NNfunction-NN_5_7::synapse0x358ecd0() {
   return (neuron0x3586bd0()*-0.106039);
}

double NNfunction-NN_5_7::synapse0x358ed10() {
   return (neuron0x3586f10()*-0.0358665);
}

double NNfunction-NN_5_7::synapse0x358ed50() {
   return (neuron0x3587250()*-0.0674324);
}

double NNfunction-NN_5_7::synapse0x358e7e0() {
   return (neuron0x3587590()*-0.0108123);
}

double NNfunction-NN_5_7::synapse0x358e820() {
   return (neuron0x3587af0()*-0.0623394);
}

double NNfunction-NN_5_7::synapse0x358eea0() {
   return (neuron0x3587e30()*-0.0494241);
}

double NNfunction-NN_5_7::synapse0x358eee0() {
   return (neuron0x3588170()*0.0804055);
}

double NNfunction-NN_5_7::synapse0x358ef20() {
   return (neuron0x35884b0()*-0.00605498);
}

double NNfunction-NN_5_7::synapse0x358ef60() {
   return (neuron0x35887f0()*0.0303016);
}

double NNfunction-NN_5_7::synapse0x358efa0() {
   return (neuron0x3588b30()*0.0565639);
}

double NNfunction-NN_5_7::synapse0x358efe0() {
   return (neuron0x3588e70()*3.14096);
}

double NNfunction-NN_5_7::synapse0x35879e0() {
   return (neuron0x3584220()*0.264877);
}

double NNfunction-NN_5_7::synapse0x3587a20() {
   return (neuron0x35844d0()*-0.00700188);
}

double NNfunction-NN_5_7::synapse0x3587a60() {
   return (neuron0x3584810()*0.205731);
}

double NNfunction-NN_5_7::synapse0x3587aa0() {
   return (neuron0x3584b50()*-0.0124448);
}

double NNfunction-NN_5_7::synapse0x358f570() {
   return (neuron0x3584e90()*-0.00671689);
}

double NNfunction-NN_5_7::synapse0x358f5b0() {
   return (neuron0x35851d0()*0.00805639);
}

double NNfunction-NN_5_7::synapse0x358f5f0() {
   return (neuron0x3585510()*0.0043229);
}

double NNfunction-NN_5_7::synapse0x358f630() {
   return (neuron0x3585850()*0.000805234);
}

double NNfunction-NN_5_7::synapse0x358f670() {
   return (neuron0x3585b90()*0.0111899);
}

double NNfunction-NN_5_7::synapse0x358f6b0() {
   return (neuron0x3585ed0()*-0.00503771);
}

double NNfunction-NN_5_7::synapse0x358f6f0() {
   return (neuron0x3586210()*-0.00579901);
}

double NNfunction-NN_5_7::synapse0x358f730() {
   return (neuron0x3586550()*0.0100877);
}

double NNfunction-NN_5_7::synapse0x358f770() {
   return (neuron0x3586890()*0.00547915);
}

double NNfunction-NN_5_7::synapse0x358f7b0() {
   return (neuron0x3586bd0()*-0.00777121);
}

double NNfunction-NN_5_7::synapse0x358f7f0() {
   return (neuron0x3586f10()*0.0127326);
}

double NNfunction-NN_5_7::synapse0x358f830() {
   return (neuron0x3587250()*-0.0121638);
}

double NNfunction-NN_5_7::synapse0x358f1b0() {
   return (neuron0x3587590()*0.0103651);
}

double NNfunction-NN_5_7::synapse0x358f1f0() {
   return (neuron0x3587af0()*-0.00320139);
}

double NNfunction-NN_5_7::synapse0x358f980() {
   return (neuron0x3587e30()*0.00929943);
}

double NNfunction-NN_5_7::synapse0x358f9c0() {
   return (neuron0x3588170()*0.00705374);
}

double NNfunction-NN_5_7::synapse0x358fa00() {
   return (neuron0x35884b0()*0.00610393);
}

double NNfunction-NN_5_7::synapse0x358fa40() {
   return (neuron0x35887f0()*0.00373533);
}

double NNfunction-NN_5_7::synapse0x358fa80() {
   return (neuron0x3588b30()*0.00047972);
}

double NNfunction-NN_5_7::synapse0x358fac0() {
   return (neuron0x3588e70()*-7.72136);
}

double NNfunction-NN_5_7::synapse0x358fe40() {
   return (neuron0x3584220()*-0.154154);
}

double NNfunction-NN_5_7::synapse0x358fe80() {
   return (neuron0x35844d0()*-0.0182927);
}

double NNfunction-NN_5_7::synapse0x358fec0() {
   return (neuron0x3584810()*3.74852);
}

double NNfunction-NN_5_7::synapse0x358ff00() {
   return (neuron0x3584b50()*-0.0568293);
}

double NNfunction-NN_5_7::synapse0x358ff40() {
   return (neuron0x3584e90()*-0.0464059);
}

double NNfunction-NN_5_7::synapse0x358ff80() {
   return (neuron0x35851d0()*0.0150497);
}

double NNfunction-NN_5_7::synapse0x358ffc0() {
   return (neuron0x3585510()*0.0131952);
}

double NNfunction-NN_5_7::synapse0x3590000() {
   return (neuron0x3585850()*-0.00224948);
}

double NNfunction-NN_5_7::synapse0x3590040() {
   return (neuron0x3585b90()*-0.0108039);
}

double NNfunction-NN_5_7::synapse0x3590080() {
   return (neuron0x3585ed0()*-0.0140299);
}

double NNfunction-NN_5_7::synapse0x35900c0() {
   return (neuron0x3586210()*-0.0318539);
}

double NNfunction-NN_5_7::synapse0x3590100() {
   return (neuron0x3586550()*-0.399576);
}

double NNfunction-NN_5_7::synapse0x3590140() {
   return (neuron0x3586890()*-0.0104352);
}

double NNfunction-NN_5_7::synapse0x3590180() {
   return (neuron0x3586bd0()*-0.0264986);
}

double NNfunction-NN_5_7::synapse0x35901c0() {
   return (neuron0x3586f10()*-0.0162109);
}

double NNfunction-NN_5_7::synapse0x3590200() {
   return (neuron0x3587250()*-0.000544586);
}

double NNfunction-NN_5_7::synapse0x358fc90() {
   return (neuron0x3587590()*-0.0502198);
}

double NNfunction-NN_5_7::synapse0x358fcd0() {
   return (neuron0x3587af0()*0.0263191);
}

double NNfunction-NN_5_7::synapse0x3590350() {
   return (neuron0x3587e30()*-0.036795);
}

double NNfunction-NN_5_7::synapse0x3590390() {
   return (neuron0x3588170()*-0.000428985);
}

double NNfunction-NN_5_7::synapse0x35903d0() {
   return (neuron0x35884b0()*-0.0103265);
}

double NNfunction-NN_5_7::synapse0x3590410() {
   return (neuron0x35887f0()*-0.0178325);
}

double NNfunction-NN_5_7::synapse0x3590450() {
   return (neuron0x3588b30()*-0.0246781);
}

double NNfunction-NN_5_7::synapse0x3590490() {
   return (neuron0x3588e70()*-0.211332);
}

double NNfunction-NN_5_7::synapse0x3590810() {
   return (neuron0x3584220()*-0.15863);
}

double NNfunction-NN_5_7::synapse0x3590850() {
   return (neuron0x35844d0()*0.0094807);
}

double NNfunction-NN_5_7::synapse0x3590890() {
   return (neuron0x3584810()*-0.201752);
}

double NNfunction-NN_5_7::synapse0x35908d0() {
   return (neuron0x3584b50()*0.00774134);
}

double NNfunction-NN_5_7::synapse0x3590910() {
   return (neuron0x3584e90()*0.000936025);
}

double NNfunction-NN_5_7::synapse0x3590950() {
   return (neuron0x35851d0()*-0.0194654);
}

double NNfunction-NN_5_7::synapse0x3590990() {
   return (neuron0x3585510()*-0.00555934);
}

double NNfunction-NN_5_7::synapse0x35909d0() {
   return (neuron0x3585850()*0.0250252);
}

double NNfunction-NN_5_7::synapse0x3590a10() {
   return (neuron0x3585b90()*-0.0163248);
}

double NNfunction-NN_5_7::synapse0x3590a50() {
   return (neuron0x3585ed0()*0.00809379);
}

double NNfunction-NN_5_7::synapse0x3590a90() {
   return (neuron0x3586210()*-0.00282791);
}

double NNfunction-NN_5_7::synapse0x3590ad0() {
   return (neuron0x3586550()*-0.0303158);
}

double NNfunction-NN_5_7::synapse0x3590b10() {
   return (neuron0x3586890()*-0.00747473);
}

double NNfunction-NN_5_7::synapse0x3590b50() {
   return (neuron0x3586bd0()*-0.00910918);
}

double NNfunction-NN_5_7::synapse0x3590b90() {
   return (neuron0x3586f10()*-0.013096);
}

double NNfunction-NN_5_7::synapse0x3590bd0() {
   return (neuron0x3587250()*-0.0019305);
}

double NNfunction-NN_5_7::synapse0x3590660() {
   return (neuron0x3587590()*-0.0100167);
}

double NNfunction-NN_5_7::synapse0x35906a0() {
   return (neuron0x3587af0()*0.00933719);
}

double NNfunction-NN_5_7::synapse0x358d430() {
   return (neuron0x3587e30()*-0.0135607);
}

double NNfunction-NN_5_7::synapse0x358d470() {
   return (neuron0x3588170()*-0.0221145);
}

double NNfunction-NN_5_7::synapse0x358d4b0() {
   return (neuron0x35884b0()*-0.0328077);
}

double NNfunction-NN_5_7::synapse0x358d4f0() {
   return (neuron0x35887f0()*0.016096);
}

double NNfunction-NN_5_7::synapse0x358d530() {
   return (neuron0x3588b30()*0.00848151);
}

double NNfunction-NN_5_7::synapse0x358d570() {
   return (neuron0x3588e70()*-9.49448);
}

double NNfunction-NN_5_7::synapse0x358d8f0() {
   return (neuron0x3584220()*-0.216546);
}

double NNfunction-NN_5_7::synapse0x358d930() {
   return (neuron0x35844d0()*-0.0281752);
}

double NNfunction-NN_5_7::synapse0x358d970() {
   return (neuron0x3584810()*1.55722);
}

double NNfunction-NN_5_7::synapse0x358d9b0() {
   return (neuron0x3584b50()*-0.0394718);
}

double NNfunction-NN_5_7::synapse0x358d9f0() {
   return (neuron0x3584e90()*0.0379767);
}

double NNfunction-NN_5_7::synapse0x358da30() {
   return (neuron0x35851d0()*-0.00811359);
}

double NNfunction-NN_5_7::synapse0x358da70() {
   return (neuron0x3585510()*0.00980061);
}

double NNfunction-NN_5_7::synapse0x358dab0() {
   return (neuron0x3585850()*0.0398509);
}

double NNfunction-NN_5_7::synapse0x358daf0() {
   return (neuron0x3585b90()*-0.0397136);
}

double NNfunction-NN_5_7::synapse0x358db30() {
   return (neuron0x3585ed0()*0.0254007);
}

double NNfunction-NN_5_7::synapse0x358db70() {
   return (neuron0x3586210()*-0.0528765);
}

double NNfunction-NN_5_7::synapse0x358dbb0() {
   return (neuron0x3586550()*0.614673);
}

double NNfunction-NN_5_7::synapse0x358dbf0() {
   return (neuron0x3586890()*-0.0121958);
}

double NNfunction-NN_5_7::synapse0x3591d30() {
   return (neuron0x3586bd0()*-0.0678842);
}

double NNfunction-NN_5_7::synapse0x3591d70() {
   return (neuron0x3586f10()*0.0749863);
}

double NNfunction-NN_5_7::synapse0x3591db0() {
   return (neuron0x3587250()*0.0476629);
}

double NNfunction-NN_5_7::synapse0x358d740() {
   return (neuron0x3587590()*-0.0169556);
}

double NNfunction-NN_5_7::synapse0x358d780() {
   return (neuron0x3587af0()*-0.0324907);
}

double NNfunction-NN_5_7::synapse0x3591f00() {
   return (neuron0x3587e30()*-0.0594298);
}

double NNfunction-NN_5_7::synapse0x3591f40() {
   return (neuron0x3588170()*-0.0668186);
}

double NNfunction-NN_5_7::synapse0x3591f80() {
   return (neuron0x35884b0()*0.0131499);
}

double NNfunction-NN_5_7::synapse0x3591fc0() {
   return (neuron0x35887f0()*-0.0426258);
}

double NNfunction-NN_5_7::synapse0x3592000() {
   return (neuron0x3588b30()*0.0116926);
}

double NNfunction-NN_5_7::synapse0x3592040() {
   return (neuron0x3588e70()*-1.20991);
}

double NNfunction-NN_5_7::synapse0x35923c0() {
   return (neuron0x3584220()*0.165671);
}

double NNfunction-NN_5_7::synapse0x3592400() {
   return (neuron0x35844d0()*0.0205436);
}

double NNfunction-NN_5_7::synapse0x3592440() {
   return (neuron0x3584810()*-1.55125);
}

double NNfunction-NN_5_7::synapse0x3592480() {
   return (neuron0x3584b50()*-0.0944502);
}

double NNfunction-NN_5_7::synapse0x35924c0() {
   return (neuron0x3584e90()*-0.112461);
}

double NNfunction-NN_5_7::synapse0x3592500() {
   return (neuron0x35851d0()*-0.0126594);
}

double NNfunction-NN_5_7::synapse0x3592540() {
   return (neuron0x3585510()*-0.0436284);
}

double NNfunction-NN_5_7::synapse0x3592580() {
   return (neuron0x3585850()*0.0304547);
}

double NNfunction-NN_5_7::synapse0x35925c0() {
   return (neuron0x3585b90()*0.192406);
}

double NNfunction-NN_5_7::synapse0x3592600() {
   return (neuron0x3585ed0()*-0.10281);
}

double NNfunction-NN_5_7::synapse0x3592640() {
   return (neuron0x3586210()*0.101117);
}

double NNfunction-NN_5_7::synapse0x3592680() {
   return (neuron0x3586550()*0.41459);
}

double NNfunction-NN_5_7::synapse0x35926c0() {
   return (neuron0x3586890()*0.161213);
}

double NNfunction-NN_5_7::synapse0x3592700() {
   return (neuron0x3586bd0()*0.110103);
}

double NNfunction-NN_5_7::synapse0x3592740() {
   return (neuron0x3586f10()*-0.0325094);
}

double NNfunction-NN_5_7::synapse0x3592780() {
   return (neuron0x3587250()*-0.027275);
}

double NNfunction-NN_5_7::synapse0x3592210() {
   return (neuron0x3587590()*-0.0255031);
}

double NNfunction-NN_5_7::synapse0x3592250() {
   return (neuron0x3587af0()*0.143845);
}

double NNfunction-NN_5_7::synapse0x35928d0() {
   return (neuron0x3587e30()*0.148761);
}

double NNfunction-NN_5_7::synapse0x3592910() {
   return (neuron0x3588170()*-0.0553674);
}

double NNfunction-NN_5_7::synapse0x3592950() {
   return (neuron0x35884b0()*-0.0320328);
}

double NNfunction-NN_5_7::synapse0x3592990() {
   return (neuron0x35887f0()*0.030995);
}

double NNfunction-NN_5_7::synapse0x35929d0() {
   return (neuron0x3588b30()*-0.0296838);
}

double NNfunction-NN_5_7::synapse0x3592a10() {
   return (neuron0x3588e70()*2.06146);
}

double NNfunction-NN_5_7::synapse0x3592d90() {
   return (neuron0x3584220()*0.78293);
}

double NNfunction-NN_5_7::synapse0x3592dd0() {
   return (neuron0x35844d0()*0.0248549);
}

double NNfunction-NN_5_7::synapse0x3592e10() {
   return (neuron0x3584810()*-0.188292);
}

double NNfunction-NN_5_7::synapse0x3592e50() {
   return (neuron0x3584b50()*0.0055831);
}

double NNfunction-NN_5_7::synapse0x3592e90() {
   return (neuron0x3584e90()*0.0215526);
}

double NNfunction-NN_5_7::synapse0x3592ed0() {
   return (neuron0x35851d0()*-0.00443329);
}

double NNfunction-NN_5_7::synapse0x3592f10() {
   return (neuron0x3585510()*-0.0114829);
}

double NNfunction-NN_5_7::synapse0x3592f50() {
   return (neuron0x3585850()*0.00185106);
}

double NNfunction-NN_5_7::synapse0x3592f90() {
   return (neuron0x3585b90()*0.0190298);
}

double NNfunction-NN_5_7::synapse0x3592fd0() {
   return (neuron0x3585ed0()*-0.00707345);
}

double NNfunction-NN_5_7::synapse0x3593010() {
   return (neuron0x3586210()*0.0152031);
}

double NNfunction-NN_5_7::synapse0x3593050() {
   return (neuron0x3586550()*0.0324589);
}

double NNfunction-NN_5_7::synapse0x3593090() {
   return (neuron0x3586890()*0.021077);
}

double NNfunction-NN_5_7::synapse0x35930d0() {
   return (neuron0x3586bd0()*0.0181229);
}

double NNfunction-NN_5_7::synapse0x3593110() {
   return (neuron0x3586f10()*0.000844854);
}

double NNfunction-NN_5_7::synapse0x3593150() {
   return (neuron0x3587250()*-0.0304979);
}

double NNfunction-NN_5_7::synapse0x3592be0() {
   return (neuron0x3587590()*0.00290207);
}

double NNfunction-NN_5_7::synapse0x3592c20() {
   return (neuron0x3587af0()*-0.0107537);
}

double NNfunction-NN_5_7::synapse0x35932a0() {
   return (neuron0x3587e30()*-0.00113037);
}

double NNfunction-NN_5_7::synapse0x35932e0() {
   return (neuron0x3588170()*0.0270392);
}

double NNfunction-NN_5_7::synapse0x3593320() {
   return (neuron0x35884b0()*0.0033765);
}

double NNfunction-NN_5_7::synapse0x3593360() {
   return (neuron0x35887f0()*0.0619048);
}

double NNfunction-NN_5_7::synapse0x35933a0() {
   return (neuron0x3588b30()*0.0111498);
}

double NNfunction-NN_5_7::synapse0x35933e0() {
   return (neuron0x3588e70()*5.83494);
}

double NNfunction-NN_5_7::synapse0x3593760() {
   return (neuron0x3584220()*0.0105402);
}

double NNfunction-NN_5_7::synapse0x35937a0() {
   return (neuron0x35844d0()*0.0163032);
}

double NNfunction-NN_5_7::synapse0x35937e0() {
   return (neuron0x3584810()*-0.668073);
}

double NNfunction-NN_5_7::synapse0x3593820() {
   return (neuron0x3584b50()*0.110066);
}

double NNfunction-NN_5_7::synapse0x3593860() {
   return (neuron0x3584e90()*-0.00230622);
}

double NNfunction-NN_5_7::synapse0x35938a0() {
   return (neuron0x35851d0()*0.009598);
}

double NNfunction-NN_5_7::synapse0x35938e0() {
   return (neuron0x3585510()*-0.00215106);
}

double NNfunction-NN_5_7::synapse0x3593920() {
   return (neuron0x3585850()*0.00966884);
}

double NNfunction-NN_5_7::synapse0x3593960() {
   return (neuron0x3585b90()*-0.0012355);
}

double NNfunction-NN_5_7::synapse0x35939a0() {
   return (neuron0x3585ed0()*-0.000917562);
}

double NNfunction-NN_5_7::synapse0x35939e0() {
   return (neuron0x3586210()*0.00551169);
}

double NNfunction-NN_5_7::synapse0x3593a20() {
   return (neuron0x3586550()*-0.311351);
}

double NNfunction-NN_5_7::synapse0x3593a60() {
   return (neuron0x3586890()*0.00128843);
}

double NNfunction-NN_5_7::synapse0x3593aa0() {
   return (neuron0x3586bd0()*0.00457171);
}

double NNfunction-NN_5_7::synapse0x3593ae0() {
   return (neuron0x3586f10()*0.000407659);
}

double NNfunction-NN_5_7::synapse0x3593b20() {
   return (neuron0x3587250()*-0.00633862);
}

double NNfunction-NN_5_7::synapse0x35935b0() {
   return (neuron0x3587590()*0.0104164);
}

double NNfunction-NN_5_7::synapse0x35935f0() {
   return (neuron0x3587af0()*-0.00451176);
}

double NNfunction-NN_5_7::synapse0x3593c70() {
   return (neuron0x3587e30()*0.0147142);
}

double NNfunction-NN_5_7::synapse0x3593cb0() {
   return (neuron0x3588170()*-0.00147148);
}

double NNfunction-NN_5_7::synapse0x3593cf0() {
   return (neuron0x35884b0()*-0.0115392);
}

double NNfunction-NN_5_7::synapse0x3593d30() {
   return (neuron0x35887f0()*-0.0118347);
}

double NNfunction-NN_5_7::synapse0x3593d70() {
   return (neuron0x3588b30()*-0.000749947);
}

double NNfunction-NN_5_7::synapse0x3593db0() {
   return (neuron0x3588e70()*0.0730347);
}

double NNfunction-NN_5_7::synapse0x3594130() {
   return (neuron0x3584220()*-0.272881);
}

double NNfunction-NN_5_7::synapse0x35843b0() {
   return (neuron0x35844d0()*0.134286);
}

double NNfunction-NN_5_7::synapse0x35843f0() {
   return (neuron0x3584810()*1.41275);
}

double NNfunction-NN_5_7::synapse0x35846f0() {
   return (neuron0x3584b50()*0.457303);
}

double NNfunction-NN_5_7::synapse0x3584730() {
   return (neuron0x3584e90()*-0.222184);
}

double NNfunction-NN_5_7::synapse0x3584a30() {
   return (neuron0x35851d0()*0.0390483);
}

double NNfunction-NN_5_7::synapse0x3584a70() {
   return (neuron0x3585510()*-0.151276);
}

double NNfunction-NN_5_7::synapse0x3584d70() {
   return (neuron0x3585850()*0.249109);
}

double NNfunction-NN_5_7::synapse0x3584db0() {
   return (neuron0x3585b90()*-0.12124);
}

double NNfunction-NN_5_7::synapse0x35850b0() {
   return (neuron0x3585ed0()*0.147771);
}

double NNfunction-NN_5_7::synapse0x35850f0() {
   return (neuron0x3586210()*-0.125182);
}

double NNfunction-NN_5_7::synapse0x35853f0() {
   return (neuron0x3586550()*-0.131849);
}

double NNfunction-NN_5_7::synapse0x3585430() {
   return (neuron0x3586890()*-0.00924206);
}

double NNfunction-NN_5_7::synapse0x3585730() {
   return (neuron0x3586bd0()*-0.0281964);
}

double NNfunction-NN_5_7::synapse0x3585770() {
   return (neuron0x3586f10()*-0.117857);
}

double NNfunction-NN_5_7::synapse0x3585a70() {
   return (neuron0x3587250()*-0.0700957);
}

double NNfunction-NN_5_7::synapse0x3585ab0() {
   return (neuron0x3587590()*0.277098);
}

double NNfunction-NN_5_7::synapse0x3585db0() {
   return (neuron0x3587af0()*-0.0804882);
}

double NNfunction-NN_5_7::synapse0x3585df0() {
   return (neuron0x3587e30()*-0.195676);
}

double NNfunction-NN_5_7::synapse0x35860f0() {
   return (neuron0x3588170()*0.246937);
}

double NNfunction-NN_5_7::synapse0x3586130() {
   return (neuron0x35884b0()*0.00537472);
}

double NNfunction-NN_5_7::synapse0x3586430() {
   return (neuron0x35887f0()*0.0463989);
}

double NNfunction-NN_5_7::synapse0x3586470() {
   return (neuron0x3588b30()*0.119626);
}

double NNfunction-NN_5_7::synapse0x3586770() {
   return (neuron0x3588e70()*-0.190444);
}

double NNfunction-NN_5_7::synapse0x35867b0() {
   return (neuron0x3584220()*0.826409);
}

double NNfunction-NN_5_7::synapse0x3587470() {
   return (neuron0x35844d0()*0.0333219);
}

double NNfunction-NN_5_7::synapse0x35874b0() {
   return (neuron0x3584810()*-1.68786);
}

double NNfunction-NN_5_7::synapse0x3593f80() {
   return (neuron0x3584b50()*0.452582);
}

double NNfunction-NN_5_7::synapse0x3593fc0() {
   return (neuron0x3584e90()*0.138948);
}

double NNfunction-NN_5_7::synapse0x35877b0() {
   return (neuron0x35851d0()*-0.152013);
}

double NNfunction-NN_5_7::synapse0x35877f0() {
   return (neuron0x3585510()*-0.00943769);
}

double NNfunction-NN_5_7::synapse0x3587d10() {
   return (neuron0x3585850()*0.168758);
}

double NNfunction-NN_5_7::synapse0x3587d50() {
   return (neuron0x3585b90()*0.159766);
}

double NNfunction-NN_5_7::synapse0x3588050() {
   return (neuron0x3585ed0()*-0.170024);
}

double NNfunction-NN_5_7::synapse0x3588090() {
   return (neuron0x3586210()*0.289983);
}

double NNfunction-NN_5_7::synapse0x3588390() {
   return (neuron0x3586550()*0.371187);
}

double NNfunction-NN_5_7::synapse0x35883d0() {
   return (neuron0x3586890()*-0.266072);
}

double NNfunction-NN_5_7::synapse0x35886d0() {
   return (neuron0x3586bd0()*-0.0952513);
}

double NNfunction-NN_5_7::synapse0x3588710() {
   return (neuron0x3586f10()*-0.00726978);
}

double NNfunction-NN_5_7::synapse0x3588a10() {
   return (neuron0x3587250()*0.0882114);
}

double NNfunction-NN_5_7::synapse0x3588a50() {
   return (neuron0x3587590()*0.0818092);
}

double NNfunction-NN_5_7::synapse0x3588d50() {
   return (neuron0x3587af0()*0.0547303);
}

double NNfunction-NN_5_7::synapse0x3588d90() {
   return (neuron0x3587e30()*0.0791104);
}

double NNfunction-NN_5_7::synapse0x3589090() {
   return (neuron0x3588170()*0.0265989);
}

double NNfunction-NN_5_7::synapse0x35890d0() {
   return (neuron0x35884b0()*0.235629);
}

double NNfunction-NN_5_7::synapse0x3586ab0() {
   return (neuron0x35887f0()*0.198014);
}

double NNfunction-NN_5_7::synapse0x3586af0() {
   return (neuron0x3588b30()*0.154998);
}

double NNfunction-NN_5_7::synapse0x3595ea0() {
   return (neuron0x3588e70()*2.46371);
}

double NNfunction-NN_5_7::synapse0x3596220() {
   return (neuron0x3584220()*-0.806185);
}

double NNfunction-NN_5_7::synapse0x3596260() {
   return (neuron0x35844d0()*-0.0649692);
}

double NNfunction-NN_5_7::synapse0x35962a0() {
   return (neuron0x3584810()*0.0233606);
}

double NNfunction-NN_5_7::synapse0x35962e0() {
   return (neuron0x3584b50()*0.136576);
}

double NNfunction-NN_5_7::synapse0x3596320() {
   return (neuron0x3584e90()*0.072125);
}

double NNfunction-NN_5_7::synapse0x3596360() {
   return (neuron0x35851d0()*0.0217254);
}

double NNfunction-NN_5_7::synapse0x35963a0() {
   return (neuron0x3585510()*-0.0305113);
}

double NNfunction-NN_5_7::synapse0x35963e0() {
   return (neuron0x3585850()*-0.0295868);
}

double NNfunction-NN_5_7::synapse0x3596420() {
   return (neuron0x3585b90()*0.0271814);
}

double NNfunction-NN_5_7::synapse0x3596460() {
   return (neuron0x3585ed0()*-0.0652998);
}

double NNfunction-NN_5_7::synapse0x35964a0() {
   return (neuron0x3586210()*0.0609547);
}

double NNfunction-NN_5_7::synapse0x35964e0() {
   return (neuron0x3586550()*0.144981);
}

double NNfunction-NN_5_7::synapse0x3596520() {
   return (neuron0x3586890()*0.0903221);
}

double NNfunction-NN_5_7::synapse0x3596560() {
   return (neuron0x3586bd0()*-0.00391872);
}

double NNfunction-NN_5_7::synapse0x35965a0() {
   return (neuron0x3586f10()*-0.0646591);
}

double NNfunction-NN_5_7::synapse0x35965e0() {
   return (neuron0x3587250()*-0.0192086);
}

double NNfunction-NN_5_7::synapse0x3596070() {
   return (neuron0x3587590()*-0.00117062);
}

double NNfunction-NN_5_7::synapse0x35960b0() {
   return (neuron0x3587af0()*0.000237288);
}

double NNfunction-NN_5_7::synapse0x3596730() {
   return (neuron0x3587e30()*0.00699626);
}

double NNfunction-NN_5_7::synapse0x3596770() {
   return (neuron0x3588170()*0.0748989);
}

double NNfunction-NN_5_7::synapse0x35967b0() {
   return (neuron0x35884b0()*0.0482543);
}

double NNfunction-NN_5_7::synapse0x35967f0() {
   return (neuron0x35887f0()*0.0138888);
}

double NNfunction-NN_5_7::synapse0x3596830() {
   return (neuron0x3588b30()*-0.0589876);
}

double NNfunction-NN_5_7::synapse0x3596870() {
   return (neuron0x3588e70()*-3.26923);
}

double NNfunction-NN_5_7::synapse0x3596bf0() {
   return (neuron0x3584220()*0.00659163);
}

double NNfunction-NN_5_7::synapse0x3596c30() {
   return (neuron0x35844d0()*0.00184074);
}

double NNfunction-NN_5_7::synapse0x3596c70() {
   return (neuron0x3584810()*3.07518);
}

double NNfunction-NN_5_7::synapse0x3596cb0() {
   return (neuron0x3584b50()*0.00536166);
}

double NNfunction-NN_5_7::synapse0x3596cf0() {
   return (neuron0x3584e90()*-0.003036);
}

double NNfunction-NN_5_7::synapse0x3596d30() {
   return (neuron0x35851d0()*-0.00139722);
}

double NNfunction-NN_5_7::synapse0x3596d70() {
   return (neuron0x3585510()*0.00992401);
}

double NNfunction-NN_5_7::synapse0x3596db0() {
   return (neuron0x3585850()*0.0243786);
}

double NNfunction-NN_5_7::synapse0x3596df0() {
   return (neuron0x3585b90()*0.00281501);
}

double NNfunction-NN_5_7::synapse0x3596e30() {
   return (neuron0x3585ed0()*-0.00371107);
}

double NNfunction-NN_5_7::synapse0x3596e70() {
   return (neuron0x3586210()*0.0370908);
}

double NNfunction-NN_5_7::synapse0x3596eb0() {
   return (neuron0x3586550()*-0.490634);
}

double NNfunction-NN_5_7::synapse0x3596ef0() {
   return (neuron0x3586890()*-0.0106204);
}

double NNfunction-NN_5_7::synapse0x3596f30() {
   return (neuron0x3586bd0()*0.0380173);
}

double NNfunction-NN_5_7::synapse0x3596f70() {
   return (neuron0x3586f10()*-0.000287688);
}

double NNfunction-NN_5_7::synapse0x3596fb0() {
   return (neuron0x3587250()*-0.00486207);
}

double NNfunction-NN_5_7::synapse0x3596a40() {
   return (neuron0x3587590()*-0.00828608);
}

double NNfunction-NN_5_7::synapse0x3596a80() {
   return (neuron0x3587af0()*0.00458181);
}

double NNfunction-NN_5_7::synapse0x3597100() {
   return (neuron0x3587e30()*0.0131105);
}

double NNfunction-NN_5_7::synapse0x3597140() {
   return (neuron0x3588170()*-0.00564777);
}

double NNfunction-NN_5_7::synapse0x3597180() {
   return (neuron0x35884b0()*-0.0152598);
}

double NNfunction-NN_5_7::synapse0x35971c0() {
   return (neuron0x35887f0()*-0.00121921);
}

double NNfunction-NN_5_7::synapse0x3597200() {
   return (neuron0x3588b30()*-0.00503005);
}

double NNfunction-NN_5_7::synapse0x3597240() {
   return (neuron0x3588e70()*4.59277);
}

double NNfunction-NN_5_7::synapse0x35975c0() {
   return (neuron0x3584220()*0.0820399);
}

double NNfunction-NN_5_7::synapse0x3597600() {
   return (neuron0x35844d0()*0.0118101);
}

double NNfunction-NN_5_7::synapse0x3597640() {
   return (neuron0x3584810()*1.59099);
}

double NNfunction-NN_5_7::synapse0x3597680() {
   return (neuron0x3584b50()*0.0153578);
}

double NNfunction-NN_5_7::synapse0x35976c0() {
   return (neuron0x3584e90()*0.0172963);
}

double NNfunction-NN_5_7::synapse0x3597700() {
   return (neuron0x35851d0()*-0.00777319);
}

double NNfunction-NN_5_7::synapse0x3597740() {
   return (neuron0x3585510()*-0.00819635);
}

double NNfunction-NN_5_7::synapse0x3597780() {
   return (neuron0x3585850()*-0.0162708);
}

double NNfunction-NN_5_7::synapse0x35977c0() {
   return (neuron0x3585b90()*0.000454253);
}

double NNfunction-NN_5_7::synapse0x3597800() {
   return (neuron0x3585ed0()*0.0174311);
}

double NNfunction-NN_5_7::synapse0x3597840() {
   return (neuron0x3586210()*0.00352837);
}

double NNfunction-NN_5_7::synapse0x3597880() {
   return (neuron0x3586550()*-0.0887001);
}

double NNfunction-NN_5_7::synapse0x35978c0() {
   return (neuron0x3586890()*0.00288924);
}

double NNfunction-NN_5_7::synapse0x3597900() {
   return (neuron0x3586bd0()*0.0152705);
}

double NNfunction-NN_5_7::synapse0x3597940() {
   return (neuron0x3586f10()*-0.0125551);
}

double NNfunction-NN_5_7::synapse0x3597980() {
   return (neuron0x3587250()*0.0143719);
}

double NNfunction-NN_5_7::synapse0x3597410() {
   return (neuron0x3587590()*0.0154571);
}

double NNfunction-NN_5_7::synapse0x3597450() {
   return (neuron0x3587af0()*-0.0112161);
}

double NNfunction-NN_5_7::synapse0x3597ad0() {
   return (neuron0x3587e30()*0.00140644);
}

double NNfunction-NN_5_7::synapse0x3597b10() {
   return (neuron0x3588170()*0.016622);
}

double NNfunction-NN_5_7::synapse0x3597b50() {
   return (neuron0x35884b0()*-0.00897575);
}

double NNfunction-NN_5_7::synapse0x3597b90() {
   return (neuron0x35887f0()*-0.00745924);
}

double NNfunction-NN_5_7::synapse0x3597bd0() {
   return (neuron0x3588b30()*0.00817465);
}

double NNfunction-NN_5_7::synapse0x3597c10() {
   return (neuron0x3588e70()*-4.1918);
}

double NNfunction-NN_5_7::synapse0x3597f90() {
   return (neuron0x3584220()*-0.275109);
}

double NNfunction-NN_5_7::synapse0x3597fd0() {
   return (neuron0x35844d0()*0.130945);
}

double NNfunction-NN_5_7::synapse0x3598010() {
   return (neuron0x3584810()*1.0487);
}

double NNfunction-NN_5_7::synapse0x3598050() {
   return (neuron0x3584b50()*-0.0785705);
}

double NNfunction-NN_5_7::synapse0x3598090() {
   return (neuron0x3584e90()*-0.112687);
}

double NNfunction-NN_5_7::synapse0x35980d0() {
   return (neuron0x35851d0()*0.0859519);
}

double NNfunction-NN_5_7::synapse0x3598110() {
   return (neuron0x3585510()*0.191728);
}

double NNfunction-NN_5_7::synapse0x3598150() {
   return (neuron0x3585850()*0.0414373);
}

double NNfunction-NN_5_7::synapse0x3598190() {
   return (neuron0x3585b90()*0.160753);
}

double NNfunction-NN_5_7::synapse0x35981d0() {
   return (neuron0x3585ed0()*-0.143827);
}

double NNfunction-NN_5_7::synapse0x3598210() {
   return (neuron0x3586210()*0.0139327);
}

double NNfunction-NN_5_7::synapse0x3598250() {
   return (neuron0x3586550()*0.172135);
}

double NNfunction-NN_5_7::synapse0x3598290() {
   return (neuron0x3586890()*-0.0614648);
}

double NNfunction-NN_5_7::synapse0x35982d0() {
   return (neuron0x3586bd0()*0.312395);
}

double NNfunction-NN_5_7::synapse0x3598310() {
   return (neuron0x3586f10()*-0.0253057);
}

double NNfunction-NN_5_7::synapse0x3598350() {
   return (neuron0x3587250()*0.0233159);
}

double NNfunction-NN_5_7::synapse0x3597de0() {
   return (neuron0x3587590()*-0.0643556);
}

double NNfunction-NN_5_7::synapse0x3597e20() {
   return (neuron0x3587af0()*0.0564928);
}

double NNfunction-NN_5_7::synapse0x35984a0() {
   return (neuron0x3587e30()*-0.108325);
}

double NNfunction-NN_5_7::synapse0x35984e0() {
   return (neuron0x3588170()*-0.0277142);
}

double NNfunction-NN_5_7::synapse0x3598520() {
   return (neuron0x35884b0()*0.0385281);
}

double NNfunction-NN_5_7::synapse0x3598560() {
   return (neuron0x35887f0()*0.0690828);
}

double NNfunction-NN_5_7::synapse0x35985a0() {
   return (neuron0x3588b30()*-0.0843168);
}

double NNfunction-NN_5_7::synapse0x35985e0() {
   return (neuron0x3588e70()*-2.65776);
}

double NNfunction-NN_5_7::synapse0x3598960() {
   return (neuron0x3584220()*0.0201256);
}

double NNfunction-NN_5_7::synapse0x35989a0() {
   return (neuron0x35844d0()*-0.00275601);
}

double NNfunction-NN_5_7::synapse0x35989e0() {
   return (neuron0x3584810()*-0.459738);
}

double NNfunction-NN_5_7::synapse0x3598a20() {
   return (neuron0x3584b50()*-0.00520248);
}

double NNfunction-NN_5_7::synapse0x3598a60() {
   return (neuron0x3584e90()*0.0200362);
}

double NNfunction-NN_5_7::synapse0x3598aa0() {
   return (neuron0x35851d0()*-8.30632e-05);
}

double NNfunction-NN_5_7::synapse0x3598ae0() {
   return (neuron0x3585510()*-0.0113006);
}

double NNfunction-NN_5_7::synapse0x3598b20() {
   return (neuron0x3585850()*-0.00709461);
}

double NNfunction-NN_5_7::synapse0x3598b60() {
   return (neuron0x3585b90()*-0.00387402);
}

double NNfunction-NN_5_7::synapse0x3590d20() {
   return (neuron0x3585ed0()*0.00339708);
}

double NNfunction-NN_5_7::synapse0x3590d60() {
   return (neuron0x3586210()*0.0102872);
}

double NNfunction-NN_5_7::synapse0x3590da0() {
   return (neuron0x3586550()*0.0759429);
}

double NNfunction-NN_5_7::synapse0x3590de0() {
   return (neuron0x3586890()*0.00827387);
}

double NNfunction-NN_5_7::synapse0x3590e20() {
   return (neuron0x3586bd0()*0.0141588);
}

double NNfunction-NN_5_7::synapse0x3590e60() {
   return (neuron0x3586f10()*-0.00568167);
}

double NNfunction-NN_5_7::synapse0x3590ea0() {
   return (neuron0x3587250()*-0.00578019);
}

double NNfunction-NN_5_7::synapse0x35987b0() {
   return (neuron0x3587590()*-0.00724915);
}

double NNfunction-NN_5_7::synapse0x35987f0() {
   return (neuron0x3587af0()*0.00160121);
}

double NNfunction-NN_5_7::synapse0x3590ff0() {
   return (neuron0x3587e30()*0.00485842);
}

double NNfunction-NN_5_7::synapse0x3591030() {
   return (neuron0x3588170()*0.00850711);
}

double NNfunction-NN_5_7::synapse0x3591070() {
   return (neuron0x35884b0()*0.00300562);
}

double NNfunction-NN_5_7::synapse0x35910b0() {
   return (neuron0x35887f0()*0.00601462);
}

double NNfunction-NN_5_7::synapse0x35910f0() {
   return (neuron0x3588b30()*-0.00476438);
}

double NNfunction-NN_5_7::synapse0x3591130() {
   return (neuron0x3588e70()*-4.22953);
}

double NNfunction-NN_5_7::synapse0x35914b0() {
   return (neuron0x3584220()*1.15305);
}

double NNfunction-NN_5_7::synapse0x35914f0() {
   return (neuron0x35844d0()*0.047582);
}

double NNfunction-NN_5_7::synapse0x3591530() {
   return (neuron0x3584810()*0.564247);
}

double NNfunction-NN_5_7::synapse0x3591570() {
   return (neuron0x3584b50()*0.0153694);
}

double NNfunction-NN_5_7::synapse0x35915b0() {
   return (neuron0x3584e90()*-0.0129941);
}

double NNfunction-NN_5_7::synapse0x35915f0() {
   return (neuron0x35851d0()*-0.0981325);
}

double NNfunction-NN_5_7::synapse0x3591630() {
   return (neuron0x3585510()*0.0625634);
}

double NNfunction-NN_5_7::synapse0x3591670() {
   return (neuron0x3585850()*-0.0664785);
}

double NNfunction-NN_5_7::synapse0x35916b0() {
   return (neuron0x3585b90()*0.0555297);
}

double NNfunction-NN_5_7::synapse0x35916f0() {
   return (neuron0x3585ed0()*-0.121621);
}

double NNfunction-NN_5_7::synapse0x3591730() {
   return (neuron0x3586210()*0.0247527);
}

double NNfunction-NN_5_7::synapse0x3591770() {
   return (neuron0x3586550()*-0.0347273);
}

double NNfunction-NN_5_7::synapse0x35917b0() {
   return (neuron0x3586890()*0.00585905);
}

double NNfunction-NN_5_7::synapse0x35917f0() {
   return (neuron0x3586bd0()*0.140723);
}

double NNfunction-NN_5_7::synapse0x3591830() {
   return (neuron0x3586f10()*-0.0108729);
}

double NNfunction-NN_5_7::synapse0x3591870() {
   return (neuron0x3587250()*0.0923533);
}

double NNfunction-NN_5_7::synapse0x3591300() {
   return (neuron0x3587590()*0.0543005);
}

double NNfunction-NN_5_7::synapse0x3591340() {
   return (neuron0x3587af0()*0.0679236);
}

double NNfunction-NN_5_7::synapse0x35919c0() {
   return (neuron0x3587e30()*0.164982);
}

double NNfunction-NN_5_7::synapse0x3591a00() {
   return (neuron0x3588170()*-0.149584);
}

double NNfunction-NN_5_7::synapse0x3591a40() {
   return (neuron0x35884b0()*0.0404036);
}

double NNfunction-NN_5_7::synapse0x3591a80() {
   return (neuron0x35887f0()*-0.0662765);
}

double NNfunction-NN_5_7::synapse0x3591ac0() {
   return (neuron0x3588b30()*-0.107737);
}

double NNfunction-NN_5_7::synapse0x3591b00() {
   return (neuron0x3588e70()*1.73314);
}

double NNfunction-NN_5_7::synapse0x3591cd0() {
   return (neuron0x3584220()*-0.143842);
}

double NNfunction-NN_5_7::synapse0x359ad60() {
   return (neuron0x35844d0()*-0.0337135);
}

double NNfunction-NN_5_7::synapse0x359ada0() {
   return (neuron0x3584810()*0.541882);
}

double NNfunction-NN_5_7::synapse0x359ade0() {
   return (neuron0x3584b50()*-0.022752);
}

double NNfunction-NN_5_7::synapse0x359ae20() {
   return (neuron0x3584e90()*0.0738603);
}

double NNfunction-NN_5_7::synapse0x359ae60() {
   return (neuron0x35851d0()*-0.00058164);
}

double NNfunction-NN_5_7::synapse0x359aea0() {
   return (neuron0x3585510()*-0.00577317);
}

double NNfunction-NN_5_7::synapse0x359aee0() {
   return (neuron0x3585850()*0.020903);
}

double NNfunction-NN_5_7::synapse0x359af20() {
   return (neuron0x3585b90()*-0.0487449);
}

double NNfunction-NN_5_7::synapse0x359af60() {
   return (neuron0x3585ed0()*0.00704863);
}

double NNfunction-NN_5_7::synapse0x359afa0() {
   return (neuron0x3586210()*-0.0200118);
}

double NNfunction-NN_5_7::synapse0x359afe0() {
   return (neuron0x3586550()*-3.15032);
}

double NNfunction-NN_5_7::synapse0x359b020() {
   return (neuron0x3586890()*-0.054828);
}

double NNfunction-NN_5_7::synapse0x359b060() {
   return (neuron0x3586bd0()*-0.039002);
}

double NNfunction-NN_5_7::synapse0x359b0a0() {
   return (neuron0x3586f10()*0.00194749);
}

double NNfunction-NN_5_7::synapse0x359b0e0() {
   return (neuron0x3587250()*0.00862452);
}

double NNfunction-NN_5_7::synapse0x359abb0() {
   return (neuron0x3587590()*-0.0432827);
}

double NNfunction-NN_5_7::synapse0x359abf0() {
   return (neuron0x3587af0()*0.00856193);
}

double NNfunction-NN_5_7::synapse0x359b230() {
   return (neuron0x3587e30()*-0.0386234);
}

double NNfunction-NN_5_7::synapse0x359b270() {
   return (neuron0x3588170()*-0.0544404);
}

double NNfunction-NN_5_7::synapse0x359b2b0() {
   return (neuron0x35884b0()*-0.00498803);
}

double NNfunction-NN_5_7::synapse0x359b2f0() {
   return (neuron0x35887f0()*-0.0192047);
}

double NNfunction-NN_5_7::synapse0x359b330() {
   return (neuron0x3588b30()*-0.0184917);
}

double NNfunction-NN_5_7::synapse0x359b370() {
   return (neuron0x3588e70()*-1.86023);
}

double NNfunction-NN_5_7::synapse0x359b6f0() {
   return (neuron0x3584220()*-0.0453525);
}

double NNfunction-NN_5_7::synapse0x359b730() {
   return (neuron0x35844d0()*0.0109748);
}

double NNfunction-NN_5_7::synapse0x359b770() {
   return (neuron0x3584810()*0.606684);
}

double NNfunction-NN_5_7::synapse0x359b7b0() {
   return (neuron0x3584b50()*-0.0335742);
}

double NNfunction-NN_5_7::synapse0x359b7f0() {
   return (neuron0x3584e90()*-0.0562604);
}

double NNfunction-NN_5_7::synapse0x359b830() {
   return (neuron0x35851d0()*-0.0241913);
}

double NNfunction-NN_5_7::synapse0x359b870() {
   return (neuron0x3585510()*-0.000830725);
}

double NNfunction-NN_5_7::synapse0x359b8b0() {
   return (neuron0x3585850()*0.013317);
}

double NNfunction-NN_5_7::synapse0x359b8f0() {
   return (neuron0x3585b90()*-0.0126171);
}

double NNfunction-NN_5_7::synapse0x359b930() {
   return (neuron0x3585ed0()*0.0217568);
}

double NNfunction-NN_5_7::synapse0x359b970() {
   return (neuron0x3586210()*-0.0233595);
}

double NNfunction-NN_5_7::synapse0x359b9b0() {
   return (neuron0x3586550()*3.44881);
}

double NNfunction-NN_5_7::synapse0x359b9f0() {
   return (neuron0x3586890()*0.0226573);
}

double NNfunction-NN_5_7::synapse0x359ba30() {
   return (neuron0x3586bd0()*-0.0349739);
}

double NNfunction-NN_5_7::synapse0x359ba70() {
   return (neuron0x3586f10()*-0.0157536);
}

double NNfunction-NN_5_7::synapse0x359bab0() {
   return (neuron0x3587250()*0.00783888);
}

double NNfunction-NN_5_7::synapse0x359b540() {
   return (neuron0x3587590()*-0.0407939);
}

double NNfunction-NN_5_7::synapse0x359b580() {
   return (neuron0x3587af0()*0.0315899);
}

double NNfunction-NN_5_7::synapse0x359bc00() {
   return (neuron0x3587e30()*0.00967542);
}

double NNfunction-NN_5_7::synapse0x359bc40() {
   return (neuron0x3588170()*-0.018323);
}

double NNfunction-NN_5_7::synapse0x359bc80() {
   return (neuron0x35884b0()*-0.0191653);
}

double NNfunction-NN_5_7::synapse0x359bcc0() {
   return (neuron0x35887f0()*-0.0124718);
}

double NNfunction-NN_5_7::synapse0x359bd00() {
   return (neuron0x3588b30()*0.011439);
}

double NNfunction-NN_5_7::synapse0x359bd40() {
   return (neuron0x3588e70()*-0.108133);
}

double NNfunction-NN_5_7::synapse0x359c0c0() {
   return (neuron0x3584220()*-0.262529);
}

double NNfunction-NN_5_7::synapse0x359c100() {
   return (neuron0x35844d0()*0.215047);
}

double NNfunction-NN_5_7::synapse0x359c140() {
   return (neuron0x3584810()*0.323968);
}

double NNfunction-NN_5_7::synapse0x359c180() {
   return (neuron0x3584b50()*0.29014);
}

double NNfunction-NN_5_7::synapse0x359c1c0() {
   return (neuron0x3584e90()*0.449035);
}

double NNfunction-NN_5_7::synapse0x359c200() {
   return (neuron0x35851d0()*0.383372);
}

double NNfunction-NN_5_7::synapse0x359c240() {
   return (neuron0x3585510()*0.0994392);
}

double NNfunction-NN_5_7::synapse0x359c280() {
   return (neuron0x3585850()*-0.0498472);
}

double NNfunction-NN_5_7::synapse0x359c2c0() {
   return (neuron0x3585b90()*0.197548);
}

double NNfunction-NN_5_7::synapse0x359c300() {
   return (neuron0x3585ed0()*-0.0664398);
}

double NNfunction-NN_5_7::synapse0x359c340() {
   return (neuron0x3586210()*0.0601556);
}

double NNfunction-NN_5_7::synapse0x359c380() {
   return (neuron0x3586550()*0.0674989);
}

double NNfunction-NN_5_7::synapse0x359c3c0() {
   return (neuron0x3586890()*-0.387285);
}

double NNfunction-NN_5_7::synapse0x359c400() {
   return (neuron0x3586bd0()*-0.413762);
}

double NNfunction-NN_5_7::synapse0x359c440() {
   return (neuron0x3586f10()*0.249792);
}

double NNfunction-NN_5_7::synapse0x359c480() {
   return (neuron0x3587250()*-0.583694);
}

double NNfunction-NN_5_7::synapse0x359bf10() {
   return (neuron0x3587590()*-0.104826);
}

double NNfunction-NN_5_7::synapse0x359bf50() {
   return (neuron0x3587af0()*-0.217253);
}

double NNfunction-NN_5_7::synapse0x359c5d0() {
   return (neuron0x3587e30()*-0.427866);
}

double NNfunction-NN_5_7::synapse0x359c610() {
   return (neuron0x3588170()*-0.141375);
}

double NNfunction-NN_5_7::synapse0x359c650() {
   return (neuron0x35884b0()*-0.337395);
}

double NNfunction-NN_5_7::synapse0x359c690() {
   return (neuron0x35887f0()*-0.355982);
}

double NNfunction-NN_5_7::synapse0x359c6d0() {
   return (neuron0x3588b30()*-0.113287);
}

double NNfunction-NN_5_7::synapse0x359c710() {
   return (neuron0x3588e70()*0.273163);
}

double NNfunction-NN_5_7::synapse0x359ca90() {
   return (neuron0x3584220()*-0.167421);
}

double NNfunction-NN_5_7::synapse0x359cad0() {
   return (neuron0x35844d0()*-0.276826);
}

double NNfunction-NN_5_7::synapse0x359cb10() {
   return (neuron0x3584810()*-0.624694);
}

double NNfunction-NN_5_7::synapse0x359cb50() {
   return (neuron0x3584b50()*0.164865);
}

double NNfunction-NN_5_7::synapse0x359cb90() {
   return (neuron0x3584e90()*-0.306431);
}

double NNfunction-NN_5_7::synapse0x359cbd0() {
   return (neuron0x35851d0()*-0.0840986);
}

double NNfunction-NN_5_7::synapse0x359cc10() {
   return (neuron0x3585510()*0.164054);
}

double NNfunction-NN_5_7::synapse0x359cc50() {
   return (neuron0x3585850()*0.0841116);
}

double NNfunction-NN_5_7::synapse0x359cc90() {
   return (neuron0x3585b90()*-0.079134);
}

double NNfunction-NN_5_7::synapse0x359ccd0() {
   return (neuron0x3585ed0()*-0.301063);
}

double NNfunction-NN_5_7::synapse0x359cd10() {
   return (neuron0x3586210()*-0.216663);
}

double NNfunction-NN_5_7::synapse0x359cd50() {
   return (neuron0x3586550()*0.0993259);
}

double NNfunction-NN_5_7::synapse0x359cd90() {
   return (neuron0x3586890()*0.0851593);
}

double NNfunction-NN_5_7::synapse0x359cdd0() {
   return (neuron0x3586bd0()*-0.342151);
}

double NNfunction-NN_5_7::synapse0x359ce10() {
   return (neuron0x3586f10()*0.167077);
}

double NNfunction-NN_5_7::synapse0x359ce50() {
   return (neuron0x3587250()*-0.0213307);
}

double NNfunction-NN_5_7::synapse0x359c8e0() {
   return (neuron0x3587590()*-0.0622883);
}

double NNfunction-NN_5_7::synapse0x359c920() {
   return (neuron0x3587af0()*-0.0770078);
}

double NNfunction-NN_5_7::synapse0x359cfa0() {
   return (neuron0x3587e30()*-0.522221);
}

double NNfunction-NN_5_7::synapse0x359cfe0() {
   return (neuron0x3588170()*-0.119609);
}

double NNfunction-NN_5_7::synapse0x359d020() {
   return (neuron0x35884b0()*-0.254649);
}

double NNfunction-NN_5_7::synapse0x359d060() {
   return (neuron0x35887f0()*-0.188503);
}

double NNfunction-NN_5_7::synapse0x359d0a0() {
   return (neuron0x3588b30()*-0.0968335);
}

double NNfunction-NN_5_7::synapse0x359d0e0() {
   return (neuron0x3588e70()*0.217792);
}

double NNfunction-NN_5_7::synapse0x359d460() {
   return (neuron0x3584220()*-0.0837891);
}

double NNfunction-NN_5_7::synapse0x359d4a0() {
   return (neuron0x35844d0()*-0.00710214);
}

double NNfunction-NN_5_7::synapse0x359d4e0() {
   return (neuron0x3584810()*-7.82738);
}

double NNfunction-NN_5_7::synapse0x359d520() {
   return (neuron0x3584b50()*-0.0193164);
}

double NNfunction-NN_5_7::synapse0x359d560() {
   return (neuron0x3584e90()*-0.0175634);
}

double NNfunction-NN_5_7::synapse0x359d5a0() {
   return (neuron0x35851d0()*0.00309547);
}

double NNfunction-NN_5_7::synapse0x359d5e0() {
   return (neuron0x3585510()*-0.00771568);
}

double NNfunction-NN_5_7::synapse0x359d620() {
   return (neuron0x3585850()*0.00210913);
}

double NNfunction-NN_5_7::synapse0x359d660() {
   return (neuron0x3585b90()*-0.00227108);
}

double NNfunction-NN_5_7::synapse0x359d6a0() {
   return (neuron0x3585ed0()*-0.00784162);
}

double NNfunction-NN_5_7::synapse0x359d6e0() {
   return (neuron0x3586210()*-0.00272936);
}

double NNfunction-NN_5_7::synapse0x359d720() {
   return (neuron0x3586550()*0.0854009);
}

double NNfunction-NN_5_7::synapse0x359d760() {
   return (neuron0x3586890()*0.0103457);
}

double NNfunction-NN_5_7::synapse0x359d7a0() {
   return (neuron0x3586bd0()*-0.0109351);
}

double NNfunction-NN_5_7::synapse0x359d7e0() {
   return (neuron0x3586f10()*-0.00817243);
}

double NNfunction-NN_5_7::synapse0x359d820() {
   return (neuron0x3587250()*-0.00224176);
}

double NNfunction-NN_5_7::synapse0x359d2b0() {
   return (neuron0x3587590()*0.00214555);
}

double NNfunction-NN_5_7::synapse0x359d2f0() {
   return (neuron0x3587af0()*0.0143886);
}

double NNfunction-NN_5_7::synapse0x359d970() {
   return (neuron0x3587e30()*-0.0241618);
}

double NNfunction-NN_5_7::synapse0x359d9b0() {
   return (neuron0x3588170()*0.00604091);
}

double NNfunction-NN_5_7::synapse0x359d9f0() {
   return (neuron0x35884b0()*-0.00303298);
}

double NNfunction-NN_5_7::synapse0x359da30() {
   return (neuron0x35887f0()*-0.0117046);
}

double NNfunction-NN_5_7::synapse0x359da70() {
   return (neuron0x3588b30()*-0.00356961);
}

double NNfunction-NN_5_7::synapse0x359dab0() {
   return (neuron0x3588e70()*-0.0160745);
}

double NNfunction-NN_5_7::synapse0x359de30() {
   return (neuron0x3584220()*-0.706671);
}

double NNfunction-NN_5_7::synapse0x359de70() {
   return (neuron0x35844d0()*-0.0176755);
}

double NNfunction-NN_5_7::synapse0x359deb0() {
   return (neuron0x3584810()*-0.220499);
}

double NNfunction-NN_5_7::synapse0x359def0() {
   return (neuron0x3584b50()*0.0366203);
}

double NNfunction-NN_5_7::synapse0x359df30() {
   return (neuron0x3584e90()*-0.0717451);
}

double NNfunction-NN_5_7::synapse0x359df70() {
   return (neuron0x35851d0()*4.58598e-05);
}

double NNfunction-NN_5_7::synapse0x359dfb0() {
   return (neuron0x3585510()*0.0332809);
}

double NNfunction-NN_5_7::synapse0x359dff0() {
   return (neuron0x3585850()*-0.00926813);
}

double NNfunction-NN_5_7::synapse0x359e030() {
   return (neuron0x3585b90()*-0.0546444);
}

double NNfunction-NN_5_7::synapse0x359e070() {
   return (neuron0x3585ed0()*0.0249525);
}

double NNfunction-NN_5_7::synapse0x359e0b0() {
   return (neuron0x3586210()*-0.0246593);
}

double NNfunction-NN_5_7::synapse0x359e0f0() {
   return (neuron0x3586550()*-0.164178);
}

double NNfunction-NN_5_7::synapse0x359e130() {
   return (neuron0x3586890()*-0.0741069);
}

double NNfunction-NN_5_7::synapse0x359e170() {
   return (neuron0x3586bd0()*-0.0972082);
}

double NNfunction-NN_5_7::synapse0x359e1b0() {
   return (neuron0x3586f10()*-0.00487176);
}

double NNfunction-NN_5_7::synapse0x359e1f0() {
   return (neuron0x3587250()*0.0806913);
}

double NNfunction-NN_5_7::synapse0x359dc80() {
   return (neuron0x3587590()*0.0168087);
}

double NNfunction-NN_5_7::synapse0x359dcc0() {
   return (neuron0x3587af0()*0.0127636);
}

double NNfunction-NN_5_7::synapse0x359e340() {
   return (neuron0x3587e30()*0.00633086);
}

double NNfunction-NN_5_7::synapse0x359e380() {
   return (neuron0x3588170()*-0.0596033);
}

double NNfunction-NN_5_7::synapse0x359e3c0() {
   return (neuron0x35884b0()*0.0372864);
}

double NNfunction-NN_5_7::synapse0x359e400() {
   return (neuron0x35887f0()*-0.082012);
}

double NNfunction-NN_5_7::synapse0x359e440() {
   return (neuron0x3588b30()*0.0201164);
}

double NNfunction-NN_5_7::synapse0x359e480() {
   return (neuron0x3588e70()*-5.36009);
}

double NNfunction-NN_5_7::synapse0x359e800() {
   return (neuron0x3584220()*-0.00508439);
}

double NNfunction-NN_5_7::synapse0x359e840() {
   return (neuron0x35844d0()*-0.00245398);
}

double NNfunction-NN_5_7::synapse0x359e880() {
   return (neuron0x3584810()*4.48448);
}

double NNfunction-NN_5_7::synapse0x359e8c0() {
   return (neuron0x3584b50()*0.0198308);
}

double NNfunction-NN_5_7::synapse0x359e900() {
   return (neuron0x3584e90()*0.039004);
}

double NNfunction-NN_5_7::synapse0x359e940() {
   return (neuron0x35851d0()*0.00304249);
}

double NNfunction-NN_5_7::synapse0x359e980() {
   return (neuron0x3585510()*-0.00589661);
}

double NNfunction-NN_5_7::synapse0x359e9c0() {
   return (neuron0x3585850()*0.00777173);
}

double NNfunction-NN_5_7::synapse0x359ea00() {
   return (neuron0x3585b90()*-0.00725445);
}

double NNfunction-NN_5_7::synapse0x359ea40() {
   return (neuron0x3585ed0()*-0.00952909);
}

double NNfunction-NN_5_7::synapse0x359ea80() {
   return (neuron0x3586210()*-0.0168578);
}

double NNfunction-NN_5_7::synapse0x359eac0() {
   return (neuron0x3586550()*-4.62726);
}

double NNfunction-NN_5_7::synapse0x359eb00() {
   return (neuron0x3586890()*-0.0151372);
}

double NNfunction-NN_5_7::synapse0x359eb40() {
   return (neuron0x3586bd0()*0.0235012);
}

double NNfunction-NN_5_7::synapse0x359eb80() {
   return (neuron0x3586f10()*0.0314663);
}

double NNfunction-NN_5_7::synapse0x359ebc0() {
   return (neuron0x3587250()*-0.00452362);
}

double NNfunction-NN_5_7::synapse0x359e650() {
   return (neuron0x3587590()*0.00465908);
}

double NNfunction-NN_5_7::synapse0x359e690() {
   return (neuron0x3587af0()*-0.0410009);
}

double NNfunction-NN_5_7::synapse0x359ed10() {
   return (neuron0x3587e30()*-0.0400473);
}

double NNfunction-NN_5_7::synapse0x359ed50() {
   return (neuron0x3588170()*0.0132721);
}

double NNfunction-NN_5_7::synapse0x359ed90() {
   return (neuron0x35884b0()*0.0121588);
}

double NNfunction-NN_5_7::synapse0x359edd0() {
   return (neuron0x35887f0()*0.00115291);
}

double NNfunction-NN_5_7::synapse0x359ee10() {
   return (neuron0x3588b30()*0.0220108);
}

double NNfunction-NN_5_7::synapse0x359ee50() {
   return (neuron0x3588e70()*0.0648633);
}

double NNfunction-NN_5_7::synapse0x359f1d0() {
   return (neuron0x3584220()*-3.43506);
}

double NNfunction-NN_5_7::synapse0x359f210() {
   return (neuron0x35844d0()*0.0147698);
}

double NNfunction-NN_5_7::synapse0x359f250() {
   return (neuron0x3584810()*-2.0172);
}

double NNfunction-NN_5_7::synapse0x359f290() {
   return (neuron0x3584b50()*-0.0866343);
}

double NNfunction-NN_5_7::synapse0x359f2d0() {
   return (neuron0x3584e90()*-0.0306636);
}

double NNfunction-NN_5_7::synapse0x359f310() {
   return (neuron0x35851d0()*0.0463743);
}

double NNfunction-NN_5_7::synapse0x359f350() {
   return (neuron0x3585510()*0.030681);
}

double NNfunction-NN_5_7::synapse0x359f390() {
   return (neuron0x3585850()*0.0744699);
}

double NNfunction-NN_5_7::synapse0x359f3d0() {
   return (neuron0x3585b90()*-0.0166962);
}

double NNfunction-NN_5_7::synapse0x359f410() {
   return (neuron0x3585ed0()*0.0182331);
}

double NNfunction-NN_5_7::synapse0x359f450() {
   return (neuron0x3586210()*-0.0474064);
}

double NNfunction-NN_5_7::synapse0x359f490() {
   return (neuron0x3586550()*-0.0604364);
}

double NNfunction-NN_5_7::synapse0x359f4d0() {
   return (neuron0x3586890()*-0.00101626);
}

double NNfunction-NN_5_7::synapse0x359f510() {
   return (neuron0x3586bd0()*-0.0321287);
}

double NNfunction-NN_5_7::synapse0x359f550() {
   return (neuron0x3586f10()*0.00462692);
}

double NNfunction-NN_5_7::synapse0x359f590() {
   return (neuron0x3587250()*0.0248751);
}

double NNfunction-NN_5_7::synapse0x359f020() {
   return (neuron0x3587590()*-0.0526373);
}

double NNfunction-NN_5_7::synapse0x359f060() {
   return (neuron0x3587af0()*0.00481403);
}

double NNfunction-NN_5_7::synapse0x359f6e0() {
   return (neuron0x3587e30()*-0.0585747);
}

double NNfunction-NN_5_7::synapse0x359f720() {
   return (neuron0x3588170()*-0.0261978);
}

double NNfunction-NN_5_7::synapse0x359f760() {
   return (neuron0x35884b0()*-0.059465);
}

double NNfunction-NN_5_7::synapse0x359f7a0() {
   return (neuron0x35887f0()*0.0548415);
}

double NNfunction-NN_5_7::synapse0x359f7e0() {
   return (neuron0x3588b30()*0.0170771);
}

double NNfunction-NN_5_7::synapse0x359f820() {
   return (neuron0x3588e70()*0.114222);
}

double NNfunction-NN_5_7::synapse0x359fba0() {
   return (neuron0x3584220()*0.0182982);
}

double NNfunction-NN_5_7::synapse0x3594170() {
   return (neuron0x35844d0()*0.00478858);
}

double NNfunction-NN_5_7::synapse0x35941b0() {
   return (neuron0x3584810()*-4.04211);
}

double NNfunction-NN_5_7::synapse0x35941f0() {
   return (neuron0x3584b50()*-0.011288);
}

double NNfunction-NN_5_7::synapse0x3594440() {
   return (neuron0x3584e90()*-0.0353073);
}

double NNfunction-NN_5_7::synapse0x3594480() {
   return (neuron0x35851d0()*-0.0071373);
}

double NNfunction-NN_5_7::synapse0x35944c0() {
   return (neuron0x3585510()*-0.00612396);
}

double NNfunction-NN_5_7::synapse0x3594710() {
   return (neuron0x3585850()*-0.0140236);
}

double NNfunction-NN_5_7::synapse0x3594750() {
   return (neuron0x3585b90()*0.00384773);
}

double NNfunction-NN_5_7::synapse0x35949a0() {
   return (neuron0x3585ed0()*0.0227723);
}

double NNfunction-NN_5_7::synapse0x35949e0() {
   return (neuron0x3586210()*0.0136849);
}

double NNfunction-NN_5_7::synapse0x3594a20() {
   return (neuron0x3586550()*4.48931);
}

double NNfunction-NN_5_7::synapse0x3594c70() {
   return (neuron0x3586890()*0.0165893);
}

double NNfunction-NN_5_7::synapse0x3594cb0() {
   return (neuron0x3586bd0()*-0.0288303);
}

double NNfunction-NN_5_7::synapse0x3594f00() {
   return (neuron0x3586f10()*-0.0314437);
}

double NNfunction-NN_5_7::synapse0x3594f40() {
   return (neuron0x3587250()*-0.0125477);
}

double NNfunction-NN_5_7::synapse0x359f9f0() {
   return (neuron0x3587590()*-0.00997529);
}

double NNfunction-NN_5_7::synapse0x359fa30() {
   return (neuron0x3587af0()*0.0310723);
}

double NNfunction-NN_5_7::synapse0x3595090() {
   return (neuron0x3587e30()*0.0361595);
}

double NNfunction-NN_5_7::synapse0x35955a0() {
   return (neuron0x3588170()*-0.0156516);
}

double NNfunction-NN_5_7::synapse0x35955e0() {
   return (neuron0x35884b0()*-0.0118345);
}

double NNfunction-NN_5_7::synapse0x3595620() {
   return (neuron0x35887f0()*0.0011931);
}

double NNfunction-NN_5_7::synapse0x3595870() {
   return (neuron0x3588b30()*-0.00431664);
}

double NNfunction-NN_5_7::synapse0x35958b0() {
   return (neuron0x3588e70()*0.0184073);
}

double NNfunction-NN_5_7::synapse0x3595160() {
   return (neuron0x3584220()*0.0229582);
}

double NNfunction-NN_5_7::synapse0x35951a0() {
   return (neuron0x35844d0()*0.0126736);
}

double NNfunction-NN_5_7::synapse0x35951e0() {
   return (neuron0x3584810()*1.42188);
}

double NNfunction-NN_5_7::synapse0x3595220() {
   return (neuron0x3584b50()*0.023423);
}

double NNfunction-NN_5_7::synapse0x3595ba0() {
   return (neuron0x3584e90()*-0.0371989);
}

double NNfunction-NN_5_7::synapse0x35a1ef0() {
   return (neuron0x35851d0()*0.0104479);
}

double NNfunction-NN_5_7::synapse0x35a1f30() {
   return (neuron0x3585510()*0.0142907);
}

double NNfunction-NN_5_7::synapse0x35a1f70() {
   return (neuron0x3585850()*0.00525782);
}

double NNfunction-NN_5_7::synapse0x35a1fb0() {
   return (neuron0x3585b90()*0.0121876);
}

double NNfunction-NN_5_7::synapse0x35a1ff0() {
   return (neuron0x3585ed0()*-0.0291323);
}

double NNfunction-NN_5_7::synapse0x35a2030() {
   return (neuron0x3586210()*0.0164939);
}

double NNfunction-NN_5_7::synapse0x35a2070() {
   return (neuron0x3586550()*-2.37449);
}

double NNfunction-NN_5_7::synapse0x35a20b0() {
   return (neuron0x3586890()*-0.0341542);
}

double NNfunction-NN_5_7::synapse0x35a20f0() {
   return (neuron0x3586bd0()*0.0344524);
}

double NNfunction-NN_5_7::synapse0x35a2130() {
   return (neuron0x3586f10()*-0.00348582);
}

double NNfunction-NN_5_7::synapse0x35a2170() {
   return (neuron0x3587250()*0.0305094);
}

double NNfunction-NN_5_7::synapse0x3595a80() {
   return (neuron0x3587590()*0.0031255);
}

double NNfunction-NN_5_7::synapse0x3595ac0() {
   return (neuron0x3587af0()*-0.0164421);
}

double NNfunction-NN_5_7::synapse0x35a22c0() {
   return (neuron0x3587e30()*-0.0157849);
}

double NNfunction-NN_5_7::synapse0x35a2300() {
   return (neuron0x3588170()*0.00636651);
}

double NNfunction-NN_5_7::synapse0x35a2340() {
   return (neuron0x35884b0()*0.00159873);
}

double NNfunction-NN_5_7::synapse0x35a2380() {
   return (neuron0x35887f0()*-0.0137673);
}

double NNfunction-NN_5_7::synapse0x35a23c0() {
   return (neuron0x3588b30()*-0.0128442);
}

double NNfunction-NN_5_7::synapse0x35a2400() {
   return (neuron0x3588e70()*1.47748);
}

double NNfunction-NN_5_7::synapse0x35a2780() {
   return (neuron0x3584220()*-0.0103405);
}

double NNfunction-NN_5_7::synapse0x35a27c0() {
   return (neuron0x35844d0()*0.00137447);
}

double NNfunction-NN_5_7::synapse0x35a2800() {
   return (neuron0x3584810()*-0.0536665);
}

double NNfunction-NN_5_7::synapse0x35a2840() {
   return (neuron0x3584b50()*0.0015068);
}

double NNfunction-NN_5_7::synapse0x35a2880() {
   return (neuron0x3584e90()*0.00376591);
}

double NNfunction-NN_5_7::synapse0x35a28c0() {
   return (neuron0x35851d0()*-0.00361508);
}

double NNfunction-NN_5_7::synapse0x35a2900() {
   return (neuron0x3585510()*0.000225933);
}

double NNfunction-NN_5_7::synapse0x35a2940() {
   return (neuron0x3585850()*0.00639605);
}

double NNfunction-NN_5_7::synapse0x35a2980() {
   return (neuron0x3585b90()*-0.000354958);
}

double NNfunction-NN_5_7::synapse0x35a29c0() {
   return (neuron0x3585ed0()*0.00394412);
}

double NNfunction-NN_5_7::synapse0x35a2a00() {
   return (neuron0x3586210()*-0.00131674);
}

double NNfunction-NN_5_7::synapse0x35a2a40() {
   return (neuron0x3586550()*-0.00700877);
}

double NNfunction-NN_5_7::synapse0x35a2a80() {
   return (neuron0x3586890()*-0.00159151);
}

double NNfunction-NN_5_7::synapse0x35a2ac0() {
   return (neuron0x3586bd0()*-0.00468736);
}

double NNfunction-NN_5_7::synapse0x35a2b00() {
   return (neuron0x3586f10()*0.0018111);
}

double NNfunction-NN_5_7::synapse0x35a2b40() {
   return (neuron0x3587250()*-0.00549309);
}

double NNfunction-NN_5_7::synapse0x35a25d0() {
   return (neuron0x3587590()*0.0035241);
}

double NNfunction-NN_5_7::synapse0x35a2610() {
   return (neuron0x3587af0()*0.00427159);
}

double NNfunction-NN_5_7::synapse0x35a2c90() {
   return (neuron0x3587e30()*0.00211666);
}

double NNfunction-NN_5_7::synapse0x35a2cd0() {
   return (neuron0x3588170()*-0.00605365);
}

double NNfunction-NN_5_7::synapse0x35a2d10() {
   return (neuron0x35884b0()*-0.00500173);
}

double NNfunction-NN_5_7::synapse0x35a2d50() {
   return (neuron0x35887f0()*0.00602059);
}

double NNfunction-NN_5_7::synapse0x35a2d90() {
   return (neuron0x3588b30()*0.00133576);
}

double NNfunction-NN_5_7::synapse0x35a2dd0() {
   return (neuron0x3588e70()*-11.0103);
}

double NNfunction-NN_5_7::synapse0x35a3150() {
   return (neuron0x3584220()*-3.5214);
}

double NNfunction-NN_5_7::synapse0x35a3190() {
   return (neuron0x35844d0()*0.0472124);
}

double NNfunction-NN_5_7::synapse0x35a31d0() {
   return (neuron0x3584810()*1.73379);
}

double NNfunction-NN_5_7::synapse0x35a3210() {
   return (neuron0x3584b50()*-0.217899);
}

double NNfunction-NN_5_7::synapse0x35a3250() {
   return (neuron0x3584e90()*0.0211488);
}

double NNfunction-NN_5_7::synapse0x35a3290() {
   return (neuron0x35851d0()*0.0988276);
}

double NNfunction-NN_5_7::synapse0x35a32d0() {
   return (neuron0x3585510()*0.0747657);
}

double NNfunction-NN_5_7::synapse0x35a3310() {
   return (neuron0x3585850()*0.0516996);
}

double NNfunction-NN_5_7::synapse0x35a3350() {
   return (neuron0x3585b90()*0.003477);
}

double NNfunction-NN_5_7::synapse0x35a3390() {
   return (neuron0x3585ed0()*0.0765601);
}

double NNfunction-NN_5_7::synapse0x35a33d0() {
   return (neuron0x3586210()*-0.196553);
}

double NNfunction-NN_5_7::synapse0x35a3410() {
   return (neuron0x3586550()*-0.184643);
}

double NNfunction-NN_5_7::synapse0x35a3450() {
   return (neuron0x3586890()*-0.0059441);
}

double NNfunction-NN_5_7::synapse0x35a3490() {
   return (neuron0x3586bd0()*0.12637);
}

double NNfunction-NN_5_7::synapse0x35a34d0() {
   return (neuron0x3586f10()*0.0100883);
}

double NNfunction-NN_5_7::synapse0x35a3510() {
   return (neuron0x3587250()*0.0842999);
}

double NNfunction-NN_5_7::synapse0x35a2fa0() {
   return (neuron0x3587590()*0.040459);
}

double NNfunction-NN_5_7::synapse0x35a2fe0() {
   return (neuron0x3587af0()*0.0114543);
}

double NNfunction-NN_5_7::synapse0x35a3660() {
   return (neuron0x3587e30()*-0.0708955);
}

double NNfunction-NN_5_7::synapse0x35a36a0() {
   return (neuron0x3588170()*-0.0946785);
}

double NNfunction-NN_5_7::synapse0x35a36e0() {
   return (neuron0x35884b0()*-0.0983786);
}

double NNfunction-NN_5_7::synapse0x35a3720() {
   return (neuron0x35887f0()*-0.102516);
}

double NNfunction-NN_5_7::synapse0x35a3760() {
   return (neuron0x3588b30()*-0.0462832);
}

double NNfunction-NN_5_7::synapse0x35a37a0() {
   return (neuron0x3588e70()*-3.13077);
}

double NNfunction-NN_5_7::synapse0x35a3b20() {
   return (neuron0x3584220()*0.413263);
}

double NNfunction-NN_5_7::synapse0x35a3b60() {
   return (neuron0x35844d0()*-0.0602844);
}

double NNfunction-NN_5_7::synapse0x35a3ba0() {
   return (neuron0x3584810()*0.779628);
}

double NNfunction-NN_5_7::synapse0x35a3be0() {
   return (neuron0x3584b50()*-0.146237);
}

double NNfunction-NN_5_7::synapse0x35a3c20() {
   return (neuron0x3584e90()*-0.0382119);
}

double NNfunction-NN_5_7::synapse0x35a3c60() {
   return (neuron0x35851d0()*0.0425488);
}

double NNfunction-NN_5_7::synapse0x35a3ca0() {
   return (neuron0x3585510()*-0.00318701);
}

double NNfunction-NN_5_7::synapse0x35a3ce0() {
   return (neuron0x3585850()*0.201107);
}

double NNfunction-NN_5_7::synapse0x35a3d20() {
   return (neuron0x3585b90()*0.0740944);
}

double NNfunction-NN_5_7::synapse0x35a3d60() {
   return (neuron0x3585ed0()*0.0460356);
}

double NNfunction-NN_5_7::synapse0x35a3da0() {
   return (neuron0x3586210()*-0.0584146);
}

double NNfunction-NN_5_7::synapse0x35a3de0() {
   return (neuron0x3586550()*0.0426094);
}

double NNfunction-NN_5_7::synapse0x35a3e20() {
   return (neuron0x3586890()*0.0541144);
}

double NNfunction-NN_5_7::synapse0x35a3e60() {
   return (neuron0x3586bd0()*0.0876589);
}

double NNfunction-NN_5_7::synapse0x35a3ea0() {
   return (neuron0x3586f10()*-0.129851);
}

double NNfunction-NN_5_7::synapse0x35a3ee0() {
   return (neuron0x3587250()*-0.159544);
}

double NNfunction-NN_5_7::synapse0x35a3970() {
   return (neuron0x3587590()*-0.0503494);
}

double NNfunction-NN_5_7::synapse0x35a39b0() {
   return (neuron0x3587af0()*-0.0287444);
}

double NNfunction-NN_5_7::synapse0x35a4030() {
   return (neuron0x3587e30()*0.0517088);
}

double NNfunction-NN_5_7::synapse0x35a4070() {
   return (neuron0x3588170()*0.00944018);
}

double NNfunction-NN_5_7::synapse0x35a40b0() {
   return (neuron0x35884b0()*0.101484);
}

double NNfunction-NN_5_7::synapse0x35a40f0() {
   return (neuron0x35887f0()*-0.0506217);
}

double NNfunction-NN_5_7::synapse0x35a4130() {
   return (neuron0x3588b30()*0.0431385);
}

double NNfunction-NN_5_7::synapse0x35a4170() {
   return (neuron0x3588e70()*-0.120905);
}

double NNfunction-NN_5_7::synapse0x35a44f0() {
   return (neuron0x3584220()*-0.0299485);
}

double NNfunction-NN_5_7::synapse0x35a4530() {
   return (neuron0x35844d0()*-0.0205582);
}

double NNfunction-NN_5_7::synapse0x35a4570() {
   return (neuron0x3584810()*2.84387);
}

double NNfunction-NN_5_7::synapse0x35a45b0() {
   return (neuron0x3584b50()*-0.0358113);
}

double NNfunction-NN_5_7::synapse0x35a45f0() {
   return (neuron0x3584e90()*0.0390118);
}

double NNfunction-NN_5_7::synapse0x35a4630() {
   return (neuron0x35851d0()*-0.00512824);
}

double NNfunction-NN_5_7::synapse0x35a4670() {
   return (neuron0x3585510()*0.0137333);
}

double NNfunction-NN_5_7::synapse0x35a46b0() {
   return (neuron0x3585850()*0.000868921);
}

double NNfunction-NN_5_7::synapse0x35a46f0() {
   return (neuron0x3585b90()*0.016838);
}

double NNfunction-NN_5_7::synapse0x35a4730() {
   return (neuron0x3585ed0()*0.00287858);
}

double NNfunction-NN_5_7::synapse0x35a4770() {
   return (neuron0x3586210()*-0.00924536);
}

double NNfunction-NN_5_7::synapse0x35a47b0() {
   return (neuron0x3586550()*0.0444533);
}

double NNfunction-NN_5_7::synapse0x35a47f0() {
   return (neuron0x3586890()*-0.0046192);
}

double NNfunction-NN_5_7::synapse0x35a4830() {
   return (neuron0x3586bd0()*0.0322392);
}

double NNfunction-NN_5_7::synapse0x35a4870() {
   return (neuron0x3586f10()*0.0063391);
}

double NNfunction-NN_5_7::synapse0x35a48b0() {
   return (neuron0x3587250()*0.0587354);
}

double NNfunction-NN_5_7::synapse0x35a4340() {
   return (neuron0x3587590()*0.0148622);
}

double NNfunction-NN_5_7::synapse0x35a4380() {
   return (neuron0x3587af0()*0.0105043);
}

double NNfunction-NN_5_7::synapse0x35a4a00() {
   return (neuron0x3587e30()*-0.0382658);
}

double NNfunction-NN_5_7::synapse0x35a4a40() {
   return (neuron0x3588170()*-0.0224693);
}

double NNfunction-NN_5_7::synapse0x35a4a80() {
   return (neuron0x35884b0()*-0.00140845);
}

double NNfunction-NN_5_7::synapse0x35a4ac0() {
   return (neuron0x35887f0()*-0.0221953);
}

double NNfunction-NN_5_7::synapse0x35a4b00() {
   return (neuron0x3588b30()*0.0158537);
}

double NNfunction-NN_5_7::synapse0x35a4b40() {
   return (neuron0x3588e70()*-2.66382);
}

double NNfunction-NN_5_7::synapse0x35a4ec0() {
   return (neuron0x3584220()*0.08273);
}

double NNfunction-NN_5_7::synapse0x35a4f00() {
   return (neuron0x35844d0()*0.0448151);
}

double NNfunction-NN_5_7::synapse0x35a4f40() {
   return (neuron0x3584810()*-2.16483);
}

double NNfunction-NN_5_7::synapse0x35a4f80() {
   return (neuron0x3584b50()*0.0424876);
}

double NNfunction-NN_5_7::synapse0x35a4fc0() {
   return (neuron0x3584e90()*0.0508314);
}

double NNfunction-NN_5_7::synapse0x35a5000() {
   return (neuron0x35851d0()*0.00559066);
}

double NNfunction-NN_5_7::synapse0x35a5040() {
   return (neuron0x3585510()*-0.0381246);
}

double NNfunction-NN_5_7::synapse0x35a5080() {
   return (neuron0x3585850()*0.00192331);
}

double NNfunction-NN_5_7::synapse0x35a50c0() {
   return (neuron0x3585b90()*-0.00420296);
}

double NNfunction-NN_5_7::synapse0x35a5100() {
   return (neuron0x3585ed0()*0.0129271);
}

double NNfunction-NN_5_7::synapse0x35a5140() {
   return (neuron0x3586210()*0.0322835);
}

double NNfunction-NN_5_7::synapse0x35a5180() {
   return (neuron0x3586550()*-0.11164);
}

double NNfunction-NN_5_7::synapse0x35a51c0() {
   return (neuron0x3586890()*-0.0282978);
}

double NNfunction-NN_5_7::synapse0x35a5200() {
   return (neuron0x3586bd0()*0.0212691);
}

double NNfunction-NN_5_7::synapse0x35a5240() {
   return (neuron0x3586f10()*0.000940845);
}

double NNfunction-NN_5_7::synapse0x35a5280() {
   return (neuron0x3587250()*-0.0398372);
}

double NNfunction-NN_5_7::synapse0x35a4d10() {
   return (neuron0x3587590()*0.0558376);
}

double NNfunction-NN_5_7::synapse0x35a4d50() {
   return (neuron0x3587af0()*-0.0353685);
}

double NNfunction-NN_5_7::synapse0x35a53d0() {
   return (neuron0x3587e30()*0.011947);
}

double NNfunction-NN_5_7::synapse0x35a5410() {
   return (neuron0x3588170()*0.0450308);
}

double NNfunction-NN_5_7::synapse0x35a5450() {
   return (neuron0x35884b0()*0.0264162);
}

double NNfunction-NN_5_7::synapse0x35a5490() {
   return (neuron0x35887f0()*0.0295991);
}

double NNfunction-NN_5_7::synapse0x35a54d0() {
   return (neuron0x3588b30()*0.0222881);
}

double NNfunction-NN_5_7::synapse0x35a5510() {
   return (neuron0x3588e70()*0.171032);
}

double NNfunction-NN_5_7::synapse0x35a5890() {
   return (neuron0x3584220()*1.08326);
}

double NNfunction-NN_5_7::synapse0x35a58d0() {
   return (neuron0x35844d0()*-0.106423);
}

double NNfunction-NN_5_7::synapse0x35a5910() {
   return (neuron0x3584810()*0.642098);
}

double NNfunction-NN_5_7::synapse0x35a5950() {
   return (neuron0x3584b50()*0.224329);
}

double NNfunction-NN_5_7::synapse0x35a5990() {
   return (neuron0x3584e90()*0.165897);
}

double NNfunction-NN_5_7::synapse0x35a59d0() {
   return (neuron0x35851d0()*0.0561106);
}

double NNfunction-NN_5_7::synapse0x35a5a10() {
   return (neuron0x3585510()*-0.157304);
}

double NNfunction-NN_5_7::synapse0x35a5a50() {
   return (neuron0x3585850()*-0.0127566);
}

double NNfunction-NN_5_7::synapse0x35a5a90() {
   return (neuron0x3585b90()*-0.0180109);
}

double NNfunction-NN_5_7::synapse0x35a5ad0() {
   return (neuron0x3585ed0()*0.0398614);
}

double NNfunction-NN_5_7::synapse0x35a5b10() {
   return (neuron0x3586210()*-0.0285962);
}

double NNfunction-NN_5_7::synapse0x35a5b50() {
   return (neuron0x3586550()*-0.0241868);
}

double NNfunction-NN_5_7::synapse0x35a5b90() {
   return (neuron0x3586890()*0.0754561);
}

double NNfunction-NN_5_7::synapse0x35a5bd0() {
   return (neuron0x3586bd0()*-0.0194281);
}

double NNfunction-NN_5_7::synapse0x35a5c10() {
   return (neuron0x3586f10()*-0.00233836);
}

double NNfunction-NN_5_7::synapse0x35a5c50() {
   return (neuron0x3587250()*0.0477576);
}

double NNfunction-NN_5_7::synapse0x35a56e0() {
   return (neuron0x3587590()*0.0789939);
}

double NNfunction-NN_5_7::synapse0x35a5720() {
   return (neuron0x3587af0()*0.127806);
}

double NNfunction-NN_5_7::synapse0x35a5da0() {
   return (neuron0x3587e30()*-0.0390989);
}

double NNfunction-NN_5_7::synapse0x35a5de0() {
   return (neuron0x3588170()*-0.00628077);
}

double NNfunction-NN_5_7::synapse0x35a5e20() {
   return (neuron0x35884b0()*0.026763);
}

double NNfunction-NN_5_7::synapse0x35a5e60() {
   return (neuron0x35887f0()*-0.176406);
}

double NNfunction-NN_5_7::synapse0x35a5ea0() {
   return (neuron0x3588b30()*-0.0425777);
}

double NNfunction-NN_5_7::synapse0x35a5ee0() {
   return (neuron0x3588e70()*1.84013);
}

double NNfunction-NN_5_7::synapse0x35a6260() {
   return (neuron0x3584220()*-0.0183909);
}

double NNfunction-NN_5_7::synapse0x35a62a0() {
   return (neuron0x35844d0()*0.00875685);
}

double NNfunction-NN_5_7::synapse0x35a62e0() {
   return (neuron0x3584810()*-3.90439);
}

double NNfunction-NN_5_7::synapse0x35a6320() {
   return (neuron0x3584b50()*0.027545);
}

double NNfunction-NN_5_7::synapse0x35a6360() {
   return (neuron0x3584e90()*-0.0333361);
}

double NNfunction-NN_5_7::synapse0x35a63a0() {
   return (neuron0x35851d0()*-0.0154398);
}

double NNfunction-NN_5_7::synapse0x35a63e0() {
   return (neuron0x3585510()*-0.0152468);
}

double NNfunction-NN_5_7::synapse0x35a6420() {
   return (neuron0x3585850()*-0.000232691);
}

double NNfunction-NN_5_7::synapse0x35a6460() {
   return (neuron0x3585b90()*-0.0143165);
}

double NNfunction-NN_5_7::synapse0x35a64a0() {
   return (neuron0x3585ed0()*0.00443098);
}

double NNfunction-NN_5_7::synapse0x35a64e0() {
   return (neuron0x3586210()*-0.00270458);
}

double NNfunction-NN_5_7::synapse0x35a6520() {
   return (neuron0x3586550()*0.0298114);
}

double NNfunction-NN_5_7::synapse0x35a6560() {
   return (neuron0x3586890()*-0.00583968);
}

double NNfunction-NN_5_7::synapse0x35a65a0() {
   return (neuron0x3586bd0()*-0.0363771);
}

double NNfunction-NN_5_7::synapse0x35a65e0() {
   return (neuron0x3586f10()*-0.00412979);
}

double NNfunction-NN_5_7::synapse0x35a6620() {
   return (neuron0x3587250()*-0.0455861);
}

double NNfunction-NN_5_7::synapse0x35a60b0() {
   return (neuron0x3587590()*0.00452598);
}

double NNfunction-NN_5_7::synapse0x35a60f0() {
   return (neuron0x3587af0()*-0.0163652);
}

double NNfunction-NN_5_7::synapse0x35a6770() {
   return (neuron0x3587e30()*0.0333541);
}

double NNfunction-NN_5_7::synapse0x35a67b0() {
   return (neuron0x3588170()*0.00873106);
}

double NNfunction-NN_5_7::synapse0x35a67f0() {
   return (neuron0x35884b0()*-0.00594491);
}

double NNfunction-NN_5_7::synapse0x35a6830() {
   return (neuron0x35887f0()*0.0099335);
}

double NNfunction-NN_5_7::synapse0x35a6870() {
   return (neuron0x3588b30()*-0.00110033);
}

double NNfunction-NN_5_7::synapse0x35a68b0() {
   return (neuron0x3588e70()*4.63744);
}

double NNfunction-NN_5_7::synapse0x358f360() {
   return (neuron0x3584220()*-0.469768);
}

double NNfunction-NN_5_7::synapse0x358f3a0() {
   return (neuron0x35844d0()*-0.00715875);
}

double NNfunction-NN_5_7::synapse0x358f3e0() {
   return (neuron0x3584810()*-0.10728);
}

double NNfunction-NN_5_7::synapse0x358f420() {
   return (neuron0x3584b50()*-0.0118895);
}

double NNfunction-NN_5_7::synapse0x358f460() {
   return (neuron0x3584e90()*0.00921452);
}

double NNfunction-NN_5_7::synapse0x358f4a0() {
   return (neuron0x35851d0()*0.0134013);
}

double NNfunction-NN_5_7::synapse0x358f4e0() {
   return (neuron0x3585510()*-0.00146588);
}

double NNfunction-NN_5_7::synapse0x358f520() {
   return (neuron0x3585850()*-0.0130994);
}

double NNfunction-NN_5_7::synapse0x35a7040() {
   return (neuron0x3585b90()*-0.0090885);
}

double NNfunction-NN_5_7::synapse0x35a7080() {
   return (neuron0x3585ed0()*0.0218053);
}

double NNfunction-NN_5_7::synapse0x35a70c0() {
   return (neuron0x3586210()*0.0310034);
}

double NNfunction-NN_5_7::synapse0x35a7100() {
   return (neuron0x3586550()*-0.0545596);
}

double NNfunction-NN_5_7::synapse0x35a7140() {
   return (neuron0x3586890()*-0.0142247);
}

double NNfunction-NN_5_7::synapse0x35a7180() {
   return (neuron0x3586bd0()*-0.00196113);
}

double NNfunction-NN_5_7::synapse0x35a71c0() {
   return (neuron0x3586f10()*-0.0113491);
}

double NNfunction-NN_5_7::synapse0x35a7200() {
   return (neuron0x3587250()*0.0249834);
}

double NNfunction-NN_5_7::synapse0x35a6a80() {
   return (neuron0x3587590()*-0.0304122);
}

double NNfunction-NN_5_7::synapse0x35a6ac0() {
   return (neuron0x3587af0()*0.0514443);
}

double NNfunction-NN_5_7::synapse0x35a7350() {
   return (neuron0x3587e30()*-0.00949145);
}

double NNfunction-NN_5_7::synapse0x35a7390() {
   return (neuron0x3588170()*-0.0138025);
}

double NNfunction-NN_5_7::synapse0x35a73d0() {
   return (neuron0x35884b0()*0.0121727);
}

double NNfunction-NN_5_7::synapse0x35a7410() {
   return (neuron0x35887f0()*-0.00280049);
}

double NNfunction-NN_5_7::synapse0x35a7450() {
   return (neuron0x3588b30()*-0.0129942);
}

double NNfunction-NN_5_7::synapse0x35a7490() {
   return (neuron0x3588e70()*11.3964);
}

double NNfunction-NN_5_7::synapse0x35a7810() {
   return (neuron0x3584220()*0.713558);
}

double NNfunction-NN_5_7::synapse0x35a7850() {
   return (neuron0x35844d0()*0.0292187);
}

double NNfunction-NN_5_7::synapse0x35a7890() {
   return (neuron0x3584810()*-1.88281);
}

double NNfunction-NN_5_7::synapse0x35a78d0() {
   return (neuron0x3584b50()*0.0518675);
}

double NNfunction-NN_5_7::synapse0x35a7910() {
   return (neuron0x3584e90()*-0.0568914);
}

double NNfunction-NN_5_7::synapse0x35a7950() {
   return (neuron0x35851d0()*-0.0115541);
}

double NNfunction-NN_5_7::synapse0x35a7990() {
   return (neuron0x3585510()*-0.0066258);
}

double NNfunction-NN_5_7::synapse0x35a79d0() {
   return (neuron0x3585850()*-0.020416);
}

double NNfunction-NN_5_7::synapse0x35a7a10() {
   return (neuron0x3585b90()*-0.0280597);
}

double NNfunction-NN_5_7::synapse0x35a7a50() {
   return (neuron0x3585ed0()*0.0611123);
}

double NNfunction-NN_5_7::synapse0x35a7a90() {
   return (neuron0x3586210()*-0.0717988);
}

double NNfunction-NN_5_7::synapse0x35a7ad0() {
   return (neuron0x3586550()*-0.0896044);
}

double NNfunction-NN_5_7::synapse0x35a7b10() {
   return (neuron0x3586890()*-0.0553988);
}

double NNfunction-NN_5_7::synapse0x35a7b50() {
   return (neuron0x3586bd0()*0.00362692);
}

double NNfunction-NN_5_7::synapse0x35a7b90() {
   return (neuron0x3586f10()*0.016779);
}

double NNfunction-NN_5_7::synapse0x35a7bd0() {
   return (neuron0x3587250()*0.0365744);
}

double NNfunction-NN_5_7::synapse0x35a7660() {
   return (neuron0x3587590()*0.00144997);
}

double NNfunction-NN_5_7::synapse0x35a76a0() {
   return (neuron0x3587af0()*-0.0341026);
}

double NNfunction-NN_5_7::synapse0x35a7d20() {
   return (neuron0x3587e30()*-0.00508964);
}

double NNfunction-NN_5_7::synapse0x35a7d60() {
   return (neuron0x3588170()*-0.0178001);
}

double NNfunction-NN_5_7::synapse0x35a7da0() {
   return (neuron0x35884b0()*-0.0257171);
}

double NNfunction-NN_5_7::synapse0x35a7de0() {
   return (neuron0x35887f0()*-0.00406034);
}

double NNfunction-NN_5_7::synapse0x35a7e20() {
   return (neuron0x3588b30()*9.16798e-05);
}

double NNfunction-NN_5_7::synapse0x35a7e60() {
   return (neuron0x3588e70()*-0.321279);
}

double NNfunction-NN_5_7::synapse0x35a81e0() {
   return (neuron0x3584220()*0.442948);
}

double NNfunction-NN_5_7::synapse0x35a8220() {
   return (neuron0x35844d0()*-0.00461675);
}

double NNfunction-NN_5_7::synapse0x35a8260() {
   return (neuron0x3584810()*-0.10055);
}

double NNfunction-NN_5_7::synapse0x35a82a0() {
   return (neuron0x3584b50()*0.0503853);
}

double NNfunction-NN_5_7::synapse0x35a82e0() {
   return (neuron0x3584e90()*-0.000725722);
}

double NNfunction-NN_5_7::synapse0x35a8320() {
   return (neuron0x35851d0()*0.0387005);
}

double NNfunction-NN_5_7::synapse0x35a8360() {
   return (neuron0x3585510()*0.00287172);
}

double NNfunction-NN_5_7::synapse0x35a83a0() {
   return (neuron0x3585850()*-0.327488);
}

double NNfunction-NN_5_7::synapse0x35a83e0() {
   return (neuron0x3585b90()*0.122923);
}

double NNfunction-NN_5_7::synapse0x35a8420() {
   return (neuron0x3585ed0()*-0.120509);
}

double NNfunction-NN_5_7::synapse0x35a8460() {
   return (neuron0x3586210()*0.340756);
}

double NNfunction-NN_5_7::synapse0x35a84a0() {
   return (neuron0x3586550()*0.399511);
}

double NNfunction-NN_5_7::synapse0x35a84e0() {
   return (neuron0x3586890()*0.158312);
}

double NNfunction-NN_5_7::synapse0x35a8520() {
   return (neuron0x3586bd0()*0.129811);
}

double NNfunction-NN_5_7::synapse0x35a8560() {
   return (neuron0x3586f10()*0.0946807);
}

double NNfunction-NN_5_7::synapse0x35a85a0() {
   return (neuron0x3587250()*-0.00294937);
}

double NNfunction-NN_5_7::synapse0x35a8030() {
   return (neuron0x3587590()*-0.0464002);
}

double NNfunction-NN_5_7::synapse0x35a8070() {
   return (neuron0x3587af0()*0.26192);
}

double NNfunction-NN_5_7::synapse0x3598ba0() {
   return (neuron0x3587e30()*-2.14327e-05);
}

double NNfunction-NN_5_7::synapse0x3598be0() {
   return (neuron0x3588170()*0.289876);
}

double NNfunction-NN_5_7::synapse0x3598c20() {
   return (neuron0x35884b0()*0.0567951);
}

double NNfunction-NN_5_7::synapse0x3598c60() {
   return (neuron0x35887f0()*0.0419962);
}

double NNfunction-NN_5_7::synapse0x3598ca0() {
   return (neuron0x3588b30()*-0.146537);
}

double NNfunction-NN_5_7::synapse0x3598ce0() {
   return (neuron0x3588e70()*-1.64583);
}

double NNfunction-NN_5_7::synapse0x3599060() {
   return (neuron0x3584220()*-0.00296992);
}

double NNfunction-NN_5_7::synapse0x35990a0() {
   return (neuron0x35844d0()*-0.00273509);
}

double NNfunction-NN_5_7::synapse0x35990e0() {
   return (neuron0x3584810()*-1.955);
}

double NNfunction-NN_5_7::synapse0x3599120() {
   return (neuron0x3584b50()*1.37103e-05);
}

double NNfunction-NN_5_7::synapse0x3599160() {
   return (neuron0x3584e90()*0.0394347);
}

double NNfunction-NN_5_7::synapse0x35991a0() {
   return (neuron0x35851d0()*-0.00977069);
}

double NNfunction-NN_5_7::synapse0x35991e0() {
   return (neuron0x3585510()*-0.00731109);
}

double NNfunction-NN_5_7::synapse0x3599220() {
   return (neuron0x3585850()*-0.0208545);
}

double NNfunction-NN_5_7::synapse0x3599260() {
   return (neuron0x3585b90()*-0.00358637);
}

double NNfunction-NN_5_7::synapse0x35992a0() {
   return (neuron0x3585ed0()*-0.00360326);
}

double NNfunction-NN_5_7::synapse0x35992e0() {
   return (neuron0x3586210()*0.0152965);
}

double NNfunction-NN_5_7::synapse0x3599320() {
   return (neuron0x3586550()*0.938995);
}

double NNfunction-NN_5_7::synapse0x3599360() {
   return (neuron0x3586890()*0.00056711);
}

double NNfunction-NN_5_7::synapse0x35993a0() {
   return (neuron0x3586bd0()*0.00979559);
}

double NNfunction-NN_5_7::synapse0x35993e0() {
   return (neuron0x3586f10()*-0.00208583);
}

double NNfunction-NN_5_7::synapse0x3599420() {
   return (neuron0x3587250()*-0.0135593);
}

double NNfunction-NN_5_7::synapse0x3598eb0() {
   return (neuron0x3587590()*0.0246678);
}

double NNfunction-NN_5_7::synapse0x3598ef0() {
   return (neuron0x3587af0()*-0.00898823);
}

double NNfunction-NN_5_7::synapse0x3599570() {
   return (neuron0x3587e30()*0.0129334);
}

double NNfunction-NN_5_7::synapse0x35995b0() {
   return (neuron0x3588170()*0.0180463);
}

double NNfunction-NN_5_7::synapse0x35995f0() {
   return (neuron0x35884b0()*0.0108495);
}

double NNfunction-NN_5_7::synapse0x3599630() {
   return (neuron0x35887f0()*0.0113401);
}

double NNfunction-NN_5_7::synapse0x3599670() {
   return (neuron0x3588b30()*0.0142955);
}

double NNfunction-NN_5_7::synapse0x35996b0() {
   return (neuron0x3588e70()*0.0428867);
}

double NNfunction-NN_5_7::synapse0x3599a30() {
   return (neuron0x3584220()*0.0349993);
}

double NNfunction-NN_5_7::synapse0x3599a70() {
   return (neuron0x35844d0()*0.0499999);
}

double NNfunction-NN_5_7::synapse0x3599ab0() {
   return (neuron0x3584810()*0.694023);
}

double NNfunction-NN_5_7::synapse0x3599af0() {
   return (neuron0x3584b50()*0.357964);
}

double NNfunction-NN_5_7::synapse0x3599b30() {
   return (neuron0x3584e90()*0.0177283);
}

double NNfunction-NN_5_7::synapse0x3599b70() {
   return (neuron0x35851d0()*0.0149637);
}

double NNfunction-NN_5_7::synapse0x3599bb0() {
   return (neuron0x3585510()*0.00731828);
}

double NNfunction-NN_5_7::synapse0x3599bf0() {
   return (neuron0x3585850()*0.00524118);
}

double NNfunction-NN_5_7::synapse0x3599c30() {
   return (neuron0x3585b90()*-0.00585829);
}

double NNfunction-NN_5_7::synapse0x3599c70() {
   return (neuron0x3585ed0()*-0.0124531);
}

double NNfunction-NN_5_7::synapse0x3599cb0() {
   return (neuron0x3586210()*0.0274559);
}

double NNfunction-NN_5_7::synapse0x3599cf0() {
   return (neuron0x3586550()*0.288935);
}

double NNfunction-NN_5_7::synapse0x3599d30() {
   return (neuron0x3586890()*0.0401732);
}

double NNfunction-NN_5_7::synapse0x3599d70() {
   return (neuron0x3586bd0()*0.0298115);
}

double NNfunction-NN_5_7::synapse0x3599db0() {
   return (neuron0x3586f10()*0.0221191);
}

double NNfunction-NN_5_7::synapse0x3599df0() {
   return (neuron0x3587250()*0.0166651);
}

double NNfunction-NN_5_7::synapse0x3599880() {
   return (neuron0x3587590()*0.0727411);
}

double NNfunction-NN_5_7::synapse0x35998c0() {
   return (neuron0x3587af0()*-0.00297978);
}

double NNfunction-NN_5_7::synapse0x3599f40() {
   return (neuron0x3587e30()*0.0470385);
}

double NNfunction-NN_5_7::synapse0x3599f80() {
   return (neuron0x3588170()*0.00193832);
}

double NNfunction-NN_5_7::synapse0x3599fc0() {
   return (neuron0x35884b0()*-0.0427098);
}

double NNfunction-NN_5_7::synapse0x359a000() {
   return (neuron0x35887f0()*-0.0252273);
}

double NNfunction-NN_5_7::synapse0x359a040() {
   return (neuron0x3588b30()*-0.00552006);
}

double NNfunction-NN_5_7::synapse0x359a080() {
   return (neuron0x3588e70()*0.0908516);
}

double NNfunction-NN_5_7::synapse0x359a400() {
   return (neuron0x3584220()*0.00586128);
}

double NNfunction-NN_5_7::synapse0x359a440() {
   return (neuron0x35844d0()*-0.00222079);
}

double NNfunction-NN_5_7::synapse0x359a480() {
   return (neuron0x3584810()*2.38472);
}

double NNfunction-NN_5_7::synapse0x359a4c0() {
   return (neuron0x3584b50()*0.00666176);
}

double NNfunction-NN_5_7::synapse0x359a500() {
   return (neuron0x3584e90()*0.00591831);
}

double NNfunction-NN_5_7::synapse0x359a540() {
   return (neuron0x35851d0()*-0.00364578);
}

double NNfunction-NN_5_7::synapse0x359a580() {
   return (neuron0x3585510()*0.00722575);
}

double NNfunction-NN_5_7::synapse0x359a5c0() {
   return (neuron0x3585850()*0.026034);
}

double NNfunction-NN_5_7::synapse0x359a600() {
   return (neuron0x3585b90()*0.00183544);
}

double NNfunction-NN_5_7::synapse0x359a640() {
   return (neuron0x3585ed0()*-0.00515915);
}

double NNfunction-NN_5_7::synapse0x359a680() {
   return (neuron0x3586210()*0.039756);
}

double NNfunction-NN_5_7::synapse0x359a6c0() {
   return (neuron0x3586550()*-0.548506);
}

double NNfunction-NN_5_7::synapse0x359a700() {
   return (neuron0x3586890()*-0.0166687);
}

double NNfunction-NN_5_7::synapse0x359a740() {
   return (neuron0x3586bd0()*0.0410841);
}

double NNfunction-NN_5_7::synapse0x359a780() {
   return (neuron0x3586f10()*0.00120501);
}

double NNfunction-NN_5_7::synapse0x359a7c0() {
   return (neuron0x3587250()*-0.00851535);
}

double NNfunction-NN_5_7::synapse0x359a250() {
   return (neuron0x3587590()*-0.00333301);
}

double NNfunction-NN_5_7::synapse0x359a290() {
   return (neuron0x3587af0()*0.00215021);
}

double NNfunction-NN_5_7::synapse0x359a910() {
   return (neuron0x3587e30()*0.0143301);
}

double NNfunction-NN_5_7::synapse0x359a950() {
   return (neuron0x3588170()*-0.00121742);
}

double NNfunction-NN_5_7::synapse0x359a990() {
   return (neuron0x35884b0()*-0.0144441);
}

double NNfunction-NN_5_7::synapse0x359a9d0() {
   return (neuron0x35887f0()*0.00256092);
}

double NNfunction-NN_5_7::synapse0x359aa10() {
   return (neuron0x3588b30()*-0.00356725);
}

double NNfunction-NN_5_7::synapse0x359aa50() {
   return (neuron0x3588e70()*3.35261);
}

double NNfunction-NN_5_7::synapse0x35ac920() {
   return (neuron0x3584220()*0.00813186);
}

double NNfunction-NN_5_7::synapse0x35ac960() {
   return (neuron0x35844d0()*-0.0156094);
}

double NNfunction-NN_5_7::synapse0x35ac9a0() {
   return (neuron0x3584810()*6.66551);
}

double NNfunction-NN_5_7::synapse0x35ac9e0() {
   return (neuron0x3584b50()*-0.0258998);
}

double NNfunction-NN_5_7::synapse0x35aca20() {
   return (neuron0x3584e90()*-0.0138491);
}

double NNfunction-NN_5_7::synapse0x35aca60() {
   return (neuron0x35851d0()*-0.000563405);
}

double NNfunction-NN_5_7::synapse0x35acaa0() {
   return (neuron0x3585510()*0.0208163);
}

double NNfunction-NN_5_7::synapse0x35acae0() {
   return (neuron0x3585850()*0.030119);
}

double NNfunction-NN_5_7::synapse0x35acb20() {
   return (neuron0x3585b90()*-0.00704726);
}

double NNfunction-NN_5_7::synapse0x35acb60() {
   return (neuron0x3585ed0()*-0.0105669);
}

double NNfunction-NN_5_7::synapse0x35acba0() {
   return (neuron0x3586210()*0.00236651);
}

double NNfunction-NN_5_7::synapse0x35acbe0() {
   return (neuron0x3586550()*-0.198106);
}

double NNfunction-NN_5_7::synapse0x35acc20() {
   return (neuron0x3586890()*0.00401537);
}

double NNfunction-NN_5_7::synapse0x35acc60() {
   return (neuron0x3586bd0()*0.0204554);
}

double NNfunction-NN_5_7::synapse0x35acca0() {
   return (neuron0x3586f10()*0.00673428);
}

double NNfunction-NN_5_7::synapse0x35acce0() {
   return (neuron0x3587250()*0.000332978);
}

double NNfunction-NN_5_7::synapse0x359aa90() {
   return (neuron0x3587590()*-0.0269666);
}

double NNfunction-NN_5_7::synapse0x359aad0() {
   return (neuron0x3587af0()*0.0129081);
}

double NNfunction-NN_5_7::synapse0x35ace30() {
   return (neuron0x3587e30()*0.00619142);
}

double NNfunction-NN_5_7::synapse0x35ace70() {
   return (neuron0x3588170()*-0.00510874);
}

double NNfunction-NN_5_7::synapse0x35aceb0() {
   return (neuron0x35884b0()*-0.0390475);
}

double NNfunction-NN_5_7::synapse0x35acef0() {
   return (neuron0x35887f0()*0.00298415);
}

double NNfunction-NN_5_7::synapse0x35acf30() {
   return (neuron0x3588b30()*0.00608936);
}

double NNfunction-NN_5_7::synapse0x35acf70() {
   return (neuron0x3588e70()*7.78819);
}

double NNfunction-NN_5_7::synapse0x35ad2f0() {
   return (neuron0x3584220()*-1.0952);
}

double NNfunction-NN_5_7::synapse0x35ad330() {
   return (neuron0x35844d0()*-0.0449413);
}

double NNfunction-NN_5_7::synapse0x35ad370() {
   return (neuron0x3584810()*-0.281073);
}

double NNfunction-NN_5_7::synapse0x35ad3b0() {
   return (neuron0x3584b50()*0.0551927);
}

double NNfunction-NN_5_7::synapse0x35ad3f0() {
   return (neuron0x3584e90()*-0.0509821);
}

double NNfunction-NN_5_7::synapse0x35ad430() {
   return (neuron0x35851d0()*0.0178767);
}

double NNfunction-NN_5_7::synapse0x35ad470() {
   return (neuron0x3585510()*-0.00941948);
}

double NNfunction-NN_5_7::synapse0x35ad4b0() {
   return (neuron0x3585850()*-0.0177314);
}

double NNfunction-NN_5_7::synapse0x35ad4f0() {
   return (neuron0x3585b90()*-0.0228873);
}

double NNfunction-NN_5_7::synapse0x35ad530() {
   return (neuron0x3585ed0()*0.0136575);
}

double NNfunction-NN_5_7::synapse0x35ad570() {
   return (neuron0x3586210()*0.0514831);
}

double NNfunction-NN_5_7::synapse0x35ad5b0() {
   return (neuron0x3586550()*-0.0869893);
}

double NNfunction-NN_5_7::synapse0x35ad5f0() {
   return (neuron0x3586890()*-0.0086534);
}

double NNfunction-NN_5_7::synapse0x35ad630() {
   return (neuron0x3586bd0()*-0.0739304);
}

double NNfunction-NN_5_7::synapse0x35ad670() {
   return (neuron0x3586f10()*-0.0239434);
}

double NNfunction-NN_5_7::synapse0x35ad6b0() {
   return (neuron0x3587250()*0.0230227);
}

double NNfunction-NN_5_7::synapse0x35ad140() {
   return (neuron0x3587590()*0.000250011);
}

double NNfunction-NN_5_7::synapse0x35ad180() {
   return (neuron0x3587af0()*0.0707625);
}

double NNfunction-NN_5_7::synapse0x35ad800() {
   return (neuron0x3587e30()*-0.030855);
}

double NNfunction-NN_5_7::synapse0x35ad840() {
   return (neuron0x3588170()*-0.0224434);
}

double NNfunction-NN_5_7::synapse0x35ad880() {
   return (neuron0x35884b0()*0.0280049);
}

double NNfunction-NN_5_7::synapse0x35ad8c0() {
   return (neuron0x35887f0()*-0.0834729);
}

double NNfunction-NN_5_7::synapse0x35ad900() {
   return (neuron0x3588b30()*0.0129508);
}

double NNfunction-NN_5_7::synapse0x35ad940() {
   return (neuron0x3588e70()*4.10178);
}

double NNfunction-NN_5_7::synapse0x35adcc0() {
   return (neuron0x3584220()*-1.94542);
}

double NNfunction-NN_5_7::synapse0x35add00() {
   return (neuron0x35844d0()*-0.0800864);
}

double NNfunction-NN_5_7::synapse0x35add40() {
   return (neuron0x3584810()*2.21574);
}

double NNfunction-NN_5_7::synapse0x35add80() {
   return (neuron0x3584b50()*-0.135139);
}

double NNfunction-NN_5_7::synapse0x35addc0() {
   return (neuron0x3584e90()*0.130457);
}

double NNfunction-NN_5_7::synapse0x35ade00() {
   return (neuron0x35851d0()*-0.0345106);
}

double NNfunction-NN_5_7::synapse0x35ade40() {
   return (neuron0x3585510()*-0.000800683);
}

double NNfunction-NN_5_7::synapse0x35ade80() {
   return (neuron0x3585850()*-0.0108132);
}

double NNfunction-NN_5_7::synapse0x35adec0() {
   return (neuron0x3585b90()*-0.0469502);
}

double NNfunction-NN_5_7::synapse0x35adf00() {
   return (neuron0x3585ed0()*-0.0535233);
}

double NNfunction-NN_5_7::synapse0x35adf40() {
   return (neuron0x3586210()*0.0546704);
}

double NNfunction-NN_5_7::synapse0x35adf80() {
   return (neuron0x3586550()*-0.0180916);
}

double NNfunction-NN_5_7::synapse0x35adfc0() {
   return (neuron0x3586890()*0.0128294);
}

double NNfunction-NN_5_7::synapse0x35ae000() {
   return (neuron0x3586bd0()*-0.0176678);
}

double NNfunction-NN_5_7::synapse0x35ae040() {
   return (neuron0x3586f10()*0.0436783);
}

double NNfunction-NN_5_7::synapse0x35ae080() {
   return (neuron0x3587250()*-0.00696528);
}

double NNfunction-NN_5_7::synapse0x35adb10() {
   return (neuron0x3587590()*-0.0196978);
}

double NNfunction-NN_5_7::synapse0x35adb50() {
   return (neuron0x3587af0()*-0.0279356);
}

double NNfunction-NN_5_7::synapse0x35ae1d0() {
   return (neuron0x3587e30()*-0.0157763);
}

double NNfunction-NN_5_7::synapse0x35ae210() {
   return (neuron0x3588170()*-0.0320882);
}

double NNfunction-NN_5_7::synapse0x35ae250() {
   return (neuron0x35884b0()*0.0370449);
}

double NNfunction-NN_5_7::synapse0x35ae290() {
   return (neuron0x35887f0()*0.0636736);
}

double NNfunction-NN_5_7::synapse0x35ae2d0() {
   return (neuron0x3588b30()*0.0118535);
}

double NNfunction-NN_5_7::synapse0x35ae310() {
   return (neuron0x3588e70()*0.276972);
}

double NNfunction-NN_5_7::synapse0x35ae690() {
   return (neuron0x3584220()*-0.282593);
}

double NNfunction-NN_5_7::synapse0x35ae6d0() {
   return (neuron0x35844d0()*0.129169);
}

double NNfunction-NN_5_7::synapse0x35ae710() {
   return (neuron0x3584810()*0.177242);
}

double NNfunction-NN_5_7::synapse0x35ae750() {
   return (neuron0x3584b50()*0.0954846);
}

double NNfunction-NN_5_7::synapse0x35ae790() {
   return (neuron0x3584e90()*0.385602);
}

double NNfunction-NN_5_7::synapse0x35ae7d0() {
   return (neuron0x35851d0()*-0.374973);
}

double NNfunction-NN_5_7::synapse0x35ae810() {
   return (neuron0x3585510()*0.174892);
}

double NNfunction-NN_5_7::synapse0x35ae850() {
   return (neuron0x3585850()*-0.193371);
}

double NNfunction-NN_5_7::synapse0x35ae890() {
   return (neuron0x3585b90()*-0.341347);
}

double NNfunction-NN_5_7::synapse0x35ae8d0() {
   return (neuron0x3585ed0()*0.223177);
}

double NNfunction-NN_5_7::synapse0x35ae910() {
   return (neuron0x3586210()*0.149952);
}

double NNfunction-NN_5_7::synapse0x35ae950() {
   return (neuron0x3586550()*-0.203763);
}

double NNfunction-NN_5_7::synapse0x35ae990() {
   return (neuron0x3586890()*-0.295301);
}

double NNfunction-NN_5_7::synapse0x35ae9d0() {
   return (neuron0x3586bd0()*-0.383094);
}

double NNfunction-NN_5_7::synapse0x35aea10() {
   return (neuron0x3586f10()*0.24277);
}

double NNfunction-NN_5_7::synapse0x35aea50() {
   return (neuron0x3587250()*-0.305544);
}

double NNfunction-NN_5_7::synapse0x35ae4e0() {
   return (neuron0x3587590()*-0.258525);
}

double NNfunction-NN_5_7::synapse0x35ae520() {
   return (neuron0x3587af0()*-0.303147);
}

double NNfunction-NN_5_7::synapse0x35aeba0() {
   return (neuron0x3587e30()*0.283374);
}

double NNfunction-NN_5_7::synapse0x35aebe0() {
   return (neuron0x3588170()*0.469631);
}

double NNfunction-NN_5_7::synapse0x35aec20() {
   return (neuron0x35884b0()*0.469007);
}

double NNfunction-NN_5_7::synapse0x35aec60() {
   return (neuron0x35887f0()*0.287629);
}

double NNfunction-NN_5_7::synapse0x35aeca0() {
   return (neuron0x3588b30()*0.0530428);
}

double NNfunction-NN_5_7::synapse0x35aece0() {
   return (neuron0x3588e70()*0.219117);
}

double NNfunction-NN_5_7::synapse0x358a130() {
   return (neuron0x35892e0()*3.41057);
}

double NNfunction-NN_5_7::synapse0x358a170() {
   return (neuron0x3589b20()*-0.589086);
}

double NNfunction-NN_5_7::synapse0x358b690() {
   return (neuron0x358a600()*1.10853);
}

double NNfunction-NN_5_7::synapse0x358b6d0() {
   return (neuron0x3344f10()*-0.0718622);
}

double NNfunction-NN_5_7::synapse0x358d160() {
   return (neuron0x358b3e0()*-0.689001);
}

double NNfunction-NN_5_7::synapse0x358d1a0() {
   return (neuron0x358ceb0()*-0.351827);
}

double NNfunction-NN_5_7::synapse0x358df30() {
   return (neuron0x358dc80()*-0.994787);
}

double NNfunction-NN_5_7::synapse0x358df70() {
   return (neuron0x358e650()*2.1887);
}

double NNfunction-NN_5_7::synapse0x358e900() {
   return (neuron0x358f020()*-1.75545);
}

double NNfunction-NN_5_7::synapse0x358e940() {
   return (neuron0x358fb00()*1.04848);
}

double NNfunction-NN_5_7::synapse0x358f2d0() {
   return (neuron0x35904d0()*-5.45539);
}

double NNfunction-NN_5_7::synapse0x358f310() {
   return (neuron0x358d5b0()*0.211491);
}

double NNfunction-NN_5_7::synapse0x358fdb0() {
   return (neuron0x3592080()*-0.332349);
}

double NNfunction-NN_5_7::synapse0x358fdf0() {
   return (neuron0x3592a50()*2.84459);
}

double NNfunction-NN_5_7::synapse0x3590780() {
   return (neuron0x3593420()*-1.21571);
}

double NNfunction-NN_5_7::synapse0x35907c0() {
   return (neuron0x3593df0()*-0.34502);
}

double NNfunction-NN_5_7::synapse0x358d860() {
   return (neuron0x3595c00()*-0.0867121);
}

double NNfunction-NN_5_7::synapse0x358d8a0() {
   return (neuron0x3595ee0()*-1.2653);
}

double NNfunction-NN_5_7::synapse0x3592330() {
   return (neuron0x35968b0()*-0.0672343);
}

double NNfunction-NN_5_7::synapse0x3592370() {
   return (neuron0x3597280()*-1.02697);
}

double NNfunction-NN_5_7::synapse0x3592d00() {
   return (neuron0x3597c50()*0.17082);
}

double NNfunction-NN_5_7::synapse0x3592d40() {
   return (neuron0x3598620()*-0.120115);
}

double NNfunction-NN_5_7::synapse0x35936d0() {
   return (neuron0x3591170()*1.56988);
}

double NNfunction-NN_5_7::synapse0x3593710() {
   return (neuron0x3591b40()*0.0256979);
}

double NNfunction-NN_5_7::synapse0x35940a0() {
   return (neuron0x359b3b0()*0.0816608);
}

double NNfunction-NN_5_7::synapse0x35940e0() {
   return (neuron0x359bd80()*-0.132958);
}

double NNfunction-NN_5_7::synapse0x3587130() {
   return (neuron0x359c750()*0.0246539);
}

double NNfunction-NN_5_7::synapse0x3587170() {
   return (neuron0x359d120()*-3.54183);
}

double NNfunction-NN_5_7::synapse0x3596190() {
   return (neuron0x359daf0()*-3.15471);
}

double NNfunction-NN_5_7::synapse0x35961d0() {
   return (neuron0x359e4c0()*-1.06715);
}

double NNfunction-NN_5_7::synapse0x3596b60() {
   return (neuron0x359ee90()*2.8951);
}

double NNfunction-NN_5_7::synapse0x3596ba0() {
   return (neuron0x359f860()*-1.15353);
}

double NNfunction-NN_5_7::synapse0x3597530() {
   return (neuron0x35958f0()*-0.808218);
}

double NNfunction-NN_5_7::synapse0x3597570() {
   return (neuron0x35a2440()*0.301483);
}

double NNfunction-NN_5_7::synapse0x3597f00() {
   return (neuron0x35a2e10()*-0.132806);
}

double NNfunction-NN_5_7::synapse0x3597f40() {
   return (neuron0x35a37e0()*-0.61872);
}

double NNfunction-NN_5_7::synapse0x35988d0() {
   return (neuron0x35a41b0()*0.0105493);
}

double NNfunction-NN_5_7::synapse0x3598910() {
   return (neuron0x35a4b80()*-0.376934);
}

double NNfunction-NN_5_7::synapse0x3591420() {
   return (neuron0x35a5550()*1.40212);
}

double NNfunction-NN_5_7::synapse0x3591460() {
   return (neuron0x35a5f20()*0.390371);
}

double NNfunction-NN_5_7::synapse0x359acd0() {
   return (neuron0x35a68f0()*3.15532);
}

double NNfunction-NN_5_7::synapse0x359ad10() {
   return (neuron0x35a74d0()*0.895091);
}

double NNfunction-NN_5_7::synapse0x359b660() {
   return (neuron0x35a7ea0()*-0.87116);
}

double NNfunction-NN_5_7::synapse0x359b6a0() {
   return (neuron0x3598d20()*0.328608);
}

double NNfunction-NN_5_7::synapse0x359c030() {
   return (neuron0x35996f0()*0.406485);
}

double NNfunction-NN_5_7::synapse0x359c070() {
   return (neuron0x359a0c0()*0.615701);
}

double NNfunction-NN_5_7::synapse0x359ca00() {
   return (neuron0x35ac700()*-2.15983);
}

double NNfunction-NN_5_7::synapse0x359ca40() {
   return (neuron0x35acfb0()*2.73829);
}

double NNfunction-NN_5_7::synapse0x359d3d0() {
   return (neuron0x35ad980()*-0.340488);
}

double NNfunction-NN_5_7::synapse0x359d410() {
   return (neuron0x35ae350()*0.184952);
}

double NNfunction-NN_5_7::synapse0x359fb10() {
   return (neuron0x35892e0()*2.09944);
}

double NNfunction-NN_5_7::synapse0x359fb50() {
   return (neuron0x3589b20()*-1.00798);
}

double NNfunction-NN_5_7::synapse0x35950d0() {
   return (neuron0x358a600()*0.963249);
}

double NNfunction-NN_5_7::synapse0x3595110() {
   return (neuron0x3344f10()*0.0631464);
}

double NNfunction-NN_5_7::synapse0x35a26f0() {
   return (neuron0x358b3e0()*-0.00754692);
}

double NNfunction-NN_5_7::synapse0x35a2730() {
   return (neuron0x358ceb0()*-0.623229);
}

double NNfunction-NN_5_7::synapse0x35a30c0() {
   return (neuron0x358dc80()*-0.378819);
}

double NNfunction-NN_5_7::synapse0x35a3100() {
   return (neuron0x358e650()*1.21213);
}

double NNfunction-NN_5_7::synapse0x35a3a90() {
   return (neuron0x358f020()*-2.01198);
}

double NNfunction-NN_5_7::synapse0x35a3ad0() {
   return (neuron0x358fb00()*-0.428709);
}

double NNfunction-NN_5_7::synapse0x35a4460() {
   return (neuron0x35904d0()*-2.8174);
}

double NNfunction-NN_5_7::synapse0x35a44a0() {
   return (neuron0x358d5b0()*0.175563);
}

double NNfunction-NN_5_7::synapse0x35a4e30() {
   return (neuron0x3592080()*-0.494695);
}

double NNfunction-NN_5_7::synapse0x35a4e70() {
   return (neuron0x3592a50()*0.829675);
}

double NNfunction-NN_5_7::synapse0x35a5800() {
   return (neuron0x3593420()*-0.668827);
}

double NNfunction-NN_5_7::synapse0x35a5840() {
   return (neuron0x3593df0()*-0.138245);
}

double NNfunction-NN_5_7::synapse0x35a61d0() {
   return (neuron0x3595c00()*0.128161);
}

double NNfunction-NN_5_7::synapse0x35a6210() {
   return (neuron0x3595ee0()*-1.75121);
}

double NNfunction-NN_5_7::synapse0x35a6ba0() {
   return (neuron0x35968b0()*-0.399054);
}

double NNfunction-NN_5_7::synapse0x35a6be0() {
   return (neuron0x3597280()*-0.515087);
}

double NNfunction-NN_5_7::synapse0x35a7780() {
   return (neuron0x3597c50()*-0.499703);
}

double NNfunction-NN_5_7::synapse0x35a77c0() {
   return (neuron0x3598620()*-0.621345);
}

double NNfunction-NN_5_7::synapse0x35a8150() {
   return (neuron0x3591170()*1.1254);
}

double NNfunction-NN_5_7::synapse0x35a8190() {
   return (neuron0x3591b40()*0.0395525);
}

double NNfunction-NN_5_7::synapse0x3598fd0() {
   return (neuron0x359b3b0()*0.186134);
}

double NNfunction-NN_5_7::synapse0x3599010() {
   return (neuron0x359bd80()*-0.0599005);
}

double NNfunction-NN_5_7::synapse0x35999a0() {
   return (neuron0x359c750()*0.16332);
}

double NNfunction-NN_5_7::synapse0x35999e0() {
   return (neuron0x359d120()*-3.05026);
}

double NNfunction-NN_5_7::synapse0x359a370() {
   return (neuron0x359daf0()*-1.66952);
}

double NNfunction-NN_5_7::synapse0x359a3b0() {
   return (neuron0x359e4c0()*0.570929);
}

double NNfunction-NN_5_7::synapse0x35ac890() {
   return (neuron0x359ee90()*1.71222);
}

double NNfunction-NN_5_7::synapse0x35ac8d0() {
   return (neuron0x359f860()*0.701817);
}

double NNfunction-NN_5_7::synapse0x35ad260() {
   return (neuron0x35958f0()*0.0114575);
}

double NNfunction-NN_5_7::synapse0x35ad2a0() {
   return (neuron0x35a2440()*-2.17633);
}

double NNfunction-NN_5_7::synapse0x35adc30() {
   return (neuron0x35a2e10()*0.173512);
}

double NNfunction-NN_5_7::synapse0x35adc70() {
   return (neuron0x35a37e0()*0.26765);
}

double NNfunction-NN_5_7::synapse0x35ae600() {
   return (neuron0x35a41b0()*-0.533661);
}

double NNfunction-NN_5_7::synapse0x35ae640() {
   return (neuron0x35a4b80()*-0.326927);
}

double NNfunction-NN_5_7::synapse0x3589590() {
   return (neuron0x35a5550()*0.557414);
}

double NNfunction-NN_5_7::synapse0x35895d0() {
   return (neuron0x35a5f20()*-1.01434);
}

double NNfunction-NN_5_7::synapse0x359dda0() {
   return (neuron0x35a68f0()*4.83077);
}

double NNfunction-NN_5_7::synapse0x359dde0() {
   return (neuron0x35a74d0()*0.789103);
}

double NNfunction-NN_5_7::synapse0x35aed20() {
   return (neuron0x35a7ea0()*-0.0328637);
}

double NNfunction-NN_5_7::synapse0x35aed60() {
   return (neuron0x3598d20()*0.196102);
}

double NNfunction-NN_5_7::synapse0x35aeda0() {
   return (neuron0x35996f0()*0.503609);
}

double NNfunction-NN_5_7::synapse0x35aede0() {
   return (neuron0x359a0c0()*0.325221);
}

double NNfunction-NN_5_7::synapse0x35b5c90() {
   return (neuron0x35ac700()*-0.905791);
}

double NNfunction-NN_5_7::synapse0x35b5cd0() {
   return (neuron0x35acfb0()*-1.11683);
}

double NNfunction-NN_5_7::synapse0x35b5d10() {
   return (neuron0x35ad980()*0.020829);
}

double NNfunction-NN_5_7::synapse0x35b5d50() {
   return (neuron0x35ae350()*-0.0372873);
}

double NNfunction-NN_5_7::synapse0x35b60d0() {
   return (neuron0x35892e0()*-1.51061);
}

double NNfunction-NN_5_7::synapse0x35b6110() {
   return (neuron0x3589b20()*1.33119);
}

double NNfunction-NN_5_7::synapse0x35b6150() {
   return (neuron0x358a600()*-0.451384);
}

double NNfunction-NN_5_7::synapse0x35b6190() {
   return (neuron0x3344f10()*1.49104);
}

double NNfunction-NN_5_7::synapse0x35b61d0() {
   return (neuron0x358b3e0()*-0.313763);
}

double NNfunction-NN_5_7::synapse0x35b6210() {
   return (neuron0x358ceb0()*-0.860478);
}

double NNfunction-NN_5_7::synapse0x35b6250() {
   return (neuron0x358dc80()*1.55679);
}

double NNfunction-NN_5_7::synapse0x35b6290() {
   return (neuron0x358e650()*-0.295631);
}

double NNfunction-NN_5_7::synapse0x35b62d0() {
   return (neuron0x358f020()*0.509878);
}

double NNfunction-NN_5_7::synapse0x35b6310() {
   return (neuron0x358fb00()*-2.76632);
}

double NNfunction-NN_5_7::synapse0x35b6350() {
   return (neuron0x35904d0()*-1.33489);
}

double NNfunction-NN_5_7::synapse0x35b6390() {
   return (neuron0x358d5b0()*-1.05753);
}

double NNfunction-NN_5_7::synapse0x35b63d0() {
   return (neuron0x3592080()*0.3721);
}

double NNfunction-NN_5_7::synapse0x35b6410() {
   return (neuron0x3592a50()*-2.1355);
}

double NNfunction-NN_5_7::synapse0x35b6450() {
   return (neuron0x3593420()*1.06232);
}

double NNfunction-NN_5_7::synapse0x35b6490() {
   return (neuron0x3593df0()*-0.865983);
}

double NNfunction-NN_5_7::synapse0x35b5f20() {
   return (neuron0x3595c00()*0.922775);
}

double NNfunction-NN_5_7::synapse0x35b5f60() {
   return (neuron0x3595ee0()*-0.181563);
}

double NNfunction-NN_5_7::synapse0x35b65e0() {
   return (neuron0x35968b0()*-0.0404733);
}

double NNfunction-NN_5_7::synapse0x35b6620() {
   return (neuron0x3597280()*0.155591);
}

double NNfunction-NN_5_7::synapse0x35b6660() {
   return (neuron0x3597c50()*-0.188306);
}

double NNfunction-NN_5_7::synapse0x35b66a0() {
   return (neuron0x3598620()*-0.469687);
}

double NNfunction-NN_5_7::synapse0x35b66e0() {
   return (neuron0x3591170()*-0.608627);
}

double NNfunction-NN_5_7::synapse0x35b6720() {
   return (neuron0x3591b40()*0.149773);
}

double NNfunction-NN_5_7::synapse0x35b6760() {
   return (neuron0x359b3b0()*-1.69704);
}

double NNfunction-NN_5_7::synapse0x35b67a0() {
   return (neuron0x359bd80()*-0.175395);
}

double NNfunction-NN_5_7::synapse0x35b67e0() {
   return (neuron0x359c750()*0.382113);
}

double NNfunction-NN_5_7::synapse0x35b6820() {
   return (neuron0x359d120()*3.69458);
}

double NNfunction-NN_5_7::synapse0x35b6860() {
   return (neuron0x359daf0()*-0.590105);
}

double NNfunction-NN_5_7::synapse0x35b68a0() {
   return (neuron0x359e4c0()*-0.623989);
}

double NNfunction-NN_5_7::synapse0x35b68e0() {
   return (neuron0x359ee90()*-0.347738);
}

double NNfunction-NN_5_7::synapse0x35b6920() {
   return (neuron0x359f860()*0.898125);
}

double NNfunction-NN_5_7::synapse0x35b64d0() {
   return (neuron0x35958f0()*0.285675);
}

double NNfunction-NN_5_7::synapse0x35b6510() {
   return (neuron0x35a2440()*-1.85922);
}

double NNfunction-NN_5_7::synapse0x35b6550() {
   return (neuron0x35a2e10()*-3.83435);
}

double NNfunction-NN_5_7::synapse0x35b6590() {
   return (neuron0x35a37e0()*-0.980462);
}

double NNfunction-NN_5_7::synapse0x35b6b70() {
   return (neuron0x35a41b0()*-1.44189);
}

double NNfunction-NN_5_7::synapse0x35b6bb0() {
   return (neuron0x35a4b80()*2.3585);
}

double NNfunction-NN_5_7::synapse0x35b6bf0() {
   return (neuron0x35a5550()*-0.23346);
}

double NNfunction-NN_5_7::synapse0x35b6c30() {
   return (neuron0x35a5f20()*0.0417033);
}

double NNfunction-NN_5_7::synapse0x35b6c70() {
   return (neuron0x35a68f0()*-1.76818);
}

double NNfunction-NN_5_7::synapse0x35b6cb0() {
   return (neuron0x35a74d0()*2.3966);
}

double NNfunction-NN_5_7::synapse0x35b6cf0() {
   return (neuron0x35a7ea0()*-0.0680292);
}

double NNfunction-NN_5_7::synapse0x35b6d30() {
   return (neuron0x3598d20()*0.863529);
}

double NNfunction-NN_5_7::synapse0x35b6d70() {
   return (neuron0x35996f0()*-0.0718716);
}

double NNfunction-NN_5_7::synapse0x35b6db0() {
   return (neuron0x359a0c0()*-0.378427);
}

double NNfunction-NN_5_7::synapse0x35b6df0() {
   return (neuron0x35ac700()*0.528482);
}

double NNfunction-NN_5_7::synapse0x35b6e30() {
   return (neuron0x35acfb0()*0.2955);
}

double NNfunction-NN_5_7::synapse0x35b6e70() {
   return (neuron0x35ad980()*-0.911988);
}

double NNfunction-NN_5_7::synapse0x35b6eb0() {
   return (neuron0x35ae350()*0.101643);
}

double NNfunction-NN_5_7::synapse0x35b7230() {
   return (neuron0x35892e0()*0.0200425);
}

double NNfunction-NN_5_7::synapse0x35b7270() {
   return (neuron0x3589b20()*-1.02541);
}

double NNfunction-NN_5_7::synapse0x35b72b0() {
   return (neuron0x358a600()*-0.47936);
}

double NNfunction-NN_5_7::synapse0x35b72f0() {
   return (neuron0x3344f10()*0.00760291);
}

double NNfunction-NN_5_7::synapse0x35b7330() {
   return (neuron0x358b3e0()*1.17329);
}

double NNfunction-NN_5_7::synapse0x35b7370() {
   return (neuron0x358ceb0()*-0.908167);
}

double NNfunction-NN_5_7::synapse0x35b73b0() {
   return (neuron0x358dc80()*0.658555);
}

double NNfunction-NN_5_7::synapse0x35b73f0() {
   return (neuron0x358e650()*0.0450312);
}

double NNfunction-NN_5_7::synapse0x35b7430() {
   return (neuron0x358f020()*3.02744);
}

double NNfunction-NN_5_7::synapse0x35b7470() {
   return (neuron0x358fb00()*-1.41684);
}

double NNfunction-NN_5_7::synapse0x35b74b0() {
   return (neuron0x35904d0()*2.2051);
}

double NNfunction-NN_5_7::synapse0x35b74f0() {
   return (neuron0x358d5b0()*0.386964);
}

double NNfunction-NN_5_7::synapse0x35b7530() {
   return (neuron0x3592080()*0.127575);
}

double NNfunction-NN_5_7::synapse0x35b7570() {
   return (neuron0x3592a50()*-0.558544);
}

double NNfunction-NN_5_7::synapse0x35b75b0() {
   return (neuron0x3593420()*1.71538);
}

double NNfunction-NN_5_7::synapse0x35b75f0() {
   return (neuron0x3593df0()*0.0523026);
}

double NNfunction-NN_5_7::synapse0x35b7080() {
   return (neuron0x3595c00()*0.0195168);
}

double NNfunction-NN_5_7::synapse0x35b70c0() {
   return (neuron0x3595ee0()*0.0233577);
}

double NNfunction-NN_5_7::synapse0x35b7740() {
   return (neuron0x35968b0()*1.74276);
}

double NNfunction-NN_5_7::synapse0x35b7780() {
   return (neuron0x3597280()*1.22886);
}

double NNfunction-NN_5_7::synapse0x35b77c0() {
   return (neuron0x3597c50()*0.04341);
}

double NNfunction-NN_5_7::synapse0x35b7800() {
   return (neuron0x3598620()*-1.55264);
}

double NNfunction-NN_5_7::synapse0x35b7840() {
   return (neuron0x3591170()*-0.0114902);
}

double NNfunction-NN_5_7::synapse0x35b7880() {
   return (neuron0x3591b40()*-0.227489);
}

double NNfunction-NN_5_7::synapse0x35b78c0() {
   return (neuron0x359b3b0()*-0.124751);
}

double NNfunction-NN_5_7::synapse0x35b7900() {
   return (neuron0x359bd80()*0.00461779);
}

double NNfunction-NN_5_7::synapse0x35b7940() {
   return (neuron0x359c750()*0.015893);
}

double NNfunction-NN_5_7::synapse0x35b7980() {
   return (neuron0x359d120()*3.14608);
}

double NNfunction-NN_5_7::synapse0x35b79c0() {
   return (neuron0x359daf0()*-0.121907);
}

double NNfunction-NN_5_7::synapse0x35b7a00() {
   return (neuron0x359e4c0()*1.31839);
}

double NNfunction-NN_5_7::synapse0x35b7a40() {
   return (neuron0x359ee90()*-0.0338832);
}

double NNfunction-NN_5_7::synapse0x35b7a80() {
   return (neuron0x359f860()*1.47745);
}

double NNfunction-NN_5_7::synapse0x35b7630() {
   return (neuron0x35958f0()*1.03018);
}

double NNfunction-NN_5_7::synapse0x35b7670() {
   return (neuron0x35a2440()*-4.22303);
}

double NNfunction-NN_5_7::synapse0x35b76b0() {
   return (neuron0x35a2e10()*-0.00663005);
}

double NNfunction-NN_5_7::synapse0x35b76f0() {
   return (neuron0x35a37e0()*-0.0933372);
}

double NNfunction-NN_5_7::synapse0x35b7cd0() {
   return (neuron0x35a41b0()*-1.41742);
}

double NNfunction-NN_5_7::synapse0x35b7d10() {
   return (neuron0x35a4b80()*-1.01734);
}

double NNfunction-NN_5_7::synapse0x35b7d50() {
   return (neuron0x35a5550()*0.0204884);
}

double NNfunction-NN_5_7::synapse0x35b7d90() {
   return (neuron0x35a5f20()*-1.77961);
}

double NNfunction-NN_5_7::synapse0x35b7dd0() {
   return (neuron0x35a68f0()*0.646556);
}

double NNfunction-NN_5_7::synapse0x35b7e10() {
   return (neuron0x35a74d0()*0.200344);
}

double NNfunction-NN_5_7::synapse0x35b7e50() {
   return (neuron0x35a7ea0()*0.0108381);
}

double NNfunction-NN_5_7::synapse0x35b7e90() {
   return (neuron0x3598d20()*0.830125);
}

double NNfunction-NN_5_7::synapse0x35b7ed0() {
   return (neuron0x35996f0()*-0.60365);
}

double NNfunction-NN_5_7::synapse0x35b7f10() {
   return (neuron0x359a0c0()*-1.83185);
}

double NNfunction-NN_5_7::synapse0x35b7f50() {
   return (neuron0x35ac700()*0.662597);
}

double NNfunction-NN_5_7::synapse0x35b7f90() {
   return (neuron0x35acfb0()*0.0363823);
}

double NNfunction-NN_5_7::synapse0x35b7fd0() {
   return (neuron0x35ad980()*-0.0177671);
}

double NNfunction-NN_5_7::synapse0x35b8010() {
   return (neuron0x35ae350()*0.00104997);
}

double NNfunction-NN_5_7::synapse0x35b8390() {
   return (neuron0x35892e0()*-1.26527);
}

double NNfunction-NN_5_7::synapse0x35b83d0() {
   return (neuron0x3589b20()*-0.206293);
}

double NNfunction-NN_5_7::synapse0x35b8410() {
   return (neuron0x358a600()*-0.543227);
}

double NNfunction-NN_5_7::synapse0x35b8450() {
   return (neuron0x3344f10()*2.10546);
}

double NNfunction-NN_5_7::synapse0x35b8490() {
   return (neuron0x358b3e0()*-0.782979);
}

double NNfunction-NN_5_7::synapse0x35b84d0() {
   return (neuron0x358ceb0()*-1.65017);
}

double NNfunction-NN_5_7::synapse0x35b8510() {
   return (neuron0x358dc80()*2.10169);
}

double NNfunction-NN_5_7::synapse0x35b8550() {
   return (neuron0x358e650()*0.279381);
}

double NNfunction-NN_5_7::synapse0x35b8590() {
   return (neuron0x358f020()*1.67156);
}

double NNfunction-NN_5_7::synapse0x35b85d0() {
   return (neuron0x358fb00()*-3.06735);
}

double NNfunction-NN_5_7::synapse0x35b8610() {
   return (neuron0x35904d0()*-1.53151);
}

double NNfunction-NN_5_7::synapse0x35b8650() {
   return (neuron0x358d5b0()*-0.240635);
}

double NNfunction-NN_5_7::synapse0x35b8690() {
   return (neuron0x3592080()*-0.292974);
}

double NNfunction-NN_5_7::synapse0x35b86d0() {
   return (neuron0x3592a50()*-1.68111);
}

double NNfunction-NN_5_7::synapse0x35b8710() {
   return (neuron0x3593420()*1.84609);
}

double NNfunction-NN_5_7::synapse0x35b8750() {
   return (neuron0x3593df0()*-1.0326);
}

double NNfunction-NN_5_7::synapse0x35b81e0() {
   return (neuron0x3595c00()*-0.612192);
}

double NNfunction-NN_5_7::synapse0x35b8220() {
   return (neuron0x3595ee0()*-0.805929);
}

double NNfunction-NN_5_7::synapse0x35b88a0() {
   return (neuron0x35968b0()*0.236042);
}

double NNfunction-NN_5_7::synapse0x35b88e0() {
   return (neuron0x3597280()*0.0774463);
}

double NNfunction-NN_5_7::synapse0x35b8920() {
   return (neuron0x3597c50()*0.639228);
}

double NNfunction-NN_5_7::synapse0x35b8960() {
   return (neuron0x3598620()*-1.15487);
}

double NNfunction-NN_5_7::synapse0x35b89a0() {
   return (neuron0x3591170()*-0.288353);
}

double NNfunction-NN_5_7::synapse0x35b89e0() {
   return (neuron0x3591b40()*0.0881364);
}

double NNfunction-NN_5_7::synapse0x35b8a20() {
   return (neuron0x359b3b0()*-3.33961);
}

double NNfunction-NN_5_7::synapse0x35b8a60() {
   return (neuron0x359bd80()*-0.342802);
}

double NNfunction-NN_5_7::synapse0x35b8aa0() {
   return (neuron0x359c750()*0.586691);
}

double NNfunction-NN_5_7::synapse0x35b8ae0() {
   return (neuron0x359d120()*5.44493);
}

double NNfunction-NN_5_7::synapse0x35b8b20() {
   return (neuron0x359daf0()*-1.26903);
}

double NNfunction-NN_5_7::synapse0x35b8b60() {
   return (neuron0x359e4c0()*-1.9803);
}

double NNfunction-NN_5_7::synapse0x35b8ba0() {
   return (neuron0x359ee90()*1.33718);
}

double NNfunction-NN_5_7::synapse0x35b8be0() {
   return (neuron0x359f860()*0.682212);
}

double NNfunction-NN_5_7::synapse0x35b8790() {
   return (neuron0x35958f0()*-0.77339);
}

double NNfunction-NN_5_7::synapse0x35b87d0() {
   return (neuron0x35a2440()*-1.08278);
}

double NNfunction-NN_5_7::synapse0x35b8810() {
   return (neuron0x35a2e10()*-0.925073);
}

double NNfunction-NN_5_7::synapse0x35b8850() {
   return (neuron0x35a37e0()*0.411476);
}

double NNfunction-NN_5_7::synapse0x35b8e30() {
   return (neuron0x35a41b0()*0.555514);
}

double NNfunction-NN_5_7::synapse0x35b8e70() {
   return (neuron0x35a4b80()*3.06897);
}

double NNfunction-NN_5_7::synapse0x35b8eb0() {
   return (neuron0x35a5550()*0.75689);
}

double NNfunction-NN_5_7::synapse0x35b8ef0() {
   return (neuron0x35a5f20()*-1.23907);
}

double NNfunction-NN_5_7::synapse0x35b8f30() {
   return (neuron0x35a68f0()*-3.22228);
}

double NNfunction-NN_5_7::synapse0x35b8f70() {
   return (neuron0x35a74d0()*2.19167);
}

double NNfunction-NN_5_7::synapse0x35b8fb0() {
   return (neuron0x35a7ea0()*-0.28819);
}

double NNfunction-NN_5_7::synapse0x35b8ff0() {
   return (neuron0x3598d20()*1.04519);
}

double NNfunction-NN_5_7::synapse0x35b9030() {
   return (neuron0x35996f0()*-0.27023);
}

double NNfunction-NN_5_7::synapse0x35b9070() {
   return (neuron0x359a0c0()*0.224115);
}

double NNfunction-NN_5_7::synapse0x35b90b0() {
   return (neuron0x35ac700()*2.69232);
}

double NNfunction-NN_5_7::synapse0x35b90f0() {
   return (neuron0x35acfb0()*0.241229);
}

double NNfunction-NN_5_7::synapse0x35b9130() {
   return (neuron0x35ad980()*-1.80613);
}

double NNfunction-NN_5_7::synapse0x35b9170() {
   return (neuron0x35ae350()*0.216084);
}

double NNfunction-NN_5_7::synapse0x35b93d0() {
   return (neuron0x35b5550()*8.61492);
}

double NNfunction-NN_5_7::synapse0x35b9410() {
   return (neuron0x35b58f0()*-8.68518);
}

double NNfunction-NN_5_7::synapse0x35b9450() {
   return (neuron0x35b5d90()*6.63137);
}

double NNfunction-NN_5_7::synapse0x35b9490() {
   return (neuron0x35b6ef0()*8.56557);
}

double NNfunction-NN_5_7::synapse0x35b94d0() {
   return (neuron0x35b8050()*9.70426);
}

