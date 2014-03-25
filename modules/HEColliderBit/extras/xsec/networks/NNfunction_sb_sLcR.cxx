#include "NNfunction_sb_sLcR.h"
#include <cmath>

double NNfunction_sb_sLcR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5389)/15.3621;
   input1 = (in1 - 9.89825)/1149.9;
   input2 = (in2 - 651.513)/616.794;
   input3 = (in3 - -59.7695)/821.647;
   input4 = (in4 - 1065.81)/959.703;
   input5 = (in5 - 891.292)/948.873;
   input6 = (in6 - 899.646)/955.861;
   input7 = (in7 - 921.728)/940.882;
   input8 = (in8 - 901.439)/956.613;
   input9 = (in9 - 878.394)/934.039;
   input10 = (in10 - 979.821)/942.442;
   input11 = (in11 - 698.306)/846.712;
   input12 = (in12 - 284.411)/267.188;
   input13 = (in13 - 495.727)/513.042;
   input14 = (in14 - 719.392)/826.013;
   input15 = (in15 - 297.985)/273.88;
   input16 = (in16 - 524.922)/555.137;
   input17 = (in17 - 747.738)/883.854;
   input18 = (in18 - 731.386)/882.358;
   input19 = (in19 - 787.165)/868.47;
   input20 = (in20 - -4.10005)/487.903;
   input21 = (in21 - 3.08868)/1152.3;
   input22 = (in22 - 3.6449)/1200.62;
   input23 = (in23 - -192.462)/604.57;
   switch(index) {
     case 0:
         return neuron0x1b3e3f0();
     default:
         return 0.;
   }
}

double NNfunction_sb_sLcR::Value(int index, double* input) {
   input0 = (input[0] - 23.5389)/15.3621;
   input1 = (input[1] - 9.89825)/1149.9;
   input2 = (input[2] - 651.513)/616.794;
   input3 = (input[3] - -59.7695)/821.647;
   input4 = (input[4] - 1065.81)/959.703;
   input5 = (input[5] - 891.292)/948.873;
   input6 = (input[6] - 899.646)/955.861;
   input7 = (input[7] - 921.728)/940.882;
   input8 = (input[8] - 901.439)/956.613;
   input9 = (input[9] - 878.394)/934.039;
   input10 = (input[10] - 979.821)/942.442;
   input11 = (input[11] - 698.306)/846.712;
   input12 = (input[12] - 284.411)/267.188;
   input13 = (input[13] - 495.727)/513.042;
   input14 = (input[14] - 719.392)/826.013;
   input15 = (input[15] - 297.985)/273.88;
   input16 = (input[16] - 524.922)/555.137;
   input17 = (input[17] - 747.738)/883.854;
   input18 = (input[18] - 731.386)/882.358;
   input19 = (input[19] - 787.165)/868.47;
   input20 = (input[20] - -4.10005)/487.903;
   input21 = (input[21] - 3.08868)/1152.3;
   input22 = (input[22] - 3.6449)/1200.62;
   input23 = (input[23] - -192.462)/604.57;
   switch(index) {
     case 0:
         return neuron0x1b3e3f0();
     default:
         return 0.;
   }
}

double NNfunction_sb_sLcR::neuron0x1b0a4b0() {
   return input0;
}

double NNfunction_sb_sLcR::neuron0x1b0a7f0() {
   return input1;
}

double NNfunction_sb_sLcR::neuron0x1b0ab30() {
   return input2;
}

double NNfunction_sb_sLcR::neuron0x1b0ae70() {
   return input3;
}

double NNfunction_sb_sLcR::neuron0x1b0b1b0() {
   return input4;
}

double NNfunction_sb_sLcR::neuron0x1b0b4f0() {
   return input5;
}

double NNfunction_sb_sLcR::neuron0x1b0b830() {
   return input6;
}

double NNfunction_sb_sLcR::neuron0x1b0bb70() {
   return input7;
}

double NNfunction_sb_sLcR::neuron0x1b0beb0() {
   return input8;
}

double NNfunction_sb_sLcR::neuron0x1b0c1f0() {
   return input9;
}

double NNfunction_sb_sLcR::neuron0x1b0c530() {
   return input10;
}

double NNfunction_sb_sLcR::neuron0x1b0c870() {
   return input11;
}

double NNfunction_sb_sLcR::neuron0x1b0cbb0() {
   return input12;
}

double NNfunction_sb_sLcR::neuron0x1b0cef0() {
   return input13;
}

double NNfunction_sb_sLcR::neuron0x1b0d230() {
   return input14;
}

double NNfunction_sb_sLcR::neuron0x1b0d570() {
   return input15;
}

double NNfunction_sb_sLcR::neuron0x1b0d8b0() {
   return input16;
}

double NNfunction_sb_sLcR::neuron0x1b0de10() {
   return input17;
}

double NNfunction_sb_sLcR::neuron0x1b0e030() {
   return input18;
}

double NNfunction_sb_sLcR::neuron0x1b0e370() {
   return input19;
}

double NNfunction_sb_sLcR::neuron0x1b0e6b0() {
   return input20;
}

double NNfunction_sb_sLcR::neuron0x1b0e9f0() {
   return input21;
}

double NNfunction_sb_sLcR::neuron0x1b0ed30() {
   return input22;
}

double NNfunction_sb_sLcR::neuron0x1b0f070() {
   return input23;
}

double NNfunction_sb_sLcR::input0x1b0f510() {
   double input = 0.580728;
   input += synapse0x18ca320();
   input += synapse0x1b0a370();
   input += synapse0x1b0a3b0();
   input += synapse0x1b0f7c0();
   input += synapse0x1b0f800();
   input += synapse0x1b0f840();
   input += synapse0x1b0f880();
   input += synapse0x1b0f8c0();
   input += synapse0x1b0f900();
   input += synapse0x1b0f940();
   input += synapse0x1b0f980();
   input += synapse0x1b0f9c0();
   input += synapse0x1b0fa00();
   input += synapse0x1b0fa40();
   input += synapse0x1b0fa80();
   input += synapse0x1b0fac0();
   input += synapse0x1b0a2e0();
   input += synapse0x1b0a320();
   input += synapse0x18bbbc0();
   input += synapse0x18bbc00();
   input += synapse0x1b0fd20();
   input += synapse0x1b0fd60();
   input += synapse0x1b0fda0();
   input += synapse0x1b0fde0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b0f510() {
   double input = input0x1b0f510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b0fe20() {
   double input = 0.758883;
   input += synapse0x1b10160();
   input += synapse0x1b101a0();
   input += synapse0x1b101e0();
   input += synapse0x1b10220();
   input += synapse0x1b10260();
   input += synapse0x1b102a0();
   input += synapse0x1b102e0();
   input += synapse0x1b10320();
   input += synapse0x1b10360();
   input += synapse0x1b0fc10();
   input += synapse0x1b0fc50();
   input += synapse0x1b0fc90();
   input += synapse0x1b0fcd0();
   input += synapse0x1b105b0();
   input += synapse0x1b105f0();
   input += synapse0x1b10630();
   input += synapse0x1b0ffb0();
   input += synapse0x1b0fff0();
   input += synapse0x1b10780();
   input += synapse0x1b107c0();
   input += synapse0x1b10800();
   input += synapse0x1b10840();
   input += synapse0x1b10880();
   input += synapse0x1b108c0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b0fe20() {
   double input = input0x1b0fe20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b10900() {
   double input = -1.04059;
   input += synapse0x1b10c40();
   input += synapse0x1b10c80();
   input += synapse0x1b10cc0();
   input += synapse0x1b10d00();
   input += synapse0x1b10d40();
   input += synapse0x1b10d80();
   input += synapse0x1b10dc0();
   input += synapse0x1b10e00();
   input += synapse0x1b10e40();
   input += synapse0x1b10e80();
   input += synapse0x1b10ec0();
   input += synapse0x1b10f00();
   input += synapse0x1b10f40();
   input += synapse0x1b10f80();
   input += synapse0x1b10fc0();
   input += synapse0x1b11000();
   input += synapse0x1b10a90();
   input += synapse0x1b10ad0();
   input += synapse0x18c9a10();
   input += synapse0x18c9a50();
   input += synapse0x1af9540();
   input += synapse0x1af9580();
   input += synapse0x1af95c0();
   input += synapse0x1b0a3f0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b10900() {
   double input = input0x1b10900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x18ca190() {
   double input = 0.0397471;
   input += synapse0x1b10550();
   input += synapse0x1b0a430();
   input += synapse0x1b0a470();
   input += synapse0x1b11150();
   input += synapse0x1b11190();
   input += synapse0x1b111d0();
   input += synapse0x1b11210();
   input += synapse0x1b11250();
   input += synapse0x1b11290();
   input += synapse0x1b112d0();
   input += synapse0x1b11310();
   input += synapse0x1b11350();
   input += synapse0x1b11390();
   input += synapse0x1b113d0();
   input += synapse0x1b11410();
   input += synapse0x1b11450();
   input += synapse0x1b103a0();
   input += synapse0x1b103e0();
   input += synapse0x1b115a0();
   input += synapse0x1b115e0();
   input += synapse0x1b11620();
   input += synapse0x1b11660();
   input += synapse0x1b116a0();
   input += synapse0x1b116e0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x18ca190() {
   double input = input0x18ca190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b11720() {
   double input = 0.890479;
   input += synapse0x1b11a60();
   input += synapse0x1b11aa0();
   input += synapse0x1b11ae0();
   input += synapse0x1b11b20();
   input += synapse0x1b11b60();
   input += synapse0x1b11ba0();
   input += synapse0x1b11be0();
   input += synapse0x1b11c20();
   input += synapse0x1b11c60();
   input += synapse0x1b11ca0();
   input += synapse0x1b11ce0();
   input += synapse0x1b11d20();
   input += synapse0x1b11d60();
   input += synapse0x1b11da0();
   input += synapse0x1b11de0();
   input += synapse0x1b11e20();
   input += synapse0x1b118b0();
   input += synapse0x1b118f0();
   input += synapse0x1b11f70();
   input += synapse0x1b11fb0();
   input += synapse0x1b11ff0();
   input += synapse0x1b12030();
   input += synapse0x1b12070();
   input += synapse0x1b120b0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b11720() {
   double input = input0x1b11720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b120f0() {
   double input = -3.28247;
   input += synapse0x1b12430();
   input += synapse0x1b12470();
   input += synapse0x1b124b0();
   input += synapse0x1b124f0();
   input += synapse0x1b12530();
   input += synapse0x1b12570();
   input += synapse0x1b125b0();
   input += synapse0x1b125f0();
   input += synapse0x1b12630();
   input += synapse0x18c9d80();
   input += synapse0x18c9dc0();
   input += synapse0x18c9e00();
   input += synapse0x18c9e40();
   input += synapse0x18c9e80();
   input += synapse0x18c9ec0();
   input += synapse0x18c9f00();
   input += synapse0x1b12280();
   input += synapse0x1b122c0();
   input += synapse0x18ca050();
   input += synapse0x18ca090();
   input += synapse0x18ca0d0();
   input += synapse0x18ca110();
   input += synapse0x18ca150();
   input += synapse0x1b12e80();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b120f0() {
   double input = input0x1b120f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b12ec0() {
   double input = -0.16524;
   input += synapse0x1b13200();
   input += synapse0x1b13240();
   input += synapse0x1b13280();
   input += synapse0x1b132c0();
   input += synapse0x1b13300();
   input += synapse0x1b13340();
   input += synapse0x1b13380();
   input += synapse0x1b133c0();
   input += synapse0x1b13400();
   input += synapse0x1b13440();
   input += synapse0x1b13480();
   input += synapse0x1b134c0();
   input += synapse0x1b13500();
   input += synapse0x1b13540();
   input += synapse0x1b13580();
   input += synapse0x1b135c0();
   input += synapse0x1b13050();
   input += synapse0x1b13090();
   input += synapse0x1b13710();
   input += synapse0x1b13750();
   input += synapse0x1b13790();
   input += synapse0x1b137d0();
   input += synapse0x1b13810();
   input += synapse0x1b13850();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b12ec0() {
   double input = input0x1b12ec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b13890() {
   double input = 3.29003;
   input += synapse0x1b13bd0();
   input += synapse0x1b13c10();
   input += synapse0x1b13c50();
   input += synapse0x1b13c90();
   input += synapse0x1b13cd0();
   input += synapse0x1b13d10();
   input += synapse0x1b13d50();
   input += synapse0x1b13d90();
   input += synapse0x1b13dd0();
   input += synapse0x1b13e10();
   input += synapse0x1b13e50();
   input += synapse0x1b13e90();
   input += synapse0x1b13ed0();
   input += synapse0x1b13f10();
   input += synapse0x1b13f50();
   input += synapse0x1b13f90();
   input += synapse0x1b13a20();
   input += synapse0x1b13a60();
   input += synapse0x1b140e0();
   input += synapse0x1b14120();
   input += synapse0x1b14160();
   input += synapse0x1b141a0();
   input += synapse0x1b141e0();
   input += synapse0x1b14220();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b13890() {
   double input = input0x1b13890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b14260() {
   double input = 0.232754;
   input += synapse0x1b0dd00();
   input += synapse0x1b0dd40();
   input += synapse0x1b0dd80();
   input += synapse0x1b0ddc0();
   input += synapse0x1b147b0();
   input += synapse0x1b147f0();
   input += synapse0x1b14830();
   input += synapse0x1b14870();
   input += synapse0x1b148b0();
   input += synapse0x1b148f0();
   input += synapse0x1b14930();
   input += synapse0x1b14970();
   input += synapse0x1b149b0();
   input += synapse0x1b149f0();
   input += synapse0x1b14a30();
   input += synapse0x1b14a70();
   input += synapse0x1b143f0();
   input += synapse0x1b14430();
   input += synapse0x1b14bc0();
   input += synapse0x1b14c00();
   input += synapse0x1b14c40();
   input += synapse0x1b14c80();
   input += synapse0x1b14cc0();
   input += synapse0x1b14d00();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b14260() {
   double input = input0x1b14260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b14d40() {
   double input = -0.0099189;
   input += synapse0x1b15080();
   input += synapse0x1b150c0();
   input += synapse0x1b15100();
   input += synapse0x1b15140();
   input += synapse0x1b15180();
   input += synapse0x1b151c0();
   input += synapse0x1b15200();
   input += synapse0x1b15240();
   input += synapse0x1b15280();
   input += synapse0x1b152c0();
   input += synapse0x1b15300();
   input += synapse0x1b15340();
   input += synapse0x1b15380();
   input += synapse0x1b153c0();
   input += synapse0x1b15400();
   input += synapse0x1b15440();
   input += synapse0x1b14ed0();
   input += synapse0x1b14f10();
   input += synapse0x1b15590();
   input += synapse0x1b155d0();
   input += synapse0x1b15610();
   input += synapse0x1b15650();
   input += synapse0x1b15690();
   input += synapse0x1b156d0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b14d40() {
   double input = input0x1b14d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b15710() {
   double input = -1.97502;
   input += synapse0x1b15a50();
   input += synapse0x1b15a90();
   input += synapse0x1b15ad0();
   input += synapse0x1b15b10();
   input += synapse0x1b15b50();
   input += synapse0x1b15b90();
   input += synapse0x1b15bd0();
   input += synapse0x1b15c10();
   input += synapse0x1b15c50();
   input += synapse0x1b15c90();
   input += synapse0x1b15cd0();
   input += synapse0x1b15d10();
   input += synapse0x1b15d50();
   input += synapse0x1b15d90();
   input += synapse0x1b15dd0();
   input += synapse0x1b15e10();
   input += synapse0x1b158a0();
   input += synapse0x1b158e0();
   input += synapse0x1b12670();
   input += synapse0x1b126b0();
   input += synapse0x1b126f0();
   input += synapse0x1b12730();
   input += synapse0x1b12770();
   input += synapse0x1b127b0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b15710() {
   double input = input0x1b15710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b127f0() {
   double input = 1.88301;
   input += synapse0x1b12b30();
   input += synapse0x1b12b70();
   input += synapse0x1b12bb0();
   input += synapse0x1b12bf0();
   input += synapse0x1b12c30();
   input += synapse0x1b12c70();
   input += synapse0x1b12cb0();
   input += synapse0x1b12cf0();
   input += synapse0x1b12d30();
   input += synapse0x1b12d70();
   input += synapse0x1b12db0();
   input += synapse0x1b12df0();
   input += synapse0x1b12e30();
   input += synapse0x1b16f70();
   input += synapse0x1b16fb0();
   input += synapse0x1b16ff0();
   input += synapse0x1b12980();
   input += synapse0x1b129c0();
   input += synapse0x1b17140();
   input += synapse0x1b17180();
   input += synapse0x1b171c0();
   input += synapse0x1b17200();
   input += synapse0x1b17240();
   input += synapse0x1b17280();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b127f0() {
   double input = input0x1b127f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b172c0() {
   double input = -0.418228;
   input += synapse0x1b17600();
   input += synapse0x1b17640();
   input += synapse0x1b17680();
   input += synapse0x1b176c0();
   input += synapse0x1b17700();
   input += synapse0x1b17740();
   input += synapse0x1b17780();
   input += synapse0x1b177c0();
   input += synapse0x1b17800();
   input += synapse0x1b17840();
   input += synapse0x1b17880();
   input += synapse0x1b178c0();
   input += synapse0x1b17900();
   input += synapse0x1b17940();
   input += synapse0x1b17980();
   input += synapse0x1b179c0();
   input += synapse0x1b17450();
   input += synapse0x1b17490();
   input += synapse0x1b17b10();
   input += synapse0x1b17b50();
   input += synapse0x1b17b90();
   input += synapse0x1b17bd0();
   input += synapse0x1b17c10();
   input += synapse0x1b17c50();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b172c0() {
   double input = input0x1b172c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b17c90() {
   double input = -0.446778;
   input += synapse0x1b17fd0();
   input += synapse0x1b18010();
   input += synapse0x1b18050();
   input += synapse0x1b18090();
   input += synapse0x1b180d0();
   input += synapse0x1b18110();
   input += synapse0x1b18150();
   input += synapse0x1b18190();
   input += synapse0x1b181d0();
   input += synapse0x1b18210();
   input += synapse0x1b18250();
   input += synapse0x1b18290();
   input += synapse0x1b182d0();
   input += synapse0x1b18310();
   input += synapse0x1b18350();
   input += synapse0x1b18390();
   input += synapse0x1b17e20();
   input += synapse0x1b17e60();
   input += synapse0x1b184e0();
   input += synapse0x1b18520();
   input += synapse0x1b18560();
   input += synapse0x1b185a0();
   input += synapse0x1b185e0();
   input += synapse0x1b18620();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b17c90() {
   double input = input0x1b17c90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b18660() {
   double input = -1.14421;
   input += synapse0x1b189a0();
   input += synapse0x1b189e0();
   input += synapse0x1b18a20();
   input += synapse0x1b18a60();
   input += synapse0x1b18aa0();
   input += synapse0x1b18ae0();
   input += synapse0x1b18b20();
   input += synapse0x1b18b60();
   input += synapse0x1b18ba0();
   input += synapse0x1b18be0();
   input += synapse0x1b18c20();
   input += synapse0x1b18c60();
   input += synapse0x1b18ca0();
   input += synapse0x1b18ce0();
   input += synapse0x1b18d20();
   input += synapse0x1b18d60();
   input += synapse0x1b187f0();
   input += synapse0x1b18830();
   input += synapse0x1b18eb0();
   input += synapse0x1b18ef0();
   input += synapse0x1b18f30();
   input += synapse0x1b18f70();
   input += synapse0x1b18fb0();
   input += synapse0x1b18ff0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b18660() {
   double input = input0x1b18660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b19030() {
   double input = 1.12719;
   input += synapse0x1b19370();
   input += synapse0x1b0a6d0();
   input += synapse0x1b0a710();
   input += synapse0x1b0aa10();
   input += synapse0x1b0aa50();
   input += synapse0x1b0ad50();
   input += synapse0x1b0ad90();
   input += synapse0x1b0b090();
   input += synapse0x1b0b0d0();
   input += synapse0x1b0b3d0();
   input += synapse0x1b0b410();
   input += synapse0x1b0b710();
   input += synapse0x1b0b750();
   input += synapse0x1b0ba50();
   input += synapse0x1b0ba90();
   input += synapse0x1b0bd90();
   input += synapse0x1b0bdd0();
   input += synapse0x1b0c0d0();
   input += synapse0x1b0c110();
   input += synapse0x1b0c410();
   input += synapse0x1b0c450();
   input += synapse0x1b0c750();
   input += synapse0x1b0c790();
   input += synapse0x1b0ca90();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b19030() {
   double input = input0x1b19030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b1ae40() {
   double input = -0.658188;
   input += synapse0x1b0cad0();
   input += synapse0x1b0d790();
   input += synapse0x1b0d7d0();
   input += synapse0x1b191c0();
   input += synapse0x1b19200();
   input += synapse0x1b0dad0();
   input += synapse0x1b0db10();
   input += synapse0x18bbaa0();
   input += synapse0x18bbae0();
   input += synapse0x1b0e250();
   input += synapse0x1b0e290();
   input += synapse0x1b0e590();
   input += synapse0x1b0e5d0();
   input += synapse0x1b0e8d0();
   input += synapse0x1b0e910();
   input += synapse0x1b0ec10();
   input += synapse0x1b0ec50();
   input += synapse0x1b0ef50();
   input += synapse0x1b0ef90();
   input += synapse0x1b0f290();
   input += synapse0x1b0f2d0();
   input += synapse0x1b0cdd0();
   input += synapse0x1b0ce10();
   input += synapse0x1b1b0e0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b1ae40() {
   double input = input0x1b1ae40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b1b120() {
   double input = 0.250624;
   input += synapse0x1b1b460();
   input += synapse0x1b1b4a0();
   input += synapse0x1b1b4e0();
   input += synapse0x1b1b520();
   input += synapse0x1b1b560();
   input += synapse0x1b1b5a0();
   input += synapse0x1b1b5e0();
   input += synapse0x1b1b620();
   input += synapse0x1b1b660();
   input += synapse0x1b1b6a0();
   input += synapse0x1b1b6e0();
   input += synapse0x1b1b720();
   input += synapse0x1b1b760();
   input += synapse0x1b1b7a0();
   input += synapse0x1b1b7e0();
   input += synapse0x1b1b820();
   input += synapse0x1b1b2b0();
   input += synapse0x1b1b2f0();
   input += synapse0x1b1b970();
   input += synapse0x1b1b9b0();
   input += synapse0x1b1b9f0();
   input += synapse0x1b1ba30();
   input += synapse0x1b1ba70();
   input += synapse0x1b1bab0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b1b120() {
   double input = input0x1b1b120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b1baf0() {
   double input = 0.3506;
   input += synapse0x1b1be30();
   input += synapse0x1b1be70();
   input += synapse0x1b1beb0();
   input += synapse0x1b1bef0();
   input += synapse0x1b1bf30();
   input += synapse0x1b1bf70();
   input += synapse0x1b1bfb0();
   input += synapse0x1b1bff0();
   input += synapse0x1b1c030();
   input += synapse0x1b1c070();
   input += synapse0x1b1c0b0();
   input += synapse0x1b1c0f0();
   input += synapse0x1b1c130();
   input += synapse0x1b1c170();
   input += synapse0x1b1c1b0();
   input += synapse0x1b1c1f0();
   input += synapse0x1b1bc80();
   input += synapse0x1b1bcc0();
   input += synapse0x1b1c340();
   input += synapse0x1b1c380();
   input += synapse0x1b1c3c0();
   input += synapse0x1b1c400();
   input += synapse0x1b1c440();
   input += synapse0x1b1c480();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b1baf0() {
   double input = input0x1b1baf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b1c4c0() {
   double input = 0.607639;
   input += synapse0x1b1c800();
   input += synapse0x1b1c840();
   input += synapse0x1b1c880();
   input += synapse0x1b1c8c0();
   input += synapse0x1b1c900();
   input += synapse0x1b1c940();
   input += synapse0x1b1c980();
   input += synapse0x1b1c9c0();
   input += synapse0x1b1ca00();
   input += synapse0x1b1ca40();
   input += synapse0x1b1ca80();
   input += synapse0x1b1cac0();
   input += synapse0x1b1cb00();
   input += synapse0x1b1cb40();
   input += synapse0x1b1cb80();
   input += synapse0x1b1cbc0();
   input += synapse0x1b1c650();
   input += synapse0x1b1c690();
   input += synapse0x1b1cd10();
   input += synapse0x1b1cd50();
   input += synapse0x1b1cd90();
   input += synapse0x1b1cdd0();
   input += synapse0x1b1ce10();
   input += synapse0x1b1ce50();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b1c4c0() {
   double input = input0x1b1c4c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b1ce90() {
   double input = 1.11527;
   input += synapse0x1b1d1d0();
   input += synapse0x1b1d210();
   input += synapse0x1b1d250();
   input += synapse0x1b1d290();
   input += synapse0x1b1d2d0();
   input += synapse0x1b1d310();
   input += synapse0x1b1d350();
   input += synapse0x1b1d390();
   input += synapse0x1b1d3d0();
   input += synapse0x1b1d410();
   input += synapse0x1b1d450();
   input += synapse0x1b1d490();
   input += synapse0x1b1d4d0();
   input += synapse0x1b1d510();
   input += synapse0x1b1d550();
   input += synapse0x1b1d590();
   input += synapse0x1b1d020();
   input += synapse0x1b1d060();
   input += synapse0x1b1d6e0();
   input += synapse0x1b1d720();
   input += synapse0x1b1d760();
   input += synapse0x1b1d7a0();
   input += synapse0x1b1d7e0();
   input += synapse0x1b1d820();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b1ce90() {
   double input = input0x1b1ce90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b1d860() {
   double input = -1.47376;
   input += synapse0x1b1dba0();
   input += synapse0x1b1dbe0();
   input += synapse0x1b1dc20();
   input += synapse0x1b1dc60();
   input += synapse0x1b1dca0();
   input += synapse0x1b1dce0();
   input += synapse0x1b1dd20();
   input += synapse0x1b1dd60();
   input += synapse0x1b1dda0();
   input += synapse0x1b15f60();
   input += synapse0x1b15fa0();
   input += synapse0x1b15fe0();
   input += synapse0x1b16020();
   input += synapse0x1b16060();
   input += synapse0x1b160a0();
   input += synapse0x1b160e0();
   input += synapse0x1b1d9f0();
   input += synapse0x1b1da30();
   input += synapse0x1b16230();
   input += synapse0x1b16270();
   input += synapse0x1b162b0();
   input += synapse0x1b162f0();
   input += synapse0x1b16330();
   input += synapse0x1b16370();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b1d860() {
   double input = input0x1b1d860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b163b0() {
   double input = 1.10663;
   input += synapse0x1b166f0();
   input += synapse0x1b16730();
   input += synapse0x1b16770();
   input += synapse0x1b167b0();
   input += synapse0x1b167f0();
   input += synapse0x1b16830();
   input += synapse0x1b16870();
   input += synapse0x1b168b0();
   input += synapse0x1b168f0();
   input += synapse0x1b16930();
   input += synapse0x1b16970();
   input += synapse0x1b169b0();
   input += synapse0x1b169f0();
   input += synapse0x1b16a30();
   input += synapse0x1b16a70();
   input += synapse0x1b16ab0();
   input += synapse0x1b16540();
   input += synapse0x1b16580();
   input += synapse0x1b16c00();
   input += synapse0x1b16c40();
   input += synapse0x1b16c80();
   input += synapse0x1b16cc0();
   input += synapse0x1b16d00();
   input += synapse0x1b16d40();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b163b0() {
   double input = input0x1b163b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b16d80() {
   double input = 0.000390851;
   input += synapse0x1b16f10();
   input += synapse0x1b1ffa0();
   input += synapse0x1b1ffe0();
   input += synapse0x1b20020();
   input += synapse0x1b20060();
   input += synapse0x1b200a0();
   input += synapse0x1b200e0();
   input += synapse0x1b20120();
   input += synapse0x1b20160();
   input += synapse0x1b201a0();
   input += synapse0x1b201e0();
   input += synapse0x1b20220();
   input += synapse0x1b20260();
   input += synapse0x1b202a0();
   input += synapse0x1b202e0();
   input += synapse0x1b20320();
   input += synapse0x1b1fdf0();
   input += synapse0x1b1fe30();
   input += synapse0x1b20470();
   input += synapse0x1b204b0();
   input += synapse0x1b204f0();
   input += synapse0x1b20530();
   input += synapse0x1b20570();
   input += synapse0x1b205b0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b16d80() {
   double input = input0x1b16d80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b205f0() {
   double input = -0.308584;
   input += synapse0x1b20930();
   input += synapse0x1b20970();
   input += synapse0x1b209b0();
   input += synapse0x1b209f0();
   input += synapse0x1b20a30();
   input += synapse0x1b20a70();
   input += synapse0x1b20ab0();
   input += synapse0x1b20af0();
   input += synapse0x1b20b30();
   input += synapse0x1b20b70();
   input += synapse0x1b20bb0();
   input += synapse0x1b20bf0();
   input += synapse0x1b20c30();
   input += synapse0x1b20c70();
   input += synapse0x1b20cb0();
   input += synapse0x1b20cf0();
   input += synapse0x1b20780();
   input += synapse0x1b207c0();
   input += synapse0x1b20e40();
   input += synapse0x1b20e80();
   input += synapse0x1b20ec0();
   input += synapse0x1b20f00();
   input += synapse0x1b20f40();
   input += synapse0x1b20f80();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b205f0() {
   double input = input0x1b205f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b20fc0() {
   double input = 1.49201;
   input += synapse0x1b21300();
   input += synapse0x1b21340();
   input += synapse0x1b21380();
   input += synapse0x1b213c0();
   input += synapse0x1b21400();
   input += synapse0x1b21440();
   input += synapse0x1b21480();
   input += synapse0x1b214c0();
   input += synapse0x1b21500();
   input += synapse0x1b21540();
   input += synapse0x1b21580();
   input += synapse0x1b215c0();
   input += synapse0x1b21600();
   input += synapse0x1b21640();
   input += synapse0x1b21680();
   input += synapse0x1b216c0();
   input += synapse0x1b21150();
   input += synapse0x1b21190();
   input += synapse0x1b21810();
   input += synapse0x1b21850();
   input += synapse0x1b21890();
   input += synapse0x1b218d0();
   input += synapse0x1b21910();
   input += synapse0x1b21950();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b20fc0() {
   double input = input0x1b20fc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b21990() {
   double input = 0.672944;
   input += synapse0x1b21cd0();
   input += synapse0x1b21d10();
   input += synapse0x1b21d50();
   input += synapse0x1b21d90();
   input += synapse0x1b21dd0();
   input += synapse0x1b21e10();
   input += synapse0x1b21e50();
   input += synapse0x1b21e90();
   input += synapse0x1b21ed0();
   input += synapse0x1b21f10();
   input += synapse0x1b21f50();
   input += synapse0x1b21f90();
   input += synapse0x1b21fd0();
   input += synapse0x1b22010();
   input += synapse0x1b22050();
   input += synapse0x1b22090();
   input += synapse0x1b21b20();
   input += synapse0x1b21b60();
   input += synapse0x1b221e0();
   input += synapse0x1b22220();
   input += synapse0x1b22260();
   input += synapse0x1b222a0();
   input += synapse0x1b222e0();
   input += synapse0x1b22320();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b21990() {
   double input = input0x1b21990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b22360() {
   double input = -0.111058;
   input += synapse0x1b226a0();
   input += synapse0x1b226e0();
   input += synapse0x1b22720();
   input += synapse0x1b22760();
   input += synapse0x1b227a0();
   input += synapse0x1b227e0();
   input += synapse0x1b22820();
   input += synapse0x1b22860();
   input += synapse0x1b228a0();
   input += synapse0x1b228e0();
   input += synapse0x1b22920();
   input += synapse0x1b22960();
   input += synapse0x1b229a0();
   input += synapse0x1b229e0();
   input += synapse0x1b22a20();
   input += synapse0x1b22a60();
   input += synapse0x1b224f0();
   input += synapse0x1b22530();
   input += synapse0x1b22bb0();
   input += synapse0x1b22bf0();
   input += synapse0x1b22c30();
   input += synapse0x1b22c70();
   input += synapse0x1b22cb0();
   input += synapse0x1b22cf0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b22360() {
   double input = input0x1b22360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b22d30() {
   double input = -0.0503563;
   input += synapse0x1b23070();
   input += synapse0x1b230b0();
   input += synapse0x1b230f0();
   input += synapse0x1b23130();
   input += synapse0x1b23170();
   input += synapse0x1b231b0();
   input += synapse0x1b231f0();
   input += synapse0x1b23230();
   input += synapse0x1b23270();
   input += synapse0x1b232b0();
   input += synapse0x1b232f0();
   input += synapse0x1b23330();
   input += synapse0x1b23370();
   input += synapse0x1b233b0();
   input += synapse0x1b233f0();
   input += synapse0x1b23430();
   input += synapse0x1b22ec0();
   input += synapse0x1b22f00();
   input += synapse0x1b23580();
   input += synapse0x1b235c0();
   input += synapse0x1b23600();
   input += synapse0x1b23640();
   input += synapse0x1b23680();
   input += synapse0x1b236c0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b22d30() {
   double input = input0x1b22d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b23700() {
   double input = -0.415251;
   input += synapse0x1b23a40();
   input += synapse0x1b23a80();
   input += synapse0x1b23ac0();
   input += synapse0x1b23b00();
   input += synapse0x1b23b40();
   input += synapse0x1b23b80();
   input += synapse0x1b23bc0();
   input += synapse0x1b23c00();
   input += synapse0x1b23c40();
   input += synapse0x1b23c80();
   input += synapse0x1b23cc0();
   input += synapse0x1b23d00();
   input += synapse0x1b23d40();
   input += synapse0x1b23d80();
   input += synapse0x1b23dc0();
   input += synapse0x1b23e00();
   input += synapse0x1b23890();
   input += synapse0x1b238d0();
   input += synapse0x1b23f50();
   input += synapse0x1b23f90();
   input += synapse0x1b23fd0();
   input += synapse0x1b24010();
   input += synapse0x1b24050();
   input += synapse0x1b24090();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b23700() {
   double input = input0x1b23700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b240d0() {
   double input = 2.09501;
   input += synapse0x1b24410();
   input += synapse0x1b24450();
   input += synapse0x1b24490();
   input += synapse0x1b244d0();
   input += synapse0x1b24510();
   input += synapse0x1b24550();
   input += synapse0x1b24590();
   input += synapse0x1b245d0();
   input += synapse0x1b24610();
   input += synapse0x1b24650();
   input += synapse0x1b24690();
   input += synapse0x1b246d0();
   input += synapse0x1b24710();
   input += synapse0x1b24750();
   input += synapse0x1b24790();
   input += synapse0x1b247d0();
   input += synapse0x1b24260();
   input += synapse0x1b242a0();
   input += synapse0x1b24920();
   input += synapse0x1b24960();
   input += synapse0x1b249a0();
   input += synapse0x1b249e0();
   input += synapse0x1b24a20();
   input += synapse0x1b24a60();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b240d0() {
   double input = input0x1b240d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b24aa0() {
   double input = 0.41517;
   input += synapse0x1b24de0();
   input += synapse0x1b193b0();
   input += synapse0x1b193f0();
   input += synapse0x1b19430();
   input += synapse0x1b19680();
   input += synapse0x1b196c0();
   input += synapse0x1b19700();
   input += synapse0x1b19950();
   input += synapse0x1b19990();
   input += synapse0x1b19be0();
   input += synapse0x1b19c20();
   input += synapse0x1b19c60();
   input += synapse0x1b19eb0();
   input += synapse0x1b19ef0();
   input += synapse0x1b1a140();
   input += synapse0x1b1a180();
   input += synapse0x1b24c30();
   input += synapse0x1b24c70();
   input += synapse0x1b1a2d0();
   input += synapse0x1b1a7e0();
   input += synapse0x1b1a820();
   input += synapse0x1b1a860();
   input += synapse0x1b1aab0();
   input += synapse0x1b1aaf0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b24aa0() {
   double input = input0x1b24aa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b1ab30() {
   double input = 2.16427;
   input += synapse0x1b1a3a0();
   input += synapse0x1b1a3e0();
   input += synapse0x1b1a420();
   input += synapse0x1b1a460();
   input += synapse0x1b1ade0();
   input += synapse0x1b27130();
   input += synapse0x1b27170();
   input += synapse0x1b271b0();
   input += synapse0x1b271f0();
   input += synapse0x1b27230();
   input += synapse0x1b27270();
   input += synapse0x1b272b0();
   input += synapse0x1b272f0();
   input += synapse0x1b27330();
   input += synapse0x1b27370();
   input += synapse0x1b273b0();
   input += synapse0x1b1acc0();
   input += synapse0x1b1ad00();
   input += synapse0x1b27500();
   input += synapse0x1b27540();
   input += synapse0x1b27580();
   input += synapse0x1b275c0();
   input += synapse0x1b27600();
   input += synapse0x1b27640();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b1ab30() {
   double input = input0x1b1ab30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b27680() {
   double input = 0.780675;
   input += synapse0x1b279c0();
   input += synapse0x1b27a00();
   input += synapse0x1b27a40();
   input += synapse0x1b27a80();
   input += synapse0x1b27ac0();
   input += synapse0x1b27b00();
   input += synapse0x1b27b40();
   input += synapse0x1b27b80();
   input += synapse0x1b27bc0();
   input += synapse0x1b27c00();
   input += synapse0x1b27c40();
   input += synapse0x1b27c80();
   input += synapse0x1b27cc0();
   input += synapse0x1b27d00();
   input += synapse0x1b27d40();
   input += synapse0x1b27d80();
   input += synapse0x1b27810();
   input += synapse0x1b27850();
   input += synapse0x1b27ed0();
   input += synapse0x1b27f10();
   input += synapse0x1b27f50();
   input += synapse0x1b27f90();
   input += synapse0x1b27fd0();
   input += synapse0x1b28010();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b27680() {
   double input = input0x1b27680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b28050() {
   double input = -1.58428;
   input += synapse0x1b28390();
   input += synapse0x1b283d0();
   input += synapse0x1b28410();
   input += synapse0x1b28450();
   input += synapse0x1b28490();
   input += synapse0x1b284d0();
   input += synapse0x1b28510();
   input += synapse0x1b28550();
   input += synapse0x1b28590();
   input += synapse0x1b285d0();
   input += synapse0x1b28610();
   input += synapse0x1b28650();
   input += synapse0x1b28690();
   input += synapse0x1b286d0();
   input += synapse0x1b28710();
   input += synapse0x1b28750();
   input += synapse0x1b281e0();
   input += synapse0x1b28220();
   input += synapse0x1b288a0();
   input += synapse0x1b288e0();
   input += synapse0x1b28920();
   input += synapse0x1b28960();
   input += synapse0x1b289a0();
   input += synapse0x1b289e0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b28050() {
   double input = input0x1b28050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b28a20() {
   double input = -0.361813;
   input += synapse0x1b28d60();
   input += synapse0x1b28da0();
   input += synapse0x1b28de0();
   input += synapse0x1b28e20();
   input += synapse0x1b28e60();
   input += synapse0x1b28ea0();
   input += synapse0x1b28ee0();
   input += synapse0x1b28f20();
   input += synapse0x1b28f60();
   input += synapse0x1b28fa0();
   input += synapse0x1b28fe0();
   input += synapse0x1b29020();
   input += synapse0x1b29060();
   input += synapse0x1b290a0();
   input += synapse0x1b290e0();
   input += synapse0x1b29120();
   input += synapse0x1b28bb0();
   input += synapse0x1b28bf0();
   input += synapse0x1b29270();
   input += synapse0x1b292b0();
   input += synapse0x1b292f0();
   input += synapse0x1b29330();
   input += synapse0x1b29370();
   input += synapse0x1b293b0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b28a20() {
   double input = input0x1b28a20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b293f0() {
   double input = 0.17279;
   input += synapse0x1b29730();
   input += synapse0x1b29770();
   input += synapse0x1b297b0();
   input += synapse0x1b297f0();
   input += synapse0x1b29830();
   input += synapse0x1b29870();
   input += synapse0x1b298b0();
   input += synapse0x1b298f0();
   input += synapse0x1b29930();
   input += synapse0x1b29970();
   input += synapse0x1b299b0();
   input += synapse0x1b299f0();
   input += synapse0x1b29a30();
   input += synapse0x1b29a70();
   input += synapse0x1b29ab0();
   input += synapse0x1b29af0();
   input += synapse0x1b29580();
   input += synapse0x1b295c0();
   input += synapse0x1b29c40();
   input += synapse0x1b29c80();
   input += synapse0x1b29cc0();
   input += synapse0x1b29d00();
   input += synapse0x1b29d40();
   input += synapse0x1b29d80();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b293f0() {
   double input = input0x1b293f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b29dc0() {
   double input = -0.086574;
   input += synapse0x1b2a100();
   input += synapse0x1b2a140();
   input += synapse0x1b2a180();
   input += synapse0x1b2a1c0();
   input += synapse0x1b2a200();
   input += synapse0x1b2a240();
   input += synapse0x1b2a280();
   input += synapse0x1b2a2c0();
   input += synapse0x1b2a300();
   input += synapse0x1b2a340();
   input += synapse0x1b2a380();
   input += synapse0x1b2a3c0();
   input += synapse0x1b2a400();
   input += synapse0x1b2a440();
   input += synapse0x1b2a480();
   input += synapse0x1b2a4c0();
   input += synapse0x1b29f50();
   input += synapse0x1b29f90();
   input += synapse0x1b2a610();
   input += synapse0x1b2a650();
   input += synapse0x1b2a690();
   input += synapse0x1b2a6d0();
   input += synapse0x1b2a710();
   input += synapse0x1b2a750();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b29dc0() {
   double input = input0x1b29dc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b2a790() {
   double input = 0.497512;
   input += synapse0x1b2aad0();
   input += synapse0x1b2ab10();
   input += synapse0x1b2ab50();
   input += synapse0x1b2ab90();
   input += synapse0x1b2abd0();
   input += synapse0x1b2ac10();
   input += synapse0x1b2ac50();
   input += synapse0x1b2ac90();
   input += synapse0x1b2acd0();
   input += synapse0x1b2ad10();
   input += synapse0x1b2ad50();
   input += synapse0x1b2ad90();
   input += synapse0x1b2add0();
   input += synapse0x1b2ae10();
   input += synapse0x1b2ae50();
   input += synapse0x1b2ae90();
   input += synapse0x1b2a920();
   input += synapse0x1b2a960();
   input += synapse0x1b2afe0();
   input += synapse0x1b2b020();
   input += synapse0x1b2b060();
   input += synapse0x1b2b0a0();
   input += synapse0x1b2b0e0();
   input += synapse0x1b2b120();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b2a790() {
   double input = input0x1b2a790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b2b160() {
   double input = -0.671731;
   input += synapse0x1b2b4a0();
   input += synapse0x1b2b4e0();
   input += synapse0x1b2b520();
   input += synapse0x1b2b560();
   input += synapse0x1b2b5a0();
   input += synapse0x1b2b5e0();
   input += synapse0x1b2b620();
   input += synapse0x1b2b660();
   input += synapse0x1b2b6a0();
   input += synapse0x1b2b6e0();
   input += synapse0x1b2b720();
   input += synapse0x1b2b760();
   input += synapse0x1b2b7a0();
   input += synapse0x1b2b7e0();
   input += synapse0x1b2b820();
   input += synapse0x1b2b860();
   input += synapse0x1b2b2f0();
   input += synapse0x1b2b330();
   input += synapse0x1b2b9b0();
   input += synapse0x1b2b9f0();
   input += synapse0x1b2ba30();
   input += synapse0x1b2ba70();
   input += synapse0x1b2bab0();
   input += synapse0x1b2baf0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b2b160() {
   double input = input0x1b2b160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b2bb30() {
   double input = 0.58922;
   input += synapse0x1b145a0();
   input += synapse0x1b145e0();
   input += synapse0x1b14620();
   input += synapse0x1b14660();
   input += synapse0x1b146a0();
   input += synapse0x1b146e0();
   input += synapse0x1b14720();
   input += synapse0x1b14760();
   input += synapse0x1b2c280();
   input += synapse0x1b2c2c0();
   input += synapse0x1b2c300();
   input += synapse0x1b2c340();
   input += synapse0x1b2c380();
   input += synapse0x1b2c3c0();
   input += synapse0x1b2c400();
   input += synapse0x1b2c440();
   input += synapse0x1b2bcc0();
   input += synapse0x1b2bd00();
   input += synapse0x1b2c590();
   input += synapse0x1b2c5d0();
   input += synapse0x1b2c610();
   input += synapse0x1b2c650();
   input += synapse0x1b2c690();
   input += synapse0x1b2c6d0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b2bb30() {
   double input = input0x1b2bb30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b2c710() {
   double input = 0.407006;
   input += synapse0x1b2ca50();
   input += synapse0x1b2ca90();
   input += synapse0x1b2cad0();
   input += synapse0x1b2cb10();
   input += synapse0x1b2cb50();
   input += synapse0x1b2cb90();
   input += synapse0x1b2cbd0();
   input += synapse0x1b2cc10();
   input += synapse0x1b2cc50();
   input += synapse0x1b2cc90();
   input += synapse0x1b2ccd0();
   input += synapse0x1b2cd10();
   input += synapse0x1b2cd50();
   input += synapse0x1b2cd90();
   input += synapse0x1b2cdd0();
   input += synapse0x1b2ce10();
   input += synapse0x1b2c8a0();
   input += synapse0x1b2c8e0();
   input += synapse0x1b2cf60();
   input += synapse0x1b2cfa0();
   input += synapse0x1b2cfe0();
   input += synapse0x1b2d020();
   input += synapse0x1b2d060();
   input += synapse0x1b2d0a0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b2c710() {
   double input = input0x1b2c710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b2d0e0() {
   double input = -1.11778;
   input += synapse0x1b2d420();
   input += synapse0x1b2d460();
   input += synapse0x1b2d4a0();
   input += synapse0x1b2d4e0();
   input += synapse0x1b2d520();
   input += synapse0x1b2d560();
   input += synapse0x1b2d5a0();
   input += synapse0x1b2d5e0();
   input += synapse0x1b2d620();
   input += synapse0x1b2d660();
   input += synapse0x1b2d6a0();
   input += synapse0x1b2d6e0();
   input += synapse0x1b2d720();
   input += synapse0x1b2d760();
   input += synapse0x1b2d7a0();
   input += synapse0x1b2d7e0();
   input += synapse0x1b2d270();
   input += synapse0x1b2d2b0();
   input += synapse0x1b1dde0();
   input += synapse0x1b1de20();
   input += synapse0x1b1de60();
   input += synapse0x1b1dea0();
   input += synapse0x1b1dee0();
   input += synapse0x1b1df20();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b2d0e0() {
   double input = input0x1b2d0e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b1df60() {
   double input = -0.273081;
   input += synapse0x1b1e2a0();
   input += synapse0x1b1e2e0();
   input += synapse0x1b1e320();
   input += synapse0x1b1e360();
   input += synapse0x1b1e3a0();
   input += synapse0x1b1e3e0();
   input += synapse0x1b1e420();
   input += synapse0x1b1e460();
   input += synapse0x1b1e4a0();
   input += synapse0x1b1e4e0();
   input += synapse0x1b1e520();
   input += synapse0x1b1e560();
   input += synapse0x1b1e5a0();
   input += synapse0x1b1e5e0();
   input += synapse0x1b1e620();
   input += synapse0x1b1e660();
   input += synapse0x1b1e0f0();
   input += synapse0x1b1e130();
   input += synapse0x1b1e7b0();
   input += synapse0x1b1e7f0();
   input += synapse0x1b1e830();
   input += synapse0x1b1e870();
   input += synapse0x1b1e8b0();
   input += synapse0x1b1e8f0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b1df60() {
   double input = input0x1b1df60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b1e930() {
   double input = 1.96737;
   input += synapse0x1b1ec70();
   input += synapse0x1b1ecb0();
   input += synapse0x1b1ecf0();
   input += synapse0x1b1ed30();
   input += synapse0x1b1ed70();
   input += synapse0x1b1edb0();
   input += synapse0x1b1edf0();
   input += synapse0x1b1ee30();
   input += synapse0x1b1ee70();
   input += synapse0x1b1eeb0();
   input += synapse0x1b1eef0();
   input += synapse0x1b1ef30();
   input += synapse0x1b1ef70();
   input += synapse0x1b1efb0();
   input += synapse0x1b1eff0();
   input += synapse0x1b1f030();
   input += synapse0x1b1eac0();
   input += synapse0x1b1eb00();
   input += synapse0x1b1f180();
   input += synapse0x1b1f1c0();
   input += synapse0x1b1f200();
   input += synapse0x1b1f240();
   input += synapse0x1b1f280();
   input += synapse0x1b1f2c0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b1e930() {
   double input = input0x1b1e930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b1f300() {
   double input = 0.488563;
   input += synapse0x1b1f640();
   input += synapse0x1b1f680();
   input += synapse0x1b1f6c0();
   input += synapse0x1b1f700();
   input += synapse0x1b1f740();
   input += synapse0x1b1f780();
   input += synapse0x1b1f7c0();
   input += synapse0x1b1f800();
   input += synapse0x1b1f840();
   input += synapse0x1b1f880();
   input += synapse0x1b1f8c0();
   input += synapse0x1b1f900();
   input += synapse0x1b1f940();
   input += synapse0x1b1f980();
   input += synapse0x1b1f9c0();
   input += synapse0x1b1fa00();
   input += synapse0x1b1f490();
   input += synapse0x1b1f4d0();
   input += synapse0x1b1fb50();
   input += synapse0x1b1fb90();
   input += synapse0x1b1fbd0();
   input += synapse0x1b1fc10();
   input += synapse0x1b1fc50();
   input += synapse0x1b1fc90();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b1f300() {
   double input = input0x1b1f300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b31940() {
   double input = 1.53752;
   input += synapse0x1b31b60();
   input += synapse0x1b31ba0();
   input += synapse0x1b31be0();
   input += synapse0x1b31c20();
   input += synapse0x1b31c60();
   input += synapse0x1b31ca0();
   input += synapse0x1b31ce0();
   input += synapse0x1b31d20();
   input += synapse0x1b31d60();
   input += synapse0x1b31da0();
   input += synapse0x1b31de0();
   input += synapse0x1b31e20();
   input += synapse0x1b31e60();
   input += synapse0x1b31ea0();
   input += synapse0x1b31ee0();
   input += synapse0x1b31f20();
   input += synapse0x1b1fcd0();
   input += synapse0x1b1fd10();
   input += synapse0x1b32070();
   input += synapse0x1b320b0();
   input += synapse0x1b320f0();
   input += synapse0x1b32130();
   input += synapse0x1b32170();
   input += synapse0x1b321b0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b31940() {
   double input = input0x1b31940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b321f0() {
   double input = 1.03601;
   input += synapse0x1b32530();
   input += synapse0x1b32570();
   input += synapse0x1b325b0();
   input += synapse0x1b325f0();
   input += synapse0x1b32630();
   input += synapse0x1b32670();
   input += synapse0x1b326b0();
   input += synapse0x1b326f0();
   input += synapse0x1b32730();
   input += synapse0x1b32770();
   input += synapse0x1b327b0();
   input += synapse0x1b327f0();
   input += synapse0x1b32830();
   input += synapse0x1b32870();
   input += synapse0x1b328b0();
   input += synapse0x1b328f0();
   input += synapse0x1b32380();
   input += synapse0x1b323c0();
   input += synapse0x1b32a40();
   input += synapse0x1b32a80();
   input += synapse0x1b32ac0();
   input += synapse0x1b32b00();
   input += synapse0x1b32b40();
   input += synapse0x1b32b80();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b321f0() {
   double input = input0x1b321f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b32bc0() {
   double input = -0.0756303;
   input += synapse0x1b32f00();
   input += synapse0x1b32f40();
   input += synapse0x1b32f80();
   input += synapse0x1b32fc0();
   input += synapse0x1b33000();
   input += synapse0x1b33040();
   input += synapse0x1b33080();
   input += synapse0x1b330c0();
   input += synapse0x1b33100();
   input += synapse0x1b33140();
   input += synapse0x1b33180();
   input += synapse0x1b331c0();
   input += synapse0x1b33200();
   input += synapse0x1b33240();
   input += synapse0x1b33280();
   input += synapse0x1b332c0();
   input += synapse0x1b32d50();
   input += synapse0x1b32d90();
   input += synapse0x1b33410();
   input += synapse0x1b33450();
   input += synapse0x1b33490();
   input += synapse0x1b334d0();
   input += synapse0x1b33510();
   input += synapse0x1b33550();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b32bc0() {
   double input = input0x1b32bc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b33590() {
   double input = 1.02729;
   input += synapse0x1b338d0();
   input += synapse0x1b33910();
   input += synapse0x1b33950();
   input += synapse0x1b33990();
   input += synapse0x1b339d0();
   input += synapse0x1b33a10();
   input += synapse0x1b33a50();
   input += synapse0x1b33a90();
   input += synapse0x1b33ad0();
   input += synapse0x1b33b10();
   input += synapse0x1b33b50();
   input += synapse0x1b33b90();
   input += synapse0x1b33bd0();
   input += synapse0x1b33c10();
   input += synapse0x1b33c50();
   input += synapse0x1b33c90();
   input += synapse0x1b33720();
   input += synapse0x1b33760();
   input += synapse0x1b33de0();
   input += synapse0x1b33e20();
   input += synapse0x1b33e60();
   input += synapse0x1b33ea0();
   input += synapse0x1b33ee0();
   input += synapse0x1b33f20();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b33590() {
   double input = input0x1b33590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b3a790() {
   double input = 0.831984;
   input += synapse0x1b104c0();
   input += synapse0x1b10500();
   input += synapse0x1b119d0();
   input += synapse0x1b11a10();
   input += synapse0x1b123a0();
   input += synapse0x1b123e0();
   input += synapse0x1b13170();
   input += synapse0x1b131b0();
   input += synapse0x1b13b40();
   input += synapse0x1b13b80();
   input += synapse0x1b14510();
   input += synapse0x1b14550();
   input += synapse0x1b14ff0();
   input += synapse0x1b15030();
   input += synapse0x1b159c0();
   input += synapse0x1b15a00();
   input += synapse0x1b12aa0();
   input += synapse0x1b12ae0();
   input += synapse0x1b17570();
   input += synapse0x1b175b0();
   input += synapse0x1b17f40();
   input += synapse0x1b17f80();
   input += synapse0x1b18910();
   input += synapse0x1b18950();
   input += synapse0x1b192e0();
   input += synapse0x1b19320();
   input += synapse0x1b0d450();
   input += synapse0x1b0d490();
   input += synapse0x1b1b3d0();
   input += synapse0x1b1b410();
   input += synapse0x1b1bda0();
   input += synapse0x1b1bde0();
   input += synapse0x1b1c770();
   input += synapse0x1b1c7b0();
   input += synapse0x1b1d140();
   input += synapse0x1b1d180();
   input += synapse0x1b1db10();
   input += synapse0x1b1db50();
   input += synapse0x1b16660();
   input += synapse0x1b166a0();
   input += synapse0x1b1ff10();
   input += synapse0x1b1ff50();
   input += synapse0x1b208a0();
   input += synapse0x1b208e0();
   input += synapse0x1b21270();
   input += synapse0x1b212b0();
   input += synapse0x1b21c40();
   input += synapse0x1b21c80();
   input += synapse0x1b22610();
   input += synapse0x1b22650();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b3a790() {
   double input = input0x1b3a790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b3ab30() {
   double input = 0.559395;
   input += synapse0x1b24d50();
   input += synapse0x1b24d90();
   input += synapse0x1b1a310();
   input += synapse0x1b1a350();
   input += synapse0x1b27930();
   input += synapse0x1b27970();
   input += synapse0x1b28300();
   input += synapse0x1b28340();
   input += synapse0x1b28cd0();
   input += synapse0x1b28d10();
   input += synapse0x1b296a0();
   input += synapse0x1b296e0();
   input += synapse0x1b2a070();
   input += synapse0x1b2a0b0();
   input += synapse0x1b2aa40();
   input += synapse0x1b2aa80();
   input += synapse0x1b2b410();
   input += synapse0x1b2b450();
   input += synapse0x1b2bde0();
   input += synapse0x1b2be20();
   input += synapse0x1b2c9c0();
   input += synapse0x1b2ca00();
   input += synapse0x1b2d390();
   input += synapse0x1b2d3d0();
   input += synapse0x1b1e210();
   input += synapse0x1b1e250();
   input += synapse0x1b1ebe0();
   input += synapse0x1b1ec20();
   input += synapse0x1b1f5b0();
   input += synapse0x1b1f5f0();
   input += synapse0x1b31ad0();
   input += synapse0x1b31b10();
   input += synapse0x1b324a0();
   input += synapse0x1b324e0();
   input += synapse0x1b32e70();
   input += synapse0x1b32eb0();
   input += synapse0x1b33840();
   input += synapse0x1b33880();
   input += synapse0x1b0f730();
   input += synapse0x1b0f770();
   input += synapse0x1b22fe0();
   input += synapse0x1b23020();
   input += synapse0x1b33f60();
   input += synapse0x1b33fa0();
   input += synapse0x1b33fe0();
   input += synapse0x1b34020();
   input += synapse0x1b3aed0();
   input += synapse0x1b3af10();
   input += synapse0x1b3af50();
   input += synapse0x1b3af90();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b3ab30() {
   double input = input0x1b3ab30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b3afd0() {
   double input = -0.457318;
   input += synapse0x1b3b310();
   input += synapse0x1b3b350();
   input += synapse0x1b3b390();
   input += synapse0x1b3b3d0();
   input += synapse0x1b3b410();
   input += synapse0x1b3b450();
   input += synapse0x1b3b490();
   input += synapse0x1b3b4d0();
   input += synapse0x1b3b510();
   input += synapse0x1b3b550();
   input += synapse0x1b3b590();
   input += synapse0x1b3b5d0();
   input += synapse0x1b3b610();
   input += synapse0x1b3b650();
   input += synapse0x1b3b690();
   input += synapse0x1b3b6d0();
   input += synapse0x1b3b160();
   input += synapse0x1b3b1a0();
   input += synapse0x1b3b820();
   input += synapse0x1b3b860();
   input += synapse0x1b3b8a0();
   input += synapse0x1b3b8e0();
   input += synapse0x1b3b920();
   input += synapse0x1b3b960();
   input += synapse0x1b3b9a0();
   input += synapse0x1b3b9e0();
   input += synapse0x1b3ba20();
   input += synapse0x1b3ba60();
   input += synapse0x1b3baa0();
   input += synapse0x1b3bae0();
   input += synapse0x1b3bb20();
   input += synapse0x1b3bb60();
   input += synapse0x1b3b710();
   input += synapse0x1b3b750();
   input += synapse0x1b3b790();
   input += synapse0x1b3b7d0();
   input += synapse0x1b3bdb0();
   input += synapse0x1b3bdf0();
   input += synapse0x1b3be30();
   input += synapse0x1b3be70();
   input += synapse0x1b3beb0();
   input += synapse0x1b3bef0();
   input += synapse0x1b3bf30();
   input += synapse0x1b3bf70();
   input += synapse0x1b3bfb0();
   input += synapse0x1b3bff0();
   input += synapse0x1b3c030();
   input += synapse0x1b3c070();
   input += synapse0x1b3c0b0();
   input += synapse0x1b3c0f0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b3afd0() {
   double input = input0x1b3afd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b3c130() {
   double input = -0.541483;
   input += synapse0x1b3c470();
   input += synapse0x1b3c4b0();
   input += synapse0x1b3c4f0();
   input += synapse0x1b3c530();
   input += synapse0x1b3c570();
   input += synapse0x1b3c5b0();
   input += synapse0x1b3c5f0();
   input += synapse0x1b3c630();
   input += synapse0x1b3c670();
   input += synapse0x1b3c6b0();
   input += synapse0x1b3c6f0();
   input += synapse0x1b3c730();
   input += synapse0x1b3c770();
   input += synapse0x1b3c7b0();
   input += synapse0x1b3c7f0();
   input += synapse0x1b3c830();
   input += synapse0x1b3c2c0();
   input += synapse0x1b3c300();
   input += synapse0x1b3c980();
   input += synapse0x1b3c9c0();
   input += synapse0x1b3ca00();
   input += synapse0x1b3ca40();
   input += synapse0x1b3ca80();
   input += synapse0x1b3cac0();
   input += synapse0x1b3cb00();
   input += synapse0x1b3cb40();
   input += synapse0x1b3cb80();
   input += synapse0x1b3cbc0();
   input += synapse0x1b3cc00();
   input += synapse0x1b3cc40();
   input += synapse0x1b3cc80();
   input += synapse0x1b3ccc0();
   input += synapse0x1b3c870();
   input += synapse0x1b3c8b0();
   input += synapse0x1b3c8f0();
   input += synapse0x1b3c930();
   input += synapse0x1b3cf10();
   input += synapse0x1b3cf50();
   input += synapse0x1b3cf90();
   input += synapse0x1b3cfd0();
   input += synapse0x1b3d010();
   input += synapse0x1b3d050();
   input += synapse0x1b3d090();
   input += synapse0x1b3d0d0();
   input += synapse0x1b3d110();
   input += synapse0x1b3d150();
   input += synapse0x1b3d190();
   input += synapse0x1b3d1d0();
   input += synapse0x1b3d210();
   input += synapse0x1b3d250();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b3c130() {
   double input = input0x1b3c130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b3d290() {
   double input = -0.56901;
   input += synapse0x1b3d5d0();
   input += synapse0x1b3d610();
   input += synapse0x1b3d650();
   input += synapse0x1b3d690();
   input += synapse0x1b3d6d0();
   input += synapse0x1b3d710();
   input += synapse0x1b3d750();
   input += synapse0x1b3d790();
   input += synapse0x1b3d7d0();
   input += synapse0x1b3d810();
   input += synapse0x1b3d850();
   input += synapse0x1b3d890();
   input += synapse0x1b3d8d0();
   input += synapse0x1b3d910();
   input += synapse0x1b3d950();
   input += synapse0x1b3d990();
   input += synapse0x1b3d420();
   input += synapse0x1b3d460();
   input += synapse0x1b3dae0();
   input += synapse0x1b3db20();
   input += synapse0x1b3db60();
   input += synapse0x1b3dba0();
   input += synapse0x1b3dbe0();
   input += synapse0x1b3dc20();
   input += synapse0x1b3dc60();
   input += synapse0x1b3dca0();
   input += synapse0x1b3dce0();
   input += synapse0x1b3dd20();
   input += synapse0x1b3dd60();
   input += synapse0x1b3dda0();
   input += synapse0x1b3dde0();
   input += synapse0x1b3de20();
   input += synapse0x1b3d9d0();
   input += synapse0x1b3da10();
   input += synapse0x1b3da50();
   input += synapse0x1b3da90();
   input += synapse0x1b3e070();
   input += synapse0x1b3e0b0();
   input += synapse0x1b3e0f0();
   input += synapse0x1b3e130();
   input += synapse0x1b3e170();
   input += synapse0x1b3e1b0();
   input += synapse0x1b3e1f0();
   input += synapse0x1b3e230();
   input += synapse0x1b3e270();
   input += synapse0x1b3e2b0();
   input += synapse0x1b3e2f0();
   input += synapse0x1b3e330();
   input += synapse0x1b3e370();
   input += synapse0x1b3e3b0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b3d290() {
   double input = input0x1b3d290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x1b3e3f0() {
   double input = 6.22;
   input += synapse0x1b0f4d0();
   input += synapse0x1b3e610();
   input += synapse0x1b3e650();
   input += synapse0x1b3e690();
   input += synapse0x1b3e6d0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x1b3e3f0() {
   double input = input0x1b3e3f0();
   return (input * 1)+0;
}

double NNfunction_sb_sLcR::synapse0x18ca320() {
   return (neuron0x1b0a4b0()*0.0849704);
}

double NNfunction_sb_sLcR::synapse0x1b0a370() {
   return (neuron0x1b0a7f0()*0.0892332);
}

double NNfunction_sb_sLcR::synapse0x1b0a3b0() {
   return (neuron0x1b0ab30()*-0.333936);
}

double NNfunction_sb_sLcR::synapse0x1b0f7c0() {
   return (neuron0x1b0ae70()*0.0247975);
}

double NNfunction_sb_sLcR::synapse0x1b0f800() {
   return (neuron0x1b0b1b0()*0.45479);
}

double NNfunction_sb_sLcR::synapse0x1b0f840() {
   return (neuron0x1b0b4f0()*-0.0681011);
}

double NNfunction_sb_sLcR::synapse0x1b0f880() {
   return (neuron0x1b0b830()*0.0281324);
}

double NNfunction_sb_sLcR::synapse0x1b0f8c0() {
   return (neuron0x1b0bb70()*0.611156);
}

double NNfunction_sb_sLcR::synapse0x1b0f900() {
   return (neuron0x1b0beb0()*-0.0574918);
}

double NNfunction_sb_sLcR::synapse0x1b0f940() {
   return (neuron0x1b0c1f0()*-0.120126);
}

double NNfunction_sb_sLcR::synapse0x1b0f980() {
   return (neuron0x1b0c530()*0.293942);
}

double NNfunction_sb_sLcR::synapse0x1b0f9c0() {
   return (neuron0x1b0c870()*-0.138603);
}

double NNfunction_sb_sLcR::synapse0x1b0fa00() {
   return (neuron0x1b0cbb0()*-0.0722922);
}

double NNfunction_sb_sLcR::synapse0x1b0fa40() {
   return (neuron0x1b0cef0()*0.27327);
}

double NNfunction_sb_sLcR::synapse0x1b0fa80() {
   return (neuron0x1b0d230()*-0.248156);
}

double NNfunction_sb_sLcR::synapse0x1b0fac0() {
   return (neuron0x1b0d570()*-0.352385);
}

double NNfunction_sb_sLcR::synapse0x1b0a2e0() {
   return (neuron0x1b0d8b0()*0.366136);
}

double NNfunction_sb_sLcR::synapse0x1b0a320() {
   return (neuron0x1b0de10()*0.193781);
}

double NNfunction_sb_sLcR::synapse0x18bbbc0() {
   return (neuron0x1b0e030()*-0.0815682);
}

double NNfunction_sb_sLcR::synapse0x18bbc00() {
   return (neuron0x1b0e370()*-0.331525);
}

double NNfunction_sb_sLcR::synapse0x1b0fd20() {
   return (neuron0x1b0e6b0()*-0.212307);
}

double NNfunction_sb_sLcR::synapse0x1b0fd60() {
   return (neuron0x1b0e9f0()*-0.0345198);
}

double NNfunction_sb_sLcR::synapse0x1b0fda0() {
   return (neuron0x1b0ed30()*0.583804);
}

double NNfunction_sb_sLcR::synapse0x1b0fde0() {
   return (neuron0x1b0f070()*0.220041);
}

double NNfunction_sb_sLcR::synapse0x1b10160() {
   return (neuron0x1b0a4b0()*0.102289);
}

double NNfunction_sb_sLcR::synapse0x1b101a0() {
   return (neuron0x1b0a7f0()*-0.0329513);
}

double NNfunction_sb_sLcR::synapse0x1b101e0() {
   return (neuron0x1b0ab30()*0.0770842);
}

double NNfunction_sb_sLcR::synapse0x1b10220() {
   return (neuron0x1b0ae70()*-1.23453);
}

double NNfunction_sb_sLcR::synapse0x1b10260() {
   return (neuron0x1b0b1b0()*0.0489876);
}

double NNfunction_sb_sLcR::synapse0x1b102a0() {
   return (neuron0x1b0b4f0()*0.0355672);
}

double NNfunction_sb_sLcR::synapse0x1b102e0() {
   return (neuron0x1b0b830()*-0.00780582);
}

double NNfunction_sb_sLcR::synapse0x1b10320() {
   return (neuron0x1b0bb70()*-0.0798128);
}

double NNfunction_sb_sLcR::synapse0x1b10360() {
   return (neuron0x1b0beb0()*-0.0209394);
}

double NNfunction_sb_sLcR::synapse0x1b0fc10() {
   return (neuron0x1b0c1f0()*0.0461955);
}

double NNfunction_sb_sLcR::synapse0x1b0fc50() {
   return (neuron0x1b0c530()*0.0272882);
}

double NNfunction_sb_sLcR::synapse0x1b0fc90() {
   return (neuron0x1b0c870()*0.0413158);
}

double NNfunction_sb_sLcR::synapse0x1b0fcd0() {
   return (neuron0x1b0cbb0()*-0.528175);
}

double NNfunction_sb_sLcR::synapse0x1b105b0() {
   return (neuron0x1b0cef0()*0.0635321);
}

double NNfunction_sb_sLcR::synapse0x1b105f0() {
   return (neuron0x1b0d230()*0.00314414);
}

double NNfunction_sb_sLcR::synapse0x1b10630() {
   return (neuron0x1b0d570()*-0.812016);
}

double NNfunction_sb_sLcR::synapse0x1b0ffb0() {
   return (neuron0x1b0d8b0()*-0.210093);
}

double NNfunction_sb_sLcR::synapse0x1b0fff0() {
   return (neuron0x1b0de10()*0.116411);
}

double NNfunction_sb_sLcR::synapse0x1b10780() {
   return (neuron0x1b0e030()*0.0594359);
}

double NNfunction_sb_sLcR::synapse0x1b107c0() {
   return (neuron0x1b0e370()*-0.0589666);
}

double NNfunction_sb_sLcR::synapse0x1b10800() {
   return (neuron0x1b0e6b0()*0.124037);
}

double NNfunction_sb_sLcR::synapse0x1b10840() {
   return (neuron0x1b0e9f0()*0.123);
}

double NNfunction_sb_sLcR::synapse0x1b10880() {
   return (neuron0x1b0ed30()*-0.0517964);
}

double NNfunction_sb_sLcR::synapse0x1b108c0() {
   return (neuron0x1b0f070()*0.0248568);
}

double NNfunction_sb_sLcR::synapse0x1b10c40() {
   return (neuron0x1b0a4b0()*-0.036625);
}

double NNfunction_sb_sLcR::synapse0x1b10c80() {
   return (neuron0x1b0a7f0()*-0.0207309);
}

double NNfunction_sb_sLcR::synapse0x1b10cc0() {
   return (neuron0x1b0ab30()*1.08497);
}

double NNfunction_sb_sLcR::synapse0x1b10d00() {
   return (neuron0x1b0ae70()*-0.0479339);
}

double NNfunction_sb_sLcR::synapse0x1b10d40() {
   return (neuron0x1b0b1b0()*-0.0504873);
}

double NNfunction_sb_sLcR::synapse0x1b10d80() {
   return (neuron0x1b0b4f0()*0.00726264);
}

double NNfunction_sb_sLcR::synapse0x1b10dc0() {
   return (neuron0x1b0b830()*-0.000396418);
}

double NNfunction_sb_sLcR::synapse0x1b10e00() {
   return (neuron0x1b0bb70()*0.0236872);
}

double NNfunction_sb_sLcR::synapse0x1b10e40() {
   return (neuron0x1b0beb0()*0.0458357);
}

double NNfunction_sb_sLcR::synapse0x1b10e80() {
   return (neuron0x1b0c1f0()*0.0615906);
}

double NNfunction_sb_sLcR::synapse0x1b10ec0() {
   return (neuron0x1b0c530()*0.0103427);
}

double NNfunction_sb_sLcR::synapse0x1b10f00() {
   return (neuron0x1b0c870()*-0.0763684);
}

double NNfunction_sb_sLcR::synapse0x1b10f40() {
   return (neuron0x1b0cbb0()*-0.793587);
}

double NNfunction_sb_sLcR::synapse0x1b10f80() {
   return (neuron0x1b0cef0()*0.0122557);
}

double NNfunction_sb_sLcR::synapse0x1b10fc0() {
   return (neuron0x1b0d230()*0.00297837);
}

double NNfunction_sb_sLcR::synapse0x1b11000() {
   return (neuron0x1b0d570()*-0.00942512);
}

double NNfunction_sb_sLcR::synapse0x1b10a90() {
   return (neuron0x1b0d8b0()*0.0289125);
}

double NNfunction_sb_sLcR::synapse0x1b10ad0() {
   return (neuron0x1b0de10()*-0.0338068);
}

double NNfunction_sb_sLcR::synapse0x18c9a10() {
   return (neuron0x1b0e030()*-0.0132488);
}

double NNfunction_sb_sLcR::synapse0x18c9a50() {
   return (neuron0x1b0e370()*0.0417322);
}

double NNfunction_sb_sLcR::synapse0x1af9540() {
   return (neuron0x1b0e6b0()*0.0100504);
}

double NNfunction_sb_sLcR::synapse0x1af9580() {
   return (neuron0x1b0e9f0()*0.0204309);
}

double NNfunction_sb_sLcR::synapse0x1af95c0() {
   return (neuron0x1b0ed30()*-0.0311229);
}

double NNfunction_sb_sLcR::synapse0x1b0a3f0() {
   return (neuron0x1b0f070()*-0.00592685);
}

double NNfunction_sb_sLcR::synapse0x1b10550() {
   return (neuron0x1b0a4b0()*-0.334794);
}

double NNfunction_sb_sLcR::synapse0x1b0a430() {
   return (neuron0x1b0a7f0()*-0.239657);
}

double NNfunction_sb_sLcR::synapse0x1b0a470() {
   return (neuron0x1b0ab30()*-0.161086);
}

double NNfunction_sb_sLcR::synapse0x1b11150() {
   return (neuron0x1b0ae70()*0.157834);
}

double NNfunction_sb_sLcR::synapse0x1b11190() {
   return (neuron0x1b0b1b0()*-0.644816);
}

double NNfunction_sb_sLcR::synapse0x1b111d0() {
   return (neuron0x1b0b4f0()*-0.0809211);
}

double NNfunction_sb_sLcR::synapse0x1b11210() {
   return (neuron0x1b0b830()*-0.762883);
}

double NNfunction_sb_sLcR::synapse0x1b11250() {
   return (neuron0x1b0bb70()*0.591197);
}

double NNfunction_sb_sLcR::synapse0x1b11290() {
   return (neuron0x1b0beb0()*-0.154959);
}

double NNfunction_sb_sLcR::synapse0x1b112d0() {
   return (neuron0x1b0c1f0()*-0.175499);
}

double NNfunction_sb_sLcR::synapse0x1b11310() {
   return (neuron0x1b0c530()*0.104527);
}

double NNfunction_sb_sLcR::synapse0x1b11350() {
   return (neuron0x1b0c870()*0.257472);
}

double NNfunction_sb_sLcR::synapse0x1b11390() {
   return (neuron0x1b0cbb0()*-0.535696);
}

double NNfunction_sb_sLcR::synapse0x1b113d0() {
   return (neuron0x1b0cef0()*0.0483163);
}

double NNfunction_sb_sLcR::synapse0x1b11410() {
   return (neuron0x1b0d230()*0.0609533);
}

double NNfunction_sb_sLcR::synapse0x1b11450() {
   return (neuron0x1b0d570()*1.04442);
}

double NNfunction_sb_sLcR::synapse0x1b103a0() {
   return (neuron0x1b0d8b0()*0.0166516);
}

double NNfunction_sb_sLcR::synapse0x1b103e0() {
   return (neuron0x1b0de10()*0.163614);
}

double NNfunction_sb_sLcR::synapse0x1b115a0() {
   return (neuron0x1b0e030()*0.087103);
}

double NNfunction_sb_sLcR::synapse0x1b115e0() {
   return (neuron0x1b0e370()*0.134355);
}

double NNfunction_sb_sLcR::synapse0x1b11620() {
   return (neuron0x1b0e6b0()*0.126775);
}

double NNfunction_sb_sLcR::synapse0x1b11660() {
   return (neuron0x1b0e9f0()*-0.135452);
}

double NNfunction_sb_sLcR::synapse0x1b116a0() {
   return (neuron0x1b0ed30()*-0.131263);
}

double NNfunction_sb_sLcR::synapse0x1b116e0() {
   return (neuron0x1b0f070()*-0.0636388);
}

double NNfunction_sb_sLcR::synapse0x1b11a60() {
   return (neuron0x1b0a4b0()*0.0440718);
}

double NNfunction_sb_sLcR::synapse0x1b11aa0() {
   return (neuron0x1b0a7f0()*-0.822183);
}

double NNfunction_sb_sLcR::synapse0x1b11ae0() {
   return (neuron0x1b0ab30()*-0.103891);
}

double NNfunction_sb_sLcR::synapse0x1b11b20() {
   return (neuron0x1b0ae70()*0.42165);
}

double NNfunction_sb_sLcR::synapse0x1b11b60() {
   return (neuron0x1b0b1b0()*0.039775);
}

double NNfunction_sb_sLcR::synapse0x1b11ba0() {
   return (neuron0x1b0b4f0()*0.0302169);
}

double NNfunction_sb_sLcR::synapse0x1b11be0() {
   return (neuron0x1b0b830()*-0.105677);
}

double NNfunction_sb_sLcR::synapse0x1b11c20() {
   return (neuron0x1b0bb70()*0.23456);
}

double NNfunction_sb_sLcR::synapse0x1b11c60() {
   return (neuron0x1b0beb0()*-0.214416);
}

double NNfunction_sb_sLcR::synapse0x1b11ca0() {
   return (neuron0x1b0c1f0()*0.0846382);
}

double NNfunction_sb_sLcR::synapse0x1b11ce0() {
   return (neuron0x1b0c530()*0.328899);
}

double NNfunction_sb_sLcR::synapse0x1b11d20() {
   return (neuron0x1b0c870()*0.259881);
}

double NNfunction_sb_sLcR::synapse0x1b11d60() {
   return (neuron0x1b0cbb0()*0.269935);
}

double NNfunction_sb_sLcR::synapse0x1b11da0() {
   return (neuron0x1b0cef0()*-0.12632);
}

double NNfunction_sb_sLcR::synapse0x1b11de0() {
   return (neuron0x1b0d230()*-0.0388613);
}

double NNfunction_sb_sLcR::synapse0x1b11e20() {
   return (neuron0x1b0d570()*0.447223);
}

double NNfunction_sb_sLcR::synapse0x1b118b0() {
   return (neuron0x1b0d8b0()*-0.129872);
}

double NNfunction_sb_sLcR::synapse0x1b118f0() {
   return (neuron0x1b0de10()*0.454561);
}

double NNfunction_sb_sLcR::synapse0x1b11f70() {
   return (neuron0x1b0e030()*-0.0138209);
}

double NNfunction_sb_sLcR::synapse0x1b11fb0() {
   return (neuron0x1b0e370()*0.0436306);
}

double NNfunction_sb_sLcR::synapse0x1b11ff0() {
   return (neuron0x1b0e6b0()*0.277353);
}

double NNfunction_sb_sLcR::synapse0x1b12030() {
   return (neuron0x1b0e9f0()*0.00696128);
}

double NNfunction_sb_sLcR::synapse0x1b12070() {
   return (neuron0x1b0ed30()*-0.0538006);
}

double NNfunction_sb_sLcR::synapse0x1b120b0() {
   return (neuron0x1b0f070()*0.251279);
}

double NNfunction_sb_sLcR::synapse0x1b12430() {
   return (neuron0x1b0a4b0()*-0.0298298);
}

double NNfunction_sb_sLcR::synapse0x1b12470() {
   return (neuron0x1b0a7f0()*-0.65668);
}

double NNfunction_sb_sLcR::synapse0x1b124b0() {
   return (neuron0x1b0ab30()*-0.0925524);
}

double NNfunction_sb_sLcR::synapse0x1b124f0() {
   return (neuron0x1b0ae70()*1.11939);
}

double NNfunction_sb_sLcR::synapse0x1b12530() {
   return (neuron0x1b0b1b0()*-0.068939);
}

double NNfunction_sb_sLcR::synapse0x1b12570() {
   return (neuron0x1b0b4f0()*-0.0635803);
}

double NNfunction_sb_sLcR::synapse0x1b125b0() {
   return (neuron0x1b0b830()*-0.112241);
}

double NNfunction_sb_sLcR::synapse0x1b125f0() {
   return (neuron0x1b0bb70()*0.0201696);
}

double NNfunction_sb_sLcR::synapse0x1b12630() {
   return (neuron0x1b0beb0()*0.0466273);
}

double NNfunction_sb_sLcR::synapse0x18c9d80() {
   return (neuron0x1b0c1f0()*0.0223217);
}

double NNfunction_sb_sLcR::synapse0x18c9dc0() {
   return (neuron0x1b0c530()*0.052642);
}

double NNfunction_sb_sLcR::synapse0x18c9e00() {
   return (neuron0x1b0c870()*0.208132);
}

double NNfunction_sb_sLcR::synapse0x18c9e40() {
   return (neuron0x1b0cbb0()*-0.137663);
}

double NNfunction_sb_sLcR::synapse0x18c9e80() {
   return (neuron0x1b0cef0()*0.0175009);
}

double NNfunction_sb_sLcR::synapse0x18c9ec0() {
   return (neuron0x1b0d230()*-0.0140455);
}

double NNfunction_sb_sLcR::synapse0x18c9f00() {
   return (neuron0x1b0d570()*-0.418534);
}

double NNfunction_sb_sLcR::synapse0x1b12280() {
   return (neuron0x1b0d8b0()*-0.0514346);
}

double NNfunction_sb_sLcR::synapse0x1b122c0() {
   return (neuron0x1b0de10()*0.0733557);
}

double NNfunction_sb_sLcR::synapse0x18ca050() {
   return (neuron0x1b0e030()*-0.128821);
}

double NNfunction_sb_sLcR::synapse0x18ca090() {
   return (neuron0x1b0e370()*0.0368622);
}

double NNfunction_sb_sLcR::synapse0x18ca0d0() {
   return (neuron0x1b0e6b0()*0.101112);
}

double NNfunction_sb_sLcR::synapse0x18ca110() {
   return (neuron0x1b0e9f0()*0.0255027);
}

double NNfunction_sb_sLcR::synapse0x18ca150() {
   return (neuron0x1b0ed30()*0.00494861);
}

double NNfunction_sb_sLcR::synapse0x1b12e80() {
   return (neuron0x1b0f070()*0.0659163);
}

double NNfunction_sb_sLcR::synapse0x1b13200() {
   return (neuron0x1b0a4b0()*-0.0780985);
}

double NNfunction_sb_sLcR::synapse0x1b13240() {
   return (neuron0x1b0a7f0()*0.258447);
}

double NNfunction_sb_sLcR::synapse0x1b13280() {
   return (neuron0x1b0ab30()*-0.0240874);
}

double NNfunction_sb_sLcR::synapse0x1b132c0() {
   return (neuron0x1b0ae70()*0.0813682);
}

double NNfunction_sb_sLcR::synapse0x1b13300() {
   return (neuron0x1b0b1b0()*0.207334);
}

double NNfunction_sb_sLcR::synapse0x1b13340() {
   return (neuron0x1b0b4f0()*-0.173177);
}

double NNfunction_sb_sLcR::synapse0x1b13380() {
   return (neuron0x1b0b830()*0.0788089);
}

double NNfunction_sb_sLcR::synapse0x1b133c0() {
   return (neuron0x1b0bb70()*0.163558);
}

double NNfunction_sb_sLcR::synapse0x1b13400() {
   return (neuron0x1b0beb0()*-0.0880807);
}

double NNfunction_sb_sLcR::synapse0x1b13440() {
   return (neuron0x1b0c1f0()*0.21645);
}

double NNfunction_sb_sLcR::synapse0x1b13480() {
   return (neuron0x1b0c530()*-0.488061);
}

double NNfunction_sb_sLcR::synapse0x1b134c0() {
   return (neuron0x1b0c870()*-0.744328);
}

double NNfunction_sb_sLcR::synapse0x1b13500() {
   return (neuron0x1b0cbb0()*-0.349311);
}

double NNfunction_sb_sLcR::synapse0x1b13540() {
   return (neuron0x1b0cef0()*0.265731);
}

double NNfunction_sb_sLcR::synapse0x1b13580() {
   return (neuron0x1b0d230()*0.0569894);
}

double NNfunction_sb_sLcR::synapse0x1b135c0() {
   return (neuron0x1b0d570()*0.40336);
}

double NNfunction_sb_sLcR::synapse0x1b13050() {
   return (neuron0x1b0d8b0()*-0.108468);
}

double NNfunction_sb_sLcR::synapse0x1b13090() {
   return (neuron0x1b0de10()*0.176388);
}

double NNfunction_sb_sLcR::synapse0x1b13710() {
   return (neuron0x1b0e030()*0.184377);
}

double NNfunction_sb_sLcR::synapse0x1b13750() {
   return (neuron0x1b0e370()*-0.0771598);
}

double NNfunction_sb_sLcR::synapse0x1b13790() {
   return (neuron0x1b0e6b0()*-0.396021);
}

double NNfunction_sb_sLcR::synapse0x1b137d0() {
   return (neuron0x1b0e9f0()*0.283186);
}

double NNfunction_sb_sLcR::synapse0x1b13810() {
   return (neuron0x1b0ed30()*0.16487);
}

double NNfunction_sb_sLcR::synapse0x1b13850() {
   return (neuron0x1b0f070()*-0.0176033);
}

double NNfunction_sb_sLcR::synapse0x1b13bd0() {
   return (neuron0x1b0a4b0()*0.00371191);
}

double NNfunction_sb_sLcR::synapse0x1b13c10() {
   return (neuron0x1b0a7f0()*-0.00529848);
}

double NNfunction_sb_sLcR::synapse0x1b13c50() {
   return (neuron0x1b0ab30()*-0.070025);
}

double NNfunction_sb_sLcR::synapse0x1b13c90() {
   return (neuron0x1b0ae70()*2.00234);
}

double NNfunction_sb_sLcR::synapse0x1b13cd0() {
   return (neuron0x1b0b1b0()*-0.0228286);
}

double NNfunction_sb_sLcR::synapse0x1b13d10() {
   return (neuron0x1b0b4f0()*-0.00939387);
}

double NNfunction_sb_sLcR::synapse0x1b13d50() {
   return (neuron0x1b0b830()*-0.0203098);
}

double NNfunction_sb_sLcR::synapse0x1b13d90() {
   return (neuron0x1b0bb70()*-0.00337683);
}

double NNfunction_sb_sLcR::synapse0x1b13dd0() {
   return (neuron0x1b0beb0()*-0.0265194);
}

double NNfunction_sb_sLcR::synapse0x1b13e10() {
   return (neuron0x1b0c1f0()*0.0366244);
}

double NNfunction_sb_sLcR::synapse0x1b13e50() {
   return (neuron0x1b0c530()*-0.00191499);
}

double NNfunction_sb_sLcR::synapse0x1b13e90() {
   return (neuron0x1b0c870()*-0.00101557);
}

double NNfunction_sb_sLcR::synapse0x1b13ed0() {
   return (neuron0x1b0cbb0()*-0.165687);
}

double NNfunction_sb_sLcR::synapse0x1b13f10() {
   return (neuron0x1b0cef0()*0.0262456);
}

double NNfunction_sb_sLcR::synapse0x1b13f50() {
   return (neuron0x1b0d230()*0.0178242);
}

double NNfunction_sb_sLcR::synapse0x1b13f90() {
   return (neuron0x1b0d570()*-0.113152);
}

double NNfunction_sb_sLcR::synapse0x1b13a20() {
   return (neuron0x1b0d8b0()*0.012091);
}

double NNfunction_sb_sLcR::synapse0x1b13a60() {
   return (neuron0x1b0de10()*0.0313215);
}

double NNfunction_sb_sLcR::synapse0x1b140e0() {
   return (neuron0x1b0e030()*-0.0467691);
}

double NNfunction_sb_sLcR::synapse0x1b14120() {
   return (neuron0x1b0e370()*-0.023449);
}

double NNfunction_sb_sLcR::synapse0x1b14160() {
   return (neuron0x1b0e6b0()*-0.000146653);
}

double NNfunction_sb_sLcR::synapse0x1b141a0() {
   return (neuron0x1b0e9f0()*0.0382152);
}

double NNfunction_sb_sLcR::synapse0x1b141e0() {
   return (neuron0x1b0ed30()*0.0171499);
}

double NNfunction_sb_sLcR::synapse0x1b14220() {
   return (neuron0x1b0f070()*0.0091844);
}

double NNfunction_sb_sLcR::synapse0x1b0dd00() {
   return (neuron0x1b0a4b0()*0.449737);
}

double NNfunction_sb_sLcR::synapse0x1b0dd40() {
   return (neuron0x1b0a7f0()*0.228475);
}

double NNfunction_sb_sLcR::synapse0x1b0dd80() {
   return (neuron0x1b0ab30()*0.382173);
}

double NNfunction_sb_sLcR::synapse0x1b0ddc0() {
   return (neuron0x1b0ae70()*-0.193174);
}

double NNfunction_sb_sLcR::synapse0x1b147b0() {
   return (neuron0x1b0b1b0()*0.374318);
}

double NNfunction_sb_sLcR::synapse0x1b147f0() {
   return (neuron0x1b0b4f0()*0.185898);
}

double NNfunction_sb_sLcR::synapse0x1b14830() {
   return (neuron0x1b0b830()*-0.260321);
}

double NNfunction_sb_sLcR::synapse0x1b14870() {
   return (neuron0x1b0bb70()*-0.184164);
}

double NNfunction_sb_sLcR::synapse0x1b148b0() {
   return (neuron0x1b0beb0()*-0.202778);
}

double NNfunction_sb_sLcR::synapse0x1b148f0() {
   return (neuron0x1b0c1f0()*0.148476);
}

double NNfunction_sb_sLcR::synapse0x1b14930() {
   return (neuron0x1b0c530()*-0.0428448);
}

double NNfunction_sb_sLcR::synapse0x1b14970() {
   return (neuron0x1b0c870()*-0.0423946);
}

double NNfunction_sb_sLcR::synapse0x1b149b0() {
   return (neuron0x1b0cbb0()*-0.954488);
}

double NNfunction_sb_sLcR::synapse0x1b149f0() {
   return (neuron0x1b0cef0()*0.395764);
}

double NNfunction_sb_sLcR::synapse0x1b14a30() {
   return (neuron0x1b0d230()*0.343049);
}

double NNfunction_sb_sLcR::synapse0x1b14a70() {
   return (neuron0x1b0d570()*-0.599995);
}

double NNfunction_sb_sLcR::synapse0x1b143f0() {
   return (neuron0x1b0d8b0()*-0.258165);
}

double NNfunction_sb_sLcR::synapse0x1b14430() {
   return (neuron0x1b0de10()*-0.093265);
}

double NNfunction_sb_sLcR::synapse0x1b14bc0() {
   return (neuron0x1b0e030()*-0.216907);
}

double NNfunction_sb_sLcR::synapse0x1b14c00() {
   return (neuron0x1b0e370()*-0.461322);
}

double NNfunction_sb_sLcR::synapse0x1b14c40() {
   return (neuron0x1b0e6b0()*0.146142);
}

double NNfunction_sb_sLcR::synapse0x1b14c80() {
   return (neuron0x1b0e9f0()*0.0329819);
}

double NNfunction_sb_sLcR::synapse0x1b14cc0() {
   return (neuron0x1b0ed30()*0.141941);
}

double NNfunction_sb_sLcR::synapse0x1b14d00() {
   return (neuron0x1b0f070()*0.0583705);
}

double NNfunction_sb_sLcR::synapse0x1b15080() {
   return (neuron0x1b0a4b0()*0.0662974);
}

double NNfunction_sb_sLcR::synapse0x1b150c0() {
   return (neuron0x1b0a7f0()*0.0517647);
}

double NNfunction_sb_sLcR::synapse0x1b15100() {
   return (neuron0x1b0ab30()*0.124609);
}

double NNfunction_sb_sLcR::synapse0x1b15140() {
   return (neuron0x1b0ae70()*0.669853);
}

double NNfunction_sb_sLcR::synapse0x1b15180() {
   return (neuron0x1b0b1b0()*0.0167941);
}

double NNfunction_sb_sLcR::synapse0x1b151c0() {
   return (neuron0x1b0b4f0()*-0.566359);
}

double NNfunction_sb_sLcR::synapse0x1b15200() {
   return (neuron0x1b0b830()*0.132607);
}

double NNfunction_sb_sLcR::synapse0x1b15240() {
   return (neuron0x1b0bb70()*-0.14191);
}

double NNfunction_sb_sLcR::synapse0x1b15280() {
   return (neuron0x1b0beb0()*0.269653);
}

double NNfunction_sb_sLcR::synapse0x1b152c0() {
   return (neuron0x1b0c1f0()*0.00480648);
}

double NNfunction_sb_sLcR::synapse0x1b15300() {
   return (neuron0x1b0c530()*0.197215);
}

double NNfunction_sb_sLcR::synapse0x1b15340() {
   return (neuron0x1b0c870()*-0.0402116);
}

double NNfunction_sb_sLcR::synapse0x1b15380() {
   return (neuron0x1b0cbb0()*-0.596647);
}

double NNfunction_sb_sLcR::synapse0x1b153c0() {
   return (neuron0x1b0cef0()*-0.220792);
}

double NNfunction_sb_sLcR::synapse0x1b15400() {
   return (neuron0x1b0d230()*-0.110332);
}

double NNfunction_sb_sLcR::synapse0x1b15440() {
   return (neuron0x1b0d570()*0.0115261);
}

double NNfunction_sb_sLcR::synapse0x1b14ed0() {
   return (neuron0x1b0d8b0()*-0.0307472);
}

double NNfunction_sb_sLcR::synapse0x1b14f10() {
   return (neuron0x1b0de10()*0.0925319);
}

double NNfunction_sb_sLcR::synapse0x1b15590() {
   return (neuron0x1b0e030()*0.0655685);
}

double NNfunction_sb_sLcR::synapse0x1b155d0() {
   return (neuron0x1b0e370()*-0.00678303);
}

double NNfunction_sb_sLcR::synapse0x1b15610() {
   return (neuron0x1b0e6b0()*0.0858838);
}

double NNfunction_sb_sLcR::synapse0x1b15650() {
   return (neuron0x1b0e9f0()*-0.105844);
}

double NNfunction_sb_sLcR::synapse0x1b15690() {
   return (neuron0x1b0ed30()*0.0429299);
}

double NNfunction_sb_sLcR::synapse0x1b156d0() {
   return (neuron0x1b0f070()*0.0834369);
}

double NNfunction_sb_sLcR::synapse0x1b15a50() {
   return (neuron0x1b0a4b0()*0.0797152);
}

double NNfunction_sb_sLcR::synapse0x1b15a90() {
   return (neuron0x1b0a7f0()*0.496276);
}

double NNfunction_sb_sLcR::synapse0x1b15ad0() {
   return (neuron0x1b0ab30()*0.318524);
}

double NNfunction_sb_sLcR::synapse0x1b15b10() {
   return (neuron0x1b0ae70()*0.643323);
}

double NNfunction_sb_sLcR::synapse0x1b15b50() {
   return (neuron0x1b0b1b0()*-0.0131858);
}

double NNfunction_sb_sLcR::synapse0x1b15b90() {
   return (neuron0x1b0b4f0()*-0.114819);
}

double NNfunction_sb_sLcR::synapse0x1b15bd0() {
   return (neuron0x1b0b830()*-0.0437562);
}

double NNfunction_sb_sLcR::synapse0x1b15c10() {
   return (neuron0x1b0bb70()*-0.089822);
}

double NNfunction_sb_sLcR::synapse0x1b15c50() {
   return (neuron0x1b0beb0()*0.017333);
}

double NNfunction_sb_sLcR::synapse0x1b15c90() {
   return (neuron0x1b0c1f0()*0.0601937);
}

double NNfunction_sb_sLcR::synapse0x1b15cd0() {
   return (neuron0x1b0c530()*0.0604546);
}

double NNfunction_sb_sLcR::synapse0x1b15d10() {
   return (neuron0x1b0c870()*-0.063196);
}

double NNfunction_sb_sLcR::synapse0x1b15d50() {
   return (neuron0x1b0cbb0()*-0.172786);
}

double NNfunction_sb_sLcR::synapse0x1b15d90() {
   return (neuron0x1b0cef0()*-0.0275763);
}

double NNfunction_sb_sLcR::synapse0x1b15dd0() {
   return (neuron0x1b0d230()*0.0147989);
}

double NNfunction_sb_sLcR::synapse0x1b15e10() {
   return (neuron0x1b0d570()*-0.16788);
}

double NNfunction_sb_sLcR::synapse0x1b158a0() {
   return (neuron0x1b0d8b0()*-0.0955507);
}

double NNfunction_sb_sLcR::synapse0x1b158e0() {
   return (neuron0x1b0de10()*-0.0111243);
}

double NNfunction_sb_sLcR::synapse0x1b12670() {
   return (neuron0x1b0e030()*-0.120439);
}

double NNfunction_sb_sLcR::synapse0x1b126b0() {
   return (neuron0x1b0e370()*-0.0327942);
}

double NNfunction_sb_sLcR::synapse0x1b126f0() {
   return (neuron0x1b0e6b0()*0.0209739);
}

double NNfunction_sb_sLcR::synapse0x1b12730() {
   return (neuron0x1b0e9f0()*0.0402241);
}

double NNfunction_sb_sLcR::synapse0x1b12770() {
   return (neuron0x1b0ed30()*-0.0206008);
}

double NNfunction_sb_sLcR::synapse0x1b127b0() {
   return (neuron0x1b0f070()*0.061947);
}

double NNfunction_sb_sLcR::synapse0x1b12b30() {
   return (neuron0x1b0a4b0()*-0.0514559);
}

double NNfunction_sb_sLcR::synapse0x1b12b70() {
   return (neuron0x1b0a7f0()*-0.219033);
}

double NNfunction_sb_sLcR::synapse0x1b12bb0() {
   return (neuron0x1b0ab30()*-0.046147);
}

double NNfunction_sb_sLcR::synapse0x1b12bf0() {
   return (neuron0x1b0ae70()*-5.02664);
}

double NNfunction_sb_sLcR::synapse0x1b12c30() {
   return (neuron0x1b0b1b0()*-0.199261);
}

double NNfunction_sb_sLcR::synapse0x1b12c70() {
   return (neuron0x1b0b4f0()*-0.131781);
}

double NNfunction_sb_sLcR::synapse0x1b12cb0() {
   return (neuron0x1b0b830()*-0.00980553);
}

double NNfunction_sb_sLcR::synapse0x1b12cf0() {
   return (neuron0x1b0bb70()*0.10598);
}

double NNfunction_sb_sLcR::synapse0x1b12d30() {
   return (neuron0x1b0beb0()*0.012127);
}

double NNfunction_sb_sLcR::synapse0x1b12d70() {
   return (neuron0x1b0c1f0()*-0.110074);
}

double NNfunction_sb_sLcR::synapse0x1b12db0() {
   return (neuron0x1b0c530()*0.0205867);
}

double NNfunction_sb_sLcR::synapse0x1b12df0() {
   return (neuron0x1b0c870()*-0.00444781);
}

double NNfunction_sb_sLcR::synapse0x1b12e30() {
   return (neuron0x1b0cbb0()*-0.0756898);
}

double NNfunction_sb_sLcR::synapse0x1b16f70() {
   return (neuron0x1b0cef0()*-0.0615144);
}

double NNfunction_sb_sLcR::synapse0x1b16fb0() {
   return (neuron0x1b0d230()*-0.105369);
}

double NNfunction_sb_sLcR::synapse0x1b16ff0() {
   return (neuron0x1b0d570()*-0.00702822);
}

double NNfunction_sb_sLcR::synapse0x1b12980() {
   return (neuron0x1b0d8b0()*-0.0195418);
}

double NNfunction_sb_sLcR::synapse0x1b129c0() {
   return (neuron0x1b0de10()*-0.128412);
}

double NNfunction_sb_sLcR::synapse0x1b17140() {
   return (neuron0x1b0e030()*0.00645124);
}

double NNfunction_sb_sLcR::synapse0x1b17180() {
   return (neuron0x1b0e370()*0.0576264);
}

double NNfunction_sb_sLcR::synapse0x1b171c0() {
   return (neuron0x1b0e6b0()*-0.0122696);
}

double NNfunction_sb_sLcR::synapse0x1b17200() {
   return (neuron0x1b0e9f0()*0.0355648);
}

double NNfunction_sb_sLcR::synapse0x1b17240() {
   return (neuron0x1b0ed30()*-0.0600562);
}

double NNfunction_sb_sLcR::synapse0x1b17280() {
   return (neuron0x1b0f070()*-0.104272);
}

double NNfunction_sb_sLcR::synapse0x1b17600() {
   return (neuron0x1b0a4b0()*0.0316034);
}

double NNfunction_sb_sLcR::synapse0x1b17640() {
   return (neuron0x1b0a7f0()*0.0165174);
}

double NNfunction_sb_sLcR::synapse0x1b17680() {
   return (neuron0x1b0ab30()*0.0316863);
}

double NNfunction_sb_sLcR::synapse0x1b176c0() {
   return (neuron0x1b0ae70()*-10.6057);
}

double NNfunction_sb_sLcR::synapse0x1b17700() {
   return (neuron0x1b0b1b0()*-0.0188982);
}

double NNfunction_sb_sLcR::synapse0x1b17740() {
   return (neuron0x1b0b4f0()*-0.00191843);
}

double NNfunction_sb_sLcR::synapse0x1b17780() {
   return (neuron0x1b0b830()*0.028277);
}

double NNfunction_sb_sLcR::synapse0x1b177c0() {
   return (neuron0x1b0bb70()*0.0296785);
}

double NNfunction_sb_sLcR::synapse0x1b17800() {
   return (neuron0x1b0beb0()*0.0116889);
}

double NNfunction_sb_sLcR::synapse0x1b17840() {
   return (neuron0x1b0c1f0()*-0.0239216);
}

double NNfunction_sb_sLcR::synapse0x1b17880() {
   return (neuron0x1b0c530()*-0.00298395);
}

double NNfunction_sb_sLcR::synapse0x1b178c0() {
   return (neuron0x1b0c870()*-0.0049119);
}

double NNfunction_sb_sLcR::synapse0x1b17900() {
   return (neuron0x1b0cbb0()*0.215119);
}

double NNfunction_sb_sLcR::synapse0x1b17940() {
   return (neuron0x1b0cef0()*0.00292396);
}

double NNfunction_sb_sLcR::synapse0x1b17980() {
   return (neuron0x1b0d230()*-0.00773659);
}

double NNfunction_sb_sLcR::synapse0x1b179c0() {
   return (neuron0x1b0d570()*0.372571);
}

double NNfunction_sb_sLcR::synapse0x1b17450() {
   return (neuron0x1b0d8b0()*0.0245585);
}

double NNfunction_sb_sLcR::synapse0x1b17490() {
   return (neuron0x1b0de10()*-0.0444008);
}

double NNfunction_sb_sLcR::synapse0x1b17b10() {
   return (neuron0x1b0e030()*-0.0245471);
}

double NNfunction_sb_sLcR::synapse0x1b17b50() {
   return (neuron0x1b0e370()*-0.0123385);
}

double NNfunction_sb_sLcR::synapse0x1b17b90() {
   return (neuron0x1b0e6b0()*-0.00728272);
}

double NNfunction_sb_sLcR::synapse0x1b17bd0() {
   return (neuron0x1b0e9f0()*-0.0369114);
}

double NNfunction_sb_sLcR::synapse0x1b17c10() {
   return (neuron0x1b0ed30()*-0.0266019);
}

double NNfunction_sb_sLcR::synapse0x1b17c50() {
   return (neuron0x1b0f070()*-0.0665553);
}

double NNfunction_sb_sLcR::synapse0x1b17fd0() {
   return (neuron0x1b0a4b0()*-0.156025);
}

double NNfunction_sb_sLcR::synapse0x1b18010() {
   return (neuron0x1b0a7f0()*0.00952697);
}

double NNfunction_sb_sLcR::synapse0x1b18050() {
   return (neuron0x1b0ab30()*0.115853);
}

double NNfunction_sb_sLcR::synapse0x1b18090() {
   return (neuron0x1b0ae70()*-0.00374236);
}

double NNfunction_sb_sLcR::synapse0x1b180d0() {
   return (neuron0x1b0b1b0()*-0.065532);
}

double NNfunction_sb_sLcR::synapse0x1b18110() {
   return (neuron0x1b0b4f0()*-0.149408);
}

double NNfunction_sb_sLcR::synapse0x1b18150() {
   return (neuron0x1b0b830()*-0.551771);
}

double NNfunction_sb_sLcR::synapse0x1b18190() {
   return (neuron0x1b0bb70()*0.361157);
}

double NNfunction_sb_sLcR::synapse0x1b181d0() {
   return (neuron0x1b0beb0()*-0.0433792);
}

double NNfunction_sb_sLcR::synapse0x1b18210() {
   return (neuron0x1b0c1f0()*-1.07022);
}

double NNfunction_sb_sLcR::synapse0x1b18250() {
   return (neuron0x1b0c530()*-0.475015);
}

double NNfunction_sb_sLcR::synapse0x1b18290() {
   return (neuron0x1b0c870()*-0.118002);
}

double NNfunction_sb_sLcR::synapse0x1b182d0() {
   return (neuron0x1b0cbb0()*-0.645904);
}

double NNfunction_sb_sLcR::synapse0x1b18310() {
   return (neuron0x1b0cef0()*0.0544578);
}

double NNfunction_sb_sLcR::synapse0x1b18350() {
   return (neuron0x1b0d230()*-0.150824);
}

double NNfunction_sb_sLcR::synapse0x1b18390() {
   return (neuron0x1b0d570()*0.443484);
}

double NNfunction_sb_sLcR::synapse0x1b17e20() {
   return (neuron0x1b0d8b0()*0.0772477);
}

double NNfunction_sb_sLcR::synapse0x1b17e60() {
   return (neuron0x1b0de10()*0.200468);
}

double NNfunction_sb_sLcR::synapse0x1b184e0() {
   return (neuron0x1b0e030()*0.027389);
}

double NNfunction_sb_sLcR::synapse0x1b18520() {
   return (neuron0x1b0e370()*0.225631);
}

double NNfunction_sb_sLcR::synapse0x1b18560() {
   return (neuron0x1b0e6b0()*0.164588);
}

double NNfunction_sb_sLcR::synapse0x1b185a0() {
   return (neuron0x1b0e9f0()*-0.271947);
}

double NNfunction_sb_sLcR::synapse0x1b185e0() {
   return (neuron0x1b0ed30()*-0.149988);
}

double NNfunction_sb_sLcR::synapse0x1b18620() {
   return (neuron0x1b0f070()*-0.214004);
}

double NNfunction_sb_sLcR::synapse0x1b189a0() {
   return (neuron0x1b0a4b0()*-0.241044);
}

double NNfunction_sb_sLcR::synapse0x1b189e0() {
   return (neuron0x1b0a7f0()*0.220503);
}

double NNfunction_sb_sLcR::synapse0x1b18a20() {
   return (neuron0x1b0ab30()*-0.0132976);
}

double NNfunction_sb_sLcR::synapse0x1b18a60() {
   return (neuron0x1b0ae70()*-0.0470596);
}

double NNfunction_sb_sLcR::synapse0x1b18aa0() {
   return (neuron0x1b0b1b0()*-0.00492027);
}

double NNfunction_sb_sLcR::synapse0x1b18ae0() {
   return (neuron0x1b0b4f0()*-0.0968666);
}

double NNfunction_sb_sLcR::synapse0x1b18b20() {
   return (neuron0x1b0b830()*0.0993908);
}

double NNfunction_sb_sLcR::synapse0x1b18b60() {
   return (neuron0x1b0bb70()*-0.0654829);
}

double NNfunction_sb_sLcR::synapse0x1b18ba0() {
   return (neuron0x1b0beb0()*-0.132037);
}

double NNfunction_sb_sLcR::synapse0x1b18be0() {
   return (neuron0x1b0c1f0()*0.18471);
}

double NNfunction_sb_sLcR::synapse0x1b18c20() {
   return (neuron0x1b0c530()*0.0450681);
}

double NNfunction_sb_sLcR::synapse0x1b18c60() {
   return (neuron0x1b0c870()*-0.36723);
}

double NNfunction_sb_sLcR::synapse0x1b18ca0() {
   return (neuron0x1b0cbb0()*0.0960292);
}

double NNfunction_sb_sLcR::synapse0x1b18ce0() {
   return (neuron0x1b0cef0()*0.73799);
}

double NNfunction_sb_sLcR::synapse0x1b18d20() {
   return (neuron0x1b0d230()*-0.222576);
}

double NNfunction_sb_sLcR::synapse0x1b18d60() {
   return (neuron0x1b0d570()*-0.225657);
}

double NNfunction_sb_sLcR::synapse0x1b187f0() {
   return (neuron0x1b0d8b0()*0.623789);
}

double NNfunction_sb_sLcR::synapse0x1b18830() {
   return (neuron0x1b0de10()*-0.161044);
}

double NNfunction_sb_sLcR::synapse0x1b18eb0() {
   return (neuron0x1b0e030()*-0.0521222);
}

double NNfunction_sb_sLcR::synapse0x1b18ef0() {
   return (neuron0x1b0e370()*0.0700072);
}

double NNfunction_sb_sLcR::synapse0x1b18f30() {
   return (neuron0x1b0e6b0()*0.0265299);
}

double NNfunction_sb_sLcR::synapse0x1b18f70() {
   return (neuron0x1b0e9f0()*0.0310806);
}

double NNfunction_sb_sLcR::synapse0x1b18fb0() {
   return (neuron0x1b0ed30()*0.0674306);
}

double NNfunction_sb_sLcR::synapse0x1b18ff0() {
   return (neuron0x1b0f070()*-0.136949);
}

double NNfunction_sb_sLcR::synapse0x1b19370() {
   return (neuron0x1b0a4b0()*-0.231854);
}

double NNfunction_sb_sLcR::synapse0x1b0a6d0() {
   return (neuron0x1b0a7f0()*-0.306378);
}

double NNfunction_sb_sLcR::synapse0x1b0a710() {
   return (neuron0x1b0ab30()*0.654613);
}

double NNfunction_sb_sLcR::synapse0x1b0aa10() {
   return (neuron0x1b0ae70()*0.19067);
}

double NNfunction_sb_sLcR::synapse0x1b0aa50() {
   return (neuron0x1b0b1b0()*-0.0344655);
}

double NNfunction_sb_sLcR::synapse0x1b0ad50() {
   return (neuron0x1b0b4f0()*-0.125114);
}

double NNfunction_sb_sLcR::synapse0x1b0ad90() {
   return (neuron0x1b0b830()*0.0602915);
}

double NNfunction_sb_sLcR::synapse0x1b0b090() {
   return (neuron0x1b0bb70()*0.0101437);
}

double NNfunction_sb_sLcR::synapse0x1b0b0d0() {
   return (neuron0x1b0beb0()*-0.0152216);
}

double NNfunction_sb_sLcR::synapse0x1b0b3d0() {
   return (neuron0x1b0c1f0()*-0.0679822);
}

double NNfunction_sb_sLcR::synapse0x1b0b410() {
   return (neuron0x1b0c530()*0.856017);
}

double NNfunction_sb_sLcR::synapse0x1b0b710() {
   return (neuron0x1b0c870()*-0.234802);
}

double NNfunction_sb_sLcR::synapse0x1b0b750() {
   return (neuron0x1b0cbb0()*0.0898165);
}

double NNfunction_sb_sLcR::synapse0x1b0ba50() {
   return (neuron0x1b0cef0()*0.0156822);
}

double NNfunction_sb_sLcR::synapse0x1b0ba90() {
   return (neuron0x1b0d230()*-0.122795);
}

double NNfunction_sb_sLcR::synapse0x1b0bd90() {
   return (neuron0x1b0d570()*0.0421736);
}

double NNfunction_sb_sLcR::synapse0x1b0bdd0() {
   return (neuron0x1b0d8b0()*0.201953);
}

double NNfunction_sb_sLcR::synapse0x1b0c0d0() {
   return (neuron0x1b0de10()*0.735045);
}

double NNfunction_sb_sLcR::synapse0x1b0c110() {
   return (neuron0x1b0e030()*-0.0379577);
}

double NNfunction_sb_sLcR::synapse0x1b0c410() {
   return (neuron0x1b0e370()*0.444069);
}

double NNfunction_sb_sLcR::synapse0x1b0c450() {
   return (neuron0x1b0e6b0()*0.107465);
}

double NNfunction_sb_sLcR::synapse0x1b0c750() {
   return (neuron0x1b0e9f0()*0.0105122);
}

double NNfunction_sb_sLcR::synapse0x1b0c790() {
   return (neuron0x1b0ed30()*-0.160058);
}

double NNfunction_sb_sLcR::synapse0x1b0ca90() {
   return (neuron0x1b0f070()*0.0557856);
}

double NNfunction_sb_sLcR::synapse0x1b0cad0() {
   return (neuron0x1b0a4b0()*1.09149);
}

double NNfunction_sb_sLcR::synapse0x1b0d790() {
   return (neuron0x1b0a7f0()*0.523687);
}

double NNfunction_sb_sLcR::synapse0x1b0d7d0() {
   return (neuron0x1b0ab30()*-0.014891);
}

double NNfunction_sb_sLcR::synapse0x1b191c0() {
   return (neuron0x1b0ae70()*0.0280004);
}

double NNfunction_sb_sLcR::synapse0x1b19200() {
   return (neuron0x1b0b1b0()*-0.135272);
}

double NNfunction_sb_sLcR::synapse0x1b0dad0() {
   return (neuron0x1b0b4f0()*0.269843);
}

double NNfunction_sb_sLcR::synapse0x1b0db10() {
   return (neuron0x1b0b830()*-0.0498579);
}

double NNfunction_sb_sLcR::synapse0x18bbaa0() {
   return (neuron0x1b0bb70()*0.163551);
}

double NNfunction_sb_sLcR::synapse0x18bbae0() {
   return (neuron0x1b0beb0()*-0.146923);
}

double NNfunction_sb_sLcR::synapse0x1b0e250() {
   return (neuron0x1b0c1f0()*-0.446418);
}

double NNfunction_sb_sLcR::synapse0x1b0e290() {
   return (neuron0x1b0c530()*0.0382183);
}

double NNfunction_sb_sLcR::synapse0x1b0e590() {
   return (neuron0x1b0c870()*-0.713707);
}

double NNfunction_sb_sLcR::synapse0x1b0e5d0() {
   return (neuron0x1b0cbb0()*-0.536298);
}

double NNfunction_sb_sLcR::synapse0x1b0e8d0() {
   return (neuron0x1b0cef0()*-0.237303);
}

double NNfunction_sb_sLcR::synapse0x1b0e910() {
   return (neuron0x1b0d230()*-0.521341);
}

double NNfunction_sb_sLcR::synapse0x1b0ec10() {
   return (neuron0x1b0d570()*0.467458);
}

double NNfunction_sb_sLcR::synapse0x1b0ec50() {
   return (neuron0x1b0d8b0()*0.100523);
}

double NNfunction_sb_sLcR::synapse0x1b0ef50() {
   return (neuron0x1b0de10()*0.0742855);
}

double NNfunction_sb_sLcR::synapse0x1b0ef90() {
   return (neuron0x1b0e030()*0.0867072);
}

double NNfunction_sb_sLcR::synapse0x1b0f290() {
   return (neuron0x1b0e370()*-0.357811);
}

double NNfunction_sb_sLcR::synapse0x1b0f2d0() {
   return (neuron0x1b0e6b0()*0.33392);
}

double NNfunction_sb_sLcR::synapse0x1b0cdd0() {
   return (neuron0x1b0e9f0()*0.706702);
}

double NNfunction_sb_sLcR::synapse0x1b0ce10() {
   return (neuron0x1b0ed30()*-0.0295456);
}

double NNfunction_sb_sLcR::synapse0x1b1b0e0() {
   return (neuron0x1b0f070()*0.341821);
}

double NNfunction_sb_sLcR::synapse0x1b1b460() {
   return (neuron0x1b0a4b0()*0.103385);
}

double NNfunction_sb_sLcR::synapse0x1b1b4a0() {
   return (neuron0x1b0a7f0()*-0.0343056);
}

double NNfunction_sb_sLcR::synapse0x1b1b4e0() {
   return (neuron0x1b0ab30()*0.210748);
}

double NNfunction_sb_sLcR::synapse0x1b1b520() {
   return (neuron0x1b0ae70()*-0.53366);
}

double NNfunction_sb_sLcR::synapse0x1b1b560() {
   return (neuron0x1b0b1b0()*-0.341277);
}

double NNfunction_sb_sLcR::synapse0x1b1b5a0() {
   return (neuron0x1b0b4f0()*-0.278618);
}

double NNfunction_sb_sLcR::synapse0x1b1b5e0() {
   return (neuron0x1b0b830()*-0.0109001);
}

double NNfunction_sb_sLcR::synapse0x1b1b620() {
   return (neuron0x1b0bb70()*0.144814);
}

double NNfunction_sb_sLcR::synapse0x1b1b660() {
   return (neuron0x1b0beb0()*-0.100363);
}

double NNfunction_sb_sLcR::synapse0x1b1b6a0() {
   return (neuron0x1b0c1f0()*-0.0204321);
}

double NNfunction_sb_sLcR::synapse0x1b1b6e0() {
   return (neuron0x1b0c530()*-0.171179);
}

double NNfunction_sb_sLcR::synapse0x1b1b720() {
   return (neuron0x1b0c870()*-0.206708);
}

double NNfunction_sb_sLcR::synapse0x1b1b760() {
   return (neuron0x1b0cbb0()*-0.0889179);
}

double NNfunction_sb_sLcR::synapse0x1b1b7a0() {
   return (neuron0x1b0cef0()*-0.00516131);
}

double NNfunction_sb_sLcR::synapse0x1b1b7e0() {
   return (neuron0x1b0d230()*0.156425);
}

double NNfunction_sb_sLcR::synapse0x1b1b820() {
   return (neuron0x1b0d570()*-0.137048);
}

double NNfunction_sb_sLcR::synapse0x1b1b2b0() {
   return (neuron0x1b0d8b0()*-0.138297);
}

double NNfunction_sb_sLcR::synapse0x1b1b2f0() {
   return (neuron0x1b0de10()*-0.0753927);
}

double NNfunction_sb_sLcR::synapse0x1b1b970() {
   return (neuron0x1b0e030()*-0.171477);
}

double NNfunction_sb_sLcR::synapse0x1b1b9b0() {
   return (neuron0x1b0e370()*-0.0697036);
}

double NNfunction_sb_sLcR::synapse0x1b1b9f0() {
   return (neuron0x1b0e6b0()*-0.110096);
}

double NNfunction_sb_sLcR::synapse0x1b1ba30() {
   return (neuron0x1b0e9f0()*0.0939729);
}

double NNfunction_sb_sLcR::synapse0x1b1ba70() {
   return (neuron0x1b0ed30()*0.0314698);
}

double NNfunction_sb_sLcR::synapse0x1b1bab0() {
   return (neuron0x1b0f070()*-0.0106296);
}

double NNfunction_sb_sLcR::synapse0x1b1be30() {
   return (neuron0x1b0a4b0()*0.055766);
}

double NNfunction_sb_sLcR::synapse0x1b1be70() {
   return (neuron0x1b0a7f0()*0.0432694);
}

double NNfunction_sb_sLcR::synapse0x1b1beb0() {
   return (neuron0x1b0ab30()*-0.0475947);
}

double NNfunction_sb_sLcR::synapse0x1b1bef0() {
   return (neuron0x1b0ae70()*1.65763);
}

double NNfunction_sb_sLcR::synapse0x1b1bf30() {
   return (neuron0x1b0b1b0()*0.0083704);
}

double NNfunction_sb_sLcR::synapse0x1b1bf70() {
   return (neuron0x1b0b4f0()*-0.00949607);
}

double NNfunction_sb_sLcR::synapse0x1b1bfb0() {
   return (neuron0x1b0b830()*0.00766913);
}

double NNfunction_sb_sLcR::synapse0x1b1bff0() {
   return (neuron0x1b0bb70()*-0.0150694);
}

double NNfunction_sb_sLcR::synapse0x1b1c030() {
   return (neuron0x1b0beb0()*0.000391056);
}

double NNfunction_sb_sLcR::synapse0x1b1c070() {
   return (neuron0x1b0c1f0()*0.0133358);
}

double NNfunction_sb_sLcR::synapse0x1b1c0b0() {
   return (neuron0x1b0c530()*0.0365467);
}

double NNfunction_sb_sLcR::synapse0x1b1c0f0() {
   return (neuron0x1b0c870()*-0.0241369);
}

double NNfunction_sb_sLcR::synapse0x1b1c130() {
   return (neuron0x1b0cbb0()*-0.246348);
}

double NNfunction_sb_sLcR::synapse0x1b1c170() {
   return (neuron0x1b0cef0()*0.0267991);
}

double NNfunction_sb_sLcR::synapse0x1b1c1b0() {
   return (neuron0x1b0d230()*-0.00948276);
}

double NNfunction_sb_sLcR::synapse0x1b1c1f0() {
   return (neuron0x1b0d570()*1.7254);
}

double NNfunction_sb_sLcR::synapse0x1b1bc80() {
   return (neuron0x1b0d8b0()*0.0468706);
}

double NNfunction_sb_sLcR::synapse0x1b1bcc0() {
   return (neuron0x1b0de10()*0.068511);
}

double NNfunction_sb_sLcR::synapse0x1b1c340() {
   return (neuron0x1b0e030()*0.0375673);
}

double NNfunction_sb_sLcR::synapse0x1b1c380() {
   return (neuron0x1b0e370()*-0.0130446);
}

double NNfunction_sb_sLcR::synapse0x1b1c3c0() {
   return (neuron0x1b0e6b0()*-0.0432901);
}

double NNfunction_sb_sLcR::synapse0x1b1c400() {
   return (neuron0x1b0e9f0()*0.00983189);
}

double NNfunction_sb_sLcR::synapse0x1b1c440() {
   return (neuron0x1b0ed30()*-0.00487805);
}

double NNfunction_sb_sLcR::synapse0x1b1c480() {
   return (neuron0x1b0f070()*0.0232376);
}

double NNfunction_sb_sLcR::synapse0x1b1c800() {
   return (neuron0x1b0a4b0()*0.0459132);
}

double NNfunction_sb_sLcR::synapse0x1b1c840() {
   return (neuron0x1b0a7f0()*0.031389);
}

double NNfunction_sb_sLcR::synapse0x1b1c880() {
   return (neuron0x1b0ab30()*-0.0626416);
}

double NNfunction_sb_sLcR::synapse0x1b1c8c0() {
   return (neuron0x1b0ae70()*0.000668974);
}

double NNfunction_sb_sLcR::synapse0x1b1c900() {
   return (neuron0x1b0b1b0()*-0.0123876);
}

double NNfunction_sb_sLcR::synapse0x1b1c940() {
   return (neuron0x1b0b4f0()*-0.028343);
}

double NNfunction_sb_sLcR::synapse0x1b1c980() {
   return (neuron0x1b0b830()*0.0191448);
}

double NNfunction_sb_sLcR::synapse0x1b1c9c0() {
   return (neuron0x1b0bb70()*-0.039588);
}

double NNfunction_sb_sLcR::synapse0x1b1ca00() {
   return (neuron0x1b0beb0()*-0.0172029);
}

double NNfunction_sb_sLcR::synapse0x1b1ca40() {
   return (neuron0x1b0c1f0()*0.0307939);
}

double NNfunction_sb_sLcR::synapse0x1b1ca80() {
   return (neuron0x1b0c530()*-0.00893325);
}

double NNfunction_sb_sLcR::synapse0x1b1cac0() {
   return (neuron0x1b0c870()*-0.0366321);
}

double NNfunction_sb_sLcR::synapse0x1b1cb00() {
   return (neuron0x1b0cbb0()*1.87998);
}

double NNfunction_sb_sLcR::synapse0x1b1cb40() {
   return (neuron0x1b0cef0()*0.0291286);
}

double NNfunction_sb_sLcR::synapse0x1b1cb80() {
   return (neuron0x1b0d230()*0.0289877);
}

double NNfunction_sb_sLcR::synapse0x1b1cbc0() {
   return (neuron0x1b0d570()*-0.000794235);
}

double NNfunction_sb_sLcR::synapse0x1b1c650() {
   return (neuron0x1b0d8b0()*0.0190622);
}

double NNfunction_sb_sLcR::synapse0x1b1c690() {
   return (neuron0x1b0de10()*0.0316199);
}

double NNfunction_sb_sLcR::synapse0x1b1cd10() {
   return (neuron0x1b0e030()*0.063075);
}

double NNfunction_sb_sLcR::synapse0x1b1cd50() {
   return (neuron0x1b0e370()*0.0100446);
}

double NNfunction_sb_sLcR::synapse0x1b1cd90() {
   return (neuron0x1b0e6b0()*-0.0269696);
}

double NNfunction_sb_sLcR::synapse0x1b1cdd0() {
   return (neuron0x1b0e9f0()*-0.00932374);
}

double NNfunction_sb_sLcR::synapse0x1b1ce10() {
   return (neuron0x1b0ed30()*0.00432529);
}

double NNfunction_sb_sLcR::synapse0x1b1ce50() {
   return (neuron0x1b0f070()*-0.00352615);
}

double NNfunction_sb_sLcR::synapse0x1b1d1d0() {
   return (neuron0x1b0a4b0()*0.022203);
}

double NNfunction_sb_sLcR::synapse0x1b1d210() {
   return (neuron0x1b0a7f0()*0.0164087);
}

double NNfunction_sb_sLcR::synapse0x1b1d250() {
   return (neuron0x1b0ab30()*0.0033494);
}

double NNfunction_sb_sLcR::synapse0x1b1d290() {
   return (neuron0x1b0ae70()*0.0257285);
}

double NNfunction_sb_sLcR::synapse0x1b1d2d0() {
   return (neuron0x1b0b1b0()*-0.0556117);
}

double NNfunction_sb_sLcR::synapse0x1b1d310() {
   return (neuron0x1b0b4f0()*-0.0280927);
}

double NNfunction_sb_sLcR::synapse0x1b1d350() {
   return (neuron0x1b0b830()*0.0928313);
}

double NNfunction_sb_sLcR::synapse0x1b1d390() {
   return (neuron0x1b0bb70()*-0.0881219);
}

double NNfunction_sb_sLcR::synapse0x1b1d3d0() {
   return (neuron0x1b0beb0()*0.00188018);
}

double NNfunction_sb_sLcR::synapse0x1b1d410() {
   return (neuron0x1b0c1f0()*0.00650642);
}

double NNfunction_sb_sLcR::synapse0x1b1d450() {
   return (neuron0x1b0c530()*-0.038703);
}

double NNfunction_sb_sLcR::synapse0x1b1d490() {
   return (neuron0x1b0c870()*0.00676865);
}

double NNfunction_sb_sLcR::synapse0x1b1d4d0() {
   return (neuron0x1b0cbb0()*-0.167168);
}

double NNfunction_sb_sLcR::synapse0x1b1d510() {
   return (neuron0x1b0cef0()*-0.0241175);
}

double NNfunction_sb_sLcR::synapse0x1b1d550() {
   return (neuron0x1b0d230()*0.0572455);
}

double NNfunction_sb_sLcR::synapse0x1b1d590() {
   return (neuron0x1b0d570()*2.43098);
}

double NNfunction_sb_sLcR::synapse0x1b1d020() {
   return (neuron0x1b0d8b0()*-0.0192939);
}

double NNfunction_sb_sLcR::synapse0x1b1d060() {
   return (neuron0x1b0de10()*0.0673246);
}

double NNfunction_sb_sLcR::synapse0x1b1d6e0() {
   return (neuron0x1b0e030()*0.0053279);
}

double NNfunction_sb_sLcR::synapse0x1b1d720() {
   return (neuron0x1b0e370()*0.0121574);
}

double NNfunction_sb_sLcR::synapse0x1b1d760() {
   return (neuron0x1b0e6b0()*0.0185842);
}

double NNfunction_sb_sLcR::synapse0x1b1d7a0() {
   return (neuron0x1b0e9f0()*-0.019606);
}

double NNfunction_sb_sLcR::synapse0x1b1d7e0() {
   return (neuron0x1b0ed30()*-0.0536089);
}

double NNfunction_sb_sLcR::synapse0x1b1d820() {
   return (neuron0x1b0f070()*-0.073564);
}

double NNfunction_sb_sLcR::synapse0x1b1dba0() {
   return (neuron0x1b0a4b0()*-0.451474);
}

double NNfunction_sb_sLcR::synapse0x1b1dbe0() {
   return (neuron0x1b0a7f0()*-0.240495);
}

double NNfunction_sb_sLcR::synapse0x1b1dc20() {
   return (neuron0x1b0ab30()*1.16588);
}

double NNfunction_sb_sLcR::synapse0x1b1dc60() {
   return (neuron0x1b0ae70()*0.22215);
}

double NNfunction_sb_sLcR::synapse0x1b1dca0() {
   return (neuron0x1b0b1b0()*-0.400013);
}

double NNfunction_sb_sLcR::synapse0x1b1dce0() {
   return (neuron0x1b0b4f0()*-0.159064);
}

double NNfunction_sb_sLcR::synapse0x1b1dd20() {
   return (neuron0x1b0b830()*0.0860901);
}

double NNfunction_sb_sLcR::synapse0x1b1dd60() {
   return (neuron0x1b0bb70()*-0.230449);
}

double NNfunction_sb_sLcR::synapse0x1b1dda0() {
   return (neuron0x1b0beb0()*0.595715);
}

double NNfunction_sb_sLcR::synapse0x1b15f60() {
   return (neuron0x1b0c1f0()*0.17921);
}

double NNfunction_sb_sLcR::synapse0x1b15fa0() {
   return (neuron0x1b0c530()*-0.293333);
}

double NNfunction_sb_sLcR::synapse0x1b15fe0() {
   return (neuron0x1b0c870()*-0.633629);
}

double NNfunction_sb_sLcR::synapse0x1b16020() {
   return (neuron0x1b0cbb0()*-0.0338645);
}

double NNfunction_sb_sLcR::synapse0x1b16060() {
   return (neuron0x1b0cef0()*-0.1843);
}

double NNfunction_sb_sLcR::synapse0x1b160a0() {
   return (neuron0x1b0d230()*0.203255);
}

double NNfunction_sb_sLcR::synapse0x1b160e0() {
   return (neuron0x1b0d570()*0.0879598);
}

double NNfunction_sb_sLcR::synapse0x1b1d9f0() {
   return (neuron0x1b0d8b0()*0.2676);
}

double NNfunction_sb_sLcR::synapse0x1b1da30() {
   return (neuron0x1b0de10()*-0.408845);
}

double NNfunction_sb_sLcR::synapse0x1b16230() {
   return (neuron0x1b0e030()*-0.276693);
}

double NNfunction_sb_sLcR::synapse0x1b16270() {
   return (neuron0x1b0e370()*0.408909);
}

double NNfunction_sb_sLcR::synapse0x1b162b0() {
   return (neuron0x1b0e6b0()*-0.238291);
}

double NNfunction_sb_sLcR::synapse0x1b162f0() {
   return (neuron0x1b0e9f0()*-0.181004);
}

double NNfunction_sb_sLcR::synapse0x1b16330() {
   return (neuron0x1b0ed30()*-0.481905);
}

double NNfunction_sb_sLcR::synapse0x1b16370() {
   return (neuron0x1b0f070()*-0.0085868);
}

double NNfunction_sb_sLcR::synapse0x1b166f0() {
   return (neuron0x1b0a4b0()*-0.273459);
}

double NNfunction_sb_sLcR::synapse0x1b16730() {
   return (neuron0x1b0a7f0()*0.0886147);
}

double NNfunction_sb_sLcR::synapse0x1b16770() {
   return (neuron0x1b0ab30()*0.234589);
}

double NNfunction_sb_sLcR::synapse0x1b167b0() {
   return (neuron0x1b0ae70()*0.971328);
}

double NNfunction_sb_sLcR::synapse0x1b167f0() {
   return (neuron0x1b0b1b0()*0.00255506);
}

double NNfunction_sb_sLcR::synapse0x1b16830() {
   return (neuron0x1b0b4f0()*0.105693);
}

double NNfunction_sb_sLcR::synapse0x1b16870() {
   return (neuron0x1b0b830()*0.253786);
}

double NNfunction_sb_sLcR::synapse0x1b168b0() {
   return (neuron0x1b0bb70()*-0.196137);
}

double NNfunction_sb_sLcR::synapse0x1b168f0() {
   return (neuron0x1b0beb0()*-0.041006);
}

double NNfunction_sb_sLcR::synapse0x1b16930() {
   return (neuron0x1b0c1f0()*0.149111);
}

double NNfunction_sb_sLcR::synapse0x1b16970() {
   return (neuron0x1b0c530()*0.0249149);
}

double NNfunction_sb_sLcR::synapse0x1b169b0() {
   return (neuron0x1b0c870()*0.112421);
}

double NNfunction_sb_sLcR::synapse0x1b169f0() {
   return (neuron0x1b0cbb0()*-0.130057);
}

double NNfunction_sb_sLcR::synapse0x1b16a30() {
   return (neuron0x1b0cef0()*-0.0549138);
}

double NNfunction_sb_sLcR::synapse0x1b16a70() {
   return (neuron0x1b0d230()*0.179782);
}

double NNfunction_sb_sLcR::synapse0x1b16ab0() {
   return (neuron0x1b0d570()*-0.839352);
}

double NNfunction_sb_sLcR::synapse0x1b16540() {
   return (neuron0x1b0d8b0()*0.162851);
}

double NNfunction_sb_sLcR::synapse0x1b16580() {
   return (neuron0x1b0de10()*-0.556196);
}

double NNfunction_sb_sLcR::synapse0x1b16c00() {
   return (neuron0x1b0e030()*0.592262);
}

double NNfunction_sb_sLcR::synapse0x1b16c40() {
   return (neuron0x1b0e370()*-0.145154);
}

double NNfunction_sb_sLcR::synapse0x1b16c80() {
   return (neuron0x1b0e6b0()*0.0750877);
}

double NNfunction_sb_sLcR::synapse0x1b16cc0() {
   return (neuron0x1b0e9f0()*-0.110108);
}

double NNfunction_sb_sLcR::synapse0x1b16d00() {
   return (neuron0x1b0ed30()*-0.0177104);
}

double NNfunction_sb_sLcR::synapse0x1b16d40() {
   return (neuron0x1b0f070()*-0.107825);
}

double NNfunction_sb_sLcR::synapse0x1b16f10() {
   return (neuron0x1b0a4b0()*-0.30164);
}

double NNfunction_sb_sLcR::synapse0x1b1ffa0() {
   return (neuron0x1b0a7f0()*-0.0689389);
}

double NNfunction_sb_sLcR::synapse0x1b1ffe0() {
   return (neuron0x1b0ab30()*0.0348141);
}

double NNfunction_sb_sLcR::synapse0x1b20020() {
   return (neuron0x1b0ae70()*0.640189);
}

double NNfunction_sb_sLcR::synapse0x1b20060() {
   return (neuron0x1b0b1b0()*-0.0328844);
}

double NNfunction_sb_sLcR::synapse0x1b200a0() {
   return (neuron0x1b0b4f0()*-0.0525899);
}

double NNfunction_sb_sLcR::synapse0x1b200e0() {
   return (neuron0x1b0b830()*-0.0266473);
}

double NNfunction_sb_sLcR::synapse0x1b20120() {
   return (neuron0x1b0bb70()*0.256754);
}

double NNfunction_sb_sLcR::synapse0x1b20160() {
   return (neuron0x1b0beb0()*0.0574612);
}

double NNfunction_sb_sLcR::synapse0x1b201a0() {
   return (neuron0x1b0c1f0()*-0.150161);
}

double NNfunction_sb_sLcR::synapse0x1b201e0() {
   return (neuron0x1b0c530()*0.03934);
}

double NNfunction_sb_sLcR::synapse0x1b20220() {
   return (neuron0x1b0c870()*0.0917431);
}

double NNfunction_sb_sLcR::synapse0x1b20260() {
   return (neuron0x1b0cbb0()*0.131703);
}

double NNfunction_sb_sLcR::synapse0x1b202a0() {
   return (neuron0x1b0cef0()*0.0965891);
}

double NNfunction_sb_sLcR::synapse0x1b202e0() {
   return (neuron0x1b0d230()*0.015749);
}

double NNfunction_sb_sLcR::synapse0x1b20320() {
   return (neuron0x1b0d570()*-0.275136);
}

double NNfunction_sb_sLcR::synapse0x1b1fdf0() {
   return (neuron0x1b0d8b0()*0.0617481);
}

double NNfunction_sb_sLcR::synapse0x1b1fe30() {
   return (neuron0x1b0de10()*0.0788524);
}

double NNfunction_sb_sLcR::synapse0x1b20470() {
   return (neuron0x1b0e030()*0.143119);
}

double NNfunction_sb_sLcR::synapse0x1b204b0() {
   return (neuron0x1b0e370()*-0.0143648);
}

double NNfunction_sb_sLcR::synapse0x1b204f0() {
   return (neuron0x1b0e6b0()*0.0384438);
}

double NNfunction_sb_sLcR::synapse0x1b20530() {
   return (neuron0x1b0e9f0()*0.0272797);
}

double NNfunction_sb_sLcR::synapse0x1b20570() {
   return (neuron0x1b0ed30()*-0.0239038);
}

double NNfunction_sb_sLcR::synapse0x1b205b0() {
   return (neuron0x1b0f070()*0.0148852);
}

double NNfunction_sb_sLcR::synapse0x1b20930() {
   return (neuron0x1b0a4b0()*0.0774393);
}

double NNfunction_sb_sLcR::synapse0x1b20970() {
   return (neuron0x1b0a7f0()*-0.433996);
}

double NNfunction_sb_sLcR::synapse0x1b209b0() {
   return (neuron0x1b0ab30()*0.27289);
}

double NNfunction_sb_sLcR::synapse0x1b209f0() {
   return (neuron0x1b0ae70()*0.228486);
}

double NNfunction_sb_sLcR::synapse0x1b20a30() {
   return (neuron0x1b0b1b0()*0.451466);
}

double NNfunction_sb_sLcR::synapse0x1b20a70() {
   return (neuron0x1b0b4f0()*0.0802541);
}

double NNfunction_sb_sLcR::synapse0x1b20ab0() {
   return (neuron0x1b0b830()*0.19814);
}

double NNfunction_sb_sLcR::synapse0x1b20af0() {
   return (neuron0x1b0bb70()*0.289746);
}

double NNfunction_sb_sLcR::synapse0x1b20b30() {
   return (neuron0x1b0beb0()*-0.121371);
}

double NNfunction_sb_sLcR::synapse0x1b20b70() {
   return (neuron0x1b0c1f0()*-0.0979937);
}

double NNfunction_sb_sLcR::synapse0x1b20bb0() {
   return (neuron0x1b0c530()*-0.193955);
}

double NNfunction_sb_sLcR::synapse0x1b20bf0() {
   return (neuron0x1b0c870()*-0.38954);
}

double NNfunction_sb_sLcR::synapse0x1b20c30() {
   return (neuron0x1b0cbb0()*-0.263036);
}

double NNfunction_sb_sLcR::synapse0x1b20c70() {
   return (neuron0x1b0cef0()*0.0722782);
}

double NNfunction_sb_sLcR::synapse0x1b20cb0() {
   return (neuron0x1b0d230()*0.182136);
}

double NNfunction_sb_sLcR::synapse0x1b20cf0() {
   return (neuron0x1b0d570()*0.458406);
}

double NNfunction_sb_sLcR::synapse0x1b20780() {
   return (neuron0x1b0d8b0()*0.330703);
}

double NNfunction_sb_sLcR::synapse0x1b207c0() {
   return (neuron0x1b0de10()*0.240207);
}

double NNfunction_sb_sLcR::synapse0x1b20e40() {
   return (neuron0x1b0e030()*0.745543);
}

double NNfunction_sb_sLcR::synapse0x1b20e80() {
   return (neuron0x1b0e370()*-0.0434733);
}

double NNfunction_sb_sLcR::synapse0x1b20ec0() {
   return (neuron0x1b0e6b0()*-0.403108);
}

double NNfunction_sb_sLcR::synapse0x1b20f00() {
   return (neuron0x1b0e9f0()*-0.243116);
}

double NNfunction_sb_sLcR::synapse0x1b20f40() {
   return (neuron0x1b0ed30()*-0.277217);
}

double NNfunction_sb_sLcR::synapse0x1b20f80() {
   return (neuron0x1b0f070()*0.28708);
}

double NNfunction_sb_sLcR::synapse0x1b21300() {
   return (neuron0x1b0a4b0()*-0.00506597);
}

double NNfunction_sb_sLcR::synapse0x1b21340() {
   return (neuron0x1b0a7f0()*0.0582135);
}

double NNfunction_sb_sLcR::synapse0x1b21380() {
   return (neuron0x1b0ab30()*-0.0720856);
}

double NNfunction_sb_sLcR::synapse0x1b213c0() {
   return (neuron0x1b0ae70()*0.0189745);
}

double NNfunction_sb_sLcR::synapse0x1b21400() {
   return (neuron0x1b0b1b0()*0.0917107);
}

double NNfunction_sb_sLcR::synapse0x1b21440() {
   return (neuron0x1b0b4f0()*0.0460469);
}

double NNfunction_sb_sLcR::synapse0x1b21480() {
   return (neuron0x1b0b830()*-0.0343668);
}

double NNfunction_sb_sLcR::synapse0x1b214c0() {
   return (neuron0x1b0bb70()*-0.00550599);
}

double NNfunction_sb_sLcR::synapse0x1b21500() {
   return (neuron0x1b0beb0()*0.0169189);
}

double NNfunction_sb_sLcR::synapse0x1b21540() {
   return (neuron0x1b0c1f0()*-0.0405439);
}

double NNfunction_sb_sLcR::synapse0x1b21580() {
   return (neuron0x1b0c530()*-0.00470649);
}

double NNfunction_sb_sLcR::synapse0x1b215c0() {
   return (neuron0x1b0c870()*0.0392329);
}

double NNfunction_sb_sLcR::synapse0x1b21600() {
   return (neuron0x1b0cbb0()*-0.725339);
}

double NNfunction_sb_sLcR::synapse0x1b21640() {
   return (neuron0x1b0cef0()*-0.0823703);
}

double NNfunction_sb_sLcR::synapse0x1b21680() {
   return (neuron0x1b0d230()*-0.0313871);
}

double NNfunction_sb_sLcR::synapse0x1b216c0() {
   return (neuron0x1b0d570()*-0.573708);
}

double NNfunction_sb_sLcR::synapse0x1b21150() {
   return (neuron0x1b0d8b0()*-0.0506069);
}

double NNfunction_sb_sLcR::synapse0x1b21190() {
   return (neuron0x1b0de10()*0.0256419);
}

double NNfunction_sb_sLcR::synapse0x1b21810() {
   return (neuron0x1b0e030()*0.0117609);
}

double NNfunction_sb_sLcR::synapse0x1b21850() {
   return (neuron0x1b0e370()*0.00359537);
}

double NNfunction_sb_sLcR::synapse0x1b21890() {
   return (neuron0x1b0e6b0()*0.0388494);
}

double NNfunction_sb_sLcR::synapse0x1b218d0() {
   return (neuron0x1b0e9f0()*-0.0472504);
}

double NNfunction_sb_sLcR::synapse0x1b21910() {
   return (neuron0x1b0ed30()*-0.0184779);
}

double NNfunction_sb_sLcR::synapse0x1b21950() {
   return (neuron0x1b0f070()*-0.00527165);
}

double NNfunction_sb_sLcR::synapse0x1b21cd0() {
   return (neuron0x1b0a4b0()*0.014604);
}

double NNfunction_sb_sLcR::synapse0x1b21d10() {
   return (neuron0x1b0a7f0()*0.0128954);
}

double NNfunction_sb_sLcR::synapse0x1b21d50() {
   return (neuron0x1b0ab30()*0.0338731);
}

double NNfunction_sb_sLcR::synapse0x1b21d90() {
   return (neuron0x1b0ae70()*-1.74123);
}

double NNfunction_sb_sLcR::synapse0x1b21dd0() {
   return (neuron0x1b0b1b0()*0.000893903);
}

double NNfunction_sb_sLcR::synapse0x1b21e10() {
   return (neuron0x1b0b4f0()*-0.0129183);
}

double NNfunction_sb_sLcR::synapse0x1b21e50() {
   return (neuron0x1b0b830()*0.0140295);
}

double NNfunction_sb_sLcR::synapse0x1b21e90() {
   return (neuron0x1b0bb70()*0.035343);
}

double NNfunction_sb_sLcR::synapse0x1b21ed0() {
   return (neuron0x1b0beb0()*0.0196283);
}

double NNfunction_sb_sLcR::synapse0x1b21f10() {
   return (neuron0x1b0c1f0()*-0.00787422);
}

double NNfunction_sb_sLcR::synapse0x1b21f50() {
   return (neuron0x1b0c530()*-0.0289085);
}

double NNfunction_sb_sLcR::synapse0x1b21f90() {
   return (neuron0x1b0c870()*0.0352937);
}

double NNfunction_sb_sLcR::synapse0x1b21fd0() {
   return (neuron0x1b0cbb0()*-0.333488);
}

double NNfunction_sb_sLcR::synapse0x1b22010() {
   return (neuron0x1b0cef0()*-0.0228886);
}

double NNfunction_sb_sLcR::synapse0x1b22050() {
   return (neuron0x1b0d230()*0.0599328);
}

double NNfunction_sb_sLcR::synapse0x1b22090() {
   return (neuron0x1b0d570()*1.83945);
}

double NNfunction_sb_sLcR::synapse0x1b21b20() {
   return (neuron0x1b0d8b0()*-0.0296526);
}

double NNfunction_sb_sLcR::synapse0x1b21b60() {
   return (neuron0x1b0de10()*0.0953333);
}

double NNfunction_sb_sLcR::synapse0x1b221e0() {
   return (neuron0x1b0e030()*0.0288454);
}

double NNfunction_sb_sLcR::synapse0x1b22220() {
   return (neuron0x1b0e370()*0.0168112);
}

double NNfunction_sb_sLcR::synapse0x1b22260() {
   return (neuron0x1b0e6b0()*-0.00383636);
}

double NNfunction_sb_sLcR::synapse0x1b222a0() {
   return (neuron0x1b0e9f0()*-0.0508204);
}

double NNfunction_sb_sLcR::synapse0x1b222e0() {
   return (neuron0x1b0ed30()*-0.0200357);
}

double NNfunction_sb_sLcR::synapse0x1b22320() {
   return (neuron0x1b0f070()*-0.0274237);
}

double NNfunction_sb_sLcR::synapse0x1b226a0() {
   return (neuron0x1b0a4b0()*0.0303776);
}

double NNfunction_sb_sLcR::synapse0x1b226e0() {
   return (neuron0x1b0a7f0()*0.00664605);
}

double NNfunction_sb_sLcR::synapse0x1b22720() {
   return (neuron0x1b0ab30()*0.0807381);
}

double NNfunction_sb_sLcR::synapse0x1b22760() {
   return (neuron0x1b0ae70()*-1.1866);
}

double NNfunction_sb_sLcR::synapse0x1b227a0() {
   return (neuron0x1b0b1b0()*-0.0137064);
}

double NNfunction_sb_sLcR::synapse0x1b227e0() {
   return (neuron0x1b0b4f0()*-0.0676674);
}

double NNfunction_sb_sLcR::synapse0x1b22820() {
   return (neuron0x1b0b830()*-0.0672365);
}

double NNfunction_sb_sLcR::synapse0x1b22860() {
   return (neuron0x1b0bb70()*-0.105872);
}

double NNfunction_sb_sLcR::synapse0x1b228a0() {
   return (neuron0x1b0beb0()*0.113389);
}

double NNfunction_sb_sLcR::synapse0x1b228e0() {
   return (neuron0x1b0c1f0()*0.0674374);
}

double NNfunction_sb_sLcR::synapse0x1b22920() {
   return (neuron0x1b0c530()*0.0211543);
}

double NNfunction_sb_sLcR::synapse0x1b22960() {
   return (neuron0x1b0c870()*0.0257159);
}

double NNfunction_sb_sLcR::synapse0x1b229a0() {
   return (neuron0x1b0cbb0()*1.32504);
}

double NNfunction_sb_sLcR::synapse0x1b229e0() {
   return (neuron0x1b0cef0()*0.0175836);
}

double NNfunction_sb_sLcR::synapse0x1b22a20() {
   return (neuron0x1b0d230()*-0.0487915);
}

double NNfunction_sb_sLcR::synapse0x1b22a60() {
   return (neuron0x1b0d570()*-0.103524);
}

double NNfunction_sb_sLcR::synapse0x1b224f0() {
   return (neuron0x1b0d8b0()*0.00410226);
}

double NNfunction_sb_sLcR::synapse0x1b22530() {
   return (neuron0x1b0de10()*0.0779297);
}

double NNfunction_sb_sLcR::synapse0x1b22bb0() {
   return (neuron0x1b0e030()*0.0394159);
}

double NNfunction_sb_sLcR::synapse0x1b22bf0() {
   return (neuron0x1b0e370()*0.0755498);
}

double NNfunction_sb_sLcR::synapse0x1b22c30() {
   return (neuron0x1b0e6b0()*-0.0298378);
}

double NNfunction_sb_sLcR::synapse0x1b22c70() {
   return (neuron0x1b0e9f0()*-0.0282488);
}

double NNfunction_sb_sLcR::synapse0x1b22cb0() {
   return (neuron0x1b0ed30()*-0.0624759);
}

double NNfunction_sb_sLcR::synapse0x1b22cf0() {
   return (neuron0x1b0f070()*-0.0211019);
}

double NNfunction_sb_sLcR::synapse0x1b23070() {
   return (neuron0x1b0a4b0()*0.586606);
}

double NNfunction_sb_sLcR::synapse0x1b230b0() {
   return (neuron0x1b0a7f0()*-0.506285);
}

double NNfunction_sb_sLcR::synapse0x1b230f0() {
   return (neuron0x1b0ab30()*-0.142781);
}

double NNfunction_sb_sLcR::synapse0x1b23130() {
   return (neuron0x1b0ae70()*-0.624663);
}

double NNfunction_sb_sLcR::synapse0x1b23170() {
   return (neuron0x1b0b1b0()*-0.798576);
}

double NNfunction_sb_sLcR::synapse0x1b231b0() {
   return (neuron0x1b0b4f0()*0.00285985);
}

double NNfunction_sb_sLcR::synapse0x1b231f0() {
   return (neuron0x1b0b830()*-0.157222);
}

double NNfunction_sb_sLcR::synapse0x1b23230() {
   return (neuron0x1b0bb70()*0.446814);
}

double NNfunction_sb_sLcR::synapse0x1b23270() {
   return (neuron0x1b0beb0()*0.416236);
}

double NNfunction_sb_sLcR::synapse0x1b232b0() {
   return (neuron0x1b0c1f0()*-0.0570454);
}

double NNfunction_sb_sLcR::synapse0x1b232f0() {
   return (neuron0x1b0c530()*-0.109835);
}

double NNfunction_sb_sLcR::synapse0x1b23330() {
   return (neuron0x1b0c870()*-0.297642);
}

double NNfunction_sb_sLcR::synapse0x1b23370() {
   return (neuron0x1b0cbb0()*-0.59382);
}

double NNfunction_sb_sLcR::synapse0x1b233b0() {
   return (neuron0x1b0cef0()*0.706266);
}

double NNfunction_sb_sLcR::synapse0x1b233f0() {
   return (neuron0x1b0d230()*-0.414373);
}

double NNfunction_sb_sLcR::synapse0x1b23430() {
   return (neuron0x1b0d570()*0.232932);
}

double NNfunction_sb_sLcR::synapse0x1b22ec0() {
   return (neuron0x1b0d8b0()*0.112915);
}

double NNfunction_sb_sLcR::synapse0x1b22f00() {
   return (neuron0x1b0de10()*0.136341);
}

double NNfunction_sb_sLcR::synapse0x1b23580() {
   return (neuron0x1b0e030()*-0.289045);
}

double NNfunction_sb_sLcR::synapse0x1b235c0() {
   return (neuron0x1b0e370()*0.376401);
}

double NNfunction_sb_sLcR::synapse0x1b23600() {
   return (neuron0x1b0e6b0()*-0.162627);
}

double NNfunction_sb_sLcR::synapse0x1b23640() {
   return (neuron0x1b0e9f0()*0.400719);
}

double NNfunction_sb_sLcR::synapse0x1b23680() {
   return (neuron0x1b0ed30()*0.046944);
}

double NNfunction_sb_sLcR::synapse0x1b236c0() {
   return (neuron0x1b0f070()*-0.155319);
}

double NNfunction_sb_sLcR::synapse0x1b23a40() {
   return (neuron0x1b0a4b0()*0.0762012);
}

double NNfunction_sb_sLcR::synapse0x1b23a80() {
   return (neuron0x1b0a7f0()*-0.0310281);
}

double NNfunction_sb_sLcR::synapse0x1b23ac0() {
   return (neuron0x1b0ab30()*0.172926);
}

double NNfunction_sb_sLcR::synapse0x1b23b00() {
   return (neuron0x1b0ae70()*1.1018);
}

double NNfunction_sb_sLcR::synapse0x1b23b40() {
   return (neuron0x1b0b1b0()*-0.0326699);
}

double NNfunction_sb_sLcR::synapse0x1b23b80() {
   return (neuron0x1b0b4f0()*0.0229834);
}

double NNfunction_sb_sLcR::synapse0x1b23bc0() {
   return (neuron0x1b0b830()*-0.0418585);
}

double NNfunction_sb_sLcR::synapse0x1b23c00() {
   return (neuron0x1b0bb70()*-0.148232);
}

double NNfunction_sb_sLcR::synapse0x1b23c40() {
   return (neuron0x1b0beb0()*0.0823676);
}

double NNfunction_sb_sLcR::synapse0x1b23c80() {
   return (neuron0x1b0c1f0()*0.0313427);
}

double NNfunction_sb_sLcR::synapse0x1b23cc0() {
   return (neuron0x1b0c530()*-0.0324552);
}

double NNfunction_sb_sLcR::synapse0x1b23d00() {
   return (neuron0x1b0c870()*0.062283);
}

double NNfunction_sb_sLcR::synapse0x1b23d40() {
   return (neuron0x1b0cbb0()*1.12864);
}

double NNfunction_sb_sLcR::synapse0x1b23d80() {
   return (neuron0x1b0cef0()*-0.00336538);
}

double NNfunction_sb_sLcR::synapse0x1b23dc0() {
   return (neuron0x1b0d230()*-0.0583855);
}

double NNfunction_sb_sLcR::synapse0x1b23e00() {
   return (neuron0x1b0d570()*-0.0245412);
}

double NNfunction_sb_sLcR::synapse0x1b23890() {
   return (neuron0x1b0d8b0()*-0.0206752);
}

double NNfunction_sb_sLcR::synapse0x1b238d0() {
   return (neuron0x1b0de10()*0.0691223);
}

double NNfunction_sb_sLcR::synapse0x1b23f50() {
   return (neuron0x1b0e030()*0.0464235);
}

double NNfunction_sb_sLcR::synapse0x1b23f90() {
   return (neuron0x1b0e370()*0.0884945);
}

double NNfunction_sb_sLcR::synapse0x1b23fd0() {
   return (neuron0x1b0e6b0()*0.0202262);
}

double NNfunction_sb_sLcR::synapse0x1b24010() {
   return (neuron0x1b0e9f0()*-0.0359294);
}

double NNfunction_sb_sLcR::synapse0x1b24050() {
   return (neuron0x1b0ed30()*-0.0898241);
}

double NNfunction_sb_sLcR::synapse0x1b24090() {
   return (neuron0x1b0f070()*-0.103759);
}

double NNfunction_sb_sLcR::synapse0x1b24410() {
   return (neuron0x1b0a4b0()*0.0602895);
}

double NNfunction_sb_sLcR::synapse0x1b24450() {
   return (neuron0x1b0a7f0()*-0.0805321);
}

double NNfunction_sb_sLcR::synapse0x1b24490() {
   return (neuron0x1b0ab30()*0.130436);
}

double NNfunction_sb_sLcR::synapse0x1b244d0() {
   return (neuron0x1b0ae70()*0.278664);
}

double NNfunction_sb_sLcR::synapse0x1b24510() {
   return (neuron0x1b0b1b0()*0.0617359);
}

double NNfunction_sb_sLcR::synapse0x1b24550() {
   return (neuron0x1b0b4f0()*-0.00224101);
}

double NNfunction_sb_sLcR::synapse0x1b24590() {
   return (neuron0x1b0b830()*-0.00744419);
}

double NNfunction_sb_sLcR::synapse0x1b245d0() {
   return (neuron0x1b0bb70()*0.0269033);
}

double NNfunction_sb_sLcR::synapse0x1b24610() {
   return (neuron0x1b0beb0()*-0.108163);
}

double NNfunction_sb_sLcR::synapse0x1b24650() {
   return (neuron0x1b0c1f0()*-0.045737);
}

double NNfunction_sb_sLcR::synapse0x1b24690() {
   return (neuron0x1b0c530()*-0.078532);
}

double NNfunction_sb_sLcR::synapse0x1b246d0() {
   return (neuron0x1b0c870()*-0.333489);
}

double NNfunction_sb_sLcR::synapse0x1b24710() {
   return (neuron0x1b0cbb0()*0.242134);
}

double NNfunction_sb_sLcR::synapse0x1b24750() {
   return (neuron0x1b0cef0()*0.0938189);
}

double NNfunction_sb_sLcR::synapse0x1b24790() {
   return (neuron0x1b0d230()*-0.0704927);
}

double NNfunction_sb_sLcR::synapse0x1b247d0() {
   return (neuron0x1b0d570()*0.182198);
}

double NNfunction_sb_sLcR::synapse0x1b24260() {
   return (neuron0x1b0d8b0()*0.0761914);
}

double NNfunction_sb_sLcR::synapse0x1b242a0() {
   return (neuron0x1b0de10()*-0.25201);
}

double NNfunction_sb_sLcR::synapse0x1b24920() {
   return (neuron0x1b0e030()*-0.339046);
}

double NNfunction_sb_sLcR::synapse0x1b24960() {
   return (neuron0x1b0e370()*-0.0457885);
}

double NNfunction_sb_sLcR::synapse0x1b249a0() {
   return (neuron0x1b0e6b0()*0.0193955);
}

double NNfunction_sb_sLcR::synapse0x1b249e0() {
   return (neuron0x1b0e9f0()*0.0240823);
}

double NNfunction_sb_sLcR::synapse0x1b24a20() {
   return (neuron0x1b0ed30()*0.040587);
}

double NNfunction_sb_sLcR::synapse0x1b24a60() {
   return (neuron0x1b0f070()*-0.00559794);
}

double NNfunction_sb_sLcR::synapse0x1b24de0() {
   return (neuron0x1b0a4b0()*0.0929386);
}

double NNfunction_sb_sLcR::synapse0x1b193b0() {
   return (neuron0x1b0a7f0()*0.2674);
}

double NNfunction_sb_sLcR::synapse0x1b193f0() {
   return (neuron0x1b0ab30()*0.162325);
}

double NNfunction_sb_sLcR::synapse0x1b19430() {
   return (neuron0x1b0ae70()*0.415096);
}

double NNfunction_sb_sLcR::synapse0x1b19680() {
   return (neuron0x1b0b1b0()*-0.821184);
}

double NNfunction_sb_sLcR::synapse0x1b196c0() {
   return (neuron0x1b0b4f0()*-0.346711);
}

double NNfunction_sb_sLcR::synapse0x1b19700() {
   return (neuron0x1b0b830()*-0.162527);
}

double NNfunction_sb_sLcR::synapse0x1b19950() {
   return (neuron0x1b0bb70()*0.294201);
}

double NNfunction_sb_sLcR::synapse0x1b19990() {
   return (neuron0x1b0beb0()*-0.0078137);
}

double NNfunction_sb_sLcR::synapse0x1b19be0() {
   return (neuron0x1b0c1f0()*-0.291083);
}

double NNfunction_sb_sLcR::synapse0x1b19c20() {
   return (neuron0x1b0c530()*-0.0197802);
}

double NNfunction_sb_sLcR::synapse0x1b19c60() {
   return (neuron0x1b0c870()*0.0913827);
}

double NNfunction_sb_sLcR::synapse0x1b19eb0() {
   return (neuron0x1b0cbb0()*-0.113386);
}

double NNfunction_sb_sLcR::synapse0x1b19ef0() {
   return (neuron0x1b0cef0()*0.0675365);
}

double NNfunction_sb_sLcR::synapse0x1b1a140() {
   return (neuron0x1b0d230()*0.169778);
}

double NNfunction_sb_sLcR::synapse0x1b1a180() {
   return (neuron0x1b0d570()*0.247895);
}

double NNfunction_sb_sLcR::synapse0x1b24c30() {
   return (neuron0x1b0d8b0()*-0.067351);
}

double NNfunction_sb_sLcR::synapse0x1b24c70() {
   return (neuron0x1b0de10()*0.218458);
}

double NNfunction_sb_sLcR::synapse0x1b1a2d0() {
   return (neuron0x1b0e030()*-0.0770972);
}

double NNfunction_sb_sLcR::synapse0x1b1a7e0() {
   return (neuron0x1b0e370()*0.248224);
}

double NNfunction_sb_sLcR::synapse0x1b1a820() {
   return (neuron0x1b0e6b0()*-0.0694166);
}

double NNfunction_sb_sLcR::synapse0x1b1a860() {
   return (neuron0x1b0e9f0()*0.0164755);
}

double NNfunction_sb_sLcR::synapse0x1b1aab0() {
   return (neuron0x1b0ed30()*-0.153722);
}

double NNfunction_sb_sLcR::synapse0x1b1aaf0() {
   return (neuron0x1b0f070()*0.00289717);
}

double NNfunction_sb_sLcR::synapse0x1b1a3a0() {
   return (neuron0x1b0a4b0()*-0.0229569);
}

double NNfunction_sb_sLcR::synapse0x1b1a3e0() {
   return (neuron0x1b0a7f0()*0.0543127);
}

double NNfunction_sb_sLcR::synapse0x1b1a420() {
   return (neuron0x1b0ab30()*-0.762385);
}

double NNfunction_sb_sLcR::synapse0x1b1a460() {
   return (neuron0x1b0ae70()*0.156917);
}

double NNfunction_sb_sLcR::synapse0x1b1ade0() {
   return (neuron0x1b0b1b0()*0.0205339);
}

double NNfunction_sb_sLcR::synapse0x1b27130() {
   return (neuron0x1b0b4f0()*-0.0150358);
}

double NNfunction_sb_sLcR::synapse0x1b27170() {
   return (neuron0x1b0b830()*-0.00232399);
}

double NNfunction_sb_sLcR::synapse0x1b271b0() {
   return (neuron0x1b0bb70()*-0.017895);
}

double NNfunction_sb_sLcR::synapse0x1b271f0() {
   return (neuron0x1b0beb0()*0.0217625);
}

double NNfunction_sb_sLcR::synapse0x1b27230() {
   return (neuron0x1b0c1f0()*-0.024028);
}

double NNfunction_sb_sLcR::synapse0x1b27270() {
   return (neuron0x1b0c530()*0.0654647);
}

double NNfunction_sb_sLcR::synapse0x1b272b0() {
   return (neuron0x1b0c870()*-0.121138);
}

double NNfunction_sb_sLcR::synapse0x1b272f0() {
   return (neuron0x1b0cbb0()*0.264932);
}

double NNfunction_sb_sLcR::synapse0x1b27330() {
   return (neuron0x1b0cef0()*-0.0190753);
}

double NNfunction_sb_sLcR::synapse0x1b27370() {
   return (neuron0x1b0d230()*-0.0392471);
}

double NNfunction_sb_sLcR::synapse0x1b273b0() {
   return (neuron0x1b0d570()*-0.159113);
}

double NNfunction_sb_sLcR::synapse0x1b1acc0() {
   return (neuron0x1b0d8b0()*0.0123918);
}

double NNfunction_sb_sLcR::synapse0x1b1ad00() {
   return (neuron0x1b0de10()*-0.0332921);
}

double NNfunction_sb_sLcR::synapse0x1b27500() {
   return (neuron0x1b0e030()*-0.0840867);
}

double NNfunction_sb_sLcR::synapse0x1b27540() {
   return (neuron0x1b0e370()*0.0194627);
}

double NNfunction_sb_sLcR::synapse0x1b27580() {
   return (neuron0x1b0e6b0()*-0.00897599);
}

double NNfunction_sb_sLcR::synapse0x1b275c0() {
   return (neuron0x1b0e9f0()*-0.00760501);
}

double NNfunction_sb_sLcR::synapse0x1b27600() {
   return (neuron0x1b0ed30()*-0.0315515);
}

double NNfunction_sb_sLcR::synapse0x1b27640() {
   return (neuron0x1b0f070()*0.0178135);
}

double NNfunction_sb_sLcR::synapse0x1b279c0() {
   return (neuron0x1b0a4b0()*0.0613491);
}

double NNfunction_sb_sLcR::synapse0x1b27a00() {
   return (neuron0x1b0a7f0()*0.147262);
}

double NNfunction_sb_sLcR::synapse0x1b27a40() {
   return (neuron0x1b0ab30()*0.00312625);
}

double NNfunction_sb_sLcR::synapse0x1b27a80() {
   return (neuron0x1b0ae70()*-0.975502);
}

double NNfunction_sb_sLcR::synapse0x1b27ac0() {
   return (neuron0x1b0b1b0()*-0.0962823);
}

double NNfunction_sb_sLcR::synapse0x1b27b00() {
   return (neuron0x1b0b4f0()*0.121769);
}

double NNfunction_sb_sLcR::synapse0x1b27b40() {
   return (neuron0x1b0b830()*-0.068165);
}

double NNfunction_sb_sLcR::synapse0x1b27b80() {
   return (neuron0x1b0bb70()*0.100851);
}

double NNfunction_sb_sLcR::synapse0x1b27bc0() {
   return (neuron0x1b0beb0()*-0.0569388);
}

double NNfunction_sb_sLcR::synapse0x1b27c00() {
   return (neuron0x1b0c1f0()*0.35736);
}

double NNfunction_sb_sLcR::synapse0x1b27c40() {
   return (neuron0x1b0c530()*-0.127773);
}

double NNfunction_sb_sLcR::synapse0x1b27c80() {
   return (neuron0x1b0c870()*-0.0924201);
}

double NNfunction_sb_sLcR::synapse0x1b27cc0() {
   return (neuron0x1b0cbb0()*-0.310381);
}

double NNfunction_sb_sLcR::synapse0x1b27d00() {
   return (neuron0x1b0cef0()*0.0510793);
}

double NNfunction_sb_sLcR::synapse0x1b27d40() {
   return (neuron0x1b0d230()*0.10976);
}

double NNfunction_sb_sLcR::synapse0x1b27d80() {
   return (neuron0x1b0d570()*-0.192438);
}

double NNfunction_sb_sLcR::synapse0x1b27810() {
   return (neuron0x1b0d8b0()*0.191691);
}

double NNfunction_sb_sLcR::synapse0x1b27850() {
   return (neuron0x1b0de10()*0.373231);
}

double NNfunction_sb_sLcR::synapse0x1b27ed0() {
   return (neuron0x1b0e030()*-0.356732);
}

double NNfunction_sb_sLcR::synapse0x1b27f10() {
   return (neuron0x1b0e370()*-0.324);
}

double NNfunction_sb_sLcR::synapse0x1b27f50() {
   return (neuron0x1b0e6b0()*0.220381);
}

double NNfunction_sb_sLcR::synapse0x1b27f90() {
   return (neuron0x1b0e9f0()*-0.264092);
}

double NNfunction_sb_sLcR::synapse0x1b27fd0() {
   return (neuron0x1b0ed30()*0.0670923);
}

double NNfunction_sb_sLcR::synapse0x1b28010() {
   return (neuron0x1b0f070()*0.0193751);
}

double NNfunction_sb_sLcR::synapse0x1b28390() {
   return (neuron0x1b0a4b0()*-0.0402428);
}

double NNfunction_sb_sLcR::synapse0x1b283d0() {
   return (neuron0x1b0a7f0()*-0.0482195);
}

double NNfunction_sb_sLcR::synapse0x1b28410() {
   return (neuron0x1b0ab30()*0.00499603);
}

double NNfunction_sb_sLcR::synapse0x1b28450() {
   return (neuron0x1b0ae70()*10.528);
}

double NNfunction_sb_sLcR::synapse0x1b28490() {
   return (neuron0x1b0b1b0()*-0.0529408);
}

double NNfunction_sb_sLcR::synapse0x1b284d0() {
   return (neuron0x1b0b4f0()*-0.0472418);
}

double NNfunction_sb_sLcR::synapse0x1b28510() {
   return (neuron0x1b0b830()*-0.00895587);
}

double NNfunction_sb_sLcR::synapse0x1b28550() {
   return (neuron0x1b0bb70()*-0.0244111);
}

double NNfunction_sb_sLcR::synapse0x1b28590() {
   return (neuron0x1b0beb0()*0.00782891);
}

double NNfunction_sb_sLcR::synapse0x1b285d0() {
   return (neuron0x1b0c1f0()*-0.0397567);
}

double NNfunction_sb_sLcR::synapse0x1b28610() {
   return (neuron0x1b0c530()*0.00116247);
}

double NNfunction_sb_sLcR::synapse0x1b28650() {
   return (neuron0x1b0c870()*0.0116549);
}

double NNfunction_sb_sLcR::synapse0x1b28690() {
   return (neuron0x1b0cbb0()*0.0941648);
}

double NNfunction_sb_sLcR::synapse0x1b286d0() {
   return (neuron0x1b0cef0()*0.0199175);
}

double NNfunction_sb_sLcR::synapse0x1b28710() {
   return (neuron0x1b0d230()*0.0165358);
}

double NNfunction_sb_sLcR::synapse0x1b28750() {
   return (neuron0x1b0d570()*0.312859);
}

double NNfunction_sb_sLcR::synapse0x1b281e0() {
   return (neuron0x1b0d8b0()*-0.00644454);
}

double NNfunction_sb_sLcR::synapse0x1b28220() {
   return (neuron0x1b0de10()*-0.0745842);
}

double NNfunction_sb_sLcR::synapse0x1b288a0() {
   return (neuron0x1b0e030()*0.0205852);
}

double NNfunction_sb_sLcR::synapse0x1b288e0() {
   return (neuron0x1b0e370()*-0.0112691);
}

double NNfunction_sb_sLcR::synapse0x1b28920() {
   return (neuron0x1b0e6b0()*-0.0247648);
}

double NNfunction_sb_sLcR::synapse0x1b28960() {
   return (neuron0x1b0e9f0()*0.0164796);
}

double NNfunction_sb_sLcR::synapse0x1b289a0() {
   return (neuron0x1b0ed30()*0.0130238);
}

double NNfunction_sb_sLcR::synapse0x1b289e0() {
   return (neuron0x1b0f070()*0.067418);
}

double NNfunction_sb_sLcR::synapse0x1b28d60() {
   return (neuron0x1b0a4b0()*-0.494553);
}

double NNfunction_sb_sLcR::synapse0x1b28da0() {
   return (neuron0x1b0a7f0()*-0.236619);
}

double NNfunction_sb_sLcR::synapse0x1b28de0() {
   return (neuron0x1b0ab30()*0.335987);
}

double NNfunction_sb_sLcR::synapse0x1b28e20() {
   return (neuron0x1b0ae70()*-0.125665);
}

double NNfunction_sb_sLcR::synapse0x1b28e60() {
   return (neuron0x1b0b1b0()*-0.795122);
}

double NNfunction_sb_sLcR::synapse0x1b28ea0() {
   return (neuron0x1b0b4f0()*0.182113);
}

double NNfunction_sb_sLcR::synapse0x1b28ee0() {
   return (neuron0x1b0b830()*0.541949);
}

double NNfunction_sb_sLcR::synapse0x1b28f20() {
   return (neuron0x1b0bb70()*-0.329466);
}

double NNfunction_sb_sLcR::synapse0x1b28f60() {
   return (neuron0x1b0beb0()*-0.367615);
}

double NNfunction_sb_sLcR::synapse0x1b28fa0() {
   return (neuron0x1b0c1f0()*0.107225);
}

double NNfunction_sb_sLcR::synapse0x1b28fe0() {
   return (neuron0x1b0c530()*0.179828);
}

double NNfunction_sb_sLcR::synapse0x1b29020() {
   return (neuron0x1b0c870()*0.324583);
}

double NNfunction_sb_sLcR::synapse0x1b29060() {
   return (neuron0x1b0cbb0()*0.653389);
}

double NNfunction_sb_sLcR::synapse0x1b290a0() {
   return (neuron0x1b0cef0()*0.826105);
}

double NNfunction_sb_sLcR::synapse0x1b290e0() {
   return (neuron0x1b0d230()*0.438766);
}

double NNfunction_sb_sLcR::synapse0x1b29120() {
   return (neuron0x1b0d570()*0.00496065);
}

double NNfunction_sb_sLcR::synapse0x1b28bb0() {
   return (neuron0x1b0d8b0()*0.457942);
}

double NNfunction_sb_sLcR::synapse0x1b28bf0() {
   return (neuron0x1b0de10()*-0.28809);
}

double NNfunction_sb_sLcR::synapse0x1b29270() {
   return (neuron0x1b0e030()*-0.0744985);
}

double NNfunction_sb_sLcR::synapse0x1b292b0() {
   return (neuron0x1b0e370()*-0.707829);
}

double NNfunction_sb_sLcR::synapse0x1b292f0() {
   return (neuron0x1b0e6b0()*0.231546);
}

double NNfunction_sb_sLcR::synapse0x1b29330() {
   return (neuron0x1b0e9f0()*-0.237939);
}

double NNfunction_sb_sLcR::synapse0x1b29370() {
   return (neuron0x1b0ed30()*-0.282291);
}

double NNfunction_sb_sLcR::synapse0x1b293b0() {
   return (neuron0x1b0f070()*-0.135008);
}

double NNfunction_sb_sLcR::synapse0x1b29730() {
   return (neuron0x1b0a4b0()*0.3218);
}

double NNfunction_sb_sLcR::synapse0x1b29770() {
   return (neuron0x1b0a7f0()*0.323008);
}

double NNfunction_sb_sLcR::synapse0x1b297b0() {
   return (neuron0x1b0ab30()*-0.0870252);
}

double NNfunction_sb_sLcR::synapse0x1b297f0() {
   return (neuron0x1b0ae70()*0.0785522);
}

double NNfunction_sb_sLcR::synapse0x1b29830() {
   return (neuron0x1b0b1b0()*0.144178);
}

double NNfunction_sb_sLcR::synapse0x1b29870() {
   return (neuron0x1b0b4f0()*-0.0684562);
}

double NNfunction_sb_sLcR::synapse0x1b298b0() {
   return (neuron0x1b0b830()*0.00834181);
}

double NNfunction_sb_sLcR::synapse0x1b298f0() {
   return (neuron0x1b0bb70()*-0.192773);
}

double NNfunction_sb_sLcR::synapse0x1b29930() {
   return (neuron0x1b0beb0()*-0.215181);
}

double NNfunction_sb_sLcR::synapse0x1b29970() {
   return (neuron0x1b0c1f0()*-0.0444295);
}

double NNfunction_sb_sLcR::synapse0x1b299b0() {
   return (neuron0x1b0c530()*0.0297799);
}

double NNfunction_sb_sLcR::synapse0x1b299f0() {
   return (neuron0x1b0c870()*-0.394702);
}

double NNfunction_sb_sLcR::synapse0x1b29a30() {
   return (neuron0x1b0cbb0()*-0.242887);
}

double NNfunction_sb_sLcR::synapse0x1b29a70() {
   return (neuron0x1b0cef0()*-0.149121);
}

double NNfunction_sb_sLcR::synapse0x1b29ab0() {
   return (neuron0x1b0d230()*-0.19883);
}

double NNfunction_sb_sLcR::synapse0x1b29af0() {
   return (neuron0x1b0d570()*-0.241258);
}

double NNfunction_sb_sLcR::synapse0x1b29580() {
   return (neuron0x1b0d8b0()*-0.140646);
}

double NNfunction_sb_sLcR::synapse0x1b295c0() {
   return (neuron0x1b0de10()*-0.407237);
}

double NNfunction_sb_sLcR::synapse0x1b29c40() {
   return (neuron0x1b0e030()*0.145754);
}

double NNfunction_sb_sLcR::synapse0x1b29c80() {
   return (neuron0x1b0e370()*0.0373121);
}

double NNfunction_sb_sLcR::synapse0x1b29cc0() {
   return (neuron0x1b0e6b0()*-0.014322);
}

double NNfunction_sb_sLcR::synapse0x1b29d00() {
   return (neuron0x1b0e9f0()*0.217015);
}

double NNfunction_sb_sLcR::synapse0x1b29d40() {
   return (neuron0x1b0ed30()*-0.118143);
}

double NNfunction_sb_sLcR::synapse0x1b29d80() {
   return (neuron0x1b0f070()*-0.145265);
}

double NNfunction_sb_sLcR::synapse0x1b2a100() {
   return (neuron0x1b0a4b0()*-0.0514094);
}

double NNfunction_sb_sLcR::synapse0x1b2a140() {
   return (neuron0x1b0a7f0()*-0.0589107);
}

double NNfunction_sb_sLcR::synapse0x1b2a180() {
   return (neuron0x1b0ab30()*0.0521334);
}

double NNfunction_sb_sLcR::synapse0x1b2a1c0() {
   return (neuron0x1b0ae70()*-0.508159);
}

double NNfunction_sb_sLcR::synapse0x1b2a200() {
   return (neuron0x1b0b1b0()*-0.0657321);
}

double NNfunction_sb_sLcR::synapse0x1b2a240() {
   return (neuron0x1b0b4f0()*-0.236972);
}

double NNfunction_sb_sLcR::synapse0x1b2a280() {
   return (neuron0x1b0b830()*-0.139894);
}

double NNfunction_sb_sLcR::synapse0x1b2a2c0() {
   return (neuron0x1b0bb70()*-0.0709608);
}

double NNfunction_sb_sLcR::synapse0x1b2a300() {
   return (neuron0x1b0beb0()*0.0887788);
}

double NNfunction_sb_sLcR::synapse0x1b2a340() {
   return (neuron0x1b0c1f0()*-0.157569);
}

double NNfunction_sb_sLcR::synapse0x1b2a380() {
   return (neuron0x1b0c530()*0.0935833);
}

double NNfunction_sb_sLcR::synapse0x1b2a3c0() {
   return (neuron0x1b0c870()*0.130833);
}

double NNfunction_sb_sLcR::synapse0x1b2a400() {
   return (neuron0x1b0cbb0()*0.00182908);
}

double NNfunction_sb_sLcR::synapse0x1b2a440() {
   return (neuron0x1b0cef0()*0.0581448);
}

double NNfunction_sb_sLcR::synapse0x1b2a480() {
   return (neuron0x1b0d230()*-0.105388);
}

double NNfunction_sb_sLcR::synapse0x1b2a4c0() {
   return (neuron0x1b0d570()*0.278059);
}

double NNfunction_sb_sLcR::synapse0x1b29f50() {
   return (neuron0x1b0d8b0()*-0.0208788);
}

double NNfunction_sb_sLcR::synapse0x1b29f90() {
   return (neuron0x1b0de10()*0.0207356);
}

double NNfunction_sb_sLcR::synapse0x1b2a610() {
   return (neuron0x1b0e030()*0.078618);
}

double NNfunction_sb_sLcR::synapse0x1b2a650() {
   return (neuron0x1b0e370()*0.043557);
}

double NNfunction_sb_sLcR::synapse0x1b2a690() {
   return (neuron0x1b0e6b0()*0.0910836);
}

double NNfunction_sb_sLcR::synapse0x1b2a6d0() {
   return (neuron0x1b0e9f0()*0.122422);
}

double NNfunction_sb_sLcR::synapse0x1b2a710() {
   return (neuron0x1b0ed30()*-0.119936);
}

double NNfunction_sb_sLcR::synapse0x1b2a750() {
   return (neuron0x1b0f070()*0.0697367);
}

double NNfunction_sb_sLcR::synapse0x1b2aad0() {
   return (neuron0x1b0a4b0()*0.187754);
}

double NNfunction_sb_sLcR::synapse0x1b2ab10() {
   return (neuron0x1b0a7f0()*0.0504868);
}

double NNfunction_sb_sLcR::synapse0x1b2ab50() {
   return (neuron0x1b0ab30()*-0.363188);
}

double NNfunction_sb_sLcR::synapse0x1b2ab90() {
   return (neuron0x1b0ae70()*-0.0367514);
}

double NNfunction_sb_sLcR::synapse0x1b2abd0() {
   return (neuron0x1b0b1b0()*0.370148);
}

double NNfunction_sb_sLcR::synapse0x1b2ac10() {
   return (neuron0x1b0b4f0()*-0.166949);
}

double NNfunction_sb_sLcR::synapse0x1b2ac50() {
   return (neuron0x1b0b830()*-0.454701);
}

double NNfunction_sb_sLcR::synapse0x1b2ac90() {
   return (neuron0x1b0bb70()*0.122394);
}

double NNfunction_sb_sLcR::synapse0x1b2acd0() {
   return (neuron0x1b0beb0()*-0.204105);
}

double NNfunction_sb_sLcR::synapse0x1b2ad10() {
   return (neuron0x1b0c1f0()*-0.138087);
}

double NNfunction_sb_sLcR::synapse0x1b2ad50() {
   return (neuron0x1b0c530()*-0.184164);
}

double NNfunction_sb_sLcR::synapse0x1b2ad90() {
   return (neuron0x1b0c870()*0.142318);
}

double NNfunction_sb_sLcR::synapse0x1b2add0() {
   return (neuron0x1b0cbb0()*-0.294273);
}

double NNfunction_sb_sLcR::synapse0x1b2ae10() {
   return (neuron0x1b0cef0()*-0.46146);
}

double NNfunction_sb_sLcR::synapse0x1b2ae50() {
   return (neuron0x1b0d230()*-0.0508876);
}

double NNfunction_sb_sLcR::synapse0x1b2ae90() {
   return (neuron0x1b0d570()*-0.37401);
}

double NNfunction_sb_sLcR::synapse0x1b2a920() {
   return (neuron0x1b0d8b0()*-1.39281);
}

double NNfunction_sb_sLcR::synapse0x1b2a960() {
   return (neuron0x1b0de10()*-0.178123);
}

double NNfunction_sb_sLcR::synapse0x1b2afe0() {
   return (neuron0x1b0e030()*0.230656);
}

double NNfunction_sb_sLcR::synapse0x1b2b020() {
   return (neuron0x1b0e370()*1.32144);
}

double NNfunction_sb_sLcR::synapse0x1b2b060() {
   return (neuron0x1b0e6b0()*-0.247312);
}

double NNfunction_sb_sLcR::synapse0x1b2b0a0() {
   return (neuron0x1b0e9f0()*-0.0868804);
}

double NNfunction_sb_sLcR::synapse0x1b2b0e0() {
   return (neuron0x1b0ed30()*0.188567);
}

double NNfunction_sb_sLcR::synapse0x1b2b120() {
   return (neuron0x1b0f070()*0.3138);
}

double NNfunction_sb_sLcR::synapse0x1b2b4a0() {
   return (neuron0x1b0a4b0()*-0.332726);
}

double NNfunction_sb_sLcR::synapse0x1b2b4e0() {
   return (neuron0x1b0a7f0()*0.300997);
}

double NNfunction_sb_sLcR::synapse0x1b2b520() {
   return (neuron0x1b0ab30()*-0.459665);
}

double NNfunction_sb_sLcR::synapse0x1b2b560() {
   return (neuron0x1b0ae70()*-0.330155);
}

double NNfunction_sb_sLcR::synapse0x1b2b5a0() {
   return (neuron0x1b0b1b0()*-0.400932);
}

double NNfunction_sb_sLcR::synapse0x1b2b5e0() {
   return (neuron0x1b0b4f0()*-0.385182);
}

double NNfunction_sb_sLcR::synapse0x1b2b620() {
   return (neuron0x1b0b830()*-0.0427539);
}

double NNfunction_sb_sLcR::synapse0x1b2b660() {
   return (neuron0x1b0bb70()*-0.296353);
}

double NNfunction_sb_sLcR::synapse0x1b2b6a0() {
   return (neuron0x1b0beb0()*-0.172851);
}

double NNfunction_sb_sLcR::synapse0x1b2b6e0() {
   return (neuron0x1b0c1f0()*0.270548);
}

double NNfunction_sb_sLcR::synapse0x1b2b720() {
   return (neuron0x1b0c530()*0.853375);
}

double NNfunction_sb_sLcR::synapse0x1b2b760() {
   return (neuron0x1b0c870()*0.145956);
}

double NNfunction_sb_sLcR::synapse0x1b2b7a0() {
   return (neuron0x1b0cbb0()*-0.046489);
}

double NNfunction_sb_sLcR::synapse0x1b2b7e0() {
   return (neuron0x1b0cef0()*-0.456814);
}

double NNfunction_sb_sLcR::synapse0x1b2b820() {
   return (neuron0x1b0d230()*-0.126532);
}

double NNfunction_sb_sLcR::synapse0x1b2b860() {
   return (neuron0x1b0d570()*0.533162);
}

double NNfunction_sb_sLcR::synapse0x1b2b2f0() {
   return (neuron0x1b0d8b0()*-0.139537);
}

double NNfunction_sb_sLcR::synapse0x1b2b330() {
   return (neuron0x1b0de10()*-0.189894);
}

double NNfunction_sb_sLcR::synapse0x1b2b9b0() {
   return (neuron0x1b0e030()*0.448692);
}

double NNfunction_sb_sLcR::synapse0x1b2b9f0() {
   return (neuron0x1b0e370()*0.197586);
}

double NNfunction_sb_sLcR::synapse0x1b2ba30() {
   return (neuron0x1b0e6b0()*0.0603307);
}

double NNfunction_sb_sLcR::synapse0x1b2ba70() {
   return (neuron0x1b0e9f0()*-0.177736);
}

double NNfunction_sb_sLcR::synapse0x1b2bab0() {
   return (neuron0x1b0ed30()*0.183205);
}

double NNfunction_sb_sLcR::synapse0x1b2baf0() {
   return (neuron0x1b0f070()*-0.316474);
}

double NNfunction_sb_sLcR::synapse0x1b145a0() {
   return (neuron0x1b0a4b0()*-0.419128);
}

double NNfunction_sb_sLcR::synapse0x1b145e0() {
   return (neuron0x1b0a7f0()*0.196997);
}

double NNfunction_sb_sLcR::synapse0x1b14620() {
   return (neuron0x1b0ab30()*-0.0177086);
}

double NNfunction_sb_sLcR::synapse0x1b14660() {
   return (neuron0x1b0ae70()*0.494985);
}

double NNfunction_sb_sLcR::synapse0x1b146a0() {
   return (neuron0x1b0b1b0()*0.364283);
}

double NNfunction_sb_sLcR::synapse0x1b146e0() {
   return (neuron0x1b0b4f0()*0.0484953);
}

double NNfunction_sb_sLcR::synapse0x1b14720() {
   return (neuron0x1b0b830()*-0.236373);
}

double NNfunction_sb_sLcR::synapse0x1b14760() {
   return (neuron0x1b0bb70()*0.586479);
}

double NNfunction_sb_sLcR::synapse0x1b2c280() {
   return (neuron0x1b0beb0()*-0.51087);
}

double NNfunction_sb_sLcR::synapse0x1b2c2c0() {
   return (neuron0x1b0c1f0()*-0.198207);
}

double NNfunction_sb_sLcR::synapse0x1b2c300() {
   return (neuron0x1b0c530()*0.780464);
}

double NNfunction_sb_sLcR::synapse0x1b2c340() {
   return (neuron0x1b0c870()*-0.368005);
}

double NNfunction_sb_sLcR::synapse0x1b2c380() {
   return (neuron0x1b0cbb0()*-0.353116);
}

double NNfunction_sb_sLcR::synapse0x1b2c3c0() {
   return (neuron0x1b0cef0()*0.675537);
}

double NNfunction_sb_sLcR::synapse0x1b2c400() {
   return (neuron0x1b0d230()*-0.17683);
}

double NNfunction_sb_sLcR::synapse0x1b2c440() {
   return (neuron0x1b0d570()*-0.698382);
}

double NNfunction_sb_sLcR::synapse0x1b2bcc0() {
   return (neuron0x1b0d8b0()*0.584758);
}

double NNfunction_sb_sLcR::synapse0x1b2bd00() {
   return (neuron0x1b0de10()*-0.158672);
}

double NNfunction_sb_sLcR::synapse0x1b2c590() {
   return (neuron0x1b0e030()*-0.370604);
}

double NNfunction_sb_sLcR::synapse0x1b2c5d0() {
   return (neuron0x1b0e370()*-0.393893);
}

double NNfunction_sb_sLcR::synapse0x1b2c610() {
   return (neuron0x1b0e6b0()*-0.185339);
}

double NNfunction_sb_sLcR::synapse0x1b2c650() {
   return (neuron0x1b0e9f0()*-0.128868);
}

double NNfunction_sb_sLcR::synapse0x1b2c690() {
   return (neuron0x1b0ed30()*0.598521);
}

double NNfunction_sb_sLcR::synapse0x1b2c6d0() {
   return (neuron0x1b0f070()*0.231432);
}

double NNfunction_sb_sLcR::synapse0x1b2ca50() {
   return (neuron0x1b0a4b0()*0.266808);
}

double NNfunction_sb_sLcR::synapse0x1b2ca90() {
   return (neuron0x1b0a7f0()*0.424268);
}

double NNfunction_sb_sLcR::synapse0x1b2cad0() {
   return (neuron0x1b0ab30()*0.0384077);
}

double NNfunction_sb_sLcR::synapse0x1b2cb10() {
   return (neuron0x1b0ae70()*0.367789);
}

double NNfunction_sb_sLcR::synapse0x1b2cb50() {
   return (neuron0x1b0b1b0()*0.328631);
}

double NNfunction_sb_sLcR::synapse0x1b2cb90() {
   return (neuron0x1b0b4f0()*0.16556);
}

double NNfunction_sb_sLcR::synapse0x1b2cbd0() {
   return (neuron0x1b0b830()*0.0406292);
}

double NNfunction_sb_sLcR::synapse0x1b2cc10() {
   return (neuron0x1b0bb70()*-0.0342677);
}

double NNfunction_sb_sLcR::synapse0x1b2cc50() {
   return (neuron0x1b0beb0()*0.990596);
}

double NNfunction_sb_sLcR::synapse0x1b2cc90() {
   return (neuron0x1b0c1f0()*-0.194472);
}

double NNfunction_sb_sLcR::synapse0x1b2ccd0() {
   return (neuron0x1b0c530()*0.04978);
}

double NNfunction_sb_sLcR::synapse0x1b2cd10() {
   return (neuron0x1b0c870()*-0.254457);
}

double NNfunction_sb_sLcR::synapse0x1b2cd50() {
   return (neuron0x1b0cbb0()*0.154088);
}

double NNfunction_sb_sLcR::synapse0x1b2cd90() {
   return (neuron0x1b0cef0()*0.310262);
}

double NNfunction_sb_sLcR::synapse0x1b2cdd0() {
   return (neuron0x1b0d230()*-0.494417);
}

double NNfunction_sb_sLcR::synapse0x1b2ce10() {
   return (neuron0x1b0d570()*-0.966129);
}

double NNfunction_sb_sLcR::synapse0x1b2c8a0() {
   return (neuron0x1b0d8b0()*0.0897146);
}

double NNfunction_sb_sLcR::synapse0x1b2c8e0() {
   return (neuron0x1b0de10()*-0.12946);
}

double NNfunction_sb_sLcR::synapse0x1b2cf60() {
   return (neuron0x1b0e030()*-0.120059);
}

double NNfunction_sb_sLcR::synapse0x1b2cfa0() {
   return (neuron0x1b0e370()*-0.157864);
}

double NNfunction_sb_sLcR::synapse0x1b2cfe0() {
   return (neuron0x1b0e6b0()*-0.0947444);
}

double NNfunction_sb_sLcR::synapse0x1b2d020() {
   return (neuron0x1b0e9f0()*0.0705838);
}

double NNfunction_sb_sLcR::synapse0x1b2d060() {
   return (neuron0x1b0ed30()*0.21867);
}

double NNfunction_sb_sLcR::synapse0x1b2d0a0() {
   return (neuron0x1b0f070()*0.18905);
}

double NNfunction_sb_sLcR::synapse0x1b2d420() {
   return (neuron0x1b0a4b0()*0.00686693);
}

double NNfunction_sb_sLcR::synapse0x1b2d460() {
   return (neuron0x1b0a7f0()*-0.00466915);
}

double NNfunction_sb_sLcR::synapse0x1b2d4a0() {
   return (neuron0x1b0ab30()*0.0186311);
}

double NNfunction_sb_sLcR::synapse0x1b2d4e0() {
   return (neuron0x1b0ae70()*-3.20446);
}

double NNfunction_sb_sLcR::synapse0x1b2d520() {
   return (neuron0x1b0b1b0()*-0.0110794);
}

double NNfunction_sb_sLcR::synapse0x1b2d560() {
   return (neuron0x1b0b4f0()*-0.0111168);
}

double NNfunction_sb_sLcR::synapse0x1b2d5a0() {
   return (neuron0x1b0b830()*-0.0072581);
}

double NNfunction_sb_sLcR::synapse0x1b2d5e0() {
   return (neuron0x1b0bb70()*-0.0101896);
}

double NNfunction_sb_sLcR::synapse0x1b2d620() {
   return (neuron0x1b0beb0()*0.00672098);
}

double NNfunction_sb_sLcR::synapse0x1b2d660() {
   return (neuron0x1b0c1f0()*-0.00497733);
}

double NNfunction_sb_sLcR::synapse0x1b2d6a0() {
   return (neuron0x1b0c530()*-0.00921877);
}

double NNfunction_sb_sLcR::synapse0x1b2d6e0() {
   return (neuron0x1b0c870()*0.00452824);
}

double NNfunction_sb_sLcR::synapse0x1b2d720() {
   return (neuron0x1b0cbb0()*0.0913935);
}

double NNfunction_sb_sLcR::synapse0x1b2d760() {
   return (neuron0x1b0cef0()*-7.54823e-05);
}

double NNfunction_sb_sLcR::synapse0x1b2d7a0() {
   return (neuron0x1b0d230()*-0.00668948);
}

double NNfunction_sb_sLcR::synapse0x1b2d7e0() {
   return (neuron0x1b0d570()*0.277215);
}

double NNfunction_sb_sLcR::synapse0x1b2d270() {
   return (neuron0x1b0d8b0()*-0.0154394);
}

double NNfunction_sb_sLcR::synapse0x1b2d2b0() {
   return (neuron0x1b0de10()*-0.0136373);
}

double NNfunction_sb_sLcR::synapse0x1b1dde0() {
   return (neuron0x1b0e030()*-0.00212906);
}

double NNfunction_sb_sLcR::synapse0x1b1de20() {
   return (neuron0x1b0e370()*0.00394986);
}

double NNfunction_sb_sLcR::synapse0x1b1de60() {
   return (neuron0x1b0e6b0()*-0.00336154);
}

double NNfunction_sb_sLcR::synapse0x1b1dea0() {
   return (neuron0x1b0e9f0()*0.00219607);
}

double NNfunction_sb_sLcR::synapse0x1b1dee0() {
   return (neuron0x1b0ed30()*-0.00259154);
}

double NNfunction_sb_sLcR::synapse0x1b1df20() {
   return (neuron0x1b0f070()*-0.00351824);
}

double NNfunction_sb_sLcR::synapse0x1b1e2a0() {
   return (neuron0x1b0a4b0()*-0.203042);
}

double NNfunction_sb_sLcR::synapse0x1b1e2e0() {
   return (neuron0x1b0a7f0()*0.317191);
}

double NNfunction_sb_sLcR::synapse0x1b1e320() {
   return (neuron0x1b0ab30()*0.379298);
}

double NNfunction_sb_sLcR::synapse0x1b1e360() {
   return (neuron0x1b0ae70()*-0.345562);
}

double NNfunction_sb_sLcR::synapse0x1b1e3a0() {
   return (neuron0x1b0b1b0()*0.498313);
}

double NNfunction_sb_sLcR::synapse0x1b1e3e0() {
   return (neuron0x1b0b4f0()*-1.0333);
}

double NNfunction_sb_sLcR::synapse0x1b1e420() {
   return (neuron0x1b0b830()*0.21842);
}

double NNfunction_sb_sLcR::synapse0x1b1e460() {
   return (neuron0x1b0bb70()*-0.442766);
}

double NNfunction_sb_sLcR::synapse0x1b1e4a0() {
   return (neuron0x1b0beb0()*-0.280109);
}

double NNfunction_sb_sLcR::synapse0x1b1e4e0() {
   return (neuron0x1b0c1f0()*0.144476);
}

double NNfunction_sb_sLcR::synapse0x1b1e520() {
   return (neuron0x1b0c530()*-0.0551915);
}

double NNfunction_sb_sLcR::synapse0x1b1e560() {
   return (neuron0x1b0c870()*-0.393111);
}

double NNfunction_sb_sLcR::synapse0x1b1e5a0() {
   return (neuron0x1b0cbb0()*-0.0179911);
}

double NNfunction_sb_sLcR::synapse0x1b1e5e0() {
   return (neuron0x1b0cef0()*-0.146074);
}

double NNfunction_sb_sLcR::synapse0x1b1e620() {
   return (neuron0x1b0d230()*-0.009866);
}

double NNfunction_sb_sLcR::synapse0x1b1e660() {
   return (neuron0x1b0d570()*0.315785);
}

double NNfunction_sb_sLcR::synapse0x1b1e0f0() {
   return (neuron0x1b0d8b0()*0.0772943);
}

double NNfunction_sb_sLcR::synapse0x1b1e130() {
   return (neuron0x1b0de10()*-0.239185);
}

double NNfunction_sb_sLcR::synapse0x1b1e7b0() {
   return (neuron0x1b0e030()*0.050699);
}

double NNfunction_sb_sLcR::synapse0x1b1e7f0() {
   return (neuron0x1b0e370()*0.00446536);
}

double NNfunction_sb_sLcR::synapse0x1b1e830() {
   return (neuron0x1b0e6b0()*0.179226);
}

double NNfunction_sb_sLcR::synapse0x1b1e870() {
   return (neuron0x1b0e9f0()*0.167749);
}

double NNfunction_sb_sLcR::synapse0x1b1e8b0() {
   return (neuron0x1b0ed30()*-0.00441919);
}

double NNfunction_sb_sLcR::synapse0x1b1e8f0() {
   return (neuron0x1b0f070()*0.249023);
}

double NNfunction_sb_sLcR::synapse0x1b1ec70() {
   return (neuron0x1b0a4b0()*0.0383706);
}

double NNfunction_sb_sLcR::synapse0x1b1ecb0() {
   return (neuron0x1b0a7f0()*0.116064);
}

double NNfunction_sb_sLcR::synapse0x1b1ecf0() {
   return (neuron0x1b0ab30()*0.0619836);
}

double NNfunction_sb_sLcR::synapse0x1b1ed30() {
   return (neuron0x1b0ae70()*-3.71887);
}

double NNfunction_sb_sLcR::synapse0x1b1ed70() {
   return (neuron0x1b0b1b0()*0.141567);
}

double NNfunction_sb_sLcR::synapse0x1b1edb0() {
   return (neuron0x1b0b4f0()*0.064054);
}

double NNfunction_sb_sLcR::synapse0x1b1edf0() {
   return (neuron0x1b0b830()*-0.0111428);
}

double NNfunction_sb_sLcR::synapse0x1b1ee30() {
   return (neuron0x1b0bb70()*-0.0876159);
}

double NNfunction_sb_sLcR::synapse0x1b1ee70() {
   return (neuron0x1b0beb0()*0.0151768);
}

double NNfunction_sb_sLcR::synapse0x1b1eeb0() {
   return (neuron0x1b0c1f0()*0.0946404);
}

double NNfunction_sb_sLcR::synapse0x1b1eef0() {
   return (neuron0x1b0c530()*-0.0479982);
}

double NNfunction_sb_sLcR::synapse0x1b1ef30() {
   return (neuron0x1b0c870()*0.0451873);
}

double NNfunction_sb_sLcR::synapse0x1b1ef70() {
   return (neuron0x1b0cbb0()*-0.167579);
}

double NNfunction_sb_sLcR::synapse0x1b1efb0() {
   return (neuron0x1b0cef0()*0.0457846);
}

double NNfunction_sb_sLcR::synapse0x1b1eff0() {
   return (neuron0x1b0d230()*0.104918);
}

double NNfunction_sb_sLcR::synapse0x1b1f030() {
   return (neuron0x1b0d570()*-0.302375);
}

double NNfunction_sb_sLcR::synapse0x1b1eac0() {
   return (neuron0x1b0d8b0()*-0.0131874);
}

double NNfunction_sb_sLcR::synapse0x1b1eb00() {
   return (neuron0x1b0de10()*0.0896441);
}

double NNfunction_sb_sLcR::synapse0x1b1f180() {
   return (neuron0x1b0e030()*-0.012746);
}

double NNfunction_sb_sLcR::synapse0x1b1f1c0() {
   return (neuron0x1b0e370()*-0.067905);
}

double NNfunction_sb_sLcR::synapse0x1b1f200() {
   return (neuron0x1b0e6b0()*0.0372521);
}

double NNfunction_sb_sLcR::synapse0x1b1f240() {
   return (neuron0x1b0e9f0()*-0.0225644);
}

double NNfunction_sb_sLcR::synapse0x1b1f280() {
   return (neuron0x1b0ed30()*0.0159635);
}

double NNfunction_sb_sLcR::synapse0x1b1f2c0() {
   return (neuron0x1b0f070()*0.101132);
}

double NNfunction_sb_sLcR::synapse0x1b1f640() {
   return (neuron0x1b0a4b0()*-0.308368);
}

double NNfunction_sb_sLcR::synapse0x1b1f680() {
   return (neuron0x1b0a7f0()*0.00051933);
}

double NNfunction_sb_sLcR::synapse0x1b1f6c0() {
   return (neuron0x1b0ab30()*0.234679);
}

double NNfunction_sb_sLcR::synapse0x1b1f700() {
   return (neuron0x1b0ae70()*0.211342);
}

double NNfunction_sb_sLcR::synapse0x1b1f740() {
   return (neuron0x1b0b1b0()*-0.471296);
}

double NNfunction_sb_sLcR::synapse0x1b1f780() {
   return (neuron0x1b0b4f0()*0.343031);
}

double NNfunction_sb_sLcR::synapse0x1b1f7c0() {
   return (neuron0x1b0b830()*0.903124);
}

double NNfunction_sb_sLcR::synapse0x1b1f800() {
   return (neuron0x1b0bb70()*-0.0827517);
}

double NNfunction_sb_sLcR::synapse0x1b1f840() {
   return (neuron0x1b0beb0()*-0.180238);
}

double NNfunction_sb_sLcR::synapse0x1b1f880() {
   return (neuron0x1b0c1f0()*0.374328);
}

double NNfunction_sb_sLcR::synapse0x1b1f8c0() {
   return (neuron0x1b0c530()*0.295798);
}

double NNfunction_sb_sLcR::synapse0x1b1f900() {
   return (neuron0x1b0c870()*0.0881373);
}

double NNfunction_sb_sLcR::synapse0x1b1f940() {
   return (neuron0x1b0cbb0()*0.219618);
}

double NNfunction_sb_sLcR::synapse0x1b1f980() {
   return (neuron0x1b0cef0()*0.0447245);
}

double NNfunction_sb_sLcR::synapse0x1b1f9c0() {
   return (neuron0x1b0d230()*0.426649);
}

double NNfunction_sb_sLcR::synapse0x1b1fa00() {
   return (neuron0x1b0d570()*-0.301031);
}

double NNfunction_sb_sLcR::synapse0x1b1f490() {
   return (neuron0x1b0d8b0()*0.21294);
}

double NNfunction_sb_sLcR::synapse0x1b1f4d0() {
   return (neuron0x1b0de10()*-0.25679);
}

double NNfunction_sb_sLcR::synapse0x1b1fb50() {
   return (neuron0x1b0e030()*0.225501);
}

double NNfunction_sb_sLcR::synapse0x1b1fb90() {
   return (neuron0x1b0e370()*-0.150625);
}

double NNfunction_sb_sLcR::synapse0x1b1fbd0() {
   return (neuron0x1b0e6b0()*0.29329);
}

double NNfunction_sb_sLcR::synapse0x1b1fc10() {
   return (neuron0x1b0e9f0()*0.0638494);
}

double NNfunction_sb_sLcR::synapse0x1b1fc50() {
   return (neuron0x1b0ed30()*-0.103526);
}

double NNfunction_sb_sLcR::synapse0x1b1fc90() {
   return (neuron0x1b0f070()*0.176714);
}

double NNfunction_sb_sLcR::synapse0x1b31b60() {
   return (neuron0x1b0a4b0()*-0.313022);
}

double NNfunction_sb_sLcR::synapse0x1b31ba0() {
   return (neuron0x1b0a7f0()*0.245012);
}

double NNfunction_sb_sLcR::synapse0x1b31be0() {
   return (neuron0x1b0ab30()*-0.15585);
}

double NNfunction_sb_sLcR::synapse0x1b31c20() {
   return (neuron0x1b0ae70()*-0.551822);
}

double NNfunction_sb_sLcR::synapse0x1b31c60() {
   return (neuron0x1b0b1b0()*-0.139936);
}

double NNfunction_sb_sLcR::synapse0x1b31ca0() {
   return (neuron0x1b0b4f0()*0.00441518);
}

double NNfunction_sb_sLcR::synapse0x1b31ce0() {
   return (neuron0x1b0b830()*0.008012);
}

double NNfunction_sb_sLcR::synapse0x1b31d20() {
   return (neuron0x1b0bb70()*-0.0217996);
}

double NNfunction_sb_sLcR::synapse0x1b31d60() {
   return (neuron0x1b0beb0()*0.305444);
}

double NNfunction_sb_sLcR::synapse0x1b31da0() {
   return (neuron0x1b0c1f0()*0.00236363);
}

double NNfunction_sb_sLcR::synapse0x1b31de0() {
   return (neuron0x1b0c530()*-0.095394);
}

double NNfunction_sb_sLcR::synapse0x1b31e20() {
   return (neuron0x1b0c870()*0.909616);
}

double NNfunction_sb_sLcR::synapse0x1b31e60() {
   return (neuron0x1b0cbb0()*0.0628089);
}

double NNfunction_sb_sLcR::synapse0x1b31ea0() {
   return (neuron0x1b0cef0()*-0.156553);
}

double NNfunction_sb_sLcR::synapse0x1b31ee0() {
   return (neuron0x1b0d230()*0.147055);
}

double NNfunction_sb_sLcR::synapse0x1b31f20() {
   return (neuron0x1b0d570()*-0.578084);
}

double NNfunction_sb_sLcR::synapse0x1b1fcd0() {
   return (neuron0x1b0d8b0()*0.0852244);
}

double NNfunction_sb_sLcR::synapse0x1b1fd10() {
   return (neuron0x1b0de10()*-0.0899765);
}

double NNfunction_sb_sLcR::synapse0x1b32070() {
   return (neuron0x1b0e030()*-0.596296);
}

double NNfunction_sb_sLcR::synapse0x1b320b0() {
   return (neuron0x1b0e370()*0.366505);
}

double NNfunction_sb_sLcR::synapse0x1b320f0() {
   return (neuron0x1b0e6b0()*0.022365);
}

double NNfunction_sb_sLcR::synapse0x1b32130() {
   return (neuron0x1b0e9f0()*0.400709);
}

double NNfunction_sb_sLcR::synapse0x1b32170() {
   return (neuron0x1b0ed30()*0.0587391);
}

double NNfunction_sb_sLcR::synapse0x1b321b0() {
   return (neuron0x1b0f070()*-0.349131);
}

double NNfunction_sb_sLcR::synapse0x1b32530() {
   return (neuron0x1b0a4b0()*-0.0045693);
}

double NNfunction_sb_sLcR::synapse0x1b32570() {
   return (neuron0x1b0a7f0()*-0.0114573);
}

double NNfunction_sb_sLcR::synapse0x1b325b0() {
   return (neuron0x1b0ab30()*-0.00255138);
}

double NNfunction_sb_sLcR::synapse0x1b325f0() {
   return (neuron0x1b0ae70()*-2.09133);
}

double NNfunction_sb_sLcR::synapse0x1b32630() {
   return (neuron0x1b0b1b0()*-0.0125602);
}

double NNfunction_sb_sLcR::synapse0x1b32670() {
   return (neuron0x1b0b4f0()*-0.00584791);
}

double NNfunction_sb_sLcR::synapse0x1b326b0() {
   return (neuron0x1b0b830()*-0.00873966);
}

double NNfunction_sb_sLcR::synapse0x1b326f0() {
   return (neuron0x1b0bb70()*-0.00446066);
}

double NNfunction_sb_sLcR::synapse0x1b32730() {
   return (neuron0x1b0beb0()*-0.00476359);
}

double NNfunction_sb_sLcR::synapse0x1b32770() {
   return (neuron0x1b0c1f0()*0.0117791);
}

double NNfunction_sb_sLcR::synapse0x1b327b0() {
   return (neuron0x1b0c530()*-0.00340227);
}

double NNfunction_sb_sLcR::synapse0x1b327f0() {
   return (neuron0x1b0c870()*0.0172842);
}

double NNfunction_sb_sLcR::synapse0x1b32830() {
   return (neuron0x1b0cbb0()*-0.182452);
}

double NNfunction_sb_sLcR::synapse0x1b32870() {
   return (neuron0x1b0cef0()*0.00847343);
}

double NNfunction_sb_sLcR::synapse0x1b328b0() {
   return (neuron0x1b0d230()*0.0063525);
}

double NNfunction_sb_sLcR::synapse0x1b328f0() {
   return (neuron0x1b0d570()*-0.25806);
}

double NNfunction_sb_sLcR::synapse0x1b32380() {
   return (neuron0x1b0d8b0()*-0.00162646);
}

double NNfunction_sb_sLcR::synapse0x1b323c0() {
   return (neuron0x1b0de10()*0.00314838);
}

double NNfunction_sb_sLcR::synapse0x1b32a40() {
   return (neuron0x1b0e030()*-0.00740857);
}

double NNfunction_sb_sLcR::synapse0x1b32a80() {
   return (neuron0x1b0e370()*-0.000689494);
}

double NNfunction_sb_sLcR::synapse0x1b32ac0() {
   return (neuron0x1b0e6b0()*-0.0028971);
}

double NNfunction_sb_sLcR::synapse0x1b32b00() {
   return (neuron0x1b0e9f0()*0.00883634);
}

double NNfunction_sb_sLcR::synapse0x1b32b40() {
   return (neuron0x1b0ed30()*0.00449015);
}

double NNfunction_sb_sLcR::synapse0x1b32b80() {
   return (neuron0x1b0f070()*0.00802541);
}

double NNfunction_sb_sLcR::synapse0x1b32f00() {
   return (neuron0x1b0a4b0()*-0.028203);
}

double NNfunction_sb_sLcR::synapse0x1b32f40() {
   return (neuron0x1b0a7f0()*0.152631);
}

double NNfunction_sb_sLcR::synapse0x1b32f80() {
   return (neuron0x1b0ab30()*0.0206367);
}

double NNfunction_sb_sLcR::synapse0x1b32fc0() {
   return (neuron0x1b0ae70()*-0.946696);
}

double NNfunction_sb_sLcR::synapse0x1b33000() {
   return (neuron0x1b0b1b0()*0.0658754);
}

double NNfunction_sb_sLcR::synapse0x1b33040() {
   return (neuron0x1b0b4f0()*0.0721231);
}

double NNfunction_sb_sLcR::synapse0x1b33080() {
   return (neuron0x1b0b830()*0.0438404);
}

double NNfunction_sb_sLcR::synapse0x1b330c0() {
   return (neuron0x1b0bb70()*0.105253);
}

double NNfunction_sb_sLcR::synapse0x1b33100() {
   return (neuron0x1b0beb0()*0.0277205);
}

double NNfunction_sb_sLcR::synapse0x1b33140() {
   return (neuron0x1b0c1f0()*-0.0156824);
}

double NNfunction_sb_sLcR::synapse0x1b33180() {
   return (neuron0x1b0c530()*-0.0106308);
}

double NNfunction_sb_sLcR::synapse0x1b331c0() {
   return (neuron0x1b0c870()*-0.0437412);
}

double NNfunction_sb_sLcR::synapse0x1b33200() {
   return (neuron0x1b0cbb0()*0.424519);
}

double NNfunction_sb_sLcR::synapse0x1b33240() {
   return (neuron0x1b0cef0()*0.024588);
}

double NNfunction_sb_sLcR::synapse0x1b33280() {
   return (neuron0x1b0d230()*-0.0317612);
}

double NNfunction_sb_sLcR::synapse0x1b332c0() {
   return (neuron0x1b0d570()*0.604897);
}

double NNfunction_sb_sLcR::synapse0x1b32d50() {
   return (neuron0x1b0d8b0()*0.0470628);
}

double NNfunction_sb_sLcR::synapse0x1b32d90() {
   return (neuron0x1b0de10()*0.0199175);
}

double NNfunction_sb_sLcR::synapse0x1b33410() {
   return (neuron0x1b0e030()*0.125993);
}

double NNfunction_sb_sLcR::synapse0x1b33450() {
   return (neuron0x1b0e370()*-0.0595288);
}

double NNfunction_sb_sLcR::synapse0x1b33490() {
   return (neuron0x1b0e6b0()*-0.0111929);
}

double NNfunction_sb_sLcR::synapse0x1b334d0() {
   return (neuron0x1b0e9f0()*-0.0590514);
}

double NNfunction_sb_sLcR::synapse0x1b33510() {
   return (neuron0x1b0ed30()*0.0366589);
}

double NNfunction_sb_sLcR::synapse0x1b33550() {
   return (neuron0x1b0f070()*-0.0282826);
}

double NNfunction_sb_sLcR::synapse0x1b338d0() {
   return (neuron0x1b0a4b0()*-0.0352412);
}

double NNfunction_sb_sLcR::synapse0x1b33910() {
   return (neuron0x1b0a7f0()*0.0343539);
}

double NNfunction_sb_sLcR::synapse0x1b33950() {
   return (neuron0x1b0ab30()*-0.136764);
}

double NNfunction_sb_sLcR::synapse0x1b33990() {
   return (neuron0x1b0ae70()*0.323324);
}

double NNfunction_sb_sLcR::synapse0x1b339d0() {
   return (neuron0x1b0b1b0()*0.0191579);
}

double NNfunction_sb_sLcR::synapse0x1b33a10() {
   return (neuron0x1b0b4f0()*0.0240979);
}

double NNfunction_sb_sLcR::synapse0x1b33a50() {
   return (neuron0x1b0b830()*-0.0262119);
}

double NNfunction_sb_sLcR::synapse0x1b33a90() {
   return (neuron0x1b0bb70()*-0.00315761);
}

double NNfunction_sb_sLcR::synapse0x1b33ad0() {
   return (neuron0x1b0beb0()*-0.0399993);
}

double NNfunction_sb_sLcR::synapse0x1b33b10() {
   return (neuron0x1b0c1f0()*0.0333525);
}

double NNfunction_sb_sLcR::synapse0x1b33b50() {
   return (neuron0x1b0c530()*-0.09272);
}

double NNfunction_sb_sLcR::synapse0x1b33b90() {
   return (neuron0x1b0c870()*0.258704);
}

double NNfunction_sb_sLcR::synapse0x1b33bd0() {
   return (neuron0x1b0cbb0()*0.284112);
}

double NNfunction_sb_sLcR::synapse0x1b33c10() {
   return (neuron0x1b0cef0()*0.03224);
}

double NNfunction_sb_sLcR::synapse0x1b33c50() {
   return (neuron0x1b0d230()*0.10991);
}

double NNfunction_sb_sLcR::synapse0x1b33c90() {
   return (neuron0x1b0d570()*0.102912);
}

double NNfunction_sb_sLcR::synapse0x1b33720() {
   return (neuron0x1b0d8b0()*-0.0147769);
}

double NNfunction_sb_sLcR::synapse0x1b33760() {
   return (neuron0x1b0de10()*0.16209);
}

double NNfunction_sb_sLcR::synapse0x1b33de0() {
   return (neuron0x1b0e030()*0.120172);
}

double NNfunction_sb_sLcR::synapse0x1b33e20() {
   return (neuron0x1b0e370()*-0.0799307);
}

double NNfunction_sb_sLcR::synapse0x1b33e60() {
   return (neuron0x1b0e6b0()*-0.00582821);
}

double NNfunction_sb_sLcR::synapse0x1b33ea0() {
   return (neuron0x1b0e9f0()*0.0150838);
}

double NNfunction_sb_sLcR::synapse0x1b33ee0() {
   return (neuron0x1b0ed30()*0.0267606);
}

double NNfunction_sb_sLcR::synapse0x1b33f20() {
   return (neuron0x1b0f070()*0.0227492);
}

double NNfunction_sb_sLcR::synapse0x1b104c0() {
   return (neuron0x1b0f510()*0.10197);
}

double NNfunction_sb_sLcR::synapse0x1b10500() {
   return (neuron0x1b0fe20()*0.486432);
}

double NNfunction_sb_sLcR::synapse0x1b119d0() {
   return (neuron0x1b10900()*0.641705);
}

double NNfunction_sb_sLcR::synapse0x1b11a10() {
   return (neuron0x18ca190()*0.375135);
}

double NNfunction_sb_sLcR::synapse0x1b123a0() {
   return (neuron0x1b11720()*-0.0834894);
}

double NNfunction_sb_sLcR::synapse0x1b123e0() {
   return (neuron0x1b120f0()*-0.169602);
}

double NNfunction_sb_sLcR::synapse0x1b13170() {
   return (neuron0x1b12ec0()*0.587944);
}

double NNfunction_sb_sLcR::synapse0x1b131b0() {
   return (neuron0x1b13890()*-0.0707406);
}

double NNfunction_sb_sLcR::synapse0x1b13b40() {
   return (neuron0x1b14260()*-0.18349);
}

double NNfunction_sb_sLcR::synapse0x1b13b80() {
   return (neuron0x1b14d40()*0.64613);
}

double NNfunction_sb_sLcR::synapse0x1b14510() {
   return (neuron0x1b15710()*0.104083);
}

double NNfunction_sb_sLcR::synapse0x1b14550() {
   return (neuron0x1b127f0()*0.142284);
}

double NNfunction_sb_sLcR::synapse0x1b14ff0() {
   return (neuron0x1b172c0()*0.770146);
}

double NNfunction_sb_sLcR::synapse0x1b15030() {
   return (neuron0x1b17c90()*0.0158298);
}

double NNfunction_sb_sLcR::synapse0x1b159c0() {
   return (neuron0x1b18660()*0.237637);
}

double NNfunction_sb_sLcR::synapse0x1b15a00() {
   return (neuron0x1b19030()*0.157276);
}

double NNfunction_sb_sLcR::synapse0x1b12aa0() {
   return (neuron0x1b1ae40()*0.3502);
}

double NNfunction_sb_sLcR::synapse0x1b12ae0() {
   return (neuron0x1b1b120()*0.133215);
}

double NNfunction_sb_sLcR::synapse0x1b17570() {
   return (neuron0x1b1baf0()*0.29859);
}

double NNfunction_sb_sLcR::synapse0x1b175b0() {
   return (neuron0x1b1c4c0()*0.322902);
}

double NNfunction_sb_sLcR::synapse0x1b17f40() {
   return (neuron0x1b1ce90()*0.689739);
}

double NNfunction_sb_sLcR::synapse0x1b17f80() {
   return (neuron0x1b1d860()*0.170015);
}

double NNfunction_sb_sLcR::synapse0x1b18910() {
   return (neuron0x1b163b0()*-0.1636);
}

double NNfunction_sb_sLcR::synapse0x1b18950() {
   return (neuron0x1b16d80()*0.333406);
}

double NNfunction_sb_sLcR::synapse0x1b192e0() {
   return (neuron0x1b205f0()*0.363603);
}

double NNfunction_sb_sLcR::synapse0x1b19320() {
   return (neuron0x1b20fc0()*0.125055);
}

double NNfunction_sb_sLcR::synapse0x1b0d450() {
   return (neuron0x1b21990()*0.273648);
}

double NNfunction_sb_sLcR::synapse0x1b0d490() {
   return (neuron0x1b22360()*-0.107032);
}

double NNfunction_sb_sLcR::synapse0x1b1b3d0() {
   return (neuron0x1b22d30()*0.24411);
}

double NNfunction_sb_sLcR::synapse0x1b1b410() {
   return (neuron0x1b23700()*-0.127018);
}

double NNfunction_sb_sLcR::synapse0x1b1bda0() {
   return (neuron0x1b240d0()*0.394288);
}

double NNfunction_sb_sLcR::synapse0x1b1bde0() {
   return (neuron0x1b24aa0()*-0.191998);
}

double NNfunction_sb_sLcR::synapse0x1b1c770() {
   return (neuron0x1b1ab30()*0.533702);
}

double NNfunction_sb_sLcR::synapse0x1b1c7b0() {
   return (neuron0x1b27680()*0.267913);
}

double NNfunction_sb_sLcR::synapse0x1b1d140() {
   return (neuron0x1b28050()*0.339748);
}

double NNfunction_sb_sLcR::synapse0x1b1d180() {
   return (neuron0x1b28a20()*0.622105);
}

double NNfunction_sb_sLcR::synapse0x1b1db10() {
   return (neuron0x1b293f0()*-0.460489);
}

double NNfunction_sb_sLcR::synapse0x1b1db50() {
   return (neuron0x1b29dc0()*-0.0261287);
}

double NNfunction_sb_sLcR::synapse0x1b16660() {
   return (neuron0x1b2a790()*0.123354);
}

double NNfunction_sb_sLcR::synapse0x1b166a0() {
   return (neuron0x1b2b160()*0.0475085);
}

double NNfunction_sb_sLcR::synapse0x1b1ff10() {
   return (neuron0x1b2bb30()*0.353785);
}

double NNfunction_sb_sLcR::synapse0x1b1ff50() {
   return (neuron0x1b2c710()*0.0617207);
}

double NNfunction_sb_sLcR::synapse0x1b208a0() {
   return (neuron0x1b2d0e0()*0.217484);
}

double NNfunction_sb_sLcR::synapse0x1b208e0() {
   return (neuron0x1b1df60()*0.395422);
}

double NNfunction_sb_sLcR::synapse0x1b21270() {
   return (neuron0x1b1e930()*0.499007);
}

double NNfunction_sb_sLcR::synapse0x1b212b0() {
   return (neuron0x1b1f300()*0.356948);
}

double NNfunction_sb_sLcR::synapse0x1b21c40() {
   return (neuron0x1b31940()*-0.330214);
}

double NNfunction_sb_sLcR::synapse0x1b21c80() {
   return (neuron0x1b321f0()*-0.0334459);
}

double NNfunction_sb_sLcR::synapse0x1b22610() {
   return (neuron0x1b32bc0()*0.049666);
}

double NNfunction_sb_sLcR::synapse0x1b22650() {
   return (neuron0x1b33590()*0.238224);
}

double NNfunction_sb_sLcR::synapse0x1b24d50() {
   return (neuron0x1b0f510()*-0.926517);
}

double NNfunction_sb_sLcR::synapse0x1b24d90() {
   return (neuron0x1b0fe20()*2.15993);
}

double NNfunction_sb_sLcR::synapse0x1b1a310() {
   return (neuron0x1b10900()*1.05048);
}

double NNfunction_sb_sLcR::synapse0x1b1a350() {
   return (neuron0x18ca190()*0.937214);
}

double NNfunction_sb_sLcR::synapse0x1b27930() {
   return (neuron0x1b11720()*-1.11668);
}

double NNfunction_sb_sLcR::synapse0x1b27970() {
   return (neuron0x1b120f0()*-2.39386);
}

double NNfunction_sb_sLcR::synapse0x1b28300() {
   return (neuron0x1b12ec0()*-0.773828);
}

double NNfunction_sb_sLcR::synapse0x1b28340() {
   return (neuron0x1b13890()*0.796481);
}

double NNfunction_sb_sLcR::synapse0x1b28cd0() {
   return (neuron0x1b14260()*-0.834416);
}

double NNfunction_sb_sLcR::synapse0x1b28d10() {
   return (neuron0x1b14d40()*0.0948047);
}

double NNfunction_sb_sLcR::synapse0x1b296a0() {
   return (neuron0x1b15710()*-1.91024);
}

double NNfunction_sb_sLcR::synapse0x1b296e0() {
   return (neuron0x1b127f0()*-3.47773);
}

double NNfunction_sb_sLcR::synapse0x1b2a070() {
   return (neuron0x1b172c0()*9.76633);
}

double NNfunction_sb_sLcR::synapse0x1b2a0b0() {
   return (neuron0x1b17c90()*-0.577402);
}

double NNfunction_sb_sLcR::synapse0x1b2aa40() {
   return (neuron0x1b18660()*-0.547966);
}

double NNfunction_sb_sLcR::synapse0x1b2aa80() {
   return (neuron0x1b19030()*0.602439);
}

double NNfunction_sb_sLcR::synapse0x1b2b410() {
   return (neuron0x1b1ae40()*0.447436);
}

double NNfunction_sb_sLcR::synapse0x1b2b450() {
   return (neuron0x1b1b120()*0.84139);
}

double NNfunction_sb_sLcR::synapse0x1b2bde0() {
   return (neuron0x1b1baf0()*-1.83076);
}

double NNfunction_sb_sLcR::synapse0x1b2be20() {
   return (neuron0x1b1c4c0()*1.66233);
}

double NNfunction_sb_sLcR::synapse0x1b2c9c0() {
   return (neuron0x1b1ce90()*1.05175);
}

double NNfunction_sb_sLcR::synapse0x1b2ca00() {
   return (neuron0x1b1d860()*-0.591861);
}

double NNfunction_sb_sLcR::synapse0x1b2d390() {
   return (neuron0x1b163b0()*0.85354);
}

double NNfunction_sb_sLcR::synapse0x1b2d3d0() {
   return (neuron0x1b16d80()*-1.2014);
}

double NNfunction_sb_sLcR::synapse0x1b1e210() {
   return (neuron0x1b205f0()*0.863562);
}

double NNfunction_sb_sLcR::synapse0x1b1e250() {
   return (neuron0x1b20fc0()*-1.54506);
}

double NNfunction_sb_sLcR::synapse0x1b1ebe0() {
   return (neuron0x1b21990()*0.953402);
}

double NNfunction_sb_sLcR::synapse0x1b1ec20() {
   return (neuron0x1b22360()*-0.00751488);
}

double NNfunction_sb_sLcR::synapse0x1b1f5b0() {
   return (neuron0x1b22d30()*0.448929);
}

double NNfunction_sb_sLcR::synapse0x1b1f5f0() {
   return (neuron0x1b23700()*-2.34822);
}

double NNfunction_sb_sLcR::synapse0x1b31ad0() {
   return (neuron0x1b240d0()*1.21819);
}

double NNfunction_sb_sLcR::synapse0x1b31b10() {
   return (neuron0x1b24aa0()*-1.04638);
}

double NNfunction_sb_sLcR::synapse0x1b324a0() {
   return (neuron0x1b1ab30()*1.40346);
}

double NNfunction_sb_sLcR::synapse0x1b324e0() {
   return (neuron0x1b27680()*0.842856);
}

double NNfunction_sb_sLcR::synapse0x1b32e70() {
   return (neuron0x1b28050()*1.49389);
}

double NNfunction_sb_sLcR::synapse0x1b32eb0() {
   return (neuron0x1b28a20()*0.579955);
}

double NNfunction_sb_sLcR::synapse0x1b33840() {
   return (neuron0x1b293f0()*-0.908226);
}

double NNfunction_sb_sLcR::synapse0x1b33880() {
   return (neuron0x1b29dc0()*0.708304);
}

double NNfunction_sb_sLcR::synapse0x1b0f730() {
   return (neuron0x1b2a790()*0.528469);
}

double NNfunction_sb_sLcR::synapse0x1b0f770() {
   return (neuron0x1b2b160()*-0.201178);
}

double NNfunction_sb_sLcR::synapse0x1b22fe0() {
   return (neuron0x1b2bb30()*0.48355);
}

double NNfunction_sb_sLcR::synapse0x1b23020() {
   return (neuron0x1b2c710()*0.622919);
}

double NNfunction_sb_sLcR::synapse0x1b33f60() {
   return (neuron0x1b2d0e0()*2.16424);
}

double NNfunction_sb_sLcR::synapse0x1b33fa0() {
   return (neuron0x1b1df60()*0.702117);
}

double NNfunction_sb_sLcR::synapse0x1b33fe0() {
   return (neuron0x1b1e930()*-5.34399);
}

double NNfunction_sb_sLcR::synapse0x1b34020() {
   return (neuron0x1b1f300()*-0.85881);
}

double NNfunction_sb_sLcR::synapse0x1b3aed0() {
   return (neuron0x1b31940()*0.715769);
}

double NNfunction_sb_sLcR::synapse0x1b3af10() {
   return (neuron0x1b321f0()*0.96799);
}

double NNfunction_sb_sLcR::synapse0x1b3af50() {
   return (neuron0x1b32bc0()*0.799104);
}

double NNfunction_sb_sLcR::synapse0x1b3af90() {
   return (neuron0x1b33590()*1.19774);
}

double NNfunction_sb_sLcR::synapse0x1b3b310() {
   return (neuron0x1b0f510()*-0.16655);
}

double NNfunction_sb_sLcR::synapse0x1b3b350() {
   return (neuron0x1b0fe20()*-0.00362475);
}

double NNfunction_sb_sLcR::synapse0x1b3b390() {
   return (neuron0x1b10900()*0.633824);
}

double NNfunction_sb_sLcR::synapse0x1b3b3d0() {
   return (neuron0x18ca190()*0.145238);
}

double NNfunction_sb_sLcR::synapse0x1b3b410() {
   return (neuron0x1b11720()*-0.220163);
}

double NNfunction_sb_sLcR::synapse0x1b3b450() {
   return (neuron0x1b120f0()*-0.530062);
}

double NNfunction_sb_sLcR::synapse0x1b3b490() {
   return (neuron0x1b12ec0()*0.139275);
}

double NNfunction_sb_sLcR::synapse0x1b3b4d0() {
   return (neuron0x1b13890()*-0.721366);
}

double NNfunction_sb_sLcR::synapse0x1b3b510() {
   return (neuron0x1b14260()*-0.132379);
}

double NNfunction_sb_sLcR::synapse0x1b3b550() {
   return (neuron0x1b14d40()*0.266153);
}

double NNfunction_sb_sLcR::synapse0x1b3b590() {
   return (neuron0x1b15710()*-0.392504);
}

double NNfunction_sb_sLcR::synapse0x1b3b5d0() {
   return (neuron0x1b127f0()*-0.955731);
}

double NNfunction_sb_sLcR::synapse0x1b3b610() {
   return (neuron0x1b172c0()*0.0855591);
}

double NNfunction_sb_sLcR::synapse0x1b3b650() {
   return (neuron0x1b17c90()*-0.0530743);
}

double NNfunction_sb_sLcR::synapse0x1b3b690() {
   return (neuron0x1b18660()*-0.0902957);
}

double NNfunction_sb_sLcR::synapse0x1b3b6d0() {
   return (neuron0x1b19030()*-0.0122198);
}

double NNfunction_sb_sLcR::synapse0x1b3b160() {
   return (neuron0x1b1ae40()*-0.0364973);
}

double NNfunction_sb_sLcR::synapse0x1b3b1a0() {
   return (neuron0x1b1b120()*-0.396044);
}

double NNfunction_sb_sLcR::synapse0x1b3b820() {
   return (neuron0x1b1baf0()*0.790066);
}

double NNfunction_sb_sLcR::synapse0x1b3b860() {
   return (neuron0x1b1c4c0()*-0.588405);
}

double NNfunction_sb_sLcR::synapse0x1b3b8a0() {
   return (neuron0x1b1ce90()*0.42755);
}

double NNfunction_sb_sLcR::synapse0x1b3b8e0() {
   return (neuron0x1b1d860()*-0.090729);
}

double NNfunction_sb_sLcR::synapse0x1b3b920() {
   return (neuron0x1b163b0()*-0.0310815);
}

double NNfunction_sb_sLcR::synapse0x1b3b960() {
   return (neuron0x1b16d80()*-0.651587);
}

double NNfunction_sb_sLcR::synapse0x1b3b9a0() {
   return (neuron0x1b205f0()*-0.0141484);
}

double NNfunction_sb_sLcR::synapse0x1b3b9e0() {
   return (neuron0x1b20fc0()*0.210418);
}

double NNfunction_sb_sLcR::synapse0x1b3ba20() {
   return (neuron0x1b21990()*0.382782);
}

double NNfunction_sb_sLcR::synapse0x1b3ba60() {
   return (neuron0x1b22360()*-0.82726);
}

double NNfunction_sb_sLcR::synapse0x1b3baa0() {
   return (neuron0x1b22d30()*0.172296);
}

double NNfunction_sb_sLcR::synapse0x1b3bae0() {
   return (neuron0x1b23700()*-1.05859);
}

double NNfunction_sb_sLcR::synapse0x1b3bb20() {
   return (neuron0x1b240d0()*-0.158015);
}

double NNfunction_sb_sLcR::synapse0x1b3bb60() {
   return (neuron0x1b24aa0()*-0.135901);
}

double NNfunction_sb_sLcR::synapse0x1b3b710() {
   return (neuron0x1b1ab30()*-0.000753463);
}

double NNfunction_sb_sLcR::synapse0x1b3b750() {
   return (neuron0x1b27680()*0.0785087);
}

double NNfunction_sb_sLcR::synapse0x1b3b790() {
   return (neuron0x1b28050()*-0.133278);
}

double NNfunction_sb_sLcR::synapse0x1b3b7d0() {
   return (neuron0x1b28a20()*0.0404987);
}

double NNfunction_sb_sLcR::synapse0x1b3bdb0() {
   return (neuron0x1b293f0()*-0.0854298);
}

double NNfunction_sb_sLcR::synapse0x1b3bdf0() {
   return (neuron0x1b29dc0()*0.738767);
}

double NNfunction_sb_sLcR::synapse0x1b3be30() {
   return (neuron0x1b2a790()*-0.013775);
}

double NNfunction_sb_sLcR::synapse0x1b3be70() {
   return (neuron0x1b2b160()*0.0121883);
}

double NNfunction_sb_sLcR::synapse0x1b3beb0() {
   return (neuron0x1b2bb30()*-0.00333556);
}

double NNfunction_sb_sLcR::synapse0x1b3bef0() {
   return (neuron0x1b2c710()*-0.104948);
}

double NNfunction_sb_sLcR::synapse0x1b3bf30() {
   return (neuron0x1b2d0e0()*1.78072);
}

double NNfunction_sb_sLcR::synapse0x1b3bf70() {
   return (neuron0x1b1df60()*-0.144472);
}

double NNfunction_sb_sLcR::synapse0x1b3bfb0() {
   return (neuron0x1b1e930()*-1.11011);
}

double NNfunction_sb_sLcR::synapse0x1b3bff0() {
   return (neuron0x1b1f300()*-0.0824482);
}

double NNfunction_sb_sLcR::synapse0x1b3c030() {
   return (neuron0x1b31940()*-0.0757993);
}

double NNfunction_sb_sLcR::synapse0x1b3c070() {
   return (neuron0x1b321f0()*-0.191668);
}

double NNfunction_sb_sLcR::synapse0x1b3c0b0() {
   return (neuron0x1b32bc0()*-0.0768508);
}

double NNfunction_sb_sLcR::synapse0x1b3c0f0() {
   return (neuron0x1b33590()*0.194943);
}

double NNfunction_sb_sLcR::synapse0x1b3c470() {
   return (neuron0x1b0f510()*-0.960177);
}

double NNfunction_sb_sLcR::synapse0x1b3c4b0() {
   return (neuron0x1b0fe20()*1.07807);
}

double NNfunction_sb_sLcR::synapse0x1b3c4f0() {
   return (neuron0x1b10900()*1.10558);
}

double NNfunction_sb_sLcR::synapse0x1b3c530() {
   return (neuron0x18ca190()*0.810604);
}

double NNfunction_sb_sLcR::synapse0x1b3c570() {
   return (neuron0x1b11720()*-0.595358);
}

double NNfunction_sb_sLcR::synapse0x1b3c5b0() {
   return (neuron0x1b120f0()*-2.42683);
}

double NNfunction_sb_sLcR::synapse0x1b3c5f0() {
   return (neuron0x1b12ec0()*-0.391239);
}

double NNfunction_sb_sLcR::synapse0x1b3c630() {
   return (neuron0x1b13890()*2.89449);
}

double NNfunction_sb_sLcR::synapse0x1b3c670() {
   return (neuron0x1b14260()*-0.53234);
}

double NNfunction_sb_sLcR::synapse0x1b3c6b0() {
   return (neuron0x1b14d40()*1.18799);
}

double NNfunction_sb_sLcR::synapse0x1b3c6f0() {
   return (neuron0x1b15710()*-1.6217);
}

double NNfunction_sb_sLcR::synapse0x1b3c730() {
   return (neuron0x1b127f0()*-4.21068);
}

double NNfunction_sb_sLcR::synapse0x1b3c770() {
   return (neuron0x1b172c0()*2.92557);
}

double NNfunction_sb_sLcR::synapse0x1b3c7b0() {
   return (neuron0x1b17c90()*-0.661651);
}

double NNfunction_sb_sLcR::synapse0x1b3c7f0() {
   return (neuron0x1b18660()*-0.523661);
}

double NNfunction_sb_sLcR::synapse0x1b3c830() {
   return (neuron0x1b19030()*0.487348);
}

double NNfunction_sb_sLcR::synapse0x1b3c2c0() {
   return (neuron0x1b1ae40()*0.288953);
}

double NNfunction_sb_sLcR::synapse0x1b3c300() {
   return (neuron0x1b1b120()*-0.984141);
}

double NNfunction_sb_sLcR::synapse0x1b3c980() {
   return (neuron0x1b1baf0()*0.71836);
}

double NNfunction_sb_sLcR::synapse0x1b3c9c0() {
   return (neuron0x1b1c4c0()*2.04593);
}

double NNfunction_sb_sLcR::synapse0x1b3ca00() {
   return (neuron0x1b1ce90()*1.75465);
}

double NNfunction_sb_sLcR::synapse0x1b3ca40() {
   return (neuron0x1b1d860()*-0.524105);
}

double NNfunction_sb_sLcR::synapse0x1b3ca80() {
   return (neuron0x1b163b0()*0.713035);
}

double NNfunction_sb_sLcR::synapse0x1b3cac0() {
   return (neuron0x1b16d80()*1.84546);
}

double NNfunction_sb_sLcR::synapse0x1b3cb00() {
   return (neuron0x1b205f0()*0.446703);
}

double NNfunction_sb_sLcR::synapse0x1b3cb40() {
   return (neuron0x1b20fc0()*-2.00306);
}

double NNfunction_sb_sLcR::synapse0x1b3cb80() {
   return (neuron0x1b21990()*-2.11792);
}

double NNfunction_sb_sLcR::synapse0x1b3cbc0() {
   return (neuron0x1b22360()*-2.37132);
}

double NNfunction_sb_sLcR::synapse0x1b3cc00() {
   return (neuron0x1b22d30()*0.363209);
}

double NNfunction_sb_sLcR::synapse0x1b3cc40() {
   return (neuron0x1b23700()*0.197502);
}

double NNfunction_sb_sLcR::synapse0x1b3cc80() {
   return (neuron0x1b240d0()*0.973979);
}

double NNfunction_sb_sLcR::synapse0x1b3ccc0() {
   return (neuron0x1b24aa0()*-0.0643729);
}

double NNfunction_sb_sLcR::synapse0x1b3c870() {
   return (neuron0x1b1ab30()*1.19533);
}

double NNfunction_sb_sLcR::synapse0x1b3c8b0() {
   return (neuron0x1b27680()*0.961554);
}

double NNfunction_sb_sLcR::synapse0x1b3c8f0() {
   return (neuron0x1b28050()*6.39243);
}

double NNfunction_sb_sLcR::synapse0x1b3c930() {
   return (neuron0x1b28a20()*0.384509);
}

double NNfunction_sb_sLcR::synapse0x1b3cf10() {
   return (neuron0x1b293f0()*0.519423);
}

double NNfunction_sb_sLcR::synapse0x1b3cf50() {
   return (neuron0x1b29dc0()*-2.23697);
}

double NNfunction_sb_sLcR::synapse0x1b3cf90() {
   return (neuron0x1b2a790()*0.384673);
}

double NNfunction_sb_sLcR::synapse0x1b3cfd0() {
   return (neuron0x1b2b160()*-0.485785);
}

double NNfunction_sb_sLcR::synapse0x1b3d010() {
   return (neuron0x1b2bb30()*0.499382);
}

double NNfunction_sb_sLcR::synapse0x1b3d050() {
   return (neuron0x1b2c710()*0.566138);
}

double NNfunction_sb_sLcR::synapse0x1b3d090() {
   return (neuron0x1b2d0e0()*8.59794);
}

double NNfunction_sb_sLcR::synapse0x1b3d0d0() {
   return (neuron0x1b1df60()*0.388864);
}

double NNfunction_sb_sLcR::synapse0x1b3d110() {
   return (neuron0x1b1e930()*-4.47945);
}

double NNfunction_sb_sLcR::synapse0x1b3d150() {
   return (neuron0x1b1f300()*-0.898217);
}

double NNfunction_sb_sLcR::synapse0x1b3d190() {
   return (neuron0x1b31940()*0.451353);
}

double NNfunction_sb_sLcR::synapse0x1b3d1d0() {
   return (neuron0x1b321f0()*-0.602711);
}

double NNfunction_sb_sLcR::synapse0x1b3d210() {
   return (neuron0x1b32bc0()*-2.0592);
}

double NNfunction_sb_sLcR::synapse0x1b3d250() {
   return (neuron0x1b33590()*1.58661);
}

double NNfunction_sb_sLcR::synapse0x1b3d5d0() {
   return (neuron0x1b0f510()*-0.146636);
}

double NNfunction_sb_sLcR::synapse0x1b3d610() {
   return (neuron0x1b0fe20()*0.183534);
}

double NNfunction_sb_sLcR::synapse0x1b3d650() {
   return (neuron0x1b10900()*-0.209449);
}

double NNfunction_sb_sLcR::synapse0x1b3d690() {
   return (neuron0x18ca190()*0.113237);
}

double NNfunction_sb_sLcR::synapse0x1b3d6d0() {
   return (neuron0x1b11720()*-0.150125);
}

double NNfunction_sb_sLcR::synapse0x1b3d710() {
   return (neuron0x1b120f0()*-0.180643);
}

double NNfunction_sb_sLcR::synapse0x1b3d750() {
   return (neuron0x1b12ec0()*0.0330961);
}

double NNfunction_sb_sLcR::synapse0x1b3d790() {
   return (neuron0x1b13890()*1.16108);
}

double NNfunction_sb_sLcR::synapse0x1b3d7d0() {
   return (neuron0x1b14260()*-0.120456);
}

double NNfunction_sb_sLcR::synapse0x1b3d810() {
   return (neuron0x1b14d40()*0.142013);
}

double NNfunction_sb_sLcR::synapse0x1b3d850() {
   return (neuron0x1b15710()*0.00704357);
}

double NNfunction_sb_sLcR::synapse0x1b3d890() {
   return (neuron0x1b127f0()*-0.732524);
}

double NNfunction_sb_sLcR::synapse0x1b3d8d0() {
   return (neuron0x1b172c0()*1.41352);
}

double NNfunction_sb_sLcR::synapse0x1b3d910() {
   return (neuron0x1b17c90()*-0.0596303);
}

double NNfunction_sb_sLcR::synapse0x1b3d950() {
   return (neuron0x1b18660()*0.013821);
}

double NNfunction_sb_sLcR::synapse0x1b3d990() {
   return (neuron0x1b19030()*0.0142227);
}

double NNfunction_sb_sLcR::synapse0x1b3d420() {
   return (neuron0x1b1ae40()*0.0624611);
}

double NNfunction_sb_sLcR::synapse0x1b3d460() {
   return (neuron0x1b1b120()*-0.0782925);
}

double NNfunction_sb_sLcR::synapse0x1b3dae0() {
   return (neuron0x1b1baf0()*-0.0881174);
}

double NNfunction_sb_sLcR::synapse0x1b3db20() {
   return (neuron0x1b1c4c0()*-0.351606);
}

double NNfunction_sb_sLcR::synapse0x1b3db60() {
   return (neuron0x1b1ce90()*0.131444);
}

double NNfunction_sb_sLcR::synapse0x1b3dba0() {
   return (neuron0x1b1d860()*-0.0599731);
}

double NNfunction_sb_sLcR::synapse0x1b3dbe0() {
   return (neuron0x1b163b0()*0.0995671);
}

double NNfunction_sb_sLcR::synapse0x1b3dc20() {
   return (neuron0x1b16d80()*0.014151);
}

double NNfunction_sb_sLcR::synapse0x1b3dc60() {
   return (neuron0x1b205f0()*0.0793882);
}

double NNfunction_sb_sLcR::synapse0x1b3dca0() {
   return (neuron0x1b20fc0()*0.497226);
}

double NNfunction_sb_sLcR::synapse0x1b3dce0() {
   return (neuron0x1b21990()*-0.124909);
}

double NNfunction_sb_sLcR::synapse0x1b3dd20() {
   return (neuron0x1b22360()*-0.254578);
}

double NNfunction_sb_sLcR::synapse0x1b3dd60() {
   return (neuron0x1b22d30()*0.08757);
}

double NNfunction_sb_sLcR::synapse0x1b3dda0() {
   return (neuron0x1b23700()*-0.300402);
}

double NNfunction_sb_sLcR::synapse0x1b3dde0() {
   return (neuron0x1b240d0()*-0.513441);
}

double NNfunction_sb_sLcR::synapse0x1b3de20() {
   return (neuron0x1b24aa0()*-0.104519);
}

double NNfunction_sb_sLcR::synapse0x1b3d9d0() {
   return (neuron0x1b1ab30()*-0.665197);
}

double NNfunction_sb_sLcR::synapse0x1b3da10() {
   return (neuron0x1b27680()*0.115176);
}

double NNfunction_sb_sLcR::synapse0x1b3da50() {
   return (neuron0x1b28050()*1.36225);
}

double NNfunction_sb_sLcR::synapse0x1b3da90() {
   return (neuron0x1b28a20()*0.0746305);
}

double NNfunction_sb_sLcR::synapse0x1b3e070() {
   return (neuron0x1b293f0()*-0.0421631);
}

double NNfunction_sb_sLcR::synapse0x1b3e0b0() {
   return (neuron0x1b29dc0()*-0.107584);
}

double NNfunction_sb_sLcR::synapse0x1b3e0f0() {
   return (neuron0x1b2a790()*0.0343855);
}

double NNfunction_sb_sLcR::synapse0x1b3e130() {
   return (neuron0x1b2b160()*-0.0523288);
}

double NNfunction_sb_sLcR::synapse0x1b3e170() {
   return (neuron0x1b2bb30()*0.0669951);
}

double NNfunction_sb_sLcR::synapse0x1b3e1b0() {
   return (neuron0x1b2c710()*0.0363555);
}

double NNfunction_sb_sLcR::synapse0x1b3e1f0() {
   return (neuron0x1b2d0e0()*-0.143795);
}

double NNfunction_sb_sLcR::synapse0x1b3e230() {
   return (neuron0x1b1df60()*0.0191955);
}

double NNfunction_sb_sLcR::synapse0x1b3e270() {
   return (neuron0x1b1e930()*-0.984561);
}

double NNfunction_sb_sLcR::synapse0x1b3e2b0() {
   return (neuron0x1b1f300()*-0.124326);
}

double NNfunction_sb_sLcR::synapse0x1b3e2f0() {
   return (neuron0x1b31940()*0.0145826);
}

double NNfunction_sb_sLcR::synapse0x1b3e330() {
   return (neuron0x1b321f0()*2.59541);
}

double NNfunction_sb_sLcR::synapse0x1b3e370() {
   return (neuron0x1b32bc0()*-0.523926);
}

double NNfunction_sb_sLcR::synapse0x1b3e3b0() {
   return (neuron0x1b33590()*-0.740898);
}

double NNfunction_sb_sLcR::synapse0x1b0f4d0() {
   return (neuron0x1b3a790()*3.16205);
}

double NNfunction_sb_sLcR::synapse0x1b3e610() {
   return (neuron0x1b3ab30()*-7.78554);
}

double NNfunction_sb_sLcR::synapse0x1b3e650() {
   return (neuron0x1b3afd0()*-3.47205);
}

double NNfunction_sb_sLcR::synapse0x1b3e690() {
   return (neuron0x1b3c130()*-8.4149);
}

double NNfunction_sb_sLcR::synapse0x1b3e6d0() {
   return (neuron0x1b3d290()*7.67517);
}

