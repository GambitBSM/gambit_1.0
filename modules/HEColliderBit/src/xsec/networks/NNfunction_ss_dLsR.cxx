#include "NNfunction_ss_dLsR.h"
#include <cmath>

double NNfunction_ss_dLsR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5266)/15.3195;
   input1 = (in1 - 1.68006)/1138.02;
   input2 = (in2 - 667.325)/627.042;
   input3 = (in3 - -51.5594)/794.304;
   input4 = (in4 - 1037.77)/940.418;
   input5 = (in5 - 869.989)/926.306;
   input6 = (in6 - 899.243)/937.135;
   input7 = (in7 - 905.979)/916.277;
   input8 = (in8 - 923.508)/977.813;
   input9 = (in9 - 901.819)/959.165;
   input10 = (in10 - 988.806)/964.805;
   input11 = (in11 - 375.282)/378.547;
   input12 = (in12 - 721.134)/867.087;
   input13 = (in13 - 501.488)/515.834;
   input14 = (in14 - 700.26)/795.222;
   input15 = (in15 - 701.73)/795.358;
   input16 = (in16 - 533.484)/554.396;
   input17 = (in17 - 762.847)/901.772;
   input18 = (in18 - 380.867)/392.388;
   input19 = (in19 - 806.143)/883.401;
   input20 = (in20 - -7.27266)/485.215;
   input21 = (in21 - 0.851221)/1161.16;
   input22 = (in22 - 5.5038)/1202.27;
   input23 = (in23 - -196.809)/589.646;
   switch(index) {
     case 0:
         return neuron0x1f094a0();
     default:
         return 0.;
   }
}

double NNfunction_ss_dLsR::Value(int index, double* input) {
   input0 = (input[0] - 23.5266)/15.3195;
   input1 = (input[1] - 1.68006)/1138.02;
   input2 = (input[2] - 667.325)/627.042;
   input3 = (input[3] - -51.5594)/794.304;
   input4 = (input[4] - 1037.77)/940.418;
   input5 = (input[5] - 869.989)/926.306;
   input6 = (input[6] - 899.243)/937.135;
   input7 = (input[7] - 905.979)/916.277;
   input8 = (input[8] - 923.508)/977.813;
   input9 = (input[9] - 901.819)/959.165;
   input10 = (input[10] - 988.806)/964.805;
   input11 = (input[11] - 375.282)/378.547;
   input12 = (input[12] - 721.134)/867.087;
   input13 = (input[13] - 501.488)/515.834;
   input14 = (input[14] - 700.26)/795.222;
   input15 = (input[15] - 701.73)/795.358;
   input16 = (input[16] - 533.484)/554.396;
   input17 = (input[17] - 762.847)/901.772;
   input18 = (input[18] - 380.867)/392.388;
   input19 = (input[19] - 806.143)/883.401;
   input20 = (input[20] - -7.27266)/485.215;
   input21 = (input[21] - 0.851221)/1161.16;
   input22 = (input[22] - 5.5038)/1202.27;
   input23 = (input[23] - -196.809)/589.646;
   switch(index) {
     case 0:
         return neuron0x1f094a0();
     default:
         return 0.;
   }
}

double NNfunction_ss_dLsR::neuron0x1ed5560() {
   return input0;
}

double NNfunction_ss_dLsR::neuron0x1ed58a0() {
   return input1;
}

double NNfunction_ss_dLsR::neuron0x1ed5be0() {
   return input2;
}

double NNfunction_ss_dLsR::neuron0x1ed5f20() {
   return input3;
}

double NNfunction_ss_dLsR::neuron0x1ed6260() {
   return input4;
}

double NNfunction_ss_dLsR::neuron0x1ed65a0() {
   return input5;
}

double NNfunction_ss_dLsR::neuron0x1ed68e0() {
   return input6;
}

double NNfunction_ss_dLsR::neuron0x1ed6c20() {
   return input7;
}

double NNfunction_ss_dLsR::neuron0x1ed6f60() {
   return input8;
}

double NNfunction_ss_dLsR::neuron0x1ed72a0() {
   return input9;
}

double NNfunction_ss_dLsR::neuron0x1ed75e0() {
   return input10;
}

double NNfunction_ss_dLsR::neuron0x1ed7920() {
   return input11;
}

double NNfunction_ss_dLsR::neuron0x1ed7c60() {
   return input12;
}

double NNfunction_ss_dLsR::neuron0x1ed7fa0() {
   return input13;
}

double NNfunction_ss_dLsR::neuron0x1ed82e0() {
   return input14;
}

double NNfunction_ss_dLsR::neuron0x1ed8620() {
   return input15;
}

double NNfunction_ss_dLsR::neuron0x1ed8960() {
   return input16;
}

double NNfunction_ss_dLsR::neuron0x1ed8ec0() {
   return input17;
}

double NNfunction_ss_dLsR::neuron0x1ed90e0() {
   return input18;
}

double NNfunction_ss_dLsR::neuron0x1ed9420() {
   return input19;
}

double NNfunction_ss_dLsR::neuron0x1ed9760() {
   return input20;
}

double NNfunction_ss_dLsR::neuron0x1ed9aa0() {
   return input21;
}

double NNfunction_ss_dLsR::neuron0x1ed9de0() {
   return input22;
}

double NNfunction_ss_dLsR::neuron0x1eda120() {
   return input23;
}

double NNfunction_ss_dLsR::input0x1eda5c0() {
   double input = -0.135905;
   input += synapse0x1c953d0();
   input += synapse0x1ed5420();
   input += synapse0x1ed5460();
   input += synapse0x1eda870();
   input += synapse0x1eda8b0();
   input += synapse0x1eda8f0();
   input += synapse0x1eda930();
   input += synapse0x1eda970();
   input += synapse0x1eda9b0();
   input += synapse0x1eda9f0();
   input += synapse0x1edaa30();
   input += synapse0x1edaa70();
   input += synapse0x1edaab0();
   input += synapse0x1edaaf0();
   input += synapse0x1edab30();
   input += synapse0x1edab70();
   input += synapse0x1ed5390();
   input += synapse0x1ed53d0();
   input += synapse0x1c86c70();
   input += synapse0x1c86cb0();
   input += synapse0x1edadd0();
   input += synapse0x1edae10();
   input += synapse0x1edae50();
   input += synapse0x1edae90();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1eda5c0() {
   double input = input0x1eda5c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1edaed0() {
   double input = 0.376691;
   input += synapse0x1edb210();
   input += synapse0x1edb250();
   input += synapse0x1edb290();
   input += synapse0x1edb2d0();
   input += synapse0x1edb310();
   input += synapse0x1edb350();
   input += synapse0x1edb390();
   input += synapse0x1edb3d0();
   input += synapse0x1edb410();
   input += synapse0x1edacc0();
   input += synapse0x1edad00();
   input += synapse0x1edad40();
   input += synapse0x1edad80();
   input += synapse0x1edb660();
   input += synapse0x1edb6a0();
   input += synapse0x1edb6e0();
   input += synapse0x1edb060();
   input += synapse0x1edb0a0();
   input += synapse0x1edb830();
   input += synapse0x1edb870();
   input += synapse0x1edb8b0();
   input += synapse0x1edb8f0();
   input += synapse0x1edb930();
   input += synapse0x1edb970();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1edaed0() {
   double input = input0x1edaed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1edb9b0() {
   double input = -0.312782;
   input += synapse0x1edbcf0();
   input += synapse0x1edbd30();
   input += synapse0x1edbd70();
   input += synapse0x1edbdb0();
   input += synapse0x1edbdf0();
   input += synapse0x1edbe30();
   input += synapse0x1edbe70();
   input += synapse0x1edbeb0();
   input += synapse0x1edbef0();
   input += synapse0x1edbf30();
   input += synapse0x1edbf70();
   input += synapse0x1edbfb0();
   input += synapse0x1edbff0();
   input += synapse0x1edc030();
   input += synapse0x1edc070();
   input += synapse0x1edc0b0();
   input += synapse0x1edbb40();
   input += synapse0x1edbb80();
   input += synapse0x1c94ac0();
   input += synapse0x1c94b00();
   input += synapse0x1ec45f0();
   input += synapse0x1ec4630();
   input += synapse0x1ec4670();
   input += synapse0x1ed54a0();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1edb9b0() {
   double input = input0x1edb9b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1c95240() {
   double input = -2.63402;
   input += synapse0x1edb600();
   input += synapse0x1ed54e0();
   input += synapse0x1ed5520();
   input += synapse0x1edc200();
   input += synapse0x1edc240();
   input += synapse0x1edc280();
   input += synapse0x1edc2c0();
   input += synapse0x1edc300();
   input += synapse0x1edc340();
   input += synapse0x1edc380();
   input += synapse0x1edc3c0();
   input += synapse0x1edc400();
   input += synapse0x1edc440();
   input += synapse0x1edc480();
   input += synapse0x1edc4c0();
   input += synapse0x1edc500();
   input += synapse0x1edb450();
   input += synapse0x1edb490();
   input += synapse0x1edc650();
   input += synapse0x1edc690();
   input += synapse0x1edc6d0();
   input += synapse0x1edc710();
   input += synapse0x1edc750();
   input += synapse0x1edc790();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1c95240() {
   double input = input0x1c95240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1edc7d0() {
   double input = -0.754986;
   input += synapse0x1edcb10();
   input += synapse0x1edcb50();
   input += synapse0x1edcb90();
   input += synapse0x1edcbd0();
   input += synapse0x1edcc10();
   input += synapse0x1edcc50();
   input += synapse0x1edcc90();
   input += synapse0x1edccd0();
   input += synapse0x1edcd10();
   input += synapse0x1edcd50();
   input += synapse0x1edcd90();
   input += synapse0x1edcdd0();
   input += synapse0x1edce10();
   input += synapse0x1edce50();
   input += synapse0x1edce90();
   input += synapse0x1edced0();
   input += synapse0x1edc960();
   input += synapse0x1edc9a0();
   input += synapse0x1edd020();
   input += synapse0x1edd060();
   input += synapse0x1edd0a0();
   input += synapse0x1edd0e0();
   input += synapse0x1edd120();
   input += synapse0x1edd160();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1edc7d0() {
   double input = input0x1edc7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1edd1a0() {
   double input = -0.856197;
   input += synapse0x1edd4e0();
   input += synapse0x1edd520();
   input += synapse0x1edd560();
   input += synapse0x1edd5a0();
   input += synapse0x1edd5e0();
   input += synapse0x1edd620();
   input += synapse0x1edd660();
   input += synapse0x1edd6a0();
   input += synapse0x1edd6e0();
   input += synapse0x1c94e30();
   input += synapse0x1c94e70();
   input += synapse0x1c94eb0();
   input += synapse0x1c94ef0();
   input += synapse0x1c94f30();
   input += synapse0x1c94f70();
   input += synapse0x1c94fb0();
   input += synapse0x1edd330();
   input += synapse0x1edd370();
   input += synapse0x1c95100();
   input += synapse0x1c95140();
   input += synapse0x1c95180();
   input += synapse0x1c951c0();
   input += synapse0x1c95200();
   input += synapse0x1eddf30();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1edd1a0() {
   double input = input0x1edd1a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1eddf70() {
   double input = -0.261779;
   input += synapse0x1ede2b0();
   input += synapse0x1ede2f0();
   input += synapse0x1ede330();
   input += synapse0x1ede370();
   input += synapse0x1ede3b0();
   input += synapse0x1ede3f0();
   input += synapse0x1ede430();
   input += synapse0x1ede470();
   input += synapse0x1ede4b0();
   input += synapse0x1ede4f0();
   input += synapse0x1ede530();
   input += synapse0x1ede570();
   input += synapse0x1ede5b0();
   input += synapse0x1ede5f0();
   input += synapse0x1ede630();
   input += synapse0x1ede670();
   input += synapse0x1ede100();
   input += synapse0x1ede140();
   input += synapse0x1ede7c0();
   input += synapse0x1ede800();
   input += synapse0x1ede840();
   input += synapse0x1ede880();
   input += synapse0x1ede8c0();
   input += synapse0x1ede900();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1eddf70() {
   double input = input0x1eddf70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1ede940() {
   double input = -0.165368;
   input += synapse0x1edec80();
   input += synapse0x1edecc0();
   input += synapse0x1eded00();
   input += synapse0x1eded40();
   input += synapse0x1eded80();
   input += synapse0x1ededc0();
   input += synapse0x1edee00();
   input += synapse0x1edee40();
   input += synapse0x1edee80();
   input += synapse0x1edeec0();
   input += synapse0x1edef00();
   input += synapse0x1edef40();
   input += synapse0x1edef80();
   input += synapse0x1edefc0();
   input += synapse0x1edf000();
   input += synapse0x1edf040();
   input += synapse0x1edead0();
   input += synapse0x1edeb10();
   input += synapse0x1edf190();
   input += synapse0x1edf1d0();
   input += synapse0x1edf210();
   input += synapse0x1edf250();
   input += synapse0x1edf290();
   input += synapse0x1edf2d0();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1ede940() {
   double input = input0x1ede940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1edf310() {
   double input = -0.108617;
   input += synapse0x1ed8db0();
   input += synapse0x1ed8df0();
   input += synapse0x1ed8e30();
   input += synapse0x1ed8e70();
   input += synapse0x1edf860();
   input += synapse0x1edf8a0();
   input += synapse0x1edf8e0();
   input += synapse0x1edf920();
   input += synapse0x1edf960();
   input += synapse0x1edf9a0();
   input += synapse0x1edf9e0();
   input += synapse0x1edfa20();
   input += synapse0x1edfa60();
   input += synapse0x1edfaa0();
   input += synapse0x1edfae0();
   input += synapse0x1edfb20();
   input += synapse0x1edf4a0();
   input += synapse0x1edf4e0();
   input += synapse0x1edfc70();
   input += synapse0x1edfcb0();
   input += synapse0x1edfcf0();
   input += synapse0x1edfd30();
   input += synapse0x1edfd70();
   input += synapse0x1edfdb0();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1edf310() {
   double input = input0x1edf310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1edfdf0() {
   double input = 0.860953;
   input += synapse0x1ee0130();
   input += synapse0x1ee0170();
   input += synapse0x1ee01b0();
   input += synapse0x1ee01f0();
   input += synapse0x1ee0230();
   input += synapse0x1ee0270();
   input += synapse0x1ee02b0();
   input += synapse0x1ee02f0();
   input += synapse0x1ee0330();
   input += synapse0x1ee0370();
   input += synapse0x1ee03b0();
   input += synapse0x1ee03f0();
   input += synapse0x1ee0430();
   input += synapse0x1ee0470();
   input += synapse0x1ee04b0();
   input += synapse0x1ee04f0();
   input += synapse0x1edff80();
   input += synapse0x1edffc0();
   input += synapse0x1ee0640();
   input += synapse0x1ee0680();
   input += synapse0x1ee06c0();
   input += synapse0x1ee0700();
   input += synapse0x1ee0740();
   input += synapse0x1ee0780();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1edfdf0() {
   double input = input0x1edfdf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1ee07c0() {
   double input = 2.23557;
   input += synapse0x1ee0b00();
   input += synapse0x1ee0b40();
   input += synapse0x1ee0b80();
   input += synapse0x1ee0bc0();
   input += synapse0x1ee0c00();
   input += synapse0x1ee0c40();
   input += synapse0x1ee0c80();
   input += synapse0x1ee0cc0();
   input += synapse0x1ee0d00();
   input += synapse0x1ee0d40();
   input += synapse0x1ee0d80();
   input += synapse0x1ee0dc0();
   input += synapse0x1ee0e00();
   input += synapse0x1ee0e40();
   input += synapse0x1ee0e80();
   input += synapse0x1ee0ec0();
   input += synapse0x1ee0950();
   input += synapse0x1ee0990();
   input += synapse0x1edd720();
   input += synapse0x1edd760();
   input += synapse0x1edd7a0();
   input += synapse0x1edd7e0();
   input += synapse0x1edd820();
   input += synapse0x1edd860();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1ee07c0() {
   double input = input0x1ee07c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1edd8a0() {
   double input = -1.52292;
   input += synapse0x1eddbe0();
   input += synapse0x1eddc20();
   input += synapse0x1eddc60();
   input += synapse0x1eddca0();
   input += synapse0x1eddce0();
   input += synapse0x1eddd20();
   input += synapse0x1eddd60();
   input += synapse0x1eddda0();
   input += synapse0x1eddde0();
   input += synapse0x1edde20();
   input += synapse0x1edde60();
   input += synapse0x1eddea0();
   input += synapse0x1eddee0();
   input += synapse0x1ee2020();
   input += synapse0x1ee2060();
   input += synapse0x1ee20a0();
   input += synapse0x1edda30();
   input += synapse0x1edda70();
   input += synapse0x1ee21f0();
   input += synapse0x1ee2230();
   input += synapse0x1ee2270();
   input += synapse0x1ee22b0();
   input += synapse0x1ee22f0();
   input += synapse0x1ee2330();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1edd8a0() {
   double input = input0x1edd8a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1ee2370() {
   double input = -1.18326;
   input += synapse0x1ee26b0();
   input += synapse0x1ee26f0();
   input += synapse0x1ee2730();
   input += synapse0x1ee2770();
   input += synapse0x1ee27b0();
   input += synapse0x1ee27f0();
   input += synapse0x1ee2830();
   input += synapse0x1ee2870();
   input += synapse0x1ee28b0();
   input += synapse0x1ee28f0();
   input += synapse0x1ee2930();
   input += synapse0x1ee2970();
   input += synapse0x1ee29b0();
   input += synapse0x1ee29f0();
   input += synapse0x1ee2a30();
   input += synapse0x1ee2a70();
   input += synapse0x1ee2500();
   input += synapse0x1ee2540();
   input += synapse0x1ee2bc0();
   input += synapse0x1ee2c00();
   input += synapse0x1ee2c40();
   input += synapse0x1ee2c80();
   input += synapse0x1ee2cc0();
   input += synapse0x1ee2d00();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1ee2370() {
   double input = input0x1ee2370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1ee2d40() {
   double input = -1.3836;
   input += synapse0x1ee3080();
   input += synapse0x1ee30c0();
   input += synapse0x1ee3100();
   input += synapse0x1ee3140();
   input += synapse0x1ee3180();
   input += synapse0x1ee31c0();
   input += synapse0x1ee3200();
   input += synapse0x1ee3240();
   input += synapse0x1ee3280();
   input += synapse0x1ee32c0();
   input += synapse0x1ee3300();
   input += synapse0x1ee3340();
   input += synapse0x1ee3380();
   input += synapse0x1ee33c0();
   input += synapse0x1ee3400();
   input += synapse0x1ee3440();
   input += synapse0x1ee2ed0();
   input += synapse0x1ee2f10();
   input += synapse0x1ee3590();
   input += synapse0x1ee35d0();
   input += synapse0x1ee3610();
   input += synapse0x1ee3650();
   input += synapse0x1ee3690();
   input += synapse0x1ee36d0();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1ee2d40() {
   double input = input0x1ee2d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1ee3710() {
   double input = 0.853949;
   input += synapse0x1ee3a50();
   input += synapse0x1ee3a90();
   input += synapse0x1ee3ad0();
   input += synapse0x1ee3b10();
   input += synapse0x1ee3b50();
   input += synapse0x1ee3b90();
   input += synapse0x1ee3bd0();
   input += synapse0x1ee3c10();
   input += synapse0x1ee3c50();
   input += synapse0x1ee3c90();
   input += synapse0x1ee3cd0();
   input += synapse0x1ee3d10();
   input += synapse0x1ee3d50();
   input += synapse0x1ee3d90();
   input += synapse0x1ee3dd0();
   input += synapse0x1ee3e10();
   input += synapse0x1ee38a0();
   input += synapse0x1ee38e0();
   input += synapse0x1ee3f60();
   input += synapse0x1ee3fa0();
   input += synapse0x1ee3fe0();
   input += synapse0x1ee4020();
   input += synapse0x1ee4060();
   input += synapse0x1ee40a0();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1ee3710() {
   double input = input0x1ee3710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1ee40e0() {
   double input = 0.465096;
   input += synapse0x1ee4420();
   input += synapse0x1ed5780();
   input += synapse0x1ed57c0();
   input += synapse0x1ed5ac0();
   input += synapse0x1ed5b00();
   input += synapse0x1ed5e00();
   input += synapse0x1ed5e40();
   input += synapse0x1ed6140();
   input += synapse0x1ed6180();
   input += synapse0x1ed6480();
   input += synapse0x1ed64c0();
   input += synapse0x1ed67c0();
   input += synapse0x1ed6800();
   input += synapse0x1ed6b00();
   input += synapse0x1ed6b40();
   input += synapse0x1ed6e40();
   input += synapse0x1ed6e80();
   input += synapse0x1ed7180();
   input += synapse0x1ed71c0();
   input += synapse0x1ed74c0();
   input += synapse0x1ed7500();
   input += synapse0x1ed7800();
   input += synapse0x1ed7840();
   input += synapse0x1ed7b40();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1ee40e0() {
   double input = input0x1ee40e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1ee5ef0() {
   double input = -0.124433;
   input += synapse0x1ed7b80();
   input += synapse0x1ed8840();
   input += synapse0x1ed8880();
   input += synapse0x1ee4270();
   input += synapse0x1ee42b0();
   input += synapse0x1ed8b80();
   input += synapse0x1ed8bc0();
   input += synapse0x1c86b50();
   input += synapse0x1c86b90();
   input += synapse0x1ed9300();
   input += synapse0x1ed9340();
   input += synapse0x1ed9640();
   input += synapse0x1ed9680();
   input += synapse0x1ed9980();
   input += synapse0x1ed99c0();
   input += synapse0x1ed9cc0();
   input += synapse0x1ed9d00();
   input += synapse0x1eda000();
   input += synapse0x1eda040();
   input += synapse0x1eda340();
   input += synapse0x1eda380();
   input += synapse0x1ed7e80();
   input += synapse0x1ed7ec0();
   input += synapse0x1ee6190();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1ee5ef0() {
   double input = input0x1ee5ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1ee61d0() {
   double input = 1.10122;
   input += synapse0x1ee6510();
   input += synapse0x1ee6550();
   input += synapse0x1ee6590();
   input += synapse0x1ee65d0();
   input += synapse0x1ee6610();
   input += synapse0x1ee6650();
   input += synapse0x1ee6690();
   input += synapse0x1ee66d0();
   input += synapse0x1ee6710();
   input += synapse0x1ee6750();
   input += synapse0x1ee6790();
   input += synapse0x1ee67d0();
   input += synapse0x1ee6810();
   input += synapse0x1ee6850();
   input += synapse0x1ee6890();
   input += synapse0x1ee68d0();
   input += synapse0x1ee6360();
   input += synapse0x1ee63a0();
   input += synapse0x1ee6a20();
   input += synapse0x1ee6a60();
   input += synapse0x1ee6aa0();
   input += synapse0x1ee6ae0();
   input += synapse0x1ee6b20();
   input += synapse0x1ee6b60();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1ee61d0() {
   double input = input0x1ee61d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1ee6ba0() {
   double input = 0.515858;
   input += synapse0x1ee6ee0();
   input += synapse0x1ee6f20();
   input += synapse0x1ee6f60();
   input += synapse0x1ee6fa0();
   input += synapse0x1ee6fe0();
   input += synapse0x1ee7020();
   input += synapse0x1ee7060();
   input += synapse0x1ee70a0();
   input += synapse0x1ee70e0();
   input += synapse0x1ee7120();
   input += synapse0x1ee7160();
   input += synapse0x1ee71a0();
   input += synapse0x1ee71e0();
   input += synapse0x1ee7220();
   input += synapse0x1ee7260();
   input += synapse0x1ee72a0();
   input += synapse0x1ee6d30();
   input += synapse0x1ee6d70();
   input += synapse0x1ee73f0();
   input += synapse0x1ee7430();
   input += synapse0x1ee7470();
   input += synapse0x1ee74b0();
   input += synapse0x1ee74f0();
   input += synapse0x1ee7530();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1ee6ba0() {
   double input = input0x1ee6ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1ee7570() {
   double input = 0.311981;
   input += synapse0x1ee78b0();
   input += synapse0x1ee78f0();
   input += synapse0x1ee7930();
   input += synapse0x1ee7970();
   input += synapse0x1ee79b0();
   input += synapse0x1ee79f0();
   input += synapse0x1ee7a30();
   input += synapse0x1ee7a70();
   input += synapse0x1ee7ab0();
   input += synapse0x1ee7af0();
   input += synapse0x1ee7b30();
   input += synapse0x1ee7b70();
   input += synapse0x1ee7bb0();
   input += synapse0x1ee7bf0();
   input += synapse0x1ee7c30();
   input += synapse0x1ee7c70();
   input += synapse0x1ee7700();
   input += synapse0x1ee7740();
   input += synapse0x1ee7dc0();
   input += synapse0x1ee7e00();
   input += synapse0x1ee7e40();
   input += synapse0x1ee7e80();
   input += synapse0x1ee7ec0();
   input += synapse0x1ee7f00();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1ee7570() {
   double input = input0x1ee7570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1ee7f40() {
   double input = -0.173437;
   input += synapse0x1ee8280();
   input += synapse0x1ee82c0();
   input += synapse0x1ee8300();
   input += synapse0x1ee8340();
   input += synapse0x1ee8380();
   input += synapse0x1ee83c0();
   input += synapse0x1ee8400();
   input += synapse0x1ee8440();
   input += synapse0x1ee8480();
   input += synapse0x1ee84c0();
   input += synapse0x1ee8500();
   input += synapse0x1ee8540();
   input += synapse0x1ee8580();
   input += synapse0x1ee85c0();
   input += synapse0x1ee8600();
   input += synapse0x1ee8640();
   input += synapse0x1ee80d0();
   input += synapse0x1ee8110();
   input += synapse0x1ee8790();
   input += synapse0x1ee87d0();
   input += synapse0x1ee8810();
   input += synapse0x1ee8850();
   input += synapse0x1ee8890();
   input += synapse0x1ee88d0();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1ee7f40() {
   double input = input0x1ee7f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1ee8910() {
   double input = 0.592309;
   input += synapse0x1ee8c50();
   input += synapse0x1ee8c90();
   input += synapse0x1ee8cd0();
   input += synapse0x1ee8d10();
   input += synapse0x1ee8d50();
   input += synapse0x1ee8d90();
   input += synapse0x1ee8dd0();
   input += synapse0x1ee8e10();
   input += synapse0x1ee8e50();
   input += synapse0x1ee1010();
   input += synapse0x1ee1050();
   input += synapse0x1ee1090();
   input += synapse0x1ee10d0();
   input += synapse0x1ee1110();
   input += synapse0x1ee1150();
   input += synapse0x1ee1190();
   input += synapse0x1ee8aa0();
   input += synapse0x1ee8ae0();
   input += synapse0x1ee12e0();
   input += synapse0x1ee1320();
   input += synapse0x1ee1360();
   input += synapse0x1ee13a0();
   input += synapse0x1ee13e0();
   input += synapse0x1ee1420();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1ee8910() {
   double input = input0x1ee8910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1ee1460() {
   double input = 0.424914;
   input += synapse0x1ee17a0();
   input += synapse0x1ee17e0();
   input += synapse0x1ee1820();
   input += synapse0x1ee1860();
   input += synapse0x1ee18a0();
   input += synapse0x1ee18e0();
   input += synapse0x1ee1920();
   input += synapse0x1ee1960();
   input += synapse0x1ee19a0();
   input += synapse0x1ee19e0();
   input += synapse0x1ee1a20();
   input += synapse0x1ee1a60();
   input += synapse0x1ee1aa0();
   input += synapse0x1ee1ae0();
   input += synapse0x1ee1b20();
   input += synapse0x1ee1b60();
   input += synapse0x1ee15f0();
   input += synapse0x1ee1630();
   input += synapse0x1ee1cb0();
   input += synapse0x1ee1cf0();
   input += synapse0x1ee1d30();
   input += synapse0x1ee1d70();
   input += synapse0x1ee1db0();
   input += synapse0x1ee1df0();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1ee1460() {
   double input = input0x1ee1460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1ee1e30() {
   double input = -0.891851;
   input += synapse0x1ee1fc0();
   input += synapse0x1eeb050();
   input += synapse0x1eeb090();
   input += synapse0x1eeb0d0();
   input += synapse0x1eeb110();
   input += synapse0x1eeb150();
   input += synapse0x1eeb190();
   input += synapse0x1eeb1d0();
   input += synapse0x1eeb210();
   input += synapse0x1eeb250();
   input += synapse0x1eeb290();
   input += synapse0x1eeb2d0();
   input += synapse0x1eeb310();
   input += synapse0x1eeb350();
   input += synapse0x1eeb390();
   input += synapse0x1eeb3d0();
   input += synapse0x1eeaea0();
   input += synapse0x1eeaee0();
   input += synapse0x1eeb520();
   input += synapse0x1eeb560();
   input += synapse0x1eeb5a0();
   input += synapse0x1eeb5e0();
   input += synapse0x1eeb620();
   input += synapse0x1eeb660();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1ee1e30() {
   double input = input0x1ee1e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1eeb6a0() {
   double input = -0.463881;
   input += synapse0x1eeb9e0();
   input += synapse0x1eeba20();
   input += synapse0x1eeba60();
   input += synapse0x1eebaa0();
   input += synapse0x1eebae0();
   input += synapse0x1eebb20();
   input += synapse0x1eebb60();
   input += synapse0x1eebba0();
   input += synapse0x1eebbe0();
   input += synapse0x1eebc20();
   input += synapse0x1eebc60();
   input += synapse0x1eebca0();
   input += synapse0x1eebce0();
   input += synapse0x1eebd20();
   input += synapse0x1eebd60();
   input += synapse0x1eebda0();
   input += synapse0x1eeb830();
   input += synapse0x1eeb870();
   input += synapse0x1eebef0();
   input += synapse0x1eebf30();
   input += synapse0x1eebf70();
   input += synapse0x1eebfb0();
   input += synapse0x1eebff0();
   input += synapse0x1eec030();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1eeb6a0() {
   double input = input0x1eeb6a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1eec070() {
   double input = 1.28703;
   input += synapse0x1eec3b0();
   input += synapse0x1eec3f0();
   input += synapse0x1eec430();
   input += synapse0x1eec470();
   input += synapse0x1eec4b0();
   input += synapse0x1eec4f0();
   input += synapse0x1eec530();
   input += synapse0x1eec570();
   input += synapse0x1eec5b0();
   input += synapse0x1eec5f0();
   input += synapse0x1eec630();
   input += synapse0x1eec670();
   input += synapse0x1eec6b0();
   input += synapse0x1eec6f0();
   input += synapse0x1eec730();
   input += synapse0x1eec770();
   input += synapse0x1eec200();
   input += synapse0x1eec240();
   input += synapse0x1eec8c0();
   input += synapse0x1eec900();
   input += synapse0x1eec940();
   input += synapse0x1eec980();
   input += synapse0x1eec9c0();
   input += synapse0x1eeca00();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1eec070() {
   double input = input0x1eec070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1eeca40() {
   double input = 0.382233;
   input += synapse0x1eecd80();
   input += synapse0x1eecdc0();
   input += synapse0x1eece00();
   input += synapse0x1eece40();
   input += synapse0x1eece80();
   input += synapse0x1eecec0();
   input += synapse0x1eecf00();
   input += synapse0x1eecf40();
   input += synapse0x1eecf80();
   input += synapse0x1eecfc0();
   input += synapse0x1eed000();
   input += synapse0x1eed040();
   input += synapse0x1eed080();
   input += synapse0x1eed0c0();
   input += synapse0x1eed100();
   input += synapse0x1eed140();
   input += synapse0x1eecbd0();
   input += synapse0x1eecc10();
   input += synapse0x1eed290();
   input += synapse0x1eed2d0();
   input += synapse0x1eed310();
   input += synapse0x1eed350();
   input += synapse0x1eed390();
   input += synapse0x1eed3d0();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1eeca40() {
   double input = input0x1eeca40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1eed410() {
   double input = -0.267935;
   input += synapse0x1eed750();
   input += synapse0x1eed790();
   input += synapse0x1eed7d0();
   input += synapse0x1eed810();
   input += synapse0x1eed850();
   input += synapse0x1eed890();
   input += synapse0x1eed8d0();
   input += synapse0x1eed910();
   input += synapse0x1eed950();
   input += synapse0x1eed990();
   input += synapse0x1eed9d0();
   input += synapse0x1eeda10();
   input += synapse0x1eeda50();
   input += synapse0x1eeda90();
   input += synapse0x1eedad0();
   input += synapse0x1eedb10();
   input += synapse0x1eed5a0();
   input += synapse0x1eed5e0();
   input += synapse0x1eedc60();
   input += synapse0x1eedca0();
   input += synapse0x1eedce0();
   input += synapse0x1eedd20();
   input += synapse0x1eedd60();
   input += synapse0x1eedda0();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1eed410() {
   double input = input0x1eed410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1eedde0() {
   double input = 2.02387;
   input += synapse0x1eee120();
   input += synapse0x1eee160();
   input += synapse0x1eee1a0();
   input += synapse0x1eee1e0();
   input += synapse0x1eee220();
   input += synapse0x1eee260();
   input += synapse0x1eee2a0();
   input += synapse0x1eee2e0();
   input += synapse0x1eee320();
   input += synapse0x1eee360();
   input += synapse0x1eee3a0();
   input += synapse0x1eee3e0();
   input += synapse0x1eee420();
   input += synapse0x1eee460();
   input += synapse0x1eee4a0();
   input += synapse0x1eee4e0();
   input += synapse0x1eedf70();
   input += synapse0x1eedfb0();
   input += synapse0x1eee630();
   input += synapse0x1eee670();
   input += synapse0x1eee6b0();
   input += synapse0x1eee6f0();
   input += synapse0x1eee730();
   input += synapse0x1eee770();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1eedde0() {
   double input = input0x1eedde0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1eee7b0() {
   double input = -0.369397;
   input += synapse0x1eeeaf0();
   input += synapse0x1eeeb30();
   input += synapse0x1eeeb70();
   input += synapse0x1eeebb0();
   input += synapse0x1eeebf0();
   input += synapse0x1eeec30();
   input += synapse0x1eeec70();
   input += synapse0x1eeecb0();
   input += synapse0x1eeecf0();
   input += synapse0x1eeed30();
   input += synapse0x1eeed70();
   input += synapse0x1eeedb0();
   input += synapse0x1eeedf0();
   input += synapse0x1eeee30();
   input += synapse0x1eeee70();
   input += synapse0x1eeeeb0();
   input += synapse0x1eee940();
   input += synapse0x1eee980();
   input += synapse0x1eef000();
   input += synapse0x1eef040();
   input += synapse0x1eef080();
   input += synapse0x1eef0c0();
   input += synapse0x1eef100();
   input += synapse0x1eef140();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1eee7b0() {
   double input = input0x1eee7b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1eef180() {
   double input = -1.27215;
   input += synapse0x1eef4c0();
   input += synapse0x1eef500();
   input += synapse0x1eef540();
   input += synapse0x1eef580();
   input += synapse0x1eef5c0();
   input += synapse0x1eef600();
   input += synapse0x1eef640();
   input += synapse0x1eef680();
   input += synapse0x1eef6c0();
   input += synapse0x1eef700();
   input += synapse0x1eef740();
   input += synapse0x1eef780();
   input += synapse0x1eef7c0();
   input += synapse0x1eef800();
   input += synapse0x1eef840();
   input += synapse0x1eef880();
   input += synapse0x1eef310();
   input += synapse0x1eef350();
   input += synapse0x1eef9d0();
   input += synapse0x1eefa10();
   input += synapse0x1eefa50();
   input += synapse0x1eefa90();
   input += synapse0x1eefad0();
   input += synapse0x1eefb10();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1eef180() {
   double input = input0x1eef180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1eefb50() {
   double input = -0.529639;
   input += synapse0x1eefe90();
   input += synapse0x1ee4460();
   input += synapse0x1ee44a0();
   input += synapse0x1ee44e0();
   input += synapse0x1ee4730();
   input += synapse0x1ee4770();
   input += synapse0x1ee47b0();
   input += synapse0x1ee4a00();
   input += synapse0x1ee4a40();
   input += synapse0x1ee4c90();
   input += synapse0x1ee4cd0();
   input += synapse0x1ee4d10();
   input += synapse0x1ee4f60();
   input += synapse0x1ee4fa0();
   input += synapse0x1ee51f0();
   input += synapse0x1ee5230();
   input += synapse0x1eefce0();
   input += synapse0x1eefd20();
   input += synapse0x1ee5380();
   input += synapse0x1ee5890();
   input += synapse0x1ee58d0();
   input += synapse0x1ee5910();
   input += synapse0x1ee5b60();
   input += synapse0x1ee5ba0();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1eefb50() {
   double input = input0x1eefb50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1ee5be0() {
   double input = -0.566878;
   input += synapse0x1ee5450();
   input += synapse0x1ee5490();
   input += synapse0x1ee54d0();
   input += synapse0x1ee5510();
   input += synapse0x1ee5e90();
   input += synapse0x1ef21e0();
   input += synapse0x1ef2220();
   input += synapse0x1ef2260();
   input += synapse0x1ef22a0();
   input += synapse0x1ef22e0();
   input += synapse0x1ef2320();
   input += synapse0x1ef2360();
   input += synapse0x1ef23a0();
   input += synapse0x1ef23e0();
   input += synapse0x1ef2420();
   input += synapse0x1ef2460();
   input += synapse0x1ee5d70();
   input += synapse0x1ee5db0();
   input += synapse0x1ef25b0();
   input += synapse0x1ef25f0();
   input += synapse0x1ef2630();
   input += synapse0x1ef2670();
   input += synapse0x1ef26b0();
   input += synapse0x1ef26f0();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1ee5be0() {
   double input = input0x1ee5be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1ef2730() {
   double input = -0.0903934;
   input += synapse0x1ef2a70();
   input += synapse0x1ef2ab0();
   input += synapse0x1ef2af0();
   input += synapse0x1ef2b30();
   input += synapse0x1ef2b70();
   input += synapse0x1ef2bb0();
   input += synapse0x1ef2bf0();
   input += synapse0x1ef2c30();
   input += synapse0x1ef2c70();
   input += synapse0x1ef2cb0();
   input += synapse0x1ef2cf0();
   input += synapse0x1ef2d30();
   input += synapse0x1ef2d70();
   input += synapse0x1ef2db0();
   input += synapse0x1ef2df0();
   input += synapse0x1ef2e30();
   input += synapse0x1ef28c0();
   input += synapse0x1ef2900();
   input += synapse0x1ef2f80();
   input += synapse0x1ef2fc0();
   input += synapse0x1ef3000();
   input += synapse0x1ef3040();
   input += synapse0x1ef3080();
   input += synapse0x1ef30c0();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1ef2730() {
   double input = input0x1ef2730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1ef3100() {
   double input = -2.14067;
   input += synapse0x1ef3440();
   input += synapse0x1ef3480();
   input += synapse0x1ef34c0();
   input += synapse0x1ef3500();
   input += synapse0x1ef3540();
   input += synapse0x1ef3580();
   input += synapse0x1ef35c0();
   input += synapse0x1ef3600();
   input += synapse0x1ef3640();
   input += synapse0x1ef3680();
   input += synapse0x1ef36c0();
   input += synapse0x1ef3700();
   input += synapse0x1ef3740();
   input += synapse0x1ef3780();
   input += synapse0x1ef37c0();
   input += synapse0x1ef3800();
   input += synapse0x1ef3290();
   input += synapse0x1ef32d0();
   input += synapse0x1ef3950();
   input += synapse0x1ef3990();
   input += synapse0x1ef39d0();
   input += synapse0x1ef3a10();
   input += synapse0x1ef3a50();
   input += synapse0x1ef3a90();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1ef3100() {
   double input = input0x1ef3100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1ef3ad0() {
   double input = -1.2534;
   input += synapse0x1ef3e10();
   input += synapse0x1ef3e50();
   input += synapse0x1ef3e90();
   input += synapse0x1ef3ed0();
   input += synapse0x1ef3f10();
   input += synapse0x1ef3f50();
   input += synapse0x1ef3f90();
   input += synapse0x1ef3fd0();
   input += synapse0x1ef4010();
   input += synapse0x1ef4050();
   input += synapse0x1ef4090();
   input += synapse0x1ef40d0();
   input += synapse0x1ef4110();
   input += synapse0x1ef4150();
   input += synapse0x1ef4190();
   input += synapse0x1ef41d0();
   input += synapse0x1ef3c60();
   input += synapse0x1ef3ca0();
   input += synapse0x1ef4320();
   input += synapse0x1ef4360();
   input += synapse0x1ef43a0();
   input += synapse0x1ef43e0();
   input += synapse0x1ef4420();
   input += synapse0x1ef4460();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1ef3ad0() {
   double input = input0x1ef3ad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1ef44a0() {
   double input = -0.777437;
   input += synapse0x1ef47e0();
   input += synapse0x1ef4820();
   input += synapse0x1ef4860();
   input += synapse0x1ef48a0();
   input += synapse0x1ef48e0();
   input += synapse0x1ef4920();
   input += synapse0x1ef4960();
   input += synapse0x1ef49a0();
   input += synapse0x1ef49e0();
   input += synapse0x1ef4a20();
   input += synapse0x1ef4a60();
   input += synapse0x1ef4aa0();
   input += synapse0x1ef4ae0();
   input += synapse0x1ef4b20();
   input += synapse0x1ef4b60();
   input += synapse0x1ef4ba0();
   input += synapse0x1ef4630();
   input += synapse0x1ef4670();
   input += synapse0x1ef4cf0();
   input += synapse0x1ef4d30();
   input += synapse0x1ef4d70();
   input += synapse0x1ef4db0();
   input += synapse0x1ef4df0();
   input += synapse0x1ef4e30();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1ef44a0() {
   double input = input0x1ef44a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1ef4e70() {
   double input = 0.61454;
   input += synapse0x1ef51b0();
   input += synapse0x1ef51f0();
   input += synapse0x1ef5230();
   input += synapse0x1ef5270();
   input += synapse0x1ef52b0();
   input += synapse0x1ef52f0();
   input += synapse0x1ef5330();
   input += synapse0x1ef5370();
   input += synapse0x1ef53b0();
   input += synapse0x1ef53f0();
   input += synapse0x1ef5430();
   input += synapse0x1ef5470();
   input += synapse0x1ef54b0();
   input += synapse0x1ef54f0();
   input += synapse0x1ef5530();
   input += synapse0x1ef5570();
   input += synapse0x1ef5000();
   input += synapse0x1ef5040();
   input += synapse0x1ef56c0();
   input += synapse0x1ef5700();
   input += synapse0x1ef5740();
   input += synapse0x1ef5780();
   input += synapse0x1ef57c0();
   input += synapse0x1ef5800();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1ef4e70() {
   double input = input0x1ef4e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1ef5840() {
   double input = -0.00388486;
   input += synapse0x1ef5b80();
   input += synapse0x1ef5bc0();
   input += synapse0x1ef5c00();
   input += synapse0x1ef5c40();
   input += synapse0x1ef5c80();
   input += synapse0x1ef5cc0();
   input += synapse0x1ef5d00();
   input += synapse0x1ef5d40();
   input += synapse0x1ef5d80();
   input += synapse0x1ef5dc0();
   input += synapse0x1ef5e00();
   input += synapse0x1ef5e40();
   input += synapse0x1ef5e80();
   input += synapse0x1ef5ec0();
   input += synapse0x1ef5f00();
   input += synapse0x1ef5f40();
   input += synapse0x1ef59d0();
   input += synapse0x1ef5a10();
   input += synapse0x1ef6090();
   input += synapse0x1ef60d0();
   input += synapse0x1ef6110();
   input += synapse0x1ef6150();
   input += synapse0x1ef6190();
   input += synapse0x1ef61d0();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1ef5840() {
   double input = input0x1ef5840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1ef6210() {
   double input = 5.17803;
   input += synapse0x1ef6550();
   input += synapse0x1ef6590();
   input += synapse0x1ef65d0();
   input += synapse0x1ef6610();
   input += synapse0x1ef6650();
   input += synapse0x1ef6690();
   input += synapse0x1ef66d0();
   input += synapse0x1ef6710();
   input += synapse0x1ef6750();
   input += synapse0x1ef6790();
   input += synapse0x1ef67d0();
   input += synapse0x1ef6810();
   input += synapse0x1ef6850();
   input += synapse0x1ef6890();
   input += synapse0x1ef68d0();
   input += synapse0x1ef6910();
   input += synapse0x1ef63a0();
   input += synapse0x1ef63e0();
   input += synapse0x1ef6a60();
   input += synapse0x1ef6aa0();
   input += synapse0x1ef6ae0();
   input += synapse0x1ef6b20();
   input += synapse0x1ef6b60();
   input += synapse0x1ef6ba0();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1ef6210() {
   double input = input0x1ef6210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1ef6be0() {
   double input = 1.38333;
   input += synapse0x1edf650();
   input += synapse0x1edf690();
   input += synapse0x1edf6d0();
   input += synapse0x1edf710();
   input += synapse0x1edf750();
   input += synapse0x1edf790();
   input += synapse0x1edf7d0();
   input += synapse0x1edf810();
   input += synapse0x1ef7330();
   input += synapse0x1ef7370();
   input += synapse0x1ef73b0();
   input += synapse0x1ef73f0();
   input += synapse0x1ef7430();
   input += synapse0x1ef7470();
   input += synapse0x1ef74b0();
   input += synapse0x1ef74f0();
   input += synapse0x1ef6d70();
   input += synapse0x1ef6db0();
   input += synapse0x1ef7640();
   input += synapse0x1ef7680();
   input += synapse0x1ef76c0();
   input += synapse0x1ef7700();
   input += synapse0x1ef7740();
   input += synapse0x1ef7780();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1ef6be0() {
   double input = input0x1ef6be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1ef77c0() {
   double input = 0.976067;
   input += synapse0x1ef7b00();
   input += synapse0x1ef7b40();
   input += synapse0x1ef7b80();
   input += synapse0x1ef7bc0();
   input += synapse0x1ef7c00();
   input += synapse0x1ef7c40();
   input += synapse0x1ef7c80();
   input += synapse0x1ef7cc0();
   input += synapse0x1ef7d00();
   input += synapse0x1ef7d40();
   input += synapse0x1ef7d80();
   input += synapse0x1ef7dc0();
   input += synapse0x1ef7e00();
   input += synapse0x1ef7e40();
   input += synapse0x1ef7e80();
   input += synapse0x1ef7ec0();
   input += synapse0x1ef7950();
   input += synapse0x1ef7990();
   input += synapse0x1ef8010();
   input += synapse0x1ef8050();
   input += synapse0x1ef8090();
   input += synapse0x1ef80d0();
   input += synapse0x1ef8110();
   input += synapse0x1ef8150();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1ef77c0() {
   double input = input0x1ef77c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1ef8190() {
   double input = -0.242216;
   input += synapse0x1ef84d0();
   input += synapse0x1ef8510();
   input += synapse0x1ef8550();
   input += synapse0x1ef8590();
   input += synapse0x1ef85d0();
   input += synapse0x1ef8610();
   input += synapse0x1ef8650();
   input += synapse0x1ef8690();
   input += synapse0x1ef86d0();
   input += synapse0x1ef8710();
   input += synapse0x1ef8750();
   input += synapse0x1ef8790();
   input += synapse0x1ef87d0();
   input += synapse0x1ef8810();
   input += synapse0x1ef8850();
   input += synapse0x1ef8890();
   input += synapse0x1ef8320();
   input += synapse0x1ef8360();
   input += synapse0x1ee8e90();
   input += synapse0x1ee8ed0();
   input += synapse0x1ee8f10();
   input += synapse0x1ee8f50();
   input += synapse0x1ee8f90();
   input += synapse0x1ee8fd0();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1ef8190() {
   double input = input0x1ef8190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1ee9010() {
   double input = 0.717665;
   input += synapse0x1ee9350();
   input += synapse0x1ee9390();
   input += synapse0x1ee93d0();
   input += synapse0x1ee9410();
   input += synapse0x1ee9450();
   input += synapse0x1ee9490();
   input += synapse0x1ee94d0();
   input += synapse0x1ee9510();
   input += synapse0x1ee9550();
   input += synapse0x1ee9590();
   input += synapse0x1ee95d0();
   input += synapse0x1ee9610();
   input += synapse0x1ee9650();
   input += synapse0x1ee9690();
   input += synapse0x1ee96d0();
   input += synapse0x1ee9710();
   input += synapse0x1ee91a0();
   input += synapse0x1ee91e0();
   input += synapse0x1ee9860();
   input += synapse0x1ee98a0();
   input += synapse0x1ee98e0();
   input += synapse0x1ee9920();
   input += synapse0x1ee9960();
   input += synapse0x1ee99a0();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1ee9010() {
   double input = input0x1ee9010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1ee99e0() {
   double input = 0.0576732;
   input += synapse0x1ee9d20();
   input += synapse0x1ee9d60();
   input += synapse0x1ee9da0();
   input += synapse0x1ee9de0();
   input += synapse0x1ee9e20();
   input += synapse0x1ee9e60();
   input += synapse0x1ee9ea0();
   input += synapse0x1ee9ee0();
   input += synapse0x1ee9f20();
   input += synapse0x1ee9f60();
   input += synapse0x1ee9fa0();
   input += synapse0x1ee9fe0();
   input += synapse0x1eea020();
   input += synapse0x1eea060();
   input += synapse0x1eea0a0();
   input += synapse0x1eea0e0();
   input += synapse0x1ee9b70();
   input += synapse0x1ee9bb0();
   input += synapse0x1eea230();
   input += synapse0x1eea270();
   input += synapse0x1eea2b0();
   input += synapse0x1eea2f0();
   input += synapse0x1eea330();
   input += synapse0x1eea370();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1ee99e0() {
   double input = input0x1ee99e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1eea3b0() {
   double input = 0.203368;
   input += synapse0x1eea6f0();
   input += synapse0x1eea730();
   input += synapse0x1eea770();
   input += synapse0x1eea7b0();
   input += synapse0x1eea7f0();
   input += synapse0x1eea830();
   input += synapse0x1eea870();
   input += synapse0x1eea8b0();
   input += synapse0x1eea8f0();
   input += synapse0x1eea930();
   input += synapse0x1eea970();
   input += synapse0x1eea9b0();
   input += synapse0x1eea9f0();
   input += synapse0x1eeaa30();
   input += synapse0x1eeaa70();
   input += synapse0x1eeaab0();
   input += synapse0x1eea540();
   input += synapse0x1eea580();
   input += synapse0x1eeac00();
   input += synapse0x1eeac40();
   input += synapse0x1eeac80();
   input += synapse0x1eeacc0();
   input += synapse0x1eead00();
   input += synapse0x1eead40();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1eea3b0() {
   double input = input0x1eea3b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1efc9f0() {
   double input = 3.55728;
   input += synapse0x1efcc10();
   input += synapse0x1efcc50();
   input += synapse0x1efcc90();
   input += synapse0x1efccd0();
   input += synapse0x1efcd10();
   input += synapse0x1efcd50();
   input += synapse0x1efcd90();
   input += synapse0x1efcdd0();
   input += synapse0x1efce10();
   input += synapse0x1efce50();
   input += synapse0x1efce90();
   input += synapse0x1efced0();
   input += synapse0x1efcf10();
   input += synapse0x1efcf50();
   input += synapse0x1efcf90();
   input += synapse0x1efcfd0();
   input += synapse0x1eead80();
   input += synapse0x1eeadc0();
   input += synapse0x1efd120();
   input += synapse0x1efd160();
   input += synapse0x1efd1a0();
   input += synapse0x1efd1e0();
   input += synapse0x1efd220();
   input += synapse0x1efd260();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1efc9f0() {
   double input = input0x1efc9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1efd2a0() {
   double input = 0.286245;
   input += synapse0x1efd5e0();
   input += synapse0x1efd620();
   input += synapse0x1efd660();
   input += synapse0x1efd6a0();
   input += synapse0x1efd6e0();
   input += synapse0x1efd720();
   input += synapse0x1efd760();
   input += synapse0x1efd7a0();
   input += synapse0x1efd7e0();
   input += synapse0x1efd820();
   input += synapse0x1efd860();
   input += synapse0x1efd8a0();
   input += synapse0x1efd8e0();
   input += synapse0x1efd920();
   input += synapse0x1efd960();
   input += synapse0x1efd9a0();
   input += synapse0x1efd430();
   input += synapse0x1efd470();
   input += synapse0x1efdaf0();
   input += synapse0x1efdb30();
   input += synapse0x1efdb70();
   input += synapse0x1efdbb0();
   input += synapse0x1efdbf0();
   input += synapse0x1efdc30();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1efd2a0() {
   double input = input0x1efd2a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1efdc70() {
   double input = 0.452773;
   input += synapse0x1efdfb0();
   input += synapse0x1efdff0();
   input += synapse0x1efe030();
   input += synapse0x1efe070();
   input += synapse0x1efe0b0();
   input += synapse0x1efe0f0();
   input += synapse0x1efe130();
   input += synapse0x1efe170();
   input += synapse0x1efe1b0();
   input += synapse0x1efe1f0();
   input += synapse0x1efe230();
   input += synapse0x1efe270();
   input += synapse0x1efe2b0();
   input += synapse0x1efe2f0();
   input += synapse0x1efe330();
   input += synapse0x1efe370();
   input += synapse0x1efde00();
   input += synapse0x1efde40();
   input += synapse0x1efe4c0();
   input += synapse0x1efe500();
   input += synapse0x1efe540();
   input += synapse0x1efe580();
   input += synapse0x1efe5c0();
   input += synapse0x1efe600();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1efdc70() {
   double input = input0x1efdc70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1efe640() {
   double input = 1.7773;
   input += synapse0x1efe980();
   input += synapse0x1efe9c0();
   input += synapse0x1efea00();
   input += synapse0x1efea40();
   input += synapse0x1efea80();
   input += synapse0x1efeac0();
   input += synapse0x1efeb00();
   input += synapse0x1efeb40();
   input += synapse0x1efeb80();
   input += synapse0x1efebc0();
   input += synapse0x1efec00();
   input += synapse0x1efec40();
   input += synapse0x1efec80();
   input += synapse0x1efecc0();
   input += synapse0x1efed00();
   input += synapse0x1efed40();
   input += synapse0x1efe7d0();
   input += synapse0x1efe810();
   input += synapse0x1efee90();
   input += synapse0x1efeed0();
   input += synapse0x1efef10();
   input += synapse0x1efef50();
   input += synapse0x1efef90();
   input += synapse0x1efefd0();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1efe640() {
   double input = input0x1efe640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1f05840() {
   double input = -0.0225525;
   input += synapse0x1edb570();
   input += synapse0x1edb5b0();
   input += synapse0x1edca80();
   input += synapse0x1edcac0();
   input += synapse0x1edd450();
   input += synapse0x1edd490();
   input += synapse0x1ede220();
   input += synapse0x1ede260();
   input += synapse0x1edebf0();
   input += synapse0x1edec30();
   input += synapse0x1edf5c0();
   input += synapse0x1edf600();
   input += synapse0x1ee00a0();
   input += synapse0x1ee00e0();
   input += synapse0x1ee0a70();
   input += synapse0x1ee0ab0();
   input += synapse0x1eddb50();
   input += synapse0x1eddb90();
   input += synapse0x1ee2620();
   input += synapse0x1ee2660();
   input += synapse0x1ee2ff0();
   input += synapse0x1ee3030();
   input += synapse0x1ee39c0();
   input += synapse0x1ee3a00();
   input += synapse0x1ee4390();
   input += synapse0x1ee43d0();
   input += synapse0x1ed8500();
   input += synapse0x1ed8540();
   input += synapse0x1ee6480();
   input += synapse0x1ee64c0();
   input += synapse0x1ee6e50();
   input += synapse0x1ee6e90();
   input += synapse0x1ee7820();
   input += synapse0x1ee7860();
   input += synapse0x1ee81f0();
   input += synapse0x1ee8230();
   input += synapse0x1ee8bc0();
   input += synapse0x1ee8c00();
   input += synapse0x1ee1710();
   input += synapse0x1ee1750();
   input += synapse0x1eeafc0();
   input += synapse0x1eeb000();
   input += synapse0x1eeb950();
   input += synapse0x1eeb990();
   input += synapse0x1eec320();
   input += synapse0x1eec360();
   input += synapse0x1eeccf0();
   input += synapse0x1eecd30();
   input += synapse0x1eed6c0();
   input += synapse0x1eed700();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1f05840() {
   double input = input0x1f05840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1f05be0() {
   double input = 0.376928;
   input += synapse0x1eefe00();
   input += synapse0x1eefe40();
   input += synapse0x1ee53c0();
   input += synapse0x1ee5400();
   input += synapse0x1ef29e0();
   input += synapse0x1ef2a20();
   input += synapse0x1ef33b0();
   input += synapse0x1ef33f0();
   input += synapse0x1ef3d80();
   input += synapse0x1ef3dc0();
   input += synapse0x1ef4750();
   input += synapse0x1ef4790();
   input += synapse0x1ef5120();
   input += synapse0x1ef5160();
   input += synapse0x1ef5af0();
   input += synapse0x1ef5b30();
   input += synapse0x1ef64c0();
   input += synapse0x1ef6500();
   input += synapse0x1ef6e90();
   input += synapse0x1ef6ed0();
   input += synapse0x1ef7a70();
   input += synapse0x1ef7ab0();
   input += synapse0x1ef8440();
   input += synapse0x1ef8480();
   input += synapse0x1ee92c0();
   input += synapse0x1ee9300();
   input += synapse0x1ee9c90();
   input += synapse0x1ee9cd0();
   input += synapse0x1eea660();
   input += synapse0x1eea6a0();
   input += synapse0x1efcb80();
   input += synapse0x1efcbc0();
   input += synapse0x1efd550();
   input += synapse0x1efd590();
   input += synapse0x1efdf20();
   input += synapse0x1efdf60();
   input += synapse0x1efe8f0();
   input += synapse0x1efe930();
   input += synapse0x1eda7e0();
   input += synapse0x1eda820();
   input += synapse0x1eee090();
   input += synapse0x1eee0d0();
   input += synapse0x1eff010();
   input += synapse0x1eff050();
   input += synapse0x1eff090();
   input += synapse0x1eff0d0();
   input += synapse0x1f05f80();
   input += synapse0x1f05fc0();
   input += synapse0x1f06000();
   input += synapse0x1f06040();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1f05be0() {
   double input = input0x1f05be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1f06080() {
   double input = -1.33473;
   input += synapse0x1f063c0();
   input += synapse0x1f06400();
   input += synapse0x1f06440();
   input += synapse0x1f06480();
   input += synapse0x1f064c0();
   input += synapse0x1f06500();
   input += synapse0x1f06540();
   input += synapse0x1f06580();
   input += synapse0x1f065c0();
   input += synapse0x1f06600();
   input += synapse0x1f06640();
   input += synapse0x1f06680();
   input += synapse0x1f066c0();
   input += synapse0x1f06700();
   input += synapse0x1f06740();
   input += synapse0x1f06780();
   input += synapse0x1f06210();
   input += synapse0x1f06250();
   input += synapse0x1f068d0();
   input += synapse0x1f06910();
   input += synapse0x1f06950();
   input += synapse0x1f06990();
   input += synapse0x1f069d0();
   input += synapse0x1f06a10();
   input += synapse0x1f06a50();
   input += synapse0x1f06a90();
   input += synapse0x1f06ad0();
   input += synapse0x1f06b10();
   input += synapse0x1f06b50();
   input += synapse0x1f06b90();
   input += synapse0x1f06bd0();
   input += synapse0x1f06c10();
   input += synapse0x1f067c0();
   input += synapse0x1f06800();
   input += synapse0x1f06840();
   input += synapse0x1f06880();
   input += synapse0x1f06e60();
   input += synapse0x1f06ea0();
   input += synapse0x1f06ee0();
   input += synapse0x1f06f20();
   input += synapse0x1f06f60();
   input += synapse0x1f06fa0();
   input += synapse0x1f06fe0();
   input += synapse0x1f07020();
   input += synapse0x1f07060();
   input += synapse0x1f070a0();
   input += synapse0x1f070e0();
   input += synapse0x1f07120();
   input += synapse0x1f07160();
   input += synapse0x1f071a0();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1f06080() {
   double input = input0x1f06080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1f071e0() {
   double input = 0.808018;
   input += synapse0x1f07520();
   input += synapse0x1f07560();
   input += synapse0x1f075a0();
   input += synapse0x1f075e0();
   input += synapse0x1f07620();
   input += synapse0x1f07660();
   input += synapse0x1f076a0();
   input += synapse0x1f076e0();
   input += synapse0x1f07720();
   input += synapse0x1f07760();
   input += synapse0x1f077a0();
   input += synapse0x1f077e0();
   input += synapse0x1f07820();
   input += synapse0x1f07860();
   input += synapse0x1f078a0();
   input += synapse0x1f078e0();
   input += synapse0x1f07370();
   input += synapse0x1f073b0();
   input += synapse0x1f07a30();
   input += synapse0x1f07a70();
   input += synapse0x1f07ab0();
   input += synapse0x1f07af0();
   input += synapse0x1f07b30();
   input += synapse0x1f07b70();
   input += synapse0x1f07bb0();
   input += synapse0x1f07bf0();
   input += synapse0x1f07c30();
   input += synapse0x1f07c70();
   input += synapse0x1f07cb0();
   input += synapse0x1f07cf0();
   input += synapse0x1f07d30();
   input += synapse0x1f07d70();
   input += synapse0x1f07920();
   input += synapse0x1f07960();
   input += synapse0x1f079a0();
   input += synapse0x1f079e0();
   input += synapse0x1f07fc0();
   input += synapse0x1f08000();
   input += synapse0x1f08040();
   input += synapse0x1f08080();
   input += synapse0x1f080c0();
   input += synapse0x1f08100();
   input += synapse0x1f08140();
   input += synapse0x1f08180();
   input += synapse0x1f081c0();
   input += synapse0x1f08200();
   input += synapse0x1f08240();
   input += synapse0x1f08280();
   input += synapse0x1f082c0();
   input += synapse0x1f08300();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1f071e0() {
   double input = input0x1f071e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1f08340() {
   double input = 0.0414093;
   input += synapse0x1f08680();
   input += synapse0x1f086c0();
   input += synapse0x1f08700();
   input += synapse0x1f08740();
   input += synapse0x1f08780();
   input += synapse0x1f087c0();
   input += synapse0x1f08800();
   input += synapse0x1f08840();
   input += synapse0x1f08880();
   input += synapse0x1f088c0();
   input += synapse0x1f08900();
   input += synapse0x1f08940();
   input += synapse0x1f08980();
   input += synapse0x1f089c0();
   input += synapse0x1f08a00();
   input += synapse0x1f08a40();
   input += synapse0x1f084d0();
   input += synapse0x1f08510();
   input += synapse0x1f08b90();
   input += synapse0x1f08bd0();
   input += synapse0x1f08c10();
   input += synapse0x1f08c50();
   input += synapse0x1f08c90();
   input += synapse0x1f08cd0();
   input += synapse0x1f08d10();
   input += synapse0x1f08d50();
   input += synapse0x1f08d90();
   input += synapse0x1f08dd0();
   input += synapse0x1f08e10();
   input += synapse0x1f08e50();
   input += synapse0x1f08e90();
   input += synapse0x1f08ed0();
   input += synapse0x1f08a80();
   input += synapse0x1f08ac0();
   input += synapse0x1f08b00();
   input += synapse0x1f08b40();
   input += synapse0x1f09120();
   input += synapse0x1f09160();
   input += synapse0x1f091a0();
   input += synapse0x1f091e0();
   input += synapse0x1f09220();
   input += synapse0x1f09260();
   input += synapse0x1f092a0();
   input += synapse0x1f092e0();
   input += synapse0x1f09320();
   input += synapse0x1f09360();
   input += synapse0x1f093a0();
   input += synapse0x1f093e0();
   input += synapse0x1f09420();
   input += synapse0x1f09460();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1f08340() {
   double input = input0x1f08340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLsR::input0x1f094a0() {
   double input = 14.6947;
   input += synapse0x1eda580();
   input += synapse0x1f096c0();
   input += synapse0x1f09700();
   input += synapse0x1f09740();
   input += synapse0x1f09780();
   return input;
}

double NNfunction_ss_dLsR::neuron0x1f094a0() {
   double input = input0x1f094a0();
   return (input * 1)+0;
}

double NNfunction_ss_dLsR::synapse0x1c953d0() {
   return (neuron0x1ed5560()*-0.0740458);
}

double NNfunction_ss_dLsR::synapse0x1ed5420() {
   return (neuron0x1ed58a0()*-0.153189);
}

double NNfunction_ss_dLsR::synapse0x1ed5460() {
   return (neuron0x1ed5be0()*-0.0945977);
}

double NNfunction_ss_dLsR::synapse0x1eda870() {
   return (neuron0x1ed5f20()*0.576115);
}

double NNfunction_ss_dLsR::synapse0x1eda8b0() {
   return (neuron0x1ed6260()*0.106087);
}

double NNfunction_ss_dLsR::synapse0x1eda8f0() {
   return (neuron0x1ed65a0()*0.345884);
}

double NNfunction_ss_dLsR::synapse0x1eda930() {
   return (neuron0x1ed68e0()*-0.488388);
}

double NNfunction_ss_dLsR::synapse0x1eda970() {
   return (neuron0x1ed6c20()*0.599778);
}

double NNfunction_ss_dLsR::synapse0x1eda9b0() {
   return (neuron0x1ed6f60()*-0.0566469);
}

double NNfunction_ss_dLsR::synapse0x1eda9f0() {
   return (neuron0x1ed72a0()*-1.06394);
}

double NNfunction_ss_dLsR::synapse0x1edaa30() {
   return (neuron0x1ed75e0()*0.583303);
}

double NNfunction_ss_dLsR::synapse0x1edaa70() {
   return (neuron0x1ed7920()*0.0360596);
}

double NNfunction_ss_dLsR::synapse0x1edaab0() {
   return (neuron0x1ed7c60()*-0.447007);
}

double NNfunction_ss_dLsR::synapse0x1edaaf0() {
   return (neuron0x1ed7fa0()*-0.266526);
}

double NNfunction_ss_dLsR::synapse0x1edab30() {
   return (neuron0x1ed82e0()*0.178566);
}

double NNfunction_ss_dLsR::synapse0x1edab70() {
   return (neuron0x1ed8620()*0.47208);
}

double NNfunction_ss_dLsR::synapse0x1ed5390() {
   return (neuron0x1ed8960()*0.417065);
}

double NNfunction_ss_dLsR::synapse0x1ed53d0() {
   return (neuron0x1ed8ec0()*0.0289566);
}

double NNfunction_ss_dLsR::synapse0x1c86c70() {
   return (neuron0x1ed90e0()*-0.105957);
}

double NNfunction_ss_dLsR::synapse0x1c86cb0() {
   return (neuron0x1ed9420()*-0.402446);
}

double NNfunction_ss_dLsR::synapse0x1edadd0() {
   return (neuron0x1ed9760()*-0.0284742);
}

double NNfunction_ss_dLsR::synapse0x1edae10() {
   return (neuron0x1ed9aa0()*0.720199);
}

double NNfunction_ss_dLsR::synapse0x1edae50() {
   return (neuron0x1ed9de0()*-0.50124);
}

double NNfunction_ss_dLsR::synapse0x1edae90() {
   return (neuron0x1eda120()*0.311353);
}

double NNfunction_ss_dLsR::synapse0x1edb210() {
   return (neuron0x1ed5560()*0.286731);
}

double NNfunction_ss_dLsR::synapse0x1edb250() {
   return (neuron0x1ed58a0()*0.00143854);
}

double NNfunction_ss_dLsR::synapse0x1edb290() {
   return (neuron0x1ed5be0()*0.302366);
}

double NNfunction_ss_dLsR::synapse0x1edb2d0() {
   return (neuron0x1ed5f20()*0.586379);
}

double NNfunction_ss_dLsR::synapse0x1edb310() {
   return (neuron0x1ed6260()*-0.0111493);
}

double NNfunction_ss_dLsR::synapse0x1edb350() {
   return (neuron0x1ed65a0()*-0.155481);
}

double NNfunction_ss_dLsR::synapse0x1edb390() {
   return (neuron0x1ed68e0()*0.222602);
}

double NNfunction_ss_dLsR::synapse0x1edb3d0() {
   return (neuron0x1ed6c20()*0.164955);
}

double NNfunction_ss_dLsR::synapse0x1edb410() {
   return (neuron0x1ed6f60()*-0.0825368);
}

double NNfunction_ss_dLsR::synapse0x1edacc0() {
   return (neuron0x1ed72a0()*0.0534626);
}

double NNfunction_ss_dLsR::synapse0x1edad00() {
   return (neuron0x1ed75e0()*0.0253343);
}

double NNfunction_ss_dLsR::synapse0x1edad40() {
   return (neuron0x1ed7920()*0.705332);
}

double NNfunction_ss_dLsR::synapse0x1edad80() {
   return (neuron0x1ed7c60()*0.0117394);
}

double NNfunction_ss_dLsR::synapse0x1edb660() {
   return (neuron0x1ed7fa0()*-0.064327);
}

double NNfunction_ss_dLsR::synapse0x1edb6a0() {
   return (neuron0x1ed82e0()*0.0234508);
}

double NNfunction_ss_dLsR::synapse0x1edb6e0() {
   return (neuron0x1ed8620()*0.0179339);
}

double NNfunction_ss_dLsR::synapse0x1edb060() {
   return (neuron0x1ed8960()*-0.12225);
}

double NNfunction_ss_dLsR::synapse0x1edb0a0() {
   return (neuron0x1ed8ec0()*0.372793);
}

double NNfunction_ss_dLsR::synapse0x1edb830() {
   return (neuron0x1ed90e0()*0.0113395);
}

double NNfunction_ss_dLsR::synapse0x1edb870() {
   return (neuron0x1ed9420()*0.0997063);
}

double NNfunction_ss_dLsR::synapse0x1edb8b0() {
   return (neuron0x1ed9760()*0.0554679);
}

double NNfunction_ss_dLsR::synapse0x1edb8f0() {
   return (neuron0x1ed9aa0()*-0.0847547);
}

double NNfunction_ss_dLsR::synapse0x1edb930() {
   return (neuron0x1ed9de0()*-0.0839717);
}

double NNfunction_ss_dLsR::synapse0x1edb970() {
   return (neuron0x1eda120()*-0.0370624);
}

double NNfunction_ss_dLsR::synapse0x1edbcf0() {
   return (neuron0x1ed5560()*0.0126357);
}

double NNfunction_ss_dLsR::synapse0x1edbd30() {
   return (neuron0x1ed58a0()*0.02343);
}

double NNfunction_ss_dLsR::synapse0x1edbd70() {
   return (neuron0x1ed5be0()*-0.0999619);
}

double NNfunction_ss_dLsR::synapse0x1edbdb0() {
   return (neuron0x1ed5f20()*0.056642);
}

double NNfunction_ss_dLsR::synapse0x1edbdf0() {
   return (neuron0x1ed6260()*0.144997);
}

double NNfunction_ss_dLsR::synapse0x1edbe30() {
   return (neuron0x1ed65a0()*0.0886345);
}

double NNfunction_ss_dLsR::synapse0x1edbe70() {
   return (neuron0x1ed68e0()*-0.0146191);
}

double NNfunction_ss_dLsR::synapse0x1edbeb0() {
   return (neuron0x1ed6c20()*-0.0639253);
}

double NNfunction_ss_dLsR::synapse0x1edbef0() {
   return (neuron0x1ed6f60()*-0.156687);
}

double NNfunction_ss_dLsR::synapse0x1edbf30() {
   return (neuron0x1ed72a0()*0.195069);
}

double NNfunction_ss_dLsR::synapse0x1edbf70() {
   return (neuron0x1ed75e0()*0.00756483);
}

double NNfunction_ss_dLsR::synapse0x1edbfb0() {
   return (neuron0x1ed7920()*0.252541);
}

double NNfunction_ss_dLsR::synapse0x1edbff0() {
   return (neuron0x1ed7c60()*0.0380936);
}

double NNfunction_ss_dLsR::synapse0x1edc030() {
   return (neuron0x1ed7fa0()*0.192033);
}

double NNfunction_ss_dLsR::synapse0x1edc070() {
   return (neuron0x1ed82e0()*0.00205718);
}

double NNfunction_ss_dLsR::synapse0x1edc0b0() {
   return (neuron0x1ed8620()*-0.0627302);
}

double NNfunction_ss_dLsR::synapse0x1edbb40() {
   return (neuron0x1ed8960()*0.0729604);
}

double NNfunction_ss_dLsR::synapse0x1edbb80() {
   return (neuron0x1ed8ec0()*0.100939);
}

double NNfunction_ss_dLsR::synapse0x1c94ac0() {
   return (neuron0x1ed90e0()*0.255114);
}

double NNfunction_ss_dLsR::synapse0x1c94b00() {
   return (neuron0x1ed9420()*-0.0103886);
}

double NNfunction_ss_dLsR::synapse0x1ec45f0() {
   return (neuron0x1ed9760()*-0.0470221);
}

double NNfunction_ss_dLsR::synapse0x1ec4630() {
   return (neuron0x1ed9aa0()*0.101765);
}

double NNfunction_ss_dLsR::synapse0x1ec4670() {
   return (neuron0x1ed9de0()*0.0514362);
}

double NNfunction_ss_dLsR::synapse0x1ed54a0() {
   return (neuron0x1eda120()*0.0184543);
}

double NNfunction_ss_dLsR::synapse0x1edb600() {
   return (neuron0x1ed5560()*-0.019024);
}

double NNfunction_ss_dLsR::synapse0x1ed54e0() {
   return (neuron0x1ed58a0()*-0.00461235);
}

double NNfunction_ss_dLsR::synapse0x1ed5520() {
   return (neuron0x1ed5be0()*-0.00532428);
}

double NNfunction_ss_dLsR::synapse0x1edc200() {
   return (neuron0x1ed5f20()*-1.19311);
}

double NNfunction_ss_dLsR::synapse0x1edc240() {
   return (neuron0x1ed6260()*-0.00630051);
}

double NNfunction_ss_dLsR::synapse0x1edc280() {
   return (neuron0x1ed65a0()*-0.0182263);
}

double NNfunction_ss_dLsR::synapse0x1edc2c0() {
   return (neuron0x1ed68e0()*0.00467478);
}

double NNfunction_ss_dLsR::synapse0x1edc300() {
   return (neuron0x1ed6c20()*-0.000346254);
}

double NNfunction_ss_dLsR::synapse0x1edc340() {
   return (neuron0x1ed6f60()*0.0034899);
}

double NNfunction_ss_dLsR::synapse0x1edc380() {
   return (neuron0x1ed72a0()*-0.0207105);
}

double NNfunction_ss_dLsR::synapse0x1edc3c0() {
   return (neuron0x1ed75e0()*-0.0254447);
}

double NNfunction_ss_dLsR::synapse0x1edc400() {
   return (neuron0x1ed7920()*0.850263);
}

double NNfunction_ss_dLsR::synapse0x1edc440() {
   return (neuron0x1ed7c60()*0.0118974);
}

double NNfunction_ss_dLsR::synapse0x1edc480() {
   return (neuron0x1ed7fa0()*0.0152817);
}

double NNfunction_ss_dLsR::synapse0x1edc4c0() {
   return (neuron0x1ed82e0()*0.0107176);
}

double NNfunction_ss_dLsR::synapse0x1edc500() {
   return (neuron0x1ed8620()*0.0200617);
}

double NNfunction_ss_dLsR::synapse0x1edb450() {
   return (neuron0x1ed8960()*0.00861122);
}

double NNfunction_ss_dLsR::synapse0x1edb490() {
   return (neuron0x1ed8ec0()*0.00945121);
}

double NNfunction_ss_dLsR::synapse0x1edc650() {
   return (neuron0x1ed90e0()*0.630491);
}

double NNfunction_ss_dLsR::synapse0x1edc690() {
   return (neuron0x1ed9420()*0.00352339);
}

double NNfunction_ss_dLsR::synapse0x1edc6d0() {
   return (neuron0x1ed9760()*-0.0144075);
}

double NNfunction_ss_dLsR::synapse0x1edc710() {
   return (neuron0x1ed9aa0()*0.000139787);
}

double NNfunction_ss_dLsR::synapse0x1edc750() {
   return (neuron0x1ed9de0()*-0.0122442);
}

double NNfunction_ss_dLsR::synapse0x1edc790() {
   return (neuron0x1eda120()*0.00879941);
}

double NNfunction_ss_dLsR::synapse0x1edcb10() {
   return (neuron0x1ed5560()*-0.0941885);
}

double NNfunction_ss_dLsR::synapse0x1edcb50() {
   return (neuron0x1ed58a0()*0.067842);
}

double NNfunction_ss_dLsR::synapse0x1edcb90() {
   return (neuron0x1ed5be0()*-0.150316);
}

double NNfunction_ss_dLsR::synapse0x1edcbd0() {
   return (neuron0x1ed5f20()*-0.0674574);
}

double NNfunction_ss_dLsR::synapse0x1edcc10() {
   return (neuron0x1ed6260()*-0.301093);
}

double NNfunction_ss_dLsR::synapse0x1edcc50() {
   return (neuron0x1ed65a0()*-0.150653);
}

double NNfunction_ss_dLsR::synapse0x1edcc90() {
   return (neuron0x1ed68e0()*0.230275);
}

double NNfunction_ss_dLsR::synapse0x1edccd0() {
   return (neuron0x1ed6c20()*-0.248135);
}

double NNfunction_ss_dLsR::synapse0x1edcd10() {
   return (neuron0x1ed6f60()*0.151902);
}

double NNfunction_ss_dLsR::synapse0x1edcd50() {
   return (neuron0x1ed72a0()*0.123633);
}

double NNfunction_ss_dLsR::synapse0x1edcd90() {
   return (neuron0x1ed75e0()*-0.416662);
}

double NNfunction_ss_dLsR::synapse0x1edcdd0() {
   return (neuron0x1ed7920()*0.0837459);
}

double NNfunction_ss_dLsR::synapse0x1edce10() {
   return (neuron0x1ed7c60()*-0.416698);
}

double NNfunction_ss_dLsR::synapse0x1edce50() {
   return (neuron0x1ed7fa0()*-0.0329238);
}

double NNfunction_ss_dLsR::synapse0x1edce90() {
   return (neuron0x1ed82e0()*-0.0907895);
}

double NNfunction_ss_dLsR::synapse0x1edced0() {
   return (neuron0x1ed8620()*-0.135484);
}

double NNfunction_ss_dLsR::synapse0x1edc960() {
   return (neuron0x1ed8960()*0.180032);
}

double NNfunction_ss_dLsR::synapse0x1edc9a0() {
   return (neuron0x1ed8ec0()*-0.277251);
}

double NNfunction_ss_dLsR::synapse0x1edd020() {
   return (neuron0x1ed90e0()*0.297221);
}

double NNfunction_ss_dLsR::synapse0x1edd060() {
   return (neuron0x1ed9420()*0.115888);
}

double NNfunction_ss_dLsR::synapse0x1edd0a0() {
   return (neuron0x1ed9760()*-0.334433);
}

double NNfunction_ss_dLsR::synapse0x1edd0e0() {
   return (neuron0x1ed9aa0()*0.05569);
}

double NNfunction_ss_dLsR::synapse0x1edd120() {
   return (neuron0x1ed9de0()*-0.373807);
}

double NNfunction_ss_dLsR::synapse0x1edd160() {
   return (neuron0x1eda120()*0.265208);
}

double NNfunction_ss_dLsR::synapse0x1edd4e0() {
   return (neuron0x1ed5560()*-0.232555);
}

double NNfunction_ss_dLsR::synapse0x1edd520() {
   return (neuron0x1ed58a0()*-0.774893);
}

double NNfunction_ss_dLsR::synapse0x1edd560() {
   return (neuron0x1ed5be0()*0.317975);
}

double NNfunction_ss_dLsR::synapse0x1edd5a0() {
   return (neuron0x1ed5f20()*-0.174437);
}

double NNfunction_ss_dLsR::synapse0x1edd5e0() {
   return (neuron0x1ed6260()*0.8566);
}

double NNfunction_ss_dLsR::synapse0x1edd620() {
   return (neuron0x1ed65a0()*1.00724);
}

double NNfunction_ss_dLsR::synapse0x1edd660() {
   return (neuron0x1ed68e0()*-0.346364);
}

double NNfunction_ss_dLsR::synapse0x1edd6a0() {
   return (neuron0x1ed6c20()*0.228977);
}

double NNfunction_ss_dLsR::synapse0x1edd6e0() {
   return (neuron0x1ed6f60()*-0.874629);
}

double NNfunction_ss_dLsR::synapse0x1c94e30() {
   return (neuron0x1ed72a0()*-0.0112513);
}

double NNfunction_ss_dLsR::synapse0x1c94e70() {
   return (neuron0x1ed75e0()*-0.47939);
}

double NNfunction_ss_dLsR::synapse0x1c94eb0() {
   return (neuron0x1ed7920()*-0.166763);
}

double NNfunction_ss_dLsR::synapse0x1c94ef0() {
   return (neuron0x1ed7c60()*0.0136306);
}

double NNfunction_ss_dLsR::synapse0x1c94f30() {
   return (neuron0x1ed7fa0()*0.395955);
}

double NNfunction_ss_dLsR::synapse0x1c94f70() {
   return (neuron0x1ed82e0()*0.492462);
}

double NNfunction_ss_dLsR::synapse0x1c94fb0() {
   return (neuron0x1ed8620()*0.579147);
}

double NNfunction_ss_dLsR::synapse0x1edd330() {
   return (neuron0x1ed8960()*0.00632932);
}

double NNfunction_ss_dLsR::synapse0x1edd370() {
   return (neuron0x1ed8ec0()*0.155416);
}

double NNfunction_ss_dLsR::synapse0x1c95100() {
   return (neuron0x1ed90e0()*0.128389);
}

double NNfunction_ss_dLsR::synapse0x1c95140() {
   return (neuron0x1ed9420()*-0.244858);
}

double NNfunction_ss_dLsR::synapse0x1c95180() {
   return (neuron0x1ed9760()*-0.340494);
}

double NNfunction_ss_dLsR::synapse0x1c951c0() {
   return (neuron0x1ed9aa0()*0.0483891);
}

double NNfunction_ss_dLsR::synapse0x1c95200() {
   return (neuron0x1ed9de0()*0.468786);
}

double NNfunction_ss_dLsR::synapse0x1eddf30() {
   return (neuron0x1eda120()*1.0347);
}

double NNfunction_ss_dLsR::synapse0x1ede2b0() {
   return (neuron0x1ed5560()*-0.190877);
}

double NNfunction_ss_dLsR::synapse0x1ede2f0() {
   return (neuron0x1ed58a0()*-0.214887);
}

double NNfunction_ss_dLsR::synapse0x1ede330() {
   return (neuron0x1ed5be0()*-0.489782);
}

double NNfunction_ss_dLsR::synapse0x1ede370() {
   return (neuron0x1ed5f20()*-0.159817);
}

double NNfunction_ss_dLsR::synapse0x1ede3b0() {
   return (neuron0x1ed6260()*-0.773845);
}

double NNfunction_ss_dLsR::synapse0x1ede3f0() {
   return (neuron0x1ed65a0()*1.38319);
}

double NNfunction_ss_dLsR::synapse0x1ede430() {
   return (neuron0x1ed68e0()*-0.52911);
}

double NNfunction_ss_dLsR::synapse0x1ede470() {
   return (neuron0x1ed6c20()*0.505145);
}

double NNfunction_ss_dLsR::synapse0x1ede4b0() {
   return (neuron0x1ed6f60()*0.89455);
}

double NNfunction_ss_dLsR::synapse0x1ede4f0() {
   return (neuron0x1ed72a0()*-0.587116);
}

double NNfunction_ss_dLsR::synapse0x1ede530() {
   return (neuron0x1ed75e0()*0.0504147);
}

double NNfunction_ss_dLsR::synapse0x1ede570() {
   return (neuron0x1ed7920()*0.130752);
}

double NNfunction_ss_dLsR::synapse0x1ede5b0() {
   return (neuron0x1ed7c60()*0.20555);
}

double NNfunction_ss_dLsR::synapse0x1ede5f0() {
   return (neuron0x1ed7fa0()*0.0707149);
}

double NNfunction_ss_dLsR::synapse0x1ede630() {
   return (neuron0x1ed82e0()*-0.587201);
}

double NNfunction_ss_dLsR::synapse0x1ede670() {
   return (neuron0x1ed8620()*-0.489268);
}

double NNfunction_ss_dLsR::synapse0x1ede100() {
   return (neuron0x1ed8960()*0.598304);
}

double NNfunction_ss_dLsR::synapse0x1ede140() {
   return (neuron0x1ed8ec0()*0.552239);
}

double NNfunction_ss_dLsR::synapse0x1ede7c0() {
   return (neuron0x1ed90e0()*0.359025);
}

double NNfunction_ss_dLsR::synapse0x1ede800() {
   return (neuron0x1ed9420()*-0.0633512);
}

double NNfunction_ss_dLsR::synapse0x1ede840() {
   return (neuron0x1ed9760()*-1.13348);
}

double NNfunction_ss_dLsR::synapse0x1ede880() {
   return (neuron0x1ed9aa0()*0.098412);
}

double NNfunction_ss_dLsR::synapse0x1ede8c0() {
   return (neuron0x1ed9de0()*0.357514);
}

double NNfunction_ss_dLsR::synapse0x1ede900() {
   return (neuron0x1eda120()*-0.243715);
}

double NNfunction_ss_dLsR::synapse0x1edec80() {
   return (neuron0x1ed5560()*-0.31403);
}

double NNfunction_ss_dLsR::synapse0x1edecc0() {
   return (neuron0x1ed58a0()*0.220027);
}

double NNfunction_ss_dLsR::synapse0x1eded00() {
   return (neuron0x1ed5be0()*0.119398);
}

double NNfunction_ss_dLsR::synapse0x1eded40() {
   return (neuron0x1ed5f20()*1.07445);
}

double NNfunction_ss_dLsR::synapse0x1eded80() {
   return (neuron0x1ed6260()*0.134819);
}

double NNfunction_ss_dLsR::synapse0x1ededc0() {
   return (neuron0x1ed65a0()*-0.199786);
}

double NNfunction_ss_dLsR::synapse0x1edee00() {
   return (neuron0x1ed68e0()*-0.0996959);
}

double NNfunction_ss_dLsR::synapse0x1edee40() {
   return (neuron0x1ed6c20()*-0.141028);
}

double NNfunction_ss_dLsR::synapse0x1edee80() {
   return (neuron0x1ed6f60()*0.0492008);
}

double NNfunction_ss_dLsR::synapse0x1edeec0() {
   return (neuron0x1ed72a0()*-0.0355207);
}

double NNfunction_ss_dLsR::synapse0x1edef00() {
   return (neuron0x1ed75e0()*-0.11118);
}

double NNfunction_ss_dLsR::synapse0x1edef40() {
   return (neuron0x1ed7920()*-0.411853);
}

double NNfunction_ss_dLsR::synapse0x1edef80() {
   return (neuron0x1ed7c60()*0.509058);
}

double NNfunction_ss_dLsR::synapse0x1edefc0() {
   return (neuron0x1ed7fa0()*-0.357002);
}

double NNfunction_ss_dLsR::synapse0x1edf000() {
   return (neuron0x1ed82e0()*0.351742);
}

double NNfunction_ss_dLsR::synapse0x1edf040() {
   return (neuron0x1ed8620()*0.399684);
}

double NNfunction_ss_dLsR::synapse0x1edead0() {
   return (neuron0x1ed8960()*0.0637184);
}

double NNfunction_ss_dLsR::synapse0x1edeb10() {
   return (neuron0x1ed8ec0()*0.400553);
}

double NNfunction_ss_dLsR::synapse0x1edf190() {
   return (neuron0x1ed90e0()*0.736725);
}

double NNfunction_ss_dLsR::synapse0x1edf1d0() {
   return (neuron0x1ed9420()*0.299756);
}

double NNfunction_ss_dLsR::synapse0x1edf210() {
   return (neuron0x1ed9760()*-0.213016);
}

double NNfunction_ss_dLsR::synapse0x1edf250() {
   return (neuron0x1ed9aa0()*-0.168014);
}

double NNfunction_ss_dLsR::synapse0x1edf290() {
   return (neuron0x1ed9de0()*-0.157388);
}

double NNfunction_ss_dLsR::synapse0x1edf2d0() {
   return (neuron0x1eda120()*0.0368154);
}

double NNfunction_ss_dLsR::synapse0x1ed8db0() {
   return (neuron0x1ed5560()*0.0653112);
}

double NNfunction_ss_dLsR::synapse0x1ed8df0() {
   return (neuron0x1ed58a0()*-0.0516792);
}

double NNfunction_ss_dLsR::synapse0x1ed8e30() {
   return (neuron0x1ed5be0()*-0.0117999);
}

double NNfunction_ss_dLsR::synapse0x1ed8e70() {
   return (neuron0x1ed5f20()*-0.248604);
}

double NNfunction_ss_dLsR::synapse0x1edf860() {
   return (neuron0x1ed6260()*0.00304153);
}

double NNfunction_ss_dLsR::synapse0x1edf8a0() {
   return (neuron0x1ed65a0()*0.129681);
}

double NNfunction_ss_dLsR::synapse0x1edf8e0() {
   return (neuron0x1ed68e0()*0.0595322);
}

double NNfunction_ss_dLsR::synapse0x1edf920() {
   return (neuron0x1ed6c20()*-0.0181691);
}

double NNfunction_ss_dLsR::synapse0x1edf960() {
   return (neuron0x1ed6f60()*0.0170164);
}

double NNfunction_ss_dLsR::synapse0x1edf9a0() {
   return (neuron0x1ed72a0()*-0.0533963);
}

double NNfunction_ss_dLsR::synapse0x1edf9e0() {
   return (neuron0x1ed75e0()*0.0601827);
}

double NNfunction_ss_dLsR::synapse0x1edfa20() {
   return (neuron0x1ed7920()*0.48665);
}

double NNfunction_ss_dLsR::synapse0x1edfa60() {
   return (neuron0x1ed7c60()*-0.0589866);
}

double NNfunction_ss_dLsR::synapse0x1edfaa0() {
   return (neuron0x1ed7fa0()*0.0750371);
}

double NNfunction_ss_dLsR::synapse0x1edfae0() {
   return (neuron0x1ed82e0()*-0.0281338);
}

double NNfunction_ss_dLsR::synapse0x1edfb20() {
   return (neuron0x1ed8620()*-0.0762432);
}

double NNfunction_ss_dLsR::synapse0x1edf4a0() {
   return (neuron0x1ed8960()*0.0201519);
}

double NNfunction_ss_dLsR::synapse0x1edf4e0() {
   return (neuron0x1ed8ec0()*-0.138657);
}

double NNfunction_ss_dLsR::synapse0x1edfc70() {
   return (neuron0x1ed90e0()*-1.86154);
}

double NNfunction_ss_dLsR::synapse0x1edfcb0() {
   return (neuron0x1ed9420()*-0.1335);
}

double NNfunction_ss_dLsR::synapse0x1edfcf0() {
   return (neuron0x1ed9760()*-0.0379528);
}

double NNfunction_ss_dLsR::synapse0x1edfd30() {
   return (neuron0x1ed9aa0()*-0.021601);
}

double NNfunction_ss_dLsR::synapse0x1edfd70() {
   return (neuron0x1ed9de0()*0.0341401);
}

double NNfunction_ss_dLsR::synapse0x1edfdb0() {
   return (neuron0x1eda120()*0.00609627);
}

double NNfunction_ss_dLsR::synapse0x1ee0130() {
   return (neuron0x1ed5560()*1.27876);
}

double NNfunction_ss_dLsR::synapse0x1ee0170() {
   return (neuron0x1ed58a0()*-0.140469);
}

double NNfunction_ss_dLsR::synapse0x1ee01b0() {
   return (neuron0x1ed5be0()*0.845071);
}

double NNfunction_ss_dLsR::synapse0x1ee01f0() {
   return (neuron0x1ed5f20()*0.201609);
}

double NNfunction_ss_dLsR::synapse0x1ee0230() {
   return (neuron0x1ed6260()*0.602275);
}

double NNfunction_ss_dLsR::synapse0x1ee0270() {
   return (neuron0x1ed65a0()*0.0377304);
}

double NNfunction_ss_dLsR::synapse0x1ee02b0() {
   return (neuron0x1ed68e0()*0.200598);
}

double NNfunction_ss_dLsR::synapse0x1ee02f0() {
   return (neuron0x1ed6c20()*-0.0754408);
}

double NNfunction_ss_dLsR::synapse0x1ee0330() {
   return (neuron0x1ed6f60()*-0.316491);
}

double NNfunction_ss_dLsR::synapse0x1ee0370() {
   return (neuron0x1ed72a0()*0.313963);
}

double NNfunction_ss_dLsR::synapse0x1ee03b0() {
   return (neuron0x1ed75e0()*1.39992);
}

double NNfunction_ss_dLsR::synapse0x1ee03f0() {
   return (neuron0x1ed7920()*0.817202);
}

double NNfunction_ss_dLsR::synapse0x1ee0430() {
   return (neuron0x1ed7c60()*-0.659695);
}

double NNfunction_ss_dLsR::synapse0x1ee0470() {
   return (neuron0x1ed7fa0()*-0.751611);
}

double NNfunction_ss_dLsR::synapse0x1ee04b0() {
   return (neuron0x1ed82e0()*-0.0573481);
}

double NNfunction_ss_dLsR::synapse0x1ee04f0() {
   return (neuron0x1ed8620()*0.283155);
}

double NNfunction_ss_dLsR::synapse0x1edff80() {
   return (neuron0x1ed8960()*-0.321701);
}

double NNfunction_ss_dLsR::synapse0x1edffc0() {
   return (neuron0x1ed8ec0()*-0.784241);
}

double NNfunction_ss_dLsR::synapse0x1ee0640() {
   return (neuron0x1ed90e0()*-0.584778);
}

double NNfunction_ss_dLsR::synapse0x1ee0680() {
   return (neuron0x1ed9420()*-0.679712);
}

double NNfunction_ss_dLsR::synapse0x1ee06c0() {
   return (neuron0x1ed9760()*-0.502135);
}

double NNfunction_ss_dLsR::synapse0x1ee0700() {
   return (neuron0x1ed9aa0()*0.40491);
}

double NNfunction_ss_dLsR::synapse0x1ee0740() {
   return (neuron0x1ed9de0()*-0.677589);
}

double NNfunction_ss_dLsR::synapse0x1ee0780() {
   return (neuron0x1eda120()*0.0471434);
}

double NNfunction_ss_dLsR::synapse0x1ee0b00() {
   return (neuron0x1ed5560()*0.155425);
}

double NNfunction_ss_dLsR::synapse0x1ee0b40() {
   return (neuron0x1ed58a0()*-0.0381756);
}

double NNfunction_ss_dLsR::synapse0x1ee0b80() {
   return (neuron0x1ed5be0()*-0.0725335);
}

double NNfunction_ss_dLsR::synapse0x1ee0bc0() {
   return (neuron0x1ed5f20()*0.775232);
}

double NNfunction_ss_dLsR::synapse0x1ee0c00() {
   return (neuron0x1ed6260()*-0.176933);
}

double NNfunction_ss_dLsR::synapse0x1ee0c40() {
   return (neuron0x1ed65a0()*0.257363);
}

double NNfunction_ss_dLsR::synapse0x1ee0c80() {
   return (neuron0x1ed68e0()*-0.166386);
}

double NNfunction_ss_dLsR::synapse0x1ee0cc0() {
   return (neuron0x1ed6c20()*0.0731325);
}

double NNfunction_ss_dLsR::synapse0x1ee0d00() {
   return (neuron0x1ed6f60()*0.21692);
}

double NNfunction_ss_dLsR::synapse0x1ee0d40() {
   return (neuron0x1ed72a0()*0.0459524);
}

double NNfunction_ss_dLsR::synapse0x1ee0d80() {
   return (neuron0x1ed75e0()*0.099565);
}

double NNfunction_ss_dLsR::synapse0x1ee0dc0() {
   return (neuron0x1ed7920()*2.29511);
}

double NNfunction_ss_dLsR::synapse0x1ee0e00() {
   return (neuron0x1ed7c60()*0.250371);
}

double NNfunction_ss_dLsR::synapse0x1ee0e40() {
   return (neuron0x1ed7fa0()*-0.354167);
}

double NNfunction_ss_dLsR::synapse0x1ee0e80() {
   return (neuron0x1ed82e0()*0.157333);
}

double NNfunction_ss_dLsR::synapse0x1ee0ec0() {
   return (neuron0x1ed8620()*0.0544205);
}

double NNfunction_ss_dLsR::synapse0x1ee0950() {
   return (neuron0x1ed8960()*0.0803358);
}

double NNfunction_ss_dLsR::synapse0x1ee0990() {
   return (neuron0x1ed8ec0()*-0.0112089);
}

double NNfunction_ss_dLsR::synapse0x1edd720() {
   return (neuron0x1ed90e0()*-0.104849);
}

double NNfunction_ss_dLsR::synapse0x1edd760() {
   return (neuron0x1ed9420()*0.0161206);
}

double NNfunction_ss_dLsR::synapse0x1edd7a0() {
   return (neuron0x1ed9760()*0.118525);
}

double NNfunction_ss_dLsR::synapse0x1edd7e0() {
   return (neuron0x1ed9aa0()*-0.0766151);
}

double NNfunction_ss_dLsR::synapse0x1edd820() {
   return (neuron0x1ed9de0()*0.0689269);
}

double NNfunction_ss_dLsR::synapse0x1edd860() {
   return (neuron0x1eda120()*-0.0421861);
}

double NNfunction_ss_dLsR::synapse0x1eddbe0() {
   return (neuron0x1ed5560()*-0.103543);
}

double NNfunction_ss_dLsR::synapse0x1eddc20() {
   return (neuron0x1ed58a0()*0.103326);
}

double NNfunction_ss_dLsR::synapse0x1eddc60() {
   return (neuron0x1ed5be0()*0.506034);
}

double NNfunction_ss_dLsR::synapse0x1eddca0() {
   return (neuron0x1ed5f20()*0.153666);
}

double NNfunction_ss_dLsR::synapse0x1eddce0() {
   return (neuron0x1ed6260()*0.0903362);
}

double NNfunction_ss_dLsR::synapse0x1eddd20() {
   return (neuron0x1ed65a0()*0.0751743);
}

double NNfunction_ss_dLsR::synapse0x1eddd60() {
   return (neuron0x1ed68e0()*-0.0480572);
}

double NNfunction_ss_dLsR::synapse0x1eddda0() {
   return (neuron0x1ed6c20()*-0.0697974);
}

double NNfunction_ss_dLsR::synapse0x1eddde0() {
   return (neuron0x1ed6f60()*-0.0260344);
}

double NNfunction_ss_dLsR::synapse0x1edde20() {
   return (neuron0x1ed72a0()*-0.0106929);
}

double NNfunction_ss_dLsR::synapse0x1edde60() {
   return (neuron0x1ed75e0()*-0.0778094);
}

double NNfunction_ss_dLsR::synapse0x1eddea0() {
   return (neuron0x1ed7920()*-0.028434);
}

double NNfunction_ss_dLsR::synapse0x1eddee0() {
   return (neuron0x1ed7c60()*-0.596744);
}

double NNfunction_ss_dLsR::synapse0x1ee2020() {
   return (neuron0x1ed7fa0()*0.162678);
}

double NNfunction_ss_dLsR::synapse0x1ee2060() {
   return (neuron0x1ed82e0()*-0.463029);
}

double NNfunction_ss_dLsR::synapse0x1ee20a0() {
   return (neuron0x1ed8620()*-0.621403);
}

double NNfunction_ss_dLsR::synapse0x1edda30() {
   return (neuron0x1ed8960()*0.381775);
}

double NNfunction_ss_dLsR::synapse0x1edda70() {
   return (neuron0x1ed8ec0()*-0.188799);
}

double NNfunction_ss_dLsR::synapse0x1ee21f0() {
   return (neuron0x1ed90e0()*0.147589);
}

double NNfunction_ss_dLsR::synapse0x1ee2230() {
   return (neuron0x1ed9420()*-0.0731549);
}

double NNfunction_ss_dLsR::synapse0x1ee2270() {
   return (neuron0x1ed9760()*0.000736921);
}

double NNfunction_ss_dLsR::synapse0x1ee22b0() {
   return (neuron0x1ed9aa0()*-0.0412729);
}

double NNfunction_ss_dLsR::synapse0x1ee22f0() {
   return (neuron0x1ed9de0()*0.0191661);
}

double NNfunction_ss_dLsR::synapse0x1ee2330() {
   return (neuron0x1eda120()*-0.0279311);
}

double NNfunction_ss_dLsR::synapse0x1ee26b0() {
   return (neuron0x1ed5560()*0.296974);
}

double NNfunction_ss_dLsR::synapse0x1ee26f0() {
   return (neuron0x1ed58a0()*-0.183087);
}

double NNfunction_ss_dLsR::synapse0x1ee2730() {
   return (neuron0x1ed5be0()*-0.0423098);
}

double NNfunction_ss_dLsR::synapse0x1ee2770() {
   return (neuron0x1ed5f20()*0.198749);
}

double NNfunction_ss_dLsR::synapse0x1ee27b0() {
   return (neuron0x1ed6260()*0.0755968);
}

double NNfunction_ss_dLsR::synapse0x1ee27f0() {
   return (neuron0x1ed65a0()*-0.0432892);
}

double NNfunction_ss_dLsR::synapse0x1ee2830() {
   return (neuron0x1ed68e0()*0.0866971);
}

double NNfunction_ss_dLsR::synapse0x1ee2870() {
   return (neuron0x1ed6c20()*-0.378155);
}

double NNfunction_ss_dLsR::synapse0x1ee28b0() {
   return (neuron0x1ed6f60()*-0.170651);
}

double NNfunction_ss_dLsR::synapse0x1ee28f0() {
   return (neuron0x1ed72a0()*0.256349);
}

double NNfunction_ss_dLsR::synapse0x1ee2930() {
   return (neuron0x1ed75e0()*-0.16995);
}

double NNfunction_ss_dLsR::synapse0x1ee2970() {
   return (neuron0x1ed7920()*-0.432854);
}

double NNfunction_ss_dLsR::synapse0x1ee29b0() {
   return (neuron0x1ed7c60()*0.298818);
}

double NNfunction_ss_dLsR::synapse0x1ee29f0() {
   return (neuron0x1ed7fa0()*0.80573);
}

double NNfunction_ss_dLsR::synapse0x1ee2a30() {
   return (neuron0x1ed82e0()*-0.232198);
}

double NNfunction_ss_dLsR::synapse0x1ee2a70() {
   return (neuron0x1ed8620()*0.0503574);
}

double NNfunction_ss_dLsR::synapse0x1ee2500() {
   return (neuron0x1ed8960()*0.566242);
}

double NNfunction_ss_dLsR::synapse0x1ee2540() {
   return (neuron0x1ed8ec0()*0.0491789);
}

double NNfunction_ss_dLsR::synapse0x1ee2bc0() {
   return (neuron0x1ed90e0()*-0.13174);
}

double NNfunction_ss_dLsR::synapse0x1ee2c00() {
   return (neuron0x1ed9420()*-0.271492);
}

double NNfunction_ss_dLsR::synapse0x1ee2c40() {
   return (neuron0x1ed9760()*-1.07301);
}

double NNfunction_ss_dLsR::synapse0x1ee2c80() {
   return (neuron0x1ed9aa0()*0.289867);
}

double NNfunction_ss_dLsR::synapse0x1ee2cc0() {
   return (neuron0x1ed9de0()*0.131912);
}

double NNfunction_ss_dLsR::synapse0x1ee2d00() {
   return (neuron0x1eda120()*0.618954);
}

double NNfunction_ss_dLsR::synapse0x1ee3080() {
   return (neuron0x1ed5560()*-0.0479527);
}

double NNfunction_ss_dLsR::synapse0x1ee30c0() {
   return (neuron0x1ed58a0()*0.0993993);
}

double NNfunction_ss_dLsR::synapse0x1ee3100() {
   return (neuron0x1ed5be0()*-0.618885);
}

double NNfunction_ss_dLsR::synapse0x1ee3140() {
   return (neuron0x1ed5f20()*0.0507921);
}

double NNfunction_ss_dLsR::synapse0x1ee3180() {
   return (neuron0x1ed6260()*-0.761195);
}

double NNfunction_ss_dLsR::synapse0x1ee31c0() {
   return (neuron0x1ed65a0()*-0.489725);
}

double NNfunction_ss_dLsR::synapse0x1ee3200() {
   return (neuron0x1ed68e0()*0.0939006);
}

double NNfunction_ss_dLsR::synapse0x1ee3240() {
   return (neuron0x1ed6c20()*-0.743452);
}

double NNfunction_ss_dLsR::synapse0x1ee3280() {
   return (neuron0x1ed6f60()*-0.459197);
}

double NNfunction_ss_dLsR::synapse0x1ee32c0() {
   return (neuron0x1ed72a0()*0.864575);
}

double NNfunction_ss_dLsR::synapse0x1ee3300() {
   return (neuron0x1ed75e0()*-0.478516);
}

double NNfunction_ss_dLsR::synapse0x1ee3340() {
   return (neuron0x1ed7920()*-0.252047);
}

double NNfunction_ss_dLsR::synapse0x1ee3380() {
   return (neuron0x1ed7c60()*-0.373487);
}

double NNfunction_ss_dLsR::synapse0x1ee33c0() {
   return (neuron0x1ed7fa0()*-0.614017);
}

double NNfunction_ss_dLsR::synapse0x1ee3400() {
   return (neuron0x1ed82e0()*0.767913);
}

double NNfunction_ss_dLsR::synapse0x1ee3440() {
   return (neuron0x1ed8620()*0.34873);
}

double NNfunction_ss_dLsR::synapse0x1ee2ed0() {
   return (neuron0x1ed8960()*-0.658275);
}

double NNfunction_ss_dLsR::synapse0x1ee2f10() {
   return (neuron0x1ed8ec0()*0.0926644);
}

double NNfunction_ss_dLsR::synapse0x1ee3590() {
   return (neuron0x1ed90e0()*0.0962998);
}

double NNfunction_ss_dLsR::synapse0x1ee35d0() {
   return (neuron0x1ed9420()*-0.127434);
}

double NNfunction_ss_dLsR::synapse0x1ee3610() {
   return (neuron0x1ed9760()*-0.0612073);
}

double NNfunction_ss_dLsR::synapse0x1ee3650() {
   return (neuron0x1ed9aa0()*0.147544);
}

double NNfunction_ss_dLsR::synapse0x1ee3690() {
   return (neuron0x1ed9de0()*-0.0523751);
}

double NNfunction_ss_dLsR::synapse0x1ee36d0() {
   return (neuron0x1eda120()*-0.883903);
}

double NNfunction_ss_dLsR::synapse0x1ee3a50() {
   return (neuron0x1ed5560()*0.750643);
}

double NNfunction_ss_dLsR::synapse0x1ee3a90() {
   return (neuron0x1ed58a0()*1.20436);
}

double NNfunction_ss_dLsR::synapse0x1ee3ad0() {
   return (neuron0x1ed5be0()*0.286802);
}

double NNfunction_ss_dLsR::synapse0x1ee3b10() {
   return (neuron0x1ed5f20()*0.733852);
}

double NNfunction_ss_dLsR::synapse0x1ee3b50() {
   return (neuron0x1ed6260()*0.00538596);
}

double NNfunction_ss_dLsR::synapse0x1ee3b90() {
   return (neuron0x1ed65a0()*0.0999688);
}

double NNfunction_ss_dLsR::synapse0x1ee3bd0() {
   return (neuron0x1ed68e0()*0.353935);
}

double NNfunction_ss_dLsR::synapse0x1ee3c10() {
   return (neuron0x1ed6c20()*-0.140779);
}

double NNfunction_ss_dLsR::synapse0x1ee3c50() {
   return (neuron0x1ed6f60()*-0.642128);
}

double NNfunction_ss_dLsR::synapse0x1ee3c90() {
   return (neuron0x1ed72a0()*0.0263749);
}

double NNfunction_ss_dLsR::synapse0x1ee3cd0() {
   return (neuron0x1ed75e0()*-0.432991);
}

double NNfunction_ss_dLsR::synapse0x1ee3d10() {
   return (neuron0x1ed7920()*-0.405899);
}

double NNfunction_ss_dLsR::synapse0x1ee3d50() {
   return (neuron0x1ed7c60()*0.769661);
}

double NNfunction_ss_dLsR::synapse0x1ee3d90() {
   return (neuron0x1ed7fa0()*0.152006);
}

double NNfunction_ss_dLsR::synapse0x1ee3dd0() {
   return (neuron0x1ed82e0()*-0.357513);
}

double NNfunction_ss_dLsR::synapse0x1ee3e10() {
   return (neuron0x1ed8620()*0.313086);
}

double NNfunction_ss_dLsR::synapse0x1ee38a0() {
   return (neuron0x1ed8960()*0.224843);
}

double NNfunction_ss_dLsR::synapse0x1ee38e0() {
   return (neuron0x1ed8ec0()*0.166114);
}

double NNfunction_ss_dLsR::synapse0x1ee3f60() {
   return (neuron0x1ed90e0()*0.942028);
}

double NNfunction_ss_dLsR::synapse0x1ee3fa0() {
   return (neuron0x1ed9420()*0.327478);
}

double NNfunction_ss_dLsR::synapse0x1ee3fe0() {
   return (neuron0x1ed9760()*-0.453627);
}

double NNfunction_ss_dLsR::synapse0x1ee4020() {
   return (neuron0x1ed9aa0()*0.621625);
}

double NNfunction_ss_dLsR::synapse0x1ee4060() {
   return (neuron0x1ed9de0()*-0.608055);
}

double NNfunction_ss_dLsR::synapse0x1ee40a0() {
   return (neuron0x1eda120()*0.789684);
}

double NNfunction_ss_dLsR::synapse0x1ee4420() {
   return (neuron0x1ed5560()*-0.107093);
}

double NNfunction_ss_dLsR::synapse0x1ed5780() {
   return (neuron0x1ed58a0()*-0.674038);
}

double NNfunction_ss_dLsR::synapse0x1ed57c0() {
   return (neuron0x1ed5be0()*0.0727644);
}

double NNfunction_ss_dLsR::synapse0x1ed5ac0() {
   return (neuron0x1ed5f20()*0.191438);
}

double NNfunction_ss_dLsR::synapse0x1ed5b00() {
   return (neuron0x1ed6260()*-0.21014);
}

double NNfunction_ss_dLsR::synapse0x1ed5e00() {
   return (neuron0x1ed65a0()*-0.906915);
}

double NNfunction_ss_dLsR::synapse0x1ed5e40() {
   return (neuron0x1ed68e0()*0.163194);
}

double NNfunction_ss_dLsR::synapse0x1ed6140() {
   return (neuron0x1ed6c20()*-0.802932);
}

double NNfunction_ss_dLsR::synapse0x1ed6180() {
   return (neuron0x1ed6f60()*-0.0175072);
}

double NNfunction_ss_dLsR::synapse0x1ed6480() {
   return (neuron0x1ed72a0()*-0.297955);
}

double NNfunction_ss_dLsR::synapse0x1ed64c0() {
   return (neuron0x1ed75e0()*0.0673873);
}

double NNfunction_ss_dLsR::synapse0x1ed67c0() {
   return (neuron0x1ed7920()*0.495858);
}

double NNfunction_ss_dLsR::synapse0x1ed6800() {
   return (neuron0x1ed7c60()*-0.0412415);
}

double NNfunction_ss_dLsR::synapse0x1ed6b00() {
   return (neuron0x1ed7fa0()*-0.0747548);
}

double NNfunction_ss_dLsR::synapse0x1ed6b40() {
   return (neuron0x1ed82e0()*0.00996626);
}

double NNfunction_ss_dLsR::synapse0x1ed6e40() {
   return (neuron0x1ed8620()*0.467645);
}

double NNfunction_ss_dLsR::synapse0x1ed6e80() {
   return (neuron0x1ed8960()*0.335826);
}

double NNfunction_ss_dLsR::synapse0x1ed7180() {
   return (neuron0x1ed8ec0()*0.12603);
}

double NNfunction_ss_dLsR::synapse0x1ed71c0() {
   return (neuron0x1ed90e0()*1.21109);
}

double NNfunction_ss_dLsR::synapse0x1ed74c0() {
   return (neuron0x1ed9420()*-0.167558);
}

double NNfunction_ss_dLsR::synapse0x1ed7500() {
   return (neuron0x1ed9760()*0.830839);
}

double NNfunction_ss_dLsR::synapse0x1ed7800() {
   return (neuron0x1ed9aa0()*-0.959093);
}

double NNfunction_ss_dLsR::synapse0x1ed7840() {
   return (neuron0x1ed9de0()*0.345597);
}

double NNfunction_ss_dLsR::synapse0x1ed7b40() {
   return (neuron0x1eda120()*-0.0273339);
}

double NNfunction_ss_dLsR::synapse0x1ed7b80() {
   return (neuron0x1ed5560()*0.0350187);
}

double NNfunction_ss_dLsR::synapse0x1ed8840() {
   return (neuron0x1ed58a0()*-0.852303);
}

double NNfunction_ss_dLsR::synapse0x1ed8880() {
   return (neuron0x1ed5be0()*-0.0310986);
}

double NNfunction_ss_dLsR::synapse0x1ee4270() {
   return (neuron0x1ed5f20()*-0.598733);
}

double NNfunction_ss_dLsR::synapse0x1ee42b0() {
   return (neuron0x1ed6260()*1.01957);
}

double NNfunction_ss_dLsR::synapse0x1ed8b80() {
   return (neuron0x1ed65a0()*0.373018);
}

double NNfunction_ss_dLsR::synapse0x1ed8bc0() {
   return (neuron0x1ed68e0()*0.918826);
}

double NNfunction_ss_dLsR::synapse0x1c86b50() {
   return (neuron0x1ed6c20()*-0.244095);
}

double NNfunction_ss_dLsR::synapse0x1c86b90() {
   return (neuron0x1ed6f60()*-0.281391);
}

double NNfunction_ss_dLsR::synapse0x1ed9300() {
   return (neuron0x1ed72a0()*-0.246294);
}

double NNfunction_ss_dLsR::synapse0x1ed9340() {
   return (neuron0x1ed75e0()*-0.593934);
}

double NNfunction_ss_dLsR::synapse0x1ed9640() {
   return (neuron0x1ed7920()*0.211511);
}

double NNfunction_ss_dLsR::synapse0x1ed9680() {
   return (neuron0x1ed7c60()*-0.130198);
}

double NNfunction_ss_dLsR::synapse0x1ed9980() {
   return (neuron0x1ed7fa0()*-0.437128);
}

double NNfunction_ss_dLsR::synapse0x1ed99c0() {
   return (neuron0x1ed82e0()*0.357465);
}

double NNfunction_ss_dLsR::synapse0x1ed9cc0() {
   return (neuron0x1ed8620()*0.231545);
}

double NNfunction_ss_dLsR::synapse0x1ed9d00() {
   return (neuron0x1ed8960()*0.687404);
}

double NNfunction_ss_dLsR::synapse0x1eda000() {
   return (neuron0x1ed8ec0()*0.0210277);
}

double NNfunction_ss_dLsR::synapse0x1eda040() {
   return (neuron0x1ed90e0()*1.16432);
}

double NNfunction_ss_dLsR::synapse0x1eda340() {
   return (neuron0x1ed9420()*-0.583344);
}

double NNfunction_ss_dLsR::synapse0x1eda380() {
   return (neuron0x1ed9760()*-0.15917);
}

double NNfunction_ss_dLsR::synapse0x1ed7e80() {
   return (neuron0x1ed9aa0()*-0.272539);
}

double NNfunction_ss_dLsR::synapse0x1ed7ec0() {
   return (neuron0x1ed9de0()*0.420828);
}

double NNfunction_ss_dLsR::synapse0x1ee6190() {
   return (neuron0x1eda120()*1.21614);
}

double NNfunction_ss_dLsR::synapse0x1ee6510() {
   return (neuron0x1ed5560()*-0.0221254);
}

double NNfunction_ss_dLsR::synapse0x1ee6550() {
   return (neuron0x1ed58a0()*-0.035262);
}

double NNfunction_ss_dLsR::synapse0x1ee6590() {
   return (neuron0x1ed5be0()*-0.065245);
}

double NNfunction_ss_dLsR::synapse0x1ee65d0() {
   return (neuron0x1ed5f20()*-0.274642);
}

double NNfunction_ss_dLsR::synapse0x1ee6610() {
   return (neuron0x1ed6260()*-0.00676994);
}

double NNfunction_ss_dLsR::synapse0x1ee6650() {
   return (neuron0x1ed65a0()*0.0819861);
}

double NNfunction_ss_dLsR::synapse0x1ee6690() {
   return (neuron0x1ed68e0()*-0.0247912);
}

double NNfunction_ss_dLsR::synapse0x1ee66d0() {
   return (neuron0x1ed6c20()*-0.00478829);
}

double NNfunction_ss_dLsR::synapse0x1ee6710() {
   return (neuron0x1ed6f60()*-0.0148408);
}

double NNfunction_ss_dLsR::synapse0x1ee6750() {
   return (neuron0x1ed72a0()*-0.0668193);
}

double NNfunction_ss_dLsR::synapse0x1ee6790() {
   return (neuron0x1ed75e0()*0.0560602);
}

double NNfunction_ss_dLsR::synapse0x1ee67d0() {
   return (neuron0x1ed7920()*-0.94937);
}

double NNfunction_ss_dLsR::synapse0x1ee6810() {
   return (neuron0x1ed7c60()*-0.0377804);
}

double NNfunction_ss_dLsR::synapse0x1ee6850() {
   return (neuron0x1ed7fa0()*-0.010417);
}

double NNfunction_ss_dLsR::synapse0x1ee6890() {
   return (neuron0x1ed82e0()*0.0041612);
}

double NNfunction_ss_dLsR::synapse0x1ee68d0() {
   return (neuron0x1ed8620()*0.00224312);
}

double NNfunction_ss_dLsR::synapse0x1ee6360() {
   return (neuron0x1ed8960()*0.00121186);
}

double NNfunction_ss_dLsR::synapse0x1ee63a0() {
   return (neuron0x1ed8ec0()*-0.0201415);
}

double NNfunction_ss_dLsR::synapse0x1ee6a20() {
   return (neuron0x1ed90e0()*0.638428);
}

double NNfunction_ss_dLsR::synapse0x1ee6a60() {
   return (neuron0x1ed9420()*-0.0223179);
}

double NNfunction_ss_dLsR::synapse0x1ee6aa0() {
   return (neuron0x1ed9760()*0.0295075);
}

double NNfunction_ss_dLsR::synapse0x1ee6ae0() {
   return (neuron0x1ed9aa0()*-0.00633853);
}

double NNfunction_ss_dLsR::synapse0x1ee6b20() {
   return (neuron0x1ed9de0()*-0.00760842);
}

double NNfunction_ss_dLsR::synapse0x1ee6b60() {
   return (neuron0x1eda120()*0.01154);
}

double NNfunction_ss_dLsR::synapse0x1ee6ee0() {
   return (neuron0x1ed5560()*0.0278241);
}

double NNfunction_ss_dLsR::synapse0x1ee6f20() {
   return (neuron0x1ed58a0()*0.163123);
}

double NNfunction_ss_dLsR::synapse0x1ee6f60() {
   return (neuron0x1ed5be0()*-0.622458);
}

double NNfunction_ss_dLsR::synapse0x1ee6fa0() {
   return (neuron0x1ed5f20()*-0.135556);
}

double NNfunction_ss_dLsR::synapse0x1ee6fe0() {
   return (neuron0x1ed6260()*-0.734264);
}

double NNfunction_ss_dLsR::synapse0x1ee7020() {
   return (neuron0x1ed65a0()*0.486823);
}

double NNfunction_ss_dLsR::synapse0x1ee7060() {
   return (neuron0x1ed68e0()*-0.129683);
}

double NNfunction_ss_dLsR::synapse0x1ee70a0() {
   return (neuron0x1ed6c20()*1.00663);
}

double NNfunction_ss_dLsR::synapse0x1ee70e0() {
   return (neuron0x1ed6f60()*-0.645377);
}

double NNfunction_ss_dLsR::synapse0x1ee7120() {
   return (neuron0x1ed72a0()*0.795758);
}

double NNfunction_ss_dLsR::synapse0x1ee7160() {
   return (neuron0x1ed75e0()*-0.393395);
}

double NNfunction_ss_dLsR::synapse0x1ee71a0() {
   return (neuron0x1ed7920()*0.0494285);
}

double NNfunction_ss_dLsR::synapse0x1ee71e0() {
   return (neuron0x1ed7c60()*0.377178);
}

double NNfunction_ss_dLsR::synapse0x1ee7220() {
   return (neuron0x1ed7fa0()*0.0734597);
}

double NNfunction_ss_dLsR::synapse0x1ee7260() {
   return (neuron0x1ed82e0()*-0.061555);
}

double NNfunction_ss_dLsR::synapse0x1ee72a0() {
   return (neuron0x1ed8620()*-0.266218);
}

double NNfunction_ss_dLsR::synapse0x1ee6d30() {
   return (neuron0x1ed8960()*0.467937);
}

double NNfunction_ss_dLsR::synapse0x1ee6d70() {
   return (neuron0x1ed8ec0()*-0.0498322);
}

double NNfunction_ss_dLsR::synapse0x1ee73f0() {
   return (neuron0x1ed90e0()*-0.103855);
}

double NNfunction_ss_dLsR::synapse0x1ee7430() {
   return (neuron0x1ed9420()*0.845433);
}

double NNfunction_ss_dLsR::synapse0x1ee7470() {
   return (neuron0x1ed9760()*-0.321719);
}

double NNfunction_ss_dLsR::synapse0x1ee74b0() {
   return (neuron0x1ed9aa0()*0.296766);
}

double NNfunction_ss_dLsR::synapse0x1ee74f0() {
   return (neuron0x1ed9de0()*-0.114346);
}

double NNfunction_ss_dLsR::synapse0x1ee7530() {
   return (neuron0x1eda120()*-0.301189);
}

double NNfunction_ss_dLsR::synapse0x1ee78b0() {
   return (neuron0x1ed5560()*-0.0103581);
}

double NNfunction_ss_dLsR::synapse0x1ee78f0() {
   return (neuron0x1ed58a0()*-0.0119203);
}

double NNfunction_ss_dLsR::synapse0x1ee7930() {
   return (neuron0x1ed5be0()*-0.0454168);
}

double NNfunction_ss_dLsR::synapse0x1ee7970() {
   return (neuron0x1ed5f20()*-0.653114);
}

double NNfunction_ss_dLsR::synapse0x1ee79b0() {
   return (neuron0x1ed6260()*-0.0342125);
}

double NNfunction_ss_dLsR::synapse0x1ee79f0() {
   return (neuron0x1ed65a0()*-0.00694273);
}

double NNfunction_ss_dLsR::synapse0x1ee7a30() {
   return (neuron0x1ed68e0()*0.00235847);
}

double NNfunction_ss_dLsR::synapse0x1ee7a70() {
   return (neuron0x1ed6c20()*-0.000925348);
}

double NNfunction_ss_dLsR::synapse0x1ee7ab0() {
   return (neuron0x1ed6f60()*0.0323981);
}

double NNfunction_ss_dLsR::synapse0x1ee7af0() {
   return (neuron0x1ed72a0()*-0.0561914);
}

double NNfunction_ss_dLsR::synapse0x1ee7b30() {
   return (neuron0x1ed75e0()*0.0153835);
}

double NNfunction_ss_dLsR::synapse0x1ee7b70() {
   return (neuron0x1ed7920()*2.29837);
}

double NNfunction_ss_dLsR::synapse0x1ee7bb0() {
   return (neuron0x1ed7c60()*0.0192397);
}

double NNfunction_ss_dLsR::synapse0x1ee7bf0() {
   return (neuron0x1ed7fa0()*-0.0531497);
}

double NNfunction_ss_dLsR::synapse0x1ee7c30() {
   return (neuron0x1ed82e0()*-0.0220053);
}

double NNfunction_ss_dLsR::synapse0x1ee7c70() {
   return (neuron0x1ed8620()*0.017929);
}

double NNfunction_ss_dLsR::synapse0x1ee7700() {
   return (neuron0x1ed8960()*-0.0129862);
}

double NNfunction_ss_dLsR::synapse0x1ee7740() {
   return (neuron0x1ed8ec0()*0.057409);
}

double NNfunction_ss_dLsR::synapse0x1ee7dc0() {
   return (neuron0x1ed90e0()*-0.162867);
}

double NNfunction_ss_dLsR::synapse0x1ee7e00() {
   return (neuron0x1ed9420()*-0.00546879);
}

double NNfunction_ss_dLsR::synapse0x1ee7e40() {
   return (neuron0x1ed9760()*0.0584469);
}

double NNfunction_ss_dLsR::synapse0x1ee7e80() {
   return (neuron0x1ed9aa0()*-0.003638);
}

double NNfunction_ss_dLsR::synapse0x1ee7ec0() {
   return (neuron0x1ed9de0()*-0.019414);
}

double NNfunction_ss_dLsR::synapse0x1ee7f00() {
   return (neuron0x1eda120()*-0.044813);
}

double NNfunction_ss_dLsR::synapse0x1ee8280() {
   return (neuron0x1ed5560()*0.112301);
}

double NNfunction_ss_dLsR::synapse0x1ee82c0() {
   return (neuron0x1ed58a0()*-0.166228);
}

double NNfunction_ss_dLsR::synapse0x1ee8300() {
   return (neuron0x1ed5be0()*0.108166);
}

double NNfunction_ss_dLsR::synapse0x1ee8340() {
   return (neuron0x1ed5f20()*0.36625);
}

double NNfunction_ss_dLsR::synapse0x1ee8380() {
   return (neuron0x1ed6260()*-0.152797);
}

double NNfunction_ss_dLsR::synapse0x1ee83c0() {
   return (neuron0x1ed65a0()*-0.0224128);
}

double NNfunction_ss_dLsR::synapse0x1ee8400() {
   return (neuron0x1ed68e0()*-0.0538785);
}

double NNfunction_ss_dLsR::synapse0x1ee8440() {
   return (neuron0x1ed6c20()*-1.49962);
}

double NNfunction_ss_dLsR::synapse0x1ee8480() {
   return (neuron0x1ed6f60()*0.620603);
}

double NNfunction_ss_dLsR::synapse0x1ee84c0() {
   return (neuron0x1ed72a0()*-0.115307);
}

double NNfunction_ss_dLsR::synapse0x1ee8500() {
   return (neuron0x1ed75e0()*0.239425);
}

double NNfunction_ss_dLsR::synapse0x1ee8540() {
   return (neuron0x1ed7920()*-0.751359);
}

double NNfunction_ss_dLsR::synapse0x1ee8580() {
   return (neuron0x1ed7c60()*-0.0955168);
}

double NNfunction_ss_dLsR::synapse0x1ee85c0() {
   return (neuron0x1ed7fa0()*-0.454793);
}

double NNfunction_ss_dLsR::synapse0x1ee8600() {
   return (neuron0x1ed82e0()*0.212272);
}

double NNfunction_ss_dLsR::synapse0x1ee8640() {
   return (neuron0x1ed8620()*0.403388);
}

double NNfunction_ss_dLsR::synapse0x1ee80d0() {
   return (neuron0x1ed8960()*-0.484542);
}

double NNfunction_ss_dLsR::synapse0x1ee8110() {
   return (neuron0x1ed8ec0()*-0.198831);
}

double NNfunction_ss_dLsR::synapse0x1ee8790() {
   return (neuron0x1ed90e0()*-0.729279);
}

double NNfunction_ss_dLsR::synapse0x1ee87d0() {
   return (neuron0x1ed9420()*0.489804);
}

double NNfunction_ss_dLsR::synapse0x1ee8810() {
   return (neuron0x1ed9760()*0.0410687);
}

double NNfunction_ss_dLsR::synapse0x1ee8850() {
   return (neuron0x1ed9aa0()*-0.407626);
}

double NNfunction_ss_dLsR::synapse0x1ee8890() {
   return (neuron0x1ed9de0()*0.0533346);
}

double NNfunction_ss_dLsR::synapse0x1ee88d0() {
   return (neuron0x1eda120()*0.245588);
}

double NNfunction_ss_dLsR::synapse0x1ee8c50() {
   return (neuron0x1ed5560()*-0.681951);
}

double NNfunction_ss_dLsR::synapse0x1ee8c90() {
   return (neuron0x1ed58a0()*0.393718);
}

double NNfunction_ss_dLsR::synapse0x1ee8cd0() {
   return (neuron0x1ed5be0()*0.0705335);
}

double NNfunction_ss_dLsR::synapse0x1ee8d10() {
   return (neuron0x1ed5f20()*0.457251);
}

double NNfunction_ss_dLsR::synapse0x1ee8d50() {
   return (neuron0x1ed6260()*0.669143);
}

double NNfunction_ss_dLsR::synapse0x1ee8d90() {
   return (neuron0x1ed65a0()*0.284028);
}

double NNfunction_ss_dLsR::synapse0x1ee8dd0() {
   return (neuron0x1ed68e0()*-0.370492);
}

double NNfunction_ss_dLsR::synapse0x1ee8e10() {
   return (neuron0x1ed6c20()*0.120488);
}

double NNfunction_ss_dLsR::synapse0x1ee8e50() {
   return (neuron0x1ed6f60()*-0.30091);
}

double NNfunction_ss_dLsR::synapse0x1ee1010() {
   return (neuron0x1ed72a0()*-0.11555);
}

double NNfunction_ss_dLsR::synapse0x1ee1050() {
   return (neuron0x1ed75e0()*-0.353784);
}

double NNfunction_ss_dLsR::synapse0x1ee1090() {
   return (neuron0x1ed7920()*0.440285);
}

double NNfunction_ss_dLsR::synapse0x1ee10d0() {
   return (neuron0x1ed7c60()*0.183458);
}

double NNfunction_ss_dLsR::synapse0x1ee1110() {
   return (neuron0x1ed7fa0()*-0.503025);
}

double NNfunction_ss_dLsR::synapse0x1ee1150() {
   return (neuron0x1ed82e0()*0.847224);
}

double NNfunction_ss_dLsR::synapse0x1ee1190() {
   return (neuron0x1ed8620()*0.18203);
}

double NNfunction_ss_dLsR::synapse0x1ee8aa0() {
   return (neuron0x1ed8960()*-0.370582);
}

double NNfunction_ss_dLsR::synapse0x1ee8ae0() {
   return (neuron0x1ed8ec0()*1.06182);
}

double NNfunction_ss_dLsR::synapse0x1ee12e0() {
   return (neuron0x1ed90e0()*-0.956553);
}

double NNfunction_ss_dLsR::synapse0x1ee1320() {
   return (neuron0x1ed9420()*0.165524);
}

double NNfunction_ss_dLsR::synapse0x1ee1360() {
   return (neuron0x1ed9760()*-0.137694);
}

double NNfunction_ss_dLsR::synapse0x1ee13a0() {
   return (neuron0x1ed9aa0()*0.833442);
}

double NNfunction_ss_dLsR::synapse0x1ee13e0() {
   return (neuron0x1ed9de0()*0.376399);
}

double NNfunction_ss_dLsR::synapse0x1ee1420() {
   return (neuron0x1eda120()*-0.665474);
}

double NNfunction_ss_dLsR::synapse0x1ee17a0() {
   return (neuron0x1ed5560()*-0.256617);
}

double NNfunction_ss_dLsR::synapse0x1ee17e0() {
   return (neuron0x1ed58a0()*0.113562);
}

double NNfunction_ss_dLsR::synapse0x1ee1820() {
   return (neuron0x1ed5be0()*0.0515757);
}

double NNfunction_ss_dLsR::synapse0x1ee1860() {
   return (neuron0x1ed5f20()*0.99789);
}

double NNfunction_ss_dLsR::synapse0x1ee18a0() {
   return (neuron0x1ed6260()*0.254663);
}

double NNfunction_ss_dLsR::synapse0x1ee18e0() {
   return (neuron0x1ed65a0()*0.0744048);
}

double NNfunction_ss_dLsR::synapse0x1ee1920() {
   return (neuron0x1ed68e0()*0.119069);
}

double NNfunction_ss_dLsR::synapse0x1ee1960() {
   return (neuron0x1ed6c20()*-0.00392804);
}

double NNfunction_ss_dLsR::synapse0x1ee19a0() {
   return (neuron0x1ed6f60()*0.197312);
}

double NNfunction_ss_dLsR::synapse0x1ee19e0() {
   return (neuron0x1ed72a0()*0.273168);
}

double NNfunction_ss_dLsR::synapse0x1ee1a20() {
   return (neuron0x1ed75e0()*0.117936);
}

double NNfunction_ss_dLsR::synapse0x1ee1a60() {
   return (neuron0x1ed7920()*-0.458543);
}

double NNfunction_ss_dLsR::synapse0x1ee1aa0() {
   return (neuron0x1ed7c60()*-0.108558);
}

double NNfunction_ss_dLsR::synapse0x1ee1ae0() {
   return (neuron0x1ed7fa0()*0.528595);
}

double NNfunction_ss_dLsR::synapse0x1ee1b20() {
   return (neuron0x1ed82e0()*0.139564);
}

double NNfunction_ss_dLsR::synapse0x1ee1b60() {
   return (neuron0x1ed8620()*0.0910011);
}

double NNfunction_ss_dLsR::synapse0x1ee15f0() {
   return (neuron0x1ed8960()*0.0906964);
}

double NNfunction_ss_dLsR::synapse0x1ee1630() {
   return (neuron0x1ed8ec0()*0.0995451);
}

double NNfunction_ss_dLsR::synapse0x1ee1cb0() {
   return (neuron0x1ed90e0()*0.0991476);
}

double NNfunction_ss_dLsR::synapse0x1ee1cf0() {
   return (neuron0x1ed9420()*0.0411199);
}

double NNfunction_ss_dLsR::synapse0x1ee1d30() {
   return (neuron0x1ed9760()*0.112634);
}

double NNfunction_ss_dLsR::synapse0x1ee1d70() {
   return (neuron0x1ed9aa0()*0.267351);
}

double NNfunction_ss_dLsR::synapse0x1ee1db0() {
   return (neuron0x1ed9de0()*0.0308571);
}

double NNfunction_ss_dLsR::synapse0x1ee1df0() {
   return (neuron0x1eda120()*0.05932);
}

double NNfunction_ss_dLsR::synapse0x1ee1fc0() {
   return (neuron0x1ed5560()*0.14394);
}

double NNfunction_ss_dLsR::synapse0x1eeb050() {
   return (neuron0x1ed58a0()*-0.248701);
}

double NNfunction_ss_dLsR::synapse0x1eeb090() {
   return (neuron0x1ed5be0()*0.248145);
}

double NNfunction_ss_dLsR::synapse0x1eeb0d0() {
   return (neuron0x1ed5f20()*-0.489942);
}

double NNfunction_ss_dLsR::synapse0x1eeb110() {
   return (neuron0x1ed6260()*-0.0570323);
}

double NNfunction_ss_dLsR::synapse0x1eeb150() {
   return (neuron0x1ed65a0()*0.420503);
}

double NNfunction_ss_dLsR::synapse0x1eeb190() {
   return (neuron0x1ed68e0()*0.0237264);
}

double NNfunction_ss_dLsR::synapse0x1eeb1d0() {
   return (neuron0x1ed6c20()*-0.200132);
}

double NNfunction_ss_dLsR::synapse0x1eeb210() {
   return (neuron0x1ed6f60()*-0.0803566);
}

double NNfunction_ss_dLsR::synapse0x1eeb250() {
   return (neuron0x1ed72a0()*0.483523);
}

double NNfunction_ss_dLsR::synapse0x1eeb290() {
   return (neuron0x1ed75e0()*0.257429);
}

double NNfunction_ss_dLsR::synapse0x1eeb2d0() {
   return (neuron0x1ed7920()*0.183017);
}

double NNfunction_ss_dLsR::synapse0x1eeb310() {
   return (neuron0x1ed7c60()*0.532816);
}

double NNfunction_ss_dLsR::synapse0x1eeb350() {
   return (neuron0x1ed7fa0()*-0.261353);
}

double NNfunction_ss_dLsR::synapse0x1eeb390() {
   return (neuron0x1ed82e0()*0.166003);
}

double NNfunction_ss_dLsR::synapse0x1eeb3d0() {
   return (neuron0x1ed8620()*0.283885);
}

double NNfunction_ss_dLsR::synapse0x1eeaea0() {
   return (neuron0x1ed8960()*0.0217592);
}

double NNfunction_ss_dLsR::synapse0x1eeaee0() {
   return (neuron0x1ed8ec0()*0.798333);
}

double NNfunction_ss_dLsR::synapse0x1eeb520() {
   return (neuron0x1ed90e0()*-0.509998);
}

double NNfunction_ss_dLsR::synapse0x1eeb560() {
   return (neuron0x1ed9420()*-0.126554);
}

double NNfunction_ss_dLsR::synapse0x1eeb5a0() {
   return (neuron0x1ed9760()*0.410131);
}

double NNfunction_ss_dLsR::synapse0x1eeb5e0() {
   return (neuron0x1ed9aa0()*-0.269364);
}

double NNfunction_ss_dLsR::synapse0x1eeb620() {
   return (neuron0x1ed9de0()*0.057613);
}

double NNfunction_ss_dLsR::synapse0x1eeb660() {
   return (neuron0x1eda120()*-0.00171465);
}

double NNfunction_ss_dLsR::synapse0x1eeb9e0() {
   return (neuron0x1ed5560()*1.23984);
}

double NNfunction_ss_dLsR::synapse0x1eeba20() {
   return (neuron0x1ed58a0()*0.0156643);
}

double NNfunction_ss_dLsR::synapse0x1eeba60() {
   return (neuron0x1ed5be0()*-0.00145333);
}

double NNfunction_ss_dLsR::synapse0x1eebaa0() {
   return (neuron0x1ed5f20()*-0.0850447);
}

double NNfunction_ss_dLsR::synapse0x1eebae0() {
   return (neuron0x1ed6260()*-0.160289);
}

double NNfunction_ss_dLsR::synapse0x1eebb20() {
   return (neuron0x1ed65a0()*0.027761);
}

double NNfunction_ss_dLsR::synapse0x1eebb60() {
   return (neuron0x1ed68e0()*-0.209412);
}

double NNfunction_ss_dLsR::synapse0x1eebba0() {
   return (neuron0x1ed6c20()*0.521233);
}

double NNfunction_ss_dLsR::synapse0x1eebbe0() {
   return (neuron0x1ed6f60()*0.350837);
}

double NNfunction_ss_dLsR::synapse0x1eebc20() {
   return (neuron0x1ed72a0()*1.14121);
}

double NNfunction_ss_dLsR::synapse0x1eebc60() {
   return (neuron0x1ed75e0()*-0.0485468);
}

double NNfunction_ss_dLsR::synapse0x1eebca0() {
   return (neuron0x1ed7920()*-0.829983);
}

double NNfunction_ss_dLsR::synapse0x1eebce0() {
   return (neuron0x1ed7c60()*0.142766);
}

double NNfunction_ss_dLsR::synapse0x1eebd20() {
   return (neuron0x1ed7fa0()*-0.0703989);
}

double NNfunction_ss_dLsR::synapse0x1eebd60() {
   return (neuron0x1ed82e0()*-0.0611016);
}

double NNfunction_ss_dLsR::synapse0x1eebda0() {
   return (neuron0x1ed8620()*-1.30234);
}

double NNfunction_ss_dLsR::synapse0x1eeb830() {
   return (neuron0x1ed8960()*0.177047);
}

double NNfunction_ss_dLsR::synapse0x1eeb870() {
   return (neuron0x1ed8ec0()*-0.164305);
}

double NNfunction_ss_dLsR::synapse0x1eebef0() {
   return (neuron0x1ed90e0()*-0.546215);
}

double NNfunction_ss_dLsR::synapse0x1eebf30() {
   return (neuron0x1ed9420()*-0.908999);
}

double NNfunction_ss_dLsR::synapse0x1eebf70() {
   return (neuron0x1ed9760()*0.132498);
}

double NNfunction_ss_dLsR::synapse0x1eebfb0() {
   return (neuron0x1ed9aa0()*-0.200824);
}

double NNfunction_ss_dLsR::synapse0x1eebff0() {
   return (neuron0x1ed9de0()*-0.0983247);
}

double NNfunction_ss_dLsR::synapse0x1eec030() {
   return (neuron0x1eda120()*-0.0251694);
}

double NNfunction_ss_dLsR::synapse0x1eec3b0() {
   return (neuron0x1ed5560()*0.175999);
}

double NNfunction_ss_dLsR::synapse0x1eec3f0() {
   return (neuron0x1ed58a0()*-0.147572);
}

double NNfunction_ss_dLsR::synapse0x1eec430() {
   return (neuron0x1ed5be0()*-0.629937);
}

double NNfunction_ss_dLsR::synapse0x1eec470() {
   return (neuron0x1ed5f20()*0.403622);
}

double NNfunction_ss_dLsR::synapse0x1eec4b0() {
   return (neuron0x1ed6260()*-0.259628);
}

double NNfunction_ss_dLsR::synapse0x1eec4f0() {
   return (neuron0x1ed65a0()*0.265431);
}

double NNfunction_ss_dLsR::synapse0x1eec530() {
   return (neuron0x1ed68e0()*-0.614743);
}

double NNfunction_ss_dLsR::synapse0x1eec570() {
   return (neuron0x1ed6c20()*0.0648629);
}

double NNfunction_ss_dLsR::synapse0x1eec5b0() {
   return (neuron0x1ed6f60()*0.151478);
}

double NNfunction_ss_dLsR::synapse0x1eec5f0() {
   return (neuron0x1ed72a0()*0.175453);
}

double NNfunction_ss_dLsR::synapse0x1eec630() {
   return (neuron0x1ed75e0()*0.515183);
}

double NNfunction_ss_dLsR::synapse0x1eec670() {
   return (neuron0x1ed7920()*-1.17363);
}

double NNfunction_ss_dLsR::synapse0x1eec6b0() {
   return (neuron0x1ed7c60()*0.949107);
}

double NNfunction_ss_dLsR::synapse0x1eec6f0() {
   return (neuron0x1ed7fa0()*0.00121133);
}

double NNfunction_ss_dLsR::synapse0x1eec730() {
   return (neuron0x1ed82e0()*-0.350146);
}

double NNfunction_ss_dLsR::synapse0x1eec770() {
   return (neuron0x1ed8620()*-0.822072);
}

double NNfunction_ss_dLsR::synapse0x1eec200() {
   return (neuron0x1ed8960()*-0.628399);
}

double NNfunction_ss_dLsR::synapse0x1eec240() {
   return (neuron0x1ed8ec0()*-0.220719);
}

double NNfunction_ss_dLsR::synapse0x1eec8c0() {
   return (neuron0x1ed90e0()*-0.205584);
}

double NNfunction_ss_dLsR::synapse0x1eec900() {
   return (neuron0x1ed9420()*0.56166);
}

double NNfunction_ss_dLsR::synapse0x1eec940() {
   return (neuron0x1ed9760()*0.0931115);
}

double NNfunction_ss_dLsR::synapse0x1eec980() {
   return (neuron0x1ed9aa0()*0.0849283);
}

double NNfunction_ss_dLsR::synapse0x1eec9c0() {
   return (neuron0x1ed9de0()*0.0224905);
}

double NNfunction_ss_dLsR::synapse0x1eeca00() {
   return (neuron0x1eda120()*0.32216);
}

double NNfunction_ss_dLsR::synapse0x1eecd80() {
   return (neuron0x1ed5560()*-0.0894653);
}

double NNfunction_ss_dLsR::synapse0x1eecdc0() {
   return (neuron0x1ed58a0()*-0.248344);
}

double NNfunction_ss_dLsR::synapse0x1eece00() {
   return (neuron0x1ed5be0()*-0.402092);
}

double NNfunction_ss_dLsR::synapse0x1eece40() {
   return (neuron0x1ed5f20()*-0.242048);
}

double NNfunction_ss_dLsR::synapse0x1eece80() {
   return (neuron0x1ed6260()*-0.176858);
}

double NNfunction_ss_dLsR::synapse0x1eecec0() {
   return (neuron0x1ed65a0()*-0.116441);
}

double NNfunction_ss_dLsR::synapse0x1eecf00() {
   return (neuron0x1ed68e0()*-0.0473276);
}

double NNfunction_ss_dLsR::synapse0x1eecf40() {
   return (neuron0x1ed6c20()*-0.150479);
}

double NNfunction_ss_dLsR::synapse0x1eecf80() {
   return (neuron0x1ed6f60()*-0.369218);
}

double NNfunction_ss_dLsR::synapse0x1eecfc0() {
   return (neuron0x1ed72a0()*-0.0992714);
}

double NNfunction_ss_dLsR::synapse0x1eed000() {
   return (neuron0x1ed75e0()*-0.225063);
}

double NNfunction_ss_dLsR::synapse0x1eed040() {
   return (neuron0x1ed7920()*-0.192107);
}

double NNfunction_ss_dLsR::synapse0x1eed080() {
   return (neuron0x1ed7c60()*-0.117741);
}

double NNfunction_ss_dLsR::synapse0x1eed0c0() {
   return (neuron0x1ed7fa0()*-0.20386);
}

double NNfunction_ss_dLsR::synapse0x1eed100() {
   return (neuron0x1ed82e0()*0.0860314);
}

double NNfunction_ss_dLsR::synapse0x1eed140() {
   return (neuron0x1ed8620()*-0.13278);
}

double NNfunction_ss_dLsR::synapse0x1eecbd0() {
   return (neuron0x1ed8960()*0.100695);
}

double NNfunction_ss_dLsR::synapse0x1eecc10() {
   return (neuron0x1ed8ec0()*0.341259);
}

double NNfunction_ss_dLsR::synapse0x1eed290() {
   return (neuron0x1ed90e0()*-0.411832);
}

double NNfunction_ss_dLsR::synapse0x1eed2d0() {
   return (neuron0x1ed9420()*0.419871);
}

double NNfunction_ss_dLsR::synapse0x1eed310() {
   return (neuron0x1ed9760()*0.0141428);
}

double NNfunction_ss_dLsR::synapse0x1eed350() {
   return (neuron0x1ed9aa0()*-0.265123);
}

double NNfunction_ss_dLsR::synapse0x1eed390() {
   return (neuron0x1ed9de0()*-0.207438);
}

double NNfunction_ss_dLsR::synapse0x1eed3d0() {
   return (neuron0x1eda120()*-0.0171296);
}

double NNfunction_ss_dLsR::synapse0x1eed750() {
   return (neuron0x1ed5560()*0.296342);
}

double NNfunction_ss_dLsR::synapse0x1eed790() {
   return (neuron0x1ed58a0()*0.0391602);
}

double NNfunction_ss_dLsR::synapse0x1eed7d0() {
   return (neuron0x1ed5be0()*-0.0694129);
}

double NNfunction_ss_dLsR::synapse0x1eed810() {
   return (neuron0x1ed5f20()*0.656999);
}

double NNfunction_ss_dLsR::synapse0x1eed850() {
   return (neuron0x1ed6260()*-0.570862);
}

double NNfunction_ss_dLsR::synapse0x1eed890() {
   return (neuron0x1ed65a0()*0.192573);
}

double NNfunction_ss_dLsR::synapse0x1eed8d0() {
   return (neuron0x1ed68e0()*0.110926);
}

double NNfunction_ss_dLsR::synapse0x1eed910() {
   return (neuron0x1ed6c20()*-0.204824);
}

double NNfunction_ss_dLsR::synapse0x1eed950() {
   return (neuron0x1ed6f60()*0.890712);
}

double NNfunction_ss_dLsR::synapse0x1eed990() {
   return (neuron0x1ed72a0()*0.300619);
}

double NNfunction_ss_dLsR::synapse0x1eed9d0() {
   return (neuron0x1ed75e0()*0.831603);
}

double NNfunction_ss_dLsR::synapse0x1eeda10() {
   return (neuron0x1ed7920()*-1.69244);
}

double NNfunction_ss_dLsR::synapse0x1eeda50() {
   return (neuron0x1ed7c60()*0.632303);
}

double NNfunction_ss_dLsR::synapse0x1eeda90() {
   return (neuron0x1ed7fa0()*0.405554);
}

double NNfunction_ss_dLsR::synapse0x1eedad0() {
   return (neuron0x1ed82e0()*-0.0480228);
}

double NNfunction_ss_dLsR::synapse0x1eedb10() {
   return (neuron0x1ed8620()*0.00536638);
}

double NNfunction_ss_dLsR::synapse0x1eed5a0() {
   return (neuron0x1ed8960()*-0.303249);
}

double NNfunction_ss_dLsR::synapse0x1eed5e0() {
   return (neuron0x1ed8ec0()*-0.198674);
}

double NNfunction_ss_dLsR::synapse0x1eedc60() {
   return (neuron0x1ed90e0()*-1.41833);
}

double NNfunction_ss_dLsR::synapse0x1eedca0() {
   return (neuron0x1ed9420()*0.239543);
}

double NNfunction_ss_dLsR::synapse0x1eedce0() {
   return (neuron0x1ed9760()*0.251248);
}

double NNfunction_ss_dLsR::synapse0x1eedd20() {
   return (neuron0x1ed9aa0()*-0.423247);
}

double NNfunction_ss_dLsR::synapse0x1eedd60() {
   return (neuron0x1ed9de0()*0.311619);
}

double NNfunction_ss_dLsR::synapse0x1eedda0() {
   return (neuron0x1eda120()*0.582102);
}

double NNfunction_ss_dLsR::synapse0x1eee120() {
   return (neuron0x1ed5560()*0.0672396);
}

double NNfunction_ss_dLsR::synapse0x1eee160() {
   return (neuron0x1ed58a0()*-0.317262);
}

double NNfunction_ss_dLsR::synapse0x1eee1a0() {
   return (neuron0x1ed5be0()*-0.53047);
}

double NNfunction_ss_dLsR::synapse0x1eee1e0() {
   return (neuron0x1ed5f20()*0.9524);
}

double NNfunction_ss_dLsR::synapse0x1eee220() {
   return (neuron0x1ed6260()*-0.23436);
}

double NNfunction_ss_dLsR::synapse0x1eee260() {
   return (neuron0x1ed65a0()*-0.173015);
}

double NNfunction_ss_dLsR::synapse0x1eee2a0() {
   return (neuron0x1ed68e0()*0.0616205);
}

double NNfunction_ss_dLsR::synapse0x1eee2e0() {
   return (neuron0x1ed6c20()*-0.574982);
}

double NNfunction_ss_dLsR::synapse0x1eee320() {
   return (neuron0x1ed6f60()*0.156775);
}

double NNfunction_ss_dLsR::synapse0x1eee360() {
   return (neuron0x1ed72a0()*-0.113823);
}

double NNfunction_ss_dLsR::synapse0x1eee3a0() {
   return (neuron0x1ed75e0()*-0.118105);
}

double NNfunction_ss_dLsR::synapse0x1eee3e0() {
   return (neuron0x1ed7920()*0.36677);
}

double NNfunction_ss_dLsR::synapse0x1eee420() {
   return (neuron0x1ed7c60()*0.0350909);
}

double NNfunction_ss_dLsR::synapse0x1eee460() {
   return (neuron0x1ed7fa0()*-0.246096);
}

double NNfunction_ss_dLsR::synapse0x1eee4a0() {
   return (neuron0x1ed82e0()*-0.248301);
}

double NNfunction_ss_dLsR::synapse0x1eee4e0() {
   return (neuron0x1ed8620()*0.133218);
}

double NNfunction_ss_dLsR::synapse0x1eedf70() {
   return (neuron0x1ed8960()*0.479671);
}

double NNfunction_ss_dLsR::synapse0x1eedfb0() {
   return (neuron0x1ed8ec0()*-0.0376436);
}

double NNfunction_ss_dLsR::synapse0x1eee630() {
   return (neuron0x1ed90e0()*0.416156);
}

double NNfunction_ss_dLsR::synapse0x1eee670() {
   return (neuron0x1ed9420()*-0.271002);
}

double NNfunction_ss_dLsR::synapse0x1eee6b0() {
   return (neuron0x1ed9760()*0.392028);
}

double NNfunction_ss_dLsR::synapse0x1eee6f0() {
   return (neuron0x1ed9aa0()*0.0345523);
}

double NNfunction_ss_dLsR::synapse0x1eee730() {
   return (neuron0x1ed9de0()*0.215432);
}

double NNfunction_ss_dLsR::synapse0x1eee770() {
   return (neuron0x1eda120()*0.210372);
}

double NNfunction_ss_dLsR::synapse0x1eeeaf0() {
   return (neuron0x1ed5560()*-0.943994);
}

double NNfunction_ss_dLsR::synapse0x1eeeb30() {
   return (neuron0x1ed58a0()*-0.579325);
}

double NNfunction_ss_dLsR::synapse0x1eeeb70() {
   return (neuron0x1ed5be0()*-0.419116);
}

double NNfunction_ss_dLsR::synapse0x1eeebb0() {
   return (neuron0x1ed5f20()*0.138548);
}

double NNfunction_ss_dLsR::synapse0x1eeebf0() {
   return (neuron0x1ed6260()*-0.730016);
}

double NNfunction_ss_dLsR::synapse0x1eeec30() {
   return (neuron0x1ed65a0()*0.332059);
}

double NNfunction_ss_dLsR::synapse0x1eeec70() {
   return (neuron0x1ed68e0()*-0.88654);
}

double NNfunction_ss_dLsR::synapse0x1eeecb0() {
   return (neuron0x1ed6c20()*-0.919163);
}

double NNfunction_ss_dLsR::synapse0x1eeecf0() {
   return (neuron0x1ed6f60()*0.966965);
}

double NNfunction_ss_dLsR::synapse0x1eeed30() {
   return (neuron0x1ed72a0()*0.323897);
}

double NNfunction_ss_dLsR::synapse0x1eeed70() {
   return (neuron0x1ed75e0()*-0.278963);
}

double NNfunction_ss_dLsR::synapse0x1eeedb0() {
   return (neuron0x1ed7920()*0.494428);
}

double NNfunction_ss_dLsR::synapse0x1eeedf0() {
   return (neuron0x1ed7c60()*-0.224372);
}

double NNfunction_ss_dLsR::synapse0x1eeee30() {
   return (neuron0x1ed7fa0()*-0.202174);
}

double NNfunction_ss_dLsR::synapse0x1eeee70() {
   return (neuron0x1ed82e0()*0.300628);
}

double NNfunction_ss_dLsR::synapse0x1eeeeb0() {
   return (neuron0x1ed8620()*-0.920892);
}

double NNfunction_ss_dLsR::synapse0x1eee940() {
   return (neuron0x1ed8960()*-0.0462317);
}

double NNfunction_ss_dLsR::synapse0x1eee980() {
   return (neuron0x1ed8ec0()*-1.08075);
}

double NNfunction_ss_dLsR::synapse0x1eef000() {
   return (neuron0x1ed90e0()*-0.44516);
}

double NNfunction_ss_dLsR::synapse0x1eef040() {
   return (neuron0x1ed9420()*-0.811808);
}

double NNfunction_ss_dLsR::synapse0x1eef080() {
   return (neuron0x1ed9760()*-0.60109);
}

double NNfunction_ss_dLsR::synapse0x1eef0c0() {
   return (neuron0x1ed9aa0()*-0.404189);
}

double NNfunction_ss_dLsR::synapse0x1eef100() {
   return (neuron0x1ed9de0()*-0.121576);
}

double NNfunction_ss_dLsR::synapse0x1eef140() {
   return (neuron0x1eda120()*-0.168113);
}

double NNfunction_ss_dLsR::synapse0x1eef4c0() {
   return (neuron0x1ed5560()*-0.00490146);
}

double NNfunction_ss_dLsR::synapse0x1eef500() {
   return (neuron0x1ed58a0()*0.00221015);
}

double NNfunction_ss_dLsR::synapse0x1eef540() {
   return (neuron0x1ed5be0()*0.00139137);
}

double NNfunction_ss_dLsR::synapse0x1eef580() {
   return (neuron0x1ed5f20()*4.10985);
}

double NNfunction_ss_dLsR::synapse0x1eef5c0() {
   return (neuron0x1ed6260()*-0.0122379);
}

double NNfunction_ss_dLsR::synapse0x1eef600() {
   return (neuron0x1ed65a0()*0.00386472);
}

double NNfunction_ss_dLsR::synapse0x1eef640() {
   return (neuron0x1ed68e0()*7.657e-05);
}

double NNfunction_ss_dLsR::synapse0x1eef680() {
   return (neuron0x1ed6c20()*0.00568654);
}

double NNfunction_ss_dLsR::synapse0x1eef6c0() {
   return (neuron0x1ed6f60()*0.00562765);
}

double NNfunction_ss_dLsR::synapse0x1eef700() {
   return (neuron0x1ed72a0()*-0.000298376);
}

double NNfunction_ss_dLsR::synapse0x1eef740() {
   return (neuron0x1ed75e0()*0.00530079);
}

double NNfunction_ss_dLsR::synapse0x1eef780() {
   return (neuron0x1ed7920()*0.197097);
}

double NNfunction_ss_dLsR::synapse0x1eef7c0() {
   return (neuron0x1ed7c60()*0.0174661);
}

double NNfunction_ss_dLsR::synapse0x1eef800() {
   return (neuron0x1ed7fa0()*-0.00566436);
}

double NNfunction_ss_dLsR::synapse0x1eef840() {
   return (neuron0x1ed82e0()*0.00112515);
}

double NNfunction_ss_dLsR::synapse0x1eef880() {
   return (neuron0x1ed8620()*0.00762152);
}

double NNfunction_ss_dLsR::synapse0x1eef310() {
   return (neuron0x1ed8960()*-0.00508091);
}

double NNfunction_ss_dLsR::synapse0x1eef350() {
   return (neuron0x1ed8ec0()*0.0048831);
}

double NNfunction_ss_dLsR::synapse0x1eef9d0() {
   return (neuron0x1ed90e0()*0.204294);
}

double NNfunction_ss_dLsR::synapse0x1eefa10() {
   return (neuron0x1ed9420()*0.00582295);
}

double NNfunction_ss_dLsR::synapse0x1eefa50() {
   return (neuron0x1ed9760()*0.010427);
}

double NNfunction_ss_dLsR::synapse0x1eefa90() {
   return (neuron0x1ed9aa0()*-0.0126775);
}

double NNfunction_ss_dLsR::synapse0x1eefad0() {
   return (neuron0x1ed9de0()*0.00326793);
}

double NNfunction_ss_dLsR::synapse0x1eefb10() {
   return (neuron0x1eda120()*0.0035986);
}

double NNfunction_ss_dLsR::synapse0x1eefe90() {
   return (neuron0x1ed5560()*-0.33522);
}

double NNfunction_ss_dLsR::synapse0x1ee4460() {
   return (neuron0x1ed58a0()*0.00825948);
}

double NNfunction_ss_dLsR::synapse0x1ee44a0() {
   return (neuron0x1ed5be0()*0.0590787);
}

double NNfunction_ss_dLsR::synapse0x1ee44e0() {
   return (neuron0x1ed5f20()*-0.298509);
}

double NNfunction_ss_dLsR::synapse0x1ee4730() {
   return (neuron0x1ed6260()*-0.335714);
}

double NNfunction_ss_dLsR::synapse0x1ee4770() {
   return (neuron0x1ed65a0()*0.369651);
}

double NNfunction_ss_dLsR::synapse0x1ee47b0() {
   return (neuron0x1ed68e0()*-0.313396);
}

double NNfunction_ss_dLsR::synapse0x1ee4a00() {
   return (neuron0x1ed6c20()*-0.417501);
}

double NNfunction_ss_dLsR::synapse0x1ee4a40() {
   return (neuron0x1ed6f60()*-0.00554139);
}

double NNfunction_ss_dLsR::synapse0x1ee4c90() {
   return (neuron0x1ed72a0()*-0.140199);
}

double NNfunction_ss_dLsR::synapse0x1ee4cd0() {
   return (neuron0x1ed75e0()*0.347135);
}

double NNfunction_ss_dLsR::synapse0x1ee4d10() {
   return (neuron0x1ed7920()*0.070911);
}

double NNfunction_ss_dLsR::synapse0x1ee4f60() {
   return (neuron0x1ed7c60()*-0.343906);
}

double NNfunction_ss_dLsR::synapse0x1ee4fa0() {
   return (neuron0x1ed7fa0()*0.574551);
}

double NNfunction_ss_dLsR::synapse0x1ee51f0() {
   return (neuron0x1ed82e0()*-0.213202);
}

double NNfunction_ss_dLsR::synapse0x1ee5230() {
   return (neuron0x1ed8620()*0.241627);
}

double NNfunction_ss_dLsR::synapse0x1eefce0() {
   return (neuron0x1ed8960()*-0.15279);
}

double NNfunction_ss_dLsR::synapse0x1eefd20() {
   return (neuron0x1ed8ec0()*-0.22711);
}

double NNfunction_ss_dLsR::synapse0x1ee5380() {
   return (neuron0x1ed90e0()*1.30699);
}

double NNfunction_ss_dLsR::synapse0x1ee5890() {
   return (neuron0x1ed9420()*0.238573);
}

double NNfunction_ss_dLsR::synapse0x1ee58d0() {
   return (neuron0x1ed9760()*0.213511);
}

double NNfunction_ss_dLsR::synapse0x1ee5910() {
   return (neuron0x1ed9aa0()*0.151467);
}

double NNfunction_ss_dLsR::synapse0x1ee5b60() {
   return (neuron0x1ed9de0()*-0.0367919);
}

double NNfunction_ss_dLsR::synapse0x1ee5ba0() {
   return (neuron0x1eda120()*0.367194);
}

double NNfunction_ss_dLsR::synapse0x1ee5450() {
   return (neuron0x1ed5560()*0.576535);
}

double NNfunction_ss_dLsR::synapse0x1ee5490() {
   return (neuron0x1ed58a0()*-0.435537);
}

double NNfunction_ss_dLsR::synapse0x1ee54d0() {
   return (neuron0x1ed5be0()*0.0380266);
}

double NNfunction_ss_dLsR::synapse0x1ee5510() {
   return (neuron0x1ed5f20()*-0.0872375);
}

double NNfunction_ss_dLsR::synapse0x1ee5e90() {
   return (neuron0x1ed6260()*0.0121966);
}

double NNfunction_ss_dLsR::synapse0x1ef21e0() {
   return (neuron0x1ed65a0()*0.168161);
}

double NNfunction_ss_dLsR::synapse0x1ef2220() {
   return (neuron0x1ed68e0()*0.129224);
}

double NNfunction_ss_dLsR::synapse0x1ef2260() {
   return (neuron0x1ed6c20()*-0.583371);
}

double NNfunction_ss_dLsR::synapse0x1ef22a0() {
   return (neuron0x1ed6f60()*-0.121588);
}

double NNfunction_ss_dLsR::synapse0x1ef22e0() {
   return (neuron0x1ed72a0()*0.18364);
}

double NNfunction_ss_dLsR::synapse0x1ef2320() {
   return (neuron0x1ed75e0()*0.329032);
}

double NNfunction_ss_dLsR::synapse0x1ef2360() {
   return (neuron0x1ed7920()*-0.142989);
}

double NNfunction_ss_dLsR::synapse0x1ef23a0() {
   return (neuron0x1ed7c60()*0.156998);
}

double NNfunction_ss_dLsR::synapse0x1ef23e0() {
   return (neuron0x1ed7fa0()*-0.0915068);
}

double NNfunction_ss_dLsR::synapse0x1ef2420() {
   return (neuron0x1ed82e0()*-0.0339728);
}

double NNfunction_ss_dLsR::synapse0x1ef2460() {
   return (neuron0x1ed8620()*0.38581);
}

double NNfunction_ss_dLsR::synapse0x1ee5d70() {
   return (neuron0x1ed8960()*0.108267);
}

double NNfunction_ss_dLsR::synapse0x1ee5db0() {
   return (neuron0x1ed8ec0()*0.470776);
}

double NNfunction_ss_dLsR::synapse0x1ef25b0() {
   return (neuron0x1ed90e0()*-0.503643);
}

double NNfunction_ss_dLsR::synapse0x1ef25f0() {
   return (neuron0x1ed9420()*-0.231125);
}

double NNfunction_ss_dLsR::synapse0x1ef2630() {
   return (neuron0x1ed9760()*0.242656);
}

double NNfunction_ss_dLsR::synapse0x1ef2670() {
   return (neuron0x1ed9aa0()*-0.0802827);
}

double NNfunction_ss_dLsR::synapse0x1ef26b0() {
   return (neuron0x1ed9de0()*-0.128892);
}

double NNfunction_ss_dLsR::synapse0x1ef26f0() {
   return (neuron0x1eda120()*0.135496);
}

double NNfunction_ss_dLsR::synapse0x1ef2a70() {
   return (neuron0x1ed5560()*0.0147953);
}

double NNfunction_ss_dLsR::synapse0x1ef2ab0() {
   return (neuron0x1ed58a0()*-0.0482745);
}

double NNfunction_ss_dLsR::synapse0x1ef2af0() {
   return (neuron0x1ed5be0()*-0.131061);
}

double NNfunction_ss_dLsR::synapse0x1ef2b30() {
   return (neuron0x1ed5f20()*0.400516);
}

double NNfunction_ss_dLsR::synapse0x1ef2b70() {
   return (neuron0x1ed6260()*-0.000617816);
}

double NNfunction_ss_dLsR::synapse0x1ef2bb0() {
   return (neuron0x1ed65a0()*-0.19152);
}

double NNfunction_ss_dLsR::synapse0x1ef2bf0() {
   return (neuron0x1ed68e0()*0.141184);
}

double NNfunction_ss_dLsR::synapse0x1ef2c30() {
   return (neuron0x1ed6c20()*-0.292775);
}

double NNfunction_ss_dLsR::synapse0x1ef2c70() {
   return (neuron0x1ed6f60()*-0.091918);
}

double NNfunction_ss_dLsR::synapse0x1ef2cb0() {
   return (neuron0x1ed72a0()*-0.0690561);
}

double NNfunction_ss_dLsR::synapse0x1ef2cf0() {
   return (neuron0x1ed75e0()*-0.280419);
}

double NNfunction_ss_dLsR::synapse0x1ef2d30() {
   return (neuron0x1ed7920()*0.0882031);
}

double NNfunction_ss_dLsR::synapse0x1ef2d70() {
   return (neuron0x1ed7c60()*-0.408474);
}

double NNfunction_ss_dLsR::synapse0x1ef2db0() {
   return (neuron0x1ed7fa0()*-0.224249);
}

double NNfunction_ss_dLsR::synapse0x1ef2df0() {
   return (neuron0x1ed82e0()*-0.0746043);
}

double NNfunction_ss_dLsR::synapse0x1ef2e30() {
   return (neuron0x1ed8620()*-0.0648859);
}

double NNfunction_ss_dLsR::synapse0x1ef28c0() {
   return (neuron0x1ed8960()*0.130477);
}

double NNfunction_ss_dLsR::synapse0x1ef2900() {
   return (neuron0x1ed8ec0()*-0.287104);
}

double NNfunction_ss_dLsR::synapse0x1ef2f80() {
   return (neuron0x1ed90e0()*0.579809);
}

double NNfunction_ss_dLsR::synapse0x1ef2fc0() {
   return (neuron0x1ed9420()*0.0699454);
}

double NNfunction_ss_dLsR::synapse0x1ef3000() {
   return (neuron0x1ed9760()*0.0689706);
}

double NNfunction_ss_dLsR::synapse0x1ef3040() {
   return (neuron0x1ed9aa0()*0.226548);
}

double NNfunction_ss_dLsR::synapse0x1ef3080() {
   return (neuron0x1ed9de0()*-0.260097);
}

double NNfunction_ss_dLsR::synapse0x1ef30c0() {
   return (neuron0x1eda120()*0.161164);
}

double NNfunction_ss_dLsR::synapse0x1ef3440() {
   return (neuron0x1ed5560()*-0.0379307);
}

double NNfunction_ss_dLsR::synapse0x1ef3480() {
   return (neuron0x1ed58a0()*-0.004302);
}

double NNfunction_ss_dLsR::synapse0x1ef34c0() {
   return (neuron0x1ed5be0()*-0.0507255);
}

double NNfunction_ss_dLsR::synapse0x1ef3500() {
   return (neuron0x1ed5f20()*-0.47535);
}

double NNfunction_ss_dLsR::synapse0x1ef3540() {
   return (neuron0x1ed6260()*-0.00317151);
}

double NNfunction_ss_dLsR::synapse0x1ef3580() {
   return (neuron0x1ed65a0()*0.00104718);
}

double NNfunction_ss_dLsR::synapse0x1ef35c0() {
   return (neuron0x1ed68e0()*-0.0247048);
}

double NNfunction_ss_dLsR::synapse0x1ef3600() {
   return (neuron0x1ed6c20()*-0.0385314);
}

double NNfunction_ss_dLsR::synapse0x1ef3640() {
   return (neuron0x1ed6f60()*0.0125311);
}

double NNfunction_ss_dLsR::synapse0x1ef3680() {
   return (neuron0x1ed72a0()*-0.0459436);
}

double NNfunction_ss_dLsR::synapse0x1ef36c0() {
   return (neuron0x1ed75e0()*0.0327772);
}

double NNfunction_ss_dLsR::synapse0x1ef3700() {
   return (neuron0x1ed7920()*0.316824);
}

double NNfunction_ss_dLsR::synapse0x1ef3740() {
   return (neuron0x1ed7c60()*-0.0381211);
}

double NNfunction_ss_dLsR::synapse0x1ef3780() {
   return (neuron0x1ed7fa0()*-0.000982988);
}

double NNfunction_ss_dLsR::synapse0x1ef37c0() {
   return (neuron0x1ed82e0()*-0.0463861);
}

double NNfunction_ss_dLsR::synapse0x1ef3800() {
   return (neuron0x1ed8620()*-0.035202);
}

double NNfunction_ss_dLsR::synapse0x1ef3290() {
   return (neuron0x1ed8960()*0.0169401);
}

double NNfunction_ss_dLsR::synapse0x1ef32d0() {
   return (neuron0x1ed8ec0()*-0.0434083);
}

double NNfunction_ss_dLsR::synapse0x1ef3950() {
   return (neuron0x1ed90e0()*-1.5575);
}

double NNfunction_ss_dLsR::synapse0x1ef3990() {
   return (neuron0x1ed9420()*-0.0284061);
}

double NNfunction_ss_dLsR::synapse0x1ef39d0() {
   return (neuron0x1ed9760()*0.0272164);
}

double NNfunction_ss_dLsR::synapse0x1ef3a10() {
   return (neuron0x1ed9aa0()*0.00167781);
}

double NNfunction_ss_dLsR::synapse0x1ef3a50() {
   return (neuron0x1ed9de0()*0.00288013);
}

double NNfunction_ss_dLsR::synapse0x1ef3a90() {
   return (neuron0x1eda120()*0.00221472);
}

double NNfunction_ss_dLsR::synapse0x1ef3e10() {
   return (neuron0x1ed5560()*-0.00278644);
}

double NNfunction_ss_dLsR::synapse0x1ef3e50() {
   return (neuron0x1ed58a0()*0.0428441);
}

double NNfunction_ss_dLsR::synapse0x1ef3e90() {
   return (neuron0x1ed5be0()*0.0252646);
}

double NNfunction_ss_dLsR::synapse0x1ef3ed0() {
   return (neuron0x1ed5f20()*-10.4635);
}

double NNfunction_ss_dLsR::synapse0x1ef3f10() {
   return (neuron0x1ed6260()*-0.0211654);
}

double NNfunction_ss_dLsR::synapse0x1ef3f50() {
   return (neuron0x1ed65a0()*0.0152086);
}

double NNfunction_ss_dLsR::synapse0x1ef3f90() {
   return (neuron0x1ed68e0()*-0.0134021);
}

double NNfunction_ss_dLsR::synapse0x1ef3fd0() {
   return (neuron0x1ed6c20()*0.0150091);
}

double NNfunction_ss_dLsR::synapse0x1ef4010() {
   return (neuron0x1ed6f60()*-0.0265386);
}

double NNfunction_ss_dLsR::synapse0x1ef4050() {
   return (neuron0x1ed72a0()*-0.0176276);
}

double NNfunction_ss_dLsR::synapse0x1ef4090() {
   return (neuron0x1ed75e0()*0.0334443);
}

double NNfunction_ss_dLsR::synapse0x1ef40d0() {
   return (neuron0x1ed7920()*0.179511);
}

double NNfunction_ss_dLsR::synapse0x1ef4110() {
   return (neuron0x1ed7c60()*0.0191454);
}

double NNfunction_ss_dLsR::synapse0x1ef4150() {
   return (neuron0x1ed7fa0()*-0.000597295);
}

double NNfunction_ss_dLsR::synapse0x1ef4190() {
   return (neuron0x1ed82e0()*0.0149413);
}

double NNfunction_ss_dLsR::synapse0x1ef41d0() {
   return (neuron0x1ed8620()*0.0111188);
}

double NNfunction_ss_dLsR::synapse0x1ef3c60() {
   return (neuron0x1ed8960()*-0.0285726);
}

double NNfunction_ss_dLsR::synapse0x1ef3ca0() {
   return (neuron0x1ed8ec0()*0.0325803);
}

double NNfunction_ss_dLsR::synapse0x1ef4320() {
   return (neuron0x1ed90e0()*0.109552);
}

double NNfunction_ss_dLsR::synapse0x1ef4360() {
   return (neuron0x1ed9420()*-0.00973423);
}

double NNfunction_ss_dLsR::synapse0x1ef43a0() {
   return (neuron0x1ed9760()*0.0216608);
}

double NNfunction_ss_dLsR::synapse0x1ef43e0() {
   return (neuron0x1ed9aa0()*-0.0286693);
}

double NNfunction_ss_dLsR::synapse0x1ef4420() {
   return (neuron0x1ed9de0()*0.0143183);
}

double NNfunction_ss_dLsR::synapse0x1ef4460() {
   return (neuron0x1eda120()*-0.021062);
}

double NNfunction_ss_dLsR::synapse0x1ef47e0() {
   return (neuron0x1ed5560()*0.459987);
}

double NNfunction_ss_dLsR::synapse0x1ef4820() {
   return (neuron0x1ed58a0()*-0.345692);
}

double NNfunction_ss_dLsR::synapse0x1ef4860() {
   return (neuron0x1ed5be0()*0.260489);
}

double NNfunction_ss_dLsR::synapse0x1ef48a0() {
   return (neuron0x1ed5f20()*-0.839227);
}

double NNfunction_ss_dLsR::synapse0x1ef48e0() {
   return (neuron0x1ed6260()*0.234027);
}

double NNfunction_ss_dLsR::synapse0x1ef4920() {
   return (neuron0x1ed65a0()*0.146379);
}

double NNfunction_ss_dLsR::synapse0x1ef4960() {
   return (neuron0x1ed68e0()*-0.109012);
}

double NNfunction_ss_dLsR::synapse0x1ef49a0() {
   return (neuron0x1ed6c20()*-0.250477);
}

double NNfunction_ss_dLsR::synapse0x1ef49e0() {
   return (neuron0x1ed6f60()*0.0749885);
}

double NNfunction_ss_dLsR::synapse0x1ef4a20() {
   return (neuron0x1ed72a0()*-0.695036);
}

double NNfunction_ss_dLsR::synapse0x1ef4a60() {
   return (neuron0x1ed75e0()*-0.246902);
}

double NNfunction_ss_dLsR::synapse0x1ef4aa0() {
   return (neuron0x1ed7920()*-0.366648);
}

double NNfunction_ss_dLsR::synapse0x1ef4ae0() {
   return (neuron0x1ed7c60()*0.0785698);
}

double NNfunction_ss_dLsR::synapse0x1ef4b20() {
   return (neuron0x1ed7fa0()*0.122493);
}

double NNfunction_ss_dLsR::synapse0x1ef4b60() {
   return (neuron0x1ed82e0()*0.133142);
}

double NNfunction_ss_dLsR::synapse0x1ef4ba0() {
   return (neuron0x1ed8620()*-0.0984422);
}

double NNfunction_ss_dLsR::synapse0x1ef4630() {
   return (neuron0x1ed8960()*0.0418039);
}

double NNfunction_ss_dLsR::synapse0x1ef4670() {
   return (neuron0x1ed8ec0()*0.0407861);
}

double NNfunction_ss_dLsR::synapse0x1ef4cf0() {
   return (neuron0x1ed90e0()*-0.637064);
}

double NNfunction_ss_dLsR::synapse0x1ef4d30() {
   return (neuron0x1ed9420()*0.0192079);
}

double NNfunction_ss_dLsR::synapse0x1ef4d70() {
   return (neuron0x1ed9760()*-0.15029);
}

double NNfunction_ss_dLsR::synapse0x1ef4db0() {
   return (neuron0x1ed9aa0()*0.0533732);
}

double NNfunction_ss_dLsR::synapse0x1ef4df0() {
   return (neuron0x1ed9de0()*-0.274891);
}

double NNfunction_ss_dLsR::synapse0x1ef4e30() {
   return (neuron0x1eda120()*0.0847838);
}

double NNfunction_ss_dLsR::synapse0x1ef51b0() {
   return (neuron0x1ed5560()*0.0276983);
}

double NNfunction_ss_dLsR::synapse0x1ef51f0() {
   return (neuron0x1ed58a0()*-0.156096);
}

double NNfunction_ss_dLsR::synapse0x1ef5230() {
   return (neuron0x1ed5be0()*-1.5424);
}

double NNfunction_ss_dLsR::synapse0x1ef5270() {
   return (neuron0x1ed5f20()*0.256704);
}

double NNfunction_ss_dLsR::synapse0x1ef52b0() {
   return (neuron0x1ed6260()*-0.318138);
}

double NNfunction_ss_dLsR::synapse0x1ef52f0() {
   return (neuron0x1ed65a0()*-0.0885576);
}

double NNfunction_ss_dLsR::synapse0x1ef5330() {
   return (neuron0x1ed68e0()*-0.0946194);
}

double NNfunction_ss_dLsR::synapse0x1ef5370() {
   return (neuron0x1ed6c20()*-0.114034);
}

double NNfunction_ss_dLsR::synapse0x1ef53b0() {
   return (neuron0x1ed6f60()*-0.199739);
}

double NNfunction_ss_dLsR::synapse0x1ef53f0() {
   return (neuron0x1ed72a0()*-0.0365449);
}

double NNfunction_ss_dLsR::synapse0x1ef5430() {
   return (neuron0x1ed75e0()*-0.250078);
}

double NNfunction_ss_dLsR::synapse0x1ef5470() {
   return (neuron0x1ed7920()*0.334848);
}

double NNfunction_ss_dLsR::synapse0x1ef54b0() {
   return (neuron0x1ed7c60()*0.143267);
}

double NNfunction_ss_dLsR::synapse0x1ef54f0() {
   return (neuron0x1ed7fa0()*-0.295639);
}

double NNfunction_ss_dLsR::synapse0x1ef5530() {
   return (neuron0x1ed82e0()*0.103561);
}

double NNfunction_ss_dLsR::synapse0x1ef5570() {
   return (neuron0x1ed8620()*0.119306);
}

double NNfunction_ss_dLsR::synapse0x1ef5000() {
   return (neuron0x1ed8960()*0.0754056);
}

double NNfunction_ss_dLsR::synapse0x1ef5040() {
   return (neuron0x1ed8ec0()*0.254919);
}

double NNfunction_ss_dLsR::synapse0x1ef56c0() {
   return (neuron0x1ed90e0()*-0.369587);
}

double NNfunction_ss_dLsR::synapse0x1ef5700() {
   return (neuron0x1ed9420()*0.962436);
}

double NNfunction_ss_dLsR::synapse0x1ef5740() {
   return (neuron0x1ed9760()*-0.0313298);
}

double NNfunction_ss_dLsR::synapse0x1ef5780() {
   return (neuron0x1ed9aa0()*0.135341);
}

double NNfunction_ss_dLsR::synapse0x1ef57c0() {
   return (neuron0x1ed9de0()*-0.349328);
}

double NNfunction_ss_dLsR::synapse0x1ef5800() {
   return (neuron0x1eda120()*-0.0282835);
}

double NNfunction_ss_dLsR::synapse0x1ef5b80() {
   return (neuron0x1ed5560()*-0.0659074);
}

double NNfunction_ss_dLsR::synapse0x1ef5bc0() {
   return (neuron0x1ed58a0()*0.010665);
}

double NNfunction_ss_dLsR::synapse0x1ef5c00() {
   return (neuron0x1ed5be0()*-0.0355297);
}

double NNfunction_ss_dLsR::synapse0x1ef5c40() {
   return (neuron0x1ed5f20()*0.165921);
}

double NNfunction_ss_dLsR::synapse0x1ef5c80() {
   return (neuron0x1ed6260()*-0.0539346);
}

double NNfunction_ss_dLsR::synapse0x1ef5cc0() {
   return (neuron0x1ed65a0()*-0.0639258);
}

double NNfunction_ss_dLsR::synapse0x1ef5d00() {
   return (neuron0x1ed68e0()*0.0251774);
}

double NNfunction_ss_dLsR::synapse0x1ef5d40() {
   return (neuron0x1ed6c20()*0.180301);
}

double NNfunction_ss_dLsR::synapse0x1ef5d80() {
   return (neuron0x1ed6f60()*-0.299618);
}

double NNfunction_ss_dLsR::synapse0x1ef5dc0() {
   return (neuron0x1ed72a0()*0.0387617);
}

double NNfunction_ss_dLsR::synapse0x1ef5e00() {
   return (neuron0x1ed75e0()*-0.369316);
}

double NNfunction_ss_dLsR::synapse0x1ef5e40() {
   return (neuron0x1ed7920()*-1.03871);
}

double NNfunction_ss_dLsR::synapse0x1ef5e80() {
   return (neuron0x1ed7c60()*-0.0418537);
}

double NNfunction_ss_dLsR::synapse0x1ef5ec0() {
   return (neuron0x1ed7fa0()*-0.154156);
}

double NNfunction_ss_dLsR::synapse0x1ef5f00() {
   return (neuron0x1ed82e0()*0.0563314);
}

double NNfunction_ss_dLsR::synapse0x1ef5f40() {
   return (neuron0x1ed8620()*-0.155313);
}

double NNfunction_ss_dLsR::synapse0x1ef59d0() {
   return (neuron0x1ed8960()*-0.00580928);
}

double NNfunction_ss_dLsR::synapse0x1ef5a10() {
   return (neuron0x1ed8ec0()*0.330095);
}

double NNfunction_ss_dLsR::synapse0x1ef6090() {
   return (neuron0x1ed90e0()*-1.72934);
}

double NNfunction_ss_dLsR::synapse0x1ef60d0() {
   return (neuron0x1ed9420()*0.189483);
}

double NNfunction_ss_dLsR::synapse0x1ef6110() {
   return (neuron0x1ed9760()*-0.0590422);
}

double NNfunction_ss_dLsR::synapse0x1ef6150() {
   return (neuron0x1ed9aa0()*-0.0921393);
}

double NNfunction_ss_dLsR::synapse0x1ef6190() {
   return (neuron0x1ed9de0()*0.0856961);
}

double NNfunction_ss_dLsR::synapse0x1ef61d0() {
   return (neuron0x1eda120()*-0.0221339);
}

double NNfunction_ss_dLsR::synapse0x1ef6550() {
   return (neuron0x1ed5560()*-0.085242);
}

double NNfunction_ss_dLsR::synapse0x1ef6590() {
   return (neuron0x1ed58a0()*0.0327763);
}

double NNfunction_ss_dLsR::synapse0x1ef65d0() {
   return (neuron0x1ed5be0()*0.0273697);
}

double NNfunction_ss_dLsR::synapse0x1ef6610() {
   return (neuron0x1ed5f20()*-2.67733);
}

double NNfunction_ss_dLsR::synapse0x1ef6650() {
   return (neuron0x1ed6260()*0.0411079);
}

double NNfunction_ss_dLsR::synapse0x1ef6690() {
   return (neuron0x1ed65a0()*0.00705957);
}

double NNfunction_ss_dLsR::synapse0x1ef66d0() {
   return (neuron0x1ed68e0()*-0.0555673);
}

double NNfunction_ss_dLsR::synapse0x1ef6710() {
   return (neuron0x1ed6c20()*-0.0693899);
}

double NNfunction_ss_dLsR::synapse0x1ef6750() {
   return (neuron0x1ed6f60()*-0.0569431);
}

double NNfunction_ss_dLsR::synapse0x1ef6790() {
   return (neuron0x1ed72a0()*-0.0427785);
}

double NNfunction_ss_dLsR::synapse0x1ef67d0() {
   return (neuron0x1ed75e0()*-0.0369029);
}

double NNfunction_ss_dLsR::synapse0x1ef6810() {
   return (neuron0x1ed7920()*-0.183962);
}

double NNfunction_ss_dLsR::synapse0x1ef6850() {
   return (neuron0x1ed7c60()*-0.125188);
}

double NNfunction_ss_dLsR::synapse0x1ef6890() {
   return (neuron0x1ed7fa0()*0.114781);
}

double NNfunction_ss_dLsR::synapse0x1ef68d0() {
   return (neuron0x1ed82e0()*0.0114146);
}

double NNfunction_ss_dLsR::synapse0x1ef6910() {
   return (neuron0x1ed8620()*-0.0186636);
}

double NNfunction_ss_dLsR::synapse0x1ef63a0() {
   return (neuron0x1ed8960()*0.0780893);
}

double NNfunction_ss_dLsR::synapse0x1ef63e0() {
   return (neuron0x1ed8ec0()*-0.0583108);
}

double NNfunction_ss_dLsR::synapse0x1ef6a60() {
   return (neuron0x1ed90e0()*-0.273821);
}

double NNfunction_ss_dLsR::synapse0x1ef6aa0() {
   return (neuron0x1ed9420()*-0.15104);
}

double NNfunction_ss_dLsR::synapse0x1ef6ae0() {
   return (neuron0x1ed9760()*0.0240516);
}

double NNfunction_ss_dLsR::synapse0x1ef6b20() {
   return (neuron0x1ed9aa0()*0.0970903);
}

double NNfunction_ss_dLsR::synapse0x1ef6b60() {
   return (neuron0x1ed9de0()*0.0360743);
}

double NNfunction_ss_dLsR::synapse0x1ef6ba0() {
   return (neuron0x1eda120()*0.0527963);
}

double NNfunction_ss_dLsR::synapse0x1edf650() {
   return (neuron0x1ed5560()*-0.0719584);
}

double NNfunction_ss_dLsR::synapse0x1edf690() {
   return (neuron0x1ed58a0()*-0.130285);
}

double NNfunction_ss_dLsR::synapse0x1edf6d0() {
   return (neuron0x1ed5be0()*-0.138407);
}

double NNfunction_ss_dLsR::synapse0x1edf710() {
   return (neuron0x1ed5f20()*1.34204);
}

double NNfunction_ss_dLsR::synapse0x1edf750() {
   return (neuron0x1ed6260()*0.0498143);
}

double NNfunction_ss_dLsR::synapse0x1edf790() {
   return (neuron0x1ed65a0()*0.0875777);
}

double NNfunction_ss_dLsR::synapse0x1edf7d0() {
   return (neuron0x1ed68e0()*0.065139);
}

double NNfunction_ss_dLsR::synapse0x1edf810() {
   return (neuron0x1ed6c20()*0.0280585);
}

double NNfunction_ss_dLsR::synapse0x1ef7330() {
   return (neuron0x1ed6f60()*-0.00487613);
}

double NNfunction_ss_dLsR::synapse0x1ef7370() {
   return (neuron0x1ed72a0()*-0.0623731);
}

double NNfunction_ss_dLsR::synapse0x1ef73b0() {
   return (neuron0x1ed75e0()*0.0814105);
}

double NNfunction_ss_dLsR::synapse0x1ef73f0() {
   return (neuron0x1ed7920()*0.167844);
}

double NNfunction_ss_dLsR::synapse0x1ef7430() {
   return (neuron0x1ed7c60()*-0.0812326);
}

double NNfunction_ss_dLsR::synapse0x1ef7470() {
   return (neuron0x1ed7fa0()*0.120902);
}

double NNfunction_ss_dLsR::synapse0x1ef74b0() {
   return (neuron0x1ed82e0()*-0.011157);
}

double NNfunction_ss_dLsR::synapse0x1ef74f0() {
   return (neuron0x1ed8620()*-0.00779142);
}

double NNfunction_ss_dLsR::synapse0x1ef6d70() {
   return (neuron0x1ed8960()*0.0478296);
}

double NNfunction_ss_dLsR::synapse0x1ef6db0() {
   return (neuron0x1ed8ec0()*0.0649963);
}

double NNfunction_ss_dLsR::synapse0x1ef7640() {
   return (neuron0x1ed90e0()*-1.1483);
}

double NNfunction_ss_dLsR::synapse0x1ef7680() {
   return (neuron0x1ed9420()*-0.103309);
}

double NNfunction_ss_dLsR::synapse0x1ef76c0() {
   return (neuron0x1ed9760()*-0.0327709);
}

double NNfunction_ss_dLsR::synapse0x1ef7700() {
   return (neuron0x1ed9aa0()*-0.0053419);
}

double NNfunction_ss_dLsR::synapse0x1ef7740() {
   return (neuron0x1ed9de0()*0.0016655);
}

double NNfunction_ss_dLsR::synapse0x1ef7780() {
   return (neuron0x1eda120()*0.146157);
}

double NNfunction_ss_dLsR::synapse0x1ef7b00() {
   return (neuron0x1ed5560()*0.164617);
}

double NNfunction_ss_dLsR::synapse0x1ef7b40() {
   return (neuron0x1ed58a0()*-0.233428);
}

double NNfunction_ss_dLsR::synapse0x1ef7b80() {
   return (neuron0x1ed5be0()*1.80395);
}

double NNfunction_ss_dLsR::synapse0x1ef7bc0() {
   return (neuron0x1ed5f20()*0.312052);
}

double NNfunction_ss_dLsR::synapse0x1ef7c00() {
   return (neuron0x1ed6260()*-0.22217);
}

double NNfunction_ss_dLsR::synapse0x1ef7c40() {
   return (neuron0x1ed65a0()*-0.15666);
}

double NNfunction_ss_dLsR::synapse0x1ef7c80() {
   return (neuron0x1ed68e0()*0.0008121);
}

double NNfunction_ss_dLsR::synapse0x1ef7cc0() {
   return (neuron0x1ed6c20()*0.0672545);
}

double NNfunction_ss_dLsR::synapse0x1ef7d00() {
   return (neuron0x1ed6f60()*0.210305);
}

double NNfunction_ss_dLsR::synapse0x1ef7d40() {
   return (neuron0x1ed72a0()*-0.00210754);
}

double NNfunction_ss_dLsR::synapse0x1ef7d80() {
   return (neuron0x1ed75e0()*0.108756);
}

double NNfunction_ss_dLsR::synapse0x1ef7dc0() {
   return (neuron0x1ed7920()*-0.0994124);
}

double NNfunction_ss_dLsR::synapse0x1ef7e00() {
   return (neuron0x1ed7c60()*0.367967);
}

double NNfunction_ss_dLsR::synapse0x1ef7e40() {
   return (neuron0x1ed7fa0()*-0.178879);
}

double NNfunction_ss_dLsR::synapse0x1ef7e80() {
   return (neuron0x1ed82e0()*0.180517);
}

double NNfunction_ss_dLsR::synapse0x1ef7ec0() {
   return (neuron0x1ed8620()*0.276004);
}

double NNfunction_ss_dLsR::synapse0x1ef7950() {
   return (neuron0x1ed8960()*-0.0801215);
}

double NNfunction_ss_dLsR::synapse0x1ef7990() {
   return (neuron0x1ed8ec0()*0.101851);
}

double NNfunction_ss_dLsR::synapse0x1ef8010() {
   return (neuron0x1ed90e0()*0.168196);
}

double NNfunction_ss_dLsR::synapse0x1ef8050() {
   return (neuron0x1ed9420()*0.0882717);
}

double NNfunction_ss_dLsR::synapse0x1ef8090() {
   return (neuron0x1ed9760()*0.0423993);
}

double NNfunction_ss_dLsR::synapse0x1ef80d0() {
   return (neuron0x1ed9aa0()*-0.0678321);
}

double NNfunction_ss_dLsR::synapse0x1ef8110() {
   return (neuron0x1ed9de0()*-0.047675);
}

double NNfunction_ss_dLsR::synapse0x1ef8150() {
   return (neuron0x1eda120()*0.0999533);
}

double NNfunction_ss_dLsR::synapse0x1ef84d0() {
   return (neuron0x1ed5560()*-0.0833782);
}

double NNfunction_ss_dLsR::synapse0x1ef8510() {
   return (neuron0x1ed58a0()*-0.11349);
}

double NNfunction_ss_dLsR::synapse0x1ef8550() {
   return (neuron0x1ed5be0()*0.53359);
}

double NNfunction_ss_dLsR::synapse0x1ef8590() {
   return (neuron0x1ed5f20()*-0.191353);
}

double NNfunction_ss_dLsR::synapse0x1ef85d0() {
   return (neuron0x1ed6260()*0.606177);
}

double NNfunction_ss_dLsR::synapse0x1ef8610() {
   return (neuron0x1ed65a0()*-0.743021);
}

double NNfunction_ss_dLsR::synapse0x1ef8650() {
   return (neuron0x1ed68e0()*0.169285);
}

double NNfunction_ss_dLsR::synapse0x1ef8690() {
   return (neuron0x1ed6c20()*-1.42654);
}

double NNfunction_ss_dLsR::synapse0x1ef86d0() {
   return (neuron0x1ed6f60()*0.421907);
}

double NNfunction_ss_dLsR::synapse0x1ef8710() {
   return (neuron0x1ed72a0()*-0.823195);
}

double NNfunction_ss_dLsR::synapse0x1ef8750() {
   return (neuron0x1ed75e0()*-0.0282449);
}

double NNfunction_ss_dLsR::synapse0x1ef8790() {
   return (neuron0x1ed7920()*0.188812);
}

double NNfunction_ss_dLsR::synapse0x1ef87d0() {
   return (neuron0x1ed7c60()*-0.562077);
}

double NNfunction_ss_dLsR::synapse0x1ef8810() {
   return (neuron0x1ed7fa0()*-0.290617);
}

double NNfunction_ss_dLsR::synapse0x1ef8850() {
   return (neuron0x1ed82e0()*0.0679201);
}

double NNfunction_ss_dLsR::synapse0x1ef8890() {
   return (neuron0x1ed8620()*0.344807);
}

double NNfunction_ss_dLsR::synapse0x1ef8320() {
   return (neuron0x1ed8960()*-0.246543);
}

double NNfunction_ss_dLsR::synapse0x1ef8360() {
   return (neuron0x1ed8ec0()*-0.228304);
}

double NNfunction_ss_dLsR::synapse0x1ee8e90() {
   return (neuron0x1ed90e0()*0.0623445);
}

double NNfunction_ss_dLsR::synapse0x1ee8ed0() {
   return (neuron0x1ed9420()*-1.04358);
}

double NNfunction_ss_dLsR::synapse0x1ee8f10() {
   return (neuron0x1ed9760()*0.33847);
}

double NNfunction_ss_dLsR::synapse0x1ee8f50() {
   return (neuron0x1ed9aa0()*-0.434444);
}

double NNfunction_ss_dLsR::synapse0x1ee8f90() {
   return (neuron0x1ed9de0()*0.445784);
}

double NNfunction_ss_dLsR::synapse0x1ee8fd0() {
   return (neuron0x1eda120()*0.748051);
}

double NNfunction_ss_dLsR::synapse0x1ee9350() {
   return (neuron0x1ed5560()*0.00906271);
}

double NNfunction_ss_dLsR::synapse0x1ee9390() {
   return (neuron0x1ed58a0()*-0.00590453);
}

double NNfunction_ss_dLsR::synapse0x1ee93d0() {
   return (neuron0x1ed5be0()*-0.00915514);
}

double NNfunction_ss_dLsR::synapse0x1ee9410() {
   return (neuron0x1ed5f20()*3.70997);
}

double NNfunction_ss_dLsR::synapse0x1ee9450() {
   return (neuron0x1ed6260()*0.0146006);
}

double NNfunction_ss_dLsR::synapse0x1ee9490() {
   return (neuron0x1ed65a0()*0.0175405);
}

double NNfunction_ss_dLsR::synapse0x1ee94d0() {
   return (neuron0x1ed68e0()*-0.00299315);
}

double NNfunction_ss_dLsR::synapse0x1ee9510() {
   return (neuron0x1ed6c20()*0.00492882);
}

double NNfunction_ss_dLsR::synapse0x1ee9550() {
   return (neuron0x1ed6f60()*-0.0197282);
}

double NNfunction_ss_dLsR::synapse0x1ee9590() {
   return (neuron0x1ed72a0()*-0.0181655);
}

double NNfunction_ss_dLsR::synapse0x1ee95d0() {
   return (neuron0x1ed75e0()*0.000311271);
}

double NNfunction_ss_dLsR::synapse0x1ee9610() {
   return (neuron0x1ed7920()*-0.265733);
}

double NNfunction_ss_dLsR::synapse0x1ee9650() {
   return (neuron0x1ed7c60()*-0.0344888);
}

double NNfunction_ss_dLsR::synapse0x1ee9690() {
   return (neuron0x1ed7fa0()*0.0045213);
}

double NNfunction_ss_dLsR::synapse0x1ee96d0() {
   return (neuron0x1ed82e0()*-0.0104178);
}

double NNfunction_ss_dLsR::synapse0x1ee9710() {
   return (neuron0x1ed8620()*0.00624947);
}

double NNfunction_ss_dLsR::synapse0x1ee91a0() {
   return (neuron0x1ed8960()*-0.00884438);
}

double NNfunction_ss_dLsR::synapse0x1ee91e0() {
   return (neuron0x1ed8ec0()*-0.00915671);
}

double NNfunction_ss_dLsR::synapse0x1ee9860() {
   return (neuron0x1ed90e0()*-0.353632);
}

double NNfunction_ss_dLsR::synapse0x1ee98a0() {
   return (neuron0x1ed9420()*-0.0160048);
}

double NNfunction_ss_dLsR::synapse0x1ee98e0() {
   return (neuron0x1ed9760()*-0.00185178);
}

double NNfunction_ss_dLsR::synapse0x1ee9920() {
   return (neuron0x1ed9aa0()*-0.00117302);
}

double NNfunction_ss_dLsR::synapse0x1ee9960() {
   return (neuron0x1ed9de0()*-0.00374483);
}

double NNfunction_ss_dLsR::synapse0x1ee99a0() {
   return (neuron0x1eda120()*-0.00624927);
}

double NNfunction_ss_dLsR::synapse0x1ee9d20() {
   return (neuron0x1ed5560()*-0.0220443);
}

double NNfunction_ss_dLsR::synapse0x1ee9d60() {
   return (neuron0x1ed58a0()*0.00611396);
}

double NNfunction_ss_dLsR::synapse0x1ee9da0() {
   return (neuron0x1ed5be0()*0.0330364);
}

double NNfunction_ss_dLsR::synapse0x1ee9de0() {
   return (neuron0x1ed5f20()*0.354797);
}

double NNfunction_ss_dLsR::synapse0x1ee9e20() {
   return (neuron0x1ed6260()*0.0217496);
}

double NNfunction_ss_dLsR::synapse0x1ee9e60() {
   return (neuron0x1ed65a0()*-0.0235806);
}

double NNfunction_ss_dLsR::synapse0x1ee9ea0() {
   return (neuron0x1ed68e0()*-0.00620309);
}

double NNfunction_ss_dLsR::synapse0x1ee9ee0() {
   return (neuron0x1ed6c20()*-0.00406044);
}

double NNfunction_ss_dLsR::synapse0x1ee9f20() {
   return (neuron0x1ed6f60()*-0.0130169);
}

double NNfunction_ss_dLsR::synapse0x1ee9f60() {
   return (neuron0x1ed72a0()*0.0344108);
}

double NNfunction_ss_dLsR::synapse0x1ee9fa0() {
   return (neuron0x1ed75e0()*-0.00782517);
}

double NNfunction_ss_dLsR::synapse0x1ee9fe0() {
   return (neuron0x1ed7920()*0.109799);
}

double NNfunction_ss_dLsR::synapse0x1eea020() {
   return (neuron0x1ed7c60()*0.0170551);
}

double NNfunction_ss_dLsR::synapse0x1eea060() {
   return (neuron0x1ed7fa0()*0.0204897);
}

double NNfunction_ss_dLsR::synapse0x1eea0a0() {
   return (neuron0x1ed82e0()*-0.0126363);
}

double NNfunction_ss_dLsR::synapse0x1eea0e0() {
   return (neuron0x1ed8620()*-0.00341129);
}

double NNfunction_ss_dLsR::synapse0x1ee9b70() {
   return (neuron0x1ed8960()*-0.0158875);
}

double NNfunction_ss_dLsR::synapse0x1ee9bb0() {
   return (neuron0x1ed8ec0()*-0.00403252);
}

double NNfunction_ss_dLsR::synapse0x1eea230() {
   return (neuron0x1ed90e0()*-0.743768);
}

double NNfunction_ss_dLsR::synapse0x1eea270() {
   return (neuron0x1ed9420()*-0.00324713);
}

double NNfunction_ss_dLsR::synapse0x1eea2b0() {
   return (neuron0x1ed9760()*0.00178764);
}

double NNfunction_ss_dLsR::synapse0x1eea2f0() {
   return (neuron0x1ed9aa0()*0.0460358);
}

double NNfunction_ss_dLsR::synapse0x1eea330() {
   return (neuron0x1ed9de0()*0.0139144);
}

double NNfunction_ss_dLsR::synapse0x1eea370() {
   return (neuron0x1eda120()*0.00559413);
}

double NNfunction_ss_dLsR::synapse0x1eea6f0() {
   return (neuron0x1ed5560()*0.470057);
}

double NNfunction_ss_dLsR::synapse0x1eea730() {
   return (neuron0x1ed58a0()*-0.157857);
}

double NNfunction_ss_dLsR::synapse0x1eea770() {
   return (neuron0x1ed5be0()*-0.0964362);
}

double NNfunction_ss_dLsR::synapse0x1eea7b0() {
   return (neuron0x1ed5f20()*0.800062);
}

double NNfunction_ss_dLsR::synapse0x1eea7f0() {
   return (neuron0x1ed6260()*0.355916);
}

double NNfunction_ss_dLsR::synapse0x1eea830() {
   return (neuron0x1ed65a0()*0.296857);
}

double NNfunction_ss_dLsR::synapse0x1eea870() {
   return (neuron0x1ed68e0()*0.424321);
}

double NNfunction_ss_dLsR::synapse0x1eea8b0() {
   return (neuron0x1ed6c20()*-0.388599);
}

double NNfunction_ss_dLsR::synapse0x1eea8f0() {
   return (neuron0x1ed6f60()*-0.252117);
}

double NNfunction_ss_dLsR::synapse0x1eea930() {
   return (neuron0x1ed72a0()*-0.418066);
}

double NNfunction_ss_dLsR::synapse0x1eea970() {
   return (neuron0x1ed75e0()*-0.0479303);
}

double NNfunction_ss_dLsR::synapse0x1eea9b0() {
   return (neuron0x1ed7920()*0.649525);
}

double NNfunction_ss_dLsR::synapse0x1eea9f0() {
   return (neuron0x1ed7c60()*0.856896);
}

double NNfunction_ss_dLsR::synapse0x1eeaa30() {
   return (neuron0x1ed7fa0()*0.274759);
}

double NNfunction_ss_dLsR::synapse0x1eeaa70() {
   return (neuron0x1ed82e0()*0.0142076);
}

double NNfunction_ss_dLsR::synapse0x1eeaab0() {
   return (neuron0x1ed8620()*-0.129237);
}

double NNfunction_ss_dLsR::synapse0x1eea540() {
   return (neuron0x1ed8960()*0.345267);
}

double NNfunction_ss_dLsR::synapse0x1eea580() {
   return (neuron0x1ed8ec0()*-0.150478);
}

double NNfunction_ss_dLsR::synapse0x1eeac00() {
   return (neuron0x1ed90e0()*0.21806);
}

double NNfunction_ss_dLsR::synapse0x1eeac40() {
   return (neuron0x1ed9420()*-0.21136);
}

double NNfunction_ss_dLsR::synapse0x1eeac80() {
   return (neuron0x1ed9760()*-0.146074);
}

double NNfunction_ss_dLsR::synapse0x1eeacc0() {
   return (neuron0x1ed9aa0()*-0.203327);
}

double NNfunction_ss_dLsR::synapse0x1eead00() {
   return (neuron0x1ed9de0()*-0.0119479);
}

double NNfunction_ss_dLsR::synapse0x1eead40() {
   return (neuron0x1eda120()*-0.126239);
}

double NNfunction_ss_dLsR::synapse0x1efcc10() {
   return (neuron0x1ed5560()*-0.0179584);
}

double NNfunction_ss_dLsR::synapse0x1efcc50() {
   return (neuron0x1ed58a0()*0.0173674);
}

double NNfunction_ss_dLsR::synapse0x1efcc90() {
   return (neuron0x1ed5be0()*0.0137482);
}

double NNfunction_ss_dLsR::synapse0x1efccd0() {
   return (neuron0x1ed5f20()*-2.06394);
}

double NNfunction_ss_dLsR::synapse0x1efcd10() {
   return (neuron0x1ed6260()*0.00943375);
}

double NNfunction_ss_dLsR::synapse0x1efcd50() {
   return (neuron0x1ed65a0()*0.00172546);
}

double NNfunction_ss_dLsR::synapse0x1efcd90() {
   return (neuron0x1ed68e0()*-0.0260442);
}

double NNfunction_ss_dLsR::synapse0x1efcdd0() {
   return (neuron0x1ed6c20()*-0.0225605);
}

double NNfunction_ss_dLsR::synapse0x1efce10() {
   return (neuron0x1ed6f60()*-0.0182901);
}

double NNfunction_ss_dLsR::synapse0x1efce50() {
   return (neuron0x1ed72a0()*-0.0158584);
}

double NNfunction_ss_dLsR::synapse0x1efce90() {
   return (neuron0x1ed75e0()*-0.0150536);
}

double NNfunction_ss_dLsR::synapse0x1efced0() {
   return (neuron0x1ed7920()*-0.454439);
}

double NNfunction_ss_dLsR::synapse0x1efcf10() {
   return (neuron0x1ed7c60()*-0.0565319);
}

double NNfunction_ss_dLsR::synapse0x1efcf50() {
   return (neuron0x1ed7fa0()*0.0143708);
}

double NNfunction_ss_dLsR::synapse0x1efcf90() {
   return (neuron0x1ed82e0()*0.0123532);
}

double NNfunction_ss_dLsR::synapse0x1efcfd0() {
   return (neuron0x1ed8620()*-0.00642442);
}

double NNfunction_ss_dLsR::synapse0x1eead80() {
   return (neuron0x1ed8960()*0.0270731);
}

double NNfunction_ss_dLsR::synapse0x1eeadc0() {
   return (neuron0x1ed8ec0()*-0.0103541);
}

double NNfunction_ss_dLsR::synapse0x1efd120() {
   return (neuron0x1ed90e0()*-0.275028);
}

double NNfunction_ss_dLsR::synapse0x1efd160() {
   return (neuron0x1ed9420()*-0.0432633);
}

double NNfunction_ss_dLsR::synapse0x1efd1a0() {
   return (neuron0x1ed9760()*0.00974996);
}

double NNfunction_ss_dLsR::synapse0x1efd1e0() {
   return (neuron0x1ed9aa0()*0.015405);
}

double NNfunction_ss_dLsR::synapse0x1efd220() {
   return (neuron0x1ed9de0()*0.0120238);
}

double NNfunction_ss_dLsR::synapse0x1efd260() {
   return (neuron0x1eda120()*0.0114092);
}

double NNfunction_ss_dLsR::synapse0x1efd5e0() {
   return (neuron0x1ed5560()*-0.561834);
}

double NNfunction_ss_dLsR::synapse0x1efd620() {
   return (neuron0x1ed58a0()*-0.214853);
}

double NNfunction_ss_dLsR::synapse0x1efd660() {
   return (neuron0x1ed5be0()*0.187906);
}

double NNfunction_ss_dLsR::synapse0x1efd6a0() {
   return (neuron0x1ed5f20()*-0.523707);
}

double NNfunction_ss_dLsR::synapse0x1efd6e0() {
   return (neuron0x1ed6260()*-0.0890895);
}

double NNfunction_ss_dLsR::synapse0x1efd720() {
   return (neuron0x1ed65a0()*0.204651);
}

double NNfunction_ss_dLsR::synapse0x1efd760() {
   return (neuron0x1ed68e0()*0.368158);
}

double NNfunction_ss_dLsR::synapse0x1efd7a0() {
   return (neuron0x1ed6c20()*0.267535);
}

double NNfunction_ss_dLsR::synapse0x1efd7e0() {
   return (neuron0x1ed6f60()*0.188997);
}

double NNfunction_ss_dLsR::synapse0x1efd820() {
   return (neuron0x1ed72a0()*-1.03505);
}

double NNfunction_ss_dLsR::synapse0x1efd860() {
   return (neuron0x1ed75e0()*0.611034);
}

double NNfunction_ss_dLsR::synapse0x1efd8a0() {
   return (neuron0x1ed7920()*-0.195933);
}

double NNfunction_ss_dLsR::synapse0x1efd8e0() {
   return (neuron0x1ed7c60()*0.236113);
}

double NNfunction_ss_dLsR::synapse0x1efd920() {
   return (neuron0x1ed7fa0()*0.0279068);
}

double NNfunction_ss_dLsR::synapse0x1efd960() {
   return (neuron0x1ed82e0()*0.251319);
}

double NNfunction_ss_dLsR::synapse0x1efd9a0() {
   return (neuron0x1ed8620()*0.658927);
}

double NNfunction_ss_dLsR::synapse0x1efd430() {
   return (neuron0x1ed8960()*0.0119651);
}

double NNfunction_ss_dLsR::synapse0x1efd470() {
   return (neuron0x1ed8ec0()*-1.52278);
}

double NNfunction_ss_dLsR::synapse0x1efdaf0() {
   return (neuron0x1ed90e0()*-0.406289);
}

double NNfunction_ss_dLsR::synapse0x1efdb30() {
   return (neuron0x1ed9420()*0.109921);
}

double NNfunction_ss_dLsR::synapse0x1efdb70() {
   return (neuron0x1ed9760()*0.607628);
}

double NNfunction_ss_dLsR::synapse0x1efdbb0() {
   return (neuron0x1ed9aa0()*-0.25718);
}

double NNfunction_ss_dLsR::synapse0x1efdbf0() {
   return (neuron0x1ed9de0()*0.187355);
}

double NNfunction_ss_dLsR::synapse0x1efdc30() {
   return (neuron0x1eda120()*0.338937);
}

double NNfunction_ss_dLsR::synapse0x1efdfb0() {
   return (neuron0x1ed5560()*0.442531);
}

double NNfunction_ss_dLsR::synapse0x1efdff0() {
   return (neuron0x1ed58a0()*-0.715609);
}

double NNfunction_ss_dLsR::synapse0x1efe030() {
   return (neuron0x1ed5be0()*0.163958);
}

double NNfunction_ss_dLsR::synapse0x1efe070() {
   return (neuron0x1ed5f20()*0.133426);
}

double NNfunction_ss_dLsR::synapse0x1efe0b0() {
   return (neuron0x1ed6260()*0.384834);
}

double NNfunction_ss_dLsR::synapse0x1efe0f0() {
   return (neuron0x1ed65a0()*0.372848);
}

double NNfunction_ss_dLsR::synapse0x1efe130() {
   return (neuron0x1ed68e0()*-0.380058);
}

double NNfunction_ss_dLsR::synapse0x1efe170() {
   return (neuron0x1ed6c20()*-0.202063);
}

double NNfunction_ss_dLsR::synapse0x1efe1b0() {
   return (neuron0x1ed6f60()*0.303473);
}

double NNfunction_ss_dLsR::synapse0x1efe1f0() {
   return (neuron0x1ed72a0()*0.393919);
}

double NNfunction_ss_dLsR::synapse0x1efe230() {
   return (neuron0x1ed75e0()*0.272943);
}

double NNfunction_ss_dLsR::synapse0x1efe270() {
   return (neuron0x1ed7920()*0.253103);
}

double NNfunction_ss_dLsR::synapse0x1efe2b0() {
   return (neuron0x1ed7c60()*-1.39483);
}

double NNfunction_ss_dLsR::synapse0x1efe2f0() {
   return (neuron0x1ed7fa0()*0.689547);
}

double NNfunction_ss_dLsR::synapse0x1efe330() {
   return (neuron0x1ed82e0()*-0.246462);
}

double NNfunction_ss_dLsR::synapse0x1efe370() {
   return (neuron0x1ed8620()*-0.596103);
}

double NNfunction_ss_dLsR::synapse0x1efde00() {
   return (neuron0x1ed8960()*0.758191);
}

double NNfunction_ss_dLsR::synapse0x1efde40() {
   return (neuron0x1ed8ec0()*-0.0850633);
}

double NNfunction_ss_dLsR::synapse0x1efe4c0() {
   return (neuron0x1ed90e0()*0.638955);
}

double NNfunction_ss_dLsR::synapse0x1efe500() {
   return (neuron0x1ed9420()*-0.841492);
}

double NNfunction_ss_dLsR::synapse0x1efe540() {
   return (neuron0x1ed9760()*-0.290697);
}

double NNfunction_ss_dLsR::synapse0x1efe580() {
   return (neuron0x1ed9aa0()*-0.526439);
}

double NNfunction_ss_dLsR::synapse0x1efe5c0() {
   return (neuron0x1ed9de0()*0.451983);
}

double NNfunction_ss_dLsR::synapse0x1efe600() {
   return (neuron0x1eda120()*-0.621005);
}

double NNfunction_ss_dLsR::synapse0x1efe980() {
   return (neuron0x1ed5560()*0.00524688);
}

double NNfunction_ss_dLsR::synapse0x1efe9c0() {
   return (neuron0x1ed58a0()*-0.555448);
}

double NNfunction_ss_dLsR::synapse0x1efea00() {
   return (neuron0x1ed5be0()*-0.881548);
}

double NNfunction_ss_dLsR::synapse0x1efea40() {
   return (neuron0x1ed5f20()*-0.0609122);
}

double NNfunction_ss_dLsR::synapse0x1efea80() {
   return (neuron0x1ed6260()*-0.55904);
}

double NNfunction_ss_dLsR::synapse0x1efeac0() {
   return (neuron0x1ed65a0()*0.555298);
}

double NNfunction_ss_dLsR::synapse0x1efeb00() {
   return (neuron0x1ed68e0()*0.722758);
}

double NNfunction_ss_dLsR::synapse0x1efeb40() {
   return (neuron0x1ed6c20()*-0.232785);
}

double NNfunction_ss_dLsR::synapse0x1efeb80() {
   return (neuron0x1ed6f60()*0.333987);
}

double NNfunction_ss_dLsR::synapse0x1efebc0() {
   return (neuron0x1ed72a0()*-0.727952);
}

double NNfunction_ss_dLsR::synapse0x1efec00() {
   return (neuron0x1ed75e0()*0.769592);
}

double NNfunction_ss_dLsR::synapse0x1efec40() {
   return (neuron0x1ed7920()*-0.888734);
}

double NNfunction_ss_dLsR::synapse0x1efec80() {
   return (neuron0x1ed7c60()*0.1283);
}

double NNfunction_ss_dLsR::synapse0x1efecc0() {
   return (neuron0x1ed7fa0()*-0.192351);
}

double NNfunction_ss_dLsR::synapse0x1efed00() {
   return (neuron0x1ed82e0()*1.00906);
}

double NNfunction_ss_dLsR::synapse0x1efed40() {
   return (neuron0x1ed8620()*0.516882);
}

double NNfunction_ss_dLsR::synapse0x1efe7d0() {
   return (neuron0x1ed8960()*0.00513816);
}

double NNfunction_ss_dLsR::synapse0x1efe810() {
   return (neuron0x1ed8ec0()*0.178658);
}

double NNfunction_ss_dLsR::synapse0x1efee90() {
   return (neuron0x1ed90e0()*0.807874);
}

double NNfunction_ss_dLsR::synapse0x1efeed0() {
   return (neuron0x1ed9420()*-0.0892249);
}

double NNfunction_ss_dLsR::synapse0x1efef10() {
   return (neuron0x1ed9760()*0.43313);
}

double NNfunction_ss_dLsR::synapse0x1efef50() {
   return (neuron0x1ed9aa0()*-0.790068);
}

double NNfunction_ss_dLsR::synapse0x1efef90() {
   return (neuron0x1ed9de0()*0.422511);
}

double NNfunction_ss_dLsR::synapse0x1efefd0() {
   return (neuron0x1eda120()*-0.162172);
}

double NNfunction_ss_dLsR::synapse0x1edb570() {
   return (neuron0x1eda5c0()*-0.594641);
}

double NNfunction_ss_dLsR::synapse0x1edb5b0() {
   return (neuron0x1edaed0()*-2.40163);
}

double NNfunction_ss_dLsR::synapse0x1edca80() {
   return (neuron0x1edb9b0()*1.58526);
}

double NNfunction_ss_dLsR::synapse0x1edcac0() {
   return (neuron0x1c95240()*0.735768);
}

double NNfunction_ss_dLsR::synapse0x1edd450() {
   return (neuron0x1edc7d0()*1.65304);
}

double NNfunction_ss_dLsR::synapse0x1edd490() {
   return (neuron0x1edd1a0()*-0.442147);
}

double NNfunction_ss_dLsR::synapse0x1ede220() {
   return (neuron0x1eddf70()*0.114612);
}

double NNfunction_ss_dLsR::synapse0x1ede260() {
   return (neuron0x1ede940()*-1.15821);
}

double NNfunction_ss_dLsR::synapse0x1edebf0() {
   return (neuron0x1edf310()*-2.94747);
}

double NNfunction_ss_dLsR::synapse0x1edec30() {
   return (neuron0x1edfdf0()*0.280711);
}

double NNfunction_ss_dLsR::synapse0x1edf5c0() {
   return (neuron0x1ee07c0()*-0.012249);
}

double NNfunction_ss_dLsR::synapse0x1edf600() {
   return (neuron0x1edd8a0()*-0.923153);
}

double NNfunction_ss_dLsR::synapse0x1ee00a0() {
   return (neuron0x1ee2370()*-0.562293);
}

double NNfunction_ss_dLsR::synapse0x1ee00e0() {
   return (neuron0x1ee2d40()*-0.268777);
}

double NNfunction_ss_dLsR::synapse0x1ee0a70() {
   return (neuron0x1ee3710()*0.251338);
}

double NNfunction_ss_dLsR::synapse0x1ee0ab0() {
   return (neuron0x1ee40e0()*-0.247174);
}

double NNfunction_ss_dLsR::synapse0x1eddb50() {
   return (neuron0x1ee5ef0()*0.354305);
}

double NNfunction_ss_dLsR::synapse0x1eddb90() {
   return (neuron0x1ee61d0()*-2.67615);
}

double NNfunction_ss_dLsR::synapse0x1ee2620() {
   return (neuron0x1ee6ba0()*0.79411);
}

double NNfunction_ss_dLsR::synapse0x1ee2660() {
   return (neuron0x1ee7570()*1.00724);
}

double NNfunction_ss_dLsR::synapse0x1ee2ff0() {
   return (neuron0x1ee7f40()*-0.493243);
}

double NNfunction_ss_dLsR::synapse0x1ee3030() {
   return (neuron0x1ee8910()*0.438379);
}

double NNfunction_ss_dLsR::synapse0x1ee39c0() {
   return (neuron0x1ee1460()*0.458915);
}

double NNfunction_ss_dLsR::synapse0x1ee3a00() {
   return (neuron0x1ee1e30()*-0.883074);
}

double NNfunction_ss_dLsR::synapse0x1ee4390() {
   return (neuron0x1eeb6a0()*-0.281794);
}

double NNfunction_ss_dLsR::synapse0x1ee43d0() {
   return (neuron0x1eec070()*0.261298);
}

double NNfunction_ss_dLsR::synapse0x1ed8500() {
   return (neuron0x1eeca40()*1.86554);
}

double NNfunction_ss_dLsR::synapse0x1ed8540() {
   return (neuron0x1eed410()*-0.138838);
}

double NNfunction_ss_dLsR::synapse0x1ee6480() {
   return (neuron0x1eedde0()*0.111743);
}

double NNfunction_ss_dLsR::synapse0x1ee64c0() {
   return (neuron0x1eee7b0()*-0.275484);
}

double NNfunction_ss_dLsR::synapse0x1ee6e50() {
   return (neuron0x1eef180()*6.59892);
}

double NNfunction_ss_dLsR::synapse0x1ee6e90() {
   return (neuron0x1eefb50()*-0.877413);
}

double NNfunction_ss_dLsR::synapse0x1ee7820() {
   return (neuron0x1ee5be0()*1.35828);
}

double NNfunction_ss_dLsR::synapse0x1ee7860() {
   return (neuron0x1ef2730()*-2.29413);
}

double NNfunction_ss_dLsR::synapse0x1ee81f0() {
   return (neuron0x1ef3100()*0.749434);
}

double NNfunction_ss_dLsR::synapse0x1ee8230() {
   return (neuron0x1ef3ad0()*2.48039);
}

double NNfunction_ss_dLsR::synapse0x1ee8bc0() {
   return (neuron0x1ef44a0()*0.761803);
}

double NNfunction_ss_dLsR::synapse0x1ee8c00() {
   return (neuron0x1ef4e70()*-0.738107);
}

double NNfunction_ss_dLsR::synapse0x1ee1710() {
   return (neuron0x1ef5840()*-1.93731);
}

double NNfunction_ss_dLsR::synapse0x1ee1750() {
   return (neuron0x1ef6210()*5.37102);
}

double NNfunction_ss_dLsR::synapse0x1eeafc0() {
   return (neuron0x1ef6be0()*0.0620733);
}

double NNfunction_ss_dLsR::synapse0x1eeb000() {
   return (neuron0x1ef77c0()*0.561665);
}

double NNfunction_ss_dLsR::synapse0x1eeb950() {
   return (neuron0x1ef8190()*0.807998);
}

double NNfunction_ss_dLsR::synapse0x1eeb990() {
   return (neuron0x1ee9010()*-0.707502);
}

double NNfunction_ss_dLsR::synapse0x1eec320() {
   return (neuron0x1ee99e0()*-1.97658);
}

double NNfunction_ss_dLsR::synapse0x1eec360() {
   return (neuron0x1eea3b0()*-0.720154);
}

double NNfunction_ss_dLsR::synapse0x1eeccf0() {
   return (neuron0x1efc9f0()*1.20292);
}

double NNfunction_ss_dLsR::synapse0x1eecd30() {
   return (neuron0x1efd2a0()*0.291712);
}

double NNfunction_ss_dLsR::synapse0x1eed6c0() {
   return (neuron0x1efdc70()*0.128351);
}

double NNfunction_ss_dLsR::synapse0x1eed700() {
   return (neuron0x1efe640()*0.0890768);
}

double NNfunction_ss_dLsR::synapse0x1eefe00() {
   return (neuron0x1eda5c0()*-0.205565);
}

double NNfunction_ss_dLsR::synapse0x1eefe40() {
   return (neuron0x1edaed0()*-0.640799);
}

double NNfunction_ss_dLsR::synapse0x1ee53c0() {
   return (neuron0x1edb9b0()*-1.49782);
}

double NNfunction_ss_dLsR::synapse0x1ee5400() {
   return (neuron0x1c95240()*2.50342);
}

double NNfunction_ss_dLsR::synapse0x1ef29e0() {
   return (neuron0x1edc7d0()*0.335601);
}

double NNfunction_ss_dLsR::synapse0x1ef2a20() {
   return (neuron0x1edd1a0()*-0.0567746);
}

double NNfunction_ss_dLsR::synapse0x1ef33b0() {
   return (neuron0x1eddf70()*0.0904925);
}

double NNfunction_ss_dLsR::synapse0x1ef33f0() {
   return (neuron0x1ede940()*0.138703);
}

double NNfunction_ss_dLsR::synapse0x1ef3d80() {
   return (neuron0x1edf310()*-0.423703);
}

double NNfunction_ss_dLsR::synapse0x1ef3dc0() {
   return (neuron0x1edfdf0()*0.192406);
}

double NNfunction_ss_dLsR::synapse0x1ef4750() {
   return (neuron0x1ee07c0()*-0.370529);
}

double NNfunction_ss_dLsR::synapse0x1ef4790() {
   return (neuron0x1edd8a0()*-0.222067);
}

double NNfunction_ss_dLsR::synapse0x1ef5120() {
   return (neuron0x1ee2370()*-0.460895);
}

double NNfunction_ss_dLsR::synapse0x1ef5160() {
   return (neuron0x1ee2d40()*-0.217993);
}

double NNfunction_ss_dLsR::synapse0x1ef5af0() {
   return (neuron0x1ee3710()*0.136524);
}

double NNfunction_ss_dLsR::synapse0x1ef5b30() {
   return (neuron0x1ee40e0()*-0.321497);
}

double NNfunction_ss_dLsR::synapse0x1ef64c0() {
   return (neuron0x1ee5ef0()*-0.00792907);
}

double NNfunction_ss_dLsR::synapse0x1ef6500() {
   return (neuron0x1ee61d0()*-1.22813);
}

double NNfunction_ss_dLsR::synapse0x1ef6e90() {
   return (neuron0x1ee6ba0()*0.574607);
}

double NNfunction_ss_dLsR::synapse0x1ef6ed0() {
   return (neuron0x1ee7570()*-1.60274);
}

double NNfunction_ss_dLsR::synapse0x1ef7a70() {
   return (neuron0x1ee7f40()*-0.0946227);
}

double NNfunction_ss_dLsR::synapse0x1ef7ab0() {
   return (neuron0x1ee8910()*0.124516);
}

double NNfunction_ss_dLsR::synapse0x1ef8440() {
   return (neuron0x1ee1460()*0.975547);
}

double NNfunction_ss_dLsR::synapse0x1ef8480() {
   return (neuron0x1ee1e30()*-0.481519);
}

double NNfunction_ss_dLsR::synapse0x1ee92c0() {
   return (neuron0x1eeb6a0()*-0.0148103);
}

double NNfunction_ss_dLsR::synapse0x1ee9300() {
   return (neuron0x1eec070()*0.217628);
}

double NNfunction_ss_dLsR::synapse0x1ee9c90() {
   return (neuron0x1eeca40()*0.802086);
}

double NNfunction_ss_dLsR::synapse0x1ee9cd0() {
   return (neuron0x1eed410()*0.0453508);
}

double NNfunction_ss_dLsR::synapse0x1eea660() {
   return (neuron0x1eedde0()*0.464418);
}

double NNfunction_ss_dLsR::synapse0x1eea6a0() {
   return (neuron0x1eee7b0()*-0.0552283);
}

double NNfunction_ss_dLsR::synapse0x1efcb80() {
   return (neuron0x1eef180()*4.6372);
}

double NNfunction_ss_dLsR::synapse0x1efcbc0() {
   return (neuron0x1eefb50()*-0.259472);
}

double NNfunction_ss_dLsR::synapse0x1efd550() {
   return (neuron0x1ee5be0()*0.864717);
}

double NNfunction_ss_dLsR::synapse0x1efd590() {
   return (neuron0x1ef2730()*-0.910511);
}

double NNfunction_ss_dLsR::synapse0x1efdf20() {
   return (neuron0x1ef3100()*0.926805);
}

double NNfunction_ss_dLsR::synapse0x1efdf60() {
   return (neuron0x1ef3ad0()*1.67219);
}

double NNfunction_ss_dLsR::synapse0x1efe8f0() {
   return (neuron0x1ef44a0()*-0.0293808);
}

double NNfunction_ss_dLsR::synapse0x1efe930() {
   return (neuron0x1ef4e70()*-0.1449);
}

double NNfunction_ss_dLsR::synapse0x1eda7e0() {
   return (neuron0x1ef5840()*0.223586);
}

double NNfunction_ss_dLsR::synapse0x1eda820() {
   return (neuron0x1ef6210()*-0.292348);
}

double NNfunction_ss_dLsR::synapse0x1eee090() {
   return (neuron0x1ef6be0()*-1.4928);
}

double NNfunction_ss_dLsR::synapse0x1eee0d0() {
   return (neuron0x1ef77c0()*0.0852827);
}

double NNfunction_ss_dLsR::synapse0x1eff010() {
   return (neuron0x1ef8190()*0.527917);
}

double NNfunction_ss_dLsR::synapse0x1eff050() {
   return (neuron0x1ee9010()*-2.60227);
}

double NNfunction_ss_dLsR::synapse0x1eff090() {
   return (neuron0x1ee99e0()*0.149724);
}

double NNfunction_ss_dLsR::synapse0x1eff0d0() {
   return (neuron0x1eea3b0()*0.0653718);
}

double NNfunction_ss_dLsR::synapse0x1f05f80() {
   return (neuron0x1efc9f0()*-3.7376);
}

double NNfunction_ss_dLsR::synapse0x1f05fc0() {
   return (neuron0x1efd2a0()*0.0540482);
}

double NNfunction_ss_dLsR::synapse0x1f06000() {
   return (neuron0x1efdc70()*0.20138);
}

double NNfunction_ss_dLsR::synapse0x1f06040() {
   return (neuron0x1efe640()*0.088889);
}

double NNfunction_ss_dLsR::synapse0x1f063c0() {
   return (neuron0x1eda5c0()*-0.242148);
}

double NNfunction_ss_dLsR::synapse0x1f06400() {
   return (neuron0x1edaed0()*-0.858308);
}

double NNfunction_ss_dLsR::synapse0x1f06440() {
   return (neuron0x1edb9b0()*-0.511746);
}

double NNfunction_ss_dLsR::synapse0x1f06480() {
   return (neuron0x1c95240()*-0.152913);
}

double NNfunction_ss_dLsR::synapse0x1f064c0() {
   return (neuron0x1edc7d0()*-0.127781);
}

double NNfunction_ss_dLsR::synapse0x1f06500() {
   return (neuron0x1edd1a0()*0.00774019);
}

double NNfunction_ss_dLsR::synapse0x1f06540() {
   return (neuron0x1eddf70()*-0.0262076);
}

double NNfunction_ss_dLsR::synapse0x1f06580() {
   return (neuron0x1ede940()*-1.08893);
}

double NNfunction_ss_dLsR::synapse0x1f065c0() {
   return (neuron0x1edf310()*-1.00244);
}

double NNfunction_ss_dLsR::synapse0x1f06600() {
   return (neuron0x1edfdf0()*0.159146);
}

double NNfunction_ss_dLsR::synapse0x1f06640() {
   return (neuron0x1ee07c0()*-0.273219);
}

double NNfunction_ss_dLsR::synapse0x1f06680() {
   return (neuron0x1edd8a0()*-0.265869);
}

double NNfunction_ss_dLsR::synapse0x1f066c0() {
   return (neuron0x1ee2370()*0.298252);
}

double NNfunction_ss_dLsR::synapse0x1f06700() {
   return (neuron0x1ee2d40()*-0.099665);
}

double NNfunction_ss_dLsR::synapse0x1f06740() {
   return (neuron0x1ee3710()*-0.109517);
}

double NNfunction_ss_dLsR::synapse0x1f06780() {
   return (neuron0x1ee40e0()*-0.244891);
}

double NNfunction_ss_dLsR::synapse0x1f06210() {
   return (neuron0x1ee5ef0()*-0.0705693);
}

double NNfunction_ss_dLsR::synapse0x1f06250() {
   return (neuron0x1ee61d0()*-1.42776);
}

double NNfunction_ss_dLsR::synapse0x1f068d0() {
   return (neuron0x1ee6ba0()*-0.184453);
}

double NNfunction_ss_dLsR::synapse0x1f06910() {
   return (neuron0x1ee7570()*-0.648323);
}

double NNfunction_ss_dLsR::synapse0x1f06950() {
   return (neuron0x1ee7f40()*-0.0331791);
}

double NNfunction_ss_dLsR::synapse0x1f06990() {
   return (neuron0x1ee8910()*0.00973965);
}

double NNfunction_ss_dLsR::synapse0x1f069d0() {
   return (neuron0x1ee1460()*-0.119465);
}

double NNfunction_ss_dLsR::synapse0x1f06a10() {
   return (neuron0x1ee1e30()*0.680588);
}

double NNfunction_ss_dLsR::synapse0x1f06a50() {
   return (neuron0x1eeb6a0()*0.0075655);
}

double NNfunction_ss_dLsR::synapse0x1f06a90() {
   return (neuron0x1eec070()*-0.166121);
}

double NNfunction_ss_dLsR::synapse0x1f06ad0() {
   return (neuron0x1eeca40()*-0.075573);
}

double NNfunction_ss_dLsR::synapse0x1f06b10() {
   return (neuron0x1eed410()*0.0358055);
}

double NNfunction_ss_dLsR::synapse0x1f06b50() {
   return (neuron0x1eedde0()*-0.502862);
}

double NNfunction_ss_dLsR::synapse0x1f06b90() {
   return (neuron0x1eee7b0()*-0.0680018);
}

double NNfunction_ss_dLsR::synapse0x1f06bd0() {
   return (neuron0x1eef180()*0.305648);
}

double NNfunction_ss_dLsR::synapse0x1f06c10() {
   return (neuron0x1eefb50()*-0.198824);
}

double NNfunction_ss_dLsR::synapse0x1f067c0() {
   return (neuron0x1ee5be0()*0.213916);
}

double NNfunction_ss_dLsR::synapse0x1f06800() {
   return (neuron0x1ef2730()*-0.220328);
}

double NNfunction_ss_dLsR::synapse0x1f06840() {
   return (neuron0x1ef3100()*0.517596);
}

double NNfunction_ss_dLsR::synapse0x1f06880() {
   return (neuron0x1ef3ad0()*2.26739);
}

double NNfunction_ss_dLsR::synapse0x1f06e60() {
   return (neuron0x1ef44a0()*-0.0372471);
}

double NNfunction_ss_dLsR::synapse0x1f06ea0() {
   return (neuron0x1ef4e70()*0.116429);
}

double NNfunction_ss_dLsR::synapse0x1f06ee0() {
   return (neuron0x1ef5840()*0.452186);
}

double NNfunction_ss_dLsR::synapse0x1f06f20() {
   return (neuron0x1ef6210()*-0.731824);
}

double NNfunction_ss_dLsR::synapse0x1f06f60() {
   return (neuron0x1ef6be0()*0.668951);
}

double NNfunction_ss_dLsR::synapse0x1f06fa0() {
   return (neuron0x1ef77c0()*-0.0256526);
}

double NNfunction_ss_dLsR::synapse0x1f06fe0() {
   return (neuron0x1ef8190()*-0.158672);
}

double NNfunction_ss_dLsR::synapse0x1f07020() {
   return (neuron0x1ee9010()*-1.69832);
}

double NNfunction_ss_dLsR::synapse0x1f07060() {
   return (neuron0x1ee99e0()*0.410632);
}

double NNfunction_ss_dLsR::synapse0x1f070a0() {
   return (neuron0x1eea3b0()*-0.218706);
}

double NNfunction_ss_dLsR::synapse0x1f070e0() {
   return (neuron0x1efc9f0()*-0.169256);
}

double NNfunction_ss_dLsR::synapse0x1f07120() {
   return (neuron0x1efd2a0()*0.305816);
}

double NNfunction_ss_dLsR::synapse0x1f07160() {
   return (neuron0x1efdc70()*-0.398324);
}

double NNfunction_ss_dLsR::synapse0x1f071a0() {
   return (neuron0x1efe640()*-0.102294);
}

double NNfunction_ss_dLsR::synapse0x1f07520() {
   return (neuron0x1eda5c0()*0.0606815);
}

double NNfunction_ss_dLsR::synapse0x1f07560() {
   return (neuron0x1edaed0()*0.0891646);
}

double NNfunction_ss_dLsR::synapse0x1f075a0() {
   return (neuron0x1edb9b0()*0.527372);
}

double NNfunction_ss_dLsR::synapse0x1f075e0() {
   return (neuron0x1c95240()*1.07055);
}

double NNfunction_ss_dLsR::synapse0x1f07620() {
   return (neuron0x1edc7d0()*-0.133745);
}

double NNfunction_ss_dLsR::synapse0x1f07660() {
   return (neuron0x1edd1a0()*0.0104803);
}

double NNfunction_ss_dLsR::synapse0x1f076a0() {
   return (neuron0x1eddf70()*-0.00231894);
}

double NNfunction_ss_dLsR::synapse0x1f076e0() {
   return (neuron0x1ede940()*0.0349148);
}

double NNfunction_ss_dLsR::synapse0x1f07720() {
   return (neuron0x1edf310()*-0.035899);
}

double NNfunction_ss_dLsR::synapse0x1f07760() {
   return (neuron0x1edfdf0()*-0.033896);
}

double NNfunction_ss_dLsR::synapse0x1f077a0() {
   return (neuron0x1ee07c0()*-0.0511958);
}

double NNfunction_ss_dLsR::synapse0x1f077e0() {
   return (neuron0x1edd8a0()*-0.0630803);
}

double NNfunction_ss_dLsR::synapse0x1f07820() {
   return (neuron0x1ee2370()*0.0512428);
}

double NNfunction_ss_dLsR::synapse0x1f07860() {
   return (neuron0x1ee2d40()*0.0423406);
}

double NNfunction_ss_dLsR::synapse0x1f078a0() {
   return (neuron0x1ee3710()*-0.0304164);
}

double NNfunction_ss_dLsR::synapse0x1f078e0() {
   return (neuron0x1ee40e0()*0.0547375);
}

double NNfunction_ss_dLsR::synapse0x1f07370() {
   return (neuron0x1ee5ef0()*-0.00272795);
}

double NNfunction_ss_dLsR::synapse0x1f073b0() {
   return (neuron0x1ee61d0()*-0.448668);
}

double NNfunction_ss_dLsR::synapse0x1f07a30() {
   return (neuron0x1ee6ba0()*-0.0814907);
}

double NNfunction_ss_dLsR::synapse0x1f07a70() {
   return (neuron0x1ee7570()*0.356868);
}

double NNfunction_ss_dLsR::synapse0x1f07ab0() {
   return (neuron0x1ee7f40()*0.0111057);
}

double NNfunction_ss_dLsR::synapse0x1f07af0() {
   return (neuron0x1ee8910()*-0.0219833);
}

double NNfunction_ss_dLsR::synapse0x1f07b30() {
   return (neuron0x1ee1460()*-0.158609);
}

double NNfunction_ss_dLsR::synapse0x1f07b70() {
   return (neuron0x1ee1e30()*0.0851398);
}

double NNfunction_ss_dLsR::synapse0x1f07bb0() {
   return (neuron0x1eeb6a0()*0.0157167);
}

double NNfunction_ss_dLsR::synapse0x1f07bf0() {
   return (neuron0x1eec070()*-0.0274097);
}

double NNfunction_ss_dLsR::synapse0x1f07c30() {
   return (neuron0x1eeca40()*-0.18376);
}

double NNfunction_ss_dLsR::synapse0x1f07c70() {
   return (neuron0x1eed410()*-0.00254565);
}

double NNfunction_ss_dLsR::synapse0x1f07cb0() {
   return (neuron0x1eedde0()*-0.0212);
}

double NNfunction_ss_dLsR::synapse0x1f07cf0() {
   return (neuron0x1eee7b0()*0.008745);
}

double NNfunction_ss_dLsR::synapse0x1f07d30() {
   return (neuron0x1eef180()*1.20683);
}

double NNfunction_ss_dLsR::synapse0x1f07d70() {
   return (neuron0x1eefb50()*0.0864803);
}

double NNfunction_ss_dLsR::synapse0x1f07920() {
   return (neuron0x1ee5be0()*-0.185036);
}

double NNfunction_ss_dLsR::synapse0x1f07960() {
   return (neuron0x1ef2730()*0.226868);
}

double NNfunction_ss_dLsR::synapse0x1f079a0() {
   return (neuron0x1ef3100()*0.496124);
}

double NNfunction_ss_dLsR::synapse0x1f079e0() {
   return (neuron0x1ef3ad0()*0.062768);
}

double NNfunction_ss_dLsR::synapse0x1f07fc0() {
   return (neuron0x1ef44a0()*-0.00363653);
}

double NNfunction_ss_dLsR::synapse0x1f08000() {
   return (neuron0x1ef4e70()*0.0263733);
}

double NNfunction_ss_dLsR::synapse0x1f08040() {
   return (neuron0x1ef5840()*0.00494939);
}

double NNfunction_ss_dLsR::synapse0x1f08080() {
   return (neuron0x1ef6210()*1.78044);
}

double NNfunction_ss_dLsR::synapse0x1f080c0() {
   return (neuron0x1ef6be0()*0.122905);
}

double NNfunction_ss_dLsR::synapse0x1f08100() {
   return (neuron0x1ef77c0()*0.0842791);
}

double NNfunction_ss_dLsR::synapse0x1f08140() {
   return (neuron0x1ef8190()*-0.077048);
}

double NNfunction_ss_dLsR::synapse0x1f08180() {
   return (neuron0x1ee9010()*-0.967409);
}

double NNfunction_ss_dLsR::synapse0x1f081c0() {
   return (neuron0x1ee99e0()*-1.66268);
}

double NNfunction_ss_dLsR::synapse0x1f08200() {
   return (neuron0x1eea3b0()*0.0286017);
}

double NNfunction_ss_dLsR::synapse0x1f08240() {
   return (neuron0x1efc9f0()*-1.89578);
}

double NNfunction_ss_dLsR::synapse0x1f08280() {
   return (neuron0x1efd2a0()*-0.028046);
}

double NNfunction_ss_dLsR::synapse0x1f082c0() {
   return (neuron0x1efdc70()*-0.0209883);
}

double NNfunction_ss_dLsR::synapse0x1f08300() {
   return (neuron0x1efe640()*-0.00882445);
}

double NNfunction_ss_dLsR::synapse0x1f08680() {
   return (neuron0x1eda5c0()*2.14172);
}

double NNfunction_ss_dLsR::synapse0x1f086c0() {
   return (neuron0x1edaed0()*3.15439);
}

double NNfunction_ss_dLsR::synapse0x1f08700() {
   return (neuron0x1edb9b0()*0.784862);
}

double NNfunction_ss_dLsR::synapse0x1f08740() {
   return (neuron0x1c95240()*-3.28826);
}

double NNfunction_ss_dLsR::synapse0x1f08780() {
   return (neuron0x1edc7d0()*0.33746);
}

double NNfunction_ss_dLsR::synapse0x1f087c0() {
   return (neuron0x1edd1a0()*1.69325);
}

double NNfunction_ss_dLsR::synapse0x1f08800() {
   return (neuron0x1eddf70()*-1.96255);
}

double NNfunction_ss_dLsR::synapse0x1f08840() {
   return (neuron0x1ede940()*-1.28089);
}

double NNfunction_ss_dLsR::synapse0x1f08880() {
   return (neuron0x1edf310()*0.370987);
}

double NNfunction_ss_dLsR::synapse0x1f088c0() {
   return (neuron0x1edfdf0()*-1.44068);
}

double NNfunction_ss_dLsR::synapse0x1f08900() {
   return (neuron0x1ee07c0()*3.20635);
}

double NNfunction_ss_dLsR::synapse0x1f08940() {
   return (neuron0x1edd8a0()*-0.801568);
}

double NNfunction_ss_dLsR::synapse0x1f08980() {
   return (neuron0x1ee2370()*-1.62063);
}

double NNfunction_ss_dLsR::synapse0x1f089c0() {
   return (neuron0x1ee2d40()*-1.07341);
}

double NNfunction_ss_dLsR::synapse0x1f08a00() {
   return (neuron0x1ee3710()*1.71865);
}

double NNfunction_ss_dLsR::synapse0x1f08a40() {
   return (neuron0x1ee40e0()*-1.23242);
}

double NNfunction_ss_dLsR::synapse0x1f084d0() {
   return (neuron0x1ee5ef0()*-1.92761);
}

double NNfunction_ss_dLsR::synapse0x1f08510() {
   return (neuron0x1ee61d0()*0.911361);
}

double NNfunction_ss_dLsR::synapse0x1f08b90() {
   return (neuron0x1ee6ba0()*-0.487988);
}

double NNfunction_ss_dLsR::synapse0x1f08bd0() {
   return (neuron0x1ee7570()*-1.45501);
}

double NNfunction_ss_dLsR::synapse0x1f08c10() {
   return (neuron0x1ee7f40()*1.94941);
}

double NNfunction_ss_dLsR::synapse0x1f08c50() {
   return (neuron0x1ee8910()*-1.51555);
}

double NNfunction_ss_dLsR::synapse0x1f08c90() {
   return (neuron0x1ee1460()*2.77598);
}

double NNfunction_ss_dLsR::synapse0x1f08cd0() {
   return (neuron0x1ee1e30()*-2.69913);
}

double NNfunction_ss_dLsR::synapse0x1f08d10() {
   return (neuron0x1eeb6a0()*-1.83928);
}

double NNfunction_ss_dLsR::synapse0x1f08d50() {
   return (neuron0x1eec070()*1.50446);
}

double NNfunction_ss_dLsR::synapse0x1f08d90() {
   return (neuron0x1eeca40()*0.045007);
}

double NNfunction_ss_dLsR::synapse0x1f08dd0() {
   return (neuron0x1eed410()*-1.74235);
}

double NNfunction_ss_dLsR::synapse0x1f08e10() {
   return (neuron0x1eedde0()*2.76154);
}

double NNfunction_ss_dLsR::synapse0x1f08e50() {
   return (neuron0x1eee7b0()*1.82839);
}

double NNfunction_ss_dLsR::synapse0x1f08e90() {
   return (neuron0x1eef180()*8.96136);
}

double NNfunction_ss_dLsR::synapse0x1f08ed0() {
   return (neuron0x1eefb50()*-2.41342);
}

double NNfunction_ss_dLsR::synapse0x1f08a80() {
   return (neuron0x1ee5be0()*-0.00916984);
}

double NNfunction_ss_dLsR::synapse0x1f08ac0() {
   return (neuron0x1ef2730()*-0.547023);
}

double NNfunction_ss_dLsR::synapse0x1f08b00() {
   return (neuron0x1ef3100()*-2.89423);
}

double NNfunction_ss_dLsR::synapse0x1f08b40() {
   return (neuron0x1ef3ad0()*8.23221);
}

double NNfunction_ss_dLsR::synapse0x1f09120() {
   return (neuron0x1ef44a0()*-3.62913);
}

double NNfunction_ss_dLsR::synapse0x1f09160() {
   return (neuron0x1ef4e70()*-1.0417);
}

double NNfunction_ss_dLsR::synapse0x1f091a0() {
   return (neuron0x1ef5840()*0.598582);
}

double NNfunction_ss_dLsR::synapse0x1f091e0() {
   return (neuron0x1ef6210()*-0.980574);
}

double NNfunction_ss_dLsR::synapse0x1f09220() {
   return (neuron0x1ef6be0()*3.28115);
}

double NNfunction_ss_dLsR::synapse0x1f09260() {
   return (neuron0x1ef77c0()*1.82932);
}

double NNfunction_ss_dLsR::synapse0x1f092a0() {
   return (neuron0x1ef8190()*-0.874744);
}

double NNfunction_ss_dLsR::synapse0x1f092e0() {
   return (neuron0x1ee9010()*-4.45405);
}

double NNfunction_ss_dLsR::synapse0x1f09320() {
   return (neuron0x1ee99e0()*-0.428789);
}

double NNfunction_ss_dLsR::synapse0x1f09360() {
   return (neuron0x1eea3b0()*2.67914);
}

double NNfunction_ss_dLsR::synapse0x1f093a0() {
   return (neuron0x1efc9f0()*-2.25146);
}

double NNfunction_ss_dLsR::synapse0x1f093e0() {
   return (neuron0x1efd2a0()*-2.49014);
}

double NNfunction_ss_dLsR::synapse0x1f09420() {
   return (neuron0x1efdc70()*1.3243);
}

double NNfunction_ss_dLsR::synapse0x1f09460() {
   return (neuron0x1efe640()*1.61367);
}

double NNfunction_ss_dLsR::synapse0x1eda580() {
   return (neuron0x1f05840()*-6.70228);
}

double NNfunction_ss_dLsR::synapse0x1f096c0() {
   return (neuron0x1f05be0()*-7.58141);
}

double NNfunction_ss_dLsR::synapse0x1f09700() {
   return (neuron0x1f06080()*-2.99052);
}

double NNfunction_ss_dLsR::synapse0x1f09740() {
   return (neuron0x1f071e0()*-7.2222);
}

double NNfunction_ss_dLsR::synapse0x1f09780() {
   return (neuron0x1f08340()*-5.94514);
}

