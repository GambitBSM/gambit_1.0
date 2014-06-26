#include "NNfunction_NG_2.h"
#include <cmath>

double NNfunction_NG_2::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.3994)/15.2426;
   input1 = (in1 - -19.8968)/1063.31;
   input2 = (in2 - 542.109)/551.633;
   input3 = (in3 - -28.4325)/730.209;
   input4 = (in4 - 1047.25)/943.562;
   input5 = (in5 - 902.802)/952.301;
   input6 = (in6 - 912.109)/953.677;
   input7 = (in7 - 929.24)/932.372;
   input8 = (in8 - 923.763)/972.289;
   input9 = (in9 - 910.796)/958.268;
   input10 = (in10 - 977.624)/952.693;
   input11 = (in11 - 598.377)/754.576;
   input12 = (in12 - 710.256)/854.085;
   input13 = (in13 - 495.057)/506.117;
   input14 = (in14 - 689.181)/789.609;
   input15 = (in15 - 723.276)/811.961;
   input16 = (in16 - 552.779)/574.81;
   input17 = (in17 - 747.227)/889.188;
   input18 = (in18 - 751.691)/893.676;
   input19 = (in19 - 790.403)/863.323;
   input20 = (in20 - -4.55026)/488.85;
   input21 = (in21 - -1.39069)/1139.78;
   input22 = (in22 - 0.643676)/1204.77;
   input23 = (in23 - -152.844)/564.204;
   switch(index) {
     case 0:
         return neuron0x1c30ba0();
     default:
         return 0.;
   }
}

double NNfunction_NG_2::Value(int index, double* input) {
   input0 = (input[0] - 23.3994)/15.2426;
   input1 = (input[1] - -19.8968)/1063.31;
   input2 = (input[2] - 542.109)/551.633;
   input3 = (input[3] - -28.4325)/730.209;
   input4 = (input[4] - 1047.25)/943.562;
   input5 = (input[5] - 902.802)/952.301;
   input6 = (input[6] - 912.109)/953.677;
   input7 = (input[7] - 929.24)/932.372;
   input8 = (input[8] - 923.763)/972.289;
   input9 = (input[9] - 910.796)/958.268;
   input10 = (input[10] - 977.624)/952.693;
   input11 = (input[11] - 598.377)/754.576;
   input12 = (input[12] - 710.256)/854.085;
   input13 = (input[13] - 495.057)/506.117;
   input14 = (input[14] - 689.181)/789.609;
   input15 = (input[15] - 723.276)/811.961;
   input16 = (input[16] - 552.779)/574.81;
   input17 = (input[17] - 747.227)/889.188;
   input18 = (input[18] - 751.691)/893.676;
   input19 = (input[19] - 790.403)/863.323;
   input20 = (input[20] - -4.55026)/488.85;
   input21 = (input[21] - -1.39069)/1139.78;
   input22 = (input[22] - 0.643676)/1204.77;
   input23 = (input[23] - -152.844)/564.204;
   switch(index) {
     case 0:
         return neuron0x1c30ba0();
     default:
         return 0.;
   }
}

double NNfunction_NG_2::neuron0x1bfcc60() {
   return input0;
}

double NNfunction_NG_2::neuron0x1bfcfa0() {
   return input1;
}

double NNfunction_NG_2::neuron0x1bfd2e0() {
   return input2;
}

double NNfunction_NG_2::neuron0x1bfd620() {
   return input3;
}

double NNfunction_NG_2::neuron0x1bfd960() {
   return input4;
}

double NNfunction_NG_2::neuron0x1bfdca0() {
   return input5;
}

double NNfunction_NG_2::neuron0x1bfdfe0() {
   return input6;
}

double NNfunction_NG_2::neuron0x1bfe320() {
   return input7;
}

double NNfunction_NG_2::neuron0x1bfe660() {
   return input8;
}

double NNfunction_NG_2::neuron0x1bfe9a0() {
   return input9;
}

double NNfunction_NG_2::neuron0x1bfece0() {
   return input10;
}

double NNfunction_NG_2::neuron0x1bff020() {
   return input11;
}

double NNfunction_NG_2::neuron0x1bff360() {
   return input12;
}

double NNfunction_NG_2::neuron0x1bff6a0() {
   return input13;
}

double NNfunction_NG_2::neuron0x1bff9e0() {
   return input14;
}

double NNfunction_NG_2::neuron0x1bffd20() {
   return input15;
}

double NNfunction_NG_2::neuron0x1c00060() {
   return input16;
}

double NNfunction_NG_2::neuron0x1c005c0() {
   return input17;
}

double NNfunction_NG_2::neuron0x1c007e0() {
   return input18;
}

double NNfunction_NG_2::neuron0x1c00b20() {
   return input19;
}

double NNfunction_NG_2::neuron0x1c00e60() {
   return input20;
}

double NNfunction_NG_2::neuron0x1c011a0() {
   return input21;
}

double NNfunction_NG_2::neuron0x1c014e0() {
   return input22;
}

double NNfunction_NG_2::neuron0x1c01820() {
   return input23;
}

double NNfunction_NG_2::input0x1c01cc0() {
   double input = -3.48889;
   input += synapse0x19bcad0();
   input += synapse0x1bfcb20();
   input += synapse0x1bfcb60();
   input += synapse0x1c01f70();
   input += synapse0x1c01fb0();
   input += synapse0x1c01ff0();
   input += synapse0x1c02030();
   input += synapse0x1c02070();
   input += synapse0x1c020b0();
   input += synapse0x1c020f0();
   input += synapse0x1c02130();
   input += synapse0x1c02170();
   input += synapse0x1c021b0();
   input += synapse0x1c021f0();
   input += synapse0x1c02230();
   input += synapse0x1c02270();
   input += synapse0x1bfca90();
   input += synapse0x1bfcad0();
   input += synapse0x19ae320();
   input += synapse0x19ae360();
   input += synapse0x1c024d0();
   input += synapse0x1c02510();
   input += synapse0x1c02550();
   input += synapse0x1c02590();
   return input;
}

double NNfunction_NG_2::neuron0x1c01cc0() {
   double input = input0x1c01cc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c025d0() {
   double input = 0.818969;
   input += synapse0x1c02910();
   input += synapse0x1c02950();
   input += synapse0x1c02990();
   input += synapse0x1c029d0();
   input += synapse0x1c02a10();
   input += synapse0x1c02a50();
   input += synapse0x1c02a90();
   input += synapse0x1c02ad0();
   input += synapse0x1c02b10();
   input += synapse0x1c023c0();
   input += synapse0x1c02400();
   input += synapse0x1c02440();
   input += synapse0x1c02480();
   input += synapse0x1c02d60();
   input += synapse0x1c02da0();
   input += synapse0x1c02de0();
   input += synapse0x1c02760();
   input += synapse0x1c027a0();
   input += synapse0x1c02f30();
   input += synapse0x1c02f70();
   input += synapse0x1c02fb0();
   input += synapse0x1c02ff0();
   input += synapse0x1c03030();
   input += synapse0x1c03070();
   return input;
}

double NNfunction_NG_2::neuron0x1c025d0() {
   double input = input0x1c025d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c030b0() {
   double input = -4.4896;
   input += synapse0x1c033f0();
   input += synapse0x1c03430();
   input += synapse0x1c03470();
   input += synapse0x1c034b0();
   input += synapse0x1c034f0();
   input += synapse0x1c03530();
   input += synapse0x1c03570();
   input += synapse0x1c035b0();
   input += synapse0x1c035f0();
   input += synapse0x1c03630();
   input += synapse0x1c03670();
   input += synapse0x1c036b0();
   input += synapse0x1c036f0();
   input += synapse0x1c03730();
   input += synapse0x1c03770();
   input += synapse0x1c037b0();
   input += synapse0x1c03240();
   input += synapse0x1c03280();
   input += synapse0x19bc1a0();
   input += synapse0x19bc1e0();
   input += synapse0x1bebcf0();
   input += synapse0x1bebd30();
   input += synapse0x1bebd70();
   input += synapse0x1bfcba0();
   return input;
}

double NNfunction_NG_2::neuron0x1c030b0() {
   double input = input0x1c030b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x19bc940() {
   double input = 0.733497;
   input += synapse0x1c02d00();
   input += synapse0x1bfcbe0();
   input += synapse0x1bfcc20();
   input += synapse0x1c03900();
   input += synapse0x1c03940();
   input += synapse0x1c03980();
   input += synapse0x1c039c0();
   input += synapse0x1c03a00();
   input += synapse0x1c03a40();
   input += synapse0x1c03a80();
   input += synapse0x1c03ac0();
   input += synapse0x1c03b00();
   input += synapse0x1c03b40();
   input += synapse0x1c03b80();
   input += synapse0x1c03bc0();
   input += synapse0x1c03c00();
   input += synapse0x1c02b50();
   input += synapse0x1c02b90();
   input += synapse0x1c03d50();
   input += synapse0x1c03d90();
   input += synapse0x1c03dd0();
   input += synapse0x1c03e10();
   input += synapse0x1c03e50();
   input += synapse0x1c03e90();
   return input;
}

double NNfunction_NG_2::neuron0x19bc940() {
   double input = input0x19bc940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c03ed0() {
   double input = 0.125888;
   input += synapse0x1c04210();
   input += synapse0x1c04250();
   input += synapse0x1c04290();
   input += synapse0x1c042d0();
   input += synapse0x1c04310();
   input += synapse0x1c04350();
   input += synapse0x1c04390();
   input += synapse0x1c043d0();
   input += synapse0x1c04410();
   input += synapse0x1c04450();
   input += synapse0x1c04490();
   input += synapse0x1c044d0();
   input += synapse0x1c04510();
   input += synapse0x1c04550();
   input += synapse0x1c04590();
   input += synapse0x1c045d0();
   input += synapse0x1c04060();
   input += synapse0x1c040a0();
   input += synapse0x1c04720();
   input += synapse0x1c04760();
   input += synapse0x1c047a0();
   input += synapse0x1c047e0();
   input += synapse0x1c04820();
   input += synapse0x1c04860();
   return input;
}

double NNfunction_NG_2::neuron0x1c03ed0() {
   double input = input0x1c03ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c048a0() {
   double input = -2.18914;
   input += synapse0x1c04be0();
   input += synapse0x1c04c20();
   input += synapse0x1c04c60();
   input += synapse0x1c04ca0();
   input += synapse0x1c04ce0();
   input += synapse0x1c04d20();
   input += synapse0x1c04d60();
   input += synapse0x1c04da0();
   input += synapse0x1c04de0();
   input += synapse0x19bc530();
   input += synapse0x19bc570();
   input += synapse0x19bc5b0();
   input += synapse0x19bc5f0();
   input += synapse0x19bc630();
   input += synapse0x19bc670();
   input += synapse0x19bc6b0();
   input += synapse0x1c04a30();
   input += synapse0x1c04a70();
   input += synapse0x19bc800();
   input += synapse0x19bc840();
   input += synapse0x19bc880();
   input += synapse0x19bc8c0();
   input += synapse0x19bc900();
   input += synapse0x1c05630();
   return input;
}

double NNfunction_NG_2::neuron0x1c048a0() {
   double input = input0x1c048a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c05670() {
   double input = -1.88225;
   input += synapse0x1c059b0();
   input += synapse0x1c059f0();
   input += synapse0x1c05a30();
   input += synapse0x1c05a70();
   input += synapse0x1c05ab0();
   input += synapse0x1c05af0();
   input += synapse0x1c05b30();
   input += synapse0x1c05b70();
   input += synapse0x1c05bb0();
   input += synapse0x1c05bf0();
   input += synapse0x1c05c30();
   input += synapse0x1c05c70();
   input += synapse0x1c05cb0();
   input += synapse0x1c05cf0();
   input += synapse0x1c05d30();
   input += synapse0x1c05d70();
   input += synapse0x1c05800();
   input += synapse0x1c05840();
   input += synapse0x1c05ec0();
   input += synapse0x1c05f00();
   input += synapse0x1c05f40();
   input += synapse0x1c05f80();
   input += synapse0x1c05fc0();
   input += synapse0x1c06000();
   return input;
}

double NNfunction_NG_2::neuron0x1c05670() {
   double input = input0x1c05670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c06040() {
   double input = -3.16762;
   input += synapse0x1c06380();
   input += synapse0x1c063c0();
   input += synapse0x1c06400();
   input += synapse0x1c06440();
   input += synapse0x1c06480();
   input += synapse0x1c064c0();
   input += synapse0x1c06500();
   input += synapse0x1c06540();
   input += synapse0x1c06580();
   input += synapse0x1c065c0();
   input += synapse0x1c06600();
   input += synapse0x1c06640();
   input += synapse0x1c06680();
   input += synapse0x1c066c0();
   input += synapse0x1c06700();
   input += synapse0x1c06740();
   input += synapse0x1c061d0();
   input += synapse0x1c06210();
   input += synapse0x1c06890();
   input += synapse0x1c068d0();
   input += synapse0x1c06910();
   input += synapse0x1c06950();
   input += synapse0x1c06990();
   input += synapse0x1c069d0();
   return input;
}

double NNfunction_NG_2::neuron0x1c06040() {
   double input = input0x1c06040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c06a10() {
   double input = -0.0686933;
   input += synapse0x1c004b0();
   input += synapse0x1c004f0();
   input += synapse0x1c00530();
   input += synapse0x1c00570();
   input += synapse0x1c06f60();
   input += synapse0x1c06fa0();
   input += synapse0x1c06fe0();
   input += synapse0x1c07020();
   input += synapse0x1c07060();
   input += synapse0x1c070a0();
   input += synapse0x1c070e0();
   input += synapse0x1c07120();
   input += synapse0x1c07160();
   input += synapse0x1c071a0();
   input += synapse0x1c071e0();
   input += synapse0x1c07220();
   input += synapse0x1c06ba0();
   input += synapse0x1c06be0();
   input += synapse0x1c07370();
   input += synapse0x1c073b0();
   input += synapse0x1c073f0();
   input += synapse0x1c07430();
   input += synapse0x1c07470();
   input += synapse0x1c074b0();
   return input;
}

double NNfunction_NG_2::neuron0x1c06a10() {
   double input = input0x1c06a10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c074f0() {
   double input = 0.911138;
   input += synapse0x1c07830();
   input += synapse0x1c07870();
   input += synapse0x1c078b0();
   input += synapse0x1c078f0();
   input += synapse0x1c07930();
   input += synapse0x1c07970();
   input += synapse0x1c079b0();
   input += synapse0x1c079f0();
   input += synapse0x1c07a30();
   input += synapse0x1c07a70();
   input += synapse0x1c07ab0();
   input += synapse0x1c07af0();
   input += synapse0x1c07b30();
   input += synapse0x1c07b70();
   input += synapse0x1c07bb0();
   input += synapse0x1c07bf0();
   input += synapse0x1c07680();
   input += synapse0x1c076c0();
   input += synapse0x1c07d40();
   input += synapse0x1c07d80();
   input += synapse0x1c07dc0();
   input += synapse0x1c07e00();
   input += synapse0x1c07e40();
   input += synapse0x1c07e80();
   return input;
}

double NNfunction_NG_2::neuron0x1c074f0() {
   double input = input0x1c074f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c07ec0() {
   double input = -1.55904;
   input += synapse0x1c08200();
   input += synapse0x1c08240();
   input += synapse0x1c08280();
   input += synapse0x1c082c0();
   input += synapse0x1c08300();
   input += synapse0x1c08340();
   input += synapse0x1c08380();
   input += synapse0x1c083c0();
   input += synapse0x1c08400();
   input += synapse0x1c08440();
   input += synapse0x1c08480();
   input += synapse0x1c084c0();
   input += synapse0x1c08500();
   input += synapse0x1c08540();
   input += synapse0x1c08580();
   input += synapse0x1c085c0();
   input += synapse0x1c08050();
   input += synapse0x1c08090();
   input += synapse0x1c04e20();
   input += synapse0x1c04e60();
   input += synapse0x1c04ea0();
   input += synapse0x1c04ee0();
   input += synapse0x1c04f20();
   input += synapse0x1c04f60();
   return input;
}

double NNfunction_NG_2::neuron0x1c07ec0() {
   double input = input0x1c07ec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c04fa0() {
   double input = -1.02574;
   input += synapse0x1c052e0();
   input += synapse0x1c05320();
   input += synapse0x1c05360();
   input += synapse0x1c053a0();
   input += synapse0x1c053e0();
   input += synapse0x1c05420();
   input += synapse0x1c05460();
   input += synapse0x1c054a0();
   input += synapse0x1c054e0();
   input += synapse0x1c05520();
   input += synapse0x1c05560();
   input += synapse0x1c055a0();
   input += synapse0x1c055e0();
   input += synapse0x1c09720();
   input += synapse0x1c09760();
   input += synapse0x1c097a0();
   input += synapse0x1c05130();
   input += synapse0x1c05170();
   input += synapse0x1c098f0();
   input += synapse0x1c09930();
   input += synapse0x1c09970();
   input += synapse0x1c099b0();
   input += synapse0x1c099f0();
   input += synapse0x1c09a30();
   return input;
}

double NNfunction_NG_2::neuron0x1c04fa0() {
   double input = input0x1c04fa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c09a70() {
   double input = -0.978392;
   input += synapse0x1c09db0();
   input += synapse0x1c09df0();
   input += synapse0x1c09e30();
   input += synapse0x1c09e70();
   input += synapse0x1c09eb0();
   input += synapse0x1c09ef0();
   input += synapse0x1c09f30();
   input += synapse0x1c09f70();
   input += synapse0x1c09fb0();
   input += synapse0x1c09ff0();
   input += synapse0x1c0a030();
   input += synapse0x1c0a070();
   input += synapse0x1c0a0b0();
   input += synapse0x1c0a0f0();
   input += synapse0x1c0a130();
   input += synapse0x1c0a170();
   input += synapse0x1c09c00();
   input += synapse0x1c09c40();
   input += synapse0x1c0a2c0();
   input += synapse0x1c0a300();
   input += synapse0x1c0a340();
   input += synapse0x1c0a380();
   input += synapse0x1c0a3c0();
   input += synapse0x1c0a400();
   return input;
}

double NNfunction_NG_2::neuron0x1c09a70() {
   double input = input0x1c09a70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c0a440() {
   double input = -2.01127;
   input += synapse0x1c0a780();
   input += synapse0x1c0a7c0();
   input += synapse0x1c0a800();
   input += synapse0x1c0a840();
   input += synapse0x1c0a880();
   input += synapse0x1c0a8c0();
   input += synapse0x1c0a900();
   input += synapse0x1c0a940();
   input += synapse0x1c0a980();
   input += synapse0x1c0a9c0();
   input += synapse0x1c0aa00();
   input += synapse0x1c0aa40();
   input += synapse0x1c0aa80();
   input += synapse0x1c0aac0();
   input += synapse0x1c0ab00();
   input += synapse0x1c0ab40();
   input += synapse0x1c0a5d0();
   input += synapse0x1c0a610();
   input += synapse0x1c0ac90();
   input += synapse0x1c0acd0();
   input += synapse0x1c0ad10();
   input += synapse0x1c0ad50();
   input += synapse0x1c0ad90();
   input += synapse0x1c0add0();
   return input;
}

double NNfunction_NG_2::neuron0x1c0a440() {
   double input = input0x1c0a440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c0ae10() {
   double input = -1.72235;
   input += synapse0x1c0b150();
   input += synapse0x1c0b190();
   input += synapse0x1c0b1d0();
   input += synapse0x1c0b210();
   input += synapse0x1c0b250();
   input += synapse0x1c0b290();
   input += synapse0x1c0b2d0();
   input += synapse0x1c0b310();
   input += synapse0x1c0b350();
   input += synapse0x1c0b390();
   input += synapse0x1c0b3d0();
   input += synapse0x1c0b410();
   input += synapse0x1c0b450();
   input += synapse0x1c0b490();
   input += synapse0x1c0b4d0();
   input += synapse0x1c0b510();
   input += synapse0x1c0afa0();
   input += synapse0x1c0afe0();
   input += synapse0x1c0b660();
   input += synapse0x1c0b6a0();
   input += synapse0x1c0b6e0();
   input += synapse0x1c0b720();
   input += synapse0x1c0b760();
   input += synapse0x1c0b7a0();
   return input;
}

double NNfunction_NG_2::neuron0x1c0ae10() {
   double input = input0x1c0ae10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c0b7e0() {
   double input = 1.0136;
   input += synapse0x1c0bb20();
   input += synapse0x1bfce80();
   input += synapse0x1bfcec0();
   input += synapse0x1bfd1c0();
   input += synapse0x1bfd200();
   input += synapse0x1bfd500();
   input += synapse0x1bfd540();
   input += synapse0x1bfd840();
   input += synapse0x1bfd880();
   input += synapse0x1bfdb80();
   input += synapse0x1bfdbc0();
   input += synapse0x1bfdec0();
   input += synapse0x1bfdf00();
   input += synapse0x1bfe200();
   input += synapse0x1bfe240();
   input += synapse0x1bfe540();
   input += synapse0x1bfe580();
   input += synapse0x1bfe880();
   input += synapse0x1bfe8c0();
   input += synapse0x1bfebc0();
   input += synapse0x1bfec00();
   input += synapse0x1bfef00();
   input += synapse0x1bfef40();
   input += synapse0x1bff240();
   return input;
}

double NNfunction_NG_2::neuron0x1c0b7e0() {
   double input = input0x1c0b7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c0d5f0() {
   double input = -0.994737;
   input += synapse0x1bff280();
   input += synapse0x1bfff40();
   input += synapse0x1bfff80();
   input += synapse0x1c0b970();
   input += synapse0x1c0b9b0();
   input += synapse0x1c00280();
   input += synapse0x1c002c0();
   input += synapse0x19ae200();
   input += synapse0x19ae240();
   input += synapse0x1c00a00();
   input += synapse0x1c00a40();
   input += synapse0x1c00d40();
   input += synapse0x1c00d80();
   input += synapse0x1c01080();
   input += synapse0x1c010c0();
   input += synapse0x1c013c0();
   input += synapse0x1c01400();
   input += synapse0x1c01700();
   input += synapse0x1c01740();
   input += synapse0x1c01a40();
   input += synapse0x1c01a80();
   input += synapse0x1bff580();
   input += synapse0x1bff5c0();
   input += synapse0x1c0d890();
   return input;
}

double NNfunction_NG_2::neuron0x1c0d5f0() {
   double input = input0x1c0d5f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c0d8d0() {
   double input = -0.729984;
   input += synapse0x1c0dc10();
   input += synapse0x1c0dc50();
   input += synapse0x1c0dc90();
   input += synapse0x1c0dcd0();
   input += synapse0x1c0dd10();
   input += synapse0x1c0dd50();
   input += synapse0x1c0dd90();
   input += synapse0x1c0ddd0();
   input += synapse0x1c0de10();
   input += synapse0x1c0de50();
   input += synapse0x1c0de90();
   input += synapse0x1c0ded0();
   input += synapse0x1c0df10();
   input += synapse0x1c0df50();
   input += synapse0x1c0df90();
   input += synapse0x1c0dfd0();
   input += synapse0x1c0da60();
   input += synapse0x1c0daa0();
   input += synapse0x1c0e120();
   input += synapse0x1c0e160();
   input += synapse0x1c0e1a0();
   input += synapse0x1c0e1e0();
   input += synapse0x1c0e220();
   input += synapse0x1c0e260();
   return input;
}

double NNfunction_NG_2::neuron0x1c0d8d0() {
   double input = input0x1c0d8d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c0e2a0() {
   double input = -1.52771;
   input += synapse0x1c0e5e0();
   input += synapse0x1c0e620();
   input += synapse0x1c0e660();
   input += synapse0x1c0e6a0();
   input += synapse0x1c0e6e0();
   input += synapse0x1c0e720();
   input += synapse0x1c0e760();
   input += synapse0x1c0e7a0();
   input += synapse0x1c0e7e0();
   input += synapse0x1c0e820();
   input += synapse0x1c0e860();
   input += synapse0x1c0e8a0();
   input += synapse0x1c0e8e0();
   input += synapse0x1c0e920();
   input += synapse0x1c0e960();
   input += synapse0x1c0e9a0();
   input += synapse0x1c0e430();
   input += synapse0x1c0e470();
   input += synapse0x1c0eaf0();
   input += synapse0x1c0eb30();
   input += synapse0x1c0eb70();
   input += synapse0x1c0ebb0();
   input += synapse0x1c0ebf0();
   input += synapse0x1c0ec30();
   return input;
}

double NNfunction_NG_2::neuron0x1c0e2a0() {
   double input = input0x1c0e2a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c0ec70() {
   double input = 0.279098;
   input += synapse0x1c0efb0();
   input += synapse0x1c0eff0();
   input += synapse0x1c0f030();
   input += synapse0x1c0f070();
   input += synapse0x1c0f0b0();
   input += synapse0x1c0f0f0();
   input += synapse0x1c0f130();
   input += synapse0x1c0f170();
   input += synapse0x1c0f1b0();
   input += synapse0x1c0f1f0();
   input += synapse0x1c0f230();
   input += synapse0x1c0f270();
   input += synapse0x1c0f2b0();
   input += synapse0x1c0f2f0();
   input += synapse0x1c0f330();
   input += synapse0x1c0f370();
   input += synapse0x1c0ee00();
   input += synapse0x1c0ee40();
   input += synapse0x1c0f4c0();
   input += synapse0x1c0f500();
   input += synapse0x1c0f540();
   input += synapse0x1c0f580();
   input += synapse0x1c0f5c0();
   input += synapse0x1c0f600();
   return input;
}

double NNfunction_NG_2::neuron0x1c0ec70() {
   double input = input0x1c0ec70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c0f640() {
   double input = 3.34671;
   input += synapse0x1c0f980();
   input += synapse0x1c0f9c0();
   input += synapse0x1c0fa00();
   input += synapse0x1c0fa40();
   input += synapse0x1c0fa80();
   input += synapse0x1c0fac0();
   input += synapse0x1c0fb00();
   input += synapse0x1c0fb40();
   input += synapse0x1c0fb80();
   input += synapse0x1c0fbc0();
   input += synapse0x1c0fc00();
   input += synapse0x1c0fc40();
   input += synapse0x1c0fc80();
   input += synapse0x1c0fcc0();
   input += synapse0x1c0fd00();
   input += synapse0x1c0fd40();
   input += synapse0x1c0f7d0();
   input += synapse0x1c0f810();
   input += synapse0x1c0fe90();
   input += synapse0x1c0fed0();
   input += synapse0x1c0ff10();
   input += synapse0x1c0ff50();
   input += synapse0x1c0ff90();
   input += synapse0x1c0ffd0();
   return input;
}

double NNfunction_NG_2::neuron0x1c0f640() {
   double input = input0x1c0f640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c10010() {
   double input = 1.08628;
   input += synapse0x1c10350();
   input += synapse0x1c10390();
   input += synapse0x1c103d0();
   input += synapse0x1c10410();
   input += synapse0x1c10450();
   input += synapse0x1c10490();
   input += synapse0x1c104d0();
   input += synapse0x1c10510();
   input += synapse0x1c10550();
   input += synapse0x1c08710();
   input += synapse0x1c08750();
   input += synapse0x1c08790();
   input += synapse0x1c087d0();
   input += synapse0x1c08810();
   input += synapse0x1c08850();
   input += synapse0x1c08890();
   input += synapse0x1c101a0();
   input += synapse0x1c101e0();
   input += synapse0x1c089e0();
   input += synapse0x1c08a20();
   input += synapse0x1c08a60();
   input += synapse0x1c08aa0();
   input += synapse0x1c08ae0();
   input += synapse0x1c08b20();
   return input;
}

double NNfunction_NG_2::neuron0x1c10010() {
   double input = input0x1c10010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c08b60() {
   double input = -3.95062;
   input += synapse0x1c08ea0();
   input += synapse0x1c08ee0();
   input += synapse0x1c08f20();
   input += synapse0x1c08f60();
   input += synapse0x1c08fa0();
   input += synapse0x1c08fe0();
   input += synapse0x1c09020();
   input += synapse0x1c09060();
   input += synapse0x1c090a0();
   input += synapse0x1c090e0();
   input += synapse0x1c09120();
   input += synapse0x1c09160();
   input += synapse0x1c091a0();
   input += synapse0x1c091e0();
   input += synapse0x1c09220();
   input += synapse0x1c09260();
   input += synapse0x1c08cf0();
   input += synapse0x1c08d30();
   input += synapse0x1c093b0();
   input += synapse0x1c093f0();
   input += synapse0x1c09430();
   input += synapse0x1c09470();
   input += synapse0x1c094b0();
   input += synapse0x1c094f0();
   return input;
}

double NNfunction_NG_2::neuron0x1c08b60() {
   double input = input0x1c08b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c09530() {
   double input = -0.251696;
   input += synapse0x1c096c0();
   input += synapse0x1c12750();
   input += synapse0x1c12790();
   input += synapse0x1c127d0();
   input += synapse0x1c12810();
   input += synapse0x1c12850();
   input += synapse0x1c12890();
   input += synapse0x1c128d0();
   input += synapse0x1c12910();
   input += synapse0x1c12950();
   input += synapse0x1c12990();
   input += synapse0x1c129d0();
   input += synapse0x1c12a10();
   input += synapse0x1c12a50();
   input += synapse0x1c12a90();
   input += synapse0x1c12ad0();
   input += synapse0x1c125a0();
   input += synapse0x1c125e0();
   input += synapse0x1c12c20();
   input += synapse0x1c12c60();
   input += synapse0x1c12ca0();
   input += synapse0x1c12ce0();
   input += synapse0x1c12d20();
   input += synapse0x1c12d60();
   return input;
}

double NNfunction_NG_2::neuron0x1c09530() {
   double input = input0x1c09530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c12da0() {
   double input = -0.871432;
   input += synapse0x1c130e0();
   input += synapse0x1c13120();
   input += synapse0x1c13160();
   input += synapse0x1c131a0();
   input += synapse0x1c131e0();
   input += synapse0x1c13220();
   input += synapse0x1c13260();
   input += synapse0x1c132a0();
   input += synapse0x1c132e0();
   input += synapse0x1c13320();
   input += synapse0x1c13360();
   input += synapse0x1c133a0();
   input += synapse0x1c133e0();
   input += synapse0x1c13420();
   input += synapse0x1c13460();
   input += synapse0x1c134a0();
   input += synapse0x1c12f30();
   input += synapse0x1c12f70();
   input += synapse0x1c135f0();
   input += synapse0x1c13630();
   input += synapse0x1c13670();
   input += synapse0x1c136b0();
   input += synapse0x1c136f0();
   input += synapse0x1c13730();
   return input;
}

double NNfunction_NG_2::neuron0x1c12da0() {
   double input = input0x1c12da0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c13770() {
   double input = -1.40293;
   input += synapse0x1c13ab0();
   input += synapse0x1c13af0();
   input += synapse0x1c13b30();
   input += synapse0x1c13b70();
   input += synapse0x1c13bb0();
   input += synapse0x1c13bf0();
   input += synapse0x1c13c30();
   input += synapse0x1c13c70();
   input += synapse0x1c13cb0();
   input += synapse0x1c13cf0();
   input += synapse0x1c13d30();
   input += synapse0x1c13d70();
   input += synapse0x1c13db0();
   input += synapse0x1c13df0();
   input += synapse0x1c13e30();
   input += synapse0x1c13e70();
   input += synapse0x1c13900();
   input += synapse0x1c13940();
   input += synapse0x1c13fc0();
   input += synapse0x1c14000();
   input += synapse0x1c14040();
   input += synapse0x1c14080();
   input += synapse0x1c140c0();
   input += synapse0x1c14100();
   return input;
}

double NNfunction_NG_2::neuron0x1c13770() {
   double input = input0x1c13770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c14140() {
   double input = 0.457005;
   input += synapse0x1c14480();
   input += synapse0x1c144c0();
   input += synapse0x1c14500();
   input += synapse0x1c14540();
   input += synapse0x1c14580();
   input += synapse0x1c145c0();
   input += synapse0x1c14600();
   input += synapse0x1c14640();
   input += synapse0x1c14680();
   input += synapse0x1c146c0();
   input += synapse0x1c14700();
   input += synapse0x1c14740();
   input += synapse0x1c14780();
   input += synapse0x1c147c0();
   input += synapse0x1c14800();
   input += synapse0x1c14840();
   input += synapse0x1c142d0();
   input += synapse0x1c14310();
   input += synapse0x1c14990();
   input += synapse0x1c149d0();
   input += synapse0x1c14a10();
   input += synapse0x1c14a50();
   input += synapse0x1c14a90();
   input += synapse0x1c14ad0();
   return input;
}

double NNfunction_NG_2::neuron0x1c14140() {
   double input = input0x1c14140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c14b10() {
   double input = -1.45021;
   input += synapse0x1c14e50();
   input += synapse0x1c14e90();
   input += synapse0x1c14ed0();
   input += synapse0x1c14f10();
   input += synapse0x1c14f50();
   input += synapse0x1c14f90();
   input += synapse0x1c14fd0();
   input += synapse0x1c15010();
   input += synapse0x1c15050();
   input += synapse0x1c15090();
   input += synapse0x1c150d0();
   input += synapse0x1c15110();
   input += synapse0x1c15150();
   input += synapse0x1c15190();
   input += synapse0x1c151d0();
   input += synapse0x1c15210();
   input += synapse0x1c14ca0();
   input += synapse0x1c14ce0();
   input += synapse0x1c15360();
   input += synapse0x1c153a0();
   input += synapse0x1c153e0();
   input += synapse0x1c15420();
   input += synapse0x1c15460();
   input += synapse0x1c154a0();
   return input;
}

double NNfunction_NG_2::neuron0x1c14b10() {
   double input = input0x1c14b10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c154e0() {
   double input = -2.26115;
   input += synapse0x1c15820();
   input += synapse0x1c15860();
   input += synapse0x1c158a0();
   input += synapse0x1c158e0();
   input += synapse0x1c15920();
   input += synapse0x1c15960();
   input += synapse0x1c159a0();
   input += synapse0x1c159e0();
   input += synapse0x1c15a20();
   input += synapse0x1c15a60();
   input += synapse0x1c15aa0();
   input += synapse0x1c15ae0();
   input += synapse0x1c15b20();
   input += synapse0x1c15b60();
   input += synapse0x1c15ba0();
   input += synapse0x1c15be0();
   input += synapse0x1c15670();
   input += synapse0x1c156b0();
   input += synapse0x1c15d30();
   input += synapse0x1c15d70();
   input += synapse0x1c15db0();
   input += synapse0x1c15df0();
   input += synapse0x1c15e30();
   input += synapse0x1c15e70();
   return input;
}

double NNfunction_NG_2::neuron0x1c154e0() {
   double input = input0x1c154e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c15eb0() {
   double input = 2.64604;
   input += synapse0x1c161f0();
   input += synapse0x1c16230();
   input += synapse0x1c16270();
   input += synapse0x1c162b0();
   input += synapse0x1c162f0();
   input += synapse0x1c16330();
   input += synapse0x1c16370();
   input += synapse0x1c163b0();
   input += synapse0x1c163f0();
   input += synapse0x1c16430();
   input += synapse0x1c16470();
   input += synapse0x1c164b0();
   input += synapse0x1c164f0();
   input += synapse0x1c16530();
   input += synapse0x1c16570();
   input += synapse0x1c165b0();
   input += synapse0x1c16040();
   input += synapse0x1c16080();
   input += synapse0x1c16700();
   input += synapse0x1c16740();
   input += synapse0x1c16780();
   input += synapse0x1c167c0();
   input += synapse0x1c16800();
   input += synapse0x1c16840();
   return input;
}

double NNfunction_NG_2::neuron0x1c15eb0() {
   double input = input0x1c15eb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c16880() {
   double input = -3.51856;
   input += synapse0x1c16bc0();
   input += synapse0x1c16c00();
   input += synapse0x1c16c40();
   input += synapse0x1c16c80();
   input += synapse0x1c16cc0();
   input += synapse0x1c16d00();
   input += synapse0x1c16d40();
   input += synapse0x1c16d80();
   input += synapse0x1c16dc0();
   input += synapse0x1c16e00();
   input += synapse0x1c16e40();
   input += synapse0x1c16e80();
   input += synapse0x1c16ec0();
   input += synapse0x1c16f00();
   input += synapse0x1c16f40();
   input += synapse0x1c16f80();
   input += synapse0x1c16a10();
   input += synapse0x1c16a50();
   input += synapse0x1c170d0();
   input += synapse0x1c17110();
   input += synapse0x1c17150();
   input += synapse0x1c17190();
   input += synapse0x1c171d0();
   input += synapse0x1c17210();
   return input;
}

double NNfunction_NG_2::neuron0x1c16880() {
   double input = input0x1c16880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c17250() {
   double input = 0.569197;
   input += synapse0x1c17590();
   input += synapse0x1c0bb60();
   input += synapse0x1c0bba0();
   input += synapse0x1c0bbe0();
   input += synapse0x1c0be30();
   input += synapse0x1c0be70();
   input += synapse0x1c0beb0();
   input += synapse0x1c0c100();
   input += synapse0x1c0c140();
   input += synapse0x1c0c390();
   input += synapse0x1c0c3d0();
   input += synapse0x1c0c410();
   input += synapse0x1c0c660();
   input += synapse0x1c0c6a0();
   input += synapse0x1c0c8f0();
   input += synapse0x1c0c930();
   input += synapse0x1c173e0();
   input += synapse0x1c17420();
   input += synapse0x1c0ca80();
   input += synapse0x1c0cf90();
   input += synapse0x1c0cfd0();
   input += synapse0x1c0d010();
   input += synapse0x1c0d260();
   input += synapse0x1c0d2a0();
   return input;
}

double NNfunction_NG_2::neuron0x1c17250() {
   double input = input0x1c17250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c0d2e0() {
   double input = -0.362995;
   input += synapse0x1c0cb50();
   input += synapse0x1c0cb90();
   input += synapse0x1c0cbd0();
   input += synapse0x1c0cc10();
   input += synapse0x1c0d590();
   input += synapse0x1c198e0();
   input += synapse0x1c19920();
   input += synapse0x1c19960();
   input += synapse0x1c199a0();
   input += synapse0x1c199e0();
   input += synapse0x1c19a20();
   input += synapse0x1c19a60();
   input += synapse0x1c19aa0();
   input += synapse0x1c19ae0();
   input += synapse0x1c19b20();
   input += synapse0x1c19b60();
   input += synapse0x1c0d470();
   input += synapse0x1c0d4b0();
   input += synapse0x1c19cb0();
   input += synapse0x1c19cf0();
   input += synapse0x1c19d30();
   input += synapse0x1c19d70();
   input += synapse0x1c19db0();
   input += synapse0x1c19df0();
   return input;
}

double NNfunction_NG_2::neuron0x1c0d2e0() {
   double input = input0x1c0d2e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c19e30() {
   double input = 0.227429;
   input += synapse0x1c1a170();
   input += synapse0x1c1a1b0();
   input += synapse0x1c1a1f0();
   input += synapse0x1c1a230();
   input += synapse0x1c1a270();
   input += synapse0x1c1a2b0();
   input += synapse0x1c1a2f0();
   input += synapse0x1c1a330();
   input += synapse0x1c1a370();
   input += synapse0x1c1a3b0();
   input += synapse0x1c1a3f0();
   input += synapse0x1c1a430();
   input += synapse0x1c1a470();
   input += synapse0x1c1a4b0();
   input += synapse0x1c1a4f0();
   input += synapse0x1c1a530();
   input += synapse0x1c19fc0();
   input += synapse0x1c1a000();
   input += synapse0x1c1a680();
   input += synapse0x1c1a6c0();
   input += synapse0x1c1a700();
   input += synapse0x1c1a740();
   input += synapse0x1c1a780();
   input += synapse0x1c1a7c0();
   return input;
}

double NNfunction_NG_2::neuron0x1c19e30() {
   double input = input0x1c19e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c1a800() {
   double input = 0.16001;
   input += synapse0x1c1ab40();
   input += synapse0x1c1ab80();
   input += synapse0x1c1abc0();
   input += synapse0x1c1ac00();
   input += synapse0x1c1ac40();
   input += synapse0x1c1ac80();
   input += synapse0x1c1acc0();
   input += synapse0x1c1ad00();
   input += synapse0x1c1ad40();
   input += synapse0x1c1ad80();
   input += synapse0x1c1adc0();
   input += synapse0x1c1ae00();
   input += synapse0x1c1ae40();
   input += synapse0x1c1ae80();
   input += synapse0x1c1aec0();
   input += synapse0x1c1af00();
   input += synapse0x1c1a990();
   input += synapse0x1c1a9d0();
   input += synapse0x1c1b050();
   input += synapse0x1c1b090();
   input += synapse0x1c1b0d0();
   input += synapse0x1c1b110();
   input += synapse0x1c1b150();
   input += synapse0x1c1b190();
   return input;
}

double NNfunction_NG_2::neuron0x1c1a800() {
   double input = input0x1c1a800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c1b1d0() {
   double input = 0.0901926;
   input += synapse0x1c1b510();
   input += synapse0x1c1b550();
   input += synapse0x1c1b590();
   input += synapse0x1c1b5d0();
   input += synapse0x1c1b610();
   input += synapse0x1c1b650();
   input += synapse0x1c1b690();
   input += synapse0x1c1b6d0();
   input += synapse0x1c1b710();
   input += synapse0x1c1b750();
   input += synapse0x1c1b790();
   input += synapse0x1c1b7d0();
   input += synapse0x1c1b810();
   input += synapse0x1c1b850();
   input += synapse0x1c1b890();
   input += synapse0x1c1b8d0();
   input += synapse0x1c1b360();
   input += synapse0x1c1b3a0();
   input += synapse0x1c1ba20();
   input += synapse0x1c1ba60();
   input += synapse0x1c1baa0();
   input += synapse0x1c1bae0();
   input += synapse0x1c1bb20();
   input += synapse0x1c1bb60();
   return input;
}

double NNfunction_NG_2::neuron0x1c1b1d0() {
   double input = input0x1c1b1d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c1bba0() {
   double input = 0.659045;
   input += synapse0x1c1bee0();
   input += synapse0x1c1bf20();
   input += synapse0x1c1bf60();
   input += synapse0x1c1bfa0();
   input += synapse0x1c1bfe0();
   input += synapse0x1c1c020();
   input += synapse0x1c1c060();
   input += synapse0x1c1c0a0();
   input += synapse0x1c1c0e0();
   input += synapse0x1c1c120();
   input += synapse0x1c1c160();
   input += synapse0x1c1c1a0();
   input += synapse0x1c1c1e0();
   input += synapse0x1c1c220();
   input += synapse0x1c1c260();
   input += synapse0x1c1c2a0();
   input += synapse0x1c1bd30();
   input += synapse0x1c1bd70();
   input += synapse0x1c1c3f0();
   input += synapse0x1c1c430();
   input += synapse0x1c1c470();
   input += synapse0x1c1c4b0();
   input += synapse0x1c1c4f0();
   input += synapse0x1c1c530();
   return input;
}

double NNfunction_NG_2::neuron0x1c1bba0() {
   double input = input0x1c1bba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c1c570() {
   double input = 0.267852;
   input += synapse0x1c1c8b0();
   input += synapse0x1c1c8f0();
   input += synapse0x1c1c930();
   input += synapse0x1c1c970();
   input += synapse0x1c1c9b0();
   input += synapse0x1c1c9f0();
   input += synapse0x1c1ca30();
   input += synapse0x1c1ca70();
   input += synapse0x1c1cab0();
   input += synapse0x1c1caf0();
   input += synapse0x1c1cb30();
   input += synapse0x1c1cb70();
   input += synapse0x1c1cbb0();
   input += synapse0x1c1cbf0();
   input += synapse0x1c1cc30();
   input += synapse0x1c1cc70();
   input += synapse0x1c1c700();
   input += synapse0x1c1c740();
   input += synapse0x1c1cdc0();
   input += synapse0x1c1ce00();
   input += synapse0x1c1ce40();
   input += synapse0x1c1ce80();
   input += synapse0x1c1cec0();
   input += synapse0x1c1cf00();
   return input;
}

double NNfunction_NG_2::neuron0x1c1c570() {
   double input = input0x1c1c570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c1cf40() {
   double input = 0.279696;
   input += synapse0x1c1d280();
   input += synapse0x1c1d2c0();
   input += synapse0x1c1d300();
   input += synapse0x1c1d340();
   input += synapse0x1c1d380();
   input += synapse0x1c1d3c0();
   input += synapse0x1c1d400();
   input += synapse0x1c1d440();
   input += synapse0x1c1d480();
   input += synapse0x1c1d4c0();
   input += synapse0x1c1d500();
   input += synapse0x1c1d540();
   input += synapse0x1c1d580();
   input += synapse0x1c1d5c0();
   input += synapse0x1c1d600();
   input += synapse0x1c1d640();
   input += synapse0x1c1d0d0();
   input += synapse0x1c1d110();
   input += synapse0x1c1d790();
   input += synapse0x1c1d7d0();
   input += synapse0x1c1d810();
   input += synapse0x1c1d850();
   input += synapse0x1c1d890();
   input += synapse0x1c1d8d0();
   return input;
}

double NNfunction_NG_2::neuron0x1c1cf40() {
   double input = input0x1c1cf40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c1d910() {
   double input = -1.60125;
   input += synapse0x1c1dc50();
   input += synapse0x1c1dc90();
   input += synapse0x1c1dcd0();
   input += synapse0x1c1dd10();
   input += synapse0x1c1dd50();
   input += synapse0x1c1dd90();
   input += synapse0x1c1ddd0();
   input += synapse0x1c1de10();
   input += synapse0x1c1de50();
   input += synapse0x1c1de90();
   input += synapse0x1c1ded0();
   input += synapse0x1c1df10();
   input += synapse0x1c1df50();
   input += synapse0x1c1df90();
   input += synapse0x1c1dfd0();
   input += synapse0x1c1e010();
   input += synapse0x1c1daa0();
   input += synapse0x1c1dae0();
   input += synapse0x1c1e160();
   input += synapse0x1c1e1a0();
   input += synapse0x1c1e1e0();
   input += synapse0x1c1e220();
   input += synapse0x1c1e260();
   input += synapse0x1c1e2a0();
   return input;
}

double NNfunction_NG_2::neuron0x1c1d910() {
   double input = input0x1c1d910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c1e2e0() {
   double input = -1.0327;
   input += synapse0x1c06d50();
   input += synapse0x1c06d90();
   input += synapse0x1c06dd0();
   input += synapse0x1c06e10();
   input += synapse0x1c06e50();
   input += synapse0x1c06e90();
   input += synapse0x1c06ed0();
   input += synapse0x1c06f10();
   input += synapse0x1c1ea30();
   input += synapse0x1c1ea70();
   input += synapse0x1c1eab0();
   input += synapse0x1c1eaf0();
   input += synapse0x1c1eb30();
   input += synapse0x1c1eb70();
   input += synapse0x1c1ebb0();
   input += synapse0x1c1ebf0();
   input += synapse0x1c1e470();
   input += synapse0x1c1e4b0();
   input += synapse0x1c1ed40();
   input += synapse0x1c1ed80();
   input += synapse0x1c1edc0();
   input += synapse0x1c1ee00();
   input += synapse0x1c1ee40();
   input += synapse0x1c1ee80();
   return input;
}

double NNfunction_NG_2::neuron0x1c1e2e0() {
   double input = input0x1c1e2e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c1eec0() {
   double input = -0.803795;
   input += synapse0x1c1f200();
   input += synapse0x1c1f240();
   input += synapse0x1c1f280();
   input += synapse0x1c1f2c0();
   input += synapse0x1c1f300();
   input += synapse0x1c1f340();
   input += synapse0x1c1f380();
   input += synapse0x1c1f3c0();
   input += synapse0x1c1f400();
   input += synapse0x1c1f440();
   input += synapse0x1c1f480();
   input += synapse0x1c1f4c0();
   input += synapse0x1c1f500();
   input += synapse0x1c1f540();
   input += synapse0x1c1f580();
   input += synapse0x1c1f5c0();
   input += synapse0x1c1f050();
   input += synapse0x1c1f090();
   input += synapse0x1c1f710();
   input += synapse0x1c1f750();
   input += synapse0x1c1f790();
   input += synapse0x1c1f7d0();
   input += synapse0x1c1f810();
   input += synapse0x1c1f850();
   return input;
}

double NNfunction_NG_2::neuron0x1c1eec0() {
   double input = input0x1c1eec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c1f890() {
   double input = 0.0542807;
   input += synapse0x1c1fbd0();
   input += synapse0x1c1fc10();
   input += synapse0x1c1fc50();
   input += synapse0x1c1fc90();
   input += synapse0x1c1fcd0();
   input += synapse0x1c1fd10();
   input += synapse0x1c1fd50();
   input += synapse0x1c1fd90();
   input += synapse0x1c1fdd0();
   input += synapse0x1c1fe10();
   input += synapse0x1c1fe50();
   input += synapse0x1c1fe90();
   input += synapse0x1c1fed0();
   input += synapse0x1c1ff10();
   input += synapse0x1c1ff50();
   input += synapse0x1c1ff90();
   input += synapse0x1c1fa20();
   input += synapse0x1c1fa60();
   input += synapse0x1c10590();
   input += synapse0x1c105d0();
   input += synapse0x1c10610();
   input += synapse0x1c10650();
   input += synapse0x1c10690();
   input += synapse0x1c106d0();
   return input;
}

double NNfunction_NG_2::neuron0x1c1f890() {
   double input = input0x1c1f890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c10710() {
   double input = -4.60429;
   input += synapse0x1c10a50();
   input += synapse0x1c10a90();
   input += synapse0x1c10ad0();
   input += synapse0x1c10b10();
   input += synapse0x1c10b50();
   input += synapse0x1c10b90();
   input += synapse0x1c10bd0();
   input += synapse0x1c10c10();
   input += synapse0x1c10c50();
   input += synapse0x1c10c90();
   input += synapse0x1c10cd0();
   input += synapse0x1c10d10();
   input += synapse0x1c10d50();
   input += synapse0x1c10d90();
   input += synapse0x1c10dd0();
   input += synapse0x1c10e10();
   input += synapse0x1c108a0();
   input += synapse0x1c108e0();
   input += synapse0x1c10f60();
   input += synapse0x1c10fa0();
   input += synapse0x1c10fe0();
   input += synapse0x1c11020();
   input += synapse0x1c11060();
   input += synapse0x1c110a0();
   return input;
}

double NNfunction_NG_2::neuron0x1c10710() {
   double input = input0x1c10710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c110e0() {
   double input = -0.284492;
   input += synapse0x1c11420();
   input += synapse0x1c11460();
   input += synapse0x1c114a0();
   input += synapse0x1c114e0();
   input += synapse0x1c11520();
   input += synapse0x1c11560();
   input += synapse0x1c115a0();
   input += synapse0x1c115e0();
   input += synapse0x1c11620();
   input += synapse0x1c11660();
   input += synapse0x1c116a0();
   input += synapse0x1c116e0();
   input += synapse0x1c11720();
   input += synapse0x1c11760();
   input += synapse0x1c117a0();
   input += synapse0x1c117e0();
   input += synapse0x1c11270();
   input += synapse0x1c112b0();
   input += synapse0x1c11930();
   input += synapse0x1c11970();
   input += synapse0x1c119b0();
   input += synapse0x1c119f0();
   input += synapse0x1c11a30();
   input += synapse0x1c11a70();
   return input;
}

double NNfunction_NG_2::neuron0x1c110e0() {
   double input = input0x1c110e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c11ab0() {
   double input = -1.41276;
   input += synapse0x1c11df0();
   input += synapse0x1c11e30();
   input += synapse0x1c11e70();
   input += synapse0x1c11eb0();
   input += synapse0x1c11ef0();
   input += synapse0x1c11f30();
   input += synapse0x1c11f70();
   input += synapse0x1c11fb0();
   input += synapse0x1c11ff0();
   input += synapse0x1c12030();
   input += synapse0x1c12070();
   input += synapse0x1c120b0();
   input += synapse0x1c120f0();
   input += synapse0x1c12130();
   input += synapse0x1c12170();
   input += synapse0x1c121b0();
   input += synapse0x1c11c40();
   input += synapse0x1c11c80();
   input += synapse0x1c12300();
   input += synapse0x1c12340();
   input += synapse0x1c12380();
   input += synapse0x1c123c0();
   input += synapse0x1c12400();
   input += synapse0x1c12440();
   return input;
}

double NNfunction_NG_2::neuron0x1c11ab0() {
   double input = input0x1c11ab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c240f0() {
   double input = 1.50103;
   input += synapse0x1c24310();
   input += synapse0x1c24350();
   input += synapse0x1c24390();
   input += synapse0x1c243d0();
   input += synapse0x1c24410();
   input += synapse0x1c24450();
   input += synapse0x1c24490();
   input += synapse0x1c244d0();
   input += synapse0x1c24510();
   input += synapse0x1c24550();
   input += synapse0x1c24590();
   input += synapse0x1c245d0();
   input += synapse0x1c24610();
   input += synapse0x1c24650();
   input += synapse0x1c24690();
   input += synapse0x1c246d0();
   input += synapse0x1c12480();
   input += synapse0x1c124c0();
   input += synapse0x1c24820();
   input += synapse0x1c24860();
   input += synapse0x1c248a0();
   input += synapse0x1c248e0();
   input += synapse0x1c24920();
   input += synapse0x1c24960();
   return input;
}

double NNfunction_NG_2::neuron0x1c240f0() {
   double input = input0x1c240f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c249a0() {
   double input = -0.122884;
   input += synapse0x1c24ce0();
   input += synapse0x1c24d20();
   input += synapse0x1c24d60();
   input += synapse0x1c24da0();
   input += synapse0x1c24de0();
   input += synapse0x1c24e20();
   input += synapse0x1c24e60();
   input += synapse0x1c24ea0();
   input += synapse0x1c24ee0();
   input += synapse0x1c24f20();
   input += synapse0x1c24f60();
   input += synapse0x1c24fa0();
   input += synapse0x1c24fe0();
   input += synapse0x1c25020();
   input += synapse0x1c25060();
   input += synapse0x1c250a0();
   input += synapse0x1c24b30();
   input += synapse0x1c24b70();
   input += synapse0x1c251f0();
   input += synapse0x1c25230();
   input += synapse0x1c25270();
   input += synapse0x1c252b0();
   input += synapse0x1c252f0();
   input += synapse0x1c25330();
   return input;
}

double NNfunction_NG_2::neuron0x1c249a0() {
   double input = input0x1c249a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c25370() {
   double input = -1.0027;
   input += synapse0x1c256b0();
   input += synapse0x1c256f0();
   input += synapse0x1c25730();
   input += synapse0x1c25770();
   input += synapse0x1c257b0();
   input += synapse0x1c257f0();
   input += synapse0x1c25830();
   input += synapse0x1c25870();
   input += synapse0x1c258b0();
   input += synapse0x1c258f0();
   input += synapse0x1c25930();
   input += synapse0x1c25970();
   input += synapse0x1c259b0();
   input += synapse0x1c259f0();
   input += synapse0x1c25a30();
   input += synapse0x1c25a70();
   input += synapse0x1c25500();
   input += synapse0x1c25540();
   input += synapse0x1c25bc0();
   input += synapse0x1c25c00();
   input += synapse0x1c25c40();
   input += synapse0x1c25c80();
   input += synapse0x1c25cc0();
   input += synapse0x1c25d00();
   return input;
}

double NNfunction_NG_2::neuron0x1c25370() {
   double input = input0x1c25370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c25d40() {
   double input = 0.52163;
   input += synapse0x1c26080();
   input += synapse0x1c260c0();
   input += synapse0x1c26100();
   input += synapse0x1c26140();
   input += synapse0x1c26180();
   input += synapse0x1c261c0();
   input += synapse0x1c26200();
   input += synapse0x1c26240();
   input += synapse0x1c26280();
   input += synapse0x1c262c0();
   input += synapse0x1c26300();
   input += synapse0x1c26340();
   input += synapse0x1c26380();
   input += synapse0x1c263c0();
   input += synapse0x1c26400();
   input += synapse0x1c26440();
   input += synapse0x1c25ed0();
   input += synapse0x1c25f10();
   input += synapse0x1c26590();
   input += synapse0x1c265d0();
   input += synapse0x1c26610();
   input += synapse0x1c26650();
   input += synapse0x1c26690();
   input += synapse0x1c266d0();
   return input;
}

double NNfunction_NG_2::neuron0x1c25d40() {
   double input = input0x1c25d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c2cf40() {
   double input = 0.801524;
   input += synapse0x1c02c70();
   input += synapse0x1c02cb0();
   input += synapse0x1c04180();
   input += synapse0x1c041c0();
   input += synapse0x1c04b50();
   input += synapse0x1c04b90();
   input += synapse0x1c05920();
   input += synapse0x1c05960();
   input += synapse0x1c062f0();
   input += synapse0x1c06330();
   input += synapse0x1c06cc0();
   input += synapse0x1c06d00();
   input += synapse0x1c077a0();
   input += synapse0x1c077e0();
   input += synapse0x1c08170();
   input += synapse0x1c081b0();
   input += synapse0x1c05250();
   input += synapse0x1c05290();
   input += synapse0x1c09d20();
   input += synapse0x1c09d60();
   input += synapse0x1c0a6f0();
   input += synapse0x1c0a730();
   input += synapse0x1c0b0c0();
   input += synapse0x1c0b100();
   input += synapse0x1c0ba90();
   input += synapse0x1c0bad0();
   input += synapse0x1bffc00();
   input += synapse0x1bffc40();
   input += synapse0x1c0db80();
   input += synapse0x1c0dbc0();
   input += synapse0x1c0e550();
   input += synapse0x1c0e590();
   input += synapse0x1c0ef20();
   input += synapse0x1c0ef60();
   input += synapse0x1c0f8f0();
   input += synapse0x1c0f930();
   input += synapse0x1c102c0();
   input += synapse0x1c10300();
   input += synapse0x1c08e10();
   input += synapse0x1c08e50();
   input += synapse0x1c126c0();
   input += synapse0x1c12700();
   input += synapse0x1c13050();
   input += synapse0x1c13090();
   input += synapse0x1c13a20();
   input += synapse0x1c13a60();
   input += synapse0x1c143f0();
   input += synapse0x1c14430();
   input += synapse0x1c14dc0();
   input += synapse0x1c14e00();
   return input;
}

double NNfunction_NG_2::neuron0x1c2cf40() {
   double input = input0x1c2cf40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c2d2e0() {
   double input = -0.305764;
   input += synapse0x1c17500();
   input += synapse0x1c17540();
   input += synapse0x1c0cac0();
   input += synapse0x1c0cb00();
   input += synapse0x1c1a0e0();
   input += synapse0x1c1a120();
   input += synapse0x1c1aab0();
   input += synapse0x1c1aaf0();
   input += synapse0x1c1b480();
   input += synapse0x1c1b4c0();
   input += synapse0x1c1be50();
   input += synapse0x1c1be90();
   input += synapse0x1c1c820();
   input += synapse0x1c1c860();
   input += synapse0x1c1d1f0();
   input += synapse0x1c1d230();
   input += synapse0x1c1dbc0();
   input += synapse0x1c1dc00();
   input += synapse0x1c1e590();
   input += synapse0x1c1e5d0();
   input += synapse0x1c1f170();
   input += synapse0x1c1f1b0();
   input += synapse0x1c1fb40();
   input += synapse0x1c1fb80();
   input += synapse0x1c109c0();
   input += synapse0x1c10a00();
   input += synapse0x1c11390();
   input += synapse0x1c113d0();
   input += synapse0x1c11d60();
   input += synapse0x1c11da0();
   input += synapse0x1c24280();
   input += synapse0x1c242c0();
   input += synapse0x1c24c50();
   input += synapse0x1c24c90();
   input += synapse0x1c25620();
   input += synapse0x1c25660();
   input += synapse0x1c25ff0();
   input += synapse0x1c26030();
   input += synapse0x1c01ee0();
   input += synapse0x1c01f20();
   input += synapse0x1c15790();
   input += synapse0x1c157d0();
   input += synapse0x1c26710();
   input += synapse0x1c26750();
   input += synapse0x1c26790();
   input += synapse0x1c267d0();
   input += synapse0x1c2d680();
   input += synapse0x1c2d6c0();
   input += synapse0x1c2d700();
   input += synapse0x1c2d740();
   return input;
}

double NNfunction_NG_2::neuron0x1c2d2e0() {
   double input = input0x1c2d2e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c2d780() {
   double input = -0.358669;
   input += synapse0x1c2dac0();
   input += synapse0x1c2db00();
   input += synapse0x1c2db40();
   input += synapse0x1c2db80();
   input += synapse0x1c2dbc0();
   input += synapse0x1c2dc00();
   input += synapse0x1c2dc40();
   input += synapse0x1c2dc80();
   input += synapse0x1c2dcc0();
   input += synapse0x1c2dd00();
   input += synapse0x1c2dd40();
   input += synapse0x1c2dd80();
   input += synapse0x1c2ddc0();
   input += synapse0x1c2de00();
   input += synapse0x1c2de40();
   input += synapse0x1c2de80();
   input += synapse0x1c2d910();
   input += synapse0x1c2d950();
   input += synapse0x1c2dfd0();
   input += synapse0x1c2e010();
   input += synapse0x1c2e050();
   input += synapse0x1c2e090();
   input += synapse0x1c2e0d0();
   input += synapse0x1c2e110();
   input += synapse0x1c2e150();
   input += synapse0x1c2e190();
   input += synapse0x1c2e1d0();
   input += synapse0x1c2e210();
   input += synapse0x1c2e250();
   input += synapse0x1c2e290();
   input += synapse0x1c2e2d0();
   input += synapse0x1c2e310();
   input += synapse0x1c2dec0();
   input += synapse0x1c2df00();
   input += synapse0x1c2df40();
   input += synapse0x1c2df80();
   input += synapse0x1c2e560();
   input += synapse0x1c2e5a0();
   input += synapse0x1c2e5e0();
   input += synapse0x1c2e620();
   input += synapse0x1c2e660();
   input += synapse0x1c2e6a0();
   input += synapse0x1c2e6e0();
   input += synapse0x1c2e720();
   input += synapse0x1c2e760();
   input += synapse0x1c2e7a0();
   input += synapse0x1c2e7e0();
   input += synapse0x1c2e820();
   input += synapse0x1c2e860();
   input += synapse0x1c2e8a0();
   return input;
}

double NNfunction_NG_2::neuron0x1c2d780() {
   double input = input0x1c2d780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c2e8e0() {
   double input = 0.680693;
   input += synapse0x1c2ec20();
   input += synapse0x1c2ec60();
   input += synapse0x1c2eca0();
   input += synapse0x1c2ece0();
   input += synapse0x1c2ed20();
   input += synapse0x1c2ed60();
   input += synapse0x1c2eda0();
   input += synapse0x1c2ede0();
   input += synapse0x1c2ee20();
   input += synapse0x1c2ee60();
   input += synapse0x1c2eea0();
   input += synapse0x1c2eee0();
   input += synapse0x1c2ef20();
   input += synapse0x1c2ef60();
   input += synapse0x1c2efa0();
   input += synapse0x1c2efe0();
   input += synapse0x1c2ea70();
   input += synapse0x1c2eab0();
   input += synapse0x1c2f130();
   input += synapse0x1c2f170();
   input += synapse0x1c2f1b0();
   input += synapse0x1c2f1f0();
   input += synapse0x1c2f230();
   input += synapse0x1c2f270();
   input += synapse0x1c2f2b0();
   input += synapse0x1c2f2f0();
   input += synapse0x1c2f330();
   input += synapse0x1c2f370();
   input += synapse0x1c2f3b0();
   input += synapse0x1c2f3f0();
   input += synapse0x1c2f430();
   input += synapse0x1c2f470();
   input += synapse0x1c2f020();
   input += synapse0x1c2f060();
   input += synapse0x1c2f0a0();
   input += synapse0x1c2f0e0();
   input += synapse0x1c2f6c0();
   input += synapse0x1c2f700();
   input += synapse0x1c2f740();
   input += synapse0x1c2f780();
   input += synapse0x1c2f7c0();
   input += synapse0x1c2f800();
   input += synapse0x1c2f840();
   input += synapse0x1c2f880();
   input += synapse0x1c2f8c0();
   input += synapse0x1c2f900();
   input += synapse0x1c2f940();
   input += synapse0x1c2f980();
   input += synapse0x1c2f9c0();
   input += synapse0x1c2fa00();
   return input;
}

double NNfunction_NG_2::neuron0x1c2e8e0() {
   double input = input0x1c2e8e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c2fa40() {
   double input = -0.0363481;
   input += synapse0x1c2fd80();
   input += synapse0x1c2fdc0();
   input += synapse0x1c2fe00();
   input += synapse0x1c2fe40();
   input += synapse0x1c2fe80();
   input += synapse0x1c2fec0();
   input += synapse0x1c2ff00();
   input += synapse0x1c2ff40();
   input += synapse0x1c2ff80();
   input += synapse0x1c2ffc0();
   input += synapse0x1c30000();
   input += synapse0x1c30040();
   input += synapse0x1c30080();
   input += synapse0x1c300c0();
   input += synapse0x1c30100();
   input += synapse0x1c30140();
   input += synapse0x1c2fbd0();
   input += synapse0x1c2fc10();
   input += synapse0x1c30290();
   input += synapse0x1c302d0();
   input += synapse0x1c30310();
   input += synapse0x1c30350();
   input += synapse0x1c30390();
   input += synapse0x1c303d0();
   input += synapse0x1c30410();
   input += synapse0x1c30450();
   input += synapse0x1c30490();
   input += synapse0x1c304d0();
   input += synapse0x1c30510();
   input += synapse0x1c30550();
   input += synapse0x1c30590();
   input += synapse0x1c305d0();
   input += synapse0x1c30180();
   input += synapse0x1c301c0();
   input += synapse0x1c30200();
   input += synapse0x1c30240();
   input += synapse0x1c30820();
   input += synapse0x1c30860();
   input += synapse0x1c308a0();
   input += synapse0x1c308e0();
   input += synapse0x1c30920();
   input += synapse0x1c30960();
   input += synapse0x1c309a0();
   input += synapse0x1c309e0();
   input += synapse0x1c30a20();
   input += synapse0x1c30a60();
   input += synapse0x1c30aa0();
   input += synapse0x1c30ae0();
   input += synapse0x1c30b20();
   input += synapse0x1c30b60();
   return input;
}

double NNfunction_NG_2::neuron0x1c2fa40() {
   double input = input0x1c2fa40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_2::input0x1c30ba0() {
   double input = 9.18347;
   input += synapse0x1c01c80();
   input += synapse0x1c30dc0();
   input += synapse0x1c30e00();
   input += synapse0x1c30e40();
   input += synapse0x1c30e80();
   return input;
}

double NNfunction_NG_2::neuron0x1c30ba0() {
   double input = input0x1c30ba0();
   return (input * 1)+0;
}

double NNfunction_NG_2::synapse0x19bcad0() {
   return (neuron0x1bfcc60()*-0.0329644);
}

double NNfunction_NG_2::synapse0x1bfcb20() {
   return (neuron0x1bfcfa0()*-0.0233194);
}

double NNfunction_NG_2::synapse0x1bfcb60() {
   return (neuron0x1bfd2e0()*0.140773);
}

double NNfunction_NG_2::synapse0x1c01f70() {
   return (neuron0x1bfd620()*0.094239);
}

double NNfunction_NG_2::synapse0x1c01fb0() {
   return (neuron0x1bfd960()*-0.0338054);
}

double NNfunction_NG_2::synapse0x1c01ff0() {
   return (neuron0x1bfdca0()*-0.0247673);
}

double NNfunction_NG_2::synapse0x1c02030() {
   return (neuron0x1bfdfe0()*-0.0478953);
}

double NNfunction_NG_2::synapse0x1c02070() {
   return (neuron0x1bfe320()*-0.0289474);
}

double NNfunction_NG_2::synapse0x1c020b0() {
   return (neuron0x1bfe660()*0.0467434);
}

double NNfunction_NG_2::synapse0x1c020f0() {
   return (neuron0x1bfe9a0()*0.0508879);
}

double NNfunction_NG_2::synapse0x1c02130() {
   return (neuron0x1bfece0()*0.0283348);
}

double NNfunction_NG_2::synapse0x1c02170() {
   return (neuron0x1bff020()*0.718744);
}

double NNfunction_NG_2::synapse0x1c021b0() {
   return (neuron0x1bff360()*0.0392224);
}

double NNfunction_NG_2::synapse0x1c021f0() {
   return (neuron0x1bff6a0()*0.0243403);
}

double NNfunction_NG_2::synapse0x1c02230() {
   return (neuron0x1bff9e0()*-2.49042);
}

double NNfunction_NG_2::synapse0x1c02270() {
   return (neuron0x1bffd20()*-0.0322627);
}

double NNfunction_NG_2::synapse0x1bfca90() {
   return (neuron0x1c00060()*-0.0476203);
}

double NNfunction_NG_2::synapse0x1bfcad0() {
   return (neuron0x1c005c0()*0.302118);
}

double NNfunction_NG_2::synapse0x19ae320() {
   return (neuron0x1c007e0()*0.0553754);
}

double NNfunction_NG_2::synapse0x19ae360() {
   return (neuron0x1c00b20()*0.0199394);
}

double NNfunction_NG_2::synapse0x1c024d0() {
   return (neuron0x1c00e60()*-0.01507);
}

double NNfunction_NG_2::synapse0x1c02510() {
   return (neuron0x1c011a0()*0.00505641);
}

double NNfunction_NG_2::synapse0x1c02550() {
   return (neuron0x1c014e0()*-0.00821455);
}

double NNfunction_NG_2::synapse0x1c02590() {
   return (neuron0x1c01820()*-0.00732174);
}

double NNfunction_NG_2::synapse0x1c02910() {
   return (neuron0x1bfcc60()*0.118537);
}

double NNfunction_NG_2::synapse0x1c02950() {
   return (neuron0x1bfcfa0()*7.50142);
}

double NNfunction_NG_2::synapse0x1c02990() {
   return (neuron0x1bfd2e0()*0.168983);
}

double NNfunction_NG_2::synapse0x1c029d0() {
   return (neuron0x1bfd620()*0.0140696);
}

double NNfunction_NG_2::synapse0x1c02a10() {
   return (neuron0x1bfd960()*0.0318679);
}

double NNfunction_NG_2::synapse0x1c02a50() {
   return (neuron0x1bfdca0()*-0.00207672);
}

double NNfunction_NG_2::synapse0x1c02a90() {
   return (neuron0x1bfdfe0()*-0.0123436);
}

double NNfunction_NG_2::synapse0x1c02ad0() {
   return (neuron0x1bfe320()*-0.0221141);
}

double NNfunction_NG_2::synapse0x1c02b10() {
   return (neuron0x1bfe660()*0.0325851);
}

double NNfunction_NG_2::synapse0x1c023c0() {
   return (neuron0x1bfe9a0()*-0.00395525);
}

double NNfunction_NG_2::synapse0x1c02400() {
   return (neuron0x1bfece0()*0.0257471);
}

double NNfunction_NG_2::synapse0x1c02440() {
   return (neuron0x1bff020()*0.426105);
}

double NNfunction_NG_2::synapse0x1c02480() {
   return (neuron0x1bff360()*0.0653435);
}

double NNfunction_NG_2::synapse0x1c02d60() {
   return (neuron0x1bff6a0()*0.0504493);
}

double NNfunction_NG_2::synapse0x1c02da0() {
   return (neuron0x1bff9e0()*-0.226244);
}

double NNfunction_NG_2::synapse0x1c02de0() {
   return (neuron0x1bffd20()*-0.0207611);
}

double NNfunction_NG_2::synapse0x1c02760() {
   return (neuron0x1c00060()*-0.000468787);
}

double NNfunction_NG_2::synapse0x1c027a0() {
   return (neuron0x1c005c0()*-0.0986689);
}

double NNfunction_NG_2::synapse0x1c02f30() {
   return (neuron0x1c007e0()*-0.00439849);
}

double NNfunction_NG_2::synapse0x1c02f70() {
   return (neuron0x1c00b20()*-0.0165315);
}

double NNfunction_NG_2::synapse0x1c02fb0() {
   return (neuron0x1c00e60()*-0.0095078);
}

double NNfunction_NG_2::synapse0x1c02ff0() {
   return (neuron0x1c011a0()*0.0019109);
}

double NNfunction_NG_2::synapse0x1c03030() {
   return (neuron0x1c014e0()*0.0470871);
}

double NNfunction_NG_2::synapse0x1c03070() {
   return (neuron0x1c01820()*-4.37215);
}

double NNfunction_NG_2::synapse0x1c033f0() {
   return (neuron0x1bfcc60()*0.0463056);
}

double NNfunction_NG_2::synapse0x1c03430() {
   return (neuron0x1bfcfa0()*0.0627133);
}

double NNfunction_NG_2::synapse0x1c03470() {
   return (neuron0x1bfd2e0()*-0.399637);
}

double NNfunction_NG_2::synapse0x1c034b0() {
   return (neuron0x1bfd620()*1.96098);
}

double NNfunction_NG_2::synapse0x1c034f0() {
   return (neuron0x1bfd960()*-0.0508835);
}

double NNfunction_NG_2::synapse0x1c03530() {
   return (neuron0x1bfdca0()*-0.00176925);
}

double NNfunction_NG_2::synapse0x1c03570() {
   return (neuron0x1bfdfe0()*0.0126531);
}

double NNfunction_NG_2::synapse0x1c035b0() {
   return (neuron0x1bfe320()*0.0642092);
}

double NNfunction_NG_2::synapse0x1c035f0() {
   return (neuron0x1bfe660()*-0.027571);
}

double NNfunction_NG_2::synapse0x1c03630() {
   return (neuron0x1bfe9a0()*-0.031768);
}

double NNfunction_NG_2::synapse0x1c03670() {
   return (neuron0x1bfece0()*-0.0785178);
}

double NNfunction_NG_2::synapse0x1c036b0() {
   return (neuron0x1bff020()*0.543777);
}

double NNfunction_NG_2::synapse0x1c036f0() {
   return (neuron0x1bff360()*-3.19722);
}

double NNfunction_NG_2::synapse0x1c03730() {
   return (neuron0x1bff6a0()*0.0186113);
}

double NNfunction_NG_2::synapse0x1c03770() {
   return (neuron0x1bff9e0()*0.154531);
}

double NNfunction_NG_2::synapse0x1c037b0() {
   return (neuron0x1bffd20()*0.00990415);
}

double NNfunction_NG_2::synapse0x1c03240() {
   return (neuron0x1c00060()*-0.00522732);
}

double NNfunction_NG_2::synapse0x1c03280() {
   return (neuron0x1c005c0()*0.0571436);
}

double NNfunction_NG_2::synapse0x19bc1a0() {
   return (neuron0x1c007e0()*0.00186286);
}

double NNfunction_NG_2::synapse0x19bc1e0() {
   return (neuron0x1c00b20()*-0.0105339);
}

double NNfunction_NG_2::synapse0x1bebcf0() {
   return (neuron0x1c00e60()*0.0279314);
}

double NNfunction_NG_2::synapse0x1bebd30() {
   return (neuron0x1c011a0()*-0.000654703);
}

double NNfunction_NG_2::synapse0x1bebd70() {
   return (neuron0x1c014e0()*-0.00438339);
}

double NNfunction_NG_2::synapse0x1bfcba0() {
   return (neuron0x1c01820()*0.179123);
}

double NNfunction_NG_2::synapse0x1c02d00() {
   return (neuron0x1bfcc60()*-0.0474843);
}

double NNfunction_NG_2::synapse0x1bfcbe0() {
   return (neuron0x1bfcfa0()*-2.84559);
}

double NNfunction_NG_2::synapse0x1bfcc20() {
   return (neuron0x1bfd2e0()*1.746);
}

double NNfunction_NG_2::synapse0x1c03900() {
   return (neuron0x1bfd620()*0.0740848);
}

double NNfunction_NG_2::synapse0x1c03940() {
   return (neuron0x1bfd960()*-0.111238);
}

double NNfunction_NG_2::synapse0x1c03980() {
   return (neuron0x1bfdca0()*-0.000362211);
}

double NNfunction_NG_2::synapse0x1c039c0() {
   return (neuron0x1bfdfe0()*-0.0397269);
}

double NNfunction_NG_2::synapse0x1c03a00() {
   return (neuron0x1bfe320()*-0.0649492);
}

double NNfunction_NG_2::synapse0x1c03a40() {
   return (neuron0x1bfe660()*0.00881376);
}

double NNfunction_NG_2::synapse0x1c03a80() {
   return (neuron0x1bfe9a0()*-0.013235);
}

double NNfunction_NG_2::synapse0x1c03ac0() {
   return (neuron0x1bfece0()*0.0809311);
}

double NNfunction_NG_2::synapse0x1c03b00() {
   return (neuron0x1bff020()*0.561387);
}

double NNfunction_NG_2::synapse0x1c03b40() {
   return (neuron0x1bff360()*0.00287701);
}

double NNfunction_NG_2::synapse0x1c03b80() {
   return (neuron0x1bff6a0()*0.0714104);
}

double NNfunction_NG_2::synapse0x1c03bc0() {
   return (neuron0x1bff9e0()*-0.0274482);
}

double NNfunction_NG_2::synapse0x1c03c00() {
   return (neuron0x1bffd20()*0.0195961);
}

double NNfunction_NG_2::synapse0x1c02b50() {
   return (neuron0x1c00060()*0.0806456);
}

double NNfunction_NG_2::synapse0x1c02b90() {
   return (neuron0x1c005c0()*-0.0800536);
}

double NNfunction_NG_2::synapse0x1c03d50() {
   return (neuron0x1c007e0()*0.0184069);
}

double NNfunction_NG_2::synapse0x1c03d90() {
   return (neuron0x1c00b20()*0.0389683);
}

double NNfunction_NG_2::synapse0x1c03dd0() {
   return (neuron0x1c00e60()*0.0626456);
}

double NNfunction_NG_2::synapse0x1c03e10() {
   return (neuron0x1c011a0()*-0.0745083);
}

double NNfunction_NG_2::synapse0x1c03e50() {
   return (neuron0x1c014e0()*-0.0127094);
}

double NNfunction_NG_2::synapse0x1c03e90() {
   return (neuron0x1c01820()*-1.41079);
}

double NNfunction_NG_2::synapse0x1c04210() {
   return (neuron0x1bfcc60()*-0.018196);
}

double NNfunction_NG_2::synapse0x1c04250() {
   return (neuron0x1bfcfa0()*0.122172);
}

double NNfunction_NG_2::synapse0x1c04290() {
   return (neuron0x1bfd2e0()*0.0593292);
}

double NNfunction_NG_2::synapse0x1c042d0() {
   return (neuron0x1bfd620()*1.81957);
}

double NNfunction_NG_2::synapse0x1c04310() {
   return (neuron0x1bfd960()*-0.000594437);
}

double NNfunction_NG_2::synapse0x1c04350() {
   return (neuron0x1bfdca0()*0.00794396);
}

double NNfunction_NG_2::synapse0x1c04390() {
   return (neuron0x1bfdfe0()*0.0158265);
}

double NNfunction_NG_2::synapse0x1c043d0() {
   return (neuron0x1bfe320()*-0.0101859);
}

double NNfunction_NG_2::synapse0x1c04410() {
   return (neuron0x1bfe660()*-0.00423327);
}

double NNfunction_NG_2::synapse0x1c04450() {
   return (neuron0x1bfe9a0()*0.00574956);
}

double NNfunction_NG_2::synapse0x1c04490() {
   return (neuron0x1bfece0()*0.018601);
}

double NNfunction_NG_2::synapse0x1c044d0() {
   return (neuron0x1bff020()*0.0980253);
}

double NNfunction_NG_2::synapse0x1c04510() {
   return (neuron0x1bff360()*0.00502907);
}

double NNfunction_NG_2::synapse0x1c04550() {
   return (neuron0x1bff6a0()*-0.00311752);
}

double NNfunction_NG_2::synapse0x1c04590() {
   return (neuron0x1bff9e0()*0.0559466);
}

double NNfunction_NG_2::synapse0x1c045d0() {
   return (neuron0x1bffd20()*-0.0200237);
}

double NNfunction_NG_2::synapse0x1c04060() {
   return (neuron0x1c00060()*0.00602115);
}

double NNfunction_NG_2::synapse0x1c040a0() {
   return (neuron0x1c005c0()*-0.00796325);
}

double NNfunction_NG_2::synapse0x1c04720() {
   return (neuron0x1c007e0()*-0.0352031);
}

double NNfunction_NG_2::synapse0x1c04760() {
   return (neuron0x1c00b20()*0.00209307);
}

double NNfunction_NG_2::synapse0x1c047a0() {
   return (neuron0x1c00e60()*-0.0177029);
}

double NNfunction_NG_2::synapse0x1c047e0() {
   return (neuron0x1c011a0()*-0.0273274);
}

double NNfunction_NG_2::synapse0x1c04820() {
   return (neuron0x1c014e0()*0.00957275);
}

double NNfunction_NG_2::synapse0x1c04860() {
   return (neuron0x1c01820()*2.77369);
}

double NNfunction_NG_2::synapse0x1c04be0() {
   return (neuron0x1bfcc60()*-0.038526);
}

double NNfunction_NG_2::synapse0x1c04c20() {
   return (neuron0x1bfcfa0()*0.0803637);
}

double NNfunction_NG_2::synapse0x1c04c60() {
   return (neuron0x1bfd2e0()*0.272108);
}

double NNfunction_NG_2::synapse0x1c04ca0() {
   return (neuron0x1bfd620()*-0.692071);
}

double NNfunction_NG_2::synapse0x1c04ce0() {
   return (neuron0x1bfd960()*0.0690865);
}

double NNfunction_NG_2::synapse0x1c04d20() {
   return (neuron0x1bfdca0()*0.0199296);
}

double NNfunction_NG_2::synapse0x1c04d60() {
   return (neuron0x1bfdfe0()*0.0182693);
}

double NNfunction_NG_2::synapse0x1c04da0() {
   return (neuron0x1bfe320()*-0.0070284);
}

double NNfunction_NG_2::synapse0x1c04de0() {
   return (neuron0x1bfe660()*0.019159);
}

double NNfunction_NG_2::synapse0x19bc530() {
   return (neuron0x1bfe9a0()*0.0236194);
}

double NNfunction_NG_2::synapse0x19bc570() {
   return (neuron0x1bfece0()*0.0356889);
}

double NNfunction_NG_2::synapse0x19bc5b0() {
   return (neuron0x1bff020()*1.26077);
}

double NNfunction_NG_2::synapse0x19bc5f0() {
   return (neuron0x1bff360()*-0.356094);
}

double NNfunction_NG_2::synapse0x19bc630() {
   return (neuron0x1bff6a0()*-0.0659494);
}

double NNfunction_NG_2::synapse0x19bc670() {
   return (neuron0x1bff9e0()*-0.168235);
}

double NNfunction_NG_2::synapse0x19bc6b0() {
   return (neuron0x1bffd20()*0.0191974);
}

double NNfunction_NG_2::synapse0x1c04a30() {
   return (neuron0x1c00060()*-0.00775538);
}

double NNfunction_NG_2::synapse0x1c04a70() {
   return (neuron0x1c005c0()*-0.0147521);
}

double NNfunction_NG_2::synapse0x19bc800() {
   return (neuron0x1c007e0()*-0.10992);
}

double NNfunction_NG_2::synapse0x19bc840() {
   return (neuron0x1c00b20()*0.0297671);
}

double NNfunction_NG_2::synapse0x19bc880() {
   return (neuron0x1c00e60()*-0.0151668);
}

double NNfunction_NG_2::synapse0x19bc8c0() {
   return (neuron0x1c011a0()*-0.0333909);
}

double NNfunction_NG_2::synapse0x19bc900() {
   return (neuron0x1c014e0()*0.0440406);
}

double NNfunction_NG_2::synapse0x1c05630() {
   return (neuron0x1c01820()*-0.745746);
}

double NNfunction_NG_2::synapse0x1c059b0() {
   return (neuron0x1bfcc60()*-0.0172413);
}

double NNfunction_NG_2::synapse0x1c059f0() {
   return (neuron0x1bfcfa0()*-0.0261849);
}

double NNfunction_NG_2::synapse0x1c05a30() {
   return (neuron0x1bfd2e0()*0.159346);
}

double NNfunction_NG_2::synapse0x1c05a70() {
   return (neuron0x1bfd620()*1.38068);
}

double NNfunction_NG_2::synapse0x1c05ab0() {
   return (neuron0x1bfd960()*0.0248728);
}

double NNfunction_NG_2::synapse0x1c05af0() {
   return (neuron0x1bfdca0()*-0.00770594);
}

double NNfunction_NG_2::synapse0x1c05b30() {
   return (neuron0x1bfdfe0()*-0.0250179);
}

double NNfunction_NG_2::synapse0x1c05b70() {
   return (neuron0x1bfe320()*-0.00452381);
}

double NNfunction_NG_2::synapse0x1c05bb0() {
   return (neuron0x1bfe660()*0.0165071);
}

double NNfunction_NG_2::synapse0x1c05bf0() {
   return (neuron0x1bfe9a0()*0.016013);
}

double NNfunction_NG_2::synapse0x1c05c30() {
   return (neuron0x1bfece0()*-0.0216007);
}

double NNfunction_NG_2::synapse0x1c05c70() {
   return (neuron0x1bff020()*0.166311);
}

double NNfunction_NG_2::synapse0x1c05cb0() {
   return (neuron0x1bff360()*-0.00814205);
}

double NNfunction_NG_2::synapse0x1c05cf0() {
   return (neuron0x1bff6a0()*0.0341088);
}

double NNfunction_NG_2::synapse0x1c05d30() {
   return (neuron0x1bff9e0()*0.0182249);
}

double NNfunction_NG_2::synapse0x1c05d70() {
   return (neuron0x1bffd20()*-0.00609509);
}

double NNfunction_NG_2::synapse0x1c05800() {
   return (neuron0x1c00060()*0.00814383);
}

double NNfunction_NG_2::synapse0x1c05840() {
   return (neuron0x1c005c0()*0.0281875);
}

double NNfunction_NG_2::synapse0x1c05ec0() {
   return (neuron0x1c007e0()*0.00778052);
}

double NNfunction_NG_2::synapse0x1c05f00() {
   return (neuron0x1c00b20()*0.0146017);
}

double NNfunction_NG_2::synapse0x1c05f40() {
   return (neuron0x1c00e60()*-0.00732456);
}

double NNfunction_NG_2::synapse0x1c05f80() {
   return (neuron0x1c011a0()*-0.00602751);
}

double NNfunction_NG_2::synapse0x1c05fc0() {
   return (neuron0x1c014e0()*0.0154378);
}

double NNfunction_NG_2::synapse0x1c06000() {
   return (neuron0x1c01820()*-0.050474);
}

double NNfunction_NG_2::synapse0x1c06380() {
   return (neuron0x1bfcc60()*-0.00434336);
}

double NNfunction_NG_2::synapse0x1c063c0() {
   return (neuron0x1bfcfa0()*-0.00564147);
}

double NNfunction_NG_2::synapse0x1c06400() {
   return (neuron0x1bfd2e0()*-0.554255);
}

double NNfunction_NG_2::synapse0x1c06440() {
   return (neuron0x1bfd620()*-0.01292);
}

double NNfunction_NG_2::synapse0x1c06480() {
   return (neuron0x1bfd960()*0.0391979);
}

double NNfunction_NG_2::synapse0x1c064c0() {
   return (neuron0x1bfdca0()*-0.00436839);
}

double NNfunction_NG_2::synapse0x1c06500() {
   return (neuron0x1bfdfe0()*0.0110005);
}

double NNfunction_NG_2::synapse0x1c06540() {
   return (neuron0x1bfe320()*0.00424374);
}

double NNfunction_NG_2::synapse0x1c06580() {
   return (neuron0x1bfe660()*0.00303359);
}

double NNfunction_NG_2::synapse0x1c065c0() {
   return (neuron0x1bfe9a0()*0.0125425);
}

double NNfunction_NG_2::synapse0x1c06600() {
   return (neuron0x1bfece0()*0.00762516);
}

double NNfunction_NG_2::synapse0x1c06640() {
   return (neuron0x1bff020()*0.0774853);
}

double NNfunction_NG_2::synapse0x1c06680() {
   return (neuron0x1bff360()*-0.00379363);
}

double NNfunction_NG_2::synapse0x1c066c0() {
   return (neuron0x1bff6a0()*-0.0137196);
}

double NNfunction_NG_2::synapse0x1c06700() {
   return (neuron0x1bff9e0()*-0.000871471);
}

double NNfunction_NG_2::synapse0x1c06740() {
   return (neuron0x1bffd20()*-0.00501116);
}

double NNfunction_NG_2::synapse0x1c061d0() {
   return (neuron0x1c00060()*0.00660869);
}

double NNfunction_NG_2::synapse0x1c06210() {
   return (neuron0x1c005c0()*-0.0357542);
}

double NNfunction_NG_2::synapse0x1c06890() {
   return (neuron0x1c007e0()*-0.0203752);
}

double NNfunction_NG_2::synapse0x1c068d0() {
   return (neuron0x1c00b20()*-0.00123307);
}

double NNfunction_NG_2::synapse0x1c06910() {
   return (neuron0x1c00e60()*-0.00211857);
}

double NNfunction_NG_2::synapse0x1c06950() {
   return (neuron0x1c011a0()*-0.0160596);
}

double NNfunction_NG_2::synapse0x1c06990() {
   return (neuron0x1c014e0()*-0.00479183);
}

double NNfunction_NG_2::synapse0x1c069d0() {
   return (neuron0x1c01820()*9.87615);
}

double NNfunction_NG_2::synapse0x1c004b0() {
   return (neuron0x1bfcc60()*-0.0214875);
}

double NNfunction_NG_2::synapse0x1c004f0() {
   return (neuron0x1bfcfa0()*5.94662);
}

double NNfunction_NG_2::synapse0x1c00530() {
   return (neuron0x1bfd2e0()*1.116);
}

double NNfunction_NG_2::synapse0x1c00570() {
   return (neuron0x1bfd620()*0.0216841);
}

double NNfunction_NG_2::synapse0x1c06f60() {
   return (neuron0x1bfd960()*-0.0152307);
}

double NNfunction_NG_2::synapse0x1c06fa0() {
   return (neuron0x1bfdca0()*-0.00329242);
}

double NNfunction_NG_2::synapse0x1c06fe0() {
   return (neuron0x1bfdfe0()*-0.0283675);
}

double NNfunction_NG_2::synapse0x1c07020() {
   return (neuron0x1bfe320()*-0.0278785);
}

double NNfunction_NG_2::synapse0x1c07060() {
   return (neuron0x1bfe660()*-0.00892581);
}

double NNfunction_NG_2::synapse0x1c070a0() {
   return (neuron0x1bfe9a0()*-0.00281653);
}

double NNfunction_NG_2::synapse0x1c070e0() {
   return (neuron0x1bfece0()*0.0168775);
}

double NNfunction_NG_2::synapse0x1c07120() {
   return (neuron0x1bff020()*0.252826);
}

double NNfunction_NG_2::synapse0x1c07160() {
   return (neuron0x1bff360()*0.0517907);
}

double NNfunction_NG_2::synapse0x1c071a0() {
   return (neuron0x1bff6a0()*0.00712087);
}

double NNfunction_NG_2::synapse0x1c071e0() {
   return (neuron0x1bff9e0()*-0.161758);
}

double NNfunction_NG_2::synapse0x1c07220() {
   return (neuron0x1bffd20()*0.00804681);
}

double NNfunction_NG_2::synapse0x1c06ba0() {
   return (neuron0x1c00060()*-0.0155166);
}

double NNfunction_NG_2::synapse0x1c06be0() {
   return (neuron0x1c005c0()*-0.0195529);
}

double NNfunction_NG_2::synapse0x1c07370() {
   return (neuron0x1c007e0()*-0.00209642);
}

double NNfunction_NG_2::synapse0x1c073b0() {
   return (neuron0x1c00b20()*-0.00461539);
}

double NNfunction_NG_2::synapse0x1c073f0() {
   return (neuron0x1c00e60()*0.00520694);
}

double NNfunction_NG_2::synapse0x1c07430() {
   return (neuron0x1c011a0()*0.00908415);
}

double NNfunction_NG_2::synapse0x1c07470() {
   return (neuron0x1c014e0()*-0.0170147);
}

double NNfunction_NG_2::synapse0x1c074b0() {
   return (neuron0x1c01820()*3.84855);
}

double NNfunction_NG_2::synapse0x1c07830() {
   return (neuron0x1bfcc60()*0.00736829);
}

double NNfunction_NG_2::synapse0x1c07870() {
   return (neuron0x1bfcfa0()*-5.73303);
}

double NNfunction_NG_2::synapse0x1c078b0() {
   return (neuron0x1bfd2e0()*-0.601377);
}

double NNfunction_NG_2::synapse0x1c078f0() {
   return (neuron0x1bfd620()*0.0306715);
}

double NNfunction_NG_2::synapse0x1c07930() {
   return (neuron0x1bfd960()*0.00704092);
}

double NNfunction_NG_2::synapse0x1c07970() {
   return (neuron0x1bfdca0()*-0.00709294);
}

double NNfunction_NG_2::synapse0x1c079b0() {
   return (neuron0x1bfdfe0()*0.0142738);
}

double NNfunction_NG_2::synapse0x1c079f0() {
   return (neuron0x1bfe320()*0.0295617);
}

double NNfunction_NG_2::synapse0x1c07a30() {
   return (neuron0x1bfe660()*-0.000485048);
}

double NNfunction_NG_2::synapse0x1c07a70() {
   return (neuron0x1bfe9a0()*0.0128717);
}

double NNfunction_NG_2::synapse0x1c07ab0() {
   return (neuron0x1bfece0()*-0.0104114);
}

double NNfunction_NG_2::synapse0x1c07af0() {
   return (neuron0x1bff020()*-0.0396473);
}

double NNfunction_NG_2::synapse0x1c07b30() {
   return (neuron0x1bff360()*-0.0378572);
}

double NNfunction_NG_2::synapse0x1c07b70() {
   return (neuron0x1bff6a0()*-0.0169145);
}

double NNfunction_NG_2::synapse0x1c07bb0() {
   return (neuron0x1bff9e0()*0.175641);
}

double NNfunction_NG_2::synapse0x1c07bf0() {
   return (neuron0x1bffd20()*0.00878761);
}

double NNfunction_NG_2::synapse0x1c07680() {
   return (neuron0x1c00060()*0.0313113);
}

double NNfunction_NG_2::synapse0x1c076c0() {
   return (neuron0x1c005c0()*0.00715874);
}

double NNfunction_NG_2::synapse0x1c07d40() {
   return (neuron0x1c007e0()*0.0182251);
}

double NNfunction_NG_2::synapse0x1c07d80() {
   return (neuron0x1c00b20()*0.0228526);
}

double NNfunction_NG_2::synapse0x1c07dc0() {
   return (neuron0x1c00e60()*-0.0383918);
}

double NNfunction_NG_2::synapse0x1c07e00() {
   return (neuron0x1c011a0()*-0.00439715);
}

double NNfunction_NG_2::synapse0x1c07e40() {
   return (neuron0x1c014e0()*-0.00909592);
}

double NNfunction_NG_2::synapse0x1c07e80() {
   return (neuron0x1c01820()*-0.0324411);
}

double NNfunction_NG_2::synapse0x1c08200() {
   return (neuron0x1bfcc60()*0.0110404);
}

double NNfunction_NG_2::synapse0x1c08240() {
   return (neuron0x1bfcfa0()*0.038726);
}

double NNfunction_NG_2::synapse0x1c08280() {
   return (neuron0x1bfd2e0()*0.0156942);
}

double NNfunction_NG_2::synapse0x1c082c0() {
   return (neuron0x1bfd620()*4.48616);
}

double NNfunction_NG_2::synapse0x1c08300() {
   return (neuron0x1bfd960()*0.0213684);
}

double NNfunction_NG_2::synapse0x1c08340() {
   return (neuron0x1bfdca0()*0.0074643);
}

double NNfunction_NG_2::synapse0x1c08380() {
   return (neuron0x1bfdfe0()*0.00333183);
}

double NNfunction_NG_2::synapse0x1c083c0() {
   return (neuron0x1bfe320()*0.0238029);
}

double NNfunction_NG_2::synapse0x1c08400() {
   return (neuron0x1bfe660()*0.0556271);
}

double NNfunction_NG_2::synapse0x1c08440() {
   return (neuron0x1bfe9a0()*-0.0176486);
}

double NNfunction_NG_2::synapse0x1c08480() {
   return (neuron0x1bfece0()*-0.00806182);
}

double NNfunction_NG_2::synapse0x1c084c0() {
   return (neuron0x1bff020()*0.241922);
}

double NNfunction_NG_2::synapse0x1c08500() {
   return (neuron0x1bff360()*0.0740716);
}

double NNfunction_NG_2::synapse0x1c08540() {
   return (neuron0x1bff6a0()*0.0788083);
}

double NNfunction_NG_2::synapse0x1c08580() {
   return (neuron0x1bff9e0()*-0.0424776);
}

double NNfunction_NG_2::synapse0x1c085c0() {
   return (neuron0x1bffd20()*0.0283126);
}

double NNfunction_NG_2::synapse0x1c08050() {
   return (neuron0x1c00060()*0.00151443);
}

double NNfunction_NG_2::synapse0x1c08090() {
   return (neuron0x1c005c0()*0.0251474);
}

double NNfunction_NG_2::synapse0x1c04e20() {
   return (neuron0x1c007e0()*-0.0389605);
}

double NNfunction_NG_2::synapse0x1c04e60() {
   return (neuron0x1c00b20()*-0.00717134);
}

double NNfunction_NG_2::synapse0x1c04ea0() {
   return (neuron0x1c00e60()*0.0188782);
}

double NNfunction_NG_2::synapse0x1c04ee0() {
   return (neuron0x1c011a0()*0.00358164);
}

double NNfunction_NG_2::synapse0x1c04f20() {
   return (neuron0x1c014e0()*-0.00532018);
}

double NNfunction_NG_2::synapse0x1c04f60() {
   return (neuron0x1c01820()*-0.143182);
}

double NNfunction_NG_2::synapse0x1c052e0() {
   return (neuron0x1bfcc60()*-0.00538544);
}

double NNfunction_NG_2::synapse0x1c05320() {
   return (neuron0x1bfcfa0()*-0.168018);
}

double NNfunction_NG_2::synapse0x1c05360() {
   return (neuron0x1bfd2e0()*-0.143123);
}

double NNfunction_NG_2::synapse0x1c053a0() {
   return (neuron0x1bfd620()*-0.0589678);
}

double NNfunction_NG_2::synapse0x1c053e0() {
   return (neuron0x1bfd960()*-0.0271135);
}

double NNfunction_NG_2::synapse0x1c05420() {
   return (neuron0x1bfdca0()*-0.00997173);
}

double NNfunction_NG_2::synapse0x1c05460() {
   return (neuron0x1bfdfe0()*-0.0577849);
}

double NNfunction_NG_2::synapse0x1c054a0() {
   return (neuron0x1bfe320()*-0.0101491);
}

double NNfunction_NG_2::synapse0x1c054e0() {
   return (neuron0x1bfe660()*0.0167016);
}

double NNfunction_NG_2::synapse0x1c05520() {
   return (neuron0x1bfe9a0()*0.0140963);
}

double NNfunction_NG_2::synapse0x1c05560() {
   return (neuron0x1bfece0()*0.0513305);
}

double NNfunction_NG_2::synapse0x1c055a0() {
   return (neuron0x1bff020()*-0.427601);
}

double NNfunction_NG_2::synapse0x1c055e0() {
   return (neuron0x1bff360()*-0.0646691);
}

double NNfunction_NG_2::synapse0x1c09720() {
   return (neuron0x1bff6a0()*0.0789671);
}

double NNfunction_NG_2::synapse0x1c09760() {
   return (neuron0x1bff9e0()*-0.848257);
}

double NNfunction_NG_2::synapse0x1c097a0() {
   return (neuron0x1bffd20()*-0.0940991);
}

double NNfunction_NG_2::synapse0x1c05130() {
   return (neuron0x1c00060()*0.00980168);
}

double NNfunction_NG_2::synapse0x1c05170() {
   return (neuron0x1c005c0()*1.11836);
}

double NNfunction_NG_2::synapse0x1c098f0() {
   return (neuron0x1c007e0()*0.0542459);
}

double NNfunction_NG_2::synapse0x1c09930() {
   return (neuron0x1c00b20()*-0.0231159);
}

double NNfunction_NG_2::synapse0x1c09970() {
   return (neuron0x1c00e60()*-0.0298226);
}

double NNfunction_NG_2::synapse0x1c099b0() {
   return (neuron0x1c011a0()*0.000157959);
}

double NNfunction_NG_2::synapse0x1c099f0() {
   return (neuron0x1c014e0()*0.0367921);
}

double NNfunction_NG_2::synapse0x1c09a30() {
   return (neuron0x1c01820()*-0.348904);
}

double NNfunction_NG_2::synapse0x1c09db0() {
   return (neuron0x1bfcc60()*0.0863473);
}

double NNfunction_NG_2::synapse0x1c09df0() {
   return (neuron0x1bfcfa0()*6.07818);
}

double NNfunction_NG_2::synapse0x1c09e30() {
   return (neuron0x1bfd2e0()*-0.448868);
}

double NNfunction_NG_2::synapse0x1c09e70() {
   return (neuron0x1bfd620()*0.0229736);
}

double NNfunction_NG_2::synapse0x1c09eb0() {
   return (neuron0x1bfd960()*0.0317949);
}

double NNfunction_NG_2::synapse0x1c09ef0() {
   return (neuron0x1bfdca0()*0.000197326);
}

double NNfunction_NG_2::synapse0x1c09f30() {
   return (neuron0x1bfdfe0()*-0.011035);
}

double NNfunction_NG_2::synapse0x1c09f70() {
   return (neuron0x1bfe320()*-0.00120208);
}

double NNfunction_NG_2::synapse0x1c09fb0() {
   return (neuron0x1bfe660()*-0.0243162);
}

double NNfunction_NG_2::synapse0x1c09ff0() {
   return (neuron0x1bfe9a0()*-0.00342658);
}

double NNfunction_NG_2::synapse0x1c0a030() {
   return (neuron0x1bfece0()*-0.0253687);
}

double NNfunction_NG_2::synapse0x1c0a070() {
   return (neuron0x1bff020()*-0.402973);
}

double NNfunction_NG_2::synapse0x1c0a0b0() {
   return (neuron0x1bff360()*-0.0279632);
}

double NNfunction_NG_2::synapse0x1c0a0f0() {
   return (neuron0x1bff6a0()*-0.00871645);
}

double NNfunction_NG_2::synapse0x1c0a130() {
   return (neuron0x1bff9e0()*0.320768);
}

double NNfunction_NG_2::synapse0x1c0a170() {
   return (neuron0x1bffd20()*-0.00210683);
}

double NNfunction_NG_2::synapse0x1c09c00() {
   return (neuron0x1c00060()*0.0414861);
}

double NNfunction_NG_2::synapse0x1c09c40() {
   return (neuron0x1c005c0()*0.0284188);
}

double NNfunction_NG_2::synapse0x1c0a2c0() {
   return (neuron0x1c007e0()*0.00485479);
}

double NNfunction_NG_2::synapse0x1c0a300() {
   return (neuron0x1c00b20()*0.0221036);
}

double NNfunction_NG_2::synapse0x1c0a340() {
   return (neuron0x1c00e60()*0.0136171);
}

double NNfunction_NG_2::synapse0x1c0a380() {
   return (neuron0x1c011a0()*-0.00127556);
}

double NNfunction_NG_2::synapse0x1c0a3c0() {
   return (neuron0x1c014e0()*-0.00283357);
}

double NNfunction_NG_2::synapse0x1c0a400() {
   return (neuron0x1c01820()*2.37499);
}

double NNfunction_NG_2::synapse0x1c0a780() {
   return (neuron0x1bfcc60()*-0.0391956);
}

double NNfunction_NG_2::synapse0x1c0a7c0() {
   return (neuron0x1bfcfa0()*0.0570408);
}

double NNfunction_NG_2::synapse0x1c0a800() {
   return (neuron0x1bfd2e0()*-1.05068);
}

double NNfunction_NG_2::synapse0x1c0a840() {
   return (neuron0x1bfd620()*0.829655);
}

double NNfunction_NG_2::synapse0x1c0a880() {
   return (neuron0x1bfd960()*-0.0240395);
}

double NNfunction_NG_2::synapse0x1c0a8c0() {
   return (neuron0x1bfdca0()*0.00232234);
}

double NNfunction_NG_2::synapse0x1c0a900() {
   return (neuron0x1bfdfe0()*0.00891415);
}

double NNfunction_NG_2::synapse0x1c0a940() {
   return (neuron0x1bfe320()*-0.0302395);
}

double NNfunction_NG_2::synapse0x1c0a980() {
   return (neuron0x1bfe660()*-0.0100693);
}

double NNfunction_NG_2::synapse0x1c0a9c0() {
   return (neuron0x1bfe9a0()*0.00450535);
}

double NNfunction_NG_2::synapse0x1c0aa00() {
   return (neuron0x1bfece0()*0.0197217);
}

double NNfunction_NG_2::synapse0x1c0aa40() {
   return (neuron0x1bff020()*-0.0760471);
}

double NNfunction_NG_2::synapse0x1c0aa80() {
   return (neuron0x1bff360()*0.0600054);
}

double NNfunction_NG_2::synapse0x1c0aac0() {
   return (neuron0x1bff6a0()*0.00892629);
}

double NNfunction_NG_2::synapse0x1c0ab00() {
   return (neuron0x1bff9e0()*0.100466);
}

double NNfunction_NG_2::synapse0x1c0ab40() {
   return (neuron0x1bffd20()*-0.0224278);
}

double NNfunction_NG_2::synapse0x1c0a5d0() {
   return (neuron0x1c00060()*0.0212025);
}

double NNfunction_NG_2::synapse0x1c0a610() {
   return (neuron0x1c005c0()*-0.05101);
}

double NNfunction_NG_2::synapse0x1c0ac90() {
   return (neuron0x1c007e0()*-0.00649673);
}

double NNfunction_NG_2::synapse0x1c0acd0() {
   return (neuron0x1c00b20()*0.00611057);
}

double NNfunction_NG_2::synapse0x1c0ad10() {
   return (neuron0x1c00e60()*-0.0137376);
}

double NNfunction_NG_2::synapse0x1c0ad50() {
   return (neuron0x1c011a0()*0.0180113);
}

double NNfunction_NG_2::synapse0x1c0ad90() {
   return (neuron0x1c014e0()*0.0105626);
}

double NNfunction_NG_2::synapse0x1c0add0() {
   return (neuron0x1c01820()*2.75697);
}

double NNfunction_NG_2::synapse0x1c0b150() {
   return (neuron0x1bfcc60()*0.0470556);
}

double NNfunction_NG_2::synapse0x1c0b190() {
   return (neuron0x1bfcfa0()*13.577);
}

double NNfunction_NG_2::synapse0x1c0b1d0() {
   return (neuron0x1bfd2e0()*0.141904);
}

double NNfunction_NG_2::synapse0x1c0b210() {
   return (neuron0x1bfd620()*0.0176775);
}

double NNfunction_NG_2::synapse0x1c0b250() {
   return (neuron0x1bfd960()*-0.0238145);
}

double NNfunction_NG_2::synapse0x1c0b290() {
   return (neuron0x1bfdca0()*0.0203254);
}

double NNfunction_NG_2::synapse0x1c0b2d0() {
   return (neuron0x1bfdfe0()*-0.0134974);
}

double NNfunction_NG_2::synapse0x1c0b310() {
   return (neuron0x1bfe320()*0.00288972);
}

double NNfunction_NG_2::synapse0x1c0b350() {
   return (neuron0x1bfe660()*0.00457966);
}

double NNfunction_NG_2::synapse0x1c0b390() {
   return (neuron0x1bfe9a0()*0.0124201);
}

double NNfunction_NG_2::synapse0x1c0b3d0() {
   return (neuron0x1bfece0()*0.003883);
}

double NNfunction_NG_2::synapse0x1c0b410() {
   return (neuron0x1bff020()*-0.0676622);
}

double NNfunction_NG_2::synapse0x1c0b450() {
   return (neuron0x1bff360()*-0.0218857);
}

double NNfunction_NG_2::synapse0x1c0b490() {
   return (neuron0x1bff6a0()*0.00233739);
}

double NNfunction_NG_2::synapse0x1c0b4d0() {
   return (neuron0x1bff9e0()*0.01808);
}

double NNfunction_NG_2::synapse0x1c0b510() {
   return (neuron0x1bffd20()*0.00765058);
}

double NNfunction_NG_2::synapse0x1c0afa0() {
   return (neuron0x1c00060()*0.0237086);
}

double NNfunction_NG_2::synapse0x1c0afe0() {
   return (neuron0x1c005c0()*-0.025175);
}

double NNfunction_NG_2::synapse0x1c0b660() {
   return (neuron0x1c007e0()*-0.0108841);
}

double NNfunction_NG_2::synapse0x1c0b6a0() {
   return (neuron0x1c00b20()*-0.0122398);
}

double NNfunction_NG_2::synapse0x1c0b6e0() {
   return (neuron0x1c00e60()*0.0341709);
}

double NNfunction_NG_2::synapse0x1c0b720() {
   return (neuron0x1c011a0()*0.00351729);
}

double NNfunction_NG_2::synapse0x1c0b760() {
   return (neuron0x1c014e0()*0.0111577);
}

double NNfunction_NG_2::synapse0x1c0b7a0() {
   return (neuron0x1c01820()*0.0537986);
}

double NNfunction_NG_2::synapse0x1c0bb20() {
   return (neuron0x1bfcc60()*0.013677);
}

double NNfunction_NG_2::synapse0x1bfce80() {
   return (neuron0x1bfcfa0()*0.0884711);
}

double NNfunction_NG_2::synapse0x1bfcec0() {
   return (neuron0x1bfd2e0()*0.125744);
}

double NNfunction_NG_2::synapse0x1bfd1c0() {
   return (neuron0x1bfd620()*-0.0271303);
}

double NNfunction_NG_2::synapse0x1bfd200() {
   return (neuron0x1bfd960()*-0.00679923);
}

double NNfunction_NG_2::synapse0x1bfd500() {
   return (neuron0x1bfdca0()*0.0278806);
}

double NNfunction_NG_2::synapse0x1bfd540() {
   return (neuron0x1bfdfe0()*-0.0141795);
}

double NNfunction_NG_2::synapse0x1bfd840() {
   return (neuron0x1bfe320()*0.0108212);
}

double NNfunction_NG_2::synapse0x1bfd880() {
   return (neuron0x1bfe660()*0.013274);
}

double NNfunction_NG_2::synapse0x1bfdb80() {
   return (neuron0x1bfe9a0()*0.00334754);
}

double NNfunction_NG_2::synapse0x1bfdbc0() {
   return (neuron0x1bfece0()*0.00504675);
}

double NNfunction_NG_2::synapse0x1bfdec0() {
   return (neuron0x1bff020()*-0.586287);
}

double NNfunction_NG_2::synapse0x1bfdf00() {
   return (neuron0x1bff360()*-0.0420646);
}

double NNfunction_NG_2::synapse0x1bfe200() {
   return (neuron0x1bff6a0()*-0.0222183);
}

double NNfunction_NG_2::synapse0x1bfe240() {
   return (neuron0x1bff9e0()*0.332815);
}

double NNfunction_NG_2::synapse0x1bfe540() {
   return (neuron0x1bffd20()*0.0321299);
}

double NNfunction_NG_2::synapse0x1bfe580() {
   return (neuron0x1c00060()*-0.00322078);
}

double NNfunction_NG_2::synapse0x1bfe880() {
   return (neuron0x1c005c0()*0.464566);
}

double NNfunction_NG_2::synapse0x1bfe8c0() {
   return (neuron0x1c007e0()*0.00473859);
}

double NNfunction_NG_2::synapse0x1bfebc0() {
   return (neuron0x1c00b20()*-0.00393654);
}

double NNfunction_NG_2::synapse0x1bfec00() {
   return (neuron0x1c00e60()*-0.0118238);
}

double NNfunction_NG_2::synapse0x1bfef00() {
   return (neuron0x1c011a0()*0.0031655);
}

double NNfunction_NG_2::synapse0x1bfef40() {
   return (neuron0x1c014e0()*-0.00239244);
}

double NNfunction_NG_2::synapse0x1bff240() {
   return (neuron0x1c01820()*-0.00289589);
}

double NNfunction_NG_2::synapse0x1bff280() {
   return (neuron0x1bfcc60()*-0.115783);
}

double NNfunction_NG_2::synapse0x1bfff40() {
   return (neuron0x1bfcfa0()*0.11029);
}

double NNfunction_NG_2::synapse0x1bfff80() {
   return (neuron0x1bfd2e0()*-1.41293);
}

double NNfunction_NG_2::synapse0x1c0b970() {
   return (neuron0x1bfd620()*-0.0852369);
}

double NNfunction_NG_2::synapse0x1c0b9b0() {
   return (neuron0x1bfd960()*-0.0209436);
}

double NNfunction_NG_2::synapse0x1c00280() {
   return (neuron0x1bfdca0()*0.00373922);
}

double NNfunction_NG_2::synapse0x1c002c0() {
   return (neuron0x1bfdfe0()*0.0103907);
}

double NNfunction_NG_2::synapse0x19ae200() {
   return (neuron0x1bfe320()*-0.0203429);
}

double NNfunction_NG_2::synapse0x19ae240() {
   return (neuron0x1bfe660()*-0.00604424);
}

double NNfunction_NG_2::synapse0x1c00a00() {
   return (neuron0x1bfe9a0()*0.130636);
}

double NNfunction_NG_2::synapse0x1c00a40() {
   return (neuron0x1bfece0()*0.146844);
}

double NNfunction_NG_2::synapse0x1c00d40() {
   return (neuron0x1bff020()*-0.0256255);
}

double NNfunction_NG_2::synapse0x1c00d80() {
   return (neuron0x1bff360()*0.0581907);
}

double NNfunction_NG_2::synapse0x1c01080() {
   return (neuron0x1bff6a0()*0.0488073);
}

double NNfunction_NG_2::synapse0x1c010c0() {
   return (neuron0x1bff9e0()*-0.433632);
}

double NNfunction_NG_2::synapse0x1c013c0() {
   return (neuron0x1bffd20()*-0.113315);
}

double NNfunction_NG_2::synapse0x1c01400() {
   return (neuron0x1c00060()*-0.0461435);
}

double NNfunction_NG_2::synapse0x1c01700() {
   return (neuron0x1c005c0()*-0.213013);
}

double NNfunction_NG_2::synapse0x1c01740() {
   return (neuron0x1c007e0()*-0.111313);
}

double NNfunction_NG_2::synapse0x1c01a40() {
   return (neuron0x1c00b20()*-0.00405255);
}

double NNfunction_NG_2::synapse0x1c01a80() {
   return (neuron0x1c00e60()*-0.104239);
}

double NNfunction_NG_2::synapse0x1bff580() {
   return (neuron0x1c011a0()*0.101343);
}

double NNfunction_NG_2::synapse0x1bff5c0() {
   return (neuron0x1c014e0()*-0.0157411);
}

double NNfunction_NG_2::synapse0x1c0d890() {
   return (neuron0x1c01820()*-0.362775);
}

double NNfunction_NG_2::synapse0x1c0dc10() {
   return (neuron0x1bfcc60()*-0.112256);
}

double NNfunction_NG_2::synapse0x1c0dc50() {
   return (neuron0x1bfcfa0()*-0.112337);
}

double NNfunction_NG_2::synapse0x1c0dc90() {
   return (neuron0x1bfd2e0()*-0.893453);
}

double NNfunction_NG_2::synapse0x1c0dcd0() {
   return (neuron0x1bfd620()*-0.110221);
}

double NNfunction_NG_2::synapse0x1c0dd10() {
   return (neuron0x1bfd960()*0.0788937);
}

double NNfunction_NG_2::synapse0x1c0dd50() {
   return (neuron0x1bfdca0()*-0.0264508);
}

double NNfunction_NG_2::synapse0x1c0dd90() {
   return (neuron0x1bfdfe0()*-0.0183448);
}

double NNfunction_NG_2::synapse0x1c0ddd0() {
   return (neuron0x1bfe320()*0.00135872);
}

double NNfunction_NG_2::synapse0x1c0de10() {
   return (neuron0x1bfe660()*-0.0168075);
}

double NNfunction_NG_2::synapse0x1c0de50() {
   return (neuron0x1bfe9a0()*0.0222114);
}

double NNfunction_NG_2::synapse0x1c0de90() {
   return (neuron0x1bfece0()*-0.0603059);
}

double NNfunction_NG_2::synapse0x1c0ded0() {
   return (neuron0x1bff020()*0.633624);
}

double NNfunction_NG_2::synapse0x1c0df10() {
   return (neuron0x1bff360()*-0.0665002);
}

double NNfunction_NG_2::synapse0x1c0df50() {
   return (neuron0x1bff6a0()*-0.00314453);
}

double NNfunction_NG_2::synapse0x1c0df90() {
   return (neuron0x1bff9e0()*-0.142929);
}

double NNfunction_NG_2::synapse0x1c0dfd0() {
   return (neuron0x1bffd20()*-0.0396798);
}

double NNfunction_NG_2::synapse0x1c0da60() {
   return (neuron0x1c00060()*0.0312988);
}

double NNfunction_NG_2::synapse0x1c0daa0() {
   return (neuron0x1c005c0()*-0.100311);
}

double NNfunction_NG_2::synapse0x1c0e120() {
   return (neuron0x1c007e0()*-0.0170733);
}

double NNfunction_NG_2::synapse0x1c0e160() {
   return (neuron0x1c00b20()*0.00619969);
}

double NNfunction_NG_2::synapse0x1c0e1a0() {
   return (neuron0x1c00e60()*-0.0337791);
}

double NNfunction_NG_2::synapse0x1c0e1e0() {
   return (neuron0x1c011a0()*-0.0219939);
}

double NNfunction_NG_2::synapse0x1c0e220() {
   return (neuron0x1c014e0()*0.0447115);
}

double NNfunction_NG_2::synapse0x1c0e260() {
   return (neuron0x1c01820()*-1.76733);
}

double NNfunction_NG_2::synapse0x1c0e5e0() {
   return (neuron0x1bfcc60()*-0.0166969);
}

double NNfunction_NG_2::synapse0x1c0e620() {
   return (neuron0x1bfcfa0()*-9.79963);
}

double NNfunction_NG_2::synapse0x1c0e660() {
   return (neuron0x1bfd2e0()*-1.5099);
}

double NNfunction_NG_2::synapse0x1c0e6a0() {
   return (neuron0x1bfd620()*-0.0104535);
}

double NNfunction_NG_2::synapse0x1c0e6e0() {
   return (neuron0x1bfd960()*0.000755311);
}

double NNfunction_NG_2::synapse0x1c0e720() {
   return (neuron0x1bfdca0()*-0.00511824);
}

double NNfunction_NG_2::synapse0x1c0e760() {
   return (neuron0x1bfdfe0()*0.0103723);
}

double NNfunction_NG_2::synapse0x1c0e7a0() {
   return (neuron0x1bfe320()*0.00936071);
}

double NNfunction_NG_2::synapse0x1c0e7e0() {
   return (neuron0x1bfe660()*0.00174749);
}

double NNfunction_NG_2::synapse0x1c0e820() {
   return (neuron0x1bfe9a0()*-0.00644413);
}

double NNfunction_NG_2::synapse0x1c0e860() {
   return (neuron0x1bfece0()*-0.0131628);
}

double NNfunction_NG_2::synapse0x1c0e8a0() {
   return (neuron0x1bff020()*-0.121874);
}

double NNfunction_NG_2::synapse0x1c0e8e0() {
   return (neuron0x1bff360()*-0.0273424);
}

double NNfunction_NG_2::synapse0x1c0e920() {
   return (neuron0x1bff6a0()*0.00268302);
}

double NNfunction_NG_2::synapse0x1c0e960() {
   return (neuron0x1bff9e0()*0.23887);
}

double NNfunction_NG_2::synapse0x1c0e9a0() {
   return (neuron0x1bffd20()*0.0214698);
}

double NNfunction_NG_2::synapse0x1c0e430() {
   return (neuron0x1c00060()*0.0281248);
}

double NNfunction_NG_2::synapse0x1c0e470() {
   return (neuron0x1c005c0()*0.0650901);
}

double NNfunction_NG_2::synapse0x1c0eaf0() {
   return (neuron0x1c007e0()*0.0251449);
}

double NNfunction_NG_2::synapse0x1c0eb30() {
   return (neuron0x1c00b20()*0.00952982);
}

double NNfunction_NG_2::synapse0x1c0eb70() {
   return (neuron0x1c00e60()*-0.0681811);
}

double NNfunction_NG_2::synapse0x1c0ebb0() {
   return (neuron0x1c011a0()*-0.00726063);
}

double NNfunction_NG_2::synapse0x1c0ebf0() {
   return (neuron0x1c014e0()*-0.0199628);
}

double NNfunction_NG_2::synapse0x1c0ec30() {
   return (neuron0x1c01820()*0.0406427);
}

double NNfunction_NG_2::synapse0x1c0efb0() {
   return (neuron0x1bfcc60()*0.0785597);
}

double NNfunction_NG_2::synapse0x1c0eff0() {
   return (neuron0x1bfcfa0()*0.10112);
}

double NNfunction_NG_2::synapse0x1c0f030() {
   return (neuron0x1bfd2e0()*-0.51292);
}

double NNfunction_NG_2::synapse0x1c0f070() {
   return (neuron0x1bfd620()*-0.119317);
}

double NNfunction_NG_2::synapse0x1c0f0b0() {
   return (neuron0x1bfd960()*-0.0240675);
}

double NNfunction_NG_2::synapse0x1c0f0f0() {
   return (neuron0x1bfdca0()*0.0211529);
}

double NNfunction_NG_2::synapse0x1c0f130() {
   return (neuron0x1bfdfe0()*-0.0242858);
}

double NNfunction_NG_2::synapse0x1c0f170() {
   return (neuron0x1bfe320()*0.0290515);
}

double NNfunction_NG_2::synapse0x1c0f1b0() {
   return (neuron0x1bfe660()*0.0134906);
}

double NNfunction_NG_2::synapse0x1c0f1f0() {
   return (neuron0x1bfe9a0()*-0.0375555);
}

double NNfunction_NG_2::synapse0x1c0f230() {
   return (neuron0x1bfece0()*-0.0157625);
}

double NNfunction_NG_2::synapse0x1c0f270() {
   return (neuron0x1bff020()*-0.282515);
}

double NNfunction_NG_2::synapse0x1c0f2b0() {
   return (neuron0x1bff360()*-0.0601388);
}

double NNfunction_NG_2::synapse0x1c0f2f0() {
   return (neuron0x1bff6a0()*0.0387039);
}

double NNfunction_NG_2::synapse0x1c0f330() {
   return (neuron0x1bff9e0()*-0.593934);
}

double NNfunction_NG_2::synapse0x1c0f370() {
   return (neuron0x1bffd20()*-0.0121949);
}

double NNfunction_NG_2::synapse0x1c0ee00() {
   return (neuron0x1c00060()*-0.0766937);
}

double NNfunction_NG_2::synapse0x1c0ee40() {
   return (neuron0x1c005c0()*-0.00992824);
}

double NNfunction_NG_2::synapse0x1c0f4c0() {
   return (neuron0x1c007e0()*-0.017826);
}

double NNfunction_NG_2::synapse0x1c0f500() {
   return (neuron0x1c00b20()*-0.0369967);
}

double NNfunction_NG_2::synapse0x1c0f540() {
   return (neuron0x1c00e60()*0.0551805);
}

double NNfunction_NG_2::synapse0x1c0f580() {
   return (neuron0x1c011a0()*0.0777926);
}

double NNfunction_NG_2::synapse0x1c0f5c0() {
   return (neuron0x1c014e0()*-0.0146694);
}

double NNfunction_NG_2::synapse0x1c0f600() {
   return (neuron0x1c01820()*-0.520023);
}

double NNfunction_NG_2::synapse0x1c0f980() {
   return (neuron0x1bfcc60()*0.0132745);
}

double NNfunction_NG_2::synapse0x1c0f9c0() {
   return (neuron0x1bfcfa0()*-0.0396889);
}

double NNfunction_NG_2::synapse0x1c0fa00() {
   return (neuron0x1bfd2e0()*4.50425);
}

double NNfunction_NG_2::synapse0x1c0fa40() {
   return (neuron0x1bfd620()*0.0432595);
}

double NNfunction_NG_2::synapse0x1c0fa80() {
   return (neuron0x1bfd960()*-0.0270755);
}

double NNfunction_NG_2::synapse0x1c0fac0() {
   return (neuron0x1bfdca0()*0.00456652);
}

double NNfunction_NG_2::synapse0x1c0fb00() {
   return (neuron0x1bfdfe0()*0.00111863);
}

double NNfunction_NG_2::synapse0x1c0fb40() {
   return (neuron0x1bfe320()*-0.018786);
}

double NNfunction_NG_2::synapse0x1c0fb80() {
   return (neuron0x1bfe660()*-0.00475141);
}

double NNfunction_NG_2::synapse0x1c0fbc0() {
   return (neuron0x1bfe9a0()*-0.0122428);
}

double NNfunction_NG_2::synapse0x1c0fc00() {
   return (neuron0x1bfece0()*0.0178313);
}

double NNfunction_NG_2::synapse0x1c0fc40() {
   return (neuron0x1bff020()*0.473988);
}

double NNfunction_NG_2::synapse0x1c0fc80() {
   return (neuron0x1bff360()*0.0294814);
}

double NNfunction_NG_2::synapse0x1c0fcc0() {
   return (neuron0x1bff6a0()*0.0147611);
}

double NNfunction_NG_2::synapse0x1c0fd00() {
   return (neuron0x1bff9e0()*-0.169109);
}

double NNfunction_NG_2::synapse0x1c0fd40() {
   return (neuron0x1bffd20()*0.00224024);
}

double NNfunction_NG_2::synapse0x1c0f7d0() {
   return (neuron0x1c00060()*0.00297082);
}

double NNfunction_NG_2::synapse0x1c0f810() {
   return (neuron0x1c005c0()*-0.0201524);
}

double NNfunction_NG_2::synapse0x1c0fe90() {
   return (neuron0x1c007e0()*0.0172825);
}

double NNfunction_NG_2::synapse0x1c0fed0() {
   return (neuron0x1c00b20()*0.00395601);
}

double NNfunction_NG_2::synapse0x1c0ff10() {
   return (neuron0x1c00e60()*-0.0114702);
}

double NNfunction_NG_2::synapse0x1c0ff50() {
   return (neuron0x1c011a0()*0.00185705);
}

double NNfunction_NG_2::synapse0x1c0ff90() {
   return (neuron0x1c014e0()*0.00117805);
}

double NNfunction_NG_2::synapse0x1c0ffd0() {
   return (neuron0x1c01820()*4.84136);
}

double NNfunction_NG_2::synapse0x1c10350() {
   return (neuron0x1bfcc60()*0.111084);
}

double NNfunction_NG_2::synapse0x1c10390() {
   return (neuron0x1bfcfa0()*0.308422);
}

double NNfunction_NG_2::synapse0x1c103d0() {
   return (neuron0x1bfd2e0()*-0.626228);
}

double NNfunction_NG_2::synapse0x1c10410() {
   return (neuron0x1bfd620()*-0.907598);
}

double NNfunction_NG_2::synapse0x1c10450() {
   return (neuron0x1bfd960()*-0.00867728);
}

double NNfunction_NG_2::synapse0x1c10490() {
   return (neuron0x1bfdca0()*0.0273413);
}

double NNfunction_NG_2::synapse0x1c104d0() {
   return (neuron0x1bfdfe0()*0.0880451);
}

double NNfunction_NG_2::synapse0x1c10510() {
   return (neuron0x1bfe320()*-0.00416468);
}

double NNfunction_NG_2::synapse0x1c10550() {
   return (neuron0x1bfe660()*-0.0111867);
}

double NNfunction_NG_2::synapse0x1c08710() {
   return (neuron0x1bfe9a0()*-0.00933785);
}

double NNfunction_NG_2::synapse0x1c08750() {
   return (neuron0x1bfece0()*0.0389078);
}

double NNfunction_NG_2::synapse0x1c08790() {
   return (neuron0x1bff020()*-0.00723352);
}

double NNfunction_NG_2::synapse0x1c087d0() {
   return (neuron0x1bff360()*0.0104226);
}

double NNfunction_NG_2::synapse0x1c08810() {
   return (neuron0x1bff6a0()*-0.0686091);
}

double NNfunction_NG_2::synapse0x1c08850() {
   return (neuron0x1bff9e0()*-0.0644819);
}

double NNfunction_NG_2::synapse0x1c08890() {
   return (neuron0x1bffd20()*0.0447877);
}

double NNfunction_NG_2::synapse0x1c101a0() {
   return (neuron0x1c00060()*0.0418366);
}

double NNfunction_NG_2::synapse0x1c101e0() {
   return (neuron0x1c005c0()*0.0932238);
}

double NNfunction_NG_2::synapse0x1c089e0() {
   return (neuron0x1c007e0()*-0.00995449);
}

double NNfunction_NG_2::synapse0x1c08a20() {
   return (neuron0x1c00b20()*-0.0314223);
}

double NNfunction_NG_2::synapse0x1c08a60() {
   return (neuron0x1c00e60()*-0.0216851);
}

double NNfunction_NG_2::synapse0x1c08aa0() {
   return (neuron0x1c011a0()*-0.0921948);
}

double NNfunction_NG_2::synapse0x1c08ae0() {
   return (neuron0x1c014e0()*-0.0532142);
}

double NNfunction_NG_2::synapse0x1c08b20() {
   return (neuron0x1c01820()*-0.827875);
}

double NNfunction_NG_2::synapse0x1c08ea0() {
   return (neuron0x1bfcc60()*0.0194703);
}

double NNfunction_NG_2::synapse0x1c08ee0() {
   return (neuron0x1bfcfa0()*0.0294901);
}

double NNfunction_NG_2::synapse0x1c08f20() {
   return (neuron0x1bfd2e0()*-0.151349);
}

double NNfunction_NG_2::synapse0x1c08f60() {
   return (neuron0x1bfd620()*2.6463);
}

double NNfunction_NG_2::synapse0x1c08fa0() {
   return (neuron0x1bfd960()*-0.0268815);
}

double NNfunction_NG_2::synapse0x1c08fe0() {
   return (neuron0x1bfdca0()*0.0251339);
}

double NNfunction_NG_2::synapse0x1c09020() {
   return (neuron0x1bfdfe0()*0.00263518);
}

double NNfunction_NG_2::synapse0x1c09060() {
   return (neuron0x1bfe320()*0.035381);
}

double NNfunction_NG_2::synapse0x1c090a0() {
   return (neuron0x1bfe660()*-0.00184082);
}

double NNfunction_NG_2::synapse0x1c090e0() {
   return (neuron0x1bfe9a0()*-0.0099377);
}

double NNfunction_NG_2::synapse0x1c09120() {
   return (neuron0x1bfece0()*-0.0298971);
}

double NNfunction_NG_2::synapse0x1c09160() {
   return (neuron0x1bff020()*-3.64641);
}

double NNfunction_NG_2::synapse0x1c091a0() {
   return (neuron0x1bff360()*0.119498);
}

double NNfunction_NG_2::synapse0x1c091e0() {
   return (neuron0x1bff6a0()*-0.0217852);
}

double NNfunction_NG_2::synapse0x1c09220() {
   return (neuron0x1bff9e0()*0.0995963);
}

double NNfunction_NG_2::synapse0x1c09260() {
   return (neuron0x1bffd20()*0.0665003);
}

double NNfunction_NG_2::synapse0x1c08cf0() {
   return (neuron0x1c00060()*0.00170943);
}

double NNfunction_NG_2::synapse0x1c08d30() {
   return (neuron0x1c005c0()*0.0802701);
}

double NNfunction_NG_2::synapse0x1c093b0() {
   return (neuron0x1c007e0()*0.0508417);
}

double NNfunction_NG_2::synapse0x1c093f0() {
   return (neuron0x1c00b20()*-0.0202071);
}

double NNfunction_NG_2::synapse0x1c09430() {
   return (neuron0x1c00e60()*0.000187011);
}

double NNfunction_NG_2::synapse0x1c09470() {
   return (neuron0x1c011a0()*-0.0291424);
}

double NNfunction_NG_2::synapse0x1c094b0() {
   return (neuron0x1c014e0()*-0.0117802);
}

double NNfunction_NG_2::synapse0x1c094f0() {
   return (neuron0x1c01820()*0.240607);
}

double NNfunction_NG_2::synapse0x1c096c0() {
   return (neuron0x1bfcc60()*0.013727);
}

double NNfunction_NG_2::synapse0x1c12750() {
   return (neuron0x1bfcfa0()*-5.30594);
}

double NNfunction_NG_2::synapse0x1c12790() {
   return (neuron0x1bfd2e0()*-0.123224);
}

double NNfunction_NG_2::synapse0x1c127d0() {
   return (neuron0x1bfd620()*0.0209514);
}

double NNfunction_NG_2::synapse0x1c12810() {
   return (neuron0x1bfd960()*-0.0270551);
}

double NNfunction_NG_2::synapse0x1c12850() {
   return (neuron0x1bfdca0()*-0.00925534);
}

double NNfunction_NG_2::synapse0x1c12890() {
   return (neuron0x1bfdfe0()*-0.0136876);
}

double NNfunction_NG_2::synapse0x1c128d0() {
   return (neuron0x1bfe320()*-0.0276826);
}

double NNfunction_NG_2::synapse0x1c12910() {
   return (neuron0x1bfe660()*-8.91154e-05);
}

double NNfunction_NG_2::synapse0x1c12950() {
   return (neuron0x1bfe9a0()*0.0130104);
}

double NNfunction_NG_2::synapse0x1c12990() {
   return (neuron0x1bfece0()*-6.12277e-05);
}

double NNfunction_NG_2::synapse0x1c129d0() {
   return (neuron0x1bff020()*-0.375676);
}

double NNfunction_NG_2::synapse0x1c12a10() {
   return (neuron0x1bff360()*0.0552905);
}

double NNfunction_NG_2::synapse0x1c12a50() {
   return (neuron0x1bff6a0()*0.0182708);
}

double NNfunction_NG_2::synapse0x1c12a90() {
   return (neuron0x1bff9e0()*0.0709729);
}

double NNfunction_NG_2::synapse0x1c12ad0() {
   return (neuron0x1bffd20()*0.00670575);
}

double NNfunction_NG_2::synapse0x1c125a0() {
   return (neuron0x1c00060()*-0.00330976);
}

double NNfunction_NG_2::synapse0x1c125e0() {
   return (neuron0x1c005c0()*0.0197422);
}

double NNfunction_NG_2::synapse0x1c12c20() {
   return (neuron0x1c007e0()*0.00662861);
}

double NNfunction_NG_2::synapse0x1c12c60() {
   return (neuron0x1c00b20()*-0.00788012);
}

double NNfunction_NG_2::synapse0x1c12ca0() {
   return (neuron0x1c00e60()*-0.0102685);
}

double NNfunction_NG_2::synapse0x1c12ce0() {
   return (neuron0x1c011a0()*-0.000936335);
}

double NNfunction_NG_2::synapse0x1c12d20() {
   return (neuron0x1c014e0()*-0.00144299);
}

double NNfunction_NG_2::synapse0x1c12d60() {
   return (neuron0x1c01820()*-0.392093);
}

double NNfunction_NG_2::synapse0x1c130e0() {
   return (neuron0x1bfcc60()*0.0468701);
}

double NNfunction_NG_2::synapse0x1c13120() {
   return (neuron0x1bfcfa0()*-5.64037);
}

double NNfunction_NG_2::synapse0x1c13160() {
   return (neuron0x1bfd2e0()*0.31758);
}

double NNfunction_NG_2::synapse0x1c131a0() {
   return (neuron0x1bfd620()*0.0178361);
}

double NNfunction_NG_2::synapse0x1c131e0() {
   return (neuron0x1bfd960()*-0.00453812);
}

double NNfunction_NG_2::synapse0x1c13220() {
   return (neuron0x1bfdca0()*-0.0164532);
}

double NNfunction_NG_2::synapse0x1c13260() {
   return (neuron0x1bfdfe0()*-0.0135908);
}

double NNfunction_NG_2::synapse0x1c132a0() {
   return (neuron0x1bfe320()*-0.00610907);
}

double NNfunction_NG_2::synapse0x1c132e0() {
   return (neuron0x1bfe660()*0.00120217);
}

double NNfunction_NG_2::synapse0x1c13320() {
   return (neuron0x1bfe9a0()*0.0506602);
}

double NNfunction_NG_2::synapse0x1c13360() {
   return (neuron0x1bfece0()*-0.0212308);
}

double NNfunction_NG_2::synapse0x1c133a0() {
   return (neuron0x1bff020()*0.539372);
}

double NNfunction_NG_2::synapse0x1c133e0() {
   return (neuron0x1bff360()*0.0665968);
}

double NNfunction_NG_2::synapse0x1c13420() {
   return (neuron0x1bff6a0()*-0.0266394);
}

double NNfunction_NG_2::synapse0x1c13460() {
   return (neuron0x1bff9e0()*-0.315206);
}

double NNfunction_NG_2::synapse0x1c134a0() {
   return (neuron0x1bffd20()*-0.0159442);
}

double NNfunction_NG_2::synapse0x1c12f30() {
   return (neuron0x1c00060()*-0.0240024);
}

double NNfunction_NG_2::synapse0x1c12f70() {
   return (neuron0x1c005c0()*-0.0396271);
}

double NNfunction_NG_2::synapse0x1c135f0() {
   return (neuron0x1c007e0()*0.015772);
}

double NNfunction_NG_2::synapse0x1c13630() {
   return (neuron0x1c00b20()*-0.00301962);
}

double NNfunction_NG_2::synapse0x1c13670() {
   return (neuron0x1c00e60()*-0.0249237);
}

double NNfunction_NG_2::synapse0x1c136b0() {
   return (neuron0x1c011a0()*0.0142727);
}

double NNfunction_NG_2::synapse0x1c136f0() {
   return (neuron0x1c014e0()*-0.00174107);
}

double NNfunction_NG_2::synapse0x1c13730() {
   return (neuron0x1c01820()*2.62585);
}

double NNfunction_NG_2::synapse0x1c13ab0() {
   return (neuron0x1bfcc60()*0.0229669);
}

double NNfunction_NG_2::synapse0x1c13af0() {
   return (neuron0x1bfcfa0()*0.022907);
}

double NNfunction_NG_2::synapse0x1c13b30() {
   return (neuron0x1bfd2e0()*-0.269566);
}

double NNfunction_NG_2::synapse0x1c13b70() {
   return (neuron0x1bfd620()*-0.382459);
}

double NNfunction_NG_2::synapse0x1c13bb0() {
   return (neuron0x1bfd960()*0.000345927);
}

double NNfunction_NG_2::synapse0x1c13bf0() {
   return (neuron0x1bfdca0()*-0.0294033);
}

double NNfunction_NG_2::synapse0x1c13c30() {
   return (neuron0x1bfdfe0()*-0.00277236);
}

double NNfunction_NG_2::synapse0x1c13c70() {
   return (neuron0x1bfe320()*-0.00877009);
}

double NNfunction_NG_2::synapse0x1c13cb0() {
   return (neuron0x1bfe660()*0.0870015);
}

double NNfunction_NG_2::synapse0x1c13cf0() {
   return (neuron0x1bfe9a0()*-0.0257682);
}

double NNfunction_NG_2::synapse0x1c13d30() {
   return (neuron0x1bfece0()*0.0141287);
}

double NNfunction_NG_2::synapse0x1c13d70() {
   return (neuron0x1bff020()*-4.14479);
}

double NNfunction_NG_2::synapse0x1c13db0() {
   return (neuron0x1bff360()*0.0731338);
}

double NNfunction_NG_2::synapse0x1c13df0() {
   return (neuron0x1bff6a0()*-0.0104248);
}

double NNfunction_NG_2::synapse0x1c13e30() {
   return (neuron0x1bff9e0()*0.239444);
}

double NNfunction_NG_2::synapse0x1c13e70() {
   return (neuron0x1bffd20()*0.0241876);
}

double NNfunction_NG_2::synapse0x1c13900() {
   return (neuron0x1c00060()*-0.0223119);
}

double NNfunction_NG_2::synapse0x1c13940() {
   return (neuron0x1c005c0()*-0.00837337);
}

double NNfunction_NG_2::synapse0x1c13fc0() {
   return (neuron0x1c007e0()*0.000148941);
}

double NNfunction_NG_2::synapse0x1c14000() {
   return (neuron0x1c00b20()*0.0497842);
}

double NNfunction_NG_2::synapse0x1c14040() {
   return (neuron0x1c00e60()*0.0480157);
}

double NNfunction_NG_2::synapse0x1c14080() {
   return (neuron0x1c011a0()*-0.0384658);
}

double NNfunction_NG_2::synapse0x1c140c0() {
   return (neuron0x1c014e0()*0.0289073);
}

double NNfunction_NG_2::synapse0x1c14100() {
   return (neuron0x1c01820()*-2.16057);
}

double NNfunction_NG_2::synapse0x1c14480() {
   return (neuron0x1bfcc60()*0.109777);
}

double NNfunction_NG_2::synapse0x1c144c0() {
   return (neuron0x1bfcfa0()*-0.00204889);
}

double NNfunction_NG_2::synapse0x1c14500() {
   return (neuron0x1bfd2e0()*-0.806439);
}

double NNfunction_NG_2::synapse0x1c14540() {
   return (neuron0x1bfd620()*2.76074);
}

double NNfunction_NG_2::synapse0x1c14580() {
   return (neuron0x1bfd960()*0.0307545);
}

double NNfunction_NG_2::synapse0x1c145c0() {
   return (neuron0x1bfdca0()*0.0158041);
}

double NNfunction_NG_2::synapse0x1c14600() {
   return (neuron0x1bfdfe0()*0.00792012);
}

double NNfunction_NG_2::synapse0x1c14640() {
   return (neuron0x1bfe320()*-0.0793182);
}

double NNfunction_NG_2::synapse0x1c14680() {
   return (neuron0x1bfe660()*0.0512797);
}

double NNfunction_NG_2::synapse0x1c146c0() {
   return (neuron0x1bfe9a0()*-0.0453195);
}

double NNfunction_NG_2::synapse0x1c14700() {
   return (neuron0x1bfece0()*0.100216);
}

double NNfunction_NG_2::synapse0x1c14740() {
   return (neuron0x1bff020()*-0.0212171);
}

double NNfunction_NG_2::synapse0x1c14780() {
   return (neuron0x1bff360()*0.20788);
}

double NNfunction_NG_2::synapse0x1c147c0() {
   return (neuron0x1bff6a0()*0.000658412);
}

double NNfunction_NG_2::synapse0x1c14800() {
   return (neuron0x1bff9e0()*0.0668935);
}

double NNfunction_NG_2::synapse0x1c14840() {
   return (neuron0x1bffd20()*0.0384261);
}

double NNfunction_NG_2::synapse0x1c142d0() {
   return (neuron0x1c00060()*-0.0330797);
}

double NNfunction_NG_2::synapse0x1c14310() {
   return (neuron0x1c005c0()*-0.15507);
}

double NNfunction_NG_2::synapse0x1c14990() {
   return (neuron0x1c007e0()*0.0822734);
}

double NNfunction_NG_2::synapse0x1c149d0() {
   return (neuron0x1c00b20()*0.0362729);
}

double NNfunction_NG_2::synapse0x1c14a10() {
   return (neuron0x1c00e60()*0.00741629);
}

double NNfunction_NG_2::synapse0x1c14a50() {
   return (neuron0x1c011a0()*0.0611298);
}

double NNfunction_NG_2::synapse0x1c14a90() {
   return (neuron0x1c014e0()*0.092867);
}

double NNfunction_NG_2::synapse0x1c14ad0() {
   return (neuron0x1c01820()*-0.304052);
}

double NNfunction_NG_2::synapse0x1c14e50() {
   return (neuron0x1bfcc60()*-0.0323348);
}

double NNfunction_NG_2::synapse0x1c14e90() {
   return (neuron0x1bfcfa0()*2.58637);
}

double NNfunction_NG_2::synapse0x1c14ed0() {
   return (neuron0x1bfd2e0()*0.420432);
}

double NNfunction_NG_2::synapse0x1c14f10() {
   return (neuron0x1bfd620()*-0.159867);
}

double NNfunction_NG_2::synapse0x1c14f50() {
   return (neuron0x1bfd960()*-0.069811);
}

double NNfunction_NG_2::synapse0x1c14f90() {
   return (neuron0x1bfdca0()*-0.0567011);
}

double NNfunction_NG_2::synapse0x1c14fd0() {
   return (neuron0x1bfdfe0()*0.00647154);
}

double NNfunction_NG_2::synapse0x1c15010() {
   return (neuron0x1bfe320()*-0.0628803);
}

double NNfunction_NG_2::synapse0x1c15050() {
   return (neuron0x1bfe660()*0.0720922);
}

double NNfunction_NG_2::synapse0x1c15090() {
   return (neuron0x1bfe9a0()*-0.0644508);
}

double NNfunction_NG_2::synapse0x1c150d0() {
   return (neuron0x1bfece0()*0.0523381);
}

double NNfunction_NG_2::synapse0x1c15110() {
   return (neuron0x1bff020()*1.4191);
}

double NNfunction_NG_2::synapse0x1c15150() {
   return (neuron0x1bff360()*0.0349633);
}

double NNfunction_NG_2::synapse0x1c15190() {
   return (neuron0x1bff6a0()*0.12112);
}

double NNfunction_NG_2::synapse0x1c151d0() {
   return (neuron0x1bff9e0()*-2.08871);
}

double NNfunction_NG_2::synapse0x1c15210() {
   return (neuron0x1bffd20()*-0.0514637);
}

double NNfunction_NG_2::synapse0x1c14ca0() {
   return (neuron0x1c00060()*-0.071734);
}

double NNfunction_NG_2::synapse0x1c14ce0() {
   return (neuron0x1c005c0()*0.0646904);
}

double NNfunction_NG_2::synapse0x1c15360() {
   return (neuron0x1c007e0()*0.0102624);
}

double NNfunction_NG_2::synapse0x1c153a0() {
   return (neuron0x1c00b20()*0.0512402);
}

double NNfunction_NG_2::synapse0x1c153e0() {
   return (neuron0x1c00e60()*0.0269282);
}

double NNfunction_NG_2::synapse0x1c15420() {
   return (neuron0x1c011a0()*-0.0263877);
}

double NNfunction_NG_2::synapse0x1c15460() {
   return (neuron0x1c014e0()*0.0415356);
}

double NNfunction_NG_2::synapse0x1c154a0() {
   return (neuron0x1c01820()*0.993447);
}

double NNfunction_NG_2::synapse0x1c15820() {
   return (neuron0x1bfcc60()*-0.0273153);
}

double NNfunction_NG_2::synapse0x1c15860() {
   return (neuron0x1bfcfa0()*0.0231865);
}

double NNfunction_NG_2::synapse0x1c158a0() {
   return (neuron0x1bfd2e0()*0.199675);
}

double NNfunction_NG_2::synapse0x1c158e0() {
   return (neuron0x1bfd620()*-1.22515);
}

double NNfunction_NG_2::synapse0x1c15920() {
   return (neuron0x1bfd960()*0.0177059);
}

double NNfunction_NG_2::synapse0x1c15960() {
   return (neuron0x1bfdca0()*-0.0187843);
}

double NNfunction_NG_2::synapse0x1c159a0() {
   return (neuron0x1bfdfe0()*-0.00525267);
}

double NNfunction_NG_2::synapse0x1c159e0() {
   return (neuron0x1bfe320()*-0.00753683);
}

double NNfunction_NG_2::synapse0x1c15a20() {
   return (neuron0x1bfe660()*0.0018664);
}

double NNfunction_NG_2::synapse0x1c15a60() {
   return (neuron0x1bfe9a0()*0.0106833);
}

double NNfunction_NG_2::synapse0x1c15aa0() {
   return (neuron0x1bfece0()*0.00164672);
}

double NNfunction_NG_2::synapse0x1c15ae0() {
   return (neuron0x1bff020()*0.416283);
}

double NNfunction_NG_2::synapse0x1c15b20() {
   return (neuron0x1bff360()*0.0199229);
}

double NNfunction_NG_2::synapse0x1c15b60() {
   return (neuron0x1bff6a0()*0.0344055);
}

double NNfunction_NG_2::synapse0x1c15ba0() {
   return (neuron0x1bff9e0()*-0.0363627);
}

double NNfunction_NG_2::synapse0x1c15be0() {
   return (neuron0x1bffd20()*-0.01599);
}

double NNfunction_NG_2::synapse0x1c15670() {
   return (neuron0x1c00060()*0.0431061);
}

double NNfunction_NG_2::synapse0x1c156b0() {
   return (neuron0x1c005c0()*0.0705495);
}

double NNfunction_NG_2::synapse0x1c15d30() {
   return (neuron0x1c007e0()*0.00318734);
}

double NNfunction_NG_2::synapse0x1c15d70() {
   return (neuron0x1c00b20()*0.0355384);
}

double NNfunction_NG_2::synapse0x1c15db0() {
   return (neuron0x1c00e60()*-0.0169158);
}

double NNfunction_NG_2::synapse0x1c15df0() {
   return (neuron0x1c011a0()*-0.00659527);
}

double NNfunction_NG_2::synapse0x1c15e30() {
   return (neuron0x1c014e0()*-0.0234081);
}

double NNfunction_NG_2::synapse0x1c15e70() {
   return (neuron0x1c01820()*-0.0605672);
}

double NNfunction_NG_2::synapse0x1c161f0() {
   return (neuron0x1bfcc60()*0.0368927);
}

double NNfunction_NG_2::synapse0x1c16230() {
   return (neuron0x1bfcfa0()*0.062735);
}

double NNfunction_NG_2::synapse0x1c16270() {
   return (neuron0x1bfd2e0()*-0.192469);
}

double NNfunction_NG_2::synapse0x1c162b0() {
   return (neuron0x1bfd620()*-0.00159958);
}

double NNfunction_NG_2::synapse0x1c162f0() {
   return (neuron0x1bfd960()*-0.00590599);
}

double NNfunction_NG_2::synapse0x1c16330() {
   return (neuron0x1bfdca0()*-0.00892243);
}

double NNfunction_NG_2::synapse0x1c16370() {
   return (neuron0x1bfdfe0()*-0.0160551);
}

double NNfunction_NG_2::synapse0x1c163b0() {
   return (neuron0x1bfe320()*0.0061873);
}

double NNfunction_NG_2::synapse0x1c163f0() {
   return (neuron0x1bfe660()*0.00297024);
}

double NNfunction_NG_2::synapse0x1c16430() {
   return (neuron0x1bfe9a0()*-0.0126475);
}

double NNfunction_NG_2::synapse0x1c16470() {
   return (neuron0x1bfece0()*-0.0174161);
}

double NNfunction_NG_2::synapse0x1c164b0() {
   return (neuron0x1bff020()*-0.0108736);
}

double NNfunction_NG_2::synapse0x1c164f0() {
   return (neuron0x1bff360()*0.0164509);
}

double NNfunction_NG_2::synapse0x1c16530() {
   return (neuron0x1bff6a0()*0.000170362);
}

double NNfunction_NG_2::synapse0x1c16570() {
   return (neuron0x1bff9e0()*-0.0421837);
}

double NNfunction_NG_2::synapse0x1c165b0() {
   return (neuron0x1bffd20()*-0.0112931);
}

double NNfunction_NG_2::synapse0x1c16040() {
   return (neuron0x1c00060()*-0.0157174);
}

double NNfunction_NG_2::synapse0x1c16080() {
   return (neuron0x1c005c0()*0.0138222);
}

double NNfunction_NG_2::synapse0x1c16700() {
   return (neuron0x1c007e0()*-0.00158485);
}

double NNfunction_NG_2::synapse0x1c16740() {
   return (neuron0x1c00b20()*0.00780783);
}

double NNfunction_NG_2::synapse0x1c16780() {
   return (neuron0x1c00e60()*-0.00484928);
}

double NNfunction_NG_2::synapse0x1c167c0() {
   return (neuron0x1c011a0()*0.0300982);
}

double NNfunction_NG_2::synapse0x1c16800() {
   return (neuron0x1c014e0()*0.0214941);
}

double NNfunction_NG_2::synapse0x1c16840() {
   return (neuron0x1c01820()*-11.6218);
}

double NNfunction_NG_2::synapse0x1c16bc0() {
   return (neuron0x1bfcc60()*0.0220958);
}

double NNfunction_NG_2::synapse0x1c16c00() {
   return (neuron0x1bfcfa0()*0.0807865);
}

double NNfunction_NG_2::synapse0x1c16c40() {
   return (neuron0x1bfd2e0()*-2.78011);
}

double NNfunction_NG_2::synapse0x1c16c80() {
   return (neuron0x1bfd620()*0.130236);
}

double NNfunction_NG_2::synapse0x1c16cc0() {
   return (neuron0x1bfd960()*-0.0168451);
}

double NNfunction_NG_2::synapse0x1c16d00() {
   return (neuron0x1bfdca0()*0.021921);
}

double NNfunction_NG_2::synapse0x1c16d40() {
   return (neuron0x1bfdfe0()*0.0053974);
}

double NNfunction_NG_2::synapse0x1c16d80() {
   return (neuron0x1bfe320()*-0.0110574);
}

double NNfunction_NG_2::synapse0x1c16dc0() {
   return (neuron0x1bfe660()*-0.000502872);
}

double NNfunction_NG_2::synapse0x1c16e00() {
   return (neuron0x1bfe9a0()*0.00271695);
}

double NNfunction_NG_2::synapse0x1c16e40() {
   return (neuron0x1bfece0()*-0.00217939);
}

double NNfunction_NG_2::synapse0x1c16e80() {
   return (neuron0x1bff020()*-0.438434);
}

double NNfunction_NG_2::synapse0x1c16ec0() {
   return (neuron0x1bff360()*-0.00930342);
}

double NNfunction_NG_2::synapse0x1c16f00() {
   return (neuron0x1bff6a0()*0.00181603);
}

double NNfunction_NG_2::synapse0x1c16f40() {
   return (neuron0x1bff9e0()*0.259212);
}

double NNfunction_NG_2::synapse0x1c16f80() {
   return (neuron0x1bffd20()*-0.0157988);
}

double NNfunction_NG_2::synapse0x1c16a10() {
   return (neuron0x1c00060()*0.0221898);
}

double NNfunction_NG_2::synapse0x1c16a50() {
   return (neuron0x1c005c0()*0.0169402);
}

double NNfunction_NG_2::synapse0x1c170d0() {
   return (neuron0x1c007e0()*0.0130854);
}

double NNfunction_NG_2::synapse0x1c17110() {
   return (neuron0x1c00b20()*0.00523494);
}

double NNfunction_NG_2::synapse0x1c17150() {
   return (neuron0x1c00e60()*0.0246157);
}

double NNfunction_NG_2::synapse0x1c17190() {
   return (neuron0x1c011a0()*0.0131569);
}

double NNfunction_NG_2::synapse0x1c171d0() {
   return (neuron0x1c014e0()*0.017139);
}

double NNfunction_NG_2::synapse0x1c17210() {
   return (neuron0x1c01820()*2.92654);
}

double NNfunction_NG_2::synapse0x1c17590() {
   return (neuron0x1bfcc60()*0.0398163);
}

double NNfunction_NG_2::synapse0x1c0bb60() {
   return (neuron0x1bfcfa0()*0.107176);
}

double NNfunction_NG_2::synapse0x1c0bba0() {
   return (neuron0x1bfd2e0()*0.0516909);
}

double NNfunction_NG_2::synapse0x1c0bbe0() {
   return (neuron0x1bfd620()*-0.0204802);
}

double NNfunction_NG_2::synapse0x1c0be30() {
   return (neuron0x1bfd960()*0.0354268);
}

double NNfunction_NG_2::synapse0x1c0be70() {
   return (neuron0x1bfdca0()*0.00213252);
}

double NNfunction_NG_2::synapse0x1c0beb0() {
   return (neuron0x1bfdfe0()*-0.0586545);
}

double NNfunction_NG_2::synapse0x1c0c100() {
   return (neuron0x1bfe320()*-0.0134913);
}

double NNfunction_NG_2::synapse0x1c0c140() {
   return (neuron0x1bfe660()*0.0385317);
}

double NNfunction_NG_2::synapse0x1c0c390() {
   return (neuron0x1bfe9a0()*0.0440657);
}

double NNfunction_NG_2::synapse0x1c0c3d0() {
   return (neuron0x1bfece0()*-0.0101571);
}

double NNfunction_NG_2::synapse0x1c0c410() {
   return (neuron0x1bff020()*-0.806356);
}

double NNfunction_NG_2::synapse0x1c0c660() {
   return (neuron0x1bff360()*0.0628224);
}

double NNfunction_NG_2::synapse0x1c0c6a0() {
   return (neuron0x1bff6a0()*0.0385899);
}

double NNfunction_NG_2::synapse0x1c0c8f0() {
   return (neuron0x1bff9e0()*0.0567017);
}

double NNfunction_NG_2::synapse0x1c0c930() {
   return (neuron0x1bffd20()*0.0106567);
}

double NNfunction_NG_2::synapse0x1c173e0() {
   return (neuron0x1c00060()*0.0184795);
}

double NNfunction_NG_2::synapse0x1c17420() {
   return (neuron0x1c005c0()*-0.0703788);
}

double NNfunction_NG_2::synapse0x1c0ca80() {
   return (neuron0x1c007e0()*0.0278129);
}

double NNfunction_NG_2::synapse0x1c0cf90() {
   return (neuron0x1c00b20()*-0.0234314);
}

double NNfunction_NG_2::synapse0x1c0cfd0() {
   return (neuron0x1c00e60()*0.0020157);
}

double NNfunction_NG_2::synapse0x1c0d010() {
   return (neuron0x1c011a0()*-0.045413);
}

double NNfunction_NG_2::synapse0x1c0d260() {
   return (neuron0x1c014e0()*0.0538695);
}

double NNfunction_NG_2::synapse0x1c0d2a0() {
   return (neuron0x1c01820()*-0.196247);
}

double NNfunction_NG_2::synapse0x1c0cb50() {
   return (neuron0x1bfcc60()*-0.0369196);
}

double NNfunction_NG_2::synapse0x1c0cb90() {
   return (neuron0x1bfcfa0()*-0.068431);
}

double NNfunction_NG_2::synapse0x1c0cbd0() {
   return (neuron0x1bfd2e0()*0.160151);
}

double NNfunction_NG_2::synapse0x1c0cc10() {
   return (neuron0x1bfd620()*2.55849);
}

double NNfunction_NG_2::synapse0x1c0d590() {
   return (neuron0x1bfd960()*-0.0181289);
}

double NNfunction_NG_2::synapse0x1c198e0() {
   return (neuron0x1bfdca0()*-0.0181084);
}

double NNfunction_NG_2::synapse0x1c19920() {
   return (neuron0x1bfdfe0()*-0.0271718);
}

double NNfunction_NG_2::synapse0x1c19960() {
   return (neuron0x1bfe320()*0.0276462);
}

double NNfunction_NG_2::synapse0x1c199a0() {
   return (neuron0x1bfe660()*-0.0670132);
}

double NNfunction_NG_2::synapse0x1c199e0() {
   return (neuron0x1bfe9a0()*0.0245345);
}

double NNfunction_NG_2::synapse0x1c19a20() {
   return (neuron0x1bfece0()*-0.0175691);
}

double NNfunction_NG_2::synapse0x1c19a60() {
   return (neuron0x1bff020()*-0.521518);
}

double NNfunction_NG_2::synapse0x1c19aa0() {
   return (neuron0x1bff360()*-0.338976);
}

double NNfunction_NG_2::synapse0x1c19ae0() {
   return (neuron0x1bff6a0()*-0.0838818);
}

double NNfunction_NG_2::synapse0x1c19b20() {
   return (neuron0x1bff9e0()*0.0567582);
}

double NNfunction_NG_2::synapse0x1c19b60() {
   return (neuron0x1bffd20()*-0.0980144);
}

double NNfunction_NG_2::synapse0x1c0d470() {
   return (neuron0x1c00060()*0.0665282);
}

double NNfunction_NG_2::synapse0x1c0d4b0() {
   return (neuron0x1c005c0()*-0.0592654);
}

double NNfunction_NG_2::synapse0x1c19cb0() {
   return (neuron0x1c007e0()*-0.0206979);
}

double NNfunction_NG_2::synapse0x1c19cf0() {
   return (neuron0x1c00b20()*-0.0361459);
}

double NNfunction_NG_2::synapse0x1c19d30() {
   return (neuron0x1c00e60()*-0.0253166);
}

double NNfunction_NG_2::synapse0x1c19d70() {
   return (neuron0x1c011a0()*-0.0310005);
}

double NNfunction_NG_2::synapse0x1c19db0() {
   return (neuron0x1c014e0()*-0.0214877);
}

double NNfunction_NG_2::synapse0x1c19df0() {
   return (neuron0x1c01820()*0.134368);
}

double NNfunction_NG_2::synapse0x1c1a170() {
   return (neuron0x1bfcc60()*-0.0214671);
}

double NNfunction_NG_2::synapse0x1c1a1b0() {
   return (neuron0x1bfcfa0()*-3.11007);
}

double NNfunction_NG_2::synapse0x1c1a1f0() {
   return (neuron0x1bfd2e0()*1.38235);
}

double NNfunction_NG_2::synapse0x1c1a230() {
   return (neuron0x1bfd620()*0.199878);
}

double NNfunction_NG_2::synapse0x1c1a270() {
   return (neuron0x1bfd960()*-0.127159);
}

double NNfunction_NG_2::synapse0x1c1a2b0() {
   return (neuron0x1bfdca0()*-0.0156348);
}

double NNfunction_NG_2::synapse0x1c1a2f0() {
   return (neuron0x1bfdfe0()*-0.0547266);
}

double NNfunction_NG_2::synapse0x1c1a330() {
   return (neuron0x1bfe320()*-0.0432845);
}

double NNfunction_NG_2::synapse0x1c1a370() {
   return (neuron0x1bfe660()*0.039606);
}

double NNfunction_NG_2::synapse0x1c1a3b0() {
   return (neuron0x1bfe9a0()*-0.0447388);
}

double NNfunction_NG_2::synapse0x1c1a3f0() {
   return (neuron0x1bfece0()*0.050684);
}

double NNfunction_NG_2::synapse0x1c1a430() {
   return (neuron0x1bff020()*0.163521);
}

double NNfunction_NG_2::synapse0x1c1a470() {
   return (neuron0x1bff360()*0.0201626);
}

double NNfunction_NG_2::synapse0x1c1a4b0() {
   return (neuron0x1bff6a0()*-0.0359923);
}

double NNfunction_NG_2::synapse0x1c1a4f0() {
   return (neuron0x1bff9e0()*-0.214717);
}

double NNfunction_NG_2::synapse0x1c1a530() {
   return (neuron0x1bffd20()*0.0500658);
}

double NNfunction_NG_2::synapse0x1c19fc0() {
   return (neuron0x1c00060()*0.0102578);
}

double NNfunction_NG_2::synapse0x1c1a000() {
   return (neuron0x1c005c0()*-0.0827959);
}

double NNfunction_NG_2::synapse0x1c1a680() {
   return (neuron0x1c007e0()*-0.0258104);
}

double NNfunction_NG_2::synapse0x1c1a6c0() {
   return (neuron0x1c00b20()*0.0558729);
}

double NNfunction_NG_2::synapse0x1c1a700() {
   return (neuron0x1c00e60()*0.0357019);
}

double NNfunction_NG_2::synapse0x1c1a740() {
   return (neuron0x1c011a0()*-0.032529);
}

double NNfunction_NG_2::synapse0x1c1a780() {
   return (neuron0x1c014e0()*0.00340403);
}

double NNfunction_NG_2::synapse0x1c1a7c0() {
   return (neuron0x1c01820()*0.561768);
}

double NNfunction_NG_2::synapse0x1c1ab40() {
   return (neuron0x1bfcc60()*0.0892105);
}

double NNfunction_NG_2::synapse0x1c1ab80() {
   return (neuron0x1bfcfa0()*0.0324243);
}

double NNfunction_NG_2::synapse0x1c1abc0() {
   return (neuron0x1bfd2e0()*-1.66423);
}

double NNfunction_NG_2::synapse0x1c1ac00() {
   return (neuron0x1bfd620()*-0.010357);
}

double NNfunction_NG_2::synapse0x1c1ac40() {
   return (neuron0x1bfd960()*0.037866);
}

double NNfunction_NG_2::synapse0x1c1ac80() {
   return (neuron0x1bfdca0()*0.0201247);
}

double NNfunction_NG_2::synapse0x1c1acc0() {
   return (neuron0x1bfdfe0()*0.0300484);
}

double NNfunction_NG_2::synapse0x1c1ad00() {
   return (neuron0x1bfe320()*0.00325308);
}

double NNfunction_NG_2::synapse0x1c1ad40() {
   return (neuron0x1bfe660()*-0.0152708);
}

double NNfunction_NG_2::synapse0x1c1ad80() {
   return (neuron0x1bfe9a0()*-0.034001);
}

double NNfunction_NG_2::synapse0x1c1adc0() {
   return (neuron0x1bfece0()*-0.0677711);
}

double NNfunction_NG_2::synapse0x1c1ae00() {
   return (neuron0x1bff020()*-0.253955);
}

double NNfunction_NG_2::synapse0x1c1ae40() {
   return (neuron0x1bff360()*0.0227139);
}

double NNfunction_NG_2::synapse0x1c1ae80() {
   return (neuron0x1bff6a0()*-0.0179549);
}

double NNfunction_NG_2::synapse0x1c1aec0() {
   return (neuron0x1bff9e0()*0.593226);
}

double NNfunction_NG_2::synapse0x1c1af00() {
   return (neuron0x1bffd20()*0.0280714);
}

double NNfunction_NG_2::synapse0x1c1a990() {
   return (neuron0x1c00060()*0.0148106);
}

double NNfunction_NG_2::synapse0x1c1a9d0() {
   return (neuron0x1c005c0()*-0.040215);
}

double NNfunction_NG_2::synapse0x1c1b050() {
   return (neuron0x1c007e0()*-0.0112893);
}

double NNfunction_NG_2::synapse0x1c1b090() {
   return (neuron0x1c00b20()*0.00204421);
}

double NNfunction_NG_2::synapse0x1c1b0d0() {
   return (neuron0x1c00e60()*0.0558851);
}

double NNfunction_NG_2::synapse0x1c1b110() {
   return (neuron0x1c011a0()*-0.0124647);
}

double NNfunction_NG_2::synapse0x1c1b150() {
   return (neuron0x1c014e0()*0.0358477);
}

double NNfunction_NG_2::synapse0x1c1b190() {
   return (neuron0x1c01820()*-0.318257);
}

double NNfunction_NG_2::synapse0x1c1b510() {
   return (neuron0x1bfcc60()*-0.0345014);
}

double NNfunction_NG_2::synapse0x1c1b550() {
   return (neuron0x1bfcfa0()*-7.44461);
}

double NNfunction_NG_2::synapse0x1c1b590() {
   return (neuron0x1bfd2e0()*-0.0127832);
}

double NNfunction_NG_2::synapse0x1c1b5d0() {
   return (neuron0x1bfd620()*-0.00808437);
}

double NNfunction_NG_2::synapse0x1c1b610() {
   return (neuron0x1bfd960()*0.0110342);
}

double NNfunction_NG_2::synapse0x1c1b650() {
   return (neuron0x1bfdca0()*-0.0162197);
}

double NNfunction_NG_2::synapse0x1c1b690() {
   return (neuron0x1bfdfe0()*0.0103387);
}

double NNfunction_NG_2::synapse0x1c1b6d0() {
   return (neuron0x1bfe320()*0.00381449);
}

double NNfunction_NG_2::synapse0x1c1b710() {
   return (neuron0x1bfe660()*0.00860888);
}

double NNfunction_NG_2::synapse0x1c1b750() {
   return (neuron0x1bfe9a0()*0.00370444);
}

double NNfunction_NG_2::synapse0x1c1b790() {
   return (neuron0x1bfece0()*-0.00221341);
}

double NNfunction_NG_2::synapse0x1c1b7d0() {
   return (neuron0x1bff020()*0.158256);
}

double NNfunction_NG_2::synapse0x1c1b810() {
   return (neuron0x1bff360()*0.0208968);
}

double NNfunction_NG_2::synapse0x1c1b850() {
   return (neuron0x1bff6a0()*0.0050989);
}

double NNfunction_NG_2::synapse0x1c1b890() {
   return (neuron0x1bff9e0()*-0.146064);
}

double NNfunction_NG_2::synapse0x1c1b8d0() {
   return (neuron0x1bffd20()*-0.00210473);
}

double NNfunction_NG_2::synapse0x1c1b360() {
   return (neuron0x1c00060()*-0.013045);
}

double NNfunction_NG_2::synapse0x1c1b3a0() {
   return (neuron0x1c005c0()*-0.00872533);
}

double NNfunction_NG_2::synapse0x1c1ba20() {
   return (neuron0x1c007e0()*0.0120389);
}

double NNfunction_NG_2::synapse0x1c1ba60() {
   return (neuron0x1c00b20()*0.00781092);
}

double NNfunction_NG_2::synapse0x1c1baa0() {
   return (neuron0x1c00e60()*-0.0526169);
}

double NNfunction_NG_2::synapse0x1c1bae0() {
   return (neuron0x1c011a0()*0.00951355);
}

double NNfunction_NG_2::synapse0x1c1bb20() {
   return (neuron0x1c014e0()*-0.00104072);
}

double NNfunction_NG_2::synapse0x1c1bb60() {
   return (neuron0x1c01820()*0.0673689);
}

double NNfunction_NG_2::synapse0x1c1bee0() {
   return (neuron0x1bfcc60()*-0.0551079);
}

double NNfunction_NG_2::synapse0x1c1bf20() {
   return (neuron0x1bfcfa0()*0.0197216);
}

double NNfunction_NG_2::synapse0x1c1bf60() {
   return (neuron0x1bfd2e0()*1.73427);
}

double NNfunction_NG_2::synapse0x1c1bfa0() {
   return (neuron0x1bfd620()*0.0622843);
}

double NNfunction_NG_2::synapse0x1c1bfe0() {
   return (neuron0x1bfd960()*0.0135188);
}

double NNfunction_NG_2::synapse0x1c1c020() {
   return (neuron0x1bfdca0()*-0.000766442);
}

double NNfunction_NG_2::synapse0x1c1c060() {
   return (neuron0x1bfdfe0()*-0.00282369);
}

double NNfunction_NG_2::synapse0x1c1c0a0() {
   return (neuron0x1bfe320()*0.0213421);
}

double NNfunction_NG_2::synapse0x1c1c0e0() {
   return (neuron0x1bfe660()*-0.0282425);
}

double NNfunction_NG_2::synapse0x1c1c120() {
   return (neuron0x1bfe9a0()*-0.0123928);
}

double NNfunction_NG_2::synapse0x1c1c160() {
   return (neuron0x1bfece0()*-0.0304028);
}

double NNfunction_NG_2::synapse0x1c1c1a0() {
   return (neuron0x1bff020()*-0.251759);
}

double NNfunction_NG_2::synapse0x1c1c1e0() {
   return (neuron0x1bff360()*-0.000264239);
}

double NNfunction_NG_2::synapse0x1c1c220() {
   return (neuron0x1bff6a0()*-0.0286218);
}

double NNfunction_NG_2::synapse0x1c1c260() {
   return (neuron0x1bff9e0()*0.00446);
}

double NNfunction_NG_2::synapse0x1c1c2a0() {
   return (neuron0x1bffd20()*0.0359071);
}

double NNfunction_NG_2::synapse0x1c1bd30() {
   return (neuron0x1c00060()*0.0148054);
}

double NNfunction_NG_2::synapse0x1c1bd70() {
   return (neuron0x1c005c0()*0.00685777);
}

double NNfunction_NG_2::synapse0x1c1c3f0() {
   return (neuron0x1c007e0()*-0.0212406);
}

double NNfunction_NG_2::synapse0x1c1c430() {
   return (neuron0x1c00b20()*0.00644942);
}

double NNfunction_NG_2::synapse0x1c1c470() {
   return (neuron0x1c00e60()*0.0153639);
}

double NNfunction_NG_2::synapse0x1c1c4b0() {
   return (neuron0x1c011a0()*-0.00130005);
}

double NNfunction_NG_2::synapse0x1c1c4f0() {
   return (neuron0x1c014e0()*-0.0154211);
}

double NNfunction_NG_2::synapse0x1c1c530() {
   return (neuron0x1c01820()*4.48639);
}

double NNfunction_NG_2::synapse0x1c1c8b0() {
   return (neuron0x1bfcc60()*-0.0139494);
}

double NNfunction_NG_2::synapse0x1c1c8f0() {
   return (neuron0x1bfcfa0()*0.0322933);
}

double NNfunction_NG_2::synapse0x1c1c930() {
   return (neuron0x1bfd2e0()*0.419758);
}

double NNfunction_NG_2::synapse0x1c1c970() {
   return (neuron0x1bfd620()*0.00313468);
}

double NNfunction_NG_2::synapse0x1c1c9b0() {
   return (neuron0x1bfd960()*0.00565603);
}

double NNfunction_NG_2::synapse0x1c1c9f0() {
   return (neuron0x1bfdca0()*-0.00108836);
}

double NNfunction_NG_2::synapse0x1c1ca30() {
   return (neuron0x1bfdfe0()*0.00726218);
}

double NNfunction_NG_2::synapse0x1c1ca70() {
   return (neuron0x1bfe320()*0.0078192);
}

double NNfunction_NG_2::synapse0x1c1cab0() {
   return (neuron0x1bfe660()*-0.0175438);
}

double NNfunction_NG_2::synapse0x1c1caf0() {
   return (neuron0x1bfe9a0()*-0.015457);
}

double NNfunction_NG_2::synapse0x1c1cb30() {
   return (neuron0x1bfece0()*-0.017744);
}

double NNfunction_NG_2::synapse0x1c1cb70() {
   return (neuron0x1bff020()*0.0680198);
}

double NNfunction_NG_2::synapse0x1c1cbb0() {
   return (neuron0x1bff360()*-0.0521597);
}

double NNfunction_NG_2::synapse0x1c1cbf0() {
   return (neuron0x1bff6a0()*-0.0269232);
}

double NNfunction_NG_2::synapse0x1c1cc30() {
   return (neuron0x1bff9e0()*0.188873);
}

double NNfunction_NG_2::synapse0x1c1cc70() {
   return (neuron0x1bffd20()*0.0157298);
}

double NNfunction_NG_2::synapse0x1c1c700() {
   return (neuron0x1c00060()*0.029768);
}

double NNfunction_NG_2::synapse0x1c1c740() {
   return (neuron0x1c005c0()*0.028927);
}

double NNfunction_NG_2::synapse0x1c1cdc0() {
   return (neuron0x1c007e0()*0.0115859);
}

double NNfunction_NG_2::synapse0x1c1ce00() {
   return (neuron0x1c00b20()*0.00252157);
}

double NNfunction_NG_2::synapse0x1c1ce40() {
   return (neuron0x1c00e60()*-0.0426251);
}

double NNfunction_NG_2::synapse0x1c1ce80() {
   return (neuron0x1c011a0()*-0.011625);
}

double NNfunction_NG_2::synapse0x1c1cec0() {
   return (neuron0x1c014e0()*-0.0112897);
}

double NNfunction_NG_2::synapse0x1c1cf00() {
   return (neuron0x1c01820()*2.64149);
}

double NNfunction_NG_2::synapse0x1c1d280() {
   return (neuron0x1bfcc60()*-0.105883);
}

double NNfunction_NG_2::synapse0x1c1d2c0() {
   return (neuron0x1bfcfa0()*0.0529218);
}

double NNfunction_NG_2::synapse0x1c1d300() {
   return (neuron0x1bfd2e0()*-0.892211);
}

double NNfunction_NG_2::synapse0x1c1d340() {
   return (neuron0x1bfd620()*0.0546514);
}

double NNfunction_NG_2::synapse0x1c1d380() {
   return (neuron0x1bfd960()*0.0844167);
}

double NNfunction_NG_2::synapse0x1c1d3c0() {
   return (neuron0x1bfdca0()*0.0109198);
}

double NNfunction_NG_2::synapse0x1c1d400() {
   return (neuron0x1bfdfe0()*-0.0254057);
}

double NNfunction_NG_2::synapse0x1c1d440() {
   return (neuron0x1bfe320()*-0.0339896);
}

double NNfunction_NG_2::synapse0x1c1d480() {
   return (neuron0x1bfe660()*0.0344888);
}

double NNfunction_NG_2::synapse0x1c1d4c0() {
   return (neuron0x1bfe9a0()*0.0224947);
}

double NNfunction_NG_2::synapse0x1c1d500() {
   return (neuron0x1bfece0()*0.0239377);
}

double NNfunction_NG_2::synapse0x1c1d540() {
   return (neuron0x1bff020()*0.0976035);
}

double NNfunction_NG_2::synapse0x1c1d580() {
   return (neuron0x1bff360()*0.160245);
}

double NNfunction_NG_2::synapse0x1c1d5c0() {
   return (neuron0x1bff6a0()*0.0227432);
}

double NNfunction_NG_2::synapse0x1c1d600() {
   return (neuron0x1bff9e0()*-0.343728);
}

double NNfunction_NG_2::synapse0x1c1d640() {
   return (neuron0x1bffd20()*-0.0193267);
}

double NNfunction_NG_2::synapse0x1c1d0d0() {
   return (neuron0x1c00060()*0.00294848);
}

double NNfunction_NG_2::synapse0x1c1d110() {
   return (neuron0x1c005c0()*-0.0601994);
}

double NNfunction_NG_2::synapse0x1c1d790() {
   return (neuron0x1c007e0()*-0.0206465);
}

double NNfunction_NG_2::synapse0x1c1d7d0() {
   return (neuron0x1c00b20()*0.0028618);
}

double NNfunction_NG_2::synapse0x1c1d810() {
   return (neuron0x1c00e60()*-0.042331);
}

double NNfunction_NG_2::synapse0x1c1d850() {
   return (neuron0x1c011a0()*-0.00895801);
}

double NNfunction_NG_2::synapse0x1c1d890() {
   return (neuron0x1c014e0()*0.00813523);
}

double NNfunction_NG_2::synapse0x1c1d8d0() {
   return (neuron0x1c01820()*-0.12487);
}

double NNfunction_NG_2::synapse0x1c1dc50() {
   return (neuron0x1bfcc60()*0.0125242);
}

double NNfunction_NG_2::synapse0x1c1dc90() {
   return (neuron0x1bfcfa0()*0.197634);
}

double NNfunction_NG_2::synapse0x1c1dcd0() {
   return (neuron0x1bfd2e0()*0.134847);
}

double NNfunction_NG_2::synapse0x1c1dd10() {
   return (neuron0x1bfd620()*0.0162456);
}

double NNfunction_NG_2::synapse0x1c1dd50() {
   return (neuron0x1bfd960()*-0.0216213);
}

double NNfunction_NG_2::synapse0x1c1dd90() {
   return (neuron0x1bfdca0()*0.00832329);
}

double NNfunction_NG_2::synapse0x1c1ddd0() {
   return (neuron0x1bfdfe0()*-0.0216824);
}

double NNfunction_NG_2::synapse0x1c1de10() {
   return (neuron0x1bfe320()*0.000231436);
}

double NNfunction_NG_2::synapse0x1c1de50() {
   return (neuron0x1bfe660()*0.0126756);
}

double NNfunction_NG_2::synapse0x1c1de90() {
   return (neuron0x1bfe9a0()*-0.00840384);
}

double NNfunction_NG_2::synapse0x1c1ded0() {
   return (neuron0x1bfece0()*0.00499124);
}

double NNfunction_NG_2::synapse0x1c1df10() {
   return (neuron0x1bff020()*0.353999);
}

double NNfunction_NG_2::synapse0x1c1df50() {
   return (neuron0x1bff360()*-0.0108107);
}

double NNfunction_NG_2::synapse0x1c1df90() {
   return (neuron0x1bff6a0()*0.0283929);
}

double NNfunction_NG_2::synapse0x1c1dfd0() {
   return (neuron0x1bff9e0()*-0.431433);
}

double NNfunction_NG_2::synapse0x1c1e010() {
   return (neuron0x1bffd20()*-0.00588647);
}

double NNfunction_NG_2::synapse0x1c1daa0() {
   return (neuron0x1c00060()*-0.0407663);
}

double NNfunction_NG_2::synapse0x1c1dae0() {
   return (neuron0x1c005c0()*0.0487766);
}

double NNfunction_NG_2::synapse0x1c1e160() {
   return (neuron0x1c007e0()*0.0232352);
}

double NNfunction_NG_2::synapse0x1c1e1a0() {
   return (neuron0x1c00b20()*-0.0190519);
}

double NNfunction_NG_2::synapse0x1c1e1e0() {
   return (neuron0x1c00e60()*0.00894157);
}

double NNfunction_NG_2::synapse0x1c1e220() {
   return (neuron0x1c011a0()*0.00403326);
}

double NNfunction_NG_2::synapse0x1c1e260() {
   return (neuron0x1c014e0()*-0.00289119);
}

double NNfunction_NG_2::synapse0x1c1e2a0() {
   return (neuron0x1c01820()*2.53344);
}

double NNfunction_NG_2::synapse0x1c06d50() {
   return (neuron0x1bfcc60()*-0.0459013);
}

double NNfunction_NG_2::synapse0x1c06d90() {
   return (neuron0x1bfcfa0()*-0.0827224);
}

double NNfunction_NG_2::synapse0x1c06dd0() {
   return (neuron0x1bfd2e0()*0.194831);
}

double NNfunction_NG_2::synapse0x1c06e10() {
   return (neuron0x1bfd620()*-0.968483);
}

double NNfunction_NG_2::synapse0x1c06e50() {
   return (neuron0x1bfd960()*0.0129061);
}

double NNfunction_NG_2::synapse0x1c06e90() {
   return (neuron0x1bfdca0()*0.00940543);
}

double NNfunction_NG_2::synapse0x1c06ed0() {
   return (neuron0x1bfdfe0()*0.0103369);
}

double NNfunction_NG_2::synapse0x1c06f10() {
   return (neuron0x1bfe320()*-0.0148952);
}

double NNfunction_NG_2::synapse0x1c1ea30() {
   return (neuron0x1bfe660()*0.0153859);
}

double NNfunction_NG_2::synapse0x1c1ea70() {
   return (neuron0x1bfe9a0()*-0.00285345);
}

double NNfunction_NG_2::synapse0x1c1eab0() {
   return (neuron0x1bfece0()*0.0417279);
}

double NNfunction_NG_2::synapse0x1c1eaf0() {
   return (neuron0x1bff020()*0.692571);
}

double NNfunction_NG_2::synapse0x1c1eb30() {
   return (neuron0x1bff360()*0.0755087);
}

double NNfunction_NG_2::synapse0x1c1eb70() {
   return (neuron0x1bff6a0()*-0.0208051);
}

double NNfunction_NG_2::synapse0x1c1ebb0() {
   return (neuron0x1bff9e0()*0.081516);
}

double NNfunction_NG_2::synapse0x1c1ebf0() {
   return (neuron0x1bffd20()*0.0111451);
}

double NNfunction_NG_2::synapse0x1c1e470() {
   return (neuron0x1c00060()*-0.0239564);
}

double NNfunction_NG_2::synapse0x1c1e4b0() {
   return (neuron0x1c005c0()*-0.00116921);
}

double NNfunction_NG_2::synapse0x1c1ed40() {
   return (neuron0x1c007e0()*-0.0192457);
}

double NNfunction_NG_2::synapse0x1c1ed80() {
   return (neuron0x1c00b20()*0.00982953);
}

double NNfunction_NG_2::synapse0x1c1edc0() {
   return (neuron0x1c00e60()*0.00464288);
}

double NNfunction_NG_2::synapse0x1c1ee00() {
   return (neuron0x1c011a0()*-0.0162532);
}

double NNfunction_NG_2::synapse0x1c1ee40() {
   return (neuron0x1c014e0()*0.0236471);
}

double NNfunction_NG_2::synapse0x1c1ee80() {
   return (neuron0x1c01820()*-0.237653);
}

double NNfunction_NG_2::synapse0x1c1f200() {
   return (neuron0x1bfcc60()*-0.00646239);
}

double NNfunction_NG_2::synapse0x1c1f240() {
   return (neuron0x1bfcfa0()*-0.0145782);
}

double NNfunction_NG_2::synapse0x1c1f280() {
   return (neuron0x1bfd2e0()*-0.0396121);
}

double NNfunction_NG_2::synapse0x1c1f2c0() {
   return (neuron0x1bfd620()*11.5899);
}

double NNfunction_NG_2::synapse0x1c1f300() {
   return (neuron0x1bfd960()*0.00732411);
}

double NNfunction_NG_2::synapse0x1c1f340() {
   return (neuron0x1bfdca0()*0.010744);
}

double NNfunction_NG_2::synapse0x1c1f380() {
   return (neuron0x1bfdfe0()*0.0257691);
}

double NNfunction_NG_2::synapse0x1c1f3c0() {
   return (neuron0x1bfe320()*-0.0133064);
}

double NNfunction_NG_2::synapse0x1c1f400() {
   return (neuron0x1bfe660()*0.0035484);
}

double NNfunction_NG_2::synapse0x1c1f440() {
   return (neuron0x1bfe9a0()*-0.000747983);
}

double NNfunction_NG_2::synapse0x1c1f480() {
   return (neuron0x1bfece0()*-0.0195661);
}

double NNfunction_NG_2::synapse0x1c1f4c0() {
   return (neuron0x1bff020()*-0.0197825);
}

double NNfunction_NG_2::synapse0x1c1f500() {
   return (neuron0x1bff360()*-0.00380961);
}

double NNfunction_NG_2::synapse0x1c1f540() {
   return (neuron0x1bff6a0()*0.00970923);
}

double NNfunction_NG_2::synapse0x1c1f580() {
   return (neuron0x1bff9e0()*-0.0302669);
}

double NNfunction_NG_2::synapse0x1c1f5c0() {
   return (neuron0x1bffd20()*0.0217224);
}

double NNfunction_NG_2::synapse0x1c1f050() {
   return (neuron0x1c00060()*0.00890139);
}

double NNfunction_NG_2::synapse0x1c1f090() {
   return (neuron0x1c005c0()*0.00869583);
}

double NNfunction_NG_2::synapse0x1c1f710() {
   return (neuron0x1c007e0()*0.00401144);
}

double NNfunction_NG_2::synapse0x1c1f750() {
   return (neuron0x1c00b20()*0.0144513);
}

double NNfunction_NG_2::synapse0x1c1f790() {
   return (neuron0x1c00e60()*-0.0285787);
}

double NNfunction_NG_2::synapse0x1c1f7d0() {
   return (neuron0x1c011a0()*-0.0156813);
}

double NNfunction_NG_2::synapse0x1c1f810() {
   return (neuron0x1c014e0()*0.0137397);
}

double NNfunction_NG_2::synapse0x1c1f850() {
   return (neuron0x1c01820()*-0.000331597);
}

double NNfunction_NG_2::synapse0x1c1fbd0() {
   return (neuron0x1bfcc60()*0.0146646);
}

double NNfunction_NG_2::synapse0x1c1fc10() {
   return (neuron0x1bfcfa0()*-0.0162971);
}

double NNfunction_NG_2::synapse0x1c1fc50() {
   return (neuron0x1bfd2e0()*-0.00144904);
}

double NNfunction_NG_2::synapse0x1c1fc90() {
   return (neuron0x1bfd620()*12.3036);
}

double NNfunction_NG_2::synapse0x1c1fcd0() {
   return (neuron0x1bfd960()*-0.00205723);
}

double NNfunction_NG_2::synapse0x1c1fd10() {
   return (neuron0x1bfdca0()*-0.00390921);
}

double NNfunction_NG_2::synapse0x1c1fd50() {
   return (neuron0x1bfdfe0()*0.0314517);
}

double NNfunction_NG_2::synapse0x1c1fd90() {
   return (neuron0x1bfe320()*-0.0194412);
}

double NNfunction_NG_2::synapse0x1c1fdd0() {
   return (neuron0x1bfe660()*-0.0116825);
}

double NNfunction_NG_2::synapse0x1c1fe10() {
   return (neuron0x1bfe9a0()*0.0186232);
}

double NNfunction_NG_2::synapse0x1c1fe50() {
   return (neuron0x1bfece0()*-0.0128849);
}

double NNfunction_NG_2::synapse0x1c1fe90() {
   return (neuron0x1bff020()*-0.0668532);
}

double NNfunction_NG_2::synapse0x1c1fed0() {
   return (neuron0x1bff360()*-0.0271028);
}

double NNfunction_NG_2::synapse0x1c1ff10() {
   return (neuron0x1bff6a0()*-0.0206754);
}

double NNfunction_NG_2::synapse0x1c1ff50() {
   return (neuron0x1bff9e0()*0.00875296);
}

double NNfunction_NG_2::synapse0x1c1ff90() {
   return (neuron0x1bffd20()*0.029443);
}

double NNfunction_NG_2::synapse0x1c1fa20() {
   return (neuron0x1c00060()*-0.00473579);
}

double NNfunction_NG_2::synapse0x1c1fa60() {
   return (neuron0x1c005c0()*-0.00178219);
}

double NNfunction_NG_2::synapse0x1c10590() {
   return (neuron0x1c007e0()*0.0373183);
}

double NNfunction_NG_2::synapse0x1c105d0() {
   return (neuron0x1c00b20()*0.0155593);
}

double NNfunction_NG_2::synapse0x1c10610() {
   return (neuron0x1c00e60()*-0.029331);
}

double NNfunction_NG_2::synapse0x1c10650() {
   return (neuron0x1c011a0()*-0.00331347);
}

double NNfunction_NG_2::synapse0x1c10690() {
   return (neuron0x1c014e0()*0.009977);
}

double NNfunction_NG_2::synapse0x1c106d0() {
   return (neuron0x1c01820()*0.00494905);
}

double NNfunction_NG_2::synapse0x1c10a50() {
   return (neuron0x1bfcc60()*-0.066718);
}

double NNfunction_NG_2::synapse0x1c10a90() {
   return (neuron0x1bfcfa0()*0.105345);
}

double NNfunction_NG_2::synapse0x1c10ad0() {
   return (neuron0x1bfd2e0()*-3.1724);
}

double NNfunction_NG_2::synapse0x1c10b10() {
   return (neuron0x1bfd620()*0.0954313);
}

double NNfunction_NG_2::synapse0x1c10b50() {
   return (neuron0x1bfd960()*-0.0297567);
}

double NNfunction_NG_2::synapse0x1c10b90() {
   return (neuron0x1bfdca0()*0.00866774);
}

double NNfunction_NG_2::synapse0x1c10bd0() {
   return (neuron0x1bfdfe0()*0.00285371);
}

double NNfunction_NG_2::synapse0x1c10c10() {
   return (neuron0x1bfe320()*0.0166376);
}

double NNfunction_NG_2::synapse0x1c10c50() {
   return (neuron0x1bfe660()*0.00550511);
}

double NNfunction_NG_2::synapse0x1c10c90() {
   return (neuron0x1bfe9a0()*0.00791136);
}

double NNfunction_NG_2::synapse0x1c10cd0() {
   return (neuron0x1bfece0()*0.00486222);
}

double NNfunction_NG_2::synapse0x1c10d10() {
   return (neuron0x1bff020()*-0.580493);
}

double NNfunction_NG_2::synapse0x1c10d50() {
   return (neuron0x1bff360()*-0.0600888);
}

double NNfunction_NG_2::synapse0x1c10d90() {
   return (neuron0x1bff6a0()*-0.0175908);
}

double NNfunction_NG_2::synapse0x1c10dd0() {
   return (neuron0x1bff9e0()*0.148473);
}

double NNfunction_NG_2::synapse0x1c10e10() {
   return (neuron0x1bffd20()*-0.00456761);
}

double NNfunction_NG_2::synapse0x1c108a0() {
   return (neuron0x1c00060()*-0.00127739);
}

double NNfunction_NG_2::synapse0x1c108e0() {
   return (neuron0x1c005c0()*0.0562329);
}

double NNfunction_NG_2::synapse0x1c10f60() {
   return (neuron0x1c007e0()*-0.0117559);
}

double NNfunction_NG_2::synapse0x1c10fa0() {
   return (neuron0x1c00b20()*-0.00448408);
}

double NNfunction_NG_2::synapse0x1c10fe0() {
   return (neuron0x1c00e60()*-0.00701881);
}

double NNfunction_NG_2::synapse0x1c11020() {
   return (neuron0x1c011a0()*0.0131243);
}

double NNfunction_NG_2::synapse0x1c11060() {
   return (neuron0x1c014e0()*-0.00298785);
}

double NNfunction_NG_2::synapse0x1c110a0() {
   return (neuron0x1c01820()*-0.0189518);
}

double NNfunction_NG_2::synapse0x1c11420() {
   return (neuron0x1bfcc60()*0.0940566);
}

double NNfunction_NG_2::synapse0x1c11460() {
   return (neuron0x1bfcfa0()*-6.76111);
}

double NNfunction_NG_2::synapse0x1c114a0() {
   return (neuron0x1bfd2e0()*-1.21507);
}

double NNfunction_NG_2::synapse0x1c114e0() {
   return (neuron0x1bfd620()*-0.0297275);
}

double NNfunction_NG_2::synapse0x1c11520() {
   return (neuron0x1bfd960()*0.0350452);
}

double NNfunction_NG_2::synapse0x1c11560() {
   return (neuron0x1bfdca0()*-0.00604812);
}

double NNfunction_NG_2::synapse0x1c115a0() {
   return (neuron0x1bfdfe0()*0.0348566);
}

double NNfunction_NG_2::synapse0x1c115e0() {
   return (neuron0x1bfe320()*0.0352039);
}

double NNfunction_NG_2::synapse0x1c11620() {
   return (neuron0x1bfe660()*0.00770785);
}

double NNfunction_NG_2::synapse0x1c11660() {
   return (neuron0x1bfe9a0()*-0.00115363);
}

double NNfunction_NG_2::synapse0x1c116a0() {
   return (neuron0x1bfece0()*-0.0300359);
}

double NNfunction_NG_2::synapse0x1c116e0() {
   return (neuron0x1bff020()*-0.207971);
}

double NNfunction_NG_2::synapse0x1c11720() {
   return (neuron0x1bff360()*-0.045258);
}

double NNfunction_NG_2::synapse0x1c11760() {
   return (neuron0x1bff6a0()*-0.0130755);
}

double NNfunction_NG_2::synapse0x1c117a0() {
   return (neuron0x1bff9e0()*0.154601);
}

double NNfunction_NG_2::synapse0x1c117e0() {
   return (neuron0x1bffd20()*-0.0317377);
}

double NNfunction_NG_2::synapse0x1c11270() {
   return (neuron0x1c00060()*0.0169);
}

double NNfunction_NG_2::synapse0x1c112b0() {
   return (neuron0x1c005c0()*0.0281335);
}

double NNfunction_NG_2::synapse0x1c11930() {
   return (neuron0x1c007e0()*-0.00431971);
}

double NNfunction_NG_2::synapse0x1c11970() {
   return (neuron0x1c00b20()*0.0121643);
}

double NNfunction_NG_2::synapse0x1c119b0() {
   return (neuron0x1c00e60()*-0.0107431);
}

double NNfunction_NG_2::synapse0x1c119f0() {
   return (neuron0x1c011a0()*-0.00326084);
}

double NNfunction_NG_2::synapse0x1c11a30() {
   return (neuron0x1c014e0()*0.0304628);
}

double NNfunction_NG_2::synapse0x1c11a70() {
   return (neuron0x1c01820()*-4.85517);
}

double NNfunction_NG_2::synapse0x1c11df0() {
   return (neuron0x1bfcc60()*0.140895);
}

double NNfunction_NG_2::synapse0x1c11e30() {
   return (neuron0x1bfcfa0()*-4.34838);
}

double NNfunction_NG_2::synapse0x1c11e70() {
   return (neuron0x1bfd2e0()*-1.0588);
}

double NNfunction_NG_2::synapse0x1c11eb0() {
   return (neuron0x1bfd620()*0.02999);
}

double NNfunction_NG_2::synapse0x1c11ef0() {
   return (neuron0x1bfd960()*0.0459437);
}

double NNfunction_NG_2::synapse0x1c11f30() {
   return (neuron0x1bfdca0()*0.035729);
}

double NNfunction_NG_2::synapse0x1c11f70() {
   return (neuron0x1bfdfe0()*-0.000985475);
}

double NNfunction_NG_2::synapse0x1c11fb0() {
   return (neuron0x1bfe320()*-0.0128798);
}

double NNfunction_NG_2::synapse0x1c11ff0() {
   return (neuron0x1bfe660()*-0.0197619);
}

double NNfunction_NG_2::synapse0x1c12030() {
   return (neuron0x1bfe9a0()*0.0162093);
}

double NNfunction_NG_2::synapse0x1c12070() {
   return (neuron0x1bfece0()*0.00303125);
}

double NNfunction_NG_2::synapse0x1c120b0() {
   return (neuron0x1bff020()*-0.256792);
}

double NNfunction_NG_2::synapse0x1c120f0() {
   return (neuron0x1bff360()*0.0130539);
}

double NNfunction_NG_2::synapse0x1c12130() {
   return (neuron0x1bff6a0()*0.0563257);
}

double NNfunction_NG_2::synapse0x1c12170() {
   return (neuron0x1bff9e0()*0.327987);
}

double NNfunction_NG_2::synapse0x1c121b0() {
   return (neuron0x1bffd20()*-0.0211829);
}

double NNfunction_NG_2::synapse0x1c11c40() {
   return (neuron0x1c00060()*0.0420341);
}

double NNfunction_NG_2::synapse0x1c11c80() {
   return (neuron0x1c005c0()*0.0159442);
}

double NNfunction_NG_2::synapse0x1c12300() {
   return (neuron0x1c007e0()*-0.00953387);
}

double NNfunction_NG_2::synapse0x1c12340() {
   return (neuron0x1c00b20()*-0.0529442);
}

double NNfunction_NG_2::synapse0x1c12380() {
   return (neuron0x1c00e60()*-0.0208386);
}

double NNfunction_NG_2::synapse0x1c123c0() {
   return (neuron0x1c011a0()*-0.00566318);
}

double NNfunction_NG_2::synapse0x1c12400() {
   return (neuron0x1c014e0()*0.0277666);
}

double NNfunction_NG_2::synapse0x1c12440() {
   return (neuron0x1c01820()*0.916974);
}

double NNfunction_NG_2::synapse0x1c24310() {
   return (neuron0x1bfcc60()*-0.0491503);
}

double NNfunction_NG_2::synapse0x1c24350() {
   return (neuron0x1bfcfa0()*0.031278);
}

double NNfunction_NG_2::synapse0x1c24390() {
   return (neuron0x1bfd2e0()*0.706889);
}

double NNfunction_NG_2::synapse0x1c243d0() {
   return (neuron0x1bfd620()*-0.115972);
}

double NNfunction_NG_2::synapse0x1c24410() {
   return (neuron0x1bfd960()*-0.047793);
}

double NNfunction_NG_2::synapse0x1c24450() {
   return (neuron0x1bfdca0()*-0.00833104);
}

double NNfunction_NG_2::synapse0x1c24490() {
   return (neuron0x1bfdfe0()*-0.00830122);
}

double NNfunction_NG_2::synapse0x1c244d0() {
   return (neuron0x1bfe320()*0.00537601);
}

double NNfunction_NG_2::synapse0x1c24510() {
   return (neuron0x1bfe660()*-0.00852023);
}

double NNfunction_NG_2::synapse0x1c24550() {
   return (neuron0x1bfe9a0()*-0.0361965);
}

double NNfunction_NG_2::synapse0x1c24590() {
   return (neuron0x1bfece0()*-0.0196907);
}

double NNfunction_NG_2::synapse0x1c245d0() {
   return (neuron0x1bff020()*0.0214914);
}

double NNfunction_NG_2::synapse0x1c24610() {
   return (neuron0x1bff360()*-0.0415215);
}

double NNfunction_NG_2::synapse0x1c24650() {
   return (neuron0x1bff6a0()*0.0139871);
}

double NNfunction_NG_2::synapse0x1c24690() {
   return (neuron0x1bff9e0()*-0.069186);
}

double NNfunction_NG_2::synapse0x1c246d0() {
   return (neuron0x1bffd20()*0.01825);
}

double NNfunction_NG_2::synapse0x1c12480() {
   return (neuron0x1c00060()*-0.020752);
}

double NNfunction_NG_2::synapse0x1c124c0() {
   return (neuron0x1c005c0()*0.139816);
}

double NNfunction_NG_2::synapse0x1c24820() {
   return (neuron0x1c007e0()*0.0217445);
}

double NNfunction_NG_2::synapse0x1c24860() {
   return (neuron0x1c00b20()*-0.00467932);
}

double NNfunction_NG_2::synapse0x1c248a0() {
   return (neuron0x1c00e60()*0.0164154);
}

double NNfunction_NG_2::synapse0x1c248e0() {
   return (neuron0x1c011a0()*-0.00196653);
}

double NNfunction_NG_2::synapse0x1c24920() {
   return (neuron0x1c014e0()*-0.0167061);
}

double NNfunction_NG_2::synapse0x1c24960() {
   return (neuron0x1c01820()*-0.623017);
}

double NNfunction_NG_2::synapse0x1c24ce0() {
   return (neuron0x1bfcc60()*-0.082008);
}

double NNfunction_NG_2::synapse0x1c24d20() {
   return (neuron0x1bfcfa0()*-0.0764037);
}

double NNfunction_NG_2::synapse0x1c24d60() {
   return (neuron0x1bfd2e0()*-0.215914);
}

double NNfunction_NG_2::synapse0x1c24da0() {
   return (neuron0x1bfd620()*-1.04262);
}

double NNfunction_NG_2::synapse0x1c24de0() {
   return (neuron0x1bfd960()*0.0771442);
}

double NNfunction_NG_2::synapse0x1c24e20() {
   return (neuron0x1bfdca0()*-0.0548308);
}

double NNfunction_NG_2::synapse0x1c24e60() {
   return (neuron0x1bfdfe0()*-0.0939756);
}

double NNfunction_NG_2::synapse0x1c24ea0() {
   return (neuron0x1bfe320()*0.00840087);
}

double NNfunction_NG_2::synapse0x1c24ee0() {
   return (neuron0x1bfe660()*0.0291119);
}

double NNfunction_NG_2::synapse0x1c24f20() {
   return (neuron0x1bfe9a0()*0.0394609);
}

double NNfunction_NG_2::synapse0x1c24f60() {
   return (neuron0x1bfece0()*0.0887023);
}

double NNfunction_NG_2::synapse0x1c24fa0() {
   return (neuron0x1bff020()*-2.85463);
}

double NNfunction_NG_2::synapse0x1c24fe0() {
   return (neuron0x1bff360()*0.422969);
}

double NNfunction_NG_2::synapse0x1c25020() {
   return (neuron0x1bff6a0()*-0.0399803);
}

double NNfunction_NG_2::synapse0x1c25060() {
   return (neuron0x1bff9e0()*-0.179927);
}

double NNfunction_NG_2::synapse0x1c250a0() {
   return (neuron0x1bffd20()*0.00948321);
}

double NNfunction_NG_2::synapse0x1c24b30() {
   return (neuron0x1c00060()*0.0199983);
}

double NNfunction_NG_2::synapse0x1c24b70() {
   return (neuron0x1c005c0()*0.0729744);
}

double NNfunction_NG_2::synapse0x1c251f0() {
   return (neuron0x1c007e0()*-0.0327598);
}

double NNfunction_NG_2::synapse0x1c25230() {
   return (neuron0x1c00b20()*0.00569795);
}

double NNfunction_NG_2::synapse0x1c25270() {
   return (neuron0x1c00e60()*-0.0610574);
}

double NNfunction_NG_2::synapse0x1c252b0() {
   return (neuron0x1c011a0()*-0.077422);
}

double NNfunction_NG_2::synapse0x1c252f0() {
   return (neuron0x1c014e0()*0.00563614);
}

double NNfunction_NG_2::synapse0x1c25330() {
   return (neuron0x1c01820()*-0.971018);
}

double NNfunction_NG_2::synapse0x1c256b0() {
   return (neuron0x1bfcc60()*-0.0158045);
}

double NNfunction_NG_2::synapse0x1c256f0() {
   return (neuron0x1bfcfa0()*0.0121829);
}

double NNfunction_NG_2::synapse0x1c25730() {
   return (neuron0x1bfd2e0()*-0.84902);
}

double NNfunction_NG_2::synapse0x1c25770() {
   return (neuron0x1bfd620()*0.143086);
}

double NNfunction_NG_2::synapse0x1c257b0() {
   return (neuron0x1bfd960()*0.00809515);
}

double NNfunction_NG_2::synapse0x1c257f0() {
   return (neuron0x1bfdca0()*-0.00317895);
}

double NNfunction_NG_2::synapse0x1c25830() {
   return (neuron0x1bfdfe0()*-0.00207661);
}

double NNfunction_NG_2::synapse0x1c25870() {
   return (neuron0x1bfe320()*-0.00531228);
}

double NNfunction_NG_2::synapse0x1c258b0() {
   return (neuron0x1bfe660()*0.00295173);
}

double NNfunction_NG_2::synapse0x1c258f0() {
   return (neuron0x1bfe9a0()*0.0561427);
}

double NNfunction_NG_2::synapse0x1c25930() {
   return (neuron0x1bfece0()*0.0377931);
}

double NNfunction_NG_2::synapse0x1c25970() {
   return (neuron0x1bff020()*-0.162357);
}

double NNfunction_NG_2::synapse0x1c259b0() {
   return (neuron0x1bff360()*-0.0289055);
}

double NNfunction_NG_2::synapse0x1c259f0() {
   return (neuron0x1bff6a0()*-0.0154375);
}

double NNfunction_NG_2::synapse0x1c25a30() {
   return (neuron0x1bff9e0()*-0.00584399);
}

double NNfunction_NG_2::synapse0x1c25a70() {
   return (neuron0x1bffd20()*-0.0501712);
}

double NNfunction_NG_2::synapse0x1c25500() {
   return (neuron0x1c00060()*0.00107605);
}

double NNfunction_NG_2::synapse0x1c25540() {
   return (neuron0x1c005c0()*-0.0355286);
}

double NNfunction_NG_2::synapse0x1c25bc0() {
   return (neuron0x1c007e0()*-0.0394905);
}

double NNfunction_NG_2::synapse0x1c25c00() {
   return (neuron0x1c00b20()*-0.00565242);
}

double NNfunction_NG_2::synapse0x1c25c40() {
   return (neuron0x1c00e60()*-0.0239574);
}

double NNfunction_NG_2::synapse0x1c25c80() {
   return (neuron0x1c011a0()*0.0119898);
}

double NNfunction_NG_2::synapse0x1c25cc0() {
   return (neuron0x1c014e0()*0.00715153);
}

double NNfunction_NG_2::synapse0x1c25d00() {
   return (neuron0x1c01820()*0.286947);
}

double NNfunction_NG_2::synapse0x1c26080() {
   return (neuron0x1bfcc60()*-0.15142);
}

double NNfunction_NG_2::synapse0x1c260c0() {
   return (neuron0x1bfcfa0()*0.0456167);
}

double NNfunction_NG_2::synapse0x1c26100() {
   return (neuron0x1bfd2e0()*0.491228);
}

double NNfunction_NG_2::synapse0x1c26140() {
   return (neuron0x1bfd620()*0.0479052);
}

double NNfunction_NG_2::synapse0x1c26180() {
   return (neuron0x1bfd960()*-0.0352252);
}

double NNfunction_NG_2::synapse0x1c261c0() {
   return (neuron0x1bfdca0()*-0.0140542);
}

double NNfunction_NG_2::synapse0x1c26200() {
   return (neuron0x1bfdfe0()*-0.0481418);
}

double NNfunction_NG_2::synapse0x1c26240() {
   return (neuron0x1bfe320()*0.00357094);
}

double NNfunction_NG_2::synapse0x1c26280() {
   return (neuron0x1bfe660()*0.0115252);
}

double NNfunction_NG_2::synapse0x1c262c0() {
   return (neuron0x1bfe9a0()*-0.0692263);
}

double NNfunction_NG_2::synapse0x1c26300() {
   return (neuron0x1bfece0()*-0.0451341);
}

double NNfunction_NG_2::synapse0x1c26340() {
   return (neuron0x1bff020()*-1.16093);
}

double NNfunction_NG_2::synapse0x1c26380() {
   return (neuron0x1bff360()*-0.00684759);
}

double NNfunction_NG_2::synapse0x1c263c0() {
   return (neuron0x1bff6a0()*0.0502073);
}

double NNfunction_NG_2::synapse0x1c26400() {
   return (neuron0x1bff9e0()*-0.189257);
}

double NNfunction_NG_2::synapse0x1c26440() {
   return (neuron0x1bffd20()*0.0779848);
}

double NNfunction_NG_2::synapse0x1c25ed0() {
   return (neuron0x1c00060()*-0.055859);
}

double NNfunction_NG_2::synapse0x1c25f10() {
   return (neuron0x1c005c0()*0.0113223);
}

double NNfunction_NG_2::synapse0x1c26590() {
   return (neuron0x1c007e0()*-0.0248703);
}

double NNfunction_NG_2::synapse0x1c265d0() {
   return (neuron0x1c00b20()*-0.0130852);
}

double NNfunction_NG_2::synapse0x1c26610() {
   return (neuron0x1c00e60()*-0.0415585);
}

double NNfunction_NG_2::synapse0x1c26650() {
   return (neuron0x1c011a0()*-0.0399133);
}

double NNfunction_NG_2::synapse0x1c26690() {
   return (neuron0x1c014e0()*0.0242701);
}

double NNfunction_NG_2::synapse0x1c266d0() {
   return (neuron0x1c01820()*0.0429303);
}

double NNfunction_NG_2::synapse0x1c02c70() {
   return (neuron0x1c01cc0()*-1.55546);
}

double NNfunction_NG_2::synapse0x1c02cb0() {
   return (neuron0x1c025d0()*-1.10649);
}

double NNfunction_NG_2::synapse0x1c04180() {
   return (neuron0x1c030b0()*0.242979);
}

double NNfunction_NG_2::synapse0x1c041c0() {
   return (neuron0x19bc940()*-0.961616);
}

double NNfunction_NG_2::synapse0x1c04b50() {
   return (neuron0x1c03ed0()*-0.499549);
}

double NNfunction_NG_2::synapse0x1c04b90() {
   return (neuron0x1c048a0()*0.672871);
}

double NNfunction_NG_2::synapse0x1c05920() {
   return (neuron0x1c05670()*0.548969);
}

double NNfunction_NG_2::synapse0x1c05960() {
   return (neuron0x1c06040()*3.99475);
}

double NNfunction_NG_2::synapse0x1c062f0() {
   return (neuron0x1c06a10()*-2.12934);
}

double NNfunction_NG_2::synapse0x1c06330() {
   return (neuron0x1c074f0()*-2.65777);
}

double NNfunction_NG_2::synapse0x1c06cc0() {
   return (neuron0x1c07ec0()*0.0362864);
}

double NNfunction_NG_2::synapse0x1c06d00() {
   return (neuron0x1c04fa0()*-0.505514);
}

double NNfunction_NG_2::synapse0x1c077a0() {
   return (neuron0x1c09a70()*1.89394);
}

double NNfunction_NG_2::synapse0x1c077e0() {
   return (neuron0x1c0a440()*0.118627);
}

double NNfunction_NG_2::synapse0x1c08170() {
   return (neuron0x1c0ae10()*2.58996);
}

double NNfunction_NG_2::synapse0x1c081b0() {
   return (neuron0x1c0b7e0()*1.08905);
}

double NNfunction_NG_2::synapse0x1c05250() {
   return (neuron0x1c0d5f0()*-0.279242);
}

double NNfunction_NG_2::synapse0x1c05290() {
   return (neuron0x1c0d8d0()*0.175235);
}

double NNfunction_NG_2::synapse0x1c09d20() {
   return (neuron0x1c0e2a0()*-2.81378);
}

double NNfunction_NG_2::synapse0x1c09d60() {
   return (neuron0x1c0ec70()*-1.86378);
}

double NNfunction_NG_2::synapse0x1c0a6f0() {
   return (neuron0x1c0f640()*1.5756);
}

double NNfunction_NG_2::synapse0x1c0a730() {
   return (neuron0x1c10010()*0.0371566);
}

double NNfunction_NG_2::synapse0x1c0b0c0() {
   return (neuron0x1c08b60()*-0.138424);
}

double NNfunction_NG_2::synapse0x1c0b100() {
   return (neuron0x1c09530()*2.56621);
}

double NNfunction_NG_2::synapse0x1c0ba90() {
   return (neuron0x1c12da0()*-1.44894);
}

double NNfunction_NG_2::synapse0x1c0bad0() {
   return (neuron0x1c13770()*-0.236435);
}

double NNfunction_NG_2::synapse0x1bffc00() {
   return (neuron0x1c14140()*-0.215677);
}

double NNfunction_NG_2::synapse0x1bffc40() {
   return (neuron0x1c14b10()*-0.386749);
}

double NNfunction_NG_2::synapse0x1c0db80() {
   return (neuron0x1c154e0()*0.92374);
}

double NNfunction_NG_2::synapse0x1c0dbc0() {
   return (neuron0x1c15eb0()*3.08861);
}

double NNfunction_NG_2::synapse0x1c0e550() {
   return (neuron0x1c16880()*-0.103348);
}

double NNfunction_NG_2::synapse0x1c0e590() {
   return (neuron0x1c17250()*-0.34505);
}

double NNfunction_NG_2::synapse0x1c0ef20() {
   return (neuron0x1c0d2e0()*0.219664);
}

double NNfunction_NG_2::synapse0x1c0ef60() {
   return (neuron0x1c19e30()*1.03947);
}

double NNfunction_NG_2::synapse0x1c0f8f0() {
   return (neuron0x1c1a800()*-1.18236);
}

double NNfunction_NG_2::synapse0x1c0f930() {
   return (neuron0x1c1b1d0()*4.97459);
}

double NNfunction_NG_2::synapse0x1c102c0() {
   return (neuron0x1c1bba0()*-2.29656);
}

double NNfunction_NG_2::synapse0x1c10300() {
   return (neuron0x1c1c570()*-2.06089);
}

double NNfunction_NG_2::synapse0x1c08e10() {
   return (neuron0x1c1cf40()*-0.258647);
}

double NNfunction_NG_2::synapse0x1c08e50() {
   return (neuron0x1c1d910()*2.58173);
}

double NNfunction_NG_2::synapse0x1c126c0() {
   return (neuron0x1c1e2e0()*-1.28412);
}

double NNfunction_NG_2::synapse0x1c12700() {
   return (neuron0x1c1eec0()*3.69879);
}

double NNfunction_NG_2::synapse0x1c13050() {
   return (neuron0x1c1f890()*-3.62692);
}

double NNfunction_NG_2::synapse0x1c13090() {
   return (neuron0x1c10710()*1.69268);
}

double NNfunction_NG_2::synapse0x1c13a20() {
   return (neuron0x1c110e0()*-0.126352);
}

double NNfunction_NG_2::synapse0x1c13a60() {
   return (neuron0x1c11ab0()*0.671713);
}

double NNfunction_NG_2::synapse0x1c143f0() {
   return (neuron0x1c240f0()*2.00851);
}

double NNfunction_NG_2::synapse0x1c14430() {
   return (neuron0x1c249a0()*0.426828);
}

double NNfunction_NG_2::synapse0x1c14dc0() {
   return (neuron0x1c25370()*-1.3663);
}

double NNfunction_NG_2::synapse0x1c14e00() {
   return (neuron0x1c25d40()*-1.12411);
}

double NNfunction_NG_2::synapse0x1c17500() {
   return (neuron0x1c01cc0()*-0.0317832);
}

double NNfunction_NG_2::synapse0x1c17540() {
   return (neuron0x1c025d0()*-0.696896);
}

double NNfunction_NG_2::synapse0x1c0cac0() {
   return (neuron0x1c030b0()*-0.0386838);
}

double NNfunction_NG_2::synapse0x1c0cb00() {
   return (neuron0x19bc940()*-0.174667);
}

double NNfunction_NG_2::synapse0x1c1a0e0() {
   return (neuron0x1c03ed0()*0.193319);
}

double NNfunction_NG_2::synapse0x1c1a120() {
   return (neuron0x1c048a0()*-0.205213);
}

double NNfunction_NG_2::synapse0x1c1aab0() {
   return (neuron0x1c05670()*1.86859);
}

double NNfunction_NG_2::synapse0x1c1aaf0() {
   return (neuron0x1c06040()*0.0702494);
}

double NNfunction_NG_2::synapse0x1c1b480() {
   return (neuron0x1c06a10()*-1.30809);
}

double NNfunction_NG_2::synapse0x1c1b4c0() {
   return (neuron0x1c074f0()*-0.364223);
}

double NNfunction_NG_2::synapse0x1c1be50() {
   return (neuron0x1c07ec0()*0.763497);
}

double NNfunction_NG_2::synapse0x1c1be90() {
   return (neuron0x1c04fa0()*-0.114876);
}

double NNfunction_NG_2::synapse0x1c1c820() {
   return (neuron0x1c09a70()*0.703882);
}

double NNfunction_NG_2::synapse0x1c1c860() {
   return (neuron0x1c0a440()*0.373715);
}

double NNfunction_NG_2::synapse0x1c1d1f0() {
   return (neuron0x1c0ae10()*-0.657535);
}

double NNfunction_NG_2::synapse0x1c1d230() {
   return (neuron0x1c0b7e0()*0.427721);
}

double NNfunction_NG_2::synapse0x1c1dbc0() {
   return (neuron0x1c0d5f0()*0.493198);
}

double NNfunction_NG_2::synapse0x1c1dc00() {
   return (neuron0x1c0d8d0()*0.318596);
}

double NNfunction_NG_2::synapse0x1c1e590() {
   return (neuron0x1c0e2a0()*-0.47511);
}

double NNfunction_NG_2::synapse0x1c1e5d0() {
   return (neuron0x1c0ec70()*0.267668);
}

double NNfunction_NG_2::synapse0x1c1f170() {
   return (neuron0x1c0f640()*-0.0851017);
}

double NNfunction_NG_2::synapse0x1c1f1b0() {
   return (neuron0x1c10010()*0.497599);
}

double NNfunction_NG_2::synapse0x1c1fb40() {
   return (neuron0x1c08b60()*0.0393428);
}

double NNfunction_NG_2::synapse0x1c1fb80() {
   return (neuron0x1c09530()*-1.37789);
}

double NNfunction_NG_2::synapse0x1c109c0() {
   return (neuron0x1c12da0()*0.0397639);
}

double NNfunction_NG_2::synapse0x1c10a00() {
   return (neuron0x1c13770()*-0.143751);
}

double NNfunction_NG_2::synapse0x1c11390() {
   return (neuron0x1c14140()*0.251755);
}

double NNfunction_NG_2::synapse0x1c113d0() {
   return (neuron0x1c14b10()*0.00895472);
}

double NNfunction_NG_2::synapse0x1c11d60() {
   return (neuron0x1c154e0()*0.311665);
}

double NNfunction_NG_2::synapse0x1c11da0() {
   return (neuron0x1c15eb0()*0.646121);
}

double NNfunction_NG_2::synapse0x1c24280() {
   return (neuron0x1c16880()*-1.02531);
}

double NNfunction_NG_2::synapse0x1c242c0() {
   return (neuron0x1c17250()*0.0753789);
}

double NNfunction_NG_2::synapse0x1c24c50() {
   return (neuron0x1c0d2e0()*0.51006);
}

double NNfunction_NG_2::synapse0x1c24c90() {
   return (neuron0x1c19e30()*0.384272);
}

double NNfunction_NG_2::synapse0x1c25620() {
   return (neuron0x1c1a800()*0.0189993);
}

double NNfunction_NG_2::synapse0x1c25660() {
   return (neuron0x1c1b1d0()*0.752456);
}

double NNfunction_NG_2::synapse0x1c25ff0() {
   return (neuron0x1c1bba0()*-0.0948162);
}

double NNfunction_NG_2::synapse0x1c26030() {
   return (neuron0x1c1c570()*-0.540997);
}

double NNfunction_NG_2::synapse0x1c01ee0() {
   return (neuron0x1c1cf40()*-0.474171);
}

double NNfunction_NG_2::synapse0x1c01f20() {
   return (neuron0x1c1d910()*-0.327411);
}

double NNfunction_NG_2::synapse0x1c15790() {
   return (neuron0x1c1e2e0()*0.405828);
}

double NNfunction_NG_2::synapse0x1c157d0() {
   return (neuron0x1c1eec0()*1.60118);
}

double NNfunction_NG_2::synapse0x1c26710() {
   return (neuron0x1c1f890()*-1.01675);
}

double NNfunction_NG_2::synapse0x1c26750() {
   return (neuron0x1c10710()*1.1393);
}

double NNfunction_NG_2::synapse0x1c26790() {
   return (neuron0x1c110e0()*-1.56931);
}

double NNfunction_NG_2::synapse0x1c267d0() {
   return (neuron0x1c11ab0()*0.815219);
}

double NNfunction_NG_2::synapse0x1c2d680() {
   return (neuron0x1c240f0()*-0.256374);
}

double NNfunction_NG_2::synapse0x1c2d6c0() {
   return (neuron0x1c249a0()*0.0975318);
}

double NNfunction_NG_2::synapse0x1c2d700() {
   return (neuron0x1c25370()*-1.98671);
}

double NNfunction_NG_2::synapse0x1c2d740() {
   return (neuron0x1c25d40()*-0.256746);
}

double NNfunction_NG_2::synapse0x1c2dac0() {
   return (neuron0x1c01cc0()*-0.119085);
}

double NNfunction_NG_2::synapse0x1c2db00() {
   return (neuron0x1c025d0()*1.22735);
}

double NNfunction_NG_2::synapse0x1c2db40() {
   return (neuron0x1c030b0()*-0.102083);
}

double NNfunction_NG_2::synapse0x1c2db80() {
   return (neuron0x19bc940()*0.448369);
}

double NNfunction_NG_2::synapse0x1c2dbc0() {
   return (neuron0x1c03ed0()*-0.351414);
}

double NNfunction_NG_2::synapse0x1c2dc00() {
   return (neuron0x1c048a0()*-0.710208);
}

double NNfunction_NG_2::synapse0x1c2dc40() {
   return (neuron0x1c05670()*-0.869338);
}

double NNfunction_NG_2::synapse0x1c2dc80() {
   return (neuron0x1c06040()*-1.10849);
}

double NNfunction_NG_2::synapse0x1c2dcc0() {
   return (neuron0x1c06a10()*-0.967944);
}

double NNfunction_NG_2::synapse0x1c2dd00() {
   return (neuron0x1c074f0()*0.73756);
}

double NNfunction_NG_2::synapse0x1c2dd40() {
   return (neuron0x1c07ec0()*0.301975);
}

double NNfunction_NG_2::synapse0x1c2dd80() {
   return (neuron0x1c04fa0()*0.00884516);
}

double NNfunction_NG_2::synapse0x1c2ddc0() {
   return (neuron0x1c09a70()*-1.52682);
}

double NNfunction_NG_2::synapse0x1c2de00() {
   return (neuron0x1c0a440()*0.479479);
}

double NNfunction_NG_2::synapse0x1c2de40() {
   return (neuron0x1c0ae10()*1.55521);
}

double NNfunction_NG_2::synapse0x1c2de80() {
   return (neuron0x1c0b7e0()*0.325445);
}

double NNfunction_NG_2::synapse0x1c2d910() {
   return (neuron0x1c0d5f0()*-0.577831);
}

double NNfunction_NG_2::synapse0x1c2d950() {
   return (neuron0x1c0d8d0()*0.237058);
}

double NNfunction_NG_2::synapse0x1c2dfd0() {
   return (neuron0x1c0e2a0()*0.690352);
}

double NNfunction_NG_2::synapse0x1c2e010() {
   return (neuron0x1c0ec70()*-0.546144);
}

double NNfunction_NG_2::synapse0x1c2e050() {
   return (neuron0x1c0f640()*2.31964);
}

double NNfunction_NG_2::synapse0x1c2e090() {
   return (neuron0x1c10010()*-0.70299);
}

double NNfunction_NG_2::synapse0x1c2e0d0() {
   return (neuron0x1c08b60()*-0.0843592);
}

double NNfunction_NG_2::synapse0x1c2e110() {
   return (neuron0x1c09530()*2.52986);
}

double NNfunction_NG_2::synapse0x1c2e150() {
   return (neuron0x1c12da0()*-0.749211);
}

double NNfunction_NG_2::synapse0x1c2e190() {
   return (neuron0x1c13770()*-0.0503612);
}

double NNfunction_NG_2::synapse0x1c2e1d0() {
   return (neuron0x1c14140()*-0.157395);
}

double NNfunction_NG_2::synapse0x1c2e210() {
   return (neuron0x1c14b10()*-0.0899553);
}

double NNfunction_NG_2::synapse0x1c2e250() {
   return (neuron0x1c154e0()*-0.339957);
}

double NNfunction_NG_2::synapse0x1c2e290() {
   return (neuron0x1c15eb0()*-2.09405);
}

double NNfunction_NG_2::synapse0x1c2e2d0() {
   return (neuron0x1c16880()*0.682831);
}

double NNfunction_NG_2::synapse0x1c2e310() {
   return (neuron0x1c17250()*-0.928542);
}

double NNfunction_NG_2::synapse0x1c2dec0() {
   return (neuron0x1c0d2e0()*-0.22435);
}

double NNfunction_NG_2::synapse0x1c2df00() {
   return (neuron0x1c19e30()*-1.08555);
}

double NNfunction_NG_2::synapse0x1c2df40() {
   return (neuron0x1c1a800()*-0.427114);
}

double NNfunction_NG_2::synapse0x1c2df80() {
   return (neuron0x1c1b1d0()*-0.902101);
}

double NNfunction_NG_2::synapse0x1c2e560() {
   return (neuron0x1c1bba0()*1.48604);
}

double NNfunction_NG_2::synapse0x1c2e5a0() {
   return (neuron0x1c1c570()*-1.39343);
}

double NNfunction_NG_2::synapse0x1c2e5e0() {
   return (neuron0x1c1cf40()*-0.144919);
}

double NNfunction_NG_2::synapse0x1c2e620() {
   return (neuron0x1c1d910()*1.48138);
}

double NNfunction_NG_2::synapse0x1c2e660() {
   return (neuron0x1c1e2e0()*0.38377);
}

double NNfunction_NG_2::synapse0x1c2e6a0() {
   return (neuron0x1c1eec0()*1.17112);
}

double NNfunction_NG_2::synapse0x1c2e6e0() {
   return (neuron0x1c1f890()*-0.956431);
}

double NNfunction_NG_2::synapse0x1c2e720() {
   return (neuron0x1c10710()*-0.082923);
}

double NNfunction_NG_2::synapse0x1c2e760() {
   return (neuron0x1c110e0()*0.0930269);
}

double NNfunction_NG_2::synapse0x1c2e7a0() {
   return (neuron0x1c11ab0()*-1.65853);
}

double NNfunction_NG_2::synapse0x1c2e7e0() {
   return (neuron0x1c240f0()*-2.01854);
}

double NNfunction_NG_2::synapse0x1c2e820() {
   return (neuron0x1c249a0()*-0.158585);
}

double NNfunction_NG_2::synapse0x1c2e860() {
   return (neuron0x1c25370()*1.24701);
}

double NNfunction_NG_2::synapse0x1c2e8a0() {
   return (neuron0x1c25d40()*0.534329);
}

double NNfunction_NG_2::synapse0x1c2ec20() {
   return (neuron0x1c01cc0()*-0.372555);
}

double NNfunction_NG_2::synapse0x1c2ec60() {
   return (neuron0x1c025d0()*-0.504279);
}

double NNfunction_NG_2::synapse0x1c2eca0() {
   return (neuron0x1c030b0()*-1.81378);
}

double NNfunction_NG_2::synapse0x1c2ece0() {
   return (neuron0x19bc940()*-0.120579);
}

double NNfunction_NG_2::synapse0x1c2ed20() {
   return (neuron0x1c03ed0()*-0.58313);
}

double NNfunction_NG_2::synapse0x1c2ed60() {
   return (neuron0x1c048a0()*-0.0387241);
}

double NNfunction_NG_2::synapse0x1c2eda0() {
   return (neuron0x1c05670()*-0.43234);
}

double NNfunction_NG_2::synapse0x1c2ede0() {
   return (neuron0x1c06040()*0.283007);
}

double NNfunction_NG_2::synapse0x1c2ee20() {
   return (neuron0x1c06a10()*-1.12245);
}

double NNfunction_NG_2::synapse0x1c2ee60() {
   return (neuron0x1c074f0()*-0.203577);
}

double NNfunction_NG_2::synapse0x1c2eea0() {
   return (neuron0x1c07ec0()*-1.78989);
}

double NNfunction_NG_2::synapse0x1c2eee0() {
   return (neuron0x1c04fa0()*0.0437194);
}

double NNfunction_NG_2::synapse0x1c2ef20() {
   return (neuron0x1c09a70()*0.417603);
}

double NNfunction_NG_2::synapse0x1c2ef60() {
   return (neuron0x1c0a440()*1.24441);
}

double NNfunction_NG_2::synapse0x1c2efa0() {
   return (neuron0x1c0ae10()*-0.500666);
}

double NNfunction_NG_2::synapse0x1c2efe0() {
   return (neuron0x1c0b7e0()*0.221737);
}

double NNfunction_NG_2::synapse0x1c2ea70() {
   return (neuron0x1c0d5f0()*0.201685);
}

double NNfunction_NG_2::synapse0x1c2eab0() {
   return (neuron0x1c0d8d0()*0.361306);
}

double NNfunction_NG_2::synapse0x1c2f130() {
   return (neuron0x1c0e2a0()*-0.194151);
}

double NNfunction_NG_2::synapse0x1c2f170() {
   return (neuron0x1c0ec70()*0.674832);
}

double NNfunction_NG_2::synapse0x1c2f1b0() {
   return (neuron0x1c0f640()*0.0108815);
}

double NNfunction_NG_2::synapse0x1c2f1f0() {
   return (neuron0x1c10010()*0.3322);
}

double NNfunction_NG_2::synapse0x1c2f230() {
   return (neuron0x1c08b60()*-2.75552);
}

double NNfunction_NG_2::synapse0x1c2f270() {
   return (neuron0x1c09530()*-1.1126);
}

double NNfunction_NG_2::synapse0x1c2f2b0() {
   return (neuron0x1c12da0()*-0.0853736);
}

double NNfunction_NG_2::synapse0x1c2f2f0() {
   return (neuron0x1c13770()*0.0316879);
}

double NNfunction_NG_2::synapse0x1c2f330() {
   return (neuron0x1c14140()*-0.45622);
}

double NNfunction_NG_2::synapse0x1c2f370() {
   return (neuron0x1c14b10()*0.00624404);
}

double NNfunction_NG_2::synapse0x1c2f3b0() {
   return (neuron0x1c154e0()*1.25784);
}

double NNfunction_NG_2::synapse0x1c2f3f0() {
   return (neuron0x1c15eb0()*0.410447);
}

double NNfunction_NG_2::synapse0x1c2f430() {
   return (neuron0x1c16880()*-1.48723);
}

double NNfunction_NG_2::synapse0x1c2f470() {
   return (neuron0x1c17250()*1.22214);
}

double NNfunction_NG_2::synapse0x1c2f020() {
   return (neuron0x1c0d2e0()*-0.43357);
}

double NNfunction_NG_2::synapse0x1c2f060() {
   return (neuron0x1c19e30()*0.241343);
}

double NNfunction_NG_2::synapse0x1c2f0a0() {
   return (neuron0x1c1a800()*-0.00354827);
}

double NNfunction_NG_2::synapse0x1c2f0e0() {
   return (neuron0x1c1b1d0()*0.500561);
}

double NNfunction_NG_2::synapse0x1c2f6c0() {
   return (neuron0x1c1bba0()*-0.209412);
}

double NNfunction_NG_2::synapse0x1c2f700() {
   return (neuron0x1c1c570()*0.499606);
}

double NNfunction_NG_2::synapse0x1c2f740() {
   return (neuron0x1c1cf40()*-0.414079);
}

double NNfunction_NG_2::synapse0x1c2f780() {
   return (neuron0x1c1d910()*-0.481685);
}

double NNfunction_NG_2::synapse0x1c2f7c0() {
   return (neuron0x1c1e2e0()*1.28906);
}

double NNfunction_NG_2::synapse0x1c2f800() {
   return (neuron0x1c1eec0()*-0.776026);
}

double NNfunction_NG_2::synapse0x1c2f840() {
   return (neuron0x1c1f890()*0.649268);
}

double NNfunction_NG_2::synapse0x1c2f880() {
   return (neuron0x1c10710()*1.47235);
}

double NNfunction_NG_2::synapse0x1c2f8c0() {
   return (neuron0x1c110e0()*-1.35746);
}

double NNfunction_NG_2::synapse0x1c2f900() {
   return (neuron0x1c11ab0()*0.588316);
}

double NNfunction_NG_2::synapse0x1c2f940() {
   return (neuron0x1c240f0()*-0.352286);
}

double NNfunction_NG_2::synapse0x1c2f980() {
   return (neuron0x1c249a0()*-0.348562);
}

double NNfunction_NG_2::synapse0x1c2f9c0() {
   return (neuron0x1c25370()*-1.03789);
}

double NNfunction_NG_2::synapse0x1c2fa00() {
   return (neuron0x1c25d40()*-0.139815);
}

double NNfunction_NG_2::synapse0x1c2fd80() {
   return (neuron0x1c01cc0()*-0.414868);
}

double NNfunction_NG_2::synapse0x1c2fdc0() {
   return (neuron0x1c025d0()*0.00531901);
}

double NNfunction_NG_2::synapse0x1c2fe00() {
   return (neuron0x1c030b0()*0.353024);
}

double NNfunction_NG_2::synapse0x1c2fe40() {
   return (neuron0x19bc940()*0.153404);
}

double NNfunction_NG_2::synapse0x1c2fe80() {
   return (neuron0x1c03ed0()*0.18212);
}

double NNfunction_NG_2::synapse0x1c2fec0() {
   return (neuron0x1c048a0()*-0.0229737);
}

double NNfunction_NG_2::synapse0x1c2ff00() {
   return (neuron0x1c05670()*0.148285);
}

double NNfunction_NG_2::synapse0x1c2ff40() {
   return (neuron0x1c06040()*-0.161293);
}

double NNfunction_NG_2::synapse0x1c2ff80() {
   return (neuron0x1c06a10()*-0.625888);
}

double NNfunction_NG_2::synapse0x1c2ffc0() {
   return (neuron0x1c074f0()*-0.536501);
}

double NNfunction_NG_2::synapse0x1c30000() {
   return (neuron0x1c07ec0()*0.217273);
}

double NNfunction_NG_2::synapse0x1c30040() {
   return (neuron0x1c04fa0()*0.0442326);
}

double NNfunction_NG_2::synapse0x1c30080() {
   return (neuron0x1c09a70()*-0.411808);
}

double NNfunction_NG_2::synapse0x1c300c0() {
   return (neuron0x1c0a440()*0.142789);
}

double NNfunction_NG_2::synapse0x1c30100() {
   return (neuron0x1c0ae10()*-0.547667);
}

double NNfunction_NG_2::synapse0x1c30140() {
   return (neuron0x1c0b7e0()*0.237439);
}

double NNfunction_NG_2::synapse0x1c2fbd0() {
   return (neuron0x1c0d5f0()*0.0486754);
}

double NNfunction_NG_2::synapse0x1c2fc10() {
   return (neuron0x1c0d8d0()*-0.193837);
}

double NNfunction_NG_2::synapse0x1c30290() {
   return (neuron0x1c0e2a0()*0.0138678);
}

double NNfunction_NG_2::synapse0x1c302d0() {
   return (neuron0x1c0ec70()*-0.235283);
}

double NNfunction_NG_2::synapse0x1c30310() {
   return (neuron0x1c0f640()*-0.713555);
}

double NNfunction_NG_2::synapse0x1c30350() {
   return (neuron0x1c10010()*-0.502343);
}

double NNfunction_NG_2::synapse0x1c30390() {
   return (neuron0x1c08b60()*-0.382904);
}

double NNfunction_NG_2::synapse0x1c303d0() {
   return (neuron0x1c09530()*-0.0057868);
}

double NNfunction_NG_2::synapse0x1c30410() {
   return (neuron0x1c12da0()*0.0839996);
}

double NNfunction_NG_2::synapse0x1c30450() {
   return (neuron0x1c13770()*0.124783);
}

double NNfunction_NG_2::synapse0x1c30490() {
   return (neuron0x1c14140()*-0.217157);
}

double NNfunction_NG_2::synapse0x1c304d0() {
   return (neuron0x1c14b10()*0.121666);
}

double NNfunction_NG_2::synapse0x1c30510() {
   return (neuron0x1c154e0()*-0.51695);
}

double NNfunction_NG_2::synapse0x1c30550() {
   return (neuron0x1c15eb0()*-0.0847207);
}

double NNfunction_NG_2::synapse0x1c30590() {
   return (neuron0x1c16880()*-0.273251);
}

double NNfunction_NG_2::synapse0x1c305d0() {
   return (neuron0x1c17250()*0.093149);
}

double NNfunction_NG_2::synapse0x1c30180() {
   return (neuron0x1c0d2e0()*-0.371038);
}

double NNfunction_NG_2::synapse0x1c301c0() {
   return (neuron0x1c19e30()*-0.434697);
}

double NNfunction_NG_2::synapse0x1c30200() {
   return (neuron0x1c1a800()*-0.459619);
}

double NNfunction_NG_2::synapse0x1c30240() {
   return (neuron0x1c1b1d0()*-0.268495);
}

double NNfunction_NG_2::synapse0x1c30820() {
   return (neuron0x1c1bba0()*-0.177055);
}

double NNfunction_NG_2::synapse0x1c30860() {
   return (neuron0x1c1c570()*-0.605983);
}

double NNfunction_NG_2::synapse0x1c308a0() {
   return (neuron0x1c1cf40()*-0.667686);
}

double NNfunction_NG_2::synapse0x1c308e0() {
   return (neuron0x1c1d910()*-0.651181);
}

double NNfunction_NG_2::synapse0x1c30920() {
   return (neuron0x1c1e2e0()*0.339379);
}

double NNfunction_NG_2::synapse0x1c30960() {
   return (neuron0x1c1eec0()*-0.415227);
}

double NNfunction_NG_2::synapse0x1c309a0() {
   return (neuron0x1c1f890()*-0.550269);
}

double NNfunction_NG_2::synapse0x1c309e0() {
   return (neuron0x1c10710()*0.0786133);
}

double NNfunction_NG_2::synapse0x1c30a20() {
   return (neuron0x1c110e0()*0.125706);
}

double NNfunction_NG_2::synapse0x1c30a60() {
   return (neuron0x1c11ab0()*-0.66569);
}

double NNfunction_NG_2::synapse0x1c30aa0() {
   return (neuron0x1c240f0()*-0.255155);
}

double NNfunction_NG_2::synapse0x1c30ae0() {
   return (neuron0x1c249a0()*-0.213561);
}

double NNfunction_NG_2::synapse0x1c30b20() {
   return (neuron0x1c25370()*-0.088918);
}

double NNfunction_NG_2::synapse0x1c30b60() {
   return (neuron0x1c25d40()*-0.339367);
}

double NNfunction_NG_2::synapse0x1c01c80() {
   return (neuron0x1c2cf40()*-6.64193);
}

double NNfunction_NG_2::synapse0x1c30dc0() {
   return (neuron0x1c2d2e0()*-8.57107);
}

double NNfunction_NG_2::synapse0x1c30e00() {
   return (neuron0x1c2d780()*-6.53565);
}

double NNfunction_NG_2::synapse0x1c30e40() {
   return (neuron0x1c2e8e0()*-6.11011);
}

double NNfunction_NG_2::synapse0x1c30e80() {
   return (neuron0x1c2fa40()*-0.383055);
}

