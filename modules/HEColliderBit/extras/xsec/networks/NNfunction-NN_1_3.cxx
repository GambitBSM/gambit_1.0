#include "NNfunction-NN_1_3.h"
#include <cmath>

double NNfunction-NN_1_3::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.7243)/15.2723;
   input1 = (in1 - -11.3308)/1054.56;
   input2 = (in2 - 460.563)/531.092;
   input3 = (in3 - -23.0421)/843.709;
   input4 = (in4 - 1060.54)/936.936;
   input5 = (in5 - 915.193)/954.936;
   input6 = (in6 - 922.116)/954.6;
   input7 = (in7 - 930.967)/936.729;
   input8 = (in8 - 927.477)/970.686;
   input9 = (in9 - 912.297)/958.963;
   input10 = (in10 - 970.429)/948.5;
   input11 = (in11 - 671.612)/834.962;
   input12 = (in12 - 725.925)/867.288;
   input13 = (in13 - 492.463)/514.192;
   input14 = (in14 - 702.67)/804.869;
   input15 = (in15 - 725.973)/821.777;
   input16 = (in16 - 539.222)/572.355;
   input17 = (in17 - 752.513)/893.507;
   input18 = (in18 - 748.941)/893.988;
   input19 = (in19 - 767.913)/859.25;
   input20 = (in20 - -5.11584)/493.607;
   input21 = (in21 - -12.0116)/1141.37;
   input22 = (in22 - 2.11829)/1195.25;
   input23 = (in23 - -43.3504)/200.846;
   switch(index) {
     case 0:
         return neuron0x1606a80();
     default:
         return 0.;
   }
}

double NNfunction-NN_1_3::Value(int index, double* input) {
   input0 = (input[0] - 23.7243)/15.2723;
   input1 = (input[1] - -11.3308)/1054.56;
   input2 = (input[2] - 460.563)/531.092;
   input3 = (input[3] - -23.0421)/843.709;
   input4 = (input[4] - 1060.54)/936.936;
   input5 = (input[5] - 915.193)/954.936;
   input6 = (input[6] - 922.116)/954.6;
   input7 = (input[7] - 930.967)/936.729;
   input8 = (input[8] - 927.477)/970.686;
   input9 = (input[9] - 912.297)/958.963;
   input10 = (input[10] - 970.429)/948.5;
   input11 = (input[11] - 671.612)/834.962;
   input12 = (input[12] - 725.925)/867.288;
   input13 = (input[13] - 492.463)/514.192;
   input14 = (input[14] - 702.67)/804.869;
   input15 = (input[15] - 725.973)/821.777;
   input16 = (input[16] - 539.222)/572.355;
   input17 = (input[17] - 752.513)/893.507;
   input18 = (input[18] - 748.941)/893.988;
   input19 = (input[19] - 767.913)/859.25;
   input20 = (input[20] - -5.11584)/493.607;
   input21 = (input[21] - -12.0116)/1141.37;
   input22 = (input[22] - 2.11829)/1195.25;
   input23 = (input[23] - -43.3504)/200.846;
   switch(index) {
     case 0:
         return neuron0x1606a80();
     default:
         return 0.;
   }
}

double NNfunction-NN_1_3::neuron0x15d2b40() {
   return input0;
}

double NNfunction-NN_1_3::neuron0x15d2e80() {
   return input1;
}

double NNfunction-NN_1_3::neuron0x15d31c0() {
   return input2;
}

double NNfunction-NN_1_3::neuron0x15d3500() {
   return input3;
}

double NNfunction-NN_1_3::neuron0x15d3840() {
   return input4;
}

double NNfunction-NN_1_3::neuron0x15d3b80() {
   return input5;
}

double NNfunction-NN_1_3::neuron0x15d3ec0() {
   return input6;
}

double NNfunction-NN_1_3::neuron0x15d4200() {
   return input7;
}

double NNfunction-NN_1_3::neuron0x15d4540() {
   return input8;
}

double NNfunction-NN_1_3::neuron0x15d4880() {
   return input9;
}

double NNfunction-NN_1_3::neuron0x15d4bc0() {
   return input10;
}

double NNfunction-NN_1_3::neuron0x15d4f00() {
   return input11;
}

double NNfunction-NN_1_3::neuron0x15d5240() {
   return input12;
}

double NNfunction-NN_1_3::neuron0x15d5580() {
   return input13;
}

double NNfunction-NN_1_3::neuron0x15d58c0() {
   return input14;
}

double NNfunction-NN_1_3::neuron0x15d5c00() {
   return input15;
}

double NNfunction-NN_1_3::neuron0x15d5f40() {
   return input16;
}

double NNfunction-NN_1_3::neuron0x15d64a0() {
   return input17;
}

double NNfunction-NN_1_3::neuron0x15d66c0() {
   return input18;
}

double NNfunction-NN_1_3::neuron0x15d6a00() {
   return input19;
}

double NNfunction-NN_1_3::neuron0x15d6d40() {
   return input20;
}

double NNfunction-NN_1_3::neuron0x15d7080() {
   return input21;
}

double NNfunction-NN_1_3::neuron0x15d73c0() {
   return input22;
}

double NNfunction-NN_1_3::neuron0x15d7700() {
   return input23;
}

double NNfunction-NN_1_3::input0x15d7ba0() {
   double input = 1.18955;
   input += synapse0x13929b0();
   input += synapse0x15d2a00();
   input += synapse0x15d2a40();
   input += synapse0x15d7e50();
   input += synapse0x15d7e90();
   input += synapse0x15d7ed0();
   input += synapse0x15d7f10();
   input += synapse0x15d7f50();
   input += synapse0x15d7f90();
   input += synapse0x15d7fd0();
   input += synapse0x15d8010();
   input += synapse0x15d8050();
   input += synapse0x15d8090();
   input += synapse0x15d80d0();
   input += synapse0x15d8110();
   input += synapse0x15d8150();
   input += synapse0x15d2970();
   input += synapse0x15d29b0();
   input += synapse0x1384210();
   input += synapse0x1384250();
   input += synapse0x15d83b0();
   input += synapse0x15d83f0();
   input += synapse0x15d8430();
   input += synapse0x15d8470();
   return input;
}

double NNfunction-NN_1_3::neuron0x15d7ba0() {
   double input = input0x15d7ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15d84b0() {
   double input = 0.288752;
   input += synapse0x15d87f0();
   input += synapse0x15d8830();
   input += synapse0x15d8870();
   input += synapse0x15d88b0();
   input += synapse0x15d88f0();
   input += synapse0x15d8930();
   input += synapse0x15d8970();
   input += synapse0x15d89b0();
   input += synapse0x15d89f0();
   input += synapse0x15d82a0();
   input += synapse0x15d82e0();
   input += synapse0x15d8320();
   input += synapse0x15d8360();
   input += synapse0x15d8c40();
   input += synapse0x15d8c80();
   input += synapse0x15d8cc0();
   input += synapse0x15d8640();
   input += synapse0x15d8680();
   input += synapse0x15d8e10();
   input += synapse0x15d8e50();
   input += synapse0x15d8e90();
   input += synapse0x15d8ed0();
   input += synapse0x15d8f10();
   input += synapse0x15d8f50();
   return input;
}

double NNfunction-NN_1_3::neuron0x15d84b0() {
   double input = input0x15d84b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15d8f90() {
   double input = -0.725622;
   input += synapse0x15d92d0();
   input += synapse0x15d9310();
   input += synapse0x15d9350();
   input += synapse0x15d9390();
   input += synapse0x15d93d0();
   input += synapse0x15d9410();
   input += synapse0x15d9450();
   input += synapse0x15d9490();
   input += synapse0x15d94d0();
   input += synapse0x15d9510();
   input += synapse0x15d9550();
   input += synapse0x15d9590();
   input += synapse0x15d95d0();
   input += synapse0x15d9610();
   input += synapse0x15d9650();
   input += synapse0x15d9690();
   input += synapse0x15d9120();
   input += synapse0x15d9160();
   input += synapse0x1392080();
   input += synapse0x13920c0();
   input += synapse0x15c1bd0();
   input += synapse0x15c1c10();
   input += synapse0x15c1c50();
   input += synapse0x15d2a80();
   return input;
}

double NNfunction-NN_1_3::neuron0x15d8f90() {
   double input = input0x15d8f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x1392820() {
   double input = -0.309506;
   input += synapse0x15d8be0();
   input += synapse0x15d2ac0();
   input += synapse0x15d2b00();
   input += synapse0x15d97e0();
   input += synapse0x15d9820();
   input += synapse0x15d9860();
   input += synapse0x15d98a0();
   input += synapse0x15d98e0();
   input += synapse0x15d9920();
   input += synapse0x15d9960();
   input += synapse0x15d99a0();
   input += synapse0x15d99e0();
   input += synapse0x15d9a20();
   input += synapse0x15d9a60();
   input += synapse0x15d9aa0();
   input += synapse0x15d9ae0();
   input += synapse0x15d8a30();
   input += synapse0x15d8a70();
   input += synapse0x15d9c30();
   input += synapse0x15d9c70();
   input += synapse0x15d9cb0();
   input += synapse0x15d9cf0();
   input += synapse0x15d9d30();
   input += synapse0x15d9d70();
   return input;
}

double NNfunction-NN_1_3::neuron0x1392820() {
   double input = input0x1392820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15d9db0() {
   double input = 0.596402;
   input += synapse0x15da0f0();
   input += synapse0x15da130();
   input += synapse0x15da170();
   input += synapse0x15da1b0();
   input += synapse0x15da1f0();
   input += synapse0x15da230();
   input += synapse0x15da270();
   input += synapse0x15da2b0();
   input += synapse0x15da2f0();
   input += synapse0x15da330();
   input += synapse0x15da370();
   input += synapse0x15da3b0();
   input += synapse0x15da3f0();
   input += synapse0x15da430();
   input += synapse0x15da470();
   input += synapse0x15da4b0();
   input += synapse0x15d9f40();
   input += synapse0x15d9f80();
   input += synapse0x15da600();
   input += synapse0x15da640();
   input += synapse0x15da680();
   input += synapse0x15da6c0();
   input += synapse0x15da700();
   input += synapse0x15da740();
   return input;
}

double NNfunction-NN_1_3::neuron0x15d9db0() {
   double input = input0x15d9db0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15da780() {
   double input = -0.0982746;
   input += synapse0x15daac0();
   input += synapse0x15dab00();
   input += synapse0x15dab40();
   input += synapse0x15dab80();
   input += synapse0x15dabc0();
   input += synapse0x15dac00();
   input += synapse0x15dac40();
   input += synapse0x15dac80();
   input += synapse0x15dacc0();
   input += synapse0x1392410();
   input += synapse0x1392450();
   input += synapse0x1392490();
   input += synapse0x13924d0();
   input += synapse0x1392510();
   input += synapse0x1392550();
   input += synapse0x1392590();
   input += synapse0x15da910();
   input += synapse0x15da950();
   input += synapse0x13926e0();
   input += synapse0x1392720();
   input += synapse0x1392760();
   input += synapse0x13927a0();
   input += synapse0x13927e0();
   input += synapse0x15db510();
   return input;
}

double NNfunction-NN_1_3::neuron0x15da780() {
   double input = input0x15da780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15db550() {
   double input = -3.83927;
   input += synapse0x15db890();
   input += synapse0x15db8d0();
   input += synapse0x15db910();
   input += synapse0x15db950();
   input += synapse0x15db990();
   input += synapse0x15db9d0();
   input += synapse0x15dba10();
   input += synapse0x15dba50();
   input += synapse0x15dba90();
   input += synapse0x15dbad0();
   input += synapse0x15dbb10();
   input += synapse0x15dbb50();
   input += synapse0x15dbb90();
   input += synapse0x15dbbd0();
   input += synapse0x15dbc10();
   input += synapse0x15dbc50();
   input += synapse0x15db6e0();
   input += synapse0x15db720();
   input += synapse0x15dbda0();
   input += synapse0x15dbde0();
   input += synapse0x15dbe20();
   input += synapse0x15dbe60();
   input += synapse0x15dbea0();
   input += synapse0x15dbee0();
   return input;
}

double NNfunction-NN_1_3::neuron0x15db550() {
   double input = input0x15db550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15dbf20() {
   double input = -0.938143;
   input += synapse0x15dc260();
   input += synapse0x15dc2a0();
   input += synapse0x15dc2e0();
   input += synapse0x15dc320();
   input += synapse0x15dc360();
   input += synapse0x15dc3a0();
   input += synapse0x15dc3e0();
   input += synapse0x15dc420();
   input += synapse0x15dc460();
   input += synapse0x15dc4a0();
   input += synapse0x15dc4e0();
   input += synapse0x15dc520();
   input += synapse0x15dc560();
   input += synapse0x15dc5a0();
   input += synapse0x15dc5e0();
   input += synapse0x15dc620();
   input += synapse0x15dc0b0();
   input += synapse0x15dc0f0();
   input += synapse0x15dc770();
   input += synapse0x15dc7b0();
   input += synapse0x15dc7f0();
   input += synapse0x15dc830();
   input += synapse0x15dc870();
   input += synapse0x15dc8b0();
   return input;
}

double NNfunction-NN_1_3::neuron0x15dbf20() {
   double input = input0x15dbf20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15dc8f0() {
   double input = 0.464861;
   input += synapse0x15d6390();
   input += synapse0x15d63d0();
   input += synapse0x15d6410();
   input += synapse0x15d6450();
   input += synapse0x15dce40();
   input += synapse0x15dce80();
   input += synapse0x15dcec0();
   input += synapse0x15dcf00();
   input += synapse0x15dcf40();
   input += synapse0x15dcf80();
   input += synapse0x15dcfc0();
   input += synapse0x15dd000();
   input += synapse0x15dd040();
   input += synapse0x15dd080();
   input += synapse0x15dd0c0();
   input += synapse0x15dd100();
   input += synapse0x15dca80();
   input += synapse0x15dcac0();
   input += synapse0x15dd250();
   input += synapse0x15dd290();
   input += synapse0x15dd2d0();
   input += synapse0x15dd310();
   input += synapse0x15dd350();
   input += synapse0x15dd390();
   return input;
}

double NNfunction-NN_1_3::neuron0x15dc8f0() {
   double input = input0x15dc8f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15dd3d0() {
   double input = 1.36303;
   input += synapse0x15dd710();
   input += synapse0x15dd750();
   input += synapse0x15dd790();
   input += synapse0x15dd7d0();
   input += synapse0x15dd810();
   input += synapse0x15dd850();
   input += synapse0x15dd890();
   input += synapse0x15dd8d0();
   input += synapse0x15dd910();
   input += synapse0x15dd950();
   input += synapse0x15dd990();
   input += synapse0x15dd9d0();
   input += synapse0x15dda10();
   input += synapse0x15dda50();
   input += synapse0x15dda90();
   input += synapse0x15ddad0();
   input += synapse0x15dd560();
   input += synapse0x15dd5a0();
   input += synapse0x15ddc20();
   input += synapse0x15ddc60();
   input += synapse0x15ddca0();
   input += synapse0x15ddce0();
   input += synapse0x15ddd20();
   input += synapse0x15ddd60();
   return input;
}

double NNfunction-NN_1_3::neuron0x15dd3d0() {
   double input = input0x15dd3d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15ddda0() {
   double input = -1.20485;
   input += synapse0x15de0e0();
   input += synapse0x15de120();
   input += synapse0x15de160();
   input += synapse0x15de1a0();
   input += synapse0x15de1e0();
   input += synapse0x15de220();
   input += synapse0x15de260();
   input += synapse0x15de2a0();
   input += synapse0x15de2e0();
   input += synapse0x15de320();
   input += synapse0x15de360();
   input += synapse0x15de3a0();
   input += synapse0x15de3e0();
   input += synapse0x15de420();
   input += synapse0x15de460();
   input += synapse0x15de4a0();
   input += synapse0x15ddf30();
   input += synapse0x15ddf70();
   input += synapse0x15dad00();
   input += synapse0x15dad40();
   input += synapse0x15dad80();
   input += synapse0x15dadc0();
   input += synapse0x15dae00();
   input += synapse0x15dae40();
   return input;
}

double NNfunction-NN_1_3::neuron0x15ddda0() {
   double input = input0x15ddda0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15dae80() {
   double input = -0.115894;
   input += synapse0x15db1c0();
   input += synapse0x15db200();
   input += synapse0x15db240();
   input += synapse0x15db280();
   input += synapse0x15db2c0();
   input += synapse0x15db300();
   input += synapse0x15db340();
   input += synapse0x15db380();
   input += synapse0x15db3c0();
   input += synapse0x15db400();
   input += synapse0x15db440();
   input += synapse0x15db480();
   input += synapse0x15db4c0();
   input += synapse0x15df600();
   input += synapse0x15df640();
   input += synapse0x15df680();
   input += synapse0x15db010();
   input += synapse0x15db050();
   input += synapse0x15df7d0();
   input += synapse0x15df810();
   input += synapse0x15df850();
   input += synapse0x15df890();
   input += synapse0x15df8d0();
   input += synapse0x15df910();
   return input;
}

double NNfunction-NN_1_3::neuron0x15dae80() {
   double input = input0x15dae80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15df950() {
   double input = -0.340891;
   input += synapse0x15dfc90();
   input += synapse0x15dfcd0();
   input += synapse0x15dfd10();
   input += synapse0x15dfd50();
   input += synapse0x15dfd90();
   input += synapse0x15dfdd0();
   input += synapse0x15dfe10();
   input += synapse0x15dfe50();
   input += synapse0x15dfe90();
   input += synapse0x15dfed0();
   input += synapse0x15dff10();
   input += synapse0x15dff50();
   input += synapse0x15dff90();
   input += synapse0x15dffd0();
   input += synapse0x15e0010();
   input += synapse0x15e0050();
   input += synapse0x15dfae0();
   input += synapse0x15dfb20();
   input += synapse0x15e01a0();
   input += synapse0x15e01e0();
   input += synapse0x15e0220();
   input += synapse0x15e0260();
   input += synapse0x15e02a0();
   input += synapse0x15e02e0();
   return input;
}

double NNfunction-NN_1_3::neuron0x15df950() {
   double input = input0x15df950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15e0320() {
   double input = 0.42689;
   input += synapse0x15e0660();
   input += synapse0x15e06a0();
   input += synapse0x15e06e0();
   input += synapse0x15e0720();
   input += synapse0x15e0760();
   input += synapse0x15e07a0();
   input += synapse0x15e07e0();
   input += synapse0x15e0820();
   input += synapse0x15e0860();
   input += synapse0x15e08a0();
   input += synapse0x15e08e0();
   input += synapse0x15e0920();
   input += synapse0x15e0960();
   input += synapse0x15e09a0();
   input += synapse0x15e09e0();
   input += synapse0x15e0a20();
   input += synapse0x15e04b0();
   input += synapse0x15e04f0();
   input += synapse0x15e0b70();
   input += synapse0x15e0bb0();
   input += synapse0x15e0bf0();
   input += synapse0x15e0c30();
   input += synapse0x15e0c70();
   input += synapse0x15e0cb0();
   return input;
}

double NNfunction-NN_1_3::neuron0x15e0320() {
   double input = input0x15e0320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15e0cf0() {
   double input = -0.757366;
   input += synapse0x15e1030();
   input += synapse0x15e1070();
   input += synapse0x15e10b0();
   input += synapse0x15e10f0();
   input += synapse0x15e1130();
   input += synapse0x15e1170();
   input += synapse0x15e11b0();
   input += synapse0x15e11f0();
   input += synapse0x15e1230();
   input += synapse0x15e1270();
   input += synapse0x15e12b0();
   input += synapse0x15e12f0();
   input += synapse0x15e1330();
   input += synapse0x15e1370();
   input += synapse0x15e13b0();
   input += synapse0x15e13f0();
   input += synapse0x15e0e80();
   input += synapse0x15e0ec0();
   input += synapse0x15e1540();
   input += synapse0x15e1580();
   input += synapse0x15e15c0();
   input += synapse0x15e1600();
   input += synapse0x15e1640();
   input += synapse0x15e1680();
   return input;
}

double NNfunction-NN_1_3::neuron0x15e0cf0() {
   double input = input0x15e0cf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15e16c0() {
   double input = -0.334364;
   input += synapse0x15e1a00();
   input += synapse0x15d2d60();
   input += synapse0x15d2da0();
   input += synapse0x15d30a0();
   input += synapse0x15d30e0();
   input += synapse0x15d33e0();
   input += synapse0x15d3420();
   input += synapse0x15d3720();
   input += synapse0x15d3760();
   input += synapse0x15d3a60();
   input += synapse0x15d3aa0();
   input += synapse0x15d3da0();
   input += synapse0x15d3de0();
   input += synapse0x15d40e0();
   input += synapse0x15d4120();
   input += synapse0x15d4420();
   input += synapse0x15d4460();
   input += synapse0x15d4760();
   input += synapse0x15d47a0();
   input += synapse0x15d4aa0();
   input += synapse0x15d4ae0();
   input += synapse0x15d4de0();
   input += synapse0x15d4e20();
   input += synapse0x15d5120();
   return input;
}

double NNfunction-NN_1_3::neuron0x15e16c0() {
   double input = input0x15e16c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15e34d0() {
   double input = -3.02556;
   input += synapse0x15d5160();
   input += synapse0x15d5e20();
   input += synapse0x15d5e60();
   input += synapse0x15e1850();
   input += synapse0x15e1890();
   input += synapse0x15d6160();
   input += synapse0x15d61a0();
   input += synapse0x13840f0();
   input += synapse0x1384130();
   input += synapse0x15d68e0();
   input += synapse0x15d6920();
   input += synapse0x15d6c20();
   input += synapse0x15d6c60();
   input += synapse0x15d6f60();
   input += synapse0x15d6fa0();
   input += synapse0x15d72a0();
   input += synapse0x15d72e0();
   input += synapse0x15d75e0();
   input += synapse0x15d7620();
   input += synapse0x15d7920();
   input += synapse0x15d7960();
   input += synapse0x15d5460();
   input += synapse0x15d54a0();
   input += synapse0x15e3770();
   return input;
}

double NNfunction-NN_1_3::neuron0x15e34d0() {
   double input = input0x15e34d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15e37b0() {
   double input = 0.409079;
   input += synapse0x15e3af0();
   input += synapse0x15e3b30();
   input += synapse0x15e3b70();
   input += synapse0x15e3bb0();
   input += synapse0x15e3bf0();
   input += synapse0x15e3c30();
   input += synapse0x15e3c70();
   input += synapse0x15e3cb0();
   input += synapse0x15e3cf0();
   input += synapse0x15e3d30();
   input += synapse0x15e3d70();
   input += synapse0x15e3db0();
   input += synapse0x15e3df0();
   input += synapse0x15e3e30();
   input += synapse0x15e3e70();
   input += synapse0x15e3eb0();
   input += synapse0x15e3940();
   input += synapse0x15e3980();
   input += synapse0x15e4000();
   input += synapse0x15e4040();
   input += synapse0x15e4080();
   input += synapse0x15e40c0();
   input += synapse0x15e4100();
   input += synapse0x15e4140();
   return input;
}

double NNfunction-NN_1_3::neuron0x15e37b0() {
   double input = input0x15e37b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15e4180() {
   double input = 1.98523;
   input += synapse0x15e44c0();
   input += synapse0x15e4500();
   input += synapse0x15e4540();
   input += synapse0x15e4580();
   input += synapse0x15e45c0();
   input += synapse0x15e4600();
   input += synapse0x15e4640();
   input += synapse0x15e4680();
   input += synapse0x15e46c0();
   input += synapse0x15e4700();
   input += synapse0x15e4740();
   input += synapse0x15e4780();
   input += synapse0x15e47c0();
   input += synapse0x15e4800();
   input += synapse0x15e4840();
   input += synapse0x15e4880();
   input += synapse0x15e4310();
   input += synapse0x15e4350();
   input += synapse0x15e49d0();
   input += synapse0x15e4a10();
   input += synapse0x15e4a50();
   input += synapse0x15e4a90();
   input += synapse0x15e4ad0();
   input += synapse0x15e4b10();
   return input;
}

double NNfunction-NN_1_3::neuron0x15e4180() {
   double input = input0x15e4180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15e4b50() {
   double input = 2.37789;
   input += synapse0x15e4e90();
   input += synapse0x15e4ed0();
   input += synapse0x15e4f10();
   input += synapse0x15e4f50();
   input += synapse0x15e4f90();
   input += synapse0x15e4fd0();
   input += synapse0x15e5010();
   input += synapse0x15e5050();
   input += synapse0x15e5090();
   input += synapse0x15e50d0();
   input += synapse0x15e5110();
   input += synapse0x15e5150();
   input += synapse0x15e5190();
   input += synapse0x15e51d0();
   input += synapse0x15e5210();
   input += synapse0x15e5250();
   input += synapse0x15e4ce0();
   input += synapse0x15e4d20();
   input += synapse0x15e53a0();
   input += synapse0x15e53e0();
   input += synapse0x15e5420();
   input += synapse0x15e5460();
   input += synapse0x15e54a0();
   input += synapse0x15e54e0();
   return input;
}

double NNfunction-NN_1_3::neuron0x15e4b50() {
   double input = input0x15e4b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15e5520() {
   double input = -1.90521;
   input += synapse0x15e5860();
   input += synapse0x15e58a0();
   input += synapse0x15e58e0();
   input += synapse0x15e5920();
   input += synapse0x15e5960();
   input += synapse0x15e59a0();
   input += synapse0x15e59e0();
   input += synapse0x15e5a20();
   input += synapse0x15e5a60();
   input += synapse0x15e5aa0();
   input += synapse0x15e5ae0();
   input += synapse0x15e5b20();
   input += synapse0x15e5b60();
   input += synapse0x15e5ba0();
   input += synapse0x15e5be0();
   input += synapse0x15e5c20();
   input += synapse0x15e56b0();
   input += synapse0x15e56f0();
   input += synapse0x15e5d70();
   input += synapse0x15e5db0();
   input += synapse0x15e5df0();
   input += synapse0x15e5e30();
   input += synapse0x15e5e70();
   input += synapse0x15e5eb0();
   return input;
}

double NNfunction-NN_1_3::neuron0x15e5520() {
   double input = input0x15e5520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15e5ef0() {
   double input = -0.462794;
   input += synapse0x15e6230();
   input += synapse0x15e6270();
   input += synapse0x15e62b0();
   input += synapse0x15e62f0();
   input += synapse0x15e6330();
   input += synapse0x15e6370();
   input += synapse0x15e63b0();
   input += synapse0x15e63f0();
   input += synapse0x15e6430();
   input += synapse0x15de5f0();
   input += synapse0x15de630();
   input += synapse0x15de670();
   input += synapse0x15de6b0();
   input += synapse0x15de6f0();
   input += synapse0x15de730();
   input += synapse0x15de770();
   input += synapse0x15e6080();
   input += synapse0x15e60c0();
   input += synapse0x15de8c0();
   input += synapse0x15de900();
   input += synapse0x15de940();
   input += synapse0x15de980();
   input += synapse0x15de9c0();
   input += synapse0x15dea00();
   return input;
}

double NNfunction-NN_1_3::neuron0x15e5ef0() {
   double input = input0x15e5ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15dea40() {
   double input = 1.05153;
   input += synapse0x15ded80();
   input += synapse0x15dedc0();
   input += synapse0x15dee00();
   input += synapse0x15dee40();
   input += synapse0x15dee80();
   input += synapse0x15deec0();
   input += synapse0x15def00();
   input += synapse0x15def40();
   input += synapse0x15def80();
   input += synapse0x15defc0();
   input += synapse0x15df000();
   input += synapse0x15df040();
   input += synapse0x15df080();
   input += synapse0x15df0c0();
   input += synapse0x15df100();
   input += synapse0x15df140();
   input += synapse0x15debd0();
   input += synapse0x15dec10();
   input += synapse0x15df290();
   input += synapse0x15df2d0();
   input += synapse0x15df310();
   input += synapse0x15df350();
   input += synapse0x15df390();
   input += synapse0x15df3d0();
   return input;
}

double NNfunction-NN_1_3::neuron0x15dea40() {
   double input = input0x15dea40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15df410() {
   double input = 0.664645;
   input += synapse0x15df5a0();
   input += synapse0x15e8630();
   input += synapse0x15e8670();
   input += synapse0x15e86b0();
   input += synapse0x15e86f0();
   input += synapse0x15e8730();
   input += synapse0x15e8770();
   input += synapse0x15e87b0();
   input += synapse0x15e87f0();
   input += synapse0x15e8830();
   input += synapse0x15e8870();
   input += synapse0x15e88b0();
   input += synapse0x15e88f0();
   input += synapse0x15e8930();
   input += synapse0x15e8970();
   input += synapse0x15e89b0();
   input += synapse0x15e8480();
   input += synapse0x15e84c0();
   input += synapse0x15e8b00();
   input += synapse0x15e8b40();
   input += synapse0x15e8b80();
   input += synapse0x15e8bc0();
   input += synapse0x15e8c00();
   input += synapse0x15e8c40();
   return input;
}

double NNfunction-NN_1_3::neuron0x15df410() {
   double input = input0x15df410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15e8c80() {
   double input = -0.460149;
   input += synapse0x15e8fc0();
   input += synapse0x15e9000();
   input += synapse0x15e9040();
   input += synapse0x15e9080();
   input += synapse0x15e90c0();
   input += synapse0x15e9100();
   input += synapse0x15e9140();
   input += synapse0x15e9180();
   input += synapse0x15e91c0();
   input += synapse0x15e9200();
   input += synapse0x15e9240();
   input += synapse0x15e9280();
   input += synapse0x15e92c0();
   input += synapse0x15e9300();
   input += synapse0x15e9340();
   input += synapse0x15e9380();
   input += synapse0x15e8e10();
   input += synapse0x15e8e50();
   input += synapse0x15e94d0();
   input += synapse0x15e9510();
   input += synapse0x15e9550();
   input += synapse0x15e9590();
   input += synapse0x15e95d0();
   input += synapse0x15e9610();
   return input;
}

double NNfunction-NN_1_3::neuron0x15e8c80() {
   double input = input0x15e8c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15e9650() {
   double input = -1.00366;
   input += synapse0x15e9990();
   input += synapse0x15e99d0();
   input += synapse0x15e9a10();
   input += synapse0x15e9a50();
   input += synapse0x15e9a90();
   input += synapse0x15e9ad0();
   input += synapse0x15e9b10();
   input += synapse0x15e9b50();
   input += synapse0x15e9b90();
   input += synapse0x15e9bd0();
   input += synapse0x15e9c10();
   input += synapse0x15e9c50();
   input += synapse0x15e9c90();
   input += synapse0x15e9cd0();
   input += synapse0x15e9d10();
   input += synapse0x15e9d50();
   input += synapse0x15e97e0();
   input += synapse0x15e9820();
   input += synapse0x15e9ea0();
   input += synapse0x15e9ee0();
   input += synapse0x15e9f20();
   input += synapse0x15e9f60();
   input += synapse0x15e9fa0();
   input += synapse0x15e9fe0();
   return input;
}

double NNfunction-NN_1_3::neuron0x15e9650() {
   double input = input0x15e9650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15ea020() {
   double input = -0.0653793;
   input += synapse0x15ea360();
   input += synapse0x15ea3a0();
   input += synapse0x15ea3e0();
   input += synapse0x15ea420();
   input += synapse0x15ea460();
   input += synapse0x15ea4a0();
   input += synapse0x15ea4e0();
   input += synapse0x15ea520();
   input += synapse0x15ea560();
   input += synapse0x15ea5a0();
   input += synapse0x15ea5e0();
   input += synapse0x15ea620();
   input += synapse0x15ea660();
   input += synapse0x15ea6a0();
   input += synapse0x15ea6e0();
   input += synapse0x15ea720();
   input += synapse0x15ea1b0();
   input += synapse0x15ea1f0();
   input += synapse0x15ea870();
   input += synapse0x15ea8b0();
   input += synapse0x15ea8f0();
   input += synapse0x15ea930();
   input += synapse0x15ea970();
   input += synapse0x15ea9b0();
   return input;
}

double NNfunction-NN_1_3::neuron0x15ea020() {
   double input = input0x15ea020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15ea9f0() {
   double input = 0.0336775;
   input += synapse0x15ead30();
   input += synapse0x15ead70();
   input += synapse0x15eadb0();
   input += synapse0x15eadf0();
   input += synapse0x15eae30();
   input += synapse0x15eae70();
   input += synapse0x15eaeb0();
   input += synapse0x15eaef0();
   input += synapse0x15eaf30();
   input += synapse0x15eaf70();
   input += synapse0x15eafb0();
   input += synapse0x15eaff0();
   input += synapse0x15eb030();
   input += synapse0x15eb070();
   input += synapse0x15eb0b0();
   input += synapse0x15eb0f0();
   input += synapse0x15eab80();
   input += synapse0x15eabc0();
   input += synapse0x15eb240();
   input += synapse0x15eb280();
   input += synapse0x15eb2c0();
   input += synapse0x15eb300();
   input += synapse0x15eb340();
   input += synapse0x15eb380();
   return input;
}

double NNfunction-NN_1_3::neuron0x15ea9f0() {
   double input = input0x15ea9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15eb3c0() {
   double input = 0.148465;
   input += synapse0x15eb700();
   input += synapse0x15eb740();
   input += synapse0x15eb780();
   input += synapse0x15eb7c0();
   input += synapse0x15eb800();
   input += synapse0x15eb840();
   input += synapse0x15eb880();
   input += synapse0x15eb8c0();
   input += synapse0x15eb900();
   input += synapse0x15eb940();
   input += synapse0x15eb980();
   input += synapse0x15eb9c0();
   input += synapse0x15eba00();
   input += synapse0x15eba40();
   input += synapse0x15eba80();
   input += synapse0x15ebac0();
   input += synapse0x15eb550();
   input += synapse0x15eb590();
   input += synapse0x15ebc10();
   input += synapse0x15ebc50();
   input += synapse0x15ebc90();
   input += synapse0x15ebcd0();
   input += synapse0x15ebd10();
   input += synapse0x15ebd50();
   return input;
}

double NNfunction-NN_1_3::neuron0x15eb3c0() {
   double input = input0x15eb3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15ebd90() {
   double input = -1.27236;
   input += synapse0x15ec0d0();
   input += synapse0x15ec110();
   input += synapse0x15ec150();
   input += synapse0x15ec190();
   input += synapse0x15ec1d0();
   input += synapse0x15ec210();
   input += synapse0x15ec250();
   input += synapse0x15ec290();
   input += synapse0x15ec2d0();
   input += synapse0x15ec310();
   input += synapse0x15ec350();
   input += synapse0x15ec390();
   input += synapse0x15ec3d0();
   input += synapse0x15ec410();
   input += synapse0x15ec450();
   input += synapse0x15ec490();
   input += synapse0x15ebf20();
   input += synapse0x15ebf60();
   input += synapse0x15ec5e0();
   input += synapse0x15ec620();
   input += synapse0x15ec660();
   input += synapse0x15ec6a0();
   input += synapse0x15ec6e0();
   input += synapse0x15ec720();
   return input;
}

double NNfunction-NN_1_3::neuron0x15ebd90() {
   double input = input0x15ebd90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15ec760() {
   double input = -2.77131;
   input += synapse0x15ecaa0();
   input += synapse0x15ecae0();
   input += synapse0x15ecb20();
   input += synapse0x15ecb60();
   input += synapse0x15ecba0();
   input += synapse0x15ecbe0();
   input += synapse0x15ecc20();
   input += synapse0x15ecc60();
   input += synapse0x15ecca0();
   input += synapse0x15ecce0();
   input += synapse0x15ecd20();
   input += synapse0x15ecd60();
   input += synapse0x15ecda0();
   input += synapse0x15ecde0();
   input += synapse0x15ece20();
   input += synapse0x15ece60();
   input += synapse0x15ec8f0();
   input += synapse0x15ec930();
   input += synapse0x15ecfb0();
   input += synapse0x15ecff0();
   input += synapse0x15ed030();
   input += synapse0x15ed070();
   input += synapse0x15ed0b0();
   input += synapse0x15ed0f0();
   return input;
}

double NNfunction-NN_1_3::neuron0x15ec760() {
   double input = input0x15ec760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15ed130() {
   double input = 1.73667;
   input += synapse0x15ed470();
   input += synapse0x15e1a40();
   input += synapse0x15e1a80();
   input += synapse0x15e1ac0();
   input += synapse0x15e1d10();
   input += synapse0x15e1d50();
   input += synapse0x15e1d90();
   input += synapse0x15e1fe0();
   input += synapse0x15e2020();
   input += synapse0x15e2270();
   input += synapse0x15e22b0();
   input += synapse0x15e22f0();
   input += synapse0x15e2540();
   input += synapse0x15e2580();
   input += synapse0x15e27d0();
   input += synapse0x15e2810();
   input += synapse0x15ed2c0();
   input += synapse0x15ed300();
   input += synapse0x15e2960();
   input += synapse0x15e2e70();
   input += synapse0x15e2eb0();
   input += synapse0x15e2ef0();
   input += synapse0x15e3140();
   input += synapse0x15e3180();
   return input;
}

double NNfunction-NN_1_3::neuron0x15ed130() {
   double input = input0x15ed130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15e31c0() {
   double input = 0.198834;
   input += synapse0x15e2a30();
   input += synapse0x15e2a70();
   input += synapse0x15e2ab0();
   input += synapse0x15e2af0();
   input += synapse0x15e3470();
   input += synapse0x15ef7c0();
   input += synapse0x15ef800();
   input += synapse0x15ef840();
   input += synapse0x15ef880();
   input += synapse0x15ef8c0();
   input += synapse0x15ef900();
   input += synapse0x15ef940();
   input += synapse0x15ef980();
   input += synapse0x15ef9c0();
   input += synapse0x15efa00();
   input += synapse0x15efa40();
   input += synapse0x15e3350();
   input += synapse0x15e3390();
   input += synapse0x15efb90();
   input += synapse0x15efbd0();
   input += synapse0x15efc10();
   input += synapse0x15efc50();
   input += synapse0x15efc90();
   input += synapse0x15efcd0();
   return input;
}

double NNfunction-NN_1_3::neuron0x15e31c0() {
   double input = input0x15e31c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15efd10() {
   double input = 4.57998;
   input += synapse0x15f0050();
   input += synapse0x15f0090();
   input += synapse0x15f00d0();
   input += synapse0x15f0110();
   input += synapse0x15f0150();
   input += synapse0x15f0190();
   input += synapse0x15f01d0();
   input += synapse0x15f0210();
   input += synapse0x15f0250();
   input += synapse0x15f0290();
   input += synapse0x15f02d0();
   input += synapse0x15f0310();
   input += synapse0x15f0350();
   input += synapse0x15f0390();
   input += synapse0x15f03d0();
   input += synapse0x15f0410();
   input += synapse0x15efea0();
   input += synapse0x15efee0();
   input += synapse0x15f0560();
   input += synapse0x15f05a0();
   input += synapse0x15f05e0();
   input += synapse0x15f0620();
   input += synapse0x15f0660();
   input += synapse0x15f06a0();
   return input;
}

double NNfunction-NN_1_3::neuron0x15efd10() {
   double input = input0x15efd10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15f06e0() {
   double input = -0.212713;
   input += synapse0x15f0a20();
   input += synapse0x15f0a60();
   input += synapse0x15f0aa0();
   input += synapse0x15f0ae0();
   input += synapse0x15f0b20();
   input += synapse0x15f0b60();
   input += synapse0x15f0ba0();
   input += synapse0x15f0be0();
   input += synapse0x15f0c20();
   input += synapse0x15f0c60();
   input += synapse0x15f0ca0();
   input += synapse0x15f0ce0();
   input += synapse0x15f0d20();
   input += synapse0x15f0d60();
   input += synapse0x15f0da0();
   input += synapse0x15f0de0();
   input += synapse0x15f0870();
   input += synapse0x15f08b0();
   input += synapse0x15f0f30();
   input += synapse0x15f0f70();
   input += synapse0x15f0fb0();
   input += synapse0x15f0ff0();
   input += synapse0x15f1030();
   input += synapse0x15f1070();
   return input;
}

double NNfunction-NN_1_3::neuron0x15f06e0() {
   double input = input0x15f06e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15f10b0() {
   double input = 1.93434;
   input += synapse0x15f13f0();
   input += synapse0x15f1430();
   input += synapse0x15f1470();
   input += synapse0x15f14b0();
   input += synapse0x15f14f0();
   input += synapse0x15f1530();
   input += synapse0x15f1570();
   input += synapse0x15f15b0();
   input += synapse0x15f15f0();
   input += synapse0x15f1630();
   input += synapse0x15f1670();
   input += synapse0x15f16b0();
   input += synapse0x15f16f0();
   input += synapse0x15f1730();
   input += synapse0x15f1770();
   input += synapse0x15f17b0();
   input += synapse0x15f1240();
   input += synapse0x15f1280();
   input += synapse0x15f1900();
   input += synapse0x15f1940();
   input += synapse0x15f1980();
   input += synapse0x15f19c0();
   input += synapse0x15f1a00();
   input += synapse0x15f1a40();
   return input;
}

double NNfunction-NN_1_3::neuron0x15f10b0() {
   double input = input0x15f10b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15f1a80() {
   double input = 3.25922;
   input += synapse0x15f1dc0();
   input += synapse0x15f1e00();
   input += synapse0x15f1e40();
   input += synapse0x15f1e80();
   input += synapse0x15f1ec0();
   input += synapse0x15f1f00();
   input += synapse0x15f1f40();
   input += synapse0x15f1f80();
   input += synapse0x15f1fc0();
   input += synapse0x15f2000();
   input += synapse0x15f2040();
   input += synapse0x15f2080();
   input += synapse0x15f20c0();
   input += synapse0x15f2100();
   input += synapse0x15f2140();
   input += synapse0x15f2180();
   input += synapse0x15f1c10();
   input += synapse0x15f1c50();
   input += synapse0x15f22d0();
   input += synapse0x15f2310();
   input += synapse0x15f2350();
   input += synapse0x15f2390();
   input += synapse0x15f23d0();
   input += synapse0x15f2410();
   return input;
}

double NNfunction-NN_1_3::neuron0x15f1a80() {
   double input = input0x15f1a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15f2450() {
   double input = -1.69298;
   input += synapse0x15f2790();
   input += synapse0x15f27d0();
   input += synapse0x15f2810();
   input += synapse0x15f2850();
   input += synapse0x15f2890();
   input += synapse0x15f28d0();
   input += synapse0x15f2910();
   input += synapse0x15f2950();
   input += synapse0x15f2990();
   input += synapse0x15f29d0();
   input += synapse0x15f2a10();
   input += synapse0x15f2a50();
   input += synapse0x15f2a90();
   input += synapse0x15f2ad0();
   input += synapse0x15f2b10();
   input += synapse0x15f2b50();
   input += synapse0x15f25e0();
   input += synapse0x15f2620();
   input += synapse0x15f2ca0();
   input += synapse0x15f2ce0();
   input += synapse0x15f2d20();
   input += synapse0x15f2d60();
   input += synapse0x15f2da0();
   input += synapse0x15f2de0();
   return input;
}

double NNfunction-NN_1_3::neuron0x15f2450() {
   double input = input0x15f2450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15f2e20() {
   double input = 0.208081;
   input += synapse0x15f3160();
   input += synapse0x15f31a0();
   input += synapse0x15f31e0();
   input += synapse0x15f3220();
   input += synapse0x15f3260();
   input += synapse0x15f32a0();
   input += synapse0x15f32e0();
   input += synapse0x15f3320();
   input += synapse0x15f3360();
   input += synapse0x15f33a0();
   input += synapse0x15f33e0();
   input += synapse0x15f3420();
   input += synapse0x15f3460();
   input += synapse0x15f34a0();
   input += synapse0x15f34e0();
   input += synapse0x15f3520();
   input += synapse0x15f2fb0();
   input += synapse0x15f2ff0();
   input += synapse0x15f3670();
   input += synapse0x15f36b0();
   input += synapse0x15f36f0();
   input += synapse0x15f3730();
   input += synapse0x15f3770();
   input += synapse0x15f37b0();
   return input;
}

double NNfunction-NN_1_3::neuron0x15f2e20() {
   double input = input0x15f2e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15f37f0() {
   double input = 0.00694533;
   input += synapse0x15f3b30();
   input += synapse0x15f3b70();
   input += synapse0x15f3bb0();
   input += synapse0x15f3bf0();
   input += synapse0x15f3c30();
   input += synapse0x15f3c70();
   input += synapse0x15f3cb0();
   input += synapse0x15f3cf0();
   input += synapse0x15f3d30();
   input += synapse0x15f3d70();
   input += synapse0x15f3db0();
   input += synapse0x15f3df0();
   input += synapse0x15f3e30();
   input += synapse0x15f3e70();
   input += synapse0x15f3eb0();
   input += synapse0x15f3ef0();
   input += synapse0x15f3980();
   input += synapse0x15f39c0();
   input += synapse0x15f4040();
   input += synapse0x15f4080();
   input += synapse0x15f40c0();
   input += synapse0x15f4100();
   input += synapse0x15f4140();
   input += synapse0x15f4180();
   return input;
}

double NNfunction-NN_1_3::neuron0x15f37f0() {
   double input = input0x15f37f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15f41c0() {
   double input = -0.311479;
   input += synapse0x15dcc30();
   input += synapse0x15dcc70();
   input += synapse0x15dccb0();
   input += synapse0x15dccf0();
   input += synapse0x15dcd30();
   input += synapse0x15dcd70();
   input += synapse0x15dcdb0();
   input += synapse0x15dcdf0();
   input += synapse0x15f4910();
   input += synapse0x15f4950();
   input += synapse0x15f4990();
   input += synapse0x15f49d0();
   input += synapse0x15f4a10();
   input += synapse0x15f4a50();
   input += synapse0x15f4a90();
   input += synapse0x15f4ad0();
   input += synapse0x15f4350();
   input += synapse0x15f4390();
   input += synapse0x15f4c20();
   input += synapse0x15f4c60();
   input += synapse0x15f4ca0();
   input += synapse0x15f4ce0();
   input += synapse0x15f4d20();
   input += synapse0x15f4d60();
   return input;
}

double NNfunction-NN_1_3::neuron0x15f41c0() {
   double input = input0x15f41c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15f4da0() {
   double input = -4.44719;
   input += synapse0x15f50e0();
   input += synapse0x15f5120();
   input += synapse0x15f5160();
   input += synapse0x15f51a0();
   input += synapse0x15f51e0();
   input += synapse0x15f5220();
   input += synapse0x15f5260();
   input += synapse0x15f52a0();
   input += synapse0x15f52e0();
   input += synapse0x15f5320();
   input += synapse0x15f5360();
   input += synapse0x15f53a0();
   input += synapse0x15f53e0();
   input += synapse0x15f5420();
   input += synapse0x15f5460();
   input += synapse0x15f54a0();
   input += synapse0x15f4f30();
   input += synapse0x15f4f70();
   input += synapse0x15f55f0();
   input += synapse0x15f5630();
   input += synapse0x15f5670();
   input += synapse0x15f56b0();
   input += synapse0x15f56f0();
   input += synapse0x15f5730();
   return input;
}

double NNfunction-NN_1_3::neuron0x15f4da0() {
   double input = input0x15f4da0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15f5770() {
   double input = -6.23595;
   input += synapse0x15f5ab0();
   input += synapse0x15f5af0();
   input += synapse0x15f5b30();
   input += synapse0x15f5b70();
   input += synapse0x15f5bb0();
   input += synapse0x15f5bf0();
   input += synapse0x15f5c30();
   input += synapse0x15f5c70();
   input += synapse0x15f5cb0();
   input += synapse0x15f5cf0();
   input += synapse0x15f5d30();
   input += synapse0x15f5d70();
   input += synapse0x15f5db0();
   input += synapse0x15f5df0();
   input += synapse0x15f5e30();
   input += synapse0x15f5e70();
   input += synapse0x15f5900();
   input += synapse0x15f5940();
   input += synapse0x15e6470();
   input += synapse0x15e64b0();
   input += synapse0x15e64f0();
   input += synapse0x15e6530();
   input += synapse0x15e6570();
   input += synapse0x15e65b0();
   return input;
}

double NNfunction-NN_1_3::neuron0x15f5770() {
   double input = input0x15f5770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15e65f0() {
   double input = -1.11372;
   input += synapse0x15e6930();
   input += synapse0x15e6970();
   input += synapse0x15e69b0();
   input += synapse0x15e69f0();
   input += synapse0x15e6a30();
   input += synapse0x15e6a70();
   input += synapse0x15e6ab0();
   input += synapse0x15e6af0();
   input += synapse0x15e6b30();
   input += synapse0x15e6b70();
   input += synapse0x15e6bb0();
   input += synapse0x15e6bf0();
   input += synapse0x15e6c30();
   input += synapse0x15e6c70();
   input += synapse0x15e6cb0();
   input += synapse0x15e6cf0();
   input += synapse0x15e6780();
   input += synapse0x15e67c0();
   input += synapse0x15e6e40();
   input += synapse0x15e6e80();
   input += synapse0x15e6ec0();
   input += synapse0x15e6f00();
   input += synapse0x15e6f40();
   input += synapse0x15e6f80();
   return input;
}

double NNfunction-NN_1_3::neuron0x15e65f0() {
   double input = input0x15e65f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15e6fc0() {
   double input = 0.0101962;
   input += synapse0x15e7300();
   input += synapse0x15e7340();
   input += synapse0x15e7380();
   input += synapse0x15e73c0();
   input += synapse0x15e7400();
   input += synapse0x15e7440();
   input += synapse0x15e7480();
   input += synapse0x15e74c0();
   input += synapse0x15e7500();
   input += synapse0x15e7540();
   input += synapse0x15e7580();
   input += synapse0x15e75c0();
   input += synapse0x15e7600();
   input += synapse0x15e7640();
   input += synapse0x15e7680();
   input += synapse0x15e76c0();
   input += synapse0x15e7150();
   input += synapse0x15e7190();
   input += synapse0x15e7810();
   input += synapse0x15e7850();
   input += synapse0x15e7890();
   input += synapse0x15e78d0();
   input += synapse0x15e7910();
   input += synapse0x15e7950();
   return input;
}

double NNfunction-NN_1_3::neuron0x15e6fc0() {
   double input = input0x15e6fc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15e7990() {
   double input = -0.576226;
   input += synapse0x15e7cd0();
   input += synapse0x15e7d10();
   input += synapse0x15e7d50();
   input += synapse0x15e7d90();
   input += synapse0x15e7dd0();
   input += synapse0x15e7e10();
   input += synapse0x15e7e50();
   input += synapse0x15e7e90();
   input += synapse0x15e7ed0();
   input += synapse0x15e7f10();
   input += synapse0x15e7f50();
   input += synapse0x15e7f90();
   input += synapse0x15e7fd0();
   input += synapse0x15e8010();
   input += synapse0x15e8050();
   input += synapse0x15e8090();
   input += synapse0x15e7b20();
   input += synapse0x15e7b60();
   input += synapse0x15e81e0();
   input += synapse0x15e8220();
   input += synapse0x15e8260();
   input += synapse0x15e82a0();
   input += synapse0x15e82e0();
   input += synapse0x15e8320();
   return input;
}

double NNfunction-NN_1_3::neuron0x15e7990() {
   double input = input0x15e7990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15f9fd0() {
   double input = 0.569723;
   input += synapse0x15fa1f0();
   input += synapse0x15fa230();
   input += synapse0x15fa270();
   input += synapse0x15fa2b0();
   input += synapse0x15fa2f0();
   input += synapse0x15fa330();
   input += synapse0x15fa370();
   input += synapse0x15fa3b0();
   input += synapse0x15fa3f0();
   input += synapse0x15fa430();
   input += synapse0x15fa470();
   input += synapse0x15fa4b0();
   input += synapse0x15fa4f0();
   input += synapse0x15fa530();
   input += synapse0x15fa570();
   input += synapse0x15fa5b0();
   input += synapse0x15e8360();
   input += synapse0x15e83a0();
   input += synapse0x15fa700();
   input += synapse0x15fa740();
   input += synapse0x15fa780();
   input += synapse0x15fa7c0();
   input += synapse0x15fa800();
   input += synapse0x15fa840();
   return input;
}

double NNfunction-NN_1_3::neuron0x15f9fd0() {
   double input = input0x15f9fd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15fa880() {
   double input = 1.15165;
   input += synapse0x15fabc0();
   input += synapse0x15fac00();
   input += synapse0x15fac40();
   input += synapse0x15fac80();
   input += synapse0x15facc0();
   input += synapse0x15fad00();
   input += synapse0x15fad40();
   input += synapse0x15fad80();
   input += synapse0x15fadc0();
   input += synapse0x15fae00();
   input += synapse0x15fae40();
   input += synapse0x15fae80();
   input += synapse0x15faec0();
   input += synapse0x15faf00();
   input += synapse0x15faf40();
   input += synapse0x15faf80();
   input += synapse0x15faa10();
   input += synapse0x15faa50();
   input += synapse0x15fb0d0();
   input += synapse0x15fb110();
   input += synapse0x15fb150();
   input += synapse0x15fb190();
   input += synapse0x15fb1d0();
   input += synapse0x15fb210();
   return input;
}

double NNfunction-NN_1_3::neuron0x15fa880() {
   double input = input0x15fa880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15fb250() {
   double input = 0.670697;
   input += synapse0x15fb590();
   input += synapse0x15fb5d0();
   input += synapse0x15fb610();
   input += synapse0x15fb650();
   input += synapse0x15fb690();
   input += synapse0x15fb6d0();
   input += synapse0x15fb710();
   input += synapse0x15fb750();
   input += synapse0x15fb790();
   input += synapse0x15fb7d0();
   input += synapse0x15fb810();
   input += synapse0x15fb850();
   input += synapse0x15fb890();
   input += synapse0x15fb8d0();
   input += synapse0x15fb910();
   input += synapse0x15fb950();
   input += synapse0x15fb3e0();
   input += synapse0x15fb420();
   input += synapse0x15fbaa0();
   input += synapse0x15fbae0();
   input += synapse0x15fbb20();
   input += synapse0x15fbb60();
   input += synapse0x15fbba0();
   input += synapse0x15fbbe0();
   return input;
}

double NNfunction-NN_1_3::neuron0x15fb250() {
   double input = input0x15fb250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x15fbc20() {
   double input = -2.61919;
   input += synapse0x15fbf60();
   input += synapse0x15fbfa0();
   input += synapse0x15fbfe0();
   input += synapse0x15fc020();
   input += synapse0x15fc060();
   input += synapse0x15fc0a0();
   input += synapse0x15fc0e0();
   input += synapse0x15fc120();
   input += synapse0x15fc160();
   input += synapse0x15fc1a0();
   input += synapse0x15fc1e0();
   input += synapse0x15fc220();
   input += synapse0x15fc260();
   input += synapse0x15fc2a0();
   input += synapse0x15fc2e0();
   input += synapse0x15fc320();
   input += synapse0x15fbdb0();
   input += synapse0x15fbdf0();
   input += synapse0x15fc470();
   input += synapse0x15fc4b0();
   input += synapse0x15fc4f0();
   input += synapse0x15fc530();
   input += synapse0x15fc570();
   input += synapse0x15fc5b0();
   return input;
}

double NNfunction-NN_1_3::neuron0x15fbc20() {
   double input = input0x15fbc20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x1602e20() {
   double input = 0.00954922;
   input += synapse0x15d8b50();
   input += synapse0x15d8b90();
   input += synapse0x15da060();
   input += synapse0x15da0a0();
   input += synapse0x15daa30();
   input += synapse0x15daa70();
   input += synapse0x15db800();
   input += synapse0x15db840();
   input += synapse0x15dc1d0();
   input += synapse0x15dc210();
   input += synapse0x15dcba0();
   input += synapse0x15dcbe0();
   input += synapse0x15dd680();
   input += synapse0x15dd6c0();
   input += synapse0x15de050();
   input += synapse0x15de090();
   input += synapse0x15db130();
   input += synapse0x15db170();
   input += synapse0x15dfc00();
   input += synapse0x15dfc40();
   input += synapse0x15e05d0();
   input += synapse0x15e0610();
   input += synapse0x15e0fa0();
   input += synapse0x15e0fe0();
   input += synapse0x15e1970();
   input += synapse0x15e19b0();
   input += synapse0x15d5ae0();
   input += synapse0x15d5b20();
   input += synapse0x15e3a60();
   input += synapse0x15e3aa0();
   input += synapse0x15e4430();
   input += synapse0x15e4470();
   input += synapse0x15e4e00();
   input += synapse0x15e4e40();
   input += synapse0x15e57d0();
   input += synapse0x15e5810();
   input += synapse0x15e61a0();
   input += synapse0x15e61e0();
   input += synapse0x15decf0();
   input += synapse0x15ded30();
   input += synapse0x15e85a0();
   input += synapse0x15e85e0();
   input += synapse0x15e8f30();
   input += synapse0x15e8f70();
   input += synapse0x15e9900();
   input += synapse0x15e9940();
   input += synapse0x15ea2d0();
   input += synapse0x15ea310();
   input += synapse0x15eaca0();
   input += synapse0x15eace0();
   return input;
}

double NNfunction-NN_1_3::neuron0x1602e20() {
   double input = input0x1602e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x16031c0() {
   double input = -0.11923;
   input += synapse0x15ed3e0();
   input += synapse0x15ed420();
   input += synapse0x15e29a0();
   input += synapse0x15e29e0();
   input += synapse0x15effc0();
   input += synapse0x15f0000();
   input += synapse0x15f0990();
   input += synapse0x15f09d0();
   input += synapse0x15f1360();
   input += synapse0x15f13a0();
   input += synapse0x15f1d30();
   input += synapse0x15f1d70();
   input += synapse0x15f2700();
   input += synapse0x15f2740();
   input += synapse0x15f30d0();
   input += synapse0x15f3110();
   input += synapse0x15f3aa0();
   input += synapse0x15f3ae0();
   input += synapse0x15f4470();
   input += synapse0x15f44b0();
   input += synapse0x15f5050();
   input += synapse0x15f5090();
   input += synapse0x15f5a20();
   input += synapse0x15f5a60();
   input += synapse0x15e68a0();
   input += synapse0x15e68e0();
   input += synapse0x15e7270();
   input += synapse0x15e72b0();
   input += synapse0x15e7c40();
   input += synapse0x15e7c80();
   input += synapse0x15fa160();
   input += synapse0x15fa1a0();
   input += synapse0x15fab30();
   input += synapse0x15fab70();
   input += synapse0x15fb500();
   input += synapse0x15fb540();
   input += synapse0x15fbed0();
   input += synapse0x15fbf10();
   input += synapse0x15d7dc0();
   input += synapse0x15d7e00();
   input += synapse0x15eb670();
   input += synapse0x15eb6b0();
   input += synapse0x15fc5f0();
   input += synapse0x15fc630();
   input += synapse0x15fc670();
   input += synapse0x15fc6b0();
   input += synapse0x1603560();
   input += synapse0x16035a0();
   input += synapse0x16035e0();
   input += synapse0x1603620();
   return input;
}

double NNfunction-NN_1_3::neuron0x16031c0() {
   double input = input0x16031c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x1603660() {
   double input = -0.496499;
   input += synapse0x16039a0();
   input += synapse0x16039e0();
   input += synapse0x1603a20();
   input += synapse0x1603a60();
   input += synapse0x1603aa0();
   input += synapse0x1603ae0();
   input += synapse0x1603b20();
   input += synapse0x1603b60();
   input += synapse0x1603ba0();
   input += synapse0x1603be0();
   input += synapse0x1603c20();
   input += synapse0x1603c60();
   input += synapse0x1603ca0();
   input += synapse0x1603ce0();
   input += synapse0x1603d20();
   input += synapse0x1603d60();
   input += synapse0x16037f0();
   input += synapse0x1603830();
   input += synapse0x1603eb0();
   input += synapse0x1603ef0();
   input += synapse0x1603f30();
   input += synapse0x1603f70();
   input += synapse0x1603fb0();
   input += synapse0x1603ff0();
   input += synapse0x1604030();
   input += synapse0x1604070();
   input += synapse0x16040b0();
   input += synapse0x16040f0();
   input += synapse0x1604130();
   input += synapse0x1604170();
   input += synapse0x16041b0();
   input += synapse0x16041f0();
   input += synapse0x1603da0();
   input += synapse0x1603de0();
   input += synapse0x1603e20();
   input += synapse0x1603e60();
   input += synapse0x1604440();
   input += synapse0x1604480();
   input += synapse0x16044c0();
   input += synapse0x1604500();
   input += synapse0x1604540();
   input += synapse0x1604580();
   input += synapse0x16045c0();
   input += synapse0x1604600();
   input += synapse0x1604640();
   input += synapse0x1604680();
   input += synapse0x16046c0();
   input += synapse0x1604700();
   input += synapse0x1604740();
   input += synapse0x1604780();
   return input;
}

double NNfunction-NN_1_3::neuron0x1603660() {
   double input = input0x1603660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x16047c0() {
   double input = 0.782207;
   input += synapse0x1604b00();
   input += synapse0x1604b40();
   input += synapse0x1604b80();
   input += synapse0x1604bc0();
   input += synapse0x1604c00();
   input += synapse0x1604c40();
   input += synapse0x1604c80();
   input += synapse0x1604cc0();
   input += synapse0x1604d00();
   input += synapse0x1604d40();
   input += synapse0x1604d80();
   input += synapse0x1604dc0();
   input += synapse0x1604e00();
   input += synapse0x1604e40();
   input += synapse0x1604e80();
   input += synapse0x1604ec0();
   input += synapse0x1604950();
   input += synapse0x1604990();
   input += synapse0x1605010();
   input += synapse0x1605050();
   input += synapse0x1605090();
   input += synapse0x16050d0();
   input += synapse0x1605110();
   input += synapse0x1605150();
   input += synapse0x1605190();
   input += synapse0x16051d0();
   input += synapse0x1605210();
   input += synapse0x1605250();
   input += synapse0x1605290();
   input += synapse0x16052d0();
   input += synapse0x1605310();
   input += synapse0x1605350();
   input += synapse0x1604f00();
   input += synapse0x1604f40();
   input += synapse0x1604f80();
   input += synapse0x1604fc0();
   input += synapse0x16055a0();
   input += synapse0x16055e0();
   input += synapse0x1605620();
   input += synapse0x1605660();
   input += synapse0x16056a0();
   input += synapse0x16056e0();
   input += synapse0x1605720();
   input += synapse0x1605760();
   input += synapse0x16057a0();
   input += synapse0x16057e0();
   input += synapse0x1605820();
   input += synapse0x1605860();
   input += synapse0x16058a0();
   input += synapse0x16058e0();
   return input;
}

double NNfunction-NN_1_3::neuron0x16047c0() {
   double input = input0x16047c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x1605920() {
   double input = 0.00969924;
   input += synapse0x1605c60();
   input += synapse0x1605ca0();
   input += synapse0x1605ce0();
   input += synapse0x1605d20();
   input += synapse0x1605d60();
   input += synapse0x1605da0();
   input += synapse0x1605de0();
   input += synapse0x1605e20();
   input += synapse0x1605e60();
   input += synapse0x1605ea0();
   input += synapse0x1605ee0();
   input += synapse0x1605f20();
   input += synapse0x1605f60();
   input += synapse0x1605fa0();
   input += synapse0x1605fe0();
   input += synapse0x1606020();
   input += synapse0x1605ab0();
   input += synapse0x1605af0();
   input += synapse0x1606170();
   input += synapse0x16061b0();
   input += synapse0x16061f0();
   input += synapse0x1606230();
   input += synapse0x1606270();
   input += synapse0x16062b0();
   input += synapse0x16062f0();
   input += synapse0x1606330();
   input += synapse0x1606370();
   input += synapse0x16063b0();
   input += synapse0x16063f0();
   input += synapse0x1606430();
   input += synapse0x1606470();
   input += synapse0x16064b0();
   input += synapse0x1606060();
   input += synapse0x16060a0();
   input += synapse0x16060e0();
   input += synapse0x1606120();
   input += synapse0x1606700();
   input += synapse0x1606740();
   input += synapse0x1606780();
   input += synapse0x16067c0();
   input += synapse0x1606800();
   input += synapse0x1606840();
   input += synapse0x1606880();
   input += synapse0x16068c0();
   input += synapse0x1606900();
   input += synapse0x1606940();
   input += synapse0x1606980();
   input += synapse0x16069c0();
   input += synapse0x1606a00();
   input += synapse0x1606a40();
   return input;
}

double NNfunction-NN_1_3::neuron0x1605920() {
   double input = input0x1605920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_1_3::input0x1606a80() {
   double input = 2.68876;
   input += synapse0x15d7b60();
   input += synapse0x1606ca0();
   input += synapse0x1606ce0();
   input += synapse0x1606d20();
   input += synapse0x1606d60();
   return input;
}

double NNfunction-NN_1_3::neuron0x1606a80() {
   double input = input0x1606a80();
   return (input * 1)+0;
}

double NNfunction-NN_1_3::synapse0x13929b0() {
   return (neuron0x15d2b40()*-0.179316);
}

double NNfunction-NN_1_3::synapse0x15d2a00() {
   return (neuron0x15d2e80()*-0.423992);
}

double NNfunction-NN_1_3::synapse0x15d2a40() {
   return (neuron0x15d31c0()*-1.03539);
}

double NNfunction-NN_1_3::synapse0x15d7e50() {
   return (neuron0x15d3500()*-0.106417);
}

double NNfunction-NN_1_3::synapse0x15d7e90() {
   return (neuron0x15d3840()*0.420318);
}

double NNfunction-NN_1_3::synapse0x15d7ed0() {
   return (neuron0x15d3b80()*-0.393154);
}

double NNfunction-NN_1_3::synapse0x15d7f10() {
   return (neuron0x15d3ec0()*-0.0178335);
}

double NNfunction-NN_1_3::synapse0x15d7f50() {
   return (neuron0x15d4200()*0.647851);
}

double NNfunction-NN_1_3::synapse0x15d7f90() {
   return (neuron0x15d4540()*-0.236964);
}

double NNfunction-NN_1_3::synapse0x15d7fd0() {
   return (neuron0x15d4880()*-0.346953);
}

double NNfunction-NN_1_3::synapse0x15d8010() {
   return (neuron0x15d4bc0()*0.523344);
}

double NNfunction-NN_1_3::synapse0x15d8050() {
   return (neuron0x15d4f00()*0.401244);
}

double NNfunction-NN_1_3::synapse0x15d8090() {
   return (neuron0x15d5240()*0.194633);
}

double NNfunction-NN_1_3::synapse0x15d80d0() {
   return (neuron0x15d5580()*1.13393);
}

double NNfunction-NN_1_3::synapse0x15d8110() {
   return (neuron0x15d58c0()*-1.15307);
}

double NNfunction-NN_1_3::synapse0x15d8150() {
   return (neuron0x15d5c00()*0.0606318);
}

double NNfunction-NN_1_3::synapse0x15d2970() {
   return (neuron0x15d5f40()*-0.254231);
}

double NNfunction-NN_1_3::synapse0x15d29b0() {
   return (neuron0x15d64a0()*-0.0987269);
}

double NNfunction-NN_1_3::synapse0x1384210() {
   return (neuron0x15d66c0()*-0.406399);
}

double NNfunction-NN_1_3::synapse0x1384250() {
   return (neuron0x15d6a00()*0.561208);
}

double NNfunction-NN_1_3::synapse0x15d83b0() {
   return (neuron0x15d6d40()*-0.139233);
}

double NNfunction-NN_1_3::synapse0x15d83f0() {
   return (neuron0x15d7080()*-0.12593);
}

double NNfunction-NN_1_3::synapse0x15d8430() {
   return (neuron0x15d73c0()*0.542694);
}

double NNfunction-NN_1_3::synapse0x15d8470() {
   return (neuron0x15d7700()*-0.565491);
}

double NNfunction-NN_1_3::synapse0x15d87f0() {
   return (neuron0x15d2b40()*-0.222322);
}

double NNfunction-NN_1_3::synapse0x15d8830() {
   return (neuron0x15d2e80()*0.0433117);
}

double NNfunction-NN_1_3::synapse0x15d8870() {
   return (neuron0x15d31c0()*-0.137425);
}

double NNfunction-NN_1_3::synapse0x15d88b0() {
   return (neuron0x15d3500()*-0.0273204);
}

double NNfunction-NN_1_3::synapse0x15d88f0() {
   return (neuron0x15d3840()*-0.0306714);
}

double NNfunction-NN_1_3::synapse0x15d8930() {
   return (neuron0x15d3b80()*-0.0191917);
}

double NNfunction-NN_1_3::synapse0x15d8970() {
   return (neuron0x15d3ec0()*-0.0360594);
}

double NNfunction-NN_1_3::synapse0x15d89b0() {
   return (neuron0x15d4200()*0.0217235);
}

double NNfunction-NN_1_3::synapse0x15d89f0() {
   return (neuron0x15d4540()*-0.0264927);
}

double NNfunction-NN_1_3::synapse0x15d82a0() {
   return (neuron0x15d4880()*-0.0473707);
}

double NNfunction-NN_1_3::synapse0x15d82e0() {
   return (neuron0x15d4bc0()*-0.00583428);
}

double NNfunction-NN_1_3::synapse0x15d8320() {
   return (neuron0x15d4f00()*0.154315);
}

double NNfunction-NN_1_3::synapse0x15d8360() {
   return (neuron0x15d5240()*0.0280395);
}

double NNfunction-NN_1_3::synapse0x15d8c40() {
   return (neuron0x15d5580()*0.022677);
}

double NNfunction-NN_1_3::synapse0x15d8c80() {
   return (neuron0x15d58c0()*0.0656199);
}

double NNfunction-NN_1_3::synapse0x15d8cc0() {
   return (neuron0x15d5c00()*-0.0161298);
}

double NNfunction-NN_1_3::synapse0x15d8640() {
   return (neuron0x15d5f40()*-0.0211577);
}

double NNfunction-NN_1_3::synapse0x15d8680() {
   return (neuron0x15d64a0()*0.0385313);
}

double NNfunction-NN_1_3::synapse0x15d8e10() {
   return (neuron0x15d66c0()*-0.00801556);
}

double NNfunction-NN_1_3::synapse0x15d8e50() {
   return (neuron0x15d6a00()*0.0107123);
}

double NNfunction-NN_1_3::synapse0x15d8e90() {
   return (neuron0x15d6d40()*0.00647855);
}

double NNfunction-NN_1_3::synapse0x15d8ed0() {
   return (neuron0x15d7080()*-0.00929938);
}

double NNfunction-NN_1_3::synapse0x15d8f10() {
   return (neuron0x15d73c0()*0.0260782);
}

double NNfunction-NN_1_3::synapse0x15d8f50() {
   return (neuron0x15d7700()*-5.15297);
}

double NNfunction-NN_1_3::synapse0x15d92d0() {
   return (neuron0x15d2b40()*1.38779);
}

double NNfunction-NN_1_3::synapse0x15d9310() {
   return (neuron0x15d2e80()*-0.0380673);
}

double NNfunction-NN_1_3::synapse0x15d9350() {
   return (neuron0x15d31c0()*-0.560947);
}

double NNfunction-NN_1_3::synapse0x15d9390() {
   return (neuron0x15d3500()*-0.166535);
}

double NNfunction-NN_1_3::synapse0x15d93d0() {
   return (neuron0x15d3840()*0.118121);
}

double NNfunction-NN_1_3::synapse0x15d9410() {
   return (neuron0x15d3b80()*-0.0313622);
}

double NNfunction-NN_1_3::synapse0x15d9450() {
   return (neuron0x15d3ec0()*-0.212978);
}

double NNfunction-NN_1_3::synapse0x15d9490() {
   return (neuron0x15d4200()*-0.108986);
}

double NNfunction-NN_1_3::synapse0x15d94d0() {
   return (neuron0x15d4540()*0.105693);
}

double NNfunction-NN_1_3::synapse0x15d9510() {
   return (neuron0x15d4880()*-0.0427529);
}

double NNfunction-NN_1_3::synapse0x15d9550() {
   return (neuron0x15d4bc0()*0.12875);
}

double NNfunction-NN_1_3::synapse0x15d9590() {
   return (neuron0x15d4f00()*-0.482668);
}

double NNfunction-NN_1_3::synapse0x15d95d0() {
   return (neuron0x15d5240()*0.0877463);
}

double NNfunction-NN_1_3::synapse0x15d9610() {
   return (neuron0x15d5580()*0.121382);
}

double NNfunction-NN_1_3::synapse0x15d9650() {
   return (neuron0x15d58c0()*0.144817);
}

double NNfunction-NN_1_3::synapse0x15d9690() {
   return (neuron0x15d5c00()*-0.0351135);
}

double NNfunction-NN_1_3::synapse0x15d9120() {
   return (neuron0x15d5f40()*0.0426568);
}

double NNfunction-NN_1_3::synapse0x15d9160() {
   return (neuron0x15d64a0()*0.346046);
}

double NNfunction-NN_1_3::synapse0x1392080() {
   return (neuron0x15d66c0()*-0.118234);
}

double NNfunction-NN_1_3::synapse0x13920c0() {
   return (neuron0x15d6a00()*-0.182453);
}

double NNfunction-NN_1_3::synapse0x15c1bd0() {
   return (neuron0x15d6d40()*-0.0507558);
}

double NNfunction-NN_1_3::synapse0x15c1c10() {
   return (neuron0x15d7080()*-0.0440125);
}

double NNfunction-NN_1_3::synapse0x15c1c50() {
   return (neuron0x15d73c0()*-0.249182);
}

double NNfunction-NN_1_3::synapse0x15d2a80() {
   return (neuron0x15d7700()*-1.25181);
}

double NNfunction-NN_1_3::synapse0x15d8be0() {
   return (neuron0x15d2b40()*0.280462);
}

double NNfunction-NN_1_3::synapse0x15d2ac0() {
   return (neuron0x15d2e80()*-0.611837);
}

double NNfunction-NN_1_3::synapse0x15d2b00() {
   return (neuron0x15d31c0()*0.0571547);
}

double NNfunction-NN_1_3::synapse0x15d97e0() {
   return (neuron0x15d3500()*0.0235341);
}

double NNfunction-NN_1_3::synapse0x15d9820() {
   return (neuron0x15d3840()*-0.0584252);
}

double NNfunction-NN_1_3::synapse0x15d9860() {
   return (neuron0x15d3b80()*0.152132);
}

double NNfunction-NN_1_3::synapse0x15d98a0() {
   return (neuron0x15d3ec0()*0.171939);
}

double NNfunction-NN_1_3::synapse0x15d98e0() {
   return (neuron0x15d4200()*0.928949);
}

double NNfunction-NN_1_3::synapse0x15d9920() {
   return (neuron0x15d4540()*0.506852);
}

double NNfunction-NN_1_3::synapse0x15d9960() {
   return (neuron0x15d4880()*-0.367809);
}

double NNfunction-NN_1_3::synapse0x15d99a0() {
   return (neuron0x15d4bc0()*0.345252);
}

double NNfunction-NN_1_3::synapse0x15d99e0() {
   return (neuron0x15d4f00()*0.629081);
}

double NNfunction-NN_1_3::synapse0x15d9a20() {
   return (neuron0x15d5240()*-0.22771);
}

double NNfunction-NN_1_3::synapse0x15d9a60() {
   return (neuron0x15d5580()*0.182668);
}

double NNfunction-NN_1_3::synapse0x15d9aa0() {
   return (neuron0x15d58c0()*-0.0363607);
}

double NNfunction-NN_1_3::synapse0x15d9ae0() {
   return (neuron0x15d5c00()*1.28645);
}

double NNfunction-NN_1_3::synapse0x15d8a30() {
   return (neuron0x15d5f40()*0.869329);
}

double NNfunction-NN_1_3::synapse0x15d8a70() {
   return (neuron0x15d64a0()*-1.23926);
}

double NNfunction-NN_1_3::synapse0x15d9c30() {
   return (neuron0x15d66c0()*-0.530426);
}

double NNfunction-NN_1_3::synapse0x15d9c70() {
   return (neuron0x15d6a00()*-0.133934);
}

double NNfunction-NN_1_3::synapse0x15d9cb0() {
   return (neuron0x15d6d40()*0.618322);
}

double NNfunction-NN_1_3::synapse0x15d9cf0() {
   return (neuron0x15d7080()*-0.708848);
}

double NNfunction-NN_1_3::synapse0x15d9d30() {
   return (neuron0x15d73c0()*-0.473456);
}

double NNfunction-NN_1_3::synapse0x15d9d70() {
   return (neuron0x15d7700()*0.55046);
}

double NNfunction-NN_1_3::synapse0x15da0f0() {
   return (neuron0x15d2b40()*0.226811);
}

double NNfunction-NN_1_3::synapse0x15da130() {
   return (neuron0x15d2e80()*-0.555935);
}

double NNfunction-NN_1_3::synapse0x15da170() {
   return (neuron0x15d31c0()*1.95057);
}

double NNfunction-NN_1_3::synapse0x15da1b0() {
   return (neuron0x15d3500()*0.286758);
}

double NNfunction-NN_1_3::synapse0x15da1f0() {
   return (neuron0x15d3840()*0.00397919);
}

double NNfunction-NN_1_3::synapse0x15da230() {
   return (neuron0x15d3b80()*-0.192047);
}

double NNfunction-NN_1_3::synapse0x15da270() {
   return (neuron0x15d3ec0()*-0.248899);
}

double NNfunction-NN_1_3::synapse0x15da2b0() {
   return (neuron0x15d4200()*-0.0463306);
}

double NNfunction-NN_1_3::synapse0x15da2f0() {
   return (neuron0x15d4540()*0.09892);
}

double NNfunction-NN_1_3::synapse0x15da330() {
   return (neuron0x15d4880()*0.192235);
}

double NNfunction-NN_1_3::synapse0x15da370() {
   return (neuron0x15d4bc0()*0.213621);
}

double NNfunction-NN_1_3::synapse0x15da3b0() {
   return (neuron0x15d4f00()*0.90694);
}

double NNfunction-NN_1_3::synapse0x15da3f0() {
   return (neuron0x15d5240()*-0.603649);
}

double NNfunction-NN_1_3::synapse0x15da430() {
   return (neuron0x15d5580()*0.747305);
}

double NNfunction-NN_1_3::synapse0x15da470() {
   return (neuron0x15d58c0()*-0.485339);
}

double NNfunction-NN_1_3::synapse0x15da4b0() {
   return (neuron0x15d5c00()*-0.0167353);
}

double NNfunction-NN_1_3::synapse0x15d9f40() {
   return (neuron0x15d5f40()*0.908279);
}

double NNfunction-NN_1_3::synapse0x15d9f80() {
   return (neuron0x15d64a0()*-0.878614);
}

double NNfunction-NN_1_3::synapse0x15da600() {
   return (neuron0x15d66c0()*-0.431891);
}

double NNfunction-NN_1_3::synapse0x15da640() {
   return (neuron0x15d6a00()*-0.0426695);
}

double NNfunction-NN_1_3::synapse0x15da680() {
   return (neuron0x15d6d40()*-0.346854);
}

double NNfunction-NN_1_3::synapse0x15da6c0() {
   return (neuron0x15d7080()*0.185911);
}

double NNfunction-NN_1_3::synapse0x15da700() {
   return (neuron0x15d73c0()*0.211945);
}

double NNfunction-NN_1_3::synapse0x15da740() {
   return (neuron0x15d7700()*-0.492116);
}

double NNfunction-NN_1_3::synapse0x15daac0() {
   return (neuron0x15d2b40()*0.0518543);
}

double NNfunction-NN_1_3::synapse0x15dab00() {
   return (neuron0x15d2e80()*23.9748);
}

double NNfunction-NN_1_3::synapse0x15dab40() {
   return (neuron0x15d31c0()*0.365247);
}

double NNfunction-NN_1_3::synapse0x15dab80() {
   return (neuron0x15d3500()*-0.00359476);
}

double NNfunction-NN_1_3::synapse0x15dabc0() {
   return (neuron0x15d3840()*0.0334679);
}

double NNfunction-NN_1_3::synapse0x15dac00() {
   return (neuron0x15d3b80()*-0.00271591);
}

double NNfunction-NN_1_3::synapse0x15dac40() {
   return (neuron0x15d3ec0()*-0.0146606);
}

double NNfunction-NN_1_3::synapse0x15dac80() {
   return (neuron0x15d4200()*-0.0110764);
}

double NNfunction-NN_1_3::synapse0x15dacc0() {
   return (neuron0x15d4540()*0.00881846);
}

double NNfunction-NN_1_3::synapse0x1392410() {
   return (neuron0x15d4880()*0.0118493);
}

double NNfunction-NN_1_3::synapse0x1392450() {
   return (neuron0x15d4bc0()*-0.0145987);
}

double NNfunction-NN_1_3::synapse0x1392490() {
   return (neuron0x15d4f00()*-0.02356);
}

double NNfunction-NN_1_3::synapse0x13924d0() {
   return (neuron0x15d5240()*-0.00480079);
}

double NNfunction-NN_1_3::synapse0x1392510() {
   return (neuron0x15d5580()*0.0295517);
}

double NNfunction-NN_1_3::synapse0x1392550() {
   return (neuron0x15d58c0()*0.0446268);
}

double NNfunction-NN_1_3::synapse0x1392590() {
   return (neuron0x15d5c00()*0.0110479);
}

double NNfunction-NN_1_3::synapse0x15da910() {
   return (neuron0x15d5f40()*0.00543426);
}

double NNfunction-NN_1_3::synapse0x15da950() {
   return (neuron0x15d64a0()*-0.00296972);
}

double NNfunction-NN_1_3::synapse0x13926e0() {
   return (neuron0x15d66c0()*0.00972681);
}

double NNfunction-NN_1_3::synapse0x1392720() {
   return (neuron0x15d6a00()*-0.0132059);
}

double NNfunction-NN_1_3::synapse0x1392760() {
   return (neuron0x15d6d40()*0.0291061);
}

double NNfunction-NN_1_3::synapse0x13927a0() {
   return (neuron0x15d7080()*0.00826506);
}

double NNfunction-NN_1_3::synapse0x13927e0() {
   return (neuron0x15d73c0()*0.0160952);
}

double NNfunction-NN_1_3::synapse0x15db510() {
   return (neuron0x15d7700()*0.00823885);
}

double NNfunction-NN_1_3::synapse0x15db890() {
   return (neuron0x15d2b40()*0.0304445);
}

double NNfunction-NN_1_3::synapse0x15db8d0() {
   return (neuron0x15d2e80()*-0.0253841);
}

double NNfunction-NN_1_3::synapse0x15db910() {
   return (neuron0x15d31c0()*-5.92728);
}

double NNfunction-NN_1_3::synapse0x15db950() {
   return (neuron0x15d3500()*-0.000264522);
}

double NNfunction-NN_1_3::synapse0x15db990() {
   return (neuron0x15d3840()*-0.0203025);
}

double NNfunction-NN_1_3::synapse0x15db9d0() {
   return (neuron0x15d3b80()*-0.0110332);
}

double NNfunction-NN_1_3::synapse0x15dba10() {
   return (neuron0x15d3ec0()*-0.00624659);
}

double NNfunction-NN_1_3::synapse0x15dba50() {
   return (neuron0x15d4200()*-0.0267613);
}

double NNfunction-NN_1_3::synapse0x15dba90() {
   return (neuron0x15d4540()*0.00378916);
}

double NNfunction-NN_1_3::synapse0x15dbad0() {
   return (neuron0x15d4880()*-0.0190904);
}

double NNfunction-NN_1_3::synapse0x15dbb10() {
   return (neuron0x15d4bc0()*0.0104604);
}

double NNfunction-NN_1_3::synapse0x15dbb50() {
   return (neuron0x15d4f00()*0.329561);
}

double NNfunction-NN_1_3::synapse0x15dbb90() {
   return (neuron0x15d5240()*0.176308);
}

double NNfunction-NN_1_3::synapse0x15dbbd0() {
   return (neuron0x15d5580()*-0.00362181);
}

double NNfunction-NN_1_3::synapse0x15dbc10() {
   return (neuron0x15d58c0()*0.0158268);
}

double NNfunction-NN_1_3::synapse0x15dbc50() {
   return (neuron0x15d5c00()*-0.0239813);
}

double NNfunction-NN_1_3::synapse0x15db6e0() {
   return (neuron0x15d5f40()*-0.00596382);
}

double NNfunction-NN_1_3::synapse0x15db720() {
   return (neuron0x15d64a0()*0.00799603);
}

double NNfunction-NN_1_3::synapse0x15dbda0() {
   return (neuron0x15d66c0()*-0.00459963);
}

double NNfunction-NN_1_3::synapse0x15dbde0() {
   return (neuron0x15d6a00()*0.0275532);
}

double NNfunction-NN_1_3::synapse0x15dbe20() {
   return (neuron0x15d6d40()*-0.0247338);
}

double NNfunction-NN_1_3::synapse0x15dbe60() {
   return (neuron0x15d7080()*-0.0099421);
}

double NNfunction-NN_1_3::synapse0x15dbea0() {
   return (neuron0x15d73c0()*0.019745);
}

double NNfunction-NN_1_3::synapse0x15dbee0() {
   return (neuron0x15d7700()*0.056406);
}

double NNfunction-NN_1_3::synapse0x15dc260() {
   return (neuron0x15d2b40()*-0.155247);
}

double NNfunction-NN_1_3::synapse0x15dc2a0() {
   return (neuron0x15d2e80()*0.0126212);
}

double NNfunction-NN_1_3::synapse0x15dc2e0() {
   return (neuron0x15d31c0()*2.06155);
}

double NNfunction-NN_1_3::synapse0x15dc320() {
   return (neuron0x15d3500()*-0.0147763);
}

double NNfunction-NN_1_3::synapse0x15dc360() {
   return (neuron0x15d3840()*0.0235523);
}

double NNfunction-NN_1_3::synapse0x15dc3a0() {
   return (neuron0x15d3b80()*0.0218261);
}

double NNfunction-NN_1_3::synapse0x15dc3e0() {
   return (neuron0x15d3ec0()*0.0052802);
}

double NNfunction-NN_1_3::synapse0x15dc420() {
   return (neuron0x15d4200()*0.0188662);
}

double NNfunction-NN_1_3::synapse0x15dc460() {
   return (neuron0x15d4540()*0.00683735);
}

double NNfunction-NN_1_3::synapse0x15dc4a0() {
   return (neuron0x15d4880()*-0.0221113);
}

double NNfunction-NN_1_3::synapse0x15dc4e0() {
   return (neuron0x15d4bc0()*0.0396028);
}

double NNfunction-NN_1_3::synapse0x15dc520() {
   return (neuron0x15d4f00()*0.040768);
}

double NNfunction-NN_1_3::synapse0x15dc560() {
   return (neuron0x15d5240()*0.0121107);
}

double NNfunction-NN_1_3::synapse0x15dc5a0() {
   return (neuron0x15d5580()*-0.0024778);
}

double NNfunction-NN_1_3::synapse0x15dc5e0() {
   return (neuron0x15d58c0()*-0.072817);
}

double NNfunction-NN_1_3::synapse0x15dc620() {
   return (neuron0x15d5c00()*0.000319675);
}

double NNfunction-NN_1_3::synapse0x15dc0b0() {
   return (neuron0x15d5f40()*-0.0292211);
}

double NNfunction-NN_1_3::synapse0x15dc0f0() {
   return (neuron0x15d64a0()*-0.0146928);
}

double NNfunction-NN_1_3::synapse0x15dc770() {
   return (neuron0x15d66c0()*0.000409629);
}

double NNfunction-NN_1_3::synapse0x15dc7b0() {
   return (neuron0x15d6a00()*0.042804);
}

double NNfunction-NN_1_3::synapse0x15dc7f0() {
   return (neuron0x15d6d40()*0.00486393);
}

double NNfunction-NN_1_3::synapse0x15dc830() {
   return (neuron0x15d7080()*0.0158741);
}

double NNfunction-NN_1_3::synapse0x15dc870() {
   return (neuron0x15d73c0()*-0.0225248);
}

double NNfunction-NN_1_3::synapse0x15dc8b0() {
   return (neuron0x15d7700()*3.2775);
}

double NNfunction-NN_1_3::synapse0x15d6390() {
   return (neuron0x15d2b40()*-0.61912);
}

double NNfunction-NN_1_3::synapse0x15d63d0() {
   return (neuron0x15d2e80()*1.20324);
}

double NNfunction-NN_1_3::synapse0x15d6410() {
   return (neuron0x15d31c0()*0.0467931);
}

double NNfunction-NN_1_3::synapse0x15d6450() {
   return (neuron0x15d3500()*-0.031958);
}

double NNfunction-NN_1_3::synapse0x15dce40() {
   return (neuron0x15d3840()*-0.328729);
}

double NNfunction-NN_1_3::synapse0x15dce80() {
   return (neuron0x15d3b80()*-0.0966304);
}

double NNfunction-NN_1_3::synapse0x15dcec0() {
   return (neuron0x15d3ec0()*0.241013);
}

double NNfunction-NN_1_3::synapse0x15dcf00() {
   return (neuron0x15d4200()*-0.182693);
}

double NNfunction-NN_1_3::synapse0x15dcf40() {
   return (neuron0x15d4540()*-0.014435);
}

double NNfunction-NN_1_3::synapse0x15dcf80() {
   return (neuron0x15d4880()*0.238895);
}

double NNfunction-NN_1_3::synapse0x15dcfc0() {
   return (neuron0x15d4bc0()*-0.32952);
}

double NNfunction-NN_1_3::synapse0x15dd000() {
   return (neuron0x15d4f00()*0.217316);
}

double NNfunction-NN_1_3::synapse0x15dd040() {
   return (neuron0x15d5240()*-0.661937);
}

double NNfunction-NN_1_3::synapse0x15dd080() {
   return (neuron0x15d5580()*-0.647017);
}

double NNfunction-NN_1_3::synapse0x15dd0c0() {
   return (neuron0x15d58c0()*-0.733226);
}

double NNfunction-NN_1_3::synapse0x15dd100() {
   return (neuron0x15d5c00()*0.711986);
}

double NNfunction-NN_1_3::synapse0x15dca80() {
   return (neuron0x15d5f40()*0.372788);
}

double NNfunction-NN_1_3::synapse0x15dcac0() {
   return (neuron0x15d64a0()*-0.106175);
}

double NNfunction-NN_1_3::synapse0x15dd250() {
   return (neuron0x15d66c0()*-0.546478);
}

double NNfunction-NN_1_3::synapse0x15dd290() {
   return (neuron0x15d6a00()*0.117477);
}

double NNfunction-NN_1_3::synapse0x15dd2d0() {
   return (neuron0x15d6d40()*-0.577375);
}

double NNfunction-NN_1_3::synapse0x15dd310() {
   return (neuron0x15d7080()*0.20693);
}

double NNfunction-NN_1_3::synapse0x15dd350() {
   return (neuron0x15d73c0()*0.0193906);
}

double NNfunction-NN_1_3::synapse0x15dd390() {
   return (neuron0x15d7700()*1.54794);
}

double NNfunction-NN_1_3::synapse0x15dd710() {
   return (neuron0x15d2b40()*-0.0114707);
}

double NNfunction-NN_1_3::synapse0x15dd750() {
   return (neuron0x15d2e80()*0.00453143);
}

double NNfunction-NN_1_3::synapse0x15dd790() {
   return (neuron0x15d31c0()*-0.538495);
}

double NNfunction-NN_1_3::synapse0x15dd7d0() {
   return (neuron0x15d3500()*-0.000115253);
}

double NNfunction-NN_1_3::synapse0x15dd810() {
   return (neuron0x15d3840()*0.0277089);
}

double NNfunction-NN_1_3::synapse0x15dd850() {
   return (neuron0x15d3b80()*0.0464048);
}

double NNfunction-NN_1_3::synapse0x15dd890() {
   return (neuron0x15d3ec0()*-0.0388744);
}

double NNfunction-NN_1_3::synapse0x15dd8d0() {
   return (neuron0x15d4200()*0.0234907);
}

double NNfunction-NN_1_3::synapse0x15dd910() {
   return (neuron0x15d4540()*-0.0412418);
}

double NNfunction-NN_1_3::synapse0x15dd950() {
   return (neuron0x15d4880()*0.032155);
}

double NNfunction-NN_1_3::synapse0x15dd990() {
   return (neuron0x15d4bc0()*-0.0542411);
}

double NNfunction-NN_1_3::synapse0x15dd9d0() {
   return (neuron0x15d4f00()*-0.128145);
}

double NNfunction-NN_1_3::synapse0x15dda10() {
   return (neuron0x15d5240()*-0.0164311);
}

double NNfunction-NN_1_3::synapse0x15dda50() {
   return (neuron0x15d5580()*0.0218393);
}

double NNfunction-NN_1_3::synapse0x15dda90() {
   return (neuron0x15d58c0()*-0.0799043);
}

double NNfunction-NN_1_3::synapse0x15ddad0() {
   return (neuron0x15d5c00()*-0.03362);
}

double NNfunction-NN_1_3::synapse0x15dd560() {
   return (neuron0x15d5f40()*-0.012683);
}

double NNfunction-NN_1_3::synapse0x15dd5a0() {
   return (neuron0x15d64a0()*-0.0174731);
}

double NNfunction-NN_1_3::synapse0x15ddc20() {
   return (neuron0x15d66c0()*-0.068128);
}

double NNfunction-NN_1_3::synapse0x15ddc60() {
   return (neuron0x15d6a00()*-0.0377596);
}

double NNfunction-NN_1_3::synapse0x15ddca0() {
   return (neuron0x15d6d40()*0.0268228);
}

double NNfunction-NN_1_3::synapse0x15ddce0() {
   return (neuron0x15d7080()*-0.0493676);
}

double NNfunction-NN_1_3::synapse0x15ddd20() {
   return (neuron0x15d73c0()*-0.0140437);
}

double NNfunction-NN_1_3::synapse0x15ddd60() {
   return (neuron0x15d7700()*1.22189);
}

double NNfunction-NN_1_3::synapse0x15de0e0() {
   return (neuron0x15d2b40()*-0.0910648);
}

double NNfunction-NN_1_3::synapse0x15de120() {
   return (neuron0x15d2e80()*-12.0392);
}

double NNfunction-NN_1_3::synapse0x15de160() {
   return (neuron0x15d31c0()*-0.880931);
}

double NNfunction-NN_1_3::synapse0x15de1a0() {
   return (neuron0x15d3500()*0.000166276);
}

double NNfunction-NN_1_3::synapse0x15de1e0() {
   return (neuron0x15d3840()*-0.00893494);
}

double NNfunction-NN_1_3::synapse0x15de220() {
   return (neuron0x15d3b80()*-0.0050342);
}

double NNfunction-NN_1_3::synapse0x15de260() {
   return (neuron0x15d3ec0()*-0.00317153);
}

double NNfunction-NN_1_3::synapse0x15de2a0() {
   return (neuron0x15d4200()*-0.0068495);
}

double NNfunction-NN_1_3::synapse0x15de2e0() {
   return (neuron0x15d4540()*0.00316261);
}

double NNfunction-NN_1_3::synapse0x15de320() {
   return (neuron0x15d4880()*0.0137195);
}

double NNfunction-NN_1_3::synapse0x15de360() {
   return (neuron0x15d4bc0()*-0.00630777);
}

double NNfunction-NN_1_3::synapse0x15de3a0() {
   return (neuron0x15d4f00()*-0.0492475);
}

double NNfunction-NN_1_3::synapse0x15de3e0() {
   return (neuron0x15d5240()*-0.00867305);
}

double NNfunction-NN_1_3::synapse0x15de420() {
   return (neuron0x15d5580()*0.00776668);
}

double NNfunction-NN_1_3::synapse0x15de460() {
   return (neuron0x15d58c0()*-0.0201423);
}

double NNfunction-NN_1_3::synapse0x15de4a0() {
   return (neuron0x15d5c00()*-0.00883279);
}

double NNfunction-NN_1_3::synapse0x15ddf30() {
   return (neuron0x15d5f40()*-0.00952329);
}

double NNfunction-NN_1_3::synapse0x15ddf70() {
   return (neuron0x15d64a0()*-0.00380971);
}

double NNfunction-NN_1_3::synapse0x15dad00() {
   return (neuron0x15d66c0()*-0.0196969);
}

double NNfunction-NN_1_3::synapse0x15dad40() {
   return (neuron0x15d6a00()*0.00414567);
}

double NNfunction-NN_1_3::synapse0x15dad80() {
   return (neuron0x15d6d40()*-0.0213872);
}

double NNfunction-NN_1_3::synapse0x15dadc0() {
   return (neuron0x15d7080()*-0.00931456);
}

double NNfunction-NN_1_3::synapse0x15dae00() {
   return (neuron0x15d73c0()*-0.0198802);
}

double NNfunction-NN_1_3::synapse0x15dae40() {
   return (neuron0x15d7700()*-2.7732);
}

double NNfunction-NN_1_3::synapse0x15db1c0() {
   return (neuron0x15d2b40()*-0.216356);
}

double NNfunction-NN_1_3::synapse0x15db200() {
   return (neuron0x15d2e80()*-0.402422);
}

double NNfunction-NN_1_3::synapse0x15db240() {
   return (neuron0x15d31c0()*0.057713);
}

double NNfunction-NN_1_3::synapse0x15db280() {
   return (neuron0x15d3500()*-0.121396);
}

double NNfunction-NN_1_3::synapse0x15db2c0() {
   return (neuron0x15d3840()*-0.0830704);
}

double NNfunction-NN_1_3::synapse0x15db300() {
   return (neuron0x15d3b80()*0.247134);
}

double NNfunction-NN_1_3::synapse0x15db340() {
   return (neuron0x15d3ec0()*-0.0185574);
}

double NNfunction-NN_1_3::synapse0x15db380() {
   return (neuron0x15d4200()*-0.465289);
}

double NNfunction-NN_1_3::synapse0x15db3c0() {
   return (neuron0x15d4540()*0.3296);
}

double NNfunction-NN_1_3::synapse0x15db400() {
   return (neuron0x15d4880()*-0.186732);
}

double NNfunction-NN_1_3::synapse0x15db440() {
   return (neuron0x15d4bc0()*-0.475096);
}

double NNfunction-NN_1_3::synapse0x15db480() {
   return (neuron0x15d4f00()*-0.148612);
}

double NNfunction-NN_1_3::synapse0x15db4c0() {
   return (neuron0x15d5240()*-0.314368);
}

double NNfunction-NN_1_3::synapse0x15df600() {
   return (neuron0x15d5580()*-0.563833);
}

double NNfunction-NN_1_3::synapse0x15df640() {
   return (neuron0x15d58c0()*0.330638);
}

double NNfunction-NN_1_3::synapse0x15df680() {
   return (neuron0x15d5c00()*0.0474497);
}

double NNfunction-NN_1_3::synapse0x15db010() {
   return (neuron0x15d5f40()*0.110149);
}

double NNfunction-NN_1_3::synapse0x15db050() {
   return (neuron0x15d64a0()*0.023615);
}

double NNfunction-NN_1_3::synapse0x15df7d0() {
   return (neuron0x15d66c0()*0.173281);
}

double NNfunction-NN_1_3::synapse0x15df810() {
   return (neuron0x15d6a00()*0.284528);
}

double NNfunction-NN_1_3::synapse0x15df850() {
   return (neuron0x15d6d40()*0.289126);
}

double NNfunction-NN_1_3::synapse0x15df890() {
   return (neuron0x15d7080()*-0.441252);
}

double NNfunction-NN_1_3::synapse0x15df8d0() {
   return (neuron0x15d73c0()*-0.182396);
}

double NNfunction-NN_1_3::synapse0x15df910() {
   return (neuron0x15d7700()*0.152803);
}

double NNfunction-NN_1_3::synapse0x15dfc90() {
   return (neuron0x15d2b40()*0.263873);
}

double NNfunction-NN_1_3::synapse0x15dfcd0() {
   return (neuron0x15d2e80()*-0.10568);
}

double NNfunction-NN_1_3::synapse0x15dfd10() {
   return (neuron0x15d31c0()*0.379466);
}

double NNfunction-NN_1_3::synapse0x15dfd50() {
   return (neuron0x15d3500()*-0.399193);
}

double NNfunction-NN_1_3::synapse0x15dfd90() {
   return (neuron0x15d3840()*0.0453913);
}

double NNfunction-NN_1_3::synapse0x15dfdd0() {
   return (neuron0x15d3b80()*-0.0154313);
}

double NNfunction-NN_1_3::synapse0x15dfe10() {
   return (neuron0x15d3ec0()*0.383636);
}

double NNfunction-NN_1_3::synapse0x15dfe50() {
   return (neuron0x15d4200()*-0.108433);
}

double NNfunction-NN_1_3::synapse0x15dfe90() {
   return (neuron0x15d4540()*-0.162063);
}

double NNfunction-NN_1_3::synapse0x15dfed0() {
   return (neuron0x15d4880()*-0.122278);
}

double NNfunction-NN_1_3::synapse0x15dff10() {
   return (neuron0x15d4bc0()*0.329846);
}

double NNfunction-NN_1_3::synapse0x15dff50() {
   return (neuron0x15d4f00()*-1.0929);
}

double NNfunction-NN_1_3::synapse0x15dff90() {
   return (neuron0x15d5240()*0.520184);
}

double NNfunction-NN_1_3::synapse0x15dffd0() {
   return (neuron0x15d5580()*-0.198657);
}

double NNfunction-NN_1_3::synapse0x15e0010() {
   return (neuron0x15d58c0()*0.448131);
}

double NNfunction-NN_1_3::synapse0x15e0050() {
   return (neuron0x15d5c00()*-0.369137);
}

double NNfunction-NN_1_3::synapse0x15dfae0() {
   return (neuron0x15d5f40()*0.153672);
}

double NNfunction-NN_1_3::synapse0x15dfb20() {
   return (neuron0x15d64a0()*0.25572);
}

double NNfunction-NN_1_3::synapse0x15e01a0() {
   return (neuron0x15d66c0()*0.708199);
}

double NNfunction-NN_1_3::synapse0x15e01e0() {
   return (neuron0x15d6a00()*0.519681);
}

double NNfunction-NN_1_3::synapse0x15e0220() {
   return (neuron0x15d6d40()*-0.102641);
}

double NNfunction-NN_1_3::synapse0x15e0260() {
   return (neuron0x15d7080()*0.200251);
}

double NNfunction-NN_1_3::synapse0x15e02a0() {
   return (neuron0x15d73c0()*-0.295796);
}

double NNfunction-NN_1_3::synapse0x15e02e0() {
   return (neuron0x15d7700()*-0.00493515);
}

double NNfunction-NN_1_3::synapse0x15e0660() {
   return (neuron0x15d2b40()*0.153831);
}

double NNfunction-NN_1_3::synapse0x15e06a0() {
   return (neuron0x15d2e80()*1.45049);
}

double NNfunction-NN_1_3::synapse0x15e06e0() {
   return (neuron0x15d31c0()*1.6152);
}

double NNfunction-NN_1_3::synapse0x15e0720() {
   return (neuron0x15d3500()*0.3031);
}

double NNfunction-NN_1_3::synapse0x15e0760() {
   return (neuron0x15d3840()*-0.104252);
}

double NNfunction-NN_1_3::synapse0x15e07a0() {
   return (neuron0x15d3b80()*0.0661697);
}

double NNfunction-NN_1_3::synapse0x15e07e0() {
   return (neuron0x15d3ec0()*-0.00843807);
}

double NNfunction-NN_1_3::synapse0x15e0820() {
   return (neuron0x15d4200()*0.0722241);
}

double NNfunction-NN_1_3::synapse0x15e0860() {
   return (neuron0x15d4540()*0.0740077);
}

double NNfunction-NN_1_3::synapse0x15e08a0() {
   return (neuron0x15d4880()*-0.00543721);
}

double NNfunction-NN_1_3::synapse0x15e08e0() {
   return (neuron0x15d4bc0()*0.154524);
}

double NNfunction-NN_1_3::synapse0x15e0920() {
   return (neuron0x15d4f00()*0.46804);
}

double NNfunction-NN_1_3::synapse0x15e0960() {
   return (neuron0x15d5240()*-0.3695);
}

double NNfunction-NN_1_3::synapse0x15e09a0() {
   return (neuron0x15d5580()*0.40975);
}

double NNfunction-NN_1_3::synapse0x15e09e0() {
   return (neuron0x15d58c0()*-0.168693);
}

double NNfunction-NN_1_3::synapse0x15e0a20() {
   return (neuron0x15d5c00()*-0.0182915);
}

double NNfunction-NN_1_3::synapse0x15e04b0() {
   return (neuron0x15d5f40()*0.555084);
}

double NNfunction-NN_1_3::synapse0x15e04f0() {
   return (neuron0x15d64a0()*-0.567449);
}

double NNfunction-NN_1_3::synapse0x15e0b70() {
   return (neuron0x15d66c0()*-0.0447157);
}

double NNfunction-NN_1_3::synapse0x15e0bb0() {
   return (neuron0x15d6a00()*-0.261224);
}

double NNfunction-NN_1_3::synapse0x15e0bf0() {
   return (neuron0x15d6d40()*-0.364629);
}

double NNfunction-NN_1_3::synapse0x15e0c30() {
   return (neuron0x15d7080()*0.145095);
}

double NNfunction-NN_1_3::synapse0x15e0c70() {
   return (neuron0x15d73c0()*0.238702);
}

double NNfunction-NN_1_3::synapse0x15e0cb0() {
   return (neuron0x15d7700()*-0.427696);
}

double NNfunction-NN_1_3::synapse0x15e1030() {
   return (neuron0x15d2b40()*0.0617137);
}

double NNfunction-NN_1_3::synapse0x15e1070() {
   return (neuron0x15d2e80()*18.7636);
}

double NNfunction-NN_1_3::synapse0x15e10b0() {
   return (neuron0x15d31c0()*0.197163);
}

double NNfunction-NN_1_3::synapse0x15e10f0() {
   return (neuron0x15d3500()*-0.013643);
}

double NNfunction-NN_1_3::synapse0x15e1130() {
   return (neuron0x15d3840()*0.0223669);
}

double NNfunction-NN_1_3::synapse0x15e1170() {
   return (neuron0x15d3b80()*-0.0141718);
}

double NNfunction-NN_1_3::synapse0x15e11b0() {
   return (neuron0x15d3ec0()*-0.01557);
}

double NNfunction-NN_1_3::synapse0x15e11f0() {
   return (neuron0x15d4200()*-0.000240483);
}

double NNfunction-NN_1_3::synapse0x15e1230() {
   return (neuron0x15d4540()*0.023009);
}

double NNfunction-NN_1_3::synapse0x15e1270() {
   return (neuron0x15d4880()*0.0286825);
}

double NNfunction-NN_1_3::synapse0x15e12b0() {
   return (neuron0x15d4bc0()*-0.023207);
}

double NNfunction-NN_1_3::synapse0x15e12f0() {
   return (neuron0x15d4f00()*0.0553415);
}

double NNfunction-NN_1_3::synapse0x15e1330() {
   return (neuron0x15d5240()*0.00867222);
}

double NNfunction-NN_1_3::synapse0x15e1370() {
   return (neuron0x15d5580()*0.0193574);
}

double NNfunction-NN_1_3::synapse0x15e13b0() {
   return (neuron0x15d58c0()*-0.0394397);
}

double NNfunction-NN_1_3::synapse0x15e13f0() {
   return (neuron0x15d5c00()*-0.0202445);
}

double NNfunction-NN_1_3::synapse0x15e0e80() {
   return (neuron0x15d5f40()*-0.0146834);
}

double NNfunction-NN_1_3::synapse0x15e0ec0() {
   return (neuron0x15d64a0()*0.00985303);
}

double NNfunction-NN_1_3::synapse0x15e1540() {
   return (neuron0x15d66c0()*0.0167179);
}

double NNfunction-NN_1_3::synapse0x15e1580() {
   return (neuron0x15d6a00()*0.00123053);
}

double NNfunction-NN_1_3::synapse0x15e15c0() {
   return (neuron0x15d6d40()*0.0484066);
}

double NNfunction-NN_1_3::synapse0x15e1600() {
   return (neuron0x15d7080()*0.00529849);
}

double NNfunction-NN_1_3::synapse0x15e1640() {
   return (neuron0x15d73c0()*0.0195537);
}

double NNfunction-NN_1_3::synapse0x15e1680() {
   return (neuron0x15d7700()*-0.0173214);
}

double NNfunction-NN_1_3::synapse0x15e1a00() {
   return (neuron0x15d2b40()*0.0290261);
}

double NNfunction-NN_1_3::synapse0x15d2d60() {
   return (neuron0x15d2e80()*-0.286639);
}

double NNfunction-NN_1_3::synapse0x15d2da0() {
   return (neuron0x15d31c0()*-0.154554);
}

double NNfunction-NN_1_3::synapse0x15d30a0() {
   return (neuron0x15d3500()*-0.334892);
}

double NNfunction-NN_1_3::synapse0x15d30e0() {
   return (neuron0x15d3840()*0.0569204);
}

double NNfunction-NN_1_3::synapse0x15d33e0() {
   return (neuron0x15d3b80()*-0.110043);
}

double NNfunction-NN_1_3::synapse0x15d3420() {
   return (neuron0x15d3ec0()*0.170335);
}

double NNfunction-NN_1_3::synapse0x15d3720() {
   return (neuron0x15d4200()*0.777846);
}

double NNfunction-NN_1_3::synapse0x15d3760() {
   return (neuron0x15d4540()*0.455824);
}

double NNfunction-NN_1_3::synapse0x15d3a60() {
   return (neuron0x15d4880()*-0.347917);
}

double NNfunction-NN_1_3::synapse0x15d3aa0() {
   return (neuron0x15d4bc0()*0.12363);
}

double NNfunction-NN_1_3::synapse0x15d3da0() {
   return (neuron0x15d4f00()*0.432801);
}

double NNfunction-NN_1_3::synapse0x15d3de0() {
   return (neuron0x15d5240()*-0.585517);
}

double NNfunction-NN_1_3::synapse0x15d40e0() {
   return (neuron0x15d5580()*-0.286228);
}

double NNfunction-NN_1_3::synapse0x15d4120() {
   return (neuron0x15d58c0()*-0.376577);
}

double NNfunction-NN_1_3::synapse0x15d4420() {
   return (neuron0x15d5c00()*-0.182901);
}

double NNfunction-NN_1_3::synapse0x15d4460() {
   return (neuron0x15d5f40()*0.428716);
}

double NNfunction-NN_1_3::synapse0x15d4760() {
   return (neuron0x15d64a0()*-0.5807);
}

double NNfunction-NN_1_3::synapse0x15d47a0() {
   return (neuron0x15d66c0()*-0.199073);
}

double NNfunction-NN_1_3::synapse0x15d4aa0() {
   return (neuron0x15d6a00()*0.390077);
}

double NNfunction-NN_1_3::synapse0x15d4ae0() {
   return (neuron0x15d6d40()*0.554079);
}

double NNfunction-NN_1_3::synapse0x15d4de0() {
   return (neuron0x15d7080()*-0.51763);
}

double NNfunction-NN_1_3::synapse0x15d4e20() {
   return (neuron0x15d73c0()*-0.265577);
}

double NNfunction-NN_1_3::synapse0x15d5120() {
   return (neuron0x15d7700()*0.0396053);
}

double NNfunction-NN_1_3::synapse0x15d5160() {
   return (neuron0x15d2b40()*-0.0138454);
}

double NNfunction-NN_1_3::synapse0x15d5e20() {
   return (neuron0x15d2e80()*-0.0116779);
}

double NNfunction-NN_1_3::synapse0x15d5e60() {
   return (neuron0x15d31c0()*-3.27984);
}

double NNfunction-NN_1_3::synapse0x15e1850() {
   return (neuron0x15d3500()*-0.00155228);
}

double NNfunction-NN_1_3::synapse0x15e1890() {
   return (neuron0x15d3840()*-0.0161306);
}

double NNfunction-NN_1_3::synapse0x15d6160() {
   return (neuron0x15d3b80()*-0.0195178);
}

double NNfunction-NN_1_3::synapse0x15d61a0() {
   return (neuron0x15d3ec0()*0.00540658);
}

double NNfunction-NN_1_3::synapse0x13840f0() {
   return (neuron0x15d4200()*-0.0103308);
}

double NNfunction-NN_1_3::synapse0x1384130() {
   return (neuron0x15d4540()*0.00108521);
}

double NNfunction-NN_1_3::synapse0x15d68e0() {
   return (neuron0x15d4880()*-0.0141288);
}

double NNfunction-NN_1_3::synapse0x15d6920() {
   return (neuron0x15d4bc0()*0.0171465);
}

double NNfunction-NN_1_3::synapse0x15d6c20() {
   return (neuron0x15d4f00()*-0.260311);
}

double NNfunction-NN_1_3::synapse0x15d6c60() {
   return (neuron0x15d5240()*0.435818);
}

double NNfunction-NN_1_3::synapse0x15d6f60() {
   return (neuron0x15d5580()*0.00116664);
}

double NNfunction-NN_1_3::synapse0x15d6fa0() {
   return (neuron0x15d58c0()*-0.0164502);
}

double NNfunction-NN_1_3::synapse0x15d72a0() {
   return (neuron0x15d5c00()*-0.0267111);
}

double NNfunction-NN_1_3::synapse0x15d72e0() {
   return (neuron0x15d5f40()*-0.00910143);
}

double NNfunction-NN_1_3::synapse0x15d75e0() {
   return (neuron0x15d64a0()*0.00528667);
}

double NNfunction-NN_1_3::synapse0x15d7620() {
   return (neuron0x15d66c0()*-0.0090264);
}

double NNfunction-NN_1_3::synapse0x15d7920() {
   return (neuron0x15d6a00()*0.0298139);
}

double NNfunction-NN_1_3::synapse0x15d7960() {
   return (neuron0x15d6d40()*-0.0385309);
}

double NNfunction-NN_1_3::synapse0x15d5460() {
   return (neuron0x15d7080()*-0.0235411);
}

double NNfunction-NN_1_3::synapse0x15d54a0() {
   return (neuron0x15d73c0()*0.0120824);
}

double NNfunction-NN_1_3::synapse0x15e3770() {
   return (neuron0x15d7700()*-0.00816172);
}

double NNfunction-NN_1_3::synapse0x15e3af0() {
   return (neuron0x15d2b40()*0.17767);
}

double NNfunction-NN_1_3::synapse0x15e3b30() {
   return (neuron0x15d2e80()*0.421159);
}

double NNfunction-NN_1_3::synapse0x15e3b70() {
   return (neuron0x15d31c0()*-0.652418);
}

double NNfunction-NN_1_3::synapse0x15e3bb0() {
   return (neuron0x15d3500()*-1.14332);
}

double NNfunction-NN_1_3::synapse0x15e3bf0() {
   return (neuron0x15d3840()*-0.324533);
}

double NNfunction-NN_1_3::synapse0x15e3c30() {
   return (neuron0x15d3b80()*-0.465559);
}

double NNfunction-NN_1_3::synapse0x15e3c70() {
   return (neuron0x15d3ec0()*0.00804338);
}

double NNfunction-NN_1_3::synapse0x15e3cb0() {
   return (neuron0x15d4200()*-1.10429);
}

double NNfunction-NN_1_3::synapse0x15e3cf0() {
   return (neuron0x15d4540()*-0.23901);
}

double NNfunction-NN_1_3::synapse0x15e3d30() {
   return (neuron0x15d4880()*-0.490654);
}

double NNfunction-NN_1_3::synapse0x15e3d70() {
   return (neuron0x15d4bc0()*-0.249985);
}

double NNfunction-NN_1_3::synapse0x15e3db0() {
   return (neuron0x15d4f00()*0.174181);
}

double NNfunction-NN_1_3::synapse0x15e3df0() {
   return (neuron0x15d5240()*-0.122224);
}

double NNfunction-NN_1_3::synapse0x15e3e30() {
   return (neuron0x15d5580()*0.561991);
}

double NNfunction-NN_1_3::synapse0x15e3e70() {
   return (neuron0x15d58c0()*0.076508);
}

double NNfunction-NN_1_3::synapse0x15e3eb0() {
   return (neuron0x15d5c00()*-0.225436);
}

double NNfunction-NN_1_3::synapse0x15e3940() {
   return (neuron0x15d5f40()*0.491102);
}

double NNfunction-NN_1_3::synapse0x15e3980() {
   return (neuron0x15d64a0()*0.26253);
}

double NNfunction-NN_1_3::synapse0x15e4000() {
   return (neuron0x15d66c0()*-1.6221);
}

double NNfunction-NN_1_3::synapse0x15e4040() {
   return (neuron0x15d6a00()*0.350467);
}

double NNfunction-NN_1_3::synapse0x15e4080() {
   return (neuron0x15d6d40()*-0.0657634);
}

double NNfunction-NN_1_3::synapse0x15e40c0() {
   return (neuron0x15d7080()*-0.138743);
}

double NNfunction-NN_1_3::synapse0x15e4100() {
   return (neuron0x15d73c0()*-0.279059);
}

double NNfunction-NN_1_3::synapse0x15e4140() {
   return (neuron0x15d7700()*0.685411);
}

double NNfunction-NN_1_3::synapse0x15e44c0() {
   return (neuron0x15d2b40()*-0.0797267);
}

double NNfunction-NN_1_3::synapse0x15e4500() {
   return (neuron0x15d2e80()*0.0130014);
}

double NNfunction-NN_1_3::synapse0x15e4540() {
   return (neuron0x15d31c0()*-0.871018);
}

double NNfunction-NN_1_3::synapse0x15e4580() {
   return (neuron0x15d3500()*0.0364205);
}

double NNfunction-NN_1_3::synapse0x15e45c0() {
   return (neuron0x15d3840()*-0.0202293);
}

double NNfunction-NN_1_3::synapse0x15e4600() {
   return (neuron0x15d3b80()*0.00641053);
}

double NNfunction-NN_1_3::synapse0x15e4640() {
   return (neuron0x15d3ec0()*-0.0159358);
}

double NNfunction-NN_1_3::synapse0x15e4680() {
   return (neuron0x15d4200()*0.0245931);
}

double NNfunction-NN_1_3::synapse0x15e46c0() {
   return (neuron0x15d4540()*-0.0141151);
}

double NNfunction-NN_1_3::synapse0x15e4700() {
   return (neuron0x15d4880()*0.0201866);
}

double NNfunction-NN_1_3::synapse0x15e4740() {
   return (neuron0x15d4bc0()*-0.0171234);
}

double NNfunction-NN_1_3::synapse0x15e4780() {
   return (neuron0x15d4f00()*-0.031192);
}

double NNfunction-NN_1_3::synapse0x15e47c0() {
   return (neuron0x15d5240()*-0.00288644);
}

double NNfunction-NN_1_3::synapse0x15e4800() {
   return (neuron0x15d5580()*0.0134962);
}

double NNfunction-NN_1_3::synapse0x15e4840() {
   return (neuron0x15d58c0()*-0.0168741);
}

double NNfunction-NN_1_3::synapse0x15e4880() {
   return (neuron0x15d5c00()*-0.0444129);
}

double NNfunction-NN_1_3::synapse0x15e4310() {
   return (neuron0x15d5f40()*-0.0144419);
}

double NNfunction-NN_1_3::synapse0x15e4350() {
   return (neuron0x15d64a0()*-0.0195799);
}

double NNfunction-NN_1_3::synapse0x15e49d0() {
   return (neuron0x15d66c0()*-0.0175042);
}

double NNfunction-NN_1_3::synapse0x15e4a10() {
   return (neuron0x15d6a00()*0.00351229);
}

double NNfunction-NN_1_3::synapse0x15e4a50() {
   return (neuron0x15d6d40()*-0.00539372);
}

double NNfunction-NN_1_3::synapse0x15e4a90() {
   return (neuron0x15d7080()*0.0235785);
}

double NNfunction-NN_1_3::synapse0x15e4ad0() {
   return (neuron0x15d73c0()*0.0010379);
}

double NNfunction-NN_1_3::synapse0x15e4b10() {
   return (neuron0x15d7700()*-0.898881);
}

double NNfunction-NN_1_3::synapse0x15e4e90() {
   return (neuron0x15d2b40()*-0.101024);
}

double NNfunction-NN_1_3::synapse0x15e4ed0() {
   return (neuron0x15d2e80()*0.0598884);
}

double NNfunction-NN_1_3::synapse0x15e4f10() {
   return (neuron0x15d31c0()*1.0182);
}

double NNfunction-NN_1_3::synapse0x15e4f50() {
   return (neuron0x15d3500()*0.0274993);
}

double NNfunction-NN_1_3::synapse0x15e4f90() {
   return (neuron0x15d3840()*-0.0430288);
}

double NNfunction-NN_1_3::synapse0x15e4fd0() {
   return (neuron0x15d3b80()*-0.0129561);
}

double NNfunction-NN_1_3::synapse0x15e5010() {
   return (neuron0x15d3ec0()*0.00275058);
}

double NNfunction-NN_1_3::synapse0x15e5050() {
   return (neuron0x15d4200()*-0.0127565);
}

double NNfunction-NN_1_3::synapse0x15e5090() {
   return (neuron0x15d4540()*-0.0139522);
}

double NNfunction-NN_1_3::synapse0x15e50d0() {
   return (neuron0x15d4880()*-0.0114674);
}

double NNfunction-NN_1_3::synapse0x15e5110() {
   return (neuron0x15d4bc0()*-0.0202706);
}

double NNfunction-NN_1_3::synapse0x15e5150() {
   return (neuron0x15d4f00()*0.181624);
}

double NNfunction-NN_1_3::synapse0x15e5190() {
   return (neuron0x15d5240()*-0.038778);
}

double NNfunction-NN_1_3::synapse0x15e51d0() {
   return (neuron0x15d5580()*0.019679);
}

double NNfunction-NN_1_3::synapse0x15e5210() {
   return (neuron0x15d58c0()*0.0907029);
}

double NNfunction-NN_1_3::synapse0x15e5250() {
   return (neuron0x15d5c00()*0.0156738);
}

double NNfunction-NN_1_3::synapse0x15e4ce0() {
   return (neuron0x15d5f40()*0.0117243);
}

double NNfunction-NN_1_3::synapse0x15e4d20() {
   return (neuron0x15d64a0()*0.0438584);
}

double NNfunction-NN_1_3::synapse0x15e53a0() {
   return (neuron0x15d66c0()*0.0177366);
}

double NNfunction-NN_1_3::synapse0x15e53e0() {
   return (neuron0x15d6a00()*-0.0150192);
}

double NNfunction-NN_1_3::synapse0x15e5420() {
   return (neuron0x15d6d40()*-0.0263604);
}

double NNfunction-NN_1_3::synapse0x15e5460() {
   return (neuron0x15d7080()*-0.0140976);
}

double NNfunction-NN_1_3::synapse0x15e54a0() {
   return (neuron0x15d73c0()*0.0212375);
}

double NNfunction-NN_1_3::synapse0x15e54e0() {
   return (neuron0x15d7700()*-3.07384);
}

double NNfunction-NN_1_3::synapse0x15e5860() {
   return (neuron0x15d2b40()*-0.207524);
}

double NNfunction-NN_1_3::synapse0x15e58a0() {
   return (neuron0x15d2e80()*-0.0167377);
}

double NNfunction-NN_1_3::synapse0x15e58e0() {
   return (neuron0x15d31c0()*2.24462);
}

double NNfunction-NN_1_3::synapse0x15e5920() {
   return (neuron0x15d3500()*-0.00541584);
}

double NNfunction-NN_1_3::synapse0x15e5960() {
   return (neuron0x15d3840()*-0.0394543);
}

double NNfunction-NN_1_3::synapse0x15e59a0() {
   return (neuron0x15d3b80()*-0.0118521);
}

double NNfunction-NN_1_3::synapse0x15e59e0() {
   return (neuron0x15d3ec0()*-0.00173952);
}

double NNfunction-NN_1_3::synapse0x15e5a20() {
   return (neuron0x15d4200()*0.0384404);
}

double NNfunction-NN_1_3::synapse0x15e5a60() {
   return (neuron0x15d4540()*0.0248096);
}

double NNfunction-NN_1_3::synapse0x15e5aa0() {
   return (neuron0x15d4880()*0.0328362);
}

double NNfunction-NN_1_3::synapse0x15e5ae0() {
   return (neuron0x15d4bc0()*0.0279749);
}

double NNfunction-NN_1_3::synapse0x15e5b20() {
   return (neuron0x15d4f00()*0.493126);
}

double NNfunction-NN_1_3::synapse0x15e5b60() {
   return (neuron0x15d5240()*0.0521456);
}

double NNfunction-NN_1_3::synapse0x15e5ba0() {
   return (neuron0x15d5580()*0.024434);
}

double NNfunction-NN_1_3::synapse0x15e5be0() {
   return (neuron0x15d58c0()*-0.0472003);
}

double NNfunction-NN_1_3::synapse0x15e5c20() {
   return (neuron0x15d5c00()*-0.0226416);
}

double NNfunction-NN_1_3::synapse0x15e56b0() {
   return (neuron0x15d5f40()*-0.0357818);
}

double NNfunction-NN_1_3::synapse0x15e56f0() {
   return (neuron0x15d64a0()*-0.0122094);
}

double NNfunction-NN_1_3::synapse0x15e5d70() {
   return (neuron0x15d66c0()*0.040527);
}

double NNfunction-NN_1_3::synapse0x15e5db0() {
   return (neuron0x15d6a00()*0.0338143);
}

double NNfunction-NN_1_3::synapse0x15e5df0() {
   return (neuron0x15d6d40()*0.0119435);
}

double NNfunction-NN_1_3::synapse0x15e5e30() {
   return (neuron0x15d7080()*0.0480509);
}

double NNfunction-NN_1_3::synapse0x15e5e70() {
   return (neuron0x15d73c0()*0.0398704);
}

double NNfunction-NN_1_3::synapse0x15e5eb0() {
   return (neuron0x15d7700()*1.39404);
}

double NNfunction-NN_1_3::synapse0x15e6230() {
   return (neuron0x15d2b40()*1.01062);
}

double NNfunction-NN_1_3::synapse0x15e6270() {
   return (neuron0x15d2e80()*0.0630753);
}

double NNfunction-NN_1_3::synapse0x15e62b0() {
   return (neuron0x15d31c0()*-0.106302);
}

double NNfunction-NN_1_3::synapse0x15e62f0() {
   return (neuron0x15d3500()*0.527747);
}

double NNfunction-NN_1_3::synapse0x15e6330() {
   return (neuron0x15d3840()*-0.268159);
}

double NNfunction-NN_1_3::synapse0x15e6370() {
   return (neuron0x15d3b80()*-0.20591);
}

double NNfunction-NN_1_3::synapse0x15e63b0() {
   return (neuron0x15d3ec0()*0.263988);
}

double NNfunction-NN_1_3::synapse0x15e63f0() {
   return (neuron0x15d4200()*0.174128);
}

double NNfunction-NN_1_3::synapse0x15e6430() {
   return (neuron0x15d4540()*0.924369);
}

double NNfunction-NN_1_3::synapse0x15de5f0() {
   return (neuron0x15d4880()*-0.0689745);
}

double NNfunction-NN_1_3::synapse0x15de630() {
   return (neuron0x15d4bc0()*-0.0741911);
}

double NNfunction-NN_1_3::synapse0x15de670() {
   return (neuron0x15d4f00()*-0.0171341);
}

double NNfunction-NN_1_3::synapse0x15de6b0() {
   return (neuron0x15d5240()*-0.10187);
}

double NNfunction-NN_1_3::synapse0x15de6f0() {
   return (neuron0x15d5580()*-0.117428);
}

double NNfunction-NN_1_3::synapse0x15de730() {
   return (neuron0x15d58c0()*-0.069565);
}

double NNfunction-NN_1_3::synapse0x15de770() {
   return (neuron0x15d5c00()*0.374539);
}

double NNfunction-NN_1_3::synapse0x15e6080() {
   return (neuron0x15d5f40()*0.211111);
}

double NNfunction-NN_1_3::synapse0x15e60c0() {
   return (neuron0x15d64a0()*0.177114);
}

double NNfunction-NN_1_3::synapse0x15de8c0() {
   return (neuron0x15d66c0()*0.180824);
}

double NNfunction-NN_1_3::synapse0x15de900() {
   return (neuron0x15d6a00()*0.0528934);
}

double NNfunction-NN_1_3::synapse0x15de940() {
   return (neuron0x15d6d40()*-0.363604);
}

double NNfunction-NN_1_3::synapse0x15de980() {
   return (neuron0x15d7080()*-0.659829);
}

double NNfunction-NN_1_3::synapse0x15de9c0() {
   return (neuron0x15d73c0()*-0.26889);
}

double NNfunction-NN_1_3::synapse0x15dea00() {
   return (neuron0x15d7700()*0.453339);
}

double NNfunction-NN_1_3::synapse0x15ded80() {
   return (neuron0x15d2b40()*0.029489);
}

double NNfunction-NN_1_3::synapse0x15dedc0() {
   return (neuron0x15d2e80()*0.034883);
}

double NNfunction-NN_1_3::synapse0x15dee00() {
   return (neuron0x15d31c0()*1.07898);
}

double NNfunction-NN_1_3::synapse0x15dee40() {
   return (neuron0x15d3500()*-0.0373246);
}

double NNfunction-NN_1_3::synapse0x15dee80() {
   return (neuron0x15d3840()*0.0179307);
}

double NNfunction-NN_1_3::synapse0x15deec0() {
   return (neuron0x15d3b80()*-0.0257084);
}

double NNfunction-NN_1_3::synapse0x15def00() {
   return (neuron0x15d3ec0()*-0.0397322);
}

double NNfunction-NN_1_3::synapse0x15def40() {
   return (neuron0x15d4200()*-0.0140575);
}

double NNfunction-NN_1_3::synapse0x15def80() {
   return (neuron0x15d4540()*-0.00150696);
}

double NNfunction-NN_1_3::synapse0x15defc0() {
   return (neuron0x15d4880()*0.0439087);
}

double NNfunction-NN_1_3::synapse0x15df000() {
   return (neuron0x15d4bc0()*0.00985182);
}

double NNfunction-NN_1_3::synapse0x15df040() {
   return (neuron0x15d4f00()*-1.00956);
}

double NNfunction-NN_1_3::synapse0x15df080() {
   return (neuron0x15d5240()*0.0544502);
}

double NNfunction-NN_1_3::synapse0x15df0c0() {
   return (neuron0x15d5580()*0.0179594);
}

double NNfunction-NN_1_3::synapse0x15df100() {
   return (neuron0x15d58c0()*-0.0835754);
}

double NNfunction-NN_1_3::synapse0x15df140() {
   return (neuron0x15d5c00()*-0.00364318);
}

double NNfunction-NN_1_3::synapse0x15debd0() {
   return (neuron0x15d5f40()*0.00124998);
}

double NNfunction-NN_1_3::synapse0x15dec10() {
   return (neuron0x15d64a0()*-0.00477017);
}

double NNfunction-NN_1_3::synapse0x15df290() {
   return (neuron0x15d66c0()*-0.0127409);
}

double NNfunction-NN_1_3::synapse0x15df2d0() {
   return (neuron0x15d6a00()*0.038469);
}

double NNfunction-NN_1_3::synapse0x15df310() {
   return (neuron0x15d6d40()*0.0686737);
}

double NNfunction-NN_1_3::synapse0x15df350() {
   return (neuron0x15d7080()*-0.0358818);
}

double NNfunction-NN_1_3::synapse0x15df390() {
   return (neuron0x15d73c0()*0.0103112);
}

double NNfunction-NN_1_3::synapse0x15df3d0() {
   return (neuron0x15d7700()*0.912306);
}

double NNfunction-NN_1_3::synapse0x15df5a0() {
   return (neuron0x15d2b40()*0.364226);
}

double NNfunction-NN_1_3::synapse0x15e8630() {
   return (neuron0x15d2e80()*-0.5922);
}

double NNfunction-NN_1_3::synapse0x15e8670() {
   return (neuron0x15d31c0()*1.00112);
}

double NNfunction-NN_1_3::synapse0x15e86b0() {
   return (neuron0x15d3500()*0.227438);
}

double NNfunction-NN_1_3::synapse0x15e86f0() {
   return (neuron0x15d3840()*-0.403886);
}

double NNfunction-NN_1_3::synapse0x15e8730() {
   return (neuron0x15d3b80()*-0.143414);
}

double NNfunction-NN_1_3::synapse0x15e8770() {
   return (neuron0x15d3ec0()*0.294044);
}

double NNfunction-NN_1_3::synapse0x15e87b0() {
   return (neuron0x15d4200()*0.00984021);
}

double NNfunction-NN_1_3::synapse0x15e87f0() {
   return (neuron0x15d4540()*0.136818);
}

double NNfunction-NN_1_3::synapse0x15e8830() {
   return (neuron0x15d4880()*0.738493);
}

double NNfunction-NN_1_3::synapse0x15e8870() {
   return (neuron0x15d4bc0()*0.0146118);
}

double NNfunction-NN_1_3::synapse0x15e88b0() {
   return (neuron0x15d4f00()*-0.478212);
}

double NNfunction-NN_1_3::synapse0x15e88f0() {
   return (neuron0x15d5240()*0.366915);
}

double NNfunction-NN_1_3::synapse0x15e8930() {
   return (neuron0x15d5580()*0.820277);
}

double NNfunction-NN_1_3::synapse0x15e8970() {
   return (neuron0x15d58c0()*-0.382229);
}

double NNfunction-NN_1_3::synapse0x15e89b0() {
   return (neuron0x15d5c00()*-0.701738);
}

double NNfunction-NN_1_3::synapse0x15e8480() {
   return (neuron0x15d5f40()*-0.0516942);
}

double NNfunction-NN_1_3::synapse0x15e84c0() {
   return (neuron0x15d64a0()*-0.300257);
}

double NNfunction-NN_1_3::synapse0x15e8b00() {
   return (neuron0x15d66c0()*-0.378985);
}

double NNfunction-NN_1_3::synapse0x15e8b40() {
   return (neuron0x15d6a00()*-0.485665);
}

double NNfunction-NN_1_3::synapse0x15e8b80() {
   return (neuron0x15d6d40()*1.11517);
}

double NNfunction-NN_1_3::synapse0x15e8bc0() {
   return (neuron0x15d7080()*0.235524);
}

double NNfunction-NN_1_3::synapse0x15e8c00() {
   return (neuron0x15d73c0()*-0.561972);
}

double NNfunction-NN_1_3::synapse0x15e8c40() {
   return (neuron0x15d7700()*-1.07351);
}

double NNfunction-NN_1_3::synapse0x15e8fc0() {
   return (neuron0x15d2b40()*0.378672);
}

double NNfunction-NN_1_3::synapse0x15e9000() {
   return (neuron0x15d2e80()*0.222245);
}

double NNfunction-NN_1_3::synapse0x15e9040() {
   return (neuron0x15d31c0()*-0.175192);
}

double NNfunction-NN_1_3::synapse0x15e9080() {
   return (neuron0x15d3500()*-0.61313);
}

double NNfunction-NN_1_3::synapse0x15e90c0() {
   return (neuron0x15d3840()*-0.171888);
}

double NNfunction-NN_1_3::synapse0x15e9100() {
   return (neuron0x15d3b80()*-0.363718);
}

double NNfunction-NN_1_3::synapse0x15e9140() {
   return (neuron0x15d3ec0()*-0.163311);
}

double NNfunction-NN_1_3::synapse0x15e9180() {
   return (neuron0x15d4200()*-0.319719);
}

double NNfunction-NN_1_3::synapse0x15e91c0() {
   return (neuron0x15d4540()*0.425052);
}

double NNfunction-NN_1_3::synapse0x15e9200() {
   return (neuron0x15d4880()*-0.156124);
}

double NNfunction-NN_1_3::synapse0x15e9240() {
   return (neuron0x15d4bc0()*-0.0407763);
}

double NNfunction-NN_1_3::synapse0x15e9280() {
   return (neuron0x15d4f00()*0.210444);
}

double NNfunction-NN_1_3::synapse0x15e92c0() {
   return (neuron0x15d5240()*-0.38034);
}

double NNfunction-NN_1_3::synapse0x15e9300() {
   return (neuron0x15d5580()*-0.0794494);
}

double NNfunction-NN_1_3::synapse0x15e9340() {
   return (neuron0x15d58c0()*-0.275122);
}

double NNfunction-NN_1_3::synapse0x15e9380() {
   return (neuron0x15d5c00()*-0.160871);
}

double NNfunction-NN_1_3::synapse0x15e8e10() {
   return (neuron0x15d5f40()*0.695621);
}

double NNfunction-NN_1_3::synapse0x15e8e50() {
   return (neuron0x15d64a0()*-0.268209);
}

double NNfunction-NN_1_3::synapse0x15e94d0() {
   return (neuron0x15d66c0()*-0.424271);
}

double NNfunction-NN_1_3::synapse0x15e9510() {
   return (neuron0x15d6a00()*0.0518124);
}

double NNfunction-NN_1_3::synapse0x15e9550() {
   return (neuron0x15d6d40()*-0.420241);
}

double NNfunction-NN_1_3::synapse0x15e9590() {
   return (neuron0x15d7080()*-0.0496383);
}

double NNfunction-NN_1_3::synapse0x15e95d0() {
   return (neuron0x15d73c0()*-0.103029);
}

double NNfunction-NN_1_3::synapse0x15e9610() {
   return (neuron0x15d7700()*0.530771);
}

double NNfunction-NN_1_3::synapse0x15e9990() {
   return (neuron0x15d2b40()*-0.0926244);
}

double NNfunction-NN_1_3::synapse0x15e99d0() {
   return (neuron0x15d2e80()*0.0383122);
}

double NNfunction-NN_1_3::synapse0x15e9a10() {
   return (neuron0x15d31c0()*-2.79117);
}

double NNfunction-NN_1_3::synapse0x15e9a50() {
   return (neuron0x15d3500()*0.0146165);
}

double NNfunction-NN_1_3::synapse0x15e9a90() {
   return (neuron0x15d3840()*-0.00848205);
}

double NNfunction-NN_1_3::synapse0x15e9ad0() {
   return (neuron0x15d3b80()*-0.0777409);
}

double NNfunction-NN_1_3::synapse0x15e9b10() {
   return (neuron0x15d3ec0()*-0.034412);
}

double NNfunction-NN_1_3::synapse0x15e9b50() {
   return (neuron0x15d4200()*-0.0595999);
}

double NNfunction-NN_1_3::synapse0x15e9b90() {
   return (neuron0x15d4540()*0.0165664);
}

double NNfunction-NN_1_3::synapse0x15e9bd0() {
   return (neuron0x15d4880()*0.0664804);
}

double NNfunction-NN_1_3::synapse0x15e9c10() {
   return (neuron0x15d4bc0()*0.0470388);
}

double NNfunction-NN_1_3::synapse0x15e9c50() {
   return (neuron0x15d4f00()*-1.16665);
}

double NNfunction-NN_1_3::synapse0x15e9c90() {
   return (neuron0x15d5240()*-0.0309682);
}

double NNfunction-NN_1_3::synapse0x15e9cd0() {
   return (neuron0x15d5580()*-0.030198);
}

double NNfunction-NN_1_3::synapse0x15e9d10() {
   return (neuron0x15d58c0()*-0.0804956);
}

double NNfunction-NN_1_3::synapse0x15e9d50() {
   return (neuron0x15d5c00()*-0.00164523);
}

double NNfunction-NN_1_3::synapse0x15e97e0() {
   return (neuron0x15d5f40()*-0.0245824);
}

double NNfunction-NN_1_3::synapse0x15e9820() {
   return (neuron0x15d64a0()*0.00290705);
}

double NNfunction-NN_1_3::synapse0x15e9ea0() {
   return (neuron0x15d66c0()*0.0399486);
}

double NNfunction-NN_1_3::synapse0x15e9ee0() {
   return (neuron0x15d6a00()*0.0905617);
}

double NNfunction-NN_1_3::synapse0x15e9f20() {
   return (neuron0x15d6d40()*0.0555792);
}

double NNfunction-NN_1_3::synapse0x15e9f60() {
   return (neuron0x15d7080()*-0.010736);
}

double NNfunction-NN_1_3::synapse0x15e9fa0() {
   return (neuron0x15d73c0()*0.0201702);
}

double NNfunction-NN_1_3::synapse0x15e9fe0() {
   return (neuron0x15d7700()*0.916808);
}

double NNfunction-NN_1_3::synapse0x15ea360() {
   return (neuron0x15d2b40()*-0.018266);
}

double NNfunction-NN_1_3::synapse0x15ea3a0() {
   return (neuron0x15d2e80()*4.66986);
}

double NNfunction-NN_1_3::synapse0x15ea3e0() {
   return (neuron0x15d31c0()*-0.476909);
}

double NNfunction-NN_1_3::synapse0x15ea420() {
   return (neuron0x15d3500()*0.0159529);
}

double NNfunction-NN_1_3::synapse0x15ea460() {
   return (neuron0x15d3840()*-0.0132465);
}

double NNfunction-NN_1_3::synapse0x15ea4a0() {
   return (neuron0x15d3b80()*0.0211202);
}

double NNfunction-NN_1_3::synapse0x15ea4e0() {
   return (neuron0x15d3ec0()*-0.00740304);
}

double NNfunction-NN_1_3::synapse0x15ea520() {
   return (neuron0x15d4200()*0.025144);
}

double NNfunction-NN_1_3::synapse0x15ea560() {
   return (neuron0x15d4540()*-0.0515292);
}

double NNfunction-NN_1_3::synapse0x15ea5a0() {
   return (neuron0x15d4880()*0.0370833);
}

double NNfunction-NN_1_3::synapse0x15ea5e0() {
   return (neuron0x15d4bc0()*-0.0289261);
}

double NNfunction-NN_1_3::synapse0x15ea620() {
   return (neuron0x15d4f00()*-0.0853922);
}

double NNfunction-NN_1_3::synapse0x15ea660() {
   return (neuron0x15d5240()*0.0154144);
}

double NNfunction-NN_1_3::synapse0x15ea6a0() {
   return (neuron0x15d5580()*0.0110479);
}

double NNfunction-NN_1_3::synapse0x15ea6e0() {
   return (neuron0x15d58c0()*-0.00532549);
}

double NNfunction-NN_1_3::synapse0x15ea720() {
   return (neuron0x15d5c00()*-0.017669);
}

double NNfunction-NN_1_3::synapse0x15ea1b0() {
   return (neuron0x15d5f40()*-0.00852079);
}

double NNfunction-NN_1_3::synapse0x15ea1f0() {
   return (neuron0x15d64a0()*0.0132936);
}

double NNfunction-NN_1_3::synapse0x15ea870() {
   return (neuron0x15d66c0()*-0.0137102);
}

double NNfunction-NN_1_3::synapse0x15ea8b0() {
   return (neuron0x15d6a00()*-0.00498797);
}

double NNfunction-NN_1_3::synapse0x15ea8f0() {
   return (neuron0x15d6d40()*-0.0344678);
}

double NNfunction-NN_1_3::synapse0x15ea930() {
   return (neuron0x15d7080()*0.0261773);
}

double NNfunction-NN_1_3::synapse0x15ea970() {
   return (neuron0x15d73c0()*-0.00140165);
}

double NNfunction-NN_1_3::synapse0x15ea9b0() {
   return (neuron0x15d7700()*-1.34855);
}

double NNfunction-NN_1_3::synapse0x15ead30() {
   return (neuron0x15d2b40()*-0.962285);
}

double NNfunction-NN_1_3::synapse0x15ead70() {
   return (neuron0x15d2e80()*0.236676);
}

double NNfunction-NN_1_3::synapse0x15eadb0() {
   return (neuron0x15d31c0()*-1.34541);
}

double NNfunction-NN_1_3::synapse0x15eadf0() {
   return (neuron0x15d3500()*-0.0431607);
}

double NNfunction-NN_1_3::synapse0x15eae30() {
   return (neuron0x15d3840()*0.869367);
}

double NNfunction-NN_1_3::synapse0x15eae70() {
   return (neuron0x15d3b80()*-0.1956);
}

double NNfunction-NN_1_3::synapse0x15eaeb0() {
   return (neuron0x15d3ec0()*-0.0897914);
}

double NNfunction-NN_1_3::synapse0x15eaef0() {
   return (neuron0x15d4200()*-0.15476);
}

double NNfunction-NN_1_3::synapse0x15eaf30() {
   return (neuron0x15d4540()*0.132316);
}

double NNfunction-NN_1_3::synapse0x15eaf70() {
   return (neuron0x15d4880()*-0.104957);
}

double NNfunction-NN_1_3::synapse0x15eafb0() {
   return (neuron0x15d4bc0()*0.112375);
}

double NNfunction-NN_1_3::synapse0x15eaff0() {
   return (neuron0x15d4f00()*-1.71037);
}

double NNfunction-NN_1_3::synapse0x15eb030() {
   return (neuron0x15d5240()*0.284063);
}

double NNfunction-NN_1_3::synapse0x15eb070() {
   return (neuron0x15d5580()*0.405886);
}

double NNfunction-NN_1_3::synapse0x15eb0b0() {
   return (neuron0x15d58c0()*-1.18776);
}

double NNfunction-NN_1_3::synapse0x15eb0f0() {
   return (neuron0x15d5c00()*-0.158665);
}

double NNfunction-NN_1_3::synapse0x15eab80() {
   return (neuron0x15d5f40()*0.172235);
}

double NNfunction-NN_1_3::synapse0x15eabc0() {
   return (neuron0x15d64a0()*0.0584404);
}

double NNfunction-NN_1_3::synapse0x15eb240() {
   return (neuron0x15d66c0()*-0.117223);
}

double NNfunction-NN_1_3::synapse0x15eb280() {
   return (neuron0x15d6a00()*0.789379);
}

double NNfunction-NN_1_3::synapse0x15eb2c0() {
   return (neuron0x15d6d40()*0.0459597);
}

double NNfunction-NN_1_3::synapse0x15eb300() {
   return (neuron0x15d7080()*0.660357);
}

double NNfunction-NN_1_3::synapse0x15eb340() {
   return (neuron0x15d73c0()*0.390136);
}

double NNfunction-NN_1_3::synapse0x15eb380() {
   return (neuron0x15d7700()*-1.17187);
}

double NNfunction-NN_1_3::synapse0x15eb700() {
   return (neuron0x15d2b40()*-0.138865);
}

double NNfunction-NN_1_3::synapse0x15eb740() {
   return (neuron0x15d2e80()*0.00976477);
}

double NNfunction-NN_1_3::synapse0x15eb780() {
   return (neuron0x15d31c0()*-2.7276);
}

double NNfunction-NN_1_3::synapse0x15eb7c0() {
   return (neuron0x15d3500()*0.000306031);
}

double NNfunction-NN_1_3::synapse0x15eb800() {
   return (neuron0x15d3840()*0.00897881);
}

double NNfunction-NN_1_3::synapse0x15eb840() {
   return (neuron0x15d3b80()*0.000669761);
}

double NNfunction-NN_1_3::synapse0x15eb880() {
   return (neuron0x15d3ec0()*-0.00630198);
}

double NNfunction-NN_1_3::synapse0x15eb8c0() {
   return (neuron0x15d4200()*0.0234529);
}

double NNfunction-NN_1_3::synapse0x15eb900() {
   return (neuron0x15d4540()*-0.0182921);
}

double NNfunction-NN_1_3::synapse0x15eb940() {
   return (neuron0x15d4880()*0.0298774);
}

double NNfunction-NN_1_3::synapse0x15eb980() {
   return (neuron0x15d4bc0()*0.00258607);
}

double NNfunction-NN_1_3::synapse0x15eb9c0() {
   return (neuron0x15d4f00()*1.56556);
}

double NNfunction-NN_1_3::synapse0x15eba00() {
   return (neuron0x15d5240()*0.0621924);
}

double NNfunction-NN_1_3::synapse0x15eba40() {
   return (neuron0x15d5580()*-0.00307598);
}

double NNfunction-NN_1_3::synapse0x15eba80() {
   return (neuron0x15d58c0()*-0.022131);
}

double NNfunction-NN_1_3::synapse0x15ebac0() {
   return (neuron0x15d5c00()*-0.0147265);
}

double NNfunction-NN_1_3::synapse0x15eb550() {
   return (neuron0x15d5f40()*-0.0245251);
}

double NNfunction-NN_1_3::synapse0x15eb590() {
   return (neuron0x15d64a0()*-0.00109502);
}

double NNfunction-NN_1_3::synapse0x15ebc10() {
   return (neuron0x15d66c0()*-0.0202684);
}

double NNfunction-NN_1_3::synapse0x15ebc50() {
   return (neuron0x15d6a00()*-0.00651823);
}

double NNfunction-NN_1_3::synapse0x15ebc90() {
   return (neuron0x15d6d40()*-0.0170977);
}

double NNfunction-NN_1_3::synapse0x15ebcd0() {
   return (neuron0x15d7080()*0.00693162);
}

double NNfunction-NN_1_3::synapse0x15ebd10() {
   return (neuron0x15d73c0()*-0.00694681);
}

double NNfunction-NN_1_3::synapse0x15ebd50() {
   return (neuron0x15d7700()*-0.107181);
}

double NNfunction-NN_1_3::synapse0x15ec0d0() {
   return (neuron0x15d2b40()*0.149906);
}

double NNfunction-NN_1_3::synapse0x15ec110() {
   return (neuron0x15d2e80()*-0.0264631);
}

double NNfunction-NN_1_3::synapse0x15ec150() {
   return (neuron0x15d31c0()*1.93342);
}

double NNfunction-NN_1_3::synapse0x15ec190() {
   return (neuron0x15d3500()*-0.0169791);
}

double NNfunction-NN_1_3::synapse0x15ec1d0() {
   return (neuron0x15d3840()*0.0277455);
}

double NNfunction-NN_1_3::synapse0x15ec210() {
   return (neuron0x15d3b80()*0.0349493);
}

double NNfunction-NN_1_3::synapse0x15ec250() {
   return (neuron0x15d3ec0()*-0.0356635);
}

double NNfunction-NN_1_3::synapse0x15ec290() {
   return (neuron0x15d4200()*-0.0118211);
}

double NNfunction-NN_1_3::synapse0x15ec2d0() {
   return (neuron0x15d4540()*-0.022882);
}

double NNfunction-NN_1_3::synapse0x15ec310() {
   return (neuron0x15d4880()*0.0153427);
}

double NNfunction-NN_1_3::synapse0x15ec350() {
   return (neuron0x15d4bc0()*-0.0455596);
}

double NNfunction-NN_1_3::synapse0x15ec390() {
   return (neuron0x15d4f00()*0.256961);
}

double NNfunction-NN_1_3::synapse0x15ec3d0() {
   return (neuron0x15d5240()*0.0296173);
}

double NNfunction-NN_1_3::synapse0x15ec410() {
   return (neuron0x15d5580()*0.081191);
}

double NNfunction-NN_1_3::synapse0x15ec450() {
   return (neuron0x15d58c0()*-0.0932107);
}

double NNfunction-NN_1_3::synapse0x15ec490() {
   return (neuron0x15d5c00()*-0.0391103);
}

double NNfunction-NN_1_3::synapse0x15ebf20() {
   return (neuron0x15d5f40()*0.0112529);
}

double NNfunction-NN_1_3::synapse0x15ebf60() {
   return (neuron0x15d64a0()*0.00475033);
}

double NNfunction-NN_1_3::synapse0x15ec5e0() {
   return (neuron0x15d66c0()*-0.0609513);
}

double NNfunction-NN_1_3::synapse0x15ec620() {
   return (neuron0x15d6a00()*-0.0567903);
}

double NNfunction-NN_1_3::synapse0x15ec660() {
   return (neuron0x15d6d40()*0.0197469);
}

double NNfunction-NN_1_3::synapse0x15ec6a0() {
   return (neuron0x15d7080()*-0.0666522);
}

double NNfunction-NN_1_3::synapse0x15ec6e0() {
   return (neuron0x15d73c0()*-0.033238);
}

double NNfunction-NN_1_3::synapse0x15ec720() {
   return (neuron0x15d7700()*-1.11372);
}

double NNfunction-NN_1_3::synapse0x15ecaa0() {
   return (neuron0x15d2b40()*0.0800997);
}

double NNfunction-NN_1_3::synapse0x15ecae0() {
   return (neuron0x15d2e80()*-10.1787);
}

double NNfunction-NN_1_3::synapse0x15ecb20() {
   return (neuron0x15d31c0()*-0.691401);
}

double NNfunction-NN_1_3::synapse0x15ecb60() {
   return (neuron0x15d3500()*-0.0072288);
}

double NNfunction-NN_1_3::synapse0x15ecba0() {
   return (neuron0x15d3840()*0.0172128);
}

double NNfunction-NN_1_3::synapse0x15ecbe0() {
   return (neuron0x15d3b80()*0.0208343);
}

double NNfunction-NN_1_3::synapse0x15ecc20() {
   return (neuron0x15d3ec0()*-0.00900516);
}

double NNfunction-NN_1_3::synapse0x15ecc60() {
   return (neuron0x15d4200()*0.0179789);
}

double NNfunction-NN_1_3::synapse0x15ecca0() {
   return (neuron0x15d4540()*0.00801724);
}

double NNfunction-NN_1_3::synapse0x15ecce0() {
   return (neuron0x15d4880()*0.00932661);
}

double NNfunction-NN_1_3::synapse0x15ecd20() {
   return (neuron0x15d4bc0()*0.0149567);
}

double NNfunction-NN_1_3::synapse0x15ecd60() {
   return (neuron0x15d4f00()*-0.0650079);
}

double NNfunction-NN_1_3::synapse0x15ecda0() {
   return (neuron0x15d5240()*-0.00763898);
}

double NNfunction-NN_1_3::synapse0x15ecde0() {
   return (neuron0x15d5580()*-0.00814099);
}

double NNfunction-NN_1_3::synapse0x15ece20() {
   return (neuron0x15d58c0()*-0.0432041);
}

double NNfunction-NN_1_3::synapse0x15ece60() {
   return (neuron0x15d5c00()*-0.0209379);
}

double NNfunction-NN_1_3::synapse0x15ec8f0() {
   return (neuron0x15d5f40()*-0.00611834);
}

double NNfunction-NN_1_3::synapse0x15ec930() {
   return (neuron0x15d64a0()*-0.0293899);
}

double NNfunction-NN_1_3::synapse0x15ecfb0() {
   return (neuron0x15d66c0()*-0.00123788);
}

double NNfunction-NN_1_3::synapse0x15ecff0() {
   return (neuron0x15d6a00()*-0.0141734);
}

double NNfunction-NN_1_3::synapse0x15ed030() {
   return (neuron0x15d6d40()*0.0173673);
}

double NNfunction-NN_1_3::synapse0x15ed070() {
   return (neuron0x15d7080()*0.0205494);
}

double NNfunction-NN_1_3::synapse0x15ed0b0() {
   return (neuron0x15d73c0()*0.0189373);
}

double NNfunction-NN_1_3::synapse0x15ed0f0() {
   return (neuron0x15d7700()*1.91126);
}

double NNfunction-NN_1_3::synapse0x15ed470() {
   return (neuron0x15d2b40()*0.372059);
}

double NNfunction-NN_1_3::synapse0x15e1a40() {
   return (neuron0x15d2e80()*-0.00420893);
}

double NNfunction-NN_1_3::synapse0x15e1a80() {
   return (neuron0x15d31c0()*1.20652);
}

double NNfunction-NN_1_3::synapse0x15e1ac0() {
   return (neuron0x15d3500()*-0.0299449);
}

double NNfunction-NN_1_3::synapse0x15e1d10() {
   return (neuron0x15d3840()*0.0115489);
}

double NNfunction-NN_1_3::synapse0x15e1d50() {
   return (neuron0x15d3b80()*0.00198675);
}

double NNfunction-NN_1_3::synapse0x15e1d90() {
   return (neuron0x15d3ec0()*-0.0210195);
}

double NNfunction-NN_1_3::synapse0x15e1fe0() {
   return (neuron0x15d4200()*-0.00201932);
}

double NNfunction-NN_1_3::synapse0x15e2020() {
   return (neuron0x15d4540()*-0.00867224);
}

double NNfunction-NN_1_3::synapse0x15e2270() {
   return (neuron0x15d4880()*0.00774019);
}

double NNfunction-NN_1_3::synapse0x15e22b0() {
   return (neuron0x15d4bc0()*-0.0176565);
}

double NNfunction-NN_1_3::synapse0x15e22f0() {
   return (neuron0x15d4f00()*-0.177815);
}

double NNfunction-NN_1_3::synapse0x15e2540() {
   return (neuron0x15d5240()*0.0956597);
}

double NNfunction-NN_1_3::synapse0x15e2580() {
   return (neuron0x15d5580()*0.00151211);
}

double NNfunction-NN_1_3::synapse0x15e27d0() {
   return (neuron0x15d58c0()*-0.0130093);
}

double NNfunction-NN_1_3::synapse0x15e2810() {
   return (neuron0x15d5c00()*-0.00967599);
}

double NNfunction-NN_1_3::synapse0x15ed2c0() {
   return (neuron0x15d5f40()*0.0361366);
}

double NNfunction-NN_1_3::synapse0x15ed300() {
   return (neuron0x15d64a0()*-0.00100121);
}

double NNfunction-NN_1_3::synapse0x15e2960() {
   return (neuron0x15d66c0()*-0.0170963);
}

double NNfunction-NN_1_3::synapse0x15e2e70() {
   return (neuron0x15d6a00()*-0.0492642);
}

double NNfunction-NN_1_3::synapse0x15e2eb0() {
   return (neuron0x15d6d40()*-0.00221864);
}

double NNfunction-NN_1_3::synapse0x15e2ef0() {
   return (neuron0x15d7080()*0.00223879);
}

double NNfunction-NN_1_3::synapse0x15e3140() {
   return (neuron0x15d73c0()*-0.0110536);
}

double NNfunction-NN_1_3::synapse0x15e3180() {
   return (neuron0x15d7700()*-1.01599);
}

double NNfunction-NN_1_3::synapse0x15e2a30() {
   return (neuron0x15d2b40()*0.280939);
}

double NNfunction-NN_1_3::synapse0x15e2a70() {
   return (neuron0x15d2e80()*-3.62806);
}

double NNfunction-NN_1_3::synapse0x15e2ab0() {
   return (neuron0x15d31c0()*-0.432169);
}

double NNfunction-NN_1_3::synapse0x15e2af0() {
   return (neuron0x15d3500()*0.0789819);
}

double NNfunction-NN_1_3::synapse0x15e3470() {
   return (neuron0x15d3840()*-0.0340884);
}

double NNfunction-NN_1_3::synapse0x15ef7c0() {
   return (neuron0x15d3b80()*0.085991);
}

double NNfunction-NN_1_3::synapse0x15ef800() {
   return (neuron0x15d3ec0()*0.21192);
}

double NNfunction-NN_1_3::synapse0x15ef840() {
   return (neuron0x15d4200()*0.134604);
}

double NNfunction-NN_1_3::synapse0x15ef880() {
   return (neuron0x15d4540()*-0.0373485);
}

double NNfunction-NN_1_3::synapse0x15ef8c0() {
   return (neuron0x15d4880()*0.0523844);
}

double NNfunction-NN_1_3::synapse0x15ef900() {
   return (neuron0x15d4bc0()*-0.10389);
}

double NNfunction-NN_1_3::synapse0x15ef940() {
   return (neuron0x15d4f00()*-0.431501);
}

double NNfunction-NN_1_3::synapse0x15ef980() {
   return (neuron0x15d5240()*-0.0130668);
}

double NNfunction-NN_1_3::synapse0x15ef9c0() {
   return (neuron0x15d5580()*-0.202709);
}

double NNfunction-NN_1_3::synapse0x15efa00() {
   return (neuron0x15d58c0()*0.454931);
}

double NNfunction-NN_1_3::synapse0x15efa40() {
   return (neuron0x15d5c00()*0.146575);
}

double NNfunction-NN_1_3::synapse0x15e3350() {
   return (neuron0x15d5f40()*0.0835538);
}

double NNfunction-NN_1_3::synapse0x15e3390() {
   return (neuron0x15d64a0()*0.0217428);
}

double NNfunction-NN_1_3::synapse0x15efb90() {
   return (neuron0x15d66c0()*-0.0825094);
}

double NNfunction-NN_1_3::synapse0x15efbd0() {
   return (neuron0x15d6a00()*0.0657535);
}

double NNfunction-NN_1_3::synapse0x15efc10() {
   return (neuron0x15d6d40()*0.0260089);
}

double NNfunction-NN_1_3::synapse0x15efc50() {
   return (neuron0x15d7080()*0.11558);
}

double NNfunction-NN_1_3::synapse0x15efc90() {
   return (neuron0x15d73c0()*-0.0512483);
}

double NNfunction-NN_1_3::synapse0x15efcd0() {
   return (neuron0x15d7700()*1.59922);
}

double NNfunction-NN_1_3::synapse0x15f0050() {
   return (neuron0x15d2b40()*-0.179679);
}

double NNfunction-NN_1_3::synapse0x15f0090() {
   return (neuron0x15d2e80()*0.0147947);
}

double NNfunction-NN_1_3::synapse0x15f00d0() {
   return (neuron0x15d31c0()*4.94102);
}

double NNfunction-NN_1_3::synapse0x15f0110() {
   return (neuron0x15d3500()*-0.0392802);
}

double NNfunction-NN_1_3::synapse0x15f0150() {
   return (neuron0x15d3840()*-0.0244734);
}

double NNfunction-NN_1_3::synapse0x15f0190() {
   return (neuron0x15d3b80()*0.0190791);
}

double NNfunction-NN_1_3::synapse0x15f01d0() {
   return (neuron0x15d3ec0()*0.01048);
}

double NNfunction-NN_1_3::synapse0x15f0210() {
   return (neuron0x15d4200()*-0.0151763);
}

double NNfunction-NN_1_3::synapse0x15f0250() {
   return (neuron0x15d4540()*-0.032013);
}

double NNfunction-NN_1_3::synapse0x15f0290() {
   return (neuron0x15d4880()*0.000196231);
}

double NNfunction-NN_1_3::synapse0x15f02d0() {
   return (neuron0x15d4bc0()*0.00921278);
}

double NNfunction-NN_1_3::synapse0x15f0310() {
   return (neuron0x15d4f00()*0.48917);
}

double NNfunction-NN_1_3::synapse0x15f0350() {
   return (neuron0x15d5240()*0.0285151);
}

double NNfunction-NN_1_3::synapse0x15f0390() {
   return (neuron0x15d5580()*-0.0239391);
}

double NNfunction-NN_1_3::synapse0x15f03d0() {
   return (neuron0x15d58c0()*0.0325115);
}

double NNfunction-NN_1_3::synapse0x15f0410() {
   return (neuron0x15d5c00()*-0.00981996);
}

double NNfunction-NN_1_3::synapse0x15efea0() {
   return (neuron0x15d5f40()*-0.0313897);
}

double NNfunction-NN_1_3::synapse0x15efee0() {
   return (neuron0x15d64a0()*-0.00465011);
}

double NNfunction-NN_1_3::synapse0x15f0560() {
   return (neuron0x15d66c0()*0.0508475);
}

double NNfunction-NN_1_3::synapse0x15f05a0() {
   return (neuron0x15d6a00()*-0.0298352);
}

double NNfunction-NN_1_3::synapse0x15f05e0() {
   return (neuron0x15d6d40()*0.0503599);
}

double NNfunction-NN_1_3::synapse0x15f0620() {
   return (neuron0x15d7080()*-0.0433632);
}

double NNfunction-NN_1_3::synapse0x15f0660() {
   return (neuron0x15d73c0()*0.006465);
}

double NNfunction-NN_1_3::synapse0x15f06a0() {
   return (neuron0x15d7700()*4.84547);
}

double NNfunction-NN_1_3::synapse0x15f0a20() {
   return (neuron0x15d2b40()*-0.409299);
}

double NNfunction-NN_1_3::synapse0x15f0a60() {
   return (neuron0x15d2e80()*0.0740145);
}

double NNfunction-NN_1_3::synapse0x15f0aa0() {
   return (neuron0x15d31c0()*-0.154481);
}

double NNfunction-NN_1_3::synapse0x15f0ae0() {
   return (neuron0x15d3500()*-0.477948);
}

double NNfunction-NN_1_3::synapse0x15f0b20() {
   return (neuron0x15d3840()*0.133527);
}

double NNfunction-NN_1_3::synapse0x15f0b60() {
   return (neuron0x15d3b80()*0.280722);
}

double NNfunction-NN_1_3::synapse0x15f0ba0() {
   return (neuron0x15d3ec0()*-0.27341);
}

double NNfunction-NN_1_3::synapse0x15f0be0() {
   return (neuron0x15d4200()*-0.786347);
}

double NNfunction-NN_1_3::synapse0x15f0c20() {
   return (neuron0x15d4540()*-0.230302);
}

double NNfunction-NN_1_3::synapse0x15f0c60() {
   return (neuron0x15d4880()*0.249282);
}

double NNfunction-NN_1_3::synapse0x15f0ca0() {
   return (neuron0x15d4bc0()*-1.04656);
}

double NNfunction-NN_1_3::synapse0x15f0ce0() {
   return (neuron0x15d4f00()*0.132561);
}

double NNfunction-NN_1_3::synapse0x15f0d20() {
   return (neuron0x15d5240()*-0.304585);
}

double NNfunction-NN_1_3::synapse0x15f0d60() {
   return (neuron0x15d5580()*-0.193848);
}

double NNfunction-NN_1_3::synapse0x15f0da0() {
   return (neuron0x15d58c0()*0.235666);
}

double NNfunction-NN_1_3::synapse0x15f0de0() {
   return (neuron0x15d5c00()*0.11951);
}

double NNfunction-NN_1_3::synapse0x15f0870() {
   return (neuron0x15d5f40()*0.29805);
}

double NNfunction-NN_1_3::synapse0x15f08b0() {
   return (neuron0x15d64a0()*-0.441426);
}

double NNfunction-NN_1_3::synapse0x15f0f30() {
   return (neuron0x15d66c0()*0.281279);
}

double NNfunction-NN_1_3::synapse0x15f0f70() {
   return (neuron0x15d6a00()*0.443017);
}

double NNfunction-NN_1_3::synapse0x15f0fb0() {
   return (neuron0x15d6d40()*-0.00694332);
}

double NNfunction-NN_1_3::synapse0x15f0ff0() {
   return (neuron0x15d7080()*-0.210941);
}

double NNfunction-NN_1_3::synapse0x15f1030() {
   return (neuron0x15d73c0()*-0.131285);
}

double NNfunction-NN_1_3::synapse0x15f1070() {
   return (neuron0x15d7700()*-0.220701);
}

double NNfunction-NN_1_3::synapse0x15f13f0() {
   return (neuron0x15d2b40()*0.0970263);
}

double NNfunction-NN_1_3::synapse0x15f1430() {
   return (neuron0x15d2e80()*9.07112);
}

double NNfunction-NN_1_3::synapse0x15f1470() {
   return (neuron0x15d31c0()*4.7481);
}

double NNfunction-NN_1_3::synapse0x15f14b0() {
   return (neuron0x15d3500()*0.0385221);
}

double NNfunction-NN_1_3::synapse0x15f14f0() {
   return (neuron0x15d3840()*0.0209245);
}

double NNfunction-NN_1_3::synapse0x15f1530() {
   return (neuron0x15d3b80()*-0.017727);
}

double NNfunction-NN_1_3::synapse0x15f1570() {
   return (neuron0x15d3ec0()*0.0148221);
}

double NNfunction-NN_1_3::synapse0x15f15b0() {
   return (neuron0x15d4200()*-0.0046788);
}

double NNfunction-NN_1_3::synapse0x15f15f0() {
   return (neuron0x15d4540()*0.0350033);
}

double NNfunction-NN_1_3::synapse0x15f1630() {
   return (neuron0x15d4880()*-0.0312718);
}

double NNfunction-NN_1_3::synapse0x15f1670() {
   return (neuron0x15d4bc0()*-0.027417);
}

double NNfunction-NN_1_3::synapse0x15f16b0() {
   return (neuron0x15d4f00()*-0.261884);
}

double NNfunction-NN_1_3::synapse0x15f16f0() {
   return (neuron0x15d5240()*-0.0477745);
}

double NNfunction-NN_1_3::synapse0x15f1730() {
   return (neuron0x15d5580()*0.0137976);
}

double NNfunction-NN_1_3::synapse0x15f1770() {
   return (neuron0x15d58c0()*0.0319497);
}

double NNfunction-NN_1_3::synapse0x15f17b0() {
   return (neuron0x15d5c00()*0.0328343);
}

double NNfunction-NN_1_3::synapse0x15f1240() {
   return (neuron0x15d5f40()*0.0220126);
}

double NNfunction-NN_1_3::synapse0x15f1280() {
   return (neuron0x15d64a0()*-0.00666848);
}

double NNfunction-NN_1_3::synapse0x15f1900() {
   return (neuron0x15d66c0()*-0.00263328);
}

double NNfunction-NN_1_3::synapse0x15f1940() {
   return (neuron0x15d6a00()*-0.0116771);
}

double NNfunction-NN_1_3::synapse0x15f1980() {
   return (neuron0x15d6d40()*-0.0115101);
}

double NNfunction-NN_1_3::synapse0x15f19c0() {
   return (neuron0x15d7080()*-0.00291746);
}

double NNfunction-NN_1_3::synapse0x15f1a00() {
   return (neuron0x15d73c0()*0.0480811);
}

double NNfunction-NN_1_3::synapse0x15f1a40() {
   return (neuron0x15d7700()*-0.370886);
}

double NNfunction-NN_1_3::synapse0x15f1dc0() {
   return (neuron0x15d2b40()*-0.116592);
}

double NNfunction-NN_1_3::synapse0x15f1e00() {
   return (neuron0x15d2e80()*0.00848287);
}

double NNfunction-NN_1_3::synapse0x15f1e40() {
   return (neuron0x15d31c0()*2.7753);
}

double NNfunction-NN_1_3::synapse0x15f1e80() {
   return (neuron0x15d3500()*0.0370925);
}

double NNfunction-NN_1_3::synapse0x15f1ec0() {
   return (neuron0x15d3840()*0.00962022);
}

double NNfunction-NN_1_3::synapse0x15f1f00() {
   return (neuron0x15d3b80()*0.00512424);
}

double NNfunction-NN_1_3::synapse0x15f1f40() {
   return (neuron0x15d3ec0()*-0.00251537);
}

double NNfunction-NN_1_3::synapse0x15f1f80() {
   return (neuron0x15d4200()*0.0259798);
}

double NNfunction-NN_1_3::synapse0x15f1fc0() {
   return (neuron0x15d4540()*-0.00671703);
}

double NNfunction-NN_1_3::synapse0x15f2000() {
   return (neuron0x15d4880()*0.020715);
}

double NNfunction-NN_1_3::synapse0x15f2040() {
   return (neuron0x15d4bc0()*-0.00707775);
}

double NNfunction-NN_1_3::synapse0x15f2080() {
   return (neuron0x15d4f00()*-0.517193);
}

double NNfunction-NN_1_3::synapse0x15f20c0() {
   return (neuron0x15d5240()*0.199311);
}

double NNfunction-NN_1_3::synapse0x15f2100() {
   return (neuron0x15d5580()*0.00328323);
}

double NNfunction-NN_1_3::synapse0x15f2140() {
   return (neuron0x15d58c0()*-0.0140413);
}

double NNfunction-NN_1_3::synapse0x15f2180() {
   return (neuron0x15d5c00()*-0.0128404);
}

double NNfunction-NN_1_3::synapse0x15f1c10() {
   return (neuron0x15d5f40()*-0.0125626);
}

double NNfunction-NN_1_3::synapse0x15f1c50() {
   return (neuron0x15d64a0()*-0.00643832);
}

double NNfunction-NN_1_3::synapse0x15f22d0() {
   return (neuron0x15d66c0()*-0.0141369);
}

double NNfunction-NN_1_3::synapse0x15f2310() {
   return (neuron0x15d6a00()*0.00277997);
}

double NNfunction-NN_1_3::synapse0x15f2350() {
   return (neuron0x15d6d40()*-0.0145965);
}

double NNfunction-NN_1_3::synapse0x15f2390() {
   return (neuron0x15d7080()*-0.0136758);
}

double NNfunction-NN_1_3::synapse0x15f23d0() {
   return (neuron0x15d73c0()*-0.00841979);
}

double NNfunction-NN_1_3::synapse0x15f2410() {
   return (neuron0x15d7700()*0.110378);
}

double NNfunction-NN_1_3::synapse0x15f2790() {
   return (neuron0x15d2b40()*0.143976);
}

double NNfunction-NN_1_3::synapse0x15f27d0() {
   return (neuron0x15d2e80()*5.65707);
}

double NNfunction-NN_1_3::synapse0x15f2810() {
   return (neuron0x15d31c0()*-2.11877);
}

double NNfunction-NN_1_3::synapse0x15f2850() {
   return (neuron0x15d3500()*0.0061042);
}

double NNfunction-NN_1_3::synapse0x15f2890() {
   return (neuron0x15d3840()*0.0237004);
}

double NNfunction-NN_1_3::synapse0x15f28d0() {
   return (neuron0x15d3b80()*-0.00242483);
}

double NNfunction-NN_1_3::synapse0x15f2910() {
   return (neuron0x15d3ec0()*-0.0125831);
}

double NNfunction-NN_1_3::synapse0x15f2950() {
   return (neuron0x15d4200()*-0.00385972);
}

double NNfunction-NN_1_3::synapse0x15f2990() {
   return (neuron0x15d4540()*-0.022598);
}

double NNfunction-NN_1_3::synapse0x15f29d0() {
   return (neuron0x15d4880()*-0.0483428);
}

double NNfunction-NN_1_3::synapse0x15f2a10() {
   return (neuron0x15d4bc0()*-0.00467663);
}

double NNfunction-NN_1_3::synapse0x15f2a50() {
   return (neuron0x15d4f00()*-0.40146);
}

double NNfunction-NN_1_3::synapse0x15f2a90() {
   return (neuron0x15d5240()*-0.117717);
}

double NNfunction-NN_1_3::synapse0x15f2ad0() {
   return (neuron0x15d5580()*0.0153537);
}

double NNfunction-NN_1_3::synapse0x15f2b10() {
   return (neuron0x15d58c0()*0.0845724);
}

double NNfunction-NN_1_3::synapse0x15f2b50() {
   return (neuron0x15d5c00()*0.047064);
}

double NNfunction-NN_1_3::synapse0x15f25e0() {
   return (neuron0x15d5f40()*0.0285379);
}

double NNfunction-NN_1_3::synapse0x15f2620() {
   return (neuron0x15d64a0()*-0.0168622);
}

double NNfunction-NN_1_3::synapse0x15f2ca0() {
   return (neuron0x15d66c0()*0.0145459);
}

double NNfunction-NN_1_3::synapse0x15f2ce0() {
   return (neuron0x15d6a00()*0.00637696);
}

double NNfunction-NN_1_3::synapse0x15f2d20() {
   return (neuron0x15d6d40()*0.00693105);
}

double NNfunction-NN_1_3::synapse0x15f2d60() {
   return (neuron0x15d7080()*-0.0709617);
}

double NNfunction-NN_1_3::synapse0x15f2da0() {
   return (neuron0x15d73c0()*-0.0259338);
}

double NNfunction-NN_1_3::synapse0x15f2de0() {
   return (neuron0x15d7700()*-0.845221);
}

double NNfunction-NN_1_3::synapse0x15f3160() {
   return (neuron0x15d2b40()*-0.133478);
}

double NNfunction-NN_1_3::synapse0x15f31a0() {
   return (neuron0x15d2e80()*0.738183);
}

double NNfunction-NN_1_3::synapse0x15f31e0() {
   return (neuron0x15d31c0()*-0.718633);
}

double NNfunction-NN_1_3::synapse0x15f3220() {
   return (neuron0x15d3500()*0.288003);
}

double NNfunction-NN_1_3::synapse0x15f3260() {
   return (neuron0x15d3840()*0.878436);
}

double NNfunction-NN_1_3::synapse0x15f32a0() {
   return (neuron0x15d3b80()*-0.782317);
}

double NNfunction-NN_1_3::synapse0x15f32e0() {
   return (neuron0x15d3ec0()*-0.511205);
}

double NNfunction-NN_1_3::synapse0x15f3320() {
   return (neuron0x15d4200()*-0.708959);
}

double NNfunction-NN_1_3::synapse0x15f3360() {
   return (neuron0x15d4540()*0.713579);
}

double NNfunction-NN_1_3::synapse0x15f33a0() {
   return (neuron0x15d4880()*-0.478355);
}

double NNfunction-NN_1_3::synapse0x15f33e0() {
   return (neuron0x15d4bc0()*-0.0638287);
}

double NNfunction-NN_1_3::synapse0x15f3420() {
   return (neuron0x15d4f00()*-0.130306);
}

double NNfunction-NN_1_3::synapse0x15f3460() {
   return (neuron0x15d5240()*0.380247);
}

double NNfunction-NN_1_3::synapse0x15f34a0() {
   return (neuron0x15d5580()*-0.484957);
}

double NNfunction-NN_1_3::synapse0x15f34e0() {
   return (neuron0x15d58c0()*0.955997);
}

double NNfunction-NN_1_3::synapse0x15f3520() {
   return (neuron0x15d5c00()*0.136632);
}

double NNfunction-NN_1_3::synapse0x15f2fb0() {
   return (neuron0x15d5f40()*-0.539785);
}

double NNfunction-NN_1_3::synapse0x15f2ff0() {
   return (neuron0x15d64a0()*0.148231);
}

double NNfunction-NN_1_3::synapse0x15f3670() {
   return (neuron0x15d66c0()*0.43364);
}

double NNfunction-NN_1_3::synapse0x15f36b0() {
   return (neuron0x15d6a00()*0.433857);
}

double NNfunction-NN_1_3::synapse0x15f36f0() {
   return (neuron0x15d6d40()*-0.839246);
}

double NNfunction-NN_1_3::synapse0x15f3730() {
   return (neuron0x15d7080()*0.111967);
}

double NNfunction-NN_1_3::synapse0x15f3770() {
   return (neuron0x15d73c0()*0.158047);
}

double NNfunction-NN_1_3::synapse0x15f37b0() {
   return (neuron0x15d7700()*1.45935);
}

double NNfunction-NN_1_3::synapse0x15f3b30() {
   return (neuron0x15d2b40()*0.504202);
}

double NNfunction-NN_1_3::synapse0x15f3b70() {
   return (neuron0x15d2e80()*0.693403);
}

double NNfunction-NN_1_3::synapse0x15f3bb0() {
   return (neuron0x15d31c0()*-0.27168);
}

double NNfunction-NN_1_3::synapse0x15f3bf0() {
   return (neuron0x15d3500()*0.0182758);
}

double NNfunction-NN_1_3::synapse0x15f3c30() {
   return (neuron0x15d3840()*0.0661326);
}

double NNfunction-NN_1_3::synapse0x15f3c70() {
   return (neuron0x15d3b80()*0.0520272);
}

double NNfunction-NN_1_3::synapse0x15f3cb0() {
   return (neuron0x15d3ec0()*0.0446918);
}

double NNfunction-NN_1_3::synapse0x15f3cf0() {
   return (neuron0x15d4200()*-0.0642361);
}

double NNfunction-NN_1_3::synapse0x15f3d30() {
   return (neuron0x15d4540()*-0.0210271);
}

double NNfunction-NN_1_3::synapse0x15f3d70() {
   return (neuron0x15d4880()*0.0541421);
}

double NNfunction-NN_1_3::synapse0x15f3db0() {
   return (neuron0x15d4bc0()*0.045328);
}

double NNfunction-NN_1_3::synapse0x15f3df0() {
   return (neuron0x15d4f00()*0.0525098);
}

double NNfunction-NN_1_3::synapse0x15f3e30() {
   return (neuron0x15d5240()*-0.0525669);
}

double NNfunction-NN_1_3::synapse0x15f3e70() {
   return (neuron0x15d5580()*-0.0873721);
}

double NNfunction-NN_1_3::synapse0x15f3eb0() {
   return (neuron0x15d58c0()*-0.00668952);
}

double NNfunction-NN_1_3::synapse0x15f3ef0() {
   return (neuron0x15d5c00()*0.0201686);
}

double NNfunction-NN_1_3::synapse0x15f3980() {
   return (neuron0x15d5f40()*0.0614235);
}

double NNfunction-NN_1_3::synapse0x15f39c0() {
   return (neuron0x15d64a0()*-0.0630067);
}

double NNfunction-NN_1_3::synapse0x15f4040() {
   return (neuron0x15d66c0()*-0.00776025);
}

double NNfunction-NN_1_3::synapse0x15f4080() {
   return (neuron0x15d6a00()*-0.0370772);
}

double NNfunction-NN_1_3::synapse0x15f40c0() {
   return (neuron0x15d6d40()*-0.00960244);
}

double NNfunction-NN_1_3::synapse0x15f4100() {
   return (neuron0x15d7080()*0.0128471);
}

double NNfunction-NN_1_3::synapse0x15f4140() {
   return (neuron0x15d73c0()*0.0105916);
}

double NNfunction-NN_1_3::synapse0x15f4180() {
   return (neuron0x15d7700()*3.94453);
}

double NNfunction-NN_1_3::synapse0x15dcc30() {
   return (neuron0x15d2b40()*0.344615);
}

double NNfunction-NN_1_3::synapse0x15dcc70() {
   return (neuron0x15d2e80()*0.973725);
}

double NNfunction-NN_1_3::synapse0x15dccb0() {
   return (neuron0x15d31c0()*0.519126);
}

double NNfunction-NN_1_3::synapse0x15dccf0() {
   return (neuron0x15d3500()*0.0432003);
}

double NNfunction-NN_1_3::synapse0x15dcd30() {
   return (neuron0x15d3840()*-0.0106854);
}

double NNfunction-NN_1_3::synapse0x15dcd70() {
   return (neuron0x15d3b80()*-0.0681294);
}

double NNfunction-NN_1_3::synapse0x15dcdb0() {
   return (neuron0x15d3ec0()*0.0375205);
}

double NNfunction-NN_1_3::synapse0x15dcdf0() {
   return (neuron0x15d4200()*-0.0262302);
}

double NNfunction-NN_1_3::synapse0x15f4910() {
   return (neuron0x15d4540()*-0.0657676);
}

double NNfunction-NN_1_3::synapse0x15f4950() {
   return (neuron0x15d4880()*0.0833015);
}

double NNfunction-NN_1_3::synapse0x15f4990() {
   return (neuron0x15d4bc0()*-0.0381638);
}

double NNfunction-NN_1_3::synapse0x15f49d0() {
   return (neuron0x15d4f00()*-0.160979);
}

double NNfunction-NN_1_3::synapse0x15f4a10() {
   return (neuron0x15d5240()*0.036894);
}

double NNfunction-NN_1_3::synapse0x15f4a50() {
   return (neuron0x15d5580()*0.0435509);
}

double NNfunction-NN_1_3::synapse0x15f4a90() {
   return (neuron0x15d58c0()*-0.055163);
}

double NNfunction-NN_1_3::synapse0x15f4ad0() {
   return (neuron0x15d5c00()*-0.0449261);
}

double NNfunction-NN_1_3::synapse0x15f4350() {
   return (neuron0x15d5f40()*-0.107453);
}

double NNfunction-NN_1_3::synapse0x15f4390() {
   return (neuron0x15d64a0()*0.029163);
}

double NNfunction-NN_1_3::synapse0x15f4c20() {
   return (neuron0x15d66c0()*-0.0284785);
}

double NNfunction-NN_1_3::synapse0x15f4c60() {
   return (neuron0x15d6a00()*0.0781828);
}

double NNfunction-NN_1_3::synapse0x15f4ca0() {
   return (neuron0x15d6d40()*-0.172724);
}

double NNfunction-NN_1_3::synapse0x15f4ce0() {
   return (neuron0x15d7080()*0.0439429);
}

double NNfunction-NN_1_3::synapse0x15f4d20() {
   return (neuron0x15d73c0()*-0.101727);
}

double NNfunction-NN_1_3::synapse0x15f4d60() {
   return (neuron0x15d7700()*-1.68354);
}

double NNfunction-NN_1_3::synapse0x15f50e0() {
   return (neuron0x15d2b40()*-0.0306283);
}

double NNfunction-NN_1_3::synapse0x15f5120() {
   return (neuron0x15d2e80()*0.0430289);
}

double NNfunction-NN_1_3::synapse0x15f5160() {
   return (neuron0x15d31c0()*0.550125);
}

double NNfunction-NN_1_3::synapse0x15f51a0() {
   return (neuron0x15d3500()*0.527498);
}

double NNfunction-NN_1_3::synapse0x15f51e0() {
   return (neuron0x15d3840()*-0.0308967);
}

double NNfunction-NN_1_3::synapse0x15f5220() {
   return (neuron0x15d3b80()*0.0242395);
}

double NNfunction-NN_1_3::synapse0x15f5260() {
   return (neuron0x15d3ec0()*-0.00287615);
}

double NNfunction-NN_1_3::synapse0x15f52a0() {
   return (neuron0x15d4200()*-0.0746906);
}

double NNfunction-NN_1_3::synapse0x15f52e0() {
   return (neuron0x15d4540()*-0.0751645);
}

double NNfunction-NN_1_3::synapse0x15f5320() {
   return (neuron0x15d4880()*-0.134169);
}

double NNfunction-NN_1_3::synapse0x15f5360() {
   return (neuron0x15d4bc0()*-0.136042);
}

double NNfunction-NN_1_3::synapse0x15f53a0() {
   return (neuron0x15d4f00()*-0.0967038);
}

double NNfunction-NN_1_3::synapse0x15f53e0() {
   return (neuron0x15d5240()*0.0366283);
}

double NNfunction-NN_1_3::synapse0x15f5420() {
   return (neuron0x15d5580()*0.0905337);
}

double NNfunction-NN_1_3::synapse0x15f5460() {
   return (neuron0x15d58c0()*0.00351735);
}

double NNfunction-NN_1_3::synapse0x15f54a0() {
   return (neuron0x15d5c00()*0.0419317);
}

double NNfunction-NN_1_3::synapse0x15f4f30() {
   return (neuron0x15d5f40()*0.0467508);
}

double NNfunction-NN_1_3::synapse0x15f4f70() {
   return (neuron0x15d64a0()*0.016452);
}

double NNfunction-NN_1_3::synapse0x15f55f0() {
   return (neuron0x15d66c0()*-0.0825448);
}

double NNfunction-NN_1_3::synapse0x15f5630() {
   return (neuron0x15d6a00()*0.0445968);
}

double NNfunction-NN_1_3::synapse0x15f5670() {
   return (neuron0x15d6d40()*-0.0664064);
}

double NNfunction-NN_1_3::synapse0x15f56b0() {
   return (neuron0x15d7080()*-0.0532467);
}

double NNfunction-NN_1_3::synapse0x15f56f0() {
   return (neuron0x15d73c0()*-0.0457727);
}

double NNfunction-NN_1_3::synapse0x15f5730() {
   return (neuron0x15d7700()*0.677998);
}

double NNfunction-NN_1_3::synapse0x15f5ab0() {
   return (neuron0x15d2b40()*-0.252044);
}

double NNfunction-NN_1_3::synapse0x15f5af0() {
   return (neuron0x15d2e80()*0.0022196);
}

double NNfunction-NN_1_3::synapse0x15f5b30() {
   return (neuron0x15d31c0()*-4.50026);
}

double NNfunction-NN_1_3::synapse0x15f5b70() {
   return (neuron0x15d3500()*-0.0320343);
}

double NNfunction-NN_1_3::synapse0x15f5bb0() {
   return (neuron0x15d3840()*0.0744016);
}

double NNfunction-NN_1_3::synapse0x15f5bf0() {
   return (neuron0x15d3b80()*0.0203878);
}

double NNfunction-NN_1_3::synapse0x15f5c30() {
   return (neuron0x15d3ec0()*0.00694691);
}

double NNfunction-NN_1_3::synapse0x15f5c70() {
   return (neuron0x15d4200()*-0.017779);
}

double NNfunction-NN_1_3::synapse0x15f5cb0() {
   return (neuron0x15d4540()*-0.010517);
}

double NNfunction-NN_1_3::synapse0x15f5cf0() {
   return (neuron0x15d4880()*0.0339517);
}

double NNfunction-NN_1_3::synapse0x15f5d30() {
   return (neuron0x15d4bc0()*-0.00295706);
}

double NNfunction-NN_1_3::synapse0x15f5d70() {
   return (neuron0x15d4f00()*-0.0948718);
}

double NNfunction-NN_1_3::synapse0x15f5db0() {
   return (neuron0x15d5240()*-0.00591276);
}

double NNfunction-NN_1_3::synapse0x15f5df0() {
   return (neuron0x15d5580()*-0.040466);
}

double NNfunction-NN_1_3::synapse0x15f5e30() {
   return (neuron0x15d58c0()*-0.0121326);
}

double NNfunction-NN_1_3::synapse0x15f5e70() {
   return (neuron0x15d5c00()*0.0171595);
}

double NNfunction-NN_1_3::synapse0x15f5900() {
   return (neuron0x15d5f40()*0.0535053);
}

double NNfunction-NN_1_3::synapse0x15f5940() {
   return (neuron0x15d64a0()*-0.0361353);
}

double NNfunction-NN_1_3::synapse0x15e6470() {
   return (neuron0x15d66c0()*-0.00664763);
}

double NNfunction-NN_1_3::synapse0x15e64b0() {
   return (neuron0x15d6a00()*-0.0285162);
}

double NNfunction-NN_1_3::synapse0x15e64f0() {
   return (neuron0x15d6d40()*-0.0643597);
}

double NNfunction-NN_1_3::synapse0x15e6530() {
   return (neuron0x15d7080()*0.0110786);
}

double NNfunction-NN_1_3::synapse0x15e6570() {
   return (neuron0x15d73c0()*-0.0451893);
}

double NNfunction-NN_1_3::synapse0x15e65b0() {
   return (neuron0x15d7700()*8.41983);
}

double NNfunction-NN_1_3::synapse0x15e6930() {
   return (neuron0x15d2b40()*0.0259279);
}

double NNfunction-NN_1_3::synapse0x15e6970() {
   return (neuron0x15d2e80()*9.24666);
}

double NNfunction-NN_1_3::synapse0x15e69b0() {
   return (neuron0x15d31c0()*-0.994515);
}

double NNfunction-NN_1_3::synapse0x15e69f0() {
   return (neuron0x15d3500()*0.00241731);
}

double NNfunction-NN_1_3::synapse0x15e6a30() {
   return (neuron0x15d3840()*0.00582928);
}

double NNfunction-NN_1_3::synapse0x15e6a70() {
   return (neuron0x15d3b80()*0.0294304);
}

double NNfunction-NN_1_3::synapse0x15e6ab0() {
   return (neuron0x15d3ec0()*0.0113323);
}

double NNfunction-NN_1_3::synapse0x15e6af0() {
   return (neuron0x15d4200()*0.0195061);
}

double NNfunction-NN_1_3::synapse0x15e6b30() {
   return (neuron0x15d4540()*-0.00602741);
}

double NNfunction-NN_1_3::synapse0x15e6b70() {
   return (neuron0x15d4880()*0.0253344);
}

double NNfunction-NN_1_3::synapse0x15e6bb0() {
   return (neuron0x15d4bc0()*-0.0130359);
}

double NNfunction-NN_1_3::synapse0x15e6bf0() {
   return (neuron0x15d4f00()*-0.125572);
}

double NNfunction-NN_1_3::synapse0x15e6c30() {
   return (neuron0x15d5240()*0.0114825);
}

double NNfunction-NN_1_3::synapse0x15e6c70() {
   return (neuron0x15d5580()*-0.0132372);
}

double NNfunction-NN_1_3::synapse0x15e6cb0() {
   return (neuron0x15d58c0()*0.0775692);
}

double NNfunction-NN_1_3::synapse0x15e6cf0() {
   return (neuron0x15d5c00()*-0.00562267);
}

double NNfunction-NN_1_3::synapse0x15e6780() {
   return (neuron0x15d5f40()*0.00822776);
}

double NNfunction-NN_1_3::synapse0x15e67c0() {
   return (neuron0x15d64a0()*-0.00193612);
}

double NNfunction-NN_1_3::synapse0x15e6e40() {
   return (neuron0x15d66c0()*0.00599029);
}

double NNfunction-NN_1_3::synapse0x15e6e80() {
   return (neuron0x15d6a00()*-0.0135869);
}

double NNfunction-NN_1_3::synapse0x15e6ec0() {
   return (neuron0x15d6d40()*-0.0190569);
}

double NNfunction-NN_1_3::synapse0x15e6f00() {
   return (neuron0x15d7080()*0.0280554);
}

double NNfunction-NN_1_3::synapse0x15e6f40() {
   return (neuron0x15d73c0()*-0.0056181);
}

double NNfunction-NN_1_3::synapse0x15e6f80() {
   return (neuron0x15d7700()*1.3929);
}

double NNfunction-NN_1_3::synapse0x15e7300() {
   return (neuron0x15d2b40()*-0.112536);
}

double NNfunction-NN_1_3::synapse0x15e7340() {
   return (neuron0x15d2e80()*-9.72118);
}

double NNfunction-NN_1_3::synapse0x15e7380() {
   return (neuron0x15d31c0()*-1.56272);
}

double NNfunction-NN_1_3::synapse0x15e73c0() {
   return (neuron0x15d3500()*-0.000548496);
}

double NNfunction-NN_1_3::synapse0x15e7400() {
   return (neuron0x15d3840()*-0.0299216);
}

double NNfunction-NN_1_3::synapse0x15e7440() {
   return (neuron0x15d3b80()*-0.00820334);
}

double NNfunction-NN_1_3::synapse0x15e7480() {
   return (neuron0x15d3ec0()*0.00392465);
}

double NNfunction-NN_1_3::synapse0x15e74c0() {
   return (neuron0x15d4200()*0.0141774);
}

double NNfunction-NN_1_3::synapse0x15e7500() {
   return (neuron0x15d4540()*-0.00864237);
}

double NNfunction-NN_1_3::synapse0x15e7540() {
   return (neuron0x15d4880()*0.0223801);
}

double NNfunction-NN_1_3::synapse0x15e7580() {
   return (neuron0x15d4bc0()*-0.00879245);
}

double NNfunction-NN_1_3::synapse0x15e75c0() {
   return (neuron0x15d4f00()*-0.0234612);
}

double NNfunction-NN_1_3::synapse0x15e7600() {
   return (neuron0x15d5240()*-0.0176552);
}

double NNfunction-NN_1_3::synapse0x15e7640() {
   return (neuron0x15d5580()*-0.0161393);
}

double NNfunction-NN_1_3::synapse0x15e7680() {
   return (neuron0x15d58c0()*0.0244702);
}

double NNfunction-NN_1_3::synapse0x15e76c0() {
   return (neuron0x15d5c00()*-0.0183016);
}

double NNfunction-NN_1_3::synapse0x15e7150() {
   return (neuron0x15d5f40()*-0.0281063);
}

double NNfunction-NN_1_3::synapse0x15e7190() {
   return (neuron0x15d64a0()*-0.00524335);
}

double NNfunction-NN_1_3::synapse0x15e7810() {
   return (neuron0x15d66c0()*-0.0212503);
}

double NNfunction-NN_1_3::synapse0x15e7850() {
   return (neuron0x15d6a00()*-0.00577395);
}

double NNfunction-NN_1_3::synapse0x15e7890() {
   return (neuron0x15d6d40()*-0.0292519);
}

double NNfunction-NN_1_3::synapse0x15e78d0() {
   return (neuron0x15d7080()*-0.00440999);
}

double NNfunction-NN_1_3::synapse0x15e7910() {
   return (neuron0x15d73c0()*-0.0263695);
}

double NNfunction-NN_1_3::synapse0x15e7950() {
   return (neuron0x15d7700()*-3.18269);
}

double NNfunction-NN_1_3::synapse0x15e7cd0() {
   return (neuron0x15d2b40()*-0.0666853);
}

double NNfunction-NN_1_3::synapse0x15e7d10() {
   return (neuron0x15d2e80()*0.521626);
}

double NNfunction-NN_1_3::synapse0x15e7d50() {
   return (neuron0x15d31c0()*-0.17973);
}

double NNfunction-NN_1_3::synapse0x15e7d90() {
   return (neuron0x15d3500()*0.0113852);
}

double NNfunction-NN_1_3::synapse0x15e7dd0() {
   return (neuron0x15d3840()*-0.0391575);
}

double NNfunction-NN_1_3::synapse0x15e7e10() {
   return (neuron0x15d3b80()*-0.0838898);
}

double NNfunction-NN_1_3::synapse0x15e7e50() {
   return (neuron0x15d3ec0()*-0.0421739);
}

double NNfunction-NN_1_3::synapse0x15e7e90() {
   return (neuron0x15d4200()*-0.0104215);
}

double NNfunction-NN_1_3::synapse0x15e7ed0() {
   return (neuron0x15d4540()*0.000915296);
}

double NNfunction-NN_1_3::synapse0x15e7f10() {
   return (neuron0x15d4880()*0.0583898);
}

double NNfunction-NN_1_3::synapse0x15e7f50() {
   return (neuron0x15d4bc0()*0.0029328);
}

double NNfunction-NN_1_3::synapse0x15e7f90() {
   return (neuron0x15d4f00()*-0.0685743);
}

double NNfunction-NN_1_3::synapse0x15e7fd0() {
   return (neuron0x15d5240()*-0.0423857);
}

double NNfunction-NN_1_3::synapse0x15e8010() {
   return (neuron0x15d5580()*0.0608784);
}

double NNfunction-NN_1_3::synapse0x15e8050() {
   return (neuron0x15d58c0()*-0.357008);
}

double NNfunction-NN_1_3::synapse0x15e8090() {
   return (neuron0x15d5c00()*-0.0196018);
}

double NNfunction-NN_1_3::synapse0x15e7b20() {
   return (neuron0x15d5f40()*-0.145844);
}

double NNfunction-NN_1_3::synapse0x15e7b60() {
   return (neuron0x15d64a0()*-0.0107374);
}

double NNfunction-NN_1_3::synapse0x15e81e0() {
   return (neuron0x15d66c0()*-0.0174973);
}

double NNfunction-NN_1_3::synapse0x15e8220() {
   return (neuron0x15d6a00()*0.0292036);
}

double NNfunction-NN_1_3::synapse0x15e8260() {
   return (neuron0x15d6d40()*-0.0201444);
}

double NNfunction-NN_1_3::synapse0x15e82a0() {
   return (neuron0x15d7080()*0.0167956);
}

double NNfunction-NN_1_3::synapse0x15e82e0() {
   return (neuron0x15d73c0()*-0.0552805);
}

double NNfunction-NN_1_3::synapse0x15e8320() {
   return (neuron0x15d7700()*3.52331);
}

double NNfunction-NN_1_3::synapse0x15fa1f0() {
   return (neuron0x15d2b40()*0.161576);
}

double NNfunction-NN_1_3::synapse0x15fa230() {
   return (neuron0x15d2e80()*0.885228);
}

double NNfunction-NN_1_3::synapse0x15fa270() {
   return (neuron0x15d31c0()*-2.53504);
}

double NNfunction-NN_1_3::synapse0x15fa2b0() {
   return (neuron0x15d3500()*-0.0960152);
}

double NNfunction-NN_1_3::synapse0x15fa2f0() {
   return (neuron0x15d3840()*0.0290101);
}

double NNfunction-NN_1_3::synapse0x15fa330() {
   return (neuron0x15d3b80()*-0.0840875);
}

double NNfunction-NN_1_3::synapse0x15fa370() {
   return (neuron0x15d3ec0()*-0.0736776);
}

double NNfunction-NN_1_3::synapse0x15fa3b0() {
   return (neuron0x15d4200()*-0.0219148);
}

double NNfunction-NN_1_3::synapse0x15fa3f0() {
   return (neuron0x15d4540()*-0.00441862);
}

double NNfunction-NN_1_3::synapse0x15fa430() {
   return (neuron0x15d4880()*0.0324617);
}

double NNfunction-NN_1_3::synapse0x15fa470() {
   return (neuron0x15d4bc0()*-0.0827573);
}

double NNfunction-NN_1_3::synapse0x15fa4b0() {
   return (neuron0x15d4f00()*-0.394199);
}

double NNfunction-NN_1_3::synapse0x15fa4f0() {
   return (neuron0x15d5240()*-0.0262219);
}

double NNfunction-NN_1_3::synapse0x15fa530() {
   return (neuron0x15d5580()*-0.0430271);
}

double NNfunction-NN_1_3::synapse0x15fa570() {
   return (neuron0x15d58c0()*-0.00563274);
}

double NNfunction-NN_1_3::synapse0x15fa5b0() {
   return (neuron0x15d5c00()*-0.0493729);
}

double NNfunction-NN_1_3::synapse0x15e8360() {
   return (neuron0x15d5f40()*-0.0193264);
}

double NNfunction-NN_1_3::synapse0x15e83a0() {
   return (neuron0x15d64a0()*0.0113631);
}

double NNfunction-NN_1_3::synapse0x15fa700() {
   return (neuron0x15d66c0()*-0.0389753);
}

double NNfunction-NN_1_3::synapse0x15fa740() {
   return (neuron0x15d6a00()*-0.00112855);
}

double NNfunction-NN_1_3::synapse0x15fa780() {
   return (neuron0x15d6d40()*0.12484);
}

double NNfunction-NN_1_3::synapse0x15fa7c0() {
   return (neuron0x15d7080()*-0.0342417);
}

double NNfunction-NN_1_3::synapse0x15fa800() {
   return (neuron0x15d73c0()*-0.0700526);
}

double NNfunction-NN_1_3::synapse0x15fa840() {
   return (neuron0x15d7700()*0.198736);
}

double NNfunction-NN_1_3::synapse0x15fabc0() {
   return (neuron0x15d2b40()*-0.504475);
}

double NNfunction-NN_1_3::synapse0x15fac00() {
   return (neuron0x15d2e80()*0.136451);
}

double NNfunction-NN_1_3::synapse0x15fac40() {
   return (neuron0x15d31c0()*-0.358814);
}

double NNfunction-NN_1_3::synapse0x15fac80() {
   return (neuron0x15d3500()*0.279356);
}

double NNfunction-NN_1_3::synapse0x15facc0() {
   return (neuron0x15d3840()*-0.346083);
}

double NNfunction-NN_1_3::synapse0x15fad00() {
   return (neuron0x15d3b80()*-0.202784);
}

double NNfunction-NN_1_3::synapse0x15fad40() {
   return (neuron0x15d3ec0()*-0.262582);
}

double NNfunction-NN_1_3::synapse0x15fad80() {
   return (neuron0x15d4200()*0.35652);
}

double NNfunction-NN_1_3::synapse0x15fadc0() {
   return (neuron0x15d4540()*0.203047);
}

double NNfunction-NN_1_3::synapse0x15fae00() {
   return (neuron0x15d4880()*0.0244403);
}

double NNfunction-NN_1_3::synapse0x15fae40() {
   return (neuron0x15d4bc0()*-0.344981);
}

double NNfunction-NN_1_3::synapse0x15fae80() {
   return (neuron0x15d4f00()*0.756181);
}

double NNfunction-NN_1_3::synapse0x15faec0() {
   return (neuron0x15d5240()*-1.43941);
}

double NNfunction-NN_1_3::synapse0x15faf00() {
   return (neuron0x15d5580()*0.17733);
}

double NNfunction-NN_1_3::synapse0x15faf40() {
   return (neuron0x15d58c0()*-0.877777);
}

double NNfunction-NN_1_3::synapse0x15faf80() {
   return (neuron0x15d5c00()*0.332243);
}

double NNfunction-NN_1_3::synapse0x15faa10() {
   return (neuron0x15d5f40()*-0.238546);
}

double NNfunction-NN_1_3::synapse0x15faa50() {
   return (neuron0x15d64a0()*-0.279346);
}

double NNfunction-NN_1_3::synapse0x15fb0d0() {
   return (neuron0x15d66c0()*-0.666959);
}

double NNfunction-NN_1_3::synapse0x15fb110() {
   return (neuron0x15d6a00()*-0.65395);
}

double NNfunction-NN_1_3::synapse0x15fb150() {
   return (neuron0x15d6d40()*-0.308712);
}

double NNfunction-NN_1_3::synapse0x15fb190() {
   return (neuron0x15d7080()*-0.240018);
}

double NNfunction-NN_1_3::synapse0x15fb1d0() {
   return (neuron0x15d73c0()*-0.144622);
}

double NNfunction-NN_1_3::synapse0x15fb210() {
   return (neuron0x15d7700()*0.393903);
}

double NNfunction-NN_1_3::synapse0x15fb590() {
   return (neuron0x15d2b40()*0.155555);
}

double NNfunction-NN_1_3::synapse0x15fb5d0() {
   return (neuron0x15d2e80()*-0.0177815);
}

double NNfunction-NN_1_3::synapse0x15fb610() {
   return (neuron0x15d31c0()*-0.445635);
}

double NNfunction-NN_1_3::synapse0x15fb650() {
   return (neuron0x15d3500()*-0.0169382);
}

double NNfunction-NN_1_3::synapse0x15fb690() {
   return (neuron0x15d3840()*-0.00166238);
}

double NNfunction-NN_1_3::synapse0x15fb6d0() {
   return (neuron0x15d3b80()*0.0178908);
}

double NNfunction-NN_1_3::synapse0x15fb710() {
   return (neuron0x15d3ec0()*0.0227601);
}

double NNfunction-NN_1_3::synapse0x15fb750() {
   return (neuron0x15d4200()*-0.0306733);
}

double NNfunction-NN_1_3::synapse0x15fb790() {
   return (neuron0x15d4540()*0.0105386);
}

double NNfunction-NN_1_3::synapse0x15fb7d0() {
   return (neuron0x15d4880()*0.0467492);
}

double NNfunction-NN_1_3::synapse0x15fb810() {
   return (neuron0x15d4bc0()*0.0157911);
}

double NNfunction-NN_1_3::synapse0x15fb850() {
   return (neuron0x15d4f00()*0.107961);
}

double NNfunction-NN_1_3::synapse0x15fb890() {
   return (neuron0x15d5240()*0.0162321);
}

double NNfunction-NN_1_3::synapse0x15fb8d0() {
   return (neuron0x15d5580()*-0.0339957);
}

double NNfunction-NN_1_3::synapse0x15fb910() {
   return (neuron0x15d58c0()*0.0180219);
}

double NNfunction-NN_1_3::synapse0x15fb950() {
   return (neuron0x15d5c00()*0.00751447);
}

double NNfunction-NN_1_3::synapse0x15fb3e0() {
   return (neuron0x15d5f40()*0.014145);
}

double NNfunction-NN_1_3::synapse0x15fb420() {
   return (neuron0x15d64a0()*-0.0345999);
}

double NNfunction-NN_1_3::synapse0x15fbaa0() {
   return (neuron0x15d66c0()*0.0229679);
}

double NNfunction-NN_1_3::synapse0x15fbae0() {
   return (neuron0x15d6a00()*-0.0295876);
}

double NNfunction-NN_1_3::synapse0x15fbb20() {
   return (neuron0x15d6d40()*0.0190064);
}

double NNfunction-NN_1_3::synapse0x15fbb60() {
   return (neuron0x15d7080()*-0.00369756);
}

double NNfunction-NN_1_3::synapse0x15fbba0() {
   return (neuron0x15d73c0()*-0.0282543);
}

double NNfunction-NN_1_3::synapse0x15fbbe0() {
   return (neuron0x15d7700()*5.34887);
}

double NNfunction-NN_1_3::synapse0x15fbf60() {
   return (neuron0x15d2b40()*0.0351647);
}

double NNfunction-NN_1_3::synapse0x15fbfa0() {
   return (neuron0x15d2e80()*0.830677);
}

double NNfunction-NN_1_3::synapse0x15fbfe0() {
   return (neuron0x15d31c0()*0.215275);
}

double NNfunction-NN_1_3::synapse0x15fc020() {
   return (neuron0x15d3500()*-0.0341244);
}

double NNfunction-NN_1_3::synapse0x15fc060() {
   return (neuron0x15d3840()*-0.0461108);
}

double NNfunction-NN_1_3::synapse0x15fc0a0() {
   return (neuron0x15d3b80()*-0.00623135);
}

double NNfunction-NN_1_3::synapse0x15fc0e0() {
   return (neuron0x15d3ec0()*-0.0203187);
}

double NNfunction-NN_1_3::synapse0x15fc120() {
   return (neuron0x15d4200()*0.0310775);
}

double NNfunction-NN_1_3::synapse0x15fc160() {
   return (neuron0x15d4540()*0.0606074);
}

double NNfunction-NN_1_3::synapse0x15fc1a0() {
   return (neuron0x15d4880()*-0.0629186);
}

double NNfunction-NN_1_3::synapse0x15fc1e0() {
   return (neuron0x15d4bc0()*0.0122201);
}

double NNfunction-NN_1_3::synapse0x15fc220() {
   return (neuron0x15d4f00()*0.097726);
}

double NNfunction-NN_1_3::synapse0x15fc260() {
   return (neuron0x15d5240()*0.0115385);
}

double NNfunction-NN_1_3::synapse0x15fc2a0() {
   return (neuron0x15d5580()*0.0415254);
}

double NNfunction-NN_1_3::synapse0x15fc2e0() {
   return (neuron0x15d58c0()*-3.75092);
}

double NNfunction-NN_1_3::synapse0x15fc320() {
   return (neuron0x15d5c00()*0.0426455);
}

double NNfunction-NN_1_3::synapse0x15fbdb0() {
   return (neuron0x15d5f40()*-0.00358072);
}

double NNfunction-NN_1_3::synapse0x15fbdf0() {
   return (neuron0x15d64a0()*-0.0265504);
}

double NNfunction-NN_1_3::synapse0x15fc470() {
   return (neuron0x15d66c0()*0.0215649);
}

double NNfunction-NN_1_3::synapse0x15fc4b0() {
   return (neuron0x15d6a00()*0.0394985);
}

double NNfunction-NN_1_3::synapse0x15fc4f0() {
   return (neuron0x15d6d40()*0.0529421);
}

double NNfunction-NN_1_3::synapse0x15fc530() {
   return (neuron0x15d7080()*0.0149203);
}

double NNfunction-NN_1_3::synapse0x15fc570() {
   return (neuron0x15d73c0()*0.0675709);
}

double NNfunction-NN_1_3::synapse0x15fc5b0() {
   return (neuron0x15d7700()*-0.277181);
}

double NNfunction-NN_1_3::synapse0x15d8b50() {
   return (neuron0x15d7ba0()*0.296525);
}

double NNfunction-NN_1_3::synapse0x15d8b90() {
   return (neuron0x15d84b0()*-0.263575);
}

double NNfunction-NN_1_3::synapse0x15da060() {
   return (neuron0x15d8f90()*-0.458922);
}

double NNfunction-NN_1_3::synapse0x15da0a0() {
   return (neuron0x1392820()*0.466743);
}

double NNfunction-NN_1_3::synapse0x15daa30() {
   return (neuron0x15d9db0()*0.337826);
}

double NNfunction-NN_1_3::synapse0x15daa70() {
   return (neuron0x15da780()*-1.37145);
}

double NNfunction-NN_1_3::synapse0x15db800() {
   return (neuron0x15db550()*2.51802);
}

double NNfunction-NN_1_3::synapse0x15db840() {
   return (neuron0x15dbf20()*0.406875);
}

double NNfunction-NN_1_3::synapse0x15dc1d0() {
   return (neuron0x15dc8f0()*-0.344579);
}

double NNfunction-NN_1_3::synapse0x15dc210() {
   return (neuron0x15dd3d0()*-0.318987);
}

double NNfunction-NN_1_3::synapse0x15dcba0() {
   return (neuron0x15ddda0()*1.77186);
}

double NNfunction-NN_1_3::synapse0x15dcbe0() {
   return (neuron0x15dae80()*0.983736);
}

double NNfunction-NN_1_3::synapse0x15dd680() {
   return (neuron0x15df950()*0.463831);
}

double NNfunction-NN_1_3::synapse0x15dd6c0() {
   return (neuron0x15e0320()*-0.353554);
}

double NNfunction-NN_1_3::synapse0x15de050() {
   return (neuron0x15e0cf0()*4.82566);
}

double NNfunction-NN_1_3::synapse0x15de090() {
   return (neuron0x15e16c0()*-0.773072);
}

double NNfunction-NN_1_3::synapse0x15db130() {
   return (neuron0x15e34d0()*-0.901053);
}

double NNfunction-NN_1_3::synapse0x15db170() {
   return (neuron0x15e37b0()*-0.463556);
}

double NNfunction-NN_1_3::synapse0x15dfc00() {
   return (neuron0x15e4180()*-0.309196);
}

double NNfunction-NN_1_3::synapse0x15dfc40() {
   return (neuron0x15e4b50()*-0.733024);
}

double NNfunction-NN_1_3::synapse0x15e05d0() {
   return (neuron0x15e5520()*2.35436);
}

double NNfunction-NN_1_3::synapse0x15e0610() {
   return (neuron0x15e5ef0()*-0.713827);
}

double NNfunction-NN_1_3::synapse0x15e0fa0() {
   return (neuron0x15dea40()*0.68224);
}

double NNfunction-NN_1_3::synapse0x15e0fe0() {
   return (neuron0x15df410()*0.10921);
}

double NNfunction-NN_1_3::synapse0x15e1970() {
   return (neuron0x15e8c80()*0.873144);
}

double NNfunction-NN_1_3::synapse0x15e19b0() {
   return (neuron0x15e9650()*-0.178285);
}

double NNfunction-NN_1_3::synapse0x15d5ae0() {
   return (neuron0x15ea020()*0.750373);
}

double NNfunction-NN_1_3::synapse0x15d5b20() {
   return (neuron0x15ea9f0()*-0.338031);
}

double NNfunction-NN_1_3::synapse0x15e3a60() {
   return (neuron0x15eb3c0()*1.16673);
}

double NNfunction-NN_1_3::synapse0x15e3aa0() {
   return (neuron0x15ebd90()*2.20732);
}

double NNfunction-NN_1_3::synapse0x15e4430() {
   return (neuron0x15ec760()*1.61406);
}

double NNfunction-NN_1_3::synapse0x15e4470() {
   return (neuron0x15ed130()*-0.524684);
}

double NNfunction-NN_1_3::synapse0x15e4e00() {
   return (neuron0x15e31c0()*1.38017);
}

double NNfunction-NN_1_3::synapse0x15e4e40() {
   return (neuron0x15efd10()*3.25926);
}

double NNfunction-NN_1_3::synapse0x15e57d0() {
   return (neuron0x15f06e0()*-0.646131);
}

double NNfunction-NN_1_3::synapse0x15e5810() {
   return (neuron0x15f10b0()*0.851455);
}

double NNfunction-NN_1_3::synapse0x15e61a0() {
   return (neuron0x15f1a80()*1.16732);
}

double NNfunction-NN_1_3::synapse0x15e61e0() {
   return (neuron0x15f2450()*-0.243579);
}

double NNfunction-NN_1_3::synapse0x15decf0() {
   return (neuron0x15f2e20()*0.253483);
}

double NNfunction-NN_1_3::synapse0x15ded30() {
   return (neuron0x15f37f0()*-0.117128);
}

double NNfunction-NN_1_3::synapse0x15e85a0() {
   return (neuron0x15f41c0()*1.64163);
}

double NNfunction-NN_1_3::synapse0x15e85e0() {
   return (neuron0x15f4da0()*1.1);
}

double NNfunction-NN_1_3::synapse0x15e8f30() {
   return (neuron0x15f5770()*-3.58069);
}

double NNfunction-NN_1_3::synapse0x15e8f70() {
   return (neuron0x15e65f0()*-3.80264);
}

double NNfunction-NN_1_3::synapse0x15e9900() {
   return (neuron0x15e6fc0()*-4.12356);
}

double NNfunction-NN_1_3::synapse0x15e9940() {
   return (neuron0x15e7990()*-0.265345);
}

double NNfunction-NN_1_3::synapse0x15ea2d0() {
   return (neuron0x15f9fd0()*-0.163329);
}

double NNfunction-NN_1_3::synapse0x15ea310() {
   return (neuron0x15fa880()*0.416188);
}

double NNfunction-NN_1_3::synapse0x15eaca0() {
   return (neuron0x15fb250()*-1.44795);
}

double NNfunction-NN_1_3::synapse0x15eace0() {
   return (neuron0x15fbc20()*0.331229);
}

double NNfunction-NN_1_3::synapse0x15ed3e0() {
   return (neuron0x15d7ba0()*0.0228557);
}

double NNfunction-NN_1_3::synapse0x15ed420() {
   return (neuron0x15d84b0()*-1.81244);
}

double NNfunction-NN_1_3::synapse0x15e29a0() {
   return (neuron0x15d8f90()*-0.263524);
}

double NNfunction-NN_1_3::synapse0x15e29e0() {
   return (neuron0x1392820()*0.0967467);
}

double NNfunction-NN_1_3::synapse0x15effc0() {
   return (neuron0x15d9db0()*0.00242131);
}

double NNfunction-NN_1_3::synapse0x15f0000() {
   return (neuron0x15da780()*4.60032);
}

double NNfunction-NN_1_3::synapse0x15f0990() {
   return (neuron0x15db550()*2.78334);
}

double NNfunction-NN_1_3::synapse0x15f09d0() {
   return (neuron0x15dbf20()*1.66679);
}

double NNfunction-NN_1_3::synapse0x15f1360() {
   return (neuron0x15dc8f0()*-0.0151378);
}

double NNfunction-NN_1_3::synapse0x15f13a0() {
   return (neuron0x15dd3d0()*-1.68186);
}

double NNfunction-NN_1_3::synapse0x15f1d30() {
   return (neuron0x15ddda0()*-0.728462);
}

double NNfunction-NN_1_3::synapse0x15f1d70() {
   return (neuron0x15dae80()*0.1686);
}

double NNfunction-NN_1_3::synapse0x15f2700() {
   return (neuron0x15df950()*0.143669);
}

double NNfunction-NN_1_3::synapse0x15f2740() {
   return (neuron0x15e0320()*-0.0376037);
}

double NNfunction-NN_1_3::synapse0x15f30d0() {
   return (neuron0x15e0cf0()*-4.40576);
}

double NNfunction-NN_1_3::synapse0x15f3110() {
   return (neuron0x15e16c0()*-0.131836);
}

double NNfunction-NN_1_3::synapse0x15f3aa0() {
   return (neuron0x15e34d0()*-2.63236);
}

double NNfunction-NN_1_3::synapse0x15f3ae0() {
   return (neuron0x15e37b0()*-0.054556);
}

double NNfunction-NN_1_3::synapse0x15f4470() {
   return (neuron0x15e4180()*-2.28017);
}

double NNfunction-NN_1_3::synapse0x15f44b0() {
   return (neuron0x15e4b50()*0.959706);
}

double NNfunction-NN_1_3::synapse0x15f5050() {
   return (neuron0x15e5520()*2.6692);
}

double NNfunction-NN_1_3::synapse0x15f5090() {
   return (neuron0x15e5ef0()*-0.112334);
}

double NNfunction-NN_1_3::synapse0x15f5a20() {
   return (neuron0x15dea40()*1.57074);
}

double NNfunction-NN_1_3::synapse0x15f5a60() {
   return (neuron0x15df410()*0.0314089);
}

double NNfunction-NN_1_3::synapse0x15e68a0() {
   return (neuron0x15e8c80()*0.149383);
}

double NNfunction-NN_1_3::synapse0x15e68e0() {
   return (neuron0x15e9650()*-0.82384);
}

double NNfunction-NN_1_3::synapse0x15e7270() {
   return (neuron0x15ea020()*-0.0666612);
}

double NNfunction-NN_1_3::synapse0x15e72b0() {
   return (neuron0x15ea9f0()*-0.0741545);
}

double NNfunction-NN_1_3::synapse0x15e7c40() {
   return (neuron0x15eb3c0()*2.15957);
}

double NNfunction-NN_1_3::synapse0x15e7c80() {
   return (neuron0x15ebd90()*1.1756);
}

double NNfunction-NN_1_3::synapse0x15fa160() {
   return (neuron0x15ec760()*-0.635698);
}

double NNfunction-NN_1_3::synapse0x15fa1a0() {
   return (neuron0x15ed130()*1.999);
}

double NNfunction-NN_1_3::synapse0x15fab30() {
   return (neuron0x15e31c0()*0.0353643);
}

double NNfunction-NN_1_3::synapse0x15fab70() {
   return (neuron0x15efd10()*1.35446);
}

double NNfunction-NN_1_3::synapse0x15fb500() {
   return (neuron0x15f06e0()*-0.123496);
}

double NNfunction-NN_1_3::synapse0x15fb540() {
   return (neuron0x15f10b0()*1.04846);
}

double NNfunction-NN_1_3::synapse0x15fbed0() {
   return (neuron0x15f1a80()*3.16021);
}

double NNfunction-NN_1_3::synapse0x15fbf10() {
   return (neuron0x15f2450()*-1.02261);
}

double NNfunction-NN_1_3::synapse0x15d7dc0() {
   return (neuron0x15f2e20()*0.0827919);
}

double NNfunction-NN_1_3::synapse0x15d7e00() {
   return (neuron0x15f37f0()*0.0288925);
}

double NNfunction-NN_1_3::synapse0x15eb670() {
   return (neuron0x15f41c0()*0.264308);
}

double NNfunction-NN_1_3::synapse0x15eb6b0() {
   return (neuron0x15f4da0()*2.29893);
}

double NNfunction-NN_1_3::synapse0x15fc5f0() {
   return (neuron0x15f5770()*-1.31161);
}

double NNfunction-NN_1_3::synapse0x15fc630() {
   return (neuron0x15e65f0()*-1.85344);
}

double NNfunction-NN_1_3::synapse0x15fc670() {
   return (neuron0x15e6fc0()*-0.272446);
}

double NNfunction-NN_1_3::synapse0x15fc6b0() {
   return (neuron0x15e7990()*-0.294325);
}

double NNfunction-NN_1_3::synapse0x1603560() {
   return (neuron0x15f9fd0()*0.0758386);
}

double NNfunction-NN_1_3::synapse0x16035a0() {
   return (neuron0x15fa880()*0.0573327);
}

double NNfunction-NN_1_3::synapse0x16035e0() {
   return (neuron0x15fb250()*-1.58882);
}

double NNfunction-NN_1_3::synapse0x1603620() {
   return (neuron0x15fbc20()*0.0825874);
}

double NNfunction-NN_1_3::synapse0x16039a0() {
   return (neuron0x15d7ba0()*-0.0358945);
}

double NNfunction-NN_1_3::synapse0x16039e0() {
   return (neuron0x15d84b0()*-0.323782);
}

double NNfunction-NN_1_3::synapse0x1603a20() {
   return (neuron0x15d8f90()*0.110251);
}

double NNfunction-NN_1_3::synapse0x1603a60() {
   return (neuron0x1392820()*-0.0442735);
}

double NNfunction-NN_1_3::synapse0x1603aa0() {
   return (neuron0x15d9db0()*0.0534916);
}

double NNfunction-NN_1_3::synapse0x1603ae0() {
   return (neuron0x15da780()*-0.222079);
}

double NNfunction-NN_1_3::synapse0x1603b20() {
   return (neuron0x15db550()*-0.931668);
}

double NNfunction-NN_1_3::synapse0x1603b60() {
   return (neuron0x15dbf20()*0.655651);
}

double NNfunction-NN_1_3::synapse0x1603ba0() {
   return (neuron0x15dc8f0()*0.184407);
}

double NNfunction-NN_1_3::synapse0x1603be0() {
   return (neuron0x15dd3d0()*1.52125);
}

double NNfunction-NN_1_3::synapse0x1603c20() {
   return (neuron0x15ddda0()*-0.782301);
}

double NNfunction-NN_1_3::synapse0x1603c60() {
   return (neuron0x15dae80()*0.0801476);
}

double NNfunction-NN_1_3::synapse0x1603ca0() {
   return (neuron0x15df950()*0.0628079);
}

double NNfunction-NN_1_3::synapse0x1603ce0() {
   return (neuron0x15e0320()*0.109249);
}

double NNfunction-NN_1_3::synapse0x1603d20() {
   return (neuron0x15e0cf0()*-0.209832);
}

double NNfunction-NN_1_3::synapse0x1603d60() {
   return (neuron0x15e16c0()*-0.0725964);
}

double NNfunction-NN_1_3::synapse0x16037f0() {
   return (neuron0x15e34d0()*-0.369692);
}

double NNfunction-NN_1_3::synapse0x1603830() {
   return (neuron0x15e37b0()*-0.0786718);
}

double NNfunction-NN_1_3::synapse0x1603eb0() {
   return (neuron0x15e4180()*1.7856);
}

double NNfunction-NN_1_3::synapse0x1603ef0() {
   return (neuron0x15e4b50()*-0.745512);
}

double NNfunction-NN_1_3::synapse0x1603f30() {
   return (neuron0x15e5520()*-0.236535);
}

double NNfunction-NN_1_3::synapse0x1603f70() {
   return (neuron0x15e5ef0()*-0.0175088);
}

double NNfunction-NN_1_3::synapse0x1603fb0() {
   return (neuron0x15dea40()*-0.0978383);
}

double NNfunction-NN_1_3::synapse0x1603ff0() {
   return (neuron0x15df410()*0.0565294);
}

double NNfunction-NN_1_3::synapse0x1604030() {
   return (neuron0x15e8c80()*-0.0357398);
}

double NNfunction-NN_1_3::synapse0x1604070() {
   return (neuron0x15e9650()*-0.183964);
}

double NNfunction-NN_1_3::synapse0x16040b0() {
   return (neuron0x15ea020()*-1.38647);
}

double NNfunction-NN_1_3::synapse0x16040f0() {
   return (neuron0x15ea9f0()*0.126479);
}

double NNfunction-NN_1_3::synapse0x1604130() {
   return (neuron0x15eb3c0()*0.0444894);
}

double NNfunction-NN_1_3::synapse0x1604170() {
   return (neuron0x15ebd90()*-0.913591);
}

double NNfunction-NN_1_3::synapse0x16041b0() {
   return (neuron0x15ec760()*-1.79614);
}

double NNfunction-NN_1_3::synapse0x16041f0() {
   return (neuron0x15ed130()*-0.285192);
}

double NNfunction-NN_1_3::synapse0x1603da0() {
   return (neuron0x15e31c0()*-0.679429);
}

double NNfunction-NN_1_3::synapse0x1603de0() {
   return (neuron0x15efd10()*0.238832);
}

double NNfunction-NN_1_3::synapse0x1603e20() {
   return (neuron0x15f06e0()*-0.166014);
}

double NNfunction-NN_1_3::synapse0x1603e60() {
   return (neuron0x15f10b0()*-0.049836);
}

double NNfunction-NN_1_3::synapse0x1604440() {
   return (neuron0x15f1a80()*-0.0213368);
}

double NNfunction-NN_1_3::synapse0x1604480() {
   return (neuron0x15f2450()*-1.4);
}

double NNfunction-NN_1_3::synapse0x16044c0() {
   return (neuron0x15f2e20()*-0.0978025);
}

double NNfunction-NN_1_3::synapse0x1604500() {
   return (neuron0x15f37f0()*-0.462143);
}

double NNfunction-NN_1_3::synapse0x1604540() {
   return (neuron0x15f41c0()*1.02913);
}

double NNfunction-NN_1_3::synapse0x1604580() {
   return (neuron0x15f4da0()*-0.240702);
}

double NNfunction-NN_1_3::synapse0x16045c0() {
   return (neuron0x15f5770()*-1.275);
}

double NNfunction-NN_1_3::synapse0x1604600() {
   return (neuron0x15e65f0()*-1.79839);
}

double NNfunction-NN_1_3::synapse0x1604640() {
   return (neuron0x15e6fc0()*-0.678889);
}

double NNfunction-NN_1_3::synapse0x1604680() {
   return (neuron0x15e7990()*-1.1674);
}

double NNfunction-NN_1_3::synapse0x16046c0() {
   return (neuron0x15f9fd0()*0.174811);
}

double NNfunction-NN_1_3::synapse0x1604700() {
   return (neuron0x15fa880()*0.0292697);
}

double NNfunction-NN_1_3::synapse0x1604740() {
   return (neuron0x15fb250()*1.1159);
}

double NNfunction-NN_1_3::synapse0x1604780() {
   return (neuron0x15fbc20()*1.15594);
}

double NNfunction-NN_1_3::synapse0x1604b00() {
   return (neuron0x15d7ba0()*-0.362335);
}

double NNfunction-NN_1_3::synapse0x1604b40() {
   return (neuron0x15d84b0()*-1.60051);
}

double NNfunction-NN_1_3::synapse0x1604b80() {
   return (neuron0x15d8f90()*0.39354);
}

double NNfunction-NN_1_3::synapse0x1604bc0() {
   return (neuron0x1392820()*-0.351659);
}

double NNfunction-NN_1_3::synapse0x1604c00() {
   return (neuron0x15d9db0()*-0.683406);
}

double NNfunction-NN_1_3::synapse0x1604c40() {
   return (neuron0x15da780()*6.67317);
}

double NNfunction-NN_1_3::synapse0x1604c80() {
   return (neuron0x15db550()*-0.538324);
}

double NNfunction-NN_1_3::synapse0x1604cc0() {
   return (neuron0x15dbf20()*0.335982);
}

double NNfunction-NN_1_3::synapse0x1604d00() {
   return (neuron0x15dc8f0()*0.297994);
}

double NNfunction-NN_1_3::synapse0x1604d40() {
   return (neuron0x15dd3d0()*-0.113146);
}

double NNfunction-NN_1_3::synapse0x1604d80() {
   return (neuron0x15ddda0()*-6.06465);
}

double NNfunction-NN_1_3::synapse0x1604dc0() {
   return (neuron0x15dae80()*-0.75967);
}

double NNfunction-NN_1_3::synapse0x1604e00() {
   return (neuron0x15df950()*-0.563489);
}

double NNfunction-NN_1_3::synapse0x1604e40() {
   return (neuron0x15e0320()*1.01323);
}

double NNfunction-NN_1_3::synapse0x1604e80() {
   return (neuron0x15e0cf0()*-5.78159);
}

double NNfunction-NN_1_3::synapse0x1604ec0() {
   return (neuron0x15e16c0()*0.584513);
}

double NNfunction-NN_1_3::synapse0x1604950() {
   return (neuron0x15e34d0()*-0.699853);
}

double NNfunction-NN_1_3::synapse0x1604990() {
   return (neuron0x15e37b0()*0.338972);
}

double NNfunction-NN_1_3::synapse0x1605010() {
   return (neuron0x15e4180()*2.40868);
}

double NNfunction-NN_1_3::synapse0x1605050() {
   return (neuron0x15e4b50()*-1.81472);
}

double NNfunction-NN_1_3::synapse0x1605090() {
   return (neuron0x15e5520()*0.416213);
}

double NNfunction-NN_1_3::synapse0x16050d0() {
   return (neuron0x15e5ef0()*0.474987);
}

double NNfunction-NN_1_3::synapse0x1605110() {
   return (neuron0x15dea40()*0.109002);
}

double NNfunction-NN_1_3::synapse0x1605150() {
   return (neuron0x15df410()*-0.301806);
}

double NNfunction-NN_1_3::synapse0x1605190() {
   return (neuron0x15e8c80()*-0.694854);
}

double NNfunction-NN_1_3::synapse0x16051d0() {
   return (neuron0x15e9650()*0.338683);
}

double NNfunction-NN_1_3::synapse0x1605210() {
   return (neuron0x15ea020()*-3.82183);
}

double NNfunction-NN_1_3::synapse0x1605250() {
   return (neuron0x15ea9f0()*0.238539);
}

double NNfunction-NN_1_3::synapse0x1605290() {
   return (neuron0x15eb3c0()*-0.00883764);
}

double NNfunction-NN_1_3::synapse0x16052d0() {
   return (neuron0x15ebd90()*-0.504783);
}

double NNfunction-NN_1_3::synapse0x1605310() {
   return (neuron0x15ec760()*-4.82283);
}

double NNfunction-NN_1_3::synapse0x1605350() {
   return (neuron0x15ed130()*1.16257);
}

double NNfunction-NN_1_3::synapse0x1604f00() {
   return (neuron0x15e31c0()*-0.539304);
}

double NNfunction-NN_1_3::synapse0x1604f40() {
   return (neuron0x15efd10()*-1.11993);
}

double NNfunction-NN_1_3::synapse0x1604f80() {
   return (neuron0x15f06e0()*0.466884);
}

double NNfunction-NN_1_3::synapse0x1604fc0() {
   return (neuron0x15f10b0()*-1.81193);
}

double NNfunction-NN_1_3::synapse0x16055a0() {
   return (neuron0x15f1a80()*0.708054);
}

double NNfunction-NN_1_3::synapse0x16055e0() {
   return (neuron0x15f2450()*-1.62422);
}

double NNfunction-NN_1_3::synapse0x1605620() {
   return (neuron0x15f2e20()*-0.220434);
}

double NNfunction-NN_1_3::synapse0x1605660() {
   return (neuron0x15f37f0()*-1.62411);
}

double NNfunction-NN_1_3::synapse0x16056a0() {
   return (neuron0x15f41c0()*0.53082);
}

double NNfunction-NN_1_3::synapse0x16056e0() {
   return (neuron0x15f4da0()*-2.18341);
}

double NNfunction-NN_1_3::synapse0x1605720() {
   return (neuron0x15f5770()*1.45697);
}

double NNfunction-NN_1_3::synapse0x1605760() {
   return (neuron0x15e65f0()*-3.06531);
}

double NNfunction-NN_1_3::synapse0x16057a0() {
   return (neuron0x15e6fc0()*4.89631);
}

double NNfunction-NN_1_3::synapse0x16057e0() {
   return (neuron0x15e7990()*-1.15565);
}

double NNfunction-NN_1_3::synapse0x1605820() {
   return (neuron0x15f9fd0()*1.64629);
}

double NNfunction-NN_1_3::synapse0x1605860() {
   return (neuron0x15fa880()*-0.492728);
}

double NNfunction-NN_1_3::synapse0x16058a0() {
   return (neuron0x15fb250()*0.991374);
}

double NNfunction-NN_1_3::synapse0x16058e0() {
   return (neuron0x15fbc20()*-0.282746);
}

double NNfunction-NN_1_3::synapse0x1605c60() {
   return (neuron0x15d7ba0()*-0.329058);
}

double NNfunction-NN_1_3::synapse0x1605ca0() {
   return (neuron0x15d84b0()*-0.0707337);
}

double NNfunction-NN_1_3::synapse0x1605ce0() {
   return (neuron0x15d8f90()*0.673789);
}

double NNfunction-NN_1_3::synapse0x1605d20() {
   return (neuron0x1392820()*-0.324537);
}

double NNfunction-NN_1_3::synapse0x1605d60() {
   return (neuron0x15d9db0()*-0.0177877);
}

double NNfunction-NN_1_3::synapse0x1605da0() {
   return (neuron0x15da780()*-0.465906);
}

double NNfunction-NN_1_3::synapse0x1605de0() {
   return (neuron0x15db550()*-1.23759);
}

double NNfunction-NN_1_3::synapse0x1605e20() {
   return (neuron0x15dbf20()*0.0022556);
}

double NNfunction-NN_1_3::synapse0x1605e60() {
   return (neuron0x15dc8f0()*0.186323);
}

double NNfunction-NN_1_3::synapse0x1605ea0() {
   return (neuron0x15dd3d0()*-2.139);
}

double NNfunction-NN_1_3::synapse0x1605ee0() {
   return (neuron0x15ddda0()*1.40956);
}

double NNfunction-NN_1_3::synapse0x1605f20() {
   return (neuron0x15dae80()*-0.169012);
}

double NNfunction-NN_1_3::synapse0x1605f60() {
   return (neuron0x15df950()*-0.776518);
}

double NNfunction-NN_1_3::synapse0x1605fa0() {
   return (neuron0x15e0320()*0.179731);
}

double NNfunction-NN_1_3::synapse0x1605fe0() {
   return (neuron0x15e0cf0()*-0.556785);
}

double NNfunction-NN_1_3::synapse0x1606020() {
   return (neuron0x15e16c0()*0.384286);
}

double NNfunction-NN_1_3::synapse0x1605ab0() {
   return (neuron0x15e34d0()*0.0347162);
}

double NNfunction-NN_1_3::synapse0x1605af0() {
   return (neuron0x15e37b0()*0.0973996);
}

double NNfunction-NN_1_3::synapse0x1606170() {
   return (neuron0x15e4180()*-0.0556255);
}

double NNfunction-NN_1_3::synapse0x16061b0() {
   return (neuron0x15e4b50()*0.389396);
}

double NNfunction-NN_1_3::synapse0x16061f0() {
   return (neuron0x15e5520()*1.80659);
}

double NNfunction-NN_1_3::synapse0x1606230() {
   return (neuron0x15e5ef0()*0.206);
}

double NNfunction-NN_1_3::synapse0x1606270() {
   return (neuron0x15dea40()*-0.230744);
}

double NNfunction-NN_1_3::synapse0x16062b0() {
   return (neuron0x15df410()*-0.0135824);
}

double NNfunction-NN_1_3::synapse0x16062f0() {
   return (neuron0x15e8c80()*-0.57626);
}

double NNfunction-NN_1_3::synapse0x1606330() {
   return (neuron0x15e9650()*0.203704);
}

double NNfunction-NN_1_3::synapse0x1606370() {
   return (neuron0x15ea020()*0.267433);
}

double NNfunction-NN_1_3::synapse0x16063b0() {
   return (neuron0x15ea9f0()*0.685389);
}

double NNfunction-NN_1_3::synapse0x16063f0() {
   return (neuron0x15eb3c0()*-0.371426);
}

double NNfunction-NN_1_3::synapse0x1606430() {
   return (neuron0x15ebd90()*0.570845);
}

double NNfunction-NN_1_3::synapse0x1606470() {
   return (neuron0x15ec760()*2.43879);
}

double NNfunction-NN_1_3::synapse0x16064b0() {
   return (neuron0x15ed130()*1.16903);
}

double NNfunction-NN_1_3::synapse0x1606060() {
   return (neuron0x15e31c0()*-0.38146);
}

double NNfunction-NN_1_3::synapse0x16060a0() {
   return (neuron0x15efd10()*-1.05268);
}

double NNfunction-NN_1_3::synapse0x16060e0() {
   return (neuron0x15f06e0()*0.140624);
}

double NNfunction-NN_1_3::synapse0x1606120() {
   return (neuron0x15f10b0()*-2.05281);
}

double NNfunction-NN_1_3::synapse0x1606700() {
   return (neuron0x15f1a80()*0.269861);
}

double NNfunction-NN_1_3::synapse0x1606740() {
   return (neuron0x15f2450()*0.283459);
}

double NNfunction-NN_1_3::synapse0x1606780() {
   return (neuron0x15f2e20()*-0.528021);
}

double NNfunction-NN_1_3::synapse0x16067c0() {
   return (neuron0x15f37f0()*-0.561931);
}

double NNfunction-NN_1_3::synapse0x1606800() {
   return (neuron0x15f41c0()*0.784356);
}

double NNfunction-NN_1_3::synapse0x1606840() {
   return (neuron0x15f4da0()*-0.551388);
}

double NNfunction-NN_1_3::synapse0x1606880() {
   return (neuron0x15f5770()*-1.12271);
}

double NNfunction-NN_1_3::synapse0x16068c0() {
   return (neuron0x15e65f0()*3.37051);
}

double NNfunction-NN_1_3::synapse0x1606900() {
   return (neuron0x15e6fc0()*-1.70603);
}

double NNfunction-NN_1_3::synapse0x1606940() {
   return (neuron0x15e7990()*0.0631648);
}

double NNfunction-NN_1_3::synapse0x1606980() {
   return (neuron0x15f9fd0()*-0.349891);
}

double NNfunction-NN_1_3::synapse0x16069c0() {
   return (neuron0x15fa880()*-0.239838);
}

double NNfunction-NN_1_3::synapse0x1606a00() {
   return (neuron0x15fb250()*-0.575891);
}

double NNfunction-NN_1_3::synapse0x1606a40() {
   return (neuron0x15fbc20()*0.687661);
}

double NNfunction-NN_1_3::synapse0x15d7b60() {
   return (neuron0x1602e20()*4.70192);
}

double NNfunction-NN_1_3::synapse0x1606ca0() {
   return (neuron0x16031c0()*-11.3925);
}

double NNfunction-NN_1_3::synapse0x1606ce0() {
   return (neuron0x1603660()*3.53559);
}

double NNfunction-NN_1_3::synapse0x1606d20() {
   return (neuron0x16047c0()*12.9487);
}

double NNfunction-NN_1_3::synapse0x1606d60() {
   return (neuron0x1605920()*-0.952125);
}

