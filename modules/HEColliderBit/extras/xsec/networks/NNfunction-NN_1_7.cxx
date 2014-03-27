#include "NNfunction-NN_1_7.h"
#include <cmath>

double NNfunction-NN_1_7::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.3217)/15.2683;
   input1 = (in1 - 2.07469)/1206.27;
   input2 = (in2 - 676.426)/600.059;
   input3 = (in3 - -42.8558)/835.974;
   input4 = (in4 - 1124.81)/987.306;
   input5 = (in5 - 908.039)/962.562;
   input6 = (in6 - 915.554)/961.335;
   input7 = (in7 - 932.19)/941.731;
   input8 = (in8 - 931.936)/977.401;
   input9 = (in9 - 917.183)/962.429;
   input10 = (in10 - 990.172)/955.225;
   input11 = (in11 - 714.355)/863.573;
   input12 = (in12 - 733.215)/874.752;
   input13 = (in13 - 503.27)/521.153;
   input14 = (in14 - 742.054)/833.038;
   input15 = (in15 - 736.496)/833.099;
   input16 = (in16 - 538.581)/571.241;
   input17 = (in17 - 764.132)/903.055;
   input18 = (in18 - 759.443)/904.412;
   input19 = (in19 - 810.715)/882.969;
   input20 = (in20 - -1.92929)/484.266;
   input21 = (in21 - -0.817557)/1156.55;
   input22 = (in22 - -2.80624)/1210.43;
   input23 = (in23 - -175.429)/566.136;
   switch(index) {
     case 0:
         return neuron0x20f7f70();
     default:
         return 0.;
   }
}

double NNfunction-NN_1_7::Value(int index, double* input) {
   input0 = (input[0] - 23.3217)/15.2683;
   input1 = (input[1] - 2.07469)/1206.27;
   input2 = (input[2] - 676.426)/600.059;
   input3 = (input[3] - -42.8558)/835.974;
   input4 = (input[4] - 1124.81)/987.306;
   input5 = (input[5] - 908.039)/962.562;
   input6 = (input[6] - 915.554)/961.335;
   input7 = (input[7] - 932.19)/941.731;
   input8 = (input[8] - 931.936)/977.401;
   input9 = (input[9] - 917.183)/962.429;
   input10 = (input[10] - 990.172)/955.225;
   input11 = (input[11] - 714.355)/863.573;
   input12 = (input[12] - 733.215)/874.752;
   input13 = (input[13] - 503.27)/521.153;
   input14 = (input[14] - 742.054)/833.038;
   input15 = (input[15] - 736.496)/833.099;
   input16 = (input[16] - 538.581)/571.241;
   input17 = (input[17] - 764.132)/903.055;
   input18 = (input[18] - 759.443)/904.412;
   input19 = (input[19] - 810.715)/882.969;
   input20 = (input[20] - -1.92929)/484.266;
   input21 = (input[21] - -0.817557)/1156.55;
   input22 = (input[22] - -2.80624)/1210.43;
   input23 = (input[23] - -175.429)/566.136;
   switch(index) {
     case 0:
         return neuron0x20f7f70();
     default:
         return 0.;
   }
}

double NNfunction-NN_1_7::neuron0x20c2fe0() {
   return input0;
}

double NNfunction-NN_1_7::neuron0x20c3290() {
   return input1;
}

double NNfunction-NN_1_7::neuron0x20c35d0() {
   return input2;
}

double NNfunction-NN_1_7::neuron0x20c3910() {
   return input3;
}

double NNfunction-NN_1_7::neuron0x20c3c50() {
   return input4;
}

double NNfunction-NN_1_7::neuron0x20c3f90() {
   return input5;
}

double NNfunction-NN_1_7::neuron0x20c42d0() {
   return input6;
}

double NNfunction-NN_1_7::neuron0x20c4610() {
   return input7;
}

double NNfunction-NN_1_7::neuron0x20c4950() {
   return input8;
}

double NNfunction-NN_1_7::neuron0x20c4c90() {
   return input9;
}

double NNfunction-NN_1_7::neuron0x20c4fd0() {
   return input10;
}

double NNfunction-NN_1_7::neuron0x20c5310() {
   return input11;
}

double NNfunction-NN_1_7::neuron0x20c5650() {
   return input12;
}

double NNfunction-NN_1_7::neuron0x20c5990() {
   return input13;
}

double NNfunction-NN_1_7::neuron0x20c5cd0() {
   return input14;
}

double NNfunction-NN_1_7::neuron0x20c6010() {
   return input15;
}

double NNfunction-NN_1_7::neuron0x20c6350() {
   return input16;
}

double NNfunction-NN_1_7::neuron0x20c68b0() {
   return input17;
}

double NNfunction-NN_1_7::neuron0x20c6bf0() {
   return input18;
}

double NNfunction-NN_1_7::neuron0x20c6f30() {
   return input19;
}

double NNfunction-NN_1_7::neuron0x20c7270() {
   return input20;
}

double NNfunction-NN_1_7::neuron0x20c75b0() {
   return input21;
}

double NNfunction-NN_1_7::neuron0x20c78f0() {
   return input22;
}

double NNfunction-NN_1_7::neuron0x20c7c30() {
   return input23;
}

double NNfunction-NN_1_7::input0x20c80a0() {
   double input = 5.6954;
   input += synapse0x20c83e0();
   input += synapse0x20c8420();
   input += synapse0x20c8460();
   input += synapse0x20c84a0();
   input += synapse0x20c84e0();
   input += synapse0x20c8520();
   input += synapse0x20c8560();
   input += synapse0x20c85a0();
   input += synapse0x20c85e0();
   input += synapse0x20c8620();
   input += synapse0x20c8660();
   input += synapse0x20c86a0();
   input += synapse0x20c86e0();
   input += synapse0x20c8720();
   input += synapse0x20c8760();
   input += synapse0x20c87a0();
   input += synapse0x20c8230();
   input += synapse0x20c8270();
   input += synapse0x1e756b0();
   input += synapse0x1e756f0();
   input += synapse0x20c87e0();
   input += synapse0x20c8820();
   input += synapse0x20c8860();
   input += synapse0x20c88a0();
   return input;
}

double NNfunction-NN_1_7::neuron0x20c80a0() {
   double input = input0x20c80a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20c88e0() {
   double input = -0.312526;
   input += synapse0x20c8c20();
   input += synapse0x20c8c60();
   input += synapse0x20c8ca0();
   input += synapse0x20c8ce0();
   input += synapse0x20c8d20();
   input += synapse0x20c8d60();
   input += synapse0x20c8da0();
   input += synapse0x20c8de0();
   input += synapse0x20c8e20();
   input += synapse0x1e75500();
   input += synapse0x1e75540();
   input += synapse0x1e75580();
   input += synapse0x1e755c0();
   input += synapse0x20c9070();
   input += synapse0x20c90b0();
   input += synapse0x20c90f0();
   input += synapse0x20c8a70();
   input += synapse0x20c8ab0();
   input += synapse0x20c9240();
   input += synapse0x20c9280();
   input += synapse0x20c92c0();
   input += synapse0x20c9300();
   input += synapse0x20c9340();
   input += synapse0x20c9380();
   return input;
}

double NNfunction-NN_1_7::neuron0x20c88e0() {
   double input = input0x20c88e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20c93c0() {
   double input = -1.53439;
   input += synapse0x20c9700();
   input += synapse0x20c9740();
   input += synapse0x20c9780();
   input += synapse0x20c97c0();
   input += synapse0x20c9800();
   input += synapse0x20c9840();
   input += synapse0x20c9880();
   input += synapse0x20c98c0();
   input += synapse0x20c9900();
   input += synapse0x20c9940();
   input += synapse0x20c9980();
   input += synapse0x20c99c0();
   input += synapse0x20c9a00();
   input += synapse0x20c9a40();
   input += synapse0x20c9a80();
   input += synapse0x20c9ac0();
   input += synapse0x20c9550();
   input += synapse0x20c9590();
   input += synapse0x1e83530();
   input += synapse0x1e83570();
   input += synapse0x20cb9f0();
   input += synapse0x20cba30();
   input += synapse0x20c2d20();
   input += synapse0x20c2d60();
   return input;
}

double NNfunction-NN_1_7::neuron0x20c93c0() {
   double input = input0x20c93c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x1e83cd0() {
   double input = -0.92501;
   input += synapse0x1e83e60();
   input += synapse0x20c8f80();
   input += synapse0x20c8fc0();
   input += synapse0x20c9000();
   input += synapse0x20c9c10();
   input += synapse0x20c9c50();
   input += synapse0x20c9c90();
   input += synapse0x20c9cd0();
   input += synapse0x20c9d10();
   input += synapse0x20c9d50();
   input += synapse0x20c9d90();
   input += synapse0x20c9dd0();
   input += synapse0x20c9e10();
   input += synapse0x20c9e50();
   input += synapse0x20c9e90();
   input += synapse0x20c9ed0();
   input += synapse0x20c2da0();
   input += synapse0x20c2de0();
   input += synapse0x20ca020();
   input += synapse0x20ca060();
   input += synapse0x20ca0a0();
   input += synapse0x20ca0e0();
   input += synapse0x20ca120();
   input += synapse0x20ca160();
   return input;
}

double NNfunction-NN_1_7::neuron0x1e83cd0() {
   double input = input0x1e83cd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20ca1a0() {
   double input = -0.694441;
   input += synapse0x20ca4e0();
   input += synapse0x20ca520();
   input += synapse0x20ca560();
   input += synapse0x20ca5a0();
   input += synapse0x20ca5e0();
   input += synapse0x20ca620();
   input += synapse0x20ca660();
   input += synapse0x20ca6a0();
   input += synapse0x20ca6e0();
   input += synapse0x20ca720();
   input += synapse0x20ca760();
   input += synapse0x20ca7a0();
   input += synapse0x20ca7e0();
   input += synapse0x20ca820();
   input += synapse0x20ca860();
   input += synapse0x20ca8a0();
   input += synapse0x20ca9f0();
   input += synapse0x20ca330();
   input += synapse0x20ca370();
   input += synapse0x20cbb30();
   input += synapse0x20cbb70();
   input += synapse0x20cbbb0();
   input += synapse0x20cbbf0();
   input += synapse0x20cbc30();
   return input;
}

double NNfunction-NN_1_7::neuron0x20ca1a0() {
   double input = input0x20ca1a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20cbc70() {
   double input = 0.932985;
   input += synapse0x20cbfb0();
   input += synapse0x20cbff0();
   input += synapse0x20cc030();
   input += synapse0x20cc070();
   input += synapse0x20cc0b0();
   input += synapse0x20cc0f0();
   input += synapse0x20cc130();
   input += synapse0x20cc170();
   input += synapse0x20cc1b0();
   input += synapse0x1e838c0();
   input += synapse0x1e83900();
   input += synapse0x1e83940();
   input += synapse0x1e83980();
   input += synapse0x1e839c0();
   input += synapse0x1e83a00();
   input += synapse0x1e83a40();
   input += synapse0x20cbe00();
   input += synapse0x20cbe40();
   input += synapse0x1e83b90();
   input += synapse0x1e83bd0();
   input += synapse0x1e83c10();
   input += synapse0x1e83c50();
   input += synapse0x1e83c90();
   input += synapse0x20cca00();
   return input;
}

double NNfunction-NN_1_7::neuron0x20cbc70() {
   double input = input0x20cbc70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20cca40() {
   double input = 0.506468;
   input += synapse0x20ccd80();
   input += synapse0x20ccdc0();
   input += synapse0x20cce00();
   input += synapse0x20cce40();
   input += synapse0x20cce80();
   input += synapse0x20ccec0();
   input += synapse0x20ccf00();
   input += synapse0x20ccf40();
   input += synapse0x20ccf80();
   input += synapse0x20ccfc0();
   input += synapse0x20cd000();
   input += synapse0x20cd040();
   input += synapse0x20cd080();
   input += synapse0x20cd0c0();
   input += synapse0x20cd100();
   input += synapse0x20cd140();
   input += synapse0x20ccbd0();
   input += synapse0x20ccc10();
   input += synapse0x20cd290();
   input += synapse0x20cd2d0();
   input += synapse0x20cd310();
   input += synapse0x20cd350();
   input += synapse0x20cd390();
   input += synapse0x20cd3d0();
   return input;
}

double NNfunction-NN_1_7::neuron0x20cca40() {
   double input = input0x20cca40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20cd410() {
   double input = 0.660906;
   input += synapse0x20cd750();
   input += synapse0x20cd790();
   input += synapse0x20cd7d0();
   input += synapse0x20cd810();
   input += synapse0x20cd850();
   input += synapse0x20cd890();
   input += synapse0x20cd8d0();
   input += synapse0x20cd910();
   input += synapse0x20cd950();
   input += synapse0x20cd990();
   input += synapse0x20cd9d0();
   input += synapse0x20cda10();
   input += synapse0x20cda50();
   input += synapse0x20cda90();
   input += synapse0x20cdad0();
   input += synapse0x20cdb10();
   input += synapse0x20cd5a0();
   input += synapse0x20cd5e0();
   input += synapse0x20cdc60();
   input += synapse0x20cdca0();
   input += synapse0x20cdce0();
   input += synapse0x20cdd20();
   input += synapse0x20cdd60();
   input += synapse0x20cdda0();
   return input;
}

double NNfunction-NN_1_7::neuron0x20cd410() {
   double input = input0x20cd410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20cdde0() {
   double input = -0.81913;
   input += synapse0x20c67a0();
   input += synapse0x20c67e0();
   input += synapse0x20c6820();
   input += synapse0x20c6860();
   input += synapse0x20ce330();
   input += synapse0x20ce370();
   input += synapse0x20ce3b0();
   input += synapse0x20ce3f0();
   input += synapse0x20ce430();
   input += synapse0x20ce470();
   input += synapse0x20ce4b0();
   input += synapse0x20ce4f0();
   input += synapse0x20ce530();
   input += synapse0x20ce570();
   input += synapse0x20ce5b0();
   input += synapse0x20ce5f0();
   input += synapse0x20cdf70();
   input += synapse0x20cdfb0();
   input += synapse0x20ce740();
   input += synapse0x20ce780();
   input += synapse0x20ce7c0();
   input += synapse0x20ce800();
   input += synapse0x20ce840();
   input += synapse0x20ce880();
   return input;
}

double NNfunction-NN_1_7::neuron0x20cdde0() {
   double input = input0x20cdde0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20ce8c0() {
   double input = 1.96427;
   input += synapse0x20cec00();
   input += synapse0x20cec40();
   input += synapse0x20cec80();
   input += synapse0x20cecc0();
   input += synapse0x20ced00();
   input += synapse0x20ced40();
   input += synapse0x20ced80();
   input += synapse0x20cedc0();
   input += synapse0x20cee00();
   input += synapse0x20cee40();
   input += synapse0x20cee80();
   input += synapse0x20ceec0();
   input += synapse0x20cef00();
   input += synapse0x20cef40();
   input += synapse0x20cef80();
   input += synapse0x20cefc0();
   input += synapse0x20cea50();
   input += synapse0x20cea90();
   input += synapse0x20cf110();
   input += synapse0x20cf150();
   input += synapse0x20cf190();
   input += synapse0x20cf1d0();
   input += synapse0x20cf210();
   input += synapse0x20cf250();
   return input;
}

double NNfunction-NN_1_7::neuron0x20ce8c0() {
   double input = input0x20ce8c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20cf290() {
   double input = 1.19695;
   input += synapse0x20cf5d0();
   input += synapse0x20cf610();
   input += synapse0x20cf650();
   input += synapse0x20cf690();
   input += synapse0x20cf6d0();
   input += synapse0x20cf710();
   input += synapse0x20cf750();
   input += synapse0x20cf790();
   input += synapse0x20cf7d0();
   input += synapse0x20cf810();
   input += synapse0x20cf850();
   input += synapse0x20cf890();
   input += synapse0x20cf8d0();
   input += synapse0x20cf910();
   input += synapse0x20cf950();
   input += synapse0x20cf990();
   input += synapse0x20cf420();
   input += synapse0x20cf460();
   input += synapse0x20cc1f0();
   input += synapse0x20cc230();
   input += synapse0x20cc270();
   input += synapse0x20cc2b0();
   input += synapse0x20cc2f0();
   input += synapse0x20cc330();
   return input;
}

double NNfunction-NN_1_7::neuron0x20cf290() {
   double input = input0x20cf290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20cc370() {
   double input = 0.587777;
   input += synapse0x20cc6b0();
   input += synapse0x20cc6f0();
   input += synapse0x20cc730();
   input += synapse0x20cc770();
   input += synapse0x20cc7b0();
   input += synapse0x20cc7f0();
   input += synapse0x20cc830();
   input += synapse0x20cc870();
   input += synapse0x20cc8b0();
   input += synapse0x20cc8f0();
   input += synapse0x20cc930();
   input += synapse0x20cc970();
   input += synapse0x20cc9b0();
   input += synapse0x20d0af0();
   input += synapse0x20d0b30();
   input += synapse0x20d0b70();
   input += synapse0x20cc500();
   input += synapse0x20cc540();
   input += synapse0x20d0cc0();
   input += synapse0x20d0d00();
   input += synapse0x20d0d40();
   input += synapse0x20d0d80();
   input += synapse0x20d0dc0();
   input += synapse0x20d0e00();
   return input;
}

double NNfunction-NN_1_7::neuron0x20cc370() {
   double input = input0x20cc370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20d0e40() {
   double input = 1.43104;
   input += synapse0x20d1180();
   input += synapse0x20d11c0();
   input += synapse0x20d1200();
   input += synapse0x20d1240();
   input += synapse0x20d1280();
   input += synapse0x20d12c0();
   input += synapse0x20d1300();
   input += synapse0x20d1340();
   input += synapse0x20d1380();
   input += synapse0x20d13c0();
   input += synapse0x20d1400();
   input += synapse0x20d1440();
   input += synapse0x20d1480();
   input += synapse0x20d14c0();
   input += synapse0x20d1500();
   input += synapse0x20d1540();
   input += synapse0x20d0fd0();
   input += synapse0x20d1010();
   input += synapse0x20d1690();
   input += synapse0x20d16d0();
   input += synapse0x20d1710();
   input += synapse0x20d1750();
   input += synapse0x20d1790();
   input += synapse0x20d17d0();
   return input;
}

double NNfunction-NN_1_7::neuron0x20d0e40() {
   double input = input0x20d0e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20d1810() {
   double input = 0.0275803;
   input += synapse0x20d1b50();
   input += synapse0x20d1b90();
   input += synapse0x20d1bd0();
   input += synapse0x20d1c10();
   input += synapse0x20d1c50();
   input += synapse0x20d1c90();
   input += synapse0x20d1cd0();
   input += synapse0x20d1d10();
   input += synapse0x20d1d50();
   input += synapse0x20d1d90();
   input += synapse0x20d1dd0();
   input += synapse0x20d1e10();
   input += synapse0x20d1e50();
   input += synapse0x20d1e90();
   input += synapse0x20d1ed0();
   input += synapse0x20d1f10();
   input += synapse0x20d19a0();
   input += synapse0x20d19e0();
   input += synapse0x20d2060();
   input += synapse0x20d20a0();
   input += synapse0x20d20e0();
   input += synapse0x20d2120();
   input += synapse0x20d2160();
   input += synapse0x20d21a0();
   return input;
}

double NNfunction-NN_1_7::neuron0x20d1810() {
   double input = input0x20d1810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20d21e0() {
   double input = 0.750629;
   input += synapse0x20d2520();
   input += synapse0x20d2560();
   input += synapse0x20d25a0();
   input += synapse0x20d25e0();
   input += synapse0x20d2620();
   input += synapse0x20d2660();
   input += synapse0x20d26a0();
   input += synapse0x20d26e0();
   input += synapse0x20d2720();
   input += synapse0x20d2760();
   input += synapse0x20d27a0();
   input += synapse0x20d27e0();
   input += synapse0x20d2820();
   input += synapse0x20d2860();
   input += synapse0x20d28a0();
   input += synapse0x20d28e0();
   input += synapse0x20d2370();
   input += synapse0x20d23b0();
   input += synapse0x20d2a30();
   input += synapse0x20d2a70();
   input += synapse0x20d2ab0();
   input += synapse0x20d2af0();
   input += synapse0x20d2b30();
   input += synapse0x20d2b70();
   return input;
}

double NNfunction-NN_1_7::neuron0x20d21e0() {
   double input = input0x20d21e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20d2bb0() {
   double input = 0.553539;
   input += synapse0x20d2ef0();
   input += synapse0x20c3170();
   input += synapse0x20c31b0();
   input += synapse0x20c34b0();
   input += synapse0x20c34f0();
   input += synapse0x20c37f0();
   input += synapse0x20c3830();
   input += synapse0x20c3b30();
   input += synapse0x20c3b70();
   input += synapse0x20c3e70();
   input += synapse0x20c3eb0();
   input += synapse0x20c41b0();
   input += synapse0x20c41f0();
   input += synapse0x20c44f0();
   input += synapse0x20c4530();
   input += synapse0x20c4830();
   input += synapse0x20c4870();
   input += synapse0x20c4b70();
   input += synapse0x20c4bb0();
   input += synapse0x20c4eb0();
   input += synapse0x20c4ef0();
   input += synapse0x20c51f0();
   input += synapse0x20c5230();
   input += synapse0x20c5530();
   return input;
}

double NNfunction-NN_1_7::neuron0x20d2bb0() {
   double input = input0x20d2bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20d49c0() {
   double input = 0.792509;
   input += synapse0x20c5570();
   input += synapse0x20c6230();
   input += synapse0x20c6270();
   input += synapse0x20d2d40();
   input += synapse0x20d2d80();
   input += synapse0x20c6570();
   input += synapse0x20c65b0();
   input += synapse0x20c6ad0();
   input += synapse0x20c6b10();
   input += synapse0x20c6e10();
   input += synapse0x20c6e50();
   input += synapse0x20c7150();
   input += synapse0x20c7190();
   input += synapse0x20c7490();
   input += synapse0x20c74d0();
   input += synapse0x20c77d0();
   input += synapse0x20c7810();
   input += synapse0x20c7b10();
   input += synapse0x20c7b50();
   input += synapse0x20c7e50();
   input += synapse0x20c7e90();
   input += synapse0x20c5870();
   input += synapse0x20c58b0();
   input += synapse0x20d4c60();
   return input;
}

double NNfunction-NN_1_7::neuron0x20d49c0() {
   double input = input0x20d49c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20d4ca0() {
   double input = 1.01733;
   input += synapse0x20d4fe0();
   input += synapse0x20d5020();
   input += synapse0x20d5060();
   input += synapse0x20d50a0();
   input += synapse0x20d50e0();
   input += synapse0x20d5120();
   input += synapse0x20d5160();
   input += synapse0x20d51a0();
   input += synapse0x20d51e0();
   input += synapse0x20d5220();
   input += synapse0x20d5260();
   input += synapse0x20d52a0();
   input += synapse0x20d52e0();
   input += synapse0x20d5320();
   input += synapse0x20d5360();
   input += synapse0x20d53a0();
   input += synapse0x20d4e30();
   input += synapse0x20d4e70();
   input += synapse0x20d54f0();
   input += synapse0x20d5530();
   input += synapse0x20d5570();
   input += synapse0x20d55b0();
   input += synapse0x20d55f0();
   input += synapse0x20d5630();
   return input;
}

double NNfunction-NN_1_7::neuron0x20d4ca0() {
   double input = input0x20d4ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20d5670() {
   double input = -0.771762;
   input += synapse0x20d59b0();
   input += synapse0x20d59f0();
   input += synapse0x20d5a30();
   input += synapse0x20d5a70();
   input += synapse0x20d5ab0();
   input += synapse0x20d5af0();
   input += synapse0x20d5b30();
   input += synapse0x20d5b70();
   input += synapse0x20d5bb0();
   input += synapse0x20d5bf0();
   input += synapse0x20d5c30();
   input += synapse0x20d5c70();
   input += synapse0x20d5cb0();
   input += synapse0x20d5cf0();
   input += synapse0x20d5d30();
   input += synapse0x20d5d70();
   input += synapse0x20d5800();
   input += synapse0x20d5840();
   input += synapse0x20d5ec0();
   input += synapse0x20d5f00();
   input += synapse0x20d5f40();
   input += synapse0x20d5f80();
   input += synapse0x20d5fc0();
   input += synapse0x20d6000();
   return input;
}

double NNfunction-NN_1_7::neuron0x20d5670() {
   double input = input0x20d5670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20d6040() {
   double input = -0.142024;
   input += synapse0x20d6380();
   input += synapse0x20d63c0();
   input += synapse0x20d6400();
   input += synapse0x20d6440();
   input += synapse0x20d6480();
   input += synapse0x20d64c0();
   input += synapse0x20d6500();
   input += synapse0x20d6540();
   input += synapse0x20d6580();
   input += synapse0x20d65c0();
   input += synapse0x20d6600();
   input += synapse0x20d6640();
   input += synapse0x20d6680();
   input += synapse0x20d66c0();
   input += synapse0x20d6700();
   input += synapse0x20d6740();
   input += synapse0x20d61d0();
   input += synapse0x20d6210();
   input += synapse0x20d6890();
   input += synapse0x20d68d0();
   input += synapse0x20d6910();
   input += synapse0x20d6950();
   input += synapse0x20d6990();
   input += synapse0x20d69d0();
   return input;
}

double NNfunction-NN_1_7::neuron0x20d6040() {
   double input = input0x20d6040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20d6a10() {
   double input = 2.79293;
   input += synapse0x20d6d50();
   input += synapse0x20d6d90();
   input += synapse0x20d6dd0();
   input += synapse0x20d6e10();
   input += synapse0x20d6e50();
   input += synapse0x20d6e90();
   input += synapse0x20d6ed0();
   input += synapse0x20d6f10();
   input += synapse0x20d6f50();
   input += synapse0x20d6f90();
   input += synapse0x20d6fd0();
   input += synapse0x20d7010();
   input += synapse0x20d7050();
   input += synapse0x20d7090();
   input += synapse0x20d70d0();
   input += synapse0x20d7110();
   input += synapse0x20d6ba0();
   input += synapse0x20d6be0();
   input += synapse0x20d7260();
   input += synapse0x20d72a0();
   input += synapse0x20d72e0();
   input += synapse0x20d7320();
   input += synapse0x20d7360();
   input += synapse0x20d73a0();
   return input;
}

double NNfunction-NN_1_7::neuron0x20d6a10() {
   double input = input0x20d6a10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20d73e0() {
   double input = 0.644239;
   input += synapse0x20d7720();
   input += synapse0x20d7760();
   input += synapse0x20d77a0();
   input += synapse0x20d77e0();
   input += synapse0x20d7820();
   input += synapse0x20d7860();
   input += synapse0x20d78a0();
   input += synapse0x20d78e0();
   input += synapse0x20d7920();
   input += synapse0x20cfae0();
   input += synapse0x20cfb20();
   input += synapse0x20cfb60();
   input += synapse0x20cfba0();
   input += synapse0x20cfbe0();
   input += synapse0x20cfc20();
   input += synapse0x20cfc60();
   input += synapse0x20d7570();
   input += synapse0x20d75b0();
   input += synapse0x20cfdb0();
   input += synapse0x20cfdf0();
   input += synapse0x20cfe30();
   input += synapse0x20cfe70();
   input += synapse0x20cfeb0();
   input += synapse0x20cfef0();
   return input;
}

double NNfunction-NN_1_7::neuron0x20d73e0() {
   double input = input0x20d73e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20cff30() {
   double input = -0.0326533;
   input += synapse0x20d0270();
   input += synapse0x20d02b0();
   input += synapse0x20d02f0();
   input += synapse0x20d0330();
   input += synapse0x20d0370();
   input += synapse0x20d03b0();
   input += synapse0x20d03f0();
   input += synapse0x20d0430();
   input += synapse0x20d0470();
   input += synapse0x20d04b0();
   input += synapse0x20d04f0();
   input += synapse0x20d0530();
   input += synapse0x20d0570();
   input += synapse0x20d05b0();
   input += synapse0x20d05f0();
   input += synapse0x20d0630();
   input += synapse0x20d00c0();
   input += synapse0x20d0100();
   input += synapse0x20d0780();
   input += synapse0x20d07c0();
   input += synapse0x20d0800();
   input += synapse0x20d0840();
   input += synapse0x20d0880();
   input += synapse0x20d08c0();
   return input;
}

double NNfunction-NN_1_7::neuron0x20cff30() {
   double input = input0x20cff30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20d0900() {
   double input = 1.64281;
   input += synapse0x20d0a90();
   input += synapse0x20d9b20();
   input += synapse0x20d9b60();
   input += synapse0x20d9ba0();
   input += synapse0x20d9be0();
   input += synapse0x20d9c20();
   input += synapse0x20d9c60();
   input += synapse0x20d9ca0();
   input += synapse0x20d9ce0();
   input += synapse0x20d9d20();
   input += synapse0x20d9d60();
   input += synapse0x20d9da0();
   input += synapse0x20d9de0();
   input += synapse0x20d9e20();
   input += synapse0x20d9e60();
   input += synapse0x20d9ea0();
   input += synapse0x20d9970();
   input += synapse0x20d99b0();
   input += synapse0x20d9ff0();
   input += synapse0x20da030();
   input += synapse0x20da070();
   input += synapse0x20da0b0();
   input += synapse0x20da0f0();
   input += synapse0x20da130();
   return input;
}

double NNfunction-NN_1_7::neuron0x20d0900() {
   double input = input0x20d0900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20da170() {
   double input = -0.403914;
   input += synapse0x20da4b0();
   input += synapse0x20da4f0();
   input += synapse0x20da530();
   input += synapse0x20da570();
   input += synapse0x20da5b0();
   input += synapse0x20da5f0();
   input += synapse0x20da630();
   input += synapse0x20da670();
   input += synapse0x20da6b0();
   input += synapse0x20da6f0();
   input += synapse0x20da730();
   input += synapse0x20da770();
   input += synapse0x20da7b0();
   input += synapse0x20da7f0();
   input += synapse0x20da830();
   input += synapse0x20da870();
   input += synapse0x20da300();
   input += synapse0x20da340();
   input += synapse0x20da9c0();
   input += synapse0x20daa00();
   input += synapse0x20daa40();
   input += synapse0x20daa80();
   input += synapse0x20daac0();
   input += synapse0x20dab00();
   return input;
}

double NNfunction-NN_1_7::neuron0x20da170() {
   double input = input0x20da170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20dab40() {
   double input = 0.310579;
   input += synapse0x20dae80();
   input += synapse0x20daec0();
   input += synapse0x20daf00();
   input += synapse0x20daf40();
   input += synapse0x20daf80();
   input += synapse0x20dafc0();
   input += synapse0x20db000();
   input += synapse0x20db040();
   input += synapse0x20db080();
   input += synapse0x20db0c0();
   input += synapse0x20db100();
   input += synapse0x20db140();
   input += synapse0x20db180();
   input += synapse0x20db1c0();
   input += synapse0x20db200();
   input += synapse0x20db240();
   input += synapse0x20dacd0();
   input += synapse0x20dad10();
   input += synapse0x20db390();
   input += synapse0x20db3d0();
   input += synapse0x20db410();
   input += synapse0x20db450();
   input += synapse0x20db490();
   input += synapse0x20db4d0();
   return input;
}

double NNfunction-NN_1_7::neuron0x20dab40() {
   double input = input0x20dab40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20db510() {
   double input = -0.284879;
   input += synapse0x20db850();
   input += synapse0x20db890();
   input += synapse0x20db8d0();
   input += synapse0x20db910();
   input += synapse0x20db950();
   input += synapse0x20db990();
   input += synapse0x20db9d0();
   input += synapse0x20dba10();
   input += synapse0x20dba50();
   input += synapse0x20dba90();
   input += synapse0x20dbad0();
   input += synapse0x20dbb10();
   input += synapse0x20dbb50();
   input += synapse0x20dbb90();
   input += synapse0x20dbbd0();
   input += synapse0x20dbc10();
   input += synapse0x20db6a0();
   input += synapse0x20db6e0();
   input += synapse0x20dbd60();
   input += synapse0x20dbda0();
   input += synapse0x20dbde0();
   input += synapse0x20dbe20();
   input += synapse0x20dbe60();
   input += synapse0x20dbea0();
   return input;
}

double NNfunction-NN_1_7::neuron0x20db510() {
   double input = input0x20db510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20dbee0() {
   double input = 1.25444;
   input += synapse0x20dc220();
   input += synapse0x20dc260();
   input += synapse0x20dc2a0();
   input += synapse0x20dc2e0();
   input += synapse0x20dc320();
   input += synapse0x20dc360();
   input += synapse0x20dc3a0();
   input += synapse0x20dc3e0();
   input += synapse0x20dc420();
   input += synapse0x20dc460();
   input += synapse0x20dc4a0();
   input += synapse0x20dc4e0();
   input += synapse0x20dc520();
   input += synapse0x20dc560();
   input += synapse0x20dc5a0();
   input += synapse0x20dc5e0();
   input += synapse0x20dc070();
   input += synapse0x20dc0b0();
   input += synapse0x20dc730();
   input += synapse0x20dc770();
   input += synapse0x20dc7b0();
   input += synapse0x20dc7f0();
   input += synapse0x20dc830();
   input += synapse0x20dc870();
   return input;
}

double NNfunction-NN_1_7::neuron0x20dbee0() {
   double input = input0x20dbee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20dc8b0() {
   double input = -0.243973;
   input += synapse0x20dcbf0();
   input += synapse0x20dcc30();
   input += synapse0x20dcc70();
   input += synapse0x20dccb0();
   input += synapse0x20dccf0();
   input += synapse0x20dcd30();
   input += synapse0x20dcd70();
   input += synapse0x20dcdb0();
   input += synapse0x20dcdf0();
   input += synapse0x20dce30();
   input += synapse0x20dce70();
   input += synapse0x20dceb0();
   input += synapse0x20dcef0();
   input += synapse0x20dcf30();
   input += synapse0x20dcf70();
   input += synapse0x20dcfb0();
   input += synapse0x20dca40();
   input += synapse0x20dca80();
   input += synapse0x20dd100();
   input += synapse0x20dd140();
   input += synapse0x20dd180();
   input += synapse0x20dd1c0();
   input += synapse0x20dd200();
   input += synapse0x20dd240();
   return input;
}

double NNfunction-NN_1_7::neuron0x20dc8b0() {
   double input = input0x20dc8b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20dd280() {
   double input = 5.04447;
   input += synapse0x20dd5c0();
   input += synapse0x20dd600();
   input += synapse0x20dd640();
   input += synapse0x20dd680();
   input += synapse0x20dd6c0();
   input += synapse0x20dd700();
   input += synapse0x20dd740();
   input += synapse0x20dd780();
   input += synapse0x20dd7c0();
   input += synapse0x20dd800();
   input += synapse0x20dd840();
   input += synapse0x20dd880();
   input += synapse0x20dd8c0();
   input += synapse0x20dd900();
   input += synapse0x20dd940();
   input += synapse0x20dd980();
   input += synapse0x20dd410();
   input += synapse0x20dd450();
   input += synapse0x20ddad0();
   input += synapse0x20ddb10();
   input += synapse0x20ddb50();
   input += synapse0x20ddb90();
   input += synapse0x20ddbd0();
   input += synapse0x20ddc10();
   return input;
}

double NNfunction-NN_1_7::neuron0x20dd280() {
   double input = input0x20dd280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20ddc50() {
   double input = 1.16422;
   input += synapse0x20ddf90();
   input += synapse0x20ddfd0();
   input += synapse0x20de010();
   input += synapse0x20de050();
   input += synapse0x20de090();
   input += synapse0x20de0d0();
   input += synapse0x20de110();
   input += synapse0x20de150();
   input += synapse0x20de190();
   input += synapse0x20de1d0();
   input += synapse0x20de210();
   input += synapse0x20de250();
   input += synapse0x20de290();
   input += synapse0x20de2d0();
   input += synapse0x20de310();
   input += synapse0x20de350();
   input += synapse0x20ddde0();
   input += synapse0x20dde20();
   input += synapse0x20de4a0();
   input += synapse0x20de4e0();
   input += synapse0x20de520();
   input += synapse0x20de560();
   input += synapse0x20de5a0();
   input += synapse0x20de5e0();
   return input;
}

double NNfunction-NN_1_7::neuron0x20ddc50() {
   double input = input0x20ddc50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20de620() {
   double input = 0.673817;
   input += synapse0x20de960();
   input += synapse0x20d2f30();
   input += synapse0x20d2f70();
   input += synapse0x20d2fb0();
   input += synapse0x20d3200();
   input += synapse0x20d3240();
   input += synapse0x20d3280();
   input += synapse0x20d34d0();
   input += synapse0x20d3510();
   input += synapse0x20d3760();
   input += synapse0x20d37a0();
   input += synapse0x20d37e0();
   input += synapse0x20d3a30();
   input += synapse0x20d3a70();
   input += synapse0x20d3cc0();
   input += synapse0x20d3d00();
   input += synapse0x20de7b0();
   input += synapse0x20de7f0();
   input += synapse0x20d3e50();
   input += synapse0x20d4360();
   input += synapse0x20d43a0();
   input += synapse0x20d43e0();
   input += synapse0x20d4630();
   input += synapse0x20d4670();
   return input;
}

double NNfunction-NN_1_7::neuron0x20de620() {
   double input = input0x20de620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20d46b0() {
   double input = -0.0686355;
   input += synapse0x20d3f20();
   input += synapse0x20d3f60();
   input += synapse0x20d3fa0();
   input += synapse0x20d3fe0();
   input += synapse0x20d4960();
   input += synapse0x20e0cb0();
   input += synapse0x20e0cf0();
   input += synapse0x20e0d30();
   input += synapse0x20e0d70();
   input += synapse0x20e0db0();
   input += synapse0x20e0df0();
   input += synapse0x20e0e30();
   input += synapse0x20e0e70();
   input += synapse0x20e0eb0();
   input += synapse0x20e0ef0();
   input += synapse0x20e0f30();
   input += synapse0x20d4840();
   input += synapse0x20d4880();
   input += synapse0x20e1080();
   input += synapse0x20e10c0();
   input += synapse0x20e1100();
   input += synapse0x20e1140();
   input += synapse0x20e1180();
   input += synapse0x20e11c0();
   return input;
}

double NNfunction-NN_1_7::neuron0x20d46b0() {
   double input = input0x20d46b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20e1200() {
   double input = -3.05215;
   input += synapse0x20e1540();
   input += synapse0x20e1580();
   input += synapse0x20e15c0();
   input += synapse0x20e1600();
   input += synapse0x20e1640();
   input += synapse0x20e1680();
   input += synapse0x20e16c0();
   input += synapse0x20e1700();
   input += synapse0x20e1740();
   input += synapse0x20e1780();
   input += synapse0x20e17c0();
   input += synapse0x20e1800();
   input += synapse0x20e1840();
   input += synapse0x20e1880();
   input += synapse0x20e18c0();
   input += synapse0x20e1900();
   input += synapse0x20e1390();
   input += synapse0x20e13d0();
   input += synapse0x20e1a50();
   input += synapse0x20e1a90();
   input += synapse0x20e1ad0();
   input += synapse0x20e1b10();
   input += synapse0x20e1b50();
   input += synapse0x20e1b90();
   return input;
}

double NNfunction-NN_1_7::neuron0x20e1200() {
   double input = input0x20e1200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20e1bd0() {
   double input = 2.01844;
   input += synapse0x20e1f10();
   input += synapse0x20e1f50();
   input += synapse0x20e1f90();
   input += synapse0x20e1fd0();
   input += synapse0x20e2010();
   input += synapse0x20e2050();
   input += synapse0x20e2090();
   input += synapse0x20e20d0();
   input += synapse0x20e2110();
   input += synapse0x20e2150();
   input += synapse0x20e2190();
   input += synapse0x20e21d0();
   input += synapse0x20e2210();
   input += synapse0x20e2250();
   input += synapse0x20e2290();
   input += synapse0x20e22d0();
   input += synapse0x20e1d60();
   input += synapse0x20e1da0();
   input += synapse0x20e2420();
   input += synapse0x20e2460();
   input += synapse0x20e24a0();
   input += synapse0x20e24e0();
   input += synapse0x20e2520();
   input += synapse0x20e2560();
   return input;
}

double NNfunction-NN_1_7::neuron0x20e1bd0() {
   double input = input0x20e1bd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20e25a0() {
   double input = 11.1227;
   input += synapse0x20e28e0();
   input += synapse0x20e2920();
   input += synapse0x20e2960();
   input += synapse0x20e29a0();
   input += synapse0x20e29e0();
   input += synapse0x20e2a20();
   input += synapse0x20e2a60();
   input += synapse0x20e2aa0();
   input += synapse0x20e2ae0();
   input += synapse0x20e2b20();
   input += synapse0x20e2b60();
   input += synapse0x20e2ba0();
   input += synapse0x20e2be0();
   input += synapse0x20e2c20();
   input += synapse0x20e2c60();
   input += synapse0x20e2ca0();
   input += synapse0x20e2730();
   input += synapse0x20e2770();
   input += synapse0x20e2df0();
   input += synapse0x20e2e30();
   input += synapse0x20e2e70();
   input += synapse0x20e2eb0();
   input += synapse0x20e2ef0();
   input += synapse0x20e2f30();
   return input;
}

double NNfunction-NN_1_7::neuron0x20e25a0() {
   double input = input0x20e25a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20e2f70() {
   double input = 0.666544;
   input += synapse0x20e32b0();
   input += synapse0x20e32f0();
   input += synapse0x20e3330();
   input += synapse0x20e3370();
   input += synapse0x20e33b0();
   input += synapse0x20e33f0();
   input += synapse0x20e3430();
   input += synapse0x20e3470();
   input += synapse0x20e34b0();
   input += synapse0x20e34f0();
   input += synapse0x20e3530();
   input += synapse0x20e3570();
   input += synapse0x20e35b0();
   input += synapse0x20e35f0();
   input += synapse0x20e3630();
   input += synapse0x20e3670();
   input += synapse0x20e3100();
   input += synapse0x20e3140();
   input += synapse0x20e37c0();
   input += synapse0x20e3800();
   input += synapse0x20e3840();
   input += synapse0x20e3880();
   input += synapse0x20e38c0();
   input += synapse0x20e3900();
   return input;
}

double NNfunction-NN_1_7::neuron0x20e2f70() {
   double input = input0x20e2f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20e3940() {
   double input = -2.05617;
   input += synapse0x20e3c80();
   input += synapse0x20e3cc0();
   input += synapse0x20e3d00();
   input += synapse0x20e3d40();
   input += synapse0x20e3d80();
   input += synapse0x20e3dc0();
   input += synapse0x20e3e00();
   input += synapse0x20e3e40();
   input += synapse0x20e3e80();
   input += synapse0x20e3ec0();
   input += synapse0x20e3f00();
   input += synapse0x20e3f40();
   input += synapse0x20e3f80();
   input += synapse0x20e3fc0();
   input += synapse0x20e4000();
   input += synapse0x20e4040();
   input += synapse0x20e3ad0();
   input += synapse0x20e3b10();
   input += synapse0x20e4190();
   input += synapse0x20e41d0();
   input += synapse0x20e4210();
   input += synapse0x20e4250();
   input += synapse0x20e4290();
   input += synapse0x20e42d0();
   return input;
}

double NNfunction-NN_1_7::neuron0x20e3940() {
   double input = input0x20e3940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20e4310() {
   double input = -0.761224;
   input += synapse0x20e4650();
   input += synapse0x20e4690();
   input += synapse0x20e46d0();
   input += synapse0x20e4710();
   input += synapse0x20e4750();
   input += synapse0x20e4790();
   input += synapse0x20e47d0();
   input += synapse0x20e4810();
   input += synapse0x20e4850();
   input += synapse0x20e4890();
   input += synapse0x20e48d0();
   input += synapse0x20e4910();
   input += synapse0x20e4950();
   input += synapse0x20e4990();
   input += synapse0x20e49d0();
   input += synapse0x20e4a10();
   input += synapse0x20e44a0();
   input += synapse0x20e44e0();
   input += synapse0x20e4b60();
   input += synapse0x20e4ba0();
   input += synapse0x20e4be0();
   input += synapse0x20e4c20();
   input += synapse0x20e4c60();
   input += synapse0x20e4ca0();
   return input;
}

double NNfunction-NN_1_7::neuron0x20e4310() {
   double input = input0x20e4310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20e4ce0() {
   double input = 1.01791;
   input += synapse0x20e5020();
   input += synapse0x20e5060();
   input += synapse0x20e50a0();
   input += synapse0x20e50e0();
   input += synapse0x20e5120();
   input += synapse0x20e5160();
   input += synapse0x20e51a0();
   input += synapse0x20e51e0();
   input += synapse0x20e5220();
   input += synapse0x20e5260();
   input += synapse0x20e52a0();
   input += synapse0x20e52e0();
   input += synapse0x20e5320();
   input += synapse0x20e5360();
   input += synapse0x20e53a0();
   input += synapse0x20e53e0();
   input += synapse0x20e4e70();
   input += synapse0x20e4eb0();
   input += synapse0x20e5530();
   input += synapse0x20e5570();
   input += synapse0x20e55b0();
   input += synapse0x20e55f0();
   input += synapse0x20e5630();
   input += synapse0x20e5670();
   return input;
}

double NNfunction-NN_1_7::neuron0x20e4ce0() {
   double input = input0x20e4ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20e56b0() {
   double input = 0.27791;
   input += synapse0x20ce120();
   input += synapse0x20ce160();
   input += synapse0x20ce1a0();
   input += synapse0x20ce1e0();
   input += synapse0x20ce220();
   input += synapse0x20ce260();
   input += synapse0x20ce2a0();
   input += synapse0x20ce2e0();
   input += synapse0x20e5e00();
   input += synapse0x20e5e40();
   input += synapse0x20e5e80();
   input += synapse0x20e5ec0();
   input += synapse0x20e5f00();
   input += synapse0x20e5f40();
   input += synapse0x20e5f80();
   input += synapse0x20e5fc0();
   input += synapse0x20e5840();
   input += synapse0x20e5880();
   input += synapse0x20e6110();
   input += synapse0x20e6150();
   input += synapse0x20e6190();
   input += synapse0x20e61d0();
   input += synapse0x20e6210();
   input += synapse0x20e6250();
   return input;
}

double NNfunction-NN_1_7::neuron0x20e56b0() {
   double input = input0x20e56b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20e6290() {
   double input = 4.83638;
   input += synapse0x20e65d0();
   input += synapse0x20e6610();
   input += synapse0x20e6650();
   input += synapse0x20e6690();
   input += synapse0x20e66d0();
   input += synapse0x20e6710();
   input += synapse0x20e6750();
   input += synapse0x20e6790();
   input += synapse0x20e67d0();
   input += synapse0x20e6810();
   input += synapse0x20e6850();
   input += synapse0x20e6890();
   input += synapse0x20e68d0();
   input += synapse0x20e6910();
   input += synapse0x20e6950();
   input += synapse0x20e6990();
   input += synapse0x20e6420();
   input += synapse0x20e6460();
   input += synapse0x20e6ae0();
   input += synapse0x20e6b20();
   input += synapse0x20e6b60();
   input += synapse0x20e6ba0();
   input += synapse0x20e6be0();
   input += synapse0x20e6c20();
   return input;
}

double NNfunction-NN_1_7::neuron0x20e6290() {
   double input = input0x20e6290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20e6c60() {
   double input = 1.67059;
   input += synapse0x20e6fa0();
   input += synapse0x20e6fe0();
   input += synapse0x20e7020();
   input += synapse0x20e7060();
   input += synapse0x20e70a0();
   input += synapse0x20e70e0();
   input += synapse0x20e7120();
   input += synapse0x20e7160();
   input += synapse0x20e71a0();
   input += synapse0x20e71e0();
   input += synapse0x20e7220();
   input += synapse0x20e7260();
   input += synapse0x20e72a0();
   input += synapse0x20e72e0();
   input += synapse0x20e7320();
   input += synapse0x20e7360();
   input += synapse0x20e6df0();
   input += synapse0x20e6e30();
   input += synapse0x20d7960();
   input += synapse0x20d79a0();
   input += synapse0x20d79e0();
   input += synapse0x20d7a20();
   input += synapse0x20d7a60();
   input += synapse0x20d7aa0();
   return input;
}

double NNfunction-NN_1_7::neuron0x20e6c60() {
   double input = input0x20e6c60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20d7ae0() {
   double input = -0.635388;
   input += synapse0x20d7e20();
   input += synapse0x20d7e60();
   input += synapse0x20d7ea0();
   input += synapse0x20d7ee0();
   input += synapse0x20d7f20();
   input += synapse0x20d7f60();
   input += synapse0x20d7fa0();
   input += synapse0x20d7fe0();
   input += synapse0x20d8020();
   input += synapse0x20d8060();
   input += synapse0x20d80a0();
   input += synapse0x20d80e0();
   input += synapse0x20d8120();
   input += synapse0x20d8160();
   input += synapse0x20d81a0();
   input += synapse0x20d81e0();
   input += synapse0x20d7c70();
   input += synapse0x20d7cb0();
   input += synapse0x20d8330();
   input += synapse0x20d8370();
   input += synapse0x20d83b0();
   input += synapse0x20d83f0();
   input += synapse0x20d8430();
   input += synapse0x20d8470();
   return input;
}

double NNfunction-NN_1_7::neuron0x20d7ae0() {
   double input = input0x20d7ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20d84b0() {
   double input = -3.88392;
   input += synapse0x20d87f0();
   input += synapse0x20d8830();
   input += synapse0x20d8870();
   input += synapse0x20d88b0();
   input += synapse0x20d88f0();
   input += synapse0x20d8930();
   input += synapse0x20d8970();
   input += synapse0x20d89b0();
   input += synapse0x20d89f0();
   input += synapse0x20d8a30();
   input += synapse0x20d8a70();
   input += synapse0x20d8ab0();
   input += synapse0x20d8af0();
   input += synapse0x20d8b30();
   input += synapse0x20d8b70();
   input += synapse0x20d8bb0();
   input += synapse0x20d8640();
   input += synapse0x20d8680();
   input += synapse0x20d8d00();
   input += synapse0x20d8d40();
   input += synapse0x20d8d80();
   input += synapse0x20d8dc0();
   input += synapse0x20d8e00();
   input += synapse0x20d8e40();
   return input;
}

double NNfunction-NN_1_7::neuron0x20d84b0() {
   double input = input0x20d84b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20d8e80() {
   double input = 4.16564;
   input += synapse0x20d91c0();
   input += synapse0x20d9200();
   input += synapse0x20d9240();
   input += synapse0x20d9280();
   input += synapse0x20d92c0();
   input += synapse0x20d9300();
   input += synapse0x20d9340();
   input += synapse0x20d9380();
   input += synapse0x20d93c0();
   input += synapse0x20d9400();
   input += synapse0x20d9440();
   input += synapse0x20d9480();
   input += synapse0x20d94c0();
   input += synapse0x20d9500();
   input += synapse0x20d9540();
   input += synapse0x20d9580();
   input += synapse0x20d9010();
   input += synapse0x20d9050();
   input += synapse0x20d96d0();
   input += synapse0x20d9710();
   input += synapse0x20d9750();
   input += synapse0x20d9790();
   input += synapse0x20d97d0();
   input += synapse0x20d9810();
   return input;
}

double NNfunction-NN_1_7::neuron0x20d8e80() {
   double input = input0x20d8e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20eb4c0() {
   double input = 0.0848962;
   input += synapse0x20eb6e0();
   input += synapse0x20eb720();
   input += synapse0x20eb760();
   input += synapse0x20eb7a0();
   input += synapse0x20eb7e0();
   input += synapse0x20eb820();
   input += synapse0x20eb860();
   input += synapse0x20eb8a0();
   input += synapse0x20eb8e0();
   input += synapse0x20eb920();
   input += synapse0x20eb960();
   input += synapse0x20eb9a0();
   input += synapse0x20eb9e0();
   input += synapse0x20eba20();
   input += synapse0x20eba60();
   input += synapse0x20ebaa0();
   input += synapse0x20d9850();
   input += synapse0x20d9890();
   input += synapse0x20ebbf0();
   input += synapse0x20ebc30();
   input += synapse0x20ebc70();
   input += synapse0x20ebcb0();
   input += synapse0x20ebcf0();
   input += synapse0x20ebd30();
   return input;
}

double NNfunction-NN_1_7::neuron0x20eb4c0() {
   double input = input0x20eb4c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20ebd70() {
   double input = 0.188203;
   input += synapse0x20ec0b0();
   input += synapse0x20ec0f0();
   input += synapse0x20ec130();
   input += synapse0x20ec170();
   input += synapse0x20ec1b0();
   input += synapse0x20ec1f0();
   input += synapse0x20ec230();
   input += synapse0x20ec270();
   input += synapse0x20ec2b0();
   input += synapse0x20ec2f0();
   input += synapse0x20ec330();
   input += synapse0x20ec370();
   input += synapse0x20ec3b0();
   input += synapse0x20ec3f0();
   input += synapse0x20ec430();
   input += synapse0x20ec470();
   input += synapse0x20ebf00();
   input += synapse0x20ebf40();
   input += synapse0x20ec5c0();
   input += synapse0x20ec600();
   input += synapse0x20ec640();
   input += synapse0x20ec680();
   input += synapse0x20ec6c0();
   input += synapse0x20ec700();
   return input;
}

double NNfunction-NN_1_7::neuron0x20ebd70() {
   double input = input0x20ebd70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20ec740() {
   double input = 4.75439;
   input += synapse0x20eca80();
   input += synapse0x20ecac0();
   input += synapse0x20ecb00();
   input += synapse0x20ecb40();
   input += synapse0x20ecb80();
   input += synapse0x20ecbc0();
   input += synapse0x20ecc00();
   input += synapse0x20ecc40();
   input += synapse0x20ecc80();
   input += synapse0x20eccc0();
   input += synapse0x20ecd00();
   input += synapse0x20ecd40();
   input += synapse0x20ecd80();
   input += synapse0x20ecdc0();
   input += synapse0x20ece00();
   input += synapse0x20ece40();
   input += synapse0x20ec8d0();
   input += synapse0x20ec910();
   input += synapse0x20ecf90();
   input += synapse0x20ecfd0();
   input += synapse0x20ed010();
   input += synapse0x20ed050();
   input += synapse0x20ed090();
   input += synapse0x20ed0d0();
   return input;
}

double NNfunction-NN_1_7::neuron0x20ec740() {
   double input = input0x20ec740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20ed110() {
   double input = -0.647027;
   input += synapse0x20ed450();
   input += synapse0x20ed490();
   input += synapse0x20ed4d0();
   input += synapse0x20ed510();
   input += synapse0x20ed550();
   input += synapse0x20ed590();
   input += synapse0x20ed5d0();
   input += synapse0x20ed610();
   input += synapse0x20ed650();
   input += synapse0x20ed690();
   input += synapse0x20ed6d0();
   input += synapse0x20ed710();
   input += synapse0x20ed750();
   input += synapse0x20ed790();
   input += synapse0x20ed7d0();
   input += synapse0x20ed810();
   input += synapse0x20ed2a0();
   input += synapse0x20ed2e0();
   input += synapse0x20ed960();
   input += synapse0x20ed9a0();
   input += synapse0x20ed9e0();
   input += synapse0x20eda20();
   input += synapse0x20eda60();
   input += synapse0x20edaa0();
   return input;
}

double NNfunction-NN_1_7::neuron0x20ed110() {
   double input = input0x20ed110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20f4310() {
   double input = 1.49336;
   input += synapse0x20c8ef0();
   input += synapse0x20c8f30();
   input += synapse0x20ca450();
   input += synapse0x20ca490();
   input += synapse0x20cbf20();
   input += synapse0x20cbf60();
   input += synapse0x20cccf0();
   input += synapse0x20ccd30();
   input += synapse0x20cd6c0();
   input += synapse0x20cd700();
   input += synapse0x20ce090();
   input += synapse0x20ce0d0();
   input += synapse0x20ceb70();
   input += synapse0x20cebb0();
   input += synapse0x20cf540();
   input += synapse0x20cf580();
   input += synapse0x20cc620();
   input += synapse0x20cc660();
   input += synapse0x20d10f0();
   input += synapse0x20d1130();
   input += synapse0x20d1ac0();
   input += synapse0x20d1b00();
   input += synapse0x20d2490();
   input += synapse0x20d24d0();
   input += synapse0x20d2e60();
   input += synapse0x20d2ea0();
   input += synapse0x20c5ef0();
   input += synapse0x20c5f30();
   input += synapse0x20d4f50();
   input += synapse0x20d4f90();
   input += synapse0x20d5920();
   input += synapse0x20d5960();
   input += synapse0x20d62f0();
   input += synapse0x20d6330();
   input += synapse0x20d6cc0();
   input += synapse0x20d6d00();
   input += synapse0x20d7690();
   input += synapse0x20d76d0();
   input += synapse0x20d01e0();
   input += synapse0x20d0220();
   input += synapse0x20d9a90();
   input += synapse0x20d9ad0();
   input += synapse0x20da420();
   input += synapse0x20da460();
   input += synapse0x20dadf0();
   input += synapse0x20dae30();
   input += synapse0x20db7c0();
   input += synapse0x20db800();
   input += synapse0x20dc190();
   input += synapse0x20dc1d0();
   return input;
}

double NNfunction-NN_1_7::neuron0x20f4310() {
   double input = input0x20f4310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20f46b0() {
   double input = 1.27116;
   input += synapse0x20de8d0();
   input += synapse0x20de910();
   input += synapse0x20d3e90();
   input += synapse0x20d3ed0();
   input += synapse0x20e14b0();
   input += synapse0x20e14f0();
   input += synapse0x20e1e80();
   input += synapse0x20e1ec0();
   input += synapse0x20e2850();
   input += synapse0x20e2890();
   input += synapse0x20e3220();
   input += synapse0x20e3260();
   input += synapse0x20e3bf0();
   input += synapse0x20e3c30();
   input += synapse0x20e45c0();
   input += synapse0x20e4600();
   input += synapse0x20e4f90();
   input += synapse0x20e4fd0();
   input += synapse0x20e5960();
   input += synapse0x20e59a0();
   input += synapse0x20e6540();
   input += synapse0x20e6580();
   input += synapse0x20e6f10();
   input += synapse0x20e6f50();
   input += synapse0x20d7d90();
   input += synapse0x20d7dd0();
   input += synapse0x20d8760();
   input += synapse0x20d87a0();
   input += synapse0x20d9130();
   input += synapse0x20d9170();
   input += synapse0x20eb650();
   input += synapse0x20eb690();
   input += synapse0x20ec020();
   input += synapse0x20ec060();
   input += synapse0x20ec9f0();
   input += synapse0x20eca30();
   input += synapse0x20ed3c0();
   input += synapse0x20ed400();
   input += synapse0x20c8350();
   input += synapse0x20c8390();
   input += synapse0x20dcb60();
   input += synapse0x20dcba0();
   input += synapse0x20edae0();
   input += synapse0x20edb20();
   input += synapse0x20edb60();
   input += synapse0x20edba0();
   input += synapse0x20f4a50();
   input += synapse0x20f4a90();
   input += synapse0x20f4ad0();
   input += synapse0x20f4b10();
   return input;
}

double NNfunction-NN_1_7::neuron0x20f46b0() {
   double input = input0x20f46b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20f4b50() {
   double input = -0.668836;
   input += synapse0x20f4e90();
   input += synapse0x20f4ed0();
   input += synapse0x20f4f10();
   input += synapse0x20f4f50();
   input += synapse0x20f4f90();
   input += synapse0x20f4fd0();
   input += synapse0x20f5010();
   input += synapse0x20f5050();
   input += synapse0x20f5090();
   input += synapse0x20f50d0();
   input += synapse0x20f5110();
   input += synapse0x20f5150();
   input += synapse0x20f5190();
   input += synapse0x20f51d0();
   input += synapse0x20f5210();
   input += synapse0x20f5250();
   input += synapse0x20f4ce0();
   input += synapse0x20f4d20();
   input += synapse0x20f53a0();
   input += synapse0x20f53e0();
   input += synapse0x20f5420();
   input += synapse0x20f5460();
   input += synapse0x20f54a0();
   input += synapse0x20f54e0();
   input += synapse0x20f5520();
   input += synapse0x20f5560();
   input += synapse0x20f55a0();
   input += synapse0x20f55e0();
   input += synapse0x20f5620();
   input += synapse0x20f5660();
   input += synapse0x20f56a0();
   input += synapse0x20f56e0();
   input += synapse0x20f5290();
   input += synapse0x20f52d0();
   input += synapse0x20f5310();
   input += synapse0x20f5350();
   input += synapse0x20f5930();
   input += synapse0x20f5970();
   input += synapse0x20f59b0();
   input += synapse0x20f59f0();
   input += synapse0x20f5a30();
   input += synapse0x20f5a70();
   input += synapse0x20f5ab0();
   input += synapse0x20f5af0();
   input += synapse0x20f5b30();
   input += synapse0x20f5b70();
   input += synapse0x20f5bb0();
   input += synapse0x20f5bf0();
   input += synapse0x20f5c30();
   input += synapse0x20f5c70();
   return input;
}

double NNfunction-NN_1_7::neuron0x20f4b50() {
   double input = input0x20f4b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20f5cb0() {
   double input = 0.160365;
   input += synapse0x20f5ff0();
   input += synapse0x20f6030();
   input += synapse0x20f6070();
   input += synapse0x20f60b0();
   input += synapse0x20f60f0();
   input += synapse0x20f6130();
   input += synapse0x20f6170();
   input += synapse0x20f61b0();
   input += synapse0x20f61f0();
   input += synapse0x20f6230();
   input += synapse0x20f6270();
   input += synapse0x20f62b0();
   input += synapse0x20f62f0();
   input += synapse0x20f6330();
   input += synapse0x20f6370();
   input += synapse0x20f63b0();
   input += synapse0x20f5e40();
   input += synapse0x20f5e80();
   input += synapse0x20f6500();
   input += synapse0x20f6540();
   input += synapse0x20f6580();
   input += synapse0x20f65c0();
   input += synapse0x20f6600();
   input += synapse0x20f6640();
   input += synapse0x20f6680();
   input += synapse0x20f66c0();
   input += synapse0x20f6700();
   input += synapse0x20f6740();
   input += synapse0x20f6780();
   input += synapse0x20f67c0();
   input += synapse0x20f6800();
   input += synapse0x20f6840();
   input += synapse0x20f63f0();
   input += synapse0x20f6430();
   input += synapse0x20f6470();
   input += synapse0x20f64b0();
   input += synapse0x20f6a90();
   input += synapse0x20f6ad0();
   input += synapse0x20f6b10();
   input += synapse0x20f6b50();
   input += synapse0x20f6b90();
   input += synapse0x20f6bd0();
   input += synapse0x20f6c10();
   input += synapse0x20f6c50();
   input += synapse0x20f6c90();
   input += synapse0x20f6cd0();
   input += synapse0x20f6d10();
   input += synapse0x20f6d50();
   input += synapse0x20f6d90();
   input += synapse0x20f6dd0();
   return input;
}

double NNfunction-NN_1_7::neuron0x20f5cb0() {
   double input = input0x20f5cb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20f6e10() {
   double input = -1.6285;
   input += synapse0x20f7150();
   input += synapse0x20f7190();
   input += synapse0x20f71d0();
   input += synapse0x20f7210();
   input += synapse0x20f7250();
   input += synapse0x20f7290();
   input += synapse0x20f72d0();
   input += synapse0x20f7310();
   input += synapse0x20f7350();
   input += synapse0x20f7390();
   input += synapse0x20f73d0();
   input += synapse0x20f7410();
   input += synapse0x20f7450();
   input += synapse0x20f7490();
   input += synapse0x20f74d0();
   input += synapse0x20f7510();
   input += synapse0x20f6fa0();
   input += synapse0x20f6fe0();
   input += synapse0x20f7660();
   input += synapse0x20f76a0();
   input += synapse0x20f76e0();
   input += synapse0x20f7720();
   input += synapse0x20f7760();
   input += synapse0x20f77a0();
   input += synapse0x20f77e0();
   input += synapse0x20f7820();
   input += synapse0x20f7860();
   input += synapse0x20f78a0();
   input += synapse0x20f78e0();
   input += synapse0x20f7920();
   input += synapse0x20f7960();
   input += synapse0x20f79a0();
   input += synapse0x20f7550();
   input += synapse0x20f7590();
   input += synapse0x20f75d0();
   input += synapse0x20f7610();
   input += synapse0x20f7bf0();
   input += synapse0x20f7c30();
   input += synapse0x20f7c70();
   input += synapse0x20f7cb0();
   input += synapse0x20f7cf0();
   input += synapse0x20f7d30();
   input += synapse0x20f7d70();
   input += synapse0x20f7db0();
   input += synapse0x20f7df0();
   input += synapse0x20f7e30();
   input += synapse0x20f7e70();
   input += synapse0x20f7eb0();
   input += synapse0x20f7ef0();
   input += synapse0x20f7f30();
   return input;
}

double NNfunction-NN_1_7::neuron0x20f6e10() {
   double input = input0x20f6e10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_7::input0x20f7f70() {
   double input = 1.8017;
   input += synapse0x20f8190();
   input += synapse0x20f81d0();
   input += synapse0x20f8210();
   input += synapse0x20f8250();
   input += synapse0x20f8290();
   return input;
}

double NNfunction-NN_1_7::neuron0x20f7f70() {
   double input = input0x20f7f70();
   return (input * 1)+0;
}

double NNfunction-NN_1_7::synapse0x20c83e0() {
   return (neuron0x20c2fe0()*-0.110681);
}

double NNfunction-NN_1_7::synapse0x20c8420() {
   return (neuron0x20c3290()*0.00896076);
}

double NNfunction-NN_1_7::synapse0x20c8460() {
   return (neuron0x20c35d0()*4.73745);
}

double NNfunction-NN_1_7::synapse0x20c84a0() {
   return (neuron0x20c3910()*0.00169169);
}

double NNfunction-NN_1_7::synapse0x20c84e0() {
   return (neuron0x20c3c50()*0.00918475);
}

double NNfunction-NN_1_7::synapse0x20c8520() {
   return (neuron0x20c3f90()*-0.00265536);
}

double NNfunction-NN_1_7::synapse0x20c8560() {
   return (neuron0x20c42d0()*0.0171444);
}

double NNfunction-NN_1_7::synapse0x20c85a0() {
   return (neuron0x20c4610()*-0.0433999);
}

double NNfunction-NN_1_7::synapse0x20c85e0() {
   return (neuron0x20c4950()*-0.00829848);
}

double NNfunction-NN_1_7::synapse0x20c8620() {
   return (neuron0x20c4c90()*0.00574964);
}

double NNfunction-NN_1_7::synapse0x20c8660() {
   return (neuron0x20c4fd0()*-0.00592355);
}

double NNfunction-NN_1_7::synapse0x20c86a0() {
   return (neuron0x20c5310()*-0.119268);
}

double NNfunction-NN_1_7::synapse0x20c86e0() {
   return (neuron0x20c5650()*0.0242741);
}

double NNfunction-NN_1_7::synapse0x20c8720() {
   return (neuron0x20c5990()*0.0213166);
}

double NNfunction-NN_1_7::synapse0x20c8760() {
   return (neuron0x20c5cd0()*0.0170235);
}

double NNfunction-NN_1_7::synapse0x20c87a0() {
   return (neuron0x20c6010()*0.00952562);
}

double NNfunction-NN_1_7::synapse0x20c8230() {
   return (neuron0x20c6350()*0.0799359);
}

double NNfunction-NN_1_7::synapse0x20c8270() {
   return (neuron0x20c68b0()*-0.0255764);
}

double NNfunction-NN_1_7::synapse0x1e756b0() {
   return (neuron0x20c6bf0()*-0.0150175);
}

double NNfunction-NN_1_7::synapse0x1e756f0() {
   return (neuron0x20c6f30()*0.0129752);
}

double NNfunction-NN_1_7::synapse0x20c87e0() {
   return (neuron0x20c7270()*-0.00777677);
}

double NNfunction-NN_1_7::synapse0x20c8820() {
   return (neuron0x20c75b0()*0.0246625);
}

double NNfunction-NN_1_7::synapse0x20c8860() {
   return (neuron0x20c78f0()*0.0175708);
}

double NNfunction-NN_1_7::synapse0x20c88a0() {
   return (neuron0x20c7c30()*-4.27283);
}

double NNfunction-NN_1_7::synapse0x20c8c20() {
   return (neuron0x20c2fe0()*-0.0295599);
}

double NNfunction-NN_1_7::synapse0x20c8c60() {
   return (neuron0x20c3290()*-10.4422);
}

double NNfunction-NN_1_7::synapse0x20c8ca0() {
   return (neuron0x20c35d0()*0.464391);
}

double NNfunction-NN_1_7::synapse0x20c8ce0() {
   return (neuron0x20c3910()*0.0266967);
}

double NNfunction-NN_1_7::synapse0x20c8d20() {
   return (neuron0x20c3c50()*-0.0165432);
}

double NNfunction-NN_1_7::synapse0x20c8d60() {
   return (neuron0x20c3f90()*-0.0287365);
}

double NNfunction-NN_1_7::synapse0x20c8da0() {
   return (neuron0x20c42d0()*0.00699036);
}

double NNfunction-NN_1_7::synapse0x20c8de0() {
   return (neuron0x20c4610()*-0.00256259);
}

double NNfunction-NN_1_7::synapse0x20c8e20() {
   return (neuron0x20c4950()*-0.0124356);
}

double NNfunction-NN_1_7::synapse0x1e75500() {
   return (neuron0x20c4c90()*-0.0362193);
}

double NNfunction-NN_1_7::synapse0x1e75540() {
   return (neuron0x20c4fd0()*-0.0069666);
}

double NNfunction-NN_1_7::synapse0x1e75580() {
   return (neuron0x20c5310()*-0.0951027);
}

double NNfunction-NN_1_7::synapse0x1e755c0() {
   return (neuron0x20c5650()*-0.00177121);
}

double NNfunction-NN_1_7::synapse0x20c9070() {
   return (neuron0x20c5990()*0.00477318);
}

double NNfunction-NN_1_7::synapse0x20c90b0() {
   return (neuron0x20c5cd0()*-0.00513584);
}

double NNfunction-NN_1_7::synapse0x20c90f0() {
   return (neuron0x20c6010()*-0.0127964);
}

double NNfunction-NN_1_7::synapse0x20c8a70() {
   return (neuron0x20c6350()*-0.0454043);
}

double NNfunction-NN_1_7::synapse0x20c8ab0() {
   return (neuron0x20c68b0()*-0.00679335);
}

double NNfunction-NN_1_7::synapse0x20c9240() {
   return (neuron0x20c6bf0()*-0.00574643);
}

double NNfunction-NN_1_7::synapse0x20c9280() {
   return (neuron0x20c6f30()*-0.00511902);
}

double NNfunction-NN_1_7::synapse0x20c92c0() {
   return (neuron0x20c7270()*0.00220742);
}

double NNfunction-NN_1_7::synapse0x20c9300() {
   return (neuron0x20c75b0()*-0.0026582);
}

double NNfunction-NN_1_7::synapse0x20c9340() {
   return (neuron0x20c78f0()*0.00427992);
}

double NNfunction-NN_1_7::synapse0x20c9380() {
   return (neuron0x20c7c30()*-0.0303369);
}

double NNfunction-NN_1_7::synapse0x20c9700() {
   return (neuron0x20c2fe0()*-0.586186);
}

double NNfunction-NN_1_7::synapse0x20c9740() {
   return (neuron0x20c3290()*0.120161);
}

double NNfunction-NN_1_7::synapse0x20c9780() {
   return (neuron0x20c35d0()*0.516013);
}

double NNfunction-NN_1_7::synapse0x20c97c0() {
   return (neuron0x20c3910()*0.168616);
}

double NNfunction-NN_1_7::synapse0x20c9800() {
   return (neuron0x20c3c50()*-0.513433);
}

double NNfunction-NN_1_7::synapse0x20c9840() {
   return (neuron0x20c3f90()*-0.427594);
}

double NNfunction-NN_1_7::synapse0x20c9880() {
   return (neuron0x20c42d0()*0.024574);
}

double NNfunction-NN_1_7::synapse0x20c98c0() {
   return (neuron0x20c4610()*0.460335);
}

double NNfunction-NN_1_7::synapse0x20c9900() {
   return (neuron0x20c4950()*-0.000528141);
}

double NNfunction-NN_1_7::synapse0x20c9940() {
   return (neuron0x20c4c90()*-0.190262);
}

double NNfunction-NN_1_7::synapse0x20c9980() {
   return (neuron0x20c4fd0()*0.441194);
}

double NNfunction-NN_1_7::synapse0x20c99c0() {
   return (neuron0x20c5310()*-0.41364);
}

double NNfunction-NN_1_7::synapse0x20c9a00() {
   return (neuron0x20c5650()*-0.938853);
}

double NNfunction-NN_1_7::synapse0x20c9a40() {
   return (neuron0x20c5990()*-1.83709);
}

double NNfunction-NN_1_7::synapse0x20c9a80() {
   return (neuron0x20c5cd0()*-0.944639);
}

double NNfunction-NN_1_7::synapse0x20c9ac0() {
   return (neuron0x20c6010()*-0.372273);
}

double NNfunction-NN_1_7::synapse0x20c9550() {
   return (neuron0x20c6350()*0.411684);
}

double NNfunction-NN_1_7::synapse0x20c9590() {
   return (neuron0x20c68b0()*0.445365);
}

double NNfunction-NN_1_7::synapse0x1e83530() {
   return (neuron0x20c6bf0()*0.170595);
}

double NNfunction-NN_1_7::synapse0x1e83570() {
   return (neuron0x20c6f30()*-0.350939);
}

double NNfunction-NN_1_7::synapse0x20cb9f0() {
   return (neuron0x20c7270()*0.198591);
}

double NNfunction-NN_1_7::synapse0x20cba30() {
   return (neuron0x20c75b0()*-0.338468);
}

double NNfunction-NN_1_7::synapse0x20c2d20() {
   return (neuron0x20c78f0()*-0.0743415);
}

double NNfunction-NN_1_7::synapse0x20c2d60() {
   return (neuron0x20c7c30()*1.66169);
}

double NNfunction-NN_1_7::synapse0x1e83e60() {
   return (neuron0x20c2fe0()*0.08747);
}

double NNfunction-NN_1_7::synapse0x20c8f80() {
   return (neuron0x20c3290()*-0.00722255);
}

double NNfunction-NN_1_7::synapse0x20c8fc0() {
   return (neuron0x20c35d0()*-0.0700452);
}

double NNfunction-NN_1_7::synapse0x20c9000() {
   return (neuron0x20c3910()*-0.0252463);
}

double NNfunction-NN_1_7::synapse0x20c9c10() {
   return (neuron0x20c3c50()*0.00887977);
}

double NNfunction-NN_1_7::synapse0x20c9c50() {
   return (neuron0x20c3f90()*0.070654);
}

double NNfunction-NN_1_7::synapse0x20c9c90() {
   return (neuron0x20c42d0()*0.0045151);
}

double NNfunction-NN_1_7::synapse0x20c9cd0() {
   return (neuron0x20c4610()*-0.108074);
}

double NNfunction-NN_1_7::synapse0x20c9d10() {
   return (neuron0x20c4950()*0.000229761);
}

double NNfunction-NN_1_7::synapse0x20c9d50() {
   return (neuron0x20c4c90()*-0.0380275);
}

double NNfunction-NN_1_7::synapse0x20c9d90() {
   return (neuron0x20c4fd0()*0.0580289);
}

double NNfunction-NN_1_7::synapse0x20c9dd0() {
   return (neuron0x20c5310()*-0.0992496);
}

double NNfunction-NN_1_7::synapse0x20c9e10() {
   return (neuron0x20c5650()*0.0577791);
}

double NNfunction-NN_1_7::synapse0x20c9e50() {
   return (neuron0x20c5990()*-0.101206);
}

double NNfunction-NN_1_7::synapse0x20c9e90() {
   return (neuron0x20c5cd0()*0.00550624);
}

double NNfunction-NN_1_7::synapse0x20c9ed0() {
   return (neuron0x20c6010()*0.0249614);
}

double NNfunction-NN_1_7::synapse0x20c2da0() {
   return (neuron0x20c6350()*0.0263301);
}

double NNfunction-NN_1_7::synapse0x20c2de0() {
   return (neuron0x20c68b0()*-0.0751095);
}

double NNfunction-NN_1_7::synapse0x20ca020() {
   return (neuron0x20c6bf0()*-0.00855822);
}

double NNfunction-NN_1_7::synapse0x20ca060() {
   return (neuron0x20c6f30()*0.0482213);
}

double NNfunction-NN_1_7::synapse0x20ca0a0() {
   return (neuron0x20c7270()*0.0519161);
}

double NNfunction-NN_1_7::synapse0x20ca0e0() {
   return (neuron0x20c75b0()*0.0421437);
}

double NNfunction-NN_1_7::synapse0x20ca120() {
   return (neuron0x20c78f0()*0.00846961);
}

double NNfunction-NN_1_7::synapse0x20ca160() {
   return (neuron0x20c7c30()*3.02289);
}

double NNfunction-NN_1_7::synapse0x20ca4e0() {
   return (neuron0x20c2fe0()*0.209719);
}

double NNfunction-NN_1_7::synapse0x20ca520() {
   return (neuron0x20c3290()*0.0272472);
}

double NNfunction-NN_1_7::synapse0x20ca560() {
   return (neuron0x20c35d0()*1.02711);
}

double NNfunction-NN_1_7::synapse0x20ca5a0() {
   return (neuron0x20c3910()*0.0480604);
}

double NNfunction-NN_1_7::synapse0x20ca5e0() {
   return (neuron0x20c3c50()*-0.0760705);
}

double NNfunction-NN_1_7::synapse0x20ca620() {
   return (neuron0x20c3f90()*0.0765561);
}

double NNfunction-NN_1_7::synapse0x20ca660() {
   return (neuron0x20c42d0()*0.117565);
}

double NNfunction-NN_1_7::synapse0x20ca6a0() {
   return (neuron0x20c4610()*-0.0630308);
}

double NNfunction-NN_1_7::synapse0x20ca6e0() {
   return (neuron0x20c4950()*-0.0708247);
}

double NNfunction-NN_1_7::synapse0x20ca720() {
   return (neuron0x20c4c90()*-0.133379);
}

double NNfunction-NN_1_7::synapse0x20ca760() {
   return (neuron0x20c4fd0()*-0.109823);
}

double NNfunction-NN_1_7::synapse0x20ca7a0() {
   return (neuron0x20c5310()*-1.28191);
}

double NNfunction-NN_1_7::synapse0x20ca7e0() {
   return (neuron0x20c5650()*-0.479478);
}

double NNfunction-NN_1_7::synapse0x20ca820() {
   return (neuron0x20c5990()*-0.0816089);
}

double NNfunction-NN_1_7::synapse0x20ca860() {
   return (neuron0x20c5cd0()*-0.0792518);
}

double NNfunction-NN_1_7::synapse0x20ca8a0() {
   return (neuron0x20c6010()*0.0347973);
}

double NNfunction-NN_1_7::synapse0x20ca9f0() {
   return (neuron0x20c6350()*-0.207521);
}

double NNfunction-NN_1_7::synapse0x20ca330() {
   return (neuron0x20c68b0()*-0.206813);
}

double NNfunction-NN_1_7::synapse0x20ca370() {
   return (neuron0x20c6bf0()*0.160229);
}

double NNfunction-NN_1_7::synapse0x20cbb30() {
   return (neuron0x20c6f30()*-0.161467);
}

double NNfunction-NN_1_7::synapse0x20cbb70() {
   return (neuron0x20c7270()*-0.0610578);
}

double NNfunction-NN_1_7::synapse0x20cbbb0() {
   return (neuron0x20c75b0()*-0.0997076);
}

double NNfunction-NN_1_7::synapse0x20cbbf0() {
   return (neuron0x20c78f0()*0.00181612);
}

double NNfunction-NN_1_7::synapse0x20cbc30() {
   return (neuron0x20c7c30()*-2.463);
}

double NNfunction-NN_1_7::synapse0x20cbfb0() {
   return (neuron0x20c2fe0()*-0.0156547);
}

double NNfunction-NN_1_7::synapse0x20cbff0() {
   return (neuron0x20c3290()*-0.104495);
}

double NNfunction-NN_1_7::synapse0x20cc030() {
   return (neuron0x20c35d0()*1.9586);
}

double NNfunction-NN_1_7::synapse0x20cc070() {
   return (neuron0x20c3910()*0.0465767);
}

double NNfunction-NN_1_7::synapse0x20cc0b0() {
   return (neuron0x20c3c50()*-0.06925);
}

double NNfunction-NN_1_7::synapse0x20cc0f0() {
   return (neuron0x20c3f90()*0.0471169);
}

double NNfunction-NN_1_7::synapse0x20cc130() {
   return (neuron0x20c42d0()*0.00151356);
}

double NNfunction-NN_1_7::synapse0x20cc170() {
   return (neuron0x20c4610()*0.0398864);
}

double NNfunction-NN_1_7::synapse0x20cc1b0() {
   return (neuron0x20c4950()*-6.75807e-06);
}

double NNfunction-NN_1_7::synapse0x1e838c0() {
   return (neuron0x20c4c90()*0.00725495);
}

double NNfunction-NN_1_7::synapse0x1e83900() {
   return (neuron0x20c4fd0()*-0.0287749);
}

double NNfunction-NN_1_7::synapse0x1e83940() {
   return (neuron0x20c5310()*0.122734);
}

double NNfunction-NN_1_7::synapse0x1e83980() {
   return (neuron0x20c5650()*-0.141773);
}

double NNfunction-NN_1_7::synapse0x1e839c0() {
   return (neuron0x20c5990()*-0.0156175);
}

double NNfunction-NN_1_7::synapse0x1e83a00() {
   return (neuron0x20c5cd0()*0.0759947);
}

double NNfunction-NN_1_7::synapse0x1e83a40() {
   return (neuron0x20c6010()*-0.014997);
}

double NNfunction-NN_1_7::synapse0x20cbe00() {
   return (neuron0x20c6350()*0.0197041);
}

double NNfunction-NN_1_7::synapse0x20cbe40() {
   return (neuron0x20c68b0()*0.0288871);
}

double NNfunction-NN_1_7::synapse0x1e83b90() {
   return (neuron0x20c6bf0()*-0.0318658);
}

double NNfunction-NN_1_7::synapse0x1e83bd0() {
   return (neuron0x20c6f30()*-0.0678858);
}

double NNfunction-NN_1_7::synapse0x1e83c10() {
   return (neuron0x20c7270()*-0.0627684);
}

double NNfunction-NN_1_7::synapse0x1e83c50() {
   return (neuron0x20c75b0()*-0.0133337);
}

double NNfunction-NN_1_7::synapse0x1e83c90() {
   return (neuron0x20c78f0()*-0.0570518);
}

double NNfunction-NN_1_7::synapse0x20cca00() {
   return (neuron0x20c7c30()*0.0686459);
}

double NNfunction-NN_1_7::synapse0x20ccd80() {
   return (neuron0x20c2fe0()*0.690966);
}

double NNfunction-NN_1_7::synapse0x20ccdc0() {
   return (neuron0x20c3290()*0.01869);
}

double NNfunction-NN_1_7::synapse0x20cce00() {
   return (neuron0x20c35d0()*-1.12168);
}

double NNfunction-NN_1_7::synapse0x20cce40() {
   return (neuron0x20c3910()*0.457733);
}

double NNfunction-NN_1_7::synapse0x20cce80() {
   return (neuron0x20c3c50()*-0.223862);
}

double NNfunction-NN_1_7::synapse0x20ccec0() {
   return (neuron0x20c3f90()*-0.394027);
}

double NNfunction-NN_1_7::synapse0x20ccf00() {
   return (neuron0x20c42d0()*-0.227312);
}

double NNfunction-NN_1_7::synapse0x20ccf40() {
   return (neuron0x20c4610()*-0.137605);
}

double NNfunction-NN_1_7::synapse0x20ccf80() {
   return (neuron0x20c4950()*0.0365348);
}

double NNfunction-NN_1_7::synapse0x20ccfc0() {
   return (neuron0x20c4c90()*-0.0253461);
}

double NNfunction-NN_1_7::synapse0x20cd000() {
   return (neuron0x20c4fd0()*0.318342);
}

double NNfunction-NN_1_7::synapse0x20cd040() {
   return (neuron0x20c5310()*1.34768);
}

double NNfunction-NN_1_7::synapse0x20cd080() {
   return (neuron0x20c5650()*0.247656);
}

double NNfunction-NN_1_7::synapse0x20cd0c0() {
   return (neuron0x20c5990()*-0.041683);
}

double NNfunction-NN_1_7::synapse0x20cd100() {
   return (neuron0x20c5cd0()*0.0995914);
}

double NNfunction-NN_1_7::synapse0x20cd140() {
   return (neuron0x20c6010()*-0.404745);
}

double NNfunction-NN_1_7::synapse0x20ccbd0() {
   return (neuron0x20c6350()*0.580412);
}

double NNfunction-NN_1_7::synapse0x20ccc10() {
   return (neuron0x20c68b0()*0.706564);
}

double NNfunction-NN_1_7::synapse0x20cd290() {
   return (neuron0x20c6bf0()*0.471616);
}

double NNfunction-NN_1_7::synapse0x20cd2d0() {
   return (neuron0x20c6f30()*-0.216185);
}

double NNfunction-NN_1_7::synapse0x20cd310() {
   return (neuron0x20c7270()*-0.257698);
}

double NNfunction-NN_1_7::synapse0x20cd350() {
   return (neuron0x20c75b0()*-0.0373488);
}

double NNfunction-NN_1_7::synapse0x20cd390() {
   return (neuron0x20c78f0()*-0.228137);
}

double NNfunction-NN_1_7::synapse0x20cd3d0() {
   return (neuron0x20c7c30()*0.596906);
}

double NNfunction-NN_1_7::synapse0x20cd750() {
   return (neuron0x20c2fe0()*0.231399);
}

double NNfunction-NN_1_7::synapse0x20cd790() {
   return (neuron0x20c3290()*0.155791);
}

double NNfunction-NN_1_7::synapse0x20cd7d0() {
   return (neuron0x20c35d0()*-0.14208);
}

double NNfunction-NN_1_7::synapse0x20cd810() {
   return (neuron0x20c3910()*-0.26659);
}

double NNfunction-NN_1_7::synapse0x20cd850() {
   return (neuron0x20c3c50()*0.286032);
}

double NNfunction-NN_1_7::synapse0x20cd890() {
   return (neuron0x20c3f90()*-0.10435);
}

double NNfunction-NN_1_7::synapse0x20cd8d0() {
   return (neuron0x20c42d0()*0.0398041);
}

double NNfunction-NN_1_7::synapse0x20cd910() {
   return (neuron0x20c4610()*-0.203483);
}

double NNfunction-NN_1_7::synapse0x20cd950() {
   return (neuron0x20c4950()*0.228919);
}

double NNfunction-NN_1_7::synapse0x20cd990() {
   return (neuron0x20c4c90()*-0.130873);
}

double NNfunction-NN_1_7::synapse0x20cd9d0() {
   return (neuron0x20c4fd0()*-0.211504);
}

double NNfunction-NN_1_7::synapse0x20cda10() {
   return (neuron0x20c5310()*0.111305);
}

double NNfunction-NN_1_7::synapse0x20cda50() {
   return (neuron0x20c5650()*-0.263731);
}

double NNfunction-NN_1_7::synapse0x20cda90() {
   return (neuron0x20c5990()*-0.621009);
}

double NNfunction-NN_1_7::synapse0x20cdad0() {
   return (neuron0x20c5cd0()*0.00464655);
}

double NNfunction-NN_1_7::synapse0x20cdb10() {
   return (neuron0x20c6010()*0.0985756);
}

double NNfunction-NN_1_7::synapse0x20cd5a0() {
   return (neuron0x20c6350()*0.126485);
}

double NNfunction-NN_1_7::synapse0x20cd5e0() {
   return (neuron0x20c68b0()*0.320181);
}

double NNfunction-NN_1_7::synapse0x20cdc60() {
   return (neuron0x20c6bf0()*0.192763);
}

double NNfunction-NN_1_7::synapse0x20cdca0() {
   return (neuron0x20c6f30()*-0.114589);
}

double NNfunction-NN_1_7::synapse0x20cdce0() {
   return (neuron0x20c7270()*0.0729233);
}

double NNfunction-NN_1_7::synapse0x20cdd20() {
   return (neuron0x20c75b0()*-0.0377916);
}

double NNfunction-NN_1_7::synapse0x20cdd60() {
   return (neuron0x20c78f0()*0.241875);
}

double NNfunction-NN_1_7::synapse0x20cdda0() {
   return (neuron0x20c7c30()*-0.222058);
}

double NNfunction-NN_1_7::synapse0x20c67a0() {
   return (neuron0x20c2fe0()*0.133047);
}

double NNfunction-NN_1_7::synapse0x20c67e0() {
   return (neuron0x20c3290()*-0.028714);
}

double NNfunction-NN_1_7::synapse0x20c6820() {
   return (neuron0x20c35d0()*-0.0274365);
}

double NNfunction-NN_1_7::synapse0x20c6860() {
   return (neuron0x20c3910()*-0.0521394);
}

double NNfunction-NN_1_7::synapse0x20ce330() {
   return (neuron0x20c3c50()*-0.0314871);
}

double NNfunction-NN_1_7::synapse0x20ce370() {
   return (neuron0x20c3f90()*-0.0431958);
}

double NNfunction-NN_1_7::synapse0x20ce3b0() {
   return (neuron0x20c42d0()*-0.0119509);
}

double NNfunction-NN_1_7::synapse0x20ce3f0() {
   return (neuron0x20c4610()*-0.105884);
}

double NNfunction-NN_1_7::synapse0x20ce430() {
   return (neuron0x20c4950()*0.019001);
}

double NNfunction-NN_1_7::synapse0x20ce470() {
   return (neuron0x20c4c90()*0.0879887);
}

double NNfunction-NN_1_7::synapse0x20ce4b0() {
   return (neuron0x20c4fd0()*0.0182689);
}

double NNfunction-NN_1_7::synapse0x20ce4f0() {
   return (neuron0x20c5310()*-0.0284516);
}

double NNfunction-NN_1_7::synapse0x20ce530() {
   return (neuron0x20c5650()*-0.0531674);
}

double NNfunction-NN_1_7::synapse0x20ce570() {
   return (neuron0x20c5990()*0.115633);
}

double NNfunction-NN_1_7::synapse0x20ce5b0() {
   return (neuron0x20c5cd0()*-0.00857379);
}

double NNfunction-NN_1_7::synapse0x20ce5f0() {
   return (neuron0x20c6010()*0.0351251);
}

double NNfunction-NN_1_7::synapse0x20cdf70() {
   return (neuron0x20c6350()*-0.0506589);
}

double NNfunction-NN_1_7::synapse0x20cdfb0() {
   return (neuron0x20c68b0()*0.2137);
}

double NNfunction-NN_1_7::synapse0x20ce740() {
   return (neuron0x20c6bf0()*0.00448622);
}

double NNfunction-NN_1_7::synapse0x20ce780() {
   return (neuron0x20c6f30()*-0.00876674);
}

double NNfunction-NN_1_7::synapse0x20ce7c0() {
   return (neuron0x20c7270()*0.0050838);
}

double NNfunction-NN_1_7::synapse0x20ce800() {
   return (neuron0x20c75b0()*-0.059915);
}

double NNfunction-NN_1_7::synapse0x20ce840() {
   return (neuron0x20c78f0()*-0.0289584);
}

double NNfunction-NN_1_7::synapse0x20ce880() {
   return (neuron0x20c7c30()*2.10265);
}

double NNfunction-NN_1_7::synapse0x20cec00() {
   return (neuron0x20c2fe0()*-0.159798);
}

double NNfunction-NN_1_7::synapse0x20cec40() {
   return (neuron0x20c3290()*-0.139086);
}

double NNfunction-NN_1_7::synapse0x20cec80() {
   return (neuron0x20c35d0()*0.161278);
}

double NNfunction-NN_1_7::synapse0x20cecc0() {
   return (neuron0x20c3910()*-0.455498);
}

double NNfunction-NN_1_7::synapse0x20ced00() {
   return (neuron0x20c3c50()*-0.204979);
}

double NNfunction-NN_1_7::synapse0x20ced40() {
   return (neuron0x20c3f90()*-0.0334143);
}

double NNfunction-NN_1_7::synapse0x20ced80() {
   return (neuron0x20c42d0()*0.311816);
}

double NNfunction-NN_1_7::synapse0x20cedc0() {
   return (neuron0x20c4610()*-0.0773598);
}

double NNfunction-NN_1_7::synapse0x20cee00() {
   return (neuron0x20c4950()*0.4864);
}

double NNfunction-NN_1_7::synapse0x20cee40() {
   return (neuron0x20c4c90()*0.0922454);
}

double NNfunction-NN_1_7::synapse0x20cee80() {
   return (neuron0x20c4fd0()*0.196214);
}

double NNfunction-NN_1_7::synapse0x20ceec0() {
   return (neuron0x20c5310()*-0.507724);
}

double NNfunction-NN_1_7::synapse0x20cef00() {
   return (neuron0x20c5650()*0.585974);
}

double NNfunction-NN_1_7::synapse0x20cef40() {
   return (neuron0x20c5990()*0.836148);
}

double NNfunction-NN_1_7::synapse0x20cef80() {
   return (neuron0x20c5cd0()*0.35454);
}

double NNfunction-NN_1_7::synapse0x20cefc0() {
   return (neuron0x20c6010()*-3.46401e-05);
}

double NNfunction-NN_1_7::synapse0x20cea50() {
   return (neuron0x20c6350()*-0.480956);
}

double NNfunction-NN_1_7::synapse0x20cea90() {
   return (neuron0x20c68b0()*-0.825402);
}

double NNfunction-NN_1_7::synapse0x20cf110() {
   return (neuron0x20c6bf0()*-0.0175819);
}

double NNfunction-NN_1_7::synapse0x20cf150() {
   return (neuron0x20c6f30()*0.484101);
}

double NNfunction-NN_1_7::synapse0x20cf190() {
   return (neuron0x20c7270()*-0.220451);
}

double NNfunction-NN_1_7::synapse0x20cf1d0() {
   return (neuron0x20c75b0()*0.109035);
}

double NNfunction-NN_1_7::synapse0x20cf210() {
   return (neuron0x20c78f0()*0.115512);
}

double NNfunction-NN_1_7::synapse0x20cf250() {
   return (neuron0x20c7c30()*-1.61849);
}

double NNfunction-NN_1_7::synapse0x20cf5d0() {
   return (neuron0x20c2fe0()*-0.0472754);
}

double NNfunction-NN_1_7::synapse0x20cf610() {
   return (neuron0x20c3290()*0.109885);
}

double NNfunction-NN_1_7::synapse0x20cf650() {
   return (neuron0x20c35d0()*1.60548);
}

double NNfunction-NN_1_7::synapse0x20cf690() {
   return (neuron0x20c3910()*0.0960336);
}

double NNfunction-NN_1_7::synapse0x20cf6d0() {
   return (neuron0x20c3c50()*0.266142);
}

double NNfunction-NN_1_7::synapse0x20cf710() {
   return (neuron0x20c3f90()*0.094868);
}

double NNfunction-NN_1_7::synapse0x20cf750() {
   return (neuron0x20c42d0()*-0.055512);
}

double NNfunction-NN_1_7::synapse0x20cf790() {
   return (neuron0x20c4610()*0.106389);
}

double NNfunction-NN_1_7::synapse0x20cf7d0() {
   return (neuron0x20c4950()*-0.124409);
}

double NNfunction-NN_1_7::synapse0x20cf810() {
   return (neuron0x20c4c90()*-0.00617255);
}

double NNfunction-NN_1_7::synapse0x20cf850() {
   return (neuron0x20c4fd0()*0.0958216);
}

double NNfunction-NN_1_7::synapse0x20cf890() {
   return (neuron0x20c5310()*-2.5298);
}

double NNfunction-NN_1_7::synapse0x20cf8d0() {
   return (neuron0x20c5650()*-0.00512307);
}

double NNfunction-NN_1_7::synapse0x20cf910() {
   return (neuron0x20c5990()*-0.0991811);
}

double NNfunction-NN_1_7::synapse0x20cf950() {
   return (neuron0x20c5cd0()*-0.0331743);
}

double NNfunction-NN_1_7::synapse0x20cf990() {
   return (neuron0x20c6010()*-0.163841);
}

double NNfunction-NN_1_7::synapse0x20cf420() {
   return (neuron0x20c6350()*-0.0233031);
}

double NNfunction-NN_1_7::synapse0x20cf460() {
   return (neuron0x20c68b0()*0.102252);
}

double NNfunction-NN_1_7::synapse0x20cc1f0() {
   return (neuron0x20c6bf0()*0.0117878);
}

double NNfunction-NN_1_7::synapse0x20cc230() {
   return (neuron0x20c6f30()*-0.238501);
}

double NNfunction-NN_1_7::synapse0x20cc270() {
   return (neuron0x20c7270()*0.0541958);
}

double NNfunction-NN_1_7::synapse0x20cc2b0() {
   return (neuron0x20c75b0()*0.0789013);
}

double NNfunction-NN_1_7::synapse0x20cc2f0() {
   return (neuron0x20c78f0()*-0.102058);
}

double NNfunction-NN_1_7::synapse0x20cc330() {
   return (neuron0x20c7c30()*-2.70392);
}

double NNfunction-NN_1_7::synapse0x20cc6b0() {
   return (neuron0x20c2fe0()*-0.672367);
}

double NNfunction-NN_1_7::synapse0x20cc6f0() {
   return (neuron0x20c3290()*-0.119317);
}

double NNfunction-NN_1_7::synapse0x20cc730() {
   return (neuron0x20c35d0()*0.0441873);
}

double NNfunction-NN_1_7::synapse0x20cc770() {
   return (neuron0x20c3910()*0.00639611);
}

double NNfunction-NN_1_7::synapse0x20cc7b0() {
   return (neuron0x20c3c50()*-0.447575);
}

double NNfunction-NN_1_7::synapse0x20cc7f0() {
   return (neuron0x20c3f90()*0.324478);
}

double NNfunction-NN_1_7::synapse0x20cc830() {
   return (neuron0x20c42d0()*-0.349218);
}

double NNfunction-NN_1_7::synapse0x20cc870() {
   return (neuron0x20c4610()*-0.238276);
}

double NNfunction-NN_1_7::synapse0x20cc8b0() {
   return (neuron0x20c4950()*0.193615);
}

double NNfunction-NN_1_7::synapse0x20cc8f0() {
   return (neuron0x20c4c90()*0.553465);
}

double NNfunction-NN_1_7::synapse0x20cc930() {
   return (neuron0x20c4fd0()*0.288773);
}

double NNfunction-NN_1_7::synapse0x20cc970() {
   return (neuron0x20c5310()*0.0798075);
}

double NNfunction-NN_1_7::synapse0x20cc9b0() {
   return (neuron0x20c5650()*-0.73964);
}

double NNfunction-NN_1_7::synapse0x20d0af0() {
   return (neuron0x20c5990()*0.469399);
}

double NNfunction-NN_1_7::synapse0x20d0b30() {
   return (neuron0x20c5cd0()*-0.28293);
}

double NNfunction-NN_1_7::synapse0x20d0b70() {
   return (neuron0x20c6010()*-0.45926);
}

double NNfunction-NN_1_7::synapse0x20cc500() {
   return (neuron0x20c6350()*-0.0717266);
}

double NNfunction-NN_1_7::synapse0x20cc540() {
   return (neuron0x20c68b0()*-0.390526);
}

double NNfunction-NN_1_7::synapse0x20d0cc0() {
   return (neuron0x20c6bf0()*0.224904);
}

double NNfunction-NN_1_7::synapse0x20d0d00() {
   return (neuron0x20c6f30()*0.0125785);
}

double NNfunction-NN_1_7::synapse0x20d0d40() {
   return (neuron0x20c7270()*0.113274);
}

double NNfunction-NN_1_7::synapse0x20d0d80() {
   return (neuron0x20c75b0()*-0.0299174);
}

double NNfunction-NN_1_7::synapse0x20d0dc0() {
   return (neuron0x20c78f0()*0.048916);
}

double NNfunction-NN_1_7::synapse0x20d0e00() {
   return (neuron0x20c7c30()*-1.06584);
}

double NNfunction-NN_1_7::synapse0x20d1180() {
   return (neuron0x20c2fe0()*0.137408);
}

double NNfunction-NN_1_7::synapse0x20d11c0() {
   return (neuron0x20c3290()*-0.0118392);
}

double NNfunction-NN_1_7::synapse0x20d1200() {
   return (neuron0x20c35d0()*-0.194124);
}

double NNfunction-NN_1_7::synapse0x20d1240() {
   return (neuron0x20c3910()*0.025683);
}

double NNfunction-NN_1_7::synapse0x20d1280() {
   return (neuron0x20c3c50()*-0.0331274);
}

double NNfunction-NN_1_7::synapse0x20d12c0() {
   return (neuron0x20c3f90()*0.00372855);
}

double NNfunction-NN_1_7::synapse0x20d1300() {
   return (neuron0x20c42d0()*0.0124381);
}

double NNfunction-NN_1_7::synapse0x20d1340() {
   return (neuron0x20c4610()*0.00773135);
}

double NNfunction-NN_1_7::synapse0x20d1380() {
   return (neuron0x20c4950()*-0.00380277);
}

double NNfunction-NN_1_7::synapse0x20d13c0() {
   return (neuron0x20c4c90()*-0.0223339);
}

double NNfunction-NN_1_7::synapse0x20d1400() {
   return (neuron0x20c4fd0()*-0.034889);
}

double NNfunction-NN_1_7::synapse0x20d1440() {
   return (neuron0x20c5310()*-0.0188036);
}

double NNfunction-NN_1_7::synapse0x20d1480() {
   return (neuron0x20c5650()*-0.00987914);
}

double NNfunction-NN_1_7::synapse0x20d14c0() {
   return (neuron0x20c5990()*-0.0039636);
}

double NNfunction-NN_1_7::synapse0x20d1500() {
   return (neuron0x20c5cd0()*0.00447587);
}

double NNfunction-NN_1_7::synapse0x20d1540() {
   return (neuron0x20c6010()*0.0235235);
}

double NNfunction-NN_1_7::synapse0x20d0fd0() {
   return (neuron0x20c6350()*-0.0119337);
}

double NNfunction-NN_1_7::synapse0x20d1010() {
   return (neuron0x20c68b0()*-0.0210064);
}

double NNfunction-NN_1_7::synapse0x20d1690() {
   return (neuron0x20c6bf0()*0.00259747);
}

double NNfunction-NN_1_7::synapse0x20d16d0() {
   return (neuron0x20c6f30()*-0.00799012);
}

double NNfunction-NN_1_7::synapse0x20d1710() {
   return (neuron0x20c7270()*-0.00355105);
}

double NNfunction-NN_1_7::synapse0x20d1750() {
   return (neuron0x20c75b0()*-0.00585702);
}

double NNfunction-NN_1_7::synapse0x20d1790() {
   return (neuron0x20c78f0()*0.0132684);
}

double NNfunction-NN_1_7::synapse0x20d17d0() {
   return (neuron0x20c7c30()*2.29582);
}

double NNfunction-NN_1_7::synapse0x20d1b50() {
   return (neuron0x20c2fe0()*0.142974);
}

double NNfunction-NN_1_7::synapse0x20d1b90() {
   return (neuron0x20c3290()*0.00470114);
}

double NNfunction-NN_1_7::synapse0x20d1bd0() {
   return (neuron0x20c35d0()*0.151928);
}

double NNfunction-NN_1_7::synapse0x20d1c10() {
   return (neuron0x20c3910()*0.222213);
}

double NNfunction-NN_1_7::synapse0x20d1c50() {
   return (neuron0x20c3c50()*0.119997);
}

double NNfunction-NN_1_7::synapse0x20d1c90() {
   return (neuron0x20c3f90()*0.0625015);
}

double NNfunction-NN_1_7::synapse0x20d1cd0() {
   return (neuron0x20c42d0()*-0.0840043);
}

double NNfunction-NN_1_7::synapse0x20d1d10() {
   return (neuron0x20c4610()*0.0648645);
}

double NNfunction-NN_1_7::synapse0x20d1d50() {
   return (neuron0x20c4950()*-0.00544717);
}

double NNfunction-NN_1_7::synapse0x20d1d90() {
   return (neuron0x20c4c90()*0.0795112);
}

double NNfunction-NN_1_7::synapse0x20d1dd0() {
   return (neuron0x20c4fd0()*-0.173866);
}

double NNfunction-NN_1_7::synapse0x20d1e10() {
   return (neuron0x20c5310()*0.453965);
}

double NNfunction-NN_1_7::synapse0x20d1e50() {
   return (neuron0x20c5650()*-0.0140006);
}

double NNfunction-NN_1_7::synapse0x20d1e90() {
   return (neuron0x20c5990()*-0.0698078);
}

double NNfunction-NN_1_7::synapse0x20d1ed0() {
   return (neuron0x20c5cd0()*0.195584);
}

double NNfunction-NN_1_7::synapse0x20d1f10() {
   return (neuron0x20c6010()*-0.0518237);
}

double NNfunction-NN_1_7::synapse0x20d19a0() {
   return (neuron0x20c6350()*-0.0537826);
}

double NNfunction-NN_1_7::synapse0x20d19e0() {
   return (neuron0x20c68b0()*0.130299);
}

double NNfunction-NN_1_7::synapse0x20d2060() {
   return (neuron0x20c6bf0()*-0.0939706);
}

double NNfunction-NN_1_7::synapse0x20d20a0() {
   return (neuron0x20c6f30()*-0.0155554);
}

double NNfunction-NN_1_7::synapse0x20d20e0() {
   return (neuron0x20c7270()*-0.0157538);
}

double NNfunction-NN_1_7::synapse0x20d2120() {
   return (neuron0x20c75b0()*-0.0414731);
}

double NNfunction-NN_1_7::synapse0x20d2160() {
   return (neuron0x20c78f0()*-0.0885164);
}

double NNfunction-NN_1_7::synapse0x20d21a0() {
   return (neuron0x20c7c30()*-1.26454);
}

double NNfunction-NN_1_7::synapse0x20d2520() {
   return (neuron0x20c2fe0()*-0.0565777);
}

double NNfunction-NN_1_7::synapse0x20d2560() {
   return (neuron0x20c3290()*0.0801794);
}

double NNfunction-NN_1_7::synapse0x20d25a0() {
   return (neuron0x20c35d0()*-0.543869);
}

double NNfunction-NN_1_7::synapse0x20d25e0() {
   return (neuron0x20c3910()*-0.0452725);
}

double NNfunction-NN_1_7::synapse0x20d2620() {
   return (neuron0x20c3c50()*0.0935211);
}

double NNfunction-NN_1_7::synapse0x20d2660() {
   return (neuron0x20c3f90()*-0.118949);
}

double NNfunction-NN_1_7::synapse0x20d26a0() {
   return (neuron0x20c42d0()*0.0408917);
}

double NNfunction-NN_1_7::synapse0x20d26e0() {
   return (neuron0x20c4610()*-0.0706522);
}

double NNfunction-NN_1_7::synapse0x20d2720() {
   return (neuron0x20c4950()*0.0635613);
}

double NNfunction-NN_1_7::synapse0x20d2760() {
   return (neuron0x20c4c90()*-0.00646607);
}

double NNfunction-NN_1_7::synapse0x20d27a0() {
   return (neuron0x20c4fd0()*0.0473857);
}

double NNfunction-NN_1_7::synapse0x20d27e0() {
   return (neuron0x20c5310()*0.499252);
}

double NNfunction-NN_1_7::synapse0x20d2820() {
   return (neuron0x20c5650()*-0.3688);
}

double NNfunction-NN_1_7::synapse0x20d2860() {
   return (neuron0x20c5990()*0.00418453);
}

double NNfunction-NN_1_7::synapse0x20d28a0() {
   return (neuron0x20c5cd0()*0.0409792);
}

double NNfunction-NN_1_7::synapse0x20d28e0() {
   return (neuron0x20c6010()*0.14423);
}

double NNfunction-NN_1_7::synapse0x20d2370() {
   return (neuron0x20c6350()*-0.00250822);
}

double NNfunction-NN_1_7::synapse0x20d23b0() {
   return (neuron0x20c68b0()*-0.137215);
}

double NNfunction-NN_1_7::synapse0x20d2a30() {
   return (neuron0x20c6bf0()*-0.0997379);
}

double NNfunction-NN_1_7::synapse0x20d2a70() {
   return (neuron0x20c6f30()*-0.208439);
}

double NNfunction-NN_1_7::synapse0x20d2ab0() {
   return (neuron0x20c7270()*0.0133152);
}

double NNfunction-NN_1_7::synapse0x20d2af0() {
   return (neuron0x20c75b0()*0.0388329);
}

double NNfunction-NN_1_7::synapse0x20d2b30() {
   return (neuron0x20c78f0()*-0.0214217);
}

double NNfunction-NN_1_7::synapse0x20d2b70() {
   return (neuron0x20c7c30()*-0.0678439);
}

double NNfunction-NN_1_7::synapse0x20d2ef0() {
   return (neuron0x20c2fe0()*-0.0392016);
}

double NNfunction-NN_1_7::synapse0x20c3170() {
   return (neuron0x20c3290()*0.0192695);
}

double NNfunction-NN_1_7::synapse0x20c31b0() {
   return (neuron0x20c35d0()*0.913958);
}

double NNfunction-NN_1_7::synapse0x20c34b0() {
   return (neuron0x20c3910()*-0.00383545);
}

double NNfunction-NN_1_7::synapse0x20c34f0() {
   return (neuron0x20c3c50()*0.0213134);
}

double NNfunction-NN_1_7::synapse0x20c37f0() {
   return (neuron0x20c3f90()*0.0803812);
}

double NNfunction-NN_1_7::synapse0x20c3830() {
   return (neuron0x20c42d0()*0.00441962);
}

double NNfunction-NN_1_7::synapse0x20c3b30() {
   return (neuron0x20c4610()*-0.0127404);
}

double NNfunction-NN_1_7::synapse0x20c3b70() {
   return (neuron0x20c4950()*-0.0902125);
}

double NNfunction-NN_1_7::synapse0x20c3e70() {
   return (neuron0x20c4c90()*0.008241);
}

double NNfunction-NN_1_7::synapse0x20c3eb0() {
   return (neuron0x20c4fd0()*0.00946491);
}

double NNfunction-NN_1_7::synapse0x20c41b0() {
   return (neuron0x20c5310()*-0.165681);
}

double NNfunction-NN_1_7::synapse0x20c41f0() {
   return (neuron0x20c5650()*-0.0149877);
}

double NNfunction-NN_1_7::synapse0x20c44f0() {
   return (neuron0x20c5990()*0.0156752);
}

double NNfunction-NN_1_7::synapse0x20c4530() {
   return (neuron0x20c5cd0()*-0.00304877);
}

double NNfunction-NN_1_7::synapse0x20c4830() {
   return (neuron0x20c6010()*-0.00752094);
}

double NNfunction-NN_1_7::synapse0x20c4870() {
   return (neuron0x20c6350()*0.0076908);
}

double NNfunction-NN_1_7::synapse0x20c4b70() {
   return (neuron0x20c68b0()*-0.0203342);
}

double NNfunction-NN_1_7::synapse0x20c4bb0() {
   return (neuron0x20c6bf0()*-0.0183047);
}

double NNfunction-NN_1_7::synapse0x20c4eb0() {
   return (neuron0x20c6f30()*0.0367136);
}

double NNfunction-NN_1_7::synapse0x20c4ef0() {
   return (neuron0x20c7270()*0.02298);
}

double NNfunction-NN_1_7::synapse0x20c51f0() {
   return (neuron0x20c75b0()*0.0199546);
}

double NNfunction-NN_1_7::synapse0x20c5230() {
   return (neuron0x20c78f0()*0.0199995);
}

double NNfunction-NN_1_7::synapse0x20c5530() {
   return (neuron0x20c7c30()*-4.6862);
}

double NNfunction-NN_1_7::synapse0x20c5570() {
   return (neuron0x20c2fe0()*-0.0083075);
}

double NNfunction-NN_1_7::synapse0x20c6230() {
   return (neuron0x20c3290()*0.282088);
}

double NNfunction-NN_1_7::synapse0x20c6270() {
   return (neuron0x20c35d0()*-0.817011);
}

double NNfunction-NN_1_7::synapse0x20d2d40() {
   return (neuron0x20c3910()*-0.961465);
}

double NNfunction-NN_1_7::synapse0x20d2d80() {
   return (neuron0x20c3c50()*0.261432);
}

double NNfunction-NN_1_7::synapse0x20c6570() {
   return (neuron0x20c3f90()*-0.884109);
}

double NNfunction-NN_1_7::synapse0x20c65b0() {
   return (neuron0x20c42d0()*0.385581);
}

double NNfunction-NN_1_7::synapse0x20c6ad0() {
   return (neuron0x20c4610()*-0.355029);
}

double NNfunction-NN_1_7::synapse0x20c6b10() {
   return (neuron0x20c4950()*0.149139);
}

double NNfunction-NN_1_7::synapse0x20c6e10() {
   return (neuron0x20c4c90()*0.446663);
}

double NNfunction-NN_1_7::synapse0x20c6e50() {
   return (neuron0x20c4fd0()*0.15754);
}

double NNfunction-NN_1_7::synapse0x20c7150() {
   return (neuron0x20c5310()*-1.08872);
}

double NNfunction-NN_1_7::synapse0x20c7190() {
   return (neuron0x20c5650()*0.30432);
}

double NNfunction-NN_1_7::synapse0x20c7490() {
   return (neuron0x20c5990()*0.0866179);
}

double NNfunction-NN_1_7::synapse0x20c74d0() {
   return (neuron0x20c5cd0()*0.347998);
}

double NNfunction-NN_1_7::synapse0x20c77d0() {
   return (neuron0x20c6010()*0.726753);
}

double NNfunction-NN_1_7::synapse0x20c7810() {
   return (neuron0x20c6350()*-0.880252);
}

double NNfunction-NN_1_7::synapse0x20c7b10() {
   return (neuron0x20c68b0()*-0.0562017);
}

double NNfunction-NN_1_7::synapse0x20c7b50() {
   return (neuron0x20c6bf0()*-0.144395);
}

double NNfunction-NN_1_7::synapse0x20c7e50() {
   return (neuron0x20c6f30()*0.375467);
}

double NNfunction-NN_1_7::synapse0x20c7e90() {
   return (neuron0x20c7270()*-0.140871);
}

double NNfunction-NN_1_7::synapse0x20c5870() {
   return (neuron0x20c75b0()*0.476163);
}

double NNfunction-NN_1_7::synapse0x20c58b0() {
   return (neuron0x20c78f0()*0.261163);
}

double NNfunction-NN_1_7::synapse0x20d4c60() {
   return (neuron0x20c7c30()*-0.114181);
}

double NNfunction-NN_1_7::synapse0x20d4fe0() {
   return (neuron0x20c2fe0()*0.0312513);
}

double NNfunction-NN_1_7::synapse0x20d5020() {
   return (neuron0x20c3290()*11.4833);
}

double NNfunction-NN_1_7::synapse0x20d5060() {
   return (neuron0x20c35d0()*-0.482993);
}

double NNfunction-NN_1_7::synapse0x20d50a0() {
   return (neuron0x20c3910()*-0.027367);
}

double NNfunction-NN_1_7::synapse0x20d50e0() {
   return (neuron0x20c3c50()*0.0187013);
}

double NNfunction-NN_1_7::synapse0x20d5120() {
   return (neuron0x20c3f90()*0.0272157);
}

double NNfunction-NN_1_7::synapse0x20d5160() {
   return (neuron0x20c42d0()*-0.00759897);
}

double NNfunction-NN_1_7::synapse0x20d51a0() {
   return (neuron0x20c4610()*-0.000494514);
}

double NNfunction-NN_1_7::synapse0x20d51e0() {
   return (neuron0x20c4950()*0.0101771);
}

double NNfunction-NN_1_7::synapse0x20d5220() {
   return (neuron0x20c4c90()*0.0317385);
}

double NNfunction-NN_1_7::synapse0x20d5260() {
   return (neuron0x20c4fd0()*0.00832292);
}

double NNfunction-NN_1_7::synapse0x20d52a0() {
   return (neuron0x20c5310()*0.0992229);
}

double NNfunction-NN_1_7::synapse0x20d52e0() {
   return (neuron0x20c5650()*0.00224339);
}

double NNfunction-NN_1_7::synapse0x20d5320() {
   return (neuron0x20c5990()*-0.00359664);
}

double NNfunction-NN_1_7::synapse0x20d5360() {
   return (neuron0x20c5cd0()*0.00231281);
}

double NNfunction-NN_1_7::synapse0x20d53a0() {
   return (neuron0x20c6010()*0.0106102);
}

double NNfunction-NN_1_7::synapse0x20d4e30() {
   return (neuron0x20c6350()*0.045328);
}

double NNfunction-NN_1_7::synapse0x20d4e70() {
   return (neuron0x20c68b0()*0.0120724);
}

double NNfunction-NN_1_7::synapse0x20d54f0() {
   return (neuron0x20c6bf0()*0.00391446);
}

double NNfunction-NN_1_7::synapse0x20d5530() {
   return (neuron0x20c6f30()*0.00731696);
}

double NNfunction-NN_1_7::synapse0x20d5570() {
   return (neuron0x20c7270()*-0.00119563);
}

double NNfunction-NN_1_7::synapse0x20d55b0() {
   return (neuron0x20c75b0()*0.000588139);
}

double NNfunction-NN_1_7::synapse0x20d55f0() {
   return (neuron0x20c78f0()*0.000757514);
}

double NNfunction-NN_1_7::synapse0x20d5630() {
   return (neuron0x20c7c30()*-1.75965);
}

double NNfunction-NN_1_7::synapse0x20d59b0() {
   return (neuron0x20c2fe0()*-0.0306434);
}

double NNfunction-NN_1_7::synapse0x20d59f0() {
   return (neuron0x20c3290()*-0.167351);
}

double NNfunction-NN_1_7::synapse0x20d5a30() {
   return (neuron0x20c35d0()*0.581518);
}

double NNfunction-NN_1_7::synapse0x20d5a70() {
   return (neuron0x20c3910()*0.0891268);
}

double NNfunction-NN_1_7::synapse0x20d5ab0() {
   return (neuron0x20c3c50()*-0.0813287);
}

double NNfunction-NN_1_7::synapse0x20d5af0() {
   return (neuron0x20c3f90()*-0.0371514);
}

double NNfunction-NN_1_7::synapse0x20d5b30() {
   return (neuron0x20c42d0()*0.0330169);
}

double NNfunction-NN_1_7::synapse0x20d5b70() {
   return (neuron0x20c4610()*0.0768147);
}

double NNfunction-NN_1_7::synapse0x20d5bb0() {
   return (neuron0x20c4950()*0.0590462);
}

double NNfunction-NN_1_7::synapse0x20d5bf0() {
   return (neuron0x20c4c90()*0.02283);
}

double NNfunction-NN_1_7::synapse0x20d5c30() {
   return (neuron0x20c4fd0()*0.00795106);
}

double NNfunction-NN_1_7::synapse0x20d5c70() {
   return (neuron0x20c5310()*0.225695);
}

double NNfunction-NN_1_7::synapse0x20d5cb0() {
   return (neuron0x20c5650()*-0.194145);
}

double NNfunction-NN_1_7::synapse0x20d5cf0() {
   return (neuron0x20c5990()*-0.019941);
}

double NNfunction-NN_1_7::synapse0x20d5d30() {
   return (neuron0x20c5cd0()*0.210289);
}

double NNfunction-NN_1_7::synapse0x20d5d70() {
   return (neuron0x20c6010()*-0.032917);
}

double NNfunction-NN_1_7::synapse0x20d5800() {
   return (neuron0x20c6350()*-0.0145564);
}

double NNfunction-NN_1_7::synapse0x20d5840() {
   return (neuron0x20c68b0()*-0.0255747);
}

double NNfunction-NN_1_7::synapse0x20d5ec0() {
   return (neuron0x20c6bf0()*-0.0912861);
}

double NNfunction-NN_1_7::synapse0x20d5f00() {
   return (neuron0x20c6f30()*-0.142551);
}

double NNfunction-NN_1_7::synapse0x20d5f40() {
   return (neuron0x20c7270()*-0.0749451);
}

double NNfunction-NN_1_7::synapse0x20d5f80() {
   return (neuron0x20c75b0()*-0.0258274);
}

double NNfunction-NN_1_7::synapse0x20d5fc0() {
   return (neuron0x20c78f0()*-0.116825);
}

double NNfunction-NN_1_7::synapse0x20d6000() {
   return (neuron0x20c7c30()*0.240296);
}

double NNfunction-NN_1_7::synapse0x20d6380() {
   return (neuron0x20c2fe0()*-0.634575);
}

double NNfunction-NN_1_7::synapse0x20d63c0() {
   return (neuron0x20c3290()*-0.0534175);
}

double NNfunction-NN_1_7::synapse0x20d6400() {
   return (neuron0x20c35d0()*0.0706266);
}

double NNfunction-NN_1_7::synapse0x20d6440() {
   return (neuron0x20c3910()*0.0911009);
}

double NNfunction-NN_1_7::synapse0x20d6480() {
   return (neuron0x20c3c50()*0.16728);
}

double NNfunction-NN_1_7::synapse0x20d64c0() {
   return (neuron0x20c3f90()*0.19648);
}

double NNfunction-NN_1_7::synapse0x20d6500() {
   return (neuron0x20c42d0()*0.353884);
}

double NNfunction-NN_1_7::synapse0x20d6540() {
   return (neuron0x20c4610()*-0.02594);
}

double NNfunction-NN_1_7::synapse0x20d6580() {
   return (neuron0x20c4950()*0.211965);
}

double NNfunction-NN_1_7::synapse0x20d65c0() {
   return (neuron0x20c4c90()*-0.168664);
}

double NNfunction-NN_1_7::synapse0x20d6600() {
   return (neuron0x20c4fd0()*-0.161339);
}

double NNfunction-NN_1_7::synapse0x20d6640() {
   return (neuron0x20c5310()*0.46046);
}

double NNfunction-NN_1_7::synapse0x20d6680() {
   return (neuron0x20c5650()*0.0494594);
}

double NNfunction-NN_1_7::synapse0x20d66c0() {
   return (neuron0x20c5990()*0.192363);
}

double NNfunction-NN_1_7::synapse0x20d6700() {
   return (neuron0x20c5cd0()*-0.455471);
}

double NNfunction-NN_1_7::synapse0x20d6740() {
   return (neuron0x20c6010()*0.5684);
}

double NNfunction-NN_1_7::synapse0x20d61d0() {
   return (neuron0x20c6350()*0.0241282);
}

double NNfunction-NN_1_7::synapse0x20d6210() {
   return (neuron0x20c68b0()*-0.802196);
}

double NNfunction-NN_1_7::synapse0x20d6890() {
   return (neuron0x20c6bf0()*-0.621564);
}

double NNfunction-NN_1_7::synapse0x20d68d0() {
   return (neuron0x20c6f30()*0.0312751);
}

double NNfunction-NN_1_7::synapse0x20d6910() {
   return (neuron0x20c7270()*-0.565346);
}

double NNfunction-NN_1_7::synapse0x20d6950() {
   return (neuron0x20c75b0()*0.225243);
}

double NNfunction-NN_1_7::synapse0x20d6990() {
   return (neuron0x20c78f0()*0.038126);
}

double NNfunction-NN_1_7::synapse0x20d69d0() {
   return (neuron0x20c7c30()*-0.0465984);
}

double NNfunction-NN_1_7::synapse0x20d6d50() {
   return (neuron0x20c2fe0()*-0.159492);
}

double NNfunction-NN_1_7::synapse0x20d6d90() {
   return (neuron0x20c3290()*0.0251116);
}

double NNfunction-NN_1_7::synapse0x20d6dd0() {
   return (neuron0x20c35d0()*1.69279);
}

double NNfunction-NN_1_7::synapse0x20d6e10() {
   return (neuron0x20c3910()*0.0368586);
}

double NNfunction-NN_1_7::synapse0x20d6e50() {
   return (neuron0x20c3c50()*-0.141585);
}

double NNfunction-NN_1_7::synapse0x20d6e90() {
   return (neuron0x20c3f90()*0.384074);
}

double NNfunction-NN_1_7::synapse0x20d6ed0() {
   return (neuron0x20c42d0()*-0.0370131);
}

double NNfunction-NN_1_7::synapse0x20d6f10() {
   return (neuron0x20c4610()*0.15994);
}

double NNfunction-NN_1_7::synapse0x20d6f50() {
   return (neuron0x20c4950()*-0.529461);
}

double NNfunction-NN_1_7::synapse0x20d6f90() {
   return (neuron0x20c4c90()*0.0913942);
}

double NNfunction-NN_1_7::synapse0x20d6fd0() {
   return (neuron0x20c4fd0()*-0.348134);
}

double NNfunction-NN_1_7::synapse0x20d7010() {
   return (neuron0x20c5310()*0.499219);
}

double NNfunction-NN_1_7::synapse0x20d7050() {
   return (neuron0x20c5650()*0.019293);
}

double NNfunction-NN_1_7::synapse0x20d7090() {
   return (neuron0x20c5990()*0.0408655);
}

double NNfunction-NN_1_7::synapse0x20d70d0() {
   return (neuron0x20c5cd0()*0.363189);
}

double NNfunction-NN_1_7::synapse0x20d7110() {
   return (neuron0x20c6010()*-0.037299);
}

double NNfunction-NN_1_7::synapse0x20d6ba0() {
   return (neuron0x20c6350()*0.161526);
}

double NNfunction-NN_1_7::synapse0x20d6be0() {
   return (neuron0x20c68b0()*-0.270833);
}

double NNfunction-NN_1_7::synapse0x20d7260() {
   return (neuron0x20c6bf0()*-0.206052);
}

double NNfunction-NN_1_7::synapse0x20d72a0() {
   return (neuron0x20c6f30()*-0.0268844);
}

double NNfunction-NN_1_7::synapse0x20d72e0() {
   return (neuron0x20c7270()*0.0931755);
}

double NNfunction-NN_1_7::synapse0x20d7320() {
   return (neuron0x20c75b0()*-0.113175);
}

double NNfunction-NN_1_7::synapse0x20d7360() {
   return (neuron0x20c78f0()*-0.0147272);
}

double NNfunction-NN_1_7::synapse0x20d73a0() {
   return (neuron0x20c7c30()*-3.18939);
}

double NNfunction-NN_1_7::synapse0x20d7720() {
   return (neuron0x20c2fe0()*-0.126795);
}

double NNfunction-NN_1_7::synapse0x20d7760() {
   return (neuron0x20c3290()*0.0624984);
}

double NNfunction-NN_1_7::synapse0x20d77a0() {
   return (neuron0x20c35d0()*1.05497);
}

double NNfunction-NN_1_7::synapse0x20d77e0() {
   return (neuron0x20c3910()*-0.0112084);
}

double NNfunction-NN_1_7::synapse0x20d7820() {
   return (neuron0x20c3c50()*-0.02937);
}

double NNfunction-NN_1_7::synapse0x20d7860() {
   return (neuron0x20c3f90()*0.393993);
}

double NNfunction-NN_1_7::synapse0x20d78a0() {
   return (neuron0x20c42d0()*0.0336315);
}

double NNfunction-NN_1_7::synapse0x20d78e0() {
   return (neuron0x20c4610()*-0.128159);
}

double NNfunction-NN_1_7::synapse0x20d7920() {
   return (neuron0x20c4950()*-0.0574326);
}

double NNfunction-NN_1_7::synapse0x20cfae0() {
   return (neuron0x20c4c90()*-0.117137);
}

double NNfunction-NN_1_7::synapse0x20cfb20() {
   return (neuron0x20c4fd0()*-0.141659);
}

double NNfunction-NN_1_7::synapse0x20cfb60() {
   return (neuron0x20c5310()*-0.190708);
}

double NNfunction-NN_1_7::synapse0x20cfba0() {
   return (neuron0x20c5650()*-0.917563);
}

double NNfunction-NN_1_7::synapse0x20cfbe0() {
   return (neuron0x20c5990()*-0.206927);
}

double NNfunction-NN_1_7::synapse0x20cfc20() {
   return (neuron0x20c5cd0()*-0.361063);
}

double NNfunction-NN_1_7::synapse0x20cfc60() {
   return (neuron0x20c6010()*0.0376713);
}

double NNfunction-NN_1_7::synapse0x20d7570() {
   return (neuron0x20c6350()*-0.443223);
}

double NNfunction-NN_1_7::synapse0x20d75b0() {
   return (neuron0x20c68b0()*-0.610106);
}

double NNfunction-NN_1_7::synapse0x20cfdb0() {
   return (neuron0x20c6bf0()*0.346729);
}

double NNfunction-NN_1_7::synapse0x20cfdf0() {
   return (neuron0x20c6f30()*-0.10458);
}

double NNfunction-NN_1_7::synapse0x20cfe30() {
   return (neuron0x20c7270()*0.0408419);
}

double NNfunction-NN_1_7::synapse0x20cfe70() {
   return (neuron0x20c75b0()*-0.107448);
}

double NNfunction-NN_1_7::synapse0x20cfeb0() {
   return (neuron0x20c78f0()*0.40324);
}

double NNfunction-NN_1_7::synapse0x20cfef0() {
   return (neuron0x20c7c30()*-2.88148);
}

double NNfunction-NN_1_7::synapse0x20d0270() {
   return (neuron0x20c2fe0()*0.124344);
}

double NNfunction-NN_1_7::synapse0x20d02b0() {
   return (neuron0x20c3290()*0.0593831);
}

double NNfunction-NN_1_7::synapse0x20d02f0() {
   return (neuron0x20c35d0()*1.85085);
}

double NNfunction-NN_1_7::synapse0x20d0330() {
   return (neuron0x20c3910()*0.134732);
}

double NNfunction-NN_1_7::synapse0x20d0370() {
   return (neuron0x20c3c50()*0.10532);
}

double NNfunction-NN_1_7::synapse0x20d03b0() {
   return (neuron0x20c3f90()*0.103295);
}

double NNfunction-NN_1_7::synapse0x20d03f0() {
   return (neuron0x20c42d0()*-0.00306867);
}

double NNfunction-NN_1_7::synapse0x20d0430() {
   return (neuron0x20c4610()*0.000323518);
}

double NNfunction-NN_1_7::synapse0x20d0470() {
   return (neuron0x20c4950()*-0.0814047);
}

double NNfunction-NN_1_7::synapse0x20d04b0() {
   return (neuron0x20c4c90()*-0.0213452);
}

double NNfunction-NN_1_7::synapse0x20d04f0() {
   return (neuron0x20c4fd0()*-0.105313);
}

double NNfunction-NN_1_7::synapse0x20d0530() {
   return (neuron0x20c5310()*-0.979347);
}

double NNfunction-NN_1_7::synapse0x20d0570() {
   return (neuron0x20c5650()*-0.284345);
}

double NNfunction-NN_1_7::synapse0x20d05b0() {
   return (neuron0x20c5990()*-0.0368514);
}

double NNfunction-NN_1_7::synapse0x20d05f0() {
   return (neuron0x20c5cd0()*-0.0305857);
}

double NNfunction-NN_1_7::synapse0x20d0630() {
   return (neuron0x20c6010()*-0.0247322);
}

double NNfunction-NN_1_7::synapse0x20d00c0() {
   return (neuron0x20c6350()*-0.0900492);
}

double NNfunction-NN_1_7::synapse0x20d0100() {
   return (neuron0x20c68b0()*-0.0309757);
}

double NNfunction-NN_1_7::synapse0x20d0780() {
   return (neuron0x20c6bf0()*-0.0704329);
}

double NNfunction-NN_1_7::synapse0x20d07c0() {
   return (neuron0x20c6f30()*-0.134245);
}

double NNfunction-NN_1_7::synapse0x20d0800() {
   return (neuron0x20c7270()*-0.00209937);
}

double NNfunction-NN_1_7::synapse0x20d0840() {
   return (neuron0x20c75b0()*-0.0331563);
}

double NNfunction-NN_1_7::synapse0x20d0880() {
   return (neuron0x20c78f0()*-0.0357064);
}

double NNfunction-NN_1_7::synapse0x20d08c0() {
   return (neuron0x20c7c30()*-2.10941);
}

double NNfunction-NN_1_7::synapse0x20d0a90() {
   return (neuron0x20c2fe0()*-0.0455079);
}

double NNfunction-NN_1_7::synapse0x20d9b20() {
   return (neuron0x20c3290()*0.00545519);
}

double NNfunction-NN_1_7::synapse0x20d9b60() {
   return (neuron0x20c35d0()*6.39606);
}

double NNfunction-NN_1_7::synapse0x20d9ba0() {
   return (neuron0x20c3910()*-0.0254171);
}

double NNfunction-NN_1_7::synapse0x20d9be0() {
   return (neuron0x20c3c50()*-0.0168096);
}

double NNfunction-NN_1_7::synapse0x20d9c20() {
   return (neuron0x20c3f90()*0.00235485);
}

double NNfunction-NN_1_7::synapse0x20d9c60() {
   return (neuron0x20c42d0()*0.0136345);
}

double NNfunction-NN_1_7::synapse0x20d9ca0() {
   return (neuron0x20c4610()*0.0282572);
}

double NNfunction-NN_1_7::synapse0x20d9ce0() {
   return (neuron0x20c4950()*-0.0134269);
}

double NNfunction-NN_1_7::synapse0x20d9d20() {
   return (neuron0x20c4c90()*-0.0426517);
}

double NNfunction-NN_1_7::synapse0x20d9d60() {
   return (neuron0x20c4fd0()*-0.0145129);
}

double NNfunction-NN_1_7::synapse0x20d9da0() {
   return (neuron0x20c5310()*-4.25041);
}

double NNfunction-NN_1_7::synapse0x20d9de0() {
   return (neuron0x20c5650()*-0.0841043);
}

double NNfunction-NN_1_7::synapse0x20d9e20() {
   return (neuron0x20c5990()*0.000188199);
}

double NNfunction-NN_1_7::synapse0x20d9e60() {
   return (neuron0x20c5cd0()*0.00622035);
}

double NNfunction-NN_1_7::synapse0x20d9ea0() {
   return (neuron0x20c6010()*0.0351376);
}

double NNfunction-NN_1_7::synapse0x20d9970() {
   return (neuron0x20c6350()*-0.0101426);
}

double NNfunction-NN_1_7::synapse0x20d99b0() {
   return (neuron0x20c68b0()*-0.00682152);
}

double NNfunction-NN_1_7::synapse0x20d9ff0() {
   return (neuron0x20c6bf0()*0.0111477);
}

double NNfunction-NN_1_7::synapse0x20da030() {
   return (neuron0x20c6f30()*0.0207136);
}

double NNfunction-NN_1_7::synapse0x20da070() {
   return (neuron0x20c7270()*-0.0230384);
}

double NNfunction-NN_1_7::synapse0x20da0b0() {
   return (neuron0x20c75b0()*0.00113638);
}

double NNfunction-NN_1_7::synapse0x20da0f0() {
   return (neuron0x20c78f0()*-0.0050437);
}

double NNfunction-NN_1_7::synapse0x20da130() {
   return (neuron0x20c7c30()*-0.00927167);
}

double NNfunction-NN_1_7::synapse0x20da4b0() {
   return (neuron0x20c2fe0()*0.0207336);
}

double NNfunction-NN_1_7::synapse0x20da4f0() {
   return (neuron0x20c3290()*-0.0133068);
}

double NNfunction-NN_1_7::synapse0x20da530() {
   return (neuron0x20c35d0()*0.657616);
}

double NNfunction-NN_1_7::synapse0x20da570() {
   return (neuron0x20c3910()*-0.0161549);
}

double NNfunction-NN_1_7::synapse0x20da5b0() {
   return (neuron0x20c3c50()*-0.0111103);
}

double NNfunction-NN_1_7::synapse0x20da5f0() {
   return (neuron0x20c3f90()*0.0354113);
}

double NNfunction-NN_1_7::synapse0x20da630() {
   return (neuron0x20c42d0()*0.0240417);
}

double NNfunction-NN_1_7::synapse0x20da670() {
   return (neuron0x20c4610()*-0.0365009);
}

double NNfunction-NN_1_7::synapse0x20da6b0() {
   return (neuron0x20c4950()*-0.0061514);
}

double NNfunction-NN_1_7::synapse0x20da6f0() {
   return (neuron0x20c4c90()*0.0167905);
}

double NNfunction-NN_1_7::synapse0x20da730() {
   return (neuron0x20c4fd0()*0.0147515);
}

double NNfunction-NN_1_7::synapse0x20da770() {
   return (neuron0x20c5310()*-0.071703);
}

double NNfunction-NN_1_7::synapse0x20da7b0() {
   return (neuron0x20c5650()*-0.0151809);
}

double NNfunction-NN_1_7::synapse0x20da7f0() {
   return (neuron0x20c5990()*0.0190292);
}

double NNfunction-NN_1_7::synapse0x20da830() {
   return (neuron0x20c5cd0()*0.0485193);
}

double NNfunction-NN_1_7::synapse0x20da870() {
   return (neuron0x20c6010()*0.00897174);
}

double NNfunction-NN_1_7::synapse0x20da300() {
   return (neuron0x20c6350()*0.0107323);
}

double NNfunction-NN_1_7::synapse0x20da340() {
   return (neuron0x20c68b0()*-0.00353933);
}

double NNfunction-NN_1_7::synapse0x20da9c0() {
   return (neuron0x20c6bf0()*0.04446);
}

double NNfunction-NN_1_7::synapse0x20daa00() {
   return (neuron0x20c6f30()*-0.0100186);
}

double NNfunction-NN_1_7::synapse0x20daa40() {
   return (neuron0x20c7270()*0.00490364);
}

double NNfunction-NN_1_7::synapse0x20daa80() {
   return (neuron0x20c75b0()*-0.0210268);
}

double NNfunction-NN_1_7::synapse0x20daac0() {
   return (neuron0x20c78f0()*-0.0230577);
}

double NNfunction-NN_1_7::synapse0x20dab00() {
   return (neuron0x20c7c30()*2.07822);
}

double NNfunction-NN_1_7::synapse0x20dae80() {
   return (neuron0x20c2fe0()*-0.214881);
}

double NNfunction-NN_1_7::synapse0x20daec0() {
   return (neuron0x20c3290()*0.315404);
}

double NNfunction-NN_1_7::synapse0x20daf00() {
   return (neuron0x20c35d0()*-0.716611);
}

double NNfunction-NN_1_7::synapse0x20daf40() {
   return (neuron0x20c3910()*0.0922731);
}

double NNfunction-NN_1_7::synapse0x20daf80() {
   return (neuron0x20c3c50()*-0.637964);
}

double NNfunction-NN_1_7::synapse0x20dafc0() {
   return (neuron0x20c3f90()*-0.438074);
}

double NNfunction-NN_1_7::synapse0x20db000() {
   return (neuron0x20c42d0()*-0.593829);
}

double NNfunction-NN_1_7::synapse0x20db040() {
   return (neuron0x20c4610()*0.0328098);
}

double NNfunction-NN_1_7::synapse0x20db080() {
   return (neuron0x20c4950()*0.327466);
}

double NNfunction-NN_1_7::synapse0x20db0c0() {
   return (neuron0x20c4c90()*-0.288272);
}

double NNfunction-NN_1_7::synapse0x20db100() {
   return (neuron0x20c4fd0()*0.140498);
}

double NNfunction-NN_1_7::synapse0x20db140() {
   return (neuron0x20c5310()*-0.620577);
}

double NNfunction-NN_1_7::synapse0x20db180() {
   return (neuron0x20c5650()*0.795642);
}

double NNfunction-NN_1_7::synapse0x20db1c0() {
   return (neuron0x20c5990()*-0.570941);
}

double NNfunction-NN_1_7::synapse0x20db200() {
   return (neuron0x20c5cd0()*-0.304171);
}

double NNfunction-NN_1_7::synapse0x20db240() {
   return (neuron0x20c6010()*0.507698);
}

double NNfunction-NN_1_7::synapse0x20dacd0() {
   return (neuron0x20c6350()*0.629043);
}

double NNfunction-NN_1_7::synapse0x20dad10() {
   return (neuron0x20c68b0()*0.0553145);
}

double NNfunction-NN_1_7::synapse0x20db390() {
   return (neuron0x20c6bf0()*0.372306);
}

double NNfunction-NN_1_7::synapse0x20db3d0() {
   return (neuron0x20c6f30()*-0.0664248);
}

double NNfunction-NN_1_7::synapse0x20db410() {
   return (neuron0x20c7270()*-0.00324627);
}

double NNfunction-NN_1_7::synapse0x20db450() {
   return (neuron0x20c75b0()*0.473747);
}

double NNfunction-NN_1_7::synapse0x20db490() {
   return (neuron0x20c78f0()*0.400404);
}

double NNfunction-NN_1_7::synapse0x20db4d0() {
   return (neuron0x20c7c30()*2.24827);
}

double NNfunction-NN_1_7::synapse0x20db850() {
   return (neuron0x20c2fe0()*0.40651);
}

double NNfunction-NN_1_7::synapse0x20db890() {
   return (neuron0x20c3290()*0.345875);
}

double NNfunction-NN_1_7::synapse0x20db8d0() {
   return (neuron0x20c35d0()*1.07242);
}

double NNfunction-NN_1_7::synapse0x20db910() {
   return (neuron0x20c3910()*-0.614796);
}

double NNfunction-NN_1_7::synapse0x20db950() {
   return (neuron0x20c3c50()*0.674786);
}

double NNfunction-NN_1_7::synapse0x20db990() {
   return (neuron0x20c3f90()*0.00829162);
}

double NNfunction-NN_1_7::synapse0x20db9d0() {
   return (neuron0x20c42d0()*-0.0895169);
}

double NNfunction-NN_1_7::synapse0x20dba10() {
   return (neuron0x20c4610()*0.200456);
}

double NNfunction-NN_1_7::synapse0x20dba50() {
   return (neuron0x20c4950()*-0.222524);
}

double NNfunction-NN_1_7::synapse0x20dba90() {
   return (neuron0x20c4c90()*0.0669944);
}

double NNfunction-NN_1_7::synapse0x20dbad0() {
   return (neuron0x20c4fd0()*-0.0550956);
}

double NNfunction-NN_1_7::synapse0x20dbb10() {
   return (neuron0x20c5310()*0.717159);
}

double NNfunction-NN_1_7::synapse0x20dbb50() {
   return (neuron0x20c5650()*0.528921);
}

double NNfunction-NN_1_7::synapse0x20dbb90() {
   return (neuron0x20c5990()*-0.55783);
}

double NNfunction-NN_1_7::synapse0x20dbbd0() {
   return (neuron0x20c5cd0()*0.11853);
}

double NNfunction-NN_1_7::synapse0x20dbc10() {
   return (neuron0x20c6010()*0.615035);
}

double NNfunction-NN_1_7::synapse0x20db6a0() {
   return (neuron0x20c6350()*0.184215);
}

double NNfunction-NN_1_7::synapse0x20db6e0() {
   return (neuron0x20c68b0()*0.706925);
}

double NNfunction-NN_1_7::synapse0x20dbd60() {
   return (neuron0x20c6bf0()*0.400297);
}

double NNfunction-NN_1_7::synapse0x20dbda0() {
   return (neuron0x20c6f30()*0.516044);
}

double NNfunction-NN_1_7::synapse0x20dbde0() {
   return (neuron0x20c7270()*-1.19023);
}

double NNfunction-NN_1_7::synapse0x20dbe20() {
   return (neuron0x20c75b0()*-0.373002);
}

double NNfunction-NN_1_7::synapse0x20dbe60() {
   return (neuron0x20c78f0()*-0.29008);
}

double NNfunction-NN_1_7::synapse0x20dbea0() {
   return (neuron0x20c7c30()*-0.415836);
}

double NNfunction-NN_1_7::synapse0x20dc220() {
   return (neuron0x20c2fe0()*-0.000837194);
}

double NNfunction-NN_1_7::synapse0x20dc260() {
   return (neuron0x20c3290()*0.0337502);
}

double NNfunction-NN_1_7::synapse0x20dc2a0() {
   return (neuron0x20c35d0()*3.52173);
}

double NNfunction-NN_1_7::synapse0x20dc2e0() {
   return (neuron0x20c3910()*0.0138089);
}

double NNfunction-NN_1_7::synapse0x20dc320() {
   return (neuron0x20c3c50()*0.0423764);
}

double NNfunction-NN_1_7::synapse0x20dc360() {
   return (neuron0x20c3f90()*-0.0352321);
}

double NNfunction-NN_1_7::synapse0x20dc3a0() {
   return (neuron0x20c42d0()*0.00228566);
}

double NNfunction-NN_1_7::synapse0x20dc3e0() {
   return (neuron0x20c4610()*-0.00314197);
}

double NNfunction-NN_1_7::synapse0x20dc420() {
   return (neuron0x20c4950()*0.00708045);
}

double NNfunction-NN_1_7::synapse0x20dc460() {
   return (neuron0x20c4c90()*0.023106);
}

double NNfunction-NN_1_7::synapse0x20dc4a0() {
   return (neuron0x20c4fd0()*0.0108533);
}

double NNfunction-NN_1_7::synapse0x20dc4e0() {
   return (neuron0x20c5310()*-0.0907034);
}

double NNfunction-NN_1_7::synapse0x20dc520() {
   return (neuron0x20c5650()*0.141637);
}

double NNfunction-NN_1_7::synapse0x20dc560() {
   return (neuron0x20c5990()*0.0276213);
}

double NNfunction-NN_1_7::synapse0x20dc5a0() {
   return (neuron0x20c5cd0()*0.0219185);
}

double NNfunction-NN_1_7::synapse0x20dc5e0() {
   return (neuron0x20c6010()*-0.00361872);
}

double NNfunction-NN_1_7::synapse0x20dc070() {
   return (neuron0x20c6350()*-0.0103417);
}

double NNfunction-NN_1_7::synapse0x20dc0b0() {
   return (neuron0x20c68b0()*-0.0269102);
}

double NNfunction-NN_1_7::synapse0x20dc730() {
   return (neuron0x20c6bf0()*0.0242887);
}

double NNfunction-NN_1_7::synapse0x20dc770() {
   return (neuron0x20c6f30()*0.0289585);
}

double NNfunction-NN_1_7::synapse0x20dc7b0() {
   return (neuron0x20c7270()*0.0611807);
}

double NNfunction-NN_1_7::synapse0x20dc7f0() {
   return (neuron0x20c75b0()*-0.00408746);
}

double NNfunction-NN_1_7::synapse0x20dc830() {
   return (neuron0x20c78f0()*0.0275584);
}

double NNfunction-NN_1_7::synapse0x20dc870() {
   return (neuron0x20c7c30()*0.0188914);
}

double NNfunction-NN_1_7::synapse0x20dcbf0() {
   return (neuron0x20c2fe0()*0.320882);
}

double NNfunction-NN_1_7::synapse0x20dcc30() {
   return (neuron0x20c3290()*0.0141059);
}

double NNfunction-NN_1_7::synapse0x20dcc70() {
   return (neuron0x20c35d0()*0.0888421);
}

double NNfunction-NN_1_7::synapse0x20dccb0() {
   return (neuron0x20c3910()*0.0199601);
}

double NNfunction-NN_1_7::synapse0x20dccf0() {
   return (neuron0x20c3c50()*-0.0186152);
}

double NNfunction-NN_1_7::synapse0x20dcd30() {
   return (neuron0x20c3f90()*0.0169015);
}

double NNfunction-NN_1_7::synapse0x20dcd70() {
   return (neuron0x20c42d0()*0.0403713);
}

double NNfunction-NN_1_7::synapse0x20dcdb0() {
   return (neuron0x20c4610()*-0.0294457);
}

double NNfunction-NN_1_7::synapse0x20dcdf0() {
   return (neuron0x20c4950()*0.00472358);
}

double NNfunction-NN_1_7::synapse0x20dce30() {
   return (neuron0x20c4c90()*-0.0140153);
}

double NNfunction-NN_1_7::synapse0x20dce70() {
   return (neuron0x20c4fd0()*-0.053787);
}

double NNfunction-NN_1_7::synapse0x20dceb0() {
   return (neuron0x20c5310()*-0.0106487);
}

double NNfunction-NN_1_7::synapse0x20dcef0() {
   return (neuron0x20c5650()*-0.0586049);
}

double NNfunction-NN_1_7::synapse0x20dcf30() {
   return (neuron0x20c5990()*0.0276862);
}

double NNfunction-NN_1_7::synapse0x20dcf70() {
   return (neuron0x20c5cd0()*0.022433);
}

double NNfunction-NN_1_7::synapse0x20dcfb0() {
   return (neuron0x20c6010()*0.0557138);
}

double NNfunction-NN_1_7::synapse0x20dca40() {
   return (neuron0x20c6350()*-0.0203747);
}

double NNfunction-NN_1_7::synapse0x20dca80() {
   return (neuron0x20c68b0()*0.0134028);
}

double NNfunction-NN_1_7::synapse0x20dd100() {
   return (neuron0x20c6bf0()*0.0463589);
}

double NNfunction-NN_1_7::synapse0x20dd140() {
   return (neuron0x20c6f30()*-0.0261911);
}

double NNfunction-NN_1_7::synapse0x20dd180() {
   return (neuron0x20c7270()*0.00917361);
}

double NNfunction-NN_1_7::synapse0x20dd1c0() {
   return (neuron0x20c75b0()*-0.0359053);
}

double NNfunction-NN_1_7::synapse0x20dd200() {
   return (neuron0x20c78f0()*-0.00194842);
}

double NNfunction-NN_1_7::synapse0x20dd240() {
   return (neuron0x20c7c30()*-1.51227);
}

double NNfunction-NN_1_7::synapse0x20dd5c0() {
   return (neuron0x20c2fe0()*-0.0377988);
}

double NNfunction-NN_1_7::synapse0x20dd600() {
   return (neuron0x20c3290()*-0.00426251);
}

double NNfunction-NN_1_7::synapse0x20dd640() {
   return (neuron0x20c35d0()*-0.0615102);
}

double NNfunction-NN_1_7::synapse0x20dd680() {
   return (neuron0x20c3910()*-0.00177591);
}

double NNfunction-NN_1_7::synapse0x20dd6c0() {
   return (neuron0x20c3c50()*0.0124369);
}

double NNfunction-NN_1_7::synapse0x20dd700() {
   return (neuron0x20c3f90()*0.00246506);
}

double NNfunction-NN_1_7::synapse0x20dd740() {
   return (neuron0x20c42d0()*-0.00240329);
}

double NNfunction-NN_1_7::synapse0x20dd780() {
   return (neuron0x20c4610()*0.00243202);
}

double NNfunction-NN_1_7::synapse0x20dd7c0() {
   return (neuron0x20c4950()*0.00781703);
}

double NNfunction-NN_1_7::synapse0x20dd800() {
   return (neuron0x20c4c90()*-0.00333316);
}

double NNfunction-NN_1_7::synapse0x20dd840() {
   return (neuron0x20c4fd0()*0.00812074);
}

double NNfunction-NN_1_7::synapse0x20dd880() {
   return (neuron0x20c5310()*-0.008501);
}

double NNfunction-NN_1_7::synapse0x20dd8c0() {
   return (neuron0x20c5650()*0.00574657);
}

double NNfunction-NN_1_7::synapse0x20dd900() {
   return (neuron0x20c5990()*0.00110318);
}

double NNfunction-NN_1_7::synapse0x20dd940() {
   return (neuron0x20c5cd0()*-0.00174237);
}

double NNfunction-NN_1_7::synapse0x20dd980() {
   return (neuron0x20c6010()*-0.00215903);
}

double NNfunction-NN_1_7::synapse0x20dd410() {
   return (neuron0x20c6350()*0.00263952);
}

double NNfunction-NN_1_7::synapse0x20dd450() {
   return (neuron0x20c68b0()*-0.00272901);
}

double NNfunction-NN_1_7::synapse0x20ddad0() {
   return (neuron0x20c6bf0()*-4.20337e-05);
}

double NNfunction-NN_1_7::synapse0x20ddb10() {
   return (neuron0x20c6f30()*0.00181464);
}

double NNfunction-NN_1_7::synapse0x20ddb50() {
   return (neuron0x20c7270()*0.000424839);
}

double NNfunction-NN_1_7::synapse0x20ddb90() {
   return (neuron0x20c75b0()*0.00709783);
}

double NNfunction-NN_1_7::synapse0x20ddbd0() {
   return (neuron0x20c78f0()*-0.00172896);
}

double NNfunction-NN_1_7::synapse0x20ddc10() {
   return (neuron0x20c7c30()*-17.0834);
}

double NNfunction-NN_1_7::synapse0x20ddf90() {
   return (neuron0x20c2fe0()*0.140046);
}

double NNfunction-NN_1_7::synapse0x20ddfd0() {
   return (neuron0x20c3290()*-0.0449298);
}

double NNfunction-NN_1_7::synapse0x20de010() {
   return (neuron0x20c35d0()*0.104572);
}

double NNfunction-NN_1_7::synapse0x20de050() {
   return (neuron0x20c3910()*0.0537907);
}

double NNfunction-NN_1_7::synapse0x20de090() {
   return (neuron0x20c3c50()*0.0423656);
}

double NNfunction-NN_1_7::synapse0x20de0d0() {
   return (neuron0x20c3f90()*0.054649);
}

double NNfunction-NN_1_7::synapse0x20de110() {
   return (neuron0x20c42d0()*-0.0220517);
}

double NNfunction-NN_1_7::synapse0x20de150() {
   return (neuron0x20c4610()*0.119521);
}

double NNfunction-NN_1_7::synapse0x20de190() {
   return (neuron0x20c4950()*0.0452343);
}

double NNfunction-NN_1_7::synapse0x20de1d0() {
   return (neuron0x20c4c90()*0.012587);
}

double NNfunction-NN_1_7::synapse0x20de210() {
   return (neuron0x20c4fd0()*0.00277599);
}

double NNfunction-NN_1_7::synapse0x20de250() {
   return (neuron0x20c5310()*0.204515);
}

double NNfunction-NN_1_7::synapse0x20de290() {
   return (neuron0x20c5650()*-0.0445994);
}

double NNfunction-NN_1_7::synapse0x20de2d0() {
   return (neuron0x20c5990()*-0.0845144);
}

double NNfunction-NN_1_7::synapse0x20de310() {
   return (neuron0x20c5cd0()*0.0292757);
}

double NNfunction-NN_1_7::synapse0x20de350() {
   return (neuron0x20c6010()*-0.0751083);
}

double NNfunction-NN_1_7::synapse0x20ddde0() {
   return (neuron0x20c6350()*-0.132056);
}

double NNfunction-NN_1_7::synapse0x20dde20() {
   return (neuron0x20c68b0()*0.0478588);
}

double NNfunction-NN_1_7::synapse0x20de4a0() {
   return (neuron0x20c6bf0()*-0.0120323);
}

double NNfunction-NN_1_7::synapse0x20de4e0() {
   return (neuron0x20c6f30()*-0.000455474);
}

double NNfunction-NN_1_7::synapse0x20de520() {
   return (neuron0x20c7270()*-0.00308358);
}

double NNfunction-NN_1_7::synapse0x20de560() {
   return (neuron0x20c75b0()*0.00421732);
}

double NNfunction-NN_1_7::synapse0x20de5a0() {
   return (neuron0x20c78f0()*-0.106936);
}

double NNfunction-NN_1_7::synapse0x20de5e0() {
   return (neuron0x20c7c30()*-2.77975);
}

double NNfunction-NN_1_7::synapse0x20de960() {
   return (neuron0x20c2fe0()*-0.412391);
}

double NNfunction-NN_1_7::synapse0x20d2f30() {
   return (neuron0x20c3290()*-0.0434844);
}

double NNfunction-NN_1_7::synapse0x20d2f70() {
   return (neuron0x20c35d0()*0.449215);
}

double NNfunction-NN_1_7::synapse0x20d2fb0() {
   return (neuron0x20c3910()*0.152538);
}

double NNfunction-NN_1_7::synapse0x20d3200() {
   return (neuron0x20c3c50()*0.333937);
}

double NNfunction-NN_1_7::synapse0x20d3240() {
   return (neuron0x20c3f90()*-0.13399);
}

double NNfunction-NN_1_7::synapse0x20d3280() {
   return (neuron0x20c42d0()*0.295688);
}

double NNfunction-NN_1_7::synapse0x20d34d0() {
   return (neuron0x20c4610()*0.0333185);
}

double NNfunction-NN_1_7::synapse0x20d3510() {
   return (neuron0x20c4950()*-0.0112361);
}

double NNfunction-NN_1_7::synapse0x20d3760() {
   return (neuron0x20c4c90()*-0.0841414);
}

double NNfunction-NN_1_7::synapse0x20d37a0() {
   return (neuron0x20c4fd0()*-0.450446);
}

double NNfunction-NN_1_7::synapse0x20d37e0() {
   return (neuron0x20c5310()*0.684674);
}

double NNfunction-NN_1_7::synapse0x20d3a30() {
   return (neuron0x20c5650()*-0.395838);
}

double NNfunction-NN_1_7::synapse0x20d3a70() {
   return (neuron0x20c5990()*-0.193257);
}

double NNfunction-NN_1_7::synapse0x20d3cc0() {
   return (neuron0x20c5cd0()*0.488803);
}

double NNfunction-NN_1_7::synapse0x20d3d00() {
   return (neuron0x20c6010()*0.321439);
}

double NNfunction-NN_1_7::synapse0x20de7b0() {
   return (neuron0x20c6350()*0.477272);
}

double NNfunction-NN_1_7::synapse0x20de7f0() {
   return (neuron0x20c68b0()*-0.0711343);
}

double NNfunction-NN_1_7::synapse0x20d3e50() {
   return (neuron0x20c6bf0()*-0.353178);
}

double NNfunction-NN_1_7::synapse0x20d4360() {
   return (neuron0x20c6f30()*-0.690219);
}

double NNfunction-NN_1_7::synapse0x20d43a0() {
   return (neuron0x20c7270()*0.474515);
}

double NNfunction-NN_1_7::synapse0x20d43e0() {
   return (neuron0x20c75b0()*0.473125);
}

double NNfunction-NN_1_7::synapse0x20d4630() {
   return (neuron0x20c78f0()*0.351774);
}

double NNfunction-NN_1_7::synapse0x20d4670() {
   return (neuron0x20c7c30()*0.0747235);
}

double NNfunction-NN_1_7::synapse0x20d3f20() {
   return (neuron0x20c2fe0()*0.181601);
}

double NNfunction-NN_1_7::synapse0x20d3f60() {
   return (neuron0x20c3290()*-0.0388088);
}

double NNfunction-NN_1_7::synapse0x20d3fa0() {
   return (neuron0x20c35d0()*-0.4048);
}

double NNfunction-NN_1_7::synapse0x20d3fe0() {
   return (neuron0x20c3910()*0.049308);
}

double NNfunction-NN_1_7::synapse0x20d4960() {
   return (neuron0x20c3c50()*-0.187811);
}

double NNfunction-NN_1_7::synapse0x20e0cb0() {
   return (neuron0x20c3f90()*0.313699);
}

double NNfunction-NN_1_7::synapse0x20e0cf0() {
   return (neuron0x20c42d0()*0.267139);
}

double NNfunction-NN_1_7::synapse0x20e0d30() {
   return (neuron0x20c4610()*-0.267086);
}

double NNfunction-NN_1_7::synapse0x20e0d70() {
   return (neuron0x20c4950()*-0.00620671);
}

double NNfunction-NN_1_7::synapse0x20e0db0() {
   return (neuron0x20c4c90()*0.324121);
}

double NNfunction-NN_1_7::synapse0x20e0df0() {
   return (neuron0x20c4fd0()*-0.067528);
}

double NNfunction-NN_1_7::synapse0x20e0e30() {
   return (neuron0x20c5310()*1.18126);
}

double NNfunction-NN_1_7::synapse0x20e0e70() {
   return (neuron0x20c5650()*0.124922);
}

double NNfunction-NN_1_7::synapse0x20e0eb0() {
   return (neuron0x20c5990()*0.275744);
}

double NNfunction-NN_1_7::synapse0x20e0ef0() {
   return (neuron0x20c5cd0()*-0.390775);
}

double NNfunction-NN_1_7::synapse0x20e0f30() {
   return (neuron0x20c6010()*-0.365894);
}

double NNfunction-NN_1_7::synapse0x20d4840() {
   return (neuron0x20c6350()*-0.31549);
}

double NNfunction-NN_1_7::synapse0x20d4880() {
   return (neuron0x20c68b0()*-0.0769434);
}

double NNfunction-NN_1_7::synapse0x20e1080() {
   return (neuron0x20c6bf0()*0.524871);
}

double NNfunction-NN_1_7::synapse0x20e10c0() {
   return (neuron0x20c6f30()*0.400826);
}

double NNfunction-NN_1_7::synapse0x20e1100() {
   return (neuron0x20c7270()*0.0985613);
}

double NNfunction-NN_1_7::synapse0x20e1140() {
   return (neuron0x20c75b0()*-0.0341905);
}

double NNfunction-NN_1_7::synapse0x20e1180() {
   return (neuron0x20c78f0()*0.267929);
}

double NNfunction-NN_1_7::synapse0x20e11c0() {
   return (neuron0x20c7c30()*-0.00890266);
}

double NNfunction-NN_1_7::synapse0x20e1540() {
   return (neuron0x20c2fe0()*-0.0312497);
}

double NNfunction-NN_1_7::synapse0x20e1580() {
   return (neuron0x20c3290()*-0.00341852);
}

double NNfunction-NN_1_7::synapse0x20e15c0() {
   return (neuron0x20c35d0()*-0.270704);
}

double NNfunction-NN_1_7::synapse0x20e1600() {
   return (neuron0x20c3910()*-0.0137655);
}

double NNfunction-NN_1_7::synapse0x20e1640() {
   return (neuron0x20c3c50()*-0.0137971);
}

double NNfunction-NN_1_7::synapse0x20e1680() {
   return (neuron0x20c3f90()*0.0272448);
}

double NNfunction-NN_1_7::synapse0x20e16c0() {
   return (neuron0x20c42d0()*-0.016001);
}

double NNfunction-NN_1_7::synapse0x20e1700() {
   return (neuron0x20c4610()*-0.0243319);
}

double NNfunction-NN_1_7::synapse0x20e1740() {
   return (neuron0x20c4950()*-0.00801121);
}

double NNfunction-NN_1_7::synapse0x20e1780() {
   return (neuron0x20c4c90()*0.00104937);
}

double NNfunction-NN_1_7::synapse0x20e17c0() {
   return (neuron0x20c4fd0()*0.00786632);
}

double NNfunction-NN_1_7::synapse0x20e1800() {
   return (neuron0x20c5310()*-0.236565);
}

double NNfunction-NN_1_7::synapse0x20e1840() {
   return (neuron0x20c5650()*0.0726138);
}

double NNfunction-NN_1_7::synapse0x20e1880() {
   return (neuron0x20c5990()*-0.0189669);
}

double NNfunction-NN_1_7::synapse0x20e18c0() {
   return (neuron0x20c5cd0()*-0.0286114);
}

double NNfunction-NN_1_7::synapse0x20e1900() {
   return (neuron0x20c6010()*-0.0170987);
}

double NNfunction-NN_1_7::synapse0x20e1390() {
   return (neuron0x20c6350()*0.00780409);
}

double NNfunction-NN_1_7::synapse0x20e13d0() {
   return (neuron0x20c68b0()*-0.00458167);
}

double NNfunction-NN_1_7::synapse0x20e1a50() {
   return (neuron0x20c6bf0()*-0.0349745);
}

double NNfunction-NN_1_7::synapse0x20e1a90() {
   return (neuron0x20c6f30()*0.0543356);
}

double NNfunction-NN_1_7::synapse0x20e1ad0() {
   return (neuron0x20c7270()*0.0203234);
}

double NNfunction-NN_1_7::synapse0x20e1b10() {
   return (neuron0x20c75b0()*0.0345116);
}

double NNfunction-NN_1_7::synapse0x20e1b50() {
   return (neuron0x20c78f0()*0.0232442);
}

double NNfunction-NN_1_7::synapse0x20e1b90() {
   return (neuron0x20c7c30()*6.92473);
}

double NNfunction-NN_1_7::synapse0x20e1f10() {
   return (neuron0x20c2fe0()*-0.0141865);
}

double NNfunction-NN_1_7::synapse0x20e1f50() {
   return (neuron0x20c3290()*0.0148552);
}

double NNfunction-NN_1_7::synapse0x20e1f90() {
   return (neuron0x20c35d0()*0.030075);
}

double NNfunction-NN_1_7::synapse0x20e1fd0() {
   return (neuron0x20c3910()*-0.0275981);
}

double NNfunction-NN_1_7::synapse0x20e2010() {
   return (neuron0x20c3c50()*-0.0134048);
}

double NNfunction-NN_1_7::synapse0x20e2050() {
   return (neuron0x20c3f90()*-0.0133793);
}

double NNfunction-NN_1_7::synapse0x20e2090() {
   return (neuron0x20c42d0()*0.00544886);
}

double NNfunction-NN_1_7::synapse0x20e20d0() {
   return (neuron0x20c4610()*-0.144885);
}

double NNfunction-NN_1_7::synapse0x20e2110() {
   return (neuron0x20c4950()*0.00407576);
}

double NNfunction-NN_1_7::synapse0x20e2150() {
   return (neuron0x20c4c90()*0.036591);
}

double NNfunction-NN_1_7::synapse0x20e2190() {
   return (neuron0x20c4fd0()*0.01752);
}

double NNfunction-NN_1_7::synapse0x20e21d0() {
   return (neuron0x20c5310()*0.0618175);
}

double NNfunction-NN_1_7::synapse0x20e2210() {
   return (neuron0x20c5650()*-0.0246879);
}

double NNfunction-NN_1_7::synapse0x20e2250() {
   return (neuron0x20c5990()*0.00713588);
}

double NNfunction-NN_1_7::synapse0x20e2290() {
   return (neuron0x20c5cd0()*0.0433828);
}

double NNfunction-NN_1_7::synapse0x20e22d0() {
   return (neuron0x20c6010()*0.060311);
}

double NNfunction-NN_1_7::synapse0x20e1d60() {
   return (neuron0x20c6350()*0.0526095);
}

double NNfunction-NN_1_7::synapse0x20e1da0() {
   return (neuron0x20c68b0()*0.0070635);
}

double NNfunction-NN_1_7::synapse0x20e2420() {
   return (neuron0x20c6bf0()*-0.0165782);
}

double NNfunction-NN_1_7::synapse0x20e2460() {
   return (neuron0x20c6f30()*-0.0267874);
}

double NNfunction-NN_1_7::synapse0x20e24a0() {
   return (neuron0x20c7270()*0.0116566);
}

double NNfunction-NN_1_7::synapse0x20e24e0() {
   return (neuron0x20c75b0()*-0.0178866);
}

double NNfunction-NN_1_7::synapse0x20e2520() {
   return (neuron0x20c78f0()*0.0110165);
}

double NNfunction-NN_1_7::synapse0x20e2560() {
   return (neuron0x20c7c30()*-3.73308);
}

double NNfunction-NN_1_7::synapse0x20e28e0() {
   return (neuron0x20c2fe0()*-0.0146987);
}

double NNfunction-NN_1_7::synapse0x20e2920() {
   return (neuron0x20c3290()*0.00100169);
}

double NNfunction-NN_1_7::synapse0x20e2960() {
   return (neuron0x20c35d0()*9.02909);
}

double NNfunction-NN_1_7::synapse0x20e29a0() {
   return (neuron0x20c3910()*8.16273e-05);
}

double NNfunction-NN_1_7::synapse0x20e29e0() {
   return (neuron0x20c3c50()*0.000864177);
}

double NNfunction-NN_1_7::synapse0x20e2a20() {
   return (neuron0x20c3f90()*-0.0161518);
}

double NNfunction-NN_1_7::synapse0x20e2a60() {
   return (neuron0x20c42d0()*-0.00338965);
}

double NNfunction-NN_1_7::synapse0x20e2aa0() {
   return (neuron0x20c4610()*0.00218325);
}

double NNfunction-NN_1_7::synapse0x20e2ae0() {
   return (neuron0x20c4950()*0.00694395);
}

double NNfunction-NN_1_7::synapse0x20e2b20() {
   return (neuron0x20c4c90()*0.00580146);
}

double NNfunction-NN_1_7::synapse0x20e2b60() {
   return (neuron0x20c4fd0()*0.010333);
}

double NNfunction-NN_1_7::synapse0x20e2ba0() {
   return (neuron0x20c5310()*-0.0254882);
}

double NNfunction-NN_1_7::synapse0x20e2be0() {
   return (neuron0x20c5650()*0.0247154);
}

double NNfunction-NN_1_7::synapse0x20e2c20() {
   return (neuron0x20c5990()*0.00323681);
}

double NNfunction-NN_1_7::synapse0x20e2c60() {
   return (neuron0x20c5cd0()*0.00904863);
}

double NNfunction-NN_1_7::synapse0x20e2ca0() {
   return (neuron0x20c6010()*0.00158293);
}

double NNfunction-NN_1_7::synapse0x20e2730() {
   return (neuron0x20c6350()*0.000454999);
}

double NNfunction-NN_1_7::synapse0x20e2770() {
   return (neuron0x20c68b0()*-0.0151254);
}

double NNfunction-NN_1_7::synapse0x20e2df0() {
   return (neuron0x20c6bf0()*-0.0157735);
}

double NNfunction-NN_1_7::synapse0x20e2e30() {
   return (neuron0x20c6f30()*-0.00791386);
}

double NNfunction-NN_1_7::synapse0x20e2e70() {
   return (neuron0x20c7270()*0.00663306);
}

double NNfunction-NN_1_7::synapse0x20e2eb0() {
   return (neuron0x20c75b0()*0.00677673);
}

double NNfunction-NN_1_7::synapse0x20e2ef0() {
   return (neuron0x20c78f0()*0.0108923);
}

double NNfunction-NN_1_7::synapse0x20e2f30() {
   return (neuron0x20c7c30()*0.00079273);
}

double NNfunction-NN_1_7::synapse0x20e32b0() {
   return (neuron0x20c2fe0()*0.133642);
}

double NNfunction-NN_1_7::synapse0x20e32f0() {
   return (neuron0x20c3290()*0.0342846);
}

double NNfunction-NN_1_7::synapse0x20e3330() {
   return (neuron0x20c35d0()*0.467846);
}

double NNfunction-NN_1_7::synapse0x20e3370() {
   return (neuron0x20c3910()*-0.0979216);
}

double NNfunction-NN_1_7::synapse0x20e33b0() {
   return (neuron0x20c3c50()*-0.349829);
}

double NNfunction-NN_1_7::synapse0x20e33f0() {
   return (neuron0x20c3f90()*0.476982);
}

double NNfunction-NN_1_7::synapse0x20e3430() {
   return (neuron0x20c42d0()*-0.264185);
}

double NNfunction-NN_1_7::synapse0x20e3470() {
   return (neuron0x20c4610()*0.104993);
}

double NNfunction-NN_1_7::synapse0x20e34b0() {
   return (neuron0x20c4950()*0.455091);
}

double NNfunction-NN_1_7::synapse0x20e34f0() {
   return (neuron0x20c4c90()*-0.0334373);
}

double NNfunction-NN_1_7::synapse0x20e3530() {
   return (neuron0x20c4fd0()*-0.136299);
}

double NNfunction-NN_1_7::synapse0x20e3570() {
   return (neuron0x20c5310()*1.16535);
}

double NNfunction-NN_1_7::synapse0x20e35b0() {
   return (neuron0x20c5650()*-0.0309582);
}

double NNfunction-NN_1_7::synapse0x20e35f0() {
   return (neuron0x20c5990()*-0.260597);
}

double NNfunction-NN_1_7::synapse0x20e3630() {
   return (neuron0x20c5cd0()*-0.226475);
}

double NNfunction-NN_1_7::synapse0x20e3670() {
   return (neuron0x20c6010()*-0.57855);
}

double NNfunction-NN_1_7::synapse0x20e3100() {
   return (neuron0x20c6350()*0.148224);
}

double NNfunction-NN_1_7::synapse0x20e3140() {
   return (neuron0x20c68b0()*-0.318133);
}

double NNfunction-NN_1_7::synapse0x20e37c0() {
   return (neuron0x20c6bf0()*0.245912);
}

double NNfunction-NN_1_7::synapse0x20e3800() {
   return (neuron0x20c6f30()*-0.155739);
}

double NNfunction-NN_1_7::synapse0x20e3840() {
   return (neuron0x20c7270()*0.171979);
}

double NNfunction-NN_1_7::synapse0x20e3880() {
   return (neuron0x20c75b0()*-0.303825);
}

double NNfunction-NN_1_7::synapse0x20e38c0() {
   return (neuron0x20c78f0()*-0.424291);
}

double NNfunction-NN_1_7::synapse0x20e3900() {
   return (neuron0x20c7c30()*-0.514499);
}

double NNfunction-NN_1_7::synapse0x20e3c80() {
   return (neuron0x20c2fe0()*0.0549629);
}

double NNfunction-NN_1_7::synapse0x20e3cc0() {
   return (neuron0x20c3290()*-0.00539221);
}

double NNfunction-NN_1_7::synapse0x20e3d00() {
   return (neuron0x20c35d0()*0.408421);
}

double NNfunction-NN_1_7::synapse0x20e3d40() {
   return (neuron0x20c3910()*-0.0197196);
}

double NNfunction-NN_1_7::synapse0x20e3d80() {
   return (neuron0x20c3c50()*0.00360984);
}

double NNfunction-NN_1_7::synapse0x20e3dc0() {
   return (neuron0x20c3f90()*0.0256308);
}

double NNfunction-NN_1_7::synapse0x20e3e00() {
   return (neuron0x20c42d0()*-0.0138447);
}

double NNfunction-NN_1_7::synapse0x20e3e40() {
   return (neuron0x20c4610()*0.0156243);
}

double NNfunction-NN_1_7::synapse0x20e3e80() {
   return (neuron0x20c4950()*-0.0084627);
}

double NNfunction-NN_1_7::synapse0x20e3ec0() {
   return (neuron0x20c4c90()*-0.0123448);
}

double NNfunction-NN_1_7::synapse0x20e3f00() {
   return (neuron0x20c4fd0()*0.0362938);
}

double NNfunction-NN_1_7::synapse0x20e3f40() {
   return (neuron0x20c5310()*0.113039);
}

double NNfunction-NN_1_7::synapse0x20e3f80() {
   return (neuron0x20c5650()*-0.026609);
}

double NNfunction-NN_1_7::synapse0x20e3fc0() {
   return (neuron0x20c5990()*-0.0273558);
}

double NNfunction-NN_1_7::synapse0x20e4000() {
   return (neuron0x20c5cd0()*-0.0107155);
}

double NNfunction-NN_1_7::synapse0x20e4040() {
   return (neuron0x20c6010()*-0.0143436);
}

double NNfunction-NN_1_7::synapse0x20e3ad0() {
   return (neuron0x20c6350()*-0.0167001);
}

double NNfunction-NN_1_7::synapse0x20e3b10() {
   return (neuron0x20c68b0()*-0.00795382);
}

double NNfunction-NN_1_7::synapse0x20e4190() {
   return (neuron0x20c6bf0()*0.0166001);
}

double NNfunction-NN_1_7::synapse0x20e41d0() {
   return (neuron0x20c6f30()*-0.0115207);
}

double NNfunction-NN_1_7::synapse0x20e4210() {
   return (neuron0x20c7270()*0.0400955);
}

double NNfunction-NN_1_7::synapse0x20e4250() {
   return (neuron0x20c75b0()*-0.0133316);
}

double NNfunction-NN_1_7::synapse0x20e4290() {
   return (neuron0x20c78f0()*-0.0286009);
}

double NNfunction-NN_1_7::synapse0x20e42d0() {
   return (neuron0x20c7c30()*5.43736);
}

double NNfunction-NN_1_7::synapse0x20e4650() {
   return (neuron0x20c2fe0()*-0.0310915);
}

double NNfunction-NN_1_7::synapse0x20e4690() {
   return (neuron0x20c3290()*-0.0898597);
}

double NNfunction-NN_1_7::synapse0x20e46d0() {
   return (neuron0x20c35d0()*0.345271);
}

double NNfunction-NN_1_7::synapse0x20e4710() {
   return (neuron0x20c3910()*0.397358);
}

double NNfunction-NN_1_7::synapse0x20e4750() {
   return (neuron0x20c3c50()*-0.141036);
}

double NNfunction-NN_1_7::synapse0x20e4790() {
   return (neuron0x20c3f90()*-0.402971);
}

double NNfunction-NN_1_7::synapse0x20e47d0() {
   return (neuron0x20c42d0()*0.284938);
}

double NNfunction-NN_1_7::synapse0x20e4810() {
   return (neuron0x20c4610()*-0.218133);
}

double NNfunction-NN_1_7::synapse0x20e4850() {
   return (neuron0x20c4950()*-0.000199731);
}

double NNfunction-NN_1_7::synapse0x20e4890() {
   return (neuron0x20c4c90()*0.428481);
}

double NNfunction-NN_1_7::synapse0x20e48d0() {
   return (neuron0x20c4fd0()*-0.111721);
}

double NNfunction-NN_1_7::synapse0x20e4910() {
   return (neuron0x20c5310()*-0.00479383);
}

double NNfunction-NN_1_7::synapse0x20e4950() {
   return (neuron0x20c5650()*0.269119);
}

double NNfunction-NN_1_7::synapse0x20e4990() {
   return (neuron0x20c5990()*0.81318);
}

double NNfunction-NN_1_7::synapse0x20e49d0() {
   return (neuron0x20c5cd0()*-0.137548);
}

double NNfunction-NN_1_7::synapse0x20e4a10() {
   return (neuron0x20c6010()*-0.12);
}

double NNfunction-NN_1_7::synapse0x20e44a0() {
   return (neuron0x20c6350()*-0.0105179);
}

double NNfunction-NN_1_7::synapse0x20e44e0() {
   return (neuron0x20c68b0()*-0.479556);
}

double NNfunction-NN_1_7::synapse0x20e4b60() {
   return (neuron0x20c6bf0()*0.411834);
}

double NNfunction-NN_1_7::synapse0x20e4ba0() {
   return (neuron0x20c6f30()*-0.140316);
}

double NNfunction-NN_1_7::synapse0x20e4be0() {
   return (neuron0x20c7270()*0.299189);
}

double NNfunction-NN_1_7::synapse0x20e4c20() {
   return (neuron0x20c75b0()*0.327402);
}

double NNfunction-NN_1_7::synapse0x20e4c60() {
   return (neuron0x20c78f0()*-0.371679);
}

double NNfunction-NN_1_7::synapse0x20e4ca0() {
   return (neuron0x20c7c30()*-0.00670425);
}

double NNfunction-NN_1_7::synapse0x20e5020() {
   return (neuron0x20c2fe0()*0.576514);
}

double NNfunction-NN_1_7::synapse0x20e5060() {
   return (neuron0x20c3290()*-0.0624552);
}

double NNfunction-NN_1_7::synapse0x20e50a0() {
   return (neuron0x20c35d0()*1.1572);
}

double NNfunction-NN_1_7::synapse0x20e50e0() {
   return (neuron0x20c3910()*0.256413);
}

double NNfunction-NN_1_7::synapse0x20e5120() {
   return (neuron0x20c3c50()*0.869412);
}

double NNfunction-NN_1_7::synapse0x20e5160() {
   return (neuron0x20c3f90()*-0.239936);
}

double NNfunction-NN_1_7::synapse0x20e51a0() {
   return (neuron0x20c42d0()*0.304359);
}

double NNfunction-NN_1_7::synapse0x20e51e0() {
   return (neuron0x20c4610()*0.391203);
}

double NNfunction-NN_1_7::synapse0x20e5220() {
   return (neuron0x20c4950()*-0.232355);
}

double NNfunction-NN_1_7::synapse0x20e5260() {
   return (neuron0x20c4c90()*-0.406074);
}

double NNfunction-NN_1_7::synapse0x20e52a0() {
   return (neuron0x20c4fd0()*-0.397899);
}

double NNfunction-NN_1_7::synapse0x20e52e0() {
   return (neuron0x20c5310()*0.373517);
}

double NNfunction-NN_1_7::synapse0x20e5320() {
   return (neuron0x20c5650()*-0.189112);
}

double NNfunction-NN_1_7::synapse0x20e5360() {
   return (neuron0x20c5990()*-0.565438);
}

double NNfunction-NN_1_7::synapse0x20e53a0() {
   return (neuron0x20c5cd0()*0.462048);
}

double NNfunction-NN_1_7::synapse0x20e53e0() {
   return (neuron0x20c6010()*0.0763105);
}

double NNfunction-NN_1_7::synapse0x20e4e70() {
   return (neuron0x20c6350()*-0.346563);
}

double NNfunction-NN_1_7::synapse0x20e4eb0() {
   return (neuron0x20c68b0()*0.0735145);
}

double NNfunction-NN_1_7::synapse0x20e5530() {
   return (neuron0x20c6bf0()*0.4002);
}

double NNfunction-NN_1_7::synapse0x20e5570() {
   return (neuron0x20c6f30()*0.044444);
}

double NNfunction-NN_1_7::synapse0x20e55b0() {
   return (neuron0x20c7270()*0.134453);
}

double NNfunction-NN_1_7::synapse0x20e55f0() {
   return (neuron0x20c75b0()*-0.0815272);
}

double NNfunction-NN_1_7::synapse0x20e5630() {
   return (neuron0x20c78f0()*-0.405267);
}

double NNfunction-NN_1_7::synapse0x20e5670() {
   return (neuron0x20c7c30()*-1.10595);
}

double NNfunction-NN_1_7::synapse0x20ce120() {
   return (neuron0x20c2fe0()*-0.00058804);
}

double NNfunction-NN_1_7::synapse0x20ce160() {
   return (neuron0x20c3290()*-9.9946);
}

double NNfunction-NN_1_7::synapse0x20ce1a0() {
   return (neuron0x20c35d0()*0.56502);
}

double NNfunction-NN_1_7::synapse0x20ce1e0() {
   return (neuron0x20c3910()*0.0333187);
}

double NNfunction-NN_1_7::synapse0x20ce220() {
   return (neuron0x20c3c50()*-0.0178563);
}

double NNfunction-NN_1_7::synapse0x20ce260() {
   return (neuron0x20c3f90()*-0.0265369);
}

double NNfunction-NN_1_7::synapse0x20ce2a0() {
   return (neuron0x20c42d0()*0.0106311);
}

double NNfunction-NN_1_7::synapse0x20ce2e0() {
   return (neuron0x20c4610()*-0.00792708);
}

double NNfunction-NN_1_7::synapse0x20e5e00() {
   return (neuron0x20c4950()*-0.020196);
}

double NNfunction-NN_1_7::synapse0x20e5e40() {
   return (neuron0x20c4c90()*-0.0509583);
}

double NNfunction-NN_1_7::synapse0x20e5e80() {
   return (neuron0x20c4fd0()*-0.0094756);
}

double NNfunction-NN_1_7::synapse0x20e5ec0() {
   return (neuron0x20c5310()*-0.078406);
}

double NNfunction-NN_1_7::synapse0x20e5f00() {
   return (neuron0x20c5650()*0.000885174);
}

double NNfunction-NN_1_7::synapse0x20e5f40() {
   return (neuron0x20c5990()*0.0234135);
}

double NNfunction-NN_1_7::synapse0x20e5f80() {
   return (neuron0x20c5cd0()*-0.0102864);
}

double NNfunction-NN_1_7::synapse0x20e5fc0() {
   return (neuron0x20c6010()*-0.0235274);
}

double NNfunction-NN_1_7::synapse0x20e5840() {
   return (neuron0x20c6350()*-0.0753352);
}

double NNfunction-NN_1_7::synapse0x20e5880() {
   return (neuron0x20c68b0()*0.00293129);
}

double NNfunction-NN_1_7::synapse0x20e6110() {
   return (neuron0x20c6bf0()*-0.00242699);
}

double NNfunction-NN_1_7::synapse0x20e6150() {
   return (neuron0x20c6f30()*-0.00389099);
}

double NNfunction-NN_1_7::synapse0x20e6190() {
   return (neuron0x20c7270()*0.00251659);
}

double NNfunction-NN_1_7::synapse0x20e61d0() {
   return (neuron0x20c75b0()*-0.00378052);
}

double NNfunction-NN_1_7::synapse0x20e6210() {
   return (neuron0x20c78f0()*0.0123152);
}

double NNfunction-NN_1_7::synapse0x20e6250() {
   return (neuron0x20c7c30()*1.58672);
}

double NNfunction-NN_1_7::synapse0x20e65d0() {
   return (neuron0x20c2fe0()*-0.000397664);
}

double NNfunction-NN_1_7::synapse0x20e6610() {
   return (neuron0x20c3290()*-24.6458);
}

double NNfunction-NN_1_7::synapse0x20e6650() {
   return (neuron0x20c35d0()*4.14514);
}

double NNfunction-NN_1_7::synapse0x20e6690() {
   return (neuron0x20c3910()*0.0320711);
}

double NNfunction-NN_1_7::synapse0x20e66d0() {
   return (neuron0x20c3c50()*0.00416371);
}

double NNfunction-NN_1_7::synapse0x20e6710() {
   return (neuron0x20c3f90()*-0.0282765);
}

double NNfunction-NN_1_7::synapse0x20e6750() {
   return (neuron0x20c42d0()*0.00840873);
}

double NNfunction-NN_1_7::synapse0x20e6790() {
   return (neuron0x20c4610()*-0.0251751);
}

double NNfunction-NN_1_7::synapse0x20e67d0() {
   return (neuron0x20c4950()*-0.0195973);
}

double NNfunction-NN_1_7::synapse0x20e6810() {
   return (neuron0x20c4c90()*-0.0246431);
}

double NNfunction-NN_1_7::synapse0x20e6850() {
   return (neuron0x20c4fd0()*0.0130951);
}

double NNfunction-NN_1_7::synapse0x20e6890() {
   return (neuron0x20c5310()*0.00451364);
}

double NNfunction-NN_1_7::synapse0x20e68d0() {
   return (neuron0x20c5650()*-0.0102899);
}

double NNfunction-NN_1_7::synapse0x20e6910() {
   return (neuron0x20c5990()*0.0418079);
}

double NNfunction-NN_1_7::synapse0x20e6950() {
   return (neuron0x20c5cd0()*-0.0149452);
}

double NNfunction-NN_1_7::synapse0x20e6990() {
   return (neuron0x20c6010()*-0.0503881);
}

double NNfunction-NN_1_7::synapse0x20e6420() {
   return (neuron0x20c6350()*-0.0172652);
}

double NNfunction-NN_1_7::synapse0x20e6460() {
   return (neuron0x20c68b0()*0.0288255);
}

double NNfunction-NN_1_7::synapse0x20e6ae0() {
   return (neuron0x20c6bf0()*0.0407945);
}

double NNfunction-NN_1_7::synapse0x20e6b20() {
   return (neuron0x20c6f30()*0.00360715);
}

double NNfunction-NN_1_7::synapse0x20e6b60() {
   return (neuron0x20c7270()*0.0296195);
}

double NNfunction-NN_1_7::synapse0x20e6ba0() {
   return (neuron0x20c75b0()*-0.0223396);
}

double NNfunction-NN_1_7::synapse0x20e6be0() {
   return (neuron0x20c78f0()*0.020729);
}

double NNfunction-NN_1_7::synapse0x20e6c20() {
   return (neuron0x20c7c30()*-0.0690619);
}

double NNfunction-NN_1_7::synapse0x20e6fa0() {
   return (neuron0x20c2fe0()*0.00825786);
}

double NNfunction-NN_1_7::synapse0x20e6fe0() {
   return (neuron0x20c3290()*0.0207622);
}

double NNfunction-NN_1_7::synapse0x20e7020() {
   return (neuron0x20c35d0()*0.0156543);
}

double NNfunction-NN_1_7::synapse0x20e7060() {
   return (neuron0x20c3910()*0.0246121);
}

double NNfunction-NN_1_7::synapse0x20e70a0() {
   return (neuron0x20c3c50()*-0.00127992);
}

double NNfunction-NN_1_7::synapse0x20e70e0() {
   return (neuron0x20c3f90()*-0.00781518);
}

double NNfunction-NN_1_7::synapse0x20e7120() {
   return (neuron0x20c42d0()*0.0214435);
}

double NNfunction-NN_1_7::synapse0x20e7160() {
   return (neuron0x20c4610()*-0.0567822);
}

double NNfunction-NN_1_7::synapse0x20e71a0() {
   return (neuron0x20c4950()*-0.00338781);
}

double NNfunction-NN_1_7::synapse0x20e71e0() {
   return (neuron0x20c4c90()*0.00263818);
}

double NNfunction-NN_1_7::synapse0x20e7220() {
   return (neuron0x20c4fd0()*-0.0216613);
}

double NNfunction-NN_1_7::synapse0x20e7260() {
   return (neuron0x20c5310()*-0.074106);
}

double NNfunction-NN_1_7::synapse0x20e72a0() {
   return (neuron0x20c5650()*-0.0118752);
}

double NNfunction-NN_1_7::synapse0x20e72e0() {
   return (neuron0x20c5990()*0.0206128);
}

double NNfunction-NN_1_7::synapse0x20e7320() {
   return (neuron0x20c5cd0()*0.0269924);
}

double NNfunction-NN_1_7::synapse0x20e7360() {
   return (neuron0x20c6010()*0.0425419);
}

double NNfunction-NN_1_7::synapse0x20e6df0() {
   return (neuron0x20c6350()*0.0540332);
}

double NNfunction-NN_1_7::synapse0x20e6e30() {
   return (neuron0x20c68b0()*-0.0319572);
}

double NNfunction-NN_1_7::synapse0x20d7960() {
   return (neuron0x20c6bf0()*-0.00940765);
}

double NNfunction-NN_1_7::synapse0x20d79a0() {
   return (neuron0x20c6f30()*-0.00788893);
}

double NNfunction-NN_1_7::synapse0x20d79e0() {
   return (neuron0x20c7270()*-0.0204464);
}

double NNfunction-NN_1_7::synapse0x20d7a20() {
   return (neuron0x20c75b0()*0.00842833);
}

double NNfunction-NN_1_7::synapse0x20d7a60() {
   return (neuron0x20c78f0()*0.0199479);
}

double NNfunction-NN_1_7::synapse0x20d7aa0() {
   return (neuron0x20c7c30()*-8.36449);
}

double NNfunction-NN_1_7::synapse0x20d7e20() {
   return (neuron0x20c2fe0()*-0.0219551);
}

double NNfunction-NN_1_7::synapse0x20d7e60() {
   return (neuron0x20c3290()*-15.8285);
}

double NNfunction-NN_1_7::synapse0x20d7ea0() {
   return (neuron0x20c35d0()*-0.404606);
}

double NNfunction-NN_1_7::synapse0x20d7ee0() {
   return (neuron0x20c3910()*0.021963);
}

double NNfunction-NN_1_7::synapse0x20d7f20() {
   return (neuron0x20c3c50()*0.0032343);
}

double NNfunction-NN_1_7::synapse0x20d7f60() {
   return (neuron0x20c3f90()*-0.0281254);
}

double NNfunction-NN_1_7::synapse0x20d7fa0() {
   return (neuron0x20c42d0()*0.0180903);
}

double NNfunction-NN_1_7::synapse0x20d7fe0() {
   return (neuron0x20c4610()*-0.0201508);
}

double NNfunction-NN_1_7::synapse0x20d8020() {
   return (neuron0x20c4950()*-0.0181848);
}

double NNfunction-NN_1_7::synapse0x20d8060() {
   return (neuron0x20c4c90()*-0.0277614);
}

double NNfunction-NN_1_7::synapse0x20d80a0() {
   return (neuron0x20c4fd0()*0.00528323);
}

double NNfunction-NN_1_7::synapse0x20d80e0() {
   return (neuron0x20c5310()*-0.0636704);
}

double NNfunction-NN_1_7::synapse0x20d8120() {
   return (neuron0x20c5650()*-0.00988595);
}

double NNfunction-NN_1_7::synapse0x20d8160() {
   return (neuron0x20c5990()*0.0196496);
}

double NNfunction-NN_1_7::synapse0x20d81a0() {
   return (neuron0x20c5cd0()*0.000716903);
}

double NNfunction-NN_1_7::synapse0x20d81e0() {
   return (neuron0x20c6010()*-0.0268508);
}

double NNfunction-NN_1_7::synapse0x20d7c70() {
   return (neuron0x20c6350()*-0.0296236);
}

double NNfunction-NN_1_7::synapse0x20d7cb0() {
   return (neuron0x20c68b0()*0.0111072);
}

double NNfunction-NN_1_7::synapse0x20d8330() {
   return (neuron0x20c6bf0()*0.0228076);
}

double NNfunction-NN_1_7::synapse0x20d8370() {
   return (neuron0x20c6f30()*-0.0026305);
}

double NNfunction-NN_1_7::synapse0x20d83b0() {
   return (neuron0x20c7270()*0.016814);
}

double NNfunction-NN_1_7::synapse0x20d83f0() {
   return (neuron0x20c75b0()*-0.00673902);
}

double NNfunction-NN_1_7::synapse0x20d8430() {
   return (neuron0x20c78f0()*0.0260334);
}

double NNfunction-NN_1_7::synapse0x20d8470() {
   return (neuron0x20c7c30()*-0.0383896);
}

double NNfunction-NN_1_7::synapse0x20d87f0() {
   return (neuron0x20c2fe0()*-0.0303763);
}

double NNfunction-NN_1_7::synapse0x20d8830() {
   return (neuron0x20c3290()*-0.019313);
}

double NNfunction-NN_1_7::synapse0x20d8870() {
   return (neuron0x20c35d0()*-5.37675);
}

double NNfunction-NN_1_7::synapse0x20d88b0() {
   return (neuron0x20c3910()*0.00270469);
}

double NNfunction-NN_1_7::synapse0x20d88f0() {
   return (neuron0x20c3c50()*-0.0121578);
}

double NNfunction-NN_1_7::synapse0x20d8930() {
   return (neuron0x20c3f90()*-0.0204558);
}

double NNfunction-NN_1_7::synapse0x20d8970() {
   return (neuron0x20c42d0()*-0.00119834);
}

double NNfunction-NN_1_7::synapse0x20d89b0() {
   return (neuron0x20c4610()*0.0408732);
}

double NNfunction-NN_1_7::synapse0x20d89f0() {
   return (neuron0x20c4950()*0.00106649);
}

double NNfunction-NN_1_7::synapse0x20d8a30() {
   return (neuron0x20c4c90()*-0.0242731);
}

double NNfunction-NN_1_7::synapse0x20d8a70() {
   return (neuron0x20c4fd0()*-0.0217275);
}

double NNfunction-NN_1_7::synapse0x20d8ab0() {
   return (neuron0x20c5310()*0.134374);
}

double NNfunction-NN_1_7::synapse0x20d8af0() {
   return (neuron0x20c5650()*-0.0354769);
}

double NNfunction-NN_1_7::synapse0x20d8b30() {
   return (neuron0x20c5990()*-0.0203224);
}

double NNfunction-NN_1_7::synapse0x20d8b70() {
   return (neuron0x20c5cd0()*-0.000123388);
}

double NNfunction-NN_1_7::synapse0x20d8bb0() {
   return (neuron0x20c6010()*-0.00527718);
}

double NNfunction-NN_1_7::synapse0x20d8640() {
   return (neuron0x20c6350()*-0.00616896);
}

double NNfunction-NN_1_7::synapse0x20d8680() {
   return (neuron0x20c68b0()*0.0278977);
}

double NNfunction-NN_1_7::synapse0x20d8d00() {
   return (neuron0x20c6bf0()*-0.00699929);
}

double NNfunction-NN_1_7::synapse0x20d8d40() {
   return (neuron0x20c6f30()*-0.017716);
}

double NNfunction-NN_1_7::synapse0x20d8d80() {
   return (neuron0x20c7270()*-0.0250372);
}

double NNfunction-NN_1_7::synapse0x20d8dc0() {
   return (neuron0x20c75b0()*-0.0236101);
}

double NNfunction-NN_1_7::synapse0x20d8e00() {
   return (neuron0x20c78f0()*-0.0070696);
}

double NNfunction-NN_1_7::synapse0x20d8e40() {
   return (neuron0x20c7c30()*-5.6723);
}

double NNfunction-NN_1_7::synapse0x20d91c0() {
   return (neuron0x20c2fe0()*2.34781);
}

double NNfunction-NN_1_7::synapse0x20d9200() {
   return (neuron0x20c3290()*0.000921611);
}

double NNfunction-NN_1_7::synapse0x20d9240() {
   return (neuron0x20c35d0()*2.22821);
}

double NNfunction-NN_1_7::synapse0x20d9280() {
   return (neuron0x20c3910()*0.0275417);
}

double NNfunction-NN_1_7::synapse0x20d92c0() {
   return (neuron0x20c3c50()*0.0427328);
}

double NNfunction-NN_1_7::synapse0x20d9300() {
   return (neuron0x20c3f90()*-0.0561091);
}

double NNfunction-NN_1_7::synapse0x20d9340() {
   return (neuron0x20c42d0()*0.000121473);
}

double NNfunction-NN_1_7::synapse0x20d9380() {
   return (neuron0x20c4610()*-0.00367899);
}

double NNfunction-NN_1_7::synapse0x20d93c0() {
   return (neuron0x20c4950()*0.0390647);
}

double NNfunction-NN_1_7::synapse0x20d9400() {
   return (neuron0x20c4c90()*-0.0194423);
}

double NNfunction-NN_1_7::synapse0x20d9440() {
   return (neuron0x20c4fd0()*-0.00786313);
}

double NNfunction-NN_1_7::synapse0x20d9480() {
   return (neuron0x20c5310()*0.0507502);
}

double NNfunction-NN_1_7::synapse0x20d94c0() {
   return (neuron0x20c5650()*0.0138371);
}

double NNfunction-NN_1_7::synapse0x20d9500() {
   return (neuron0x20c5990()*0.0496645);
}

double NNfunction-NN_1_7::synapse0x20d9540() {
   return (neuron0x20c5cd0()*0.0403256);
}

double NNfunction-NN_1_7::synapse0x20d9580() {
   return (neuron0x20c6010()*0.00684994);
}

double NNfunction-NN_1_7::synapse0x20d9010() {
   return (neuron0x20c6350()*-0.057256);
}

double NNfunction-NN_1_7::synapse0x20d9050() {
   return (neuron0x20c68b0()*0.00148098);
}

double NNfunction-NN_1_7::synapse0x20d96d0() {
   return (neuron0x20c6bf0()*0.0190884);
}

double NNfunction-NN_1_7::synapse0x20d9710() {
   return (neuron0x20c6f30()*0.0270307);
}

double NNfunction-NN_1_7::synapse0x20d9750() {
   return (neuron0x20c7270()*-0.0178481);
}

double NNfunction-NN_1_7::synapse0x20d9790() {
   return (neuron0x20c75b0()*0.0018547);
}

double NNfunction-NN_1_7::synapse0x20d97d0() {
   return (neuron0x20c78f0()*0.048008);
}

double NNfunction-NN_1_7::synapse0x20d9810() {
   return (neuron0x20c7c30()*-0.135711);
}

double NNfunction-NN_1_7::synapse0x20eb6e0() {
   return (neuron0x20c2fe0()*-0.843897);
}

double NNfunction-NN_1_7::synapse0x20eb720() {
   return (neuron0x20c3290()*-0.0806775);
}

double NNfunction-NN_1_7::synapse0x20eb760() {
   return (neuron0x20c35d0()*1.30945);
}

double NNfunction-NN_1_7::synapse0x20eb7a0() {
   return (neuron0x20c3910()*0.100901);
}

double NNfunction-NN_1_7::synapse0x20eb7e0() {
   return (neuron0x20c3c50()*0.324796);
}

double NNfunction-NN_1_7::synapse0x20eb820() {
   return (neuron0x20c3f90()*0.0599304);
}

double NNfunction-NN_1_7::synapse0x20eb860() {
   return (neuron0x20c42d0()*0.509784);
}

double NNfunction-NN_1_7::synapse0x20eb8a0() {
   return (neuron0x20c4610()*-0.0755156);
}

double NNfunction-NN_1_7::synapse0x20eb8e0() {
   return (neuron0x20c4950()*0.157548);
}

double NNfunction-NN_1_7::synapse0x20eb920() {
   return (neuron0x20c4c90()*-0.108149);
}

double NNfunction-NN_1_7::synapse0x20eb960() {
   return (neuron0x20c4fd0()*-0.247833);
}

double NNfunction-NN_1_7::synapse0x20eb9a0() {
   return (neuron0x20c5310()*-0.375808);
}

double NNfunction-NN_1_7::synapse0x20eb9e0() {
   return (neuron0x20c5650()*0.132747);
}

double NNfunction-NN_1_7::synapse0x20eba20() {
   return (neuron0x20c5990()*0.370265);
}

double NNfunction-NN_1_7::synapse0x20eba60() {
   return (neuron0x20c5cd0()*-0.52858);
}

double NNfunction-NN_1_7::synapse0x20ebaa0() {
   return (neuron0x20c6010()*0.635348);
}

double NNfunction-NN_1_7::synapse0x20d9850() {
   return (neuron0x20c6350()*-0.0839923);
}

double NNfunction-NN_1_7::synapse0x20d9890() {
   return (neuron0x20c68b0()*-0.893149);
}

double NNfunction-NN_1_7::synapse0x20ebbf0() {
   return (neuron0x20c6bf0()*-0.626904);
}

double NNfunction-NN_1_7::synapse0x20ebc30() {
   return (neuron0x20c6f30()*0.15053);
}

double NNfunction-NN_1_7::synapse0x20ebc70() {
   return (neuron0x20c7270()*-0.460773);
}

double NNfunction-NN_1_7::synapse0x20ebcb0() {
   return (neuron0x20c75b0()*0.251549);
}

double NNfunction-NN_1_7::synapse0x20ebcf0() {
   return (neuron0x20c78f0()*-0.0464405);
}

double NNfunction-NN_1_7::synapse0x20ebd30() {
   return (neuron0x20c7c30()*-0.194199);
}

double NNfunction-NN_1_7::synapse0x20ec0b0() {
   return (neuron0x20c2fe0()*0.616864);
}

double NNfunction-NN_1_7::synapse0x20ec0f0() {
   return (neuron0x20c3290()*0.0347151);
}

double NNfunction-NN_1_7::synapse0x20ec130() {
   return (neuron0x20c35d0()*0.168792);
}

double NNfunction-NN_1_7::synapse0x20ec170() {
   return (neuron0x20c3910()*0.258996);
}

double NNfunction-NN_1_7::synapse0x20ec1b0() {
   return (neuron0x20c3c50()*1.02507);
}

double NNfunction-NN_1_7::synapse0x20ec1f0() {
   return (neuron0x20c3f90()*0.126344);
}

double NNfunction-NN_1_7::synapse0x20ec230() {
   return (neuron0x20c42d0()*0.597222);
}

double NNfunction-NN_1_7::synapse0x20ec270() {
   return (neuron0x20c4610()*0.394369);
}

double NNfunction-NN_1_7::synapse0x20ec2b0() {
   return (neuron0x20c4950()*-0.412962);
}

double NNfunction-NN_1_7::synapse0x20ec2f0() {
   return (neuron0x20c4c90()*-0.135857);
}

double NNfunction-NN_1_7::synapse0x20ec330() {
   return (neuron0x20c4fd0()*0.0161002);
}

double NNfunction-NN_1_7::synapse0x20ec370() {
   return (neuron0x20c5310()*0.222579);
}

double NNfunction-NN_1_7::synapse0x20ec3b0() {
   return (neuron0x20c5650()*-0.343385);
}

double NNfunction-NN_1_7::synapse0x20ec3f0() {
   return (neuron0x20c5990()*-0.0243043);
}

double NNfunction-NN_1_7::synapse0x20ec430() {
   return (neuron0x20c5cd0()*0.206872);
}

double NNfunction-NN_1_7::synapse0x20ec470() {
   return (neuron0x20c6010()*-0.548807);
}

double NNfunction-NN_1_7::synapse0x20ebf00() {
   return (neuron0x20c6350()*-0.141873);
}

double NNfunction-NN_1_7::synapse0x20ebf40() {
   return (neuron0x20c68b0()*-0.0565534);
}

double NNfunction-NN_1_7::synapse0x20ec5c0() {
   return (neuron0x20c6bf0()*0.182873);
}

double NNfunction-NN_1_7::synapse0x20ec600() {
   return (neuron0x20c6f30()*-0.155244);
}

double NNfunction-NN_1_7::synapse0x20ec640() {
   return (neuron0x20c7270()*0.337085);
}

double NNfunction-NN_1_7::synapse0x20ec680() {
   return (neuron0x20c75b0()*-0.441958);
}

double NNfunction-NN_1_7::synapse0x20ec6c0() {
   return (neuron0x20c78f0()*-0.491038);
}

double NNfunction-NN_1_7::synapse0x20ec700() {
   return (neuron0x20c7c30()*-1.04572);
}

double NNfunction-NN_1_7::synapse0x20eca80() {
   return (neuron0x20c2fe0()*1.77958);
}

double NNfunction-NN_1_7::synapse0x20ecac0() {
   return (neuron0x20c3290()*-0.00776975);
}

double NNfunction-NN_1_7::synapse0x20ecb00() {
   return (neuron0x20c35d0()*1.63579);
}

double NNfunction-NN_1_7::synapse0x20ecb40() {
   return (neuron0x20c3910()*0.00277836);
}

double NNfunction-NN_1_7::synapse0x20ecb80() {
   return (neuron0x20c3c50()*0.0147944);
}

double NNfunction-NN_1_7::synapse0x20ecbc0() {
   return (neuron0x20c3f90()*-0.03559);
}

double NNfunction-NN_1_7::synapse0x20ecc00() {
   return (neuron0x20c42d0()*-0.00560217);
}

double NNfunction-NN_1_7::synapse0x20ecc40() {
   return (neuron0x20c4610()*0.00750343);
}

double NNfunction-NN_1_7::synapse0x20ecc80() {
   return (neuron0x20c4950()*0.0301301);
}

double NNfunction-NN_1_7::synapse0x20eccc0() {
   return (neuron0x20c4c90()*-0.0123409);
}

double NNfunction-NN_1_7::synapse0x20ecd00() {
   return (neuron0x20c4fd0()*0.00724712);
}

double NNfunction-NN_1_7::synapse0x20ecd40() {
   return (neuron0x20c5310()*0.0424388);
}

double NNfunction-NN_1_7::synapse0x20ecd80() {
   return (neuron0x20c5650()*0.00959625);
}

double NNfunction-NN_1_7::synapse0x20ecdc0() {
   return (neuron0x20c5990()*0.014724);
}

double NNfunction-NN_1_7::synapse0x20ece00() {
   return (neuron0x20c5cd0()*0.0102882);
}

double NNfunction-NN_1_7::synapse0x20ece40() {
   return (neuron0x20c6010()*-0.00213928);
}

double NNfunction-NN_1_7::synapse0x20ec8d0() {
   return (neuron0x20c6350()*-0.0223238);
}

double NNfunction-NN_1_7::synapse0x20ec910() {
   return (neuron0x20c68b0()*0.00425639);
}

double NNfunction-NN_1_7::synapse0x20ecf90() {
   return (neuron0x20c6bf0()*-0.00192639);
}

double NNfunction-NN_1_7::synapse0x20ecfd0() {
   return (neuron0x20c6f30()*0.0103964);
}

double NNfunction-NN_1_7::synapse0x20ed010() {
   return (neuron0x20c7270()*-0.0110013);
}

double NNfunction-NN_1_7::synapse0x20ed050() {
   return (neuron0x20c75b0()*0.00117606);
}

double NNfunction-NN_1_7::synapse0x20ed090() {
   return (neuron0x20c78f0()*0.0151673);
}

double NNfunction-NN_1_7::synapse0x20ed0d0() {
   return (neuron0x20c7c30()*0.000986233);
}

double NNfunction-NN_1_7::synapse0x20ed450() {
   return (neuron0x20c2fe0()*-0.214596);
}

double NNfunction-NN_1_7::synapse0x20ed490() {
   return (neuron0x20c3290()*-0.573076);
}

double NNfunction-NN_1_7::synapse0x20ed4d0() {
   return (neuron0x20c35d0()*0.319292);
}

double NNfunction-NN_1_7::synapse0x20ed510() {
   return (neuron0x20c3910()*0.986718);
}

double NNfunction-NN_1_7::synapse0x20ed550() {
   return (neuron0x20c3c50()*-0.487596);
}

double NNfunction-NN_1_7::synapse0x20ed590() {
   return (neuron0x20c3f90()*0.962013);
}

double NNfunction-NN_1_7::synapse0x20ed5d0() {
   return (neuron0x20c42d0()*-0.325612);
}

double NNfunction-NN_1_7::synapse0x20ed610() {
   return (neuron0x20c4610()*0.428529);
}

double NNfunction-NN_1_7::synapse0x20ed650() {
   return (neuron0x20c4950()*-0.346652);
}

double NNfunction-NN_1_7::synapse0x20ed690() {
   return (neuron0x20c4c90()*-0.291749);
}

double NNfunction-NN_1_7::synapse0x20ed6d0() {
   return (neuron0x20c4fd0()*-0.00496958);
}

double NNfunction-NN_1_7::synapse0x20ed710() {
   return (neuron0x20c5310()*1.84929);
}

double NNfunction-NN_1_7::synapse0x20ed750() {
   return (neuron0x20c5650()*-0.487915);
}

double NNfunction-NN_1_7::synapse0x20ed790() {
   return (neuron0x20c5990()*0.110304);
}

double NNfunction-NN_1_7::synapse0x20ed7d0() {
   return (neuron0x20c5cd0()*-0.501201);
}

double NNfunction-NN_1_7::synapse0x20ed810() {
   return (neuron0x20c6010()*-0.616252);
}

double NNfunction-NN_1_7::synapse0x20ed2a0() {
   return (neuron0x20c6350()*0.80431);
}

double NNfunction-NN_1_7::synapse0x20ed2e0() {
   return (neuron0x20c68b0()*-0.165929);
}

double NNfunction-NN_1_7::synapse0x20ed960() {
   return (neuron0x20c6bf0()*0.269687);
}

double NNfunction-NN_1_7::synapse0x20ed9a0() {
   return (neuron0x20c6f30()*-0.382508);
}

double NNfunction-NN_1_7::synapse0x20ed9e0() {
   return (neuron0x20c7270()*0.132955);
}

double NNfunction-NN_1_7::synapse0x20eda20() {
   return (neuron0x20c75b0()*-0.500849);
}

double NNfunction-NN_1_7::synapse0x20eda60() {
   return (neuron0x20c78f0()*-0.23043);
}

double NNfunction-NN_1_7::synapse0x20edaa0() {
   return (neuron0x20c7c30()*-0.0181952);
}

double NNfunction-NN_1_7::synapse0x20c8ef0() {
   return (neuron0x20c80a0()*0.718026);
}

double NNfunction-NN_1_7::synapse0x20c8f30() {
   return (neuron0x20c88e0()*0.0834032);
}

double NNfunction-NN_1_7::synapse0x20ca450() {
   return (neuron0x20c93c0()*0.308565);
}

double NNfunction-NN_1_7::synapse0x20ca490() {
   return (neuron0x1e83cd0()*1.1142);
}

double NNfunction-NN_1_7::synapse0x20cbf20() {
   return (neuron0x20ca1a0()*0.732881);
}

double NNfunction-NN_1_7::synapse0x20cbf60() {
   return (neuron0x20cbc70()*0.675704);
}

double NNfunction-NN_1_7::synapse0x20cccf0() {
   return (neuron0x20cca40()*0.885279);
}

double NNfunction-NN_1_7::synapse0x20ccd30() {
   return (neuron0x20cd410()*0.217414);
}

double NNfunction-NN_1_7::synapse0x20cd6c0() {
   return (neuron0x20cdde0()*0.103601);
}

double NNfunction-NN_1_7::synapse0x20cd700() {
   return (neuron0x20ce8c0()*0.970014);
}

double NNfunction-NN_1_7::synapse0x20ce090() {
   return (neuron0x20cf290()*0.628685);
}

double NNfunction-NN_1_7::synapse0x20ce0d0() {
   return (neuron0x20cc370()*0.376654);
}

double NNfunction-NN_1_7::synapse0x20ceb70() {
   return (neuron0x20d0e40()*0.62213);
}

double NNfunction-NN_1_7::synapse0x20cebb0() {
   return (neuron0x20d1810()*0.79639);
}

double NNfunction-NN_1_7::synapse0x20cf540() {
   return (neuron0x20d21e0()*0.524254);
}

double NNfunction-NN_1_7::synapse0x20cf580() {
   return (neuron0x20d2bb0()*0.703218);
}

double NNfunction-NN_1_7::synapse0x20cc620() {
   return (neuron0x20d49c0()*0.51985);
}

double NNfunction-NN_1_7::synapse0x20cc660() {
   return (neuron0x20d4ca0()*0.0823529);
}

double NNfunction-NN_1_7::synapse0x20d10f0() {
   return (neuron0x20d5670()*0.26895);
}

double NNfunction-NN_1_7::synapse0x20d1130() {
   return (neuron0x20d6040()*0.0727574);
}

double NNfunction-NN_1_7::synapse0x20d1ac0() {
   return (neuron0x20d6a10()*0.103504);
}

double NNfunction-NN_1_7::synapse0x20d1b00() {
   return (neuron0x20d73e0()*1.07699);
}

double NNfunction-NN_1_7::synapse0x20d2490() {
   return (neuron0x20cff30()*0.529843);
}

double NNfunction-NN_1_7::synapse0x20d24d0() {
   return (neuron0x20d0900()*0.866032);
}

double NNfunction-NN_1_7::synapse0x20d2e60() {
   return (neuron0x20da170()*0.85003);
}

double NNfunction-NN_1_7::synapse0x20d2ea0() {
   return (neuron0x20dab40()*0.583776);
}

double NNfunction-NN_1_7::synapse0x20c5ef0() {
   return (neuron0x20db510()*0.75173);
}

double NNfunction-NN_1_7::synapse0x20c5f30() {
   return (neuron0x20dbee0()*0.37062);
}

double NNfunction-NN_1_7::synapse0x20d4f50() {
   return (neuron0x20dc8b0()*0.596645);
}

double NNfunction-NN_1_7::synapse0x20d4f90() {
   return (neuron0x20dd280()*0.347451);
}

double NNfunction-NN_1_7::synapse0x20d5920() {
   return (neuron0x20ddc50()*0.810147);
}

double NNfunction-NN_1_7::synapse0x20d5960() {
   return (neuron0x20de620()*1.13305);
}

double NNfunction-NN_1_7::synapse0x20d62f0() {
   return (neuron0x20d46b0()*0.182307);
}

double NNfunction-NN_1_7::synapse0x20d6330() {
   return (neuron0x20e1200()*0.817129);
}

double NNfunction-NN_1_7::synapse0x20d6cc0() {
   return (neuron0x20e1bd0()*0.59047);
}

double NNfunction-NN_1_7::synapse0x20d6d00() {
   return (neuron0x20e25a0()*0.181698);
}

double NNfunction-NN_1_7::synapse0x20d7690() {
   return (neuron0x20e2f70()*0.0864409);
}

double NNfunction-NN_1_7::synapse0x20d76d0() {
   return (neuron0x20e3940()*0.550024);
}

double NNfunction-NN_1_7::synapse0x20d01e0() {
   return (neuron0x20e4310()*0.57718);
}

double NNfunction-NN_1_7::synapse0x20d0220() {
   return (neuron0x20e4ce0()*0.438021);
}

double NNfunction-NN_1_7::synapse0x20d9a90() {
   return (neuron0x20e56b0()*0.785675);
}

double NNfunction-NN_1_7::synapse0x20d9ad0() {
   return (neuron0x20e6290()*0.262405);
}

double NNfunction-NN_1_7::synapse0x20da420() {
   return (neuron0x20e6c60()*0.596943);
}

double NNfunction-NN_1_7::synapse0x20da460() {
   return (neuron0x20d7ae0()*0.477064);
}

double NNfunction-NN_1_7::synapse0x20dadf0() {
   return (neuron0x20d84b0()*0.548403);
}

double NNfunction-NN_1_7::synapse0x20dae30() {
   return (neuron0x20d8e80()*0.0218076);
}

double NNfunction-NN_1_7::synapse0x20db7c0() {
   return (neuron0x20eb4c0()*0.215558);
}

double NNfunction-NN_1_7::synapse0x20db800() {
   return (neuron0x20ebd70()*0.67498);
}

double NNfunction-NN_1_7::synapse0x20dc190() {
   return (neuron0x20ec740()*1.21872);
}

double NNfunction-NN_1_7::synapse0x20dc1d0() {
   return (neuron0x20ed110()*0.532707);
}

double NNfunction-NN_1_7::synapse0x20de8d0() {
   return (neuron0x20c80a0()*-1.37955);
}

double NNfunction-NN_1_7::synapse0x20de910() {
   return (neuron0x20c88e0()*-5.28982);
}

double NNfunction-NN_1_7::synapse0x20d3e90() {
   return (neuron0x20c93c0()*0.00239502);
}

double NNfunction-NN_1_7::synapse0x20d3ed0() {
   return (neuron0x1e83cd0()*0.135886);
}

double NNfunction-NN_1_7::synapse0x20e14b0() {
   return (neuron0x20ca1a0()*-0.0255121);
}

double NNfunction-NN_1_7::synapse0x20e14f0() {
   return (neuron0x20cbc70()*0.0444985);
}

double NNfunction-NN_1_7::synapse0x20e1e80() {
   return (neuron0x20cca40()*-0.00241157);
}

double NNfunction-NN_1_7::synapse0x20e1ec0() {
   return (neuron0x20cd410()*0.0214468);
}

double NNfunction-NN_1_7::synapse0x20e2850() {
   return (neuron0x20cdde0()*0.448175);
}

double NNfunction-NN_1_7::synapse0x20e2890() {
   return (neuron0x20ce8c0()*-0.00869674);
}

double NNfunction-NN_1_7::synapse0x20e3220() {
   return (neuron0x20cf290()*0.0322668);
}

double NNfunction-NN_1_7::synapse0x20e3260() {
   return (neuron0x20cc370()*-0.0189806);
}

double NNfunction-NN_1_7::synapse0x20e3bf0() {
   return (neuron0x20d0e40()*2.22728);
}

double NNfunction-NN_1_7::synapse0x20e3c30() {
   return (neuron0x20d1810()*0.0782374);
}

double NNfunction-NN_1_7::synapse0x20e45c0() {
   return (neuron0x20d21e0()*0.133915);
}

double NNfunction-NN_1_7::synapse0x20e4600() {
   return (neuron0x20d2bb0()*-0.632604);
}

double NNfunction-NN_1_7::synapse0x20e4f90() {
   return (neuron0x20d49c0()*-0.00116841);
}

double NNfunction-NN_1_7::synapse0x20e4fd0() {
   return (neuron0x20d4ca0()*-3.26874);
}

double NNfunction-NN_1_7::synapse0x20e5960() {
   return (neuron0x20d5670()*-0.133054);
}

double NNfunction-NN_1_7::synapse0x20e59a0() {
   return (neuron0x20d6040()*0.000237746);
}

double NNfunction-NN_1_7::synapse0x20e6540() {
   return (neuron0x20d6a10()*0.0403235);
}

double NNfunction-NN_1_7::synapse0x20e6580() {
   return (neuron0x20d73e0()*0.0237029);
}

double NNfunction-NN_1_7::synapse0x20e6f10() {
   return (neuron0x20cff30()*0.0137531);
}

double NNfunction-NN_1_7::synapse0x20e6f50() {
   return (neuron0x20d0900()*-0.0068446);
}

double NNfunction-NN_1_7::synapse0x20d7d90() {
   return (neuron0x20da170()*0.958159);
}

double NNfunction-NN_1_7::synapse0x20d7dd0() {
   return (neuron0x20dab40()*-0.0143602);
}

double NNfunction-NN_1_7::synapse0x20d8760() {
   return (neuron0x20db510()*0.000193227);
}

double NNfunction-NN_1_7::synapse0x20d87a0() {
   return (neuron0x20dbee0()*-0.0241286);
}

double NNfunction-NN_1_7::synapse0x20d9130() {
   return (neuron0x20dc8b0()*-1.26799);
}

double NNfunction-NN_1_7::synapse0x20d9170() {
   return (neuron0x20dd280()*-3.52935);
}

double NNfunction-NN_1_7::synapse0x20eb650() {
   return (neuron0x20ddc50()*-0.0862954);
}

double NNfunction-NN_1_7::synapse0x20eb690() {
   return (neuron0x20de620()*-0.000700946);
}

double NNfunction-NN_1_7::synapse0x20ec020() {
   return (neuron0x20d46b0()*0.026458);
}

double NNfunction-NN_1_7::synapse0x20ec060() {
   return (neuron0x20e1200()*0.460044);
}

double NNfunction-NN_1_7::synapse0x20ec9f0() {
   return (neuron0x20e1bd0()*-1.2588);
}

double NNfunction-NN_1_7::synapse0x20eca30() {
   return (neuron0x20e25a0()*2.38066);
}

double NNfunction-NN_1_7::synapse0x20ed3c0() {
   return (neuron0x20e2f70()*0.00436588);
}

double NNfunction-NN_1_7::synapse0x20ed400() {
   return (neuron0x20e3940()*0.922114);
}

double NNfunction-NN_1_7::synapse0x20c8350() {
   return (neuron0x20e4310()*-0.00478987);
}

double NNfunction-NN_1_7::synapse0x20c8390() {
   return (neuron0x20e4ce0()*0.0200129);
}

double NNfunction-NN_1_7::synapse0x20dcb60() {
   return (neuron0x20e56b0()*1.9741);
}

double NNfunction-NN_1_7::synapse0x20dcba0() {
   return (neuron0x20e6290()*-0.131442);
}

double NNfunction-NN_1_7::synapse0x20edae0() {
   return (neuron0x20e6c60()*1.37076);
}

double NNfunction-NN_1_7::synapse0x20edb20() {
   return (neuron0x20d7ae0()*0.15493);
}

double NNfunction-NN_1_7::synapse0x20edb60() {
   return (neuron0x20d84b0()*-0.537649);
}

double NNfunction-NN_1_7::synapse0x20edba0() {
   return (neuron0x20d8e80()*-0.996879);
}

double NNfunction-NN_1_7::synapse0x20f4a50() {
   return (neuron0x20eb4c0()*0.00500999);
}

double NNfunction-NN_1_7::synapse0x20f4a90() {
   return (neuron0x20ebd70()*-0.00440843);
}

double NNfunction-NN_1_7::synapse0x20f4ad0() {
   return (neuron0x20ec740()*3.64741);
}

double NNfunction-NN_1_7::synapse0x20f4b10() {
   return (neuron0x20ed110()*-0.000881047);
}

double NNfunction-NN_1_7::synapse0x20f4e90() {
   return (neuron0x20c80a0()*4.61364);
}

double NNfunction-NN_1_7::synapse0x20f4ed0() {
   return (neuron0x20c88e0()*5.98313);
}

double NNfunction-NN_1_7::synapse0x20f4f10() {
   return (neuron0x20c93c0()*0.571968);
}

double NNfunction-NN_1_7::synapse0x20f4f50() {
   return (neuron0x1e83cd0()*-0.548168);
}

double NNfunction-NN_1_7::synapse0x20f4f90() {
   return (neuron0x20ca1a0()*-1.33658);
}

double NNfunction-NN_1_7::synapse0x20f4fd0() {
   return (neuron0x20cbc70()*0.846933);
}

double NNfunction-NN_1_7::synapse0x20f5010() {
   return (neuron0x20cca40()*0.669315);
}

double NNfunction-NN_1_7::synapse0x20f5050() {
   return (neuron0x20cd410()*-1.73879);
}

double NNfunction-NN_1_7::synapse0x20f5090() {
   return (neuron0x20cdde0()*2.1864);
}

double NNfunction-NN_1_7::synapse0x20f50d0() {
   return (neuron0x20ce8c0()*0.666307);
}

double NNfunction-NN_1_7::synapse0x20f5110() {
   return (neuron0x20cf290()*1.67327);
}

double NNfunction-NN_1_7::synapse0x20f5150() {
   return (neuron0x20cc370()*-0.676506);
}

double NNfunction-NN_1_7::synapse0x20f5190() {
   return (neuron0x20d0e40()*-0.512135);
}

double NNfunction-NN_1_7::synapse0x20f51d0() {
   return (neuron0x20d1810()*-0.683077);
}

double NNfunction-NN_1_7::synapse0x20f5210() {
   return (neuron0x20d21e0()*2.62171);
}

double NNfunction-NN_1_7::synapse0x20f5250() {
   return (neuron0x20d2bb0()*-2.59155);
}

double NNfunction-NN_1_7::synapse0x20f4ce0() {
   return (neuron0x20d49c0()*-1.32447);
}

double NNfunction-NN_1_7::synapse0x20f4d20() {
   return (neuron0x20d4ca0()*-0.275446);
}

double NNfunction-NN_1_7::synapse0x20f53a0() {
   return (neuron0x20d5670()*-1.89391);
}

double NNfunction-NN_1_7::synapse0x20f53e0() {
   return (neuron0x20d6040()*-1.42217);
}

double NNfunction-NN_1_7::synapse0x20f5420() {
   return (neuron0x20d6a10()*0.908391);
}

double NNfunction-NN_1_7::synapse0x20f5460() {
   return (neuron0x20d73e0()*1.02554);
}

double NNfunction-NN_1_7::synapse0x20f54a0() {
   return (neuron0x20cff30()*-0.536331);
}

double NNfunction-NN_1_7::synapse0x20f54e0() {
   return (neuron0x20d0900()*-2.02344);
}

double NNfunction-NN_1_7::synapse0x20f5520() {
   return (neuron0x20da170()*0.549415);
}

double NNfunction-NN_1_7::synapse0x20f5560() {
   return (neuron0x20dab40()*-0.625793);
}

double NNfunction-NN_1_7::synapse0x20f55a0() {
   return (neuron0x20db510()*0.513737);
}

double NNfunction-NN_1_7::synapse0x20f55e0() {
   return (neuron0x20dbee0()*2.05375);
}

double NNfunction-NN_1_7::synapse0x20f5620() {
   return (neuron0x20dc8b0()*0.78478);
}

double NNfunction-NN_1_7::synapse0x20f5660() {
   return (neuron0x20dd280()*-0.0884011);
}

double NNfunction-NN_1_7::synapse0x20f56a0() {
   return (neuron0x20ddc50()*0.263472);
}

double NNfunction-NN_1_7::synapse0x20f56e0() {
   return (neuron0x20de620()*0.768037);
}

double NNfunction-NN_1_7::synapse0x20f5290() {
   return (neuron0x20d46b0()*1.10199);
}

double NNfunction-NN_1_7::synapse0x20f52d0() {
   return (neuron0x20e1200()*-1.65189);
}

double NNfunction-NN_1_7::synapse0x20f5310() {
   return (neuron0x20e1bd0()*-0.313283);
}

double NNfunction-NN_1_7::synapse0x20f5350() {
   return (neuron0x20e25a0()*5.95035);
}

double NNfunction-NN_1_7::synapse0x20f5930() {
   return (neuron0x20e2f70()*0.680238);
}

double NNfunction-NN_1_7::synapse0x20f5970() {
   return (neuron0x20e3940()*-1.3898);
}

double NNfunction-NN_1_7::synapse0x20f59b0() {
   return (neuron0x20e4310()*-0.843615);
}

double NNfunction-NN_1_7::synapse0x20f59f0() {
   return (neuron0x20e4ce0()*0.684619);
}

double NNfunction-NN_1_7::synapse0x20f5a30() {
   return (neuron0x20e56b0()*-0.811872);
}

double NNfunction-NN_1_7::synapse0x20f5a70() {
   return (neuron0x20e6290()*-1.2862);
}

double NNfunction-NN_1_7::synapse0x20f5ab0() {
   return (neuron0x20e6c60()*-1.58347);
}

double NNfunction-NN_1_7::synapse0x20f5af0() {
   return (neuron0x20d7ae0()*-3.96166);
}

double NNfunction-NN_1_7::synapse0x20f5b30() {
   return (neuron0x20d84b0()*-4.17896);
}

double NNfunction-NN_1_7::synapse0x20f5b70() {
   return (neuron0x20d8e80()*0.39869);
}

double NNfunction-NN_1_7::synapse0x20f5bb0() {
   return (neuron0x20eb4c0()*1.1321);
}

double NNfunction-NN_1_7::synapse0x20f5bf0() {
   return (neuron0x20ebd70()*-0.951648);
}

double NNfunction-NN_1_7::synapse0x20f5c30() {
   return (neuron0x20ec740()*-0.986809);
}

double NNfunction-NN_1_7::synapse0x20f5c70() {
   return (neuron0x20ed110()*-1.19382);
}

double NNfunction-NN_1_7::synapse0x20f5ff0() {
   return (neuron0x20c80a0()*-1.01474);
}

double NNfunction-NN_1_7::synapse0x20f6030() {
   return (neuron0x20c88e0()*-2.28159);
}

double NNfunction-NN_1_7::synapse0x20f6070() {
   return (neuron0x20c93c0()*0.0997498);
}

double NNfunction-NN_1_7::synapse0x20f60b0() {
   return (neuron0x1e83cd0()*-0.47628);
}

double NNfunction-NN_1_7::synapse0x20f60f0() {
   return (neuron0x20ca1a0()*0.216632);
}

double NNfunction-NN_1_7::synapse0x20f6130() {
   return (neuron0x20cbc70()*-1.7842);
}

double NNfunction-NN_1_7::synapse0x20f6170() {
   return (neuron0x20cca40()*0.0731896);
}

double NNfunction-NN_1_7::synapse0x20f61b0() {
   return (neuron0x20cd410()*-0.306345);
}

double NNfunction-NN_1_7::synapse0x20f61f0() {
   return (neuron0x20cdde0()*-0.180538);
}

double NNfunction-NN_1_7::synapse0x20f6230() {
   return (neuron0x20ce8c0()*0.113562);
}

double NNfunction-NN_1_7::synapse0x20f6270() {
   return (neuron0x20cf290()*0.425819);
}

double NNfunction-NN_1_7::synapse0x20f62b0() {
   return (neuron0x20cc370()*-0.13061);
}

double NNfunction-NN_1_7::synapse0x20f62f0() {
   return (neuron0x20d0e40()*-0.453081);
}

double NNfunction-NN_1_7::synapse0x20f6330() {
   return (neuron0x20d1810()*0.517117);
}

double NNfunction-NN_1_7::synapse0x20f6370() {
   return (neuron0x20d21e0()*0.247523);
}

double NNfunction-NN_1_7::synapse0x20f63b0() {
   return (neuron0x20d2bb0()*1.32244);
}

double NNfunction-NN_1_7::synapse0x20f5e40() {
   return (neuron0x20d49c0()*-0.216036);
}

double NNfunction-NN_1_7::synapse0x20f5e80() {
   return (neuron0x20d4ca0()*0.266606);
}

double NNfunction-NN_1_7::synapse0x20f6500() {
   return (neuron0x20d5670()*0.474206);
}

double NNfunction-NN_1_7::synapse0x20f6540() {
   return (neuron0x20d6040()*-0.190132);
}

double NNfunction-NN_1_7::synapse0x20f6580() {
   return (neuron0x20d6a10()*-0.0965114);
}

double NNfunction-NN_1_7::synapse0x20f65c0() {
   return (neuron0x20d73e0()*0.103471);
}

double NNfunction-NN_1_7::synapse0x20f6600() {
   return (neuron0x20cff30()*-0.766507);
}

double NNfunction-NN_1_7::synapse0x20f6640() {
   return (neuron0x20d0900()*-2.29978);
}

double NNfunction-NN_1_7::synapse0x20f6680() {
   return (neuron0x20da170()*1.24189);
}

double NNfunction-NN_1_7::synapse0x20f66c0() {
   return (neuron0x20dab40()*-0.0958943);
}

double NNfunction-NN_1_7::synapse0x20f6700() {
   return (neuron0x20db510()*0.0976873);
}

double NNfunction-NN_1_7::synapse0x20f6740() {
   return (neuron0x20dbee0()*-2.05212);
}

double NNfunction-NN_1_7::synapse0x20f6780() {
   return (neuron0x20dc8b0()*0.192426);
}

double NNfunction-NN_1_7::synapse0x20f67c0() {
   return (neuron0x20dd280()*0.20256);
}

double NNfunction-NN_1_7::synapse0x20f6800() {
   return (neuron0x20ddc50()*-0.980967);
}

double NNfunction-NN_1_7::synapse0x20f6840() {
   return (neuron0x20de620()*0.180709);
}

double NNfunction-NN_1_7::synapse0x20f63f0() {
   return (neuron0x20d46b0()*0.174879);
}

double NNfunction-NN_1_7::synapse0x20f6430() {
   return (neuron0x20e1200()*3.52136);
}

double NNfunction-NN_1_7::synapse0x20f6470() {
   return (neuron0x20e1bd0()*-0.247227);
}

double NNfunction-NN_1_7::synapse0x20f64b0() {
   return (neuron0x20e25a0()*-5.00768);
}

double NNfunction-NN_1_7::synapse0x20f6a90() {
   return (neuron0x20e2f70()*0.105301);
}

double NNfunction-NN_1_7::synapse0x20f6ad0() {
   return (neuron0x20e3940()*1.01112);
}

double NNfunction-NN_1_7::synapse0x20f6b10() {
   return (neuron0x20e4310()*-0.0786655);
}

double NNfunction-NN_1_7::synapse0x20f6b50() {
   return (neuron0x20e4ce0()*0.0234889);
}

double NNfunction-NN_1_7::synapse0x20f6b90() {
   return (neuron0x20e56b0()*0.375097);
}

double NNfunction-NN_1_7::synapse0x20f6bd0() {
   return (neuron0x20e6290()*-10.615);
}

double NNfunction-NN_1_7::synapse0x20f6c10() {
   return (neuron0x20e6c60()*3.09608);
}

double NNfunction-NN_1_7::synapse0x20f6c50() {
   return (neuron0x20d7ae0()*12.8557);
}

double NNfunction-NN_1_7::synapse0x20f6c90() {
   return (neuron0x20d84b0()*1.92429);
}

double NNfunction-NN_1_7::synapse0x20f6cd0() {
   return (neuron0x20d8e80()*-0.070399);
}

double NNfunction-NN_1_7::synapse0x20f6d10() {
   return (neuron0x20eb4c0()*0.0939418);
}

double NNfunction-NN_1_7::synapse0x20f6d50() {
   return (neuron0x20ebd70()*-0.149567);
}

double NNfunction-NN_1_7::synapse0x20f6d90() {
   return (neuron0x20ec740()*0.136056);
}

double NNfunction-NN_1_7::synapse0x20f6dd0() {
   return (neuron0x20ed110()*-0.19665);
}

double NNfunction-NN_1_7::synapse0x20f7150() {
   return (neuron0x20c80a0()*0.364767);
}

double NNfunction-NN_1_7::synapse0x20f7190() {
   return (neuron0x20c88e0()*3.08806);
}

double NNfunction-NN_1_7::synapse0x20f71d0() {
   return (neuron0x20c93c0()*0.00457663);
}

double NNfunction-NN_1_7::synapse0x20f7210() {
   return (neuron0x1e83cd0()*-1.66603);
}

double NNfunction-NN_1_7::synapse0x20f7250() {
   return (neuron0x20ca1a0()*-0.0191286);
}

double NNfunction-NN_1_7::synapse0x20f7290() {
   return (neuron0x20cbc70()*-0.0779527);
}

double NNfunction-NN_1_7::synapse0x20f72d0() {
   return (neuron0x20cca40()*0.00787053);
}

double NNfunction-NN_1_7::synapse0x20f7310() {
   return (neuron0x20cd410()*-0.0250656);
}

double NNfunction-NN_1_7::synapse0x20f7350() {
   return (neuron0x20cdde0()*-0.956044);
}

double NNfunction-NN_1_7::synapse0x20f7390() {
   return (neuron0x20ce8c0()*-0.00860432);
}

double NNfunction-NN_1_7::synapse0x20f73d0() {
   return (neuron0x20cf290()*0.0237775);
}

double NNfunction-NN_1_7::synapse0x20f7410() {
   return (neuron0x20cc370()*-0.0135243);
}

double NNfunction-NN_1_7::synapse0x20f7450() {
   return (neuron0x20d0e40()*-0.612723);
}

double NNfunction-NN_1_7::synapse0x20f7490() {
   return (neuron0x20d1810()*-0.318858);
}

double NNfunction-NN_1_7::synapse0x20f74d0() {
   return (neuron0x20d21e0()*-0.139878);
}

double NNfunction-NN_1_7::synapse0x20f7510() {
   return (neuron0x20d2bb0()*-0.0380554);
}

double NNfunction-NN_1_7::synapse0x20f6fa0() {
   return (neuron0x20d49c0()*-0.0204566);
}

double NNfunction-NN_1_7::synapse0x20f6fe0() {
   return (neuron0x20d4ca0()*3.52316);
}

double NNfunction-NN_1_7::synapse0x20f7660() {
   return (neuron0x20d5670()*-0.265042);
}

double NNfunction-NN_1_7::synapse0x20f76a0() {
   return (neuron0x20d6040()*-0.0271062);
}

double NNfunction-NN_1_7::synapse0x20f76e0() {
   return (neuron0x20d6a10()*-0.00627385);
}

double NNfunction-NN_1_7::synapse0x20f7720() {
   return (neuron0x20d73e0()*0.00994734);
}

double NNfunction-NN_1_7::synapse0x20f7760() {
   return (neuron0x20cff30()*-0.0499323);
}

double NNfunction-NN_1_7::synapse0x20f77a0() {
   return (neuron0x20d0900()*0.0177537);
}

double NNfunction-NN_1_7::synapse0x20f77e0() {
   return (neuron0x20da170()*-0.0472701);
}

double NNfunction-NN_1_7::synapse0x20f7820() {
   return (neuron0x20dab40()*-0.00817397);
}

double NNfunction-NN_1_7::synapse0x20f7860() {
   return (neuron0x20db510()*-0.0140829);
}

double NNfunction-NN_1_7::synapse0x20f78a0() {
   return (neuron0x20dbee0()*-0.117777);
}

double NNfunction-NN_1_7::synapse0x20f78e0() {
   return (neuron0x20dc8b0()*0.757367);
}

double NNfunction-NN_1_7::synapse0x20f7920() {
   return (neuron0x20dd280()*5.42835);
}

double NNfunction-NN_1_7::synapse0x20f7960() {
   return (neuron0x20ddc50()*1.20672);
}

double NNfunction-NN_1_7::synapse0x20f79a0() {
   return (neuron0x20de620()*-0.0279662);
}

double NNfunction-NN_1_7::synapse0x20f7550() {
   return (neuron0x20d46b0()*-0.0184963);
}

double NNfunction-NN_1_7::synapse0x20f7590() {
   return (neuron0x20e1200()*1.22973);
}

double NNfunction-NN_1_7::synapse0x20f75d0() {
   return (neuron0x20e1bd0()*2.21477);
}

double NNfunction-NN_1_7::synapse0x20f7610() {
   return (neuron0x20e25a0()*-0.870627);
}

double NNfunction-NN_1_7::synapse0x20f7bf0() {
   return (neuron0x20e2f70()*-0.0378842);
}

double NNfunction-NN_1_7::synapse0x20f7c30() {
   return (neuron0x20e3940()*0.791815);
}

double NNfunction-NN_1_7::synapse0x20f7c70() {
   return (neuron0x20e4310()*-0.0191443);
}

double NNfunction-NN_1_7::synapse0x20f7cb0() {
   return (neuron0x20e4ce0()*0.00659975);
}

double NNfunction-NN_1_7::synapse0x20f7cf0() {
   return (neuron0x20e56b0()*0.490036);
}

double NNfunction-NN_1_7::synapse0x20f7d30() {
   return (neuron0x20e6290()*-0.141518);
}

double NNfunction-NN_1_7::synapse0x20f7d70() {
   return (neuron0x20e6c60()*1.52354);
}

double NNfunction-NN_1_7::synapse0x20f7db0() {
   return (neuron0x20d7ae0()*0.12675);
}

double NNfunction-NN_1_7::synapse0x20f7df0() {
   return (neuron0x20d84b0()*1.90141);
}

double NNfunction-NN_1_7::synapse0x20f7e30() {
   return (neuron0x20d8e80()*0.616534);
}

double NNfunction-NN_1_7::synapse0x20f7e70() {
   return (neuron0x20eb4c0()*0.0103515);
}

double NNfunction-NN_1_7::synapse0x20f7eb0() {
   return (neuron0x20ebd70()*-0.0189785);
}

double NNfunction-NN_1_7::synapse0x20f7ef0() {
   return (neuron0x20ec740()*-2.41408);
}

double NNfunction-NN_1_7::synapse0x20f7f30() {
   return (neuron0x20ed110()*-0.0307018);
}

double NNfunction-NN_1_7::synapse0x20f8190() {
   return (neuron0x20f4310()*-3.53315);
}

double NNfunction-NN_1_7::synapse0x20f81d0() {
   return (neuron0x20f46b0()*7.7497);
}

double NNfunction-NN_1_7::synapse0x20f8210() {
   return (neuron0x20f4b50()*-10.6228);
}

double NNfunction-NN_1_7::synapse0x20f8250() {
   return (neuron0x20f5cb0()*8.03367);
}

double NNfunction-NN_1_7::synapse0x20f8290() {
   return (neuron0x20f6e10()*7.98114);
}

