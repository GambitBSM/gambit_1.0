#include "NNfunction_sb_cLsR.h"
#include <cmath>

double NNfunction_sb_cLsR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.7471)/15.0154;
   input1 = (in1 - 36.7852)/826.202;
   input2 = (in2 - 416.001)/529.891;
   input3 = (in3 - 156.063)/642.479;
   input4 = (in4 - 724.781)/769.828;
   input5 = (in5 - 614.508)/733.814;
   input6 = (in6 - 618.082)/736.354;
   input7 = (in7 - 624.494)/736.267;
   input8 = (in8 - 627.472)/777.341;
   input9 = (in9 - 612.727)/759.821;
   input10 = (in10 - 646.612)/788.782;
   input11 = (in11 - 605.41)/642.737;
   input12 = (in12 - 379.913)/232.306;
   input13 = (in13 - 453.053)/380.53;
   input14 = (in14 - 595.203)/599.071;
   input15 = (in15 - 589.605)/594.569;
   input16 = (in16 - 428.044)/410.836;
   input17 = (in17 - 628.441)/681.211;
   input18 = (in18 - 372.911)/231.835;
   input19 = (in19 - 637.207)/674.526;
   input20 = (in20 - -137.718)/394.961;
   input21 = (in21 - -165.185)/902.989;
   input22 = (in22 - 8.28353)/915.795;
   input23 = (in23 - -63.1642)/496.223;
   switch(index) {
     case 0:
         return neuron0x21d7e60();
     default:
         return 0.;
   }
}

double NNfunction_sb_cLsR::Value(int index, double* input) {
   input0 = (input[0] - 22.7471)/15.0154;
   input1 = (input[1] - 36.7852)/826.202;
   input2 = (input[2] - 416.001)/529.891;
   input3 = (input[3] - 156.063)/642.479;
   input4 = (input[4] - 724.781)/769.828;
   input5 = (input[5] - 614.508)/733.814;
   input6 = (input[6] - 618.082)/736.354;
   input7 = (input[7] - 624.494)/736.267;
   input8 = (input[8] - 627.472)/777.341;
   input9 = (input[9] - 612.727)/759.821;
   input10 = (input[10] - 646.612)/788.782;
   input11 = (input[11] - 605.41)/642.737;
   input12 = (input[12] - 379.913)/232.306;
   input13 = (input[13] - 453.053)/380.53;
   input14 = (input[14] - 595.203)/599.071;
   input15 = (input[15] - 589.605)/594.569;
   input16 = (input[16] - 428.044)/410.836;
   input17 = (input[17] - 628.441)/681.211;
   input18 = (input[18] - 372.911)/231.835;
   input19 = (input[19] - 637.207)/674.526;
   input20 = (input[20] - -137.718)/394.961;
   input21 = (input[21] - -165.185)/902.989;
   input22 = (input[22] - 8.28353)/915.795;
   input23 = (input[23] - -63.1642)/496.223;
   switch(index) {
     case 0:
         return neuron0x21d7e60();
     default:
         return 0.;
   }
}

double NNfunction_sb_cLsR::neuron0x21a3f20() {
   return input0;
}

double NNfunction_sb_cLsR::neuron0x21a4260() {
   return input1;
}

double NNfunction_sb_cLsR::neuron0x21a45a0() {
   return input2;
}

double NNfunction_sb_cLsR::neuron0x21a48e0() {
   return input3;
}

double NNfunction_sb_cLsR::neuron0x21a4c20() {
   return input4;
}

double NNfunction_sb_cLsR::neuron0x21a4f60() {
   return input5;
}

double NNfunction_sb_cLsR::neuron0x21a52a0() {
   return input6;
}

double NNfunction_sb_cLsR::neuron0x21a55e0() {
   return input7;
}

double NNfunction_sb_cLsR::neuron0x21a5920() {
   return input8;
}

double NNfunction_sb_cLsR::neuron0x21a5c60() {
   return input9;
}

double NNfunction_sb_cLsR::neuron0x21a5fa0() {
   return input10;
}

double NNfunction_sb_cLsR::neuron0x21a62e0() {
   return input11;
}

double NNfunction_sb_cLsR::neuron0x21a6620() {
   return input12;
}

double NNfunction_sb_cLsR::neuron0x21a6960() {
   return input13;
}

double NNfunction_sb_cLsR::neuron0x21a6ca0() {
   return input14;
}

double NNfunction_sb_cLsR::neuron0x21a6fe0() {
   return input15;
}

double NNfunction_sb_cLsR::neuron0x21a7320() {
   return input16;
}

double NNfunction_sb_cLsR::neuron0x21a7880() {
   return input17;
}

double NNfunction_sb_cLsR::neuron0x21a7aa0() {
   return input18;
}

double NNfunction_sb_cLsR::neuron0x21a7de0() {
   return input19;
}

double NNfunction_sb_cLsR::neuron0x21a8120() {
   return input20;
}

double NNfunction_sb_cLsR::neuron0x21a8460() {
   return input21;
}

double NNfunction_sb_cLsR::neuron0x21a87a0() {
   return input22;
}

double NNfunction_sb_cLsR::neuron0x21a8ae0() {
   return input23;
}

double NNfunction_sb_cLsR::input0x21a8f80() {
   double input = -0.527886;
   input += synapse0x1f6d8d0();
   input += synapse0x21a3de0();
   input += synapse0x21a3e20();
   input += synapse0x21a9230();
   input += synapse0x21a9270();
   input += synapse0x21a92b0();
   input += synapse0x21a92f0();
   input += synapse0x21a9330();
   input += synapse0x21a9370();
   input += synapse0x21a93b0();
   input += synapse0x21a93f0();
   input += synapse0x21a9430();
   input += synapse0x21a9470();
   input += synapse0x21a94b0();
   input += synapse0x21a94f0();
   input += synapse0x21a9530();
   input += synapse0x21a3d50();
   input += synapse0x21a3d90();
   input += synapse0x1f5f140();
   input += synapse0x1f5f180();
   input += synapse0x21a9790();
   input += synapse0x21a97d0();
   input += synapse0x21a9810();
   input += synapse0x21a9850();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21a8f80() {
   double input = input0x21a8f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21a9890() {
   double input = -0.346964;
   input += synapse0x21a9bd0();
   input += synapse0x21a9c10();
   input += synapse0x21a9c50();
   input += synapse0x21a9c90();
   input += synapse0x21a9cd0();
   input += synapse0x21a9d10();
   input += synapse0x21a9d50();
   input += synapse0x21a9d90();
   input += synapse0x21a9dd0();
   input += synapse0x21a9680();
   input += synapse0x21a96c0();
   input += synapse0x21a9700();
   input += synapse0x21a9740();
   input += synapse0x21aa020();
   input += synapse0x21aa060();
   input += synapse0x21aa0a0();
   input += synapse0x21a9a20();
   input += synapse0x21a9a60();
   input += synapse0x21aa1f0();
   input += synapse0x21aa230();
   input += synapse0x21aa270();
   input += synapse0x21aa2b0();
   input += synapse0x21aa2f0();
   input += synapse0x21aa330();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21a9890() {
   double input = input0x21a9890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21aa370() {
   double input = -0.215322;
   input += synapse0x21aa6b0();
   input += synapse0x21aa6f0();
   input += synapse0x21aa730();
   input += synapse0x21aa770();
   input += synapse0x21aa7b0();
   input += synapse0x21aa7f0();
   input += synapse0x21aa830();
   input += synapse0x21aa870();
   input += synapse0x21aa8b0();
   input += synapse0x21aa8f0();
   input += synapse0x21aa930();
   input += synapse0x21aa970();
   input += synapse0x21aa9b0();
   input += synapse0x21aa9f0();
   input += synapse0x21aaa30();
   input += synapse0x21aaa70();
   input += synapse0x21aa500();
   input += synapse0x21aa540();
   input += synapse0x1f6cfe0();
   input += synapse0x1f6d020();
   input += synapse0x2192fb0();
   input += synapse0x2192ff0();
   input += synapse0x2193030();
   input += synapse0x21a3e60();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21aa370() {
   double input = input0x21aa370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1f6d740() {
   double input = -1.97608;
   input += synapse0x21a9fc0();
   input += synapse0x21a3ea0();
   input += synapse0x21a3ee0();
   input += synapse0x21aabc0();
   input += synapse0x21aac00();
   input += synapse0x21aac40();
   input += synapse0x21aac80();
   input += synapse0x21aacc0();
   input += synapse0x21aad00();
   input += synapse0x21aad40();
   input += synapse0x21aad80();
   input += synapse0x21aadc0();
   input += synapse0x21aae00();
   input += synapse0x21aae40();
   input += synapse0x21aae80();
   input += synapse0x21aaec0();
   input += synapse0x21a9e10();
   input += synapse0x21a9e50();
   input += synapse0x21ab010();
   input += synapse0x21ab050();
   input += synapse0x21ab090();
   input += synapse0x21ab0d0();
   input += synapse0x21ab110();
   input += synapse0x21ab150();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1f6d740() {
   double input = input0x1f6d740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21ab190() {
   double input = 0.0310645;
   input += synapse0x21ab4d0();
   input += synapse0x21ab510();
   input += synapse0x21ab550();
   input += synapse0x21ab590();
   input += synapse0x21ab5d0();
   input += synapse0x21ab610();
   input += synapse0x21ab650();
   input += synapse0x21ab690();
   input += synapse0x21ab6d0();
   input += synapse0x21ab710();
   input += synapse0x21ab750();
   input += synapse0x21ab790();
   input += synapse0x21ab7d0();
   input += synapse0x21ab810();
   input += synapse0x21ab850();
   input += synapse0x21ab890();
   input += synapse0x21ab320();
   input += synapse0x21ab360();
   input += synapse0x21ab9e0();
   input += synapse0x21aba20();
   input += synapse0x21aba60();
   input += synapse0x21abaa0();
   input += synapse0x21abae0();
   input += synapse0x21abb20();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21ab190() {
   double input = input0x21ab190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21abb60() {
   double input = -0.185944;
   input += synapse0x21abea0();
   input += synapse0x21abee0();
   input += synapse0x21abf20();
   input += synapse0x21abf60();
   input += synapse0x21abfa0();
   input += synapse0x21abfe0();
   input += synapse0x21ac020();
   input += synapse0x21ac060();
   input += synapse0x21ac0a0();
   input += synapse0x1f6d330();
   input += synapse0x1f6d370();
   input += synapse0x1f6d3b0();
   input += synapse0x1f6d3f0();
   input += synapse0x1f6d430();
   input += synapse0x1f6d470();
   input += synapse0x1f6d4b0();
   input += synapse0x21abcf0();
   input += synapse0x21abd30();
   input += synapse0x1f6d600();
   input += synapse0x1f6d640();
   input += synapse0x1f6d680();
   input += synapse0x1f6d6c0();
   input += synapse0x1f6d700();
   input += synapse0x21ac8f0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21abb60() {
   double input = input0x21abb60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21ac930() {
   double input = 1.50891;
   input += synapse0x21acc70();
   input += synapse0x21accb0();
   input += synapse0x21accf0();
   input += synapse0x21acd30();
   input += synapse0x21acd70();
   input += synapse0x21acdb0();
   input += synapse0x21acdf0();
   input += synapse0x21ace30();
   input += synapse0x21ace70();
   input += synapse0x21aceb0();
   input += synapse0x21acef0();
   input += synapse0x21acf30();
   input += synapse0x21acf70();
   input += synapse0x21acfb0();
   input += synapse0x21acff0();
   input += synapse0x21ad030();
   input += synapse0x21acac0();
   input += synapse0x21acb00();
   input += synapse0x21ad180();
   input += synapse0x21ad1c0();
   input += synapse0x21ad200();
   input += synapse0x21ad240();
   input += synapse0x21ad280();
   input += synapse0x21ad2c0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21ac930() {
   double input = input0x21ac930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21ad300() {
   double input = -0.591673;
   input += synapse0x21ad640();
   input += synapse0x21ad680();
   input += synapse0x21ad6c0();
   input += synapse0x21ad700();
   input += synapse0x21ad740();
   input += synapse0x21ad780();
   input += synapse0x21ad7c0();
   input += synapse0x21ad800();
   input += synapse0x21ad840();
   input += synapse0x21ad880();
   input += synapse0x21ad8c0();
   input += synapse0x21ad900();
   input += synapse0x21ad940();
   input += synapse0x21ad980();
   input += synapse0x21ad9c0();
   input += synapse0x21ada00();
   input += synapse0x21ad490();
   input += synapse0x21ad4d0();
   input += synapse0x21adb50();
   input += synapse0x21adb90();
   input += synapse0x21adbd0();
   input += synapse0x21adc10();
   input += synapse0x21adc50();
   input += synapse0x21adc90();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21ad300() {
   double input = input0x21ad300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21adcd0() {
   double input = -0.880495;
   input += synapse0x21a7770();
   input += synapse0x21a77b0();
   input += synapse0x21a77f0();
   input += synapse0x21a7830();
   input += synapse0x21ae220();
   input += synapse0x21ae260();
   input += synapse0x21ae2a0();
   input += synapse0x21ae2e0();
   input += synapse0x21ae320();
   input += synapse0x21ae360();
   input += synapse0x21ae3a0();
   input += synapse0x21ae3e0();
   input += synapse0x21ae420();
   input += synapse0x21ae460();
   input += synapse0x21ae4a0();
   input += synapse0x21ae4e0();
   input += synapse0x21ade60();
   input += synapse0x21adea0();
   input += synapse0x21ae630();
   input += synapse0x21ae670();
   input += synapse0x21ae6b0();
   input += synapse0x21ae6f0();
   input += synapse0x21ae730();
   input += synapse0x21ae770();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21adcd0() {
   double input = input0x21adcd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21ae7b0() {
   double input = -0.411774;
   input += synapse0x21aeaf0();
   input += synapse0x21aeb30();
   input += synapse0x21aeb70();
   input += synapse0x21aebb0();
   input += synapse0x21aebf0();
   input += synapse0x21aec30();
   input += synapse0x21aec70();
   input += synapse0x21aecb0();
   input += synapse0x21aecf0();
   input += synapse0x21aed30();
   input += synapse0x21aed70();
   input += synapse0x21aedb0();
   input += synapse0x21aedf0();
   input += synapse0x21aee30();
   input += synapse0x21aee70();
   input += synapse0x21aeeb0();
   input += synapse0x21ae940();
   input += synapse0x21ae980();
   input += synapse0x21af000();
   input += synapse0x21af040();
   input += synapse0x21af080();
   input += synapse0x21af0c0();
   input += synapse0x21af100();
   input += synapse0x21af140();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21ae7b0() {
   double input = input0x21ae7b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21af180() {
   double input = 0.269499;
   input += synapse0x21af4c0();
   input += synapse0x21af500();
   input += synapse0x21af540();
   input += synapse0x21af580();
   input += synapse0x21af5c0();
   input += synapse0x21af600();
   input += synapse0x21af640();
   input += synapse0x21af680();
   input += synapse0x21af6c0();
   input += synapse0x21af700();
   input += synapse0x21af740();
   input += synapse0x21af780();
   input += synapse0x21af7c0();
   input += synapse0x21af800();
   input += synapse0x21af840();
   input += synapse0x21af880();
   input += synapse0x21af310();
   input += synapse0x21af350();
   input += synapse0x21ac0e0();
   input += synapse0x21ac120();
   input += synapse0x21ac160();
   input += synapse0x21ac1a0();
   input += synapse0x21ac1e0();
   input += synapse0x21ac220();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21af180() {
   double input = input0x21af180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21ac260() {
   double input = -0.550974;
   input += synapse0x21ac5a0();
   input += synapse0x21ac5e0();
   input += synapse0x21ac620();
   input += synapse0x21ac660();
   input += synapse0x21ac6a0();
   input += synapse0x21ac6e0();
   input += synapse0x21ac720();
   input += synapse0x21ac760();
   input += synapse0x21ac7a0();
   input += synapse0x21ac7e0();
   input += synapse0x21ac820();
   input += synapse0x21ac860();
   input += synapse0x21ac8a0();
   input += synapse0x21b09e0();
   input += synapse0x21b0a20();
   input += synapse0x21b0a60();
   input += synapse0x21ac3f0();
   input += synapse0x21ac430();
   input += synapse0x21b0bb0();
   input += synapse0x21b0bf0();
   input += synapse0x21b0c30();
   input += synapse0x21b0c70();
   input += synapse0x21b0cb0();
   input += synapse0x21b0cf0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21ac260() {
   double input = input0x21ac260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21b0d30() {
   double input = -1.93401;
   input += synapse0x21b1070();
   input += synapse0x21b10b0();
   input += synapse0x21b10f0();
   input += synapse0x21b1130();
   input += synapse0x21b1170();
   input += synapse0x21b11b0();
   input += synapse0x21b11f0();
   input += synapse0x21b1230();
   input += synapse0x21b1270();
   input += synapse0x21b12b0();
   input += synapse0x21b12f0();
   input += synapse0x21b1330();
   input += synapse0x21b1370();
   input += synapse0x21b13b0();
   input += synapse0x21b13f0();
   input += synapse0x21b1430();
   input += synapse0x21b0ec0();
   input += synapse0x21b0f00();
   input += synapse0x21b1580();
   input += synapse0x21b15c0();
   input += synapse0x21b1600();
   input += synapse0x21b1640();
   input += synapse0x21b1680();
   input += synapse0x21b16c0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21b0d30() {
   double input = input0x21b0d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21b1700() {
   double input = 0.984611;
   input += synapse0x21b1a40();
   input += synapse0x21b1a80();
   input += synapse0x21b1ac0();
   input += synapse0x21b1b00();
   input += synapse0x21b1b40();
   input += synapse0x21b1b80();
   input += synapse0x21b1bc0();
   input += synapse0x21b1c00();
   input += synapse0x21b1c40();
   input += synapse0x21b1c80();
   input += synapse0x21b1cc0();
   input += synapse0x21b1d00();
   input += synapse0x21b1d40();
   input += synapse0x21b1d80();
   input += synapse0x21b1dc0();
   input += synapse0x21b1e00();
   input += synapse0x21b1890();
   input += synapse0x21b18d0();
   input += synapse0x21b1f50();
   input += synapse0x21b1f90();
   input += synapse0x21b1fd0();
   input += synapse0x21b2010();
   input += synapse0x21b2050();
   input += synapse0x21b2090();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21b1700() {
   double input = input0x21b1700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21b20d0() {
   double input = -0.448506;
   input += synapse0x21b2410();
   input += synapse0x21b2450();
   input += synapse0x21b2490();
   input += synapse0x21b24d0();
   input += synapse0x21b2510();
   input += synapse0x21b2550();
   input += synapse0x21b2590();
   input += synapse0x21b25d0();
   input += synapse0x21b2610();
   input += synapse0x21b2650();
   input += synapse0x21b2690();
   input += synapse0x21b26d0();
   input += synapse0x21b2710();
   input += synapse0x21b2750();
   input += synapse0x21b2790();
   input += synapse0x21b27d0();
   input += synapse0x21b2260();
   input += synapse0x21b22a0();
   input += synapse0x21b2920();
   input += synapse0x21b2960();
   input += synapse0x21b29a0();
   input += synapse0x21b29e0();
   input += synapse0x21b2a20();
   input += synapse0x21b2a60();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21b20d0() {
   double input = input0x21b20d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21b2aa0() {
   double input = -0.207972;
   input += synapse0x21b2de0();
   input += synapse0x21a4140();
   input += synapse0x21a4180();
   input += synapse0x21a4480();
   input += synapse0x21a44c0();
   input += synapse0x21a47c0();
   input += synapse0x21a4800();
   input += synapse0x21a4b00();
   input += synapse0x21a4b40();
   input += synapse0x21a4e40();
   input += synapse0x21a4e80();
   input += synapse0x21a5180();
   input += synapse0x21a51c0();
   input += synapse0x21a54c0();
   input += synapse0x21a5500();
   input += synapse0x21a5800();
   input += synapse0x21a5840();
   input += synapse0x21a5b40();
   input += synapse0x21a5b80();
   input += synapse0x21a5e80();
   input += synapse0x21a5ec0();
   input += synapse0x21a61c0();
   input += synapse0x21a6200();
   input += synapse0x21a6500();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21b2aa0() {
   double input = input0x21b2aa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21b48b0() {
   double input = 1.86834;
   input += synapse0x21a6540();
   input += synapse0x21a7200();
   input += synapse0x21a7240();
   input += synapse0x21b2c30();
   input += synapse0x21b2c70();
   input += synapse0x21a7540();
   input += synapse0x21a7580();
   input += synapse0x1f5f020();
   input += synapse0x1f5f060();
   input += synapse0x21a7cc0();
   input += synapse0x21a7d00();
   input += synapse0x21a8000();
   input += synapse0x21a8040();
   input += synapse0x21a8340();
   input += synapse0x21a8380();
   input += synapse0x21a8680();
   input += synapse0x21a86c0();
   input += synapse0x21a89c0();
   input += synapse0x21a8a00();
   input += synapse0x21a8d00();
   input += synapse0x21a8d40();
   input += synapse0x21a6840();
   input += synapse0x21a6880();
   input += synapse0x21b4b50();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21b48b0() {
   double input = input0x21b48b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21b4b90() {
   double input = -3.80053;
   input += synapse0x21b4ed0();
   input += synapse0x21b4f10();
   input += synapse0x21b4f50();
   input += synapse0x21b4f90();
   input += synapse0x21b4fd0();
   input += synapse0x21b5010();
   input += synapse0x21b5050();
   input += synapse0x21b5090();
   input += synapse0x21b50d0();
   input += synapse0x21b5110();
   input += synapse0x21b5150();
   input += synapse0x21b5190();
   input += synapse0x21b51d0();
   input += synapse0x21b5210();
   input += synapse0x21b5250();
   input += synapse0x21b5290();
   input += synapse0x21b4d20();
   input += synapse0x21b4d60();
   input += synapse0x21b53e0();
   input += synapse0x21b5420();
   input += synapse0x21b5460();
   input += synapse0x21b54a0();
   input += synapse0x21b54e0();
   input += synapse0x21b5520();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21b4b90() {
   double input = input0x21b4b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21b5560() {
   double input = 0.789454;
   input += synapse0x21b58a0();
   input += synapse0x21b58e0();
   input += synapse0x21b5920();
   input += synapse0x21b5960();
   input += synapse0x21b59a0();
   input += synapse0x21b59e0();
   input += synapse0x21b5a20();
   input += synapse0x21b5a60();
   input += synapse0x21b5aa0();
   input += synapse0x21b5ae0();
   input += synapse0x21b5b20();
   input += synapse0x21b5b60();
   input += synapse0x21b5ba0();
   input += synapse0x21b5be0();
   input += synapse0x21b5c20();
   input += synapse0x21b5c60();
   input += synapse0x21b56f0();
   input += synapse0x21b5730();
   input += synapse0x21b5db0();
   input += synapse0x21b5df0();
   input += synapse0x21b5e30();
   input += synapse0x21b5e70();
   input += synapse0x21b5eb0();
   input += synapse0x21b5ef0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21b5560() {
   double input = input0x21b5560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21b5f30() {
   double input = -0.943484;
   input += synapse0x21b6270();
   input += synapse0x21b62b0();
   input += synapse0x21b62f0();
   input += synapse0x21b6330();
   input += synapse0x21b6370();
   input += synapse0x21b63b0();
   input += synapse0x21b63f0();
   input += synapse0x21b6430();
   input += synapse0x21b6470();
   input += synapse0x21b64b0();
   input += synapse0x21b64f0();
   input += synapse0x21b6530();
   input += synapse0x21b6570();
   input += synapse0x21b65b0();
   input += synapse0x21b65f0();
   input += synapse0x21b6630();
   input += synapse0x21b60c0();
   input += synapse0x21b6100();
   input += synapse0x21b6780();
   input += synapse0x21b67c0();
   input += synapse0x21b6800();
   input += synapse0x21b6840();
   input += synapse0x21b6880();
   input += synapse0x21b68c0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21b5f30() {
   double input = input0x21b5f30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21b6900() {
   double input = -1.32322;
   input += synapse0x21b6c40();
   input += synapse0x21b6c80();
   input += synapse0x21b6cc0();
   input += synapse0x21b6d00();
   input += synapse0x21b6d40();
   input += synapse0x21b6d80();
   input += synapse0x21b6dc0();
   input += synapse0x21b6e00();
   input += synapse0x21b6e40();
   input += synapse0x21b6e80();
   input += synapse0x21b6ec0();
   input += synapse0x21b6f00();
   input += synapse0x21b6f40();
   input += synapse0x21b6f80();
   input += synapse0x21b6fc0();
   input += synapse0x21b7000();
   input += synapse0x21b6a90();
   input += synapse0x21b6ad0();
   input += synapse0x21b7150();
   input += synapse0x21b7190();
   input += synapse0x21b71d0();
   input += synapse0x21b7210();
   input += synapse0x21b7250();
   input += synapse0x21b7290();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21b6900() {
   double input = input0x21b6900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21b72d0() {
   double input = 1.12048;
   input += synapse0x21b7610();
   input += synapse0x21b7650();
   input += synapse0x21b7690();
   input += synapse0x21b76d0();
   input += synapse0x21b7710();
   input += synapse0x21b7750();
   input += synapse0x21b7790();
   input += synapse0x21b77d0();
   input += synapse0x21b7810();
   input += synapse0x21af9d0();
   input += synapse0x21afa10();
   input += synapse0x21afa50();
   input += synapse0x21afa90();
   input += synapse0x21afad0();
   input += synapse0x21afb10();
   input += synapse0x21afb50();
   input += synapse0x21b7460();
   input += synapse0x21b74a0();
   input += synapse0x21afca0();
   input += synapse0x21afce0();
   input += synapse0x21afd20();
   input += synapse0x21afd60();
   input += synapse0x21afda0();
   input += synapse0x21afde0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21b72d0() {
   double input = input0x21b72d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21afe20() {
   double input = 0.700524;
   input += synapse0x21b0160();
   input += synapse0x21b01a0();
   input += synapse0x21b01e0();
   input += synapse0x21b0220();
   input += synapse0x21b0260();
   input += synapse0x21b02a0();
   input += synapse0x21b02e0();
   input += synapse0x21b0320();
   input += synapse0x21b0360();
   input += synapse0x21b03a0();
   input += synapse0x21b03e0();
   input += synapse0x21b0420();
   input += synapse0x21b0460();
   input += synapse0x21b04a0();
   input += synapse0x21b04e0();
   input += synapse0x21b0520();
   input += synapse0x21affb0();
   input += synapse0x21afff0();
   input += synapse0x21b0670();
   input += synapse0x21b06b0();
   input += synapse0x21b06f0();
   input += synapse0x21b0730();
   input += synapse0x21b0770();
   input += synapse0x21b07b0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21afe20() {
   double input = input0x21afe20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21b07f0() {
   double input = -0.810583;
   input += synapse0x21b0980();
   input += synapse0x21b9a10();
   input += synapse0x21b9a50();
   input += synapse0x21b9a90();
   input += synapse0x21b9ad0();
   input += synapse0x21b9b10();
   input += synapse0x21b9b50();
   input += synapse0x21b9b90();
   input += synapse0x21b9bd0();
   input += synapse0x21b9c10();
   input += synapse0x21b9c50();
   input += synapse0x21b9c90();
   input += synapse0x21b9cd0();
   input += synapse0x21b9d10();
   input += synapse0x21b9d50();
   input += synapse0x21b9d90();
   input += synapse0x21b9860();
   input += synapse0x21b98a0();
   input += synapse0x21b9ee0();
   input += synapse0x21b9f20();
   input += synapse0x21b9f60();
   input += synapse0x21b9fa0();
   input += synapse0x21b9fe0();
   input += synapse0x21ba020();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21b07f0() {
   double input = input0x21b07f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21ba060() {
   double input = -2.34407;
   input += synapse0x21ba3a0();
   input += synapse0x21ba3e0();
   input += synapse0x21ba420();
   input += synapse0x21ba460();
   input += synapse0x21ba4a0();
   input += synapse0x21ba4e0();
   input += synapse0x21ba520();
   input += synapse0x21ba560();
   input += synapse0x21ba5a0();
   input += synapse0x21ba5e0();
   input += synapse0x21ba620();
   input += synapse0x21ba660();
   input += synapse0x21ba6a0();
   input += synapse0x21ba6e0();
   input += synapse0x21ba720();
   input += synapse0x21ba760();
   input += synapse0x21ba1f0();
   input += synapse0x21ba230();
   input += synapse0x21ba8b0();
   input += synapse0x21ba8f0();
   input += synapse0x21ba930();
   input += synapse0x21ba970();
   input += synapse0x21ba9b0();
   input += synapse0x21ba9f0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21ba060() {
   double input = input0x21ba060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21baa30() {
   double input = -0.0905396;
   input += synapse0x21bad70();
   input += synapse0x21badb0();
   input += synapse0x21badf0();
   input += synapse0x21bae30();
   input += synapse0x21bae70();
   input += synapse0x21baeb0();
   input += synapse0x21baef0();
   input += synapse0x21baf30();
   input += synapse0x21baf70();
   input += synapse0x21bafb0();
   input += synapse0x21baff0();
   input += synapse0x21bb030();
   input += synapse0x21bb070();
   input += synapse0x21bb0b0();
   input += synapse0x21bb0f0();
   input += synapse0x21bb130();
   input += synapse0x21babc0();
   input += synapse0x21bac00();
   input += synapse0x21bb280();
   input += synapse0x21bb2c0();
   input += synapse0x21bb300();
   input += synapse0x21bb340();
   input += synapse0x21bb380();
   input += synapse0x21bb3c0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21baa30() {
   double input = input0x21baa30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21bb400() {
   double input = 1.13061;
   input += synapse0x21bb740();
   input += synapse0x21bb780();
   input += synapse0x21bb7c0();
   input += synapse0x21bb800();
   input += synapse0x21bb840();
   input += synapse0x21bb880();
   input += synapse0x21bb8c0();
   input += synapse0x21bb900();
   input += synapse0x21bb940();
   input += synapse0x21bb980();
   input += synapse0x21bb9c0();
   input += synapse0x21bba00();
   input += synapse0x21bba40();
   input += synapse0x21bba80();
   input += synapse0x21bbac0();
   input += synapse0x21bbb00();
   input += synapse0x21bb590();
   input += synapse0x21bb5d0();
   input += synapse0x21bbc50();
   input += synapse0x21bbc90();
   input += synapse0x21bbcd0();
   input += synapse0x21bbd10();
   input += synapse0x21bbd50();
   input += synapse0x21bbd90();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21bb400() {
   double input = input0x21bb400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21bbdd0() {
   double input = 0.312991;
   input += synapse0x21bc110();
   input += synapse0x21bc150();
   input += synapse0x21bc190();
   input += synapse0x21bc1d0();
   input += synapse0x21bc210();
   input += synapse0x21bc250();
   input += synapse0x21bc290();
   input += synapse0x21bc2d0();
   input += synapse0x21bc310();
   input += synapse0x21bc350();
   input += synapse0x21bc390();
   input += synapse0x21bc3d0();
   input += synapse0x21bc410();
   input += synapse0x21bc450();
   input += synapse0x21bc490();
   input += synapse0x21bc4d0();
   input += synapse0x21bbf60();
   input += synapse0x21bbfa0();
   input += synapse0x21bc620();
   input += synapse0x21bc660();
   input += synapse0x21bc6a0();
   input += synapse0x21bc6e0();
   input += synapse0x21bc720();
   input += synapse0x21bc760();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21bbdd0() {
   double input = input0x21bbdd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21bc7a0() {
   double input = -2.66778;
   input += synapse0x21bcae0();
   input += synapse0x21bcb20();
   input += synapse0x21bcb60();
   input += synapse0x21bcba0();
   input += synapse0x21bcbe0();
   input += synapse0x21bcc20();
   input += synapse0x21bcc60();
   input += synapse0x21bcca0();
   input += synapse0x21bcce0();
   input += synapse0x21bcd20();
   input += synapse0x21bcd60();
   input += synapse0x21bcda0();
   input += synapse0x21bcde0();
   input += synapse0x21bce20();
   input += synapse0x21bce60();
   input += synapse0x21bcea0();
   input += synapse0x21bc930();
   input += synapse0x21bc970();
   input += synapse0x21bcff0();
   input += synapse0x21bd030();
   input += synapse0x21bd070();
   input += synapse0x21bd0b0();
   input += synapse0x21bd0f0();
   input += synapse0x21bd130();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21bc7a0() {
   double input = input0x21bc7a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21bd170() {
   double input = -0.400082;
   input += synapse0x21bd4b0();
   input += synapse0x21bd4f0();
   input += synapse0x21bd530();
   input += synapse0x21bd570();
   input += synapse0x21bd5b0();
   input += synapse0x21bd5f0();
   input += synapse0x21bd630();
   input += synapse0x21bd670();
   input += synapse0x21bd6b0();
   input += synapse0x21bd6f0();
   input += synapse0x21bd730();
   input += synapse0x21bd770();
   input += synapse0x21bd7b0();
   input += synapse0x21bd7f0();
   input += synapse0x21bd830();
   input += synapse0x21bd870();
   input += synapse0x21bd300();
   input += synapse0x21bd340();
   input += synapse0x21bd9c0();
   input += synapse0x21bda00();
   input += synapse0x21bda40();
   input += synapse0x21bda80();
   input += synapse0x21bdac0();
   input += synapse0x21bdb00();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21bd170() {
   double input = input0x21bd170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21bdb40() {
   double input = 1.07247;
   input += synapse0x21bde80();
   input += synapse0x21bdec0();
   input += synapse0x21bdf00();
   input += synapse0x21bdf40();
   input += synapse0x21bdf80();
   input += synapse0x21bdfc0();
   input += synapse0x21be000();
   input += synapse0x21be040();
   input += synapse0x21be080();
   input += synapse0x21be0c0();
   input += synapse0x21be100();
   input += synapse0x21be140();
   input += synapse0x21be180();
   input += synapse0x21be1c0();
   input += synapse0x21be200();
   input += synapse0x21be240();
   input += synapse0x21bdcd0();
   input += synapse0x21bdd10();
   input += synapse0x21be390();
   input += synapse0x21be3d0();
   input += synapse0x21be410();
   input += synapse0x21be450();
   input += synapse0x21be490();
   input += synapse0x21be4d0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21bdb40() {
   double input = input0x21bdb40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21be510() {
   double input = 0.554014;
   input += synapse0x21be850();
   input += synapse0x21b2e20();
   input += synapse0x21b2e60();
   input += synapse0x21b2ea0();
   input += synapse0x21b30f0();
   input += synapse0x21b3130();
   input += synapse0x21b3170();
   input += synapse0x21b33c0();
   input += synapse0x21b3400();
   input += synapse0x21b3650();
   input += synapse0x21b3690();
   input += synapse0x21b36d0();
   input += synapse0x21b3920();
   input += synapse0x21b3960();
   input += synapse0x21b3bb0();
   input += synapse0x21b3bf0();
   input += synapse0x21be6a0();
   input += synapse0x21be6e0();
   input += synapse0x21b3d40();
   input += synapse0x21b4250();
   input += synapse0x21b4290();
   input += synapse0x21b42d0();
   input += synapse0x21b4520();
   input += synapse0x21b4560();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21be510() {
   double input = input0x21be510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21b45a0() {
   double input = 0.0988054;
   input += synapse0x21b3e10();
   input += synapse0x21b3e50();
   input += synapse0x21b3e90();
   input += synapse0x21b3ed0();
   input += synapse0x21b4850();
   input += synapse0x21c0ba0();
   input += synapse0x21c0be0();
   input += synapse0x21c0c20();
   input += synapse0x21c0c60();
   input += synapse0x21c0ca0();
   input += synapse0x21c0ce0();
   input += synapse0x21c0d20();
   input += synapse0x21c0d60();
   input += synapse0x21c0da0();
   input += synapse0x21c0de0();
   input += synapse0x21c0e20();
   input += synapse0x21b4730();
   input += synapse0x21b4770();
   input += synapse0x21c0f70();
   input += synapse0x21c0fb0();
   input += synapse0x21c0ff0();
   input += synapse0x21c1030();
   input += synapse0x21c1070();
   input += synapse0x21c10b0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21b45a0() {
   double input = input0x21b45a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21c10f0() {
   double input = 1.29918;
   input += synapse0x21c1430();
   input += synapse0x21c1470();
   input += synapse0x21c14b0();
   input += synapse0x21c14f0();
   input += synapse0x21c1530();
   input += synapse0x21c1570();
   input += synapse0x21c15b0();
   input += synapse0x21c15f0();
   input += synapse0x21c1630();
   input += synapse0x21c1670();
   input += synapse0x21c16b0();
   input += synapse0x21c16f0();
   input += synapse0x21c1730();
   input += synapse0x21c1770();
   input += synapse0x21c17b0();
   input += synapse0x21c17f0();
   input += synapse0x21c1280();
   input += synapse0x21c12c0();
   input += synapse0x21c1940();
   input += synapse0x21c1980();
   input += synapse0x21c19c0();
   input += synapse0x21c1a00();
   input += synapse0x21c1a40();
   input += synapse0x21c1a80();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21c10f0() {
   double input = input0x21c10f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21c1ac0() {
   double input = -0.850073;
   input += synapse0x21c1e00();
   input += synapse0x21c1e40();
   input += synapse0x21c1e80();
   input += synapse0x21c1ec0();
   input += synapse0x21c1f00();
   input += synapse0x21c1f40();
   input += synapse0x21c1f80();
   input += synapse0x21c1fc0();
   input += synapse0x21c2000();
   input += synapse0x21c2040();
   input += synapse0x21c2080();
   input += synapse0x21c20c0();
   input += synapse0x21c2100();
   input += synapse0x21c2140();
   input += synapse0x21c2180();
   input += synapse0x21c21c0();
   input += synapse0x21c1c50();
   input += synapse0x21c1c90();
   input += synapse0x21c2310();
   input += synapse0x21c2350();
   input += synapse0x21c2390();
   input += synapse0x21c23d0();
   input += synapse0x21c2410();
   input += synapse0x21c2450();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21c1ac0() {
   double input = input0x21c1ac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21c2490() {
   double input = -1.49223;
   input += synapse0x21c27d0();
   input += synapse0x21c2810();
   input += synapse0x21c2850();
   input += synapse0x21c2890();
   input += synapse0x21c28d0();
   input += synapse0x21c2910();
   input += synapse0x21c2950();
   input += synapse0x21c2990();
   input += synapse0x21c29d0();
   input += synapse0x21c2a10();
   input += synapse0x21c2a50();
   input += synapse0x21c2a90();
   input += synapse0x21c2ad0();
   input += synapse0x21c2b10();
   input += synapse0x21c2b50();
   input += synapse0x21c2b90();
   input += synapse0x21c2620();
   input += synapse0x21c2660();
   input += synapse0x21c2ce0();
   input += synapse0x21c2d20();
   input += synapse0x21c2d60();
   input += synapse0x21c2da0();
   input += synapse0x21c2de0();
   input += synapse0x21c2e20();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21c2490() {
   double input = input0x21c2490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21c2e60() {
   double input = 0.490742;
   input += synapse0x21c31a0();
   input += synapse0x21c31e0();
   input += synapse0x21c3220();
   input += synapse0x21c3260();
   input += synapse0x21c32a0();
   input += synapse0x21c32e0();
   input += synapse0x21c3320();
   input += synapse0x21c3360();
   input += synapse0x21c33a0();
   input += synapse0x21c33e0();
   input += synapse0x21c3420();
   input += synapse0x21c3460();
   input += synapse0x21c34a0();
   input += synapse0x21c34e0();
   input += synapse0x21c3520();
   input += synapse0x21c3560();
   input += synapse0x21c2ff0();
   input += synapse0x21c3030();
   input += synapse0x21c36b0();
   input += synapse0x21c36f0();
   input += synapse0x21c3730();
   input += synapse0x21c3770();
   input += synapse0x21c37b0();
   input += synapse0x21c37f0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21c2e60() {
   double input = input0x21c2e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21c3830() {
   double input = 1.63172;
   input += synapse0x21c3b70();
   input += synapse0x21c3bb0();
   input += synapse0x21c3bf0();
   input += synapse0x21c3c30();
   input += synapse0x21c3c70();
   input += synapse0x21c3cb0();
   input += synapse0x21c3cf0();
   input += synapse0x21c3d30();
   input += synapse0x21c3d70();
   input += synapse0x21c3db0();
   input += synapse0x21c3df0();
   input += synapse0x21c3e30();
   input += synapse0x21c3e70();
   input += synapse0x21c3eb0();
   input += synapse0x21c3ef0();
   input += synapse0x21c3f30();
   input += synapse0x21c39c0();
   input += synapse0x21c3a00();
   input += synapse0x21c4080();
   input += synapse0x21c40c0();
   input += synapse0x21c4100();
   input += synapse0x21c4140();
   input += synapse0x21c4180();
   input += synapse0x21c41c0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21c3830() {
   double input = input0x21c3830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21c4200() {
   double input = -0.521509;
   input += synapse0x21c4540();
   input += synapse0x21c4580();
   input += synapse0x21c45c0();
   input += synapse0x21c4600();
   input += synapse0x21c4640();
   input += synapse0x21c4680();
   input += synapse0x21c46c0();
   input += synapse0x21c4700();
   input += synapse0x21c4740();
   input += synapse0x21c4780();
   input += synapse0x21c47c0();
   input += synapse0x21c4800();
   input += synapse0x21c4840();
   input += synapse0x21c4880();
   input += synapse0x21c48c0();
   input += synapse0x21c4900();
   input += synapse0x21c4390();
   input += synapse0x21c43d0();
   input += synapse0x21c4a50();
   input += synapse0x21c4a90();
   input += synapse0x21c4ad0();
   input += synapse0x21c4b10();
   input += synapse0x21c4b50();
   input += synapse0x21c4b90();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21c4200() {
   double input = input0x21c4200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21c4bd0() {
   double input = 1.21889;
   input += synapse0x21c4f10();
   input += synapse0x21c4f50();
   input += synapse0x21c4f90();
   input += synapse0x21c4fd0();
   input += synapse0x21c5010();
   input += synapse0x21c5050();
   input += synapse0x21c5090();
   input += synapse0x21c50d0();
   input += synapse0x21c5110();
   input += synapse0x21c5150();
   input += synapse0x21c5190();
   input += synapse0x21c51d0();
   input += synapse0x21c5210();
   input += synapse0x21c5250();
   input += synapse0x21c5290();
   input += synapse0x21c52d0();
   input += synapse0x21c4d60();
   input += synapse0x21c4da0();
   input += synapse0x21c5420();
   input += synapse0x21c5460();
   input += synapse0x21c54a0();
   input += synapse0x21c54e0();
   input += synapse0x21c5520();
   input += synapse0x21c5560();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21c4bd0() {
   double input = input0x21c4bd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21c55a0() {
   double input = -1.08926;
   input += synapse0x21ae010();
   input += synapse0x21ae050();
   input += synapse0x21ae090();
   input += synapse0x21ae0d0();
   input += synapse0x21ae110();
   input += synapse0x21ae150();
   input += synapse0x21ae190();
   input += synapse0x21ae1d0();
   input += synapse0x21c5cf0();
   input += synapse0x21c5d30();
   input += synapse0x21c5d70();
   input += synapse0x21c5db0();
   input += synapse0x21c5df0();
   input += synapse0x21c5e30();
   input += synapse0x21c5e70();
   input += synapse0x21c5eb0();
   input += synapse0x21c5730();
   input += synapse0x21c5770();
   input += synapse0x21c6000();
   input += synapse0x21c6040();
   input += synapse0x21c6080();
   input += synapse0x21c60c0();
   input += synapse0x21c6100();
   input += synapse0x21c6140();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21c55a0() {
   double input = input0x21c55a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21c6180() {
   double input = -1.59489;
   input += synapse0x21c64c0();
   input += synapse0x21c6500();
   input += synapse0x21c6540();
   input += synapse0x21c6580();
   input += synapse0x21c65c0();
   input += synapse0x21c6600();
   input += synapse0x21c6640();
   input += synapse0x21c6680();
   input += synapse0x21c66c0();
   input += synapse0x21c6700();
   input += synapse0x21c6740();
   input += synapse0x21c6780();
   input += synapse0x21c67c0();
   input += synapse0x21c6800();
   input += synapse0x21c6840();
   input += synapse0x21c6880();
   input += synapse0x21c6310();
   input += synapse0x21c6350();
   input += synapse0x21c69d0();
   input += synapse0x21c6a10();
   input += synapse0x21c6a50();
   input += synapse0x21c6a90();
   input += synapse0x21c6ad0();
   input += synapse0x21c6b10();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21c6180() {
   double input = input0x21c6180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21c6b50() {
   double input = 0.355267;
   input += synapse0x21c6e90();
   input += synapse0x21c6ed0();
   input += synapse0x21c6f10();
   input += synapse0x21c6f50();
   input += synapse0x21c6f90();
   input += synapse0x21c6fd0();
   input += synapse0x21c7010();
   input += synapse0x21c7050();
   input += synapse0x21c7090();
   input += synapse0x21c70d0();
   input += synapse0x21c7110();
   input += synapse0x21c7150();
   input += synapse0x21c7190();
   input += synapse0x21c71d0();
   input += synapse0x21c7210();
   input += synapse0x21c7250();
   input += synapse0x21c6ce0();
   input += synapse0x21c6d20();
   input += synapse0x21b7850();
   input += synapse0x21b7890();
   input += synapse0x21b78d0();
   input += synapse0x21b7910();
   input += synapse0x21b7950();
   input += synapse0x21b7990();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21c6b50() {
   double input = input0x21c6b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21b79d0() {
   double input = 2.20163;
   input += synapse0x21b7d10();
   input += synapse0x21b7d50();
   input += synapse0x21b7d90();
   input += synapse0x21b7dd0();
   input += synapse0x21b7e10();
   input += synapse0x21b7e50();
   input += synapse0x21b7e90();
   input += synapse0x21b7ed0();
   input += synapse0x21b7f10();
   input += synapse0x21b7f50();
   input += synapse0x21b7f90();
   input += synapse0x21b7fd0();
   input += synapse0x21b8010();
   input += synapse0x21b8050();
   input += synapse0x21b8090();
   input += synapse0x21b80d0();
   input += synapse0x21b7b60();
   input += synapse0x21b7ba0();
   input += synapse0x21b8220();
   input += synapse0x21b8260();
   input += synapse0x21b82a0();
   input += synapse0x21b82e0();
   input += synapse0x21b8320();
   input += synapse0x21b8360();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21b79d0() {
   double input = input0x21b79d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21b83a0() {
   double input = 0.246938;
   input += synapse0x21b86e0();
   input += synapse0x21b8720();
   input += synapse0x21b8760();
   input += synapse0x21b87a0();
   input += synapse0x21b87e0();
   input += synapse0x21b8820();
   input += synapse0x21b8860();
   input += synapse0x21b88a0();
   input += synapse0x21b88e0();
   input += synapse0x21b8920();
   input += synapse0x21b8960();
   input += synapse0x21b89a0();
   input += synapse0x21b89e0();
   input += synapse0x21b8a20();
   input += synapse0x21b8a60();
   input += synapse0x21b8aa0();
   input += synapse0x21b8530();
   input += synapse0x21b8570();
   input += synapse0x21b8bf0();
   input += synapse0x21b8c30();
   input += synapse0x21b8c70();
   input += synapse0x21b8cb0();
   input += synapse0x21b8cf0();
   input += synapse0x21b8d30();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21b83a0() {
   double input = input0x21b83a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21b8d70() {
   double input = 1.01025;
   input += synapse0x21b90b0();
   input += synapse0x21b90f0();
   input += synapse0x21b9130();
   input += synapse0x21b9170();
   input += synapse0x21b91b0();
   input += synapse0x21b91f0();
   input += synapse0x21b9230();
   input += synapse0x21b9270();
   input += synapse0x21b92b0();
   input += synapse0x21b92f0();
   input += synapse0x21b9330();
   input += synapse0x21b9370();
   input += synapse0x21b93b0();
   input += synapse0x21b93f0();
   input += synapse0x21b9430();
   input += synapse0x21b9470();
   input += synapse0x21b8f00();
   input += synapse0x21b8f40();
   input += synapse0x21b95c0();
   input += synapse0x21b9600();
   input += synapse0x21b9640();
   input += synapse0x21b9680();
   input += synapse0x21b96c0();
   input += synapse0x21b9700();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21b8d70() {
   double input = input0x21b8d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21cb3b0() {
   double input = -0.259308;
   input += synapse0x21cb5d0();
   input += synapse0x21cb610();
   input += synapse0x21cb650();
   input += synapse0x21cb690();
   input += synapse0x21cb6d0();
   input += synapse0x21cb710();
   input += synapse0x21cb750();
   input += synapse0x21cb790();
   input += synapse0x21cb7d0();
   input += synapse0x21cb810();
   input += synapse0x21cb850();
   input += synapse0x21cb890();
   input += synapse0x21cb8d0();
   input += synapse0x21cb910();
   input += synapse0x21cb950();
   input += synapse0x21cb990();
   input += synapse0x21b9740();
   input += synapse0x21b9780();
   input += synapse0x21cbae0();
   input += synapse0x21cbb20();
   input += synapse0x21cbb60();
   input += synapse0x21cbba0();
   input += synapse0x21cbbe0();
   input += synapse0x21cbc20();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21cb3b0() {
   double input = input0x21cb3b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21cbc60() {
   double input = -0.458229;
   input += synapse0x21cbfa0();
   input += synapse0x21cbfe0();
   input += synapse0x21cc020();
   input += synapse0x21cc060();
   input += synapse0x21cc0a0();
   input += synapse0x21cc0e0();
   input += synapse0x21cc120();
   input += synapse0x21cc160();
   input += synapse0x21cc1a0();
   input += synapse0x21cc1e0();
   input += synapse0x21cc220();
   input += synapse0x21cc260();
   input += synapse0x21cc2a0();
   input += synapse0x21cc2e0();
   input += synapse0x21cc320();
   input += synapse0x21cc360();
   input += synapse0x21cbdf0();
   input += synapse0x21cbe30();
   input += synapse0x21cc4b0();
   input += synapse0x21cc4f0();
   input += synapse0x21cc530();
   input += synapse0x21cc570();
   input += synapse0x21cc5b0();
   input += synapse0x21cc5f0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21cbc60() {
   double input = input0x21cbc60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21cc630() {
   double input = 1.93598;
   input += synapse0x21cc970();
   input += synapse0x21cc9b0();
   input += synapse0x21cc9f0();
   input += synapse0x21cca30();
   input += synapse0x21cca70();
   input += synapse0x21ccab0();
   input += synapse0x21ccaf0();
   input += synapse0x21ccb30();
   input += synapse0x21ccb70();
   input += synapse0x21ccbb0();
   input += synapse0x21ccbf0();
   input += synapse0x21ccc30();
   input += synapse0x21ccc70();
   input += synapse0x21cccb0();
   input += synapse0x21cccf0();
   input += synapse0x21ccd30();
   input += synapse0x21cc7c0();
   input += synapse0x21cc800();
   input += synapse0x21cce80();
   input += synapse0x21ccec0();
   input += synapse0x21ccf00();
   input += synapse0x21ccf40();
   input += synapse0x21ccf80();
   input += synapse0x21ccfc0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21cc630() {
   double input = input0x21cc630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21cd000() {
   double input = 0.316205;
   input += synapse0x21cd340();
   input += synapse0x21cd380();
   input += synapse0x21cd3c0();
   input += synapse0x21cd400();
   input += synapse0x21cd440();
   input += synapse0x21cd480();
   input += synapse0x21cd4c0();
   input += synapse0x21cd500();
   input += synapse0x21cd540();
   input += synapse0x21cd580();
   input += synapse0x21cd5c0();
   input += synapse0x21cd600();
   input += synapse0x21cd640();
   input += synapse0x21cd680();
   input += synapse0x21cd6c0();
   input += synapse0x21cd700();
   input += synapse0x21cd190();
   input += synapse0x21cd1d0();
   input += synapse0x21cd850();
   input += synapse0x21cd890();
   input += synapse0x21cd8d0();
   input += synapse0x21cd910();
   input += synapse0x21cd950();
   input += synapse0x21cd990();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21cd000() {
   double input = input0x21cd000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21d4200() {
   double input = -0.706058;
   input += synapse0x21a9f30();
   input += synapse0x21a9f70();
   input += synapse0x21ab440();
   input += synapse0x21ab480();
   input += synapse0x21abe10();
   input += synapse0x21abe50();
   input += synapse0x21acbe0();
   input += synapse0x21acc20();
   input += synapse0x21ad5b0();
   input += synapse0x21ad5f0();
   input += synapse0x21adf80();
   input += synapse0x21adfc0();
   input += synapse0x21aea60();
   input += synapse0x21aeaa0();
   input += synapse0x21af430();
   input += synapse0x21af470();
   input += synapse0x21ac510();
   input += synapse0x21ac550();
   input += synapse0x21b0fe0();
   input += synapse0x21b1020();
   input += synapse0x21b19b0();
   input += synapse0x21b19f0();
   input += synapse0x21b2380();
   input += synapse0x21b23c0();
   input += synapse0x21b2d50();
   input += synapse0x21b2d90();
   input += synapse0x21a6ec0();
   input += synapse0x21a6f00();
   input += synapse0x21b4e40();
   input += synapse0x21b4e80();
   input += synapse0x21b5810();
   input += synapse0x21b5850();
   input += synapse0x21b61e0();
   input += synapse0x21b6220();
   input += synapse0x21b6bb0();
   input += synapse0x21b6bf0();
   input += synapse0x21b7580();
   input += synapse0x21b75c0();
   input += synapse0x21b00d0();
   input += synapse0x21b0110();
   input += synapse0x21b9980();
   input += synapse0x21b99c0();
   input += synapse0x21ba310();
   input += synapse0x21ba350();
   input += synapse0x21bace0();
   input += synapse0x21bad20();
   input += synapse0x21bb6b0();
   input += synapse0x21bb6f0();
   input += synapse0x21bc080();
   input += synapse0x21bc0c0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21d4200() {
   double input = input0x21d4200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21d45a0() {
   double input = -0.650733;
   input += synapse0x21be7c0();
   input += synapse0x21be800();
   input += synapse0x21b3d80();
   input += synapse0x21b3dc0();
   input += synapse0x21c13a0();
   input += synapse0x21c13e0();
   input += synapse0x21c1d70();
   input += synapse0x21c1db0();
   input += synapse0x21c2740();
   input += synapse0x21c2780();
   input += synapse0x21c3110();
   input += synapse0x21c3150();
   input += synapse0x21c3ae0();
   input += synapse0x21c3b20();
   input += synapse0x21c44b0();
   input += synapse0x21c44f0();
   input += synapse0x21c4e80();
   input += synapse0x21c4ec0();
   input += synapse0x21c5850();
   input += synapse0x21c5890();
   input += synapse0x21c6430();
   input += synapse0x21c6470();
   input += synapse0x21c6e00();
   input += synapse0x21c6e40();
   input += synapse0x21b7c80();
   input += synapse0x21b7cc0();
   input += synapse0x21b8650();
   input += synapse0x21b8690();
   input += synapse0x21b9020();
   input += synapse0x21b9060();
   input += synapse0x21cb540();
   input += synapse0x21cb580();
   input += synapse0x21cbf10();
   input += synapse0x21cbf50();
   input += synapse0x21cc8e0();
   input += synapse0x21cc920();
   input += synapse0x21cd2b0();
   input += synapse0x21cd2f0();
   input += synapse0x21a91a0();
   input += synapse0x21a91e0();
   input += synapse0x21bca50();
   input += synapse0x21bca90();
   input += synapse0x21cd9d0();
   input += synapse0x21cda10();
   input += synapse0x21cda50();
   input += synapse0x21cda90();
   input += synapse0x21d4940();
   input += synapse0x21d4980();
   input += synapse0x21d49c0();
   input += synapse0x21d4a00();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21d45a0() {
   double input = input0x21d45a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21d4a40() {
   double input = 0.458723;
   input += synapse0x21d4d80();
   input += synapse0x21d4dc0();
   input += synapse0x21d4e00();
   input += synapse0x21d4e40();
   input += synapse0x21d4e80();
   input += synapse0x21d4ec0();
   input += synapse0x21d4f00();
   input += synapse0x21d4f40();
   input += synapse0x21d4f80();
   input += synapse0x21d4fc0();
   input += synapse0x21d5000();
   input += synapse0x21d5040();
   input += synapse0x21d5080();
   input += synapse0x21d50c0();
   input += synapse0x21d5100();
   input += synapse0x21d5140();
   input += synapse0x21d4bd0();
   input += synapse0x21d4c10();
   input += synapse0x21d5290();
   input += synapse0x21d52d0();
   input += synapse0x21d5310();
   input += synapse0x21d5350();
   input += synapse0x21d5390();
   input += synapse0x21d53d0();
   input += synapse0x21d5410();
   input += synapse0x21d5450();
   input += synapse0x21d5490();
   input += synapse0x21d54d0();
   input += synapse0x21d5510();
   input += synapse0x21d5550();
   input += synapse0x21d5590();
   input += synapse0x21d55d0();
   input += synapse0x21d5180();
   input += synapse0x21d51c0();
   input += synapse0x21d5200();
   input += synapse0x21d5240();
   input += synapse0x21d5820();
   input += synapse0x21d5860();
   input += synapse0x21d58a0();
   input += synapse0x21d58e0();
   input += synapse0x21d5920();
   input += synapse0x21d5960();
   input += synapse0x21d59a0();
   input += synapse0x21d59e0();
   input += synapse0x21d5a20();
   input += synapse0x21d5a60();
   input += synapse0x21d5aa0();
   input += synapse0x21d5ae0();
   input += synapse0x21d5b20();
   input += synapse0x21d5b60();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21d4a40() {
   double input = input0x21d4a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21d5ba0() {
   double input = -0.0184604;
   input += synapse0x21d5ee0();
   input += synapse0x21d5f20();
   input += synapse0x21d5f60();
   input += synapse0x21d5fa0();
   input += synapse0x21d5fe0();
   input += synapse0x21d6020();
   input += synapse0x21d6060();
   input += synapse0x21d60a0();
   input += synapse0x21d60e0();
   input += synapse0x21d6120();
   input += synapse0x21d6160();
   input += synapse0x21d61a0();
   input += synapse0x21d61e0();
   input += synapse0x21d6220();
   input += synapse0x21d6260();
   input += synapse0x21d62a0();
   input += synapse0x21d5d30();
   input += synapse0x21d5d70();
   input += synapse0x21d63f0();
   input += synapse0x21d6430();
   input += synapse0x21d6470();
   input += synapse0x21d64b0();
   input += synapse0x21d64f0();
   input += synapse0x21d6530();
   input += synapse0x21d6570();
   input += synapse0x21d65b0();
   input += synapse0x21d65f0();
   input += synapse0x21d6630();
   input += synapse0x21d6670();
   input += synapse0x21d66b0();
   input += synapse0x21d66f0();
   input += synapse0x21d6730();
   input += synapse0x21d62e0();
   input += synapse0x21d6320();
   input += synapse0x21d6360();
   input += synapse0x21d63a0();
   input += synapse0x21d6980();
   input += synapse0x21d69c0();
   input += synapse0x21d6a00();
   input += synapse0x21d6a40();
   input += synapse0x21d6a80();
   input += synapse0x21d6ac0();
   input += synapse0x21d6b00();
   input += synapse0x21d6b40();
   input += synapse0x21d6b80();
   input += synapse0x21d6bc0();
   input += synapse0x21d6c00();
   input += synapse0x21d6c40();
   input += synapse0x21d6c80();
   input += synapse0x21d6cc0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21d5ba0() {
   double input = input0x21d5ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21d6d00() {
   double input = 0.138886;
   input += synapse0x21d7040();
   input += synapse0x21d7080();
   input += synapse0x21d70c0();
   input += synapse0x21d7100();
   input += synapse0x21d7140();
   input += synapse0x21d7180();
   input += synapse0x21d71c0();
   input += synapse0x21d7200();
   input += synapse0x21d7240();
   input += synapse0x21d7280();
   input += synapse0x21d72c0();
   input += synapse0x21d7300();
   input += synapse0x21d7340();
   input += synapse0x21d7380();
   input += synapse0x21d73c0();
   input += synapse0x21d7400();
   input += synapse0x21d6e90();
   input += synapse0x21d6ed0();
   input += synapse0x21d7550();
   input += synapse0x21d7590();
   input += synapse0x21d75d0();
   input += synapse0x21d7610();
   input += synapse0x21d7650();
   input += synapse0x21d7690();
   input += synapse0x21d76d0();
   input += synapse0x21d7710();
   input += synapse0x21d7750();
   input += synapse0x21d7790();
   input += synapse0x21d77d0();
   input += synapse0x21d7810();
   input += synapse0x21d7850();
   input += synapse0x21d7890();
   input += synapse0x21d7440();
   input += synapse0x21d7480();
   input += synapse0x21d74c0();
   input += synapse0x21d7500();
   input += synapse0x21d7ae0();
   input += synapse0x21d7b20();
   input += synapse0x21d7b60();
   input += synapse0x21d7ba0();
   input += synapse0x21d7be0();
   input += synapse0x21d7c20();
   input += synapse0x21d7c60();
   input += synapse0x21d7ca0();
   input += synapse0x21d7ce0();
   input += synapse0x21d7d20();
   input += synapse0x21d7d60();
   input += synapse0x21d7da0();
   input += synapse0x21d7de0();
   input += synapse0x21d7e20();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21d6d00() {
   double input = input0x21d6d00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x21d7e60() {
   double input = 3.99962;
   input += synapse0x21a8f40();
   input += synapse0x21d8080();
   input += synapse0x21d80c0();
   input += synapse0x21d8100();
   input += synapse0x21d8140();
   return input;
}

double NNfunction_sb_cLsR::neuron0x21d7e60() {
   double input = input0x21d7e60();
   return (input * 1)+0;
}

double NNfunction_sb_cLsR::synapse0x1f6d8d0() {
   return (neuron0x21a3f20()*-0.0385815);
}

double NNfunction_sb_cLsR::synapse0x21a3de0() {
   return (neuron0x21a4260()*-0.0537285);
}

double NNfunction_sb_cLsR::synapse0x21a3e20() {
   return (neuron0x21a45a0()*0.974146);
}

double NNfunction_sb_cLsR::synapse0x21a9230() {
   return (neuron0x21a48e0()*0.0423909);
}

double NNfunction_sb_cLsR::synapse0x21a9270() {
   return (neuron0x21a4c20()*-0.0147873);
}

double NNfunction_sb_cLsR::synapse0x21a92b0() {
   return (neuron0x21a4f60()*-0.00886197);
}

double NNfunction_sb_cLsR::synapse0x21a92f0() {
   return (neuron0x21a52a0()*0.00970733);
}

double NNfunction_sb_cLsR::synapse0x21a9330() {
   return (neuron0x21a55e0()*0.000350396);
}

double NNfunction_sb_cLsR::synapse0x21a9370() {
   return (neuron0x21a5920()*0.0550014);
}

double NNfunction_sb_cLsR::synapse0x21a93b0() {
   return (neuron0x21a5c60()*-0.00696218);
}

double NNfunction_sb_cLsR::synapse0x21a93f0() {
   return (neuron0x21a5fa0()*0.022136);
}

double NNfunction_sb_cLsR::synapse0x21a9430() {
   return (neuron0x21a62e0()*0.0380985);
}

double NNfunction_sb_cLsR::synapse0x21a9470() {
   return (neuron0x21a6620()*-0.354319);
}

double NNfunction_sb_cLsR::synapse0x21a94b0() {
   return (neuron0x21a6960()*-0.0214484);
}

double NNfunction_sb_cLsR::synapse0x21a94f0() {
   return (neuron0x21a6ca0()*-0.0295543);
}

double NNfunction_sb_cLsR::synapse0x21a9530() {
   return (neuron0x21a6fe0()*-0.0458495);
}

double NNfunction_sb_cLsR::synapse0x21a3d50() {
   return (neuron0x21a7320()*0.00797618);
}

double NNfunction_sb_cLsR::synapse0x21a3d90() {
   return (neuron0x21a7880()*0.0160691);
}

double NNfunction_sb_cLsR::synapse0x1f5f140() {
   return (neuron0x21a7aa0()*-0.0284609);
}

double NNfunction_sb_cLsR::synapse0x1f5f180() {
   return (neuron0x21a7de0()*0.0267145);
}

double NNfunction_sb_cLsR::synapse0x21a9790() {
   return (neuron0x21a8120()*0.0134113);
}

double NNfunction_sb_cLsR::synapse0x21a97d0() {
   return (neuron0x21a8460()*-0.00833446);
}

double NNfunction_sb_cLsR::synapse0x21a9810() {
   return (neuron0x21a87a0()*-0.0275841);
}

double NNfunction_sb_cLsR::synapse0x21a9850() {
   return (neuron0x21a8ae0()*-0.0546693);
}

double NNfunction_sb_cLsR::synapse0x21a9bd0() {
   return (neuron0x21a3f20()*-0.255941);
}

double NNfunction_sb_cLsR::synapse0x21a9c10() {
   return (neuron0x21a4260()*-0.378105);
}

double NNfunction_sb_cLsR::synapse0x21a9c50() {
   return (neuron0x21a45a0()*-0.466909);
}

double NNfunction_sb_cLsR::synapse0x21a9c90() {
   return (neuron0x21a48e0()*-0.406073);
}

double NNfunction_sb_cLsR::synapse0x21a9cd0() {
   return (neuron0x21a4c20()*-0.650544);
}

double NNfunction_sb_cLsR::synapse0x21a9d10() {
   return (neuron0x21a4f60()*-0.198328);
}

double NNfunction_sb_cLsR::synapse0x21a9d50() {
   return (neuron0x21a52a0()*0.140199);
}

double NNfunction_sb_cLsR::synapse0x21a9d90() {
   return (neuron0x21a55e0()*0.114538);
}

double NNfunction_sb_cLsR::synapse0x21a9dd0() {
   return (neuron0x21a5920()*0.376259);
}

double NNfunction_sb_cLsR::synapse0x21a9680() {
   return (neuron0x21a5c60()*-0.185986);
}

double NNfunction_sb_cLsR::synapse0x21a96c0() {
   return (neuron0x21a5fa0()*0.381104);
}

double NNfunction_sb_cLsR::synapse0x21a9700() {
   return (neuron0x21a62e0()*0.10286);
}

double NNfunction_sb_cLsR::synapse0x21a9740() {
   return (neuron0x21a6620()*1.2256);
}

double NNfunction_sb_cLsR::synapse0x21aa020() {
   return (neuron0x21a6960()*-0.0454207);
}

double NNfunction_sb_cLsR::synapse0x21aa060() {
   return (neuron0x21a6ca0()*0.276124);
}

double NNfunction_sb_cLsR::synapse0x21aa0a0() {
   return (neuron0x21a6fe0()*0.139894);
}

double NNfunction_sb_cLsR::synapse0x21a9a20() {
   return (neuron0x21a7320()*0.0429536);
}

double NNfunction_sb_cLsR::synapse0x21a9a60() {
   return (neuron0x21a7880()*-0.122161);
}

double NNfunction_sb_cLsR::synapse0x21aa1f0() {
   return (neuron0x21a7aa0()*0.746968);
}

double NNfunction_sb_cLsR::synapse0x21aa230() {
   return (neuron0x21a7de0()*0.390774);
}

double NNfunction_sb_cLsR::synapse0x21aa270() {
   return (neuron0x21a8120()*-0.220384);
}

double NNfunction_sb_cLsR::synapse0x21aa2b0() {
   return (neuron0x21a8460()*0.288663);
}

double NNfunction_sb_cLsR::synapse0x21aa2f0() {
   return (neuron0x21a87a0()*0.280727);
}

double NNfunction_sb_cLsR::synapse0x21aa330() {
   return (neuron0x21a8ae0()*0.074482);
}

double NNfunction_sb_cLsR::synapse0x21aa6b0() {
   return (neuron0x21a3f20()*0.489473);
}

double NNfunction_sb_cLsR::synapse0x21aa6f0() {
   return (neuron0x21a4260()*0.10988);
}

double NNfunction_sb_cLsR::synapse0x21aa730() {
   return (neuron0x21a45a0()*-0.268738);
}

double NNfunction_sb_cLsR::synapse0x21aa770() {
   return (neuron0x21a48e0()*-0.531106);
}

double NNfunction_sb_cLsR::synapse0x21aa7b0() {
   return (neuron0x21a4c20()*-0.223487);
}

double NNfunction_sb_cLsR::synapse0x21aa7f0() {
   return (neuron0x21a4f60()*0.0355538);
}

double NNfunction_sb_cLsR::synapse0x21aa830() {
   return (neuron0x21a52a0()*-0.898744);
}

double NNfunction_sb_cLsR::synapse0x21aa870() {
   return (neuron0x21a55e0()*-0.0659844);
}

double NNfunction_sb_cLsR::synapse0x21aa8b0() {
   return (neuron0x21a5920()*-0.00491586);
}

double NNfunction_sb_cLsR::synapse0x21aa8f0() {
   return (neuron0x21a5c60()*1.20056);
}

double NNfunction_sb_cLsR::synapse0x21aa930() {
   return (neuron0x21a5fa0()*0.337124);
}

double NNfunction_sb_cLsR::synapse0x21aa970() {
   return (neuron0x21a62e0()*0.517609);
}

double NNfunction_sb_cLsR::synapse0x21aa9b0() {
   return (neuron0x21a6620()*-0.329792);
}

double NNfunction_sb_cLsR::synapse0x21aa9f0() {
   return (neuron0x21a6960()*0.263383);
}

double NNfunction_sb_cLsR::synapse0x21aaa30() {
   return (neuron0x21a6ca0()*-0.151546);
}

double NNfunction_sb_cLsR::synapse0x21aaa70() {
   return (neuron0x21a6fe0()*0.453096);
}

double NNfunction_sb_cLsR::synapse0x21aa500() {
   return (neuron0x21a7320()*-0.1267);
}

double NNfunction_sb_cLsR::synapse0x21aa540() {
   return (neuron0x21a7880()*0.220356);
}

double NNfunction_sb_cLsR::synapse0x1f6cfe0() {
   return (neuron0x21a7aa0()*-0.208976);
}

double NNfunction_sb_cLsR::synapse0x1f6d020() {
   return (neuron0x21a7de0()*0.380181);
}

double NNfunction_sb_cLsR::synapse0x2192fb0() {
   return (neuron0x21a8120()*0.142326);
}

double NNfunction_sb_cLsR::synapse0x2192ff0() {
   return (neuron0x21a8460()*0.297437);
}

double NNfunction_sb_cLsR::synapse0x2193030() {
   return (neuron0x21a87a0()*0.481048);
}

double NNfunction_sb_cLsR::synapse0x21a3e60() {
   return (neuron0x21a8ae0()*-0.446625);
}

double NNfunction_sb_cLsR::synapse0x21a9fc0() {
   return (neuron0x21a3f20()*-0.102307);
}

double NNfunction_sb_cLsR::synapse0x21a3ea0() {
   return (neuron0x21a4260()*0.00718909);
}

double NNfunction_sb_cLsR::synapse0x21a3ee0() {
   return (neuron0x21a45a0()*-0.0508232);
}

double NNfunction_sb_cLsR::synapse0x21aabc0() {
   return (neuron0x21a48e0()*-1.11556);
}

double NNfunction_sb_cLsR::synapse0x21aac00() {
   return (neuron0x21a4c20()*-0.0282545);
}

double NNfunction_sb_cLsR::synapse0x21aac40() {
   return (neuron0x21a4f60()*-0.123682);
}

double NNfunction_sb_cLsR::synapse0x21aac80() {
   return (neuron0x21a52a0()*0.0994119);
}

double NNfunction_sb_cLsR::synapse0x21aacc0() {
   return (neuron0x21a55e0()*0.0122372);
}

double NNfunction_sb_cLsR::synapse0x21aad00() {
   return (neuron0x21a5920()*0.0420927);
}

double NNfunction_sb_cLsR::synapse0x21aad40() {
   return (neuron0x21a5c60()*-0.035218);
}

double NNfunction_sb_cLsR::synapse0x21aad80() {
   return (neuron0x21a5fa0()*0.00178283);
}

double NNfunction_sb_cLsR::synapse0x21aadc0() {
   return (neuron0x21a62e0()*0.0415264);
}

double NNfunction_sb_cLsR::synapse0x21aae00() {
   return (neuron0x21a6620()*-0.503211);
}

double NNfunction_sb_cLsR::synapse0x21aae40() {
   return (neuron0x21a6960()*0.0483472);
}

double NNfunction_sb_cLsR::synapse0x21aae80() {
   return (neuron0x21a6ca0()*-0.00920605);
}

double NNfunction_sb_cLsR::synapse0x21aaec0() {
   return (neuron0x21a6fe0()*-0.107716);
}

double NNfunction_sb_cLsR::synapse0x21a9e10() {
   return (neuron0x21a7320()*-0.0239936);
}

double NNfunction_sb_cLsR::synapse0x21a9e50() {
   return (neuron0x21a7880()*0.0320421);
}

double NNfunction_sb_cLsR::synapse0x21ab010() {
   return (neuron0x21a7aa0()*0.839602);
}

double NNfunction_sb_cLsR::synapse0x21ab050() {
   return (neuron0x21a7de0()*-0.103524);
}

double NNfunction_sb_cLsR::synapse0x21ab090() {
   return (neuron0x21a8120()*-0.106803);
}

double NNfunction_sb_cLsR::synapse0x21ab0d0() {
   return (neuron0x21a8460()*0.0960419);
}

double NNfunction_sb_cLsR::synapse0x21ab110() {
   return (neuron0x21a87a0()*0.00349888);
}

double NNfunction_sb_cLsR::synapse0x21ab150() {
   return (neuron0x21a8ae0()*-0.0179934);
}

double NNfunction_sb_cLsR::synapse0x21ab4d0() {
   return (neuron0x21a3f20()*0.450881);
}

double NNfunction_sb_cLsR::synapse0x21ab510() {
   return (neuron0x21a4260()*0.517309);
}

double NNfunction_sb_cLsR::synapse0x21ab550() {
   return (neuron0x21a45a0()*0.476489);
}

double NNfunction_sb_cLsR::synapse0x21ab590() {
   return (neuron0x21a48e0()*-0.129776);
}

double NNfunction_sb_cLsR::synapse0x21ab5d0() {
   return (neuron0x21a4c20()*0.0214446);
}

double NNfunction_sb_cLsR::synapse0x21ab610() {
   return (neuron0x21a4f60()*-0.255218);
}

double NNfunction_sb_cLsR::synapse0x21ab650() {
   return (neuron0x21a52a0()*1.10774);
}

double NNfunction_sb_cLsR::synapse0x21ab690() {
   return (neuron0x21a55e0()*0.38792);
}

double NNfunction_sb_cLsR::synapse0x21ab6d0() {
   return (neuron0x21a5920()*0.589379);
}

double NNfunction_sb_cLsR::synapse0x21ab710() {
   return (neuron0x21a5c60()*0.0609148);
}

double NNfunction_sb_cLsR::synapse0x21ab750() {
   return (neuron0x21a5fa0()*-0.0230806);
}

double NNfunction_sb_cLsR::synapse0x21ab790() {
   return (neuron0x21a62e0()*-0.368262);
}

double NNfunction_sb_cLsR::synapse0x21ab7d0() {
   return (neuron0x21a6620()*-0.348101);
}

double NNfunction_sb_cLsR::synapse0x21ab810() {
   return (neuron0x21a6960()*0.238867);
}

double NNfunction_sb_cLsR::synapse0x21ab850() {
   return (neuron0x21a6ca0()*-0.573269);
}

double NNfunction_sb_cLsR::synapse0x21ab890() {
   return (neuron0x21a6fe0()*-0.63079);
}

double NNfunction_sb_cLsR::synapse0x21ab320() {
   return (neuron0x21a7320()*0.696687);
}

double NNfunction_sb_cLsR::synapse0x21ab360() {
   return (neuron0x21a7880()*0.130218);
}

double NNfunction_sb_cLsR::synapse0x21ab9e0() {
   return (neuron0x21a7aa0()*-0.329808);
}

double NNfunction_sb_cLsR::synapse0x21aba20() {
   return (neuron0x21a7de0()*0.0858694);
}

double NNfunction_sb_cLsR::synapse0x21aba60() {
   return (neuron0x21a8120()*0.0423052);
}

double NNfunction_sb_cLsR::synapse0x21abaa0() {
   return (neuron0x21a8460()*0.0981201);
}

double NNfunction_sb_cLsR::synapse0x21abae0() {
   return (neuron0x21a87a0()*-1.02211);
}

double NNfunction_sb_cLsR::synapse0x21abb20() {
   return (neuron0x21a8ae0()*-0.556299);
}

double NNfunction_sb_cLsR::synapse0x21abea0() {
   return (neuron0x21a3f20()*0.111947);
}

double NNfunction_sb_cLsR::synapse0x21abee0() {
   return (neuron0x21a4260()*-0.122866);
}

double NNfunction_sb_cLsR::synapse0x21abf20() {
   return (neuron0x21a45a0()*0.340692);
}

double NNfunction_sb_cLsR::synapse0x21abf60() {
   return (neuron0x21a48e0()*-0.366066);
}

double NNfunction_sb_cLsR::synapse0x21abfa0() {
   return (neuron0x21a4c20()*-0.280827);
}

double NNfunction_sb_cLsR::synapse0x21abfe0() {
   return (neuron0x21a4f60()*-0.155841);
}

double NNfunction_sb_cLsR::synapse0x21ac020() {
   return (neuron0x21a52a0()*0.0592926);
}

double NNfunction_sb_cLsR::synapse0x21ac060() {
   return (neuron0x21a55e0()*-0.237195);
}

double NNfunction_sb_cLsR::synapse0x21ac0a0() {
   return (neuron0x21a5920()*0.0181188);
}

double NNfunction_sb_cLsR::synapse0x1f6d330() {
   return (neuron0x21a5c60()*-0.27264);
}

double NNfunction_sb_cLsR::synapse0x1f6d370() {
   return (neuron0x21a5fa0()*0.528172);
}

double NNfunction_sb_cLsR::synapse0x1f6d3b0() {
   return (neuron0x21a62e0()*0.863538);
}

double NNfunction_sb_cLsR::synapse0x1f6d3f0() {
   return (neuron0x21a6620()*0.121099);
}

double NNfunction_sb_cLsR::synapse0x1f6d430() {
   return (neuron0x21a6960()*-0.120683);
}

double NNfunction_sb_cLsR::synapse0x1f6d470() {
   return (neuron0x21a6ca0()*0.202064);
}

double NNfunction_sb_cLsR::synapse0x1f6d4b0() {
   return (neuron0x21a6fe0()*-0.158736);
}

double NNfunction_sb_cLsR::synapse0x21abcf0() {
   return (neuron0x21a7320()*0.337919);
}

double NNfunction_sb_cLsR::synapse0x21abd30() {
   return (neuron0x21a7880()*0.289203);
}

double NNfunction_sb_cLsR::synapse0x1f6d600() {
   return (neuron0x21a7aa0()*0.172333);
}

double NNfunction_sb_cLsR::synapse0x1f6d640() {
   return (neuron0x21a7de0()*0.0807718);
}

double NNfunction_sb_cLsR::synapse0x1f6d680() {
   return (neuron0x21a8120()*0.210957);
}

double NNfunction_sb_cLsR::synapse0x1f6d6c0() {
   return (neuron0x21a8460()*0.143175);
}

double NNfunction_sb_cLsR::synapse0x1f6d700() {
   return (neuron0x21a87a0()*0.166918);
}

double NNfunction_sb_cLsR::synapse0x21ac8f0() {
   return (neuron0x21a8ae0()*0.369453);
}

double NNfunction_sb_cLsR::synapse0x21acc70() {
   return (neuron0x21a3f20()*-0.0702201);
}

double NNfunction_sb_cLsR::synapse0x21accb0() {
   return (neuron0x21a4260()*0.170811);
}

double NNfunction_sb_cLsR::synapse0x21accf0() {
   return (neuron0x21a45a0()*-0.0398386);
}

double NNfunction_sb_cLsR::synapse0x21acd30() {
   return (neuron0x21a48e0()*0.0617478);
}

double NNfunction_sb_cLsR::synapse0x21acd70() {
   return (neuron0x21a4c20()*-0.705931);
}

double NNfunction_sb_cLsR::synapse0x21acdb0() {
   return (neuron0x21a4f60()*-0.0536338);
}

double NNfunction_sb_cLsR::synapse0x21acdf0() {
   return (neuron0x21a52a0()*-0.0934495);
}

double NNfunction_sb_cLsR::synapse0x21ace30() {
   return (neuron0x21a55e0()*-0.172371);
}

double NNfunction_sb_cLsR::synapse0x21ace70() {
   return (neuron0x21a5920()*-0.231503);
}

double NNfunction_sb_cLsR::synapse0x21aceb0() {
   return (neuron0x21a5c60()*0.091232);
}

double NNfunction_sb_cLsR::synapse0x21acef0() {
   return (neuron0x21a5fa0()*-0.0330443);
}

double NNfunction_sb_cLsR::synapse0x21acf30() {
   return (neuron0x21a62e0()*-0.34304);
}

double NNfunction_sb_cLsR::synapse0x21acf70() {
   return (neuron0x21a6620()*0.402619);
}

double NNfunction_sb_cLsR::synapse0x21acfb0() {
   return (neuron0x21a6960()*0.135752);
}

double NNfunction_sb_cLsR::synapse0x21acff0() {
   return (neuron0x21a6ca0()*0.346044);
}

double NNfunction_sb_cLsR::synapse0x21ad030() {
   return (neuron0x21a6fe0()*-0.200002);
}

double NNfunction_sb_cLsR::synapse0x21acac0() {
   return (neuron0x21a7320()*-0.0779371);
}

double NNfunction_sb_cLsR::synapse0x21acb00() {
   return (neuron0x21a7880()*-0.411099);
}

double NNfunction_sb_cLsR::synapse0x21ad180() {
   return (neuron0x21a7aa0()*0.195154);
}

double NNfunction_sb_cLsR::synapse0x21ad1c0() {
   return (neuron0x21a7de0()*0.034673);
}

double NNfunction_sb_cLsR::synapse0x21ad200() {
   return (neuron0x21a8120()*-0.41857);
}

double NNfunction_sb_cLsR::synapse0x21ad240() {
   return (neuron0x21a8460()*0.0705127);
}

double NNfunction_sb_cLsR::synapse0x21ad280() {
   return (neuron0x21a87a0()*0.0909931);
}

double NNfunction_sb_cLsR::synapse0x21ad2c0() {
   return (neuron0x21a8ae0()*0.119716);
}

double NNfunction_sb_cLsR::synapse0x21ad640() {
   return (neuron0x21a3f20()*-0.123372);
}

double NNfunction_sb_cLsR::synapse0x21ad680() {
   return (neuron0x21a4260()*-0.795515);
}

double NNfunction_sb_cLsR::synapse0x21ad6c0() {
   return (neuron0x21a45a0()*-1.65025);
}

double NNfunction_sb_cLsR::synapse0x21ad700() {
   return (neuron0x21a48e0()*0.244487);
}

double NNfunction_sb_cLsR::synapse0x21ad740() {
   return (neuron0x21a4c20()*-0.201244);
}

double NNfunction_sb_cLsR::synapse0x21ad780() {
   return (neuron0x21a4f60()*0.0160629);
}

double NNfunction_sb_cLsR::synapse0x21ad7c0() {
   return (neuron0x21a52a0()*0.943849);
}

double NNfunction_sb_cLsR::synapse0x21ad800() {
   return (neuron0x21a55e0()*-0.612525);
}

double NNfunction_sb_cLsR::synapse0x21ad840() {
   return (neuron0x21a5920()*-0.420976);
}

double NNfunction_sb_cLsR::synapse0x21ad880() {
   return (neuron0x21a5c60()*-0.281293);
}

double NNfunction_sb_cLsR::synapse0x21ad8c0() {
   return (neuron0x21a5fa0()*0.236958);
}

double NNfunction_sb_cLsR::synapse0x21ad900() {
   return (neuron0x21a62e0()*-0.221366);
}

double NNfunction_sb_cLsR::synapse0x21ad940() {
   return (neuron0x21a6620()*-0.368053);
}

double NNfunction_sb_cLsR::synapse0x21ad980() {
   return (neuron0x21a6960()*-0.0560237);
}

double NNfunction_sb_cLsR::synapse0x21ad9c0() {
   return (neuron0x21a6ca0()*0.290309);
}

double NNfunction_sb_cLsR::synapse0x21ada00() {
   return (neuron0x21a6fe0()*-0.288227);
}

double NNfunction_sb_cLsR::synapse0x21ad490() {
   return (neuron0x21a7320()*-0.168722);
}

double NNfunction_sb_cLsR::synapse0x21ad4d0() {
   return (neuron0x21a7880()*-0.221177);
}

double NNfunction_sb_cLsR::synapse0x21adb50() {
   return (neuron0x21a7aa0()*-0.0518845);
}

double NNfunction_sb_cLsR::synapse0x21adb90() {
   return (neuron0x21a7de0()*-0.0878695);
}

double NNfunction_sb_cLsR::synapse0x21adbd0() {
   return (neuron0x21a8120()*-0.371878);
}

double NNfunction_sb_cLsR::synapse0x21adc10() {
   return (neuron0x21a8460()*0.0784352);
}

double NNfunction_sb_cLsR::synapse0x21adc50() {
   return (neuron0x21a87a0()*0.769962);
}

double NNfunction_sb_cLsR::synapse0x21adc90() {
   return (neuron0x21a8ae0()*-0.982815);
}

double NNfunction_sb_cLsR::synapse0x21a7770() {
   return (neuron0x21a3f20()*-0.0238832);
}

double NNfunction_sb_cLsR::synapse0x21a77b0() {
   return (neuron0x21a4260()*-0.000420053);
}

double NNfunction_sb_cLsR::synapse0x21a77f0() {
   return (neuron0x21a45a0()*-0.0324077);
}

double NNfunction_sb_cLsR::synapse0x21a7830() {
   return (neuron0x21a48e0()*4.52106);
}

double NNfunction_sb_cLsR::synapse0x21ae220() {
   return (neuron0x21a4c20()*-0.0399574);
}

double NNfunction_sb_cLsR::synapse0x21ae260() {
   return (neuron0x21a4f60()*-0.00244683);
}

double NNfunction_sb_cLsR::synapse0x21ae2a0() {
   return (neuron0x21a52a0()*0.0368673);
}

double NNfunction_sb_cLsR::synapse0x21ae2e0() {
   return (neuron0x21a55e0()*0.00254341);
}

double NNfunction_sb_cLsR::synapse0x21ae320() {
   return (neuron0x21a5920()*-0.0575317);
}

double NNfunction_sb_cLsR::synapse0x21ae360() {
   return (neuron0x21a5c60()*0.0418879);
}

double NNfunction_sb_cLsR::synapse0x21ae3a0() {
   return (neuron0x21a5fa0()*-0.00683734);
}

double NNfunction_sb_cLsR::synapse0x21ae3e0() {
   return (neuron0x21a62e0()*-0.0582157);
}

double NNfunction_sb_cLsR::synapse0x21ae420() {
   return (neuron0x21a6620()*0.158617);
}

double NNfunction_sb_cLsR::synapse0x21ae460() {
   return (neuron0x21a6960()*0.021967);
}

double NNfunction_sb_cLsR::synapse0x21ae4a0() {
   return (neuron0x21a6ca0()*0.0221648);
}

double NNfunction_sb_cLsR::synapse0x21ae4e0() {
   return (neuron0x21a6fe0()*-0.0088487);
}

double NNfunction_sb_cLsR::synapse0x21ade60() {
   return (neuron0x21a7320()*0.00698122);
}

double NNfunction_sb_cLsR::synapse0x21adea0() {
   return (neuron0x21a7880()*0.0118262);
}

double NNfunction_sb_cLsR::synapse0x21ae630() {
   return (neuron0x21a7aa0()*0.0983284);
}

double NNfunction_sb_cLsR::synapse0x21ae670() {
   return (neuron0x21a7de0()*-0.018099);
}

double NNfunction_sb_cLsR::synapse0x21ae6b0() {
   return (neuron0x21a8120()*-0.0048966);
}

double NNfunction_sb_cLsR::synapse0x21ae6f0() {
   return (neuron0x21a8460()*0.00407793);
}

double NNfunction_sb_cLsR::synapse0x21ae730() {
   return (neuron0x21a87a0()*0.0146827);
}

double NNfunction_sb_cLsR::synapse0x21ae770() {
   return (neuron0x21a8ae0()*0.000125201);
}

double NNfunction_sb_cLsR::synapse0x21aeaf0() {
   return (neuron0x21a3f20()*0.143246);
}

double NNfunction_sb_cLsR::synapse0x21aeb30() {
   return (neuron0x21a4260()*-0.101503);
}

double NNfunction_sb_cLsR::synapse0x21aeb70() {
   return (neuron0x21a45a0()*-0.161592);
}

double NNfunction_sb_cLsR::synapse0x21aebb0() {
   return (neuron0x21a48e0()*0.464784);
}

double NNfunction_sb_cLsR::synapse0x21aebf0() {
   return (neuron0x21a4c20()*-0.200528);
}

double NNfunction_sb_cLsR::synapse0x21aec30() {
   return (neuron0x21a4f60()*-0.902531);
}

double NNfunction_sb_cLsR::synapse0x21aec70() {
   return (neuron0x21a52a0()*0.303262);
}

double NNfunction_sb_cLsR::synapse0x21aecb0() {
   return (neuron0x21a55e0()*0.145675);
}

double NNfunction_sb_cLsR::synapse0x21aecf0() {
   return (neuron0x21a5920()*-0.704486);
}

double NNfunction_sb_cLsR::synapse0x21aed30() {
   return (neuron0x21a5c60()*-0.357322);
}

double NNfunction_sb_cLsR::synapse0x21aed70() {
   return (neuron0x21a5fa0()*0.173594);
}

double NNfunction_sb_cLsR::synapse0x21aedb0() {
   return (neuron0x21a62e0()*0.0896435);
}

double NNfunction_sb_cLsR::synapse0x21aedf0() {
   return (neuron0x21a6620()*-0.358399);
}

double NNfunction_sb_cLsR::synapse0x21aee30() {
   return (neuron0x21a6960()*0.0728347);
}

double NNfunction_sb_cLsR::synapse0x21aee70() {
   return (neuron0x21a6ca0()*0.527748);
}

double NNfunction_sb_cLsR::synapse0x21aeeb0() {
   return (neuron0x21a6fe0()*0.156135);
}

double NNfunction_sb_cLsR::synapse0x21ae940() {
   return (neuron0x21a7320()*0.331237);
}

double NNfunction_sb_cLsR::synapse0x21ae980() {
   return (neuron0x21a7880()*-0.309463);
}

double NNfunction_sb_cLsR::synapse0x21af000() {
   return (neuron0x21a7aa0()*-0.530402);
}

double NNfunction_sb_cLsR::synapse0x21af040() {
   return (neuron0x21a7de0()*0.0289818);
}

double NNfunction_sb_cLsR::synapse0x21af080() {
   return (neuron0x21a8120()*0.0911667);
}

double NNfunction_sb_cLsR::synapse0x21af0c0() {
   return (neuron0x21a8460()*0.27171);
}

double NNfunction_sb_cLsR::synapse0x21af100() {
   return (neuron0x21a87a0()*0.22546);
}

double NNfunction_sb_cLsR::synapse0x21af140() {
   return (neuron0x21a8ae0()*0.169311);
}

double NNfunction_sb_cLsR::synapse0x21af4c0() {
   return (neuron0x21a3f20()*0.00186005);
}

double NNfunction_sb_cLsR::synapse0x21af500() {
   return (neuron0x21a4260()*-0.00358326);
}

double NNfunction_sb_cLsR::synapse0x21af540() {
   return (neuron0x21a45a0()*0.0141182);
}

double NNfunction_sb_cLsR::synapse0x21af580() {
   return (neuron0x21a48e0()*-2.29285);
}

double NNfunction_sb_cLsR::synapse0x21af5c0() {
   return (neuron0x21a4c20()*0.0130045);
}

double NNfunction_sb_cLsR::synapse0x21af600() {
   return (neuron0x21a4f60()*0.00598959);
}

double NNfunction_sb_cLsR::synapse0x21af640() {
   return (neuron0x21a52a0()*-0.0151568);
}

double NNfunction_sb_cLsR::synapse0x21af680() {
   return (neuron0x21a55e0()*-0.0012856);
}

double NNfunction_sb_cLsR::synapse0x21af6c0() {
   return (neuron0x21a5920()*0.0109935);
}

double NNfunction_sb_cLsR::synapse0x21af700() {
   return (neuron0x21a5c60()*-0.0145027);
}

double NNfunction_sb_cLsR::synapse0x21af740() {
   return (neuron0x21a5fa0()*-0.00226399);
}

double NNfunction_sb_cLsR::synapse0x21af780() {
   return (neuron0x21a62e0()*0.031768);
}

double NNfunction_sb_cLsR::synapse0x21af7c0() {
   return (neuron0x21a6620()*-0.208621);
}

double NNfunction_sb_cLsR::synapse0x21af800() {
   return (neuron0x21a6960()*-0.0147246);
}

double NNfunction_sb_cLsR::synapse0x21af840() {
   return (neuron0x21a6ca0()*0.00909498);
}

double NNfunction_sb_cLsR::synapse0x21af880() {
   return (neuron0x21a6fe0()*0.0169618);
}

double NNfunction_sb_cLsR::synapse0x21af310() {
   return (neuron0x21a7320()*-0.0117882);
}

double NNfunction_sb_cLsR::synapse0x21af350() {
   return (neuron0x21a7880()*0.00366382);
}

double NNfunction_sb_cLsR::synapse0x21ac0e0() {
   return (neuron0x21a7aa0()*-0.177297);
}

double NNfunction_sb_cLsR::synapse0x21ac120() {
   return (neuron0x21a7de0()*0.0106167);
}

double NNfunction_sb_cLsR::synapse0x21ac160() {
   return (neuron0x21a8120()*0.000239941);
}

double NNfunction_sb_cLsR::synapse0x21ac1a0() {
   return (neuron0x21a8460()*-0.00202819);
}

double NNfunction_sb_cLsR::synapse0x21ac1e0() {
   return (neuron0x21a87a0()*-0.0105652);
}

double NNfunction_sb_cLsR::synapse0x21ac220() {
   return (neuron0x21a8ae0()*0.0030621);
}

double NNfunction_sb_cLsR::synapse0x21ac5a0() {
   return (neuron0x21a3f20()*0.0894131);
}

double NNfunction_sb_cLsR::synapse0x21ac5e0() {
   return (neuron0x21a4260()*-0.0950299);
}

double NNfunction_sb_cLsR::synapse0x21ac620() {
   return (neuron0x21a45a0()*0.164419);
}

double NNfunction_sb_cLsR::synapse0x21ac660() {
   return (neuron0x21a48e0()*0.0614003);
}

double NNfunction_sb_cLsR::synapse0x21ac6a0() {
   return (neuron0x21a4c20()*0.337888);
}

double NNfunction_sb_cLsR::synapse0x21ac6e0() {
   return (neuron0x21a4f60()*0.0465256);
}

double NNfunction_sb_cLsR::synapse0x21ac720() {
   return (neuron0x21a52a0()*-0.0281408);
}

double NNfunction_sb_cLsR::synapse0x21ac760() {
   return (neuron0x21a55e0()*0.646486);
}

double NNfunction_sb_cLsR::synapse0x21ac7a0() {
   return (neuron0x21a5920()*0.364577);
}

double NNfunction_sb_cLsR::synapse0x21ac7e0() {
   return (neuron0x21a5c60()*-0.133657);
}

double NNfunction_sb_cLsR::synapse0x21ac820() {
   return (neuron0x21a5fa0()*0.0899053);
}

double NNfunction_sb_cLsR::synapse0x21ac860() {
   return (neuron0x21a62e0()*-0.674245);
}

double NNfunction_sb_cLsR::synapse0x21ac8a0() {
   return (neuron0x21a6620()*0.206985);
}

double NNfunction_sb_cLsR::synapse0x21b09e0() {
   return (neuron0x21a6960()*-0.159244);
}

double NNfunction_sb_cLsR::synapse0x21b0a20() {
   return (neuron0x21a6ca0()*-0.64324);
}

double NNfunction_sb_cLsR::synapse0x21b0a60() {
   return (neuron0x21a6fe0()*-0.32125);
}

double NNfunction_sb_cLsR::synapse0x21ac3f0() {
   return (neuron0x21a7320()*0.391607);
}

double NNfunction_sb_cLsR::synapse0x21ac430() {
   return (neuron0x21a7880()*-0.755892);
}

double NNfunction_sb_cLsR::synapse0x21b0bb0() {
   return (neuron0x21a7aa0()*0.805883);
}

double NNfunction_sb_cLsR::synapse0x21b0bf0() {
   return (neuron0x21a7de0()*0.0466827);
}

double NNfunction_sb_cLsR::synapse0x21b0c30() {
   return (neuron0x21a8120()*-0.283741);
}

double NNfunction_sb_cLsR::synapse0x21b0c70() {
   return (neuron0x21a8460()*-0.0947357);
}

double NNfunction_sb_cLsR::synapse0x21b0cb0() {
   return (neuron0x21a87a0()*-0.423583);
}

double NNfunction_sb_cLsR::synapse0x21b0cf0() {
   return (neuron0x21a8ae0()*-0.284267);
}

double NNfunction_sb_cLsR::synapse0x21b1070() {
   return (neuron0x21a3f20()*0.366155);
}

double NNfunction_sb_cLsR::synapse0x21b10b0() {
   return (neuron0x21a4260()*0.0308922);
}

double NNfunction_sb_cLsR::synapse0x21b10f0() {
   return (neuron0x21a45a0()*0.072346);
}

double NNfunction_sb_cLsR::synapse0x21b1130() {
   return (neuron0x21a48e0()*1.53403);
}

double NNfunction_sb_cLsR::synapse0x21b1170() {
   return (neuron0x21a4c20()*-0.219466);
}

double NNfunction_sb_cLsR::synapse0x21b11b0() {
   return (neuron0x21a4f60()*-0.285639);
}

double NNfunction_sb_cLsR::synapse0x21b11f0() {
   return (neuron0x21a52a0()*-0.187094);
}

double NNfunction_sb_cLsR::synapse0x21b1230() {
   return (neuron0x21a55e0()*-0.172576);
}

double NNfunction_sb_cLsR::synapse0x21b1270() {
   return (neuron0x21a5920()*-0.0238548);
}

double NNfunction_sb_cLsR::synapse0x21b12b0() {
   return (neuron0x21a5c60()*0.185618);
}

double NNfunction_sb_cLsR::synapse0x21b12f0() {
   return (neuron0x21a5fa0()*0.044954);
}

double NNfunction_sb_cLsR::synapse0x21b1330() {
   return (neuron0x21a62e0()*-0.0906797);
}

double NNfunction_sb_cLsR::synapse0x21b1370() {
   return (neuron0x21a6620()*0.100311);
}

double NNfunction_sb_cLsR::synapse0x21b13b0() {
   return (neuron0x21a6960()*-0.137522);
}

double NNfunction_sb_cLsR::synapse0x21b13f0() {
   return (neuron0x21a6ca0()*0.103751);
}

double NNfunction_sb_cLsR::synapse0x21b1430() {
   return (neuron0x21a6fe0()*-0.00932322);
}

double NNfunction_sb_cLsR::synapse0x21b0ec0() {
   return (neuron0x21a7320()*0.0317306);
}

double NNfunction_sb_cLsR::synapse0x21b0f00() {
   return (neuron0x21a7880()*-0.0532505);
}

double NNfunction_sb_cLsR::synapse0x21b1580() {
   return (neuron0x21a7aa0()*0.187867);
}

double NNfunction_sb_cLsR::synapse0x21b15c0() {
   return (neuron0x21a7de0()*0.165724);
}

double NNfunction_sb_cLsR::synapse0x21b1600() {
   return (neuron0x21a8120()*0.363279);
}

double NNfunction_sb_cLsR::synapse0x21b1640() {
   return (neuron0x21a8460()*0.435999);
}

double NNfunction_sb_cLsR::synapse0x21b1680() {
   return (neuron0x21a87a0()*0.128546);
}

double NNfunction_sb_cLsR::synapse0x21b16c0() {
   return (neuron0x21a8ae0()*-0.365975);
}

double NNfunction_sb_cLsR::synapse0x21b1a40() {
   return (neuron0x21a3f20()*0.0147694);
}

double NNfunction_sb_cLsR::synapse0x21b1a80() {
   return (neuron0x21a4260()*0.00667213);
}

double NNfunction_sb_cLsR::synapse0x21b1ac0() {
   return (neuron0x21a45a0()*-0.0609915);
}

double NNfunction_sb_cLsR::synapse0x21b1b00() {
   return (neuron0x21a48e0()*-0.0515445);
}

double NNfunction_sb_cLsR::synapse0x21b1b40() {
   return (neuron0x21a4c20()*-0.0198364);
}

double NNfunction_sb_cLsR::synapse0x21b1b80() {
   return (neuron0x21a4f60()*-0.0122325);
}

double NNfunction_sb_cLsR::synapse0x21b1bc0() {
   return (neuron0x21a52a0()*0.0204404);
}

double NNfunction_sb_cLsR::synapse0x21b1c00() {
   return (neuron0x21a55e0()*0.00839201);
}

double NNfunction_sb_cLsR::synapse0x21b1c40() {
   return (neuron0x21a5920()*0.0125871);
}

double NNfunction_sb_cLsR::synapse0x21b1c80() {
   return (neuron0x21a5c60()*-0.0231844);
}

double NNfunction_sb_cLsR::synapse0x21b1cc0() {
   return (neuron0x21a5fa0()*-0.0587221);
}

double NNfunction_sb_cLsR::synapse0x21b1d00() {
   return (neuron0x21a62e0()*0.00784652);
}

double NNfunction_sb_cLsR::synapse0x21b1d40() {
   return (neuron0x21a6620()*1.75823);
}

double NNfunction_sb_cLsR::synapse0x21b1d80() {
   return (neuron0x21a6960()*0.0143577);
}

double NNfunction_sb_cLsR::synapse0x21b1dc0() {
   return (neuron0x21a6ca0()*-0.00654102);
}

double NNfunction_sb_cLsR::synapse0x21b1e00() {
   return (neuron0x21a6fe0()*0.0125611);
}

double NNfunction_sb_cLsR::synapse0x21b1890() {
   return (neuron0x21a7320()*-0.0237488);
}

double NNfunction_sb_cLsR::synapse0x21b18d0() {
   return (neuron0x21a7880()*0.00305961);
}

double NNfunction_sb_cLsR::synapse0x21b1f50() {
   return (neuron0x21a7aa0()*-0.0710047);
}

double NNfunction_sb_cLsR::synapse0x21b1f90() {
   return (neuron0x21a7de0()*0.015442);
}

double NNfunction_sb_cLsR::synapse0x21b1fd0() {
   return (neuron0x21a8120()*-0.0309593);
}

double NNfunction_sb_cLsR::synapse0x21b2010() {
   return (neuron0x21a8460()*0.0159281);
}

double NNfunction_sb_cLsR::synapse0x21b2050() {
   return (neuron0x21a87a0()*0.00986702);
}

double NNfunction_sb_cLsR::synapse0x21b2090() {
   return (neuron0x21a8ae0()*-0.00584356);
}

double NNfunction_sb_cLsR::synapse0x21b2410() {
   return (neuron0x21a3f20()*-0.211735);
}

double NNfunction_sb_cLsR::synapse0x21b2450() {
   return (neuron0x21a4260()*0.51642);
}

double NNfunction_sb_cLsR::synapse0x21b2490() {
   return (neuron0x21a45a0()*0.326497);
}

double NNfunction_sb_cLsR::synapse0x21b24d0() {
   return (neuron0x21a48e0()*-0.445924);
}

double NNfunction_sb_cLsR::synapse0x21b2510() {
   return (neuron0x21a4c20()*-0.0767256);
}

double NNfunction_sb_cLsR::synapse0x21b2550() {
   return (neuron0x21a4f60()*0.0626138);
}

double NNfunction_sb_cLsR::synapse0x21b2590() {
   return (neuron0x21a52a0()*-0.135075);
}

double NNfunction_sb_cLsR::synapse0x21b25d0() {
   return (neuron0x21a55e0()*0.197956);
}

double NNfunction_sb_cLsR::synapse0x21b2610() {
   return (neuron0x21a5920()*-0.415073);
}

double NNfunction_sb_cLsR::synapse0x21b2650() {
   return (neuron0x21a5c60()*-0.173);
}

double NNfunction_sb_cLsR::synapse0x21b2690() {
   return (neuron0x21a5fa0()*-0.150807);
}

double NNfunction_sb_cLsR::synapse0x21b26d0() {
   return (neuron0x21a62e0()*-0.425761);
}

double NNfunction_sb_cLsR::synapse0x21b2710() {
   return (neuron0x21a6620()*-0.0628943);
}

double NNfunction_sb_cLsR::synapse0x21b2750() {
   return (neuron0x21a6960()*0.356692);
}

double NNfunction_sb_cLsR::synapse0x21b2790() {
   return (neuron0x21a6ca0()*-0.16806);
}

double NNfunction_sb_cLsR::synapse0x21b27d0() {
   return (neuron0x21a6fe0()*-0.0752048);
}

double NNfunction_sb_cLsR::synapse0x21b2260() {
   return (neuron0x21a7320()*-0.0504007);
}

double NNfunction_sb_cLsR::synapse0x21b22a0() {
   return (neuron0x21a7880()*0.336564);
}

double NNfunction_sb_cLsR::synapse0x21b2920() {
   return (neuron0x21a7aa0()*-0.115469);
}

double NNfunction_sb_cLsR::synapse0x21b2960() {
   return (neuron0x21a7de0()*0.311603);
}

double NNfunction_sb_cLsR::synapse0x21b29a0() {
   return (neuron0x21a8120()*0.0839526);
}

double NNfunction_sb_cLsR::synapse0x21b29e0() {
   return (neuron0x21a8460()*-0.151106);
}

double NNfunction_sb_cLsR::synapse0x21b2a20() {
   return (neuron0x21a87a0()*-0.197674);
}

double NNfunction_sb_cLsR::synapse0x21b2a60() {
   return (neuron0x21a8ae0()*-0.0677461);
}

double NNfunction_sb_cLsR::synapse0x21b2de0() {
   return (neuron0x21a3f20()*-0.220269);
}

double NNfunction_sb_cLsR::synapse0x21a4140() {
   return (neuron0x21a4260()*-0.0590561);
}

double NNfunction_sb_cLsR::synapse0x21a4180() {
   return (neuron0x21a45a0()*-0.437051);
}

double NNfunction_sb_cLsR::synapse0x21a4480() {
   return (neuron0x21a48e0()*0.219862);
}

double NNfunction_sb_cLsR::synapse0x21a44c0() {
   return (neuron0x21a4c20()*-0.524662);
}

double NNfunction_sb_cLsR::synapse0x21a47c0() {
   return (neuron0x21a4f60()*-0.0790571);
}

double NNfunction_sb_cLsR::synapse0x21a4800() {
   return (neuron0x21a52a0()*-0.13466);
}

double NNfunction_sb_cLsR::synapse0x21a4b00() {
   return (neuron0x21a55e0()*0.557247);
}

double NNfunction_sb_cLsR::synapse0x21a4b40() {
   return (neuron0x21a5920()*-1.22307);
}

double NNfunction_sb_cLsR::synapse0x21a4e40() {
   return (neuron0x21a5c60()*-0.767139);
}

double NNfunction_sb_cLsR::synapse0x21a4e80() {
   return (neuron0x21a5fa0()*0.673248);
}

double NNfunction_sb_cLsR::synapse0x21a5180() {
   return (neuron0x21a62e0()*-0.646951);
}

double NNfunction_sb_cLsR::synapse0x21a51c0() {
   return (neuron0x21a6620()*-0.51465);
}

double NNfunction_sb_cLsR::synapse0x21a54c0() {
   return (neuron0x21a6960()*-0.269192);
}

double NNfunction_sb_cLsR::synapse0x21a5500() {
   return (neuron0x21a6ca0()*0.983484);
}

double NNfunction_sb_cLsR::synapse0x21a5800() {
   return (neuron0x21a6fe0()*-0.179654);
}

double NNfunction_sb_cLsR::synapse0x21a5840() {
   return (neuron0x21a7320()*0.038827);
}

double NNfunction_sb_cLsR::synapse0x21a5b40() {
   return (neuron0x21a7880()*-0.293065);
}

double NNfunction_sb_cLsR::synapse0x21a5b80() {
   return (neuron0x21a7aa0()*-0.390844);
}

double NNfunction_sb_cLsR::synapse0x21a5e80() {
   return (neuron0x21a7de0()*-0.416619);
}

double NNfunction_sb_cLsR::synapse0x21a5ec0() {
   return (neuron0x21a8120()*-1.09515);
}

double NNfunction_sb_cLsR::synapse0x21a61c0() {
   return (neuron0x21a8460()*0.733581);
}

double NNfunction_sb_cLsR::synapse0x21a6200() {
   return (neuron0x21a87a0()*0.18257);
}

double NNfunction_sb_cLsR::synapse0x21a6500() {
   return (neuron0x21a8ae0()*-0.364474);
}

double NNfunction_sb_cLsR::synapse0x21a6540() {
   return (neuron0x21a3f20()*0.247731);
}

double NNfunction_sb_cLsR::synapse0x21a7200() {
   return (neuron0x21a4260()*0.279848);
}

double NNfunction_sb_cLsR::synapse0x21a7240() {
   return (neuron0x21a45a0()*-0.0713011);
}

double NNfunction_sb_cLsR::synapse0x21b2c30() {
   return (neuron0x21a48e0()*0.64308);
}

double NNfunction_sb_cLsR::synapse0x21b2c70() {
   return (neuron0x21a4c20()*-0.524399);
}

double NNfunction_sb_cLsR::synapse0x21a7540() {
   return (neuron0x21a4f60()*-0.216816);
}

double NNfunction_sb_cLsR::synapse0x21a7580() {
   return (neuron0x21a52a0()*-0.243044);
}

double NNfunction_sb_cLsR::synapse0x1f5f020() {
   return (neuron0x21a55e0()*-0.306302);
}

double NNfunction_sb_cLsR::synapse0x1f5f060() {
   return (neuron0x21a5920()*-0.0380368);
}

double NNfunction_sb_cLsR::synapse0x21a7cc0() {
   return (neuron0x21a5c60()*0.210266);
}

double NNfunction_sb_cLsR::synapse0x21a7d00() {
   return (neuron0x21a5fa0()*-0.0645218);
}

double NNfunction_sb_cLsR::synapse0x21a8000() {
   return (neuron0x21a62e0()*-0.163684);
}

double NNfunction_sb_cLsR::synapse0x21a8040() {
   return (neuron0x21a6620()*0.0764065);
}

double NNfunction_sb_cLsR::synapse0x21a8340() {
   return (neuron0x21a6960()*0.183707);
}

double NNfunction_sb_cLsR::synapse0x21a8380() {
   return (neuron0x21a6ca0()*0.430347);
}

double NNfunction_sb_cLsR::synapse0x21a8680() {
   return (neuron0x21a6fe0()*-0.440181);
}

double NNfunction_sb_cLsR::synapse0x21a86c0() {
   return (neuron0x21a7320()*0.108266);
}

double NNfunction_sb_cLsR::synapse0x21a89c0() {
   return (neuron0x21a7880()*-0.117516);
}

double NNfunction_sb_cLsR::synapse0x21a8a00() {
   return (neuron0x21a7aa0()*0.368626);
}

double NNfunction_sb_cLsR::synapse0x21a8d00() {
   return (neuron0x21a7de0()*0.11161);
}

double NNfunction_sb_cLsR::synapse0x21a8d40() {
   return (neuron0x21a8120()*-0.129594);
}

double NNfunction_sb_cLsR::synapse0x21a6840() {
   return (neuron0x21a8460()*0.194507);
}

double NNfunction_sb_cLsR::synapse0x21a6880() {
   return (neuron0x21a87a0()*0.174861);
}

double NNfunction_sb_cLsR::synapse0x21b4b50() {
   return (neuron0x21a8ae0()*-0.0936359);
}

double NNfunction_sb_cLsR::synapse0x21b4ed0() {
   return (neuron0x21a3f20()*-0.0769773);
}

double NNfunction_sb_cLsR::synapse0x21b4f10() {
   return (neuron0x21a4260()*0.0765968);
}

double NNfunction_sb_cLsR::synapse0x21b4f50() {
   return (neuron0x21a45a0()*0.285286);
}

double NNfunction_sb_cLsR::synapse0x21b4f90() {
   return (neuron0x21a48e0()*2.01558);
}

double NNfunction_sb_cLsR::synapse0x21b4fd0() {
   return (neuron0x21a4c20()*-0.0390701);
}

double NNfunction_sb_cLsR::synapse0x21b5010() {
   return (neuron0x21a4f60()*0.269191);
}

double NNfunction_sb_cLsR::synapse0x21b5050() {
   return (neuron0x21a52a0()*0.152528);
}

double NNfunction_sb_cLsR::synapse0x21b5090() {
   return (neuron0x21a55e0()*0.216557);
}

double NNfunction_sb_cLsR::synapse0x21b50d0() {
   return (neuron0x21a5920()*0.0461251);
}

double NNfunction_sb_cLsR::synapse0x21b5110() {
   return (neuron0x21a5c60()*-0.256707);
}

double NNfunction_sb_cLsR::synapse0x21b5150() {
   return (neuron0x21a5fa0()*0.0588618);
}

double NNfunction_sb_cLsR::synapse0x21b5190() {
   return (neuron0x21a62e0()*-0.279135);
}

double NNfunction_sb_cLsR::synapse0x21b51d0() {
   return (neuron0x21a6620()*0.342205);
}

double NNfunction_sb_cLsR::synapse0x21b5210() {
   return (neuron0x21a6960()*0.222008);
}

double NNfunction_sb_cLsR::synapse0x21b5250() {
   return (neuron0x21a6ca0()*-0.0471734);
}

double NNfunction_sb_cLsR::synapse0x21b5290() {
   return (neuron0x21a6fe0()*0.169642);
}

double NNfunction_sb_cLsR::synapse0x21b4d20() {
   return (neuron0x21a7320()*-0.126073);
}

double NNfunction_sb_cLsR::synapse0x21b4d60() {
   return (neuron0x21a7880()*0.0970385);
}

double NNfunction_sb_cLsR::synapse0x21b53e0() {
   return (neuron0x21a7aa0()*-0.0839892);
}

double NNfunction_sb_cLsR::synapse0x21b5420() {
   return (neuron0x21a7de0()*-0.110691);
}

double NNfunction_sb_cLsR::synapse0x21b5460() {
   return (neuron0x21a8120()*-0.128488);
}

double NNfunction_sb_cLsR::synapse0x21b54a0() {
   return (neuron0x21a8460()*-0.167856);
}

double NNfunction_sb_cLsR::synapse0x21b54e0() {
   return (neuron0x21a87a0()*-0.0410922);
}

double NNfunction_sb_cLsR::synapse0x21b5520() {
   return (neuron0x21a8ae0()*0.290125);
}

double NNfunction_sb_cLsR::synapse0x21b58a0() {
   return (neuron0x21a3f20()*-0.00791216);
}

double NNfunction_sb_cLsR::synapse0x21b58e0() {
   return (neuron0x21a4260()*0.00325813);
}

double NNfunction_sb_cLsR::synapse0x21b5920() {
   return (neuron0x21a45a0()*-0.210801);
}

double NNfunction_sb_cLsR::synapse0x21b5960() {
   return (neuron0x21a48e0()*-0.389687);
}

double NNfunction_sb_cLsR::synapse0x21b59a0() {
   return (neuron0x21a4c20()*0.0164765);
}

double NNfunction_sb_cLsR::synapse0x21b59e0() {
   return (neuron0x21a4f60()*0.0169493);
}

double NNfunction_sb_cLsR::synapse0x21b5a20() {
   return (neuron0x21a52a0()*-0.040759);
}

double NNfunction_sb_cLsR::synapse0x21b5a60() {
   return (neuron0x21a55e0()*-0.00668428);
}

double NNfunction_sb_cLsR::synapse0x21b5aa0() {
   return (neuron0x21a5920()*0.0141278);
}

double NNfunction_sb_cLsR::synapse0x21b5ae0() {
   return (neuron0x21a5c60()*0.0372245);
}

double NNfunction_sb_cLsR::synapse0x21b5b20() {
   return (neuron0x21a5fa0()*0.0295215);
}

double NNfunction_sb_cLsR::synapse0x21b5b60() {
   return (neuron0x21a62e0()*-0.0418671);
}

double NNfunction_sb_cLsR::synapse0x21b5ba0() {
   return (neuron0x21a6620()*0.0868738);
}

double NNfunction_sb_cLsR::synapse0x21b5be0() {
   return (neuron0x21a6960()*-0.00521999);
}

double NNfunction_sb_cLsR::synapse0x21b5c20() {
   return (neuron0x21a6ca0()*-0.02217);
}

double NNfunction_sb_cLsR::synapse0x21b5c60() {
   return (neuron0x21a6fe0()*-0.0443191);
}

double NNfunction_sb_cLsR::synapse0x21b56f0() {
   return (neuron0x21a7320()*0.0552518);
}

double NNfunction_sb_cLsR::synapse0x21b5730() {
   return (neuron0x21a7880()*-0.0112647);
}

double NNfunction_sb_cLsR::synapse0x21b5db0() {
   return (neuron0x21a7aa0()*-0.0240256);
}

double NNfunction_sb_cLsR::synapse0x21b5df0() {
   return (neuron0x21a7de0()*0.00287613);
}

double NNfunction_sb_cLsR::synapse0x21b5e30() {
   return (neuron0x21a8120()*0.00569678);
}

double NNfunction_sb_cLsR::synapse0x21b5e70() {
   return (neuron0x21a8460()*-0.0223471);
}

double NNfunction_sb_cLsR::synapse0x21b5eb0() {
   return (neuron0x21a87a0()*0.00833704);
}

double NNfunction_sb_cLsR::synapse0x21b5ef0() {
   return (neuron0x21a8ae0()*0.0264211);
}

double NNfunction_sb_cLsR::synapse0x21b6270() {
   return (neuron0x21a3f20()*0.12752);
}

double NNfunction_sb_cLsR::synapse0x21b62b0() {
   return (neuron0x21a4260()*-0.207257);
}

double NNfunction_sb_cLsR::synapse0x21b62f0() {
   return (neuron0x21a45a0()*0.68118);
}

double NNfunction_sb_cLsR::synapse0x21b6330() {
   return (neuron0x21a48e0()*0.835146);
}

double NNfunction_sb_cLsR::synapse0x21b6370() {
   return (neuron0x21a4c20()*0.0944051);
}

double NNfunction_sb_cLsR::synapse0x21b63b0() {
   return (neuron0x21a4f60()*0.461862);
}

double NNfunction_sb_cLsR::synapse0x21b63f0() {
   return (neuron0x21a52a0()*-0.151069);
}

double NNfunction_sb_cLsR::synapse0x21b6430() {
   return (neuron0x21a55e0()*-0.332627);
}

double NNfunction_sb_cLsR::synapse0x21b6470() {
   return (neuron0x21a5920()*0.363729);
}

double NNfunction_sb_cLsR::synapse0x21b64b0() {
   return (neuron0x21a5c60()*0.991507);
}

double NNfunction_sb_cLsR::synapse0x21b64f0() {
   return (neuron0x21a5fa0()*0.0781003);
}

double NNfunction_sb_cLsR::synapse0x21b6530() {
   return (neuron0x21a62e0()*0.673032);
}

double NNfunction_sb_cLsR::synapse0x21b6570() {
   return (neuron0x21a6620()*0.288495);
}

double NNfunction_sb_cLsR::synapse0x21b65b0() {
   return (neuron0x21a6960()*-0.00397228);
}

double NNfunction_sb_cLsR::synapse0x21b65f0() {
   return (neuron0x21a6ca0()*-0.184593);
}

double NNfunction_sb_cLsR::synapse0x21b6630() {
   return (neuron0x21a6fe0()*-0.156384);
}

double NNfunction_sb_cLsR::synapse0x21b60c0() {
   return (neuron0x21a7320()*0.111032);
}

double NNfunction_sb_cLsR::synapse0x21b6100() {
   return (neuron0x21a7880()*0.0997303);
}

double NNfunction_sb_cLsR::synapse0x21b6780() {
   return (neuron0x21a7aa0()*0.824233);
}

double NNfunction_sb_cLsR::synapse0x21b67c0() {
   return (neuron0x21a7de0()*0.734895);
}

double NNfunction_sb_cLsR::synapse0x21b6800() {
   return (neuron0x21a8120()*-0.358886);
}

double NNfunction_sb_cLsR::synapse0x21b6840() {
   return (neuron0x21a8460()*-1.00578);
}

double NNfunction_sb_cLsR::synapse0x21b6880() {
   return (neuron0x21a87a0()*-0.227227);
}

double NNfunction_sb_cLsR::synapse0x21b68c0() {
   return (neuron0x21a8ae0()*0.397092);
}

double NNfunction_sb_cLsR::synapse0x21b6c40() {
   return (neuron0x21a3f20()*-0.258312);
}

double NNfunction_sb_cLsR::synapse0x21b6c80() {
   return (neuron0x21a4260()*-0.714105);
}

double NNfunction_sb_cLsR::synapse0x21b6cc0() {
   return (neuron0x21a45a0()*0.1459);
}

double NNfunction_sb_cLsR::synapse0x21b6d00() {
   return (neuron0x21a48e0()*0.283763);
}

double NNfunction_sb_cLsR::synapse0x21b6d40() {
   return (neuron0x21a4c20()*0.471254);
}

double NNfunction_sb_cLsR::synapse0x21b6d80() {
   return (neuron0x21a4f60()*-0.573593);
}

double NNfunction_sb_cLsR::synapse0x21b6dc0() {
   return (neuron0x21a52a0()*0.0850226);
}

double NNfunction_sb_cLsR::synapse0x21b6e00() {
   return (neuron0x21a55e0()*-0.325195);
}

double NNfunction_sb_cLsR::synapse0x21b6e40() {
   return (neuron0x21a5920()*0.127973);
}

double NNfunction_sb_cLsR::synapse0x21b6e80() {
   return (neuron0x21a5c60()*-0.474253);
}

double NNfunction_sb_cLsR::synapse0x21b6ec0() {
   return (neuron0x21a5fa0()*0.400246);
}

double NNfunction_sb_cLsR::synapse0x21b6f00() {
   return (neuron0x21a62e0()*0.592248);
}

double NNfunction_sb_cLsR::synapse0x21b6f40() {
   return (neuron0x21a6620()*-1.17141);
}

double NNfunction_sb_cLsR::synapse0x21b6f80() {
   return (neuron0x21a6960()*0.525861);
}

double NNfunction_sb_cLsR::synapse0x21b6fc0() {
   return (neuron0x21a6ca0()*-0.737756);
}

double NNfunction_sb_cLsR::synapse0x21b7000() {
   return (neuron0x21a6fe0()*0.727901);
}

double NNfunction_sb_cLsR::synapse0x21b6a90() {
   return (neuron0x21a7320()*-0.107113);
}

double NNfunction_sb_cLsR::synapse0x21b6ad0() {
   return (neuron0x21a7880()*0.135535);
}

double NNfunction_sb_cLsR::synapse0x21b7150() {
   return (neuron0x21a7aa0()*-0.136283);
}

double NNfunction_sb_cLsR::synapse0x21b7190() {
   return (neuron0x21a7de0()*0.00626165);
}

double NNfunction_sb_cLsR::synapse0x21b71d0() {
   return (neuron0x21a8120()*0.867824);
}

double NNfunction_sb_cLsR::synapse0x21b7210() {
   return (neuron0x21a8460()*0.633062);
}

double NNfunction_sb_cLsR::synapse0x21b7250() {
   return (neuron0x21a87a0()*-0.0589645);
}

double NNfunction_sb_cLsR::synapse0x21b7290() {
   return (neuron0x21a8ae0()*-1.09206);
}

double NNfunction_sb_cLsR::synapse0x21b7610() {
   return (neuron0x21a3f20()*-0.0832009);
}

double NNfunction_sb_cLsR::synapse0x21b7650() {
   return (neuron0x21a4260()*-0.101902);
}

double NNfunction_sb_cLsR::synapse0x21b7690() {
   return (neuron0x21a45a0()*-0.231829);
}

double NNfunction_sb_cLsR::synapse0x21b76d0() {
   return (neuron0x21a48e0()*-0.408618);
}

double NNfunction_sb_cLsR::synapse0x21b7710() {
   return (neuron0x21a4c20()*-0.385936);
}

double NNfunction_sb_cLsR::synapse0x21b7750() {
   return (neuron0x21a4f60()*-0.540783);
}

double NNfunction_sb_cLsR::synapse0x21b7790() {
   return (neuron0x21a52a0()*0.489607);
}

double NNfunction_sb_cLsR::synapse0x21b77d0() {
   return (neuron0x21a55e0()*-0.208008);
}

double NNfunction_sb_cLsR::synapse0x21b7810() {
   return (neuron0x21a5920()*-0.563441);
}

double NNfunction_sb_cLsR::synapse0x21af9d0() {
   return (neuron0x21a5c60()*0.0782473);
}

double NNfunction_sb_cLsR::synapse0x21afa10() {
   return (neuron0x21a5fa0()*0.229198);
}

double NNfunction_sb_cLsR::synapse0x21afa50() {
   return (neuron0x21a62e0()*0.38246);
}

double NNfunction_sb_cLsR::synapse0x21afa90() {
   return (neuron0x21a6620()*0.526024);
}

double NNfunction_sb_cLsR::synapse0x21afad0() {
   return (neuron0x21a6960()*-0.0378611);
}

double NNfunction_sb_cLsR::synapse0x21afb10() {
   return (neuron0x21a6ca0()*0.917298);
}

double NNfunction_sb_cLsR::synapse0x21afb50() {
   return (neuron0x21a6fe0()*-0.0852689);
}

double NNfunction_sb_cLsR::synapse0x21b7460() {
   return (neuron0x21a7320()*-0.780965);
}

double NNfunction_sb_cLsR::synapse0x21b74a0() {
   return (neuron0x21a7880()*0.459435);
}

double NNfunction_sb_cLsR::synapse0x21afca0() {
   return (neuron0x21a7aa0()*-0.165971);
}

double NNfunction_sb_cLsR::synapse0x21afce0() {
   return (neuron0x21a7de0()*0.0399083);
}

double NNfunction_sb_cLsR::synapse0x21afd20() {
   return (neuron0x21a8120()*0.125505);
}

double NNfunction_sb_cLsR::synapse0x21afd60() {
   return (neuron0x21a8460()*-0.481301);
}

double NNfunction_sb_cLsR::synapse0x21afda0() {
   return (neuron0x21a87a0()*0.486586);
}

double NNfunction_sb_cLsR::synapse0x21afde0() {
   return (neuron0x21a8ae0()*0.266029);
}

double NNfunction_sb_cLsR::synapse0x21b0160() {
   return (neuron0x21a3f20()*0.0254538);
}

double NNfunction_sb_cLsR::synapse0x21b01a0() {
   return (neuron0x21a4260()*0.0239573);
}

double NNfunction_sb_cLsR::synapse0x21b01e0() {
   return (neuron0x21a45a0()*-0.424871);
}

double NNfunction_sb_cLsR::synapse0x21b0220() {
   return (neuron0x21a48e0()*0.191523);
}

double NNfunction_sb_cLsR::synapse0x21b0260() {
   return (neuron0x21a4c20()*-0.217788);
}

double NNfunction_sb_cLsR::synapse0x21b02a0() {
   return (neuron0x21a4f60()*0.666178);
}

double NNfunction_sb_cLsR::synapse0x21b02e0() {
   return (neuron0x21a52a0()*-0.658505);
}

double NNfunction_sb_cLsR::synapse0x21b0320() {
   return (neuron0x21a55e0()*-0.454161);
}

double NNfunction_sb_cLsR::synapse0x21b0360() {
   return (neuron0x21a5920()*-0.283682);
}

double NNfunction_sb_cLsR::synapse0x21b03a0() {
   return (neuron0x21a5c60()*-0.154232);
}

double NNfunction_sb_cLsR::synapse0x21b03e0() {
   return (neuron0x21a5fa0()*0.195305);
}

double NNfunction_sb_cLsR::synapse0x21b0420() {
   return (neuron0x21a62e0()*0.0211643);
}

double NNfunction_sb_cLsR::synapse0x21b0460() {
   return (neuron0x21a6620()*-0.0539334);
}

double NNfunction_sb_cLsR::synapse0x21b04a0() {
   return (neuron0x21a6960()*0.322624);
}

double NNfunction_sb_cLsR::synapse0x21b04e0() {
   return (neuron0x21a6ca0()*-0.361403);
}

double NNfunction_sb_cLsR::synapse0x21b0520() {
   return (neuron0x21a6fe0()*0.169058);
}

double NNfunction_sb_cLsR::synapse0x21affb0() {
   return (neuron0x21a7320()*-0.55067);
}

double NNfunction_sb_cLsR::synapse0x21afff0() {
   return (neuron0x21a7880()*0.0255006);
}

double NNfunction_sb_cLsR::synapse0x21b0670() {
   return (neuron0x21a7aa0()*0.192765);
}

double NNfunction_sb_cLsR::synapse0x21b06b0() {
   return (neuron0x21a7de0()*-0.229339);
}

double NNfunction_sb_cLsR::synapse0x21b06f0() {
   return (neuron0x21a8120()*0.173306);
}

double NNfunction_sb_cLsR::synapse0x21b0730() {
   return (neuron0x21a8460()*0.476096);
}

double NNfunction_sb_cLsR::synapse0x21b0770() {
   return (neuron0x21a87a0()*-0.20194);
}

double NNfunction_sb_cLsR::synapse0x21b07b0() {
   return (neuron0x21a8ae0()*0.194799);
}

double NNfunction_sb_cLsR::synapse0x21b0980() {
   return (neuron0x21a3f20()*0.17278);
}

double NNfunction_sb_cLsR::synapse0x21b9a10() {
   return (neuron0x21a4260()*-0.951529);
}

double NNfunction_sb_cLsR::synapse0x21b9a50() {
   return (neuron0x21a45a0()*0.0163514);
}

double NNfunction_sb_cLsR::synapse0x21b9a90() {
   return (neuron0x21a48e0()*0.0449528);
}

double NNfunction_sb_cLsR::synapse0x21b9ad0() {
   return (neuron0x21a4c20()*-0.400892);
}

double NNfunction_sb_cLsR::synapse0x21b9b10() {
   return (neuron0x21a4f60()*-0.123755);
}

double NNfunction_sb_cLsR::synapse0x21b9b50() {
   return (neuron0x21a52a0()*0.0361303);
}

double NNfunction_sb_cLsR::synapse0x21b9b90() {
   return (neuron0x21a55e0()*-0.08277);
}

double NNfunction_sb_cLsR::synapse0x21b9bd0() {
   return (neuron0x21a5920()*0.230769);
}

double NNfunction_sb_cLsR::synapse0x21b9c10() {
   return (neuron0x21a5c60()*0.212257);
}

double NNfunction_sb_cLsR::synapse0x21b9c50() {
   return (neuron0x21a5fa0()*0.178049);
}

double NNfunction_sb_cLsR::synapse0x21b9c90() {
   return (neuron0x21a62e0()*-0.494045);
}

double NNfunction_sb_cLsR::synapse0x21b9cd0() {
   return (neuron0x21a6620()*-0.708474);
}

double NNfunction_sb_cLsR::synapse0x21b9d10() {
   return (neuron0x21a6960()*0.0452226);
}

double NNfunction_sb_cLsR::synapse0x21b9d50() {
   return (neuron0x21a6ca0()*-1.1562);
}

double NNfunction_sb_cLsR::synapse0x21b9d90() {
   return (neuron0x21a6fe0()*-0.355414);
}

double NNfunction_sb_cLsR::synapse0x21b9860() {
   return (neuron0x21a7320()*0.135531);
}

double NNfunction_sb_cLsR::synapse0x21b98a0() {
   return (neuron0x21a7880()*-0.516774);
}

double NNfunction_sb_cLsR::synapse0x21b9ee0() {
   return (neuron0x21a7aa0()*0.139241);
}

double NNfunction_sb_cLsR::synapse0x21b9f20() {
   return (neuron0x21a7de0()*0.0416341);
}

double NNfunction_sb_cLsR::synapse0x21b9f60() {
   return (neuron0x21a8120()*0.0450982);
}

double NNfunction_sb_cLsR::synapse0x21b9fa0() {
   return (neuron0x21a8460()*0.092637);
}

double NNfunction_sb_cLsR::synapse0x21b9fe0() {
   return (neuron0x21a87a0()*0.447544);
}

double NNfunction_sb_cLsR::synapse0x21ba020() {
   return (neuron0x21a8ae0()*0.0408202);
}

double NNfunction_sb_cLsR::synapse0x21ba3a0() {
   return (neuron0x21a3f20()*0.00696102);
}

double NNfunction_sb_cLsR::synapse0x21ba3e0() {
   return (neuron0x21a4260()*0.00139035);
}

double NNfunction_sb_cLsR::synapse0x21ba420() {
   return (neuron0x21a45a0()*-0.0498389);
}

double NNfunction_sb_cLsR::synapse0x21ba460() {
   return (neuron0x21a48e0()*-1.49465);
}

double NNfunction_sb_cLsR::synapse0x21ba4a0() {
   return (neuron0x21a4c20()*-0.0178563);
}

double NNfunction_sb_cLsR::synapse0x21ba4e0() {
   return (neuron0x21a4f60()*0.000372941);
}

double NNfunction_sb_cLsR::synapse0x21ba520() {
   return (neuron0x21a52a0()*0.0114322);
}

double NNfunction_sb_cLsR::synapse0x21ba560() {
   return (neuron0x21a55e0()*0.0124072);
}

double NNfunction_sb_cLsR::synapse0x21ba5a0() {
   return (neuron0x21a5920()*0.0307197);
}

double NNfunction_sb_cLsR::synapse0x21ba5e0() {
   return (neuron0x21a5c60()*0.0157202);
}

double NNfunction_sb_cLsR::synapse0x21ba620() {
   return (neuron0x21a5fa0()*0.0130851);
}

double NNfunction_sb_cLsR::synapse0x21ba660() {
   return (neuron0x21a62e0()*-0.0169999);
}

double NNfunction_sb_cLsR::synapse0x21ba6a0() {
   return (neuron0x21a6620()*0.148923);
}

double NNfunction_sb_cLsR::synapse0x21ba6e0() {
   return (neuron0x21a6960()*0.0179088);
}

double NNfunction_sb_cLsR::synapse0x21ba720() {
   return (neuron0x21a6ca0()*-0.00994656);
}

double NNfunction_sb_cLsR::synapse0x21ba760() {
   return (neuron0x21a6fe0()*-0.0292605);
}

double NNfunction_sb_cLsR::synapse0x21ba1f0() {
   return (neuron0x21a7320()*0.03267);
}

double NNfunction_sb_cLsR::synapse0x21ba230() {
   return (neuron0x21a7880()*0.0103285);
}

double NNfunction_sb_cLsR::synapse0x21ba8b0() {
   return (neuron0x21a7aa0()*0.133221);
}

double NNfunction_sb_cLsR::synapse0x21ba8f0() {
   return (neuron0x21a7de0()*0.00395062);
}

double NNfunction_sb_cLsR::synapse0x21ba930() {
   return (neuron0x21a8120()*-0.00351375);
}

double NNfunction_sb_cLsR::synapse0x21ba970() {
   return (neuron0x21a8460()*0.0122744);
}

double NNfunction_sb_cLsR::synapse0x21ba9b0() {
   return (neuron0x21a87a0()*0.015272);
}

double NNfunction_sb_cLsR::synapse0x21ba9f0() {
   return (neuron0x21a8ae0()*0.00449756);
}

double NNfunction_sb_cLsR::synapse0x21bad70() {
   return (neuron0x21a3f20()*-0.360899);
}

double NNfunction_sb_cLsR::synapse0x21badb0() {
   return (neuron0x21a4260()*-0.130338);
}

double NNfunction_sb_cLsR::synapse0x21badf0() {
   return (neuron0x21a45a0()*-0.942348);
}

double NNfunction_sb_cLsR::synapse0x21bae30() {
   return (neuron0x21a48e0()*-0.156333);
}

double NNfunction_sb_cLsR::synapse0x21bae70() {
   return (neuron0x21a4c20()*1.09327);
}

double NNfunction_sb_cLsR::synapse0x21baeb0() {
   return (neuron0x21a4f60()*-0.534203);
}

double NNfunction_sb_cLsR::synapse0x21baef0() {
   return (neuron0x21a52a0()*-0.0980946);
}

double NNfunction_sb_cLsR::synapse0x21baf30() {
   return (neuron0x21a55e0()*0.260233);
}

double NNfunction_sb_cLsR::synapse0x21baf70() {
   return (neuron0x21a5920()*-0.420302);
}

double NNfunction_sb_cLsR::synapse0x21bafb0() {
   return (neuron0x21a5c60()*0.538501);
}

double NNfunction_sb_cLsR::synapse0x21baff0() {
   return (neuron0x21a5fa0()*-0.416149);
}

double NNfunction_sb_cLsR::synapse0x21bb030() {
   return (neuron0x21a62e0()*0.0333755);
}

double NNfunction_sb_cLsR::synapse0x21bb070() {
   return (neuron0x21a6620()*-0.415119);
}

double NNfunction_sb_cLsR::synapse0x21bb0b0() {
   return (neuron0x21a6960()*0.164315);
}

double NNfunction_sb_cLsR::synapse0x21bb0f0() {
   return (neuron0x21a6ca0()*-0.00455415);
}

double NNfunction_sb_cLsR::synapse0x21bb130() {
   return (neuron0x21a6fe0()*0.750029);
}

double NNfunction_sb_cLsR::synapse0x21babc0() {
   return (neuron0x21a7320()*-0.389783);
}

double NNfunction_sb_cLsR::synapse0x21bac00() {
   return (neuron0x21a7880()*0.449097);
}

double NNfunction_sb_cLsR::synapse0x21bb280() {
   return (neuron0x21a7aa0()*-0.618328);
}

double NNfunction_sb_cLsR::synapse0x21bb2c0() {
   return (neuron0x21a7de0()*0.418631);
}

double NNfunction_sb_cLsR::synapse0x21bb300() {
   return (neuron0x21a8120()*0.407154);
}

double NNfunction_sb_cLsR::synapse0x21bb340() {
   return (neuron0x21a8460()*-1.0561);
}

double NNfunction_sb_cLsR::synapse0x21bb380() {
   return (neuron0x21a87a0()*0.769938);
}

double NNfunction_sb_cLsR::synapse0x21bb3c0() {
   return (neuron0x21a8ae0()*-0.298903);
}

double NNfunction_sb_cLsR::synapse0x21bb740() {
   return (neuron0x21a3f20()*0.00382646);
}

double NNfunction_sb_cLsR::synapse0x21bb780() {
   return (neuron0x21a4260()*0.00568955);
}

double NNfunction_sb_cLsR::synapse0x21bb7c0() {
   return (neuron0x21a45a0()*0.0551584);
}

double NNfunction_sb_cLsR::synapse0x21bb800() {
   return (neuron0x21a48e0()*-0.0261108);
}

double NNfunction_sb_cLsR::synapse0x21bb840() {
   return (neuron0x21a4c20()*-0.0262141);
}

double NNfunction_sb_cLsR::synapse0x21bb880() {
   return (neuron0x21a4f60()*-0.0249873);
}

double NNfunction_sb_cLsR::synapse0x21bb8c0() {
   return (neuron0x21a52a0()*0.0194143);
}

double NNfunction_sb_cLsR::synapse0x21bb900() {
   return (neuron0x21a55e0()*-0.00800233);
}

double NNfunction_sb_cLsR::synapse0x21bb940() {
   return (neuron0x21a5920()*-0.0649524);
}

double NNfunction_sb_cLsR::synapse0x21bb980() {
   return (neuron0x21a5c60()*-0.0459645);
}

double NNfunction_sb_cLsR::synapse0x21bb9c0() {
   return (neuron0x21a5fa0()*-0.0742051);
}

double NNfunction_sb_cLsR::synapse0x21bba00() {
   return (neuron0x21a62e0()*-0.0398796);
}

double NNfunction_sb_cLsR::synapse0x21bba40() {
   return (neuron0x21a6620()*-0.00466409);
}

double NNfunction_sb_cLsR::synapse0x21bba80() {
   return (neuron0x21a6960()*0.0395294);
}

double NNfunction_sb_cLsR::synapse0x21bbac0() {
   return (neuron0x21a6ca0()*-9.73674e-05);
}

double NNfunction_sb_cLsR::synapse0x21bbb00() {
   return (neuron0x21a6fe0()*0.00227258);
}

double NNfunction_sb_cLsR::synapse0x21bb590() {
   return (neuron0x21a7320()*-0.0387552);
}

double NNfunction_sb_cLsR::synapse0x21bb5d0() {
   return (neuron0x21a7880()*-0.00943411);
}

double NNfunction_sb_cLsR::synapse0x21bbc50() {
   return (neuron0x21a7aa0()*2.20911);
}

double NNfunction_sb_cLsR::synapse0x21bbc90() {
   return (neuron0x21a7de0()*-0.0118934);
}

double NNfunction_sb_cLsR::synapse0x21bbcd0() {
   return (neuron0x21a8120()*-0.0527205);
}

double NNfunction_sb_cLsR::synapse0x21bbd10() {
   return (neuron0x21a8460()*0.00425358);
}

double NNfunction_sb_cLsR::synapse0x21bbd50() {
   return (neuron0x21a87a0()*0.0363737);
}

double NNfunction_sb_cLsR::synapse0x21bbd90() {
   return (neuron0x21a8ae0()*0.050318);
}

double NNfunction_sb_cLsR::synapse0x21bc110() {
   return (neuron0x21a3f20()*0.307769);
}

double NNfunction_sb_cLsR::synapse0x21bc150() {
   return (neuron0x21a4260()*-0.298777);
}

double NNfunction_sb_cLsR::synapse0x21bc190() {
   return (neuron0x21a45a0()*0.525648);
}

double NNfunction_sb_cLsR::synapse0x21bc1d0() {
   return (neuron0x21a48e0()*0.0910818);
}

double NNfunction_sb_cLsR::synapse0x21bc210() {
   return (neuron0x21a4c20()*-0.242063);
}

double NNfunction_sb_cLsR::synapse0x21bc250() {
   return (neuron0x21a4f60()*0.327285);
}

double NNfunction_sb_cLsR::synapse0x21bc290() {
   return (neuron0x21a52a0()*0.747928);
}

double NNfunction_sb_cLsR::synapse0x21bc2d0() {
   return (neuron0x21a55e0()*0.192341);
}

double NNfunction_sb_cLsR::synapse0x21bc310() {
   return (neuron0x21a5920()*-0.216855);
}

double NNfunction_sb_cLsR::synapse0x21bc350() {
   return (neuron0x21a5c60()*-0.382078);
}

double NNfunction_sb_cLsR::synapse0x21bc390() {
   return (neuron0x21a5fa0()*-0.805153);
}

double NNfunction_sb_cLsR::synapse0x21bc3d0() {
   return (neuron0x21a62e0()*-0.435051);
}

double NNfunction_sb_cLsR::synapse0x21bc410() {
   return (neuron0x21a6620()*-1.25754);
}

double NNfunction_sb_cLsR::synapse0x21bc450() {
   return (neuron0x21a6960()*0.138664);
}

double NNfunction_sb_cLsR::synapse0x21bc490() {
   return (neuron0x21a6ca0()*0.245314);
}

double NNfunction_sb_cLsR::synapse0x21bc4d0() {
   return (neuron0x21a6fe0()*-0.164468);
}

double NNfunction_sb_cLsR::synapse0x21bbf60() {
   return (neuron0x21a7320()*0.0530769);
}

double NNfunction_sb_cLsR::synapse0x21bbfa0() {
   return (neuron0x21a7880()*-0.157721);
}

double NNfunction_sb_cLsR::synapse0x21bc620() {
   return (neuron0x21a7aa0()*0.426623);
}

double NNfunction_sb_cLsR::synapse0x21bc660() {
   return (neuron0x21a7de0()*0.121018);
}

double NNfunction_sb_cLsR::synapse0x21bc6a0() {
   return (neuron0x21a8120()*0.265669);
}

double NNfunction_sb_cLsR::synapse0x21bc6e0() {
   return (neuron0x21a8460()*0.409916);
}

double NNfunction_sb_cLsR::synapse0x21bc720() {
   return (neuron0x21a87a0()*0.70021);
}

double NNfunction_sb_cLsR::synapse0x21bc760() {
   return (neuron0x21a8ae0()*0.570364);
}

double NNfunction_sb_cLsR::synapse0x21bcae0() {
   return (neuron0x21a3f20()*0.0016228);
}

double NNfunction_sb_cLsR::synapse0x21bcb20() {
   return (neuron0x21a4260()*0.00029697);
}

double NNfunction_sb_cLsR::synapse0x21bcb60() {
   return (neuron0x21a45a0()*0.0148088);
}

double NNfunction_sb_cLsR::synapse0x21bcba0() {
   return (neuron0x21a48e0()*-5.15969);
}

double NNfunction_sb_cLsR::synapse0x21bcbe0() {
   return (neuron0x21a4c20()*0.00499139);
}

double NNfunction_sb_cLsR::synapse0x21bcc20() {
   return (neuron0x21a4f60()*-0.0369652);
}

double NNfunction_sb_cLsR::synapse0x21bcc60() {
   return (neuron0x21a52a0()*0.00441747);
}

double NNfunction_sb_cLsR::synapse0x21bcca0() {
   return (neuron0x21a55e0()*0.00442736);
}

double NNfunction_sb_cLsR::synapse0x21bcce0() {
   return (neuron0x21a5920()*-0.0386019);
}

double NNfunction_sb_cLsR::synapse0x21bcd20() {
   return (neuron0x21a5c60()*-0.0117677);
}

double NNfunction_sb_cLsR::synapse0x21bcd60() {
   return (neuron0x21a5fa0()*-0.0155234);
}

double NNfunction_sb_cLsR::synapse0x21bcda0() {
   return (neuron0x21a62e0()*-0.0249172);
}

double NNfunction_sb_cLsR::synapse0x21bcde0() {
   return (neuron0x21a6620()*0.315568);
}

double NNfunction_sb_cLsR::synapse0x21bce20() {
   return (neuron0x21a6960()*0.0174815);
}

double NNfunction_sb_cLsR::synapse0x21bce60() {
   return (neuron0x21a6ca0()*-0.0233832);
}

double NNfunction_sb_cLsR::synapse0x21bcea0() {
   return (neuron0x21a6fe0()*-0.0100594);
}

double NNfunction_sb_cLsR::synapse0x21bc930() {
   return (neuron0x21a7320()*0.0179236);
}

double NNfunction_sb_cLsR::synapse0x21bc970() {
   return (neuron0x21a7880()*-0.00477208);
}

double NNfunction_sb_cLsR::synapse0x21bcff0() {
   return (neuron0x21a7aa0()*0.347643);
}

double NNfunction_sb_cLsR::synapse0x21bd030() {
   return (neuron0x21a7de0()*-0.0335602);
}

double NNfunction_sb_cLsR::synapse0x21bd070() {
   return (neuron0x21a8120()*0.015781);
}

double NNfunction_sb_cLsR::synapse0x21bd0b0() {
   return (neuron0x21a8460()*0.020774);
}

double NNfunction_sb_cLsR::synapse0x21bd0f0() {
   return (neuron0x21a87a0()*0.029437);
}

double NNfunction_sb_cLsR::synapse0x21bd130() {
   return (neuron0x21a8ae0()*-0.0174126);
}

double NNfunction_sb_cLsR::synapse0x21bd4b0() {
   return (neuron0x21a3f20()*0.109687);
}

double NNfunction_sb_cLsR::synapse0x21bd4f0() {
   return (neuron0x21a4260()*-0.462812);
}

double NNfunction_sb_cLsR::synapse0x21bd530() {
   return (neuron0x21a45a0()*-0.278828);
}

double NNfunction_sb_cLsR::synapse0x21bd570() {
   return (neuron0x21a48e0()*0.657123);
}

double NNfunction_sb_cLsR::synapse0x21bd5b0() {
   return (neuron0x21a4c20()*-1.38567);
}

double NNfunction_sb_cLsR::synapse0x21bd5f0() {
   return (neuron0x21a4f60()*0.343468);
}

double NNfunction_sb_cLsR::synapse0x21bd630() {
   return (neuron0x21a52a0()*0.257641);
}

double NNfunction_sb_cLsR::synapse0x21bd670() {
   return (neuron0x21a55e0()*0.289778);
}

double NNfunction_sb_cLsR::synapse0x21bd6b0() {
   return (neuron0x21a5920()*0.258967);
}

double NNfunction_sb_cLsR::synapse0x21bd6f0() {
   return (neuron0x21a5c60()*-0.0389984);
}

double NNfunction_sb_cLsR::synapse0x21bd730() {
   return (neuron0x21a5fa0()*-0.181586);
}

double NNfunction_sb_cLsR::synapse0x21bd770() {
   return (neuron0x21a62e0()*0.701792);
}

double NNfunction_sb_cLsR::synapse0x21bd7b0() {
   return (neuron0x21a6620()*-0.0883349);
}

double NNfunction_sb_cLsR::synapse0x21bd7f0() {
   return (neuron0x21a6960()*-0.327282);
}

double NNfunction_sb_cLsR::synapse0x21bd830() {
   return (neuron0x21a6ca0()*0.288835);
}

double NNfunction_sb_cLsR::synapse0x21bd870() {
   return (neuron0x21a6fe0()*-0.812394);
}

double NNfunction_sb_cLsR::synapse0x21bd300() {
   return (neuron0x21a7320()*0.41775);
}

double NNfunction_sb_cLsR::synapse0x21bd340() {
   return (neuron0x21a7880()*0.664121);
}

double NNfunction_sb_cLsR::synapse0x21bd9c0() {
   return (neuron0x21a7aa0()*-0.201711);
}

double NNfunction_sb_cLsR::synapse0x21bda00() {
   return (neuron0x21a7de0()*-0.28158);
}

double NNfunction_sb_cLsR::synapse0x21bda40() {
   return (neuron0x21a8120()*-0.570438);
}

double NNfunction_sb_cLsR::synapse0x21bda80() {
   return (neuron0x21a8460()*0.179187);
}

double NNfunction_sb_cLsR::synapse0x21bdac0() {
   return (neuron0x21a87a0()*-0.710181);
}

double NNfunction_sb_cLsR::synapse0x21bdb00() {
   return (neuron0x21a8ae0()*0.29341);
}

double NNfunction_sb_cLsR::synapse0x21bde80() {
   return (neuron0x21a3f20()*-0.741571);
}

double NNfunction_sb_cLsR::synapse0x21bdec0() {
   return (neuron0x21a4260()*-0.423876);
}

double NNfunction_sb_cLsR::synapse0x21bdf00() {
   return (neuron0x21a45a0()*-0.511407);
}

double NNfunction_sb_cLsR::synapse0x21bdf40() {
   return (neuron0x21a48e0()*1.02683);
}

double NNfunction_sb_cLsR::synapse0x21bdf80() {
   return (neuron0x21a4c20()*0.0423473);
}

double NNfunction_sb_cLsR::synapse0x21bdfc0() {
   return (neuron0x21a4f60()*0.0294852);
}

double NNfunction_sb_cLsR::synapse0x21be000() {
   return (neuron0x21a52a0()*0.108992);
}

double NNfunction_sb_cLsR::synapse0x21be040() {
   return (neuron0x21a55e0()*0.379743);
}

double NNfunction_sb_cLsR::synapse0x21be080() {
   return (neuron0x21a5920()*0.140115);
}

double NNfunction_sb_cLsR::synapse0x21be0c0() {
   return (neuron0x21a5c60()*0.0416104);
}

double NNfunction_sb_cLsR::synapse0x21be100() {
   return (neuron0x21a5fa0()*0.51005);
}

double NNfunction_sb_cLsR::synapse0x21be140() {
   return (neuron0x21a62e0()*0.0816602);
}

double NNfunction_sb_cLsR::synapse0x21be180() {
   return (neuron0x21a6620()*-0.49467);
}

double NNfunction_sb_cLsR::synapse0x21be1c0() {
   return (neuron0x21a6960()*0.0165417);
}

double NNfunction_sb_cLsR::synapse0x21be200() {
   return (neuron0x21a6ca0()*-0.0761002);
}

double NNfunction_sb_cLsR::synapse0x21be240() {
   return (neuron0x21a6fe0()*-0.0977218);
}

double NNfunction_sb_cLsR::synapse0x21bdcd0() {
   return (neuron0x21a7320()*0.73663);
}

double NNfunction_sb_cLsR::synapse0x21bdd10() {
   return (neuron0x21a7880()*0.129426);
}

double NNfunction_sb_cLsR::synapse0x21be390() {
   return (neuron0x21a7aa0()*0.609171);
}

double NNfunction_sb_cLsR::synapse0x21be3d0() {
   return (neuron0x21a7de0()*0.748039);
}

double NNfunction_sb_cLsR::synapse0x21be410() {
   return (neuron0x21a8120()*0.55474);
}

double NNfunction_sb_cLsR::synapse0x21be450() {
   return (neuron0x21a8460()*0.124516);
}

double NNfunction_sb_cLsR::synapse0x21be490() {
   return (neuron0x21a87a0()*0.547468);
}

double NNfunction_sb_cLsR::synapse0x21be4d0() {
   return (neuron0x21a8ae0()*-0.131806);
}

double NNfunction_sb_cLsR::synapse0x21be850() {
   return (neuron0x21a3f20()*0.163742);
}

double NNfunction_sb_cLsR::synapse0x21b2e20() {
   return (neuron0x21a4260()*0.734555);
}

double NNfunction_sb_cLsR::synapse0x21b2e60() {
   return (neuron0x21a45a0()*-0.333604);
}

double NNfunction_sb_cLsR::synapse0x21b2ea0() {
   return (neuron0x21a48e0()*-0.814781);
}

double NNfunction_sb_cLsR::synapse0x21b30f0() {
   return (neuron0x21a4c20()*-0.00751968);
}

double NNfunction_sb_cLsR::synapse0x21b3130() {
   return (neuron0x21a4f60()*-0.690658);
}

double NNfunction_sb_cLsR::synapse0x21b3170() {
   return (neuron0x21a52a0()*0.123429);
}

double NNfunction_sb_cLsR::synapse0x21b33c0() {
   return (neuron0x21a55e0()*-0.679368);
}

double NNfunction_sb_cLsR::synapse0x21b3400() {
   return (neuron0x21a5920()*-0.300798);
}

double NNfunction_sb_cLsR::synapse0x21b3650() {
   return (neuron0x21a5c60()*-0.326214);
}

double NNfunction_sb_cLsR::synapse0x21b3690() {
   return (neuron0x21a5fa0()*0.0209258);
}

double NNfunction_sb_cLsR::synapse0x21b36d0() {
   return (neuron0x21a62e0()*0.14087);
}

double NNfunction_sb_cLsR::synapse0x21b3920() {
   return (neuron0x21a6620()*0.0124253);
}

double NNfunction_sb_cLsR::synapse0x21b3960() {
   return (neuron0x21a6960()*0.449863);
}

double NNfunction_sb_cLsR::synapse0x21b3bb0() {
   return (neuron0x21a6ca0()*-0.362652);
}

double NNfunction_sb_cLsR::synapse0x21b3bf0() {
   return (neuron0x21a6fe0()*-0.157265);
}

double NNfunction_sb_cLsR::synapse0x21be6a0() {
   return (neuron0x21a7320()*0.694963);
}

double NNfunction_sb_cLsR::synapse0x21be6e0() {
   return (neuron0x21a7880()*0.178704);
}

double NNfunction_sb_cLsR::synapse0x21b3d40() {
   return (neuron0x21a7aa0()*0.0536489);
}

double NNfunction_sb_cLsR::synapse0x21b4250() {
   return (neuron0x21a7de0()*-0.116966);
}

double NNfunction_sb_cLsR::synapse0x21b4290() {
   return (neuron0x21a8120()*0.854533);
}

double NNfunction_sb_cLsR::synapse0x21b42d0() {
   return (neuron0x21a8460()*-0.955904);
}

double NNfunction_sb_cLsR::synapse0x21b4520() {
   return (neuron0x21a87a0()*0.239704);
}

double NNfunction_sb_cLsR::synapse0x21b4560() {
   return (neuron0x21a8ae0()*-0.652752);
}

double NNfunction_sb_cLsR::synapse0x21b3e10() {
   return (neuron0x21a3f20()*-0.355482);
}

double NNfunction_sb_cLsR::synapse0x21b3e50() {
   return (neuron0x21a4260()*-0.518131);
}

double NNfunction_sb_cLsR::synapse0x21b3e90() {
   return (neuron0x21a45a0()*-0.0996633);
}

double NNfunction_sb_cLsR::synapse0x21b3ed0() {
   return (neuron0x21a48e0()*0.479078);
}

double NNfunction_sb_cLsR::synapse0x21b4850() {
   return (neuron0x21a4c20()*-0.860122);
}

double NNfunction_sb_cLsR::synapse0x21c0ba0() {
   return (neuron0x21a4f60()*0.233659);
}

double NNfunction_sb_cLsR::synapse0x21c0be0() {
   return (neuron0x21a52a0()*0.969829);
}

double NNfunction_sb_cLsR::synapse0x21c0c20() {
   return (neuron0x21a55e0()*-0.0455912);
}

double NNfunction_sb_cLsR::synapse0x21c0c60() {
   return (neuron0x21a5920()*-1.03705);
}

double NNfunction_sb_cLsR::synapse0x21c0ca0() {
   return (neuron0x21a5c60()*-0.406725);
}

double NNfunction_sb_cLsR::synapse0x21c0ce0() {
   return (neuron0x21a5fa0()*-0.897282);
}

double NNfunction_sb_cLsR::synapse0x21c0d20() {
   return (neuron0x21a62e0()*-0.856332);
}

double NNfunction_sb_cLsR::synapse0x21c0d60() {
   return (neuron0x21a6620()*0.190459);
}

double NNfunction_sb_cLsR::synapse0x21c0da0() {
   return (neuron0x21a6960()*0.0178299);
}

double NNfunction_sb_cLsR::synapse0x21c0de0() {
   return (neuron0x21a6ca0()*0.165195);
}

double NNfunction_sb_cLsR::synapse0x21c0e20() {
   return (neuron0x21a6fe0()*-0.28111);
}

double NNfunction_sb_cLsR::synapse0x21b4730() {
   return (neuron0x21a7320()*0.715493);
}

double NNfunction_sb_cLsR::synapse0x21b4770() {
   return (neuron0x21a7880()*0.0256221);
}

double NNfunction_sb_cLsR::synapse0x21c0f70() {
   return (neuron0x21a7aa0()*-0.12418);
}

double NNfunction_sb_cLsR::synapse0x21c0fb0() {
   return (neuron0x21a7de0()*-1.14346);
}

double NNfunction_sb_cLsR::synapse0x21c0ff0() {
   return (neuron0x21a8120()*0.780596);
}

double NNfunction_sb_cLsR::synapse0x21c1030() {
   return (neuron0x21a8460()*1.24071);
}

double NNfunction_sb_cLsR::synapse0x21c1070() {
   return (neuron0x21a87a0()*0.0920387);
}

double NNfunction_sb_cLsR::synapse0x21c10b0() {
   return (neuron0x21a8ae0()*-0.819272);
}

double NNfunction_sb_cLsR::synapse0x21c1430() {
   return (neuron0x21a3f20()*-0.0219129);
}

double NNfunction_sb_cLsR::synapse0x21c1470() {
   return (neuron0x21a4260()*-0.0615363);
}

double NNfunction_sb_cLsR::synapse0x21c14b0() {
   return (neuron0x21a45a0()*0.0423026);
}

double NNfunction_sb_cLsR::synapse0x21c14f0() {
   return (neuron0x21a48e0()*-0.385832);
}

double NNfunction_sb_cLsR::synapse0x21c1530() {
   return (neuron0x21a4c20()*-0.177573);
}

double NNfunction_sb_cLsR::synapse0x21c1570() {
   return (neuron0x21a4f60()*0.0112882);
}

double NNfunction_sb_cLsR::synapse0x21c15b0() {
   return (neuron0x21a52a0()*-0.0519131);
}

double NNfunction_sb_cLsR::synapse0x21c15f0() {
   return (neuron0x21a55e0()*-0.0193799);
}

double NNfunction_sb_cLsR::synapse0x21c1630() {
   return (neuron0x21a5920()*0.263888);
}

double NNfunction_sb_cLsR::synapse0x21c1670() {
   return (neuron0x21a5c60()*0.111005);
}

double NNfunction_sb_cLsR::synapse0x21c16b0() {
   return (neuron0x21a5fa0()*0.198651);
}

double NNfunction_sb_cLsR::synapse0x21c16f0() {
   return (neuron0x21a62e0()*0.154609);
}

double NNfunction_sb_cLsR::synapse0x21c1730() {
   return (neuron0x21a6620()*-0.791222);
}

double NNfunction_sb_cLsR::synapse0x21c1770() {
   return (neuron0x21a6960()*-0.0997208);
}

double NNfunction_sb_cLsR::synapse0x21c17b0() {
   return (neuron0x21a6ca0()*0.0562975);
}

double NNfunction_sb_cLsR::synapse0x21c17f0() {
   return (neuron0x21a6fe0()*0.00847556);
}

double NNfunction_sb_cLsR::synapse0x21c1280() {
   return (neuron0x21a7320()*-0.0532589);
}

double NNfunction_sb_cLsR::synapse0x21c12c0() {
   return (neuron0x21a7880()*-0.118631);
}

double NNfunction_sb_cLsR::synapse0x21c1940() {
   return (neuron0x21a7aa0()*-0.883016);
}

double NNfunction_sb_cLsR::synapse0x21c1980() {
   return (neuron0x21a7de0()*-0.0809494);
}

double NNfunction_sb_cLsR::synapse0x21c19c0() {
   return (neuron0x21a8120()*-0.0824853);
}

double NNfunction_sb_cLsR::synapse0x21c1a00() {
   return (neuron0x21a8460()*0.00502334);
}

double NNfunction_sb_cLsR::synapse0x21c1a40() {
   return (neuron0x21a87a0()*-0.140479);
}

double NNfunction_sb_cLsR::synapse0x21c1a80() {
   return (neuron0x21a8ae0()*0.0316546);
}

double NNfunction_sb_cLsR::synapse0x21c1e00() {
   return (neuron0x21a3f20()*-0.0662886);
}

double NNfunction_sb_cLsR::synapse0x21c1e40() {
   return (neuron0x21a4260()*0.0575767);
}

double NNfunction_sb_cLsR::synapse0x21c1e80() {
   return (neuron0x21a45a0()*0.131069);
}

double NNfunction_sb_cLsR::synapse0x21c1ec0() {
   return (neuron0x21a48e0()*0.175751);
}

double NNfunction_sb_cLsR::synapse0x21c1f00() {
   return (neuron0x21a4c20()*0.0780828);
}

double NNfunction_sb_cLsR::synapse0x21c1f40() {
   return (neuron0x21a4f60()*-0.0280624);
}

double NNfunction_sb_cLsR::synapse0x21c1f80() {
   return (neuron0x21a52a0()*0.00833636);
}

double NNfunction_sb_cLsR::synapse0x21c1fc0() {
   return (neuron0x21a55e0()*0.0140423);
}

double NNfunction_sb_cLsR::synapse0x21c2000() {
   return (neuron0x21a5920()*-0.0452664);
}

double NNfunction_sb_cLsR::synapse0x21c2040() {
   return (neuron0x21a5c60()*-0.044046);
}

double NNfunction_sb_cLsR::synapse0x21c2080() {
   return (neuron0x21a5fa0()*-0.0765842);
}

double NNfunction_sb_cLsR::synapse0x21c20c0() {
   return (neuron0x21a62e0()*-0.540398);
}

double NNfunction_sb_cLsR::synapse0x21c2100() {
   return (neuron0x21a6620()*0.186435);
}

double NNfunction_sb_cLsR::synapse0x21c2140() {
   return (neuron0x21a6960()*0.131927);
}

double NNfunction_sb_cLsR::synapse0x21c2180() {
   return (neuron0x21a6ca0()*-0.291848);
}

double NNfunction_sb_cLsR::synapse0x21c21c0() {
   return (neuron0x21a6fe0()*-0.419566);
}

double NNfunction_sb_cLsR::synapse0x21c1c50() {
   return (neuron0x21a7320()*0.166832);
}

double NNfunction_sb_cLsR::synapse0x21c1c90() {
   return (neuron0x21a7880()*-0.232059);
}

double NNfunction_sb_cLsR::synapse0x21c2310() {
   return (neuron0x21a7aa0()*0.156255);
}

double NNfunction_sb_cLsR::synapse0x21c2350() {
   return (neuron0x21a7de0()*-0.0010671);
}

double NNfunction_sb_cLsR::synapse0x21c2390() {
   return (neuron0x21a8120()*-0.00450785);
}

double NNfunction_sb_cLsR::synapse0x21c23d0() {
   return (neuron0x21a8460()*-0.0124429);
}

double NNfunction_sb_cLsR::synapse0x21c2410() {
   return (neuron0x21a87a0()*0.0398597);
}

double NNfunction_sb_cLsR::synapse0x21c2450() {
   return (neuron0x21a8ae0()*-0.0418238);
}

double NNfunction_sb_cLsR::synapse0x21c27d0() {
   return (neuron0x21a3f20()*-0.014748);
}

double NNfunction_sb_cLsR::synapse0x21c2810() {
   return (neuron0x21a4260()*-0.000746914);
}

double NNfunction_sb_cLsR::synapse0x21c2850() {
   return (neuron0x21a45a0()*0.00227557);
}

double NNfunction_sb_cLsR::synapse0x21c2890() {
   return (neuron0x21a48e0()*-0.105776);
}

double NNfunction_sb_cLsR::synapse0x21c28d0() {
   return (neuron0x21a4c20()*-0.00743545);
}

double NNfunction_sb_cLsR::synapse0x21c2910() {
   return (neuron0x21a4f60()*-0.00675928);
}

double NNfunction_sb_cLsR::synapse0x21c2950() {
   return (neuron0x21a52a0()*0.00761159);
}

double NNfunction_sb_cLsR::synapse0x21c2990() {
   return (neuron0x21a55e0()*0.00100532);
}

double NNfunction_sb_cLsR::synapse0x21c29d0() {
   return (neuron0x21a5920()*-0.00966827);
}

double NNfunction_sb_cLsR::synapse0x21c2a10() {
   return (neuron0x21a5c60()*-0.00319574);
}

double NNfunction_sb_cLsR::synapse0x21c2a50() {
   return (neuron0x21a5fa0()*-0.0042612);
}

double NNfunction_sb_cLsR::synapse0x21c2a90() {
   return (neuron0x21a62e0()*0.00244693);
}

double NNfunction_sb_cLsR::synapse0x21c2ad0() {
   return (neuron0x21a6620()*-0.35509);
}

double NNfunction_sb_cLsR::synapse0x21c2b10() {
   return (neuron0x21a6960()*0.013004);
}

double NNfunction_sb_cLsR::synapse0x21c2b50() {
   return (neuron0x21a6ca0()*0.00709657);
}

double NNfunction_sb_cLsR::synapse0x21c2b90() {
   return (neuron0x21a6fe0()*0.00808495);
}

double NNfunction_sb_cLsR::synapse0x21c2620() {
   return (neuron0x21a7320()*-0.0127464);
}

double NNfunction_sb_cLsR::synapse0x21c2660() {
   return (neuron0x21a7880()*-0.0136929);
}

double NNfunction_sb_cLsR::synapse0x21c2ce0() {
   return (neuron0x21a7aa0()*0.713446);
}

double NNfunction_sb_cLsR::synapse0x21c2d20() {
   return (neuron0x21a7de0()*-0.029482);
}

double NNfunction_sb_cLsR::synapse0x21c2d60() {
   return (neuron0x21a8120()*-0.0142799);
}

double NNfunction_sb_cLsR::synapse0x21c2da0() {
   return (neuron0x21a8460()*0.013029);
}

double NNfunction_sb_cLsR::synapse0x21c2de0() {
   return (neuron0x21a87a0()*-0.0129995);
}

double NNfunction_sb_cLsR::synapse0x21c2e20() {
   return (neuron0x21a8ae0()*-0.00864529);
}

double NNfunction_sb_cLsR::synapse0x21c31a0() {
   return (neuron0x21a3f20()*0.0465604);
}

double NNfunction_sb_cLsR::synapse0x21c31e0() {
   return (neuron0x21a4260()*0.0103775);
}

double NNfunction_sb_cLsR::synapse0x21c3220() {
   return (neuron0x21a45a0()*-0.0663301);
}

double NNfunction_sb_cLsR::synapse0x21c3260() {
   return (neuron0x21a48e0()*9.93558);
}

double NNfunction_sb_cLsR::synapse0x21c32a0() {
   return (neuron0x21a4c20()*0.00938655);
}

double NNfunction_sb_cLsR::synapse0x21c32e0() {
   return (neuron0x21a4f60()*0.0339746);
}

double NNfunction_sb_cLsR::synapse0x21c3320() {
   return (neuron0x21a52a0()*0.0481611);
}

double NNfunction_sb_cLsR::synapse0x21c3360() {
   return (neuron0x21a55e0()*-0.0430473);
}

double NNfunction_sb_cLsR::synapse0x21c33a0() {
   return (neuron0x21a5920()*-0.0327112);
}

double NNfunction_sb_cLsR::synapse0x21c33e0() {
   return (neuron0x21a5c60()*0.0240976);
}

double NNfunction_sb_cLsR::synapse0x21c3420() {
   return (neuron0x21a5fa0()*-0.0615335);
}

double NNfunction_sb_cLsR::synapse0x21c3460() {
   return (neuron0x21a62e0()*-0.0816992);
}

double NNfunction_sb_cLsR::synapse0x21c34a0() {
   return (neuron0x21a6620()*0.141602);
}

double NNfunction_sb_cLsR::synapse0x21c34e0() {
   return (neuron0x21a6960()*0.000855094);
}

double NNfunction_sb_cLsR::synapse0x21c3520() {
   return (neuron0x21a6ca0()*0.0401951);
}

double NNfunction_sb_cLsR::synapse0x21c3560() {
   return (neuron0x21a6fe0()*0.00698138);
}

double NNfunction_sb_cLsR::synapse0x21c2ff0() {
   return (neuron0x21a7320()*-0.0427315);
}

double NNfunction_sb_cLsR::synapse0x21c3030() {
   return (neuron0x21a7880()*-0.0175931);
}

double NNfunction_sb_cLsR::synapse0x21c36b0() {
   return (neuron0x21a7aa0()*0.208148);
}

double NNfunction_sb_cLsR::synapse0x21c36f0() {
   return (neuron0x21a7de0()*-0.0324507);
}

double NNfunction_sb_cLsR::synapse0x21c3730() {
   return (neuron0x21a8120()*-0.0557754);
}

double NNfunction_sb_cLsR::synapse0x21c3770() {
   return (neuron0x21a8460()*0.0430737);
}

double NNfunction_sb_cLsR::synapse0x21c37b0() {
   return (neuron0x21a87a0()*-0.0285874);
}

double NNfunction_sb_cLsR::synapse0x21c37f0() {
   return (neuron0x21a8ae0()*0.0452636);
}

double NNfunction_sb_cLsR::synapse0x21c3b70() {
   return (neuron0x21a3f20()*0.0105026);
}

double NNfunction_sb_cLsR::synapse0x21c3bb0() {
   return (neuron0x21a4260()*-0.00921492);
}

double NNfunction_sb_cLsR::synapse0x21c3bf0() {
   return (neuron0x21a45a0()*0.0179961);
}

double NNfunction_sb_cLsR::synapse0x21c3c30() {
   return (neuron0x21a48e0()*-0.00958845);
}

double NNfunction_sb_cLsR::synapse0x21c3c70() {
   return (neuron0x21a4c20()*0.0119333);
}

double NNfunction_sb_cLsR::synapse0x21c3cb0() {
   return (neuron0x21a4f60()*-0.00881634);
}

double NNfunction_sb_cLsR::synapse0x21c3cf0() {
   return (neuron0x21a52a0()*-0.0045203);
}

double NNfunction_sb_cLsR::synapse0x21c3d30() {
   return (neuron0x21a55e0()*-0.00312046);
}

double NNfunction_sb_cLsR::synapse0x21c3d70() {
   return (neuron0x21a5920()*-0.0106476);
}

double NNfunction_sb_cLsR::synapse0x21c3db0() {
   return (neuron0x21a5c60()*-0.00444608);
}

double NNfunction_sb_cLsR::synapse0x21c3df0() {
   return (neuron0x21a5fa0()*0.00232824);
}

double NNfunction_sb_cLsR::synapse0x21c3e30() {
   return (neuron0x21a62e0()*-0.00879312);
}

double NNfunction_sb_cLsR::synapse0x21c3e70() {
   return (neuron0x21a6620()*-0.984567);
}

double NNfunction_sb_cLsR::synapse0x21c3eb0() {
   return (neuron0x21a6960()*-0.00827333);
}

double NNfunction_sb_cLsR::synapse0x21c3ef0() {
   return (neuron0x21a6ca0()*-0.00394532);
}

double NNfunction_sb_cLsR::synapse0x21c3f30() {
   return (neuron0x21a6fe0()*-0.00948029);
}

double NNfunction_sb_cLsR::synapse0x21c39c0() {
   return (neuron0x21a7320()*0.00598767);
}

double NNfunction_sb_cLsR::synapse0x21c3a00() {
   return (neuron0x21a7880()*0.0291736);
}

double NNfunction_sb_cLsR::synapse0x21c4080() {
   return (neuron0x21a7aa0()*-0.107243);
}

double NNfunction_sb_cLsR::synapse0x21c40c0() {
   return (neuron0x21a7de0()*0.0153463);
}

double NNfunction_sb_cLsR::synapse0x21c4100() {
   return (neuron0x21a8120()*0.00529274);
}

double NNfunction_sb_cLsR::synapse0x21c4140() {
   return (neuron0x21a8460()*-0.0152404);
}

double NNfunction_sb_cLsR::synapse0x21c4180() {
   return (neuron0x21a87a0()*0.0125376);
}

double NNfunction_sb_cLsR::synapse0x21c41c0() {
   return (neuron0x21a8ae0()*0.0198695);
}

double NNfunction_sb_cLsR::synapse0x21c4540() {
   return (neuron0x21a3f20()*0.0457804);
}

double NNfunction_sb_cLsR::synapse0x21c4580() {
   return (neuron0x21a4260()*-0.259406);
}

double NNfunction_sb_cLsR::synapse0x21c45c0() {
   return (neuron0x21a45a0()*0.948544);
}

double NNfunction_sb_cLsR::synapse0x21c4600() {
   return (neuron0x21a48e0()*-0.352376);
}

double NNfunction_sb_cLsR::synapse0x21c4640() {
   return (neuron0x21a4c20()*-0.748032);
}

double NNfunction_sb_cLsR::synapse0x21c4680() {
   return (neuron0x21a4f60()*-0.76415);
}

double NNfunction_sb_cLsR::synapse0x21c46c0() {
   return (neuron0x21a52a0()*-0.311395);
}

double NNfunction_sb_cLsR::synapse0x21c4700() {
   return (neuron0x21a55e0()*0.0732199);
}

double NNfunction_sb_cLsR::synapse0x21c4740() {
   return (neuron0x21a5920()*0.546725);
}

double NNfunction_sb_cLsR::synapse0x21c4780() {
   return (neuron0x21a5c60()*-0.584169);
}

double NNfunction_sb_cLsR::synapse0x21c47c0() {
   return (neuron0x21a5fa0()*0.77427);
}

double NNfunction_sb_cLsR::synapse0x21c4800() {
   return (neuron0x21a62e0()*-0.105184);
}

double NNfunction_sb_cLsR::synapse0x21c4840() {
   return (neuron0x21a6620()*-0.512321);
}

double NNfunction_sb_cLsR::synapse0x21c4880() {
   return (neuron0x21a6960()*-0.555059);
}

double NNfunction_sb_cLsR::synapse0x21c48c0() {
   return (neuron0x21a6ca0()*-0.330303);
}

double NNfunction_sb_cLsR::synapse0x21c4900() {
   return (neuron0x21a6fe0()*-0.271126);
}

double NNfunction_sb_cLsR::synapse0x21c4390() {
   return (neuron0x21a7320()*-0.230566);
}

double NNfunction_sb_cLsR::synapse0x21c43d0() {
   return (neuron0x21a7880()*0.814953);
}

double NNfunction_sb_cLsR::synapse0x21c4a50() {
   return (neuron0x21a7aa0()*0.641007);
}

double NNfunction_sb_cLsR::synapse0x21c4a90() {
   return (neuron0x21a7de0()*0.16158);
}

double NNfunction_sb_cLsR::synapse0x21c4ad0() {
   return (neuron0x21a8120()*0.196259);
}

double NNfunction_sb_cLsR::synapse0x21c4b10() {
   return (neuron0x21a8460()*0.0145225);
}

double NNfunction_sb_cLsR::synapse0x21c4b50() {
   return (neuron0x21a87a0()*0.27234);
}

double NNfunction_sb_cLsR::synapse0x21c4b90() {
   return (neuron0x21a8ae0()*-0.0468027);
}

double NNfunction_sb_cLsR::synapse0x21c4f10() {
   return (neuron0x21a3f20()*0.00424339);
}

double NNfunction_sb_cLsR::synapse0x21c4f50() {
   return (neuron0x21a4260()*-0.0123613);
}

double NNfunction_sb_cLsR::synapse0x21c4f90() {
   return (neuron0x21a45a0()*-0.0938945);
}

double NNfunction_sb_cLsR::synapse0x21c4fd0() {
   return (neuron0x21a48e0()*0.868181);
}

double NNfunction_sb_cLsR::synapse0x21c5010() {
   return (neuron0x21a4c20()*0.0908738);
}

double NNfunction_sb_cLsR::synapse0x21c5050() {
   return (neuron0x21a4f60()*0.00521099);
}

double NNfunction_sb_cLsR::synapse0x21c5090() {
   return (neuron0x21a52a0()*-0.0335295);
}

double NNfunction_sb_cLsR::synapse0x21c50d0() {
   return (neuron0x21a55e0()*-0.0761796);
}

double NNfunction_sb_cLsR::synapse0x21c5110() {
   return (neuron0x21a5920()*0.181782);
}

double NNfunction_sb_cLsR::synapse0x21c5150() {
   return (neuron0x21a5c60()*-0.0754204);
}

double NNfunction_sb_cLsR::synapse0x21c5190() {
   return (neuron0x21a5fa0()*-0.0414066);
}

double NNfunction_sb_cLsR::synapse0x21c51d0() {
   return (neuron0x21a62e0()*0.038494);
}

double NNfunction_sb_cLsR::synapse0x21c5210() {
   return (neuron0x21a6620()*0.669611);
}

double NNfunction_sb_cLsR::synapse0x21c5250() {
   return (neuron0x21a6960()*-0.00877164);
}

double NNfunction_sb_cLsR::synapse0x21c5290() {
   return (neuron0x21a6ca0()*-0.259016);
}

double NNfunction_sb_cLsR::synapse0x21c52d0() {
   return (neuron0x21a6fe0()*0.00513888);
}

double NNfunction_sb_cLsR::synapse0x21c4d60() {
   return (neuron0x21a7320()*0.0776336);
}

double NNfunction_sb_cLsR::synapse0x21c4da0() {
   return (neuron0x21a7880()*-0.215535);
}

double NNfunction_sb_cLsR::synapse0x21c5420() {
   return (neuron0x21a7aa0()*0.343416);
}

double NNfunction_sb_cLsR::synapse0x21c5460() {
   return (neuron0x21a7de0()*0.19009);
}

double NNfunction_sb_cLsR::synapse0x21c54a0() {
   return (neuron0x21a8120()*0.0172459);
}

double NNfunction_sb_cLsR::synapse0x21c54e0() {
   return (neuron0x21a8460()*-0.147511);
}

double NNfunction_sb_cLsR::synapse0x21c5520() {
   return (neuron0x21a87a0()*-0.106651);
}

double NNfunction_sb_cLsR::synapse0x21c5560() {
   return (neuron0x21a8ae0()*0.0762439);
}

double NNfunction_sb_cLsR::synapse0x21ae010() {
   return (neuron0x21a3f20()*-0.000149589);
}

double NNfunction_sb_cLsR::synapse0x21ae050() {
   return (neuron0x21a4260()*0.325523);
}

double NNfunction_sb_cLsR::synapse0x21ae090() {
   return (neuron0x21a45a0()*0.195805);
}

double NNfunction_sb_cLsR::synapse0x21ae0d0() {
   return (neuron0x21a48e0()*-0.30115);
}

double NNfunction_sb_cLsR::synapse0x21ae110() {
   return (neuron0x21a4c20()*-0.137289);
}

double NNfunction_sb_cLsR::synapse0x21ae150() {
   return (neuron0x21a4f60()*-0.52013);
}

double NNfunction_sb_cLsR::synapse0x21ae190() {
   return (neuron0x21a52a0()*-0.634095);
}

double NNfunction_sb_cLsR::synapse0x21ae1d0() {
   return (neuron0x21a55e0()*0.547718);
}

double NNfunction_sb_cLsR::synapse0x21c5cf0() {
   return (neuron0x21a5920()*1.1259);
}

double NNfunction_sb_cLsR::synapse0x21c5d30() {
   return (neuron0x21a5c60()*-0.405257);
}

double NNfunction_sb_cLsR::synapse0x21c5d70() {
   return (neuron0x21a5fa0()*1.02724);
}

double NNfunction_sb_cLsR::synapse0x21c5db0() {
   return (neuron0x21a62e0()*-0.175991);
}

double NNfunction_sb_cLsR::synapse0x21c5df0() {
   return (neuron0x21a6620()*-0.890084);
}

double NNfunction_sb_cLsR::synapse0x21c5e30() {
   return (neuron0x21a6960()*-0.0926347);
}

double NNfunction_sb_cLsR::synapse0x21c5e70() {
   return (neuron0x21a6ca0()*0.0947965);
}

double NNfunction_sb_cLsR::synapse0x21c5eb0() {
   return (neuron0x21a6fe0()*-0.129352);
}

double NNfunction_sb_cLsR::synapse0x21c5730() {
   return (neuron0x21a7320()*-0.236398);
}

double NNfunction_sb_cLsR::synapse0x21c5770() {
   return (neuron0x21a7880()*-0.0429303);
}

double NNfunction_sb_cLsR::synapse0x21c6000() {
   return (neuron0x21a7aa0()*0.200798);
}

double NNfunction_sb_cLsR::synapse0x21c6040() {
   return (neuron0x21a7de0()*0.311231);
}

double NNfunction_sb_cLsR::synapse0x21c6080() {
   return (neuron0x21a8120()*0.308661);
}

double NNfunction_sb_cLsR::synapse0x21c60c0() {
   return (neuron0x21a8460()*-0.490596);
}

double NNfunction_sb_cLsR::synapse0x21c6100() {
   return (neuron0x21a87a0()*-0.269039);
}

double NNfunction_sb_cLsR::synapse0x21c6140() {
   return (neuron0x21a8ae0()*0.129908);
}

double NNfunction_sb_cLsR::synapse0x21c64c0() {
   return (neuron0x21a3f20()*-0.00639725);
}

double NNfunction_sb_cLsR::synapse0x21c6500() {
   return (neuron0x21a4260()*-0.0759537);
}

double NNfunction_sb_cLsR::synapse0x21c6540() {
   return (neuron0x21a45a0()*-0.212933);
}

double NNfunction_sb_cLsR::synapse0x21c6580() {
   return (neuron0x21a48e0()*-1.23311);
}

double NNfunction_sb_cLsR::synapse0x21c65c0() {
   return (neuron0x21a4c20()*-0.107701);
}

double NNfunction_sb_cLsR::synapse0x21c6600() {
   return (neuron0x21a4f60()*-0.0371176);
}

double NNfunction_sb_cLsR::synapse0x21c6640() {
   return (neuron0x21a52a0()*-0.0562538);
}

double NNfunction_sb_cLsR::synapse0x21c6680() {
   return (neuron0x21a55e0()*-0.0531663);
}

double NNfunction_sb_cLsR::synapse0x21c66c0() {
   return (neuron0x21a5920()*0.224925);
}

double NNfunction_sb_cLsR::synapse0x21c6700() {
   return (neuron0x21a5c60()*-0.171048);
}

double NNfunction_sb_cLsR::synapse0x21c6740() {
   return (neuron0x21a5fa0()*-0.0335833);
}

double NNfunction_sb_cLsR::synapse0x21c6780() {
   return (neuron0x21a62e0()*-0.116334);
}

double NNfunction_sb_cLsR::synapse0x21c67c0() {
   return (neuron0x21a6620()*1.08126);
}

double NNfunction_sb_cLsR::synapse0x21c6800() {
   return (neuron0x21a6960()*0.0125077);
}

double NNfunction_sb_cLsR::synapse0x21c6840() {
   return (neuron0x21a6ca0()*0.0464111);
}

double NNfunction_sb_cLsR::synapse0x21c6880() {
   return (neuron0x21a6fe0()*-0.0199425);
}

double NNfunction_sb_cLsR::synapse0x21c6310() {
   return (neuron0x21a7320()*-0.0971655);
}

double NNfunction_sb_cLsR::synapse0x21c6350() {
   return (neuron0x21a7880()*-0.0485354);
}

double NNfunction_sb_cLsR::synapse0x21c69d0() {
   return (neuron0x21a7aa0()*0.0407363);
}

double NNfunction_sb_cLsR::synapse0x21c6a10() {
   return (neuron0x21a7de0()*0.140924);
}

double NNfunction_sb_cLsR::synapse0x21c6a50() {
   return (neuron0x21a8120()*0.0156255);
}

double NNfunction_sb_cLsR::synapse0x21c6a90() {
   return (neuron0x21a8460()*0.0995639);
}

double NNfunction_sb_cLsR::synapse0x21c6ad0() {
   return (neuron0x21a87a0()*-0.116692);
}

double NNfunction_sb_cLsR::synapse0x21c6b10() {
   return (neuron0x21a8ae0()*-0.0180058);
}

double NNfunction_sb_cLsR::synapse0x21c6e90() {
   return (neuron0x21a3f20()*0.158215);
}

double NNfunction_sb_cLsR::synapse0x21c6ed0() {
   return (neuron0x21a4260()*0.343624);
}

double NNfunction_sb_cLsR::synapse0x21c6f10() {
   return (neuron0x21a45a0()*-0.746987);
}

double NNfunction_sb_cLsR::synapse0x21c6f50() {
   return (neuron0x21a48e0()*-0.33258);
}

double NNfunction_sb_cLsR::synapse0x21c6f90() {
   return (neuron0x21a4c20()*-0.319715);
}

double NNfunction_sb_cLsR::synapse0x21c6fd0() {
   return (neuron0x21a4f60()*0.0635187);
}

double NNfunction_sb_cLsR::synapse0x21c7010() {
   return (neuron0x21a52a0()*-0.732778);
}

double NNfunction_sb_cLsR::synapse0x21c7050() {
   return (neuron0x21a55e0()*0.404028);
}

double NNfunction_sb_cLsR::synapse0x21c7090() {
   return (neuron0x21a5920()*-0.305169);
}

double NNfunction_sb_cLsR::synapse0x21c70d0() {
   return (neuron0x21a5c60()*0.503488);
}

double NNfunction_sb_cLsR::synapse0x21c7110() {
   return (neuron0x21a5fa0()*0.08668);
}

double NNfunction_sb_cLsR::synapse0x21c7150() {
   return (neuron0x21a62e0()*0.396178);
}

double NNfunction_sb_cLsR::synapse0x21c7190() {
   return (neuron0x21a6620()*-0.102363);
}

double NNfunction_sb_cLsR::synapse0x21c71d0() {
   return (neuron0x21a6960()*0.307521);
}

double NNfunction_sb_cLsR::synapse0x21c7210() {
   return (neuron0x21a6ca0()*-0.188373);
}

double NNfunction_sb_cLsR::synapse0x21c7250() {
   return (neuron0x21a6fe0()*0.547347);
}

double NNfunction_sb_cLsR::synapse0x21c6ce0() {
   return (neuron0x21a7320()*-0.237617);
}

double NNfunction_sb_cLsR::synapse0x21c6d20() {
   return (neuron0x21a7880()*0.502526);
}

double NNfunction_sb_cLsR::synapse0x21b7850() {
   return (neuron0x21a7aa0()*-0.727832);
}

double NNfunction_sb_cLsR::synapse0x21b7890() {
   return (neuron0x21a7de0()*0.0931534);
}

double NNfunction_sb_cLsR::synapse0x21b78d0() {
   return (neuron0x21a8120()*0.287901);
}

double NNfunction_sb_cLsR::synapse0x21b7910() {
   return (neuron0x21a8460()*-0.0623984);
}

double NNfunction_sb_cLsR::synapse0x21b7950() {
   return (neuron0x21a87a0()*0.588437);
}

double NNfunction_sb_cLsR::synapse0x21b7990() {
   return (neuron0x21a8ae0()*-0.374217);
}

double NNfunction_sb_cLsR::synapse0x21b7d10() {
   return (neuron0x21a3f20()*-0.166972);
}

double NNfunction_sb_cLsR::synapse0x21b7d50() {
   return (neuron0x21a4260()*-0.142446);
}

double NNfunction_sb_cLsR::synapse0x21b7d90() {
   return (neuron0x21a45a0()*-0.721625);
}

double NNfunction_sb_cLsR::synapse0x21b7dd0() {
   return (neuron0x21a48e0()*0.491849);
}

double NNfunction_sb_cLsR::synapse0x21b7e10() {
   return (neuron0x21a4c20()*-0.0633645);
}

double NNfunction_sb_cLsR::synapse0x21b7e50() {
   return (neuron0x21a4f60()*-0.159869);
}

double NNfunction_sb_cLsR::synapse0x21b7e90() {
   return (neuron0x21a52a0()*-0.0944297);
}

double NNfunction_sb_cLsR::synapse0x21b7ed0() {
   return (neuron0x21a55e0()*-0.00424775);
}

double NNfunction_sb_cLsR::synapse0x21b7f10() {
   return (neuron0x21a5920()*0.101595);
}

double NNfunction_sb_cLsR::synapse0x21b7f50() {
   return (neuron0x21a5c60()*-0.0658798);
}

double NNfunction_sb_cLsR::synapse0x21b7f90() {
   return (neuron0x21a5fa0()*0.012448);
}

double NNfunction_sb_cLsR::synapse0x21b7fd0() {
   return (neuron0x21a62e0()*-0.116466);
}

double NNfunction_sb_cLsR::synapse0x21b8010() {
   return (neuron0x21a6620()*-0.433676);
}

double NNfunction_sb_cLsR::synapse0x21b8050() {
   return (neuron0x21a6960()*-0.0466356);
}

double NNfunction_sb_cLsR::synapse0x21b8090() {
   return (neuron0x21a6ca0()*-0.173604);
}

double NNfunction_sb_cLsR::synapse0x21b80d0() {
   return (neuron0x21a6fe0()*-0.249441);
}

double NNfunction_sb_cLsR::synapse0x21b7b60() {
   return (neuron0x21a7320()*-0.204614);
}

double NNfunction_sb_cLsR::synapse0x21b7ba0() {
   return (neuron0x21a7880()*-0.0428417);
}

double NNfunction_sb_cLsR::synapse0x21b8220() {
   return (neuron0x21a7aa0()*0.00385092);
}

double NNfunction_sb_cLsR::synapse0x21b8260() {
   return (neuron0x21a7de0()*0.070465);
}

double NNfunction_sb_cLsR::synapse0x21b82a0() {
   return (neuron0x21a8120()*-0.0373029);
}

double NNfunction_sb_cLsR::synapse0x21b82e0() {
   return (neuron0x21a8460()*0.0463112);
}

double NNfunction_sb_cLsR::synapse0x21b8320() {
   return (neuron0x21a87a0()*-0.131205);
}

double NNfunction_sb_cLsR::synapse0x21b8360() {
   return (neuron0x21a8ae0()*0.151074);
}

double NNfunction_sb_cLsR::synapse0x21b86e0() {
   return (neuron0x21a3f20()*0.401148);
}

double NNfunction_sb_cLsR::synapse0x21b8720() {
   return (neuron0x21a4260()*-0.688957);
}

double NNfunction_sb_cLsR::synapse0x21b8760() {
   return (neuron0x21a45a0()*-0.0510428);
}

double NNfunction_sb_cLsR::synapse0x21b87a0() {
   return (neuron0x21a48e0()*-0.601081);
}

double NNfunction_sb_cLsR::synapse0x21b87e0() {
   return (neuron0x21a4c20()*0.351564);
}

double NNfunction_sb_cLsR::synapse0x21b8820() {
   return (neuron0x21a4f60()*0.786762);
}

double NNfunction_sb_cLsR::synapse0x21b8860() {
   return (neuron0x21a52a0()*0.289654);
}

double NNfunction_sb_cLsR::synapse0x21b88a0() {
   return (neuron0x21a55e0()*0.292751);
}

double NNfunction_sb_cLsR::synapse0x21b88e0() {
   return (neuron0x21a5920()*0.186973);
}

double NNfunction_sb_cLsR::synapse0x21b8920() {
   return (neuron0x21a5c60()*-1.04568);
}

double NNfunction_sb_cLsR::synapse0x21b8960() {
   return (neuron0x21a5fa0()*-0.554385);
}

double NNfunction_sb_cLsR::synapse0x21b89a0() {
   return (neuron0x21a62e0()*-0.260577);
}

double NNfunction_sb_cLsR::synapse0x21b89e0() {
   return (neuron0x21a6620()*0.596421);
}

double NNfunction_sb_cLsR::synapse0x21b8a20() {
   return (neuron0x21a6960()*0.0546189);
}

double NNfunction_sb_cLsR::synapse0x21b8a60() {
   return (neuron0x21a6ca0()*0.789255);
}

double NNfunction_sb_cLsR::synapse0x21b8aa0() {
   return (neuron0x21a6fe0()*0.967585);
}

double NNfunction_sb_cLsR::synapse0x21b8530() {
   return (neuron0x21a7320()*0.375481);
}

double NNfunction_sb_cLsR::synapse0x21b8570() {
   return (neuron0x21a7880()*0.806654);
}

double NNfunction_sb_cLsR::synapse0x21b8bf0() {
   return (neuron0x21a7aa0()*-0.0105831);
}

double NNfunction_sb_cLsR::synapse0x21b8c30() {
   return (neuron0x21a7de0()*0.68042);
}

double NNfunction_sb_cLsR::synapse0x21b8c70() {
   return (neuron0x21a8120()*0.491281);
}

double NNfunction_sb_cLsR::synapse0x21b8cb0() {
   return (neuron0x21a8460()*-0.522323);
}

double NNfunction_sb_cLsR::synapse0x21b8cf0() {
   return (neuron0x21a87a0()*0.805914);
}

double NNfunction_sb_cLsR::synapse0x21b8d30() {
   return (neuron0x21a8ae0()*0.133218);
}

double NNfunction_sb_cLsR::synapse0x21b90b0() {
   return (neuron0x21a3f20()*0.500526);
}

double NNfunction_sb_cLsR::synapse0x21b90f0() {
   return (neuron0x21a4260()*0.0601271);
}

double NNfunction_sb_cLsR::synapse0x21b9130() {
   return (neuron0x21a45a0()*-0.962385);
}

double NNfunction_sb_cLsR::synapse0x21b9170() {
   return (neuron0x21a48e0()*-0.422765);
}

double NNfunction_sb_cLsR::synapse0x21b91b0() {
   return (neuron0x21a4c20()*0.0479269);
}

double NNfunction_sb_cLsR::synapse0x21b91f0() {
   return (neuron0x21a4f60()*0.34545);
}

double NNfunction_sb_cLsR::synapse0x21b9230() {
   return (neuron0x21a52a0()*-0.0989594);
}

double NNfunction_sb_cLsR::synapse0x21b9270() {
   return (neuron0x21a55e0()*0.14502);
}

double NNfunction_sb_cLsR::synapse0x21b92b0() {
   return (neuron0x21a5920()*0.274779);
}

double NNfunction_sb_cLsR::synapse0x21b92f0() {
   return (neuron0x21a5c60()*-0.283544);
}

double NNfunction_sb_cLsR::synapse0x21b9330() {
   return (neuron0x21a5fa0()*-0.295543);
}

double NNfunction_sb_cLsR::synapse0x21b9370() {
   return (neuron0x21a62e0()*0.310773);
}

double NNfunction_sb_cLsR::synapse0x21b93b0() {
   return (neuron0x21a6620()*0.425988);
}

double NNfunction_sb_cLsR::synapse0x21b93f0() {
   return (neuron0x21a6960()*0.00976862);
}

double NNfunction_sb_cLsR::synapse0x21b9430() {
   return (neuron0x21a6ca0()*-0.520325);
}

double NNfunction_sb_cLsR::synapse0x21b9470() {
   return (neuron0x21a6fe0()*-0.107225);
}

double NNfunction_sb_cLsR::synapse0x21b8f00() {
   return (neuron0x21a7320()*-0.239837);
}

double NNfunction_sb_cLsR::synapse0x21b8f40() {
   return (neuron0x21a7880()*0.227357);
}

double NNfunction_sb_cLsR::synapse0x21b95c0() {
   return (neuron0x21a7aa0()*-0.383205);
}

double NNfunction_sb_cLsR::synapse0x21b9600() {
   return (neuron0x21a7de0()*-0.00595988);
}

double NNfunction_sb_cLsR::synapse0x21b9640() {
   return (neuron0x21a8120()*-0.111448);
}

double NNfunction_sb_cLsR::synapse0x21b9680() {
   return (neuron0x21a8460()*0.124574);
}

double NNfunction_sb_cLsR::synapse0x21b96c0() {
   return (neuron0x21a87a0()*-0.0686821);
}

double NNfunction_sb_cLsR::synapse0x21b9700() {
   return (neuron0x21a8ae0()*-0.269072);
}

double NNfunction_sb_cLsR::synapse0x21cb5d0() {
   return (neuron0x21a3f20()*0.104851);
}

double NNfunction_sb_cLsR::synapse0x21cb610() {
   return (neuron0x21a4260()*0.0029269);
}

double NNfunction_sb_cLsR::synapse0x21cb650() {
   return (neuron0x21a45a0()*-0.0963165);
}

double NNfunction_sb_cLsR::synapse0x21cb690() {
   return (neuron0x21a48e0()*0.219549);
}

double NNfunction_sb_cLsR::synapse0x21cb6d0() {
   return (neuron0x21a4c20()*-0.00224799);
}

double NNfunction_sb_cLsR::synapse0x21cb710() {
   return (neuron0x21a4f60()*-0.00820582);
}

double NNfunction_sb_cLsR::synapse0x21cb750() {
   return (neuron0x21a52a0()*-0.0287348);
}

double NNfunction_sb_cLsR::synapse0x21cb790() {
   return (neuron0x21a55e0()*0.0345765);
}

double NNfunction_sb_cLsR::synapse0x21cb7d0() {
   return (neuron0x21a5920()*-0.307916);
}

double NNfunction_sb_cLsR::synapse0x21cb810() {
   return (neuron0x21a5c60()*-0.108515);
}

double NNfunction_sb_cLsR::synapse0x21cb850() {
   return (neuron0x21a5fa0()*0.389853);
}

double NNfunction_sb_cLsR::synapse0x21cb890() {
   return (neuron0x21a62e0()*0.0279201);
}

double NNfunction_sb_cLsR::synapse0x21cb8d0() {
   return (neuron0x21a6620()*0.978397);
}

double NNfunction_sb_cLsR::synapse0x21cb910() {
   return (neuron0x21a6960()*0.102216);
}

double NNfunction_sb_cLsR::synapse0x21cb950() {
   return (neuron0x21a6ca0()*0.0853605);
}

double NNfunction_sb_cLsR::synapse0x21cb990() {
   return (neuron0x21a6fe0()*0.154932);
}

double NNfunction_sb_cLsR::synapse0x21b9740() {
   return (neuron0x21a7320()*0.0303463);
}

double NNfunction_sb_cLsR::synapse0x21b9780() {
   return (neuron0x21a7880()*0.0998709);
}

double NNfunction_sb_cLsR::synapse0x21cbae0() {
   return (neuron0x21a7aa0()*0.314064);
}

double NNfunction_sb_cLsR::synapse0x21cbb20() {
   return (neuron0x21a7de0()*-0.146931);
}

double NNfunction_sb_cLsR::synapse0x21cbb60() {
   return (neuron0x21a8120()*0.0233108);
}

double NNfunction_sb_cLsR::synapse0x21cbba0() {
   return (neuron0x21a8460()*0.017534);
}

double NNfunction_sb_cLsR::synapse0x21cbbe0() {
   return (neuron0x21a87a0()*0.0793445);
}

double NNfunction_sb_cLsR::synapse0x21cbc20() {
   return (neuron0x21a8ae0()*0.0153046);
}

double NNfunction_sb_cLsR::synapse0x21cbfa0() {
   return (neuron0x21a3f20()*0.336991);
}

double NNfunction_sb_cLsR::synapse0x21cbfe0() {
   return (neuron0x21a4260()*0.78864);
}

double NNfunction_sb_cLsR::synapse0x21cc020() {
   return (neuron0x21a45a0()*-0.740647);
}

double NNfunction_sb_cLsR::synapse0x21cc060() {
   return (neuron0x21a48e0()*0.0536588);
}

double NNfunction_sb_cLsR::synapse0x21cc0a0() {
   return (neuron0x21a4c20()*0.530056);
}

double NNfunction_sb_cLsR::synapse0x21cc0e0() {
   return (neuron0x21a4f60()*0.424477);
}

double NNfunction_sb_cLsR::synapse0x21cc120() {
   return (neuron0x21a52a0()*-0.108961);
}

double NNfunction_sb_cLsR::synapse0x21cc160() {
   return (neuron0x21a55e0()*0.757792);
}

double NNfunction_sb_cLsR::synapse0x21cc1a0() {
   return (neuron0x21a5920()*0.137412);
}

double NNfunction_sb_cLsR::synapse0x21cc1e0() {
   return (neuron0x21a5c60()*-0.361382);
}

double NNfunction_sb_cLsR::synapse0x21cc220() {
   return (neuron0x21a5fa0()*-0.413897);
}

double NNfunction_sb_cLsR::synapse0x21cc260() {
   return (neuron0x21a62e0()*0.266146);
}

double NNfunction_sb_cLsR::synapse0x21cc2a0() {
   return (neuron0x21a6620()*0.380957);
}

double NNfunction_sb_cLsR::synapse0x21cc2e0() {
   return (neuron0x21a6960()*-0.399141);
}

double NNfunction_sb_cLsR::synapse0x21cc320() {
   return (neuron0x21a6ca0()*0.471199);
}

double NNfunction_sb_cLsR::synapse0x21cc360() {
   return (neuron0x21a6fe0()*-0.952159);
}

double NNfunction_sb_cLsR::synapse0x21cbdf0() {
   return (neuron0x21a7320()*0.0406593);
}

double NNfunction_sb_cLsR::synapse0x21cbe30() {
   return (neuron0x21a7880()*0.340577);
}

double NNfunction_sb_cLsR::synapse0x21cc4b0() {
   return (neuron0x21a7aa0()*-0.366672);
}

double NNfunction_sb_cLsR::synapse0x21cc4f0() {
   return (neuron0x21a7de0()*-0.163445);
}

double NNfunction_sb_cLsR::synapse0x21cc530() {
   return (neuron0x21a8120()*-0.946993);
}

double NNfunction_sb_cLsR::synapse0x21cc570() {
   return (neuron0x21a8460()*-1.00067);
}

double NNfunction_sb_cLsR::synapse0x21cc5b0() {
   return (neuron0x21a87a0()*0.203974);
}

double NNfunction_sb_cLsR::synapse0x21cc5f0() {
   return (neuron0x21a8ae0()*0.407693);
}

double NNfunction_sb_cLsR::synapse0x21cc970() {
   return (neuron0x21a3f20()*-0.127873);
}

double NNfunction_sb_cLsR::synapse0x21cc9b0() {
   return (neuron0x21a4260()*0.105984);
}

double NNfunction_sb_cLsR::synapse0x21cc9f0() {
   return (neuron0x21a45a0()*-0.587028);
}

double NNfunction_sb_cLsR::synapse0x21cca30() {
   return (neuron0x21a48e0()*1.10069);
}

double NNfunction_sb_cLsR::synapse0x21cca70() {
   return (neuron0x21a4c20()*0.112981);
}

double NNfunction_sb_cLsR::synapse0x21ccab0() {
   return (neuron0x21a4f60()*-0.212469);
}

double NNfunction_sb_cLsR::synapse0x21ccaf0() {
   return (neuron0x21a52a0()*0.248575);
}

double NNfunction_sb_cLsR::synapse0x21ccb30() {
   return (neuron0x21a55e0()*-0.380706);
}

double NNfunction_sb_cLsR::synapse0x21ccb70() {
   return (neuron0x21a5920()*-0.0401431);
}

double NNfunction_sb_cLsR::synapse0x21ccbb0() {
   return (neuron0x21a5c60()*-0.114071);
}

double NNfunction_sb_cLsR::synapse0x21ccbf0() {
   return (neuron0x21a5fa0()*-0.0164396);
}

double NNfunction_sb_cLsR::synapse0x21ccc30() {
   return (neuron0x21a62e0()*0.0953112);
}

double NNfunction_sb_cLsR::synapse0x21ccc70() {
   return (neuron0x21a6620()*0.0708486);
}

double NNfunction_sb_cLsR::synapse0x21cccb0() {
   return (neuron0x21a6960()*-0.167318);
}

double NNfunction_sb_cLsR::synapse0x21cccf0() {
   return (neuron0x21a6ca0()*0.127091);
}

double NNfunction_sb_cLsR::synapse0x21ccd30() {
   return (neuron0x21a6fe0()*-0.068684);
}

double NNfunction_sb_cLsR::synapse0x21cc7c0() {
   return (neuron0x21a7320()*0.0899926);
}

double NNfunction_sb_cLsR::synapse0x21cc800() {
   return (neuron0x21a7880()*0.177361);
}

double NNfunction_sb_cLsR::synapse0x21cce80() {
   return (neuron0x21a7aa0()*-1.18206);
}

double NNfunction_sb_cLsR::synapse0x21ccec0() {
   return (neuron0x21a7de0()*-0.0422868);
}

double NNfunction_sb_cLsR::synapse0x21ccf00() {
   return (neuron0x21a8120()*-0.0794373);
}

double NNfunction_sb_cLsR::synapse0x21ccf40() {
   return (neuron0x21a8460()*0.148706);
}

double NNfunction_sb_cLsR::synapse0x21ccf80() {
   return (neuron0x21a87a0()*0.0589417);
}

double NNfunction_sb_cLsR::synapse0x21ccfc0() {
   return (neuron0x21a8ae0()*-0.120908);
}

double NNfunction_sb_cLsR::synapse0x21cd340() {
   return (neuron0x21a3f20()*0.00877855);
}

double NNfunction_sb_cLsR::synapse0x21cd380() {
   return (neuron0x21a4260()*-0.129287);
}

double NNfunction_sb_cLsR::synapse0x21cd3c0() {
   return (neuron0x21a45a0()*0.0536007);
}

double NNfunction_sb_cLsR::synapse0x21cd400() {
   return (neuron0x21a48e0()*-0.158859);
}

double NNfunction_sb_cLsR::synapse0x21cd440() {
   return (neuron0x21a4c20()*0.234806);
}

double NNfunction_sb_cLsR::synapse0x21cd480() {
   return (neuron0x21a4f60()*0.105813);
}

double NNfunction_sb_cLsR::synapse0x21cd4c0() {
   return (neuron0x21a52a0()*0.0506752);
}

double NNfunction_sb_cLsR::synapse0x21cd500() {
   return (neuron0x21a55e0()*-0.242952);
}

double NNfunction_sb_cLsR::synapse0x21cd540() {
   return (neuron0x21a5920()*-0.172428);
}

double NNfunction_sb_cLsR::synapse0x21cd580() {
   return (neuron0x21a5c60()*-0.192354);
}

double NNfunction_sb_cLsR::synapse0x21cd5c0() {
   return (neuron0x21a5fa0()*0.387485);
}

double NNfunction_sb_cLsR::synapse0x21cd600() {
   return (neuron0x21a62e0()*-0.409452);
}

double NNfunction_sb_cLsR::synapse0x21cd640() {
   return (neuron0x21a6620()*-0.494947);
}

double NNfunction_sb_cLsR::synapse0x21cd680() {
   return (neuron0x21a6960()*-0.511735);
}

double NNfunction_sb_cLsR::synapse0x21cd6c0() {
   return (neuron0x21a6ca0()*-0.025907);
}

double NNfunction_sb_cLsR::synapse0x21cd700() {
   return (neuron0x21a6fe0()*-0.00677815);
}

double NNfunction_sb_cLsR::synapse0x21cd190() {
   return (neuron0x21a7320()*0.0168765);
}

double NNfunction_sb_cLsR::synapse0x21cd1d0() {
   return (neuron0x21a7880()*-0.270483);
}

double NNfunction_sb_cLsR::synapse0x21cd850() {
   return (neuron0x21a7aa0()*-0.269545);
}

double NNfunction_sb_cLsR::synapse0x21cd890() {
   return (neuron0x21a7de0()*0.418006);
}

double NNfunction_sb_cLsR::synapse0x21cd8d0() {
   return (neuron0x21a8120()*0.358783);
}

double NNfunction_sb_cLsR::synapse0x21cd910() {
   return (neuron0x21a8460()*0.0699559);
}

double NNfunction_sb_cLsR::synapse0x21cd950() {
   return (neuron0x21a87a0()*0.563945);
}

double NNfunction_sb_cLsR::synapse0x21cd990() {
   return (neuron0x21a8ae0()*0.0736282);
}

double NNfunction_sb_cLsR::synapse0x21a9f30() {
   return (neuron0x21a8f80()*1.58579);
}

double NNfunction_sb_cLsR::synapse0x21a9f70() {
   return (neuron0x21a9890()*0.634459);
}

double NNfunction_sb_cLsR::synapse0x21ab440() {
   return (neuron0x21aa370()*-0.609182);
}

double NNfunction_sb_cLsR::synapse0x21ab480() {
   return (neuron0x1f6d740()*-1.64221);
}

double NNfunction_sb_cLsR::synapse0x21abe10() {
   return (neuron0x21ab190()*-0.259998);
}

double NNfunction_sb_cLsR::synapse0x21abe50() {
   return (neuron0x21abb60()*-1.18596);
}

double NNfunction_sb_cLsR::synapse0x21acbe0() {
   return (neuron0x21ac930()*-1.32548);
}

double NNfunction_sb_cLsR::synapse0x21acc20() {
   return (neuron0x21ad300()*-0.276283);
}

double NNfunction_sb_cLsR::synapse0x21ad5b0() {
   return (neuron0x21adcd0()*4.89006);
}

double NNfunction_sb_cLsR::synapse0x21ad5f0() {
   return (neuron0x21ae7b0()*-0.151165);
}

double NNfunction_sb_cLsR::synapse0x21adf80() {
   return (neuron0x21af180()*-2.46062);
}

double NNfunction_sb_cLsR::synapse0x21adfc0() {
   return (neuron0x21ac260()*0.824531);
}

double NNfunction_sb_cLsR::synapse0x21aea60() {
   return (neuron0x21b0d30()*1.11958);
}

double NNfunction_sb_cLsR::synapse0x21aeaa0() {
   return (neuron0x21b1700()*1.20225);
}

double NNfunction_sb_cLsR::synapse0x21af430() {
   return (neuron0x21b20d0()*-1.14664);
}

double NNfunction_sb_cLsR::synapse0x21af470() {
   return (neuron0x21b2aa0()*0.335345);
}

double NNfunction_sb_cLsR::synapse0x21ac510() {
   return (neuron0x21b48b0()*1.30213);
}

double NNfunction_sb_cLsR::synapse0x21ac550() {
   return (neuron0x21b4b90()*1.12883);
}

double NNfunction_sb_cLsR::synapse0x21b0fe0() {
   return (neuron0x21b5560()*0.278675);
}

double NNfunction_sb_cLsR::synapse0x21b1020() {
   return (neuron0x21b5f30()*0.577013);
}

double NNfunction_sb_cLsR::synapse0x21b19b0() {
   return (neuron0x21b6900()*-0.277256);
}

double NNfunction_sb_cLsR::synapse0x21b19f0() {
   return (neuron0x21b72d0()*0.272643);
}

double NNfunction_sb_cLsR::synapse0x21b2380() {
   return (neuron0x21afe20()*0.60999);
}

double NNfunction_sb_cLsR::synapse0x21b23c0() {
   return (neuron0x21b07f0()*-0.188862);
}

double NNfunction_sb_cLsR::synapse0x21b2d50() {
   return (neuron0x21ba060()*-2.908);
}

double NNfunction_sb_cLsR::synapse0x21b2d90() {
   return (neuron0x21baa30()*-0.525015);
}

double NNfunction_sb_cLsR::synapse0x21a6ec0() {
   return (neuron0x21bb400()*1.22936);
}

double NNfunction_sb_cLsR::synapse0x21a6f00() {
   return (neuron0x21bbdd0()*0.417252);
}

double NNfunction_sb_cLsR::synapse0x21b4e40() {
   return (neuron0x21bc7a0()*8.52712);
}

double NNfunction_sb_cLsR::synapse0x21b4e80() {
   return (neuron0x21bd170()*-0.482112);
}

double NNfunction_sb_cLsR::synapse0x21b5810() {
   return (neuron0x21bdb40()*0.592794);
}

double NNfunction_sb_cLsR::synapse0x21b5850() {
   return (neuron0x21be510()*0.582816);
}

double NNfunction_sb_cLsR::synapse0x21b61e0() {
   return (neuron0x21b45a0()*0.191428);
}

double NNfunction_sb_cLsR::synapse0x21b6220() {
   return (neuron0x21c10f0()*-1.13658);
}

double NNfunction_sb_cLsR::synapse0x21b6bb0() {
   return (neuron0x21c1ac0()*-1.37683);
}

double NNfunction_sb_cLsR::synapse0x21b6bf0() {
   return (neuron0x21c2490()*-1.01837);
}

double NNfunction_sb_cLsR::synapse0x21b7580() {
   return (neuron0x21c2e60()*-0.334287);
}

double NNfunction_sb_cLsR::synapse0x21b75c0() {
   return (neuron0x21c3830()*0.970144);
}

double NNfunction_sb_cLsR::synapse0x21b00d0() {
   return (neuron0x21c4200()*0.0326697);
}

double NNfunction_sb_cLsR::synapse0x21b0110() {
   return (neuron0x21c4bd0()*1.05113);
}

double NNfunction_sb_cLsR::synapse0x21b9980() {
   return (neuron0x21c55a0()*-0.0947423);
}

double NNfunction_sb_cLsR::synapse0x21b99c0() {
   return (neuron0x21c6180()*-1.85089);
}

double NNfunction_sb_cLsR::synapse0x21ba310() {
   return (neuron0x21c6b50()*0.424684);
}

double NNfunction_sb_cLsR::synapse0x21ba350() {
   return (neuron0x21b79d0()*1.72036);
}

double NNfunction_sb_cLsR::synapse0x21bace0() {
   return (neuron0x21b83a0()*-0.0902527);
}

double NNfunction_sb_cLsR::synapse0x21bad20() {
   return (neuron0x21b8d70()*-0.270786);
}

double NNfunction_sb_cLsR::synapse0x21bb6b0() {
   return (neuron0x21cb3b0()*1.70293);
}

double NNfunction_sb_cLsR::synapse0x21bb6f0() {
   return (neuron0x21cbc60()*0.0525169);
}

double NNfunction_sb_cLsR::synapse0x21bc080() {
   return (neuron0x21cc630()*1.27646);
}

double NNfunction_sb_cLsR::synapse0x21bc0c0() {
   return (neuron0x21cd000()*-1.03961);
}

double NNfunction_sb_cLsR::synapse0x21be7c0() {
   return (neuron0x21a8f80()*-0.625825);
}

double NNfunction_sb_cLsR::synapse0x21be800() {
   return (neuron0x21a9890()*-0.157993);
}

double NNfunction_sb_cLsR::synapse0x21b3d80() {
   return (neuron0x21aa370()*0.259841);
}

double NNfunction_sb_cLsR::synapse0x21b3dc0() {
   return (neuron0x1f6d740()*0.896781);
}

double NNfunction_sb_cLsR::synapse0x21c13a0() {
   return (neuron0x21ab190()*-0.241528);
}

double NNfunction_sb_cLsR::synapse0x21c13e0() {
   return (neuron0x21abb60()*0.235829);
}

double NNfunction_sb_cLsR::synapse0x21c1d70() {
   return (neuron0x21ac930()*0.422889);
}

double NNfunction_sb_cLsR::synapse0x21c1db0() {
   return (neuron0x21ad300()*-0.00174863);
}

double NNfunction_sb_cLsR::synapse0x21c2740() {
   return (neuron0x21adcd0()*0.223288);
}

double NNfunction_sb_cLsR::synapse0x21c2780() {
   return (neuron0x21ae7b0()*0.17015);
}

double NNfunction_sb_cLsR::synapse0x21c3110() {
   return (neuron0x21af180()*1.93268);
}

double NNfunction_sb_cLsR::synapse0x21c3150() {
   return (neuron0x21ac260()*-0.162881);
}

double NNfunction_sb_cLsR::synapse0x21c3ae0() {
   return (neuron0x21b0d30()*-0.0234604);
}

double NNfunction_sb_cLsR::synapse0x21c3b20() {
   return (neuron0x21b1700()*-0.70652);
}

double NNfunction_sb_cLsR::synapse0x21c44b0() {
   return (neuron0x21b20d0()*0.181882);
}

double NNfunction_sb_cLsR::synapse0x21c44f0() {
   return (neuron0x21b2aa0()*-0.102843);
}

double NNfunction_sb_cLsR::synapse0x21c4e80() {
   return (neuron0x21b48b0()*-0.37977);
}

double NNfunction_sb_cLsR::synapse0x21c4ec0() {
   return (neuron0x21b4b90()*0.25274);
}

double NNfunction_sb_cLsR::synapse0x21c5850() {
   return (neuron0x21b5560()*-1.39175);
}

double NNfunction_sb_cLsR::synapse0x21c5890() {
   return (neuron0x21b5f30()*0.162842);
}

double NNfunction_sb_cLsR::synapse0x21c6430() {
   return (neuron0x21b6900()*0.14262);
}

double NNfunction_sb_cLsR::synapse0x21c6470() {
   return (neuron0x21b72d0()*-0.212421);
}

double NNfunction_sb_cLsR::synapse0x21c6e00() {
   return (neuron0x21afe20()*-0.280115);
}

double NNfunction_sb_cLsR::synapse0x21c6e40() {
   return (neuron0x21b07f0()*0.227487);
}

double NNfunction_sb_cLsR::synapse0x21b7c80() {
   return (neuron0x21ba060()*-0.978663);
}

double NNfunction_sb_cLsR::synapse0x21b7cc0() {
   return (neuron0x21baa30()*0.0598432);
}

double NNfunction_sb_cLsR::synapse0x21b8650() {
   return (neuron0x21bb400()*-0.357128);
}

double NNfunction_sb_cLsR::synapse0x21b8690() {
   return (neuron0x21bbdd0()*-0.226654);
}

double NNfunction_sb_cLsR::synapse0x21b9020() {
   return (neuron0x21bc7a0()*-0.0680292);
}

double NNfunction_sb_cLsR::synapse0x21b9060() {
   return (neuron0x21bd170()*-0.00411489);
}

double NNfunction_sb_cLsR::synapse0x21cb540() {
   return (neuron0x21bdb40()*-0.228231);
}

double NNfunction_sb_cLsR::synapse0x21cb580() {
   return (neuron0x21be510()*-0.00521651);
}

double NNfunction_sb_cLsR::synapse0x21cbf10() {
   return (neuron0x21b45a0()*0.243655);
}

double NNfunction_sb_cLsR::synapse0x21cbf50() {
   return (neuron0x21c10f0()*0.215364);
}

double NNfunction_sb_cLsR::synapse0x21cc8e0() {
   return (neuron0x21c1ac0()*0.534672);
}

double NNfunction_sb_cLsR::synapse0x21cc920() {
   return (neuron0x21c2490()*-1.80012);
}

double NNfunction_sb_cLsR::synapse0x21cd2b0() {
   return (neuron0x21c2e60()*0.755788);
}

double NNfunction_sb_cLsR::synapse0x21cd2f0() {
   return (neuron0x21c3830()*0.93052);
}

double NNfunction_sb_cLsR::synapse0x21a91a0() {
   return (neuron0x21c4200()*-0.235939);
}

double NNfunction_sb_cLsR::synapse0x21a91e0() {
   return (neuron0x21c4bd0()*-0.863537);
}

double NNfunction_sb_cLsR::synapse0x21bca50() {
   return (neuron0x21c55a0()*0.346666);
}

double NNfunction_sb_cLsR::synapse0x21bca90() {
   return (neuron0x21c6180()*0.531043);
}

double NNfunction_sb_cLsR::synapse0x21cd9d0() {
   return (neuron0x21c6b50()*-0.319535);
}

double NNfunction_sb_cLsR::synapse0x21cda10() {
   return (neuron0x21b79d0()*-0.126682);
}

double NNfunction_sb_cLsR::synapse0x21cda50() {
   return (neuron0x21b83a0()*0.0165865);
}

double NNfunction_sb_cLsR::synapse0x21cda90() {
   return (neuron0x21b8d70()*0.365695);
}

double NNfunction_sb_cLsR::synapse0x21d4940() {
   return (neuron0x21cb3b0()*-0.193803);
}

double NNfunction_sb_cLsR::synapse0x21d4980() {
   return (neuron0x21cbc60()*0.120868);
}

double NNfunction_sb_cLsR::synapse0x21d49c0() {
   return (neuron0x21cc630()*-0.18759);
}

double NNfunction_sb_cLsR::synapse0x21d4a00() {
   return (neuron0x21cd000()*0.205634);
}

double NNfunction_sb_cLsR::synapse0x21d4d80() {
   return (neuron0x21a8f80()*0.164308);
}

double NNfunction_sb_cLsR::synapse0x21d4dc0() {
   return (neuron0x21a9890()*-0.455194);
}

double NNfunction_sb_cLsR::synapse0x21d4e00() {
   return (neuron0x21aa370()*0.484686);
}

double NNfunction_sb_cLsR::synapse0x21d4e40() {
   return (neuron0x1f6d740()*1.35267);
}

double NNfunction_sb_cLsR::synapse0x21d4e80() {
   return (neuron0x21ab190()*-0.589027);
}

double NNfunction_sb_cLsR::synapse0x21d4ec0() {
   return (neuron0x21abb60()*0.32182);
}

double NNfunction_sb_cLsR::synapse0x21d4f00() {
   return (neuron0x21ac930()*0.789691);
}

double NNfunction_sb_cLsR::synapse0x21d4f40() {
   return (neuron0x21ad300()*0.061883);
}

double NNfunction_sb_cLsR::synapse0x21d4f80() {
   return (neuron0x21adcd0()*0.962761);
}

double NNfunction_sb_cLsR::synapse0x21d4fc0() {
   return (neuron0x21ae7b0()*0.546895);
}

double NNfunction_sb_cLsR::synapse0x21d5000() {
   return (neuron0x21af180()*0.109717);
}

double NNfunction_sb_cLsR::synapse0x21d5040() {
   return (neuron0x21ac260()*-0.587767);
}

double NNfunction_sb_cLsR::synapse0x21d5080() {
   return (neuron0x21b0d30()*-0.207963);
}

double NNfunction_sb_cLsR::synapse0x21d50c0() {
   return (neuron0x21b1700()*-0.557057);
}

double NNfunction_sb_cLsR::synapse0x21d5100() {
   return (neuron0x21b20d0()*0.826721);
}

double NNfunction_sb_cLsR::synapse0x21d5140() {
   return (neuron0x21b2aa0()*-0.293796);
}

double NNfunction_sb_cLsR::synapse0x21d4bd0() {
   return (neuron0x21b48b0()*-0.643761);
}

double NNfunction_sb_cLsR::synapse0x21d4c10() {
   return (neuron0x21b4b90()*0.30124);
}

double NNfunction_sb_cLsR::synapse0x21d5290() {
   return (neuron0x21b5560()*-0.415036);
}

double NNfunction_sb_cLsR::synapse0x21d52d0() {
   return (neuron0x21b5f30()*0.159802);
}

double NNfunction_sb_cLsR::synapse0x21d5310() {
   return (neuron0x21b6900()*0.449738);
}

double NNfunction_sb_cLsR::synapse0x21d5350() {
   return (neuron0x21b72d0()*-0.4446);
}

double NNfunction_sb_cLsR::synapse0x21d5390() {
   return (neuron0x21afe20()*-0.723589);
}

double NNfunction_sb_cLsR::synapse0x21d53d0() {
   return (neuron0x21b07f0()*0.399021);
}

double NNfunction_sb_cLsR::synapse0x21d5410() {
   return (neuron0x21ba060()*0.136969);
}

double NNfunction_sb_cLsR::synapse0x21d5450() {
   return (neuron0x21baa30()*0.172546);
}

double NNfunction_sb_cLsR::synapse0x21d5490() {
   return (neuron0x21bb400()*-0.586162);
}

double NNfunction_sb_cLsR::synapse0x21d54d0() {
   return (neuron0x21bbdd0()*-0.501735);
}

double NNfunction_sb_cLsR::synapse0x21d5510() {
   return (neuron0x21bc7a0()*3.73473);
}

double NNfunction_sb_cLsR::synapse0x21d5550() {
   return (neuron0x21bd170()*0.0783293);
}

double NNfunction_sb_cLsR::synapse0x21d5590() {
   return (neuron0x21bdb40()*-0.500959);
}

double NNfunction_sb_cLsR::synapse0x21d55d0() {
   return (neuron0x21be510()*-0.138196);
}

double NNfunction_sb_cLsR::synapse0x21d5180() {
   return (neuron0x21b45a0()*0.549847);
}

double NNfunction_sb_cLsR::synapse0x21d51c0() {
   return (neuron0x21c10f0()*0.571319);
}

double NNfunction_sb_cLsR::synapse0x21d5200() {
   return (neuron0x21c1ac0()*0.285545);
}

double NNfunction_sb_cLsR::synapse0x21d5240() {
   return (neuron0x21c2490()*-0.229904);
}

double NNfunction_sb_cLsR::synapse0x21d5820() {
   return (neuron0x21c2e60()*3.03528);
}

double NNfunction_sb_cLsR::synapse0x21d5860() {
   return (neuron0x21c3830()*0.030726);
}

double NNfunction_sb_cLsR::synapse0x21d58a0() {
   return (neuron0x21c4200()*-0.596113);
}

double NNfunction_sb_cLsR::synapse0x21d58e0() {
   return (neuron0x21c4bd0()*-1.24579);
}

double NNfunction_sb_cLsR::synapse0x21d5920() {
   return (neuron0x21c55a0()*0.677352);
}

double NNfunction_sb_cLsR::synapse0x21d5960() {
   return (neuron0x21c6180()*0.763816);
}

double NNfunction_sb_cLsR::synapse0x21d59a0() {
   return (neuron0x21c6b50()*-0.545082);
}

double NNfunction_sb_cLsR::synapse0x21d59e0() {
   return (neuron0x21b79d0()*-0.017543);
}

double NNfunction_sb_cLsR::synapse0x21d5a20() {
   return (neuron0x21b83a0()*-0.0243025);
}

double NNfunction_sb_cLsR::synapse0x21d5a60() {
   return (neuron0x21b8d70()*0.966683);
}

double NNfunction_sb_cLsR::synapse0x21d5aa0() {
   return (neuron0x21cb3b0()*0.0457695);
}

double NNfunction_sb_cLsR::synapse0x21d5ae0() {
   return (neuron0x21cbc60()*0.365037);
}

double NNfunction_sb_cLsR::synapse0x21d5b20() {
   return (neuron0x21cc630()*-0.176765);
}

double NNfunction_sb_cLsR::synapse0x21d5b60() {
   return (neuron0x21cd000()*0.680336);
}

double NNfunction_sb_cLsR::synapse0x21d5ee0() {
   return (neuron0x21a8f80()*1.54236);
}

double NNfunction_sb_cLsR::synapse0x21d5f20() {
   return (neuron0x21a9890()*0.72076);
}

double NNfunction_sb_cLsR::synapse0x21d5f60() {
   return (neuron0x21aa370()*-0.00716361);
}

double NNfunction_sb_cLsR::synapse0x21d5fa0() {
   return (neuron0x1f6d740()*0.410331);
}

double NNfunction_sb_cLsR::synapse0x21d5fe0() {
   return (neuron0x21ab190()*1.55353);
}

double NNfunction_sb_cLsR::synapse0x21d6020() {
   return (neuron0x21abb60()*-0.407558);
}

double NNfunction_sb_cLsR::synapse0x21d6060() {
   return (neuron0x21ac930()*-0.62369);
}

double NNfunction_sb_cLsR::synapse0x21d60a0() {
   return (neuron0x21ad300()*-1.6467);
}

double NNfunction_sb_cLsR::synapse0x21d60e0() {
   return (neuron0x21adcd0()*4.50324);
}

double NNfunction_sb_cLsR::synapse0x21d6120() {
   return (neuron0x21ae7b0()*-1.7529);
}

double NNfunction_sb_cLsR::synapse0x21d6160() {
   return (neuron0x21af180()*0.683496);
}

double NNfunction_sb_cLsR::synapse0x21d61a0() {
   return (neuron0x21ac260()*0.167214);
}

double NNfunction_sb_cLsR::synapse0x21d61e0() {
   return (neuron0x21b0d30()*-3.35328);
}

double NNfunction_sb_cLsR::synapse0x21d6220() {
   return (neuron0x21b1700()*0.820371);
}

double NNfunction_sb_cLsR::synapse0x21d6260() {
   return (neuron0x21b20d0()*-0.497663);
}

double NNfunction_sb_cLsR::synapse0x21d62a0() {
   return (neuron0x21b2aa0()*1.22484);
}

double NNfunction_sb_cLsR::synapse0x21d5d30() {
   return (neuron0x21b48b0()*1.07736);
}

double NNfunction_sb_cLsR::synapse0x21d5d70() {
   return (neuron0x21b4b90()*-4.68276);
}

double NNfunction_sb_cLsR::synapse0x21d63f0() {
   return (neuron0x21b5560()*1.92742);
}

double NNfunction_sb_cLsR::synapse0x21d6430() {
   return (neuron0x21b5f30()*-1.86681);
}

double NNfunction_sb_cLsR::synapse0x21d6470() {
   return (neuron0x21b6900()*-1.70545);
}

double NNfunction_sb_cLsR::synapse0x21d64b0() {
   return (neuron0x21b72d0()*1.19063);
}

double NNfunction_sb_cLsR::synapse0x21d64f0() {
   return (neuron0x21afe20()*-0.103035);
}

double NNfunction_sb_cLsR::synapse0x21d6530() {
   return (neuron0x21b07f0()*1.27578);
}

double NNfunction_sb_cLsR::synapse0x21d6570() {
   return (neuron0x21ba060()*-3.05696);
}

double NNfunction_sb_cLsR::synapse0x21d65b0() {
   return (neuron0x21baa30()*-0.856895);
}

double NNfunction_sb_cLsR::synapse0x21d65f0() {
   return (neuron0x21bb400()*1.13098);
}

double NNfunction_sb_cLsR::synapse0x21d6630() {
   return (neuron0x21bbdd0()*0.355697);
}

double NNfunction_sb_cLsR::synapse0x21d6670() {
   return (neuron0x21bc7a0()*1.77211);
}

double NNfunction_sb_cLsR::synapse0x21d66b0() {
   return (neuron0x21bd170()*-1.19822);
}

double NNfunction_sb_cLsR::synapse0x21d66f0() {
   return (neuron0x21bdb40()*0.933764);
}

double NNfunction_sb_cLsR::synapse0x21d6730() {
   return (neuron0x21be510()*1.14866);
}

double NNfunction_sb_cLsR::synapse0x21d62e0() {
   return (neuron0x21b45a0()*-0.922811);
}

double NNfunction_sb_cLsR::synapse0x21d6320() {
   return (neuron0x21c10f0()*0.959005);
}

double NNfunction_sb_cLsR::synapse0x21d6360() {
   return (neuron0x21c1ac0()*-0.864234);
}

double NNfunction_sb_cLsR::synapse0x21d63a0() {
   return (neuron0x21c2490()*0.981168);
}

double NNfunction_sb_cLsR::synapse0x21d6980() {
   return (neuron0x21c2e60()*-0.902496);
}

double NNfunction_sb_cLsR::synapse0x21d69c0() {
   return (neuron0x21c3830()*-1.04349);
}

double NNfunction_sb_cLsR::synapse0x21d6a00() {
   return (neuron0x21c4200()*0.0726976);
}

double NNfunction_sb_cLsR::synapse0x21d6a40() {
   return (neuron0x21c4bd0()*1.80067);
}

double NNfunction_sb_cLsR::synapse0x21d6a80() {
   return (neuron0x21c55a0()*-1.13871);
}

double NNfunction_sb_cLsR::synapse0x21d6ac0() {
   return (neuron0x21c6180()*-1.68632);
}

double NNfunction_sb_cLsR::synapse0x21d6b00() {
   return (neuron0x21c6b50()*0.657672);
}

double NNfunction_sb_cLsR::synapse0x21d6b40() {
   return (neuron0x21b79d0()*1.45637);
}

double NNfunction_sb_cLsR::synapse0x21d6b80() {
   return (neuron0x21b83a0()*1.25249);
}

double NNfunction_sb_cLsR::synapse0x21d6bc0() {
   return (neuron0x21b8d70()*0.316042);
}

double NNfunction_sb_cLsR::synapse0x21d6c00() {
   return (neuron0x21cb3b0()*1.90302);
}

double NNfunction_sb_cLsR::synapse0x21d6c40() {
   return (neuron0x21cbc60()*-1.83809);
}

double NNfunction_sb_cLsR::synapse0x21d6c80() {
   return (neuron0x21cc630()*1.43984);
}

double NNfunction_sb_cLsR::synapse0x21d6cc0() {
   return (neuron0x21cd000()*-1.18806);
}

double NNfunction_sb_cLsR::synapse0x21d7040() {
   return (neuron0x21a8f80()*-0.251914);
}

double NNfunction_sb_cLsR::synapse0x21d7080() {
   return (neuron0x21a9890()*0.219909);
}

double NNfunction_sb_cLsR::synapse0x21d70c0() {
   return (neuron0x21aa370()*-0.277497);
}

double NNfunction_sb_cLsR::synapse0x21d7100() {
   return (neuron0x1f6d740()*-0.517944);
}

double NNfunction_sb_cLsR::synapse0x21d7140() {
   return (neuron0x21ab190()*0.30692);
}

double NNfunction_sb_cLsR::synapse0x21d7180() {
   return (neuron0x21abb60()*-0.312201);
}

double NNfunction_sb_cLsR::synapse0x21d71c0() {
   return (neuron0x21ac930()*-0.491418);
}

double NNfunction_sb_cLsR::synapse0x21d7200() {
   return (neuron0x21ad300()*-0.0259582);
}

double NNfunction_sb_cLsR::synapse0x21d7240() {
   return (neuron0x21adcd0()*0.730949);
}

double NNfunction_sb_cLsR::synapse0x21d7280() {
   return (neuron0x21ae7b0()*-0.239881);
}

double NNfunction_sb_cLsR::synapse0x21d72c0() {
   return (neuron0x21af180()*1.86863);
}

double NNfunction_sb_cLsR::synapse0x21d7300() {
   return (neuron0x21ac260()*0.259596);
}

double NNfunction_sb_cLsR::synapse0x21d7340() {
   return (neuron0x21b0d30()*-0.0300474);
}

double NNfunction_sb_cLsR::synapse0x21d7380() {
   return (neuron0x21b1700()*-0.372273);
}

double NNfunction_sb_cLsR::synapse0x21d73c0() {
   return (neuron0x21b20d0()*-0.287995);
}

double NNfunction_sb_cLsR::synapse0x21d7400() {
   return (neuron0x21b2aa0()*0.136651);
}

double NNfunction_sb_cLsR::synapse0x21d6e90() {
   return (neuron0x21b48b0()*0.412421);
}

double NNfunction_sb_cLsR::synapse0x21d6ed0() {
   return (neuron0x21b4b90()*-0.349493);
}

double NNfunction_sb_cLsR::synapse0x21d7550() {
   return (neuron0x21b5560()*-0.662282);
}

double NNfunction_sb_cLsR::synapse0x21d7590() {
   return (neuron0x21b5f30()*-0.176394);
}

double NNfunction_sb_cLsR::synapse0x21d75d0() {
   return (neuron0x21b6900()*-0.235145);
}

double NNfunction_sb_cLsR::synapse0x21d7610() {
   return (neuron0x21b72d0()*0.251976);
}

double NNfunction_sb_cLsR::synapse0x21d7650() {
   return (neuron0x21afe20()*0.373853);
}

double NNfunction_sb_cLsR::synapse0x21d7690() {
   return (neuron0x21b07f0()*-0.178324);
}

double NNfunction_sb_cLsR::synapse0x21d76d0() {
   return (neuron0x21ba060()*-0.881713);
}

double NNfunction_sb_cLsR::synapse0x21d7710() {
   return (neuron0x21baa30()*-0.116445);
}

double NNfunction_sb_cLsR::synapse0x21d7750() {
   return (neuron0x21bb400()*-0.0559468);
}

double NNfunction_sb_cLsR::synapse0x21d7790() {
   return (neuron0x21bbdd0()*0.308323);
}

double NNfunction_sb_cLsR::synapse0x21d77d0() {
   return (neuron0x21bc7a0()*-1.90988);
}

double NNfunction_sb_cLsR::synapse0x21d7810() {
   return (neuron0x21bd170()*-0.0279755);
}

double NNfunction_sb_cLsR::synapse0x21d7850() {
   return (neuron0x21bdb40()*0.32955);
}

double NNfunction_sb_cLsR::synapse0x21d7890() {
   return (neuron0x21be510()*0.0665635);
}

double NNfunction_sb_cLsR::synapse0x21d7440() {
   return (neuron0x21b45a0()*-0.310462);
}

double NNfunction_sb_cLsR::synapse0x21d7480() {
   return (neuron0x21c10f0()*0.122351);
}

double NNfunction_sb_cLsR::synapse0x21d74c0() {
   return (neuron0x21c1ac0()*-0.0106489);
}

double NNfunction_sb_cLsR::synapse0x21d7500() {
   return (neuron0x21c2490()*-1.73963);
}

double NNfunction_sb_cLsR::synapse0x21d7ae0() {
   return (neuron0x21c2e60()*-1.54308);
}

double NNfunction_sb_cLsR::synapse0x21d7b20() {
   return (neuron0x21c3830()*1.50106);
}

double NNfunction_sb_cLsR::synapse0x21d7b60() {
   return (neuron0x21c4200()*0.301109);
}

double NNfunction_sb_cLsR::synapse0x21d7ba0() {
   return (neuron0x21c4bd0()*0.843144);
}

double NNfunction_sb_cLsR::synapse0x21d7be0() {
   return (neuron0x21c55a0()*-0.429747);
}

double NNfunction_sb_cLsR::synapse0x21d7c20() {
   return (neuron0x21c6180()*-0.526545);
}

double NNfunction_sb_cLsR::synapse0x21d7c60() {
   return (neuron0x21c6b50()*0.361614);
}

double NNfunction_sb_cLsR::synapse0x21d7ca0() {
   return (neuron0x21b79d0()*-0.0895734);
}

double NNfunction_sb_cLsR::synapse0x21d7ce0() {
   return (neuron0x21b83a0()*-0.0108487);
}

double NNfunction_sb_cLsR::synapse0x21d7d20() {
   return (neuron0x21b8d70()*-0.495628);
}

double NNfunction_sb_cLsR::synapse0x21d7d60() {
   return (neuron0x21cb3b0()*0.126342);
}

double NNfunction_sb_cLsR::synapse0x21d7da0() {
   return (neuron0x21cbc60()*-0.178226);
}

double NNfunction_sb_cLsR::synapse0x21d7de0() {
   return (neuron0x21cc630()*0.173138);
}

double NNfunction_sb_cLsR::synapse0x21d7e20() {
   return (neuron0x21cd000()*-0.325949);
}

double NNfunction_sb_cLsR::synapse0x21a8f40() {
   return (neuron0x21d4200()*-8.04376);
}

double NNfunction_sb_cLsR::synapse0x21d8080() {
   return (neuron0x21d45a0()*4.26452);
}

double NNfunction_sb_cLsR::synapse0x21d80c0() {
   return (neuron0x21d4a40()*5.71787);
}

double NNfunction_sb_cLsR::synapse0x21d8100() {
   return (neuron0x21d5ba0()*-7.40458);
}

double NNfunction_sb_cLsR::synapse0x21d8140() {
   return (neuron0x21d6d00()*4.23697);
}

