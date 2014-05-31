#include "NNfunction_sb_sLdR.h"
#include <cmath>

double NNfunction_sb_sLdR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.6134)/15.3505;
   input1 = (in1 - 0.495677)/1153.09;
   input2 = (in2 - 667.31)/625.34;
   input3 = (in3 - -54.1151)/827.364;
   input4 = (in4 - 1048.17)/947.065;
   input5 = (in5 - 886.076)/935.673;
   input6 = (in6 - 893.637)/934.772;
   input7 = (in7 - 923.856)/927.69;
   input8 = (in8 - 928.025)/982.022;
   input9 = (in9 - 900.91)/959.771;
   input10 = (in10 - 994.34)/962.024;
   input11 = (in11 - 731.644)/882.805;
   input12 = (in12 - 398.855)/416.912;
   input13 = (in13 - 499.903)/519.137;
   input14 = (in14 - 706.914)/805.133;
   input15 = (in15 - 705.815)/804.521;
   input16 = (in16 - 529.713)/555.949;
   input17 = (in17 - 403.285)/420.936;
   input18 = (in18 - 761.222)/915.769;
   input19 = (in19 - 806.706)/886.343;
   input20 = (in20 - -4.32812)/485.543;
   input21 = (in21 - -2.46106)/1155.79;
   input22 = (in22 - -3.3102)/1207.07;
   input23 = (in23 - -201.142)/608.372;
   switch(index) {
     case 0:
         return neuron0x1aaf4a0();
     default:
         return 0.;
   }
}

double NNfunction_sb_sLdR::Value(int index, double* input) {
   input0 = (input[0] - 23.6134)/15.3505;
   input1 = (input[1] - 0.495677)/1153.09;
   input2 = (input[2] - 667.31)/625.34;
   input3 = (input[3] - -54.1151)/827.364;
   input4 = (input[4] - 1048.17)/947.065;
   input5 = (input[5] - 886.076)/935.673;
   input6 = (input[6] - 893.637)/934.772;
   input7 = (input[7] - 923.856)/927.69;
   input8 = (input[8] - 928.025)/982.022;
   input9 = (input[9] - 900.91)/959.771;
   input10 = (input[10] - 994.34)/962.024;
   input11 = (input[11] - 731.644)/882.805;
   input12 = (input[12] - 398.855)/416.912;
   input13 = (input[13] - 499.903)/519.137;
   input14 = (input[14] - 706.914)/805.133;
   input15 = (input[15] - 705.815)/804.521;
   input16 = (input[16] - 529.713)/555.949;
   input17 = (input[17] - 403.285)/420.936;
   input18 = (input[18] - 761.222)/915.769;
   input19 = (input[19] - 806.706)/886.343;
   input20 = (input[20] - -4.32812)/485.543;
   input21 = (input[21] - -2.46106)/1155.79;
   input22 = (input[22] - -3.3102)/1207.07;
   input23 = (input[23] - -201.142)/608.372;
   switch(index) {
     case 0:
         return neuron0x1aaf4a0();
     default:
         return 0.;
   }
}

double NNfunction_sb_sLdR::neuron0x1a7b560() {
   return input0;
}

double NNfunction_sb_sLdR::neuron0x1a7b8a0() {
   return input1;
}

double NNfunction_sb_sLdR::neuron0x1a7bbe0() {
   return input2;
}

double NNfunction_sb_sLdR::neuron0x1a7bf20() {
   return input3;
}

double NNfunction_sb_sLdR::neuron0x1a7c260() {
   return input4;
}

double NNfunction_sb_sLdR::neuron0x1a7c5a0() {
   return input5;
}

double NNfunction_sb_sLdR::neuron0x1a7c8e0() {
   return input6;
}

double NNfunction_sb_sLdR::neuron0x1a7cc20() {
   return input7;
}

double NNfunction_sb_sLdR::neuron0x1a7cf60() {
   return input8;
}

double NNfunction_sb_sLdR::neuron0x1a7d2a0() {
   return input9;
}

double NNfunction_sb_sLdR::neuron0x1a7d5e0() {
   return input10;
}

double NNfunction_sb_sLdR::neuron0x1a7d920() {
   return input11;
}

double NNfunction_sb_sLdR::neuron0x1a7dc60() {
   return input12;
}

double NNfunction_sb_sLdR::neuron0x1a7dfa0() {
   return input13;
}

double NNfunction_sb_sLdR::neuron0x1a7e2e0() {
   return input14;
}

double NNfunction_sb_sLdR::neuron0x1a7e620() {
   return input15;
}

double NNfunction_sb_sLdR::neuron0x1a7e960() {
   return input16;
}

double NNfunction_sb_sLdR::neuron0x1a7eec0() {
   return input17;
}

double NNfunction_sb_sLdR::neuron0x1a7f0e0() {
   return input18;
}

double NNfunction_sb_sLdR::neuron0x1a7f420() {
   return input19;
}

double NNfunction_sb_sLdR::neuron0x1a7f760() {
   return input20;
}

double NNfunction_sb_sLdR::neuron0x1a7faa0() {
   return input21;
}

double NNfunction_sb_sLdR::neuron0x1a7fde0() {
   return input22;
}

double NNfunction_sb_sLdR::neuron0x1a80120() {
   return input23;
}

double NNfunction_sb_sLdR::input0x1a805c0() {
   double input = 0.760646;
   input += synapse0x183b3d0();
   input += synapse0x1a7b420();
   input += synapse0x1a7b460();
   input += synapse0x1a80870();
   input += synapse0x1a808b0();
   input += synapse0x1a808f0();
   input += synapse0x1a80930();
   input += synapse0x1a80970();
   input += synapse0x1a809b0();
   input += synapse0x1a809f0();
   input += synapse0x1a80a30();
   input += synapse0x1a80a70();
   input += synapse0x1a80ab0();
   input += synapse0x1a80af0();
   input += synapse0x1a80b30();
   input += synapse0x1a80b70();
   input += synapse0x1a7b390();
   input += synapse0x1a7b3d0();
   input += synapse0x182cc70();
   input += synapse0x182ccb0();
   input += synapse0x1a80dd0();
   input += synapse0x1a80e10();
   input += synapse0x1a80e50();
   input += synapse0x1a80e90();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a805c0() {
   double input = input0x1a805c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a80ed0() {
   double input = -0.810844;
   input += synapse0x1a81210();
   input += synapse0x1a81250();
   input += synapse0x1a81290();
   input += synapse0x1a812d0();
   input += synapse0x1a81310();
   input += synapse0x1a81350();
   input += synapse0x1a81390();
   input += synapse0x1a813d0();
   input += synapse0x1a81410();
   input += synapse0x1a80cc0();
   input += synapse0x1a80d00();
   input += synapse0x1a80d40();
   input += synapse0x1a80d80();
   input += synapse0x1a81660();
   input += synapse0x1a816a0();
   input += synapse0x1a816e0();
   input += synapse0x1a81060();
   input += synapse0x1a810a0();
   input += synapse0x1a81830();
   input += synapse0x1a81870();
   input += synapse0x1a818b0();
   input += synapse0x1a818f0();
   input += synapse0x1a81930();
   input += synapse0x1a81970();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a80ed0() {
   double input = input0x1a80ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a819b0() {
   double input = 1.12639;
   input += synapse0x1a81cf0();
   input += synapse0x1a81d30();
   input += synapse0x1a81d70();
   input += synapse0x1a81db0();
   input += synapse0x1a81df0();
   input += synapse0x1a81e30();
   input += synapse0x1a81e70();
   input += synapse0x1a81eb0();
   input += synapse0x1a81ef0();
   input += synapse0x1a81f30();
   input += synapse0x1a81f70();
   input += synapse0x1a81fb0();
   input += synapse0x1a81ff0();
   input += synapse0x1a82030();
   input += synapse0x1a82070();
   input += synapse0x1a820b0();
   input += synapse0x1a81b40();
   input += synapse0x1a81b80();
   input += synapse0x183aac0();
   input += synapse0x183ab00();
   input += synapse0x1a6a5f0();
   input += synapse0x1a6a630();
   input += synapse0x1a6a670();
   input += synapse0x1a7b4a0();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a819b0() {
   double input = input0x1a819b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x183b240() {
   double input = -0.364795;
   input += synapse0x1a81600();
   input += synapse0x1a7b4e0();
   input += synapse0x1a7b520();
   input += synapse0x1a82200();
   input += synapse0x1a82240();
   input += synapse0x1a82280();
   input += synapse0x1a822c0();
   input += synapse0x1a82300();
   input += synapse0x1a82340();
   input += synapse0x1a82380();
   input += synapse0x1a823c0();
   input += synapse0x1a82400();
   input += synapse0x1a82440();
   input += synapse0x1a82480();
   input += synapse0x1a824c0();
   input += synapse0x1a82500();
   input += synapse0x1a81450();
   input += synapse0x1a81490();
   input += synapse0x1a82650();
   input += synapse0x1a82690();
   input += synapse0x1a826d0();
   input += synapse0x1a82710();
   input += synapse0x1a82750();
   input += synapse0x1a82790();
   return input;
}

double NNfunction_sb_sLdR::neuron0x183b240() {
   double input = input0x183b240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a827d0() {
   double input = 0.00405379;
   input += synapse0x1a82b10();
   input += synapse0x1a82b50();
   input += synapse0x1a82b90();
   input += synapse0x1a82bd0();
   input += synapse0x1a82c10();
   input += synapse0x1a82c50();
   input += synapse0x1a82c90();
   input += synapse0x1a82cd0();
   input += synapse0x1a82d10();
   input += synapse0x1a82d50();
   input += synapse0x1a82d90();
   input += synapse0x1a82dd0();
   input += synapse0x1a82e10();
   input += synapse0x1a82e50();
   input += synapse0x1a82e90();
   input += synapse0x1a82ed0();
   input += synapse0x1a82960();
   input += synapse0x1a829a0();
   input += synapse0x1a83020();
   input += synapse0x1a83060();
   input += synapse0x1a830a0();
   input += synapse0x1a830e0();
   input += synapse0x1a83120();
   input += synapse0x1a83160();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a827d0() {
   double input = input0x1a827d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a831a0() {
   double input = -0.0359957;
   input += synapse0x1a834e0();
   input += synapse0x1a83520();
   input += synapse0x1a83560();
   input += synapse0x1a835a0();
   input += synapse0x1a835e0();
   input += synapse0x1a83620();
   input += synapse0x1a83660();
   input += synapse0x1a836a0();
   input += synapse0x1a836e0();
   input += synapse0x183ae30();
   input += synapse0x183ae70();
   input += synapse0x183aeb0();
   input += synapse0x183aef0();
   input += synapse0x183af30();
   input += synapse0x183af70();
   input += synapse0x183afb0();
   input += synapse0x1a83330();
   input += synapse0x1a83370();
   input += synapse0x183b100();
   input += synapse0x183b140();
   input += synapse0x183b180();
   input += synapse0x183b1c0();
   input += synapse0x183b200();
   input += synapse0x1a83f30();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a831a0() {
   double input = input0x1a831a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a83f70() {
   double input = -1.37427;
   input += synapse0x1a842b0();
   input += synapse0x1a842f0();
   input += synapse0x1a84330();
   input += synapse0x1a84370();
   input += synapse0x1a843b0();
   input += synapse0x1a843f0();
   input += synapse0x1a84430();
   input += synapse0x1a84470();
   input += synapse0x1a844b0();
   input += synapse0x1a844f0();
   input += synapse0x1a84530();
   input += synapse0x1a84570();
   input += synapse0x1a845b0();
   input += synapse0x1a845f0();
   input += synapse0x1a84630();
   input += synapse0x1a84670();
   input += synapse0x1a84100();
   input += synapse0x1a84140();
   input += synapse0x1a847c0();
   input += synapse0x1a84800();
   input += synapse0x1a84840();
   input += synapse0x1a84880();
   input += synapse0x1a848c0();
   input += synapse0x1a84900();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a83f70() {
   double input = input0x1a83f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a84940() {
   double input = -1.77526;
   input += synapse0x1a84c80();
   input += synapse0x1a84cc0();
   input += synapse0x1a84d00();
   input += synapse0x1a84d40();
   input += synapse0x1a84d80();
   input += synapse0x1a84dc0();
   input += synapse0x1a84e00();
   input += synapse0x1a84e40();
   input += synapse0x1a84e80();
   input += synapse0x1a84ec0();
   input += synapse0x1a84f00();
   input += synapse0x1a84f40();
   input += synapse0x1a84f80();
   input += synapse0x1a84fc0();
   input += synapse0x1a85000();
   input += synapse0x1a85040();
   input += synapse0x1a84ad0();
   input += synapse0x1a84b10();
   input += synapse0x1a85190();
   input += synapse0x1a851d0();
   input += synapse0x1a85210();
   input += synapse0x1a85250();
   input += synapse0x1a85290();
   input += synapse0x1a852d0();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a84940() {
   double input = input0x1a84940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a85310() {
   double input = 0.487455;
   input += synapse0x1a7edb0();
   input += synapse0x1a7edf0();
   input += synapse0x1a7ee30();
   input += synapse0x1a7ee70();
   input += synapse0x1a85860();
   input += synapse0x1a858a0();
   input += synapse0x1a858e0();
   input += synapse0x1a85920();
   input += synapse0x1a85960();
   input += synapse0x1a859a0();
   input += synapse0x1a859e0();
   input += synapse0x1a85a20();
   input += synapse0x1a85a60();
   input += synapse0x1a85aa0();
   input += synapse0x1a85ae0();
   input += synapse0x1a85b20();
   input += synapse0x1a854a0();
   input += synapse0x1a854e0();
   input += synapse0x1a85c70();
   input += synapse0x1a85cb0();
   input += synapse0x1a85cf0();
   input += synapse0x1a85d30();
   input += synapse0x1a85d70();
   input += synapse0x1a85db0();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a85310() {
   double input = input0x1a85310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a85df0() {
   double input = 0.746411;
   input += synapse0x1a86130();
   input += synapse0x1a86170();
   input += synapse0x1a861b0();
   input += synapse0x1a861f0();
   input += synapse0x1a86230();
   input += synapse0x1a86270();
   input += synapse0x1a862b0();
   input += synapse0x1a862f0();
   input += synapse0x1a86330();
   input += synapse0x1a86370();
   input += synapse0x1a863b0();
   input += synapse0x1a863f0();
   input += synapse0x1a86430();
   input += synapse0x1a86470();
   input += synapse0x1a864b0();
   input += synapse0x1a864f0();
   input += synapse0x1a85f80();
   input += synapse0x1a85fc0();
   input += synapse0x1a86640();
   input += synapse0x1a86680();
   input += synapse0x1a866c0();
   input += synapse0x1a86700();
   input += synapse0x1a86740();
   input += synapse0x1a86780();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a85df0() {
   double input = input0x1a85df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a867c0() {
   double input = -0.389117;
   input += synapse0x1a86b00();
   input += synapse0x1a86b40();
   input += synapse0x1a86b80();
   input += synapse0x1a86bc0();
   input += synapse0x1a86c00();
   input += synapse0x1a86c40();
   input += synapse0x1a86c80();
   input += synapse0x1a86cc0();
   input += synapse0x1a86d00();
   input += synapse0x1a86d40();
   input += synapse0x1a86d80();
   input += synapse0x1a86dc0();
   input += synapse0x1a86e00();
   input += synapse0x1a86e40();
   input += synapse0x1a86e80();
   input += synapse0x1a86ec0();
   input += synapse0x1a86950();
   input += synapse0x1a86990();
   input += synapse0x1a83720();
   input += synapse0x1a83760();
   input += synapse0x1a837a0();
   input += synapse0x1a837e0();
   input += synapse0x1a83820();
   input += synapse0x1a83860();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a867c0() {
   double input = input0x1a867c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a838a0() {
   double input = -0.687678;
   input += synapse0x1a83be0();
   input += synapse0x1a83c20();
   input += synapse0x1a83c60();
   input += synapse0x1a83ca0();
   input += synapse0x1a83ce0();
   input += synapse0x1a83d20();
   input += synapse0x1a83d60();
   input += synapse0x1a83da0();
   input += synapse0x1a83de0();
   input += synapse0x1a83e20();
   input += synapse0x1a83e60();
   input += synapse0x1a83ea0();
   input += synapse0x1a83ee0();
   input += synapse0x1a88020();
   input += synapse0x1a88060();
   input += synapse0x1a880a0();
   input += synapse0x1a83a30();
   input += synapse0x1a83a70();
   input += synapse0x1a881f0();
   input += synapse0x1a88230();
   input += synapse0x1a88270();
   input += synapse0x1a882b0();
   input += synapse0x1a882f0();
   input += synapse0x1a88330();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a838a0() {
   double input = input0x1a838a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a88370() {
   double input = 3.46073;
   input += synapse0x1a886b0();
   input += synapse0x1a886f0();
   input += synapse0x1a88730();
   input += synapse0x1a88770();
   input += synapse0x1a887b0();
   input += synapse0x1a887f0();
   input += synapse0x1a88830();
   input += synapse0x1a88870();
   input += synapse0x1a888b0();
   input += synapse0x1a888f0();
   input += synapse0x1a88930();
   input += synapse0x1a88970();
   input += synapse0x1a889b0();
   input += synapse0x1a889f0();
   input += synapse0x1a88a30();
   input += synapse0x1a88a70();
   input += synapse0x1a88500();
   input += synapse0x1a88540();
   input += synapse0x1a88bc0();
   input += synapse0x1a88c00();
   input += synapse0x1a88c40();
   input += synapse0x1a88c80();
   input += synapse0x1a88cc0();
   input += synapse0x1a88d00();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a88370() {
   double input = input0x1a88370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a88d40() {
   double input = 0.00546879;
   input += synapse0x1a89080();
   input += synapse0x1a890c0();
   input += synapse0x1a89100();
   input += synapse0x1a89140();
   input += synapse0x1a89180();
   input += synapse0x1a891c0();
   input += synapse0x1a89200();
   input += synapse0x1a89240();
   input += synapse0x1a89280();
   input += synapse0x1a892c0();
   input += synapse0x1a89300();
   input += synapse0x1a89340();
   input += synapse0x1a89380();
   input += synapse0x1a893c0();
   input += synapse0x1a89400();
   input += synapse0x1a89440();
   input += synapse0x1a88ed0();
   input += synapse0x1a88f10();
   input += synapse0x1a89590();
   input += synapse0x1a895d0();
   input += synapse0x1a89610();
   input += synapse0x1a89650();
   input += synapse0x1a89690();
   input += synapse0x1a896d0();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a88d40() {
   double input = input0x1a88d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a89710() {
   double input = -0.485676;
   input += synapse0x1a89a50();
   input += synapse0x1a89a90();
   input += synapse0x1a89ad0();
   input += synapse0x1a89b10();
   input += synapse0x1a89b50();
   input += synapse0x1a89b90();
   input += synapse0x1a89bd0();
   input += synapse0x1a89c10();
   input += synapse0x1a89c50();
   input += synapse0x1a89c90();
   input += synapse0x1a89cd0();
   input += synapse0x1a89d10();
   input += synapse0x1a89d50();
   input += synapse0x1a89d90();
   input += synapse0x1a89dd0();
   input += synapse0x1a89e10();
   input += synapse0x1a898a0();
   input += synapse0x1a898e0();
   input += synapse0x1a89f60();
   input += synapse0x1a89fa0();
   input += synapse0x1a89fe0();
   input += synapse0x1a8a020();
   input += synapse0x1a8a060();
   input += synapse0x1a8a0a0();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a89710() {
   double input = input0x1a89710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a8a0e0() {
   double input = -2.80055;
   input += synapse0x1a8a420();
   input += synapse0x1a7b780();
   input += synapse0x1a7b7c0();
   input += synapse0x1a7bac0();
   input += synapse0x1a7bb00();
   input += synapse0x1a7be00();
   input += synapse0x1a7be40();
   input += synapse0x1a7c140();
   input += synapse0x1a7c180();
   input += synapse0x1a7c480();
   input += synapse0x1a7c4c0();
   input += synapse0x1a7c7c0();
   input += synapse0x1a7c800();
   input += synapse0x1a7cb00();
   input += synapse0x1a7cb40();
   input += synapse0x1a7ce40();
   input += synapse0x1a7ce80();
   input += synapse0x1a7d180();
   input += synapse0x1a7d1c0();
   input += synapse0x1a7d4c0();
   input += synapse0x1a7d500();
   input += synapse0x1a7d800();
   input += synapse0x1a7d840();
   input += synapse0x1a7db40();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a8a0e0() {
   double input = input0x1a8a0e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a8bef0() {
   double input = 0.0270721;
   input += synapse0x1a7db80();
   input += synapse0x1a7e840();
   input += synapse0x1a7e880();
   input += synapse0x1a8a270();
   input += synapse0x1a8a2b0();
   input += synapse0x1a7eb80();
   input += synapse0x1a7ebc0();
   input += synapse0x182cb50();
   input += synapse0x182cb90();
   input += synapse0x1a7f300();
   input += synapse0x1a7f340();
   input += synapse0x1a7f640();
   input += synapse0x1a7f680();
   input += synapse0x1a7f980();
   input += synapse0x1a7f9c0();
   input += synapse0x1a7fcc0();
   input += synapse0x1a7fd00();
   input += synapse0x1a80000();
   input += synapse0x1a80040();
   input += synapse0x1a80340();
   input += synapse0x1a80380();
   input += synapse0x1a7de80();
   input += synapse0x1a7dec0();
   input += synapse0x1a8c190();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a8bef0() {
   double input = input0x1a8bef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a8c1d0() {
   double input = -0.510402;
   input += synapse0x1a8c510();
   input += synapse0x1a8c550();
   input += synapse0x1a8c590();
   input += synapse0x1a8c5d0();
   input += synapse0x1a8c610();
   input += synapse0x1a8c650();
   input += synapse0x1a8c690();
   input += synapse0x1a8c6d0();
   input += synapse0x1a8c710();
   input += synapse0x1a8c750();
   input += synapse0x1a8c790();
   input += synapse0x1a8c7d0();
   input += synapse0x1a8c810();
   input += synapse0x1a8c850();
   input += synapse0x1a8c890();
   input += synapse0x1a8c8d0();
   input += synapse0x1a8c360();
   input += synapse0x1a8c3a0();
   input += synapse0x1a8ca20();
   input += synapse0x1a8ca60();
   input += synapse0x1a8caa0();
   input += synapse0x1a8cae0();
   input += synapse0x1a8cb20();
   input += synapse0x1a8cb60();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a8c1d0() {
   double input = input0x1a8c1d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a8cba0() {
   double input = 0.968485;
   input += synapse0x1a8cee0();
   input += synapse0x1a8cf20();
   input += synapse0x1a8cf60();
   input += synapse0x1a8cfa0();
   input += synapse0x1a8cfe0();
   input += synapse0x1a8d020();
   input += synapse0x1a8d060();
   input += synapse0x1a8d0a0();
   input += synapse0x1a8d0e0();
   input += synapse0x1a8d120();
   input += synapse0x1a8d160();
   input += synapse0x1a8d1a0();
   input += synapse0x1a8d1e0();
   input += synapse0x1a8d220();
   input += synapse0x1a8d260();
   input += synapse0x1a8d2a0();
   input += synapse0x1a8cd30();
   input += synapse0x1a8cd70();
   input += synapse0x1a8d3f0();
   input += synapse0x1a8d430();
   input += synapse0x1a8d470();
   input += synapse0x1a8d4b0();
   input += synapse0x1a8d4f0();
   input += synapse0x1a8d530();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a8cba0() {
   double input = input0x1a8cba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a8d570() {
   double input = 1.15523;
   input += synapse0x1a8d8b0();
   input += synapse0x1a8d8f0();
   input += synapse0x1a8d930();
   input += synapse0x1a8d970();
   input += synapse0x1a8d9b0();
   input += synapse0x1a8d9f0();
   input += synapse0x1a8da30();
   input += synapse0x1a8da70();
   input += synapse0x1a8dab0();
   input += synapse0x1a8daf0();
   input += synapse0x1a8db30();
   input += synapse0x1a8db70();
   input += synapse0x1a8dbb0();
   input += synapse0x1a8dbf0();
   input += synapse0x1a8dc30();
   input += synapse0x1a8dc70();
   input += synapse0x1a8d700();
   input += synapse0x1a8d740();
   input += synapse0x1a8ddc0();
   input += synapse0x1a8de00();
   input += synapse0x1a8de40();
   input += synapse0x1a8de80();
   input += synapse0x1a8dec0();
   input += synapse0x1a8df00();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a8d570() {
   double input = input0x1a8d570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a8df40() {
   double input = -1.09315;
   input += synapse0x1a8e280();
   input += synapse0x1a8e2c0();
   input += synapse0x1a8e300();
   input += synapse0x1a8e340();
   input += synapse0x1a8e380();
   input += synapse0x1a8e3c0();
   input += synapse0x1a8e400();
   input += synapse0x1a8e440();
   input += synapse0x1a8e480();
   input += synapse0x1a8e4c0();
   input += synapse0x1a8e500();
   input += synapse0x1a8e540();
   input += synapse0x1a8e580();
   input += synapse0x1a8e5c0();
   input += synapse0x1a8e600();
   input += synapse0x1a8e640();
   input += synapse0x1a8e0d0();
   input += synapse0x1a8e110();
   input += synapse0x1a8e790();
   input += synapse0x1a8e7d0();
   input += synapse0x1a8e810();
   input += synapse0x1a8e850();
   input += synapse0x1a8e890();
   input += synapse0x1a8e8d0();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a8df40() {
   double input = input0x1a8df40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a8e910() {
   double input = 1.04825;
   input += synapse0x1a8ec50();
   input += synapse0x1a8ec90();
   input += synapse0x1a8ecd0();
   input += synapse0x1a8ed10();
   input += synapse0x1a8ed50();
   input += synapse0x1a8ed90();
   input += synapse0x1a8edd0();
   input += synapse0x1a8ee10();
   input += synapse0x1a8ee50();
   input += synapse0x1a87010();
   input += synapse0x1a87050();
   input += synapse0x1a87090();
   input += synapse0x1a870d0();
   input += synapse0x1a87110();
   input += synapse0x1a87150();
   input += synapse0x1a87190();
   input += synapse0x1a8eaa0();
   input += synapse0x1a8eae0();
   input += synapse0x1a872e0();
   input += synapse0x1a87320();
   input += synapse0x1a87360();
   input += synapse0x1a873a0();
   input += synapse0x1a873e0();
   input += synapse0x1a87420();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a8e910() {
   double input = input0x1a8e910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a87460() {
   double input = -0.619708;
   input += synapse0x1a877a0();
   input += synapse0x1a877e0();
   input += synapse0x1a87820();
   input += synapse0x1a87860();
   input += synapse0x1a878a0();
   input += synapse0x1a878e0();
   input += synapse0x1a87920();
   input += synapse0x1a87960();
   input += synapse0x1a879a0();
   input += synapse0x1a879e0();
   input += synapse0x1a87a20();
   input += synapse0x1a87a60();
   input += synapse0x1a87aa0();
   input += synapse0x1a87ae0();
   input += synapse0x1a87b20();
   input += synapse0x1a87b60();
   input += synapse0x1a875f0();
   input += synapse0x1a87630();
   input += synapse0x1a87cb0();
   input += synapse0x1a87cf0();
   input += synapse0x1a87d30();
   input += synapse0x1a87d70();
   input += synapse0x1a87db0();
   input += synapse0x1a87df0();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a87460() {
   double input = input0x1a87460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a87e30() {
   double input = -0.934114;
   input += synapse0x1a87fc0();
   input += synapse0x1a91050();
   input += synapse0x1a91090();
   input += synapse0x1a910d0();
   input += synapse0x1a91110();
   input += synapse0x1a91150();
   input += synapse0x1a91190();
   input += synapse0x1a911d0();
   input += synapse0x1a91210();
   input += synapse0x1a91250();
   input += synapse0x1a91290();
   input += synapse0x1a912d0();
   input += synapse0x1a91310();
   input += synapse0x1a91350();
   input += synapse0x1a91390();
   input += synapse0x1a913d0();
   input += synapse0x1a90ea0();
   input += synapse0x1a90ee0();
   input += synapse0x1a91520();
   input += synapse0x1a91560();
   input += synapse0x1a915a0();
   input += synapse0x1a915e0();
   input += synapse0x1a91620();
   input += synapse0x1a91660();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a87e30() {
   double input = input0x1a87e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a916a0() {
   double input = -1.28974;
   input += synapse0x1a919e0();
   input += synapse0x1a91a20();
   input += synapse0x1a91a60();
   input += synapse0x1a91aa0();
   input += synapse0x1a91ae0();
   input += synapse0x1a91b20();
   input += synapse0x1a91b60();
   input += synapse0x1a91ba0();
   input += synapse0x1a91be0();
   input += synapse0x1a91c20();
   input += synapse0x1a91c60();
   input += synapse0x1a91ca0();
   input += synapse0x1a91ce0();
   input += synapse0x1a91d20();
   input += synapse0x1a91d60();
   input += synapse0x1a91da0();
   input += synapse0x1a91830();
   input += synapse0x1a91870();
   input += synapse0x1a91ef0();
   input += synapse0x1a91f30();
   input += synapse0x1a91f70();
   input += synapse0x1a91fb0();
   input += synapse0x1a91ff0();
   input += synapse0x1a92030();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a916a0() {
   double input = input0x1a916a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a92070() {
   double input = -0.289054;
   input += synapse0x1a923b0();
   input += synapse0x1a923f0();
   input += synapse0x1a92430();
   input += synapse0x1a92470();
   input += synapse0x1a924b0();
   input += synapse0x1a924f0();
   input += synapse0x1a92530();
   input += synapse0x1a92570();
   input += synapse0x1a925b0();
   input += synapse0x1a925f0();
   input += synapse0x1a92630();
   input += synapse0x1a92670();
   input += synapse0x1a926b0();
   input += synapse0x1a926f0();
   input += synapse0x1a92730();
   input += synapse0x1a92770();
   input += synapse0x1a92200();
   input += synapse0x1a92240();
   input += synapse0x1a928c0();
   input += synapse0x1a92900();
   input += synapse0x1a92940();
   input += synapse0x1a92980();
   input += synapse0x1a929c0();
   input += synapse0x1a92a00();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a92070() {
   double input = input0x1a92070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a92a40() {
   double input = -0.813562;
   input += synapse0x1a92d80();
   input += synapse0x1a92dc0();
   input += synapse0x1a92e00();
   input += synapse0x1a92e40();
   input += synapse0x1a92e80();
   input += synapse0x1a92ec0();
   input += synapse0x1a92f00();
   input += synapse0x1a92f40();
   input += synapse0x1a92f80();
   input += synapse0x1a92fc0();
   input += synapse0x1a93000();
   input += synapse0x1a93040();
   input += synapse0x1a93080();
   input += synapse0x1a930c0();
   input += synapse0x1a93100();
   input += synapse0x1a93140();
   input += synapse0x1a92bd0();
   input += synapse0x1a92c10();
   input += synapse0x1a93290();
   input += synapse0x1a932d0();
   input += synapse0x1a93310();
   input += synapse0x1a93350();
   input += synapse0x1a93390();
   input += synapse0x1a933d0();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a92a40() {
   double input = input0x1a92a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a93410() {
   double input = 0.358499;
   input += synapse0x1a93750();
   input += synapse0x1a93790();
   input += synapse0x1a937d0();
   input += synapse0x1a93810();
   input += synapse0x1a93850();
   input += synapse0x1a93890();
   input += synapse0x1a938d0();
   input += synapse0x1a93910();
   input += synapse0x1a93950();
   input += synapse0x1a93990();
   input += synapse0x1a939d0();
   input += synapse0x1a93a10();
   input += synapse0x1a93a50();
   input += synapse0x1a93a90();
   input += synapse0x1a93ad0();
   input += synapse0x1a93b10();
   input += synapse0x1a935a0();
   input += synapse0x1a935e0();
   input += synapse0x1a93c60();
   input += synapse0x1a93ca0();
   input += synapse0x1a93ce0();
   input += synapse0x1a93d20();
   input += synapse0x1a93d60();
   input += synapse0x1a93da0();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a93410() {
   double input = input0x1a93410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a93de0() {
   double input = 1.57202;
   input += synapse0x1a94120();
   input += synapse0x1a94160();
   input += synapse0x1a941a0();
   input += synapse0x1a941e0();
   input += synapse0x1a94220();
   input += synapse0x1a94260();
   input += synapse0x1a942a0();
   input += synapse0x1a942e0();
   input += synapse0x1a94320();
   input += synapse0x1a94360();
   input += synapse0x1a943a0();
   input += synapse0x1a943e0();
   input += synapse0x1a94420();
   input += synapse0x1a94460();
   input += synapse0x1a944a0();
   input += synapse0x1a944e0();
   input += synapse0x1a93f70();
   input += synapse0x1a93fb0();
   input += synapse0x1a94630();
   input += synapse0x1a94670();
   input += synapse0x1a946b0();
   input += synapse0x1a946f0();
   input += synapse0x1a94730();
   input += synapse0x1a94770();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a93de0() {
   double input = input0x1a93de0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a947b0() {
   double input = -1.48913;
   input += synapse0x1a94af0();
   input += synapse0x1a94b30();
   input += synapse0x1a94b70();
   input += synapse0x1a94bb0();
   input += synapse0x1a94bf0();
   input += synapse0x1a94c30();
   input += synapse0x1a94c70();
   input += synapse0x1a94cb0();
   input += synapse0x1a94cf0();
   input += synapse0x1a94d30();
   input += synapse0x1a94d70();
   input += synapse0x1a94db0();
   input += synapse0x1a94df0();
   input += synapse0x1a94e30();
   input += synapse0x1a94e70();
   input += synapse0x1a94eb0();
   input += synapse0x1a94940();
   input += synapse0x1a94980();
   input += synapse0x1a95000();
   input += synapse0x1a95040();
   input += synapse0x1a95080();
   input += synapse0x1a950c0();
   input += synapse0x1a95100();
   input += synapse0x1a95140();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a947b0() {
   double input = input0x1a947b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a95180() {
   double input = -0.906964;
   input += synapse0x1a954c0();
   input += synapse0x1a95500();
   input += synapse0x1a95540();
   input += synapse0x1a95580();
   input += synapse0x1a955c0();
   input += synapse0x1a95600();
   input += synapse0x1a95640();
   input += synapse0x1a95680();
   input += synapse0x1a956c0();
   input += synapse0x1a95700();
   input += synapse0x1a95740();
   input += synapse0x1a95780();
   input += synapse0x1a957c0();
   input += synapse0x1a95800();
   input += synapse0x1a95840();
   input += synapse0x1a95880();
   input += synapse0x1a95310();
   input += synapse0x1a95350();
   input += synapse0x1a959d0();
   input += synapse0x1a95a10();
   input += synapse0x1a95a50();
   input += synapse0x1a95a90();
   input += synapse0x1a95ad0();
   input += synapse0x1a95b10();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a95180() {
   double input = input0x1a95180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a95b50() {
   double input = 0.567033;
   input += synapse0x1a95e90();
   input += synapse0x1a8a460();
   input += synapse0x1a8a4a0();
   input += synapse0x1a8a4e0();
   input += synapse0x1a8a730();
   input += synapse0x1a8a770();
   input += synapse0x1a8a7b0();
   input += synapse0x1a8aa00();
   input += synapse0x1a8aa40();
   input += synapse0x1a8ac90();
   input += synapse0x1a8acd0();
   input += synapse0x1a8ad10();
   input += synapse0x1a8af60();
   input += synapse0x1a8afa0();
   input += synapse0x1a8b1f0();
   input += synapse0x1a8b230();
   input += synapse0x1a95ce0();
   input += synapse0x1a95d20();
   input += synapse0x1a8b380();
   input += synapse0x1a8b890();
   input += synapse0x1a8b8d0();
   input += synapse0x1a8b910();
   input += synapse0x1a8bb60();
   input += synapse0x1a8bba0();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a95b50() {
   double input = input0x1a95b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a8bbe0() {
   double input = -0.510053;
   input += synapse0x1a8b450();
   input += synapse0x1a8b490();
   input += synapse0x1a8b4d0();
   input += synapse0x1a8b510();
   input += synapse0x1a8be90();
   input += synapse0x1a981e0();
   input += synapse0x1a98220();
   input += synapse0x1a98260();
   input += synapse0x1a982a0();
   input += synapse0x1a982e0();
   input += synapse0x1a98320();
   input += synapse0x1a98360();
   input += synapse0x1a983a0();
   input += synapse0x1a983e0();
   input += synapse0x1a98420();
   input += synapse0x1a98460();
   input += synapse0x1a8bd70();
   input += synapse0x1a8bdb0();
   input += synapse0x1a985b0();
   input += synapse0x1a985f0();
   input += synapse0x1a98630();
   input += synapse0x1a98670();
   input += synapse0x1a986b0();
   input += synapse0x1a986f0();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a8bbe0() {
   double input = input0x1a8bbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a98730() {
   double input = -0.455153;
   input += synapse0x1a98a70();
   input += synapse0x1a98ab0();
   input += synapse0x1a98af0();
   input += synapse0x1a98b30();
   input += synapse0x1a98b70();
   input += synapse0x1a98bb0();
   input += synapse0x1a98bf0();
   input += synapse0x1a98c30();
   input += synapse0x1a98c70();
   input += synapse0x1a98cb0();
   input += synapse0x1a98cf0();
   input += synapse0x1a98d30();
   input += synapse0x1a98d70();
   input += synapse0x1a98db0();
   input += synapse0x1a98df0();
   input += synapse0x1a98e30();
   input += synapse0x1a988c0();
   input += synapse0x1a98900();
   input += synapse0x1a98f80();
   input += synapse0x1a98fc0();
   input += synapse0x1a99000();
   input += synapse0x1a99040();
   input += synapse0x1a99080();
   input += synapse0x1a990c0();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a98730() {
   double input = input0x1a98730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a99100() {
   double input = 0.696252;
   input += synapse0x1a99440();
   input += synapse0x1a99480();
   input += synapse0x1a994c0();
   input += synapse0x1a99500();
   input += synapse0x1a99540();
   input += synapse0x1a99580();
   input += synapse0x1a995c0();
   input += synapse0x1a99600();
   input += synapse0x1a99640();
   input += synapse0x1a99680();
   input += synapse0x1a996c0();
   input += synapse0x1a99700();
   input += synapse0x1a99740();
   input += synapse0x1a99780();
   input += synapse0x1a997c0();
   input += synapse0x1a99800();
   input += synapse0x1a99290();
   input += synapse0x1a992d0();
   input += synapse0x1a99950();
   input += synapse0x1a99990();
   input += synapse0x1a999d0();
   input += synapse0x1a99a10();
   input += synapse0x1a99a50();
   input += synapse0x1a99a90();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a99100() {
   double input = input0x1a99100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a99ad0() {
   double input = -0.271434;
   input += synapse0x1a99e10();
   input += synapse0x1a99e50();
   input += synapse0x1a99e90();
   input += synapse0x1a99ed0();
   input += synapse0x1a99f10();
   input += synapse0x1a99f50();
   input += synapse0x1a99f90();
   input += synapse0x1a99fd0();
   input += synapse0x1a9a010();
   input += synapse0x1a9a050();
   input += synapse0x1a9a090();
   input += synapse0x1a9a0d0();
   input += synapse0x1a9a110();
   input += synapse0x1a9a150();
   input += synapse0x1a9a190();
   input += synapse0x1a9a1d0();
   input += synapse0x1a99c60();
   input += synapse0x1a99ca0();
   input += synapse0x1a9a320();
   input += synapse0x1a9a360();
   input += synapse0x1a9a3a0();
   input += synapse0x1a9a3e0();
   input += synapse0x1a9a420();
   input += synapse0x1a9a460();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a99ad0() {
   double input = input0x1a99ad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a9a4a0() {
   double input = -1.59759;
   input += synapse0x1a9a7e0();
   input += synapse0x1a9a820();
   input += synapse0x1a9a860();
   input += synapse0x1a9a8a0();
   input += synapse0x1a9a8e0();
   input += synapse0x1a9a920();
   input += synapse0x1a9a960();
   input += synapse0x1a9a9a0();
   input += synapse0x1a9a9e0();
   input += synapse0x1a9aa20();
   input += synapse0x1a9aa60();
   input += synapse0x1a9aaa0();
   input += synapse0x1a9aae0();
   input += synapse0x1a9ab20();
   input += synapse0x1a9ab60();
   input += synapse0x1a9aba0();
   input += synapse0x1a9a630();
   input += synapse0x1a9a670();
   input += synapse0x1a9acf0();
   input += synapse0x1a9ad30();
   input += synapse0x1a9ad70();
   input += synapse0x1a9adb0();
   input += synapse0x1a9adf0();
   input += synapse0x1a9ae30();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a9a4a0() {
   double input = input0x1a9a4a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a9ae70() {
   double input = -0.941047;
   input += synapse0x1a9b1b0();
   input += synapse0x1a9b1f0();
   input += synapse0x1a9b230();
   input += synapse0x1a9b270();
   input += synapse0x1a9b2b0();
   input += synapse0x1a9b2f0();
   input += synapse0x1a9b330();
   input += synapse0x1a9b370();
   input += synapse0x1a9b3b0();
   input += synapse0x1a9b3f0();
   input += synapse0x1a9b430();
   input += synapse0x1a9b470();
   input += synapse0x1a9b4b0();
   input += synapse0x1a9b4f0();
   input += synapse0x1a9b530();
   input += synapse0x1a9b570();
   input += synapse0x1a9b000();
   input += synapse0x1a9b040();
   input += synapse0x1a9b6c0();
   input += synapse0x1a9b700();
   input += synapse0x1a9b740();
   input += synapse0x1a9b780();
   input += synapse0x1a9b7c0();
   input += synapse0x1a9b800();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a9ae70() {
   double input = input0x1a9ae70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a9b840() {
   double input = -0.828712;
   input += synapse0x1a9bb80();
   input += synapse0x1a9bbc0();
   input += synapse0x1a9bc00();
   input += synapse0x1a9bc40();
   input += synapse0x1a9bc80();
   input += synapse0x1a9bcc0();
   input += synapse0x1a9bd00();
   input += synapse0x1a9bd40();
   input += synapse0x1a9bd80();
   input += synapse0x1a9bdc0();
   input += synapse0x1a9be00();
   input += synapse0x1a9be40();
   input += synapse0x1a9be80();
   input += synapse0x1a9bec0();
   input += synapse0x1a9bf00();
   input += synapse0x1a9bf40();
   input += synapse0x1a9b9d0();
   input += synapse0x1a9ba10();
   input += synapse0x1a9c090();
   input += synapse0x1a9c0d0();
   input += synapse0x1a9c110();
   input += synapse0x1a9c150();
   input += synapse0x1a9c190();
   input += synapse0x1a9c1d0();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a9b840() {
   double input = input0x1a9b840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a9c210() {
   double input = -3.34587;
   input += synapse0x1a9c550();
   input += synapse0x1a9c590();
   input += synapse0x1a9c5d0();
   input += synapse0x1a9c610();
   input += synapse0x1a9c650();
   input += synapse0x1a9c690();
   input += synapse0x1a9c6d0();
   input += synapse0x1a9c710();
   input += synapse0x1a9c750();
   input += synapse0x1a9c790();
   input += synapse0x1a9c7d0();
   input += synapse0x1a9c810();
   input += synapse0x1a9c850();
   input += synapse0x1a9c890();
   input += synapse0x1a9c8d0();
   input += synapse0x1a9c910();
   input += synapse0x1a9c3a0();
   input += synapse0x1a9c3e0();
   input += synapse0x1a9ca60();
   input += synapse0x1a9caa0();
   input += synapse0x1a9cae0();
   input += synapse0x1a9cb20();
   input += synapse0x1a9cb60();
   input += synapse0x1a9cba0();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a9c210() {
   double input = input0x1a9c210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a9cbe0() {
   double input = 0.128199;
   input += synapse0x1a85650();
   input += synapse0x1a85690();
   input += synapse0x1a856d0();
   input += synapse0x1a85710();
   input += synapse0x1a85750();
   input += synapse0x1a85790();
   input += synapse0x1a857d0();
   input += synapse0x1a85810();
   input += synapse0x1a9d330();
   input += synapse0x1a9d370();
   input += synapse0x1a9d3b0();
   input += synapse0x1a9d3f0();
   input += synapse0x1a9d430();
   input += synapse0x1a9d470();
   input += synapse0x1a9d4b0();
   input += synapse0x1a9d4f0();
   input += synapse0x1a9cd70();
   input += synapse0x1a9cdb0();
   input += synapse0x1a9d640();
   input += synapse0x1a9d680();
   input += synapse0x1a9d6c0();
   input += synapse0x1a9d700();
   input += synapse0x1a9d740();
   input += synapse0x1a9d780();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a9cbe0() {
   double input = input0x1a9cbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a9d7c0() {
   double input = -0.446068;
   input += synapse0x1a9db00();
   input += synapse0x1a9db40();
   input += synapse0x1a9db80();
   input += synapse0x1a9dbc0();
   input += synapse0x1a9dc00();
   input += synapse0x1a9dc40();
   input += synapse0x1a9dc80();
   input += synapse0x1a9dcc0();
   input += synapse0x1a9dd00();
   input += synapse0x1a9dd40();
   input += synapse0x1a9dd80();
   input += synapse0x1a9ddc0();
   input += synapse0x1a9de00();
   input += synapse0x1a9de40();
   input += synapse0x1a9de80();
   input += synapse0x1a9dec0();
   input += synapse0x1a9d950();
   input += synapse0x1a9d990();
   input += synapse0x1a9e010();
   input += synapse0x1a9e050();
   input += synapse0x1a9e090();
   input += synapse0x1a9e0d0();
   input += synapse0x1a9e110();
   input += synapse0x1a9e150();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a9d7c0() {
   double input = input0x1a9d7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a9e190() {
   double input = -5.45591;
   input += synapse0x1a9e4d0();
   input += synapse0x1a9e510();
   input += synapse0x1a9e550();
   input += synapse0x1a9e590();
   input += synapse0x1a9e5d0();
   input += synapse0x1a9e610();
   input += synapse0x1a9e650();
   input += synapse0x1a9e690();
   input += synapse0x1a9e6d0();
   input += synapse0x1a9e710();
   input += synapse0x1a9e750();
   input += synapse0x1a9e790();
   input += synapse0x1a9e7d0();
   input += synapse0x1a9e810();
   input += synapse0x1a9e850();
   input += synapse0x1a9e890();
   input += synapse0x1a9e320();
   input += synapse0x1a9e360();
   input += synapse0x1a8ee90();
   input += synapse0x1a8eed0();
   input += synapse0x1a8ef10();
   input += synapse0x1a8ef50();
   input += synapse0x1a8ef90();
   input += synapse0x1a8efd0();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a9e190() {
   double input = input0x1a9e190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a8f010() {
   double input = -1.4519;
   input += synapse0x1a8f350();
   input += synapse0x1a8f390();
   input += synapse0x1a8f3d0();
   input += synapse0x1a8f410();
   input += synapse0x1a8f450();
   input += synapse0x1a8f490();
   input += synapse0x1a8f4d0();
   input += synapse0x1a8f510();
   input += synapse0x1a8f550();
   input += synapse0x1a8f590();
   input += synapse0x1a8f5d0();
   input += synapse0x1a8f610();
   input += synapse0x1a8f650();
   input += synapse0x1a8f690();
   input += synapse0x1a8f6d0();
   input += synapse0x1a8f710();
   input += synapse0x1a8f1a0();
   input += synapse0x1a8f1e0();
   input += synapse0x1a8f860();
   input += synapse0x1a8f8a0();
   input += synapse0x1a8f8e0();
   input += synapse0x1a8f920();
   input += synapse0x1a8f960();
   input += synapse0x1a8f9a0();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a8f010() {
   double input = input0x1a8f010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a8f9e0() {
   double input = 2.05879;
   input += synapse0x1a8fd20();
   input += synapse0x1a8fd60();
   input += synapse0x1a8fda0();
   input += synapse0x1a8fde0();
   input += synapse0x1a8fe20();
   input += synapse0x1a8fe60();
   input += synapse0x1a8fea0();
   input += synapse0x1a8fee0();
   input += synapse0x1a8ff20();
   input += synapse0x1a8ff60();
   input += synapse0x1a8ffa0();
   input += synapse0x1a8ffe0();
   input += synapse0x1a90020();
   input += synapse0x1a90060();
   input += synapse0x1a900a0();
   input += synapse0x1a900e0();
   input += synapse0x1a8fb70();
   input += synapse0x1a8fbb0();
   input += synapse0x1a90230();
   input += synapse0x1a90270();
   input += synapse0x1a902b0();
   input += synapse0x1a902f0();
   input += synapse0x1a90330();
   input += synapse0x1a90370();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a8f9e0() {
   double input = input0x1a8f9e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1a903b0() {
   double input = -0.626973;
   input += synapse0x1a906f0();
   input += synapse0x1a90730();
   input += synapse0x1a90770();
   input += synapse0x1a907b0();
   input += synapse0x1a907f0();
   input += synapse0x1a90830();
   input += synapse0x1a90870();
   input += synapse0x1a908b0();
   input += synapse0x1a908f0();
   input += synapse0x1a90930();
   input += synapse0x1a90970();
   input += synapse0x1a909b0();
   input += synapse0x1a909f0();
   input += synapse0x1a90a30();
   input += synapse0x1a90a70();
   input += synapse0x1a90ab0();
   input += synapse0x1a90540();
   input += synapse0x1a90580();
   input += synapse0x1a90c00();
   input += synapse0x1a90c40();
   input += synapse0x1a90c80();
   input += synapse0x1a90cc0();
   input += synapse0x1a90d00();
   input += synapse0x1a90d40();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1a903b0() {
   double input = input0x1a903b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1aa29f0() {
   double input = 0.38397;
   input += synapse0x1aa2c10();
   input += synapse0x1aa2c50();
   input += synapse0x1aa2c90();
   input += synapse0x1aa2cd0();
   input += synapse0x1aa2d10();
   input += synapse0x1aa2d50();
   input += synapse0x1aa2d90();
   input += synapse0x1aa2dd0();
   input += synapse0x1aa2e10();
   input += synapse0x1aa2e50();
   input += synapse0x1aa2e90();
   input += synapse0x1aa2ed0();
   input += synapse0x1aa2f10();
   input += synapse0x1aa2f50();
   input += synapse0x1aa2f90();
   input += synapse0x1aa2fd0();
   input += synapse0x1a90d80();
   input += synapse0x1a90dc0();
   input += synapse0x1aa3120();
   input += synapse0x1aa3160();
   input += synapse0x1aa31a0();
   input += synapse0x1aa31e0();
   input += synapse0x1aa3220();
   input += synapse0x1aa3260();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1aa29f0() {
   double input = input0x1aa29f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1aa32a0() {
   double input = -0.165775;
   input += synapse0x1aa35e0();
   input += synapse0x1aa3620();
   input += synapse0x1aa3660();
   input += synapse0x1aa36a0();
   input += synapse0x1aa36e0();
   input += synapse0x1aa3720();
   input += synapse0x1aa3760();
   input += synapse0x1aa37a0();
   input += synapse0x1aa37e0();
   input += synapse0x1aa3820();
   input += synapse0x1aa3860();
   input += synapse0x1aa38a0();
   input += synapse0x1aa38e0();
   input += synapse0x1aa3920();
   input += synapse0x1aa3960();
   input += synapse0x1aa39a0();
   input += synapse0x1aa3430();
   input += synapse0x1aa3470();
   input += synapse0x1aa3af0();
   input += synapse0x1aa3b30();
   input += synapse0x1aa3b70();
   input += synapse0x1aa3bb0();
   input += synapse0x1aa3bf0();
   input += synapse0x1aa3c30();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1aa32a0() {
   double input = input0x1aa32a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1aa3c70() {
   double input = 0.791537;
   input += synapse0x1aa3fb0();
   input += synapse0x1aa3ff0();
   input += synapse0x1aa4030();
   input += synapse0x1aa4070();
   input += synapse0x1aa40b0();
   input += synapse0x1aa40f0();
   input += synapse0x1aa4130();
   input += synapse0x1aa4170();
   input += synapse0x1aa41b0();
   input += synapse0x1aa41f0();
   input += synapse0x1aa4230();
   input += synapse0x1aa4270();
   input += synapse0x1aa42b0();
   input += synapse0x1aa42f0();
   input += synapse0x1aa4330();
   input += synapse0x1aa4370();
   input += synapse0x1aa3e00();
   input += synapse0x1aa3e40();
   input += synapse0x1aa44c0();
   input += synapse0x1aa4500();
   input += synapse0x1aa4540();
   input += synapse0x1aa4580();
   input += synapse0x1aa45c0();
   input += synapse0x1aa4600();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1aa3c70() {
   double input = input0x1aa3c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1aa4640() {
   double input = -2.96664;
   input += synapse0x1aa4980();
   input += synapse0x1aa49c0();
   input += synapse0x1aa4a00();
   input += synapse0x1aa4a40();
   input += synapse0x1aa4a80();
   input += synapse0x1aa4ac0();
   input += synapse0x1aa4b00();
   input += synapse0x1aa4b40();
   input += synapse0x1aa4b80();
   input += synapse0x1aa4bc0();
   input += synapse0x1aa4c00();
   input += synapse0x1aa4c40();
   input += synapse0x1aa4c80();
   input += synapse0x1aa4cc0();
   input += synapse0x1aa4d00();
   input += synapse0x1aa4d40();
   input += synapse0x1aa47d0();
   input += synapse0x1aa4810();
   input += synapse0x1aa4e90();
   input += synapse0x1aa4ed0();
   input += synapse0x1aa4f10();
   input += synapse0x1aa4f50();
   input += synapse0x1aa4f90();
   input += synapse0x1aa4fd0();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1aa4640() {
   double input = input0x1aa4640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1aab840() {
   double input = -0.253579;
   input += synapse0x1a81570();
   input += synapse0x1a815b0();
   input += synapse0x1a82a80();
   input += synapse0x1a82ac0();
   input += synapse0x1a83450();
   input += synapse0x1a83490();
   input += synapse0x1a84220();
   input += synapse0x1a84260();
   input += synapse0x1a84bf0();
   input += synapse0x1a84c30();
   input += synapse0x1a855c0();
   input += synapse0x1a85600();
   input += synapse0x1a860a0();
   input += synapse0x1a860e0();
   input += synapse0x1a86a70();
   input += synapse0x1a86ab0();
   input += synapse0x1a83b50();
   input += synapse0x1a83b90();
   input += synapse0x1a88620();
   input += synapse0x1a88660();
   input += synapse0x1a88ff0();
   input += synapse0x1a89030();
   input += synapse0x1a899c0();
   input += synapse0x1a89a00();
   input += synapse0x1a8a390();
   input += synapse0x1a8a3d0();
   input += synapse0x1a7e500();
   input += synapse0x1a7e540();
   input += synapse0x1a8c480();
   input += synapse0x1a8c4c0();
   input += synapse0x1a8ce50();
   input += synapse0x1a8ce90();
   input += synapse0x1a8d820();
   input += synapse0x1a8d860();
   input += synapse0x1a8e1f0();
   input += synapse0x1a8e230();
   input += synapse0x1a8ebc0();
   input += synapse0x1a8ec00();
   input += synapse0x1a87710();
   input += synapse0x1a87750();
   input += synapse0x1a90fc0();
   input += synapse0x1a91000();
   input += synapse0x1a91950();
   input += synapse0x1a91990();
   input += synapse0x1a92320();
   input += synapse0x1a92360();
   input += synapse0x1a92cf0();
   input += synapse0x1a92d30();
   input += synapse0x1a936c0();
   input += synapse0x1a93700();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1aab840() {
   double input = input0x1aab840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1aabbe0() {
   double input = -0.15868;
   input += synapse0x1a95e00();
   input += synapse0x1a95e40();
   input += synapse0x1a8b3c0();
   input += synapse0x1a8b400();
   input += synapse0x1a989e0();
   input += synapse0x1a98a20();
   input += synapse0x1a993b0();
   input += synapse0x1a993f0();
   input += synapse0x1a99d80();
   input += synapse0x1a99dc0();
   input += synapse0x1a9a750();
   input += synapse0x1a9a790();
   input += synapse0x1a9b120();
   input += synapse0x1a9b160();
   input += synapse0x1a9baf0();
   input += synapse0x1a9bb30();
   input += synapse0x1a9c4c0();
   input += synapse0x1a9c500();
   input += synapse0x1a9ce90();
   input += synapse0x1a9ced0();
   input += synapse0x1a9da70();
   input += synapse0x1a9dab0();
   input += synapse0x1a9e440();
   input += synapse0x1a9e480();
   input += synapse0x1a8f2c0();
   input += synapse0x1a8f300();
   input += synapse0x1a8fc90();
   input += synapse0x1a8fcd0();
   input += synapse0x1a90660();
   input += synapse0x1a906a0();
   input += synapse0x1aa2b80();
   input += synapse0x1aa2bc0();
   input += synapse0x1aa3550();
   input += synapse0x1aa3590();
   input += synapse0x1aa3f20();
   input += synapse0x1aa3f60();
   input += synapse0x1aa48f0();
   input += synapse0x1aa4930();
   input += synapse0x1a807e0();
   input += synapse0x1a80820();
   input += synapse0x1a94090();
   input += synapse0x1a940d0();
   input += synapse0x1aa5010();
   input += synapse0x1aa5050();
   input += synapse0x1aa5090();
   input += synapse0x1aa50d0();
   input += synapse0x1aabf80();
   input += synapse0x1aabfc0();
   input += synapse0x1aac000();
   input += synapse0x1aac040();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1aabbe0() {
   double input = input0x1aabbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1aac080() {
   double input = 0.16628;
   input += synapse0x1aac3c0();
   input += synapse0x1aac400();
   input += synapse0x1aac440();
   input += synapse0x1aac480();
   input += synapse0x1aac4c0();
   input += synapse0x1aac500();
   input += synapse0x1aac540();
   input += synapse0x1aac580();
   input += synapse0x1aac5c0();
   input += synapse0x1aac600();
   input += synapse0x1aac640();
   input += synapse0x1aac680();
   input += synapse0x1aac6c0();
   input += synapse0x1aac700();
   input += synapse0x1aac740();
   input += synapse0x1aac780();
   input += synapse0x1aac210();
   input += synapse0x1aac250();
   input += synapse0x1aac8d0();
   input += synapse0x1aac910();
   input += synapse0x1aac950();
   input += synapse0x1aac990();
   input += synapse0x1aac9d0();
   input += synapse0x1aaca10();
   input += synapse0x1aaca50();
   input += synapse0x1aaca90();
   input += synapse0x1aacad0();
   input += synapse0x1aacb10();
   input += synapse0x1aacb50();
   input += synapse0x1aacb90();
   input += synapse0x1aacbd0();
   input += synapse0x1aacc10();
   input += synapse0x1aac7c0();
   input += synapse0x1aac800();
   input += synapse0x1aac840();
   input += synapse0x1aac880();
   input += synapse0x1aace60();
   input += synapse0x1aacea0();
   input += synapse0x1aacee0();
   input += synapse0x1aacf20();
   input += synapse0x1aacf60();
   input += synapse0x1aacfa0();
   input += synapse0x1aacfe0();
   input += synapse0x1aad020();
   input += synapse0x1aad060();
   input += synapse0x1aad0a0();
   input += synapse0x1aad0e0();
   input += synapse0x1aad120();
   input += synapse0x1aad160();
   input += synapse0x1aad1a0();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1aac080() {
   double input = input0x1aac080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1aad1e0() {
   double input = -0.574361;
   input += synapse0x1aad520();
   input += synapse0x1aad560();
   input += synapse0x1aad5a0();
   input += synapse0x1aad5e0();
   input += synapse0x1aad620();
   input += synapse0x1aad660();
   input += synapse0x1aad6a0();
   input += synapse0x1aad6e0();
   input += synapse0x1aad720();
   input += synapse0x1aad760();
   input += synapse0x1aad7a0();
   input += synapse0x1aad7e0();
   input += synapse0x1aad820();
   input += synapse0x1aad860();
   input += synapse0x1aad8a0();
   input += synapse0x1aad8e0();
   input += synapse0x1aad370();
   input += synapse0x1aad3b0();
   input += synapse0x1aada30();
   input += synapse0x1aada70();
   input += synapse0x1aadab0();
   input += synapse0x1aadaf0();
   input += synapse0x1aadb30();
   input += synapse0x1aadb70();
   input += synapse0x1aadbb0();
   input += synapse0x1aadbf0();
   input += synapse0x1aadc30();
   input += synapse0x1aadc70();
   input += synapse0x1aadcb0();
   input += synapse0x1aadcf0();
   input += synapse0x1aadd30();
   input += synapse0x1aadd70();
   input += synapse0x1aad920();
   input += synapse0x1aad960();
   input += synapse0x1aad9a0();
   input += synapse0x1aad9e0();
   input += synapse0x1aadfc0();
   input += synapse0x1aae000();
   input += synapse0x1aae040();
   input += synapse0x1aae080();
   input += synapse0x1aae0c0();
   input += synapse0x1aae100();
   input += synapse0x1aae140();
   input += synapse0x1aae180();
   input += synapse0x1aae1c0();
   input += synapse0x1aae200();
   input += synapse0x1aae240();
   input += synapse0x1aae280();
   input += synapse0x1aae2c0();
   input += synapse0x1aae300();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1aad1e0() {
   double input = input0x1aad1e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1aae340() {
   double input = 0.0724129;
   input += synapse0x1aae680();
   input += synapse0x1aae6c0();
   input += synapse0x1aae700();
   input += synapse0x1aae740();
   input += synapse0x1aae780();
   input += synapse0x1aae7c0();
   input += synapse0x1aae800();
   input += synapse0x1aae840();
   input += synapse0x1aae880();
   input += synapse0x1aae8c0();
   input += synapse0x1aae900();
   input += synapse0x1aae940();
   input += synapse0x1aae980();
   input += synapse0x1aae9c0();
   input += synapse0x1aaea00();
   input += synapse0x1aaea40();
   input += synapse0x1aae4d0();
   input += synapse0x1aae510();
   input += synapse0x1aaeb90();
   input += synapse0x1aaebd0();
   input += synapse0x1aaec10();
   input += synapse0x1aaec50();
   input += synapse0x1aaec90();
   input += synapse0x1aaecd0();
   input += synapse0x1aaed10();
   input += synapse0x1aaed50();
   input += synapse0x1aaed90();
   input += synapse0x1aaedd0();
   input += synapse0x1aaee10();
   input += synapse0x1aaee50();
   input += synapse0x1aaee90();
   input += synapse0x1aaeed0();
   input += synapse0x1aaea80();
   input += synapse0x1aaeac0();
   input += synapse0x1aaeb00();
   input += synapse0x1aaeb40();
   input += synapse0x1aaf120();
   input += synapse0x1aaf160();
   input += synapse0x1aaf1a0();
   input += synapse0x1aaf1e0();
   input += synapse0x1aaf220();
   input += synapse0x1aaf260();
   input += synapse0x1aaf2a0();
   input += synapse0x1aaf2e0();
   input += synapse0x1aaf320();
   input += synapse0x1aaf360();
   input += synapse0x1aaf3a0();
   input += synapse0x1aaf3e0();
   input += synapse0x1aaf420();
   input += synapse0x1aaf460();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1aae340() {
   double input = input0x1aae340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdR::input0x1aaf4a0() {
   double input = 6.01539;
   input += synapse0x1a80580();
   input += synapse0x1aaf6c0();
   input += synapse0x1aaf700();
   input += synapse0x1aaf740();
   input += synapse0x1aaf780();
   return input;
}

double NNfunction_sb_sLdR::neuron0x1aaf4a0() {
   double input = input0x1aaf4a0();
   return (input * 1)+0;
}

double NNfunction_sb_sLdR::synapse0x183b3d0() {
   return (neuron0x1a7b560()*0.439259);
}

double NNfunction_sb_sLdR::synapse0x1a7b420() {
   return (neuron0x1a7b8a0()*-0.623347);
}

double NNfunction_sb_sLdR::synapse0x1a7b460() {
   return (neuron0x1a7bbe0()*-0.615525);
}

double NNfunction_sb_sLdR::synapse0x1a80870() {
   return (neuron0x1a7bf20()*0.613822);
}

double NNfunction_sb_sLdR::synapse0x1a808b0() {
   return (neuron0x1a7c260()*0.54916);
}

double NNfunction_sb_sLdR::synapse0x1a808f0() {
   return (neuron0x1a7c5a0()*0.4141);
}

double NNfunction_sb_sLdR::synapse0x1a80930() {
   return (neuron0x1a7c8e0()*0.0012129);
}

double NNfunction_sb_sLdR::synapse0x1a80970() {
   return (neuron0x1a7cc20()*-0.79377);
}

double NNfunction_sb_sLdR::synapse0x1a809b0() {
   return (neuron0x1a7cf60()*-0.100577);
}

double NNfunction_sb_sLdR::synapse0x1a809f0() {
   return (neuron0x1a7d2a0()*-0.0894468);
}

double NNfunction_sb_sLdR::synapse0x1a80a30() {
   return (neuron0x1a7d5e0()*-0.167924);
}

double NNfunction_sb_sLdR::synapse0x1a80a70() {
   return (neuron0x1a7d920()*0.0353536);
}

double NNfunction_sb_sLdR::synapse0x1a80ab0() {
   return (neuron0x1a7dc60()*-0.791568);
}

double NNfunction_sb_sLdR::synapse0x1a80af0() {
   return (neuron0x1a7dfa0()*-0.41424);
}

double NNfunction_sb_sLdR::synapse0x1a80b30() {
   return (neuron0x1a7e2e0()*-0.0200359);
}

double NNfunction_sb_sLdR::synapse0x1a80b70() {
   return (neuron0x1a7e620()*0.0512889);
}

double NNfunction_sb_sLdR::synapse0x1a7b390() {
   return (neuron0x1a7e960()*-0.648951);
}

double NNfunction_sb_sLdR::synapse0x1a7b3d0() {
   return (neuron0x1a7eec0()*-0.519645);
}

double NNfunction_sb_sLdR::synapse0x182cc70() {
   return (neuron0x1a7f0e0()*0.163106);
}

double NNfunction_sb_sLdR::synapse0x182ccb0() {
   return (neuron0x1a7f420()*0.202265);
}

double NNfunction_sb_sLdR::synapse0x1a80dd0() {
   return (neuron0x1a7f760()*-0.105705);
}

double NNfunction_sb_sLdR::synapse0x1a80e10() {
   return (neuron0x1a7faa0()*0.91947);
}

double NNfunction_sb_sLdR::synapse0x1a80e50() {
   return (neuron0x1a7fde0()*-0.132676);
}

double NNfunction_sb_sLdR::synapse0x1a80e90() {
   return (neuron0x1a80120()*0.257805);
}

double NNfunction_sb_sLdR::synapse0x1a81210() {
   return (neuron0x1a7b560()*-0.0210259);
}

double NNfunction_sb_sLdR::synapse0x1a81250() {
   return (neuron0x1a7b8a0()*-0.00141972);
}

double NNfunction_sb_sLdR::synapse0x1a81290() {
   return (neuron0x1a7bbe0()*0.102815);
}

double NNfunction_sb_sLdR::synapse0x1a812d0() {
   return (neuron0x1a7bf20()*0.307324);
}

double NNfunction_sb_sLdR::synapse0x1a81310() {
   return (neuron0x1a7c260()*-0.0258529);
}

double NNfunction_sb_sLdR::synapse0x1a81350() {
   return (neuron0x1a7c5a0()*-0.0217872);
}

double NNfunction_sb_sLdR::synapse0x1a81390() {
   return (neuron0x1a7c8e0()*0.0320348);
}

double NNfunction_sb_sLdR::synapse0x1a813d0() {
   return (neuron0x1a7cc20()*0.00881831);
}

double NNfunction_sb_sLdR::synapse0x1a81410() {
   return (neuron0x1a7cf60()*0.0121125);
}

double NNfunction_sb_sLdR::synapse0x1a80cc0() {
   return (neuron0x1a7d2a0()*-0.00128336);
}

double NNfunction_sb_sLdR::synapse0x1a80d00() {
   return (neuron0x1a7d5e0()*0.0159819);
}

double NNfunction_sb_sLdR::synapse0x1a80d40() {
   return (neuron0x1a7d920()*0.038485);
}

double NNfunction_sb_sLdR::synapse0x1a80d80() {
   return (neuron0x1a7dc60()*-3.35242);
}

double NNfunction_sb_sLdR::synapse0x1a81660() {
   return (neuron0x1a7dfa0()*-0.0451519);
}

double NNfunction_sb_sLdR::synapse0x1a816a0() {
   return (neuron0x1a7e2e0()*-0.0362852);
}

double NNfunction_sb_sLdR::synapse0x1a816e0() {
   return (neuron0x1a7e620()*-0.0490426);
}

double NNfunction_sb_sLdR::synapse0x1a81060() {
   return (neuron0x1a7e960()*-0.0273993);
}

double NNfunction_sb_sLdR::synapse0x1a810a0() {
   return (neuron0x1a7eec0()*0.466364);
}

double NNfunction_sb_sLdR::synapse0x1a81830() {
   return (neuron0x1a7f0e0()*0.0146885);
}

double NNfunction_sb_sLdR::synapse0x1a81870() {
   return (neuron0x1a7f420()*0.0363918);
}

double NNfunction_sb_sLdR::synapse0x1a818b0() {
   return (neuron0x1a7f760()*0.0230407);
}

double NNfunction_sb_sLdR::synapse0x1a818f0() {
   return (neuron0x1a7faa0()*0.0208131);
}

double NNfunction_sb_sLdR::synapse0x1a81930() {
   return (neuron0x1a7fde0()*0.00577113);
}

double NNfunction_sb_sLdR::synapse0x1a81970() {
   return (neuron0x1a80120()*0.0160002);
}

double NNfunction_sb_sLdR::synapse0x1a81cf0() {
   return (neuron0x1a7b560()*-0.0172813);
}

double NNfunction_sb_sLdR::synapse0x1a81d30() {
   return (neuron0x1a7b8a0()*0.00262494);
}

double NNfunction_sb_sLdR::synapse0x1a81d70() {
   return (neuron0x1a7bbe0()*0.00933987);
}

double NNfunction_sb_sLdR::synapse0x1a81db0() {
   return (neuron0x1a7bf20()*-15.238);
}

double NNfunction_sb_sLdR::synapse0x1a81df0() {
   return (neuron0x1a7c260()*-0.000128205);
}

double NNfunction_sb_sLdR::synapse0x1a81e30() {
   return (neuron0x1a7c5a0()*0.0285414);
}

double NNfunction_sb_sLdR::synapse0x1a81e70() {
   return (neuron0x1a7c8e0()*0.00833537);
}

double NNfunction_sb_sLdR::synapse0x1a81eb0() {
   return (neuron0x1a7cc20()*0.029077);
}

double NNfunction_sb_sLdR::synapse0x1a81ef0() {
   return (neuron0x1a7cf60()*0.0301509);
}

double NNfunction_sb_sLdR::synapse0x1a81f30() {
   return (neuron0x1a7d2a0()*-0.00739567);
}

double NNfunction_sb_sLdR::synapse0x1a81f70() {
   return (neuron0x1a7d5e0()*-0.00271592);
}

double NNfunction_sb_sLdR::synapse0x1a81fb0() {
   return (neuron0x1a7d920()*-0.0385656);
}

double NNfunction_sb_sLdR::synapse0x1a81ff0() {
   return (neuron0x1a7dc60()*-0.200932);
}

double NNfunction_sb_sLdR::synapse0x1a82030() {
   return (neuron0x1a7dfa0()*0.00337501);
}

double NNfunction_sb_sLdR::synapse0x1a82070() {
   return (neuron0x1a7e2e0()*-0.00275264);
}

double NNfunction_sb_sLdR::synapse0x1a820b0() {
   return (neuron0x1a7e620()*-0.0499682);
}

double NNfunction_sb_sLdR::synapse0x1a81b40() {
   return (neuron0x1a7e960()*-0.0277246);
}

double NNfunction_sb_sLdR::synapse0x1a81b80() {
   return (neuron0x1a7eec0()*-0.259389);
}

double NNfunction_sb_sLdR::synapse0x183aac0() {
   return (neuron0x1a7f0e0()*0.00887261);
}

double NNfunction_sb_sLdR::synapse0x183ab00() {
   return (neuron0x1a7f420()*-0.000661199);
}

double NNfunction_sb_sLdR::synapse0x1a6a5f0() {
   return (neuron0x1a7f760()*-0.00382583);
}

double NNfunction_sb_sLdR::synapse0x1a6a630() {
   return (neuron0x1a7faa0()*-0.016035);
}

double NNfunction_sb_sLdR::synapse0x1a6a670() {
   return (neuron0x1a7fde0()*-0.00941449);
}

double NNfunction_sb_sLdR::synapse0x1a7b4a0() {
   return (neuron0x1a80120()*-0.0114411);
}

double NNfunction_sb_sLdR::synapse0x1a81600() {
   return (neuron0x1a7b560()*-0.050155);
}

double NNfunction_sb_sLdR::synapse0x1a7b4e0() {
   return (neuron0x1a7b8a0()*-0.0610497);
}

double NNfunction_sb_sLdR::synapse0x1a7b520() {
   return (neuron0x1a7bbe0()*-0.00966869);
}

double NNfunction_sb_sLdR::synapse0x1a82200() {
   return (neuron0x1a7bf20()*1.2083);
}

double NNfunction_sb_sLdR::synapse0x1a82240() {
   return (neuron0x1a7c260()*0.0467442);
}

double NNfunction_sb_sLdR::synapse0x1a82280() {
   return (neuron0x1a7c5a0()*0.0457883);
}

double NNfunction_sb_sLdR::synapse0x1a822c0() {
   return (neuron0x1a7c8e0()*-0.0213431);
}

double NNfunction_sb_sLdR::synapse0x1a82300() {
   return (neuron0x1a7cc20()*-0.0352206);
}

double NNfunction_sb_sLdR::synapse0x1a82340() {
   return (neuron0x1a7cf60()*0.17057);
}

double NNfunction_sb_sLdR::synapse0x1a82380() {
   return (neuron0x1a7d2a0()*0.0620055);
}

double NNfunction_sb_sLdR::synapse0x1a823c0() {
   return (neuron0x1a7d5e0()*0.00442407);
}

double NNfunction_sb_sLdR::synapse0x1a82400() {
   return (neuron0x1a7d920()*-0.0982919);
}

double NNfunction_sb_sLdR::synapse0x1a82440() {
   return (neuron0x1a7dc60()*1.79806);
}

double NNfunction_sb_sLdR::synapse0x1a82480() {
   return (neuron0x1a7dfa0()*-0.0110481);
}

double NNfunction_sb_sLdR::synapse0x1a824c0() {
   return (neuron0x1a7e2e0()*0.0365348);
}

double NNfunction_sb_sLdR::synapse0x1a82500() {
   return (neuron0x1a7e620()*-0.0766644);
}

double NNfunction_sb_sLdR::synapse0x1a81450() {
   return (neuron0x1a7e960()*0.0266457);
}

double NNfunction_sb_sLdR::synapse0x1a81490() {
   return (neuron0x1a7eec0()*-1.17519);
}

double NNfunction_sb_sLdR::synapse0x1a82650() {
   return (neuron0x1a7f0e0()*-0.0580342);
}

double NNfunction_sb_sLdR::synapse0x1a82690() {
   return (neuron0x1a7f420()*-0.0386812);
}

double NNfunction_sb_sLdR::synapse0x1a826d0() {
   return (neuron0x1a7f760()*0.0689241);
}

double NNfunction_sb_sLdR::synapse0x1a82710() {
   return (neuron0x1a7faa0()*-0.00038872);
}

double NNfunction_sb_sLdR::synapse0x1a82750() {
   return (neuron0x1a7fde0()*0.054098);
}

double NNfunction_sb_sLdR::synapse0x1a82790() {
   return (neuron0x1a80120()*-0.0632233);
}

double NNfunction_sb_sLdR::synapse0x1a82b10() {
   return (neuron0x1a7b560()*-0.298897);
}

double NNfunction_sb_sLdR::synapse0x1a82b50() {
   return (neuron0x1a7b8a0()*-0.128176);
}

double NNfunction_sb_sLdR::synapse0x1a82b90() {
   return (neuron0x1a7bbe0()*-0.213412);
}

double NNfunction_sb_sLdR::synapse0x1a82bd0() {
   return (neuron0x1a7bf20()*-0.0110131);
}

double NNfunction_sb_sLdR::synapse0x1a82c10() {
   return (neuron0x1a7c260()*0.59791);
}

double NNfunction_sb_sLdR::synapse0x1a82c50() {
   return (neuron0x1a7c5a0()*1.0167);
}

double NNfunction_sb_sLdR::synapse0x1a82c90() {
   return (neuron0x1a7c8e0()*0.269329);
}

double NNfunction_sb_sLdR::synapse0x1a82cd0() {
   return (neuron0x1a7cc20()*-0.231817);
}

double NNfunction_sb_sLdR::synapse0x1a82d10() {
   return (neuron0x1a7cf60()*0.937522);
}

double NNfunction_sb_sLdR::synapse0x1a82d50() {
   return (neuron0x1a7d2a0()*-0.320592);
}

double NNfunction_sb_sLdR::synapse0x1a82d90() {
   return (neuron0x1a7d5e0()*0.0640048);
}

double NNfunction_sb_sLdR::synapse0x1a82dd0() {
   return (neuron0x1a7d920()*-0.241689);
}

double NNfunction_sb_sLdR::synapse0x1a82e10() {
   return (neuron0x1a7dc60()*-0.191331);
}

double NNfunction_sb_sLdR::synapse0x1a82e50() {
   return (neuron0x1a7dfa0()*-0.816526);
}

double NNfunction_sb_sLdR::synapse0x1a82e90() {
   return (neuron0x1a7e2e0()*-0.274347);
}

double NNfunction_sb_sLdR::synapse0x1a82ed0() {
   return (neuron0x1a7e620()*-0.500879);
}

double NNfunction_sb_sLdR::synapse0x1a82960() {
   return (neuron0x1a7e960()*-0.117345);
}

double NNfunction_sb_sLdR::synapse0x1a829a0() {
   return (neuron0x1a7eec0()*-0.405541);
}

double NNfunction_sb_sLdR::synapse0x1a83020() {
   return (neuron0x1a7f0e0()*0.42932);
}

double NNfunction_sb_sLdR::synapse0x1a83060() {
   return (neuron0x1a7f420()*0.20455);
}

double NNfunction_sb_sLdR::synapse0x1a830a0() {
   return (neuron0x1a7f760()*-0.107079);
}

double NNfunction_sb_sLdR::synapse0x1a830e0() {
   return (neuron0x1a7faa0()*-0.340495);
}

double NNfunction_sb_sLdR::synapse0x1a83120() {
   return (neuron0x1a7fde0()*-0.0780775);
}

double NNfunction_sb_sLdR::synapse0x1a83160() {
   return (neuron0x1a80120()*0.404098);
}

double NNfunction_sb_sLdR::synapse0x1a834e0() {
   return (neuron0x1a7b560()*0.377719);
}

double NNfunction_sb_sLdR::synapse0x1a83520() {
   return (neuron0x1a7b8a0()*-0.0425033);
}

double NNfunction_sb_sLdR::synapse0x1a83560() {
   return (neuron0x1a7bbe0()*-0.28967);
}

double NNfunction_sb_sLdR::synapse0x1a835a0() {
   return (neuron0x1a7bf20()*0.554998);
}

double NNfunction_sb_sLdR::synapse0x1a835e0() {
   return (neuron0x1a7c260()*-0.153041);
}

double NNfunction_sb_sLdR::synapse0x1a83620() {
   return (neuron0x1a7c5a0()*-0.233911);
}

double NNfunction_sb_sLdR::synapse0x1a83660() {
   return (neuron0x1a7c8e0()*-0.685855);
}

double NNfunction_sb_sLdR::synapse0x1a836a0() {
   return (neuron0x1a7cc20()*-0.00553644);
}

double NNfunction_sb_sLdR::synapse0x1a836e0() {
   return (neuron0x1a7cf60()*0.479585);
}

double NNfunction_sb_sLdR::synapse0x183ae30() {
   return (neuron0x1a7d2a0()*0.0956368);
}

double NNfunction_sb_sLdR::synapse0x183ae70() {
   return (neuron0x1a7d5e0()*-0.488693);
}

double NNfunction_sb_sLdR::synapse0x183aeb0() {
   return (neuron0x1a7d920()*-0.356336);
}

double NNfunction_sb_sLdR::synapse0x183aef0() {
   return (neuron0x1a7dc60()*0.339048);
}

double NNfunction_sb_sLdR::synapse0x183af30() {
   return (neuron0x1a7dfa0()*-0.195124);
}

double NNfunction_sb_sLdR::synapse0x183af70() {
   return (neuron0x1a7e2e0()*-0.041624);
}

double NNfunction_sb_sLdR::synapse0x183afb0() {
   return (neuron0x1a7e620()*-0.0964452);
}

double NNfunction_sb_sLdR::synapse0x1a83330() {
   return (neuron0x1a7e960()*-0.483607);
}

double NNfunction_sb_sLdR::synapse0x1a83370() {
   return (neuron0x1a7eec0()*0.0737283);
}

double NNfunction_sb_sLdR::synapse0x183b100() {
   return (neuron0x1a7f0e0()*0.0384874);
}

double NNfunction_sb_sLdR::synapse0x183b140() {
   return (neuron0x1a7f420()*0.012992);
}

double NNfunction_sb_sLdR::synapse0x183b180() {
   return (neuron0x1a7f760()*-0.00325453);
}

double NNfunction_sb_sLdR::synapse0x183b1c0() {
   return (neuron0x1a7faa0()*0.286231);
}

double NNfunction_sb_sLdR::synapse0x183b200() {
   return (neuron0x1a7fde0()*-0.00864085);
}

double NNfunction_sb_sLdR::synapse0x1a83f30() {
   return (neuron0x1a80120()*-0.31497);
}

double NNfunction_sb_sLdR::synapse0x1a842b0() {
   return (neuron0x1a7b560()*-0.422755);
}

double NNfunction_sb_sLdR::synapse0x1a842f0() {
   return (neuron0x1a7b8a0()*-0.0255766);
}

double NNfunction_sb_sLdR::synapse0x1a84330() {
   return (neuron0x1a7bbe0()*-0.190785);
}

double NNfunction_sb_sLdR::synapse0x1a84370() {
   return (neuron0x1a7bf20()*-0.492182);
}

double NNfunction_sb_sLdR::synapse0x1a843b0() {
   return (neuron0x1a7c260()*0.0846181);
}

double NNfunction_sb_sLdR::synapse0x1a843f0() {
   return (neuron0x1a7c5a0()*0.461161);
}

double NNfunction_sb_sLdR::synapse0x1a84430() {
   return (neuron0x1a7c8e0()*-0.230859);
}

double NNfunction_sb_sLdR::synapse0x1a84470() {
   return (neuron0x1a7cc20()*0.184415);
}

double NNfunction_sb_sLdR::synapse0x1a844b0() {
   return (neuron0x1a7cf60()*-0.0964657);
}

double NNfunction_sb_sLdR::synapse0x1a844f0() {
   return (neuron0x1a7d2a0()*-0.0901916);
}

double NNfunction_sb_sLdR::synapse0x1a84530() {
   return (neuron0x1a7d5e0()*0.207103);
}

double NNfunction_sb_sLdR::synapse0x1a84570() {
   return (neuron0x1a7d920()*0.0919422);
}

double NNfunction_sb_sLdR::synapse0x1a845b0() {
   return (neuron0x1a7dc60()*-1.17659);
}

double NNfunction_sb_sLdR::synapse0x1a845f0() {
   return (neuron0x1a7dfa0()*-0.00993177);
}

double NNfunction_sb_sLdR::synapse0x1a84630() {
   return (neuron0x1a7e2e0()*0.134322);
}

double NNfunction_sb_sLdR::synapse0x1a84670() {
   return (neuron0x1a7e620()*0.361534);
}

double NNfunction_sb_sLdR::synapse0x1a84100() {
   return (neuron0x1a7e960()*-0.422314);
}

double NNfunction_sb_sLdR::synapse0x1a84140() {
   return (neuron0x1a7eec0()*0.398641);
}

double NNfunction_sb_sLdR::synapse0x1a847c0() {
   return (neuron0x1a7f0e0()*-0.0727337);
}

double NNfunction_sb_sLdR::synapse0x1a84800() {
   return (neuron0x1a7f420()*-0.212647);
}

double NNfunction_sb_sLdR::synapse0x1a84840() {
   return (neuron0x1a7f760()*-0.131729);
}

double NNfunction_sb_sLdR::synapse0x1a84880() {
   return (neuron0x1a7faa0()*0.0251856);
}

double NNfunction_sb_sLdR::synapse0x1a848c0() {
   return (neuron0x1a7fde0()*0.152096);
}

double NNfunction_sb_sLdR::synapse0x1a84900() {
   return (neuron0x1a80120()*-0.0454862);
}

double NNfunction_sb_sLdR::synapse0x1a84c80() {
   return (neuron0x1a7b560()*0.0766811);
}

double NNfunction_sb_sLdR::synapse0x1a84cc0() {
   return (neuron0x1a7b8a0()*0.201118);
}

double NNfunction_sb_sLdR::synapse0x1a84d00() {
   return (neuron0x1a7bbe0()*0.146971);
}

double NNfunction_sb_sLdR::synapse0x1a84d40() {
   return (neuron0x1a7bf20()*1.02111);
}

double NNfunction_sb_sLdR::synapse0x1a84d80() {
   return (neuron0x1a7c260()*-0.0163473);
}

double NNfunction_sb_sLdR::synapse0x1a84dc0() {
   return (neuron0x1a7c5a0()*0.0261394);
}

double NNfunction_sb_sLdR::synapse0x1a84e00() {
   return (neuron0x1a7c8e0()*-0.181861);
}

double NNfunction_sb_sLdR::synapse0x1a84e40() {
   return (neuron0x1a7cc20()*-0.0855252);
}

double NNfunction_sb_sLdR::synapse0x1a84e80() {
   return (neuron0x1a7cf60()*0.00710332);
}

double NNfunction_sb_sLdR::synapse0x1a84ec0() {
   return (neuron0x1a7d2a0()*0.0338217);
}

double NNfunction_sb_sLdR::synapse0x1a84f00() {
   return (neuron0x1a7d5e0()*0.0720094);
}

double NNfunction_sb_sLdR::synapse0x1a84f40() {
   return (neuron0x1a7d920()*0.0175948);
}

double NNfunction_sb_sLdR::synapse0x1a84f80() {
   return (neuron0x1a7dc60()*0.0433719);
}

double NNfunction_sb_sLdR::synapse0x1a84fc0() {
   return (neuron0x1a7dfa0()*-0.093681);
}

double NNfunction_sb_sLdR::synapse0x1a85000() {
   return (neuron0x1a7e2e0()*-0.0533591);
}

double NNfunction_sb_sLdR::synapse0x1a85040() {
   return (neuron0x1a7e620()*0.230361);
}

double NNfunction_sb_sLdR::synapse0x1a84ad0() {
   return (neuron0x1a7e960()*-0.0541067);
}

double NNfunction_sb_sLdR::synapse0x1a84b10() {
   return (neuron0x1a7eec0()*-0.0237711);
}

double NNfunction_sb_sLdR::synapse0x1a85190() {
   return (neuron0x1a7f0e0()*0.070374);
}

double NNfunction_sb_sLdR::synapse0x1a851d0() {
   return (neuron0x1a7f420()*-0.000283637);
}

double NNfunction_sb_sLdR::synapse0x1a85210() {
   return (neuron0x1a7f760()*-0.0326993);
}

double NNfunction_sb_sLdR::synapse0x1a85250() {
   return (neuron0x1a7faa0()*0.0288901);
}

double NNfunction_sb_sLdR::synapse0x1a85290() {
   return (neuron0x1a7fde0()*0.00959658);
}

double NNfunction_sb_sLdR::synapse0x1a852d0() {
   return (neuron0x1a80120()*0.000429868);
}

double NNfunction_sb_sLdR::synapse0x1a7edb0() {
   return (neuron0x1a7b560()*-0.0113109);
}

double NNfunction_sb_sLdR::synapse0x1a7edf0() {
   return (neuron0x1a7b8a0()*0.0491801);
}

double NNfunction_sb_sLdR::synapse0x1a7ee30() {
   return (neuron0x1a7bbe0()*-1.12887);
}

double NNfunction_sb_sLdR::synapse0x1a7ee70() {
   return (neuron0x1a7bf20()*-0.0394449);
}

double NNfunction_sb_sLdR::synapse0x1a85860() {
   return (neuron0x1a7c260()*0.00240535);
}

double NNfunction_sb_sLdR::synapse0x1a858a0() {
   return (neuron0x1a7c5a0()*0.00439906);
}

double NNfunction_sb_sLdR::synapse0x1a858e0() {
   return (neuron0x1a7c8e0()*-0.0104796);
}

double NNfunction_sb_sLdR::synapse0x1a85920() {
   return (neuron0x1a7cc20()*-0.00615689);
}

double NNfunction_sb_sLdR::synapse0x1a85960() {
   return (neuron0x1a7cf60()*0.013814);
}

double NNfunction_sb_sLdR::synapse0x1a859a0() {
   return (neuron0x1a7d2a0()*0.0396661);
}

double NNfunction_sb_sLdR::synapse0x1a859e0() {
   return (neuron0x1a7d5e0()*0.0217061);
}

double NNfunction_sb_sLdR::synapse0x1a85a20() {
   return (neuron0x1a7d920()*-0.0107466);
}

double NNfunction_sb_sLdR::synapse0x1a85a60() {
   return (neuron0x1a7dc60()*0.877636);
}

double NNfunction_sb_sLdR::synapse0x1a85aa0() {
   return (neuron0x1a7dfa0()*-0.0478771);
}

double NNfunction_sb_sLdR::synapse0x1a85ae0() {
   return (neuron0x1a7e2e0()*-0.029281);
}

double NNfunction_sb_sLdR::synapse0x1a85b20() {
   return (neuron0x1a7e620()*0.0369987);
}

double NNfunction_sb_sLdR::synapse0x1a854a0() {
   return (neuron0x1a7e960()*-0.0358392);
}

double NNfunction_sb_sLdR::synapse0x1a854e0() {
   return (neuron0x1a7eec0()*0.0346531);
}

double NNfunction_sb_sLdR::synapse0x1a85c70() {
   return (neuron0x1a7f0e0()*-0.00965656);
}

double NNfunction_sb_sLdR::synapse0x1a85cb0() {
   return (neuron0x1a7f420()*-0.00151492);
}

double NNfunction_sb_sLdR::synapse0x1a85cf0() {
   return (neuron0x1a7f760()*-0.0204337);
}

double NNfunction_sb_sLdR::synapse0x1a85d30() {
   return (neuron0x1a7faa0()*-0.000118642);
}

double NNfunction_sb_sLdR::synapse0x1a85d70() {
   return (neuron0x1a7fde0()*-0.00857374);
}

double NNfunction_sb_sLdR::synapse0x1a85db0() {
   return (neuron0x1a80120()*-0.00530422);
}

double NNfunction_sb_sLdR::synapse0x1a86130() {
   return (neuron0x1a7b560()*0.135443);
}

double NNfunction_sb_sLdR::synapse0x1a86170() {
   return (neuron0x1a7b8a0()*-0.181562);
}

double NNfunction_sb_sLdR::synapse0x1a861b0() {
   return (neuron0x1a7bbe0()*-0.281416);
}

double NNfunction_sb_sLdR::synapse0x1a861f0() {
   return (neuron0x1a7bf20()*0.141188);
}

double NNfunction_sb_sLdR::synapse0x1a86230() {
   return (neuron0x1a7c260()*-0.0330437);
}

double NNfunction_sb_sLdR::synapse0x1a86270() {
   return (neuron0x1a7c5a0()*-0.160365);
}

double NNfunction_sb_sLdR::synapse0x1a862b0() {
   return (neuron0x1a7c8e0()*0.0806917);
}

double NNfunction_sb_sLdR::synapse0x1a862f0() {
   return (neuron0x1a7cc20()*0.000663009);
}

double NNfunction_sb_sLdR::synapse0x1a86330() {
   return (neuron0x1a7cf60()*-0.105621);
}

double NNfunction_sb_sLdR::synapse0x1a86370() {
   return (neuron0x1a7d2a0()*0.117446);
}

double NNfunction_sb_sLdR::synapse0x1a863b0() {
   return (neuron0x1a7d5e0()*0.157003);
}

double NNfunction_sb_sLdR::synapse0x1a863f0() {
   return (neuron0x1a7d920()*0.339204);
}

double NNfunction_sb_sLdR::synapse0x1a86430() {
   return (neuron0x1a7dc60()*0.605737);
}

double NNfunction_sb_sLdR::synapse0x1a86470() {
   return (neuron0x1a7dfa0()*0.0230203);
}

double NNfunction_sb_sLdR::synapse0x1a864b0() {
   return (neuron0x1a7e2e0()*0.70035);
}

double NNfunction_sb_sLdR::synapse0x1a864f0() {
   return (neuron0x1a7e620()*1.13873);
}

double NNfunction_sb_sLdR::synapse0x1a85f80() {
   return (neuron0x1a7e960()*-0.230651);
}

double NNfunction_sb_sLdR::synapse0x1a85fc0() {
   return (neuron0x1a7eec0()*-0.362328);
}

double NNfunction_sb_sLdR::synapse0x1a86640() {
   return (neuron0x1a7f0e0()*0.160784);
}

double NNfunction_sb_sLdR::synapse0x1a86680() {
   return (neuron0x1a7f420()*-0.126719);
}

double NNfunction_sb_sLdR::synapse0x1a866c0() {
   return (neuron0x1a7f760()*0.035483);
}

double NNfunction_sb_sLdR::synapse0x1a86700() {
   return (neuron0x1a7faa0()*0.244791);
}

double NNfunction_sb_sLdR::synapse0x1a86740() {
   return (neuron0x1a7fde0()*0.211599);
}

double NNfunction_sb_sLdR::synapse0x1a86780() {
   return (neuron0x1a80120()*-0.055259);
}

double NNfunction_sb_sLdR::synapse0x1a86b00() {
   return (neuron0x1a7b560()*-0.45837);
}

double NNfunction_sb_sLdR::synapse0x1a86b40() {
   return (neuron0x1a7b8a0()*-0.295457);
}

double NNfunction_sb_sLdR::synapse0x1a86b80() {
   return (neuron0x1a7bbe0()*-1.16756);
}

double NNfunction_sb_sLdR::synapse0x1a86bc0() {
   return (neuron0x1a7bf20()*-0.684783);
}

double NNfunction_sb_sLdR::synapse0x1a86c00() {
   return (neuron0x1a7c260()*0.0992737);
}

double NNfunction_sb_sLdR::synapse0x1a86c40() {
   return (neuron0x1a7c5a0()*0.358622);
}

double NNfunction_sb_sLdR::synapse0x1a86c80() {
   return (neuron0x1a7c8e0()*0.454556);
}

double NNfunction_sb_sLdR::synapse0x1a86cc0() {
   return (neuron0x1a7cc20()*0.0873445);
}

double NNfunction_sb_sLdR::synapse0x1a86d00() {
   return (neuron0x1a7cf60()*0.236881);
}

double NNfunction_sb_sLdR::synapse0x1a86d40() {
   return (neuron0x1a7d2a0()*0.14172);
}

double NNfunction_sb_sLdR::synapse0x1a86d80() {
   return (neuron0x1a7d5e0()*-0.108049);
}

double NNfunction_sb_sLdR::synapse0x1a86dc0() {
   return (neuron0x1a7d920()*-0.649803);
}

double NNfunction_sb_sLdR::synapse0x1a86e00() {
   return (neuron0x1a7dc60()*-1.05212);
}

double NNfunction_sb_sLdR::synapse0x1a86e40() {
   return (neuron0x1a7dfa0()*0.132617);
}

double NNfunction_sb_sLdR::synapse0x1a86e80() {
   return (neuron0x1a7e2e0()*0.0838974);
}

double NNfunction_sb_sLdR::synapse0x1a86ec0() {
   return (neuron0x1a7e620()*0.389086);
}

double NNfunction_sb_sLdR::synapse0x1a86950() {
   return (neuron0x1a7e960()*-0.0150048);
}

double NNfunction_sb_sLdR::synapse0x1a86990() {
   return (neuron0x1a7eec0()*0.111755);
}

double NNfunction_sb_sLdR::synapse0x1a83720() {
   return (neuron0x1a7f0e0()*-0.213053);
}

double NNfunction_sb_sLdR::synapse0x1a83760() {
   return (neuron0x1a7f420()*0.246903);
}

double NNfunction_sb_sLdR::synapse0x1a837a0() {
   return (neuron0x1a7f760()*0.186831);
}

double NNfunction_sb_sLdR::synapse0x1a837e0() {
   return (neuron0x1a7faa0()*-0.195717);
}

double NNfunction_sb_sLdR::synapse0x1a83820() {
   return (neuron0x1a7fde0()*0.0318732);
}

double NNfunction_sb_sLdR::synapse0x1a83860() {
   return (neuron0x1a80120()*0.131309);
}

double NNfunction_sb_sLdR::synapse0x1a83be0() {
   return (neuron0x1a7b560()*-0.484425);
}

double NNfunction_sb_sLdR::synapse0x1a83c20() {
   return (neuron0x1a7b8a0()*0.51733);
}

double NNfunction_sb_sLdR::synapse0x1a83c60() {
   return (neuron0x1a7bbe0()*0.358298);
}

double NNfunction_sb_sLdR::synapse0x1a83ca0() {
   return (neuron0x1a7bf20()*0.0444332);
}

double NNfunction_sb_sLdR::synapse0x1a83ce0() {
   return (neuron0x1a7c260()*0.167264);
}

double NNfunction_sb_sLdR::synapse0x1a83d20() {
   return (neuron0x1a7c5a0()*-0.360735);
}

double NNfunction_sb_sLdR::synapse0x1a83d60() {
   return (neuron0x1a7c8e0()*0.23842);
}

double NNfunction_sb_sLdR::synapse0x1a83da0() {
   return (neuron0x1a7cc20()*0.560655);
}

double NNfunction_sb_sLdR::synapse0x1a83de0() {
   return (neuron0x1a7cf60()*-0.122236);
}

double NNfunction_sb_sLdR::synapse0x1a83e20() {
   return (neuron0x1a7d2a0()*-0.333831);
}

double NNfunction_sb_sLdR::synapse0x1a83e60() {
   return (neuron0x1a7d5e0()*-0.492151);
}

double NNfunction_sb_sLdR::synapse0x1a83ea0() {
   return (neuron0x1a7d920()*0.218286);
}

double NNfunction_sb_sLdR::synapse0x1a83ee0() {
   return (neuron0x1a7dc60()*0.249236);
}

double NNfunction_sb_sLdR::synapse0x1a88020() {
   return (neuron0x1a7dfa0()*-0.0915323);
}

double NNfunction_sb_sLdR::synapse0x1a88060() {
   return (neuron0x1a7e2e0()*0.361841);
}

double NNfunction_sb_sLdR::synapse0x1a880a0() {
   return (neuron0x1a7e620()*0.394659);
}

double NNfunction_sb_sLdR::synapse0x1a83a30() {
   return (neuron0x1a7e960()*-0.139359);
}

double NNfunction_sb_sLdR::synapse0x1a83a70() {
   return (neuron0x1a7eec0()*0.268132);
}

double NNfunction_sb_sLdR::synapse0x1a881f0() {
   return (neuron0x1a7f0e0()*-0.127942);
}

double NNfunction_sb_sLdR::synapse0x1a88230() {
   return (neuron0x1a7f420()*0.436433);
}

double NNfunction_sb_sLdR::synapse0x1a88270() {
   return (neuron0x1a7f760()*-0.0636635);
}

double NNfunction_sb_sLdR::synapse0x1a882b0() {
   return (neuron0x1a7faa0()*0.167502);
}

double NNfunction_sb_sLdR::synapse0x1a882f0() {
   return (neuron0x1a7fde0()*-0.025423);
}

double NNfunction_sb_sLdR::synapse0x1a88330() {
   return (neuron0x1a80120()*0.345145);
}

double NNfunction_sb_sLdR::synapse0x1a886b0() {
   return (neuron0x1a7b560()*0.0323418);
}

double NNfunction_sb_sLdR::synapse0x1a886f0() {
   return (neuron0x1a7b8a0()*0.00145293);
}

double NNfunction_sb_sLdR::synapse0x1a88730() {
   return (neuron0x1a7bbe0()*0.00919594);
}

double NNfunction_sb_sLdR::synapse0x1a88770() {
   return (neuron0x1a7bf20()*-2.05911);
}

double NNfunction_sb_sLdR::synapse0x1a887b0() {
   return (neuron0x1a7c260()*0.0194407);
}

double NNfunction_sb_sLdR::synapse0x1a887f0() {
   return (neuron0x1a7c5a0()*0.0184381);
}

double NNfunction_sb_sLdR::synapse0x1a88830() {
   return (neuron0x1a7c8e0()*-0.00322335);
}

double NNfunction_sb_sLdR::synapse0x1a88870() {
   return (neuron0x1a7cc20()*0.0315202);
}

double NNfunction_sb_sLdR::synapse0x1a888b0() {
   return (neuron0x1a7cf60()*-0.0326012);
}

double NNfunction_sb_sLdR::synapse0x1a888f0() {
   return (neuron0x1a7d2a0()*-0.00409544);
}

double NNfunction_sb_sLdR::synapse0x1a88930() {
   return (neuron0x1a7d5e0()*0.011315);
}

double NNfunction_sb_sLdR::synapse0x1a88970() {
   return (neuron0x1a7d920()*-0.00699517);
}

double NNfunction_sb_sLdR::synapse0x1a889b0() {
   return (neuron0x1a7dc60()*1.11645);
}

double NNfunction_sb_sLdR::synapse0x1a889f0() {
   return (neuron0x1a7dfa0()*-0.0105409);
}

double NNfunction_sb_sLdR::synapse0x1a88a30() {
   return (neuron0x1a7e2e0()*-0.0452967);
}

double NNfunction_sb_sLdR::synapse0x1a88a70() {
   return (neuron0x1a7e620()*0.0347873);
}

double NNfunction_sb_sLdR::synapse0x1a88500() {
   return (neuron0x1a7e960()*-0.021719);
}

double NNfunction_sb_sLdR::synapse0x1a88540() {
   return (neuron0x1a7eec0()*-0.407101);
}

double NNfunction_sb_sLdR::synapse0x1a88bc0() {
   return (neuron0x1a7f0e0()*0.0069095);
}

double NNfunction_sb_sLdR::synapse0x1a88c00() {
   return (neuron0x1a7f420()*-0.0132564);
}

double NNfunction_sb_sLdR::synapse0x1a88c40() {
   return (neuron0x1a7f760()*-0.00632477);
}

double NNfunction_sb_sLdR::synapse0x1a88c80() {
   return (neuron0x1a7faa0()*-0.0200879);
}

double NNfunction_sb_sLdR::synapse0x1a88cc0() {
   return (neuron0x1a7fde0()*-0.00995539);
}

double NNfunction_sb_sLdR::synapse0x1a88d00() {
   return (neuron0x1a80120()*0.00559511);
}

double NNfunction_sb_sLdR::synapse0x1a89080() {
   return (neuron0x1a7b560()*-0.355777);
}

double NNfunction_sb_sLdR::synapse0x1a890c0() {
   return (neuron0x1a7b8a0()*0.596771);
}

double NNfunction_sb_sLdR::synapse0x1a89100() {
   return (neuron0x1a7bbe0()*-0.0430294);
}

double NNfunction_sb_sLdR::synapse0x1a89140() {
   return (neuron0x1a7bf20()*-0.925121);
}

double NNfunction_sb_sLdR::synapse0x1a89180() {
   return (neuron0x1a7c260()*-0.0356736);
}

double NNfunction_sb_sLdR::synapse0x1a891c0() {
   return (neuron0x1a7c5a0()*-0.0280326);
}

double NNfunction_sb_sLdR::synapse0x1a89200() {
   return (neuron0x1a7c8e0()*-0.524923);
}

double NNfunction_sb_sLdR::synapse0x1a89240() {
   return (neuron0x1a7cc20()*0.641534);
}

double NNfunction_sb_sLdR::synapse0x1a89280() {
   return (neuron0x1a7cf60()*-0.155837);
}

double NNfunction_sb_sLdR::synapse0x1a892c0() {
   return (neuron0x1a7d2a0()*-0.788661);
}

double NNfunction_sb_sLdR::synapse0x1a89300() {
   return (neuron0x1a7d5e0()*-0.105796);
}

double NNfunction_sb_sLdR::synapse0x1a89340() {
   return (neuron0x1a7d920()*0.157443);
}

double NNfunction_sb_sLdR::synapse0x1a89380() {
   return (neuron0x1a7dc60()*0.2456);
}

double NNfunction_sb_sLdR::synapse0x1a893c0() {
   return (neuron0x1a7dfa0()*-0.379222);
}

double NNfunction_sb_sLdR::synapse0x1a89400() {
   return (neuron0x1a7e2e0()*-0.121476);
}

double NNfunction_sb_sLdR::synapse0x1a89440() {
   return (neuron0x1a7e620()*-0.420851);
}

double NNfunction_sb_sLdR::synapse0x1a88ed0() {
   return (neuron0x1a7e960()*-0.0780809);
}

double NNfunction_sb_sLdR::synapse0x1a88f10() {
   return (neuron0x1a7eec0()*-0.126525);
}

double NNfunction_sb_sLdR::synapse0x1a89590() {
   return (neuron0x1a7f0e0()*0.167557);
}

double NNfunction_sb_sLdR::synapse0x1a895d0() {
   return (neuron0x1a7f420()*0.0563675);
}

double NNfunction_sb_sLdR::synapse0x1a89610() {
   return (neuron0x1a7f760()*-0.335656);
}

double NNfunction_sb_sLdR::synapse0x1a89650() {
   return (neuron0x1a7faa0()*-0.359774);
}

double NNfunction_sb_sLdR::synapse0x1a89690() {
   return (neuron0x1a7fde0()*-0.251221);
}

double NNfunction_sb_sLdR::synapse0x1a896d0() {
   return (neuron0x1a80120()*0.115165);
}

double NNfunction_sb_sLdR::synapse0x1a89a50() {
   return (neuron0x1a7b560()*-0.00888275);
}

double NNfunction_sb_sLdR::synapse0x1a89a90() {
   return (neuron0x1a7b8a0()*-0.00545011);
}

double NNfunction_sb_sLdR::synapse0x1a89ad0() {
   return (neuron0x1a7bbe0()*0.0147087);
}

double NNfunction_sb_sLdR::synapse0x1a89b10() {
   return (neuron0x1a7bf20()*4.55359);
}

double NNfunction_sb_sLdR::synapse0x1a89b50() {
   return (neuron0x1a7c260()*-0.0153744);
}

double NNfunction_sb_sLdR::synapse0x1a89b90() {
   return (neuron0x1a7c5a0()*-0.00877721);
}

double NNfunction_sb_sLdR::synapse0x1a89bd0() {
   return (neuron0x1a7c8e0()*-0.0217658);
}

double NNfunction_sb_sLdR::synapse0x1a89c10() {
   return (neuron0x1a7cc20()*-0.0181791);
}

double NNfunction_sb_sLdR::synapse0x1a89c50() {
   return (neuron0x1a7cf60()*0.0533474);
}

double NNfunction_sb_sLdR::synapse0x1a89c90() {
   return (neuron0x1a7d2a0()*-0.0127633);
}

double NNfunction_sb_sLdR::synapse0x1a89cd0() {
   return (neuron0x1a7d5e0()*-0.00316046);
}

double NNfunction_sb_sLdR::synapse0x1a89d10() {
   return (neuron0x1a7d920()*-0.0446936);
}

double NNfunction_sb_sLdR::synapse0x1a89d50() {
   return (neuron0x1a7dc60()*0.425269);
}

double NNfunction_sb_sLdR::synapse0x1a89d90() {
   return (neuron0x1a7dfa0()*0.0186565);
}

double NNfunction_sb_sLdR::synapse0x1a89dd0() {
   return (neuron0x1a7e2e0()*0.00728774);
}

double NNfunction_sb_sLdR::synapse0x1a89e10() {
   return (neuron0x1a7e620()*-0.0290711);
}

double NNfunction_sb_sLdR::synapse0x1a898a0() {
   return (neuron0x1a7e960()*0.0319948);
}

double NNfunction_sb_sLdR::synapse0x1a898e0() {
   return (neuron0x1a7eec0()*0.680717);
}

double NNfunction_sb_sLdR::synapse0x1a89f60() {
   return (neuron0x1a7f0e0()*-0.0163164);
}

double NNfunction_sb_sLdR::synapse0x1a89fa0() {
   return (neuron0x1a7f420()*-0.00350257);
}

double NNfunction_sb_sLdR::synapse0x1a89fe0() {
   return (neuron0x1a7f760()*0.0114906);
}

double NNfunction_sb_sLdR::synapse0x1a8a020() {
   return (neuron0x1a7faa0()*0.00533855);
}

double NNfunction_sb_sLdR::synapse0x1a8a060() {
   return (neuron0x1a7fde0()*-0.000990074);
}

double NNfunction_sb_sLdR::synapse0x1a8a0a0() {
   return (neuron0x1a80120()*0.00283503);
}

double NNfunction_sb_sLdR::synapse0x1a8a420() {
   return (neuron0x1a7b560()*0.0773804);
}

double NNfunction_sb_sLdR::synapse0x1a7b780() {
   return (neuron0x1a7b8a0()*0.128819);
}

double NNfunction_sb_sLdR::synapse0x1a7b7c0() {
   return (neuron0x1a7bbe0()*0.215298);
}

double NNfunction_sb_sLdR::synapse0x1a7bac0() {
   return (neuron0x1a7bf20()*-1.10101);
}

double NNfunction_sb_sLdR::synapse0x1a7bb00() {
   return (neuron0x1a7c260()*0.0898461);
}

double NNfunction_sb_sLdR::synapse0x1a7be00() {
   return (neuron0x1a7c5a0()*0.0318683);
}

double NNfunction_sb_sLdR::synapse0x1a7be40() {
   return (neuron0x1a7c8e0()*-0.0218773);
}

double NNfunction_sb_sLdR::synapse0x1a7c140() {
   return (neuron0x1a7cc20()*0.0748745);
}

double NNfunction_sb_sLdR::synapse0x1a7c180() {
   return (neuron0x1a7cf60()*0.0339376);
}

double NNfunction_sb_sLdR::synapse0x1a7c480() {
   return (neuron0x1a7d2a0()*-0.00489239);
}

double NNfunction_sb_sLdR::synapse0x1a7c4c0() {
   return (neuron0x1a7d5e0()*0.0273484);
}

double NNfunction_sb_sLdR::synapse0x1a7c7c0() {
   return (neuron0x1a7d920()*-0.0462885);
}

double NNfunction_sb_sLdR::synapse0x1a7c800() {
   return (neuron0x1a7dc60()*-0.303647);
}

double NNfunction_sb_sLdR::synapse0x1a7cb00() {
   return (neuron0x1a7dfa0()*0.00386374);
}

double NNfunction_sb_sLdR::synapse0x1a7cb40() {
   return (neuron0x1a7e2e0()*0.281906);
}

double NNfunction_sb_sLdR::synapse0x1a7ce40() {
   return (neuron0x1a7e620()*-0.162699);
}

double NNfunction_sb_sLdR::synapse0x1a7ce80() {
   return (neuron0x1a7e960()*-0.00385147);
}

double NNfunction_sb_sLdR::synapse0x1a7d180() {
   return (neuron0x1a7eec0()*-0.110733);
}

double NNfunction_sb_sLdR::synapse0x1a7d1c0() {
   return (neuron0x1a7f0e0()*-0.0299169);
}

double NNfunction_sb_sLdR::synapse0x1a7d4c0() {
   return (neuron0x1a7f420()*0.00167566);
}

double NNfunction_sb_sLdR::synapse0x1a7d500() {
   return (neuron0x1a7f760()*0.0664333);
}

double NNfunction_sb_sLdR::synapse0x1a7d800() {
   return (neuron0x1a7faa0()*-0.0124718);
}

double NNfunction_sb_sLdR::synapse0x1a7d840() {
   return (neuron0x1a7fde0()*-0.0114477);
}

double NNfunction_sb_sLdR::synapse0x1a7db40() {
   return (neuron0x1a80120()*-0.0290346);
}

double NNfunction_sb_sLdR::synapse0x1a7db80() {
   return (neuron0x1a7b560()*-0.150313);
}

double NNfunction_sb_sLdR::synapse0x1a7e840() {
   return (neuron0x1a7b8a0()*-0.149337);
}

double NNfunction_sb_sLdR::synapse0x1a7e880() {
   return (neuron0x1a7bbe0()*0.892301);
}

double NNfunction_sb_sLdR::synapse0x1a8a270() {
   return (neuron0x1a7bf20()*-0.128458);
}

double NNfunction_sb_sLdR::synapse0x1a8a2b0() {
   return (neuron0x1a7c260()*-0.395359);
}

double NNfunction_sb_sLdR::synapse0x1a7eb80() {
   return (neuron0x1a7c5a0()*0.0811932);
}

double NNfunction_sb_sLdR::synapse0x1a7ebc0() {
   return (neuron0x1a7c8e0()*0.886888);
}

double NNfunction_sb_sLdR::synapse0x182cb50() {
   return (neuron0x1a7cc20()*0.438481);
}

double NNfunction_sb_sLdR::synapse0x182cb90() {
   return (neuron0x1a7cf60()*0.150068);
}

double NNfunction_sb_sLdR::synapse0x1a7f300() {
   return (neuron0x1a7d2a0()*0.617832);
}

double NNfunction_sb_sLdR::synapse0x1a7f340() {
   return (neuron0x1a7d5e0()*0.868731);
}

double NNfunction_sb_sLdR::synapse0x1a7f640() {
   return (neuron0x1a7d920()*0.37416);
}

double NNfunction_sb_sLdR::synapse0x1a7f680() {
   return (neuron0x1a7dc60()*0.280021);
}

double NNfunction_sb_sLdR::synapse0x1a7f980() {
   return (neuron0x1a7dfa0()*-1.04069);
}

double NNfunction_sb_sLdR::synapse0x1a7f9c0() {
   return (neuron0x1a7e2e0()*-0.870033);
}

double NNfunction_sb_sLdR::synapse0x1a7fcc0() {
   return (neuron0x1a7e620()*-0.446377);
}

double NNfunction_sb_sLdR::synapse0x1a7fd00() {
   return (neuron0x1a7e960()*-0.620995);
}

double NNfunction_sb_sLdR::synapse0x1a80000() {
   return (neuron0x1a7eec0()*-0.122008);
}

double NNfunction_sb_sLdR::synapse0x1a80040() {
   return (neuron0x1a7f0e0()*0.72588);
}

double NNfunction_sb_sLdR::synapse0x1a80340() {
   return (neuron0x1a7f420()*-0.19577);
}

double NNfunction_sb_sLdR::synapse0x1a80380() {
   return (neuron0x1a7f760()*-0.379008);
}

double NNfunction_sb_sLdR::synapse0x1a7de80() {
   return (neuron0x1a7faa0()*-1.05717);
}

double NNfunction_sb_sLdR::synapse0x1a7dec0() {
   return (neuron0x1a7fde0()*0.370887);
}

double NNfunction_sb_sLdR::synapse0x1a8c190() {
   return (neuron0x1a80120()*-0.0363938);
}

double NNfunction_sb_sLdR::synapse0x1a8c510() {
   return (neuron0x1a7b560()*-0.0173433);
}

double NNfunction_sb_sLdR::synapse0x1a8c550() {
   return (neuron0x1a7b8a0()*0.0547624);
}

double NNfunction_sb_sLdR::synapse0x1a8c590() {
   return (neuron0x1a7bbe0()*-0.207199);
}

double NNfunction_sb_sLdR::synapse0x1a8c5d0() {
   return (neuron0x1a7bf20()*-0.0266047);
}

double NNfunction_sb_sLdR::synapse0x1a8c610() {
   return (neuron0x1a7c260()*-0.0220411);
}

double NNfunction_sb_sLdR::synapse0x1a8c650() {
   return (neuron0x1a7c5a0()*-0.0974827);
}

double NNfunction_sb_sLdR::synapse0x1a8c690() {
   return (neuron0x1a7c8e0()*0.163958);
}

double NNfunction_sb_sLdR::synapse0x1a8c6d0() {
   return (neuron0x1a7cc20()*0.0786612);
}

double NNfunction_sb_sLdR::synapse0x1a8c710() {
   return (neuron0x1a7cf60()*0.105622);
}

double NNfunction_sb_sLdR::synapse0x1a8c750() {
   return (neuron0x1a7d2a0()*-0.187821);
}

double NNfunction_sb_sLdR::synapse0x1a8c790() {
   return (neuron0x1a7d5e0()*-0.0913387);
}

double NNfunction_sb_sLdR::synapse0x1a8c7d0() {
   return (neuron0x1a7d920()*0.0491358);
}

double NNfunction_sb_sLdR::synapse0x1a8c810() {
   return (neuron0x1a7dc60()*1.37879);
}

double NNfunction_sb_sLdR::synapse0x1a8c850() {
   return (neuron0x1a7dfa0()*0.129078);
}

double NNfunction_sb_sLdR::synapse0x1a8c890() {
   return (neuron0x1a7e2e0()*-0.0247779);
}

double NNfunction_sb_sLdR::synapse0x1a8c8d0() {
   return (neuron0x1a7e620()*0.027113);
}

double NNfunction_sb_sLdR::synapse0x1a8c360() {
   return (neuron0x1a7e960()*0.140719);
}

double NNfunction_sb_sLdR::synapse0x1a8c3a0() {
   return (neuron0x1a7eec0()*1.05038);
}

double NNfunction_sb_sLdR::synapse0x1a8ca20() {
   return (neuron0x1a7f0e0()*0.15334);
}

double NNfunction_sb_sLdR::synapse0x1a8ca60() {
   return (neuron0x1a7f420()*0.286359);
}

double NNfunction_sb_sLdR::synapse0x1a8caa0() {
   return (neuron0x1a7f760()*-0.0981065);
}

double NNfunction_sb_sLdR::synapse0x1a8cae0() {
   return (neuron0x1a7faa0()*-0.0736572);
}

double NNfunction_sb_sLdR::synapse0x1a8cb20() {
   return (neuron0x1a7fde0()*-0.0242632);
}

double NNfunction_sb_sLdR::synapse0x1a8cb60() {
   return (neuron0x1a80120()*0.0844334);
}

double NNfunction_sb_sLdR::synapse0x1a8cee0() {
   return (neuron0x1a7b560()*0.227587);
}

double NNfunction_sb_sLdR::synapse0x1a8cf20() {
   return (neuron0x1a7b8a0()*0.190914);
}

double NNfunction_sb_sLdR::synapse0x1a8cf60() {
   return (neuron0x1a7bbe0()*-0.18521);
}

double NNfunction_sb_sLdR::synapse0x1a8cfa0() {
   return (neuron0x1a7bf20()*-0.407011);
}

double NNfunction_sb_sLdR::synapse0x1a8cfe0() {
   return (neuron0x1a7c260()*-0.255978);
}

double NNfunction_sb_sLdR::synapse0x1a8d020() {
   return (neuron0x1a7c5a0()*0.145355);
}

double NNfunction_sb_sLdR::synapse0x1a8d060() {
   return (neuron0x1a7c8e0()*-0.11359);
}

double NNfunction_sb_sLdR::synapse0x1a8d0a0() {
   return (neuron0x1a7cc20()*0.847171);
}

double NNfunction_sb_sLdR::synapse0x1a8d0e0() {
   return (neuron0x1a7cf60()*-0.169678);
}

double NNfunction_sb_sLdR::synapse0x1a8d120() {
   return (neuron0x1a7d2a0()*-0.0802589);
}

double NNfunction_sb_sLdR::synapse0x1a8d160() {
   return (neuron0x1a7d5e0()*0.0809397);
}

double NNfunction_sb_sLdR::synapse0x1a8d1a0() {
   return (neuron0x1a7d920()*0.554649);
}

double NNfunction_sb_sLdR::synapse0x1a8d1e0() {
   return (neuron0x1a7dc60()*-0.581297);
}

double NNfunction_sb_sLdR::synapse0x1a8d220() {
   return (neuron0x1a7dfa0()*0.285415);
}

double NNfunction_sb_sLdR::synapse0x1a8d260() {
   return (neuron0x1a7e2e0()*-0.063067);
}

double NNfunction_sb_sLdR::synapse0x1a8d2a0() {
   return (neuron0x1a7e620()*-0.442111);
}

double NNfunction_sb_sLdR::synapse0x1a8cd30() {
   return (neuron0x1a7e960()*0.402955);
}

double NNfunction_sb_sLdR::synapse0x1a8cd70() {
   return (neuron0x1a7eec0()*-0.697516);
}

double NNfunction_sb_sLdR::synapse0x1a8d3f0() {
   return (neuron0x1a7f0e0()*0.220799);
}

double NNfunction_sb_sLdR::synapse0x1a8d430() {
   return (neuron0x1a7f420()*0.251833);
}

double NNfunction_sb_sLdR::synapse0x1a8d470() {
   return (neuron0x1a7f760()*-0.451291);
}

double NNfunction_sb_sLdR::synapse0x1a8d4b0() {
   return (neuron0x1a7faa0()*0.246482);
}

double NNfunction_sb_sLdR::synapse0x1a8d4f0() {
   return (neuron0x1a7fde0()*0.62013);
}

double NNfunction_sb_sLdR::synapse0x1a8d530() {
   return (neuron0x1a80120()*0.35247);
}

double NNfunction_sb_sLdR::synapse0x1a8d8b0() {
   return (neuron0x1a7b560()*-0.0266884);
}

double NNfunction_sb_sLdR::synapse0x1a8d8f0() {
   return (neuron0x1a7b8a0()*0.40943);
}

double NNfunction_sb_sLdR::synapse0x1a8d930() {
   return (neuron0x1a7bbe0()*0.0394259);
}

double NNfunction_sb_sLdR::synapse0x1a8d970() {
   return (neuron0x1a7bf20()*0.0390965);
}

double NNfunction_sb_sLdR::synapse0x1a8d9b0() {
   return (neuron0x1a7c260()*0.158716);
}

double NNfunction_sb_sLdR::synapse0x1a8d9f0() {
   return (neuron0x1a7c5a0()*-0.319261);
}

double NNfunction_sb_sLdR::synapse0x1a8da30() {
   return (neuron0x1a7c8e0()*0.375378);
}

double NNfunction_sb_sLdR::synapse0x1a8da70() {
   return (neuron0x1a7cc20()*-0.0824964);
}

double NNfunction_sb_sLdR::synapse0x1a8dab0() {
   return (neuron0x1a7cf60()*-0.171891);
}

double NNfunction_sb_sLdR::synapse0x1a8daf0() {
   return (neuron0x1a7d2a0()*-0.140159);
}

double NNfunction_sb_sLdR::synapse0x1a8db30() {
   return (neuron0x1a7d5e0()*0.173393);
}

double NNfunction_sb_sLdR::synapse0x1a8db70() {
   return (neuron0x1a7d920()*-0.256231);
}

double NNfunction_sb_sLdR::synapse0x1a8dbb0() {
   return (neuron0x1a7dc60()*-0.119858);
}

double NNfunction_sb_sLdR::synapse0x1a8dbf0() {
   return (neuron0x1a7dfa0()*0.34534);
}

double NNfunction_sb_sLdR::synapse0x1a8dc30() {
   return (neuron0x1a7e2e0()*-0.244744);
}

double NNfunction_sb_sLdR::synapse0x1a8dc70() {
   return (neuron0x1a7e620()*0.0346392);
}

double NNfunction_sb_sLdR::synapse0x1a8d700() {
   return (neuron0x1a7e960()*0.559013);
}

double NNfunction_sb_sLdR::synapse0x1a8d740() {
   return (neuron0x1a7eec0()*-0.0717474);
}

double NNfunction_sb_sLdR::synapse0x1a8ddc0() {
   return (neuron0x1a7f0e0()*-0.233814);
}

double NNfunction_sb_sLdR::synapse0x1a8de00() {
   return (neuron0x1a7f420()*-0.0192723);
}

double NNfunction_sb_sLdR::synapse0x1a8de40() {
   return (neuron0x1a7f760()*0.0337848);
}

double NNfunction_sb_sLdR::synapse0x1a8de80() {
   return (neuron0x1a7faa0()*-0.128926);
}

double NNfunction_sb_sLdR::synapse0x1a8dec0() {
   return (neuron0x1a7fde0()*-0.180851);
}

double NNfunction_sb_sLdR::synapse0x1a8df00() {
   return (neuron0x1a80120()*-0.167138);
}

double NNfunction_sb_sLdR::synapse0x1a8e280() {
   return (neuron0x1a7b560()*-0.0348145);
}

double NNfunction_sb_sLdR::synapse0x1a8e2c0() {
   return (neuron0x1a7b8a0()*0.0943965);
}

double NNfunction_sb_sLdR::synapse0x1a8e300() {
   return (neuron0x1a7bbe0()*-0.0510805);
}

double NNfunction_sb_sLdR::synapse0x1a8e340() {
   return (neuron0x1a7bf20()*-0.0123334);
}

double NNfunction_sb_sLdR::synapse0x1a8e380() {
   return (neuron0x1a7c260()*0.0142971);
}

double NNfunction_sb_sLdR::synapse0x1a8e3c0() {
   return (neuron0x1a7c5a0()*-0.0387624);
}

double NNfunction_sb_sLdR::synapse0x1a8e400() {
   return (neuron0x1a7c8e0()*0.0372538);
}

double NNfunction_sb_sLdR::synapse0x1a8e440() {
   return (neuron0x1a7cc20()*-0.0495792);
}

double NNfunction_sb_sLdR::synapse0x1a8e480() {
   return (neuron0x1a7cf60()*-0.0430917);
}

double NNfunction_sb_sLdR::synapse0x1a8e4c0() {
   return (neuron0x1a7d2a0()*-0.00322712);
}

double NNfunction_sb_sLdR::synapse0x1a8e500() {
   return (neuron0x1a7d5e0()*0.0589872);
}

double NNfunction_sb_sLdR::synapse0x1a8e540() {
   return (neuron0x1a7d920()*-0.50488);
}

double NNfunction_sb_sLdR::synapse0x1a8e580() {
   return (neuron0x1a7dc60()*-0.608935);
}

double NNfunction_sb_sLdR::synapse0x1a8e5c0() {
   return (neuron0x1a7dfa0()*0.0167725);
}

double NNfunction_sb_sLdR::synapse0x1a8e600() {
   return (neuron0x1a7e2e0()*-0.145592);
}

double NNfunction_sb_sLdR::synapse0x1a8e640() {
   return (neuron0x1a7e620()*-0.378702);
}

double NNfunction_sb_sLdR::synapse0x1a8e0d0() {
   return (neuron0x1a7e960()*0.0622321);
}

double NNfunction_sb_sLdR::synapse0x1a8e110() {
   return (neuron0x1a7eec0()*-0.45975);
}

double NNfunction_sb_sLdR::synapse0x1a8e790() {
   return (neuron0x1a7f0e0()*-0.267722);
}

double NNfunction_sb_sLdR::synapse0x1a8e7d0() {
   return (neuron0x1a7f420()*-0.0119814);
}

double NNfunction_sb_sLdR::synapse0x1a8e810() {
   return (neuron0x1a7f760()*-0.0177101);
}

double NNfunction_sb_sLdR::synapse0x1a8e850() {
   return (neuron0x1a7faa0()*0.0715293);
}

double NNfunction_sb_sLdR::synapse0x1a8e890() {
   return (neuron0x1a7fde0()*0.0476069);
}

double NNfunction_sb_sLdR::synapse0x1a8e8d0() {
   return (neuron0x1a80120()*-0.0144644);
}

double NNfunction_sb_sLdR::synapse0x1a8ec50() {
   return (neuron0x1a7b560()*0.070869);
}

double NNfunction_sb_sLdR::synapse0x1a8ec90() {
   return (neuron0x1a7b8a0()*-0.0338784);
}

double NNfunction_sb_sLdR::synapse0x1a8ecd0() {
   return (neuron0x1a7bbe0()*0.22513);
}

double NNfunction_sb_sLdR::synapse0x1a8ed10() {
   return (neuron0x1a7bf20()*1.01665);
}

double NNfunction_sb_sLdR::synapse0x1a8ed50() {
   return (neuron0x1a7c260()*0.156597);
}

double NNfunction_sb_sLdR::synapse0x1a8ed90() {
   return (neuron0x1a7c5a0()*0.0530754);
}

double NNfunction_sb_sLdR::synapse0x1a8edd0() {
   return (neuron0x1a7c8e0()*0.244163);
}

double NNfunction_sb_sLdR::synapse0x1a8ee10() {
   return (neuron0x1a7cc20()*0.297251);
}

double NNfunction_sb_sLdR::synapse0x1a8ee50() {
   return (neuron0x1a7cf60()*0.213142);
}

double NNfunction_sb_sLdR::synapse0x1a87010() {
   return (neuron0x1a7d2a0()*-0.0399885);
}

double NNfunction_sb_sLdR::synapse0x1a87050() {
   return (neuron0x1a7d5e0()*0.0882869);
}

double NNfunction_sb_sLdR::synapse0x1a87090() {
   return (neuron0x1a7d920()*0.322114);
}

double NNfunction_sb_sLdR::synapse0x1a870d0() {
   return (neuron0x1a7dc60()*-0.0925997);
}

double NNfunction_sb_sLdR::synapse0x1a87110() {
   return (neuron0x1a7dfa0()*-0.0628051);
}

double NNfunction_sb_sLdR::synapse0x1a87150() {
   return (neuron0x1a7e2e0()*-0.029832);
}

double NNfunction_sb_sLdR::synapse0x1a87190() {
   return (neuron0x1a7e620()*0.110387);
}

double NNfunction_sb_sLdR::synapse0x1a8eaa0() {
   return (neuron0x1a7e960()*-0.191643);
}

double NNfunction_sb_sLdR::synapse0x1a8eae0() {
   return (neuron0x1a7eec0()*-0.49071);
}

double NNfunction_sb_sLdR::synapse0x1a872e0() {
   return (neuron0x1a7f0e0()*0.197397);
}

double NNfunction_sb_sLdR::synapse0x1a87320() {
   return (neuron0x1a7f420()*0.0993963);
}

double NNfunction_sb_sLdR::synapse0x1a87360() {
   return (neuron0x1a7f760()*-0.0613699);
}

double NNfunction_sb_sLdR::synapse0x1a873a0() {
   return (neuron0x1a7faa0()*-0.0790636);
}

double NNfunction_sb_sLdR::synapse0x1a873e0() {
   return (neuron0x1a7fde0()*-0.00747178);
}

double NNfunction_sb_sLdR::synapse0x1a87420() {
   return (neuron0x1a80120()*-0.00712253);
}

double NNfunction_sb_sLdR::synapse0x1a877a0() {
   return (neuron0x1a7b560()*0.0682561);
}

double NNfunction_sb_sLdR::synapse0x1a877e0() {
   return (neuron0x1a7b8a0()*0.025917);
}

double NNfunction_sb_sLdR::synapse0x1a87820() {
   return (neuron0x1a7bbe0()*-0.244006);
}

double NNfunction_sb_sLdR::synapse0x1a87860() {
   return (neuron0x1a7bf20()*-0.0327919);
}

double NNfunction_sb_sLdR::synapse0x1a878a0() {
   return (neuron0x1a7c260()*-0.045886);
}

double NNfunction_sb_sLdR::synapse0x1a878e0() {
   return (neuron0x1a7c5a0()*-0.0549411);
}

double NNfunction_sb_sLdR::synapse0x1a87920() {
   return (neuron0x1a7c8e0()*-0.169176);
}

double NNfunction_sb_sLdR::synapse0x1a87960() {
   return (neuron0x1a7cc20()*-0.146799);
}

double NNfunction_sb_sLdR::synapse0x1a879a0() {
   return (neuron0x1a7cf60()*-0.732193);
}

double NNfunction_sb_sLdR::synapse0x1a879e0() {
   return (neuron0x1a7d2a0()*0.219287);
}

double NNfunction_sb_sLdR::synapse0x1a87a20() {
   return (neuron0x1a7d5e0()*0.130392);
}

double NNfunction_sb_sLdR::synapse0x1a87a60() {
   return (neuron0x1a7d920()*-0.207813);
}

double NNfunction_sb_sLdR::synapse0x1a87aa0() {
   return (neuron0x1a7dc60()*0.532617);
}

double NNfunction_sb_sLdR::synapse0x1a87ae0() {
   return (neuron0x1a7dfa0()*0.0629385);
}

double NNfunction_sb_sLdR::synapse0x1a87b20() {
   return (neuron0x1a7e2e0()*-0.0137684);
}

double NNfunction_sb_sLdR::synapse0x1a87b60() {
   return (neuron0x1a7e620()*0.0433196);
}

double NNfunction_sb_sLdR::synapse0x1a875f0() {
   return (neuron0x1a7e960()*0.0672426);
}

double NNfunction_sb_sLdR::synapse0x1a87630() {
   return (neuron0x1a7eec0()*0.547873);
}

double NNfunction_sb_sLdR::synapse0x1a87cb0() {
   return (neuron0x1a7f0e0()*-0.255687);
}

double NNfunction_sb_sLdR::synapse0x1a87cf0() {
   return (neuron0x1a7f420()*-0.0450733);
}

double NNfunction_sb_sLdR::synapse0x1a87d30() {
   return (neuron0x1a7f760()*-0.0564274);
}

double NNfunction_sb_sLdR::synapse0x1a87d70() {
   return (neuron0x1a7faa0()*0.064349);
}

double NNfunction_sb_sLdR::synapse0x1a87db0() {
   return (neuron0x1a7fde0()*0.0382518);
}

double NNfunction_sb_sLdR::synapse0x1a87df0() {
   return (neuron0x1a80120()*0.0237805);
}

double NNfunction_sb_sLdR::synapse0x1a87fc0() {
   return (neuron0x1a7b560()*0.0396225);
}

double NNfunction_sb_sLdR::synapse0x1a91050() {
   return (neuron0x1a7b8a0()*-0.0580434);
}

double NNfunction_sb_sLdR::synapse0x1a91090() {
   return (neuron0x1a7bbe0()*0.102228);
}

double NNfunction_sb_sLdR::synapse0x1a910d0() {
   return (neuron0x1a7bf20()*1.12247);
}

double NNfunction_sb_sLdR::synapse0x1a91110() {
   return (neuron0x1a7c260()*0.00609525);
}

double NNfunction_sb_sLdR::synapse0x1a91150() {
   return (neuron0x1a7c5a0()*0.0102316);
}

double NNfunction_sb_sLdR::synapse0x1a91190() {
   return (neuron0x1a7c8e0()*0.0192955);
}

double NNfunction_sb_sLdR::synapse0x1a911d0() {
   return (neuron0x1a7cc20()*-0.0294163);
}

double NNfunction_sb_sLdR::synapse0x1a91210() {
   return (neuron0x1a7cf60()*0.00595988);
}

double NNfunction_sb_sLdR::synapse0x1a91250() {
   return (neuron0x1a7d2a0()*0.0196759);
}

double NNfunction_sb_sLdR::synapse0x1a91290() {
   return (neuron0x1a7d5e0()*-0.0265241);
}

double NNfunction_sb_sLdR::synapse0x1a912d0() {
   return (neuron0x1a7d920()*-0.0221374);
}

double NNfunction_sb_sLdR::synapse0x1a91310() {
   return (neuron0x1a7dc60()*-2.21985);
}

double NNfunction_sb_sLdR::synapse0x1a91350() {
   return (neuron0x1a7dfa0()*0.00635224);
}

double NNfunction_sb_sLdR::synapse0x1a91390() {
   return (neuron0x1a7e2e0()*0.0236765);
}

double NNfunction_sb_sLdR::synapse0x1a913d0() {
   return (neuron0x1a7e620()*-0.0579166);
}

double NNfunction_sb_sLdR::synapse0x1a90ea0() {
   return (neuron0x1a7e960()*0.0660742);
}

double NNfunction_sb_sLdR::synapse0x1a90ee0() {
   return (neuron0x1a7eec0()*0.145663);
}

double NNfunction_sb_sLdR::synapse0x1a91520() {
   return (neuron0x1a7f0e0()*-0.00281421);
}

double NNfunction_sb_sLdR::synapse0x1a91560() {
   return (neuron0x1a7f420()*0.038411);
}

double NNfunction_sb_sLdR::synapse0x1a915a0() {
   return (neuron0x1a7f760()*0.0175875);
}

double NNfunction_sb_sLdR::synapse0x1a915e0() {
   return (neuron0x1a7faa0()*-0.00131828);
}

double NNfunction_sb_sLdR::synapse0x1a91620() {
   return (neuron0x1a7fde0()*-0.028944);
}

double NNfunction_sb_sLdR::synapse0x1a91660() {
   return (neuron0x1a80120()*0.0234105);
}

double NNfunction_sb_sLdR::synapse0x1a919e0() {
   return (neuron0x1a7b560()*0.189859);
}

double NNfunction_sb_sLdR::synapse0x1a91a20() {
   return (neuron0x1a7b8a0()*-0.0209565);
}

double NNfunction_sb_sLdR::synapse0x1a91a60() {
   return (neuron0x1a7bbe0()*-0.368612);
}

double NNfunction_sb_sLdR::synapse0x1a91aa0() {
   return (neuron0x1a7bf20()*-0.610483);
}

double NNfunction_sb_sLdR::synapse0x1a91ae0() {
   return (neuron0x1a7c260()*-0.469611);
}

double NNfunction_sb_sLdR::synapse0x1a91b20() {
   return (neuron0x1a7c5a0()*-0.435622);
}

double NNfunction_sb_sLdR::synapse0x1a91b60() {
   return (neuron0x1a7c8e0()*-0.354342);
}

double NNfunction_sb_sLdR::synapse0x1a91ba0() {
   return (neuron0x1a7cc20()*-0.842572);
}

double NNfunction_sb_sLdR::synapse0x1a91be0() {
   return (neuron0x1a7cf60()*-0.113271);
}

double NNfunction_sb_sLdR::synapse0x1a91c20() {
   return (neuron0x1a7d2a0()*-0.20757);
}

double NNfunction_sb_sLdR::synapse0x1a91c60() {
   return (neuron0x1a7d5e0()*-0.26966);
}

double NNfunction_sb_sLdR::synapse0x1a91ca0() {
   return (neuron0x1a7d920()*0.275079);
}

double NNfunction_sb_sLdR::synapse0x1a91ce0() {
   return (neuron0x1a7dc60()*0.805038);
}

double NNfunction_sb_sLdR::synapse0x1a91d20() {
   return (neuron0x1a7dfa0()*-0.286128);
}

double NNfunction_sb_sLdR::synapse0x1a91d60() {
   return (neuron0x1a7e2e0()*0.24973);
}

double NNfunction_sb_sLdR::synapse0x1a91da0() {
   return (neuron0x1a7e620()*-0.0555734);
}

double NNfunction_sb_sLdR::synapse0x1a91830() {
   return (neuron0x1a7e960()*-0.82147);
}

double NNfunction_sb_sLdR::synapse0x1a91870() {
   return (neuron0x1a7eec0()*0.0854972);
}

double NNfunction_sb_sLdR::synapse0x1a91ef0() {
   return (neuron0x1a7f0e0()*-0.0133667);
}

double NNfunction_sb_sLdR::synapse0x1a91f30() {
   return (neuron0x1a7f420()*0.326804);
}

double NNfunction_sb_sLdR::synapse0x1a91f70() {
   return (neuron0x1a7f760()*-0.0178924);
}

double NNfunction_sb_sLdR::synapse0x1a91fb0() {
   return (neuron0x1a7faa0()*0.241745);
}

double NNfunction_sb_sLdR::synapse0x1a91ff0() {
   return (neuron0x1a7fde0()*-0.337458);
}

double NNfunction_sb_sLdR::synapse0x1a92030() {
   return (neuron0x1a80120()*-0.120213);
}

double NNfunction_sb_sLdR::synapse0x1a923b0() {
   return (neuron0x1a7b560()*0.147192);
}

double NNfunction_sb_sLdR::synapse0x1a923f0() {
   return (neuron0x1a7b8a0()*0.325899);
}

double NNfunction_sb_sLdR::synapse0x1a92430() {
   return (neuron0x1a7bbe0()*0.105122);
}

double NNfunction_sb_sLdR::synapse0x1a92470() {
   return (neuron0x1a7bf20()*0.368856);
}

double NNfunction_sb_sLdR::synapse0x1a924b0() {
   return (neuron0x1a7c260()*-0.10037);
}

double NNfunction_sb_sLdR::synapse0x1a924f0() {
   return (neuron0x1a7c5a0()*0.0623657);
}

double NNfunction_sb_sLdR::synapse0x1a92530() {
   return (neuron0x1a7c8e0()*-0.0370027);
}

double NNfunction_sb_sLdR::synapse0x1a92570() {
   return (neuron0x1a7cc20()*-0.121144);
}

double NNfunction_sb_sLdR::synapse0x1a925b0() {
   return (neuron0x1a7cf60()*0.186541);
}

double NNfunction_sb_sLdR::synapse0x1a925f0() {
   return (neuron0x1a7d2a0()*-0.346667);
}

double NNfunction_sb_sLdR::synapse0x1a92630() {
   return (neuron0x1a7d5e0()*0.0584339);
}

double NNfunction_sb_sLdR::synapse0x1a92670() {
   return (neuron0x1a7d920()*0.865378);
}

double NNfunction_sb_sLdR::synapse0x1a926b0() {
   return (neuron0x1a7dc60()*0.127135);
}

double NNfunction_sb_sLdR::synapse0x1a926f0() {
   return (neuron0x1a7dfa0()*-0.489582);
}

double NNfunction_sb_sLdR::synapse0x1a92730() {
   return (neuron0x1a7e2e0()*0.0679753);
}

double NNfunction_sb_sLdR::synapse0x1a92770() {
   return (neuron0x1a7e620()*-0.0748229);
}

double NNfunction_sb_sLdR::synapse0x1a92200() {
   return (neuron0x1a7e960()*0.207757);
}

double NNfunction_sb_sLdR::synapse0x1a92240() {
   return (neuron0x1a7eec0()*-0.690215);
}

double NNfunction_sb_sLdR::synapse0x1a928c0() {
   return (neuron0x1a7f0e0()*0.317637);
}

double NNfunction_sb_sLdR::synapse0x1a92900() {
   return (neuron0x1a7f420()*-0.323583);
}

double NNfunction_sb_sLdR::synapse0x1a92940() {
   return (neuron0x1a7f760()*0.411889);
}

double NNfunction_sb_sLdR::synapse0x1a92980() {
   return (neuron0x1a7faa0()*-0.101303);
}

double NNfunction_sb_sLdR::synapse0x1a929c0() {
   return (neuron0x1a7fde0()*0.124456);
}

double NNfunction_sb_sLdR::synapse0x1a92a00() {
   return (neuron0x1a80120()*0.317286);
}

double NNfunction_sb_sLdR::synapse0x1a92d80() {
   return (neuron0x1a7b560()*0.0720346);
}

double NNfunction_sb_sLdR::synapse0x1a92dc0() {
   return (neuron0x1a7b8a0()*-0.111547);
}

double NNfunction_sb_sLdR::synapse0x1a92e00() {
   return (neuron0x1a7bbe0()*0.0522955);
}

double NNfunction_sb_sLdR::synapse0x1a92e40() {
   return (neuron0x1a7bf20()*0.598302);
}

double NNfunction_sb_sLdR::synapse0x1a92e80() {
   return (neuron0x1a7c260()*0.0488277);
}

double NNfunction_sb_sLdR::synapse0x1a92ec0() {
   return (neuron0x1a7c5a0()*0.0183905);
}

double NNfunction_sb_sLdR::synapse0x1a92f00() {
   return (neuron0x1a7c8e0()*-0.0450019);
}

double NNfunction_sb_sLdR::synapse0x1a92f40() {
   return (neuron0x1a7cc20()*-0.0105162);
}

double NNfunction_sb_sLdR::synapse0x1a92f80() {
   return (neuron0x1a7cf60()*-0.00753695);
}

double NNfunction_sb_sLdR::synapse0x1a92fc0() {
   return (neuron0x1a7d2a0()*-0.057707);
}

double NNfunction_sb_sLdR::synapse0x1a93000() {
   return (neuron0x1a7d5e0()*-0.0283202);
}

double NNfunction_sb_sLdR::synapse0x1a93040() {
   return (neuron0x1a7d920()*-0.0890819);
}

double NNfunction_sb_sLdR::synapse0x1a93080() {
   return (neuron0x1a7dc60()*-0.220266);
}

double NNfunction_sb_sLdR::synapse0x1a930c0() {
   return (neuron0x1a7dfa0()*0.143648);
}

double NNfunction_sb_sLdR::synapse0x1a93100() {
   return (neuron0x1a7e2e0()*0.00422969);
}

double NNfunction_sb_sLdR::synapse0x1a93140() {
   return (neuron0x1a7e620()*0.0536573);
}

double NNfunction_sb_sLdR::synapse0x1a92bd0() {
   return (neuron0x1a7e960()*0.211717);
}

double NNfunction_sb_sLdR::synapse0x1a92c10() {
   return (neuron0x1a7eec0()*-0.238434);
}

double NNfunction_sb_sLdR::synapse0x1a93290() {
   return (neuron0x1a7f0e0()*-0.0664568);
}

double NNfunction_sb_sLdR::synapse0x1a932d0() {
   return (neuron0x1a7f420()*-0.0228157);
}

double NNfunction_sb_sLdR::synapse0x1a93310() {
   return (neuron0x1a7f760()*0.0623394);
}

double NNfunction_sb_sLdR::synapse0x1a93350() {
   return (neuron0x1a7faa0()*-0.0163827);
}

double NNfunction_sb_sLdR::synapse0x1a93390() {
   return (neuron0x1a7fde0()*0.00274369);
}

double NNfunction_sb_sLdR::synapse0x1a933d0() {
   return (neuron0x1a80120()*0.0142258);
}

double NNfunction_sb_sLdR::synapse0x1a93750() {
   return (neuron0x1a7b560()*0.432153);
}

double NNfunction_sb_sLdR::synapse0x1a93790() {
   return (neuron0x1a7b8a0()*-0.434042);
}

double NNfunction_sb_sLdR::synapse0x1a937d0() {
   return (neuron0x1a7bbe0()*-0.637031);
}

double NNfunction_sb_sLdR::synapse0x1a93810() {
   return (neuron0x1a7bf20()*-0.0656013);
}

double NNfunction_sb_sLdR::synapse0x1a93850() {
   return (neuron0x1a7c260()*0.049398);
}

double NNfunction_sb_sLdR::synapse0x1a93890() {
   return (neuron0x1a7c5a0()*-0.526927);
}

double NNfunction_sb_sLdR::synapse0x1a938d0() {
   return (neuron0x1a7c8e0()*-0.618159);
}

double NNfunction_sb_sLdR::synapse0x1a93910() {
   return (neuron0x1a7cc20()*0.0194226);
}

double NNfunction_sb_sLdR::synapse0x1a93950() {
   return (neuron0x1a7cf60()*-0.156098);
}

double NNfunction_sb_sLdR::synapse0x1a93990() {
   return (neuron0x1a7d2a0()*-0.25061);
}

double NNfunction_sb_sLdR::synapse0x1a939d0() {
   return (neuron0x1a7d5e0()*-0.569216);
}

double NNfunction_sb_sLdR::synapse0x1a93a10() {
   return (neuron0x1a7d920()*-0.194812);
}

double NNfunction_sb_sLdR::synapse0x1a93a50() {
   return (neuron0x1a7dc60()*-0.612891);
}

double NNfunction_sb_sLdR::synapse0x1a93a90() {
   return (neuron0x1a7dfa0()*0.340992);
}

double NNfunction_sb_sLdR::synapse0x1a93ad0() {
   return (neuron0x1a7e2e0()*0.475115);
}

double NNfunction_sb_sLdR::synapse0x1a93b10() {
   return (neuron0x1a7e620()*0.236234);
}

double NNfunction_sb_sLdR::synapse0x1a935a0() {
   return (neuron0x1a7e960()*0.750413);
}

double NNfunction_sb_sLdR::synapse0x1a935e0() {
   return (neuron0x1a7eec0()*-0.0176173);
}

double NNfunction_sb_sLdR::synapse0x1a93c60() {
   return (neuron0x1a7f0e0()*-0.55296);
}

double NNfunction_sb_sLdR::synapse0x1a93ca0() {
   return (neuron0x1a7f420()*-0.17009);
}

double NNfunction_sb_sLdR::synapse0x1a93ce0() {
   return (neuron0x1a7f760()*-0.934946);
}

double NNfunction_sb_sLdR::synapse0x1a93d20() {
   return (neuron0x1a7faa0()*0.458524);
}

double NNfunction_sb_sLdR::synapse0x1a93d60() {
   return (neuron0x1a7fde0()*0.241529);
}

double NNfunction_sb_sLdR::synapse0x1a93da0() {
   return (neuron0x1a80120()*-0.160419);
}

double NNfunction_sb_sLdR::synapse0x1a94120() {
   return (neuron0x1a7b560()*0.0490552);
}

double NNfunction_sb_sLdR::synapse0x1a94160() {
   return (neuron0x1a7b8a0()*0.0662151);
}

double NNfunction_sb_sLdR::synapse0x1a941a0() {
   return (neuron0x1a7bbe0()*-0.523053);
}

double NNfunction_sb_sLdR::synapse0x1a941e0() {
   return (neuron0x1a7bf20()*-0.338999);
}

double NNfunction_sb_sLdR::synapse0x1a94220() {
   return (neuron0x1a7c260()*0.00306988);
}

double NNfunction_sb_sLdR::synapse0x1a94260() {
   return (neuron0x1a7c5a0()*0.0127348);
}

double NNfunction_sb_sLdR::synapse0x1a942a0() {
   return (neuron0x1a7c8e0()*-0.0214259);
}

double NNfunction_sb_sLdR::synapse0x1a942e0() {
   return (neuron0x1a7cc20()*0.0251473);
}

double NNfunction_sb_sLdR::synapse0x1a94320() {
   return (neuron0x1a7cf60()*0.00508735);
}

double NNfunction_sb_sLdR::synapse0x1a94360() {
   return (neuron0x1a7d2a0()*0.00316776);
}

double NNfunction_sb_sLdR::synapse0x1a943a0() {
   return (neuron0x1a7d5e0()*0.0517285);
}

double NNfunction_sb_sLdR::synapse0x1a943e0() {
   return (neuron0x1a7d920()*-0.00681349);
}

double NNfunction_sb_sLdR::synapse0x1a94420() {
   return (neuron0x1a7dc60()*0.255924);
}

double NNfunction_sb_sLdR::synapse0x1a94460() {
   return (neuron0x1a7dfa0()*-0.00949751);
}

double NNfunction_sb_sLdR::synapse0x1a944a0() {
   return (neuron0x1a7e2e0()*-0.0394826);
}

double NNfunction_sb_sLdR::synapse0x1a944e0() {
   return (neuron0x1a7e620()*-0.0101949);
}

double NNfunction_sb_sLdR::synapse0x1a93f70() {
   return (neuron0x1a7e960()*0.0105764);
}

double NNfunction_sb_sLdR::synapse0x1a93fb0() {
   return (neuron0x1a7eec0()*0.0915918);
}

double NNfunction_sb_sLdR::synapse0x1a94630() {
   return (neuron0x1a7f0e0()*-0.00253835);
}

double NNfunction_sb_sLdR::synapse0x1a94670() {
   return (neuron0x1a7f420()*-0.00985323);
}

double NNfunction_sb_sLdR::synapse0x1a946b0() {
   return (neuron0x1a7f760()*0.012133);
}

double NNfunction_sb_sLdR::synapse0x1a946f0() {
   return (neuron0x1a7faa0()*0.0153078);
}

double NNfunction_sb_sLdR::synapse0x1a94730() {
   return (neuron0x1a7fde0()*0.00397542);
}

double NNfunction_sb_sLdR::synapse0x1a94770() {
   return (neuron0x1a80120()*0.0033964);
}

double NNfunction_sb_sLdR::synapse0x1a94af0() {
   return (neuron0x1a7b560()*-0.00291804);
}

double NNfunction_sb_sLdR::synapse0x1a94b30() {
   return (neuron0x1a7b8a0()*-0.0319559);
}

double NNfunction_sb_sLdR::synapse0x1a94b70() {
   return (neuron0x1a7bbe0()*0.0540563);
}

double NNfunction_sb_sLdR::synapse0x1a94bb0() {
   return (neuron0x1a7bf20()*8.9229);
}

double NNfunction_sb_sLdR::synapse0x1a94bf0() {
   return (neuron0x1a7c260()*0.0303081);
}

double NNfunction_sb_sLdR::synapse0x1a94c30() {
   return (neuron0x1a7c5a0()*-0.00195198);
}

double NNfunction_sb_sLdR::synapse0x1a94c70() {
   return (neuron0x1a7c8e0()*-0.00530771);
}

double NNfunction_sb_sLdR::synapse0x1a94cb0() {
   return (neuron0x1a7cc20()*0.00798435);
}

double NNfunction_sb_sLdR::synapse0x1a94cf0() {
   return (neuron0x1a7cf60()*0.00581035);
}

double NNfunction_sb_sLdR::synapse0x1a94d30() {
   return (neuron0x1a7d2a0()*-0.0282253);
}

double NNfunction_sb_sLdR::synapse0x1a94d70() {
   return (neuron0x1a7d5e0()*0.00803182);
}

double NNfunction_sb_sLdR::synapse0x1a94db0() {
   return (neuron0x1a7d920()*0.0245028);
}

double NNfunction_sb_sLdR::synapse0x1a94df0() {
   return (neuron0x1a7dc60()*-0.559269);
}

double NNfunction_sb_sLdR::synapse0x1a94e30() {
   return (neuron0x1a7dfa0()*-0.0274893);
}

double NNfunction_sb_sLdR::synapse0x1a94e70() {
   return (neuron0x1a7e2e0()*0.0377701);
}

double NNfunction_sb_sLdR::synapse0x1a94eb0() {
   return (neuron0x1a7e620()*0.0617509);
}

double NNfunction_sb_sLdR::synapse0x1a94940() {
   return (neuron0x1a7e960()*-0.0332131);
}

double NNfunction_sb_sLdR::synapse0x1a94980() {
   return (neuron0x1a7eec0()*-0.895658);
}

double NNfunction_sb_sLdR::synapse0x1a95000() {
   return (neuron0x1a7f0e0()*0.0165266);
}

double NNfunction_sb_sLdR::synapse0x1a95040() {
   return (neuron0x1a7f420()*0.0263629);
}

double NNfunction_sb_sLdR::synapse0x1a95080() {
   return (neuron0x1a7f760()*-0.00326748);
}

double NNfunction_sb_sLdR::synapse0x1a950c0() {
   return (neuron0x1a7faa0()*-0.00792685);
}

double NNfunction_sb_sLdR::synapse0x1a95100() {
   return (neuron0x1a7fde0()*-0.00325862);
}

double NNfunction_sb_sLdR::synapse0x1a95140() {
   return (neuron0x1a80120()*0.0328307);
}

double NNfunction_sb_sLdR::synapse0x1a954c0() {
   return (neuron0x1a7b560()*0.458723);
}

double NNfunction_sb_sLdR::synapse0x1a95500() {
   return (neuron0x1a7b8a0()*-0.617972);
}

double NNfunction_sb_sLdR::synapse0x1a95540() {
   return (neuron0x1a7bbe0()*-0.0207447);
}

double NNfunction_sb_sLdR::synapse0x1a95580() {
   return (neuron0x1a7bf20()*-0.445262);
}

double NNfunction_sb_sLdR::synapse0x1a955c0() {
   return (neuron0x1a7c260()*-0.841729);
}

double NNfunction_sb_sLdR::synapse0x1a95600() {
   return (neuron0x1a7c5a0()*-0.0509408);
}

double NNfunction_sb_sLdR::synapse0x1a95640() {
   return (neuron0x1a7c8e0()*-0.990828);
}

double NNfunction_sb_sLdR::synapse0x1a95680() {
   return (neuron0x1a7cc20()*-0.0423801);
}

double NNfunction_sb_sLdR::synapse0x1a956c0() {
   return (neuron0x1a7cf60()*0.565156);
}

double NNfunction_sb_sLdR::synapse0x1a95700() {
   return (neuron0x1a7d2a0()*0.441549);
}

double NNfunction_sb_sLdR::synapse0x1a95740() {
   return (neuron0x1a7d5e0()*0.203882);
}

double NNfunction_sb_sLdR::synapse0x1a95780() {
   return (neuron0x1a7d920()*-1.15644);
}

double NNfunction_sb_sLdR::synapse0x1a957c0() {
   return (neuron0x1a7dc60()*-0.088577);
}

double NNfunction_sb_sLdR::synapse0x1a95800() {
   return (neuron0x1a7dfa0()*-0.0671677);
}

double NNfunction_sb_sLdR::synapse0x1a95840() {
   return (neuron0x1a7e2e0()*1.55146);
}

double NNfunction_sb_sLdR::synapse0x1a95880() {
   return (neuron0x1a7e620()*-0.652347);
}

double NNfunction_sb_sLdR::synapse0x1a95310() {
   return (neuron0x1a7e960()*-0.222729);
}

double NNfunction_sb_sLdR::synapse0x1a95350() {
   return (neuron0x1a7eec0()*-0.736792);
}

double NNfunction_sb_sLdR::synapse0x1a959d0() {
   return (neuron0x1a7f0e0()*-0.163325);
}

double NNfunction_sb_sLdR::synapse0x1a95a10() {
   return (neuron0x1a7f420()*-0.361464);
}

double NNfunction_sb_sLdR::synapse0x1a95a50() {
   return (neuron0x1a7f760()*-0.0373449);
}

double NNfunction_sb_sLdR::synapse0x1a95a90() {
   return (neuron0x1a7faa0()*-0.104827);
}

double NNfunction_sb_sLdR::synapse0x1a95ad0() {
   return (neuron0x1a7fde0()*-0.518605);
}

double NNfunction_sb_sLdR::synapse0x1a95b10() {
   return (neuron0x1a80120()*-0.697703);
}

double NNfunction_sb_sLdR::synapse0x1a95e90() {
   return (neuron0x1a7b560()*0.31622);
}

double NNfunction_sb_sLdR::synapse0x1a8a460() {
   return (neuron0x1a7b8a0()*-0.612582);
}

double NNfunction_sb_sLdR::synapse0x1a8a4a0() {
   return (neuron0x1a7bbe0()*0.685447);
}

double NNfunction_sb_sLdR::synapse0x1a8a4e0() {
   return (neuron0x1a7bf20()*0.129271);
}

double NNfunction_sb_sLdR::synapse0x1a8a730() {
   return (neuron0x1a7c260()*0.53824);
}

double NNfunction_sb_sLdR::synapse0x1a8a770() {
   return (neuron0x1a7c5a0()*-0.169675);
}

double NNfunction_sb_sLdR::synapse0x1a8a7b0() {
   return (neuron0x1a7c8e0()*-0.0836868);
}

double NNfunction_sb_sLdR::synapse0x1a8aa00() {
   return (neuron0x1a7cc20()*-0.603259);
}

double NNfunction_sb_sLdR::synapse0x1a8aa40() {
   return (neuron0x1a7cf60()*0.361571);
}

double NNfunction_sb_sLdR::synapse0x1a8ac90() {
   return (neuron0x1a7d2a0()*0.16172);
}

double NNfunction_sb_sLdR::synapse0x1a8acd0() {
   return (neuron0x1a7d5e0()*0.12003);
}

double NNfunction_sb_sLdR::synapse0x1a8ad10() {
   return (neuron0x1a7d920()*0.0798664);
}

double NNfunction_sb_sLdR::synapse0x1a8af60() {
   return (neuron0x1a7dc60()*0.465265);
}

double NNfunction_sb_sLdR::synapse0x1a8afa0() {
   return (neuron0x1a7dfa0()*0.0749582);
}

double NNfunction_sb_sLdR::synapse0x1a8b1f0() {
   return (neuron0x1a7e2e0()*-0.538431);
}

double NNfunction_sb_sLdR::synapse0x1a8b230() {
   return (neuron0x1a7e620()*-1.0968);
}

double NNfunction_sb_sLdR::synapse0x1a95ce0() {
   return (neuron0x1a7e960()*-0.377528);
}

double NNfunction_sb_sLdR::synapse0x1a95d20() {
   return (neuron0x1a7eec0()*0.773913);
}

double NNfunction_sb_sLdR::synapse0x1a8b380() {
   return (neuron0x1a7f0e0()*0.30763);
}

double NNfunction_sb_sLdR::synapse0x1a8b890() {
   return (neuron0x1a7f420()*0.242028);
}

double NNfunction_sb_sLdR::synapse0x1a8b8d0() {
   return (neuron0x1a7f760()*-0.320346);
}

double NNfunction_sb_sLdR::synapse0x1a8b910() {
   return (neuron0x1a7faa0()*-0.221207);
}

double NNfunction_sb_sLdR::synapse0x1a8bb60() {
   return (neuron0x1a7fde0()*0.345764);
}

double NNfunction_sb_sLdR::synapse0x1a8bba0() {
   return (neuron0x1a80120()*-0.0315911);
}

double NNfunction_sb_sLdR::synapse0x1a8b450() {
   return (neuron0x1a7b560()*0.023243);
}

double NNfunction_sb_sLdR::synapse0x1a8b490() {
   return (neuron0x1a7b8a0()*0.00673414);
}

double NNfunction_sb_sLdR::synapse0x1a8b4d0() {
   return (neuron0x1a7bbe0()*0.0539012);
}

double NNfunction_sb_sLdR::synapse0x1a8b510() {
   return (neuron0x1a7bf20()*-0.0284607);
}

double NNfunction_sb_sLdR::synapse0x1a8be90() {
   return (neuron0x1a7c260()*0.0369393);
}

double NNfunction_sb_sLdR::synapse0x1a981e0() {
   return (neuron0x1a7c5a0()*0.00810088);
}

double NNfunction_sb_sLdR::synapse0x1a98220() {
   return (neuron0x1a7c8e0()*-0.00335919);
}

double NNfunction_sb_sLdR::synapse0x1a98260() {
   return (neuron0x1a7cc20()*-0.00390849);
}

double NNfunction_sb_sLdR::synapse0x1a982a0() {
   return (neuron0x1a7cf60()*-0.035187);
}

double NNfunction_sb_sLdR::synapse0x1a982e0() {
   return (neuron0x1a7d2a0()*-0.194299);
}

double NNfunction_sb_sLdR::synapse0x1a98320() {
   return (neuron0x1a7d5e0()*0.0118396);
}

double NNfunction_sb_sLdR::synapse0x1a98360() {
   return (neuron0x1a7d920()*-0.0373058);
}

double NNfunction_sb_sLdR::synapse0x1a983a0() {
   return (neuron0x1a7dc60()*0.197706);
}

double NNfunction_sb_sLdR::synapse0x1a983e0() {
   return (neuron0x1a7dfa0()*0.0456081);
}

double NNfunction_sb_sLdR::synapse0x1a98420() {
   return (neuron0x1a7e2e0()*0.014729);
}

double NNfunction_sb_sLdR::synapse0x1a98460() {
   return (neuron0x1a7e620()*0.00596012);
}

double NNfunction_sb_sLdR::synapse0x1a8bd70() {
   return (neuron0x1a7e960()*0.0359459);
}

double NNfunction_sb_sLdR::synapse0x1a8bdb0() {
   return (neuron0x1a7eec0()*0.508879);
}

double NNfunction_sb_sLdR::synapse0x1a985b0() {
   return (neuron0x1a7f0e0()*-0.0205976);
}

double NNfunction_sb_sLdR::synapse0x1a985f0() {
   return (neuron0x1a7f420()*0.017879);
}

double NNfunction_sb_sLdR::synapse0x1a98630() {
   return (neuron0x1a7f760()*0.026004);
}

double NNfunction_sb_sLdR::synapse0x1a98670() {
   return (neuron0x1a7faa0()*-0.0366721);
}

double NNfunction_sb_sLdR::synapse0x1a986b0() {
   return (neuron0x1a7fde0()*-0.00829475);
}

double NNfunction_sb_sLdR::synapse0x1a986f0() {
   return (neuron0x1a80120()*-0.0168676);
}

double NNfunction_sb_sLdR::synapse0x1a98a70() {
   return (neuron0x1a7b560()*-0.0486751);
}

double NNfunction_sb_sLdR::synapse0x1a98ab0() {
   return (neuron0x1a7b8a0()*-0.00353563);
}

double NNfunction_sb_sLdR::synapse0x1a98af0() {
   return (neuron0x1a7bbe0()*0.0590862);
}

double NNfunction_sb_sLdR::synapse0x1a98b30() {
   return (neuron0x1a7bf20()*-0.0581701);
}

double NNfunction_sb_sLdR::synapse0x1a98b70() {
   return (neuron0x1a7c260()*-0.0496135);
}

double NNfunction_sb_sLdR::synapse0x1a98bb0() {
   return (neuron0x1a7c5a0()*-0.00692145);
}

double NNfunction_sb_sLdR::synapse0x1a98bf0() {
   return (neuron0x1a7c8e0()*-0.0427604);
}

double NNfunction_sb_sLdR::synapse0x1a98c30() {
   return (neuron0x1a7cc20()*-0.0327764);
}

double NNfunction_sb_sLdR::synapse0x1a98c70() {
   return (neuron0x1a7cf60()*-0.0190326);
}

double NNfunction_sb_sLdR::synapse0x1a98cb0() {
   return (neuron0x1a7d2a0()*0.0560159);
}

double NNfunction_sb_sLdR::synapse0x1a98cf0() {
   return (neuron0x1a7d5e0()*-0.294624);
}

double NNfunction_sb_sLdR::synapse0x1a98d30() {
   return (neuron0x1a7d920()*-0.0702395);
}

double NNfunction_sb_sLdR::synapse0x1a98d70() {
   return (neuron0x1a7dc60()*0.260385);
}

double NNfunction_sb_sLdR::synapse0x1a98db0() {
   return (neuron0x1a7dfa0()*0.0147685);
}

double NNfunction_sb_sLdR::synapse0x1a98df0() {
   return (neuron0x1a7e2e0()*-0.0314218);
}

double NNfunction_sb_sLdR::synapse0x1a98e30() {
   return (neuron0x1a7e620()*-0.058327);
}

double NNfunction_sb_sLdR::synapse0x1a988c0() {
   return (neuron0x1a7e960()*0.0117239);
}

double NNfunction_sb_sLdR::synapse0x1a98900() {
   return (neuron0x1a7eec0()*0.238053);
}

double NNfunction_sb_sLdR::synapse0x1a98f80() {
   return (neuron0x1a7f0e0()*-0.0132171);
}

double NNfunction_sb_sLdR::synapse0x1a98fc0() {
   return (neuron0x1a7f420()*0.0750987);
}

double NNfunction_sb_sLdR::synapse0x1a99000() {
   return (neuron0x1a7f760()*-0.00402493);
}

double NNfunction_sb_sLdR::synapse0x1a99040() {
   return (neuron0x1a7faa0()*0.0277178);
}

double NNfunction_sb_sLdR::synapse0x1a99080() {
   return (neuron0x1a7fde0()*-0.0163829);
}

double NNfunction_sb_sLdR::synapse0x1a990c0() {
   return (neuron0x1a80120()*0.0184365);
}

double NNfunction_sb_sLdR::synapse0x1a99440() {
   return (neuron0x1a7b560()*-0.0154468);
}

double NNfunction_sb_sLdR::synapse0x1a99480() {
   return (neuron0x1a7b8a0()*-0.0178483);
}

double NNfunction_sb_sLdR::synapse0x1a994c0() {
   return (neuron0x1a7bbe0()*0.000176765);
}

double NNfunction_sb_sLdR::synapse0x1a99500() {
   return (neuron0x1a7bf20()*0.0136071);
}

double NNfunction_sb_sLdR::synapse0x1a99540() {
   return (neuron0x1a7c260()*-0.00947336);
}

double NNfunction_sb_sLdR::synapse0x1a99580() {
   return (neuron0x1a7c5a0()*-0.00885102);
}

double NNfunction_sb_sLdR::synapse0x1a995c0() {
   return (neuron0x1a7c8e0()*0.0399174);
}

double NNfunction_sb_sLdR::synapse0x1a99600() {
   return (neuron0x1a7cc20()*-0.0106465);
}

double NNfunction_sb_sLdR::synapse0x1a99640() {
   return (neuron0x1a7cf60()*-0.0573433);
}

double NNfunction_sb_sLdR::synapse0x1a99680() {
   return (neuron0x1a7d2a0()*-0.126756);
}

double NNfunction_sb_sLdR::synapse0x1a996c0() {
   return (neuron0x1a7d5e0()*-0.0848038);
}

double NNfunction_sb_sLdR::synapse0x1a99700() {
   return (neuron0x1a7d920()*0.0479555);
}

double NNfunction_sb_sLdR::synapse0x1a99740() {
   return (neuron0x1a7dc60()*-0.19456);
}

double NNfunction_sb_sLdR::synapse0x1a99780() {
   return (neuron0x1a7dfa0()*0.019024);
}

double NNfunction_sb_sLdR::synapse0x1a997c0() {
   return (neuron0x1a7e2e0()*0.0233682);
}

double NNfunction_sb_sLdR::synapse0x1a99800() {
   return (neuron0x1a7e620()*-0.0151463);
}

double NNfunction_sb_sLdR::synapse0x1a99290() {
   return (neuron0x1a7e960()*0.014605);
}

double NNfunction_sb_sLdR::synapse0x1a992d0() {
   return (neuron0x1a7eec0()*-0.362294);
}

double NNfunction_sb_sLdR::synapse0x1a99950() {
   return (neuron0x1a7f0e0()*-0.00330544);
}

double NNfunction_sb_sLdR::synapse0x1a99990() {
   return (neuron0x1a7f420()*0.0288815);
}

double NNfunction_sb_sLdR::synapse0x1a999d0() {
   return (neuron0x1a7f760()*-0.00530837);
}

double NNfunction_sb_sLdR::synapse0x1a99a10() {
   return (neuron0x1a7faa0()*0.00302924);
}

double NNfunction_sb_sLdR::synapse0x1a99a50() {
   return (neuron0x1a7fde0()*-0.00771473);
}

double NNfunction_sb_sLdR::synapse0x1a99a90() {
   return (neuron0x1a80120()*-0.00624486);
}

double NNfunction_sb_sLdR::synapse0x1a99e10() {
   return (neuron0x1a7b560()*0.335668);
}

double NNfunction_sb_sLdR::synapse0x1a99e50() {
   return (neuron0x1a7b8a0()*-0.336347);
}

double NNfunction_sb_sLdR::synapse0x1a99e90() {
   return (neuron0x1a7bbe0()*0.507527);
}

double NNfunction_sb_sLdR::synapse0x1a99ed0() {
   return (neuron0x1a7bf20()*1.00716);
}

double NNfunction_sb_sLdR::synapse0x1a99f10() {
   return (neuron0x1a7c260()*-0.36065);
}

double NNfunction_sb_sLdR::synapse0x1a99f50() {
   return (neuron0x1a7c5a0()*-0.312029);
}

double NNfunction_sb_sLdR::synapse0x1a99f90() {
   return (neuron0x1a7c8e0()*0.0415432);
}

double NNfunction_sb_sLdR::synapse0x1a99fd0() {
   return (neuron0x1a7cc20()*-0.0207158);
}

double NNfunction_sb_sLdR::synapse0x1a9a010() {
   return (neuron0x1a7cf60()*-0.166946);
}

double NNfunction_sb_sLdR::synapse0x1a9a050() {
   return (neuron0x1a7d2a0()*-0.105516);
}

double NNfunction_sb_sLdR::synapse0x1a9a090() {
   return (neuron0x1a7d5e0()*-0.140433);
}

double NNfunction_sb_sLdR::synapse0x1a9a0d0() {
   return (neuron0x1a7d920()*0.452814);
}

double NNfunction_sb_sLdR::synapse0x1a9a110() {
   return (neuron0x1a7dc60()*-0.0219019);
}

double NNfunction_sb_sLdR::synapse0x1a9a150() {
   return (neuron0x1a7dfa0()*-0.378508);
}

double NNfunction_sb_sLdR::synapse0x1a9a190() {
   return (neuron0x1a7e2e0()*-0.468158);
}

double NNfunction_sb_sLdR::synapse0x1a9a1d0() {
   return (neuron0x1a7e620()*0.15257);
}

double NNfunction_sb_sLdR::synapse0x1a99c60() {
   return (neuron0x1a7e960()*-0.292659);
}

double NNfunction_sb_sLdR::synapse0x1a99ca0() {
   return (neuron0x1a7eec0()*-0.182029);
}

double NNfunction_sb_sLdR::synapse0x1a9a320() {
   return (neuron0x1a7f0e0()*0.156613);
}

double NNfunction_sb_sLdR::synapse0x1a9a360() {
   return (neuron0x1a7f420()*-0.377196);
}

double NNfunction_sb_sLdR::synapse0x1a9a3a0() {
   return (neuron0x1a7f760()*-0.0726159);
}

double NNfunction_sb_sLdR::synapse0x1a9a3e0() {
   return (neuron0x1a7faa0()*0.381957);
}

double NNfunction_sb_sLdR::synapse0x1a9a420() {
   return (neuron0x1a7fde0()*-0.0609648);
}

double NNfunction_sb_sLdR::synapse0x1a9a460() {
   return (neuron0x1a80120()*-0.479713);
}

double NNfunction_sb_sLdR::synapse0x1a9a7e0() {
   return (neuron0x1a7b560()*-0.0140949);
}

double NNfunction_sb_sLdR::synapse0x1a9a820() {
   return (neuron0x1a7b8a0()*0.0373695);
}

double NNfunction_sb_sLdR::synapse0x1a9a860() {
   return (neuron0x1a7bbe0()*-0.0234569);
}

double NNfunction_sb_sLdR::synapse0x1a9a8a0() {
   return (neuron0x1a7bf20()*-3.41937);
}

double NNfunction_sb_sLdR::synapse0x1a9a8e0() {
   return (neuron0x1a7c260()*-0.0250724);
}

double NNfunction_sb_sLdR::synapse0x1a9a920() {
   return (neuron0x1a7c5a0()*-0.0311405);
}

double NNfunction_sb_sLdR::synapse0x1a9a960() {
   return (neuron0x1a7c8e0()*-0.0193649);
}

double NNfunction_sb_sLdR::synapse0x1a9a9a0() {
   return (neuron0x1a7cc20()*-0.0191896);
}

double NNfunction_sb_sLdR::synapse0x1a9a9e0() {
   return (neuron0x1a7cf60()*0.0261982);
}

double NNfunction_sb_sLdR::synapse0x1a9aa20() {
   return (neuron0x1a7d2a0()*-0.0133725);
}

double NNfunction_sb_sLdR::synapse0x1a9aa60() {
   return (neuron0x1a7d5e0()*-0.00116935);
}

double NNfunction_sb_sLdR::synapse0x1a9aaa0() {
   return (neuron0x1a7d920()*-0.0644293);
}

double NNfunction_sb_sLdR::synapse0x1a9aae0() {
   return (neuron0x1a7dc60()*0.213738);
}

double NNfunction_sb_sLdR::synapse0x1a9ab20() {
   return (neuron0x1a7dfa0()*0.00491545);
}

double NNfunction_sb_sLdR::synapse0x1a9ab60() {
   return (neuron0x1a7e2e0()*0.0143161);
}

double NNfunction_sb_sLdR::synapse0x1a9aba0() {
   return (neuron0x1a7e620()*-0.0629787);
}

double NNfunction_sb_sLdR::synapse0x1a9a630() {
   return (neuron0x1a7e960()*0.0261561);
}

double NNfunction_sb_sLdR::synapse0x1a9a670() {
   return (neuron0x1a7eec0()*0.53929);
}

double NNfunction_sb_sLdR::synapse0x1a9acf0() {
   return (neuron0x1a7f0e0()*-0.0357817);
}

double NNfunction_sb_sLdR::synapse0x1a9ad30() {
   return (neuron0x1a7f420()*-0.00844016);
}

double NNfunction_sb_sLdR::synapse0x1a9ad70() {
   return (neuron0x1a7f760()*0.0254184);
}

double NNfunction_sb_sLdR::synapse0x1a9adb0() {
   return (neuron0x1a7faa0()*0.0198154);
}

double NNfunction_sb_sLdR::synapse0x1a9adf0() {
   return (neuron0x1a7fde0()*0.00967716);
}

double NNfunction_sb_sLdR::synapse0x1a9ae30() {
   return (neuron0x1a80120()*-0.0171856);
}

double NNfunction_sb_sLdR::synapse0x1a9b1b0() {
   return (neuron0x1a7b560()*-0.136628);
}

double NNfunction_sb_sLdR::synapse0x1a9b1f0() {
   return (neuron0x1a7b8a0()*-0.0346894);
}

double NNfunction_sb_sLdR::synapse0x1a9b230() {
   return (neuron0x1a7bbe0()*-0.133456);
}

double NNfunction_sb_sLdR::synapse0x1a9b270() {
   return (neuron0x1a7bf20()*-0.212838);
}

double NNfunction_sb_sLdR::synapse0x1a9b2b0() {
   return (neuron0x1a7c260()*-0.0250921);
}

double NNfunction_sb_sLdR::synapse0x1a9b2f0() {
   return (neuron0x1a7c5a0()*0.0986998);
}

double NNfunction_sb_sLdR::synapse0x1a9b330() {
   return (neuron0x1a7c8e0()*0.174636);
}

double NNfunction_sb_sLdR::synapse0x1a9b370() {
   return (neuron0x1a7cc20()*0.0502883);
}

double NNfunction_sb_sLdR::synapse0x1a9b3b0() {
   return (neuron0x1a7cf60()*0.271345);
}

double NNfunction_sb_sLdR::synapse0x1a9b3f0() {
   return (neuron0x1a7d2a0()*0.204254);
}

double NNfunction_sb_sLdR::synapse0x1a9b430() {
   return (neuron0x1a7d5e0()*0.300217);
}

double NNfunction_sb_sLdR::synapse0x1a9b470() {
   return (neuron0x1a7d920()*-0.0739258);
}

double NNfunction_sb_sLdR::synapse0x1a9b4b0() {
   return (neuron0x1a7dc60()*0.559571);
}

double NNfunction_sb_sLdR::synapse0x1a9b4f0() {
   return (neuron0x1a7dfa0()*0.22531);
}

double NNfunction_sb_sLdR::synapse0x1a9b530() {
   return (neuron0x1a7e2e0()*-0.000112873);
}

double NNfunction_sb_sLdR::synapse0x1a9b570() {
   return (neuron0x1a7e620()*-0.0154334);
}

double NNfunction_sb_sLdR::synapse0x1a9b000() {
   return (neuron0x1a7e960()*-0.0572918);
}

double NNfunction_sb_sLdR::synapse0x1a9b040() {
   return (neuron0x1a7eec0()*0.0407052);
}

double NNfunction_sb_sLdR::synapse0x1a9b6c0() {
   return (neuron0x1a7f0e0()*-0.147053);
}

double NNfunction_sb_sLdR::synapse0x1a9b700() {
   return (neuron0x1a7f420()*0.281262);
}

double NNfunction_sb_sLdR::synapse0x1a9b740() {
   return (neuron0x1a7f760()*0.309639);
}

double NNfunction_sb_sLdR::synapse0x1a9b780() {
   return (neuron0x1a7faa0()*-0.343611);
}

double NNfunction_sb_sLdR::synapse0x1a9b7c0() {
   return (neuron0x1a7fde0()*0.0477701);
}

double NNfunction_sb_sLdR::synapse0x1a9b800() {
   return (neuron0x1a80120()*-0.0763285);
}

double NNfunction_sb_sLdR::synapse0x1a9bb80() {
   return (neuron0x1a7b560()*0.582331);
}

double NNfunction_sb_sLdR::synapse0x1a9bbc0() {
   return (neuron0x1a7b8a0()*0.412771);
}

double NNfunction_sb_sLdR::synapse0x1a9bc00() {
   return (neuron0x1a7bbe0()*0.833698);
}

double NNfunction_sb_sLdR::synapse0x1a9bc40() {
   return (neuron0x1a7bf20()*-0.658017);
}

double NNfunction_sb_sLdR::synapse0x1a9bc80() {
   return (neuron0x1a7c260()*-0.578327);
}

double NNfunction_sb_sLdR::synapse0x1a9bcc0() {
   return (neuron0x1a7c5a0()*-0.0398321);
}

double NNfunction_sb_sLdR::synapse0x1a9bd00() {
   return (neuron0x1a7c8e0()*1.09222);
}

double NNfunction_sb_sLdR::synapse0x1a9bd40() {
   return (neuron0x1a7cc20()*-0.868);
}

double NNfunction_sb_sLdR::synapse0x1a9bd80() {
   return (neuron0x1a7cf60()*0.687693);
}

double NNfunction_sb_sLdR::synapse0x1a9bdc0() {
   return (neuron0x1a7d2a0()*-0.203905);
}

double NNfunction_sb_sLdR::synapse0x1a9be00() {
   return (neuron0x1a7d5e0()*-0.562142);
}

double NNfunction_sb_sLdR::synapse0x1a9be40() {
   return (neuron0x1a7d920()*0.0587144);
}

double NNfunction_sb_sLdR::synapse0x1a9be80() {
   return (neuron0x1a7dc60()*0.694824);
}

double NNfunction_sb_sLdR::synapse0x1a9bec0() {
   return (neuron0x1a7dfa0()*-0.155711);
}

double NNfunction_sb_sLdR::synapse0x1a9bf00() {
   return (neuron0x1a7e2e0()*0.61298);
}

double NNfunction_sb_sLdR::synapse0x1a9bf40() {
   return (neuron0x1a7e620()*-0.321765);
}

double NNfunction_sb_sLdR::synapse0x1a9b9d0() {
   return (neuron0x1a7e960()*0.334927);
}

double NNfunction_sb_sLdR::synapse0x1a9ba10() {
   return (neuron0x1a7eec0()*0.317398);
}

double NNfunction_sb_sLdR::synapse0x1a9c090() {
   return (neuron0x1a7f0e0()*0.09352);
}

double NNfunction_sb_sLdR::synapse0x1a9c0d0() {
   return (neuron0x1a7f420()*0.612073);
}

double NNfunction_sb_sLdR::synapse0x1a9c110() {
   return (neuron0x1a7f760()*0.254388);
}

double NNfunction_sb_sLdR::synapse0x1a9c150() {
   return (neuron0x1a7faa0()*-0.258114);
}

double NNfunction_sb_sLdR::synapse0x1a9c190() {
   return (neuron0x1a7fde0()*0.45266);
}

double NNfunction_sb_sLdR::synapse0x1a9c1d0() {
   return (neuron0x1a80120()*0.0211842);
}

double NNfunction_sb_sLdR::synapse0x1a9c550() {
   return (neuron0x1a7b560()*-0.00695336);
}

double NNfunction_sb_sLdR::synapse0x1a9c590() {
   return (neuron0x1a7b8a0()*-0.0162409);
}

double NNfunction_sb_sLdR::synapse0x1a9c5d0() {
   return (neuron0x1a7bbe0()*-0.101777);
}

double NNfunction_sb_sLdR::synapse0x1a9c610() {
   return (neuron0x1a7bf20()*1.44895);
}

double NNfunction_sb_sLdR::synapse0x1a9c650() {
   return (neuron0x1a7c260()*-0.00855023);
}

double NNfunction_sb_sLdR::synapse0x1a9c690() {
   return (neuron0x1a7c5a0()*-0.0153621);
}

double NNfunction_sb_sLdR::synapse0x1a9c6d0() {
   return (neuron0x1a7c8e0()*0.0516248);
}

double NNfunction_sb_sLdR::synapse0x1a9c710() {
   return (neuron0x1a7cc20()*0.0249195);
}

double NNfunction_sb_sLdR::synapse0x1a9c750() {
   return (neuron0x1a7cf60()*-0.00823315);
}

double NNfunction_sb_sLdR::synapse0x1a9c790() {
   return (neuron0x1a7d2a0()*0.00435153);
}

double NNfunction_sb_sLdR::synapse0x1a9c7d0() {
   return (neuron0x1a7d5e0()*0.00907708);
}

double NNfunction_sb_sLdR::synapse0x1a9c810() {
   return (neuron0x1a7d920()*-0.0850542);
}

double NNfunction_sb_sLdR::synapse0x1a9c850() {
   return (neuron0x1a7dc60()*0.0379582);
}

double NNfunction_sb_sLdR::synapse0x1a9c890() {
   return (neuron0x1a7dfa0()*0.0133823);
}

double NNfunction_sb_sLdR::synapse0x1a9c8d0() {
   return (neuron0x1a7e2e0()*0.00172213);
}

double NNfunction_sb_sLdR::synapse0x1a9c910() {
   return (neuron0x1a7e620()*-0.126326);
}

double NNfunction_sb_sLdR::synapse0x1a9c3a0() {
   return (neuron0x1a7e960()*-0.0218153);
}

double NNfunction_sb_sLdR::synapse0x1a9c3e0() {
   return (neuron0x1a7eec0()*-0.455058);
}

double NNfunction_sb_sLdR::synapse0x1a9ca60() {
   return (neuron0x1a7f0e0()*-0.0936124);
}

double NNfunction_sb_sLdR::synapse0x1a9caa0() {
   return (neuron0x1a7f420()*0.00104944);
}

double NNfunction_sb_sLdR::synapse0x1a9cae0() {
   return (neuron0x1a7f760()*0.0251111);
}

double NNfunction_sb_sLdR::synapse0x1a9cb20() {
   return (neuron0x1a7faa0()*-0.0231844);
}

double NNfunction_sb_sLdR::synapse0x1a9cb60() {
   return (neuron0x1a7fde0()*0.0068072);
}

double NNfunction_sb_sLdR::synapse0x1a9cba0() {
   return (neuron0x1a80120()*-0.0181588);
}

double NNfunction_sb_sLdR::synapse0x1a85650() {
   return (neuron0x1a7b560()*-0.0341724);
}

double NNfunction_sb_sLdR::synapse0x1a85690() {
   return (neuron0x1a7b8a0()*0.114639);
}

double NNfunction_sb_sLdR::synapse0x1a856d0() {
   return (neuron0x1a7bbe0()*-0.793047);
}

double NNfunction_sb_sLdR::synapse0x1a85710() {
   return (neuron0x1a7bf20()*1.82939);
}

double NNfunction_sb_sLdR::synapse0x1a85750() {
   return (neuron0x1a7c260()*0.227956);
}

double NNfunction_sb_sLdR::synapse0x1a85790() {
   return (neuron0x1a7c5a0()*-0.111914);
}

double NNfunction_sb_sLdR::synapse0x1a857d0() {
   return (neuron0x1a7c8e0()*-0.478142);
}

double NNfunction_sb_sLdR::synapse0x1a85810() {
   return (neuron0x1a7cc20()*0.0901412);
}

double NNfunction_sb_sLdR::synapse0x1a9d330() {
   return (neuron0x1a7cf60()*-0.153588);
}

double NNfunction_sb_sLdR::synapse0x1a9d370() {
   return (neuron0x1a7d2a0()*0.284895);
}

double NNfunction_sb_sLdR::synapse0x1a9d3b0() {
   return (neuron0x1a7d5e0()*-0.176149);
}

double NNfunction_sb_sLdR::synapse0x1a9d3f0() {
   return (neuron0x1a7d920()*0.0770679);
}

double NNfunction_sb_sLdR::synapse0x1a9d430() {
   return (neuron0x1a7dc60()*0.110662);
}

double NNfunction_sb_sLdR::synapse0x1a9d470() {
   return (neuron0x1a7dfa0()*0.230868);
}

double NNfunction_sb_sLdR::synapse0x1a9d4b0() {
   return (neuron0x1a7e2e0()*0.535705);
}

double NNfunction_sb_sLdR::synapse0x1a9d4f0() {
   return (neuron0x1a7e620()*-0.324471);
}

double NNfunction_sb_sLdR::synapse0x1a9cd70() {
   return (neuron0x1a7e960()*-0.311622);
}

double NNfunction_sb_sLdR::synapse0x1a9cdb0() {
   return (neuron0x1a7eec0()*0.0157265);
}

double NNfunction_sb_sLdR::synapse0x1a9d640() {
   return (neuron0x1a7f0e0()*0.218687);
}

double NNfunction_sb_sLdR::synapse0x1a9d680() {
   return (neuron0x1a7f420()*0.256521);
}

double NNfunction_sb_sLdR::synapse0x1a9d6c0() {
   return (neuron0x1a7f760()*-0.266489);
}

double NNfunction_sb_sLdR::synapse0x1a9d700() {
   return (neuron0x1a7faa0()*-0.240645);
}

double NNfunction_sb_sLdR::synapse0x1a9d740() {
   return (neuron0x1a7fde0()*0.122344);
}

double NNfunction_sb_sLdR::synapse0x1a9d780() {
   return (neuron0x1a80120()*0.291541);
}

double NNfunction_sb_sLdR::synapse0x1a9db00() {
   return (neuron0x1a7b560()*0.051957);
}

double NNfunction_sb_sLdR::synapse0x1a9db40() {
   return (neuron0x1a7b8a0()*-0.384422);
}

double NNfunction_sb_sLdR::synapse0x1a9db80() {
   return (neuron0x1a7bbe0()*-0.309878);
}

double NNfunction_sb_sLdR::synapse0x1a9dbc0() {
   return (neuron0x1a7bf20()*0.106603);
}

double NNfunction_sb_sLdR::synapse0x1a9dc00() {
   return (neuron0x1a7c260()*-0.29189);
}

double NNfunction_sb_sLdR::synapse0x1a9dc40() {
   return (neuron0x1a7c5a0()*0.483037);
}

double NNfunction_sb_sLdR::synapse0x1a9dc80() {
   return (neuron0x1a7c8e0()*-0.387466);
}

double NNfunction_sb_sLdR::synapse0x1a9dcc0() {
   return (neuron0x1a7cc20()*0.467199);
}

double NNfunction_sb_sLdR::synapse0x1a9dd00() {
   return (neuron0x1a7cf60()*0.480659);
}

double NNfunction_sb_sLdR::synapse0x1a9dd40() {
   return (neuron0x1a7d2a0()*0.446852);
}

double NNfunction_sb_sLdR::synapse0x1a9dd80() {
   return (neuron0x1a7d5e0()*1.53788);
}

double NNfunction_sb_sLdR::synapse0x1a9ddc0() {
   return (neuron0x1a7d920()*-0.477855);
}

double NNfunction_sb_sLdR::synapse0x1a9de00() {
   return (neuron0x1a7dc60()*0.217947);
}

double NNfunction_sb_sLdR::synapse0x1a9de40() {
   return (neuron0x1a7dfa0()*0.00700264);
}

double NNfunction_sb_sLdR::synapse0x1a9de80() {
   return (neuron0x1a7e2e0()*-0.235296);
}

double NNfunction_sb_sLdR::synapse0x1a9dec0() {
   return (neuron0x1a7e620()*-0.461566);
}

double NNfunction_sb_sLdR::synapse0x1a9d950() {
   return (neuron0x1a7e960()*-0.119563);
}

double NNfunction_sb_sLdR::synapse0x1a9d990() {
   return (neuron0x1a7eec0()*-0.209295);
}

double NNfunction_sb_sLdR::synapse0x1a9e010() {
   return (neuron0x1a7f0e0()*-0.11725);
}

double NNfunction_sb_sLdR::synapse0x1a9e050() {
   return (neuron0x1a7f420()*0.465319);
}

double NNfunction_sb_sLdR::synapse0x1a9e090() {
   return (neuron0x1a7f760()*0.664345);
}

double NNfunction_sb_sLdR::synapse0x1a9e0d0() {
   return (neuron0x1a7faa0()*-0.756872);
}

double NNfunction_sb_sLdR::synapse0x1a9e110() {
   return (neuron0x1a7fde0()*-0.563107);
}

double NNfunction_sb_sLdR::synapse0x1a9e150() {
   return (neuron0x1a80120()*-0.411997);
}

double NNfunction_sb_sLdR::synapse0x1a9e4d0() {
   return (neuron0x1a7b560()*-0.00611224);
}

double NNfunction_sb_sLdR::synapse0x1a9e510() {
   return (neuron0x1a7b8a0()*-0.00580657);
}

double NNfunction_sb_sLdR::synapse0x1a9e550() {
   return (neuron0x1a7bbe0()*0.00702985);
}

double NNfunction_sb_sLdR::synapse0x1a9e590() {
   return (neuron0x1a7bf20()*-2.74025);
}

double NNfunction_sb_sLdR::synapse0x1a9e5d0() {
   return (neuron0x1a7c260()*0.0628827);
}

double NNfunction_sb_sLdR::synapse0x1a9e610() {
   return (neuron0x1a7c5a0()*-0.00115283);
}

double NNfunction_sb_sLdR::synapse0x1a9e650() {
   return (neuron0x1a7c8e0()*0.0661822);
}

double NNfunction_sb_sLdR::synapse0x1a9e690() {
   return (neuron0x1a7cc20()*-0.00771508);
}

double NNfunction_sb_sLdR::synapse0x1a9e6d0() {
   return (neuron0x1a7cf60()*-0.0250784);
}

double NNfunction_sb_sLdR::synapse0x1a9e710() {
   return (neuron0x1a7d2a0()*-0.0210641);
}

double NNfunction_sb_sLdR::synapse0x1a9e750() {
   return (neuron0x1a7d5e0()*0.044543);
}

double NNfunction_sb_sLdR::synapse0x1a9e790() {
   return (neuron0x1a7d920()*0.0851867);
}

double NNfunction_sb_sLdR::synapse0x1a9e7d0() {
   return (neuron0x1a7dc60()*-0.12093);
}

double NNfunction_sb_sLdR::synapse0x1a9e810() {
   return (neuron0x1a7dfa0()*-0.0121299);
}

double NNfunction_sb_sLdR::synapse0x1a9e850() {
   return (neuron0x1a7e2e0()*-0.063606);
}

double NNfunction_sb_sLdR::synapse0x1a9e890() {
   return (neuron0x1a7e620()*0.218383);
}

double NNfunction_sb_sLdR::synapse0x1a9e320() {
   return (neuron0x1a7e960()*-0.0642768);
}

double NNfunction_sb_sLdR::synapse0x1a9e360() {
   return (neuron0x1a7eec0()*-0.178877);
}

double NNfunction_sb_sLdR::synapse0x1a8ee90() {
   return (neuron0x1a7f0e0()*-0.0179331);
}

double NNfunction_sb_sLdR::synapse0x1a8eed0() {
   return (neuron0x1a7f420()*-0.00208416);
}

double NNfunction_sb_sLdR::synapse0x1a8ef10() {
   return (neuron0x1a7f760()*-0.0621496);
}

double NNfunction_sb_sLdR::synapse0x1a8ef50() {
   return (neuron0x1a7faa0()*-0.0242273);
}

double NNfunction_sb_sLdR::synapse0x1a8ef90() {
   return (neuron0x1a7fde0()*0.0262638);
}

double NNfunction_sb_sLdR::synapse0x1a8efd0() {
   return (neuron0x1a80120()*0.00684278);
}

double NNfunction_sb_sLdR::synapse0x1a8f350() {
   return (neuron0x1a7b560()*0.0282448);
}

double NNfunction_sb_sLdR::synapse0x1a8f390() {
   return (neuron0x1a7b8a0()*-0.0515195);
}

double NNfunction_sb_sLdR::synapse0x1a8f3d0() {
   return (neuron0x1a7bbe0()*0.0536273);
}

double NNfunction_sb_sLdR::synapse0x1a8f410() {
   return (neuron0x1a7bf20()*1.21229);
}

double NNfunction_sb_sLdR::synapse0x1a8f450() {
   return (neuron0x1a7c260()*0.0045139);
}

double NNfunction_sb_sLdR::synapse0x1a8f490() {
   return (neuron0x1a7c5a0()*-0.00209033);
}

double NNfunction_sb_sLdR::synapse0x1a8f4d0() {
   return (neuron0x1a7c8e0()*0.00501356);
}

double NNfunction_sb_sLdR::synapse0x1a8f510() {
   return (neuron0x1a7cc20()*0.000529923);
}

double NNfunction_sb_sLdR::synapse0x1a8f550() {
   return (neuron0x1a7cf60()*-0.0229353);
}

double NNfunction_sb_sLdR::synapse0x1a8f590() {
   return (neuron0x1a7d2a0()*-0.0153577);
}

double NNfunction_sb_sLdR::synapse0x1a8f5d0() {
   return (neuron0x1a7d5e0()*0.0174406);
}

double NNfunction_sb_sLdR::synapse0x1a8f610() {
   return (neuron0x1a7d920()*0.0329023);
}

double NNfunction_sb_sLdR::synapse0x1a8f650() {
   return (neuron0x1a7dc60()*0.177069);
}

double NNfunction_sb_sLdR::synapse0x1a8f690() {
   return (neuron0x1a7dfa0()*0.0483495);
}

double NNfunction_sb_sLdR::synapse0x1a8f6d0() {
   return (neuron0x1a7e2e0()*-0.0103128);
}

double NNfunction_sb_sLdR::synapse0x1a8f710() {
   return (neuron0x1a7e620()*0.060079);
}

double NNfunction_sb_sLdR::synapse0x1a8f1a0() {
   return (neuron0x1a7e960()*-0.0254103);
}

double NNfunction_sb_sLdR::synapse0x1a8f1e0() {
   return (neuron0x1a7eec0()*-2.36655);
}

double NNfunction_sb_sLdR::synapse0x1a8f860() {
   return (neuron0x1a7f0e0()*0.000515151);
}

double NNfunction_sb_sLdR::synapse0x1a8f8a0() {
   return (neuron0x1a7f420()*0.0185245);
}

double NNfunction_sb_sLdR::synapse0x1a8f8e0() {
   return (neuron0x1a7f760()*-0.0181193);
}

double NNfunction_sb_sLdR::synapse0x1a8f920() {
   return (neuron0x1a7faa0()*-0.0296934);
}

double NNfunction_sb_sLdR::synapse0x1a8f960() {
   return (neuron0x1a7fde0()*-0.0154049);
}

double NNfunction_sb_sLdR::synapse0x1a8f9a0() {
   return (neuron0x1a80120()*0.0157757);
}

double NNfunction_sb_sLdR::synapse0x1a8fd20() {
   return (neuron0x1a7b560()*-0.0393543);
}

double NNfunction_sb_sLdR::synapse0x1a8fd60() {
   return (neuron0x1a7b8a0()*-0.0244563);
}

double NNfunction_sb_sLdR::synapse0x1a8fda0() {
   return (neuron0x1a7bbe0()*-0.144856);
}

double NNfunction_sb_sLdR::synapse0x1a8fde0() {
   return (neuron0x1a7bf20()*0.41279);
}

double NNfunction_sb_sLdR::synapse0x1a8fe20() {
   return (neuron0x1a7c260()*0.00825414);
}

double NNfunction_sb_sLdR::synapse0x1a8fe60() {
   return (neuron0x1a7c5a0()*-0.00210315);
}

double NNfunction_sb_sLdR::synapse0x1a8fea0() {
   return (neuron0x1a7c8e0()*0.0671447);
}

double NNfunction_sb_sLdR::synapse0x1a8fee0() {
   return (neuron0x1a7cc20()*-0.0580936);
}

double NNfunction_sb_sLdR::synapse0x1a8ff20() {
   return (neuron0x1a7cf60()*0.00340724);
}

double NNfunction_sb_sLdR::synapse0x1a8ff60() {
   return (neuron0x1a7d2a0()*-0.0325495);
}

double NNfunction_sb_sLdR::synapse0x1a8ffa0() {
   return (neuron0x1a7d5e0()*0.035707);
}

double NNfunction_sb_sLdR::synapse0x1a8ffe0() {
   return (neuron0x1a7d920()*0.488161);
}

double NNfunction_sb_sLdR::synapse0x1a90020() {
   return (neuron0x1a7dc60()*-0.0192841);
}

double NNfunction_sb_sLdR::synapse0x1a90060() {
   return (neuron0x1a7dfa0()*-0.0950776);
}

double NNfunction_sb_sLdR::synapse0x1a900a0() {
   return (neuron0x1a7e2e0()*0.460814);
}

double NNfunction_sb_sLdR::synapse0x1a900e0() {
   return (neuron0x1a7e620()*0.14607);
}

double NNfunction_sb_sLdR::synapse0x1a8fb70() {
   return (neuron0x1a7e960()*-0.0334796);
}

double NNfunction_sb_sLdR::synapse0x1a8fbb0() {
   return (neuron0x1a7eec0()*-0.160696);
}

double NNfunction_sb_sLdR::synapse0x1a90230() {
   return (neuron0x1a7f0e0()*0.234029);
}

double NNfunction_sb_sLdR::synapse0x1a90270() {
   return (neuron0x1a7f420()*-0.00774479);
}

double NNfunction_sb_sLdR::synapse0x1a902b0() {
   return (neuron0x1a7f760()*-0.00376242);
}

double NNfunction_sb_sLdR::synapse0x1a902f0() {
   return (neuron0x1a7faa0()*0.0145112);
}

double NNfunction_sb_sLdR::synapse0x1a90330() {
   return (neuron0x1a7fde0()*-0.0156594);
}

double NNfunction_sb_sLdR::synapse0x1a90370() {
   return (neuron0x1a80120()*-0.000787739);
}

double NNfunction_sb_sLdR::synapse0x1a906f0() {
   return (neuron0x1a7b560()*0.0175592);
}

double NNfunction_sb_sLdR::synapse0x1a90730() {
   return (neuron0x1a7b8a0()*-0.0250798);
}

double NNfunction_sb_sLdR::synapse0x1a90770() {
   return (neuron0x1a7bbe0()*-0.0204376);
}

double NNfunction_sb_sLdR::synapse0x1a907b0() {
   return (neuron0x1a7bf20()*-0.222335);
}

double NNfunction_sb_sLdR::synapse0x1a907f0() {
   return (neuron0x1a7c260()*0.00323578);
}

double NNfunction_sb_sLdR::synapse0x1a90830() {
   return (neuron0x1a7c5a0()*-0.0158057);
}

double NNfunction_sb_sLdR::synapse0x1a90870() {
   return (neuron0x1a7c8e0()*0.0383281);
}

double NNfunction_sb_sLdR::synapse0x1a908b0() {
   return (neuron0x1a7cc20()*0.000245664);
}

double NNfunction_sb_sLdR::synapse0x1a908f0() {
   return (neuron0x1a7cf60()*-0.0413305);
}

double NNfunction_sb_sLdR::synapse0x1a90930() {
   return (neuron0x1a7d2a0()*-0.0419561);
}

double NNfunction_sb_sLdR::synapse0x1a90970() {
   return (neuron0x1a7d5e0()*0.0169635);
}

double NNfunction_sb_sLdR::synapse0x1a909b0() {
   return (neuron0x1a7d920()*0.0266339);
}

double NNfunction_sb_sLdR::synapse0x1a909f0() {
   return (neuron0x1a7dc60()*0.602302);
}

double NNfunction_sb_sLdR::synapse0x1a90a30() {
   return (neuron0x1a7dfa0()*0.0202371);
}

double NNfunction_sb_sLdR::synapse0x1a90a70() {
   return (neuron0x1a7e2e0()*0.0140526);
}

double NNfunction_sb_sLdR::synapse0x1a90ab0() {
   return (neuron0x1a7e620()*-0.00458574);
}

double NNfunction_sb_sLdR::synapse0x1a90540() {
   return (neuron0x1a7e960()*0.0284306);
}

double NNfunction_sb_sLdR::synapse0x1a90580() {
   return (neuron0x1a7eec0()*0.0968984);
}

double NNfunction_sb_sLdR::synapse0x1a90c00() {
   return (neuron0x1a7f0e0()*-0.0299116);
}

double NNfunction_sb_sLdR::synapse0x1a90c40() {
   return (neuron0x1a7f420()*-0.00660933);
}

double NNfunction_sb_sLdR::synapse0x1a90c80() {
   return (neuron0x1a7f760()*-0.0215485);
}

double NNfunction_sb_sLdR::synapse0x1a90cc0() {
   return (neuron0x1a7faa0()*0.014148);
}

double NNfunction_sb_sLdR::synapse0x1a90d00() {
   return (neuron0x1a7fde0()*0.004755);
}

double NNfunction_sb_sLdR::synapse0x1a90d40() {
   return (neuron0x1a80120()*-0.00738826);
}

double NNfunction_sb_sLdR::synapse0x1aa2c10() {
   return (neuron0x1a7b560()*-0.0111247);
}

double NNfunction_sb_sLdR::synapse0x1aa2c50() {
   return (neuron0x1a7b8a0()*-0.000287042);
}

double NNfunction_sb_sLdR::synapse0x1aa2c90() {
   return (neuron0x1a7bbe0()*0.0752187);
}

double NNfunction_sb_sLdR::synapse0x1aa2cd0() {
   return (neuron0x1a7bf20()*-1.19512);
}

double NNfunction_sb_sLdR::synapse0x1aa2d10() {
   return (neuron0x1a7c260()*0.110528);
}

double NNfunction_sb_sLdR::synapse0x1aa2d50() {
   return (neuron0x1a7c5a0()*0.151371);
}

double NNfunction_sb_sLdR::synapse0x1aa2d90() {
   return (neuron0x1a7c8e0()*-0.088501);
}

double NNfunction_sb_sLdR::synapse0x1aa2dd0() {
   return (neuron0x1a7cc20()*0.00673275);
}

double NNfunction_sb_sLdR::synapse0x1aa2e10() {
   return (neuron0x1a7cf60()*0.0970198);
}

double NNfunction_sb_sLdR::synapse0x1aa2e50() {
   return (neuron0x1a7d2a0()*0.0588584);
}

double NNfunction_sb_sLdR::synapse0x1aa2e90() {
   return (neuron0x1a7d5e0()*0.0451648);
}

double NNfunction_sb_sLdR::synapse0x1aa2ed0() {
   return (neuron0x1a7d920()*-0.0403427);
}

double NNfunction_sb_sLdR::synapse0x1aa2f10() {
   return (neuron0x1a7dc60()*1.16366);
}

double NNfunction_sb_sLdR::synapse0x1aa2f50() {
   return (neuron0x1a7dfa0()*-0.0972878);
}

double NNfunction_sb_sLdR::synapse0x1aa2f90() {
   return (neuron0x1a7e2e0()*-0.024162);
}

double NNfunction_sb_sLdR::synapse0x1aa2fd0() {
   return (neuron0x1a7e620()*0.0563225);
}

double NNfunction_sb_sLdR::synapse0x1a90d80() {
   return (neuron0x1a7e960()*0.118676);
}

double NNfunction_sb_sLdR::synapse0x1a90dc0() {
   return (neuron0x1a7eec0()*-2.65438);
}

double NNfunction_sb_sLdR::synapse0x1aa3120() {
   return (neuron0x1a7f0e0()*-0.00501463);
}

double NNfunction_sb_sLdR::synapse0x1aa3160() {
   return (neuron0x1a7f420()*-0.00552929);
}

double NNfunction_sb_sLdR::synapse0x1aa31a0() {
   return (neuron0x1a7f760()*0.0366351);
}

double NNfunction_sb_sLdR::synapse0x1aa31e0() {
   return (neuron0x1a7faa0()*0.00341729);
}

double NNfunction_sb_sLdR::synapse0x1aa3220() {
   return (neuron0x1a7fde0()*-0.068615);
}

double NNfunction_sb_sLdR::synapse0x1aa3260() {
   return (neuron0x1a80120()*0.0526021);
}

double NNfunction_sb_sLdR::synapse0x1aa35e0() {
   return (neuron0x1a7b560()*0.51052);
}

double NNfunction_sb_sLdR::synapse0x1aa3620() {
   return (neuron0x1a7b8a0()*0.0254548);
}

double NNfunction_sb_sLdR::synapse0x1aa3660() {
   return (neuron0x1a7bbe0()*-0.683905);
}

double NNfunction_sb_sLdR::synapse0x1aa36a0() {
   return (neuron0x1a7bf20()*0.544213);
}

double NNfunction_sb_sLdR::synapse0x1aa36e0() {
   return (neuron0x1a7c260()*-0.494892);
}

double NNfunction_sb_sLdR::synapse0x1aa3720() {
   return (neuron0x1a7c5a0()*-0.877327);
}

double NNfunction_sb_sLdR::synapse0x1aa3760() {
   return (neuron0x1a7c8e0()*-0.116727);
}

double NNfunction_sb_sLdR::synapse0x1aa37a0() {
   return (neuron0x1a7cc20()*0.736333);
}

double NNfunction_sb_sLdR::synapse0x1aa37e0() {
   return (neuron0x1a7cf60()*-0.297129);
}

double NNfunction_sb_sLdR::synapse0x1aa3820() {
   return (neuron0x1a7d2a0()*-0.384148);
}

double NNfunction_sb_sLdR::synapse0x1aa3860() {
   return (neuron0x1a7d5e0()*-0.277266);
}

double NNfunction_sb_sLdR::synapse0x1aa38a0() {
   return (neuron0x1a7d920()*-0.504584);
}

double NNfunction_sb_sLdR::synapse0x1aa38e0() {
   return (neuron0x1a7dc60()*0.554184);
}

double NNfunction_sb_sLdR::synapse0x1aa3920() {
   return (neuron0x1a7dfa0()*0.109948);
}

double NNfunction_sb_sLdR::synapse0x1aa3960() {
   return (neuron0x1a7e2e0()*0.161894);
}

double NNfunction_sb_sLdR::synapse0x1aa39a0() {
   return (neuron0x1a7e620()*-0.81038);
}

double NNfunction_sb_sLdR::synapse0x1aa3430() {
   return (neuron0x1a7e960()*0.651475);
}

double NNfunction_sb_sLdR::synapse0x1aa3470() {
   return (neuron0x1a7eec0()*0.165095);
}

double NNfunction_sb_sLdR::synapse0x1aa3af0() {
   return (neuron0x1a7f0e0()*-0.524093);
}

double NNfunction_sb_sLdR::synapse0x1aa3b30() {
   return (neuron0x1a7f420()*0.0521662);
}

double NNfunction_sb_sLdR::synapse0x1aa3b70() {
   return (neuron0x1a7f760()*-1.24649);
}

double NNfunction_sb_sLdR::synapse0x1aa3bb0() {
   return (neuron0x1a7faa0()*0.415572);
}

double NNfunction_sb_sLdR::synapse0x1aa3bf0() {
   return (neuron0x1a7fde0()*0.965468);
}

double NNfunction_sb_sLdR::synapse0x1aa3c30() {
   return (neuron0x1a80120()*0.381018);
}

double NNfunction_sb_sLdR::synapse0x1aa3fb0() {
   return (neuron0x1a7b560()*-0.0292991);
}

double NNfunction_sb_sLdR::synapse0x1aa3ff0() {
   return (neuron0x1a7b8a0()*0.0108861);
}

double NNfunction_sb_sLdR::synapse0x1aa4030() {
   return (neuron0x1a7bbe0()*0.0528562);
}

double NNfunction_sb_sLdR::synapse0x1aa4070() {
   return (neuron0x1a7bf20()*-0.434331);
}

double NNfunction_sb_sLdR::synapse0x1aa40b0() {
   return (neuron0x1a7c260()*0.0501056);
}

double NNfunction_sb_sLdR::synapse0x1aa40f0() {
   return (neuron0x1a7c5a0()*0.0149786);
}

double NNfunction_sb_sLdR::synapse0x1aa4130() {
   return (neuron0x1a7c8e0()*-0.0217485);
}

double NNfunction_sb_sLdR::synapse0x1aa4170() {
   return (neuron0x1a7cc20()*-0.00840287);
}

double NNfunction_sb_sLdR::synapse0x1aa41b0() {
   return (neuron0x1a7cf60()*-0.0973906);
}

double NNfunction_sb_sLdR::synapse0x1aa41f0() {
   return (neuron0x1a7d2a0()*-0.0318068);
}

double NNfunction_sb_sLdR::synapse0x1aa4230() {
   return (neuron0x1a7d5e0()*-0.067141);
}

double NNfunction_sb_sLdR::synapse0x1aa4270() {
   return (neuron0x1a7d920()*-0.03307);
}

double NNfunction_sb_sLdR::synapse0x1aa42b0() {
   return (neuron0x1a7dc60()*-0.648338);
}

double NNfunction_sb_sLdR::synapse0x1aa42f0() {
   return (neuron0x1a7dfa0()*0.0563544);
}

double NNfunction_sb_sLdR::synapse0x1aa4330() {
   return (neuron0x1a7e2e0()*-0.000752432);
}

double NNfunction_sb_sLdR::synapse0x1aa4370() {
   return (neuron0x1a7e620()*0.0107368);
}

double NNfunction_sb_sLdR::synapse0x1aa3e00() {
   return (neuron0x1a7e960()*0.0193827);
}

double NNfunction_sb_sLdR::synapse0x1aa3e40() {
   return (neuron0x1a7eec0()*3.40301);
}

double NNfunction_sb_sLdR::synapse0x1aa44c0() {
   return (neuron0x1a7f0e0()*-0.0644124);
}

double NNfunction_sb_sLdR::synapse0x1aa4500() {
   return (neuron0x1a7f420()*0.0139287);
}

double NNfunction_sb_sLdR::synapse0x1aa4540() {
   return (neuron0x1a7f760()*0.0149283);
}

double NNfunction_sb_sLdR::synapse0x1aa4580() {
   return (neuron0x1a7faa0()*-0.00567705);
}

double NNfunction_sb_sLdR::synapse0x1aa45c0() {
   return (neuron0x1a7fde0()*0.0198901);
}

double NNfunction_sb_sLdR::synapse0x1aa4600() {
   return (neuron0x1a80120()*0.078163);
}

double NNfunction_sb_sLdR::synapse0x1aa4980() {
   return (neuron0x1a7b560()*-0.0129471);
}

double NNfunction_sb_sLdR::synapse0x1aa49c0() {
   return (neuron0x1a7b8a0()*0.00913101);
}

double NNfunction_sb_sLdR::synapse0x1aa4a00() {
   return (neuron0x1a7bbe0()*-0.0141677);
}

double NNfunction_sb_sLdR::synapse0x1aa4a40() {
   return (neuron0x1a7bf20()*1.51138);
}

double NNfunction_sb_sLdR::synapse0x1aa4a80() {
   return (neuron0x1a7c260()*-0.0152837);
}

double NNfunction_sb_sLdR::synapse0x1aa4ac0() {
   return (neuron0x1a7c5a0()*-0.000446216);
}

double NNfunction_sb_sLdR::synapse0x1aa4b00() {
   return (neuron0x1a7c8e0()*0.00761794);
}

double NNfunction_sb_sLdR::synapse0x1aa4b40() {
   return (neuron0x1a7cc20()*-0.00232884);
}

double NNfunction_sb_sLdR::synapse0x1aa4b80() {
   return (neuron0x1a7cf60()*0.0319616);
}

double NNfunction_sb_sLdR::synapse0x1aa4bc0() {
   return (neuron0x1a7d2a0()*-0.00765229);
}

double NNfunction_sb_sLdR::synapse0x1aa4c00() {
   return (neuron0x1a7d5e0()*0.0193687);
}

double NNfunction_sb_sLdR::synapse0x1aa4c40() {
   return (neuron0x1a7d920()*-0.000545794);
}

double NNfunction_sb_sLdR::synapse0x1aa4c80() {
   return (neuron0x1a7dc60()*0.0737405);
}

double NNfunction_sb_sLdR::synapse0x1aa4cc0() {
   return (neuron0x1a7dfa0()*0.00111);
}

double NNfunction_sb_sLdR::synapse0x1aa4d00() {
   return (neuron0x1a7e2e0()*-0.00309293);
}

double NNfunction_sb_sLdR::synapse0x1aa4d40() {
   return (neuron0x1a7e620()*-0.0269133);
}

double NNfunction_sb_sLdR::synapse0x1aa47d0() {
   return (neuron0x1a7e960()*-0.0273394);
}

double NNfunction_sb_sLdR::synapse0x1aa4810() {
   return (neuron0x1a7eec0()*-0.842006);
}

double NNfunction_sb_sLdR::synapse0x1aa4e90() {
   return (neuron0x1a7f0e0()*-0.0128961);
}

double NNfunction_sb_sLdR::synapse0x1aa4ed0() {
   return (neuron0x1a7f420()*0.00793582);
}

double NNfunction_sb_sLdR::synapse0x1aa4f10() {
   return (neuron0x1a7f760()*-0.000174031);
}

double NNfunction_sb_sLdR::synapse0x1aa4f50() {
   return (neuron0x1a7faa0()*-0.00698375);
}

double NNfunction_sb_sLdR::synapse0x1aa4f90() {
   return (neuron0x1a7fde0()*0.00265722);
}

double NNfunction_sb_sLdR::synapse0x1aa4fd0() {
   return (neuron0x1a80120()*0.00192329);
}

double NNfunction_sb_sLdR::synapse0x1a81570() {
   return (neuron0x1a805c0()*0.753065);
}

double NNfunction_sb_sLdR::synapse0x1a815b0() {
   return (neuron0x1a80ed0()*0.712414);
}

double NNfunction_sb_sLdR::synapse0x1a82a80() {
   return (neuron0x1a819b0()*4.86844);
}

double NNfunction_sb_sLdR::synapse0x1a82ac0() {
   return (neuron0x183b240()*-1.62179);
}

double NNfunction_sb_sLdR::synapse0x1a83450() {
   return (neuron0x1a827d0()*-1.01952);
}

double NNfunction_sb_sLdR::synapse0x1a83490() {
   return (neuron0x1a831a0()*0.195307);
}

double NNfunction_sb_sLdR::synapse0x1a84220() {
   return (neuron0x1a83f70()*-1.1865);
}

double NNfunction_sb_sLdR::synapse0x1a84260() {
   return (neuron0x1a84940()*-0.751134);
}

double NNfunction_sb_sLdR::synapse0x1a84bf0() {
   return (neuron0x1a85310()*-1.10038);
}

double NNfunction_sb_sLdR::synapse0x1a84c30() {
   return (neuron0x1a85df0()*0.623983);
}

double NNfunction_sb_sLdR::synapse0x1a855c0() {
   return (neuron0x1a867c0()*1.21418);
}

double NNfunction_sb_sLdR::synapse0x1a85600() {
   return (neuron0x1a838a0()*-0.451654);
}

double NNfunction_sb_sLdR::synapse0x1a860a0() {
   return (neuron0x1a88370()*2.35146);
}

double NNfunction_sb_sLdR::synapse0x1a860e0() {
   return (neuron0x1a88d40()*1.0588);
}

double NNfunction_sb_sLdR::synapse0x1a86a70() {
   return (neuron0x1a89710()*-2.3539);
}

double NNfunction_sb_sLdR::synapse0x1a86ab0() {
   return (neuron0x1a8a0e0()*1.1194);
}

double NNfunction_sb_sLdR::synapse0x1a83b50() {
   return (neuron0x1a8bef0()*0.853633);
}

double NNfunction_sb_sLdR::synapse0x1a83b90() {
   return (neuron0x1a8c1d0()*-0.117661);
}

double NNfunction_sb_sLdR::synapse0x1a88620() {
   return (neuron0x1a8cba0()*1.22196);
}

double NNfunction_sb_sLdR::synapse0x1a88660() {
   return (neuron0x1a8d570()*0.459021);
}

double NNfunction_sb_sLdR::synapse0x1a88ff0() {
   return (neuron0x1a8df40()*-0.37439);
}

double NNfunction_sb_sLdR::synapse0x1a89030() {
   return (neuron0x1a8e910()*-0.340605);
}

double NNfunction_sb_sLdR::synapse0x1a899c0() {
   return (neuron0x1a87460()*-0.624213);
}

double NNfunction_sb_sLdR::synapse0x1a89a00() {
   return (neuron0x1a87e30()*-3.03587);
}

double NNfunction_sb_sLdR::synapse0x1a8a390() {
   return (neuron0x1a916a0()*0.930497);
}

double NNfunction_sb_sLdR::synapse0x1a8a3d0() {
   return (neuron0x1a92070()*0.0920461);
}

double NNfunction_sb_sLdR::synapse0x1a7e500() {
   return (neuron0x1a92a40()*-0.205406);
}

double NNfunction_sb_sLdR::synapse0x1a7e540() {
   return (neuron0x1a93410()*0.533092);
}

double NNfunction_sb_sLdR::synapse0x1a8c480() {
   return (neuron0x1a93de0()*-0.097995);
}

double NNfunction_sb_sLdR::synapse0x1a8c4c0() {
   return (neuron0x1a947b0()*-4.18618);
}

double NNfunction_sb_sLdR::synapse0x1a8ce50() {
   return (neuron0x1a95180()*0.750767);
}

double NNfunction_sb_sLdR::synapse0x1a8ce90() {
   return (neuron0x1a95b50()*0.850411);
}

double NNfunction_sb_sLdR::synapse0x1a8d820() {
   return (neuron0x1a8bbe0()*0.483587);
}

double NNfunction_sb_sLdR::synapse0x1a8d860() {
   return (neuron0x1a98730()*-0.0237644);
}

double NNfunction_sb_sLdR::synapse0x1a8e1f0() {
   return (neuron0x1a99100()*-0.224528);
}

double NNfunction_sb_sLdR::synapse0x1a8e230() {
   return (neuron0x1a99ad0()*-2.03595);
}

double NNfunction_sb_sLdR::synapse0x1a8ebc0() {
   return (neuron0x1a9a4a0()*1.36755);
}

double NNfunction_sb_sLdR::synapse0x1a8ec00() {
   return (neuron0x1a9ae70()*0.884724);
}

double NNfunction_sb_sLdR::synapse0x1a87710() {
   return (neuron0x1a9b840()*-0.847155);
}

double NNfunction_sb_sLdR::synapse0x1a87750() {
   return (neuron0x1a9c210()*-1.01809);
}

double NNfunction_sb_sLdR::synapse0x1a90fc0() {
   return (neuron0x1a9cbe0()*-1.85331);
}

double NNfunction_sb_sLdR::synapse0x1a91000() {
   return (neuron0x1a9d7c0()*-0.899419);
}

double NNfunction_sb_sLdR::synapse0x1a91950() {
   return (neuron0x1a9e190()*0.115779);
}

double NNfunction_sb_sLdR::synapse0x1a91990() {
   return (neuron0x1a8f010()*-2.07206);
}

double NNfunction_sb_sLdR::synapse0x1a92320() {
   return (neuron0x1a8f9e0()*-0.472482);
}

double NNfunction_sb_sLdR::synapse0x1a92360() {
   return (neuron0x1a903b0()*-0.807391);
}

double NNfunction_sb_sLdR::synapse0x1a92cf0() {
   return (neuron0x1aa29f0()*1.95272);
}

double NNfunction_sb_sLdR::synapse0x1a92d30() {
   return (neuron0x1aa32a0()*-0.85927);
}

double NNfunction_sb_sLdR::synapse0x1a936c0() {
   return (neuron0x1aa3c70()*0.0240331);
}

double NNfunction_sb_sLdR::synapse0x1a93700() {
   return (neuron0x1aa4640()*-2.14977);
}

double NNfunction_sb_sLdR::synapse0x1a95e00() {
   return (neuron0x1a805c0()*0.10353);
}

double NNfunction_sb_sLdR::synapse0x1a95e40() {
   return (neuron0x1a80ed0()*-1.81404);
}

double NNfunction_sb_sLdR::synapse0x1a8b3c0() {
   return (neuron0x1a819b0()*-2.62254);
}

double NNfunction_sb_sLdR::synapse0x1a8b400() {
   return (neuron0x183b240()*-0.415434);
}

double NNfunction_sb_sLdR::synapse0x1a989e0() {
   return (neuron0x1a827d0()*0.156759);
}

double NNfunction_sb_sLdR::synapse0x1a98a20() {
   return (neuron0x1a831a0()*0.495733);
}

double NNfunction_sb_sLdR::synapse0x1a993b0() {
   return (neuron0x1a83f70()*0.271891);
}

double NNfunction_sb_sLdR::synapse0x1a993f0() {
   return (neuron0x1a84940()*-1.96842);
}

double NNfunction_sb_sLdR::synapse0x1a99d80() {
   return (neuron0x1a85310()*-1.57662);
}

double NNfunction_sb_sLdR::synapse0x1a99dc0() {
   return (neuron0x1a85df0()*0.552382);
}

double NNfunction_sb_sLdR::synapse0x1a9a750() {
   return (neuron0x1a867c0()*0.0600884);
}

double NNfunction_sb_sLdR::synapse0x1a9a790() {
   return (neuron0x1a838a0()*-0.417639);
}

double NNfunction_sb_sLdR::synapse0x1a9b120() {
   return (neuron0x1a88370()*-0.350757);
}

double NNfunction_sb_sLdR::synapse0x1a9b160() {
   return (neuron0x1a88d40()*0.124862);
}

double NNfunction_sb_sLdR::synapse0x1a9baf0() {
   return (neuron0x1a89710()*2.84945);
}

double NNfunction_sb_sLdR::synapse0x1a9bb30() {
   return (neuron0x1a8a0e0()*-3.026);
}

double NNfunction_sb_sLdR::synapse0x1a9c4c0() {
   return (neuron0x1a8bef0()*0.0449517);
}

double NNfunction_sb_sLdR::synapse0x1a9c500() {
   return (neuron0x1a8c1d0()*1.18554);
}

double NNfunction_sb_sLdR::synapse0x1a9ce90() {
   return (neuron0x1a8cba0()*-0.0039857);
}

double NNfunction_sb_sLdR::synapse0x1a9ced0() {
   return (neuron0x1a8d570()*0.73413);
}

double NNfunction_sb_sLdR::synapse0x1a9da70() {
   return (neuron0x1a8df40()*1.08795);
}

double NNfunction_sb_sLdR::synapse0x1a9dab0() {
   return (neuron0x1a8e910()*1.47119);
}

double NNfunction_sb_sLdR::synapse0x1a9e440() {
   return (neuron0x1a87460()*1.05808);
}

double NNfunction_sb_sLdR::synapse0x1a9e480() {
   return (neuron0x1a87e30()*1.37013);
}

double NNfunction_sb_sLdR::synapse0x1a8f2c0() {
   return (neuron0x1a916a0()*-0.194085);
}

double NNfunction_sb_sLdR::synapse0x1a8f300() {
   return (neuron0x1a92070()*0.654433);
}

double NNfunction_sb_sLdR::synapse0x1a8fc90() {
   return (neuron0x1a92a40()*-1.64277);
}

double NNfunction_sb_sLdR::synapse0x1a8fcd0() {
   return (neuron0x1a93410()*0.2828);
}

double NNfunction_sb_sLdR::synapse0x1a90660() {
   return (neuron0x1a93de0()*0.879294);
}

double NNfunction_sb_sLdR::synapse0x1a906a0() {
   return (neuron0x1a947b0()*-3.77517);
}

double NNfunction_sb_sLdR::synapse0x1aa2b80() {
   return (neuron0x1a95180()*0.0715972);
}

double NNfunction_sb_sLdR::synapse0x1aa2bc0() {
   return (neuron0x1a95b50()*-0.142376);
}

double NNfunction_sb_sLdR::synapse0x1aa3550() {
   return (neuron0x1a8bbe0()*0.398231);
}

double NNfunction_sb_sLdR::synapse0x1aa3590() {
   return (neuron0x1a98730()*1.2667);
}

double NNfunction_sb_sLdR::synapse0x1aa3f20() {
   return (neuron0x1a99100()*-1.40647);
}

double NNfunction_sb_sLdR::synapse0x1aa3f60() {
   return (neuron0x1a99ad0()*0.0100259);
}

double NNfunction_sb_sLdR::synapse0x1aa48f0() {
   return (neuron0x1a9a4a0()*5.11766);
}

double NNfunction_sb_sLdR::synapse0x1aa4930() {
   return (neuron0x1a9ae70()*0.411141);
}

double NNfunction_sb_sLdR::synapse0x1a807e0() {
   return (neuron0x1a9b840()*-0.133287);
}

double NNfunction_sb_sLdR::synapse0x1a80820() {
   return (neuron0x1a9c210()*-1.614);
}

double NNfunction_sb_sLdR::synapse0x1a94090() {
   return (neuron0x1a9cbe0()*0.0642124);
}

double NNfunction_sb_sLdR::synapse0x1a940d0() {
   return (neuron0x1a9d7c0()*0.0479205);
}

double NNfunction_sb_sLdR::synapse0x1aa5010() {
   return (neuron0x1a9e190()*-5.34614);
}

double NNfunction_sb_sLdR::synapse0x1aa5050() {
   return (neuron0x1a8f010()*1.46326);
}

double NNfunction_sb_sLdR::synapse0x1aa5090() {
   return (neuron0x1a8f9e0()*1.44193);
}

double NNfunction_sb_sLdR::synapse0x1aa50d0() {
   return (neuron0x1a903b0()*-0.625182);
}

double NNfunction_sb_sLdR::synapse0x1aabf80() {
   return (neuron0x1aa29f0()*0.413067);
}

double NNfunction_sb_sLdR::synapse0x1aabfc0() {
   return (neuron0x1aa32a0()*-0.103606);
}

double NNfunction_sb_sLdR::synapse0x1aac000() {
   return (neuron0x1aa3c70()*1.50673);
}

double NNfunction_sb_sLdR::synapse0x1aac040() {
   return (neuron0x1aa4640()*0.160444);
}

double NNfunction_sb_sLdR::synapse0x1aac3c0() {
   return (neuron0x1a805c0()*0.0231773);
}

double NNfunction_sb_sLdR::synapse0x1aac400() {
   return (neuron0x1a80ed0()*-0.123418);
}

double NNfunction_sb_sLdR::synapse0x1aac440() {
   return (neuron0x1a819b0()*0.500377);
}

double NNfunction_sb_sLdR::synapse0x1aac480() {
   return (neuron0x183b240()*0.126682);
}

double NNfunction_sb_sLdR::synapse0x1aac4c0() {
   return (neuron0x1a827d0()*0.00869774);
}

double NNfunction_sb_sLdR::synapse0x1aac500() {
   return (neuron0x1a831a0()*0.0684166);
}

double NNfunction_sb_sLdR::synapse0x1aac540() {
   return (neuron0x1a83f70()*0.0340145);
}

double NNfunction_sb_sLdR::synapse0x1aac580() {
   return (neuron0x1a84940()*-0.0284142);
}

double NNfunction_sb_sLdR::synapse0x1aac5c0() {
   return (neuron0x1a85310()*0.0326812);
}

double NNfunction_sb_sLdR::synapse0x1aac600() {
   return (neuron0x1a85df0()*0.0276992);
}

double NNfunction_sb_sLdR::synapse0x1aac640() {
   return (neuron0x1a867c0()*0.010076);
}

double NNfunction_sb_sLdR::synapse0x1aac680() {
   return (neuron0x1a838a0()*-0.0440753);
}

double NNfunction_sb_sLdR::synapse0x1aac6c0() {
   return (neuron0x1a88370()*0.613039);
}

double NNfunction_sb_sLdR::synapse0x1aac700() {
   return (neuron0x1a88d40()*0.0313806);
}

double NNfunction_sb_sLdR::synapse0x1aac740() {
   return (neuron0x1a89710()*-0.498632);
}

double NNfunction_sb_sLdR::synapse0x1aac780() {
   return (neuron0x1a8a0e0()*0.530698);
}

double NNfunction_sb_sLdR::synapse0x1aac210() {
   return (neuron0x1a8bef0()*-0.00488336);
}

double NNfunction_sb_sLdR::synapse0x1aac250() {
   return (neuron0x1a8c1d0()*0.184922);
}

double NNfunction_sb_sLdR::synapse0x1aac8d0() {
   return (neuron0x1a8cba0()*0.00986498);
}

double NNfunction_sb_sLdR::synapse0x1aac910() {
   return (neuron0x1a8d570()*0.0716433);
}

double NNfunction_sb_sLdR::synapse0x1aac950() {
   return (neuron0x1a8df40()*0.208019);
}

double NNfunction_sb_sLdR::synapse0x1aac990() {
   return (neuron0x1a8e910()*-0.0234149);
}

double NNfunction_sb_sLdR::synapse0x1aac9d0() {
   return (neuron0x1a87460()*0.0459698);
}

double NNfunction_sb_sLdR::synapse0x1aaca10() {
   return (neuron0x1a87e30()*0.458198);
}

double NNfunction_sb_sLdR::synapse0x1aaca50() {
   return (neuron0x1a916a0()*-0.0186785);
}

double NNfunction_sb_sLdR::synapse0x1aaca90() {
   return (neuron0x1a92070()*0.055102);
}

double NNfunction_sb_sLdR::synapse0x1aacad0() {
   return (neuron0x1a92a40()*-0.0684416);
}

double NNfunction_sb_sLdR::synapse0x1aacb10() {
   return (neuron0x1a93410()*0.0378143);
}

double NNfunction_sb_sLdR::synapse0x1aacb50() {
   return (neuron0x1a93de0()*-0.420018);
}

double NNfunction_sb_sLdR::synapse0x1aacb90() {
   return (neuron0x1a947b0()*0.112243);
}

double NNfunction_sb_sLdR::synapse0x1aacbd0() {
   return (neuron0x1a95180()*0.00943202);
}

double NNfunction_sb_sLdR::synapse0x1aacc10() {
   return (neuron0x1a95b50()*-0.0144971);
}

double NNfunction_sb_sLdR::synapse0x1aac7c0() {
   return (neuron0x1a8bbe0()*-0.958794);
}

double NNfunction_sb_sLdR::synapse0x1aac800() {
   return (neuron0x1a98730()*-0.576502);
}

double NNfunction_sb_sLdR::synapse0x1aac840() {
   return (neuron0x1a99100()*1.33286);
}

double NNfunction_sb_sLdR::synapse0x1aac880() {
   return (neuron0x1a99ad0()*-0.041038);
}

double NNfunction_sb_sLdR::synapse0x1aace60() {
   return (neuron0x1a9a4a0()*0.798351);
}

double NNfunction_sb_sLdR::synapse0x1aacea0() {
   return (neuron0x1a9ae70()*0.0285356);
}

double NNfunction_sb_sLdR::synapse0x1aacee0() {
   return (neuron0x1a9b840()*-0.0104935);
}

double NNfunction_sb_sLdR::synapse0x1aacf20() {
   return (neuron0x1a9c210()*0.642072);
}

double NNfunction_sb_sLdR::synapse0x1aacf60() {
   return (neuron0x1a9cbe0()*-0.0218075);
}

double NNfunction_sb_sLdR::synapse0x1aacfa0() {
   return (neuron0x1a9d7c0()*0.00193204);
}

double NNfunction_sb_sLdR::synapse0x1aacfe0() {
   return (neuron0x1a9e190()*0.734665);
}

double NNfunction_sb_sLdR::synapse0x1aad020() {
   return (neuron0x1a8f010()*0.453542);
}

double NNfunction_sb_sLdR::synapse0x1aad060() {
   return (neuron0x1a8f9e0()*-0.358329);
}

double NNfunction_sb_sLdR::synapse0x1aad0a0() {
   return (neuron0x1a903b0()*-1.17994);
}

double NNfunction_sb_sLdR::synapse0x1aad0e0() {
   return (neuron0x1aa29f0()*-0.0463762);
}

double NNfunction_sb_sLdR::synapse0x1aad120() {
   return (neuron0x1aa32a0()*-0.0140579);
}

double NNfunction_sb_sLdR::synapse0x1aad160() {
   return (neuron0x1aa3c70()*0.118824);
}

double NNfunction_sb_sLdR::synapse0x1aad1a0() {
   return (neuron0x1aa4640()*-1.53237);
}

double NNfunction_sb_sLdR::synapse0x1aad520() {
   return (neuron0x1a805c0()*-0.0822393);
}

double NNfunction_sb_sLdR::synapse0x1aad560() {
   return (neuron0x1a80ed0()*-0.637677);
}

double NNfunction_sb_sLdR::synapse0x1aad5a0() {
   return (neuron0x1a819b0()*1.10341);
}

double NNfunction_sb_sLdR::synapse0x1aad5e0() {
   return (neuron0x183b240()*0.91391);
}

double NNfunction_sb_sLdR::synapse0x1aad620() {
   return (neuron0x1a827d0()*0.016726);
}

double NNfunction_sb_sLdR::synapse0x1aad660() {
   return (neuron0x1a831a0()*-0.0165179);
}

double NNfunction_sb_sLdR::synapse0x1aad6a0() {
   return (neuron0x1a83f70()*-0.0546157);
}

double NNfunction_sb_sLdR::synapse0x1aad6e0() {
   return (neuron0x1a84940()*-0.106689);
}

double NNfunction_sb_sLdR::synapse0x1aad720() {
   return (neuron0x1a85310()*0.0182229);
}

double NNfunction_sb_sLdR::synapse0x1aad760() {
   return (neuron0x1a85df0()*-0.154101);
}

double NNfunction_sb_sLdR::synapse0x1aad7a0() {
   return (neuron0x1a867c0()*-0.0823409);
}

double NNfunction_sb_sLdR::synapse0x1aad7e0() {
   return (neuron0x1a838a0()*0.0192695);
}

double NNfunction_sb_sLdR::synapse0x1aad820() {
   return (neuron0x1a88370()*0.385681);
}

double NNfunction_sb_sLdR::synapse0x1aad860() {
   return (neuron0x1a88d40()*-0.0559242);
}

double NNfunction_sb_sLdR::synapse0x1aad8a0() {
   return (neuron0x1a89710()*-0.45758);
}

double NNfunction_sb_sLdR::synapse0x1aad8e0() {
   return (neuron0x1a8a0e0()*0.322922);
}

double NNfunction_sb_sLdR::synapse0x1aad370() {
   return (neuron0x1a8bef0()*-0.115089);
}

double NNfunction_sb_sLdR::synapse0x1aad3b0() {
   return (neuron0x1a8c1d0()*0.175554);
}

double NNfunction_sb_sLdR::synapse0x1aada30() {
   return (neuron0x1a8cba0()*-0.0530302);
}

double NNfunction_sb_sLdR::synapse0x1aada70() {
   return (neuron0x1a8d570()*-0.181774);
}

double NNfunction_sb_sLdR::synapse0x1aadab0() {
   return (neuron0x1a8df40()*-0.881317);
}

double NNfunction_sb_sLdR::synapse0x1aadaf0() {
   return (neuron0x1a8e910()*-0.407448);
}

double NNfunction_sb_sLdR::synapse0x1aadb30() {
   return (neuron0x1a87460()*-0.031151);
}

double NNfunction_sb_sLdR::synapse0x1aadb70() {
   return (neuron0x1a87e30()*0.864213);
}

double NNfunction_sb_sLdR::synapse0x1aadbb0() {
   return (neuron0x1a916a0()*-0.0868655);
}

double NNfunction_sb_sLdR::synapse0x1aadbf0() {
   return (neuron0x1a92070()*-0.139422);
}

double NNfunction_sb_sLdR::synapse0x1aadc30() {
   return (neuron0x1a92a40()*-0.791763);
}

double NNfunction_sb_sLdR::synapse0x1aadc70() {
   return (neuron0x1a93410()*-0.111839);
}

double NNfunction_sb_sLdR::synapse0x1aadcb0() {
   return (neuron0x1a93de0()*0.220806);
}

double NNfunction_sb_sLdR::synapse0x1aadcf0() {
   return (neuron0x1a947b0()*-0.912807);
}

double NNfunction_sb_sLdR::synapse0x1aadd30() {
   return (neuron0x1a95180()*-0.0881651);
}

double NNfunction_sb_sLdR::synapse0x1aadd70() {
   return (neuron0x1a95b50()*-0.0134859);
}

double NNfunction_sb_sLdR::synapse0x1aad920() {
   return (neuron0x1a8bbe0()*0.343568);
}

double NNfunction_sb_sLdR::synapse0x1aad960() {
   return (neuron0x1a98730()*-0.293808);
}

double NNfunction_sb_sLdR::synapse0x1aad9a0() {
   return (neuron0x1a99100()*-1.34314);
}

double NNfunction_sb_sLdR::synapse0x1aad9e0() {
   return (neuron0x1a99ad0()*-0.077848);
}

double NNfunction_sb_sLdR::synapse0x1aadfc0() {
   return (neuron0x1a9a4a0()*1.18623);
}

double NNfunction_sb_sLdR::synapse0x1aae000() {
   return (neuron0x1a9ae70()*-0.387603);
}

double NNfunction_sb_sLdR::synapse0x1aae040() {
   return (neuron0x1a9b840()*0.0722577);
}

double NNfunction_sb_sLdR::synapse0x1aae080() {
   return (neuron0x1a9c210()*0.377439);
}

double NNfunction_sb_sLdR::synapse0x1aae0c0() {
   return (neuron0x1a9cbe0()*-0.0872128);
}

double NNfunction_sb_sLdR::synapse0x1aae100() {
   return (neuron0x1a9d7c0()*0.0725273);
}

double NNfunction_sb_sLdR::synapse0x1aae140() {
   return (neuron0x1a9e190()*0.432856);
}

double NNfunction_sb_sLdR::synapse0x1aae180() {
   return (neuron0x1a8f010()*0.699951);
}

double NNfunction_sb_sLdR::synapse0x1aae1c0() {
   return (neuron0x1a8f9e0()*-0.0353886);
}

double NNfunction_sb_sLdR::synapse0x1aae200() {
   return (neuron0x1a903b0()*0.432361);
}

double NNfunction_sb_sLdR::synapse0x1aae240() {
   return (neuron0x1aa29f0()*-0.645253);
}

double NNfunction_sb_sLdR::synapse0x1aae280() {
   return (neuron0x1aa32a0()*0.0739303);
}

double NNfunction_sb_sLdR::synapse0x1aae2c0() {
   return (neuron0x1aa3c70()*0.402882);
}

double NNfunction_sb_sLdR::synapse0x1aae300() {
   return (neuron0x1aa4640()*-1.45866);
}

double NNfunction_sb_sLdR::synapse0x1aae680() {
   return (neuron0x1a805c0()*0.162082);
}

double NNfunction_sb_sLdR::synapse0x1aae6c0() {
   return (neuron0x1a80ed0()*-0.0326275);
}

double NNfunction_sb_sLdR::synapse0x1aae700() {
   return (neuron0x1a819b0()*-9.26686);
}

double NNfunction_sb_sLdR::synapse0x1aae740() {
   return (neuron0x183b240()*-0.0477946);
}

double NNfunction_sb_sLdR::synapse0x1aae780() {
   return (neuron0x1a827d0()*0.00409472);
}

double NNfunction_sb_sLdR::synapse0x1aae7c0() {
   return (neuron0x1a831a0()*0.0880785);
}

double NNfunction_sb_sLdR::synapse0x1aae800() {
   return (neuron0x1a83f70()*0.2698);
}

double NNfunction_sb_sLdR::synapse0x1aae840() {
   return (neuron0x1a84940()*-1.77478);
}

double NNfunction_sb_sLdR::synapse0x1aae880() {
   return (neuron0x1a85310()*-0.536475);
}

double NNfunction_sb_sLdR::synapse0x1aae8c0() {
   return (neuron0x1a85df0()*0.310518);
}

double NNfunction_sb_sLdR::synapse0x1aae900() {
   return (neuron0x1a867c0()*0.0560567);
}

double NNfunction_sb_sLdR::synapse0x1aae940() {
   return (neuron0x1a838a0()*-0.0896995);
}

double NNfunction_sb_sLdR::synapse0x1aae980() {
   return (neuron0x1a88370()*2.44205);
}

double NNfunction_sb_sLdR::synapse0x1aae9c0() {
   return (neuron0x1a88d40()*0.167596);
}

double NNfunction_sb_sLdR::synapse0x1aaea00() {
   return (neuron0x1a89710()*-0.50538);
}

double NNfunction_sb_sLdR::synapse0x1aaea40() {
   return (neuron0x1a8a0e0()*0.341155);
}

double NNfunction_sb_sLdR::synapse0x1aae4d0() {
   return (neuron0x1a8bef0()*0.124906);
}

double NNfunction_sb_sLdR::synapse0x1aae510() {
   return (neuron0x1a8c1d0()*0.251087);
}

double NNfunction_sb_sLdR::synapse0x1aaeb90() {
   return (neuron0x1a8cba0()*0.117564);
}

double NNfunction_sb_sLdR::synapse0x1aaebd0() {
   return (neuron0x1a8d570()*0.439595);
}

double NNfunction_sb_sLdR::synapse0x1aaec10() {
   return (neuron0x1a8df40()*0.541362);
}

double NNfunction_sb_sLdR::synapse0x1aaec50() {
   return (neuron0x1a8e910()*0.16603);
}

double NNfunction_sb_sLdR::synapse0x1aaec90() {
   return (neuron0x1a87460()*0.024726);
}

double NNfunction_sb_sLdR::synapse0x1aaecd0() {
   return (neuron0x1a87e30()*1.12331);
}

double NNfunction_sb_sLdR::synapse0x1aaed10() {
   return (neuron0x1a916a0()*0.0545387);
}

double NNfunction_sb_sLdR::synapse0x1aaed50() {
   return (neuron0x1a92070()*0.292573);
}

double NNfunction_sb_sLdR::synapse0x1aaed90() {
   return (neuron0x1a92a40()*-1.25842);
}

double NNfunction_sb_sLdR::synapse0x1aaedd0() {
   return (neuron0x1a93410()*0.209854);
}

double NNfunction_sb_sLdR::synapse0x1aaee10() {
   return (neuron0x1a93de0()*1.17915);
}

double NNfunction_sb_sLdR::synapse0x1aaee50() {
   return (neuron0x1a947b0()*2.23337);
}

double NNfunction_sb_sLdR::synapse0x1aaee90() {
   return (neuron0x1a95180()*0.0813284);
}

double NNfunction_sb_sLdR::synapse0x1aaeed0() {
   return (neuron0x1a95b50()*-0.00663647);
}

double NNfunction_sb_sLdR::synapse0x1aaea80() {
   return (neuron0x1a8bbe0()*0.51438);
}

double NNfunction_sb_sLdR::synapse0x1aaeac0() {
   return (neuron0x1a98730()*0.852021);
}

double NNfunction_sb_sLdR::synapse0x1aaeb00() {
   return (neuron0x1a99100()*-0.951106);
}

double NNfunction_sb_sLdR::synapse0x1aaeb40() {
   return (neuron0x1a99ad0()*0.0474541);
}

double NNfunction_sb_sLdR::synapse0x1aaf120() {
   return (neuron0x1a9a4a0()*1.88761);
}

double NNfunction_sb_sLdR::synapse0x1aaf160() {
   return (neuron0x1a9ae70()*0.495015);
}

double NNfunction_sb_sLdR::synapse0x1aaf1a0() {
   return (neuron0x1a9b840()*-0.0905474);
}

double NNfunction_sb_sLdR::synapse0x1aaf1e0() {
   return (neuron0x1a9c210()*-3.59715);
}

double NNfunction_sb_sLdR::synapse0x1aaf220() {
   return (neuron0x1a9cbe0()*-0.0485043);
}

double NNfunction_sb_sLdR::synapse0x1aaf260() {
   return (neuron0x1a9d7c0()*-0.089824);
}

double NNfunction_sb_sLdR::synapse0x1aaf2a0() {
   return (neuron0x1a9e190()*0.971004);
}

double NNfunction_sb_sLdR::synapse0x1aaf2e0() {
   return (neuron0x1a8f010()*1.59987);
}

double NNfunction_sb_sLdR::synapse0x1aaf320() {
   return (neuron0x1a8f9e0()*0.150919);
}

double NNfunction_sb_sLdR::synapse0x1aaf360() {
   return (neuron0x1a903b0()*0.248858);
}

double NNfunction_sb_sLdR::synapse0x1aaf3a0() {
   return (neuron0x1aa29f0()*0.166076);
}

double NNfunction_sb_sLdR::synapse0x1aaf3e0() {
   return (neuron0x1aa32a0()*-0.118811);
}

double NNfunction_sb_sLdR::synapse0x1aaf420() {
   return (neuron0x1aa3c70()*0.156386);
}

double NNfunction_sb_sLdR::synapse0x1aaf460() {
   return (neuron0x1aa4640()*-2.65062);
}

double NNfunction_sb_sLdR::synapse0x1a80580() {
   return (neuron0x1aab840()*-6.85135);
}

double NNfunction_sb_sLdR::synapse0x1aaf6c0() {
   return (neuron0x1aabbe0()*-6.52265);
}

double NNfunction_sb_sLdR::synapse0x1aaf700() {
   return (neuron0x1aac080()*9.23951);
}

double NNfunction_sb_sLdR::synapse0x1aaf740() {
   return (neuron0x1aad1e0()*-3.10202);
}

double NNfunction_sb_sLdR::synapse0x1aaf780() {
   return (neuron0x1aae340()*-6.28545);
}

